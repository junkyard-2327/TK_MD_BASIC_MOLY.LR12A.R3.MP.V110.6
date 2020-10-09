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

/*******************************************************************************
 * Filename:
 * ---------
 *	l4b_vdm_struct.h
 *
 * Description:
 * ------------
 *   This file is intends for L4B/VDM interface
 *
 * Author:
 * -------
 * -------
 *
 *==============================================================================
 * 				HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
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
 * removed!
 * removed!
 * removed!
 *
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
 *
 * removed!
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *==============================================================================
 *******************************************************************************/

#ifndef _L4B_VDM_STRUCT_H
#define _L4B_VDM_STRUCT_H

#include "kal_public_defs.h"
#include "ps_public_enum.h"
#include "l4b_vdm_enum.h"


/***********************************/
/*      VDM -> L4B (REQ)           */
/***********************************/

/* MSG_ID_VDM_L4B_FDN_ECC_CHECK_REQ */
typedef struct
{
    LOCAL_PARA_HDR
    kal_uint8 dial_num[MAX_CC_ADDR_LEN];

} vdm_l4b_fdn_ecc_check_req_struct;


/* MSG_ID_VDM_L4B_CS_CC_MO_CALL_REQ */
typedef struct
{
    LOCAL_PARA_HDR
    kal_uint8               dial_num[MAX_CC_ADDR_LEN];
    kal_bool                is_video_call;
} vdm_l4b_cs_cc_mo_call_req_struct;

/* MSG_ID_VDM_L4B_CS_CC_EMERG_CALL_REQ */
typedef struct
{
    LOCAL_PARA_HDR
    kal_uint8               dial_num[MAX_CC_ADDR_LEN];
} vdm_l4b_cs_cc_emerg_call_req_struct;

/* MSG_ID_VDM_L4B_CS_CC_STK_CALL_REQ*/
typedef struct
{
    LOCAL_PARA_HDR
    l4b_stk_type_enum stk_type; // o or 4
} vdm_l4b_cs_cc_stk_call_req_struct;


/* MSG_ID_VDM_L4B_CS_CC_CALL_RELATED_SS_REQ */
typedef struct
{
    LOCAL_PARA_HDR
    kal_uint8                       call_id;
    l4b_call_related_ss_type_enum   opcode;
} vdm_l4b_cs_cc_call_related_ss_req_struct;


/* MSG_ID_VDM_L4B_CS_CC_MT_CALL_PRESENT_RSP */
typedef struct 
{  
    LOCAL_PARA_HDR
    kal_uint8                       call_id;
    kal_uint8                       seq_no;
    l4b_cc_eaic_result_enum         eaic_result;
    kal_uint16                      reject_cause;
} vdm_l4b_cs_cc_mt_call_present_rsp_struct;


/* MSG_ID_VDM_L4B_CS_CC_MT_CALL_ACCEPT_REQ_STRUCT */
typedef struct 
{  
    LOCAL_PARA_HDR
} vdm_l4b_cs_cc_mt_call_accept_req_struct;

/* MSG_ID_VDM_L4B_CS_CC_LIST_CURRENT_CALLS_REQ */ // AT+CLCC (no struct)
typedef struct 
{  
    LOCAL_PARA_HDR
}vdm_l4b_cs_cc_list_current_calls_req_struct;


/* MSG_ID_VDM_L4B_CS_CC_EXT_ERROR_REPORT_REQ */ // AT+CEER (no struct)
typedef struct 
{  
    LOCAL_PARA_HDR
}vdm_l4b_cs_cc_ext_error_report_req_struct;


/* MSG_ID_VDM_L4B_CS_CC_HANGUP_ALL_REQ */ // ATH (no struct)
typedef struct 
{  
    LOCAL_PARA_HDR
}vdm_l4b_cs_cc_hangup_all_req_struct;


/* MSG_ID_VDM_L4B_CS_CC_FORCE_HANGUP_REQ */ // AT+ECHUP 
typedef struct 
{  
    LOCAL_PARA_HDR
    kal_uint8 call_id;
} vdm_l4b_cs_cc_force_hangup_req_struct;


/* MSG_ID_VDM_L4B_CS_CC_EMERG_SERV_CAT_REQ */ // AT+ESVC
typedef struct
{
    LOCAL_PARA_HDR
    kal_uint16                   emergency_service_category;
} vdm_l4b_cs_cc_emerg_serv_cat_req_struct;


