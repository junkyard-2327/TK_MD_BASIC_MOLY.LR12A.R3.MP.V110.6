#ifndef L1TRC_UL1D_HSPA_PRI_DEF_H
#define L1TRC_UL1D_HSPA_PRI_DEF_H

/******************************/
/* String category definition */
/******************************/
#define UL1D_TRC_STR_HS_DSCH_STATE(v1)  (unsigned char)(v1+0)
#define UL1D_TRC_STR_EDCH_STATE(v1)  (unsigned char)(v1+4)
#define UL1D_TRC_STR_TXCRP_HARQ_STA(v1)  (unsigned char)(v1+7)
#define UL1D_TRC_STR_CH2_TYPE(v1)  (unsigned char)(v1+15)
#define UL1D_TRC_STR_EDCH_RECONFIG(v1)  (unsigned char)(v1+17)
#define UL1D_TRC_STR_EDCH_TTI(v1)  (unsigned char)(v1+30)
#define UL1D_TRC_STR_EDCH_SF(v1)  (unsigned char)(v1+32)
#define UL1D_TRC_STR_CQI_DEBUG_INFO(v1)  (unsigned char)(v1+45)
#define UL1D_TRC_STR_HRFM_MPATH_INFO(v1)  (unsigned char)(v1+52)
#define UL1D_TRC_STR_PRE_START_TYPE(v1)  (unsigned char)(v1+55)
#define UL1D_TRC_STR_DSCHINT_STS(v1)  (unsigned char)(v1+58)
#define UL1D_TRC_HSDSCH_HARQ_DBG_STR(v1)  (unsigned char)(v1+63)
#define UL1D_HSPA_TRC_E_SC(v1)  (unsigned char)(v1+73)
#define UL1D_TRC_ERX_DECODE_DBG_STR(v1)  (unsigned char)(v1+76)


