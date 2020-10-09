/*******************************************************************************
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
 ******************************************************************************/

/*******************************************************************************
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
 *
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
 *==============================================================================
 ******************************************************************************/

#if defined(__MTK_TARGET__)
#if defined(__MIPS_IA__)

#include "kal_public_api.h"
#include "mcu_pmu_montr.h"

#include "boot.h"
#include "cps.h"
#include "sync_data.h"
#include "kal_internal_api.h"
#include "us_timer.h"
#include "kal_iram_section_defs.h"

#define IAPMU_CTL_SET(c, v)                                 \
    do {                                                    \
        c == IAPMU_COUNTER_0 ? IAPMU_COUNTER0_CTL_SET(v) :  \
                               IAPMU_COUNTER1_CTL_SET(v);   \
    } while(0)

#define IAPMU_CNT_SET(c, v)                                 \
    do {                                                    \
        c == IAPMU_COUNTER_0 ? IAPMU_COUNTER0_CNT_SET(v) :  \
                               IAPMU_COUNTER1_CNT_SET(v);   \
    } while(0)

#define IAPMU_CTL_GET(c)                                    \
    (c == IAPMU_COUNTER_0 ? IAPMU_COUNTER0_CTL_GET() :      \
                            IAPMU_COUNTER1_CTL_GET())

#define IAPMU_CNT_GET(c)                                    \
    (c == IAPMU_COUNTER_0 ? IAPMU_COUNTER0_CNT_GET() :      \
                            IAPMU_COUNTER1_CNT_GET())

#if !defined(CONFIG_MIPS_IA_MR2)
/* use L2SRAM in MR1 (Gen-92) */
# define IAPMU_DEF_FUNC_SECTION(__NAME__)                   \
    __attribute__(( section("L2SRAM_L2C_ROCODE") ))
#else
# define IAPMU_DEF_FUNC_SECTION(__NAME__)
#endif

#define STATIC_INLINE\
    __attribute__((always_inline)) MIPSIA_PMU_FUNC_ISA_TYPE static

/* State and configuration of event counters for each TC */
/* Counter index 0 is reserved. Indexes 1 and 2 are used to enable
 * easy logical operations for multi counter masks. */
static iapmu_counter_s iapmu_counter[16][3] = {{{CNTR_INVALID, 0},
                                                {CNTR_STOPPED, 0},
                                                {CNTR_STOPPED, 0}},
                                               {{CNTR_INVALID, 0},
                                                {CNTR_STOPPED, 0},
                                                {CNTR_STOPPED, 0}},
                                               {{CNTR_INVALID, 0},
                                                {CNTR_STOPPED, 0},
                                                {CNTR_STOPPED, 0}},
                                               {{CNTR_INVALID, 0},
                                                {CNTR_STOPPED, 0},
                                                {CNTR_STOPPED, 0}},
                                               {{CNTR_INVALID, 0},
                                                {CNTR_STOPPED, 0},
                                                {CNTR_STOPPED, 0}},
                                               {{CNTR_INVALID, 0},
                                                {CNTR_STOPPED, 0},
                                                {CNTR_STOPPED, 0}},
                                               {{CNTR_INVALID, 0},
                                                {CNTR_STOPPED, 0},
                                                {CNTR_STOPPED, 0}},
                                               {{CNTR_INVALID, 0},
                                                {CNTR_STOPPED, 0},
                                                {CNTR_STOPPED, 0}},
                                               {{CNTR_INVALID, 0},
                                                {CNTR_STOPPED, 0},
                                                {CNTR_STOPPED, 0}},
                                               {{CNTR_INVALID, 0},
                                                {CNTR_STOPPED, 0},
                                                {CNTR_STOPPED, 0}},
                                               {{CNTR_INVALID, 0},
                                                {CNTR_STOPPED, 0},
                                                {CNTR_STOPPED, 0}},
                                               {{CNTR_INVALID, 0},
                                                {CNTR_STOPPED, 0},
                                                {CNTR_STOPPED, 0}},
                                               {{CNTR_INVALID, 0},
                                                {CNTR_STOPPED, 0},
                                                {CNTR_STOPPED, 0}},
                                               {{CNTR_INVALID, 0},
                                                {CNTR_STOPPED, 0},
                                                {CNTR_STOPPED, 0}},
                                               {{CNTR_INVALID, 0},
                                                {CNTR_STOPPED, 0},
                                                {CNTR_STOPPED, 0}},
                                               {{CNTR_INVALID, 0},
                                                {CNTR_STOPPED, 0},
                                                {CNTR_STOPPED, 0}}};

/* Function interface. Has more overhead from sanity checking. */
STATIC_INLINE void IAPMU_StartCounter(kal_uint32 counters);
STATIC_INLINE void IAPMU_StartCounterTC(kal_uint32 counters, kal_uint32 target_tc_mask);
STATIC_INLINE void IAPMU_StopCounter(kal_uint32 counters);
STATIC_INLINE void IAPMU_StopCounterTC(kal_uint32 counters, kal_uint32 target_tc_mask);
STATIC_INLINE void IAPMU_ResetCounter(kal_uint32 counters);
STATIC_INLINE void IAPMU_ResetCounterTC(kal_uint32 counters, kal_uint32 target_tc_mask);
STATIC_INLINE kal_uint32 IAPMU_ReadCounter(IAPMU_MONITOR_COUNTER_TYPE counter);
STATIC_INLINE kal_uint32 IAPMU_ReadCounterTC(IAPMU_MONITOR_COUNTER_TYPE counter, kal_uint32 target_tc);
STATIC_INLINE void IAPMU_SetEvent(IAPMU_MONITOR_COUNTER_TYPE counter,
                    IAPMU_MONITOR_EVENT_TYPE event,
                    kal_uint32 target_id,
                    IAPMU_MONITOR_TARGET_TYPE target_type,
                    kal_uint32 context_mask);
