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
 * l4c_nw_cmd.h
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

#ifndef _L4C_NW_CMD_H
#define _L4C_NW_CMD_H

#include "l4c_common_enum.h"
#include "kal_general_types.h"
#include "ps_public_enum.h"
#include "mcd_l3_inc_struct.h"

#include "l3_inc_enums.h"

#include "ps_public_struct.h"
#include "mcd_l3_inc_struct.h"
#include "l4c_context.h"
#include "l4crac_enums.h"
#include "ims_common_def.h"

typedef enum
{
    RAC_STATUS_DETACHED,
    RAC_STATUS_ATTACHED
} l4crac_attach_status_enum;

typedef enum
{
    AUTO_SELECT,
    MANUAL_SEL,
    DEREG,
    MANUAL_THEN_AUTO = 4
} l4crac_cops_opcode_enum;

/* diamond, 2005/07/05 Flight mode */
typedef enum
{
    FLIGHTMODE_OFF = 0,
    FLIGHTMODE_SILENT,
    FLIGHTMODE_QUERY
} l4cmmi_flightmode_enum;

extern kal_bool l4c_nw_get_imei_req(kal_uint8 src_id, kal_uint8 *imei, kal_uint8 *svn);

extern kal_bool l4c_nw_powroff_detach_req(kal_uint8 src_id);

extern kal_bool l4c_nw_end_ps_data_session_req(kal_uint8 src_id, kal_uint8 force_send_SCRI, kal_uint8 trigger_cause);

extern kal_bool l4c_nw_exe_att_req(kal_uint8 src_id, kal_uint8 type, kal_uint8 opcode, kal_bool is_poweroff);

extern kal_bool l4c_nw_abort_att_req(kal_uint8 src_id, kal_uint8 connect_type, kal_bool ps_detach);

extern kal_bool l4c_nw_get_attach_status_req(kal_uint8 src_id, kal_uint8 type, kal_uint8 *status);
extern kal_bool l4c_nw_set_gprs_connect_type_req(kal_uint8 src_id, l4c_gprs_connect_type_enum type);

extern kal_bool l4c_nw_get_gprs_connect_type_req( /* l4c_gprs_connect_type_enum */ kal_uint8 *type);
extern kal_bool l4c_nw_set_and_trigger_auto_attach_req(kal_uint8 src_id);
extern kal_bool l4c_nw_get_edge_mode_req(kal_uint8* buffer);
extern kal_bool l4c_nw_set_edge_mode_req(kal_uint8 src_id, kal_uint8 edge_mode);
extern kal_bool l4c_nw_set_hspa_mode_req(kal_uint8 src_id, kal_uint8 hspa_mode, kal_uint8 apply_mode); //mtk02285, hspa_mmi
extern kal_bool l4c_nw_get_hspa_mode_req(kal_uint8 src_id, kal_uint8 * hspa_mode); //mtk02285, hspa_mmi

extern l4c_hspa_preference_enum l4c_nw_get_max_hspa_support_mode(void);

extern kal_bool l4c_nw_exe_gprs_connection_type(void);

extern kal_bool l4c_nw_set_class_req(kal_uint8 src_id, kal_uint8 type);

extern kal_bool l4c_nw_get_class_req(kal_uint8 src_id, kal_uint8 *type);

extern kal_bool l4c_nw_set_sel_mode_req(kal_uint8 src_id, kal_uint8 mode);

extern kal_bool l4c_nw_get_sel_mode_req(kal_uint8 src_id, kal_uint8 *mode);

extern kal_bool l4c_nw_set_gprs_transfer_preference_req(kal_uint8 src_id, kal_uint8 prefer);

extern kal_bool l4c_nw_get_gprs_transfer_preference_req(kal_uint8 src_id, kal_uint8 * prefer);

