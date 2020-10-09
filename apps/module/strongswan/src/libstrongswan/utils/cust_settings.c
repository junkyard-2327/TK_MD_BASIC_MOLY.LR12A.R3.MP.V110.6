#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "cust_settings.h"
#include "settings.h"
#include "settings.h"
#include "debug.h"

#define PERSIST_PROPERTY_PREFIX "persist."

static cust_setting_t cust_settings[SETTING_END] = {
#ifdef STRONGSWAN_UNIT_TEST
	[IKE_INTERFACE] 		  = {"net.wo.ikev2if",		 {.str = "lo"}},
#else
	[IKE_INTERFACE]           = {"net.wo.ikev2if",       {.str = "wlan0"}},
#endif
	[IKE_PORT]                = {"net.wo.port",          {.integer = -1}},
	[IKE_PORT_NATT]           = {"net.wo.port_natt",     {.integer = -1}},
	[ENCR_KEY_DISPLAY]        = {"net.wo.key.display",   {.boolean = true}},
	[WSHARK_KEY_DUMP]         = {"net.wo.key.dump",      {.boolean = false}},
	[RIL_IFACE_CONTROL]       = {"ril.epdg.interface.ctrl", {.boolean = false}},
};

static int strcicmp(char const *a, char const *b)
{
	for (;; a++, b++)
	{
		int d = tolower(*a) - tolower(*b);

		if (d != 0 || !*a)
		{
			return d;
		}
	}
}

#define strcieq(s, t) (strcicmp(s, t) == 0)

static inline bool str_to_bool(const char* v)
{
	if (!v)
	{
		return false;
	}

	if (strcieq(v, "true") || strcieq(v, "1") || strcieq(v, "yes")
							|| strcieq(v, "y") || strcieq(v, "on"))
	{
		return true;
	}

	return false;
}

static inline const char* get_key(cust_setting_type_t type)
{
	return cust_settings[type].system_property_key;
}

static inline cust_value_t get_default(cust_setting_type_t type)
{
	return cust_settings[type].default_value;
}

int get_cust_setting(cust_setting_type_t type, char* value)
{
	const char *default_value = get_default(type).str;
	int len = 0;

	len = strlen(default_value);
	sprintf(value, default_value);

	return len;
}

bool get_cust_setting_bool(cust_setting_type_t type)
{
	return get_default(type).boolean;
}

int get_cust_setting_int(cust_setting_type_t type)
{
	return get_default(type).integer;
}

int set_cust_setting(cust_setting_type_t type, char* value)
{
	return -1;
}

int set_cust_setting_bool(cust_setting_type_t type, bool value)
{
	return -1;
}

int set_cust_setting_int(cust_setting_type_t type, int value)
{
	return -1;
}

