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
 *==============================================================================
 * 				HISTORY
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
 *
 * removed!
 * removed!
 * removed!
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!! 
 *==============================================================================
 *******************************************************************************/

#ifndef _SMU_TRC_H
#define _SMU_TRC_H

#include "kal_public_defs.h" //MSBB change #include "stack_config.h"
#include "kal_trace.h"

#ifndef GEN_FOR_PC

   #ifndef _STACK_CONFIG_H
   #error "stack_config.h should be included before tst_config.h"
   #endif

#else

   #include "kal_trace.h"
   
#endif


#ifndef _KAL_TRACE_H
   #error "kal_trace.h should be included before tst_trace.h"
#endif

#if !defined(GEN_FOR_PC)
#if defined(__TST_MODULE__) || defined(__CUSTOM_RELEASE__)
    #include "smu_trc_gen.h"
#endif
#endif

BEGIN_TRACE_MAP(MOD_SMU)

    /* TRACE_FUNC trace class */   
    TRC_MSG(SAVE_SECURITY_TO_NVRAM,"save_security_to_nvram")                       
    TRC_MSG(SMU_SEND_SECURITY_CNF,"smu_send_security_cnf")  
    TRC_MSG(SMU_SEND_SECURITY_REQ,"smu_send_security_req")
    TRC_MSG(SMU_APP_SEND_SECURITY_REQ,"smu_app_send_security_req")
    TRC_MSG(SMU_CHECK_PERSONALIZATION,"smu_check_personalization")
    TRC_MSG(CONVERT_PUCT_STR_TO_SIM,"convert_puct_str_to_sim")
    TRC_MSG(CONVERT_PUCT_SIM_TO_STR,"convert_puct_sim_to_str")   
    TRC_MSG(LOCK_FIRST_INSERTED_SIM_PROCEDURE,"lock_first_inserted_sim_procedure")
    TRC_MSG(L4CSMU_START_REQ_HANDLER,"l4csmu_start_req_handler")   
    TRC_MSG(L4CSMU_APP_START_REQ_HANDLER,"l4csmu_app_start_req_handler")  
    TRC_MSG(NVRAM_WRITE_CNF_HANDLER,"nvram_write_cnf_handler")
    TRC_MSG(SMU_START_CNF_HANDLER,"smu_start_cnf_handler")   
    TRC_MSG(SMU_APP_START_CNF_HANDLER,"smu_app_start_cnf_handler")   
    TRC_MSG(SMU_MMI_SECURITY_IND_HANDLER,"smu_mmi_security_ind_handler")
    TRC_MSG(SMU_MMI_READY_IND_HANDLER,"smu_mmi_ready_ind_handler")
    TRC_MSG(SMU_APP_READY_IND_HANDLER,"smu_app_ready_ind_handler")
    TRC_MSG(SMU_EVENT_IND_HANDLER,"smu_event_ind_handler")
    TRC_MSG(L4CSMU_SECURITY_REQ_HANDLER,"l4csmu_security_req_handler")  
    TRC_MSG(L4CSMU_APP_SECURITY_REQ_HANDLER, "l4csmu_app_security_req_handler")
    TRC_MSG(L4CSMU_SIM_ACCESS_REQ_HANDLER,"l4csmu_sim_access_req_handler")
    TRC_MSG(SMU_SIM_READ_CNF_HANDLER,"smu_sim_read_cnf_handler")   
    TRC_MSG(SMU_SIM_WRITE_CNF_HANDLER,"smu_sim_write_cnf_handler")
    TRC_MSG(SMU_STATUS_CNF_HANDLER,"smu_status_cnf_handler")   
    TRC_MSG(L4CSMU_PLMN_SEL_WRITE_REQ_HANDLER,"l4csmu_plmn_sel_write_req_handler")  
    TRC_MSG(L4CSMU_PUCT_WRITE_REQ_HANDLER,"l4csmu_puct_write_req_handler")
    TRC_MSG(L4CSMU_DIAL_MODE_REQ_HANDLER,"l4csmu_dial_mode_req_handler")
    TRC_MSG(SMU_DIAL_MODE_CNF_HANDLER,"smu_dial_mode_cnf_handler")
    TRC_MSG(L4CSMU_READ_PLMN_SEL,"l4csmu_read_plmn_sel")
    TRC_MSG(L4CSMU_GET_CHV_STATUS,"l4csmu_get_chv_status")
    TRC_MSG(L4CSMU_PUCT_READ_REQ_HANDLER,"l4csmu_puct_read_req_handler")
    TRC_MSG(L4CSMU_GET_PREFERRED_LANGUAGE,"l4csmu_get_preferred_language")
    //TRC_MSG(L4CSMU_GET_ECC,"l4csmu_get_ecc")
    TRC_MSG(L4CSMU_GET_IMSI,"l4csmu_get_imsi")
    TRC_MSG(L4CSMU_GET_SIM_ACCESS_INFO,"l4csmu_get_sim_access_info")
    TRC_MSG(L4CSMU_GET_PUCT_VALUE,"l4csmu_get_puct_value")
    TRC_MSG(SMU_FILE_CHANGE_IND_HANDLER,"smu_file_change_ind_handler")   
    TRC_MSG(L4CSMU_SMS_DEPERSONALIZATION_REQ_HANDLER,"l4csmu_sms_depersonalization_req_handler")  //Kinki:[MAUI_01255000] 
   TRC_MSG(SMU_NVRAM_RESET,"smu_nvram_reset")
   TRC_MSG(SMU_NVRAM_RESET_CNF_HANDLER,"smu_nvram_reset_cnf_handler")
    TRC_MSG(FUNC_SMU_OP129_CHECK_SML,"smu_op129_check_sml()")
    TRC_MSG(FUNC_SMU_OP129_CHECK_LOCK,"smu_op129_check_lock()")
    TRC_MSG(FUNC_SMU_OP129_CHECK_CAT_LOCK,"smu_op129_check_cat_lock(%Msml_cat_enum)")
    TRC_MSG(FUNC_L4CSMU_OP129_UPDATE_SIMLOCK_SETTING_REQ_HANDLER,"l4csmu_op129_update_simlock_setting_req_handler()")
    TRC_MSG(FUNC_SMU_OP129_VALIDATE_RSU_DATA,"smu_op129_validate_rsu_data()")
    TRC_MSG(FUNC_SMU_OP129_IS_DATA_MATCH_RULE,"smu_op129_is_data_match_rule()")
    TRC_MSG(SMU_CHECK_CRRST, "smu_check_crrst")

    /* TC01 SML */
    TRC_MSG(SMU_TC01_WARNING,"Warning: %x, %d")

    /* SATCE */
    TRC_MSG(SAT_OPEN_CSD_CHANNEL_IND_HANDLER,"sat_open_csd_channel_ind_handler")   
    TRC_MSG(SAT_OPEN_GPRS_CHANNEL_IND_HANDLER,"sat_open_gprs_channel_ind_handler")   
    TRC_MSG(SAT_OPEN_SERVER_MODE_CHANNEL_IND_HANDLER,"sat_open_server_mode_channel_ind_handler")   
    TRC_MSG(L4CSMU_SAT_OPEN_CHANNEL_REQ_HANDLER,"l4csmu_sat_open_channel_req_handler")
    TRC_MSG(SAT_SET_ACCOUNT_PROFILE,"sat_set_account_profile")   
    TRC_MSG(TIMER_EXPIRY_CALL_BACK_FUNCTION,"timer_expiry_call_back_fun")
    TRC_MSG(SMU_START_TIMER,"smu_start_timer")   
    TRC_MSG(SMU_STOP_TIMER,"smu_stop_timer")
   TRC_MSG(SMU_START_SML_TIMER,"smu_start_sml_timer")   
   TRC_MSG(SMU_STOP_SML_TIMER,"smu_stop_sml_timer")
    TRC_MSG(SMU_TIMER_EXPIRY_HANDLER,"smu_timer_expiry_handler")
    TRC_MSG(ATTEMP_SETUP_TCP_LINK,"attemp_setup_tcp_link")
    TRC_MSG(ATTEMP_SETUP_UDP_LINK,"attemp_setup_udp_link")
    TRC_MSG(ATTEMP_SETUP_RAW_SOCKET,"attemp_setup_raw_socket")
    TRC_MSG(CHECK_RETRY_ALLOWED,"check_retry_allowed")
    TRC_MSG(L4CSMU_SAT_SET_CSD_PROF_RES_HANDLER,"l4csmu_sat_set_csd_prof_res_handler")
    TRC_MSG(L4CSMU_SAT_SET_GPRS_PROF_RES_HANDLER,"l4csmu_sat_set_gprs_prof_res_handler")
    TRC_MSG(SAT_APP_SOC_NOTIFY_IND_HANDLER,"sat_app_soc_notify_ind_handler")
    TRC_MSG(SAT_CLOSE_CHANNEL_IND_HANDLER,"sat_close_channel_ind_handler")
    TRC_MSG(CREATE_LINK_TO_SEND_DATA,"create_link_to_send_data")
    TRC_MSG(SAT_SEND_DATA_IND_HANDLER,"sat_send_data_ind_handler")
    TRC_MSG(SAT_RECV_DATA_IND_HANDLER,"sat_recv_data_ind_handler")
    TRC_MSG(L4CSMU_SAT_SEND_DATA_REQ_HANDLER,"l4csmu_sat_send_data_req_handler")
    TRC_MSG(L4CSMU_SAT_RECV_DATA_REQ_HANDLER,"l4csmu_sat_recv_data_req_handler")
    TRC_MSG(SAT_CH_STATUS_IND_HANDLER,"sat_ch_status_ind_handler")
    TRC_MSG(SAT_APP_SOC_DEACTIVATE_CNF_HANDLER,"sat_app_soc_deactivate_cnf_handler")
    TRC_MSG(SAT_APP_BEARER_INFO_IND_REQ_HANDLER,"sat_app_bearer_info_ind_req_handler")
    TRC_MSG(SMU_FREE_ACCOUNT,"smu_free_account")
    TRC_MSG(L4CSMU_SAT_BEARER_PARA_REQ_HANDLER,"l4csmu_sat_bearer_para_req_handler")
    TRC_MSG(SAT_OPEN_SERVER_MODE_CHANNEL_HANDLER,"sat_open_server_mode_channel_handler")

    /* TRACE_STATE trace class */   
    TRC_MSG(CSD_CHANNEL_AVAILABLE,"CSD_channel_available")
    TRC_MSG(CSD_CHANNEL_NOT_AVAILABLE,"CSD_channel_not_available")
    TRC_MSG(GPRS_CHANNEL_AVAILABLE,"GPRS_channel_available")
    TRC_MSG(GPRS_CHANNEL_NOT_AVAILABLE,"GPRS_channel_not_available")
    TRC_MSG(SERVER_MODE_CHANNEL_AVAILABLE,"SERVER_MODE_channel_available")
    TRC_MSG(SERVER_MODE_CHANNEL_NOT_AVAILABLE,"SERVER_MODE_channel_not_available")
    TRC_MSG(USER_DENIED_PROACTIVE_CMD,"User_denied_proactive_cmd")
    TRC_MSG(SOC_CREATE_FAILED,"soc_create_failed")
    TRC_MSG(SETSOCKOPT_NBIO_FAILED,"setsockopt_NBIO_failed")
    TRC_MSG(SETSOCKOPT_ASYNC_FAILED,"setsockopt_ASYNC_failed")
    TRC_MSG(SOCKET_BIND_FAILED,"socket_bind_failed")
    TRC_MSG(SOCKET_LISTEN_FAILED,"socket_listen_failed")
    TRC_MSG(AUTO_DISC_TIMER_SETUP_FAILED,"auto_disc_timer_setup_failed")
    TRC_MSG(SETSOCKOPT_SOC_IP_HDRINCL_FAILED,"setsockopt_SOC_IP_HDRINCL_failed")
    TRC_MSG(RETRY_ALLOWED,"retry_allowed")
    TRC_MSG(RETRY_NOT_ALLOWED,"retry_not_allowed")
    TRC_MSG(IMMEDIATE_LINK,"Immediate_Link")
    TRC_MSG(CREATE_CSD_SOCKET_FAILED,"create_CSD_socket_failed")
    TRC_MSG(SOCKET_GREATER_ZERO,"socket>0")
    TRC_MSG(WAIT_CSD_SOCK_NOTIFY,"wait_CSD_sock_notify")
    TRC_MSG(ONDEMAND_LINK,"OnDemand_Link")
    TRC_MSG(CREATE_GPRS_SOCKET_FAILED,"create_GPRS_socket_failed")
    TRC_MSG(WAIT_GPRS_SOCK_NOTIFY,"wait_GPRS_sock_notify")
    TRC_MSG(NOTHING_TO_SEND,"Nothing_to_send")
    TRC_MSG(SENT_SUCCESS,"sent_success_and_complete")
    TRC_MSG(SAT_SEND_DATA_WB,"SAT_Send_Data:WB")
    TRC_MSG(SAT_SEND_DATA_OTHERS,"SAT_Send_Data:Others")
    TRC_MSG(CSD_BEARER_CONNECT_FAILED,"CSD_bearer_connect_fail")
    TRC_MSG(RAW_SOCKET_CONNECT,"Raw_Socket_connection")
    TRC_MSG(LINK_DROP,"Link_Drop")
    TRC_MSG(CHANNEL_ID_FOUND,"Channel_ID_found")
    TRC_MSG(LINK_EXISTED,"link_existed")
    TRC_MSG(CHV_ID_STATUS_NOT_SYNC,"channl_id_status_not_sync_channel_status")
    TRC_MSG(INVALID_CHV_ID,"Invalid_Channel_ID")
    TRC_MSG(START_TO_SEND,"start_send_data")
    TRC_MSG(REMAIN_DATA_LEN_ZERO_SOC_RECV_AGAIN,"remain_data_len=0_soc_recv_again")
    TRC_MSG(DATA_AVAILABLE_IN_RX_BUFF,"data_available_in_Rx_Buff_from SOC")
    TRC_MSG(NO_DATA_IN_SOC,"No_data_in_SOC")
    TRC_MSG(CLOSE_CHV_RES,"close_channel_response")
    TRC_MSG(DISC_EVENT_DOWNLOAD,"disconnet_event_download")
    TRC_MSG(CSD_SOC_ACTIVATE_UDP,"CSD_SOC_ACTIVATED_UDP")
    TRC_MSG(GPRS_SOC_ACTIVATE_UDP,"GPRS_SOC_ACTIVATED_UDP")
    TRC_MSG(BEARER_PARA_MODIFIED,"bearer_para_modified")
    TRC_MSG(BEARER_PARA_NOT_MODIFIED,"bearer_para_not_modified")
    TRC_MSG(NO_SOC_MAP,"no_soc_map")
    TRC_MSG(SMU_UT_NVRAM_NOT_DEFINED, "UT NVRAM of %Mnvram_lid_l4_enum is not defined!")
    TRC_MSG(SMU_UT_NVRAM_DATA_LEN_NOT_DEFINED, "NVRAM data length of %Mnvram_lid_l4_enum is not defined!")

    /* TRACE_INFO trace class */   
    TRC_MSG(L4CSMU_GET_PENDING_PASSWORD_ID, "[API] l4csmu_get_pending_password_id() [%Mmodule_type]: %Msmu_pending_password_id_enum")
    TRC_MSG(L4CSMU_GET_PENDING_PASSWORD_ID_EXT, "[API] l4csmu_get_pending_password_id(%Msim_interface_enum): %Msmu_pending_password_id_enum")
    TRC_MSG(L4CSMU_APP_GET_PENDING_PASSWORD_ID, "APP_PENDING_PASSWORD_ID: %d, %02X")
    TRC_MSG(INFO_LINK_SML_SUPER_VERFY, "[linkSML]: Super unlock")
    TRC_MSG(L4CSMU_GET_DIAL_MODE, "GET_DIAL_MODE: %02X ")
    //Kinki: MAUI_00632199
    TRC_MSG(UPDATE_IS_SIMCARD_REPLACED, "UPDATE_IS_SIMCARD_REPLACED: %d ") 
    //   TRC_MSG(IS_SIM_REPLACED, "IS_SIM_REPLACED: %02X ")   
    TRC_MSG(IS_SIM_INSERTED, "IS_SIM_INSERTED: %Msmu_sim_inserted_enum ")
    TRC_MSG(IS_SIM_INSERTED_EXT, "[API] is_sim_inserted(%Msim_interface_enum) [%Mmodule_type]: %Msmu_sim_inserted_enum") 
    TRC_MSG(UPDATE_IS_SIM_REPLACED, "UPDATE_IS_SIM_REPLACED: %Msmu_sim_status_enum ")
    TRC_MSG(CHECK_SIM_STATUS, "[API] check_sim_status() : %Msmu_sim_status_enum ") 
    TRC_MSG(CHECK_SIM_STATUS_EXT, "[API] check_sim_status(%Msim_interface_enum) [%Mmodule_type]: %Msmu_sim_status_enum")
    TRC_MSG(IS_SIMCARD_REPLACED, "[API] is_simcard_replaced() [%Mmodule_type]: %Mkal_bool ") 
    TRC_MSG(IS_SIMCARD_REPLACED_EXT, "[API] is_simcard_replaced(%Msim_interface_enum) [%Mmodule_type]: %Mkal_bool") 
    TRC_MSG(QUERY_SML_STATE, "QUERY_SML_STATE: cat = %d, state = %d ") 
    TRC_MSG(INFO_SML_LOAD, "SML: Load!")
    TRC_MSG(INFO_SML_OTA_N, "SML OTA: N category unlocked!")
    TRC_MSG(INFO_SML_OTA_NS, "SML OTA: NS category unlocked!")
    TRC_MSG(INFO_SML_OTA_SP, "SML OTA: SP category unlocked!")
    TRC_MSG(INFO_SML_OTA_C, "SML OTA: C category unlocked!")
    TRC_MSG(INFO_SML_TEST_SIM, "Test SIM Inserted!")
    TRC_MSG(INFO_SML_NORMAL_SIM, "Normal SIM Inserted!")
    TRC_MSG(INFO_SML_BY_PASS_TEST_SIM, "SML: By-Pass TEST SIM")
    TRC_MSG(INFO_SML_MASTERKEY, "SML: Masterkey Unlocked!")
    TRC_MSG(INFO_SML_BLOCK_LIST, "SML: Find in Block List")
    TRC_MSG(INFO_SML_N_GID1, "SML: N code matched, check GID1 now!")
    TRC_MSG(INFO_SML_N_ICCID, "SML: N code matched, check ICCID now!")
    TRC_MSG(INFO_SML_RJIO_LOCK_IMSI,"[RJIO Lock] IMSI %s")
	TRC_MSG(INFO_SML_RJIO_LOCK_ICCID,"[RJIO Lock] ICCID %s")
    TRC_MSG(INFO_SML_OTA_UNLOCKED, "SML OTA: unlocked!")
    TRC_MSG(INFO_SML_OTA_DISABLED, "SML OTA: disabled!")
    TRC_MSG(INFO_SML_OTA_LOCKED, "SML OTA: locked!")
    TRC_MSG(INFO_SML_OTA_SMS_DEP_UNLOCKED, "SML OTA: N category unlocked by OTA ME-specific!")
    TRC_MSG(INFO_SML_OTA_SMS_DEP_LOCKED, "SML OTA: N category remain locked!")
    TRC_MSG(INFO_SMU_SIM_REPLACED, "SIM Card replaced!")
   TRC_MSG(INFO_SML_NW_TIME_EXPIRED, "Time Expired from NITZ")
   TRC_MSG(INFO_SML_TEMP_UNLOCK_TIME, "sml_tmo_UpdateNwTimeAndCheckTempLock: start: %d, duration: %d, current: %d")
   TRC_MSG(INFO_SML_CHECK_TEMP_UNLOCK, "sml_tmo_CheckTempUnlock: sml_tmo_seconds_to_expire = %d, duration: %d")
   TRC_MSG(INFO_SMU_FIRST_LOAD, "smu_nvram_read_cnf_handler: First load! Write back to nvram")
   TRC_MSG(INFO_SMU_GET_COUNT, "sml_GetCount: %x, %x, %d")
   TRC_MSG(INFO_SMU_CHECK_LENGTH, "sml_Check: code length = %d, compare length = %d, mnc length = %d")
   TRC_MSG(INFO_SMU_CHECK_IGNORE_PID1, "Permanent lock ignore gid1 in: %2x, %2x, %2x, %2x")
   TRC_MSG(INFO_SMU_GET_UNLOCK_TIME_LEFT, "sml_GetUnlockTimeLeft: end time = %d, unlock time = %d")
    TRC_MSG(INFO_SMU_DUMP,"%02x %02x %02x %02x ")
    TRC_MSG(INFO_SMU_MULTIPLE_VERIFY_ALLOW, "MULTIPLE_VERIFY_ALLOW OP: %Msim_security_operation_enum, CHV: %Msim_chv_type_enum")
    TRC_MSG(INFO_SML_NO_GID,"No GID in SLB")
    TRC_MSG(INFO_SML_UICC_LOCK_IMSI,"[UICC Lock] %s")
    TRC_MSG(INFO_SML_UICC_LOCK_NO_IMSI,"[UICC Lock] No IMSI, Lock UICC Card")
    TRC_MSG(INFO_SML_UICC_LOCK_NO_IMSI_BUT_BYPASS,"[UICC Lock] No IMSI but no lock, bypass UICC Card lock checking")
    TRC_MSG(INFO_SML_UICC_LOCK_TEST_SIM,"[UICC Lock] Test SIM inserted, bypass UICC Card lock checking")
    TRC_MSG(INFO_SML_UICC_LOCK_INVALID_CODE,"[UICC Lock][Warning] UICC lock code INVALID")
    TRC_MSG(INFO_SML_UICC_LOCK_CODE_0,"[UICC Lock] the device must only recognize and enable an inserted Sprint UICC")
    TRC_MSG(INFO_SML_UICC_LOCK_CODE_1,"[UICC Lock] the device must recognize and enable any inserted international (Not a USA MCC) SIM as well as a Sprint SIM")
    TRC_MSG(INFO_SML_UICC_LOCK_CODE_2,"[UICC Lock] the device must recognize any inserted UICC, International or Domestic")
    TRC_MSG(INFO_SML_UICC_LOCK_NONCE,"[UICC Lock] Nonce : %s")
    TRC_MSG(INFO_SML_UICC_LOCK_DEGUB_STR,"[UICC Lock] %s")
    TRC_MSG(INFO_SML_UICC_LOCK_DEGUB_INT,"[UICC Lock] %d")
    TRC_MSG(INFO_SML_NVRAM_FILE_INFO, "%Mnvram_lid_l4_enum [%d]: length: %hd")
    TRC_MSG(INFO_SML_NVRAM_RDATA, "NV_RDATA %hd: %s")
    TRC_MSG(INFO_SML_NVRAM_WDATA, "NV_WDATA %hd: %s")
    TRC_MSG(INFO_SMU_DEGUB_LONG_STR_INFO,"[SMU] DBG String(len:%d)")
    TRC_MSG(INFO_SMU_DEGUB_STR,"[SMU] %s")
    TRC_MSG(INFO_SML_CHECK_RESULT,"[SML] %Msml_cat_enum(is_matched:%Mkal_bool)")
    TRC_MSG(INFO_SML_SL_STATE_UNLOCKED, "Subsidy Lock: Unlocked")
    TRC_MSG(INFO_SML_SL_GET_DUAL_SIM_LOCK_CONTROL, "Subsidy Lock Control: %d")
    TRC_MSG(INFO_SMU_RSA_PSS_VERIFY_SIGNATURE, "CustCHL_Verify_PSS_Signature return: %d")
    TRC_MSG(INFO_SMU_PKCS5_PBKDF2_HMAC_SHA256, "PKCS5_PBKDF2_HMAC_SHA256 return: %d")
    TRC_MSG(INFO_SMU_VERIFY_MAC, "Verify MAC return: %d")
    TRC_MSG(INFO_SMU_ALLOW_DEFAULT_IMEI, "[SL]: Allow default IMEI")
    TRC_MSG(L4CSMU_ONE_SIM_LCK_NO_NVRAM_WR, "Slot1 SIM lock Enabled: NO NVRAM Write for SML_LID on other slots")
    TRC_MSG(INFO_SMU_MAX_RETRY_COUNT_UPDATE_SUCCESS, "SML: Max Retry Count update success")
    TRC_MSG(INFO_SMU_FAULTY_SIM_DETECTED, "[SMU] Faulty SIM detected")
    TRC_MSG(INFO_SMU_IS_ICCID_VALID, "[SMU] is_iccid_valid: %d")
    TRC_MSG(QUERY_SML_POLICY, "[API] sml_query_legal_service(%Msim_interface_enum) [%Mmodule_type]: %Msml_lock_rule_policy_enum")
    TRC_MSG(UPDATE_SML_POLICY, "[API] sml_update_legal_service(%Msim_interface_enum) [%Mmodule_type]: %Msml_lock_rule_policy_enum, %Msml_state_is_valid_sim_enum")
    TRC_MSG(UPDATE_SML_SERVICE, "[API] sml_update_service_state(%Msim_interface_enum) [%Mmodule_type]: %Mlink_sml_srv_state_enum")
    TRC_MSG(QUERY_SML_LOCK_RULE, "[API] sml_query_sml_lock_rule() [%Mmodule_type]: %d")
    TRC_MSG(QUERY_SML_LOCK_SUB_RULE, "[API] sml_query_sml_lock_sub_rule() [%Mmodule_type]: %02X %02X")
    TRC_MSG(QUERY_SML_DEVICE_LOCK_STATUS, "[API] sml_query_sml_device_lock_status() [%Mmodule_type]: %Msml_device_lock_state_enum")
    TRC_MSG(INFO_SML_GBLOB_IMEI_1, "[GBLOB] IMEI_1(len:%d) : %s")
    TRC_MSG(INFO_SML_GBLOB_IMEI_2, "[GBLOB] IMEI_2(len:%d) : %s")
    TRC_MSG(INFO_SML_DEVICE_IMEI, "[GBLOB] (slot%d) IMEI : %s")
    TRC_MSG(INFO_SML_DEVICE_DEFAULT_IMEI, "[GBLOB] (slot%d) IMEI is empty")
    TRC_MSG(INFO_SML_GBLOB_SKIP_IMEI_CHECKING, "[GBLOB] custom_sml_is_gblob_imei_verification_enabled() is KAL_FALSE, Skip IMEI checking")
    TRC_MSG(INFO_SMU_NVRAM_ACCESS_REC_INFO, "NVRAM_LID access record[%d]")
    TRC_MSG(INFO_SML_GBLOB_DEV_LOCK_VERIFY_PASS_INFO, "[GBLOB] Device Lock verify success!!")
    TRC_MSG(INFO_SML_GBLOB_DEV_LOCK_VERIFY_FAIL_INFO, "[GBLOB] Device Lock verify fail!!")
    TRC_MSG(INFO_SML_GBLOB_DEV_LOCK_VERIFY_FAIL_REMAIN_CNT_INFO, "[GBLOB] Device remain count: %d")
    TRC_MSG(INFO_SML_GBLOB_DEV_LOCKED_PERMANENTLY_INFO, "[GBLOB] Device locked permanently!!")
    TRC_MSG(INFO_SML_GBLOB_DEV_LOCKED_NOT_ALLOW_INFO, "[GBLOB] Device locked, not allow AT+ESLBLOBF command")
    TRC_MSG(INFO_SML_GBLOB_DEV_LOCK_UPDATE_STATUS_INFO, "[GBLOB] Device Lock State update to %d")
    TRC_MSG(INFO_SML_CLEAN_LINK_SML_CONTEXT, "[LINK_SML][slot%d] SIM ERROR!! clean link-sml context in l4c_root")
    TRC_MSG(INFO_SML_GBLOB_IMEI_MATCHED, "[GBLOB] IMEI matched!!")
    TRC_MSG(INFO_SML_GBLOB_SML_SLOT_CNTXT_MAPPING_CHANGE_TO_COMMON, "[GBLOB] SML Context mapping to Common Context")
    TRC_MSG(INFO_SML_GBLOB_SML_SLOT_CNTXT_MAPPING_CHANGE_TO_INDEPENDENT, "[GBLOB] SML Context mapping to Independent Context")
    TRC_MSG(INFO_SML_GBLOB_SML_SLOT_CNTXT_SAVE, "[GBLOB] save SML context to NV_SML record%d from slot%d")
    TRC_MSG(INFO_SML_GBLOB_SML_SLOT_CNTXT_RELOAD, "[GBLOB] reload SML context from %Mnvram_lid_l4_enum record%d to slot%d")
    TRC_MSG(INFO_SML_SERVICE_LOCKED, "[SML] service locked, discard mmrr_ready_ind to stay in ECC only mode")
    TRC_MSG(INFO_SML_VALID_SIM_FORCE_LOCKED, "[SML] valid sim force locked!!")
	TRC_MSG(INFO_POWER_ON_IMEI_VERIFY_FAILED, "Power on IMEI verification failed! Not sending mmrr ready indication to L4C")
	TRC_MSG(INFO_SML_AUTOLOCK_COUNT_UPDATE, "[SML] Autolock count updated: %s! Count: %d")
	TRC_MSG(INFO_SML_ALGO_TYPE_UPDATE, "[SML] Algorithm type updated: %s! Type: %d")
	TRC_MSG(INFO_SML_INPUT_FORMAT_OF_CATKEY, "Input format of catkey: %Msml_input_format_of_catkey_for_algo_enum")
	TRC_MSG(INFO_CRRST_BYPASS_TEST_SIM, "CRRST: Bypass TEST SIM")
    TRC_MSG(INFO_CRRST_BYPASS_EXCEPTION_RESET_AND_ALREADY_PASSED, "CRRST: Bypass Exception reset and already passed")
    TRC_MSG(INFO_CRRST_DISABLED, "CRRST: Disabled !")
    TRC_MSG(INFO_CRRST_ALLOW_ALL, "CRRST: Allow All !")
    TRC_MSG(INFO_CRRST_BLACKLISTED, "CRRST: Blacklisted !")
    TRC_MSG(INFO_CRRST_WHITELISTED, "CRRST: Whitelisted !")
    TRC_MSG(INFO_CRRST_NOT_IN_WHITELIST, "CRRST: Not in whitelist !")
    TRC_MSG(INFO_CRRST_SEND_STATUS_IND_TO_CVAL, "CRRST: Send STATUS_IND to CVAL")
    TRC_MSG(INFO_CRRST_SEND_SYNC_IND_TO_CVAL, "CRRST: Send SYNC_IND to CVAL")
    TRC_MSG(INFO_CRRST_LOAD, "CRRST: Load!")
    TRC_MSG(INFO_CRRST_CHECK_C2K_STATUS, "CRRST: C2K status cdma_info=%d, pending_password_of_c2k=%d, result=%d")
    TRC_MSG(INFO_CRRST_ALLOWED_CARRIERS_PRIORITIZED, "CRRST: AllowedCarriersPrioritized=%d")
