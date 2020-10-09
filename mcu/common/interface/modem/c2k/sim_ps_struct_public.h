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
 *  Copyright Statement:
 *  --------------------
 *  This software is protected by Copyright and the information contained
 *  herein is confidential. The software may not be copied and the information
 *  contained herein may not be used or disclosed except with the written
 *  permission of MediaTek Inc. (C) 2001
 *
 *******************************************************************************/

 /*******************************************************************************
 * Filename:
 * ---------
 *   sim_ps_struct_public.h
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description:
 * ------------
 *   Structure provided by SIM task and inside-PS task uses only
 *
 * Author:
 * -------
 * -------
 *
 *==============================================================================
 *              HISTORY
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
 * removed!
 * removed!
 * removed!
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
 *
 * removed!
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
 * removed!
 * removed!
 * removed!
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *==============================================================================
 *******************************************************************************/
#ifndef SIM_PS_STRUCT_PUBLIC_H
#define SIM_PS_STRUCT_PUBLIC_H

#include "sim_public_enum_public.h"

typedef struct {
    kal_uint8 chv1_count;
    kal_uint8 chv2_count;
    kal_uint8 ubchv1_count;
    kal_uint8 ubchv2_count;
    kal_uint8 is_chv1_enabled;
    kal_uint8 is_chv1_verified;
    kal_uint8 is_chv2_enabled;
    kal_uint8 is_chv2_verified;
    kal_uint8 chv_key_ref[2];
} uim_sim_chv_info_struct;

/* MSG_ID_UIM_SIM_ERROR_IND */
typedef struct {
    LOCAL_PARA_HDR
    sim_error_cause_enum cause;
    kal_uint8 utk_enabled; /* ALPS02323554: KAL_TRUE when refresh command is issued to MD3 */
    kal_uint8 refresh_qualifier;
    kal_uint8 sim_slot_id;
    kal_bool is_dual_mode_sim;
    kal_bool is_dss_no_reset;
    sim_additional_error_cause_enum additional_error_cause;
} uim_sim_error_ind_struct;

/* MSG_ID_UIM_SIM_APDU_ACCESS_REQ */
typedef struct
{
    LOCAL_PARA_HDR
    kal_uint16 src_id;
    kal_uint8 channel_id;
    kal_uint16 req_len;
    kal_uint8 req[APDU_REQ_MAX_LEN];
    kal_uint8  cmd_type;    //0: CGLA, 1: CSIM
} uim_sim_apdu_access_req_struct;

/* MSG_ID_UIM_SIM_APDU_ACCESS_CNF */
typedef struct
{
    LOCAL_PARA_HDR
    kal_uint16 src_id;
    kal_uint16 result;
    kal_uint16 rsp_len;
    kal_uint8 rsp[APDU_RSP_MAX_LEN];
    kal_uint8  cmd_type;    //0: CGLA, 1: CSIM
} uim_sim_apdu_access_cnf_struct;

typedef struct
{
    LOCAL_PARA_HDR
    kal_uint8 channel_id;
    kal_uint16 req_len;
    kal_uint8 *req_p;
    /* For error handling, MOD_SIM appends Le to C-APDU, Allocate 1 more byte for it*/
} uim_sim_extended_apdu_access_req_struct;

typedef struct
{
    LOCAL_PARA_HDR
    kal_uint16 result;
    kal_uint16 rsp_len;
    kal_uint8  rsp[APDU_EXTENDED_RSP_MAX_LEN];
} uim_sim_extended_apdu_access_cnf_struct;

/* MSG_ID_UIM_SIM_AUTHENTICATE_REQ */
typedef struct {
    LOCAL_PARA_HDR
    kal_uint8   rand[16];
    kal_bool    is_auth_present;
    kal_uint8   auth[16];
    kal_uint16   src_id; 
    uicc_auth_mode_enum mode;
    kal_uint8   channel_id;
    kal_uint8   command_len;
    kal_uint8   command_data[256];
} uim_sim_authenticate_req_struct;

/* MSG_ID_UIM_SIM_AUTHENTICATE_CNF*/
typedef struct {
    LOCAL_PARA_HDR
    sim_cmd_result_enum result;
    kal_uint16 status_word;
    kal_uint8   kc[8];
    kal_uint8   sres[4];
    kal_uint8   ck[16];
    kal_uint8   ik[16];
    kal_uint8   res[16];
    kal_uint8   res_len;
    kal_uint8   auts[16];
    kal_uint8   auts_len;
    kal_uint8   auth_res[256];
    kal_uint16  auth_res_len;  
    kal_uint16   src_id;  
} uim_sim_authenticate_cnf_struct;

