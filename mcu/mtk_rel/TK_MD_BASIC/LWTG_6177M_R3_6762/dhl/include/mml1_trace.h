#ifndef L1TRC_MML1_RF_DEF_H
#define L1TRC_MML1_RF_DEF_H

/******************************/
/* String category definition */
/******************************/
#define MMRF_TRC_STR_SINGLE_RAT(v1)  (unsigned char)(v1+0)
#define MMRF_TRC_STR_RAT(v1)  (unsigned char)(v1+33)
#define MMRF_TRC_STR_RATs(v1)  (unsigned char)(v1+66)
#define MMRF_TRC_STR_MD(v1)  (unsigned char)(v1+130)
#define MMRF_TRC_STR_PHASE(v1)  (unsigned char)(v1+133)
#define MMRF_TRC_STR_STATE(v1)  (unsigned char)(v1+135)
#define MMRF_TRC_STR_FLAG(v1)  (unsigned char)(v1+137)
#define MMRF_TRC_STR_ONOFF(v1)  (unsigned char)(v1+139)
#define MMRF_TRC_STR_CLK_BUF_MODE(v1)  (unsigned char)(v1+141)
#define MMRF_TRC_STR_CLK_BUF_SW_STATUS(v1)  (unsigned char)(v1+144)
#define MMRF_TRC_STR_RW(v1)  (unsigned char)(v1+146)
#define MMRF_TRC_STR_RFIC(v1)  (unsigned char)(v1+148)
#define MMRF_TRC_STR_CLKBUF_DRIVING(v1)  (unsigned char)(v1+151)
#define MMRF_TRC_STR_BSILOGGER_RAT_RW(v1)  (unsigned char)(v1+155)
#define MMRF_TRC_STR_BSIMM_PORT(v1)  (unsigned char)(v1+187)
#define MMRF_TRC_STR_HEX(v1)  (unsigned char)(v1+198)
#define MMRF_TRC_STR_VCXO_TYPE(v1)  (unsigned char)(v1+214)
#define MMRF_TRC_MULTI_AFC_RAT(v1)  (unsigned char)(v1+217)
#define MMRF_TRC_BPI_DAT_BUF_CFG(v1)  (unsigned char)(v1+223)
#define MMDFE_TRC_MULTI_RAT(v1)  (unsigned char)(v1+237)
#define MMDFE_TRC_TQ_TYPE(v1)  (unsigned char)(v1+244)
#define MMRF_TRC_STR_CONFLICT_PIN(v1)  (unsigned char)(v1+246)
#define MML1_TX_TRC_TXSYS_ACCESS_RAT(v1)  (unsigned char)(v1+248)


/****************************/
/* Message macro definition */
/****************************/
#include "L1Trc.h"
#if defined(L1_CATCHER)
	#define MMRF_TRC_RF_Init1(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0079,0x0079);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define MMRF_TRC_RF_Init1(v1)
#endif

#if defined(L1_CATCHER)
	#define MMRF_TRC_RF_Init2(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0179,0x0179);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define MMRF_TRC_RF_Init2(v1)
#endif

#if defined(L1_CATCHER)
	#define MMRF_TRC_RF_PowerOn(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0279,0x0279);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define MMRF_TRC_RF_PowerOn(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define MMRF_TRC_RF_PowerOff(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0379,0x0379);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define MMRF_TRC_RF_PowerOff(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define MMRF_TRC_RF_SET_EG(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0479,0x0479);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define MMRF_TRC_RF_SET_EG(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define MMRF_TRC_RF_RETRIEVE_EG(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0579,0x0579);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define MMRF_TRC_RF_RETRIEVE_EG(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define MMRF_TRC_RF_ChipVersion(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0679,0x0679);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define MMRF_TRC_RF_ChipVersion(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define MMRF_TRC_RF_CoClockSetting(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0779,0x0779);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define MMRF_TRC_RF_CoClockSetting(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define MMRF_TRC_RF_ClkBuf_SWHWMode(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0879,0x0879);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define MMRF_TRC_RF_ClkBuf_SWHWMode(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define MMRF_TRC_RF_ClkBuf_SWStatus(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0979,0x0979);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define MMRF_TRC_RF_ClkBuf_SWStatus(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define MMRF_TRC_RF_ClkBuf_Driving(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0A79,0x0A79);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define MMRF_TRC_RF_ClkBuf_Driving(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define MMRF_TRC_RF_ClkBuf_Driving_CCCI(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0B79,0x0B79);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define MMRF_TRC_RF_ClkBuf_Driving_CCCI(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define MMRF_TRC_RF_EnterFlightMode(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0C79,0x0C79);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define MMRF_TRC_RF_EnterFlightMode(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define MMRF_TRC_RF_DCXOLPM(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0D79,0x0D79);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define MMRF_TRC_RF_DCXOLPM(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define MMRF_TRC_RF_DCXOFPM(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0E79,0x0E79);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define MMRF_TRC_RF_DCXOFPM(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define MMRF_TRC_RF_FIXAFC_EN(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0F79,0x0F79);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define MMRF_TRC_RF_FIXAFC_EN(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define MMRF_TRC_RF_CRYSTAL_ON_PMIC_EN(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1079,0x1079);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define MMRF_TRC_RF_CRYSTAL_ON_PMIC_EN(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define MMRF_TRC_RF_VCXO_TYPE(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1179,0x1179);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define MMRF_TRC_RF_VCXO_TYPE(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define MMRF_TRC_RF_COTMS_SCURVE_COEF(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x01);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1279,0x1279);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define MMRF_TRC_RF_COTMS_SCURVE_COEF(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define MMRF_TRC_RF_COTMS_CHECK(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1379,0x1379);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define MMRF_TRC_RF_COTMS_CHECK(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define MMRF_TRC_RF_DPDADC_26M_EN(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1479,0x1479);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define MMRF_TRC_RF_DPDADC_26M_EN(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define MMRF_TRC_RF_GET_AFCDAC(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1579,0x1579);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define MMRF_TRC_RF_GET_AFCDAC(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define MMRF_TRC_RF_CALOD(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1679,0x1679);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define MMRF_TRC_RF_CALOD(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define MMRF_TRC_RF_Conflict(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x20);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1779,0x1779);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x20);\
		}\
	} while(0)
#else
	#define MMRF_TRC_RF_Conflict(v1)
#endif

#if defined(L1_CATCHER)
	#define MMRF_TRC_RF_Conflict_BPI(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x20);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1879,0x1879);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x20);\
		}\
	} while(0)
#else
	#define MMRF_TRC_RF_Conflict_BPI(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define MMRF_TRC_RF_Conflict_LTE1(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x20);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1979,0x1979);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x20);\
		}\
	} while(0)
#else
	#define MMRF_TRC_RF_Conflict_LTE1(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define MMRF_TRC_RF_MULTIPIN_CONFLICT_BPI(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x20);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1A79,0x1A79);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x20);\
		}\
	} while(0)
#else
	#define MMRF_TRC_RF_MULTIPIN_CONFLICT_BPI(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define MMRF_TRC_RF_Conflict_RAT(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1B79,0x1B79);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define MMRF_TRC_RF_Conflict_RAT(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define MMRF_TRC_RF_Conflict_RAT_Mode(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x04);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1C79,0x1C79);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define MMRF_TRC_RF_Conflict_RAT_Mode(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER)
	#define MMRF_TRC_RF_Conflict_Clear(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x20);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1D79,0x1D79);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x20);\
		}\
	} while(0)
#else
	#define MMRF_TRC_RF_Conflict_Clear(v1)
#endif

#if defined(L1_CATCHER)
	#define MMRF_TRC_BPI_Conflict_Frc_TRC(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x20);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1E79,0x1E79);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x20);\
		}\
	} while(0)
