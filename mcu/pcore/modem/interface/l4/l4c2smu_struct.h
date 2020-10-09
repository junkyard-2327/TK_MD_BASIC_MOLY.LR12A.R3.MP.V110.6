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
 *   l4c2smu_struct.h
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description:
 * ------------
 *
 * Author:
 * -------
 * -------
 *
 ****************************************************************************/

/********************************************************************************
*  Copyright Statement:
*  --------------------
*
*  This product has been developed using a protocol stack
*  developed by Sasken Communication Technologies Limited.
*
********************************************************************************/


/*******************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2002
*
*******************************************************************************
 *  FILENAME : l4c2smu_struct.h
 *  SYNOPSIS : Functions for encoding/decoding.
 *
 *                      R E V I S I O N    H I S T O R Y
 *
 */
#ifndef _L4C2SMU_STRUCT_H
#define _L4C2SMU_STRUCT_H

#include "ps_public_struct.h"
#include "ps2sim_struct.h"
#include "ps2sat_struct.h"
#include "kal_general_types.h"
#include "ps_public_enum.h"   
#include "device.h"
#include "l4c_common_enum.h"
#include "sim_public_enum.h"
#include "sim_ps_enum.h"
#include "smu_def.h"
#include "smu_common_enums.h"
#include "rmmi_common_enum.h"
#include "custom_nvram_extra.h"
#include "custom_nvram_sec.h"
#include "kal_public_defs.h"
#include "l3_inc_enums.h"

typedef struct {
    LOCAL_PARA_HDR
    l4c_source_id_enum src_id;
    power_on_status_enum poweron_mode;//add for system error with exception handle
} l4csmu_start_req_struct;

typedef struct {
    LOCAL_PARA_HDR
    l4c_source_id_enum src_id;
    l4c2smu_res_enum response;
    kal_bool cause_present;
    sim_cmd_result_enum cause;
    smu_chv1_phonelock_status_enum chv1_phonelock_status;
    sim_lp_struct lp[2];
    rmmi_err_id_enum rmmi_error_cause;
    sim_chv_info_struct chv_info;
    sim_ecc_struct ecc;
    kal_uint8 is_valid_rat_mode;  //mtk01616_110315
    kal_uint8 rat_mode; //RAT mode setting value in EF_RAT
} l4csmu_start_cnf_struct;

typedef struct {
    LOCAL_PARA_HDR
    l4c_source_id_enum src_id;
    smu_security_type_enum type;
    sim_security_operation_enum op;
    kal_uint8 key1[SML_MAX_SUPPORT_KEY_LEN];
    kal_uint8 key2[SML_MAX_SUPPORT_KEY_LEN];
    kal_uint8 channel_id;
} l4csmu_security_req_struct, l4csmu_app_security_req_struct;

typedef struct {
    LOCAL_PARA_HDR
    l4c_source_id_enum src_id;
    smu_security_type_enum type;
    kal_uint32 cphs_retry_count; /* Only for CPHS Locks */
    l4c2smu_res_enum response;
    kal_bool cause_present;
    sim_cmd_result_enum cause;
    rmmi_err_id_enum rmmi_error_cause;
    sim_chv_info_struct chv_info;
    kal_uint8 channel_id;
} l4csmu_security_cnf_struct, l4csmu_app_security_cnf_struct;

typedef struct {
    LOCAL_PARA_HDR
    uicc_app_type_enum    app_type;
    kal_uint8             channel_id;
    kal_uint8             mcc[4];
    kal_uint8             mnc[4];
} l4csmu_app_ready_ind_struct;

typedef struct {
    LOCAL_PARA_HDR
    sim_event_enum event;
    kal_uint8 argc;
    kal_uint8 arg_list[10];
} l4csmu_event_ind_struct;

typedef struct {
    LOCAL_PARA_HDR
    kal_uint8 src_id;
    uicc_app_type_enum app_type;
} l4csmu_app_start_req_struct;

typedef struct {
    LOCAL_PARA_HDR
    l4c_source_id_enum src_id;
    uicc_app_type_enum app_type;
    kal_uint8 channel_id;
    kal_uint16 result;
} l4csmu_app_start_cnf_struct;

