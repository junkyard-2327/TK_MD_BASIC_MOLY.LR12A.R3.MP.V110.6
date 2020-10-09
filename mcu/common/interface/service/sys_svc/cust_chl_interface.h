#ifndef __CUST_CHL_INTERFACE_H__
#define __CUST_CHL_INTERFACE_H__

/*********************** Warning ***********************

!! Modify this file must remake sys_svc_sec module and custom module

*********************** Warning ************************/

#include "kal_public_defs.h"
#include "reg_base.h"


/* Warning : Please do not modify this definition !!! */
#define MAX_CUST_CHL_HASH_LEN                32
#define MAX_CUST_CHL_MAC_LEN                 32
#define MAX_CUST_CHL_SYM_KEY_LEN             32
#define MAX_CUST_CHL_SIG_LEN                 256
#define MAX_CUST_CHL_ASYM_KEY_LEN            256
/* Warning : Please do not modify this definition !!! */


#define CHE_RESULT_GUARD_PATTERN_BYTE        0xFC
#define CHE_RESULT_GUARD_PATTERN             0xFCFCFCFC
#define CHE_RESULT_GUARD_PATTERN_LEN         4

typedef enum
{ 
	
	CUST_CHL_ERROR_NONE                            = 0x0000,
	CUST_CHL_ERROR_NULL_PTR                        = 0x0001,
	CUST_CHL_ERROR_INVALID_ALG                     = 0x0002,
	CUST_CHL_ERROR_MD_NOT_FOUND                    = 0x0003,
	CUST_CHL_ERROR_NO_SUCH_KEY                     = 0x0004,
	CUST_CHL_ERROR_HEXIFY_FAILED                   = 0x0005,
	CUST_CHL_ERROR_UNHEXIFY_FAILED                 = 0x0006,
	CUST_CHL_ERROR_RESULT_GUARD_PATTERN_CORRUPTED  = 0x0007,
	CUST_CHL_ERROR_MEMORY_ALLOC_FAILED             = 0x0008,
	CUST_CHL_ERROR_INVALID_AES_KEY                 = 0x0009,
	CUST_CHL_ERROR_INVALID_MODE					   = 0x000a,
	CUST_CHL_ERROR_BLOCK_UNALIGNED_DATA_LENGTH     = 0x000b,
	
	CUST_CHL_ERROR_CHECK_RSA_PUB_FAILED            = 0x0100,
	CUST_CHL_ERROR_CHECK_RSA_PRIV_FAILED           = 0x0101,
	
	CUST_CHL_ERROR_READ_HRID_FAILED                = 0x0200,
	CUST_CHL_ERROR_GET_CUST_KEY_FAILED             = 0x0201,
	
	CUST_CHL_ERROR_VERIFY_MAC_FAILED               = 0x0300,
	CUST_CHL_ERROR_VERIFY_SIG_FAILED               = 0x0301,
	CUST_CHL_ERROR_CHECK_RSA_PUB_ENC_FAILED        = 0x0302,
	CUST_CHL_ERROR_CHECK_RSA_PRIV_ENC_FAILED       = 0x0303,
	CUST_CHL_ERROR_CHECK_RSA_PUB_DEC_FAILED        = 0x0304,
	CUST_CHL_ERROR_CHECK_RSA_PRIV_DEC_FAILED       = 0x0305,
	CUST_CHL_ERROR_CHECK_RSA_GEN_KEY_FAILED       = 0x0306,
	CUST_CHL_ERROR_CHECK_RSA_GEN_KEY_EPOF_ABORT       = 0x0307,
	CUST_CHL_ERROR_VERIFY_SIG_DEC_SIZE_NOT_MATCH   = 0x0308,
	CUST_CHL_ERROR_NO_MATCHING_ERR_CODE			   = 0x0309,
	CUST_CHL_ERROR_OVER_SIXTEEN_CODE			   = 0x030a,
	CUST_CHL_ERROR_ERR_STUCT_INIT				   = 0x030b,
	CUST_CHL_ERROR_UNDEFINED_FAILED                = 0x0800,
	
	CUST_CHL_ERROR_END                             = 0xFFFF,
	
} TYPE_CUST_CHL_ERROR;