/* MSG_ID_UIM_SIM_STATUS_IND */
typedef struct{
    LOCAL_PARA_HDR
    kal_uint16 card_type;
    usim_logic_channel_enum USIMchan;
    usim_logic_channel_enum ISIMchan;
    kal_uint8 atr_length;
    kal_uint8 atr[ATR_MAX_LEN];
    kal_uint8 remote_sim_protocol_task;
    kal_uint8 sim_slot_id;
    kal_bool is_imsi_valid;
    kal_uint8 imsi[9];
    kal_bool sim_start_req;
    kal_bool is_ad_valid;
    kal_uint8 ad[4];
    kal_bool is_iccid_valid;
    kal_uint8 iccid[10];
    kal_uint8 pl[10];
    kal_uint8 dir_record_size; // size of 1 record
    kal_uint8 dir_record_num;
    kal_uint8 dir_content[255];
    uim_sim_chv_info_struct chv_info;
    kal_uint8 imsi_m_fcp_len;
    kal_uint8 imsi_m_fcp[50];
    kal_bool is_extended_length_supported;
}uim_sim_status_ind_struct;

/* MSG_ID_UIM_SAT_PROACTIVE_CMD_IND */
typedef struct {
    LOCAL_PARA_HDR
    kal_uint16 proactive_cmd_len;
    kal_uint8 proactive_cmd[260];
} uim_sat_proactive_cmd_ind_struct;

/* MSG_ID_UIM_SAT_TERMINAL_RSP_REQ */
typedef struct {
    LOCAL_PARA_HDR
    kal_uint16 src_id;
    kal_uint16 length;
    kal_uint8 terminal_rsp[261];
} uim_sat_terminal_rsp_req_struct;

/* MSG_ID_UIM_SAT_TERMINAL_RSP_CNF */
typedef struct {
    LOCAL_PARA_HDR
    kal_uint16 src_id;
    kal_uint16 status_word;
} uim_sat_terminal_rsp_cnf_struct;

/* MSG_ID_UIM_SAT_ENVELOPE_REQ */
typedef struct {
    LOCAL_PARA_HDR
    kal_uint16 src_id;
    kal_uint16 length;
    kal_uint8 envelope[261];
} uim_sat_envelope_req_struct;

/* MSG_ID_UIM_SAT_ENVELOPE_CNF */
typedef struct {
    LOCAL_PARA_HDR
    kal_uint16 src_id;
    kal_uint16 status_word;
    sim_cmd_result_enum result;
    kal_uint16 length;
    kal_uint8 envelope_rsp[256];
} uim_sat_envelope_cnf_struct;

/* MSG_ID_UIM_SAT_FILE_CHANGE_RES */
typedef struct {
    LOCAL_PARA_HDR
    kal_uint16 src_id;
    kal_uint8 sim_slot_id;
    kal_uint8 is_successful;
} uim_sat_file_change_res_struct;

typedef struct {
    LOCAL_PARA_HDR
    kal_uint16 file_idx;
    kal_uint16 para;
    kal_uint16 length;
    kal_uint8 access_id;
    kal_uint8 path[6];
    kal_uint16 src_id; 
    kal_uint8 channel_id;
    kal_uint8 sfi;
} uim_sim_read_req_struct;

typedef struct {
    LOCAL_PARA_HDR
    kal_uint16 file_idx;
    kal_uint16 para;
    kal_uint16 length;
    kal_uint8 data[258]; // 256 + 2 for driver usage in T=1
    kal_uint16 result;
    kal_uint16 status_word;
    kal_uint8 access_id;
    kal_uint16 src_id; 
} uim_sim_read_cnf_struct;

typedef struct
{
    LOCAL_PARA_HDR
    kal_uint8 transport_protocol_type;
    kal_uint16 src_id;    
} bt_uim_sim_reset_req_struct;

typedef struct
{
    LOCAL_PARA_HDR
    kal_uint16 result;
    kal_uint8 current_transport_protocol_type;
    kal_uint16 atr_len;
    kal_uint8 atr[40];
    kal_uint16 src_id;    
    kal_uint8 supported_transport_protocol_type_capability;
} bt_uim_sim_reset_cnf_struct;

typedef struct
{
    LOCAL_PARA_HDR
    kal_uint16 src_id;
} bt_uim_sim_power_off_req_struct;

typedef struct
{
    LOCAL_PARA_HDR
    kal_uint16 result;
    kal_uint16 src_id;    
} bt_uim_sim_power_off_cnf_struct;

typedef bt_uim_sim_reset_req_struct bt_uim_sim_power_on_req_struct;
typedef bt_uim_sim_reset_cnf_struct bt_uim_sim_power_on_cnf_struct;