#else
	#define MMRF_TRC_BPI_Conflict_Frc_TRC(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define MMRF_TRC_BPI_Conflict_BINSTR_TRC(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1F79,0x1F79);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define MMRF_TRC_BPI_Conflict_BINSTR_TRC(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define MMRF_TRC_CrossRAT_BSI_Conflict(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x20);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x2079,0x2079);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x20);\
		}\
	} while(0)
#else
	#define MMRF_TRC_CrossRAT_BSI_Conflict(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define MMRF_TRC_BPI_IMM_WRITE(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x20);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x2179,0x2179);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x20);\
		}\
	} while(0)
#else
	#define MMRF_TRC_BPI_IMM_WRITE(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define MMRF_TRC_BPI_IMM_WRITE_BUFF(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x20);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x2279,0x2279);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x20);\
		}\
	} while(0)
#else
	#define MMRF_TRC_BPI_IMM_WRITE_BUFF(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define MMRF_TRC_BPI_IMM_READ(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x2379,0x2379);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define MMRF_TRC_BPI_IMM_READ(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define MMRF_TRC_BPI_IMM_RW_RAT(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x2479,0x2479);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define MMRF_TRC_BPI_IMM_RW_RAT(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define MMRF_TRC_BPI_IMM_READ_LTE1(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x2579,0x2579);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define MMRF_TRC_BPI_IMM_READ_LTE1(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define MMRF_TRC_BPI_IMM_RW_RAT_MASK(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x2679,0x2679);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define MMRF_TRC_BPI_IMM_RW_RAT_MASK(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define MMRF_TRC_RF_CW_VALUE(v1, v2, v3, v4, v5, v6) do {\
		{\
			TRC_START_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x04);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x2779,0x2779);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define MMRF_TRC_RF_CW_VALUE(v1, v2, v3, v4, v5, v6)
#endif

#if defined(L1_CATCHER)
	#define MMRF_TRC_POR_CW_VALUE(v1, v2, v3, v4, v5, v6) do {\
		{\
			TRC_START_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x04);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x2879,0x2879);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define MMRF_TRC_POR_CW_VALUE(v1, v2, v3, v4, v5, v6)
#endif

#if defined(L1_CATCHER)
	#define MMRF_TRC_POC_CW_VALUE(v1, v2, v3, v4, v5, v6) do {\
		{\
			TRC_START_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x04);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x2979,0x2979);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define MMRF_TRC_POC_CW_VALUE(v1, v2, v3, v4, v5, v6)
#endif

#if defined(L1_CATCHER)
	#define MMRF_TRC_POR_RD_CHECK(v1, v2, v3, v4, v5, v6) do {\
		{\
			TRC_START_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x20);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x2A79,0x2A79);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x20);\
		}\
	} while(0)
#else
	#define MMRF_TRC_POR_RD_CHECK(v1, v2, v3, v4, v5, v6)
#endif

#if defined(L1_CATCHER)
	#define MMRF_TRC_HWPOR_NUM_CHECK(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x20);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x2B79,0x2B79);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x20);\
		}\
	} while(0)
#else
	#define MMRF_TRC_HWPOR_NUM_CHECK(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define MML1_TRC_POR_RD_CHECK_LOG(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x20);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x2C79,0x2C79);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x20);\
		}\
	} while(0)
#else
	#define MML1_TRC_POR_RD_CHECK_LOG(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define MML1_TRC_POR_RD_BYPASS(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x20);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x2D79,0x2D79);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x20);\
		}\
	} while(0)
#else
	#define MML1_TRC_POR_RD_BYPASS(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define MMRF_TRC_ABB_RCCAL(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x2E79,0x2E79);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define MMRF_TRC_ABB_RCCAL(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define MMRF_TRC_ABB_RCCAL_VALUE(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x2F79,0x2F79);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define MMRF_TRC_ABB_RCCAL_VALUE(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define MMRF_TRC_ABB_DPDRCAL(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x3079,0x3079);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define MMRF_TRC_ABB_DPDRCAL(v1)
#endif

#if defined(L1_CATCHER)
	#define MMRF_TRC_ADC_FAIL_CHECK(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x20);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x3179,0x3179);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x20);\
		}\
	} while(0)
#else
	#define MMRF_TRC_ADC_FAIL_CHECK(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define MMRF_TRC_DFEAPC_SEL(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x3279,0x3279);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define MMRF_TRC_DFEAPC_SEL(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define MMRF_TRC_ABB_SWAP(v1, v2, v3, v4, v5, v6, v7, v8) do {\
		{\
			TRC_START_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x02);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x3379,0x3379);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v7,v7);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v8,v8);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define MMRF_TRC_ABB_SWAP(v1, v2, v3, v4, v5, v6, v7, v8)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define MMRF_TRC_ABB_BBRX(v1, v2, v3, v4, v5, v6, v7, v8, v9) do {\
		{\
			TRC_START_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x02);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x3479,0x3479);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v7,v7);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v8,v8);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v9,v9);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define MMRF_TRC_ABB_BBRX(v1, v2, v3, v4, v5, v6, v7, v8, v9)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define MMRF_TRC_ABB_SWAP_MODE(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x3579,0x3579);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define MMRF_TRC_ABB_SWAP_MODE(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define MMRF_TRC_ABB_RESTORE_CHECK(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x20);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x3679,0x3679);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x20);\
		}\
	} while(0)
#else
	#define MMRF_TRC_ABB_RESTORE_CHECK(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define MMRF_TRC_DFE_IQ_QUERY(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x3779,0x3779);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define MMRF_TRC_DFE_IQ_QUERY(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define MMRF_TRC_DFE_IQ_SWAP_DBG(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x3879,0x3879);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define MMRF_TRC_DFE_IQ_SWAP_DBG(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define MMRF_TRC_DFE_IQ_INV_DBG(v1, v2, v3, v4, v5, v6) do {\
		{\
			TRC_START_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x08);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x3979,0x3979);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define MMRF_TRC_DFE_IQ_INV_DBG(v1, v2, v3, v4, v5, v6)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define MMRF_TRC_DFE_IQ_SWAP(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x3A79,0x3A79);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define MMRF_TRC_DFE_IQ_SWAP(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define MMRF_TRC_DFE_IQ_INV(v1, v2, v3, v4, v5, v6) do {\
		{\
			TRC_START_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x01);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x3B79,0x3B79);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define MMRF_TRC_DFE_IQ_INV(v1, v2, v3, v4, v5, v6)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define MMRF_TRC_DFE_FC_CON(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x3C79,0x3C79);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define MMRF_TRC_DFE_FC_CON(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define MMRF_TRC_TXDFE_SWAP_CON(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x04);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x3D79,0x3D79);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define MMRF_TRC_TXDFE_SWAP_CON(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define MMRF_TRC_TXDFE_CON_DBG(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x3E79,0x3E79);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define MMRF_TRC_TXDFE_CON_DBG(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define MMRF_TRC_PMIC_PWM_SET(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x3F79,0x3F79);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define MMRF_TRC_PMIC_PWM_SET(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define MMRF_TRC_PMIC_PWM_CLR(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x4079,0x4079);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define MMRF_TRC_PMIC_PWM_CLR(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define MMRF_TRC_PMIC_PWM_STATUS(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x4179,0x4179);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define MMRF_TRC_PMIC_PWM_STATUS(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define MMRF_TRC_PMIC_PWM_BYRAT(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x4279,0x4279);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define MMRF_TRC_PMIC_PWM_BYRAT(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define MMRF_TRC_PMIC_VPA_CONTROL(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x4379,0x4379);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define MMRF_TRC_PMIC_VPA_CONTROL(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define MMRF_TRC_PMIC_MISC_CTRL(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x20);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x4479,0x4479);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x20);\
		}\
	} while(0)
#else
	#define MMRF_TRC_PMIC_MISC_CTRL(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define MMRF_TRC_PMIC_OC_STATUS(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x20);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x4579,0x4579);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x20);\
		}\
	} while(0)
#else
	#define MMRF_TRC_PMIC_OC_STATUS(v1)
#endif

#if defined(L1_CATCHER)
	#define MMRF_TRC_PMIC_DCXO_CTRL(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x20);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x4679,0x4679);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x20);\
		}\
	} while(0)
