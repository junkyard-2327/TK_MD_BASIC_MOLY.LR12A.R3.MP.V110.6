#ifndef L1TRC_HIF_DRV_DEF_H
#define L1TRC_HIF_DRV_DEF_H

/******************************/
/* String category definition */
/******************************/


/****************************/
/* Message macro definition */
/****************************/
#include "L1Trc.h"
#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define HIF_DRV_DUMMY(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L2(HIF_DRV_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x002A,0x002A);\
			TRC_OUTPUT_16_LAST_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(HIF_DRV_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define HIF_DRV_DUMMY(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define LHIF_TASK_TRC_GET_HMU_EVENT(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L2(HIF_DRV_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x012A,0x012A);\
			TRC_OUTPUT_32_LAST_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(HIF_DRV_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define LHIF_TASK_TRC_GET_HMU_EVENT(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define LHIF_TASK_TRC_WAIT_HMU_EVENT(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L2(HIF_DRV_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x022A,0x022A);\
			TRC_OUTPUT_32_LAST_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(HIF_DRV_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define LHIF_TASK_TRC_WAIT_HMU_EVENT(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define LHIF_TASK_TRC_RECEIVE_MSG_START() do {\
		{\
			TRC_START_FILTER_CHECK_L2(HIF_DRV_Trace_Filter, 1, 0x04);\
			TRC_START_FILL_L2();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L2(0x032A,0x032A);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(HIF_DRV_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define LHIF_TASK_TRC_RECEIVE_MSG_START()
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define LHIF_TASK_TRC_RECEIVE_MSG_END() do {\
		{\
			TRC_START_FILTER_CHECK_L2(HIF_DRV_Trace_Filter, 1, 0x04);\
			TRC_START_FILL_L2();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L2(0x042A,0x042A);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(HIF_DRV_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define LHIF_TASK_TRC_RECEIVE_MSG_END()
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define LHIF_TASK_TRC_AP_UL_POLLING_START(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L2(HIF_DRV_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x052A,0x052A);\
			TRC_OUTPUT_16_LAST_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(HIF_DRV_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define LHIF_TASK_TRC_AP_UL_POLLING_START(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define LHIF_TASK_TRC_AP_UL_POLLING_END(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L2(HIF_DRV_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x062A,0x062A);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(HIF_DRV_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define LHIF_TASK_TRC_AP_UL_POLLING_END(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define LHIF_TASK_TRC_POLLING_NOTHING() do {\
		{\
			TRC_START_FILTER_CHECK_L2(HIF_DRV_Trace_Filter, 1, 0x04);\
			TRC_START_FILL_L2();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L2(0x072A,0x072A);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(HIF_DRV_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define LHIF_TASK_TRC_POLLING_NOTHING()
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define LHIF_TASK_TRC_HW_LOG_POLLING_START() do {\
		{\
			TRC_START_FILTER_CHECK_L2(HIF_DRV_Trace_Filter, 1, 0x04);\
			TRC_START_FILL_L2();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L2(0x082A,0x082A);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(HIF_DRV_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define LHIF_TASK_TRC_HW_LOG_POLLING_START()
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define LHIF_TASK_TRC_HW_LOG_POLLING_END() do {\
		{\
			TRC_START_FILTER_CHECK_L2(HIF_DRV_Trace_Filter, 1, 0x04);\
			TRC_START_FILL_L2();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L2(0x092A,0x092A);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(HIF_DRV_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define LHIF_TASK_TRC_HW_LOG_POLLING_END()
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define LHIF_TASK_TRC_HW_FULL_CHECK_START() do {\
		{\
			TRC_START_FILTER_CHECK_L2(HIF_DRV_Trace_Filter, 1, 0x04);\
			TRC_START_FILL_L2();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L2(0x0A2A,0x0A2A);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(HIF_DRV_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define LHIF_TASK_TRC_HW_FULL_CHECK_START()
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define LHIF_TASK_TRC_HW_FULL_CHECK_END() do {\
		{\
			TRC_START_FILTER_CHECK_L2(HIF_DRV_Trace_Filter, 1, 0x04);\
			TRC_START_FILL_L2();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L2(0x0B2A,0x0B2A);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(HIF_DRV_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define LHIF_TASK_TRC_HW_FULL_CHECK_END()
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define LHIF_TASK_TRC_SET_LHIF_UL_EVENT() do {\
		{\
			TRC_START_FILTER_CHECK_L2(HIF_DRV_Trace_Filter, 1, 0x04);\
			TRC_START_FILL_L2();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L2(0x0C2A,0x0C2A);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(HIF_DRV_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define LHIF_TASK_TRC_SET_LHIF_UL_EVENT()
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define LHIF_TASK_TRC_SET_LHIF_LOG_EVENT() do {\
		{\
			TRC_START_FILTER_CHECK_L2(HIF_DRV_Trace_Filter, 1, 0x04);\
			TRC_START_FILL_L2();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L2(0x0D2A,0x0D2A);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(HIF_DRV_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define LHIF_TASK_TRC_SET_LHIF_LOG_EVENT()
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define LHIF_TASK_TRC_META_FULL(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L2(HIF_DRV_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x0E2A,0x0E2A);\
			TRC_OUTPUT_32_LAST_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(HIF_DRV_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define LHIF_TASK_TRC_META_FULL(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define LHIF_TASK_TRC_QP_FULL(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L2(HIF_DRV_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x0F2A,0x0F2A);\
			TRC_OUTPUT_32_LAST_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(HIF_DRV_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define LHIF_TASK_TRC_QP_FULL(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define LHIF_TASK_TRC_LOG_FULL(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L2(HIF_DRV_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x102A,0x102A);\
			TRC_OUTPUT_32_LAST_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(HIF_DRV_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define LHIF_TASK_TRC_LOG_FULL(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define LHIF_TASK_TRC_SW_UL_ENABLE(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L2(HIF_DRV_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x112A,0x112A);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(HIF_DRV_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define LHIF_TASK_TRC_SW_UL_ENABLE(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define LHIF_TASK_TRC_LHIF_NOT_INIT() do {\
		{\
			TRC_START_FILTER_CHECK_L2(HIF_DRV_Trace_Filter, 1, 0x04);\
			TRC_START_FILL_L2();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L2(0x122A,0x122A);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(HIF_DRV_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define LHIF_TASK_TRC_LHIF_NOT_INIT()
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define LHIF_TASK_TRC_POWER_ON(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L2(HIF_DRV_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x132A,0x132A);\
			TRC_OUTPUT_16_LAST_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(HIF_DRV_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define LHIF_TASK_TRC_POWER_ON(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define LHIF_TASK_TRC_POWER_DOWN(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L2(HIF_DRV_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x142A,0x142A);\
			TRC_OUTPUT_16_LAST_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(HIF_DRV_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define LHIF_TASK_TRC_POWER_DOWN(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define LHIF_DATA_TRC_SEND_DESC_START(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L2(HIF_DRV_Trace_Filter, 1, 0x20);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x152A,0x152A);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v4,v4);\
			TRC_OUTPUT_32_LAST_WRAPPER_L2(cgen_local_v5,v5);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(HIF_DRV_Trace_Filter, 1, 0x20);\
		}\
	} while(0)
#else
	#define LHIF_DATA_TRC_SEND_DESC_START(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define LHIF_DATA_TRC_SEND_DESC_END(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L2(HIF_DRV_Trace_Filter, 1, 0x20);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x162A,0x162A);\
			TRC_OUTPUT_16_LAST_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(HIF_DRV_Trace_Filter, 1, 0x20);\
		}\
	} while(0)
#else
	#define LHIF_DATA_TRC_SEND_DESC_END(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define LHIF_DATA_TRC_SEND_DESC_PKT_NUM(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L2(HIF_DRV_Trace_Filter, 1, 0x20);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x172A,0x172A);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(HIF_DRV_Trace_Filter, 1, 0x20);\
		}\
	} while(0)
#else
	#define LHIF_DATA_TRC_SEND_DESC_PKT_NUM(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define LHIF_DATA_TRC_SEND_DESC_HIF_TYPE(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L2(HIF_DRV_Trace_Filter, 1, 0x20);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x182A,0x182A);\
			TRC_OUTPUT_16_LAST_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(HIF_DRV_Trace_Filter, 1, 0x20);\
		}\
	} while(0)
#else
	#define LHIF_DATA_TRC_SEND_DESC_HIF_TYPE(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define LHIF_DATA_TRC_SEND_DESC_ALLOC_SUCCESS() do {\
		{\
			TRC_START_FILTER_CHECK_L2(HIF_DRV_Trace_Filter, 1, 0x20);\
			TRC_START_FILL_L2();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L2(0x192A,0x192A);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(HIF_DRV_Trace_Filter, 1, 0x20);\
		}\
	} while(0)
#else
	#define LHIF_DATA_TRC_SEND_DESC_ALLOC_SUCCESS()
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define LHIF_DATA_TRC_SEND_DESC_ALLOC_FAILED() do {\
		{\
			TRC_START_FILTER_CHECK_L2(HIF_DRV_Trace_Filter, 1, 0x20);\
			TRC_START_FILL_L2();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L2(0x1A2A,0x1A2A);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(HIF_DRV_Trace_Filter, 1, 0x20);\
		}\
	} while(0)
#else
	#define LHIF_DATA_TRC_SEND_DESC_ALLOC_FAILED()
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define LHIF_DATA_TRC_WRITE_INBAND(v1, v2, v3, v4, v5, v6, v7) do {\
		{\
			TRC_START_FILTER_CHECK_L2(HIF_DRV_Trace_Filter, 1, 0x20);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x1B2A,0x1B2A);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v4,v4);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v5,v5);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v6,v6);\
			TRC_OUTPUT_32_LAST_WRAPPER_L2(cgen_local_v7,v7);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(HIF_DRV_Trace_Filter, 1, 0x20);\
		}\
	} while(0)
#else
	#define LHIF_DATA_TRC_WRITE_INBAND(v1, v2, v3, v4, v5, v6, v7)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define LHIF_DATA_TRC_WRITE_NORMAL(v1, v2, v3, v4, v5, v6) do {\
		{\
			TRC_START_FILTER_CHECK_L2(HIF_DRV_Trace_Filter, 1, 0x20);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x1C2A,0x1C2A);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v4,v4);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v5,v5);\
			TRC_OUTPUT_32_LAST_WRAPPER_L2(cgen_local_v6,v6);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(HIF_DRV_Trace_Filter, 1, 0x20);\
		}\
	} while(0)
#else
	#define LHIF_DATA_TRC_WRITE_NORMAL(v1, v2, v3, v4, v5, v6)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define LHIF_DATA_TRC_NOT_LHIF_DID(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L2(HIF_DRV_Trace_Filter, 1, 0x20);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v3,v3);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x1D2A,0x1D2A);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_32_LAST_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(HIF_DRV_Trace_Filter, 1, 0x20);\
		}\
	} while(0)
#else
	#define LHIF_DATA_TRC_NOT_LHIF_DID(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define LHIF_DATA_TRC_SEND_DESC_CURRENT_CNT(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L2(HIF_DRV_Trace_Filter, 1, 0x20);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x1E2A,0x1E2A);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(HIF_DRV_Trace_Filter, 1, 0x20);\
		}\
	} while(0)
#else
	#define LHIF_DATA_TRC_SEND_DESC_CURRENT_CNT(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define LHIF_DATA_TRC_Q_START(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L2(HIF_DRV_Trace_Filter, 1, 0x20);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x1F2A,0x1F2A);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(HIF_DRV_Trace_Filter, 1, 0x20);\
		}\
	} while(0)
#else
	#define LHIF_DATA_TRC_Q_START(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define LHIF_DATA_TRC_SEND_FLUSH_START(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L2(HIF_DRV_Trace_Filter, 1, 0x20);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x202A,0x202A);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v4,v4);\
			TRC_OUTPUT_32_LAST_WRAPPER_L2(cgen_local_v5,v5);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(HIF_DRV_Trace_Filter, 1, 0x20);\
		}\
	} while(0)
#else
	#define LHIF_DATA_TRC_SEND_FLUSH_START(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define LHIF_DATA_TRC_SEND_FLUSH_END() do {\
		{\
			TRC_START_FILTER_CHECK_L2(HIF_DRV_Trace_Filter, 1, 0x20);\
			TRC_START_FILL_L2();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L2(0x212A,0x212A);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(HIF_DRV_Trace_Filter, 1, 0x20);\
		}\
	} while(0)
#else
	#define LHIF_DATA_TRC_SEND_FLUSH_END()
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define LHIF_DATA_TRC_SEND_FLUSH_ALLOC_SUCCESS() do {\
		{\
			TRC_START_FILTER_CHECK_L2(HIF_DRV_Trace_Filter, 1, 0x20);\
			TRC_START_FILL_L2();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L2(0x222A,0x222A);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(HIF_DRV_Trace_Filter, 1, 0x20);\
		}\
	} while(0)
#else
	#define LHIF_DATA_TRC_SEND_FLUSH_ALLOC_SUCCESS()
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define LHIF_DATA_TRC_SEND_FLUSH_ALLOC_FAILED() do {\
		{\
			TRC_START_FILTER_CHECK_L2(HIF_DRV_Trace_Filter, 1, 0x20);\
			TRC_START_FILL_L2();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L2(0x232A,0x232A);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(HIF_DRV_Trace_Filter, 1, 0x20);\
		}\
	} while(0)
#else
	#define LHIF_DATA_TRC_SEND_FLUSH_ALLOC_FAILED()
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define LHIF_DATA_TRC_SEND_UL_Q_USB_START(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L2(HIF_DRV_Trace_Filter, 1, 0x20);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x242A,0x242A);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v4,v4);\
			TRC_OUTPUT_16_LAST_WRAPPER_L2(cgen_local_v5,v5);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(HIF_DRV_Trace_Filter, 1, 0x20);\
		}\
	} while(0)
#else
	#define LHIF_DATA_TRC_SEND_UL_Q_USB_START(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define LHIF_DATA_TRC_SEND_UL_Q_USB_END() do {\
		{\
			TRC_START_FILTER_CHECK_L2(HIF_DRV_Trace_Filter, 1, 0x20);\
			TRC_START_FILL_L2();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L2(0x252A,0x252A);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(HIF_DRV_Trace_Filter, 1, 0x20);\
		}\
	} while(0)
#else
	#define LHIF_DATA_TRC_SEND_UL_Q_USB_END()
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define LHIF_DATA_TRC_SEND_UL_Q_USB_ALLOC_SUCCESS() do {\
		{\
			TRC_START_FILTER_CHECK_L2(HIF_DRV_Trace_Filter, 1, 0x20);\
			TRC_START_FILL_L2();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L2(0x262A,0x262A);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(HIF_DRV_Trace_Filter, 1, 0x20);\
		}\
	} while(0)
#else
	#define LHIF_DATA_TRC_SEND_UL_Q_USB_ALLOC_SUCCESS()
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define LHIF_DATA_TRC_SEND_UL_Q_USB_ALLOC_FAILED() do {\
		{\
			TRC_START_FILTER_CHECK_L2(HIF_DRV_Trace_Filter, 1, 0x20);\
			TRC_START_FILL_L2();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L2(0x272A,0x272A);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(HIF_DRV_Trace_Filter, 1, 0x20);\
		}\
	} while(0)
#else
	#define LHIF_DATA_TRC_SEND_UL_Q_USB_ALLOC_FAILED()
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define LHIF_DATA_TRC_META_POLLING(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L2(HIF_DRV_Trace_Filter, 1, 0x20);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v4,v4);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x282A,0x282A);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_16_LAST_WRAPPER_L2(cgen_local_v4,v4);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(HIF_DRV_Trace_Filter, 1, 0x20);\
		}\
	} while(0)
#else
	#define LHIF_DATA_TRC_META_POLLING(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define LHIF_DATA_TRC_META_READ_DONE(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L2(HIF_DRV_Trace_Filter, 1, 0x20);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v4,v4);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x292A,0x292A);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_16_LAST_WRAPPER_L2(cgen_local_v4,v4);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(HIF_DRV_Trace_Filter, 1, 0x20);\
		}\
	} while(0)
#else
	#define LHIF_DATA_TRC_META_READ_DONE(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define LHIF_DATA_TRC_META_GET_TBL_ADDR(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L2(HIF_DRV_Trace_Filter, 1, 0x20);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x2A2A,0x2A2A);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(HIF_DRV_Trace_Filter, 1, 0x20);\
		}\
	} while(0)
#else
	#define LHIF_DATA_TRC_META_GET_TBL_ADDR(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define LHIF_DATA_TRC_META_GET_TBL_SIZE(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L2(HIF_DRV_Trace_Filter, 1, 0x20);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x2B2A,0x2B2A);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(HIF_DRV_Trace_Filter, 1, 0x20);\
		}\
	} while(0)
#else
	#define LHIF_DATA_TRC_META_GET_TBL_SIZE(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define LHIF_DATA_TRC_FLUSH(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L2(HIF_DRV_Trace_Filter, 1, 0x20);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x2C2A,0x2C2A);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(HIF_DRV_Trace_Filter, 1, 0x20);\
		}\
	} while(0)
#else
	#define LHIF_DATA_TRC_FLUSH(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define LHIF_DATA_TRC_INVALIDATE(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L2(HIF_DRV_Trace_Filter, 1, 0x20);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v4,v4);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x2D2A,0x2D2A);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_16_LAST_WRAPPER_L2(cgen_local_v4,v4);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(HIF_DRV_Trace_Filter, 1, 0x20);\
		}\
	} while(0)
#else
	#define LHIF_DATA_TRC_INVALIDATE(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define LHIF_DATA_TRC_PRINT_DATA(v1, v2, v3, v4, v5, v6) do {\
		{\
			TRC_START_FILTER_CHECK_L2(HIF_DRV_Trace_Filter, 1, 0x20);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x2E2A,0x2E2A);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v4,v4);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v5,v5);\
			TRC_OUTPUT_32_LAST_WRAPPER_L2(cgen_local_v6,v6);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(HIF_DRV_Trace_Filter, 1, 0x20);\
		}\
	} while(0)
#else
	#define LHIF_DATA_TRC_PRINT_DATA(v1, v2, v3, v4, v5, v6)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define LHIF_DATA_TRC_CHANGE_NETIF_TO_FLOW(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L2(HIF_DRV_Trace_Filter, 1, 0x20);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x2F2A,0x2F2A);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(HIF_DRV_Trace_Filter, 1, 0x20);\
		}\
	} while(0)
#else
	#define LHIF_DATA_TRC_CHANGE_NETIF_TO_FLOW(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define LHIF_DATA_TRC_LWA_PRB_COPY(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L2(HIF_DRV_Trace_Filter, 1, 0x20);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x302A,0x302A);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(HIF_DRV_Trace_Filter, 1, 0x20);\
		}\
	} while(0)
#else
	#define LHIF_DATA_TRC_LWA_PRB_COPY(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define LHIF_BM_TRC_ALLOC_START(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L2(HIF_DRV_Trace_Filter, 1, 0x40);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x312A,0x312A);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(HIF_DRV_Trace_Filter, 1, 0x40);\
		}\
	} while(0)
#else
	#define LHIF_BM_TRC_ALLOC_START(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define LHIF_BM_TRC_ALLOC_DONE(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L2(HIF_DRV_Trace_Filter, 1, 0x40);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v4,v4);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x322A,0x322A);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_16_LAST_WRAPPER_L2(cgen_local_v4,v4);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(HIF_DRV_Trace_Filter, 1, 0x40);\
		}\
	} while(0)
#else
	#define LHIF_BM_TRC_ALLOC_DONE(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define LHIF_BM_TRC_ALLOC_FAILED(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L2(HIF_DRV_Trace_Filter, 1, 0x40);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x332A,0x332A);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(HIF_DRV_Trace_Filter, 1, 0x40);\
		}\
	} while(0)
#else
	#define LHIF_BM_TRC_ALLOC_FAILED(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define LHIF_BM_TRC_QUERY_REM_SIZE(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L2(HIF_DRV_Trace_Filter, 1, 0x40);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x342A,0x342A);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(HIF_DRV_Trace_Filter, 1, 0x40);\
		}\
	} while(0)
#else
	#define LHIF_BM_TRC_QUERY_REM_SIZE(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define LHIF_BM_TRC_Q_START(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L2(HIF_DRV_Trace_Filter, 1, 0x40);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x352A,0x352A);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(HIF_DRV_Trace_Filter, 1, 0x40);\
		}\
	} while(0)
