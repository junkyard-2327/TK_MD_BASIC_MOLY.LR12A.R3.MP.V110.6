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
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x003A,0x003A);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x013A,0x013A);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x023A,0x023A);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x033A,0x033A);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x043A,0x043A);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x053A,0x053A);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x063A,0x063A);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x073A,0x073A);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x083A,0x083A);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x093A,0x093A);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x0A3A,0x0A3A);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x0B3A,0x0B3A);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x0C3A,0x0C3A);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x0D3A,0x0D3A);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x0E3A,0x0E3A);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x0F3A,0x0F3A);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x103A,0x103A);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x113A,0x113A);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x123A,0x123A);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x133A,0x133A);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x143A,0x143A);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x153A,0x153A);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x163A,0x163A);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x173A,0x173A);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x183A,0x183A);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x193A,0x193A);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x1A3A,0x1A3A);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x1B3A,0x1B3A);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x1C3A,0x1C3A);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x1D3A,0x1D3A);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x1E3A,0x1E3A);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x1F3A,0x1F3A);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x203A,0x203A);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x213A,0x213A);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x223A,0x223A);\
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
			TRC_OUTPUT_16_SINGLE_WRAPPER_L2(0x233A,0x233A);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x243A,0x243A);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x253A,0x253A);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x263A,0x263A);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x273A,0x273A);\
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
			TRC_OUTPUT_16_SINGLE_WRAPPER_L2(0x283A,0x283A);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x293A,0x293A);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x2A3A,0x2A3A);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x2B3A,0x2B3A);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x2C3A,0x2C3A);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x2D3A,0x2D3A);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x2E3A,0x2E3A);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x2F3A,0x2F3A);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x303A,0x303A);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x313A,0x313A);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x323A,0x323A);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x333A,0x333A);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x343A,0x343A);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x353A,0x353A);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x363A,0x363A);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x373A,0x373A);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x383A,0x383A);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x393A,0x393A);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x3A3A,0x3A3A);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x3B3A,0x3B3A);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x3C3A,0x3C3A);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x3D3A,0x3D3A);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x3E3A,0x3E3A);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x3F3A,0x3F3A);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x403A,0x403A);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x413A,0x413A);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x423A,0x423A);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x433A,0x433A);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x443A,0x443A);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x453A,0x453A);\
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