typedef enum
{
	
	CUST_CHL_ALG_BEGIN              = 0x0000,
	
	/* hash*/
	CUST_CHL_ALG_SHA256             = 0x0001,
	
	/* cipher */
	CUST_CHL_ALG_RSA_PKCS1            = 0x1001,
	CUST_CHL_ALG_RSA_OAEP			  = 0x1002,
	CUST_CHL_ALG_AES128 			  = 0x1003,
	CUST_CHL_ALG_AES192 			  = 0x1004,
	CUST_CHL_ALG_AES256               = 0x1005,
	
	/* MAC */
	CUST_CHL_ALG_MAC_SHA256         = 0x2001,
	
	/* signature */
	CUST_CHL_ALG_RSA_PSS_SHA256     = 0x3001,
	CUST_CHL_ALG_RSA_PKCS1_V15_NONE = 0x3002,
	CUST_CHL_ALG_RSA_PKCS1_V15_SHA256 = 0x3003,
	CUST_CHL_ALG_RSA_OAEP_NONE = 0x3004,
	CUST_CHL_ALG_RSA_PKCS1_V15_SHA256_ASN1 = 0x3005,
	CUST_CHL_ALG_END                = 0xFFFF
	
} TYPE_CUST_CHL_ALG;

typedef enum
{
	
  /* symmetric key */
  CUST_CHL_SYM_BEGIN         = 0x0000,
  CUST_TM_SHARED_KEY2        = 0x0001,
  CUST_ATT_SHARED_KEY2       = 0x0002,
  CUST_CHL_SYM_END           = 0x7FFF,

  /* asymmetric key */
  /* MTK internal usage key */
  CUST_CHL_ASYM_BEGIN        = 0x8000,
  CUST_TM_PUB_KEY1           = 0x8001,
  CUST_XM_PUB_KEY2           = 0x8002,
  CUST_SP_PUB_KEY3           = 0x8003,
  CUST_META_PUB_KEY          = 0x8004,
  CUST_AT_PUB_KEY            = 0x8005,
  CUST_VZ_PUB_KEY	     = 0x8006,
  CUST_KDDI_PUB_KEY			 = 0x8007, 
  CUST_ATT_PUB_KEY1          = 0x8008,
  CUST_INTERNAL_KEY_END      = 0x8100,
  
  /* customer usage key - specified by customer in custom_sec_key.h */ 
  CUST_EXTERNAL_KEY_START	 = 0x8100,
  CUST_EXT_PUB_KEY0			 = 0x8101, //add customer key here
  CUST_EXTERNAL_KEY_END	 	 = 0x8200,
  
  CUST_CHL_ASYM_END          = 0xFFFF
  
} TYPE_CUST_CHL_KEY;

typedef enum
{
	CUST_CHL_MODE_BEGIN      = 0x0000,
	CUST_CHL_MODE_EBC 	     = 0x0001,
	CUST_CHL_MODE_CBC        = 0x0002,
	CUST_CHL_MODE_CTR		 = 0x0003,
	CUST_CHL_MODE_END 	     = 0xFFFF

}
TYPE_CUST_CRYPT_MODE;


/* We default use RSA as our asymmetric key */
typedef struct t_cust_chl_hash_u
{
	kal_uint32  m_len;	
	kal_uint8   m_u8[MAX_CUST_CHL_HASH_LEN];

} t_cust_chl_hash_u;

/* We default use sha256 HMAC*/
typedef struct t_cust_chl_mac_u
{
	kal_uint32  m_len;	
	kal_uint8   m_u8[MAX_CUST_CHL_MAC_LEN];

} t_cust_chl_mac_u;

typedef struct t_cust_chl_sym_key
{
	
	kal_uint32  m_key_len;
	kal_uint8   m_key[MAX_CUST_CHL_SYM_KEY_LEN];

} t_cust_chl_sym_key;


/* We default use RSA as our asymmetric key */
typedef struct t_cust_chl_asym_key
{
	
	kal_uint32  m_E_len;
	kal_uint32  m_D_len;
	kal_uint32  m_N_len;
	kal_uint8   m_E_key[MAX_CUST_CHL_ASYM_KEY_LEN];  // exponent : E => public key
	kal_uint8   m_D_key[MAX_CUST_CHL_ASYM_KEY_LEN];  // exponent : D => private key
	kal_uint8   m_N_key[MAX_CUST_CHL_ASYM_KEY_LEN];  // modulo
	kal_uint8   m_reserved[20];
	
} t_cust_chl_asym_key;