#else
	#define LHIF_BM_TRC_Q_START(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define LHIF_NET_TRC_CHANGE_STATE(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L2(HIF_DRV_Trace_Filter, 1, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v3,v3);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x362A,0x362A);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_LAST_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(HIF_DRV_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define LHIF_NET_TRC_CHANGE_STATE(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define LHIF_NET_TRC_SEND_DL_START(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L2(HIF_DRV_Trace_Filter, 1, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v4,v4);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x372A,0x372A);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_32_LAST_WRAPPER_L2(cgen_local_v4,v4);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(HIF_DRV_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define LHIF_NET_TRC_SEND_DL_START(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define LHIF_NET_TRC_SEND_DL_END(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L2(HIF_DRV_Trace_Filter, 1, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x382A,0x382A);\
			TRC_OUTPUT_16_LAST_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(HIF_DRV_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define LHIF_NET_TRC_SEND_DL_END(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define LHIF_NET_TRC_SEND_FLUSH_CMD_START(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L2(HIF_DRV_Trace_Filter, 1, 0x08);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x392A,0x392A);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v4,v4);\
			TRC_OUTPUT_32_LAST_WRAPPER_L2(cgen_local_v5,v5);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(HIF_DRV_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define LHIF_NET_TRC_SEND_FLUSH_CMD_START(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define LHIF_NET_TRC_SEND_FLUSH_CMD_END(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L2(HIF_DRV_Trace_Filter, 1, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x3A2A,0x3A2A);\
			TRC_OUTPUT_16_LAST_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(HIF_DRV_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define LHIF_NET_TRC_SEND_FLUSH_CMD_END(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define LHIF_NET_TRC_UL_DATA_START(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L2(HIF_DRV_Trace_Filter, 1, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v4,v4);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x3B2A,0x3B2A);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_16_LAST_WRAPPER_L2(cgen_local_v4,v4);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(HIF_DRV_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define LHIF_NET_TRC_UL_DATA_START(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define LHIF_NET_TRC_UL_DATA_END(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L2(HIF_DRV_Trace_Filter, 1, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x3C2A,0x3C2A);\
			TRC_OUTPUT_16_LAST_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(HIF_DRV_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define LHIF_NET_TRC_UL_DATA_END(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define LHIF_NET_TRC_META_READ_DONE_START(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L2(HIF_DRV_Trace_Filter, 1, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v3,v3);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x3D2A,0x3D2A);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_LAST_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(HIF_DRV_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define LHIF_NET_TRC_META_READ_DONE_START(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define LHIF_NET_TRC_META_READ_DONE_END() do {\
		{\
			TRC_START_FILTER_CHECK_L2(HIF_DRV_Trace_Filter, 1, 0x08);\
			TRC_START_FILL_L2();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L2(0x3E2A,0x3E2A);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(HIF_DRV_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define LHIF_NET_TRC_META_READ_DONE_END()
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define LHIF_NET_TRC_META_QUERY_START(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L2(HIF_DRV_Trace_Filter, 1, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x3F2A,0x3F2A);\
			TRC_OUTPUT_16_LAST_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(HIF_DRV_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define LHIF_NET_TRC_META_QUERY_START(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define LHIF_NET_TRC_META_QUERY_END(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L2(HIF_DRV_Trace_Filter, 1, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v3,v3);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x402A,0x402A);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_LAST_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(HIF_DRV_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define LHIF_NET_TRC_META_QUERY_END(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define LHIF_NET_TRC_REG_USB_CB(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L2(HIF_DRV_Trace_Filter, 1, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x412A,0x412A);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(HIF_DRV_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define LHIF_NET_TRC_REG_USB_CB(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define LHIF_NET_TRC_COPY_SW_META_TBL(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L2(HIF_DRV_Trace_Filter, 1, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v3,v3);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x422A,0x422A);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_LAST_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(HIF_DRV_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define LHIF_NET_TRC_COPY_SW_META_TBL(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define LHIF_NET_TRC_DYNAMIC_Q_MAPPING(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L2(HIF_DRV_Trace_Filter, 1, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v3,v3);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x432A,0x432A);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_LAST_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(HIF_DRV_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define LHIF_NET_TRC_DYNAMIC_Q_MAPPING(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define LHIF_HW_LOG_TRC_LOG_POLLING_RESULT(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L2(HIF_DRV_Trace_Filter, 1, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v4,v4);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x442A,0x442A);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_32_LAST_WRAPPER_L2(cgen_local_v4,v4);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(HIF_DRV_Trace_Filter, 1, 0x10);\
		}\
	} while(0)
#else
	#define LHIF_HW_LOG_TRC_LOG_POLLING_RESULT(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define LHIF_HW_LOG_TRC_DHL_SEND_LOG(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L2(HIF_DRV_Trace_Filter, 1, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v3,v3);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x452A,0x452A);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_LAST_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(HIF_DRV_Trace_Filter, 1, 0x10);\
		}\
	} while(0)
#else
	#define LHIF_HW_LOG_TRC_DHL_SEND_LOG(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define LHIF_HW_LOG_TRC_DHL_SEND_DONE(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L2(HIF_DRV_Trace_Filter, 1, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x462A,0x462A);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(HIF_DRV_Trace_Filter, 1, 0x10);\
		}\
	} while(0)
#else
	#define LHIF_HW_LOG_TRC_DHL_SEND_DONE(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define LHIF_HW_LOG_TRC_LOG_CHECK_NOTHING() do {\
		{\
			TRC_START_FILTER_CHECK_L2(HIF_DRV_Trace_Filter, 1, 0x10);\
			TRC_START_FILL_L2();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L2(0x472A,0x472A);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(HIF_DRV_Trace_Filter, 1, 0x10);\
		}\
	} while(0)
#else
	#define LHIF_HW_LOG_TRC_LOG_CHECK_NOTHING()
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define LHIF_HW_LOG_TRC_LOG_CHECK_NO_DATA(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L2(HIF_DRV_Trace_Filter, 1, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x482A,0x482A);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(HIF_DRV_Trace_Filter, 1, 0x10);\
		}\
	} while(0)
#else
	#define LHIF_HW_LOG_TRC_LOG_CHECK_NO_DATA(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define LHIF_HW_LOG_TRC_LOG_CHECK_HAS_DATA(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L2(HIF_DRV_Trace_Filter, 1, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x492A,0x492A);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(HIF_DRV_Trace_Filter, 1, 0x10);\
		}\
	} while(0)
#else
	#define LHIF_HW_LOG_TRC_LOG_CHECK_HAS_DATA(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define LHIF_HW_LOG_TRC_LOG_GET_HW_IDX(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L2(HIF_DRV_Trace_Filter, 1, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v3,v3);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x4A2A,0x4A2A);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_LAST_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(HIF_DRV_Trace_Filter, 1, 0x10);\
		}\
	} while(0)
#else
	#define LHIF_HW_LOG_TRC_LOG_GET_HW_IDX(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define LHIF_HW_LOG_TRC_LOG_CHECK_DONE(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L2(HIF_DRV_Trace_Filter, 1, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x4B2A,0x4B2A);\
			TRC_OUTPUT_16_LAST_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(HIF_DRV_Trace_Filter, 1, 0x10);\
		}\
	} while(0)
#else
	#define LHIF_HW_LOG_TRC_LOG_CHECK_DONE(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define LHIF_HW_LOG_TRC_ALREADY_DHL() do {\
		{\
			TRC_START_FILTER_CHECK_L2(HIF_DRV_Trace_Filter, 1, 0x10);\
			TRC_START_FILL_L2();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L2(0x4C2A,0x4C2A);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(HIF_DRV_Trace_Filter, 1, 0x10);\
		}\
	} while(0)
#else
	#define LHIF_HW_LOG_TRC_ALREADY_DHL()
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define LHIF_HW_LOG_TRC_OVER_DHL_MAX_SIZE(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L2(HIF_DRV_Trace_Filter, 1, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x4D2A,0x4D2A);\
			TRC_OUTPUT_16_LAST_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(HIF_DRV_Trace_Filter, 1, 0x10);\
		}\
	} while(0)
#else
	#define LHIF_HW_LOG_TRC_OVER_DHL_MAX_SIZE(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define LHIF_HW_LOG_TRC_EBS_RETURN_ERROR(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L2(HIF_DRV_Trace_Filter, 1, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x4E2A,0x4E2A);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(HIF_DRV_Trace_Filter, 1, 0x10);\
		}\
	} while(0)
#else
	#define LHIF_HW_LOG_TRC_EBS_RETURN_ERROR(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define LHIF_IT_TRC_START_GEN_DL_DATA_ILM(v1, v2, v3, v4, v5, v6, v7) do {\
		{\
			TRC_START_FILTER_CHECK_L2(HIF_DRV_Trace_Filter, 2, 0x01);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x4F2A,0x4F2A);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v4,v4);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v5,v5);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v6,v6);\
			TRC_OUTPUT_16_LAST_WRAPPER_L2(cgen_local_v7,v7);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(HIF_DRV_Trace_Filter, 2, 0x01);\
		}\
	} while(0)
#else
	#define LHIF_IT_TRC_START_GEN_DL_DATA_ILM(v1, v2, v3, v4, v5, v6, v7)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define LHIF_IT_TRC_STOP_GEN_DL_DATA_ILM() do {\
		{\
			TRC_START_FILTER_CHECK_L2(HIF_DRV_Trace_Filter, 2, 0x01);\
			TRC_START_FILL_L2();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L2(0x502A,0x502A);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(HIF_DRV_Trace_Filter, 2, 0x01);\
		}\
	} while(0)
#else
	#define LHIF_IT_TRC_STOP_GEN_DL_DATA_ILM()
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define LHIF_IT_TRC_REGISTER_TIMER(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L2(HIF_DRV_Trace_Filter, 2, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x512A,0x512A);\
			TRC_OUTPUT_16_LAST_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(HIF_DRV_Trace_Filter, 2, 0x01);\
		}\
	} while(0)
#else
	#define LHIF_IT_TRC_REGISTER_TIMER(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define LHIF_IT_TRC_GEN_DL_START(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L2(HIF_DRV_Trace_Filter, 2, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v3,v3);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x522A,0x522A);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_LAST_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(HIF_DRV_Trace_Filter, 2, 0x01);\
		}\
	} while(0)
#else
	#define LHIF_IT_TRC_GEN_DL_START(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define LHIF_IT_TRC_GEN_DL_END(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L2(HIF_DRV_Trace_Filter, 2, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x532A,0x532A);\
			TRC_OUTPUT_16_LAST_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(HIF_DRV_Trace_Filter, 2, 0x01);\
		}\
	} while(0)
