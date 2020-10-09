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
 * rmmi_ind.h
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

#ifndef _RMMI_IND_H
#define _RMMI_IND_H


#include "l4c2csm_cc_struct.h"
#include "keypad_sw.h"
#include "mcd_ps2sat_peer.h"
#include "ps2sat_struct.h"
#include "kal_general_types.h"
#include "ps_public_struct.h"
#include "ps_public_enum.h"
#include "rmmi_common_enum.h"
#include "rmmi_context.h"
#include "csmcc_common_enums.h"
#include "l3_inc_enums.h"
#include "l3_inc_local.h"
#include "l4crac_enums.h"

#ifdef __ACMT_SUPPORT__
#include "nas2l4c_struct.h"
#endif


/* VzW Support */
#include "pam2tcm_struct.h"
#ifdef __IMS_SUPPORT__
#include "ims_common_def.h"
#include "vdm_external_lib.h"
#endif

extern void l4c_at_ready_rind(void);

extern void l4c_phb_startup_begin_rind();

extern void l4c_phb_startup_finish_rind(
                kal_uint16 sim_max_num,
                kal_uint16 phb_max_num,
                kal_uint8 phb_len,
                kal_uint8 fdn_len,
                kal_uint8 bdn_len,
                kal_uint8 owner_len,
                kal_uint8 email_len,
                l4c_phb_desc_struct *desc);

extern void l4c_file_change_rind(kal_bool is_full_change, kal_uint8 num_of_file, kal_uint16 *file_list);


extern void l4c_cphs_display_cfu_rind(kal_uint8 action, kal_uint8 line_num);

extern void l4c_cc_speech_rind(kal_bool on_off, kal_uint8 rat,kal_uint8 irho_speech_on_off);

extern void l4c_cc_call_meter_rind(kal_uint8 call_id, kal_uint32 ccm, kal_uint8 warning);

extern void l4c_cc_call_wait_rind(
                kal_uint8 call_id,
                l4c_number_struct *number,
                kal_uint8 bclass,
                kal_uint8 *name,
                kal_uint8 cli_validity);

extern void l4c_cc_call_ring_rind(
                kal_uint8 call_id,
                l4c_number_struct *number,
                l4c_sub_addr_struct *sub_addr,
                kal_uint8 *name,
                kal_uint8 cli_validity,
                kal_uint8 call_type);

extern void l4c_cc_call_release_rind(kal_uint8 call_id, kal_uint16 cause);

extern void l4c_cc_call_info_rind(kal_bool call_exist);

extern void l4c_cc_handfree_rind(kal_uint8 ind_type, kal_uint8 event);

extern void l4c_cc_call_modify_rind(kal_uint8 call_mode);

extern void l4c_cc_call_connect_rind(kal_uint8 call_mode, kal_uint8 call_id);

extern void l4c_cc_cpi_rind(l4ccsm_cc_cpi_ind_struct *call_info);      /* mtk00714 add 20041210 for +ECPI */

extern void l4c_cc_dsci_rind(kal_uint8 call_id, 
                             clcc_dir_enum call_orig,
                             rmmi_dsci_call_state_enum call_state,
                             csmcc_call_type_enum call_type,
                             clcc_mpty_enum mpty,
                             l4_addr_bcd_struct number,
                             kal_uint16 disc_cause);

extern void l4c_cc_call_state_rind(rmmi_mo_state_enum state,
                                 kal_uint8 call_id,
                                 kal_uint8 reserve,
                                 rmmi_cm_call_end_status_enum end_status,
                                 kal_bool cause_present,
                                 ps_cause_enum cc_cause,
                                 csmcc_call_type_enum call_type,
                                 kal_bool is_ecc);

extern void l4c_cc_notify_ss_rind(kal_uint8 call_id, kal_uint8 type, kal_uint8 notification, kal_uint16 ss_code); //mtk02508_090223

extern void l4c_cc_notify_ss_cug_rind(kal_uint8 call_id, kal_uint16 index, kal_uint16 ss_code);

extern void l4c_cc_notify_ss_ect_rind(
                kal_uint8 call_id,
                kal_bool present,
                l4c_number_struct *addr,
                l4c_sub_addr_struct *sub_addr,
                kal_uint8 type,
                kal_uint16 ss_code);