#else
	#define MMRF_TRC_PMIC_DCXO_CTRL(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define MMRF_TRC_PMIC_DCXO_PM_SWITCH(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x20);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x4779,0x4779);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x20);\
		}\
	} while(0)
#else
	#define MMRF_TRC_PMIC_DCXO_PM_SWITCH(v1)
#endif

#if defined(L1_CATCHER)
	#define MMRF_TRC_MIPI_Init(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x4879,0x4879);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define MMRF_TRC_MIPI_Init(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define MMRF_TRC_MIPI_PowerOn(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x4979,0x4979);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define MMRF_TRC_MIPI_PowerOn(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define MMRF_TRC_MIPI_PowerOff(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x4A79,0x4A79);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define MMRF_TRC_MIPI_PowerOff(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define MMRF_TRC_MIPI_ChipVersion(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x4B79,0x4B79);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define MMRF_TRC_MIPI_ChipVersion(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define MMRF_TRC_CONFLICT_RAT_CHECK(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x20);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x4C79,0x4C79);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x20);\
		}\
	} while(0)
#else
	#define MMRF_TRC_CONFLICT_RAT_CHECK(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define MMRF_TRC_CCIRQ_VER1() do {\
		{\
			TRC_START_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x20);\
			TRC_START_FILL_L1();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L1(0x4D79,0x4D79);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x20);\
		}\
	} while(0)
#else
	#define MMRF_TRC_CCIRQ_VER1()
#endif

#if defined(L1_CATCHER)
	#define MMRF_TRC_CCIRQ_VER2(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x20);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x4E79,0x4E79);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x20);\
		}\
	} while(0)
#else
	#define MMRF_TRC_CCIRQ_VER2(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define MMRF_TRC_BSI_CLK_CG(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x4F79,0x4F79);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define MMRF_TRC_BSI_CLK_CG(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define MMRF_TRC_AP_CCIRQ(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x5079,0x5079);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define MMRF_TRC_AP_CCIRQ(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define MMRF_TRC_TOPSM_VRF18_REQ(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x5179,0x5179);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define MMRF_TRC_TOPSM_VRF18_REQ(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define MMRF_TRC_SPM_POWER_ON_VAL0(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x5279,0x5279);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define MMRF_TRC_SPM_POWER_ON_VAL0(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define MMRF_TRC_SPM_POWER_ON_VAL1(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x5379,0x5379);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define MMRF_TRC_SPM_POWER_ON_VAL1(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define MMRF_TRC_PCM_REG0(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x5479,0x5479);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define MMRF_TRC_PCM_REG0(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define MMRF_TRC_PCM_REG7(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x5579,0x5579);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define MMRF_TRC_PCM_REG7(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define MMRF_TRC_PCM_REG13(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x5679,0x5679);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define MMRF_TRC_PCM_REG13(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define MMRF_TRC_SPM_WAKEUP_STA(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x5779,0x5779);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define MMRF_TRC_SPM_WAKEUP_STA(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define MMRF_TRC_SPM_WAKEUP_EXT_STA(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x5879,0x5879);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define MMRF_TRC_SPM_WAKEUP_EXT_STA(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define MMRF_TRC_SPM_SRC_MASK(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x5979,0x5979);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define MMRF_TRC_SPM_SRC_MASK(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define MMRF_TRC_PCM_REG6(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x5A79,0x5A79);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define MMRF_TRC_PCM_REG6(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define MMRF_TRC_SPM_SW_FLAG(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x5B79,0x5B79);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define MMRF_TRC_SPM_SW_FLAG(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define MMRF_TRC_SPM_SW_DBG(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x5C79,0x5C79);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define MMRF_TRC_SPM_SW_DBG(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define MMRF_TRC_SPM_REG15(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x5D79,0x5D79);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define MMRF_TRC_SPM_REG15(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define MMRF_TRC_WHILE_LOOP_BYPASS(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x20);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x5E79,0x5E79);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x20);\
		}\
	} while(0)
#else
	#define MMRF_TRC_WHILE_LOOP_BYPASS(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define MMRF_TRC_SYSPLL_H_STATUS(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x5F79,0x5F79);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define MMRF_TRC_SYSPLL_H_STATUS(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define MMRF_TRC_SYSPLL_L_STATUS(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x6079,0x6079);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define MMRF_TRC_SYSPLL_L_STATUS(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define MMRF_TRC_LOAD_VER(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x20);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x6179,0x6179);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x20);\
		}\
	} while(0)
#else
	#define MMRF_TRC_LOAD_VER(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define MMRF_TRC_BPILOGGER_DBG(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x80);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x6279,0x6279);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x80);\
		}\
	} while(0)
#else
	#define MMRF_TRC_BPILOGGER_DBG(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define MMRF_TRC_BPI_TPCAGC_LOGGER_DBG(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x40);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x6379,0x6379);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x40);\
		}\
	} while(0)
#else
	#define MMRF_TRC_BPI_TPCAGC_LOGGER_DBG(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define MMRF_TRC_BSISPI_ARB_DFE_PRI(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x20);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x6479,0x6479);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x20);\
		}\
	} while(0)
#else
	#define MMRF_TRC_BSISPI_ARB_DFE_PRI(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define MMRF_TRC_RFCW_DUMP_DBG(v1, v2, v3, v4, v5, v6) do {\
		{\
			TRC_START_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x20);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x6579,0x6579);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x20);\
		}\
	} while(0)
#else
	#define MMRF_TRC_RFCW_DUMP_DBG(v1, v2, v3, v4, v5, v6)
#endif

#if defined(L1_CATCHER)
	#define MMRF_TRC_D16_REG_DBG(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x20);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x6679,0x6679);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x20);\
		}\
	} while(0)
#else
	#define MMRF_TRC_D16_REG_DBG(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER)
	#define MMRF_TRC_D32_REG_DBG(v1, v2, v3, v4, v5, v6, v7, v8, v9) do {\
		{\
			TRC_START_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x20);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x6779,0x6779);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v7,v7);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v8,v8);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v9,v9);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x20);\
		}\
	} while(0)
#else
	#define MMRF_TRC_D32_REG_DBG(v1, v2, v3, v4, v5, v6, v7, v8, v9)
#endif

#if defined(L1_CATCHER)
	#define MMRF_TRC_DEBUG1(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x20);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x6879,0x6879);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x20);\
		}\
	} while(0)
#else
	#define MMRF_TRC_DEBUG1(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define MMRF_TRC_DEBUG2(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x20);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x6979,0x6979);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x20);\
		}\
	} while(0)
#else
	#define MMRF_TRC_DEBUG2(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define MMRF_TRC_DEBUG3(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x20);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x6A79,0x6A79);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x20);\
		}\
	} while(0)
#else
	#define MMRF_TRC_DEBUG3(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define MMRF_TRC_DEBUG4(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x20);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x6B79,0x6B79);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x20);\
		}\
	} while(0)
#else
	#define MMRF_TRC_DEBUG4(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER)
	#define MMRF_TRC_DEBUG5(v1, v2, v3, v4, v5, v6) do {\
		{\
			TRC_START_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x20);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x6C79,0x6C79);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x20);\
		}\
	} while(0)
