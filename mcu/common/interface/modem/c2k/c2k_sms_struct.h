/*******************************************************************************
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
*******************************************************************************/

/*******************************************************************************
 * Filename:
 * ---------
 *    c2k_sms_struct.h
 *
 * Project:
 * --------
 *    SRLTE
 *
 * Description:
 * ------------
 *   Modem 1 sends C2K SMS to modem 3
 *
 * Author:
 * -------
 * -------
 *
 ******************************************************************************/
#ifndef _C2K_SMS_STRUCT_H_
#define _C2K_SMS_STRUCT_H_


#include "c2k_sms_enums.h"
#include "ps_public_enum.h"

/*----------------------------------------------------------------------------*/
/*                              MD1 SDM <--> MD3 VAL                                                                  */
/*----------------------------------------------------------------------------*/
#define MAX_C2K_SMS_PDU_LEN 255

typedef struct {
   LOCAL_PARA_HDR
   kal_uint16	     length;
   kal_uint8         pdu[MAX_C2K_SMS_PDU_LEN];
   c2k_sms_rat_enum  send_over_ims_cs;
} sdm_cval_c2k_sms_send_req_struct;


typedef struct {
   LOCAL_PARA_HDR
   kal_uint8	     error_class;
   kal_uint16        cause_code;
   kal_uint16        msg_id;
   c2k_sms_rat_enum  send_over_ims_cs;  
   kal_uint16	     length;
   kal_uint8         pdu[MAX_C2K_SMS_PDU_LEN];
} sdm_cval_c2k_sms_send_cnf_struct;


typedef struct {
   LOCAL_PARA_HDR
   c2k_sms_ind_enum  format;  
   kal_uint16        length;
   kal_uint8         pdu[MAX_C2K_SMS_PDU_LEN];
} sdm_cval_c2k_sms_ind_struct;


typedef struct {
   LOCAL_PARA_HDR
   c2k_sms_rat_enum  send_over_ims_cs;  
   kal_uint16        length;   
   kal_uint8         pdu[MAX_C2K_SMS_PDU_LEN];
   kal_bool          is_no_error; //TRUE: no error, FALSE: has error
} sdm_cval_c2k_sms_rsp_struct;

typedef struct 
{ 
    LOCAL_PARA_HDR 
    scbm_rat_enum    rat;
} sdm_cval_scbm_start_ind_struct;

typedef struct 
{ 
    LOCAL_PARA_HDR 
    scbm_rat_enum    rat;
    exit_scbm_reason_enum       cause;
} sdm_cval_scbm_stop_ind_struct;

/*----------------------------------------------------------------------------*/
/*                           MD1 IMCSMS <--> MD3 VAL                          */
/*----------------------------------------------------------------------------*/
/* MSG_ID_IMCSMS_CVAL_C2K_SMS_SEND_REQ */
typedef struct{
	LOCAL_PARA_HDR
	kal_uint16  length;
	kal_uint8   data[MAX_C2K_SMS_PDU_LEN];
} imcsms_cval_c2k_sms_send_req_struct;

/* MSG_ID_IMCSMS_CVAL_C2K_SMS_SEND_CNF */
typedef struct{
	LOCAL_PARA_HDR
	kal_uint16  msg_id;  
	kal_uint8   error_class;  
	kal_bool    is_no_error; //TRUE: no error, FALSE: has error
	kal_uint8   direction;  //1: MO_STATUS, 2: C2K_MT_MESSAGE, 3: C2K_MT_PP_DOWNLOAD
	kal_uint16  length;
	kal_uint8   data[MAX_C2K_SMS_PDU_LEN]; 
} imcsms_cval_c2k_sms_send_cnf_struct;

/************** for C2K MT SMS from IMS (non-TC01) ************/
/* MSG_ID_IMCSMS_CVAL_C2K_SMS_RECV_REQ */
typedef struct{
	LOCAL_PARA_HDR
	kal_uint16  length;
	kal_uint8   data[MAX_C2K_SMS_PDU_LEN];
} imcsms_cval_c2k_sms_recv_req_struct;

/* MSG_ID_IMCSMS_CVAL_C2K_SMS_RECV_CNF */
typedef struct{
	LOCAL_PARA_HDR
	kal_uint16  length;
	kal_uint8   data[MAX_C2K_SMS_PDU_LEN]; //same content as data in REQ
	c2k_mt_sms_type  type; 
    kal_bool    result;  //MD3 handling result. TRUE: MD3 normal handling, FALSE: MD3 has problem
} imcsms_cval_c2k_sms_recv_cnf_struct;
/**************************************************************/

#endif 