/* MSG_ID_VDM_CTRL_TRK_CS_CC_SEND_DIGIT_REQ */ //AT+VTS
typedef struct 
{  
    LOCAL_PARA_HDR 
    kal_uint8   digit;
} vdm_l4b_cs_cc_send_digit_req_struct;


/* MSG_ID_VDM_CTRL_TRK_CS_CC_START_SEND_DIGIT_REQ */ // AT+EVTS
typedef struct 
{  
    LOCAL_PARA_HDR 
    kal_uint8   digit;
} vdm_l4b_cs_cc_start_send_digit_req_struct;


/* MSG_ID_VDM_CTRL_TRK_CS_CC_STOP_SEND_DIGIT_REQ */ // AT+EVTS
typedef struct
{
    LOCAL_PARA_HDR
} vdm_l4b_cs_cc_stop_send_digit_req_struct;


/* C2K part */

//typedef vdm_l4b_cs_cc_mo_call_req_struct            vdm_l4b_c2k_cc_mo_call_req_struct;
typedef struct
{
    LOCAL_PARA_HDR
    kal_uint8               dial_num[MAX_CC_ADDR_LEN];
    kal_bool                is_video_call;
    kal_bool                is_redial_from_volte;
    kal_uint8               redial_call_id;
} vdm_l4b_c2k_cc_mo_call_req_struct;

typedef vdm_l4b_cs_cc_emerg_call_req_struct         vdm_l4b_c2k_cc_emerg_call_req_struct;

typedef vdm_l4b_cs_cc_stk_call_req_struct           vdm_l4b_c2k_cc_stk_call_req_struct;

typedef vdm_l4b_cs_cc_call_related_ss_req_struct    vdm_l4b_c2k_cc_call_related_ss_req_struct;

typedef vdm_l4b_cs_cc_mt_call_present_rsp_struct    vdm_l4b_c2k_cc_mt_call_present_rsp_struct;

typedef vdm_l4b_cs_cc_mt_call_accept_req_struct     vdm_l4b_c2k_cc_mt_call_accept_req_struct;

typedef vdm_l4b_cs_cc_list_current_calls_req_struct vdm_l4b_c2k_cc_list_current_calls_req_struct;

typedef vdm_l4b_cs_cc_send_digit_req_struct         vdm_l4b_c2k_cc_send_digit_req_struct;

typedef vdm_l4b_cs_cc_start_send_digit_req_struct   vdm_l4b_c2k_cc_start_send_digit_req_struct;

typedef vdm_l4b_cs_cc_stop_send_digit_req_struct    vdm_l4b_c2k_cc_stop_send_digit_req_struct;


/***********************************/
/*      L4B -> VDM (CNF)           */
/***********************************/


/* Common response from L4B to VDM */
typedef struct
{
    LOCAL_PARA_HDR
    l4b_result_code_enum    result;
    l4b_err_id_enum         error_cause;
} vdm_l4b_common_response_struct;

/* MSG_ID_VDM_L4B_CS_CC_MO_CALL_CNF */
typedef vdm_l4b_common_response_struct vdm_l4b_cs_cc_mo_call_cnf_struct;

/* MSG_ID_VDM_L4B_FDN_ECC_CHECK_CNF */
typedef struct
{
    LOCAL_PARA_HDR
    kal_bool                        is_allowed;
    kal_bool                        is_emergency;
    kal_uint16                      emergency_service_category;
} vdm_l4b_fdn_ecc_check_cnf_struct;


/* MSG_ID_VDM_L4B_CS_CC_EMERG_CALL_CNF */
typedef vdm_l4b_common_response_struct vdm_l4b_cs_cc_emerg_call_cnf_struct;


/* MSG_ID_VDM_L4B_CS_CC_STK_CALL_CNF */
typedef vdm_l4b_common_response_struct vdm_l4b_cs_cc_stk_call_cnf_struct;

/* MSG_ID_VDM_L4B_CS_CC_CALL_RELATED_SS_CNF */
typedef vdm_l4b_common_response_struct vdm_l4b_cs_cc_call_related_ss_cnf_struct;


/* MSG_ID_VDM_L4B_CS_CC_EXT_ERROR_REPORT_CNF */
typedef struct 
{
    LOCAL_PARA_HDR
    l4b_ext_error_report_enum       ceer_cause;
    l4b_result_code_enum            result;
    l4b_err_id_enum                 err_id;
    kal_uint16                      ecc_category;
} vdm_l4b_cs_cc_ext_error_report_cnf_struct;


