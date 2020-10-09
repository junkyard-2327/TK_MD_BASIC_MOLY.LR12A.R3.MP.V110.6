/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2010
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
 *   custom_l4_utility.h
 *
 * Project:
 * --------
 *   Maui_Software
 *
 * Description:
 * ------------
 *   This file provides the custom engineer mode declarations
 *
 * Author:
 * -------
 * -------
 *
 *============================================================================
 *             HISTORY
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
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/
#if !defined(L4_NOT_PRESENT)
 
#ifndef CUSTOM_L4_UTILITY_H
#define CUSTOM_L4_UTILITY_H

#include "ps_public_enum.h"

#if defined(__GEMINI__) && defined(__SIM_ME_LOCK__)
#include "smu_common_enums.h"
#endif



typedef enum
{
    SMS_CTRL_BY_SIM,
    CC_CTRL_BY_SIM,
    SS_CTRL_BY_SIM
}cm_ctrl_by_sim_enum;

typedef enum
{
    L4C_FEATURE_NOT_SUPPORT = 0,
    L4C_FEATURE_SUPPORT_WR8,
    L4C_FEATURE_SUPPORT_LR9,
    L4C_FEATURE_SUPPORT_LR11
}l4c_feature_support_enum;

typedef enum
{
    L4C_PS_MD_VERSION_WR8 = 1,
    L4C_PS_MD_VERSION_LR9 = 2,
    L4C_PS_MD_VERSION_LR11 = 3,
    L4C_PS_MD_VERSION_LR12 = 4,
    L4C_PS_MD_VERSION_LR13 = 5,
}l4c_ps_md_version_enum;


typedef enum
{
    CUSTOM_CC_T303 = 0,
    CUSTOM_CC_T305,
    CUSTOM_CC_T308,
    CUSTOM_CC_T310,
    CUSTOM_CC_T313
}custom_cc_timer_enum;

extern kal_wchar *custom_get_at_audio_download_folder();
extern kal_wchar *custom_get_at_image_download_folder();

#if defined(__NO_PSDATA_SEND_SCRI__) || defined(__FAST_DORMANCY__)
extern kal_uint8 custom_get_fd_monitor_slot(void);
extern kal_uint8 custom_get_fd_timer_id(kal_bool is_screen_on, kal_bool is_r8_fd_support, kal_bool is_cpc_suppot);
extern kal_bool custom_set_fd_timer(kal_uint8 timer_id, kal_uint16 timer_value);
extern kal_uint16 custom_get_fd_timer(kal_uint8 timer_id);
#endif

extern kal_int32 custom_signal_strength_cesq_level_to_raw(l4_cesq_param_enum type, kal_uint8 signal_level);

extern kal_uint8 custom_signal_strength_raw_to_cesq_level(l4_cesq_param_enum type, kal_int32 raw_in_qdbm);

extern kal_uint8 custom_signal_strength_raw_to_csq_level(
                kal_uint8 rat, 
                kal_int32 rssi_in_qdbm, 
                kal_int32 RSCP_in_qdbm,
                kal_int32 EcN0_in_qdbm,
                kal_uint8 ber,
                kal_uint8 current_band,
                kal_int32 RSRQ_in_qdbm,
                kal_int32 RSRP_in_qdbm);
              
extern kal_uint8 custom_signal_strength_raw_to_ciev_signal_level(
                kal_uint8 rat, 
                kal_int32 rssi_in_qdbm, 
                kal_int32 RSCP_in_qdbm,
                kal_int32 EcN0_in_qdbm,
                kal_uint8 ber,
                kal_uint8 current_band,
                kal_int32 RSRQ_in_qdbm,
                kal_int32 RSRP_in_qdbm);

#ifdef __MBIM_SUPPORT__
extern kal_uint8 custom_signal_strength_in_ts27007(kal_int32 strength_in_dbm);
#endif

#if defined(__GEMINI__) && defined(__SIM_ME_LOCK__)
#if defined(__SMB_SIMME_LOCK__)
extern kal_bool custom_l4c_root_lock_verify(kal_uint8 updated_sim, 
                                            smu_pending_password_id_enum updated_type, 
                                            smu_pending_password_id_enum *pending_password_tbl,
                                            link_sml_valid_sim_enum *real_sim_verify_state_tbl,
                                            kal_uint8 *need_unlock_table);
