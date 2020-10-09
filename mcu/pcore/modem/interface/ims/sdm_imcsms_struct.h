/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2013
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
 * Filename:
 * ------------
 *   sdm_imcsms_struct.h
 *
 * Project:
 * ------------
 *   MOLY
 *
 * Description:
 * ------------
 *   This file defines the interface messages between SDM and IMC SMS.
 *
 * Author:
 * -----------
 * -------
 *
 *===========================================================
 * $Log$
 *
 * 03 16 2020 yulong.chang
 * [MOLY00504486] [Gen93][Orange][SDM] Provide CS service is_cs_allowed function for IMS_CALL_60 and IMS_CALL_65
 * 	
 * 	Orange feature - cs_availability query patch back to GEN93 (SDM)
 *
 * 02 20 2019 hsuanchang.chen
 * [MOLY00376426] [US_DEV][VzW][Gen93][Gen95] SMS to 911 and SCBM feature - SDM part
 * 	
 * 	. T911 (SDM part) interface
 *
 * 01 30 2019 hsuanchang.chen
 * [MOLY00364197] [US_DEV][TMO][2019Q1][Gen93][GID-MTRREQ-460491] add +EPSI to report PSI information for verstat extract
 * 	
 * 	.
 *
 * 11 12 2018 vishwas.hegde
 * [MOLY00364292] [US_DEV][TMO][2019Q1][Gen93][GID-MTRREQ-460491]IMCSMS changes
 * [US_DEV][TMO][GID-MTRREQ-460491]IMCSMS changes
 *
 * 04 05 2017 hsuanchang.chen
 * [MOLY00237411] [6293][PreIT] UTK/STK SMS Flow Merge
 * 	
 * 	. interface
 *
 * 03 20 2017 hsuanchang.chen
 * [MOLY00228407] [SDM] Internal Re-arch
 * 	
 * 	. remove tab and un-used code
 *
 * 09 26 2016 hsuanchang.chen
 * [MOLY00203894] [SDM] UMOLYA.PS.DEV merge back UMOLYA
 *     
 *     .
 *
 * 06 07 2016 ya.li
 * [MOLY00175415] [CMCC VoLTE Spec 2.0 New Requirement][IMCSMS][IMCSMS MO retry for 202 receive or not](CR3,interface part)
 *     
 *     .
 *
 * 03 15 2016 ian-yw.chen
 * [MOLY00169015] [COPY CR][VzW][MT6735][Pre-LC][AT command][2.51]  case fail at AT+CMSS=1, shows error
 * SDM part
 *
 * 03 02 2016 ian-yw.chen
 * [MOLY00163894] [SMS][TC01] 3GPP2 SMS over IMS
 * [MT/PP download/STK] interface
 *
 * 03 02 2016 ian-yw.chen
 * [MOLY00163894] [SMS][TC01] 3GPP2 SMS over IMS
 *  [MO] interfaces
 *
 * 03 01 2016 ian-yw.chen
 * [MOLY00147454] VZW 3GPP2 SMS over IMS
 *  SDM and interfaces
 *
 * 11 04 2015 ian-yw.chen
 * [MOLY00129787] [Copy CR]SMS over IMS implementation
 *  (TC01) IMCSMS-interfaces part
 *
 * 05 08 2015 chinte.chen
 * [MOLY00110919] [SAT] Support STK SMS over IP
 * .
 *
 * 12 01 2014 chinte.chen
 * [MOLY00086104] [SDM][Revise] remove redundant src_id from IMSP/SDM/IMCSMS
 * .
 *
 * 09 03 2014 chinte.chen
 * [MOLY00077889] [WW FT][2014 TMO US][MT6752][VoLTE/SRVCC][Seattle][ASSERT][Fatal error(buff)] err_code1:2083 err_code2:32MD offender
 * .
 *****************************************************************************/

#ifndef SDM_IMCSMS_STRUCT_H
#define SDM_IMCSMS_STRUCT_H

#include "ps_public_struct.h"
#include "sim_public_enum.h"
#include "ims_common_def.h"
#include "sdm_imcsms_enums.h"



typedef struct{
    LOCAL_PARA_HDR
    kal_uint8 error_type; /* cp or rp error*/
    kal_uint16 error_cause;
    #ifdef __TC01_IMS_SUPPORT__
    kal_uint8 retry_after;
    #endif 
    kal_bool need_retry_in_cs;
} imcsms_err_info_struct;


/* MSG_ID_SDM_IMCSMS_SUBMIT */
typedef struct{
    LOCAL_PARA_HDR
    ims_access_rat_enum      rat;
    kal_bool                 is_emergency_sms;    
} sdm_imcsms_submit_struct, sdm_imcsms_command_struct;

/* MSG_ID_SDM_IMCSMS_C2K_SUBMIT */
typedef struct{
    LOCAL_PARA_HDR
    /*Add destination address here for SIP header*/
    kal_bool                 is_da_valid;
    kal_bool                 is_international;
    kal_uint8                da[MAX_C2K_SMS_DA]; 
    ims_access_rat_enum      rat;
    kal_bool                 is_emergency_sms;
} sdm_imcsms_c2k_submit_struct, sdm_imcsms_utk_submit_struct;

/* MSG_ID_SDM_IMCSMS_STK_SUBMIT */
typedef struct{
    LOCAL_PARA_HDR
    ims_access_rat_enum      rat;
    kal_bool                 is_emergency_sms;    
} sdm_imcsms_stk_submit_struct;

/* MSG_ID_SDM_IMCSMS_STK_SUBMIT_REPORT_ACK */
typedef struct{
    LOCAL_PARA_HDR   
    sat_terminal_res_enum  tr;
} sdm_imcsms_stk_submit_report_ack_struct;