/****************************/
/* Message macro definition */
/****************************/
#include "L1Trc.h"
#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UL1D_TRC_HS_SCCH_DBG() do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 1, 0x01);\
			TRC_START_FILL_L1();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L1(0x00A2,0x00A2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define UL1D_TRC_HS_SCCH_DBG()
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_HS_DSCH_STATE(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x01A2,0x01A2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define UL1D_TRC_HS_DSCH_STATE(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_HS_SCCH_RESULT(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 1, 0x04);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x02A2,0x02A2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v7,v7);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v8,v8);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v9,v9);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v10,v10);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v11,v11);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v12,v12);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define UL1D_TRC_HS_SCCH_RESULT(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_HS_SCCH_INFO(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 1, 0x04);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x03A2,0x03A2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define UL1D_TRC_HS_SCCH_INFO(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_HS_SCCH_INFO1(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 1, 0x04);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x04A2,0x04A2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define UL1D_TRC_HS_SCCH_INFO1(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_HS_SCCH_LESS_INFO(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x05A2,0x05A2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define UL1D_TRC_HS_SCCH_LESS_INFO(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UL1D_TRC_HS_SCCH_P1_MAX_CORR(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x06A2,0x06A2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define UL1D_TRC_HS_SCCH_P1_MAX_CORR(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UL1D_TRC_HS_SCCH_P1_SYM_ACC(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x07A2,0x07A2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define UL1D_TRC_HS_SCCH_P1_SYM_ACC(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_HS_STUCK_DBG(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x08A2,0x08A2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define UL1D_TRC_HS_STUCK_DBG(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_HS_STUCK_SKIP(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x09A2,0x09A2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define UL1D_TRC_HS_STUCK_SKIP(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_HS_STUCK_PLMN_INFO(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0AA2,0x0AA2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define UL1D_TRC_HS_STUCK_PLMN_INFO(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_HS_STUCK_PATCH_ENABLE_CHECK(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0BA2,0x0BA2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define UL1D_TRC_HS_STUCK_PATCH_ENABLE_CHECK(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_HS_STUCK_NVRAM_VALUE(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0CA2,0x0CA2);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define UL1D_TRC_HS_STUCK_NVRAM_VALUE(v1)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_HS_STUCK_PATCH_AT_CTRL(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0DA2,0x0DA2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define UL1D_TRC_HS_STUCK_PATCH_AT_CTRL(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_HS_STUCK_BOOT_CHECK(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0EA2,0x0EA2);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define UL1D_TRC_HS_STUCK_BOOT_CHECK(v1)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_HS_TMO_PATCH_ENABLE_CHECK(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0FA2,0x0FA2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define UL1D_TRC_HS_TMO_PATCH_ENABLE_CHECK(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_HS_HARQ_ACK_NACK_CHECK(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x10A2,0x10A2);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define UL1D_TRC_HS_HARQ_ACK_NACK_CHECK(v1)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_HS_GCF_CQI_TEST_CHECK(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x11A2,0x11A2);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define UL1D_TRC_HS_GCF_CQI_TEST_CHECK(v1)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_HS_DSCH_RESULT(v1, v2, v3, v4, v5, v6) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 1, 0x04);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x12A2,0x12A2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define UL1D_TRC_HS_DSCH_RESULT(v1, v2, v3, v4, v5, v6)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_HS_DSCH_LMBT_RESULT(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x13A2,0x13A2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define UL1D_TRC_HS_DSCH_LMBT_RESULT(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_HS_DSCH_INT(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x14A2,0x14A2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define UL1D_TRC_HS_DSCH_INT(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_HS_DSCH_INT_DBG(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 1, 0x04);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x15A2,0x15A2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define UL1D_TRC_HS_DSCH_INT_DBG(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_HS_DSCH_SLT_LISR_DBG(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 1, 0x04);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x16A2,0x16A2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define UL1D_TRC_HS_DSCH_SLT_LISR_DBG(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_HS_DSCH_SLT_LISR(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x17A2,0x17A2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define UL1D_TRC_HS_DSCH_SLT_LISR(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_HS_DSCH_DBG(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x18A2,0x18A2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define UL1D_TRC_HS_DSCH_DBG(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_HS_DSCH_CH_STATUS(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x19A2,0x19A2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define UL1D_TRC_HS_DSCH_CH_STATUS(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_HSDSCH_HARQ_OFF_DBG(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1AA2,0x1AA2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define UL1D_TRC_HSDSCH_HARQ_OFF_DBG(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_HS_DSCH_DC_LESS(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1BA2,0x1BA2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define UL1D_TRC_HS_DSCH_DC_LESS(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UL1D_TRC_HS_DSCH_TPUT(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1CA2,0x1CA2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define UL1D_TRC_HS_DSCH_TPUT(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UL1D_TRC_HS_DSCH_TB_SIZE(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 1, 0x01);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1DA2,0x1DA2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define UL1D_TRC_HS_DSCH_TB_SIZE(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UL1D_TRC_HS_DSCH_LCE_RPT(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 1, 0x01);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1EA2,0x1EA2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define UL1D_TRC_HS_DSCH_LCE_RPT(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UL1D_TRC_HSCQI_CTRL(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1FA2,0x1FA2);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define UL1D_TRC_HSCQI_CTRL(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UL1D_TRC_HSRP_DBG(v1, v2, v3, v4, v5, v6) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 1, 0x01);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x20A2,0x20A2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define UL1D_TRC_HSRP_DBG(v1, v2, v3, v4, v5, v6)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_HS_TXCRP_STSP(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x21A2,0x21A2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define UL1D_TRC_HS_TXCRP_STSP(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_HS_TXCRP_HARQ_CONFIG(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x22A2,0x22A2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define UL1D_TRC_HS_TXCRP_HARQ_CONFIG(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_HS_TXCRP_CQI_CONFIG(v1, v2, v3, v4, v5, v6, v7, v8, v9) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 1, 0x02);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x23A2,0x23A2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v7,v7);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v8,v8);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v9,v9);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define UL1D_TRC_HS_TXCRP_CQI_CONFIG(v1, v2, v3, v4, v5, v6, v7, v8, v9)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_HS_TXCRP_IN_LOG(v1, v2, v3, v4, v5, v6, v7) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 1, 0x02);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x24A2,0x24A2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v7,v7);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define UL1D_TRC_HS_TXCRP_IN_LOG(v1, v2, v3, v4, v5, v6, v7)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UL1D_TRC_HS_TXCRP_UPDATE_TIME(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 1, 0x01);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x25A2,0x25A2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define UL1D_TRC_HS_TXCRP_UPDATE_TIME(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_HS_TXCRP_OUT_LOG(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 1, 0x04);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x26A2,0x26A2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v7,v7);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v8,v8);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v9,v9);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v10,v10);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define UL1D_TRC_HS_TXCRP_OUT_LOG(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_HS_DPCCH_FB_SYMBOL_IN_SLOT(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x27A2,0x27A2);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define UL1D_TRC_HS_DPCCH_FB_SYMBOL_IN_SLOT(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_HS_DSCH_HANDLE_SETUP(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x28A2,0x28A2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define UL1D_TRC_HS_DSCH_HANDLE_SETUP(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_HSCE_CH1_INFO(v1, v2, v3, v4, v5, v6, v7, v8, v9) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 1, 0x80);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x29A2,0x29A2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v7,v7);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v8,v8);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v9,v9);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 1, 0x80);\
		}\
	} while(0)
#else
	#define UL1D_TRC_HSCE_CH1_INFO(v1, v2, v3, v4, v5, v6, v7, v8, v9)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_HSCE_EQ_INFO(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 1, 0x80);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x2AA2,0x2AA2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 1, 0x80);\
		}\
	} while(0)
#else
	#define UL1D_TRC_HSCE_EQ_INFO(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_HSCE_EQ_RESET(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 1, 0x40);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x2BA2,0x2BA2);\
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
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v11,v11);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v12,v12);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 1, 0x40);\
		}\
	} while(0)
#else
	#define UL1D_TRC_HSCE_EQ_RESET(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_HSCE_CHx_INFO(v1, v2, v3, v4, v5, v6, v7, v8, v9) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 1, 0x80);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x2CA2,0x2CA2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v7,v7);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v8,v8);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v9,v9);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 1, 0x80);\
		}\
	} while(0)
#else
	#define UL1D_TRC_HSCE_CHx_INFO(v1, v2, v3, v4, v5, v6, v7, v8, v9)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UL1D_TRC_HSCE_FFT_INFO(v1, v2, v3, v4, v5, v6) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 1, 0x20);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x2DA2,0x2DA2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 1, 0x20);\
		}\
	} while(0)
#else
	#define UL1D_TRC_HSCE_FFT_INFO(v1, v2, v3, v4, v5, v6)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_HSCE_IOEST_WC_SET(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 1, 0x40);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x2EA2,0x2EA2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 1, 0x40);\
		}\
	} while(0)
#else
	#define UL1D_TRC_HSCE_IOEST_WC_SET(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_HSCE_REG_DBG(v1, v2, v3, v4, v5, v6) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 1, 0x40);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x2FA2,0x2FA2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 1, 0x40);\
		}\
	} while(0)
#else
	#define UL1D_TRC_HSCE_REG_DBG(v1, v2, v3, v4, v5, v6)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_HSCE_RST(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 1, 0x40);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x30A2,0x30A2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 1, 0x40);\
		}\
	} while(0)
#else
	#define UL1D_TRC_HSCE_RST(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UL1D_TRC_HSCE_UPDATE_CELLS(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 1, 0x20);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x31A2,0x31A2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v7,v7);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v8,v8);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v9,v9);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v10,v10);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 1, 0x20);\
		}\
	} while(0)
#else
	#define UL1D_TRC_HSCE_UPDATE_CELLS(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_HSCE_RFEQ_INFO(v1, v2, v3, v4, v5, v6) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 1, 0x80);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x32A2,0x32A2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 1, 0x80);\
		}\
	} while(0)
#else
	#define UL1D_TRC_HSCE_RFEQ_INFO(v1, v2, v3, v4, v5, v6)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_SRV_OTR_INFO(v1, v2, v3, v4, v5, v6, v7, v8) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 1, 0x80);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x33A2,0x33A2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v7,v7);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v8,v8);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 1, 0x80);\
		}\
	} while(0)
#else
	#define UL1D_TRC_SRV_OTR_INFO(v1, v2, v3, v4, v5, v6, v7, v8)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_HSCE_DBG_PWR(v1, v2, v3, v4, v5, v6, v7) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 1, 0x40);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x34A2,0x34A2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v7,v7);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 1, 0x40);\
		}\
	} while(0)
#else
	#define UL1D_TRC_HSCE_DBG_PWR(v1, v2, v3, v4, v5, v6, v7)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_OCIC_DBG(v1, v2, v3, v4, v5, v6, v7, v8) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 1, 0x40);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x35A2,0x35A2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v7,v7);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v8,v8);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 1, 0x40);\
		}\
	} while(0)
#else
	#define UL1D_TRC_OCIC_DBG(v1, v2, v3, v4, v5, v6, v7, v8)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_HRFM_REF_GSR_ADDR_TOGGLED(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 1, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x36A2,0x36A2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 1, 0x10);\
		}\
	} while(0)
#else
	#define UL1D_TRC_HRFM_REF_GSR_ADDR_TOGGLED(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_HRFM_REF_GSR_ADDR(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 1, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x37A2,0x37A2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 1, 0x10);\
		}\
	} while(0)
#else
	#define UL1D_TRC_HRFM_REF_GSR_ADDR(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_HRFM_MPATH_LIST(v1, v2, v3, v4, v5, v6) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 1, 0x10);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x38A2,0x38A2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 1, 0x10);\
		}\
	} while(0)
#else
	#define UL1D_TRC_HRFM_MPATH_LIST(v1, v2, v3, v4, v5, v6)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UL1D_TRC_HRFM_VALID_FNG_LIST(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 1, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x39A2,0x39A2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define UL1D_TRC_HRFM_VALID_FNG_LIST(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_HRFM_DISCARD_FNG_LIST(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 1, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x3AA2,0x3AA2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 1, 0x10);\
		}\
	} while(0)
#else
	#define UL1D_TRC_HRFM_DISCARD_FNG_LIST(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UL1D_TRC_HRFM_SHORT_DETECT(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 1, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x3BA2,0x3BA2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define UL1D_TRC_HRFM_SHORT_DETECT(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_HRFM_PROP_WINDOW(v1, v2, v3, v4, v5, v6, v7, v8) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 1, 0x10);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x3CA2,0x3CA2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v7,v7);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v8,v8);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 1, 0x10);\
		}\
	} while(0)