STATIC_INLINE void IAPMU_SetEventTC(IAPMU_MONITOR_COUNTER_TYPE counter,
                      IAPMU_MONITOR_EVENT_TYPE event,
                      kal_uint32 target_tc,
                      kal_uint32 target_id,
                      IAPMU_MONITOR_TARGET_TYPE target_type,
                      kal_uint32 context_mask);


static kal_uint32 CM2_counter_0;
static kal_uint32 CM2_counter_1;
/******************************************************
 *                                                    *
 *                 Cross TC PMU API                   *
 *                                                    *
 *  This API can be used to control PMU counters of   *
 *  other TCs on same core.                           *
 ******************************************************/
STATIC_INLINE void IAPMU_StartCounter_other_tc(kal_uint32 counters, kal_uint32 tc_id)
{
    kal_uint32 core_id = kal_get_current_core_id();

    ASSERT((counters & (~(IAPMU_COUNTER_0 | IAPMU_COUNTER_1))) == 0);

    if (counters & IAPMU_COUNTER_0) {
        ASSERT(kal_atomic_swap_return(&iapmu_counter[tc_id + (core_id << 2)][IAPMU_COUNTER_0].status, (kal_uint32)CNTR_RUNNING) == CNTR_STOPPED);
        IAPMU_COUNTER0_CTL_SET_OTHER(iapmu_counter[tc_id + (core_id << 2)][IAPMU_COUNTER_0].config, tc_id);
    }
    if (counters & IAPMU_COUNTER_1) {
        ASSERT(kal_atomic_swap_return(&iapmu_counter[tc_id + (core_id << 2)][IAPMU_COUNTER_1].status, (kal_uint32)CNTR_RUNNING) == CNTR_STOPPED);
        IAPMU_COUNTER1_CTL_SET_OTHER(iapmu_counter[tc_id + (core_id << 2)][IAPMU_COUNTER_1].config, tc_id);
    }
}

STATIC_INLINE void IAPMU_StopCounter_other_tc(kal_uint32 counters, kal_uint32 tc_id)
{
    kal_uint32 core_id = kal_get_current_core_id();

    ASSERT((counters & (~(IAPMU_COUNTER_0 | IAPMU_COUNTER_1))) == 0);

    if (counters & IAPMU_COUNTER_0) {
        IAPMU_COUNTER0_CTL_SET_OTHER(0, tc_id);
        iapmu_counter[tc_id + (core_id << 2)][IAPMU_COUNTER_0].status = CNTR_STOPPED;
    }
    if (counters & IAPMU_COUNTER_1) {
        IAPMU_COUNTER1_CTL_SET_OTHER(0, tc_id);
        iapmu_counter[tc_id + (core_id << 2)][IAPMU_COUNTER_1].status = CNTR_STOPPED;
    }

}

STATIC_INLINE kal_uint32 IAPMU_ReadCounter_other_tc(IAPMU_MONITOR_COUNTER_TYPE counter, kal_uint32 tc_id)
{
    if (counter == IAPMU_CYCLE_COUNTER) {
        return IAPMU_COUNT_GET_OTHER(tc_id) << 1;
    } else if (counter == IAPMU_COUNTER_0) {
        return IAPMU_COUNTER0_CNT_GET_OTHER(tc_id);
    } else if (counter == IAPMU_COUNTER_1) {
        return IAPMU_COUNTER1_CNT_GET_OTHER(tc_id);
    } else {
        ASSERT(0);
    }
    return IAPMU_READ_CNT_ERROR_VAL;
}

STATIC_INLINE void IAPMU_ResetCounter_other_tc(kal_uint32 counters, kal_uint32 tc_id)
{
    ASSERT((counters & (~(IAPMU_COUNTER_0 | IAPMU_COUNTER_1 | IAPMU_CYCLE_COUNTER))) == 0);
    if (counters & IAPMU_CYCLE_COUNTER) {
        IAPMU_COUNT_SET_OTHER(0, tc_id);
    }
    if (counters & IAPMU_COUNTER_0) {
        IAPMU_COUNTER0_CNT_SET_OTHER(0, tc_id);
    }
    if (counters & IAPMU_COUNTER_1) {
        IAPMU_COUNTER1_CNT_SET_OTHER(0, tc_id);
    }
}

/*******************************************************************************
 * FUNCTION
 *  IAPMU_StartCounter
 *
 * DESCRIPTION
 *  This function starts PMU counter. Counters will be marked as taken on current TC.
 * CALLS
 *
 * CALL BY
 *
 * PARAMETERS
 *  kal_uint32: Counters that are to be started. Cycle counter can't be started.
 *
 * RETURNS
 *  None
 *
 ******************************************************************************/