extern kal_bool l4c_nw_exe_cops_req(kal_uint8 src_id, kal_uint8 opcode, kal_uint8 *oper, kal_uint8 rat, kal_uint32 factory_mode_arfcn, kal_uint8 preference); 

extern kal_bool l4c_nw_get_plmn_list_req(kal_uint8 src_id, l4c_action_enum action);

extern kal_bool l4c_nw_abort_plmn_list_req(kal_uint8 src_id);

extern kal_bool l4c_nw_get_current_oper_req(kal_uint8 src_id, kal_uint8 *oper);

extern kal_bool l4c_nw_get_signal_level_req(kal_uint8 src_id, kal_uint8 *rssi, kal_uint8 *ver);

extern kal_bool l4c_nw_get_extended_signal_level_req(kal_uint8 src_id, l4c_rat_enum rat, kal_uint8 *sig1, kal_uint8 *sig2);

extern kal_bool l4a_nw_set_preferred_band_req (kal_uint8 src_id,
                              kal_uint8 gsm_band, kal_uint8 *umts_fdd_band);

extern kal_bool l4c_nw_set_preferred_band_req (kal_uint8 src_id,
                                       kal_uint8 gsm_band, 
                                       kal_uint32 umts_band,
                                       kal_uint32 *lte_band);

extern kal_bool l4c_nw_get_band_req(kal_uint8 src_id,
                             kal_uint8 *gsm_band,
                             kal_uint32 *umts_band,
                             kal_uint32 *lte_band,
                             kal_uint8 *supported_gsm_band,
                             kal_uint32 *supported_umts_fdd_band,
                             kal_uint32 *supported_lte_band);


extern kal_bool l4c_nw_lteca_band_comb_list_req(l4c_source_id_enum src_id,kal_uint8 cmd_type,kal_uint8 list_type,kal_char *ca_comb_list);

extern kal_bool l4c_nw_lteca_mode_read_req (kal_uint8 src_id);

extern kal_bool l4c_nw_lteca_mode_set_req (l4c_source_id_enum src_id, kal_uint16 lteca_mode_setting);

extern kal_bool l4c_nw_modulation_mode_set_req (l4c_source_id_enum src_id, lte_modulation_mode_enum mode, signal_modulation_enum modulation, link_direction_enum direction);

extern kal_bool l4c_nw_omadm_read_req (kal_uint8 src_id, omadm_node_type_enum omadm_node_type);

extern kal_bool l4c_nw_omadm_set_req (l4c_source_id_enum src_id, omadm_node_type_enum omadm_node_type, kal_uint32 omadm_node_value);

extern void l4c_nw_sim_mode_switch_start_req(kal_uint8 src_id);

extern void l4c_nw_sim_mode_switch_stop_req(kal_uint8 src_id);

extern kal_bool l4c_nw_cfun_state_req(kal_uint8 src_id, kal_uint8 cfun_state);

extern kal_bool l4c_nw_efun_state_req(kal_uint8 src_id, kal_uint8 efun_state, rfoff_cause_enum efun_cause);

extern l4c_rat_enum l4c_nw_check_ef_rat_mode(void);

extern kal_bool l4c_nw_get_rat_mode_req(kal_uint8 src_id, kal_uint8 *rat_mode);

extern kal_bool l4c_nw_get_rat_mode_ext_req(kal_uint8 src_id, kal_uint8 *rat_mode, kal_uint8 *prefer_rat);

extern kal_bool l4c_nw_set_rat_mode_req(kal_uint8 src_id, kal_uint8 rat_mode);

extern kal_bool l4c_nw_set_rat_mode_ext_req(kal_uint8 src_id, kal_uint8 rat_mode, rat_enum prefer_rat);

extern kal_bool l4c_nw_get_prefer_rat_req(kal_uint8 *prefer_rat);
extern kal_bool l4c_nw_set_prefer_rat_req(kal_uint8 src_id, rat_enum prefer_rat);

