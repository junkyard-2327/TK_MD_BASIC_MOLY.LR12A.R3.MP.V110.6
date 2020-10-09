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
 *   ex_item.h
 *
 * Project:
 * --------
 *   Maui_Software
 *
 * Description:
 * ------------
 *	Header file for exception handling
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
 * removed!
 *
 * removed!
 * removed!
 *
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
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

#ifndef _EX_ITEM_H
#define _EX_ITEM_H

#if !defined(__OFFLINE_EX_LOG_PARSER__)
#include "kal_general_types.h"
#include "reg_base.h"
#include "intrCtrl.h"
#include "kal_public_defs.h"
#include "ex_public.h"
#include "SST_mem_utility.h"
#include "mips_mmu.h"
#include "mpu_public.h"
#else
#include "ex_item_types.h"
#include "cpu_info.h"
#endif /*__OFFLINE_EX_LOG_PARSER__*/

/*******************************************************************************
 * Enum Type Definition
 *******************************************************************************/


/* exception enter category */
typedef enum
{
    EXCEPTION_ENTER_CATEGORY_NO_EXCEPTION = 0,
    EXCEPTION_ENTER_CATEGORY_TLBREFILL,
    EXCEPTION_ENTER_CATEGORY_CACHEERR,
    EXCEPTION_ENTER_CATEGORY_GENERAL,
    EXCEPTION_ENTER_CATEGORY_NMI,
    EXCEPTION_ENTER_CATEGORY_CTI,
    EXCEPTION_ENTER_CATEGORY_DORMANT,
    EXCEPTION_ENTER_CATEGORY_EXCEPTION_IN_ASM_BOOT,
#if !defined(__OFFLINE_EX_LOG_PARSER__)
} exception_enter_category;
#else
} exception_enter_category_format;
#endif

typedef enum
{
    /* mips exception codes in cause[exccode] */
    INTERRUPT_EXCEPTION                = 0x0,
    TLB_MOD_EXCEPTION                  = 0x1,
    TLB_MISS_LOAD_EXCEPTION            = 0x2,
    TLB_MISS_STORE_EXCEPTION           = 0x3,
    ADDRESS_ERROR_LOAD_EXCEPTION       = 0x4,
    ADDRESS_ERROR_STORE_EXCEPTION      = 0x5,
    INSTR_BUS_ERROR                    = 0x6,
    DATA_BUS_ERROR                     = 0x7,
    SYSTEM_CALL_EXCEPTION              = 0x8,
    BREAKPOINT_EXCEPTION               = 0x9,
    RESERVED_INSTRUCTION_EXCEPTION     = 0xA,
    COPROCESSORS_UNUSABLE_EXCEPTION    = 0xB,
    INTEGER_OVERFLOW_EXCEPTION         = 0xC,
    TRAP_EXCEPTION                     = 0xD,
    MSA_FLOATING_POINT_EXCEPTION       = 0xE,
    FLOATING_POINT_EXCEPTION           = 0xF,
    COPROCESSOR_2_IS_1_EXCEPTION       = 0x10,
    COR_EXTEND_UNUSABLE_EXCEPTION      = 0x11,
    COPROCESSOR_2_EXCEPTION            = 0x12,
    TLB_READ_INHIBIT_EXCEPTION         = 0x13,
    TLB_EXECUTE_INHIBIT_EXCEPTION      = 0x14,
    MSA_UNUSABLE_EXCEPTION             = 0x15,
    MDMX_EXCEPTION                     = 0x16,
    WATCH_EXCEPTION                    = 0x17,
    MCHECK_EXCEPTION                   = 0x18,
    THREAD_EXCEPTION                   = 0x19,
    DSP_UNUSABLE_EXCEPTION             = 0x1A,
    RESERVED_27_EXCEPTION              = 0x1B,
    RESERVED_28_EXCEPTION              = 0x1C,
    MPU_NOT_ALLOW_EXCEPTION            = 0x1D,
    CACHE_ERROR_EXCEPTION_DBG_MODE     = 0x1E,
    RESERVED_31_EXCEPTION              = 0x1F,

    /* exception types for nmi and cache error exception vectors */
    NMI_EXCEPTION                      = 0x20,
    CACHE_ERROR_EXCEPTION              = 0x21,

    /* These are used to replace TLB_MISS_LOAD/STORE_EXCEPTION
     * codes when using tlb refill exception vector.
     * TLB_MISS_LOAD/STORE_EXCEPTION code is used for tlb invalid */
    TLB_REFILL_LOAD_EXCEPTION          = 0x22,
    TLB_REFILL_STORE_EXCEPTION         = 0x23,

    END_CPU_EXCEPTION_TYPE             = 0x2F,

    STACKACCESS_EXCEPTION              = 0x30,
	SYS_FATALERR_EXT_TASK_EXCEPTION    = 0x31,
	SYS_FATALERR_EXT_BUF_EXCEPTION     = 0x32,
    /* Assertion */
    ASSERT_FAIL_EXCEPTION              = 0x50,
    ASSERT_DUMP_EXTENDED_RECORD        = 0x51,
    ASSERT_FAIL_NATIVE                 = 0x52,
    ASSERT_CUSTOM_ADDR                 = 0x53,
    ASSERT_CUSTOM_MODID                 = 0x54,
    /* cross core triggered */
    CC_INVALID_EXCEPTION               = 0x60,
//    CC_CS_EXCEPTION                    = 0x61,
    CC_MD32_EXCEPTION                  = 0x62,
//    CC_C2K_EXCEPTION                   = 0x63,
//    CC_VC_EXCEPTION                    = 0x64,
    CC_USIP_EXCEPTION                   = 0x65,
    CC_SCQ_EXCEPTION                    = 0x66,
    /* HW triggered */
    EMI_MPU_VIOLATION_EXCEPTION        = 0x70,

    NUM_EXCEPTION,
    END_EXCEPTION_TYPE                 = 0xFFFF
#if !defined(__OFFLINE_EX_LOG_PARSER__)
} exception_type;
#else
} exception_type_format;
#endif

