/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2005
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
*  LAWS PRINCIPLES.  ANY DISPUTES, CONTROVERSIES OR CLAIMS ARISING THEREOF AND
*  RELATED THERETO SHALL BE SETTLED BY ARBITRATION IN SAN FRANCISCO, CA, UNDER
*  THE RULES OF THE INTERNATIONAL CHAMBER OF COMMERCE (ICC).
*
*****************************************************************************/

/*****************************************************************************
 *
 * Filename:
 * ---------
 *   msm_service.h
 *
 * Project:
 * --------
 *   UMOLYE
 *
 * Description:
 * ------------
 *   The source is for software management
 *
 * Author:
 * -------
 * -------
 *
 *============================================================================
 *             HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
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
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

#ifndef __MSM_SERVICE__
#define __MSM_SERVICE__

#define MSM_RSA_KEY_SIZE      256  //RSA 2048
#define MSM_AES_KEY_SIZE      16

#define MSM_RND_LEN	16
#define MSM_ENC_RND_LEN	MSM_RSA_KEY_SIZE   

#define MSM_CERT_MAGIC               0x00534D43  // "SMC"
#define MSM_AUTH_MAGIC               0x00534D41  // "SMA"
#define MSM_PLAT_MAGIC                0x5041  //"PA"
#define MSM_GET_MAGIC(magic_ver)    ((magic_ver)&0x00FFFFFF)
#define MSM_GET_VER(magic_ver)      ((magic_ver)>>24)

#define MSM_FEATURE_MAX  16
#define MSM_PLAT_MAX  32

#define MSM_DEV_ID_LEN     20
#define MSM_DEV_ID_HRID_OFFSET  4

typedef enum{
    MSM_ERROR_NONE = 0x0000,
        
    MSM_ERROR_START = 0x600,    

    /* General error */
    MSM_GEN_RND_ERR = 0x601, 
    MSM_CONTEXT_FULL_ERR = 0x602, 
    MSM_BLOCKING_ERR = 0x603, 
    MSM_DEAD_ERR  = 0x604, 
    MSM_UNEXPECT_STATE_ERR = 0x605, 
    MSM_NULL_PTR_ERR = 0x606, 

    /* Receive command in wrong state, the last 4bit indicates the state information */
    MSM_WRONG_STATE_ERR = 0x610,   

    /* CERT verification error */
    MSM_CERT_VERIFY_ERR = 0x620, 
    MSM_CERT_MAGIC_ERR = 0x621, 
    MSM_CERT_SIZE_ERR = 0x622, 
    MSM_CERT_TOTAL_SIZE_ERR = 0x623, 
    MSM_CERT_RKEY_N_SIZE_ERR = 0x624, 
    MSM_CERT_RKEY_E_SIZE_ERR = 0x625, 
    MSM_CERT_PLAT_MATCH_ERR = 0x626, 
    MSM_CERT_EXPIRED_ERR = 0x627, 

     /* customer key verification error */
    MSM_CUST_KEY_DEC_ERR = 0x630, 
    MSM_CUST_KEY_N_LEN_ERR = 0x631, 
    MSM_CUST_KEY_E_LEN_ERR = 0x632, 
    MSM_CUST_KEY_SIZE_ERR = 0x633, 
    MSM_CUST_KEY_RND_BUF_LEN_ERR = 0x634,  

     /* AUTH msg verification error */
    MSM_AUTH_RND_DEC_ERR = 0x640, 
    MSM_AUTH_RND_LEN_ERR = 0x641, 
    MSM_AUTH_RND_COMPARE_ERR = 0x642, 
    MSM_AUTH_MSG_SIZE_ERR = 0x643, 
    MSM_AUTH_KEY_SIZE_ERR = 0x644, 
    MSM_AUTH_MAGIC_ERR = 0x645, 
    MSM_AUTH_GEN_KEY_ERR = 0x646, 
    MSM_AUTH_PLAT_MSG_SIZE_ERR = 0x647, 
    MSM_AUTH_PLAT_MSG_DEC_ERR = 0x648, 
    MSM_AUTH_PLAT_MSG_MAGIC_ERR = 0x649, 
    MSM_AUTH_PLAT_MSG_VER_ERR = 0x650, 
    MSM_AUTH_PLAT_MSG_SP_VER_ERR = 0x651, 
    MSM_AUTH_PLAT_MSG_CERT_EXPIRED_ERR = 0x652, 

     /* CERT cancel error */
    MSM_CERT_CANCEL_DEC_ERR = 0x650, 
    MSM_CERT_CANCEL_COMPARE_ERR = 0x651, 
    MSM_CERT_CANCEL_ID_SIZE_ERR = 0x652, 

     /* AT command decryption error */
    MSM_AT_DEC_ECMD_SIZE_ERR = 0x660, 
    MSM_AT_DEC_OUT_BUF_SIZE_ERR = 0x661, 
    MSM_AT_DEC_CTX_NOT_FOUND_ERR = 0x662, 
    MSM_AT_DEC_FAIL_ERR = 0x663, 

     /* Feature checking error */
    MSM_FEATURE_CTX_NOT_FOUND_ERR = 0x671,
    MSM_FEATURE_NOT_SUPPORT_ERR = 0x672, 
    MSM_FEATURE_DENIED = 0x673,

    MSM_FEATURE_NOT_EXIST = 0x680,
    
    MSM_ERROR_END = 0x6FF
}MSM_ERROR_E;

typedef struct MSM_DEV_INFO
{
    kal_uint32 m_feature_support;
    kal_uint8 m_dev_id[MSM_DEV_ID_LEN];
}MSM_DEV_INFO_t;

