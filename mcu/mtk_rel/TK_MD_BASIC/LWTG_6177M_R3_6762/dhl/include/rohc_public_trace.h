#ifndef L1TRC_ROHC_PUBLIC_DEF_H
#define L1TRC_ROHC_PUBLIC_DEF_H

/******************************/
/* String category definition */
/******************************/


/****************************/
/* Message macro definition */
/****************************/
#include "L1Trc.h"
#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define ROHC_LOG_C_IP_PTRN(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L2(ROHC_PUBLIC_Trace_Filter, 1, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x0023,0x0023);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(ROHC_PUBLIC_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define ROHC_LOG_C_IP_PTRN(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define ROHC_LOG_C_CNTXT_MATCH(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L2(ROHC_PUBLIC_Trace_Filter, 1, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v3,v3);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x0123,0x0123);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_32_LAST_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(ROHC_PUBLIC_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define ROHC_LOG_C_CNTXT_MATCH(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define ROHC_LOG_C_PKT_ARRV(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L2(ROHC_PUBLIC_Trace_Filter, 1, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x0223,0x0223);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(ROHC_PUBLIC_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define ROHC_LOG_C_PKT_ARRV(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define ROHC_LOG_C_MODE_TRAN(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L2(ROHC_PUBLIC_Trace_Filter, 1, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x0323,0x0323);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(ROHC_PUBLIC_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define ROHC_LOG_C_MODE_TRAN(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define ROHC_LOG_C_OUTER_IPID(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L2(ROHC_PUBLIC_Trace_Filter, 1, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x0423,0x0423);\
			TRC_OUTPUT_16_LAST_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(ROHC_PUBLIC_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define ROHC_LOG_C_OUTER_IPID(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define ROHC_LOG_C_UDP_PTRN(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L2(ROHC_PUBLIC_Trace_Filter, 1, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x0523,0x0523);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(ROHC_PUBLIC_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define ROHC_LOG_C_UDP_PTRN(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define ROHC_LOG_C_TCP_PTRN(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L2(ROHC_PUBLIC_Trace_Filter, 1, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v4,v4);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x0623,0x0623);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_32_LAST_WRAPPER_L2(cgen_local_v4,v4);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(ROHC_PUBLIC_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define ROHC_LOG_C_TCP_PTRN(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define ROHC_LOG_C_RTP_PTRN(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L2(ROHC_PUBLIC_Trace_Filter, 1, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v3,v3);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x0723,0x0723);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_32_LAST_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(ROHC_PUBLIC_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define ROHC_LOG_C_RTP_PTRN(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define ROHC_LOG_C_ROHCV1_PT(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L2(ROHC_PUBLIC_Trace_Filter, 1, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x0823,0x0823);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(ROHC_PUBLIC_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define ROHC_LOG_C_ROHCV1_PT(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define ROHC_LOG_C_PTRN_SEQ(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L2(ROHC_PUBLIC_Trace_Filter, 1, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x0923,0x0923);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(ROHC_PUBLIC_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define ROHC_LOG_C_PTRN_SEQ(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define ROHC_LOG_C_ROHCV2_PT(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L2(ROHC_PUBLIC_Trace_Filter, 1, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x0A23,0x0A23);\
			TRC_OUTPUT_8_LAST_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(ROHC_PUBLIC_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define ROHC_LOG_C_ROHCV2_PT(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define ROHC_LOG_D_PKT_ARRV(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L2(ROHC_PUBLIC_Trace_Filter, 1, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x0B23,0x0B23);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(ROHC_PUBLIC_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define ROHC_LOG_D_PKT_ARRV(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define ROHC_LOG_D_INNER_IPID(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L2(ROHC_PUBLIC_Trace_Filter, 1, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x0C23,0x0C23);\
			TRC_OUTPUT_16_LAST_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(ROHC_PUBLIC_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define ROHC_LOG_D_INNER_IPID(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define ROHC_LOG_D_MODE_TRAN(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L2(ROHC_PUBLIC_Trace_Filter, 1, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x0D23,0x0D23);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(ROHC_PUBLIC_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define ROHC_LOG_D_MODE_TRAN(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define ROHC_LOG_D_OUTER_IPID(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L2(ROHC_PUBLIC_Trace_Filter, 1, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x0E23,0x0E23);\
			TRC_OUTPUT_16_LAST_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(ROHC_PUBLIC_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define ROHC_LOG_D_OUTER_IPID(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define ROHC_LOG_D_INNER_IPID_TS(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L2(ROHC_PUBLIC_Trace_Filter, 1, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x0F23,0x0F23);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(ROHC_PUBLIC_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define ROHC_LOG_D_INNER_IPID_TS(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define ROHC_LOG_D_MSN_PT(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L2(ROHC_PUBLIC_Trace_Filter, 1, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x1023,0x1023);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(ROHC_PUBLIC_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define ROHC_LOG_D_MSN_PT(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define ROHC_LOG_D_DELTA_MSN(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L2(ROHC_PUBLIC_Trace_Filter, 1, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x1123,0x1123);\
			TRC_OUTPUT_16_LAST_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(ROHC_PUBLIC_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define ROHC_LOG_D_DELTA_MSN(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define ROHC_LOG_D_MSN_DELTA_PT(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L2(ROHC_PUBLIC_Trace_Filter, 1, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v3,v3);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x1223,0x1223);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_8_LAST_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(ROHC_PUBLIC_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define ROHC_LOG_D_MSN_DELTA_PT(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define ROHC_LOG_D_MSN_PT_INNER_IPID(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L2(ROHC_PUBLIC_Trace_Filter, 1, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v3,v3);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x1323,0x1323);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_LAST_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(ROHC_PUBLIC_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define ROHC_LOG_D_MSN_PT_INNER_IPID(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define ROHC_LOG_D_SEQ_ACK(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L2(ROHC_PUBLIC_Trace_Filter, 1, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v3,v3);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x1423,0x1423);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_32_LAST_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(ROHC_PUBLIC_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define ROHC_LOG_D_SEQ_ACK(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define ROHC_LOG_D_PT_INNER_IPID(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L2(ROHC_PUBLIC_Trace_Filter, 1, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x1523,0x1523);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(ROHC_PUBLIC_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define ROHC_LOG_D_PT_INNER_IPID(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define ROHC_LOG_D_MSN_SEQ_ACK(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L2(ROHC_PUBLIC_Trace_Filter, 1, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v3,v3);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x1623,0x1623);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_32_LAST_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(ROHC_PUBLIC_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define ROHC_LOG_D_MSN_SEQ_ACK(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define ROHC_LOG_D_UPDT_RTP_TS_STRIDE(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L2(ROHC_PUBLIC_Trace_Filter, 1, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v3,v3);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x1723,0x1723);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_32_LAST_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(ROHC_PUBLIC_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define ROHC_LOG_D_UPDT_RTP_TS_STRIDE(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define ROHC_LOG_D_CHECK_TS_STRIDE(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L2(ROHC_PUBLIC_Trace_Filter, 1, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v3,v3);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x1823,0x1823);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_32_LAST_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(ROHC_PUBLIC_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define ROHC_LOG_D_CHECK_TS_STRIDE(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define ROHC_LOG_D_CNTXT_MATCH(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L2(ROHC_PUBLIC_Trace_Filter, 1, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v3,v3);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x1923,0x1923);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_8_LAST_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(ROHC_PUBLIC_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define ROHC_LOG_D_CNTXT_MATCH(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define ROHC_LOG_D_CNTXT_NO_MATCH(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L2(ROHC_PUBLIC_Trace_Filter, 1, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x1A23,0x1A23);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(ROHC_PUBLIC_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define ROHC_LOG_D_CNTXT_NO_MATCH(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define ROHC_LOG_D_RET(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L2(ROHC_PUBLIC_Trace_Filter, 1, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x1B23,0x1B23);\
			TRC_OUTPUT_8_LAST_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(ROHC_PUBLIC_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define ROHC_LOG_D_RET(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define ROHC_LOG_C_DUMP_LEN(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L2(ROHC_PUBLIC_Trace_Filter, 1, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v3,v3);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x1C23,0x1C23);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_8_LAST_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(ROHC_PUBLIC_Trace_Filter, 1, 0x10);\
		}\
	} while(0)
#else
	#define ROHC_LOG_C_DUMP_LEN(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define ROHC_LOG_C_DUMP(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L2(ROHC_PUBLIC_Trace_Filter, 1, 0x10);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x1D23,0x1D23);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v4,v4);\
			TRC_OUTPUT_32_LAST_WRAPPER_L2(cgen_local_v5,v5);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(ROHC_PUBLIC_Trace_Filter, 1, 0x10);\
		}\
	} while(0)
#else
	#define ROHC_LOG_C_DUMP(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define ROHC_LOG_D_DUMP_LEN(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L2(ROHC_PUBLIC_Trace_Filter, 1, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v3,v3);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x1E23,0x1E23);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_8_LAST_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(ROHC_PUBLIC_Trace_Filter, 1, 0x10);\
		}\
	} while(0)
#else
	#define ROHC_LOG_D_DUMP_LEN(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define ROHC_LOG_D_DUMP(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L2(ROHC_PUBLIC_Trace_Filter, 1, 0x10);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x1F23,0x1F23);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v4,v4);\
			TRC_OUTPUT_32_LAST_WRAPPER_L2(cgen_local_v5,v5);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(ROHC_PUBLIC_Trace_Filter, 1, 0x10);\
		}\
	} while(0)
#else
	#define ROHC_LOG_D_DUMP(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define ROHC_LOG_C_ENFORCE_IR_PT(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L2(ROHC_PUBLIC_Trace_Filter, 1, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x2023,0x2023);\
			TRC_OUTPUT_8_LAST_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(ROHC_PUBLIC_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define ROHC_LOG_C_ENFORCE_IR_PT(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define ROHC_LOG_C_ENFORCE_IR_PT_COUNT(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L2(ROHC_PUBLIC_Trace_Filter, 1, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x2123,0x2123);\
			TRC_OUTPUT_16_LAST_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(ROHC_PUBLIC_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define ROHC_LOG_C_ENFORCE_IR_PT_COUNT(v1)
#endif



/*******************************/
/* declaration of filter array */
/*******************************/
EXTERN_TMD_FILTER(unsigned char, ROHC_PUBLIC_Trace_Filter, 5);
/*************************/
/* Function declarations */
/*************************/
#ifdef L1_CATCHER

void Set_ROHC_PUBLIC_Filter(unsigned char *setting);

#endif

/************************************/
/* Filter checking API declarations */
/************************************/

#define ChkL1ModFltr_ROHC_PUBLIC()	(FILTER_CHECK(ROHC_PUBLIC_Trace_Filter, 0, 1))
#define ChkL1ClsFltr_ROHC_PUBLIC_ROHC_INFO()	(ChkL1ModFltr_ROHC_PUBLIC()&&(FILTER_CHECK(ROHC_PUBLIC_Trace_Filter, 1, 0x01)))
#define ChkL1ClsFltr_ROHC_PUBLIC_ROHC_FUNC()	(ChkL1ModFltr_ROHC_PUBLIC()&&(FILTER_CHECK(ROHC_PUBLIC_Trace_Filter, 1, 0x02)))
#define ChkL1ClsFltr_ROHC_PUBLIC_ROHC_BRANCH()	(ChkL1ModFltr_ROHC_PUBLIC()&&(FILTER_CHECK(ROHC_PUBLIC_Trace_Filter, 1, 0x04)))
#define ChkL1ClsFltr_ROHC_PUBLIC_ROHC_PACKET()	(ChkL1ModFltr_ROHC_PUBLIC()&&(FILTER_CHECK(ROHC_PUBLIC_Trace_Filter, 1, 0x08)))
#define ChkL1ClsFltr_ROHC_PUBLIC_ROHC_DUMP()	(ChkL1ModFltr_ROHC_PUBLIC()&&(FILTER_CHECK(ROHC_PUBLIC_Trace_Filter, 1, 0x10)))
#define ChkL1MsgFltr_ROHC_LOG_C_IP_PTRN()	ChkL1ClsFltr_ROHC_PUBLIC_ROHC_PACKET()
#define ChkL1MsgFltr_ROHC_LOG_C_CNTXT_MATCH()	ChkL1ClsFltr_ROHC_PUBLIC_ROHC_PACKET()
#define ChkL1MsgFltr_ROHC_LOG_C_PKT_ARRV()	ChkL1ClsFltr_ROHC_PUBLIC_ROHC_PACKET()
#define ChkL1MsgFltr_ROHC_LOG_C_MODE_TRAN()	ChkL1ClsFltr_ROHC_PUBLIC_ROHC_PACKET()
#define ChkL1MsgFltr_ROHC_LOG_C_OUTER_IPID()	ChkL1ClsFltr_ROHC_PUBLIC_ROHC_PACKET()
#define ChkL1MsgFltr_ROHC_LOG_C_UDP_PTRN()	ChkL1ClsFltr_ROHC_PUBLIC_ROHC_PACKET()
#define ChkL1MsgFltr_ROHC_LOG_C_TCP_PTRN()	ChkL1ClsFltr_ROHC_PUBLIC_ROHC_PACKET()
#define ChkL1MsgFltr_ROHC_LOG_C_RTP_PTRN()	ChkL1ClsFltr_ROHC_PUBLIC_ROHC_PACKET()
#define ChkL1MsgFltr_ROHC_LOG_C_ROHCV1_PT()	ChkL1ClsFltr_ROHC_PUBLIC_ROHC_PACKET()
#define ChkL1MsgFltr_ROHC_LOG_C_PTRN_SEQ()	ChkL1ClsFltr_ROHC_PUBLIC_ROHC_PACKET()
#define ChkL1MsgFltr_ROHC_LOG_C_ROHCV2_PT()	ChkL1ClsFltr_ROHC_PUBLIC_ROHC_PACKET()
#define ChkL1MsgFltr_ROHC_LOG_D_PKT_ARRV()	ChkL1ClsFltr_ROHC_PUBLIC_ROHC_PACKET()
#define ChkL1MsgFltr_ROHC_LOG_D_INNER_IPID()	ChkL1ClsFltr_ROHC_PUBLIC_ROHC_PACKET()
#define ChkL1MsgFltr_ROHC_LOG_D_MODE_TRAN()	ChkL1ClsFltr_ROHC_PUBLIC_ROHC_PACKET()
#define ChkL1MsgFltr_ROHC_LOG_D_OUTER_IPID()	ChkL1ClsFltr_ROHC_PUBLIC_ROHC_PACKET()
#define ChkL1MsgFltr_ROHC_LOG_D_INNER_IPID_TS()	ChkL1ClsFltr_ROHC_PUBLIC_ROHC_PACKET()
#define ChkL1MsgFltr_ROHC_LOG_D_MSN_PT()	ChkL1ClsFltr_ROHC_PUBLIC_ROHC_PACKET()
#define ChkL1MsgFltr_ROHC_LOG_D_DELTA_MSN()	ChkL1ClsFltr_ROHC_PUBLIC_ROHC_PACKET()
#define ChkL1MsgFltr_ROHC_LOG_D_MSN_DELTA_PT()	ChkL1ClsFltr_ROHC_PUBLIC_ROHC_PACKET()
#define ChkL1MsgFltr_ROHC_LOG_D_MSN_PT_INNER_IPID()	ChkL1ClsFltr_ROHC_PUBLIC_ROHC_PACKET()
#define ChkL1MsgFltr_ROHC_LOG_D_SEQ_ACK()	ChkL1ClsFltr_ROHC_PUBLIC_ROHC_PACKET()
#define ChkL1MsgFltr_ROHC_LOG_D_PT_INNER_IPID()	ChkL1ClsFltr_ROHC_PUBLIC_ROHC_PACKET()
#define ChkL1MsgFltr_ROHC_LOG_D_MSN_SEQ_ACK()	ChkL1ClsFltr_ROHC_PUBLIC_ROHC_PACKET()
#define ChkL1MsgFltr_ROHC_LOG_D_UPDT_RTP_TS_STRIDE()	ChkL1ClsFltr_ROHC_PUBLIC_ROHC_PACKET()
#define ChkL1MsgFltr_ROHC_LOG_D_CHECK_TS_STRIDE()	ChkL1ClsFltr_ROHC_PUBLIC_ROHC_PACKET()
#define ChkL1MsgFltr_ROHC_LOG_D_CNTXT_MATCH()	ChkL1ClsFltr_ROHC_PUBLIC_ROHC_PACKET()
#define ChkL1MsgFltr_ROHC_LOG_D_CNTXT_NO_MATCH()	ChkL1ClsFltr_ROHC_PUBLIC_ROHC_PACKET()
#define ChkL1MsgFltr_ROHC_LOG_D_RET()	ChkL1ClsFltr_ROHC_PUBLIC_ROHC_PACKET()
#define ChkL1MsgFltr_ROHC_LOG_C_DUMP_LEN()	ChkL1ClsFltr_ROHC_PUBLIC_ROHC_DUMP()
#define ChkL1MsgFltr_ROHC_LOG_C_DUMP()	ChkL1ClsFltr_ROHC_PUBLIC_ROHC_DUMP()
#define ChkL1MsgFltr_ROHC_LOG_D_DUMP_LEN()	ChkL1ClsFltr_ROHC_PUBLIC_ROHC_DUMP()
#define ChkL1MsgFltr_ROHC_LOG_D_DUMP()	ChkL1ClsFltr_ROHC_PUBLIC_ROHC_DUMP()
#define ChkL1MsgFltr_ROHC_LOG_C_ENFORCE_IR_PT()	ChkL1ClsFltr_ROHC_PUBLIC_ROHC_PACKET()
#define ChkL1MsgFltr_ROHC_LOG_C_ENFORCE_IR_PT_COUNT()	ChkL1ClsFltr_ROHC_PUBLIC_ROHC_PACKET()


#endif
