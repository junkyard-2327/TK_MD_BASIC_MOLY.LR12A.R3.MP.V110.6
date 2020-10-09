/*
 * Copyright (C) 2013 Tobias Brunner
 * Copyright (C) 2008 Martin Willi
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

#define _GNU_SOURCE
#include <stdio.h>

#include "updown_listener.h"

#include <hydra.h>
#include <daemon.h>
#include <config/child_cfg.h>
#include <network/wod_channel.h>

typedef struct private_updown_listener_t private_updown_listener_t;

/**
 * Private data of an updown_listener_t object.
 */
struct private_updown_listener_t {

	/**
	 * Public updown_listener_t interface.
	 */
	updown_listener_t public;

	/**
	 * List of cached interface names
	 */
	linked_list_t *iface_cache;

	/**
	 * DNS attribute handler
	 */
	updown_handler_t *handler;
#if defined (ANDROID) || defined (STRONGSWAN_UNIT_TEST)
	conn_info_prop prop;
#endif
};

typedef struct cache_entry_t cache_entry_t;

/**
 * Cache line in the interface name cache.
 */
struct cache_entry_t {
	/** requid of the CHILD_SA */
	u_int32_t reqid;
	/** cached interface name */
	char *iface;
};

/**
 * Insert an interface name to the cache
 */
static void cache_iface(private_updown_listener_t *this, u_int32_t reqid,
						char *iface)
{
	cache_entry_t *entry = malloc_thing(cache_entry_t);

	entry->reqid = reqid;
	entry->iface = strdup(iface);

	this->iface_cache->insert_first(this->iface_cache, entry);
}

/**
 * Remove a cached interface name and return it.
 */
static char* uncache_iface(private_updown_listener_t *this, u_int32_t reqid)
{
	enumerator_t *enumerator;
	cache_entry_t *entry;
	char *iface = NULL;

	enumerator = this->iface_cache->create_enumerator(this->iface_cache);
	while (enumerator->enumerate(enumerator, &entry))
	{
		if (entry->reqid == reqid)
		{
			this->iface_cache->remove_at(this->iface_cache, enumerator);
			iface = entry->iface;
			free(entry);
			break;
		}
	}
	enumerator->destroy(enumerator);
	return iface;
}

/**
 * Create variables for handled DNS attributes
 */
static char *make_dns_vars(private_updown_listener_t *this, ike_sa_t *ike_sa)
{
	enumerator_t *enumerator;
	host_t *host;
	int v4 = 0, v6 = 0;
	char total[512] = "", current[64];

	if (!this->handler)
	{
		return strdup("");
	}

#if defined (ANDROID) || defined (STRONGSWAN_UNIT_TEST)
	memset(this->prop.dns, 0, sizeof(this->prop.dns));
	memset(this->prop.dns6, 0, sizeof(this->prop.dns6));

	enumerator = ike_sa->create_dns_enumerator(ike_sa);
#else
	enumerator = this->handler->create_dns_enumerator(this->handler,
												ike_sa->get_unique_id(ike_sa));
#endif

	while (enumerator->enumerate(enumerator, &host))
	{
		switch (host->get_family(host))
		{
			case AF_INET:
#if defined (ANDROID) || defined (STRONGSWAN_UNIT_TEST)
				if (v4 < MAX_DNS_NUM) {
					snprintf(this->prop.dns[v4], IP_ADDR_LEN, "%H", host);
				}
#endif
				snprintf(current, sizeof(current),
						 "PLUTO_DNS4_%d='%H' ", ++v4, host);
				break;
			case AF_INET6:
#if defined (ANDROID) || defined (STRONGSWAN_UNIT_TEST)
				if (v6 < MAX_DNS_NUM) {
					snprintf(this->prop.dns6[v6], IP6_ADDR_LEN, "%H", host);
				}
#endif
				snprintf(current, sizeof(current),
						 "PLUTO_DNS6_%d='%H' ", ++v6, host);
				break;
			default:
				continue;
		}
		strncat(total, current, sizeof(total) - strlen(total) - 1);
	}
	enumerator->destroy(enumerator);

	return strdup(total);
}

