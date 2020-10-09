/*
 * Copyright (C) 2007-2008 Tobias Brunner
 * Copyright (C) 2005-2009 Martin Willi
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

#include <string.h>

#include "peer_cfg.h"

#include <daemon.h>

#include <threading/mutex.h>
#include <collections/linked_list.h>
#include <utils/identification.h>

ENUM(cert_policy_names, CERT_ALWAYS_SEND, CERT_NEVER_SEND,
	"CERT_ALWAYS_SEND",
	"CERT_SEND_IF_ASKED",
	"CERT_NEVER_SEND",
);

ENUM(unique_policy_names, UNIQUE_NEVER, UNIQUE_KEEP,
	"UNIQUE_NEVER",
	"UNIQUE_NO",
	"UNIQUE_REPLACE",
	"UNIQUE_KEEP",
);

typedef struct private_peer_cfg_t private_peer_cfg_t;

/**
 * Private data of an peer_cfg_t object
 */
struct private_peer_cfg_t {

	/**
	 * Public part
	 */
	peer_cfg_t public;

	/**
	 * Number of references hold by others to this peer_cfg
	 */
	refcount_t refcount;

	/**
	 * Name of the peer_cfg, used to query it
	 */
	char *name;

	/**
	 * IKE config associated to this peer config
	 */
	ike_cfg_t *ike_cfg;

	/**
	 * list of child configs associated to this peer config
	 */
	linked_list_t *child_cfgs;

	/**
	 * mutex to lock access to list of child_cfgs
	 */
	mutex_t *mutex;

	/**
	 * should we send a certificate
	 */
	cert_policy_t cert_policy;

	/**
	 * uniqueness of an IKE_SA
	 */
	unique_policy_t unique;

	/**
	 * number of tries after giving up if peer does not respond
	 */
	u_int32_t keyingtries;

	/**
	 * enable support for MOBIKE
	 */
	bool use_mobike;

	/**
	 * enable support for liveness check feature
	 */
	bool liveness_check;

	/**
	 * Time for liveness check feature
	 */
	u_int32_t liveness_check_timeout;

	/**
	 * Use aggressive mode?
	 */
	bool aggressive;

	/**
	 * Use pull or push in mode config?
	 */
	bool pull_mode;

	/**
	 * Time before starting rekeying
	 */
	u_int32_t rekey_time;

	/**
	 * Time before starting reauthentication
	 */
	u_int32_t reauth_time;

	/**
	 * Time, which specifies the range of a random value subtracted from above.
	 */
	u_int32_t jitter_time;

	/**
	 * Delay before deleting a rekeying/reauthenticating SA
	 */
	u_int32_t over_time;

	/**
	 * DPD check intervall
	 */
	u_int32_t dpd;

	/**
	 * DPD timeout intervall (used for IKEv1 only)
	 */
	u_int32_t dpd_timeout;

	/**
	 * List of virtual IPs (host_t*) to request
	 */
	linked_list_t *vips;

	/**
	 * List of P-CSCF IPs (host_t*) to request
	 */
	linked_list_t *pcscfs;
	linked_list_t *intnetmasks;
	linked_list_t *intsubnets;
	char *imei;
	bool imei_changed;
	char *imei_bcd_encoded;
	u_int16_t imei_bcd_encoded_size;
	char *vif;
	u_int16_t cust_cp_pcscf4;
	u_int16_t cust_cp_pcscf6;
	u_int16_t cust_cp_imei;
	u_int16_t imei_format;
	bool use_cfg_vip;
	bool wdrv_keepalive;
	u_int32_t keepalive_time;
	u_int32_t oos_time;
	u_int32_t retrans_time;
	u_int16_t retrans_tries;
	u_int16_t retrans_base;
	bool certreq_critical;
	bool pcscf_restore;
	bool device_identity;
	bool redirect_enable;
	u_int max_redirects;
	u_int redirect_loop_detect;
	bool reauth_mbb;
	bool no_init_contact;
	bool no_eap_only;
	bool hashandurl;
	bool ocsp;
	bool addrchg_reauth;
	u_int fast_reauth;
	bool dpd_noreply;
	bool skip_check_id;
	bool skip_check_cert;
	bool server_nocert;
	bool send_del_ike_auth_ntfy_err;
	u_int32_t detach_time;

	/**
	 * List of pool names to use for virtual IP lookup
	 */
	linked_list_t *pools;

	/**
	 * local authentication configs (rulesets)
	 */
	linked_list_t *local_auth;

	/**
	 * remote authentication configs (constraints)
	 */
	linked_list_t *remote_auth;

#ifdef ME
	/**
	 * Is this a mediation connection?
	 */
	bool mediation;

	/**
	 * Name of the mediation connection to mediate through
	 */
	peer_cfg_t *mediated_by;

	/**
	 * ID of our peer at the mediation server (= leftid of the peer's conn with
	 * the mediation server)
	 */
	identification_t *peer_id;
#endif /* ME */
};

