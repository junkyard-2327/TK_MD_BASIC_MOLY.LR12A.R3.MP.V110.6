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
 * l4c_utility.h
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

#ifndef _L4C_UTILITY_H
#define _L4C_UTILITY_H

#include "mcd_l3_inc_struct.h"
#include "kal_public_defs.h" //MSBB change #include "stack_config.h"
#include "kal_general_types.h"
#include "lcd_lqueue.h"

#include "ps_public_enum.h"
#include "l3_inc_enums_public.h"
#include "nvram_enums.h"
#include "l4c_context.h"
#include "l4c_common_enum.h"
#include "l3_inc_local.h"
#include "l4crac_enums.h"
#include "ps_public_struct.h"

#ifdef __REMOTE_SIM__
#include "rsvas_struct.h"
#endif
#include "l4c_eval_struct.h"

#define UNUSED_PARAM(x) //if(x)

typedef enum
{
    L4C_BASEBAND_CODE,
    L4C_DSP_CODE,
    L4C_DSP_PATCH,
    L4C_SW_CODE,
    L4C_HW_CODE,
    L4C_FLAVOR_CODE = 13,
    L4C_DSP_LABEL,
    L4C_DSP_BUILD_TIME
} l4c_ms_revision_enum;

typedef enum
{
    CONVERT_TO_BCD_NORMAL,
    CONVERT_TO_BCD_WILD,
    CONVERT_TO_BCD_IGNORE_PLUS
}convert_to_bcd_enum;

typedef enum
{
    CONVERT_TO_DIGIT_NORMAL,
    CONVERT_TO_DIGIT_WILD,
    CONVERT_TO_DIGIT_EXT,
    CONVERT_TO_DIGIT_24008
}convert_to_digit_enum;

typedef enum
{
    L4C_REFRESH_CSP = 0x01,
    L4C_REFRESH_RAT = 0x02
}l4c_sim_refresh_file_enum;


typedef struct _CREE_MAP_ENTRY
{
    unsigned int index;
    unsigned char *cree_str;
} CREE_MAP_ENTRY;

extern kal_bool is_proper_owner(kal_uint8 src_id);
// mtk02514_phb
#define convert_to_bcd(source, dest, max_dest_len) convert_to_general_bcd(source, dest, max_dest_len, CONVERT_TO_BCD_NORMAL)
#define convert_to_bcd_wild(source, dest, max_dest_len) convert_to_general_bcd(source, dest, max_dest_len, CONVERT_TO_BCD_WILD)
extern kal_uint8 convert_to_general_bcd(kal_uint8 *source, kal_uint8 *dest, kal_uint8 max_dest_len, kal_uint8 type);


#define convert_to_digit(source, dest) convert_to_general_digit(source, dest, CONVERT_TO_DIGIT_NORMAL)
#define convert_to_digit_with_len(source, dest, len) convert_to_general_digit_with_len(source, dest, len)
#define convert_to_digit_wild(source, dest) convert_to_general_digit(source, dest, CONVERT_TO_DIGIT_WILD)
#define convert_to_digit_ext(source, dest) convert_to_general_digit(source, dest, CONVERT_TO_DIGIT_EXT)
#define convert_to_digit_24008(source, dest) convert_to_general_digit(source, dest, CONVERT_TO_DIGIT_24008)

#define L4C_DECLARE_AND_CONSTRUCT_LOCAL_PARAM(struct_type, var, init_type) \
    struct_type* var = (struct_type*)construct_local_para(sizeof(struct_type),init_type) //MAUI_02900475


#define RETURN_WITH_L4C_TRC(RETURN_VALUE) \
    l4c_trace_function_name_and_return_line(__FUNCTION__, __LINE__, RETURN_VALUE); \
    return RETURN_VALUE;


#define l4c_ps_dialup_disc_req(a,b,c) {}

typedef void (* l4c_timer_func_ptr)(void );

extern kal_uint8 convert_to_general_digit(kal_uint8 *source, kal_uint8 *dest, kal_uint8 type);

extern kal_uint8 convert_to_general_digit_with_len(kal_uint8 *source, kal_uint8 *dest, kal_uint8 len);

extern kal_uint8 plmn_convert_to_bcd(kal_uint8 *source, kal_uint8 *dest);

extern kal_uint8 plmn_convert_to_struct(kal_uint8 *source, plmn_id_rat_struct *dest);

extern kal_uint8 plmn_convert_to_digit(plmn_id_struct *source, kal_uint8 *dest);

extern kal_bool plmn_convert_int_to_struct(kal_uint8 plmn_num, kal_uint32 plmn_id, plmn_id_struct *dest);

//MAUI_02884093 extern kal_bool ss_string_skip_plus(kal_uint8 *source, kal_uint8 *dest);

extern kal_bool l4c_construct_phb_approve_str(kal_uint8 *source, kal_uint8 length); //MAUI_02884093

extern kal_uint8 get_bcd_byte(kal_uint8 digit, kal_uint8 type);

extern kal_uint8 get_ch_byte(kal_uint8 bcd, kal_uint8 type);

extern kal_uint8 get_ch_byte_raw(kal_uint8 bcd, kal_uint8 type);

extern kal_uint8 get_ch_byte_24008(kal_uint8 bcd);

extern kal_bool is_cmd_conflict(kal_uint8 src_id, kal_uint16 action);

