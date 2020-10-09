/*
 * Copyright (C) 2006 Tobias Brunner, Daniel Roethlisberger
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

#include "oos_timeout_job.h"

#include <sa/ike_sa.h>
#include <daemon.h>

#include <utils/cust_settings.h>
#include <network/wod_channel.h>

#define OOS_TIMEOUT_EXTENSION 5

typedef struct private_oos_timeout_job_t private_oos_timeout_job_t;

/**
 * Private data of an oos_timeout_job_t Object
 */
struct private_oos_timeout_job_t {
	/**
	 * public oos_timeout_job_t interface
	 */
	oos_timeout_job_t public;

	/**
	 * ID of the IKE_SA which the message belongs to.
	 */
	ike_sa_id_t *ike_sa_id;

	/**
	 * OOS sequence number
	 */
	u_int32_t oos_seq_num;

	/*
	 * Already extend timeout?
	 */
	bool extended;
};

METHOD(job_t, destroy, void,
	private_oos_timeout_job_t *this)
{
	this->ike_sa_id->destroy(this->ike_sa_id);
	free(this);
}

METHOD(job_t, execute, job_requeue_t,
	private_oos_timeout_job_t *this)
{
	ike_sa_t *ike_sa;

	ike_sa = charon->ike_sa_manager->checkout(charon->ike_sa_manager,
											  this->ike_sa_id);
	if (ike_sa)
	{
		if (ike_sa->get_oos(ike_sa) && ike_sa->get_oos_seq_num(ike_sa) == this->oos_seq_num)
		{
			if (ike_sa->has_condition(ike_sa, COND_STALE) || this->extended) {
				ike_sa->set_oos(ike_sa, OOS_END);
				DBG1(DBG_IKE, "============================= OOS timeout (sn=%u), oos disabled.", this->oos_seq_num);
				ike_sa->update_keepalive_info(ike_sa, FALSE, FALSE);
				if (ike_sa->get_state(ike_sa) == IKE_CONNECTING)
				{
					ike_sa->set_status_code(ike_sa, PDN_STATUS_UNABLE_CONNET_EPDG);
					notify_wod_attach_failed(ike_sa->get_name(ike_sa),
										ike_sa->get_status_code(ike_sa),
										ike_sa->get_sub_error_code(ike_sa),
										ike_sa->get_backoff_timer(ike_sa));
					charon->ike_sa_manager->checkin_and_destroy(charon->ike_sa_manager, ike_sa);
				}
				else if (ike_sa->get_state(ike_sa) != IKE_DESTROYING)
				{
					ike_sa->set_status_code(ike_sa, PDN_STATUS_LOCAL_RELEASE);
					charon->bus->ike_updown(charon->bus, ike_sa, FALSE);
					charon->ike_sa_manager->checkin_and_destroy(charon->ike_sa_manager, ike_sa);
				}
				else
				{
					charon->ike_sa_manager->checkin(charon->ike_sa_manager, ike_sa);
				}
			}
			else
			{
				/* Data path ready but still in OOS state (maybe waiting DPD or doing MOBIKE) */
				DBG1(DBG_IKE, "============================= Extend OOS timeout (sn=%u) %ds", this->oos_seq_num, OOS_TIMEOUT_EXTENSION);
				lib->scheduler->schedule_job(lib->scheduler,
							(job_t*)oos_timeout_job_create(this->ike_sa_id, this->oos_seq_num, TRUE),
							OOS_TIMEOUT_EXTENSION);
				charon->ike_sa_manager->checkin(charon->ike_sa_manager, ike_sa);
			}
		}
		else
		{
			charon->ike_sa_manager->checkin(charon->ike_sa_manager, ike_sa);
		}
	}
	return JOB_REQUEUE_NONE;
}

METHOD(job_t, get_priority, job_priority_t,
	private_oos_timeout_job_t *this)
{
	return JOB_PRIO_HIGH;
}

/*
 * Described in header
 */
oos_timeout_job_t *oos_timeout_job_create(ike_sa_id_t *ike_sa_id, u_int32_t oos_seq_num, bool extended)
{
	private_oos_timeout_job_t *this;

	INIT(this,
		.public = {
			.job_interface = {
				.execute = _execute,
				.get_priority = _get_priority,
				.destroy = _destroy,
			},
		},
		.ike_sa_id = ike_sa_id->clone(ike_sa_id),
		.oos_seq_num = oos_seq_num,
		.extended = extended,
	);

	return &this->public;
}
