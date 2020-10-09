/*****************************************************************************
 *  Copyright Statement:
 *  --------------------
 *  This software is protected by Copyright and the information contained
 *  herein is confidential. The software may not be copied and the information
 *  contained herein may not be used or disclosed except with the written
 *  permission of MediaTek Inc. (C) 2016
 *
 *****************************************************************************/

/*****************************************************************************
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
 * removed!
 *
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/
#ifndef __MIPS_IA_PMU_MONTR_H
#define __MIPS_IA_PMU_MONTR_H
#if defined(__MTK_TARGET__)
#if defined(__MIPS_IA__)

#include "mcu_pmu_montr_public.h"
#include "mips_ia_utils_public.h"

#define PERFCNT_VPEID_SHIFT 16
#define PERFCNT_VPEID_MASK  0x000F0000
#define PERFCNT_TCID_SHIFT  22
#define PERFCNT_TCID_MASK   0x03C00000
#define PERFCNT_MT_EN_SHIFT 20
#define PERFCNT_MT_EN_MASK  0x00300000

#ifndef PMU_EVENT_COUNTER_1
#define PMU_EVENT_COUNTER_1 0x00000001
#endif
#ifndef PMU_EVENT_COUNTER_2
#define PMU_EVENT_COUNTER_2 0x00000002
#endif
#ifndef PMU_CYCLE_COUNTER
#define PMU_CYCLE_COUNTER   0x80000000
#endif

#define IAPMU_CP0_COUNT_SET(v)      miu_mtc0(MIU_C0_COUNT, v)

#define IAPMU_COUNTER0_CTL_SET(v)   miu_mtc0(MIU_C0_PERFCTL0, v)
#define IAPMU_COUNTER0_CNT_SET(v)   miu_mtc0(MIU_C0_PERFCNT0, v)
#define IAPMU_COUNTER1_CTL_SET(v)   miu_mtc0(MIU_C0_PERFCTL1, v)
#define IAPMU_COUNTER1_CNT_SET(v)   miu_mtc0(MIU_C0_PERFCNT1, v)

#define IAPMU_COUNTER0_CTL_GET()    miu_mfc0(MIU_C0_PERFCTL0)
#define IAPMU_COUNTER0_CNT_GET()    miu_mfc0(MIU_C0_PERFCNT0)
#define IAPMU_COUNTER1_CTL_GET()    miu_mfc0(MIU_C0_PERFCTL1)
#define IAPMU_COUNTER1_CNT_GET()    miu_mfc0(MIU_C0_PERFCNT1)

#define IAPMU_C0_CTL_SET_OTHER(v, tc, reg_sel)                  \
    do {                                                        \
        register kal_uint32 old_target = miu_mt_settarget(tc);  \
        miu_mttc0(reg_sel, v);                                  \
        miu_mt_settarget(old_target);                           \
    } while(0)

#define IAPMU_C0_CTL_GET_OTHER(tc, reg_sel)                     \
    __extension__ ({                                            \
        register kal_uint32 __tmp;                              \
        register kal_uint32 old_target = miu_mt_settarget(tc);  \
        __tmp = miu_mftc0(reg_sel);                             \
        miu_mt_settarget(old_target);                           \
        __tmp;                                                  \
    })

#define IAPMU_COUNTER0_CTL_SET_OTHER(v, tc)                     \
        IAPMU_C0_CTL_SET_OTHER(v, tc, MIU_C0_PERFCTL0)

#define IAPMU_COUNTER0_CNT_SET_OTHER(v, tc)                     \
        IAPMU_C0_CTL_SET_OTHER(v, tc, MIU_C0_PERFCNT0)

#define IAPMU_COUNTER1_CTL_SET_OTHER(v, tc)                     \
        IAPMU_C0_CTL_SET_OTHER(v, tc, MIU_C0_PERFCTL1)

#define IAPMU_COUNTER1_CNT_SET_OTHER(v, tc)                     \
        IAPMU_C0_CTL_SET_OTHER(v, tc, MIU_C0_PERFCNT1)

#define IAPMU_COUNTER0_CTL_GET_OTHER(tc)                        \
        IAPMU_C0_CTL_GET_OTHER(tc, MIU_C0_PERFCTL0)

#define IAPMU_COUNTER0_CNT_GET_OTHER(tc)                        \
        IAPMU_C0_CTL_GET_OTHER(tc, MIU_C0_PERFCNT0)

#define IAPMU_COUNTER1_CTL_GET_OTHER(tc)                        \
        IAPMU_C0_CTL_GET_OTHER(tc, MIU_C0_PERFCTL1)

#define IAPMU_COUNTER1_CNT_GET_OTHER(tc)                        \
        IAPMU_C0_CTL_GET_OTHER(tc, MIU_C0_PERFCNT1)

#define IAPMU_COUNT_GET_OTHER(tc)                               \
        IAPMU_C0_CTL_GET_OTHER(tc, MIU_C0_COUNT)

#define IAPMU_COUNT_SET_OTHER(v, tc)                            \
        IAPMU_C0_CTL_SET_OTHER(v, tc, MIU_C0_COUNT)

typedef enum
{
    CNTR_STOPPED = 0,
    CNTR_RUNNING,
    CNTR_ALLWAYS_RUNNING,
    CNTR_INVALID
} IAPMU_COUNTER_STATUS;

typedef struct
{
    IAPMU_COUNTER_STATUS status;
    kal_uint32           config;
} iapmu_counter_s;


/* Direct macro interface. Has lower overhead, but no sanity checks. */
#define IAPMU_COUNTER0_START(v)      IAPMU_COUNTER0_CTL_SET(v)
#define IAPMU_COUNTER1_START(v)      IAPMU_COUNTER1_CTL_SET(v)
#define IAPMU_COUNTER0_STOP()        IAPMU_COUNTER0_CTL_SET(0)
#define IAPMU_COUNTER1_STOP()        IAPMU_COUNTER1_CTL_SET(0)
#define IAPMU_COUNTER0_READ()        IAPMU_COUNTER0_CNT_GET()
#define IAPMU_COUNTER1_READ()        IAPMU_COUNTER1_CNT_GET()
#define IAPMU_COUNTER0_RESET()       IAPMU_COUNTER0_CNT_SET(0)
#define IAPMU_COUNTER1_RESET()       IAPMU_COUNTER1_CNT_SET(0)
#define IAPMU_CYCLE_COUNTER_READ()   miu_cycle_counter_read()
#define IAPMU_CYCLE_COUNTER_RESET()  IAPMU_CP0_COUNT_SET(0)

