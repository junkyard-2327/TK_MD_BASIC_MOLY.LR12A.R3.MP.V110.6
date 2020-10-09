#ifndef L1TRC_UL1D_MLT_SET1_DEF_H
#define L1TRC_UL1D_MLT_SET1_DEF_H

/******************************/
/* String category definition */
/******************************/
#define UL1D_TRC_STR_MLT_ON_OFF(v1)  (unsigned char)(v1+0)
#define UL1D_TRC_STR_AGPS(v1)  (unsigned char)(v1+2)
#define UL1D_TRC_STR_ULDCH_PRINT_FRC_DBG(v1)  (unsigned char)(v1+5)


/****************************/
/* Message macro definition */
/****************************/
#include "L1Trc.h"
#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UL1D_TRC_MLT_ON_OFF(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_MLT_SET1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0098,0x0098);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_MLT_SET1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define UL1D_TRC_MLT_ON_OFF(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UL1D_TRC_MLT_FILTER_SETTING(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_MLT_SET1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0198,0x0198);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_MLT_SET1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define UL1D_TRC_MLT_FILTER_SETTING(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UL1D_TRC_MLT_TXCRP_DEFAULT(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_MLT_SET1_Trace_Filter, 1, 0x02);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0298,0x0298);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_MLT_SET1_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define UL1D_TRC_MLT_TXCRP_DEFAULT(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UL1D_TRC_MLT_ULPC_RPP_ITP(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_MLT_SET1_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0398,0x0398);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_MLT_SET1_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define UL1D_TRC_MLT_ULPC_RPP_ITP(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UL1D_TRC_MLT_ULDCH_GAP_FOR_LTE_ONLY(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_MLT_SET1_Trace_Filter, 1, 0x02);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0498,0x0498);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_MLT_SET1_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define UL1D_TRC_MLT_ULDCH_GAP_FOR_LTE_ONLY(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_MLT_TXBRP_MIN_MAX_TTI(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_MLT_SET1_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0598,0x0598);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_MLT_SET1_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define UL1D_TRC_MLT_TXBRP_MIN_MAX_TTI(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_MLT_TXCRP_TG_METHOD(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_MLT_SET1_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0698,0x0698);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_MLT_SET1_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define UL1D_TRC_MLT_TXCRP_TG_METHOD(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_MLT_TXCRP_CFN(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_MLT_SET1_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0798,0x0798);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_MLT_SET1_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define UL1D_TRC_MLT_TXCRP_CFN(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_MLT_TXCRP_MSG_STSP(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_MLT_SET1_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0898,0x0898);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_MLT_SET1_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define UL1D_TRC_MLT_TXCRP_MSG_STSP(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_MLT_TXCRP_PRACH_STSP_SFCC(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_MLT_SET1_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0998,0x0998);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_MLT_SET1_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define UL1D_TRC_MLT_TXCRP_PRACH_STSP_SFCC(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_MLT_TXCRP_PRE_STSP(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_MLT_SET1_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0A98,0x0A98);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_MLT_SET1_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define UL1D_TRC_MLT_TXCRP_PRE_STSP(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_MLT_TXCRP_PRE_SFCC(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_MLT_SET1_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0B98,0x0B98);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_MLT_SET1_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define UL1D_TRC_MLT_TXCRP_PRE_SFCC(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_MLT_TXCRP_MSGD_SFCC(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_MLT_SET1_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0C98,0x0C98);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_MLT_SET1_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define UL1D_TRC_MLT_TXCRP_MSGD_SFCC(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_MLT_TXCRP_MSGC_SFCC(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_MLT_SET1_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0D98,0x0D98);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_MLT_SET1_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define UL1D_TRC_MLT_TXCRP_MSGC_SFCC(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_MLT_TXCRP_GAIN_INFO(v1, v2, v3, v4, v5, v6) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_MLT_SET1_Trace_Filter, 1, 0x04);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0E98,0x0E98);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_MLT_SET1_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define UL1D_TRC_MLT_TXCRP_GAIN_INFO(v1, v2, v3, v4, v5, v6)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_MLT_TM_ST_STROBE(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_MLT_SET1_Trace_Filter, 1, 0x20);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0F98,0x0F98);\
			TRC_OUTPUT_24_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_MLT_SET1_Trace_Filter, 1, 0x20);\
		}\
	} while(0)
