#ifndef L1TRC_NAS_DATA_PATH_DEF_H
#define L1TRC_NAS_DATA_PATH_DEF_H

/******************************/
/* String category definition */
/******************************/


/****************************/
/* Message macro definition */
/****************************/
#include "L1Trc.h"
#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define RATDM_PROCESS_EPSB_UL_Q(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x001D,0x001D);\
			TRC_OUTPUT_8_LAST_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define RATDM_PROCESS_EPSB_UL_Q(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define RATDM_PROCESS_EPSB_DL(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v4,v4);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x011D,0x011D);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_32_LAST_WRAPPER_L2(cgen_local_v4,v4);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define RATDM_PROCESS_EPSB_DL(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define RATDM_EPSB_INIT(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v4,v4);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x021D,0x021D);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_8_LAST_WRAPPER_L2(cgen_local_v4,v4);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define RATDM_EPSB_INIT(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define RATDM_IDLE_ENTER(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x031D,0x031D);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define RATDM_IDLE_ENTER(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define RATDM_IDLE_LEAVE(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x041D,0x041D);\
			TRC_OUTPUT_8_LAST_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define RATDM_IDLE_LEAVE(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define RATDM_IDLE_LEAVE_REJ(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x051D,0x051D);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define RATDM_IDLE_LEAVE_REJ(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define RATDM_IDLE_LEAVE_REJ_DROP(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v3,v3);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x061D,0x061D);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_32_LAST_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define RATDM_IDLE_LEAVE_REJ_DROP(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define RATDM_SUSPEND(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x071D,0x071D);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define RATDM_SUSPEND(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define RATDM_RESUME(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x081D,0x081D);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define RATDM_RESUME(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define RATDM_GEMINI_SUSPEND(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x091D,0x091D);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define RATDM_GEMINI_SUSPEND(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define RATDM_GEMINI_SUSPEND_DROP(v1, v2, v3, v4, v5, v6) do {\
		{\
			TRC_START_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x01);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x0A1D,0x0A1D);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v4,v4);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v5,v5);\
			TRC_OUTPUT_16_LAST_WRAPPER_L2(cgen_local_v6,v6);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define RATDM_GEMINI_SUSPEND_DROP(v1, v2, v3, v4, v5, v6)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define RATDM_GEMINI_RESUME(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x0B1D,0x0B1D);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define RATDM_GEMINI_RESUME(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define RATDM_QUERY_UL_DATA_STATUS(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v3,v3);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x0C1D,0x0C1D);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_32_LAST_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define RATDM_QUERY_UL_DATA_STATUS(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define RATDM_IDLE_LEAVE_BY_QUEUED(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x0D1D,0x0D1D);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define RATDM_IDLE_LEAVE_BY_QUEUED(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define RATDM_QUEUE_UL_SDU(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v4,v4);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x0E1D,0x0E1D);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_16_LAST_WRAPPER_L2(cgen_local_v4,v4);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define RATDM_QUEUE_UL_SDU(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define RATDM_LOG_DROP_UL_SDU(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v3,v3);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x0F1D,0x0F1D);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_LAST_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define RATDM_LOG_DROP_UL_SDU(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define RATDM_LOG_RLLBCK_LTE_DATA(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x01);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x101D,0x101D);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v4,v4);\
			TRC_OUTPUT_16_LAST_WRAPPER_L2(cgen_local_v5,v5);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define RATDM_LOG_RLLBCK_LTE_DATA(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define RATDM_LOG_RLLBCK_LTE_TO_UG(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x01);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x111D,0x111D);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v4,v4);\
			TRC_OUTPUT_16_LAST_WRAPPER_L2(cgen_local_v5,v5);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define RATDM_LOG_RLLBCK_LTE_TO_UG(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define RATDM_LOG_RLLBCK_UG_TO_LTE(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x01);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x121D,0x121D);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v4,v4);\
			TRC_OUTPUT_16_LAST_WRAPPER_L2(cgen_local_v5,v5);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define RATDM_LOG_RLLBCK_UG_TO_LTE(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define RATDM_LOG_RLLBCK_LTE_WARN(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x01);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x131D,0x131D);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v4,v4);\
			TRC_OUTPUT_16_LAST_WRAPPER_L2(cgen_local_v5,v5);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define RATDM_LOG_RLLBCK_LTE_WARN(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define RATDM_LOG_SIT_IRAT_LTE_TO_UG(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x01);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x141D,0x141D);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v4,v4);\
			TRC_OUTPUT_16_LAST_WRAPPER_L2(cgen_local_v5,v5);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define RATDM_LOG_SIT_IRAT_LTE_TO_UG(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define RATDM_LOG_SIT_IRAT_UG_TO_LTE(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x01);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x151D,0x151D);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v4,v4);\
			TRC_OUTPUT_16_LAST_WRAPPER_L2(cgen_local_v5,v5);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define RATDM_LOG_SIT_IRAT_UG_TO_LTE(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define RATDM_LOG_SIT_RESYNC_IN_LTE(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11) do {\
		{\
			TRC_START_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v5,v5);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v6,v6);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v7,v7);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v8,v8);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v9,v9);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v10,v10);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v11,v11);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v5,v5);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v6,v6);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v7,v7);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v8,v8);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v9,v9);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v10,v10);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v11,v11);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x161D,0x161D);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v4,v4);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v5,v5);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v6,v6);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v7,v7);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v8,v8);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v9,v9);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v10,v10);\
			TRC_OUTPUT_32_LAST_WRAPPER_L2(cgen_local_v11,v11);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define RATDM_LOG_SIT_RESYNC_IN_LTE(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define RATDM_LOG_SIT_RESYNC_DONE(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x01);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x171D,0x171D);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v4,v4);\
			TRC_OUTPUT_16_LAST_WRAPPER_L2(cgen_local_v5,v5);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define RATDM_LOG_SIT_RESYNC_DONE(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define RATDM_IDLE_CLEAR_LTE_Q_INFO(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x181D,0x181D);\
			TRC_OUTPUT_8_LAST_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define RATDM_IDLE_CLEAR_LTE_Q_INFO(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define RATDM_FREE_EPSB_UL_Q(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x191D,0x191D);\
			TRC_OUTPUT_8_LAST_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define RATDM_FREE_EPSB_UL_Q(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define RATDM_UPDATE_SIT_LEAVE_LTE(v1, v2, v3, v4, v5, v6) do {\
		{\
			TRC_START_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x01);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x1A1D,0x1A1D);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v4,v4);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v5,v5);\
			TRC_OUTPUT_16_LAST_WRAPPER_L2(cgen_local_v6,v6);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define RATDM_UPDATE_SIT_LEAVE_LTE(v1, v2, v3, v4, v5, v6)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define RATDM_UPDATE_SIT_ENTER_LTE(v1, v2, v3, v4, v5, v6) do {\
		{\
			TRC_START_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x01);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x1B1D,0x1B1D);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v4,v4);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v5,v5);\
			TRC_OUTPUT_16_LAST_WRAPPER_L2(cgen_local_v6,v6);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define RATDM_UPDATE_SIT_ENTER_LTE(v1, v2, v3, v4, v5, v6)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define RATDM_UPDATE_SIT_ACTV_EPSB(v1, v2, v3, v4, v5, v6) do {\
		{\
			TRC_START_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x01);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x1C1D,0x1C1D);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v4,v4);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v5,v5);\
			TRC_OUTPUT_16_LAST_WRAPPER_L2(cgen_local_v6,v6);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define RATDM_UPDATE_SIT_ACTV_EPSB(v1, v2, v3, v4, v5, v6)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define RATDM_UPDATE_LTE_START_IDX(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v4,v4);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x1D1D,0x1D1D);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_16_LAST_WRAPPER_L2(cgen_local_v4,v4);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define RATDM_UPDATE_LTE_START_IDX(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define RATDM_RESYNC_SIT_FROM_START(v1, v2, v3, v4, v5, v6) do {\
		{\
			TRC_START_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x01);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x1E1D,0x1E1D);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v4,v4);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v5,v5);\
			TRC_OUTPUT_16_LAST_WRAPPER_L2(cgen_local_v6,v6);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define RATDM_RESYNC_SIT_FROM_START(v1, v2, v3, v4, v5, v6)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define RATDM_UL_DUMMY(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v3,v3);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x1F1D,0x1F1D);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_32_LAST_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define RATDM_UL_DUMMY(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define RATDM_PROCESS_EPSB_DL_CYCLES(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v3,v3);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x201D,0x201D);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_32_LAST_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define RATDM_PROCESS_EPSB_DL_CYCLES(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define RATDM_PROCESS_UL_SDU(v1, v2, v3, v4, v5, v6) do {\
		{\
			TRC_START_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x01);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x211D,0x211D);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v4,v4);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v5,v5);\
			TRC_OUTPUT_32_LAST_WRAPPER_L2(cgen_local_v6,v6);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define RATDM_PROCESS_UL_SDU(v1, v2, v3, v4, v5, v6)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define RATDM_RCV_UL(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x221D,0x221D);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define RATDM_RCV_UL(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define RATDM_LOG_POLL_IDLE_LEAVE_IND(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x231D,0x231D);\
			TRC_OUTPUT_16_LAST_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define RATDM_LOG_POLL_IDLE_LEAVE_IND(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define RATDM_LOG_QUEUE_RS_PKT(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v3,v3);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x241D,0x241D);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_8_LAST_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define RATDM_LOG_QUEUE_RS_PKT(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define RATDM_LOG_DROP_SYNC_PKT(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v3,v3);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x251D,0x251D);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_8_LAST_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define RATDM_LOG_DROP_SYNC_PKT(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define RATDM_LOG_ROLLBACK_IMS_PKT(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x261D,0x261D);\
			TRC_OUTPUT_8_LAST_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define RATDM_LOG_ROLLBACK_IMS_PKT(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define RATDM_LOG_NO_DNS_IN_QUEUE(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x271D,0x271D);\
			TRC_OUTPUT_8_LAST_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define RATDM_LOG_NO_DNS_IN_QUEUE(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define RATDM_LOG_DNS_IN_EPSB_QUEUE(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x281D,0x281D);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define RATDM_LOG_DNS_IN_EPSB_QUEUE(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define RATDM_AC_BAR_ALLEVIATE(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v3,v3);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x291D,0x291D);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_8_LAST_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define RATDM_AC_BAR_ALLEVIATE(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UPCM_LOG_SIT_FULL(v1, v2, v3, v4, v5, v6, v7, v8, v9) do {\
		{\
			TRC_START_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v5,v5);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v6,v6);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v7,v7);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v8,v8);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v9,v9);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v5,v5);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v6,v6);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v7,v7);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v8,v8);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v9,v9);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x2A1D,0x2A1D);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v4,v4);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v5,v5);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v6,v6);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v7,v7);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v8,v8);\
			TRC_OUTPUT_32_LAST_WRAPPER_L2(cgen_local_v9,v9);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define UPCM_LOG_SIT_FULL(v1, v2, v3, v4, v5, v6, v7, v8, v9)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UPCM_LOG_SIT_FULL_GPD(v1, v2, v3, v4, v5, v6, v7, v8) do {\
		{\
			TRC_START_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x04);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x2B1D,0x2B1D);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v4,v4);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v5,v5);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v6,v6);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v7,v7);\
			TRC_OUTPUT_32_LAST_WRAPPER_L2(cgen_local_v8,v8);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define UPCM_LOG_SIT_FULL_GPD(v1, v2, v3, v4, v5, v6, v7, v8)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UPCM_LOG_MOVE_HEAD(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x04);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x2C1D,0x2C1D);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v4,v4);\
			TRC_OUTPUT_16_LAST_WRAPPER_L2(cgen_local_v5,v5);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define UPCM_LOG_MOVE_HEAD(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UPCM_LOG_RCV_UL_SUSPEND_BYPASS(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x2D1D,0x2D1D);\
			TRC_OUTPUT_16_LAST_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define UPCM_LOG_RCV_UL_SUSPEND_BYPASS(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UPCM_LOG_RCV_UL_SUSPEND(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v3,v3);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x2E1D,0x2E1D);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_LAST_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define UPCM_LOG_RCV_UL_SUSPEND(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UPCM_LOG_RCV_UL_SUSPEND_GPD(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x2F1D,0x2F1D);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define UPCM_LOG_RCV_UL_SUSPEND_GPD(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UPCM_LOG_RESUME_PROC_PIT_Q(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v3,v3);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x301D,0x301D);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_LAST_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define UPCM_LOG_RESUME_PROC_PIT_Q(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UPCM_LOG_RESUME_RLBK_SIT(v1, v2, v3, v4, v5, v6) do {\
		{\
			TRC_START_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x04);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x311D,0x311D);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v4,v4);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v5,v5);\
			TRC_OUTPUT_16_LAST_WRAPPER_L2(cgen_local_v6,v6);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define UPCM_LOG_RESUME_RLBK_SIT(v1, v2, v3, v4, v5, v6)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UPCM_LOG_RCV_UL_REQ_EBI_GPD(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v4,v4);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x321D,0x321D);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_32_LAST_WRAPPER_L2(cgen_local_v4,v4);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define UPCM_LOG_RCV_UL_REQ_EBI_GPD(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UPCM_LOG_QUEUE_PKT_IN_PIT(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v3,v3);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x331D,0x331D);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_LAST_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define UPCM_LOG_QUEUE_PKT_IN_PIT(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UPCM_LOG_DROP_PKT_IN_PIT(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v3,v3);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x341D,0x341D);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_LAST_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define UPCM_LOG_DROP_PKT_IN_PIT(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UPCM_LOG_DROP_UL_REQ_GPD(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v3,v3);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x351D,0x351D);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_32_LAST_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define UPCM_LOG_DROP_UL_REQ_GPD(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UPCM_LOG_DROP_UL_SDU(v1, v2, v3, v4, v5, v6) do {\
		{\
			TRC_START_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x04);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x361D,0x361D);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v4,v4);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v5,v5);\
			TRC_OUTPUT_8_LAST_WRAPPER_L2(cgen_local_v6,v6);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define UPCM_LOG_DROP_UL_SDU(v1, v2, v3, v4, v5, v6)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UPCM_LOG_ROLLBACK_DEBUG_1(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x371D,0x371D);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define UPCM_LOG_ROLLBACK_DEBUG_1(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UPCM_LOG_ROLLBACK_DEBUG_2(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x381D,0x381D);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define UPCM_LOG_ROLLBACK_DEBUG_2(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UPCM_LOG_PROCESSED_PKT_INFO(v1, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v3,v3);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x391D,0x391D);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define UPCM_LOG_PROCESSED_PKT_INFO(v1, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UPCM_LOG_GEN_KEEP_CONNECTED(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v3,v3);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x3A1D,0x3A1D);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_LAST_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define UPCM_LOG_GEN_KEEP_CONNECTED(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UPCM_LOG_HAS_INTERNET_PDN(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v3,v3);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x3B1D,0x3B1D);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_8_LAST_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define UPCM_LOG_HAS_INTERNET_PDN(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define RATDM_IDLE_LEAVE_BY_UPCM_FEATURE_301(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x3C1D,0x3C1D);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define RATDM_IDLE_LEAVE_BY_UPCM_FEATURE_301(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UPCM_LOG_PAGING_SESSION_STATUS(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x3D1D,0x3D1D);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define UPCM_LOG_PAGING_SESSION_STATUS(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UPCM_LOG_PAGING_SESSION_TYPE(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x3E1D,0x3E1D);\
			TRC_OUTPUT_32_LAST_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define UPCM_LOG_PAGING_SESSION_TYPE(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UPCM_LOG_PAGING_TIME_RELEASE(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x3F1D,0x3F1D);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define UPCM_LOG_PAGING_TIME_RELEASE(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UPCM_LOG_PAGING_V4_PROTOCOL(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x401D,0x401D);\
			TRC_OUTPUT_32_LAST_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define UPCM_LOG_PAGING_V4_PROTOCOL(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UPCM_LOG_PAGING_V6_NXT_HDR(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x411D,0x411D);\
			TRC_OUTPUT_32_LAST_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define UPCM_LOG_PAGING_V6_NXT_HDR(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UPCM_LOG_PAGING_MATCH_RA() do {\
		{\
			TRC_START_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x04);\
			TRC_START_FILL_L2();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L2(0x421D,0x421D);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define UPCM_LOG_PAGING_MATCH_RA()
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UPCM_LOG_PAGING_SIT_CHK_RESULT(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x431D,0x431D);\
			TRC_OUTPUT_32_LAST_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define UPCM_LOG_PAGING_SIT_CHK_RESULT(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UPCM_LOG_PAGING_BOGUS_PKT() do {\
		{\
			TRC_START_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x04);\
			TRC_START_FILL_L2();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L2(0x441D,0x441D);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define UPCM_LOG_PAGING_BOGUS_PKT()
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UPCM_LOG_PAGING_ROHC_PKT() do {\
		{\
			TRC_START_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x04);\
			TRC_START_FILL_L2();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L2(0x451D,0x451D);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define UPCM_LOG_PAGING_ROHC_PKT()
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UPCM_LOG_PAGING_PKT_LEN_ERR() do {\
		{\
			TRC_START_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x04);\
			TRC_START_FILL_L2();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L2(0x461D,0x461D);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define UPCM_LOG_PAGING_PKT_LEN_ERR()
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UPCM_LOG_PAGING_REMAIN_TIME(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x471D,0x471D);\
			TRC_OUTPUT_16_LAST_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define UPCM_LOG_PAGING_REMAIN_TIME(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UPCM_LOG_PAGING_SEND_REL_IND(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x481D,0x481D);\
			TRC_OUTPUT_16_LAST_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define UPCM_LOG_PAGING_SEND_REL_IND(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UPCM_LOG_PAGING_SEND_IND_FAIL(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x491D,0x491D);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define UPCM_LOG_PAGING_SEND_IND_FAIL(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UPCM_LOG_STOP_POLL_UL_TMR() do {\
		{\
			TRC_START_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x04);\
			TRC_START_FILL_L2();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L2(0x4A1D,0x4A1D);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define UPCM_LOG_STOP_POLL_UL_TMR()
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UPCM_LOG_START_POLL_UL_TMR(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x4B1D,0x4B1D);\
			TRC_OUTPUT_16_LAST_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define UPCM_LOG_START_POLL_UL_TMR(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UPCM_LOG_SIT_ENTRY_NOT_FREED(v1, v2, v3, v4, v5, v6) do {\
		{\
			TRC_START_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x04);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x4C1D,0x4C1D);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v4,v4);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v5,v5);\
			TRC_OUTPUT_16_LAST_WRAPPER_L2(cgen_local_v6,v6);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define UPCM_LOG_SIT_ENTRY_NOT_FREED(v1, v2, v3, v4, v5, v6)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UPCM_LOG_TEST_MODE_DL(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v3,v3);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x4D1D,0x4D1D);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_8_LAST_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define UPCM_LOG_TEST_MODE_DL(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UPCM_LOG_FORCE_SW_PATH_EBI(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v4,v4);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x4E1D,0x4E1D);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_32_LAST_WRAPPER_L2(cgen_local_v4,v4);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define UPCM_LOG_FORCE_SW_PATH_EBI(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UPCM_LOG_FORCE_SW_PATH_PDN(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v3,v3);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x4F1D,0x4F1D);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_32_LAST_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define UPCM_LOG_FORCE_SW_PATH_PDN(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UPCM_LOG_DL_IP_TAG_LOG_ERR(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x501D,0x501D);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define UPCM_LOG_DL_IP_TAG_LOG_ERR(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UPCM_LOG_HW_LOG_ERR(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v4,v4);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x511D,0x511D);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_32_LAST_WRAPPER_L2(cgen_local_v4,v4);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define UPCM_LOG_HW_LOG_ERR(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UPCM_LOG_HW_LOG_ERR_2(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x521D,0x521D);\
			TRC_OUTPUT_16_LAST_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define UPCM_LOG_HW_LOG_ERR_2(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UPCM_LOG_UL_IP_TAG_INJ_SET(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x531D,0x531D);\
			TRC_OUTPUT_8_LAST_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define UPCM_LOG_UL_IP_TAG_INJ_SET(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UPCM_LOG_DL_IP_TAG_INJ_SET(v1, v2, v3, v4, v5, v6) do {\
		{\
			TRC_START_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x04);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x541D,0x541D);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v4,v4);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v5,v5);\
			TRC_OUTPUT_16_LAST_WRAPPER_L2(cgen_local_v6,v6);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define UPCM_LOG_DL_IP_TAG_INJ_SET(v1, v2, v3, v4, v5, v6)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UPCM_LOG_DID_CONT_EOL_0() do {\
		{\
			TRC_START_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x04);\
			TRC_START_FILL_L2();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L2(0x551D,0x551D);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define UPCM_LOG_DID_CONT_EOL_0()
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UPCM_LOG_RESET_EPSB(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x561D,0x561D);\
			TRC_OUTPUT_8_LAST_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define UPCM_LOG_RESET_EPSB(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UPCM_LOG_PROC_PF(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v3,v3);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x571D,0x571D);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_8_LAST_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define UPCM_LOG_PROC_PF(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UPCM_LOG_REBIND_RSP(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x04);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x581D,0x581D);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v4,v4);\
			TRC_OUTPUT_8_LAST_WRAPPER_L2(cgen_local_v5,v5);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define UPCM_LOG_REBIND_RSP(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UPCM_LOG_BIND_FAIL(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x591D,0x591D);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define UPCM_LOG_BIND_FAIL(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UPCM_LOG_REBIND_FAIL(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x5A1D,0x5A1D);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define UPCM_LOG_REBIND_FAIL(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UPCM_LOG_BIND_WITH_TEST(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x5B1D,0x5B1D);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define UPCM_LOG_BIND_WITH_TEST(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UPCM_LOG_SUSP_RESUME(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v4,v4);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x5C1D,0x5C1D);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_16_LAST_WRAPPER_L2(cgen_local_v4,v4);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define UPCM_LOG_SUSP_RESUME(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UPCM_LOG_NOTIF_LTE_TICK(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x5D1D,0x5D1D);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define UPCM_LOG_NOTIF_LTE_TICK(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UPCM_LOG_ACTV_TEST_MODE(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x5E1D,0x5E1D);\
			TRC_OUTPUT_8_LAST_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define UPCM_LOG_ACTV_TEST_MODE(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UPCM_LOG_DEACTV_TEST_MODE(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x5F1D,0x5F1D);\
			TRC_OUTPUT_8_LAST_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define UPCM_LOG_DEACTV_TEST_MODE(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UPCM_LOG_TEST_MODE_FAIL(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x601D,0x601D);\
			TRC_OUTPUT_8_LAST_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define UPCM_LOG_TEST_MODE_FAIL(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UPCM_LOG_TEST_LOOP(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v3,v3);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x611D,0x611D);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_8_LAST_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define UPCM_LOG_TEST_LOOP(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UPCM_LOG_TEST_LOOP_RCV(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x621D,0x621D);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define UPCM_LOG_TEST_LOOP_RCV(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UPCM_LOG_TEST_LOOP_RSP(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v4,v4);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x631D,0x631D);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_8_LAST_WRAPPER_L2(cgen_local_v4,v4);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define UPCM_LOG_TEST_LOOP_RSP(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UPCM_LOG_TEST_LOOP_IND_RCV(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v3,v3);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x641D,0x641D);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_8_LAST_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define UPCM_LOG_TEST_LOOP_IND_RCV(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UPCM_LOG_SET_EPSB_IMS_TYPE(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v3,v3);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x651D,0x651D);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_8_LAST_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define UPCM_LOG_SET_EPSB_IMS_TYPE(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UPCM_LOG_CLEAR_EPSB_IMS_TYPE(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v3,v3);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x661D,0x661D);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_8_LAST_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define UPCM_LOG_CLEAR_EPSB_IMS_TYPE(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UPCM_LOG_VA_SHORTAGE_NTF(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x671D,0x671D);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define UPCM_LOG_VA_SHORTAGE_NTF(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UPCM_LOG_DL_QUEUING_ON(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x681D,0x681D);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define UPCM_LOG_DL_QUEUING_ON(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UPCM_LOG_DL_QUEUING_OFF(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x691D,0x691D);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define UPCM_LOG_DL_QUEUING_OFF(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UPCM_LOG_POLL_PIT_TMR_RESTART(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x6A1D,0x6A1D);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define UPCM_LOG_POLL_PIT_TMR_RESTART(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UPCM_LOG_POLL_PIT_TMR_STOP(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x6B1D,0x6B1D);\
			TRC_OUTPUT_32_LAST_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define UPCM_LOG_POLL_PIT_TMR_STOP(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UPCM_LOG_POLL_PIT_TMR_TMOUT() do {\
		{\
			TRC_START_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x04);\
			TRC_START_FILL_L2();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L2(0x6C1D,0x6C1D);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define UPCM_LOG_POLL_PIT_TMR_TMOUT()
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UPCM_LOG_DUMMY_X(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v4,v4);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x6D1D,0x6D1D);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_32_LAST_WRAPPER_L2(cgen_local_v4,v4);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define UPCM_LOG_DUMMY_X(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UPCM_LOG_DUMMY_D(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v4,v4);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x6E1D,0x6E1D);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_32_LAST_WRAPPER_L2(cgen_local_v4,v4);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define UPCM_LOG_DUMMY_D(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define TFTPF_AddPFLink(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v3,v3);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x6F1D,0x6F1D);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_32_LAST_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x10);\
		}\
	} while(0)
#else
	#define TFTPF_AddPFLink(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define TFTPF_RemovePFLink(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v3,v3);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x701D,0x701D);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_32_LAST_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x10);\
		}\
	} while(0)
#else
	#define TFTPF_RemovePFLink(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define TFTPF_GetNoPF_EBI(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x711D,0x711D);\
			TRC_OUTPUT_16_LAST_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x10);\
		}\
	} while(0)
#else
	#define TFTPF_GetNoPF_EBI(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define TFTPF_ActvEPSB(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v3,v3);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x721D,0x721D);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_8_LAST_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x10);\
		}\
	} while(0)
#else
	#define TFTPF_ActvEPSB(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define TFTPF_DeactEPSB(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v3,v3);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x731D,0x731D);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_8_LAST_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x10);\
		}\
	} while(0)
#else
	#define TFTPF_DeactEPSB(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define TFTPF_AddPF(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v4,v4);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x741D,0x741D);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_32_LAST_WRAPPER_L2(cgen_local_v4,v4);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x10);\
		}\
	} while(0)
#else
	#define TFTPF_AddPF(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define TFTPF_ReplacePF(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v3,v3);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x751D,0x751D);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_32_LAST_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x10);\
		}\
	} while(0)
#else
	#define TFTPF_ReplacePF(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define TFTPF_DelPF(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v3,v3);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x761D,0x761D);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_32_LAST_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x10);\
		}\
	} while(0)
#else
	#define TFTPF_DelPF(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define TFTPF_SetDftMatch(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x771D,0x771D);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x10);\
		}\
	} while(0)
#else
	#define TFTPF_SetDftMatch(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define TFTPF_DelAll(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x781D,0x781D);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x10);\
		}\
	} while(0)
#else
	#define TFTPF_DelAll(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define TFTPF_PF_NotFound(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x791D,0x791D);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x10);\
		}\
	} while(0)
#else
	#define TFTPF_PF_NotFound(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define TFTPF_PF_Link_AllocFail(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x7A1D,0x7A1D);\
			TRC_OUTPUT_16_LAST_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x10);\
		}\
	} while(0)
#else
	#define TFTPF_PF_Link_AllocFail(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define TFTPF_DumpPktFilter1(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x20);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v4,v4);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x7B1D,0x7B1D);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_32_LAST_WRAPPER_L2(cgen_local_v4,v4);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x20);\
		}\
	} while(0)
#else
	#define TFTPF_DumpPktFilter1(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define TFTPF_DumpIPAddr(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x20);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v4,v4);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x7C1D,0x7C1D);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_32_LAST_WRAPPER_L2(cgen_local_v4,v4);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x20);\
		}\
	} while(0)