#else
	#define MMRF_TRC_DEBUG5(v1, v2, v3, v4, v5, v6)
#endif

#if defined(L1_CATCHER)
	#define MMRF_TRC_DEBUG6(v1, v2, v3, v4, v5, v6, v7) do {\
		{\
			TRC_START_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x20);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x6D79,0x6D79);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v7,v7);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x20);\
		}\
	} while(0)
#else
	#define MMRF_TRC_DEBUG6(v1, v2, v3, v4, v5, v6, v7)
#endif

#if defined(L1_CATCHER)
	#define MMRF_TRC_DEBUG7(v1, v2, v3, v4, v5, v6, v7, v8) do {\
		{\
			TRC_START_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x20);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x6E79,0x6E79);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v7,v7);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v8,v8);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x20);\
		}\
	} while(0)
#else
	#define MMRF_TRC_DEBUG7(v1, v2, v3, v4, v5, v6, v7, v8)
#endif

#if defined(L1_CATCHER)
	#define MMRF_TRC_HEX_DEBUG1(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x20);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x6F79,0x6F79);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x20);\
		}\
	} while(0)
#else
	#define MMRF_TRC_HEX_DEBUG1(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define MMRF_TRC_HEX_DEBUG2(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x20);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x7079,0x7079);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x20);\
		}\
	} while(0)
#else
	#define MMRF_TRC_HEX_DEBUG2(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define MMRF_TRC_HEX_DEBUG3(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x20);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x7179,0x7179);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x20);\
		}\
	} while(0)
#else
	#define MMRF_TRC_HEX_DEBUG3(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define MMRF_TRC_HEX_DEBUG4(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x20);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x7279,0x7279);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x20);\
		}\
	} while(0)
#else
	#define MMRF_TRC_HEX_DEBUG4(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER)
	#define MMRF_TRC_HEX_DEBUG5(v1, v2, v3, v4, v5, v6) do {\
		{\
			TRC_START_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x20);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x7379,0x7379);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x20);\
		}\
	} while(0)
#else
	#define MMRF_TRC_HEX_DEBUG5(v1, v2, v3, v4, v5, v6)
#endif

#if defined(L1_CATCHER)
	#define MMRF_TRC_HEX_DEBUG6(v1, v2, v3, v4, v5, v6, v7) do {\
		{\
			TRC_START_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x20);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x7479,0x7479);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v7,v7);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x20);\
		}\
	} while(0)
#else
	#define MMRF_TRC_HEX_DEBUG6(v1, v2, v3, v4, v5, v6, v7)
#endif

#if defined(L1_CATCHER)
	#define MMRF_TRC_HEX_DEBUG7(v1, v2, v3, v4, v5, v6, v7, v8) do {\
		{\
			TRC_START_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x20);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x7579,0x7579);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v7,v7);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v8,v8);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x20);\
		}\
	} while(0)
#else
	#define MMRF_TRC_HEX_DEBUG7(v1, v2, v3, v4, v5, v6, v7, v8)
#endif

#if defined(L1_CATCHER)
	#define MMRF_TRC_UBIN_WMID(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x7679,0x7679);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define MMRF_TRC_UBIN_WMID(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define MMRF_TRC_UBIN_SET_WMID(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x7779,0x7779);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define MMRF_TRC_UBIN_SET_WMID(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define MMRF_TRC_Current_AFC_SHM(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10) do {\
		{\
			TRC_START_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x04);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x7879,0x7879);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v7,v7);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v8,v8);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v9,v9);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v10,v10);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define MMRF_TRC_Current_AFC_SHM(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10)
#endif

#if defined(L1_CATCHER)
	#define MMRF_TRC_Current_AFC_SHM_Reduce(v1, v2, v3, v4, v5, v6) do {\
		{\
			TRC_START_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x04);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x7979,0x7979);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define MMRF_TRC_Current_AFC_SHM_Reduce(v1, v2, v3, v4, v5, v6)
#endif

#if defined(L1_CATCHER)
	#define MMRF_TRC_C2K_POC_SET_DB_BEGIN(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x7A79,0x7A79);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define MMRF_TRC_C2K_POC_SET_DB_BEGIN(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define MMRF_TRC_C2K_POC_SET_DB_END(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x7B79,0x7B79);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define MMRF_TRC_C2K_POC_SET_DB_END(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define MMRF_TRC_C2K_POC_GET_RESULT_BEGIN(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x7C79,0x7C79);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define MMRF_TRC_C2K_POC_GET_RESULT_BEGIN(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define MMRF_TRC_C2K_POC_GET_RESULT_END(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x7D79,0x7D79);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define MMRF_TRC_C2K_POC_GET_RESULT_END(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define MMRF_TRC_C2K_POC_BEGIN(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x7E79,0x7E79);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define MMRF_TRC_C2K_POC_BEGIN(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define MMRF_TRC_C2K_POC_END(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x7F79,0x7F79);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define MMRF_TRC_C2K_POC_END(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define MMRF_TRC_TPO_DBG(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x20);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x8079,0x8079);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x20);\
		}\
	} while(0)
#else
	#define MMRF_TRC_TPO_DBG(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define MMRF_TRC_TPO_UPDATE_DBG(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x20);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x8179,0x8179);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x20);\
		}\
	} while(0)
#else
	#define MMRF_TRC_TPO_UPDATE_DBG(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define MMRF_TRC_IRAT_EL1_TAS_INFO(v1, v2, v3, v4, v5, v6) do {\
		{\
			TRC_START_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x20);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x8279,0x8279);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x20);\
		}\
	} while(0)
#else
	#define MMRF_TRC_IRAT_EL1_TAS_INFO(v1, v2, v3, v4, v5, v6)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define MMRF_TRC_RXDFE_TQ_REQUEST_DBG(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x8379,0x8379);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define MMRF_TRC_RXDFE_TQ_REQUEST_DBG(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define MMRF_TRC_RXDFE_TQ_WAIT_DBG(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x20);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x8479,0x8479);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x20);\
		}\
	} while(0)
#else
	#define MMRF_TRC_RXDFE_TQ_WAIT_DBG(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define MMRF_TRC_RXDFE_TQ_WAIT_REL_DBG(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x20);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x8579,0x8579);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x20);\
		}\
	} while(0)
#else
	#define MMRF_TRC_RXDFE_TQ_WAIT_REL_DBG(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define MMRF_TRC_RXDFE_TQ_OBTAIN_DBG(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x20);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x8679,0x8679);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x20);\
		}\
	} while(0)
#else
	#define MMRF_TRC_RXDFE_TQ_OBTAIN_DBG(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define MMRF_TRC_RXDFE_TQ_RELEASE_DBG(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x20);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x8779,0x8779);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x20);\
		}\
	} while(0)
#else
	#define MMRF_TRC_RXDFE_TQ_RELEASE_DBG(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define MMRF_TRC_RXDFE_TQ_RELEASE_DBG2(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x8879,0x8879);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define MMRF_TRC_RXDFE_TQ_RELEASE_DBG2(v1)
#endif

#if defined(L1_CATCHER)
	#define MMRF_TRC_RXDFE_TQ_EXCEED_DBG(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x20);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x8979,0x8979);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x20);\
		}\
	} while(0)
#else
	#define MMRF_TRC_RXDFE_TQ_EXCEED_DBG(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define MMRF_TRC_RXDFE_FC_EXCEED_DBG(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x20);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x8A79,0x8A79);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x20);\
		}\
	} while(0)