extern kal_bool is_eq_cmd_conflict(kal_uint8 src_id, kal_uint16 action);

extern kal_bool is_phb_cmd_conflict(kal_uint8 src_id, kal_uint16 action);

extern kal_bool is_sms_cmd_conflict(kal_uint8 src_id, kal_uint16 action);

extern kal_bool is_ss_cmd_conflict(kal_uint8 src_id, kal_uint16 action);

extern kal_bool is_rac_cmd_conflict(kal_uint8 src_id, kal_uint16 action);

extern kal_bool is_rac_egtype_reg_conflict(void);

extern kal_bool is_rac_tcm_cmd_conflict(kal_uint8 src_id);

extern kal_bool is_smu_cmd_conflict(kal_uint8 src_id, kal_uint16 action);

extern l4c_gprs_cmd_conflict_cause_enum l4c_ps_check_cmd_conflict(kal_uint32 check_bitmap, kal_uint8 cid, kal_uint8 src_id);

extern l4c_gprs_cmd_conflict_cause_enum is_l4c_ps_set_cmd_conflict(kal_uint8 cid, kal_uint8 src_id, kal_uint16 action); //maui_01895693, mtk02285

extern l4c_action_enum l4c_ps_get_action_by_cid_n_src(kal_uint8 cid, kal_uint8 src_id);
#if 0
/* under construction !*/
#endif
extern l4c_action_enum l4c_ps_get_action_by_src(kal_uint8 src_id);
extern kal_uint8 l4c_ps_get_src_by_cid_n_action(kal_uint8 cid, l4c_action_enum action);
extern kal_uint8 l4c_ps_get_src_for_set_cmd(kal_uint8 cid);
extern kal_bool l4c_ps_check_is_src_free(kal_uint8 src_id);
extern kal_bool l4c_ps_check_is_cid_free(kal_uint8 cid);
extern kal_bool l4c_ps_check_is_table_free();
extern l4c_tcm_internal_cid_state l4c_ps_get_state_by_cid(kal_uint8 cid);
extern void l4c_ps_set_action(kal_uint8 cid, kal_uint8 src_id, kal_uint16 action);
extern void l4c_ps_clean_cid_action(kal_uint8 cid);
extern void l4c_ps_clean_src_action(kal_uint8 src_id);
extern void l4c_ps_print_action_table();

extern void l4c_ps_set_vzw_apn_enable_bitmap(kal_uint8 class_num, kal_bool is_enable );
extern kal_bool l4c_ps_check_if_both_class_1_and_class_2_are_enable();
extern void l4c_ps_clear_vzw_apn_enable_bitmap();
extern kal_bool l4c_ps_is_data_allowed(protocol_id_enum protocol_id);

#if 0 //def __CTM_SUPPORT__
/* under construction !*/
#endif 

extern kal_bool l4c_search_all_src(module_type which_sim, kal_uint16 action);

extern kal_bool l4c_search_all_src_ext(module_type which_sim, kal_uint16 action, kal_uint8 *src_id); //MAUI_02554068

extern kal_bool l4c_search_other_src(kal_uint8 src_id, kal_uint16 action); 

extern kal_uint8 l4c_conflict_search(kal_uint16 val);

extern void l4c_cmux_startup_req(kal_uint8 port);

extern void l4c_cmux_closedown_req(void);

extern void l4c_start_retry_timer_hdlr(kal_uint8 src_id);

//mtk01616_070515 : start 1 sec retry timer fro ss change phase request
extern void l4c_start_change_phase_retry_timer_hdlr(kal_uint8 src_id);

extern void l4c_start_sat_redial_duration_timer_hdlr(void);

extern void l4c_clear_sat_redial_duration_timer_hdlr(void);

extern void l4c_sat_redial_duration_expiry_hdlr(void);

extern void l4c_sat_file_change_hdlr(kal_uint8 src_id);

extern kal_bool l4c_cc_retry_allow_for_fta(kal_uint8 src_id);

extern kal_bool l4c_cc_retry_allow(kal_uint8 src_id);

extern kal_bool l4c_need_retry(kal_uint16 cause);

extern void l4c_cancel_timer_and_retry_allowed(kal_uint16 cause);

extern kal_bool l4c_need_retry_other_rat(kal_uint8 src_id, kal_uint16 cause); //MAUI_02554068
extern kal_uint8 l4c_get_ecc_retry_new_rat(void); //MAUI_02320299


extern void l4c_retry_hdlr(void);

extern void l4c_send_msg_hdlr(kal_uint8 src_id, kal_uint8 operation);

extern kal_bool check_multi_command(kal_uint8 result);

extern void l4c_gprs_send_data_timer_hdlr(void);

extern void l4c_gprs_data_timeout_hdlr(void);

extern void l4c_gprs_connection_timer_hdlr(void);

extern void l4c_gprs_connection_timerout_hdlr(void);

extern kal_bool l4c_sim_poweroff_done(void);

extern void l4c_sim_poweroff_timer_hdlr(void);
extern void l4c_sim_poweroff_timerout_hdlr(void);

extern void l4c_all_poweroff_done(void);

extern kal_bool l4c_ps_dialup_check_existence(kal_uint8 sim_id);
extern kal_uint8 l4c_ps_dialup_get_cid(kal_uint16 port);
extern kal_uint16 l4c_ps_dialup_get_port(kal_uint8 cid);
extern void l4c_ps_dialup_reset_port2cid(kal_uint8 cid);
extern void l4c_ps_dialup_set_port2cid(kal_uint16 port,kal_uint8 cid);

