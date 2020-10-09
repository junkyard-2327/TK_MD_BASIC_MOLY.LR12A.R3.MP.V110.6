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
 * rmmi_rsp.h
 *
 * Project:
 * --------
 *   MT6208
 *
 * Description:
 * ------------
 *   This file is intends for ...
 *
 * Author:
 * -------
 * -------
 *
 *******************************************************************************/

/********************************************************************************
*  Copyright Statement:
*  --------------------
*
*  This product has been developed using a protocol stack
*  developed by Sasken Communication Technologies Limited.
*
********************************************************************************/

#ifndef _RMMI_RSP_H
#define _RMMI_RSP_H

#include "csmcc_atfunc.h"
#include "l4c2csm_cc_struct.h"
#include "med_struct.h"
#include "kal_general_types.h"
#include "ps_public_struct.h" 
#include "ps_public_enum.h"   
#include "l3_inc_local.h" 
#include "pam2tcm_struct.h"
#include "smsal_l4c_enum.h"
#include "em_l4_public_struct.h"

#ifdef __LTE_RAT__
#include "rac2l4c_struct.h"
#endif
#include "l4c2smu_struct.h"

#ifdef __MOBILE_BROADBAND_PROVISION_CONTEXT__
#include "nvram_editor_data_item.h"
#endif

#ifdef __VZW_RSU_SUPPORT__
#include "l4c2smu_vzw_struct.h"
#endif

extern void l4c_general_ext_rrsp(kal_bool result, kal_uint16 cause);
extern void l4c_general_rrsp(kal_bool result, kal_uint16 cause);
extern void l4c_sms_general_rrsp(kal_bool result, kal_uint16 cause);
extern void l4c_ps_general_rrsp(kal_bool result, kal_uint16 cause);
extern void l4c_sim_general_rrsp(kal_bool result, kal_uint16 cause);
extern void l4c_cfun_rrsp(kal_bool result, kal_uint16 cause);
extern void l4c_ss_string_parsing_rrsp(l4c_result_struct result, l4c_ss_string_info_struct *info);

#ifdef __MOD_CSM__
/* cc group */

extern void l4c_cc_cree_rrsp(kal_uint16 cause);

extern void l4c_cc_exe_hangup_active_call_rrsp(void);

extern void l4c_cc_get_call_list_rrsp(
                kal_bool result,
                kal_bool last_flag,
                l4c_call_entry_struct call_entry,
                l4c_number_struct number,
                kal_bool is_clccs);

extern void l4c_cc_exe_call_accept_rrsp(l4c_result_struct result, kal_uint8 call_type);

extern void l4c_cc_exe_call_setup_rrsp(l4c_result_struct result, kal_uint8 call_id);

extern void l4c_cc_exe_call_modify_rrsp(l4c_result_struct result, kal_uint8 call_type);

/* ciss group */

extern void l4c_ss_exe_emlpp_rrsp(
                l4c_result_struct result,
                kal_uint8 para_present,
                kal_uint8 opcode,
                kal_uint8 default_priority,
                kal_uint8 max_priority);

extern void l4c_ss_exe_repeat_ccfc_rrsp(
                kal_uint8 return_code,
                kal_uint8 bs_count,
                kal_uint8 opcode,
                forwarding_list_struct *list);

extern void l4c_ss_exe_call_forward_rrsp(
                l4c_result_struct result,
                kal_uint8 para_present,
                kal_uint8 opcode,
                kal_uint8 type,
                kal_uint8 length,
                forwarding_list_struct *list);

extern void l4c_ss_exe_call_wait_rrsp(
                l4c_result_struct result,
                kal_uint8 para_present,
                kal_uint8 opcode,
                kal_uint8 length,
                kal_uint8 status,
                kal_uint8 *list);

extern void l4c_ss_exe_cdip_interrogate_rrsp(
                l4c_result_struct result,
                kal_uint8 para_present,
                kal_uint8 status,
                kal_uint8 clir_option);

extern void l4c_ss_exe_call_barring_rrsp(
                l4c_result_struct result,
                kal_uint8 para_present,
                kal_uint8 opcode,
                kal_uint8 type,
                kal_uint8 length,
                barring_list_struct *list);