extern kal_bool l4c_nw_exe_rf_off_req(kal_uint8 src_id, l4c_action_enum action);
extern kal_bool l4c_root_rf_off_req(kal_uint8 src_id, l4c_action_enum action);

extern kal_bool l4c_nw_exe_rf_on_req(kal_uint8 src_id);

extern kal_bool l4c_nw_set_plmn_list_preference_req(kal_uint8 src_id, kal_uint8 preference);
extern kal_bool l4c_nw_get_plmn_list_preference_req(kal_uint8 src_id, kal_uint8 *preference);

extern kal_bool l4c_nw_get_romaing_status_req(kal_uint8 src_id, kal_bool* is_on_hplmn);
extern kal_bool l4c_nw_get_is_on_hplmn(void);

extern void l4c_nw_set_monitor_peer_pch_req(kal_bool on_off);

extern kal_bool l4c_nw_get_monitor_peer_pch_req(kal_bool *on_off);

extern kal_bool l4c_nw_get_csg_list_req(kal_uint8 src_id, kal_uint8 *oper, kal_uint8 rat);
extern kal_bool l4c_nw_abort_csg_list_req(kal_uint8 src_id);
extern kal_bool l4c_nw_csg_attach_req(kal_uint8 src_id, kal_uint8 *oper, kal_uint32 csg_id, kal_uint8 rat);
extern kal_bool l4c_nw_set_csg_autonomous_search_req(kal_uint8 src_id, kal_bool is_enable);
extern kal_bool l4c_nw_set_csg_auto_search_req(void);
#if 0
/* under construction !*/
#endif
extern kal_bool l4c_nw_set_femtocell_system_selection_mode_req(kal_uint8 src_id, kal_uint8 mode);
extern kal_uint8 l4c_nw_get_femtocell_system_selection_mode_req(kal_uint8 src_id);
extern kal_bool l4c_nw_get_romaing_mode_req(kal_uint8 src_id, kal_bool* support_roaming);
extern kal_bool l4c_nw_set_sysconfig_req(kal_uint8 src_id, 
                                         kal_uint8 rat_mode, 
                                         kal_uint8 prefer_rat, 
                                         kal_bool support_roaming, 
                                         kal_uint8 mobile_class);

#if defined(__NO_PSDATA_SEND_SCRI__) || defined(__FAST_DORMANCY__)
extern kal_bool l4c_nw_set_fd_mode_req(kal_uint8 src_id, kal_uint8 mode);
extern kal_uint8 l4c_nw_get_fd_mode_req(void);
extern kal_bool l4c_fd_set_screen_status(kal_bool is_screen_on);
extern kal_bool l4c_nw_is_fd_command_allowed(void);
#endif

extern kal_bool l4c_nw_get_voice_domain_preference_req(kal_uint8 src_id, l4c_rat_enum rat, kal_uint8 *preference);
extern kal_bool l4c_nw_set_voice_domain_preference_req(kal_uint8 src_id, kal_bool is_utran_vdp_valid, kal_uint8 utran_vdp, kal_bool is_eutran_vdp_valid, kal_uint8 eutran_vdp, kal_bool is_from_provision);
extern kal_bool l4c_nw_get_ue_usage_setting_req(kal_uint8 src_id, kal_uint8 *setting);
extern kal_bool l4c_nw_set_ue_usage_setting_req(kal_uint8 src_id, kal_uint8 setting);
extern kal_bool l4c_nw_get_ims_voice_availability_req(kal_uint8 src_id, kal_uint8 *state);
extern kal_bool l4c_nw_set_ims_voice_availability_req(kal_uint8 src_id, kal_uint8 state);
extern kal_bool l4c_nw_get_ims_sms_availability_req(kal_uint8 src_id, kal_uint8 *state);
extern kal_bool l4c_nw_set_ims_sms_availability_req(kal_uint8 src_id, kal_uint8 state);
extern kal_bool l4c_nw_get_ue_mode_req(kal_uint8 src_id, kal_uint8 *runtime_mode, kal_uint8 *nvram_mode);
extern kal_bool l4c_nw_set_ue_mode_req(kal_uint8 src_id, kal_uint8 mode);

