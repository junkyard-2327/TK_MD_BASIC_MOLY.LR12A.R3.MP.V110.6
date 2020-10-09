#ifndef L1TRC_L1C_GSM_DEF_H
#define L1TRC_L1C_GSM_DEF_H

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
#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define L1C_Msg_StartBCCh(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1C_GSM_Trace_Filter, 2, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0052,0x0052);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1C_GSM_Trace_Filter, 2, 0x04);\
		}\
	} while(0)
#else
	#define L1C_Msg_StartBCCh(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define L1C_Msg_SetupPCh(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1C_GSM_Trace_Filter, 2, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0152,0x0152);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1C_GSM_Trace_Filter, 2, 0x08);\
		}\
	} while(0)
#else
	#define L1C_Msg_SetupPCh(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define L1C_Msg_StartAGCh(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1C_GSM_Trace_Filter, 2, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0252,0x0252);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1C_GSM_Trace_Filter, 2, 0x10);\
		}\
	} while(0)
#else
	#define L1C_Msg_StartAGCh(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define L1C_Msg_SetupCBCh(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1C_GSM_Trace_Filter, 2, 0x20);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0352,0x0352);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1C_GSM_Trace_Filter, 2, 0x20);\
		}\
	} while(0)
#else
	#define L1C_Msg_SetupCBCh(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define L1C_Msg_SetupCiphering(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1C_GSM_Trace_Filter, 2, 0x40);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0452,0x0452);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1C_GSM_Trace_Filter, 2, 0x40);\
		}\
	} while(0)
#else
	#define L1C_Msg_SetupCiphering(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define L1C_Msg_StartFCChT(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1C_GSM_Trace_Filter, 2, 0x80);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0552,0x0552);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1C_GSM_Trace_Filter, 2, 0x80);\
		}\
	} while(0)
#else
	#define L1C_Msg_StartFCChT(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define L1C_Msg_StartSChT(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1C_GSM_Trace_Filter, 3, 0x01);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0652,0x0652);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1C_GSM_Trace_Filter, 3, 0x01);\
		}\
	} while(0)
#else
	#define L1C_Msg_StartSChT(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define L1C_Msg_FunctionCalled(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1C_GSM_Trace_Filter, 3, 0x80);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0752,0x0752);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1C_GSM_Trace_Filter, 3, 0x80);\
		}\
	} while(0)
#else
	#define L1C_Msg_FunctionCalled(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define L1C_Trace_R99_Bep(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1C_GSM_Trace_Filter, 4, 0x01);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0852,0x0852);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1C_GSM_Trace_Filter, 4, 0x01);\
		}\
	} while(0)
#else
	#define L1C_Trace_R99_Bep(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define L1C_Trace_R99_Bep_bNormalize(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1C_GSM_Trace_Filter, 4, 0x01);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0952,0x0952);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1C_GSM_Trace_Filter, 4, 0x01);\
		}\
	} while(0)
#else
	#define L1C_Trace_R99_Bep_bNormalize(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define L1C_Trace_R99_Power_bNormalize(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1C_GSM_Trace_Filter, 4, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0A52,0x0A52);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1C_GSM_Trace_Filter, 4, 0x01);\
		}\
	} while(0)
#else
	#define L1C_Trace_R99_Power_bNormalize(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define L1I_Msg_ConflictReportType(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1C_GSM_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0B52,0x0B52);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1C_GSM_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define L1I_Msg_ConflictReportType(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define L1I_Msg_SimModeChange(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1C_GSM_Trace_Filter, 3, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0C52,0x0C52);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1C_GSM_Trace_Filter, 3, 0x02);\
		}\
	} while(0)
#else
	#define L1I_Msg_SimModeChange(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define L1I_Msg_ServingSB(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1C_GSM_Trace_Filter, 4, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0D52,0x0D52);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1C_GSM_Trace_Filter, 4, 0x04);\
		}\
	} while(0)
#else
	#define L1I_Msg_ServingSB(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define L1I_Msg_TimerExecute(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1C_GSM_Trace_Filter, 4, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0E52,0x0E52);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1C_GSM_Trace_Filter, 4, 0x08);\
		}\
	} while(0)
#else
	#define L1I_Msg_TimerExecute(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define L1C_Msg_ServingSCh(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1C_GSM_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0F52,0x0F52);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1C_GSM_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define L1C_Msg_ServingSCh(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define L1C_Trace_DBG(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1C_GSM_Trace_Filter, 3, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1052,0x1052);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1C_GSM_Trace_Filter, 3, 0x02);\
		}\
	} while(0)