METHOD(peer_cfg_t, get_name, char*,
	private_peer_cfg_t *this)
{
	return this->name;
}

METHOD(peer_cfg_t, get_ike_version, ike_version_t,
	private_peer_cfg_t *this)
{
	return this->ike_cfg->get_version(this->ike_cfg);
}

METHOD(peer_cfg_t, get_ike_cfg, ike_cfg_t*,
	private_peer_cfg_t *this)
{
	return this->ike_cfg;
}

METHOD(peer_cfg_t, add_child_cfg, void,
	private_peer_cfg_t *this, child_cfg_t *child_cfg)
{
	this->mutex->lock(this->mutex);
	this->child_cfgs->insert_last(this->child_cfgs, child_cfg);
	this->mutex->unlock(this->mutex);
}

/**
 * child_cfg enumerator
 */
typedef struct {
	enumerator_t public;
	enumerator_t *wrapped;
	mutex_t *mutex;
} child_cfg_enumerator_t;

METHOD(peer_cfg_t, remove_child_cfg, void,
	private_peer_cfg_t *this, child_cfg_enumerator_t *enumerator)
{
	this->child_cfgs->remove_at(this->child_cfgs, enumerator->wrapped);
}

METHOD(enumerator_t, child_cfg_enumerator_destroy, void,
	child_cfg_enumerator_t *this)
{
	this->mutex->unlock(this->mutex);
	this->wrapped->destroy(this->wrapped);
	free(this);
}

METHOD(enumerator_t, child_cfg_enumerate, bool,
	child_cfg_enumerator_t *this, child_cfg_t **chd)
{
	return this->wrapped->enumerate(this->wrapped, chd);
}

METHOD(peer_cfg_t, create_child_cfg_enumerator, enumerator_t*,
	private_peer_cfg_t *this)
{
	child_cfg_enumerator_t *enumerator;

	INIT(enumerator,
		.public = {
			.enumerate = (void*)_child_cfg_enumerate,
			.destroy = (void*)_child_cfg_enumerator_destroy,
		},
		.mutex = this->mutex,
		.wrapped = this->child_cfgs->create_enumerator(this->child_cfgs),
	);

	this->mutex->lock(this->mutex);
	return &enumerator->public;
}

/**
 * Check how good a list of TS matches a given child config
 */
static int get_ts_match(child_cfg_t *cfg, bool local,
						linked_list_t *sup_list, linked_list_t *hosts)
{
	linked_list_t *cfg_list;
	enumerator_t *sup_enum, *cfg_enum;
	traffic_selector_t *sup_ts, *cfg_ts, *subset;
	int match = 0, round;

	/* fetch configured TS list, narrowing dynamic TS */
	cfg_list = cfg->get_traffic_selectors(cfg, local, NULL, hosts);

	/* use a round counter to rate leading TS with higher priority */
	round = sup_list->get_count(sup_list);

	sup_enum = sup_list->create_enumerator(sup_list);
	while (sup_enum->enumerate(sup_enum, &sup_ts))
	{
		cfg_enum = cfg_list->create_enumerator(cfg_list);
		while (cfg_enum->enumerate(cfg_enum, &cfg_ts))
		{
			if (cfg_ts->equals(cfg_ts, sup_ts))
			{	/* equality is honored better than matches */
				match += round * 5;
			}
			else
			{
				subset = cfg_ts->get_subset(cfg_ts, sup_ts);
				if (subset)
				{
					subset->destroy(subset);
					match += round * 1;
				}
			}
		}
		cfg_enum->destroy(cfg_enum);
		round--;
	}
	sup_enum->destroy(sup_enum);

	cfg_list->destroy_offset(cfg_list, offsetof(traffic_selector_t, destroy));

	return match;
}

METHOD(peer_cfg_t, select_child_cfg, child_cfg_t*,
	private_peer_cfg_t *this, linked_list_t *my_ts, linked_list_t *other_ts,
	linked_list_t *my_hosts, linked_list_t *other_hosts)
{
	child_cfg_t *current, *found = NULL;
	enumerator_t *enumerator;
	int best = 0;

	DBG2(DBG_CFG, "looking for a child config for %#R === %#R", my_ts, other_ts);
	enumerator = create_child_cfg_enumerator(this);
	while (enumerator->enumerate(enumerator, &current))
	{
		int my_prio, other_prio;

		my_prio = get_ts_match(current, TRUE, my_ts, my_hosts);
		other_prio = get_ts_match(current, FALSE, other_ts, other_hosts);

		if (my_prio && other_prio)
		{
			DBG2(DBG_CFG, "  candidate \"%s\" with prio %d+%d",
				 current->get_name(current), my_prio, other_prio);
			if (my_prio + other_prio > best)
			{
				best = my_prio + other_prio;
				DESTROY_IF(found);
				found = current->get_ref(current);
			}
		}
	}
	enumerator->destroy(enumerator);
	if (found)
	{
		DBG2(DBG_CFG, "found matching child config \"%s\" with prio %d",
			 found->get_name(found), best);
	}
	return found;
}