typedef enum ex_maincontent_type_t
{
    EX_MAINCONTENT_TYPE_ASSERT             = 0,
    EX_MAINCONTENT_TYPE_FATAL,
    EX_MAINCONTENT_TYPE_CUSTOM_ASSERT,
#if !defined(__OFFLINE_EX_LOG_PARSER__)
} EX_MAINCONTENT_TYPE_T;
#else
} EX_MAINCONTENT_TYPE_T_FORMAT;
#endif /*__OFFLINE_EX_LOG_PARSER__*/


#define INTSRAM_CODE_CORRUPT "ISPRAM"
#define DYNINTSRAM_CODE_CORRUPT "DYNISPRAM"
#define VECTOR_TABLE_CORRUPT "INTVECT"
#define L2SRAM_C_CODE_CORRUPT  "C_L2SRAM"
#define L2SRAM_NC_CODE_CORRUPT  "NC_L2SRAM"
#define LOCK_WAITED_TOO_LONG_CORRUPT   "WAITLOCK"
#define POSSIBLE_DEADLOCK_CORRUPT  "DEADLOCK"
#define LOCK_HELD_TOO_LONG_CORRUPT   "HELDLOCK"
#define CACHE_CORRUPT   "CACHECOR"
#define L2CACHE_LOCK_CORRUPT   "L2$LOCK"
typedef enum
{
    Healthy = 0,
    ISPRAMCorrupted = 1,
    ISPRAMDynamicRegionCorrupted = 2,
    SystemStackCorrupted = 3,
    TaskStackCorrupted = 4,
    HISRStackCorrupted = 5,
    VectorTableCorrupted = 6,
    L2SRAMCachedCorrupted = 7,
    L2SRAMNonCachedCorrupted = 8,
    SharedInternalSRAMCorrupted = 9,
    LockWaitedTooLongCorrupted = 10,
    PossibleDeadlockCorrupted = 11,
    LockHeldTooLongCorrupted = 12,
    CacheCorrupted = 13,
    L2CacheLockCorrupted = 14,
#if !defined(__OFFLINE_EX_LOG_PARSER__)
} EX_DIAGNOSIS_T;
#else
} EX_DIAGNOSIS_T_FORMAT;
#endif

typedef enum
{
    EX_AUTO_STEP                              = 0,
    EX_BEGIN                                  = 0,

    // before init stage
    EX_ENTER_EXCEPTION                        = 0x1,
    EX_ENTER_EXCEPTION_OTHERS                 = 0x11,
    EX_ENTER_EXCEPTION_SETUP_WAITCORE_DONE    = 0x3F,
    EX_ENTER_EXCEPTION_SETUP_DONE             = 0x5F,
    EX_START_DSP_COMMUNICATION                = 0x80,
    EX_START_HW_COMMUNICATION                 = 0x87,
    EX_START_INT_OFFSHOOT                     = 0x8E,
    EX_ENTER_EXCEPTION_PHASE2                 = 0x90,

    // init stage
    EX_INIT                                   = 0x100,
    EX_INIT_CORE_DONE                         = 0x12F,
    EX_INIT_PCMON_DONE                        = 0x13F,
    EX_INIT_BUS_DONE                          = 0x14F,
    EX_INIT_BUSMPU_DONE                       = 0x15F,
    EX_INIT_DSM_DONE                          = 0x165,
    EX_INIT_MPU_DONE                          = 0x17F,
    EX_INIT_DSP                               = 0x200,
    EX_INIT_USIP                              = 0x210,
    EX_INIT_USIP_DONE                         = 0x25F,
    EX_INIT_MD32                              = 0x260,
    EX_INIT_MD32_DONE                         = 0x2AF,
    EX_INIT_STOP_HW                           = 0x2B0,
    EX_ASM_STOP_DONE                          = 0x2B7,
    EX_GDMA_STOP_DONE                         = 0x2BE,
    EX_SCC_STOP_DONE                          = 0x2C0,
    EX_HW_DUMP_DONE                           = 0x2C7,
    EX_INIT_DONE                              = 0x2FF,

    EX_POST_INIT_EXRECORD                     = 0x300,
    EX_DEFINE_MAIN_REASON_DONE                = 0x36F,
    EX_HW_DATA_SAVE_DONE                      = 0x37F,
    EX_POST_INIT_EXRECORD_DONE                = 0x3FF,

    // external communication
    EX_CC_EXT_COMM                            = 0x400,
    EX_CC_EXT_COMM_OPEN_PORT                  = 0x410,
    EX_CC_EXT_COMM_OPEN_PORT_DONE             = 0x43F,
    EX_CC_EXT_COMM_CCCI_HANDSHAKE             = 0x440,
    EX_CC_EXT_COMM_CCCI_HANDSHAKE_DONE        = 0x46F,
    EX_CC_EXT_COMM_OUTPUT_META                = 0x470,
    EX_CC_EXT_COMM_FLUSH_PORT                 = 0x480,
    EX_CC_EXT_COMM_FLUSH_PORT_PART1           = 0x490,
    EX_CC_EXT_COMM_FLUSH_PORT_PART2           = 0x4A0,
    EX_CC_EXT_COMM_FLUSH_PORT_PART3           = 0x4B0,
    EX_CC_EXT_COMM_FLUSH_PORT_PART4           = 0x4C0,
    EX_CC_EXT_COMM_FLUSH_PORT_PART5           = 0x4D0,
    EX_CC_EXT_COMM_FLUSH_PORT_DONE            = 0x4E0,
    EX_CC_EXT_COMM_DONE                       = 0x4FF,

    // process
    EX_PROCESS                                = 0x500,
    EX_PROCESS_DONE                           = 0x5FF,

    // reboot
    EX_EX_REBOOT                              = 0x600,
    EX_EX_REBOOT_MP                           = 0x700,
    EX_CCCI_INFO_PASSED                       = 0x7E0,
    EX_HANDOVER_MP                            = 0x7EF,

    EX_HANDOVER                               = 0x7FF,
    EX_ON_DEMAND                              = 0x7FF,

    EX_RESET_HANDOVER                         = 0x8EF,

#if !defined(__OFFLINE_EX_LOG_PARSER__)
} exception_flow_index;
#else
} exception_flow_index_format;
#endif


