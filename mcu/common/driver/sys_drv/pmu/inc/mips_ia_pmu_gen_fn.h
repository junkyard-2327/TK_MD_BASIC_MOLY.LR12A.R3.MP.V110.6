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
 *   mips_ia_pmu_gen_fn.h
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
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *==============================================================================
 ******************************************************************************/

#ifdef __MTK_TARGET__
#ifdef __MIPS_IA__

/*****************************************************************************/
#ifdef GEN_MIPS_IAPMU_DECLARATION
# define MIPS_IAPMU_API_PROTOTYPE(NAME,...)                             \
    MIPSIA_PMU_FUNC_ISA_TYPE extern const kal_uint32                    \
        miu_xglue(miu_xglue(IAPMU_,GEN_MIPS_IAPMU_DECLARATION),miu_xglue(_,NAME))    \
        (__VA_ARGS__);

#endif

/*****************************************************************************/
#ifdef GEN_MIPS_IAPMU_DUMMY_IMP
# define GEN_DUMMY_FUNCTION_BODY()      \
{                                       \
    return PMU_STATUS_NOPERM;           \
}
# define StartCounter_IMPLEMENTATION     GEN_DUMMY_FUNCTION_BODY()
# define StopCounter_IMPLEMENTATION      GEN_DUMMY_FUNCTION_BODY()
# define ResetCounter_IMPLEMENTATION     GEN_DUMMY_FUNCTION_BODY()
# define ReadCounter_IMPLEMENTATION      GEN_DUMMY_FUNCTION_BODY()
# define SetEvent_IMPLEMENTATION         GEN_DUMMY_FUNCTION_BODY()
# define StartCounterTC_IMPLEMENTATION   GEN_DUMMY_FUNCTION_BODY()
# define StopCounterTC_IMPLEMENTATION    GEN_DUMMY_FUNCTION_BODY()
# define ResetCounterTC_IMPLEMENTATION   GEN_DUMMY_FUNCTION_BODY()
# define ReadCounterTC_IMPLEMENTATION    GEN_DUMMY_FUNCTION_BODY()
# define SetEventTC_IMPLEMENTATION       GEN_DUMMY_FUNCTION_BODY()
# define MIPS_IAPMU_API_PROTOTYPE(NAME,...)                                     \
    GEN_MIPS_IAPMU_DUMMY_IMP_SECTION(                                           \
        miu_xglue(miu_xglue(IAPMU_,GEN_MIPS_IAPMU_DUMMY_IMP),miu_xglue(_,NAME)) \
    )                                                                           \
    MIPSIA_PMU_FUNC_ISA_TYPE const kal_uint32                                   \
    miu_xglue(miu_xglue(IAPMU_,GEN_MIPS_IAPMU_DUMMY_IMP),miu_xglue(_,NAME))     \
        (__VA_ARGS__)\
        NAME ## _IMPLEMENTATION
#endif

/*****************************************************************************/
#ifdef GEN_MIPS_IAPMU_DEF_IMP
# define StartCounter_IMPLEMENTATION                    \
    {                                                   \
        IAPMU_StartCounter(cnts);                       \
        return PMU_STATUS_OK;                           \
    }
# define StopCounter_IMPLEMENTATION                     \
    {                                                   \
        IAPMU_StopCounter(cnts);                        \
        return PMU_STATUS_OK;                           \
    }
# define ResetCounter_IMPLEMENTATION                    \
    {                                                   \
        IAPMU_ResetCounter(cnts);                       \
        return PMU_STATUS_OK;                           \
    }
# define ReadCounter_IMPLEMENTATION                     \
    {                                                   \
        *val = IAPMU_ReadCounter(cnt);                  \
        return PMU_STATUS_OK;                           \
    }
# define SetEvent_IMPLEMENTATION                        \
    {                                                   \
        IAPMU_SetEvent(                                 \
            cnt, event,                                 \
            target_id,                                  \
            target_type, context_mask);                 \
        return PMU_STATUS_OK;                           \
    }
# define StartCounterTC_IMPLEMENTATION                  \
    {                                                   \
        IAPMU_StartCounterTC(cnts, target_tc_mask);     \
        return PMU_STATUS_OK;                           \
    }
# define StopCounterTC_IMPLEMENTATION                   \
    {                                                   \
        IAPMU_StopCounterTC(cnts, target_tc_mask);      \
        return PMU_STATUS_OK;                           \
    }
