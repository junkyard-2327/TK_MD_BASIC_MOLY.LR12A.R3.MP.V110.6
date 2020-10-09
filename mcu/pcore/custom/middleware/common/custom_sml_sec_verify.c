/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2012
*
*  BY OPENING THIS FILE, BUYER HEREBY UNEQUIVOCALLY ACKNOWLEDGES AND AGREES
*  THAT THE SOFTWARE/FIRMWARE AND ITS DOCUMENTATIONS ("MEDIATEK SOFTWARE")
*  RECEIVED FROM MEDIATEK AND/OR ITS REPRESENTATIVES ARE PROVIDED TO BUYER ON
*  AN "AS-IS" BASIS ONLY. MEDIATEK EXPRESSLY DISCLAIMS ANY AND ALL WARRANTIES,
*  EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE IMPLIED WARRANTIES OF
*  MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE OR NONINFRINGEMENT.
*  NEITHER DOES MEDIATEK PROVIDE ANY WARRANTY WHATSOEVER WITH RESPECT TO THE
*  SOFTWARE OF ANY THIRD PARTY WHICH MAY BE USED BY, INCORPORATED IN, OR
*  SUPPLIED WITH THE MEDIATEK SOFTWARE, AND BUYER AGREES TO LOOK ONLY TO SUCH
*  THIRD PARTY FOR ANY WARRANTY CLAIM RELATING THERETO. MEDIATEK SHALL ALSO
*  NOT BE RESPONSIBLE FOR ANY MEDIATEK SOFTWARE RELEASES MADE TO BUYER'S
*  SPECIFICATION OR TO CONFORM TO A PARTICULAR STANDARD OR OPEN FORUM.
*
*  BUYER'S SOLE AND EXCLUSIVE REMEDY AND MEDIATEK'S ENTIRE AND CUMULATIVE
*  LIABILITY WITH RESPECT TO THE MEDIATEK SOFTWARE RELEASED HEREUNDER WILL BE,
*  AT MEDIATEK'S OPTION, TO REVISE OR REPLACE THE MEDIATEK SOFTWARE AT ISSUE,
*  OR REFUND ANY SOFTWARE LICENSE FEES OR SERVICE CHARGE PAID BY BUYER TO
*  MEDIATEK FOR SUCH MEDIATEK SOFTWARE AT ISSUE.
*
*  THE TRANSACTION CONTEMPLATED HEREUNDER SHALL BE CONSTRUED IN ACCORDANCE
*  WITH THE LAWS OF THE STATE OF CALIFORNIA, USA, EXCLUDING ITS CONFLICT OF
*  LAWS PRINIPLES.  ANY DISPUTES, CONTROVERSIES OR CLAIMS ARISING THEREOF AND
*  RELATED THERETO SHALL BE SETTLED BY ARBITRATION IN SAN FRANCISCO, CA, UNDER
*  THE RULES OF THE INTERNATIONAL CHAMBER OF COMMERCE (ICC).
*
*****************************************************************************/

/*******************************************************************************
 *
 * Filename:
 * ---------
 *   custom_sml_sec_verify.c
 *
 * Project:
 * --------
 *   UMOLYA
 *
 * Description:
 * ------------
 *   This file is used to define the SML security verification.
 *
 * Author:
 * -------
 * -------
 *
 *==============================================================================
 *             HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *==============================================================================
 *******************************************************************************/

#include "custom_sml_sec_verify.h"
#include "che_ossl_api.h"
#include "dhl_trace.h"
//#define __GBLOB_DEBUG__

