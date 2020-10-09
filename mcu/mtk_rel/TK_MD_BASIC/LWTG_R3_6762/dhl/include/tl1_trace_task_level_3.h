#ifndef L1TRC_AST_L1_Trace_Task_Context_Group3_DEF_H
#define L1TRC_AST_L1_Trace_Task_Context_Group3_DEF_H

/******************************/
/* String category definition */
/******************************/
#define Str_Bool(v1)  (unsigned char)(v1+0)
#define Str_Gap_Control_State(v1)  (unsigned char)(v1+2)
#define Str_Gap_Suspend_State(v1)  (unsigned char)(v1+6)
#define Str_Auto_Suspend_Normal_State(v1)  (unsigned char)(v1+9)
#define Str_Tl1a_Gap_Internal(v1)  (unsigned char)(v1+12)
#define Str_Auto_Gap_Control_State(v1)  (unsigned char)(v1+14)
#define Str_Auto_Gap_Available_State(v1)  (unsigned char)(v1+17)
#define Str_Auto_Gap_Start_State(v1)  (unsigned char)(v1+19)
#define Str_TL1TCM_State(v1)  (unsigned char)(v1+21)
#define Str_TL1RXBRP_RST_State(v1)  (unsigned char)(v1+23)
#define Str_TL1RXBRP_DL_BOOT_State(v1)  (unsigned char)(v1+25)