/**
 * Create variables for local virtual IPs
 */
static char *make_vip_vars(private_updown_listener_t *this, ike_sa_t *ike_sa)
{
	enumerator_t *enumerator;
	host_t *host;
	int v4 = 0, v6 = 0;
	char total[512] = "", current[64];
	bool first = TRUE;

#if defined (ANDROID) || defined (STRONGSWAN_UNIT_TEST)
	memset(this->prop.ip, 0, sizeof(this->prop.ip));
	memset(this->prop.ip6, 0, sizeof(this->prop.ip6));
#endif

	enumerator = ike_sa->create_virtual_ip_enumerator(ike_sa, TRUE);
	while (enumerator->enumerate(enumerator, &host))
	{
		if (first)
		{	/* legacy variable for first VIP */
			snprintf(current, sizeof(current),
						 "PLUTO_MY_SOURCEIP='%H' ", host);
			strncat(total, current, sizeof(total) - strlen(total) - 1);
		}
		switch (host->get_family(host))
		{
			case AF_INET:
#if defined (ANDROID) || defined (STRONGSWAN_UNIT_TEST)
				if (v4 < MAX_VIP_NUM) {
					snprintf(this->prop.ip[v4], IP_ADDR_LEN, "%H", host);
				}
#endif
				snprintf(current, sizeof(current),
						 "PLUTO_MY_SOURCEIP4_%d='%H' ", ++v4, host);
				break;
			case AF_INET6:
#if defined (ANDROID) || defined (STRONGSWAN_UNIT_TEST)
				if (v6 < MAX_VIP_NUM) {
					snprintf(this->prop.ip6[v6], IP6_ADDR_LEN, "%H", host);
				}
#endif
				snprintf(current, sizeof(current),
						 "PLUTO_MY_SOURCEIP6_%d='%H' ", ++v6, host);
				break;
			default:
				continue;
		}
		strncat(total, current, sizeof(total) - strlen(total) - 1);
	}
	enumerator->destroy(enumerator);

	return strdup(total);
}

/**
 * Create variables for local virtual IPs
 */
static char *make_pcscf_vars(private_updown_listener_t *this, ike_sa_t *ike_sa)
{
	enumerator_t *enumerator;
	host_t *host;
	int v4 = 0, v6 = 0;
	char total[512] = "", current[64];
	bool first = TRUE;

#if defined (ANDROID) || defined (STRONGSWAN_UNIT_TEST)
	memset(this->prop.pcscf, 0, sizeof(this->prop.pcscf));
	memset(this->prop.pcscf6, 0, sizeof(this->prop.pcscf6));
#endif
	enumerator = ike_sa->create_pcscf_enumerator(ike_sa);
	while (enumerator->enumerate(enumerator, &host))
	{
		if (first)
		{	/* legacy variable for first psccf */
			snprintf(current, sizeof(current), "PLUTO_MY_PCSCF='%H' ", host);
			strncat(total, current, sizeof(total) - strlen(total) - 1);
		}
		switch (host->get_family(host))
		{
			case AF_INET:
#if defined (ANDROID) || defined (STRONGSWAN_UNIT_TEST)
				if (v4 < MAX_PCSCF_NUM) {
					snprintf(this->prop.pcscf[v4], IP_ADDR_LEN, "%H", host);
				}
#endif
				snprintf(current, sizeof(current), "PLUTO_MY_PCSCF4_%d='%H' ", ++v4, host);
				break;
			case AF_INET6:
#if defined (ANDROID) || defined (STRONGSWAN_UNIT_TEST)
				if (v6 < MAX_PCSCF_NUM) {
					snprintf(this->prop.pcscf6[v6], IP6_ADDR_LEN, "%H", host);
				}
#endif
				snprintf(current, sizeof(current), "PLUTO_MY_PCSCF6_%d='%H' ", ++v6, host);
				break;
			default:
				continue;
		}
		strncat(total, current, sizeof(total) - strlen(total) - 1);
	}
	enumerator->destroy(enumerator);

	return strdup(total);
}

