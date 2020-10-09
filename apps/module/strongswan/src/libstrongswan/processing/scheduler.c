/*
 * Copyright (C) 2008 Tobias Brunner
 * Copyright (C) 2005-2006 Martin Willi
 * Copyright (C) 2005 Jan Hutter
 * Hochschule fuer Technik Rapperswil
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation; either version 2 of the License, or (at your
 * option) any later version.  See <http://www.fsf.org/copyleft/gpl.txt>.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
 * or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
 * for more details.
 */

#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <errno.h>

#include "scheduler.h"

#include <utils/debug.h>
#include <processing/processor.h>
#include <processing/jobs/callback_job.h>
#include <threading/thread.h>
#include <threading/condvar.h>
#include <threading/mutex.h>
#include <pthread.h>
//#include <signal.h>

#ifdef STRONGSWAN_UNIT_TEST
#include "ut_monitor.h"
#endif

#define	CAP_WAKE_ALARM 35
#define	MAX_TS_EVENT 16

/* the initial size of the heap */
#define HEAP_SIZE_DEFAULT 64

typedef struct event_t event_t;

/**
 * Event containing a job and a schedule time
 */
struct event_t {
	/**
	 * Time to fire the event.
	 */
	timeval_t time;

	/**
	 * Every event has its assigned job.
	 */
	job_t *job;
};

/**
 * destroy an event and its job
 */
static void event_destroy(event_t *event)
{
	event->job->destroy(event->job);
	free(event);
}

typedef struct private_scheduler_t private_scheduler_t;

/**
 * Private data of a scheduler_t object.
 */
struct private_scheduler_t {

	/**
	 * Public part of a scheduler_t object.
	 */
	scheduler_t public;

	/**
	 * The heap in which the events are stored.
	 */
	event_t **heap;

	/**
	 * The size of the heap.
	 */
	u_int heap_size;

	/**
	 * The number of scheduled events.
	 */
	u_int event_count;

	/**
	 * Exclusive access to list
	 */
	mutex_t *mutex;

	/**
	 * Condvar to wait for next job.
	 */
	condvar_t *condvar;

	bool cap_alarm;
	struct timespec ts;
	mutex_t *mutexTS;
	event_t *eventTS;
	event_t *eventQueue[MAX_TS_EVENT];
	job_priority_t event_priority;

	mutex_t *mutex_wake_lock;
	int wake_lock_fd;
	int wake_unlock_fd;
	int wake_lock_num;
	int wake_lock_cfg;
};

extern bool acquire_alarm_timer_wake_lock(private_scheduler_t *this, job_priority_t);
extern bool is_handle_wake_lock(private_scheduler_t *this, job_priority_t);
extern void transfer_boot_time_to_monotonic_time(timeval_t *, timeval_t *);

/**
 * Comparse two timevals, return >0 if a > b, <0 if a < b and =0 if equal
 */
static int timeval_cmp(timeval_t *a, timeval_t *b)
{
	if (a->tv_sec > b->tv_sec)
	{
		return 1;
	}
	if (a->tv_sec < b->tv_sec)
	{
		return -1;
	}
	if (a->tv_usec > b->tv_usec)
	{
		return 1;
	}
	if (a->tv_usec < b->tv_usec)
	{
		return -1;
	}
	return 0;
}

/**
 * Returns the top event without removing it. Returns NULL if the heap is empty.
 */
static event_t *peek_event(private_scheduler_t *this)
{
	return this->event_count > 0 ? this->heap[1] : NULL;
}

/**
 * Removes the top event from the heap and returns it. Returns NULL if the heap
 * is empty.
 */
static event_t *remove_event(private_scheduler_t *this)
{
	event_t *event, *top;
	if (!this->event_count)
	{
		return NULL;
	}

	/* store the value to return */
	event = this->heap[1];
	/* move the bottom event to the top */
	top = this->heap[1] = this->heap[this->event_count];

	if (--this->event_count > 1)
	{
		/* seep down the top event */
		u_int position = 1;
		while ((position << 1) <= this->event_count)
		{
			u_int child = position << 1;

			if ((child + 1) <= this->event_count &&
				timeval_cmp(&this->heap[child + 1]->time,
							&this->heap[child]->time) < 0)
			{
				/* the "right" child is smaller */
				child++;
			}

			if (timeval_cmp(&top->time, &this->heap[child]->time) <= 0)
			{
				/* the top event fires before the smaller of the two children,
				 * stop */
				break;
			}

			/* swap with the smaller child */
			this->heap[position] = this->heap[child];
			position = child;
		}
		this->heap[position] = top;
	}
	return event;
}