extern kal_bool custom_sml_is_nonctrlslot_always_lock_check(void);
extern kal_bool sml_check_ctrlslot_if_all_cat_unlock_state(kal_uint8 sml_lock_rule);
extern kal_bool custom_check_link_sml_not_legal_sim_rule(kal_uint8 updated_sim_slot);
extern kal_bool custom_check_link_sml_control_slot_sml_sim_status(sml_state_is_valid_sim_enum *control_slot_sml_sim_status);
extern kal_bool custom_sml_is_nonctrlslot_allow_sml_check(void);
#else
extern kal_bool custom_l4c_root_lock_verify(kal_uint8 updated_sim, 
                                            smu_pending_password_id_enum updated_type, 
                                            smu_pending_password_id_enum *pending_password_tbl,
                                            kal_uint8 *need_unlock_table);
#endif
#endif

extern kal_bool custom_fill_ecc_category(void);
extern kal_bool custom_cm_ctrl_by_sim(cm_ctrl_by_sim_enum module);
extern kal_uint8 custom_config_ss_asn_1(void);
extern void custom_set_eregchk_method(kal_uint8 cs_method, kal_uint8 ps_method);
extern void custom_get_eregchk_method(kal_uint8 *cs_method, kal_uint8 *ps_method);
extern kal_bool custom_cs_reg_state_change_check(kal_uint8 state1, kal_uint8 state2);
extern kal_bool custom_ps_reg_state_change_check(kal_uint8 state1, kal_uint8 state2);
extern l4c_feature_support_enum custom_query_feature_is_supported(kal_uint8 feature_id);

extern kal_bool custom_cc_tty_support_amr_wb(void);

#if defined(__CC_CUSTOMIZED_TIMER__)
extern kal_uint32 custom_cc_timer(custom_cc_timer_enum t);
#endif

extern ca_icon_display_mode_enum custom_get_ca_display_mode(void);

extern kal_bool custom_check_ecc_change_rat_retry_allowed_for_plmn(void);

extern void custom_set_imsi_mapping_to_sbp_id(kal_uint8 *imsi, kal_uint8 mnc_length_from_sim, kal_uint8 sim_id);
extern kal_uint16 custom_get_sim_sbp_id(void);
extern kal_uint16 custom_judge_sbp_id_use_mcc_mnc(kal_uint16 mcc, kal_uint16 mnc);
extern kal_uint16 custom_get_sim_sbp_id_by_ps(protocol_id_enum ps_id);
extern kal_bool custom_check_india_specific_mcc(kal_uint8 *mcc);

#ifdef __CHR_AB_INFO__
extern kal_uint8 custom_get_epsnlte_urc_ind_timer(void);
#endif /* __CHR_AB_INFO__ */
#ifdef __SENSITIVE_DATA_MOSAIC__
extern kal_bool custom_filter_secure_data(void);
#endif /* __SENSITIVE_DATA_MOSAIC__ */

extern kal_bool custom_enable_sml_cat_choice(void);
extern kal_bool custom_check_link_sml_legal_sim_rule(kal_uint8 updated_sim_slot);

extern kal_bool custom_get_mobile_data_state(void);
extern kal_bool custom_check_plmn_need_change_rat_retry(kal_uint8* camped_plmn);

extern kal_bool custom_l4c_check_lte_only_camped_network(kal_uint8 *plmn);

#ifdef __CARRIER_RESTRICTION__
extern kal_uint8 custom_get_crrst_sml_wild_char(void);
#endif /* __CARRIER_RESTRICTION__ */

extern kal_bool custom_sml_cat_verify_pass_permanent_unlock(void);
extern kal_uint8 custom_get_sml_wild_char(void);
#ifdef __ARFCN_TO_CAMERA_SUPPORT__
extern void custom_l4_camera_hopping_notify_callback(kal_uint32 value);
#endif
extern kal_bool custom_check_if_iccid_at_early_boot_required(void);

extern kal_bool custom_match_plmn_id_to_disable_pre_r8_FD(kal_char *plmnid , kal_char *mcc);

extern kal_bool custom_match_plmn_id_to_disable_both_FD(kal_char *plmnid);

extern kal_char *custom_op129_skip_signature_verify_pattern(void);

extern kal_bool custom_l4c_check_country_specific_mcc(kal_uint8 *plmn, kal_uint8 country_code);

extern kal_uint32 custom_get_l4c_lte_only_timeout(void);

extern l4c_rat_enum custom_check_imsi_to_change_rat_mode(kal_uint8* imsi);

#endif /* CUSTOM_L4_UTILITY_H */

#endif /* !defined(L4_NOT_PRESENT) */
