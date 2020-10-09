#ifndef L1TRC_L1SM_1_DEF_H
#define L1TRC_L1SM_1_DEF_H

/******************************/
/* String category definition */
/******************************/
#define L1D_Trace_Str_TM_Sync_State(v1)  (unsigned char)(v1+0)
#define L1SM_Str_Wakeup(v1)  (unsigned char)(v1+2)
#define L1SM_Str_Bool(v1)  (unsigned char)(v1+13)
#define L1SM_Disable_Bool(v1)  (unsigned char)(v1+15)
#define L1SM_Str_Sleep_FRC(v1)  (unsigned char)(v1+17)


/****************************/
/* Message macro definition */
/****************************/
#include "L1Trc.h"
#if defined(L1_CATCHER)
	#define L1SM_DBG_CALI_START() do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1SM_1_Trace_Filter, 1, 0x01);\
			TRC_START_FILL_L1();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L1(0x0076,0x0076);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1SM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define L1SM_DBG_CALI_START()
#endif

#if defined(L1_CATCHER)
	#define L1SM_DBG_TOPSM_PASS_2G(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1SM_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0176,0x0176);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1SM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define L1SM_DBG_TOPSM_PASS_2G(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define L1SM_DBG_SW_WAKEUP(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1SM_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0276,0x0276);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1SM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define L1SM_DBG_SW_WAKEUP(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define L1SM_DBG_SW_WAKEUP_DONE(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1SM_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0376,0x0376);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1SM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define L1SM_DBG_SW_WAKEUP_DONE(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define L1SM_DBG_CAL_SLEEP(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1SM_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0476,0x0476);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1SM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define L1SM_DBG_CAL_SLEEP(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define L1SM_DBG_WAKEUP_INFO_1(v1, v2, v3, v4, v5, v6, v7) do {\
		{\
			TRC_START_FILTER_CHECK_L1_NON_SMP(L1SM_1_Trace_Filter, 1, 0x01);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1_NON_SMP(0x0576,0x0576);\
			TRC_OUTPUT_16_MID_WRAPPER_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v5,v5);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v6,v6);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1_NON_SMP(cgen_local_v7,v7);\
			TRC_END_FILL_L1_NON_SMP();\
			TRC_END_FILTER_CHECK_L1_NON_SMP(L1SM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define L1SM_DBG_WAKEUP_INFO_1(v1, v2, v3, v4, v5, v6, v7)
#endif

#if defined(L1_CATCHER)
	#define L1SM_DBG_WAKEUP_INFO_2(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L1_NON_SMP(L1SM_1_Trace_Filter, 1, 0x01);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1_NON_SMP(0x0676,0x0676);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1_NON_SMP(cgen_local_v5,v5);\
			TRC_END_FILL_L1_NON_SMP();\
			TRC_END_FILTER_CHECK_L1_NON_SMP(L1SM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define L1SM_DBG_WAKEUP_INFO_2(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER)
	#define L1SM_DBG_SET_DURATION(v1, v2, v3, v4, v5, v6) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1SM_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v5,v5);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v6,v6);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v5,v5);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v6,v6);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0776,0x0776);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1SM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define L1SM_DBG_SET_DURATION(v1, v2, v3, v4, v5, v6)
#endif

#if defined(L1_CATCHER)
	#define L1SM_DBG_SLEEP_CONDITION(v1, v2, v3, v4, v5, v6) do {\
		{\
			TRC_START_FILTER_CHECK_L1_NON_SMP(L1SM_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v5,v5);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v6,v6);\
			TRC_START_FILL_L1_NON_SMP();\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v5,v5);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v6,v6);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1_NON_SMP(0x0876,0x0876);\
			TRC_OUTPUT_16_MID_WRAPPER_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v5,v5);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1_NON_SMP(cgen_local_v6,v6);\
			TRC_END_FILL_L1_NON_SMP();\
			TRC_END_FILTER_CHECK_L1_NON_SMP(L1SM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define L1SM_DBG_SLEEP_CONDITION(v1, v2, v3, v4, v5, v6)
#endif

#if defined(L1_CATCHER)
	#define L1SM_DBG_L1SM_FRAME_TICK(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1_NON_SMP(L1SM_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_START_FILL_L1_NON_SMP();\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1_NON_SMP(0x0976,0x0976);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_END_FILL_L1_NON_SMP();\
			TRC_END_FILTER_CHECK_L1_NON_SMP(L1SM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define L1SM_DBG_L1SM_FRAME_TICK(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define L1SM_DBG_ENTER_SLEEP(v1, v2, v3, v4, v5, v6, v7) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1SM_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v5,v5);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v6,v6);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v7,v7);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v5,v5);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v6,v6);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v7,v7);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0A76,0x0A76);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v7,v7);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1SM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define L1SM_DBG_ENTER_SLEEP(v1, v2, v3, v4, v5, v6, v7)