#else
	#define TFTPF_DumpIPAddr(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define TFTPF_DumpIPAddrMsk(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x20);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v4,v4);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x7D1D,0x7D1D);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_32_LAST_WRAPPER_L2(cgen_local_v4,v4);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x20);\
		}\
	} while(0)
#else
	#define TFTPF_DumpIPAddrMsk(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define TFTPF_DumpPFProtocol(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x20);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x7E1D,0x7E1D);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x20);\
		}\
	} while(0)
#else
	#define TFTPF_DumpPFProtocol(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define TFTPF_DumpPFPort(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x20);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v3,v3);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x7F1D,0x7F1D);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_32_LAST_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x20);\
		}\
	} while(0)
#else
	#define TFTPF_DumpPFPort(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define TFTPF_DumpPFSPI(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x20);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x801D,0x801D);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x20);\
		}\
	} while(0)
#else
	#define TFTPF_DumpPFSPI(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define TFTPF_DumpPFTOS(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x20);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x811D,0x811D);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x20);\
		}\
	} while(0)
#else
	#define TFTPF_DumpPFTOS(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define TFTPF_DumpPFFlowLabel(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x20);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x821D,0x821D);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x20);\
		}\
	} while(0)
#else
	#define TFTPF_DumpPFFlowLabel(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define TFTPF_PktCorrupted(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x20);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x831D,0x831D);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x20);\
		}\
	} while(0)
