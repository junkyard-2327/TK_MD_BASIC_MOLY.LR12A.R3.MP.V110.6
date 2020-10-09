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
 *	sim_trc.h
 *
 * Project:
 * --------
 *   MT6208
 *
 * Description:
 * ------------
 *   This file is trace map definition.
 *
 * Author:
 * -------
 * -------
 *
 *******************************************************************************/

#ifndef _SIM_TRC_H
#define _SIM_TRC_H

#ifndef GEN_FOR_PC
#include "kal_public_defs.h" //MSBB change #include "stack_config.h"
#endif /* GEN_FOR_PC */

#include "kal_trace.h"

#if !defined(GEN_FOR_PC)
#if defined(__TST_MODULE__) || defined(__CUSTOM_RELEASE__)
    #include "sim_trc_gen.h"
#endif /* TST Trace Defintion */
#endif

BEGIN_TRACE_MAP(MOD_SIM)

    /* TRACE_FUNC trace class */
    TRC_MSG(FUNC_SIM_START_REQ_HANDLER,"sim_start_req_handler()")
    TRC_MSG(FUNC_SIM_APP_START_REQ_HANDLER,"sim_app_start_req_handler()")
    TRC_MSG(FUNC_SIM_WRITE_REQ_HANDLER,"sim_write_req_handler()")
    TRC_MSG(FUNC_SIM_READ_REQ_HANDLER,"sim_read_req_handler()")
    TRC_MSG(FUNC_SIM_INCREASE_REQ_HANDLER,"sim_increase_req_handler()")
    TRC_MSG(FUNC_SIM_SECURITY_REQ_HANDLER,"sim_security_req_handler()")
    TRC_MSG(FUNC_SIM_RUN_ALGO_REQ_HANDLER,"sim_run_algo_req_handler()")
    TRC_MSG(FUNC_SIM_SEEK_REQ_HANDLER,"sim_seek_req_handler()")
    TRC_MSG(FUNC_SIM_FILE_INFO_REQ_HANDLER,"sim_file_info_req_handler()")
    TRC_MSG(FUNC_SIM_DIAL_MODE_REQ_HANDLER,"sim_dial_mode_req_handler()")
    TRC_MSG(FUNC_SIM_STATUS_REQ_HANDLER,"sim_status_req_handler()")
    TRC_MSG(FUNC_SIM_POWEROFF_REQ_HANDLER,"sim_poweroff_req_handler()")
#ifdef __DSS_NO_RESET__
    TRC_MSG(FUNC_SIM_SWITCH_START_REQ_HANDLER,"sim_switch_start_req_handler()")