/****************************/
/* Message macro definition */
/****************************/
#include "L1Trc.h"
#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define AST_L1_Trace_Task_Context_Group3_TEST_MSG_1(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(AST_L1_Trace_Task_Context_Group3_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0087,0x0087);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(AST_L1_Trace_Task_Context_Group3_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define AST_L1_Trace_Task_Context_Group3_TEST_MSG_1(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define AST_L1_Trace_Task_Context_Group3_TEST_MSG_2(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(AST_L1_Trace_Task_Context_Group3_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0187,0x0187);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(AST_L1_Trace_Task_Context_Group3_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define AST_L1_Trace_Task_Context_Group3_TEST_MSG_2(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define AST_L1_Trace_Task_Context_Group3_TEST_MSG_3(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(AST_L1_Trace_Task_Context_Group3_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0287,0x0287);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(AST_L1_Trace_Task_Context_Group3_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define AST_L1_Trace_Task_Context_Group3_TEST_MSG_3(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define AST_L1_Trace_Task_Context_Group3_GAP_CONTROL_STATE(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(AST_L1_Trace_Task_Context_Group3_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0387,0x0387);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(AST_L1_Trace_Task_Context_Group3_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define AST_L1_Trace_Task_Context_Group3_GAP_CONTROL_STATE(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define AST_L1_Trace_Task_Context_Group3_AUTO_GAP_CONTROL_STATE(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(AST_L1_Trace_Task_Context_Group3_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0487,0x0487);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(AST_L1_Trace_Task_Context_Group3_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define AST_L1_Trace_Task_Context_Group3_AUTO_GAP_CONTROL_STATE(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define AST_L1_Trace_Task_Context_Group3_AUTO_GAP_AVAILABLE_STATE(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(AST_L1_Trace_Task_Context_Group3_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0587,0x0587);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(AST_L1_Trace_Task_Context_Group3_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define AST_L1_Trace_Task_Context_Group3_AUTO_GAP_AVAILABLE_STATE(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define AST_L1_Trace_Task_Context_Group3_AUTO_GAP_START_STATE(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(AST_L1_Trace_Task_Context_Group3_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0687,0x0687);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(AST_L1_Trace_Task_Context_Group3_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define AST_L1_Trace_Task_Context_Group3_AUTO_GAP_START_STATE(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define AST_L1_Trace_Task_Context_Group3_CURRENT_GAP_INFO(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(AST_L1_Trace_Task_Context_Group3_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0787,0x0787);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(AST_L1_Trace_Task_Context_Group3_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define AST_L1_Trace_Task_Context_Group3_CURRENT_GAP_INFO(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define AST_L1_Trace_Task_Context_Group3_CURRENT_AUTO_GAP_INFO(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(AST_L1_Trace_Task_Context_Group3_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0887,0x0887);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(AST_L1_Trace_Task_Context_Group3_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define AST_L1_Trace_Task_Context_Group3_CURRENT_AUTO_GAP_INFO(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define AST_L1_Trace_Task_Context_Group3_CURRENT_GAP_INFO_1(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(AST_L1_Trace_Task_Context_Group3_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0987,0x0987);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(AST_L1_Trace_Task_Context_Group3_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define AST_L1_Trace_Task_Context_Group3_CURRENT_GAP_INFO_1(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define AST_L1_Trace_Task_Context_Group3_GAP_STOP_POINT(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(AST_L1_Trace_Task_Context_Group3_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0A87,0x0A87);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(AST_L1_Trace_Task_Context_Group3_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define AST_L1_Trace_Task_Context_Group3_GAP_STOP_POINT(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define AST_L1_Trace_Task_Context_Group3_TD_SYNC_CLEAR(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(AST_L1_Trace_Task_Context_Group3_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0B87,0x0B87);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(AST_L1_Trace_Task_Context_Group3_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define AST_L1_Trace_Task_Context_Group3_TD_SYNC_CLEAR(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define AST_L1_Trace_Task_Context_Group3_TD_AUTO_SYNC_CLEAR(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(AST_L1_Trace_Task_Context_Group3_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0C87,0x0C87);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(AST_L1_Trace_Task_Context_Group3_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define AST_L1_Trace_Task_Context_Group3_TD_AUTO_SYNC_CLEAR(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define AST_L1_Trace_Task_context_Group3_GAP_ADDI_INFO(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(AST_L1_Trace_Task_Context_Group3_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0D87,0x0D87);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(AST_L1_Trace_Task_Context_Group3_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define AST_L1_Trace_Task_context_Group3_GAP_ADDI_INFO(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define AST_L1_Trace_Task_context_Group3_2G_STOP_GAP_REQ(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(AST_L1_Trace_Task_Context_Group3_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0E87,0x0E87);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(AST_L1_Trace_Task_Context_Group3_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define AST_L1_Trace_Task_context_Group3_2G_STOP_GAP_REQ(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define AST_L1_Trace_Task_context_Group3_CURRENT_GAP_INDEX(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(AST_L1_Trace_Task_Context_Group3_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0F87,0x0F87);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(AST_L1_Trace_Task_Context_Group3_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define AST_L1_Trace_Task_context_Group3_CURRENT_GAP_INDEX(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define AST_L1_Trace_Task_context_Group3_L1A_GAP_STORE(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(AST_L1_Trace_Task_Context_Group3_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1087,0x1087);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(AST_L1_Trace_Task_Context_Group3_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define AST_L1_Trace_Task_context_Group3_L1A_GAP_STORE(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define AST_L1_Trace_Task_context_Group3_CLEAR_TL1C_GAP() do {\
		{\
			TRC_START_FILTER_CHECK_L1(AST_L1_Trace_Task_Context_Group3_Trace_Filter, 1, 0x01);\
			TRC_START_FILL_L1();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L1(0x1187,0x1187);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(AST_L1_Trace_Task_Context_Group3_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define AST_L1_Trace_Task_context_Group3_CLEAR_TL1C_GAP()
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define AST_L1_Trace_Task_context_Group3_DMS_TASK_ACT_BMP(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(AST_L1_Trace_Task_Context_Group3_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1287,0x1287);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(AST_L1_Trace_Task_Context_Group3_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define AST_L1_Trace_Task_context_Group3_DMS_TASK_ACT_BMP(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define AST_L1_Trace_Task_Context_Group3_SYNC_PERIOD_LENGTH_2G(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(AST_L1_Trace_Task_Context_Group3_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1387,0x1387);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(AST_L1_Trace_Task_Context_Group3_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define AST_L1_Trace_Task_Context_Group3_SYNC_PERIOD_LENGTH_2G(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define AST_L1_Trace_Task_Context_Group3_SYNC_PERIOD_LENGTH_3G(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(AST_L1_Trace_Task_Context_Group3_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1487,0x1487);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(AST_L1_Trace_Task_Context_Group3_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define AST_L1_Trace_Task_Context_Group3_SYNC_PERIOD_LENGTH_3G(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define AST_L1_Trace_Task_Context_Group3_WAKEUP_DSP(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(AST_L1_Trace_Task_Context_Group3_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1587,0x1587);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(AST_L1_Trace_Task_Context_Group3_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define AST_L1_Trace_Task_Context_Group3_WAKEUP_DSP(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define AST_L1_Trace_Task_Context_Group3_POWERDOWN_TL1D(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(AST_L1_Trace_Task_Context_Group3_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1687,0x1687);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(AST_L1_Trace_Task_Context_Group3_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define AST_L1_Trace_Task_Context_Group3_POWERDOWN_TL1D(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define AST_L1_Trace_Task_Context_Group3_TL1A_BOOT_RXBRP_FW(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(AST_L1_Trace_Task_Context_Group3_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1787,0x1787);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(AST_L1_Trace_Task_Context_Group3_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define AST_L1_Trace_Task_Context_Group3_TL1A_BOOT_RXBRP_FW(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define AST_L1_Trace_Task_Context_Group3_DYNAMIC_TCM_UBIN_T_STATUS(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(AST_L1_Trace_Task_Context_Group3_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1887,0x1887);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(AST_L1_Trace_Task_Context_Group3_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define AST_L1_Trace_Task_Context_Group3_DYNAMIC_TCM_UBIN_T_STATUS(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define AST_L1_Trace_Task_Context_Group3_TL1A_RXBRP_PWR_CTRL(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(AST_L1_Trace_Task_Context_Group3_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1987,0x1987);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(AST_L1_Trace_Task_Context_Group3_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define AST_L1_Trace_Task_Context_Group3_TL1A_RXBRP_PWR_CTRL(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define AST_L1_Trace_Task_Context_Group3_TL1A_RXBRP_RESET_STATE(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(AST_L1_Trace_Task_Context_Group3_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1A87,0x1A87);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(AST_L1_Trace_Task_Context_Group3_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define AST_L1_Trace_Task_Context_Group3_TL1A_RXBRP_RESET_STATE(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define AST_L1_Trace_Task_context_Group3_GAP_ADDI_INFO_1(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(AST_L1_Trace_Task_Context_Group3_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1B87,0x1B87);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(AST_L1_Trace_Task_Context_Group3_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define AST_L1_Trace_Task_context_Group3_GAP_ADDI_INFO_1(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define AST_L1_Trace_Task_context_Group3_ACTIVE_RAT_REQ_GAP_STOP(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(AST_L1_Trace_Task_Context_Group3_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1C87,0x1C87);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(AST_L1_Trace_Task_Context_Group3_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define AST_L1_Trace_Task_context_Group3_ACTIVE_RAT_REQ_GAP_STOP(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define AST_L1_Trace_Task_context_Group3_MMS_TASK_ACT_BMP(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(AST_L1_Trace_Task_Context_Group3_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1D87,0x1D87);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(AST_L1_Trace_Task_Context_Group3_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define AST_L1_Trace_Task_context_Group3_MMS_TASK_ACT_BMP(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define AST_L1_Trace_Task_context_Group3_MMS_MSG_INFO(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(AST_L1_Trace_Task_Context_Group3_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1E87,0x1E87);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(AST_L1_Trace_Task_Context_Group3_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define AST_L1_Trace_Task_context_Group3_MMS_MSG_INFO(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define AST_L1_Trace_Task_Context_Group3_TEST_SUSPEND_STATE(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(AST_L1_Trace_Task_Context_Group3_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1F87,0x1F87);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(AST_L1_Trace_Task_Context_Group3_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define AST_L1_Trace_Task_Context_Group3_TEST_SUSPEND_STATE(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define AST_L1_Trace_Task_Context_Group3_AUTO_SUSPEND_NORMAL_STATE(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(AST_L1_Trace_Task_Context_Group3_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x2087,0x2087);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(AST_L1_Trace_Task_Context_Group3_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define AST_L1_Trace_Task_Context_Group3_AUTO_SUSPEND_NORMAL_STATE(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define AST_L1_Trace_Task_context_Group3_MMS_GAP_TID_INFO(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(AST_L1_Trace_Task_Context_Group3_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x2187,0x2187);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(AST_L1_Trace_Task_Context_Group3_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define AST_L1_Trace_Task_context_Group3_MMS_GAP_TID_INFO(v1, v2)
#endif



/*******************************/
/* declaration of filter array */
/*******************************/
EXTERN_TMD_FILTER(unsigned char, AST_L1_Trace_Task_Context_Group3_Trace_Filter, 5);
/*************************/
/* Function declarations */
/*************************/
#ifdef L1_CATCHER

void Set_AST_L1_Trace_Task_Context_Group3_Filter(unsigned char *setting);

#endif

/************************************/
/* Filter checking API declarations */
/************************************/

#define ChkL1ModFltr_AST_L1_Trace_Task_Context_Group3()	(FILTER_CHECK(AST_L1_Trace_Task_Context_Group3_Trace_Filter, 0, 1))
#define ChkL1ClsFltr_AST_L1_Trace_Task_Context_Group3_TEST_CLASS_1()	(ChkL1ModFltr_AST_L1_Trace_Task_Context_Group3()&&(FILTER_CHECK(AST_L1_Trace_Task_Context_Group3_Trace_Filter, 1, 0x01)))
#define ChkL1ClsFltr_AST_L1_Trace_Task_Context_Group3_TEST_CLASS_2()	(ChkL1ModFltr_AST_L1_Trace_Task_Context_Group3()&&(FILTER_CHECK(AST_L1_Trace_Task_Context_Group3_Trace_Filter, 1, 0x02)))
#define ChkL1MsgFltr_AST_L1_Trace_Task_Context_Group3_TEST_MSG_1()	ChkL1ClsFltr_AST_L1_Trace_Task_Context_Group3_TEST_CLASS_1()
#define ChkL1MsgFltr_AST_L1_Trace_Task_Context_Group3_TEST_MSG_2()	ChkL1ClsFltr_AST_L1_Trace_Task_Context_Group3_TEST_CLASS_2()
#define ChkL1MsgFltr_AST_L1_Trace_Task_Context_Group3_TEST_MSG_3()	ChkL1ClsFltr_AST_L1_Trace_Task_Context_Group3_TEST_CLASS_1()
#define ChkL1MsgFltr_AST_L1_Trace_Task_Context_Group3_GAP_CONTROL_STATE()	ChkL1ClsFltr_AST_L1_Trace_Task_Context_Group3_TEST_CLASS_1()
#define ChkL1MsgFltr_AST_L1_Trace_Task_Context_Group3_AUTO_GAP_CONTROL_STATE()	ChkL1ClsFltr_AST_L1_Trace_Task_Context_Group3_TEST_CLASS_1()
#define ChkL1MsgFltr_AST_L1_Trace_Task_Context_Group3_AUTO_GAP_AVAILABLE_STATE()	ChkL1ClsFltr_AST_L1_Trace_Task_Context_Group3_TEST_CLASS_1()
#define ChkL1MsgFltr_AST_L1_Trace_Task_Context_Group3_AUTO_GAP_START_STATE()	ChkL1ClsFltr_AST_L1_Trace_Task_Context_Group3_TEST_CLASS_1()
#define ChkL1MsgFltr_AST_L1_Trace_Task_Context_Group3_CURRENT_GAP_INFO()	ChkL1ClsFltr_AST_L1_Trace_Task_Context_Group3_TEST_CLASS_1()
#define ChkL1MsgFltr_AST_L1_Trace_Task_Context_Group3_CURRENT_AUTO_GAP_INFO()	ChkL1ClsFltr_AST_L1_Trace_Task_Context_Group3_TEST_CLASS_1()
#define ChkL1MsgFltr_AST_L1_Trace_Task_Context_Group3_CURRENT_GAP_INFO_1()	ChkL1ClsFltr_AST_L1_Trace_Task_Context_Group3_TEST_CLASS_1()
#define ChkL1MsgFltr_AST_L1_Trace_Task_Context_Group3_GAP_STOP_POINT()	ChkL1ClsFltr_AST_L1_Trace_Task_Context_Group3_TEST_CLASS_1()
#define ChkL1MsgFltr_AST_L1_Trace_Task_Context_Group3_TD_SYNC_CLEAR()	ChkL1ClsFltr_AST_L1_Trace_Task_Context_Group3_TEST_CLASS_1()
#define ChkL1MsgFltr_AST_L1_Trace_Task_Context_Group3_TD_AUTO_SYNC_CLEAR()	ChkL1ClsFltr_AST_L1_Trace_Task_Context_Group3_TEST_CLASS_1()
#define ChkL1MsgFltr_AST_L1_Trace_Task_context_Group3_GAP_ADDI_INFO()	ChkL1ClsFltr_AST_L1_Trace_Task_Context_Group3_TEST_CLASS_1()
#define ChkL1MsgFltr_AST_L1_Trace_Task_context_Group3_2G_STOP_GAP_REQ()	ChkL1ClsFltr_AST_L1_Trace_Task_Context_Group3_TEST_CLASS_1()
#define ChkL1MsgFltr_AST_L1_Trace_Task_context_Group3_CURRENT_GAP_INDEX()	ChkL1ClsFltr_AST_L1_Trace_Task_Context_Group3_TEST_CLASS_1()
#define ChkL1MsgFltr_AST_L1_Trace_Task_context_Group3_L1A_GAP_STORE()	ChkL1ClsFltr_AST_L1_Trace_Task_Context_Group3_TEST_CLASS_1()
#define ChkL1MsgFltr_AST_L1_Trace_Task_context_Group3_CLEAR_TL1C_GAP()	ChkL1ClsFltr_AST_L1_Trace_Task_Context_Group3_TEST_CLASS_1()
#define ChkL1MsgFltr_AST_L1_Trace_Task_context_Group3_DMS_TASK_ACT_BMP()	ChkL1ClsFltr_AST_L1_Trace_Task_Context_Group3_TEST_CLASS_1()
#define ChkL1MsgFltr_AST_L1_Trace_Task_Context_Group3_SYNC_PERIOD_LENGTH_2G()	ChkL1ClsFltr_AST_L1_Trace_Task_Context_Group3_TEST_CLASS_1()
#define ChkL1MsgFltr_AST_L1_Trace_Task_Context_Group3_SYNC_PERIOD_LENGTH_3G()	ChkL1ClsFltr_AST_L1_Trace_Task_Context_Group3_TEST_CLASS_1()
#define ChkL1MsgFltr_AST_L1_Trace_Task_Context_Group3_WAKEUP_DSP()	ChkL1ClsFltr_AST_L1_Trace_Task_Context_Group3_TEST_CLASS_1()
#define ChkL1MsgFltr_AST_L1_Trace_Task_Context_Group3_POWERDOWN_TL1D()	ChkL1ClsFltr_AST_L1_Trace_Task_Context_Group3_TEST_CLASS_1()
#define ChkL1MsgFltr_AST_L1_Trace_Task_Context_Group3_TL1A_BOOT_RXBRP_FW()	ChkL1ClsFltr_AST_L1_Trace_Task_Context_Group3_TEST_CLASS_1()
#define ChkL1MsgFltr_AST_L1_Trace_Task_Context_Group3_DYNAMIC_TCM_UBIN_T_STATUS()	ChkL1ClsFltr_AST_L1_Trace_Task_Context_Group3_TEST_CLASS_1()
#define ChkL1MsgFltr_AST_L1_Trace_Task_Context_Group3_TL1A_RXBRP_PWR_CTRL()	ChkL1ClsFltr_AST_L1_Trace_Task_Context_Group3_TEST_CLASS_1()
#define ChkL1MsgFltr_AST_L1_Trace_Task_Context_Group3_TL1A_RXBRP_RESET_STATE()	ChkL1ClsFltr_AST_L1_Trace_Task_Context_Group3_TEST_CLASS_1()
#define ChkL1MsgFltr_AST_L1_Trace_Task_context_Group3_GAP_ADDI_INFO_1()	ChkL1ClsFltr_AST_L1_Trace_Task_Context_Group3_TEST_CLASS_1()
#define ChkL1MsgFltr_AST_L1_Trace_Task_context_Group3_ACTIVE_RAT_REQ_GAP_STOP()	ChkL1ClsFltr_AST_L1_Trace_Task_Context_Group3_TEST_CLASS_1()
#define ChkL1MsgFltr_AST_L1_Trace_Task_context_Group3_MMS_TASK_ACT_BMP()	ChkL1ClsFltr_AST_L1_Trace_Task_Context_Group3_TEST_CLASS_1()
#define ChkL1MsgFltr_AST_L1_Trace_Task_context_Group3_MMS_MSG_INFO()	ChkL1ClsFltr_AST_L1_Trace_Task_Context_Group3_TEST_CLASS_1()
#define ChkL1MsgFltr_AST_L1_Trace_Task_Context_Group3_TEST_SUSPEND_STATE()	ChkL1ClsFltr_AST_L1_Trace_Task_Context_Group3_TEST_CLASS_1()
#define ChkL1MsgFltr_AST_L1_Trace_Task_Context_Group3_AUTO_SUSPEND_NORMAL_STATE()	ChkL1ClsFltr_AST_L1_Trace_Task_Context_Group3_TEST_CLASS_1()
#define ChkL1MsgFltr_AST_L1_Trace_Task_context_Group3_MMS_GAP_TID_INFO()	ChkL1ClsFltr_AST_L1_Trace_Task_Context_Group3_TEST_CLASS_1()


#endif
