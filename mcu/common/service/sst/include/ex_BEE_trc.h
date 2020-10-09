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

/*****************************************************************************
 *
 * Filename:
 * ---------
 *   ex_handler_trc.h
 *
 * Project:
 * --------
 *   Maui_Software
 *
 * Description:
 * ------------
 *   This file defines exception debugging trace.
 *
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
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

    TRC_MSG(SST_EXC_WATCHDOG_RESET_ENTER, "[EXC][COMMON] Enter Watchdog reset")
    TRC_MSG(SST_EXC_WATCHDOG_RESET_EXIT, "[EXC][COMMON] Exit Watchdog reset")

    TRC_MSG(SST_EXC_WATCHDOG_RESET_EH_ENTER, "[EXC][COMMON]%s Enter Watchdog reset")
    TRC_MSG(SST_EXC_WATCHDOG_RESET_EH_EXIT, "[EXC][COMMON]%s Exit Watchdog reset")
    
    TRC_MSG(SST_EXC_WATCHDOG_DISABLE_ENTER, "[EXC][COMMON] Enter Watchdog disable")
    TRC_MSG(SST_EXC_WATCHDOG_DISABLE_EXIT, "[EXC][COMMON] Exit Watchdog disable")
 
    TRC_MSG(SST_EXC_FLUSH_LOGGING_PORT_EXIT, "[EXC][COMMON] Exit dhl_flush_logging_port_for_exception()")
    TRC_MSG(SST_EXC_NE_FLUSH_LOGGING_PORT_EXIT, "[EXC][COMMON][Nested] Exit dhl_flush_logging_port_for_exception()")

    TRC_MSG(SST_EXC_CCCI_HANDSHAKING_ENTER, "[EXC][COMMON] Enter ccci_exception_handshake()")
    TRC_MSG(SST_EXC_CCCI_HANDSHAKING_EXIT, "[EXC][COMMON] Exit ccci_exception_handshake()")

    TRC_MSG(SST_EXC_RESET_HARDWARE_ENTER, "[EXC][COMMON] Enter ex_reset_hw()")
    TRC_MSG(SST_EXC_RESET_HARDWARE_EXIT, "[EXC][COMMON] Exit ex_reset_hw()")
    
    TRC_MSG(SST_EXC_TL1_FORCESTALL_ENTER, "[EXC][COMMON] Enter TL1_ForceStall()")
    TRC_MSG(SST_EXC_TL1_FORCESTALL_EXIT, "[EXC][COMMON] Exit TL1_ForceStall()")

    TRC_MSG(SST_EXC_L1D_PAUSEDSP_ENTER, "[EXC][COMMON] Enter L1D_PauseDSP()")
    TRC_MSG(SST_EXC_L1D_PAUSEDSP_EXIT, "[EXC][COMMON] Exit L1D_PauseDSP()")

    TRC_MSG(SST_EXC_L1AUDIO_RESETDEVICE_ENTER, "[EXC][COMMON] Enter L1Audio_ResetDevice()")
    TRC_MSG(SST_EXC_L1AUDIO_RESETDEVICE_EXIT, "[EXC][COMMON] Exit L1Audio_ResetDevice()")
    
    TRC_MSG(SST_EXC_DUMP_SLAVE_LOG_ENTER, "[EXC][COMMON] Enter dhl_cc_exception_dump_slave_log()")
    TRC_MSG(SST_EXC_DUMP_SLAVE_LOG_EXIT, "[EXC][COMMON] Exit dhl_cc_exception_dump_slave_log()")
    TRC_MSG(SST_EXC_NE_DUMP_SLAVE_LOG_ENTER, "[EXC][COMMON][Nested] Enter dhl_cc_exception_dump_slave_log()")
    TRC_MSG(SST_EXC_NE_DUMP_SLAVE_LOG_EXIT, "[EXC][COMMON][Nested] Exit dhl_cc_exception_dump_slave_log()")

    TRC_MSG(SST_EXC_HS_ENTER, "[EXC][COMMON] Enter ex_int_cc_handshake(%d)")
    TRC_MSG(SST_EXC_HS_EXIT, "[EXC][COMMON] Exit ex_int_cc_handshake(%d)")

    TRC_MSG(SST_EXC_OUTPUT_CADEFA_ENTER, "[EXC][COMMON] Enter ex_cadefa()")
    TRC_MSG(SST_EXC_OUTPUT_CADEFA_EXIT, "[EXC][COMMON] Exit ex_cadefa()")
    
    TRC_MSG(SST_EXC_OUTPUT_USIP_CADEFA_ENTER, "[EXC][COMMON] Enter ex_usip_cadefa()")
    TRC_MSG(SST_EXC_OUTPUT_USIP_CADEFA_EXIT, "[EXC][COMMON] Exit ex_usip_cadefa()")
    
    TRC_MSG(SST_EXC_OUTPUT_MD32_CADEFA_ENTER, "[EXC][COMMON] Enter ex_md32_cadefa()")
    TRC_MSG(SST_EXC_OUTPUT_MD32_CADEFA_EXIT, "[EXC][COMMON] Exit ex_md32_cadefa()")
    
    TRC_MSG(SST_EXC_OUTPUT_SCQ_CADEFA_ENTER, "[EXC][COMMON] Enter ex_scq_cadefa()")
    TRC_MSG(SST_EXC_OUTPUT_SCQ_CADEFA_EXIT, "[EXC][COMMON] Exit ex_scq_cadefa()")

    TRC_MSG(SST_EXC_INVOKE_SST_ENGINE_ENTER, "[EXC][COMMON] Enter INT_InvokeSSTEngine()")
    TRC_MSG(SST_EXC_INVOKE_SST_ENGINE_EXIT, "[EXC][COMMON] Exit INT_InvokeSSTEngine()")
    
    TRC_MSG(SST_EXC_EMM_WRITE_EX_RECORD_ENTER, "[EXC][COMMON] Enter EMM_Write_ExceptRecord()")
    TRC_MSG(SST_EXC_EMM_WRITE_EX_RECORD_EXIT, "[EXC][COMMON] Exit EMM_Write_ExceptRecord()")
    
    TRC_MSG(SST_EXC_SWLA_PRINT_LOWRAM_ENTER, "[EXC][COMMON] Enter SLA_Print_low_RAM_SWLA()")
    TRC_MSG(SST_EXC_SWLA_PRINT_LOWRAM_EXIT, "[EXC][COMMON] Exit SLA_Print_low_RAM_SWLA()")

    TRC_MSG(SST_EXC_OUTPUT_EXCEPTION_RECORD_ENTER, "[EXC][COMMON] Enter ex_output_log()")
    TRC_MSG(SST_EXC_OUTPUT_EXCEPTION_RECORD_EXIT, "[EXC][COMMON] Exit ex_output_log()")
    
    TRC_MSG(SST_EXC_OUTPUT_USIP_EXCEPTION_RECORD_ENTER, "[EXC][COMMON] Enter ex_output_usip_log()")
    TRC_MSG(SST_EXC_OUTPUT_USIP_HS_FAILED, "usip HS failed [%d]")
    TRC_MSG(SST_EXC_OUTPUT_USIP_EXCEPTION_RECORD_EXIT, "[EXC][COMMON] Exit ex_output_usip_log()")
    
    TRC_MSG(SST_EXC_OUTPUT_MD32_EXCEPTION_RECORD_ENTER, "[EXC][COMMON] Enter ex_output_md32_log()")
    TRC_MSG(SST_EXC_OUTPUT_MD32_HS_FAILED, "md32 HS failed [%d]")
    TRC_MSG(SST_EXC_OUTPUT_MD32_EXCEPTION_RECORD_EXIT, "[EXC][COMMON] Exit ex_output_md32_log()")

    TRC_MSG(SST_EXC_PASS_CCCI_EXCINFO_ENTER, "[EXC][COMMON] Enter ccci_exception_info_passed()")
    TRC_MSG(SST_EXC_PASS_CCCI_EXCINFO_EXIT, "[EXC][COMMON] Exit ccci_exception_info_passed()")

    TRC_MSG(SST_EXC_FLC_DEBUG_INFO_ENTER, "[EXC][COMMON] Enter flc2_debug_assert_callback()")
    TRC_MSG(SST_EXC_FLC_DEBUG_INFO_EXIT, "[EXC][COMMON] Exit flc2_debug_assert_callback()")

    TRC_MSG(SST_EXC_RMPU_DEBUG_INFO_ENTER, "[EXC][COMMON] Enter emimpu_dump_status()")
    TRC_MSG(SST_EXC_RMPU_DEBUG_INFO_EXIT, "[EXC][COMMON] Exit emimpu_dump_status()")

    TRC_MSG(SST_EXC_INIT_FDD_TABLE_ENTER, "[EXC][COMMON] Enter Initialize_FDD_tables()")
    TRC_MSG(SST_EXC_INIT_FDD_TABLE_EXIT, "[EXC][COMMON] Exit Initialize_FDD_tables()")

    TRC_MSG(SST_EXC_SAVE_EXCEPTION_RECORD_ENTER, "[EXC][COMMON] Enter ex_save_log()")
    TRC_MSG(SST_EXC_SAVE_EXCEPTION_RECORD_EXIT, "[EXC][COMMON] Exit ex_save_log()")

    TRC_MSG(SST_EXC_FS_UNLOCK_ALL_ENTER, "[EXC][COMMON] Enter FS_UnlockAll()")
    TRC_MSG(SST_EXC_FS_UNLOCK_ALL_EXIT, "[EXC][COMMON] Exit FS_UnlockAll()")

    TRC_MSG(SST_EXC_FS_SHUTDOWN_ENTER, "[EXC][COMMON] Enter FS_ShutDown()")
    TRC_MSG(SST_EXC_FS_SHUTDOWN_EXIT, "[EXC][COMMON] Exit FS_ShutDown()")

    TRC_MSG(SST_EXC_NVRAM_WRITE_EXC_ENTER, "[EXC][COMMON] Enter nvram_write_exception(%d, 0x%x, 0x%x)")
    TRC_MSG(SST_EXC_NVRAM_WRITE_EXC_EXIT, "[EXC][COMMON] Exit nvram_write_exception()")
    
    TRC_MSG(SST_EXC_EMM_WRITE_ENTER, "[EXC][COMMON] Enter EMM_Write_ExceptRecord()")
    TRC_MSG(SST_EXC_EMM_WRITE_EXIT, "[EXC][COMMON] Exit EMM_Write_ExceptRecord()")
    
    TRC_MSG(SST_EXC_RESET_EXCSP_ENTER, "[EXC][COMMON] Enter INT_ExceptionResetExcSP()")
    TRC_MSG(SST_EXC_RESET_EXCSP_EXIT, "[EXC][COMMON] Exit INT_ExceptionResetExcSP()")
    
    TRC_MSG(SST_EXC_CLEAN_RES_PROT_ENTER, "[EXC][COMMON] Enter ex_clean_res_prot()")
    TRC_MSG(SST_EXC_CLEAN_RES_PROT_EXIT, "[EXC][COMMON] Exit ex_clean_res_prot()")
    
    TRC_MSG(SST_EXC_UNGUARD_STACKSPACE_ENTER, "[EXC][COMMON] Enter kal_unguard_stack_space()")
    TRC_MSG(SST_EXC_UNGUARD_STACKSPACE_EXIT, "[EXC][COMMON] Exit kal_unguard_stack_space()")

    TRC_MSG(SST_EXC_NESTED_PROCESS_ENTER, "[EXC][COMMON] Enter ex_nested_process()")
    TRC_MSG(SST_EXC_NESTED_PROCESS_EXIT, "[EXC][COMMON] Exit ex_nested_process()")
    
    TRC_MSG(SST_EXC_INIT_DUMP_ENTER, "[EXC][COMMON] Enter ex_init_dump()")
    TRC_MSG(SST_EXC_INIT_DUMP_EXIT, "[EXC][COMMON] Exit ex_init_dump()")

    TRC_MSG(SST_EXC_REMOVE_SENSITIVE_ENTER, "[EXC][COMMON] Enter ex_remove_sensitive_for_dump()")
    TRC_MSG(SST_EXC_REMOVE_SENSITIVE_EXIT, "[EXC][COMMON] Exit ex_remove_sensitive_for_dump()")

    TRC_MSG(SST_EXC_INIT_BBREG_DUMP_ENTER, "[EXC][COMMON] Enter ex_init_bbreg_dump()")
    TRC_MSG(SST_EXC_INIT_BBREG_DUMP_EXIT, "[EXC][COMMON] Exit ex_init_bbreg_dump()")
    
    TRC_MSG(SST_EXC_INIT_REAPPEAR_LOG_ENTER, "[EXC][COMMON] Enter ex_reappear_log()")
    TRC_MSG(SST_EXC_INIT_REAPPEAR_LOG_EXIT, "[EXC][COMMON] Exit ex_reappear_log()")

    TRC_MSG(SST_EXC_EX_REBOOT4MP_ENTER, "[EXC][COMMON] Enter ex_reboot4mp()")
    TRC_MSG(SST_EXC_EX_REBOOT4MP_EXIT, "[EXC][COMMON] Exit ex_reboot4mp()")

    TRC_MSG(SST_EXC_SYSMEM_TO_BE_DUMPED, "[EXC][COMMON] sys_mem_xxx.bin to be dumped [%d]: (0x%x, 0x%x)")
    TRC_MSG(SST_EXC_SYSMEM_TO_BE_DUMPED_FOR_MINI, "[EXC][COMMON] sys_mem_xxx.bin to be dumped for mini [%d]: (0x%x, 0x%x)")
    TRC_MSG(SST_EXC_SLAVE_SYSMEM_TO_BE_DUMPED, "[EXC][COMMON] slave_sys_mem_0x%08x.bin to be dumped [%d]: (0x%x, 0x%x)")

    TRC_MSG(SST_EXC_DHLLOGGING_ENTER, "[EXC][COMMON] Enter dhl_call_exception_custom_logging at %dus")
    TRC_MSG(SST_EXC_DHLLOGGING_EXIT, "[EXC][COMMON] Exit dhl_call_exception_custom_logging at %dus")
    TRC_MSG(SST_EXC_HANDOVER2TST, "[EXC][COMMON] Handover to TST exception handler")
    
    TRC_MSG(SST_EXC_READY2REBOOT, "[EXC][COMMON] Ready to silent reboot")
    
    TRC_MSG(SST_EXC_REMOVE_SENSITIVE_USER_CALLBACK_ENTER, "[EXC][COMMON] Enter sensitive-removing callback, Index:%d, Taskname:%s")
    TRC_MSG(SST_EXC_REMOVE_SENSITIVE_USER_CALLBACK_EXIT, "[EXC][COMMON] Exit sensitive-removing callback, Index:%d, Taskname:%s, Elapsedtime:%dus")

    TRC_MSG(SST_EXC_REMOVE_SENSITIVE_CTRLBUFF_ENTER, "[EXC][COMMON] Enter sensitive-removing: kal_clear_all_sensitive_buff_data()") 
    TRC_MSG(SST_EXC_REMOVE_SENSITIVE_CTRLBUFF_EXIT, "[EXC][COMMON] Exit sensitive-removing: kal_clear_all_sensitive_buff_data(), Elapsedtime:%dus")

    TRC_MSG(SST_EXC_REMOVE_SENSITIVE_QBM_ENTER, "[EXC][COMMON] Enter sensitive-removing: qbm_clear_all_sensitive_data()") 
    TRC_MSG(SST_EXC_REMOVE_SENSITIVE_QBM_EXIT, "[EXC][COMMON] Exit sensitive-removing: qbm_clear_all_sensitive_data(), Elapsedtime:%dus")

    TRC_MSG(SST_EXC_REMOVE_SENSITIVE_FL2_ENTER, "[EXC][COMMON] Enter sensitive-removing: fl2_ent_mask_peer_buff_for_miniDump()") 
    TRC_MSG(SST_EXC_REMOVE_SENSITIVE_FL2_EXIT, "[EXC][COMMON] Exit sensitive-removing: fl2_ent_mask_peer_buff_for_miniDump(), Elapsedtime:%dus")

    TRC_MSG(SST_EXC_REMOVE_SENSITIVE_STACK_ENTER, "[EXC][COMMON] Enter sensitive-removing stack, Index:%d")
    TRC_MSG(SST_EXC_REMOVE_SENSITIVE_STACK_EXIT, "[EXC][COMMON] Exit sensitive-removing stack, Index:%d")

    TRC_MSG(SST_EXC_REMOVE_SENSITIVE_DETECT_ERROR, "[EXC][COMMON] sensitive-removing, detect errror happened! Exception Count:%d")

    TRC_MSG(SST_EXC_REMOVE_SENSITIVE_DEBUG_STACK_INFO, "[EXC][COMMON] Exit sensitive-removing stack,sp:0x%x, start:0x%x, size:0x%x")

    TRC_MSG(SST_EXC_SWITCH_WDT_PHASE2, "[EXC][COMMON] Do ex_switchWDT_phase2()")
    
    TRC_MSG(SST_EXC_BBREG_DUMP_COUNT, "[EXC][COMMON] BB register dump count: %d")
    TRC_MSG(SST_EXC_BBREG_DUMP_OWNER, "[EXC][COMMON] BB register dump owner: %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c")
    TRC_MSG(SST_EXC_BBREG_DUMP_CALLBACK_FUNC_ENTER, "[EXC][COMMON] Enter BB register dump callback, address: 0x%x")
    TRC_MSG(SST_EXC_BBREG_DUMP_CALLBACK_FUNC_EXIT, "[EXC][COMMON] Exit BB register dump callback, address: 0x%x")
    TRC_MSG(SST_EXC_BBREG_DUMP_SKIP, "[EXC][COMMON] Skip this dump")    
    TRC_MSG(SST_EXC_BBREG_DUMP_SKIP2, "[EXC][COMMON] Callback (0x%x) caused nested exception -> skip this dump")
    TRC_MSG(SST_EXC_BBREG_DUMP_TO_BE_DUMPED, "[EXC][COMMON] bb_mem_xxx.bin to be dumped [%d]: (0x%x, 0x%x, %d)")
    TRC_MSG(SST_EXC_BBREG_DUMP_LARGE, "[EXC][COMMON] bb_mem size is larger than %d KB: (base, len)=(0x%x, 0x%x)")
    TRC_MSG(SST_EXC_BBREG_DUMP_OVERLAP_SYS, "[EXC][COMMON] bb_mem (0x%x, 0x%x) overlap sys_mem (0x%x, 0x%x)")
    TRC_MSG(SST_EXC_BBREG_DUMP_TOP_NUM, "[EXC][COMMON] top%d bb_mem (0x%x, 0x%x)")
    
    TRC_MSG(SST_EXC_L1CORE_BBREG_DUMP_OWNER, "[EXC][COMMON][L1CORE] BB register dump owner: %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c")   
    TRC_MSG(SST_EXC_L1CORE_BBREG_DUMP_TO_BE_DUMPED, "[EXC][COMMON][L1CORE] bb_mem_xxx.bin to be dumped [%d]: (0x%x, 0x%x, %d)")
    
    TRC_MSG(SST_EXC_HANDLE_DUMP_REGION_ENTER, "[EXC][COMMON] Enter SST_HandleDumpRegion(addr=0x%08x, len=0x%x)")
    TRC_MSG(SST_EXC_HANDLE_DUMP_REGION_EXIT, "[EXC][COMMON] Exit SST_HandleDumpRegion(addr=0x%08x, len=0x%x, operation result=%s)")
    TRC_MSG(SST_EXC_HANDLE_DUMP_REGION_OP_CACHED, "[EXC][COMMON] SST_HandleDumpRegion: Do cache operation")
    TRC_MSG(SST_EXC_HANDLE_DUMP_REGION_OP_TIMEOUT, "[EXC][COMMON]Timeout(> %dus): Start: %dus, End= %dus, Duration = %dus")
    
    TRC_MSG(SST_EXC_HANDLE_EMIMPU_OUTPUT_ADDR, "[EXC][EMIMPU] MasterID:%x(%s)  ViolationAddr:%x(%s)")
    TRC_MSG(SST_EXC_HANDLE_EMIMPU_OUTPUT_REGION, "[EXC][EMIMPU] Region:%d  Domain:%d   Out-of-Range:%d")

    TRC_MSG(SST_EXC_BBREG_OUTPUT, "[EXC][COMMON][BBREG_OUTPUT] address=0x%08x  value=0%08x, sub_idx=%d, fill_cnt=%d")
    TRC_MSG(SST_EXC_QUERY_BBREG_ENTER, "[EXC][COMMON]ex_query_bbreg_info(buf_ptr=0%08x, start_idx=%d, num=%d)")
    TRC_MSG(SST_EXC_QUERY_BBREG_EXIT, "[EXC][COMMON]ex_query_bbreg_info() return fill_cnt=%d")
    TRC_MSG(SST_EXC_QUERY_BBREG_SKIP, "[EXC][COMMON] skip_cnt(%d)+traverser->num(%d)+prv_fill_cnt(%d) <= start_idx(%d) => skip_cnt=%d")
    TRC_MSG(SST_EXC_COPY_BBREG_START_IDX, "[EXC][COMMON] COPY_BBREG start idx=%d")
    TRC_MSG(SST_EXC_QUERY_BBREG_UPDATE_SKIP, "[EXC][COMMON] prv_fill_cnt: %d, this traverser->num: %d")

    TRC_MSG(SST_EXC_AFOUND_ENTER, "[EXC][COMMON] Enter ex_output_afound()")
    TRC_MSG(SST_EXC_AFOUND_EXIT, "[EXC][COMMON] Exit ex_output_afound()")

    TRC_MSG(SST_EXC_SEC_CHANNEL_DEINIT_ENTER, "[EXC][COMMON] Enter SST_SSF_Deinit()")
    TRC_MSG(SST_EXC_SEC_CHANNEL_DEINIT_EXIT, "[EXC][COMMON] Exit SST_SSF_Deinit()")
    TRC_MSG(SST_EXC_MPU_DUMP_PRINT_ENTER, "[EXC][COMMON] Enter ex_print_mpu_setting()")
    TRC_MSG(SST_EXC_MPU_DUMP_PRINT_EXIT, "[EXC][COMMON] Exit ex_print_mpu_setting()")

    TRC_MSG(SST_EXC_MPU_DUMP_MSG, "[EXC][COMMON] Start to print runtime MPU setting(before entering exception).")
    TRC_MSG(SST_EXC_MPU_DUMP_SEGMENT, "[EXC][COMMON][MPU] Segment %3d :RI=0x%x, WI=0x%x, XI=0x%x, CCA=0x%x.")
    TRC_MSG(SST_EXC_MPU_DUMP_REGION,  "[EXC][COMMON][MPU] Region  %3d :baseAddr=0x%08x, SubRegionSize=0x%08x, Enable=0x%x, SubRegionCount=0x%x, RI=0x%x, WI=0x%x, XI=0x%x, CCA=0x%x.")

    TRC_MSG(SST_EXC_MPU_DUMP_MSG_DIFF, "[EXC][COMMON] Start to print difference of MPU setting between entering and leaving exception flow.")
    TRC_MSG(SST_EXC_MPU_DUMP_SEGMENT_DIFF, "[EXC][COMMON][MPU][Diff] Segment %3d :RI=0x%x, WI=0x%x, XI=0x%x, CCA=0x%x.")
    TRC_MSG(SST_EXC_MPU_DUMP_REGION_DIFF,  "[EXC][COMMON][MPU][Diff] Region  %3d :baseAddr=0x%08x, SubRegionSize=0x%08x, Enable=0x%x, SubRegionCount=0x%x, RI=0x%x, WI=0x%x, XI=0x%x, CCA=0x%x.")
    
   
   