STATIC_INLINE void IAPMU_StartCounter(kal_uint32 counters)
{
    kal_uint32 tc_id = kal_get_current_tc_id();
    kal_uint32 core_id = kal_get_current_core_id();

    ASSERT((counters & (~(IAPMU_COUNTER_0 | IAPMU_COUNTER_1))) == 0);

    if (counters & IAPMU_COUNTER_0) {
        ASSERT(kal_atomic_swap_return(&iapmu_counter[tc_id + (core_id << 2)][IAPMU_COUNTER_0].status, (kal_uint32)CNTR_RUNNING) == CNTR_STOPPED);
        IAPMU_COUNTER0_CTL_SET(iapmu_counter[tc_id + (core_id << 2)][IAPMU_COUNTER_0].config);
    }
    if (counters & IAPMU_COUNTER_1) {
        ASSERT(kal_atomic_swap_return(&iapmu_counter[tc_id + (core_id << 2)][IAPMU_COUNTER_1].status, (kal_uint32)CNTR_RUNNING) == CNTR_STOPPED);
        IAPMU_COUNTER1_CTL_SET(iapmu_counter[tc_id + (core_id << 2)][IAPMU_COUNTER_1].config);
    }
}

/*******************************************************************************
 * Cross TC version
 * Parameter target_tc_mask: bitmask of TCs to start this counter.
 *                           Each bit position (0..3) maps to TC id (0..3)
 ******************************************************************************/
STATIC_INLINE void IAPMU_StartCounterTC(kal_uint32 counters, kal_uint32 target_tc_mask)
{
    kal_uint32 tc_idx;
    kal_uint32 current_tc = kal_get_current_tc_id();

    for (tc_idx = 0; tc_idx < 4; tc_idx++) {
        if (target_tc_mask & (1 << tc_idx)) {
            if (tc_idx == current_tc) {
                IAPMU_StartCounter(counters);
            } else {
                IAPMU_StartCounter_other_tc(counters, tc_idx);
            }
        }
    }
}

/*******************************************************************************
 * FUNCTION
 *  IAPMU_StopCounter
 *
 * DESCRIPTION
 *  This function starts PMU counter. Counter will be marked as free on current TC..
 *
 * CALLS
 *
 * CALL BY
 *
 * PARAMETERS
 *  kal_uint32: Counter number that is to be stopped. Cycle counter can't be stopped.
 *
 * RETURNS
 *  None
 *
 ******************************************************************************/
STATIC_INLINE void IAPMU_StopCounter(kal_uint32 counters)
{
    kal_uint32 tc_id = kal_get_current_tc_id();
    kal_uint32 core_id = kal_get_current_core_id();

    ASSERT((counters & (~(IAPMU_COUNTER_0 | IAPMU_COUNTER_1))) == 0);

    if (counters & IAPMU_COUNTER_0) {
        IAPMU_COUNTER0_CTL_SET(0);
        iapmu_counter[tc_id + (core_id << 2)][IAPMU_COUNTER_0].status = CNTR_STOPPED;
    }
    if (counters & IAPMU_COUNTER_1) {
        IAPMU_COUNTER1_CTL_SET(0);
        iapmu_counter[tc_id + (core_id << 2)][IAPMU_COUNTER_1].status = CNTR_STOPPED;
    }
}

/*******************************************************************************
 * Cross TC version
 * Parameter target_tc_mask: bitmask of TCs to stop this counter.
 *                           Each bit position (0..3) maps to TC id (0..3)
 ******************************************************************************/
STATIC_INLINE void IAPMU_StopCounterTC(kal_uint32 counters, kal_uint32 target_tc_mask)
{
    kal_uint32 tc_idx;
    kal_uint32 current_tc = kal_get_current_tc_id();

    for (tc_idx = 0; tc_idx < 4; tc_idx++) {
        if (target_tc_mask & (1 << tc_idx)) {
            if (tc_idx == current_tc) {
                IAPMU_StopCounter(counters);
            } else {
                IAPMU_StopCounter_other_tc(counters, tc_idx);
            }
        }
    }
}

/******************************************************************************
 * FUNCTION
 *  IAPMU_ResetCounter
 *
 * DESCRIPTION
 *  This function reset one PMU counter on current TC
 *
 * CALLS
 *
 * CALL BY
 *
 * PARAMETERS
 *  kal_uint32: Counters that are to be reset
 *
 * RETURNS
 *  None
 *
 ******************************************************************************/
STATIC_INLINE void IAPMU_ResetCounter(kal_uint32 counters)
{
    ASSERT((counters & (~(IAPMU_COUNTER_0 | IAPMU_COUNTER_1 | IAPMU_CYCLE_COUNTER))) == 0);
    if (counters & IAPMU_CYCLE_COUNTER) {
        IAPMU_CP0_COUNT_SET(0);
    }
    if (counters & IAPMU_COUNTER_0) {
        IAPMU_COUNTER0_CNT_SET(0);
    }
    if (counters & IAPMU_COUNTER_1) {
        IAPMU_COUNTER1_CNT_SET(0);
    }
}

/*******************************************************************************
 * Cross TC version
 * Parameter target_tc_mask: bitmask of TCs to reset this counter.
 *                           Each bit position (0..3) maps to TC id (0..3)
 ******************************************************************************/
STATIC_INLINE void IAPMU_ResetCounterTC(kal_uint32 counters, kal_uint32 target_tc_mask)
{
    kal_uint32 tc_idx;
    kal_uint32 current_tc = kal_get_current_tc_id();

    for (tc_idx = 0; tc_idx < 4; tc_idx++) {
        if (target_tc_mask & (1 << tc_idx)) {
            if (tc_idx == current_tc) {
                IAPMU_ResetCounter(counters);
            } else {
                IAPMU_ResetCounter_other_tc(counters, tc_idx);
            }
        }
    }
}

/*******************************************************************************
 * FUNCTION
 *  IAPMU_ReadCounter
 *
 * DESCRIPTION
 *  This function reads PMU counter value on current TC
 *
 * CALLS
 *
 * CALL BY
 *
 * PARAMETERS
 *  PMU_MONITOR_COUNTER_TYPE: Counter number that is to be read
 *
 * RETURNS
 *  None
 *
 ******************************************************************************/
