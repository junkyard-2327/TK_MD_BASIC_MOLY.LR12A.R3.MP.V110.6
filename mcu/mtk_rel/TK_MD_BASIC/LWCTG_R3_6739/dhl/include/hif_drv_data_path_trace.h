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
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x0038,0x0038);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x0138,0x0138);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x0238,0x0238);\
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
			TRC_OUTPUT_16_SINGLE_WRAPPER_L2(0x0338,0x0338);\
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
			TRC_OUTPUT_16_SINGLE_WRAPPER_L2(0x0438,0x0438);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x0538,0x0538);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x0638,0x0638);\
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
			TRC_OUTPUT_16_SINGLE_WRAPPER_L2(0x0738,0x0738);\
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
			TRC_OUTPUT_16_SINGLE_WRAPPER_L2(0x0838,0x0838);\
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
			TRC_OUTPUT_16_SINGLE_WRAPPER_L2(0x0938,0x0938);\
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
			TRC_OUTPUT_16_SINGLE_WRAPPER_L2(0x0A38,0x0A38);\
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
			TRC_OUTPUT_16_SINGLE_WRAPPER_L2(0x0B38,0x0B38);\
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
			TRC_OUTPUT_16_SINGLE_WRAPPER_L2(0x0C38,0x0C38);\
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
			TRC_OUTPUT_16_SINGLE_WRAPPER_L2(0x0D38,0x0D38);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x0E38,0x0E38);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x0F38,0x0F38);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x1038,0x1038);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x1138,0x1138);\
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
			TRC_OUTPUT_16_SINGLE_WRAPPER_L2(0x1238,0x1238);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x1338,0x1338);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x1438,0x1438);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x1538,0x1538);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x1638,0x1638);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x1738,0x1738);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x1838,0x1838);\
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
			TRC_OUTPUT_16_SINGLE_WRAPPER_L2(0x1938,0x1938);\
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
			TRC_OUTPUT_16_SINGLE_WRAPPER_L2(0x1A38,0x1A38);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x1B38,0x1B38);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x1C38,0x1C38);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x1D38,0x1D38);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x1E38,0x1E38);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x1F38,0x1F38);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x2038,0x2038);\
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
			TRC_OUTPUT_16_SINGLE_WRAPPER_L2(0x2138,0x2138);\
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
			TRC_OUTPUT_16_SINGLE_WRAPPER_L2(0x2238,0x2238);\
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
			TRC_OUTPUT_16_SINGLE_WRAPPER_L2(0x2338,0x2338);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x2438,0x2438);\
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
			TRC_OUTPUT_16_SINGLE_WRAPPER_L2(0x2538,0x2538);\
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
			TRC_OUTPUT_16_SINGLE_WRAPPER_L2(0x2638,0x2638);\
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
			TRC_OUTPUT_16_SINGLE_WRAPPER_L2(0x2738,0x2738);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x2838,0x2838);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x2938,0x2938);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x2A38,0x2A38);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x2B38,0x2B38);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x2C38,0x2C38);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x2D38,0x2D38);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x2E38,0x2E38);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x2F38,0x2F38);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x3038,0x3038);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x3138,0x3138);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x3238,0x3238);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x3338,0x3338);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x3438,0x3438);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x3538,0x3538);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x3638,0x3638);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x3738,0x3738);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x3838,0x3838);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x3938,0x3938);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x3A38,0x3A38);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x3B38,0x3B38);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x3C38,0x3C38);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x3D38,0x3D38);\
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
			TRC_OUTPUT_16_SINGLE_WRAPPER_L2(0x3E38,0x3E38);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x3F38,0x3F38);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x4038,0x4038);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x4138,0x4138);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x4238,0x4238);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x4338,0x4338);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x4438,0x4438);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x4538,0x4538);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x4638,0x4638);\
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
			TRC_OUTPUT_16_SINGLE_WRAPPER_L2(0x4738,0x4738);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x4838,0x4838);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x4938,0x4938);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x4A38,0x4A38);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x4B38,0x4B38);\
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
			TRC_OUTPUT_16_SINGLE_WRAPPER_L2(0x4C38,0x4C38);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x4D38,0x4D38);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x4E38,0x4E38);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x4F38,0x4F38);\
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
			TRC_OUTPUT_16_SINGLE_WRAPPER_L2(0x5038,0x5038);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x5138,0x5138);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x5238,0x5238);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x5338,0x5338);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x5438,0x5438);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x5538,0x5538);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x5638,0x5638);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x5738,0x5738);\
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
			TRC_OUTPUT_16_SINGLE_WRAPPER_L2(0x5838,0x5838);\
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
			TRC_OUTPUT_16_SINGLE_WRAPPER_L2(0x5938,0x5938);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x5A38,0x5A38);\
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
			TRC_OUTPUT_16_SINGLE_WRAPPER_L2(0x5B38,0x5B38);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x5C38,0x5C38);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x5D38,0x5D38);\
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
			TRC_OUTPUT_16_SINGLE_WRAPPER_L2(0x5E38,0x5E38);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x5F38,0x5F38);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x6038,0x6038);\
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
			TRC_OUTPUT_16_SINGLE_WRAPPER_L2(0x6138,0x6138);\
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
			TRC_OUTPUT_16_SINGLE_WRAPPER_L2(0x6238,0x6238);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x6338,0x6338);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x6438,0x6438);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x6538,0x6538);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x6638,0x6638);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x6738,0x6738);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x6838,0x6838);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x6938,0x6938);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x6A38,0x6A38);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x6B38,0x6B38);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x6C38,0x6C38);\
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