typedef struct {
    LOCAL_PARA_HDR
    l4c_source_id_enum src_id;
    sml_cat_enum category;     /* sml_cat_enum */
    sml_op_enum op;           /* sml_op_enum */
    kal_uint8 key[CAT_KEY_MAX_SUPPORT_LEN];
    kal_uint8 len;          /* valid bytes in data[] */
#ifdef __SML_CONFIG_GID_LENGTH__
    kal_uint8 data[50]; 	/* the data for add command */
#else
    kal_uint8 data[10];     /* the data for add command */
#endif
} l4csmu_set_personalization_req_struct;

typedef struct {
    LOCAL_PARA_HDR
    l4c_source_id_enum src_id;
    sml_cat_enum category;     /* sml_cat_enum */
    sml_op_enum op;           /* sml_op_enum */
    kal_bool result;
    sml_state_enum state;        /* sml_state_enum */
    kal_uint32 retry_count;
    kal_uint8 num_of_sets;  /* number of sets in this category */
    kal_uint8 space_of_sets;/* number of empty sets in this category */
} l4csmu_set_personalization_cnf_struct;

#ifdef __CARRIER_RESTRICTION__
typedef struct {
    LOCAL_PARA_HDR
    l4c_source_id_enum src_id;
    smu_crrst_op_enum op;
    kal_uint8 key[SML_MAX_SUPPORT_KEY_LEN];
    kal_uint8 list;
    smu_crrst_cat_enum category;
    kal_uint8 len;          /* valid bytes in data[] */
    kal_uint8 data[23];     /* the data for add, remove command */
    kal_uint8 multi_sim_policy;
    kal_uint8 allowed_carriers_prioritized;
} l4csmu_set_carrier_restriction_req_struct;

typedef struct {
    LOCAL_PARA_HDR
    l4c_source_id_enum src_id;
    smu_crrst_cat_enum category;
    smu_crrst_op_enum op;
    kal_bool result;
} l4csmu_set_carrier_restriction_cnf_struct;

typedef struct {
   LOCAL_PARA_HDR
   l4c_source_id_enum src_id;
} l4csmu_carrier_restriction_status_req_struct;

typedef struct {
    LOCAL_PARA_HDR
    l4c_source_id_enum                        src_id;
    smu_crrst_state_enum                      crrst_state;
    kal_uint8                                 multi_sim_policy;
    kal_uint8                                 allowed_carriers_prioritized;
    smu_carrier_restriction_list_struct       white_list;
    smu_carrier_restriction_list_struct       black_list;
} l4csmu_carrier_restriction_status_cnf_struct;

typedef struct {
    LOCAL_PARA_HDR
    l4c_source_id_enum src_id;
    kal_uint8          algo_type;
	kal_uint32 max_retry_count;
    kal_uint8          crrst_hck[NVRAM_SML_S_MAX_SUPPORT_HCK_LEN];
    kal_uint8          crrst_salt[NVRAM_SML_S_MAX_SUPPORT_SALT_LEN];
    kal_uint8          crrst_inter_cnt[NVRAM_SML_S_MAX_SUPPORT_INTER_CNT_LEN];
} l4csmu_set_crrst_secure_data_req_struct;

typedef struct {
    LOCAL_PARA_HDR
    l4c_source_id_enum src_id;
    kal_bool result;
} l4csmu_set_crrst_secure_data_cnf_struct;
#endif
 
// TMO SML
typedef struct {
    LOCAL_PARA_HDR
    l4c_source_id_enum src_id;
} l4csmu_get_shared_key_req_struct;

typedef struct {
    LOCAL_PARA_HDR
    l4c_source_id_enum src_id;
    kal_bool result;
    kal_uint8 envelope_type;
    kal_uint32 encrypted_key_len;
    kal_uint8 encrypted_key[SML_TMO_MAX_ENCRYPTED_KEY_LENGTH];
} l4csmu_get_shared_key_cnf_struct;


typedef struct {
    LOCAL_PARA_HDR
    l4c_source_id_enum src_id;
    kal_uint16 slb_len;
} l4csmu_update_slb_req_struct;