#else
	#define MMRF_TRC_RXDFE_FC_EXCEED_DBG(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define MMRF_TRC_RXDFE_ATIMER() do {\
		{\
			TRC_START_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x20);\
			TRC_START_FILL_L1();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L1(0x8B79,0x8B79);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x20);\
		}\
	} while(0)
#else
	#define MMRF_TRC_RXDFE_ATIMER()
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define MMRF_TRC_RXDFE_TQ_CHECK(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x8C79,0x8C79);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define MMRF_TRC_RXDFE_TQ_CHECK(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define MMRF_TRC_RXDFE_TQ_WAIT(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x8D79,0x8D79);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define MMRF_TRC_RXDFE_TQ_WAIT(v1)
#endif

#if defined(L1_CATCHER)
	#define MML1_TX_TRC_TXSYS_GET_RIGHT_ERR(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 2, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x8E79,0x8E79);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 2, 0x08);\
		}\
	} while(0)
#else
	#define MML1_TX_TRC_TXSYS_GET_RIGHT_ERR(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define MML1_TX_TRC_TXSYS_CHK_RIGHT_ERR(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 2, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x8F79,0x8F79);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 2, 0x08);\
		}\
	} while(0)
#else
	#define MML1_TX_TRC_TXSYS_CHK_RIGHT_ERR(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define MML1_TX_TRC_TXSYS_GET_RIGHT(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 2, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x9079,0x9079);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 2, 0x08);\
		}\
	} while(0)
#else
	#define MML1_TX_TRC_TXSYS_GET_RIGHT(v1)
#endif

#if defined(L1_CATCHER)
	#define MML1_TX_TRC_TXSYS_RELEASE_RIGHT(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 2, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x9179,0x9179);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 2, 0x08);\
		}\
	} while(0)
#else
	#define MML1_TX_TRC_TXSYS_RELEASE_RIGHT(v1)
#endif

#if defined(L1_CATCHER)
	#define MML1_TX_TRC_TXSYS_TXCRP_CLOCK(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 2, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x9279,0x9279);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 2, 0x08);\
		}\
	} while(0)
#else
	#define MML1_TX_TRC_TXSYS_TXCRP_CLOCK(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define MML1_TX_TRC_TXSYS_TXBRP_CLOCK(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 2, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x9379,0x9379);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 2, 0x08);\
		}\
	} while(0)
#else
	#define MML1_TX_TRC_TXSYS_TXBRP_CLOCK(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define MMRF_TRC_PWR_INDICATION_DBG(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x20);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x9479,0x9479);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(MML1_RF_Trace_Filter, 1, 0x20);\
		}\
	} while(0)
#else
	#define MMRF_TRC_PWR_INDICATION_DBG(v1, v2, v3, v4)
#endif



/*******************************/
/* declaration of filter array */
/*******************************/
EXTERN_TMD_FILTER(unsigned char, MML1_RF_Trace_Filter, 5);
/*************************/
/* Function declarations */
/*************************/
#ifdef L1_CATCHER

void Set_MML1_RF_Filter(unsigned char *setting);

#endif

/************************************/
/* Filter checking API declarations */
/************************************/

