#ifndef L1TRC_EMAC_2_DEF_H
#define L1TRC_EMAC_2_DEF_H

/******************************/
/* String category definition */
/******************************/


/****************************/
/* Message macro definition */
/****************************/
#include "L1Trc.h"
#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMBMS_LOG_RESET_SYNC_AREA_INIT(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v3,v3);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x0012,0x0012);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_32_LAST_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EMBMS_LOG_RESET_SYNC_AREA_INIT(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMBMS_LOG_DELETE_ACTIVE_AREA(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v4,v4);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x0112,0x0112);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_32_LAST_WRAPPER_L2(cgen_local_v4,v4);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EMBMS_LOG_DELETE_ACTIVE_AREA(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMBMS_LOG_MCCH_CONFIG_INIT(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v4,v4);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x0212,0x0212);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_32_LAST_WRAPPER_L2(cgen_local_v4,v4);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EMBMS_LOG_MCCH_CONFIG_INIT(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMBMS_LOG_EXIST_MCCH(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v4,v4);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x0312,0x0312);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_32_LAST_WRAPPER_L2(cgen_local_v4,v4);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EMBMS_LOG_EXIST_MCCH(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMBMS_LOG_NEW_CFG_MCCH(v1, v2, v3, v4, v5, v6, v7) do {\
		{\
			TRC_START_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v5,v5);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v6,v6);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v7,v7);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v5,v5);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v6,v6);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v7,v7);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x0412,0x0412);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v4,v4);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v5,v5);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v6,v6);\
			TRC_OUTPUT_8_LAST_WRAPPER_L2(cgen_local_v7,v7);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EMBMS_LOG_NEW_CFG_MCCH(v1, v2, v3, v4, v5, v6, v7)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMBMS_LOG_ADD_MCCH(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v4,v4);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x0512,0x0512);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_32_LAST_WRAPPER_L2(cgen_local_v4,v4);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EMBMS_LOG_ADD_MCCH(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMBMS_LOG_UPDATE_MCCH(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x0612,0x0612);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EMBMS_LOG_UPDATE_MCCH(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMBMS_LOG_DELETE_MCCH(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x0712,0x0712);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EMBMS_LOG_DELETE_MCCH(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMBMS_LOG_MCCH_CFG_IDX(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x0812,0x0812);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EMBMS_LOG_MCCH_CFG_IDX(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMBMS_LOG_PMCH_CONFIG_INIT(v1, v2, v3, v4, v5, v6) do {\
		{\
			TRC_START_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v5,v5);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v6,v6);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v5,v5);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v6,v6);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x0912,0x0912);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v4,v4);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v5,v5);\
			TRC_OUTPUT_32_LAST_WRAPPER_L2(cgen_local_v6,v6);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EMBMS_LOG_PMCH_CONFIG_INIT(v1, v2, v3, v4, v5, v6)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMBMS_LOG_PMCH_AREA_ID(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x0A12,0x0A12);\
			TRC_OUTPUT_32_LAST_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EMBMS_LOG_PMCH_AREA_ID(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMBMS_LOG_PMCH_RESET(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x0B12,0x0B12);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EMBMS_LOG_PMCH_RESET(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMBMS_LOG_ADD_PMCH(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x0C12,0x0C12);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EMBMS_LOG_ADD_PMCH(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMBMS_LOG_PMCH_SF_LIST(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x0D12,0x0D12);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EMBMS_LOG_PMCH_SF_LIST(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMBMS_LOG_PMCH_CFG_ERR_ALLOC_END(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v3,v3);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x0E12,0x0E12);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_32_LAST_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EMBMS_LOG_PMCH_CFG_ERR_ALLOC_END(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMBMS_LOG_UPDATE_MSI_INIT(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v5,v5);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v5,v5);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x0F12,0x0F12);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v4,v4);\
			TRC_OUTPUT_16_LAST_WRAPPER_L2(cgen_local_v5,v5);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EMBMS_LOG_UPDATE_MSI_INIT(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMBMS_LOG_INVAILD_AREA_INFO_ID() do {\
		{\
			TRC_START_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x01);\
			TRC_START_FILL_L2();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L2(0x1012,0x1012);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EMBMS_LOG_INVAILD_AREA_INFO_ID()
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMBMS_LOG_RECEPTION_MODE_INIT(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v3,v3);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x1112,0x1112);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_32_LAST_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EMBMS_LOG_RECEPTION_MODE_INIT(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMBMS_LOG_CFG_RECEPTION_MODE(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v3,v3);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x1212,0x1212);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_32_LAST_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EMBMS_LOG_CFG_RECEPTION_MODE(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMBMS_LOG_QUERY_IDX(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x1312,0x1312);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EMBMS_LOG_QUERY_IDX(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMBMS_LOG_UPDATE_SCHED_INIT(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v5,v5);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v5,v5);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x1412,0x1412);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v4,v4);\
			TRC_OUTPUT_32_LAST_WRAPPER_L2(cgen_local_v5,v5);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EMBMS_LOG_UPDATE_SCHED_INIT(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMBMS_LOG_SCHED_NO_VALID_RESULT(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x1512,0x1512);\
			TRC_OUTPUT_16_LAST_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EMBMS_LOG_SCHED_NO_VALID_RESULT(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMBMS_LOG_UPDATE_SCHED_RESULT(v1, v2, v3, v4, v5, v6, v7) do {\
		{\
			TRC_START_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v5,v5);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v6,v6);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v7,v7);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v5,v5);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v6,v6);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v7,v7);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x1612,0x1612);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v4,v4);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v5,v5);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v6,v6);\
			TRC_OUTPUT_32_LAST_WRAPPER_L2(cgen_local_v7,v7);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EMBMS_LOG_UPDATE_SCHED_RESULT(v1, v2, v3, v4, v5, v6, v7)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMBMS_LOG_UPDATE_SCHED_RESULT_GEMINI(v1, v2, v3, v4, v5, v6, v7, v8) do {\
		{\
			TRC_START_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v5,v5);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v6,v6);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v7,v7);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v8,v8);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v5,v5);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v6,v6);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v7,v7);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v8,v8);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x1712,0x1712);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v4,v4);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v5,v5);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v6,v6);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v7,v7);\
			TRC_OUTPUT_8_LAST_WRAPPER_L2(cgen_local_v8,v8);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EMBMS_LOG_UPDATE_SCHED_RESULT_GEMINI(v1, v2, v3, v4, v5, v6, v7, v8)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMBMS_LOG_MCCH_UPDATE_SCHED(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v5,v5);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v5,v5);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x1812,0x1812);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v4,v4);\
			TRC_OUTPUT_32_LAST_WRAPPER_L2(cgen_local_v5,v5);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EMBMS_LOG_MCCH_UPDATE_SCHED(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMBMS_LOG_MCCH_SCHED_RESULT(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v4,v4);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x1912,0x1912);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_32_LAST_WRAPPER_L2(cgen_local_v4,v4);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EMBMS_LOG_MCCH_SCHED_RESULT(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMBMS_LOG_MCCH_SCHED_NEXT(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v4,v4);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x1A12,0x1A12);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_32_LAST_WRAPPER_L2(cgen_local_v4,v4);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EMBMS_LOG_MCCH_SCHED_NEXT(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMBMS_LOG_MCCH_NO_VAILD_NEXT() do {\
		{\
			TRC_START_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x01);\
			TRC_START_FILL_L2();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L2(0x1B12,0x1B12);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EMBMS_LOG_MCCH_NO_VAILD_NEXT()
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMBMS_LOG_RPID_MPID(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v3,v3);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x1C12,0x1C12);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_32_LAST_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EMBMS_LOG_RPID_MPID(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMBMS_LOG_FORCE_RECV_MCCH(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v3,v3);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x1D12,0x1D12);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_32_LAST_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EMBMS_LOG_FORCE_RECV_MCCH(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMBMS_LOG_PMCH_UPDATE_SCHED(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v5,v5);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v5,v5);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x1E12,0x1E12);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v4,v4);\
			TRC_OUTPUT_32_LAST_WRAPPER_L2(cgen_local_v5,v5);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EMBMS_LOG_PMCH_UPDATE_SCHED(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMBMS_LOG_PMCH_SCHED_RESULT(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v5,v5);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v5,v5);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x1F12,0x1F12);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v4,v4);\
			TRC_OUTPUT_32_LAST_WRAPPER_L2(cgen_local_v5,v5);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EMBMS_LOG_PMCH_SCHED_RESULT(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMBMS_LOG_MSI_HANDLE_CSA_IDX(v1, v2, v3, v4, v5, v6, v7) do {\
		{\
			TRC_START_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v5,v5);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v6,v6);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v7,v7);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v5,v5);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v6,v6);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v7,v7);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x2012,0x2012);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v4,v4);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v5,v5);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v6,v6);\
			TRC_OUTPUT_16_LAST_WRAPPER_L2(cgen_local_v7,v7);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EMBMS_LOG_MSI_HANDLE_CSA_IDX(v1, v2, v3, v4, v5, v6, v7)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMBMS_LOG_PMCH_SCHED_NEXT(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v3,v3);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x2112,0x2112);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_LAST_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EMBMS_LOG_PMCH_SCHED_NEXT(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMBMS_LOG_SCHED_NEXT_INIT(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x2212,0x2212);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EMBMS_LOG_SCHED_NEXT_INIT(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMBMS_LOG_REDUNDANT_SCHED_NEXT(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x2312,0x2312);\
			TRC_OUTPUT_32_LAST_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EMBMS_LOG_REDUNDANT_SCHED_NEXT(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMBMS_LOG_SCHED_NEXT_RESULT(v1, v2, v3, v4, v5, v6, v7) do {\
		{\
			TRC_START_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v5,v5);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v6,v6);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v7,v7);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v5,v5);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v6,v6);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v7,v7);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x2412,0x2412);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v4,v4);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v5,v5);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v6,v6);\
			TRC_OUTPUT_32_LAST_WRAPPER_L2(cgen_local_v7,v7);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EMBMS_LOG_SCHED_NEXT_RESULT(v1, v2, v3, v4, v5, v6, v7)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMBMS_LOG_SCHED_NEXT_RESULT_2(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v3,v3);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x2512,0x2512);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_8_LAST_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EMBMS_LOG_SCHED_NEXT_RESULT_2(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMBMS_LOG_SCHED_NEXT_RESULT_GEMINI(v1, v2, v3, v4, v5, v6, v7, v8) do {\
		{\
			TRC_START_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v5,v5);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v6,v6);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v7,v7);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v8,v8);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v5,v5);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v6,v6);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v7,v7);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v8,v8);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x2612,0x2612);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v4,v4);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v5,v5);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v6,v6);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v7,v7);\
			TRC_OUTPUT_8_LAST_WRAPPER_L2(cgen_local_v8,v8);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EMBMS_LOG_SCHED_NEXT_RESULT_GEMINI(v1, v2, v3, v4, v5, v6, v7, v8)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMBMS_LOG_NUM_MTCH_RESOURCE(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v3,v3);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x2712,0x2712);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_8_LAST_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EMBMS_LOG_NUM_MTCH_RESOURCE(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMBMS_LOG_SIB2_MBSFN_CFG_UPDATE(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v4,v4);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x2812,0x2812);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_16_LAST_WRAPPER_L2(cgen_local_v4,v4);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EMBMS_LOG_SIB2_MBSFN_CFG_UPDATE(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMBMS_LOG_SF_CFG_INVALID_WITH_SIB2(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x2912,0x2912);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EMBMS_LOG_SF_CFG_INVALID_WITH_SIB2(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMBMS_LOG_MBSFN_CFG_UNPACK_SF_LIST_PERIOD_RF(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x2A12,0x2A12);\
			TRC_OUTPUT_16_LAST_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EMBMS_LOG_MBSFN_CFG_UNPACK_SF_LIST_PERIOD_RF(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMBMS_LOG_MBSFN_SF_CONFIG_INFO(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v4,v4);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x2B12,0x2B12);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_8_LAST_WRAPPER_L2(cgen_local_v4,v4);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define EMBMS_LOG_MBSFN_SF_CONFIG_INFO(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMBMS_LOG_MBSFN_SF_CONFIG_SF_LIST_INFO(v1, v2, v3, v4, v5, v6, v7) do {\
		{\
			TRC_START_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v5,v5);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v6,v6);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v7,v7);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v5,v5);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v6,v6);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v7,v7);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x2C12,0x2C12);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v4,v4);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v5,v5);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v6,v6);\
			TRC_OUTPUT_8_LAST_WRAPPER_L2(cgen_local_v7,v7);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define EMBMS_LOG_MBSFN_SF_CONFIG_SF_LIST_INFO(v1, v2, v3, v4, v5, v6, v7)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMBMS_LOG_MCCH_SF_LIST_INFO(v1, v2, v3, v4, v5, v6, v7) do {\
		{\
			TRC_START_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v5,v5);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v6,v6);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v7,v7);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v5,v5);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v6,v6);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v7,v7);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x2D12,0x2D12);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v4,v4);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v5,v5);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v6,v6);\
			TRC_OUTPUT_8_LAST_WRAPPER_L2(cgen_local_v7,v7);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define EMBMS_LOG_MCCH_SF_LIST_INFO(v1, v2, v3, v4, v5, v6, v7)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMACMCH_T_WAR___PRINT_E(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x2E12,0x2E12);\
			TRC_OUTPUT_8_LAST_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define EMACMCH_T_WAR___PRINT_E(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMACMCH_T_ERR___PRINT_E(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x2F12,0x2F12);\
			TRC_OUTPUT_8_LAST_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x10);\
		}\
	} while(0)