extern void l4c_ss_exe_clip_interrogate_rrsp(
                l4c_result_struct result,
                kal_uint8 para_present,
                kal_uint8 status,
                kal_uint8 clir_option);

extern void l4c_ss_exe_clir_interrogate_rrsp(
                l4c_result_struct result,
                kal_uint8 para_present,
                kal_uint8 status,
                kal_uint8 clir_option);

extern void l4c_ss_exe_cnap_interrogate_rrsp(
                l4c_result_struct result,
                kal_uint8 para_present,
                kal_uint8 status,
                kal_uint8 clir_option);

extern void l4c_ss_exe_colp_interrogate_rrsp(
                l4c_result_struct result,
                kal_uint8 para_present,
                kal_uint8 status,
                kal_uint8 clir_option);

extern void l4c_ss_exe_colr_interrogate_rrsp(
                l4c_result_struct result,
                kal_uint8 para_present,
                kal_uint8 status,
                kal_uint8 clir_option);

extern void l4c_ss_exe_ussd_rrsp(
                l4c_result_struct result,
                kal_uint8 para_present,
                kal_uint8 op_code,
                kal_uint8 dcs,
                kal_uint8 *ussd_str,
                kal_uint8 ussd_str_len);

#if 0 //super dongle
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif

extern void l4c_ss_exe_ccbs_rrsp(
                l4c_result_struct result,
                kal_uint8 para_present,
                kal_uint8 opcode,
                ccbs_list_struct *list);


#if defined(__IMS_SUPPORT__)
extern void l4c_cc_srvcc_transfer_rrsp(kal_uint8 src_id, kal_uint8 num_of_call, l4ccsm_srvcc_call_cntxt_struct *call_tbl);
#endif

#endif /* __MOD_CSM__ */ 

#ifdef __MOD_RAC__
/* nw group */

extern void l4c_nw_get_plmn_list_rrsp(l4c_result_struct result, kal_uint8 length, l4c_rat_plmn_info_struct *list);

extern void l4c_nw_cnti_plmn_list_rrsp(l4c_result_struct result, kal_uint8 length, l4c_rat_plmn_info_struct *list);

extern void l4c_nw_exe_cops_rrsp(l4c_result_struct result, kal_uint8 status, kal_uint8 *plmn);

#if defined(__CSG_SUPPORT__)
extern void l4c_nw_get_csg_list_rrsp(kal_bool result, kal_uint8 plmn_count, available_plmn_csg_struct *available_plmn_csg);
#endif
extern void rmmi_erscfg_rrsp(kal_uint32 * timer_interval);

extern void l4c_nw_enwsel_rrsp(cell_info_and_rat_struct *cell_info);
#endif /* __MOD_RAC__ */ 

/* phb group */

extern void l4c_phb_get_msisdn_rrsp(kal_uint16 no_list, l4c_phb_entry_struct *list);

extern void l4c_phb_get_entry_rrsp(kal_uint16 no_list, l4c_phb_entry_struct *list);

extern void l4c_phb_read_ln_entry_rrsp(
                kal_uint8 no_list,
                kal_uint8 index,
                l4c_phb_ln_entry_struct *list);

extern void l4c_phb_general_rrsp(l4c_result_struct *result);

extern void l4c_phb_update_entry_rrsp(kal_uint16 index);

extern void l4c_phb_get_epbum_entry_rrsp(phb_type_enum type, kal_uint16 index, kal_uint16 occurrence, void *entry);

