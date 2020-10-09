#ifndef L1TRC_ERLCDL_DEF_H
#define L1TRC_ERLCDL_DEF_H

/******************************/
/* String category definition */
/******************************/


/****************************/
/* Message macro definition */
/****************************/
#include "L1Trc.h"
#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define ERLCDL_LOG_INIT() do {\
		{\
			TRC_START_FILTER_CHECK_L2(ERLCDL_Trace_Filter, 1, 0x01);\
			TRC_START_FILL_L2();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L2(0x0017,0x0017);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(ERLCDL_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define ERLCDL_LOG_INIT()
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define ERLCDL_LOG_VOLTE_RB_NTF(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L2(ERLCDL_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v4,v4);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x0117,0x0117);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_8_LAST_WRAPPER_L2(cgen_local_v4,v4);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(ERLCDL_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define ERLCDL_LOG_VOLTE_RB_NTF(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define ERLCDL_LOG_INVALID_PID(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L2(ERLCDL_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x0217,0x0217);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(ERLCDL_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define ERLCDL_LOG_INVALID_PID(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define ERLCDL_LOG_RB_APP_NTF(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L2(ERLCDL_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x0317,0x0317);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(ERLCDL_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define ERLCDL_LOG_RB_APP_NTF(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define ERLCDL_LOG_MBMS_SUSPEND(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L2(ERLCDL_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x0417,0x0417);\
			TRC_OUTPUT_32_LAST_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(ERLCDL_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define ERLCDL_LOG_MBMS_SUSPEND(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define ERLCDL_LOG_MBMS_SUSPEND_SKIP() do {\
		{\
			TRC_START_FILTER_CHECK_L2(ERLCDL_Trace_Filter, 1, 0x01);\
			TRC_START_FILL_L2();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L2(0x0517,0x0517);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(ERLCDL_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define ERLCDL_LOG_MBMS_SUSPEND_SKIP()
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define ERLCDL_LOG_PDU_INVALID_RB(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L2(ERLCDL_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x0617,0x0617);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(ERLCDL_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define ERLCDL_LOG_PDU_INVALID_RB(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define ERLCDL_LOG_PDU_INVALID_MBMS_RB(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L2(ERLCDL_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x0717,0x0717);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(ERLCDL_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define ERLCDL_LOG_PDU_INVALID_MBMS_RB(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define ERLCDL_LOG_PDU_ZERO_LEN(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L2(ERLCDL_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x0817,0x0817);\
			TRC_OUTPUT_8_LAST_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(ERLCDL_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define ERLCDL_LOG_PDU_ZERO_LEN(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define ERLCDL_LOG_PDU_BUF_SHORTAGE(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L2(ERLCDL_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x0917,0x0917);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(ERLCDL_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define ERLCDL_LOG_PDU_BUF_SHORTAGE(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define ERLCDL_LOG_PDU_LEN_ERROR(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L2(ERLCDL_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v3,v3);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x0A17,0x0A17);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_LAST_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(ERLCDL_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define ERLCDL_LOG_PDU_LEN_ERROR(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define ERLCDL_LOG_PDU_PARSE_ERROR(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L2(ERLCDL_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v3,v3);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x0B17,0x0B17);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_LAST_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(ERLCDL_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define ERLCDL_LOG_PDU_PARSE_ERROR(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define ERLCDL_LOG_PDU_SO_ERROR(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L2(ERLCDL_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v4,v4);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x0C17,0x0C17);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_16_LAST_WRAPPER_L2(cgen_local_v4,v4);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(ERLCDL_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define ERLCDL_LOG_PDU_SO_ERROR(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define ERLCDL_LOG_PDU_SEG_ERROR(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L2(ERLCDL_Trace_Filter, 1, 0x01);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x0D17,0x0D17);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v4,v4);\
			TRC_OUTPUT_16_LAST_WRAPPER_L2(cgen_local_v5,v5);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(ERLCDL_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define ERLCDL_LOG_PDU_SEG_ERROR(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define ERLCDL_LOG_EXT_PDU_HDR_ERROR_1() do {\
		{\
			TRC_START_FILTER_CHECK_L2(ERLCDL_Trace_Filter, 1, 0x01);\
			TRC_START_FILL_L2();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L2(0x0E17,0x0E17);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(ERLCDL_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define ERLCDL_LOG_EXT_PDU_HDR_ERROR_1()
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define ERLCDL_LOG_EXT_PDU_HDR_ERROR_2() do {\
		{\
			TRC_START_FILTER_CHECK_L2(ERLCDL_Trace_Filter, 1, 0x01);\
			TRC_START_FILL_L2();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L2(0x0F17,0x0F17);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(ERLCDL_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define ERLCDL_LOG_EXT_PDU_HDR_ERROR_2()
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define ERLCDL_LOG_SDU_LEN_OVERFLOW(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L2(ERLCDL_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x1017,0x1017);\
			TRC_OUTPUT_16_LAST_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(ERLCDL_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define ERLCDL_LOG_SDU_LEN_OVERFLOW(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define ERLCDL_LOG_PDU_SO_UNREASN(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L2(ERLCDL_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v4,v4);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x1117,0x1117);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_16_LAST_WRAPPER_L2(cgen_local_v4,v4);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(ERLCDL_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define ERLCDL_LOG_PDU_SO_UNREASN(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define ERLCDL_LOG_MBMS_INVALID_PID(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L2(ERLCDL_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x1217,0x1217);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(ERLCDL_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define ERLCDL_LOG_MBMS_INVALID_PID(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define ERLCDL_LOG_REPEAT_PDU_RLF(v1, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L2(ERLCDL_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v4,v4);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x1317,0x1317);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_8_LAST_WRAPPER_L2(cgen_local_v4,v4);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(ERLCDL_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define ERLCDL_LOG_REPEAT_PDU_RLF(v1, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define ERLCDL_LOG_UM5_PDU_ODR_TS_INVALID(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L2(ERLCDL_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v4,v4);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x1417,0x1417);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_32_LAST_WRAPPER_L2(cgen_local_v4,v4);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(ERLCDL_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define ERLCDL_LOG_UM5_PDU_ODR_TS_INVALID(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define ERLCDL_LOG_PRSB_LARGER_SDU(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L2(ERLCDL_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x1517,0x1517);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(ERLCDL_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define ERLCDL_LOG_PRSB_LARGER_SDU(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define ERLCDL_LOG_DATA_STALL_EVENT(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L2(ERLCDL_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x1617,0x1617);\
			TRC_OUTPUT_16_LAST_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(ERLCDL_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define ERLCDL_LOG_DATA_STALL_EVENT(v1)
#endif



/*******************************/
/* declaration of filter array */
/*******************************/
EXTERN_TMD_FILTER(unsigned char, ERLCDL_Trace_Filter, 5);
/*************************/
/* Function declarations */
/*************************/
#ifdef L1_CATCHER

void Set_ERLCDL_Filter(unsigned char *setting);

#endif

/************************************/
/* Filter checking API declarations */
/************************************/

#define ChkL1ModFltr_ERLCDL()	(FILTER_CHECK(ERLCDL_Trace_Filter, 0, 1))
#define ChkL1ClsFltr_ERLCDL_ERLCDL_INFO()	(ChkL1ModFltr_ERLCDL()&&(FILTER_CHECK(ERLCDL_Trace_Filter, 1, 0x01)))
#define ChkL1ClsFltr_ERLCDL_ERLCDL_DUMP()	(ChkL1ModFltr_ERLCDL()&&(FILTER_CHECK(ERLCDL_Trace_Filter, 1, 0x02)))
#define ChkL1ClsFltr_ERLCDL_ERLCDL_DEV()	(ChkL1ModFltr_ERLCDL()&&(FILTER_CHECK(ERLCDL_Trace_Filter, 1, 0x04)))
#define ChkL1MsgFltr_ERLCDL_LOG_INIT()	ChkL1ClsFltr_ERLCDL_ERLCDL_INFO()
#define ChkL1MsgFltr_ERLCDL_LOG_VOLTE_RB_NTF()	ChkL1ClsFltr_ERLCDL_ERLCDL_INFO()
#define ChkL1MsgFltr_ERLCDL_LOG_INVALID_PID()	ChkL1ClsFltr_ERLCDL_ERLCDL_INFO()
#define ChkL1MsgFltr_ERLCDL_LOG_RB_APP_NTF()	ChkL1ClsFltr_ERLCDL_ERLCDL_INFO()
#define ChkL1MsgFltr_ERLCDL_LOG_MBMS_SUSPEND()	ChkL1ClsFltr_ERLCDL_ERLCDL_INFO()
#define ChkL1MsgFltr_ERLCDL_LOG_MBMS_SUSPEND_SKIP()	ChkL1ClsFltr_ERLCDL_ERLCDL_INFO()
#define ChkL1MsgFltr_ERLCDL_LOG_PDU_INVALID_RB()	ChkL1ClsFltr_ERLCDL_ERLCDL_INFO()
#define ChkL1MsgFltr_ERLCDL_LOG_PDU_INVALID_MBMS_RB()	ChkL1ClsFltr_ERLCDL_ERLCDL_INFO()
#define ChkL1MsgFltr_ERLCDL_LOG_PDU_ZERO_LEN()	ChkL1ClsFltr_ERLCDL_ERLCDL_INFO()
#define ChkL1MsgFltr_ERLCDL_LOG_PDU_BUF_SHORTAGE()	ChkL1ClsFltr_ERLCDL_ERLCDL_INFO()
#define ChkL1MsgFltr_ERLCDL_LOG_PDU_LEN_ERROR()	ChkL1ClsFltr_ERLCDL_ERLCDL_INFO()
#define ChkL1MsgFltr_ERLCDL_LOG_PDU_PARSE_ERROR()	ChkL1ClsFltr_ERLCDL_ERLCDL_INFO()
#define ChkL1MsgFltr_ERLCDL_LOG_PDU_SO_ERROR()	ChkL1ClsFltr_ERLCDL_ERLCDL_INFO()
#define ChkL1MsgFltr_ERLCDL_LOG_PDU_SEG_ERROR()	ChkL1ClsFltr_ERLCDL_ERLCDL_INFO()
#define ChkL1MsgFltr_ERLCDL_LOG_EXT_PDU_HDR_ERROR_1()	ChkL1ClsFltr_ERLCDL_ERLCDL_INFO()
#define ChkL1MsgFltr_ERLCDL_LOG_EXT_PDU_HDR_ERROR_2()	ChkL1ClsFltr_ERLCDL_ERLCDL_INFO()
#define ChkL1MsgFltr_ERLCDL_LOG_SDU_LEN_OVERFLOW()	ChkL1ClsFltr_ERLCDL_ERLCDL_INFO()
#define ChkL1MsgFltr_ERLCDL_LOG_PDU_SO_UNREASN()	ChkL1ClsFltr_ERLCDL_ERLCDL_INFO()
#define ChkL1MsgFltr_ERLCDL_LOG_MBMS_INVALID_PID()	ChkL1ClsFltr_ERLCDL_ERLCDL_INFO()
#define ChkL1MsgFltr_ERLCDL_LOG_REPEAT_PDU_RLF()	ChkL1ClsFltr_ERLCDL_ERLCDL_INFO()
#define ChkL1MsgFltr_ERLCDL_LOG_UM5_PDU_ODR_TS_INVALID()	ChkL1ClsFltr_ERLCDL_ERLCDL_INFO()
#define ChkL1MsgFltr_ERLCDL_LOG_PRSB_LARGER_SDU()	ChkL1ClsFltr_ERLCDL_ERLCDL_INFO()
#define ChkL1MsgFltr_ERLCDL_LOG_DATA_STALL_EVENT()	ChkL1ClsFltr_ERLCDL_ERLCDL_INFO()


#endif