STATIC_INLINE kal_uint32 IAPMU_ReadCounter(IAPMU_MONITOR_COUNTER_TYPE counter)
{
    if (counter == IAPMU_CYCLE_COUNTER) {
        return miu_cycle_counter_read();
    } else if (counter == IAPMU_COUNTER_0 || counter == IAPMU_COUNTER_1) {
        return IAPMU_CNT_GET(counter);
    } else {
        ASSERT(0);
    }
    return IAPMU_READ_CNT_ERROR_VAL;
}

/*******************************************************************************
 * Cross TC version
 * Parameter target_tc: TC id of the TC whose counter is to be read (0..3)
 ******************************************************************************/
STATIC_INLINE kal_uint32 IAPMU_ReadCounterTC(IAPMU_MONITOR_COUNTER_TYPE counter, kal_uint32 target_tc)
{
    kal_uint32 current_tc = kal_get_current_tc_id();
    if (current_tc == target_tc) {
        return IAPMU_ReadCounter(counter);
    } else {
        return IAPMU_ReadCounter_other_tc(counter, target_tc);
    }
}

/*******************************************************************************
 * FUNCTION
 *  IAPMU_SetEvent
 *
 * DESCRIPTION
 *  This function set event for target counter. Counter must be in stopped state.
 *
 * CALLS
 *
 * CALL BY
 *
 * PARAMETERS
 *  PMU_MONITOR_COUNTER_TYPE:  Counter number to be configure
 *  PMU_MONITOR_EVENT_TYPE:    The event to be logged
 *  kal_uint32:    target to count events from (TC id or VPE id):
 *                           TC id  : 0..3
 *                           VPE id : 0 or 1
 *  PMU_MONITOR_TARGET_TYPE:   Type of target id (IAPMU_TARGET_VPE, IAPMU_TARGET_TC, or IAPMU_TARGET_ALL)
 *  kal_uint32:    Bit mask for the coutner context, any combination can be set. Bits are:
 *                           IAPMU_PERFCNT_U   : events counted in USER mode
 *                           IAPMU_PERFCNT_S   : events counted in SUPERVISOR mode
 *                           IAPMU_PERFCNT_K   : events counted in KERNEL mode
 *                           IAPMU_PERFCNT_EXL : events counted when EXL = 1 and ELR = 0
 *                           IAPMU_PERFCNT_ALL : all of the above
 *
 * RETURNS
 *  None
 *
 ******************************************************************************/
STATIC_INLINE void IAPMU_SetEvent(IAPMU_MONITOR_COUNTER_TYPE counter,
                    IAPMU_MONITOR_EVENT_TYPE event,
                    kal_uint32 target_id,
                    IAPMU_MONITOR_TARGET_TYPE target_type,
                    kal_uint32 context_mask)
{
    kal_uint32 target_tc = kal_get_current_tc_id();
    IAPMU_SetEventTC(counter, event, target_tc, target_id, target_type, context_mask);
}

/*******************************************************************************
 * Cross TC version
 * Parameter target_tc: TC id oof the TC whose counter is to be set (0..3)
 ******************************************************************************/
STATIC_INLINE void IAPMU_SetEventTC(IAPMU_MONITOR_COUNTER_TYPE counter,
                      IAPMU_MONITOR_EVENT_TYPE event,
                      kal_uint32 target_tc,
                      kal_uint32 target_id,
                      IAPMU_MONITOR_TARGET_TYPE target_type,
                      kal_uint32 context_mask)
{
    kal_uint32 counter_ctrl = 0;
    kal_uint32 core_id = kal_get_current_core_id();

    if (counter == IAPMU_COUNTER_0) {
        ASSERT(event >= PMU_EVENT_C0_FIRST_EVENT && event <= PMU_EVENT_C0_LAST_EVENT);
    } else if (counter == IAPMU_COUNTER_1) {
        ASSERT(event >= PMU_EVENT_C1_FIRST_EVENT && event <= PMU_EVENT_C1_LAST_EVENT);
        event -= PMU_EVENT_C1_FIRST_EVENT;
    } else {
       ASSERT(0);
    }

    ASSERT(iapmu_counter[target_tc + (core_id << 2)][counter].status == CNTR_STOPPED);

    counter_ctrl = (event << MIU_PERFCNT_EVENT_SHIFT) & MIU_PERFCNT_EVENT_MASK;

    if (target_type == IAPMU_TARGET_VPE) {
        counter_ctrl |= (target_id << PERFCNT_VPEID_SHIFT) & PERFCNT_VPEID_MASK;
    } else if (target_type == IAPMU_TARGET_TC) {
        counter_ctrl |= (target_id << PERFCNT_TCID_SHIFT) & PERFCNT_TCID_MASK;
    } else if (target_type != IAPMU_TARGET_ALL) {
        ASSERT(0);
    }

    counter_ctrl |= (target_type << PERFCNT_MT_EN_SHIFT) & PERFCNT_MT_EN_MASK;

    ASSERT((context_mask & (~(IAPMU_PERFCNT_ALL))) == 0);
    counter_ctrl |= context_mask;

    iapmu_counter[target_tc + (core_id << 2)][counter].config = counter_ctrl;
}

/* declare again */
#define  GEN_MIPS_IAPMU_DECLARATION SWLA
#define  GEN_MIPS_IAPMU_ST_API_PROTOTYPE
#define  GEN_MIPS_IAPMU_TC_API_PROTOTYPE
#include "mips_ia_pmu_gen_fn.h"