typedef struct {
    LOCAL_PARA_HDR
    l4c_source_id_enum src_id;
    kal_bool result;
    kal_uint16 rmmi_error_cause;
} l4csmu_update_slb_cnf_struct;

typedef struct {
    LOCAL_PARA_HDR
    l4c_source_id_enum src_id;
} l4csmu_reset_slb_req_struct;

typedef struct {
    LOCAL_PARA_HDR
    l4c_source_id_enum src_id;
    kal_bool result;
    kal_uint16 rmmi_error_cause;
} l4csmu_reset_slb_cnf_struct;

typedef struct {
    LOCAL_PARA_HDR
    l4c_source_id_enum src_id;
} l4csmu_get_slb_version_req_struct;

typedef struct {
    LOCAL_PARA_HDR
    l4c_source_id_enum src_id;
    kal_bool result;
    kal_uint8 version[SML_TMO_SIZE_OF_VERSION];
} l4csmu_get_slb_version_cnf_struct;

typedef struct {
    LOCAL_PARA_HDR
    l4c_source_id_enum src_id;
} l4csmu_get_sim_lock_status_req_struct;

typedef struct {
    LOCAL_PARA_HDR
    l4c_source_id_enum src_id;
    kal_bool result;
    kal_uint8 lock_state;
    kal_uint32 unlock_time_left;
    kal_uint8 num;
    kal_uint8 sim_plmn_gid[SML_TMO_SIZE_OF_MCC_MNC+SML_TMO_SIZE_OF_GID];
} l4csmu_get_sim_lock_status_cnf_struct;

typedef struct {
    LOCAL_PARA_HDR
    l4c_source_id_enum src_id;
} l4csmu_get_modem_config_req_struct;

typedef struct {
    LOCAL_PARA_HDR
    l4c_source_id_enum src_id;
    kal_bool result;
    kal_uint16 length;
    kal_uint8 blob[2048];
} l4csmu_get_modem_config_cnf_struct;

typedef struct {
    LOCAL_PARA_HDR
    l4c_source_id_enum src_id;
} l4csmu_get_api_version_req_struct;

typedef struct {
    LOCAL_PARA_HDR
    l4c_source_id_enum src_id;
    kal_uint8 api_version[SML_TMO_SIZE_OF_API_VERSION];
    kal_bool result;
} l4csmu_get_api_version_cnf_struct;

typedef struct {
    LOCAL_PARA_HDR
    kal_uint8 nw_time_zone;
    nw_time_zone_time_struct nw_time;
} l4csmu_update_nw_time_req_struct;

typedef struct {
    LOCAL_PARA_HDR
    sml_event_enum event;
} l4csmu_sml_event_ind_struct;

 
typedef struct {
    LOCAL_PARA_HDR
    l4c_source_id_enum src_id;
    smu_sim_access_cmd_enum cmd;
    kal_uint16 fileid;
    kal_uint8 p1;
    kal_uint8 p2;
    kal_uint8 p3;
    kal_uint8 data[255];
    kal_uint8 pathid[4];
    kal_uint8 pathid_length;	
    kal_uint8 channel_id;
} l4csmu_sim_access_req_struct;

typedef struct {
    LOCAL_PARA_HDR
    l4c_source_id_enum src_id;
    kal_uint8 sw1;
    kal_uint8 sw2;
    kal_uint16 length;
    kal_uint8 res_data[256+1];
    l4c2smu_res_enum response;
    kal_bool cause_present;
    sim_cmd_result_enum cause;
} l4csmu_sim_access_cnf_struct;

typedef struct {
    LOCAL_PARA_HDR
    sim_file_index_enum file_idx;
    l4c_source_id_enum src_id;
    kal_uint8 idx;
    smu_plmnsel_op_enum op;
    kal_uint8 plmn_data[5];
} l4csmu_plmn_sel_write_req_struct;

typedef struct {
    LOCAL_PARA_HDR
    l4c_source_id_enum src_id;
    l4c2smu_res_enum response;
    kal_bool cause_present;
    sim_cmd_result_enum cause;
} l4csmu_plmn_sel_write_cnf_struct;

typedef struct {
    LOCAL_PARA_HDR
    l4c_source_id_enum src_id;
    kal_uint8 currency_code[3];
    kal_uint8 puct_data[18];
} l4csmu_puct_write_req_struct;

