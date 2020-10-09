#ifndef L1TRC_L1TAMR_DEF_H
#define L1TRC_L1TAMR_DEF_H

/******************************/
/* String category definition */
/******************************/


/****************************/
/* Message macro definition */
/****************************/
#include "L1Trc.h"
#if defined(L1_CATCHER)
	#define L1T_Trc_AMR_QI_INFO(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1TAMR_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0077,0x0077);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1TAMR_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define L1T_Trc_AMR_QI_INFO(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define L1T_Trc_AFS_EQ_CI(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1TAMR_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0177,0x0177);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1TAMR_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define L1T_Trc_AFS_EQ_CI(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define L1T_Trc_AHS_EQ_CI(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1TAMR_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0277,0x0277);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1TAMR_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define L1T_Trc_AHS_EQ_CI(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define L1T_Trc_AFS_EQ_RNV(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1TAMR_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0377,0x0377);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1TAMR_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define L1T_Trc_AFS_EQ_RNV(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define L1T_Trc_AHS_EQ_RNV(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1TAMR_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0477,0x0477);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1TAMR_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define L1T_Trc_AHS_EQ_RNV(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define L1T_Trc_AFS_ANT_DIV(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1TAMR_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0577,0x0577);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1TAMR_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define L1T_Trc_AFS_ANT_DIV(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define L1T_Trc_AHS_ANT_DIV(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1TAMR_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0677,0x0677);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1TAMR_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define L1T_Trc_AHS_ANT_DIV(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define L1T_Trc_AFS_ANT_26_DIV(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1TAMR_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0777,0x0777);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1TAMR_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define L1T_Trc_AFS_ANT_26_DIV(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define L1T_Trc_AHS_ANT_26_DIV(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1TAMR_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0877,0x0877);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1TAMR_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define L1T_Trc_AHS_ANT_26_DIV(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define L1T_Trc_AMR_CI_FILTER(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1TAMR_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0977,0x0977);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1TAMR_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define L1T_Trc_AMR_CI_FILTER(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define L1T_Trc_AMR_CI_FIT(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1TAMR_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0A77,0x0A77);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1TAMR_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define L1T_Trc_AMR_CI_FIT(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define L1T_Trc_AMR_RNV_FILTER(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1TAMR_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0B77,0x0B77);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1TAMR_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define L1T_Trc_AMR_RNV_FILTER(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define L1T_Trc_AMR_ANT_DIV_FILTER(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1TAMR_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0C77,0x0C77);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1TAMR_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define L1T_Trc_AMR_ANT_DIV_FILTER(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define L1T_Trc_AMR_CI_COMPEN(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1TAMR_Trace_Filter, 1, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0D77,0x0D77);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1TAMR_Trace_Filter, 1, 0x10);\
		}\
	} while(0)
#else
	#define L1T_Trc_AMR_CI_COMPEN(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define L1T_Trc_AMR_SAIC_FLAG(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1TAMR_Trace_Filter, 1, 0x20);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0E77,0x0E77);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1TAMR_Trace_Filter, 1, 0x20);\
		}\
	} while(0)
#else
	#define L1T_Trc_AMR_SAIC_FLAG(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define L1T_Trc_AMR_DSP_EQSOSUM(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1TAMR_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0F77,0x0F77);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1TAMR_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define L1T_Trc_AMR_DSP_EQSOSUM(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define L1T_Trc_AMR_DSP_EQSOFT(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1TAMR_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1077,0x1077);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1TAMR_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define L1T_Trc_AMR_DSP_EQSOFT(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define L1T_Trc_AMR_EQSOFT_FILTER(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1TAMR_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1177,0x1177);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1TAMR_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define L1T_Trc_AMR_EQSOFT_FILTER(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define L1T_Trc_AMR_ANTDIV_FILTER(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1TAMR_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1277,0x1277);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1TAMR_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define L1T_Trc_AMR_ANTDIV_FILTER(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define L1T_Trc_AMR_DSP_C_VALUE(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1TAMR_Trace_Filter, 1, 0x20);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1377,0x1377);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1TAMR_Trace_Filter, 1, 0x20);\
		}\
	} while(0)
#else
	#define L1T_Trc_AMR_DSP_C_VALUE(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define L1T_Trc_AMR_C_VALUE_FILTER(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1TAMR_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1477,0x1477);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1TAMR_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define L1T_Trc_AMR_C_VALUE_FILTER(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define L1T_Trc_AMR_QI_MAPPING(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1TAMR_Trace_Filter, 1, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1577,0x1577);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1TAMR_Trace_Filter, 1, 0x10);\
		}\
	} while(0)
#else
	#define L1T_Trc_AMR_QI_MAPPING(v1, v2, v3)
#endif



/*******************************/
/* declaration of filter array */
/*******************************/
EXTERN_TMD_FILTER(unsigned char, L1TAMR_Trace_Filter, 5);
/*************************/
/* Function declarations */
/*************************/
#ifdef L1_CATCHER

void Set_L1TAMR_Filter(unsigned char *setting);

#endif

/************************************/
/* Filter checking API declarations */
/************************************/