#else
	#define EMACMCH_T_ERR___PRINT_E(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMACMCH_T_DBG___PRINT_E1_I4(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v5,v5);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v5,v5);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x3012,0x3012);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v4,v4);\
			TRC_OUTPUT_32_LAST_WRAPPER_L2(cgen_local_v5,v5);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EMACMCH_T_DBG___PRINT_E1_I4(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMACMCH_T_LOG___PRINT_E(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x3112,0x3112);\
			TRC_OUTPUT_8_LAST_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EMACMCH_T_LOG___PRINT_E(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMACMCH_T_LOG___PRINT_BYTE(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x3212,0x3212);\
			TRC_OUTPUT_8_LAST_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EMACMCH_T_LOG___PRINT_BYTE(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMACMCH_T_LOG___INIT() do {\
		{\
			TRC_START_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x01);\
			TRC_START_FILL_L2();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L2(0x3312,0x3312);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EMACMCH_T_LOG___INIT()
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMACMCH_T_LOG___CMPL_DATE(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v5,v5);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v5,v5);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x3412,0x3412);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v4,v4);\
			TRC_OUTPUT_8_LAST_WRAPPER_L2(cgen_local_v5,v5);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EMACMCH_T_LOG___CMPL_DATE(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMACMCH_T_LOG___CMPL_TIME(v1, v2, v3, v4, v5, v6) do {\
		{\
			TRC_START_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v5,v5);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v6,v6);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v5,v5);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v6,v6);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x3512,0x3512);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v4,v4);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v5,v5);\
			TRC_OUTPUT_8_LAST_WRAPPER_L2(cgen_local_v6,v6);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EMACMCH_T_LOG___CMPL_TIME(v1, v2, v3, v4, v5, v6)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMACMCH_T_LOG___CURR_TIME(v1, v2, v3, v4, v5, v6) do {\
		{\
			TRC_START_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v5,v5);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v6,v6);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v5,v5);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v6,v6);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x3612,0x3612);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v4,v4);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v5,v5);\
			TRC_OUTPUT_32_LAST_WRAPPER_L2(cgen_local_v6,v6);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EMACMCH_T_LOG___CURR_TIME(v1, v2, v3, v4, v5, v6)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMACMCH_T_LOG___INIT_G_EMACMCH_TASK() do {\
		{\
			TRC_START_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x02);\
			TRC_START_FILL_L2();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L2(0x3712,0x3712);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define EMACMCH_T_LOG___INIT_G_EMACMCH_TASK()
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMACMCH_T_LOG___INIT_G_EMACMCH_CMN() do {\
		{\
			TRC_START_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x02);\
			TRC_START_FILL_L2();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L2(0x3812,0x3812);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define EMACMCH_T_LOG___INIT_G_EMACMCH_CMN()
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMACMCH_T_LOG___RESET() do {\
		{\
			TRC_START_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x01);\
			TRC_START_FILL_L2();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L2(0x3912,0x3912);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EMACMCH_T_LOG___RESET()
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMACMCH_T_LOG___SUSPEND(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x3A12,0x3A12);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EMACMCH_T_LOG___SUSPEND(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMACMCH_T_LOG___RCV_SA_CFG_REQ(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v5,v5);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v5,v5);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x3B12,0x3B12);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v4,v4);\
			TRC_OUTPUT_32_LAST_WRAPPER_L2(cgen_local_v5,v5);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EMACMCH_T_LOG___RCV_SA_CFG_REQ(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMACMCH_T_LOG___SND_SA_CFG_CNF(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x3C12,0x3C12);\
			TRC_OUTPUT_8_LAST_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EMACMCH_T_LOG___SND_SA_CFG_CNF(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMACMCH_T_LOG___RCV_A_CFG_REQ(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v5,v5);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v5,v5);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x3D12,0x3D12);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v4,v4);\
			TRC_OUTPUT_32_LAST_WRAPPER_L2(cgen_local_v5,v5);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EMACMCH_T_LOG___RCV_A_CFG_REQ(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMACMCH_T_LOG___SND_A_CFG_CNF(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x3E12,0x3E12);\
			TRC_OUTPUT_8_LAST_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EMACMCH_T_LOG___SND_A_CFG_CNF(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMACMCH_T_LOG___RCV_MXCH_CFG_REQ(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x3F12,0x3F12);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EMACMCH_T_LOG___RCV_MXCH_CFG_REQ(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMACMCH_T_LOG___SND_MXCH_CFG_CNF(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x4012,0x4012);\
			TRC_OUTPUT_8_LAST_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EMACMCH_T_LOG___SND_MXCH_CFG_CNF(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMACMCH_T_LOG___RELEASE_TMGI(v1, v2, v3, v4, v5, v6) do {\
		{\
			TRC_START_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v5,v5);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v6,v6);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v5,v5);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v6,v6);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x4112,0x4112);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v4,v4);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v5,v5);\
			TRC_OUTPUT_8_LAST_WRAPPER_L2(cgen_local_v6,v6);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define EMACMCH_T_LOG___RELEASE_TMGI(v1, v2, v3, v4, v5, v6)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMACMCH_T_LOG___ESTABLISH_TMGI(v1, v2, v3, v4, v5, v6) do {\
		{\
			TRC_START_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v5,v5);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v6,v6);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v5,v5);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v6,v6);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x4212,0x4212);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v4,v4);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v5,v5);\
			TRC_OUTPUT_8_LAST_WRAPPER_L2(cgen_local_v6,v6);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define EMACMCH_T_LOG___ESTABLISH_TMGI(v1, v2, v3, v4, v5, v6)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMACMCH_T_LOG___ACTIVE_MCCH_NUM(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x4312,0x4312);\
			TRC_OUTPUT_8_LAST_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EMACMCH_T_LOG___ACTIVE_MCCH_NUM(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMACMCH_T_LOG___ACTIVE_MTCH_NUM(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x4412,0x4412);\
			TRC_OUTPUT_8_LAST_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EMACMCH_T_LOG___ACTIVE_MTCH_NUM(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMACMCH_T_ERR___MCCH_NOT_FOUND() do {\
		{\
			TRC_START_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x10);\
			TRC_START_FILL_L2();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L2(0x4512,0x4512);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x10);\
		}\
	} while(0)
