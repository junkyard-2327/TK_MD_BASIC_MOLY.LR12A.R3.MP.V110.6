#ifndef L1TRC_L1I_GSM_DEF_H
#define L1TRC_L1I_GSM_DEF_H

/******************************/
/* String category definition */
/******************************/
#define L1I_Str_Burst(v1)  (unsigned char)(v1+0)
#define L1I_Str_Bool(v1)  (unsigned char)(v1+2)
#define L1I_Str_RATSCCH_STATE(v1)  (unsigned char)(v1+4)
#define L1I_Str_NoExecute(v1)  (unsigned char)(v1+21)
#define L1I_Str_AbortOrNoExecute(v1)  (unsigned char)(v1+23)
#define L1I_Str_Cell(v1)  (unsigned char)(v1+25)
#define L1I_Str_Protect(v1)  (unsigned char)(v1+27)


/****************************/
/* Message macro definition */
/****************************/
#include "L1Trc.h"
#if defined(L1_CATCHER)
	#define L1I_Msg_Timer(v1, v2, v3, v4, v5, v6, v7) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1I_GSM_Trace_Filter, 1, 0x01);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0056,0x0056);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v7,v7);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1I_GSM_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define L1I_Msg_Timer(v1, v2, v3, v4, v5, v6, v7)
#endif

#if defined(L1_CATCHER)
	#define L1I_Msg_SetSync(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1I_GSM_Trace_Filter, 1, 0x40);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0156,0x0156);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1I_GSM_Trace_Filter, 1, 0x40);\
		}\
	} while(0)
#else
	#define L1I_Msg_SetSync(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define L1I_Msg_TaskSetSync(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1I_GSM_Trace_Filter, 1, 0x40);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0256,0x0256);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1I_GSM_Trace_Filter, 1, 0x40);\
		}\
	} while(0)
#else
	#define L1I_Msg_TaskSetSync(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define L1I_Msg_ULDTX(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1I_GSM_Trace_Filter, 3, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0356,0x0356);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1I_GSM_Trace_Filter, 3, 0x02);\
		}\
	} while(0)
#else
	#define L1I_Msg_ULDTX(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define L1I_Msg_RATSCChState(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1I_GSM_Trace_Filter, 2, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0456,0x0456);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1I_GSM_Trace_Filter, 2, 0x08);\
		}\
	} while(0)
#else
	#define L1I_Msg_RATSCChState(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define L1I_Msg_SetupTA(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1I_GSM_Trace_Filter, 2, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0556,0x0556);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1I_GSM_Trace_Filter, 2, 0x10);\
		}\
	} while(0)
#else
	#define L1I_Msg_SetupTA(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define L1I_Msg_FCBT_CNT(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1I_GSM_Trace_Filter, 2, 0x20);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0656,0x0656);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1I_GSM_Trace_Filter, 2, 0x20);\
		}\
	} while(0)
#else
	#define L1I_Msg_FCBT_CNT(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define L1I_Trace_MonitorReportEnh1(v1, v2, v3, v4, v5, v6, v7, v8) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1I_GSM_Trace_Filter, 3, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v5,v5);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v6,v6);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v7,v7);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v8,v8);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v5,v5);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v6,v6);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v7,v7);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v8,v8);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0756,0x0756);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v7,v7);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v8,v8);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1I_GSM_Trace_Filter, 3, 0x04);\
		}\
	} while(0)
#else
	#define L1I_Trace_MonitorReportEnh1(v1, v2, v3, v4, v5, v6, v7, v8)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define L1I_Trace_MonitorReportEnh2(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1I_GSM_Trace_Filter, 3, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0856,0x0856);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1I_GSM_Trace_Filter, 3, 0x04);\
		}\
	} while(0)
#else
	#define L1I_Trace_MonitorReportEnh2(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define L1I_Trace_MonitorReportEnh3(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1I_GSM_Trace_Filter, 3, 0x04);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0956,0x0956);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1I_GSM_Trace_Filter, 3, 0x04);\
		}\
	} while(0)
#else
	#define L1I_Trace_MonitorReportEnh3(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define L1I_Trace_MonitorReportEnh4(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1I_GSM_Trace_Filter, 3, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0A56,0x0A56);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1I_GSM_Trace_Filter, 3, 0x04);\
		}\
	} while(0)
