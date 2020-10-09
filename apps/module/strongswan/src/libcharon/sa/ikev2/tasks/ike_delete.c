/*
 * Copyright (C) 2006-2007 Martin Willi
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

#include "ike_delete.h"

#include <daemon.h>
#include <encoding/payloads/delete_payload.h>

#include <network/wod_channel.h>
#include <utils/cust_settings.h>
#include <processing/jobs/detach_timeout_job.h>

typedef struct private_ike_delete_t private_ike_delete_t;

/**
 * Private members of a ike_delete_t task.
 */
struct private_ike_delete_t {

	/**
	 * Public methods and task_t interface.
	 */
	ike_delete_t public;

	/**
	 * Assigned IKE_SA.
	 */
	ike_sa_t *ike_sa;

	/**
	 * Are we the initiator?
	 */
	bool initiator;

	/**
	 * are we deleting a rekeyed SA?
	 */
	bool rekeyed;

	/**
	 * are we responding to a delete, but have initated our own?
	 */
	bool simultaneous;

	/**
	 * action could be immediate (1) or default (0)
	 */
	int action;
};

METHOD(task_t, build_i, status_t,
	private_ike_delete_t *this, message_t *message)
{
	delete_payload_t *delete_payload;
	peer_cfg_t *peer_cfg;

	DBG0(DBG_IKE, "deleting IKE_SA %s[%d] between %H[%Y]...%H[%Y]",
		 this->ike_sa->get_name(this->ike_sa),
		 this->ike_sa->get_unique_id(this->ike_sa),
		 this->ike_sa->get_my_host(this->ike_sa),
		 this->ike_sa->get_my_id(this->ike_sa),
		 this->ike_sa->get_other_host(this->ike_sa),
		 this->ike_sa->get_other_id(this->ike_sa));

	delete_payload = delete_payload_create(DELETE, PROTO_IKE);
	message->add_payload(message, (payload_t*)delete_payload);

	if (this->ike_sa->get_state(this->ike_sa) == IKE_REKEYING)
	{
		this->rekeyed = TRUE;
	}
	this->ike_sa->set_state(this->ike_sa, IKE_DELETING);

	peer_cfg = this->ike_sa->get_peer_cfg(this->ike_sa);
	if(peer_cfg)
	{
		u_int32_t detach_timeout = peer_cfg->get_detach_time(peer_cfg);
		if(this->action == 1)
		{
			/* Only wait response for 1s */
			detach_timeout = 1;
		}
		job_t *job = (job_t*) detach_timeout_job_create(this->ike_sa->get_id(this->ike_sa));

		DBG1(DBG_IKE, "IKE_DELETE hard timer: %d seconds", detach_timeout);
		lib->scheduler->schedule_job(lib->scheduler, job, detach_timeout);
	}
    
	DBG1(DBG_IKE, "sending DELETE for IKE_SA %s[%d]",
		 this->ike_sa->get_name(this->ike_sa),
		 this->ike_sa->get_unique_id(this->ike_sa));

	return NEED_MORE;
}

METHOD(task_t, process_i, status_t,
	private_ike_delete_t *this, message_t *message)
{
	if (!this->rekeyed && !this->ike_sa->has_condition(this->ike_sa, COND_REAUTHENTICATING))
	{	/* invoke ike_down() hook if SA has not been rekeyed */
		/*
		*if this ike_sa has redirect success,so we need notify ike updown
		*/
		if(!(this->ike_sa->get_redirect_state(this->ike_sa) == REDIRECT_SUCCESS))
		{
			charon->bus->ike_updown(charon->bus, this->ike_sa, FALSE);
		}
		else
		{
			DBG0(DBG_IKE,"this ike sa has redirect success,so do not trigger ike updown");
		}
	}
	/* completed, delete IKE_SA by returning DESTROY_ME */
	return DESTROY_ME;
}

