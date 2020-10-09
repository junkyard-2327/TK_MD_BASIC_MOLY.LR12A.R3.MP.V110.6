#ifndef L1TRC_AST_L1_Trace_Task_Context_Group2_DEF_H
#define L1TRC_AST_L1_Trace_Task_Context_Group2_DEF_H

/******************************/
/* String category definition */
/******************************/
#define Str_Bool(v1)  (unsigned char)(v1+0)


/****************************/
/* Message macro definition */
/****************************/
#include "L1Trc.h"
#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define AST_L1_Trace_Task_Context_Group2_TEST_MSG_1(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(AST_L1_Trace_Task_Context_Group2_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0086,0x0086);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(AST_L1_Trace_Task_Context_Group2_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define AST_L1_Trace_Task_Context_Group2_TEST_MSG_1(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define AST_L1_Trace_Task_Context_Group2_TEST_MSG_2(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(AST_L1_Trace_Task_Context_Group2_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0186,0x0186);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(AST_L1_Trace_Task_Context_Group2_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define AST_L1_Trace_Task_Context_Group2_TEST_MSG_2(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define AST_L1_Trace_Task_Context_Group2_TEST_MSG_3(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(AST_L1_Trace_Task_Context_Group2_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0286,0x0286);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(AST_L1_Trace_Task_Context_Group2_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define AST_L1_Trace_Task_Context_Group2_TEST_MSG_3(v1)
#endif



/*******************************/
/* declaration of filter array */
/*******************************/
EXTERN_TMD_FILTER(unsigned char, AST_L1_Trace_Task_Context_Group2_Trace_Filter, 5);
/*************************/
/* Function declarations */
/*************************/
#ifdef L1_CATCHER

void Set_AST_L1_Trace_Task_Context_Group2_Filter(unsigned char *setting);

#endif

/************************************/
/* Filter checking API declarations */
/************************************/

#define ChkL1ModFltr_AST_L1_Trace_Task_Context_Group2()	(FILTER_CHECK(AST_L1_Trace_Task_Context_Group2_Trace_Filter, 0, 1))
#define ChkL1ClsFltr_AST_L1_Trace_Task_Context_Group2_TEST_CLASS_1()	(ChkL1ModFltr_AST_L1_Trace_Task_Context_Group2()&&(FILTER_CHECK(AST_L1_Trace_Task_Context_Group2_Trace_Filter, 1, 0x01)))
#define ChkL1ClsFltr_AST_L1_Trace_Task_Context_Group2_TEST_CLASS_2()	(ChkL1ModFltr_AST_L1_Trace_Task_Context_Group2()&&(FILTER_CHECK(AST_L1_Trace_Task_Context_Group2_Trace_Filter, 1, 0x02)))
#define ChkL1MsgFltr_AST_L1_Trace_Task_Context_Group2_TEST_MSG_1()	ChkL1ClsFltr_AST_L1_Trace_Task_Context_Group2_TEST_CLASS_1()
#define ChkL1MsgFltr_AST_L1_Trace_Task_Context_Group2_TEST_MSG_2()	ChkL1ClsFltr_AST_L1_Trace_Task_Context_Group2_TEST_CLASS_2()
#define ChkL1MsgFltr_AST_L1_Trace_Task_Context_Group2_TEST_MSG_3()	ChkL1ClsFltr_AST_L1_Trace_Task_Context_Group2_TEST_CLASS_1()


#endif
