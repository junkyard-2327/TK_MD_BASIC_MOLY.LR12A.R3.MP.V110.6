#ifndef L1TRC_L1C_GPRS_DEF_H
#define L1TRC_L1C_GPRS_DEF_H

/******************************/
/* String category definition */
/******************************/
#define L1C_Str_Bool(v1)  (unsigned char)(v1+0)
#define L1C_Str_GPRS_DL_CtrlMsg(v1)  (unsigned char)(v1+2)
#define L1C_Str_UplinkAccessMode(v1)  (unsigned char)(v1+58)
#define L1C_Str_BandInfo(v1)  (unsigned char)(v1+62)
#define L1C_Str_RAS_State(v1)  (unsigned char)(v1+67)
#define L1C_Str_RAS_Period(v1)  (unsigned char)(v1+100)
#define L1C_Str_UTAS_Strategy(v1)  (unsigned char)(v1+104)
#define L1C_Str_Algo(v1)  (unsigned char)(v1+113)
#define L1C_Str_UTAS_Mode(v1)  (unsigned char)(v1+122)


/****************************/
/* Message macro definition */
/****************************/
#include "L1Trc.h"
#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define L1C_Msg_SetupPBCCh(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1C_GPRS_Trace_Filter, 2, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0054,0x0054);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1C_GPRS_Trace_Filter, 2, 0x02);\
		}\
	} while(0)
#else
	#define L1C_Msg_SetupPBCCh(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define L1C_Msg_SetupPPCh(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1C_GPRS_Trace_Filter, 2, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0154,0x0154);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1C_GPRS_Trace_Filter, 2, 0x04);\
		}\
	} while(0)
#else
	#define L1C_Msg_SetupPPCh(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define L1C_Msg_StartPAGCh(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1C_GPRS_Trace_Filter, 2, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0254,0x0254);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1C_GPRS_Trace_Filter, 2, 0x08);\
		}\
	} while(0)
#else
	#define L1C_Msg_StartPAGCh(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define L1C_Msg_SetupPRACh(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1C_GPRS_Trace_Filter, 2, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0354,0x0354);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1C_GPRS_Trace_Filter, 2, 0x10);\
		}\
	} while(0)
#else
	#define L1C_Msg_SetupPRACh(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define L1C_Msg_StartPollRespAB(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1C_GPRS_Trace_Filter, 2, 0x20);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0454,0x0454);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1C_GPRS_Trace_Filter, 2, 0x20);\
		}\
	} while(0)
#else
	#define L1C_Msg_StartPollRespAB(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define L1C_Msg_StartPollRespNB(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1C_GPRS_Trace_Filter, 2, 0x20);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0554,0x0554);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1C_GPRS_Trace_Filter, 2, 0x20);\
		}\
	} while(0)
#else
	#define L1C_Msg_StartPollRespNB(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define L1C_Msg_StartSingleULwoTBF(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1C_GPRS_Trace_Filter, 2, 0x40);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0654,0x0654);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1C_GPRS_Trace_Filter, 2, 0x40);\
		}\
	} while(0)
#else
	#define L1C_Msg_StartSingleULwoTBF(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define L1C_Msg_StartSingleDL(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1C_GPRS_Trace_Filter, 2, 0x80);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0754,0x0754);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1C_GPRS_Trace_Filter, 2, 0x80);\
		}\
	} while(0)
#else
	#define L1C_Msg_StartSingleDL(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define L1C_Msg_StartULTwoPhase(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1C_GPRS_Trace_Filter, 3, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0854,0x0854);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1C_GPRS_Trace_Filter, 3, 0x01);\
		}\
	} while(0)
#else
	#define L1C_Msg_StartULTwoPhase(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define L1C_Msg_StartIM(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1C_GPRS_Trace_Filter, 3, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0954,0x0954);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1C_GPRS_Trace_Filter, 3, 0x02);\
		}\
	} while(0)
#else
	#define L1C_Msg_StartIM(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define L1C_Msg_TAS_L1D_INFO(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1C_GPRS_Trace_Filter, 3, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0A54,0x0A54);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1C_GPRS_Trace_Filter, 3, 0x08);\
		}\
	} while(0)
