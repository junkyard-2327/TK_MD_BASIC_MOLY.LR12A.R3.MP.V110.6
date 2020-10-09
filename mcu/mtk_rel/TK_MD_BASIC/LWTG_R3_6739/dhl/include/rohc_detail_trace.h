#ifndef L1TRC_ROHC_DETAIL_DEF_H
#define L1TRC_ROHC_DETAIL_DEF_H

/******************************/
/* String category definition */
/******************************/


/****************************/
/* Message macro definition */
/****************************/
#include "L1Trc.h"
#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define ROHC_LOG_D_PTRN_SEQ_TICK(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L2(ROHC_DETAIL_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v3,v3);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x0022,0x0022);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_32_LAST_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(ROHC_DETAIL_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define ROHC_LOG_D_PTRN_SEQ_TICK(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define ROHC_LOG_D_MSN_RECOVERY(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L2(ROHC_DETAIL_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v4,v4);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x0122,0x0122);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_32_LAST_WRAPPER_L2(cgen_local_v4,v4);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(ROHC_DETAIL_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define ROHC_LOG_D_MSN_RECOVERY(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define ROHC_LOG_D_CRC_FAIL_NO_RETRY(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L2(ROHC_DETAIL_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x0222,0x0222);\
			TRC_OUTPUT_16_LAST_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(ROHC_DETAIL_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define ROHC_LOG_D_CRC_FAIL_NO_RETRY(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define ROHC_LOG_D_CRC_FAIL_TS_RETRY(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L2(ROHC_DETAIL_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x0322,0x0322);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(ROHC_DETAIL_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define ROHC_LOG_D_CRC_FAIL_TS_RETRY(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define ROHC_LOG_D_WEIRD_TS_STRIDE(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L2(ROHC_DETAIL_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x0422,0x0422);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(ROHC_DETAIL_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define ROHC_LOG_D_WEIRD_TS_STRIDE(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define ROHC_LOG_D_RST_CRC_OK_CNT(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L2(ROHC_DETAIL_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x0522,0x0522);\
			TRC_OUTPUT_16_LAST_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(ROHC_DETAIL_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define ROHC_LOG_D_RST_CRC_OK_CNT(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define ROHC_LOG_D_CRC_OK_INC_CNT(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L2(ROHC_DETAIL_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x0622,0x0622);\
			TRC_OUTPUT_8_LAST_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(ROHC_DETAIL_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define ROHC_LOG_D_CRC_OK_INC_CNT(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define ROHC_LOG_D_CNTXT_UPDT_TO_CNF() do {\
		{\
			TRC_START_FILTER_CHECK_L2(ROHC_DETAIL_Trace_Filter, 1, 0x04);\
			TRC_START_FILL_L2();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L2(0x0722,0x0722);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(ROHC_DETAIL_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define ROHC_LOG_D_CNTXT_UPDT_TO_CNF()
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define ROHC_LOG_D_REACH_CNT_TO_CNF() do {\
		{\
			TRC_START_FILTER_CHECK_L2(ROHC_DETAIL_Trace_Filter, 1, 0x04);\
			TRC_START_FILL_L2();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L2(0x0822,0x0822);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(ROHC_DETAIL_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define ROHC_LOG_D_REACH_CNT_TO_CNF()
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define ROHC_LOG_D_SET_TO_UNCNF(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L2(ROHC_DETAIL_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v3,v3);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x0922,0x0922);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_8_LAST_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(ROHC_DETAIL_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define ROHC_LOG_D_SET_TO_UNCNF(v1, v2, v3)
#endif



/*******************************/
/* declaration of filter array */
/*******************************/
EXTERN_TMD_FILTER(unsigned char, ROHC_DETAIL_Trace_Filter, 5);
/*************************/
/* Function declarations */
/*************************/
#ifdef L1_CATCHER

void Set_ROHC_DETAIL_Filter(unsigned char *setting);

#endif

/************************************/
/* Filter checking API declarations */
/************************************/

#define ChkL1ModFltr_ROHC_DETAIL()	(FILTER_CHECK(ROHC_DETAIL_Trace_Filter, 0, 1))
#define ChkL1ClsFltr_ROHC_DETAIL_ROHC_FUNC()	(ChkL1ModFltr_ROHC_DETAIL()&&(FILTER_CHECK(ROHC_DETAIL_Trace_Filter, 1, 0x01)))
#define ChkL1ClsFltr_ROHC_DETAIL_ROHC_BRANCH()	(ChkL1ModFltr_ROHC_DETAIL()&&(FILTER_CHECK(ROHC_DETAIL_Trace_Filter, 1, 0x02)))
#define ChkL1ClsFltr_ROHC_DETAIL_ROHC_PACKET()	(ChkL1ModFltr_ROHC_DETAIL()&&(FILTER_CHECK(ROHC_DETAIL_Trace_Filter, 1, 0x04)))
#define ChkL1ClsFltr_ROHC_DETAIL_ROHC_DUMP()	(ChkL1ModFltr_ROHC_DETAIL()&&(FILTER_CHECK(ROHC_DETAIL_Trace_Filter, 1, 0x08)))
#define ChkL1MsgFltr_ROHC_LOG_D_PTRN_SEQ_TICK()	ChkL1ClsFltr_ROHC_DETAIL_ROHC_PACKET()
#define ChkL1MsgFltr_ROHC_LOG_D_MSN_RECOVERY()	ChkL1ClsFltr_ROHC_DETAIL_ROHC_PACKET()
#define ChkL1MsgFltr_ROHC_LOG_D_CRC_FAIL_NO_RETRY()	ChkL1ClsFltr_ROHC_DETAIL_ROHC_PACKET()
#define ChkL1MsgFltr_ROHC_LOG_D_CRC_FAIL_TS_RETRY()	ChkL1ClsFltr_ROHC_DETAIL_ROHC_PACKET()
#define ChkL1MsgFltr_ROHC_LOG_D_WEIRD_TS_STRIDE()	ChkL1ClsFltr_ROHC_DETAIL_ROHC_PACKET()
#define ChkL1MsgFltr_ROHC_LOG_D_RST_CRC_OK_CNT()	ChkL1ClsFltr_ROHC_DETAIL_ROHC_PACKET()
#define ChkL1MsgFltr_ROHC_LOG_D_CRC_OK_INC_CNT()	ChkL1ClsFltr_ROHC_DETAIL_ROHC_PACKET()
#define ChkL1MsgFltr_ROHC_LOG_D_CNTXT_UPDT_TO_CNF()	ChkL1ClsFltr_ROHC_DETAIL_ROHC_PACKET()
#define ChkL1MsgFltr_ROHC_LOG_D_REACH_CNT_TO_CNF()	ChkL1ClsFltr_ROHC_DETAIL_ROHC_PACKET()
#define ChkL1MsgFltr_ROHC_LOG_D_SET_TO_UNCNF()	ChkL1ClsFltr_ROHC_DETAIL_ROHC_PACKET()


#endif