kal_uint32 cust_sec_hck_verify (TYPE_HCK_ALGO algo, kal_char *ck, kal_uint32 ck_len, kal_uint8 *salt, kal_uint32 iter, kal_uint8 *hck){
	
	int ret = ERR_SEC_CHECK_HCK_UNSUPPORT_ALGO;	
	kal_uint8 hck_calc[64] = {0};
	kal_uint32 i = 0;
	dhl_print(TRACE_INFO, DHL_USER_FLAG_NONE, MOD_NVRAM, "ck_len: %x, algo: %x, ck: %x, hck: %x", ck_len, algo, ck, hck);
	for(i=0;i<ck_len;i++)
		dhl_print(TRACE_INFO, DHL_USER_FLAG_NONE, MOD_NVRAM, "hck: %x", hck[i]);
		
	if( (ck == NULL) || (hck == NULL) )
		return ERR_SEC_CHECK_HCK_INVALID_INOUT;
			
	switch(algo){
		case TYPE_HCK_ALGO_NONE:
			if(memcmp(ck, hck, ck_len) != 0){
				return ERR_SEC_CHECK_HCK_NONE_CMP_FAIL;
			}else{
				return ERR_SEC_CHECK_HCK_SUCCESS;
			}
			break;
		case TYPE_HCK_PBKDF2_HMAC_SHA256_SALT128:	//Fixed HCK: 32B, Salt: 16B
			if( (salt == NULL) || (ck_len == 0) )
				return ERR_SEC_CHECK_HCK_INVALID_INOUT;
				
			ret = PKCS5_PBKDF2_HMAC_SHA256(ck, ck_len, salt, 16, iter, 32, hck_calc);
			
			/* PKCS5_PBKDF2_HMAC_SHA256 if error occurs, internal hardcode return 1*/
			if( ret != 1 )
				return ERR_SEC_CHECK_PBKDF2_SHA256_SALT128;
			else if(memcmp(hck_calc, hck, 32) != 0)	
				return ERR_SEC_CHECK_PBKDF2_SHA256_SALT128_CMP_FAIL;
			else
				return ERR_SEC_CHECK_HCK_SUCCESS;	
			break;	
		default:
				return ERR_SEC_CHECK_HCK_UNSUPPORT_ALGO;
			break;	
	}
	return ret;	
}