#else
	#define LHIF_IT_TRC_GEN_DL_END(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define LHIF_IT_TRC_GEN_DL_ALLOC_SUCCESS(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L2(HIF_DRV_Trace_Filter, 2, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v3,v3);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x542A,0x542A);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_LAST_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(HIF_DRV_Trace_Filter, 2, 0x01);\
		}\
	} while(0)
#else
	#define LHIF_IT_TRC_GEN_DL_ALLOC_SUCCESS(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define LHIF_IT_TRC_GEN_DL_ALLOC_FAILED(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L2(HIF_DRV_Trace_Filter, 2, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v3,v3);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x552A,0x552A);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_LAST_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(HIF_DRV_Trace_Filter, 2, 0x01);\
		}\
	} while(0)
#else
	#define LHIF_IT_TRC_GEN_DL_ALLOC_FAILED(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define LHIF_IT_TRC_GEN_DL_FILL_IP_PKT(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L2(HIF_DRV_Trace_Filter, 2, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x562A,0x562A);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(HIF_DRV_Trace_Filter, 2, 0x01);\
		}\
	} while(0)
#else
	#define LHIF_IT_TRC_GEN_DL_FILL_IP_PKT(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define LHIF_IT_TRC_GEN_DL_WRITE_DID(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L2(HIF_DRV_Trace_Filter, 2, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x572A,0x572A);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(HIF_DRV_Trace_Filter, 2, 0x01);\
		}\
	} while(0)
