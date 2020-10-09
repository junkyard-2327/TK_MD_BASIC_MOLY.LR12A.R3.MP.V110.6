#include "wod_channel.h"

#include <daemon.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <stdio.h>
#include <unistd.h>

#ifdef ANDROID
#include <cutils/sockets.h>

#define NSID_ABSTRACT		ANDROID_SOCKET_NAMESPACE_ABSTRACT
#define NSID_RESERVED		ANDROID_SOCKET_NAMESPACE_RESERVED

#elif defined(STRONGSWAN_UNIT_TEST)
#include <cutils/properties.h>
#define NSID_ABSTRACT		0
#define NSID_RESERVED		1
#endif

#define WOD_SOCK_NAME		"wod_ipsec"
#define	WOD_TCP_TIMEOUT		3

static int wod_tcp_txrx(char *sock_name, int sock_nsid, char* txbuf, char *rxbuf, int rxbuf_size, int *rxlen)
{
	int sockfd = -1;
	int ret = -1;
	int txlen;
	char *sensitive_buf = NULL;
	char *clone = NULL;
	struct sockaddr_in servaddr,cliaddr;
	struct timeval timeout = { .tv_sec = WOD_TCP_TIMEOUT, .tv_usec = 0 };

	if (!sock_name || !txbuf || !rxbuf || rxbuf_size <= 0 || !rxlen)
	{
		DBG1(DBG_IKE, "Error: sock_name/txbuf/rxbuf/rxlen is NULL or rxbuf_size <= 0");
		goto end;
	}

	*rxlen = 0;
#if defined(ANDROID) || defined(STRONGSWAN_UNIT_TEST)
	sockfd = socket_local_client(sock_name, sock_nsid, SOCK_STREAM);
#endif
	if (sockfd < 0)
	{
		DBG1(DBG_IKE, "Error: create android socket failed: %d", sockfd);
		goto end;
	}

	if ((txlen = strlen(txbuf)) > 0)
	{
		txlen++; /* include '\0' to be delimiter */
	}
	else
	{
		DBG1(DBG_IKE, "Error: invalid txlen=%d", txlen);
		goto end;
	}

	if (!is_ap_load_type("user"))
	{
		DBG1(DBG_IKE, "Tx to %s - len:%d, data:[%s]",
				strcmp(WOD_SOCK_NAME, sock_name)? "MDMI" : "WOD", txlen, txbuf);
	}
	else
	{
		clone = strndup(txbuf, txlen);
		sensitive_buf = strtok(clone, "=");
		DBG1(DBG_IKE, "Tx to %s - len:%d, data:[%s=***]",
				strcmp(WOD_SOCK_NAME, sock_name)? "MDMI" : "WOD", txlen, sensitive_buf);
		free(clone);
		clone = NULL;
	}
	if (send(sockfd, txbuf, txlen, 0) < 0)
	{
		DBG1(DBG_IKE, "Error: send failed");
		goto end;
	}

	if (setsockopt (sockfd, SOL_SOCKET, SO_RCVTIMEO, (char *)&timeout, sizeof(timeout)) < 0)
	{
		DBG1(DBG_IKE, "Error: setsockopt SO_RCVTIMEO failed");
	}

	ret = recv(sockfd, rxbuf, rxbuf_size - 1, 0);
	if (ret <= 0)
	{
		DBG1(DBG_IKE, "Error: %s", (ret == 0)? "session closed" : "recv failed or Timeout");
		ret = -1;
		goto end;
	}
	*rxlen = ret;

	if (!is_ap_load_type("user"))
	{
		DBG1(DBG_IKE, "RX from %s - len:%d, data:[%s]",
				strcmp(WOD_SOCK_NAME, sock_name)? "MDMI" : "WOD", *rxlen, rxbuf);
	}
	else
	{
		clone = strndup(rxbuf, *rxlen);
		sensitive_buf = strtok(clone, ":");
		DBG1(DBG_IKE, "RX from %s - len:%d, data:[%s:***]",
				strcmp(WOD_SOCK_NAME, sock_name)? "MDMI" : "WOD", *rxlen, sensitive_buf);
		free(clone);
		clone = NULL;
	}
	ret = 0;

end:
	if (sockfd >= 0)
	{
		close(sockfd);
	}
	return ret;
}

