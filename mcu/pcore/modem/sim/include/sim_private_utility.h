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
 *   sim_private_utility.h
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description:
 * ------------
 *   API provided by SIM task and inside-SIM task uses only
 *
 * Author:
 * -------
 * -------
 *
 *******************************************************************************/
#ifndef SIM_PRIVATE_UTILITY_H
#define SIM_PRIVATE_UTILITY_H

#include "kal_public_defs.h" //MSBB change #include "stack_config.h"
#include "kal_general_types.h"
#include "kal_public_api.h"
#include "sim_private_enum.h"
#include "sim_private_struct.h"
#include "sim_public_enum.h"
#include "sim_private_api.h"


/* Driver related*/
#include "drv_comm.h"
#include "dcl.h"

/*EM related*/
#include "em_sim_public_struct.h"


#if !defined(__L1_STANDALONE__)
#include "mrs_utility.h"
#endif


#ifdef __DSS_NO_RESET__
void sim_update_cache_ready_ind(sim_file_index_enum file_idx, kal_uint8 *data_ptr, kal_uint16 data_offset, kal_uint16 data_len, sim_context_struct *this_sim);

#define SIM_DSS_UPDATE_CACHE_READY_IND(_file_idx_, _ready_ind_, _ef_, _data_ptr_, _data_offset, _data_len_, _this_sim_)\
{\
    kal_mem_cpy(((_this_sim_)->dss.cache_read._ready_ind_._ef_)+(_data_offset), _data_ptr_, _data_len_); \
    kal_brief_trace(TRACE_INFO, INFO_DSS_UPDATE_CACHE, (_file_idx_)); \
}

kal_bool sim_check_is_dynamic_sim_switching(void);

#endif

kal_bool sim_is_gemini_mod(module_type mod_id);

#ifdef __SENSITIVE_DATA_MOSAIC__
kal_bool sim_is_user_sensitive_msg(msg_type msg_id);
#endif

void sim_force_card_type_ultility_handler(sim_force_card_type_enum type, sim_context_struct *this_sim);
void sim_dump_reset_context_send_ind(sim_reset_struct *reset_cntxt_ptr, sim_context_struct *this_sim);

kal_bool sim_check_file_cached(usim_sfi_enum sfi, sim_file_index_enum file_idx, sim_file_id_enum file_id, sim_cache_file_idx_enum *cache_file_idx, usim_logic_channel_enum channel, sim_context_struct *this_sim);

sim_cmd_result_enum sim_force_select(sim_file_index_enum file_idx,
                                     kal_uint8 *path,
                                     kal_uint8 *select_rsp_ptr,
                                     kal_uint16 *status_word,
                                     usim_logic_channel_enum channel,
                                     sim_context_struct *this_sim);

kal_uint8 sim_set_class_byte_by_channel_id(usim_logic_channel_enum channel, 
                                           sim_instruction_class_enum type, 
                                           sim_context_struct *this_sim);

kal_bool is_system_status_word(kal_uint16 status_word);

/* This function is check the request to get the full response with case 4 APDU command. */
kal_bool is_uicc_case4_get_full_response(kal_uint8 apdu_p3, 
                                         kal_uint16 txSize, 
                                         kal_uint16 rxSize, 
                                         const sim_context_struct *this_sim);


/* Check current APDU session is for ETSI specified application */
kal_bool is_access_etsi_applicaton(usim_logic_channel_enum channel_id, const sim_context_struct *this_sim);

/*
  Move is_sim_recovery from SMU context to MSG_ID_SIM_START_CNF.
  This flag should be TRUE between ESIMS:0,13 and ESIMS:1,14
*/
kal_bool sim_is_full_recovery_started(sim_context_struct *this_sim);

/**** [ALPS03486733]Ask OSTD to add SIM task into whitelist during lower power mode ****/
void sim_ostd_lock_sleep(protocol_id_enum ps_id);

/**** [ALPS03486733]Remove from OSTD whitelist since SIM task is idle now. ****/
void sim_ostd_unlock_sleep(protocol_id_enum ps_id);

kal_bool sim_is_physical_slot(sim_interface_enum actual_sim_id);

/* Used by DSBP_RECONFIG's users. Use 1~255 in order for each SIM task. */
void sim_incr_dsbp_trans_id(protocol_id_enum ps_id);
kal_uint8 sim_get_dsbp_trans_id(protocol_id_enum ps_id);

void sim_send_ap_error_notify_only(sim_error_cause_enum err_cause, sim_context_struct *this_sim);

void sim_stop_all_running_timer(sim_context_struct *this_sim);


kal_bool sim_check_is_card_disabled(sim_context_struct *this_sim);

void sim_esimpower_state_set(sim_esimpwr_state_enum new_state, sim_esimpwr_sub_type_enum new_sub_type, sim_context_struct *this_sim);

#ifdef __EUICC_SUPPORT__
/* Send one buffer block of a long R-APDU to L4C for generating intermediate response. */
void sim_send_apdu_res_block_ind(kal_uint8 src_id,
                                 kal_uint16 rsp_len,
                                 kal_bool is_last,
                                 kal_uint16 status_word,
                                 kal_uint8 *buffer_block,
                                 sim_context_struct *this_sim);

uicc_card_type_enum sim_get_uicc_type_from_aid(kal_uint8 *aid, kal_uint8 aid_len);
#endif

#endif