#else
	#define LHIF_IT_TRC_GEN_DL_WRITE_DID(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define LHIF_IT_TRC_GEN_DL_SEND_SUCCESS() do {\
		{\
			TRC_START_FILTER_CHECK_L2(HIF_DRV_Trace_Filter, 2, 0x01);\
			TRC_START_FILL_L2();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L2(0x582A,0x582A);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(HIF_DRV_Trace_Filter, 2, 0x01);\
		}\
	} while(0)
#else
	#define LHIF_IT_TRC_GEN_DL_SEND_SUCCESS()
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define LHIF_IT_TRC_GEN_DL_SEND_FAILED() do {\
		{\
			TRC_START_FILTER_CHECK_L2(HIF_DRV_Trace_Filter, 2, 0x01);\
			TRC_START_FILL_L2();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L2(0x592A,0x592A);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(HIF_DRV_Trace_Filter, 2, 0x01);\
		}\
	} while(0)
#else
	#define LHIF_IT_TRC_GEN_DL_SEND_FAILED()
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define LHIF_IT_TRC_UPLINK_META_DROP_START(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L2(HIF_DRV_Trace_Filter, 2, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v3,v3);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x5A2A,0x5A2A);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_LAST_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(HIF_DRV_Trace_Filter, 2, 0x01);\
		}\
	} while(0)