#if defined(__2STAGE_NW_SELECTION__)
extern kal_bool l4c_nw_susp_resum_update_req(l4c_source_id_enum src_id, kal_uint8 data, kal_uint8 action, susp_resu_source_enum source);
#endif

extern kal_bool l4c_rf_info_req(kal_uint8 mode); //gps_desense

extern kal_bool l4c_nw_get_sms_preference_req(kal_uint8 src_id, l4c_rac_sms_preference_enum *preference);

extern kal_bool l4c_nw_get_sms_over_sgs_req(kal_bool *enable);

extern kal_bool l4c_nw_set_sms_preference_req(kal_uint8 src_id, kal_uint8 preference, kal_bool is_from_provision);

extern kal_bool l4c_nw_set_sms_over_sgs_req(kal_uint8 src_id, kal_bool enable);

extern kal_bool l4c_nw_ims_reg_status_update_req(kal_uint8 src_id,
                                                 kal_uint8 reg_state,
                                                 kal_uint8 reg_type,
                                                 kal_uint32 ext_info,
                                                 kal_uint8 dereg_cause,
                                                 kal_bool ims_retry,
                                                 ims_access_rat_enum ims_rat,
                                                 kal_uint8 sip_uri_type
                                                 );

extern kal_bool l4c_nw_ims_config_req(kal_uint8 src_id, kal_bool is_the_other_turned_on, kal_bool is_current_turned_on);
extern kal_bool l4c_nw_ims_combine_config_req(kal_uint8 src_id, kal_bool is_ims_volte_on, kal_bool is_ims_on);
extern kal_bool l4c_nw_ims_nwsel_req(kal_uint8 src_id, kal_uint8 opcode, kal_uint8 *oper, kal_uint8 rat);
extern kal_bool l4c_nw_ims_abort_nwsel_req(kal_uint8 src_id, kal_uint8 abort_cause);

extern kal_bool l4c_nw_ims_reg_start_req(kal_uint8 src_id, kal_uint8 type);
extern kal_bool l4c_nw_ims_dereg_start_req(kal_uint8 src_id, kal_uint8 type);
extern kal_bool l4c_nw_background_search_req();
extern kal_bool l4c_nw_ims_timer_status_update_req(kal_uint8 timer_type, kal_uint8 timer_status, kal_uint16 timer_length);
extern kal_bool l4c_nw_ims_event_update_req(kal_uint8 ims_event, kal_uint16 sip_cause);
extern kal_bool l4c_nw_ims_scm_req(kal_uint8 src_id, ims_scm_info_type_enum application, ims_scm_info_action_enum indication);
extern kal_bool l4c_nw_ct_volte_status_update_req(l4c_ct_volte_support_enum ct_volte_support);
extern kal_bool l4c_nw_ims_roaming_config_req(kal_uint8 ims_roaming_config);

extern kal_bool l4c_nw_set_active_sim_req(kal_uint8 src_id, kal_uint8 active_sim);

extern kal_bool l4crac_set_recovery_timer_req(kal_uint8 src_id, kal_uint32* timer, kal_uint8 num);
extern kal_bool l4crac_get_recovery_timer_req(kal_uint8 src_id);

extern kal_bool l4crac_set_ct_mode_req(kal_uint8 src_id, kal_uint8 mode);

void l4c_nw_send_sim_error_ind(sim_error_cause_enum cause);

#ifdef __VOLTE_SUPPORT__
extern kal_bool l4c_nw_get_ssac_param_req(kal_uint8 src_id);
#endif

extern kal_bool l4c_nw_set_preferred_oper_list_req(kal_uint8 *ver_no, 
                                                   kal_uint8 no_entry, 
                                                   kal_uint8 *oper, 
                                                   kal_uint8 *rat);