#endif
    TRC_MSG(FUNC_SIM_TIMER_EXPIRY_HANDLER,"sim_timer_expiry_handler()")
    TRC_MSG(FUNC_SIM_READ_DIR_REQ_HANDLER,"sim_read_dir_req_handler()")

    TRC_MSG(FUNC_SIM_BT_SAP_CONNECT_REQ_HANDLER, "bt_sim_connect_req_handler()")        /* Nick 20070117 */
    TRC_MSG(FUNC_SIM_BT_SAP_RESET_REQ_HANDLER, "bt_sim_reset_req_handler()")    /* Nick 20070117 */
    TRC_MSG(FUNC_SIM_BT_SAP_APDU_REQ_HANDLER, "bt_sim_apdu_req_handler()")      /* Nick 20070117 */
    TRC_MSG(FUNC_SIM_BT_SAP_DISCONNECT_REQ_HANDLER, "bt_sim_disconnect_req_handler()")  /* Nick 20070117 */
    TRC_MSG(FUNC_SIM_BT_SAP_POWER_OFF_REQ_HANDLER, "bt_sim_power_off_req_handler()")    /* Nick 20070117 */
    TRC_MSG(FUNC_SIM_BT_SAP_POWER_ON_REQ_HANDLER, "bt_sim_power_on_req_handler()")        /*mtk01612: [MAUI_02356228]*/    

    TRC_MSG(FUNC_L4C_SIM_GET_GSMCDMA_DUALSIM_INFO_REQ_HANDLER, "l4c_sim_GET_gsmcdma_dualsim_info_req_handler()")/* Nick 20080808 */
    TRC_MSG(FUNC_L4C_SIM_SET_GSMCDMA_DUALSIM_INFO_REQ_HANDLER, "l4c_sim_SET_gsmcdma_dualsim_mode_req_handler()")/* Nick 20080808 */

    /* MAUI_03082391 */
    TRC_MSG(FUNC_SIM_INTSIM_ACCESS_REQ_HANDLER, "sim_intsim_access_req_handler()")
    TRC_MSG(FUNC_SIM_INTSIM_NOTIFY_IND_HANDLER, "sim_intsim_notify_ind_handler()")
    TRC_MSG(FUNC_SIM_INTSIM_SECURITY_IND_HANDLER, "sim_intsim_security_ind_handler()")
    TRC_MSG(FUNC_SIM_INTSIM_DIAL_MODE_CHANGE_IND_HANDLER, "sim_intsim_dial_mode_change_ind_handler()")
    TRC_MSG(FUNC_SIM_APDU_ACCESS_REQ_HANDLER, "sim_apdu_access_req_handler()")
    TRC_MSG(FUNC_SIM_MANAGE_CHANNEL_REQ_HANDLER, "sim_manage_channnel_req_handler()")

    TRC_MSG(FUNC_SAT_PROCOMM_DISPLAY_TEXT,"sat_procomm_display_text()")
    TRC_MSG(FUNC_SAT_PROCOMM_GET_INKEY,"sat_procomm_get_inkey()")
    TRC_MSG(FUNC_SAT_PROCOMM_GET_INPUT,"sat_procomm_get_input()")
    TRC_MSG(FUNC_SAT_PROCOMM_PLAY_TONE,"sat_procomm_play_tone()")
    TRC_MSG(FUNC_SAT_PROCOMM_SETUP_MENU,"sat_procomm_setup_menu()")
    TRC_MSG(FUNC_SAT_PROCOMM_SELECT_ITEM,"sat_procomm_select_item()")
    TRC_MSG(FUNC_SAT_PROCOMM_SEND_SMS,"sat_procomm_send_sms()")
    TRC_MSG(FUNC_SAT_PROCOMM_SEND_SS,"sat_procomm_send_ss()")
    TRC_MSG(FUNC_SAT_PROCOMM_SEND_USSD,"sat_procomm_send_ussd()")
    TRC_MSG(FUNC_SAT_PROCOMM_SETUP_CALL,"sat_procomm_setup_call()")
    TRC_MSG(FUNC_SAT_PROCOMM_MORE_TIME,"sat_procomm_more_time()")
    TRC_MSG(FUNC_SAT_PROCOMM_REFRESH,"sat_procomm_refresh()")
    TRC_MSG(FUNC_SAT_PROCOMM_POLL_INTERVAL,"sat_procomm_poll_interval()")
    TRC_MSG(FUNC_SAT_PROCOMM_POLLING_OFF,"sat_procomm_polling_off")
    TRC_MSG(FUNC_SAT_PROCOMM_PROVIDE_LOCAL_INFO,"sat_procomm_provide_local_info()")
    TRC_MSG(FUNC_SAT_PROCOMM_SETUP_EVENT_LIST,"sat_procomm_setup_event_list()")
    TRC_MSG(FUNC_SAT_PROCOMM_PERFORM_CARD_APDU,"sat_procomm_perform_card_apdu()")
    TRC_MSG(FUNC_SAT_PROCOMM_POWER_OFF_CARD,"sat_procomm_power_off_card()")
    TRC_MSG(FUNC_SAT_PROCOMM_POWER_ON_CARD,"sat_procomm_power_on_card()")
    TRC_MSG(FUNC_SAT_PROCOMM_GET_READER_STATUS,"sat_procomm_get_reader_status()")
    TRC_MSG(FUNC_SAT_PROCOMM_TIMER_MANAGEMENT,"sat_procomm_timer_management()")
    TRC_MSG(FUNC_SAT_PROCOMM_SET_UP_IDLE_MODE_TEXT,"sat_procomm_set_up_idle_mode_text()")
    TRC_MSG(FUNC_SAT_PROCOMM_RUN_AT_COMMAND,"sat_procomm_run_at_command()")
    TRC_MSG(FUNC_SAT_PROCOMM_SEND_DTMF,"sat_procomm_send_dtmf()")
    TRC_MSG(FUNC_SAT_PROCOMM_LANGUAGE_NOTIFICATION,"sat_procomm_language_notification()")
    TRC_MSG(FUNC_SAT_PROCOMM_LAUNCH_BROWSER,"sat_procomm_launch_browser()")
    TRC_MSG(FUNC_SAT_PROCOMM_OPEN_CHANNEL,"sat_procomm_open_channel()")
    TRC_MSG(FUNC_SAT_PROCOMM_CLOSE_CHANNEL,"sat_procomm_close_channel()")
    TRC_MSG(FUNC_SAT_PROCOMM_RECEIVE_DATA,"sat_procomm_recv_data()")
    TRC_MSG(FUNC_SAT_PROCOMM_SEND_DATA,"sat_procomm_send_data()")
    TRC_MSG(FUNC_SAT_PROCOMM_GET_CHANNEL_STATUS,"sat_procomm_ch_status()")
    TRC_MSG(FUNC_SAT_SET_UP_IDLE_MODE_TEXT_RES_HANDLER,"sat_set_up_idle_mode_text_res_handler()")
    TRC_MSG(FUNC_SAT_PROCOMM_ACTIVATE,"sat_procomm_activate()") //__SATCL__
    TRC_MSG(FUNC_SAT_ACTIVATE_RES_HANDLER,"sat_activate_res_handler()")
    TRC_MSG(FUNC_SAT_PROCOMM_CONTACTLESS_STATE_CHANGED,"sat_procomm_contactless_state_changed()") //__SATCR__
    TRC_MSG(FUNC_SAT_PROCOMM_CONTACTLESS_STATE_CHANGED_RES_HANDLER, "sat_contactless_state_changed_res_handler()")
    TRC_MSG(FUNC_SAT_RUN_AT_COMMAND_RES_HANDLER,"sat_run_at_command_res_handler()")
    TRC_MSG(FUNC_SAT_SEND_DTMF_RES_HANDLER,"sat_send_dtmf_res_handler()")
    TRC_MSG(FUNC_SAT_LANGUAGE_NOTIFICATION_RES_HANDLER,"sat_language_notification_res_handler()")
    TRC_MSG(FUNC_SAT_LAUNCH_BROWSER_RES_HANDLER,"sat_launch_browser_res_handler()")
    TRC_MSG(FUNC_SAT_OPEN_GPRS_CHANNEL_RES_HANDLER,"sat_open_gprs_channel_res_handler()")
    TRC_MSG(FUNC_SAT_OPEN_CSD_CHANNEL_RES_HANDLER,"sat_open_csd_channel_res_handler()")
    TRC_MSG(FUNC_SAT_OPEN_SERVER_MODE_CHANNEL_RES_HANDLER,"sat_open_server_mode_channel_res_handler()")
    TRC_MSG(FUNC_SAT_CLOSE_CHANNEL_RES_HANDLER,"sat_close_channel_res_handler()")
    TRC_MSG(FUNC_SAT_SEND_DATA_RES_HANDLER,"sat_send_data_res_handler()")
    TRC_MSG(FUNC_SAT_RECV_DATA_RES_HANDLER,"sat_recv_data_res_handler()")
    TRC_MSG(FUNC_SAT_CH_STATUS_RES_HANDLER,"sat_ch_status_res_handler()")
    TRC_MSG(FUNC_SAT_PROVIDE_LOCAL_INFORMATION_HANDLER,"sat_provide_local_information_handler()")
    TRC_MSG(FUNC_SAT_PROACTIVE_CMD_PROCESS,"sat_proactive_cmd_process()")
    TRC_MSG(FUNC_SAT_FILE_CHANGE_RES_HANDLER,"sat_file_change_res_handler()")
    TRC_MSG(FUNC_SAT_DSPL_TEXT_RES_HANDLER,"sat_dspl_text_res_handler()")
    TRC_MSG(FUNC_SAT_GET_INKEY_RES_HANDLER,"sat_get_inkey_res_handler()")
    TRC_MSG(FUNC_SAT_GET_INPUT_RES_HANDLER,"sat_get_input_res_handler()")
    TRC_MSG(FUNC_SAT_PLAY_TONE_RES_HANDLER,"sat_play_tone_res_handler()")
    TRC_MSG(FUNC_SAT_SETUP_MENU_RES_HANDLER,"sat_setup_menu_res_handler()")
    TRC_MSG(FUNC_SAT_SELECT_ITEM_RES_HANDLER,"sat_select_item_res_handler()")
    TRC_MSG(FUNC_SAT_SEND_SMS_RES_HANDLER,"sat_send_sms_res_handler()")
    TRC_MSG(FUNC_SAT_SEND_SS_RES_HANDLER,"sat_send_ss_res_handler()")
    TRC_MSG(FUNC_SAT_SEND_USSD_RES_HANDLER,"sat_send_ussd_res_handler()")
    TRC_MSG(FUNC_SAT_SETUP_CALL_RES_HANDLER,"sat_setup_call_res_handler()")
    TRC_MSG(FUNC_SAT_SMS_DL_REQ_HANDLER,"sat_sms_dl_req_handler()")
    TRC_MSG(FUNC_SAT_CB_DL_REQ_HANDLER,"sat_cb_dl_req_handler()")
    TRC_MSG(FUNC_SAT_MENU_SELECT_REQ_HANDLER,"sat_menu_select_req_handler()")
    TRC_MSG(FUNC_SAT_CALL_CTRL_BY_SIM_REQ_HANDLER,"sat_call_ctrl_by_sim_req_handler()")
    TRC_MSG(FUNC_SAT_CALL_STATUS_IND_HANDLER,"sat_call_status_ind_handler()")
    TRC_MSG(FUNC_SAT_PDP_STATUS_IND_HANDLER,"sat_pdp_status_ind_handler()")
    TRC_MSG(FUNC_SAT_SEND_SMS_CTRL_BY_SIM_REQ_HANDLER,"sat_send_sms_ctrl_by_sim_req_handler()")

    TRC_MSG(FUNC_SIM_SEARCH_RECORD_REQ_HANDLER,"[SIM] sim_search_record_req_handler()") /* MAUI_02953154 */
    TRC_MSG(FUNC_SIM_SYNC_POLL_TIMER_IND_HANDLER,"[SIM] sim_sync_poll_timer_ind_handler()") /*mtk01612: [MAUI_03020152] sync polling timer*/
    TRC_MSG(FUNC_SIM_RECOVERY_ENHANCEMENT_SWITCH_REQ_HANDLER, "[SIM] sim_recovery_enhancement_switch_req_handler()")
    TRC_MSG(FUNC_SAT_PROFILE_WRITE_REQ_HANDLER, "sat_profile_write_req_handler()")
    TRC_MSG(FUNC_SIM_UIM_BATCH_FILE_READ_REQ_HANDLER, "[SIM] sim_uim_batch_file_read_req_handler()")
    TRC_MSG(FUNC_USIM_STARTUP_READ,"[SIM] usim_startup_read()")
    TRC_MSG(FUNC_ISIM_STARTUP_READ,"[SIM] isim_startup_read()")
    TRC_MSG(FUNC_SIM_STARTUP_READ,"[SIM] sim_startup_read()")
    TRC_MSG(FUNC_ISIM_OPEN_CHANNEL_AND_INIT,"[SIM] isim_open_channel_and_init()")
    TRC_MSG(FUNC_SIM_INITIALIZATION,"[SIM] sim_initialization()")
    TRC_MSG(FUNC_USIM_INITIALIZATION,"[SIM] usim_initialization()")
    TRC_MSG(FUNC_ISIM_INITIALIZATION,"[SIM] isim_initialization()")
    TRC_MSG(FUNC_SIM_SAT_READY_REQ_HANDLER,"[SAT] sim_sat_ready_req_handler()")
    TRC_MSG(FUNC_SIM_CUIM_APDU_ACCESS, "[SIM] sim_cuim_apdu_access()")   
    TRC_MSG(FUNC_SAT_SEND_LOCATION_STATUS_AND_ACCESS_TECH_EVENT,"[SAT] sat_send_location_status_and_access_technology_event()")
    TRC_MSG(FUNC_SIM_EUICC_CHECKING, "[SIM] sim_euicc_checking()")  
    TRC_MSG(FUNC_SIM_CUIM_APDU_EXTENDED_ACCESS, "[SIM] sim_cuim_extended_apdu_access()")
    TRC_MSG(FUNC_SIM_DISABLE_PROCESS, "sim_disable_function_process()")
    TRC_MSG(FUNC_SIM_EUICC_DETECTION, "[SIM] sim_euicc_detection()")


    /* TRACE_STATE trace class */   
    TRC_MSG(STATE_SIM_RESET, "SIM: RESET SIM STATE")        /* Benson 0204 */
    TRC_MSG(STATE_SIM_CARD_NOT_INSERTED, "SIM: SIM Card Not Inserted")  /* Benson 0204 */
    TRC_MSG(STATE_SIM_SELECT_CMD_SUCCESS, "SIM: sim_select() success!") /* Benson 0204 */
    TRC_MSG(STATE_SAT_REFRESH_BUSY, "SAT REFRESH BUSY: send file change ind")   /* Benson 0204 */
    TRC_MSG(STATE_SIM_CMD_SUCCESS, "SIM: SIM_CMD_SUCCESS")                      /* Benson 0204 */
    TRC_MSG(STATE_SIM_CMD_FAIL, "SIM: SIM_CMD_FAIL")        /* Benson 0204 */
    TRC_MSG(STATE_SIM_CHV_RETRY_ALLOW, "SIM: SIM_CHV_RETRY_ALLOW")    /* Benson 0204 */
    TRC_MSG(STATE_SIM_CHV_BLOCK, "SIM: SIM_CHV_BLOCK")      /* Benson 0204 */
    TRC_MSG(STATE_SIM_SAT_CMD_BUSY, "SIM: SIM_SAT_CMD_BUSY")    /* Benson 0204 */
    TRC_MSG(STATE_SIM_DL_ERROR, "SIM: SIM_DL_ERROR")        /* Benson 0204 */
    TRC_MSG(STATE_SIM_MEMORY_PROBLEM, "SIM: SIM_MEMORY_PROBLEM")/* Benson 0204 */
    TRC_MSG(STATE_SIM_TECHNICAL_PROBLEM, "SIM: SIM_TECHNICAL_PROBLEM")  /* Benson 0204 */
    TRC_MSG(STATE_SIM_WRONG_INSTRUCTION_CLASS, "SIM: SIM_WRONG_INSTRUCTION_CLASS")  /* Nick 20071212 */
    TRC_MSG(STATE_SIM_30V, "[SIM] 3.0V SIM")                /* Benson 04142004 */
    TRC_MSG(STATE_SIM_18V, "[SIM] 1.8V SIM")                 /* Benson 04142004 */
    TRC_MSG(STATE_SIM_RESET_30V, "SIM RESET at 3.0V")       /* Benson 04142004 */
    TRC_MSG(STATE_SIM_RESET_18V, "SIM RESET at 1.8V")       /* Benson 04142004 */
    TRC_MSG(STATE_SIM_FILE_NOT_FOUND,"FILE_NOT_FOUND")
    TRC_MSG(STATE_SIM_BT_SAP_APDU_PROTOCOL_TYPE_0, "Transport Protocol Type: 0")    /* Nick 20070117 */

    TRC_MSG(STATE_MMI_CANT_GET_DUALSIM_INFO, "G+C MMI can't get dualsim info")                  /* Nick 20080808 */
    TRC_MSG(STATE_GSMCDMA_DETECTED, "G+C GSMCDMA dualsim file detected")                        /* Nick 20080808 */
    TRC_MSG(STATE_DUALSIM_CMD_FAIL_DISCONNECT_NOT_ALLOWED, "G+C dualsim disconnect not allowed")/* Nick 20080808 */
    TRC_MSG(STATE_DUALSIM_CMD_FAIL_CONNECT_NOT_ALLOWED, "G+C dualsim connect not allowed")      /* Nick 20080808 */

    TRC_MSG(STATE_SIM_CALL_DISCONNECT, "SIM: Disconnect on-going call")        /*mtk01612: [MAUI_02574001]*/
    
    TRC_MSG(STATE_SIM_CONNECT_WITH_PHONE_SUCCESS, "CONNECT_WITH_PHONE_SUCCESS")  /* Nick 20070117 */
    TRC_MSG(STATE_SIM_CONNECT_WITH_PHONE_FAILED, "CONNECT_WITH_PHONE_FAILED")    /* Nick 20070117 */
    TRC_MSG(STATE_SIM_DISCONNECT_WITH_PHONE_SUCCESS, "DISCONNECT_WITH_PHONE_SUCCESS")    /* Nick 20070117 */
    TRC_MSG(STATE_SIM_DISCONNECT_WITH_PHONE_FAILED, "DISCONNECT_WITH_PHONE_FAILED")      /* Nick 20070117 */

    TRC_MSG(STATE_SIM_BT_SAP_RESET_SUCCESS, "BT_SAP_RESET_SUCCESS")      /* Nick 20070117 */
    TRC_MSG(STATE_SIM_BT_SAP_RESET_FAILED, "BT_SAP_RESET_FAILED")        /* Nick 20070117 */

    TRC_MSG(STATE_SIM_RECOVERY_ENHANCEMENT_ON, "SIM: sim recovery enhancement switch on!")
    TRC_MSG(STATE_SIM_RECOVERY_ENHANCEMENT_OFF, "SIM: sim recovery enhancement switch off!")

    TRC_MSG(STATE_SIM_UPDATE_L1_VSIM_FINISH, "Finish sim_update_L1_VSIM()")
    TRC_MSG(STATE_SIM_UPDATE_L1_SIM_TYPE_FINISH, "Finish sim_update_L1_SIM_type()")
    TRC_MSG(STATE_SIM_UPDATE_L1_SIM_INSERT_STATUS_FINISH, "Finish sim_update_L1_SIM_insert_status()") 
    TRC_MSG(STATE_SIM_UPDATE_SIM_INSERT_STATUS_FINISH, "Finish sim_update_L1_SIM_insert_status()")

    TRC_MSG(STATE_SIM_PLUG_OUT_CALLBACK, "SIM PLUG OUT(%d) -> PS(%d)")
    TRC_MSG(STATE_SIM_PLUG_IN_CALLBACK, "SIM PLUG IN(%d) -> PS(%d)")

    /* TRACE_INFO trace class */
    TRC_MSG(INFO_SIM_SELECT_FILE, "SIM_FILE_SELECTED: %02X %02X => %02X %02X")
    TRC_MSG(INFO_SIM_STATUS_WORD, "SIM_STATUS_WORD:   %02X %02X")

    TRC_MSG(INFO_SIM_RESET_ERROR, "SIM_RESET_ERROR: %MDCL_SIM_STATUS")  /*Andrew 20081118 */ /*mtk01612: sim_feature_set*/    
    TRC_MSG(INFO_SIM_SELECT_ELP_BY_SPEC, "SELECT_ELP_BY_SPEC") 
    TRC_MSG(INFO_SIM_SELECT_ELP_BY_SPEC_ISO639_SPECIFIED, "INFO_SIM_SELECT_ELP_BY_SPEC_ISO639_SPECIFIED: type = %d, index = %d")      
    TRC_MSG(INFO_SIM_SELECT_ELP_BY_SPEC_ME_SUPPORT, "INFO_SIM_SELECT_ELP_BY_SPEC_ME_SUPPORT: type = %d, index = %d")    

    TRC_MSG(INFO_SIM_CONNECT_TYPE, "CONNECT_TYPE: %Msim_plug_out_type_enum")

    TRC_MSG(INFO_RR_ALLOW_SIM_FETCH, "RRallow %Msim_interface_enum fetch")         /* Nick 20080514 */
    TRC_MSG(INFO_RR_NOT_ALLOW_SIM_FETCH, "RRnotallow %Msim_interface_enum fetch")    /* Nick 20080514 */

    TRC_MSG(INFO_USIM_AL_SELECT,"SELECT:%Msim_file_index_enum => %02X %02X") 
    TRC_MSG(INFO_SIM_AL_STATUS,"STATUS => %02X %02X")
    TRC_MSG(INFO_SIM_AL_READ_BINARY,"READ BINARY  offset: %hd length: %hd => %02X %02X")
    TRC_MSG(INFO_SIM_AL_UPDATE_BINARY,"UPDATE BINARY offset: %hd length: %hd => %02X %02X")
    TRC_MSG(INFO_SIM_AL_READ_RECORD,"READ RECORD rec# %hd size: %hd => %02X %02X")
    TRC_MSG(INFO_SIM_AL_UPDATE_RECORD,"UPDATE_RECORD rec# %hd size: %hd => %02X %02X")
    TRC_MSG(INFO_SIM_AL_INCREASE,"INCREASE => %02X %02X")
    TRC_MSG(INFO_SIM_AL_VERIFY,"VERIFY => %02X %02X")
    TRC_MSG(INFO_SIM_AL_CHANGE_PIN,"CHANGE PIN => %02X %02X")
    TRC_MSG(INFO_SIM_AL_SWITCH_PIN,"SWITCH PIN: %Msim_instruction_code_enum => %02X %02X")
    TRC_MSG(INFO_SIM_AL_UNBLOCK_PIN,"UNBLOCK PIN => %02X %02X")
    TRC_MSG(INFO_SIM_AL_DEACTIVATE_FILE,"DEACTIVATE FILE: %Msim_file_index_enum => %02X %02X")
    TRC_MSG(INFO_SIM_AL_ACTIVATE_FILE,"ACTIVATE FILE: %Msim_file_index_enum => %02X %02X")
    TRC_MSG(INFO_SIM_AL_APP_AUTHENTICATE,"APP_AUTHENTICATE => %02X %02X")
    TRC_MSG(INFO_SIM_AL_AUTHENTICATE,"AUTHENTICATE => %02X %02X")
    TRC_MSG(INFO_SIM_AL_TERMINAL_PROFILE,"TERMINAL PROFILE => %02X %02X")
    TRC_MSG(INFO_SIM_AL_ENVELOPE,"ENVELOPE: send %hd bytes recv %hd bytes => %02X %02X")
    TRC_MSG(INFO_SIM_AL_FETCH,"FETCH %hd bytes => %02X %02X")
    TRC_MSG(INFO_SIM_AL_TERMINAL_RESPONSE,"TERMINAL RESPONSE => %02X %02X")
    TRC_MSG(INFO_USIM_AL_GET_CHALLENGE,"GET CHALLENGE: %hd bytes => %02X %02X")
    TRC_MSG(INFO_USIM_AL_MANAGE_CHANNEL,"MANAGE CHANNEL %Musim_channel_op_enum %Musim_logic_channel_enum => %02X %02X")
    TRC_MSG(INFO_USIM_SELECT_AID,"USIM SELECT AID: %02X %02X")
    TRC_MSG(INFO_USIM_AL_READ_BINARY_SFI,"usim_al_read_binary_with_sfi: %Musim_sfi_enum %hd  => %02X %02X")
    TRC_MSG(INFO_USIM_AL_TERMINAL_CAPABILITY,"TERMINAL CAPABILITY => %02X %02X")

    TRC_MSG(INFO_USIM_NO_FILE_MAPPING,"No rule of mapping %Msim_file_index_enum to USIM")
    TRC_MSG(INFO_USIM_FILE_MAPPING,"Mapping %Msim_file_index_enum to %Msim_file_index_enum")
    TRC_MSG(INFO_SERVICE_MAPPING_TRUE,"Mapping %Msim_service_enum Support")
    TRC_MSG(INFO_SERVICE_MAPPING_FALSE,"Mapping %Msim_service_enum Not Support")
    TRC_MSG(INFO_SIM_LOWCOST_MERGE_TASK, "LOWCOST_MERGE_TASK feature support") 
    TRC_MSG(INFO_SAT_TR_DROPPED, "Terminal Response is dropped") 