#else
	#define L1C_Msg_TAS_L1D_INFO(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define L1C_Msg_TAS_Criterion(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1C_GPRS_Trace_Filter, 3, 0x08);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0B54,0x0B54);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1C_GPRS_Trace_Filter, 3, 0x08);\
		}\
	} while(0)
#else
	#define L1C_Msg_TAS_Criterion(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER)
	#define L1C_Msg_AntennaChange(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1C_GPRS_Trace_Filter, 3, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0C54,0x0C54);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1C_GPRS_Trace_Filter, 3, 0x08);\
		}\
	} while(0)
#else
	#define L1C_Msg_AntennaChange(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define L1C_Msg_LTEAntennaInherit(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1C_GPRS_Trace_Filter, 3, 0x08);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0D54,0x0D54);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1C_GPRS_Trace_Filter, 3, 0x08);\
		}\
	} while(0)
#else
	#define L1C_Msg_LTEAntennaInherit(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define L1C_Msg_TAS_Period(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1C_GPRS_Trace_Filter, 3, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0E54,0x0E54);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1C_GPRS_Trace_Filter, 3, 0x10);\
		}\
	} while(0)
#else
	#define L1C_Msg_TAS_Period(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define L1C_Msg_UTAS_evaluate(v1, v2, v3, v4, v5, v6) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1C_GPRS_Trace_Filter, 3, 0x08);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0F54,0x0F54);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1C_GPRS_Trace_Filter, 3, 0x08);\
		}\
	} while(0)
#else
	#define L1C_Msg_UTAS_evaluate(v1, v2, v3, v4, v5, v6)
#endif

#if defined(L1_CATCHER)
	#define L1C_Msg_UTAS_Force(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1C_GPRS_Trace_Filter, 3, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1054,0x1054);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1C_GPRS_Trace_Filter, 3, 0x08);\
		}\
	} while(0)
#else
	#define L1C_Msg_UTAS_Force(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define L1C_Msg_UTAS_Parameters(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1C_GPRS_Trace_Filter, 3, 0x08);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1154,0x1154);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1C_GPRS_Trace_Filter, 3, 0x08);\
		}\
	} while(0)
#else
	#define L1C_Msg_UTAS_Parameters(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER)
	#define L1C_Msg_UTAS_Mode_Change(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1C_GPRS_Trace_Filter, 3, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1254,0x1254);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1C_GPRS_Trace_Filter, 3, 0x08);\
		}\
	} while(0)
#else
	#define L1C_Msg_UTAS_Mode_Change(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define L1C_Msg_UTAS_Period(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1C_GPRS_Trace_Filter, 3, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1354,0x1354);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1C_GPRS_Trace_Filter, 3, 0x10);\
		}\
	} while(0)
#else
	#define L1C_Msg_UTAS_Period(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define L1C_Msg_UTAS_Common(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1C_GPRS_Trace_Filter, 3, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1454,0x1454);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1C_GPRS_Trace_Filter, 3, 0x10);\
		}\
	} while(0)
#else
	#define L1C_Msg_UTAS_Common(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define L1C_Msg_RAS_state(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1C_GPRS_Trace_Filter, 3, 0x20);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1554,0x1554);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1C_GPRS_Trace_Filter, 3, 0x20);\
		}\
	} while(0)
#else
	#define L1C_Msg_RAS_state(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define L1C_Msg_RAS_evaluate(v1, v2, v3, v4, v5, v6) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1C_GPRS_Trace_Filter, 3, 0x20);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1654,0x1654);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1C_GPRS_Trace_Filter, 3, 0x20);\
		}\
	} while(0)
#else
	#define L1C_Msg_RAS_evaluate(v1, v2, v3, v4, v5, v6)
#endif

#if defined(L1_CATCHER)
	#define L1C_Msg_RAS_SetArfcn(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1C_GPRS_Trace_Filter, 3, 0x20);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1754,0x1754);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1C_GPRS_Trace_Filter, 3, 0x20);\
		}\
	} while(0)
#else
	#define L1C_Msg_RAS_SetArfcn(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER)
	#define L1C_Msg_RAS_ScModeSwitch(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1C_GPRS_Trace_Filter, 3, 0x20);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1854,0x1854);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1C_GPRS_Trace_Filter, 3, 0x20);\
		}\
	} while(0)
#else
	#define L1C_Msg_RAS_ScModeSwitch(v1)