# define ResetCounterTC_IMPLEMENTATION                  \
    {                                                   \
        IAPMU_ResetCounterTC(cnts, target_tc_mask);     \
        return PMU_STATUS_OK;                           \
    }
# define ReadCounterTC_IMPLEMENTATION                   \
    {                                                   \
        *val = IAPMU_ReadCounterTC(cnt, target_tc);     \
        return PMU_STATUS_OK;                           \
    }
# define SetEventTC_IMPLEMENTATION                      \
    {                                                   \
        IAPMU_SetEventTC(                               \
            cnt, event,                                 \
            target_tc,                                  \
            target_id,                                  \
            target_type, context_mask);                 \
        return PMU_STATUS_OK;                           \
    }

# define MIPS_IAPMU_API_PROTOTYPE(NAME,...)                                     \
    GEN_MIPS_IAPMU_DEF_IMP_SECTION(                                             \
        miu_xglue(miu_xglue(IAPMU_,GEN_MIPS_IAPMU_DEF_IMP),miu_xglue(_,NAME))   \
    )                                                                           \
    MIPSIA_PMU_FUNC_ISA_TYPE const kal_uint32                                   \
    miu_xglue(miu_xglue(IAPMU_,GEN_MIPS_IAPMU_DEF_IMP),miu_xglue(_,NAME))       \
        (__VA_ARGS__)\
        NAME ## _IMPLEMENTATION
#endif

/*****************************************************************************/
#ifdef  GEN_MIPS_IAPMU_ST_API_PROTOTYPE
MIPS_IAPMU_API_PROTOTYPE(StartCounter, kal_uint32 cnts)
MIPS_IAPMU_API_PROTOTYPE(StopCounter,  kal_uint32 cnts)
MIPS_IAPMU_API_PROTOTYPE(ResetCounter, kal_uint32 cnts)
MIPS_IAPMU_API_PROTOTYPE(ReadCounter,  IAPMU_MONITOR_COUNTER_TYPE cnt, kal_uint32 *val)
MIPS_IAPMU_API_PROTOTYPE(SetEvent,     IAPMU_MONITOR_COUNTER_TYPE cnt, IAPMU_MONITOR_EVENT_TYPE event,                        kal_uint32 target_id, IAPMU_MONITOR_TARGET_TYPE target_type, kal_uint32 context_mask)
#endif

/*****************************************************************************/
#ifdef  GEN_MIPS_IAPMU_TC_API_PROTOTYPE
MIPS_IAPMU_API_PROTOTYPE(StartCounterTC, kal_uint32 cnts, kal_uint32 target_tc_mask)
MIPS_IAPMU_API_PROTOTYPE(StopCounterTC,  kal_uint32 cnts,  kal_uint32 target_tc_mask)
MIPS_IAPMU_API_PROTOTYPE(ResetCounterTC, kal_uint32 cnts, kal_uint32 target_tc_mask)
MIPS_IAPMU_API_PROTOTYPE(ReadCounterTC,  IAPMU_MONITOR_COUNTER_TYPE cnt, kal_uint32 target_tc, kal_uint32 *val)
MIPS_IAPMU_API_PROTOTYPE(SetEventTC,     IAPMU_MONITOR_COUNTER_TYPE cnt, IAPMU_MONITOR_EVENT_TYPE event, kal_uint32 target_tc, kal_uint32 target_id, IAPMU_MONITOR_TARGET_TYPE target_type, kal_uint32 context_mask)
#endif

/*****************************************************************************/
#undef MIPS_IAPMU_API_PROTOTYPE

#undef GEN_MIPS_IAPMU_ST_API_PROTOTYPE
#undef GEN_MIPS_IAPMU_TC_API_PROTOTYPE

#undef GEN_MIPS_IAPMU_DECLARATION
#undef GEN_MIPS_IAPMU_DUMMY_IMP

#undef GEN_MIPS_IAPMU_DEF_IMP
#undef GEN_MIPS_IAPMU_DEF_IMP_SECTION

#undef StartCounter_IMPLEMENTATION
#undef StopCounter_IMPLEMENTATION
#undef ResetCounter_IMPLEMENTATION
#undef ReadCounter_IMPLEMENTATION
#undef SetEvent_IMPLEMENTATION
#undef StartCounterTC_IMPLEMENTATION
#undef StopCounterTC_IMPLEMENTATION
#undef ResetCounterTC_IMPLEMENTATION
#undef ReadCounterTC_IMPLEMENTATION
#undef SetEventTC_IMPLEMENTATION

#endif /* __MIPS_IA__ */
#endif /* __MTK_TARGET__ */