void *alarmsleep(private_scheduler_t * this)
{
	struct timespec tsa;
	struct timespec tsr;
	int result;
	event_t *eventTS;
	int i, queueindex;
	job_priority_t priority;

	tsa.tv_sec = 0;
	tsa.tv_nsec = 0;

	memcpy(&tsr, &this->ts, sizeof(struct timespec));
	eventTS = this->eventTS;
	priority = this->event_priority;
	this->mutex->unlock(this->mutexTS);

	DBG2(DBG_JOB, "tid: %X, alarmsleep1 %d s %d ns", pthread_self(), tsr.tv_sec, tsr.tv_nsec);

	result = clock_nanosleep(CLOCK_BOOTTIME_ALARM, 0, &tsr, &tsa);
	acquire_alarm_timer_wake_lock(this, priority);

	this->mutex->lock(this->mutexTS);
	for (queueindex = 0; queueindex < MAX_TS_EVENT; queueindex++)  {
		if (this->eventQueue[queueindex] == eventTS) {
			this->eventQueue[queueindex] = 0;
			break;
		}
	}
	this->mutex->unlock(this->mutexTS);

	DBG2(DBG_JOB, "tid: %X, alarmsleep2 %ds %d ns, result: %d, queueindex: %d",  pthread_self(), tsa.tv_sec, tsa.tv_nsec, result, queueindex);

	this->condvar->broadcast(this->condvar);
	pthread_detach(pthread_self()) ;

	return NULL;
}

/**
 * Get events from the queue and pass it to the processor
 */
