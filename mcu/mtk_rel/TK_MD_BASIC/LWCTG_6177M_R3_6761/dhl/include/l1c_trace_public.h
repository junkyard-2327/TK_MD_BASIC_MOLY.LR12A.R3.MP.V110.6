#ifndef L1TRC_L1C_GSM_PUBLIC_DEF_H
#define L1TRC_L1C_GSM_PUBLIC_DEF_H

/******************************/
/* String category definition */
/******************************/
#define L1C_Str_Bool(v1)  (unsigned char)(v1+0)
#define L1C_Str_Function(v1)  (unsigned char)(v1+2)
#define L1C_Str_ConflictTimer(v1)  (unsigned char)(v1+5)
#define L1I_Str_SIM(v1)  (unsigned char)(v1+20)
#define L1I_Str_Set_Sim_Mode(v1)  (unsigned char)(v1+24)
#define L1I_Str_Execute(v1)  (unsigned char)(v1+36)
#define L1I_Str_ServingSB(v1)  (unsigned char)(v1+37)
#define L1I_Str_ServingSB_state(v1)  (unsigned char)(v1+40)
#define L1I_Str_Sim_Mode_type(v1)  (unsigned char)(v1+42)


/****************************/
/* Message macro definition */
/****************************/
#include "L1Trc.h"
#if defined(L1_CATCHER)
	#define L1C_Msg_ReportFCCh(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1C_GSM_PUBLIC_Trace_Filter, 1, 0x01);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0061,0x0061);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v7,v7);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v8,v8);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v9,v9);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v10,v10);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v11,v11);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1C_GSM_PUBLIC_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define L1C_Msg_ReportFCCh(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11)
#endif

#if defined(L1_CATCHER)
	#define L1C_Msg_ReportSCh(v1, v2, v3, v4, v5, v6, v7, v8, v9) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1C_GSM_PUBLIC_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v5,v5);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v6,v6);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v7,v7);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v8,v8);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v9,v9);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0161,0x0161);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v7,v7);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v8,v8);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v9,v9);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1C_GSM_PUBLIC_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define L1C_Msg_ReportSCh(v1, v2, v3, v4, v5, v6, v7, v8, v9)
#endif

#if defined(L1_CATCHER)
	#define L1C_Msg_ReportBCCh(v1, v2, v3, v4, v5, v6) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1C_GSM_PUBLIC_Trace_Filter, 1, 0x08);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0261,0x0261);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1C_GSM_PUBLIC_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define L1C_Msg_ReportBCCh(v1, v2, v3, v4, v5, v6)
#endif

#if defined(L1_CATCHER)
	#define L1C_Msg_ReportNBCCh(v1, v2, v3, v4, v5, v6) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1C_GSM_PUBLIC_Trace_Filter, 1, 0x10);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0361,0x0361);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1C_GSM_PUBLIC_Trace_Filter, 1, 0x10);\
		}\
	} while(0)
#else
	#define L1C_Msg_ReportNBCCh(v1, v2, v3, v4, v5, v6)
#endif

#if defined(L1_CATCHER)
	#define L1C_Msg_ReportPCh(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1C_GSM_PUBLIC_Trace_Filter, 1, 0x20);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0461,0x0461);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1C_GSM_PUBLIC_Trace_Filter, 1, 0x20);\
		}\
	} while(0)
#else
	#define L1C_Msg_ReportPCh(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER)
	#define L1C_Msg_ReportPeek(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1C_GSM_PUBLIC_Trace_Filter, 1, 0x20);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0561,0x0561);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1C_GSM_PUBLIC_Trace_Filter, 1, 0x20);\
		}\
	} while(0)
#else
	#define L1C_Msg_ReportPeek(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define L1C_Msg_ReportCBCh(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1C_GSM_PUBLIC_Trace_Filter, 3, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0661,0x0661);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1C_GSM_PUBLIC_Trace_Filter, 3, 0x04);\
		}\
	} while(0)
