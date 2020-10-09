#ifndef L1TRC_EL1D_RF0_DEF_H
#define L1TRC_EL1D_RF0_DEF_H

/******************************/
/* String category definition */
/******************************/
#define EL1D_TRC_STR_RF_FLAG(v1)  (unsigned char)(v1+0)
#define EL1D_TRC_STR_RF_CBW(v1)  (unsigned char)(v1+2)
#define EL1D_TRC_STR_RF_MODE(v1)  (unsigned char)(v1+13)
#define EL1D_TRC_STR_RF_REQ(v1)  (unsigned char)(v1+15)
#define EL1D_TRC_STR_RF_RTX(v1)  (unsigned char)(v1+28)
#define EL1D_TRC_STR_RF_CC(v1)  (unsigned char)(v1+30)
#define EL1D_TRC_STR_RF_IDX(v1)  (unsigned char)(v1+32)
#define EL1D_TRC_STR_RF_CC_IDX(v1)  (unsigned char)(v1+36)
#define EL1D_TRC_STR_RF_SRXTX(v1)  (unsigned char)(v1+40)
#define EL1D_TRC_STR_RF_CALLBACK(v1)  (unsigned char)(v1+47)
#define EL1D_TRC_STR_RF_RX_LPM_TYPE(v1)  (unsigned char)(v1+61)
#define EL1D_TRC_STR_RF_CONTEXT_ENTRY(v1)  (unsigned char)(v1+70)
#define EL1D_TRC_STR_RF_WIN_EXIST(v1)  (unsigned char)(v1+83)
#define EL1D_TRC_STR_RF_MIPI_STATE(v1)  (unsigned char)(v1+91)
#define EL1D_TRC_STR_RF_BPI_BSI(v1)  (unsigned char)(v1+95)
#define EL1D_TRC_STR_RF_FUNCTION_ENABLE(v1)  (unsigned char)(v1+99)
#define EL1D_FIX_AFC_SYNTH_CALC_CALLER(v1)  (unsigned char)(v1+107)
#define EL1D_TRC_SINGLE_ANT_STATE(v1)  (unsigned char)(v1+112)
#define EL1D_TRC_STR_RF_TX_HRM_MODE(v1)  (unsigned char)(v1+115)
#define EL1D_TRC_STR_RF_MIPI_OP(v1)  (unsigned char)(v1+118)
#define EL1D_TRC_STR_RF_CP_TYPE(v1)  (unsigned char)(v1+120)
#define EL1D_TRC_STR_RF_FRAME_TYPE(v1)  (unsigned char)(v1+124)
#define EL1D_TRC_STR_RF_CC_GROUP(v1)  (unsigned char)(v1+127)
#define EL1D_TRC_STR_RF_RX_TYPE(v1)  (unsigned char)(v1+132)
#define EL1D_TRC_STR_RF_BW_CLAS(v1)  (unsigned char)(v1+136)
#define EL1D_TRC_STR_RF_TX_CA_TYPE(v1)  (unsigned char)(v1+143)
#define EL1D_TRC_STR_RF_FEC_SEL(v1)  (unsigned char)(v1+147)
#define EL1D_TRC_STR_RF_TXDFE_SEL(v1)  (unsigned char)(v1+150)
#define EL1D_TRC_STR_RF_ELNA(v1)  (unsigned char)(v1+153)
#define EL1D_TRC_STR_RF_RXSCH_REQTYPE(v1)  (unsigned char)(v1+157)
#define EL1D_TRC_STR_RF_RXSCH_TUNNEL_REQTYPE(v1)  (unsigned char)(v1+161)
#define EL1D_TRC_STR_RF_REQTYPE(v1)  (unsigned char)(v1+164)
#define EL1D_TRC_STR_RF_EVTYPE(v1)  (unsigned char)(v1+174)
#define EL1D_TRC_STR_RF_PRACH_FMT(v1)  (unsigned char)(v1+207)
#define EL1D_TRC_STR_RF_ANT_SEL(v1)  (unsigned char)(v1+212)
#define EL1D_TRC_STR_RF_EVT_TYPE(v1)  (unsigned char)(v1+215)
#define EL1D_TRC_STR_RF_MIPI_TXSCH_TYPE(v1)  (unsigned char)(v1+221)
#define EL1D_TRC_STR_RF_CONFIG_INFO_PROCEDURE(v1)  (unsigned char)(v1+224)
#define EL1D_TRC_STR_RF_CONFIG_INFO_TYPE(v1)  (unsigned char)(v1+229)


/****************************/
/* Message macro definition */
/****************************/
#include "L1Trc.h"
#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define EL1D_TRC_RF_CONTEXT_ENTRY(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_RF0_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0043,0x0043);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_RF0_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define EL1D_TRC_RF_CONTEXT_ENTRY(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define EL1D_TRC_RF_CONTEXT_ENTRY_HRT(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1_NON_SMP(EL1D_RF0_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_START_FILL_L1_NON_SMP();\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1_NON_SMP(0x0143,0x0143);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_END_FILL_L1_NON_SMP();\
			TRC_END_FILTER_CHECK_L1_NON_SMP(EL1D_RF0_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define EL1D_TRC_RF_CONTEXT_ENTRY_HRT(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define EL1D_TRC_RF_CONTEXT_QUIT(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_RF0_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0243,0x0243);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_RF0_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define EL1D_TRC_RF_CONTEXT_QUIT(v1)
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_RF_CONFIG_INFO(v1, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_RF0_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0343,0x0343);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_RF0_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1D_TRC_RF_CONFIG_INFO(v1, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define EL1D_TRC_RF_CONFIG_FREQ_SPACING(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_RF0_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0443,0x0443);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_RF0_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define EL1D_TRC_RF_CONFIG_FREQ_SPACING(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define EL1D_TRC_RF_CONFIG_FREQ_SPACING_WARNING(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_RF0_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0543,0x0543);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_RF0_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define EL1D_TRC_RF_CONFIG_FREQ_SPACING_WARNING(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define EL1D_TRC_RF_RX_CONFIG_COMMON(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_RF0_Trace_Filter, 1, 0x10);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0643,0x0643);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v7,v7);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v8,v8);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v9,v9);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v10,v10);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_RF0_Trace_Filter, 1, 0x10);\
		}\
	} while(0)
#else
	#define EL1D_TRC_RF_RX_CONFIG_COMMON(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10)
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_RF_RX_CONFIG_CC(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_RF0_Trace_Filter, 1, 0x08);\
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
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v13,v13);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v14,v14);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v15,v15);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v16,v16);\
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
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v13,v13);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v14,v14);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v15,v15);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v16,v16);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0743,0x0743);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v7,v7);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v8,v8);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v9,v9);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v10,v10);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v11,v11);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v12,v12);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v13,v13);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v14,v14);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v15,v15);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v16,v16);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_RF0_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define EL1D_TRC_RF_RX_CONFIG_CC(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define EL1D_TRC_RF_RX_CONFIG_TEST_PARAMS(v1, v2, v3, v4, v5, v6) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_RF0_Trace_Filter, 1, 0x10);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0843,0x0843);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_RF0_Trace_Filter, 1, 0x10);\
		}\
	} while(0)
#else
	#define EL1D_TRC_RF_RX_CONFIG_TEST_PARAMS(v1, v2, v3, v4, v5, v6)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define EL1D_TRC_RF_RX_CONFIG_IDX_PARAMS(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_RF0_Trace_Filter, 1, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0943,0x0943);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_RF0_Trace_Filter, 1, 0x10);\
		}\
	} while(0)
#else
	#define EL1D_TRC_RF_RX_CONFIG_IDX_PARAMS(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define EL1D_TRC_RF_RX_CONFIG_TX(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_RF0_Trace_Filter, 1, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0A43,0x0A43);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_RF0_Trace_Filter, 1, 0x10);\
		}\
	} while(0)
#else
	#define EL1D_TRC_RF_RX_CONFIG_TX(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define EL1D_TRC_RF_RX_CONFIG_REGION(v1, v2, v3, v4, v5, v6, v7, v8, v9) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_RF0_Trace_Filter, 1, 0x10);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0B43,0x0B43);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v7,v7);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v8,v8);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v9,v9);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_RF0_Trace_Filter, 1, 0x10);\
		}\
	} while(0)
#else
	#define EL1D_TRC_RF_RX_CONFIG_REGION(v1, v2, v3, v4, v5, v6, v7, v8, v9)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EL1D_TRC_RF_RX_CONFIG_GROUP_INFO(v1, v2, v3, v4, v5, v6, v7, v8) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_RF0_Trace_Filter, 1, 0x20);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0C43,0x0C43);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v7,v7);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v8,v8);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_RF0_Trace_Filter, 1, 0x20);\
		}\
	} while(0)
#else
	#define EL1D_TRC_RF_RX_CONFIG_GROUP_INFO(v1, v2, v3, v4, v5, v6, v7, v8)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define EL1D_TRC_RF_RX_CONFIG_NORM_76_CW(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_RF0_Trace_Filter, 1, 0x10);\
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
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v13,v13);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v14,v14);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v15,v15);\
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
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v13,v13);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v14,v14);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v15,v15);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0D43,0x0D43);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v7,v7);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v8,v8);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v9,v9);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v10,v10);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v11,v11);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v12,v12);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v13,v13);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v14,v14);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v15,v15);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_RF0_Trace_Filter, 1, 0x10);\
		}\
	} while(0)
#else
	#define EL1D_TRC_RF_RX_CONFIG_NORM_76_CW(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EL1D_TRC_RF_RX_CONFIG_TX_INFO(v1, v2, v3, v4, v5, v6) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_RF0_Trace_Filter, 1, 0x20);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0E43,0x0E43);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_RF0_Trace_Filter, 1, 0x20);\
		}\
	} while(0)
#else
	#define EL1D_TRC_RF_RX_CONFIG_TX_INFO(v1, v2, v3, v4, v5, v6)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define EL1D_TRC_RF_RX_CONFIG_CC_INFO_TX(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_RF0_Trace_Filter, 1, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0F43,0x0F43);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_RF0_Trace_Filter, 1, 0x10);\
		}\
	} while(0)
#else
	#define EL1D_TRC_RF_RX_CONFIG_CC_INFO_TX(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define EL1D_TRC_RF_RX_CONFIG_TAS(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_RF0_Trace_Filter, 1, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1043,0x1043);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_RF0_Trace_Filter, 1, 0x10);\
		}\
	} while(0)
#else
	#define EL1D_TRC_RF_RX_CONFIG_TAS(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define EL1D_TRC_RF_RX_CONFIG_ANT_TUNER(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_RF0_Trace_Filter, 1, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1143,0x1143);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_RF0_Trace_Filter, 1, 0x10);\
		}\
	} while(0)
#else
	#define EL1D_TRC_RF_RX_CONFIG_ANT_TUNER(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define EL1D_TRC_RF_RX_CONFIG_ANT_REORG(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_RF0_Trace_Filter, 1, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1243,0x1243);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_RF0_Trace_Filter, 1, 0x10);\
		}\
	} while(0)
#else
	#define EL1D_TRC_RF_RX_CONFIG_ANT_REORG(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_RF_TX_CONFIG_CC_INFO(v1, v2, v3, v4, v5, v6, v7, v8) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_RF0_Trace_Filter, 1, 0x40);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1343,0x1343);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v7,v7);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v8,v8);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_RF0_Trace_Filter, 1, 0x40);\
		}\
	} while(0)
#else
	#define EL1D_TRC_RF_TX_CONFIG_CC_INFO(v1, v2, v3, v4, v5, v6, v7, v8)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define EL1D_TRC_RF_TX_CONFIG_CC_BDRY(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_RF0_Trace_Filter, 1, 0x80);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1443,0x1443);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_RF0_Trace_Filter, 1, 0x80);\
		}\
	} while(0)
#else
	#define EL1D_TRC_RF_TX_CONFIG_CC_BDRY(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define EL1D_TRC_RF_TX_CONFIG_CCA_INFO(v1, v2, v3, v4, v5, v6) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_RF0_Trace_Filter, 1, 0x80);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1543,0x1543);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_RF0_Trace_Filter, 1, 0x80);\
		}\
	} while(0)
#else
	#define EL1D_TRC_RF_TX_CONFIG_CCA_INFO(v1, v2, v3, v4, v5, v6)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define EL1D_TRC_RF_TX_CONFIG_HW_SEL(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_RF0_Trace_Filter, 1, 0x80);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1643,0x1643);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_RF0_Trace_Filter, 1, 0x80);\
		}\
	} while(0)