static job_requeue_t schedule(private_scheduler_t * this)
{
	timeval_t now, timer_mono;
	event_t *event;
	bool timed = FALSE, oldstate;

	this->mutex->lock(this->mutex);

	time_monotonic(&now);

	if ((event = peek_event(this)) != NULL)
	{
		if (timeval_cmp(&now, &event->time) >= 0)
		{
			int time_now = time_monotonic(NULL);
			remove_event(this);
			this->mutex->unlock(this->mutex);
			DBG1(DBG_JOB, "Job timer expiry(now:%d, event->time:%d), queuing job for execution",
									time_monotonic(NULL), event->time.tv_sec);

			lib->processor->queue_job(lib->processor, event->job);
			free(event);

			return JOB_REQUEUE_DIRECT;
		}
		timersub(&event->time, &now, &now);
		if (now.tv_sec)
		{
			DBG2(DBG_JOB, "next event in %ds %dms, waiting",
				 now.tv_sec, now.tv_usec/1000);
		}
		else
		{
			DBG2(DBG_JOB, "next event in %dms, waiting", now.tv_usec/1000);
		}
		timed = TRUE;
	}
	thread_cleanup_push((thread_cleanup_t)this->mutex->unlock, this->mutex);
	oldstate = thread_cancelability(TRUE);

	if (timed)
	{
		if (this->cap_alarm)
		{
			int result_thread;
			int result_wait = 0;
			pthread_t alarm_thread = 0;
			int queueindex, i;

			this->mutex->lock(this->mutexTS);
			for (i = 0; i < MAX_TS_EVENT; i++)
			{
				DBG3(DBG_JOB, "\t\t\t, this->eventQueue[%d]: %X, event: %X", i, this->eventQueue[i], event);
				if (this->eventQueue[i] == event) {
					break;
				}
			}

			if (i >= MAX_TS_EVENT)
			{
				for (queueindex = 0; queueindex < MAX_TS_EVENT; queueindex++)
				{
					if (this->eventQueue[queueindex] == 0) {
						DBG2(DBG_JOB, "\t, waiting1 %ds %dms, event: %X, queueindex : %d", now.tv_sec, now.tv_usec/1000, event, queueindex);
						this->eventQueue[queueindex] = event;

						this->ts.tv_sec = now.tv_sec;
						this->ts.tv_nsec = now.tv_usec*1000;
						/* Backup the event parameters to prevent the following conditions
						 * 1. The event may be freed by Scheduler
						 * 2. The job may be freed by Processor */
						this->eventTS = event;
						this->event_priority = event->job->get_priority(event->job);

						result_thread = pthread_create(&alarm_thread, NULL, (void *)alarmsleep, (void *)this);
						if (result_thread < 0) {
							DBG1(DBG_JOB, "Can't create the thread for waiting1 %ds %dms", now.tv_sec, now.tv_usec/1000);
							this->mutex->unlock(this->mutexTS);
						}
						event->job->is_start_alarm_timer = TRUE;
						DBG3(DBG_JOB, "\t, child_id: %X,%ds %dms ", alarm_thread, now.tv_sec, now.tv_usec/1000);
						break;
					}
				}
				if (queueindex >= MAX_TS_EVENT) {
					this->mutex->unlock(this->mutexTS);
				}
			} else {
				this->mutex->unlock(this->mutexTS);
			}

			/* "event->time" is composed by CLOCK_BOOTTIME but pthread only
			 * support MONOTONIC clock id. We need to transfer the clock type.
			 */
			transfer_boot_time_to_monotonic_time(&event->time, &timer_mono);

			/* There are two timer running in scheduler.
			 * We prefer the alarm timer timeout first so add 5ms delay in this timer
			 */
			timeval_add_ms(&timer_mono, 5);
			result_wait = this->condvar->timed_wait_abs(this->condvar, this->mutex, timer_mono);
			DBG2(DBG_JOB, "\t,waiting2 , result_wait: %d, thread_id: %X,%ds %dms",  result_wait, alarm_thread, now.tv_sec, now.tv_usec/1000);
		} else {
			DBG3(DBG_JOB, "\t,waitingA: %d s %d ms",  now.tv_sec, now.tv_usec );
			transfer_boot_time_to_monotonic_time(&event->time, &timer_mono);
			this->condvar->timed_wait_abs(this->condvar, this->mutex, timer_mono);
			DBG3(DBG_JOB, "\t,waitingB");
		}
	}
	else
	{
		DBG2(DBG_JOB, "no events, waiting");
		this->condvar->wait(this->condvar, this->mutex);
	}
	thread_cancelability(oldstate);
	thread_cleanup_pop(TRUE);
	return JOB_REQUEUE_DIRECT;
}

METHOD(scheduler_t, release_alarm_timer_wake_lock, bool,
	private_scheduler_t *this, job_priority_t job_priority, bool is_force_release)
{
	bool result = FALSE;
	DBG3(DBG_JOB, "Release wake lock(wake_lock_num: %d, job priority: %d)",
				this->wake_lock_num, job_priority);

	if (is_force_release == true) {
		result = write(this->wake_unlock_fd, JOB_WAKE_LOCK_ID, strlen(JOB_WAKE_LOCK_ID));
		DBG1(DBG_JOB, "Force release wake lock(fd:%d, result: %d, errno:%d)",
						this->wake_unlock_fd, result, errno);
		return result;
	} else if (FALSE == is_handle_wake_lock(this, job_priority)) {
		return FALSE;
	}

	this->mutex_wake_lock->lock(this->mutex_wake_lock);
	this->wake_lock_num--;
	if (this->wake_lock_num == 0) {
		result = write(this->wake_unlock_fd, JOB_WAKE_LOCK_ID, strlen(JOB_WAKE_LOCK_ID));
		DBG1(DBG_JOB, "Release wake lock(fd:%d, result: %d, errno:%d)",
						this->wake_unlock_fd, result, errno);
	}
	this->mutex_wake_lock->unlock(this->mutex_wake_lock);

	return result;
}

bool acquire_alarm_timer_wake_lock(private_scheduler_t *this, job_priority_t job_priority)
{
	bool result = FALSE;

	DBG3(DBG_JOB, "Acquire wake lock(wake_lock_num is %d, job priority: %d, wake_lock_cfg: %d)",
			this->wake_lock_num, job_priority, this->wake_lock_cfg);

	if (FALSE == is_handle_wake_lock(this, job_priority)) {
		return FALSE;
	}

	this->mutex_wake_lock->lock(this->mutex_wake_lock);
	if (this->wake_lock_num == 0) {
		result = write(this->wake_lock_fd, JOB_WAKE_LOCK_ID, strlen(JOB_WAKE_LOCK_ID));
		DBG1(DBG_JOB, "Acquire wake lock(fd:%d, result: %d, errno:%d)", this->wake_lock_fd, result, errno);
	}
	this->wake_lock_num++;
	this->mutex_wake_lock->unlock(this->mutex_wake_lock);

	return result;
}

