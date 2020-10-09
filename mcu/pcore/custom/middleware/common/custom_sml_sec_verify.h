#ifndef __CUSTOM_SML_SEC_VERIFY_H__
#define __CUSTOM_SML_SEC_VERIFY_H__

#include "cust_chl_interface.h"
#include "custom_nvram_sec.h"

typedef enum{
	TYPE_HCK_ALGO_NONE 					= 0,
	TYPE_HCK_PBKDF2_HMAC_SHA256_SALT128	= 1,
	TYPE_HCK_INTR_USE_END 				= 99,
	TYPE_HCK_EXT_USE_START 				= 100,
	/* Note for customer: please add customized enum value for HCK calculation algorithm here */ 
	TYPE_HCK_EXT_USE_END 				= 255
}TYPE_HCK_ALGO;

typedef enum{
	TYPE_SIG_NONE							= 0,
	TYPE_SIG_RSA_PSS_SHA256					= 1,
	TYPE_SIG_INTR_USE_END					= 99,
	TYPE_SIG_EXT_USE_START					= 100,
	/* Note for customer: please add customized enum value for signature verification algorithm here */
	TYPE_SIG_RSA_END 						= 255
}TYPE_SIG_ALGO;

typedef enum{
	ERR_SEC_CHECK_HCK_SUCCESS				= 0,
	ERR_SEC_CHECK_SIG_SUCCESS				= 0,
	ERR_SEC_CHECK_HCK_NONE_CMP_FAIL			= 1,
	ERR_SEC_CHECK_HCK_INVALID_INOUT			= 2,
	ERR_SEC_CHECK_HCK_UNSUPPORT_ALGO		= 3,
	ERR_SEC_CHECK_SIG_INVALID_INOUT			= 4,
	ERR_SEC_CHECK_PBKDF2_SHA256_SALT128		= 5,
	ERR_SEC_CHECK_PBKDF2_SHA256_SALT128_CMP_FAIL = 6,
	ERR_SEC_CHECK_SIG_VERIRY_FAIL			= 7,
	ERR_SEC_CHECK_SIG_UNSUPPORT_ALGO		= 8,
	ERR_SEC_ETM_UNSUPPORT_ALGO				= 9,
	ERR_SEC_INVALID_INOUT					= 998,
	ERR_SEC_INTR_USE_END					= 999,
	ERR_SEC_EXT_USE_START					= 1000,
	/* Note for customer: please add customized enum value for error code here */
	ERR_SEC_CHECK_END						= 0xFFFFFFFF
}TYPE_HCK_SIG_ERR;

typedef struct{
	kal_uint32		m_E_len;
	kal_uint32		m_N_len;
	kal_uint8		m_E_key[MAX_CUST_CHL_ASYM_KEY_LEN];
	kal_uint8		m_N_key[MAX_CUST_CHL_ASYM_KEY_LEN];
}gblob_rsa_pub_key_s;

typedef enum{
	ALGO_AE_AESGCM128 = 0,
	ALGO_AE_AESCTR256_HMACSHA256 = 1,
}BLOB_PROT_SCHEME;

typedef struct{
	t_cust_chl_sym_key	enc_key;
	t_cust_chl_sym_key	hmac_key;
}ALGO_AE_AES_HMAC_SHA256;

kal_uint32 cust_sec_hck_verify (TYPE_HCK_ALGO algo, kal_char *ck, kal_uint32 ck_len, kal_uint8 *salt, kal_uint32 iter, kal_uint8 *hck);

kal_uint32 cust_sec_gblob_verify(sml_gblob_s_context_struct *data, void *key);

kal_uint32 cust_sec_eta_tt_blob(BLOB_PROT_SCHEME prot_scheme_byte, kal_uint32 key_id, kal_uint8* in_data, kal_uint32 in_data_len, kal_uint8* cipher_out, kal_uint32* cipher_len, kal_uint8* tag, kal_uint32* tag_len, kal_uint8* iv, kal_uint32* iv_len);

extern void RAND_add(const void *buf,int num,double entropy);
extern int RAND_bytes(unsigned char *buf, int num);
extern kal_uint32 drv_get_current_time(void);
extern void sml_op129_Dump(kal_char *title, kal_uint8 *pData, kal_uint16 len);
#endif