extern void rmmi_header_rrsp(kal_char *string);
extern void rmmi_tail_int_comma_rrsp(kal_uint32 integer);
extern void rmmi_tail_int_space_rrsp(kal_uint32 integer);
extern void rmmi_tail_int_rrsp(kal_uint32 integer,  kal_char delimiter); 
extern void rmmi_tail_string_comma_rrsp(kal_char *string);
extern void rmmi_tail_string_space_rrsp(kal_char *string);
extern void rmmi_tail_string_rrsp(kal_char *string,  kal_char delimiter, kal_bool quote); 
extern void rmmi_tail_hex_space_rrsp(kal_uint8 *data, kal_uint16 length, kal_bool quote);
extern void rmmi_tail_hex_comma_rrsp(kal_uint8 *data, kal_uint16 length, kal_bool quote);
extern void rmmi_tail_hex_rrsp(kal_uint8 *data, kal_uint16 length, kal_char delimiter, kal_bool quote);
extern void rmmi_string_space_rrsp(kal_char *string);
extern void rmmi_string_comma_rrsp(kal_char *string);
extern void rmmi_string_rrsp(kal_char *string, kal_char delimiter, kal_bool quote);
extern void rmmi_int_space_rrsp(kal_uint32 integer);
extern void rmmi_int_comma_rrsp(kal_uint32 integer);
extern void rmmi_int_rrsp(kal_uint32 integer, kal_char delimiter);
extern void rmmi_hex_space_rrsp(kal_uint8 *data, kal_uint16 length, kal_bool quote);
extern void rmmi_hex_comma_rrsp(kal_uint8 *data, kal_uint16 length, kal_bool quote);
extern void rmmi_hex_rrsp(kal_uint8 *data, kal_uint16 length, kal_char delimiter, kal_bool quote);

extern void rmmi_phb_alphaId_rrsp(l4_name_struct *alpha_id, kal_char delimiter);


/* sim group */

extern void l4c_smu_exe_restricted_access_rrsp(
                l4c_result_struct result,
                kal_uint8 sw1,
                kal_uint8 sw2,
                kal_uint16 length,
                kal_uint8 *response,
                peer_buff_struct *peer_buff_ptr);

extern void l4c_sim_authenticate_rrsp(
        l4c_result_struct result,
        kal_uint8 sw1,
        kal_uint8 sw2,
        kal_uint16 length,
        kal_uint8 *response,
        msg_type msg_id);

extern void l4c_sim_query_info_rrsp(
        l4c_result_struct result,
        sim_query_info_enum info_id,
        sim_query_info_field *info_data);


extern void l4c_smu_write_sim_rrsp(kal_bool result, l4c_result_struct response);        //mtk00468 add for CSIM write request

extern void l4c_ccsp_exe_rrsp(
                l4c_result_struct result,
                //mtk00468 add for CCSP read request's response
                              kal_uint16 length,
                kal_uint8 *data);

extern void l4c_smu_exe_dial_mode_rrsp(kal_bool result, kal_uint16 cause);      //mtk00468 add fo CSIMD request's response

extern void l4c_smu_get_shared_key_rrsp(kal_bool result, kal_uint8 envelope_type, kal_uint32 encrypted_key_len, kal_uint8 *encrypted_key);

extern void l4c_smu_get_slb_version_rrsp(kal_bool result, kal_uint8 *version);

extern void l4c_smu_get_modem_config_cnf_rrsp(kal_bool result, kal_uint16 length, kal_uint8 *buffer);

extern void l4c_smu_get_api_version_rrsp(kal_bool result, kal_uint8 *version);

extern void l4c_smu_get_sim_lock_status_rrsp(kal_bool result, kal_uint8 lock_state, kal_uint32 unlock_time_left, kal_uint8 num, kal_uint8 *sim_plmn_gid);

extern void l4c_smu_sml_status_rrsp(kal_bool result,kal_uint8*  state,kal_uint32*  retry_count,
		                    kal_uint8*  autolock_count,kal_uint8*  num_of_sets,kal_uint8*  total_size_of_cat,kal_uint8*  key_state,
		                    kal_uint8*  imsi,kal_uint8  is_valid_gid1,kal_uint8  ef_gid1,kal_uint8  is_valid_gid2,kal_uint8  ef_gid2,
		                    kal_uint8  digits_of_mnc);

extern void l4c_bt_sim_profile_rrsp(kal_uint16 result ,kal_uint8 action, kal_uint8 current_type, kal_uint8 supported_type, kal_uint16 length, kal_uint8 *response);
//mtk02514_nfc
////extern void l4c_sim_csim_rrsp(l4c_result_struct result, kal_uint16 length, kal_uint8 *response);
extern void l4c_sim_apdu_access_rrsp(l4c_result_struct result, kal_uint16 length, kal_uint8 *response,l4c_action_enum action);
/* MAUI_03082391 */