#ifdef __DSS_NO_RESET__
    TRC_MSG(INFO_SIM_SWITCH,"SIM_SWITCH: SIM %Msim_interface_enum switch to SLOT %Msim_interface_enum, sim_ctxt_ptr=0x%08x")
    TRC_MSG(INFO_DSS_STATE,"[DSS] state:%Msim_dss_state_enum")
    TRC_MSG(INFO_DSS_MODULE,"[DSS] current_module:%Mmodule_type, simInterface:%Msim_interface_enum")
    TRC_MSG(INFO_DSS_EVENT_QUEUE,"[DSS] actual_sim:%Msim_interface_enum, event_count:%d event:%d")
    TRC_MSG(INFO_DSS_FINAL_PLUG_EVENT,"[DSS] actual_sim:%Msim_interface_enum, final event:%d")
    TRC_MSG(INFO_DSS_UPDATE_CACHE,"[DSS] update cache, file_idx:%Msim_file_index_enum")
    TRC_MSG(INFO_DSS_REMAIN_RECOVERY_TIMER_TICK,"[DSS][RECOVERY] Remain recovery timer tick: %d")
    TRC_MSG(INFO_DSS_STOP_SAT_TIMER,"[DSS][SAT] sat_stop_timer[%d] %02X %02X %02X")
    TRC_MSG(INFO_DSS_START_SAT_TIMER,"[DSS][SAT] sat_start_timer[%d] %02X %02X %02X")
#else
    TRC_MSG(INFO_SIM_SWITCH,"SIM_SWITCH: SIM %Msim_interface_enum switch to SLOT %Msim_interface_enum")
#endif
    TRC_MSG(INFO_SIM_CSUS_SWITCH,"SIM_CSUS_SWITCH: SIM %Msim_interface_enum switch to SLOT %Msim_interface_enum")
    TRC_MSG(INFO_SIM_POLL_TIMER_STATE,"SIM_SYNC_TIMER: sim_sync_poll_timer_state = %Msim_sync_poll_timer_state_enum")
    TRC_MSG(INFO_SIM_POLL_TIMER_PERIOD,"SIM_SYNC_TIMER: poll_timer_period = %d (ticks)") /*mtk01612: [MAUI_03020152] sync polling timer*/
    TRC_MSG(INFO_USIM_CHANNEL_CONSISTENT,"+CGLA: CLA byte indicating Channel ID is subject to input ID")
    TRC_MSG(INFO_TERMINAL_CAPABILITY_SUPPORTTED,"TERMINAL CAPABILITY SUPPORTTED!!")
    TRC_MSG(INFO_VERIFY_ADM, "Verify ADM via apdu_access_req")
    TRC_MSG(INFO_MMDC_RELAY_MSG,"sim_sat_mmdc_msg_handler() RELAY TO MOD_SIM")
    TRC_MSG(INFO_UIM_CAT_MSG,"uim_sat_proactive_command_ind_hdlr() - %Msat_proactive_cmd_enum handled by UIM")
    TRC_MSG(INFO_SIM_CAT_MSG,"uim_sat_proactive_command_ind_hdlr() - %Msat_proactive_cmd_enum handled by SIM")
    TRC_MSG(INFO_SIM_HOT_SWAP_POLL_TIMER_SET,"sim_hot_swap_poll_timer_set(): poll time is from %d to %d, ps_id=%Mprotocol_id_enum")
    TRC_MSG(INFO_SIM_HOT_SWAP_POLL_TIMER_ROLLBACK,"sim_hot_swap_poll_timer_rollback() poll time is from %d to %d, ps_id=%Mprotocol_id_enum")
#ifdef __SIM_HOT_SWAP_POLL_TIMER__
    TRC_MSG(INFO_SIM_HOT_SWAP_POLL_TIMER_ROLLBACK_IND,"sim_hot_swap_poll_timer_rollback_ind_handler() poll time is from %d to %d")
    TRC_MSG(INFO_SIM_HOT_SWAP_POLL_TIMER_ROLLBACK_PEER,"sim_hot_swap_poll_timer_rollback_codeck_peer() ps_id=%Mprotocol_id_enum")