void notify_wod(wo_notify_cmd_t cmd, const char *conn_name, void* param)
{
	char rxbuf[MAX_BUF_LEN] = {0};
	char tmp[MAX_BUF_LEN] = {0};
	char addrs[MAX_BUF_LEN] = {0};
	conn_info_prop *prop = (conn_info_prop *)param;
	keepalive_info_prop *ka_info;
	char *p, *sim_sn_info = conn_name ? strdupnull(conn_name + 4) : NULL;
	int rxlen = 0;
	int n_6, n_4;

	if (cmd == N_DPD_INTERVAL && !IS_MDMI_SUPPORTED())
	{
		return;
	}

	if (!sim_sn_info)
	{
		DBG1(DBG_IKE, "Error: Null sim_sn_info");
		return;
	}
	p = strchr(sim_sn_info, '_');
	if (p)
	{
		*p = ',';
	}
	else
	{
		DBG1(DBG_IKE, "Error: wrong format sim_sn_info: %s", sim_sn_info);
		free(sim_sn_info);
		return;
	}
	switch (cmd)
	{
		/*
		 * ATTACH notify format: ipsecattach=<sim_id>,<seq_num>,<status>,<sub_error>,<ipv6_address>,<ipv4_address>,<backoff_time>
		 */
		case N_ATTACH:
			if(prop && prop->backoff_time > 0)
			{
				snprintf(tmp, MAX_BUF_LEN, "ipsecattach=%s,%d,%d,\"%s\",\"%s\",%d",
						sim_sn_info, prop->status, prop->sub_error, prop->ip6[0], prop->ip[0], prop->backoff_time);
			}
			else
			{
				if(prop)
				{
					snprintf(tmp, MAX_BUF_LEN, "ipsecattach=%s,%d,%d,\"%s\",\"%s\",0",
							sim_sn_info, prop->status, prop->sub_error, prop->ip6[0], prop->ip[0]);
				}
			}
			break;
		/*
		 * DETACH notify format: ipsecdetach=<sim_id>,<seq_num>,<status>,<sub_error>
		 */
		case N_DETACH:
			if(prop)
			{
				snprintf(tmp, MAX_BUF_LEN, "ipsecdetach=%s,%d,%d", sim_sn_info, prop->status, prop->sub_error);
			}
			else
			{
				snprintf(tmp, MAX_BUF_LEN, "ipsecdetach=%s,0,0", sim_sn_info);
			}
			break;
		case N_PCSCF:
			for (n_6 = 0; n_6 < MAX_PCSCF_NUM && prop->pcscf6[n_6][0]; ++n_6)
			{
				snprintf(addrs, MAX_BUF_LEN, "%s,\"%s\"", addrs, prop->pcscf6[n_6]);
			}
			for (n_4 = 0; n_4 < MAX_PCSCF_NUM && prop->pcscf[n_4][0]; ++n_4)
			{
				snprintf(addrs, MAX_BUF_LEN, "%s,\"%s\"", addrs, prop->pcscf[n_4]);
			}
			snprintf(tmp, MAX_BUF_LEN, "ipsecpcscf=%s,%d,%d%s", sim_sn_info, n_6, n_4, addrs);
			break;
		case N_DNS:
			for (n_6 = 0; n_6 < MAX_DNS_NUM && prop->dns6[n_6][0]; ++n_6)
			{
				snprintf(addrs, MAX_BUF_LEN, "%s,\"%s\"", addrs, prop->dns6[n_6]);
			}
			for (n_4 = 0; n_4 < MAX_DNS_NUM && prop->dns[n_4][0]; ++n_4)
			{
				snprintf(addrs, MAX_BUF_LEN, "%s,\"%s\"", addrs, prop->dns[n_4]);
			}
			snprintf(tmp, MAX_BUF_LEN, "ipsecdns=%s,%d,%d%s", sim_sn_info, n_6, n_4, addrs);
			break;
		case N_OOS:
			snprintf(tmp, MAX_BUF_LEN, "ipsecoos=%s,%d", sim_sn_info, (wo_oos_t)param);
			break;
		case N_PCSCF_RESTORE:
			for (n_6 = 0; n_6 < MAX_PCSCF_NUM && prop->pcscf6[n_6][0]; ++n_6)
			{
				snprintf(addrs, MAX_BUF_LEN, "%s,\"%s\"", addrs, prop->pcscf6[n_6]);
			}
			for (n_4 = 0; n_4 < MAX_PCSCF_NUM && prop->pcscf[n_4][0]; ++n_4)
			{
				snprintf(addrs, MAX_BUF_LEN, "%s,\"%s\"", addrs, prop->pcscf[n_4]);
			}
			snprintf(tmp, MAX_BUF_LEN, "ipsecrestore=%s,%d,%d%s", sim_sn_info, n_6, n_4, addrs);
			break;
		case N_KEEP_ALIVE:
			ka_info = (keepalive_info_prop *)param;
			snprintf(tmp, MAX_BUF_LEN, "ipseckeepalive=%s,%d,%u,\"%s\",%u,\"%s\",%u",
											sim_sn_info,
											ka_info->enable, ka_info->interval,
											ka_info->src_ip, ka_info->src_port,
											ka_info->dst_ip, ka_info->dst_port);
			break;
		case N_FORCE_DPD:
			snprintf(tmp, MAX_BUF_LEN, "ipsecdpd=%s,%u", sim_sn_info, (wo_force_dpd_t)param);
			break;
		case N_DPD_INTERVAL:
			snprintf(tmp, MAX_BUF_LEN, "ipsecdpdintvl=%s,%u", sim_sn_info, (uint32_t)param);
			break;
		default:
			break;
	}

	if (!is_ap_load_type("user"))
	{
		DBG2(DBG_IKE, "notify_wod : %s", tmp);
	}
	else
	{
		DBG2(DBG_IKE, "notify_wod : %s", "***");
	}

	wod_tcp_txrx(WOD_SOCK_NAME, NSID_ABSTRACT, tmp, rxbuf, MAX_BUF_LEN, &rxlen);
	free(sim_sn_info);
}