#endif

#if defined(L1_CATCHER)
	#define L1C_Msg_RAS_Parameters(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1C_GPRS_Trace_Filter, 3, 0x20);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1954,0x1954);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1C_GPRS_Trace_Filter, 3, 0x20);\
		}\
	} while(0)
#else
	#define L1C_Msg_RAS_Parameters(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define L1C_Msg_RAS_Period(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1C_GPRS_Trace_Filter, 3, 0x80);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1A54,0x1A54);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1C_GPRS_Trace_Filter, 3, 0x80);\
		}\
	} while(0)
#else
	#define L1C_Msg_RAS_Period(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define L1C_Msg_RAS_Common(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1C_GPRS_Trace_Filter, 3, 0x80);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1B54,0x1B54);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1C_GPRS_Trace_Filter, 3, 0x80);\
		}\
	} while(0)
#else
	#define L1C_Msg_RAS_Common(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define L1C_Msg_RXD_Report(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1C_GPRS_Trace_Filter, 3, 0x40);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1C54,0x1C54);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1C_GPRS_Trace_Filter, 3, 0x40);\
		}\
	} while(0)
#else
	#define L1C_Msg_RXD_Report(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define L1C_Msg_RAS_Forced(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1C_GPRS_Trace_Filter, 3, 0x80);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1D54,0x1D54);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1C_GPRS_Trace_Filter, 3, 0x80);\
		}\
	} while(0)
#else
	#define L1C_Msg_RAS_Forced(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define L1C_Msg_OBB_evaluate(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1C_GPRS_Trace_Filter, 3, 0x20);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1E54,0x1E54);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1C_GPRS_Trace_Filter, 3, 0x20);\
		}\
	} while(0)
#else
	#define L1C_Msg_OBB_evaluate(v1, v2, v3)
#endif



/*******************************/
/* declaration of filter array */
/*******************************/
EXTERN_TMD_FILTER(unsigned char, L1C_GPRS_Trace_Filter, 5);
/*************************/
/* Function declarations */
/*************************/
#ifdef L1_CATCHER

void Set_L1C_GPRS_Filter(unsigned char *setting);

#endif

/************************************/
/* Filter checking API declarations */
/************************************/