kal_uint32 cust_sec_gblob_verify(sml_gblob_s_context_struct *data, void *key){

	TYPE_SIG_ALGO 	sig_algo;
	kal_uint32	  	ret = ERR_SEC_CHECK_SIG_UNSUPPORT_ALGO;
	kal_uint32		data_len = sizeof(sml_gblob_s_context_struct) - sizeof(data->signature);
	kal_uint32	  	data_start = (kal_uint32) data;
	kal_uint8*		sig = data->signature;
	kal_uint32		sig_len = sizeof(data->signature);
	t_cust_chl_asym_key		asym_key;	/* We default use RSA as our asymmetric key */
	gblob_rsa_pub_key_s*	rsa_pub_key_ptr;
	
	if( (data == NULL) || (key == NULL) ){
#ifdef __GBLOB_DEBUG__
		dhl_print(TRACE_INFO, DHL_USER_FLAG_NONE, MOD_NVRAM, "data: %x, key:%x", data, key);
#endif		
		return ERR_SEC_CHECK_SIG_INVALID_INOUT;
	}

#ifdef __GBLOB_DEBUG__
	dhl_print(TRACE_INFO, DHL_USER_FLAG_NONE, MOD_NVRAM, "sml_lock_rule: %x", data->sml_lock_type);
	dhl_print(TRACE_INFO, DHL_USER_FLAG_NONE, MOD_NVRAM, "sml_lock_sub_rule: %x %x", data->sml_lock_sub_type[0], data->sml_lock_sub_type[1]);
	dhl_print(TRACE_INFO, DHL_USER_FLAG_NONE, MOD_NVRAM, "dev_protection_algo: %x", data->dev_protection_algo);
	dhl_print(TRACE_INFO, DHL_USER_FLAG_NONE, MOD_NVRAM, "device_interation_cnt: %x %x %x %x", data->device_interation_cnt[0], data->device_interation_cnt[1], data->device_interation_cnt[2], data->device_interation_cnt[3]);
	dhl_print(TRACE_INFO, DHL_USER_FLAG_NONE, MOD_NVRAM, "device_salt: %x %x %x %x", data->device_salt[0], data->device_salt[1], data->device_salt[2], data->device_salt[3]);
	dhl_print(TRACE_INFO, DHL_USER_FLAG_NONE, MOD_NVRAM, "device_hck: %x %x %x %x", data->device_hck[0], data->device_hck[1], data->device_hck[2], data->device_hck[3]);
	dhl_print(TRACE_INFO, DHL_USER_FLAG_NONE, MOD_NVRAM, "sig_protection_algo: %x", data->sig_protection_algo);
	dhl_print(TRACE_INFO, DHL_USER_FLAG_NONE, MOD_NVRAM, "sig_len: %x", sig_len);
	dhl_print(TRACE_INFO, DHL_USER_FLAG_NONE, MOD_NVRAM, "signature: %x %x %x %x", data->signature[0], data->signature[1],data->signature[2],data->signature[3]);
#endif
		
	
	memcpy(&sig_algo, &(data->sig_protection_algo), sizeof(data->sig_protection_algo));
	
	switch(sig_algo){
		case TYPE_SIG_NONE:
			return ERR_SEC_CHECK_SIG_SUCCESS;
			break;
		case TYPE_SIG_RSA_PSS_SHA256:
			rsa_pub_key_ptr = (gblob_rsa_pub_key_s*)key;
			memcpy(asym_key.m_E_key, rsa_pub_key_ptr->m_E_key, sizeof(rsa_pub_key_ptr->m_E_key));
			memcpy(asym_key.m_N_key, rsa_pub_key_ptr->m_N_key, sizeof(rsa_pub_key_ptr->m_N_key));
			asym_key.m_E_len = rsa_pub_key_ptr->m_E_len;
			asym_key.m_N_len = rsa_pub_key_ptr->m_N_len;
			ret = CustCHL_Verify_RSA_Signature(CUST_CHL_ALG_RSA_PSS_SHA256,
                                        (kal_uint8*) data_start, 
                                        data_len,
                                        sig,
                                        sig_len,
                                        &asym_key);
            if( ret != ERR_SEC_CHECK_SIG_SUCCESS )
				return ret;
			else
				return ERR_SEC_CHECK_SIG_SUCCESS;	
			break;
		default:
				return ERR_SEC_CHECK_SIG_UNSUPPORT_ALGO;
			break;		
	}
	return ret;
}
/*************************************************************************
* FUNCTION
*  cust_sec_calc_enc_auth
*
* DESCRIPTION
*  This function encrypts then calculate specific data authentication pattern
*  and return random iv according to the algorithm
*
* PARAMETERS
*  prot_scheme_byte -     algorithm
*  [input] in_data -    pointer to the buffer to store plaintext data
*  [input] in_data_len -	plaintext length
*  [output] iv -	the generated iv
*  [output] iv_len -	length of the generated iv
*  [output] cipher_out -	ciphertext 
*  [output] cipher_len -	length of the ciphertext
*  [output] tag -	MAC value of the (iv + cipher)
*  [output] tag_len -	length of MAC value
*  [input] param -		additional parameters needed for the algo
* RETURNS
*  KAL_TRUE/KAL_FALSE
*
*************************************************************************/
kal_uint32 cust_sec_calc_enc_auth(BLOB_PROT_SCHEME prot_scheme_byte, 
								  kal_uint8* in_data, kal_uint8 in_data_len, 
								  kal_uint8* iv, kal_uint32* iv_len, 
								  kal_uint8* cipher_out, kal_uint32* cipher_len, 
								  kal_uint8* tag, kal_uint32* tag_len, void* param)
{
	t_cust_chl_sym_key	*hmac_key;
	ALGO_AE_AES_HMAC_SHA256	*ptr_aes_hmac;
	kal_uint32	result = ERR_SEC_ETM_UNSUPPORT_ALGO;
	t_cust_chl_mac_u	hmac;
	AES_PARAM	aes_param;
	kal_uint8	tt_iv[16];
	kal_uint32	tim = 0;
	int rand_ret = 0;
	kal_uint8	auth_blob[216];	//(16 + assumed blob length maximum = 200)
	kal_uint8	auth_blob_len = 0;

	/* error checking */
	if((in_data == NULL) || (iv == NULL) || (iv_len == NULL) || (cipher_out == NULL) || (cipher_len == NULL) || (tag == NULL) || (tag_len == NULL) || (param == NULL)){
		return ERR_SEC_INVALID_INOUT;
	}
	//Create random number and setup iv
	memset(tt_iv, 0, sizeof(tt_iv));
	tim = drv_get_current_time();
	RAND_add(&tim,sizeof(tim),(double)tim);
	
	switch(prot_scheme_byte){
		/* AES-GCM mode not supported */
		case 0:
			return result;
		/* AES-CTR + HMAC 256 supported */
		case 1:
			ptr_aes_hmac = (ALGO_AE_AES_HMAC_SHA256*) param;
			hmac_key = (t_cust_chl_sym_key *)(&(ptr_aes_hmac->hmac_key));

			/* generate random iv */
			rand_ret = RAND_bytes(tt_iv, 12);	
			if(rand_ret != 1){
				dhl_print(TRACE_INFO, DHL_USER_FLAG_NONE, MOD_NVRAM, "random number - iv fail!");
				ASSERT(0);	
			}
#ifdef __GBLOB_DEBUG__
			sml_op129_Dump("tt_iv: ", tt_iv, sizeof(tt_iv));
#endif
			aes_param.IV = tt_iv;
			aes_param.IVLength = (*iv_len) = 16;	//OUTPUT iv_len
			aes_param.counter_len = 4;	
			CustCHL_AES_Encrypt_data(CUST_CHL_ALG_AES256, CUST_CHL_MODE_CTR, in_data_len, in_data, 
									cipher_len, cipher_out, 
									(t_cust_chl_sym_key *)(&(ptr_aes_hmac->enc_key)), &aes_param);	//OUTPUT cipher_out and cipher_len
			auth_blob_len = (*cipher_len) + 16;
			ASSERT(auth_blob_len <= 216);
			memcpy(auth_blob, tt_iv, 16); 
			memcpy((auth_blob+16), cipher_out, auth_blob_len); 
			
			result = CustCHL_Calculate_MAC(CUST_CHL_ALG_MAC_SHA256, auth_blob, auth_blob_len, hmac_key->m_key, hmac_key->m_key_len, &hmac);
			//OUTPUT tag_len
			*tag_len = hmac.m_len;
			//OUTPUT tag
			memcpy(tag, hmac.m_u8, (*tag_len));
			//OUTPUT iv
			memcpy(iv, tt_iv, (*iv_len));
			
			break;
		default:
			break;
	}
	return result;
	
}
/*************************************************************************
* FUNCTION
*  cust_sec_eta_tt_blob
*
* DESCRIPTION
*  This function encrypt then calculate specific data authentication pattern
*  and return random iv according to Trustonic specification
*
* PARAMETERS
*  [input] prot_scheme_byte -	encrypt then authenticate algorithm
*  [input] in_data -    pointer to the buffer to store plaintext data
*  [input] in_data_len -	plaintext length
*  [output] iv -	the generated iv
*  [output] iv_len -	length of the generated iv
*  [output] cipher_out -	ciphertext 
*  [output] cipher_len -	length of the ciphertext
*  [output] tag -	MAC value of the (iv + cipher)
*  [output] tag_len -	length of MAC value
* RETURNS
*  KAL_TRUE/KAL_FALSE
*
*************************************************************************/
kal_uint32 cust_sec_eta_tt_blob(BLOB_PROT_SCHEME prot_scheme_byte, kal_uint32 key_id, 
								kal_uint8* in_data, kal_uint32 in_data_len,
								kal_uint8* cipher_out, kal_uint32* cipher_len,
								kal_uint8* tag, kal_uint32* tag_len,
								kal_uint8* iv, kal_uint32* iv_len)
{

	t_cust_chl_sym_key mod_key;
	t_cust_chl_sym_key *p_mod_key;

	kal_uint8 hash_key_data[64]; //Hash(32B AES key + 4 byte padding)

	t_cust_chl_hash_u enc_key_hash;
	t_cust_chl_hash_u int_key_hash;

	ALGO_AE_AES_HMAC_SHA256 key_param;
	
	kal_uint8* p_enc_key_hash = &(key_param.enc_key.m_key[0]);
	kal_uint8* p_int_key_hash = &(key_param.hmac_key.m_key[0]);

	kal_uint32 ret = 0;
	kal_uint32 ret_sym = 0;
	
	/* error checking */
	if((in_data == NULL) || (iv == NULL) || (iv_len == NULL) || (cipher_out == NULL) || (cipher_len == NULL) || (tag == NULL) || (tag_len == NULL) ){
		return ERR_SEC_INVALID_INOUT;
	}
	//Generate encryption and HMAC key
	memset(hash_key_data, 0, sizeof(hash_key_data));

	p_mod_key = &mod_key;
	ret_sym = CustCHL_Get_Sym_Key(key_id, p_mod_key);	

	if(ret_sym != CUST_CHL_ERROR_NONE)
		return CUST_CHL_ERROR_NO_SUCH_KEY;

	//Specify the per-device unique random key
	memcpy(hash_key_data, p_mod_key->m_key, 32);

	//encryption key append: 0x41, 0x4C, 0x50, 0x53
	hash_key_data[32] = 0x41;
	hash_key_data[33] = 0x4C;
	hash_key_data[34] = 0x50;
	hash_key_data[35] = 0x53;

#ifdef __GBLOB_DEBUG__
	sml_op129_Dump("hash_key_data: ", hash_key_data, 36);		
#endif

	//Calculate hash of encryption key
	CustCHL_Calculate_Hash(CUST_CHL_ALG_SHA256, hash_key_data, 36, &enc_key_hash);

	memcpy(p_enc_key_hash, &(enc_key_hash.m_u8[0]), 32);
	key_param.enc_key.m_key_len = 32;

#ifdef __GBLOB_DEBUG__
	sml_op129_Dump("enc_key_hash: ", p_enc_key_hash, 32);		
#endif
	memset(hash_key_data, 0, sizeof(hash_key_data));

	//Specify the per-device unique random key
	memcpy(hash_key_data, p_mod_key->m_key, 32);

	//mac key append: 0x48, 0x4D, 0x41, 0x43
	hash_key_data[32] = 0x48;
	hash_key_data[33] = 0x4D;
	hash_key_data[34] = 0x41;
	hash_key_data[35] = 0x43;

#ifdef __GBLOB_DEBUG__
	sml_op129_Dump("hash_key_data: ", hash_key_data, 36);		
#endif
	//Calculate hash of HMAC key
	CustCHL_Calculate_Hash(CUST_CHL_ALG_SHA256, hash_key_data, 36, &int_key_hash);

	memcpy(p_int_key_hash, &(int_key_hash.m_u8[0]), 32);
	key_param.hmac_key.m_key_len = 32;

#ifdef __GBLOB_DEBUG__
	sml_op129_Dump("int_key_hash: ", p_int_key_hash, 32);		
#endif
	ret = cust_sec_calc_enc_auth(prot_scheme_byte, in_data, in_data_len, 
						   iv, iv_len, 
						   cipher_out, cipher_len, 
						   tag, tag_len, (void*) (&key_param));
#ifdef __GBLOB_DEBUG__
	sml_op129_Dump("tag: ", tag, (*tag_len));
	dhl_print(TRACE_INFO, DHL_USER_FLAG_NONE, MOD_NVRAM, "[CHL] tag_len: %d", *tag_len);

	sml_op129_Dump("enc_data: ", cipher_out, *cipher_len);
	dhl_print(TRACE_INFO, DHL_USER_FLAG_NONE, MOD_NVRAM, "[CHL] enc_len: %d", *cipher_len);
#endif
	
	return ret;
}