extern void l4c_sim_extended_apdu_access_inter_rrsp(kal_uint16 offset, kal_uint16 curr_length, kal_uint16 tot_length, kal_uint8 *response);

#ifdef __EUICC_SUPPORT__
extern void l4c_sim_apdu_res_block_rrsp(kal_uint16 rsp_len, kal_bool is_last, kal_uint16 status_word, kal_uint8 *buffer_block);
#endif

extern void l4c_sim_manage_channel_rrsp(l4c_result_struct result, kal_uint8 channel_id, sim_manage_channel_mode_enum op);

extern void l4c_sim_reset_rrsp(kal_bool is_sim_inserted, kal_bool is_ct3g_sim_inserted);

#ifdef __GSMCDMA_DUALSIM__
extern void l4c_sim_get_gsmcdma_dualsim_info_rrsp(kal_uint8 is_sim_inserted, kal_uint8 is_df_gsm_existed, kal_uint8 is_df_cdma_existed);
#endif

extern void l4c_op01_spn_read_rrsp(l4c_result_struct result, kal_uint8 spn_type, kal_uint8 *file, kal_uint16 length);

#ifdef __MOD_SMSAL__
/* sms group */

extern void l4c_sms_exe_send_rrsp(kal_bool result, kal_uint16 cause, kal_uint8 mr, kal_uint8 *scts,kal_uint8 src_id);

extern void l4c_sms_exe_read_msg_list_rrsp(
                kal_bool result,
                kal_uint16 cause,
                kal_uint16 length,
                kal_uint8 mti,
                kal_uint8 status,
                kal_uint16 index,
                kal_uint8 hex_dspl,
                l4_name_struct alpha_id,
                void *msg_header,
                void *data);

extern void l4c_sms_exe_read_msg_rrsp(
                kal_bool result,
                kal_uint16 cause,
                kal_uint16 length,
                kal_uint8 mti,
                kal_uint8 status,
                kal_uint8 hex_dspl,
                l4_name_struct alpha_id,
                void *msg_header,
                void *data);

extern void l4c_sms_exe_read_msg_list_pdu_rrsp(
                kal_uint8 status,
                kal_uint16 index,
                peer_buff_struct *data,
                kal_uint16 message_len);

extern void l4c_sms_exe_emgl_list_rrsp(kal_uint8 status, kal_uint16 index);

extern void l4c_sms_exe_read_msg_pdu_rrsp(kal_uint8 status, peer_buff_struct *data);

extern void l4c_sms_exe_write_msg_rrsp(kal_bool result, kal_uint16 cause, kal_uint16 index);

#endif /* __MOD_SMSAL__ */ 

extern void l4c_eq_read_nvram_rrsp(l4c_result_struct result, kal_uint16 length, kal_uint8 *data);

extern void l4c_eq_write_nvram_rrsp(l4c_result_struct result, kal_uint8 file_idx, kal_uint16 para);

extern void l4c_eq_read_nvram_rrsp(l4c_result_struct result, kal_uint16 length, kal_uint8 *data);

extern void l4c_eq_read_ms_sn_rrsp(l4c_result_struct result, kal_uint16 length, kal_uint8 *data);

extern void l4c_eq_read_ms_sv_rrsp(l4c_result_struct result, kal_uint16 length, kal_uint8 *data);

extern void l4c_eq_set_ms_sn_rrsp(l4c_result_struct result, kal_uint8 file_idx, kal_uint16 para);

extern void l4c_eq_set_language_rrsp(kal_bool result, kal_uint16 cause);

extern void l4c_eq_read_autotest_report_rrsp(kal_bool result, kal_uint16 length, kal_uint8 *data);

extern void l4c_eq_get_voleme_rrsp(kal_bool result, kal_uint8 vol_type, kal_uint8 vol_level);
extern void l4c_eq_get_gain_rrsp(kal_bool result, kal_uint8 gain);
extern void l4c_eq_get_audio_profile_rrsp(kal_bool result, audio_profile_struct audio_profile);
extern void l4c_eq_get_audio_param_rrsp(kal_bool result,audio_param_struct * audio_para);