/* <modem_status>: 
   0: only MD1 active 
   1: MD1's RF is closed, but MD1's SIM task is still working only for MD3 SIM remote access and MD3 active 
   2: both MD1 and MD3 active, but there is at least USIM application existed on the MD1's card 
   <remote_sim_protocol_task>: 
   0: MD3 access local card 
   1: MD3 access MD1's SIM task1 
   2: MD3 access MD1's SIM task2 */
typedef struct
{
    LOCAL_PARA_HDR
    kal_uint8 modem_status;
    kal_uint8 remote_sim_protocol_task;
}uim_sim_mdstatus_update_ind_struct;


typedef struct
{
    LOCAL_PARA_HDR
    kal_uint8 csim_channel_id;
    kal_uint8 num_of_file_index;
    c2k_file_index file_index[MAX_C2K_EF_IDX];
}uim_sim_c2k_batch_file_read_req_struct;


typedef struct
{
    LOCAL_PARA_HDR
    kal_uint8 csim_channel_id;
    kal_uint8 num_of_file_index;
    c2k_file_index file_index[MAX_C2K_EF_IDX];
    kal_uint16 status_word[MAX_C2K_EF_IDX]; 
    kal_uint8 ef_ad_data[3];
    kal_uint8 ef_uim_id_data[8];
    kal_uint8 ef_count_data[2];
    kal_uint8 ef_imsi_m_data[10];
    kal_uint8 ef_imsi_t_data[10];
    kal_uint8 len_of_ef_cdma_home;
    kal_uint8 ef_cdma_home[20*5];
    kal_uint8 ef_accloc_data;
    kal_uint8 ef_term_data;
    kal_uint8 ef_ssci_data;
    kal_uint8 ef_otapaspc_data;
    kal_uint8 ef_namlock_data;
    kal_uint8 ef_mdn_data[11];
    kal_uint16 len_of_ef_cst;
    kal_uint8 ef_cst_data[255];
    kal_uint8 ef_usgind_data;
    kal_uint8 ef_sfuimid_data[7];
    kal_uint8 ef_spcs_data;
    kal_uint8 ef_est_data;
}uim_sim_c2k_batch_file_read_cnf_struct;

typedef struct
{
   LOCAL_PARA_HDR
   kal_uint8 slot_id;
   kal_uint8 iccid[10];
   kal_uint8 is_pin1_valid;
   kal_uint8 pin1[8];
   kal_uint8 chv1_count;
   kal_uint8 chv2_count;
   kal_uint8 ubchv1_count;
   kal_uint8 ubchv2_count;
   kal_uint8 is_chv1_enabled;
   kal_uint8 is_chv1_verified;
   kal_uint8 is_chv2_enabled;
   kal_uint8 is_chv2_verified;
   kal_uint8 chv_key_ref[2];
}uim_sim_pin_sync_ind_struct;

typedef uim_sim_pin_sync_ind_struct sim_uim_pin_sync_ind_struct;


typedef struct {
    LOCAL_PARA_HDR
    kal_uint8 app_type;
	kal_bool  iccid_valid;
    kal_uint8 iccid[10];
} uim_sim_startup_read_finish_ind_struct;

typedef struct {
    LOCAL_PARA_HDR
    kal_uint8 app_type;
    kal_uint8 channel_id;
    kal_uint8 mcc[4];
    kal_uint8 mnc[4];
} uim_sim_app_ready_ind_struct;

typedef struct {
    LOCAL_PARA_HDR
    kal_uint8 cause;
    kal_uint8 app_type;
    kal_uint8 channel;
} uim_sim_app_error_ind_struct;

/*MSG_ID_UIM_SIM_CARD_TYPE_CHANGE_IND*/
typedef struct {
    LOCAL_PARA_HDR
    kal_uint8 app_type;
}uim_sim_card_type_change_ind_struct;

typedef struct {
    LOCAL_PARA_HDR
    sim_file_index_enum file_idx;
    kal_uint8  path[6];
    usim_logic_channel_enum channel;  /* if channel is 0xFF, it means CT 3G card */
}uim_sim_select_req_struct;

typedef struct {
    LOCAL_PARA_HDR
    sim_cmd_result_enum result;
    kal_uint16 status_word;
    kal_uint16 rsp_len;
    kal_uint8  rsp[APDU_RSP_MAX_LEN];
}uim_sim_select_cnf_struct; 

/* MSG_ID_UIM_SIM_CALL_STATUS_IND */
typedef struct{
    LOCAL_PARA_HDR
    sim_call_status_enum call_status;
}uim_sim_call_status_ind_struct;

typedef struct {
    kal_uint8 *mcc;
    kal_uint8 *mnc;
    kal_bool is_spn_valid; //3GPP2 SPN, 
    kal_uint8 spn[35];
    kal_uint8 imsi[16];
} uim_sim_app_ready_data_struct;

#endif

