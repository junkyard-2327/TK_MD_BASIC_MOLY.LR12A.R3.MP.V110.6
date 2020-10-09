/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2012
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
 *  med_trc.h
 *
 * Project:
 * --------
 *   MT6205
 *
 * Description:
 * ------------
 *   This is trace map definition.
 *
 * Author:
 * -------
 * -------
 *
 *==============================================================================
 *              HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
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

//#ifndef MED_NOT_PRESENT

#ifndef _MED_TRC_H
#define _MED_TRC_H

#ifndef GEN_FOR_PC
   #include "kal_public_defs.h"
#else
   #include "kal_trace.h"
#endif /* GEN_FOR_PC */

#ifndef _KAL_TRACE_H
   #include "kal_trace.h"
#endif

#if !defined(GEN_FOR_PC)
#if defined(__TST_MODULE__) || defined(__CUSTOM_RELEASE__)
   #include "med_trc_gen.h"
#endif /* TST Trace Defintion */
#endif

BEGIN_TRACE_MAP(MOD_MED)

   /* TRACE_FUNC trace class */
   /* GENERAL */
   TRC_MSG(MEM_INFO, "[MED][EXT] allocated, total=%d, alloc=%d, left=%d, ptr=%x, cnt after alloc=[%d]")
   TRC_MSG(FREE_MEM_INFO, "[MED][EXT] freed, left=%d, ptr=%x, cnt after free=%d")
   TRC_MSG(MEM_INFO_FRAGMENTATION, "[MED][EXT] alloc fail, fragmentation, total=%d, alloc=%d, left=%d, cnt=[%d]")
   TRC_MSG(MEM_INFO_CONCURRENT, "[MED][EXT] alloc fail, concurrent, total=%d, alloc=%d, left=%d, cnt=[%d]")

   TRC_MSG(MEM_INFO_INT, "[MED][INT] allocated, total=%d, alloc=%d, left=%d, ptr=%x, cnt after alloc=[%d]")
   TRC_MSG(FREE_MEM_INFO_INT, "[MED][INT] freed, left=%d, ptr=%x, cnt after free=%d")
   TRC_MSG(MEM_INFO_FRAGMENTATION_INT, "[MED][INT] alloc fail, fragmentation, total=%d, alloc=%d, left=%d, cnt=[%d]")
   TRC_MSG(MEM_INFO_CONCURRENT_INT, "[MED][INT] alloc fail, concurrent, total=%d, alloc=%d, left=%d, cnt=[%d]")

   TRC_MSG(MEM_INFO_AUD, "[MED][AUD] allocated, total=%d, alloc=%d, left=%d, ptr=%x, cnt after alloc=[%d]")
   TRC_MSG(FREE_MEM_INFO_AUD, "[MED][AUD] freed, left=%d, ptr=%x, cnt after free=%d")
   TRC_MSG(MEM_INFO_FRAGMENTATION_AUD, "[MED][AUD] alloc fail, fragmentation, total=%d, alloc=%d, left=%d, cnt=[%d]")
   TRC_MSG(MEM_INFO_CONCURRENT_AUD, "[MED][AUD] alloc fail, concurrent, total=%d, alloc=%d, left=%d, cnt=[%d]")

   TRC_MSG(AUD_VOLUME_TRC, "[MED][AUD]Volume: mode %d, vol %d, %d")
   TRC_MSG(AUD_PATH_TRC, "[MED][AUD]Path: mode %d, path %d, %d")
   TRC_MSG(AUD_MODULE_KEYTONE_TRC, "[MED][AUD][MOD]Keytone: %d, %d, %d, line %d")

   /* MED */
   TRC_MSG(MED_NVRAM_READ_DATA_CNF_HDLR, "MED: med_nvram_read_data_cnf_hdlr")
   TRC_MSG(MED_NVRAM_WRITE_DATA_CNF_HDLR, "MED: med_nvram_write_data_cnf_hdlr")

   /* Speech */
   TRC_MSG(AUD_TRC_SPEECH_SET_FIR_COEFF, "AUD: aud_speech_set_fir_coefficient(), input_index=[%d], output_index=[%d]")
   TRC_MSG(AUD_TRC_SPEECH_ON, "AUD: aud_speech_on(), rat_mode=[%d], state=[%d]")
   TRC_MSG(AUD_TRC_SPEECH_OFF, "AUD: aud_speech_off()")
   TRC_MSG(AUD_TRC_SPEECH_SET_MODE_REQ_HDLR, "AUD: aud_speech_set_mode_req_hdlr(), state=[%d]")

   /* Audio control - mode, path, volume */
   TRC_MSG(AUD_SET_AUDIO_MODE_REQ_HDLR, "AUD: aud_set_audio_mode_req_hdlr")
   TRC_MSG(AUD_GET_AUDIO_PROFILE_REQ, "AUD: aud_get_audio_profile_req")
   TRC_MSG(AUD_GET_AUDIO_PROFILE_REQ_HDLR, "AUD: aud_get_audio_profile_req_hdlr")
   TRC_MSG(AUD_SET_AUDIO_PROFILE_REQ_HDLR, "AUD: aud_set_audio_profile_req_hdlr")

   TRC_MSG(AUD_GET_AUDIO_WB_PARAM_REQ_HDLR, "AUD: aud_get_audio_wb_xxx_req_hdlr(), type=[%d]")
   TRC_MSG(AUD_SET_AUDIO_WB_PARAM_REQ_HDLR, "AUD: aud_set_audio_wb_xxx_req_hdlr(), type=[%d]")

   TRC_MSG(AUD_GET_AUDIO_PARAM_REQ_HDLR, "AUD: aud_get_audio_param_req_hdlr")
   TRC_MSG(AUD_SET_AUDIO_PARAM_REQ_HDLR, "AUD: aud_set_audio_param_req_hdlr")
   TRC_MSG(AUD_STARTUP_READ_NVRAM_DATA, "AUD: aud_startup_read_nvram_data")
   TRC_MSG(AUD_TRC_AUDIO_MUTE_DIGITAL_GAIN, "AUD: aud_audio_mute_digital_gain(), mute=[%d], app=[%d]")
  
   /* CTM */
   TRC_MSG(AUD_CTM_OPEN_REQ_HDLR, "AUD: aud_ctm_open_req_hdlr")
   TRC_MSG(AUD_CTM_CLOSE_REQ_HDLR, "AUD: aud_ctm_close_req_hdlr")
   TRC_MSG(AUD_CTM_CONNECT_REQ_HDLR, "AUD: aud_ctm_connect_req_hdlr")
   TRC_MSG(AUD_CTM_SEND_TEXT_REQ_HDLR, "AUD: aud_ctm_send_text_req_hdlr")
   TRC_MSG(AUD_CTM_EVENT_IND_HDLR, "AUD: aud_ctm_event_ind_hdlr")
   TRC_MSG(CTM_STATE, "CTM State: %d")
   TRC_MSG(CTM_CHECK_VALUE, "CTM Val: %d")
   TRC_MSG(CTM_CHECK_VALUES, "CTM Vals: %d %d %d")
   TRC_MSG(CTM_CHECK_READ_TEXT_STEP_1, "CTM Read Text Step 1: %d %d %d")
   TRC_MSG(CTM_CHECK_READ_TEXT_STEP_2, "CTM Read Text Step 2: %d %d %d")
    
   /* eCall modem */
   TRC_MSG(AUD_ECALL_MONITOR_REQ_HDLR, "[MED][AUD][eCall]: aud_ecall_monitor_req_hdlr")
   TRC_MSG(AUD_ECALL_SET_MSD_REQ_HDLR, "[MED][AUD][eCall]: aud_ecall_set_msd_req_hdlr")
   TRC_MSG(AUD_ECALL_PUSH_REQ_HDLR, "[MED][AUD][eCall]: aud_ecall_push_req_hdlr")
   TRC_MSG(AUD_ECALL_PSAP_PULL_REQ_HDLR, "[MED][AUD][eCall]: aud_ecall_psap_pull_req_hdlr")
   TRC_MSG(AUD_ECALL_EVENT_CALLBACK, "[MED][AUD][eCall]: aud_ecall_event_callback")
   TRC_MSG(AUD_ECALL_CHECK_VALUE, "[MED][AUD][eCall]: value: %d")

   /* Mobile TV */
   TRC_MSG(CMMB_CA_NAGRA_ICC_REGISTER, "[CMMB][NAGRA][ICC] iccRegister(), Status = %d, xRegistrationId=%d, iccEvent = %d")
   TRC_MSG(CMMB_CA_NAGRA_ICC_CANCEL_REGISTER, "[CMMB][NAGRA][ICC] iccCancelRegistration(), Status = %d, xRegistrationId=%d")
   TRC_MSG(CMMB_CA_NAGRA_ICC_T0_EXCHANGE, "[CMMB][NAGRA][ICC] iccT0Exchange(), Status = %d, xSessionId=%d, xCommandLen=%d, tx=%d, *pxReceiveLen=%d")
   TRC_MSG(CMMB_CA_NAGRA_ICC_SMARTCARD_RESET, "[CMMB][NAGRA][ICC] iccSmartcardReset(), Status = %d, xColdReset=%d")
   TRC_MSG(CMMB_CA_NAGRA_ICC_MODE_CHANGE, "[CMMB][NAGRA][ICC] iccModeChange(), xSessionId = %d, xMode=%d")

   //SPCIO                         
   TRC_MSG(SPCIO_EPOF_MSG_HANDLER_INAUDL_NOTIFY_L4C_DONE                            ,"[SPCIO][EPOF]SpcIO_Msg_Handler_inAudL notify L4C done")                   
   TRC_MSG(SPCIO_EPOF_MSG_HANDLER_INAUDL_DROP_SPC_ID_AUDIO_A2M_CCCI                 ,"[SPCIO][EPOF]SpcIO_Msg_Handler_inAudL drop SPC_ID_AUDIO_A2M_CCCI cmd=%x") 
   TRC_MSG(SPCIO_EPOF_MSG_HANDLER_INAUDL_DROP_MESSAGE                               ,"[SPCIO][EPOF]SpcIO_Msg_Handler_inAudL drop message=%x")    

   // CCCI Message
   TRC_MSG(SPCIO_INIT_PERIOD, "notify timestamp: %d us, process begin timestamp: %d us")
   TRC_MSG(SPCIO_STRUCT_SHM_INFO, "SPCIO shm info addr:0x%x, size=%d, shrBufAddr:0x%x gardPattern=0x%x, apFlag=0x%x, mdFlag=0x%x, mdRegion=0x%x[%d]")
   TRC_MSG(SPCIO_A2M_HISR, "SPCIO [%d]A2M HISR bufp addr: %08x, len = %x")
   TRC_MSG(SPCIO_GETDATAFROMAP_INONETIME_1, "length: %d, headerLen: %d")
   TRC_MSG(SPCIO_GETDATAFROMAP_INONETIME_2, "header[0]=%x, header[1]=%x, header[2]=%x")
   TRC_MSG(SPCIO_UNKNOWN_GET_DATA_SOURCE, "SPCIO Get data from unknow sounce %MSPC_MSG_FROM_T")
   TRC_MSG(SPCIO_GET_PARAM_ERROR, "SPCIO Get data from paramRegion with Error %d")
   TRC_MSG(SPCIO_UNKNOW_M2A_COMMAND, "SPCIO mapper get under command: %x")
   TRC_MSG(MEDSPCIO_INVALID_MSG, "INVALID SPCIO MSG ID(%08X), data (%08X) with reserved (%08X)")

	 TRC_MSG(SPCIO_RECEIVE_MSG, "SPCIO rece A2M 0x%08X [(%d)%MSPC_MSG_ID_T][(0x%04X)%MAUD_CCCI_MSG_T], data16 = 0x%04X, data32 = 0x%08X, from=%MSPC_MSG_FROM_T")
	 TRC_MSG(SPCIO_PROCESS_MSG, "SPCIO proc A2M 0x%08X [(%d)%MSPC_MSG_ID_T][(0x%04X)%MAUD_CCCI_MSG_T], data16 = 0x%04X, data32 = 0x%08X, from=%MSPC_MSG_FROM_T")
	 TRC_MSG(SPCIO_FINISH_MSG, "SPCIO done A2M 0x%08X [(%d)%MSPC_MSG_ID_T][(0x%04X)%MAUD_CCCI_MSG_T], data16 = 0x%04X, data32 = 0x%08X, from=%MSPC_MSG_FROM_T")
	
	 TRC_MSG(SPCIO_RECEIVE_MODEM_INTERNAL, "SPCIO rece speeach internal msg 0x%08X [%MSPC_MSG_ID_T], from=%MSPC_MSG_FROM_T")
	 TRC_MSG(SPCIO_PROCESS_MODEM_INTERNAL, "SPCIO proc speeach internal msg 0x%08X [%MSPC_MSG_ID_T], from=%MSPC_MSG_FROM_T")
	 TRC_MSG(SPCIO_FINISH_MODEM_INTERNAL, "SPCIO done speeach internal msg 0x%08X [%MSPC_MSG_ID_T], from=%MSPC_MSG_FROM_T")
   TRC_MSG(SPCIO_SEND_M2A_MESSAGE, "SPCIO send M2A msg %08X, rev %08X")
   TRC_MSG(SPCIO_SEND_M2A_MESSAGE_FAIL, "SPCIO send M2A message %08X fail, ret %d")
   TRC_MSG(SPCIO_SEND_M2A_MESSAGE_FAIL_END, "SPCIO send M2A message %08X fail with retry three times")
   TRC_MSG(SPCIO_SEND_M2A_DATA, "SPCIO send M2A data %08X")
   TRC_MSG(SPCIO_SEND_M2A_DATA_FAIL, "SPCIO send M2A data %08X fail, ret %d")
   TRC_MSG(SPCIO_SEND_M2A_DATA_FAIL_END, "SPCIO send M2A data %08X fail with retry three times")
     
   TRC_MSG(SPCIO_SDIO_DEBUG1, "SPCIO[SDIO] totalIdx(%d)=%d srcLen1=%d srcLen2=%d")
   TRC_MSG(SPCIO_SDIO_WRITE2AP_ENTER,"SPCIO[SDIO] Write2AP enter")
   TRC_MSG(SPCIO_SDIO_WRITE2AP_INFO1,"SPCIO[SDIO] Write2AP r_srcLen1=%d r_srcLen2=%d curIdx=%d")
   TRC_MSG(SPCIO_SDIO_WRITE2AP_INFO2,"SPCIO[SDIO] Write2AP headerLen=%d t1=%d t2=%d length=%d")
   TRC_MSG(SPCIO_SDIO_WRITE2AP_LEAVE,"SPCIO[SDIO] Write2AP leave")   
END_TRACE_MAP(MOD_MED)

#endif /* _MED_TRC_H */

//#endif /* MED_NOT_PRESENT */