#ifdef __TFN_SIMLOCK__
     TRC_MSG(INFO_SML_TFN_EFUSE, "TFN SIMLOCK: efuse  %d")
     TRC_MSG(INFO_TFN_SIMLOCK_INCONSISTENT,"TFN simlock bootup state mismatch")
     TRC_MSG(INFO_TFN_SIMLOCK_CONSISTENT,"TFN simlock bootup state match")
     TRC_MSG(INFO_TFN_SIMLOCK_STATE,"TFN simlock state : %d")
#endif
#ifdef __VZW_RSU_SUPPORT__
    TRC_MSG(INFO_SML_VZW_CHECK_RESULT,"[SML][VZW] %Msml_vzw_cat_enum is_matched:%Mkal_bool")
    TRC_MSG(INFO_SML_VZW_CODE_DEBUG,"[SML][VZW] code:%s")
    TRC_MSG(INFO_SML_VZW_START_TEMP_UNLOCK_FAIL,"[SML][VZW] start temp unlock fail")
    TRC_MSG(INFO_SML_VZW_START_TEMP_UNLOCK_FAIL_NO_SIM,"[SML][VZW] start temp unlock fail no sim")
    TRC_MSG(INFO_SML_VZW_STOP_NULL_DELAY_TIMER,"[SML][VZW] not allow stop null delay timer")
    TRC_MSG(INFO_SML_VZW_STOP_TEMP_UNLOCK_FAIL,"[SML][VZW] stop temp unlock fail")
    TRC_MSG(INFO_SML_VZW_START_ONGOING_DELAY_TIMRE,"[SML][VZW] not allow start ongoing delay timer")
    TRC_MSG(INFO_SML_VZW_DELAY_TIMRE_EXPIRY,"[SML][VZW] delay timer expired")
    TRC_MSG(INFO_SML_VZW_STATE_NOT_ALLOW_TEMP_UNLOCK,"[SML][VZW] Not allow temp unlock when %Msml_vzw_lock_state_enum")
    TRC_MSG(INFO_SML_VZW_RSU_DELAY_TIMER,"[SML][VZW] delay timer:%d")
    TRC_MSG(INFO_SML_VZW_STOP_TEMP_UNLOCK_AND_PROCESS_RESPONSE,"[SML][VZW] stop temp unlock and process Response msg")
    TRC_MSG(INFO_SML_VZW_STOP_TEMP_UNLOCK_DUE_TO_DATA_RESET,"[SML][VZW] stop temp unlock due to data reset request")
