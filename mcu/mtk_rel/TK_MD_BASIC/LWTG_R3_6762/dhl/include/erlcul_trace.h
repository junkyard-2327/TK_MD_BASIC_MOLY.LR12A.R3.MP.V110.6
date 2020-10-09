#ifndef L1TRC_ERLCUL_DEF_H
#define L1TRC_ERLCUL_DEF_H

/******************************/
/* String category definition */
/******************************/


/****************************/
/* Message macro definition */
/****************************/
#include "L1Trc.h"
#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define ERLCUL_LOG_RELSN_UPDATE(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L2(ERLCUL_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x0018,0x0018);\
			TRC_OUTPUT_16_LAST_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(ERLCUL_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define ERLCUL_LOG_RELSN_UPDATE(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define ERLCUL_LOG_CANCEL_POLL_TRGR() do {\
		{\
			TRC_START_FILTER_CHECK_L2(ERLCUL_Trace_Filter, 1, 0x01);\
			TRC_START_FILL_L2();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L2(0x0118,0x0118);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(ERLCUL_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define ERLCUL_LOG_CANCEL_POLL_TRGR()
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define ERLCUL_LOG_STATUS_FDBK_START(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L2(ERLCUL_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x0218,0x0218);\
			TRC_OUTPUT_8_LAST_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(ERLCUL_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define ERLCUL_LOG_STATUS_FDBK_START(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define ERLCUL_LOG_STATUS_FDBK_STOP(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L2(ERLCUL_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x0318,0x0318);\
			TRC_OUTPUT_8_LAST_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(ERLCUL_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define ERLCUL_LOG_STATUS_FDBK_STOP(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define ERLCUL_LOG_STATUS_FDBK_EXPIRE(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L2(ERLCUL_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x0418,0x0418);\
			TRC_OUTPUT_8_LAST_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(ERLCUL_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define ERLCUL_LOG_STATUS_FDBK_EXPIRE(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define ERLCUL_LOG_ADD_POLL_NACK(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L2(ERLCUL_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x0518,0x0518);\
			TRC_OUTPUT_32_LAST_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(ERLCUL_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define ERLCUL_LOG_ADD_POLL_NACK(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define ERLCUL_LOG_DEL_POLL_NACK(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L2(ERLCUL_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x0618,0x0618);\
			TRC_OUTPUT_8_LAST_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(ERLCUL_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define ERLCUL_LOG_DEL_POLL_NACK(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define ERLCUL_LOG_NACK_TUPLE(v1, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L2(ERLCUL_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v4,v4);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x0718,0x0718);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L2(cgen_local_v4,v4);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(ERLCUL_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define ERLCUL_LOG_NACK_TUPLE(v1, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define ERLCUL_LOG_FREE_NACK(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L2(ERLCUL_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x0818,0x0818);\
			TRC_OUTPUT_16_LAST_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(ERLCUL_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define ERLCUL_LOG_FREE_NACK(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define ERLCUL_LOG_FAIL_TO_ALLOC_NACK(v1, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L2(ERLCUL_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v4,v4);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x0918,0x0918);\
			TRC_OUTPUT_24_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L2(cgen_local_v4,v4);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(ERLCUL_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define ERLCUL_LOG_FAIL_TO_ALLOC_NACK(v1, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define ERLCUL_LOG_SMART_SCHEDULE(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L2(ERLCUL_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x0A18,0x0A18);\
			TRC_OUTPUT_8_LAST_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(ERLCUL_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define ERLCUL_LOG_SMART_SCHEDULE(v1)
#endif



/*******************************/
/* declaration of filter array */
/*******************************/
EXTERN_TMD_FILTER(unsigned char, ERLCUL_Trace_Filter, 5);
/*************************/
/* Function declarations */
/*************************/
#ifdef L1_CATCHER

void Set_ERLCUL_Filter(unsigned char *setting);

#endif

/************************************/
/* Filter checking API declarations */
/************************************/

#define ChkL1ModFltr_ERLCUL()	(FILTER_CHECK(ERLCUL_Trace_Filter, 0, 1))
#define ChkL1ClsFltr_ERLCUL_ERLCUL_INFO()	(ChkL1ModFltr_ERLCUL()&&(FILTER_CHECK(ERLCUL_Trace_Filter, 1, 0x01)))
#define ChkL1ClsFltr_ERLCUL_ERLCUL_DUMP()	(ChkL1ModFltr_ERLCUL()&&(FILTER_CHECK(ERLCUL_Trace_Filter, 1, 0x02)))
#define ChkL1ClsFltr_ERLCUL_ERLCUL_DEV()	(ChkL1ModFltr_ERLCUL()&&(FILTER_CHECK(ERLCUL_Trace_Filter, 1, 0x04)))
#define ChkL1MsgFltr_ERLCUL_LOG_RELSN_UPDATE()	ChkL1ClsFltr_ERLCUL_ERLCUL_INFO()
#define ChkL1MsgFltr_ERLCUL_LOG_CANCEL_POLL_TRGR()	ChkL1ClsFltr_ERLCUL_ERLCUL_INFO()
#define ChkL1MsgFltr_ERLCUL_LOG_STATUS_FDBK_START()	ChkL1ClsFltr_ERLCUL_ERLCUL_INFO()
#define ChkL1MsgFltr_ERLCUL_LOG_STATUS_FDBK_STOP()	ChkL1ClsFltr_ERLCUL_ERLCUL_INFO()
#define ChkL1MsgFltr_ERLCUL_LOG_STATUS_FDBK_EXPIRE()	ChkL1ClsFltr_ERLCUL_ERLCUL_INFO()
#define ChkL1MsgFltr_ERLCUL_LOG_ADD_POLL_NACK()	ChkL1ClsFltr_ERLCUL_ERLCUL_INFO()
#define ChkL1MsgFltr_ERLCUL_LOG_DEL_POLL_NACK()	ChkL1ClsFltr_ERLCUL_ERLCUL_INFO()
#define ChkL1MsgFltr_ERLCUL_LOG_NACK_TUPLE()	ChkL1ClsFltr_ERLCUL_ERLCUL_INFO()
#define ChkL1MsgFltr_ERLCUL_LOG_FREE_NACK()	ChkL1ClsFltr_ERLCUL_ERLCUL_INFO()
#define ChkL1MsgFltr_ERLCUL_LOG_FAIL_TO_ALLOC_NACK()	ChkL1ClsFltr_ERLCUL_ERLCUL_DUMP()
#define ChkL1MsgFltr_ERLCUL_LOG_SMART_SCHEDULE()	ChkL1ClsFltr_ERLCUL_ERLCUL_INFO()


#endif
