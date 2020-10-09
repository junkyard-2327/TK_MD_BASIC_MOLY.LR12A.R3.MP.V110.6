#ifndef L1TRC_DP_COPRO_DRV_DEF_H
#define L1TRC_DP_COPRO_DRV_DEF_H

/******************************/
/* String category definition */
/******************************/


/****************************/
/* Message macro definition */
/****************************/
#include "L1Trc.h"
#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define DPC_DRV_WARN(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L2(DP_COPRO_DRV_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x0048,0x0048);\
			TRC_OUTPUT_16_LAST_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(DP_COPRO_DRV_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define DPC_DRV_WARN(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define DPC_DRV_INFO(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L2(DP_COPRO_DRV_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v4,v4);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x0148,0x0148);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_32_LAST_WRAPPER_L2(cgen_local_v4,v4);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(DP_COPRO_DRV_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define DPC_DRV_INFO(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define DPC_DRV_INFO_2(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L2(DP_COPRO_DRV_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x0248,0x0248);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(DP_COPRO_DRV_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define DPC_DRV_INFO_2(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define DPC_DRV_INFO_3(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L2(DP_COPRO_DRV_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v3,v3);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x0348,0x0348);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_32_LAST_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(DP_COPRO_DRV_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define DPC_DRV_INFO_3(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define DPC_DRV_ERR_3(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L2(DP_COPRO_DRV_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v3,v3);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x0448,0x0448);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_32_LAST_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(DP_COPRO_DRV_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define DPC_DRV_ERR_3(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define DPC_DRV_ERR_4(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L2(DP_COPRO_DRV_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v4,v4);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x0548,0x0548);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_32_LAST_WRAPPER_L2(cgen_local_v4,v4);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(DP_COPRO_DRV_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define DPC_DRV_ERR_4(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define DPC_DRV_ERR(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L2(DP_COPRO_DRV_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x0648,0x0648);\
			TRC_OUTPUT_16_LAST_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(DP_COPRO_DRV_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define DPC_DRV_ERR(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define DPC_DRV_KT_SET(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L2(DP_COPRO_DRV_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v3,v3);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x0748,0x0748);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_32_LAST_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(DP_COPRO_DRV_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define DPC_DRV_KT_SET(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define DPC_DRV_STAT_MAX_MIN(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L2(DP_COPRO_DRV_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v4,v4);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x0848,0x0848);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_32_LAST_WRAPPER_L2(cgen_local_v4,v4);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(DP_COPRO_DRV_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define DPC_DRV_STAT_MAX_MIN(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define DPC_DRV_STAT_VOTE_2(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L2(DP_COPRO_DRV_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v3,v3);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x0948,0x0948);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_32_LAST_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(DP_COPRO_DRV_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define DPC_DRV_STAT_VOTE_2(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define DPC_DRV_STAT_VOTE_3(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L2(DP_COPRO_DRV_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v4,v4);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x0A48,0x0A48);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_32_LAST_WRAPPER_L2(cgen_local_v4,v4);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(DP_COPRO_DRV_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define DPC_DRV_STAT_VOTE_3(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define DPC_DRV_PWR_ABORT(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L2(DP_COPRO_DRV_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v3,v3);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x0B48,0x0B48);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_32_LAST_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(DP_COPRO_DRV_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define DPC_DRV_PWR_ABORT(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define DPC_COPRO_POW_DOWN(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L2(DP_COPRO_DRV_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x0C48,0x0C48);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(DP_COPRO_DRV_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define DPC_COPRO_POW_DOWN(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define DPC_COPRO_POW_ON(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L2(DP_COPRO_DRV_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x0D48,0x0D48);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(DP_COPRO_DRV_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define DPC_COPRO_POW_ON(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define DPC_COPRO_WAIT_PWR_ST(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L2(DP_COPRO_DRV_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x0E48,0x0E48);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(DP_COPRO_DRV_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define DPC_COPRO_WAIT_PWR_ST(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define DPC_PWR_ON_ST(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L2(DP_COPRO_DRV_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v3,v3);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x0F48,0x0F48);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_32_LAST_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(DP_COPRO_DRV_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define DPC_PWR_ON_ST(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define DPC_PWR_DOWN_ST(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L2(DP_COPRO_DRV_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v3,v3);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x1048,0x1048);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_32_LAST_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(DP_COPRO_DRV_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define DPC_PWR_DOWN_ST(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define LMAC_PATH_FULL_WARN(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L2(DP_COPRO_DRV_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x1148,0x1148);\
			TRC_OUTPUT_16_LAST_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(DP_COPRO_DRV_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define LMAC_PATH_FULL_WARN(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define DPC_DRV_ASSERT_LOG(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L2(DP_COPRO_DRV_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v4,v4);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x1248,0x1248);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_32_LAST_WRAPPER_L2(cgen_local_v4,v4);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(DP_COPRO_DRV_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define DPC_DRV_ASSERT_LOG(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define DPC_META_QUERY_LOG(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L2(DP_COPRO_DRV_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v4,v4);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x1348,0x1348);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_16_LAST_WRAPPER_L2(cgen_local_v4,v4);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(DP_COPRO_DRV_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define DPC_META_QUERY_LOG(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define DPC_META_REL_LOG(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L2(DP_COPRO_DRV_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v4,v4);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x1448,0x1448);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_16_LAST_WRAPPER_L2(cgen_local_v4,v4);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(DP_COPRO_DRV_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define DPC_META_REL_LOG(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define DPC_META_CK_DONE_LOG(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L2(DP_COPRO_DRV_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v3,v3);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x1548,0x1548);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_LAST_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(DP_COPRO_DRV_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define DPC_META_CK_DONE_LOG(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define DPC_META_PKT_INFO(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L2(DP_COPRO_DRV_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v4,v4);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x1648,0x1648);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_32_LAST_WRAPPER_L2(cgen_local_v4,v4);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(DP_COPRO_DRV_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define DPC_META_PKT_INFO(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define DPC_META_PKT_INFO_NC(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L2(DP_COPRO_DRV_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v3,v3);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x1748,0x1748);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_LAST_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(DP_COPRO_DRV_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define DPC_META_PKT_INFO_NC(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define DPC_META_CFG_FULL_IDX(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L2(DP_COPRO_DRV_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v3,v3);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x1848,0x1848);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_LAST_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(DP_COPRO_DRV_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define DPC_META_CFG_FULL_IDX(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define DPC_META_PWR_ON_DIS_Q(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L2(DP_COPRO_DRV_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x1948,0x1948);\
			TRC_OUTPUT_8_LAST_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(DP_COPRO_DRV_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define DPC_META_PWR_ON_DIS_Q(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define DPC_META_RE_EN_Q(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L2(DP_COPRO_DRV_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x1A48,0x1A48);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(DP_COPRO_DRV_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define DPC_META_RE_EN_Q(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define DPC_QP_TRIG_LOG(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L2(DP_COPRO_DRV_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v4,v4);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x1B48,0x1B48);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_16_LAST_WRAPPER_L2(cgen_local_v4,v4);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(DP_COPRO_DRV_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define DPC_QP_TRIG_LOG(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define DPC_3G_INFO(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L2(DP_COPRO_DRV_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v4,v4);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x1C48,0x1C48);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_32_LAST_WRAPPER_L2(cgen_local_v4,v4);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(DP_COPRO_DRV_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define DPC_3G_INFO(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define DPC_QP_REL_IDX_NO_CH(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L2(DP_COPRO_DRV_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v4,v4);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x1D48,0x1D48);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_8_LAST_WRAPPER_L2(cgen_local_v4,v4);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(DP_COPRO_DRV_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define DPC_QP_REL_IDX_NO_CH(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define DPC_REL_CLS_ALL_TLB(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L2(DP_COPRO_DRV_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v4,v4);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x1E48,0x1E48);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_32_LAST_WRAPPER_L2(cgen_local_v4,v4);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(DP_COPRO_DRV_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define DPC_REL_CLS_ALL_TLB(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define DPC_ADD_BUF_SIZE(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L2(DP_COPRO_DRV_Trace_Filter, 1, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x1F48,0x1F48);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(DP_COPRO_DRV_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define DPC_ADD_BUF_SIZE(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define DPC_WAKEUP_AP(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L2(DP_COPRO_DRV_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x2048,0x2048);\
			TRC_OUTPUT_16_LAST_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(DP_COPRO_DRV_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define DPC_WAKEUP_AP(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define DPC_4UDR_LONG_DIFF(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L2(DP_COPRO_DRV_Trace_Filter, 1, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v3,v3);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x2148,0x2148);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_LAST_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(DP_COPRO_DRV_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define DPC_4UDR_LONG_DIFF(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define DPC_DRV_EXT_LOG(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L2(DP_COPRO_DRV_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v4,v4);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x2248,0x2248);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_32_LAST_WRAPPER_L2(cgen_local_v4,v4);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(DP_COPRO_DRV_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define DPC_DRV_EXT_LOG(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define DPC_3G_DL_MAC_NOT_READY() do {\
		{\
			TRC_START_FILTER_CHECK_L2(DP_COPRO_DRV_Trace_Filter, 1, 0x04);\
			TRC_START_FILL_L2();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L2(0x2348,0x2348);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(DP_COPRO_DRV_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define DPC_3G_DL_MAC_NOT_READY()
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define DPC_RATDM(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L2(DP_COPRO_DRV_Trace_Filter, 1, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v3,v3);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x2448,0x2448);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_32_LAST_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(DP_COPRO_DRV_Trace_Filter, 1, 0x10);\
		}\
	} while(0)
#else
	#define DPC_RATDM(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define DPC_DID_HEAD(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L2(DP_COPRO_DRV_Trace_Filter, 1, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v3,v3);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x2548,0x2548);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_32_LAST_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(DP_COPRO_DRV_Trace_Filter, 1, 0x10);\
		}\
	} while(0)
#else
	#define DPC_DID_HEAD(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define DPC_DID_SEG0(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L2(DP_COPRO_DRV_Trace_Filter, 1, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v4,v4);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x2648,0x2648);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_32_LAST_WRAPPER_L2(cgen_local_v4,v4);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(DP_COPRO_DRV_Trace_Filter, 1, 0x10);\
		}\
	} while(0)
#else
	#define DPC_DID_SEG0(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define DPC_DID_SEG1(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L2(DP_COPRO_DRV_Trace_Filter, 1, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v4,v4);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x2748,0x2748);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_32_LAST_WRAPPER_L2(cgen_local_v4,v4);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(DP_COPRO_DRV_Trace_Filter, 1, 0x10);\
		}\
	} while(0)
#else
	#define DPC_DID_SEG1(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define DPC_3G_DL_DID_ALOC_NULL() do {\
		{\
			TRC_START_FILTER_CHECK_L2(DP_COPRO_DRV_Trace_Filter, 1, 0x04);\
			TRC_START_FILL_L2();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L2(0x2848,0x2848);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(DP_COPRO_DRV_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define DPC_3G_DL_DID_ALOC_NULL()
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define DPC_3D_DL_MAC_ALOC_ADDR(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L2(DP_COPRO_DRV_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x2948,0x2948);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(DP_COPRO_DRV_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define DPC_3D_DL_MAC_ALOC_ADDR(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define DPC_3G_BC_DIR_DROP(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L2(DP_COPRO_DRV_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v3,v3);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x2A48,0x2A48);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_32_LAST_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(DP_COPRO_DRV_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define DPC_3G_BC_DIR_DROP(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define DPC_3G_BC_DIR_SKIP(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L2(DP_COPRO_DRV_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v3,v3);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x2B48,0x2B48);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_32_LAST_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(DP_COPRO_DRV_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define DPC_3G_BC_DIR_SKIP(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define DPC_DESC_STATIS(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L2(DP_COPRO_DRV_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x2C48,0x2C48);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(DP_COPRO_DRV_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define DPC_DESC_STATIS(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define DPC_META_STATIS(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L2(DP_COPRO_DRV_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x2D48,0x2D48);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(DP_COPRO_DRV_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define DPC_META_STATIS(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define DPC_VRB_STATIS(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L2(DP_COPRO_DRV_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x2E48,0x2E48);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(DP_COPRO_DRV_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define DPC_VRB_STATIS(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define DPC_TASK_STATE(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L2(DP_COPRO_DRV_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x2F48,0x2F48);\
			TRC_OUTPUT_8_LAST_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(DP_COPRO_DRV_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define DPC_TASK_STATE(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define LMAC_HARQ_RESET_LOG(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L2(DP_COPRO_DRV_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v4,v4);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x3048,0x3048);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_8_LAST_WRAPPER_L2(cgen_local_v4,v4);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(DP_COPRO_DRV_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define LMAC_HARQ_RESET_LOG(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define LMAC_HARQ_QUERY_0(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L2(DP_COPRO_DRV_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v4,v4);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x3148,0x3148);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_8_LAST_WRAPPER_L2(cgen_local_v4,v4);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(DP_COPRO_DRV_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define LMAC_HARQ_QUERY_0(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define LMAC_HARQ_QUERY_1(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L2(DP_COPRO_DRV_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x3248,0x3248);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(DP_COPRO_DRV_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define LMAC_HARQ_QUERY_1(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define DPC_3G_RCV_SIM_IDX(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L2(DP_COPRO_DRV_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x3348,0x3348);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(DP_COPRO_DRV_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define DPC_3G_RCV_SIM_IDX(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define DPC_3G_PASS_SIM_IDX_INDIR(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L2(DP_COPRO_DRV_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x3448,0x3448);\
			TRC_OUTPUT_16_LAST_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(DP_COPRO_DRV_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define DPC_3G_PASS_SIM_IDX_INDIR(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define DPC_3G_PASS_SIM_IDX_DIR(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L2(DP_COPRO_DRV_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x3548,0x3548);\
			TRC_OUTPUT_16_LAST_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(DP_COPRO_DRV_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define DPC_3G_PASS_SIM_IDX_DIR(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define DPC_NO_REALOC_FAIL_CB(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L2(DP_COPRO_DRV_Trace_Filter, 1, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v3,v3);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x3648,0x3648);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_LAST_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(DP_COPRO_DRV_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define DPC_NO_REALOC_FAIL_CB(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define LHIF_DEV_TRC_INIT(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L2(DP_COPRO_DRV_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x3748,0x3748);\
			TRC_OUTPUT_32_LAST_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(DP_COPRO_DRV_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define LHIF_DEV_TRC_INIT(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define LHIF_DEV_TRC_POWER_DOWN(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L2(DP_COPRO_DRV_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x3848,0x3848);\
			TRC_OUTPUT_32_LAST_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(DP_COPRO_DRV_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define LHIF_DEV_TRC_POWER_DOWN(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define LHIF_DEV_TRC_POWER_AP_MD_ON(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L2(DP_COPRO_DRV_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x3948,0x3948);\
			TRC_OUTPUT_32_LAST_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(DP_COPRO_DRV_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define LHIF_DEV_TRC_POWER_AP_MD_ON(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define LHIF_DEV_TRC_POWER_MD_MD_ON(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L2(DP_COPRO_DRV_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x3A48,0x3A48);\
			TRC_OUTPUT_32_LAST_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(DP_COPRO_DRV_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define LHIF_DEV_TRC_POWER_MD_MD_ON(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define LHIF_DEV_TRC_POWER_NONEED_AP_MD_ON(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L2(DP_COPRO_DRV_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x3B48,0x3B48);\
			TRC_OUTPUT_32_LAST_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(DP_COPRO_DRV_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define LHIF_DEV_TRC_POWER_NONEED_AP_MD_ON(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define LHIF_DEV_TRC_POWER_NONEED_MD_MD_ON(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L2(DP_COPRO_DRV_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x3C48,0x3C48);\
			TRC_OUTPUT_32_LAST_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(DP_COPRO_DRV_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define LHIF_DEV_TRC_POWER_NONEED_MD_MD_ON(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define LHIF_DEV_TRC_LHIFCORE_CB_DONE(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L2(DP_COPRO_DRV_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x3D48,0x3D48);\
			TRC_OUTPUT_32_LAST_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(DP_COPRO_DRV_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define LHIF_DEV_TRC_LHIFCORE_CB_DONE(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define LHIF_DEV_TRC_LHIFCORE_NOCB_DONE(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L2(DP_COPRO_DRV_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x3E48,0x3E48);\
			TRC_OUTPUT_32_LAST_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(DP_COPRO_DRV_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define LHIF_DEV_TRC_LHIFCORE_NOCB_DONE(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define LHIF_DRV_TRC_ASSERT_LOG(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L2(DP_COPRO_DRV_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v3,v3);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x3F48,0x3F48);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_32_LAST_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(DP_COPRO_DRV_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define LHIF_DRV_TRC_ASSERT_LOG(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define LHIF_DEV_TRC_REG_L2EVENT(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L2(DP_COPRO_DRV_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x4048,0x4048);\
			TRC_OUTPUT_32_LAST_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(DP_COPRO_DRV_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define LHIF_DEV_TRC_REG_L2EVENT(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define LHIF_DEV_TRC_REG_L2CB_LHIF(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L2(DP_COPRO_DRV_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x4148,0x4148);\
			TRC_OUTPUT_32_LAST_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(DP_COPRO_DRV_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define LHIF_DEV_TRC_REG_L2CB_LHIF(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define DPC_IPF_PN_MATCH_ENT_SET(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L2(DP_COPRO_DRV_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v3,v3);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x4248,0x4248);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_32_LAST_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(DP_COPRO_DRV_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define DPC_IPF_PN_MATCH_ENT_SET(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define DPC_IPF_PN_NCID_SET(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L2(DP_COPRO_DRV_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x4348,0x4348);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(DP_COPRO_DRV_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define DPC_IPF_PN_NCID_SET(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define DPC_IPF_FILTER_UPDATE(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L2(DP_COPRO_DRV_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x4448,0x4448);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(DP_COPRO_DRV_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define DPC_IPF_FILTER_UPDATE(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define DPC_IPF_TETHERING_SET(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L2(DP_COPRO_DRV_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x4548,0x4548);\
			TRC_OUTPUT_32_LAST_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(DP_COPRO_DRV_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define DPC_IPF_TETHERING_SET(v1)
#endif



/*******************************/
/* declaration of filter array */
/*******************************/
EXTERN_TMD_FILTER(unsigned char, DP_COPRO_DRV_Trace_Filter, 5);
/*************************/
/* Function declarations */
/*************************/
#ifdef L1_CATCHER

void Set_DP_COPRO_DRV_Filter(unsigned char *setting);

#endif

/************************************/
/* Filter checking API declarations */
/************************************/

#define ChkL1ModFltr_DP_COPRO_DRV()	(FILTER_CHECK(DP_COPRO_DRV_Trace_Filter, 0, 1))
#define ChkL1ClsFltr_DP_COPRO_DRV_DPC_LOG()	(ChkL1ModFltr_DP_COPRO_DRV()&&(FILTER_CHECK(DP_COPRO_DRV_Trace_Filter, 1, 0x01)))
#define ChkL1ClsFltr_DP_COPRO_DRV_DPC_BASIC()	(ChkL1ModFltr_DP_COPRO_DRV()&&(FILTER_CHECK(DP_COPRO_DRV_Trace_Filter, 1, 0x02)))
#define ChkL1ClsFltr_DP_COPRO_DRV_DPC_CORNER()	(ChkL1ModFltr_DP_COPRO_DRV()&&(FILTER_CHECK(DP_COPRO_DRV_Trace_Filter, 1, 0x04)))
#define ChkL1ClsFltr_DP_COPRO_DRV_DPC_VRB()	(ChkL1ModFltr_DP_COPRO_DRV()&&(FILTER_CHECK(DP_COPRO_DRV_Trace_Filter, 1, 0x08)))
#define ChkL1ClsFltr_DP_COPRO_DRV_Others()	(ChkL1ModFltr_DP_COPRO_DRV()&&(FILTER_CHECK(DP_COPRO_DRV_Trace_Filter, 1, 0x10)))
#define ChkL1MsgFltr_DPC_DRV_WARN()	ChkL1ClsFltr_DP_COPRO_DRV_DPC_LOG()
#define ChkL1MsgFltr_DPC_DRV_INFO()	ChkL1ClsFltr_DP_COPRO_DRV_DPC_LOG()
#define ChkL1MsgFltr_DPC_DRV_INFO_2()	ChkL1ClsFltr_DP_COPRO_DRV_DPC_LOG()
#define ChkL1MsgFltr_DPC_DRV_INFO_3()	ChkL1ClsFltr_DP_COPRO_DRV_DPC_LOG()
#define ChkL1MsgFltr_DPC_DRV_ERR_3()	ChkL1ClsFltr_DP_COPRO_DRV_DPC_LOG()
#define ChkL1MsgFltr_DPC_DRV_ERR_4()	ChkL1ClsFltr_DP_COPRO_DRV_DPC_LOG()
#define ChkL1MsgFltr_DPC_DRV_ERR()	ChkL1ClsFltr_DP_COPRO_DRV_DPC_LOG()
#define ChkL1MsgFltr_DPC_DRV_KT_SET()	ChkL1ClsFltr_DP_COPRO_DRV_DPC_LOG()
#define ChkL1MsgFltr_DPC_DRV_STAT_MAX_MIN()	ChkL1ClsFltr_DP_COPRO_DRV_DPC_LOG()
#define ChkL1MsgFltr_DPC_DRV_STAT_VOTE_2()	ChkL1ClsFltr_DP_COPRO_DRV_DPC_LOG()
#define ChkL1MsgFltr_DPC_DRV_STAT_VOTE_3()	ChkL1ClsFltr_DP_COPRO_DRV_DPC_LOG()
#define ChkL1MsgFltr_DPC_DRV_PWR_ABORT()	ChkL1ClsFltr_DP_COPRO_DRV_DPC_LOG()
#define ChkL1MsgFltr_DPC_COPRO_POW_DOWN()	ChkL1ClsFltr_DP_COPRO_DRV_DPC_LOG()
#define ChkL1MsgFltr_DPC_COPRO_POW_ON()	ChkL1ClsFltr_DP_COPRO_DRV_DPC_LOG()
#define ChkL1MsgFltr_DPC_COPRO_WAIT_PWR_ST()	ChkL1ClsFltr_DP_COPRO_DRV_DPC_LOG()
#define ChkL1MsgFltr_DPC_PWR_ON_ST()	ChkL1ClsFltr_DP_COPRO_DRV_DPC_LOG()
#define ChkL1MsgFltr_DPC_PWR_DOWN_ST()	ChkL1ClsFltr_DP_COPRO_DRV_DPC_LOG()
#define ChkL1MsgFltr_LMAC_PATH_FULL_WARN()	ChkL1ClsFltr_DP_COPRO_DRV_DPC_LOG()
#define ChkL1MsgFltr_DPC_DRV_ASSERT_LOG()	ChkL1ClsFltr_DP_COPRO_DRV_DPC_LOG()
#define ChkL1MsgFltr_DPC_META_QUERY_LOG()	ChkL1ClsFltr_DP_COPRO_DRV_DPC_LOG()
#define ChkL1MsgFltr_DPC_META_REL_LOG()	ChkL1ClsFltr_DP_COPRO_DRV_DPC_LOG()
#define ChkL1MsgFltr_DPC_META_CK_DONE_LOG()	ChkL1ClsFltr_DP_COPRO_DRV_DPC_LOG()
#define ChkL1MsgFltr_DPC_META_PKT_INFO()	ChkL1ClsFltr_DP_COPRO_DRV_DPC_LOG()
#define ChkL1MsgFltr_DPC_META_PKT_INFO_NC()	ChkL1ClsFltr_DP_COPRO_DRV_DPC_LOG()
#define ChkL1MsgFltr_DPC_META_CFG_FULL_IDX()	ChkL1ClsFltr_DP_COPRO_DRV_DPC_LOG()
#define ChkL1MsgFltr_DPC_META_PWR_ON_DIS_Q()	ChkL1ClsFltr_DP_COPRO_DRV_DPC_LOG()
#define ChkL1MsgFltr_DPC_META_RE_EN_Q()	ChkL1ClsFltr_DP_COPRO_DRV_DPC_LOG()
#define ChkL1MsgFltr_DPC_QP_TRIG_LOG()	ChkL1ClsFltr_DP_COPRO_DRV_DPC_LOG()
#define ChkL1MsgFltr_DPC_3G_INFO()	ChkL1ClsFltr_DP_COPRO_DRV_DPC_LOG()
#define ChkL1MsgFltr_DPC_QP_REL_IDX_NO_CH()	ChkL1ClsFltr_DP_COPRO_DRV_DPC_LOG()
#define ChkL1MsgFltr_DPC_REL_CLS_ALL_TLB()	ChkL1ClsFltr_DP_COPRO_DRV_DPC_CORNER()
#define ChkL1MsgFltr_DPC_ADD_BUF_SIZE()	ChkL1ClsFltr_DP_COPRO_DRV_DPC_VRB()
#define ChkL1MsgFltr_DPC_WAKEUP_AP()	ChkL1ClsFltr_DP_COPRO_DRV_DPC_LOG()
#define ChkL1MsgFltr_DPC_4UDR_LONG_DIFF()	ChkL1ClsFltr_DP_COPRO_DRV_DPC_VRB()
#define ChkL1MsgFltr_DPC_DRV_EXT_LOG()	ChkL1ClsFltr_DP_COPRO_DRV_DPC_CORNER()
#define ChkL1MsgFltr_DPC_3G_DL_MAC_NOT_READY()	ChkL1ClsFltr_DP_COPRO_DRV_DPC_CORNER()
#define ChkL1MsgFltr_DPC_RATDM()	ChkL1ClsFltr_DP_COPRO_DRV_Others()
#define ChkL1MsgFltr_DPC_DID_HEAD()	ChkL1ClsFltr_DP_COPRO_DRV_Others()
#define ChkL1MsgFltr_DPC_DID_SEG0()	ChkL1ClsFltr_DP_COPRO_DRV_Others()
#define ChkL1MsgFltr_DPC_DID_SEG1()	ChkL1ClsFltr_DP_COPRO_DRV_Others()
#define ChkL1MsgFltr_DPC_3G_DL_DID_ALOC_NULL()	ChkL1ClsFltr_DP_COPRO_DRV_DPC_CORNER()
#define ChkL1MsgFltr_DPC_3D_DL_MAC_ALOC_ADDR()	ChkL1ClsFltr_DP_COPRO_DRV_DPC_LOG()
#define ChkL1MsgFltr_DPC_3G_BC_DIR_DROP()	ChkL1ClsFltr_DP_COPRO_DRV_DPC_LOG()
#define ChkL1MsgFltr_DPC_3G_BC_DIR_SKIP()	ChkL1ClsFltr_DP_COPRO_DRV_DPC_LOG()
#define ChkL1MsgFltr_DPC_DESC_STATIS()	ChkL1ClsFltr_DP_COPRO_DRV_DPC_LOG()
#define ChkL1MsgFltr_DPC_META_STATIS()	ChkL1ClsFltr_DP_COPRO_DRV_DPC_LOG()
#define ChkL1MsgFltr_DPC_VRB_STATIS()	ChkL1ClsFltr_DP_COPRO_DRV_DPC_LOG()
#define ChkL1MsgFltr_DPC_TASK_STATE()	ChkL1ClsFltr_DP_COPRO_DRV_DPC_LOG()
#define ChkL1MsgFltr_LMAC_HARQ_RESET_LOG()	ChkL1ClsFltr_DP_COPRO_DRV_DPC_LOG()
#define ChkL1MsgFltr_LMAC_HARQ_QUERY_0()	ChkL1ClsFltr_DP_COPRO_DRV_DPC_LOG()
#define ChkL1MsgFltr_LMAC_HARQ_QUERY_1()	ChkL1ClsFltr_DP_COPRO_DRV_DPC_LOG()
#define ChkL1MsgFltr_DPC_3G_RCV_SIM_IDX()	ChkL1ClsFltr_DP_COPRO_DRV_DPC_LOG()
#define ChkL1MsgFltr_DPC_3G_PASS_SIM_IDX_INDIR()	ChkL1ClsFltr_DP_COPRO_DRV_DPC_LOG()
#define ChkL1MsgFltr_DPC_3G_PASS_SIM_IDX_DIR()	ChkL1ClsFltr_DP_COPRO_DRV_DPC_LOG()
#define ChkL1MsgFltr_DPC_NO_REALOC_FAIL_CB()	ChkL1ClsFltr_DP_COPRO_DRV_DPC_VRB()
#define ChkL1MsgFltr_LHIF_DEV_TRC_INIT()	ChkL1ClsFltr_DP_COPRO_DRV_DPC_LOG()
#define ChkL1MsgFltr_LHIF_DEV_TRC_POWER_DOWN()	ChkL1ClsFltr_DP_COPRO_DRV_DPC_LOG()
#define ChkL1MsgFltr_LHIF_DEV_TRC_POWER_AP_MD_ON()	ChkL1ClsFltr_DP_COPRO_DRV_DPC_LOG()
#define ChkL1MsgFltr_LHIF_DEV_TRC_POWER_MD_MD_ON()	ChkL1ClsFltr_DP_COPRO_DRV_DPC_LOG()
#define ChkL1MsgFltr_LHIF_DEV_TRC_POWER_NONEED_AP_MD_ON()	ChkL1ClsFltr_DP_COPRO_DRV_DPC_LOG()
#define ChkL1MsgFltr_LHIF_DEV_TRC_POWER_NONEED_MD_MD_ON()	ChkL1ClsFltr_DP_COPRO_DRV_DPC_LOG()
#define ChkL1MsgFltr_LHIF_DEV_TRC_LHIFCORE_CB_DONE()	ChkL1ClsFltr_DP_COPRO_DRV_DPC_LOG()
#define ChkL1MsgFltr_LHIF_DEV_TRC_LHIFCORE_NOCB_DONE()	ChkL1ClsFltr_DP_COPRO_DRV_DPC_LOG()
#define ChkL1MsgFltr_LHIF_DRV_TRC_ASSERT_LOG()	ChkL1ClsFltr_DP_COPRO_DRV_DPC_LOG()
#define ChkL1MsgFltr_LHIF_DEV_TRC_REG_L2EVENT()	ChkL1ClsFltr_DP_COPRO_DRV_DPC_LOG()
#define ChkL1MsgFltr_LHIF_DEV_TRC_REG_L2CB_LHIF()	ChkL1ClsFltr_DP_COPRO_DRV_DPC_LOG()
#define ChkL1MsgFltr_DPC_IPF_PN_MATCH_ENT_SET()	ChkL1ClsFltr_DP_COPRO_DRV_DPC_LOG()
#define ChkL1MsgFltr_DPC_IPF_PN_NCID_SET()	ChkL1ClsFltr_DP_COPRO_DRV_DPC_LOG()
#define ChkL1MsgFltr_DPC_IPF_FILTER_UPDATE()	ChkL1ClsFltr_DP_COPRO_DRV_DPC_LOG()
#define ChkL1MsgFltr_DPC_IPF_TETHERING_SET()	ChkL1ClsFltr_DP_COPRO_DRV_DPC_LOG()


#endif
