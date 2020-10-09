/*
 * add by xiang
 *
 */

#include "child_config_update.h"

#include <daemon.h>
#include <encoding/payloads/cp_payload.h>

#include <utils/cust_settings.h>

typedef struct private_child_config_update_t private_child_config_update_t;

/**
 * Private members of a child_config_update_t task.
 */
struct private_child_config_update_t {

	/**
	 * Public methods and task_t interface.
	 */
	child_config_update_t public;

	/**
	 * Assigned IKE_SA.
	 */
	ike_sa_t *ike_sa;

	/**
	 * Are we the initiator?
	 */
	bool initiator;

	/**
	 * update type 0:no update,1:pcscfv4 update,2:pcscfv6 update,3:pcscfv4v6 update
	 */
	child_update_type_t update_type;
};

/**
 * build PCSCF_IPV4/6_ADDRESS update attribute
 */
static configuration_attribute_t *build_pcscf_update(child_update_type_t update_type, peer_cfg_t *config)
{
	configuration_attribute_type_t type = 0;
	chunk_t chunk = chunk_empty;

	if (update_type == UPDATE_PCSCFv4)
	{
		type = config->get_cust_cp_pcscf4(config);
		chunk = chunk_empty;
	}
	else /* (update_type == UPDATE_PCSCFv6) */
	{
		type = config->get_cust_cp_pcscf6(config);
		chunk = chunk_empty;
	}
	DBG1(DBG_IKE, "building %N attribute",  configuration_attribute_type_names, type);
	return configuration_attribute_create_chunk(CONFIGURATION_ATTRIBUTE, type, chunk);
}


METHOD(task_t, build_i, status_t,
	private_child_config_update_t *this, message_t *message)
{
	//ToDo
	return NEED_MORE;
}

METHOD(task_t, process_i, status_t,
	private_child_config_update_t *this, message_t *message)
{
	//ToDo
	return DESTROY_ME;
}

METHOD(task_t, process_r, status_t,
	private_child_config_update_t *this, message_t *message)
{
	/* we don't even scan the payloads, as the message wouldn't have
	 * come so far without being correct */
	enumerator_t *enumerator, *attributes;
	payload_t *payload;
	cp_payload_t *cp;
	int has_pcscf_update = 0;
	peer_cfg_t *peer_cfg;

	DBG1(DBG_IKE, "received INFORMATIONAL request,it maybe notify update configuration");
	if (message->get_exchange_type(message) == INFORMATIONAL)
	{
		enumerator = message->create_payload_enumerator(message);
		while (enumerator->enumerate(enumerator, &payload))
		{
			switch (payload->get_type(payload))
			{
				case CONFIGURATION:
				{
					cp = (cp_payload_t*)payload;
					configuration_attribute_t *ca;
					switch(cp->get_type(cp))
					{
						case CFG_REQUEST:
						{
							bool pcscf_list_has_update =FALSE;

							attributes = cp->create_attribute_enumerator(cp);
							while (attributes->enumerate(attributes, &ca))
							{
								host_t *ip = NULL;
								chunk_t addr;
								int family = AF_INET6;

								DBG1(DBG_IKE, "processing %N attribute",
									configuration_attribute_type_names, ca->get_type(ca));
								switch (ca->get_type(ca))
								{
									case INTERNAL_IP4_ADDRESS:
									case INTERNAL_IP6_ADDRESS:
										break;
									default:
										peer_cfg = this->ike_sa->get_peer_cfg(this->ike_sa);
										if (ca->get_type(ca) == peer_cfg->get_cust_cp_pcscf4(peer_cfg))
										{
											family = AF_INET;
											addr = ca->get_chunk(ca);
											if (addr.len == 0)
											{
												ip = host_create_any(family);
											}
											else
											{
												ip = host_create_from_chunk(family, addr, 0);
												if(this->update_type == UPDATE_NONE)
												{
													this->update_type = UPDATE_PCSCFv4;
												}
												else if(this->update_type == UPDATE_PCSCFv6)
												{
													this->update_type = UPDATE_PCSCFv4v6;
												}
											}
											DBG1(DBG_IKE,"get pcscf_4 CP_REQUEST");
										}
										else if (ca->get_type(ca) == peer_cfg->get_cust_cp_pcscf6(peer_cfg))
										{
											family = AF_INET6;
											addr = ca->get_chunk(ca);
											if (addr.len == 0)
											{
												ip = host_create_any(family);
											}
											else
											{
											/* skip prefix byte in IPv6 payload*/
												if (addr.len == 17)
												{
													DBG1(DBG_IKE, "==================need patch addr.len: %d", addr.len);
													addr.len--;
												}
												ip = host_create_from_chunk(family, addr, 0);
												if(this->update_type == UPDATE_NONE)
												{
													this->update_type = UPDATE_PCSCFv6;
												}
												else if(this->update_type == UPDATE_PCSCFv4)
												{
													this->update_type = UPDATE_PCSCFv4v6;
												}

											}
												DBG1(DBG_IKE,"get pcscf_6 CP_REQUEST");
										}

										if (this->ike_sa->get_state(this->ike_sa) == IKE_ESTABLISHED)
										{
											if(ip)
											{
												DBG1(DBG_IKE,"get new pcscf,need update");
												if(!pcscf_list_has_update)
												{
													DBG1(DBG_IKE,"clear old pcscf list");
													this->ike_sa->clear_pcscfs(this->ike_sa);
													pcscf_list_has_update = TRUE;
												}
												this->ike_sa->add_pcscf(this->ike_sa, ip);
												this->ike_sa->set_pcscf_need_update(this->ike_sa, TRUE);
												DBG1(DBG_IKE,"add new pcscf to pcscf list");
											}
										}
								}
								if (ip)
								{
									ip->destroy(ip);
								}
							}
							attributes->destroy(attributes);
							if(this->ike_sa->get_pcscf_need_update(this->ike_sa))
							{
								charon->bus->ike_update(charon->bus, this->ike_sa, 0);
							}
							break;
						}
						case CFG_REPLY:
						{
							DBG1(DBG_IKE,"in the request, it must not CFG_REPLY");
							break;
						}
						default:
							DBG1(DBG_IKE,"invalid CONFIGURATION type");
					}
				}
				default:
					break;
			}
		}
		enumerator->destroy(enumerator);

	}

	return NEED_MORE;
}


