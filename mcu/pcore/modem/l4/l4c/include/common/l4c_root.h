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
 * l4c_root.h
 *
 * Project:
 * --------
 *   ALL
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

#ifndef _L4C_ROOT_H
#define _L4C_ROOT_H

#include "kal_general_types.h"
#include "smu_common_enums.h"
#include "l4c_common_enum.h"
#include "l4c_context.h"
#include "l3_inc_enums.h"

extern void l4c_root_sim_reset_req(module_type mod_id);

extern void l4c_root_sim_reset_rsp(module_type mod_id, kal_uint8 is_sim_inserted);

extern void l4c_root_power_on_ind(void);

extern kal_bool l4c_root_sim_mode_switch_req(kal_uint8 root_src_id);

extern void l4c_root_sim_mode_update_req(kal_uint8 new_sim_mode);

extern void l4c_root_power_off_req(kal_uint8 root_src_id);

extern void l4c_root_power_off_done_ind(kal_uint8 root_src_id);

extern kal_bool l4c_root_nw_efun_state_req(kal_uint8 root_src_id, kal_uint8 new_sim_mode);

extern kal_bool l4c_root_check_call_exist(kal_uint8 *which_sim);

extern kal_bool l4c_root_sim_support_mode_req(kal_uint8 src_id, kal_uint8 mode);

#if defined(__SMB_SIMME_LOCK__)
extern kal_bool l4c_root_lock_status_ind(kal_uint8 src_id, smu_security_type_enum type); //link_SML

extern void l4c_root_sml_super_verify_req(sml_lock_rule_policy_enum new_policy, 
                                          sml_state_is_valid_sim_enum is_valid_sim,
                                          kal_uint8* upgrade_table,
                                          kal_bool need_unlock);

extern void l4c_root_sml_restore_lock_req(sml_lock_rule_policy_enum new_policy, 
                                          sml_state_is_valid_sim_enum is_valid_sim,
                                          kal_uint8* downgrade_table,
                                          kal_bool need_relock);

extern void l4c_root_link_sml_service_lock_exe(kal_uint8 sim_slot_id, kal_uint8 op);
#else
extern kal_bool l4c_root_lock_status_ind(kal_uint8 src_id); //link_SML
#endif

extern void l4c_root_update_lock_status_ind(); //link_SML
    
extern smu_pending_password_id_enum l4c_root_get_pending_password_id(sim_interface_enum sim_id);

extern void l4c_root_set_pending_password_id(sim_interface_enum sim_id, smu_pending_password_id_enum password);

extern kal_bool l4c_root_process_dispatch();
extern void l4c_root_duplex_mode_change_req(kal_uint8 root_src_id);
extern kal_bool l4c_root_ecsra_exe_req(kal_uint8 src_id,
                                   kal_bool geran_tdma,
                                   kal_bool utran_fdd,
                                   kal_bool utran_tdd_lcr,
                                   kal_bool eutran_fdd,
                                   kal_bool eutran_tdd,
                                   mode_switch_cause_enum cause);

extern void l4c_root_duplex_mode_change_cnf_hdlr(void);

extern void l4c_root_dynamic_cfg_processing();

extern kal_bool l4c_root_dynamic_power_off_req(kal_uint8 src_id, l4c_root_action_enum action);

extern void l4c_root_set_reconfig_done_ind();

extern kal_bool l4c_root_cmd_conflict(kal_uint8 src_id, l4c_root_action_enum new_action);

extern void l4c_root_duplex_mode_required_req();

extern void l4c_root_duplex_mode_required_hdlr(kal_bool is_mode_change, l4c_radio_access_setting_struct *duplex_mode);

extern void l4c_root_set_ms_sv_req(kal_uint8 *data);

#if defined(__SMB_SIMME_LOCK__)
extern void l4c_root_update_sim_plugin_lock_status_ind();
extern kal_bool custom_sml_is_nonctrlslot_allow_sml_check(void);
#endif

extern kal_bool l4c_root_is_sim_support_mode(kal_uint8 sim_protocol_id);

#endif 