METHOD(peer_cfg_t, get_cert_policy, cert_policy_t,
	private_peer_cfg_t *this)
{
	return this->cert_policy;
}

METHOD(peer_cfg_t, get_unique_policy, unique_policy_t,
	private_peer_cfg_t *this)
{
	return this->unique;
}

METHOD(peer_cfg_t, get_keyingtries, u_int32_t,
	private_peer_cfg_t *this)
{
	return this->keyingtries;
}

METHOD(peer_cfg_t, get_rekey_time, u_int32_t,
	private_peer_cfg_t *this, bool jitter)
{
	if (this->rekey_time == 0)
	{
		return 0;
	}
	if (this->jitter_time == 0 || !jitter)
	{
		return this->rekey_time;
	}
	return this->rekey_time - (random() % this->jitter_time);
}

METHOD(peer_cfg_t, get_reauth_time, u_int32_t,
	private_peer_cfg_t *this, bool jitter)
{
	if (this->reauth_time == 0)
	{
		return 0;
	}
	if (this->jitter_time == 0 || !jitter)
	{
		return this->reauth_time;
	}
	return this->reauth_time - (random() % this->jitter_time);
}

METHOD(peer_cfg_t, get_over_time, u_int32_t,
	private_peer_cfg_t *this)
{
	return this->over_time;
}

METHOD(peer_cfg_t, use_mobike, bool,
	private_peer_cfg_t *this)
{
	return this->use_mobike;
}

METHOD(peer_cfg_t, get_liveness_check, bool,
	private_peer_cfg_t *this)
{
	return this->liveness_check;
}

METHOD(peer_cfg_t, get_liveness_check_timeout, u_int32_t,
	private_peer_cfg_t *this)
{
	return this->liveness_check_timeout;
}

METHOD(peer_cfg_t, set_liveness_check_timeout, void, private_peer_cfg_t *this, u_int32_t liveness_check_timeout)
{
	this->liveness_check_timeout = liveness_check_timeout;
}

METHOD(peer_cfg_t, use_aggressive, bool,
	private_peer_cfg_t *this)
{
	return this->aggressive;
}

METHOD(peer_cfg_t, use_pull_mode, bool,
	private_peer_cfg_t *this)
{
	return this->pull_mode;
}

METHOD(peer_cfg_t, get_dpd, u_int32_t,
	private_peer_cfg_t *this)
{
	return this->dpd;
}

METHOD(peer_cfg_t, set_dpd, void, private_peer_cfg_t *this, u_int32_t dpd_timeout)
{
	this->dpd = dpd_timeout;
}

METHOD(peer_cfg_t, get_dpd_timeout, u_int32_t,
	private_peer_cfg_t *this)
{
	return this->dpd_timeout;
}

METHOD(peer_cfg_t, add_virtual_ip, void,
	private_peer_cfg_t *this, host_t *vip)
{
	this->vips->insert_last(this->vips, vip);
}

METHOD(peer_cfg_t, create_virtual_ip_enumerator, enumerator_t*,
	private_peer_cfg_t *this)
{
	return this->vips->create_enumerator(this->vips);
}

METHOD(peer_cfg_t, add_pcscf, void, private_peer_cfg_t *this, host_t *pcscf)
{
	this->pcscfs->insert_last(this->pcscfs, pcscf);
}

METHOD(peer_cfg_t, create_pcscf_enumerator, enumerator_t*,
	private_peer_cfg_t *this)
{
	return this->pcscfs->create_enumerator(this->pcscfs);
}

METHOD(peer_cfg_t, add_intsubnet, void, private_peer_cfg_t *this, host_t *subnet)
{
	this->intsubnets->insert_last(this->intsubnets, subnet);
}

METHOD(peer_cfg_t, create_intsubnet_enumerator, enumerator_t*,
	private_peer_cfg_t *this)
{
	return this->intsubnets->create_enumerator(this->intsubnets);
}

METHOD(peer_cfg_t, add_intnetmask, void, private_peer_cfg_t *this, host_t *netmask)
{
	this->intnetmasks->insert_last(this->intnetmasks, netmask);
}

METHOD(peer_cfg_t, create_intnetmask_enumerator, enumerator_t*,
	private_peer_cfg_t *this)
{
	return this->intnetmasks->create_enumerator(this->intnetmasks);
}

METHOD(peer_cfg_t, add_pool, void,
	private_peer_cfg_t *this, char *name)
{
	this->pools->insert_last(this->pools, strdup(name));
}

METHOD(peer_cfg_t, create_pool_enumerator, enumerator_t*,
	private_peer_cfg_t *this)
{
	return this->pools->create_enumerator(this->pools);
}