typedef struct {
    LOCAL_PARA_HDR
    l4c_source_id_enum src_id;
    l4c2smu_res_enum response;
    kal_bool cause_present;
    sim_cmd_result_enum cause;
} l4csmu_puct_write_cnf_struct;

typedef struct {
    LOCAL_PARA_HDR
    l4c_source_id_enum src_id;
} l4csmu_puct_read_req_struct;

typedef struct {
    LOCAL_PARA_HDR
    l4c_source_id_enum src_id;
    l4c2smu_res_enum response;
    kal_bool cause_present;
    sim_cmd_result_enum cause;
    kal_uint8 currency_code[3];
    kal_uint8 puct_data[18];
} l4csmu_puct_read_cnf_struct;


#if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif
typedef struct {
    LOCAL_PARA_HDR
    l4c_source_id_enum src_id;
    sim_dn_enum dn_type;
    kal_uint8 switch_on;
} l4csmu_dial_mode_req_struct;

typedef struct {
    LOCAL_PARA_HDR
    l4c_source_id_enum src_id;
    l4c2smu_res_enum response;
    kal_bool cause_present;
    sim_cmd_result_enum cause;
} l4csmu_dial_mode_cnf_struct;


typedef struct {
   LOCAL_PARA_HDR
   kal_uint8 is_spn_valid;     // SPN
   kal_uint8 is_spn_RPLMN_required;
   kal_uint8 spn[17];
   kal_uint8 is_opname_valid;  // OPN
   kal_uint8 opname[LEN_OF_OPNAME + 1];
   kal_uint8 is_sopname_valid; // sOPN
   kal_uint8 sopname[11];
   kal_uint8 no_msisdn;        // MSISDN
   l4csmu_addr_struct msisdn[2];
   kal_uint8 no_info_num;      // Information Numbers
   l4csmu_info_num_struct *info_num;
   kal_uint8 is_valid_csp;
   kal_uint8 csp[22];          // Custom Service Profile
   kal_uint8 is_puct_valid;
   kal_uint8 ef_puct[5];
   kal_uint8 is_autolock_enable; /* SML */
   kal_uint8 autolock_result;    /* SML */
   kal_uint8 autolock_remain;    /* SML */
   /* Acting HPLMN */ /* mtk01488 */
   kal_bool is_valid_ef_acting_hplmn;
   kal_uint8 ef_acting_hplmn[3]; 
   kal_uint8 digits_of_mnc; 
   kal_bool is_usim;
   kal_bool is_valid_ef_ehplmn;
   kal_uint8 num_of_ehplmn;
   kal_uint8 ef_ehplmn[MAX_EHPLMN_EF_LEN];
} l4csmu_mmi_info_ind_struct;

typedef struct {
   LOCAL_PARA_HDR
   l4c_source_id_enum src_id;	
} l4csmu_sml_status_req_struct;

typedef struct {
    LOCAL_PARA_HDR
    l4c_source_id_enum src_id;	
    sml_state_enum state[7];
    kal_uint32 retry_count[7];
    kal_uint8 autolock_count[7];
    kal_uint8 num_of_sets[7];
    kal_uint8 total_size_of_cat[7];
    sml_key_state_enum key_state[7];
    kal_uint8 ef_imsi[8];
    kal_uint8 is_valid_gid1;
    kal_uint8 ef_gid1;
    kal_uint8 is_valid_gid2;
    kal_uint8 ef_gid2;
    kal_uint8 digits_of_mnc;
} l4csmu_sml_status_cnf_struct;

typedef struct {
   LOCAL_PARA_HDR
   kal_bool   cipher_ind;    //20050202 Benson add for MMI cipher indication display
   /* Johnny: cipher_ind is useless now, L4C will use l4csmu_get_cipher_ind_status() to get cipher_ind status from SMU */
   kal_uint8 is_valid_rat_mode;  //To indicare RAT Mode is valid.
   kal_uint8 rat_mode; //RAT mode setting value to overwrite
   kal_bool  is_uicc_activated;
} l4csmu_mmrr_ready_ind_struct;

#ifdef __SMS_DEPERSONALIZATION__