#else
	#define EL1D_TRC_RF_TX_CONFIG_HW_SEL(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define EL1D_TRC_RF_TX_CONFIG_CMN_PARAMS(v1, v2, v3, v4, v5, v6) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_RF0_Trace_Filter, 1, 0x80);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1743,0x1743);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_RF0_Trace_Filter, 1, 0x80);\
		}\
	} while(0)
#else
	#define EL1D_TRC_RF_TX_CONFIG_CMN_PARAMS(v1, v2, v3, v4, v5, v6)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define EL1D_TRC_RF_TX_CONFIG_SX(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_RF0_Trace_Filter, 1, 0x80);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1843,0x1843);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_RF0_Trace_Filter, 1, 0x80);\
		}\
	} while(0)
#else
	#define EL1D_TRC_RF_TX_CONFIG_SX(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define EL1D_TRC_RF_TX_CONFIG_CW(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_RF0_Trace_Filter, 1, 0x80);\
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
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v13,v13);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v14,v14);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v15,v15);\
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
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v13,v13);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v14,v14);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v15,v15);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1943,0x1943);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v7,v7);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v8,v8);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v9,v9);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v10,v10);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v11,v11);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v12,v12);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v13,v13);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v14,v14);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v15,v15);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_RF0_Trace_Filter, 1, 0x80);\
		}\
	} while(0)
#else
	#define EL1D_TRC_RF_TX_CONFIG_CW(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define EL1D_TRC_RF_TX_CONFIG_CW_STX(v1, v2, v3, v4, v5, v6, v7) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_RF0_Trace_Filter, 1, 0x80);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1A43,0x1A43);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v7,v7);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_RF0_Trace_Filter, 1, 0x80);\
		}\
	} while(0)
#else
	#define EL1D_TRC_RF_TX_CONFIG_CW_STX(v1, v2, v3, v4, v5, v6, v7)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define EL1D_TRC_RF_TX_CONFIG_TEST(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_RF0_Trace_Filter, 1, 0x80);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1B43,0x1B43);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_RF0_Trace_Filter, 1, 0x80);\
		}\
	} while(0)
#else
	#define EL1D_TRC_RF_TX_CONFIG_TEST(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_RF_TX_CONFIG_IDX_PARAMS(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_RF0_Trace_Filter, 1, 0x40);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1C43,0x1C43);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_RF0_Trace_Filter, 1, 0x40);\
		}\
	} while(0)
#else
	#define EL1D_TRC_RF_TX_CONFIG_IDX_PARAMS(v1)
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_RF_CTRL_SCH_TRX_CALLBACK(v1, v2, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L1_NON_SMP(EL1D_RF0_Trace_Filter, 2, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v5,v5);\
			TRC_START_FILL_L1_NON_SMP();\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v5,v5);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1_NON_SMP(0x1D43,0x1D43);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1_NON_SMP(cgen_local_v5,v5);\
			TRC_END_FILL_L1_NON_SMP();\
			TRC_END_FILTER_CHECK_L1_NON_SMP(EL1D_RF0_Trace_Filter, 2, 0x02);\
		}\
	} while(0)
#else
	#define EL1D_TRC_RF_CTRL_SCH_TRX_CALLBACK(v1, v2, v4, v5)
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_RF_CTRL_SCH_RF_CALLBACK(v1, v2, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L1_NON_SMP(EL1D_RF0_Trace_Filter, 2, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v5,v5);\
			TRC_START_FILL_L1_NON_SMP();\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v5,v5);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1_NON_SMP(0x1E43,0x1E43);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1_NON_SMP(cgen_local_v5,v5);\
			TRC_END_FILL_L1_NON_SMP();\
			TRC_END_FILTER_CHECK_L1_NON_SMP(EL1D_RF0_Trace_Filter, 2, 0x02);\
		}\
	} while(0)
#else
	#define EL1D_TRC_RF_CTRL_SCH_RF_CALLBACK(v1, v2, v4, v5)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define EL1D_TRC_RF_CTRL_SCH_CALLBACK_END(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1_NON_SMP(EL1D_RF0_Trace_Filter, 2, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_START_FILL_L1_NON_SMP();\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1_NON_SMP(0x1F43,0x1F43);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_END_FILL_L1_NON_SMP();\
			TRC_END_FILTER_CHECK_L1_NON_SMP(EL1D_RF0_Trace_Filter, 2, 0x04);\
		}\
	} while(0)
#else
	#define EL1D_TRC_RF_CTRL_SCH_CALLBACK_END(v1)
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_RF_CTRL_SCH_RXSCH_REQ_SRX(v1, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L1_NON_SMP(EL1D_RF0_Trace_Filter, 2, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v5,v5);\
			TRC_START_FILL_L1_NON_SMP();\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v5,v5);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1_NON_SMP(0x2043,0x2043);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1_NON_SMP(cgen_local_v5,v5);\
			TRC_END_FILL_L1_NON_SMP();\
			TRC_END_FILTER_CHECK_L1_NON_SMP(EL1D_RF0_Trace_Filter, 2, 0x02);\
		}\
	} while(0)
#else
	#define EL1D_TRC_RF_CTRL_SCH_RXSCH_REQ_SRX(v1, v4, v5)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EL1D_TRC_RF_CTRL_SCH_EVENT_TYPE(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1_NON_SMP(EL1D_RF0_Trace_Filter, 2, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_START_FILL_L1_NON_SMP();\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1_NON_SMP(0x2143,0x2143);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_END_FILL_L1_NON_SMP();\
			TRC_END_FILTER_CHECK_L1_NON_SMP(EL1D_RF0_Trace_Filter, 2, 0x08);\
		}\
	} while(0)
#else
	#define EL1D_TRC_RF_CTRL_SCH_EVENT_TYPE(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EL1D_TRC_RF_CTRL_SCH_GLO_OFS(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1_NON_SMP(EL1D_RF0_Trace_Filter, 2, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_START_FILL_L1_NON_SMP();\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1_NON_SMP(0x2243,0x2243);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_END_FILL_L1_NON_SMP();\
			TRC_END_FILTER_CHECK_L1_NON_SMP(EL1D_RF0_Trace_Filter, 2, 0x08);\
		}\
	} while(0)
#else
	#define EL1D_TRC_RF_CTRL_SCH_GLO_OFS(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_RF_CTRL_SCH_TX_PARAMS(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1_NON_SMP(EL1D_RF0_Trace_Filter, 2, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_START_FILL_L1_NON_SMP();\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1_NON_SMP(0x2343,0x2343);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_END_FILL_L1_NON_SMP();\
			TRC_END_FILTER_CHECK_L1_NON_SMP(EL1D_RF0_Trace_Filter, 2, 0x02);\
		}\
	} while(0)
#else
	#define EL1D_TRC_RF_CTRL_SCH_TX_PARAMS(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_RF_CTRL_SET_REQ(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1_NON_SMP(EL1D_RF0_Trace_Filter, 2, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_START_FILL_L1_NON_SMP();\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1_NON_SMP(0x2443,0x2443);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_END_FILL_L1_NON_SMP();\
			TRC_END_FILTER_CHECK_L1_NON_SMP(EL1D_RF0_Trace_Filter, 2, 0x10);\
		}\
	} while(0)
#else
	#define EL1D_TRC_RF_CTRL_SET_REQ(v1)
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_RF_CTRL_SET_REQ_PARAMS(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1_NON_SMP(EL1D_RF0_Trace_Filter, 2, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_START_FILL_L1_NON_SMP();\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1_NON_SMP(0x2543,0x2543);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_END_FILL_L1_NON_SMP();\
			TRC_END_FILTER_CHECK_L1_NON_SMP(EL1D_RF0_Trace_Filter, 2, 0x10);\
		}\
	} while(0)
#else
	#define EL1D_TRC_RF_CTRL_SET_REQ_PARAMS(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EL1D_TRC_RF_CTRL_SET_RF_REQ(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1_NON_SMP(EL1D_RF0_Trace_Filter, 2, 0x40);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_START_FILL_L1_NON_SMP();\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1_NON_SMP(0x2643,0x2643);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_END_FILL_L1_NON_SMP();\
			TRC_END_FILTER_CHECK_L1_NON_SMP(EL1D_RF0_Trace_Filter, 2, 0x40);\
		}\
	} while(0)
#else
	#define EL1D_TRC_RF_CTRL_SET_RF_REQ(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EL1D_TRC_RF_CTRL_TX_REQ_CANCEL(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1_NON_SMP(EL1D_RF0_Trace_Filter, 2, 0x40);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_START_FILL_L1_NON_SMP();\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1_NON_SMP(0x2743,0x2743);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_END_FILL_L1_NON_SMP();\
			TRC_END_FILTER_CHECK_L1_NON_SMP(EL1D_RF0_Trace_Filter, 2, 0x40);\
		}\
	} while(0)
#else
	#define EL1D_TRC_RF_CTRL_TX_REQ_CANCEL(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define EL1D_TRC_RF_BPI_CW_6(v1, v2, v3, v4, v5, v6, v7, v8) do {\
		{\
			TRC_START_FILTER_CHECK_L1_NON_SMP(EL1D_RF0_Trace_Filter, 3, 0x01);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1_NON_SMP(0x2843,0x2843);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v5,v5);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v6,v6);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v7,v7);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1_NON_SMP(cgen_local_v8,v8);\
			TRC_END_FILL_L1_NON_SMP();\
			TRC_END_FILTER_CHECK_L1_NON_SMP(EL1D_RF0_Trace_Filter, 3, 0x01);\
		}\
	} while(0)
#else
	#define EL1D_TRC_RF_BPI_CW_6(v1, v2, v3, v4, v5, v6, v7, v8)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define EL1D_TRC_RF_BPI_CW_2(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1_NON_SMP(EL1D_RF0_Trace_Filter, 3, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_START_FILL_L1_NON_SMP();\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1_NON_SMP(0x2943,0x2943);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_END_FILL_L1_NON_SMP();\
			TRC_END_FILTER_CHECK_L1_NON_SMP(EL1D_RF0_Trace_Filter, 3, 0x01);\
		}\
	} while(0)
#else
	#define EL1D_TRC_RF_BPI_CW_2(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define EL1D_TRC_RF_BSI_CW_1(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1_NON_SMP(EL1D_RF0_Trace_Filter, 3, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_START_FILL_L1_NON_SMP();\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1_NON_SMP(0x2A43,0x2A43);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_END_FILL_L1_NON_SMP();\
			TRC_END_FILTER_CHECK_L1_NON_SMP(EL1D_RF0_Trace_Filter, 3, 0x08);\
		}\
	} while(0)
#else
	#define EL1D_TRC_RF_BSI_CW_1(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define EL1D_TRC_RF_BSI_CW_2(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1_NON_SMP(EL1D_RF0_Trace_Filter, 3, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_START_FILL_L1_NON_SMP();\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1_NON_SMP(0x2B43,0x2B43);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_END_FILL_L1_NON_SMP();\
			TRC_END_FILTER_CHECK_L1_NON_SMP(EL1D_RF0_Trace_Filter, 3, 0x08);\
		}\
	} while(0)
#else
	#define EL1D_TRC_RF_BSI_CW_2(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define EL1D_TRC_RF_BSI_CW_3(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1_NON_SMP(EL1D_RF0_Trace_Filter, 3, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_START_FILL_L1_NON_SMP();\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1_NON_SMP(0x2C43,0x2C43);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_END_FILL_L1_NON_SMP();\
			TRC_END_FILTER_CHECK_L1_NON_SMP(EL1D_RF0_Trace_Filter, 3, 0x08);\
		}\
	} while(0)
#else
	#define EL1D_TRC_RF_BSI_CW_3(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define EL1D_TRC_RF_BSI_CW_4(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1_NON_SMP(EL1D_RF0_Trace_Filter, 3, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_START_FILL_L1_NON_SMP();\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1_NON_SMP(0x2D43,0x2D43);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_END_FILL_L1_NON_SMP();\
			TRC_END_FILTER_CHECK_L1_NON_SMP(EL1D_RF0_Trace_Filter, 3, 0x08);\
		}\
	} while(0)
#else
	#define EL1D_TRC_RF_BSI_CW_4(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define EL1D_TRC_RF_BSI_CW_5(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L1_NON_SMP(EL1D_RF0_Trace_Filter, 3, 0x08);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1_NON_SMP(0x2E43,0x2E43);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1_NON_SMP(cgen_local_v5,v5);\
			TRC_END_FILL_L1_NON_SMP();\
			TRC_END_FILTER_CHECK_L1_NON_SMP(EL1D_RF0_Trace_Filter, 3, 0x08);\
		}\
	} while(0)
