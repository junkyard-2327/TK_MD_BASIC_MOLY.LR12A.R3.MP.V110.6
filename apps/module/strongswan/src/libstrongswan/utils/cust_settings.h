#ifndef __WO_CFG_H__
#define __WO_CFG_H__

#include <stdbool.h>

#define PDN_STATUS_OK                       0
#define PDN_STATUS_FAIL                     1
#define PDN_STATUS_UNABLE_CONNET_EPDG       1081
#define PDN_STATUS_UNABLE_MAKE_IPSEC_TUNNEL 1082
#define PDN_STATUS_UNABLE_TO_VALIDATE_SERVER_CERTIFICATE 1010  // Not support for ePDG
#define PDN_STATUS_UNABLE_TO_VALIDATE_SERVER_CERTIFICATE_EPDG 1101
#define PDN_STATUS_INVALID_CERTIFICATE      1011
#define PDN_STATUS_INVALID_CERTIFICATE_EPDG 1111
#define PDN_STATUS_LOCAL_RELEASE            2011

typedef union cust_value_t {
	int  integer;
	char *str;
	bool boolean;
} cust_value_t;

typedef struct cust_setting_t {
	char* system_property_key;
	cust_value_t default_value;
} cust_setting_t;

typedef enum cust_setting_type_t {
	IKE_INTERFACE,
	IKE_PORT,
	IKE_PORT_NATT,
	ENCR_KEY_DISPLAY,
	WSHARK_KEY_DUMP,
	RIL_IFACE_CONTROL,
	SETTING_END
} cust_setting_type_t;

int get_cust_setting(cust_setting_type_t type, char *value);
bool get_cust_setting_bool(cust_setting_type_t type);
int get_cust_setting_int(cust_setting_type_t type);
int set_cust_setting(cust_setting_type_t type, char *value);
int set_cust_setting_bool(cust_setting_type_t type, bool value);
int set_cust_setting_int(cust_setting_type_t type, int value);

#endif
