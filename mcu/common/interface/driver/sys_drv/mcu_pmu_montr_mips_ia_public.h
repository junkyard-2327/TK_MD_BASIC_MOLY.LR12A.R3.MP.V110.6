/*******************************************************************************
 *  Copyright Statement:
 *  --------------------
 *  This software is protected by Copyright and the information contained
 *  herein is confidential. The software may not be copied and the information
 *  contained herein may not be used or disclosed except with the written
 *  permission of MediaTek Inc. (C) 2016
 *
 ******************************************************************************/

/*******************************************************************************
 *
 * Filename:
 * ---------
 *   mcu_pmu_montr_mips_ia_public.h
 *
 * Project:
 * --------
 *   UMOLY
 *
 * Description:
 * ------------
 *   Header file general ARM core performance monitor API
 *
 * Author:
 * -------
 * -------
 *
 *==============================================================================
 *             HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
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
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *==============================================================================
 ******************************************************************************/

#ifndef MCU_PMU_MONTR_MIPS_IA_PUBLIC_H
#ifdef  __MTK_TARGET__
#ifdef  __MIPS_IA__
#define MCU_PMU_MONTR_MIPS_IA_PUBLIC_H

#include "kal_public_api.h"
#include "mips_ia_utils_public.h"

#define IAPMU_READ_CNT_ERROR_VAL    (0xffffffff)
#define IAPMU_PERFCNT_U             (MIU_PERFCNT_U)
#define IAPMU_PERFCNT_S             (MIU_PERFCNT_S)
#define IAPMU_PERFCNT_K             (MIU_PERFCNT_K)
#define IAPMU_PERFCNT_EXL           (MIU_PERFCNT_EXL)
#define IAPMU_PERFCNT_ALL           (IAPMU_PERFCNT_U | IAPMU_PERFCNT_S | IAPMU_PERFCNT_K | IAPMU_PERFCNT_EXL)
#define PERFCNT_ALL                 (IAPMU_PERFCNT_ALL)

/* Map IAPMU counter IDs to gereric PMU interface counter names.
 * Using of specific IAPMU naming is preferred for code clarity.
 *
 * Please note that counters are per TC and counter ID refers to a
 * specific counter on current TC. User must ensure that execution
 * does not migrate to other TC/VPE between counter is started and
 * stopped. */
typedef enum
{
    IAPMU_COUNTER_0     = PMU_EVENT_COUNTER_1,
    IAPMU_COUNTER_1     = PMU_EVENT_COUNTER_2,
    IAPMU_CYCLE_COUNTER = PMU_CYCLE_COUNTER
} IAPMU_MONITOR_COUNTER_TYPE;

/* Target of event counter */
typedef enum
{
    IAPMU_TARGET_ALL = 0, /* Count events on all TCs on all VPEs on current core. */
    IAPMU_TARGET_VPE = 1, /* Count events on all TCs on VPE specified by target ID on current core. */
    IAPMU_TARGET_TC  = 2, /* Count events on TC specified by target ID on current core. */
} IAPMU_MONITOR_TARGET_TYPE;