/*******************************************************************************
 * Constant Definition - Common
 *******************************************************************************/
/* structure usage */
#define EX_UNIT_NAME_LEN 8
#define NBR_TC_PER_CORE (SYS_MCU_NUM_TC/SYS_MCU_NUM_CORE)
#define NBR_VPE_PER_CORE (SYS_MCU_NUM_VPE/SYS_MCU_NUM_CORE)
#define NBR_CORE (SYS_MCU_NUM_CORE)
#define TOTAL_VPE_COUNT        (SYS_MCU_NUM_VPE)
#define TOTAL_VICTIM_VPE_COUNT (TOTAL_VPE_COUNT)
#define NBR_OF_WATCH_REGS 4
#define EX_WAIT_VPE_MASK ((1 << TOTAL_VPE_COUNT) - 1)
#define EXCEPTION_ENTER_MASK ((1<<ESAL_GE_CPU_COUNT)-1)
/* This is hardcoded to max nbr of tlbs in interaptiv.
 * Can be reduced to match correct count of tlbs in hw if we know tlbs wont increase after that */
#define NUMBER_OF_TLBS 64
/*******************************************************************************
 * Data Structure Definition - Common
 *******************************************************************************/
/***************************** -structure start- *******************************/
//PRAGMA_BEGIN_PACK_STRUCT
/* Exception header, used to track the exception type */
typedef struct ex_exception_record_header_t
{
    exception_type ex_type;                  /* offset: 0x, length:  2 */
    kal_uint8      ex_offending_vpe_id;      /* offset: 0x, length:  1 */
    kal_uint8      ex_offending_tc_id;       /* offset: 0x, length:  1 */
    kal_uint8      ex_nvram;                 /* offset: +0x, length: 1 - for nvram */
    kal_uint8      ex_serial_num;            /* offset: +0x, length: 1 - for nvram */
    boot_mode_type boot_mode;                /* offset: +0x, length: 1 - normal mode/meta mode... */
    kal_uint8      boot_status;              /* offset: +0x, length: 1 - early stage or not */
    kal_uint32     ex_total_core;            /* offset: 0x, length:  4 - how many cores in mcu */
} EX_HEADER_T;

/* SW load information */
#define EX_SWLABEL_LEN 32
#define EX_SWPRJ_LEN 32
#define EX_SWFLAVOR_LEN 32
#define EX_SWBUILDTIME_LEN 16
typedef struct ex_sw_loadinfo_t
{
    kal_char    sw_label[EX_SWLABEL_LEN];
    kal_char    sw_project_name[EX_SWPRJ_LEN];
    kal_char    sw_flavor[EX_SWFLAVOR_LEN];
    kal_char    sw_buildtime[EX_SWBUILDTIME_LEN];
} EX_LOADINFO_T;


/* First Offender information */
typedef struct _ex_timestamp_struct
{
    kal_uint32 USCNT;      /* offset: +0x, length: 4 */  /* us counter saved exception occuring time */
    kal_uint32 frameno;    /* offset: +0x, length: 4 */  /* frameno saved exception occuring time */
} ex_timestamp_struct;
typedef struct _ex_basic_offending_info_t
{
    ex_timestamp_struct ex_timestamp;                         /* offset: +0x, length: */
    kal_char            execution_unit[EX_UNIT_NAME_LEN];     /* offset: +0x, length: */
    kal_uint32          processing_lisr;                      /* offset: +0x, length: */
    kal_uint32          stack_ptr;                            /* offset: +0x, length: */
    kal_uint32          lr;                                   /* offset: +0x, length: */
    kal_uint32          pc;                                   /* offset: +0x, length: */
    kal_uint8           tc_status;                            /* offset: +0x, length: */
    kal_uint8           pad[3];                               /* offset: +0x, length: */
} EX_BASIC_OFFENDING_INFO_T;