METHOD(peer_cfg_t, add_auth_cfg, void,
	private_peer_cfg_t *this, auth_cfg_t *cfg, bool local)
{
	if (local)
	{
		this->local_auth->insert_last(this->local_auth, cfg);
	}
	else
	{
		this->remote_auth->insert_last(this->remote_auth, cfg);
	}
}

METHOD(peer_cfg_t, create_auth_cfg_enumerator, enumerator_t*,
	private_peer_cfg_t *this, bool local)
{
	if (local)
	{
		return this->local_auth->create_enumerator(this->local_auth);
	}
	return this->remote_auth->create_enumerator(this->remote_auth);
}

#ifdef ME
METHOD(peer_cfg_t, is_mediation, bool,
	private_peer_cfg_t *this)
{
	return this->mediation;
}

METHOD(peer_cfg_t, get_mediated_by, peer_cfg_t*,
	private_peer_cfg_t *this)
{
	return this->mediated_by;
}

METHOD(peer_cfg_t, get_peer_id, identification_t*,
	private_peer_cfg_t *this)
{
	return this->peer_id;
}
#endif /* ME */

/**
 * check auth configs for equality
 */
static bool auth_cfg_equal(private_peer_cfg_t *this, private_peer_cfg_t *other)
{
	enumerator_t *e1, *e2;
	auth_cfg_t *cfg1, *cfg2;
	bool equal = TRUE;

	if (this->local_auth->get_count(this->local_auth) !=
		other->local_auth->get_count(other->local_auth))
	{
		return FALSE;
	}
	if (this->remote_auth->get_count(this->remote_auth) !=
		other->remote_auth->get_count(other->remote_auth))
	{
		return FALSE;
	}

	e1 = this->local_auth->create_enumerator(this->local_auth);
	e2 = other->local_auth->create_enumerator(other->local_auth);
	while (e1->enumerate(e1, &cfg1) && e2->enumerate(e2, &cfg2))
	{
		if (!cfg1->equals(cfg1, cfg2))
		{
			equal = FALSE;
			break;
		}
	}
	e1->destroy(e1);
	e2->destroy(e2);

	if (!equal)
	{
		return FALSE;
	}

	e1 = this->remote_auth->create_enumerator(this->remote_auth);
	e2 = other->remote_auth->create_enumerator(other->remote_auth);
	while (e1->enumerate(e1, &cfg1) && e2->enumerate(e2, &cfg2))
	{
		if (!cfg1->equals(cfg1, cfg2))
		{
			equal = FALSE;
			break;
		}
	}
	e1->destroy(e1);
	e2->destroy(e2);

	return equal;
}

METHOD(peer_cfg_t, equals, bool,
	private_peer_cfg_t *this, private_peer_cfg_t *other)
{
	enumerator_t *e1, *e2;
	host_t *vip1, *vip2;
	char *pool1, *pool2;

	if (this == other)
	{
		return TRUE;
	}
	if (this->public.equals != other->public.equals)
	{
		return FALSE;
	}

	if (this->vips->get_count(this->vips) != other->vips->get_count(other->vips))
	{
		return FALSE;
	}
	e1 = create_virtual_ip_enumerator(this);
	e2 = create_virtual_ip_enumerator(other);
	if (e1->enumerate(e1, &vip1) && e2->enumerate(e2, &vip2))
	{
		if (!vip1->ip_equals(vip1, vip2))
		{
			e1->destroy(e1);
			e2->destroy(e2);
			return FALSE;
		}
	}
	e1->destroy(e1);
	e2->destroy(e2);

	if (this->pools->get_count(this->pools) !=
		other->pools->get_count(other->pools))
	{
		return FALSE;
	}
	e1 = create_pool_enumerator(this);
	e2 = create_pool_enumerator(other);
	if (e1->enumerate(e1, &pool1) && e2->enumerate(e2, &pool2))
	{
		if (!streq(pool1, pool2))
		{
			e1->destroy(e1);
			e2->destroy(e2);
			return FALSE;
		}
	}
	e1->destroy(e1);
	e2->destroy(e2);

	return (
		get_ike_version(this) == get_ike_version(other) &&
		this->cert_policy == other->cert_policy &&
		this->unique == other->unique &&
		this->keyingtries == other->keyingtries &&
		this->use_mobike == other->use_mobike &&
		this->rekey_time == other->rekey_time &&
		this->reauth_time == other->reauth_time &&
		this->jitter_time == other->jitter_time &&
		this->over_time == other->over_time &&
		this->dpd == other->dpd &&
		this->aggressive == other->aggressive &&
		this->pull_mode == other->pull_mode &&
		auth_cfg_equal(this, other)
#ifdef ME
		&& this->mediation == other->mediation &&
		this->mediated_by == other->mediated_by &&
		(this->peer_id == other->peer_id ||
		 (this->peer_id && other->peer_id &&
		  this->peer_id->equals(this->peer_id, other->peer_id)))
#endif /* ME */
		);
}