#endif
    TRC_MSG(INFO_L1_UPDATE_SIM_TYPE_INFO, "L1_update_SIM_type(), which_sim:%Msim_interface_enum, sim_type:%Msim_type_query_enum")
    TRC_MSG(INFO_L1_UPDATE_VSIM_INFO, "L1_update_VSIM(), which_sim:%Msim_interface_enum, is_vsim_on:%d")
    TRC_MSG(INFO_L1_UPDATE_SIM_INSERT_STATUS, "L1_update_SIM_insert_status(), which_sim:%Msim_interface_enum, is_sim_insert:%d")  
    TRC_MSG(INFO_PROFILE_MT_DEFAULT_DOWNLOAD,"[SAT]Profile MT default download")
    TRC_MSG(INFO_PROFILE_MT_AND_TE_DOWNLOAD,"[SAT]Profile MT and TE download")
    TRC_MSG(INFO_PROFILE_HALT_DOWNLOAD,"[SAT]Profile download halt")
    TRC_MSG(INFO_ACTIVATE_TE_FACILITY, "[SAT]Active TE facility")
    TRC_MSG(INFO_V4_SIM_X8,"X[8]:%02X %02X %02X %02X %02X %02X %02X %02X")
    TRC_MSG(INFO_V4_SIM_KC,"Kc[24]:%02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X ")
    TRC_MSG(INFO_V4_SIM_KM,"Km[24]:%02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X ")
    TRC_MSG(INFO_V4_SIM_RND,"RND[16]: %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X ")
    TRC_MSG(INFO_JS_SIM_KEY,"Key[24]: %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X ")
    TRC_MSG(INFO_SIM_ENCYPTED_CODE,"Encypted Code %hd :%02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X ")
    TRC_MSG(INFO_STK_ACTIVATE,"xTK switch - STK activate")
    TRC_MSG(INFO_UTK_ACTIVATE,"xTK switch - UTK activate")
    TRC_MSG(INFO_CT_MOTE_CHANGE,"sat_ct_mode_req_handler() - from:%d->%d")
    TRC_MSG(INFO_VZW_ENVELOPE_WRONG_ACCESS_TECH,"uim_sat_envelope_handler() - rat:%Msat_gmss_rat_enum, status:%Msat_gmss_selected_rat_status_enum")

    TRC_MSG(INFO_SIM_CHECK_SFI_FILE_CACHED,"[%Msim_cache_file_op_enum] ret_val:%Mkal_bool %Musim_sfi_enum => %Msim_cache_file_idx_enum, path:%02X-%02X-%02X-%02X-%02X-%02X current_path:%02X-%02X-%02X-%02X-%02X-%02X")
    TRC_MSG(INFO_SIM_CHECK_FILE_CACHED,"[%Msim_cache_file_op_enum] ret_val:%Mkal_bool %Msim_file_index_enum => %Msim_cache_file_idx_enum, path:%02X-%02X-%02X-%02X-%02X-%02X current_path:%02X-%02X-%02X-%02X-%02X-%02X")
    TRC_MSG(INFO_SIM_CACHE_FILE_RESET,"%Msim_cache_file_idx_enum cache reset")
    TRC_MSG(INFO_SIM_CACHE_FILE_UPDATE_FAIL,"%Msim_cache_file_idx_enum update fail")

    TRC_MSG(INFO_RECOVERY_AGAIN_WHEN_NO_SIM,"[RECOVERY_AGAIN] recovery_again_when_no_sim:%d")
    TRC_MSG(INFO_RECOVERY_AGAIN_START,"[RECOVERY_AGAIN] recovery_again start in sim_startup_read()")
    TRC_MSG(INFO_RECOVERY_AGAIN_COUNTER,"[RECOVERY_AGAIN] recovery_again counter: %d")
    TRC_MSG(INFO_VSIM_MASK_PLUG_CB,"l4c_sim_set_vsim_mode_req_handler() - mask_out:%d, mask_in:%d")

    TRC_MSG(INFO_RECOVERY_CANCEL_TIMER,"[RECOVERY] Cancel timer")
    TRC_MSG(INFO_RECOVERY_USE_GENERAL_RECOVERY,"[RECOVERY] Use general recovery")
    TRC_MSG(INFO_RECOVERY_USE_RETRY_DETECT,"[RECOVERY] Use retry detect")
    TRC_MSG(INFO_RECOVERY_USE_RECOVERY_AGAIN,"[RECOVERY] Use recovery again")
    TRC_MSG(INFO_RECOVERY_USE_RECOVERY_WHEN_NO_SIM,"[RECOVERY] Use recovery when no sim")
    TRC_MSG(INFO_RECOVERY_USE_EXTEND_PATTERN,"[RECOVERY] Use extend pattern")

    TRC_MSG(INFO_C2K_FILE_RECORD_SIZE,"[SIM C2K] file record size: %d")
    
    TRC_MSG(INFO_VSIM_ON_WITH_C2K_ONLY,"[VSIM] VSIM detect with C2K only capability")
    TRC_MSG(INFO_VSIM_ON_WITH_RUIM_ONLY,"[VSIM] VSIM detect with RUIM only capability")
    TRC_MSG(INFO_VSIM_RESET_CT3G_FLAG,"[VSIM] reset CT3G_mode to default UIM")
    TRC_MSG(INFO_VSIM_POWER_OFF_REAL_CARD,"[VSIM] VSIM plug-in process, power off real card")
    TRC_MSG(INFO_SAT_SPRINT_IMEI_LOCKING, "[SAT] Disable SIM recovery for IMEI Locking")

    TRC_MSG(INFO_SAT_ISSUE_FAKE_REFRESH,"[SAT] Trigger fake SIM Refresh")
    TRC_MSG(INFO_SAT_FAKE_REFRESH_RES,"[SAT] Fake SIM Refresh, do not send the terminal respond")
    TRC_MSG(INFO_SIM_UPDATE_SIM_INSERT_STATUS, "SIM_update_insert_status(), which_sim:%Msim_interface_enum, is_sim_insert:%d")  
    TRC_MSG(INFO_SAT_STK_SMS_CDMA_SUCCESS,"[SAT] STK_SMS with CDMA format, send to MD3 success")
    TRC_MSG(INFO_SAT_STK_SMS_CDMA_FAIL,"[SAT] STK_SMS with CDMA format, but send to MD3 fail")
    TRC_MSG(INFO_SAT_STKCALL_WITH_IMS_URI, "[SAT] STK_CALL with URI, handle by SIM")

    TRC_MSG(INFO_SIM_FILE_ADD_TO_ERROR_LIST,"[SIM] file idx %d added to error file list")
    TRC_MSG(INFO_SIM_FILE_NOT_ALLOWED,"[SIM] file idx %d error count max reached, not allowed to select/read")
    TRC_MSG(INFO_SIM_FILE_ERROR_COUNT_ADD,"[SIM] file idx %d error count incremented")
    TRC_MSG(INFO_SIM_FILE_REDUCE_ERROR_COUNT,"[SIM] file idx %d error count reset")


    TRC_MSG(INFO_SIM_POLL_OFF_AND_NOT_IN_CALL, "[SIM] SIM Poll Off and not In Call")
    TRC_MSG(INFO_SIM_STOP_TIMER_BUT_RETURN,"[SIM] sim_stop_timer() but return out")
    TRC_MSG(INFO_SAT_ADDITIONAL_LOCK_PHASE,"[SAT] ADDITIONAL_LOCK_PHASE: %d")
    TRC_MSG(INFO_SIM_SELECT_USIM_AID_SUCCESS,"[SIM] Select USIM AID success")
    TRC_MSG(INFO_SIM_SELECT_ISIM_AID_SUCCESS,"[SIM] Select ISIM AID success")
    TRC_MSG(INFO_SIM_SELECT_CSIM_AID_SUCCESS,"[SIM] Select CSIM AID success")
    TRC_MSG(INFO_UICC_CONTAIN_ISIM,"[SIM] UICC contain ISIM")
    TRC_MSG(INFO_UICC_WITHOUT_ISIM,"[SIM] UICC without ISIM")
    TRC_MSG(INFO_UICC_CONTAIN_CSIM,"[SIM] UICC contain CSIM")
    TRC_MSG(INFO_UICC_WITHOUT_CSIM,"[SIM] UICC without CSIM")
    TRC_MSG(INFO_SIM_USIM_STARTUP_READY,"[SIM] USIM startup ready")
    TRC_MSG(INFO_SIM_ISIM_STARTUP_READY,"[SIM] ISIM startup ready")
    TRC_MSG(INFO_SIM_CSIM_STARTUP_READY,"[SIM] CSIM startup ready")
    TRC_MSG(INFO_SIM_SIM_STARTUP_READY,"[SIM] SIM startup ready")
    TRC_MSG(INFO_SIM_UIM_STARTUP_READY_WITH_CSIM,"[SIM] MOD_UIM startup ready, CSIM activated")
    TRC_MSG(INFO_SIM_UIM_STARTUP_READY_WITH_RUIM,"[SIM] MOD_UIM startup ready, RUIM activated")
    TRC_MSG(INFO_SIM_UIM_STARTUP_READY_WITHOUT_CDMA,"[SIM] MOD_UIM startup ready, no card or no CDMA capability")
    TRC_MSG(INFO_SIM_TEST_MODE_ON,"[SIM] Test Mode On")
    TRC_MSG(INFO_SIM_AND_TEST_SIM_RELATION,"[SIM] Test SIM Relation: AND")
    TRC_MSG(INFO_SIM_OR_TEST_SIM_RELATION,"[SIM] Test SIM Relation: OR")
    TRC_MSG(INFO_SIM_APPLICATION_LABEL,"[SIM] Application Label : %s")
    TRC_MSG(INFO_SIM_NO_APPLICATION_LABEL,"[SIM] No Application Label!")
    TRC_MSG(INFO_SIM_OP09_CMCC_CU_CARD_LOCK,"[SIM] Test Mode On, but CMCC/CU found, card lock")
    TRC_MSG(INFO_SIM_OP09_SKIP_CARD_LOCK,"[SIM] Already checked, skip card lock")
    TRC_MSG(INFO_SIM_OP09_CDMA_CSIM_CARD,"[SIM] OP09 CDMA CSIM card")
    TRC_MSG(INFO_SIM_OP09_CDMA_UIM_CARD,"[SIM] OP09 CDMA UIM card")
    TRC_MSG(INFO_USIM_UST,"[SIM] ust: %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X")
    TRC_MSG(INFO_USIM_EST,"[SIM] est: %02X %02X")
    TRC_MSG(INFO_SIM_CDMA_RESET,"[SIM] SIM_Reset in CDMA Detection")
    TRC_MSG(INFO_SIM_CDMA_RESET_WITH_CDMA,"[SIM] Card with CDMA folder")
    TRC_MSG(INFO_SIM_CDMA_RESET_WITHOUT_CDMA,"[SIM] Card without CDMA folder")
    TRC_MSG(INFO_SIM_CDMA_RESET_WITH_GSM,"[SIM] Card with GSM folder")
    TRC_MSG(INFO_SIM_CDMA_RESET_WITHOUT_GSM,"[SIM] Card without GSM folder")
    TRC_MSG(INFO_SIM_CDMA_RESET_WITH_CSIM,"[SIM] EF_DIR with CSIM APP")
    TRC_MSG(INFO_SIM_CDMA_RESET_WITHOUT_CSIM,"[SIM] EF_DIR without CSIM APP")
    TRC_MSG(INFO_SIM_CDMA_RESET_WITH_USIM,"[SIM] EF_DIR with USIM APP")
    TRC_MSG(INFO_SIM_CDMA_RESET_WITHOUT_USIM,"[SIM] EF_DIR without USIM APP")
    TRC_MSG(INFO_SIM_CDMA_RESET_WITH_ISIM,"[SIM] EF_DIR with ISIM APP")
    TRC_MSG(INFO_SIM_CDMA_RESET_WITHOUT_ISIM,"[SIM] EF_DIR without ISIM APP")
    TRC_MSG(INFO_SIM_CDMA_RESET_DETECT_SIM,"[SIM] CDMA detect SIM insert")
    TRC_MSG(INFO_SIM_CDMA_RESET_DETECT_CT3G,"[SIM] CT 3G Card Found")
    TRC_MSG(INFO_SIM_RESET_CCCI_CALLBACK_SUCCESS,"[SIM] SIM Register CCCI CALLBACK Success!")
    TRC_MSG(INFO_SIM_RESET_OM_SOLUTION1, "[SIM] C2K OM SOLUTION1")
    TRC_MSG(INFO_SIM_RESET_CCCI_MISC_INFO_NOT_SUPPORT_C2K, "[SIM] CCCI_MISC_INFO NOT SUPPORT C2K")
    TRC_MSG(INFO_SIM_RESET_SKIP_CDMA_DETECTION,"[SIM] OM Solution1 and NOT protocol1, skip CDMA detection")
    TRC_MSG(INFO_SIM_RESET_SPECIAL_ATR_HISTORICAL_BYTE,"[SIM] Special USIM ATR historical byte 80 69 ...!")
    TRC_MSG(INFO_SIM_RESET_SKIP_TRY_USIM,"[SIM] Skip try USIM")
    TRC_MSG(INFO_SIM_RESET_VSIM_WITH_USIM,"[SIM] VSIM UICC contain USIM")
    TRC_MSG(INFO_SIM_RESET_UICC_WITH_USIM,"[SIM] UICC contain USIM")
    TRC_MSG(INFO_SIM_RESET_UICC_WITHOUT_USIM,"[SIM] UICC without USIM")
    TRC_MSG(INFO_SIM_RESET_UICC_SIM_INSIDE,"[SIM] UICC SIM Inside")
    TRC_MSG(INFO_SIM_RESET_NOT_ROAMING,"[SIM] Not Roaming, CDMA exist, skip try SIM")
    TRC_MSG(INFO_SIM_RESET_UNDER_ROAMING,"[SIM] 3G CT Card under Roaming, ignore CDMA info on Card")
    TRC_MSG(INFO_SIM_RESET_TRY_DCS1800_CARD,"[SIM] Try DCS1800 card")
    TRC_MSG(INFO_SIM_RESET_FIND_DCS1800_CARD,"[SIM] Find DCS1800 card")
    TRC_MSG(INFO_SIM_RESET_CDMA_617_ELECTRICAL_TEST,"[SIM] SIM select CDMA for 6.17 Electrical Tests")
    TRC_MSG(INFO_SIM_RESET_18V_RETRY_30V,"[SIM] 1.8V tech ME: SELECT DF_GSM fail@1.8V. Retry 3.0V")
    TRC_MSG(INFO_SIM_RESET_30V_RETRY_18V,"[SIM] 1.8V tech ME: SELECT DF_GSM fail@3.0V. Retry 1.8V")
    TRC_MSG(INFO_SIM_RESET_30V_ONLY,"[SIM] 3.0V only ME: SELECT DF_GSM fail. RejectThisCard")
    TRC_MSG(INFO_SIM_RESET_18V_ONLY,"[SIM] 1.8V only ME: SELECT DF_GSM fail. RejectThisCard")
    TRC_MSG(INFO_SIM_RESET_18V_SIM_RESET_18V,"[SIM] 1.8V tech SIM: SIM reset@1.8V")
    TRC_MSG(INFO_SIM_RESET_18V_SIM_RESET_30V,"[SIM] 1.8V tech SIM: SIM reset@3.0V")
    TRC_MSG(INFO_SIM_RESET_30V_SIM_RESET_30V,"[SIM] 3V tech SIM: SIM reset@3.0V")
    TRC_MSG(INFO_SIM_RESET_30V_SIM_RESET_18V_RETRY_30V,"[SIM] 3V tech SIM: SIM reset@1.8V so retry 3.0V")
    TRC_MSG(INFO_SIM_RESET_50V_SIM_NOT_SUPPORT,"[SIM] 5V SIM:NotSupport")
    TRC_MSG(INFO_SIM_RESET_30V_OR_18V_SIM_RESET_30V,"[SIM] 3V tech or 1.8V tech SIM: SIM reset@3.0V")
    TRC_MSG(INFO_SIM_RESET_SBP_OP09_SIM_LOCK_ON,"[SIM] SBP_OP09_SIM_LOCK ON")
    TRC_MSG(INFO_SIM_RESET_SBP_OP09_SIM_LOCK_TEST_MODE,"[SIM] Test Mode On, skip card lock first")
    TRC_MSG(INFO_SIM_RESET_CDMA_ONLY_CARD,"[SIM] No (U)SIM, but exist CSIM/UIM!")
    TRC_MSG(INFO_SIM_RESET_DBG_STR,"[SIM] %s")
    TRC_MSG(INFO_SIM_POWEROFF_VSIM_IGNORE_POWER_OFF,"[SIM] VSIM on, ignore sim power off command")
    TRC_MSG(INFO_USIM_RECOVERY_RESET_18V,"[SIM] UICC reset @1.8V")
    TRC_MSG(INFO_USIM_RECOVERY_RESET_SIM_INSIDE,"[SIM] SIM Reset success, SIM inside")
    TRC_MSG(INFO_APVSIM_SUPPORT_SLOT,"[APVSIM] apvsim_supported_slots: %d ")
    TRC_MSG(INFO_SIM_FAST_RECOVERY_SUCCESS,"[SIM] SIM_Fast_Recovery success")
    TRC_MSG(INFO_ISIM_FAST_RECOVERY_SUCCESS,"[SIM] ISIM_Fast_Recovery success")
    TRC_MSG(INFO_SIM_RECOVERY_SUCCESS,"[SIM] SIM_Recovery success")
    TRC_MSG(INFO_ISIM_RECOVERY_SUCCESS,"[SIM] ISIM_Recovery success")
    TRC_MSG(INFO_SIM_IS_TEST_SIM,"[SIM] Test SIM inserted")
    TRC_MSG(INFO_SIM_NOT_TEST_SIM,"[SIM] not Test SIM, normal SIM inserted")
    TRC_MSG(INFO_SAT_ADDITIONAL_LOCK_NOT_SIM_PROFILE,"[SAT] not sim profile in SAT Additional Lock")
    TRC_MSG(INFO_SIM_EF_IMSI_IS_INVALIDATED,"[SIM] EF_IMSI is invalidated")
    TRC_MSG(INFO_SIM_EF_LOCI_IS_INVALIDATED,"[SIM] EF_LOCI is invalidated")
    TRC_MSG(INFO_SIM_EF_IMSI_IS_READ,"[SIM] IMSI Read Success")
    TRC_MSG(INFO_SIM_CPHS_TEST_SIM,"[SIM] CPHS Test SIM inserted")
    TRC_MSG(INFO_SIM_EF_FILE_EXIST,"[SIM] EF_%s exist")
    TRC_MSG(INFO_SIM_REFRESH_QUERY_DN_TYPE,"[SIM] SIM Refresh Query Dn Type")
    TRC_MSG(INFO_SIM_CT3G_PLUG_OUT,"[SIM] CT 3G Plug out, only inform MD3 and L4")
    TRC_MSG(INFO_SIM_UIM_STATUS_CARD_NOT_RECOGNIZE,"[SIM] SIM_UIM_STATUS: (U)SIM Card Not Recognize")
    TRC_MSG(INFO_SIM_UIM_STATUS_PIN1_NOT_VERIFY,"[SIM] SIM_UIM_STATUS: PIN1 not verify")
    TRC_MSG(INFO_SIM_UIM_STATUS_PUK1_NOT_VERIFY,"[SIM] SIM_UIM_STATUS: PUK1 not verify")
    TRC_MSG(INFO_SIM_UIM_STATUS_SIM_BLOCKED,"[SIM] SIM_UIM_STATUS: SIM blocked")
    TRC_MSG(INFO_SIM_UIM_STATUS_SIM_BUSY,"[SIM] SIM_UIM_STATUS: Security status unknown")
    TRC_MSG(INFO_SIM_UIM_STATUS_OP09_CARD_LOCK_CMCC_CU,"[SIM] SIM_UIM_STATUS: CMCC/CU Card, card locked")
    TRC_MSG(INFO_SIM_UIM_STATUS_OP09_CARD_LOCK_NOT_CT,"[SIM] SIM_UIM_STATUS: Not CT Card, card locked")
    TRC_MSG(INFO_SIM_UIM_STATUS_CARD_LOCK_NOT_CDMA_CARD,"[SIM] SIM_UIM_STATUS: Not CDMA Card, card locked")
    TRC_MSG(INFO_SIM_UIM_STATUS_CRAD_NOT_DETECTED,"[SIM] SIM_UIM_STATUS: (U)SIM Card Not Detected")
    TRC_MSG(INFO_SIM_UIM_STATUS_SIM_PROBLEM,"[SIM] SIM_UIM_STATUS: (U)SIM Problem before send to UIM module")
    TRC_MSG(INFO_SIM_UIM_STATUS_ACTIVATE_UIM,"[SIM] SIM_UIM_STATUS: Activate MOD_UIM for SIM Task initialization")
    TRC_MSG(INFO_SIM_RECEIVE_CSS_READY,"[SIM] Receive CSS_READY_IND, Send SIM Refresh(FCN) to SMSAL and PHB")
    TRC_MSG(INFO_SIM_INIT_DONE_FILE_READ,"[SIM][SAT] SIM init done, Send SIM Refresh(FCN) to request FILE read")
    TRC_MSG(INFO_SIM_NOT_DUAL_MODE_SIM_REJECT_SWITCH,"[SIM] Not Dual Mode SIM, reject Card Type Switch request")
    TRC_MSG(INFO_SIM_CARD_TYPE_SWITCH,"[SIM] Card Type Switch: %s -> %s")
    TRC_MSG(INFO_SIM_CARD_TYPE_SWITCH_ACTIVATE_SUBMODULE,"[SIM] Card Type Switch: SIM activated, trigger sub-module update EFs")
    TRC_MSG(INFO_SIM_UIM_BATCH_READ_LOOP,"[SIM] UIM batch read: loop")
    TRC_MSG(INFO_SIM_UIM_BATCH_READ_CSIM_SELECT,"[SIM] UIM batch read: csim select")
    TRC_MSG(INFO_SIM_UIM_BATCH_READ_UIM_SELECT,"[SIM] UIM batch read: uim select")
    TRC_MSG(INFO_SIM_UIM_BATCH_READ_UIM_TRANSPARENT,"[SIM] UIM batch read: transparent")
    TRC_MSG(INFO_SIM_UIM_BATCH_READ_UIM_LINEAR_OR_CYCLIC,"[SIM] UIM batch read: linear or cyclic")
    TRC_MSG(INFO_SIM_THREE_DIGIT_MNC,"[SIM] 3 digit MNC")
    TRC_MSG(INFO_SAT_REFRESH_IMSI_LOCI_IN_FILE_LIST,"[SAT] EF_IMSI or EF_LOCI found in File List")
    TRC_MSG(INFO_SAT_SIM_REFRESH_WHEN_SAT_REFRESH_BUSY, "[SAT] SIM Refresh but refresh busy")
    TRC_MSG(INFO_SAT_SIM_REFRESH_WHEN_CALL_CONNECT, "[SAT] SIM Refresh but call is connected")
    TRC_MSG(INFO_SAT_SIM_RESET_REFRESH_DURING_CALL, "[SAT] REFRESH type SIM_RESET executes during call connected")
    TRC_MSG(INFO_SAT_SIM_REFRESH_WAITING_SMS_ACK, "[SAT] SIM Refresh but still waiting SMS ACK")
    TRC_MSG(INFO_SAT_SIM_REFRESH_DURING_ECBM, "[SAT] SIM Refresh but ECBM mode ON")
    TRC_MSG(INFO_SAT_SIM_REISSUE_REFRESH_ECBM_OFF, "[SAT] Reissued Refresh after ECBM mode OFF")
    TRC_MSG(INFO_SAT_SIM_REFRESH_POLICY_MEET, "[SAT] SIM Refresh enforcement poliby meets: %Msat_enforcement_policy_tag_enum")
    TRC_MSG(INFO_SIM_RESET_METHOD, "[SIM] SIM Reset Method: %Msim_reset_method_enum")
    TRC_MSG(INFO_SIM_RESET_METHOD_RESULT, "[SIM] SIM Reset Method Result: USIM Prefer is %Mkal_bool")
    TRC_MSG(INFO_SIM_CDMA_RESET_SIM_CARD_DETECTED, "[SIM] SIM Card detected, reset card and try to detect USIM/CSIM/ISIM")
    TRC_MSG(INFO_SIM_CDMA_RESET_UICC_CARD_DETECTED, "[SIM] UICC Card detected, skip card reset")
    TRC_MSG(INFO_SIM_CDMA_RESET_LEGACY_MODE_RESET, "[SIM] CDMA Detection Legancy Mode: Driver Reset")
    TRC_MSG(INFO_SIM_CDMA_RESET_LEGACY_MODE_POWEROFF, "[SIM] CDMA Detection Legancy Mode: Driver Power OFF")
    TRC_MSG(INFO_SIM_CDMA_RESET_ENHANCE_MODE_RESET, "[SIM] CDMA Detection Enhance Mode: Driver Reset")
    TRC_MSG(INFO_SIM_CDMA_RESET_ENHANCE_MODE_POWEROFF, "[SIM] CDMA Detection Enhance Mode: Driver Power OFF")
    TRC_MSG(INFO_SIM_CDMA_RESET_USIM_IGNORE_UIM, "[SIM] CDMA Detection: For USIM+UIM, ignore UIM")
    TRC_MSG(INFO_SAT_DBG_TRACE, "[SAT] %s")
    TRC_MSG(INFO_SAT_FETCH_DBG_TRACE_CC_STATE, "[SAT] call_ctrl_state: %Msat_call_ctrl_by_sim_state_enum")
    TRC_MSG(INFO_SAT_ENVELOPE_BUSY, "[SAT] envelope with SIM BUSY respond, retry this envelope after next 0x9000")
    TRC_MSG(INFO_SAT_PROCOMM_TYPE, "[SAT] Fetch - %Msat_proactive_cmd_enum")
    TRC_MSG(INFO_SAT_YEUNAN_V4_DIFF_TEXT, "[SAT][YNV4] Different default_text[%d]=%x")
    TRC_MSG(INFO_SAT_READY_TO_START, "[SAT] sat_ready_to_start set to KAL_TRUE")
    TRC_MSG(INFO_SAT_SKIP_FETCH_COMMAND, "[SAT] Skip STK fetch process, current state: %02X")
    TRC_MSG(INFO_SAT_PREFETCH_COMMAND, "[SAT] prefetch proactive command: %Msat_proactive_cmd_enum")
    TRC_MSG(INFO_SAT_PREFETCH_FAIL, "[SAT] prefetch proactive command fail!")
    TRC_MSG(INFO_SAT_SEND_LOCATION_STATUS_AND_ACCESS_TECH_EVENT_BUT_TEST_MODE,"[SAT] Test Mode enabled, skip send location status and access technology change event")
    TRC_MSG(INFO_SAT_ALREADY_RECEIVE_LOCATION_INFO_IND,"[SAT] already receive LOCATION_INFO, send location status and access technology change event")
    TRC_MSG(INFO_SIM_FORCE_CARD_TYPE_UTILITY,"[SIM] Force Card Type: %Msim_force_card_type_enum")
    TRC_MSG(INFO_SAT_DBG_ENVELOPE_TYPE, "[SAT] ENVELOPE: %Msat_tag_enum")
    TRC_MSG(INFO_SIM_OP01_TYPE,"[SIM] PS1 Op01 type:%Msim_op01_enum,PS2 op01 type:%Msim_op01_enum")
    TRC_MSG(INFO_SAT_DBG_LOCATION_STATUS, "[SAT] STATUS: %s")
    TRC_MSG(INFO_SAT_DBG_3GPP_LOCATION_INFO_2, "[SAT] 3GPP MCC/MNC: %d %02d")
    TRC_MSG(INFO_SAT_DBG_3GPP_LOCATION_INFO_3, "[SAT] 3GPP MCC/MNC: %d %03d")
    TRC_MSG(INFO_SAT_DBG_3GPP2_LOCATION_INFO, "[SAT] 3GPP2 MCC/MNC: %d %02d")
    TRC_MSG(INFO_SAT_DBG_EVENT_LIST, "[SAT] EVENT: %Msat_event_download_enum")
    TRC_MSG(INFO_SIM_EUICC_FUNCTION_SUPPORTED_IN_ATR, "[SIM] eUICC-related fuctions supported")
    TRC_MSG(INFO_SIM_EUICC_FUNCTION_NOT_SUPPORT_IN_ATR, "[SIM] eUICC-related fuctions not support")
    TRC_MSG(INFO_SAT_IMPLICIT_RECV_ERAT, "[SAT] G only card inserted and SIM_3GPP_ONLY_MODE already, stop checking recv_rat_mode")
    TRC_MSG(INFO_SAT_FORCE_RAT_TO_GLOBAL, "[SAT] Command dispatching rule is set to GLOBAL, disgard RAT mode setting")
    TRC_MSG(INFO_SIM_OP_CHECK_IMSI_VALUE,"[SIM][OP Check] MCC/MNC(%d) in SIM is :%s")
    TRC_MSG(INFO_SIM_OP_CHECK_ICCID_VALUE,"[SIM][OP Check] ICCID in SIM is :%02x %02x %02x %02x")
    TRC_MSG(INFO_SIM_OP_CHECK,"[SIM][OP Check] Check Operator Card(PS%d): %Msim_operator_type_enum")
    TRC_MSG(INFO_SIM_FILE_POINTER_INFO,"[FILE_PTR][ch%d] file_idx:%Msim_file_index_enum df_idx:%Msim_file_index_enum df_id:%04X path:%02X-%02X-%02X-%02X-%02X-%02X")
    TRC_MSG(INFO_SIM_SELECT_DUPLICATE, "Same path found, select last fid: %02x %02X")
    TRC_MSG(INFO_SIM_DISABLE_SKIP_TIMER, "SIM is disabled, skip timer start")
    TRC_MSG(INFO_SIM_DISABLE_ENABLE_SWITCH, "SIM Disable state from %d to %d, new condition: %d")
    TRC_MSG(INFO_SIM_DISABLE_NV_SLOT_WRITE, "SIM Disable write slot bitmask 0x%x")
    TRC_MSG(INFO_SIM_SELECT_CURR_PATH, "[SIM][SIM_SELECT] CURR PATH: %02x %02x %02x %02x %02x %02x")
    TRC_MSG(INFO_SIM_SELECT_DEST_PATH, "[SIM][SIM_SELECT] DEST PATH: %02x %02x %02x %02x %02x %02x File Index = %d")
    TRC_MSG(INFO_SIM_SST_OVERWRITE_WITH_CST,"[SIM] SST overwrite - SST: %02x %02x %02x %02x %02x CST: %02x %02x %02x %02x %02x")
    TRC_MSG(INFO_SIM_AL_SEARCH_RECORD, "SEARCH RECORD => %02X %02X")
    TRC_MSG(INFO_SIM_AL_REHABILITATE, "REHABILITATE => %02X %02X")
    TRC_MSG(INFO_SIM_AL_INVALIDATE, "INVALIDATE => %02X %02X")
    TRC_MSG(INFO_SIM_R4_SIM, "R4 SIM Card")
    TRC_MSG(INFO_SAT_REFRESH_WAIT_FOR_REISSUE, "[SAT] REFRESH command stored, wait for Reissue")
    TRC_MSG(INFO_SAT_REISSUE_CONDITION_LACK, "[SAT] Reissue Condition unsatisfied, current status: %Msat_sms_pp_ack_status_enum, %Msat_call_status_enum, %Msat_mm_connect_status_enum, %Msat_emm_connect_status_enum")
    TRC_MSG(INFO_SAT_REISSUE_REFRESH, "[SAT] Reissue REFRESH command - %Msat_refresh_type_enum")
    TRC_MSG(INFO_SAT_REISSUE_DONE, "[SAT] Reissue Done")
    TRC_MSG(INFO_SAT_ADDITIONAL_HOLD_FILE_CHANGE_IND, "[SAT] Additionally hold file_change_ind for further use")
    TRC_MSG(INFO_SAT_FREE_ADDITIONAL_FILE_CHANGE_IND, "[SAT] REFRESH done. Free the additional file_change_ind")
    TRC_MSG(INFO_SAT_FILE_CHANGE_RES_WITH_ERROR, "[SAT] Error found in file_change_res, error cause: %Msat_file_change_error_cause_enum")
    TRC_MSG(INFO_SAT_FILE_CHANGE_RES_REDIRECT, "[SAT] file_change_res sent to wrong protocol, redirect it as sender: %Mmodule_type")
    TRC_MSG(INFO_SAT_FILE_CHANGE_READY_STATUS, "[SAT] REFRESH  MD3 ready status: %d, Modules ready status: %x")
    TRC_MSG(INFO_SIM_ADM_ALLOC_SUCCESS, "[ADM]slot_%d %Msim_cache_file_idx_enum %Msim_cache_part_enum alloc %d bytes success. Remain %d bytes.")
    TRC_MSG(INFO_SIM_ADM_ALLOC_1ST_REC, "[ADM]slot_%d %Msim_cache_file_idx_enum 1st time alloc rec.")
    TRC_MSG(INFO_SIM_ADM_FREE_SUCCESS, "[ADM]slot_%d %Msim_cache_file_idx_enum free success.")
    TRC_MSG(INFO_SIM_ADM_FREE_SKIP, "[ADM]slot_%d %Msim_cache_file_idx_enum skip free.")
    TRC_MSG(INFO_SIM_SET_TEST_SIM_FROM_NVRAM,"[SIM] %s %d")

    TRC_MSG(INFO_SAT_OP20_PENDING_SESSION_STATE, "[SAT] Sprint pending REFRESH session state: %Msat_op20_session_enum")
    TRC_MSG(INFO_SAT_PENDING_REFRESH_START,"[SAT] Start to pend REFRESH")
    TRC_MSG(INFO_SAT_PENDING_REFRESH_END,"[SAT] Start to perform REFRESH normally")
    TRC_MSG(INFO_SAT_REFRESH_PENDED,"[SAT] REFRESH received under blocking condition. Command pended!")

    TRC_MSG(INFO_SAT_REFRESH_POLICY_ENFORCEMENT, "[SAT] REFRESH policy enforcement: %x")
    TRC_MSG(INFO_SIM_REJECT_HOTSWAP_POLL_TIMER,"[SIM] sim switch ongoing return out")
    TRC_MSG(INFO_DUPLEX_STATE,"[Duplex] state:%Msim_duplex_state_enum")
    TRC_MSG(INFO_SIM_LONG_RSP_LEN,"[SIM] The long response from card: %d")
    TRC_MSG(INFO_SKIP_ISIM_OPEN_CHANNEL_AND_INIT,"[SIM] Skip ISIM detection for CDMA detection already checked not exist.")

    TRC_MSG(INFO_SAT_REFRESH_FAIL_COUNT, "[SAT] REFRESH Fail count: %d")
    TRC_MSG(INFO_SAT_FORCE_UICC_REFRESH, "[SAT] Trigger Fake UICC RESET REFRESH to reset card")
    TRC_MSG(INFO_SIM_EXTENDED_LENGTH_SUPPORT, "[SIM] SupportExtendedLength: %Mkal_bool")
    TRC_MSG(INFO_SIM_RX_LEN, "[SIM] rxSize: %d")
    TRC_MSG(INFO_SIM_TERMINAL_CAPABILITY_ADD_EUICC_TAG, "[SIM] Add eUICC capabilities tag in the Terminal Capability")
    TRC_MSG(INFO_SIM_EUICC_DETECT_WITH_ISDR, "[EUICC] with ISD-R")
    TRC_MSG(INFO_SIM_EUICC_DETECT_WITHOUT_ISDR, "[EUICC] without ISD-R")
    TRC_MSG(INFO_SIM_EUICC_DETECT_WITH_EID, "[EUICC] with EID")
    TRC_MSG(INFO_SIM_EUICC_DETECT_PARSE_EID_SUCCESS, "[EUICC] Parse EID success")
    TRC_MSG(INFO_SIM_CDMA_EMPTY_EUICC, "[SIM] Empty eUICC skip remaining flow in CDMA Detection %MDCL_SIM_STATUS")
    TRC_MSG(INFO_SIM_EUICC_TERMINAL_CAPABILITY_ALREADY_SENT, "[SIM] eUICC Terminal Capability already sent")