/* Environment information */
typedef struct ex_diagnosis_info_t
{   /* Diagnosis information for Healthy Check */
    kal_char         healthy_check_owner[EX_UNIT_NAME_LEN];   /* offset: +0x, length: 8 */
    EX_DIAGNOSIS_T   corrupted_owner;                         /* offset: +0x, length: 1 */
    kal_uint8        ELM_status;                              /* offset: +0x, length: 1 */
    kal_uint8        pad[2];                                  /* offset: +0x, length: 2 */
} EX_DIAGNOSISINFO_T;
typedef struct ex_environment_info_t
{
    kal_uint32  interrupt_mask[2];                            /* offset: +0x, length: 8 */
    EX_DIAGNOSISINFO_T  diagnosis;                            /* offset: +0x, length: 12 */
    kal_uint32  force_dump;                                   /* offset: +0x, length: 4 */
} EX_ENVINFO_T;


/*******************************************************************************
 * Data Structure Definition - general cpu info
 *******************************************************************************/
typedef struct _ex_gpr_reg_t
{
    kal_uint32 ZERO;
    kal_uint32 AT;
    kal_uint32 V0;
    kal_uint32 V1;
    kal_uint32 A0;
    kal_uint32 A1;
    kal_uint32 A2;
    kal_uint32 A3;
    kal_uint32 T0;
    kal_uint32 T1;
    kal_uint32 T2;
    kal_uint32 T3;
    kal_uint32 T4;
    kal_uint32 T5;
    kal_uint32 T6;
    kal_uint32 T7;
    kal_uint32 S0;
    kal_uint32 S1;
    kal_uint32 S2;
    kal_uint32 S3;
    kal_uint32 S4;
    kal_uint32 S5;
    kal_uint32 S6;
    kal_uint32 S7;
    kal_uint32 T8;
    kal_uint32 T9;
    kal_uint32 K0;
    kal_uint32 K1;
    kal_uint32 GP;
    kal_uint32 SP;
    kal_uint32 FP_OR_S8;
    kal_uint32 RA;
} EX_GPR_REG_T;

/* NOTE: if changing this struct, please chagne SAVE_EX_CPU_REG_T macro as well */
typedef struct _ex_cpu_reg_t
{
    EX_GPR_REG_T GPR;
    kal_uint32 hi;
    kal_uint32 lo;
    kal_uint32 status;
    kal_uint32 cause;
    kal_uint32 EPC;
    kal_uint32 ErrorEPC;
    kal_uint32 BadVAddr;
    kal_uint32 Count;
    kal_uint32 VPEControl;
    kal_uint32 Context;
    kal_uint32 ContextConfig;
    kal_uint32 EntryHi;
    kal_uint32 ErrCtl;
} EX_CPU_REG_T;

typedef struct _ex_min_cpu_reg_t
{
    kal_uint32 RA;
    kal_uint32 status;
    kal_uint32 EPC;
    kal_uint32 cause;
    kal_uint32 SP;
    kal_uint32 BadVAddr;
    kal_uint32 reserved0;
    kal_uint32 reserved1;
} EX_CPU_MIN_REG_T;

typedef struct _ex_tc_reg_t
{
    EX_GPR_REG_T GPR;
    kal_uint32 hi;
    kal_uint32 lo;
    /* Thread Context per-TC */
    kal_uint32 TCStatus;
    kal_uint32 TCBind;
    kal_uint32 TCRestart;
    kal_uint32 TCHalt;
    kal_uint32 TCContext;
    kal_uint32 TCSchedule;
    kal_uint32 TCScheFBack;
    kal_uint32 TCOpt;
    kal_uint32 UserLocal;
    kal_uint32 LLAddr;
    kal_uint32 EntryHi;
    kal_uint32 Status;
    kal_uint32 PerfCtl0;
    kal_uint32 PerfCtl1;
    kal_uint32 PerfCnt0;
    kal_uint32 PerfCnt1;
} EX_TC_REG_T;

typedef struct _ex_vpe_reg_t
{
    /* Thread Context per-VPE */
    kal_uint32 SRSConf0;
    kal_uint32 SRSCtl;
    kal_uint32 SRSMap;

    /* Configuration and Status */
    kal_uint32 Config;
    kal_uint32 Config2;
    kal_uint32 Config5;
    kal_uint32 Config7;
    kal_uint32 EBase;
    kal_uint32 IntCtl;

    /*TLB Management */
    kal_uint32 Index;
    kal_uint32 EntryLo0;
    kal_uint32 EntryLo1;
    kal_uint32 Context;
    kal_uint32 ContextConfig;
    kal_uint32 PageMask;
    kal_uint32 PageGrain;
    kal_uint32 Wired;
    kal_uint32 BadVAddr;

    /* Memory Segmentation */
    kal_uint32 SegCtl0;
    kal_uint32 SegCtl1;
    kal_uint32 SegCtl2;

    /* Exception Control */
    kal_uint32 Cause;
    kal_uint32 EPC;
    kal_uint32 ErrorEPC;

    /* Timer */
    kal_uint32 Count;
    kal_uint32 Compare;

    /* Cache Management */
    kal_uint32 ITagLo;
    kal_uint32 IDataLo;
    kal_uint32 IDataHi;
    kal_uint32 DTagLo;
    kal_uint32 DTagHi;
    kal_uint32 DDataLo;
    kal_uint32 L23TagLo;
    kal_uint32 L23DataLo;
    kal_uint32 L23DataHi;
    kal_uint32 ErrCtl;
    kal_uint32 CacheErr;

    /* VPE Management per-VPE */
    kal_uint32 VPEControl;
    kal_uint32 VPEConf0;
    kal_uint32 VPEConf1;
    kal_uint32 VPESchedule;
    kal_uint32 VPEScheFBack;
    kal_uint32 VPEOpt;

    /* Performance Monitoring */
    /* Debug and Trace */
    kal_uint32 WatchLo[NBR_OF_WATCH_REGS];
    kal_uint32 WatchHi[NBR_OF_WATCH_REGS];
    kal_uint32 YQMask;
}EX_VPE_REG_T;