typedef struct aes_param_st {
    kal_uint32 counter_len;
    kal_uint8 *IV;
    kal_uint32 IVLength;
} AES_PARAM;

/*****************************************************************************
 * FUNCTION
 *  CustCHL_Get_Sym_Key
 * DESCRIPTION
 *  
 * PARAMETERS
 *  key_type            [IN]   (reference to enum TYPE_CUST_CHL_KEY)         
 *  key                 [OUT]  (Symmetric key)      
 * RETURNS
    0 : successfully 
    otherwise : failure (reference to enum TYPE_CUST_CHL_ERROR for error code)
 *****************************************************************************/
extern kal_uint32 CustCHL_Get_Sym_Key(TYPE_CUST_CHL_KEY key_type, t_cust_chl_sym_key * key);


/*****************************************************************************
 * FUNCTION
 *  CustCHL_Get_Asym_Key
 * DESCRIPTION
 *  
 * PARAMETERS
 *  key_type            [IN]    (reference to enum TYPE_CUST_CHL_KEY)         
 *  key                 [OUT]   (RSA key)     
 * RETURNS
    0 : successfully 
    otherwise : failure (reference to enum TYPE_CUST_CHL_ERROR for error code)
 *****************************************************************************/
extern kal_uint32 CustCHL_Get_Asym_Key(TYPE_CUST_CHL_KEY key_type, t_cust_chl_asym_key * key);


/*****************************************************************************
 * FUNCTION
 *  CustCHL_RSA_PKCS1_Encrypt
 * DESCRIPTION
 *  
 * PARAMETERS
 *  alg_type            [IN]    (reference to enum TYPE_CUST_CHL_ALG)
 *  mode                [IN]    (0 : with public key encrypt, 1 : with private key encrypt)
 *  input_len           [IN]    (length of plaintext)
 *  input               [IN]    (plaintext) 
 *  output              [OUT]   (cipher)
 *  key                 [IN]    (RSA public/private key)
 * RETURNS
    0 : successfully 
    otherwise : failure (reference to enum TYPE_CUST_CHL_ERROR for error code)
 *****************************************************************************/
extern kal_uint32 CustCHL_RSA_PKCS1_Encrypt(TYPE_CUST_CHL_ALG alg_type,
			                                        kal_uint32 mode,
			                                        kal_uint32 input_len,
			                                        kal_uint8 * input, 
			                                        kal_uint8 * output,
			                                        kal_uint32 * output_len,
			                                        t_cust_chl_asym_key * key);


/*****************************************************************************
 * FUNCTION
 *  CustCHL_RSA_PKCS1_Decrypt
 * DESCRIPTION
 *  
 * PARAMETERS
 *  alg_type            [IN]    (reference to enum TYPE_CUST_CHL_ALG)
 *  mode                [IN]    (0 : with public key decrypt, 1 : with private key decrypt)
 *  input_len           [IN]    (length of cipher)
 *  input               [IN]    (cipher)
 *  output_len          [OUT]   (length of decrypted data) 
 *  output              [OUT]   (decrypted data)
 *  key                 [IN]    (RSA public/private key)
 * RETURNS
    0 : successfully 
    otherwise : failure (reference to enum TYPE_CUST_CHL_ERROR for error code)
 *****************************************************************************/                               
extern kal_uint32 CustCHL_RSA_PKCS1_Decrypt(TYPE_CUST_CHL_ALG alg_type,
                                              		kal_uint32 mode,
                                              		kal_uint32 input_len,
			                                        kal_uint8 * input, 
			                                        kal_uint32 * output_len,
			                                        kal_uint8 * output,
			                                        t_cust_chl_asym_key * key);   

/*****************************************************************************
 * FUNCTION
 *  CustCHL_Calculate_Hash
 * DESCRIPTION
 *  
 * PARAMETERS
 *  alg_type            [IN]    (reference to enum TYPE_CUST_CHL_ALG)
 *  data                [IN]    (data to be calculated)
 *  data_len            [IN]    (length of data)
 *  hash_u              [OUT]   (hash) 
 * RETURNS
    0 : successfully 
    otherwise : failure (reference to enum TYPE_CUST_CHL_ERROR for error code)
 *****************************************************************************/   