#ifdef __SAT_REJECT_STKMENU_AFTER_CALL__
    TRC_MSG(INFO_SELECT_ITEM_ORANGE_DATA, "[SAT] Select Item Orange Data")
#endif

    /* TRACE_WARNING trace class */
    TRC_MSG(WARNING_SMS_DL_REQ_ADDR_SIZE_FALSE,"[SAT] SMS_DL size_of_addr exceed")
    /* MAUI_01949754 mtk02374 20090903 */
    TRC_MSG(WARNING_RES_LENGTH_FALSE,"length of RES exceed")
    TRC_MSG(WARNING_CK_LENGTH_FALSE,"length of CK is not 16")
    TRC_MSG(WARNING_IK_LENGTH_FALSE,"length of IK is not 16")
    TRC_MSG(WARNING_KC_LENGTH_FALSE,"length of Kc is not 8")
    TRC_MSG(WARNING_AUTS_LENGTH_FALSE,"length of AUTS exceed")
    TRC_MSG(WARNING_AUTHENTICATION_TAG_UNKNOWN,"authentication response tag unknown")
    TRC_MSG(WARNING_SRES_LENGTH_FALSE,"length of SRES exceed")
    TRC_MSG(WARNING_FCP_PROP_INFO_SIZE,"Proprietary Info longer than 17") /*[MAUI_01923168] mtk80420:Low Item 3*/
    TRC_MSG(WARNING_PLMN_FILE_SIZE, "PLMN file size is larger than 500")  /* [MAUI_02630325] [Revise ASSERT] mtk80420 */
    TRC_MSG(WARNING_UST_FILE_SIZE, "USIM UST file size is larger than 256")  /* [MAUI_02630325] [Revise ASSERT] mtk80420 */
    TRC_MSG(WARNING_EST_FILE_SIZE, "USIM EST file size is larger than 256")  /* [MAUI_02630325] [Revise ASSERT] mtk80420 */
    TRC_MSG(WARNING_UICC_DETECTION_RULE,"UICC detection rule warning")    
    TRC_MSG(WARNING_FCP_SIZE,"FCP size is larger than 127,fcp[1]=%x,fcp[2]=%x") 
    TRC_MSG(WARNING_UNKNOWN_FILE_STRUCT,"Unknown EF file structure,type of structure=%x")
    TRC_MSG(WARNING_WRONG_FILE_STRUCT,"Wrong EF file structure,type of structure=%x")

    /* New Warning */
    TRC_MSG(WARNING_SIM_CARD_REMOVED, "[SIM] SIM_ERROR: SIM_CARD_REMOVED")    /* Benson 0204 */
    TRC_MSG(WARNING_FCP_TLV_LEN_ERROR, "USIM_FCP_ERROR: FCP TLV LENGTH ERROR!")  /* [MAUI_02630325] [Revise ASSERT] mtk80420 */
    TRC_MSG(WARNING_FCP_PROP_INFO_TLV_LEN_ERROR,"USIM_FCP_ERROR: FCP PROP INFO TLV LENGTH ERROR!")
    TRC_MSG(WARNING_FCP_FILE_DESCRIPTOR_ERROR,"USIM_FCP_ERROR: FCP FILE DESCRIPTOR ERROR!")
    TRC_MSG(WARNING_FCP_FILE_ID_LEN_ERROR,"USIM_FCP_ERROR: FCP FILE ID ERROR!")
    TRC_MSG(WARNING_FCP_DF_NAME_LEN_ERROR,"USIM_FCP_ERROR: FCP DF NAME LENGTH ERROR!")
    TRC_MSG(WARNING_FCP_PROP_UICC_CHAR_LEN_ERROR,"USIM_FCP_ERROR: FCP PROP UICC CHAR LENGTH ERROR!")
    TRC_MSG(WARNING_FCP_PROP_APP_PWR_LEN_ERROR,"USIM_FCP_ERROR: FCP PROP APP PWR LENGTH ERROR!")
    TRC_MSG(WARNING_FCP_PROP_MIN_APP_CLK_LEN_ERROR,"USIM_FCP_ERROR: FCP PROP MIN APP CLK LENGTH ERROR!")
    TRC_MSG(WARNING_FCP_PROP_AVAIL_MEM_LEN_ERROR,"USIM_FCP_ERROR: FCP PROP AVAILABLE MEMORY LENGTH ERROR!")
    TRC_MSG(WARNING_FCP_PROP_SUPPORTED_SYS_CMD_ERROR,"USIM_FCP_ERROR: FCP PROP SUPPORTED SYS CMD LENGTH ERROR!")
    TRC_MSG(WARNING_FCP_LIFE_CYCLE_LEN_ERROR,"USIM_FCP_ERROR: FCP LIFE CYCLE LENGTH ERROR!")
    TRC_MSG(WARNING_FCP_PIN_NUMBER_ERROR,"USIM_FCP_ERROR: FCP PIN STATUS TEMPLATE DO NUMBER ERROR!")
    TRC_MSG(WARNING_FCP_PIN_DO_TAG_ERROR,"USIM_FCP_ERROR: FCP PIN DO TAG ERROR!")
    TRC_MSG(WARNING_FCP_TOTAL_FILE_SIZE_LEN_ERROR,"USIM_FCP_ERROR: FCP TOTAL FILE SIZE LENGTH ERROR!")
    TRC_MSG(WARNING_FCP_FILE_SIZE_LEN_ERROR,"USIM_FCP_ERROR: FCP FILE SIZE LENGTH ERROR!")
    TRC_MSG(WARNING_FCP_SFI_LEN_ERROR,"USIM_FCP_ERROR: FCP SFI LENGTH ERROR!")
    TRC_MSG(WARNING_FCP_TEMP_TAG_ERROR,"USIM_FCP_ERROR: FCP TEMPLATE TAG ERROR!")
    TRC_MSG(WARNING_FCP_SUB_TAG_ERROR,"USIM_FCP_ERROR: FCP SUB TAG ERROR!")
    TRC_MSG(WARNING_USIM_ICCID_LEN_ERROR,"USIM_ERROR: USIM ICCID LENGTH ERROR!")
    TRC_MSG(WARNING_USIM_AID_LEN_ERROR,"USIM_ERROR: USIM AID LENGTH ERROR!")  /*[MAUI_02630325] [Revise ASSERT] mtk80420 */
    TRC_MSG(WARNING_FCP_PIN_PS_DO_NOT_PRESENT,"USIM_FCP_ERROR: FCP PS_DO DOES NOT PRESENT FIRST!")
    TRC_MSG(WARNING_INFO_NUM_RECORD_SIZE,"SIM EF_InfoNum: record size not in 1 to 64")
    TRC_MSG(WARNING_UNEXPECTED_STKTR,"Unexpected AT+STKTR,is_wait_for_rsp = %d")
    TRC_MSG(WARNING_SIM_CHANNEL_OPERATION,"SIM_ERROR: CHANNEL OPERATION NOT ALLOWED FOR SIM!")
    TRC_MSG(WARNING_APDU_LEN_ERROR,"TOO SHORT APDU LENGTH!")
    TRC_MSG(WARNING_APDU_INPUT_LEN_ERROR,"CMD DATA LENGTH NOT CONSIST WITH P3!")
    TRC_MSG(WARNING_APPLICATION_OPERATION_ERROR,"USIM_ERROR: APP OPERATION NOT ALLOWED ON BASIC CNANNEL!")
    TRC_MSG(WARNING_INCREASE_OPERATION_ERROR,"INCREASE OPERATION NOT ALLOWED NOW!")
    TRC_MSG(WARNING_CHV_OPERATION_ERROR,"CHV OPERATION NOT ALLOWED NOW!")
    TRC_MSG(WARNING_USIM_CHANNEL_OPERATION_ERROR,"USIM_CHANNEL_ERROR: CHANNEL No OUT OF RANGE!")
    TRC_MSG(WARNING_UIM_CAT_MSG_NOT_ALLOW,"[SAT] uim_sim_send_ilm() MSG NOT ALLOWED!")
    TRC_MSG(WARNING_UIM_CAT_UNEXPECTED_TR,"[SAT] uim_sat_terminal_rsp_handler() - unexpected %Msat_proactive_cmd_enum")
    TRC_MSG(WARNING_UIM_CAT_UNEXPECTED_ENVELOPE,"[SAT] uim_sat_envelope_handler() - unexpected %Msat_tag_enum")
    TRC_MSG(WARNING_USIM_UFC_LEN_TOO_LONG,"USIM UFC FILE SIZE TOO LONG!")
    TRC_MSG(WARNING_SIM_TIMER_IS_STILL_RUNNING,"SIM poll timer is still running, skip the timer start request")
    TRC_MSG(WARNING_SIM_SELECT_USIM_AID_FAILED,"[SIM] Select USIM AID failed")
    TRC_MSG(WARNING_SIM_SELECT_ISIM_AID_FAILED,"[SIM] Select ISIM AID failed")
    TRC_MSG(WARNING_SIM_SELECT_CSIM_AID_FAILED,"[SIM] Select CSIM AID failed")
    TRC_MSG(WARNING_ISIM_FULL_RECOVERY_FAILED,"[SIM] ISIM Full Recovery fail!")
    TRC_MSG(WARNING_SIM_NULL_AID,"[SIM] NULL AID!!")
    TRC_MSG(WARNING_SIM_CDMA_RESET_NO_SIM, "SIM_Reset_NoSIM in CDMA Detection %MDCL_SIM_STATUS")
    TRC_MSG(WARNING_SIM_CDMA_CARD_LOST,"[SIM] Card lost in CDMA Detection")
    TRC_MSG(WARNING_SIM_RESET_DCLSIM_CLOSE,"[SIM] sim_al_reset(): DclSIM_Close")
    TRC_MSG(WARNING_SIM_RESET_CCCI_CALLBACK_FAIL,"[SIM] SIM Register CCCI CALLBACK Fail!")
    TRC_MSG(WARNING_SIM_RESET_CDMA_DETECTION_RESET_ERROR,"[SIM] CDMA detection: SIM reset error")
    TRC_MSG(WARNING_SIM_RESET_18V_SIM_RESET_30V_REJECT,"[SIM] 1.8V tech SIM: SIM reset@3.0V but we're 1.8V only! Reject")
    TRC_MSG(WARNING_SIM_RESET_NO_SUPPORT_18V_SIM_REJECT,"[SIM] Not 1.8V supported SIM card! Reject")
    TRC_MSG(WARNING_SIM_RESET_SIM_CARD_ERROR_AND_RECOVERY,"[SIM] SIM card error & retry sim by recovery")
    TRC_MSG(WARNING_SIM_RESET_SIM_IN_INSERTED_AND_RECOVERY,"[SIM] SIM no inserted & retry sim by recovery")
    TRC_MSG(WARNING_SIM_RESET_SIM_CARD_ERROR,"[SIM] SIMcardError")
    TRC_MSG(WARNING_SIM_RESET_SBP_OP09_SIM_LOCK_MUST_CDMA_CARD,"[SIM] OP09 slot1 Must CDMA card")
    TRC_MSG(WARNING_SIM_RESET_SBP_OP09_SIM_LOCK_MUST_CT_CARD,"[SIM] OP09 slot1 Must CT card")
    TRC_MSG(WARNING_SIM_RESET_DETECT_CDMA_CARD_ON_SIM2,"[SIM] Detect CDMA Card On SIM2")
    TRC_MSG(WARNING_USIM_RECOVERY_RESET_NO_SIM,"[SIM] SIM Reset done, No SIM detect")
    TRC_MSG(WARNING_USIM_RECOVERY_CARD_CHANGED,"[SIM] SIM_fast_recovery detects card changed")
    TRC_MSG(WARNING_SIM_GET_PIN_STATUS_FAILED,"[SIM] get PIN status Fail!")
    TRC_MSG(WARNING_SIM_PIN_IS_VERIFIED_BUT_FAIL,"[SIM] PIN is verified but Fail!!")
    TRC_MSG(WARNING_SIM_NO_VERIFIED_PIN_FOR_RECOVERY,"[SIM] No verified PIN for USIM Recovery")
    TRC_MSG(WARNING_ISIM_CHANNEL_IS_CHANGED,"[SIM] ISIM channel different")
    TRC_MSG(WARNING_SIM_HOT_SWAP_DETECT_CARD_CHANGED,"[SIM] SIM_sw_hot_swap detect card changed")
    TRC_MSG(WARNING_SIM_RECOVERY_DETECT_CARD_CHANGED,"[SIM][RECOVERY] SIM_recovery detect card changed")
    TRC_MSG(WARNING_SIM_RECOVERY_SKIP_ICCID_CHECK,"[SIM][RECOVERY] Skip ICCID check")
    TRC_MSG(WARNING_SIM_ERROR_BEFORE_START_CNF,"[SIM] SIM_ERROR_IND before SIM_START_CNF, ignore it")
    TRC_MSG(WARNING_SIM_IMSI_LOCKING_POWER_OFF_SIM,"[SIM] IMEI Locking, power off card")
    TRC_MSG(WARNING_SIM_FAST_RECOVERY_FAIL,"[SIM] SIM_Fast_Recovery fail")
    TRC_MSG(WARNING_ISIM_FAST_RECOVERY_FAIL,"[SIM] ISIM_Fast_Recovery fail")
    TRC_MSG(WARNING_SIM_RECOVERY_FAIL,"[SIM] SIM_Recovery fail")
    TRC_MSG(WARNING_ISIM_RECOVERY_FAIL,"[SIM] ISIM_Recovery fail")
    TRC_MSG(WARNING_SIM_IMSI_LEN_IS_ZERO,"[SIM] IMSI length is 0")
    TRC_MSG(WARNING_SIM_CARD_TYPE_SWITCH_WITH_SIM_TYPE,"[SIM][Warning] Card Type Switch: already SIM Type")
    TRC_MSG(WARNING_SIM_CARD_TYPE_SWITCH_WITH_UIM_TYPE,"[SIM][Warning] Card Type Switch: already UIM Type")
    TRC_MSG(WARNING_SIM_CARD_TYPE_SWITCH_WITH_UNEXPECTED_TYPE,"[SIM][Warning] Card Type Switch: un-expected UICC APP Type")
    TRC_MSG(WARNING_SIM_CARD_TYPE_SWITCH_UNEXPECTED_REQ,"[SIM][Warning] Card Type Switch: UIM activated, unexpected MSG")
    TRC_MSG(WARNING_SIM_NOT_SUPPORT_EF_EST,"[SIM] EF_EST not supported!")
    TRC_MSG(WARNING_SIM_LONG_MSISDN,"[SIM] Long MSISDN, more than 11 bytes")
    TRC_MSG(WARNING_SIM_READ_EF_ACC_FAIL,"[SIM] EF_ACC Read Failed")
    TRC_MSG(WARNING_SIM_SELECT_EF_ACC_FAIL,"[SIM] EF_ACC Select Failed")
    TRC_MSG(WARNING_SIM_APVSIM_ON_BUT_PLUG_OUT,"[SIM] APVSIM is ON, driver plug out ignored!!")
    TRC_MSG(WARNING_SIM_APVSIM_ON_BUT_PLUG_IN,"[SIM] APVSIM is ON, driver plug in ignored!!")
    TRC_MSG(WARNING_SAT_GMSS_CHANGE_EUTK_NOT_ALLOWED,"[SAT] GMSS try to change EUTK setting when ERAT is not Global Mode, reject it")
    TRC_MSG(WARNING_SAT_COMMAND_DISPATCH_ERROR,"[SAT] Command Dispatch ERROR, force handle by STK!!")
    TRC_MSG(WARNING_SAT_COMMAND_SESSION_ERROR,"[SAT] STK session error, terminal response is not match the command type")
    TRC_MSG(WARNING_SAT_COMMAND_SESSION_CONFLICT,"[SAT] sat_cmd_detail[%d]: %02X != tr_cmd_detail[%d]: %02X")
    TRC_MSG(WARNING_SIM_OP09_NON_CDMA_CARD_PLUG_OUT,"[SIM] OP09 non-CDMA card plug out")
    TRC_MSG(WARNING_SIM_HOLD_RECOVERY_UNTIL_START_CNF,"[SIM] Hold recovery trigger until SIM_START_CNF")
    TRC_MSG(WARNING_SIM_MODEM_IS_TURNING_OFF,"[SIM] Modem is turning off, skip SIM recovery.")
    TRC_MSG(WARNING_SIM_TRIGGER_RECOVERY_AFTER_START_CNF,"[SIM] Trigger recovery after SIM_START_CNF")
    TRC_MSG(WARNING_SAT_DBG_OFFSET_OVERFLOW,"[SAT][WARNING] Envelope offset overflow, current offset: %d, total data size: %d")
    TRC_MSG(WARNING_SAT_DBG_TAGLEN_OVERFLOW,"[SAT][WARNING] Envelope TAG length overflow, TAG length: %d, remain size: %d")
    TRC_MSG(WARNING_SIM_INIT_FILE_CACHE_FAIL,"[SIM][CACHE] FILE %d cache file failure, INS = %02X, length = %d")
    TRC_MSG(WARNING_SIM_INIT_FILE_CACHE_STRUCT_FAIL,"[SIM][CACHE] Not support file struct %d")
    TRC_MSG(WARNING_SIM_SELECT_DETECT_MF_PATH,"[SIM] MF in destination selecting path")
    TRC_MSG(WARNING_SIM_SELECT_NULL_PATH,"[SIM] sim_select() input NULL path!")
    TRC_MSG(WARNING_SIM_POWEROFF_INVALID_HANDLE,"[SIM] Intend to poweroff invalid handle")
    TRC_MSG(WARNING_SIM_POWEROFF_SKIP_APDU,"[SIM][WARNING] Skip APDU due to poweroff incomming")
    TRC_MSG(WARNING_SIM_INVALID_RECORD,"Invalid Record!")
    TRC_MSG(WARNING_SIM_READ_LARGE_BINARY_FILE,"[SIM]Always read large binary file via SIM IO!!!")
    TRC_MSG(WARNING_SIM_DISABLE_NOTIFY, "The SIM is Disabled !")
    TRC_MSG(WARNING_SIM_ESIMPOWER_ERROR, "AP SIM Power or OP20 SIM Lock req moode(%d) error!")
    TRC_MSG(WARNING_SIM_DISABLE_NV_ERROR, "SIM disable get NV error NVLID:%Mnvram_lid_sim_enum !")

    TRC_MSG(WARNING_SIM_TIMER_STILL_RUNNING,"[SIM][WARNING] Unexpected Timer Status: %Msim_timer_status_enum, skip sim_timer_resume()")
    TRC_MSG(WARNING_SIM_MANDATORY_FILE_READ_ERROR,"[SIM] Mandatory File Read Error, %Msim_file_index_enum")
    TRC_MSG(WARNING_SIM_ADM_ALLOC_FAIL, "[ADM]slot_%d %Msim_cache_file_idx_enum alloc %d bytes fail. Remain %d bytes.")
    TRC_MSG(WARNING_SAT_UNKNOWN_REISSUE_SRC, "[SAT] Unknown reissue REFRESH checking source")
    TRC_MSG(WARNING_SAT_ENVELOPE_SIZE_EXCEED, "[SAT] Envelope Size exceeds the max value - %Msat_tag_enum(EVDL: %Msat_event_download_enum)")
    TRC_MSG(WARNING_SIM_DETECT_APDU_LOST, "Continue with USIM/SIM detection")
    TRC_MSG(WARNING_SIM_UPDATE_RPM_VERSION_FAIL, "[SIM] EF_RPM_VERSION Update Fail")
    TRC_MSG(WARNING_APDU_INPUT_LEN_INCONSISTANT,"Requested DATA LENGTH Inconsistant!")
    TRC_MSG(WARNING_EXTENDED_FORMAT_NOT_SUPPORTED,"Extended Length Format not Supported!")
    TRC_MSG(WARNING_APDU_CASE_UNKNOWN,"APDU unknown case!")
    TRC_MSG(WARNING_UNEXPECTED_APDU_TYPE,"unexpected APDU type!")
    TRC_MSG(WARNING_SIM_UNEXPECTED_ILM_BESIDES_AUTHENTICATE,"[SIM][WARNING] AUTHENTICATE command is expected here")
    TRC_MSG(WARNING_SIM_FAKE_IMSI,"[SIM] Fake Identity Enabled!")
    TRC_MSG(WARNING_SIM_DSS_CARD_CHANGED, "[SIM][DSS]Card Changed!!")
    TRC_MSG(WARNING_SIM_EUICC_RESET_NO_SIM, "SIM_Reset_NoSIM in eUICC Detection %MDCL_SIM_STATUS")
    TRC_MSG(WARNING_SIM_EUICC_DETECT_WITHOUT_EID, "[EUICC] without EID!")
    TRC_MSG(WARNING_SIM_EUICC_DETECT_PARSE_EID_FAIL, "[EUICC] Parse EID fail!")

    /* TRACE_ERROR trace class */   
    TRC_MSG(ERROR_SIM_RESET_ABNORMAL_CMD_RETRY, "SIM_RESET_ABNORMAL: command retry")    /* Benson 0209 */
    TRC_MSG(ERROR_SERVICE_NOT_DEFINED,"%Msim_service_enum Not Defined!")
    TRC_MSG(ERROR_SIM_INTERFACE_ERROR,"SIM_ERROR: interface = %d Not Valid!")
    TRC_MSG(ERROR_SELECT_FAIL_FOR_AUTHENTICATE,"SIM_ERROR: fail to select file for AUTHENTICATE")
    TRC_MSG(ERROR_INCORRECT_C2K_FILE_RECORD_SIZE,"SIM_ERROR: incorrect c2k file record size")
    TRC_MSG(ERROR_SAT_PROFILE_DOWNLOAD_FAILED,"[SAT] Profile Download Fail!")
    TRC_MSG(ERROR_SIM_SELECT_EF_IMSI_FAIL,"[SIM] select EF_IMSI Fail!")
    TRC_MSG(ERROR_SIM_READ_EF_IMSI_FAIL,"[SIM] read EF_IMSI Fail!")
    TRC_MSG(ERROR_SIM_STATUS_REQ_INVALID_HANDLE,"[SIM] sim invalid handle when status req")
    TRC_MSG(ERROR_SIM_FILE_INFO_REQ_INVALID_HANDLE,"[SIM] sim invalid handle when file info req")
    TRC_MSG(ERROR_SIM_READ_REQ_INVALID_HANDLE,"[SIM] sim invalid handle when read req")
    TRC_MSG(ERROR_SIM_WRITE_REQ_INVALID_HANDLE,"[SIM] sim invalid handle when write req")
    TRC_MSG(ERROR_SIM_STATUS_ERROR,"[SIM] STATUS error!")
    TRC_MSG(ERROR_SIM_SET_RAT_MODE_BEFORE_SIM_START,"[SIM]Set rat mode before SIM start!")
    TRC_MSG(ERROR_SIM_CONTINOUS_PLUG_IN,"Continuous plug in detect, ignore!")

    /* New GROUP1 */
    TRC_MSG(GROUP3_SIM_START_TIMER, "sim_start_timer()")      /* Benson 0204 */
    TRC_MSG(GROUP3_SIM_STOP_TIMER, "sim_stop_timer()")        /* Benson 0204 */
    TRC_MSG(GROUP3_SIM_START_RECOVERY_TIMER, "sim_start_recovery_timer()")

    /* New GROUP2*/
    TRC_MSG(GROUP2_SIM_ERROR_HANDLE,"sim_error_handler()")
    TRC_MSG(GROUP2_SIM_APP_ERROR_HANDLE,"sim_app_error_handler()")
    /*[MAUI_02356453] 20110123 mtk01612: sim_smu_error_ind is removed due to no need after MAUI_01815935*/
    TRC_MSG(GROUP2_SIM_READ_ECC_ELP,"sim_read_ecc_elp()")
    TRC_MSG(GROUP2_SIM_PROFILE_DOWNLOAD,"sim_profile_download()")
    TRC_MSG(GROUP2_SIM_READ_PHASE,"sim_read_phase()")
    TRC_MSG(GROUP2_SIM_GET_DN_TYPE,"sim_get_dn_type()")
    TRC_MSG(GROUP2_SIM_GET_PS_INFO,"sim_get_ps_info()")
    TRC_MSG(GROUP2_SIM_READ_SERVICE_TABLE,"sim_read_service_table()")
    TRC_MSG(GROUP2_SIM_INITIALIZATION,"sim_initialization()")