#else
	#define EMACMCH_T_ERR___MCCH_NOT_FOUND()
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMACMCH_T_ERR___MTCH_NOT_FOUND() do {\
		{\
			TRC_START_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x10);\
			TRC_START_FILL_L2();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L2(0x4612,0x4612);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x10);\
		}\
	} while(0)
#else
	#define EMACMCH_T_ERR___MTCH_NOT_FOUND()
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMACMCH_T_LOG___RCV_MCCH_RMC_REQ(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v5,v5);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v5,v5);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x4712,0x4712);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v4,v4);\
			TRC_OUTPUT_32_LAST_WRAPPER_L2(cgen_local_v5,v5);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EMACMCH_T_LOG___RCV_MCCH_RMC_REQ(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMACMCH_T_LOG___SND_MCCH_RMC_CNF(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x4812,0x4812);\
			TRC_OUTPUT_8_LAST_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EMACMCH_T_LOG___SND_MCCH_RMC_CNF(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMACMCH_T_LOG___RCV_MCCH_RMC_IND(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v4,v4);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x4912,0x4912);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_32_LAST_WRAPPER_L2(cgen_local_v4,v4);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EMACMCH_T_LOG___RCV_MCCH_RMC_IND(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMACMCH_T_LOG___RCV_POLL_REQ(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v4,v4);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x4A12,0x4A12);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_32_LAST_WRAPPER_L2(cgen_local_v4,v4);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EMACMCH_T_LOG___RCV_POLL_REQ(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMACMCH_T_WAR___MCH_NOT_RCV(v1, v2, v3, v4, v5, v6, v7) do {\
		{\
			TRC_START_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v5,v5);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v6,v6);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v7,v7);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v5,v5);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v6,v6);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v7,v7);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x4B12,0x4B12);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v4,v4);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v5,v5);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v6,v6);\
			TRC_OUTPUT_8_LAST_WRAPPER_L2(cgen_local_v7,v7);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define EMACMCH_T_WAR___MCH_NOT_RCV(v1, v2, v3, v4, v5, v6, v7)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMACMCH_T_LOG___START_PRE_SCHED(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x4C12,0x4C12);\
			TRC_OUTPUT_8_LAST_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EMACMCH_T_LOG___START_PRE_SCHED(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMACMCH_T_LOG___CONDITION_A() do {\
		{\
			TRC_START_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x02);\
			TRC_START_FILL_L2();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L2(0x4D12,0x4D12);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define EMACMCH_T_LOG___CONDITION_A()
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMACMCH_T_LOG___CONDITION_B() do {\
		{\
			TRC_START_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x02);\
			TRC_START_FILL_L2();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L2(0x4E12,0x4E12);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define EMACMCH_T_LOG___CONDITION_B()
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMACMCH_T_LOG___CONDITION_C() do {\
		{\
			TRC_START_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x02);\
			TRC_START_FILL_L2();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L2(0x4F12,0x4F12);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define EMACMCH_T_LOG___CONDITION_C()
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMACMCH_T_LOG___UPDATE_SCHEDULE(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v4,v4);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x5012,0x5012);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_32_LAST_WRAPPER_L2(cgen_local_v4,v4);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EMACMCH_T_LOG___UPDATE_SCHEDULE(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMACMCH_T_LOG___SCHEDULE_NEXT(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x5112,0x5112);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EMACMCH_T_LOG___SCHEDULE_NEXT(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMACMCH_T_LOG___FILL_PSQ_A(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v5,v5);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v5,v5);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x5212,0x5212);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v4,v4);\
			TRC_OUTPUT_8_LAST_WRAPPER_L2(cgen_local_v5,v5);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EMACMCH_T_LOG___FILL_PSQ_A(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMACMCH_T_LOG___FILL_PSQ_B(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v4,v4);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x5312,0x5312);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_8_LAST_WRAPPER_L2(cgen_local_v4,v4);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EMACMCH_T_LOG___FILL_PSQ_B(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMACMCH_T_LOG___FILL_PSQ_C(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v3,v3);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x5412,0x5412);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_32_LAST_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define EMACMCH_T_LOG___FILL_PSQ_C(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMACMCH_T_LOG___FILL_PSQ_D(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x5512,0x5512);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EMACMCH_T_LOG___FILL_PSQ_D(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMACMCH_T_LOG___ENOUGH_VALID_PS_NUM() do {\
		{\
			TRC_START_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x01);\
			TRC_START_FILL_L2();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L2(0x5612,0x5612);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EMACMCH_T_LOG___ENOUGH_VALID_PS_NUM()
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMACMCH_T_LOG___STOT_PRE_SCHED() do {\
		{\
			TRC_START_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x01);\
			TRC_START_FILL_L2();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L2(0x5712,0x5712);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EMACMCH_T_LOG___STOT_PRE_SCHED()
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMACMCH_T_WAR___CANNOT_FIND_CANDID() do {\
		{\
			TRC_START_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x08);\
			TRC_START_FILL_L2();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L2(0x5812,0x5812);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define EMACMCH_T_WAR___CANNOT_FIND_CANDID()
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMACMCH_T_LOG___TRAVERSE_HSQ_BEFORE(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x5912,0x5912);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EMACMCH_T_LOG___TRAVERSE_HSQ_BEFORE(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMACMCH_T_LOG___HS_FOUND(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x5A12,0x5A12);\
			TRC_OUTPUT_32_LAST_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EMACMCH_T_LOG___HS_FOUND(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMACMCH_T_LOG___PDU_INFO_BY_HS_A(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v3,v3);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x5B12,0x5B12);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_8_LAST_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EMACMCH_T_LOG___PDU_INFO_BY_HS_A(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMACMCH_T_LOG___PDU_INFO_BY_HS_B(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x5C12,0x5C12);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EMACMCH_T_LOG___PDU_INFO_BY_HS_B(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMACMCH_T_LOG___PDU_INFO_BY_HS_C(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x5D12,0x5D12);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EMACMCH_T_LOG___PDU_INFO_BY_HS_C(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMACMCH_T_LOG___TRAVERSE_HSQ_AFTER(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x5E12,0x5E12);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EMACMCH_T_LOG___TRAVERSE_HSQ_AFTER(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMACMCH_T_WAR___HS_NOT_FOUND_A() do {\
		{\
			TRC_START_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x08);\
			TRC_START_FILL_L2();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L2(0x5F12,0x5F12);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define EMACMCH_T_WAR___HS_NOT_FOUND_A()
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMACMCH_T_WAR___HS_NOT_FOUND_B() do {\
		{\
			TRC_START_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x08);\
			TRC_START_FILL_L2();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L2(0x6012,0x6012);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define EMACMCH_T_WAR___HS_NOT_FOUND_B()
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMACMCH_T_WAR___UNKNOWN_PDU() do {\
		{\
			TRC_START_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x08);\
			TRC_START_FILL_L2();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L2(0x6112,0x6112);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define EMACMCH_T_WAR___UNKNOWN_PDU()
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMACMCH_T_WAR___MSI_IGNORE_A() do {\
		{\
			TRC_START_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x08);\
			TRC_START_FILL_L2();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L2(0x6212,0x6212);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define EMACMCH_T_WAR___MSI_IGNORE_A()
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMACMCH_T_WAR___MSI_IGNORE_B() do {\
		{\
			TRC_START_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x08);\
			TRC_START_FILL_L2();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L2(0x6312,0x6312);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define EMACMCH_T_WAR___MSI_IGNORE_B()
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMACMCH_T_WAR___MSI_IGNORE_C(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x6412,0x6412);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define EMACMCH_T_WAR___MSI_IGNORE_C(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMACMCH_T_WAR___MSI_IGNORE_PAIR() do {\
		{\
			TRC_START_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x08);\
			TRC_START_FILL_L2();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L2(0x6512,0x6512);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define EMACMCH_T_WAR___MSI_IGNORE_PAIR()
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMACMCH_T_WAR___UPDATE_MSI_FAILURE() do {\
		{\
			TRC_START_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x08);\
			TRC_START_FILL_L2();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L2(0x6612,0x6612);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define EMACMCH_T_WAR___UPDATE_MSI_FAILURE()
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMACMCH_T_LOG___SND_MTCH_SUS_IND(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v4,v4);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x6712,0x6712);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_8_LAST_WRAPPER_L2(cgen_local_v4,v4);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EMACMCH_T_LOG___SND_MTCH_SUS_IND(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMACMCH_T_LOG___SET_MCH_RELIABLE(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x6812,0x6812);\
			TRC_OUTPUT_32_LAST_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EMACMCH_T_LOG___SET_MCH_RELIABLE(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMACMCH_T_LOG___SET_PS_FILTEROUT(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x6912,0x6912);\
			TRC_OUTPUT_32_LAST_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EMACMCH_T_LOG___SET_PS_FILTEROUT(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMACMCH_T_WAR___MCCH_IGNORE_A() do {\
		{\
			TRC_START_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x08);\
			TRC_START_FILL_L2();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L2(0x6A12,0x6A12);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define EMACMCH_T_WAR___MCCH_IGNORE_A()
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMACMCH_T_WAR___MCCH_IGNORE_B() do {\
		{\
			TRC_START_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x08);\
			TRC_START_FILL_L2();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L2(0x6B12,0x6B12);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define EMACMCH_T_WAR___MCCH_IGNORE_B()
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMACMCH_T_WAR___MTCH_IGNORE_A() do {\
		{\
			TRC_START_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x08);\
			TRC_START_FILL_L2();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L2(0x6C12,0x6C12);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define EMACMCH_T_WAR___MTCH_IGNORE_A()
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMACMCH_T_WAR___MTCH_IGNORE_B() do {\
		{\
			TRC_START_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x08);\
			TRC_START_FILL_L2();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L2(0x6D12,0x6D12);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define EMACMCH_T_WAR___MTCH_IGNORE_B()
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMACMCH_T_WAR___MTCH_IGNORE_C() do {\
		{\
			TRC_START_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x08);\
			TRC_START_FILL_L2();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L2(0x6E12,0x6E12);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define EMACMCH_T_WAR___MTCH_IGNORE_C()
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMACMCH_T_WAR___MTCH_IGNORE_D() do {\
		{\
			TRC_START_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x08);\
			TRC_START_FILL_L2();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L2(0x6F12,0x6F12);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define EMACMCH_T_WAR___MTCH_IGNORE_D()
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMACMCH_T_LOG___PSQ_IDX(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x7012,0x7012);\
			TRC_OUTPUT_32_LAST_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EMACMCH_T_LOG___PSQ_IDX(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMACMCH_T_LOG___PSQ_RW_IDX(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x7112,0x7112);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EMACMCH_T_LOG___PSQ_RW_IDX(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMACMCH_T_LOG___DISABLE_PSQ() do {\
		{\
			TRC_START_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x01);\
			TRC_START_FILL_L2();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L2(0x7212,0x7212);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EMACMCH_T_LOG___DISABLE_PSQ()
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMACMCH_T_LOG___SWAP_PSQ() do {\
		{\
			TRC_START_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x01);\
			TRC_START_FILL_L2();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L2(0x7312,0x7312);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EMACMCH_T_LOG___SWAP_PSQ()
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMACMCH_T_LOG___PSQ_INFO(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v4,v4);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x7412,0x7412);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_32_LAST_WRAPPER_L2(cgen_local_v4,v4);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EMACMCH_T_LOG___PSQ_INFO(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMACMCH_T_LOG___PSQ_EMPTY() do {\
		{\
			TRC_START_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x01);\
			TRC_START_FILL_L2();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L2(0x7512,0x7512);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EMACMCH_T_LOG___PSQ_EMPTY()
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMACMCH_T_ERR___PSQ_FULL() do {\
		{\
			TRC_START_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x10);\
			TRC_START_FILL_L2();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L2(0x7612,0x7612);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x10);\
		}\
	} while(0)
#else
	#define EMACMCH_T_ERR___PSQ_FULL()
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMACMCH_T_LOG___HSQ_RW_IDX(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x7712,0x7712);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EMACMCH_T_LOG___HSQ_RW_IDX(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMACMCH_T_LOG___CLEAR_HSQ() do {\
		{\
			TRC_START_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x01);\
			TRC_START_FILL_L2();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L2(0x7812,0x7812);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EMACMCH_T_LOG___CLEAR_HSQ()
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMACMCH_T_LOG___CLEAR_HSQ_BEFORE(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v3,v3);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x7912,0x7912);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_32_LAST_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EMACMCH_T_LOG___CLEAR_HSQ_BEFORE(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMACMCH_T_LOG___CLEAR_HSQ_AFTER(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v3,v3);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x7A12,0x7A12);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_32_LAST_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EMACMCH_T_LOG___CLEAR_HSQ_AFTER(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMACMCH_T_LOG___UPDATE_RRC_TID(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x7B12,0x7B12);\
			TRC_OUTPUT_32_LAST_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EMACMCH_T_LOG___UPDATE_RRC_TID(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMACMCH_T_LOG___UPDATE_EL1_TID(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x7C12,0x7C12);\
			TRC_OUTPUT_32_LAST_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EMACMCH_T_LOG___UPDATE_EL1_TID(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMACMCH_T_WAR___PIDX_MISMATCH(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x7D12,0x7D12);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(EMAC_2_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define EMACMCH_T_WAR___PIDX_MISMATCH(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMACMCH_L_WAR___PRINT_E(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L2_NON_SMP(EMAC_2_Trace_Filter, 1, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L2_NON_SMP(cgen_local_v1,v1);\
			TRC_START_FILL_L2_NON_SMP();\
			TRC_PREPROCESS_DATA_SECTION2_L2_NON_SMP(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2_NON_SMP(0x7E12,0x7E12);\
			TRC_OUTPUT_8_LAST_WRAPPER_L2_NON_SMP(cgen_local_v1,v1);\
			TRC_END_FILL_L2_NON_SMP();\
			TRC_END_FILTER_CHECK_L2_NON_SMP(EMAC_2_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define EMACMCH_L_WAR___PRINT_E(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMACMCH_L_LOG___QUERY_OUTPUT_A(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L2_NON_SMP(EMAC_2_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2_NON_SMP(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L2_NON_SMP(cgen_local_v3,v3);\
			TRC_START_FILL_L2_NON_SMP();\
			TRC_PREPROCESS_DATA_SECTION2_L2_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2_NON_SMP(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L2_NON_SMP(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2_NON_SMP(0x7F12,0x7F12);\
			TRC_OUTPUT_32_MID_WRAPPER_L2_NON_SMP(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L2_NON_SMP(cgen_local_v2,v2);\
			TRC_OUTPUT_32_LAST_WRAPPER_L2_NON_SMP(cgen_local_v3,v3);\
			TRC_END_FILL_L2_NON_SMP();\
			TRC_END_FILTER_CHECK_L2_NON_SMP(EMAC_2_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EMACMCH_L_LOG___QUERY_OUTPUT_A(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMACMCH_L_LOG___QUERY_OUTPUT_D(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L2_NON_SMP(EMAC_2_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2_NON_SMP(cgen_local_v1,v1);\
			TRC_START_FILL_L2_NON_SMP();\
			TRC_PREPROCESS_DATA_SECTION2_L2_NON_SMP(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2_NON_SMP(0x8012,0x8012);\
			TRC_OUTPUT_8_LAST_WRAPPER_L2_NON_SMP(cgen_local_v1,v1);\
			TRC_END_FILL_L2_NON_SMP();\
			TRC_END_FILTER_CHECK_L2_NON_SMP(EMAC_2_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EMACMCH_L_LOG___QUERY_OUTPUT_D(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMACMCH_L_WAR___QUERY_FAILURE_A(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L2_NON_SMP(EMAC_2_Trace_Filter, 1, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L2_NON_SMP(cgen_local_v1,v1);\
			TRC_START_FILL_L2_NON_SMP();\
			TRC_PREPROCESS_DATA_SECTION2_L2_NON_SMP(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2_NON_SMP(0x8112,0x8112);\
			TRC_OUTPUT_32_LAST_WRAPPER_L2_NON_SMP(cgen_local_v1,v1);\
			TRC_END_FILL_L2_NON_SMP();\
			TRC_END_FILTER_CHECK_L2_NON_SMP(EMAC_2_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define EMACMCH_L_WAR___QUERY_FAILURE_A(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMACMCH_L_WAR___QUERY_FAILURE_B() do {\
		{\
			TRC_START_FILTER_CHECK_L2_NON_SMP(EMAC_2_Trace_Filter, 1, 0x08);\
			TRC_START_FILL_L2_NON_SMP();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L2_NON_SMP(0x8212,0x8212);\
			TRC_END_FILL_L2_NON_SMP();\
			TRC_END_FILTER_CHECK_L2_NON_SMP(EMAC_2_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define EMACMCH_L_WAR___QUERY_FAILURE_B()
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMACMCH_L_WAR___QUERY_FAILURE_C() do {\
		{\
			TRC_START_FILTER_CHECK_L2_NON_SMP(EMAC_2_Trace_Filter, 1, 0x08);\
			TRC_START_FILL_L2_NON_SMP();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L2_NON_SMP(0x8312,0x8312);\
			TRC_END_FILL_L2_NON_SMP();\
			TRC_END_FILTER_CHECK_L2_NON_SMP(EMAC_2_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define EMACMCH_L_WAR___QUERY_FAILURE_C()
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMACMCH_L_WAR___QUERY_FAILURE_D() do {\
		{\
			TRC_START_FILTER_CHECK_L2_NON_SMP(EMAC_2_Trace_Filter, 1, 0x08);\
			TRC_START_FILL_L2_NON_SMP();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L2_NON_SMP(0x8412,0x8412);\
			TRC_END_FILL_L2_NON_SMP();\
			TRC_END_FILTER_CHECK_L2_NON_SMP(EMAC_2_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define EMACMCH_L_WAR___QUERY_FAILURE_D()
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMACMCH_L_WAR___QUERY_FAILURE_E() do {\
		{\
			TRC_START_FILTER_CHECK_L2_NON_SMP(EMAC_2_Trace_Filter, 1, 0x08);\
			TRC_START_FILL_L2_NON_SMP();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L2_NON_SMP(0x8512,0x8512);\
			TRC_END_FILL_L2_NON_SMP();\
			TRC_END_FILTER_CHECK_L2_NON_SMP(EMAC_2_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define EMACMCH_L_WAR___QUERY_FAILURE_E()
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMACMCH_L_WAR___QUERY_FAILURE_F() do {\
		{\
			TRC_START_FILTER_CHECK_L2_NON_SMP(EMAC_2_Trace_Filter, 1, 0x08);\
			TRC_START_FILL_L2_NON_SMP();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L2_NON_SMP(0x8612,0x8612);\
			TRC_END_FILL_L2_NON_SMP();\
			TRC_END_FILTER_CHECK_L2_NON_SMP(EMAC_2_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define EMACMCH_L_WAR___QUERY_FAILURE_F()
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMACMCH_L_LOG___PSQ_IDX(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L2_NON_SMP(EMAC_2_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2_NON_SMP(cgen_local_v1,v1);\
			TRC_START_FILL_L2_NON_SMP();\
			TRC_PREPROCESS_DATA_SECTION2_L2_NON_SMP(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2_NON_SMP(0x8712,0x8712);\
			TRC_OUTPUT_32_LAST_WRAPPER_L2_NON_SMP(cgen_local_v1,v1);\
			TRC_END_FILL_L2_NON_SMP();\
			TRC_END_FILTER_CHECK_L2_NON_SMP(EMAC_2_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EMACMCH_L_LOG___PSQ_IDX(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMACMCH_L_LOG___PSQ_RW_IDX(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L2_NON_SMP(EMAC_2_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2_NON_SMP(cgen_local_v2,v2);\
			TRC_START_FILL_L2_NON_SMP();\
			TRC_PREPROCESS_DATA_SECTION2_L2_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2_NON_SMP(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2_NON_SMP(0x8812,0x8812);\
			TRC_OUTPUT_32_MID_WRAPPER_L2_NON_SMP(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L2_NON_SMP(cgen_local_v2,v2);\
			TRC_END_FILL_L2_NON_SMP();\
			TRC_END_FILTER_CHECK_L2_NON_SMP(EMAC_2_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EMACMCH_L_LOG___PSQ_RW_IDX(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMACMCH_L_LOG___HSQ_RW_IDX(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L2_NON_SMP(EMAC_2_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2_NON_SMP(cgen_local_v2,v2);\
			TRC_START_FILL_L2_NON_SMP();\
			TRC_PREPROCESS_DATA_SECTION2_L2_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2_NON_SMP(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2_NON_SMP(0x8912,0x8912);\
			TRC_OUTPUT_32_MID_WRAPPER_L2_NON_SMP(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L2_NON_SMP(cgen_local_v2,v2);\
			TRC_END_FILL_L2_NON_SMP();\
			TRC_END_FILTER_CHECK_L2_NON_SMP(EMAC_2_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EMACMCH_L_LOG___HSQ_RW_IDX(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMACMCH_L_ERR___HSQ_FULL() do {\
		{\
			TRC_START_FILTER_CHECK_L2_NON_SMP(EMAC_2_Trace_Filter, 1, 0x10);\
			TRC_START_FILL_L2_NON_SMP();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L2_NON_SMP(0x8A12,0x8A12);\
			TRC_END_FILL_L2_NON_SMP();\
			TRC_END_FILTER_CHECK_L2_NON_SMP(EMAC_2_Trace_Filter, 1, 0x10);\
		}\
	} while(0)
#else
	#define EMACMCH_L_ERR___HSQ_FULL()
#endif



/*******************************/
/* declaration of filter array */
/*******************************/
EXTERN_TMD_FILTER(unsigned char, EMAC_2_Trace_Filter, 5);
/*************************/
/* Function declarations */
/*************************/
#ifdef L1_CATCHER

void Set_EMAC_2_Filter(unsigned char *setting);

#endif

/************************************/
/* Filter checking API declarations */
/************************************/

#define ChkL1ModFltr_EMAC_2()	(FILTER_CHECK(EMAC_2_Trace_Filter, 0, 1))
#define ChkL1ClsFltr_EMAC_2_EMAC_LV1()	(ChkL1ModFltr_EMAC_2()&&(FILTER_CHECK(EMAC_2_Trace_Filter, 1, 0x01)))
#define ChkL1ClsFltr_EMAC_2_EMAC_LV2()	(ChkL1ModFltr_EMAC_2()&&(FILTER_CHECK(EMAC_2_Trace_Filter, 1, 0x02)))
#define ChkL1ClsFltr_EMAC_2_EMAC_LV3()	(ChkL1ModFltr_EMAC_2()&&(FILTER_CHECK(EMAC_2_Trace_Filter, 1, 0x04)))
#define ChkL1ClsFltr_EMAC_2_EMAC_WARN()	(ChkL1ModFltr_EMAC_2()&&(FILTER_CHECK(EMAC_2_Trace_Filter, 1, 0x08)))
#define ChkL1ClsFltr_EMAC_2_EMAC_ERROR()	(ChkL1ModFltr_EMAC_2()&&(FILTER_CHECK(EMAC_2_Trace_Filter, 1, 0x10)))
#define ChkL1ClsFltr_EMAC_2_EMAC_DEBUG()	(ChkL1ModFltr_EMAC_2()&&(FILTER_CHECK(EMAC_2_Trace_Filter, 1, 0x20)))
#define ChkL1MsgFltr_EMBMS_LOG_RESET_SYNC_AREA_INIT()	ChkL1ClsFltr_EMAC_2_EMAC_LV1()
#define ChkL1MsgFltr_EMBMS_LOG_DELETE_ACTIVE_AREA()	ChkL1ClsFltr_EMAC_2_EMAC_LV1()
#define ChkL1MsgFltr_EMBMS_LOG_MCCH_CONFIG_INIT()	ChkL1ClsFltr_EMAC_2_EMAC_LV1()
#define ChkL1MsgFltr_EMBMS_LOG_EXIST_MCCH()	ChkL1ClsFltr_EMAC_2_EMAC_LV1()
#define ChkL1MsgFltr_EMBMS_LOG_NEW_CFG_MCCH()	ChkL1ClsFltr_EMAC_2_EMAC_LV1()
#define ChkL1MsgFltr_EMBMS_LOG_ADD_MCCH()	ChkL1ClsFltr_EMAC_2_EMAC_LV1()
#define ChkL1MsgFltr_EMBMS_LOG_UPDATE_MCCH()	ChkL1ClsFltr_EMAC_2_EMAC_LV1()
#define ChkL1MsgFltr_EMBMS_LOG_DELETE_MCCH()	ChkL1ClsFltr_EMAC_2_EMAC_LV1()
#define ChkL1MsgFltr_EMBMS_LOG_MCCH_CFG_IDX()	ChkL1ClsFltr_EMAC_2_EMAC_LV1()
#define ChkL1MsgFltr_EMBMS_LOG_PMCH_CONFIG_INIT()	ChkL1ClsFltr_EMAC_2_EMAC_LV1()
#define ChkL1MsgFltr_EMBMS_LOG_PMCH_AREA_ID()	ChkL1ClsFltr_EMAC_2_EMAC_LV1()
#define ChkL1MsgFltr_EMBMS_LOG_PMCH_RESET()	ChkL1ClsFltr_EMAC_2_EMAC_LV1()
#define ChkL1MsgFltr_EMBMS_LOG_ADD_PMCH()	ChkL1ClsFltr_EMAC_2_EMAC_LV1()
#define ChkL1MsgFltr_EMBMS_LOG_PMCH_SF_LIST()	ChkL1ClsFltr_EMAC_2_EMAC_LV1()
#define ChkL1MsgFltr_EMBMS_LOG_PMCH_CFG_ERR_ALLOC_END()	ChkL1ClsFltr_EMAC_2_EMAC_LV1()
#define ChkL1MsgFltr_EMBMS_LOG_UPDATE_MSI_INIT()	ChkL1ClsFltr_EMAC_2_EMAC_LV1()
#define ChkL1MsgFltr_EMBMS_LOG_INVAILD_AREA_INFO_ID()	ChkL1ClsFltr_EMAC_2_EMAC_LV1()
#define ChkL1MsgFltr_EMBMS_LOG_RECEPTION_MODE_INIT()	ChkL1ClsFltr_EMAC_2_EMAC_LV1()
#define ChkL1MsgFltr_EMBMS_LOG_CFG_RECEPTION_MODE()	ChkL1ClsFltr_EMAC_2_EMAC_LV1()
#define ChkL1MsgFltr_EMBMS_LOG_QUERY_IDX()	ChkL1ClsFltr_EMAC_2_EMAC_LV1()
#define ChkL1MsgFltr_EMBMS_LOG_UPDATE_SCHED_INIT()	ChkL1ClsFltr_EMAC_2_EMAC_LV1()
#define ChkL1MsgFltr_EMBMS_LOG_SCHED_NO_VALID_RESULT()	ChkL1ClsFltr_EMAC_2_EMAC_LV1()
#define ChkL1MsgFltr_EMBMS_LOG_UPDATE_SCHED_RESULT()	ChkL1ClsFltr_EMAC_2_EMAC_LV1()
#define ChkL1MsgFltr_EMBMS_LOG_UPDATE_SCHED_RESULT_GEMINI()	ChkL1ClsFltr_EMAC_2_EMAC_LV1()
#define ChkL1MsgFltr_EMBMS_LOG_MCCH_UPDATE_SCHED()	ChkL1ClsFltr_EMAC_2_EMAC_LV1()
#define ChkL1MsgFltr_EMBMS_LOG_MCCH_SCHED_RESULT()	ChkL1ClsFltr_EMAC_2_EMAC_LV1()
#define ChkL1MsgFltr_EMBMS_LOG_MCCH_SCHED_NEXT()	ChkL1ClsFltr_EMAC_2_EMAC_LV1()
#define ChkL1MsgFltr_EMBMS_LOG_MCCH_NO_VAILD_NEXT()	ChkL1ClsFltr_EMAC_2_EMAC_LV1()
#define ChkL1MsgFltr_EMBMS_LOG_RPID_MPID()	ChkL1ClsFltr_EMAC_2_EMAC_LV1()
#define ChkL1MsgFltr_EMBMS_LOG_FORCE_RECV_MCCH()	ChkL1ClsFltr_EMAC_2_EMAC_LV1()
#define ChkL1MsgFltr_EMBMS_LOG_PMCH_UPDATE_SCHED()	ChkL1ClsFltr_EMAC_2_EMAC_LV1()
#define ChkL1MsgFltr_EMBMS_LOG_PMCH_SCHED_RESULT()	ChkL1ClsFltr_EMAC_2_EMAC_LV1()
#define ChkL1MsgFltr_EMBMS_LOG_MSI_HANDLE_CSA_IDX()	ChkL1ClsFltr_EMAC_2_EMAC_LV1()
#define ChkL1MsgFltr_EMBMS_LOG_PMCH_SCHED_NEXT()	ChkL1ClsFltr_EMAC_2_EMAC_LV1()
#define ChkL1MsgFltr_EMBMS_LOG_SCHED_NEXT_INIT()	ChkL1ClsFltr_EMAC_2_EMAC_LV1()
#define ChkL1MsgFltr_EMBMS_LOG_REDUNDANT_SCHED_NEXT()	ChkL1ClsFltr_EMAC_2_EMAC_LV1()
#define ChkL1MsgFltr_EMBMS_LOG_SCHED_NEXT_RESULT()	ChkL1ClsFltr_EMAC_2_EMAC_LV1()
#define ChkL1MsgFltr_EMBMS_LOG_SCHED_NEXT_RESULT_2()	ChkL1ClsFltr_EMAC_2_EMAC_LV1()
#define ChkL1MsgFltr_EMBMS_LOG_SCHED_NEXT_RESULT_GEMINI()	ChkL1ClsFltr_EMAC_2_EMAC_LV1()
#define ChkL1MsgFltr_EMBMS_LOG_NUM_MTCH_RESOURCE()	ChkL1ClsFltr_EMAC_2_EMAC_LV1()
#define ChkL1MsgFltr_EMBMS_LOG_SIB2_MBSFN_CFG_UPDATE()	ChkL1ClsFltr_EMAC_2_EMAC_LV1()
#define ChkL1MsgFltr_EMBMS_LOG_SF_CFG_INVALID_WITH_SIB2()	ChkL1ClsFltr_EMAC_2_EMAC_LV1()
#define ChkL1MsgFltr_EMBMS_LOG_MBSFN_CFG_UNPACK_SF_LIST_PERIOD_RF()	ChkL1ClsFltr_EMAC_2_EMAC_LV1()
#define ChkL1MsgFltr_EMBMS_LOG_MBSFN_SF_CONFIG_INFO()	ChkL1ClsFltr_EMAC_2_EMAC_LV2()
#define ChkL1MsgFltr_EMBMS_LOG_MBSFN_SF_CONFIG_SF_LIST_INFO()	ChkL1ClsFltr_EMAC_2_EMAC_LV2()
#define ChkL1MsgFltr_EMBMS_LOG_MCCH_SF_LIST_INFO()	ChkL1ClsFltr_EMAC_2_EMAC_LV2()
#define ChkL1MsgFltr_EMACMCH_T_WAR___PRINT_E()	ChkL1ClsFltr_EMAC_2_EMAC_WARN()
#define ChkL1MsgFltr_EMACMCH_T_ERR___PRINT_E()	ChkL1ClsFltr_EMAC_2_EMAC_ERROR()
#define ChkL1MsgFltr_EMACMCH_T_DBG___PRINT_E1_I4()	ChkL1ClsFltr_EMAC_2_EMAC_LV1()
#define ChkL1MsgFltr_EMACMCH_T_LOG___PRINT_E()	ChkL1ClsFltr_EMAC_2_EMAC_LV1()
#define ChkL1MsgFltr_EMACMCH_T_LOG___PRINT_BYTE()	ChkL1ClsFltr_EMAC_2_EMAC_LV1()
#define ChkL1MsgFltr_EMACMCH_T_LOG___INIT()	ChkL1ClsFltr_EMAC_2_EMAC_LV1()
#define ChkL1MsgFltr_EMACMCH_T_LOG___CMPL_DATE()	ChkL1ClsFltr_EMAC_2_EMAC_LV1()
#define ChkL1MsgFltr_EMACMCH_T_LOG___CMPL_TIME()	ChkL1ClsFltr_EMAC_2_EMAC_LV1()
#define ChkL1MsgFltr_EMACMCH_T_LOG___CURR_TIME()	ChkL1ClsFltr_EMAC_2_EMAC_LV1()
#define ChkL1MsgFltr_EMACMCH_T_LOG___INIT_G_EMACMCH_TASK()	ChkL1ClsFltr_EMAC_2_EMAC_LV2()
#define ChkL1MsgFltr_EMACMCH_T_LOG___INIT_G_EMACMCH_CMN()	ChkL1ClsFltr_EMAC_2_EMAC_LV2()
#define ChkL1MsgFltr_EMACMCH_T_LOG___RESET()	ChkL1ClsFltr_EMAC_2_EMAC_LV1()
#define ChkL1MsgFltr_EMACMCH_T_LOG___SUSPEND()	ChkL1ClsFltr_EMAC_2_EMAC_LV1()
#define ChkL1MsgFltr_EMACMCH_T_LOG___RCV_SA_CFG_REQ()	ChkL1ClsFltr_EMAC_2_EMAC_LV1()
#define ChkL1MsgFltr_EMACMCH_T_LOG___SND_SA_CFG_CNF()	ChkL1ClsFltr_EMAC_2_EMAC_LV1()
#define ChkL1MsgFltr_EMACMCH_T_LOG___RCV_A_CFG_REQ()	ChkL1ClsFltr_EMAC_2_EMAC_LV1()
#define ChkL1MsgFltr_EMACMCH_T_LOG___SND_A_CFG_CNF()	ChkL1ClsFltr_EMAC_2_EMAC_LV1()
#define ChkL1MsgFltr_EMACMCH_T_LOG___RCV_MXCH_CFG_REQ()	ChkL1ClsFltr_EMAC_2_EMAC_LV1()
#define ChkL1MsgFltr_EMACMCH_T_LOG___SND_MXCH_CFG_CNF()	ChkL1ClsFltr_EMAC_2_EMAC_LV1()
#define ChkL1MsgFltr_EMACMCH_T_LOG___RELEASE_TMGI()	ChkL1ClsFltr_EMAC_2_EMAC_LV2()
#define ChkL1MsgFltr_EMACMCH_T_LOG___ESTABLISH_TMGI()	ChkL1ClsFltr_EMAC_2_EMAC_LV2()
#define ChkL1MsgFltr_EMACMCH_T_LOG___ACTIVE_MCCH_NUM()	ChkL1ClsFltr_EMAC_2_EMAC_LV1()
#define ChkL1MsgFltr_EMACMCH_T_LOG___ACTIVE_MTCH_NUM()	ChkL1ClsFltr_EMAC_2_EMAC_LV1()
#define ChkL1MsgFltr_EMACMCH_T_ERR___MCCH_NOT_FOUND()	ChkL1ClsFltr_EMAC_2_EMAC_ERROR()
#define ChkL1MsgFltr_EMACMCH_T_ERR___MTCH_NOT_FOUND()	ChkL1ClsFltr_EMAC_2_EMAC_ERROR()
#define ChkL1MsgFltr_EMACMCH_T_LOG___RCV_MCCH_RMC_REQ()	ChkL1ClsFltr_EMAC_2_EMAC_LV1()
#define ChkL1MsgFltr_EMACMCH_T_LOG___SND_MCCH_RMC_CNF()	ChkL1ClsFltr_EMAC_2_EMAC_LV1()
#define ChkL1MsgFltr_EMACMCH_T_LOG___RCV_MCCH_RMC_IND()	ChkL1ClsFltr_EMAC_2_EMAC_LV1()
#define ChkL1MsgFltr_EMACMCH_T_LOG___RCV_POLL_REQ()	ChkL1ClsFltr_EMAC_2_EMAC_LV1()
#define ChkL1MsgFltr_EMACMCH_T_WAR___MCH_NOT_RCV()	ChkL1ClsFltr_EMAC_2_EMAC_WARN()
#define ChkL1MsgFltr_EMACMCH_T_LOG___START_PRE_SCHED()	ChkL1ClsFltr_EMAC_2_EMAC_LV1()
#define ChkL1MsgFltr_EMACMCH_T_LOG___CONDITION_A()	ChkL1ClsFltr_EMAC_2_EMAC_LV2()
#define ChkL1MsgFltr_EMACMCH_T_LOG___CONDITION_B()	ChkL1ClsFltr_EMAC_2_EMAC_LV2()
#define ChkL1MsgFltr_EMACMCH_T_LOG___CONDITION_C()	ChkL1ClsFltr_EMAC_2_EMAC_LV2()
#define ChkL1MsgFltr_EMACMCH_T_LOG___UPDATE_SCHEDULE()	ChkL1ClsFltr_EMAC_2_EMAC_LV1()
#define ChkL1MsgFltr_EMACMCH_T_LOG___SCHEDULE_NEXT()	ChkL1ClsFltr_EMAC_2_EMAC_LV1()
#define ChkL1MsgFltr_EMACMCH_T_LOG___FILL_PSQ_A()	ChkL1ClsFltr_EMAC_2_EMAC_LV1()
#define ChkL1MsgFltr_EMACMCH_T_LOG___FILL_PSQ_B()	ChkL1ClsFltr_EMAC_2_EMAC_LV1()
#define ChkL1MsgFltr_EMACMCH_T_LOG___FILL_PSQ_C()	ChkL1ClsFltr_EMAC_2_EMAC_LV2()
#define ChkL1MsgFltr_EMACMCH_T_LOG___FILL_PSQ_D()	ChkL1ClsFltr_EMAC_2_EMAC_LV1()
#define ChkL1MsgFltr_EMACMCH_T_LOG___ENOUGH_VALID_PS_NUM()	ChkL1ClsFltr_EMAC_2_EMAC_LV1()
#define ChkL1MsgFltr_EMACMCH_T_LOG___STOT_PRE_SCHED()	ChkL1ClsFltr_EMAC_2_EMAC_LV1()
#define ChkL1MsgFltr_EMACMCH_T_WAR___CANNOT_FIND_CANDID()	ChkL1ClsFltr_EMAC_2_EMAC_WARN()
#define ChkL1MsgFltr_EMACMCH_T_LOG___TRAVERSE_HSQ_BEFORE()	ChkL1ClsFltr_EMAC_2_EMAC_LV1()
#define ChkL1MsgFltr_EMACMCH_T_LOG___HS_FOUND()	ChkL1ClsFltr_EMAC_2_EMAC_LV1()
#define ChkL1MsgFltr_EMACMCH_T_LOG___PDU_INFO_BY_HS_A()	ChkL1ClsFltr_EMAC_2_EMAC_LV1()
#define ChkL1MsgFltr_EMACMCH_T_LOG___PDU_INFO_BY_HS_B()	ChkL1ClsFltr_EMAC_2_EMAC_LV1()
#define ChkL1MsgFltr_EMACMCH_T_LOG___PDU_INFO_BY_HS_C()	ChkL1ClsFltr_EMAC_2_EMAC_LV1()
#define ChkL1MsgFltr_EMACMCH_T_LOG___TRAVERSE_HSQ_AFTER()	ChkL1ClsFltr_EMAC_2_EMAC_LV1()
#define ChkL1MsgFltr_EMACMCH_T_WAR___HS_NOT_FOUND_A()	ChkL1ClsFltr_EMAC_2_EMAC_WARN()
#define ChkL1MsgFltr_EMACMCH_T_WAR___HS_NOT_FOUND_B()	ChkL1ClsFltr_EMAC_2_EMAC_WARN()
#define ChkL1MsgFltr_EMACMCH_T_WAR___UNKNOWN_PDU()	ChkL1ClsFltr_EMAC_2_EMAC_WARN()
#define ChkL1MsgFltr_EMACMCH_T_WAR___MSI_IGNORE_A()	ChkL1ClsFltr_EMAC_2_EMAC_WARN()
#define ChkL1MsgFltr_EMACMCH_T_WAR___MSI_IGNORE_B()	ChkL1ClsFltr_EMAC_2_EMAC_WARN()
#define ChkL1MsgFltr_EMACMCH_T_WAR___MSI_IGNORE_C()	ChkL1ClsFltr_EMAC_2_EMAC_WARN()
#define ChkL1MsgFltr_EMACMCH_T_WAR___MSI_IGNORE_PAIR()	ChkL1ClsFltr_EMAC_2_EMAC_WARN()
#define ChkL1MsgFltr_EMACMCH_T_WAR___UPDATE_MSI_FAILURE()	ChkL1ClsFltr_EMAC_2_EMAC_WARN()
#define ChkL1MsgFltr_EMACMCH_T_LOG___SND_MTCH_SUS_IND()	ChkL1ClsFltr_EMAC_2_EMAC_LV1()
#define ChkL1MsgFltr_EMACMCH_T_LOG___SET_MCH_RELIABLE()	ChkL1ClsFltr_EMAC_2_EMAC_LV1()
#define ChkL1MsgFltr_EMACMCH_T_LOG___SET_PS_FILTEROUT()	ChkL1ClsFltr_EMAC_2_EMAC_LV1()
#define ChkL1MsgFltr_EMACMCH_T_WAR___MCCH_IGNORE_A()	ChkL1ClsFltr_EMAC_2_EMAC_WARN()
#define ChkL1MsgFltr_EMACMCH_T_WAR___MCCH_IGNORE_B()	ChkL1ClsFltr_EMAC_2_EMAC_WARN()
#define ChkL1MsgFltr_EMACMCH_T_WAR___MTCH_IGNORE_A()	ChkL1ClsFltr_EMAC_2_EMAC_WARN()
#define ChkL1MsgFltr_EMACMCH_T_WAR___MTCH_IGNORE_B()	ChkL1ClsFltr_EMAC_2_EMAC_WARN()
#define ChkL1MsgFltr_EMACMCH_T_WAR___MTCH_IGNORE_C()	ChkL1ClsFltr_EMAC_2_EMAC_WARN()
#define ChkL1MsgFltr_EMACMCH_T_WAR___MTCH_IGNORE_D()	ChkL1ClsFltr_EMAC_2_EMAC_WARN()
#define ChkL1MsgFltr_EMACMCH_T_LOG___PSQ_IDX()	ChkL1ClsFltr_EMAC_2_EMAC_LV1()
#define ChkL1MsgFltr_EMACMCH_T_LOG___PSQ_RW_IDX()	ChkL1ClsFltr_EMAC_2_EMAC_LV1()
#define ChkL1MsgFltr_EMACMCH_T_LOG___DISABLE_PSQ()	ChkL1ClsFltr_EMAC_2_EMAC_LV1()
#define ChkL1MsgFltr_EMACMCH_T_LOG___SWAP_PSQ()	ChkL1ClsFltr_EMAC_2_EMAC_LV1()
#define ChkL1MsgFltr_EMACMCH_T_LOG___PSQ_INFO()	ChkL1ClsFltr_EMAC_2_EMAC_LV1()
#define ChkL1MsgFltr_EMACMCH_T_LOG___PSQ_EMPTY()	ChkL1ClsFltr_EMAC_2_EMAC_LV1()
#define ChkL1MsgFltr_EMACMCH_T_ERR___PSQ_FULL()	ChkL1ClsFltr_EMAC_2_EMAC_ERROR()
#define ChkL1MsgFltr_EMACMCH_T_LOG___HSQ_RW_IDX()	ChkL1ClsFltr_EMAC_2_EMAC_LV1()
#define ChkL1MsgFltr_EMACMCH_T_LOG___CLEAR_HSQ()	ChkL1ClsFltr_EMAC_2_EMAC_LV1()
#define ChkL1MsgFltr_EMACMCH_T_LOG___CLEAR_HSQ_BEFORE()	ChkL1ClsFltr_EMAC_2_EMAC_LV1()
#define ChkL1MsgFltr_EMACMCH_T_LOG___CLEAR_HSQ_AFTER()	ChkL1ClsFltr_EMAC_2_EMAC_LV1()
#define ChkL1MsgFltr_EMACMCH_T_LOG___UPDATE_RRC_TID()	ChkL1ClsFltr_EMAC_2_EMAC_LV1()
#define ChkL1MsgFltr_EMACMCH_T_LOG___UPDATE_EL1_TID()	ChkL1ClsFltr_EMAC_2_EMAC_LV1()
#define ChkL1MsgFltr_EMACMCH_T_WAR___PIDX_MISMATCH()	ChkL1ClsFltr_EMAC_2_EMAC_WARN()
#define ChkL1MsgFltr_EMACMCH_L_WAR___PRINT_E()	ChkL1ClsFltr_EMAC_2_EMAC_WARN()
#define ChkL1MsgFltr_EMACMCH_L_LOG___QUERY_OUTPUT_A()	ChkL1ClsFltr_EMAC_2_EMAC_LV1()
#define ChkL1MsgFltr_EMACMCH_L_LOG___QUERY_OUTPUT_D()	ChkL1ClsFltr_EMAC_2_EMAC_LV1()
#define ChkL1MsgFltr_EMACMCH_L_WAR___QUERY_FAILURE_A()	ChkL1ClsFltr_EMAC_2_EMAC_WARN()
#define ChkL1MsgFltr_EMACMCH_L_WAR___QUERY_FAILURE_B()	ChkL1ClsFltr_EMAC_2_EMAC_WARN()
#define ChkL1MsgFltr_EMACMCH_L_WAR___QUERY_FAILURE_C()	ChkL1ClsFltr_EMAC_2_EMAC_WARN()
#define ChkL1MsgFltr_EMACMCH_L_WAR___QUERY_FAILURE_D()	ChkL1ClsFltr_EMAC_2_EMAC_WARN()
#define ChkL1MsgFltr_EMACMCH_L_WAR___QUERY_FAILURE_E()	ChkL1ClsFltr_EMAC_2_EMAC_WARN()
#define ChkL1MsgFltr_EMACMCH_L_WAR___QUERY_FAILURE_F()	ChkL1ClsFltr_EMAC_2_EMAC_WARN()
#define ChkL1MsgFltr_EMACMCH_L_LOG___PSQ_IDX()	ChkL1ClsFltr_EMAC_2_EMAC_LV1()
#define ChkL1MsgFltr_EMACMCH_L_LOG___PSQ_RW_IDX()	ChkL1ClsFltr_EMAC_2_EMAC_LV1()
#define ChkL1MsgFltr_EMACMCH_L_LOG___HSQ_RW_IDX()	ChkL1ClsFltr_EMAC_2_EMAC_LV1()
#define ChkL1MsgFltr_EMACMCH_L_ERR___HSQ_FULL()	ChkL1ClsFltr_EMAC_2_EMAC_ERROR()


#endif