/* Event IDs per counter. Refer MIPS IA Software Users Manual for detailled descriptions. */
typedef enum
{
    /* Evenst available for IAPMU counter 0 */
    PMU_EVENT_C0_FIRST_EVENT = 0,
    PMU_EVENT_C0_CYCLES = PMU_EVENT_C0_FIRST_EVENT,
    PMU_EVENT_C0_INSTRUCTIONS_COMPLETED,
    PMU_EVENT_C0_BRANCH_INSTRUCTIONS,
    PMU_EVENT_C0_JR_R31_INSTRUCTIONS,
    PMU_EVENT_C0_JR_NOT_R31_INSTRUCTIONS,
    PMU_EVENT_C0_ITLB_ACCESSES,
    PMU_EVENT_C0_DTLB_ACCESSES,
    PMU_EVENT_C0_JTLB_INSTRUCTION_ACCESSES,
    PMU_EVENT_C0_JTLB_DATA_ACCESSES,
    PMU_EVENT_C0_INSTRUCTION_CACHE_ACCESSES,
    PMU_EVENT_C0_DATA_CACHE_ACCESSES,
    PMU_EVENT_C0_DATA_CACHE_MISSES,
    PMU_EVENT_C0_RESERVED1,
    PMU_EVENT_C0_STORE_MISSES,
    PMU_EVENT_C0_INTEGER_INSTRUCTIONS_COMPLETED,
    PMU_EVENT_C0_LOADS_COMPLETED,
    PMU_EVENT_C0_J_JAL_COMPLETED,
    PMU_EVENT_C0_NO_OPS_COMPLETED,
    PMU_EVENT_C0_STALL_CYCLES,
    PMU_EVENT_C0_SC_INSTRUCTIONS_COMPLETED,
    PMU_EVENT_C0_PREFETCH_INSTRUCTIONS_COMPLETED,
    PMU_EVENT_C0_L2_CACHE_WRITEBACKS,
    PMU_EVENT_C0_L2_CACHE_MISSES,
    PMU_EVENT_C0_EXCEPTIONS_TAKEN,
    PMU_EVENT_C0_CACHE_FIXUP,
    PMU_EVENT_C0_IFU_STALL_CYCLES,
    PMU_EVENT_C0_DSP_INSTRUCTIONS_COMPLETED,
    PMU_EVENT_C0_RESERVED2,
    PMU_EVENT_C0_IMPL_SPECIFIC_PM_EVENT,
    PMU_EVENT_C0_IMPL_SPECIFIC_ISPRAM_EVENT,
    PMU_EVENT_C0_IMPL_SPECIFIC_COREXTEND_EVENT,
    PMU_EVENT_C0_IMPL_SPECIFIC_XYM_EVENT,
    PMU_EVENT_C0_ITC_LOADS,
    PMU_EVENT_C0_UNCACHED_LOADS,
    PMU_EVENT_C0_FORK_INSTRUCTIONS_COMPLETED,
    PMU_EVENT_C0_CP2_ARITHMETIC_INSTNS_COMPLETED,
    PMU_EVENT_C0_INTERVENTION_STALL_MAIN_PIPE,
    PMU_EVENT_C0_I_MISS_STALL_CYCLES,
    PMU_EVENT_C0_SYNC_STALL_CYCLES,
    PMU_EVENT_C0_D_MISS_CYCLES,
    PMU_EVENT_C0_UNCACHED_STALL_CYCLES,
    PMU_EVENT_C0_MDU_STALL_CYCLES,
    PMU_EVENT_C0_CP2_STALL_CYCLES,
    PMU_EVENT_C0_ISPRAM_STALL_CYCLES,
    PMU_EVENT_C0_CACHE_INSTN_STALL_CYCLES,
    PMU_EVENT_C0_LOAD_TO_USE_STALL_CYCLES,
    PMU_EVENT_C0_OTHER_INTERLOCK_STALL_CYCLES,
    PMU_EVENT_C0_RELAX_BUBBLES,
    PMU_EVENT_C0_IFU_FB_FULL_REFETCHES,
    PMU_EVENT_C0_EJTAG_INSTRUCTION_TRIGGERPOINTS,
    PMU_EVENT_C0_FSB_LESS_THAN_1_4_FULL,
    PMU_EVENT_C0_FSB_MORE_THAN_1_2_FULL,
    PMU_EVENT_C0_LDQ_LESS_THAN_1_4_FULL,
    PMU_EVENT_C0_LDQ_MORE_THAN_1_2_FULL,
    PMU_EVENT_C0_WBB_LESS_THAN_1_4_FULL,
    PMU_EVENT_C0_WBB_MORE_THAN_1_2_FULL,
    PMU_EVENT_C0_INTERVENTION_HITS,
    PMU_EVENT_C0_ALL_INVALIDATES,
    PMU_EVENT_C0_EVICTIONS,
    PMU_EVENT_C0_ST_INVAL,
    PMU_EVENT_C0_ST_STORE_TO_S,
    PMU_EVENT_C0_REQUEST_LATENCY_TO_SELF_INTERVENTION,
    PMU_EVENT_C0_REQUEST_LATENCY_TO_READ_RESPONSE,
    PMU_EVENT_C0_RESERVED3,
    PMU_EVENT_C0_SYSTEM_SPECIFIC_EVENT_0,
    PMU_EVENT_C0_SYSTEM_SPECIFIC_EVENT_2,
    PMU_EVENT_C0_SYSTEM_SPECIFIC_EVENT_4,
    PMU_EVENT_C0_SYSTEM_SPECIFIC_EVENT_6,
    PMU_EVENT_C0_LAST_EVENT = 127,

    /* Evenst available for IAPMU counter 1 */
    /* Actual event id is <enum ID> - PMU_EVENT_C1_FIRST_EVENT */
    PMU_EVENT_C1_FIRST_EVENT = 128,
    PMU_EVENT_C1_CYCLES = PMU_EVENT_C1_FIRST_EVENT,
    PMU_EVENT_C1_INSTRUCTIONS_COMPLETED,
    PMU_EVENT_C1_BRANCH_MISPREDICTIONS,
    PMU_EVENT_C1_JR_R31_MISPREDICTIONS,
    PMU_EVENT_C1_JR_R31_NOT_PREDICTED,
    PMU_EVENT_C1_ITLB_MISSES,
    PMU_EVENT_C1_DTLB_MISSES,
    PMU_EVENT_C1_JTLB_INSTRUCTION_MISSES,
    PMU_EVENT_C1_JTLB_DATA_MISSES,
    PMU_EVENT_C1_INSTRUCTION_CACHE_MISSES,
    PMU_EVENT_C1_DATA_CACHE_WRITEBACKS,
    PMU_EVENT_C1_DATA_CACHE_MISSES,
    PMU_EVENT_C1_RESERVED4,
    PMU_EVENT_C1_LOAD_MISSES,
    PMU_EVENT_C1_FPU_INSTRUCTIONS_COMPLETED,
    PMU_EVENT_C1_STORES_COMPLETED,
    PMU_EVENT_C1_MIPS16_INSTRUCTIONS_COMPLETED,
    PMU_EVENT_C1_INTEGER_MULTIPLY_DIVIDE_COMPLETED,
    PMU_EVENT_C1_REPLAY_TRAPS_OTHER_THAN_UTLB,
    PMU_EVENT_C1_SC_INSTRUCTIONS_FAILED,
    PMU_EVENT_C1_PREFETCH_INSTRUCTIONS_COMPLETED_WITH_CACHE_HIT,
    PMU_EVENT_C1_L2_CACHE_ACCESSES,
    PMU_EVENT_C1_L2_CACHE_SINGLE_BIT_ERRORS_CORRECTED,
    PMU_EVENT_C1_SINGLE_THREADED_MODE,
    PMU_EVENT_C1_REFETCHES,
    PMU_EVENT_C1_ALU_STALL_CYCLES,
    PMU_EVENT_C1_ALU_DSP_SATURATIONS_DONE,
    PMU_EVENT_C1_MDU_DSP_SATURATIONS_DONE,
    PMU_EVENT_C1_IMPL_SPECIFIC_CP2_EVENT,
    PMU_EVENT_C1_IMPL_SPECIFIC_DSPRAM_EVENT,
    PMU_EVENT_C1_RESERVED5,
    PMU_EVENT_C1_IMPL_SPECIFIC_ITC_EVENT,
    PMU_EVENT_C1_ITC_STORES,
    PMU_EVENT_C1_UNCACHED_STORES,
    PMU_EVENT_C1_YIELD_INSTRUCTION_COMPLETED,
    PMU_EVENT_C1_CP2_TO_FROM_INSTNS_COMPLETED,
    PMU_EVENT_C1_INTERVENTION_RESPONSE_STALLED_ON_MISS,
    PMU_EVENT_C1_D_MISS_STALL_CYCLES,
    PMU_EVENT_C1_FSB_STALL_CYCLES,
    PMU_EVENT_C1_L2_MISS_CYCLES,
    PMU_EVENT_C1_ITC_STALL_CYCLES,
    PMU_EVENT_C1_FPU_STALL_CYCLES,
    PMU_EVENT_C1_COREXTEND_STALL_CYCLES,
    PMU_EVENT_C1_DSPRAM_STALL_CYCLES,
    PMU_EVENT_C1_LONG_STALL_CYCLES,
    PMU_EVENT_C1_ALU_TO_AGEN_STALLS_CYCLES,
    PMU_EVENT_C1_BRANCH_MISPREDICT_STALL_CYCLES,
    PMU_EVENT_C1_NUMBER_OF_CORRECTED_ECC_ERRORS_IN_THE_L1_DATA_CACHE_OR_DSPRAM,
    PMU_EVENT_C1_FB_ENTRY_ALLOCATED,
    PMU_EVENT_C1_EJTAG_DATA_TRIGGERPOINTS,
    PMU_EVENT_C1_FSB_1_4_TO_1_2_FULL,
    PMU_EVENT_C1_FSB_FULL_PIPELINE_STALL_CYCLES,
    PMU_EVENT_C1_LDQ_1_4_TO_1_2_FULL,
    PMU_EVENT_C1_LDQ_FULL_PIPELINE_STALL_CYCLES,
    PMU_EVENT_C1_WBB_1_4_TO_1_2_FULL,
    PMU_EVENT_C1_WBB_FULL_PIPELINE_STALL_CYCLES,
    PMU_EVENT_C1_ALL_INTERVENTIONS,
    PMU_EVENT_C1_INVALIDATE_HITS,
    PMU_EVENT_C1_WRITEBACKS,
    PMU_EVENT_C1_ST_EXCLUSIVE,
    PMU_EVENT_C1_ST_DOWNGRADE,
    PMU_EVENT_C1_REQUEST_COUNT_FOR_SI_LATENCY,
    PMU_EVENT_C1_REQUEST_COUNT_FOR_RESP_LATENCY_P,
    PMU_EVENT_C1_RESERVED6,
    PMU_EVENT_C1_SYSTEM_SPECIFIC_EVENT_1,
    PMU_EVENT_C1_SYSTEM_SPECIFIC_EVENT_3,
    PMU_EVENT_C1_SYSTEM_SPECIFIC_EVENT_5,
    PMU_EVENT_C1_SYSTEM_SPECIFIC_EVENT_7,
    PMU_EVENT_C1_LAST_EVENT = 255
} IAPMU_MONITOR_EVENT_TYPE;

