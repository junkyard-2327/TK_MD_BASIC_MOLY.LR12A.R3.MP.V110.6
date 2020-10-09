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
 * l4c_nw_msg.h
 *
 * Project:
 * --------
 *   MT6208
 *
 * Description:
 * ------------
 *   This file is intends for �K.
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

#ifndef _L4C_NW_MSG_H
#define _L4C_NW_MSG_H

#include "kal_general_types.h"
#include "ps_public_enum.h"   
#include "kal_public_defs.h"   

extern void l4crac_act_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr);

extern void l4crac_reg_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr);

extern void l4crac_ps_reg_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr);

extern void l4crac_dereg_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr);

extern void l4crac_plmn_list_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr);

extern void l4crac_class_change_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr);

//extern void l4crac_set_preferred_band_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr);

extern void l4crac_reg_ind_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr);

extern void l4crac_reg_state_ind_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr);

extern void l4crac_reg_cause_ind_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr); // __NW_REG_CAUSE_REPORT__ mtk02285 20090310

extern void l4crac_invalid_sim_recover_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr);

//extern void l4crac_rx_level_ind_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr); //rx_level, mtk02285, remove old interface

extern void l4crac_nw_info_ind_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr);

extern void l4crac_cipher_ind_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr);

extern void l4crac_nw_ecc_ind_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr);

extern void l4crac_rfoff_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr);

extern void l4crac_plmn_search_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr);

extern void l4crac_set_rat_mode_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr);

extern void l4crac_plmn_list_stop_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr);

extern void l4crac_set_prefer_rat_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr);

extern void l4crac_end_ps_data_session_cnf_hdlr(local_para_struct * local_para_ptr, peer_buff_struct * peer_buff_ptr);

extern void l4crac_end_ps_data_session_ind_hdlr(local_para_struct * local_para_ptr, peer_buff_struct * peer_buff_ptr);

extern void l4crac_search_normal_finish_ind_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr);
extern void l4crac_mmrr_service_status_ind_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr);

extern void l4crac_ps_event_report_ind_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr);

extern void l4c_ps_abm_nw_attach_ind(kal_uint8  status,kal_uint8* plmn,kal_uint8  gsm_state,
		kal_uint8  gprs_state,l4c_gprs_status_enum  gprs_status,kal_uint8  rat,kal_uint8  cell_support_egprs,kal_uint8*  lac);

extern void l4crac_set_roaming_mode_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr);

extern void l4crac_csg_list_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr);
extern void l4crac_csg_list_stop_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr);

#if defined(__REPORT_AVAILABLE_PLMN__)
extern void l4crac_plmn_list_ind_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr);
#endif

#if defined(__2STAGE_NW_SELECTION__)
extern void l4crac_suspend_status_ind_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr);
extern void l4crac_susp_resu_update_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr);
#endif

extern void l4crac_set_voice_domain_preference_cnf_hdlr(local_para_struct * local_para_ptr, peer_buff_struct * peer_buff_ptr);
extern void l4crac_set_ue_usage_cnf_hdlr(local_para_struct * local_para_ptr, peer_buff_struct * peer_buff_ptr);
extern void l4crac_set_ims_voice_availability_cnf_hdlr(local_para_struct * local_para_ptr, peer_buff_struct * peer_buff_ptr);
extern void l4crac_set_ims_sms_availability_cnf_hdlr(local_para_struct * local_para_ptr, peer_buff_struct * peer_buff_ptr);
extern void l4crac_set_ue_mode_cnf_hdlr(local_para_struct * local_para_ptr, peer_buff_struct * peer_buff_ptr);
extern void l4crac_ims_scm_info_cnf_hdlr(local_para_struct * local_para_ptr, peer_buff_struct * peer_buff_ptr);

extern void l4c_rrce_pch_txrx_ind_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr);
extern void l4crac_reset_ota_ctxt_cnf_hdlr(local_para_struct * local_para_ptr, peer_buff_struct * peer_buff_ptr);