/**
 * Create variables for local netmask
 */
static char *make_netmask_vars(private_updown_listener_t *this, ike_sa_t *ike_sa)
{
	enumerator_t *enumerator;
	host_t *host;
	int v4 = 0, v6 = 0;
	char total[512] = "", current[64];
	bool first = TRUE;

#if defined (ANDROID) || defined (STRONGSWAN_UNIT_TEST)
	memset(this->prop.netmask, 0, sizeof(this->prop.netmask));
	memset(this->prop.netmask6, 0, sizeof(this->prop.netmask6));
#endif
	enumerator = ike_sa->create_intnetmask_enumerator(ike_sa);
	while (enumerator->enumerate(enumerator, &host))
	{
		if (first)
		{	/* legacy variable for first psccf */
			snprintf(current, sizeof(current), "PLUTO_MY_NETMASK='%H' ", host);
			strncat(total, current, sizeof(total) - strlen(total) - 1);
		}
		switch (host->get_family(host))
		{
			case AF_INET:
#if defined (ANDROID) || defined (STRONGSWAN_UNIT_TEST)
				if (v4 < MAX_NETMASK_NUM) {
					snprintf(this->prop.netmask[v4], IP_ADDR_LEN, "%H", host);
				}
#endif
				snprintf(current, sizeof(current), "PLUTO_MY_NETMASK4_%d='%H' ", ++v4, host);
				break;
			case AF_INET6:
#if defined (ANDROID) || defined (STRONGSWAN_UNIT_TEST)
				if (v6 < MAX_NETMASK_NUM) {
					snprintf(this->prop.netmask6[v6], IP6_ADDR_LEN, "%H", host);
				}
#endif
				snprintf(current, sizeof(current), "PLUTO_MY_NETMASK6_%d='%H' ", ++v6, host);
				break;
			default:
				continue;
		}
		strncat(total, current, sizeof(total) - strlen(total) - 1);
	}
	enumerator->destroy(enumerator);

	return strdup(total);
}

/**
 * Create variables for local subnet
 */
static char *make_subnet_vars(private_updown_listener_t *this, ike_sa_t *ike_sa)
{
	enumerator_t *enumerator;
	host_t *host;
	int v4 = 0, v6 = 0;
	char total[512] = "", current[64];
	bool first = TRUE;

#if defined (ANDROID) || defined (STRONGSWAN_UNIT_TEST)
	memset(this->prop.subnet, 0, sizeof(this->prop.subnet));
	memset(this->prop.subnet6, 0, sizeof(this->prop.subnet6));
#endif
	enumerator = ike_sa->create_intsubnet_enumerator(ike_sa);
	while (enumerator->enumerate(enumerator, &host))
	{
		if (first)
		{	/* legacy variable for first psccf */
			snprintf(current, sizeof(current), "PLUTO_MY_SUBNET='%H' ", host);
			strncat(total, current, sizeof(total) - strlen(total) - 1);
		}
		switch (host->get_family(host))
		{
			case AF_INET:
#if defined (ANDROID) || defined (STRONGSWAN_UNIT_TEST)
				if (v4 < MAX_SUBNET_NUM) {
					snprintf(this->prop.subnet[v4], IP_ADDR_LEN, "%H", host);
				}
#endif
				snprintf(current, sizeof(current), "PLUTO_MY_SUBNET4_%d='%H' ", ++v4, host);
				break;
			case AF_INET6:
#if defined (ANDROID) || defined (STRONGSWAN_UNIT_TEST)
				if (v6 < MAX_SUBNET_NUM) {
					snprintf(this->prop.subnet6[v6], IP6_ADDR_LEN, "%H", host);
				}
#endif
				snprintf(current, sizeof(current), "PLUTO_MY_SUBNET6_%d='%H' ", ++v6, host);
				break;
			default:
				continue;
		}
		strncat(total, current, sizeof(total) - strlen(total) - 1);
	}
	enumerator->destroy(enumerator);

	return strdup(total);
}

/**
 * Determine proper values for port env variable
 */