#if defined(__AMRWB_LINK_SUPPORT__)
extern void l4c_eq_get_audio_wb_fir_rrsp(kal_uint8 result, audio_wb_speech_fir_struct* fir_param);

extern void l4c_eq_get_audio_wb_mode_rrsp(kal_uint8 result, audio_wb_speech_mode_struct *mode_param);
#endif

#if defined(__GEMINI__)
extern void l4c_edsim_nvram_read_cnf_rrsp(kal_bool result, kal_uint8* data);
extern void l4c_edsim_nvram_write_cnf_rrsp(kal_bool result);
#endif /* defined(__GEMINI__)*/


#ifdef __CSD_FAX__
extern void l4c_t30_general_rrsp(l4c_result_struct result);

extern void l4c_t30_act_rrsp(kal_uint8 result_code);

extern void l4c_t30_result_string_rrsp(kal_uint8 *result_string);
#endif /* __CSD_FAX__ */ 

#ifdef __WAP_SUPPORT
void l4c_wap_prof_query_req_rrsp(kal_uint8 res, kal_uint8 length, kal_uint8 *addition_info);
#endif /* __WAP_SUPPORT */ 

extern void l4c_eq_pmic_config_rrsp(kal_uint8 request_type, pmic_config_param_struct request);

#ifdef __CTM_SUPPORT__
#if defined(__CTM_AT_CMD_SUPPORT__) 
extern void l4c_ctm_open_rrsp(kal_bool result);
extern void l4c_ctm_close_rrsp(kal_bool result);
extern void l4c_ctm_connect_rrsp(kal_bool result);
extern void l4c_ctm_send_text_rrsp(kal_bool result);
extern void l4c_ctm_set_default_rrsp(kal_bool result, kal_bool is_turn_on, kal_uint8 ctm_interface);
extern void l4c_ctm_get_default_rrsp(kal_bool result, kal_bool is_turn_on, kal_uint8 ctm_interface);
extern void l4c_ctm_set_config_rrsp(kal_bool result);
extern void l4c_ctm_get_config_rrsp(
                kal_bool result,
                kal_uint16 para1,
                kal_uint16 para2,
                kal_uint16 para3,
                kal_uint16 para4,
                kal_uint16 para5);
#else
/* mtk01616_100130: dummy function */
#define l4c_ctm_open_rrsp(result) {}
#define l4c_ctm_close_rrsp(result) {}
#define l4c_ctm_connect_rrsp(result) {}
#define l4c_ctm_send_text_rrsp(result) {}
#define l4c_ctm_set_default_rrsp(result,is_turn_on,ctm_interface) {}
#define l4c_ctm_get_default_rrsp(result,is_turn_on,ctm_interface) {}
#define l4c_ctm_set_config_rrsp(result) {}
#define l4c_ctm_get_config_rrsp(result,para1,para2,para3,para4,para5) {}

#endif
#endif /* __CTM_SUPPORT__ */ 


extern void l4c_em_get_cell_lock_rrsp(kal_bool result, kal_uint32 enabled_bitmap, kal_bool band_indicator, kal_uint16 *arfcn, kal_uint32 mode);

extern void l4c_em_set_cell_lock_rrsp(kal_bool result);

#if defined(__MODEM_EM_MODE__)
#if defined(__CHANNEL_LOCK__)
void l4c_em_ch_lock_get_rrsp(kal_bool result, kal_uint8 mode, kal_uint8 act, 
    kal_uint8 band_indicator, kal_uint32 arfcn, kal_uint16 cell_id,kal_uint8 lock_mode);
void l4c_em_ch_lock_set_rrsp(kal_bool result);
#endif /* __CHANNEL_LOCK__ */
#endif /* __MODEM_EM_MODE__ */

extern void l4c_eq_reset_nvram_rrsp(l4c_result_struct result);

extern void rmmi_diag_nvm_read_rrsp(kal_uint8 src_id, kal_bool result, kal_uint8 func); //mtk02285_usb2

extern void l4c_em_get_conftest_para_rrsp(kal_bool result);