extern kal_bool l4c_nw_get_preferred_oper_list_req(custom_plmn_type_enum type, kal_uint8 src_id);

extern kal_bool l4c_nw_set_custom_plmn_list_req(kal_uint8 no_entry, kal_uint8 *oper, kal_uint8 *rat);

extern kal_bool l4c_nw_get_mm_ims_voice_termination_setting_req(kal_uint8 src_id, kal_uint8 *setting);
extern kal_bool l4c_nw_set_mm_ims_voice_termination_setting_req(kal_uint8 src_id, kal_uint8 setting);

extern kal_bool l4c_nw_set_eps_power_preference(kal_uint8 preference);
extern kal_bool l4c_nw_vdm_voice_status_req(kal_uint8 src_id, call_status_enum vdm_voice_status, call_type_indication_enum call_type);
extern kal_bool l4c_nw_vdm_ims_voice_status_req(kal_uint8 src_id, kal_uint8 vdm_ims_voice_status, ims_access_rat_enum rat);
extern kal_bool l4c_nw_set_first_camp_on_rat_req(kal_uint8 rat_mode);
extern kal_bool l4c_nw_ims_call_info_req(kal_uint8 src_id, kal_bool voice_over_ims_ongoing, kal_bool is_emergency, kal_uint8 ims_access_rat);
extern kal_uint8 l4c_nw_get_srvcc_cap_req(void);
extern kal_bool l4c_nw_set_srvcc_cap_req(kal_uint8 uesrvcc);

extern kal_bool l4c_nw_switch_cell_power_meas_req(kal_bool on_off);

extern kal_bool l4c_nw_disable_eutran_req(l4c_source_id_enum src_id, kal_uint8 *oper);
extern kal_bool l4c_nw_get_supported_radio_access_req(l4c_radio_access_setting_struct *csrac_ptr,
                                                      l4c_radio_access_setting_struct *csraa_ptr);

extern void l4c_nw_send_supported_radio_access_req(kal_uint8 src_id);
extern kal_bool l4c_nw_set_supported_radio_access_req(kal_uint8 src_id,
                                                      kal_bool geran_tdma,
                                                      kal_bool utran_fdd,
                                                      kal_bool utran_tdd_lcr,
                                                      kal_bool eutran_fdd,
                                                      kal_bool eutran_tdd,
                                                      mode_switch_cause_enum  cause);


extern kal_bool l4c_nw_mru_clear_req(kal_uint8 src_id);
extern kal_bool l4c_nw_set_mru_req(kal_uint8 src_id, kal_uint8 act, plmn_id_struct* plmn_id, kal_uint16 channel, kal_uint8 band);
extern kal_bool l4c_nw_set_aux_plmn_req(kal_uint8 src_id, kal_uint8 act, plmn_id_struct* plmn_id);

extern kal_bool l4c_nw_vzw_mru_clear_req(kal_uint8 src_id, mmss_list_type_enum type);
extern kal_bool l4c_nw_vzw_mru_edit_req(kal_uint8 src_id, mmss_list_type_enum type, irat_system_type_enum rat, kal_uint32 entry, kal_uint8 band, plmn_id_struct *plmn_id, kal_uint32 channel);
extern kal_bool l4c_nw_vzw_mru_read_req(kal_uint8 src_id, mmss_list_type_enum type);

extern kal_bool l4c_nw_set_wm_policy_req(kal_uint8 src_id, wm_policy_enum policy);
extern kal_bool l4c_nw_mdstatus_flow_req(kal_uint8 src_id, kal_uint8 flow_version);
extern kal_bool l4c_nw_mdstatus_update_req(kal_uint8 src_id, kal_uint8 modem_status, kal_uint8 remote_sim_protocol_task, kal_bool from_ap);
extern void l4c_nw_mdstatus_tk_bsp_ind_req(void);
extern kal_bool l4c_nw_config_arfcn_req(kal_uint8 src_id, kal_uint8 rat_mode, kal_uint8 num, EARFCN *arfcn);
extern kal_bool l4c_nw_set_iratmode_req(kal_uint8 mode);