#else
	#define EL1D_TRC_RF_BSI_CW_5(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define EL1D_TRC_RF_BSI_CW_6(v1, v2, v3, v4, v5, v6) do {\
		{\
			TRC_START_FILTER_CHECK_L1_NON_SMP(EL1D_RF0_Trace_Filter, 3, 0x08);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1_NON_SMP(0x2F43,0x2F43);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v5,v5);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1_NON_SMP(cgen_local_v6,v6);\
			TRC_END_FILL_L1_NON_SMP();\
			TRC_END_FILTER_CHECK_L1_NON_SMP(EL1D_RF0_Trace_Filter, 3, 0x08);\
		}\
	} while(0)
#else
	#define EL1D_TRC_RF_BSI_CW_6(v1, v2, v3, v4, v5, v6)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define EL1D_TRC_RF_BSI_CW_7(v1, v2, v3, v4, v5, v6, v7) do {\
		{\
			TRC_START_FILTER_CHECK_L1_NON_SMP(EL1D_RF0_Trace_Filter, 3, 0x08);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1_NON_SMP(0x3043,0x3043);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v5,v5);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v6,v6);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1_NON_SMP(cgen_local_v7,v7);\
			TRC_END_FILL_L1_NON_SMP();\
			TRC_END_FILTER_CHECK_L1_NON_SMP(EL1D_RF0_Trace_Filter, 3, 0x08);\
		}\
	} while(0)
#else
	#define EL1D_TRC_RF_BSI_CW_7(v1, v2, v3, v4, v5, v6, v7)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define EL1D_TRC_RF_BSI_CW_8(v1, v2, v3, v4, v5, v6, v7, v8) do {\
		{\
			TRC_START_FILTER_CHECK_L1_NON_SMP(EL1D_RF0_Trace_Filter, 3, 0x08);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1_NON_SMP(0x3143,0x3143);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v5,v5);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v6,v6);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v7,v7);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1_NON_SMP(cgen_local_v8,v8);\
			TRC_END_FILL_L1_NON_SMP();\
			TRC_END_FILTER_CHECK_L1_NON_SMP(EL1D_RF0_Trace_Filter, 3, 0x08);\
		}\
	} while(0)
#else
	#define EL1D_TRC_RF_BSI_CW_8(v1, v2, v3, v4, v5, v6, v7, v8)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define EL1D_TRC_RF_BSI_CW_9(v1, v2, v3, v4, v5, v6, v7, v8, v9) do {\
		{\
			TRC_START_FILTER_CHECK_L1_NON_SMP(EL1D_RF0_Trace_Filter, 3, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v5,v5);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v6,v6);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v7,v7);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v8,v8);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v9,v9);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1_NON_SMP(0x3243,0x3243);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v5,v5);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v6,v6);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v7,v7);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v8,v8);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1_NON_SMP(cgen_local_v9,v9);\
			TRC_END_FILL_L1_NON_SMP();\
			TRC_END_FILTER_CHECK_L1_NON_SMP(EL1D_RF0_Trace_Filter, 3, 0x08);\
		}\
	} while(0)
#else
	#define EL1D_TRC_RF_BSI_CW_9(v1, v2, v3, v4, v5, v6, v7, v8, v9)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define EL1D_TRC_RF_BSI_CW_10(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10) do {\
		{\
			TRC_START_FILTER_CHECK_L1_NON_SMP(EL1D_RF0_Trace_Filter, 3, 0x08);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1_NON_SMP(0x3343,0x3343);\
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
			TRC_END_FILTER_CHECK_L1_NON_SMP(EL1D_RF0_Trace_Filter, 3, 0x08);\
		}\
	} while(0)
#else
	#define EL1D_TRC_RF_BSI_CW_10(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define EL1D_TRC_RF_BSI_CW_11(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11) do {\
		{\
			TRC_START_FILTER_CHECK_L1_NON_SMP(EL1D_RF0_Trace_Filter, 3, 0x08);\
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
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v11,v11);\
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
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v11,v11);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1_NON_SMP(0x3443,0x3443);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v5,v5);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v6,v6);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v7,v7);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v8,v8);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v9,v9);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v10,v10);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1_NON_SMP(cgen_local_v11,v11);\
			TRC_END_FILL_L1_NON_SMP();\
			TRC_END_FILTER_CHECK_L1_NON_SMP(EL1D_RF0_Trace_Filter, 3, 0x08);\
		}\
	} while(0)
#else
	#define EL1D_TRC_RF_BSI_CW_11(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define EL1D_TRC_RF_BSI_CW_12(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12) do {\
		{\
			TRC_START_FILTER_CHECK_L1_NON_SMP(EL1D_RF0_Trace_Filter, 3, 0x08);\
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
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v11,v11);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v12,v12);\
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
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v11,v11);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v12,v12);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1_NON_SMP(0x3543,0x3543);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v5,v5);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v6,v6);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v7,v7);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v8,v8);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v9,v9);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v10,v10);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v11,v11);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1_NON_SMP(cgen_local_v12,v12);\
			TRC_END_FILL_L1_NON_SMP();\
			TRC_END_FILTER_CHECK_L1_NON_SMP(EL1D_RF0_Trace_Filter, 3, 0x08);\
		}\
	} while(0)
#else
	#define EL1D_TRC_RF_BSI_CW_12(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define EL1D_TRC_RF_BSI_CW_13(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13) do {\
		{\
			TRC_START_FILTER_CHECK_L1_NON_SMP(EL1D_RF0_Trace_Filter, 3, 0x08);\
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
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v11,v11);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v12,v12);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v13,v13);\
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
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v11,v11);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v12,v12);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v13,v13);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1_NON_SMP(0x3643,0x3643);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v5,v5);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v6,v6);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v7,v7);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v8,v8);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v9,v9);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v10,v10);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v11,v11);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v12,v12);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1_NON_SMP(cgen_local_v13,v13);\
			TRC_END_FILL_L1_NON_SMP();\
			TRC_END_FILTER_CHECK_L1_NON_SMP(EL1D_RF0_Trace_Filter, 3, 0x08);\
		}\
	} while(0)
#else
	#define EL1D_TRC_RF_BSI_CW_13(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define EL1D_TRC_RF_BSI_CW_14(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14) do {\
		{\
			TRC_START_FILTER_CHECK_L1_NON_SMP(EL1D_RF0_Trace_Filter, 3, 0x08);\
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
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v11,v11);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v12,v12);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v13,v13);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v14,v14);\
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
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v11,v11);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v12,v12);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v13,v13);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v14,v14);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1_NON_SMP(0x3743,0x3743);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v5,v5);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v6,v6);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v7,v7);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v8,v8);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v9,v9);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v10,v10);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v11,v11);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v12,v12);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v13,v13);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1_NON_SMP(cgen_local_v14,v14);\
			TRC_END_FILL_L1_NON_SMP();\
			TRC_END_FILTER_CHECK_L1_NON_SMP(EL1D_RF0_Trace_Filter, 3, 0x08);\
		}\
	} while(0)
#else
	#define EL1D_TRC_RF_BSI_CW_14(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define EL1D_TRC_RF_BSI_CW_15(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15) do {\
		{\
			TRC_START_FILTER_CHECK_L1_NON_SMP(EL1D_RF0_Trace_Filter, 3, 0x08);\
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
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v11,v11);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v12,v12);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v13,v13);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v14,v14);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v15,v15);\
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
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v11,v11);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v12,v12);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v13,v13);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v14,v14);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v15,v15);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1_NON_SMP(0x3843,0x3843);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v5,v5);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v6,v6);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v7,v7);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v8,v8);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v9,v9);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v10,v10);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v11,v11);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v12,v12);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v13,v13);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v14,v14);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1_NON_SMP(cgen_local_v15,v15);\
			TRC_END_FILL_L1_NON_SMP();\
			TRC_END_FILTER_CHECK_L1_NON_SMP(EL1D_RF0_Trace_Filter, 3, 0x08);\
		}\
	} while(0)
#else
	#define EL1D_TRC_RF_BSI_CW_15(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define EL1D_TRC_RF_BSI_CW_16(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16) do {\
		{\
			TRC_START_FILTER_CHECK_L1_NON_SMP(EL1D_RF0_Trace_Filter, 3, 0x08);\
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
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v11,v11);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v12,v12);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v13,v13);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v14,v14);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v15,v15);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v16,v16);\
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
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v11,v11);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v12,v12);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v13,v13);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v14,v14);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v15,v15);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v16,v16);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1_NON_SMP(0x3943,0x3943);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v5,v5);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v6,v6);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v7,v7);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v8,v8);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v9,v9);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v10,v10);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v11,v11);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v12,v12);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v13,v13);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v14,v14);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v15,v15);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1_NON_SMP(cgen_local_v16,v16);\
			TRC_END_FILL_L1_NON_SMP();\
			TRC_END_FILTER_CHECK_L1_NON_SMP(EL1D_RF0_Trace_Filter, 3, 0x08);\
		}\
	} while(0)
#else
	#define EL1D_TRC_RF_BSI_CW_16(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define EL1D_TRC_RF_BSI_CW_17(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17) do {\
		{\
			TRC_START_FILTER_CHECK_L1_NON_SMP(EL1D_RF0_Trace_Filter, 3, 0x08);\
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
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v11,v11);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v12,v12);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v13,v13);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v14,v14);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v15,v15);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v16,v16);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v17,v17);\
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
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v11,v11);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v12,v12);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v13,v13);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v14,v14);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v15,v15);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v16,v16);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v17,v17);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1_NON_SMP(0x3A43,0x3A43);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v5,v5);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v6,v6);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v7,v7);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v8,v8);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v9,v9);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v10,v10);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v11,v11);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v12,v12);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v13,v13);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v14,v14);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v15,v15);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v16,v16);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1_NON_SMP(cgen_local_v17,v17);\
			TRC_END_FILL_L1_NON_SMP();\
			TRC_END_FILTER_CHECK_L1_NON_SMP(EL1D_RF0_Trace_Filter, 3, 0x08);\
		}\
	} while(0)
#else
	#define EL1D_TRC_RF_BSI_CW_17(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define EL1D_TRC_RF_BSI_CW_18(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18) do {\
		{\
			TRC_START_FILTER_CHECK_L1_NON_SMP(EL1D_RF0_Trace_Filter, 3, 0x08);\
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
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v11,v11);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v12,v12);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v13,v13);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v14,v14);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v15,v15);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v16,v16);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v17,v17);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v18,v18);\
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
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v11,v11);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v12,v12);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v13,v13);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v14,v14);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v15,v15);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v16,v16);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v17,v17);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v18,v18);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1_NON_SMP(0x3B43,0x3B43);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v5,v5);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v6,v6);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v7,v7);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v8,v8);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v9,v9);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v10,v10);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v11,v11);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v12,v12);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v13,v13);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v14,v14);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v15,v15);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v16,v16);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v17,v17);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1_NON_SMP(cgen_local_v18,v18);\
			TRC_END_FILL_L1_NON_SMP();\
			TRC_END_FILTER_CHECK_L1_NON_SMP(EL1D_RF0_Trace_Filter, 3, 0x08);\
		}\
	} while(0)
#else
	#define EL1D_TRC_RF_BSI_CW_18(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define EL1D_TRC_RF_BSI_CW_19(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19) do {\
		{\
			TRC_START_FILTER_CHECK_L1_NON_SMP(EL1D_RF0_Trace_Filter, 3, 0x08);\
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
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v11,v11);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v12,v12);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v13,v13);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v14,v14);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v15,v15);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v16,v16);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v17,v17);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v18,v18);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v19,v19);\
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
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v11,v11);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v12,v12);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v13,v13);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v14,v14);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v15,v15);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v16,v16);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v17,v17);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v18,v18);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v19,v19);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1_NON_SMP(0x3C43,0x3C43);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v5,v5);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v6,v6);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v7,v7);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v8,v8);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v9,v9);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v10,v10);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v11,v11);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v12,v12);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v13,v13);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v14,v14);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v15,v15);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v16,v16);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v17,v17);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v18,v18);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1_NON_SMP(cgen_local_v19,v19);\
			TRC_END_FILL_L1_NON_SMP();\
			TRC_END_FILTER_CHECK_L1_NON_SMP(EL1D_RF0_Trace_Filter, 3, 0x08);\
		}\
	} while(0)
