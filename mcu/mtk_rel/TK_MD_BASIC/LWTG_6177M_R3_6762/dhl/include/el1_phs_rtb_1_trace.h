#ifndef L1TRC_EL1_PHS_RTB_DEF_H
#define L1TRC_EL1_PHS_RTB_DEF_H

/******************************/
/* String category definition */
/******************************/
#define PHS_Evt_String(v1)  (unsigned char)(v1+0)
#define PHS_Etimer_String(v1)  (unsigned char)(v1+26)
#define PHS_Fail_Reason_String(v1)  (unsigned char)(v1+61)
#define PHS_RTB_Assert_Reason_String(v1)  (unsigned char)(v1+77)


/****************************/
/* Message macro definition */
/****************************/
#include "L1Trc.h"
#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define PHS_RTB_LOG_FRAME_SYNC(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_PHS_RTB_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0006,0x0006);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_PHS_RTB_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define PHS_RTB_LOG_FRAME_SYNC(v1)
#endif

#if defined(L1_CATCHER)
	#define PHS_RTB_LOG_TIMER_REGIST(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_PHS_RTB_Trace_Filter, 1, 0x01);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0106,0x0106);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_PHS_RTB_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define PHS_RTB_LOG_TIMER_REGIST(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER)
	#define PHS_RTB_LOG_TIMER_CLEAR(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_PHS_RTB_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0206,0x0206);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_PHS_RTB_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define PHS_RTB_LOG_TIMER_CLEAR(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define PHS_RTB_LOG_TIMER_RESRV(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_PHS_RTB_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0306,0x0306);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_PHS_RTB_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define PHS_RTB_LOG_TIMER_RESRV(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define PHS_RTB_LOG_TIMER_PRIO(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_PHS_RTB_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0406,0x0406);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_PHS_RTB_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define PHS_RTB_LOG_TIMER_PRIO(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define PHS_RTB_LOG_RESERV_LEN(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_PHS_RTB_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0506,0x0506);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_PHS_RTB_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define PHS_RTB_LOG_RESERV_LEN(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define PHS_RTB_LOG_RESERV_END_UPDATE(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_PHS_RTB_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0606,0x0606);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_PHS_RTB_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define PHS_RTB_LOG_RESERV_END_UPDATE(v1)
#endif

#if defined(L1_CATCHER)
	#define PHS_RTB_LOG_TIME_CLEAR_ALL() do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_PHS_RTB_Trace_Filter, 1, 0x01);\
			TRC_START_FILL_L1();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L1(0x0706,0x0706);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_PHS_RTB_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define PHS_RTB_LOG_TIME_CLEAR_ALL()
#endif

#if defined(L1_CATCHER)
	#define PHS_RTB_LOG_REG_TIMER_BITMAP(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_PHS_RTB_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0806,0x0806);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_PHS_RTB_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define PHS_RTB_LOG_REG_TIMER_BITMAP(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define PHS_RTB_LOG_PROT_TIMER_BITMAP(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_PHS_RTB_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0906,0x0906);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_PHS_RTB_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define PHS_RTB_LOG_PROT_TIMER_BITMAP(v1)
#endif

#if defined(L1_CATCHER)
	#define PHS_RTB_LOG_RXTX_STRV_STATE(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_PHS_RTB_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0A06,0x0A06);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_PHS_RTB_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define PHS_RTB_LOG_RXTX_STRV_STATE(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define PHS_RTB_LOG_HIGH_PRIO_MAC_DRX_ON(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_PHS_RTB_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0B06,0x0B06);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_PHS_RTB_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define PHS_RTB_LOG_HIGH_PRIO_MAC_DRX_ON(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define PHS_RTB_LOG_NEXT_MAC_DRX_ON(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_PHS_RTB_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0C06,0x0C06);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_PHS_RTB_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define PHS_RTB_LOG_NEXT_MAC_DRX_ON(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define PHS_RTB_LOG_HIGH_PRIO_SCH(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_PHS_RTB_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0D06,0x0D06);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_PHS_RTB_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define PHS_RTB_LOG_HIGH_PRIO_SCH(v1)
#endif

#if defined(L1_CATCHER)
	#define PHS_RTB_LOG_SCH_COUNT(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_PHS_RTB_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0E06,0x0E06);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_PHS_RTB_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define PHS_RTB_LOG_SCH_COUNT(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define PHS_RTB_LOG_RESRV_RESULT(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_PHS_RTB_Trace_Filter, 1, 0x01);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0F06,0x0F06);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_PHS_RTB_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define PHS_RTB_LOG_RESRV_RESULT(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER)
	#define PHS_RTB_LOG_ASSERT_REASON1(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_PHS_RTB_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1006,0x1006);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_PHS_RTB_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define PHS_RTB_LOG_ASSERT_REASON1(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define PHS_RTB_LOG_ASSERT_REASON2(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_PHS_RTB_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1106,0x1106);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_PHS_RTB_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define PHS_RTB_LOG_ASSERT_REASON2(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define PHS_RTB_LOG_ASSERT_REASON3(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_PHS_RTB_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1206,0x1206);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_PHS_RTB_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define PHS_RTB_LOG_ASSERT_REASON3(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define PHS_RTB_LOG_ASSERT_REASON4(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_PHS_RTB_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1306,0x1306);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_PHS_RTB_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define PHS_RTB_LOG_ASSERT_REASON4(v1, v2, v3)