typedef enum {
    MIPS_IAPMU_USER_SWLA,
    MIPS_IAPMU_USER_EL1BD,
    MIPS_IAPMU_USER_SYS,
    MIPS_IAPMU_USER_NR
} MIPS_IA_PMU_USER_E;

extern const MIPS_IA_PMU_USER_E IAPMU_get_current_sw_cfg(void);

/* [TC] force pmu function to m32 since some of them using mttc0/mftc0 */
#if !defined(GEN_FOR_PC) && defined(__MTK_TARGET__)
# if defined(__MIPS16__)
#  if defined(__GNUC__)
#   define MIPSIA_PMU_FUNC_ISA_TYPE __attribute__((nomips16))
#  endif
# endif
#endif

#ifndef MIPSIA_PMU_FUNC_ISA_TYPE
# define MIPSIA_PMU_FUNC_ISA_TYPE
#endif

MIPSIA_PMU_FUNC_ISA_TYPE extern const kal_uint32 IAPMU_SWLA_StartCounter (kal_uint32 cnts);
MIPSIA_PMU_FUNC_ISA_TYPE extern const kal_uint32 IAPMU_SWLA_StopCounter (kal_uint32 cnts);
MIPSIA_PMU_FUNC_ISA_TYPE extern const kal_uint32 IAPMU_SWLA_ResetCounter (kal_uint32 cnts);
MIPSIA_PMU_FUNC_ISA_TYPE extern const kal_uint32 IAPMU_SWLA_ReadCounter (IAPMU_MONITOR_COUNTER_TYPE cnt, kal_uint32 *val);
MIPSIA_PMU_FUNC_ISA_TYPE extern const kal_uint32 IAPMU_SWLA_SetEvent (IAPMU_MONITOR_COUNTER_TYPE cnt, IAPMU_MONITOR_EVENT_TYPE event, kal_uint32 target_id, IAPMU_MONITOR_TARGET_TYPE target_type, kal_uint32 context_mask);