void notify_wod_attach_failed(const char *conn_name, int status, int sub_error, int backoff_timer)
{
	conn_info_prop prop;

	memset(&prop, 0, sizeof(conn_info_prop));
	prop.status = status ? status : PDN_STATUS_UNABLE_MAKE_IPSEC_TUNNEL;
	prop.sub_error = sub_error;
	prop.backoff_time = backoff_timer;
	notify_wod(N_ATTACH, conn_name, (void *)&prop);
}

int atcmd_txrx(char *txbuf, char *rxbuf, int rxbuf_size, int *rxlen)
{
	int ret;

	ret = wod_tcp_txrx(WOD_SOCK_NAME, NSID_ABSTRACT, txbuf, rxbuf, rxbuf_size, rxlen);
	if (ret < 0)
	{
		*rxlen = 0;
		goto end;
	}
	/* Decrease rxlen if the end of string is '\0' */
	if (*rxlen > 0 && rxbuf[*rxlen - 1] == '\0')
	{
		(*rxlen)--;
	}

end:
	rxbuf[*rxlen] = 0;
	return ret;
}

void notify_wod_ikeesp(wo_notify_cmd_t cmd, const char *conn_name, void *value)
{
	char rxbuf[MAX_BUF_LEN] = {0};
	char tmp[MAX_BUF_LEN] = {0};
	char *p, *sim_info = conn_name ? strdupnull(conn_name + 4) : NULL;
	int rxlen = 0;

	if (sim_info)
	{
		p = strchr(sim_info, '_');
		if (p)
		{
			*p = 0;
		}
		else
		{
			DBG1(DBG_IKE, "Error: wrong format sim_info: %s", sim_info);
			free(sim_info);
			return;
		}
	}
	switch (cmd)
	{
		case N_IKE_DECRYPT_ADD:
			snprintf(tmp, MAX_BUF_LEN, "ipsecikedecryptadd=%s,%s", sim_info, (char *)value);
			break;
		case N_IKE_DECRYPT_DEL:
			snprintf(tmp, MAX_BUF_LEN, "ipsecikedecryptdel=%s,%s", sim_info, (char *)value);
			break;
		case N_ESP_DECRYPT_ADD:
			snprintf(tmp, MAX_BUF_LEN, "ipsecespdecryptadd=%s,%s", sim_info, (char *)value);
			break;
		case N_ESP_DECRYPT_DEL:
			snprintf(tmp, MAX_BUF_LEN, "ipsecespdecryptdel=%s,%s", sim_info, (char *)value);
			break;
		default:
			break;
	}

	if (!is_ap_load_type("user"))
	{
		DBG2(DBG_IKE, "notify_wod_ikeesp:[%s]", tmp);
	}
	wod_tcp_txrx(WOD_SOCK_NAME, NSID_ABSTRACT, tmp, rxbuf, MAX_BUF_LEN, &rxlen);
	free(sim_info);
}