extern void l4c_cc_update_call_state_rind(kal_uint8 msg_type,kal_uint8 call_id,l4c_call_entry_struct call_entry);



extern void l4c_ss_ussr_rind(kal_uint8 dcs, kal_uint8 *ussd_string, kal_uint8 ussd_string_length);

#if 0 //super dongle
/* under construction !*/
#endif

extern void l4c_ss_ussn_rind(kal_uint8 dcs, kal_uint8 *ussd_string, kal_uint8 ussd_string_length);//mtk02508_090220

#if 0 //super dongle
/* under construction !*/
#endif

extern void l4c_cc_video_call_status_rind(kal_uint8 call_id, kal_uint8 action, kal_bool result);

extern void l4c_cc_call_present_rind(kal_uint8 call_id, l4c_number_struct *addr, kal_uint8 seq_no, l4c_number_struct *redirect_addr,kal_uint8 type_of_called_num_subadd,kal_uint8 subaddr_present);

#ifdef __TC01__
extern void l4c_cc_call_setup_rind(kal_uint8 sig_val_present, kal_uint8 sig_val, l4c_sub_addr_struct *called_subaddr, l4c_number_struct *redirect_addr);
#endif

extern void l4c_ps_connect_rind(void);

extern void l4c_ps_activate_rind(kal_uint8 src_id);

extern void l4c_tcm_ready_rind(void);

extern void l4c_nw_reg_state_rind (kal_uint8 *lac,
                                    kal_uint8 *tac,
                                    kal_uint8 rac,
                                    kal_uint32 cell_id,
                                    kal_uint8 *plmn,
                                    kal_uint8 status,
                                    kal_uint8 gprs_state,
                                    kal_uint8 rat,
                                    kal_uint16 cell_support_egprs,
                                    kal_uint16 max_data_bearer_capa,
                                    kal_uint16 cause,
                                    domain_id_enum domain,
                                    kal_uint8 scell_number_dl,
                                    kal_uint8 scell_number_ul);

extern void l4c_ps_update_current_reg_rind(void); //hspa_mmi_h2, review_h2

extern void l4c_nw_attach_rind(void);

extern void l4c_nw_nitz_rind(
					    kal_uint8 year,
					    kal_uint8 month,
					    kal_uint8 day,
					    kal_uint8 hour,
					    kal_uint8 min,
					    kal_uint8 sec,
					    kal_uint8 timezone,
					    kal_uint8 day_light_saving_timeP,							    
					    kal_uint8 day_light_saving_time);

extern void l4c_nw_oper_name_rind(kal_uint8 *plmn,
							kal_uint8 full_nw_nameP, 
							kal_uint8 full_nw_name_dcs,
							kal_uint8 *full_nw_name, 
							kal_uint8 full_nw_name_len,
							kal_uint8 short_nw_nameP, 
							kal_uint8 short_nw_name_dcs,							
							kal_uint8 *short_nw_name, 
							kal_uint8 short_nw_name_len);

extern void l4c_nw_time_zone_rind(kal_uint8 timezone,
                                    kal_uint8 day_light_saving_timeP,
                                    kal_uint8 day_light_saving_time,
                                    kal_bool nw_time_zone_timeP);

extern void l4c_nw_rx_level_rind(kal_uint8 level);

extern void l4c_nw_gprs_event_report_rind(
                kal_uint8 event_id,
                kal_uint8 context_id,
                kal_uint8 parameter1,
                kal_uint8 parameter2,
                kal_uint8 *parameter3);


extern void l4c_nw_update_ecc_rind(void); // +CEN

extern void l4c_nw_end_ps_data_session_rind(kal_uint8 src_id, kal_uint8 reported_value);

extern void l4c_nw_invalid_sim_rind(l4c_rac_response_enum cs_status, l4c_rac_gprs_status_enum ps_status, kal_uint8 cause);

extern void l4c_nw_ecsg_current_report(domain_id_enum domain);

extern void l4c_nw_csg_reg_state_rind(domain_id_enum domain,
                                            kal_uint8 gsm_state,
                                            kal_uint8 gprs_state,
                                            kal_uint8 rat,
                                            kal_uint16 cell_data_speed_support,
                                            kal_uint16 max_data_bearer_capa,
                                            kal_uint8 *plmn,
                                            kal_bool is_csg_cell,
                                            csg_info_struct *csg_info,
                                            kal_uint32 cause);