extern kal_bool l4c_update_aral_req(kal_uint8 *plmn_str, rat_enum rat_mode, kal_uint32 ra_start, kal_uint32 ra_end);

extern kal_bool l4c_nw_set_reported_rat_req(l4c_source_id_enum src_id);

extern kal_bool l4c_nw_set_disable_rat_req(l4c_source_id_enum src_id, kal_uint8 mode);
extern kal_bool l4c_eval_erlm_control_req(kal_uint8 erlm_mode);
extern kal_bool l4crac_set_roaming_data_config_req(kal_uint8 data_enabled_setting, kal_uint8 data_roaming_setting);
extern kal_bool l4c_nw_drx_update_req(l4c_source_id_enum src_id, l4c_rat_enum rat_mode, kal_uint16 drx_value);


extern kal_bool l4c_nw_set_hvolte_mode_req(l4c_source_id_enum src_id, hvolte_mode_enum mode, kal_uint8 is_for_silent_redial);
extern kal_bool l4c_nw_set_manual_hvolte_mode_req(l4c_source_id_enum src_id, hvolte_mode_enum mode);

extern kal_bool l4c_nw_enable_hvolte_req(l4c_source_id_enum src_id, kal_bool update_for_roaming, hvolte_enable_status_enum enable);
extern kal_bool l4c_nw_emergency_session_req(l4c_source_id_enum src_id, kal_uint8 mode, kal_uint8 airplane_mode, kal_uint8 ims_reg_state);
extern kal_bool l4c_nw_ecbm_mode_req(l4c_source_id_enum src_id, kal_bool is_ecbm_on, l4c_rat_enum rat);
extern kal_bool l4c_nw_emc_service_scan_req(l4c_source_id_enum src_id, rat_enum available_rat, rat_enum prefer_rat, kal_uint8 is_new_call, kal_uint8 emcss_reason);
extern kal_bool l4c_nw_send_wifi_lte_handovr_req(kal_uint8 stage, kal_uint8 rat, kal_uint32 network_id, kal_uint8 pdn_id);
extern kal_bool l4c_nw_cell_power_threshold_config_req(kal_uint8 rsrp_threshold_num, kal_int16 *rsrp_threshold);
extern kal_bool l4c_nw_msid_in_nv_clear_req(kal_uint8 target_msid);
extern kal_bool l4c_nw_send_cs_voice_call_protection_req(kal_bool mode);


extern kal_bool l4c_nw_set_tw_mode_req(kal_uint8 tw_mode, kal_uint8 setting);

extern kal_bool l4c_nw_set_global_rat_mode_req(rat_enum global_rat_mode);
#ifdef __REMOTE_SIM__
extern kal_bool l4c_nw_check_aka_resource_occupy_state(l4c_rsim_pending_action_enum curr_action, kal_uint8 src_id, kal_uint8 cfun_state);
extern void l4c_nw_set_ps_only_req(kal_bool ps_only_reg_status);
extern void l4c_aka_resource_release_req_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr);
#endif

extern void l4c_nw_set_power_level_threshold_req(kal_uint8 mode, kal_int32 upper_threshold, kal_uint8 tup,
	                                            kal_int32 lower_threshold, kal_uint8 tlo);

extern kal_bool l4c_nw_get_latest_rat_select_ind_req (kal_uint8 src_id);

extern kal_bool l4c_nw_active_epoc_req(l4c_source_id_enum src_id);
extern void l4c_nw_notify_c2k_exit_ecbm();

extern kal_bool l4c_nw_reset_rac_ota_ctxt_req(kal_uint8 src_id);
extern kal_bool l4c_nw_guti_in_nv_clear_req();