METHOD(task_t, process_r, status_t,
	private_ike_delete_t *this, message_t *message)
{
	/* we don't even scan the payloads, as the message wouldn't have
	 * come so far without being correct */
	DBG1(DBG_IKE, "received DELETE for IKE_SA %s[%d]",
		 this->ike_sa->get_name(this->ike_sa),
		 this->ike_sa->get_unique_id(this->ike_sa));
	DBG0(DBG_IKE, "deleting IKE_SA %s[%d] between %H[%Y]...%H[%Y]",
		 this->ike_sa->get_name(this->ike_sa),
		 this->ike_sa->get_unique_id(this->ike_sa),
		 this->ike_sa->get_my_host(this->ike_sa),
		 this->ike_sa->get_my_id(this->ike_sa),
		 this->ike_sa->get_other_host(this->ike_sa),
		 this->ike_sa->get_other_id(this->ike_sa));

	peer_cfg_t *peer_cfg;

	if (message->get_exchange_type(message) == INFORMATIONAL &&
		message->get_notify(message, AUTHENTICATION_FAILED))
	{
		/* a late AUTHENTICATION_FAILED notify from the initiator after
		 * we have established the IKE_SA: signal auth failure */
		charon->bus->alert(charon->bus, ALERT_LOCAL_AUTH_FAILED);
	}

	switch (this->ike_sa->get_state(this->ike_sa))
	{
		case IKE_CONNECTING:
			if (this->ike_sa->get_child_count(this->ike_sa) == 0)
			{
				if (this->ike_sa->get_status_code(this->ike_sa) == PDN_STATUS_OK)
				{
					this->ike_sa->set_status_code(this->ike_sa, PDN_STATUS_UNABLE_MAKE_IPSEC_TUNNEL);
				}
			}
			break;
		case IKE_ESTABLISHED:
			if (this->ike_sa->get_oos(this->ike_sa))
			{
				this->ike_sa->set_oos(this->ike_sa, OOS_END);
				DBG1(DBG_IKE, "============================= receive request from server, oos disabled.");
			}
			/*notify EPDGD reactivation_requested*/
			peer_cfg = this->ike_sa->get_peer_cfg(this->ike_sa);
			if(peer_cfg)
			{
				if(peer_cfg->get_pcscf_restore(peer_cfg))
				{
					if(message->get_exchange_type(message) == INFORMATIONAL &&
						message->get_notify(message, REACTIVATION_REQUESTED_CAUSE))
					{
						this->ike_sa->set_sub_error_code(this->ike_sa, REACTIVATION_REQUESTED_CAUSE);
						DBG1(DBG_IKE, "receive PCSCF REACTIVATION_REQUESTED_CAUSE");
					}
				}
			}
			this->ike_sa->set_state(this->ike_sa, IKE_DELETING);
			this->ike_sa->reestablish(this->ike_sa);
			return NEED_MORE;
		case IKE_REKEYING:
			this->rekeyed = TRUE;
			break;
		case IKE_DELETING:
			this->simultaneous = TRUE;
			break;
		default:
			break;
	}
	this->ike_sa->set_state(this->ike_sa, IKE_DELETING);
	return NEED_MORE;
}

METHOD(task_t, build_r, status_t,
	private_ike_delete_t *this, message_t *message)
{

	/*
	 * if simultaneous deletion happened, don't wait peer's response.
	 * Destroy IKE_SA to be make DELETE retransmission stop.
	 */
	#if 0
	if (this->simultaneous)
	{
		/* wait for peer's response for our delete request */
		return SUCCESS;
	}
	#endif

	if (!this->rekeyed)
	{	/* invoke ike_down() hook if SA has not been rekeyed */
		charon->bus->ike_updown(charon->bus, this->ike_sa, FALSE);
	}
	/* completed, delete IKE_SA by returning DESTROY_ME */
	return DESTROY_ME;
}

METHOD(task_t, get_type, task_type_t,
	private_ike_delete_t *this)
{
	return TASK_IKE_DELETE;
}

METHOD(task_t, migrate, void,
	private_ike_delete_t *this, ike_sa_t *ike_sa)
{
	this->ike_sa = ike_sa;
	this->simultaneous = FALSE;
}

METHOD(task_t, destroy, void,
	private_ike_delete_t *this)
{
	free(this);
}

/*
 * Described in header.
 */
ike_delete_t *ike_delete_create(ike_sa_t *ike_sa, bool initiator, int action)
{
	private_ike_delete_t *this;

	INIT(this,
		.public = {
			.task = {
				.get_type = _get_type,
				.migrate = _migrate,
				.destroy = _destroy,
			},
		},
		.ike_sa = ike_sa,
		.initiator = initiator,
		.action = action,

	);

	if (initiator)
	{
		this->public.task.build = _build_i;
		this->public.task.process = _process_i;
	}
	else
	{
		this->public.task.build = _build_r;
		this->public.task.process = _process_r;
	}

	return &this->public;
}