#if defined(__LTE_RAT__)
extern void l4cesm_rat_change_ind_hdlr(local_para_struct * local_para_ptr, peer_buff_struct * peer_buff_ptr);
extern void l4cesm_rat_change_cnf_hdlr(local_para_struct * local_para_ptr, peer_buff_struct * peer_buff_ptr);
extern void l4c_eval_cell_power_level_ind_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr);
extern void l4c_eval_sr_failure_ind_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr);
extern void l4csm_rat_change_ind_hdlr(local_para_struct * local_para_ptr, peer_buff_struct * peer_buff_ptr);
extern void l4csm_rat_change_cnf_hdlr(local_para_struct * local_para_ptr, peer_buff_struct * peer_buff_ptr);
extern void l4c_eval_time_info_ind_hdlr(local_para_struct * local_para_ptr, peer_buff_struct * peer_buff_ptr);
extern void l4c_eval_connected_drb_ind_hdlr(local_para_struct * local_para_ptr, peer_buff_struct * peer_buff_ptr);
extern void l4c_eval_lteca_mode_setting_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct * peer_buff_ptr);
extern void l4c_eval_modulation_update_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct * peer_buff_ptr);
extern void l4c_eval_omadm_update_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct * peer_buff_ptr);
extern void l4crac_ca_info_ind_hdlr(local_para_struct *local_para_ptr, peer_buff_struct * peer_buff_ptr);
extern void l4c_nw_power_level_threshold_ind_hdlr(local_para_struct *local_para_ptr, peer_buff_struct * peer_buff_ptr);
extern void l4c_eval_lte_tm9_fdd_tdd_setting_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct * peer_buff_ptr);
extern void l4c_nw_lteca_band_comb_list_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct * peer_buff_ptr);

#endif /* __LTE_RAT__ */
extern void l4c_rsva_suspend_service_ind_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr);

extern void l4c_rsva_resume_service_ind_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr);

extern void l4c_rsva_abort_service_ind_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr);

extern void l4c_rsva_abort_service_complete_ind_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr);

extern void l4cps_rf_info_ind_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr);

extern void l4c_rrm_rrms_state_ind_hdlr(local_para_struct *local_para_ptr);
extern void l4c_rrm_rrms_apc_ctrl_info_cnf_hdlr(local_para_struct *local_para_ptr);
extern void l4c_rrm_rrms_pseudo_bs_detect_ind_hdlr(local_para_struct *local_para_ptr);
extern void l4c_rrm_rrms_pseudo_bs_query_cnf_hdlr(local_para_struct *local_para_ptr);

extern void l4c_rrce_rrc_state_ind_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr);

extern void l4c_eval_errc_state_ind_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr);

extern void l4crac_set_sms_preference_cnf_hdlr(local_para_struct * local_para_ptr, peer_buff_struct * peer_buff_ptr);

extern void l4crac_set_sms_over_sgs_cnf_hdlr(local_para_struct * local_para_ptr, peer_buff_struct * peer_buff_ptr);

extern void l4crac_update_sms_preference_ind_hdlr(local_para_struct * local_para_ptr, peer_buff_struct * peer_buff_ptr);

extern void l4crac_update_sms_over_sgs_cfg_ind_hdlr(local_para_struct * local_para_ptr, peer_buff_struct * peer_buff_ptr);

extern void l4crac_ims_reg_status_update_cnf_hdlr(local_para_struct * local_para_ptr, peer_buff_struct * peer_buff_ptr);

extern void l4crac_nw_feature_ind_hdlr(local_para_struct * local_para_ptr, peer_buff_struct * peer_buff_ptr);

extern void l4crac_uemode_param_update_ind_hdlr(local_para_struct * local_para_ptr, peer_buff_struct * peer_buff_ptr);