typedef struct _ex_cm2_error_info_t
{
    kal_uint32 ErrorMask;
    kal_uint32 ErrorCause;
    kal_uint32 ErrorAddr;
    kal_uint32 ErrorMult;
} EX_CM2_ERROR_INFO_T;

typedef struct _ex_core_reg_t
{
    /* VPE Management per-CORE */
    kal_uint32 MVPControl;
    kal_uint32 MVPConf0;
    kal_uint32 MVPConf1;
    kal_uint32 CDMMBase;
    EX_VPE_REG_T vperegs[NBR_VPE_PER_CORE];
    EX_TC_REG_T tcregs[NBR_TC_PER_CORE];
} EX_CORE_REG_T;

typedef struct _ex_core_info_t
{
    /* VPE Management per-CORE */
    kal_uint32 MVPControl;
    kal_uint32 MVPConf0;
    kal_uint32 MVPConf1;
    kal_uint32 CDMMBase;
} EX_CORE_INFO_T;

#if !defined(__OFFLINE_EX_LOG_PARSER__)
#define EX_CACHE_LINES_SAVED 4
typedef struct _ex_interaptiv_t
{
   EX_CORE_REG_T coreregs[NBR_CORE];
   EX_CM2_ERROR_INFO_T cm2_error_info;
   void *cm2_reg_dump;
   /* struct CPC_State? */
   /* struct GIC_State? */
   /* struct ITC_State? */

   struct l1_icache_line offending_l1_icache_data[EX_CACHE_LINES_SAVED];
   struct l2_cache_line offending_l2_icache_data[EX_CACHE_LINES_SAVED];
#if defined(__MTK_TARGET__)
   MIPS_MMU_INFO_T tlbs[TOTAL_VPE_COUNT][NUMBER_OF_TLBS];
#endif
} EX_INTERAPTIV_T;
#endif /* !__OFFLINE_EX_LOG_PARSER__ */

typedef struct _ex_info_t
{
    EX_CPU_REG_T *SST_Exception_Regs;
    kal_uint32 SST_Exception_Timestamp;
    kal_uint32 SST_Exception_GLB_Timestamp;
    exception_enter_category ExceptionEnterCategory;
    kal_uint8 global_exception_flag;
    kal_uint8 vpeid;
    kal_uint8 tcid;
} EX_INFO_T;

/*******************************************************************************
 * Data Structure Definition - FULL_OFFENDING_INFO for the 1st offender
 *******************************************************************************/
#define EX_STACK_DUMP_LEN 7
typedef struct _ex_full_offending_info_t
{
    EX_TC_REG_T             tc_info;
    EX_VPE_REG_T            vpe_info;
    EX_CORE_INFO_T          core_info;
    exception_enter_category  ex_enter_category;
    kal_uint8               pad[3];
    kal_uint32              stack_dump[EX_STACK_DUMP_LEN];
} EX_FULL_OFFENDING_INFO_T;

/*******************************************************************************
 * Data Structure Definition - VICTIM_INFO
 *******************************************************************************/
typedef struct _ex_victim_info_t
{
    kal_uint8               vpeid;
    kal_uint8               tcid;
    exception_enter_category  ex_enter_category;
    kal_uint8               global_exception_flag;
    kal_uint32              sst_exception_timestamp;
    kal_uint32              offendingPC;
    EX_CPU_REG_T            cpu_info;
} EX_VICTIM_INFO_T;

typedef struct _ex_ne_info_t
{
    exception_enter_category  ex_enter_category;
    kal_uint8               global_exception_flag;
    kal_uint32              sst_exception_timestamp;
    kal_uint32              offendingPC;
    EX_CPU_REG_T            cpu_info;
} EX_NE_INFO_T;

/*******************************************************************************
 * Data Structure Definition - Fatal Error in general
 *******************************************************************************/

#define EX_FATALERR_ANALYSIS_OWNER_LEN 8
#define EX_FATALERR_ANALYSIS_CORE_LEN  7
#define EX_FATALERR_DESCRIPTION_PARAM_LEN 16
#define EX_FATALERR_ANALYSIS_PARAM_LEN 40
#define EX_FATALERR_GUIDELINE_PARAM_LEN 16

