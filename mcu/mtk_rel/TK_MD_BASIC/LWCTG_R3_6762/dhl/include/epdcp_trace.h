#ifndef L1TRC_EPDCP_DEF_H
#define L1TRC_EPDCP_DEF_H

/******************************/
/* String category definition */
/******************************/
#define EPDCP_COMM_LOG_STR_POSTPONE_RX_ILM_MSG_ID(v1)  (unsigned char)(v1+0)
#define EPDCP_COMM_LOG_STR_DRB_RLC_MODE(v1)  (unsigned char)(v1+4)
#define EPDCP_COMM_LOG_STR_RB_STATE(v1)  (unsigned char)(v1+6)


/****************************/
/* Message macro definition */
/****************************/
#include "L1Trc.h"
#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EPDCP_COMM_LOG_RESET() do {\
		{\
			TRC_START_FILTER_CHECK_L2(EPDCP_Trace_Filter, 1, 0x01);\
			TRC_START_FILL_L2();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L2(0x0014,0x0014);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(EPDCP_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EPDCP_COMM_LOG_RESET()
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EPDCP_COMM_LOG_POLLING(v1, v2, v3, v4, v5, v6) do {\
		{\
			TRC_START_FILTER_CHECK_L2(EPDCP_Trace_Filter, 1, 0x01);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x0114,0x0114);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v4,v4);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v5,v5);\
			TRC_OUTPUT_8_LAST_WRAPPER_L2(cgen_local_v6,v6);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(EPDCP_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EPDCP_COMM_LOG_POLLING(v1, v2, v3, v4, v5, v6)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EPDCP_COMM_LOG_POLL_IGNORED(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L2(EPDCP_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x0214,0x0214);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(EPDCP_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EPDCP_COMM_LOG_POLL_IGNORED(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EPDCP_COMM_LOG_GEMINI_GUARD_ILM(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L2(EPDCP_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v4,v4);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x0314,0x0314);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_8_LAST_WRAPPER_L2(cgen_local_v4,v4);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(EPDCP_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EPDCP_COMM_LOG_GEMINI_GUARD_ILM(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EPDCP_COMM_LOG_DL_PATH_SWITCH_REQ(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L2(EPDCP_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v3,v3);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x0414,0x0414);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_8_LAST_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(EPDCP_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EPDCP_COMM_LOG_DL_PATH_SWITCH_REQ(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EPDCP_COMM_LOG_POSTPONE_RX_ILM(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L2(EPDCP_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x0514,0x0514);\
			TRC_OUTPUT_8_LAST_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(EPDCP_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EPDCP_COMM_LOG_POSTPONE_RX_ILM(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EPDCP_COMM_LOG_EXEC_POSTPONE_RX_ILM(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L2(EPDCP_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x0614,0x0614);\
			TRC_OUTPUT_8_LAST_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(EPDCP_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EPDCP_COMM_LOG_EXEC_POSTPONE_RX_ILM(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EPDCP_COMM_LOG_DUMMY_X(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L2(EPDCP_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v4,v4);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x0714,0x0714);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_32_LAST_WRAPPER_L2(cgen_local_v4,v4);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(EPDCP_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EPDCP_COMM_LOG_DUMMY_X(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EPDCP_COMM_LOG_DUMMY_D(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L2(EPDCP_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v4,v4);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x0814,0x0814);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_32_LAST_WRAPPER_L2(cgen_local_v4,v4);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(EPDCP_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EPDCP_COMM_LOG_DUMMY_D(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EPDCP_COMM_LOG_INVALID_VOLTE_EBI_IND(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L2(EPDCP_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v4,v4);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x0914,0x0914);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_8_LAST_WRAPPER_L2(cgen_local_v4,v4);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(EPDCP_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EPDCP_COMM_LOG_INVALID_VOLTE_EBI_IND(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EPDCP_UL_LOG_STOP_TIMETBL_EVENT() do {\
		{\
			TRC_START_FILTER_CHECK_L2(EPDCP_Trace_Filter, 1, 0x02);\
			TRC_START_FILL_L2();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L2(0x0A14,0x0A14);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(EPDCP_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define EPDCP_UL_LOG_STOP_TIMETBL_EVENT()
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EPDCP_UL_LOG_SDU_TIMEOUT_CHK_RSLT(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L2(EPDCP_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x0B14,0x0B14);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(EPDCP_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define EPDCP_UL_LOG_SDU_TIMEOUT_CHK_RSLT(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EPDCP_UL_LOG_DATA_PROCESSINGS_REMAINING(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L2(EPDCP_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x0C14,0x0C14);\
			TRC_OUTPUT_8_LAST_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(EPDCP_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define EPDCP_UL_LOG_DATA_PROCESSINGS_REMAINING(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EPDCP_UL_LOG_DATA_PROCESSINGS_FINISHED() do {\
		{\
			TRC_START_FILTER_CHECK_L2(EPDCP_Trace_Filter, 1, 0x02);\
			TRC_START_FILL_L2();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L2(0x0D14,0x0D14);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(EPDCP_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define EPDCP_UL_LOG_DATA_PROCESSINGS_FINISHED()
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EPDCP_UL_LOG_TMTBL_FULL_HANDLING(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L2(EPDCP_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v4,v4);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x0E14,0x0E14);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_16_LAST_WRAPPER_L2(cgen_local_v4,v4);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(EPDCP_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define EPDCP_UL_LOG_TMTBL_FULL_HANDLING(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EPDCP_UL_LOG_TMTBL_DISC_UNSCHED_SDU(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L2(EPDCP_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v4,v4);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x0F14,0x0F14);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_16_LAST_WRAPPER_L2(cgen_local_v4,v4);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(EPDCP_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define EPDCP_UL_LOG_TMTBL_DISC_UNSCHED_SDU(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EPDCP_UL_LOG_ADD_SRB_DATA_SDU(v1, v2, v3, v4, v5, v6) do {\
		{\
			TRC_START_FILTER_CHECK_L2(EPDCP_Trace_Filter, 1, 0x02);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x1014,0x1014);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v4,v4);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v5,v5);\
			TRC_OUTPUT_16_LAST_WRAPPER_L2(cgen_local_v6,v6);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(EPDCP_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define EPDCP_UL_LOG_ADD_SRB_DATA_SDU(v1, v2, v3, v4, v5, v6)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EPDCP_UL_LOG_REL_ACKED_SDUS_SRB(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L2(EPDCP_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v4,v4);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x1114,0x1114);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_16_LAST_WRAPPER_L2(cgen_local_v4,v4);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(EPDCP_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define EPDCP_UL_LOG_REL_ACKED_SDUS_SRB(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EPDCP_UL_LOG_CNF_SRB_SDUS_BY_RLC(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L2(EPDCP_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x1214,0x1214);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(EPDCP_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define EPDCP_UL_LOG_CNF_SRB_SDUS_BY_RLC(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EPDCP_UL_LOG_DISC_SRB_SDUS(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L2(EPDCP_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v3,v3);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x1314,0x1314);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_LAST_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(EPDCP_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define EPDCP_UL_LOG_DISC_SRB_SDUS(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EPDCP_UL_LOG_REL_ACKED_SDUS_DRB(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L2(EPDCP_Trace_Filter, 1, 0x02);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x1414,0x1414);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v4,v4);\
			TRC_OUTPUT_16_LAST_WRAPPER_L2(cgen_local_v5,v5);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(EPDCP_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define EPDCP_UL_LOG_REL_ACKED_SDUS_DRB(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EPDCP_UL_LOG_REL_ACKED_CTRL_PDUS_DRB(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L2(EPDCP_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v3,v3);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x1514,0x1514);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_LAST_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(EPDCP_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define EPDCP_UL_LOG_REL_ACKED_CTRL_PDUS_DRB(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EPDCP_UL_LOG_REL_CTRL_PDUS_DRB(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L2(EPDCP_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v3,v3);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x1614,0x1614);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_LAST_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(EPDCP_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define EPDCP_UL_LOG_REL_CTRL_PDUS_DRB(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EPDCP_UL_LOG_REL_SCHED_SDUS_DRB(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L2(EPDCP_Trace_Filter, 1, 0x02);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x1714,0x1714);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v4,v4);\
			TRC_OUTPUT_16_LAST_WRAPPER_L2(cgen_local_v5,v5);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(EPDCP_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define EPDCP_UL_LOG_REL_SCHED_SDUS_DRB(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EPDCP_UL_LOG_REL_SCHED_CTRL_PDUS_DRB(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L2(EPDCP_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v3,v3);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x1814,0x1814);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_LAST_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(EPDCP_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define EPDCP_UL_LOG_REL_SCHED_CTRL_PDUS_DRB(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EPDCP_UL_LOG_REL_EBI_MISMATCH_DRB(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L2(EPDCP_Trace_Filter, 1, 0x02);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x1914,0x1914);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v4,v4);\
			TRC_OUTPUT_32_LAST_WRAPPER_L2(cgen_local_v5,v5);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(EPDCP_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define EPDCP_UL_LOG_REL_EBI_MISMATCH_DRB(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EPDCP_UL_LOG_SIT_INFO_DESYNCED(v1, v2, v3, v4, v5, v6, v7, v8) do {\
		{\
			TRC_START_FILTER_CHECK_L2(EPDCP_Trace_Filter, 1, 0x02);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x1A14,0x1A14);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v4,v4);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v5,v5);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v6,v6);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v7,v7);\
			TRC_OUTPUT_16_LAST_WRAPPER_L2(cgen_local_v8,v8);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(EPDCP_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define EPDCP_UL_LOG_SIT_INFO_DESYNCED(v1, v2, v3, v4, v5, v6, v7, v8)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EPDCP_UL_LOG_HNDL_GAP_SDU(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L2(EPDCP_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v3,v3);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x1B14,0x1B14);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_LAST_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(EPDCP_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define EPDCP_UL_LOG_HNDL_GAP_SDU(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EPDCP_UL_LOG_QUE_SDUS_IN_EPDCP(v1, v2, v3, v4, v5, v6, v7) do {\
		{\
			TRC_START_FILTER_CHECK_L2(EPDCP_Trace_Filter, 1, 0x02);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x1C14,0x1C14);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v4,v4);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v5,v5);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v6,v6);\
			TRC_OUTPUT_8_LAST_WRAPPER_L2(cgen_local_v7,v7);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(EPDCP_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define EPDCP_UL_LOG_QUE_SDUS_IN_EPDCP(v1, v2, v3, v4, v5, v6, v7)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EPDCP_UL_LOG_ROLLBACK_SDUS_WO_ROHC(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L2(EPDCP_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v4,v4);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x1D14,0x1D14);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_32_LAST_WRAPPER_L2(cgen_local_v4,v4);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(EPDCP_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define EPDCP_UL_LOG_ROLLBACK_SDUS_WO_ROHC(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EPDCP_UL_LOG_UNDO_ROHC_SDUS(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L2(EPDCP_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v4,v4);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x1E14,0x1E14);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_32_LAST_WRAPPER_L2(cgen_local_v4,v4);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(EPDCP_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define EPDCP_UL_LOG_UNDO_ROHC_SDUS(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EPDCP_UL_LOG_ROLLBACK_UDC_SDUS(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L2(EPDCP_Trace_Filter, 1, 0x02);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x1F14,0x1F14);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v4,v4);\
			TRC_OUTPUT_16_LAST_WRAPPER_L2(cgen_local_v5,v5);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(EPDCP_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define EPDCP_UL_LOG_ROLLBACK_UDC_SDUS(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EPDCP_UL_LOG_PREDO_ROHC_SDUS(v1, v2, v3, v4, v5, v6) do {\
		{\
			TRC_START_FILTER_CHECK_L2(EPDCP_Trace_Filter, 1, 0x02);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x2014,0x2014);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v4,v4);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v5,v5);\
			TRC_OUTPUT_32_LAST_WRAPPER_L2(cgen_local_v6,v6);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(EPDCP_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define EPDCP_UL_LOG_PREDO_ROHC_SDUS(v1, v2, v3, v4, v5, v6)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EPDCP_UL_LOG_PREDO_UDC_SDUS(v1, v2, v3, v4, v5, v6) do {\
		{\
			TRC_START_FILTER_CHECK_L2(EPDCP_Trace_Filter, 1, 0x02);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x2114,0x2114);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v4,v4);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v5,v5);\
			TRC_OUTPUT_16_LAST_WRAPPER_L2(cgen_local_v6,v6);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(EPDCP_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define EPDCP_UL_LOG_PREDO_UDC_SDUS(v1, v2, v3, v4, v5, v6)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EPDCP_UL_LOG_REDO_PDUS_WO_CMP(v1, v2, v3, v4, v5, v6) do {\
		{\
			TRC_START_FILTER_CHECK_L2(EPDCP_Trace_Filter, 1, 0x02);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x2214,0x2214);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v4,v4);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v5,v5);\
			TRC_OUTPUT_16_LAST_WRAPPER_L2(cgen_local_v6,v6);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(EPDCP_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define EPDCP_UL_LOG_REDO_PDUS_WO_CMP(v1, v2, v3, v4, v5, v6)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EPDCP_UL_LOG_RETX_ROHC_SDUS(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L2(EPDCP_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v4,v4);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x2314,0x2314);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_16_LAST_WRAPPER_L2(cgen_local_v4,v4);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(EPDCP_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define EPDCP_UL_LOG_RETX_ROHC_SDUS(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EPDCP_UL_LOG_RETX_UDC_SDUS(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L2(EPDCP_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v4,v4);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x2414,0x2414);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_16_LAST_WRAPPER_L2(cgen_local_v4,v4);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(EPDCP_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define EPDCP_UL_LOG_RETX_UDC_SDUS(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EPDCP_UL_LOG_SIT_INFO(v1, v2, v3, v4, v5, v6, v7) do {\
		{\
			TRC_START_FILTER_CHECK_L2(EPDCP_Trace_Filter, 1, 0x02);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x2514,0x2514);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v4,v4);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v5,v5);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v6,v6);\
			TRC_OUTPUT_8_LAST_WRAPPER_L2(cgen_local_v7,v7);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(EPDCP_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define EPDCP_UL_LOG_SIT_INFO(v1, v2, v3, v4, v5, v6, v7)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EPDCP_UL_LOG_BKT_INFO(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L2(EPDCP_Trace_Filter, 1, 0x02);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x2614,0x2614);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v4,v4);\
			TRC_OUTPUT_32_LAST_WRAPPER_L2(cgen_local_v5,v5);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(EPDCP_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define EPDCP_UL_LOG_BKT_INFO(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EPDCP_UL_LOG_CTRL_SIT_FULL(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L2(EPDCP_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x2714,0x2714);\
			TRC_OUTPUT_8_LAST_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(EPDCP_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define EPDCP_UL_LOG_CTRL_SIT_FULL(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EPDCP_UL_LOG_RESYNC_EL2_SIT_START(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L2(EPDCP_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v4,v4);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x2814,0x2814);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_16_LAST_WRAPPER_L2(cgen_local_v4,v4);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(EPDCP_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define EPDCP_UL_LOG_RESYNC_EL2_SIT_START(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EPDCP_UL_LOG_RECORD_DRB_REL_SIT_INFO(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L2(EPDCP_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v4,v4);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x2914,0x2914);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_16_LAST_WRAPPER_L2(cgen_local_v4,v4);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(EPDCP_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define EPDCP_UL_LOG_RECORD_DRB_REL_SIT_INFO(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EPDCP_UL_LOG_MAX_DISC_TMR_CFG(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L2(EPDCP_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x2A14,0x2A14);\
			TRC_OUTPUT_16_LAST_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(EPDCP_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define EPDCP_UL_LOG_MAX_DISC_TMR_CFG(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EPDCP_UL_LOG_UDC_INST_ACTIVATING(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L2(EPDCP_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x2B14,0x2B14);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(EPDCP_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define EPDCP_UL_LOG_UDC_INST_ACTIVATING(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EPDCP_UL_LOG_UDC_INST_ACTIVATED(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L2(EPDCP_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x2C14,0x2C14);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(EPDCP_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define EPDCP_UL_LOG_UDC_INST_ACTIVATED(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EPDCP_UL_LOG_UDC_INST_DEACTIVATING(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L2(EPDCP_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x2D14,0x2D14);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(EPDCP_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define EPDCP_UL_LOG_UDC_INST_DEACTIVATING(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EPDCP_UL_LOG_UDC_INST_DEACTIVATED(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L2(EPDCP_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x2E14,0x2E14);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(EPDCP_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define EPDCP_UL_LOG_UDC_INST_DEACTIVATED(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EPDCP_UL_LOG_UDC_LINK_DB(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L2(EPDCP_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v3,v3);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x2F14,0x2F14);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_8_LAST_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(EPDCP_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define EPDCP_UL_LOG_UDC_LINK_DB(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EPDCP_UL_LOG_UDC_UNLINK_DB(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L2(EPDCP_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x3014,0x3014);\
			TRC_OUTPUT_8_LAST_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(EPDCP_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define EPDCP_UL_LOG_UDC_UNLINK_DB(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EPDCP_UL_LOG_UDC_UNEXPECTED_ST(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L2(EPDCP_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v3,v3);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x3114,0x3114);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_8_LAST_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(EPDCP_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define EPDCP_UL_LOG_UDC_UNEXPECTED_ST(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EPDCP_UL_LOG_UDC_OUTDATED_ACTV_DONE(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L2(EPDCP_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x3214,0x3214);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(EPDCP_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define EPDCP_UL_LOG_UDC_OUTDATED_ACTV_DONE(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EPDCP_UL_LOG_UDC_OUTDATED_DEACTV_DONE(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L2(EPDCP_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x3314,0x3314);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(EPDCP_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define EPDCP_UL_LOG_UDC_OUTDATED_DEACTV_DONE(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EPDCP_UL_LOG_UDC_CUR_ACT_ST(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L2(EPDCP_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x3414,0x3414);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(EPDCP_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define EPDCP_UL_LOG_UDC_CUR_ACT_ST(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EPDCP_UL_LOG_UDC_SET_RST_ST(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L2(EPDCP_Trace_Filter, 1, 0x02);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x3514,0x3514);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v4,v4);\
			TRC_OUTPUT_16_LAST_WRAPPER_L2(cgen_local_v5,v5);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(EPDCP_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define EPDCP_UL_LOG_UDC_SET_RST_ST(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EPDCP_UL_LOG_UDC_SET_RST_IN_CMP_REQ(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L2(EPDCP_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v4,v4);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x3614,0x3614);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_16_LAST_WRAPPER_L2(cgen_local_v4,v4);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(EPDCP_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define EPDCP_UL_LOG_UDC_SET_RST_IN_CMP_REQ(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EPDCP_UL_LOG_UDC_RCVD_RST_IN_CMP_RSLT(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L2(EPDCP_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x3714,0x3714);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(EPDCP_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define EPDCP_UL_LOG_UDC_RCVD_RST_IN_CMP_RSLT(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EPDCP_UL_LOG_UDC_INVALID_RST_SDU_IDX(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L2(EPDCP_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x3814,0x3814);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(EPDCP_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define EPDCP_UL_LOG_UDC_INVALID_RST_SDU_IDX(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EPDCP_UL_LOG_UDC_CMP_REQ_FULL(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L2(EPDCP_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v3,v3);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x3914,0x3914);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_LAST_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(EPDCP_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define EPDCP_UL_LOG_UDC_CMP_REQ_FULL(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EPDCP_UL_LOG_UDC_BUF_NOT_SUPPORT(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L2(EPDCP_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x3A14,0x3A14);\
			TRC_OUTPUT_8_LAST_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(EPDCP_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define EPDCP_UL_LOG_UDC_BUF_NOT_SUPPORT(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EPDCP_DL_LOG_SRB_CPQ_DISCARD_RESULT(v1, v2, v3, v4, v5, v6) do {\
		{\
			TRC_START_FILTER_CHECK_L2(EPDCP_Trace_Filter, 1, 0x04);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x3B14,0x3B14);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v4,v4);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v5,v5);\
			TRC_OUTPUT_32_LAST_WRAPPER_L2(cgen_local_v6,v6);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(EPDCP_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define EPDCP_DL_LOG_SRB_CPQ_DISCARD_RESULT(v1, v2, v3, v4, v5, v6)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EPDCP_DL_LOG_DATA_PROCESSINGS_REMAINING(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L2(EPDCP_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v3,v3);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x3C14,0x3C14);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_8_LAST_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(EPDCP_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define EPDCP_DL_LOG_DATA_PROCESSINGS_REMAINING(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EPDCP_DL_LOG_DATA_PROCESSINGS_FINISHED() do {\
		{\
			TRC_START_FILTER_CHECK_L2(EPDCP_Trace_Filter, 1, 0x04);\
			TRC_START_FILL_L2();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L2(0x3D14,0x3D14);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(EPDCP_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define EPDCP_DL_LOG_DATA_PROCESSINGS_FINISHED()
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EPDCP_COMM_LOG_READD_ROHC_INST_FOR_DRB(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L2(EPDCP_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x3E14,0x3E14);\
			TRC_OUTPUT_8_LAST_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(EPDCP_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EPDCP_COMM_LOG_READD_ROHC_INST_FOR_DRB(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EPDCP_COMM_LOG_VIRTUAL_CONNECTED_SWITCH_REQ(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L2(EPDCP_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x3F14,0x3F14);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(EPDCP_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EPDCP_COMM_LOG_VIRTUAL_CONNECTED_SWITCH_REQ(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EPDCP_COMM_LOG_READD_UDC_INST_FOR_DRB(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L2(EPDCP_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x4014,0x4014);\
			TRC_OUTPUT_8_LAST_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(EPDCP_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define EPDCP_COMM_LOG_READD_UDC_INST_FOR_DRB(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EPDCP_COMM_LOG_UDC_INST_TAMPERED(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L2(EPDCP_Trace_Filter, 1, 0x02);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x4114,0x4114);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v4,v4);\
			TRC_OUTPUT_8_LAST_WRAPPER_L2(cgen_local_v5,v5);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(EPDCP_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define EPDCP_COMM_LOG_UDC_INST_TAMPERED(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EPDCP_COMM_LOG_DETN_TMR_CONFIG(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L2(EPDCP_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x4214,0x4214);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(EPDCP_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EPDCP_COMM_LOG_DETN_TMR_CONFIG(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EPDCP_COMM_LOG_DETN_TMR_START() do {\
		{\
			TRC_START_FILTER_CHECK_L2(EPDCP_Trace_Filter, 1, 0x01);\
			TRC_START_FILL_L2();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L2(0x4314,0x4314);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(EPDCP_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EPDCP_COMM_LOG_DETN_TMR_START()
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EPDCP_COMM_LOG_DETN_TMR_STOP() do {\
		{\
			TRC_START_FILTER_CHECK_L2(EPDCP_Trace_Filter, 1, 0x01);\
			TRC_START_FILL_L2();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L2(0x4414,0x4414);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(EPDCP_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EPDCP_COMM_LOG_DETN_TMR_STOP()
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EPDCP_COMM_LOG_DETN_TMR_RESTART() do {\
		{\
			TRC_START_FILTER_CHECK_L2(EPDCP_Trace_Filter, 1, 0x01);\
			TRC_START_FILL_L2();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L2(0x4514,0x4514);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(EPDCP_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EPDCP_COMM_LOG_DETN_TMR_RESTART()
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EPDCP_COMM_LOG_DETN_TMR_TIMEOUT() do {\
		{\
			TRC_START_FILTER_CHECK_L2(EPDCP_Trace_Filter, 1, 0x01);\
			TRC_START_FILL_L2();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L2(0x4614,0x4614);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(EPDCP_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EPDCP_COMM_LOG_DETN_TMR_TIMEOUT()
#endif



/*******************************/
/* declaration of filter array */
/*******************************/
EXTERN_TMD_FILTER(unsigned char, EPDCP_Trace_Filter, 5);
/*************************/
/* Function declarations */
/*************************/
#ifdef L1_CATCHER

void Set_EPDCP_Filter(unsigned char *setting);

#endif

/************************************/
/* Filter checking API declarations */
/************************************/

#define ChkL1ModFltr_EPDCP()	(FILTER_CHECK(EPDCP_Trace_Filter, 0, 1))
#define ChkL1ClsFltr_EPDCP_EPDCP_COMM_INFO()	(ChkL1ModFltr_EPDCP()&&(FILTER_CHECK(EPDCP_Trace_Filter, 1, 0x01)))
#define ChkL1ClsFltr_EPDCP_EPDCP_UL_INFO()	(ChkL1ModFltr_EPDCP()&&(FILTER_CHECK(EPDCP_Trace_Filter, 1, 0x02)))
#define ChkL1ClsFltr_EPDCP_EPDCP_DL_INFO()	(ChkL1ModFltr_EPDCP()&&(FILTER_CHECK(EPDCP_Trace_Filter, 1, 0x04)))
#define ChkL1MsgFltr_EPDCP_COMM_LOG_RESET()	ChkL1ClsFltr_EPDCP_EPDCP_COMM_INFO()
#define ChkL1MsgFltr_EPDCP_COMM_LOG_POLLING()	ChkL1ClsFltr_EPDCP_EPDCP_COMM_INFO()
#define ChkL1MsgFltr_EPDCP_COMM_LOG_POLL_IGNORED()	ChkL1ClsFltr_EPDCP_EPDCP_COMM_INFO()
#define ChkL1MsgFltr_EPDCP_COMM_LOG_GEMINI_GUARD_ILM()	ChkL1ClsFltr_EPDCP_EPDCP_COMM_INFO()
#define ChkL1MsgFltr_EPDCP_COMM_LOG_DL_PATH_SWITCH_REQ()	ChkL1ClsFltr_EPDCP_EPDCP_COMM_INFO()
#define ChkL1MsgFltr_EPDCP_COMM_LOG_POSTPONE_RX_ILM()	ChkL1ClsFltr_EPDCP_EPDCP_COMM_INFO()
#define ChkL1MsgFltr_EPDCP_COMM_LOG_EXEC_POSTPONE_RX_ILM()	ChkL1ClsFltr_EPDCP_EPDCP_COMM_INFO()
#define ChkL1MsgFltr_EPDCP_COMM_LOG_DUMMY_X()	ChkL1ClsFltr_EPDCP_EPDCP_COMM_INFO()
#define ChkL1MsgFltr_EPDCP_COMM_LOG_DUMMY_D()	ChkL1ClsFltr_EPDCP_EPDCP_COMM_INFO()
#define ChkL1MsgFltr_EPDCP_COMM_LOG_INVALID_VOLTE_EBI_IND()	ChkL1ClsFltr_EPDCP_EPDCP_COMM_INFO()
#define ChkL1MsgFltr_EPDCP_UL_LOG_STOP_TIMETBL_EVENT()	ChkL1ClsFltr_EPDCP_EPDCP_UL_INFO()
#define ChkL1MsgFltr_EPDCP_UL_LOG_SDU_TIMEOUT_CHK_RSLT()	ChkL1ClsFltr_EPDCP_EPDCP_UL_INFO()
#define ChkL1MsgFltr_EPDCP_UL_LOG_DATA_PROCESSINGS_REMAINING()	ChkL1ClsFltr_EPDCP_EPDCP_UL_INFO()
#define ChkL1MsgFltr_EPDCP_UL_LOG_DATA_PROCESSINGS_FINISHED()	ChkL1ClsFltr_EPDCP_EPDCP_UL_INFO()
#define ChkL1MsgFltr_EPDCP_UL_LOG_TMTBL_FULL_HANDLING()	ChkL1ClsFltr_EPDCP_EPDCP_UL_INFO()
#define ChkL1MsgFltr_EPDCP_UL_LOG_TMTBL_DISC_UNSCHED_SDU()	ChkL1ClsFltr_EPDCP_EPDCP_UL_INFO()
#define ChkL1MsgFltr_EPDCP_UL_LOG_ADD_SRB_DATA_SDU()	ChkL1ClsFltr_EPDCP_EPDCP_UL_INFO()
#define ChkL1MsgFltr_EPDCP_UL_LOG_REL_ACKED_SDUS_SRB()	ChkL1ClsFltr_EPDCP_EPDCP_UL_INFO()
#define ChkL1MsgFltr_EPDCP_UL_LOG_CNF_SRB_SDUS_BY_RLC()	ChkL1ClsFltr_EPDCP_EPDCP_UL_INFO()
#define ChkL1MsgFltr_EPDCP_UL_LOG_DISC_SRB_SDUS()	ChkL1ClsFltr_EPDCP_EPDCP_UL_INFO()
#define ChkL1MsgFltr_EPDCP_UL_LOG_REL_ACKED_SDUS_DRB()	ChkL1ClsFltr_EPDCP_EPDCP_UL_INFO()
#define ChkL1MsgFltr_EPDCP_UL_LOG_REL_ACKED_CTRL_PDUS_DRB()	ChkL1ClsFltr_EPDCP_EPDCP_UL_INFO()
#define ChkL1MsgFltr_EPDCP_UL_LOG_REL_CTRL_PDUS_DRB()	ChkL1ClsFltr_EPDCP_EPDCP_UL_INFO()
#define ChkL1MsgFltr_EPDCP_UL_LOG_REL_SCHED_SDUS_DRB()	ChkL1ClsFltr_EPDCP_EPDCP_UL_INFO()
#define ChkL1MsgFltr_EPDCP_UL_LOG_REL_SCHED_CTRL_PDUS_DRB()	ChkL1ClsFltr_EPDCP_EPDCP_UL_INFO()
#define ChkL1MsgFltr_EPDCP_UL_LOG_REL_EBI_MISMATCH_DRB()	ChkL1ClsFltr_EPDCP_EPDCP_UL_INFO()
#define ChkL1MsgFltr_EPDCP_UL_LOG_SIT_INFO_DESYNCED()	ChkL1ClsFltr_EPDCP_EPDCP_UL_INFO()
#define ChkL1MsgFltr_EPDCP_UL_LOG_HNDL_GAP_SDU()	ChkL1ClsFltr_EPDCP_EPDCP_UL_INFO()
#define ChkL1MsgFltr_EPDCP_UL_LOG_QUE_SDUS_IN_EPDCP()	ChkL1ClsFltr_EPDCP_EPDCP_UL_INFO()
#define ChkL1MsgFltr_EPDCP_UL_LOG_ROLLBACK_SDUS_WO_ROHC()	ChkL1ClsFltr_EPDCP_EPDCP_UL_INFO()
#define ChkL1MsgFltr_EPDCP_UL_LOG_UNDO_ROHC_SDUS()	ChkL1ClsFltr_EPDCP_EPDCP_UL_INFO()
#define ChkL1MsgFltr_EPDCP_UL_LOG_ROLLBACK_UDC_SDUS()	ChkL1ClsFltr_EPDCP_EPDCP_UL_INFO()
#define ChkL1MsgFltr_EPDCP_UL_LOG_PREDO_ROHC_SDUS()	ChkL1ClsFltr_EPDCP_EPDCP_UL_INFO()
#define ChkL1MsgFltr_EPDCP_UL_LOG_PREDO_UDC_SDUS()	ChkL1ClsFltr_EPDCP_EPDCP_UL_INFO()
#define ChkL1MsgFltr_EPDCP_UL_LOG_REDO_PDUS_WO_CMP()	ChkL1ClsFltr_EPDCP_EPDCP_UL_INFO()
#define ChkL1MsgFltr_EPDCP_UL_LOG_RETX_ROHC_SDUS()	ChkL1ClsFltr_EPDCP_EPDCP_UL_INFO()
#define ChkL1MsgFltr_EPDCP_UL_LOG_RETX_UDC_SDUS()	ChkL1ClsFltr_EPDCP_EPDCP_UL_INFO()
#define ChkL1MsgFltr_EPDCP_UL_LOG_SIT_INFO()	ChkL1ClsFltr_EPDCP_EPDCP_UL_INFO()
#define ChkL1MsgFltr_EPDCP_UL_LOG_BKT_INFO()	ChkL1ClsFltr_EPDCP_EPDCP_UL_INFO()
#define ChkL1MsgFltr_EPDCP_UL_LOG_CTRL_SIT_FULL()	ChkL1ClsFltr_EPDCP_EPDCP_UL_INFO()
#define ChkL1MsgFltr_EPDCP_UL_LOG_RESYNC_EL2_SIT_START()	ChkL1ClsFltr_EPDCP_EPDCP_UL_INFO()
#define ChkL1MsgFltr_EPDCP_UL_LOG_RECORD_DRB_REL_SIT_INFO()	ChkL1ClsFltr_EPDCP_EPDCP_UL_INFO()
#define ChkL1MsgFltr_EPDCP_UL_LOG_MAX_DISC_TMR_CFG()	ChkL1ClsFltr_EPDCP_EPDCP_UL_INFO()
#define ChkL1MsgFltr_EPDCP_UL_LOG_UDC_INST_ACTIVATING()	ChkL1ClsFltr_EPDCP_EPDCP_UL_INFO()
#define ChkL1MsgFltr_EPDCP_UL_LOG_UDC_INST_ACTIVATED()	ChkL1ClsFltr_EPDCP_EPDCP_UL_INFO()
#define ChkL1MsgFltr_EPDCP_UL_LOG_UDC_INST_DEACTIVATING()	ChkL1ClsFltr_EPDCP_EPDCP_UL_INFO()
#define ChkL1MsgFltr_EPDCP_UL_LOG_UDC_INST_DEACTIVATED()	ChkL1ClsFltr_EPDCP_EPDCP_UL_INFO()
#define ChkL1MsgFltr_EPDCP_UL_LOG_UDC_LINK_DB()	ChkL1ClsFltr_EPDCP_EPDCP_UL_INFO()
#define ChkL1MsgFltr_EPDCP_UL_LOG_UDC_UNLINK_DB()	ChkL1ClsFltr_EPDCP_EPDCP_UL_INFO()
#define ChkL1MsgFltr_EPDCP_UL_LOG_UDC_UNEXPECTED_ST()	ChkL1ClsFltr_EPDCP_EPDCP_UL_INFO()
#define ChkL1MsgFltr_EPDCP_UL_LOG_UDC_OUTDATED_ACTV_DONE()	ChkL1ClsFltr_EPDCP_EPDCP_UL_INFO()
#define ChkL1MsgFltr_EPDCP_UL_LOG_UDC_OUTDATED_DEACTV_DONE()	ChkL1ClsFltr_EPDCP_EPDCP_UL_INFO()
#define ChkL1MsgFltr_EPDCP_UL_LOG_UDC_CUR_ACT_ST()	ChkL1ClsFltr_EPDCP_EPDCP_UL_INFO()
#define ChkL1MsgFltr_EPDCP_UL_LOG_UDC_SET_RST_ST()	ChkL1ClsFltr_EPDCP_EPDCP_UL_INFO()
#define ChkL1MsgFltr_EPDCP_UL_LOG_UDC_SET_RST_IN_CMP_REQ()	ChkL1ClsFltr_EPDCP_EPDCP_UL_INFO()
#define ChkL1MsgFltr_EPDCP_UL_LOG_UDC_RCVD_RST_IN_CMP_RSLT()	ChkL1ClsFltr_EPDCP_EPDCP_UL_INFO()
#define ChkL1MsgFltr_EPDCP_UL_LOG_UDC_INVALID_RST_SDU_IDX()	ChkL1ClsFltr_EPDCP_EPDCP_UL_INFO()
#define ChkL1MsgFltr_EPDCP_UL_LOG_UDC_CMP_REQ_FULL()	ChkL1ClsFltr_EPDCP_EPDCP_UL_INFO()
#define ChkL1MsgFltr_EPDCP_UL_LOG_UDC_BUF_NOT_SUPPORT()	ChkL1ClsFltr_EPDCP_EPDCP_UL_INFO()
#define ChkL1MsgFltr_EPDCP_DL_LOG_SRB_CPQ_DISCARD_RESULT()	ChkL1ClsFltr_EPDCP_EPDCP_DL_INFO()
#define ChkL1MsgFltr_EPDCP_DL_LOG_DATA_PROCESSINGS_REMAINING()	ChkL1ClsFltr_EPDCP_EPDCP_DL_INFO()
#define ChkL1MsgFltr_EPDCP_DL_LOG_DATA_PROCESSINGS_FINISHED()	ChkL1ClsFltr_EPDCP_EPDCP_DL_INFO()
#define ChkL1MsgFltr_EPDCP_COMM_LOG_READD_ROHC_INST_FOR_DRB()	ChkL1ClsFltr_EPDCP_EPDCP_COMM_INFO()
#define ChkL1MsgFltr_EPDCP_COMM_LOG_VIRTUAL_CONNECTED_SWITCH_REQ()	ChkL1ClsFltr_EPDCP_EPDCP_COMM_INFO()
#define ChkL1MsgFltr_EPDCP_COMM_LOG_READD_UDC_INST_FOR_DRB()	ChkL1ClsFltr_EPDCP_EPDCP_UL_INFO()
#define ChkL1MsgFltr_EPDCP_COMM_LOG_UDC_INST_TAMPERED()	ChkL1ClsFltr_EPDCP_EPDCP_UL_INFO()
#define ChkL1MsgFltr_EPDCP_COMM_LOG_DETN_TMR_CONFIG()	ChkL1ClsFltr_EPDCP_EPDCP_COMM_INFO()
#define ChkL1MsgFltr_EPDCP_COMM_LOG_DETN_TMR_START()	ChkL1ClsFltr_EPDCP_EPDCP_COMM_INFO()
#define ChkL1MsgFltr_EPDCP_COMM_LOG_DETN_TMR_STOP()	ChkL1ClsFltr_EPDCP_EPDCP_COMM_INFO()
#define ChkL1MsgFltr_EPDCP_COMM_LOG_DETN_TMR_RESTART()	ChkL1ClsFltr_EPDCP_EPDCP_COMM_INFO()
#define ChkL1MsgFltr_EPDCP_COMM_LOG_DETN_TMR_TIMEOUT()	ChkL1ClsFltr_EPDCP_EPDCP_COMM_INFO()


#endif