#else
	#define L1I_Trace_MonitorReportEnh4(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define L1I_Msg_RepeatSACCh(v1, v2, v3, v4, v5, v6) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1I_GSM_Trace_Filter, 3, 0x08);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0B56,0x0B56);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1I_GSM_Trace_Filter, 3, 0x08);\
		}\
	} while(0)
#else
	#define L1I_Msg_RepeatSACCh(v1, v2, v3, v4, v5, v6)
#endif

#if defined(L1_CATCHER)
	#define L1I_Msg_SIM_STATUS(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1I_GSM_Trace_Filter, 2, 0x40);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0C56,0x0C56);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1I_GSM_Trace_Filter, 2, 0x40);\
		}\
	} while(0)
#else
	#define L1I_Msg_SIM_STATUS(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define L1C_Msg_SIMTiming(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1I_GSM_Trace_Filter, 2, 0x40);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0D56,0x0D56);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1I_GSM_Trace_Filter, 2, 0x40);\
		}\
	} while(0)
#else
	#define L1C_Msg_SIMTiming(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER)
	#define L1I_Msg_TimerNoExecute(v1, v2, v3, v4, v5, v6) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1I_GSM_Trace_Filter, 1, 0x01);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0E56,0x0E56);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1I_GSM_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define L1I_Msg_TimerNoExecute(v1, v2, v3, v4, v5, v6)
#endif

#if defined(L1_CATCHER)
	#define L1I_Msg_TimerAbortNoExecute(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1I_GSM_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0F56,0x0F56);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1I_GSM_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define L1I_Msg_TimerAbortNoExecute(v1, v2)
#endif



/*******************************/
/* declaration of filter array */
/*******************************/
EXTERN_TMD_FILTER(unsigned char, L1I_GSM_Trace_Filter, 5);
/*************************/
/* Function declarations */
/*************************/
#ifdef L1_CATCHER

void Set_L1I_GSM_Filter(unsigned char *setting);

#endif

/************************************/
/* Filter checking API declarations */
/************************************/

