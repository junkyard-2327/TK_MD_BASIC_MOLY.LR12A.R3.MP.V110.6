#ifndef L1TRC_AST_L1_Trace_Task_Context_Group1_DEF_H
#define L1TRC_AST_L1_Trace_Task_Context_Group1_DEF_H

/******************************/
/* String category definition */
/******************************/
#define Str_Bool(v1)  (unsigned char)(v1+0)
#define Str_Gap_Service_State(v1)  (unsigned char)(v1+2)
#define Str_Gap_Sync_State(v1)  (unsigned char)(v1+6)
#define Str_Timing_Sync_State(v1)  (unsigned char)(v1+14)
#define Str_Gap_Calc_State(v1)  (unsigned char)(v1+17)
#define Str_Gap_Ctrl_State(v1)  (unsigned char)(v1+19)
#define Str_Reset_State(v1)  (unsigned char)(v1+22)
#define Str_Rf_State(v1)  (unsigned char)(v1+25)
#define Str_Rat_State(v1)  (unsigned char)(v1+27)
#define Str_Fs_State(v1)  (unsigned char)(v1+30)
#define Str_Sniffer_State(v1)  (unsigned char)(v1+35)
#define Str_Scs_State(v1)  (unsigned char)(v1+40)
#define Str_Container_State(v1)  (unsigned char)(v1+43)
#define Str_Bch_State(v1)  (unsigned char)(v1+47)
#define Str_Pch_State(v1)  (unsigned char)(v1+54)
#define Str_Fach_State(v1)  (unsigned char)(v1+61)
#define Str_Rach_State(v1)  (unsigned char)(v1+66)
#define Str_Ra_State(v1)  (unsigned char)(v1+71)
#define Str_Ul_Dch_State(v1)  (unsigned char)(v1+77)
#define Str_Dl_Dch_State(v1)  (unsigned char)(v1+84)
#define Str_Hsdsch_State(v1)  (unsigned char)(v1+91)
#define Str_Meas_State(v1)  (unsigned char)(v1+98)
#define Str_Meas_Internal_State(v1)  (unsigned char)(v1+102)
#define Str_Rel_Meas_Internal_State(v1)  (unsigned char)(v1+104)
#define Str_Meas_Internal_Result_State(v1)  (unsigned char)(v1+106)
#define Str_Suspend_State(v1)  (unsigned char)(v1+108)
#define Str_Peer2G_State(v1)  (unsigned char)(v1+111)
#define Str_Protect_State(v1)  (unsigned char)(v1+114)
#define Str_b39_tx_suspend_State(v1)  (unsigned char)(v1+117)
#define Str_Test_Trace_State(v1)  (unsigned char)(v1+119)
#define Str_TL1_DVFS_Scenario_State(v1)  (unsigned char)(v1+120)
#define Str_TL1_Boot_Mode_State(v1)  (unsigned char)(v1+123)