#else
	#define UL1D_TRC_HRFM_PROP_WINDOW(v1, v2, v3, v4, v5, v6, v7, v8)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UL1D_TRC_HRFM_CENTER_INIT(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 1, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x3DA2,0x3DA2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define UL1D_TRC_HRFM_CENTER_INIT(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UL1D_TRC_HRFM_ACCUMULATE(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 1, 0x08);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x3EA2,0x3EA2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v7,v7);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v8,v8);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v9,v9);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v10,v10);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v11,v11);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v12,v12);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define UL1D_TRC_HRFM_ACCUMULATE(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UL1D_TRC_HRFM_SWAP_WINDOW(v1, v2, v3, v4, v5, v6, v7, v8) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 1, 0x08);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x3FA2,0x3FA2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v7,v7);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v8,v8);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define UL1D_TRC_HRFM_SWAP_WINDOW(v1, v2, v3, v4, v5, v6, v7, v8)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UL1D_TRC_HRFM_MINOR_WIN(v1, v2, v3, v4, v5, v6) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 1, 0x08);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x40A2,0x40A2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define UL1D_TRC_HRFM_MINOR_WIN(v1, v2, v3, v4, v5, v6)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_HRFM_OTR_INFO(v1, v2, v3, v4, v5, v6) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 1, 0x10);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x41A2,0x41A2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 1, 0x10);\
		}\
	} while(0)
#else
	#define UL1D_TRC_HRFM_OTR_INFO(v1, v2, v3, v4, v5, v6)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UL1D_TRC_CQI_DBG1(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 2, 0x02);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x42A2,0x42A2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v7,v7);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v8,v8);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v9,v9);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v10,v10);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v11,v11);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v12,v12);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v13,v13);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v14,v14);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 2, 0x02);\
		}\
	} while(0)
#else
	#define UL1D_TRC_CQI_DBG1(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UL1D_TRC_CQI_INPUT(v1, v2, v3, v4, v5, v6, v7, v8, v9) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 2, 0x02);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x43A2,0x43A2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v7,v7);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v8,v8);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v9,v9);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 2, 0x02);\
		}\
	} while(0)
#else
	#define UL1D_TRC_CQI_INPUT(v1, v2, v3, v4, v5, v6, v7, v8, v9)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_CQI_ADJUST(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 2, 0x01);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x44A2,0x44A2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 2, 0x01);\
		}\
	} while(0)
#else
	#define UL1D_TRC_CQI_ADJUST(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_CQI_TX_SIR(v1, v2, v3, v4, v5, v6, v7, v8, v9) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 2, 0x01);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x45A2,0x45A2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v7,v7);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v8,v8);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v9,v9);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 2, 0x01);\
		}\
	} while(0)
#else
	#define UL1D_TRC_CQI_TX_SIR(v1, v2, v3, v4, v5, v6, v7, v8, v9)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_CQI_DELTA_SIR_CQI(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30, v31) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 2, 0x01);\
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
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v28,v28);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v29,v29);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v30,v30);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v31,v31);\
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
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v28,v28);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v29,v29);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v30,v30);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v31,v31);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x46A2,0x46A2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
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
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v15,v15);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v16,v16);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v17,v17);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v18,v18);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v19,v19);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v20,v20);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v21,v21);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v22,v22);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v23,v23);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v24,v24);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v25,v25);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v26,v26);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v27,v27);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v28,v28);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v29,v29);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v30,v30);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v31,v31);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 2, 0x01);\
		}\
	} while(0)
#else
	#define UL1D_TRC_CQI_DELTA_SIR_CQI(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30, v31)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_CQI_DEBUG_INFO(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30, v31, v32) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 2, 0x01);\
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
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v28,v28);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v29,v29);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v30,v30);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v31,v31);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v32,v32);\
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
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v28,v28);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v29,v29);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v30,v30);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v31,v31);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v32,v32);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x47A2,0x47A2);\
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
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v12,v12);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v13,v13);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v14,v14);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v15,v15);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v16,v16);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v17,v17);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v18,v18);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v19,v19);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v20,v20);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v21,v21);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v22,v22);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v23,v23);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v24,v24);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v25,v25);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v26,v26);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v27,v27);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v28,v28);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v29,v29);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v30,v30);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v31,v31);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v32,v32);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 2, 0x01);\
		}\
	} while(0)
#else
	#define UL1D_TRC_CQI_DEBUG_INFO(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30, v31, v32)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_CQI_DEBUG_INFO_32(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30, v31, v32) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 2, 0x01);\
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
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v28,v28);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v29,v29);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v30,v30);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v31,v31);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v32,v32);\
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
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v28,v28);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v29,v29);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v30,v30);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v31,v31);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v32,v32);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x48A2,0x48A2);\
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
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v15,v15);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v16,v16);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v17,v17);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v18,v18);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v19,v19);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v20,v20);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v21,v21);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v22,v22);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v23,v23);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v24,v24);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v25,v25);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v26,v26);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v27,v27);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v28,v28);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v29,v29);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v30,v30);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v31,v31);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v32,v32);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 2, 0x01);\
		}\
	} while(0)
#else
	#define UL1D_TRC_CQI_DEBUG_INFO_32(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30, v31, v32)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UL1D_TRC_CQI_XLAYER_ALGO_RLC_INFO(v1, v2, v3, v4, v5, v6) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 2, 0x02);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x49A2,0x49A2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 2, 0x02);\
		}\
	} while(0)
#else
	#define UL1D_TRC_CQI_XLAYER_ALGO_RLC_INFO(v1, v2, v3, v4, v5, v6)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UL1D_TRC_CQI_XLAYER_TXMAPPING_SEL(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 2, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x4AA2,0x4AA2);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 2, 0x02);\
		}\
	} while(0)
#else
	#define UL1D_TRC_CQI_XLAYER_TXMAPPING_SEL(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UL1D_TRC_CQI_XLAYER_SWITCH_CTRL(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 2, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x4BA2,0x4BA2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 2, 0x02);\
		}\
	} while(0)
#else
	#define UL1D_TRC_CQI_XLAYER_SWITCH_CTRL(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_CQI_PULL_IN(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 2, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x4CA2,0x4CA2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 2, 0x01);\
		}\
	} while(0)
#else
	#define UL1D_TRC_CQI_PULL_IN(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UL1D_TRC_CQI_BIAS_MODE(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 2, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x4DA2,0x4DA2);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 2, 0x02);\
		}\
	} while(0)
#else
	#define UL1D_TRC_CQI_BIAS_MODE(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UL1D_TRC_CQI_SIR_NW(v1, v2, v3, v4, v5, v6) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 2, 0x02);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x4EA2,0x4EA2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 2, 0x02);\
		}\
	} while(0)
#else
	#define UL1D_TRC_CQI_SIR_NW(v1, v2, v3, v4, v5, v6)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_HSRP_DBG_LOG(v1, v2, v3, v4, v5, v6, v7, v8) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 2, 0x04);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x4FA2,0x4FA2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v7,v7);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v8,v8);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 2, 0x04);\
		}\
	} while(0)
#else
	#define UL1D_TRC_HSRP_DBG_LOG(v1, v2, v3, v4, v5, v6, v7, v8)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UL1D_TRC_HSRP_FCC_DBG_LOG(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 2, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x50A2,0x50A2);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 2, 0x08);\
		}\
	} while(0)