#else
	#define L1C_Msg_ReportCBCh(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define L1C_Msg_ReportAGCh(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1C_GSM_PUBLIC_Trace_Filter, 1, 0x40);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0761,0x0761);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1C_GSM_PUBLIC_Trace_Filter, 1, 0x40);\
		}\
	} while(0)
#else
	#define L1C_Msg_ReportAGCh(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define L1C_Msg_ReportSDCCh(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1C_GSM_PUBLIC_Trace_Filter, 1, 0x80);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0861,0x0861);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1C_GSM_PUBLIC_Trace_Filter, 1, 0x80);\
		}\
	} while(0)
#else
	#define L1C_Msg_ReportSDCCh(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER)
	#define L1C_Msg_ReportSACCh(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1C_GSM_PUBLIC_Trace_Filter, 2, 0x01);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0961,0x0961);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1C_GSM_PUBLIC_Trace_Filter, 2, 0x01);\
		}\
	} while(0)
#else
	#define L1C_Msg_ReportSACCh(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER)
	#define L1C_Msg_DL_FACCH(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1C_GSM_PUBLIC_Trace_Filter, 2, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0A61,0x0A61);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1C_GSM_PUBLIC_Trace_Filter, 2, 0x02);\
		}\
	} while(0)
#else
	#define L1C_Msg_DL_FACCH(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define L1C_Msg_HoppingSeq(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1C_GSM_PUBLIC_Trace_Filter, 3, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0B61,0x0B61);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1C_GSM_PUBLIC_Trace_Filter, 3, 0x08);\
		}\
	} while(0)
#else
	#define L1C_Msg_HoppingSeq(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define L1T_Trc_SDCCH_DL_DATA(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1C_GSM_PUBLIC_Trace_Filter, 3, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0C61,0x0C61);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1C_GSM_PUBLIC_Trace_Filter, 3, 0x10);\
		}\
	} while(0)
#else
	#define L1T_Trc_SDCCH_DL_DATA(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define L1T_Trc_SACCH_DL_DATA(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1C_GSM_PUBLIC_Trace_Filter, 3, 0x20);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0D61,0x0D61);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1C_GSM_PUBLIC_Trace_Filter, 3, 0x20);\
		}\
	} while(0)
#else
	#define L1T_Trc_SACCH_DL_DATA(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define L1T_Trc_FACCH_DL_DATA(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1C_GSM_PUBLIC_Trace_Filter, 3, 0x40);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0E61,0x0E61);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1C_GSM_PUBLIC_Trace_Filter, 3, 0x40);\
		}\
	} while(0)
#else
	#define L1T_Trc_FACCH_DL_DATA(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define L1T_TRC_REDUMP() do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1C_GSM_PUBLIC_Trace_Filter, 4, 0x02);\
			TRC_START_FILL_L1();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L1(0x0F61,0x0F61);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1C_GSM_PUBLIC_Trace_Filter, 4, 0x02);\
		}\
	} while(0)
#else
	#define L1T_TRC_REDUMP()
#endif



/*******************************/
/* declaration of filter array */
/*******************************/
EXTERN_TMD_FILTER(unsigned char, L1C_GSM_PUBLIC_Trace_Filter, 5);
/*************************/
/* Function declarations */
/*************************/
#ifdef L1_CATCHER

void Set_L1C_GSM_PUBLIC_Filter(unsigned char *setting);

#endif

/************************************/
/* Filter checking API declarations */
/************************************/