#define ChkL1ModFltr_L1I_GSM()	(FILTER_CHECK(L1I_GSM_Trace_Filter, 0, 1))
#define ChkL1ClsFltr_L1I_GSM_Timer_H()	(ChkL1ModFltr_L1I_GSM()&&(FILTER_CHECK(L1I_GSM_Trace_Filter, 1, 0x01)))
#define ChkL1ClsFltr_L1I_GSM_AGC_H()	(ChkL1ModFltr_L1I_GSM()&&(FILTER_CHECK(L1I_GSM_Trace_Filter, 1, 0x02)))
#define ChkL1ClsFltr_L1I_GSM_AGCPDTCh_H()	(ChkL1ModFltr_L1I_GSM()&&(FILTER_CHECK(L1I_GSM_Trace_Filter, 1, 0x04)))
#define ChkL1ClsFltr_L1I_GSM_AFC_H()	(ChkL1ModFltr_L1I_GSM()&&(FILTER_CHECK(L1I_GSM_Trace_Filter, 1, 0x08)))
#define ChkL1ClsFltr_L1I_GSM_TAC_H()	(ChkL1ModFltr_L1I_GSM()&&(FILTER_CHECK(L1I_GSM_Trace_Filter, 1, 0x10)))
#define ChkL1ClsFltr_L1I_GSM_ReportRACh_H()	(ChkL1ModFltr_L1I_GSM()&&(FILTER_CHECK(L1I_GSM_Trace_Filter, 1, 0x20)))
#define ChkL1ClsFltr_L1I_GSM_SetSync_H()	(ChkL1ModFltr_L1I_GSM()&&(FILTER_CHECK(L1I_GSM_Trace_Filter, 1, 0x40)))
#define ChkL1ClsFltr_L1I_GSM_TxPower_H()	(ChkL1ModFltr_L1I_GSM()&&(FILTER_CHECK(L1I_GSM_Trace_Filter, 1, 0x80)))
#define ChkL1ClsFltr_L1I_GSM_UL_FACCH_H()	(ChkL1ModFltr_L1I_GSM()&&(FILTER_CHECK(L1I_GSM_Trace_Filter, 2, 0x01)))
#define ChkL1ClsFltr_L1I_GSM_ReportTCh_H()	(ChkL1ModFltr_L1I_GSM()&&(FILTER_CHECK(L1I_GSM_Trace_Filter, 2, 0x02)))
#define ChkL1ClsFltr_L1I_GSM_AGCIM_M()	(ChkL1ModFltr_L1I_GSM()&&(FILTER_CHECK(L1I_GSM_Trace_Filter, 2, 0x04)))
#define ChkL1ClsFltr_L1I_GSM_AMR_M()	(ChkL1ModFltr_L1I_GSM()&&(FILTER_CHECK(L1I_GSM_Trace_Filter, 2, 0x08)))
#define ChkL1ClsFltr_L1I_GSM_SetupTA_M()	(ChkL1ModFltr_L1I_GSM()&&(FILTER_CHECK(L1I_GSM_Trace_Filter, 2, 0x10)))
#define ChkL1ClsFltr_L1I_GSM_SetupFCBT_H()	(ChkL1ModFltr_L1I_GSM()&&(FILTER_CHECK(L1I_GSM_Trace_Filter, 2, 0x20)))
#define ChkL1ClsFltr_L1I_GSM_SIM_H()	(ChkL1ModFltr_L1I_GSM()&&(FILTER_CHECK(L1I_GSM_Trace_Filter, 2, 0x40)))
#define ChkL1ClsFltr_L1I_GSM_TAC_Debug_L()	(ChkL1ModFltr_L1I_GSM()&&(FILTER_CHECK(L1I_GSM_Trace_Filter, 2, 0x80)))
#define ChkL1ClsFltr_L1I_GSM_AGCPM_H()	(ChkL1ModFltr_L1I_GSM()&&(FILTER_CHECK(L1I_GSM_Trace_Filter, 3, 0x01)))
#define ChkL1ClsFltr_L1I_GSM_UL_DTX_L()	(ChkL1ModFltr_L1I_GSM()&&(FILTER_CHECK(L1I_GSM_Trace_Filter, 3, 0x02)))
#define ChkL1ClsFltr_L1I_GSM_R99_L()	(ChkL1ModFltr_L1I_GSM()&&(FILTER_CHECK(L1I_GSM_Trace_Filter, 3, 0x04)))
#define ChkL1ClsFltr_L1I_GSM_RepeatSACCh_L()	(ChkL1ModFltr_L1I_GSM()&&(FILTER_CHECK(L1I_GSM_Trace_Filter, 3, 0x08)))
#define ChkL1MsgFltr_L1I_Msg_Timer()	ChkL1ClsFltr_L1I_GSM_Timer_H()
#define ChkL1MsgFltr_L1I_Msg_SetSync()	ChkL1ClsFltr_L1I_GSM_SetSync_H()
#define ChkL1MsgFltr_L1I_Msg_TaskSetSync()	ChkL1ClsFltr_L1I_GSM_SetSync_H()
#define ChkL1MsgFltr_L1I_Msg_ULDTX()	ChkL1ClsFltr_L1I_GSM_UL_DTX_L()
#define ChkL1MsgFltr_L1I_Msg_RATSCChState()	ChkL1ClsFltr_L1I_GSM_AMR_M()
#define ChkL1MsgFltr_L1I_Msg_SetupTA()	ChkL1ClsFltr_L1I_GSM_SetupTA_M()
#define ChkL1MsgFltr_L1I_Msg_FCBT_CNT()	ChkL1ClsFltr_L1I_GSM_SetupFCBT_H()
#define ChkL1MsgFltr_L1I_Trace_MonitorReportEnh1()	ChkL1ClsFltr_L1I_GSM_R99_L()
#define ChkL1MsgFltr_L1I_Trace_MonitorReportEnh2()	ChkL1ClsFltr_L1I_GSM_R99_L()
#define ChkL1MsgFltr_L1I_Trace_MonitorReportEnh3()	ChkL1ClsFltr_L1I_GSM_R99_L()
#define ChkL1MsgFltr_L1I_Trace_MonitorReportEnh4()	ChkL1ClsFltr_L1I_GSM_R99_L()
#define ChkL1MsgFltr_L1I_Msg_RepeatSACCh()	ChkL1ClsFltr_L1I_GSM_RepeatSACCh_L()
#define ChkL1MsgFltr_L1I_Msg_SIM_STATUS()	ChkL1ClsFltr_L1I_GSM_SIM_H()
#define ChkL1MsgFltr_L1C_Msg_SIMTiming()	ChkL1ClsFltr_L1I_GSM_SIM_H()
#define ChkL1MsgFltr_L1I_Msg_TimerNoExecute()	ChkL1ClsFltr_L1I_GSM_Timer_H()
#define ChkL1MsgFltr_L1I_Msg_TimerAbortNoExecute()	ChkL1ClsFltr_L1I_GSM_Timer_H()


#endif