extern void l4c_eq_query_cal_data_dl_status_rrsp(kal_bool cal_data_valid);

#ifdef __MOBILE_BROADBAND_PROVISION_CONTEXT__
extern void rmmi_mbpc_read_result_code_fmttr(kal_uint8 src_id, nvram_ef_mobile_broadband_provision_context_struct* prov_cntxt, kal_uint8 entry_id);
#endif

#ifdef __MEDIATEK_SMART_QOS__
extern void rmmi_msqon_read_result_code_fmttr(kal_uint8 src_id, kal_bool is_msq_on);
extern void rmmi_msq_read_result_code_fmttr(kal_uint8 src_id, nvram_ef_msq_entry_struct* msq_entry);
#endif

#if defined(__2STAGE_NW_SELECTION__)
extern void l4c_nw_modem_resume_rrsp(kal_uint8 session_id);
#endif

extern void l4c_get_thermal_info_rrsp(kal_uint8 current_rat, kal_int16 temperature, kal_int8 tx_power);

/* __IMS_SUPPORT__ */
extern void l4c_sms_exe_ims_send_rrsp(kal_bool result, kal_uint16 cause, kal_uint8 mr, l4_addr_bcd_struct *sca, peer_buff_struct *peer_buff_ptr, kal_uint8 src_id);
extern void l4c_eval_get_ssac_param_rrsp(kal_uint8 barring_factor_voice, kal_uint8 barring_factor_video, kal_uint8 barring_time_voice, kal_uint8 barring_time_video);

extern void l4c_em_set_rx_path_rrsp(kal_uint8 src_id, kal_uint8 rx_path);

extern void l4c_sat_envelope_rrsp(kal_bool card_remove, kal_uint16 status_word, kal_uint16 length, kal_uint8 *envelope_rsp);

extern void l4c_force_tx_ant_rrsp(kal_uint8 src_id, kal_bool result, force_tx_ant_cmd_type_e cmd_type, kal_uint8 rat, kal_uint8 ant_idx);
extern void l4c_sat_send_sms_rrsp(kal_uint8 src_id, kal_bool result, kal_uint8 res, kal_uint8 cause);

extern void l4c_sat_profile_activate_rrsp(kal_uint8 src_id, kal_bool result, kal_bool info_query, cusats_uicc_state_enum uicc_state);

extern void l4c_sat_profile_write_rrsp(kal_bool result, kal_uint8 st, kal_uint8 *profile, kal_uint8 profile_len);

extern void l4c_rac_vzwmru_read_rrsp(local_para_struct *local_para_ptr);
extern void l4c_ps_get_vzw_apn_table_rrsp(kal_uint8 src_id, tcm_pam_get_vzw_apn_table_cnf_struct *param_ptr);
extern void l4c_ps_get_vzw_apn_params_rrsp(kal_uint8 src_id, tcm_pam_get_vzw_params_cnf_struct *param_ptr);
extern void l4c_ps_get_apn_rdp_rrsp(kal_uint8 src_id, kal_uint8 *apn, kal_uint32 timer);

extern void l4c_ps_exe_result_rrsp(kal_uint8 src_id, kal_bool result, kal_uint16 cause);

extern void l4c_ps_exe_general_rrsp(kal_uint8 src_id, rmmi_rsp_type_enum result, kal_uint16 cause);

extern void l4c_ps_final_generator_rrsp(kal_uint8 src_id, kal_bool ret_val, kal_uint8 *buffer, kal_uint16 string_length);

extern void l4c_lce_report_rrsp(kal_uint8 src_id, kal_uint8 lce_status, kal_uint32 act_int);
extern void l4c_lce_pulldata_rrsp(kal_uint8 src_id, kal_uint8 conf_level, kal_uint8 lce_suspend, kal_uint32 last_hop_cap);

extern void l4c_sim_set_vsim_mode_rrsp(kal_bool result, kal_uint8 cause, kal_bool  switch_on, kal_uint8 profile_id, kal_uint8 vsim_type);

extern void l4c_sim_get_vsim_rsa_pubkey_rrsp(kal_bool result, kal_uint16 pubkey_len, kal_uint8 *pubkey);