#else
	#define UL1D_TRC_HSRP_FCC_DBG_LOG(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_HSRP_DSCH_SIR_LOG(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 2, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x51A2,0x51A2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 2, 0x04);\
		}\
	} while(0)
#else
	#define UL1D_TRC_HSRP_DSCH_SIR_LOG(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UL1D_TRC_HRXBRP_DBG0(v1, v2, v3, v4, v5, v6, v7, v8) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 2, 0x10);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x52A2,0x52A2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v7,v7);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v8,v8);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 2, 0x10);\
		}\
	} while(0)
#else
	#define UL1D_TRC_HRXBRP_DBG0(v1, v2, v3, v4, v5, v6, v7, v8)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UL1D_TRC_HRXBRP_DBG1(v1, v2, v3, v4, v5, v6, v7, v8) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 2, 0x10);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x53A2,0x53A2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v7,v7);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v8,v8);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 2, 0x10);\
		}\
	} while(0)
#else
	#define UL1D_TRC_HRXBRP_DBG1(v1, v2, v3, v4, v5, v6, v7, v8)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UL1D_TRC_HRXBRP_DBG2(v1, v2, v3, v4, v5, v6, v7, v8) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 2, 0x10);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x54A2,0x54A2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v7,v7);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v8,v8);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 2, 0x10);\
		}\
	} while(0)
#else
	#define UL1D_TRC_HRXBRP_DBG2(v1, v2, v3, v4, v5, v6, v7, v8)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UL1D_TRC_HRXBRP_DBG3(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 2, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x55A2,0x55A2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 2, 0x10);\
		}\
	} while(0)
#else
	#define UL1D_TRC_HRXBRP_DBG3(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UL1D_TRC_HRXBRP_DBG4(v1, v2, v3, v4, v5, v6, v7, v8) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 2, 0x10);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x56A2,0x56A2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v7,v7);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v8,v8);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 2, 0x10);\
		}\
	} while(0)
#else
	#define UL1D_TRC_HRXBRP_DBG4(v1, v2, v3, v4, v5, v6, v7, v8)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UL1D_TRC_HRXBRP_S_VALUE(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 2, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x57A2,0x57A2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 2, 0x10);\
		}\
	} while(0)
#else
	#define UL1D_TRC_HRXBRP_S_VALUE(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_EDCH_STATE(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 2, 0x20);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x58A2,0x58A2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 2, 0x20);\
		}\
	} while(0)
#else
	#define UL1D_TRC_EDCH_STATE(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_EDCH_INFO_IND(v1, v2, v3, v4, v5, v6) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 2, 0x40);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x59A2,0x59A2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 2, 0x40);\
		}\
	} while(0)
#else
	#define UL1D_TRC_EDCH_INFO_IND(v1, v2, v3, v4, v5, v6)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_EDCH_MAC_EVENT(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 2, 0x20);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x5AA2,0x5AA2);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 2, 0x20);\
		}\
	} while(0)
#else
	#define UL1D_TRC_EDCH_MAC_EVENT(v1)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_EDCH_RECONFIG(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 2, 0x20);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x5BA2,0x5BA2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 2, 0x20);\
		}\
	} while(0)
#else
	#define UL1D_TRC_EDCH_RECONFIG(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_EDCH_EDPDCH_CONFIG(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 2, 0x20);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x5CA2,0x5CA2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 2, 0x20);\
		}\
	} while(0)
#else
	#define UL1D_TRC_EDCH_EDPDCH_CONFIG(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_EDCH_HI_CONFIG(v1, v2, v3, v4, v5, v6) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 2, 0x20);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x5DA2,0x5DA2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 2, 0x20);\
		}\
	} while(0)
#else
	#define UL1D_TRC_EDCH_HI_CONFIG(v1, v2, v3, v4, v5, v6)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_EDCH_RG_CONFIG(v1, v2, v3, v4, v5, v6) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 2, 0x20);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x5EA2,0x5EA2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 2, 0x20);\
		}\
	} while(0)
#else
	#define UL1D_TRC_EDCH_RG_CONFIG(v1, v2, v3, v4, v5, v6)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_EDCH_STS_INFO(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 2, 0x40);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x5FA2,0x5FA2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v7,v7);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v8,v8);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v9,v9);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v10,v10);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v11,v11);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 2, 0x40);\
		}\
	} while(0)
#else
	#define UL1D_TRC_EDCH_STS_INFO(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_EDCH_FB_OFFSET(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 2, 0x20);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x60A2,0x60A2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v7,v7);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v8,v8);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v9,v9);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v10,v10);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v11,v11);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v12,v12);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v13,v13);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v14,v14);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v15,v15);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 2, 0x20);\
		}\
	} while(0)
#else
	#define UL1D_TRC_EDCH_FB_OFFSET(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_EDCH_ASSERT_INFO(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 2, 0x20);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x61A2,0x61A2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 2, 0x20);\
		}\
	} while(0)
#else
	#define UL1D_TRC_EDCH_ASSERT_INFO(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_EDCH_GAP_BITMAP(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 2, 0x40);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x62A2,0x62A2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 2, 0x40);\
		}\
	} while(0)
#else
	#define UL1D_TRC_EDCH_GAP_BITMAP(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_ETX_FORECAST_HANDLER(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 3, 0x04);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x63A2,0x63A2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 3, 0x04);\
		}\
	} while(0)
#else
	#define UL1D_TRC_ETX_FORECAST_HANDLER(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UL1D_TRC_ETX_ETFC_SELECT_BEGIN(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 3, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x64A2,0x64A2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 3, 0x08);\
		}\
	} while(0)
#else
	#define UL1D_TRC_ETX_ETFC_SELECT_BEGIN(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_ETX_ETFC_SELECT_WRAPUP(v1, v2, v3, v4, v5, v6) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 3, 0x04);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x65A2,0x65A2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 3, 0x04);\
		}\
	} while(0)
#else
	#define UL1D_TRC_ETX_ETFC_SELECT_WRAPUP(v1, v2, v3, v4, v5, v6)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UL1D_TRC_ETX_ETFC_SELECT_END(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 3, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x66A2,0x66A2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 3, 0x08);\
		}\
	} while(0)
#else
	#define UL1D_TRC_ETX_ETFC_SELECT_END(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UL1D_TRC_ETX_ETFC_SUSPEND_BEGIN(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 3, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x67A2,0x67A2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 3, 0x08);\
		}\
	} while(0)
#else
	#define UL1D_TRC_ETX_ETFC_SUSPEND_BEGIN(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UL1D_TRC_ETX_ETFC_SUSPEND_END(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 3, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x68A2,0x68A2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 3, 0x08);\
		}\
	} while(0)
#else
	#define UL1D_TRC_ETX_ETFC_SUSPEND_END(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_ETX_PACK_HARQ_INFO(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 3, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x69A2,0x69A2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 3, 0x04);\
		}\
	} while(0)
#else
	#define UL1D_TRC_ETX_PACK_HARQ_INFO(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_ETX_PACK_ULDCH(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 3, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x6AA2,0x6AA2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 3, 0x04);\
		}\
	} while(0)