extern void l4crac_plmn_status_ind_hdlr(local_para_struct * local_para_ptr, peer_buff_struct * peer_buff_ptr);

extern void l4crac_ims_service_ind_hdlr(local_para_struct * local_para_ptr, peer_buff_struct * peer_buff_ptr);

extern void l4cps_gas_auto_fast_return_ind_hdlr(local_para_struct * local_para_ptr, peer_buff_struct * peer_buff_ptr);
extern void l4cps_uas_auto_fast_return_ind_hdlr(local_para_struct * local_para_ptr, peer_buff_struct * peer_buff_ptr);

extern void l4c_eval_srvcc_status_update_ind_hdlr(local_para_struct * local_para_ptr, peer_buff_struct * peer_buff_ptr);

extern void l4c_eval_ims_sys_info_ind_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr);

extern void l4c_eval_barring_status_ind_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr);

extern void l4crac_set_recovery_search_timer_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr);
extern void l4crac_get_recovery_search_timer_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr);
extern void l4crac_camped_cell_info_ind_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr);

extern void l4crac_set_ct_mode_cnf_hdlr(local_para_struct * local_para_ptr, peer_buff_struct * peer_buff_ptr);
extern void l4crac_active_sim_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr);
#ifdef __VOLTE_SUPPORT__
extern void l4c_eval_get_ssac_param_cnf_hdlr(local_para_struct * local_para_ptr, peer_buff_struct * peer_buff_ptr);
#endif

extern void l4crac_set_ims_voice_termination_cnf_hdlr(local_para_struct * local_para_ptr, peer_buff_struct * peer_buff_ptr);

extern void l4crac_restart_clear_code_33_proc_ind_hdlr(local_para_struct * local_para_ptr, peer_buff_struct * peer_buff_ptr);

extern void l4crac_disable_eutran_cnf_hdlr(local_para_struct * local_para_ptr, peer_buff_struct * peer_buff_ptr);

extern void l4crac_vzwmru_update_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct * peer_buff_ptr);
extern void l4crac_get_custom_plmn_list_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct * peer_buff_ptr);

extern void l4crac_omadm_update_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct * peer_buff_ptr);

/* --- __OP12_CDMA__LESS feature --- */
extern void l4crac_gmss_set_plmn_barring_timer_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr);
extern void l4crac_gmss_get_plmn_barring_timer_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr);
extern void l4crac_ims_call_end_status_ind_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr);
/* --- End of __OP12_CDMA_LESS__ feature --- */

#ifdef __MODEM_EM_MODE__
void l4_send_em_rat_changed_ind(kal_uint8 irat_type, kal_uint8 source_rat, kal_uint8 target_rat);
#endif

extern void l4crac_reg_combined_cause_ind_hdlr(local_para_struct * local_para_ptr, peer_buff_struct * peer_buff_ptr);
extern void l4crac_rat_select_ind_hdlr(local_para_struct * local_para_ptr, peer_buff_struct * peer_buff_ptr);

extern void l4crac_reported_rat_change_ind_hdlr(local_para_struct * local_para_ptr, peer_buff_struct * peer_buff_ptr);

extern void l4crac_duplex_mode_change_ind_hdlr(local_para_struct * local_para_ptr, peer_buff_struct * peer_buff_ptr);

extern void l4crac_duplex_mode_change_cnf_hdlr(local_para_struct * local_para_ptr, peer_buff_struct * peer_buff_ptr);

extern void l4crac_duplex_mode_required_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr);

extern void l4crac_set_save_rac_preference_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr);

extern void l4cas_set_save_rac_preference_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr);

extern void l4crac_clear_mru_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr);


extern void l4c_eval_erlm_report_ind_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr);
extern void l4c_eval_erlq_report_ind_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr);


extern void l4crac_set_mru_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr);

extern void l4crac_nw_reg_status_ind_hdlr(local_para_struct * local_para_ptr, peer_buff_struct * peer_buff_ptr);
extern void l4crac_set_aux_plmn_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr);