METHOD(peer_cfg_t, get_ref, peer_cfg_t*,
	private_peer_cfg_t *this)
{
	ref_get(&this->refcount);
	return &this->public;
}

METHOD(peer_cfg_t, destroy, void,
	private_peer_cfg_t *this)
{
	if (ref_put(&this->refcount))
	{
		this->ike_cfg->destroy(this->ike_cfg);
		this->child_cfgs->destroy_offset(this->child_cfgs,
										offsetof(child_cfg_t, destroy));
		this->local_auth->destroy_offset(this->local_auth,
										offsetof(auth_cfg_t, destroy));
		this->remote_auth->destroy_offset(this->remote_auth,
										offsetof(auth_cfg_t, destroy));
		this->vips->destroy_offset(this->vips, offsetof(host_t, destroy));
		this->pcscfs->destroy_offset(this->pcscfs, offsetof(host_t, destroy));
		this->intsubnets->destroy_offset(this->intsubnets, offsetof(host_t, destroy));
		this->intnetmasks->destroy_offset(this->intnetmasks, offsetof(host_t, destroy));
		if (this->imei)
		{
			free(this->imei);
		}
		if (this->imei_bcd_encoded)
		{
			free(this->imei_bcd_encoded);
		}
		if (this->vif)
		{
			free(this->vif);
		}
		this->pools->destroy_function(this->pools, free);
#ifdef ME
		DESTROY_IF(this->mediated_by);
		DESTROY_IF(this->peer_id);
#endif /* ME */
		this->mutex->destroy(this->mutex);
		free(this->name);
		free(this);
	}
}

static bool encode_imei_to_bcd(private_peer_cfg_t *this)
{
	size_t i, len;

	if (!this->imei_changed)
	{
		return TRUE;
	}
	if (!this->imei || !(len = strlen(this->imei)))
	{
		DBG1(DBG_IKE, "(Warning!) IMEI is empty");
		goto err;
	}
	if (len != 15 && len != 16)
	{
		DBG1(DBG_IKE, "(Warning!) Invalid IMEI len=%d", len);
		goto err;
	}
	if (this->imei_bcd_encoded)
	{
		free(this->imei_bcd_encoded);
	}
	this->imei_bcd_encoded = (char *)malloc(this->imei_bcd_encoded_size);
	this->imei_bcd_encoded[0] = (len == 15) ? 0x1 : 0x2; /* Type - IMEI : IMEISV*/
	for (i = 0; i < len; i += 2)
	{
		if (i == 14 && len == 15)
		{
			this->imei_bcd_encoded[i / 2 + 1] = (this->imei[i] - 48) + (0xF << 4);
		}
		else
		{
			this->imei_bcd_encoded[i / 2 + 1] = (this->imei[i] - 48) + (this->imei[i + 1] << 4);
		}
	}
	this->imei_changed = FALSE;
	DBG1(DBG_IKE, "IMEI=%s, BCD_encode=%02X%02X%02X%02X%02X%02X%02X%02X%02X",
		this->imei, this->imei_bcd_encoded[0],
		this->imei_bcd_encoded[1], this->imei_bcd_encoded[2],
		this->imei_bcd_encoded[3], this->imei_bcd_encoded[4],
		this->imei_bcd_encoded[5], this->imei_bcd_encoded[6],
		this->imei_bcd_encoded[7], this->imei_bcd_encoded[8]);
	return TRUE;

err:
	if (this->imei_bcd_encoded)
	{
		free(this->imei_bcd_encoded);
		this->imei_bcd_encoded = NULL;
	}
	return FALSE;
}

METHOD(peer_cfg_t, set_wod_options, void,
	private_peer_cfg_t *this, char *imei, char *vif,
	u_int16_t cust_cp_pcscf4, u_int16_t cust_cp_pcscf6,
	u_int16_t cust_cp_imei, bool use_cfg_vip,
	bool wdrv_keepalive, u_int32_t keepalive_time,
	u_int32_t oos_time, u_int32_t retrans_time,
	u_int16_t retrans_tries, u_int16_t retrans_base,
	bool no_init_contact, bool no_eap_only,
	bool hashandurl, bool ocsp,
	bool addrchg_reauth, u_int fast_reauth,
	bool dpd_noreply, bool skip_check_id,
	bool skip_check_cert, bool server_nocert,
	bool liveness_check, bool certreq_critical,
	bool pcscf_restore, bool device_identity,
	bool reauth_mbb, u_int32_t detach_time,
	bool redirect_enable, u_int max_redirects,
	u_int redirect_loop_detect, u_int16_t imei_format,
    bool send_del_ike_auth_ntfy_err)
{
	this->imei = strdupnull(imei);
	this->imei_changed = TRUE;
	this->vif = strdupnull(vif);
	this->cust_cp_pcscf4 = cust_cp_pcscf4;
	this->cust_cp_pcscf6 = cust_cp_pcscf6;
	this->cust_cp_imei = cust_cp_imei;
	this->use_cfg_vip = use_cfg_vip;
	this->wdrv_keepalive = wdrv_keepalive;
	this->keepalive_time = keepalive_time;
	this->oos_time = oos_time;
	this->retrans_time = retrans_time;
	this->retrans_tries = retrans_tries;
	this->retrans_base = retrans_base;
	this->no_init_contact = no_init_contact;
	this->no_eap_only = no_eap_only;
	this->hashandurl = hashandurl;
	this->ocsp = ocsp;
	this->addrchg_reauth = addrchg_reauth;
	this->fast_reauth = fast_reauth;
	this->dpd_noreply = dpd_noreply;
	this->skip_check_id = skip_check_id;
	this->skip_check_cert = skip_check_cert;
	this->server_nocert = server_nocert;
	this->liveness_check = liveness_check;
	this->certreq_critical = certreq_critical;
	this->pcscf_restore = pcscf_restore;
	this->device_identity = device_identity;
	this->reauth_mbb = reauth_mbb;
    this->detach_time = detach_time;
	this->redirect_enable = redirect_enable;
	this->max_redirects = max_redirects;
	this->redirect_loop_detect = redirect_loop_detect;
	this->imei_format = imei_format;
	this->send_del_ike_auth_ntfy_err = send_del_ike_auth_ntfy_err;
}