/****************************/
/* Message macro definition */
/****************************/
#include "L1Trc.h"
#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define AST_L1_Trace_Task_Context_Group1_TEST_GAP_SERVICE_STATE(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(AST_L1_Trace_Task_Context_Group1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0085,0x0085);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(AST_L1_Trace_Task_Context_Group1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define AST_L1_Trace_Task_Context_Group1_TEST_GAP_SERVICE_STATE(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define AST_L1_Trace_Task_Context_Group1_TEST_GAP_SYNC_STATE(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(AST_L1_Trace_Task_Context_Group1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0185,0x0185);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(AST_L1_Trace_Task_Context_Group1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define AST_L1_Trace_Task_Context_Group1_TEST_GAP_SYNC_STATE(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define AST_L1_Trace_Task_Context_Group1_TEST_TIMING_SYNC_STATE(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(AST_L1_Trace_Task_Context_Group1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0285,0x0285);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(AST_L1_Trace_Task_Context_Group1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define AST_L1_Trace_Task_Context_Group1_TEST_TIMING_SYNC_STATE(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define AST_L1_Trace_Task_Context_Group1_TEST_GAP_CALC_STATE(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(AST_L1_Trace_Task_Context_Group1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0385,0x0385);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(AST_L1_Trace_Task_Context_Group1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define AST_L1_Trace_Task_Context_Group1_TEST_GAP_CALC_STATE(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define AST_L1_Trace_Task_Context_Group1_TEST_GAP_CTRL_STATE(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(AST_L1_Trace_Task_Context_Group1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0485,0x0485);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(AST_L1_Trace_Task_Context_Group1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define AST_L1_Trace_Task_Context_Group1_TEST_GAP_CTRL_STATE(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define AST_L1_Trace_Task_Context_Group1_TEST_RESET_STATE(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(AST_L1_Trace_Task_Context_Group1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0585,0x0585);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(AST_L1_Trace_Task_Context_Group1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define AST_L1_Trace_Task_Context_Group1_TEST_RESET_STATE(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define AST_L1_Trace_Task_Context_Group1_TEST_RF_STATE(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(AST_L1_Trace_Task_Context_Group1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0685,0x0685);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(AST_L1_Trace_Task_Context_Group1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define AST_L1_Trace_Task_Context_Group1_TEST_RF_STATE(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define AST_L1_Trace_Task_Context_Group1_TEST_RAT_STATE(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(AST_L1_Trace_Task_Context_Group1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0785,0x0785);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(AST_L1_Trace_Task_Context_Group1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define AST_L1_Trace_Task_Context_Group1_TEST_RAT_STATE(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define AST_L1_Trace_Task_Context_Group1_TEST_FS_STATE(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(AST_L1_Trace_Task_Context_Group1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0885,0x0885);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(AST_L1_Trace_Task_Context_Group1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define AST_L1_Trace_Task_Context_Group1_TEST_FS_STATE(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define AST_L1_Trace_Task_Context_Group1_TEST_SNIFFER_STATE(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(AST_L1_Trace_Task_Context_Group1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0985,0x0985);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(AST_L1_Trace_Task_Context_Group1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define AST_L1_Trace_Task_Context_Group1_TEST_SNIFFER_STATE(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define AST_L1_Trace_Task_Context_Group1_TEST_SCS_STATE(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(AST_L1_Trace_Task_Context_Group1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0A85,0x0A85);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(AST_L1_Trace_Task_Context_Group1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define AST_L1_Trace_Task_Context_Group1_TEST_SCS_STATE(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define AST_L1_Trace_Task_Context_Group1_TEST_CONTAINER_STATE(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(AST_L1_Trace_Task_Context_Group1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0B85,0x0B85);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(AST_L1_Trace_Task_Context_Group1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define AST_L1_Trace_Task_Context_Group1_TEST_CONTAINER_STATE(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define AST_L1_Trace_Task_Context_Group1_TEST_BCH_STATE(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(AST_L1_Trace_Task_Context_Group1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0C85,0x0C85);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(AST_L1_Trace_Task_Context_Group1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define AST_L1_Trace_Task_Context_Group1_TEST_BCH_STATE(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define AST_L1_Trace_Task_Context_Group1_TEST_PCH_STATE(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(AST_L1_Trace_Task_Context_Group1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0D85,0x0D85);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(AST_L1_Trace_Task_Context_Group1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define AST_L1_Trace_Task_Context_Group1_TEST_PCH_STATE(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define AST_L1_Trace_Task_Context_Group1_TEST_FACH_STATE(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(AST_L1_Trace_Task_Context_Group1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0E85,0x0E85);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(AST_L1_Trace_Task_Context_Group1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define AST_L1_Trace_Task_Context_Group1_TEST_FACH_STATE(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define AST_L1_Trace_Task_Context_Group1_TEST_RACH_STATE(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(AST_L1_Trace_Task_Context_Group1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0F85,0x0F85);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(AST_L1_Trace_Task_Context_Group1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define AST_L1_Trace_Task_Context_Group1_TEST_RACH_STATE(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define AST_L1_Trace_Task_Context_Group1_TEST_RA_STATE(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(AST_L1_Trace_Task_Context_Group1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1085,0x1085);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(AST_L1_Trace_Task_Context_Group1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define AST_L1_Trace_Task_Context_Group1_TEST_RA_STATE(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define AST_L1_Trace_Task_Context_Group1_TEST_UL_DCH_STATE(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(AST_L1_Trace_Task_Context_Group1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1185,0x1185);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(AST_L1_Trace_Task_Context_Group1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define AST_L1_Trace_Task_Context_Group1_TEST_UL_DCH_STATE(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define AST_L1_Trace_Task_Context_Group1_TEST_DL_DCH_STATE(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(AST_L1_Trace_Task_Context_Group1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1285,0x1285);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(AST_L1_Trace_Task_Context_Group1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define AST_L1_Trace_Task_Context_Group1_TEST_DL_DCH_STATE(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define AST_L1_Trace_Task_Context_Group1_TEST_HSDSCH_STATE(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(AST_L1_Trace_Task_Context_Group1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1385,0x1385);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(AST_L1_Trace_Task_Context_Group1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define AST_L1_Trace_Task_Context_Group1_TEST_HSDSCH_STATE(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define AST_L1_Trace_Task_Context_Group1_TEST_MEAS_STATE(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(AST_L1_Trace_Task_Context_Group1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1485,0x1485);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(AST_L1_Trace_Task_Context_Group1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define AST_L1_Trace_Task_Context_Group1_TEST_MEAS_STATE(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define AST_L1_Trace_Task_Context_Group1_TEST_MEAS_INTERNAL_STATE(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(AST_L1_Trace_Task_Context_Group1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1585,0x1585);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(AST_L1_Trace_Task_Context_Group1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define AST_L1_Trace_Task_Context_Group1_TEST_MEAS_INTERNAL_STATE(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define AST_L1_Trace_Task_Context_Group1_TEST_REL_MEAS_INTERNAL_STATE(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(AST_L1_Trace_Task_Context_Group1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1685,0x1685);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(AST_L1_Trace_Task_Context_Group1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define AST_L1_Trace_Task_Context_Group1_TEST_REL_MEAS_INTERNAL_STATE(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define AST_L1_Trace_Task_Context_Group1_TEST_MEAS_INTERNAL_RSLT_STATE(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(AST_L1_Trace_Task_Context_Group1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1785,0x1785);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(AST_L1_Trace_Task_Context_Group1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define AST_L1_Trace_Task_Context_Group1_TEST_MEAS_INTERNAL_RSLT_STATE(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define AST_L1_Trace_Task_Context_Group1_TEST_SUSPEND_STATE(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(AST_L1_Trace_Task_Context_Group1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1885,0x1885);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(AST_L1_Trace_Task_Context_Group1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define AST_L1_Trace_Task_Context_Group1_TEST_SUSPEND_STATE(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define AST_L1_Trace_Task_Context_Group1_TEST_PEER_2G_STATE(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(AST_L1_Trace_Task_Context_Group1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1985,0x1985);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(AST_L1_Trace_Task_Context_Group1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define AST_L1_Trace_Task_Context_Group1_TEST_PEER_2G_STATE(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define AST_L1_Trace_Task_Context_Group1_TEST_VIRTUAL_MODE(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(AST_L1_Trace_Task_Context_Group1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1A85,0x1A85);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(AST_L1_Trace_Task_Context_Group1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define AST_L1_Trace_Task_Context_Group1_TEST_VIRTUAL_MODE(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define AST_L1_Trace_Task_Context_Group1_TEST_CHANNEL_PROTECT_STATE(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(AST_L1_Trace_Task_Context_Group1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1B85,0x1B85);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(AST_L1_Trace_Task_Context_Group1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define AST_L1_Trace_Task_Context_Group1_TEST_CHANNEL_PROTECT_STATE(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define AST_L1_Trace_Task_Context_Group1_PEER_2G_OPEN(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(AST_L1_Trace_Task_Context_Group1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1C85,0x1C85);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(AST_L1_Trace_Task_Context_Group1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define AST_L1_Trace_Task_Context_Group1_PEER_2G_OPEN(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define AST_L1_Trace_Task_Context_Group1_L1R_Peer2GOpenConfirm() do {\
		{\
			TRC_START_FILTER_CHECK_L1(AST_L1_Trace_Task_Context_Group1_Trace_Filter, 1, 0x01);\
			TRC_START_FILL_L1();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L1(0x1D85,0x1D85);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(AST_L1_Trace_Task_Context_Group1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define AST_L1_Trace_Task_Context_Group1_L1R_Peer2GOpenConfirm()
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define AST_L1_Trace_Task_Context_Group1_L1R_3GProtectChannel() do {\
		{\
			TRC_START_FILTER_CHECK_L1(AST_L1_Trace_Task_Context_Group1_Trace_Filter, 1, 0x01);\
			TRC_START_FILL_L1();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L1(0x1E85,0x1E85);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(AST_L1_Trace_Task_Context_Group1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define AST_L1_Trace_Task_Context_Group1_L1R_3GProtectChannel()
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define AST_L1_Trace_Task_Context_Group1_L1R_3GCancelProtection() do {\
		{\
			TRC_START_FILTER_CHECK_L1(AST_L1_Trace_Task_Context_Group1_Trace_Filter, 1, 0x01);\
			TRC_START_FILL_L1();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L1(0x1F85,0x1F85);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(AST_L1_Trace_Task_Context_Group1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define AST_L1_Trace_Task_Context_Group1_L1R_3GCancelProtection()
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define AST_L1_Trace_Task_Context_Group1_L1R_3GEnterVirtualMode(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(AST_L1_Trace_Task_Context_Group1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x2085,0x2085);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(AST_L1_Trace_Task_Context_Group1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define AST_L1_Trace_Task_Context_Group1_L1R_3GEnterVirtualMode(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define AST_L1_Trace_Task_Context_Group1_B39_TX_STATE(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(AST_L1_Trace_Task_Context_Group1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x2185,0x2185);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(AST_L1_Trace_Task_Context_Group1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define AST_L1_Trace_Task_Context_Group1_B39_TX_STATE(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define AST_L1_Trace_Task_Context_Group1_RX_POWER(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(AST_L1_Trace_Task_Context_Group1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x2285,0x2285);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(AST_L1_Trace_Task_Context_Group1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define AST_L1_Trace_Task_Context_Group1_RX_POWER(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define AST_L1_Trace_Task_Context_Group1_DVFS_SCENARIO_SWITCH(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(AST_L1_Trace_Task_Context_Group1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x2385,0x2385);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(AST_L1_Trace_Task_Context_Group1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define AST_L1_Trace_Task_Context_Group1_DVFS_SCENARIO_SWITCH(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define AST_L1_Trace_Task_Context_Group1_TL1_BOOT_MODE_SWITCH(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(AST_L1_Trace_Task_Context_Group1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x2485,0x2485);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(AST_L1_Trace_Task_Context_Group1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define AST_L1_Trace_Task_Context_Group1_TL1_BOOT_MODE_SWITCH(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define AST_L1_Trace_Task_Context_Group1_TEST_TRACE1(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(AST_L1_Trace_Task_Context_Group1_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x2585,0x2585);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(AST_L1_Trace_Task_Context_Group1_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define AST_L1_Trace_Task_Context_Group1_TEST_TRACE1(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define AST_L1_Trace_Task_Context_Group1_TEST_TRACE2(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(AST_L1_Trace_Task_Context_Group1_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x2685,0x2685);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(AST_L1_Trace_Task_Context_Group1_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define AST_L1_Trace_Task_Context_Group1_TEST_TRACE2(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define AST_L1_Trace_Task_Context_Group1_TEST_TRACE3(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(AST_L1_Trace_Task_Context_Group1_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x2785,0x2785);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(AST_L1_Trace_Task_Context_Group1_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define AST_L1_Trace_Task_Context_Group1_TEST_TRACE3(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define AST_L1_Trace_Task_Context_Group1_TEST_TRACE4(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(AST_L1_Trace_Task_Context_Group1_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x2885,0x2885);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(AST_L1_Trace_Task_Context_Group1_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define AST_L1_Trace_Task_Context_Group1_TEST_TRACE4(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define AST_L1_Trace_Task_Context_Group1_TEST_TRACE5(v1, v2, v3, v4, v5, v6, v7, v8, v9) do {\
		{\
			TRC_START_FILTER_CHECK_L1(AST_L1_Trace_Task_Context_Group1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v5,v5);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v6,v6);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v7,v7);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v8,v8);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v9,v9);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x2985,0x2985);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v7,v7);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v8,v8);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v9,v9);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(AST_L1_Trace_Task_Context_Group1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define AST_L1_Trace_Task_Context_Group1_TEST_TRACE5(v1, v2, v3, v4, v5, v6, v7, v8, v9)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define AST_L1_Trace_Task_Context_Group1_TEST_MSG_2(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(AST_L1_Trace_Task_Context_Group1_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x2A85,0x2A85);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(AST_L1_Trace_Task_Context_Group1_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define AST_L1_Trace_Task_Context_Group1_TEST_MSG_2(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define AST_L1_Trace_Task_Context_Group1_TEST_MSG_3(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(AST_L1_Trace_Task_Context_Group1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x2B85,0x2B85);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(AST_L1_Trace_Task_Context_Group1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define AST_L1_Trace_Task_Context_Group1_TEST_MSG_3(v1)
#endif



/*******************************/
/* declaration of filter array */
/*******************************/
EXTERN_TMD_FILTER(unsigned char, AST_L1_Trace_Task_Context_Group1_Trace_Filter, 5);
/*************************/
/* Function declarations */
/*************************/
#ifdef L1_CATCHER

void Set_AST_L1_Trace_Task_Context_Group1_Filter(unsigned char *setting);

#endif

/************************************/
/* Filter checking API declarations */
/************************************/

#define ChkL1ModFltr_AST_L1_Trace_Task_Context_Group1()	(FILTER_CHECK(AST_L1_Trace_Task_Context_Group1_Trace_Filter, 0, 1))
#define ChkL1ClsFltr_AST_L1_Trace_Task_Context_Group1_TEST_CLASS_1()	(ChkL1ModFltr_AST_L1_Trace_Task_Context_Group1()&&(FILTER_CHECK(AST_L1_Trace_Task_Context_Group1_Trace_Filter, 1, 0x01)))
#define ChkL1ClsFltr_AST_L1_Trace_Task_Context_Group1_TEST_CLASS_2()	(ChkL1ModFltr_AST_L1_Trace_Task_Context_Group1()&&(FILTER_CHECK(AST_L1_Trace_Task_Context_Group1_Trace_Filter, 1, 0x02)))
#define ChkL1ClsFltr_AST_L1_Trace_Task_Context_Group1_TEST_CLASS_3()	(ChkL1ModFltr_AST_L1_Trace_Task_Context_Group1()&&(FILTER_CHECK(AST_L1_Trace_Task_Context_Group1_Trace_Filter, 1, 0x04)))
#define ChkL1MsgFltr_AST_L1_Trace_Task_Context_Group1_TEST_GAP_SERVICE_STATE()	ChkL1ClsFltr_AST_L1_Trace_Task_Context_Group1_TEST_CLASS_1()
#define ChkL1MsgFltr_AST_L1_Trace_Task_Context_Group1_TEST_GAP_SYNC_STATE()	ChkL1ClsFltr_AST_L1_Trace_Task_Context_Group1_TEST_CLASS_1()
#define ChkL1MsgFltr_AST_L1_Trace_Task_Context_Group1_TEST_TIMING_SYNC_STATE()	ChkL1ClsFltr_AST_L1_Trace_Task_Context_Group1_TEST_CLASS_1()
#define ChkL1MsgFltr_AST_L1_Trace_Task_Context_Group1_TEST_GAP_CALC_STATE()	ChkL1ClsFltr_AST_L1_Trace_Task_Context_Group1_TEST_CLASS_1()
#define ChkL1MsgFltr_AST_L1_Trace_Task_Context_Group1_TEST_GAP_CTRL_STATE()	ChkL1ClsFltr_AST_L1_Trace_Task_Context_Group1_TEST_CLASS_1()
#define ChkL1MsgFltr_AST_L1_Trace_Task_Context_Group1_TEST_RESET_STATE()	ChkL1ClsFltr_AST_L1_Trace_Task_Context_Group1_TEST_CLASS_1()
#define ChkL1MsgFltr_AST_L1_Trace_Task_Context_Group1_TEST_RF_STATE()	ChkL1ClsFltr_AST_L1_Trace_Task_Context_Group1_TEST_CLASS_1()
#define ChkL1MsgFltr_AST_L1_Trace_Task_Context_Group1_TEST_RAT_STATE()	ChkL1ClsFltr_AST_L1_Trace_Task_Context_Group1_TEST_CLASS_1()
#define ChkL1MsgFltr_AST_L1_Trace_Task_Context_Group1_TEST_FS_STATE()	ChkL1ClsFltr_AST_L1_Trace_Task_Context_Group1_TEST_CLASS_1()
#define ChkL1MsgFltr_AST_L1_Trace_Task_Context_Group1_TEST_SNIFFER_STATE()	ChkL1ClsFltr_AST_L1_Trace_Task_Context_Group1_TEST_CLASS_1()
#define ChkL1MsgFltr_AST_L1_Trace_Task_Context_Group1_TEST_SCS_STATE()	ChkL1ClsFltr_AST_L1_Trace_Task_Context_Group1_TEST_CLASS_1()
#define ChkL1MsgFltr_AST_L1_Trace_Task_Context_Group1_TEST_CONTAINER_STATE()	ChkL1ClsFltr_AST_L1_Trace_Task_Context_Group1_TEST_CLASS_1()
#define ChkL1MsgFltr_AST_L1_Trace_Task_Context_Group1_TEST_BCH_STATE()	ChkL1ClsFltr_AST_L1_Trace_Task_Context_Group1_TEST_CLASS_1()
#define ChkL1MsgFltr_AST_L1_Trace_Task_Context_Group1_TEST_PCH_STATE()	ChkL1ClsFltr_AST_L1_Trace_Task_Context_Group1_TEST_CLASS_1()
#define ChkL1MsgFltr_AST_L1_Trace_Task_Context_Group1_TEST_FACH_STATE()	ChkL1ClsFltr_AST_L1_Trace_Task_Context_Group1_TEST_CLASS_1()
#define ChkL1MsgFltr_AST_L1_Trace_Task_Context_Group1_TEST_RACH_STATE()	ChkL1ClsFltr_AST_L1_Trace_Task_Context_Group1_TEST_CLASS_1()
#define ChkL1MsgFltr_AST_L1_Trace_Task_Context_Group1_TEST_RA_STATE()	ChkL1ClsFltr_AST_L1_Trace_Task_Context_Group1_TEST_CLASS_1()
#define ChkL1MsgFltr_AST_L1_Trace_Task_Context_Group1_TEST_UL_DCH_STATE()	ChkL1ClsFltr_AST_L1_Trace_Task_Context_Group1_TEST_CLASS_1()
#define ChkL1MsgFltr_AST_L1_Trace_Task_Context_Group1_TEST_DL_DCH_STATE()	ChkL1ClsFltr_AST_L1_Trace_Task_Context_Group1_TEST_CLASS_1()
#define ChkL1MsgFltr_AST_L1_Trace_Task_Context_Group1_TEST_HSDSCH_STATE()	ChkL1ClsFltr_AST_L1_Trace_Task_Context_Group1_TEST_CLASS_1()
#define ChkL1MsgFltr_AST_L1_Trace_Task_Context_Group1_TEST_MEAS_STATE()	ChkL1ClsFltr_AST_L1_Trace_Task_Context_Group1_TEST_CLASS_1()
#define ChkL1MsgFltr_AST_L1_Trace_Task_Context_Group1_TEST_MEAS_INTERNAL_STATE()	ChkL1ClsFltr_AST_L1_Trace_Task_Context_Group1_TEST_CLASS_1()
#define ChkL1MsgFltr_AST_L1_Trace_Task_Context_Group1_TEST_REL_MEAS_INTERNAL_STATE()	ChkL1ClsFltr_AST_L1_Trace_Task_Context_Group1_TEST_CLASS_1()
#define ChkL1MsgFltr_AST_L1_Trace_Task_Context_Group1_TEST_MEAS_INTERNAL_RSLT_STATE()	ChkL1ClsFltr_AST_L1_Trace_Task_Context_Group1_TEST_CLASS_1()
#define ChkL1MsgFltr_AST_L1_Trace_Task_Context_Group1_TEST_SUSPEND_STATE()	ChkL1ClsFltr_AST_L1_Trace_Task_Context_Group1_TEST_CLASS_1()
#define ChkL1MsgFltr_AST_L1_Trace_Task_Context_Group1_TEST_PEER_2G_STATE()	ChkL1ClsFltr_AST_L1_Trace_Task_Context_Group1_TEST_CLASS_1()
#define ChkL1MsgFltr_AST_L1_Trace_Task_Context_Group1_TEST_VIRTUAL_MODE()	ChkL1ClsFltr_AST_L1_Trace_Task_Context_Group1_TEST_CLASS_1()
#define ChkL1MsgFltr_AST_L1_Trace_Task_Context_Group1_TEST_CHANNEL_PROTECT_STATE()	ChkL1ClsFltr_AST_L1_Trace_Task_Context_Group1_TEST_CLASS_1()
#define ChkL1MsgFltr_AST_L1_Trace_Task_Context_Group1_PEER_2G_OPEN()	ChkL1ClsFltr_AST_L1_Trace_Task_Context_Group1_TEST_CLASS_1()
#define ChkL1MsgFltr_AST_L1_Trace_Task_Context_Group1_L1R_Peer2GOpenConfirm()	ChkL1ClsFltr_AST_L1_Trace_Task_Context_Group1_TEST_CLASS_1()
#define ChkL1MsgFltr_AST_L1_Trace_Task_Context_Group1_L1R_3GProtectChannel()	ChkL1ClsFltr_AST_L1_Trace_Task_Context_Group1_TEST_CLASS_1()
#define ChkL1MsgFltr_AST_L1_Trace_Task_Context_Group1_L1R_3GCancelProtection()	ChkL1ClsFltr_AST_L1_Trace_Task_Context_Group1_TEST_CLASS_1()
#define ChkL1MsgFltr_AST_L1_Trace_Task_Context_Group1_L1R_3GEnterVirtualMode()	ChkL1ClsFltr_AST_L1_Trace_Task_Context_Group1_TEST_CLASS_1()
#define ChkL1MsgFltr_AST_L1_Trace_Task_Context_Group1_B39_TX_STATE()	ChkL1ClsFltr_AST_L1_Trace_Task_Context_Group1_TEST_CLASS_1()
#define ChkL1MsgFltr_AST_L1_Trace_Task_Context_Group1_RX_POWER()	ChkL1ClsFltr_AST_L1_Trace_Task_Context_Group1_TEST_CLASS_1()
#define ChkL1MsgFltr_AST_L1_Trace_Task_Context_Group1_DVFS_SCENARIO_SWITCH()	ChkL1ClsFltr_AST_L1_Trace_Task_Context_Group1_TEST_CLASS_1()
#define ChkL1MsgFltr_AST_L1_Trace_Task_Context_Group1_TL1_BOOT_MODE_SWITCH()	ChkL1ClsFltr_AST_L1_Trace_Task_Context_Group1_TEST_CLASS_1()
#define ChkL1MsgFltr_AST_L1_Trace_Task_Context_Group1_TEST_TRACE1()	ChkL1ClsFltr_AST_L1_Trace_Task_Context_Group1_TEST_CLASS_2()
#define ChkL1MsgFltr_AST_L1_Trace_Task_Context_Group1_TEST_TRACE2()	ChkL1ClsFltr_AST_L1_Trace_Task_Context_Group1_TEST_CLASS_2()
#define ChkL1MsgFltr_AST_L1_Trace_Task_Context_Group1_TEST_TRACE3()	ChkL1ClsFltr_AST_L1_Trace_Task_Context_Group1_TEST_CLASS_2()
#define ChkL1MsgFltr_AST_L1_Trace_Task_Context_Group1_TEST_TRACE4()	ChkL1ClsFltr_AST_L1_Trace_Task_Context_Group1_TEST_CLASS_2()
#define ChkL1MsgFltr_AST_L1_Trace_Task_Context_Group1_TEST_TRACE5()	ChkL1ClsFltr_AST_L1_Trace_Task_Context_Group1_TEST_CLASS_1()
#define ChkL1MsgFltr_AST_L1_Trace_Task_Context_Group1_TEST_MSG_2()	ChkL1ClsFltr_AST_L1_Trace_Task_Context_Group1_TEST_CLASS_2()
#define ChkL1MsgFltr_AST_L1_Trace_Task_Context_Group1_TEST_MSG_3()	ChkL1ClsFltr_AST_L1_Trace_Task_Context_Group1_TEST_CLASS_1()


#endif