#else
	#define EL1D_TRC_RF_BSI_CW_19(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define EL1D_TRC_RF_BSI_CW_20(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20) do {\
		{\
			TRC_START_FILTER_CHECK_L1_NON_SMP(EL1D_RF0_Trace_Filter, 3, 0x08);\
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
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v11,v11);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v12,v12);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v13,v13);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v14,v14);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v15,v15);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v16,v16);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v17,v17);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v18,v18);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v19,v19);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v20,v20);\
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
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v11,v11);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v12,v12);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v13,v13);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v14,v14);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v15,v15);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v16,v16);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v17,v17);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v18,v18);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v19,v19);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v20,v20);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1_NON_SMP(0x3D43,0x3D43);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v5,v5);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v6,v6);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v7,v7);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v8,v8);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v9,v9);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v10,v10);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v11,v11);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v12,v12);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v13,v13);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v14,v14);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v15,v15);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v16,v16);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v17,v17);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v18,v18);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v19,v19);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1_NON_SMP(cgen_local_v20,v20);\
			TRC_END_FILL_L1_NON_SMP();\
			TRC_END_FILTER_CHECK_L1_NON_SMP(EL1D_RF0_Trace_Filter, 3, 0x08);\
		}\
	} while(0)
#else
	#define EL1D_TRC_RF_BSI_CW_20(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define EL1D_TRC_RF_BSI_CW_21(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21) do {\
		{\
			TRC_START_FILTER_CHECK_L1_NON_SMP(EL1D_RF0_Trace_Filter, 3, 0x08);\
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
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v11,v11);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v12,v12);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v13,v13);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v14,v14);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v15,v15);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v16,v16);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v17,v17);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v18,v18);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v19,v19);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v20,v20);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v21,v21);\
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
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v11,v11);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v12,v12);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v13,v13);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v14,v14);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v15,v15);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v16,v16);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v17,v17);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v18,v18);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v19,v19);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v20,v20);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v21,v21);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1_NON_SMP(0x3E43,0x3E43);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v5,v5);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v6,v6);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v7,v7);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v8,v8);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v9,v9);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v10,v10);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v11,v11);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v12,v12);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v13,v13);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v14,v14);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v15,v15);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v16,v16);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v17,v17);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v18,v18);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v19,v19);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v20,v20);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1_NON_SMP(cgen_local_v21,v21);\
			TRC_END_FILL_L1_NON_SMP();\
			TRC_END_FILTER_CHECK_L1_NON_SMP(EL1D_RF0_Trace_Filter, 3, 0x08);\
		}\
	} while(0)
#else
	#define EL1D_TRC_RF_BSI_CW_21(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define EL1D_TRC_RF_BSI_CW_22(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22) do {\
		{\
			TRC_START_FILTER_CHECK_L1_NON_SMP(EL1D_RF0_Trace_Filter, 3, 0x08);\
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
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v11,v11);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v12,v12);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v13,v13);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v14,v14);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v15,v15);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v16,v16);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v17,v17);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v18,v18);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v19,v19);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v20,v20);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v21,v21);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v22,v22);\
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
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v11,v11);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v12,v12);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v13,v13);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v14,v14);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v15,v15);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v16,v16);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v17,v17);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v18,v18);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v19,v19);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v20,v20);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v21,v21);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v22,v22);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1_NON_SMP(0x3F43,0x3F43);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v5,v5);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v6,v6);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v7,v7);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v8,v8);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v9,v9);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v10,v10);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v11,v11);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v12,v12);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v13,v13);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v14,v14);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v15,v15);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v16,v16);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v17,v17);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v18,v18);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v19,v19);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v20,v20);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v21,v21);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1_NON_SMP(cgen_local_v22,v22);\
			TRC_END_FILL_L1_NON_SMP();\
			TRC_END_FILTER_CHECK_L1_NON_SMP(EL1D_RF0_Trace_Filter, 3, 0x08);\
		}\
	} while(0)
#else
	#define EL1D_TRC_RF_BSI_CW_22(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define EL1D_TRC_RF_BSI_CW_23(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23) do {\
		{\
			TRC_START_FILTER_CHECK_L1_NON_SMP(EL1D_RF0_Trace_Filter, 3, 0x08);\
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
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v11,v11);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v12,v12);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v13,v13);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v14,v14);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v15,v15);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v16,v16);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v17,v17);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v18,v18);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v19,v19);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v20,v20);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v21,v21);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v22,v22);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v23,v23);\
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
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v11,v11);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v12,v12);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v13,v13);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v14,v14);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v15,v15);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v16,v16);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v17,v17);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v18,v18);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v19,v19);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v20,v20);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v21,v21);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v22,v22);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v23,v23);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1_NON_SMP(0x4043,0x4043);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v5,v5);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v6,v6);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v7,v7);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v8,v8);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v9,v9);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v10,v10);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v11,v11);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v12,v12);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v13,v13);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v14,v14);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v15,v15);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v16,v16);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v17,v17);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v18,v18);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v19,v19);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v20,v20);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v21,v21);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v22,v22);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1_NON_SMP(cgen_local_v23,v23);\
			TRC_END_FILL_L1_NON_SMP();\
			TRC_END_FILTER_CHECK_L1_NON_SMP(EL1D_RF0_Trace_Filter, 3, 0x08);\
		}\
	} while(0)
#else
	#define EL1D_TRC_RF_BSI_CW_23(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define EL1D_TRC_RF_BSI_CW_24(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23, v24) do {\
		{\
			TRC_START_FILTER_CHECK_L1_NON_SMP(EL1D_RF0_Trace_Filter, 3, 0x08);\
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
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v11,v11);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v12,v12);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v13,v13);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v14,v14);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v15,v15);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v16,v16);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v17,v17);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v18,v18);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v19,v19);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v20,v20);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v21,v21);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v22,v22);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v23,v23);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v24,v24);\
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
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v11,v11);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v12,v12);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v13,v13);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v14,v14);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v15,v15);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v16,v16);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v17,v17);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v18,v18);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v19,v19);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v20,v20);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v21,v21);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v22,v22);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v23,v23);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v24,v24);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1_NON_SMP(0x4143,0x4143);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v5,v5);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v6,v6);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v7,v7);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v8,v8);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v9,v9);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v10,v10);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v11,v11);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v12,v12);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v13,v13);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v14,v14);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v15,v15);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v16,v16);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v17,v17);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v18,v18);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v19,v19);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v20,v20);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v21,v21);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v22,v22);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v23,v23);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1_NON_SMP(cgen_local_v24,v24);\
			TRC_END_FILL_L1_NON_SMP();\
			TRC_END_FILTER_CHECK_L1_NON_SMP(EL1D_RF0_Trace_Filter, 3, 0x08);\
		}\
	} while(0)
#else
	#define EL1D_TRC_RF_BSI_CW_24(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23, v24)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EL1D_TRC_RF_MIPI_RX_CONFIG(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_RF0_Trace_Filter, 3, 0x80);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x4243,0x4243);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_RF0_Trace_Filter, 3, 0x80);\
		}\
	} while(0)
#else
	#define EL1D_TRC_RF_MIPI_RX_CONFIG(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EL1D_TRC_RF_MIPI_RX_CONFIG_SEQ(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_RF0_Trace_Filter, 3, 0x80);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x4343,0x4343);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_RF0_Trace_Filter, 3, 0x80);\
		}\
	} while(0)
#else
	#define EL1D_TRC_RF_MIPI_RX_CONFIG_SEQ(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EL1D_TRC_RF_MIPI_TX_CONFIG_SEQ(v1, v2, v3, v4, v5, v6, v7, v8) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_RF0_Trace_Filter, 3, 0x80);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x4443,0x4443);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v7,v7);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v8,v8);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_RF0_Trace_Filter, 3, 0x80);\
		}\
	} while(0)
#else
	#define EL1D_TRC_RF_MIPI_TX_CONFIG_SEQ(v1, v2, v3, v4, v5, v6, v7, v8)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EL1D_TRC_RF_CTRL_MIPI_STATE(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1_NON_SMP(EL1D_RF0_Trace_Filter, 3, 0x80);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_START_FILL_L1_NON_SMP();\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1_NON_SMP(0x4543,0x4543);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_END_FILL_L1_NON_SMP();\
			TRC_END_FILTER_CHECK_L1_NON_SMP(EL1D_RF0_Trace_Filter, 3, 0x80);\
		}\
	} while(0)
#else
	#define EL1D_TRC_RF_CTRL_MIPI_STATE(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EL1D_TRC_RF_CTRL_WIN_EXIST(v1, v2, v3, v4, v5, v6) do {\
		{\
			TRC_START_FILTER_CHECK_L1_NON_SMP(EL1D_RF0_Trace_Filter, 3, 0x80);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1_NON_SMP(0x4643,0x4643);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v5,v5);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1_NON_SMP(cgen_local_v6,v6);\
			TRC_END_FILL_L1_NON_SMP();\
			TRC_END_FILTER_CHECK_L1_NON_SMP(EL1D_RF0_Trace_Filter, 3, 0x80);\
		}\
	} while(0)
#else
	#define EL1D_TRC_RF_CTRL_WIN_EXIST(v1, v2, v3, v4, v5, v6)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EL1D_TRC_RF_MIPI_WORD_1(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_RF0_Trace_Filter, 3, 0x80);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x4743,0x4743);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_RF0_Trace_Filter, 3, 0x80);\
		}\
	} while(0)
#else
	#define EL1D_TRC_RF_MIPI_WORD_1(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EL1D_TRC_RF_MIPI_WORD_2(v1, v2, v3, v4, v5, v6) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_RF0_Trace_Filter, 3, 0x80);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x4843,0x4843);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_RF0_Trace_Filter, 3, 0x80);\
		}\
	} while(0)
#else
	#define EL1D_TRC_RF_MIPI_WORD_2(v1, v2, v3, v4, v5, v6)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EL1D_TRC_RF_MIPI_WORD_3(v1, v2, v3, v4, v5, v6, v7, v8, v9) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_RF0_Trace_Filter, 3, 0x80);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x4943,0x4943);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v7,v7);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v8,v8);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v9,v9);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_RF0_Trace_Filter, 3, 0x80);\
		}\
	} while(0)
#else
	#define EL1D_TRC_RF_MIPI_WORD_3(v1, v2, v3, v4, v5, v6, v7, v8, v9)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EL1D_TRC_RF_MIPI_WORD_4(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_RF0_Trace_Filter, 3, 0x80);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x4A43,0x4A43);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v7,v7);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v8,v8);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v9,v9);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v10,v10);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v11,v11);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v12,v12);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_RF0_Trace_Filter, 3, 0x80);\
		}\
	} while(0)
#else
	#define EL1D_TRC_RF_MIPI_WORD_4(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EL1D_TRC_RF_MIPI_WORD_5(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_RF0_Trace_Filter, 3, 0x80);\
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
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v13,v13);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v14,v14);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v15,v15);\
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
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v13,v13);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v14,v14);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v15,v15);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x4B43,0x4B43);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v7,v7);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v8,v8);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v9,v9);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v10,v10);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v11,v11);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v12,v12);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v13,v13);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v14,v14);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v15,v15);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_RF0_Trace_Filter, 3, 0x80);\
		}\
	} while(0)
#else
	#define EL1D_TRC_RF_MIPI_WORD_5(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EL1D_TRC_RF_MIPI_WORD_6(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_RF0_Trace_Filter, 3, 0x80);\
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
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v13,v13);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v14,v14);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v15,v15);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v16,v16);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v17,v17);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v18,v18);\
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
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v13,v13);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v14,v14);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v15,v15);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v16,v16);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v17,v17);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v18,v18);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x4C43,0x4C43);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v7,v7);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v8,v8);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v9,v9);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v10,v10);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v11,v11);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v12,v12);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v13,v13);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v14,v14);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v15,v15);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v16,v16);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v17,v17);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v18,v18);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_RF0_Trace_Filter, 3, 0x80);\
		}\
	} while(0)
#else
	#define EL1D_TRC_RF_MIPI_WORD_6(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EL1D_TRC_RF_MIPI_WORD_7(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_RF0_Trace_Filter, 3, 0x80);\
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
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v13,v13);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v14,v14);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v15,v15);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v16,v16);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v17,v17);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v18,v18);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v19,v19);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v20,v20);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v21,v21);\
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
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v13,v13);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v14,v14);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v15,v15);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v16,v16);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v17,v17);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v18,v18);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v19,v19);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v20,v20);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v21,v21);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x4D43,0x4D43);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v7,v7);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v8,v8);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v9,v9);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v10,v10);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v11,v11);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v12,v12);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v13,v13);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v14,v14);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v15,v15);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v16,v16);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v17,v17);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v18,v18);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v19,v19);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v20,v20);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v21,v21);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_RF0_Trace_Filter, 3, 0x80);\
		}\
	} while(0)