#ifdef __CSG_SUPPORT__
extern void l4c_nw_hnb_type_report(kal_uint8 hnb_name_length, kal_uint8 *hnb_name);
#endif

//extern void l4c_sim_support_plmn_list_rind(kal_uint16 length);

extern void l4c_cphs_mmi_info_rind(
                kal_uint8 is_autolock_enable, 
                kal_uint8 autolock_result,
                kal_uint8 is_valid_csp,
                kal_uint8 *csp,
                kal_uint8 is_spn_valid,
                kal_uint8 *spn);

extern void l4c_op01_cardmode_rind(kal_bool is_sim_verified, kal_bool is_usim);

extern void l4c_op01_rfsw_rind(kal_bool is_radio_on);

#if defined(__SIM_ME_LOCK__)
extern void l4c_smu_sml_event_rind(sml_event_enum event);
#endif
extern void l4c_smu_sml_uicc_unlock_code_rind(kal_uint8 unlock_code);

extern void l4c_sms_ready_rind(l4c_result_enum result);

extern void l4c_sms_new_msg_index_rind(kal_uint16 indx, kal_uint8 storage, void *concat_info);

extern void l4c_sms_new_msg_text_rind(
                kal_uint8 mti,
                kal_uint8 id,
                kal_uint8 hex_dspl,
                kal_uint16 length,
                void *msg_header,
                void *data);

extern void l4c_sms_new_msg_pdu_rind(
                kal_uint8 mti,
                kal_uint16 length,
                kal_uint8 id,
                void *data,
                kal_uint16 packed_peer_buff_len);

extern void l4c_sms_mem_full_rind(void);

extern void l4c_sms_mem_available_rind(void);
extern void l4c_sms_mem_exceed_rind(kal_uint8 exceed_type);
extern void l4c_cb_msg_text_rind(
                kal_uint16 sn,
                kal_uint16 mi,
                kal_uint8 dcs,
                kal_uint8 page,
                kal_uint8 pages,
                kal_uint8 rmi_use_hex,
                kal_uint8 data_length,
                kal_uint8 *msg_data);

extern void l4c_cb_msg_pdu_rind(kal_uint16 length, void *data);

extern void l4c_cb_wac_msg_pdu_rind(kal_uint16 length, void *data);

extern void l4c_sms_etws_informaion_rind(
                kal_uint16 warning_type,
                kal_uint16 message_id,
                kal_uint16 serial_nubmer,
                kal_bool is_security_information_valid,
                kal_uint8 etws_security_information[L4C_MAX_ETWS_SECURITY_INFO_LEN],
                kal_uint8 plmn_id[6]);

extern void l4c_sms_etws_primary_notification_rind(kal_uint16 message_id, kal_uint16 serial_nubmer, kal_uint16 warning_type);

extern void l4c_eq_keypad_detect_rind(kal_bool(*drv_get_key_func) (kbd_data *));

