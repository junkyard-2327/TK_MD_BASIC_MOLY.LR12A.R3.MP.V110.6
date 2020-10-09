/*****************************************************************************
 *  Copyright Statement:
 *  --------------------
 *  This software is protected by Copyright and the information contained
 *  herein is confidential. The software may not be copied and the information
 *  contained herein may not be used or disclosed except with the written
 *  permission of MediaTek Inc. (C) 2001
 *
 *****************************************************************************/

/*****************************************************************************
 *
 * Filename:
 * ---------
 *   mcu_pmu_montr.h
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description:
 * ------------
 *   Header file general ARM core performance monitor API
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
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/
#ifndef _MCU_PMU_MONTR_H
#define _MCU_PMU_MONTR_H
#include "kal_general_types.h"
#include "mcu_pmu_montr_public.h"

// API Lists:
/*
void MCU_PMU_Initialize(void);
Initialize PMU, also reset all counters
Can only be called once after boot-up

void MCU_PMU_CycleCountDivide(kal_bool en);
Set cycle counter as 64-cycle unit

void MCU_PMU_SetEvent(kal_uint32 counter, PMU_MONITOR_EVENT_TYPE event);
Set event counter #(counter) to log certain event

void MCU_PMU_StartCounter(kal_uint32 start_counter);
General start counter API, ex: MCU_PMU_StartCounter(PMU_EVENT_COUNTER_1|PMU_EVENT_COUNTER_2|PMU_CYCLE_COUNTER);

void MCU_PMU_StopCounter(kal_uint32 stop_counters);
General stop counter API, ex: MCU_PMU_StopCounter(PMU_EVENT_COUNTER_1|PMU_EVENT_COUNTER_2|PMU_CYCLE_COUNTER);

kal_uint32 MCU_PMU_ReadCounter(kal_uint32 counter);
Read counter API, read one counter at a time ex: value = MCU_PMU_ReadCounter(PMU_CYCLE_COUNTER);

kal_uint32 MCU_PMU_ResetCounter(kal_uint32 counter);
Reet counter API, reset one counter at a time ex: MCU_PMU_ResetCounter(PMU_CYCLE_COUNTER);

*/

#if defined(__MIPS_IA__)

# include "mips_ia_pmu_montr.h"

# define PMU_EVENT_COUNTER_NUM     2

# define MCU_PMU_Initialize()              do {} while(0)
# define MCU_PMU_CycleCountDivide(en)      ASSERT(0)

/* IAPMU specific parameters can be encoded to the event parameter.
 * If only event ID is used, this defaults to target ID 0 and
 * target type 0 -> all TCs on all VPEs on current core */
# define MCU_PMU_SetEvent(counter, event)  IAPMU_SYS_SetEvent(counter, \
    (event >>  0) & 0xffff, /* Bits: 0..15 event ID    */\
    (event >> 16) & 0x00ff, /*      16..23 target ID   */\
    (event >> 24) & 0x00ff, /*      24..31 target type */\
    (PERFCNT_U | PERFCNT_S | PERFCNT_K | PERFCNT_EXL))
# define MCU_PMU_ReadCounter(counter)      ({       \
        /* Statements  Expressions */               \
        kal_uint32 tmp;                             \
        /* workaround for some current user */      \
        if (counter == IAPMU_CYCLE_COUNTER)         \
            tmp = IAPMU_read_cycle_counter();       \
        else                                        \
            IAPMU_SYS_ReadCounter(counter, &tmp);   \
        tmp;                                        \
    })

# define MCU_PMU_StartCounter(counter)     IAPMU_SYS_StartCounter(counter)
# define MCU_PMU_StopCounter(counter)      IAPMU_SYS_StopCounter(counter)
# define MCU_PMU_ResetCounter(counter)     IAPMU_SYS_ResetCounter(counter)

#else
# define PMU_EVENT_COUNTER_NUM     0

# define MCU_PMU_Initialize()              ASSERT(0)
# define MCU_PMU_CycleCountDivide(en)      ASSERT(0)
# define MCU_PMU_SetEvent(counter, event)  ASSERT(0)
# define MCU_PMU_StartCounter(counter)     ASSERT(0)
# define MCU_PMU_StopCounter(counter)      ASSERT(0)
# define MCU_PMU_ReadCounter(counter)      ASSERT(0)
# define MCU_PMU_ResetCounter(counter)     ASSERT(0)
#endif

#endif /* _MCU_PMU_MONTR_H */