MIPSIA_PMU_FUNC_ISA_TYPE extern const kal_uint32 IAPMU_SWLA_StartCounterTC (kal_uint32 cnts, kal_uint32 target_tc_mask);
MIPSIA_PMU_FUNC_ISA_TYPE extern const kal_uint32 IAPMU_SWLA_StopCounterTC (kal_uint32 cnts, kal_uint32 target_tc_mask);
MIPSIA_PMU_FUNC_ISA_TYPE extern const kal_uint32 IAPMU_SWLA_ResetCounterTC (kal_uint32 cnts, kal_uint32 target_tc_mask);
MIPSIA_PMU_FUNC_ISA_TYPE extern const kal_uint32 IAPMU_SWLA_ReadCounterTC (IAPMU_MONITOR_COUNTER_TYPE cnt, kal_uint32 target_tc, kal_uint32 *val);
MIPSIA_PMU_FUNC_ISA_TYPE extern const kal_uint32 IAPMU_SWLA_SetEventTC (IAPMU_MONITOR_COUNTER_TYPE cnt, IAPMU_MONITOR_EVENT_TYPE event, kal_uint32 target_tc, kal_uint32 target_id, IAPMU_MONITOR_TARGET_TYPE target_type, kal_uint32 context_mask);

MIPSIA_PMU_FUNC_ISA_TYPE extern const kal_uint32 IAPMU_EL1BD_StartCounter (kal_uint32 cnts);
MIPSIA_PMU_FUNC_ISA_TYPE extern const kal_uint32 IAPMU_EL1BD_StopCounter (kal_uint32 cnts);
MIPSIA_PMU_FUNC_ISA_TYPE extern const kal_uint32 IAPMU_EL1BD_ResetCounter (kal_uint32 cnts);
MIPSIA_PMU_FUNC_ISA_TYPE extern const kal_uint32 IAPMU_EL1BD_ReadCounter (IAPMU_MONITOR_COUNTER_TYPE cnt, kal_uint32 *val);
MIPSIA_PMU_FUNC_ISA_TYPE extern const kal_uint32 IAPMU_EL1BD_SetEvent (IAPMU_MONITOR_COUNTER_TYPE cnt, IAPMU_MONITOR_EVENT_TYPE event, kal_uint32 target_id, IAPMU_MONITOR_TARGET_TYPE target_type, kal_uint32 context_mask);