extern l4c_data_bearer_capablility_enum l4c_convert_data_speed_support_enum(data_speed_activate_enum low_layer_value);
extern void l4c_ps_update_gprs_status(l4c_handler_action_enum action);
extern void l4c_ps_update_overall_pdp_status_to_sim(l4c_gprs_status_enum *last_status, l4c_gprs_status_enum current_status);
extern void l4c_set_voice_centric_from_rac(kal_bool is_voice_centric_enable);
#if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif
extern kal_bool get_ms_revision(kal_uint8 equip_type, kal_uint8 *equip_id);

extern void l4c_convert_result(kal_uint8 l4c_result, kal_uint16 l4c_cause, kal_bool *result, kal_uint16 *cause);

extern kal_uint8 l4c_check_port_owner_source(kal_uint8 port);

extern void l4c_set_user_action(kal_uint8 mod, kal_uint8 user, kal_uint16 action);

extern void l4c_set_tcm_user_action(kal_uint8 cid, kal_uint8 src_id, kal_uint16 action);

extern kal_bool l4c_check_user_action(kal_uint8 mod, kal_uint8 user, kal_uint16 action);

extern void l4c_clear_all_cc_action();

#ifdef __APP_SECONDARY_PDP_SUPPORT__
extern kal_bool l4c_find_free_pdp_context(kal_uint8 *cid, kal_uint8 pid, kal_uint8 qos_id);
extern void l4c_find_pdp_pid2cid(kal_uint8 *cid, kal_uint8 pid, kal_uint8 qos_id);
extern void l4c_free_pdp_context(kal_uint8 cid, kal_uint8 *pid, kal_uint8 *qos_id);
#else /* __APP_SECONDARY_PDP_SUPPORT__ */ 
extern kal_bool l4c_find_free_pdp_context(kal_uint8 *cid, kal_uint8 pid);

extern void l4c_find_pdp_pid2cid(kal_uint8 *cid, kal_uint8 pid);

extern void l4c_free_pdp_context(kal_uint8 cid, kal_uint8 *pid);
#endif /* __APP_SECONDARY_PDP_SUPPORT__ */ 

extern kal_uint8 l4c_find_pdp_cid2pid(kal_uint8 cid);

extern void l4c_ConvertGSM7BitDefaultEncodingToAscii(
                kal_uint8 *message,
                kal_uint8 *msg,
                kal_uint16 length,
                kal_uint16 *outLen);

extern void l4c_set_download_path(kal_wchar *downlaod_path);

extern kal_bool has_any_current_action(kal_uint8 src_id);

extern kal_bool has_any_src_in_action(kal_uint8 mod, kal_uint16 action);

extern kal_bool l4c_check_online_state(kal_uint8 *online_src_id, kal_uint8 state);

extern kal_bool l4c_is_src_from_rmmi(kal_uint8 src_id);

extern kal_bool l4c_previous_rac_action_rsp(kal_uint16 next_action);

//extern void l4c_clear_concat_sms_array (void);
extern kal_bool l4c_mmi_result(kal_uint8 result);

extern void l4c_set_mt_call_event(kal_bool mt_call_exist,kal_uint8 mt_call_id);

extern void l4c_update_retry_call_state_ind(kal_uint8 call_id,kal_uint8 src_id);

extern void l4c_send_callid_assign_fail_ind(kal_uint8 src_id,kal_uint16 cause);


extern void l4c_ctrl_dcd_status(kal_uint8 src_id, module_type ownerid);

extern void l4c_check_cind_status(kal_uint8 *call, kal_uint8 *service, kal_uint8 *callsetup);

extern kal_bool l4c_check_dual_sim_state(module_type current_mod_id, kal_uint8 cfun_state);

extern void l4c_check_dual_sim_insert_status(module_type mod_id, kal_uint8 sim_inserted_status);

extern kal_bool l4c_send_dual_sim_power_on_ind(kal_uint8 src_id);

extern void l4c_context_selection(kal_uint8 sim_interface);
extern kal_uint8 l4c_get_bt_hf_atd_action(void);
extern void l4c_unified_ciev_staus(kal_uint8 *service, 
                                   kal_uint8 *signal, 
                                   kal_uint8 *roam, 
                                   kal_uint8 *call, 
                                   kal_uint8 *callsetup, 
                                   kal_uint8 *callheld);

extern kal_bool l4c_is_test_sim(void);
#ifdef __VSIM__
extern kal_bool l4c_is_vsim_on(void);
#if defined (__GEMINI__)
extern kal_bool l4c_is_vsim_auth_on(kal_uint8 simInterface);
#else
extern kal_bool l4c_is_vsim_auth_on(void);
#endif
extern kal_uint8 l4c_read_vsim_profileid(kal_uint8 simInterface);
extern kal_uint8 l4c_read_vsim_type(kal_uint8 simInterface, kal_uint8 profile_id);
extern kal_uint8 l4c_read_vsim_auth_algo(kal_uint8 simInterface, kal_uint8 profile_id);
extern void l4c_read_vsim_auth_res(kal_uint8 simInterface, kal_uint8 profile_id, kal_uint16 *auth_len, kal_uint8 *auth_res);
extern vsim_ver_type_enum l4c_read_vsim_ver(kal_uint8 simInterface);
extern kal_bool l4c_is_rat_vsim_conflict(kal_uint8 profile_id);
#endif
extern kal_uint8 l4c_check_sim_status(void);
extern l4c_sim_status_enum l4c_get_sim_status(void);
extern kal_bool l4c_check_auto_dtmf_modifier(kal_uint8 ch);
extern kal_uint8 l4c_get_cfun_state(void);
extern kal_uint8 l4c_get_cfun_state_by_protocol_id(protocol_id_enum protocol_id);

