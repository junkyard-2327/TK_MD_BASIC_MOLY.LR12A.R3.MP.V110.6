#ifndef __WOD_CHANNEL_H__
#define __WOD_CHANNEL_H__

#include <utils/utils.h>

#define	MAX_VIP_NUM		2
#define	MAX_DNS_NUM		10
#define	MAX_PCSCF_NUM	10
#define	MAX_NETMASK_NUM	2
#define MAX_SUBNET_NUM	2
#define	IP_ADDR_LEN		16	//	xxx.xxx.xxx.xxx
#define	IP6_ADDR_LEN	46	//	xxxx:xxxx:xxxx:xxxx:xxxx:xxxx:255.255.255.255
#define MAX_BUF_LEN      1024

#if defined (ANDROID) || defined(STRONGSWAN_UNIT_TEST)
#define IS_MDMI_SUPPORTED()	true//property_get_bool("persist.mtk_mdmi_support", false)
#endif

typedef enum wo_oos_t {
	OOS_END,
	OOS_START,
	OOS_RESUME,
} wo_oos_t;

typedef enum wo_force_dpd_t {
	FORCE_DPD_SUCC,
	FORCE_DPD_FAIL,
	FORCE_DPD_TIMEOUT,
} wo_force_dpd_t;

typedef enum _imei_format_t {
	IMEI_BCD = 0,
	IMEI_STRING = 1,
} imei_format_t;

typedef enum wo_notify_cmd_t {
	N_ATTACH,
	N_DETACH,
	N_PCSCF,
	N_DNS,
	N_OOS,
	N_PCSCF_RESTORE,
	N_KEEP_ALIVE,
	N_FORCE_DPD,
	N_DPD_INTERVAL,
	N_IKE_DECRYPT_ADD,
	N_IKE_DECRYPT_DEL,
	N_ESP_DECRYPT_ADD,
	N_ESP_DECRYPT_DEL,
} wo_notify_cmd_t;

typedef struct conn_info {
	int status;
	int sub_error;
	int backoff_time;
	char ip[MAX_VIP_NUM][IP_ADDR_LEN];
	char ip6[MAX_VIP_NUM][IP6_ADDR_LEN];
	char dns[MAX_DNS_NUM][IP_ADDR_LEN];
	char dns6[MAX_DNS_NUM][IP6_ADDR_LEN];
	char pcscf[MAX_PCSCF_NUM][IP_ADDR_LEN];
	char pcscf6[MAX_PCSCF_NUM][IP6_ADDR_LEN];
	char netmask[MAX_NETMASK_NUM][IP_ADDR_LEN];
	char netmask6[MAX_NETMASK_NUM][IP6_ADDR_LEN];
	char subnet[MAX_SUBNET_NUM][IP_ADDR_LEN];
	char subnet6[MAX_SUBNET_NUM][IP6_ADDR_LEN];
} conn_info_prop;

typedef struct keepalive_info {
	bool enable;
	u_int32_t interval;
	char src_ip[IP6_ADDR_LEN];
	u_int16_t src_port;
	char dst_ip[IP6_ADDR_LEN];
	u_int16_t dst_port;
} keepalive_info_prop;

void notify_wod(wo_notify_cmd_t cmd, const char *conn_name, void* param);
void notify_wod_attach_failed(const char *conn_name, int status, int sub_error,int backoff_timer);
int atcmd_txrx(char *txbuf, char *rxbuf, int rxbuf_size, int *rxlen);
void notify_wod_ikeesp(wo_notify_cmd_t cmd, const char *conn_name, void *value);

#endif // __WOD_CHANNEL_H__

