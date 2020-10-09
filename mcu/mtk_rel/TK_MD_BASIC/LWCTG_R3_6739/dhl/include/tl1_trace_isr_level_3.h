#ifndef L1TRC_AST_L1_Trace_ISR_Context_Group3_DEF_H
#define L1TRC_AST_L1_Trace_ISR_Context_Group3_DEF_H

/******************************/
/* String category definition */
/******************************/
#define Str_Bool(v1)  (unsigned char)(v1+0)
#define Str_Standby_Task_Status(v1)  (unsigned char)(v1+2)
#define Str_Standby_Task_Name(v1)  (unsigned char)(v1+7)
#define Str_Standby_Task_Schedule_Result(v1)  (unsigned char)(v1+11)
#define Str_Standby_Meas_Task_Status(v1)  (unsigned char)(v1+19)
#define Str_Standby_Fscs_Task_Status(v1)  (unsigned char)(v1+26)
#define Str_Standby_Bch_Task_Status(v1)  (unsigned char)(v1+32)
#define Str_TL1_Standby_Suspend_State(v1)  (unsigned char)(v1+35)
#define Str_TL1_Standby_Gap_State(v1)  (unsigned char)(v1+38)
#define Str_TL1_Standby_Auto_Suspend_Norm_State(v1)  (unsigned char)(v1+42)
#define Str_TL1_Standby_Auto_Gap_State(v1)  (unsigned char)(v1+44)
#define Str_TL1Data_Msg_Id(v1)  (unsigned char)(v1+48)