extern kal_uint8 l4_custom_approval_type(kal_uint8 operation_type,kal_uint8 src_id);


extern void l4c_phb_format_alpha_id(void *alpha_id, kal_uint8 *rsp_string);
extern void l4c_phb_set_last_number_dialed(void *tel, kal_uint8 type, kal_uint8 address_type);
extern void l4c_phb_atd_mem_dial(kal_uint8 *tel_number, kal_uint8 ton);
extern void l4c_phb_set_result_code(kal_uint8 phb_result, kal_uint16 phb_cause, void *result, kal_uint8 other_cond);
extern void l4c_phb_set_tel_number(void *phb_tel, void *l4c_phb_tel, convert_to_bcd_enum convert_method);
extern phb_storage_enum l4c_phb_get_sim_storage_by_current_module(void);

extern void l4c_reset_sms_context();

extern void l4c_activate_sub_modules(kal_uint8 src_id); 

extern void l4c_reset_sub_modules(l4c_sub_module_enum sub_mod, kal_bool is_fdn_change);

extern void l4c_clear_poweron_action(kal_uint8 src_id); 

extern void l4c_nw_sysconfig_update(kal_uint8 src_id);

extern void l4c_nw_syssel_update(kal_uint8 src_id);

extern void l4c_save_syssel_setting(kal_uint8 src_id, kal_uint8 band);

extern void* l4c_construct_nvram_write_local_para(kal_uint8 access_id, nvram_lid_enum file_idx, kal_uint16 para);
extern void* l4c_construct_nvram_read_local_para(kal_uint8 access_id, nvram_lid_enum file_idx, kal_uint16 para, kal_uint16 rec_amount);

extern void l4c_target_reset(kal_uint8 sec);

extern void l4c_clear_retry_call(void);
extern void l4c_clear_all_retry_call(void);

extern void l4c_clear_sim_power_state(void);

extern void l4c_nw_power_off_clear_state(void);
extern void l4c_nw_rfoff_clear_hvolte_parameter(void);

extern kal_bool l4c_nw_c2k_rfoff_req(void);
extern kal_bool l4c_c2k_power_off_req(kal_uint8 src_id);

extern kal_bool l4c_check_power_off_ready();

extern void l4c_cc_save_ceer_cause(l4c_result_enum response,kal_uint8 cause_present,kal_uint16 cause);

extern void l4c_need_notify_gas_to_bar_current_cell(kal_uint16 cause);

extern kal_bool l4c_wait_limited_service(void);
extern kal_bool l4c_wait_normal_service(void);
#ifdef __ECALL_SUPPORT__
extern kal_bool l4c_get_ecall_number(l4_addr_bcd_struct *called_number,kal_uint8 ecc_info);
#endif 
#if defined(__CSG_SUPPORT__)
extern void l4c_free_csg_list(rac_csg_list_struct *csg_list);
#endif

extern kal_bool l4c_cc_check_call_exist(kal_uint8 src_id);

#ifdef __VOLTE_SUPPORT__
extern kal_bool l4c_cc_check_ims_call_exist(void);
extern kal_bool l4c_cc_check_in_call_session(kal_uint8 src_id);
#endif

extern void l4c_set_led_7_segment_debug(l4c_data_speed_support_enum data_speed_for_cell_info,
                                        l4c_data_bearer_capablility_enum data_bearer_from_l2);


extern rat_enum l4c_get_active_rat(void);

extern rat_enum l4c_get_active_3gpp_rat(void);

extern kal_bool is_rac_activated(void);

extern kal_bool is_current_rac_activated();

extern kal_bool is_tcm_activated();
extern kal_bool is_current_tcm_activated();
extern void l4c_act_rac_req();
extern void l4c_act_tcm_req();
extern void l4c_power_on_stage1_finished_ind(void);

#if defined(__NO_PSDATA_SEND_SCRI__) || defined(__FAST_DORMANCY__)
extern kal_bool l4c_fd_need_force_send_SCRI(void);
extern void l4c_fd_monitor_timeout_hdlr(void);
extern void l4c_fd_start_monitor_timer(kal_uint8 src_id);
extern void l4c_fd_check_pdp_statistics(void);
#endif

extern kal_bool l4c_check_state_is_registered(reg_state_enum reg_state);

extern kal_bool l4c_check_cid_activated_with_same_config(kal_uint8 cid, pdp_addr_type_enum pdp_type, kal_uint8 *AccessString, kal_uint8 *UserName, kal_uint8 *Password);

extern kal_uint8 l4c_search_activated_cid_with_given_config(pdp_addr_type_enum pdp_type, kal_uint8 *AccessString, kal_uint8 *UserName, kal_uint8 *Password);

extern kal_bool l4c_notify_rac_cgact_event();

extern kal_bool l4c_notify_rac_cgact_event();
extern kal_bool l4c_check_is_sglte_mode(kal_uint8 simIndex);