#else
	#define UL1D_TRC_ETX_PACK_ULDCH(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_ETX_PACK_HS_EUL(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 3, 0x04);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x6BA2,0x6BA2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 3, 0x04);\
		}\
	} while(0)
#else
	#define UL1D_TRC_ETX_PACK_HS_EUL(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_ETX_PACK_EUL_COMM(v1, v2, v3, v4, v5, v6) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 3, 0x02);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x6CA2,0x6CA2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 3, 0x02);\
		}\
	} while(0)
#else
	#define UL1D_TRC_ETX_PACK_EUL_COMM(v1, v2, v3, v4, v5, v6)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_ETX_MAC_DTX(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 3, 0x04);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x6DA2,0x6DA2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 3, 0x04);\
		}\
	} while(0)
#else
	#define UL1D_TRC_ETX_MAC_DTX(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_ETX_TICK_PRE(v1, v2, v3, v4, v5, v6, v7, v8, v9) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 3, 0x02);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x6EA2,0x6EA2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v7,v7);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v8,v8);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v9,v9);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 3, 0x02);\
		}\
	} while(0)
#else
	#define UL1D_TRC_ETX_TICK_PRE(v1, v2, v3, v4, v5, v6, v7, v8, v9)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_ETX_TICK_POST(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 3, 0x02);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x6FA2,0x6FA2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v7,v7);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v8,v8);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v9,v9);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v10,v10);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v11,v11);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 3, 0x02);\
		}\
	} while(0)
#else
	#define UL1D_TRC_ETX_TICK_POST(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_PRE_START_INFO(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 3, 0x01);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x70A2,0x70A2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 3, 0x01);\
		}\
	} while(0)
#else
	#define UL1D_TRC_PRE_START_INFO(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_RF_RX_CAL_SETTING(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 3, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x71A2,0x71A2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 3, 0x01);\
		}\
	} while(0)
#else
	#define UL1D_TRC_RF_RX_CAL_SETTING(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_RF_TX_CAL_SETTING(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 3, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x72A2,0x72A2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_HSPA_PRI_Trace_Filter, 3, 0x01);\
		}\
	} while(0)
#else
	#define UL1D_TRC_RF_TX_CAL_SETTING(v1, v2)
#endif



/*******************************/
/* declaration of filter array */
/*******************************/
EXTERN_TMD_FILTER(unsigned char, UL1D_HSPA_PRI_Trace_Filter, 5);
/*************************/
/* Function declarations */
/*************************/
#ifdef L1_CATCHER

void Set_UL1D_HSPA_PRI_Filter(unsigned char *setting);

#endif

/************************************/
/* Filter checking API declarations */
/************************************/