typedef struct {
    LOCAL_PARA_HDR
    kal_uint16 length;    //length of peer buf data; unit:byte
    kal_uint8   access_id;
} l4csmu_sms_depersonalization_req_struct; //Kinki: JRD require. [MAUI_01255000]

typedef struct {
    LOCAL_PARA_HDR
    kal_bool   response; //Kinki: kal_bool
    kal_bool   cause_present; //present only when response is FALSE
    smu_sms_depersonalization_enum cause;
    kal_uint16 length; //length of peer buf data; unit:byte
    kal_uint8   access_id; //SMU piggy-back
} l4csmu_sms_depersonalization_cnf_struct; //Kinki: JRD require. [MAUI_01255000]

#endif

typedef struct {
    LOCAL_PARA_HDR
    kal_uint8   uicc_unlock_code;
} l4csmu_uicc_unlock_code_ind_struct;

#ifdef __SAT__

typedef struct {
   LOCAL_PARA_HDR
   kal_uint8 cmd_detail[5];
   kal_bool is_icon_available;
   sat_icon_struct icon_info;
   kal_uint8 bearer_type;
} l4csat_open_channel_ind_struct;

typedef struct {
   LOCAL_PARA_HDR
   kal_uint8 cmd_detail[5];
   kal_bool res;
} l4csat_open_channel_req_struct;

typedef struct {
   LOCAL_PARA_HDR
   kal_uint8 res;  		/* sat_terminal_res_enum */
   kal_uint8 cause;		/* sat_additional_info_for_res_enum */
} l4csmu_sat_open_channel_cnf_struct;

typedef struct {
   LOCAL_PARA_HDR
   kal_uint8 state;    
} l4csmu_sat_notify_mmi_ind_struct;

typedef struct {
   kal_uint8   	context_id;
   kal_uint8 	name_length;
   kal_uint8 	name_dcs;
   kal_uint8     authentication_type;
   kal_uint8 	name[32];      
   kal_uint8     user_name[16];
   kal_uint8    	password[16];
   kal_uint8  	dns[4];
   kal_uint8  	apn [100];
   kal_uint8  	apn_length;
   sat_gprs_qos_struct     req_qos;
} gprs_data_account_struct;

typedef struct {
   LOCAL_PARA_HDR
   gprs_data_account_struct gprs_data_account;
} l4csat_set_gprs_data_account_ind_struct;

typedef struct {
   LOCAL_PARA_HDR
   kal_bool result;
   kal_uint8 cause;
} l4csat_set_gprs_data_account_res_struct;

typedef struct {
   LOCAL_PARA_HDR	
   sat_csd_bearer_para_struct bearer_para;
   kal_uint8 size_of_address;
   kal_uint8 addr[MAX_SIM_ADDR_BCD_LEN];
   kal_uint8 size_of_subaddr;
   kal_uint8 subaddr[MAX_SIM_ADDR_BCD_LEN];
   kal_uint32 duration1;
   kal_uint32 duration2;
} l4csat_csm_open_csd_ind_struct;

typedef struct {
   LOCAL_PARA_HDR
   sat_csd_bearer_para_struct bearer_para;
} l4csat_csm_bearer_info_ind_req_struct;

typedef struct {
   LOCAL_PARA_HDR
   kal_bool result;
   kal_uint16 cause;   /* cm_enum_cause */
} l4csat_csm_open_csd_res_struct;

typedef struct {
   LOCAL_PARA_HDR
} l4csat_cc_call_disc_ind_struct;

typedef struct {
   LOCAL_PARA_HDR
   kal_bool result;
   kal_uint16 cause;  /* cm_enum_cause */
} l4csat_cc_call_disc_res_struct;

typedef struct {
   LOCAL_PARA_HDR
   kal_bool result;
   kal_uint16 cause;  /* cm_enum_cause */
} l4csat_cc_call_disc_ind_req_struct;

typedef struct {
   LOCAL_PARA_HDR
   kal_uint8 res;
} l4csmu_sat_send_data_req_struct;

typedef struct {
   LOCAL_PARA_HDR
   kal_uint8 res;  		/* sat_terminal_res_enum */
   kal_uint8 cause; 	/* sat_additional_info_for_res_enum */
} l4csmu_sat_send_data_cnf_struct;