bool is_handle_wake_lock(private_scheduler_t *this, job_priority_t job_priority) {
    bool result = FALSE;

	switch (this->wake_lock_cfg) {
        case ALARM_TIMER_WAKE_LOCK_PARTIAL:
			/* Only acquire wake lock for specific timer job */
			if (job_priority == JOB_PRIO_HIGH_WAKE_LOCK) {
				result = TRUE;
			}
			break;

        case ALARM_TIMER_WAKE_LOCK_ALL:
			/* Acquire wake lock for all timer job */
			result = TRUE;
			break;

        case ALARM_TIMER_WAKE_LOCK_NONE:
			/* fall through */
        default:
			break;
	}
	return result;
}

void transfer_boot_time_to_monotonic_time(timeval_t *timer_boot, timeval_t *timer_mono) {
	struct timespec mono_timespec;
	timeval_t now, diff, mono_timeval;

	time_monotonic(&now);
    timersub(timer_boot, &now, &diff);

	clock_gettime(CLOCK_MONOTONIC, &mono_timespec);
    mono_timeval.tv_sec = mono_timespec.tv_sec;
    mono_timeval.tv_usec = mono_timespec.tv_nsec / 1000;

    timeradd(&mono_timeval, &diff, timer_mono);

	DBG2(DBG_LIB, "mono_time: %d, boot_time: %d, original timeout:%d, timeout: %d",
            mono_timespec.tv_sec, now.tv_sec, timer_boot->tv_sec, timer_mono->tv_sec);
}

METHOD(scheduler_t, get_job_load, u_int,
	private_scheduler_t *this)
{
	int count;
	this->mutex->lock(this->mutex);
	count = this->event_count;
	this->mutex->unlock(this->mutex);
	return count;
}

METHOD(scheduler_t, schedule_job_tv, void,
	private_scheduler_t *this, job_t *job, timeval_t tv)
{
	event_t *event;
	u_int position;

	event = malloc_thing(event_t);
	event->job = job;
	event->job->status = JOB_STATUS_QUEUED;
	event->time = tv;

	this->mutex->lock(this->mutex);

	this->event_count++;
	if (this->event_count > this->heap_size)
	{
		/* double the size of the heap */
		this->heap_size <<= 1;
		this->heap = (event_t**)realloc(this->heap,
									(this->heap_size + 1) * sizeof(event_t*));
	}
	/* "put" the event to the bottom */
	position = this->event_count;

	/* then bubble it up */
	while (position > 1 && timeval_cmp(&this->heap[position >> 1]->time,
									   &event->time) > 0)
	{
		/* parent has to be fired after the new event, move up */
		this->heap[position] = this->heap[position >> 1];
		position >>= 1;
	}
	this->heap[position] = event;

	DBG1(DBG_JOB, "Put the job(expire at %d) in heap position:%d, next expired job:%d", 
						event->time.tv_sec, position, this->heap[1]->time.tv_sec);

	this->condvar->signal(this->condvar);
	this->mutex->unlock(this->mutex);
}

METHOD(scheduler_t, schedule_job, void,
	private_scheduler_t *this, job_t *job, u_int32_t s)
{
	timeval_t tv;

	time_monotonic(&tv);
	tv.tv_sec += s;

	schedule_job_tv(this, job, tv);
}

METHOD(scheduler_t, schedule_job_ms, void,
	private_scheduler_t *this, job_t *job, u_int32_t ms)
{
	timeval_t tv, add;

	time_monotonic(&tv);
	add.tv_sec = ms / 1000;
	add.tv_usec = (ms % 1000) * 1000;

	timeradd(&tv, &add, &tv);

	schedule_job_tv(this, job, tv);
}