typedef struct ex_fatalerror_code_t
{
    kal_uint32 code1;
    kal_uint32 code2;
    kal_uint32 code3;
} EX_FATALERR_CODE_T;

typedef struct ex_analysis_t
{
    kal_char    offender[EX_UNIT_NAME_LEN];
    kal_bool    is_cadefa_supported;
    kal_uint8   pad[7];

    // TODO: remove
    kal_uint32 trace;
    kal_uint8 param[EX_FATALERR_ANALYSIS_PARAM_LEN];
} EX_ANALYSIS_T;

typedef struct ex_description_t
{
    kal_uint32 trace;
    kal_uint8 param[EX_FATALERR_DESCRIPTION_PARAM_LEN];
} EX_DESCRIPTION_T;

typedef struct ex_guideline_t
{
    kal_uint32 trace;
    kal_uint8 param[EX_FATALERR_GUIDELINE_PARAM_LEN];
} EX_GUIDELINE_T;


/*******************************************************************************
 * Data Structure Definition - Fatal Error extended
 *******************************************************************************/

#define EX_CTRLBUFF_SRCFILE_LEN 32 /* filename */
typedef struct
{
    kal_char ex_his_owner[EX_UNIT_NAME_LEN];                        /* control buffer owner */
    kal_char ex_his_source[EX_CTRLBUFF_SRCFILE_LEN]; /* source file */
    kal_uint32 ex_his_line;                          /* line number */
    kal_uint32 ex_his_count;                         /* number of identical entries */
} EX_CTRLBUFF_HISTORY_T;

typedef struct
{
    kal_uint32 ex_buf_RTOS_header1;  /* NUCLEUS overhead 1, 0: allocated, else next pointer */
    kal_uint32 ex_buf_RTOS_header2;  /* NUCLEUS overhead 2, pointer to its control block */
    kal_uint32 ex_buf_KAL_header1; /* KAL overhead 1, header (0xF1F1F1F1) */
    kal_uint32 ex_buf_KAL_header2; /* KAL overhead 2, task ID */
    kal_uint32 ex_buf_KAL_header3; /* KAL overhead 3, pointer to its control block) */
    kal_uint32 ex_buf_poolID;      /* Buffer pointer */
    kal_uint32 ex_buf_KAL_footer1; /* KAL footer: 0xF2F2F2F2 */
    kal_uint32 ex_buf_KAL_footer2; /* KAL footer appended after size requested */
} EX_CTRLBUFF_COMMON_T;

typedef struct
{
    kal_char ex_buf_source[EX_CTRLBUFF_SRCFILE_LEN];  /* Source file name */
    kal_uint32 ex_buf_line;                           /* line number */
} EX_CTRLBUFF_OWNER_T;

typedef union
{
    EX_CTRLBUFF_HISTORY_T history; /* length: 32 */
    EX_CTRLBUFF_COMMON_T common;   /* length: 32 */
} EX_CTRLBUFF_INFO_T;

typedef struct
{
    kal_uint32 ex_ctrlbuf_size;           /* offset: +0x13C, length: 4 */   /* control buffer size per entry */
    kal_uint32 ex_ctrlbuf_num;            /* offset: +0x140, length: 4 */   /* total number of entries */
    EX_CTRLBUFF_INFO_T ex_ctrlbuf_top;    /* offset: +0x144, length: 32 */   /* top occupation history node */
    EX_CTRLBUFF_INFO_T ex_ctrlbuf_second; /* offset: +0x164, length: 32 */   /* second occupation history node */
    EX_CTRLBUFF_INFO_T ex_ctrlbuf_third;  /* offset: +0x184, length: 32 */   /* third occupation history node */
    EX_CTRLBUFF_OWNER_T ex_monitor[3];    /* offset: +0x1A4, length: 48 */
    kal_uint32 ex_reserved[2];            /* offset: +0x1D4, length: 16 */   /* reserved */
} EX_CTRLBUFF_T;

typedef struct
{
    module_type ex_his_module;  /* module ID */
    kal_uint8 ex_his_source[EX_UNIT_NAME_LEN]; /* timer name */
    kal_uint32 ex_his_hf;       /* es buffer handling function */
    kal_uint32 ex_his_count;    /* number of identical entries */
} EX_ESBUFF_HISTORY_T;

typedef struct
{
    kal_uint32 ex_esbuf_size;              /* offset: +0x13C, length: 4 */   /* event scheduler buffer size per entry */
    kal_uint32 ex_esbuf_num;               /* offset: +0x140, length: 4 */   /* total number of entries */
    EX_ESBUFF_HISTORY_T ex_esbuf_top;      /* offset: +0x144, length: 20 */   /* top occupation history node */
    EX_ESBUFF_HISTORY_T ex_esbuf_second;   /* offset: +0x158, length: 20 */   /* second occupation history node */
    EX_ESBUFF_HISTORY_T ex_esbuf_third;    /* offset: +0x16C, length: 20 */   /* third occupation history node */
} EX_ESBUFF_T;

typedef struct
{
    kal_uint16 ex_q_src_mod;        /* source module ID */
    kal_uint8 ex_q_count;           /* total number of identical message */
    kal_uint8 ex_q_config_entry;    /* total number of entries */
    kal_uint16 ex_q_msg_id;         /* message ID */
    kal_uint16 ex_q_cur_mes_no;     /* tatal number of messages left in queue */
} EX_QUEUE_T;