METHOD(peer_cfg_t, get_imei, char*,
	private_peer_cfg_t *this)
{
	return this->imei;
}

METHOD(peer_cfg_t, get_imei_bcd_encoded, char*,
	private_peer_cfg_t *this)
{
	encode_imei_to_bcd(this);
	return this->imei_bcd_encoded;
}

METHOD(peer_cfg_t, get_imei_bcd_encoded_size, u_int16_t,
	private_peer_cfg_t *this)
{
	return this->imei_bcd_encoded_size;
}

METHOD(peer_cfg_t, get_vif, char*,
	private_peer_cfg_t *this)
{
	return this->vif;
}

METHOD(peer_cfg_t, get_cust_cp_pcscf4, u_int16_t,
	private_peer_cfg_t *this)
{
	return this->cust_cp_pcscf4;
}

METHOD(peer_cfg_t, get_cust_cp_pcscf6, u_int16_t,
	private_peer_cfg_t *this)
{
	return this->cust_cp_pcscf6;
}

METHOD(peer_cfg_t, get_cust_cp_imei, u_int16_t,
	private_peer_cfg_t *this)
{
	return this->cust_cp_imei;
}

METHOD(peer_cfg_t, get_imei_format, u_int16_t,
	private_peer_cfg_t *this)
{
	return this->imei_format;
}

METHOD(peer_cfg_t, use_cfg_vip_, bool,
	private_peer_cfg_t *this)
{
	return this->use_cfg_vip;
}

METHOD(peer_cfg_t, use_wdrv_keepalive, bool,
	private_peer_cfg_t *this)
{
	return this->wdrv_keepalive;
}

METHOD(peer_cfg_t, get_keepalive_time, u_int32_t,
	private_peer_cfg_t *this)
{
	return this->keepalive_time;
}

METHOD(peer_cfg_t, get_certreq_critical, bool,
	private_peer_cfg_t *this)
{
	return this->certreq_critical;
}

METHOD(peer_cfg_t, get_reauth_mbb, bool,
	private_peer_cfg_t *this)
{
	return this->reauth_mbb;
}

METHOD(peer_cfg_t, get_pcscf_restore, bool,
	private_peer_cfg_t *this)
{
	return this->pcscf_restore;
}

METHOD(peer_cfg_t, get_device_identity, bool,
	private_peer_cfg_t *this)
{
	return this->device_identity;
}

METHOD(peer_cfg_t, enable_redirect_feature, void,
	private_peer_cfg_t *this)
{
	this->redirect_enable = TRUE;
}

METHOD(peer_cfg_t, set_max_redirects, void, private_peer_cfg_t *this, u_int max_redirects)
{
	this->max_redirects = max_redirects;
}

METHOD(peer_cfg_t, set_redirect_loop_detect, void, private_peer_cfg_t *this, u_int redirect_loop_detect)
{
	this->redirect_loop_detect = redirect_loop_detect;
}

METHOD(peer_cfg_t, get_redirect_enable, bool,
	private_peer_cfg_t *this)
{
	return this->redirect_enable;
}

METHOD(peer_cfg_t, get_max_redirects, u_int,
	private_peer_cfg_t *this)
{
	return this->max_redirects;
}

METHOD(peer_cfg_t, get_redirect_loop_detect, u_int,
	private_peer_cfg_t *this)
{
	return this->redirect_loop_detect;
}

METHOD(peer_cfg_t, get_oos_time, u_int32_t,
	private_peer_cfg_t *this)
{
	return this->oos_time;
}

METHOD(peer_cfg_t, get_retrans_time, u_int32_t,
	private_peer_cfg_t *this)
{
	return this->retrans_time;
}

