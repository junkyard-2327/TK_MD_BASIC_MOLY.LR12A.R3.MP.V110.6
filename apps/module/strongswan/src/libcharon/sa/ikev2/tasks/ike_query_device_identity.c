/*
 * add by xiang
 *
 */

#include "ike_query_device_identity.h"

#include <daemon.h>
#include <encoding/payloads/notify_payload.h>

#include <utils/cust_settings.h>

typedef struct private_ike_query_device_identity_t private_ike_query_device_identity_t;

/**
 * Private members of a child_config_update_t task.
 */
struct private_ike_query_device_identity_t {

	/**
	 * Public methods and task_t interface.
	 */
	ike_query_device_identity_t public;

	/**
	 * Assigned IKE_SA.
	 */
	ike_sa_t *ike_sa;

	/**
	 * Are we the initiator?
	 */
	bool initiator;

	/**
	* whether notify device_identity flag
	*/
	bool notify_device_identity;
};

METHOD(task_t, build_i, status_t,
	private_ike_query_device_identity_t *this, message_t *message)
{
	//ToDo
	return NEED_MORE;
}

METHOD(task_t, process_i, status_t,
	private_ike_query_device_identity_t *this, message_t *message)
{
	//ToDo
	return DESTROY_ME;
}

METHOD(task_t, process_r, status_t,
	private_ike_query_device_identity_t *this, message_t *message)
{
	payload_t *payload;
	notify_payload_t *notify;
	chunk_t device_identity,spi;
	uint8_t device_identity_type;

	DBG1(DBG_IKE, "received INFORMATIONAL with DEVICE_IDENTITY notify");
	notify = message->get_notify(message, DEVICE_IDENTITY);
	if(notify)
	{
		spi = notify->get_spi_data(notify);
		if(spi.len)
		{
			DBG1(DBG_IKE,"invalid DEVICE_IDENTITY notify payload");
		}
		else
		{
			device_identity = notify->get_notification_data(notify);
			device_identity_type = *((uint8_t *)device_identity.ptr+2);
			if(device_identity_type == 0x1 || device_identity_type == 0x2)
			{
				DBG1(DBG_IKE,"valid DEVICE_IDENTITY type");
				this->notify_device_identity = TRUE;
			}
			else
			{
				DBG1(DBG_IKE,"invalid DEVICE_IDENTITY type");
			}
		}
	}

	return NEED_MORE;
}

METHOD(task_t, build_r, status_t,
	private_ike_query_device_identity_t *this, message_t *message)
{
	notify_payload_t *notify;
	chunk_t data;
	peer_cfg_t *config;

	DBG0(DBG_IKE, "add DEVICE_IDENTITY payload if need");

	if(this->notify_device_identity)
	{
		DBG0(DBG_IKE, "need add DEVICE_IDENTITY payload ");
		config = this->ike_sa->get_peer_cfg(this->ike_sa);
		if(config)
		{
			char *imei_bcd = config->get_imei_bcd_encoded(config);
			if (imei_bcd)
			{
				u_int16_t size = config->get_imei_bcd_encoded_size(config);
				device_identity_payload_t device_identity_data;

				device_identity_data.length = htons(size);
				memcpy(&device_identity_data.identity_type, imei_bcd, size);
				data = chunk_create((u_char *)&device_identity_data, size + 2);
				notify = notify_payload_create_from_protocol_and_type(NOTIFY, PROTO_NONE, DEVICE_IDENTITY);
				notify->set_notification_data(notify, data);
				message->add_payload(message, (payload_t*)notify);
				DBG0(DBG_IKE, "add DEVICE_IDENTITY payload");
			}
		}
		this->notify_device_identity = FALSE;
	}
	else
	{
		DBG0(DBG_IKE, "no need add DEVICE_IDENTITY payload ");
	}

	return SUCCESS;
}

METHOD(task_t, get_type, task_type_t,
	private_ike_query_device_identity_t *this)
{
	return TASK_IKE_QUERY_DEVICE_IDENTITY;
}

METHOD(task_t, migrate, void,
	private_ike_query_device_identity_t *this, ike_sa_t *ike_sa)
{
	this->ike_sa = ike_sa;
}

METHOD(task_t, destroy, void,
	private_ike_query_device_identity_t *this)
{
	free(this);
}

/*
 * Described in header.
 */
ike_query_device_identity_t *ike_query_device_identity_create(ike_sa_t *ike_sa, bool initiator)
{
	private_ike_query_device_identity_t *this;

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
		.notify_device_identity = FALSE,
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

