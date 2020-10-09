#ifndef L1TRC_EL1SM_1_DEF_H
#define L1TRC_EL1SM_1_DEF_H

/******************************/
/* String category definition */
/******************************/
#define EL1SM_Str_Locker(v1)  (unsigned char)(v1+0)
#define EL1SM_Str_Sleep(v1)  (unsigned char)(v1+11)
#define EL1SM_Str_Bool(v1)  (unsigned char)(v1+13)
#define EL1SM_Str_Enable(v1)  (unsigned char)(v1+15)
#define EL1SM_Str_EL1Task(v1)  (unsigned char)(v1+17)
#define EL1SM_Str_TaskCtrl(v1)  (unsigned char)(v1+19)
#define EL1SM_Str_BusyStatus(v1)  (unsigned char)(v1+21)
#define EL1SM_Str_EL1PowerDomain(v1)  (unsigned char)(v1+23)


/****************************/
/* Message macro definition */
/****************************/
#include "L1Trc.h"
#if defined(L1_CATCHER)
	#define EL1SM_DBG_CHECK_SM_LOCKER_EN(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1SM_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x00A6,0x00A6);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1SM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1SM_DBG_CHECK_SM_LOCKER_EN(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define EL1SM_DBG_CHECK_SM_LOCKER_DIS(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1SM_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x01A6,0x01A6);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1SM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1SM_DBG_CHECK_SM_LOCKER_DIS(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define EL1SM_DBG_CHECK_SM_LOCKER_EN_SW(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1SM_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x02A6,0x02A6);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1SM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1SM_DBG_CHECK_SM_LOCKER_EN_SW(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define EL1SM_DBG_CHECK_SM_LOCKER_DIS_SW(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1SM_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x03A6,0x03A6);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1SM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1SM_DBG_CHECK_SM_LOCKER_DIS_SW(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define EL1SM_DBG_Enter_Sleep(v1, v2, v3, v4, v5, v6, v7, v8) do {\
		{\
			TRC_START_FILTER_CHECK_L1_NON_SMP(EL1SM_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v5,v5);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v6,v6);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v7,v7);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v8,v8);\
			TRC_START_FILL_L1_NON_SMP();\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v5,v5);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v6,v6);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v7,v7);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v8,v8);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1_NON_SMP(0x04A6,0x04A6);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v5,v5);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v6,v6);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v7,v7);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1_NON_SMP(cgen_local_v8,v8);\
			TRC_END_FILL_L1_NON_SMP();\
			TRC_END_FILTER_CHECK_L1_NON_SMP(EL1SM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1SM_DBG_Enter_Sleep(v1, v2, v3, v4, v5, v6, v7, v8)
#endif

#if defined(L1_CATCHER)
	#define EL1SM_DBG_SW_Wakeup_Stress(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1SM_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x05A6,0x05A6);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1SM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1SM_DBG_SW_Wakeup_Stress(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define EL1SM_DBG_Sleep_Stress(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1_NON_SMP(EL1SM_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_START_FILL_L1_NON_SMP();\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1_NON_SMP(0x06A6,0x06A6);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_END_FILL_L1_NON_SMP();\
			TRC_END_FILTER_CHECK_L1_NON_SMP(EL1SM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1SM_DBG_Sleep_Stress(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define EL1SM_DBG_Wakeup_IRQ(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L1_NON_SMP(EL1SM_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v5,v5);\
			TRC_START_FILL_L1_NON_SMP();\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v5,v5);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1_NON_SMP(0x07A6,0x07A6);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1_NON_SMP(cgen_local_v5,v5);\
			TRC_END_FILL_L1_NON_SMP();\
			TRC_END_FILTER_CHECK_L1_NON_SMP(EL1SM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1SM_DBG_Wakeup_IRQ(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER)
	#define EL1SM_DBG_CALI_START() do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1SM_1_Trace_Filter, 1, 0x01);\
			TRC_START_FILL_L1();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L1(0x08A6,0x08A6);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1SM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1SM_DBG_CALI_START()
#endif

#if defined(L1_CATCHER)
	#define EL1SM_DBG_CALI_DONE(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1SM_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x09A6,0x09A6);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1SM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1SM_DBG_CALI_DONE(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define EL1SM_DBG_CHECK_CALI() do {\
		{\
			TRC_START_FILTER_CHECK_L1_NON_SMP(EL1SM_1_Trace_Filter, 1, 0x01);\
			TRC_START_FILL_L1_NON_SMP();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L1_NON_SMP(0x0AA6,0x0AA6);\
			TRC_END_FILL_L1_NON_SMP();\
			TRC_END_FILTER_CHECK_L1_NON_SMP(EL1SM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1SM_DBG_CHECK_CALI()
#endif

#if defined(L1_CATCHER)
	#define EL1SM_DBG_Resource_NonForceOn(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1SM_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0BA6,0x0BA6);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1SM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1SM_DBG_Resource_NonForceOn(v1)
#endif

#if defined(L1_CATCHER)
	#define EL1SM_DBG_Resource_ForceOn(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1SM_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0CA6,0x0CA6);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1SM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1SM_DBG_Resource_ForceOn(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define EL1SM_DBG_Power_Clock(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1_NON_SMP_COND(EL1SM_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP_COND(cgen_local_v1,v1);\
			TRC_START_FILL_L1_NON_SMP_COND();\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP_COND(cgen_local_v1,v1);\
			TRC_SEND_N_DATA_L1_COND(2, TRC_MERGE_1S2C(0x0DA6, TRC_BOXSTER_PAD, TRC_BOXSTER_PAD), (unsigned long)(cgen_local_v1));\
			TRC_END_FILL_L1_NON_SMP_COND();\
			TRC_END_FILTER_CHECK_L1_NON_SMP_COND(EL1SM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1SM_DBG_Power_Clock(v1)
#endif

#if defined(L1_CATCHER)
	#define EL1SM_DBG_CHECK_DCXO_DIV() do {\
		{\
			TRC_START_FILTER_CHECK_L1_NON_SMP(EL1SM_1_Trace_Filter, 1, 0x01);\
			TRC_START_FILL_L1_NON_SMP();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L1_NON_SMP(0x0EA6,0x0EA6);\
			TRC_END_FILL_L1_NON_SMP();\
			TRC_END_FILTER_CHECK_L1_NON_SMP(EL1SM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1SM_DBG_CHECK_DCXO_DIV()
#endif

#if defined(L1_CATCHER)
	#define EL1SM_DBG_EL1TASK_CTRL(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1SM_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0FA6,0x0FA6);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1SM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1SM_DBG_EL1TASK_CTRL(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define EL1SM_DBG_Timing_Check_1(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L1_NON_SMP(EL1SM_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v5,v5);\
			TRC_START_FILL_L1_NON_SMP();\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v5,v5);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1_NON_SMP(0x10A6,0x10A6);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1_NON_SMP(cgen_local_v5,v5);\
			TRC_END_FILL_L1_NON_SMP();\
			TRC_END_FILTER_CHECK_L1_NON_SMP(EL1SM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1SM_DBG_Timing_Check_1(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER)
	#define EL1SM_DBG_Timing_Check_2(v1, v2, v3, v4, v5, v6, v7) do {\
		{\
			TRC_START_FILTER_CHECK_L1_NON_SMP(EL1SM_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v5,v5);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v6,v6);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v7,v7);\
			TRC_START_FILL_L1_NON_SMP();\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v5,v5);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v6,v6);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v7,v7);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1_NON_SMP(0x11A6,0x11A6);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v5,v5);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v6,v6);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1_NON_SMP(cgen_local_v7,v7);\
			TRC_END_FILL_L1_NON_SMP();\
			TRC_END_FILTER_CHECK_L1_NON_SMP(EL1SM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1SM_DBG_Timing_Check_2(v1, v2, v3, v4, v5, v6, v7)
#endif

#if defined(L1_CATCHER)
	#define EL1SM_DBG_CHECK_SLEEP_QUICK(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1_NON_SMP(EL1SM_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_START_FILL_L1_NON_SMP();\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1_NON_SMP(0x12A6,0x12A6);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_END_FILL_L1_NON_SMP();\
			TRC_END_FILTER_CHECK_L1_NON_SMP(EL1SM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1SM_DBG_CHECK_SLEEP_QUICK(v1)
#endif

#if defined(L1_CATCHER)
	#define EL1SM_DBG_CHECK_SLEEP(v1, v2, v7) do {\
		{\
			TRC_START_FILTER_CHECK_L1_NON_SMP(EL1SM_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v7,v7);\
			TRC_START_FILL_L1_NON_SMP();\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v7,v7);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1_NON_SMP(0x13A6,0x13A6);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1_NON_SMP(cgen_local_v7,v7);\
			TRC_END_FILL_L1_NON_SMP();\
			TRC_END_FILTER_CHECK_L1_NON_SMP(EL1SM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1SM_DBG_CHECK_SLEEP(v1, v2, v7)
#endif

#if defined(L1_CATCHER)
	#define EL1SM_DBG_CHECK_SLEEP_EL1C_BUSY(v1, v6) do {\
		{\
			TRC_START_FILTER_CHECK_L1_NON_SMP(EL1SM_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v6,v6);\
			TRC_START_FILL_L1_NON_SMP();\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v6,v6);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1_NON_SMP(0x14A6,0x14A6);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1_NON_SMP(cgen_local_v6,v6);\
			TRC_END_FILL_L1_NON_SMP();\
			TRC_END_FILTER_CHECK_L1_NON_SMP(EL1SM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1SM_DBG_CHECK_SLEEP_EL1C_BUSY(v1, v6)
#endif

#if defined(L1_CATCHER)
	#define EL1SM_DBG_CHECK_SLEEP_1(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1_NON_SMP(EL1SM_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_START_FILL_L1_NON_SMP();\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1_NON_SMP(0x15A6,0x15A6);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_END_FILL_L1_NON_SMP();\
			TRC_END_FILTER_CHECK_L1_NON_SMP(EL1SM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1SM_DBG_CHECK_SLEEP_1(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define EL1SM_TRC_DEBUG(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1SM_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x16A6,0x16A6);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1SM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1SM_TRC_DEBUG(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define EL1SM_TRC_DEBUG_HEX(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1SM_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x17A6,0x17A6);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1SM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1SM_TRC_DEBUG_HEX(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define EL1SM_TRC_DEBUG_PROTECT_HIT(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1SM_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x18A6,0x18A6);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1SM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1SM_TRC_DEBUG_PROTECT_HIT(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define EL1SM_DBG_BACKUP_CANNOT_SLEEP(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1_NON_SMP(EL1SM_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_START_FILL_L1_NON_SMP();\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1_NON_SMP(0x19A6,0x19A6);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_END_FILL_L1_NON_SMP();\
			TRC_END_FILTER_CHECK_L1_NON_SMP(EL1SM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1SM_DBG_BACKUP_CANNOT_SLEEP(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define EL1SM_DBG_Timing_Profile(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10) do {\
		{\
			TRC_START_FILTER_CHECK_L1_NON_SMP(EL1SM_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v5,v5);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v6,v6);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v7,v7);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v8,v8);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v9,v9);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v10,v10);\
			TRC_START_FILL_L1_NON_SMP();\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v5,v5);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v6,v6);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v7,v7);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v8,v8);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v9,v9);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v10,v10);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1_NON_SMP(0x1AA6,0x1AA6);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v5,v5);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v6,v6);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v7,v7);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v8,v8);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v9,v9);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1_NON_SMP(cgen_local_v10,v10);\
			TRC_END_FILL_L1_NON_SMP();\
			TRC_END_FILTER_CHECK_L1_NON_SMP(EL1SM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1SM_DBG_Timing_Profile(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10)
#endif

#if defined(L1_CATCHER)
	#define EL1SM_DBG_CHECK_PMIC_VERSION() do {\
		{\
			TRC_START_FILTER_CHECK_L1_NON_SMP(EL1SM_1_Trace_Filter, 1, 0x01);\
			TRC_START_FILL_L1_NON_SMP();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L1_NON_SMP(0x1BA6,0x1BA6);\
			TRC_END_FILL_L1_NON_SMP();\
			TRC_END_FILTER_CHECK_L1_NON_SMP(EL1SM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1SM_DBG_CHECK_PMIC_VERSION()
#endif

#if defined(L1_CATCHER)
	#define EL1SM_DBG_32KLESS_WAKEUP(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1_NON_SMP(EL1SM_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_START_FILL_L1_NON_SMP();\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1_NON_SMP(0x1CA6,0x1CA6);\
			TRC_OUTPUT_16_MID_WRAPPER_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_END_FILL_L1_NON_SMP();\
			TRC_END_FILTER_CHECK_L1_NON_SMP(EL1SM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1SM_DBG_32KLESS_WAKEUP(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define EL1SM_DBG_32KLESS_UPDATE_LPM(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1SM_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v5,v5);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1DA6,0x1DA6);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1SM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1SM_DBG_32KLESS_UPDATE_LPM(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER)
	#define EL1SM_DBG_COCLK_UPDATE_FreqOffset(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1_NON_SMP(EL1SM_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_START_FILL_L1_NON_SMP();\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1_NON_SMP(0x1EA6,0x1EA6);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_END_FILL_L1_NON_SMP();\
			TRC_END_FILTER_CHECK_L1_NON_SMP(EL1SM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1SM_DBG_COCLK_UPDATE_FreqOffset(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define EL1SM_DBG_COCLK_UPDATE_FMRESULT(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1_NON_SMP(EL1SM_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_START_FILL_L1_NON_SMP();\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1_NON_SMP(0x1FA6,0x1FA6);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_END_FILL_L1_NON_SMP();\
			TRC_END_FILTER_CHECK_L1_NON_SMP(EL1SM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1SM_DBG_COCLK_UPDATE_FMRESULT(v1, v2, v3)
#endif



/*******************************/
/* declaration of filter array */
/*******************************/
EXTERN_TMD_FILTER(unsigned char, EL1SM_1_Trace_Filter, 5);
/*************************/
/* Function declarations */
/*************************/
#ifdef L1_CATCHER

void Set_EL1SM_1_Filter(unsigned char *setting);

#endif

/************************************/
/* Filter checking API declarations */
/************************************/

#define ChkL1ModFltr_EL1SM_1()	(FILTER_CHECK(EL1SM_1_Trace_Filter, 0, 1))
#define ChkL1ClsFltr_EL1SM_1_LTE_SM_H()	(ChkL1ModFltr_EL1SM_1()&&(FILTER_CHECK(EL1SM_1_Trace_Filter, 1, 0x01)))
#define ChkL1ClsFltr_EL1SM_1_LTE_SM_L()	(ChkL1ModFltr_EL1SM_1()&&(FILTER_CHECK(EL1SM_1_Trace_Filter, 1, 0x02)))
#define ChkL1MsgFltr_EL1SM_DBG_CHECK_SM_LOCKER_EN()	ChkL1ClsFltr_EL1SM_1_LTE_SM_H()
#define ChkL1MsgFltr_EL1SM_DBG_CHECK_SM_LOCKER_DIS()	ChkL1ClsFltr_EL1SM_1_LTE_SM_H()
#define ChkL1MsgFltr_EL1SM_DBG_CHECK_SM_LOCKER_EN_SW()	ChkL1ClsFltr_EL1SM_1_LTE_SM_H()
#define ChkL1MsgFltr_EL1SM_DBG_CHECK_SM_LOCKER_DIS_SW()	ChkL1ClsFltr_EL1SM_1_LTE_SM_H()
#define ChkL1MsgFltr_EL1SM_DBG_Enter_Sleep()	ChkL1ClsFltr_EL1SM_1_LTE_SM_H()
#define ChkL1MsgFltr_EL1SM_DBG_SW_Wakeup_Stress()	ChkL1ClsFltr_EL1SM_1_LTE_SM_H()
#define ChkL1MsgFltr_EL1SM_DBG_Sleep_Stress()	ChkL1ClsFltr_EL1SM_1_LTE_SM_H()
#define ChkL1MsgFltr_EL1SM_DBG_Wakeup_IRQ()	ChkL1ClsFltr_EL1SM_1_LTE_SM_H()
#define ChkL1MsgFltr_EL1SM_DBG_CALI_START()	ChkL1ClsFltr_EL1SM_1_LTE_SM_H()
#define ChkL1MsgFltr_EL1SM_DBG_CALI_DONE()	ChkL1ClsFltr_EL1SM_1_LTE_SM_H()
#define ChkL1MsgFltr_EL1SM_DBG_CHECK_CALI()	ChkL1ClsFltr_EL1SM_1_LTE_SM_H()
#define ChkL1MsgFltr_EL1SM_DBG_Resource_NonForceOn()	ChkL1ClsFltr_EL1SM_1_LTE_SM_H()
#define ChkL1MsgFltr_EL1SM_DBG_Resource_ForceOn()	ChkL1ClsFltr_EL1SM_1_LTE_SM_H()
#define ChkL1MsgFltr_EL1SM_DBG_Power_Clock()	ChkL1ClsFltr_EL1SM_1_LTE_SM_H()
#define ChkL1MsgFltr_EL1SM_DBG_CHECK_DCXO_DIV()	ChkL1ClsFltr_EL1SM_1_LTE_SM_H()
#define ChkL1MsgFltr_EL1SM_DBG_EL1TASK_CTRL()	ChkL1ClsFltr_EL1SM_1_LTE_SM_H()
#define ChkL1MsgFltr_EL1SM_DBG_Timing_Check_1()	ChkL1ClsFltr_EL1SM_1_LTE_SM_H()
#define ChkL1MsgFltr_EL1SM_DBG_Timing_Check_2()	ChkL1ClsFltr_EL1SM_1_LTE_SM_H()
#define ChkL1MsgFltr_EL1SM_DBG_CHECK_SLEEP_QUICK()	ChkL1ClsFltr_EL1SM_1_LTE_SM_H()
#define ChkL1MsgFltr_EL1SM_DBG_CHECK_SLEEP()	ChkL1ClsFltr_EL1SM_1_LTE_SM_H()
#define ChkL1MsgFltr_EL1SM_DBG_CHECK_SLEEP_EL1C_BUSY()	ChkL1ClsFltr_EL1SM_1_LTE_SM_H()
#define ChkL1MsgFltr_EL1SM_DBG_CHECK_SLEEP_1()	ChkL1ClsFltr_EL1SM_1_LTE_SM_H()
#define ChkL1MsgFltr_EL1SM_TRC_DEBUG()	ChkL1ClsFltr_EL1SM_1_LTE_SM_H()
#define ChkL1MsgFltr_EL1SM_TRC_DEBUG_HEX()	ChkL1ClsFltr_EL1SM_1_LTE_SM_H()
#define ChkL1MsgFltr_EL1SM_TRC_DEBUG_PROTECT_HIT()	ChkL1ClsFltr_EL1SM_1_LTE_SM_H()
#define ChkL1MsgFltr_EL1SM_DBG_BACKUP_CANNOT_SLEEP()	ChkL1ClsFltr_EL1SM_1_LTE_SM_H()
#define ChkL1MsgFltr_EL1SM_DBG_Timing_Profile()	ChkL1ClsFltr_EL1SM_1_LTE_SM_H()
#define ChkL1MsgFltr_EL1SM_DBG_CHECK_PMIC_VERSION()	ChkL1ClsFltr_EL1SM_1_LTE_SM_H()
#define ChkL1MsgFltr_EL1SM_DBG_32KLESS_WAKEUP()	ChkL1ClsFltr_EL1SM_1_LTE_SM_H()
#define ChkL1MsgFltr_EL1SM_DBG_32KLESS_UPDATE_LPM()	ChkL1ClsFltr_EL1SM_1_LTE_SM_H()
#define ChkL1MsgFltr_EL1SM_DBG_COCLK_UPDATE_FreqOffset()	ChkL1ClsFltr_EL1SM_1_LTE_SM_H()
#define ChkL1MsgFltr_EL1SM_DBG_COCLK_UPDATE_FMRESULT()	ChkL1ClsFltr_EL1SM_1_LTE_SM_H()


#endif