/* MSG_ID_VDM_L4B_CS_CC_LIST_CURRENT_CALLS_CNF */
typedef struct {
    kal_uint8               call_id;
    l4b_call_dir_enum       dir;
    l4b_call_state_enum     call_state;
    l4b_call_mode_enum      call_mode;
    kal_bool                mpty;  // FALSE: is NOT conference call, TRUE: is conference call
    l4b_call_type_enum      call_type;
    kal_uint8               number[MAX_CC_ADDR_LEN];
    kal_uint8               cli_validity;
} vdm_l4b_call_list_struct;


/* MSG_ID_VDM_L4B_CS_CC_LIST_CURRENT_CALLS_EXT_CNF */
typedef struct {
    kal_uint8                   call_id;
    l4b_call_dir_enum           dir;
    l4b_clccs_call_mode_enum    clccs_cs_mode;
    l4b_call_ccstatus_enum      ccstatus;
    kal_bool                    mpty;  // FALSE: is NOT conference call, TRUE: is conference call
    l4b_call_number_type_enum   number_type;
    l4b_call_type_enum          call_type;
    kal_uint8                   number[MAX_SIP_URI_LEN];
    kal_bool                    cli_present;
    kal_uint8                   cli_validity;
} vdm_l4b_call_list_ext_struct;


typedef struct
{
    LOCAL_PARA_HDR
    kal_uint8                   total_call;
    vdm_l4b_call_list_struct   call_list[L4BCC_MAX_CALL_NUM];
} vdm_l4b_cs_cc_list_current_calls_cnf_struct;


typedef struct
{
    LOCAL_PARA_HDR
    kal_uint8                   total_call;
    vdm_l4b_call_list_ext_struct   call_list[L4BCC_MAX_CALL_NUM];
} vdm_l4b_cs_cc_list_current_calls_ext_cnf_struct;


/* MSG_ID_VDM_L4B_CS_CC_HANGUP_ALL_CNF */
typedef vdm_l4b_common_response_struct vdm_l4b_cs_cc_hangup_all_cnf_struct;

/* MSG_ID_VDM_L4B_CS_CC_FORCE_HANGUP_CNF */
typedef vdm_l4b_common_response_struct vdm_l4b_cs_cc_force_hangup_cnf_struct;

/* MSG_ID_VDM_L4B_CS_CC_EMERG_SERV_CAT_CNF */
typedef vdm_l4b_common_response_struct vdm_l4b_cs_cc_emerg_serv_cat_cnf_struct;

/* MSG_ID_VDM_L4B_CS_CC_MT_CALL_ACCEPT_CNF */
typedef vdm_l4b_common_response_struct vdm_l4b_cs_cc_mt_call_accept_cnf_struct;

/* MSG_ID_VDM_L4B_CS_CC_SEND_DIGIT_CNF */
typedef vdm_l4b_common_response_struct vdm_l4b_cs_cc_send_digit_cnf_struct;

/* MSG_ID_VDM_L4B_CS_CC_START_SEND_DIGIT_CNF */
typedef vdm_l4b_common_response_struct vdm_l4b_cs_cc_start_send_digit_cnf_struct;

/* MSG_ID_VDM_L4B_CS_CC_STOP_SEND_DIGIT_CNF */
typedef vdm_l4b_common_response_struct vdm_l4b_cs_cc_stop_send_digit_cnf_struct;


/* C2K part */

typedef vdm_l4b_cs_cc_mo_call_cnf_struct                vdm_l4b_c2k_cc_mo_call_cnf_struct;

typedef vdm_l4b_cs_cc_emerg_call_cnf_struct             vdm_l4b_c2k_cc_emerg_call_cnf_struct;

typedef vdm_l4b_cs_cc_stk_call_cnf_struct               vdm_l4b_c2k_cc_stk_call_cnf_struct;

typedef vdm_l4b_cs_cc_call_related_ss_cnf_struct        vdm_l4b_c2k_cc_call_related_ss_cnf_struct;

typedef vdm_l4b_cs_cc_mt_call_accept_cnf_struct         vdm_l4b_c2k_cc_mt_call_accept_cnf_struct;

typedef vdm_l4b_cs_cc_ext_error_report_cnf_struct       vdm_l4b_c2k_cc_ext_error_report_cnf_struct;

typedef vdm_l4b_cs_cc_list_current_calls_cnf_struct     vdm_l4b_c2k_cc_list_current_calls_cnf_struct;

typedef vdm_l4b_cs_cc_send_digit_cnf_struct             vdm_l4b_c2k_cc_send_digit_cnf_struct;