extern l4c_modem_capability_enum l4c_check_modem_capability(l4c_modem_capability_enum capability);
extern l4c_modem_capability_enum l4c_check_protocol_capability(protocol_id_enum protocol_id, l4c_modem_capability_enum capability);
extern kal_int32 l4c_plmn_order_compare (const void * plmn_a, const void * plmn_b);
extern void l4c_plmn_increasing_order(kal_uint8 total_num, kal_uint8 *plmn_list_ptr);

extern kal_bool l4c_check_protocol_cap_with_gmss_mode(protocol_id_enum protocol_id,l4c_modem_capability_enum capability);
extern kal_bool l4c_check_cur_protocol_cap_with_gmss_mode(l4c_modem_capability_enum capability);

extern l4c_rat_enum l4c_rat_mode_validator(l4c_rat_enum old_rat_mode);

extern kal_bool check_if_NA_network(const kal_char *nw_mcc);
extern void l4c_load_hvolte_e911_config(void);
extern void l4c_save_hvolte_e911_config_to_nvram(protocol_id_enum ps_id);

extern void l4c_start_emcss_timer(void);
extern void l4c_stop_emcss_timer(void);
extern void l4c_emcss_timeout_hdlr(void);

extern void l4c_start_ecbm_timer(void);
extern void l4c_stop_ecbm_timer(void);
extern void l4c_ecbm_timeout_hdlr(void);

extern kal_uint8 plmn_convert_bcd_to_digit(const kal_uint8 *plmn_byte, kal_uint8 *dest);
extern kal_uint8 decode_network_name(kal_uint8 nw_name_len, const kal_uint8 *nw_name,
                                        kal_uint8 dest_len, kal_uint8 *dest,
                                        const kal_uint8 *mcc, kal_uint8 *dcs);
extern kal_bool is_plmn_match(const kal_uint8 *sim_plmn, const kal_uint8 *nw_plmn);
extern kal_uint8 plmn_convert_digit_to_struct(kal_uint8 *source, plmn_id_struct *dest);
extern kal_bool l4c_cc_retry_call_exist(void);

extern void l4c_start_volte_hys_timer(void);
extern void l4c_stop_volte_hys_timer(void);
extern void l4c_volte_hys_timeout_hdlr(void);

extern void l4c_timeout_cleanup(l4c_timer_id_enum timer_id);
extern void l4c_cancel_timer(l4c_timer_id_enum timer_id);

extern kal_bool l4c_is_timer_running(l4c_timer_id_enum timer_id);
extern kal_uint32 l4c_query_timer_value_hdlr(l4c_timer_id_enum timer_id);
extern kal_bool l4c_set_timer_value_hdlr(l4c_timer_id_enum timer_id, kal_uint32 timer_value);
extern kal_uint8 l4c_get_dongle_mode(void);
extern kal_uint16 l4c_convert_act_to_eact(kal_uint8 act);
extern void l4c_check_and_send_call_status_req(kal_uint8 msg_type, kal_uint8 call_id);
extern void l4c_send_rac_call_status_req(call_status_enum call_status, call_type_indication_enum call_type);


extern void l4c_start_txrxtime_timer(void);
extern void l4c_stop_txrxtime_timer(void);
extern void l4c_txrxtime_timeout_hdlr(void);
#if defined(__GEMINI__)
extern kal_bool is_efun_cmd_conflict(kal_uint8 src_id, kal_uint8 efun_state);
#endif

extern kal_bool l4c_sim_check_operator_card(sim_operator_type_enum operator_type, kal_uint8 sim_interface);
extern kal_bool l4c_sim_check_operator_card_by_iccid(sim_operator_type_enum operator_type, kal_uint8 sim_interface);

extern kal_bool l4c_nw_set_apc_control_info_req(kal_uint8 src_id,
								 kal_uint8 enable,
								 kal_uint8 mode,
								 kal_uint16 timer);

extern void l4c_nw_pseudo_bs_query_req(kal_uint8 src_id);
extern kal_bool l4c_boot_mode_notify_hdlr(msg_type notify_msg_id);
extern void l4c_boot_mode_rsp(msg_type notify_msg_id, kal_bool result, kal_bool is_from_ft);

#ifdef __REMOTE_SIM__
extern kal_bool l4c_is_rsim_present(kal_uint8 sim_id);
extern rsvas_id_enum l4c_get_rsvas_id(void);
extern kal_bool l4c_is_aka_sim_present(kal_uint8 sim_id);
extern void l4c_sim_rsim_start_plugin_timer_hdlr(void);
extern void l4c_sim_rsim_plugin_timerout_hdlr(void);
extern void l4c_sim_rsim_ersimauth_timeout_hdlr(void);
extern void l4c_sim_rsim_ersimauth_start_timer(void);
extern void l4c_sim_rsim_ersimauth_stop_timer(void);
#endif

#ifdef __ALLOW_CALL_DURING_SMS_IN_OTHER_STACK__
extern void l4c_to_sms_send_call_status_req(kal_uint8 msg_type, kal_uint8 call_id);
#endif

extern void l4c_start_sbp_timer(kal_timer_func_ptr timeout_hdlr, void *param_ptr, kal_uint32 time_in_sec);
extern void l4c_stop_sbp_timer(void);

extern void l4c_notify_ipcore_plmn_list_event(l4c_ipcore_plmn_list_action_enum plmn_list_action);