METHOD(task_t, build_r, status_t,
	private_child_config_update_t *this, message_t *message)
{
	cp_payload_t *cp = NULL;

	DBG0(DBG_IKE, "build INFORMATIONAL response for update");

	switch(this->update_type)
	{
		case UPDATE_NONE:
			DBG0(DBG_IKE, "not any update configuration");
			break;
		case UPDATE_PCSCFv4:
			cp = cp_payload_create_type(CONFIGURATION, CFG_REPLY);
			cp->add_attribute(cp, build_pcscf_update(UPDATE_PCSCFv4,this->ike_sa->get_peer_cfg(this->ike_sa)));
			message->add_payload(message, (payload_t*)cp);
			break;
		case UPDATE_PCSCFv6:
			cp = cp_payload_create_type(CONFIGURATION, CFG_REPLY);
			cp->add_attribute(cp, build_pcscf_update(UPDATE_PCSCFv6,this->ike_sa->get_peer_cfg(this->ike_sa)));
			message->add_payload(message, (payload_t*)cp);
			break;
		case UPDATE_PCSCFv4v6:
			cp = cp_payload_create_type(CONFIGURATION, CFG_REPLY);
			cp->add_attribute(cp, build_pcscf_update(UPDATE_PCSCFv4,this->ike_sa->get_peer_cfg(this->ike_sa)));
			cp->add_attribute(cp, build_pcscf_update(UPDATE_PCSCFv6,this->ike_sa->get_peer_cfg(this->ike_sa)));
			message->add_payload(message, (payload_t*)cp);
			break;
		default:
			DBG0(DBG_IKE, "have not support configuration update");
	}

	return SUCCESS;
}

METHOD(task_t, get_type, task_type_t,
	private_child_config_update_t *this)
{
	return TASK_CHILD_CONFIG_UPDATE;
}

METHOD(task_t, migrate, void,
	private_child_config_update_t *this, ike_sa_t *ike_sa)
{
	this->ike_sa = ike_sa;
}

METHOD(task_t, destroy, void,
	private_child_config_update_t *this)
{
	free(this);
}

/*
 * Described in header.
 */
child_config_update_t *child_config_update_create(ike_sa_t *ike_sa, bool initiator)
{
	private_child_config_update_t *this;

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
		.update_type = UPDATE_NONE,
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