extern void l4c_nw_signal_quality_rind(
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

#if defined(__GEMINI__)
extern void l4c_eq_pwnon_dual_sim_rind(void);
extern void l4c_nw_rac_activated_rind(void);
extern void l4c_nw_search_normal_finish_rind(void);
#endif


extern void l4c_sim_app_status_update_rind(kal_uint8 app_type, kal_uint8 channel, kal_bool is_sim_inserted, kal_uint8 cause);

extern void l4c_sim_status_update_rind(kal_bool is_sim_inserted, kal_uint8 passwd_required);  

extern void l4c_sim_usim_type_rind(kal_uint8 is_usim, kal_uint8 cdma_info, kal_uint8 is_isim);

extern void l4c_sim_app_rind(uicc_app_type_enum applicationid, kal_uint8 channel_id);

extern void l4c_master_sim_rind(kal_uint8 master_sim_id);

extern void l4c_sim_ps_map_rind(kal_uint8* ps_sim_map);

extern void l4c_sim_cipher_rind(kal_bool sim_cipher_ind, kal_bool mm_connection, kal_uint8 cs_cipher_on, kal_uint8 ps_cipher_on);

extern void l4c_eq_battery_status_rind(kal_uint8 battery_status, kal_uint8 battery_voltage);

extern void l4c_eq_alarm_detect_rind(rtc_format_struct *rtc_time);

extern void l4c_get_adc_all_channel_rind(
                kal_int32 vbat,
                kal_int32 bat_temp,
                kal_int32 vaux,
                kal_int32 charge_current,
                kal_int32 vcharge);

extern void l4c_eq_gpio_detect_rind(kal_uint8 gpio_device, kal_bool on_off);

#ifdef __SAT__
extern void l4c_sat_stkpci_rind(rsat_config_enum temp_pci_type, kal_uint8 *temp_pro_cmd_ptr, kal_uint8 length);        /* mtk00924 050308 add for Remote SAT */
extern void l4c_sat_no_other_cmd_rind(void);    /* mtk00924 050308 add for Remote SAT */
extern void l4c_sat_stkctrl_rind(kal_uint8 mmi_info_type, kal_uint8 alpha_id_len, kal_uint8 *alpha_id, kal_uint8 addr_len, kal_uint8 *addr);
#if defined(__IMS_SUPPORT__)
extern void l4c_sat_estkcnum_ind(kal_uint8 *addr, kal_uint8 no_addr, kal_bool is_ims_call, kal_uint8 redial_setting, kal_uint8 media_type);
#endif
extern void l4c_sat_cusats_rind(cusats_uicc_state_enum uicc_state);
extern void l4c_sat_ecusats_rind(cusats_uicc_state_enum uicc_state);    /* MMTK proprietary URC for uicc status ind */
#endif /* __SAT__ */ 

void l4c_sat_run_at_command_rind(sat_run_at_command_ind_struct *local_ptr, sat_run_at_command_ind_peer_struct *peer_ptr);     //mtk00714 add for benson SAT

#ifdef __CTM_SUPPORT__
#if defined(__CTM_AT_CMD_SUPPORT__) 
extern void l4c_ctm_connected_rind(void);
extern void l4c_ctm_recv_text_rind(kal_uint16 num_of_char, kal_wchar *text);
extern void l4c_ctm_tty_plug_rind(kal_bool is_plug_in);
extern void l4c_ctm_default_changed_rind(kal_bool is_turn_on, kal_uint8 ctm_interface);
#else
/* dummy function */
#define l4c_ctm_connected_rind() {}
#define l4c_ctm_recv_text_rind(num_of_char,text) {}
#define l4c_ctm_tty_plug_rind(is_plug_in) {}
#define l4c_ctm_default_changed_rind(is_turn_on,ctm_interface) {}
#endif
#endif /* __CTM_SUPPORT__ */ 

extern void l4c_cc_handfree_callheld_rind(void);


#ifdef __NBR_CELL_INFO__
extern void l4c_nbr_cell_info_rind(kal_uint8 rat,kal_bool is_nbr_info_valid,kal_uint8 *cell_info, kal_uint16 length);
#endif

extern void l4c_nw_ecell_report(kal_bool is_at, kal_bool is_shm, kal_bool duplicate_check);

extern void l4c_nw_ecell_rind(kal_bool duplicate_check);

extern void l4c_em_status_rind(kal_uint32 type, kal_uint8 *nw_info, kal_uint16 length);


#ifdef __ACMT_SUPPORT__
extern void l4c_at_acmt_rind(protocol_error_type_enum type, kal_uint32 cause);
#endif

extern void l4c_tcm_ready_rind(void);

#if defined(__GEMINI__)
extern void l4c_nw_mmrr_service_status_rind(kal_uint8 service_status);
#endif

#if defined(__REPORT_AVAILABLE_PLMN__)
extern void l4c_nw_plmn_list_rind(kal_uint8 list_size, l4c_rat_plmn_info_struct *list); 
#endif

#if defined(__2STAGE_NW_SELECTION__)
extern void l4c_nw_modem_suspend_rind(kal_uint8 session_id);
#endif

extern void l4c_nw_update_sms_preference_rind(kal_uint8 preference);

extern void l4c_nw_update_sms_over_sgs_rind(kal_bool enable);

extern void l4c_nw_ims_reg_status_rind(kal_uint8 reg_state, kal_uint8 reg_type, kal_uint32 ext_info);

extern void l4c_nw_feature_rind(kal_uint8 active_rat, nw_feature_update_parameter_enum nw_feature_update_parameter, void *nw_featute);

extern void l4c_nw_srvcc_status_update_rind(kal_uint8 status);

extern void l4c_nw_ims_sys_info_rind(
                kal_bool is_valid,
                kal_bool is_emc_attach_supported,
                kal_bool is_emc_call_barred,
                kal_uint32 cell_id,
                kal_uint8 *ta_code,
                kal_uint8 barring_factor_voice,
                kal_uint8 barring_factor_video,
                kal_uint8 barring_time_voice,
                kal_uint8 barring_time_video,
                kal_uint8 barring_factor_mo_data,
                kal_uint8 barring_time_mo_data,
                kal_uint8 acbar_special_ac_mo_data,
                kal_uint8 barring_factor_mo_signalling,
                kal_uint8 is_acb_skip_for_mmtel_voice,
                kal_bool is_acb_skip_for_mmtel_video,
                plmn_id_struct *plmn_id
                );

extern void l4c_nw_barring_status_rind(kal_bool is_mo_data_barred);

extern void l4c_nw_uemode_param_update_rind(kal_uint8 ue_mode, kal_uint8 ue_usage_setting, kal_uint8 eutran_voice_domain_preference);

extern void l4c_nw_ims_cell_info_update_rind(reg_state_enum gprs_state, cell_info_and_rat_struct *cell_info, domain_id_enum domain, lai_struct *lte_cs_lai);

extern void l4c_nw_ims_emergency_support_rind(kal_uint8 rat_type, kal_bool ims_emergency_support);

extern void l4c_nw_irat_start_rind(kal_uint8 irat_type, kal_uint8 source_rat, kal_uint8 target_rat);

extern void l4c_nw_irat_end_rind(kal_uint8 irat_type, kal_uint8 source_rat, kal_uint8 target_rat, kal_uint8 irat_result);

extern void l4c_nw_rat_mode_change_rind(kal_uint8 rat_mode);

extern void l4c_nw_plmn_status_rind(kal_bool is_searching);

extern void l4c_nw_ims_service_rind(kal_uint8 service_type, kal_bool is_t311_expire);

extern void l4c_afr_rind(kal_bool is_afr_triggered);

#ifdef __MTK_INTERNAL__
void l4c_md_warning_message_rind(kal_uint8 *warning_msg);
#endif

#ifdef __SP_RIL_SUPPORT__
extern void l4c_tst_md_timetick_rind();
#endif

#ifdef __CNAP_SUPPORT__
extern void l4c_cc_call_cnap_rind(kal_bool name_present, kal_uint8 *name, kal_uint8 name_length, kal_uint8 cli_validity);
#endif

extern void atci_thermal_event_report_rind(kal_uint8 type, kal_int16 value); //for thermal_protection

extern void l4c_nw_arme_rind(rmmi_nw_error_type_enum type, kal_uint32 cause);

/* __IMS_SUPPORT__ */
extern void l4c_sms_ims_new_msg_pdu_rind(kal_uint8 mti, kal_uint16 length, kal_uint8 id, void *data, kal_uint16 packed_peer_buff_len);
extern void l4c_sms_ims_new_msg_text_rind(kal_uint8 mti, kal_uint8 id, kal_uint8 hex_dspl, kal_uint16 length, void *msg_header, void *data);

extern void l4c_packets_flush_rind(kal_uint8 context_id);

extern void l4c_nw_rat_select_rind(kal_uint32 gmss_rat, plmn_id_struct *plmn_id, kal_uint8 status, kal_uint32 curr_reported_rat, kal_bool is_home_country, kal_bool is_srlte);
extern void l4c_rx_rssi_report_rind(l4c_rat_enum rat, kal_int32* rssi);
extern void l4c_rx_two_path_rssi_report_rind(l4c_rat_enum rat, kal_int32 rssi1, kal_int32 rssi2);

extern void l4c_nw_duplex_mode_change_rind(kal_bool is_wcdma_mode_activated,
                                   kal_bool is_tdscdma_mode_activated,
                                   kal_bool is_ltefdd_mode_activated,
                                   kal_bool is_ltetdd_mode_activated,
                                   mode_switch_cause_enum  cause);

extern void l4c_rx_rssi_verify_rind(kal_int32 rssi0_dBm, kal_int32 rssi1_dBm);
extern void l4c_rf_temperature_rind(rat_enum current_rat, kal_int16 curr_temp, kal_int16 threshold);

extern void l4c_reg_combined_cause_rind(emm_cause_enum emm_cause, esm_cause_enum esm_cause, emm_cause_source_enum emm_cause_source);
extern void l4c_ps_apn_event_report_rind(void);
extern void l4c_ps_gprs_event_report_rind(kal_uint8 src_id, 
                                        kal_uint8 event_id, 
                                        kal_uint8 context_id, 
                                        kal_uint8 parameter1, 
                                        kal_uint8 parameter2, 
                                        kal_uint8 *parameter3,
                                        ps_cause_enum cause);

extern void l4c_time_info_rind(kal_uint64 timeinfo_utc, 
                                 kal_bool is_day_light_saving_time_valid, 
                                 kal_uint32 day_light_saving_time,
                                 kal_bool is_leap_seconds_valid,
                                 kal_int32 leap_seconds,
                                 kal_bool is_localtime_offset_valid,
                                 kal_int32 localtime_offset,
                                 kal_uint32 delay_ticks);

extern void l4c_nw_serving_lte_band_rind(kal_uint16 serv_lte_band);
extern void l4c_nw_connected_drb_rind(kal_uint8 act);

extern void l4c_nw_reported_rat_change_rind(rat_enum new_reported_rat, kal_bool is_home);
extern void sim_rsa_ind_1_rind(kal_uint8 msg_id_type, kal_uint8 *data);
extern void l4c_ps_change_apn_rind(kal_uint8 change_to_apn_class);
extern void l4c_ps_acl_rej_rind(void);
extern void l4c_ps_cancel_apn_blocking_rind(kal_uint8 *apn);
extern void l4c_ps_egcmd_rind(kal_uint32 tx_bytes, kal_uint32 tx_packets, kal_uint32 rx_bytes, kal_uint32 rx_packets);

extern void l4c_nw_cscon_rind(rmmi_cscon_mode_enum mode, rmmi_cscon_state_enum state);
extern void l4c_nw_pseudo_bs_detect_ind_rind(kal_uint8 count,l4c_pseudo_bs_info_struct *list);
extern void l4c_nw_erlq_rind(kal_uint32 event,kal_uint32 band);
extern void l4c_cc_erlm_rind(kal_uint32 event,kal_uint32 band);

extern void l4c_cc_evocd_rind(kal_uint16 codec);

extern void l4c_nw_reginfo_rind(rat_enum rat, kal_uint8 event_type);
extern void l4c_nw_modulation_configuration_rind(signal_modulation_enum mod_cfg);
extern void l4c_lcedata_rind(kal_uint8 conf_level, kal_uint8 lce_suspend, kal_uint32 last_hop_cap);
extern void l4c_rb_test_mode_rind(kal_bool is_lbm_activated);

extern void l4c_eons_ready_rind(kal_bool pnn_service, kal_bool opl_service);
extern void l4c_nw_drx_update_rind(l4c_rat_enum rat, kal_uint16 drx);
extern void l4c_nw_vzw_pcell_info_rind(kal_uint16 band);

extern void l4c_nw_c2k_service_rind(domain_id_enum domain, kal_bool state, kal_uint8 service);
extern void l4c_nw_c2k_cell_info_rind(irat_ps_type_enum access_type, 
                                        kal_uint16 sid,
                                        kal_uint16 nid,
                                        kal_uint8 pzid,
                                        kal_uint16 base_id,
                                        kal_uint32 *sector_id,
                                        kal_uint8 subnet_length,
                                        kal_uint8 *carrier_id);

extern void l4c_nw_1x_conn_status_rind(kal_bool is_cs_conn_start);
extern void l4c_nw_emc_service_rind(rat_enum available_rat, kal_uint8 cause);
#ifdef __LTE_RAT__
extern void l4c_eval_sr_failure_rind(sr_failure_cause_enum failure_cause);
extern void l4c_ca_info_rind(rmmi_ca_info_struct *ecainfo);
#endif

extern void l4c_tx_report_rind(l4c_rat_enum rat, kal_int32 tx_power);

extern void l4c_nw_ims_pref_status_rind(kal_bool flag);
extern void l4c_nw_eimsps_rind(rat_enum rat, kal_uint8 type, hvolte_mode_change_cause_enum cause);

extern void l4c_nw_ims_lte_connection_status_rind(kal_uint32 param1, kal_uint32 param2, kal_uint32 param3);

extern void l4c_nw_ecbm_rind(kal_bool is_ecbm_on);

extern void l4c_nw_cs_ecc_call_fail_rind(void);

extern void l4c_phb_sim_ecc_rind(kal_uint8* inptr);

extern void l4c_rrc_conn_est_rej_cause_rind(kal_uint8 cause);
extern void l4c_nw_hvolte_mode_rind(hvolte_mode_enum mode);

extern void l4c_nw_band_info_rind(kal_uint8 rat,kal_uint8 is_band_info_valid,kal_uint8 *band_info, kal_uint16 length);
extern void l4c_lte_bandwidth_rind(kal_uint16 lte_bandwidth);
extern void l4c_nw_umts_ps_domain_state_rind(kal_uint8 ps_conn_status);
extern void l4c_cs_voice_call_protection_rind(void);

//#if defined(__FAST_ROAMING_SEARCH__)
extern void l4c_nw_fmcc_rind(kal_uint8 *mcc); 
extern void l4c_nw_emcc_rind(kal_uint8 *mcc); 
//#endif
extern void l4c_rrc_conn_rel_rind(RATCM_RRC_ReleaseCause rrc_rel_cause);
extern void l4c_nw_send_esr_rind(void);

kal_bool l4c_is_eind_invalid_sim_info_changed(l4c_rac_response_enum cs_status, l4c_rac_gprs_status_enum ps_status, kal_uint8 cause, kal_uint8 *oper);

extern void l4c_erttstr_rind(kal_uint8 call_id, kal_uint8 *rtt_string, kal_uint16 rtt_string_length);
#ifdef __REMOTE_SIM__
extern void l4c_sim_rsaauth_rind(kal_uint8 msg_id_type, kal_uint8 *data);
extern void l4c_sim_rsimauth_rind(kal_uint8 msg_id_type);
#endif
extern void l4c_sib19_info_rind(kal_bool sib19_present);
extern void l4c_sim_app_ready_rind(kal_uint8 app_type, kal_uint8 channel_id, kal_uint8* mcc, kal_uint8* mnc);
extern void l4c_sim_event_rind(kal_uint8 event, kal_uint8 argc, kal_uint8* arg_list, peer_buff_struct * peer_buffer_ptr);
extern void l4c_sim_ecpin_rind(kal_uint8 ecpin_cause);
extern void l4c_nw_power_level_threshold_rind(kal_uint8 signal_status, kal_int32 RSRP_in_qdbm);

extern void l4c_rac_mt_paging_rind(void);

extern void l4c_sim_ct3g_switch_rind(kal_uint8 app_type, kal_uint8 ct3g_switch_src);

#ifdef __CHR_AB_INFO__
extern void l4c_nw_epsnlte_rind(kal_uint8 as_reason, kal_uint8 nas_reason);
#endif /* __CHR_AB_INFO__ */

extern void l4c_nw_c2k_silent_redial_rind(void);
extern void l4c_smu_sml_lock_status_update_rind(kal_uint8 sml_lock_rule,
                                                kal_uint16 sml_lock_sub_rule,
                                                kal_uint8 sml_device_lock_status,
                                                kal_uint8 sml_lock_rule_policy,
                                                kal_uint8 sml_state_is_valid_sim);
extern kal_bool l4c_nw_antenna_state_rind();


#ifdef __ARFCN_TO_CAMERA_SUPPORT__
extern void l4c_nw_frequency_report_rind(kal_bool flag, kal_uint8 rat);
extern void l4c_nw_fake_serv_info_report_rind(kal_uint8 simid, kal_uint8 main_sim, kal_uint8 is_connected, kal_uint8 num_arfcn, 
	                                             kal_uint8 rat, kal_uint16 *band, kal_uint32 *arfcn);
#endif

extern void l4c_nw_csfb_page_rind(kal_uint8 ton, kal_uint8 *cli);
extern void l4c_nw_csfb_result_rind(mm_emm_csfb_result_enum result);

extern void l4c_sim_usim_type_rind(kal_uint8 is_usim, kal_uint8 cdma_info, kal_uint8 is_isim);
extern void l4c_sim_iccid_ready_rind(kal_bool is_iccid_avilable);

extern void l4crac_nw_reject_rind(kal_uint8 op, kal_uint8 rej_cause);

extern void l4c_tx_power_status_rind(kal_uint8 event);
#endif /* _RMMI_IND_H */