#else
	#define L1C_Trace_DBG(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define L1C_Trace_profile_10(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1C_GSM_Trace_Filter, 3, 0x02);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1152,0x1152);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v7,v7);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v8,v8);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v9,v9);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v10,v10);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v11,v11);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1C_GSM_Trace_Filter, 3, 0x02);\
		}\
	} while(0)
#else
	#define L1C_Trace_profile_10(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11)
#endif

#if defined(L1_CATCHER)
	#define L1C_Trace_SISRQ_HANDLER(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1C_GSM_Trace_Filter, 3, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1252,0x1252);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1C_GSM_Trace_Filter, 3, 0x02);\
		}\
	} while(0)
#else
	#define L1C_Trace_SISRQ_HANDLER(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define L1C_Msg_Sync_FRC(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1C_GSM_Trace_Filter, 4, 0x80);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1352,0x1352);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1C_GSM_Trace_Filter, 4, 0x80);\
		}\
	} while(0)
#else
	#define L1C_Msg_Sync_FRC(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define L1C_Msg_Extn_Ebit(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1C_GSM_Trace_Filter, 4, 0x80);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1452,0x1452);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1C_GSM_Trace_Filter, 4, 0x80);\
		}\
	} while(0)
#else
	#define L1C_Msg_Extn_Ebit(v1)
#endif

#if defined(L1_CATCHER)
	#define L1C_Msg_Current_FrameEbit(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1C_GSM_Trace_Filter, 4, 0x80);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1552,0x1552);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1C_GSM_Trace_Filter, 4, 0x80);\
		}\
	} while(0)
#else
	#define L1C_Msg_Current_FrameEbit(v1, v2)
#endif



/*******************************/
/* declaration of filter array */
/*******************************/
EXTERN_TMD_FILTER(unsigned char, L1C_GSM_Trace_Filter, 5);
/*************************/
/* Function declarations */
/*************************/
#ifdef L1_CATCHER

void Set_L1C_GSM_Filter(unsigned char *setting);

#endif

/************************************/
/* Filter checking API declarations */
/************************************/