extern kal_bool l4c_check_rat_mode_to_update(kal_uint8 rat_mode);
extern kal_bool l4c_nw_set_lte_only_setting_req(kal_uint8 change_rat_mode_lte_only_for_lte_capable_ps, 
        kal_uint8 only_limited_camping_for_non_lte_capable_ps);

extern kal_bool l4c_nw_set_lte_game_ho_req(kal_uint8 mode);


extern void l4c_set_pwl_thrhd_req_hdlr(local_para_struct *local_para_ptr, peer_buff_struct * peer_buff_ptr);

#ifdef __KOR_CUSTOMIZATION__  /* FGI setting */
kal_bool l4c_get_device_fgi_value(kal_uint32 *fgi_ptr, kal_uint32 *fgi_r9_ptr, kal_uint32 *fgi_r10_ptr, kal_uint8 dup_mode );
kal_bool l4c_set_device_fgi_value(kal_uint8 src_id, kal_uint32 *fgi_ptr, kal_uint32 *fgi_r9_ptr, kal_uint32 *fgi_r10_ptr, kal_uint8 dup_mode );
#endif

extern l4c_at_cmd_process_type_enum l4c_nw_set_rat_disable_with_ecc_req(kal_uint8 src_id, l4c_general_modem_configure_struct *cmd_param_ptr);
extern l4c_at_cmd_process_type_enum l4c_nw_get_rat_disable_with_ecc_req(kal_uint8 src_id, kal_uint8 *config_str);

extern void l4c_nw_send_fplmn_action_req(kal_uint8 action, kal_uint8 plmn_count, kal_uint8 *plmn);
extern void l4c_nw_get_fplmns_req(kal_uint8 *num_of_fplmn, plmn_id_struct *read_fplmn_ptr);
extern kal_bool l4c_nw_1xrtt_cell_list_req (l4c_source_id_enum src_id, kal_uint8 cell_list_type);

extern kal_bool l4c_nw_lte_tm9_fdd_tdd_read_req (kal_uint8 src_id);
extern kal_bool l4c_nw_lte_tm9_fdd_tdd_set_req (l4c_source_id_enum src_id, kal_uint8 lte_tm9_fdd_setting, kal_uint8 lte_tm9_tdd_setting);

extern void l4c_rac_sim_switch_rfoff_req(void);

extern l4c_at_cmd_process_type_enum l4c_nw_detach_reattach_req(kal_uint8 src_id, l4c_general_modem_configure_struct *cmd_param_ptr);
extern kal_bool l4c_nw_get_freq_scan_list_req(kal_uint8 src_id, l4c_action_enum action, rat_enum list_rat, freq_scan_input_struct *input);

#ifdef __ARFCN_TO_CAMERA_SUPPORT__
extern void l4c_nw_set_camera_hopping_req(kal_uint32 value);
extern kal_bool l4c_nw_set_arfcn_to_ccm(kal_uint8 test_mode, kal_uint8 simid, kal_uint8 main_sim, kal_uint8 is_connected,
	                             kal_uint8 num_arfcn, kal_uint8 rat, kal_uint16 *band, kal_uint32 *arfcn);
#endif

extern void l4c_atp_csfb_page_req_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr);

extern kal_bool l4c_nw_get_plmn_list_with_given_num_req(kal_uint8 src_id, rat_enum rat, kal_uint8 num_of_plmn, kal_uint8 timer);

extern void l4c_nw_backoff_timer_ind_hdlr(local_para_struct * local_para_ptr);

extern void l4c_nw_hvolte_mode_switch_ind_hdlr(local_para_struct * local_para_ptr);

extern void l4c_nw_set_handover_threshold(kal_uint8 mode, kal_uint8 signal_type, kal_int16 tin, 
                                     kal_int16 tout, kal_uint32 timer);

#endif /* _L4C_NW_CMD_H */ 