typedef vdm_l4b_cs_cc_start_send_digit_cnf_struct       vdm_l4b_c2k_cc_start_send_digit_cnf_struct;

typedef vdm_l4b_cs_cc_stop_send_digit_cnf_struct        vdm_l4b_c2k_cc_stop_send_digit_cnf_struct;
/***********************************/
/*      L4B -> VDM (URC)           */
/***********************************/

typedef struct
{
    /* +ECPI:<call_id>,<msg_type>,<is_ibt>,<is_tch>,<dir>,
     *       <call_mode>,[<number>,<type>],[<disc_cause>],[<pau>]
     */
    kal_bool                is_ibt;
    kal_bool                is_tch;
    l4b_call_dir_enum       call_dir;
    l4b_call_mode_enum      call_mode;
    kal_bool                is_number_call_type_present;
    kal_uint8               number[MAX_CC_ADDR_LEN];
    l4b_call_type_enum      call_type;
    kal_bool                is_disc_cause_present;
    kal_uint16              disc_cause;
} l4b_ecpi_info_struct;


typedef struct {
    LOCAL_PARA_HDR
    kal_uint8               call_id;
    kal_uint8               ecpi_type;
    l4b_ecpi_info_struct    ecpi_info;
} vdm_l4b_common_cs_cc_ecpi_ind_struct;


typedef struct {
    kal_uint8               number[MAX_CC_ADDR_LEN];
    l4b_call_type_enum      call_type;
    l4b_call_mode_enum      call_mode;
	kal_uint8               redirect_num[MAX_CC_ADDR_LEN];
} l4b_cc_eaic_info_struct;

/* MSG_ID_VDM_L4B_CS_CC_MT_CALL_PRESENT_IND */
typedef struct 
{  
    /* +EAIC
     */

    LOCAL_PARA_HDR 
    kal_uint8                       call_id;
    l4b_cc_eaic_info_struct         eaic_info;
    kal_uint8                       seq_no;
} vdm_l4b_cs_cc_mt_call_present_ind_struct;


/******************************************************************************
 * +ESTKCNUM: <call_number>, <call_type>, <domain>, <redial_setting>, <media_type>
 *****************************************************************************/
typedef struct
{
    LOCAL_PARA_HDR
    kal_uint8                    stk_call_num[MAX_CC_ADDR_LEN];
    l4b_call_type_enum           stk_call_type;
    l4b_stk_call_domain_enum     stk_call_domain;
	l4b_stk_redial_setting_enum  stk_redial_setting;
	l4b_stk_media_type_enum      stk_media_type;
} vdm_l4b_stk_call_num_ind_struct;

/* MSG_ID_VDM_L4B_CS_CC_ECPI_TRANSLATE_IND */
typedef vdm_l4b_common_cs_cc_ecpi_ind_struct vdm_l4b_cs_cc_ecpi_translate_ind_struct;

/* MSG_ID_VDM_L4B_CS_CC_MT_CALL_SETUP_IND */
typedef vdm_l4b_common_cs_cc_ecpi_ind_struct vdm_l4b_cs_cc_mt_call_setup_ind_struct;

/* MSG_ID_VDM_IMSP_CS_CC_CALL_DISCONNECT_IND */
typedef vdm_l4b_common_cs_cc_ecpi_ind_struct vdm_l4b_cs_cc_call_disconnect_ind_struct;

/* MSG_ID_VDM_L4B_CS_CC_MO_CALL_ID_IND */
typedef vdm_l4b_common_cs_cc_ecpi_ind_struct vdm_l4b_cs_cc_mo_call_id_ind_struct;



/* C2K part */
typedef vdm_l4b_cs_cc_mt_call_present_ind_struct vdm_l4b_c2k_cc_mt_call_present_ind_struct;

typedef vdm_l4b_cs_cc_ecpi_translate_ind_struct vdm_l4b_c2k_cc_ecpi_translate_ind_struct;

typedef vdm_l4b_cs_cc_mt_call_setup_ind_struct vdm_l4b_c2k_cc_mt_call_setup_ind_struct;

typedef vdm_l4b_cs_cc_call_disconnect_ind_struct vdm_l4b_c2k_cc_call_disconnect_ind_struct;

typedef vdm_l4b_cs_cc_mo_call_id_ind_struct vdm_l4b_c2k_cc_mo_call_id_ind_struct;

#endif /* _L4B_VDM_STRUCT_H */


