#ifndef L1TRC_ROHC_DEF_H
#define L1TRC_ROHC_DEF_H

/******************************/
/* String category definition */
/******************************/


/****************************/
/* Message macro definition */
/****************************/
#include "L1Trc.h"
#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define ROHC_LOG_GENERIC(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L2(ROHC_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v4,v4);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x0021,0x0021);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_32_LAST_WRAPPER_L2(cgen_local_v4,v4);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(ROHC_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define ROHC_LOG_GENERIC(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define ROHC_LOG_CFG_ADD_INST(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L2(ROHC_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x0121,0x0121);\
			TRC_OUTPUT_8_LAST_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(ROHC_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define ROHC_LOG_CFG_ADD_INST(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define ROHC_LOG_CFG_DEL_INST(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L2(ROHC_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x0221,0x0221);\
			TRC_OUTPUT_8_LAST_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(ROHC_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define ROHC_LOG_CFG_DEL_INST(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define ROHC_LOG_CFG_RST_INST(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L2(ROHC_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x0321,0x0321);\
			TRC_OUTPUT_8_LAST_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(ROHC_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define ROHC_LOG_CFG_RST_INST(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define ROHC_LOG_CFG_ADD_EXISTED_INST(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L2(ROHC_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x0421,0x0421);\
			TRC_OUTPUT_8_LAST_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(ROHC_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define ROHC_LOG_CFG_ADD_EXISTED_INST(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define ROHC_LOG_CFG_DEL_NON_EXISTED_INST(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L2(ROHC_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x0521,0x0521);\
			TRC_OUTPUT_8_LAST_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(ROHC_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define ROHC_LOG_CFG_DEL_NON_EXISTED_INST(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define ROHC_LOG_CFG_RST_NON_EXISTED_INST(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L2(ROHC_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x0621,0x0621);\
			TRC_OUTPUT_8_LAST_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(ROHC_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define ROHC_LOG_CFG_RST_NON_EXISTED_INST(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define ROHC_LOG_UPDATE_SEQ_WITH_UPDT(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L2(ROHC_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x0721,0x0721);\
			TRC_OUTPUT_16_LAST_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(ROHC_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define ROHC_LOG_UPDATE_SEQ_WITH_UPDT(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define ROHC_LOG_SEQ_WITH_UPDT(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L2(ROHC_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x0821,0x0821);\
			TRC_OUTPUT_16_LAST_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(ROHC_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define ROHC_LOG_SEQ_WITH_UPDT(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define ROHC_LOG_MODE_TRAN_SEQ_WITH_UPDT(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L2(ROHC_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x0921,0x0921);\
			TRC_OUTPUT_16_LAST_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(ROHC_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define ROHC_LOG_MODE_TRAN_SEQ_WITH_UPDT(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define ROHC_LOG_RCVD_UNCMPRS_FDBK(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L2(ROHC_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x0A21,0x0A21);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(ROHC_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define ROHC_LOG_RCVD_UNCMPRS_FDBK(v1, v2)
#endif



/*******************************/
/* declaration of filter array */
/*******************************/
EXTERN_TMD_FILTER(unsigned char, ROHC_Trace_Filter, 5);
/*************************/
/* Function declarations */
/*************************/
#ifdef L1_CATCHER

void Set_ROHC_Filter(unsigned char *setting);

#endif

/************************************/
/* Filter checking API declarations */
/************************************/

#define ChkL1ModFltr_ROHC()	(FILTER_CHECK(ROHC_Trace_Filter, 0, 1))
#define ChkL1ClsFltr_ROHC_ROHC_INFO()	(ChkL1ModFltr_ROHC()&&(FILTER_CHECK(ROHC_Trace_Filter, 1, 0x01)))
#define ChkL1ClsFltr_ROHC_ROHC_DUMP()	(ChkL1ModFltr_ROHC()&&(FILTER_CHECK(ROHC_Trace_Filter, 1, 0x02)))
#define ChkL1MsgFltr_ROHC_LOG_GENERIC()	ChkL1ClsFltr_ROHC_ROHC_DUMP()
#define ChkL1MsgFltr_ROHC_LOG_CFG_ADD_INST()	ChkL1ClsFltr_ROHC_ROHC_INFO()
#define ChkL1MsgFltr_ROHC_LOG_CFG_DEL_INST()	ChkL1ClsFltr_ROHC_ROHC_INFO()
#define ChkL1MsgFltr_ROHC_LOG_CFG_RST_INST()	ChkL1ClsFltr_ROHC_ROHC_INFO()
#define ChkL1MsgFltr_ROHC_LOG_CFG_ADD_EXISTED_INST()	ChkL1ClsFltr_ROHC_ROHC_INFO()
#define ChkL1MsgFltr_ROHC_LOG_CFG_DEL_NON_EXISTED_INST()	ChkL1ClsFltr_ROHC_ROHC_INFO()
#define ChkL1MsgFltr_ROHC_LOG_CFG_RST_NON_EXISTED_INST()	ChkL1ClsFltr_ROHC_ROHC_INFO()
#define ChkL1MsgFltr_ROHC_LOG_UPDATE_SEQ_WITH_UPDT()	ChkL1ClsFltr_ROHC_ROHC_INFO()
#define ChkL1MsgFltr_ROHC_LOG_SEQ_WITH_UPDT()	ChkL1ClsFltr_ROHC_ROHC_INFO()
#define ChkL1MsgFltr_ROHC_LOG_MODE_TRAN_SEQ_WITH_UPDT()	ChkL1ClsFltr_ROHC_ROHC_INFO()
#define ChkL1MsgFltr_ROHC_LOG_RCVD_UNCMPRS_FDBK()	ChkL1ClsFltr_ROHC_ROHC_INFO()


#endif