#define ChkL1ModFltr_L1C_GPRS()	(FILTER_CHECK(L1C_GPRS_Trace_Filter, 0, 1))
#define ChkL1ClsFltr_L1C_GPRS_ReportPBCCh_M()	(ChkL1ModFltr_L1C_GPRS()&&(FILTER_CHECK(L1C_GPRS_Trace_Filter, 1, 0x01)))
#define ChkL1ClsFltr_L1C_GPRS_ReportNPBCCh_M()	(ChkL1ModFltr_L1C_GPRS()&&(FILTER_CHECK(L1C_GPRS_Trace_Filter, 1, 0x02)))
#define ChkL1ClsFltr_L1C_GPRS_ReportPPCh_M()	(ChkL1ModFltr_L1C_GPRS()&&(FILTER_CHECK(L1C_GPRS_Trace_Filter, 1, 0x04)))
#define ChkL1ClsFltr_L1C_GPRS_ReportPTCCh_H()	(ChkL1ModFltr_L1C_GPRS()&&(FILTER_CHECK(L1C_GPRS_Trace_Filter, 1, 0x08)))
#define ChkL1ClsFltr_L1C_GPRS_ReportPDTCh_H()	(ChkL1ModFltr_L1C_GPRS()&&(FILTER_CHECK(L1C_GPRS_Trace_Filter, 1, 0x10)))
#define ChkL1ClsFltr_L1C_GPRS_L1T_TBFStart_M()	(ChkL1ModFltr_L1C_GPRS()&&(FILTER_CHECK(L1C_GPRS_Trace_Filter, 1, 0x20)))
#define ChkL1ClsFltr_L1C_GPRS_ReportPAGCh_M()	(ChkL1ModFltr_L1C_GPRS()&&(FILTER_CHECK(L1C_GPRS_Trace_Filter, 1, 0x40)))
#define ChkL1ClsFltr_L1C_GPRS_ReportSingleDL_H()	(ChkL1ModFltr_L1C_GPRS()&&(FILTER_CHECK(L1C_GPRS_Trace_Filter, 1, 0x80)))
#define ChkL1ClsFltr_L1C_GPRS_ReportULTwoPhase_H()	(ChkL1ModFltr_L1C_GPRS()&&(FILTER_CHECK(L1C_GPRS_Trace_Filter, 2, 0x01)))
#define ChkL1ClsFltr_L1C_GPRS_SetupPBCCh_M()	(ChkL1ModFltr_L1C_GPRS()&&(FILTER_CHECK(L1C_GPRS_Trace_Filter, 2, 0x02)))
#define ChkL1ClsFltr_L1C_GPRS_SetupPPCh_M()	(ChkL1ModFltr_L1C_GPRS()&&(FILTER_CHECK(L1C_GPRS_Trace_Filter, 2, 0x04)))
#define ChkL1ClsFltr_L1C_GPRS_StartPAGCh_M()	(ChkL1ModFltr_L1C_GPRS()&&(FILTER_CHECK(L1C_GPRS_Trace_Filter, 2, 0x08)))
#define ChkL1ClsFltr_L1C_GPRS_SetupPRACh_M()	(ChkL1ModFltr_L1C_GPRS()&&(FILTER_CHECK(L1C_GPRS_Trace_Filter, 2, 0x10)))
#define ChkL1ClsFltr_L1C_GPRS_StartPollResp_H()	(ChkL1ModFltr_L1C_GPRS()&&(FILTER_CHECK(L1C_GPRS_Trace_Filter, 2, 0x20)))
#define ChkL1ClsFltr_L1C_GPRS_StartSingleUL_H()	(ChkL1ModFltr_L1C_GPRS()&&(FILTER_CHECK(L1C_GPRS_Trace_Filter, 2, 0x40)))
#define ChkL1ClsFltr_L1C_GPRS_StartSingleDL_H()	(ChkL1ModFltr_L1C_GPRS()&&(FILTER_CHECK(L1C_GPRS_Trace_Filter, 2, 0x80)))
#define ChkL1ClsFltr_L1C_GPRS_StartULTwoPhase_H()	(ChkL1ModFltr_L1C_GPRS()&&(FILTER_CHECK(L1C_GPRS_Trace_Filter, 3, 0x01)))
#define ChkL1ClsFltr_L1C_GPRS_StartIM_M()	(ChkL1ModFltr_L1C_GPRS()&&(FILTER_CHECK(L1C_GPRS_Trace_Filter, 3, 0x02)))
#define ChkL1ClsFltr_L1C_GPRS_ReportIM_L()	(ChkL1ModFltr_L1C_GPRS()&&(FILTER_CHECK(L1C_GPRS_Trace_Filter, 3, 0x04)))
#define ChkL1ClsFltr_L1C_GPRS_TAS_H()	(ChkL1ModFltr_L1C_GPRS()&&(FILTER_CHECK(L1C_GPRS_Trace_Filter, 3, 0x08)))
#define ChkL1ClsFltr_L1C_GPRS_TAS_M()	(ChkL1ModFltr_L1C_GPRS()&&(FILTER_CHECK(L1C_GPRS_Trace_Filter, 3, 0x10)))
#define ChkL1ClsFltr_L1C_GPRS_RAS_H()	(ChkL1ModFltr_L1C_GPRS()&&(FILTER_CHECK(L1C_GPRS_Trace_Filter, 3, 0x20)))
#define ChkL1ClsFltr_L1C_GPRS_RXD_H()	(ChkL1ModFltr_L1C_GPRS()&&(FILTER_CHECK(L1C_GPRS_Trace_Filter, 3, 0x40)))
#define ChkL1ClsFltr_L1C_GPRS_RAS_M()	(ChkL1ModFltr_L1C_GPRS()&&(FILTER_CHECK(L1C_GPRS_Trace_Filter, 3, 0x80)))
#define ChkL1MsgFltr_L1C_Msg_SetupPBCCh()	ChkL1ClsFltr_L1C_GPRS_SetupPBCCh_M()
#define ChkL1MsgFltr_L1C_Msg_SetupPPCh()	ChkL1ClsFltr_L1C_GPRS_SetupPPCh_M()
#define ChkL1MsgFltr_L1C_Msg_StartPAGCh()	ChkL1ClsFltr_L1C_GPRS_StartPAGCh_M()
#define ChkL1MsgFltr_L1C_Msg_SetupPRACh()	ChkL1ClsFltr_L1C_GPRS_SetupPRACh_M()
#define ChkL1MsgFltr_L1C_Msg_StartPollRespAB()	ChkL1ClsFltr_L1C_GPRS_StartPollResp_H()
#define ChkL1MsgFltr_L1C_Msg_StartPollRespNB()	ChkL1ClsFltr_L1C_GPRS_StartPollResp_H()
#define ChkL1MsgFltr_L1C_Msg_StartSingleULwoTBF()	ChkL1ClsFltr_L1C_GPRS_StartSingleUL_H()
#define ChkL1MsgFltr_L1C_Msg_StartSingleDL()	ChkL1ClsFltr_L1C_GPRS_StartSingleDL_H()
#define ChkL1MsgFltr_L1C_Msg_StartULTwoPhase()	ChkL1ClsFltr_L1C_GPRS_StartULTwoPhase_H()
#define ChkL1MsgFltr_L1C_Msg_StartIM()	ChkL1ClsFltr_L1C_GPRS_StartIM_M()
#define ChkL1MsgFltr_L1C_Msg_TAS_L1D_INFO()	ChkL1ClsFltr_L1C_GPRS_TAS_H()
#define ChkL1MsgFltr_L1C_Msg_TAS_Criterion()	ChkL1ClsFltr_L1C_GPRS_TAS_H()
#define ChkL1MsgFltr_L1C_Msg_AntennaChange()	ChkL1ClsFltr_L1C_GPRS_TAS_H()
#define ChkL1MsgFltr_L1C_Msg_LTEAntennaInherit()	ChkL1ClsFltr_L1C_GPRS_TAS_H()
#define ChkL1MsgFltr_L1C_Msg_TAS_Period()	ChkL1ClsFltr_L1C_GPRS_TAS_M()
#define ChkL1MsgFltr_L1C_Msg_UTAS_evaluate()	ChkL1ClsFltr_L1C_GPRS_TAS_H()
#define ChkL1MsgFltr_L1C_Msg_UTAS_Force()	ChkL1ClsFltr_L1C_GPRS_TAS_H()
#define ChkL1MsgFltr_L1C_Msg_UTAS_Parameters()	ChkL1ClsFltr_L1C_GPRS_TAS_H()
#define ChkL1MsgFltr_L1C_Msg_UTAS_Mode_Change()	ChkL1ClsFltr_L1C_GPRS_TAS_H()
#define ChkL1MsgFltr_L1C_Msg_UTAS_Period()	ChkL1ClsFltr_L1C_GPRS_TAS_M()
#define ChkL1MsgFltr_L1C_Msg_UTAS_Common()	ChkL1ClsFltr_L1C_GPRS_TAS_M()
#define ChkL1MsgFltr_L1C_Msg_RAS_state()	ChkL1ClsFltr_L1C_GPRS_RAS_H()
#define ChkL1MsgFltr_L1C_Msg_RAS_evaluate()	ChkL1ClsFltr_L1C_GPRS_RAS_H()
#define ChkL1MsgFltr_L1C_Msg_RAS_SetArfcn()	ChkL1ClsFltr_L1C_GPRS_RAS_H()
#define ChkL1MsgFltr_L1C_Msg_RAS_ScModeSwitch()	ChkL1ClsFltr_L1C_GPRS_RAS_H()
#define ChkL1MsgFltr_L1C_Msg_RAS_Parameters()	ChkL1ClsFltr_L1C_GPRS_RAS_H()
#define ChkL1MsgFltr_L1C_Msg_RAS_Period()	ChkL1ClsFltr_L1C_GPRS_RAS_M()
#define ChkL1MsgFltr_L1C_Msg_RAS_Common()	ChkL1ClsFltr_L1C_GPRS_RAS_M()
#define ChkL1MsgFltr_L1C_Msg_RXD_Report()	ChkL1ClsFltr_L1C_GPRS_RXD_H()
#define ChkL1MsgFltr_L1C_Msg_RAS_Forced()	ChkL1ClsFltr_L1C_GPRS_RAS_M()
#define ChkL1MsgFltr_L1C_Msg_OBB_evaluate()	ChkL1ClsFltr_L1C_GPRS_RAS_H()


#endif