typedef struct {
   LOCAL_PARA_HDR
   kal_uint8 res;
} l4csmu_sat_recv_data_req_struct;

typedef struct {
   LOCAL_PARA_HDR
   kal_uint8 res;  		/* sat_terminal_res_enum */
   kal_uint8 cause; 	/* sat_additional_info_for_res_enum */
} l4csmu_sat_recv_data_cnf_struct;

typedef struct {
   LOCAL_PARA_HDR
   kal_uint8 res;
} l4csmu_sat_close_data_req_struct;

// Nick start
typedef struct {
    LOCAL_PARA_HDR
    kal_uint8 nw_acct_id;
    kal_bool is_addr_valid;
    kal_uint8 size_of_address;
    kal_uint8 addr[MAX_SIM_ADDR_BCD_LEN];
    kal_bool is_subaddr_valid;
    kal_uint8 size_of_subaddr;
    kal_uint8 subaddr[MAX_SIM_ADDR_BCD_LEN];
    kal_bool is_username_valid;
    kal_uint8 no_username;
    kal_uint8 username[16];
    kal_uint8 dcs_of_username;
    kal_bool is_passwd_valid;
    kal_uint8 no_passwd;
    kal_uint8 passwd[16];
    kal_uint8 dcs_of_passwd;
    kal_bool is_local_addr_valid;
    kal_uint8 no_local_addr;
    kal_uint8 local_addr[16];
    kal_bool is_dest_addr_valid;
    kal_uint8 no_dest_addr;
    kal_uint8 dest_addr[16];
    sat_csd_bearer_para_struct csd_bearer;
} l4csmu_sat_set_csd_prof_ind_struct;

typedef struct {
    LOCAL_PARA_HDR
    kal_uint8 res;
//    sat_csd_bearer_para_struct csd_bearer;
} l4csmu_sat_set_csd_prof_res_struct;

typedef struct {
    LOCAL_PARA_HDR
    kal_uint8 nw_acct_id;    
    kal_bool is_apn_valid;
    kal_uint8 apn_length;
    kal_uint8 apn[50];
    kal_bool is_username_valid;
    kal_uint8 no_username;
    kal_uint8 username[16];
    kal_uint8 dcs_of_username;
    kal_bool is_passwd_valid;
    kal_uint8 no_passwd;
    kal_uint8 passwd[16];
    kal_uint8 dcs_of_passwd;
    kal_bool is_local_addr_valid;
    kal_uint8 no_local_addr;
    kal_uint8 local_addr[16];
    kal_bool is_dest_addr_valid;
    kal_uint8 no_dest_addr;
    kal_uint8 dest_addr[16];
    sat_gprs_bearer_para_struct gprs_bearer;
} l4csmu_sat_set_gprs_prof_ind_struct;

typedef struct {
    LOCAL_PARA_HDR
    kal_uint8 res;
//    sat_gprs_bearer_para_struct gprs_bearer;
} l4csmu_sat_set_gprs_prof_res_struct;

typedef struct {
    LOCAL_PARA_HDR
    kal_uint8 bearer_type;
    sat_gprs_bearer_para_struct gprs_bearer;
    sat_csd_bearer_para_struct csd_bearer;
} l4csmu_sat_bearer_para_req_struct ;

typedef struct {
   LOCAL_PARA_HDR
   kal_uint8 cmd_detail[5];
  kal_uint8 res;
  kal_uint8 additional_info;
} l4csmu_sat_open_channel_req_struct;

typedef struct {
   LOCAL_PARA_HDR
   kal_uint8 state;
} l4csmu_sat_channel_disc_evdl_ind_struct;

#endif // __SAT__

#if defined(__SUBSIDY_LOCK__) || defined(__SMB_SIMME_LOCK__)
typedef struct {
    LOCAL_PARA_HDR
    l4c_source_id_enum src_id;
    sml_custom_op_enum  op;
    kal_uint16 slb_len;
} l4csmu_sl_update_blob_req_struct;

typedef struct {
    LOCAL_PARA_HDR
    l4c_source_id_enum src_id;
    kal_bool result;
    kal_uint16 rmmi_error_cause;
} l4csmu_sl_update_blob_cnf_struct;