/*****************************************************************************
 * FUNCTION
 *  MSM_Rcv_Auth_0
 * DESCRIPTION
 *  
 * PARAMETERS
 *  p_cert          [IN]  pointer of CERT(X)  
 *  c_size          [IN]  size of CERT     
 *  p_cust_id       [OUT]  Customer id <CUST_ID> 
 * RETURNS
 *   0 : successfully 
 *   otherwise : failure (reference to enum TYPE_CUST_CHL_ERROR for error code)
 *****************************************************************************/
kal_uint32 MSM_Rcv_Auth_0(kal_uint8 *p_cert, kal_uint32 c_size, kal_uint32 *p_cust_id);

/*****************************************************************************
 * FUNCTION
 *  MSM_Rcv_Auth_1
 * DESCRIPTION
 *  
 * PARAMETERS
 *  cust_id         [IN]  Customer id <CUST_ID>
 *  p_e_cust_key    [IN]  pointer of "E(K(XR)pri, K(XD)pub)" 
 *  e_size          [IN]  size of e_cust_key
 *  p_rnd_buf       [IN/OUT] Input the buffer pointer / function stores <RND(M)> into this buffer
 *  rnd_buf_len     [IN] size of rnd_buf (must be MSM_RND_LEN )
 * RETURNS
 *   0 : successfully 
 *   otherwise : failure (reference to enum TYPE_CUST_CHL_ERROR for error code)
 *****************************************************************************/
kal_uint32 MSM_Rcv_Auth_1(kal_uint32 cust_id, kal_uint8 *p_e_cust_key, kal_uint32 e_size, kal_uint8 *p_rnd_buf, kal_uint32 rnd_buf_len);

/*****************************************************************************
 * FUNCTION
 *  MSM_Rcv_Auth_2
 * DESCRIPTION
 *  
 * PARAMETERS
 *  p_auth_msg      [IN]  pointer of "AUTH_MSG"
 *  a_size          [IN]  size of auth_msg
 *  p_sym_key       [IN/OUT] Input the buffer pointer / function stores K(M)sym into this buffer
 *  s_size          [IN] size of sym_key (must be MSM_AES_KEY_SIZE)
 *  p_cust_id       [OUT]  Customer id <CUST_ID> 
 *  p_dev_info      [OUT] function stores the device information
 * RETURNS
 *   0 : successfully 
 *   otherwise : failure (reference to enum TYPE_CUST_CHL_ERROR for error code)
 *****************************************************************************/
kal_uint32 MSM_Rcv_Auth_2(kal_uint8 *p_auth_msg, kal_uint32 a_size, kal_uint8 *p_plat_msg, kal_uint32 p_size, kal_uint8 *p_sym_key, kal_uint32 s_size, kal_uint32 *p_cust_id, MSM_DEV_INFO_t *p_dev_info);

/*****************************************************************************
 * FUNCTION
 *  MSM_Rcv_Auth_3
 * DESCRIPTION
 *  
 * PARAMETERS
 *  cust_id         [IN]  Customer id <CUST_ID>
 *  p_e_cust_id     [IN]  pointer of "AES(E(K(M)sym, CUST_ID))"
 *  e_size          [IN]  size of e_cust_id
 * RETURNS
 *   0 : successfully 
 *   otherwise : failure (reference to enum TYPE_CUST_CHL_ERROR for error code)
 *****************************************************************************/
kal_uint32 MSM_Rcv_Auth_3(kal_uint32 cust_id, kal_uint8 *p_e_cust_id , kal_uint32 e_size);

/*****************************************************************************
 * FUNCTION
 *  MSM_Decrypt_Cmd
 * DESCRIPTION
 *  
 * PARAMETERS
 *  cust_id         [IN]  Customer id <CUST_ID>
 *  p_e_cmd         [IN]  pointer of encrypted command
 *  in_size         [IN]  size of e_cmd
 *  p_cmd           [IN/OUT] Input the buffer pointer / function stores descrypted command into this buffer
 *  p_out_size      [IN] size of cmd buffer
 * RETURNS
 *   0 : successfully 
 *   otherwise : failure (reference to enum TYPE_CUST_CHL_ERROR for error code)
 *****************************************************************************/
kal_uint32 MSM_Decrypt_Cmd(kal_uint32 cust_id, kal_uint8 *p_e_cmd, kal_uint32 in_size, kal_uint8 *p_cmd, kal_uint32 out_size);

/*****************************************************************************
 * FUNCTION
 *  MSM_Decrypt_Cmd
 * DESCRIPTION
 *  
 * PARAMETERS
 *  cust_id         [IN]  Customer id <CUST_ID>
 *  feature         [IN]  feature "XXXX"
 * RETURNS
 *   0 : successfully 
 *   otherwise : failure (reference to enum TYPE_CUST_CHL_ERROR for error code)
 *****************************************************************************/
kal_uint32 MSM_Check_Feature_Sts(kal_uint32 cust_id, kal_uint32 feature);

/*****************************************************************************
 * FUNCTION
 *  MSM_Enc_MD_Connsys_Msg
 * DESCRIPTION
 *  
 * PARAMETERS
 *  input         [IN]  pointer of input data
 *  output        [IN/OUT] Input the buffer pointer / function stores enscrypted data into this buffer, the size of this buffer must >= MSM_AES_KEY_SIZE
 *  output_len    [OUT] size of output data 
 * RETURNS
 *   0 : successfully 
 *   otherwise : failure (reference to enum TYPE_CUST_CHL_ERROR for error code)
 *****************************************************************************/
 kal_bool MSM_Enc_MD_Connsys_Msg(kal_uint32 *input, kal_uint8* output, kal_uint32 *output_len);

#endif /*__MSM_SERVICE__*/
