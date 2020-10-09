#ifndef L1TRC_RAL_DETAIL_DEF_H
#define L1TRC_RAL_DETAIL_DEF_H

/******************************/
/* String category definition */
/******************************/


/****************************/
/* Message macro definition */
/****************************/
#include "L1Trc.h"
#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define RAL_LOG_CR4_TRG_INT(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L2(RAL_DETAIL_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x0026,0x0026);\
			TRC_OUTPUT_16_LAST_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(RAL_DETAIL_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define RAL_LOG_CR4_TRG_INT(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define RAL_LOG_CR4_UL_POLL(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L2(RAL_DETAIL_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x0126,0x0126);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(RAL_DETAIL_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define RAL_LOG_CR4_UL_POLL(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define RAL_LOG_CR4_DL_POLL(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L2(RAL_DETAIL_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x0226,0x0226);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(RAL_DETAIL_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define RAL_LOG_CR4_DL_POLL(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define RAL_LOG_CR4_FDBK_POLL(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L2(RAL_DETAIL_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x0326,0x0326);\
			TRC_OUTPUT_8_LAST_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(RAL_DETAIL_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define RAL_LOG_CR4_FDBK_POLL(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define RAL_LOG_MCU_UL_NO_PKT(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L2(RAL_DETAIL_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x0426,0x0426);\
			TRC_OUTPUT_16_LAST_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(RAL_DETAIL_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define RAL_LOG_MCU_UL_NO_PKT(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define RAL_LOG_MCU_UL_CMPRS_ENTER(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L2(RAL_DETAIL_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x0526,0x0526);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(RAL_DETAIL_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define RAL_LOG_MCU_UL_CMPRS_ENTER(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define RAL_LOG_MCU_UL_CMPRS_LEAVE(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L2(RAL_DETAIL_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x0626,0x0626);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(RAL_DETAIL_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define RAL_LOG_MCU_UL_CMPRS_LEAVE(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define RAL_LOG_MCU_DL_NO_PKT(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L2(RAL_DETAIL_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x0726,0x0726);\
			TRC_OUTPUT_16_LAST_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(RAL_DETAIL_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define RAL_LOG_MCU_DL_NO_PKT(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define RAL_LOG_MCU_DL_DECMPRS_ENTER(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L2(RAL_DETAIL_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x0826,0x0826);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(RAL_DETAIL_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define RAL_LOG_MCU_DL_DECMPRS_ENTER(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define RAL_LOG_MCU_UL_DECMPRS_LEAVE(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L2(RAL_DETAIL_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x0926,0x0926);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(RAL_DETAIL_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define RAL_LOG_MCU_UL_DECMPRS_LEAVE(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define RAL_LOG_MCU_ROHC_PROC_START(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L2(RAL_DETAIL_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x0A26,0x0A26);\
			TRC_OUTPUT_16_LAST_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(RAL_DETAIL_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define RAL_LOG_MCU_ROHC_PROC_START(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define RAL_LOG_MCU_ROHC_PROC_STOP(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L2(RAL_DETAIL_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x0B26,0x0B26);\
			TRC_OUTPUT_16_LAST_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(RAL_DETAIL_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define RAL_LOG_MCU_ROHC_PROC_STOP(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define RAL_LOG_MCU_CR4_CTRL_INFO_ADDR(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L2(RAL_DETAIL_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x0C26,0x0C26);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(RAL_DETAIL_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define RAL_LOG_MCU_CR4_CTRL_INFO_ADDR(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define RAL_LOG_MCU_ROHC_ISR(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L2(RAL_DETAIL_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x0D26,0x0D26);\
			TRC_OUTPUT_16_LAST_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(RAL_DETAIL_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define RAL_LOG_MCU_ROHC_ISR(v1)
#endif



/*******************************/
/* declaration of filter array */
/*******************************/
EXTERN_TMD_FILTER(unsigned char, RAL_DETAIL_Trace_Filter, 5);
/*************************/
/* Function declarations */
/*************************/
#ifdef L1_CATCHER

void Set_RAL_DETAIL_Filter(unsigned char *setting);

#endif

/************************************/
/* Filter checking API declarations */
/************************************/

#define ChkL1ModFltr_RAL_DETAIL()	(FILTER_CHECK(RAL_DETAIL_Trace_Filter, 0, 1))
#define ChkL1ClsFltr_RAL_DETAIL_RAL_FUNC()	(ChkL1ModFltr_RAL_DETAIL()&&(FILTER_CHECK(RAL_DETAIL_Trace_Filter, 1, 0x01)))
#define ChkL1ClsFltr_RAL_DETAIL_RAL_BRANCH()	(ChkL1ModFltr_RAL_DETAIL()&&(FILTER_CHECK(RAL_DETAIL_Trace_Filter, 1, 0x02)))
#define ChkL1ClsFltr_RAL_DETAIL_RAL_PACKET()	(ChkL1ModFltr_RAL_DETAIL()&&(FILTER_CHECK(RAL_DETAIL_Trace_Filter, 1, 0x04)))
#define ChkL1ClsFltr_RAL_DETAIL_RAL_IPID()	(ChkL1ModFltr_RAL_DETAIL()&&(FILTER_CHECK(RAL_DETAIL_Trace_Filter, 1, 0x08)))
#define ChkL1MsgFltr_RAL_LOG_CR4_TRG_INT()	ChkL1ClsFltr_RAL_DETAIL_RAL_PACKET()
#define ChkL1MsgFltr_RAL_LOG_CR4_UL_POLL()	ChkL1ClsFltr_RAL_DETAIL_RAL_PACKET()
#define ChkL1MsgFltr_RAL_LOG_CR4_DL_POLL()	ChkL1ClsFltr_RAL_DETAIL_RAL_PACKET()
#define ChkL1MsgFltr_RAL_LOG_CR4_FDBK_POLL()	ChkL1ClsFltr_RAL_DETAIL_RAL_PACKET()
#define ChkL1MsgFltr_RAL_LOG_MCU_UL_NO_PKT()	ChkL1ClsFltr_RAL_DETAIL_RAL_PACKET()
#define ChkL1MsgFltr_RAL_LOG_MCU_UL_CMPRS_ENTER()	ChkL1ClsFltr_RAL_DETAIL_RAL_PACKET()
#define ChkL1MsgFltr_RAL_LOG_MCU_UL_CMPRS_LEAVE()	ChkL1ClsFltr_RAL_DETAIL_RAL_PACKET()
#define ChkL1MsgFltr_RAL_LOG_MCU_DL_NO_PKT()	ChkL1ClsFltr_RAL_DETAIL_RAL_PACKET()
#define ChkL1MsgFltr_RAL_LOG_MCU_DL_DECMPRS_ENTER()	ChkL1ClsFltr_RAL_DETAIL_RAL_PACKET()
#define ChkL1MsgFltr_RAL_LOG_MCU_UL_DECMPRS_LEAVE()	ChkL1ClsFltr_RAL_DETAIL_RAL_PACKET()
#define ChkL1MsgFltr_RAL_LOG_MCU_ROHC_PROC_START()	ChkL1ClsFltr_RAL_DETAIL_RAL_PACKET()
#define ChkL1MsgFltr_RAL_LOG_MCU_ROHC_PROC_STOP()	ChkL1ClsFltr_RAL_DETAIL_RAL_PACKET()
#define ChkL1MsgFltr_RAL_LOG_MCU_CR4_CTRL_INFO_ADDR()	ChkL1ClsFltr_RAL_DETAIL_RAL_PACKET()
#define ChkL1MsgFltr_RAL_LOG_MCU_ROHC_ISR()	ChkL1ClsFltr_RAL_DETAIL_RAL_PACKET()


#endif