extern void l4c_nw_power_level_threshold_start_timer_hdlr(l4c_timer_id_enum timer, kal_uint8 time);
extern void l4c_nw_power_level_threshold_stop_timer_hdlr(l4c_timer_id_enum timer);
extern void l4c_nw_power_level_threshold_timerout_hdlr();
extern void l4c_nw_get_power_level_threshold(kal_int32 *upper_threshold, kal_uint8 *tup,
	        kal_int32 *lower_threshold, kal_uint8 *tlo);
extern kal_bool l4c_is_peer_ps_c2k_existed();
extern kal_bool l4c_has_any_call_session();

extern void l4c_set_user_action_for_all_sims(kal_uint8 mod, kal_uint8 user, kal_uint16 new_action, kal_uint16 previous_action);

extern void l4c_sim_duplex_mode_ind_hdlr(duplex_mode_change_action_enum sim_duplex_op);

extern void l4c_send_cb_update_for_duplex_mode_req(void);

extern void l4c_sms_send_etws_setting(void);
extern kal_bool l4c_is_apvsim_on(void);

extern l4c_sim_state_enum l4c_sim_get_power_state(kal_uint8 ps_id);
extern kal_bool l4c_sim_is_dss_ongoing(void);
extern kal_bool l4c_sim_is_card_type_switching(void);

l4c_nw_dump_context l4c_nw_get_dump_context();
l4c_cc_dump_context l4c_cc_get_dump_context();
l4c_sms_dump_context l4c_sms_get_dump_context();
l4c_sim_dump_context l4c_sim_get_dump_context();
l4c_smu_dump_context l4c_smu_get_dump_context();
l4c_ims_dump_context l4c_ims_get_dump_context();
l4c_phb_dump_context l4c_phb_get_dump_context();

extern kal_uint8 l4c_get_erfidx_index_from_srcid(kal_uint8 srcid);
extern void l4c_op12_lock_reg_by_vzw_adm_apn(kal_bool lock_enable);
extern kal_bool l4c_get_is_op12_lock(kal_uint8 ps_id);
extern void l4c_op12_unlock_timer_hdlr();
extern void l4c_op12_lock_timer_hdlr();
extern void l4c_op12_lock_send_dereg();
extern void l4c_op12_unlock_send_reg();
extern kal_bool l4c_is_cdma_less(void);


extern void l4c_op01_lock_send_dereg();
extern void l4c_op01_unlock_send_reg();
extern void l4c_set_op01_lock_unlock(kal_bool lock_state);
extern kal_bool l4c_get_is_op01_lock(kal_uint8 ps_id);

extern kal_bool l4c_sbp_is_any_dsbp_on_going();

extern kal_bool l4c_sim_duplex_mode_reset_done();

/*IWLAN - Power Level Threshold*/
extern kal_bool l4c_is_cell_power_meas_disable_needed(l4c_sig_type_enum sig_type);
extern kal_bool l4c_is_cell_power_meas_enable_needed();
extern l4c_timer_func_ptr l4c_get_pwl_timeout_hdlr( l4c_pwl_thrhd_timer_id_enum which_timer );
extern void l4c_pwl_thrhd_gsm_rssi_timerout_hdlr(void);
extern void l4c_pwl_thrhd_utran_rscp_timerout_hdlr(void);
extern void l4c_pwl_thrhd_utran_ecno_timerout_hdlr(void);
extern void l4c_pwl_thrhd_lte_rsrp_timerout_hdlr(void);
extern void l4c_pwl_thrhd_lte_rsrq_timerout_hdlr(void);
extern void l4c_pwl_thrhd_lte_rssnr_timerout_hdlr(void);
extern void l4c_nw_iwlan_pwl_thrhd_stop_timer_hdlr(l4c_pwl_thrhd_timer_id_enum timer);
extern l4c_pwl_thrhd_timer_id_enum l4c_get_pwl_thrhd_timer_id(l4c_sig_type_enum sig_type);
extern void l4c_nw_iwlan_pwl_thrhd_start_timer_hdlr(l4c_pwl_thrhd_timer_id_enum timer, kal_uint16 time);
extern void l4c_nw_iwlan_pwr_level_ind_hdlr(kal_int32 sig_value_in_qdbm, l4c_sig_type_enum sig_type);
extern void l4c_nw_pwl_thrhd_timerout_hdlr(l4c_sig_type_enum sig_type, kal_int32 sig_value_in_qdbm);
extern kal_uint16 l4c_get_lte_signal_level(l4c_eval_cell_power_level_ind_struct *msg_ptr, l4c_sig_type_enum sig_type);

extern kal_bool l4c_nw_cops_get_current_plmn_id(kal_uint8 *oper);
extern kal_bool l4c_duplex_mode_is_cpin_allowed(kal_uint8 channel_id);

extern l4_ps_config_result_enum l4c_nw_ps_attach_config_result(void);

extern void* l4c_alloc_ctrl_buffer(unsigned int size);
extern void l4c_free_ctrl_buffer(void *ptr);

extern kal_bool l4c_queue_remove_item_by_index(lcd_lqueue *queue, kal_uint32 delete_idx);
extern l4c_queue_pending_action_item_struct* l4c_queue_get_first_pending_item(void);

extern kal_uint16 l4c_get_num_of_pending_action_hdlr_item_table(void);
extern const l4c_queue_pending_action_hdlr_item_struct *l4c_get_pending_action_hdlr_item_table(void);