#else
	#define EL1D_TRC_RF_MIPI_WORD_7(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EL1D_TRC_RF_MIPI_WORD_8(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23, v24) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_RF0_Trace_Filter, 3, 0x80);\
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
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v13,v13);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v14,v14);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v15,v15);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v16,v16);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v17,v17);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v18,v18);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v19,v19);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v20,v20);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v21,v21);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v22,v22);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v23,v23);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v24,v24);\
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
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v13,v13);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v14,v14);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v15,v15);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v16,v16);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v17,v17);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v18,v18);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v19,v19);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v20,v20);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v21,v21);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v22,v22);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v23,v23);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v24,v24);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x4E43,0x4E43);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v7,v7);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v8,v8);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v9,v9);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v10,v10);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v11,v11);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v12,v12);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v13,v13);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v14,v14);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v15,v15);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v16,v16);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v17,v17);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v18,v18);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v19,v19);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v20,v20);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v21,v21);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v22,v22);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v23,v23);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v24,v24);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_RF0_Trace_Filter, 3, 0x80);\
		}\
	} while(0)
#else
	#define EL1D_TRC_RF_MIPI_WORD_8(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23, v24)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EL1D_TRC_RF_MIPI_WORD_9(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_RF0_Trace_Filter, 3, 0x80);\
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
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v13,v13);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v14,v14);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v15,v15);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v16,v16);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v17,v17);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v18,v18);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v19,v19);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v20,v20);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v21,v21);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v22,v22);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v23,v23);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v24,v24);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v25,v25);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v26,v26);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v27,v27);\
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
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v13,v13);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v14,v14);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v15,v15);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v16,v16);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v17,v17);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v18,v18);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v19,v19);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v20,v20);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v21,v21);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v22,v22);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v23,v23);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v24,v24);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v25,v25);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v26,v26);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v27,v27);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x4F43,0x4F43);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v7,v7);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v8,v8);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v9,v9);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v10,v10);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v11,v11);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v12,v12);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v13,v13);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v14,v14);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v15,v15);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v16,v16);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v17,v17);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v18,v18);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v19,v19);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v20,v20);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v21,v21);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v22,v22);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v23,v23);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v24,v24);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v25,v25);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v26,v26);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v27,v27);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_RF0_Trace_Filter, 3, 0x80);\
		}\
	} while(0)
#else
	#define EL1D_TRC_RF_MIPI_WORD_9(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EL1D_TRC_RF_CTRL_SFTICK(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1_NON_SMP(EL1D_RF0_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_START_FILL_L1_NON_SMP();\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1_NON_SMP(0x5043,0x5043);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_END_FILL_L1_NON_SMP();\
			TRC_END_FILTER_CHECK_L1_NON_SMP(EL1D_RF0_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define EL1D_TRC_RF_CTRL_SFTICK(v1)
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_RF_CTRL_TX_STX_UNLOCK(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_RF0_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x5143,0x5143);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_RF0_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1D_TRC_RF_CTRL_TX_STX_UNLOCK(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EL1D_TRC_RF_CTRL_TEMPER_CALC_BY_DAC(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_RF0_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x5243,0x5243);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_RF0_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define EL1D_TRC_RF_CTRL_TEMPER_CALC_BY_DAC(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EL1D_TRC_RF_CTRL_TEMPER_CALC(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_RF0_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x5343,0x5343);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_RF0_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define EL1D_TRC_RF_CTRL_TEMPER_CALC(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EL1D_TRC_RF_CTRL_FUNCTION_ENABLE(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_RF0_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x5443,0x5443);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_RF0_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define EL1D_TRC_RF_CTRL_FUNCTION_ENABLE(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_RF_TST_COMPROUTE_INDEX(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1_NON_SMP(EL1D_RF0_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_START_FILL_L1_NON_SMP();\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1_NON_SMP(0x5543,0x5543);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_END_FILL_L1_NON_SMP();\
			TRC_END_FILTER_CHECK_L1_NON_SMP(EL1D_RF0_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1D_TRC_RF_TST_COMPROUTE_INDEX(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define EL1D_TRC_RF_CTRL_CAPID_UPDATE(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1_NON_SMP(EL1D_RF0_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_START_FILL_L1_NON_SMP();\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1_NON_SMP(0x5643,0x5643);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_END_FILL_L1_NON_SMP();\
			TRC_END_FILTER_CHECK_L1_NON_SMP(EL1D_RF0_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define EL1D_TRC_RF_CTRL_CAPID_UPDATE(v1)
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_RF_CTRL_TX_FILTER_PATH_FLAG_UPDATE(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_RF0_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x5743,0x5743);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_RF0_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1D_TRC_RF_CTRL_TX_FILTER_PATH_FLAG_UPDATE(v1)
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_RF_CTRL_TX_IDC_UPDATE(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_RF0_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x5843,0x5843);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_RF0_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1D_TRC_RF_CTRL_TX_IDC_UPDATE(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EL1D_TRC_RF_QUEUE_PROC_CHK0(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1_NON_SMP(EL1D_RF0_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_START_FILL_L1_NON_SMP();\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1_NON_SMP(0x5943,0x5943);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_END_FILL_L1_NON_SMP();\
			TRC_END_FILTER_CHECK_L1_NON_SMP(EL1D_RF0_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define EL1D_TRC_RF_QUEUE_PROC_CHK0(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EL1D_TRC_RF_QUEUE_PROC_PRE(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1_NON_SMP(EL1D_RF0_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_START_FILL_L1_NON_SMP();\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1_NON_SMP(0x5A43,0x5A43);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_END_FILL_L1_NON_SMP();\
			TRC_END_FILTER_CHECK_L1_NON_SMP(EL1D_RF0_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define EL1D_TRC_RF_QUEUE_PROC_PRE(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EL1D_TRC_RF_QUEUE_PROC_POST(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1_NON_SMP(EL1D_RF0_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_START_FILL_L1_NON_SMP();\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1_NON_SMP(0x5B43,0x5B43);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_END_FILL_L1_NON_SMP();\
			TRC_END_FILTER_CHECK_L1_NON_SMP(EL1D_RF0_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define EL1D_TRC_RF_QUEUE_PROC_POST(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define EL1D_FIX_AFC_DBG(v1, v2, v3, v4, v5, v6) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_RF0_Trace_Filter, 1, 0x02);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x5C43,0x5C43);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_RF0_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define EL1D_FIX_AFC_DBG(v1, v2, v3, v4, v5, v6)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define EL1D_FIX_AFC_SET_BSI(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1_NON_SMP(EL1D_RF0_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_START_FILL_L1_NON_SMP();\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1_NON_SMP(0x5D43,0x5D43);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_END_FILL_L1_NON_SMP();\
			TRC_END_FILTER_CHECK_L1_NON_SMP(EL1D_RF0_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define EL1D_FIX_AFC_SET_BSI(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define EL1D_FIX_AFC_SYNTH_CALC(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_RF0_Trace_Filter, 1, 0x01);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x5E43,0x5E43);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_RF0_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1D_FIX_AFC_SYNTH_CALC(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EL1D_TRC_RF_TAS_BPI(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1_NON_SMP(EL1D_RF0_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_START_FILL_L1_NON_SMP();\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1_NON_SMP(0x5F43,0x5F43);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_END_FILL_L1_NON_SMP();\
			TRC_END_FILTER_CHECK_L1_NON_SMP(EL1D_RF0_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define EL1D_TRC_RF_TAS_BPI(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EL1D_TRC_RF_TAS_INFO(v1, v2, v3, v4, v5, v6) do {\
		{\
			TRC_START_FILTER_CHECK_L1_NON_SMP(EL1D_RF0_Trace_Filter, 1, 0x04);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1_NON_SMP(0x6043,0x6043);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v5,v5);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1_NON_SMP(cgen_local_v6,v6);\
			TRC_END_FILL_L1_NON_SMP();\
			TRC_END_FILTER_CHECK_L1_NON_SMP(EL1D_RF0_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define EL1D_TRC_RF_TAS_INFO(v1, v2, v3, v4, v5, v6)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define EL1D_TRC_RF_TAS_BPI_CALC(v1, v2, v3, v4, v5, v6, v7, v8, v9) do {\
		{\
			TRC_START_FILTER_CHECK_L1_NON_SMP(EL1D_RF0_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v5,v5);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v6,v6);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v7,v7);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v8,v8);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v9,v9);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1_NON_SMP(0x6143,0x6143);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v5,v5);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v6,v6);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v7,v7);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v8,v8);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1_NON_SMP(cgen_local_v9,v9);\
			TRC_END_FILL_L1_NON_SMP();\
			TRC_END_FILTER_CHECK_L1_NON_SMP(EL1D_RF0_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define EL1D_TRC_RF_TAS_BPI_CALC(v1, v2, v3, v4, v5, v6, v7, v8, v9)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EL1D_TRC_RF_CTRL_RX_LPM_DEBUG(v1, v2, v3, v4, v5, v6) do {\
		{\
			TRC_START_FILTER_CHECK_L1_NON_SMP(EL1D_RF0_Trace_Filter, 1, 0x04);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1_NON_SMP(0x6243,0x6243);\
			TRC_OUTPUT_16_MID_WRAPPER_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v5,v5);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1_NON_SMP(cgen_local_v6,v6);\
			TRC_END_FILL_L1_NON_SMP();\
			TRC_END_FILTER_CHECK_L1_NON_SMP(EL1D_RF0_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define EL1D_TRC_RF_CTRL_RX_LPM_DEBUG(v1, v2, v3, v4, v5, v6)
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_RF_CTRL_RX_LPM_SYM_PATTERN(v1, v2, v3, v4, v5, v6, v7, v8) do {\
		{\
			TRC_START_FILTER_CHECK_L1_NON_SMP(EL1D_RF0_Trace_Filter, 1, 0x01);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1_NON_SMP(0x6343,0x6343);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v5,v5);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v6,v6);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v7,v7);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1_NON_SMP(cgen_local_v8,v8);\
			TRC_END_FILL_L1_NON_SMP();\
			TRC_END_FILTER_CHECK_L1_NON_SMP(EL1D_RF0_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1D_TRC_RF_CTRL_RX_LPM_SYM_PATTERN(v1, v2, v3, v4, v5, v6, v7, v8)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EL1D_TRC_RF_CTRL_LPM_PARAM(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1_NON_SMP(EL1D_RF0_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_START_FILL_L1_NON_SMP();\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1_NON_SMP(0x6443,0x6443);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_END_FILL_L1_NON_SMP();\
			TRC_END_FILTER_CHECK_L1_NON_SMP(EL1D_RF0_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define EL1D_TRC_RF_CTRL_LPM_PARAM(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EL1D_TRC_RF_ANT_CHANGE_TIME(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_RF0_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x6543,0x6543);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_RF0_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define EL1D_TRC_RF_ANT_CHANGE_TIME(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EL1D_TRC_RF_ANT_CHANGE_CTRL(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_RF0_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x6643,0x6643);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_RF0_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define EL1D_TRC_RF_ANT_CHANGE_CTRL(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_RF_LIF_INFO(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_RF0_Trace_Filter, 4, 0x01);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x6743,0x6743);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v7,v7);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v8,v8);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v9,v9);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v10,v10);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v11,v11);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_RF0_Trace_Filter, 4, 0x01);\
		}\
	} while(0)
#else
	#define EL1D_TRC_RF_LIF_INFO(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define EL1D_TRC_RF_LIF_LO_SHFT_CC(v1, v2, v3, v4, v5, v6, v7) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_RF0_Trace_Filter, 4, 0x02);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x6843,0x6843);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v7,v7);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_RF0_Trace_Filter, 4, 0x02);\
		}\
	} while(0)
#else
	#define EL1D_TRC_RF_LIF_LO_SHFT_CC(v1, v2, v3, v4, v5, v6, v7)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define EL1D_TRC_RF_LIF_LO_SHFT_SRX(v1, v2, v3, v4, v5, v6, v7) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_RF0_Trace_Filter, 4, 0x02);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x6943,0x6943);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v7,v7);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_RF0_Trace_Filter, 4, 0x02);\
		}\
	} while(0)
#else
	#define EL1D_TRC_RF_LIF_LO_SHFT_SRX(v1, v2, v3, v4, v5, v6, v7)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define EL1D_TRC_RXLIF_LIF_INJECT_SUCCESS0(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_RF0_Trace_Filter, 4, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x6A43,0x6A43);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_RF0_Trace_Filter, 4, 0x02);\
		}\
	} while(0)
#else
	#define EL1D_TRC_RXLIF_LIF_INJECT_SUCCESS0(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define EL1D_TRC_RXLIF_LIF_INJECT_NOT_SUPPORT(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_RF0_Trace_Filter, 4, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x6B43,0x6B43);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_RF0_Trace_Filter, 4, 0x02);\
		}\
	} while(0)
#else
	#define EL1D_TRC_RXLIF_LIF_INJECT_NOT_SUPPORT(v1)
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_RF_LIF_ACID(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_RF0_Trace_Filter, 4, 0x01);\
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
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v13,v13);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v14,v14);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v15,v15);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v16,v16);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v17,v17);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v18,v18);\
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
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v13,v13);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v14,v14);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v15,v15);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v16,v16);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v17,v17);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v18,v18);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x6C43,0x6C43);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v7,v7);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v8,v8);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v9,v9);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v10,v10);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v11,v11);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v12,v12);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v13,v13);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v14,v14);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v15,v15);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v16,v16);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v17,v17);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v18,v18);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_RF0_Trace_Filter, 4, 0x01);\
		}\
	} while(0)