#define  GEN_MIPS_IAPMU_DECLARATION EL1BD
#define  GEN_MIPS_IAPMU_ST_API_PROTOTYPE
#include "mips_ia_pmu_gen_fn.h"

#define  GEN_MIPS_IAPMU_DECLARATION SYS
#define  GEN_MIPS_IAPMU_ST_API_PROTOTYPE
#define  GEN_MIPS_IAPMU_TC_API_PROTOTYPE
#include "mips_ia_pmu_gen_fn.h"

/* generate implementation by configuration */
#if defined(IAPMU_ENABLE_PUBLIC_API_FOR_SWLA)
# define    GEN_MIPS_IAPMU_DUMMY_IMP            EL1BD
# define    GEN_MIPS_IAPMU_DUMMY_IMP_SECTION(F) IAPMU_DEF_FUNC_SECTION(F)
# define    GEN_MIPS_IAPMU_ST_API_PROTOTYPE
# include   "mips_ia_pmu_gen_fn.h"
# define    GEN_MIPS_IAPMU_DEF_IMP              SWLA
# define    GEN_MIPS_IAPMU_DEF_IMP_SECTION(F)   IAPMU_DEF_FUNC_SECTION(F)
# define    GEN_MIPS_IAPMU_ST_API_PROTOTYPE
# define    GEN_MIPS_IAPMU_TC_API_PROTOTYPE
# include   "mips_ia_pmu_gen_fn.h"
# define    GEN_MIPS_IAPMU_DUMMY_IMP            SYS
# define    GEN_MIPS_IAPMU_DUMMY_IMP_SECTION(F) IAPMU_DEF_FUNC_SECTION(F)
# define    GEN_MIPS_IAPMU_ST_API_PROTOTYPE
# define    GEN_MIPS_IAPMU_TC_API_PROTOTYPE
# include   "mips_ia_pmu_gen_fn.h"
#elif defined(IAPMU_ENABLE_PUBLIC_API_FOR_EL1BD)
# define    GEN_MIPS_IAPMU_DEF_IMP              EL1BD
# define    GEN_MIPS_IAPMU_DEF_IMP_SECTION(F)   IAPMU_DEF_FUNC_SECTION(F)
# define    GEN_MIPS_IAPMU_ST_API_PROTOTYPE
# include   "mips_ia_pmu_gen_fn.h"
# define    GEN_MIPS_IAPMU_DUMMY_IMP            SWLA
# define    GEN_MIPS_IAPMU_DUMMY_IMP_SECTION(F) IAPMU_DEF_FUNC_SECTION(F)
# define    GEN_MIPS_IAPMU_ST_API_PROTOTYPE
# define    GEN_MIPS_IAPMU_TC_API_PROTOTYPE
# include   "mips_ia_pmu_gen_fn.h"
# define    GEN_MIPS_IAPMU_DUMMY_IMP            SYS
# define    GEN_MIPS_IAPMU_DUMMY_IMP_SECTION(F) IAPMU_DEF_FUNC_SECTION(F)
# define    GEN_MIPS_IAPMU_ST_API_PROTOTYPE
# define    GEN_MIPS_IAPMU_TC_API_PROTOTYPE
# include   "mips_ia_pmu_gen_fn.h"
#elif defined(IAPMU_ENABLE_PUBLIC_API_FOR_SYS)
# define    GEN_MIPS_IAPMU_DUMMY_IMP            EL1BD
# define    GEN_MIPS_IAPMU_DUMMY_IMP_SECTION(F) IAPMU_DEF_FUNC_SECTION(F)
# define    GEN_MIPS_IAPMU_ST_API_PROTOTYPE
# include   "mips_ia_pmu_gen_fn.h"
# define    GEN_MIPS_IAPMU_DUMMY_IMP            SWLA
# define    GEN_MIPS_IAPMU_DUMMY_IMP_SECTION(F) IAPMU_DEF_FUNC_SECTION(F)
# define    GEN_MIPS_IAPMU_ST_API_PROTOTYPE
# define    GEN_MIPS_IAPMU_TC_API_PROTOTYPE
# include   "mips_ia_pmu_gen_fn.h"
# define    GEN_MIPS_IAPMU_DEF_IMP              SYS
# define    GEN_MIPS_IAPMU_DEF_IMP_SECTION(F)   IAPMU_DEF_FUNC_SECTION(F)
# define    GEN_MIPS_IAPMU_ST_API_PROTOTYPE
# define    GEN_MIPS_IAPMU_TC_API_PROTOTYPE
# include   "mips_ia_pmu_gen_fn.h"
#else
# define    GEN_MIPS_IAPMU_DUMMY_IMP            EL1BD
# define    GEN_MIPS_IAPMU_DUMMY_IMP_SECTION(F) IAPMU_DEF_FUNC_SECTION(F)
# define    GEN_MIPS_IAPMU_ST_API_PROTOTYPE
# include   "mips_ia_pmu_gen_fn.h"
# define    GEN_MIPS_IAPMU_DUMMY_IMP            SWLA
# define    GEN_MIPS_IAPMU_DUMMY_IMP_SECTION(F) IAPMU_DEF_FUNC_SECTION(F)
# define    GEN_MIPS_IAPMU_ST_API_PROTOTYPE
# define    GEN_MIPS_IAPMU_TC_API_PROTOTYPE
# include   "mips_ia_pmu_gen_fn.h"
# define    GEN_MIPS_IAPMU_DEF_IMP              SYS
# define    GEN_MIPS_IAPMU_DEF_IMP_SECTION(F)   IAPMU_DEF_FUNC_SECTION(F)
# define    GEN_MIPS_IAPMU_ST_API_PROTOTYPE
# define    GEN_MIPS_IAPMU_TC_API_PROTOTYPE
# include   "mips_ia_pmu_gen_fn.h"
#endif