#ifdef __DSS_NO_RESET__
    TRC_MSG(GROUP2_USIM_CACHE_INITIALIZATION,"usim_initialization_cache_read()")
    TRC_MSG(GROUP2_SIM_CACHE_INITIALIZATION,"sim_initialization_cache_read()")
    TRC_MSG(GROUP2_ISIM_CACHE_INITIALIZATION,"isim_initialization_cache_read()")
#endif
    TRC_MSG(GROUP2_SIM_GET_CHV_INFO,"sim_get_chv_info()")
    TRC_MSG(GROUP2_SIM_STARTUP_READ,"sim_startup_read()")
    TRC_MSG(GROUP2_SIM_AL_RESET, "sim_al_reset()")            /* Benson 0204 */
    TRC_MSG(GROUP2_SIM_RESET_ABNORMAL, "sim_reset_abnormal()")    /* Benson 0204 */
    TRC_MSG(GROUP2_SIM_EXCEPTION_HANDLE, "sim_exception_handle()")    /* mtk01612 */
    TRC_MSG(GROUP2_SIM_AL_VERIFY_CHV, "sim_al_verify_chv()")      /* Benson 0204 */
    TRC_MSG(GROUP2_SIM_AL_UNBLOCK_CHV, "sim_al_unblock_chv()")    /* Benson 0204 */
    TRC_MSG(GROUP2_SIM_AL_CHANGE_CHV, "sim_al__change_chv()")     /* Benson 0204 */
    TRC_MSG(GROUP2_SIM_AL_SWITCH_CHV, "sim_al_switch_chv()")     
    TRC_MSG(GROUP2_SIM_AL_READ_BINARY, "sim_al_read_binary()")    /* Benson 0204 */
    TRC_MSG(GROUP2_SIM_AL_UPDATE_BINARY, "sim_al_update_binary()")/* Benson 0204 */
    TRC_MSG(GROUP2_SIM_AL_UPDATE_RECORD, "sim_al_update_record()")/* Benson 0204 */
    TRC_MSG(GROUP2_SIM_AL_RUN_GSM_ALGO, "sim_al_run_gsm_algo()")  /* Benson 0204 */
    TRC_MSG(GROUP2_SIM_AL_SEEK, "sim_al_run_gsm_algo()")      /* Benson 0204 */
    TRC_MSG(GROUP2_SIM_AL_STATUS, "sim_al_status()")          /* Benson 0204 */
    TRC_MSG(GROUP2_SIM_AL_REHABILITATE, "sim_al_rehabilitate()")  /* Benson 0204 */
    TRC_MSG(GROUP2_SIM_AL_INVALIDATE, "sim_al_invalidate()")      /* Benson 0204 */
    TRC_MSG(GROUP2_SIM_AL_INCREASE, "sim_al_increase()")          /* Benson 0204 */
    TRC_MSG(GROUP2_SIM_AL_POWEROFF, "sim_al_poweroff()")          /* Benson 0204 */
    TRC_MSG(GROUP2_SIM_AL_READ_RECORD, "sim_al_read_record()")    /* Benson 0204 */
    TRC_MSG(GROUP2_SIM_AL_GET_RESPONSE, "sim_al_get_response()")  /* Benson 0204 */
    TRC_MSG(GROUP2_SIM_AL_FETCH,"sim_al_fetch()")
    TRC_MSG(GROUP2_SIM_AL_TERMINAL_RESPONSE,"sim_al_terminal_response()")
    TRC_MSG(GROUP2_SIM_AL_TERMINAL_PROFILE,"sim_al_terminal_profile()")
    TRC_MSG(GROUP2_SIM_AL_ENVELOPE,"sim_al_envelope()")
    TRC_MSG(GROUP2_SIM_AL_SEARCH_RECORD, "sim_al_search_record()")   /* MAUI_02953154 */
    TRC_MSG(GROUP2_USIM_AL_MANAGE_CHANNEL,"usim_al_manage_channel()")
    TRC_MSG(GROUP2_USIM_AL_TERMINAL_CAPABILITY,"usim_al_terminal_capability()")

    TRC_MSG(GROUP2_SIM_CONNECT_REFRESH, "sim_connect_refresh()")  /* Nick 20080808 */

    TRC_MSG(GROUP2_USIM_RESET_ABNORMAL, "usim_reset_abnormal()")    /* mtk01612*/
    TRC_MSG(GROUP2_CSIM_RESET_ABNORMAL, "csim_reset_abnormal()")
    TRC_MSG(GROUP2_ISIM_RESET_ABNORMAL, "isim_reset_abnormal()")
    TRC_MSG(GROUP2_USIM_EXCEPTION_HANDLE, "usim_exception_handle()")    /* mtk01612 */
    TRC_MSG(GROUP2_CSIM_EXCEPTION_HANDLE, "csim_exception_handle()")
    TRC_MSG(GROUP2_ISIM_EXCEPTION_HANDLE, "isim_exception_handle()")

    TRC_MSG(GROUP2_SIM_APDU_RESP, "sim_apdu_resp()")      //mtk01612: __CSIM__
    TRC_MSG(GROUP2_USIM_APDU_RESP, "usim_apdu_resp()")      //mtk81143: __CGLA__

    TRC_MSG(GROUP2_BUILD_TERMINAL_RESPONSE,"build_terminal_response()")
    TRC_MSG(GROUP2_SAT_EVDL_MT_CALL,"sat_evdl_mt_call()")
    TRC_MSG(GROUP2_SAT_EVDL_CALL_CONNECT,"sat_evdl_call_connect()")
    TRC_MSG(GROUP2_SAT_EVDL_CALL_DISCONNECT,"sat_evdl_call_disconnect()")
    TRC_MSG(GROUP2_SAT_EVDL_LOCATION_STATUS,"sat_evdl_location_status()")
    TRC_MSG(GROUP2_SAT_EVDL_USER_ACTIVITY,"sat_evdl_user_activity()")
    TRC_MSG(GROUP2_SAT_EVDL_IDLE_SCREEN_AVAILABLE,"sat_evdl_idle_screen_available()")
    TRC_MSG(GROUP2_SAT_EVDL_CARD_READER_STATUS,"sat_evdl_card_reader_status()")
    TRC_MSG(GROUP2_SAT_EVDL_LANGUAGE_SELECTION,"sat_evdl_language_selection()")
    TRC_MSG(GROUP2_SAT_EVDL_BROWSER_TERMINATION,"sat_evdl_browser_termination()")
    TRC_MSG(GROUP2_SAT_EVDL_DATA_AVAILABLE,"sat_evdl_data_available()")
    TRC_MSG(GROUP2_SAT_EVDL_CHANNEL_STATUS,"sat_evdl_channel_status()")
    TRC_MSG(GROUP2_SAT_EVDL_ACCESS_TECHNOLOGY_CHANGE,"sat_evdl_access_technology_change()")
    TRC_MSG(GROUP2_SAT_EVDL_PLMN_INFORMATION,"sat_evdl_plmn_information()")
    TRC_MSG(GROUP2_SAT_EVDL_NW_SEARCH_MODE_CHANGE,"sat_evdl_nw_search_mode_change()")  /*mtk02374 090513 add for evdl nw search mode*/
    TRC_MSG(GROUP2_SAT_EVDL_NW_REJECT,"sat_evdl_nw_reject()")
    TRC_MSG(GROUP2_SAT_EVDL_HCI_CONNECTIVITY,"sat_evdl_hci_connectivity()")  /* __SATCM__ */
    TRC_MSG(GROUP2_SAT_EVDL_IMS_REGISTRATION,"sat_evdl_ims_registration_ind_handler()")
    TRC_MSG(GROUP2_SAT_MSISDN_ENVELOPE,"sat_msisdn_envelope_handler()")
    TRC_MSG(GROUP2_SAT_TIMER_EXPIRATION,"sat_timer_expiration()")
    TRC_MSG(GROUP2_SAT_CALL_CTRL_CHECK,"sat_call_ctrl_check()")
    TRC_MSG(GROUP2_SAT_SMS_CTRL_CHECK,"sat_sms_ctrl_check()")
    TRC_MSG(GROUP2_SAT_START_BASE_TIMER,"sat_start_base_timer()")
    TRC_MSG(GROUP2_SAT_STOP_BASE_TIMER,"sat_stop_base_timer()")
    TRC_MSG(GROUP2_SAT_START_TIMER,"sat_start_timer()")
    TRC_MSG(GROUP2_SAT_STOP_TIMER,"sat_stop_timer()")
    TRC_MSG(GROUP2_SAT_STOP_TIMERS_FOR_DSS,"sat_stop_timers_for_dss()")
    TRC_MSG(GROUP2_SAT_TIMER_EXPIRY_HDLR,"sat_timer_expiry_hdlr()")
    TRC_MSG(GROUP2_DECODE_TEXT_STRING,"decode_text_string()")
    TRC_MSG(GROUP2_DECODE_ICON_ID,"decode_icon_id()")
    TRC_MSG(GROUP2_DECODE_ALPHA_ID,"decode_alpha_id()")
    TRC_MSG(GROUP2_DECODE_ONLY_DATA_BLOCK,"decode_only_data_block()")
    TRC_MSG(GROUP2_DECODE_ONLY_U8,"decode_only_u8()")
    TRC_MSG(GROUP2_DECODE_DURATION,"decode_duration()")
    TRC_MSG(GROUP2_DECODE_ITEM,"decode_item()")
    TRC_MSG(GROUP2_DECODE_ITEM_NEXT_ACTION_IND,"decode_item_next_action_ind()")
    TRC_MSG(GROUP2_DECODE_ITEM_ICON_ID_LIST,"decode_item_icon_id_list")
    TRC_MSG(GROUP2_DECODE_FILE_LIST,"decode_file_list()")
    TRC_MSG(GROUP2_ENCODE_TEXT_STRING,"encode_text_string()")
    TRC_MSG(GROUP2_SAT_START_PEND_TIMER,"sat_start_pending_refresh_timer()")
    TRC_MSG(GROUP2_SAT_STOP_PEND_TIMER,"sat_stop_pending_refresh_timer()")
    TRC_MSG(GROUP2_SAT_PEND_TIMER_EXPIRATION,"sat_pending_refresh_timer_expiration()")

    /* TRACE_GROUP3 SIM_CMD_APDU */
    TRC_MSG(GROUP3_SIM_CMD_TX, "%Msim_instruction_code_enum : length: %hd")
    TRC_MSG(GROUP3_SIM_CMD_RX, "APDU_rx length: %hd")
    TRC_MSG(GROUP3_SIM_CMD_APDU_TX, "APDU_tx %hd: %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X")
    TRC_MSG(GROUP3_SIM_CMD_APDU_RX, "APDU_rx %hd: %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X")    
    TRC_MSG(GROUP3_SIM_NVRAM_FILE_INFO, "%Mnvram_lid_vsim_enum [%d]: length: %hd")
    TRC_MSG(GROUP3_SIM_NVRAM_RDATA, "NV_RDATA %hd: %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X")
    TRC_MSG(GROUP3_SIM_NVRAM_WDATA, "NV_WDATA %hd: %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X")
    TRC_MSG(GROUP3_SIM_DISABLE_NVRAM_WDATA, "[SIM Disable] NV_WDATA %hd:%s")

    TRC_MSG(GROUP3_SIM_ADM_FILE_INFO, "%Msim_cache_file_idx_enum [%d]: length: %hd")
    TRC_MSG(GROUP3_SIM_ADM_RDATA, "ADM_RDATA %hd: %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X")
    TRC_MSG(GROUP3_SIM_ADM_WDATA, "ADM_WDATA %hd: %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X")

    TRC_MSG(GROUP3_USIM_CMD_TX, "%Musim_instruction_code_enum : length: %hd")
    TRC_MSG(GROUP3_USIM_CMD_RX, "APDU_rx length: %hd") 
    TRC_MSG(GROUP3_USIM_CMD_APDU_TX, "APDU_tx %hd: %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X")
    TRC_MSG(GROUP3_USIM_CMD_APDU_RX, "APDU_rx %hd: %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X")
    /* dual SIM control message (driver) */
    TRC_MSG(SIM_GEMINI_CMD1, "[SIM_CMD1] %x %x %x %x, %x %x %x %x")
    TRC_MSG(SIM_GEMINI_CMD2, "[SIM_CMD2] %x %x %x %x, %x %x %x %x")
    TRC_MSG(SIM_GEMINI_CMD3, "[SIM_CMD3] %x %x %x %x, %x %x %x %x")
    TRC_MSG(SIM_GEMINI_GEN1, "[SIM_GEN1] file %x, line %x, %x %x, %x %x %x %x") 
    TRC_MSG(SIM_GEMINI_GEN2, "[SIM_GEN2] %x %x, %x %x")

    TRC_MSG(GROUP4_MILENAGE_INFO, "%s : length: %d")
    TRC_MSG(GROUP4_MILENAGE_INFO_VALUE, " %d: %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X %02X")

#ifdef __SAT_SIMULATOR__
    TRC_MSG(SAT_SIMULATOR_START_SEND_STATUS, "[SAT] Start Sending STATUS command for SAT commands")
    TRC_MSG(SAT_SIMULATOR_STATE_CHANGE, "[SAT] Simulator State Change: %Msat_simulator_state_enum -> %Msat_simulator_state_enum")
    TRC_MSG(SAT_SIMULATOR_DEVICE_ID, "[SAT] DEVICE_ID: %Msat_simulator_device_id_enum -> %Msat_simulator_device_id_enum")
    TRC_MSG(SAT_SIMULATOR_ITEM_ID, "[SAT] ITEM_ID: %02X")
    TRC_MSG(SAT_SIMULATOR_ACCESS_TECH_CHANGE, "[SAT] RAT: %Msat_rat_status_enum")
    TRC_MSG(SAT_SIMULATOR_TLV_LENGTH_TOO_LONG, "[SAT] Data object or Proactive command too long, ignore this command")
#endif

END_TRACE_MAP(MOD_SIM)

#endif /* _SIM_TRC_H */