#else
	#define TFTPF_PktCorrupted(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define TFTPF_MatchCorrupted(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x20);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x841D,0x841D);\
			TRC_OUTPUT_16_LAST_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x20);\
		}\
	} while(0)
#else
	#define TFTPF_MatchCorrupted(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define TFTPF_SetFragFlag(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x20);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x851D,0x851D);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x20);\
		}\
	} while(0)
#else
	#define TFTPF_SetFragFlag(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define TFTPF_ClearFragFlag(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x20);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x861D,0x861D);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(NAS_DATA_PATH_Trace_Filter, 1, 0x20);\
		}\
	} while(0)
#else
	#define TFTPF_ClearFragFlag(v1, v2)
#endif



/*******************************/
/* declaration of filter array */
/*******************************/
EXTERN_TMD_FILTER(unsigned char, NAS_DATA_PATH_Trace_Filter, 5);
/*************************/
/* Function declarations */
/*************************/
#ifdef L1_CATCHER

void Set_NAS_DATA_PATH_Filter(unsigned char *setting);

#endif

/************************************/
/* Filter checking API declarations */
/************************************/

#define ChkL1ModFltr_NAS_DATA_PATH()	(FILTER_CHECK(NAS_DATA_PATH_Trace_Filter, 0, 1))
#define ChkL1ClsFltr_NAS_DATA_PATH_RATDM_INFO()	(ChkL1ModFltr_NAS_DATA_PATH()&&(FILTER_CHECK(NAS_DATA_PATH_Trace_Filter, 1, 0x01)))
#define ChkL1ClsFltr_NAS_DATA_PATH_RATDM_DUMP()	(ChkL1ModFltr_NAS_DATA_PATH()&&(FILTER_CHECK(NAS_DATA_PATH_Trace_Filter, 1, 0x02)))
#define ChkL1ClsFltr_NAS_DATA_PATH_UPCM_INFO()	(ChkL1ModFltr_NAS_DATA_PATH()&&(FILTER_CHECK(NAS_DATA_PATH_Trace_Filter, 1, 0x04)))
#define ChkL1ClsFltr_NAS_DATA_PATH_UPCM_DUMP()	(ChkL1ModFltr_NAS_DATA_PATH()&&(FILTER_CHECK(NAS_DATA_PATH_Trace_Filter, 1, 0x08)))
#define ChkL1ClsFltr_NAS_DATA_PATH_TFTPF_INFO()	(ChkL1ModFltr_NAS_DATA_PATH()&&(FILTER_CHECK(NAS_DATA_PATH_Trace_Filter, 1, 0x10)))
#define ChkL1ClsFltr_NAS_DATA_PATH_TFTPF_DUMP()	(ChkL1ModFltr_NAS_DATA_PATH()&&(FILTER_CHECK(NAS_DATA_PATH_Trace_Filter, 1, 0x20)))
#define ChkL1MsgFltr_RATDM_PROCESS_EPSB_UL_Q()	ChkL1ClsFltr_NAS_DATA_PATH_RATDM_INFO()
#define ChkL1MsgFltr_RATDM_PROCESS_EPSB_DL()	ChkL1ClsFltr_NAS_DATA_PATH_RATDM_DUMP()
#define ChkL1MsgFltr_RATDM_EPSB_INIT()	ChkL1ClsFltr_NAS_DATA_PATH_RATDM_INFO()
#define ChkL1MsgFltr_RATDM_IDLE_ENTER()	ChkL1ClsFltr_NAS_DATA_PATH_RATDM_INFO()
#define ChkL1MsgFltr_RATDM_IDLE_LEAVE()	ChkL1ClsFltr_NAS_DATA_PATH_RATDM_DUMP()
#define ChkL1MsgFltr_RATDM_IDLE_LEAVE_REJ()	ChkL1ClsFltr_NAS_DATA_PATH_RATDM_INFO()
#define ChkL1MsgFltr_RATDM_IDLE_LEAVE_REJ_DROP()	ChkL1ClsFltr_NAS_DATA_PATH_RATDM_INFO()
#define ChkL1MsgFltr_RATDM_SUSPEND()	ChkL1ClsFltr_NAS_DATA_PATH_RATDM_INFO()
#define ChkL1MsgFltr_RATDM_RESUME()	ChkL1ClsFltr_NAS_DATA_PATH_RATDM_INFO()
#define ChkL1MsgFltr_RATDM_GEMINI_SUSPEND()	ChkL1ClsFltr_NAS_DATA_PATH_RATDM_INFO()
#define ChkL1MsgFltr_RATDM_GEMINI_SUSPEND_DROP()	ChkL1ClsFltr_NAS_DATA_PATH_RATDM_INFO()
#define ChkL1MsgFltr_RATDM_GEMINI_RESUME()	ChkL1ClsFltr_NAS_DATA_PATH_RATDM_INFO()
#define ChkL1MsgFltr_RATDM_QUERY_UL_DATA_STATUS()	ChkL1ClsFltr_NAS_DATA_PATH_RATDM_INFO()
#define ChkL1MsgFltr_RATDM_IDLE_LEAVE_BY_QUEUED()	ChkL1ClsFltr_NAS_DATA_PATH_RATDM_INFO()
#define ChkL1MsgFltr_RATDM_QUEUE_UL_SDU()	ChkL1ClsFltr_NAS_DATA_PATH_RATDM_INFO()
#define ChkL1MsgFltr_RATDM_LOG_DROP_UL_SDU()	ChkL1ClsFltr_NAS_DATA_PATH_RATDM_INFO()
#define ChkL1MsgFltr_RATDM_LOG_RLLBCK_LTE_DATA()	ChkL1ClsFltr_NAS_DATA_PATH_RATDM_INFO()
#define ChkL1MsgFltr_RATDM_LOG_RLLBCK_LTE_TO_UG()	ChkL1ClsFltr_NAS_DATA_PATH_RATDM_INFO()
#define ChkL1MsgFltr_RATDM_LOG_RLLBCK_UG_TO_LTE()	ChkL1ClsFltr_NAS_DATA_PATH_RATDM_INFO()
#define ChkL1MsgFltr_RATDM_LOG_RLLBCK_LTE_WARN()	ChkL1ClsFltr_NAS_DATA_PATH_RATDM_INFO()
#define ChkL1MsgFltr_RATDM_LOG_SIT_IRAT_LTE_TO_UG()	ChkL1ClsFltr_NAS_DATA_PATH_RATDM_INFO()
#define ChkL1MsgFltr_RATDM_LOG_SIT_IRAT_UG_TO_LTE()	ChkL1ClsFltr_NAS_DATA_PATH_RATDM_INFO()
#define ChkL1MsgFltr_RATDM_LOG_SIT_RESYNC_IN_LTE()	ChkL1ClsFltr_NAS_DATA_PATH_RATDM_INFO()
#define ChkL1MsgFltr_RATDM_LOG_SIT_RESYNC_DONE()	ChkL1ClsFltr_NAS_DATA_PATH_RATDM_INFO()
#define ChkL1MsgFltr_RATDM_IDLE_CLEAR_LTE_Q_INFO()	ChkL1ClsFltr_NAS_DATA_PATH_RATDM_INFO()
#define ChkL1MsgFltr_RATDM_FREE_EPSB_UL_Q()	ChkL1ClsFltr_NAS_DATA_PATH_RATDM_INFO()
#define ChkL1MsgFltr_RATDM_UPDATE_SIT_LEAVE_LTE()	ChkL1ClsFltr_NAS_DATA_PATH_RATDM_INFO()
#define ChkL1MsgFltr_RATDM_UPDATE_SIT_ENTER_LTE()	ChkL1ClsFltr_NAS_DATA_PATH_RATDM_INFO()
#define ChkL1MsgFltr_RATDM_UPDATE_SIT_ACTV_EPSB()	ChkL1ClsFltr_NAS_DATA_PATH_RATDM_INFO()
#define ChkL1MsgFltr_RATDM_UPDATE_LTE_START_IDX()	ChkL1ClsFltr_NAS_DATA_PATH_RATDM_INFO()
#define ChkL1MsgFltr_RATDM_RESYNC_SIT_FROM_START()	ChkL1ClsFltr_NAS_DATA_PATH_RATDM_INFO()
#define ChkL1MsgFltr_RATDM_UL_DUMMY()	ChkL1ClsFltr_NAS_DATA_PATH_RATDM_INFO()
#define ChkL1MsgFltr_RATDM_PROCESS_EPSB_DL_CYCLES()	ChkL1ClsFltr_NAS_DATA_PATH_RATDM_INFO()
#define ChkL1MsgFltr_RATDM_PROCESS_UL_SDU()	ChkL1ClsFltr_NAS_DATA_PATH_RATDM_INFO()
#define ChkL1MsgFltr_RATDM_RCV_UL()	ChkL1ClsFltr_NAS_DATA_PATH_RATDM_INFO()
#define ChkL1MsgFltr_RATDM_LOG_POLL_IDLE_LEAVE_IND()	ChkL1ClsFltr_NAS_DATA_PATH_RATDM_INFO()
#define ChkL1MsgFltr_RATDM_LOG_QUEUE_RS_PKT()	ChkL1ClsFltr_NAS_DATA_PATH_RATDM_INFO()
#define ChkL1MsgFltr_RATDM_LOG_DROP_SYNC_PKT()	ChkL1ClsFltr_NAS_DATA_PATH_RATDM_INFO()
#define ChkL1MsgFltr_RATDM_LOG_ROLLBACK_IMS_PKT()	ChkL1ClsFltr_NAS_DATA_PATH_RATDM_INFO()
#define ChkL1MsgFltr_RATDM_LOG_NO_DNS_IN_QUEUE()	ChkL1ClsFltr_NAS_DATA_PATH_RATDM_INFO()
#define ChkL1MsgFltr_RATDM_LOG_DNS_IN_EPSB_QUEUE()	ChkL1ClsFltr_NAS_DATA_PATH_RATDM_INFO()
#define ChkL1MsgFltr_RATDM_AC_BAR_ALLEVIATE()	ChkL1ClsFltr_NAS_DATA_PATH_RATDM_INFO()
#define ChkL1MsgFltr_UPCM_LOG_SIT_FULL()	ChkL1ClsFltr_NAS_DATA_PATH_UPCM_INFO()
#define ChkL1MsgFltr_UPCM_LOG_SIT_FULL_GPD()	ChkL1ClsFltr_NAS_DATA_PATH_UPCM_INFO()
#define ChkL1MsgFltr_UPCM_LOG_MOVE_HEAD()	ChkL1ClsFltr_NAS_DATA_PATH_UPCM_INFO()
#define ChkL1MsgFltr_UPCM_LOG_RCV_UL_SUSPEND_BYPASS()	ChkL1ClsFltr_NAS_DATA_PATH_UPCM_INFO()
#define ChkL1MsgFltr_UPCM_LOG_RCV_UL_SUSPEND()	ChkL1ClsFltr_NAS_DATA_PATH_UPCM_INFO()
#define ChkL1MsgFltr_UPCM_LOG_RCV_UL_SUSPEND_GPD()	ChkL1ClsFltr_NAS_DATA_PATH_UPCM_INFO()
#define ChkL1MsgFltr_UPCM_LOG_RESUME_PROC_PIT_Q()	ChkL1ClsFltr_NAS_DATA_PATH_UPCM_INFO()
#define ChkL1MsgFltr_UPCM_LOG_RESUME_RLBK_SIT()	ChkL1ClsFltr_NAS_DATA_PATH_UPCM_INFO()
#define ChkL1MsgFltr_UPCM_LOG_RCV_UL_REQ_EBI_GPD()	ChkL1ClsFltr_NAS_DATA_PATH_UPCM_INFO()
#define ChkL1MsgFltr_UPCM_LOG_QUEUE_PKT_IN_PIT()	ChkL1ClsFltr_NAS_DATA_PATH_UPCM_INFO()
#define ChkL1MsgFltr_UPCM_LOG_DROP_PKT_IN_PIT()	ChkL1ClsFltr_NAS_DATA_PATH_UPCM_INFO()
#define ChkL1MsgFltr_UPCM_LOG_DROP_UL_REQ_GPD()	ChkL1ClsFltr_NAS_DATA_PATH_UPCM_INFO()
#define ChkL1MsgFltr_UPCM_LOG_DROP_UL_SDU()	ChkL1ClsFltr_NAS_DATA_PATH_UPCM_INFO()
#define ChkL1MsgFltr_UPCM_LOG_ROLLBACK_DEBUG_1()	ChkL1ClsFltr_NAS_DATA_PATH_UPCM_INFO()
#define ChkL1MsgFltr_UPCM_LOG_ROLLBACK_DEBUG_2()	ChkL1ClsFltr_NAS_DATA_PATH_UPCM_INFO()
#define ChkL1MsgFltr_UPCM_LOG_PROCESSED_PKT_INFO()	ChkL1ClsFltr_NAS_DATA_PATH_UPCM_INFO()
#define ChkL1MsgFltr_UPCM_LOG_GEN_KEEP_CONNECTED()	ChkL1ClsFltr_NAS_DATA_PATH_UPCM_INFO()
#define ChkL1MsgFltr_UPCM_LOG_HAS_INTERNET_PDN()	ChkL1ClsFltr_NAS_DATA_PATH_UPCM_INFO()
#define ChkL1MsgFltr_RATDM_IDLE_LEAVE_BY_UPCM_FEATURE_301()	ChkL1ClsFltr_NAS_DATA_PATH_RATDM_INFO()
#define ChkL1MsgFltr_UPCM_LOG_PAGING_SESSION_STATUS()	ChkL1ClsFltr_NAS_DATA_PATH_UPCM_INFO()
#define ChkL1MsgFltr_UPCM_LOG_PAGING_SESSION_TYPE()	ChkL1ClsFltr_NAS_DATA_PATH_UPCM_INFO()
#define ChkL1MsgFltr_UPCM_LOG_PAGING_TIME_RELEASE()	ChkL1ClsFltr_NAS_DATA_PATH_UPCM_INFO()
#define ChkL1MsgFltr_UPCM_LOG_PAGING_V4_PROTOCOL()	ChkL1ClsFltr_NAS_DATA_PATH_UPCM_INFO()
#define ChkL1MsgFltr_UPCM_LOG_PAGING_V6_NXT_HDR()	ChkL1ClsFltr_NAS_DATA_PATH_UPCM_INFO()
#define ChkL1MsgFltr_UPCM_LOG_PAGING_MATCH_RA()	ChkL1ClsFltr_NAS_DATA_PATH_UPCM_INFO()
#define ChkL1MsgFltr_UPCM_LOG_PAGING_SIT_CHK_RESULT()	ChkL1ClsFltr_NAS_DATA_PATH_UPCM_INFO()
#define ChkL1MsgFltr_UPCM_LOG_PAGING_BOGUS_PKT()	ChkL1ClsFltr_NAS_DATA_PATH_UPCM_INFO()
#define ChkL1MsgFltr_UPCM_LOG_PAGING_ROHC_PKT()	ChkL1ClsFltr_NAS_DATA_PATH_UPCM_INFO()
#define ChkL1MsgFltr_UPCM_LOG_PAGING_PKT_LEN_ERR()	ChkL1ClsFltr_NAS_DATA_PATH_UPCM_INFO()
#define ChkL1MsgFltr_UPCM_LOG_PAGING_REMAIN_TIME()	ChkL1ClsFltr_NAS_DATA_PATH_UPCM_INFO()
#define ChkL1MsgFltr_UPCM_LOG_PAGING_SEND_REL_IND()	ChkL1ClsFltr_NAS_DATA_PATH_UPCM_INFO()
#define ChkL1MsgFltr_UPCM_LOG_PAGING_SEND_IND_FAIL()	ChkL1ClsFltr_NAS_DATA_PATH_UPCM_INFO()
#define ChkL1MsgFltr_UPCM_LOG_STOP_POLL_UL_TMR()	ChkL1ClsFltr_NAS_DATA_PATH_UPCM_INFO()
#define ChkL1MsgFltr_UPCM_LOG_START_POLL_UL_TMR()	ChkL1ClsFltr_NAS_DATA_PATH_UPCM_INFO()
#define ChkL1MsgFltr_UPCM_LOG_SIT_ENTRY_NOT_FREED()	ChkL1ClsFltr_NAS_DATA_PATH_UPCM_INFO()
#define ChkL1MsgFltr_UPCM_LOG_TEST_MODE_DL()	ChkL1ClsFltr_NAS_DATA_PATH_UPCM_INFO()
#define ChkL1MsgFltr_UPCM_LOG_FORCE_SW_PATH_EBI()	ChkL1ClsFltr_NAS_DATA_PATH_UPCM_INFO()
#define ChkL1MsgFltr_UPCM_LOG_FORCE_SW_PATH_PDN()	ChkL1ClsFltr_NAS_DATA_PATH_UPCM_INFO()
#define ChkL1MsgFltr_UPCM_LOG_DL_IP_TAG_LOG_ERR()	ChkL1ClsFltr_NAS_DATA_PATH_UPCM_INFO()
#define ChkL1MsgFltr_UPCM_LOG_HW_LOG_ERR()	ChkL1ClsFltr_NAS_DATA_PATH_UPCM_INFO()
#define ChkL1MsgFltr_UPCM_LOG_HW_LOG_ERR_2()	ChkL1ClsFltr_NAS_DATA_PATH_UPCM_INFO()
#define ChkL1MsgFltr_UPCM_LOG_UL_IP_TAG_INJ_SET()	ChkL1ClsFltr_NAS_DATA_PATH_UPCM_INFO()
#define ChkL1MsgFltr_UPCM_LOG_DL_IP_TAG_INJ_SET()	ChkL1ClsFltr_NAS_DATA_PATH_UPCM_INFO()
#define ChkL1MsgFltr_UPCM_LOG_DID_CONT_EOL_0()	ChkL1ClsFltr_NAS_DATA_PATH_UPCM_INFO()
#define ChkL1MsgFltr_UPCM_LOG_RESET_EPSB()	ChkL1ClsFltr_NAS_DATA_PATH_UPCM_INFO()
#define ChkL1MsgFltr_UPCM_LOG_PROC_PF()	ChkL1ClsFltr_NAS_DATA_PATH_UPCM_INFO()
#define ChkL1MsgFltr_UPCM_LOG_REBIND_RSP()	ChkL1ClsFltr_NAS_DATA_PATH_UPCM_INFO()
#define ChkL1MsgFltr_UPCM_LOG_BIND_FAIL()	ChkL1ClsFltr_NAS_DATA_PATH_UPCM_INFO()
#define ChkL1MsgFltr_UPCM_LOG_REBIND_FAIL()	ChkL1ClsFltr_NAS_DATA_PATH_UPCM_INFO()
#define ChkL1MsgFltr_UPCM_LOG_BIND_WITH_TEST()	ChkL1ClsFltr_NAS_DATA_PATH_UPCM_INFO()
#define ChkL1MsgFltr_UPCM_LOG_SUSP_RESUME()	ChkL1ClsFltr_NAS_DATA_PATH_UPCM_INFO()
#define ChkL1MsgFltr_UPCM_LOG_NOTIF_LTE_TICK()	ChkL1ClsFltr_NAS_DATA_PATH_UPCM_INFO()
#define ChkL1MsgFltr_UPCM_LOG_ACTV_TEST_MODE()	ChkL1ClsFltr_NAS_DATA_PATH_UPCM_INFO()
#define ChkL1MsgFltr_UPCM_LOG_DEACTV_TEST_MODE()	ChkL1ClsFltr_NAS_DATA_PATH_UPCM_INFO()
#define ChkL1MsgFltr_UPCM_LOG_TEST_MODE_FAIL()	ChkL1ClsFltr_NAS_DATA_PATH_UPCM_INFO()
#define ChkL1MsgFltr_UPCM_LOG_TEST_LOOP()	ChkL1ClsFltr_NAS_DATA_PATH_UPCM_INFO()
#define ChkL1MsgFltr_UPCM_LOG_TEST_LOOP_RCV()	ChkL1ClsFltr_NAS_DATA_PATH_UPCM_INFO()
#define ChkL1MsgFltr_UPCM_LOG_TEST_LOOP_RSP()	ChkL1ClsFltr_NAS_DATA_PATH_UPCM_INFO()
#define ChkL1MsgFltr_UPCM_LOG_TEST_LOOP_IND_RCV()	ChkL1ClsFltr_NAS_DATA_PATH_UPCM_INFO()
#define ChkL1MsgFltr_UPCM_LOG_SET_EPSB_IMS_TYPE()	ChkL1ClsFltr_NAS_DATA_PATH_UPCM_INFO()
#define ChkL1MsgFltr_UPCM_LOG_CLEAR_EPSB_IMS_TYPE()	ChkL1ClsFltr_NAS_DATA_PATH_UPCM_INFO()
#define ChkL1MsgFltr_UPCM_LOG_VA_SHORTAGE_NTF()	ChkL1ClsFltr_NAS_DATA_PATH_UPCM_INFO()
#define ChkL1MsgFltr_UPCM_LOG_DL_QUEUING_ON()	ChkL1ClsFltr_NAS_DATA_PATH_UPCM_INFO()
#define ChkL1MsgFltr_UPCM_LOG_DL_QUEUING_OFF()	ChkL1ClsFltr_NAS_DATA_PATH_UPCM_INFO()
#define ChkL1MsgFltr_UPCM_LOG_POLL_PIT_TMR_RESTART()	ChkL1ClsFltr_NAS_DATA_PATH_UPCM_INFO()
#define ChkL1MsgFltr_UPCM_LOG_POLL_PIT_TMR_STOP()	ChkL1ClsFltr_NAS_DATA_PATH_UPCM_INFO()
#define ChkL1MsgFltr_UPCM_LOG_POLL_PIT_TMR_TMOUT()	ChkL1ClsFltr_NAS_DATA_PATH_UPCM_INFO()
#define ChkL1MsgFltr_UPCM_LOG_DUMMY_X()	ChkL1ClsFltr_NAS_DATA_PATH_UPCM_INFO()
#define ChkL1MsgFltr_UPCM_LOG_DUMMY_D()	ChkL1ClsFltr_NAS_DATA_PATH_UPCM_INFO()
#define ChkL1MsgFltr_TFTPF_AddPFLink()	ChkL1ClsFltr_NAS_DATA_PATH_TFTPF_INFO()
#define ChkL1MsgFltr_TFTPF_RemovePFLink()	ChkL1ClsFltr_NAS_DATA_PATH_TFTPF_INFO()
#define ChkL1MsgFltr_TFTPF_GetNoPF_EBI()	ChkL1ClsFltr_NAS_DATA_PATH_TFTPF_INFO()
#define ChkL1MsgFltr_TFTPF_ActvEPSB()	ChkL1ClsFltr_NAS_DATA_PATH_TFTPF_INFO()
#define ChkL1MsgFltr_TFTPF_DeactEPSB()	ChkL1ClsFltr_NAS_DATA_PATH_TFTPF_INFO()
#define ChkL1MsgFltr_TFTPF_AddPF()	ChkL1ClsFltr_NAS_DATA_PATH_TFTPF_INFO()
#define ChkL1MsgFltr_TFTPF_ReplacePF()	ChkL1ClsFltr_NAS_DATA_PATH_TFTPF_INFO()
#define ChkL1MsgFltr_TFTPF_DelPF()	ChkL1ClsFltr_NAS_DATA_PATH_TFTPF_INFO()
#define ChkL1MsgFltr_TFTPF_SetDftMatch()	ChkL1ClsFltr_NAS_DATA_PATH_TFTPF_INFO()
#define ChkL1MsgFltr_TFTPF_DelAll()	ChkL1ClsFltr_NAS_DATA_PATH_TFTPF_INFO()
#define ChkL1MsgFltr_TFTPF_PF_NotFound()	ChkL1ClsFltr_NAS_DATA_PATH_TFTPF_INFO()
#define ChkL1MsgFltr_TFTPF_PF_Link_AllocFail()	ChkL1ClsFltr_NAS_DATA_PATH_TFTPF_INFO()
#define ChkL1MsgFltr_TFTPF_DumpPktFilter1()	ChkL1ClsFltr_NAS_DATA_PATH_TFTPF_DUMP()
#define ChkL1MsgFltr_TFTPF_DumpIPAddr()	ChkL1ClsFltr_NAS_DATA_PATH_TFTPF_DUMP()
#define ChkL1MsgFltr_TFTPF_DumpIPAddrMsk()	ChkL1ClsFltr_NAS_DATA_PATH_TFTPF_DUMP()
#define ChkL1MsgFltr_TFTPF_DumpPFProtocol()	ChkL1ClsFltr_NAS_DATA_PATH_TFTPF_DUMP()
#define ChkL1MsgFltr_TFTPF_DumpPFPort()	ChkL1ClsFltr_NAS_DATA_PATH_TFTPF_DUMP()
#define ChkL1MsgFltr_TFTPF_DumpPFSPI()	ChkL1ClsFltr_NAS_DATA_PATH_TFTPF_DUMP()
#define ChkL1MsgFltr_TFTPF_DumpPFTOS()	ChkL1ClsFltr_NAS_DATA_PATH_TFTPF_DUMP()
#define ChkL1MsgFltr_TFTPF_DumpPFFlowLabel()	ChkL1ClsFltr_NAS_DATA_PATH_TFTPF_DUMP()
#define ChkL1MsgFltr_TFTPF_PktCorrupted()	ChkL1ClsFltr_NAS_DATA_PATH_TFTPF_DUMP()
#define ChkL1MsgFltr_TFTPF_MatchCorrupted()	ChkL1ClsFltr_NAS_DATA_PATH_TFTPF_DUMP()
#define ChkL1MsgFltr_TFTPF_SetFragFlag()	ChkL1ClsFltr_NAS_DATA_PATH_TFTPF_DUMP()
#define ChkL1MsgFltr_TFTPF_ClearFragFlag()	ChkL1ClsFltr_NAS_DATA_PATH_TFTPF_DUMP()


#endif