#else
	#define LHIF_IT_TRC_UPLINK_META_DROP_START(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define LHIF_IT_TRC_UPLINK_META_DROP_END() do {\
		{\
			TRC_START_FILTER_CHECK_L2(HIF_DRV_Trace_Filter, 2, 0x01);\
			TRC_START_FILL_L2();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L2(0x5B2A,0x5B2A);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(HIF_DRV_Trace_Filter, 2, 0x01);\
		}\
	} while(0)
#else
	#define LHIF_IT_TRC_UPLINK_META_DROP_END()
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define LHIF_IT_TRC_UPLINK_META_DROP_DATA(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L2(HIF_DRV_Trace_Filter, 2, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v3,v3);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x5C2A,0x5C2A);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_LAST_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(HIF_DRV_Trace_Filter, 2, 0x01);\
		}\
	} while(0)
#else
	#define LHIF_IT_TRC_UPLINK_META_DROP_DATA(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define LHIF_IT_TRC_UPLINK_META_LB_START(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L2(HIF_DRV_Trace_Filter, 2, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v3,v3);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x5D2A,0x5D2A);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_LAST_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(HIF_DRV_Trace_Filter, 2, 0x01);\
		}\
	} while(0)
#else
	#define LHIF_IT_TRC_UPLINK_META_LB_START(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define LHIF_IT_TRC_UPLINK_META_LB_END() do {\
		{\
			TRC_START_FILTER_CHECK_L2(HIF_DRV_Trace_Filter, 2, 0x01);\
			TRC_START_FILL_L2();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L2(0x5E2A,0x5E2A);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(HIF_DRV_Trace_Filter, 2, 0x01);\
		}\
	} while(0)
#else
	#define LHIF_IT_TRC_UPLINK_META_LB_END()
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define LHIF_IT_TRC_UPLINK_META_LB_READ_TBL(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L2(HIF_DRV_Trace_Filter, 2, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v3,v3);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x5F2A,0x5F2A);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_LAST_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(HIF_DRV_Trace_Filter, 2, 0x01);\
		}\
	} while(0)
#else
	#define LHIF_IT_TRC_UPLINK_META_LB_READ_TBL(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define LHIF_IT_TRC_UPLINK_META_LB_SEND_DID(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L2(HIF_DRV_Trace_Filter, 2, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x602A,0x602A);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(HIF_DRV_Trace_Filter, 2, 0x01);\
		}\
	} while(0)
#else
	#define LHIF_IT_TRC_UPLINK_META_LB_SEND_DID(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define LHIF_IT_TRC_UPLINK_META_LB_SEND_SUCCESS() do {\
		{\
			TRC_START_FILTER_CHECK_L2(HIF_DRV_Trace_Filter, 2, 0x01);\
			TRC_START_FILL_L2();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L2(0x612A,0x612A);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(HIF_DRV_Trace_Filter, 2, 0x01);\
		}\
	} while(0)
#else
	#define LHIF_IT_TRC_UPLINK_META_LB_SEND_SUCCESS()
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define LHIF_IT_TRC_UPLINK_META_LB_SEND_FAILED() do {\
		{\
			TRC_START_FILTER_CHECK_L2(HIF_DRV_Trace_Filter, 2, 0x01);\
			TRC_START_FILL_L2();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L2(0x622A,0x622A);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(HIF_DRV_Trace_Filter, 2, 0x01);\
		}\
	} while(0)
#else
	#define LHIF_IT_TRC_UPLINK_META_LB_SEND_FAILED()
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define LHIF_IT_TRC_UPLINK_META_LB_WRITE_SIT(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L2(HIF_DRV_Trace_Filter, 2, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v3,v3);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x632A,0x632A);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_LAST_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(HIF_DRV_Trace_Filter, 2, 0x01);\
		}\
	} while(0)
#else
	#define LHIF_IT_TRC_UPLINK_META_LB_WRITE_SIT(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define LHIF_IT_TRC_MODE_CHANGE(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L2(HIF_DRV_Trace_Filter, 2, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x642A,0x642A);\
			TRC_OUTPUT_16_LAST_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(HIF_DRV_Trace_Filter, 2, 0x01);\
		}\
	} while(0)
#else
	#define LHIF_IT_TRC_MODE_CHANGE(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define LHIF_IT_TRC_REG_TICK_FUNP(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L2(HIF_DRV_Trace_Filter, 2, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x652A,0x652A);\
			TRC_OUTPUT_32_LAST_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(HIF_DRV_Trace_Filter, 2, 0x01);\
		}\
	} while(0)
#else
	#define LHIF_IT_TRC_REG_TICK_FUNP(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define LHIF_IT_TRC_LOG_UL_ARY(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L2(HIF_DRV_Trace_Filter, 2, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x662A,0x662A);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(HIF_DRV_Trace_Filter, 2, 0x01);\
		}\
	} while(0)
#else
	#define LHIF_IT_TRC_LOG_UL_ARY(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define LHIF_IT_TRC_LOG_DL_ARY(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L2(HIF_DRV_Trace_Filter, 2, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x672A,0x672A);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(HIF_DRV_Trace_Filter, 2, 0x01);\
		}\
	} while(0)
#else
	#define LHIF_IT_TRC_LOG_DL_ARY(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define LHIF_IT_TRC_GET_PRB_FAIL(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L2(HIF_DRV_Trace_Filter, 2, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x682A,0x682A);\
			TRC_OUTPUT_16_LAST_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(HIF_DRV_Trace_Filter, 2, 0x01);\
		}\
	} while(0)
#else
	#define LHIF_IT_TRC_GET_PRB_FAIL(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define LHIF_IT_TRC_CALL_TICK_FUNP(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L2(HIF_DRV_Trace_Filter, 2, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x692A,0x692A);\
			TRC_OUTPUT_32_LAST_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(HIF_DRV_Trace_Filter, 2, 0x01);\
		}\
	} while(0)