#define ChkL1ModFltr_MML1_RF()	(FILTER_CHECK(MML1_RF_Trace_Filter, 0, 1))
#define ChkL1ClsFltr_MML1_RF_MML1_RF_L()	(ChkL1ModFltr_MML1_RF()&&(FILTER_CHECK(MML1_RF_Trace_Filter, 1, 0x01)))
#define ChkL1ClsFltr_MML1_RF_MML1_RF_M()	(ChkL1ModFltr_MML1_RF()&&(FILTER_CHECK(MML1_RF_Trace_Filter, 1, 0x02)))
#define ChkL1ClsFltr_MML1_RF_MML1_RF_H()	(ChkL1ModFltr_MML1_RF()&&(FILTER_CHECK(MML1_RF_Trace_Filter, 1, 0x04)))
#define ChkL1ClsFltr_MML1_RF_MML1_DBG_L()	(ChkL1ModFltr_MML1_RF()&&(FILTER_CHECK(MML1_RF_Trace_Filter, 1, 0x08)))
#define ChkL1ClsFltr_MML1_RF_MML1_DBG_M()	(ChkL1ModFltr_MML1_RF()&&(FILTER_CHECK(MML1_RF_Trace_Filter, 1, 0x10)))
#define ChkL1ClsFltr_MML1_RF_MML1_DBG_H()	(ChkL1ModFltr_MML1_RF()&&(FILTER_CHECK(MML1_RF_Trace_Filter, 1, 0x20)))
#define ChkL1ClsFltr_MML1_RF_MML1_BPILOG_L()	(ChkL1ModFltr_MML1_RF()&&(FILTER_CHECK(MML1_RF_Trace_Filter, 1, 0x40)))
#define ChkL1ClsFltr_MML1_RF_MML1_BPILOG_M()	(ChkL1ModFltr_MML1_RF()&&(FILTER_CHECK(MML1_RF_Trace_Filter, 1, 0x80)))
#define ChkL1ClsFltr_MML1_RF_MML1_BPILOG_H()	(ChkL1ModFltr_MML1_RF()&&(FILTER_CHECK(MML1_RF_Trace_Filter, 2, 0x01)))
#define ChkL1ClsFltr_MML1_RF_MML1_TXSYS_L()	(ChkL1ModFltr_MML1_RF()&&(FILTER_CHECK(MML1_RF_Trace_Filter, 2, 0x02)))
#define ChkL1ClsFltr_MML1_RF_MML1_TXSYS_M()	(ChkL1ModFltr_MML1_RF()&&(FILTER_CHECK(MML1_RF_Trace_Filter, 2, 0x04)))
#define ChkL1ClsFltr_MML1_RF_MML1_TXSYS_H()	(ChkL1ModFltr_MML1_RF()&&(FILTER_CHECK(MML1_RF_Trace_Filter, 2, 0x08)))
#define ChkL1MsgFltr_MMRF_TRC_RF_Init1()	ChkL1ClsFltr_MML1_RF_MML1_RF_H()
#define ChkL1MsgFltr_MMRF_TRC_RF_Init2()	ChkL1ClsFltr_MML1_RF_MML1_RF_H()
#define ChkL1MsgFltr_MMRF_TRC_RF_PowerOn()	ChkL1ClsFltr_MML1_RF_MML1_RF_H()
#define ChkL1MsgFltr_MMRF_TRC_RF_PowerOff()	ChkL1ClsFltr_MML1_RF_MML1_RF_H()
#define ChkL1MsgFltr_MMRF_TRC_RF_SET_EG()	ChkL1ClsFltr_MML1_RF_MML1_RF_H()
#define ChkL1MsgFltr_MMRF_TRC_RF_RETRIEVE_EG()	ChkL1ClsFltr_MML1_RF_MML1_RF_H()
#define ChkL1MsgFltr_MMRF_TRC_RF_ChipVersion()	ChkL1ClsFltr_MML1_RF_MML1_RF_H()
#define ChkL1MsgFltr_MMRF_TRC_RF_CoClockSetting()	ChkL1ClsFltr_MML1_RF_MML1_RF_H()
#define ChkL1MsgFltr_MMRF_TRC_RF_ClkBuf_SWHWMode()	ChkL1ClsFltr_MML1_RF_MML1_RF_H()
#define ChkL1MsgFltr_MMRF_TRC_RF_ClkBuf_SWStatus()	ChkL1ClsFltr_MML1_RF_MML1_RF_H()
#define ChkL1MsgFltr_MMRF_TRC_RF_ClkBuf_Driving()	ChkL1ClsFltr_MML1_RF_MML1_RF_H()
#define ChkL1MsgFltr_MMRF_TRC_RF_ClkBuf_Driving_CCCI()	ChkL1ClsFltr_MML1_RF_MML1_RF_H()
#define ChkL1MsgFltr_MMRF_TRC_RF_EnterFlightMode()	ChkL1ClsFltr_MML1_RF_MML1_RF_H()
#define ChkL1MsgFltr_MMRF_TRC_RF_DCXOLPM()	ChkL1ClsFltr_MML1_RF_MML1_RF_H()
#define ChkL1MsgFltr_MMRF_TRC_RF_DCXOFPM()	ChkL1ClsFltr_MML1_RF_MML1_RF_L()
#define ChkL1MsgFltr_MMRF_TRC_RF_FIXAFC_EN()	ChkL1ClsFltr_MML1_RF_MML1_RF_L()
#define ChkL1MsgFltr_MMRF_TRC_RF_CRYSTAL_ON_PMIC_EN()	ChkL1ClsFltr_MML1_RF_MML1_RF_L()
#define ChkL1MsgFltr_MMRF_TRC_RF_VCXO_TYPE()	ChkL1ClsFltr_MML1_RF_MML1_RF_L()
#define ChkL1MsgFltr_MMRF_TRC_RF_COTMS_SCURVE_COEF()	ChkL1ClsFltr_MML1_RF_MML1_RF_L()
#define ChkL1MsgFltr_MMRF_TRC_RF_COTMS_CHECK()	ChkL1ClsFltr_MML1_RF_MML1_RF_L()
#define ChkL1MsgFltr_MMRF_TRC_RF_DPDADC_26M_EN()	ChkL1ClsFltr_MML1_RF_MML1_RF_L()
#define ChkL1MsgFltr_MMRF_TRC_RF_GET_AFCDAC()	ChkL1ClsFltr_MML1_RF_MML1_RF_L()
#define ChkL1MsgFltr_MMRF_TRC_RF_CALOD()	ChkL1ClsFltr_MML1_RF_MML1_RF_M()
#define ChkL1MsgFltr_MMRF_TRC_RF_Conflict()	ChkL1ClsFltr_MML1_RF_MML1_DBG_H()
#define ChkL1MsgFltr_MMRF_TRC_RF_Conflict_BPI()	ChkL1ClsFltr_MML1_RF_MML1_DBG_H()
#define ChkL1MsgFltr_MMRF_TRC_RF_Conflict_LTE1()	ChkL1ClsFltr_MML1_RF_MML1_DBG_H()
#define ChkL1MsgFltr_MMRF_TRC_RF_MULTIPIN_CONFLICT_BPI()	ChkL1ClsFltr_MML1_RF_MML1_DBG_H()
#define ChkL1MsgFltr_MMRF_TRC_RF_Conflict_RAT()	ChkL1ClsFltr_MML1_RF_MML1_RF_H()
#define ChkL1MsgFltr_MMRF_TRC_RF_Conflict_RAT_Mode()	ChkL1ClsFltr_MML1_RF_MML1_RF_H()
#define ChkL1MsgFltr_MMRF_TRC_RF_Conflict_Clear()	ChkL1ClsFltr_MML1_RF_MML1_DBG_H()
#define ChkL1MsgFltr_MMRF_TRC_BPI_Conflict_Frc_TRC()	ChkL1ClsFltr_MML1_RF_MML1_DBG_H()
#define ChkL1MsgFltr_MMRF_TRC_BPI_Conflict_BINSTR_TRC()	ChkL1ClsFltr_MML1_RF_MML1_DBG_L()
#define ChkL1MsgFltr_MMRF_TRC_CrossRAT_BSI_Conflict()	ChkL1ClsFltr_MML1_RF_MML1_DBG_H()
#define ChkL1MsgFltr_MMRF_TRC_BPI_IMM_WRITE()	ChkL1ClsFltr_MML1_RF_MML1_DBG_H()
#define ChkL1MsgFltr_MMRF_TRC_BPI_IMM_WRITE_BUFF()	ChkL1ClsFltr_MML1_RF_MML1_DBG_H()
#define ChkL1MsgFltr_MMRF_TRC_BPI_IMM_READ()	ChkL1ClsFltr_MML1_RF_MML1_DBG_L()
#define ChkL1MsgFltr_MMRF_TRC_BPI_IMM_RW_RAT()	ChkL1ClsFltr_MML1_RF_MML1_RF_L()
#define ChkL1MsgFltr_MMRF_TRC_BPI_IMM_READ_LTE1()	ChkL1ClsFltr_MML1_RF_MML1_RF_L()
#define ChkL1MsgFltr_MMRF_TRC_BPI_IMM_RW_RAT_MASK()	ChkL1ClsFltr_MML1_RF_MML1_RF_H()
#define ChkL1MsgFltr_MMRF_TRC_RF_CW_VALUE()	ChkL1ClsFltr_MML1_RF_MML1_RF_H()
#define ChkL1MsgFltr_MMRF_TRC_POR_CW_VALUE()	ChkL1ClsFltr_MML1_RF_MML1_RF_H()
#define ChkL1MsgFltr_MMRF_TRC_POC_CW_VALUE()	ChkL1ClsFltr_MML1_RF_MML1_RF_H()
#define ChkL1MsgFltr_MMRF_TRC_POR_RD_CHECK()	ChkL1ClsFltr_MML1_RF_MML1_DBG_H()
#define ChkL1MsgFltr_MMRF_TRC_HWPOR_NUM_CHECK()	ChkL1ClsFltr_MML1_RF_MML1_DBG_H()
#define ChkL1MsgFltr_MML1_TRC_POR_RD_CHECK_LOG()	ChkL1ClsFltr_MML1_RF_MML1_DBG_H()
#define ChkL1MsgFltr_MML1_TRC_POR_RD_BYPASS()	ChkL1ClsFltr_MML1_RF_MML1_DBG_H()
#define ChkL1MsgFltr_MMRF_TRC_ABB_RCCAL()	ChkL1ClsFltr_MML1_RF_MML1_RF_L()
#define ChkL1MsgFltr_MMRF_TRC_ABB_RCCAL_VALUE()	ChkL1ClsFltr_MML1_RF_MML1_RF_L()
#define ChkL1MsgFltr_MMRF_TRC_ABB_DPDRCAL()	ChkL1ClsFltr_MML1_RF_MML1_RF_L()
#define ChkL1MsgFltr_MMRF_TRC_ADC_FAIL_CHECK()	ChkL1ClsFltr_MML1_RF_MML1_DBG_H()
#define ChkL1MsgFltr_MMRF_TRC_DFEAPC_SEL()	ChkL1ClsFltr_MML1_RF_MML1_RF_M()
#define ChkL1MsgFltr_MMRF_TRC_ABB_SWAP()	ChkL1ClsFltr_MML1_RF_MML1_RF_M()
#define ChkL1MsgFltr_MMRF_TRC_ABB_BBRX()	ChkL1ClsFltr_MML1_RF_MML1_RF_M()
#define ChkL1MsgFltr_MMRF_TRC_ABB_SWAP_MODE()	ChkL1ClsFltr_MML1_RF_MML1_RF_M()
#define ChkL1MsgFltr_MMRF_TRC_ABB_RESTORE_CHECK()	ChkL1ClsFltr_MML1_RF_MML1_DBG_H()
#define ChkL1MsgFltr_MMRF_TRC_DFE_IQ_QUERY()	ChkL1ClsFltr_MML1_RF_MML1_DBG_L()
#define ChkL1MsgFltr_MMRF_TRC_DFE_IQ_SWAP_DBG()	ChkL1ClsFltr_MML1_RF_MML1_DBG_L()
#define ChkL1MsgFltr_MMRF_TRC_DFE_IQ_INV_DBG()	ChkL1ClsFltr_MML1_RF_MML1_DBG_L()
#define ChkL1MsgFltr_MMRF_TRC_DFE_IQ_SWAP()	ChkL1ClsFltr_MML1_RF_MML1_RF_L()
#define ChkL1MsgFltr_MMRF_TRC_DFE_IQ_INV()	ChkL1ClsFltr_MML1_RF_MML1_RF_L()
#define ChkL1MsgFltr_MMRF_TRC_DFE_FC_CON()	ChkL1ClsFltr_MML1_RF_MML1_DBG_L()
#define ChkL1MsgFltr_MMRF_TRC_TXDFE_SWAP_CON()	ChkL1ClsFltr_MML1_RF_MML1_RF_H()
#define ChkL1MsgFltr_MMRF_TRC_TXDFE_CON_DBG()	ChkL1ClsFltr_MML1_RF_MML1_DBG_L()
#define ChkL1MsgFltr_MMRF_TRC_PMIC_PWM_SET()	ChkL1ClsFltr_MML1_RF_MML1_RF_L()
#define ChkL1MsgFltr_MMRF_TRC_PMIC_PWM_CLR()	ChkL1ClsFltr_MML1_RF_MML1_RF_L()
#define ChkL1MsgFltr_MMRF_TRC_PMIC_PWM_STATUS()	ChkL1ClsFltr_MML1_RF_MML1_RF_M()
#define ChkL1MsgFltr_MMRF_TRC_PMIC_PWM_BYRAT()	ChkL1ClsFltr_MML1_RF_MML1_RF_M()
#define ChkL1MsgFltr_MMRF_TRC_PMIC_VPA_CONTROL()	ChkL1ClsFltr_MML1_RF_MML1_RF_M()
#define ChkL1MsgFltr_MMRF_TRC_PMIC_MISC_CTRL()	ChkL1ClsFltr_MML1_RF_MML1_DBG_H()
#define ChkL1MsgFltr_MMRF_TRC_PMIC_OC_STATUS()	ChkL1ClsFltr_MML1_RF_MML1_DBG_H()
#define ChkL1MsgFltr_MMRF_TRC_PMIC_DCXO_CTRL()	ChkL1ClsFltr_MML1_RF_MML1_DBG_H()
#define ChkL1MsgFltr_MMRF_TRC_PMIC_DCXO_PM_SWITCH()	ChkL1ClsFltr_MML1_RF_MML1_DBG_H()
#define ChkL1MsgFltr_MMRF_TRC_MIPI_Init()	ChkL1ClsFltr_MML1_RF_MML1_RF_H()
#define ChkL1MsgFltr_MMRF_TRC_MIPI_PowerOn()	ChkL1ClsFltr_MML1_RF_MML1_RF_L()
#define ChkL1MsgFltr_MMRF_TRC_MIPI_PowerOff()	ChkL1ClsFltr_MML1_RF_MML1_RF_L()
#define ChkL1MsgFltr_MMRF_TRC_MIPI_ChipVersion()	ChkL1ClsFltr_MML1_RF_MML1_RF_H()
#define ChkL1MsgFltr_MMRF_TRC_CONFLICT_RAT_CHECK()	ChkL1ClsFltr_MML1_RF_MML1_DBG_H()
#define ChkL1MsgFltr_MMRF_TRC_CCIRQ_VER1()	ChkL1ClsFltr_MML1_RF_MML1_DBG_H()
#define ChkL1MsgFltr_MMRF_TRC_CCIRQ_VER2()	ChkL1ClsFltr_MML1_RF_MML1_DBG_H()
#define ChkL1MsgFltr_MMRF_TRC_BSI_CLK_CG()	ChkL1ClsFltr_MML1_RF_MML1_DBG_L()
#define ChkL1MsgFltr_MMRF_TRC_AP_CCIRQ()	ChkL1ClsFltr_MML1_RF_MML1_DBG_L()
#define ChkL1MsgFltr_MMRF_TRC_TOPSM_VRF18_REQ()	ChkL1ClsFltr_MML1_RF_MML1_DBG_L()
#define ChkL1MsgFltr_MMRF_TRC_SPM_POWER_ON_VAL0()	ChkL1ClsFltr_MML1_RF_MML1_DBG_L()
#define ChkL1MsgFltr_MMRF_TRC_SPM_POWER_ON_VAL1()	ChkL1ClsFltr_MML1_RF_MML1_DBG_L()
#define ChkL1MsgFltr_MMRF_TRC_PCM_REG0()	ChkL1ClsFltr_MML1_RF_MML1_DBG_L()
#define ChkL1MsgFltr_MMRF_TRC_PCM_REG7()	ChkL1ClsFltr_MML1_RF_MML1_DBG_L()
#define ChkL1MsgFltr_MMRF_TRC_PCM_REG13()	ChkL1ClsFltr_MML1_RF_MML1_DBG_L()
#define ChkL1MsgFltr_MMRF_TRC_SPM_WAKEUP_STA()	ChkL1ClsFltr_MML1_RF_MML1_DBG_L()
#define ChkL1MsgFltr_MMRF_TRC_SPM_WAKEUP_EXT_STA()	ChkL1ClsFltr_MML1_RF_MML1_DBG_L()
#define ChkL1MsgFltr_MMRF_TRC_SPM_SRC_MASK()	ChkL1ClsFltr_MML1_RF_MML1_DBG_L()
#define ChkL1MsgFltr_MMRF_TRC_PCM_REG6()	ChkL1ClsFltr_MML1_RF_MML1_DBG_L()
#define ChkL1MsgFltr_MMRF_TRC_SPM_SW_FLAG()	ChkL1ClsFltr_MML1_RF_MML1_DBG_L()
#define ChkL1MsgFltr_MMRF_TRC_SPM_SW_DBG()	ChkL1ClsFltr_MML1_RF_MML1_DBG_L()
#define ChkL1MsgFltr_MMRF_TRC_SPM_REG15()	ChkL1ClsFltr_MML1_RF_MML1_DBG_L()
#define ChkL1MsgFltr_MMRF_TRC_WHILE_LOOP_BYPASS()	ChkL1ClsFltr_MML1_RF_MML1_DBG_H()
#define ChkL1MsgFltr_MMRF_TRC_SYSPLL_H_STATUS()	ChkL1ClsFltr_MML1_RF_MML1_DBG_L()
#define ChkL1MsgFltr_MMRF_TRC_SYSPLL_L_STATUS()	ChkL1ClsFltr_MML1_RF_MML1_DBG_L()
#define ChkL1MsgFltr_MMRF_TRC_LOAD_VER()	ChkL1ClsFltr_MML1_RF_MML1_DBG_H()
#define ChkL1MsgFltr_MMRF_TRC_BPILOGGER_DBG()	ChkL1ClsFltr_MML1_RF_MML1_BPILOG_M()
#define ChkL1MsgFltr_MMRF_TRC_BPI_TPCAGC_LOGGER_DBG()	ChkL1ClsFltr_MML1_RF_MML1_BPILOG_L()
#define ChkL1MsgFltr_MMRF_TRC_BSISPI_ARB_DFE_PRI()	ChkL1ClsFltr_MML1_RF_MML1_DBG_H()
#define ChkL1MsgFltr_MMRF_TRC_RFCW_DUMP_DBG()	ChkL1ClsFltr_MML1_RF_MML1_DBG_H()
#define ChkL1MsgFltr_MMRF_TRC_D16_REG_DBG()	ChkL1ClsFltr_MML1_RF_MML1_DBG_H()
#define ChkL1MsgFltr_MMRF_TRC_D32_REG_DBG()	ChkL1ClsFltr_MML1_RF_MML1_DBG_H()
#define ChkL1MsgFltr_MMRF_TRC_DEBUG1()	ChkL1ClsFltr_MML1_RF_MML1_DBG_H()
#define ChkL1MsgFltr_MMRF_TRC_DEBUG2()	ChkL1ClsFltr_MML1_RF_MML1_DBG_H()
#define ChkL1MsgFltr_MMRF_TRC_DEBUG3()	ChkL1ClsFltr_MML1_RF_MML1_DBG_H()
#define ChkL1MsgFltr_MMRF_TRC_DEBUG4()	ChkL1ClsFltr_MML1_RF_MML1_DBG_H()
#define ChkL1MsgFltr_MMRF_TRC_DEBUG5()	ChkL1ClsFltr_MML1_RF_MML1_DBG_H()
#define ChkL1MsgFltr_MMRF_TRC_DEBUG6()	ChkL1ClsFltr_MML1_RF_MML1_DBG_H()
#define ChkL1MsgFltr_MMRF_TRC_DEBUG7()	ChkL1ClsFltr_MML1_RF_MML1_DBG_H()
#define ChkL1MsgFltr_MMRF_TRC_HEX_DEBUG1()	ChkL1ClsFltr_MML1_RF_MML1_DBG_H()
#define ChkL1MsgFltr_MMRF_TRC_HEX_DEBUG2()	ChkL1ClsFltr_MML1_RF_MML1_DBG_H()
#define ChkL1MsgFltr_MMRF_TRC_HEX_DEBUG3()	ChkL1ClsFltr_MML1_RF_MML1_DBG_H()
#define ChkL1MsgFltr_MMRF_TRC_HEX_DEBUG4()	ChkL1ClsFltr_MML1_RF_MML1_DBG_H()
#define ChkL1MsgFltr_MMRF_TRC_HEX_DEBUG5()	ChkL1ClsFltr_MML1_RF_MML1_DBG_H()
#define ChkL1MsgFltr_MMRF_TRC_HEX_DEBUG6()	ChkL1ClsFltr_MML1_RF_MML1_DBG_H()
#define ChkL1MsgFltr_MMRF_TRC_HEX_DEBUG7()	ChkL1ClsFltr_MML1_RF_MML1_DBG_H()
#define ChkL1MsgFltr_MMRF_TRC_UBIN_WMID()	ChkL1ClsFltr_MML1_RF_MML1_RF_H()
#define ChkL1MsgFltr_MMRF_TRC_UBIN_SET_WMID()	ChkL1ClsFltr_MML1_RF_MML1_RF_H()
#define ChkL1MsgFltr_MMRF_TRC_Current_AFC_SHM()	ChkL1ClsFltr_MML1_RF_MML1_RF_H()
#define ChkL1MsgFltr_MMRF_TRC_Current_AFC_SHM_Reduce()	ChkL1ClsFltr_MML1_RF_MML1_RF_H()
#define ChkL1MsgFltr_MMRF_TRC_C2K_POC_SET_DB_BEGIN()	ChkL1ClsFltr_MML1_RF_MML1_RF_H()
#define ChkL1MsgFltr_MMRF_TRC_C2K_POC_SET_DB_END()	ChkL1ClsFltr_MML1_RF_MML1_RF_H()
#define ChkL1MsgFltr_MMRF_TRC_C2K_POC_GET_RESULT_BEGIN()	ChkL1ClsFltr_MML1_RF_MML1_RF_H()
#define ChkL1MsgFltr_MMRF_TRC_C2K_POC_GET_RESULT_END()	ChkL1ClsFltr_MML1_RF_MML1_RF_H()
#define ChkL1MsgFltr_MMRF_TRC_C2K_POC_BEGIN()	ChkL1ClsFltr_MML1_RF_MML1_RF_H()
#define ChkL1MsgFltr_MMRF_TRC_C2K_POC_END()	ChkL1ClsFltr_MML1_RF_MML1_RF_H()
#define ChkL1MsgFltr_MMRF_TRC_TPO_DBG()	ChkL1ClsFltr_MML1_RF_MML1_DBG_H()
#define ChkL1MsgFltr_MMRF_TRC_TPO_UPDATE_DBG()	ChkL1ClsFltr_MML1_RF_MML1_DBG_H()
#define ChkL1MsgFltr_MMRF_TRC_IRAT_EL1_TAS_INFO()	ChkL1ClsFltr_MML1_RF_MML1_DBG_H()
#define ChkL1MsgFltr_MMRF_TRC_RXDFE_TQ_REQUEST_DBG()	ChkL1ClsFltr_MML1_RF_MML1_DBG_L()
#define ChkL1MsgFltr_MMRF_TRC_RXDFE_TQ_WAIT_DBG()	ChkL1ClsFltr_MML1_RF_MML1_DBG_H()
#define ChkL1MsgFltr_MMRF_TRC_RXDFE_TQ_WAIT_REL_DBG()	ChkL1ClsFltr_MML1_RF_MML1_DBG_H()
#define ChkL1MsgFltr_MMRF_TRC_RXDFE_TQ_OBTAIN_DBG()	ChkL1ClsFltr_MML1_RF_MML1_DBG_H()
#define ChkL1MsgFltr_MMRF_TRC_RXDFE_TQ_RELEASE_DBG()	ChkL1ClsFltr_MML1_RF_MML1_DBG_H()
#define ChkL1MsgFltr_MMRF_TRC_RXDFE_TQ_RELEASE_DBG2()	ChkL1ClsFltr_MML1_RF_MML1_DBG_L()
#define ChkL1MsgFltr_MMRF_TRC_RXDFE_TQ_EXCEED_DBG()	ChkL1ClsFltr_MML1_RF_MML1_DBG_H()
#define ChkL1MsgFltr_MMRF_TRC_RXDFE_FC_EXCEED_DBG()	ChkL1ClsFltr_MML1_RF_MML1_DBG_H()
#define ChkL1MsgFltr_MMRF_TRC_RXDFE_ATIMER()	ChkL1ClsFltr_MML1_RF_MML1_DBG_H()
#define ChkL1MsgFltr_MMRF_TRC_RXDFE_TQ_CHECK()	ChkL1ClsFltr_MML1_RF_MML1_DBG_L()
#define ChkL1MsgFltr_MMRF_TRC_RXDFE_TQ_WAIT()	ChkL1ClsFltr_MML1_RF_MML1_DBG_L()
#define ChkL1MsgFltr_MML1_TX_TRC_TXSYS_GET_RIGHT_ERR()	ChkL1ClsFltr_MML1_RF_MML1_TXSYS_H()
#define ChkL1MsgFltr_MML1_TX_TRC_TXSYS_CHK_RIGHT_ERR()	ChkL1ClsFltr_MML1_RF_MML1_TXSYS_H()
#define ChkL1MsgFltr_MML1_TX_TRC_TXSYS_GET_RIGHT()	ChkL1ClsFltr_MML1_RF_MML1_TXSYS_H()
#define ChkL1MsgFltr_MML1_TX_TRC_TXSYS_RELEASE_RIGHT()	ChkL1ClsFltr_MML1_RF_MML1_TXSYS_H()
#define ChkL1MsgFltr_MML1_TX_TRC_TXSYS_TXCRP_CLOCK()	ChkL1ClsFltr_MML1_RF_MML1_TXSYS_H()
#define ChkL1MsgFltr_MML1_TX_TRC_TXSYS_TXBRP_CLOCK()	ChkL1ClsFltr_MML1_RF_MML1_TXSYS_H()
#define ChkL1MsgFltr_MMRF_TRC_PWR_INDICATION_DBG()	ChkL1ClsFltr_MML1_RF_MML1_DBG_H()


#endif