static u_int16_t get_port(traffic_selector_t *me,
						  traffic_selector_t *other, bool local)
{
	switch (max(me->get_protocol(me), other->get_protocol(other)))
	{
		case IPPROTO_ICMP:
		case IPPROTO_ICMPV6:
		{
			u_int16_t port = me->get_from_port(me);

			port = max(port, other->get_from_port(other));
			return local ? traffic_selector_icmp_type(port)
						 : traffic_selector_icmp_code(port);
		}
	}
	return local ? me->get_from_port(me) : other->get_from_port(other);
}

METHOD(listener_t, child_updown, bool,
	private_updown_listener_t *this, ike_sa_t *ike_sa, child_sa_t *child_sa,
	bool up)
{
	traffic_selector_t *my_ts, *other_ts;
	enumerator_t *enumerator;
	child_cfg_t *config;
	host_t *me, *other;
	char *script, *iface;
	peer_cfg_t *peer_cfg;

	config = child_sa->get_config(child_sa);
	script = config->get_updown(config);
	me = ike_sa->get_my_host(ike_sa);
	other = ike_sa->get_other_host(ike_sa);
	peer_cfg = ike_sa->get_peer_cfg(ike_sa);

	if (script == NULL)
	{
		return TRUE;
	}

	enumerator = child_sa->create_policy_enumerator(child_sa);
	while (enumerator->enumerate(enumerator, &my_ts, &other_ts))
	{
		char command[2048];
		host_t *my_client, *other_client;
		u_int8_t my_client_mask, other_client_mask;
		char *virtual_ip, *mark_in, *mark_out, *udp_enc, *dns, *xauth, *pcscf, *netmask, *subnet;
		mark_t mark;
		bool is_host, is_ipv6, use_ipcomp;
		FILE *shell;

		my_ts->to_subnet(my_ts, &my_client, &my_client_mask);
		other_ts->to_subnet(other_ts, &other_client, &other_client_mask);

		virtual_ip = make_vip_vars(this, ike_sa);
		pcscf = make_pcscf_vars(this, ike_sa);
		netmask = make_netmask_vars(this, ike_sa);
		subnet = make_subnet_vars(this, ike_sa);

		/* check for the presence of an inbound mark */
		mark = config->get_mark(config, TRUE);
		if (mark.value)
		{
			if (asprintf(&mark_in, "PLUTO_MARK_IN='%u/0x%08x' ",
						 mark.value, mark.mask ) < 0)
			{
				mark_in = NULL;
			}
		}
		else
		{
			if (asprintf(&mark_in, "") < 0)
			{
				mark_in = NULL;
			}
		}

		/* check for the presence of an outbound mark */
		mark = config->get_mark(config, FALSE);
		if (mark.value)
		{
			if (asprintf(&mark_out, "PLUTO_MARK_OUT='%u/0x%08x' ",
						 mark.value, mark.mask ) < 0)
			{
				mark_out = NULL;
			}
		}
		else
		{
			if (asprintf(&mark_out, "") < 0)
			{
				mark_out = NULL;
			}
		}

		/* check for a NAT condition causing ESP_IN_UDP encapsulation */
		if (ike_sa->has_condition(ike_sa, COND_NAT_ANY))
		{
			if (asprintf(&udp_enc, "PLUTO_UDP_ENC='%u' ",
						 other->get_port(other)) < 0)
			{
				udp_enc = NULL;
			}

		}
		else
		{
			if (asprintf(&udp_enc, "") < 0)
			{
				udp_enc = NULL;
			}

		}

		if (ike_sa->has_condition(ike_sa, COND_EAP_AUTHENTICATED) ||
			ike_sa->has_condition(ike_sa, COND_XAUTH_AUTHENTICATED))
		{
			if (asprintf(&xauth, "PLUTO_XAUTH_ID='%Y' ",
						 ike_sa->get_other_eap_id(ike_sa)) < 0)
			{
				xauth = NULL;
			}
		}
		else
		{
			if (asprintf(&xauth, "") < 0)
			{
				xauth = NULL;
			}
		}

		if (up)
		{
			iface = strdupnull(peer_cfg->get_vif(peer_cfg));
			if (iface || hydra->kernel_interface->get_interface(hydra->kernel_interface, me, &iface))
			{
				cache_iface(this, child_sa->get_reqid(child_sa), iface);
			}
			else
			{
				iface = NULL;
			}
		}
		else
		{
			iface = uncache_iface(this, child_sa->get_reqid(child_sa));
		}

		dns = make_dns_vars(this, ike_sa);

		/* check for IPComp */
		use_ipcomp = child_sa->get_ipcomp(child_sa) != IPCOMP_NONE;

		/* determine IPv4/IPv6 and client/host situation */
		is_host = my_ts->is_host(my_ts, me);
		is_ipv6 = is_host ? (me->get_family(me) == AF_INET6) :
							(my_ts->get_type(my_ts) == TS_IPV6_ADDR_RANGE);

		/* build the command with all env variables.
		 */
		snprintf(command, sizeof(command),
				 "2>&1 "
				"PLUTO_VERSION='1.1' "
				"PLUTO_VERB='%s%s%s' "
				"PLUTO_CONNECTION='%s' "
				"PLUTO_INTERFACE='%s' "
				"PLUTO_REQID='%u' "
				"PLUTO_PROTO='%s' "
				"PLUTO_UNIQUEID='%u' "
				"PLUTO_ME='%H' "
				"PLUTO_MY_ID='%Y' "
				"PLUTO_MY_CLIENT='%H/%u' "
				"PLUTO_MY_PORT='%u' "
				"PLUTO_MY_PROTOCOL='%u' "
				"PLUTO_PEER='%H' "
				"PLUTO_PEER_ID='%Y' "
				"PLUTO_PEER_CLIENT='%H/%u' "
				"PLUTO_PEER_PORT='%u' "
				"PLUTO_PEER_PROTOCOL='%u' "
				"%s"
				"%s"
				"%s"
				"%s"
				"%s"
				"%s"
				"%s"
				"%s"
				"%s"
				"%s"
				"%s"
				"%s",
				 up ? "up" : "down",
				 is_host ? "-host" : "-client",
				 is_ipv6 ? "-v6" : "",
				 config->get_name(config),
				 iface ? iface : "unknown",
				 child_sa->get_reqid(child_sa),
				 child_sa->get_protocol(child_sa) == PROTO_ESP ? "esp" : "ah",
				 ike_sa->get_unique_id(ike_sa),
				 me, ike_sa->get_my_id(ike_sa),
				 my_client, my_client_mask,
				 get_port(my_ts, other_ts, TRUE),
				 my_ts->get_protocol(my_ts),
				 other, ike_sa->get_other_id(ike_sa),
				 other_client, other_client_mask,
				 get_port(my_ts, other_ts, FALSE),
				 other_ts->get_protocol(other_ts),
				 xauth,
				 virtual_ip,
				 pcscf,
				 netmask,
				 subnet,
				 mark_in,
				 mark_out,
				 udp_enc,
				 use_ipcomp ? "PLUTO_IPCOMP='1' " : "",
				 config->get_hostaccess(config) ? "PLUTO_HOST_ACCESS='1' " : "",
				 dns,
				 script);
		my_client->destroy(my_client);
		other_client->destroy(other_client);
		free(virtual_ip);
		free(pcscf);
		free(netmask);
		free(subnet);
		free(mark_in);
		free(mark_out);
		free(udp_enc);
		free(dns);
		free(xauth);
#if defined (ANDROID) || defined (STRONGSWAN_UNIT_TEST)
		free(iface);
		DBG1(DBG_CHD, "running updown script: %s", command);
#else
		free(iface);
		DBG3(DBG_CHD, "running updown script: %s", command);
		shell = popen(command, "r");

		if (shell == NULL)
		{
			DBG1(DBG_CHD, "could not execute updown script '%s'", script);
			return TRUE;
		}

		while (TRUE)
		{
			char resp[128];

			if (fgets(resp, sizeof(resp), shell) == NULL)
			{
				if (ferror(shell))
				{
					DBG1(DBG_CHD, "error reading output from updown script");
				}
				break;
			}
			else
			{
				char *e = resp + strlen(resp);
				if (e > resp && e[-1] == '\n')
				{	/* trim trailing '\n' */
					e[-1] = '\0';
				}
				DBG1(DBG_CHD, "updown: %s", resp);
			}
		}
		pclose(shell);
#endif
	}
	enumerator->destroy(enumerator);

#if defined (ANDROID) || defined (STRONGSWAN_UNIT_TEST)
	DBG1(DBG_CHD, "ike_sa: COND_REAUTHENTICATING(%d), COND_STALE(%d)",
			ike_sa->has_condition(ike_sa, COND_REAUTHENTICATING),
			ike_sa->has_condition(ike_sa, COND_STALE));
	/* for MOBIKE, but not SQC done. */
	//if (!up && !ike_sa->has_condition(ike_sa, COND_REAUTHENTICATING)) {
	if (!up)
	{	/* Config name: apn_xxx */
		this->prop.status = ike_sa->get_status_code(ike_sa);
		this->prop.sub_error = ike_sa->get_sub_error_code(ike_sa);
		ike_sa->update_keepalive_info(ike_sa, FALSE, FALSE);
		notify_wod(N_DETACH, config->get_name(config), (void *)&this->prop);
	}
	else
	{
		if (this->prop.pcscf6[0][0] || this->prop.pcscf[0][0])
		{
			notify_wod(N_PCSCF,config->get_name(config), (void *)&this->prop);
		}
		if (this->prop.dns6[0][0] || this->prop.dns[0][0])
		{
		    notify_wod(N_DNS, config->get_name(config), (void *)&this->prop);
		}
		this->prop.status = ike_sa->get_status_code(ike_sa);
		this->prop.sub_error = ike_sa->get_sub_error_code(ike_sa);
		if(ike_sa->get_status_code(ike_sa) != PDN_STATUS_OK)
		{
			this->prop.backoff_time = ike_sa->get_backoff_timer(ike_sa);
			DBG1(DBG_CHD, "backoff_time : %d",this->prop.backoff_time);
		}
		notify_wod(N_ATTACH, config->get_name(config), (void *)&this->prop);
		ike_sa->update_keepalive_info(ike_sa, TRUE, FALSE);
	}
#endif

	return TRUE;
}