#define IAPMU_COUNTER0_START_TC(v, tc)    IAPMU_COUNTER0_CTL_SET_OTHER(v, tc)
#define IAPMU_COUNTER1_START_TC(v, tc)    IAPMU_COUNTER1_CTL_SET_OTHER(v, tc)
#define IAPMU_COUNTER0_STOP_TC(tc)        IAPMU_COUNTER0_CTL_SET_OTHER(0, tc)
#define IAPMU_COUNTER1_STOP_TC(tc)        IAPMU_COUNTER1_CTL_SET_OTHER(0, tc)
#define IAPMU_COUNTER0_READ_TC(tc)        IAPMU_COUNTER0_CNT_GET_OTHER(tc)
#define IAPMU_COUNTER1_READ_TC(tc)        IAPMU_COUNTER1_CNT_GET_OTHER(tc)
#define IAPMU_COUNTER0_RESET_TC(tc)       IAPMU_COUNTER0_CNT_SET_OTHER(0, tc)
#define IAPMU_COUNTER1_RESET_TC(tc)       IAPMU_COUNTER1_CNT_SET_OTHER(0, tc)

/* These macros can be used to construct the config bit mask for specific counter
 * based on event ID, context mask, TC ID, VPE ID and target type. This mask can
 * be written to the CTL register of a specific counter. Writing the CTL register
 * will activate the counter in context specified in context mask. */
#define IAPMU_COUNTER0_CTL_CONSTRUCT(event, context, tc_id, vpe_id, target) \
    ((( event << PERFCNT_EVENT_SHIFT) & PERFCNT_EVENT_MASK) | \
     (( tc_id << PERFCNT_TCID_SHIFT ) & PERFCNT_TCID_MASK ) | \
     ((vpe_id << PERFCNT_VPEID_SHIFT) & PERFCNT_VPEID_MASK) | \
     ((target << PERFCNT_MT_EN_SHIFT) & PERFCNT_MT_EN_MASK) | \
     (context & IAPMU_PERFCNT_ALL))