METHOD(scheduler_t, destroy, void,
	private_scheduler_t *this)
{
	event_t *event;
	this->condvar->destroy(this->condvar);
	this->mutex->destroy(this->mutex);
	this->mutexTS->destroy(this->mutexTS);
	this->mutex_wake_lock->destroy(this->mutex_wake_lock);
	release_alarm_timer_wake_lock(this, JOB_PRIO_HIGH_WAKE_LOCK, TRUE);

	while ((event = remove_event(this)) != NULL)
	{
		event_destroy(event);
	}
	this->cap_alarm = FALSE;
	free(this->heap);
	free(this);
}

#ifdef STRONGSWAN_UNIT_TEST
static void execute_job(void *data)
{
	event_t *event;
	timeval_t tv;

	tv.tv_sec = 0;
	tv.tv_usec = 0;

	event = malloc_thing(event_t);
	event->job = (job_t*)data;
	event->job->status = JOB_STATUS_QUEUED;
	event->time = tv;

	DBG1(DBG_JOB, "ut timer timeout execute_job");
	lib->processor->queue_job(lib->processor, event->job);
}

METHOD(scheduler_t, ut_start_timer, void,
	private_scheduler_t *this, job_t *job, u_int32_t ms, char *timer_type)
{
	timeval_t tv;
	timer_t timer;
	struct itimerspec timeout;
	char property_value[PROP_VALUE_MAX];
	__system_property_get(timer_type, property_value);

	if(strlen(property_value) > 0)
	{
		tv.tv_sec = ms / 1000;
		tv.tv_usec = (ms % 1000) * 1000;

		ut_st_timer_create(ms, &timer, execute_job, job);

		timeout.it_value.tv_sec = ms / 1000;
		timeout.it_value.tv_nsec = (ms % 1000) * 1000000;
		timeout.it_interval.tv_sec = timeout.it_value.tv_sec;
		timeout.it_interval.tv_nsec = timeout.it_value.tv_nsec;

		ut_st_timer_settime(timer, 0, &timeout, NULL);
	}
	else
	{
		schedule_job_ms(this, job, ms);
	}
}

#endif

/*
 * Described in header.
 */
scheduler_t * scheduler_create()
{
	private_scheduler_t *this;
	callback_job_t *job;
	bool bWake = FALSE;
	int result;

	if (!lib->caps->keep(lib->caps, CAP_WAKE_ALARM))
	{
		DBG1(DBG_DMN, "agent plugin requires 35 capability");
	} else {
		bWake = TRUE;
	}
	

	INIT(this,
		.public = {
			.get_job_load = _get_job_load,
			.schedule_job = _schedule_job,
			.schedule_job_ms = _schedule_job_ms,
			.schedule_job_tv = _schedule_job_tv,
			.release_alarm_timer_wake_lock = _release_alarm_timer_wake_lock,
			.destroy = _destroy,
#ifdef STRONGSWAN_UNIT_TEST
			.ut_start_timer = _ut_start_timer,
#endif
		},
		.heap_size = HEAP_SIZE_DEFAULT,
		.mutex = mutex_create(MUTEX_TYPE_DEFAULT),
		.condvar = condvar_create(CONDVAR_TYPE_DEFAULT),
		.cap_alarm = bWake,
		.mutexTS = mutex_create(MUTEX_TYPE_DEFAULT),
		.mutex_wake_lock = mutex_create(MUTEX_TYPE_DEFAULT),
		.wake_lock_num = 0,
	);

	this->heap = (event_t**)calloc(this->heap_size + 1, sizeof(event_t*));

	job = callback_job_create_with_prio((callback_job_cb_t)schedule, this,
										NULL, return_false, JOB_PRIO_CRITICAL);
	lib->processor->queue_job(lib->processor, (job_t*)job);
	memset(this->eventQueue, 0, sizeof(this->eventQueue));

	this->wake_lock_fd = open("/sys/power/wake_lock", O_RDWR | O_CLOEXEC);
	this->wake_unlock_fd = open("/sys/power/wake_unlock", O_RDWR | O_CLOEXEC);
	this->wake_lock_cfg = lib->settings->get_int(lib->settings,
							"%s.alarm_timer_wake_lock", ALARM_TIMER_WAKE_LOCK_PARTIAL, lib->ns);

	return &this->public;
}