#endif

    TRC_MSG(INFO_SML_TMO_RSU_STOP_TIMER, "[SML][TMO] Update New Blob. Stop Callback Timer.")
    TRC_MSG(INFO_SML_OP129_CAT_LOCK_RESULT, "[KDDI] %Msml_cat_enum check result: %Msmu_op129_lock_enum")
    TRC_MSG(INFO_SML_OP129_RULE_IS_BLACK_LIST, "[KDDI] Check rule (Black list)")
    TRC_MSG(INFO_SML_OP129_RULE_IS_WHITE_LIST, "[KDDI] Check rule (white list)")
    TRC_MSG(INFO_SMU_OP129_RSU_DATA_VALIDATE_RESULT, "[KDDI] RSU data validated result: %08x")
    TRC_MSG(INFO_SMU_OP129_DATA_BLOB_PARAMETERS, "[KDDI] Hash Start: %d, Hash Len: %d")
    TRC_MSG(INFO_SMU_OP129_IMEI_READ_FAILED, "[KDDI] IMEI Read failed. End RSU Data Signature verification")
    TRC_MSG(INFO_SMU_OP129_VERIFY_RSA_SIGNATURE_ERROR, "[KDDI] RSA Verify Error: %d")
	TRC_MSG(INFO_SMU_OP129_POWER_ON_VERIFY, "[KDDI] RSU Read from NVRAM. Verification: %s!")

    TRC_MSG(INFO_PENDING_SIM_START_CNF, "Pending SIM_START_CNF")
    TRC_MSG(INFO_HOLD_MMRR_READY_IND, "Not Sending MMRR_READY_IND! Waiting to send SECURITY_CNF.")
    TRC_MSG(INFO_TYPE_UNEXPECTED_ERROR,"SECURITY_CNF: TYPE_UNEXPECTED_ERROR")
    TRC_MSG(INFO_SET_CMD_ALLOW_TO_TRUE,"Set command_allow to TRUE")
    /* Debug Info UICC Nvram write/read API */
    TRC_MSG(INFO_UICC_NVRAM_OP_ERROR, "[UICC] NVRAM OP: %s, ERROR: %d")
    TRC_MSG(INFO_SMU_ENCRYPT_MODEM_CONFIG, "cust_sec_calc_ae_tt_blob ret: %d, cipher_len: %d, hmac_len: %d, iv_len:%d")
    
    
    /* FUNCTION */
    TRC_MSG(INFO_SMU_FUNC_PUBLIC_API_INFO,"[API] %s() [%Mmodule_type]")
    TRC_MSG(INFO_SMU_FUNC_PUBLIC_API_WITH_SIMID_INFO,"[API] %s(%Msim_interface_enum) [%Mmodule_type]")
    TRC_MSG(INFO_SMU_FUNC_ENTER_INFO,"[SMU] %s() [Enter]")
    TRC_MSG(INFO_SMU_FUNC_LEAVE_INFO,"[SMU] %s() [%d Leave]")
    TRC_MSG(INFO_SMU_FUNC_LEAVE_WITH_BOOL_INFO,"[SMU] %s() [%d Leave; Return %Mkal_bool]")
    TRC_MSG(INFO_SMU_FUNC_LEAVE_WITH_UINT_INFO,"[SMU] %s() [%d Leave; Return %d (%08X)]")
    TRC_MSG(INFO_SMU_FUNC_NVRAM_ACCESS_INFO,"[SMU] %s(%Mnvram_lid_l4_enum) [Enter]")

    /* STATE */
    TRC_MSG(INFO_SMU_STATE_UPDATE_WITH_BOOL_INFO,"[STATE] %s: %Mkal_bool => %Mkal_bool")
    TRC_MSG(INFO_SMU_STATE_UPDATE_WITH_BOOL_EXT_INFO,"[STATE] %s(%Msim_interface_enum): %Mkal_bool => %Mkal_bool")
    TRC_MSG(INFO_SMU_STATE_UPDATE_SIM_STATUS_INFO,"[STATE] sim_status: %Msmu_sim_status_enum => %Msmu_sim_status_enum")
    TRC_MSG(INFO_SMU_STATE_UPDATE_SIM_STATUS_EXT_INFO,"[STATE] sim_status(%Msim_interface_enum): %Msmu_sim_status_enum => %Msmu_sim_status_enum")
    TRC_MSG(INFO_SMU_STATE_UPDATE_PENDING_PASSWD_INFO,"[STATE] pending_password_id: %Msmu_pending_password_id_enum => %Msmu_pending_password_id_enum")

    /* SATCE */
    TRC_MSG(CHANNEL_ID, "CHANNEL_ID: %02X ")
    TRC_MSG(BEFORE_BUFF_SIZE, "BEFORE_BUFF_SIZE: %02X ")
    TRC_MSG(AFTER_BUFF_SIZE, "AFTER_BUFF_SIZE: %02X ")
    TRC_MSG(SOC_RETURN, "SOC_RETURN: %02X ")
    TRC_MSG(NUM_DATA, "NUM_DATA: %02X ")
    TRC_MSG(REMAIN_DATA_LEN, "REMAIN_DATA_LEN: %02X ")
    TRC_MSG(BUFF_HEAD, "BUFF_HEAD: %02X ")
    TRC_MSG(SOCTABLE, "CH:%02X SOC:%02X SON:%02X")

    /* TRACE_WARNING trace class */   
    TRC_MSG(WARNING_SML_UPDATE, "SML: update fail!")
    TRC_MSG(WARNING_SML_UPDATE_OTA, "SML: update fail(OTA)!")
    TRC_MSG(WARNING_SML_PERSONALIZE_WHILE_REFRESH, "SML: SML is refreshing! Please try again!")
    TRC_MSG(WARNING_SMU_PLMN_SIZE_EXCEED, "PLMN file size exceed MAX_SUPPORT_PLMN_DATA_SIZE!")
    TRC_MSG(WARNING_SML_LOAD_CHECK_VALIDITY_FAILED, "sml_Load: Check validity failed!")
    TRC_MSG(WARNING_SML_CHECK_VALIDITY_FAILED, "sml_Check: Check validity failed!")
    TRC_MSG(WARNING_SML_CHECK_IMEI_FAILED, "sml_Check: Check IMEI failed!")
    TRC_MSG(WARNING_PERSO_SIMLOCK_STATE_WHEN_SIM_INTERFACE_WRONG,"Wrong SIM ID")
    TRC_MSG(WARNING_SML_SL_BLOB_IMEI_MISMATCH, "sml_Load: Check IMEI validity failed!")
    TRC_MSG(WARNING_SML_IMEI_NOT_YET_WRITTEN_TO_DEVICE, "SML: IMEI not yet written to Device!")