#else
	#define UL1D_TRC_MLT_TM_ST_STROBE(v1)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_MLT_TM_CS4_STROBE(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_MLT_SET1_Trace_Filter, 1, 0x20);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1098,0x1098);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_24_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_MLT_SET1_Trace_Filter, 1, 0x20);\
		}\
	} while(0)
#else
	#define UL1D_TRC_MLT_TM_CS4_STROBE(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UL1D_TRC_MLT_TM_DD_STROBE(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_MLT_SET1_Trace_Filter, 1, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1198,0x1198);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_24_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_MLT_SET1_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define UL1D_TRC_MLT_TM_DD_STROBE(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UL1D_TRC_MLT_CS_EST_BIN(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_MLT_SET1_Trace_Filter, 1, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1298,0x1298);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_MLT_SET1_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define UL1D_TRC_MLT_CS_EST_BIN(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_MLT_RFM_S_RLID2PSC(v1, v2, v3, v4, v5, v6) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_MLT_SET1_Trace_Filter, 1, 0x10);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1398,0x1398);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_MLT_SET1_Trace_Filter, 1, 0x10);\
		}\
	} while(0)
#else
	#define UL1D_TRC_MLT_RFM_S_RLID2PSC(v1, v2, v3, v4, v5, v6)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_MLT_RFM_DC_S_RLID2PSC(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_MLT_SET1_Trace_Filter, 1, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1498,0x1498);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_MLT_SET1_Trace_Filter, 1, 0x10);\
		}\
	} while(0)
#else
	#define UL1D_TRC_MLT_RFM_DC_S_RLID2PSC(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_MLT_RFM_N_RLID2PSC(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_MLT_SET1_Trace_Filter, 1, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1598,0x1598);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_MLT_SET1_Trace_Filter, 1, 0x10);\
		}\
	} while(0)
#else
	#define UL1D_TRC_MLT_RFM_N_RLID2PSC(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_MLT_RFM_S_ST0_SYM_IDX(v1, v2, v3, v4, v5, v6) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_MLT_SET1_Trace_Filter, 1, 0x10);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1698,0x1698);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_MLT_SET1_Trace_Filter, 1, 0x10);\
		}\
	} while(0)
#else
	#define UL1D_TRC_MLT_RFM_S_ST0_SYM_IDX(v1, v2, v3, v4, v5, v6)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_MLT_RFM_DC_S_ST0_SYM_IDX(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_MLT_SET1_Trace_Filter, 1, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1798,0x1798);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_MLT_SET1_Trace_Filter, 1, 0x10);\
		}\
	} while(0)
#else
	#define UL1D_TRC_MLT_RFM_DC_S_ST0_SYM_IDX(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_MLT_RFM_N_ST0_SYM_IDX(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_MLT_SET1_Trace_Filter, 1, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1898,0x1898);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_MLT_SET1_Trace_Filter, 1, 0x10);\
		}\
	} while(0)
#else
	#define UL1D_TRC_MLT_RFM_N_ST0_SYM_IDX(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UL1D_TRC_AGPS_IMPORTAN(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_MLT_SET1_Trace_Filter, 1, 0x40);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1998,0x1998);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_MLT_SET1_Trace_Filter, 1, 0x40);\
		}\
	} while(0)
#else
	#define UL1D_TRC_AGPS_IMPORTAN(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UL1D_TRC_AGPS_REPORT(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_MLT_SET1_Trace_Filter, 1, 0x40);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1A98,0x1A98);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_MLT_SET1_Trace_Filter, 1, 0x40);\
		}\
	} while(0)
#else
	#define UL1D_TRC_AGPS_REPORT(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UL1D_TRC_AGPS_FRC_PARAM(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_MLT_SET1_Trace_Filter, 1, 0x40);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1B98,0x1B98);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_MLT_SET1_Trace_Filter, 1, 0x40);\
		}\
	} while(0)
#else
	#define UL1D_TRC_AGPS_FRC_PARAM(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UL1D_TRC_DCH_ASU_CHECK(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_MLT_SET1_Trace_Filter, 1, 0x80);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1C98,0x1C98);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_MLT_SET1_Trace_Filter, 1, 0x80);\
		}\
	} while(0)
#else
	#define UL1D_TRC_DCH_ASU_CHECK(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_ULDCH_PRINT_FRC_DBG(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_MLT_SET1_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1D98,0x1D98);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_MLT_SET1_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define UL1D_TRC_ULDCH_PRINT_FRC_DBG(v1, v2, v3)