/****************************/
/* Message macro definition */
/****************************/
#include "L1Trc.h"
#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define AST_L1_Trace_ISR_Context_Group3_TEST_MSG_1(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(AST_L1_Trace_ISR_Context_Group3_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x008F,0x008F);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(AST_L1_Trace_ISR_Context_Group3_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define AST_L1_Trace_ISR_Context_Group3_TEST_MSG_1(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define AST_L1_Trace_ISR_Context_Group3_TEST_MSG_2(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(AST_L1_Trace_ISR_Context_Group3_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x018F,0x018F);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(AST_L1_Trace_ISR_Context_Group3_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define AST_L1_Trace_ISR_Context_Group3_TEST_MSG_2(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define AST_L1_Trace_ISR_Context_Group3_TEST_MSG_3(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(AST_L1_Trace_ISR_Context_Group3_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x028F,0x028F);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(AST_L1_Trace_ISR_Context_Group3_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define AST_L1_Trace_ISR_Context_Group3_TEST_MSG_3(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define AST_L1_Trace_ISR_Context_Group3_STANDBY_TASK_STATUS(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(AST_L1_Trace_ISR_Context_Group3_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x038F,0x038F);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(AST_L1_Trace_ISR_Context_Group3_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define AST_L1_Trace_ISR_Context_Group3_STANDBY_TASK_STATUS(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define AST_L1_Trace_ISR_Context_Group3_STANDBY_TASK_SCHEDULE_RESULT(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(AST_L1_Trace_ISR_Context_Group3_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x048F,0x048F);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(AST_L1_Trace_ISR_Context_Group3_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define AST_L1_Trace_ISR_Context_Group3_STANDBY_TASK_SCHEDULE_RESULT(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define AST_L1_Trace_ISR_Context_Group3_STANDBY_TASK_LOCK_CNT(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(AST_L1_Trace_ISR_Context_Group3_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x058F,0x058F);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(AST_L1_Trace_ISR_Context_Group3_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define AST_L1_Trace_ISR_Context_Group3_STANDBY_TASK_LOCK_CNT(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define AST_L1_Trace_ISR_Context_Group3_STANDBY_FAKE_SCELL_INFO(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(AST_L1_Trace_ISR_Context_Group3_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x068F,0x068F);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(AST_L1_Trace_ISR_Context_Group3_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define AST_L1_Trace_ISR_Context_Group3_STANDBY_FAKE_SCELL_INFO(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define AST_L1_Trace_ISR_Context_Group3_STANDBY_FAKE_SCELL_RESEL(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(AST_L1_Trace_ISR_Context_Group3_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x078F,0x078F);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(AST_L1_Trace_ISR_Context_Group3_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define AST_L1_Trace_ISR_Context_Group3_STANDBY_FAKE_SCELL_RESEL(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define AST_L1_Trace_ISR_Context_Group3_STANDBY_TIMING_ADJ_INFO(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(AST_L1_Trace_ISR_Context_Group3_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x088F,0x088F);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(AST_L1_Trace_ISR_Context_Group3_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define AST_L1_Trace_ISR_Context_Group3_STANDBY_TIMING_ADJ_INFO(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define AST_L1_Trace_ISR_Context_Group3_STANDBY_AUTO_TIMING_ADJ_INFO(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(AST_L1_Trace_ISR_Context_Group3_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x098F,0x098F);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(AST_L1_Trace_ISR_Context_Group3_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define AST_L1_Trace_ISR_Context_Group3_STANDBY_AUTO_TIMING_ADJ_INFO(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define AST_L1_Trace_ISR_Context_Group3_STANDBY_GAP_INDEX(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(AST_L1_Trace_ISR_Context_Group3_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0A8F,0x0A8F);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(AST_L1_Trace_ISR_Context_Group3_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define AST_L1_Trace_ISR_Context_Group3_STANDBY_GAP_INDEX(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define AST_L1_Trace_ISR_Context_Group3_RSCP_RSP_DETECT_INFO(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14) do {\
		{\
			TRC_START_FILTER_CHECK_L1(AST_L1_Trace_ISR_Context_Group3_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v5,v5);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v6,v6);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v7,v7);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v8,v8);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v9,v9);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v10,v10);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v11,v11);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v12,v12);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v13,v13);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v14,v14);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v5,v5);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v6,v6);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v7,v7);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v8,v8);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v9,v9);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v10,v10);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v11,v11);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v12,v12);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v13,v13);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v14,v14);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0B8F,0x0B8F);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v7,v7);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v8,v8);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v9,v9);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v10,v10);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v11,v11);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v12,v12);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v13,v13);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v14,v14);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(AST_L1_Trace_ISR_Context_Group3_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define AST_L1_Trace_ISR_Context_Group3_RSCP_RSP_DETECT_INFO(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define AST_L1_Trace_ISR_Context_Group3_LOCK_LAST_SUBFRAME(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(AST_L1_Trace_ISR_Context_Group3_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0C8F,0x0C8F);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(AST_L1_Trace_ISR_Context_Group3_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define AST_L1_Trace_ISR_Context_Group3_LOCK_LAST_SUBFRAME(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define AST_L1_Trace_ISR_Context_Group3_AVAI_SFN_ECHIP_INFO(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(AST_L1_Trace_ISR_Context_Group3_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0D8F,0x0D8F);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(AST_L1_Trace_ISR_Context_Group3_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define AST_L1_Trace_ISR_Context_Group3_AVAI_SFN_ECHIP_INFO(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define AST_L1_Trace_ISR_Context_Group3_AUTO_AVAI_SFN_ECHIP_INFO(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(AST_L1_Trace_ISR_Context_Group3_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0E8F,0x0E8F);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(AST_L1_Trace_ISR_Context_Group3_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define AST_L1_Trace_ISR_Context_Group3_AUTO_AVAI_SFN_ECHIP_INFO(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define AST_L1_Trace_ISR_Context_Group3_AUTO_END_SFN_ECHIP_INFO(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(AST_L1_Trace_ISR_Context_Group3_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0F8F,0x0F8F);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(AST_L1_Trace_ISR_Context_Group3_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define AST_L1_Trace_ISR_Context_Group3_AUTO_END_SFN_ECHIP_INFO(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define AST_L1_Trace_ISR_Context_Group3_TIM_ALIGN_GAP_CALC_INFO(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(AST_L1_Trace_ISR_Context_Group3_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x108F,0x108F);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(AST_L1_Trace_ISR_Context_Group3_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define AST_L1_Trace_ISR_Context_Group3_TIM_ALIGN_GAP_CALC_INFO(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define AST_L1_Trace_ISR_Context_Group3_TIM_ALIGN_AUTO_GAP_CALC_INFO(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(AST_L1_Trace_ISR_Context_Group3_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x118F,0x118F);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(AST_L1_Trace_ISR_Context_Group3_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define AST_L1_Trace_ISR_Context_Group3_TIM_ALIGN_AUTO_GAP_CALC_INFO(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define AST_L1_Trace_ISR_Context_Group3_AUTO_GAP_TO_LL1_INFO(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(AST_L1_Trace_ISR_Context_Group3_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x128F,0x128F);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(AST_L1_Trace_ISR_Context_Group3_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define AST_L1_Trace_ISR_Context_Group3_AUTO_GAP_TO_LL1_INFO(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define AST_L1_Trace_ISR_Context_Group3_GAP_AVAIABLE_CHECK_INFO(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L1(AST_L1_Trace_ISR_Context_Group3_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v5,v5);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x138F,0x138F);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(AST_L1_Trace_ISR_Context_Group3_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define AST_L1_Trace_ISR_Context_Group3_GAP_AVAIABLE_CHECK_INFO(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define AST_L1_Trace_ISR_Context_Group3_MEAS_TASK_STATUS(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(AST_L1_Trace_ISR_Context_Group3_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x148F,0x148F);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(AST_L1_Trace_ISR_Context_Group3_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define AST_L1_Trace_ISR_Context_Group3_MEAS_TASK_STATUS(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define AST_L1_Trace_ISR_Context_Group3_FSCS_TASK_STATUS(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(AST_L1_Trace_ISR_Context_Group3_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x158F,0x158F);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(AST_L1_Trace_ISR_Context_Group3_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define AST_L1_Trace_ISR_Context_Group3_FSCS_TASK_STATUS(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define AST_L1_Trace_ISR_Context_Group3_BCH_TASK_STATUS(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(AST_L1_Trace_ISR_Context_Group3_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x168F,0x168F);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(AST_L1_Trace_ISR_Context_Group3_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define AST_L1_Trace_ISR_Context_Group3_BCH_TASK_STATUS(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define AST_L1_Trace_ISR_Context_Group3_EN_SLEEP() do {\
		{\
			TRC_START_FILTER_CHECK_L1(AST_L1_Trace_ISR_Context_Group3_Trace_Filter, 1, 0x01);\
			TRC_START_FILL_L1();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L1(0x178F,0x178F);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(AST_L1_Trace_ISR_Context_Group3_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define AST_L1_Trace_ISR_Context_Group3_EN_SLEEP()
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define AST_L1_Trace_ISR_Context_Group3_DISEN_SLEEP() do {\
		{\
			TRC_START_FILTER_CHECK_L1(AST_L1_Trace_ISR_Context_Group3_Trace_Filter, 1, 0x01);\
			TRC_START_FILL_L1();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L1(0x188F,0x188F);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(AST_L1_Trace_ISR_Context_Group3_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define AST_L1_Trace_ISR_Context_Group3_DISEN_SLEEP()
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define AST_L1_Trace_ISR_Context_Group3_GAUGING() do {\
		{\
			TRC_START_FILTER_CHECK_L1(AST_L1_Trace_ISR_Context_Group3_Trace_Filter, 1, 0x01);\
			TRC_START_FILL_L1();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L1(0x198F,0x198F);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(AST_L1_Trace_ISR_Context_Group3_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define AST_L1_Trace_ISR_Context_Group3_GAUGING()
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define AST_L1_Trace_ISR_Context_Group3_SLEEP() do {\
		{\
			TRC_START_FILTER_CHECK_L1(AST_L1_Trace_ISR_Context_Group3_Trace_Filter, 1, 0x01);\
			TRC_START_FILL_L1();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L1(0x1A8F,0x1A8F);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(AST_L1_Trace_ISR_Context_Group3_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define AST_L1_Trace_ISR_Context_Group3_SLEEP()
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define AST_L1_Trace_ISR_Context_Group3_MEAS_SAVE_FSCS(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(AST_L1_Trace_ISR_Context_Group3_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1B8F,0x1B8F);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(AST_L1_Trace_ISR_Context_Group3_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define AST_L1_Trace_ISR_Context_Group3_MEAS_SAVE_FSCS(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define AST_L1_Trace_ISR_Context_Group3_CS_RX_BCH_SUSPEND(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(AST_L1_Trace_ISR_Context_Group3_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1C8F,0x1C8F);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(AST_L1_Trace_ISR_Context_Group3_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define AST_L1_Trace_ISR_Context_Group3_CS_RX_BCH_SUSPEND(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define AST_L1_Trace_ISR_Context_Group3_SEND_TASK_MSG(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(AST_L1_Trace_ISR_Context_Group3_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1D8F,0x1D8F);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(AST_L1_Trace_ISR_Context_Group3_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define AST_L1_Trace_ISR_Context_Group3_SEND_TASK_MSG(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define AST_L1_Trace_ISR_Context_Group3_SUSPEND_STATE(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(AST_L1_Trace_ISR_Context_Group3_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1E8F,0x1E8F);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(AST_L1_Trace_ISR_Context_Group3_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define AST_L1_Trace_ISR_Context_Group3_SUSPEND_STATE(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define AST_L1_Trace_ISR_Context_Group3_AUTO_SUSPEND_NORM_STATE(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(AST_L1_Trace_ISR_Context_Group3_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1F8F,0x1F8F);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(AST_L1_Trace_ISR_Context_Group3_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define AST_L1_Trace_ISR_Context_Group3_AUTO_SUSPEND_NORM_STATE(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define AST_L1_Trace_ISR_Context_Group3_STANDBY_GAP_STATE(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(AST_L1_Trace_ISR_Context_Group3_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x208F,0x208F);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(AST_L1_Trace_ISR_Context_Group3_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define AST_L1_Trace_ISR_Context_Group3_STANDBY_GAP_STATE(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define AST_L1_Trace_ISR_Context_Group3_STANDBY_AUTO_GAP_STATE(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(AST_L1_Trace_ISR_Context_Group3_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x218F,0x218F);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(AST_L1_Trace_ISR_Context_Group3_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define AST_L1_Trace_ISR_Context_Group3_STANDBY_AUTO_GAP_STATE(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define AST_L1_Trace_ISR_Context_Group3_TEST_TRACE0(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(AST_L1_Trace_ISR_Context_Group3_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x228F,0x228F);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(AST_L1_Trace_ISR_Context_Group3_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define AST_L1_Trace_ISR_Context_Group3_TEST_TRACE0(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define AST_L1_Trace_ISR_Context_Group3_TEST_TRACE1(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(AST_L1_Trace_ISR_Context_Group3_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x238F,0x238F);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(AST_L1_Trace_ISR_Context_Group3_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define AST_L1_Trace_ISR_Context_Group3_TEST_TRACE1(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define AST_L1_Trace_ISR_Context_Group3_D2BIF_FLAG(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(AST_L1_Trace_ISR_Context_Group3_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x248F,0x248F);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(AST_L1_Trace_ISR_Context_Group3_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define AST_L1_Trace_ISR_Context_Group3_D2BIF_FLAG(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define AST_L1_Trace_ISR_Context_Group3_VSTANDBY_FLAG(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(AST_L1_Trace_ISR_Context_Group3_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x258F,0x258F);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(AST_L1_Trace_ISR_Context_Group3_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define AST_L1_Trace_ISR_Context_Group3_VSTANDBY_FLAG(v1, v2)
#endif



/*******************************/
/* declaration of filter array */
/*******************************/
EXTERN_TMD_FILTER(unsigned char, AST_L1_Trace_ISR_Context_Group3_Trace_Filter, 5);
/*************************/
/* Function declarations */
/*************************/
#ifdef L1_CATCHER

void Set_AST_L1_Trace_ISR_Context_Group3_Filter(unsigned char *setting);

#endif

/************************************/
/* Filter checking API declarations */
/************************************/

#define ChkL1ModFltr_AST_L1_Trace_ISR_Context_Group3()	(FILTER_CHECK(AST_L1_Trace_ISR_Context_Group3_Trace_Filter, 0, 1))
#define ChkL1ClsFltr_AST_L1_Trace_ISR_Context_Group3_TEST_CLASS_1()	(ChkL1ModFltr_AST_L1_Trace_ISR_Context_Group3()&&(FILTER_CHECK(AST_L1_Trace_ISR_Context_Group3_Trace_Filter, 1, 0x01)))
#define ChkL1ClsFltr_AST_L1_Trace_ISR_Context_Group3_TEST_CLASS_2()	(ChkL1ModFltr_AST_L1_Trace_ISR_Context_Group3()&&(FILTER_CHECK(AST_L1_Trace_ISR_Context_Group3_Trace_Filter, 1, 0x02)))
#define ChkL1MsgFltr_AST_L1_Trace_ISR_Context_Group3_TEST_MSG_1()	ChkL1ClsFltr_AST_L1_Trace_ISR_Context_Group3_TEST_CLASS_1()
#define ChkL1MsgFltr_AST_L1_Trace_ISR_Context_Group3_TEST_MSG_2()	ChkL1ClsFltr_AST_L1_Trace_ISR_Context_Group3_TEST_CLASS_2()
#define ChkL1MsgFltr_AST_L1_Trace_ISR_Context_Group3_TEST_MSG_3()	ChkL1ClsFltr_AST_L1_Trace_ISR_Context_Group3_TEST_CLASS_1()
#define ChkL1MsgFltr_AST_L1_Trace_ISR_Context_Group3_STANDBY_TASK_STATUS()	ChkL1ClsFltr_AST_L1_Trace_ISR_Context_Group3_TEST_CLASS_1()
#define ChkL1MsgFltr_AST_L1_Trace_ISR_Context_Group3_STANDBY_TASK_SCHEDULE_RESULT()	ChkL1ClsFltr_AST_L1_Trace_ISR_Context_Group3_TEST_CLASS_1()
#define ChkL1MsgFltr_AST_L1_Trace_ISR_Context_Group3_STANDBY_TASK_LOCK_CNT()	ChkL1ClsFltr_AST_L1_Trace_ISR_Context_Group3_TEST_CLASS_1()
#define ChkL1MsgFltr_AST_L1_Trace_ISR_Context_Group3_STANDBY_FAKE_SCELL_INFO()	ChkL1ClsFltr_AST_L1_Trace_ISR_Context_Group3_TEST_CLASS_1()
#define ChkL1MsgFltr_AST_L1_Trace_ISR_Context_Group3_STANDBY_FAKE_SCELL_RESEL()	ChkL1ClsFltr_AST_L1_Trace_ISR_Context_Group3_TEST_CLASS_1()
#define ChkL1MsgFltr_AST_L1_Trace_ISR_Context_Group3_STANDBY_TIMING_ADJ_INFO()	ChkL1ClsFltr_AST_L1_Trace_ISR_Context_Group3_TEST_CLASS_1()
#define ChkL1MsgFltr_AST_L1_Trace_ISR_Context_Group3_STANDBY_AUTO_TIMING_ADJ_INFO()	ChkL1ClsFltr_AST_L1_Trace_ISR_Context_Group3_TEST_CLASS_1()
#define ChkL1MsgFltr_AST_L1_Trace_ISR_Context_Group3_STANDBY_GAP_INDEX()	ChkL1ClsFltr_AST_L1_Trace_ISR_Context_Group3_TEST_CLASS_1()
#define ChkL1MsgFltr_AST_L1_Trace_ISR_Context_Group3_RSCP_RSP_DETECT_INFO()	ChkL1ClsFltr_AST_L1_Trace_ISR_Context_Group3_TEST_CLASS_1()
#define ChkL1MsgFltr_AST_L1_Trace_ISR_Context_Group3_LOCK_LAST_SUBFRAME()	ChkL1ClsFltr_AST_L1_Trace_ISR_Context_Group3_TEST_CLASS_1()
#define ChkL1MsgFltr_AST_L1_Trace_ISR_Context_Group3_AVAI_SFN_ECHIP_INFO()	ChkL1ClsFltr_AST_L1_Trace_ISR_Context_Group3_TEST_CLASS_1()
#define ChkL1MsgFltr_AST_L1_Trace_ISR_Context_Group3_AUTO_AVAI_SFN_ECHIP_INFO()	ChkL1ClsFltr_AST_L1_Trace_ISR_Context_Group3_TEST_CLASS_1()
#define ChkL1MsgFltr_AST_L1_Trace_ISR_Context_Group3_AUTO_END_SFN_ECHIP_INFO()	ChkL1ClsFltr_AST_L1_Trace_ISR_Context_Group3_TEST_CLASS_1()
#define ChkL1MsgFltr_AST_L1_Trace_ISR_Context_Group3_TIM_ALIGN_GAP_CALC_INFO()	ChkL1ClsFltr_AST_L1_Trace_ISR_Context_Group3_TEST_CLASS_1()
#define ChkL1MsgFltr_AST_L1_Trace_ISR_Context_Group3_TIM_ALIGN_AUTO_GAP_CALC_INFO()	ChkL1ClsFltr_AST_L1_Trace_ISR_Context_Group3_TEST_CLASS_1()
#define ChkL1MsgFltr_AST_L1_Trace_ISR_Context_Group3_AUTO_GAP_TO_LL1_INFO()	ChkL1ClsFltr_AST_L1_Trace_ISR_Context_Group3_TEST_CLASS_1()
#define ChkL1MsgFltr_AST_L1_Trace_ISR_Context_Group3_GAP_AVAIABLE_CHECK_INFO()	ChkL1ClsFltr_AST_L1_Trace_ISR_Context_Group3_TEST_CLASS_1()
#define ChkL1MsgFltr_AST_L1_Trace_ISR_Context_Group3_MEAS_TASK_STATUS()	ChkL1ClsFltr_AST_L1_Trace_ISR_Context_Group3_TEST_CLASS_1()
#define ChkL1MsgFltr_AST_L1_Trace_ISR_Context_Group3_FSCS_TASK_STATUS()	ChkL1ClsFltr_AST_L1_Trace_ISR_Context_Group3_TEST_CLASS_1()
#define ChkL1MsgFltr_AST_L1_Trace_ISR_Context_Group3_BCH_TASK_STATUS()	ChkL1ClsFltr_AST_L1_Trace_ISR_Context_Group3_TEST_CLASS_1()
#define ChkL1MsgFltr_AST_L1_Trace_ISR_Context_Group3_EN_SLEEP()	ChkL1ClsFltr_AST_L1_Trace_ISR_Context_Group3_TEST_CLASS_1()
#define ChkL1MsgFltr_AST_L1_Trace_ISR_Context_Group3_DISEN_SLEEP()	ChkL1ClsFltr_AST_L1_Trace_ISR_Context_Group3_TEST_CLASS_1()
#define ChkL1MsgFltr_AST_L1_Trace_ISR_Context_Group3_GAUGING()	ChkL1ClsFltr_AST_L1_Trace_ISR_Context_Group3_TEST_CLASS_1()
#define ChkL1MsgFltr_AST_L1_Trace_ISR_Context_Group3_SLEEP()	ChkL1ClsFltr_AST_L1_Trace_ISR_Context_Group3_TEST_CLASS_1()
#define ChkL1MsgFltr_AST_L1_Trace_ISR_Context_Group3_MEAS_SAVE_FSCS()	ChkL1ClsFltr_AST_L1_Trace_ISR_Context_Group3_TEST_CLASS_1()
#define ChkL1MsgFltr_AST_L1_Trace_ISR_Context_Group3_CS_RX_BCH_SUSPEND()	ChkL1ClsFltr_AST_L1_Trace_ISR_Context_Group3_TEST_CLASS_1()
#define ChkL1MsgFltr_AST_L1_Trace_ISR_Context_Group3_SEND_TASK_MSG()	ChkL1ClsFltr_AST_L1_Trace_ISR_Context_Group3_TEST_CLASS_1()
#define ChkL1MsgFltr_AST_L1_Trace_ISR_Context_Group3_SUSPEND_STATE()	ChkL1ClsFltr_AST_L1_Trace_ISR_Context_Group3_TEST_CLASS_1()
#define ChkL1MsgFltr_AST_L1_Trace_ISR_Context_Group3_AUTO_SUSPEND_NORM_STATE()	ChkL1ClsFltr_AST_L1_Trace_ISR_Context_Group3_TEST_CLASS_1()
#define ChkL1MsgFltr_AST_L1_Trace_ISR_Context_Group3_STANDBY_GAP_STATE()	ChkL1ClsFltr_AST_L1_Trace_ISR_Context_Group3_TEST_CLASS_1()
#define ChkL1MsgFltr_AST_L1_Trace_ISR_Context_Group3_STANDBY_AUTO_GAP_STATE()	ChkL1ClsFltr_AST_L1_Trace_ISR_Context_Group3_TEST_CLASS_1()
#define ChkL1MsgFltr_AST_L1_Trace_ISR_Context_Group3_TEST_TRACE0()	ChkL1ClsFltr_AST_L1_Trace_ISR_Context_Group3_TEST_CLASS_1()
#define ChkL1MsgFltr_AST_L1_Trace_ISR_Context_Group3_TEST_TRACE1()	ChkL1ClsFltr_AST_L1_Trace_ISR_Context_Group3_TEST_CLASS_1()
#define ChkL1MsgFltr_AST_L1_Trace_ISR_Context_Group3_D2BIF_FLAG()	ChkL1ClsFltr_AST_L1_Trace_ISR_Context_Group3_TEST_CLASS_1()
#define ChkL1MsgFltr_AST_L1_Trace_ISR_Context_Group3_VSTANDBY_FLAG()	ChkL1ClsFltr_AST_L1_Trace_ISR_Context_Group3_TEST_CLASS_1()


#endif