#ifdef __VZW_RSU_SUPPORT__
    TRC_MSG(WARNING_SML_VZW_RSU_GET_INT_DATA_FAILED, "[SML][VZW] Get int %Msml_vzw_cat_enum %Msml_ctx_enum fail")
#endif
    TRC_MSG(WARNING_CRRST_INVALID_STATUS_IND, "CRRST: Invalid status indication")
    TRC_MSG(WARNING_CRRST_PERSONALIZE_WHILE_REFRESH, "CRRST: CRRST is refreshing! Please try again!")
    TRC_MSG(WARNING_RJIO_MCCMNC_ICCID_LIST_INCONSISTENT, "RJIO: MCC_MNC and ICCID List Inconsistent")

    /* TRACE_ERROR trace class */   
    TRC_MSG(ERROR_SML_SAVE, "SML:Fatal Error!")
    TRC_MSG(ERROR_SML_NVRAM_IO, "NVRAM_ERROR: %Mnvram_errno_enum ")
    TRC_MSG(ERROR_SMU_FUNC_ERROR, "[ERROR] %s() [%d]: %s") 
    TRC_MSG(ERROR_SML_GBLOB_IMEI_ERROR, "[GBLOB][ERROR] IMEI doesn't match!!! some data is incorrect") 

END_TRACE_MAP(MOD_SMU)
#endif


