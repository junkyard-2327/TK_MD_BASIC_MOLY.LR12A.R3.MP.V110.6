#ifndef L1TRC_DVFS_MD_1_DEF_H
#define L1TRC_DVFS_MD_1_DEF_H

/******************************/
/* String category definition */
/******************************/
#define DVFS_MD_Dump_Description_String(v1)  (unsigned char)(v1+0)


/****************************/
/* Message macro definition */
/****************************/
#include "L1Trc.h"
#if defined(L1_CATCHER)
	#define DVFS_MD_TRC_PRE_CTRL_SET_SCEN_INVALID_RRC_USER(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(DVFS_MD_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0039,0x0039);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(DVFS_MD_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define DVFS_MD_TRC_PRE_CTRL_SET_SCEN_INVALID_RRC_USER(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define DVFS_MD_TRC_PRE_CTRL_SET_SCEN_INVALID_RRC_SCEN(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(DVFS_MD_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0139,0x0139);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(DVFS_MD_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define DVFS_MD_TRC_PRE_CTRL_SET_SCEN_INVALID_RRC_SCEN(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define DVFS_MD_TRC_PRE_CTRL_SET_SCEN_UP(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L1(DVFS_MD_1_Trace_Filter, 1, 0x01);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0239,0x0239);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(DVFS_MD_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define DVFS_MD_TRC_PRE_CTRL_SET_SCEN_UP(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER)
	#define DVFS_MD_TRC_PRE_CTRL_SET_SCEN_NOP(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L1(DVFS_MD_1_Trace_Filter, 1, 0x01);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0339,0x0339);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(DVFS_MD_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define DVFS_MD_TRC_PRE_CTRL_SET_SCEN_NOP(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER)
	#define DVFS_MD_TRC_POST_CTRL_SET_SCEN_INVALID_RRC_USER(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(DVFS_MD_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0439,0x0439);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(DVFS_MD_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define DVFS_MD_TRC_POST_CTRL_SET_SCEN_INVALID_RRC_USER(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define DVFS_MD_TRC_POST_CTRL_SET_SCEN_INVALID_RRC_SCEN(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(DVFS_MD_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0539,0x0539);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(DVFS_MD_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define DVFS_MD_TRC_POST_CTRL_SET_SCEN_INVALID_RRC_SCEN(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define DVFS_MD_TRC_POST_CTRL_SET_SCEN_DOWN(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L1(DVFS_MD_1_Trace_Filter, 1, 0x01);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0639,0x0639);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(DVFS_MD_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define DVFS_MD_TRC_POST_CTRL_SET_SCEN_DOWN(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER)
	#define DVFS_MD_TRC_POST_CTRL_SET_SCEN_NOP(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L1(DVFS_MD_1_Trace_Filter, 1, 0x01);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0739,0x0739);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(DVFS_MD_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define DVFS_MD_TRC_POST_CTRL_SET_SCEN_NOP(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER)
	#define DVFS_MD_TRC_SET_SCEN_INVALID_USER(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(DVFS_MD_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0839,0x0839);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(DVFS_MD_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define DVFS_MD_TRC_SET_SCEN_INVALID_USER(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define DVFS_MD_TRC_SET_SCEN_INVALID_SCEN(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(DVFS_MD_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0939,0x0939);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(DVFS_MD_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define DVFS_MD_TRC_SET_SCEN_INVALID_SCEN(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define DVFS_MD_TRC_SET_SCEN_DO(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L1(DVFS_MD_1_Trace_Filter, 1, 0x01);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0A39,0x0A39);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(DVFS_MD_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define DVFS_MD_TRC_SET_SCEN_DO(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER)
	#define DVFS_MD_TRC_SET_SCEN_NOP(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L1(DVFS_MD_1_Trace_Filter, 1, 0x01);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0B39,0x0B39);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(DVFS_MD_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define DVFS_MD_TRC_SET_SCEN_NOP(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER)
	#define DVFS_MD_TRC_GET_SCEN_INVALID_USER(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(DVFS_MD_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0C39,0x0C39);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(DVFS_MD_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define DVFS_MD_TRC_GET_SCEN_INVALID_USER(v1)