typedef struct
{
    kal_char ex_task_name[EX_UNIT_NAME_LEN];       /* task name */
    kal_char ex_task_stack_gp[8];     /* guard pattern:STACK_END */
    kal_uint32 ex_task_cur_status;    /* task current status, eg. RUNNING, READY etc */
    EX_QUEUE_T ex_task_external_q;    /* task external queue */
    EX_QUEUE_T ex_task_internal_q;    /* task internal queue */
    kal_uint32 ex_reserved;           /* reserved */
} EX_TASKINFO_T;



/*******************************************************************************
 * Constant Definition and Exported Type - Fatal Error
 *******************************************************************************/

#define EX_MAX_TASK_DUMP 4
#define EX_QUEUE_TRACK 20
typedef struct ex_fatalerror_t
{
    EX_FATALERR_CODE_T error_code;                 /* offset: +0x, length: */
    EX_ANALYSIS_T analysis;                        /* offset: +0x, length:  */

    union
    {
        EX_CTRLBUFF_T ctrl_buff;                   /* offset: +0x, length:  */
        EX_ESBUFF_T es_buff;                       /* offset: +0x, length: */
        EX_TASKINFO_T task_info[EX_MAX_TASK_DUMP]; /* offset: +0x, length:  */
    } info;

    kal_uint32  ext_queue_pending_cnt;
    kal_uint32  ext_queue_pending[EX_QUEUE_TRACK];
    EX_DESCRIPTION_T description;                  /* offset: +0x, length: */
    EX_GUIDELINE_T guideline;                      /* offset: +0x, length: */
} EX_FATALERR_T;

typedef struct ex_nested_fatalerror_t
{
    EX_FATALERR_CODE_T error_code;                 /* offset: +0x, length: */
} EX_NE_FATALERR_T;


/*******************************************************************************
 * Constant Definition and Exported Type - Assert Failure
 *******************************************************************************/
#define EX_HEADER_SIZE                sizeof(EX_HEADER_T)
#define EX_SWVER_LEN                  sizeof(EX_LOADINFO_T)
#define EX_ENVINFO_SIZE               sizeof(EX_ENVINFO_T)
#define EX_BASIC_OFFENDING_INFO_SIZE  sizeof(EX_BASIC_OFFENDING_INFO_T)
#define EX_FULL_OFFENDING_INFO_SIZE   sizeof(EX_FULL_OFFENDING_INFO_T)
#define EX_TOTAL_VICTIM_INFO_SIZE     ((sizeof(EX_VICTIM_INFO_T))*TOTAL_VICTIM_VPE_COUNT)

#define EX_ASSERTFAIL_FILEPATH_LEN 256
#define EX_ASSERTFAIL_FILENAME_LEN 64
#define EX_GUARD_LEN 4
#define EX_ASSERTFAIL_SIZE EX_ASSERTFAIL_FILEPATH_LEN + \
                           EX_ASSERTFAIL_FILENAME_LEN + \
                           sizeof(kal_uint32) * 4 + \
                           EX_GUARD_LEN


#define EX_ASSERTFAIL_DUMP_LEN  ((EX_LOG_SIZE - (EX_HEADER_SIZE + EX_SWVER_LEN + \
                                 EX_BASIC_OFFENDING_INFO_SIZE +  EX_ENVINFO_SIZE + \
                                 EX_FULL_OFFENDING_INFO_SIZE + \
                                 EX_ASSERTFAIL_SIZE + EX_TOTAL_VICTIM_INFO_SIZE)) & ~(4-1))


typedef struct ex_assert_fail_t
{
    kal_char filepath[EX_ASSERTFAIL_FILEPATH_LEN];
    kal_char filename[EX_ASSERTFAIL_FILENAME_LEN];  /* offset: +0xD8, length: 64 */
    kal_uint32 linenumber;                          /* offset: +0xF0, length: 4 */
    kal_uint32 parameters[3];                       /* offset: +0xF4, length: 12 */
    kal_uint8 dump[EX_ASSERTFAIL_DUMP_LEN];         /* offset: +0x100, length: 244 */
    kal_uint32 custom_param;                        /* offset: +0x1FC, length: 4 */
} EX_ASSERTFAIL_T;

typedef struct ex_nested_assert_fail_t
{
    kal_char filename[EX_ASSERTFAIL_FILENAME_LEN];  /* length: 64 */
    kal_uint32 linenumber;                          /* length: 4 */
} EX_NE_ASSERTFAIL_T;


/*******************************************************************************
 * Globally Exported Data Structure
 *******************************************************************************/
typedef union
{
    EX_FATALERR_T fatalerr;
    EX_ASSERTFAIL_T assert;
} EX_CONTENT_T;

typedef union
{
    EX_NE_FATALERR_T fatalerr;
    EX_NE_ASSERTFAIL_T assert;
} EX_NE_CONTENT_T;

/* Standard strutcure of an exception log */
typedef struct ex_exception_log_t
{
    EX_HEADER_T                  header;                          /* offset: +0x0 length: */
    EX_LOADINFO_T                load_info;                       /* offset: +0x, length: */
    EX_BASIC_OFFENDING_INFO_T    basic_info;
    EX_ENVINFO_T                 envinfo;                         /* offset: , length:  */
    EX_FULL_OFFENDING_INFO_T     full_info;
    EX_CONTENT_T                 content;                         /* offset: , length:  */
    EX_VICTIM_INFO_T             victim_info[TOTAL_VICTIM_VPE_COUNT];
} EX_LOG_T;