METHOD(listener_t, child_update, bool,
	private_updown_listener_t *this, ike_sa_t *ike_sa, child_sa_t *child_sa,
	int type)
{
	char* pcscf;
	child_cfg_t *config;
	pcscf = make_pcscf_vars(this, ike_sa);
	config = child_sa->get_config(child_sa);
	bool ret = TRUE;
	
	DBG0(DBG_CHD,"update established CHILD_SA parameter");
	switch(type)
	{
		case 0:
			if(ike_sa->get_status_code(ike_sa) == PDN_STATUS_OK && ike_sa->get_pcscf_need_update(ike_sa))
			{
				if(pcscf)
				{
					if(config)
					{
						notify_wod(N_PCSCF_RESTORE, config->get_name(config), (void *)&this->prop);
						DBG0(DBG_CHD,"send to WOD pcscf update");
					}
				}
				else
				{
					DBG0(DBG_CHD,"no valid pcscf,do not need update");
				}
				ike_sa->set_pcscf_need_update(ike_sa, FALSE);
			}
			break;
		default:
			DBG0(DBG_CHD,"do not support update type");
			ret = FALSE;
	}
	if(pcscf)
		free(pcscf);
	return ret;
}


METHOD(updown_listener_t, destroy, void,
	private_updown_listener_t *this)
{
	this->iface_cache->destroy(this->iface_cache);
	free(this);
}

/**
 * See header
 */
updown_listener_t *updown_listener_create(updown_handler_t *handler)
{
	private_updown_listener_t *this;

	INIT(this,
		.public = {
			.listener = {
				.child_updown = _child_updown,
				.child_update = _child_update,
			},
			.destroy = _destroy,
		},
		.iface_cache = linked_list_create(),
		.handler = handler,
	);

	return &this->public;
}