extern kal_bool l4c_enqueue_pending_action_item(l4c_pending_action_enum pending_action, void *data);
extern kal_bool l4c_dequeue_pending_action_item(void);
extern void l4c_queue_print_all_pending_action(void);

extern kal_bool l4c_enqueue_ps_attach_action(l4c_queue_pending_action_item_struct *pending_action_item);
extern kal_bool l4c_dequeue_ps_attach_action(void *data);
extern kal_bool l4c_enqueue_ps_detach_action(l4c_queue_pending_action_item_struct *pending_action_item);
extern kal_bool l4c_dequeue_ps_detach_action(void *data);

extern kal_bool l4c_nw_trigger_ps_attach_action(kal_bool follow_on_request);
extern kal_bool l4c_nw_trigger_ps_detach_action(void);

extern kal_bool l4c_get_is_op01_sim_lock(kal_uint8 ps_id);
extern kal_bool l4c_get_is_op01_rat_lock(kal_uint8 ps_id);
extern void l4c_send_op01_lock_cnf(kal_bool result);
extern kal_bool l4c_deque_op01_sim_lock_action();
extern kal_bool l4c_deque_op01_sim_unlock_action();
extern kal_bool l4c_deque_op01_rat_lock_action();
extern kal_bool l4c_deque_op01_rat_unlock_action();
extern kal_bool l4c_triger_op01_sim_lock_detach();
extern kal_bool l4c_triger_op01_sim_unlock_attach();
extern kal_bool l4c_triger_op01_rat_lock_exe();
extern kal_bool l4c_triger_op01_rat_unlock_exe();
extern kal_bool l4c_enqueue_op01_lock_action(l4c_queue_pending_action_item_struct *pending_action_item);

extern kal_bool l4c_triger_lock_detach(l4c_action_enum l4c_action, l4c_pending_action_enum pending_queue_action);
extern kal_bool l4c_triger_unlock_attach(l4c_action_enum l4c_action, l4c_pending_action_enum pending_queue_action);

extern kal_bool l4c_dequeue_imei_meid_lock_detach_action(void *data);
extern kal_bool l4c_dequeue_imei_meid_lock_attach_any_action(void *data);
extern kal_bool l4c_dequeue_imei_meid_unlock_attach_action(void *data);
extern kal_bool l4c_enqueue_imei_meid_lock_action(l4c_queue_pending_action_item_struct *pending_action_item);

extern void l4c_op01_check_rat_mode_and_prefer_rat(kal_uint8* rat_mode, kal_uint8* prefer_rat);
extern rat_enum  l4c_op01_check_rat_mode(rat_enum rat_mode);
extern kal_bool l4c_reset_l4_eq_context(sim_interface_enum sim_ps_id);

#ifdef __KOR_CUSTOMIZATION__
extern void l4c_get_ecc_sc( void * ecc_retry_setup_ptr );
extern kal_bool l4c_is_plmn_changed(plmn_id_struct *plmn_id_ptr);
extern void l4c_update_kormno_fake_nw_ecc( plmn_id_struct * plmn_id_ptr );
#endif /* __KOR_CUSTOMIZATION__ */

extern kal_bool l4c_disable_rat_with_ecc_validator(rat_enum disable_rat);

#ifdef __CHR_AB_INFO__
extern void l4c_epsnlte_start_timer_hdlr(l4c_timer_id_enum timer, kal_uint8 time);
extern void l4c_epsnlte_stop_timer_hdlr(l4c_timer_id_enum timer);
extern void l4c_epsnlte_timeout_hdlr(void);
#endif /* __CHR_AB_INFO__ */

extern void l4c_nw_clear_ims_nw_feature_support_context();
extern kal_uint8 l4c_sim_query_tray_info(kal_uint8 sim_interface);
#if defined(__MODEM_EM_MODE__)
extern kal_uint32 l4c_em_destination(ilm_struct *ilm_ptr);
#endif

extern void l4c_sim_cal_ps_sim_map(kal_uint8 master_sim_bitmask, kal_uint8 *ps_sim_map);
extern kal_uint8 l4c_sim_cal_master_sim_bitmask(kal_uint8 *ps_sim_map);

#if defined(__SENSITIVE_DATA_MOSAIC__)
extern sap_type l4c_check_sensitive_data_msg(msg_type msg_id,sap_type sap_id);
#endif

#if !defined(__MTK_TARGET__)
extern void l4c_ut_set_master_sim_id(sim_interface_enum simId);
#endif


extern kal_bool compare_plmn(plmn_id_struct *cur_plmn_id_ptr, plmn_id_struct *new_plmn_id_ptr);
extern kal_bool is_plmn_valid(plmn_id_struct *plmn_id_ptr);
extern kal_int8 l4c_get_efun_rfoff_cause(void);
extern kal_uint16 l4c_get_mcc_from_plmn_found(void);
extern kal_bool l4c_ss_check_if_SS_operation_on_another_stack();

extern kal_bool l4c_get_iccid(kal_uint8 ps_id, kal_uint8 *iccid_str);

#ifdef __L4C_GPRS_UT__
extern kal_bool l4c_is_test_sim_ut(void);
#endif

extern kal_uint8 l4c_get_ps_id_imei_meid_blocked_source(void);
extern rat_enum l4c_get_rat_imei_meid_blocked_source(void);
extern l4c_rat_group_enum l4c_get_rat_group(rat_enum rat);