typedef struct ex_nested_exception_log_t
{
    exception_type ex_type;
    EX_NE_INFO_T   info;
    EX_NE_CONTENT_T content;
} EX_NE_LOG_T;

/* parameter to ex_init_log */
typedef struct
{
    exception_type type;
    kal_bool ext;
    kal_uint32 *code1;
    kal_uint32 *code2;
    kal_uint32 *code3;
    kal_uint32 e1;
    kal_uint32 e2;
    kal_uint32 e3;
    ASSERT_DUMP_PARAM_T *dump_param;
    kal_uint32 custom_param;
} EX_INIT_LOG_PARAM_T;

/*******************************************************************************
 * ELT nvram reading format
 *******************************************************************************/
/*==========================================*/
/* NOTE: The structure is frozen; offset of content should be FIXED. */
/*==========================================*/
/* TODO */


/***************************** -structure end- *******************************/
//PRAGMA_END_PACK_STRUCT
/*******************************************************************************
 * Globally Exported macro
 *******************************************************************************/
#define MACRO_PickLeftVal(left,right)   (left)

#define EX_LOG_DESCRIPTION_PARAM ex_log_ptr->content.fatalerr.description.param
#define EX_LOG_ANALYSIS_PARAM ex_log_ptr->content.fatalerr.analysis.param
#define EX_LOG_ANALYSIS_OWNER ex_log_ptr->content.fatalerr.analysis.offender
#define EX_LOG_ANALYSIS_CADEFA ex_log_ptr->content.fatalerr.analysis.is_cadefa_supported
#define EX_LOG_GUIDELINE_PARAM ex_log_ptr->content.fatalerr.guideline.param


/*******************************************************************************
 * Globally Exported Function Prorotype
 *******************************************************************************/

extern void ex_init_log();
extern kal_uint32 ex_get_corenum();
extern void ex_init_nested_log(kal_uint32 ex_category);
extern void ex_post_init_log();
extern void ex_define_main_reason();
extern void ex_save_log();
extern void ex_output_log(void);
extern kal_int8 ex_init_ctrl_buff_log(kal_uint32 *target_ptr, kal_uint32 code1, kal_uint32 code2, kal_char **offender_source_file_full_name);
extern kal_int8 ex_init_es_buff_log(kal_uint32 *target_ptr);
extern void ex_memory_dump_init(void);
extern void ex_output_loadinfo(kal_bool is_meta);
extern kal_bool ex_isNested(void);
extern kal_uint32* INT_GetExlog(void);
extern kal_bool ex_IsSupport_OnlineSST_For_GAT(kal_int32 code1);

#ifdef __MTK_TARGET__
extern void ex_reset_hw(void);
extern void ex_reboot(void);
extern void INT_ExceptionSwitchSystemSP(void);

extern void ex_init_step_logging(void);
extern void ex_set_step_logging(kal_uint16 start_step);
extern void ex_fire_extern_step_logging(kal_uint32 info);
extern kal_bool INT_IsAnyCore_Enter_Exception();
extern void INT_EnterExceptionForOtherCore();
extern kal_uint32 sst_get_main_exception_vpe(void);
extern kal_uint32 sst_get_main_exception_core(void);

extern kal_bool ex_init_pcmon();
extern kal_bool ex_init_nested_pcmon();
extern void ex_init_dsm();
extern void ex_hw_dump();
extern void ex_hw_data_save();
extern void KickWDT();
extern void ex_switchWDT_phase1();

#if defined(__TST_MODULE__)
extern void ex_reappear_log(void);
extern void ex_cadefa(kal_bool bypass_nested, kal_bool is_meta);
extern void ex_cadefa_common(kal_bool bypass_nested, kal_bool bLocalCore, EX_LOG_T * log_ptr);
extern void ex_output_for_meta(void);
#else
#define ex_reappear_log()
#define ex_cadefa(bypass_nested, kal_meta)
#define ex_cadefa_common(bypass_nested, bLocalCore, log_ptr)
#define ex_output_for_meta()
#endif /* __TST_MODULE__ */

#endif  /* __MTK_TARGET__ */

#ifdef __STACK_ALIGN_MPU__
kal_uint32 ex_stack_overflow_check_by_mpu(void);
#endif

extern kal_uint8 sst_increment_exception_count();
extern void ex_backup_exception_count();
/*******************************************************************************
 * Globally Exported variables
 *******************************************************************************/
extern EX_LOG_T *ex_log_ptr;
#if defined(__MTK_TARGET__)
extern kal_atomic_int32 SST_occupied_core_op_atomic[];
extern kal_uint32 sst_dc_offshoot_vpeid;
extern kal_uint32 sst_hw_offshoot_vpeid;
extern kal_uint32 INT_Exception_Type;
extern kal_uint32 sst_offending_coreid;
extern kal_uint32 sst_offending_vpeid;
extern kal_uint32 sst_offending_tcid;
extern kal_uint32 INT_Exception_GLBTS;
#endif /* __MTK_TARGET__ */
#endif /* _EX_ITEM_H */