#define ChkL1ModFltr_UL1D_HSPA_PRI()	(FILTER_CHECK(UL1D_HSPA_PRI_Trace_Filter, 0, 1))
#define ChkL1ClsFltr_UL1D_HSPA_PRI_HSSM_L()	(ChkL1ModFltr_UL1D_HSPA_PRI()&&(FILTER_CHECK(UL1D_HSPA_PRI_Trace_Filter, 1, 0x01)))
#define ChkL1ClsFltr_UL1D_HSPA_PRI_HSSM_M()	(ChkL1ModFltr_UL1D_HSPA_PRI()&&(FILTER_CHECK(UL1D_HSPA_PRI_Trace_Filter, 1, 0x02)))
#define ChkL1ClsFltr_UL1D_HSPA_PRI_HSSM_H()	(ChkL1ModFltr_UL1D_HSPA_PRI()&&(FILTER_CHECK(UL1D_HSPA_PRI_Trace_Filter, 1, 0x04)))
#define ChkL1ClsFltr_UL1D_HSPA_PRI_HRFM_L()	(ChkL1ModFltr_UL1D_HSPA_PRI()&&(FILTER_CHECK(UL1D_HSPA_PRI_Trace_Filter, 1, 0x08)))
#define ChkL1ClsFltr_UL1D_HSPA_PRI_HRFM_M()	(ChkL1ModFltr_UL1D_HSPA_PRI()&&(FILTER_CHECK(UL1D_HSPA_PRI_Trace_Filter, 1, 0x10)))
#define ChkL1ClsFltr_UL1D_HSPA_PRI_HSCE_L()	(ChkL1ModFltr_UL1D_HSPA_PRI()&&(FILTER_CHECK(UL1D_HSPA_PRI_Trace_Filter, 1, 0x20)))
#define ChkL1ClsFltr_UL1D_HSPA_PRI_HSCE_M()	(ChkL1ModFltr_UL1D_HSPA_PRI()&&(FILTER_CHECK(UL1D_HSPA_PRI_Trace_Filter, 1, 0x40)))
#define ChkL1ClsFltr_UL1D_HSPA_PRI_HSCE_H()	(ChkL1ModFltr_UL1D_HSPA_PRI()&&(FILTER_CHECK(UL1D_HSPA_PRI_Trace_Filter, 1, 0x80)))
#define ChkL1ClsFltr_UL1D_HSPA_PRI_CQI_M()	(ChkL1ModFltr_UL1D_HSPA_PRI()&&(FILTER_CHECK(UL1D_HSPA_PRI_Trace_Filter, 2, 0x01)))
#define ChkL1ClsFltr_UL1D_HSPA_PRI_CQI_L()	(ChkL1ModFltr_UL1D_HSPA_PRI()&&(FILTER_CHECK(UL1D_HSPA_PRI_Trace_Filter, 2, 0x02)))
#define ChkL1ClsFltr_UL1D_HSPA_PRI_HSRP_M()	(ChkL1ModFltr_UL1D_HSPA_PRI()&&(FILTER_CHECK(UL1D_HSPA_PRI_Trace_Filter, 2, 0x04)))
#define ChkL1ClsFltr_UL1D_HSPA_PRI_HSRP_L()	(ChkL1ModFltr_UL1D_HSPA_PRI()&&(FILTER_CHECK(UL1D_HSPA_PRI_Trace_Filter, 2, 0x08)))
#define ChkL1ClsFltr_UL1D_HSPA_PRI_HRXBRP_L()	(ChkL1ModFltr_UL1D_HSPA_PRI()&&(FILTER_CHECK(UL1D_HSPA_PRI_Trace_Filter, 2, 0x10)))
#define ChkL1ClsFltr_UL1D_HSPA_PRI_EDCHSM_H()	(ChkL1ModFltr_UL1D_HSPA_PRI()&&(FILTER_CHECK(UL1D_HSPA_PRI_Trace_Filter, 2, 0x20)))
#define ChkL1ClsFltr_UL1D_HSPA_PRI_EDCHSM_M()	(ChkL1ModFltr_UL1D_HSPA_PRI()&&(FILTER_CHECK(UL1D_HSPA_PRI_Trace_Filter, 2, 0x40)))
#define ChkL1ClsFltr_UL1D_HSPA_PRI_EDCHSM_L()	(ChkL1ModFltr_UL1D_HSPA_PRI()&&(FILTER_CHECK(UL1D_HSPA_PRI_Trace_Filter, 2, 0x80)))
#define ChkL1ClsFltr_UL1D_HSPA_PRI_PRESTR_H()	(ChkL1ModFltr_UL1D_HSPA_PRI()&&(FILTER_CHECK(UL1D_HSPA_PRI_Trace_Filter, 3, 0x01)))
#define ChkL1ClsFltr_UL1D_HSPA_PRI_ETX_H()	(ChkL1ModFltr_UL1D_HSPA_PRI()&&(FILTER_CHECK(UL1D_HSPA_PRI_Trace_Filter, 3, 0x02)))
#define ChkL1ClsFltr_UL1D_HSPA_PRI_ETX_M()	(ChkL1ModFltr_UL1D_HSPA_PRI()&&(FILTER_CHECK(UL1D_HSPA_PRI_Trace_Filter, 3, 0x04)))
#define ChkL1ClsFltr_UL1D_HSPA_PRI_ETX_L()	(ChkL1ModFltr_UL1D_HSPA_PRI()&&(FILTER_CHECK(UL1D_HSPA_PRI_Trace_Filter, 3, 0x08)))
#define ChkL1MsgFltr_UL1D_TRC_HS_SCCH_DBG()	ChkL1ClsFltr_UL1D_HSPA_PRI_HSSM_L()
#define ChkL1MsgFltr_UL1D_TRC_HS_DSCH_STATE()	ChkL1ClsFltr_UL1D_HSPA_PRI_HSSM_H()
#define ChkL1MsgFltr_UL1D_TRC_HS_SCCH_RESULT()	ChkL1ClsFltr_UL1D_HSPA_PRI_HSSM_H()
#define ChkL1MsgFltr_UL1D_TRC_HS_SCCH_INFO()	ChkL1ClsFltr_UL1D_HSPA_PRI_HSSM_H()
#define ChkL1MsgFltr_UL1D_TRC_HS_SCCH_INFO1()	ChkL1ClsFltr_UL1D_HSPA_PRI_HSSM_H()
#define ChkL1MsgFltr_UL1D_TRC_HS_SCCH_LESS_INFO()	ChkL1ClsFltr_UL1D_HSPA_PRI_HSSM_H()
#define ChkL1MsgFltr_UL1D_TRC_HS_SCCH_P1_MAX_CORR()	ChkL1ClsFltr_UL1D_HSPA_PRI_HSSM_L()
#define ChkL1MsgFltr_UL1D_TRC_HS_SCCH_P1_SYM_ACC()	ChkL1ClsFltr_UL1D_HSPA_PRI_HSSM_L()
#define ChkL1MsgFltr_UL1D_TRC_HS_STUCK_DBG()	ChkL1ClsFltr_UL1D_HSPA_PRI_HSSM_H()
#define ChkL1MsgFltr_UL1D_TRC_HS_STUCK_SKIP()	ChkL1ClsFltr_UL1D_HSPA_PRI_HSSM_H()
#define ChkL1MsgFltr_UL1D_TRC_HS_STUCK_PLMN_INFO()	ChkL1ClsFltr_UL1D_HSPA_PRI_HSSM_H()
#define ChkL1MsgFltr_UL1D_TRC_HS_STUCK_PATCH_ENABLE_CHECK()	ChkL1ClsFltr_UL1D_HSPA_PRI_HSSM_H()
#define ChkL1MsgFltr_UL1D_TRC_HS_STUCK_NVRAM_VALUE()	ChkL1ClsFltr_UL1D_HSPA_PRI_HSSM_H()
#define ChkL1MsgFltr_UL1D_TRC_HS_STUCK_PATCH_AT_CTRL()	ChkL1ClsFltr_UL1D_HSPA_PRI_HSSM_H()
#define ChkL1MsgFltr_UL1D_TRC_HS_STUCK_BOOT_CHECK()	ChkL1ClsFltr_UL1D_HSPA_PRI_HSSM_H()
#define ChkL1MsgFltr_UL1D_TRC_HS_TMO_PATCH_ENABLE_CHECK()	ChkL1ClsFltr_UL1D_HSPA_PRI_HSSM_H()
#define ChkL1MsgFltr_UL1D_TRC_HS_HARQ_ACK_NACK_CHECK()	ChkL1ClsFltr_UL1D_HSPA_PRI_HSSM_H()
#define ChkL1MsgFltr_UL1D_TRC_HS_GCF_CQI_TEST_CHECK()	ChkL1ClsFltr_UL1D_HSPA_PRI_HSSM_H()
#define ChkL1MsgFltr_UL1D_TRC_HS_DSCH_RESULT()	ChkL1ClsFltr_UL1D_HSPA_PRI_HSSM_H()
#define ChkL1MsgFltr_UL1D_TRC_HS_DSCH_LMBT_RESULT()	ChkL1ClsFltr_UL1D_HSPA_PRI_HSSM_H()
#define ChkL1MsgFltr_UL1D_TRC_HS_DSCH_INT()	ChkL1ClsFltr_UL1D_HSPA_PRI_HSSM_H()
#define ChkL1MsgFltr_UL1D_TRC_HS_DSCH_INT_DBG()	ChkL1ClsFltr_UL1D_HSPA_PRI_HSSM_H()
#define ChkL1MsgFltr_UL1D_TRC_HS_DSCH_SLT_LISR_DBG()	ChkL1ClsFltr_UL1D_HSPA_PRI_HSSM_H()
#define ChkL1MsgFltr_UL1D_TRC_HS_DSCH_SLT_LISR()	ChkL1ClsFltr_UL1D_HSPA_PRI_HSSM_H()
#define ChkL1MsgFltr_UL1D_TRC_HS_DSCH_DBG()	ChkL1ClsFltr_UL1D_HSPA_PRI_HSSM_H()
#define ChkL1MsgFltr_UL1D_TRC_HS_DSCH_CH_STATUS()	ChkL1ClsFltr_UL1D_HSPA_PRI_HSSM_H()
#define ChkL1MsgFltr_UL1D_TRC_HSDSCH_HARQ_OFF_DBG()	ChkL1ClsFltr_UL1D_HSPA_PRI_HSSM_H()
#define ChkL1MsgFltr_UL1D_TRC_HS_DSCH_DC_LESS()	ChkL1ClsFltr_UL1D_HSPA_PRI_HSSM_M()
#define ChkL1MsgFltr_UL1D_TRC_HS_DSCH_TPUT()	ChkL1ClsFltr_UL1D_HSPA_PRI_HSSM_L()
#define ChkL1MsgFltr_UL1D_TRC_HS_DSCH_TB_SIZE()	ChkL1ClsFltr_UL1D_HSPA_PRI_HSSM_L()
#define ChkL1MsgFltr_UL1D_TRC_HS_DSCH_LCE_RPT()	ChkL1ClsFltr_UL1D_HSPA_PRI_HSSM_L()
#define ChkL1MsgFltr_UL1D_TRC_HSCQI_CTRL()	ChkL1ClsFltr_UL1D_HSPA_PRI_HSSM_L()
#define ChkL1MsgFltr_UL1D_TRC_HSRP_DBG()	ChkL1ClsFltr_UL1D_HSPA_PRI_HSSM_L()
#define ChkL1MsgFltr_UL1D_TRC_HS_TXCRP_STSP()	ChkL1ClsFltr_UL1D_HSPA_PRI_HSSM_M()
#define ChkL1MsgFltr_UL1D_TRC_HS_TXCRP_HARQ_CONFIG()	ChkL1ClsFltr_UL1D_HSPA_PRI_HSSM_M()
#define ChkL1MsgFltr_UL1D_TRC_HS_TXCRP_CQI_CONFIG()	ChkL1ClsFltr_UL1D_HSPA_PRI_HSSM_M()
#define ChkL1MsgFltr_UL1D_TRC_HS_TXCRP_IN_LOG()	ChkL1ClsFltr_UL1D_HSPA_PRI_HSSM_M()
#define ChkL1MsgFltr_UL1D_TRC_HS_TXCRP_UPDATE_TIME()	ChkL1ClsFltr_UL1D_HSPA_PRI_HSSM_L()
#define ChkL1MsgFltr_UL1D_TRC_HS_TXCRP_OUT_LOG()	ChkL1ClsFltr_UL1D_HSPA_PRI_HSSM_H()
#define ChkL1MsgFltr_UL1D_TRC_HS_DPCCH_FB_SYMBOL_IN_SLOT()	ChkL1ClsFltr_UL1D_HSPA_PRI_HSSM_H()
#define ChkL1MsgFltr_UL1D_TRC_HS_DSCH_HANDLE_SETUP()	ChkL1ClsFltr_UL1D_HSPA_PRI_HSSM_M()
#define ChkL1MsgFltr_UL1D_TRC_HSCE_CH1_INFO()	ChkL1ClsFltr_UL1D_HSPA_PRI_HSCE_H()
#define ChkL1MsgFltr_UL1D_TRC_HSCE_EQ_INFO()	ChkL1ClsFltr_UL1D_HSPA_PRI_HSCE_H()
#define ChkL1MsgFltr_UL1D_TRC_HSCE_EQ_RESET()	ChkL1ClsFltr_UL1D_HSPA_PRI_HSCE_M()
#define ChkL1MsgFltr_UL1D_TRC_HSCE_CHx_INFO()	ChkL1ClsFltr_UL1D_HSPA_PRI_HSCE_H()
#define ChkL1MsgFltr_UL1D_TRC_HSCE_FFT_INFO()	ChkL1ClsFltr_UL1D_HSPA_PRI_HSCE_L()
#define ChkL1MsgFltr_UL1D_TRC_HSCE_IOEST_WC_SET()	ChkL1ClsFltr_UL1D_HSPA_PRI_HSCE_M()
#define ChkL1MsgFltr_UL1D_TRC_HSCE_REG_DBG()	ChkL1ClsFltr_UL1D_HSPA_PRI_HSCE_M()
#define ChkL1MsgFltr_UL1D_TRC_HSCE_RST()	ChkL1ClsFltr_UL1D_HSPA_PRI_HSCE_M()
#define ChkL1MsgFltr_UL1D_TRC_HSCE_UPDATE_CELLS()	ChkL1ClsFltr_UL1D_HSPA_PRI_HSCE_L()
#define ChkL1MsgFltr_UL1D_TRC_HSCE_RFEQ_INFO()	ChkL1ClsFltr_UL1D_HSPA_PRI_HSCE_H()
#define ChkL1MsgFltr_UL1D_TRC_SRV_OTR_INFO()	ChkL1ClsFltr_UL1D_HSPA_PRI_HSCE_H()
#define ChkL1MsgFltr_UL1D_TRC_HSCE_DBG_PWR()	ChkL1ClsFltr_UL1D_HSPA_PRI_HSCE_M()
#define ChkL1MsgFltr_UL1D_TRC_OCIC_DBG()	ChkL1ClsFltr_UL1D_HSPA_PRI_HSCE_M()
#define ChkL1MsgFltr_UL1D_TRC_HRFM_REF_GSR_ADDR_TOGGLED()	ChkL1ClsFltr_UL1D_HSPA_PRI_HRFM_M()
#define ChkL1MsgFltr_UL1D_TRC_HRFM_REF_GSR_ADDR()	ChkL1ClsFltr_UL1D_HSPA_PRI_HRFM_M()
#define ChkL1MsgFltr_UL1D_TRC_HRFM_MPATH_LIST()	ChkL1ClsFltr_UL1D_HSPA_PRI_HRFM_M()
#define ChkL1MsgFltr_UL1D_TRC_HRFM_VALID_FNG_LIST()	ChkL1ClsFltr_UL1D_HSPA_PRI_HRFM_L()
#define ChkL1MsgFltr_UL1D_TRC_HRFM_DISCARD_FNG_LIST()	ChkL1ClsFltr_UL1D_HSPA_PRI_HRFM_M()
#define ChkL1MsgFltr_UL1D_TRC_HRFM_SHORT_DETECT()	ChkL1ClsFltr_UL1D_HSPA_PRI_HRFM_L()
#define ChkL1MsgFltr_UL1D_TRC_HRFM_PROP_WINDOW()	ChkL1ClsFltr_UL1D_HSPA_PRI_HRFM_M()
#define ChkL1MsgFltr_UL1D_TRC_HRFM_CENTER_INIT()	ChkL1ClsFltr_UL1D_HSPA_PRI_HRFM_L()
#define ChkL1MsgFltr_UL1D_TRC_HRFM_ACCUMULATE()	ChkL1ClsFltr_UL1D_HSPA_PRI_HRFM_L()
#define ChkL1MsgFltr_UL1D_TRC_HRFM_SWAP_WINDOW()	ChkL1ClsFltr_UL1D_HSPA_PRI_HRFM_L()
#define ChkL1MsgFltr_UL1D_TRC_HRFM_MINOR_WIN()	ChkL1ClsFltr_UL1D_HSPA_PRI_HRFM_L()
#define ChkL1MsgFltr_UL1D_TRC_HRFM_OTR_INFO()	ChkL1ClsFltr_UL1D_HSPA_PRI_HRFM_M()
#define ChkL1MsgFltr_UL1D_TRC_CQI_DBG1()	ChkL1ClsFltr_UL1D_HSPA_PRI_CQI_L()
#define ChkL1MsgFltr_UL1D_TRC_CQI_INPUT()	ChkL1ClsFltr_UL1D_HSPA_PRI_CQI_L()
#define ChkL1MsgFltr_UL1D_TRC_CQI_ADJUST()	ChkL1ClsFltr_UL1D_HSPA_PRI_CQI_M()
#define ChkL1MsgFltr_UL1D_TRC_CQI_TX_SIR()	ChkL1ClsFltr_UL1D_HSPA_PRI_CQI_M()
#define ChkL1MsgFltr_UL1D_TRC_CQI_DELTA_SIR_CQI()	ChkL1ClsFltr_UL1D_HSPA_PRI_CQI_M()
#define ChkL1MsgFltr_UL1D_TRC_CQI_DEBUG_INFO()	ChkL1ClsFltr_UL1D_HSPA_PRI_CQI_M()
#define ChkL1MsgFltr_UL1D_TRC_CQI_DEBUG_INFO_32()	ChkL1ClsFltr_UL1D_HSPA_PRI_CQI_M()
#define ChkL1MsgFltr_UL1D_TRC_CQI_XLAYER_ALGO_RLC_INFO()	ChkL1ClsFltr_UL1D_HSPA_PRI_CQI_L()
#define ChkL1MsgFltr_UL1D_TRC_CQI_XLAYER_TXMAPPING_SEL()	ChkL1ClsFltr_UL1D_HSPA_PRI_CQI_L()
#define ChkL1MsgFltr_UL1D_TRC_CQI_XLAYER_SWITCH_CTRL()	ChkL1ClsFltr_UL1D_HSPA_PRI_CQI_L()
#define ChkL1MsgFltr_UL1D_TRC_CQI_PULL_IN()	ChkL1ClsFltr_UL1D_HSPA_PRI_CQI_M()
#define ChkL1MsgFltr_UL1D_TRC_CQI_BIAS_MODE()	ChkL1ClsFltr_UL1D_HSPA_PRI_CQI_L()
#define ChkL1MsgFltr_UL1D_TRC_CQI_SIR_NW()	ChkL1ClsFltr_UL1D_HSPA_PRI_CQI_L()
#define ChkL1MsgFltr_UL1D_TRC_HSRP_DBG_LOG()	ChkL1ClsFltr_UL1D_HSPA_PRI_HSRP_M()
#define ChkL1MsgFltr_UL1D_TRC_HSRP_FCC_DBG_LOG()	ChkL1ClsFltr_UL1D_HSPA_PRI_HSRP_L()
#define ChkL1MsgFltr_UL1D_TRC_HSRP_DSCH_SIR_LOG()	ChkL1ClsFltr_UL1D_HSPA_PRI_HSRP_M()
#define ChkL1MsgFltr_UL1D_TRC_HRXBRP_DBG0()	ChkL1ClsFltr_UL1D_HSPA_PRI_HRXBRP_L()
#define ChkL1MsgFltr_UL1D_TRC_HRXBRP_DBG1()	ChkL1ClsFltr_UL1D_HSPA_PRI_HRXBRP_L()
#define ChkL1MsgFltr_UL1D_TRC_HRXBRP_DBG2()	ChkL1ClsFltr_UL1D_HSPA_PRI_HRXBRP_L()
#define ChkL1MsgFltr_UL1D_TRC_HRXBRP_DBG3()	ChkL1ClsFltr_UL1D_HSPA_PRI_HRXBRP_L()
#define ChkL1MsgFltr_UL1D_TRC_HRXBRP_DBG4()	ChkL1ClsFltr_UL1D_HSPA_PRI_HRXBRP_L()
#define ChkL1MsgFltr_UL1D_TRC_HRXBRP_S_VALUE()	ChkL1ClsFltr_UL1D_HSPA_PRI_HRXBRP_L()
#define ChkL1MsgFltr_UL1D_TRC_EDCH_STATE()	ChkL1ClsFltr_UL1D_HSPA_PRI_EDCHSM_H()
#define ChkL1MsgFltr_UL1D_TRC_EDCH_INFO_IND()	ChkL1ClsFltr_UL1D_HSPA_PRI_EDCHSM_M()
#define ChkL1MsgFltr_UL1D_TRC_EDCH_MAC_EVENT()	ChkL1ClsFltr_UL1D_HSPA_PRI_EDCHSM_H()
#define ChkL1MsgFltr_UL1D_TRC_EDCH_RECONFIG()	ChkL1ClsFltr_UL1D_HSPA_PRI_EDCHSM_H()
#define ChkL1MsgFltr_UL1D_TRC_EDCH_EDPDCH_CONFIG()	ChkL1ClsFltr_UL1D_HSPA_PRI_EDCHSM_H()
#define ChkL1MsgFltr_UL1D_TRC_EDCH_HI_CONFIG()	ChkL1ClsFltr_UL1D_HSPA_PRI_EDCHSM_H()
#define ChkL1MsgFltr_UL1D_TRC_EDCH_RG_CONFIG()	ChkL1ClsFltr_UL1D_HSPA_PRI_EDCHSM_H()
#define ChkL1MsgFltr_UL1D_TRC_EDCH_STS_INFO()	ChkL1ClsFltr_UL1D_HSPA_PRI_EDCHSM_M()
#define ChkL1MsgFltr_UL1D_TRC_EDCH_FB_OFFSET()	ChkL1ClsFltr_UL1D_HSPA_PRI_EDCHSM_H()
#define ChkL1MsgFltr_UL1D_TRC_EDCH_ASSERT_INFO()	ChkL1ClsFltr_UL1D_HSPA_PRI_EDCHSM_H()
#define ChkL1MsgFltr_UL1D_TRC_EDCH_GAP_BITMAP()	ChkL1ClsFltr_UL1D_HSPA_PRI_EDCHSM_M()
#define ChkL1MsgFltr_UL1D_TRC_ETX_FORECAST_HANDLER()	ChkL1ClsFltr_UL1D_HSPA_PRI_ETX_M()
#define ChkL1MsgFltr_UL1D_TRC_ETX_ETFC_SELECT_BEGIN()	ChkL1ClsFltr_UL1D_HSPA_PRI_ETX_L()
#define ChkL1MsgFltr_UL1D_TRC_ETX_ETFC_SELECT_WRAPUP()	ChkL1ClsFltr_UL1D_HSPA_PRI_ETX_M()
#define ChkL1MsgFltr_UL1D_TRC_ETX_ETFC_SELECT_END()	ChkL1ClsFltr_UL1D_HSPA_PRI_ETX_L()
#define ChkL1MsgFltr_UL1D_TRC_ETX_ETFC_SUSPEND_BEGIN()	ChkL1ClsFltr_UL1D_HSPA_PRI_ETX_L()
#define ChkL1MsgFltr_UL1D_TRC_ETX_ETFC_SUSPEND_END()	ChkL1ClsFltr_UL1D_HSPA_PRI_ETX_L()
#define ChkL1MsgFltr_UL1D_TRC_ETX_PACK_HARQ_INFO()	ChkL1ClsFltr_UL1D_HSPA_PRI_ETX_M()
#define ChkL1MsgFltr_UL1D_TRC_ETX_PACK_ULDCH()	ChkL1ClsFltr_UL1D_HSPA_PRI_ETX_M()
#define ChkL1MsgFltr_UL1D_TRC_ETX_PACK_HS_EUL()	ChkL1ClsFltr_UL1D_HSPA_PRI_ETX_M()
#define ChkL1MsgFltr_UL1D_TRC_ETX_PACK_EUL_COMM()	ChkL1ClsFltr_UL1D_HSPA_PRI_ETX_H()
#define ChkL1MsgFltr_UL1D_TRC_ETX_MAC_DTX()	ChkL1ClsFltr_UL1D_HSPA_PRI_ETX_M()
#define ChkL1MsgFltr_UL1D_TRC_ETX_TICK_PRE()	ChkL1ClsFltr_UL1D_HSPA_PRI_ETX_H()
#define ChkL1MsgFltr_UL1D_TRC_ETX_TICK_POST()	ChkL1ClsFltr_UL1D_HSPA_PRI_ETX_H()
#define ChkL1MsgFltr_UL1D_TRC_PRE_START_INFO()	ChkL1ClsFltr_UL1D_HSPA_PRI_PRESTR_H()
#define ChkL1MsgFltr_UL1D_TRC_RF_RX_CAL_SETTING()	ChkL1ClsFltr_UL1D_HSPA_PRI_PRESTR_H()
#define ChkL1MsgFltr_UL1D_TRC_RF_TX_CAL_SETTING()	ChkL1ClsFltr_UL1D_HSPA_PRI_PRESTR_H()


#endif