/* runtime configuration checking */
const MIPS_IA_PMU_USER_E IAPMU_get_current_sw_cfg(void)
{
#if defined(IAPMU_ENABLE_PUBLIC_API_FOR_SWLA)
    return MIPS_IAPMU_USER_SWLA;
#elif defined(IAPMU_ENABLE_PUBLIC_API_FOR_EL1BD)
    return MIPS_IAPMU_USER_EL1BD;
#else
    return MIPS_IAPMU_USER_SYS;
#endif
}

const kal_uint32 IAPMU_read_cycle_counter(void)
{
    return miu_cycle_counter_read();
}

/******************************************************
 *                                                    *
 *          CM Debug Control Block interface          *
 *                                                    *
 * NOTE: CM Debug Control Block registers are shared  *
 *       between all Cores/VPEs/TCs in the system and *
 *       user must ensure safe usage! To reduce       *
 *       overhead this driver does not provide any    *
 *       protection against race conditions.          *
 ******************************************************/

#define IAPMU_CM_DB_READ(c)        (*((volatile kal_uint32*)(GCR_CONFIG_ADDR + GLOBAL_DEBUG_BLOCK + c)))
#define IAPMU_CM_DB_WRITE(c, v)    (IAPMU_CM_DB_READ(c) = v)

static iapmu_cm_counter_s iapmu_cm_counter_event[2];
static iapmu_cm_dor_reg_s iapmu_cm_dor_reg;

IAPMU_DEF_FUNC_SECTION(IAPMU_CM_StartCounter)
void IAPMU_CM_StartCounter(kal_uint32 counters)
{
    kal_uint32 event;

    ASSERT((counters & (~(IAPMU_CM_COUNTER_0 | IAPMU_CM_COUNTER_1 | IAPMU_CM_CYCLE_COUNTER))) == 0);

    event = IAPMU_CM_DB_READ(GCR_DB_PC_EVENT);

    if (counters & IAPMU_CM_COUNTER_0) {
        event = (event & 0xffffff00) | iapmu_cm_counter_event[0].event;
        IAPMU_CM_DB_WRITE(GCR_DB_PC_QUAL0, iapmu_cm_counter_event[0].qualifier);
    }
    if (counters & IAPMU_CM_COUNTER_1) {
        event = (event & 0xffff00ff) | (iapmu_cm_counter_event[1].event << 8);
        IAPMU_CM_DB_WRITE(GCR_DB_PC_QUAL1, iapmu_cm_counter_event[1].qualifier);
    }

    IAPMU_CM_DB_WRITE(GCR_DB_PC_EVENT, event);
    IAPMU_CM_DB_WRITE(GCR_DB_PC_CTL, (IAPMU_CM_DB_READ(GCR_DB_PC_CTL) | counters));
    MM_Sync();
}

IAPMU_DEF_FUNC_SECTION(IAPMU_CM_StopCounter)
void IAPMU_CM_StopCounter(kal_uint32 counters)
{
    ASSERT((counters & (~(IAPMU_CM_COUNTER_0 | IAPMU_CM_COUNTER_1 | IAPMU_CM_CYCLE_COUNTER))) == 0);

    IAPMU_CM_DB_WRITE(GCR_DB_PC_CTL, (IAPMU_CM_DB_READ(GCR_DB_PC_CTL) & (~counters)));
    MM_Sync();
}

IAPMU_DEF_FUNC_SECTION(IAPMU_CM_SetEvent)
void IAPMU_CM_SetEvent(kal_uint32 counter, IAPMU_CM_MONITOR_EVENT_TYPE event, kal_uint32 qualifier)
{
    if (counter == IAPMU_CM_COUNTER_0) {
        iapmu_cm_counter_event[0].event = event;
        iapmu_cm_counter_event[0].qualifier = qualifier;
    } else if (counter == IAPMU_CM_COUNTER_1) {
        iapmu_cm_counter_event[1].event = event;
        iapmu_cm_counter_event[1].qualifier = qualifier;
    } else {
        ASSERT(0);
    }
}


kal_uint8* IAPMU_CM_ReadCounter0_ASM(void)
{
    CM2_counter_0 = IAPMU_CM_DB_READ(GCR_DB_PC_CNT0);
    return (kal_uint8 *)&CM2_counter_0;
}

kal_uint8* IAPMU_CM_ReadCounter1_ASM(void)
{
    CM2_counter_1 = IAPMU_CM_DB_READ(GCR_DB_PC_CNT1);
    return (kal_uint8 *)&CM2_counter_1;

}

#if defined(GEN93_MDMCU_SYSTEM_IMPROVEMENT_FOR_LOW_POWER)
void IAPMU_CM_ReadCounters_SWmode(kal_uint32 *buff)
{
    register kal_uint32 cnt0 = 0, cnt1 = 0; 

    cnt0 = IAPMU_CM_DB_READ(GCR_DB_PC_CNT0);
    cnt1 = IAPMU_CM_DB_READ(GCR_DB_PC_CNT1);

    buff[0] = cnt0;
    buff[1] = cnt1;
}
#endif 

