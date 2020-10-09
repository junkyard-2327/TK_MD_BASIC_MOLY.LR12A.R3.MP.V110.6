#ifndef L1TRC_RAL_PUBLIC_DEF_H
#define L1TRC_RAL_PUBLIC_DEF_H

/******************************/
/* String category definition */
/******************************/


/****************************/
/* Message macro definition */
/****************************/
#include "L1Trc.h"
#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define RAL_LOG_CR4_INIT_CMD_START(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L2(RAL_PUBLIC_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x0027,0x0027);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(RAL_PUBLIC_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define RAL_LOG_CR4_INIT_CMD_START(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define RAL_LOG_CR4_INIT_CMD_END(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L2(RAL_PUBLIC_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x0127,0x0127);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(RAL_PUBLIC_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define RAL_LOG_CR4_INIT_CMD_END(v1, v2)
#endif



/*******************************/
/* declaration of filter array */
/*******************************/
EXTERN_TMD_FILTER(unsigned char, RAL_PUBLIC_Trace_Filter, 5);
/*************************/
/* Function declarations */
/*************************/
#ifdef L1_CATCHER

void Set_RAL_PUBLIC_Filter(unsigned char *setting);

#endif

/************************************/
/* Filter checking API declarations */
/************************************/

#define ChkL1ModFltr_RAL_PUBLIC()	(FILTER_CHECK(RAL_PUBLIC_Trace_Filter, 0, 1))
#define ChkL1ClsFltr_RAL_PUBLIC_RAL_DUMP()	(ChkL1ModFltr_RAL_PUBLIC()&&(FILTER_CHECK(RAL_PUBLIC_Trace_Filter, 1, 0x01)))
#define ChkL1ClsFltr_RAL_PUBLIC_RAL_FUNC()	(ChkL1ModFltr_RAL_PUBLIC()&&(FILTER_CHECK(RAL_PUBLIC_Trace_Filter, 1, 0x02)))
#define ChkL1ClsFltr_RAL_PUBLIC_RAL_BRANCH()	(ChkL1ModFltr_RAL_PUBLIC()&&(FILTER_CHECK(RAL_PUBLIC_Trace_Filter, 1, 0x04)))
#define ChkL1ClsFltr_RAL_PUBLIC_RAL_PACKET()	(ChkL1ModFltr_RAL_PUBLIC()&&(FILTER_CHECK(RAL_PUBLIC_Trace_Filter, 1, 0x08)))
#define ChkL1ClsFltr_RAL_PUBLIC_RAL_IPID()	(ChkL1ModFltr_RAL_PUBLIC()&&(FILTER_CHECK(RAL_PUBLIC_Trace_Filter, 1, 0x10)))
#define ChkL1MsgFltr_RAL_LOG_CR4_INIT_CMD_START()	ChkL1ClsFltr_RAL_PUBLIC_RAL_DUMP()
#define ChkL1MsgFltr_RAL_LOG_CR4_INIT_CMD_END()	ChkL1ClsFltr_RAL_PUBLIC_RAL_DUMP()


#endif