METHOD(peer_cfg_t, get_retrans_tries, u_int16_t,
	private_peer_cfg_t *this)
{
	return this->retrans_tries;
}

METHOD(peer_cfg_t, get_retrans_base, u_int16_t,
	private_peer_cfg_t *this)
{
	return this->retrans_base;
}

METHOD(peer_cfg_t, send_init_contact, bool,
	private_peer_cfg_t *this)
{
	return !this->no_init_contact;
}

METHOD(peer_cfg_t, send_eap_only, bool,
	private_peer_cfg_t *this)
{
	return !this->no_eap_only;
}

METHOD(peer_cfg_t, use_hashandurl, bool,
	private_peer_cfg_t *this)
{
	return this->hashandurl;
}

METHOD(peer_cfg_t, use_ocsp, bool,
	private_peer_cfg_t *this)
{
	return this->ocsp;
}

METHOD(peer_cfg_t, do_addrchg_reauth, bool,
	private_peer_cfg_t *this)
{
	return this->addrchg_reauth;
}

METHOD(peer_cfg_t, get_fast_reauth, u_int,
	private_peer_cfg_t *this)
{
	return this->fast_reauth;
}

METHOD(peer_cfg_t, dpd_noreply_, bool,
	private_peer_cfg_t *this)
{
	return this->dpd_noreply;
}

METHOD(peer_cfg_t, skip_check_id_, bool,
	private_peer_cfg_t *this)
{
	return this->skip_check_id;
}

METHOD(peer_cfg_t, skip_check_cert_, bool,
	private_peer_cfg_t *this)
{
	return this->skip_check_cert;
}

METHOD(peer_cfg_t, server_nocert_, bool,
	private_peer_cfg_t *this)
{
	return this->server_nocert;
}

METHOD(peer_cfg_t, send_del_ike_auth_ntfy_err_, bool,
	private_peer_cfg_t *this)
{
	return this->send_del_ike_auth_ntfy_err;
}

METHOD(peer_cfg_t, get_detach_time, u_int32_t,
	private_peer_cfg_t *this)
{
	return this->detach_time;
}

/*
 * Described in header-file
 */