extern void l4c_sim_set_vsim_file_rrsp(kal_bool result, kal_uint8 cause, kal_uint8 profile_id, kal_uint16 file_id, kal_uint16 meta_len, kal_uint16 data_len);

extern void l4c_sim_set_vsim_profile_rrsp(kal_bool result, kal_uint8 fcs);

extern void l4c_eval_lteca_mode_read_rrsp(l4c_source_id_enum src_id, kal_bool result, kal_uint16 lteca_mode_setting);

extern void l4c_eval_ca_band_list_read_rrsp(l4c_source_id_enum src_id, kal_bool result, kal_char *ca_comb_list);

extern void l4c_omadm_read_rrsp(l4c_source_id_enum src_id, kal_bool result, kal_uint32 omadm_node_value);
extern void l4c_sim_read_dir_rrsp(sim_cmd_result_enum result, kal_uint8 *dir_content, kal_uint16 length, kal_uint8 active_app, kal_uint8 *aid, kal_uint8 option);

extern void l4c_sms_exe_ims_send_from_storage_rrsp(kal_uint8 result, kal_uint8 mr, 
                                                   smsal_domain_enum domain, l4_addr_bcd_struct *sca, 
                                                   peer_buff_struct *peer_buff_ptr, kal_uint8 src_id);


extern void l4c_get_custom_plmn_list_rrsp(custom_plmn_type_enum type, kal_uint16 no_plmn_entry, kal_uint8 *plmn_data);

extern void l4c_sms_exe_ims_update_msgbox_rrsp(kal_uint8 result, kal_uint8 src_id);

#ifdef __LTE_RAT__
extern void l4c_vzw_antenna_info_rrsp(kal_uint8 src_id, 
                                      kal_bool result, 
                                      kal_bool is_pri, 
                                      kal_uint16 pri_rssi, 
                                      kal_bool is_sec, 
                                      kal_uint16 sec_rssi, 
                                      kal_bool is_relative_phase_valid,
                                      kal_uint16 relative_phase);

extern void l4c_vzw_antenna_config_rrsp(kal_uint8 src_id, kal_bool result);
extern void l4c_vzw_antenna_config_status_rrsp(kal_uint8 src_id, kal_bool result, kal_uint8 ue_behavior);
extern void l4c_nw_1xrtt_cell_list_rrsp(l4crac_1xrtt_cell_list_cnf_struct *msg_ptr);
#endif

extern void l4c_nw_get_pseudo_bs_list_rrsp(l4c_result_struct result, kal_uint8 src_id, kal_uint8 count, l4c_pseudo_bs_info_struct *list);

extern void l4c_txrx_active_time_rrsp(kal_uint8 src_id, kal_uint32 *tx_mode_time, kal_uint32 rx_mode_time, kal_uint32 sleep_time, kal_uint32 idle_time);

#ifdef __ATERFTX_ERROR_HANDLE_ENHANCE__
extern void l4c_c2k_rf_test_rrsp(kal_uint8 src_id, kal_bool result, kal_uint8 mode, kal_int16 main_rssi, kal_int16 div_rssi, ps_cause_enum cause);
#else
extern void l4c_c2k_rf_test_rrsp(kal_uint8 src_id, kal_bool result, kal_uint8 mode, kal_int16 main_rssi, kal_int16 div_rssi);
#endif
extern void l4c_em_mmrf_mipi_bpi_action_rrsp(kal_uint8 src_id,
                                             em_mmrf_type_enum type,
                                             em_mmrf_action_enum action,
                                             em_mmrf_error_code_enum result,
                                             kal_uint32 data1, kal_uint32 data2);

extern void l4c_egmc_set_rrsp(kal_uint16 src_id, kal_bool result, kal_uint8 *config_str, l4c_general_modem_configure_struct* data);
extern void l4c_egmc_query_rrsp(kal_uint16 src_id, kal_uint8 *config_str, l4c_general_modem_configure_struct* data);

extern void l4c_get_last_rat_select_ind_read_rrsp(l4c_source_id_enum src_id, kal_uint32 gmss_rat, plmn_id_struct *plmn_id, kal_uint8 status, kal_uint32 curr_reported_rat, kal_bool is_home_country);