extern void l4c_eval_drx_update_cnf_hdlr(local_para_struct *local_para_ptr);
extern void l4c_eval_drx_update_ind_hdlr(local_para_struct *local_para_ptr);
extern void l4c_eval_pcell_info_ind_hdlr(local_para_struct *local_para_ptr);

extern void l4crac_set_hvolte_mode_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr);

extern void l4crac_c2k_service_ind_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr);

extern void l4c_nw_c2k_cs_service_ind_hdlr(local_para_struct *local_para_ptr);

extern void l4crac_c2k_cell_info_ind_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr);

extern void l4crac_1x_conn_status_ind_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr);

extern void l4crac_emc_service_ind_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr);

extern void l4c_eval_sr_reject_ind_hdlr(local_para_struct * local_para_ptr, peer_buff_struct * peer_buff_ptr);

extern void l4c_eval_rach_reject_ind_hdlr(local_para_struct * local_para_ptr, peer_buff_struct * peer_buff_ptr);

extern void l4crac_emc_detach_ind_hdlr(local_para_struct * local_para_ptr, peer_buff_struct * peer_buff_ptr);

extern void l4c_eval_emm_msg_ind_hdlr(local_para_struct * local_para_ptr, peer_buff_struct * peer_buff_ptr);

extern void l4c_eval_establishment_ind_hdlr(local_para_struct * local_para_ptr,peer_buff_struct * peer_buff_ptr);
extern void l4crac_ims_reg_timeout_ind_hdlr(local_para_struct * local_para_ptr, peer_buff_struct * peer_buff_ptr);

extern void l4c_nw_c2k_rf_off_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr);
extern void l4crac_lte_bandwidth_ind_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr);
extern void l4crac_packet_paging_ind_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr);
//#if defined(__FAST_ROAMING_SEARCH__)
extern void l4crac_plmn_found_ind_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr);
//#endif
extern void l4crac_rrc_conn_rel_ind_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr);

extern void l4cas_sib19_info_hdlr(local_para_struct * local_para_ptr, peer_buff_struct * peer_buff_ptr);


extern void l4crac_active_rat_ind_hdlr(local_para_struct * local_para_ptr,peer_buff_struct * peer_buff_ptr);

extern void l4crac_suspend_egreg_update_ind_hdlr(local_para_struct * local_para_ptr,peer_buff_struct * peer_buff_ptr);

extern void l4c_css_active_rat_ind_hdlr(local_para_struct * local_para_ptr,peer_buff_struct * peer_buff_ptr);

extern void l4crac_send_esr_ind_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr);

#ifdef __CDMA2000_RAT__

extern void l4c_c2k_l4c_mdstatus_update_ind_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr);

extern void l4c_c2k_roaming_setting_sync_req_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr);

extern void l4c_nw_c2k_cell_info_ind_hdlr(local_para_struct *local_para_ptr);

#endif /* __CDMA2000_RAT__ */


#ifdef __REMOTE_SIM__
extern void l4crac_rsim_auth_abort_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr);
extern void l4crac_auth_finish_ind_hdlr(local_para_struct * local_para_ptr, peer_buff_struct * peer_buff_ptr);
extern void l4c_aka_resource_release_cnf_hdlr(local_para_struct * local_para_ptr, peer_buff_struct * peer_buff_ptr);
extern void l4crac_virtual_mode_ind_hdlr(local_para_struct * local_para_ptr, peer_buff_struct * peer_buff_ptr);

#endif

extern void l4crac_c2k_csfb_start_ind_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr);
extern void l4crac_hvolte_mode_change_ind_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr);
extern void l4crac_mt_paging_ind_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr);
extern void l4c_nw_get_latest_rat_select_ind_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct * peer_buff_ptr);
extern void l4c_nw_c2k_ecbm_mode_ind_hdlr(local_para_struct *local_para_ptr);
extern void l4c_sim_lock_req_hdlr(local_para_struct * local_para_ptr);