IAPMU_DEF_FUNC_SECTION(IAPMU_CM_ReadCounter)
kal_uint32 IAPMU_CM_ReadCounter(IAPMU_CM_MONITOR_COUNTER_TYPE counter)
{
    if (counter == IAPMU_CM_CYCLE_COUNTER) {
        return IAPMU_CM_DB_READ(GCR_DB_PC_CYCLE);
    } else if (counter == IAPMU_CM_COUNTER_0) {
        return IAPMU_CM_DB_READ(GCR_DB_PC_CNT0);
    } else if (counter == IAPMU_CM_COUNTER_1) {
        return IAPMU_CM_DB_READ(GCR_DB_PC_CNT1);
    } else {
        ASSERT(0);
    }
    return IAPMU_READ_CNT_ERROR_VAL;
}

IAPMU_DEF_FUNC_SECTION(IAPMU_CM_ResetCounter)
void IAPMU_CM_ResetCounter(kal_uint32 counters)
{
    ASSERT((counters & (~(IAPMU_CM_COUNTER_0 | IAPMU_CM_COUNTER_1 | IAPMU_CM_CYCLE_COUNTER))) == 0);

    IAPMU_CM_DB_WRITE(GCR_DB_PC_CTL, (IAPMU_CM_DB_READ(GCR_DB_PC_CTL) | (counters << 1)));
    MM_Sync();
}

IAPMU_DEF_FUNC_SECTION(IAPMU_CM_Init)
void IAPMU_CM_Init(const kal_uint32 vpe_id)
{
    if(0 == vpe_id) {
        /* PMU setting to profile UC/UCA transactions on MO */
        IAPMU_CM_Config(IAPMU_CM_COUNTER_0, PMU_CM_EVENT_REQUEST_COUNT, 0xFF47C001);
        IAPMU_CM_Config(IAPMU_CM_COUNTER_1, PMU_CM_EVENT_L2_HIT, 0x000C79FF);
        IAPMU_CM_StartCounter(IAPMU_CM_COUNTER_0 | IAPMU_CM_COUNTER_1 | IAPMU_CM_CYCLE_COUNTER);
    }
}

IAPMU_DEF_FUNC_SECTION(IAPMU_CM_Config)
void IAPMU_CM_Config(IAPMU_CM_MONITOR_COUNTER_TYPE counter, IAPMU_CM_MONITOR_EVENT_TYPE event, kal_uint32 qualifier)
{
    if(counter == IAPMU_CM_COUNTER_0 || counter == IAPMU_CM_COUNTER_1 || counter == IAPMU_CM_CYCLE_COUNTER){
        IAPMU_CM_StopCounter(counter);
        IAPMU_CM_ResetCounter(counter);
        if(counter != IAPMU_CM_CYCLE_COUNTER){
            IAPMU_CM_SetEvent(counter, event, qualifier);      
        }
        IAPMU_CM_StartCounter(counter);
    }
}
IAPMU_DEF_FUNC_SECTION(IAPMU_CM_Dor_Save)
void IAPMU_CM_Dor_Save(const kal_uint32 vpe_id)
{   
    if(0 == vpe_id){
        iapmu_cm_dor_reg.iapmu_cm_overflow_status     = IAPMU_CM_DB_READ(GCR_DB_PC_OV);
        iapmu_cm_dor_reg.iapmu_cm_event_select        = IAPMU_CM_DB_READ(GCR_DB_PC_EVENT);
        iapmu_cm_dor_reg.iapmu_cm_cycle_counter       = IAPMU_CM_DB_READ(GCR_DB_PC_CYCLE);
        iapmu_cm_dor_reg.iapmu_cm_counter_0_qualifier = IAPMU_CM_DB_READ(GCR_DB_PC_QUAL0);
        iapmu_cm_dor_reg.iapmu_cm_counter_0           = IAPMU_CM_DB_READ(GCR_DB_PC_CNT0);
        iapmu_cm_dor_reg.iapmu_cm_counter_1_qualifier = IAPMU_CM_DB_READ(GCR_DB_PC_QUAL1);
        iapmu_cm_dor_reg.iapmu_cm_counter_1           = IAPMU_CM_DB_READ(GCR_DB_PC_CNT1);
        iapmu_cm_dor_reg.iapmu_cm_counter_control     = IAPMU_CM_DB_READ(GCR_DB_PC_CTL);  
    }
}
IAPMU_DEF_FUNC_SECTION(IAPMU_CM_Dor_Restore)
void IAPMU_CM_Dor_Restore(const kal_uint32 vpe_id)
{
    if(0 == vpe_id){
        IAPMU_CM_DB_WRITE(GCR_DB_PC_OV,    iapmu_cm_dor_reg.iapmu_cm_overflow_status);
        IAPMU_CM_DB_WRITE(GCR_DB_PC_EVENT, iapmu_cm_dor_reg.iapmu_cm_event_select);
        IAPMU_CM_DB_WRITE(GCR_DB_PC_CYCLE, iapmu_cm_dor_reg.iapmu_cm_cycle_counter);
        IAPMU_CM_DB_WRITE(GCR_DB_PC_QUAL0, iapmu_cm_dor_reg.iapmu_cm_counter_0_qualifier);
        IAPMU_CM_DB_WRITE(GCR_DB_PC_CNT0,  iapmu_cm_dor_reg.iapmu_cm_counter_0);
        IAPMU_CM_DB_WRITE(GCR_DB_PC_QUAL1, iapmu_cm_dor_reg.iapmu_cm_counter_1_qualifier);
        IAPMU_CM_DB_WRITE(GCR_DB_PC_CNT1,  iapmu_cm_dor_reg.iapmu_cm_counter_1);
        IAPMU_CM_DB_WRITE(GCR_DB_PC_CTL,   iapmu_cm_dor_reg.iapmu_cm_counter_control);
    }
}