#endif



/*******************************/
/* declaration of filter array */
/*******************************/
EXTERN_TMD_FILTER(unsigned char, EL1_PHS_RTB_Trace_Filter, 5);
/*************************/
/* Function declarations */
/*************************/
#ifdef L1_CATCHER

void Set_EL1_PHS_RTB_Filter(unsigned char *setting);

#endif

/************************************/
/* Filter checking API declarations */
/************************************/

#define ChkL1ModFltr_EL1_PHS_RTB()	(FILTER_CHECK(EL1_PHS_RTB_Trace_Filter, 0, 1))
#define ChkL1ClsFltr_EL1_PHS_RTB_el1_trace_1_H()	(ChkL1ModFltr_EL1_PHS_RTB()&&(FILTER_CHECK(EL1_PHS_RTB_Trace_Filter, 1, 0x01)))
#define ChkL1ClsFltr_EL1_PHS_RTB_el1_trace_2_H()	(ChkL1ModFltr_EL1_PHS_RTB()&&(FILTER_CHECK(EL1_PHS_RTB_Trace_Filter, 1, 0x02)))
#define ChkL1ClsFltr_EL1_PHS_RTB_el1_trace_3_M()	(ChkL1ModFltr_EL1_PHS_RTB()&&(FILTER_CHECK(EL1_PHS_RTB_Trace_Filter, 1, 0x04)))
#define ChkL1ClsFltr_EL1_PHS_RTB_el1_trace_4_L()	(ChkL1ModFltr_EL1_PHS_RTB()&&(FILTER_CHECK(EL1_PHS_RTB_Trace_Filter, 1, 0x08)))
#define ChkL1MsgFltr_PHS_RTB_LOG_FRAME_SYNC()	ChkL1ClsFltr_EL1_PHS_RTB_el1_trace_3_M()
#define ChkL1MsgFltr_PHS_RTB_LOG_TIMER_REGIST()	ChkL1ClsFltr_EL1_PHS_RTB_el1_trace_1_H()
#define ChkL1MsgFltr_PHS_RTB_LOG_TIMER_CLEAR()	ChkL1ClsFltr_EL1_PHS_RTB_el1_trace_1_H()
#define ChkL1MsgFltr_PHS_RTB_LOG_TIMER_RESRV()	ChkL1ClsFltr_EL1_PHS_RTB_el1_trace_1_H()
#define ChkL1MsgFltr_PHS_RTB_LOG_TIMER_PRIO()	ChkL1ClsFltr_EL1_PHS_RTB_el1_trace_3_M()
#define ChkL1MsgFltr_PHS_RTB_LOG_RESERV_LEN()	ChkL1ClsFltr_EL1_PHS_RTB_el1_trace_1_H()
#define ChkL1MsgFltr_PHS_RTB_LOG_RESERV_END_UPDATE()	ChkL1ClsFltr_EL1_PHS_RTB_el1_trace_1_H()
#define ChkL1MsgFltr_PHS_RTB_LOG_TIME_CLEAR_ALL()	ChkL1ClsFltr_EL1_PHS_RTB_el1_trace_1_H()
#define ChkL1MsgFltr_PHS_RTB_LOG_REG_TIMER_BITMAP()	ChkL1ClsFltr_EL1_PHS_RTB_el1_trace_1_H()
#define ChkL1MsgFltr_PHS_RTB_LOG_PROT_TIMER_BITMAP()	ChkL1ClsFltr_EL1_PHS_RTB_el1_trace_1_H()
#define ChkL1MsgFltr_PHS_RTB_LOG_RXTX_STRV_STATE()	ChkL1ClsFltr_EL1_PHS_RTB_el1_trace_1_H()
#define ChkL1MsgFltr_PHS_RTB_LOG_HIGH_PRIO_MAC_DRX_ON()	ChkL1ClsFltr_EL1_PHS_RTB_el1_trace_1_H()
#define ChkL1MsgFltr_PHS_RTB_LOG_NEXT_MAC_DRX_ON()	ChkL1ClsFltr_EL1_PHS_RTB_el1_trace_1_H()
#define ChkL1MsgFltr_PHS_RTB_LOG_HIGH_PRIO_SCH()	ChkL1ClsFltr_EL1_PHS_RTB_el1_trace_1_H()
#define ChkL1MsgFltr_PHS_RTB_LOG_SCH_COUNT()	ChkL1ClsFltr_EL1_PHS_RTB_el1_trace_1_H()
#define ChkL1MsgFltr_PHS_RTB_LOG_RESRV_RESULT()	ChkL1ClsFltr_EL1_PHS_RTB_el1_trace_1_H()
#define ChkL1MsgFltr_PHS_RTB_LOG_ASSERT_REASON1()	ChkL1ClsFltr_EL1_PHS_RTB_el1_trace_1_H()
#define ChkL1MsgFltr_PHS_RTB_LOG_ASSERT_REASON2()	ChkL1ClsFltr_EL1_PHS_RTB_el1_trace_1_H()
#define ChkL1MsgFltr_PHS_RTB_LOG_ASSERT_REASON3()	ChkL1ClsFltr_EL1_PHS_RTB_el1_trace_1_H()
#define ChkL1MsgFltr_PHS_RTB_LOG_ASSERT_REASON4()	ChkL1ClsFltr_EL1_PHS_RTB_el1_trace_1_H()


#endif