extern kal_uint32 CustCHL_Calculate_Hash(TYPE_CUST_CHL_ALG alg_type,
                                           kal_uint8 * data, 
                                           kal_uint32 data_len, 
                                           t_cust_chl_hash_u * hash_u);

/*****************************************************************************
 * FUNCTION
 *  CustCHL_Verify_PSS_Signature
 * DESCRIPTION
 *  
 * PARAMETERS
 *  alg_type            [IN]    (reference to enum TYPE_CUST_CHL_ALG)
 *  data                [IN]    (original data)
 *  data_len            [IN]    (length of data)
 *  sig                 [IN]    (signature) 
 *  key                 [IN]    (RSA public key) 
 * RETURNS
    0 : successfully 
    otherwise : failure (reference to enum TYPE_CUST_CHL_ERROR for error code)
 *****************************************************************************/ 
extern kal_uint32 CustCHL_Verify_PSS_Signature(TYPE_CUST_CHL_ALG alg_type,
                                                 kal_uint8 * data, 
                                                 kal_uint32 data_len,
                                                 kal_uint8 * sig,
                                                 t_cust_chl_asym_key * key);

/*****************************************************************************
 * FUNCTION
 *  CustCHL_Verify_RSA_Signature
 * DESCRIPTION
 *  
 * PARAMETERS
 *  alg_type            [IN]    (reference to enum TYPE_CUST_CHL_ALG)
 *  data                [IN]    (original data)
 *  data_len            [IN]    (length of data)
 *  sig                 [IN]    (signature) 
 *  sig_len             [IN]    (length of signature) 
 *  key                 [IN]    (RSA public key) 
 * RETURNS
    0 : successfully 
    otherwise : failure (reference to enum TYPE_CUST_CHL_ERROR for error code)
 *****************************************************************************/ 
kal_uint32 CustCHL_Verify_RSA_Signature(TYPE_CUST_CHL_ALG alg_type,
                                        kal_uint8 * data, 
                                        kal_uint32 data_len,
                                        kal_uint8 * sig,
                                        kal_uint32 sig_len,
                                        t_cust_chl_asym_key * pCustKey);

/*****************************************************************************
 * FUNCTION
 *  CustCHL_Verify_MAC
 * DESCRIPTION
 *  
 * PARAMETERS
 *  alg_type            [IN]    (reference to enum TYPE_CUST_CHL_ALG)
 *  data                [IN]    (original data)
 *  data_len            [IN]    (length of data)
 *  mac                 [IN]    (hmac) 
 *  key                 [IN]    (Symmetric key) 
 *  key_len             [IN]    (length of key) 
 * RETURNS
    0 : successfully 
    otherwise : failure (reference to enum TYPE_CUST_CHL_ERROR for error code)
 *****************************************************************************/                                         
extern kal_uint32 CustCHL_Verify_MAC(TYPE_CUST_CHL_ALG alg_type,
                              kal_uint8 * data, 
                              kal_uint32 data_len,
                              kal_uint8 * mac,
                              kal_uint8 * key, 
                              kal_uint32 key_len) ;                                         
                               


/*****************************************************************************
 * FUNCTION
 *  CustCHL_Calculate_MAC
 * DESCRIPTION
 *  
 * PARAMETERS
 *  alg_type            [IN]    (reference to enum TYPE_CUST_CHL_ALG)
 *  data                [IN]    (original data)
 *  data_len            [IN]    (length of data)
 *  key                 [IN]    (Symmetric key) 
 *  key_len             [IN]    (length of key) 
 *  mac_u               [OUT]   (output MAC)
 * RETURNS
    0 : successfully 
    otherwise : failure (reference to enum TYPE_CUST_CHL_ERROR for error code)
 *****************************************************************************/   
extern kal_uint32 CustCHL_Calculate_MAC(TYPE_CUST_CHL_ALG alg_type,
                                 kal_uint8 * data, 
                                 kal_uint32 data_len,
                                 kal_uint8 * key, 
                                 kal_uint32 key_len,
                                 t_cust_chl_mac_u * mac_u);