#define LOGGING_MAX_CONTEXT 32
#define MAX_LOG_VPE_NUM 8
#define MAX_INFO_NUM 5
#define THREAD_IS_HISR (0x80000000)
//#define PROFILE_API_OVERHEAD
#ifdef PROFILE_API_OVERHEAD
__L2SRAM_L2CACHED_ALIGNED_ZI(4) kal_uint32 pf_api_time[MAX_LOG_VPE_NUM][LOGGING_MAX_CONTEXT];
__L2SRAM_L2CACHED_ALIGNED_ZI(4) kal_uint32 pf_api_time_LISR[MAX_LOG_VPE_NUM][LOGGING_MAX_CONTEXT];
#endif

#if !defined(GEN93_MDMCU_SYSTEM_IMPROVEMENT_FOR_LOW_POWER)
kal_atomic_uint32 Logging_Context_Index[MAX_LOG_VPE_NUM];
kal_uint32 IAPMU_CM_Logging_Buf[MAX_LOG_VPE_NUM][LOGGING_MAX_CONTEXT][MAX_INFO_NUM];

IAPMU_DEF_FUNC_SECTION(IAPMU_CM_Logging)
void IAPMU_CM_Logging(kal_uint8 VPEID)
{

#ifdef PROFILE_API_OVERHEAD
    kal_uint32 temp_time, temp_time2;
    temp_time = IAPMU_CM_ReadCounter(IAPMU_CM_CYCLE_COUNTER);
#endif
    kal_uint32 ring_buf_index, ThreadID;

    if(IAPMU_CM_DB_READ(GCR_DB_PC_OV)!= 0) {
        //IAPMU_CM_StartCounter(IAPMU_CM_COUNTER_0 | IAPMU_CM_COUNTER_1 | IAPMU_CM_CYCLE_COUNTER);
        IAPMU_CM_ResetCounter(IAPMU_CM_COUNTER_0 | IAPMU_CM_COUNTER_1 | IAPMU_CM_CYCLE_COUNTER);
    }

    if((((TC_TCB*) TCD_Current_Thread) -> tc_id) == TC_HISR_ID) {
        ThreadID = ((kal_internal_hisrid)TCD_Current_Thread) -> hisr_index | THREAD_IS_HISR;
    } else {
        ThreadID = ((kal_internal_taskid)TCD_Current_Thread) -> task_index;
    }

    ring_buf_index = kal_atomic_inc_circular_index(&Logging_Context_Index[VPEID], LOGGING_MAX_CONTEXT);
    IAPMU_CM_Logging_Buf[VPEID][ring_buf_index][0] = ust_get_current_time();
    IAPMU_CM_Logging_Buf[VPEID][ring_buf_index][1] = ThreadID; /* non LISR logging*/
    IAPMU_CM_Logging_Buf[VPEID][ring_buf_index][2] = IAPMU_CM_ReadCounter(IAPMU_CM_COUNTER_0);
#if 0
/* under construction !*/
#endif
    IAPMU_CM_Logging_Buf[VPEID][ring_buf_index][4] = IAPMU_CM_ReadCounter(IAPMU_CM_CYCLE_COUNTER);
#ifdef PROFILE_API_OVERHEAD
    temp_time2 = IAPMU_CM_ReadCounter(IAPMU_CM_CYCLE_COUNTER);
    if(temp_time2 > temp_time)
        pf_api_time[VPEID][ring_buf_index] = temp_time2 - temp_time;
#endif

}

IAPMU_DEF_FUNC_SECTION(IAPMU_CM_Logging_LISR)
void IAPMU_CM_Logging_LISR(kal_uint32 ID, kal_uint8 VPEID)
{
#ifdef PROFILE_API_OVERHEAD
    kal_uint32 temp_time, temp_time2;
    temp_time = IAPMU_CM_ReadCounter(IAPMU_CM_CYCLE_COUNTER);
#endif
    kal_uint32 ring_buf_index;

    if(IAPMU_CM_DB_READ(GCR_DB_PC_OV)!= 0) {
        //IAPMU_CM_StartCounter(IAPMU_CM_COUNTER_0 | IAPMU_CM_COUNTER_1 | IAPMU_CM_CYCLE_COUNTER);
        IAPMU_CM_ResetCounter(IAPMU_CM_COUNTER_0 | IAPMU_CM_COUNTER_1 | IAPMU_CM_CYCLE_COUNTER);
    }
    ring_buf_index = kal_atomic_inc_circular_index(&Logging_Context_Index[VPEID], LOGGING_MAX_CONTEXT);
    IAPMU_CM_Logging_Buf[VPEID][ring_buf_index][0] = ust_get_current_time();
    IAPMU_CM_Logging_Buf[VPEID][ring_buf_index][1] = ID;
    IAPMU_CM_Logging_Buf[VPEID][ring_buf_index][2] = IAPMU_CM_ReadCounter(IAPMU_CM_COUNTER_0);
#if 0
/* under construction !*/
#endif
    IAPMU_CM_Logging_Buf[VPEID][ring_buf_index][4] = IAPMU_CM_ReadCounter(IAPMU_CM_CYCLE_COUNTER);
#ifdef PROFILE_API_OVERHEAD
    temp_time2 = IAPMU_CM_ReadCounter(IAPMU_CM_CYCLE_COUNTER);
    if(temp_time2 > temp_time)
        pf_api_time[VPEID][ring_buf_index] = temp_time2 - temp_time;
#endif
}
#endif 


#endif /* __MIPS_IA__ */
#endif /* __MTK_TARGET__ */