#define ChkL1ModFltr_L1TAMR()	(FILTER_CHECK(L1TAMR_Trace_Filter, 0, 1))
#define ChkL1ClsFltr_L1TAMR_AMR_QI_INFO_H()	(ChkL1ModFltr_L1TAMR()&&(FILTER_CHECK(L1TAMR_Trace_Filter, 1, 0x01)))
#define ChkL1ClsFltr_L1TAMR_AMR_QI_INPUT_M()	(ChkL1ModFltr_L1TAMR()&&(FILTER_CHECK(L1TAMR_Trace_Filter, 1, 0x02)))
#define ChkL1ClsFltr_L1TAMR_AMR_QI_FILTER_M()	(ChkL1ModFltr_L1TAMR()&&(FILTER_CHECK(L1TAMR_Trace_Filter, 1, 0x04)))
#define ChkL1ClsFltr_L1TAMR_AMR_QI_COMPEN_M()	(ChkL1ModFltr_L1TAMR()&&(FILTER_CHECK(L1TAMR_Trace_Filter, 1, 0x08)))
#define ChkL1ClsFltr_L1TAMR_AMR_QI_COMPEN_H()	(ChkL1ModFltr_L1TAMR()&&(FILTER_CHECK(L1TAMR_Trace_Filter, 1, 0x10)))
#define ChkL1ClsFltr_L1TAMR_AMR_QI_INPUT_H()	(ChkL1ModFltr_L1TAMR()&&(FILTER_CHECK(L1TAMR_Trace_Filter, 1, 0x20)))
#define ChkL1MsgFltr_L1T_Trc_AMR_QI_INFO()	ChkL1ClsFltr_L1TAMR_AMR_QI_INFO_H()
#define ChkL1MsgFltr_L1T_Trc_AFS_EQ_CI()	ChkL1ClsFltr_L1TAMR_AMR_QI_INPUT_M()
#define ChkL1MsgFltr_L1T_Trc_AHS_EQ_CI()	ChkL1ClsFltr_L1TAMR_AMR_QI_INPUT_M()
#define ChkL1MsgFltr_L1T_Trc_AFS_EQ_RNV()	ChkL1ClsFltr_L1TAMR_AMR_QI_INPUT_M()
#define ChkL1MsgFltr_L1T_Trc_AHS_EQ_RNV()	ChkL1ClsFltr_L1TAMR_AMR_QI_INPUT_M()
#define ChkL1MsgFltr_L1T_Trc_AFS_ANT_DIV()	ChkL1ClsFltr_L1TAMR_AMR_QI_INPUT_M()
#define ChkL1MsgFltr_L1T_Trc_AHS_ANT_DIV()	ChkL1ClsFltr_L1TAMR_AMR_QI_INPUT_M()
#define ChkL1MsgFltr_L1T_Trc_AFS_ANT_26_DIV()	ChkL1ClsFltr_L1TAMR_AMR_QI_INPUT_M()
#define ChkL1MsgFltr_L1T_Trc_AHS_ANT_26_DIV()	ChkL1ClsFltr_L1TAMR_AMR_QI_INPUT_M()
#define ChkL1MsgFltr_L1T_Trc_AMR_CI_FILTER()	ChkL1ClsFltr_L1TAMR_AMR_QI_FILTER_M()
#define ChkL1MsgFltr_L1T_Trc_AMR_CI_FIT()	ChkL1ClsFltr_L1TAMR_AMR_QI_FILTER_M()
#define ChkL1MsgFltr_L1T_Trc_AMR_RNV_FILTER()	ChkL1ClsFltr_L1TAMR_AMR_QI_FILTER_M()
#define ChkL1MsgFltr_L1T_Trc_AMR_ANT_DIV_FILTER()	ChkL1ClsFltr_L1TAMR_AMR_QI_FILTER_M()
#define ChkL1MsgFltr_L1T_Trc_AMR_CI_COMPEN()	ChkL1ClsFltr_L1TAMR_AMR_QI_COMPEN_H()
#define ChkL1MsgFltr_L1T_Trc_AMR_SAIC_FLAG()	ChkL1ClsFltr_L1TAMR_AMR_QI_INPUT_H()
#define ChkL1MsgFltr_L1T_Trc_AMR_DSP_EQSOSUM()	ChkL1ClsFltr_L1TAMR_AMR_QI_INPUT_M()
#define ChkL1MsgFltr_L1T_Trc_AMR_DSP_EQSOFT()	ChkL1ClsFltr_L1TAMR_AMR_QI_INPUT_M()
#define ChkL1MsgFltr_L1T_Trc_AMR_EQSOFT_FILTER()	ChkL1ClsFltr_L1TAMR_AMR_QI_FILTER_M()
#define ChkL1MsgFltr_L1T_Trc_AMR_ANTDIV_FILTER()	ChkL1ClsFltr_L1TAMR_AMR_QI_FILTER_M()
#define ChkL1MsgFltr_L1T_Trc_AMR_DSP_C_VALUE()	ChkL1ClsFltr_L1TAMR_AMR_QI_INPUT_H()
#define ChkL1MsgFltr_L1T_Trc_AMR_C_VALUE_FILTER()	ChkL1ClsFltr_L1TAMR_AMR_QI_FILTER_M()
#define ChkL1MsgFltr_L1T_Trc_AMR_QI_MAPPING()	ChkL1ClsFltr_L1TAMR_AMR_QI_COMPEN_H()


#endif
