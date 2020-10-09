#ifndef L1TRC_AST_L1_Trace_ISR_Context_Group6_DEF_H
#define L1TRC_AST_L1_Trace_ISR_Context_Group6_DEF_H

/******************************/
/* String category definition */
/******************************/
#define Str_Bool(v1)  (unsigned char)(v1+0)


/****************************/
/* Message macro definition */
/****************************/
#include "L1Trc.h"
#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define AST_L1_Trace_ISR_Context_Group2_LPM_DIV_UPDATE_RSP(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(AST_L1_Trace_ISR_Context_Group6_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0084,0x0084);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(AST_L1_Trace_ISR_Context_Group6_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define AST_L1_Trace_ISR_Context_Group2_LPM_DIV_UPDATE_RSP(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define AST_L1_Trace_ISR_Context_Group2_RESPONSE_EAGCH_EHICH() do {\
		{\
			TRC_START_FILTER_CHECK_L1(AST_L1_Trace_ISR_Context_Group6_Trace_Filter, 1, 0x01);\
			TRC_START_FILL_L1();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L1(0x0184,0x0184);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(AST_L1_Trace_ISR_Context_Group6_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define AST_L1_Trace_ISR_Context_Group2_RESPONSE_EAGCH_EHICH()
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define AST_L1_Trace_ISR_Context_Group2_RESPONSE_OTCAL() do {\
		{\
			TRC_START_FILTER_CHECK_L1(AST_L1_Trace_ISR_Context_Group6_Trace_Filter, 1, 0x01);\
			TRC_START_FILL_L1();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L1(0x0284,0x0284);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(AST_L1_Trace_ISR_Context_Group6_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define AST_L1_Trace_ISR_Context_Group2_RESPONSE_OTCAL()
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define AST_L1_Trace_ISR_Context_Group2_RESPONSE_FS() do {\
		{\
			TRC_START_FILTER_CHECK_L1(AST_L1_Trace_ISR_Context_Group6_Trace_Filter, 1, 0x01);\
			TRC_START_FILL_L1();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L1(0x0384,0x0384);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(AST_L1_Trace_ISR_Context_Group6_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define AST_L1_Trace_ISR_Context_Group2_RESPONSE_FS()
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define AST_L1_Trace_ISR_Context_Group2_RESPONSE_CS() do {\
		{\
			TRC_START_FILTER_CHECK_L1(AST_L1_Trace_ISR_Context_Group6_Trace_Filter, 1, 0x01);\
			TRC_START_FILL_L1();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L1(0x0484,0x0484);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(AST_L1_Trace_ISR_Context_Group6_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define AST_L1_Trace_ISR_Context_Group2_RESPONSE_CS()
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define AST_L1_Trace_ISR_Context_Group2_RESPONSE_RX() do {\
		{\
			TRC_START_FILTER_CHECK_L1(AST_L1_Trace_ISR_Context_Group6_Trace_Filter, 1, 0x01);\
			TRC_START_FILL_L1();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L1(0x0584,0x0584);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(AST_L1_Trace_ISR_Context_Group6_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define AST_L1_Trace_ISR_Context_Group2_RESPONSE_RX()
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define AST_L1_Trace_ISR_Context_Group2_RESPONSE_RA() do {\
		{\
			TRC_START_FILTER_CHECK_L1(AST_L1_Trace_ISR_Context_Group6_Trace_Filter, 1, 0x01);\
			TRC_START_FILL_L1();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L1(0x0684,0x0684);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(AST_L1_Trace_ISR_Context_Group6_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define AST_L1_Trace_ISR_Context_Group2_RESPONSE_RA()
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define AST_L1_Trace_ISR_Context_Group2_RESPONSE_MEAS_RSCP() do {\
		{\
			TRC_START_FILTER_CHECK_L1(AST_L1_Trace_ISR_Context_Group6_Trace_Filter, 1, 0x01);\
			TRC_START_FILL_L1();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L1(0x0784,0x0784);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(AST_L1_Trace_ISR_Context_Group6_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define AST_L1_Trace_ISR_Context_Group2_RESPONSE_MEAS_RSCP()
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define AST_L1_Trace_ISR_Context_Group2_RESPONSE_PICH() do {\
		{\
			TRC_START_FILTER_CHECK_L1(AST_L1_Trace_ISR_Context_Group6_Trace_Filter, 1, 0x01);\
			TRC_START_FILL_L1();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L1(0x0884,0x0884);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(AST_L1_Trace_ISR_Context_Group6_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define AST_L1_Trace_ISR_Context_Group2_RESPONSE_PICH()
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define AST_L1_Trace_ISR_Context_Group2_RESPONSE_SIR_PWR_TA() do {\
		{\
			TRC_START_FILTER_CHECK_L1(AST_L1_Trace_ISR_Context_Group6_Trace_Filter, 1, 0x01);\
			TRC_START_FILL_L1();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L1(0x0984,0x0984);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(AST_L1_Trace_ISR_Context_Group6_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define AST_L1_Trace_ISR_Context_Group2_RESPONSE_SIR_PWR_TA()
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define AST_L1_Trace_ISR_Context_Group2_RESPONSE_MEAS_ISCP() do {\
		{\
			TRC_START_FILTER_CHECK_L1(AST_L1_Trace_ISR_Context_Group6_Trace_Filter, 1, 0x01);\
			TRC_START_FILL_L1();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L1(0x0A84,0x0A84);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(AST_L1_Trace_ISR_Context_Group6_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define AST_L1_Trace_ISR_Context_Group2_RESPONSE_MEAS_ISCP()
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define AST_L1_Trace_ISR_Context_Group2_RESPONSE_RESET() do {\
		{\
			TRC_START_FILTER_CHECK_L1(AST_L1_Trace_ISR_Context_Group6_Trace_Filter, 1, 0x01);\
			TRC_START_FILL_L1();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L1(0x0B84,0x0B84);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(AST_L1_Trace_ISR_Context_Group6_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define AST_L1_Trace_ISR_Context_Group2_RESPONSE_RESET()
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define AST_L1_Trace_ISR_Context_Group2_RESPONSE_ERROR() do {\
		{\
			TRC_START_FILTER_CHECK_L1(AST_L1_Trace_ISR_Context_Group6_Trace_Filter, 1, 0x01);\
			TRC_START_FILL_L1();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L1(0x0C84,0x0C84);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(AST_L1_Trace_ISR_Context_Group6_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define AST_L1_Trace_ISR_Context_Group2_RESPONSE_ERROR()
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define AST_L1_Trace_ISR_Context_Group2_RESPONSE_RF_CAL() do {\
		{\
			TRC_START_FILTER_CHECK_L1(AST_L1_Trace_ISR_Context_Group6_Trace_Filter, 1, 0x01);\
			TRC_START_FILL_L1();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L1(0x0D84,0x0D84);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(AST_L1_Trace_ISR_Context_Group6_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define AST_L1_Trace_ISR_Context_Group2_RESPONSE_RF_CAL()
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define AST_L1_Trace_ISR_Context_Group2_RESPONSE_DRX() do {\
		{\
			TRC_START_FILTER_CHECK_L1(AST_L1_Trace_ISR_Context_Group6_Trace_Filter, 1, 0x01);\
			TRC_START_FILL_L1();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L1(0x0E84,0x0E84);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(AST_L1_Trace_ISR_Context_Group6_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define AST_L1_Trace_ISR_Context_Group2_RESPONSE_DRX()
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define AST_L1_Trace_ISR_Context_Group2_RESPONSE_SYNC() do {\
		{\
			TRC_START_FILTER_CHECK_L1(AST_L1_Trace_ISR_Context_Group6_Trace_Filter, 1, 0x01);\
			TRC_START_FILL_L1();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L1(0x0F84,0x0F84);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(AST_L1_Trace_ISR_Context_Group6_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define AST_L1_Trace_ISR_Context_Group2_RESPONSE_SYNC()
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define AST_L1_Trace_ISR_Context_Group2_RESPONSE_TIM_UPD() do {\
		{\
			TRC_START_FILTER_CHECK_L1(AST_L1_Trace_ISR_Context_Group6_Trace_Filter, 1, 0x01);\
			TRC_START_FILL_L1();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L1(0x1084,0x1084);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(AST_L1_Trace_ISR_Context_Group6_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define AST_L1_Trace_ISR_Context_Group2_RESPONSE_TIM_UPD()
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define AST_L1_Trace_ISR_Context_Group2_RESPONSE_TRACE_INFO() do {\
		{\
			TRC_START_FILTER_CHECK_L1(AST_L1_Trace_ISR_Context_Group6_Trace_Filter, 1, 0x01);\
			TRC_START_FILL_L1();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L1(0x1184,0x1184);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(AST_L1_Trace_ISR_Context_Group6_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define AST_L1_Trace_ISR_Context_Group2_RESPONSE_TRACE_INFO()
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define AST_L1_Trace_ISR_Context_Group2_RESPONSE_TRACE_DRX_INFO() do {\
		{\
			TRC_START_FILTER_CHECK_L1(AST_L1_Trace_ISR_Context_Group6_Trace_Filter, 1, 0x01);\
			TRC_START_FILL_L1();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L1(0x1284,0x1284);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(AST_L1_Trace_ISR_Context_Group6_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define AST_L1_Trace_ISR_Context_Group2_RESPONSE_TRACE_DRX_INFO()
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define AST_L1_Trace_ISR_Context_Group2_RESPONSE_TIMING_BASE_ADJ_RESP() do {\
		{\
			TRC_START_FILTER_CHECK_L1(AST_L1_Trace_ISR_Context_Group6_Trace_Filter, 1, 0x01);\
			TRC_START_FILL_L1();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L1(0x1384,0x1384);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(AST_L1_Trace_ISR_Context_Group6_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define AST_L1_Trace_ISR_Context_Group2_RESPONSE_TIMING_BASE_ADJ_RESP()
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define AST_L1_Trace_ISR_Context_Group2_RESPONSE_TIMING_SYNC_FAIL_RESP() do {\
		{\
			TRC_START_FILTER_CHECK_L1(AST_L1_Trace_ISR_Context_Group6_Trace_Filter, 1, 0x01);\
			TRC_START_FILL_L1();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L1(0x1484,0x1484);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(AST_L1_Trace_ISR_Context_Group6_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define AST_L1_Trace_ISR_Context_Group2_RESPONSE_TIMING_SYNC_FAIL_RESP()
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define AST_L1_Trace_ISR_Context_Group2_RESPONSE_TEST_CMD_RESULT() do {\
		{\
			TRC_START_FILTER_CHECK_L1(AST_L1_Trace_ISR_Context_Group6_Trace_Filter, 1, 0x01);\
			TRC_START_FILL_L1();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L1(0x1584,0x1584);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(AST_L1_Trace_ISR_Context_Group6_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define AST_L1_Trace_ISR_Context_Group2_RESPONSE_TEST_CMD_RESULT()
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define AST_L1_Trace_ISR_Context_Group2_RESPONSE_REPORT_UART_TRACE() do {\
		{\
			TRC_START_FILTER_CHECK_L1(AST_L1_Trace_ISR_Context_Group6_Trace_Filter, 1, 0x01);\
			TRC_START_FILL_L1();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L1(0x1684,0x1684);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(AST_L1_Trace_ISR_Context_Group6_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define AST_L1_Trace_ISR_Context_Group2_RESPONSE_REPORT_UART_TRACE()
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define AST_L1_Trace_ISR_Context_Group2_RFCAL_RESPONSE_CS() do {\
		{\
			TRC_START_FILTER_CHECK_L1(AST_L1_Trace_ISR_Context_Group6_Trace_Filter, 1, 0x01);\
			TRC_START_FILL_L1();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L1(0x1784,0x1784);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(AST_L1_Trace_ISR_Context_Group6_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define AST_L1_Trace_ISR_Context_Group2_RFCAL_RESPONSE_CS()
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define AST_L1_Trace_ISR_Context_Group2_RFCAL_RESPONSE_RX() do {\
		{\
			TRC_START_FILTER_CHECK_L1(AST_L1_Trace_ISR_Context_Group6_Trace_Filter, 1, 0x01);\
			TRC_START_FILL_L1();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L1(0x1884,0x1884);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(AST_L1_Trace_ISR_Context_Group6_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define AST_L1_Trace_ISR_Context_Group2_RFCAL_RESPONSE_RX()
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define AST_L1_Trace_ISR_Context_Group2_RFCAL_RESPONSE_MEAS_RSCP() do {\
		{\
			TRC_START_FILTER_CHECK_L1(AST_L1_Trace_ISR_Context_Group6_Trace_Filter, 1, 0x01);\
			TRC_START_FILL_L1();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L1(0x1984,0x1984);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(AST_L1_Trace_ISR_Context_Group6_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define AST_L1_Trace_ISR_Context_Group2_RFCAL_RESPONSE_MEAS_RSCP()
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define AST_L1_Trace_ISR_Context_Group2_RFCAL_RESPONSE_SIR_PWR_TA() do {\
		{\
			TRC_START_FILTER_CHECK_L1(AST_L1_Trace_ISR_Context_Group6_Trace_Filter, 1, 0x01);\
			TRC_START_FILL_L1();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L1(0x1A84,0x1A84);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(AST_L1_Trace_ISR_Context_Group6_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define AST_L1_Trace_ISR_Context_Group2_RFCAL_RESPONSE_SIR_PWR_TA()
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define AST_L1_Trace_ISR_Context_Group2_RFCAL_RESPONSE_RESET() do {\
		{\
			TRC_START_FILTER_CHECK_L1(AST_L1_Trace_ISR_Context_Group6_Trace_Filter, 1, 0x01);\
			TRC_START_FILL_L1();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L1(0x1B84,0x1B84);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(AST_L1_Trace_ISR_Context_Group6_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define AST_L1_Trace_ISR_Context_Group2_RFCAL_RESPONSE_RESET()
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define AST_L1_Trace_ISR_Context_Group2_RFCAL_RESPONSE_EAGCH_EHICH() do {\
		{\
			TRC_START_FILTER_CHECK_L1(AST_L1_Trace_ISR_Context_Group6_Trace_Filter, 1, 0x01);\
			TRC_START_FILL_L1();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L1(0x1C84,0x1C84);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(AST_L1_Trace_ISR_Context_Group6_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define AST_L1_Trace_ISR_Context_Group2_RFCAL_RESPONSE_EAGCH_EHICH()
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define AST_L1_Trace_ISR_Context_Group2_RFCAL_RESPONSE_TIM_UPD() do {\
		{\
			TRC_START_FILTER_CHECK_L1(AST_L1_Trace_ISR_Context_Group6_Trace_Filter, 1, 0x01);\
			TRC_START_FILL_L1();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L1(0x1D84,0x1D84);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(AST_L1_Trace_ISR_Context_Group6_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define AST_L1_Trace_ISR_Context_Group2_RFCAL_RESPONSE_TIM_UPD()
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define AST_L1_Trace_ISR_Context_Group2_RFCAL_RESPONSE_ABBREG() do {\
		{\
			TRC_START_FILTER_CHECK_L1(AST_L1_Trace_ISR_Context_Group6_Trace_Filter, 1, 0x01);\
			TRC_START_FILL_L1();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L1(0x1E84,0x1E84);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(AST_L1_Trace_ISR_Context_Group6_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define AST_L1_Trace_ISR_Context_Group2_RFCAL_RESPONSE_ABBREG()
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define AST_L1_Trace_ISR_Context_Group2_DPA_ONLY_RSP(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(AST_L1_Trace_ISR_Context_Group6_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1F84,0x1F84);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(AST_L1_Trace_ISR_Context_Group6_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define AST_L1_Trace_ISR_Context_Group2_DPA_ONLY_RSP(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define AST_L1_Trace_ISR_Context_Group2_UPA_ONLY_RSP(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(AST_L1_Trace_ISR_Context_Group6_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x2084,0x2084);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(AST_L1_Trace_ISR_Context_Group6_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define AST_L1_Trace_ISR_Context_Group2_UPA_ONLY_RSP(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define AST_L1_Trace_ISR_Context_Group2_TL1D_PHASE3_MDM(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(AST_L1_Trace_ISR_Context_Group6_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x2184,0x2184);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(AST_L1_Trace_ISR_Context_Group6_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define AST_L1_Trace_ISR_Context_Group2_TL1D_PHASE3_MDM(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define AST_L1_Trace_ISR_Context_Group2_BPI_Conflict_INFO(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(AST_L1_Trace_ISR_Context_Group6_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x2284,0x2284);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(AST_L1_Trace_ISR_Context_Group6_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define AST_L1_Trace_ISR_Context_Group2_BPI_Conflict_INFO(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define AST_L1_Trace_ISR_Context_Group2_BPI_Conflict_Count(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(AST_L1_Trace_ISR_Context_Group6_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x2384,0x2384);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(AST_L1_Trace_ISR_Context_Group6_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define AST_L1_Trace_ISR_Context_Group2_BPI_Conflict_Count(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define AST_L1_Trace_ISR_Context_Group1_TL1_HSUPA_STATE(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(AST_L1_Trace_ISR_Context_Group6_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x2484,0x2484);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(AST_L1_Trace_ISR_Context_Group6_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define AST_L1_Trace_ISR_Context_Group1_TL1_HSUPA_STATE(v1, v2, v3)
#endif



/*******************************/
/* declaration of filter array */
/*******************************/
EXTERN_TMD_FILTER(unsigned char, AST_L1_Trace_ISR_Context_Group6_Trace_Filter, 5);
/*************************/
/* Function declarations */
/*************************/
#ifdef L1_CATCHER

void Set_AST_L1_Trace_ISR_Context_Group6_Filter(unsigned char *setting);

#endif

/************************************/
/* Filter checking API declarations */
/************************************/

#define ChkL1ModFltr_AST_L1_Trace_ISR_Context_Group6()	(FILTER_CHECK(AST_L1_Trace_ISR_Context_Group6_Trace_Filter, 0, 1))
#define ChkL1ClsFltr_AST_L1_Trace_ISR_Context_Group6_TEST_CLASS_1()	(ChkL1ModFltr_AST_L1_Trace_ISR_Context_Group6()&&(FILTER_CHECK(AST_L1_Trace_ISR_Context_Group6_Trace_Filter, 1, 0x01)))
#define ChkL1ClsFltr_AST_L1_Trace_ISR_Context_Group6_TEST_CLASS_2()	(ChkL1ModFltr_AST_L1_Trace_ISR_Context_Group6()&&(FILTER_CHECK(AST_L1_Trace_ISR_Context_Group6_Trace_Filter, 1, 0x02)))
#define ChkL1ClsFltr_AST_L1_Trace_ISR_Context_Group6_TEST_CLASS_3()	(ChkL1ModFltr_AST_L1_Trace_ISR_Context_Group6()&&(FILTER_CHECK(AST_L1_Trace_ISR_Context_Group6_Trace_Filter, 1, 0x04)))
#define ChkL1MsgFltr_AST_L1_Trace_ISR_Context_Group2_LPM_DIV_UPDATE_RSP()	ChkL1ClsFltr_AST_L1_Trace_ISR_Context_Group6_TEST_CLASS_1()
#define ChkL1MsgFltr_AST_L1_Trace_ISR_Context_Group2_RESPONSE_EAGCH_EHICH()	ChkL1ClsFltr_AST_L1_Trace_ISR_Context_Group6_TEST_CLASS_1()
#define ChkL1MsgFltr_AST_L1_Trace_ISR_Context_Group2_RESPONSE_OTCAL()	ChkL1ClsFltr_AST_L1_Trace_ISR_Context_Group6_TEST_CLASS_1()
#define ChkL1MsgFltr_AST_L1_Trace_ISR_Context_Group2_RESPONSE_FS()	ChkL1ClsFltr_AST_L1_Trace_ISR_Context_Group6_TEST_CLASS_1()
#define ChkL1MsgFltr_AST_L1_Trace_ISR_Context_Group2_RESPONSE_CS()	ChkL1ClsFltr_AST_L1_Trace_ISR_Context_Group6_TEST_CLASS_1()
#define ChkL1MsgFltr_AST_L1_Trace_ISR_Context_Group2_RESPONSE_RX()	ChkL1ClsFltr_AST_L1_Trace_ISR_Context_Group6_TEST_CLASS_1()
#define ChkL1MsgFltr_AST_L1_Trace_ISR_Context_Group2_RESPONSE_RA()	ChkL1ClsFltr_AST_L1_Trace_ISR_Context_Group6_TEST_CLASS_1()
#define ChkL1MsgFltr_AST_L1_Trace_ISR_Context_Group2_RESPONSE_MEAS_RSCP()	ChkL1ClsFltr_AST_L1_Trace_ISR_Context_Group6_TEST_CLASS_1()
#define ChkL1MsgFltr_AST_L1_Trace_ISR_Context_Group2_RESPONSE_PICH()	ChkL1ClsFltr_AST_L1_Trace_ISR_Context_Group6_TEST_CLASS_1()
#define ChkL1MsgFltr_AST_L1_Trace_ISR_Context_Group2_RESPONSE_SIR_PWR_TA()	ChkL1ClsFltr_AST_L1_Trace_ISR_Context_Group6_TEST_CLASS_1()
#define ChkL1MsgFltr_AST_L1_Trace_ISR_Context_Group2_RESPONSE_MEAS_ISCP()	ChkL1ClsFltr_AST_L1_Trace_ISR_Context_Group6_TEST_CLASS_1()
#define ChkL1MsgFltr_AST_L1_Trace_ISR_Context_Group2_RESPONSE_RESET()	ChkL1ClsFltr_AST_L1_Trace_ISR_Context_Group6_TEST_CLASS_1()
#define ChkL1MsgFltr_AST_L1_Trace_ISR_Context_Group2_RESPONSE_ERROR()	ChkL1ClsFltr_AST_L1_Trace_ISR_Context_Group6_TEST_CLASS_1()
#define ChkL1MsgFltr_AST_L1_Trace_ISR_Context_Group2_RESPONSE_RF_CAL()	ChkL1ClsFltr_AST_L1_Trace_ISR_Context_Group6_TEST_CLASS_1()
#define ChkL1MsgFltr_AST_L1_Trace_ISR_Context_Group2_RESPONSE_DRX()	ChkL1ClsFltr_AST_L1_Trace_ISR_Context_Group6_TEST_CLASS_1()
#define ChkL1MsgFltr_AST_L1_Trace_ISR_Context_Group2_RESPONSE_SYNC()	ChkL1ClsFltr_AST_L1_Trace_ISR_Context_Group6_TEST_CLASS_1()
#define ChkL1MsgFltr_AST_L1_Trace_ISR_Context_Group2_RESPONSE_TIM_UPD()	ChkL1ClsFltr_AST_L1_Trace_ISR_Context_Group6_TEST_CLASS_1()
#define ChkL1MsgFltr_AST_L1_Trace_ISR_Context_Group2_RESPONSE_TRACE_INFO()	ChkL1ClsFltr_AST_L1_Trace_ISR_Context_Group6_TEST_CLASS_1()
#define ChkL1MsgFltr_AST_L1_Trace_ISR_Context_Group2_RESPONSE_TRACE_DRX_INFO()	ChkL1ClsFltr_AST_L1_Trace_ISR_Context_Group6_TEST_CLASS_1()
#define ChkL1MsgFltr_AST_L1_Trace_ISR_Context_Group2_RESPONSE_TIMING_BASE_ADJ_RESP()	ChkL1ClsFltr_AST_L1_Trace_ISR_Context_Group6_TEST_CLASS_1()
#define ChkL1MsgFltr_AST_L1_Trace_ISR_Context_Group2_RESPONSE_TIMING_SYNC_FAIL_RESP()	ChkL1ClsFltr_AST_L1_Trace_ISR_Context_Group6_TEST_CLASS_1()
#define ChkL1MsgFltr_AST_L1_Trace_ISR_Context_Group2_RESPONSE_TEST_CMD_RESULT()	ChkL1ClsFltr_AST_L1_Trace_ISR_Context_Group6_TEST_CLASS_1()
#define ChkL1MsgFltr_AST_L1_Trace_ISR_Context_Group2_RESPONSE_REPORT_UART_TRACE()	ChkL1ClsFltr_AST_L1_Trace_ISR_Context_Group6_TEST_CLASS_1()
#define ChkL1MsgFltr_AST_L1_Trace_ISR_Context_Group2_RFCAL_RESPONSE_CS()	ChkL1ClsFltr_AST_L1_Trace_ISR_Context_Group6_TEST_CLASS_1()
#define ChkL1MsgFltr_AST_L1_Trace_ISR_Context_Group2_RFCAL_RESPONSE_RX()	ChkL1ClsFltr_AST_L1_Trace_ISR_Context_Group6_TEST_CLASS_1()
#define ChkL1MsgFltr_AST_L1_Trace_ISR_Context_Group2_RFCAL_RESPONSE_MEAS_RSCP()	ChkL1ClsFltr_AST_L1_Trace_ISR_Context_Group6_TEST_CLASS_1()
#define ChkL1MsgFltr_AST_L1_Trace_ISR_Context_Group2_RFCAL_RESPONSE_SIR_PWR_TA()	ChkL1ClsFltr_AST_L1_Trace_ISR_Context_Group6_TEST_CLASS_1()
#define ChkL1MsgFltr_AST_L1_Trace_ISR_Context_Group2_RFCAL_RESPONSE_RESET()	ChkL1ClsFltr_AST_L1_Trace_ISR_Context_Group6_TEST_CLASS_1()
#define ChkL1MsgFltr_AST_L1_Trace_ISR_Context_Group2_RFCAL_RESPONSE_EAGCH_EHICH()	ChkL1ClsFltr_AST_L1_Trace_ISR_Context_Group6_TEST_CLASS_1()
#define ChkL1MsgFltr_AST_L1_Trace_ISR_Context_Group2_RFCAL_RESPONSE_TIM_UPD()	ChkL1ClsFltr_AST_L1_Trace_ISR_Context_Group6_TEST_CLASS_1()
#define ChkL1MsgFltr_AST_L1_Trace_ISR_Context_Group2_RFCAL_RESPONSE_ABBREG()	ChkL1ClsFltr_AST_L1_Trace_ISR_Context_Group6_TEST_CLASS_1()
#define ChkL1MsgFltr_AST_L1_Trace_ISR_Context_Group2_DPA_ONLY_RSP()	ChkL1ClsFltr_AST_L1_Trace_ISR_Context_Group6_TEST_CLASS_1()
#define ChkL1MsgFltr_AST_L1_Trace_ISR_Context_Group2_UPA_ONLY_RSP()	ChkL1ClsFltr_AST_L1_Trace_ISR_Context_Group6_TEST_CLASS_1()
#define ChkL1MsgFltr_AST_L1_Trace_ISR_Context_Group2_TL1D_PHASE3_MDM()	ChkL1ClsFltr_AST_L1_Trace_ISR_Context_Group6_TEST_CLASS_1()
#define ChkL1MsgFltr_AST_L1_Trace_ISR_Context_Group2_BPI_Conflict_INFO()	ChkL1ClsFltr_AST_L1_Trace_ISR_Context_Group6_TEST_CLASS_1()
#define ChkL1MsgFltr_AST_L1_Trace_ISR_Context_Group2_BPI_Conflict_Count()	ChkL1ClsFltr_AST_L1_Trace_ISR_Context_Group6_TEST_CLASS_1()
#define ChkL1MsgFltr_AST_L1_Trace_ISR_Context_Group1_TL1_HSUPA_STATE()	ChkL1ClsFltr_AST_L1_Trace_ISR_Context_Group6_TEST_CLASS_1()


#endif