/* MSG_ID_SDM_IMCSMS_STK_SUBMIT_REPORT_NACK */
typedef struct{
    LOCAL_PARA_HDR
    sat_terminal_res_enum tr;
    kal_bool addition_info_present;
    kal_uint8 addition_info;
    imcsms_err_info_struct  err_info;
} sdm_imcsms_stk_submit_report_nack_struct;

/* MSG_ID_SDM_IMCSMS_C2K_SUBMIT_REPORT_ACK /  MSG_ID_SDM_IMCSMS_UTK_SUBMIT_REPORT_ACK */
typedef struct{
    LOCAL_PARA_HDR
} sdm_imcsms_c2k_submit_report_ack_struct, sdm_imcsms_utk_submit_report_ack_struct;

/* MSG_ID_SDM_IMCSMS_C2K_SUBMIT_REPORT_NACK / MSG_ID_SDM_IMCSMS_UTK_SUBMIT_REPORT_NACK */
typedef struct{
    LOCAL_PARA_HDR
    kal_uint8 error_class;
    kal_uint16 cause_code;
} sdm_imcsms_c2k_submit_report_nack_struct, sdm_imcsms_utk_submit_report_nack_struct;

/* MSG_ID_SDM_IMCSMS_SUBMIT_REPORT_ACK */
typedef struct{
    LOCAL_PARA_HDR
    kal_uint8   mr;
} sdm_imcsms_submit_report_ack_struct;


/* MSG_ID_SDM_IMCSMS_SUBMIT_REPORT_NACK */
typedef struct{
    LOCAL_PARA_HDR
    imcsms_err_info_struct  err_info;
} sdm_imcsms_submit_report_nack_struct;


/* MSG_ID_SDM_IMCSMS_DELIVER */
typedef struct{
    LOCAL_PARA_HDR
    kal_uint8   smi;
    sms_addr_struct   sc_addr;
	kal_uint8 psi[128];
} sdm_imcsms_deliver_struct, sdm_imcsms_status_report_struct;


/* MSG_ID_SDM_IMCSMS_DELIVERY_REPORT_ACK */
typedef struct{
    LOCAL_PARA_HDR
    kal_uint8   smi;
} sdm_imcsms_deliver_report_ack_struct;


/* MSG_ID_SDM_IMCSMS_DELIVERY_REPORT_NACK */
typedef struct{
    LOCAL_PARA_HDR
    kal_uint8   smi;
} sdm_imcsms_deliver_report_nack_struct;

/* MSG_ID_SDM_IMCSMS_C2K_DELIVER */
typedef struct{
    LOCAL_PARA_HDR
} sdm_imcsms_c2k_deliver_struct;

/* MSG_ID_SDM_IMCSMS_C2K_ACKNOWLEDGE */
typedef struct{
    LOCAL_PARA_HDR
} sdm_imcsms_c2k_acknowledge_struct;

/* MSG_ID_SDM_IMCSMS_MEM_AVL_NOTIF */
typedef struct{
    LOCAL_PARA_HDR
    kal_uint8   req_type;  /* 0: IMCSMS_SMMA_REQ, 1: IMCSMS_SMMA_ABORT */
} sdm_imcsms_mem_avl_notif_struct;


/* MSG_ID_SDM_IMCSMS_MEM_AVL_NOTIF_CNF */
typedef struct{
    LOCAL_PARA_HDR
    kal_bool    result;
} sdm_imcsms_mem_avl_notif_cnf_struct;

/* MSG_ID_SDM_IMCSMS_IS_CS_ALLOWED_REQ */
typedef struct{
    LOCAL_PARA_HDR
    imcsms_sdm_sms_type_enum    sms_type;
    kal_uint32                  accound_id; //specific for different kind of IMS registration (for IMS UA usage)
    kal_uint8                   seq_id; //to identify the SMS (for IMS UA usage)
} sdm_imcsms_is_cs_allowed_req_struct;

/* MSG_ID_SDM_IMCSMS_IS_CS_ALLOWED_CNF */
typedef struct{
    LOCAL_PARA_HDR
    imcsms_sdm_sms_type_enum    sms_type;
    kal_uint32                  accound_id;
    kal_uint8                   seq_id;    
    kal_bool                    result;
} sdm_imcsms_is_cs_allowed_cnf_struct;

#ifdef __TC01_IMS_SUPPORT__
/* MSG_ID_SDM_IMCSMS_RCV_MSG_IND */
typedef struct{
    LOCAL_PARA_HDR
    kal_uint16              msg_id;
    kal_uint8               error_class; 
    esmsoims_type_enum      direction; 
    kal_uint16              length;
    kal_uint8               data[MAX_SMS_PDU_LEN];  
} sdm_imcsms_rcv_msg_ind_struct;
#endif

typedef enum{
    MO_IMS_TEMP_FAILURE = 2,
    MO_IMS_PERM_FAILURE ,
    MO_IMS_OTHER_FAILURE
}sdm_imcsms_error_cause_enum;

typedef struct{
    LOCAL_PARA_HDR
    kal_uint8         msg_ref;
    sms_addr_struct   sca;
    ims_access_rat_enum      rat;
    kal_bool                 is_emergency_sms;    
}
sdm_imcsms_cmss_submit_struct;

typedef struct{
    LOCAL_PARA_HDR
    kal_uint8   mr;
}
sdm_imcsms_cmss_submit_report_ack_struct;

typedef struct{
    LOCAL_PARA_HDR
    imcsms_err_info_struct  err_info;
}
sdm_imcsms_cmss_submit_report_nack_struct;

extern kal_bool sdm_get_imcsms_retry_for_202_rev(void);

#endif // SDM_IMCSMS_STRUCT_H

