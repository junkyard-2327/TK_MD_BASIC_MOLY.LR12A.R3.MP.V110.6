#ifndef L1TRC_L1I_GPRS_DEF_H
#define L1TRC_L1I_GPRS_DEF_H

/******************************/
/* String category definition */
/******************************/
#define L1I_GPRS_Str_Bool(v1)  (unsigned char)(v1+0)
#define L1I_PRACH_Str_States(v1)  (unsigned char)(v1+2)
#define L1I_TBF_Str_States(v1)  (unsigned char)(v1+8)
#define L1I_Str_GPRS_UL_CtrlMsg(v1)  (unsigned char)(v1+14)
#define L1I_Str_Check_RRBP(v1)  (unsigned char)(v1+28)


/****************************/
/* Message macro definition */
/****************************/
#include "L1Trc.h"
#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define L1I_Trace_PowerControlSetC(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1I_GPRS_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0058,0x0058);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1I_GPRS_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define L1I_Trace_PowerControlSetC(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define L1I_Trace_ReportTBFStarted(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1I_GPRS_Trace_Filter, 1, 0x04);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0158,0x0158);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1I_GPRS_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define L1I_Trace_ReportTBFStarted(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define L1I_Trace_TBF_Transition(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1I_GPRS_Trace_Filter, 1, 0x04);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0258,0x0258);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1I_GPRS_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define L1I_Trace_TBF_Transition(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define L1I_Trace_ReportTBFStopped(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1I_GPRS_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0358,0x0358);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1I_GPRS_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define L1I_Trace_ReportTBFStopped(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define L1I_Trace_ReportPDTChConflict(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1I_GPRS_Trace_Filter, 1, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0458,0x0458);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1I_GPRS_Trace_Filter, 1, 0x10);\
		}\
	} while(0)
#else
	#define L1I_Trace_ReportPDTChConflict(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define L1I_Trace_ReportPRACh(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1I_GPRS_Trace_Filter, 1, 0x20);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0558,0x0558);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1I_GPRS_Trace_Filter, 1, 0x20);\
		}\
	} while(0)
#else
	#define L1I_Trace_ReportPRACh(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define L1I_Trace_MACAssigned(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1I_GPRS_Trace_Filter, 2, 0x80);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0658,0x0658);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1I_GPRS_Trace_Filter, 2, 0x80);\
		}\
	} while(0)
#else
	#define L1I_Trace_MACAssigned(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define L1I_Trace_MACOurUSFMask(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1I_GPRS_Trace_Filter, 3, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0758,0x0758);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1I_GPRS_Trace_Filter, 3, 0x02);\
		}\
	} while(0)
#else
	#define L1I_Trace_MACOurUSFMask(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define L1I_Trace_MACSetReceivedUSF(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1I_GPRS_Trace_Filter, 3, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0858,0x0858);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1I_GPRS_Trace_Filter, 3, 0x01);\
		}\
	} while(0)
#else
	#define L1I_Trace_MACSetReceivedUSF(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define L1I_Trace_MACPreGetUplinkPDTCh(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1I_GPRS_Trace_Filter, 2, 0x08);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0958,0x0958);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1I_GPRS_Trace_Filter, 2, 0x08);\
		}\
	} while(0)
#else
	#define L1I_Trace_MACPreGetUplinkPDTCh(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER)
	#define L1I_Trace_MACULStatusReport(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1I_GPRS_Trace_Filter, 2, 0x10);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0A58,0x0A58);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1I_GPRS_Trace_Filter, 2, 0x10);\
		}\
	} while(0)
#else
	#define L1I_Trace_MACULStatusReport(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define L1I_Trace_ExtractPR1() do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1I_GPRS_Trace_Filter, 3, 0x04);\
			TRC_START_FILL_L1();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L1(0x0B58,0x0B58);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1I_GPRS_Trace_Filter, 3, 0x04);\
		}\
	} while(0)
#else
	#define L1I_Trace_ExtractPR1()
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define L1I_Trace_ExtractPR2() do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1I_GPRS_Trace_Filter, 3, 0x04);\
			TRC_START_FILL_L1();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L1(0x0C58,0x0C58);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1I_GPRS_Trace_Filter, 3, 0x04);\
		}\
	} while(0)