#endif

#if defined(L1_CATCHER)
	#define L1SM_DBG_WAKEUP_INT(v1, v2, v3, v4, v5, v6, v7, v8) do {\
		{\
			TRC_START_FILTER_CHECK_L1_NON_SMP(L1SM_1_Trace_Filter, 1, 0x01);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1_NON_SMP(0x0B76,0x0B76);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v5,v5);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v6,v6);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v7,v7);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1_NON_SMP(cgen_local_v8,v8);\
			TRC_END_FILL_L1_NON_SMP();\
			TRC_END_FILTER_CHECK_L1_NON_SMP(L1SM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define L1SM_DBG_WAKEUP_INT(v1, v2, v3, v4, v5, v6, v7, v8)
#endif

#if defined(L1_CATCHER)
	#define L1SM_DBG_WAKEUP_Done(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1_NON_SMP(L1SM_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_START_FILL_L1_NON_SMP();\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1_NON_SMP(0x0C76,0x0C76);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_END_FILL_L1_NON_SMP();\
			TRC_END_FILTER_CHECK_L1_NON_SMP(L1SM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define L1SM_DBG_WAKEUP_Done(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define L1SM_DBG_Execute_L1(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1_NON_SMP(L1SM_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_START_FILL_L1_NON_SMP();\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1_NON_SMP(0x0D76,0x0D76);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_END_FILL_L1_NON_SMP();\
			TRC_END_FILTER_CHECK_L1_NON_SMP(L1SM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define L1SM_DBG_Execute_L1(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define L1SM_DBG_TIMER_CONDITION(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1_NON_SMP(L1SM_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_START_FILL_L1_NON_SMP();\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1_NON_SMP(0x0E76,0x0E76);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_END_FILL_L1_NON_SMP();\
			TRC_END_FILTER_CHECK_L1_NON_SMP(L1SM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define L1SM_DBG_TIMER_CONDITION(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define L1SM_TRC_WakeUp_Handler_1(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1_NON_SMP(L1SM_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_START_FILL_L1_NON_SMP();\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1_NON_SMP(0x0F76,0x0F76);\
			TRC_OUTPUT_16_MID_WRAPPER_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_END_FILL_L1_NON_SMP();\
			TRC_END_FILTER_CHECK_L1_NON_SMP(L1SM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define L1SM_TRC_WakeUp_Handler_1(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define L1SM_TRC_WakeUp_Handler_2(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1_NON_SMP(L1SM_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_START_FILL_L1_NON_SMP();\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1_NON_SMP(0x1076,0x1076);\
			TRC_OUTPUT_16_MID_WRAPPER_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_END_FILL_L1_NON_SMP();\
			TRC_END_FILTER_CHECK_L1_NON_SMP(L1SM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define L1SM_TRC_WakeUp_Handler_2(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define L1SM_TRC_TWO_STAGE_RF(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1SM_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1176,0x1176);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1SM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define L1SM_TRC_TWO_STAGE_RF(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define L1SM_TRC_Sleep_Return_Meta() do {\
		{\
			TRC_START_FILTER_CHECK_L1_NON_SMP(L1SM_1_Trace_Filter, 1, 0x01);\
			TRC_START_FILL_L1_NON_SMP();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L1_NON_SMP(0x1276,0x1276);\
			TRC_END_FILL_L1_NON_SMP();\
			TRC_END_FILTER_CHECK_L1_NON_SMP(L1SM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define L1SM_TRC_Sleep_Return_Meta()
#endif

#if defined(L1_CATCHER)
	#define L1SM_TRC_Sleep_Return_L1D(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1_NON_SMP(L1SM_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_START_FILL_L1_NON_SMP();\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1_NON_SMP(0x1376,0x1376);\
			TRC_OUTPUT_16_MID_WRAPPER_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_END_FILL_L1_NON_SMP();\
			TRC_END_FILTER_CHECK_L1_NON_SMP(L1SM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define L1SM_TRC_Sleep_Return_L1D(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define L1SM_TRC_Sleep_Return_L1C(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1_NON_SMP(L1SM_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_START_FILL_L1_NON_SMP();\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1_NON_SMP(0x1476,0x1476);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_END_FILL_L1_NON_SMP();\
			TRC_END_FILTER_CHECK_L1_NON_SMP(L1SM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define L1SM_TRC_Sleep_Return_L1C(v1)
#endif

#if defined(L1_CATCHER)
	#define L1SM_TRC_Sleep_Return_Trace32(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1_NON_SMP(L1SM_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_START_FILL_L1_NON_SMP();\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1_NON_SMP(0x1576,0x1576);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_END_FILL_L1_NON_SMP();\
			TRC_END_FILTER_CHECK_L1_NON_SMP(L1SM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define L1SM_TRC_Sleep_Return_Trace32(v1)
#endif

#if defined(L1_CATCHER)
	#define L1SM_TRC_Sleep_Return_SMDis(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1_NON_SMP(L1SM_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_START_FILL_L1_NON_SMP();\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1_NON_SMP(0x1676,0x1676);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_END_FILL_L1_NON_SMP();\
			TRC_END_FILTER_CHECK_L1_NON_SMP(L1SM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define L1SM_TRC_Sleep_Return_SMDis(v1)
#endif

#if defined(L1_CATCHER)
	#define L1SM_TRC_Sleep_Return_PMIC() do {\
		{\
			TRC_START_FILTER_CHECK_L1_NON_SMP(L1SM_1_Trace_Filter, 1, 0x01);\
			TRC_START_FILL_L1_NON_SMP();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L1_NON_SMP(0x1776,0x1776);\
			TRC_END_FILL_L1_NON_SMP();\
			TRC_END_FILTER_CHECK_L1_NON_SMP(L1SM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define L1SM_TRC_Sleep_Return_PMIC()
#endif

#if defined(L1_CATCHER)
	#define L1SM_TRC_Sleep_Return_OS() do {\
		{\
			TRC_START_FILTER_CHECK_L1_NON_SMP(L1SM_1_Trace_Filter, 1, 0x01);\
			TRC_START_FILL_L1_NON_SMP();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L1_NON_SMP(0x1876,0x1876);\
			TRC_END_FILL_L1_NON_SMP();\
			TRC_END_FILTER_CHECK_L1_NON_SMP(L1SM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define L1SM_TRC_Sleep_Return_OS()
#endif

#if defined(L1_CATCHER)
	#define L1SM_TRC_Sleep_Return_ASSERT() do {\
		{\
			TRC_START_FILTER_CHECK_L1_NON_SMP(L1SM_1_Trace_Filter, 1, 0x01);\
			TRC_START_FILL_L1_NON_SMP();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L1_NON_SMP(0x1976,0x1976);\
			TRC_END_FILL_L1_NON_SMP();\
			TRC_END_FILTER_CHECK_L1_NON_SMP(L1SM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define L1SM_TRC_Sleep_Return_ASSERT()
#endif

#if defined(L1_CATCHER)
	#define L1SM_TRC_Sleep_Return_SMLock() do {\
		{\
			TRC_START_FILTER_CHECK_L1_NON_SMP(L1SM_1_Trace_Filter, 1, 0x01);\
			TRC_START_FILL_L1_NON_SMP();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L1_NON_SMP(0x1A76,0x1A76);\
			TRC_END_FILL_L1_NON_SMP();\
			TRC_END_FILTER_CHECK_L1_NON_SMP(L1SM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define L1SM_TRC_Sleep_Return_SMLock()
#endif

#if defined(L1_CATCHER)
	#define L1SM_TRC_Sleep_Return_DCXO() do {\
		{\
			TRC_START_FILTER_CHECK_L1_NON_SMP(L1SM_1_Trace_Filter, 1, 0x01);\
			TRC_START_FILL_L1_NON_SMP();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L1_NON_SMP(0x1B76,0x1B76);\
			TRC_END_FILL_L1_NON_SMP();\
			TRC_END_FILTER_CHECK_L1_NON_SMP(L1SM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define L1SM_TRC_Sleep_Return_DCXO()
#endif

#if defined(L1_CATCHER)
	#define L1SM_TRC_Sleep_Return_Cali() do {\
		{\
			TRC_START_FILTER_CHECK_L1_NON_SMP(L1SM_1_Trace_Filter, 1, 0x01);\
			TRC_START_FILL_L1_NON_SMP();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L1_NON_SMP(0x1C76,0x1C76);\
			TRC_END_FILL_L1_NON_SMP();\
			TRC_END_FILTER_CHECK_L1_NON_SMP(L1SM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define L1SM_TRC_Sleep_Return_Cali()
#endif

#if defined(L1_CATCHER)
	#define L1SM_TRC_Sleep_Return_THRD(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1_NON_SMP(L1SM_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_START_FILL_L1_NON_SMP();\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1_NON_SMP(0x1D76,0x1D76);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_END_FILL_L1_NON_SMP();\
			TRC_END_FILTER_CHECK_L1_NON_SMP(L1SM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define L1SM_TRC_Sleep_Return_THRD(v1)
#endif

#if defined(L1_CATCHER)
	#define L1SM_TRC_Sleep_Large_Offset(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1_NON_SMP(L1SM_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_START_FILL_L1_NON_SMP();\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1_NON_SMP(0x1E76,0x1E76);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_END_FILL_L1_NON_SMP();\
			TRC_END_FILTER_CHECK_L1_NON_SMP(L1SM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define L1SM_TRC_Sleep_Large_Offset(v1)
#endif

#if defined(L1_CATCHER)
	#define L1SM_TRC_Disable_Turbo_Sleep(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1_NON_SMP(L1SM_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_START_FILL_L1_NON_SMP();\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1_NON_SMP(0x1F76,0x1F76);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_END_FILL_L1_NON_SMP();\
			TRC_END_FILTER_CHECK_L1_NON_SMP(L1SM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define L1SM_TRC_Disable_Turbo_Sleep(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define L1SM_TRC_Over_Sleep(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1_NON_SMP(L1SM_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_START_FILL_L1_NON_SMP();\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1_NON_SMP(0x2076,0x2076);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_END_FILL_L1_NON_SMP();\
			TRC_END_FILTER_CHECK_L1_NON_SMP(L1SM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define L1SM_TRC_Over_Sleep(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define L1SM_TRC_DEBUG(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1SM_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x2176,0x2176);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1SM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define L1SM_TRC_DEBUG(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define L1SM_TRC_DEBUG_HEX(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1SM_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x2276,0x2276);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1SM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define L1SM_TRC_DEBUG_HEX(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define DUAL_OS_TICK_2G_COMMON(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1SM_1_Trace_Filter, 1, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x2376,0x2376);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1SM_1_Trace_Filter, 1, 0x10);\
		}\
	} while(0)
#else
	#define DUAL_OS_TICK_2G_COMMON(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define DUAL_OS_TICK_2G_RECOVER(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1SM_1_Trace_Filter, 1, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x2476,0x2476);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1SM_1_Trace_Filter, 1, 0x10);\
		}\
	} while(0)
#else
	#define DUAL_OS_TICK_2G_RECOVER(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define DUAL_OS_TICK_INITIAL(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1SM_1_Trace_Filter, 1, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x2576,0x2576);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1SM_1_Trace_Filter, 1, 0x10);\
		}\
	} while(0)
#else
	#define DUAL_OS_TICK_INITIAL(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define DUAL_OS_TICK_3G_COMMON(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1SM_1_Trace_Filter, 1, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x2676,0x2676);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1SM_1_Trace_Filter, 1, 0x10);\
		}\
	} while(0)
#else
	#define DUAL_OS_TICK_3G_COMMON(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define DUAL_OS_TICK_3G_RECOVER(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1SM_1_Trace_Filter, 1, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x2776,0x2776);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1SM_1_Trace_Filter, 1, 0x10);\
		}\
	} while(0)
#else
	#define DUAL_OS_TICK_3G_RECOVER(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define DUAL_OS_TICK_3G_DBG(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1SM_1_Trace_Filter, 1, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x2876,0x2876);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1SM_1_Trace_Filter, 1, 0x10);\
		}\
	} while(0)
#else
	#define DUAL_OS_TICK_3G_DBG(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define DUAL_OS_TICK_ReSync() do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1SM_1_Trace_Filter, 1, 0x20);\
			TRC_START_FILL_L1();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L1(0x2976,0x2976);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1SM_1_Trace_Filter, 1, 0x20);\
		}\
	} while(0)
#else
	#define DUAL_OS_TICK_ReSync()
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define DUAL_OS_RTC(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1SM_1_Trace_Filter, 1, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v5,v5);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v6,v6);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v7,v7);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v8,v8);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v9,v9);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v10,v10);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v11,v11);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v12,v12);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v5,v5);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v6,v6);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v7,v7);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v8,v8);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v9,v9);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v10,v10);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v11,v11);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v12,v12);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x2A76,0x2A76);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v7,v7);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v8,v8);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v9,v9);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v10,v10);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v11,v11);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v12,v12);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1SM_1_Trace_Filter, 1, 0x10);\
		}\
	} while(0)
#else
	#define DUAL_OS_RTC(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12)
#endif

#if defined(L1_CATCHER)
	#define L1SM_Trace_SW1(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1SM_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x2B76,0x2B76);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1SM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define L1SM_Trace_SW1(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define L1SM_Trace_SW2(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1SM_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x2C76,0x2C76);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1SM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define L1SM_Trace_SW2(v1)
#endif

#if defined(L1_CATCHER)
	#define L1SM_Trace_SW3(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1SM_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x2D76,0x2D76);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1SM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define L1SM_Trace_SW3(v1)
#endif

#if defined(L1_CATCHER)
	#define L1SM_Trace_SW4(v1, v2, v3, v4, v5, v6) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1SM_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v5,v5);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v6,v6);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v5,v5);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v6,v6);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x2E76,0x2E76);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1SM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define L1SM_Trace_SW4(v1, v2, v3, v4, v5, v6)
#endif

#if defined(L1_CATCHER)
	#define L1SM_Trace_SW5(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1SM_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x2F76,0x2F76);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1SM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define L1SM_Trace_SW5(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define L1SM_DBG_R_32K_UPDATE(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1SM_1_Trace_Filter, 1, 0x40);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x3076,0x3076);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1SM_1_Trace_Filter, 1, 0x40);\
		}\
	} while(0)
#else
	#define L1SM_DBG_R_32K_UPDATE(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define L1I_Msg_AvgTAC(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1SM_1_Trace_Filter, 1, 0x40);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x3176,0x3176);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1SM_1_Trace_Filter, 1, 0x40);\
		}\
	} while(0)
#else
	#define L1I_Msg_AvgTAC(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define L1SM_DBG_32KLESS_WAKEUP(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1_NON_SMP(L1SM_1_Trace_Filter, 1, 0x40);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_START_FILL_L1_NON_SMP();\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1_NON_SMP(0x3276,0x3276);\
			TRC_OUTPUT_16_MID_WRAPPER_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_END_FILL_L1_NON_SMP();\
			TRC_END_FILTER_CHECK_L1_NON_SMP(L1SM_1_Trace_Filter, 1, 0x40);\
		}\
	} while(0)
#else
	#define L1SM_DBG_32KLESS_WAKEUP(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define L1SM_DBG_32KLESS_FORCE_REPORT() do {\
		{\
			TRC_START_FILTER_CHECK_L1_NON_SMP(L1SM_1_Trace_Filter, 1, 0x80);\
			TRC_START_FILL_L1_NON_SMP();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L1_NON_SMP(0x3376,0x3376);\
			TRC_END_FILL_L1_NON_SMP();\
			TRC_END_FILTER_CHECK_L1_NON_SMP(L1SM_1_Trace_Filter, 1, 0x80);\
		}\
	} while(0)
#else
	#define L1SM_DBG_32KLESS_FORCE_REPORT()
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define L1SM_DBG_STABLE_PARAM(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1_NON_SMP(L1SM_1_Trace_Filter, 1, 0x80);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_START_FILL_L1_NON_SMP();\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1_NON_SMP(0x3476,0x3476);\
			TRC_OUTPUT_16_MID_WRAPPER_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_END_FILL_L1_NON_SMP();\
			TRC_END_FILTER_CHECK_L1_NON_SMP(L1SM_1_Trace_Filter, 1, 0x80);\
		}\
	} while(0)
#else
	#define L1SM_DBG_STABLE_PARAM(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define L1SM_DBG_32KLESS_UPDATE_LPM(v1, v2, v3, v4, v5, v6) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1SM_1_Trace_Filter, 1, 0x40);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v5,v5);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v6,v6);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v5,v5);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v6,v6);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x3576,0x3576);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1SM_1_Trace_Filter, 1, 0x40);\
		}\
	} while(0)
#else
	#define L1SM_DBG_32KLESS_UPDATE_LPM(v1, v2, v3, v4, v5, v6)
#endif

#if defined(L1_CATCHER)
	#define L1SM_DBG_Timing_Profile(v1, v2, v3, v4, v5, v6) do {\
		{\
			TRC_START_FILTER_CHECK_L1_NON_SMP(L1SM_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v5,v5);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v6,v6);\
			TRC_START_FILL_L1_NON_SMP();\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v5,v5);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v6,v6);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1_NON_SMP(0x3676,0x3676);\
			TRC_OUTPUT_16_MID_WRAPPER_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v5,v5);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1_NON_SMP(cgen_local_v6,v6);\
			TRC_END_FILL_L1_NON_SMP();\
			TRC_END_FILTER_CHECK_L1_NON_SMP(L1SM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define L1SM_DBG_Timing_Profile(v1, v2, v3, v4, v5, v6)
#endif

#if defined(L1_CATCHER)
	#define L1SM_DBG_TP_A(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1_NON_SMP(L1SM_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_START_FILL_L1_NON_SMP();\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1_NON_SMP(0x3776,0x3776);\
			TRC_OUTPUT_16_MID_WRAPPER_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_END_FILL_L1_NON_SMP();\
			TRC_END_FILTER_CHECK_L1_NON_SMP(L1SM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define L1SM_DBG_TP_A(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define L1SM_DBG_TP_B(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L1_NON_SMP(L1SM_1_Trace_Filter, 1, 0x01);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1_NON_SMP(0x3876,0x3876);\
			TRC_OUTPUT_16_MID_WRAPPER_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1_NON_SMP(cgen_local_v5,v5);\
			TRC_END_FILL_L1_NON_SMP();\
			TRC_END_FILTER_CHECK_L1_NON_SMP(L1SM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define L1SM_DBG_TP_B(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER)
	#define L1SM_DBG_TP_C(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L1_NON_SMP(L1SM_1_Trace_Filter, 1, 0x01);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1_NON_SMP(0x3976,0x3976);\
			TRC_OUTPUT_16_MID_WRAPPER_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1_NON_SMP(cgen_local_v5,v5);\
			TRC_END_FILL_L1_NON_SMP();\
			TRC_END_FILTER_CHECK_L1_NON_SMP(L1SM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define L1SM_DBG_TP_C(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER)
	#define L1SM_DBG_Timing_Profile_Best_Region(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1_NON_SMP(L1SM_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_START_FILL_L1_NON_SMP();\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1_NON_SMP(0x3A76,0x3A76);\
			TRC_OUTPUT_16_MID_WRAPPER_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_END_FILL_L1_NON_SMP();\
			TRC_END_FILTER_CHECK_L1_NON_SMP(L1SM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define L1SM_DBG_Timing_Profile_Best_Region(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define L1SM_DBG_Timing_Profile_Worst_Region(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1_NON_SMP(L1SM_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_START_FILL_L1_NON_SMP();\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1_NON_SMP(0x3B76,0x3B76);\
			TRC_OUTPUT_16_MID_WRAPPER_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_END_FILL_L1_NON_SMP();\
			TRC_END_FILTER_CHECK_L1_NON_SMP(L1SM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define L1SM_DBG_Timing_Profile_Worst_Region(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define L1SM_DBG_COCLK_UPDATE_FreqOffset(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1_NON_SMP(L1SM_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_START_FILL_L1_NON_SMP();\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1_NON_SMP(0x3C76,0x3C76);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_END_FILL_L1_NON_SMP();\
			TRC_END_FILTER_CHECK_L1_NON_SMP(L1SM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define L1SM_DBG_COCLK_UPDATE_FreqOffset(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define L1SM_DBG_COCLK_UPDATE_FMRESULT(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1_NON_SMP(L1SM_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_START_FILL_L1_NON_SMP();\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1_NON_SMP(0x3D76,0x3D76);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_END_FILL_L1_NON_SMP();\
			TRC_END_FILTER_CHECK_L1_NON_SMP(L1SM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define L1SM_DBG_COCLK_UPDATE_FMRESULT(v1, v2, v3)
#endif



/*******************************/
/* declaration of filter array */
/*******************************/
EXTERN_TMD_FILTER(unsigned char, L1SM_1_Trace_Filter, 5);
/*************************/
/* Function declarations */
/*************************/
#ifdef L1_CATCHER

void Set_L1SM_1_Filter(unsigned char *setting);

#endif

/************************************/
/* Filter checking API declarations */
/************************************/

#define ChkL1ModFltr_L1SM_1()	(FILTER_CHECK(L1SM_1_Trace_Filter, 0, 1))
#define ChkL1ClsFltr_L1SM_1_GSM_SM_H()	(ChkL1ModFltr_L1SM_1()&&(FILTER_CHECK(L1SM_1_Trace_Filter, 1, 0x01)))
#define ChkL1ClsFltr_L1SM_1_GSM_SM_M()	(ChkL1ModFltr_L1SM_1()&&(FILTER_CHECK(L1SM_1_Trace_Filter, 1, 0x02)))
#define ChkL1ClsFltr_L1SM_1_GSM_SM_L()	(ChkL1ModFltr_L1SM_1()&&(FILTER_CHECK(L1SM_1_Trace_Filter, 1, 0x04)))
#define ChkL1ClsFltr_L1SM_1_SM_LOCKER_H()	(ChkL1ModFltr_L1SM_1()&&(FILTER_CHECK(L1SM_1_Trace_Filter, 1, 0x08)))
#define ChkL1ClsFltr_L1SM_1_DUAL_OS_L()	(ChkL1ModFltr_L1SM_1()&&(FILTER_CHECK(L1SM_1_Trace_Filter, 1, 0x10)))
#define ChkL1ClsFltr_L1SM_1_DUAL_OS_DBG_H()	(ChkL1ModFltr_L1SM_1()&&(FILTER_CHECK(L1SM_1_Trace_Filter, 1, 0x20)))
#define ChkL1ClsFltr_L1SM_1_GSM_32K_H()	(ChkL1ModFltr_L1SM_1()&&(FILTER_CHECK(L1SM_1_Trace_Filter, 1, 0x40)))
#define ChkL1ClsFltr_L1SM_1_GSM_32K_M()	(ChkL1ModFltr_L1SM_1()&&(FILTER_CHECK(L1SM_1_Trace_Filter, 1, 0x80)))
#define ChkL1MsgFltr_L1SM_DBG_CALI_START()	ChkL1ClsFltr_L1SM_1_GSM_SM_H()
#define ChkL1MsgFltr_L1SM_DBG_TOPSM_PASS_2G()	ChkL1ClsFltr_L1SM_1_GSM_SM_H()
#define ChkL1MsgFltr_L1SM_DBG_SW_WAKEUP()	ChkL1ClsFltr_L1SM_1_GSM_SM_H()
#define ChkL1MsgFltr_L1SM_DBG_SW_WAKEUP_DONE()	ChkL1ClsFltr_L1SM_1_GSM_SM_H()
#define ChkL1MsgFltr_L1SM_DBG_CAL_SLEEP()	ChkL1ClsFltr_L1SM_1_GSM_SM_H()
#define ChkL1MsgFltr_L1SM_DBG_WAKEUP_INFO_1()	ChkL1ClsFltr_L1SM_1_GSM_SM_H()
#define ChkL1MsgFltr_L1SM_DBG_WAKEUP_INFO_2()	ChkL1ClsFltr_L1SM_1_GSM_SM_H()
#define ChkL1MsgFltr_L1SM_DBG_SET_DURATION()	ChkL1ClsFltr_L1SM_1_GSM_SM_H()
#define ChkL1MsgFltr_L1SM_DBG_SLEEP_CONDITION()	ChkL1ClsFltr_L1SM_1_GSM_SM_H()
#define ChkL1MsgFltr_L1SM_DBG_L1SM_FRAME_TICK()	ChkL1ClsFltr_L1SM_1_GSM_SM_H()
#define ChkL1MsgFltr_L1SM_DBG_ENTER_SLEEP()	ChkL1ClsFltr_L1SM_1_GSM_SM_H()
#define ChkL1MsgFltr_L1SM_DBG_WAKEUP_INT()	ChkL1ClsFltr_L1SM_1_GSM_SM_H()
#define ChkL1MsgFltr_L1SM_DBG_WAKEUP_Done()	ChkL1ClsFltr_L1SM_1_GSM_SM_H()
#define ChkL1MsgFltr_L1SM_DBG_Execute_L1()	ChkL1ClsFltr_L1SM_1_GSM_SM_H()
#define ChkL1MsgFltr_L1SM_DBG_TIMER_CONDITION()	ChkL1ClsFltr_L1SM_1_GSM_SM_H()
#define ChkL1MsgFltr_L1SM_TRC_WakeUp_Handler_1()	ChkL1ClsFltr_L1SM_1_GSM_SM_H()
#define ChkL1MsgFltr_L1SM_TRC_WakeUp_Handler_2()	ChkL1ClsFltr_L1SM_1_GSM_SM_H()
#define ChkL1MsgFltr_L1SM_TRC_TWO_STAGE_RF()	ChkL1ClsFltr_L1SM_1_GSM_SM_H()
#define ChkL1MsgFltr_L1SM_TRC_Sleep_Return_Meta()	ChkL1ClsFltr_L1SM_1_GSM_SM_H()
#define ChkL1MsgFltr_L1SM_TRC_Sleep_Return_L1D()	ChkL1ClsFltr_L1SM_1_GSM_SM_H()
#define ChkL1MsgFltr_L1SM_TRC_Sleep_Return_L1C()	ChkL1ClsFltr_L1SM_1_GSM_SM_H()
#define ChkL1MsgFltr_L1SM_TRC_Sleep_Return_Trace32()	ChkL1ClsFltr_L1SM_1_GSM_SM_H()
#define ChkL1MsgFltr_L1SM_TRC_Sleep_Return_SMDis()	ChkL1ClsFltr_L1SM_1_GSM_SM_H()
#define ChkL1MsgFltr_L1SM_TRC_Sleep_Return_PMIC()	ChkL1ClsFltr_L1SM_1_GSM_SM_H()
#define ChkL1MsgFltr_L1SM_TRC_Sleep_Return_OS()	ChkL1ClsFltr_L1SM_1_GSM_SM_H()
#define ChkL1MsgFltr_L1SM_TRC_Sleep_Return_ASSERT()	ChkL1ClsFltr_L1SM_1_GSM_SM_H()
#define ChkL1MsgFltr_L1SM_TRC_Sleep_Return_SMLock()	ChkL1ClsFltr_L1SM_1_GSM_SM_H()
#define ChkL1MsgFltr_L1SM_TRC_Sleep_Return_DCXO()	ChkL1ClsFltr_L1SM_1_GSM_SM_H()
#define ChkL1MsgFltr_L1SM_TRC_Sleep_Return_Cali()	ChkL1ClsFltr_L1SM_1_GSM_SM_H()
#define ChkL1MsgFltr_L1SM_TRC_Sleep_Return_THRD()	ChkL1ClsFltr_L1SM_1_GSM_SM_H()
#define ChkL1MsgFltr_L1SM_TRC_Sleep_Large_Offset()	ChkL1ClsFltr_L1SM_1_GSM_SM_H()
#define ChkL1MsgFltr_L1SM_TRC_Disable_Turbo_Sleep()	ChkL1ClsFltr_L1SM_1_GSM_SM_H()
#define ChkL1MsgFltr_L1SM_TRC_Over_Sleep()	ChkL1ClsFltr_L1SM_1_GSM_SM_H()
#define ChkL1MsgFltr_L1SM_TRC_DEBUG()	ChkL1ClsFltr_L1SM_1_GSM_SM_H()
#define ChkL1MsgFltr_L1SM_TRC_DEBUG_HEX()	ChkL1ClsFltr_L1SM_1_GSM_SM_H()
#define ChkL1MsgFltr_DUAL_OS_TICK_2G_COMMON()	ChkL1ClsFltr_L1SM_1_DUAL_OS_L()
#define ChkL1MsgFltr_DUAL_OS_TICK_2G_RECOVER()	ChkL1ClsFltr_L1SM_1_DUAL_OS_L()
#define ChkL1MsgFltr_DUAL_OS_TICK_INITIAL()	ChkL1ClsFltr_L1SM_1_DUAL_OS_L()
#define ChkL1MsgFltr_DUAL_OS_TICK_3G_COMMON()	ChkL1ClsFltr_L1SM_1_DUAL_OS_L()
#define ChkL1MsgFltr_DUAL_OS_TICK_3G_RECOVER()	ChkL1ClsFltr_L1SM_1_DUAL_OS_L()
#define ChkL1MsgFltr_DUAL_OS_TICK_3G_DBG()	ChkL1ClsFltr_L1SM_1_DUAL_OS_L()
#define ChkL1MsgFltr_DUAL_OS_TICK_ReSync()	ChkL1ClsFltr_L1SM_1_DUAL_OS_DBG_H()
#define ChkL1MsgFltr_DUAL_OS_RTC()	ChkL1ClsFltr_L1SM_1_DUAL_OS_L()
#define ChkL1MsgFltr_L1SM_Trace_SW1()	ChkL1ClsFltr_L1SM_1_GSM_SM_H()
#define ChkL1MsgFltr_L1SM_Trace_SW2()	ChkL1ClsFltr_L1SM_1_GSM_SM_H()
#define ChkL1MsgFltr_L1SM_Trace_SW3()	ChkL1ClsFltr_L1SM_1_GSM_SM_H()
#define ChkL1MsgFltr_L1SM_Trace_SW4()	ChkL1ClsFltr_L1SM_1_GSM_SM_H()
#define ChkL1MsgFltr_L1SM_Trace_SW5()	ChkL1ClsFltr_L1SM_1_GSM_SM_H()
#define ChkL1MsgFltr_L1SM_DBG_R_32K_UPDATE()	ChkL1ClsFltr_L1SM_1_GSM_32K_H()
#define ChkL1MsgFltr_L1I_Msg_AvgTAC()	ChkL1ClsFltr_L1SM_1_GSM_32K_H()
#define ChkL1MsgFltr_L1SM_DBG_32KLESS_WAKEUP()	ChkL1ClsFltr_L1SM_1_GSM_32K_H()
#define ChkL1MsgFltr_L1SM_DBG_32KLESS_FORCE_REPORT()	ChkL1ClsFltr_L1SM_1_GSM_32K_M()
#define ChkL1MsgFltr_L1SM_DBG_STABLE_PARAM()	ChkL1ClsFltr_L1SM_1_GSM_32K_M()
#define ChkL1MsgFltr_L1SM_DBG_32KLESS_UPDATE_LPM()	ChkL1ClsFltr_L1SM_1_GSM_32K_H()
#define ChkL1MsgFltr_L1SM_DBG_Timing_Profile()	ChkL1ClsFltr_L1SM_1_GSM_SM_H()
#define ChkL1MsgFltr_L1SM_DBG_TP_A()	ChkL1ClsFltr_L1SM_1_GSM_SM_H()
#define ChkL1MsgFltr_L1SM_DBG_TP_B()	ChkL1ClsFltr_L1SM_1_GSM_SM_H()
#define ChkL1MsgFltr_L1SM_DBG_TP_C()	ChkL1ClsFltr_L1SM_1_GSM_SM_H()
#define ChkL1MsgFltr_L1SM_DBG_Timing_Profile_Best_Region()	ChkL1ClsFltr_L1SM_1_GSM_SM_H()
#define ChkL1MsgFltr_L1SM_DBG_Timing_Profile_Worst_Region()	ChkL1ClsFltr_L1SM_1_GSM_SM_H()
#define ChkL1MsgFltr_L1SM_DBG_COCLK_UPDATE_FreqOffset()	ChkL1ClsFltr_L1SM_1_GSM_SM_H()
#define ChkL1MsgFltr_L1SM_DBG_COCLK_UPDATE_FMRESULT()	ChkL1ClsFltr_L1SM_1_GSM_SM_H()


#endif