/*****************************************************************************
 * FUNCTION
 *  CustCHL_RSA_Gen_Key
 * DESCRIPTION
 *  
 * PARAMETERS
 *  rsa_key             [OUT]    (rsa public/private key pair)
*  rsa_bits             [IN]   (length of rsa key in bits)
 *  e_value             [IN]   (assign exponent for rsa public key) : unused now, fill NULL
 *  e_value_len         [IN]    (length of e_value) : unused now, fill 0
 * RETURNS
    0 : successfully 
    otherwise : failure (reference to enum TYPE_CUST_CHL_ERROR for error code)
 *****************************************************************************/
extern kal_uint32 CustCHL_RSA_Gen_Key(t_cust_chl_asym_key * rsa_key, 
											kal_uint8 * e_value, 
											kal_uint32 e_value_len);

/*****************************************************************************
 * FUNCTION
 *  CustCHL_RSA_Extract_Pub_Key
 * DESCRIPTION
 *  
 * PARAMETERS
 *  rsa_key             [IN]    (rsa public/private key pair)
 *  pub_key             [OUT]   (Text format of rsa public key)
 *  pub_key_len         [OUT]   (Length of pub_key)
 * RETURNS
    0 : successfully 
    otherwise : failure (reference to enum TYPE_CUST_CHL_ERROR for error code)
 *****************************************************************************/
extern kal_uint32 CustCHL_RSA_Extract_Pub_Key(t_cust_chl_asym_key * rsa_key, 
													kal_uint8 * pub_key,
													kal_uint32 * pub_key_len);

/*****************************************************************************
 * FUNCTION
 *  CustCHL_Gen_Root_Key
 * DESCRIPTION
 *  
 * PARAMETERS
 *  root_key            [OUTPUT]    (reference to enum TYPE_CUST_CHL_ALG)
* RETURNS
    0 : successfully 
    otherwise : failure (reference to enum TYPE_CUST_CHL_ERROR for error code)
 *****************************************************************************/ 
extern kal_uint32 CustCHL_Gen_Root_Key(t_cust_chl_sym_key * root_key);

/*****************************************************************************
 * FUNCTION
 *  CustCHL_AES_Encrypt
 * DESCRIPTION
 *  
 * PARAMETERS
 *  alg_type            [IN]    (reference to enum TYPE_CUST_CHL_ALG) 
 *  c_mode              [IN]    (mode of operation)
 *  input_len           [IN]    (length of plaintext)
 *  input               [IN]    (plaintext) 
 *  output_len          [OUT]   (length of cipher)
 *  output              [OUT]   (cipher)
 *  key                 [IN]    (AES key) 
 * RETURNS
    0 : successfully 
    otherwise : failure (reference to enum TYPE_CUST_CHL_ERROR for error code)
 *****************************************************************************/
extern kal_uint32 CustCHL_AES_Encrypt(TYPE_CUST_CHL_ALG alg_type,
											TYPE_CUST_CRYPT_MODE c_mode,
											kal_uint32 input_len,
											kal_uint8 * input, 
											kal_uint32 * output_len,
											kal_uint8 * output,
											t_cust_chl_sym_key * key);

extern kal_uint32 CustCHL_AES_Encrypt_data(TYPE_CUST_CHL_ALG alg_type,
									TYPE_CUST_CRYPT_MODE c_mode,
									kal_uint32 input_len,
									kal_uint8 * input, 
									kal_uint32 * output_len,
									kal_uint8 * output,
									t_cust_chl_sym_key * key,
									AES_PARAM *aes_param);
/*****************************************************************************
 * FUNCTION
 *  CustCHL_AES_Decrypt
 * DESCRIPTION
 *  
 * PARAMETERS
 *  alg_type            [IN]    (reference to enum TYPE_CUST_CHL_ALG) 
 *  c_mode              [IN]    (mode of operation) 
 *  input_len           [IN]    (length of cipher)
 *  input               [IN]    (cipher)
 *  output_len          [OUT]   (length of decrypted data) 
 *  output              [OUT]   (decrypted data)
 *  key                 [IN]    (AES key)
 * RETURNS
    0 : successfully 
    otherwise : failure (reference to enum TYPE_CUST_CHL_ERROR for error code)
 *****************************************************************************/ 
extern kal_uint32 CustCHL_AES_Decrypt(TYPE_CUST_CHL_ALG alg_type,
											TYPE_CUST_CRYPT_MODE c_mode,
											kal_uint32 input_len,
											kal_uint8 * input, 
											kal_uint32 * output_len,
											kal_uint8 * output,
											t_cust_chl_sym_key * key);

