
#ifndef CUSTOM_SEC_KEY_H
#define CUSTOM_SEC_KEY_H


#include "kal_general_types.h"
#include "cust_chl_interface.h"

#define CUST_SEC_KEY_STRUCT_VER             1
#define CUST_SEC_KEY_STRUCT_MAGIC           "CUS_KEY"
#define CUST_SEC_MAX_PUB_KEY_LEN            9

typedef struct
{
	/* a unique magic pattern to identify SEC_KEY_ST structure */
	kal_char  m_magic[8];
	
	/* version of SEC_KEY_ST structure */
	kal_uint32 m_sec_key_st_ver;
	
	t_cust_chl_asym_key m_key[CUST_SEC_MAX_PUB_KEY_LEN];  

} CUST_SEC_KEY_ST;

/* MTK internal-use key array index */
enum
{
	TM_PUBK_KEY0 = 0,
	XM_PUBK_KEY1 = 1,
	SP_PUBK_KEY2 = 2,
	META_SLA_PUBK_KEY3 = 3,
	AT_SLA_PUBK_KEY = 4,
	VZ_PUBK_KEY	 = 5,
	KDDI_PUBK_KEY = 6,
        ATT_PUBK_KEY = 7,
};

extern kal_uint32 cust_sec_get_asym_key(kal_uint32 key_index, t_cust_chl_asym_key * key);
extern kal_uint32 cust_ext_get_asym_key(kal_uint32 key_index, t_cust_chl_asym_key * key);
#endif /* CUSTOM_SEC_KEY_H */