MIPSIA_PMU_FUNC_ISA_TYPE extern const kal_uint32 IAPMU_SYS_StartCounter (kal_uint32 cnts);
MIPSIA_PMU_FUNC_ISA_TYPE extern const kal_uint32 IAPMU_SYS_StopCounter (kal_uint32 cnts);
MIPSIA_PMU_FUNC_ISA_TYPE extern const kal_uint32 IAPMU_SYS_ResetCounter (kal_uint32 cnts);
MIPSIA_PMU_FUNC_ISA_TYPE extern const kal_uint32 IAPMU_SYS_ReadCounter (IAPMU_MONITOR_COUNTER_TYPE cnt, kal_uint32 *val);
MIPSIA_PMU_FUNC_ISA_TYPE extern const kal_uint32 IAPMU_SYS_SetEvent (IAPMU_MONITOR_COUNTER_TYPE cnt, IAPMU_MONITOR_EVENT_TYPE event, kal_uint32 target_id, IAPMU_MONITOR_TARGET_TYPE target_type, kal_uint32 context_mask);

MIPSIA_PMU_FUNC_ISA_TYPE extern const kal_uint32 IAPMU_SYS_StartCounterTC (kal_uint32 cnts, kal_uint32 target_tc_mask);
MIPSIA_PMU_FUNC_ISA_TYPE extern const kal_uint32 IAPMU_SYS_StopCounterTC (kal_uint32 cnts, kal_uint32 target_tc_mask);
MIPSIA_PMU_FUNC_ISA_TYPE extern const kal_uint32 IAPMU_SYS_ResetCounterTC (kal_uint32 cnts, kal_uint32 target_tc_mask);
MIPSIA_PMU_FUNC_ISA_TYPE extern const kal_uint32 IAPMU_SYS_ReadCounterTC (IAPMU_MONITOR_COUNTER_TYPE cnt, kal_uint32 target_tc, kal_uint32 *val);
MIPSIA_PMU_FUNC_ISA_TYPE extern const kal_uint32 IAPMU_SYS_SetEventTC (IAPMU_MONITOR_COUNTER_TYPE cnt, IAPMU_MONITOR_EVENT_TYPE event, kal_uint32 target_tc, kal_uint32 target_id, IAPMU_MONITOR_TARGET_TYPE target_type, kal_uint32 context_mask);

#endif  /* __MIPS_IA__ */
#endif  /* __MTK_TARGET__ */
#endif  /* MCU_PMU_MONTR_MIPS_IA_PUBLIC_H */