#define ChkL1ModFltr_L1C_GSM()	(FILTER_CHECK(L1C_GSM_Trace_Filter, 0, 1))
#define ChkL1ClsFltr_L1C_GSM_ReportFCCh_H()	(ChkL1ModFltr_L1C_GSM()&&(FILTER_CHECK(L1C_GSM_Trace_Filter, 1, 0x01)))
#define ChkL1ClsFltr_L1C_GSM_ReportSCh_H()	(ChkL1ModFltr_L1C_GSM()&&(FILTER_CHECK(L1C_GSM_Trace_Filter, 1, 0x02)))
#define ChkL1ClsFltr_L1C_GSM_ServingSCh_H()	(ChkL1ModFltr_L1C_GSM()&&(FILTER_CHECK(L1C_GSM_Trace_Filter, 1, 0x04)))
#define ChkL1ClsFltr_L1C_GSM_ReportBCCh_H()	(ChkL1ModFltr_L1C_GSM()&&(FILTER_CHECK(L1C_GSM_Trace_Filter, 1, 0x08)))
#define ChkL1ClsFltr_L1C_GSM_ReportNBCCh_H()	(ChkL1ModFltr_L1C_GSM()&&(FILTER_CHECK(L1C_GSM_Trace_Filter, 1, 0x10)))
#define ChkL1ClsFltr_L1C_GSM_ReportPCh_H()	(ChkL1ModFltr_L1C_GSM()&&(FILTER_CHECK(L1C_GSM_Trace_Filter, 1, 0x20)))
#define ChkL1ClsFltr_L1C_GSM_ReportAGCh_H()	(ChkL1ModFltr_L1C_GSM()&&(FILTER_CHECK(L1C_GSM_Trace_Filter, 1, 0x40)))
#define ChkL1ClsFltr_L1C_GSM_ReportSDCCh_H()	(ChkL1ModFltr_L1C_GSM()&&(FILTER_CHECK(L1C_GSM_Trace_Filter, 1, 0x80)))
#define ChkL1ClsFltr_L1C_GSM_ReportSACCh_H()	(ChkL1ModFltr_L1C_GSM()&&(FILTER_CHECK(L1C_GSM_Trace_Filter, 2, 0x01)))
#define ChkL1ClsFltr_L1C_GSM_DL_FACCH_H()	(ChkL1ModFltr_L1C_GSM()&&(FILTER_CHECK(L1C_GSM_Trace_Filter, 2, 0x02)))
#define ChkL1ClsFltr_L1C_GSM_StartBCCh_M()	(ChkL1ModFltr_L1C_GSM()&&(FILTER_CHECK(L1C_GSM_Trace_Filter, 2, 0x04)))
#define ChkL1ClsFltr_L1C_GSM_SetupPCh_M()	(ChkL1ModFltr_L1C_GSM()&&(FILTER_CHECK(L1C_GSM_Trace_Filter, 2, 0x08)))
#define ChkL1ClsFltr_L1C_GSM_StartAGCh_M()	(ChkL1ModFltr_L1C_GSM()&&(FILTER_CHECK(L1C_GSM_Trace_Filter, 2, 0x10)))
#define ChkL1ClsFltr_L1C_GSM_SetupCBCh_M()	(ChkL1ModFltr_L1C_GSM()&&(FILTER_CHECK(L1C_GSM_Trace_Filter, 2, 0x20)))
#define ChkL1ClsFltr_L1C_GSM_SetupCiphering_M()	(ChkL1ModFltr_L1C_GSM()&&(FILTER_CHECK(L1C_GSM_Trace_Filter, 2, 0x40)))
#define ChkL1ClsFltr_L1C_GSM_StartFCChT_M()	(ChkL1ModFltr_L1C_GSM()&&(FILTER_CHECK(L1C_GSM_Trace_Filter, 2, 0x80)))
#define ChkL1ClsFltr_L1C_GSM_StartSChT_M()	(ChkL1ModFltr_L1C_GSM()&&(FILTER_CHECK(L1C_GSM_Trace_Filter, 3, 0x01)))
#define ChkL1ClsFltr_L1C_GSM_SimMode_H()	(ChkL1ModFltr_L1C_GSM()&&(FILTER_CHECK(L1C_GSM_Trace_Filter, 3, 0x02)))
#define ChkL1ClsFltr_L1C_GSM_ReportCBCh_L()	(ChkL1ModFltr_L1C_GSM()&&(FILTER_CHECK(L1C_GSM_Trace_Filter, 3, 0x04)))
#define ChkL1ClsFltr_L1C_GSM_HoppingSeq_L()	(ChkL1ModFltr_L1C_GSM()&&(FILTER_CHECK(L1C_GSM_Trace_Filter, 3, 0x08)))
#define ChkL1ClsFltr_L1C_GSM_L1T_SDCCH_DL_L()	(ChkL1ModFltr_L1C_GSM()&&(FILTER_CHECK(L1C_GSM_Trace_Filter, 3, 0x10)))
#define ChkL1ClsFltr_L1C_GSM_L1T_SACCH_DL_L()	(ChkL1ModFltr_L1C_GSM()&&(FILTER_CHECK(L1C_GSM_Trace_Filter, 3, 0x20)))
#define ChkL1ClsFltr_L1C_GSM_L1T_FACCH_DL_L()	(ChkL1ModFltr_L1C_GSM()&&(FILTER_CHECK(L1C_GSM_Trace_Filter, 3, 0x40)))
#define ChkL1ClsFltr_L1C_GSM_L1T_Supplement_L()	(ChkL1ModFltr_L1C_GSM()&&(FILTER_CHECK(L1C_GSM_Trace_Filter, 3, 0x80)))
#define ChkL1ClsFltr_L1C_GSM_R99_L()	(ChkL1ModFltr_L1C_GSM()&&(FILTER_CHECK(L1C_GSM_Trace_Filter, 4, 0x01)))
#define ChkL1ClsFltr_L1C_GSM_L1C_ERROR_L()	(ChkL1ModFltr_L1C_GSM()&&(FILTER_CHECK(L1C_GSM_Trace_Filter, 4, 0x02)))
#define ChkL1ClsFltr_L1C_GSM_ServingSB_M()	(ChkL1ModFltr_L1C_GSM()&&(FILTER_CHECK(L1C_GSM_Trace_Filter, 4, 0x04)))
#define ChkL1ClsFltr_L1C_GSM_Timer_H()	(ChkL1ModFltr_L1C_GSM()&&(FILTER_CHECK(L1C_GSM_Trace_Filter, 4, 0x08)))
#define ChkL1ClsFltr_L1C_GSM_L1C_DBG_H()	(ChkL1ModFltr_L1C_GSM()&&(FILTER_CHECK(L1C_GSM_Trace_Filter, 4, 0x10)))
#define ChkL1ClsFltr_L1C_GSM_HRT_PROFILE_H()	(ChkL1ModFltr_L1C_GSM()&&(FILTER_CHECK(L1C_GSM_Trace_Filter, 4, 0x20)))
#define ChkL1ClsFltr_L1C_GSM_SISRQ_HANDLER_H()	(ChkL1ModFltr_L1C_GSM()&&(FILTER_CHECK(L1C_GSM_Trace_Filter, 4, 0x40)))
#define ChkL1ClsFltr_L1C_GSM_FRC_H()	(ChkL1ModFltr_L1C_GSM()&&(FILTER_CHECK(L1C_GSM_Trace_Filter, 4, 0x80)))
#define ChkL1MsgFltr_L1C_Msg_StartBCCh()	ChkL1ClsFltr_L1C_GSM_StartBCCh_M()
#define ChkL1MsgFltr_L1C_Msg_SetupPCh()	ChkL1ClsFltr_L1C_GSM_SetupPCh_M()
#define ChkL1MsgFltr_L1C_Msg_StartAGCh()	ChkL1ClsFltr_L1C_GSM_StartAGCh_M()
#define ChkL1MsgFltr_L1C_Msg_SetupCBCh()	ChkL1ClsFltr_L1C_GSM_SetupCBCh_M()
#define ChkL1MsgFltr_L1C_Msg_SetupCiphering()	ChkL1ClsFltr_L1C_GSM_SetupCiphering_M()
#define ChkL1MsgFltr_L1C_Msg_StartFCChT()	ChkL1ClsFltr_L1C_GSM_StartFCChT_M()
#define ChkL1MsgFltr_L1C_Msg_StartSChT()	ChkL1ClsFltr_L1C_GSM_StartSChT_M()
#define ChkL1MsgFltr_L1C_Msg_FunctionCalled()	ChkL1ClsFltr_L1C_GSM_L1T_Supplement_L()
#define ChkL1MsgFltr_L1C_Trace_R99_Bep()	ChkL1ClsFltr_L1C_GSM_R99_L()
#define ChkL1MsgFltr_L1C_Trace_R99_Bep_bNormalize()	ChkL1ClsFltr_L1C_GSM_R99_L()
#define ChkL1MsgFltr_L1C_Trace_R99_Power_bNormalize()	ChkL1ClsFltr_L1C_GSM_R99_L()
#define ChkL1MsgFltr_L1I_Msg_ConflictReportType()	ChkL1ClsFltr_L1C_GSM_ReportFCCh_H()
#define ChkL1MsgFltr_L1I_Msg_SimModeChange()	ChkL1ClsFltr_L1C_GSM_SimMode_H()
#define ChkL1MsgFltr_L1I_Msg_ServingSB()	ChkL1ClsFltr_L1C_GSM_ServingSB_M()
#define ChkL1MsgFltr_L1I_Msg_TimerExecute()	ChkL1ClsFltr_L1C_GSM_Timer_H()
#define ChkL1MsgFltr_L1C_Msg_ServingSCh()	ChkL1ClsFltr_L1C_GSM_ServingSCh_H()
#define ChkL1MsgFltr_L1C_Trace_DBG()	ChkL1ClsFltr_L1C_GSM_SimMode_H()
#define ChkL1MsgFltr_L1C_Trace_profile_10()	ChkL1ClsFltr_L1C_GSM_SimMode_H()
#define ChkL1MsgFltr_L1C_Trace_SISRQ_HANDLER()	ChkL1ClsFltr_L1C_GSM_SimMode_H()
#define ChkL1MsgFltr_L1C_Msg_Sync_FRC()	ChkL1ClsFltr_L1C_GSM_FRC_H()
#define ChkL1MsgFltr_L1C_Msg_Extn_Ebit()	ChkL1ClsFltr_L1C_GSM_FRC_H()
#define ChkL1MsgFltr_L1C_Msg_Current_FrameEbit()	ChkL1ClsFltr_L1C_GSM_FRC_H()


#endif