#else
	#define EL1D_TRC_RF_LIF_ACID(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define EL1D_TRC_RF_LIF_ACID_SOL_CHANGE(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_RF0_Trace_Filter, 4, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x6D43,0x6D43);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_RF0_Trace_Filter, 4, 0x02);\
		}\
	} while(0)
#else
	#define EL1D_TRC_RF_LIF_ACID_SOL_CHANGE(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define EL1D_TRC_RF_LIF_ACID_CALLBACK(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_RF0_Trace_Filter, 4, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x6E43,0x6E43);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_RF0_Trace_Filter, 4, 0x02);\
		}\
	} while(0)
#else
	#define EL1D_TRC_RF_LIF_ACID_CALLBACK(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define EL1D_TRC_RF_LIF_ACID_MEAS_STATE_CTRL(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_RF0_Trace_Filter, 4, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x6F43,0x6F43);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_RF0_Trace_Filter, 4, 0x02);\
		}\
	} while(0)
#else
	#define EL1D_TRC_RF_LIF_ACID_MEAS_STATE_CTRL(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EL1D_TRC_RF_DAT_INFO(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_RF0_Trace_Filter, 1, 0x04);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x7043,0x7043);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v7,v7);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v8,v8);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v9,v9);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v10,v10);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_RF0_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define EL1D_TRC_RF_DAT_INFO(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define EL1D_TRC_RF_DAT_CHECK(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_RF0_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x7143,0x7143);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_RF0_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define EL1D_TRC_RF_DAT_CHECK(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define EL1D_TRC_RF_DAT_BPI_CHECK(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_RF0_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x7243,0x7243);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_RF0_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define EL1D_TRC_RF_DAT_BPI_CHECK(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define EL1D_TRC_RF_CTRL_VS1_DEBUG(v1, v2, v3, v4, v5, v6) do {\
		{\
			TRC_START_FILTER_CHECK_L1_NON_SMP(EL1D_RF0_Trace_Filter, 1, 0x02);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1_NON_SMP(0x7343,0x7343);\
			TRC_OUTPUT_16_MID_WRAPPER_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v5,v5);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1_NON_SMP(cgen_local_v6,v6);\
			TRC_END_FILL_L1_NON_SMP();\
			TRC_END_FILTER_CHECK_L1_NON_SMP(EL1D_RF0_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define EL1D_TRC_RF_CTRL_VS1_DEBUG(v1, v2, v3, v4, v5, v6)
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_RF_CTRL_ELNA_DEBUG(v1, v2, v3, v4, v5, v6) do {\
		{\
			TRC_START_FILTER_CHECK_L1_NON_SMP(EL1D_RF0_Trace_Filter, 1, 0x01);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1_NON_SMP(0x7443,0x7443);\
			TRC_OUTPUT_16_MID_WRAPPER_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v5,v5);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1_NON_SMP(cgen_local_v6,v6);\
			TRC_END_FILL_L1_NON_SMP();\
			TRC_END_FILTER_CHECK_L1_NON_SMP(EL1D_RF0_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1D_TRC_RF_CTRL_ELNA_DEBUG(v1, v2, v3, v4, v5, v6)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EL1D_TRC_RF_TPO_STATUS(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_RF0_Trace_Filter, 1, 0x04);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x7543,0x7543);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_RF0_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define EL1D_TRC_RF_TPO_STATUS(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EL1D_TRC_RF_TPO_STATUS_POUT(v1, v2, v3, v4, v5, v6) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_RF0_Trace_Filter, 1, 0x04);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x7643,0x7643);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_RF0_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define EL1D_TRC_RF_TPO_STATUS_POUT(v1, v2, v3, v4, v5, v6)
#endif



/*******************************/
/* declaration of filter array */
/*******************************/
EXTERN_TMD_FILTER(unsigned char, EL1D_RF0_Trace_Filter, 5);
/*************************/
/* Function declarations */
/*************************/
#ifdef L1_CATCHER

void Set_EL1D_RF0_Filter(unsigned char *setting);

#endif

/************************************/
/* Filter checking API declarations */
/************************************/

#define ChkL1ModFltr_EL1D_RF0()	(FILTER_CHECK(EL1D_RF0_Trace_Filter, 0, 1))
#define ChkL1ClsFltr_EL1D_RF0_EL1D_TRC_CLS_RF_H()	(ChkL1ModFltr_EL1D_RF0()&&(FILTER_CHECK(EL1D_RF0_Trace_Filter, 1, 0x01)))
#define ChkL1ClsFltr_EL1D_RF0_EL1D_TRC_CLS_RF_M()	(ChkL1ModFltr_EL1D_RF0()&&(FILTER_CHECK(EL1D_RF0_Trace_Filter, 1, 0x02)))
#define ChkL1ClsFltr_EL1D_RF0_EL1D_TRC_CLS_RF_L()	(ChkL1ModFltr_EL1D_RF0()&&(FILTER_CHECK(EL1D_RF0_Trace_Filter, 1, 0x04)))
#define ChkL1ClsFltr_EL1D_RF0_EL1D_TRC_CLS_RF_RX_CONFIG_H()	(ChkL1ModFltr_EL1D_RF0()&&(FILTER_CHECK(EL1D_RF0_Trace_Filter, 1, 0x08)))
#define ChkL1ClsFltr_EL1D_RF0_EL1D_TRC_CLS_RF_RX_CONFIG_M()	(ChkL1ModFltr_EL1D_RF0()&&(FILTER_CHECK(EL1D_RF0_Trace_Filter, 1, 0x10)))
#define ChkL1ClsFltr_EL1D_RF0_EL1D_TRC_CLS_RF_RX_CONFIG_L()	(ChkL1ModFltr_EL1D_RF0()&&(FILTER_CHECK(EL1D_RF0_Trace_Filter, 1, 0x20)))
#define ChkL1ClsFltr_EL1D_RF0_EL1D_TRC_CLS_RF_TX_CONFIG_H()	(ChkL1ModFltr_EL1D_RF0()&&(FILTER_CHECK(EL1D_RF0_Trace_Filter, 1, 0x40)))
#define ChkL1ClsFltr_EL1D_RF0_EL1D_TRC_CLS_RF_TX_CONFIG_M()	(ChkL1ModFltr_EL1D_RF0()&&(FILTER_CHECK(EL1D_RF0_Trace_Filter, 1, 0x80)))
#define ChkL1ClsFltr_EL1D_RF0_EL1D_TRC_CLS_RF_TX_CONFIG_L()	(ChkL1ModFltr_EL1D_RF0()&&(FILTER_CHECK(EL1D_RF0_Trace_Filter, 2, 0x01)))
#define ChkL1ClsFltr_EL1D_RF0_EL1D_TRC_CLS_RF_SCHED_H()	(ChkL1ModFltr_EL1D_RF0()&&(FILTER_CHECK(EL1D_RF0_Trace_Filter, 2, 0x02)))
#define ChkL1ClsFltr_EL1D_RF0_EL1D_TRC_CLS_RF_SCHED_M()	(ChkL1ModFltr_EL1D_RF0()&&(FILTER_CHECK(EL1D_RF0_Trace_Filter, 2, 0x04)))
#define ChkL1ClsFltr_EL1D_RF0_EL1D_TRC_CLS_RF_SCHED_L()	(ChkL1ModFltr_EL1D_RF0()&&(FILTER_CHECK(EL1D_RF0_Trace_Filter, 2, 0x08)))
#define ChkL1ClsFltr_EL1D_RF0_EL1D_TRC_CLS_RF_REQ_H()	(ChkL1ModFltr_EL1D_RF0()&&(FILTER_CHECK(EL1D_RF0_Trace_Filter, 2, 0x10)))
#define ChkL1ClsFltr_EL1D_RF0_EL1D_TRC_CLS_RF_REQ_M()	(ChkL1ModFltr_EL1D_RF0()&&(FILTER_CHECK(EL1D_RF0_Trace_Filter, 2, 0x20)))
#define ChkL1ClsFltr_EL1D_RF0_EL1D_TRC_CLS_RF_REQ_L()	(ChkL1ModFltr_EL1D_RF0()&&(FILTER_CHECK(EL1D_RF0_Trace_Filter, 2, 0x40)))
#define ChkL1ClsFltr_EL1D_RF0_EL1D_TRC_CLS_RF_BPI_H()	(ChkL1ModFltr_EL1D_RF0()&&(FILTER_CHECK(EL1D_RF0_Trace_Filter, 2, 0x80)))
#define ChkL1ClsFltr_EL1D_RF0_EL1D_TRC_CLS_RF_BPI_M()	(ChkL1ModFltr_EL1D_RF0()&&(FILTER_CHECK(EL1D_RF0_Trace_Filter, 3, 0x01)))
#define ChkL1ClsFltr_EL1D_RF0_EL1D_TRC_CLS_RF_BPI_L()	(ChkL1ModFltr_EL1D_RF0()&&(FILTER_CHECK(EL1D_RF0_Trace_Filter, 3, 0x02)))
#define ChkL1ClsFltr_EL1D_RF0_EL1D_TRC_CLS_RF_BSI_H()	(ChkL1ModFltr_EL1D_RF0()&&(FILTER_CHECK(EL1D_RF0_Trace_Filter, 3, 0x04)))
#define ChkL1ClsFltr_EL1D_RF0_EL1D_TRC_CLS_RF_BSI_M()	(ChkL1ModFltr_EL1D_RF0()&&(FILTER_CHECK(EL1D_RF0_Trace_Filter, 3, 0x08)))
#define ChkL1ClsFltr_EL1D_RF0_EL1D_TRC_CLS_RF_BSI_L()	(ChkL1ModFltr_EL1D_RF0()&&(FILTER_CHECK(EL1D_RF0_Trace_Filter, 3, 0x10)))
#define ChkL1ClsFltr_EL1D_RF0_EL1D_TRC_CLS_RF_MIPI_H()	(ChkL1ModFltr_EL1D_RF0()&&(FILTER_CHECK(EL1D_RF0_Trace_Filter, 3, 0x20)))
#define ChkL1ClsFltr_EL1D_RF0_EL1D_TRC_CLS_RF_MIPI_M()	(ChkL1ModFltr_EL1D_RF0()&&(FILTER_CHECK(EL1D_RF0_Trace_Filter, 3, 0x40)))
#define ChkL1ClsFltr_EL1D_RF0_EL1D_TRC_CLS_RF_MIPI_L()	(ChkL1ModFltr_EL1D_RF0()&&(FILTER_CHECK(EL1D_RF0_Trace_Filter, 3, 0x80)))
#define ChkL1ClsFltr_EL1D_RF0_EL1D_TRC_CLS_RF_LIF_H()	(ChkL1ModFltr_EL1D_RF0()&&(FILTER_CHECK(EL1D_RF0_Trace_Filter, 4, 0x01)))
#define ChkL1ClsFltr_EL1D_RF0_EL1D_TRC_CLS_RF_LIF_M()	(ChkL1ModFltr_EL1D_RF0()&&(FILTER_CHECK(EL1D_RF0_Trace_Filter, 4, 0x02)))
#define ChkL1ClsFltr_EL1D_RF0_EL1D_TRC_CLS_RF_LIF_L()	(ChkL1ModFltr_EL1D_RF0()&&(FILTER_CHECK(EL1D_RF0_Trace_Filter, 4, 0x04)))
#define ChkL1MsgFltr_EL1D_TRC_RF_CONTEXT_ENTRY()	ChkL1ClsFltr_EL1D_RF0_EL1D_TRC_CLS_RF_M()
#define ChkL1MsgFltr_EL1D_TRC_RF_CONTEXT_ENTRY_HRT()	ChkL1ClsFltr_EL1D_RF0_EL1D_TRC_CLS_RF_M()
#define ChkL1MsgFltr_EL1D_TRC_RF_CONTEXT_QUIT()	ChkL1ClsFltr_EL1D_RF0_EL1D_TRC_CLS_RF_M()
#define ChkL1MsgFltr_EL1D_TRC_RF_CONFIG_INFO()	ChkL1ClsFltr_EL1D_RF0_EL1D_TRC_CLS_RF_H()
#define ChkL1MsgFltr_EL1D_TRC_RF_CONFIG_FREQ_SPACING()	ChkL1ClsFltr_EL1D_RF0_EL1D_TRC_CLS_RF_M()
#define ChkL1MsgFltr_EL1D_TRC_RF_CONFIG_FREQ_SPACING_WARNING()	ChkL1ClsFltr_EL1D_RF0_EL1D_TRC_CLS_RF_M()
#define ChkL1MsgFltr_EL1D_TRC_RF_RX_CONFIG_COMMON()	ChkL1ClsFltr_EL1D_RF0_EL1D_TRC_CLS_RF_RX_CONFIG_M()
#define ChkL1MsgFltr_EL1D_TRC_RF_RX_CONFIG_CC()	ChkL1ClsFltr_EL1D_RF0_EL1D_TRC_CLS_RF_RX_CONFIG_H()
#define ChkL1MsgFltr_EL1D_TRC_RF_RX_CONFIG_TEST_PARAMS()	ChkL1ClsFltr_EL1D_RF0_EL1D_TRC_CLS_RF_RX_CONFIG_M()
#define ChkL1MsgFltr_EL1D_TRC_RF_RX_CONFIG_IDX_PARAMS()	ChkL1ClsFltr_EL1D_RF0_EL1D_TRC_CLS_RF_RX_CONFIG_M()
#define ChkL1MsgFltr_EL1D_TRC_RF_RX_CONFIG_TX()	ChkL1ClsFltr_EL1D_RF0_EL1D_TRC_CLS_RF_RX_CONFIG_M()
#define ChkL1MsgFltr_EL1D_TRC_RF_RX_CONFIG_REGION()	ChkL1ClsFltr_EL1D_RF0_EL1D_TRC_CLS_RF_RX_CONFIG_M()
#define ChkL1MsgFltr_EL1D_TRC_RF_RX_CONFIG_GROUP_INFO()	ChkL1ClsFltr_EL1D_RF0_EL1D_TRC_CLS_RF_RX_CONFIG_L()
#define ChkL1MsgFltr_EL1D_TRC_RF_RX_CONFIG_NORM_76_CW()	ChkL1ClsFltr_EL1D_RF0_EL1D_TRC_CLS_RF_RX_CONFIG_M()
#define ChkL1MsgFltr_EL1D_TRC_RF_RX_CONFIG_TX_INFO()	ChkL1ClsFltr_EL1D_RF0_EL1D_TRC_CLS_RF_RX_CONFIG_L()
#define ChkL1MsgFltr_EL1D_TRC_RF_RX_CONFIG_CC_INFO_TX()	ChkL1ClsFltr_EL1D_RF0_EL1D_TRC_CLS_RF_RX_CONFIG_M()
#define ChkL1MsgFltr_EL1D_TRC_RF_RX_CONFIG_TAS()	ChkL1ClsFltr_EL1D_RF0_EL1D_TRC_CLS_RF_RX_CONFIG_M()
#define ChkL1MsgFltr_EL1D_TRC_RF_RX_CONFIG_ANT_TUNER()	ChkL1ClsFltr_EL1D_RF0_EL1D_TRC_CLS_RF_RX_CONFIG_M()
#define ChkL1MsgFltr_EL1D_TRC_RF_RX_CONFIG_ANT_REORG()	ChkL1ClsFltr_EL1D_RF0_EL1D_TRC_CLS_RF_RX_CONFIG_M()
#define ChkL1MsgFltr_EL1D_TRC_RF_TX_CONFIG_CC_INFO()	ChkL1ClsFltr_EL1D_RF0_EL1D_TRC_CLS_RF_TX_CONFIG_H()
#define ChkL1MsgFltr_EL1D_TRC_RF_TX_CONFIG_CC_BDRY()	ChkL1ClsFltr_EL1D_RF0_EL1D_TRC_CLS_RF_TX_CONFIG_M()
#define ChkL1MsgFltr_EL1D_TRC_RF_TX_CONFIG_CCA_INFO()	ChkL1ClsFltr_EL1D_RF0_EL1D_TRC_CLS_RF_TX_CONFIG_M()
#define ChkL1MsgFltr_EL1D_TRC_RF_TX_CONFIG_HW_SEL()	ChkL1ClsFltr_EL1D_RF0_EL1D_TRC_CLS_RF_TX_CONFIG_M()
#define ChkL1MsgFltr_EL1D_TRC_RF_TX_CONFIG_CMN_PARAMS()	ChkL1ClsFltr_EL1D_RF0_EL1D_TRC_CLS_RF_TX_CONFIG_M()
#define ChkL1MsgFltr_EL1D_TRC_RF_TX_CONFIG_SX()	ChkL1ClsFltr_EL1D_RF0_EL1D_TRC_CLS_RF_TX_CONFIG_M()
#define ChkL1MsgFltr_EL1D_TRC_RF_TX_CONFIG_CW()	ChkL1ClsFltr_EL1D_RF0_EL1D_TRC_CLS_RF_TX_CONFIG_M()
#define ChkL1MsgFltr_EL1D_TRC_RF_TX_CONFIG_CW_STX()	ChkL1ClsFltr_EL1D_RF0_EL1D_TRC_CLS_RF_TX_CONFIG_M()
#define ChkL1MsgFltr_EL1D_TRC_RF_TX_CONFIG_TEST()	ChkL1ClsFltr_EL1D_RF0_EL1D_TRC_CLS_RF_TX_CONFIG_M()
#define ChkL1MsgFltr_EL1D_TRC_RF_TX_CONFIG_IDX_PARAMS()	ChkL1ClsFltr_EL1D_RF0_EL1D_TRC_CLS_RF_TX_CONFIG_H()
#define ChkL1MsgFltr_EL1D_TRC_RF_CTRL_SCH_TRX_CALLBACK()	ChkL1ClsFltr_EL1D_RF0_EL1D_TRC_CLS_RF_SCHED_H()
#define ChkL1MsgFltr_EL1D_TRC_RF_CTRL_SCH_RF_CALLBACK()	ChkL1ClsFltr_EL1D_RF0_EL1D_TRC_CLS_RF_SCHED_H()
#define ChkL1MsgFltr_EL1D_TRC_RF_CTRL_SCH_CALLBACK_END()	ChkL1ClsFltr_EL1D_RF0_EL1D_TRC_CLS_RF_SCHED_M()
#define ChkL1MsgFltr_EL1D_TRC_RF_CTRL_SCH_RXSCH_REQ_SRX()	ChkL1ClsFltr_EL1D_RF0_EL1D_TRC_CLS_RF_SCHED_H()
#define ChkL1MsgFltr_EL1D_TRC_RF_CTRL_SCH_EVENT_TYPE()	ChkL1ClsFltr_EL1D_RF0_EL1D_TRC_CLS_RF_SCHED_L()
#define ChkL1MsgFltr_EL1D_TRC_RF_CTRL_SCH_GLO_OFS()	ChkL1ClsFltr_EL1D_RF0_EL1D_TRC_CLS_RF_SCHED_L()
#define ChkL1MsgFltr_EL1D_TRC_RF_CTRL_SCH_TX_PARAMS()	ChkL1ClsFltr_EL1D_RF0_EL1D_TRC_CLS_RF_SCHED_H()
#define ChkL1MsgFltr_EL1D_TRC_RF_CTRL_SET_REQ()	ChkL1ClsFltr_EL1D_RF0_EL1D_TRC_CLS_RF_REQ_H()
#define ChkL1MsgFltr_EL1D_TRC_RF_CTRL_SET_REQ_PARAMS()	ChkL1ClsFltr_EL1D_RF0_EL1D_TRC_CLS_RF_REQ_H()
#define ChkL1MsgFltr_EL1D_TRC_RF_CTRL_SET_RF_REQ()	ChkL1ClsFltr_EL1D_RF0_EL1D_TRC_CLS_RF_REQ_L()
#define ChkL1MsgFltr_EL1D_TRC_RF_CTRL_TX_REQ_CANCEL()	ChkL1ClsFltr_EL1D_RF0_EL1D_TRC_CLS_RF_REQ_L()
#define ChkL1MsgFltr_EL1D_TRC_RF_BPI_CW_6()	ChkL1ClsFltr_EL1D_RF0_EL1D_TRC_CLS_RF_BPI_M()
#define ChkL1MsgFltr_EL1D_TRC_RF_BPI_CW_2()	ChkL1ClsFltr_EL1D_RF0_EL1D_TRC_CLS_RF_BPI_M()
#define ChkL1MsgFltr_EL1D_TRC_RF_BSI_CW_1()	ChkL1ClsFltr_EL1D_RF0_EL1D_TRC_CLS_RF_BSI_M()
#define ChkL1MsgFltr_EL1D_TRC_RF_BSI_CW_2()	ChkL1ClsFltr_EL1D_RF0_EL1D_TRC_CLS_RF_BSI_M()
#define ChkL1MsgFltr_EL1D_TRC_RF_BSI_CW_3()	ChkL1ClsFltr_EL1D_RF0_EL1D_TRC_CLS_RF_BSI_M()
#define ChkL1MsgFltr_EL1D_TRC_RF_BSI_CW_4()	ChkL1ClsFltr_EL1D_RF0_EL1D_TRC_CLS_RF_BSI_M()
#define ChkL1MsgFltr_EL1D_TRC_RF_BSI_CW_5()	ChkL1ClsFltr_EL1D_RF0_EL1D_TRC_CLS_RF_BSI_M()
#define ChkL1MsgFltr_EL1D_TRC_RF_BSI_CW_6()	ChkL1ClsFltr_EL1D_RF0_EL1D_TRC_CLS_RF_BSI_M()
#define ChkL1MsgFltr_EL1D_TRC_RF_BSI_CW_7()	ChkL1ClsFltr_EL1D_RF0_EL1D_TRC_CLS_RF_BSI_M()
#define ChkL1MsgFltr_EL1D_TRC_RF_BSI_CW_8()	ChkL1ClsFltr_EL1D_RF0_EL1D_TRC_CLS_RF_BSI_M()
#define ChkL1MsgFltr_EL1D_TRC_RF_BSI_CW_9()	ChkL1ClsFltr_EL1D_RF0_EL1D_TRC_CLS_RF_BSI_M()
#define ChkL1MsgFltr_EL1D_TRC_RF_BSI_CW_10()	ChkL1ClsFltr_EL1D_RF0_EL1D_TRC_CLS_RF_BSI_M()
#define ChkL1MsgFltr_EL1D_TRC_RF_BSI_CW_11()	ChkL1ClsFltr_EL1D_RF0_EL1D_TRC_CLS_RF_BSI_M()
#define ChkL1MsgFltr_EL1D_TRC_RF_BSI_CW_12()	ChkL1ClsFltr_EL1D_RF0_EL1D_TRC_CLS_RF_BSI_M()
#define ChkL1MsgFltr_EL1D_TRC_RF_BSI_CW_13()	ChkL1ClsFltr_EL1D_RF0_EL1D_TRC_CLS_RF_BSI_M()
#define ChkL1MsgFltr_EL1D_TRC_RF_BSI_CW_14()	ChkL1ClsFltr_EL1D_RF0_EL1D_TRC_CLS_RF_BSI_M()
#define ChkL1MsgFltr_EL1D_TRC_RF_BSI_CW_15()	ChkL1ClsFltr_EL1D_RF0_EL1D_TRC_CLS_RF_BSI_M()
#define ChkL1MsgFltr_EL1D_TRC_RF_BSI_CW_16()	ChkL1ClsFltr_EL1D_RF0_EL1D_TRC_CLS_RF_BSI_M()
#define ChkL1MsgFltr_EL1D_TRC_RF_BSI_CW_17()	ChkL1ClsFltr_EL1D_RF0_EL1D_TRC_CLS_RF_BSI_M()
#define ChkL1MsgFltr_EL1D_TRC_RF_BSI_CW_18()	ChkL1ClsFltr_EL1D_RF0_EL1D_TRC_CLS_RF_BSI_M()
#define ChkL1MsgFltr_EL1D_TRC_RF_BSI_CW_19()	ChkL1ClsFltr_EL1D_RF0_EL1D_TRC_CLS_RF_BSI_M()
#define ChkL1MsgFltr_EL1D_TRC_RF_BSI_CW_20()	ChkL1ClsFltr_EL1D_RF0_EL1D_TRC_CLS_RF_BSI_M()
#define ChkL1MsgFltr_EL1D_TRC_RF_BSI_CW_21()	ChkL1ClsFltr_EL1D_RF0_EL1D_TRC_CLS_RF_BSI_M()
#define ChkL1MsgFltr_EL1D_TRC_RF_BSI_CW_22()	ChkL1ClsFltr_EL1D_RF0_EL1D_TRC_CLS_RF_BSI_M()
#define ChkL1MsgFltr_EL1D_TRC_RF_BSI_CW_23()	ChkL1ClsFltr_EL1D_RF0_EL1D_TRC_CLS_RF_BSI_M()
#define ChkL1MsgFltr_EL1D_TRC_RF_BSI_CW_24()	ChkL1ClsFltr_EL1D_RF0_EL1D_TRC_CLS_RF_BSI_M()
#define ChkL1MsgFltr_EL1D_TRC_RF_MIPI_RX_CONFIG()	ChkL1ClsFltr_EL1D_RF0_EL1D_TRC_CLS_RF_MIPI_L()
#define ChkL1MsgFltr_EL1D_TRC_RF_MIPI_RX_CONFIG_SEQ()	ChkL1ClsFltr_EL1D_RF0_EL1D_TRC_CLS_RF_MIPI_L()
#define ChkL1MsgFltr_EL1D_TRC_RF_MIPI_TX_CONFIG_SEQ()	ChkL1ClsFltr_EL1D_RF0_EL1D_TRC_CLS_RF_MIPI_L()
#define ChkL1MsgFltr_EL1D_TRC_RF_CTRL_MIPI_STATE()	ChkL1ClsFltr_EL1D_RF0_EL1D_TRC_CLS_RF_MIPI_L()
#define ChkL1MsgFltr_EL1D_TRC_RF_CTRL_WIN_EXIST()	ChkL1ClsFltr_EL1D_RF0_EL1D_TRC_CLS_RF_MIPI_L()
#define ChkL1MsgFltr_EL1D_TRC_RF_MIPI_WORD_1()	ChkL1ClsFltr_EL1D_RF0_EL1D_TRC_CLS_RF_MIPI_L()
#define ChkL1MsgFltr_EL1D_TRC_RF_MIPI_WORD_2()	ChkL1ClsFltr_EL1D_RF0_EL1D_TRC_CLS_RF_MIPI_L()
#define ChkL1MsgFltr_EL1D_TRC_RF_MIPI_WORD_3()	ChkL1ClsFltr_EL1D_RF0_EL1D_TRC_CLS_RF_MIPI_L()
#define ChkL1MsgFltr_EL1D_TRC_RF_MIPI_WORD_4()	ChkL1ClsFltr_EL1D_RF0_EL1D_TRC_CLS_RF_MIPI_L()
#define ChkL1MsgFltr_EL1D_TRC_RF_MIPI_WORD_5()	ChkL1ClsFltr_EL1D_RF0_EL1D_TRC_CLS_RF_MIPI_L()
#define ChkL1MsgFltr_EL1D_TRC_RF_MIPI_WORD_6()	ChkL1ClsFltr_EL1D_RF0_EL1D_TRC_CLS_RF_MIPI_L()
#define ChkL1MsgFltr_EL1D_TRC_RF_MIPI_WORD_7()	ChkL1ClsFltr_EL1D_RF0_EL1D_TRC_CLS_RF_MIPI_L()
#define ChkL1MsgFltr_EL1D_TRC_RF_MIPI_WORD_8()	ChkL1ClsFltr_EL1D_RF0_EL1D_TRC_CLS_RF_MIPI_L()
#define ChkL1MsgFltr_EL1D_TRC_RF_MIPI_WORD_9()	ChkL1ClsFltr_EL1D_RF0_EL1D_TRC_CLS_RF_MIPI_L()
#define ChkL1MsgFltr_EL1D_TRC_RF_CTRL_SFTICK()	ChkL1ClsFltr_EL1D_RF0_EL1D_TRC_CLS_RF_L()
#define ChkL1MsgFltr_EL1D_TRC_RF_CTRL_TX_STX_UNLOCK()	ChkL1ClsFltr_EL1D_RF0_EL1D_TRC_CLS_RF_H()
#define ChkL1MsgFltr_EL1D_TRC_RF_CTRL_TEMPER_CALC_BY_DAC()	ChkL1ClsFltr_EL1D_RF0_EL1D_TRC_CLS_RF_L()
#define ChkL1MsgFltr_EL1D_TRC_RF_CTRL_TEMPER_CALC()	ChkL1ClsFltr_EL1D_RF0_EL1D_TRC_CLS_RF_L()
#define ChkL1MsgFltr_EL1D_TRC_RF_CTRL_FUNCTION_ENABLE()	ChkL1ClsFltr_EL1D_RF0_EL1D_TRC_CLS_RF_L()
#define ChkL1MsgFltr_EL1D_TRC_RF_TST_COMPROUTE_INDEX()	ChkL1ClsFltr_EL1D_RF0_EL1D_TRC_CLS_RF_H()
#define ChkL1MsgFltr_EL1D_TRC_RF_CTRL_CAPID_UPDATE()	ChkL1ClsFltr_EL1D_RF0_EL1D_TRC_CLS_RF_M()
#define ChkL1MsgFltr_EL1D_TRC_RF_CTRL_TX_FILTER_PATH_FLAG_UPDATE()	ChkL1ClsFltr_EL1D_RF0_EL1D_TRC_CLS_RF_H()
#define ChkL1MsgFltr_EL1D_TRC_RF_CTRL_TX_IDC_UPDATE()	ChkL1ClsFltr_EL1D_RF0_EL1D_TRC_CLS_RF_H()
#define ChkL1MsgFltr_EL1D_TRC_RF_QUEUE_PROC_CHK0()	ChkL1ClsFltr_EL1D_RF0_EL1D_TRC_CLS_RF_L()
#define ChkL1MsgFltr_EL1D_TRC_RF_QUEUE_PROC_PRE()	ChkL1ClsFltr_EL1D_RF0_EL1D_TRC_CLS_RF_L()
#define ChkL1MsgFltr_EL1D_TRC_RF_QUEUE_PROC_POST()	ChkL1ClsFltr_EL1D_RF0_EL1D_TRC_CLS_RF_L()
#define ChkL1MsgFltr_EL1D_FIX_AFC_DBG()	ChkL1ClsFltr_EL1D_RF0_EL1D_TRC_CLS_RF_M()
#define ChkL1MsgFltr_EL1D_FIX_AFC_SET_BSI()	ChkL1ClsFltr_EL1D_RF0_EL1D_TRC_CLS_RF_M()
#define ChkL1MsgFltr_EL1D_FIX_AFC_SYNTH_CALC()	ChkL1ClsFltr_EL1D_RF0_EL1D_TRC_CLS_RF_H()
#define ChkL1MsgFltr_EL1D_TRC_RF_TAS_BPI()	ChkL1ClsFltr_EL1D_RF0_EL1D_TRC_CLS_RF_L()
#define ChkL1MsgFltr_EL1D_TRC_RF_TAS_INFO()	ChkL1ClsFltr_EL1D_RF0_EL1D_TRC_CLS_RF_L()
#define ChkL1MsgFltr_EL1D_TRC_RF_TAS_BPI_CALC()	ChkL1ClsFltr_EL1D_RF0_EL1D_TRC_CLS_RF_M()
#define ChkL1MsgFltr_EL1D_TRC_RF_CTRL_RX_LPM_DEBUG()	ChkL1ClsFltr_EL1D_RF0_EL1D_TRC_CLS_RF_L()
#define ChkL1MsgFltr_EL1D_TRC_RF_CTRL_RX_LPM_SYM_PATTERN()	ChkL1ClsFltr_EL1D_RF0_EL1D_TRC_CLS_RF_H()
#define ChkL1MsgFltr_EL1D_TRC_RF_CTRL_LPM_PARAM()	ChkL1ClsFltr_EL1D_RF0_EL1D_TRC_CLS_RF_L()
#define ChkL1MsgFltr_EL1D_TRC_RF_ANT_CHANGE_TIME()	ChkL1ClsFltr_EL1D_RF0_EL1D_TRC_CLS_RF_L()
#define ChkL1MsgFltr_EL1D_TRC_RF_ANT_CHANGE_CTRL()	ChkL1ClsFltr_EL1D_RF0_EL1D_TRC_CLS_RF_L()
#define ChkL1MsgFltr_EL1D_TRC_RF_LIF_INFO()	ChkL1ClsFltr_EL1D_RF0_EL1D_TRC_CLS_RF_LIF_H()
#define ChkL1MsgFltr_EL1D_TRC_RF_LIF_LO_SHFT_CC()	ChkL1ClsFltr_EL1D_RF0_EL1D_TRC_CLS_RF_LIF_M()
#define ChkL1MsgFltr_EL1D_TRC_RF_LIF_LO_SHFT_SRX()	ChkL1ClsFltr_EL1D_RF0_EL1D_TRC_CLS_RF_LIF_M()
#define ChkL1MsgFltr_EL1D_TRC_RXLIF_LIF_INJECT_SUCCESS0()	ChkL1ClsFltr_EL1D_RF0_EL1D_TRC_CLS_RF_LIF_M()
#define ChkL1MsgFltr_EL1D_TRC_RXLIF_LIF_INJECT_NOT_SUPPORT()	ChkL1ClsFltr_EL1D_RF0_EL1D_TRC_CLS_RF_LIF_M()
#define ChkL1MsgFltr_EL1D_TRC_RF_LIF_ACID()	ChkL1ClsFltr_EL1D_RF0_EL1D_TRC_CLS_RF_LIF_H()
#define ChkL1MsgFltr_EL1D_TRC_RF_LIF_ACID_SOL_CHANGE()	ChkL1ClsFltr_EL1D_RF0_EL1D_TRC_CLS_RF_LIF_M()
#define ChkL1MsgFltr_EL1D_TRC_RF_LIF_ACID_CALLBACK()	ChkL1ClsFltr_EL1D_RF0_EL1D_TRC_CLS_RF_LIF_M()
#define ChkL1MsgFltr_EL1D_TRC_RF_LIF_ACID_MEAS_STATE_CTRL()	ChkL1ClsFltr_EL1D_RF0_EL1D_TRC_CLS_RF_LIF_M()
#define ChkL1MsgFltr_EL1D_TRC_RF_DAT_INFO()	ChkL1ClsFltr_EL1D_RF0_EL1D_TRC_CLS_RF_L()
#define ChkL1MsgFltr_EL1D_TRC_RF_DAT_CHECK()	ChkL1ClsFltr_EL1D_RF0_EL1D_TRC_CLS_RF_M()
#define ChkL1MsgFltr_EL1D_TRC_RF_DAT_BPI_CHECK()	ChkL1ClsFltr_EL1D_RF0_EL1D_TRC_CLS_RF_M()
#define ChkL1MsgFltr_EL1D_TRC_RF_CTRL_VS1_DEBUG()	ChkL1ClsFltr_EL1D_RF0_EL1D_TRC_CLS_RF_M()
#define ChkL1MsgFltr_EL1D_TRC_RF_CTRL_ELNA_DEBUG()	ChkL1ClsFltr_EL1D_RF0_EL1D_TRC_CLS_RF_H()
#define ChkL1MsgFltr_EL1D_TRC_RF_TPO_STATUS()	ChkL1ClsFltr_EL1D_RF0_EL1D_TRC_CLS_RF_L()
#define ChkL1MsgFltr_EL1D_TRC_RF_TPO_STATUS_POUT()	ChkL1ClsFltr_EL1D_RF0_EL1D_TRC_CLS_RF_L()


#endif