/*****************************************************************************
 * FUNCTION
 *  CustCHL_Nounce_Encrypt
 * DESCRIPTION
 *  
 * PARAMETERS
 *  nounce            	[IN]    Format : (MEID) a-zA-Z ASCII Random String(80B) + 0-9 ASCII MEID String(14B)/IMEI String(15B) + Z(1B) (Z only for MEID)
 *  nounce_len          [IN]    should less than 100bytes
 *  nounce_enc          [OUT]    encryption result
 * RETURNS
    0 : successfully 
    otherwise : failure (reference to enum TYPE_CUST_CHL_ERROR for error code)
 *****************************************************************************/
extern kal_uint32 CustCHL_Nounce_Encrypt(kal_uint8 * nounce, kal_uint8 nounce_len, kal_uint8 * nounce_enc);

/*****************************************************************************
 * FUNCTION
 *  CustCHL_Verify_UICC_Sig
 * DESCRIPTION
 *  
 * PARAMETERS
 *  nounce            	[IN]    Format : (MEID) a-zA-Z ASCII Random String(80B) + 0-9 ASCII MEID String(14B)/IMEI String(15B) + Z(1B)
 *  nounce_len          [IN]    should less than 100bytes
 *	sig					[IN]	sig of the message
 *  unlock_code         [IN]    message: unlock code + nounce
 * RETURNS
    0 : successfully 
    otherwise : failure (reference to enum TYPE_CUST_CHL_ERROR for error code)
 *****************************************************************************/
extern kal_uint32 CustCHL_Verify_UICC_Sig(kal_uint8 * nounce, kal_uint8 nounce_len, kal_uint8 * sig, kal_uint8 unlock_code);

/*****************************************************************************
 * FUNCTION
 *  CustCHL_Get_Random
 * DESCRIPTION
 *  
 * PARAMETERS
 *  rand            	[OUT]    32-bit random value if return value is true 
 * RETURNS
    TRUE : successfully 
    FALSE : failure
 *****************************************************************************/
#ifdef __CUST_SUPPORT_TRNG__ 
extern kal_bool CustCHL_Get_Random(kal_uint32 *rand);
#endif

/*****************************************************************************
 * FUNCTION
 *  CustCHL_HW_AES_Encrypt
 * DESCRIPTION
 *  Execute AES encryption using per-chip unique hardware-visible key - Only support AES128 CBC mode
 * PARAMETERS
 *  input                [IN]    (original data) Note: input data length should be AES_BLOCK size (16B) aligned 
 *  input_len            [IN]    (length of original data)
 *  iv		 	 [IN]	 (initial vector)
 *  output               [IN]    (result) 
 *  output_len           [OUT]   (length of result) 
 * RETURNS
    0 : successfully 
    otherwise : failure (reference to enum TYPE_CUST_CHL_ERROR for error code)
 * NOTE
 *  	
 *****************************************************************************/
extern kal_uint32 CustCHL_HW_AES_Encrypt( kal_uint8 *	input,
					  kal_uint32	input_len,
					  kal_uint8*	iv,
					  kal_uint8 *	output,
					  kal_uint32 *	output_len);

/*****************************************************************************
 * FUNCTION
 *  CustCHL_HW_AES_Decrypt
 * DESCRIPTION
 *  Execute AES decryption using per-chip unique hardware-visible key - Only support AES128 CBC mode
 * PARAMETERS
 *  input                [IN]    (original data) Note: input data length should be AES_BLOCK size (16B) aligned
 *  input_len            [IN]    (length of original data)
 *  iv			 [IN]	 (initial vector)
 *  output               [IN]    (result) 
 *  output_len           [OUT]   (length of result) 
 * RETURNS
    0 : successfully 
    otherwise : failure (reference to enum TYPE_CUST_CHL_ERROR for error code)
 *****************************************************************************/ 
extern kal_uint32 CustCHL_HW_AES_Decrypt( kal_uint8*	input,
					  kal_uint32	input_len,
					  kal_uint8*	iv,
					  kal_uint8*	output,
					  kal_uint32*	output_len);

#endif /* __CUST_CHL_INTERFACE_H__ */