#else
	#define LHIF_IT_TRC_CALL_TICK_FUNP(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define LHIF_ISR_TRC_REG_ISR(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L2(HIF_DRV_Trace_Filter, 2, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x6A2A,0x6A2A);\
			TRC_OUTPUT_16_LAST_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(HIF_DRV_Trace_Filter, 2, 0x02);\
		}\
	} while(0)
#else
	#define LHIF_ISR_TRC_REG_ISR(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define LHIF_ISR_TRC_DEREG_ISR(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L2(HIF_DRV_Trace_Filter, 2, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x6B2A,0x6B2A);\
			TRC_OUTPUT_16_LAST_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(HIF_DRV_Trace_Filter, 2, 0x02);\
		}\
	} while(0)
#else
	#define LHIF_ISR_TRC_DEREG_ISR(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define LHIF_ISR_TRC_ISR_CB(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L2(HIF_DRV_Trace_Filter, 2, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x6C2A,0x6C2A);\
			TRC_OUTPUT_16_LAST_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(HIF_DRV_Trace_Filter, 2, 0x02);\
		}\
	} while(0)
#else
	#define LHIF_ISR_TRC_ISR_CB(v1)
#endif



/*******************************/
/* declaration of filter array */
/*******************************/
EXTERN_TMD_FILTER(unsigned char, HIF_DRV_Trace_Filter, 5);
/*************************/
/* Function declarations */
/*************************/
#ifdef L1_CATCHER

void Set_HIF_DRV_Filter(unsigned char *setting);

#endif

/************************************/
/* Filter checking API declarations */
/************************************/