typedef struct {
    LOCAL_PARA_HDR
    l4c_source_id_enum src_id;
} l4csmu_sl_get_sim_lock_status_req_struct;

typedef struct {
    LOCAL_PARA_HDR
    l4c_source_id_enum src_id;
    kal_bool result;
    kal_uint8 lock_state;
} l4csmu_sl_get_sim_lock_status_cnf_struct;
#endif /* __SUBSIDY_LOCK__ || __SMB_SIMME_LOCK__ */

typedef struct {
    LOCAL_PARA_HDR
    kal_uint16 nonce_len;
    kal_uint8 nonce[256];  //Random String: 80 byte
} l4csmu_ut_set_nonce_req_struct;

typedef struct {
    LOCAL_PARA_HDR
    kal_uint8 mode;
    kal_uint8 unlock_code;
    kal_uint16 sig_len;
    kal_uint8 sig[512];  //sig(B64): 344 byte + 1 byte('\0')
} l4csmu_ut_sig_verify_req_struct;

typedef struct {
   LOCAL_PARA_HDR
   l4c_source_id_enum src_id;
} l4csmu_sml_get_lock_codes_req_struct;

typedef struct {
    LOCAL_PARA_HDR
    l4c_source_id_enum src_id;
    kal_uint8          num_of_sets[SML_SUPPORT_CAT_SIZE];
    kal_uint8          code_cat_n[SML_CFG_CAT_N_SIZE];        
    kal_uint8          code_cat_ns[SML_CFG_CAT_NS_SIZE];      
    kal_uint8          code_cat_sp[SML_CFG_CAT_SP_SIZE];      
    kal_uint8          code_cat_c[SML_CFG_CAT_C_SIZE];        
    kal_uint8          code_cat_sim[SML_CFG_CAT_SIM_SIZE];    
    kal_uint8          code_cat_ns_sp[SML_CFG_CAT_NS_SP_SIZE];
    kal_uint8          code_cat_sim_c[SML_CFG_CAT_SIM_C_SIZE];
} l4csmu_sml_get_lock_codes_cnf_struct;

typedef struct {
    LOCAL_PARA_HDR
    l4c_source_id_enum  src_id;
    sml_cat_enum        category;
    sml_custom_op_enum  op;
    kal_uint32          data;
#if defined(__SMB_SIMME_LOCK_NV__) && defined(__SMB_SIMME_LOCK__)
	kal_uint8 			algo_type;
	kal_uint8			salt[NVRAM_SML_S_MAX_SUPPORT_SALT_LEN];
	kal_uint8			inter_cnt[NVRAM_SML_S_MAX_SUPPORT_INTER_CNT_LEN];
#endif
} l4csmu_set_custom_personalization_req_struct;

typedef struct {
    LOCAL_PARA_HDR
    l4c_source_id_enum src_id;
    kal_bool result;
} l4csmu_set_custom_personalization_cnf_struct;

//MSG_ID_L4CSMU_OP129_UPDATE_SIMLOCK_SETTING_REQ
typedef struct {
    LOCAL_PARA_HDR

    l4c_source_id_enum src_id;
    kal_bool   is_last_data;
    kal_uint16 data_offset;
    kal_uint16 data_len;
    kal_uint8  lock_setting[1000];
}l4csmu_op129_update_simlock_setting_req_struct;

//MSG_ID_L4CSMU_OP129_UPDATE_SIMLOCK_SETTING_CNF
typedef struct {
    LOCAL_PARA_HDR

    l4c_source_id_enum src_id;
    kal_bool result;
    kal_uint16 rmmi_error_cause;
}l4csmu_op129_update_simlock_setting_cnf_struct;

// MSG_ID_L4CSMU_OP129_GET_SIMLOCK_DATA_REQ
typedef struct {
    LOCAL_PARA_HDR
    
    l4c_source_id_enum src_id;
    kal_uint8 list_type;
}l4csmu_op129_get_simlock_data_req_struct;