#endif

#if defined(L1_CATCHER)
	#define DVFS_MD_TRC_GET_SCEN(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(DVFS_MD_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0D39,0x0D39);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(DVFS_MD_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define DVFS_MD_TRC_GET_SCEN(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define DVFS_MD_TRC_CHECK_SCEN_INVALID_USER(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(DVFS_MD_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0E39,0x0E39);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(DVFS_MD_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define DVFS_MD_TRC_CHECK_SCEN_INVALID_USER(v1)
#endif

#if defined(L1_CATCHER)
	#define DVFS_MD_TRC_CHECK_SCEN_INVALID_SCEN(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(DVFS_MD_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0F39,0x0F39);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(DVFS_MD_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define DVFS_MD_TRC_CHECK_SCEN_INVALID_SCEN(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define DVFS_MD_TRC_CHECK_SCEN_NG_SW_GEAR(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(DVFS_MD_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1039,0x1039);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(DVFS_MD_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define DVFS_MD_TRC_CHECK_SCEN_NG_SW_GEAR(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define DVFS_MD_TRC_CHECK_SCEN_NG_HW_GEAR(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(DVFS_MD_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1139,0x1139);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(DVFS_MD_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define DVFS_MD_TRC_CHECK_SCEN_NG_HW_GEAR(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define DVFS_MD_TRC_CHECK_SCEN_OK(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(DVFS_MD_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1239,0x1239);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(DVFS_MD_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define DVFS_MD_TRC_CHECK_SCEN_OK(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define DVFS_MD_TRC_MIPS_GET_GEAR(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(DVFS_MD_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1339,0x1339);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(DVFS_MD_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define DVFS_MD_TRC_MIPS_GET_GEAR(v1)
#endif

#if defined(L1_CATCHER)
	#define DVFS_MD_TRC_MIPS_GET_FREQ(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(DVFS_MD_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1439,0x1439);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(DVFS_MD_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define DVFS_MD_TRC_MIPS_GET_FREQ(v1)
#endif

#if defined(L1_CATCHER)
	#define DVFS_MD_TRC_DUMP_MIPS_USER(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L1(DVFS_MD_1_Trace_Filter, 1, 0x01);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1539,0x1539);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(DVFS_MD_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define DVFS_MD_TRC_DUMP_MIPS_USER(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER)
	#define DVFS_MD_TRC_DUMP_LOCK_STATE(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(DVFS_MD_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1639,0x1639);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(DVFS_MD_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define DVFS_MD_TRC_DUMP_LOCK_STATE(v1)
#endif