extern void l4c_mmrf_bootup_rfc_info_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr);

extern void l4c_nw_pwl_thrhd_ind_hdlr(l4c_rat_enum rat, local_para_struct *local_para_ptr, peer_buff_struct * peer_buff_ptr);

extern void l4c_nw_ps_attach_req_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr);
extern void l4c_nw_ps_detach_req_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr);
extern void l4c_nw_l4bnw_ps_type_config_req_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr);
extern void l4c_nw_ps_reattach_config_req_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr);
extern void l4c_nw_imc_ecbm_start_rsp_hdlr(void);
extern void l4c_nw_imc_ecbm_end_rsp_hdlr(void);

#ifdef __CHR_AB_INFO__
extern void l4c_nw_epsnlte_get_mrs_info(void);
#endif /* __CHR_AB_INFO__ */

extern void l4c_peer_plmn_found_ind_hdlr(local_para_struct * local_para_ptr, peer_buff_struct * peer_buff_ptr);

#ifdef __IMS_SUPPORT__
extern void l4c_iwlan_ims_cap_ind_hdlr(local_para_struct * local_para_ptr, peer_buff_struct * peer_buff_ptr);
#endif /* __IMS_SUPPORT__ */

#ifdef __LTE_RAT__
extern void l4crac_1xrtt_cell_list_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct * peer_buff_ptr);
#endif

extern void l4crac_c2k_silent_redial_ind_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr);

extern void l4c_nw_c2k_set_pwl_thrhd_cnf_hdlr(local_para_struct * local_para_ptr);
extern void l4c_nw_c2k_pwr_level_ind_hdlr(local_para_struct * local_para_ptr);
extern void l4crac_illegal_me_ind_hdlr(local_para_struct * local_para_ptr,peer_buff_struct * peer_buff_ptr);
extern void l4c_imei_meid_lock_req_hdlr(local_para_struct * local_para_ptr ,peer_buff_struct * peer_buff_ptr);
extern void l4c_op01_lock_req_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr);

#ifdef __SMB_SIMME_LOCK__
extern void l4c_l4bpwr_service_mode_req_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr);
extern void l4c_l4bnw_service_mode_req_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr);
#endif /* __SMB_SIMME_LOCK__ */

extern void l4c_eval_cs_service_notification_ind_hdlr(void);
extern void l4c_imc_cs_service_notification_rsp_hdlr(local_para_struct * local_para_ptr, peer_buff_struct * peer_buff_ptr);

#ifdef __ARFCN_TO_CAMERA_SUPPORT__
extern void l4c_rrm_channel_param_ind_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr);
extern void l4c_rrc_cur_freq_ind_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr);
#endif

extern void l4crac_csfb_page_ind_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr);
extern void l4crac_csfb_result_ind_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr);

#ifdef __MODEM_EM_MODE__
extern void l4c_send_em_ecsq_ind(
                kal_uint8 sig1,
                kal_uint8 sig2,
                kal_uint8 ber,
                kal_int32 rssi_in_qdbm,
                kal_int32 RSCP_in_qdbm,
                kal_int32 EcN0_in_qdbm,
                kal_int32 RSRQ_in_qdbm,
                kal_int32 RSRP_in_qdbm,
                kal_int16 RS_SNR_in_qdb,
                kal_int16 serv_band,
                l4c_rat_enum rat);
#endif

extern void l4c_nw_set_ia_pdn_info(l4c_ia_pdn_info_struct* ia_pdn_info);
extern void l4crac_nw_reject_ind_hdlr(local_para_struct *local_para_ptr);
extern void l4cas_cell_power_thres_ind_hdlr(local_para_struct * local_para_ptr, peer_buff_struct * peer_buff_ptr);

#endif /* _L4C_NW_MSG_H */ /* l4c_nw_msg.h */