// MSG_ID_L4CSMU_OP129_GET_SIMLOCK_DATA_CNF
typedef struct {
    LOCAL_PARA_HDR
    
    l4c_source_id_enum src_id;
    kal_uint8 list_type;
    kal_uint16 triplet_number[SML_OP129_CAT_MAX];
    kal_uint8 simlock_data[2048];
}l4csmu_op129_get_simlock_data_cnf_struct;

#ifdef __SMB_SIMME_LOCK__
typedef struct {
    LOCAL_PARA_HDR
    kal_uint8    sml_lock_rule;
    kal_uint16   sml_lock_sub_rule;
    kal_uint8    sml_device_lock_status;
    kal_uint8    sml_lock_rule_policy;
    kal_uint8    sml_state_is_valid_sim;
} l4csmu_sml_lock_status_update_ind_struct;

typedef struct {
    LOCAL_PARA_HDR
    l4c_source_id_enum src_id;
    kal_uint8          rule;
    kal_uint16         sub_rule;
} l4csmu_update_gblob_lock_rule_req_struct;

typedef struct {
    LOCAL_PARA_HDR
    l4c_source_id_enum src_id;
    kal_bool result;
} l4csmu_update_gblob_lock_rule_cnf_struct;

typedef struct {
    LOCAL_PARA_HDR
    l4c_source_id_enum src_id;
    kal_uint8          op;
    kal_uint16         gblob_data_len;
    kal_uint8          gblob_data[2048];
} l4csmu_update_gblob_data_req_struct;

typedef struct {
    LOCAL_PARA_HDR
    l4c_source_id_enum src_id;
    kal_bool result;
} l4csmu_update_gblob_data_cnf_struct;

typedef struct {
    LOCAL_PARA_HDR
    l4c_source_id_enum src_id;
    kal_uint8          op;
    kal_uint8          dev_key_len;
    kal_uint8          dev_key[SML_GBLOB_SIZE_OF_DEV_HCK];
    kal_uint8          new_lock_state;
} l4csmu_gblob_dev_lock_verify_req_struct;

typedef struct {
    LOCAL_PARA_HDR
    l4c_source_id_enum src_id;
    rmmi_err_id_enum   rmmi_error_cause;
    kal_bool           result;
} l4csmu_gblob_dev_lock_verify_cnf_struct;

typedef struct {
    LOCAL_PARA_HDR
    l4c_source_id_enum src_id;
    kal_uint8          dev_algo_type;
    kal_uint8          dev_hck[SML_GBLOB_SIZE_OF_DEV_HCK];
    kal_uint32         dev_max_retry_cnt;
    kal_uint8          dev_salt[SML_GBLOB_SIZE_OF_DEV_SALT];
    kal_uint8          dev_inter_cnt[SML_GBLOB_SIZE_OF_DEV_INTCNT];
} l4csmu_update_gblob_dev_lock_algo_req_struct;

typedef struct {
    LOCAL_PARA_HDR
    l4c_source_id_enum src_id;
    kal_bool result;
} l4csmu_update_gblob_dev_lock_algo_cnf_struct;

typedef struct {
    LOCAL_PARA_HDR
    l4c_source_id_enum src_id;
    kal_uint8          slot_id;
    kal_uint8          imei[16];
} l4csmu_update_gblob_imei_req_struct;

typedef struct {
    LOCAL_PARA_HDR
    l4c_source_id_enum src_id;
    kal_bool result;
} l4csmu_update_gblob_imei_cnf_struct;

typedef struct {
    LOCAL_PARA_HDR
    l4c_source_id_enum src_id;
} l4csmu_get_gblob_dev_lock_status_req_struct;

typedef struct {
    LOCAL_PARA_HDR
    l4c_source_id_enum src_id;
    kal_uint8 lock_state;
    kal_uint8 dev_algo;
    kal_uint32 max_retry_count;
    kal_uint32 remain_retry_count;
} l4csmu_get_gblob_dev_lock_status_cnf_struct;

typedef struct {
    LOCAL_PARA_HDR
    l4c_source_id_enum src_id;
    dsml_simlock_data_struct simlock_data;
} smu_ut_dynamic_simmelock_req_struct;

typedef struct {
    LOCAL_PARA_HDR
    l4c_source_id_enum src_id;
    dsml_result_enum result;
} smu_ut_dynamic_simmelock_cnf_struct;

#endif
#endif 