#else
	#define L1I_Trace_ExtractPR2()
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define L1I_Trace_ExtractPR3(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1I_GPRS_Trace_Filter, 3, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0D58,0x0D58);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1I_GPRS_Trace_Filter, 3, 0x08);\
		}\
	} while(0)
#else
	#define L1I_Trace_ExtractPR3(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define L1I_Trace_GPRS_AGC0(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1I_GPRS_Trace_Filter, 3, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0E58,0x0E58);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1I_GPRS_Trace_Filter, 3, 0x10);\
		}\
	} while(0)
#else
	#define L1I_Trace_GPRS_AGC0(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define L1I_Trace_GPRS_AGC1(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1I_GPRS_Trace_Filter, 3, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0F58,0x0F58);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1I_GPRS_Trace_Filter, 3, 0x10);\
		}\
	} while(0)
#else
	#define L1I_Trace_GPRS_AGC1(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define L1I_Trace_GPRS_AGC2(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1I_GPRS_Trace_Filter, 3, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1058,0x1058);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1I_GPRS_Trace_Filter, 3, 0x10);\
		}\
	} while(0)
#else
	#define L1I_Trace_GPRS_AGC2(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define L1I_Trace_GPRS_AGC3(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1I_GPRS_Trace_Filter, 3, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1158,0x1158);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1I_GPRS_Trace_Filter, 3, 0x10);\
		}\
	} while(0)
#else
	#define L1I_Trace_GPRS_AGC3(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define L1I_Trace_GPRS_AGC4(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1I_GPRS_Trace_Filter, 3, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1258,0x1258);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1I_GPRS_Trace_Filter, 3, 0x10);\
		}\
	} while(0)
#else
	#define L1I_Trace_GPRS_AGC4(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define L1I_Trace_GPRS_AGC5(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1I_GPRS_Trace_Filter, 3, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1358,0x1358);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1I_GPRS_Trace_Filter, 3, 0x10);\
		}\
	} while(0)
#else
	#define L1I_Trace_GPRS_AGC5(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define L1I_Trace_PDTChCheckNoRRBP(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1I_GPRS_Trace_Filter, 2, 0x20);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1458,0x1458);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1I_GPRS_Trace_Filter, 2, 0x20);\
		}\
	} while(0)
#else
	#define L1I_Trace_PDTChCheckNoRRBP(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define L1I_Trace_UpdateTimingAdvance(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1I_GPRS_Trace_Filter, 2, 0x40);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1558,0x1558);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1I_GPRS_Trace_Filter, 2, 0x40);\
		}\
	} while(0)
#else
	#define L1I_Trace_UpdateTimingAdvance(v1, v2, v3)
#endif



/*******************************/
/* declaration of filter array */
/*******************************/
EXTERN_TMD_FILTER(unsigned char, L1I_GPRS_Trace_Filter, 5);
/*************************/
/* Function declarations */
/*************************/
#ifdef L1_CATCHER

void Set_L1I_GPRS_Filter(unsigned char *setting);

#endif

/************************************/
/* Filter checking API declarations */
/************************************/

