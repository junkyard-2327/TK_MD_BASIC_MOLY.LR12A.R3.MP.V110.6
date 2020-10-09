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
 *   ex_trc.h
 *
 * Project:
 * --------
 *   Maui_Software
 *
 * Description:
 * ------------
 *   This file contains definitions for trace on target.
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
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/
  
#ifndef _EX_TRC_H
#define _EX_TRC_H

#ifndef GEN_FOR_PC
#include "kal_public_defs.h"
#endif /* GEN_FOR_PC */

#include "kal_trace.h"

#if !defined(GEN_FOR_PC)
#if defined(__TST_MODULE__) || defined(__CUSTOM_RELEASE__)
    #include "ex_trc_gen.h"
#endif /* TST Trace Defintion */
#endif
BEGIN_TRACE_MAP(MOD_EX_LOG)

    /* TRACE_FUNC trace class */   
    
    TRC_MSG(EX_LOG_SPLIT_ENV_INFO, "========================= Basic Environment Info ===========================")

    /* environment */
    TRC_MSG(EX_LOG_ENVINFO_FACTORY_BOOT, "boot mode: factory mode")
    TRC_MSG(EX_LOG_ENVINFO_NORMAL_BOOT, "boot mode: normal mode")
    TRC_MSG(EX_LOG_ENVINFO_USBMS_BOOT, "boot mode: USBMS mode")
    TRC_MSG(EX_LOG_ENVINFO_UNKNOWN_BOOT_MODE, "boot mode: unknown mode")
    TRC_MSG(EX_LOG_ENVINFO_EARLY_STAGE, "- under init stage(early stage)")
    TRC_MSG(EX_LOG_ENVINFO_UNDER_SCHEDULING, "- under scheduling")
    
    TRC_MSG(EX_LOG_ENVINFO_TOTAL_CORE_NUM, "total core num: %u")

    /* software version */
    TRC_MSG(EX_LOG_SW_VER, "software version: %s")
    TRC_MSG(EX_LOG_SW_PROJECT, "software project: %s")
    TRC_MSG(EX_LOG_SW_BUILDTIME, "build time: %s")

    
    TRC_MSG(EX_LOG_SPLIT_BASIC_OFFENDING_INFO, "========================= Basic offending VPE info ===========================")
    /* offending info */
    TRC_MSG(EX_LOG_OFFENDING_INFO, "Offending VPE: %u, Offending TC: %u")
    /* exception type */
    TRC_MSG(EX_LOG_TYPE_EX_TYPE, "Exception type: %Mexception_type")
    TRC_MSG(EX_LOG_BASIC_TIMESTAMP, "exception timestamp: USCNT = 0x%08X, GLB_TS = 0x%08X, frameno = %u")
    TRC_MSG(EX_LOG_BASIC_EXECUTIONUNIT, "execution unit: %c%c%c%c%c%c%c%c")
    TRC_MSG(EX_LOG_BASIC_STACIPOINTER, "stack pointer: 0x%08X")
    TRC_MSG(EX_LOG_BASIC_LR, "lr: 0x%08X")
    TRC_MSG(EX_LOG_BASIC_PC, "offending pc: 0x%08X")
    TRC_MSG(EX_LOG_BASIC_TC_STATUS, "task status: 0x%08X")
    TRC_MSG(EX_LOG_BASIC_PROCESSING_LISR, "processing_lisr: 0x%08X")

    TRC_MSG(EX_LOG_SPLIT_SYS_ENV_INFO,          "========================= System Environment Info ===========================")

    TRC_MSG(EX_LOG_ENVINFO_INTERRUPT_MASK, "interrupt mask: 0x%08X 0x%08X")
    TRC_MSG(EX_LOG_ENVINFO_ELM_STATUS, "ELM status: %d")

    /* diagnosis */
    TRC_MSG(EX_LOG_DIAGINFO_HEALTH_CHECK_TITLE, "[System Healthy Check]")
    TRC_MSG(EX_LOG_DIAGINFO_DIAGNOSIS_HEALTHY, "diagnosis: healthy")
    TRC_MSG(EX_LOG_DIAGINFO_DIAGNOSIS_INTSRAMCORRUPT, "diagnosis: ISPRAM corrupted")
    TRC_MSG(EX_LOG_DIAGINFO_DIAGNOSIS_SHAREDINTSRAMCORRUPT, "diagnosis: shared internal SRAM corrupted")
    TRC_MSG(EX_LOG_DIAGINFO_DIAGNOSIS_L2SRAMCCORRUPT, "diagnosis: cached L2SRAM corrupted")
    TRC_MSG(EX_LOG_DIAGINFO_DIAGNOSIS_L2SRAMNCCORRUPT, "diagnosis: non-cached L2SRAM corrupted")
    TRC_MSG(EX_LOG_DIAGINFO_DIAGNOSIS_SYSSTACKCORRUPT, "diagnosis: system stack corrupted")
    TRC_MSG(EX_LOG_DIAGINFO_DIAGNOSIS_TASKSTACKCORRUPT, "diagnosis: task stack corrupted")
    TRC_MSG(EX_LOG_DIAGINFO_DIAGNOSIS_HISRSTACKCORRUPT, "diagnosis: HISR stack corrupted")
    TRC_MSG(EX_LOG_DIAGINFO_DIAGNOSIS_VECTORTABLECORRUPT, "diagnosis: Interrupt Vector corrupted")
    TRC_MSG(EX_LOG_DIAGINFO_DIAGNOSIS_LOCKWAITEDTOOLONG, "diagnosis: some lock has been waited too long")
    TRC_MSG(EX_LOG_DIAGINFO_DIAGNOSIS_CACHECORRUPT, "diagnosis: instruction cache corruption")
    TRC_MSG(EX_LOG_DIAGINFO_DIAGNOSIS_CACHECORRUPT_2, "Please note that it might be cross core access if corruption address is in ispram")
    TRC_MSG(EX_LOG_DIAGINFO_DIAGNOSIS_DEADLOCK, "diagnosis: System deadlocked")
    TRC_MSG(EX_LOG_DIAGINFO_DIAGNOSIS_HELDTOOLONG, "diagnosis: some lock has been held too long")
    TRC_MSG(EX_LOG_DIAGINFO_DIAGNOSIS_OWNER, "owner: %c%c%c%c%c%c%c%c")

    TRC_MSG(EX_LOG_DIAGINFO_DEADLOCK_OUTPUT_OWNER_SL, "    %dus: spinlock(0x%x) %s obtained by %s")
    TRC_MSG(EX_LOG_DIAGINFO_DEADLOCK_OUTPUT_OWNER_ITC, "    %dus: HW ITC(0x%x) %Mkal_itc_lock_id obtained by %s")
    TRC_MSG(EX_LOG_DIAGINFO_DEADLOCK_OUTPUT_LOCK_SL, "    %dus: %s started waiting spinlock(0x%x) %s")
    TRC_MSG(EX_LOG_DIAGINFO_DEADLOCK_OUTPUT_LOCK_ITC, "    %dus: %s started waiting HW ITC(0x%x) %Mkal_itc_lock_id")
    TRC_MSG(EX_LOG_DIAGINFO_HELDLOCK_OUTPUT_LOCK_SL, "    %s has been holding spinlock(0x%x) %s for %dus when exception occured")
    TRC_MSG(EX_LOG_DIAGINFO_HELDLOCK_OUTPUT_LOCK_ITC, "    %s has been holding HW ITC(0x%x) %Mkal_itc_lock_id for %dus when exception occured")

    TRC_MSG(EX_LOG_DIAGINFO_WAITLOCK_OUTPUT_LOCK_SL, "    %s has been waiting spinlock(0x%x) %s for %dus when exception occured")
    TRC_MSG(EX_LOG_DIAGINFO_WAITLOCK_OUTPUT_LOCK_ITC, "    %s has been waiting HW ITC(0x%x) %Mkal_itc_lock_id for %dus when exception occured")
    
    TRC_MSG(EX_LOG_SPLIT_OFFENDING_VPE_ANALYSIS, "========================= Offending VPE Analysis ===========================")
    /* assert fail */
    TRC_MSG(EX_LOG_ASSERT_FILENAME, "filename: %s")
    TRC_MSG(EX_LOG_ASSERT_FULLPATH, "path: %s")
    TRC_MSG(EX_LOG_ASSERT_LINE, "line: %u")
    TRC_MSG(EX_LOG_ASSERT_EXT1, "ext1: 0x%08X")
    TRC_MSG(EX_LOG_ASSERT_EXT2, "ext2: 0x%08X")
    TRC_MSG(EX_LOG_ASSERT_EXT3, "ext3: 0x%08X")
    TRC_MSG(EX_LOG_ASSERT_ADDR, "offending address: 0x%08X")
    TRC_MSG(EX_LOG_ASSERT_MODID, "offending module id: %Mmodule_type")
    TRC_MSG(EX_LOG_ASSERT_DUMP_TITLE, "dump:")
    TRC_MSG(EX_LOG_ASSERT_DUMP, "    0x%02X%02X%02X%08X")

    /* fatal error */
    TRC_MSG(EX_LOG_FATALERR_MSG, "[%d] fatal error (0x%x): %Mkal_error_str - %c%c%c%c%c%c%c%c")
    TRC_MSG(EX_LOG_FATALERR_ERROR_CODE1, "fatal error code 1: 0x%08X")
    TRC_MSG(EX_LOG_FATALERR_ERROR_CODE2, "fatal error code 2: 0x%08X")
    TRC_MSG(EX_LOG_FATALERR_ERROR_CODE3, "fatal error code 3: 0x%08X")
    /* cc exception */
    TRC_MSG(EX_LOG_CC_EX_MSG, "[%d] Cross Triggered Exception by %s : ect status(0x%08X)")


    /* control buffer */
    TRC_MSG(EX_LOG_CTRLBUF_SIZE, "ctrl buff size = %u")
    TRC_MSG(EX_LOG_CTRLBUF_NUM, "# of ctrl buff entries = %u")
    TRC_MSG(EX_LOG_CTRLBUF_TOP, "top occupier")
    TRC_MSG(EX_LOG_CTRLBUF_PREV, "previous buffer pointer")
    TRC_MSG(EX_LOG_CTRLBUF_COMMON_RTOS_HEADER1, "    RTOS header 1 = 0x%08X")
    TRC_MSG(EX_LOG_CTRLBUF_COMMON_RTOS_HEADER2, "    RTOS header 2 = 0x%08X")
    TRC_MSG(EX_LOG_CTRLBUF_COMMON_KAL_HEADER1, "    KAL header 1 = 0x%08X")
    TRC_MSG(EX_LOG_CTRLBUF_COMMON_KAL_HEADER2, "    KAL header 2 = 0x%08X")
    TRC_MSG(EX_LOG_CTRLBUF_COMMON_KAL_HEADER3, "    KAL header 3 = 0x%08X")
    TRC_MSG(EX_LOG_CTRLBUF_COMMON_BUFF_POOLID, "    buffer pool id = 0x%08X")
    TRC_MSG(EX_LOG_CTRLBUF_COMMON_KAL_FOOTER1, "    kal footer 1 = 0x%08X")
    TRC_MSG(EX_LOG_CTRLBUF_COMMON_KAL_FOOTER2, "    kal footer 2 = 0x%08X")
    TRC_MSG(EX_LOG_CTRLBUF_COMMON_FILENAME, "    source = %s") /*can't exceed over 128 bytes) */
    TRC_MSG(EX_LOG_CTRLBUF_COMMON_LR, "    Caller Address = 0x%08X")
    TRC_MSG(EX_LOG_CTRLBUF_COMMON_LINE, "    line = %u")
    TRC_MSG(EX_LOG_CTRLBUF_HISTORY_OWNER, "    owner = %c%c%c%c%c%c%c%c")
    TRC_MSG(EX_LOG_CTRLBUF_HISTORY_FILENAME, "    filename = %s") /*can't exceed over 128 bytes) */
    TRC_MSG(EX_LOG_CTRLBUF_HISTORY_LINE, "    line = %u")
    TRC_MSG(EX_LOG_CTRLBUF_HISTORY_LR, "    Caller Address = 0x%08X")
    TRC_MSG(EX_LOG_CTRLBUF_HISTORY_COUNT, "    count = %u")
    TRC_MSG(EX_LOG_CTRLBUF_SECOND, "second occupier")
    TRC_MSG(EX_LOG_CTRLBUF_CURR, "current buffer pointer")
    TRC_MSG(EX_LOG_CTRLBUF_THIRD, "third occupier")
    TRC_MSG(EX_LOG_CTRLBUF_NEXT, "next buffer pointer")

    /* event scheduler buffer */
    TRC_MSG(EX_LOG_ESBUF_SIZE, "es buff size = %u")
    TRC_MSG(EX_LOG_ESBUF_NUM, "# of es buff entries = %u")
    TRC_MSG(EX_LOG_ESBUF_HISTORY_TIMERNAME, "    event scheduler name = %c%c%c%c%c%c%c%c")
    TRC_MSG(EX_LOG_ESBUF_HISTORY_MODULEID, "    dest module id = %Mmodule_type")
    TRC_MSG(EX_LOG_ESBUF_HISTORY_HANDLEFUNC, "    handler function address = 0x%08X")
    TRC_MSG(EX_LOG_ESBUF_HISTORY_COUNT, "    count = %u")
    TRC_MSG(EX_LOG_ESBUF_TOP, "top occupier")
    TRC_MSG(EX_LOG_ESBUF_SECOND, "second occupier")
    TRC_MSG(EX_LOG_ESBUF_THIRD, "third occupier")

    /* task info */
    TRC_MSG(EX_LOG_TASK_INFO_NAME, "TaskName = %c%c%c%c%c%c%c%c")
    TRC_MSG(EX_LOG_TASK_INFO_STACK_GP, "TaskStackGuardPattern = %c%c%c%c%c%c%c%c")
    TRC_MSG(EX_LOG_TASK_INFO_STATUS, "task current status = 0x%08X")
    TRC_MSG(EX_LOG_TASK_INFO_EXTQ, "task external queue")
    TRC_MSG(EX_LOG_TASK_INFO_Q_SRC_MOD_ID, "    src mod id = 0x%08X")
    TRC_MSG(EX_LOG_TASK_INFO_Q_QCOUNT, "    # of identical msg = 0x%08X")
    TRC_MSG(EX_LOG_TASK_INFO_Q_MSG_ID, "    msg id = 0x%08X")
    TRC_MSG(EX_LOG_TASK_INFO_Q_CUR_MSG_NO, "    # of pending msg = 0x%08X")
    TRC_MSG(EX_LOG_TASK_INFO_Q_CONFIG_ENTRY, "    # of queue entries = 0x%08X")
    TRC_MSG(EX_LOG_TASK_INFO_INTQ, "task internal queue")

    TRC_MSG(EX_LOG_ENVINFO_EXT_Q_PENDING_CNT, "number of messages in the external queue: %u")
    TRC_MSG(EX_LOG_ENVINFO_EXT_Q_PENDING_TITLE, "messages in the external queue:")
    TRC_MSG(EX_LOG_ENVINFO_EXT_Q_PENDING, "    %Mmsg_type")


    TRC_MSG(EX_LOG_SPLIT_FULL_OFFENDING_INFO,          "========================= Detailed Offending VPE Info ===========================")
    TRC_MSG(EX_LOG_FULL_OFFENDING_INFO_ENTRY_TYPE, "Entry Type = %Mexception_enter_category")
    /* CPU registers */
    TRC_MSG(EX_LOG_CPU_GPR_REG_TITLE,    "[CPU Register Info]")
    TRC_MSG(EX_LOG_CPU_REG_1, "R0 (ZERO) = 0x%08X, R1 (AT) = 0x%08X, R2 (V0) = 0x%08X, R3 (V1) = 0x%08X")
    TRC_MSG(EX_LOG_CPU_REG_2, "R4 (A0)   = 0x%08X, R5 (A1) = 0x%08X, R6 (A2) = 0x%08X, R7 (A3) = 0x%08X")
    TRC_MSG(EX_LOG_CPU_REG_3, "R8 (T0)   = 0x%08X, R9 (T1) = 0x%08X, R10(T2) = 0x%08X, R11(T3) = 0x%08X")
    TRC_MSG(EX_LOG_CPU_REG_4, "R12(T4)   = 0x%08X, R13(T5) = 0x%08X, R14(T6) = 0x%08X, R15(T7) = 0x%08X")
    TRC_MSG(EX_LOG_CPU_REG_5, "R16(S0)   = 0x%08X, R17(S1) = 0x%08X, R18(S2) = 0x%08X, R19(S3) = 0x%08X")
    TRC_MSG(EX_LOG_CPU_REG_6, "R20(S4)   = 0x%08X, R21(S5) = 0x%08X, R22(S6) = 0x%08X, R23(S7) = 0x%08X")
    TRC_MSG(EX_LOG_CPU_REG_7, "R24(T8)   = 0x%08X, R25(T9) = 0x%08X, R26(K0) = 0x%08X, R27(K1) = 0x%08X")
    TRC_MSG(EX_LOG_CPU_REG_8, "R28(GP)   = 0x%08X, R29(SP) = 0x%08X, R30(S8) = 0x%08X, R31(RA) = 0x%08X")
    TRC_MSG(EX_LOG_REG_HILO,  "HI        = 0x%08X, LO      = 0x%08X")
    
    TRC_MSG(EX_LOG_EXCTRL_REG_TITLE,     "[Exception Control Info]")
    TRC_MSG(EX_LOG_REG_EXCTRL,"Cause = 0x%08X, EPC = 0x%08X, ErrorEPC = 0x%08X,(Status = 0x%08X)")
    
    TRC_MSG(EX_LOG_CFG_STATUS_REG_TITLE, "[Configuration and Status Info]")
    TRC_MSG(EX_LOG_REG_CFG1,  "EBase  = 0x%08X, Status  = 0x%08X, IntCtrl  = 0x%08X")
    TRC_MSG(EX_LOG_REG_CFG2,  "Config = 0x%08X, Config2 = 0x%08X, Config5  = 0x%08X, Config7 = 0x%08X")

    TRC_MSG(EX_LOG_TC_REG_TITLE,         "[Thread Context Info]")
    TRC_MSG(EX_LOG_REG_TC1,   "TCStatus  = 0x%08X, TCBind     = 0x%08X, TCRestart  = 0x%08X, TCHalt = 0x%08X")
    TRC_MSG(EX_LOG_REG_TC2,   "TCContext = 0x%08X, TCSchedule = 0x%08X, TCScheFBack= 0x%08X, TCOpt  = 0x%08X")
    TRC_MSG(EX_LOG_REG_TC3,   "SRSConf0  = 0x%08X, SRSCtl     = 0x%08X, SRSMap     = 0x%08X")

    TRC_MSG(EX_LOG_VPE_INFO_TITLE,       "[VPE Management Info]")
    TRC_MSG(EX_LOG_REG_VPE1,  "VPEControl = 0x%08X, VPEConf0    = 0x%08X, VPEConf1 = 0x%08X")
    TRC_MSG(EX_LOG_REG_VPE2,  "VPESchedule= 0x%08X, VPEScheFBack= 0x%08X, VPEOpt   = 0x%08X")
    TRC_MSG(EX_LOG_REG_VPE3,  "MVPControl = 0x%08X, MVPConf0    = 0x%08X, MVPConf1 = 0x%08X")
    TRC_MSG(EX_LOG_REG_VPE4,  "VPEControl = 0x%08X")
    
    TRC_MSG(EX_LOG_TLB_INFO_TITLE,       "[TLB Management Info]")
    TRC_MSG(EX_LOG_REG_TLB1,  "Index   = 0x%08X, EntryLo0     = 0x%08X, EntryLo1 = 0x%08X, EntryHi   = 0x%08X")
    TRC_MSG(EX_LOG_REG_TLB2,  "Context = 0x%08X, ContextConfig= 0x%08X, PageMask = 0x%08X, PageGrain = 0x%08X")
    TRC_MSG(EX_LOG_REG_TLB3,  "Wired   = 0x%08X, BadVAddr     = 0x%08X")
    TRC_MSG(EX_LOG_REG_TLB4,  "EntryHi = 0x%08X, Context = 0x%08X, ContextConfig = 0x%08X, BadVAddr = 0x%08X")

    TRC_MSG(EX_LOG_MEMSEG_INFO_TITLE,    "[Memory Segmentation Info]")
    TRC_MSG(EX_LOG_REG_MEMSEG,"SegCtl0 = 0x%08X, SegCtl1 = 0x%08X, SegCtl2 = 0x%08X")
    
    TRC_MSG(EX_LOG_CACHEMGT_INFO_TITLE,  "[Cache Management Info]")
    TRC_MSG(EX_LOG_REG_CMGT1, "ITagLo   = 0x%08X, IDataLo   = 0x%08X, IDataHi   = 0x%08X")
    TRC_MSG(EX_LOG_REG_CMGT2, "DTagLo   = 0x%08X, DTagHi    = 0x%08X, DDataLo   = 0x%08X")
    TRC_MSG(EX_LOG_REG_CMGT3, "L23TagLo = 0x%08X, L23DataLo = 0x%08X, L23DataHi = 0x%08X")
    TRC_MSG(EX_LOG_REG_CMGT4, "ErrCtl   = 0x%08X")

    TRC_MSG(EX_LOG_TIMER_INFO_TITLE,  "[Timer Info]")
    TRC_MSG(EX_LOG_REG_TIMER, "Count = 0x%08X, Compare = 0x%08X")
    TRC_MSG(EX_LOG_REG_COUNT, "Count = 0x%08X")

    TRC_MSG(EX_LOG_DBGTRC_INFO_TITLE,  "[Debug and Trace Register Info]")
   TRC_MSG(EX_LOG_REG_DBGTRC1,"WatchLo0 = 0x%08X, WatchLo1 = 0x%08X, WatchLo2 = 0x%08X, WatchLo3 = 0x%08X")
   TRC_MSG(EX_LOG_REG_DBGTRC2,"WatchHi0 = 0x%08X, WatchHi1 = 0x%08X, WatchHi2 = 0x%08X, WatchHi3 = 0x%08X")

    TRC_MSG(EX_LOG_UMOD_INFO_TITLE,  "[User Mode Support Info]")
    TRC_MSG(EX_LOG_REG_UMOD,  "YQMask = 0x%08X, LLAddr = 0x%08X")

    TRC_MSG(EX_LOG_MMAP_INFO_TITLE,  "[Memory Mapped Info]")
    TRC_MSG(EX_LOG_REG_MMAP,  "CDMMBase = 0x%08X")

    TRC_MSG(EX_LOG_STACKDUMP_INFO_TITLE,  "[Stack Info]")
    TRC_MSG(EX_LOG_FULLINFO_STACKDUMP_TITLE, "stack dump:")
    TRC_MSG(EX_LOG_FULLINFO_STACKDUMP, "    [ADDR:0x%08X]")

    TRC_MSG(EX_LOG_SPLIT_VICTIM_VPE_INFO,          "========================= Victim VPE Info ===========================")
    TRC_MSG(EX_LOG_VICTIM_BASIC_INFO, "Victim VPE: %u, TC: %u, order: 0x%x, USCNT: 0x%08X")
    TRC_MSG(EX_LOG_TYPE_EX_ENTER_TYPE, "Exception type: %Mexception_enter_category")
    TRC_MSG(EX_LOG_TYPE_EX_ENTER_TYPE_NMI, "Please note!! This vpe could not receive CTI interrupt so most likely it had interrupt disabled for long time")
    TRC_MSG(EX_LOG_TYPE_EX_ENTER_TYPE_GEN_REFILL, "Please note!! This vpe had simultaneous exception")
    TRC_MSG(EX_LOG_NEWLINE, "")
    //TRC_MSG(EX_LOG_TYPE_EX_TYPE, "Exception type: %Mexception_type")
    //TRC_MSG(EX_LOG_CPU_GPR_REG_TITLE,    "[CPU Register Info]")
    //TRC_MSG(EX_LOG_EXCTRL_REG_TITLE,     "[Exception Control Info]")
    //TRC_MSG(EX_LOG_TLB_INFO_TITLE,       "[TLB Management Info]")
    //TRC_MSG(EX_LOG_CACHEMGT_INFO_TITLE,  "[Cache Management Info]")
    //TRC_MSG(EX_LOG_VPE_INFO_TITLE,       "[VPE Management Info]")


    /* special notification for L1 timing check assertion */
    TRC_MSG(EX_LOG_L1_TIMING_CHECK_ASSERT1, "L1 timing check fail.")
    TRC_MSG(EX_LOG_L1_TIMING_CHECK_ASSERT2, "Use the stack dump to find out who disables IRQ")

     /* Set Watchpoint, Breakpoint via ELT inject message function */
    TRC_MSG(MDDBG_HIT_BP,     "BreakPoint(0x%08X) is hit")
    TRC_MSG(MDDBG_HIT_WP_TBC, "WritePoint(Unknown) is hit at address 0x%08X")
    TRC_MSG(MDDBG_HIT_WP,     "WritePoint(0x%08X) is hit at address 0x%08X")
    TRC_MSG(MDDBG_HIT_Debug,     "[%d]0x%08X, 0x%08X, 0x%08X")


    /* extened exception record */
    TRC_MSG(EX_LOG_SPLIT_EXTEND_INFO,          "========================= Extra Info ===========================")
    /* pcmon */
    TRC_MSG(EX_LOG_PCMON_TITLE, "PCMON Info:")
    TRC_MSG(EX_LOG_PCMON_PIPED_PCPAIR_TITLE, "Piped IA:[PC, TC, FRC]")
    TRC_MSG(EX_LOG_PCMON_PIPED_PCPAIR, "(PC)[ADDR:0x%08X], TC: %u, FRC: 0x%08X")
    TRC_MSG(EX_LOG_PCMON_PCPAIR_TITLE, "PC History:[PC->PC, FRC, TAG]")
    TRC_MSG(EX_LOG_PCMON_PCPAIR, "(PC)[ADDR:0x%08X] -> (PC)[ADDR:0x%08X], FRC: 0x%08X, TAG: 0x%08X")
    
    TRC_MSG(EX_LOG_PCMON_PIPED_PDPAIR_TITLE, "Piped DA:[PC, Data Address, TC, FRC]")
    TRC_MSG(EX_LOG_PCMON_PIPED_PDPAIR, "(PC)[ADDR:0x%08X], (DATA ADDR)0x%08X, TC: %u, FRC: 0x%08X")
    TRC_MSG(EX_LOG_PCMON_PDPAIR_TITLE, "DC History:[PC, Data Address, FRC, TAG]")
    TRC_MSG(EX_LOG_PCMON_PDPAIR, "(PC)[ADDR:0x%08X], (DATA ADDR)0x%08X, FRC: 0x%08X, TAG: 0x%08X")
    
    /* bus error info */
    TRC_MSG(EX_LOG_BUSERR_TITLE, "Bus Info:")
    TRC_MSG(EX_LOG_BUSERR_VALUE, "0x%08X 0x%08X")
    
    /* busmpu error info */
    TRC_MSG(EX_LOG_BUSMPUERR_TITLE, "Bus MPU Info:")
    TRC_MSG(EX_LOG_BUSMPUERR_MDINFRA_TITLE, "[MDINFRA]")
    TRC_MSG(EX_LOG_BUSMPUERR_MDINFRA_VIO_WT, "MDINFRA_VIO_WT_ADDR:[ADDR:0x%08X], MDINFRA_VIO_WT_STATUS: 0x%08X")
    TRC_MSG(EX_LOG_BUSMPUERR_MDINFRA_VIO_RD, "MDINFRA_VIO_RD_ADDR:[ADDR:0x%08X], MDINFRA_VIO_RD_STATUS: 0x%08X")
    TRC_MSG(EX_LOG_BUSMPUERR_MDINFRA_VIO_RO, "MDINFRA_VIO_RO: 0x%08X")
    TRC_MSG(EX_LOG_BUSMPUERR_IOCU_ALIGN_VIO, "IOCU_ALIGN_VIO_ADDR:[ADDR:0x%08X], IOCU_ALIGN_VIO_STATUS: 0x%08X")

    TRC_MSG(EX_LOG_BUSMPUERR_MCU_TITLE, "[MCU]")
    TRC_MSG(EX_LOG_BUSMPUERR_MCU_VIO, "MCU_VIO_RD_ADDR: 0x%08X, MCU_VIO_WT_ADDR: 0x%08X")
    TRC_MSG(EX_LOG_BUSMPUERR_MCU_RO,  "MCU_RO13: 0x%08X, MCU_RO14: 0x%08X, MCU_RO15: 0x%08X, MCU_RO16: 0x%08X")


    /* PLL info */
    TRC_MSG(EX_LOG_PLLINFO_TITLE, "PLL Info:")
    TRC_MSG(EX_LOG_PLLINFO_VAR, "%s: 0x%08X (%d)")

    /* DVFS info */
    TRC_MSG(EX_LOG_DVFS_TITLE, "DVFS Info:")
    TRC_MSG(EX_LOG_DVFS_VAR, "DVFS Data: 0x%08X")

    /* MDMPU info */
    TRC_MSG(EX_LOG_MDMPU_TITLE, "MDMPU Info:")
    TRC_MSG(EX_LOG_MDMPU_VAR1, "coreid=%d, ASCR= 0x%08X, CONFIG= 0x%08X")
    TRC_MSG(EX_LOG_MDMPU_VAR2, "RI= 0x%02X, WI= 0x%02X, XI= 0x%02X")
    TRC_MSG(EX_LOG_MDMPU_VAR3, "Enable= 0x%02X, MATCH= 0x%02X, NUM= 0x%02X")

    /* dummy */
    TRC_MSG(EX_LOG_SPLIT,          "======================================================================")
    TRC_MSG(EX_LOG_DUMMY, "")


    TRC_MSG(SST_Separator, "******************************************")
    TRC_MSG(SST_AFOUND_Label, "Label: %s")
    TRC_MSG(SST_AFOUND_SWVersion, "SWVersion: %s %s")
    TRC_MSG(SST_AFOUND_BuildTime, "BuildTime: %s")
    TRC_MSG(SST_AFOUND_DSPBuildTime, "DSP_BuildTime: %s")
    TRC_MSG(SST_AFOUND_ExceptionSource, "ExceptionSource: %s%s")
    TRC_MSG(SST_AFOUND_ExceptionCategory, "ExceptionCategory: %MEX_MAINCONTENT_TYPE_T")
    TRC_MSG(SST_AFOUND_BriefException, "BriefException: %s")
    TRC_MSG(SST_AFOUND_ExceptionTimestamp, "ExceptionTimestamp: %d")
    TRC_MSG(SST_AFOUND_HandlingOrder, "HandlingOrder: %s")
    TRC_MSG(SST_AFOUND_1_OffendingFile, "1_OffendingFile: %s")
    TRC_MSG(SST_AFOUND_2_OffendingAddress, "2_OffendingAddress: %s")
    TRC_MSG(SST_AFOUND_3_Offender, "3_Offender: %s")
    TRC_MSG(SST_AFOUND_4_Helper, "4_Helper: (%s)Default_%s%s1stLine")


END_TRACE_MAP(MOD_EX_LOG)

#endif    /* _EX_TRC_H */


