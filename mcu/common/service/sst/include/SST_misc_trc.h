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
 *   SST_misc_trc.h
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
  
   /* Phase 1: Exception Message, grouped according to type */
   TRC_MSG(SST_PHASE1_111_6, "The dynamic cacheable switch API caller passes the start address(0x%x) which is not in dynamic cacheable switch region. Please find the cache API caller by callstack to check the parameter.")
   TRC_MSG(SST_PHASE1_111_7, "The dynamic cacheable switch API caller passes the invalid switch attribute(0x%x). Please find the cache API caller by callstack to check the parameter.")
   TRC_MSG(SST_PHASE1_111_8, "This fatal error means passing the address which is not in dynamic cacheable switch region or invalid attribute. However, the recorded status is unexpected. Please dump memory and let system service member to give you a hand!")

   TRC_MSG(SST_PHASE1_112_1, "The cache API caller passes the start address(0x%x) which is not aligned to L1 cache line size(%d bytes). Please find the cache API caller by callstack to check the parameter.")
   TRC_MSG(SST_PHASE1_112_2, "The cache API caller passes the start address(0x%x) which is not aligned to L2 cache line size(%d bytes). Please find the cache API caller by callstack to check the parameter.")
   TRC_MSG(SST_PHASE1_112_8, "This fatal error means passing the start address which is not aligned to L1/L2 cache line size for cache APL. However, the recorded statusis unexpected. Please dump memory and let system service member to give you a hand!")

   TRC_MSG(SST_PHASE1_113_3, "The cache API caller passes the size(0x%x) which is not aligned to L1 cache line size(%d bytes). Please find the cache API caller by callstack to check the parameter.")
   TRC_MSG(SST_PHASE1_113_4, "The cache API caller passes the size(0x%x) which is not aligned to L2 cache line size(%d bytes). Please find the cache API callerto check the parameter.")
   TRC_MSG(SST_PHASE1_113_5, "The cache API caller passes the size(0x%x) which is larger than cache size for cache API in HRT domain. Please find the cacheAPI caller by callstack to check why he/she need this time consuming operation.")
   TRC_MSG(SST_PHASE1_113_8, "This fatal error means passing the size which is not aligned to L1/L2 cache line size or too large size for cache API. However, the recorded status is unexpected. Please dump memory and let system service member to give you a hand!")

   
   TRC_MSG(SST_PHASE1_c01_00, "In kal_evshed_create_pool(), malloc failed for total memory required by evshed pool.")
   TRC_MSG(SST_PHASE1_c01_01, "In evshed_create(), malloc failed for a stack timer required by an event scheduler.")
   TRC_MSG(SST_PHASE1_c01_02, "In evshed_create(), malloc failed for an event scheduler.")
   TRC_MSG(SST_PHASE1_c01_03, "In evshed_enable_protect_property(), malloc failed for an event scheduler protect.")
   TRC_MSG(SST_PHASE1_c02_FF, "In kal_evshed_create_pool(), system fails to create partitioned-memory pool for an event scheduler.")
   TRC_MSG(SST_PHASE1_c03_00, "In kal_evshed_get_mem(), memory size being requested is larger than partitioned size.")
   TRC_MSG(SST_PHASE1_c03_FF, "In kal_evshed_get_mem(), system fails to get buffer from evshed_pool_id")
   TRC_MSG(SST_PHASE1_c04_FF, "In kal_evshed_free_mem(), system fails to free buffer to evshed_pool_id, ptr=0x%X.")
   TRC_MSG(SST_PHASE1_c05_ID, "In evshed_cancel_event(), canceling event scheduler owned by others is absolutely prohibited, eventid=0x%X.")
   TRC_MSG(SST_PHASE1_c06_FF, "In evshed_cancel_event(), parameter eventid is a null pointer.")

   TRC_MSG(SST_PHASE1_b02, "Dividend is zero now!")
   TRC_MSG(SST_PHASE1_b03, "Oh No! Software abnormal reset is encountered.")
   TRC_MSG(SST_PHASE1_b04, "Division by zero happened when PC was at 0x%08X")
   TRC_MSG(SST_PHASE1_b06, "Someone tried to execute out of ISPRAM. PC was at 0x%08X and RA was at 0x%08X")
   TRC_MSG(SST_PHASE1_b06_1, "PC == RA so probably return address was corrupted in stack")
   TRC_MSG(SST_PHASE1_b06_2, "ISPRAM at CORE%d is at range 0x%08X - 0x%08X")
   TRC_MSG(SST_PHASE1_b31, "IRQ is disabled over %d QBs !")
   TRC_MSG(SST_PHASE1_b35, "IRQ is disabled after leaving LISR %d")
   TRC_MSG(SST_PHASE1_b36, "IRQ is disabled after leaving HISR")
   TRC_MSG(SST_PHASE1_b37, "SaveAndSetIRQMask cannot be used from HRT vpe")
   TRC_MSG(SST_PHASE1_b38, "RestoreIRQMask cannot be used from HRT vpe")
   TRC_MSG(SST_PHASE1_b39, "Too big area for kal_memset")
   TRC_MSG(SST_PHASE1_b3a, "LISR or HISR calling kal_mem_set with >64KB size, context should not do this since performance consideration, owner please review.")
   TRC_MSG(SST_PHASE1_b60, "HMU detected MD long time no response.")

   TRC_MSG(SST_PHASE1_1501, "Customer had defined %d task IDs, violates the default value %d!")
   TRC_MSG(SST_PHASE1_1502, "Customer had defined %d module IDs, violates the default value %d!")
   TRC_MSG(SST_PHASE1_1503, "Customer had defined %d message IDs, violates the default value %d!")
   TRC_MSG(SST_PHASE1_1504, "Customer had defined %d SAP IDs, violates the default value %d!")
   
   TRC_MSG(SST_PHASE1_2f00, "Triggering the same CMIF interrupt more than once with CMIF driver API is prohibited!")
   TRC_MSG(SST_PHASE1_2f01, "Triggering the same CUIF interrupt more than once with CUIF driver API is prohibited!")

   TRC_MSG(SST_PHASE1_2f10, "[For USIP]Exception occurs because the L1 user call DDL API to change bin mode but didnt call the activate API for usip!")
   TRC_MSG(SST_PHASE1_2f10_1, "[For RAKE]Exception occurs because the L1 user call DDL API to change bin mode but the rake status is not deactivate done!")
   TRC_MSG(SST_PHASE1_2f11, "Exception occurs because the DSP user is still busy but L1 user call the DDL API to change bin mode!")
   TRC_MSG(SST_PHASE1_2f12, "Exception occurs because the previous DDL doesnt finish but user call the DDL API to change bin mode again!")
   TRC_MSG(SST_PHASE1_2f13, "Exception occurs because the bin mode is incorrect!")

   TRC_MSG(SST_PHASE1_2f18, "[SleepFLowAPI] Target DSP need to deactivate before activate.")
   TRC_MSG(SST_PHASE1_2f19, "[SleepFLowAPI] Target DSP need to activate before deactivate.")
   TRC_MSG(SST_PHASE1_2f1a, "[SleepFLowAPI] Target DSP need to check activate done before deactivate.")

   TRC_MSG(SST_PHASE1_3000_00, "MD3 C2K exception, please find C2K 1st line support!")
   
   /* Phase 2: Detailed analysis */
   TRC_MSG(SST_PHASE1_b04_OutOfRange, "IRQ number being serviced is out of range; it is an illegal IRQ!")
   TRC_MSG(SST_PHASE1_b04_NOT_REG, "IRQ number %d is an un-registered interrupt!")
   TRC_MSG(SST_PHASE1_b04_MEMORY_CORRUPTION, "Memory corruption at lisr_dispatch_tbl[%d]!")
   
   TRC_MSG(SST_PHASE2_b04_LISR_DISPATCH_TBL, "Content of lisr_dispatch_tbl[%d]:")
   TRC_MSG(SST_PHASE2_b04_LISR_DISPATCH_TBL_V, "   lisr_dispatch_tbl.vector : %d")
   TRC_MSG(SST_PHASE2_b04_LISR_DISPATCH_TBL_H, "   lisr_dispatch_tbl.lisr_handler : 0x%X")
   TRC_MSG(SST_PHASE2_b04_LISR_DISPATCH_TBL_D, "   lisr_dispatch_tbl.description : %c%c%c%c%c%c%c%c")
   TRC_MSG(SST_PHASE2_c03_POOL_MONITOR_P1, "There are totally %d entries with event scheduler buffer size %d (Bytes).")
   TRC_MSG(SST_PHASE2_c03_POOL_MONITOR_P2, "Owners distribution as below:")
   TRC_MSG(SST_PHASE2_c03_POOL_MONITOR_P3, "There are %d events which handler func addr is 0x%08X in event scheduler %c%c%c%c%c%c%c%c")
   TRC_MSG(SST_PHASE2_c03_POOL_MONITOR_P4, "which dest module is %Mmodule_type (task: %c%c%c%c%c%c%c%c).")
   TRC_MSG(SST_PHASE1_b31_irq_disabled_duration, "IRQ is disabled %d QBs: locked by caller address 0x%08X, unlocked by caller address 0x%08X!!")
   TRC_MSG(SST_swla, "SWLA entry %d: %s started at %u, exececuted for %uus")
   TRC_MSG(SST_swla_current, "SWLA entry 0: %s started at %u, exececuting currently")
   TRC_MSG(SST_PHASE2_b60_swla_toprunner, "During the %uus before exception, %s exececuted for %uus")

    /* cm2 error info */
    TRC_MSG(EX_LOG_CM2ERROR_TITLE, "CM2 error info:")
    TRC_MSG(EX_LOG_CM2ERROR_MASK, "GCR_ERROR_MASK 0x%08X")
    TRC_MSG(EX_LOG_CM2ERROR_CAUSE, "GCR_ERROR_CAUSE 0x%08X")
    TRC_MSG(EX_LOG_CM2ERROR_ADDR, "GCR_ERROR_ADDR 0x%08X")
    TRC_MSG(EX_LOG_CM2ERROR_MULT, "GCR_ERROR_MULT 0x%08X")
    TRC_MSG(EX_LOG_CM2ERROR_TYPE, "CM2 Error Type: %s")
    TRC_MSG(EX_LOG_CM2ERROR_UTYPE, "Unknown CM2 Error Type: %d")
    TRC_MSG(EX_LOG_CM2ERROR_ERRCTL, "ErrCtl 0x%08X:")
    TRC_MSG(EX_LOG_CM2ERROR_ERRCTL_LBE, "LBE bit of ErrCtl is set which indicates that most recent Data Bus Error was involved a load instruction")
    TRC_MSG(EX_LOG_CM2ERROR_ERRCTL_WABE, "WABE bit of ErrCtl is set which indicates that the most recent Data Bus Error was due to a write allocate and that store data was lost")
    TRC_MSG(EX_LOG_CM2ERROR_ERRCTL_WABE_LBE, "It is possible for both LBE and WABE to be set if the bus error was on a line being used for both loads and stores.")
    TRC_MSG(EX_LOG_CM2ERROR_ERRCTL_TCBIND_TBE, "TC%d has TBE bit (of TCBind) set which indicates load/store causing bus error was issued by TC%d") 
    TRC_MSG(EX_LOG_CM2ERROR_ERRCTL_TCBIND_TBE_GENERAL1, "Implementations may set the TBE bits of multiple TCs on a single DBE exception if multiple memory requests to the same memory location or cache linefrom the different TCs were merged.")
    TRC_MSG(EX_LOG_CM2ERROR_ERRCTL_TCBIND_TBE_GENERAL2, "Implementations may generate bus error exceptions without setting a TBE bit if it is not possible to associate the failing transaction with a particular TC.")

    TRC_MSG(EX_LOG_CM2ERROR_SRCPORT, "Source port: %d")
    TRC_MSG(EX_LOG_CM2ERROR_TAGID, "Tag ID: %x")
    TRC_MSG(EX_LOG_CM2ERROR_OCPMCMD, "OCP MCmd: %s")
    TRC_MSG(EX_LOG_CM2ERROR_UOCPMCMD, "Unknown OCP MCmd: %d")
    TRC_MSG(EX_LOG_CM2ERROR_TARGET_REGION, "Target region: %Mcm2_error_target_region")

    TRC_MSG(EX_LOG_CM2ERROR_CCA, "Cache coherency attribute: %s")
    TRC_MSG(EX_LOG_CM2ERROR_SC, "Request was from a Store Conditional")
    TRC_MSG(EX_LOG_CM2ERROR_INTERVENTION_RESP, "Core%d intervention response: %Mcm2_error_intervetion_sresp")
    TRC_MSG(EX_LOG_CM2ERROR_COHERENT_STATE, "Core%d coherent state: %Mcm2_error_coherent_state")

    TRC_MSG(EX_LOG_CM2ERROR_ARRAY, "Array type: %Mcm2_error_array_type")
    TRC_MSG(EX_LOG_CM2ERROR_INST, "Instruction associated with error: %Mcm2_error_instruction")
    TRC_MSG(EX_LOG_CM2ERROR_SYNDROME, "Syndrome associated with Tag or WS way, or Syndrome associated with Data DWord: %x")
    TRC_MSG(EX_LOG_CM2ERROR_MULTIWAY, "Multi-way error for Tag or WS RAM")
    TRC_MSG(EX_LOG_CM2ERROR_WAY, "Way[2:0] associated with the error: %d")
    TRC_MSG(EX_LOG_CM2ERROR_DWORD, "DWord[3:0] with error: %d")
    TRC_MSG(EX_LOG_CM2ERROR_MULTIPLE, "Multiple Uncorrectable")

    TRC_MSG(EX_LOG_TLB_TITLE, "TLB <index>: EntryLo0, EntryLo1, PageMask, EntryHi")
    TRC_MSG(EX_LOG_TLB_DUMP, "TLB %d: 0x%08X, 0x%08X, 0x%08X, 0x%08X")

    TRC_MSG(SST_TLB_MOD_EXCEPTION_EXPLANATION, "%Mexception_type happens when a store happens to non-writable section like ROM or MCU RO area")
    TRC_MSG(SST_DATAACCESS_ERROR, "In this case, instruction at 0x%08X tried to %s 0x%08X")
    TRC_MSG(SST_INSTRUCTIONFETCH_ERROR, "In this case instruction was tried to be fetched from 0x%08X. Last jump was from 0x%08X.")

    TRC_MSG(SST_TLB_MISS_STORE_LOAD_EXCEPTION_EXPLANATION, "%Mexception_type happens in 2 occasion:")
    TRC_MSG(SST_TLB_MISS_STORE_LOAD_EXCEPTION_EXPLANATION1, "   1. Access in to address which is mapped but no TLB entry matches and EXL bit is set (This is used protect empty areas in memory map)") 
    TRC_MSG(SST_TLB_MISS_STORE_LOAD_EXCEPTION_EXPLANATION2, "   2. When core accesses core specific area of other core (CACHED_EXTSRAM_CORE0/1/2)")
    TRC_MSG(SST_TLB_MISS_STORE_LOAD_EXCEPTION_EXPLANATION3, "In this case, EXL bit was set so EPC register cannot be used. Please use PC monitor data, last jump 0x%08X  and badvaddr 0x%08X to resolve this case")


    TRC_MSG(SST_TLB_REFILL_STORE_LOAD_EXCEPTION_EXPLANATION, "%Mexception_type happens when accessing address which is mapped but no TLB entry matches and EXL bit is not set (This is used protect empty areas in memory map)")
    TRC_MSG(SST_TLB_EXECUTE_INHIBIT_EXCEPTION_EXPLANATION, "%Mexception_type happens when instruction fetch happens from area which is marked as execute inhibit")
    TRC_MSG(SST_TLB_EXECUTE_INHIBIT_EXCEPTION_EXPLANATION2, "In this case return address was corrupted in stack and that caused jump to invalid area during function return")
    TRC_MSG(SST_TLB_EXECUTE_INHIBIT_EXCEPTION_EXPLANATION3, "Last return address in stack is located at 0x%08X and the word there is 0x%08X")
    TRC_MSG(SST_TLB_EXECUTE_INHIBIT_EXCEPTION_EXPLANATION4, "Hint: check stack from memory dump around 0x%08X address and try to understand how 0x%08X got there")
    TRC_MSG(SST_TLB_READ_INHIBIT_EXCEPTION_EXPLANATION, "%Mexception_type happens when instruction fetch or data read happens from area which is marked as read inhibit")
    TRC_MSG(SST_ADDRESS_ERROR_STORE_LOAD_EXCEPTION_EXPLANATION, "%Mexception_type happens because of unaligned access")
    TRC_MSG(SST_DATA_INSTR_BUS_ERROR_EXCEPTION_EXPLANATION, "%Mexception_type happens when an %s access makes a bus request (due to a cache miss or an uncacheable reference) and that request terminates in an error.")
    TRC_MSG(SST_INSTR_BUS_ERROR_EXCEPTION_EXPLANATION1, "Instruction errors are precises")
    TRC_MSG(SST_DATA_BUS_ERROR_EXCEPTION_EXPLANATION1, "data bus errors can be imprecise or precise")
    TRC_MSG(SST_RESERVED_INSTRUCTION_EXCEPTION_EXPLANATION, "%Mexception_type happens when a reserved or undefined major opcode or function field is executed")
    TRC_MSG(SST_RESERVED_INSTRUCTION_EXCEPTION_EXPLANATION1, "In this case PC pointed to 0x%08X. Unknown instruction was possibly 0x%08X. Last jump was from 0x%08X.")
    TRC_MSG(SST_RESERVED_INSTRUCTION_EXCEPTION_EXPLANATION2, "L1 cache lines: (NOTE saved during exception handling so not sure if contains valid code pointed by pc")
    TRC_MSG(SST_RESERVED_INSTRUCTION_EXCEPTION_EXPLANATION3, "L2 cache lines: (NOTE saved during exception handling so not sure if contains valid code pointed by pc")
    TRC_MSG(SST_RESERVED_INSTRUCTION_EXCEPTION_EXPLANATION_NOCODE, "In this case PC 0x%08X did not point to code region. Last jump was from 0x%08X.")

    TRC_MSG(SST_INTEGER_OVERFLOW_EXCEPTION_EXPLANATION, "%Mexception_type happens when selected integer instructions (add,addi, sub) result in a 2's complement overflow.")
    TRC_MSG(SST_INTEGER_OVERFLOW_EXCEPTION_EXPLANATION1, "In this case PC was at 0x%08X when overflow happened")
    TRC_MSG(SST_WATCH_EXCEPTION_EXPLANATION, "%Mexception_type happens when an instruction or data reference matches the address information stored in the WatchHi and WatchLo registers")
    TRC_MSG(SST_WATCH_EXCEPTION_EXPLANATION1, "This debugging facility can be used as sw breakpoints or data watchpoints. For example stack overflow can be implemented with this facility.")
    TRC_MSG(SST_WATCH_EXCEPTION_EXPLANATION2, "In this case, PC was at 0x%08X when watch exception happened and either it matches to WatchLo0/1 or the data it accessed matches to WatchLo2/3")
    TRC_MSG(SST_DEFERRED_WATCH_EXCEPTION_EXPLANATION, "In this case deferred watch exception occured which means it occured during EXL or ERL bit was set or during processor was in DEBUG mode")
    TRC_MSG(SST_DEFERRED_WATCH_EXCEPTION_EXPLANATION1, "This means EPC register does not point to offending address")
    TRC_MSG(SST_WATCH_EXCEPTION_EXPLANATION3, "In this case there was %s watch area 0x%08X-0x%08X")
    TRC_MSG(SST_WATCH_EXCEPTION_REGS_TITLE, "Watch hi and lo regs currently:")
    TRC_MSG(SST_WATCH_EXCEPTION_REGS, "WatchLo%d: 0x%08X, WatchHi%d: 0x%08X")

    TRC_MSG(SST_THREAD_EXCEPTION_EXPLANATION, "%Mexception_type is caused by multithreading ASE instruction FORK or YIELD. Or by gating storage")
    TRC_MSG(SST_THREAD_EXCEPTION_EXPLANATION1, "In this case thread exception subtype was %Mthread_exception_codes")
    TRC_MSG(SST_THREAD_EXCEPTION_OVERFLOW, "%Mthread_exception_codes occured because a FORK insruction at 0x%08X could not allocate TC")
    TRC_MSG(SST_THREAD_EXCEPTION_UNDERFLOW, "%Mthread_exception_codes occured because YIELD instruction at 0x%08X leaved no dynamically allocatable TCs activated on a VPE.")
    TRC_MSG(SST_THREAD_EXCEPTION_INVALID_QUALIFIER, "%Mthread_exception_codes occured because YIELD instruction at 0x%08X specified an invalid condition for resuming execution.")
    TRC_MSG(SST_THREAD_EXCEPTION_GATING_STORAGE, "%Mthread_exception_codes occured at 0x%08X because implementation dependent logic associated with gating or inter-thread communication (ITC) storage requires software intervention.")
    TRC_MSG(SST_THREAD_EXCEPTION_YIELD_SCHEDULER, "%Mthread_exception_codes occured because a valid YIELD at 0x%08X instruction would have caused a rescheduling of a TC, and the YIELD Intercept bit is set")
    TRC_MSG(SST_THREAD_EXCEPTION_GATING_STORAGE_SCHEDULER, "%Mthread_exception_codes occured at 0x%08X because a Gating Storage load or store would have blocked and caused a rescheduling of a TC, and the GS Intercept bit is set")
    TRC_MSG(SST_THREAD_EXCEPTION_UNKNOWN, "%Mexception_type is a reserved type. Please contact SS team. PC was at 0x%08X when this happened")

    TRC_MSG(SST_THREAD_EXCEPTION_VPECONTROL, "VPEControl 0x%08X => YSI %s and GSI %s")
    TRC_MSG(SST_THREAD_EXCEPTION_TCSTATUS, "TCStatus 0x%08X => DT %s")
    TRC_MSG(SST_THREAD_EXCEPTION_YQMASK, "YQMask 0x%08X")
   
	TRC_MSG(MSG_SST_CHK_TRACE, "[@SST2ELT] file_idx: %d, access_id: %d, para: %d, result: %d") 