#define ChkL1ModFltr_L1I_GPRS()	(FILTER_CHECK(L1I_GPRS_Trace_Filter, 0, 1))
#define ChkL1ClsFltr_L1I_GPRS_C_Value_M()	(ChkL1ModFltr_L1I_GPRS()&&(FILTER_CHECK(L1I_GPRS_Trace_Filter, 1, 0x01)))
#define ChkL1ClsFltr_L1I_GPRS_UL_Block_H()	(ChkL1ModFltr_L1I_GPRS()&&(FILTER_CHECK(L1I_GPRS_Trace_Filter, 1, 0x02)))
#define ChkL1ClsFltr_L1I_GPRS_ReportTBF_M()	(ChkL1ModFltr_L1I_GPRS()&&(FILTER_CHECK(L1I_GPRS_Trace_Filter, 1, 0x04)))
#define ChkL1ClsFltr_L1I_GPRS_ReportTBF_H()	(ChkL1ModFltr_L1I_GPRS()&&(FILTER_CHECK(L1I_GPRS_Trace_Filter, 1, 0x08)))
#define ChkL1ClsFltr_L1I_GPRS_ReportPDTChConflict_H()	(ChkL1ModFltr_L1I_GPRS()&&(FILTER_CHECK(L1I_GPRS_Trace_Filter, 1, 0x10)))
#define ChkL1ClsFltr_L1I_GPRS_ReportPRACh_M()	(ChkL1ModFltr_L1I_GPRS()&&(FILTER_CHECK(L1I_GPRS_Trace_Filter, 1, 0x20)))
#define ChkL1ClsFltr_L1I_GPRS_ReportPollResp_H()	(ChkL1ModFltr_L1I_GPRS()&&(FILTER_CHECK(L1I_GPRS_Trace_Filter, 1, 0x40)))
#define ChkL1ClsFltr_L1I_GPRS_ReportSingleDL_H()	(ChkL1ModFltr_L1I_GPRS()&&(FILTER_CHECK(L1I_GPRS_Trace_Filter, 1, 0x80)))
#define ChkL1ClsFltr_L1I_GPRS_ReportULTwoPhase_H()	(ChkL1ModFltr_L1I_GPRS()&&(FILTER_CHECK(L1I_GPRS_Trace_Filter, 2, 0x01)))
#define ChkL1ClsFltr_L1I_GPRS_ReportSingleULWithoutTBF_H()	(ChkL1ModFltr_L1I_GPRS()&&(FILTER_CHECK(L1I_GPRS_Trace_Filter, 2, 0x02)))
#define ChkL1ClsFltr_L1I_GPRS_L1D_Constellation_H()	(ChkL1ModFltr_L1I_GPRS()&&(FILTER_CHECK(L1I_GPRS_Trace_Filter, 2, 0x04)))
#define ChkL1ClsFltr_L1I_GPRS_mpal_uplink_transfer_H()	(ChkL1ModFltr_L1I_GPRS()&&(FILTER_CHECK(L1I_GPRS_Trace_Filter, 2, 0x08)))
#define ChkL1ClsFltr_L1I_GPRS_mpal_ul_status_report_H()	(ChkL1ModFltr_L1I_GPRS()&&(FILTER_CHECK(L1I_GPRS_Trace_Filter, 2, 0x10)))
#define ChkL1ClsFltr_L1I_GPRS_mpal_next_rrbp_frame_no_M()	(ChkL1ModFltr_L1I_GPRS()&&(FILTER_CHECK(L1I_GPRS_Trace_Filter, 2, 0x20)))
#define ChkL1ClsFltr_L1I_GPRS_L1I_UpdateTimingAdvance_M()	(ChkL1ModFltr_L1I_GPRS()&&(FILTER_CHECK(L1I_GPRS_Trace_Filter, 2, 0x40)))
#define ChkL1ClsFltr_L1I_GPRS_L1I_MACFrameTick_L()	(ChkL1ModFltr_L1I_GPRS()&&(FILTER_CHECK(L1I_GPRS_Trace_Filter, 2, 0x80)))
#define ChkL1ClsFltr_L1I_GPRS_SetReceivedUSF_L()	(ChkL1ModFltr_L1I_GPRS()&&(FILTER_CHECK(L1I_GPRS_Trace_Filter, 3, 0x01)))
#define ChkL1ClsFltr_L1I_GPRS_OurUSFMask_L()	(ChkL1ModFltr_L1I_GPRS()&&(FILTER_CHECK(L1I_GPRS_Trace_Filter, 3, 0x02)))
#define ChkL1ClsFltr_L1I_GPRS_PR_Payload_Type_L()	(ChkL1ModFltr_L1I_GPRS()&&(FILTER_CHECK(L1I_GPRS_Trace_Filter, 3, 0x04)))
#define ChkL1ClsFltr_L1I_GPRS_PR_TFI_L()	(ChkL1ModFltr_L1I_GPRS()&&(FILTER_CHECK(L1I_GPRS_Trace_Filter, 3, 0x08)))
#define ChkL1ClsFltr_L1I_GPRS_Block_AGC_L()	(ChkL1ModFltr_L1I_GPRS()&&(FILTER_CHECK(L1I_GPRS_Trace_Filter, 3, 0x10)))
#define ChkL1ClsFltr_L1I_GPRS_UL_Ctrl_Block_L()	(ChkL1ModFltr_L1I_GPRS()&&(FILTER_CHECK(L1I_GPRS_Trace_Filter, 3, 0x20)))
#define ChkL1MsgFltr_L1I_Trace_PowerControlSetC()	ChkL1ClsFltr_L1I_GPRS_C_Value_M()
#define ChkL1MsgFltr_L1I_Trace_ReportTBFStarted()	ChkL1ClsFltr_L1I_GPRS_ReportTBF_M()
#define ChkL1MsgFltr_L1I_Trace_TBF_Transition()	ChkL1ClsFltr_L1I_GPRS_ReportTBF_M()
#define ChkL1MsgFltr_L1I_Trace_ReportTBFStopped()	ChkL1ClsFltr_L1I_GPRS_ReportTBF_M()
#define ChkL1MsgFltr_L1I_Trace_ReportPDTChConflict()	ChkL1ClsFltr_L1I_GPRS_ReportPDTChConflict_H()
#define ChkL1MsgFltr_L1I_Trace_ReportPRACh()	ChkL1ClsFltr_L1I_GPRS_ReportPRACh_M()
#define ChkL1MsgFltr_L1I_Trace_MACAssigned()	ChkL1ClsFltr_L1I_GPRS_L1I_MACFrameTick_L()
#define ChkL1MsgFltr_L1I_Trace_MACOurUSFMask()	ChkL1ClsFltr_L1I_GPRS_OurUSFMask_L()
#define ChkL1MsgFltr_L1I_Trace_MACSetReceivedUSF()	ChkL1ClsFltr_L1I_GPRS_SetReceivedUSF_L()
#define ChkL1MsgFltr_L1I_Trace_MACPreGetUplinkPDTCh()	ChkL1ClsFltr_L1I_GPRS_mpal_uplink_transfer_H()
#define ChkL1MsgFltr_L1I_Trace_MACULStatusReport()	ChkL1ClsFltr_L1I_GPRS_mpal_ul_status_report_H()
#define ChkL1MsgFltr_L1I_Trace_ExtractPR1()	ChkL1ClsFltr_L1I_GPRS_PR_Payload_Type_L()
#define ChkL1MsgFltr_L1I_Trace_ExtractPR2()	ChkL1ClsFltr_L1I_GPRS_PR_Payload_Type_L()
#define ChkL1MsgFltr_L1I_Trace_ExtractPR3()	ChkL1ClsFltr_L1I_GPRS_PR_TFI_L()
#define ChkL1MsgFltr_L1I_Trace_GPRS_AGC0()	ChkL1ClsFltr_L1I_GPRS_Block_AGC_L()
#define ChkL1MsgFltr_L1I_Trace_GPRS_AGC1()	ChkL1ClsFltr_L1I_GPRS_Block_AGC_L()
#define ChkL1MsgFltr_L1I_Trace_GPRS_AGC2()	ChkL1ClsFltr_L1I_GPRS_Block_AGC_L()
#define ChkL1MsgFltr_L1I_Trace_GPRS_AGC3()	ChkL1ClsFltr_L1I_GPRS_Block_AGC_L()
#define ChkL1MsgFltr_L1I_Trace_GPRS_AGC4()	ChkL1ClsFltr_L1I_GPRS_Block_AGC_L()
#define ChkL1MsgFltr_L1I_Trace_GPRS_AGC5()	ChkL1ClsFltr_L1I_GPRS_Block_AGC_L()
#define ChkL1MsgFltr_L1I_Trace_PDTChCheckNoRRBP()	ChkL1ClsFltr_L1I_GPRS_mpal_next_rrbp_frame_no_M()
#define ChkL1MsgFltr_L1I_Trace_UpdateTimingAdvance()	ChkL1ClsFltr_L1I_GPRS_L1I_UpdateTimingAdvance_M()


#endif