#if defined(L1_CATCHER)
	#define DVFS_MD_TRC_DUMP_MIPS_LOCKED() do {\
		{\
			TRC_START_FILTER_CHECK_L1(DVFS_MD_1_Trace_Filter, 1, 0x01);\
			TRC_START_FILL_L1();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L1(0x1739,0x1739);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(DVFS_MD_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define DVFS_MD_TRC_DUMP_MIPS_LOCKED()
#endif

#if defined(L1_CATCHER)
	#define DVFS_MD_TRC_DUMP_VMD_LOCKED() do {\
		{\
			TRC_START_FILTER_CHECK_L1(DVFS_MD_1_Trace_Filter, 1, 0x01);\
			TRC_START_FILL_L1();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L1(0x1839,0x1839);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(DVFS_MD_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define DVFS_MD_TRC_DUMP_VMD_LOCKED()
#endif

#if defined(L1_CATCHER)
	#define DVFS_MD_TRC_DUMP_VMODEM_LOCKED() do {\
		{\
			TRC_START_FILTER_CHECK_L1(DVFS_MD_1_Trace_Filter, 1, 0x01);\
			TRC_START_FILL_L1();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L1(0x1939,0x1939);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(DVFS_MD_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define DVFS_MD_TRC_DUMP_VMODEM_LOCKED()
#endif

#if defined(L1_CATCHER)
	#define DVFS_MD_TRC_DUMP_PTPM_LOCKED() do {\
		{\
			TRC_START_FILTER_CHECK_L1(DVFS_MD_1_Trace_Filter, 1, 0x01);\
			TRC_START_FILL_L1();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L1(0x1A39,0x1A39);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(DVFS_MD_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define DVFS_MD_TRC_DUMP_PTPM_LOCKED()
#endif

#if defined(L1_CATCHER)
	#define DVFS_MD_TRC_DUMP_MIPS_UNLOCKED() do {\
		{\
			TRC_START_FILTER_CHECK_L1(DVFS_MD_1_Trace_Filter, 1, 0x01);\
			TRC_START_FILL_L1();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L1(0x1B39,0x1B39);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(DVFS_MD_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define DVFS_MD_TRC_DUMP_MIPS_UNLOCKED()
#endif

#if defined(L1_CATCHER)
	#define DVFS_MD_TRC_DUMP_VMD_UNLOCKED() do {\
		{\
			TRC_START_FILTER_CHECK_L1(DVFS_MD_1_Trace_Filter, 1, 0x01);\
			TRC_START_FILL_L1();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L1(0x1C39,0x1C39);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(DVFS_MD_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define DVFS_MD_TRC_DUMP_VMD_UNLOCKED()
#endif

#if defined(L1_CATCHER)
	#define DVFS_MD_TRC_DUMP_VMODEM_UNLOCKED() do {\
		{\
			TRC_START_FILTER_CHECK_L1(DVFS_MD_1_Trace_Filter, 1, 0x01);\
			TRC_START_FILL_L1();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L1(0x1D39,0x1D39);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(DVFS_MD_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define DVFS_MD_TRC_DUMP_VMODEM_UNLOCKED()
#endif

#if defined(L1_CATCHER)
	#define DVFS_MD_TRC_DUMP_PTPM_UNLOCKED() do {\
		{\
			TRC_START_FILTER_CHECK_L1(DVFS_MD_1_Trace_Filter, 1, 0x01);\
			TRC_START_FILL_L1();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L1(0x1E39,0x1E39);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(DVFS_MD_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define DVFS_MD_TRC_DUMP_PTPM_UNLOCKED()
#endif

#if defined(L1_CATCHER)
	#define DVFS_MD_TRC_DUMP_DVFSCON_REG(v1, v2, v3, v4, v5, v6, v7) do {\
		{\
			TRC_START_FILTER_CHECK_L1(DVFS_MD_1_Trace_Filter, 1, 0x01);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1F39,0x1F39);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v7,v7);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(DVFS_MD_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define DVFS_MD_TRC_DUMP_DVFSCON_REG(v1, v2, v3, v4, v5, v6, v7)
#endif

#if defined(L1_CATCHER)
	#define DVFS_MD_TRC_DUMP_DVFSRC_REG(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12) do {\
		{\
			TRC_START_FILTER_CHECK_L1(DVFS_MD_1_Trace_Filter, 1, 0x01);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x2039,0x2039);\
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
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v12,v12);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(DVFS_MD_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define DVFS_MD_TRC_DUMP_DVFSRC_REG(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12)
#endif

#if defined(L1_CATCHER)
	#define DVFS_MD_TRC_PMIC_REG_READ(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(DVFS_MD_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x2139,0x2139);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(DVFS_MD_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define DVFS_MD_TRC_PMIC_REG_READ(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define DVFS_MD_TRC_PMIC_VMD1_READ(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(DVFS_MD_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x2239,0x2239);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(DVFS_MD_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define DVFS_MD_TRC_PMIC_VMD1_READ(v1)
#endif

#if defined(L1_CATCHER)
	#define DVFS_MD_TRC_PMIC_VMD1_WRITE(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(DVFS_MD_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x2339,0x2339);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(DVFS_MD_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define DVFS_MD_TRC_PMIC_VMD1_WRITE(v1)
#endif

#if defined(L1_CATCHER)
	#define DVFS_MD_TRC_PMIC_VMODEM_READ(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(DVFS_MD_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x2439,0x2439);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(DVFS_MD_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define DVFS_MD_TRC_PMIC_VMODEM_READ(v1)
#endif

#if defined(L1_CATCHER)
	#define DVFS_MD_TRC_PMIC_VMODEM_WRITE(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(DVFS_MD_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x2539,0x2539);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(DVFS_MD_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define DVFS_MD_TRC_PMIC_VMODEM_WRITE(v1)
#endif

#if defined(L1_CATCHER)
	#define DVFS_MD_TRC_PLL_FM_MDMCU_FREQ(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(DVFS_MD_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x2639,0x2639);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(DVFS_MD_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define DVFS_MD_TRC_PLL_FM_MDMCU_FREQ(v1)
#endif

#if defined(L1_CATCHER)
	#define DVFS_MD_TRC_PLL_FM_MDVDSP_FREQ(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(DVFS_MD_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x2739,0x2739);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(DVFS_MD_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define DVFS_MD_TRC_PLL_FM_MDVDSP_FREQ(v1)
#endif

#if defined(L1_CATCHER)
	#define DVFS_MD_TRC_PLL_FM_MDBRP_FREQ(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(DVFS_MD_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x2839,0x2839);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(DVFS_MD_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define DVFS_MD_TRC_PLL_FM_MDBRP_FREQ(v1)
#endif

#if defined(L1_CATCHER)
	#define DVFS_MD_TRC_PLL_FM_MDTX_FREQ(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(DVFS_MD_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x2939,0x2939);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(DVFS_MD_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define DVFS_MD_TRC_PLL_FM_MDTX_FREQ(v1)
#endif

#if defined(L1_CATCHER)
	#define DVFS_MD_TRC_SET_DATA_GEAR(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(DVFS_MD_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x2A39,0x2A39);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(DVFS_MD_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define DVFS_MD_TRC_SET_DATA_GEAR(v1)
#endif

#if defined(L1_CATCHER)
	#define DVFS_MD_TRC_PLL_INTR(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(DVFS_MD_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x2B39,0x2B39);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(DVFS_MD_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define DVFS_MD_TRC_PLL_INTR(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define DVFS_MD_TRC_PLL_INTR_FREQ(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L1(DVFS_MD_1_Trace_Filter, 1, 0x01);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x2C39,0x2C39);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(DVFS_MD_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define DVFS_MD_TRC_PLL_INTR_FREQ(v1, v2, v3, v4, v5)
#endif



/*******************************/
/* declaration of filter array */
/*******************************/
EXTERN_TMD_FILTER(unsigned char, DVFS_MD_1_Trace_Filter, 5);
/*************************/
/* Function declarations */
/*************************/
#ifdef L1_CATCHER

void Set_DVFS_MD_1_Filter(unsigned char *setting);

#endif

/************************************/
/* Filter checking API declarations */
/************************************/

#define ChkL1ModFltr_DVFS_MD_1()	(FILTER_CHECK(DVFS_MD_1_Trace_Filter, 0, 1))
#define ChkL1ClsFltr_DVFS_MD_1_DVFS_MD_H()	(ChkL1ModFltr_DVFS_MD_1()&&(FILTER_CHECK(DVFS_MD_1_Trace_Filter, 1, 0x01)))
#define ChkL1MsgFltr_DVFS_MD_TRC_PRE_CTRL_SET_SCEN_INVALID_RRC_USER()	ChkL1ClsFltr_DVFS_MD_1_DVFS_MD_H()
#define ChkL1MsgFltr_DVFS_MD_TRC_PRE_CTRL_SET_SCEN_INVALID_RRC_SCEN()	ChkL1ClsFltr_DVFS_MD_1_DVFS_MD_H()
#define ChkL1MsgFltr_DVFS_MD_TRC_PRE_CTRL_SET_SCEN_UP()	ChkL1ClsFltr_DVFS_MD_1_DVFS_MD_H()
#define ChkL1MsgFltr_DVFS_MD_TRC_PRE_CTRL_SET_SCEN_NOP()	ChkL1ClsFltr_DVFS_MD_1_DVFS_MD_H()
#define ChkL1MsgFltr_DVFS_MD_TRC_POST_CTRL_SET_SCEN_INVALID_RRC_USER()	ChkL1ClsFltr_DVFS_MD_1_DVFS_MD_H()
#define ChkL1MsgFltr_DVFS_MD_TRC_POST_CTRL_SET_SCEN_INVALID_RRC_SCEN()	ChkL1ClsFltr_DVFS_MD_1_DVFS_MD_H()
#define ChkL1MsgFltr_DVFS_MD_TRC_POST_CTRL_SET_SCEN_DOWN()	ChkL1ClsFltr_DVFS_MD_1_DVFS_MD_H()
#define ChkL1MsgFltr_DVFS_MD_TRC_POST_CTRL_SET_SCEN_NOP()	ChkL1ClsFltr_DVFS_MD_1_DVFS_MD_H()
#define ChkL1MsgFltr_DVFS_MD_TRC_SET_SCEN_INVALID_USER()	ChkL1ClsFltr_DVFS_MD_1_DVFS_MD_H()
#define ChkL1MsgFltr_DVFS_MD_TRC_SET_SCEN_INVALID_SCEN()	ChkL1ClsFltr_DVFS_MD_1_DVFS_MD_H()
#define ChkL1MsgFltr_DVFS_MD_TRC_SET_SCEN_DO()	ChkL1ClsFltr_DVFS_MD_1_DVFS_MD_H()
#define ChkL1MsgFltr_DVFS_MD_TRC_SET_SCEN_NOP()	ChkL1ClsFltr_DVFS_MD_1_DVFS_MD_H()
#define ChkL1MsgFltr_DVFS_MD_TRC_GET_SCEN_INVALID_USER()	ChkL1ClsFltr_DVFS_MD_1_DVFS_MD_H()
#define ChkL1MsgFltr_DVFS_MD_TRC_GET_SCEN()	ChkL1ClsFltr_DVFS_MD_1_DVFS_MD_H()
#define ChkL1MsgFltr_DVFS_MD_TRC_CHECK_SCEN_INVALID_USER()	ChkL1ClsFltr_DVFS_MD_1_DVFS_MD_H()
#define ChkL1MsgFltr_DVFS_MD_TRC_CHECK_SCEN_INVALID_SCEN()	ChkL1ClsFltr_DVFS_MD_1_DVFS_MD_H()
#define ChkL1MsgFltr_DVFS_MD_TRC_CHECK_SCEN_NG_SW_GEAR()	ChkL1ClsFltr_DVFS_MD_1_DVFS_MD_H()
#define ChkL1MsgFltr_DVFS_MD_TRC_CHECK_SCEN_NG_HW_GEAR()	ChkL1ClsFltr_DVFS_MD_1_DVFS_MD_H()
#define ChkL1MsgFltr_DVFS_MD_TRC_CHECK_SCEN_OK()	ChkL1ClsFltr_DVFS_MD_1_DVFS_MD_H()
#define ChkL1MsgFltr_DVFS_MD_TRC_MIPS_GET_GEAR()	ChkL1ClsFltr_DVFS_MD_1_DVFS_MD_H()
#define ChkL1MsgFltr_DVFS_MD_TRC_MIPS_GET_FREQ()	ChkL1ClsFltr_DVFS_MD_1_DVFS_MD_H()
#define ChkL1MsgFltr_DVFS_MD_TRC_DUMP_MIPS_USER()	ChkL1ClsFltr_DVFS_MD_1_DVFS_MD_H()
#define ChkL1MsgFltr_DVFS_MD_TRC_DUMP_LOCK_STATE()	ChkL1ClsFltr_DVFS_MD_1_DVFS_MD_H()
#define ChkL1MsgFltr_DVFS_MD_TRC_DUMP_MIPS_LOCKED()	ChkL1ClsFltr_DVFS_MD_1_DVFS_MD_H()
#define ChkL1MsgFltr_DVFS_MD_TRC_DUMP_VMD_LOCKED()	ChkL1ClsFltr_DVFS_MD_1_DVFS_MD_H()
#define ChkL1MsgFltr_DVFS_MD_TRC_DUMP_VMODEM_LOCKED()	ChkL1ClsFltr_DVFS_MD_1_DVFS_MD_H()
#define ChkL1MsgFltr_DVFS_MD_TRC_DUMP_PTPM_LOCKED()	ChkL1ClsFltr_DVFS_MD_1_DVFS_MD_H()
#define ChkL1MsgFltr_DVFS_MD_TRC_DUMP_MIPS_UNLOCKED()	ChkL1ClsFltr_DVFS_MD_1_DVFS_MD_H()
#define ChkL1MsgFltr_DVFS_MD_TRC_DUMP_VMD_UNLOCKED()	ChkL1ClsFltr_DVFS_MD_1_DVFS_MD_H()
#define ChkL1MsgFltr_DVFS_MD_TRC_DUMP_VMODEM_UNLOCKED()	ChkL1ClsFltr_DVFS_MD_1_DVFS_MD_H()
#define ChkL1MsgFltr_DVFS_MD_TRC_DUMP_PTPM_UNLOCKED()	ChkL1ClsFltr_DVFS_MD_1_DVFS_MD_H()
#define ChkL1MsgFltr_DVFS_MD_TRC_DUMP_DVFSCON_REG()	ChkL1ClsFltr_DVFS_MD_1_DVFS_MD_H()
#define ChkL1MsgFltr_DVFS_MD_TRC_DUMP_DVFSRC_REG()	ChkL1ClsFltr_DVFS_MD_1_DVFS_MD_H()
#define ChkL1MsgFltr_DVFS_MD_TRC_PMIC_REG_READ()	ChkL1ClsFltr_DVFS_MD_1_DVFS_MD_H()
#define ChkL1MsgFltr_DVFS_MD_TRC_PMIC_VMD1_READ()	ChkL1ClsFltr_DVFS_MD_1_DVFS_MD_H()
#define ChkL1MsgFltr_DVFS_MD_TRC_PMIC_VMD1_WRITE()	ChkL1ClsFltr_DVFS_MD_1_DVFS_MD_H()
#define ChkL1MsgFltr_DVFS_MD_TRC_PMIC_VMODEM_READ()	ChkL1ClsFltr_DVFS_MD_1_DVFS_MD_H()
#define ChkL1MsgFltr_DVFS_MD_TRC_PMIC_VMODEM_WRITE()	ChkL1ClsFltr_DVFS_MD_1_DVFS_MD_H()
#define ChkL1MsgFltr_DVFS_MD_TRC_PLL_FM_MDMCU_FREQ()	ChkL1ClsFltr_DVFS_MD_1_DVFS_MD_H()
#define ChkL1MsgFltr_DVFS_MD_TRC_PLL_FM_MDVDSP_FREQ()	ChkL1ClsFltr_DVFS_MD_1_DVFS_MD_H()
#define ChkL1MsgFltr_DVFS_MD_TRC_PLL_FM_MDBRP_FREQ()	ChkL1ClsFltr_DVFS_MD_1_DVFS_MD_H()
#define ChkL1MsgFltr_DVFS_MD_TRC_PLL_FM_MDTX_FREQ()	ChkL1ClsFltr_DVFS_MD_1_DVFS_MD_H()
#define ChkL1MsgFltr_DVFS_MD_TRC_SET_DATA_GEAR()	ChkL1ClsFltr_DVFS_MD_1_DVFS_MD_H()
#define ChkL1MsgFltr_DVFS_MD_TRC_PLL_INTR()	ChkL1ClsFltr_DVFS_MD_1_DVFS_MD_H()
#define ChkL1MsgFltr_DVFS_MD_TRC_PLL_INTR_FREQ()	ChkL1ClsFltr_DVFS_MD_1_DVFS_MD_H()


#endif