#define ChkL1ModFltr_L1C_GSM_PUBLIC()	(FILTER_CHECK(L1C_GSM_PUBLIC_Trace_Filter, 0, 1))
#define ChkL1ClsFltr_L1C_GSM_PUBLIC_ReportFCCh_H()	(ChkL1ModFltr_L1C_GSM_PUBLIC()&&(FILTER_CHECK(L1C_GSM_PUBLIC_Trace_Filter, 1, 0x01)))
#define ChkL1ClsFltr_L1C_GSM_PUBLIC_ReportSCh_H()	(ChkL1ModFltr_L1C_GSM_PUBLIC()&&(FILTER_CHECK(L1C_GSM_PUBLIC_Trace_Filter, 1, 0x02)))
#define ChkL1ClsFltr_L1C_GSM_PUBLIC_ServingSCh_H()	(ChkL1ModFltr_L1C_GSM_PUBLIC()&&(FILTER_CHECK(L1C_GSM_PUBLIC_Trace_Filter, 1, 0x04)))
#define ChkL1ClsFltr_L1C_GSM_PUBLIC_ReportBCCh_H()	(ChkL1ModFltr_L1C_GSM_PUBLIC()&&(FILTER_CHECK(L1C_GSM_PUBLIC_Trace_Filter, 1, 0x08)))
#define ChkL1ClsFltr_L1C_GSM_PUBLIC_ReportNBCCh_H()	(ChkL1ModFltr_L1C_GSM_PUBLIC()&&(FILTER_CHECK(L1C_GSM_PUBLIC_Trace_Filter, 1, 0x10)))
#define ChkL1ClsFltr_L1C_GSM_PUBLIC_ReportPCh_H()	(ChkL1ModFltr_L1C_GSM_PUBLIC()&&(FILTER_CHECK(L1C_GSM_PUBLIC_Trace_Filter, 1, 0x20)))
#define ChkL1ClsFltr_L1C_GSM_PUBLIC_ReportAGCh_H()	(ChkL1ModFltr_L1C_GSM_PUBLIC()&&(FILTER_CHECK(L1C_GSM_PUBLIC_Trace_Filter, 1, 0x40)))
#define ChkL1ClsFltr_L1C_GSM_PUBLIC_ReportSDCCh_H()	(ChkL1ModFltr_L1C_GSM_PUBLIC()&&(FILTER_CHECK(L1C_GSM_PUBLIC_Trace_Filter, 1, 0x80)))
#define ChkL1ClsFltr_L1C_GSM_PUBLIC_ReportSACCh_H()	(ChkL1ModFltr_L1C_GSM_PUBLIC()&&(FILTER_CHECK(L1C_GSM_PUBLIC_Trace_Filter, 2, 0x01)))
#define ChkL1ClsFltr_L1C_GSM_PUBLIC_DL_FACCH_H()	(ChkL1ModFltr_L1C_GSM_PUBLIC()&&(FILTER_CHECK(L1C_GSM_PUBLIC_Trace_Filter, 2, 0x02)))
#define ChkL1ClsFltr_L1C_GSM_PUBLIC_StartBCCh_M()	(ChkL1ModFltr_L1C_GSM_PUBLIC()&&(FILTER_CHECK(L1C_GSM_PUBLIC_Trace_Filter, 2, 0x04)))
#define ChkL1ClsFltr_L1C_GSM_PUBLIC_SetupPCh_M()	(ChkL1ModFltr_L1C_GSM_PUBLIC()&&(FILTER_CHECK(L1C_GSM_PUBLIC_Trace_Filter, 2, 0x08)))
#define ChkL1ClsFltr_L1C_GSM_PUBLIC_StartAGCh_M()	(ChkL1ModFltr_L1C_GSM_PUBLIC()&&(FILTER_CHECK(L1C_GSM_PUBLIC_Trace_Filter, 2, 0x10)))
#define ChkL1ClsFltr_L1C_GSM_PUBLIC_SetupCBCh_M()	(ChkL1ModFltr_L1C_GSM_PUBLIC()&&(FILTER_CHECK(L1C_GSM_PUBLIC_Trace_Filter, 2, 0x20)))
#define ChkL1ClsFltr_L1C_GSM_PUBLIC_SetupCiphering_M()	(ChkL1ModFltr_L1C_GSM_PUBLIC()&&(FILTER_CHECK(L1C_GSM_PUBLIC_Trace_Filter, 2, 0x40)))
#define ChkL1ClsFltr_L1C_GSM_PUBLIC_StartFCChT_M()	(ChkL1ModFltr_L1C_GSM_PUBLIC()&&(FILTER_CHECK(L1C_GSM_PUBLIC_Trace_Filter, 2, 0x80)))
#define ChkL1ClsFltr_L1C_GSM_PUBLIC_StartSChT_M()	(ChkL1ModFltr_L1C_GSM_PUBLIC()&&(FILTER_CHECK(L1C_GSM_PUBLIC_Trace_Filter, 3, 0x01)))
#define ChkL1ClsFltr_L1C_GSM_PUBLIC_SimMode_H()	(ChkL1ModFltr_L1C_GSM_PUBLIC()&&(FILTER_CHECK(L1C_GSM_PUBLIC_Trace_Filter, 3, 0x02)))
#define ChkL1ClsFltr_L1C_GSM_PUBLIC_ReportCBCh_L()	(ChkL1ModFltr_L1C_GSM_PUBLIC()&&(FILTER_CHECK(L1C_GSM_PUBLIC_Trace_Filter, 3, 0x04)))
#define ChkL1ClsFltr_L1C_GSM_PUBLIC_HoppingSeq_L()	(ChkL1ModFltr_L1C_GSM_PUBLIC()&&(FILTER_CHECK(L1C_GSM_PUBLIC_Trace_Filter, 3, 0x08)))
#define ChkL1ClsFltr_L1C_GSM_PUBLIC_L1T_SDCCH_DL_L()	(ChkL1ModFltr_L1C_GSM_PUBLIC()&&(FILTER_CHECK(L1C_GSM_PUBLIC_Trace_Filter, 3, 0x10)))
#define ChkL1ClsFltr_L1C_GSM_PUBLIC_L1T_SACCH_DL_L()	(ChkL1ModFltr_L1C_GSM_PUBLIC()&&(FILTER_CHECK(L1C_GSM_PUBLIC_Trace_Filter, 3, 0x20)))
#define ChkL1ClsFltr_L1C_GSM_PUBLIC_L1T_FACCH_DL_L()	(ChkL1ModFltr_L1C_GSM_PUBLIC()&&(FILTER_CHECK(L1C_GSM_PUBLIC_Trace_Filter, 3, 0x40)))
#define ChkL1ClsFltr_L1C_GSM_PUBLIC_L1T_Supplement_L()	(ChkL1ModFltr_L1C_GSM_PUBLIC()&&(FILTER_CHECK(L1C_GSM_PUBLIC_Trace_Filter, 3, 0x80)))
#define ChkL1ClsFltr_L1C_GSM_PUBLIC_R99_L()	(ChkL1ModFltr_L1C_GSM_PUBLIC()&&(FILTER_CHECK(L1C_GSM_PUBLIC_Trace_Filter, 4, 0x01)))
#define ChkL1ClsFltr_L1C_GSM_PUBLIC_L1C_ERROR_L()	(ChkL1ModFltr_L1C_GSM_PUBLIC()&&(FILTER_CHECK(L1C_GSM_PUBLIC_Trace_Filter, 4, 0x02)))
#define ChkL1ClsFltr_L1C_GSM_PUBLIC_ServingSB_M()	(ChkL1ModFltr_L1C_GSM_PUBLIC()&&(FILTER_CHECK(L1C_GSM_PUBLIC_Trace_Filter, 4, 0x04)))
#define ChkL1ClsFltr_L1C_GSM_PUBLIC_Timer_H()	(ChkL1ModFltr_L1C_GSM_PUBLIC()&&(FILTER_CHECK(L1C_GSM_PUBLIC_Trace_Filter, 4, 0x08)))
#define ChkL1ClsFltr_L1C_GSM_PUBLIC_L1C_DBG_H()	(ChkL1ModFltr_L1C_GSM_PUBLIC()&&(FILTER_CHECK(L1C_GSM_PUBLIC_Trace_Filter, 4, 0x10)))
#define ChkL1ClsFltr_L1C_GSM_PUBLIC_HRT_PROFILE_H()	(ChkL1ModFltr_L1C_GSM_PUBLIC()&&(FILTER_CHECK(L1C_GSM_PUBLIC_Trace_Filter, 4, 0x20)))
#define ChkL1ClsFltr_L1C_GSM_PUBLIC_SISRQ_HANDLER_H()	(ChkL1ModFltr_L1C_GSM_PUBLIC()&&(FILTER_CHECK(L1C_GSM_PUBLIC_Trace_Filter, 4, 0x40)))
#define ChkL1ClsFltr_L1C_GSM_PUBLIC_FRC_H()	(ChkL1ModFltr_L1C_GSM_PUBLIC()&&(FILTER_CHECK(L1C_GSM_PUBLIC_Trace_Filter, 4, 0x80)))
#define ChkL1MsgFltr_L1C_Msg_ReportFCCh()	ChkL1ClsFltr_L1C_GSM_PUBLIC_ReportFCCh_H()
#define ChkL1MsgFltr_L1C_Msg_ReportSCh()	ChkL1ClsFltr_L1C_GSM_PUBLIC_ReportSCh_H()
#define ChkL1MsgFltr_L1C_Msg_ReportBCCh()	ChkL1ClsFltr_L1C_GSM_PUBLIC_ReportBCCh_H()
#define ChkL1MsgFltr_L1C_Msg_ReportNBCCh()	ChkL1ClsFltr_L1C_GSM_PUBLIC_ReportNBCCh_H()
#define ChkL1MsgFltr_L1C_Msg_ReportPCh()	ChkL1ClsFltr_L1C_GSM_PUBLIC_ReportPCh_H()
#define ChkL1MsgFltr_L1C_Msg_ReportPeek()	ChkL1ClsFltr_L1C_GSM_PUBLIC_ReportPCh_H()
#define ChkL1MsgFltr_L1C_Msg_ReportCBCh()	ChkL1ClsFltr_L1C_GSM_PUBLIC_ReportCBCh_L()
#define ChkL1MsgFltr_L1C_Msg_ReportAGCh()	ChkL1ClsFltr_L1C_GSM_PUBLIC_ReportAGCh_H()
#define ChkL1MsgFltr_L1C_Msg_ReportSDCCh()	ChkL1ClsFltr_L1C_GSM_PUBLIC_ReportSDCCh_H()
#define ChkL1MsgFltr_L1C_Msg_ReportSACCh()	ChkL1ClsFltr_L1C_GSM_PUBLIC_ReportSACCh_H()
#define ChkL1MsgFltr_L1C_Msg_DL_FACCH()	ChkL1ClsFltr_L1C_GSM_PUBLIC_DL_FACCH_H()
#define ChkL1MsgFltr_L1C_Msg_HoppingSeq()	ChkL1ClsFltr_L1C_GSM_PUBLIC_HoppingSeq_L()
#define ChkL1MsgFltr_L1T_Trc_SDCCH_DL_DATA()	ChkL1ClsFltr_L1C_GSM_PUBLIC_L1T_SDCCH_DL_L()
#define ChkL1MsgFltr_L1T_Trc_SACCH_DL_DATA()	ChkL1ClsFltr_L1C_GSM_PUBLIC_L1T_SACCH_DL_L()
#define ChkL1MsgFltr_L1T_Trc_FACCH_DL_DATA()	ChkL1ClsFltr_L1C_GSM_PUBLIC_L1T_FACCH_DL_L()
#define ChkL1MsgFltr_L1T_TRC_REDUMP()	ChkL1ClsFltr_L1C_GSM_PUBLIC_L1C_ERROR_L()


#endif