peer_cfg_t *peer_cfg_create(char *name,
							ike_cfg_t *ike_cfg, cert_policy_t cert_policy,
							unique_policy_t unique, u_int32_t keyingtries,
							u_int32_t rekey_time, u_int32_t reauth_time,
							u_int32_t jitter_time, u_int32_t over_time,
							bool mobike, bool aggressive, bool pull_mode,
							u_int32_t dpd, u_int32_t dpd_timeout,
							bool mediation, peer_cfg_t *mediated_by,
							identification_t *peer_id)
{
	private_peer_cfg_t *this;

	if (rekey_time && jitter_time > rekey_time)
	{
		jitter_time = rekey_time;
	}
	if (reauth_time && jitter_time > reauth_time)
	{
		jitter_time = reauth_time;
	}

	INIT(this,
		.public = {
			.get_name = _get_name,
			.get_ike_version = _get_ike_version,
			.get_ike_cfg = _get_ike_cfg,
			.add_child_cfg = _add_child_cfg,
			.remove_child_cfg = (void*)_remove_child_cfg,
			.create_child_cfg_enumerator = _create_child_cfg_enumerator,
			.select_child_cfg = _select_child_cfg,
			.get_cert_policy = _get_cert_policy,
			.get_unique_policy = _get_unique_policy,
			.get_keyingtries = _get_keyingtries,
			.get_rekey_time = _get_rekey_time,
			.get_reauth_time = _get_reauth_time,
			.get_over_time = _get_over_time,
			.use_mobike = _use_mobike,
			.get_liveness_check = _get_liveness_check,
			.get_liveness_check_timeout = _get_liveness_check_timeout,
			.set_liveness_check_timeout = _set_liveness_check_timeout,
			.use_aggressive = _use_aggressive,
			.use_pull_mode = _use_pull_mode,
			.get_dpd = _get_dpd,
			.set_dpd = _set_dpd,
			.get_dpd_timeout = _get_dpd_timeout,
			.add_virtual_ip = _add_virtual_ip,
			.create_virtual_ip_enumerator = _create_virtual_ip_enumerator,
			.add_pcscf = _add_pcscf,
			.create_pcscf_enumerator = _create_pcscf_enumerator,
			.add_intsubnet = _add_intsubnet,
			.create_intsubnet_enumerator = _create_intsubnet_enumerator,
			.add_intnetmask = _add_intnetmask,
			.create_intnetmask_enumerator = _create_intnetmask_enumerator,
			.add_pool = _add_pool,
			.create_pool_enumerator = _create_pool_enumerator,
			.add_auth_cfg = _add_auth_cfg,
			.create_auth_cfg_enumerator = _create_auth_cfg_enumerator,
			.equals = (void*)_equals,
			.get_ref = _get_ref,
			.destroy = _destroy,
			.set_wod_options = _set_wod_options,
			.get_certreq_critical = _get_certreq_critical,
			.get_reauth_mbb = _get_reauth_mbb,
			.get_pcscf_restore = _get_pcscf_restore,
			.get_device_identity = _get_device_identity,
			.enable_redirect_feature = _enable_redirect_feature,
			.get_redirect_enable = _get_redirect_enable,
			.get_max_redirects = _get_max_redirects,
			.get_redirect_loop_detect = _get_redirect_loop_detect,
			.set_max_redirects = _set_max_redirects,
			.set_redirect_loop_detect = _set_redirect_loop_detect,
			.get_imei = _get_imei,
			.get_imei_bcd_encoded = _get_imei_bcd_encoded,
			.get_imei_bcd_encoded_size = _get_imei_bcd_encoded_size,
			.get_vif = _get_vif,
			.get_cust_cp_pcscf4 = _get_cust_cp_pcscf4,
			.get_cust_cp_pcscf6 = _get_cust_cp_pcscf6,
			.get_cust_cp_imei = _get_cust_cp_imei,
			.get_imei_format = _get_imei_format,
			.use_cfg_vip = _use_cfg_vip_,
			.use_wdrv_keepalive = _use_wdrv_keepalive,
			.get_keepalive_time = _get_keepalive_time,
			.get_oos_time = _get_oos_time,
			.get_retrans_time = _get_retrans_time,
			.get_retrans_tries = _get_retrans_tries,
			.get_retrans_base = _get_retrans_base,
			.send_init_contact = _send_init_contact,
			.send_eap_only = _send_eap_only,
			.use_hashandurl = _use_hashandurl,
			.use_ocsp = _use_ocsp,
			.do_addrchg_reauth = _do_addrchg_reauth,
			.get_fast_reauth = _get_fast_reauth,
			.dpd_noreply = _dpd_noreply_,
			.skip_check_id = _skip_check_id_,
			.skip_check_cert = _skip_check_cert_,
			.server_nocert = _server_nocert_,
			.send_del_ike_auth_ntfy_err = _send_del_ike_auth_ntfy_err_,
			.get_detach_time = _get_detach_time,
#ifdef ME
			.is_mediation = _is_mediation,
			.get_mediated_by = _get_mediated_by,
			.get_peer_id = _get_peer_id,
#endif /* ME */
		},
		.name = strdup(name),
		.ike_cfg = ike_cfg,
		.child_cfgs = linked_list_create(),
		.mutex = mutex_create(MUTEX_TYPE_DEFAULT),
		.cert_policy = cert_policy,
		.unique = unique,
		.keyingtries = keyingtries,
		.rekey_time = rekey_time,
		.reauth_time = reauth_time,
		.jitter_time = jitter_time,
		.over_time = over_time,
		.use_mobike = mobike,
		.aggressive = aggressive,
		.pull_mode = pull_mode,
		.dpd = dpd,
		.dpd_timeout = dpd_timeout,
		.liveness_check_timeout = 0,
		.vips = linked_list_create(),
		.pcscfs = linked_list_create(),
		.intsubnets = linked_list_create(),
		.intnetmasks = linked_list_create(),
		.imei = NULL,
		.imei_changed = FALSE,
		.imei_bcd_encoded = NULL,
		.imei_bcd_encoded_size = 9,
		.vif = NULL,
		.cust_cp_pcscf4 = 0,
		.cust_cp_pcscf6 = 0,
		.cust_cp_imei = 0,
		.imei_format = 0,
		.use_cfg_vip = FALSE,
		.wdrv_keepalive = FALSE,
		.keepalive_time = 0,
		.oos_time = 0,
		.retrans_time = 0,
		.retrans_tries = 0,
		.retrans_base = 0,
		.no_init_contact = FALSE,
		.certreq_critical = FALSE,
		.reauth_mbb = TRUE,
		.pcscf_restore = FALSE,
		.device_identity = FALSE,
		.redirect_enable = FALSE,
		.max_redirects = 5,
		.redirect_loop_detect = 300,
		.no_eap_only = FALSE,
		.hashandurl = FALSE,
		.ocsp = FALSE,
		.addrchg_reauth = FALSE,
		.fast_reauth = 0,
		.dpd_noreply = FALSE,
		.skip_check_id = FALSE,
		.skip_check_cert = FALSE,
		.server_nocert = FALSE,
        .send_del_ike_auth_ntfy_err = FALSE,
		.detach_time = 0,
		.pools = linked_list_create(),
		.local_auth = linked_list_create(),
		.remote_auth = linked_list_create(),
		.refcount = 1,
	);

#ifdef ME
	this->mediation = mediation;
	this->mediated_by = mediated_by;
	this->peer_id = peer_id;
#else /* ME */
	DESTROY_IF(mediated_by);
	DESTROY_IF(peer_id);
#endif /* ME */

	return &this->public;
}