#define ChkL1ModFltr_HIF_DRV()	(FILTER_CHECK(HIF_DRV_Trace_Filter, 0, 1))
#define ChkL1ClsFltr_HIF_DRV_UL()	(ChkL1ModFltr_HIF_DRV()&&(FILTER_CHECK(HIF_DRV_Trace_Filter, 1, 0x01)))
#define ChkL1ClsFltr_HIF_DRV_DL()	(ChkL1ModFltr_HIF_DRV()&&(FILTER_CHECK(HIF_DRV_Trace_Filter, 1, 0x02)))
#define ChkL1ClsFltr_HIF_DRV_LHIF_MOD_TASK()	(ChkL1ModFltr_HIF_DRV()&&(FILTER_CHECK(HIF_DRV_Trace_Filter, 1, 0x04)))
#define ChkL1ClsFltr_HIF_DRV_LHIF_MOD_NET()	(ChkL1ModFltr_HIF_DRV()&&(FILTER_CHECK(HIF_DRV_Trace_Filter, 1, 0x08)))
#define ChkL1ClsFltr_HIF_DRV_LHIF_MOD_HW_LOG()	(ChkL1ModFltr_HIF_DRV()&&(FILTER_CHECK(HIF_DRV_Trace_Filter, 1, 0x10)))
#define ChkL1ClsFltr_HIF_DRV_LHIF_MOD_DATA()	(ChkL1ModFltr_HIF_DRV()&&(FILTER_CHECK(HIF_DRV_Trace_Filter, 1, 0x20)))
#define ChkL1ClsFltr_HIF_DRV_LHIF_MOD_BM()	(ChkL1ModFltr_HIF_DRV()&&(FILTER_CHECK(HIF_DRV_Trace_Filter, 1, 0x40)))
#define ChkL1ClsFltr_HIF_DRV_LHIF_MOD_UT()	(ChkL1ModFltr_HIF_DRV()&&(FILTER_CHECK(HIF_DRV_Trace_Filter, 1, 0x80)))
#define ChkL1ClsFltr_HIF_DRV_LHIF_MOD_IT()	(ChkL1ModFltr_HIF_DRV()&&(FILTER_CHECK(HIF_DRV_Trace_Filter, 2, 0x01)))
#define ChkL1ClsFltr_HIF_DRV_LHIF_MOD_ISR()	(ChkL1ModFltr_HIF_DRV()&&(FILTER_CHECK(HIF_DRV_Trace_Filter, 2, 0x02)))
#define ChkL1MsgFltr_HIF_DRV_DUMMY()	ChkL1ClsFltr_HIF_DRV_UL()
#define ChkL1MsgFltr_LHIF_TASK_TRC_GET_HMU_EVENT()	ChkL1ClsFltr_HIF_DRV_LHIF_MOD_TASK()
#define ChkL1MsgFltr_LHIF_TASK_TRC_WAIT_HMU_EVENT()	ChkL1ClsFltr_HIF_DRV_LHIF_MOD_TASK()
#define ChkL1MsgFltr_LHIF_TASK_TRC_RECEIVE_MSG_START()	ChkL1ClsFltr_HIF_DRV_LHIF_MOD_TASK()
#define ChkL1MsgFltr_LHIF_TASK_TRC_RECEIVE_MSG_END()	ChkL1ClsFltr_HIF_DRV_LHIF_MOD_TASK()
#define ChkL1MsgFltr_LHIF_TASK_TRC_AP_UL_POLLING_START()	ChkL1ClsFltr_HIF_DRV_LHIF_MOD_TASK()
#define ChkL1MsgFltr_LHIF_TASK_TRC_AP_UL_POLLING_END()	ChkL1ClsFltr_HIF_DRV_LHIF_MOD_TASK()
#define ChkL1MsgFltr_LHIF_TASK_TRC_POLLING_NOTHING()	ChkL1ClsFltr_HIF_DRV_LHIF_MOD_TASK()
#define ChkL1MsgFltr_LHIF_TASK_TRC_HW_LOG_POLLING_START()	ChkL1ClsFltr_HIF_DRV_LHIF_MOD_TASK()
#define ChkL1MsgFltr_LHIF_TASK_TRC_HW_LOG_POLLING_END()	ChkL1ClsFltr_HIF_DRV_LHIF_MOD_TASK()
#define ChkL1MsgFltr_LHIF_TASK_TRC_HW_FULL_CHECK_START()	ChkL1ClsFltr_HIF_DRV_LHIF_MOD_TASK()
#define ChkL1MsgFltr_LHIF_TASK_TRC_HW_FULL_CHECK_END()	ChkL1ClsFltr_HIF_DRV_LHIF_MOD_TASK()
#define ChkL1MsgFltr_LHIF_TASK_TRC_SET_LHIF_UL_EVENT()	ChkL1ClsFltr_HIF_DRV_LHIF_MOD_TASK()
#define ChkL1MsgFltr_LHIF_TASK_TRC_SET_LHIF_LOG_EVENT()	ChkL1ClsFltr_HIF_DRV_LHIF_MOD_TASK()
#define ChkL1MsgFltr_LHIF_TASK_TRC_META_FULL()	ChkL1ClsFltr_HIF_DRV_LHIF_MOD_TASK()
#define ChkL1MsgFltr_LHIF_TASK_TRC_QP_FULL()	ChkL1ClsFltr_HIF_DRV_LHIF_MOD_TASK()
#define ChkL1MsgFltr_LHIF_TASK_TRC_LOG_FULL()	ChkL1ClsFltr_HIF_DRV_LHIF_MOD_TASK()
#define ChkL1MsgFltr_LHIF_TASK_TRC_SW_UL_ENABLE()	ChkL1ClsFltr_HIF_DRV_LHIF_MOD_TASK()
#define ChkL1MsgFltr_LHIF_TASK_TRC_LHIF_NOT_INIT()	ChkL1ClsFltr_HIF_DRV_LHIF_MOD_TASK()
#define ChkL1MsgFltr_LHIF_TASK_TRC_POWER_ON()	ChkL1ClsFltr_HIF_DRV_LHIF_MOD_TASK()
#define ChkL1MsgFltr_LHIF_TASK_TRC_POWER_DOWN()	ChkL1ClsFltr_HIF_DRV_LHIF_MOD_TASK()
#define ChkL1MsgFltr_LHIF_DATA_TRC_SEND_DESC_START()	ChkL1ClsFltr_HIF_DRV_LHIF_MOD_DATA()
#define ChkL1MsgFltr_LHIF_DATA_TRC_SEND_DESC_END()	ChkL1ClsFltr_HIF_DRV_LHIF_MOD_DATA()
#define ChkL1MsgFltr_LHIF_DATA_TRC_SEND_DESC_PKT_NUM()	ChkL1ClsFltr_HIF_DRV_LHIF_MOD_DATA()
#define ChkL1MsgFltr_LHIF_DATA_TRC_SEND_DESC_HIF_TYPE()	ChkL1ClsFltr_HIF_DRV_LHIF_MOD_DATA()
#define ChkL1MsgFltr_LHIF_DATA_TRC_SEND_DESC_ALLOC_SUCCESS()	ChkL1ClsFltr_HIF_DRV_LHIF_MOD_DATA()
#define ChkL1MsgFltr_LHIF_DATA_TRC_SEND_DESC_ALLOC_FAILED()	ChkL1ClsFltr_HIF_DRV_LHIF_MOD_DATA()
#define ChkL1MsgFltr_LHIF_DATA_TRC_WRITE_INBAND()	ChkL1ClsFltr_HIF_DRV_LHIF_MOD_DATA()
#define ChkL1MsgFltr_LHIF_DATA_TRC_WRITE_NORMAL()	ChkL1ClsFltr_HIF_DRV_LHIF_MOD_DATA()
#define ChkL1MsgFltr_LHIF_DATA_TRC_NOT_LHIF_DID()	ChkL1ClsFltr_HIF_DRV_LHIF_MOD_DATA()
#define ChkL1MsgFltr_LHIF_DATA_TRC_SEND_DESC_CURRENT_CNT()	ChkL1ClsFltr_HIF_DRV_LHIF_MOD_DATA()
#define ChkL1MsgFltr_LHIF_DATA_TRC_Q_START()	ChkL1ClsFltr_HIF_DRV_LHIF_MOD_DATA()
#define ChkL1MsgFltr_LHIF_DATA_TRC_SEND_FLUSH_START()	ChkL1ClsFltr_HIF_DRV_LHIF_MOD_DATA()
#define ChkL1MsgFltr_LHIF_DATA_TRC_SEND_FLUSH_END()	ChkL1ClsFltr_HIF_DRV_LHIF_MOD_DATA()
#define ChkL1MsgFltr_LHIF_DATA_TRC_SEND_FLUSH_ALLOC_SUCCESS()	ChkL1ClsFltr_HIF_DRV_LHIF_MOD_DATA()
#define ChkL1MsgFltr_LHIF_DATA_TRC_SEND_FLUSH_ALLOC_FAILED()	ChkL1ClsFltr_HIF_DRV_LHIF_MOD_DATA()
#define ChkL1MsgFltr_LHIF_DATA_TRC_SEND_UL_Q_USB_START()	ChkL1ClsFltr_HIF_DRV_LHIF_MOD_DATA()
#define ChkL1MsgFltr_LHIF_DATA_TRC_SEND_UL_Q_USB_END()	ChkL1ClsFltr_HIF_DRV_LHIF_MOD_DATA()
#define ChkL1MsgFltr_LHIF_DATA_TRC_SEND_UL_Q_USB_ALLOC_SUCCESS()	ChkL1ClsFltr_HIF_DRV_LHIF_MOD_DATA()
#define ChkL1MsgFltr_LHIF_DATA_TRC_SEND_UL_Q_USB_ALLOC_FAILED()	ChkL1ClsFltr_HIF_DRV_LHIF_MOD_DATA()
#define ChkL1MsgFltr_LHIF_DATA_TRC_META_POLLING()	ChkL1ClsFltr_HIF_DRV_LHIF_MOD_DATA()
#define ChkL1MsgFltr_LHIF_DATA_TRC_META_READ_DONE()	ChkL1ClsFltr_HIF_DRV_LHIF_MOD_DATA()
#define ChkL1MsgFltr_LHIF_DATA_TRC_META_GET_TBL_ADDR()	ChkL1ClsFltr_HIF_DRV_LHIF_MOD_DATA()
#define ChkL1MsgFltr_LHIF_DATA_TRC_META_GET_TBL_SIZE()	ChkL1ClsFltr_HIF_DRV_LHIF_MOD_DATA()
#define ChkL1MsgFltr_LHIF_DATA_TRC_FLUSH()	ChkL1ClsFltr_HIF_DRV_LHIF_MOD_DATA()
#define ChkL1MsgFltr_LHIF_DATA_TRC_INVALIDATE()	ChkL1ClsFltr_HIF_DRV_LHIF_MOD_DATA()
#define ChkL1MsgFltr_LHIF_DATA_TRC_PRINT_DATA()	ChkL1ClsFltr_HIF_DRV_LHIF_MOD_DATA()
#define ChkL1MsgFltr_LHIF_DATA_TRC_CHANGE_NETIF_TO_FLOW()	ChkL1ClsFltr_HIF_DRV_LHIF_MOD_DATA()
#define ChkL1MsgFltr_LHIF_DATA_TRC_LWA_PRB_COPY()	ChkL1ClsFltr_HIF_DRV_LHIF_MOD_DATA()
#define ChkL1MsgFltr_LHIF_BM_TRC_ALLOC_START()	ChkL1ClsFltr_HIF_DRV_LHIF_MOD_BM()
#define ChkL1MsgFltr_LHIF_BM_TRC_ALLOC_DONE()	ChkL1ClsFltr_HIF_DRV_LHIF_MOD_BM()
#define ChkL1MsgFltr_LHIF_BM_TRC_ALLOC_FAILED()	ChkL1ClsFltr_HIF_DRV_LHIF_MOD_BM()
#define ChkL1MsgFltr_LHIF_BM_TRC_QUERY_REM_SIZE()	ChkL1ClsFltr_HIF_DRV_LHIF_MOD_BM()
#define ChkL1MsgFltr_LHIF_BM_TRC_Q_START()	ChkL1ClsFltr_HIF_DRV_LHIF_MOD_BM()
#define ChkL1MsgFltr_LHIF_NET_TRC_CHANGE_STATE()	ChkL1ClsFltr_HIF_DRV_LHIF_MOD_NET()
#define ChkL1MsgFltr_LHIF_NET_TRC_SEND_DL_START()	ChkL1ClsFltr_HIF_DRV_LHIF_MOD_NET()
#define ChkL1MsgFltr_LHIF_NET_TRC_SEND_DL_END()	ChkL1ClsFltr_HIF_DRV_LHIF_MOD_NET()
#define ChkL1MsgFltr_LHIF_NET_TRC_SEND_FLUSH_CMD_START()	ChkL1ClsFltr_HIF_DRV_LHIF_MOD_NET()
#define ChkL1MsgFltr_LHIF_NET_TRC_SEND_FLUSH_CMD_END()	ChkL1ClsFltr_HIF_DRV_LHIF_MOD_NET()
#define ChkL1MsgFltr_LHIF_NET_TRC_UL_DATA_START()	ChkL1ClsFltr_HIF_DRV_LHIF_MOD_NET()
#define ChkL1MsgFltr_LHIF_NET_TRC_UL_DATA_END()	ChkL1ClsFltr_HIF_DRV_LHIF_MOD_NET()
#define ChkL1MsgFltr_LHIF_NET_TRC_META_READ_DONE_START()	ChkL1ClsFltr_HIF_DRV_LHIF_MOD_NET()
#define ChkL1MsgFltr_LHIF_NET_TRC_META_READ_DONE_END()	ChkL1ClsFltr_HIF_DRV_LHIF_MOD_NET()
#define ChkL1MsgFltr_LHIF_NET_TRC_META_QUERY_START()	ChkL1ClsFltr_HIF_DRV_LHIF_MOD_NET()
#define ChkL1MsgFltr_LHIF_NET_TRC_META_QUERY_END()	ChkL1ClsFltr_HIF_DRV_LHIF_MOD_NET()
#define ChkL1MsgFltr_LHIF_NET_TRC_REG_USB_CB()	ChkL1ClsFltr_HIF_DRV_LHIF_MOD_NET()
#define ChkL1MsgFltr_LHIF_NET_TRC_COPY_SW_META_TBL()	ChkL1ClsFltr_HIF_DRV_LHIF_MOD_NET()
#define ChkL1MsgFltr_LHIF_NET_TRC_DYNAMIC_Q_MAPPING()	ChkL1ClsFltr_HIF_DRV_LHIF_MOD_NET()
#define ChkL1MsgFltr_LHIF_HW_LOG_TRC_LOG_POLLING_RESULT()	ChkL1ClsFltr_HIF_DRV_LHIF_MOD_HW_LOG()
#define ChkL1MsgFltr_LHIF_HW_LOG_TRC_DHL_SEND_LOG()	ChkL1ClsFltr_HIF_DRV_LHIF_MOD_HW_LOG()
#define ChkL1MsgFltr_LHIF_HW_LOG_TRC_DHL_SEND_DONE()	ChkL1ClsFltr_HIF_DRV_LHIF_MOD_HW_LOG()
#define ChkL1MsgFltr_LHIF_HW_LOG_TRC_LOG_CHECK_NOTHING()	ChkL1ClsFltr_HIF_DRV_LHIF_MOD_HW_LOG()
#define ChkL1MsgFltr_LHIF_HW_LOG_TRC_LOG_CHECK_NO_DATA()	ChkL1ClsFltr_HIF_DRV_LHIF_MOD_HW_LOG()
#define ChkL1MsgFltr_LHIF_HW_LOG_TRC_LOG_CHECK_HAS_DATA()	ChkL1ClsFltr_HIF_DRV_LHIF_MOD_HW_LOG()
#define ChkL1MsgFltr_LHIF_HW_LOG_TRC_LOG_GET_HW_IDX()	ChkL1ClsFltr_HIF_DRV_LHIF_MOD_HW_LOG()
#define ChkL1MsgFltr_LHIF_HW_LOG_TRC_LOG_CHECK_DONE()	ChkL1ClsFltr_HIF_DRV_LHIF_MOD_HW_LOG()
#define ChkL1MsgFltr_LHIF_HW_LOG_TRC_ALREADY_DHL()	ChkL1ClsFltr_HIF_DRV_LHIF_MOD_HW_LOG()
#define ChkL1MsgFltr_LHIF_HW_LOG_TRC_OVER_DHL_MAX_SIZE()	ChkL1ClsFltr_HIF_DRV_LHIF_MOD_HW_LOG()
#define ChkL1MsgFltr_LHIF_HW_LOG_TRC_EBS_RETURN_ERROR()	ChkL1ClsFltr_HIF_DRV_LHIF_MOD_HW_LOG()
#define ChkL1MsgFltr_LHIF_IT_TRC_START_GEN_DL_DATA_ILM()	ChkL1ClsFltr_HIF_DRV_LHIF_MOD_IT()
#define ChkL1MsgFltr_LHIF_IT_TRC_STOP_GEN_DL_DATA_ILM()	ChkL1ClsFltr_HIF_DRV_LHIF_MOD_IT()
#define ChkL1MsgFltr_LHIF_IT_TRC_REGISTER_TIMER()	ChkL1ClsFltr_HIF_DRV_LHIF_MOD_IT()
#define ChkL1MsgFltr_LHIF_IT_TRC_GEN_DL_START()	ChkL1ClsFltr_HIF_DRV_LHIF_MOD_IT()
#define ChkL1MsgFltr_LHIF_IT_TRC_GEN_DL_END()	ChkL1ClsFltr_HIF_DRV_LHIF_MOD_IT()
#define ChkL1MsgFltr_LHIF_IT_TRC_GEN_DL_ALLOC_SUCCESS()	ChkL1ClsFltr_HIF_DRV_LHIF_MOD_IT()
#define ChkL1MsgFltr_LHIF_IT_TRC_GEN_DL_ALLOC_FAILED()	ChkL1ClsFltr_HIF_DRV_LHIF_MOD_IT()
#define ChkL1MsgFltr_LHIF_IT_TRC_GEN_DL_FILL_IP_PKT()	ChkL1ClsFltr_HIF_DRV_LHIF_MOD_IT()
#define ChkL1MsgFltr_LHIF_IT_TRC_GEN_DL_WRITE_DID()	ChkL1ClsFltr_HIF_DRV_LHIF_MOD_IT()
#define ChkL1MsgFltr_LHIF_IT_TRC_GEN_DL_SEND_SUCCESS()	ChkL1ClsFltr_HIF_DRV_LHIF_MOD_IT()
#define ChkL1MsgFltr_LHIF_IT_TRC_GEN_DL_SEND_FAILED()	ChkL1ClsFltr_HIF_DRV_LHIF_MOD_IT()
#define ChkL1MsgFltr_LHIF_IT_TRC_UPLINK_META_DROP_START()	ChkL1ClsFltr_HIF_DRV_LHIF_MOD_IT()
#define ChkL1MsgFltr_LHIF_IT_TRC_UPLINK_META_DROP_END()	ChkL1ClsFltr_HIF_DRV_LHIF_MOD_IT()
#define ChkL1MsgFltr_LHIF_IT_TRC_UPLINK_META_DROP_DATA()	ChkL1ClsFltr_HIF_DRV_LHIF_MOD_IT()
#define ChkL1MsgFltr_LHIF_IT_TRC_UPLINK_META_LB_START()	ChkL1ClsFltr_HIF_DRV_LHIF_MOD_IT()
#define ChkL1MsgFltr_LHIF_IT_TRC_UPLINK_META_LB_END()	ChkL1ClsFltr_HIF_DRV_LHIF_MOD_IT()
#define ChkL1MsgFltr_LHIF_IT_TRC_UPLINK_META_LB_READ_TBL()	ChkL1ClsFltr_HIF_DRV_LHIF_MOD_IT()
#define ChkL1MsgFltr_LHIF_IT_TRC_UPLINK_META_LB_SEND_DID()	ChkL1ClsFltr_HIF_DRV_LHIF_MOD_IT()
#define ChkL1MsgFltr_LHIF_IT_TRC_UPLINK_META_LB_SEND_SUCCESS()	ChkL1ClsFltr_HIF_DRV_LHIF_MOD_IT()
#define ChkL1MsgFltr_LHIF_IT_TRC_UPLINK_META_LB_SEND_FAILED()	ChkL1ClsFltr_HIF_DRV_LHIF_MOD_IT()
#define ChkL1MsgFltr_LHIF_IT_TRC_UPLINK_META_LB_WRITE_SIT()	ChkL1ClsFltr_HIF_DRV_LHIF_MOD_IT()
#define ChkL1MsgFltr_LHIF_IT_TRC_MODE_CHANGE()	ChkL1ClsFltr_HIF_DRV_LHIF_MOD_IT()
#define ChkL1MsgFltr_LHIF_IT_TRC_REG_TICK_FUNP()	ChkL1ClsFltr_HIF_DRV_LHIF_MOD_IT()
#define ChkL1MsgFltr_LHIF_IT_TRC_LOG_UL_ARY()	ChkL1ClsFltr_HIF_DRV_LHIF_MOD_IT()
#define ChkL1MsgFltr_LHIF_IT_TRC_LOG_DL_ARY()	ChkL1ClsFltr_HIF_DRV_LHIF_MOD_IT()
#define ChkL1MsgFltr_LHIF_IT_TRC_GET_PRB_FAIL()	ChkL1ClsFltr_HIF_DRV_LHIF_MOD_IT()
#define ChkL1MsgFltr_LHIF_IT_TRC_CALL_TICK_FUNP()	ChkL1ClsFltr_HIF_DRV_LHIF_MOD_IT()
#define ChkL1MsgFltr_LHIF_ISR_TRC_REG_ISR()	ChkL1ClsFltr_HIF_DRV_LHIF_MOD_ISR()
#define ChkL1MsgFltr_LHIF_ISR_TRC_DEREG_ISR()	ChkL1ClsFltr_HIF_DRV_LHIF_MOD_ISR()
#define ChkL1MsgFltr_LHIF_ISR_TRC_ISR_CB()	ChkL1ClsFltr_HIF_DRV_LHIF_MOD_ISR()


#endif