#endif



/*******************************/
/* declaration of filter array */
/*******************************/
EXTERN_TMD_FILTER(unsigned char, UL1D_MLT_SET1_Trace_Filter, 5);
/*************************/
/* Function declarations */
/*************************/
#ifdef L1_CATCHER

void Set_UL1D_MLT_SET1_Filter(unsigned char *setting);

#endif

/************************************/
/* Filter checking API declarations */
/************************************/

#define ChkL1ModFltr_UL1D_MLT_SET1()	(FILTER_CHECK(UL1D_MLT_SET1_Trace_Filter, 0, 1))
#define ChkL1ClsFltr_UL1D_MLT_SET1_MLT_Config_L()	(ChkL1ModFltr_UL1D_MLT_SET1()&&(FILTER_CHECK(UL1D_MLT_SET1_Trace_Filter, 1, 0x01)))
#define ChkL1ClsFltr_UL1D_MLT_SET1_TX_Mod_L()	(ChkL1ModFltr_UL1D_MLT_SET1()&&(FILTER_CHECK(UL1D_MLT_SET1_Trace_Filter, 1, 0x02)))
#define ChkL1ClsFltr_UL1D_MLT_SET1_TX_Mod_M()	(ChkL1ModFltr_UL1D_MLT_SET1()&&(FILTER_CHECK(UL1D_MLT_SET1_Trace_Filter, 1, 0x04)))
#define ChkL1ClsFltr_UL1D_MLT_SET1_CS_Mod_L()	(ChkL1ModFltr_UL1D_MLT_SET1()&&(FILTER_CHECK(UL1D_MLT_SET1_Trace_Filter, 1, 0x08)))
#define ChkL1ClsFltr_UL1D_MLT_SET1_CS_Mod_M()	(ChkL1ModFltr_UL1D_MLT_SET1()&&(FILTER_CHECK(UL1D_MLT_SET1_Trace_Filter, 1, 0x10)))
#define ChkL1ClsFltr_UL1D_MLT_SET1_CS_Mod_H()	(ChkL1ModFltr_UL1D_MLT_SET1()&&(FILTER_CHECK(UL1D_MLT_SET1_Trace_Filter, 1, 0x20)))
#define ChkL1ClsFltr_UL1D_MLT_SET1_AGPS_L()	(ChkL1ModFltr_UL1D_MLT_SET1()&&(FILTER_CHECK(UL1D_MLT_SET1_Trace_Filter, 1, 0x40)))
#define ChkL1ClsFltr_UL1D_MLT_SET1_DCH_ASU_Check_L()	(ChkL1ModFltr_UL1D_MLT_SET1()&&(FILTER_CHECK(UL1D_MLT_SET1_Trace_Filter, 1, 0x80)))
#define ChkL1MsgFltr_UL1D_TRC_MLT_ON_OFF()	ChkL1ClsFltr_UL1D_MLT_SET1_MLT_Config_L()
#define ChkL1MsgFltr_UL1D_TRC_MLT_FILTER_SETTING()	ChkL1ClsFltr_UL1D_MLT_SET1_MLT_Config_L()
#define ChkL1MsgFltr_UL1D_TRC_MLT_TXCRP_DEFAULT()	ChkL1ClsFltr_UL1D_MLT_SET1_TX_Mod_L()
#define ChkL1MsgFltr_UL1D_TRC_MLT_ULPC_RPP_ITP()	ChkL1ClsFltr_UL1D_MLT_SET1_TX_Mod_L()
#define ChkL1MsgFltr_UL1D_TRC_MLT_ULDCH_GAP_FOR_LTE_ONLY()	ChkL1ClsFltr_UL1D_MLT_SET1_TX_Mod_L()
#define ChkL1MsgFltr_UL1D_TRC_MLT_TXBRP_MIN_MAX_TTI()	ChkL1ClsFltr_UL1D_MLT_SET1_TX_Mod_M()
#define ChkL1MsgFltr_UL1D_TRC_MLT_TXCRP_TG_METHOD()	ChkL1ClsFltr_UL1D_MLT_SET1_TX_Mod_M()
#define ChkL1MsgFltr_UL1D_TRC_MLT_TXCRP_CFN()	ChkL1ClsFltr_UL1D_MLT_SET1_TX_Mod_M()
#define ChkL1MsgFltr_UL1D_TRC_MLT_TXCRP_MSG_STSP()	ChkL1ClsFltr_UL1D_MLT_SET1_TX_Mod_M()
#define ChkL1MsgFltr_UL1D_TRC_MLT_TXCRP_PRACH_STSP_SFCC()	ChkL1ClsFltr_UL1D_MLT_SET1_TX_Mod_M()
#define ChkL1MsgFltr_UL1D_TRC_MLT_TXCRP_PRE_STSP()	ChkL1ClsFltr_UL1D_MLT_SET1_TX_Mod_M()
#define ChkL1MsgFltr_UL1D_TRC_MLT_TXCRP_PRE_SFCC()	ChkL1ClsFltr_UL1D_MLT_SET1_TX_Mod_M()
#define ChkL1MsgFltr_UL1D_TRC_MLT_TXCRP_MSGD_SFCC()	ChkL1ClsFltr_UL1D_MLT_SET1_TX_Mod_M()
#define ChkL1MsgFltr_UL1D_TRC_MLT_TXCRP_MSGC_SFCC()	ChkL1ClsFltr_UL1D_MLT_SET1_TX_Mod_M()
#define ChkL1MsgFltr_UL1D_TRC_MLT_TXCRP_GAIN_INFO()	ChkL1ClsFltr_UL1D_MLT_SET1_TX_Mod_M()
#define ChkL1MsgFltr_UL1D_TRC_MLT_TM_ST_STROBE()	ChkL1ClsFltr_UL1D_MLT_SET1_CS_Mod_H()
#define ChkL1MsgFltr_UL1D_TRC_MLT_TM_CS4_STROBE()	ChkL1ClsFltr_UL1D_MLT_SET1_CS_Mod_H()
#define ChkL1MsgFltr_UL1D_TRC_MLT_TM_DD_STROBE()	ChkL1ClsFltr_UL1D_MLT_SET1_CS_Mod_L()
#define ChkL1MsgFltr_UL1D_TRC_MLT_CS_EST_BIN()	ChkL1ClsFltr_UL1D_MLT_SET1_CS_Mod_L()
#define ChkL1MsgFltr_UL1D_TRC_MLT_RFM_S_RLID2PSC()	ChkL1ClsFltr_UL1D_MLT_SET1_CS_Mod_M()
#define ChkL1MsgFltr_UL1D_TRC_MLT_RFM_DC_S_RLID2PSC()	ChkL1ClsFltr_UL1D_MLT_SET1_CS_Mod_M()
#define ChkL1MsgFltr_UL1D_TRC_MLT_RFM_N_RLID2PSC()	ChkL1ClsFltr_UL1D_MLT_SET1_CS_Mod_M()
#define ChkL1MsgFltr_UL1D_TRC_MLT_RFM_S_ST0_SYM_IDX()	ChkL1ClsFltr_UL1D_MLT_SET1_CS_Mod_M()
#define ChkL1MsgFltr_UL1D_TRC_MLT_RFM_DC_S_ST0_SYM_IDX()	ChkL1ClsFltr_UL1D_MLT_SET1_CS_Mod_M()
#define ChkL1MsgFltr_UL1D_TRC_MLT_RFM_N_ST0_SYM_IDX()	ChkL1ClsFltr_UL1D_MLT_SET1_CS_Mod_M()
#define ChkL1MsgFltr_UL1D_TRC_AGPS_IMPORTAN()	ChkL1ClsFltr_UL1D_MLT_SET1_AGPS_L()
#define ChkL1MsgFltr_UL1D_TRC_AGPS_REPORT()	ChkL1ClsFltr_UL1D_MLT_SET1_AGPS_L()
#define ChkL1MsgFltr_UL1D_TRC_AGPS_FRC_PARAM()	ChkL1ClsFltr_UL1D_MLT_SET1_AGPS_L()
#define ChkL1MsgFltr_UL1D_TRC_DCH_ASU_CHECK()	ChkL1ClsFltr_UL1D_MLT_SET1_DCH_ASU_Check_L()
#define ChkL1MsgFltr_UL1D_TRC_ULDCH_PRINT_FRC_DBG()	ChkL1ClsFltr_UL1D_MLT_SET1_TX_Mod_M()


#endif