extern kal_bool l4c_check_change_rat_retry_allowed_in_plmn(void);
extern rat_enum l4c_query_prefer_rat_mode_by_ps_id(protocol_id_enum ps_id);
extern void l4c_update_ecc_call_id_for_srvcc(kal_uint8 call_id);

/* L4C submodules MUST call l4c_phb_send_approve_req()
   to send MSG_ID_L4CPHB_APPROVE_REQ with approve_src. */
extern void l4c_phb_send_approve_req(l4c_phb_approve_src_enum approve_src,
                                              l4cphb_approve_req_struct *l4cphb_approve_req_ptr,
                                              kal_uint8 *buffer_ptr);

extern kal_uint8 l4c_get_num_of_phb_approve_cnf_callback_table(void);
extern const l4c_phb_approve_cnf_callback_struct *l4c_get_phb_approve_cnf_callback_table(void);

/*****************************************************************/
/* Beginning of callback functions for MSG_ID_L4CPHB_APPROVE_CNF */
/*****************************************************************/
extern void l4ccsm_cc_call_setup_phb_approve_cnf(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr);
extern void l4c_ps_phb_approve_cnf(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr);
extern void l4csmsal_sms_phb_approve_cnf(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr);
extern void l4ccsm_ciss_parse_ss_phb_approve_cnf(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr);
extern void l4ccsm_ciss_cusd_phb_approve_cnf(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr);
extern void l4cphb_eapprove_phb_approve_cnf(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr);
/***********************************************************/
/* End of callback functions for MSG_ID_L4CPHB_APPROVE_CNF */
/***********************************************************/
extern kal_uint8 l4c_cc_check_sim_interface(void);

#ifdef __SMB_SIMME_LOCK__

extern kal_bool l4c_nw_is_service_mode_change_redundant(l4c_action_enum action, smu_sim_inserted_enum sim_status);

extern void l4c_nw_service_mode_change_exe();

extern void l4c_nw_service_mode_change_reattach();

#endif /* __SMB_SIMME_LOCK__ */

extern void l4c_sim_free_sim_parameter(void);


extern kal_bool l4c_nw_is_ps_attach_lock(kal_uint8 ps_id);

extern void l4c_trace_function_name_and_return_line(const kal_char *function_name, kal_uint32 line, kal_bool return_value);

extern void l4c_nw_check_rat_change_needed(kal_uint8 *plmn);

extern kal_bool l4c_find_sms_category_for_mt_sms(peer_buff_struct *peer_buff_ptr);

extern kal_bool l4c_find_sms_category_for_mo_sms(peer_buff_struct *peer_buff_ptr) ;

extern kal_bool l4c_find_sms_category_for_cmss(peer_buff_struct *peer_buff_ptr) ;

extern void l4c_update_scp_monitor_data(l4c_scp_monitor_enum input);

extern void l4c_convert_call_type_to_scp_enum(csmcc_cpi_msg_type_enum cpi_ind_value);

extern kal_uint8 l4c_get_scp_monitor_value(void);

extern void l4c_nw_antenna_state_report_start_timer_hdlr(void);
extern void l4c_nw_antenna_state_timerout_hdlr();

extern kal_bool l4c_is_home_country();

#ifdef __ARFCN_TO_CAMERA_SUPPORT__
extern void l4c_clear_camera_earfcn_info(void);
extern void l4c_camera_report_call_ind (kal_bool is_call_present);
#endif

extern void l4c_custom_config_fd_setting(protocol_id_enum ps_id);

#ifdef __SAT__
extern kal_uint8 l4c_get_call_id_before_SAT_redial(void);
extern void l4c_set_call_id_before_SAT_redial(kal_uint8 call_id);
extern kal_bool l4c_check_first_attempt_SAT_call(void);
#endif /* __SAT__ */

extern kal_bool l4c_get_nitz_information(l4c_nw_time_zone_time_struct *nitz_ptr);

extern void l4c_lte_only_timeout_hdlr(void);
extern void l4c_stop_lte_rat_mode_change_timer_hdlr(void); 
extern void l4c_start_lte_rat_mode_change_timer_hdlr(void); 

extern void l4c_nw_indicate_plmn_list_to_peer_sim(kal_bool is_plmn_list_start);
extern kal_uint8 l4c_skip_invalid_characters(kal_uint8 *number);
#ifdef __TFN_SIMLOCK__
extern kal_bool l4c_check_if_sp_verify_failed(void);
#endif

extern l4c_rat_enum l4c_modify_rat_mode_based_on_imsi(l4c_rat_enum new_rat_mode);

extern kal_bool l4c_enqueue_set_rat_mode_action(l4c_queue_pending_action_item_struct *pending_action_item);

extern kal_bool l4c_dequeue_set_rat_mode_action(void *data);

extern l4c_power_level_threshold_range_enum l4c_get_threshold_range(kal_uint8 index);

extern l4c_power_level_threshold_range_enum l4c_check_signal_value_range(kal_int32 sig_value, kal_uint8 sig_type);

extern kal_bool l4c_is_threshold_changed(iwlan_l4c_set_pwl_thrhd_req_struct *current_threshold,
                                          l4c_pwl_thrhd_struct *previous_threshold);

#endif /* _L4C_UTILITY_H */ /* l4c_utility.h */