#ifdef __NBR_CELL_INFO__
extern kal_bool l4c_serving_band_arfcn_info_rrsp(void);
#endif /* __NBR_CELL_INFO__ */

extern void l4c_eval_lte_tm9_read_rrsp(l4c_source_id_enum src_id,kal_bool result,kal_uint8 lte_tm9_fdd_setting, kal_uint8 lte_tm9_tdd_setting);

extern void l4c_gsm_tx_pwr_rrsp(kal_uint8 src_id, kal_bool result, l1_force_pcl_cmd_type_enum cmd_type, 
                                 kal_uint8 gsm_band, kal_int8 pcl_value, kal_uint8 mod_type, kal_int16 apc_dac);
#if defined(__SUBSIDY_LOCK__) || defined(__SMB_SIMME_LOCK__)
extern void l4c_smu_sl_get_sim_lock_status_rrsp(kal_bool result, kal_uint8 lock_state);
#endif /* __SUBSIDY_LOCK__ || __SMB_SIMME_LOCK__ */
extern void atci_l4bpwr_epof_cnf(kal_uint8 src_id, kal_bool result);

extern void atci_l4bpwr_cfun_0_cnf(kal_uint8 src_id, kal_bool result);
extern void l4c_smu_sml_get_lock_codes_rrsp(l4csmu_sml_get_lock_codes_cnf_struct *msg_ptr);
extern void l4c_smu_sml_set_custom_personalization_rrsp(kal_bool result);

extern void l4c_smu_update_gblob_lock_rule_rrsp(kal_bool result);
extern void l4c_smu_update_gblob_data_rrsp(kal_bool result);
extern void l4c_smu_update_gblob_lock_rule_rrsp(kal_bool result);
extern void l4c_smu_update_gblob_data_rrsp(kal_bool result);
extern void l4c_smu_gblob_dev_lock_verify_rrsp(kal_bool result, kal_uint16 cause);
extern void l4c_smu_update_gblob_dev_lock_algo_rrsp(kal_bool result);
extern void l4c_smu_update_gblob_imei_rrsp(kal_bool result);
extern void l4c_smu_get_gblob_dev_lock_status_rrsp(kal_uint8 lock_state, kal_uint8 algo, kal_uint32 max_count, kal_uint32 remain_count);

#ifdef __CARRIER_RESTRICTION__
extern void l4c_smu_crrst_status_rrsp(kal_bool result,
                                           smu_crrst_state_enum state,
                                           kal_uint8 multi_sim_policy,
                                           kal_uint8 allowed_carriers_prioritized,
                                           smu_carrier_restriction_list_struct* white_list,
                                           smu_carrier_restriction_list_struct* black_list);
#endif

extern void l4c_freq_scan_rrsp(freq_scan_output_struct* output_ptr, l4c_rac_response_enum response);

#ifdef __VZW_RSU_SUPPORT__
extern void l4c_smu_vzw_rsu_initiate_rrsp(l4c_source_id_enum src_id, kal_bool result, sml_vzw_rsu_req_msg_struct *request_msg_p, kal_uint8* hmac);
extern void l4c_smu_vzw_rsu_response_rrsp(l4c_source_id_enum src_id, kal_bool result, smu_vzw_rsu_status_ind_struct *status_ind);
extern void l4c_smu_vzw_rsu_delay_timer_rrsp(l4c_source_id_enum src_id, sml_vzw_rsu_unlock_timer_resp_enum result, kal_uint16 unlock_timer);
extern void l4c_smu_vzw_rsu_data_reset_rrsp(l4c_source_id_enum src_id, kal_bool result);
#endif

#ifdef __SBP_OP129_SIMME_LOCK__
extern void l4c_smu_op129_simlock_data_rrsp(kal_uint8 list_type, kal_uint16 *triplet_number, kal_uint8 *simlock_data);
#endif
void l4c_plmn_list_wss_rrsp(l4c_rac_response_enum result, kal_uint8 length, l4c_rat_plmn_info_struct *list);
#endif /* _RMMI_RSP_H */ /* rmmi_rsp.c */