#define IAPMU_COUNTER1_CTL_CONSTRUCT(event, context, tc_id, vpe_id, target) \
    ((((event - PMU_EVENT_C1_FIRST_EVENT) << PERFCNT_EVENT_SHIFT) & PERFCNT_EVENT_MASK) | \
     (( tc_id << PERFCNT_TCID_SHIFT ) & PERFCNT_TCID_MASK ) | \
     ((vpe_id << PERFCNT_VPEID_SHIFT) & PERFCNT_VPEID_MASK) | \
     ((target << PERFCNT_MT_EN_SHIFT) & PERFCNT_MT_EN_MASK) | \
     (context & IAPMU_PERFCNT_ALL))

/* There is nothing to initialize on MIPS InterAptive */
#define MIPS_IA_PMU_Initialize()

/* Not valid on MIPS InterAptive */
#define MIPS_IA_PMU_CycleCountDivide(en)

/* CM Debug Control Block interface */

typedef enum
{
    PMU_CM_EVENT_REQUEST_COUNT = 0,
    PMU_CM_EVENT_COH_REQ_RESP,
    PMU_CM_EVENT_L2_WR_DATA_UTIL,
    PMU_CM_EVENT_L2_CMD_UTIL,
    PMU_CM_EVENT_L2_RD_DATA_UTIL,
    PMU_CM_EVENT_SHARING_MISS,
    PMU_CM_EVENT_RSU_UTIL,
    PMU_CM_EVENT_L2_UTIL = 8,
    PMU_CM_EVENT_L2_HIT,
    PMU_CM_EVENT_IOCU_REQUEST = 16,
    PMU_CM_EVENT_IOCU1_REQUEST
} IAPMU_CM_MONITOR_EVENT_TYPE;

#define GLOBAL_DEBUG_BLOCK 0x6000

typedef enum
{
    IAPMU_CM_CYCLE_COUNTER = (1 << 4), /* CYCL_CNT_ON */
    IAPMU_CM_COUNTER_0     = (1 << 6), /* P0_COUNT_ON */
    IAPMU_CM_COUNTER_1     = (1 << 8)  /* P1_COUNT_ON */
} IAPMU_CM_MONITOR_COUNTER_TYPE;

typedef struct
{
    kal_uint32 event;
    kal_uint32 qualifier;
} iapmu_cm_counter_s;

typedef struct
{
    kal_uint32 iapmu_cm_counter_control; 
    kal_uint32 iapmu_cm_overflow_status;
    kal_uint32 iapmu_cm_event_select;
    kal_uint32 iapmu_cm_cycle_counter;
    kal_uint32 iapmu_cm_counter_0_qualifier;
    kal_uint32 iapmu_cm_counter_0;
    kal_uint32 iapmu_cm_counter_1_qualifier;
    kal_uint32 iapmu_cm_counter_1;    
} iapmu_cm_dor_reg_s;


extern const kal_uint32 IAPMU_read_cycle_counter(void);
extern kal_uint32 IAPMU_CM_ReadCounter(IAPMU_CM_MONITOR_COUNTER_TYPE counter);
extern void IAPMU_CM_ResetCounter(kal_uint32 counters);
extern void IAPMU_CM_StartCounter(kal_uint32 counters);
extern void IAPMU_CM_StopCounter(kal_uint32 counters);
extern void IAPMU_CM_SetEvent(kal_uint32 counter, IAPMU_CM_MONITOR_EVENT_TYPE event, kal_uint32 qualifier);
extern void IAPMU_CM_Init(const kal_uint32 vpe_id);
extern void IAPMU_CM_Config(IAPMU_CM_MONITOR_COUNTER_TYPE counter, IAPMU_CM_MONITOR_EVENT_TYPE event, kal_uint32 qualifier);
extern void IAPMU_CM_Dor_Save(const kal_uint32 vpe_id);
extern void IAPMU_CM_Dor_Restore(const kal_uint32 vpe_id);

#if defined(GEN93_MDMCU_SYSTEM_IMPROVEMENT_FOR_LOW_POWER)
#define IAPMU_CM_Logging(a) 
#define IAPMU_CM_Logging_LISR(a, b) 
extern void IAPMU_CM_ReadCounters_SWmode(kal_uint32 *buff);
#else
extern void IAPMU_CM_Logging(kal_uint8 VPEID);
extern void IAPMU_CM_Logging_LISR(kal_uint32 ID, kal_uint8 VPEID);
#endif 

extern kal_uint8* IAPMU_CM_ReadCounter0_ASM(void);
extern kal_uint8* IAPMU_CM_ReadCounter1_ASM(void);

#endif    /* __MIPS_IA__ */
#endif    /* __MTK_TARGET__ */

#endif /* __MIPS_IA_PMU_MONTR_H */
