#ifndef L1TRC_UL1D_THIRD_DEF_H
#define L1TRC_UL1D_THIRD_DEF_H

/******************************/
/* String category definition */
/******************************/
#define UL1D_TRC_STR_MBD_CS12(v1)  (unsigned char)(v1+0)
#define UL1D_TRC_STR_FREE_RUN_SCHDL(v1)  (unsigned char)(v1+2)
#define UL1D_TRC_STR_MEAS_SCHDL_STATE(v1)  (unsigned char)(v1+4)
#define UL1D_TRC_STR_CELL_STATE(v1)  (unsigned char)(v1+10)
#define UL1D_TRC_STR_ADV_RTD(v1)  (unsigned char)(v1+15)
#define UL1D_TRC_STR_RX_TX_TIME_DIFF_SOURCE(v1)  (unsigned char)(v1+17)
#define UL1D_TRC_STR_WGG_ACTIVE_3G_CHANNEL(v1)  (unsigned char)(v1+19)
#define U1D_TRC_STR_MM_GEMINI_ACTIVE_3G_CHANNEL(v1)  (unsigned char)(v1+26)
#define UL1D_TRC_STR_MEAS_GEMINI_RESOURCE_REQ_STATE(v1)  (unsigned char)(v1+32)
#define UL1D_TRC_STR_DD_MODE(v1)  (unsigned char)(v1+36)
#define UL1D_TRC_STR_DD_SRC_MODE(v1)  (unsigned char)(v1+43)
#define UL1D_TRC_STR_WGG_MEAS_EVENT(v1)  (unsigned char)(v1+47)


/****************************/
/* Message macro definition */
/****************************/
#include "L1Trc.h"
#if defined(L1_CATCHER)
	#define UL1D_TRC_MEAS_SCHDL_STATE_REQ(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_THIRD_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x009C,0x009C);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_THIRD_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define UL1D_TRC_MEAS_SCHDL_STATE_REQ(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_MEAS_SCHDL_SCHEDULING(v1, v2, v3, v4, v5, v6) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_THIRD_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v5,v5);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v6,v6);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v5,v5);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v6,v6);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x019C,0x019C);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_THIRD_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define UL1D_TRC_MEAS_SCHDL_SCHEDULING(v1, v2, v3, v4, v5, v6)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_MEAS_MPS_START(v1, v2, v3, v4, v5, v6) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_THIRD_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v5,v5);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v6,v6);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v5,v5);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v6,v6);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x029C,0x029C);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_THIRD_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define UL1D_TRC_MEAS_MPS_START(v1, v2, v3, v4, v5, v6)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_MEAS_MEAS_START(v1, v2, v3, v4, v5, v6) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_THIRD_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v5,v5);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v6,v6);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v5,v5);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v6,v6);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x039C,0x039C);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_THIRD_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define UL1D_TRC_MEAS_MEAS_START(v1, v2, v3, v4, v5, v6)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_MEAS_MEAS_CELL_INFO(v1, v2, v3, v4, v5, v6) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_THIRD_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v5,v5);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v6,v6);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v5,v5);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v6,v6);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x049C,0x049C);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_THIRD_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define UL1D_TRC_MEAS_MEAS_CELL_INFO(v1, v2, v3, v4, v5, v6)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_MEAS_RPT_CELL_INFO(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_THIRD_Trace_Filter, 1, 0x02);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x059C,0x059C);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_THIRD_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define UL1D_TRC_MEAS_RPT_CELL_INFO(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_MEAS_RPT_CELL_STATE_VAR_INFO(v1, v2, v3, v4, v5, v6) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_THIRD_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v5,v5);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v6,v6);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v5,v5);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v6,v6);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x069C,0x069C);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_THIRD_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define UL1D_TRC_MEAS_RPT_CELL_STATE_VAR_INFO(v1, v2, v3, v4, v5, v6)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_MEAS_MEAS_FINISH(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_THIRD_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x079C,0x079C);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_THIRD_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define UL1D_TRC_MEAS_MEAS_FINISH(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_MEAS_CS3_START(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_THIRD_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x089C,0x089C);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_THIRD_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define UL1D_TRC_MEAS_CS3_START(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_MEAS_CM_AVAIL_TIME(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_THIRD_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x099C,0x099C);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_THIRD_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define UL1D_TRC_MEAS_CM_AVAIL_TIME(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_MEAS_CAL_RSCP(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_THIRD_Trace_Filter, 1, 0x02);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0A9C,0x0A9C);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_THIRD_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define UL1D_TRC_MEAS_CAL_RSCP(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_MEAS_REQUEST_BITS(v1, v2, v3, v4, v5, v6, v7, v8) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_THIRD_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v5,v5);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v6,v6);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v7,v7);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v8,v8);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v5,v5);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v6,v6);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v7,v7);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v8,v8);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0B9C,0x0B9C);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v7,v7);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v8,v8);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_THIRD_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define UL1D_TRC_MEAS_REQUEST_BITS(v1, v2, v3, v4, v5, v6, v7, v8)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_MEAS_CS_IRQ_INT(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_THIRD_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0C9C,0x0C9C);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_THIRD_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define UL1D_TRC_MEAS_CS_IRQ_INT(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_MEAS_CS_IRQ_N(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_THIRD_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0D9C,0x0D9C);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_THIRD_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define UL1D_TRC_MEAS_CS_IRQ_N(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_MEAS_CS_DISABLE_IRQ(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_THIRD_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0E9C,0x0E9C);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_THIRD_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define UL1D_TRC_MEAS_CS_DISABLE_IRQ(v1)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_MEAS_CS_ENABLE_IRQ(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_THIRD_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0F9C,0x0F9C);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_THIRD_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define UL1D_TRC_MEAS_CS_ENABLE_IRQ(v1)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_MEAS_CS_IRQ_MASK_DBG(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_THIRD_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x109C,0x109C);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_THIRD_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define UL1D_TRC_MEAS_CS_IRQ_MASK_DBG(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_MEAS_MPS_CALLBACK(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_THIRD_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x119C,0x119C);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_THIRD_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define UL1D_TRC_MEAS_MPS_CALLBACK(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_MEAS_RF_CONTROL(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_THIRD_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x129C,0x129C);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_THIRD_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define UL1D_TRC_MEAS_RF_CONTROL(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_MEAS_RF_CENTRAL_CONTROL_REG(v1, v2, v3, v4, v5, v6) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_THIRD_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v5,v5);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v6,v6);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v5,v5);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v6,v6);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x139C,0x139C);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_THIRD_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define UL1D_TRC_MEAS_RF_CENTRAL_CONTROL_REG(v1, v2, v3, v4, v5, v6)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_MEAS_DRX_MASK(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_THIRD_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x149C,0x149C);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_THIRD_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define UL1D_TRC_MEAS_DRX_MASK(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_MEAS_SCHDL_MASK(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_THIRD_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x159C,0x159C);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_THIRD_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define UL1D_TRC_MEAS_SCHDL_MASK(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_MEAS_SET_CALLBACK(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_THIRD_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x169C,0x169C);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_THIRD_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define UL1D_TRC_MEAS_SET_CALLBACK(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_MEAS_MEAS_TID_START_LOCATION(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_THIRD_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x179C,0x179C);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_THIRD_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define UL1D_TRC_MEAS_MEAS_TID_START_LOCATION(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_MEAS_RSSI_ERROR(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_THIRD_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x189C,0x189C);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_THIRD_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define UL1D_TRC_MEAS_RSSI_ERROR(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_CAL_AVAIL_TIME(v1, v2, v3, v4, v5, v6, v7, v8) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_THIRD_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v5,v5);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v6,v6);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v7,v7);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v8,v8);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v5,v5);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v6,v6);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v7,v7);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v8,v8);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x199C,0x199C);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v7,v7);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v8,v8);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_THIRD_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define UL1D_TRC_CAL_AVAIL_TIME(v1, v2, v3, v4, v5, v6, v7, v8)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_MEAS_GAP_MASK(v1, v2, v3, v4, v5, v6) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_THIRD_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v5,v5);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v6,v6);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v5,v5);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v6,v6);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1A9C,0x1A9C);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_THIRD_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define UL1D_TRC_MEAS_GAP_MASK(v1, v2, v3, v4, v5, v6)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_CELL_STATE_CHANGE(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_THIRD_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1B9C,0x1B9C);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_THIRD_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define UL1D_TRC_CELL_STATE_CHANGE(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_MEAS_RXD_STATUS(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_THIRD_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1C9C,0x1C9C);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_THIRD_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define UL1D_TRC_MEAS_RXD_STATUS(v1)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_MEAS_RXD_DETECT_DBG(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_THIRD_Trace_Filter, 1, 0x04);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1D9C,0x1D9C);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_THIRD_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define UL1D_TRC_MEAS_RXD_DETECT_DBG(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_MEAS_RXD_DETECTION_CHECK(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_THIRD_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1E9C,0x1E9C);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_THIRD_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define UL1D_TRC_MEAS_RXD_DETECTION_CHECK(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_MEAS_RXD_DETECTION_FINAL_RESULT(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_THIRD_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1F9C,0x1F9C);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_THIRD_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define UL1D_TRC_MEAS_RXD_DETECTION_FINAL_RESULT(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_DD_STOP_PARAM(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_THIRD_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x209C,0x209C);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_THIRD_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define UL1D_TRC_DD_STOP_PARAM(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_DD_PARAM(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_THIRD_Trace_Filter, 1, 0x04);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x219C,0x219C);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_THIRD_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define UL1D_TRC_DD_PARAM(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_DD_DURATION(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_THIRD_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x229C,0x229C);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_THIRD_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define UL1D_TRC_DD_DURATION(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_IDLE_RFM_FRAMES(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_THIRD_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x239C,0x239C);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_THIRD_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define UL1D_TRC_IDLE_RFM_FRAMES(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_IDLE_FREE_RUN_SCHDL(v1, v2, v3, v4, v5, v6) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_THIRD_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v5,v5);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v6,v6);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v5,v5);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v6,v6);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x249C,0x249C);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_THIRD_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define UL1D_TRC_IDLE_FREE_RUN_SCHDL(v1, v2, v3, v4, v5, v6)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_IDLE_FREE_RUNNING(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_THIRD_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x259C,0x259C);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_THIRD_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define UL1D_TRC_IDLE_FREE_RUNNING(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_DD_RSSI(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_THIRD_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x269C,0x269C);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_THIRD_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define UL1D_TRC_DD_RSSI(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_FA_CELL_CORRECT(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_THIRD_Trace_Filter, 1, 0x04);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x279C,0x279C);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_THIRD_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define UL1D_TRC_FA_CELL_CORRECT(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_MS3_STATUS(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_THIRD_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x289C,0x289C);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_THIRD_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define UL1D_TRC_MS3_STATUS(v1)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_PROHIBIT_INTER_MEAS(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_THIRD_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x299C,0x299C);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_THIRD_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define UL1D_TRC_PROHIBIT_INTER_MEAS(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_MEAS_START(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_THIRD_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x2A9C,0x2A9C);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_THIRD_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define UL1D_TRC_MEAS_START(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_CS_HW_IN_USE(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_THIRD_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x2B9C,0x2B9C);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_THIRD_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define UL1D_TRC_CS_HW_IN_USE(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_MEAS_CHECK_CS_TIME(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_THIRD_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x2C9C,0x2C9C);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_THIRD_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define UL1D_TRC_MEAS_CHECK_CS_TIME(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_MEAS_IDLE_FLAG(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_THIRD_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x2D9C,0x2D9C);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_THIRD_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define UL1D_TRC_MEAS_IDLE_FLAG(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_CELL_STATE_DBG1(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_THIRD_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x2E9C,0x2E9C);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_THIRD_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define UL1D_TRC_CELL_STATE_DBG1(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_MEAS_REPORT_FROM_RL6_RFM(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_THIRD_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x2F9C,0x2F9C);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_THIRD_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define UL1D_TRC_MEAS_REPORT_FROM_RL6_RFM(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_MEAS_MEAS_RESULT1(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_THIRD_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x309C,0x309C);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_THIRD_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define UL1D_TRC_MEAS_MEAS_RESULT1(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_MEAS_MEAS_RESULT2(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_THIRD_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x319C,0x319C);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_THIRD_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define UL1D_TRC_MEAS_MEAS_RESULT2(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_TX_TIMING_OFFSET(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_THIRD_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x329C,0x329C);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_THIRD_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define UL1D_TRC_TX_TIMING_OFFSET(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UL1D_TRC_TIMING_TRACKING(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_THIRD_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x339C,0x339C);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_THIRD_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define UL1D_TRC_TIMING_TRACKING(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_MEAS_RESULT_COMP(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_THIRD_Trace_Filter, 1, 0x04);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x349C,0x349C);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_THIRD_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define UL1D_TRC_MEAS_RESULT_COMP(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_DD_RSSIDBRG(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_THIRD_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x359C,0x359C);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_THIRD_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define UL1D_TRC_DD_RSSIDBRG(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UL1D_TRC_MBD_PATH_PWR_DBG(v1, v2, v3, v4, v5, v6, v7) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_THIRD_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v5,v5);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v6,v6);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v7,v7);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v5,v5);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v6,v6);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v7,v7);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x369C,0x369C);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v7,v7);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_THIRD_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define UL1D_TRC_MBD_PATH_PWR_DBG(v1, v2, v3, v4, v5, v6, v7)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UL1D_TRC_MBD_PATH_POS_DBG(v1, v2, v3, v4, v5, v6, v7) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_THIRD_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v5,v5);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v6,v6);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v7,v7);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v5,v5);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v6,v6);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v7,v7);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x379C,0x379C);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v7,v7);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_THIRD_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define UL1D_TRC_MBD_PATH_POS_DBG(v1, v2, v3, v4, v5, v6, v7)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_MEAS_SCHDL_DBG1(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_THIRD_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x389C,0x389C);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_THIRD_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define UL1D_TRC_MEAS_SCHDL_DBG1(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_MEAS_SCHDL_DBG2(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_THIRD_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x399C,0x399C);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_THIRD_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define UL1D_TRC_MEAS_SCHDL_DBG2(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_TMP_DBG_MEAS_SCHDL(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_THIRD_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x3A9C,0x3A9C);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_THIRD_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define UL1D_TRC_TMP_DBG_MEAS_SCHDL(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UL1D_TRC_WIN_TRK_TAIL_HEAD(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_THIRD_Trace_Filter, 1, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x3B9C,0x3B9C);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_THIRD_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define UL1D_TRC_WIN_TRK_TAIL_HEAD(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_WIN_TRK_GSR_ADDR(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_THIRD_Trace_Filter, 1, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x3C9C,0x3C9C);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_THIRD_Trace_Filter, 1, 0x10);\
		}\
	} while(0)
#else
	#define UL1D_TRC_WIN_TRK_GSR_ADDR(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_WIN_TRK_ADV_RTD(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_THIRD_Trace_Filter, 1, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x3D9C,0x3D9C);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_THIRD_Trace_Filter, 1, 0x10);\
		}\
	} while(0)
#else
	#define UL1D_TRC_WIN_TRK_ADV_RTD(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UL1D_TRC_UL_TFC_STATUS(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_THIRD_Trace_Filter, 1, 0x20);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x3E9C,0x3E9C);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_THIRD_Trace_Filter, 1, 0x20);\
		}\
	} while(0)
#else
	#define UL1D_TRC_UL_TFC_STATUS(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_UL_TFC_STATUS_RESTRICTED_SF(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_THIRD_Trace_Filter, 1, 0x40);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x3F9C,0x3F9C);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_THIRD_Trace_Filter, 1, 0x40);\
		}\
	} while(0)
#else
	#define UL1D_TRC_UL_TFC_STATUS_RESTRICTED_SF(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UL1D_TRC_UL_TFC_BETA(v1, v2, v3, v4, v5, v6, v7, v8, v9) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_THIRD_Trace_Filter, 1, 0x20);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x409C,0x409C);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v7,v7);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v8,v8);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v9,v9);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_THIRD_Trace_Filter, 1, 0x20);\
		}\
	} while(0)
#else
	#define UL1D_TRC_UL_TFC_BETA(v1, v2, v3, v4, v5, v6, v7, v8, v9)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UL1D_TRC_UL_TFC_FRAME(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_THIRD_Trace_Filter, 1, 0x20);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x419C,0x419C);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_THIRD_Trace_Filter, 1, 0x20);\
		}\
	} while(0)
#else
	#define UL1D_TRC_UL_TFC_FRAME(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_WGG_MEAS_EVENT(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_THIRD_Trace_Filter, 2, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x429C,0x429C);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_THIRD_Trace_Filter, 2, 0x01);\
		}\
	} while(0)
#else
	#define UL1D_TRC_WGG_MEAS_EVENT(v1)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_MEAS_GEMINI_RESOURCE_REQ_STATE(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_THIRD_Trace_Filter, 2, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x439C,0x439C);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_THIRD_Trace_Filter, 2, 0x01);\
		}\
	} while(0)
#else
	#define UL1D_TRC_MEAS_GEMINI_RESOURCE_REQ_STATE(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_WGG_MEAS_GAP_END(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_THIRD_Trace_Filter, 2, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x449C,0x449C);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_THIRD_Trace_Filter, 2, 0x01);\
		}\
	} while(0)
#else
	#define UL1D_TRC_WGG_MEAS_GAP_END(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_WGG_3G_CHANNEL_ACTIVE(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_THIRD_Trace_Filter, 2, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x459C,0x459C);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_THIRD_Trace_Filter, 2, 0x01);\
		}\
	} while(0)
#else
	#define UL1D_TRC_WGG_3G_CHANNEL_ACTIVE(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_WGG_3G_Channel_Done(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_THIRD_Trace_Filter, 2, 0x01);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x469C,0x469C);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_THIRD_Trace_Filter, 2, 0x01);\
		}\
	} while(0)
#else
	#define UL1D_TRC_WGG_3G_Channel_Done(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_WGG_3G_WAITING_FOR_RETURN(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_THIRD_Trace_Filter, 2, 0x01);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x479C,0x479C);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_THIRD_Trace_Filter, 2, 0x01);\
		}\
	} while(0)
#else
	#define UL1D_TRC_WGG_3G_WAITING_FOR_RETURN(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_SFN_CELL_INVALID_CM_DATABASE(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_THIRD_Trace_Filter, 2, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x489C,0x489C);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_THIRD_Trace_Filter, 2, 0x02);\
		}\
	} while(0)
#else
	#define UL1D_TRC_SFN_CELL_INVALID_CM_DATABASE(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define UL1D_TRC_SFN_UPDATE_CM_DATABASE() do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_THIRD_Trace_Filter, 2, 0x02);\
			TRC_START_FILL_L1();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L1(0x499C,0x499C);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_THIRD_Trace_Filter, 2, 0x02);\
		}\
	} while(0)
#else
	#define UL1D_TRC_SFN_UPDATE_CM_DATABASE()
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_RXD_MEAS_START(v1, v2, v3, v4, v5, v6, v7) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_THIRD_Trace_Filter, 2, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v5,v5);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v6,v6);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v7,v7);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v5,v5);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v6,v6);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v7,v7);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x4A9C,0x4A9C);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v7,v7);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_THIRD_Trace_Filter, 2, 0x04);\
		}\
	} while(0)
#else
	#define UL1D_TRC_RXD_MEAS_START(v1, v2, v3, v4, v5, v6, v7)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_RXD_MPS_START(v1, v2, v3, v4, v5, v6, v7) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_THIRD_Trace_Filter, 2, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v5,v5);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v6,v6);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v7,v7);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v5,v5);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v6,v6);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v7,v7);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x4B9C,0x4B9C);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v7,v7);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_THIRD_Trace_Filter, 2, 0x04);\
		}\
	} while(0)
#else
	#define UL1D_TRC_RXD_MPS_START(v1, v2, v3, v4, v5, v6, v7)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_DEBUG_LORX_CRC(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_THIRD_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x4C9C,0x4C9C);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_THIRD_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define UL1D_TRC_DEBUG_LORX_CRC(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_DEBUG_LORX_CRC1(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_THIRD_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x4D9C,0x4D9C);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_THIRD_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define UL1D_TRC_DEBUG_LORX_CRC1(v1)
#endif

#if defined(L1_CATCHER)
	#define UL1D_TRC_DEBUG_LORX_CRC2(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1D_THIRD_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x4E9C,0x4E9C);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1D_THIRD_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define UL1D_TRC_DEBUG_LORX_CRC2(v1)
#endif



/*******************************/
/* declaration of filter array */
/*******************************/
EXTERN_TMD_FILTER(unsigned char, UL1D_THIRD_Trace_Filter, 5);
/*************************/
/* Function declarations */
/*************************/
#ifdef L1_CATCHER

void Set_UL1D_THIRD_Filter(unsigned char *setting);

#endif

/************************************/
/* Filter checking API declarations */
/************************************/

#define ChkL1ModFltr_UL1D_THIRD()	(FILTER_CHECK(UL1D_THIRD_Trace_Filter, 0, 1))
#define ChkL1ClsFltr_UL1D_THIRD_MEAS_L()	(ChkL1ModFltr_UL1D_THIRD()&&(FILTER_CHECK(UL1D_THIRD_Trace_Filter, 1, 0x01)))
#define ChkL1ClsFltr_UL1D_THIRD_MEAS_M()	(ChkL1ModFltr_UL1D_THIRD()&&(FILTER_CHECK(UL1D_THIRD_Trace_Filter, 1, 0x02)))
#define ChkL1ClsFltr_UL1D_THIRD_MEAS_H()	(ChkL1ModFltr_UL1D_THIRD()&&(FILTER_CHECK(UL1D_THIRD_Trace_Filter, 1, 0x04)))
#define ChkL1ClsFltr_UL1D_THIRD_WIN_TRK_L()	(ChkL1ModFltr_UL1D_THIRD()&&(FILTER_CHECK(UL1D_THIRD_Trace_Filter, 1, 0x08)))
#define ChkL1ClsFltr_UL1D_THIRD_WIN_TRK_M()	(ChkL1ModFltr_UL1D_THIRD()&&(FILTER_CHECK(UL1D_THIRD_Trace_Filter, 1, 0x10)))
#define ChkL1ClsFltr_UL1D_THIRD_UL_TFC_STATE_L()	(ChkL1ModFltr_UL1D_THIRD()&&(FILTER_CHECK(UL1D_THIRD_Trace_Filter, 1, 0x20)))
#define ChkL1ClsFltr_UL1D_THIRD_UL_TFC_STATE_H()	(ChkL1ModFltr_UL1D_THIRD()&&(FILTER_CHECK(UL1D_THIRD_Trace_Filter, 1, 0x40)))
#define ChkL1ClsFltr_UL1D_THIRD_GEMINI_WGG_M()	(ChkL1ModFltr_UL1D_THIRD()&&(FILTER_CHECK(UL1D_THIRD_Trace_Filter, 1, 0x80)))
#define ChkL1ClsFltr_UL1D_THIRD_GEMINI_WGG_H()	(ChkL1ModFltr_UL1D_THIRD()&&(FILTER_CHECK(UL1D_THIRD_Trace_Filter, 2, 0x01)))
#define ChkL1ClsFltr_UL1D_THIRD_SFN_TM_M()	(ChkL1ModFltr_UL1D_THIRD()&&(FILTER_CHECK(UL1D_THIRD_Trace_Filter, 2, 0x02)))
#define ChkL1ClsFltr_UL1D_THIRD_UL1D_R6s_Meas_H()	(ChkL1ModFltr_UL1D_THIRD()&&(FILTER_CHECK(UL1D_THIRD_Trace_Filter, 2, 0x04)))
#define ChkL1MsgFltr_UL1D_TRC_MEAS_SCHDL_STATE_REQ()	ChkL1ClsFltr_UL1D_THIRD_MEAS_H()
#define ChkL1MsgFltr_UL1D_TRC_MEAS_SCHDL_SCHEDULING()	ChkL1ClsFltr_UL1D_THIRD_MEAS_M()
#define ChkL1MsgFltr_UL1D_TRC_MEAS_MPS_START()	ChkL1ClsFltr_UL1D_THIRD_MEAS_M()
#define ChkL1MsgFltr_UL1D_TRC_MEAS_MEAS_START()	ChkL1ClsFltr_UL1D_THIRD_MEAS_M()
#define ChkL1MsgFltr_UL1D_TRC_MEAS_MEAS_CELL_INFO()	ChkL1ClsFltr_UL1D_THIRD_MEAS_M()
#define ChkL1MsgFltr_UL1D_TRC_MEAS_RPT_CELL_INFO()	ChkL1ClsFltr_UL1D_THIRD_MEAS_M()
#define ChkL1MsgFltr_UL1D_TRC_MEAS_RPT_CELL_STATE_VAR_INFO()	ChkL1ClsFltr_UL1D_THIRD_MEAS_M()
#define ChkL1MsgFltr_UL1D_TRC_MEAS_MEAS_FINISH()	ChkL1ClsFltr_UL1D_THIRD_MEAS_M()
#define ChkL1MsgFltr_UL1D_TRC_MEAS_CS3_START()	ChkL1ClsFltr_UL1D_THIRD_MEAS_M()
#define ChkL1MsgFltr_UL1D_TRC_MEAS_CM_AVAIL_TIME()	ChkL1ClsFltr_UL1D_THIRD_MEAS_M()
#define ChkL1MsgFltr_UL1D_TRC_MEAS_CAL_RSCP()	ChkL1ClsFltr_UL1D_THIRD_MEAS_M()
#define ChkL1MsgFltr_UL1D_TRC_MEAS_REQUEST_BITS()	ChkL1ClsFltr_UL1D_THIRD_MEAS_H()
#define ChkL1MsgFltr_UL1D_TRC_MEAS_CS_IRQ_INT()	ChkL1ClsFltr_UL1D_THIRD_MEAS_H()
#define ChkL1MsgFltr_UL1D_TRC_MEAS_CS_IRQ_N()	ChkL1ClsFltr_UL1D_THIRD_MEAS_H()
#define ChkL1MsgFltr_UL1D_TRC_MEAS_CS_DISABLE_IRQ()	ChkL1ClsFltr_UL1D_THIRD_MEAS_H()
#define ChkL1MsgFltr_UL1D_TRC_MEAS_CS_ENABLE_IRQ()	ChkL1ClsFltr_UL1D_THIRD_MEAS_H()
#define ChkL1MsgFltr_UL1D_TRC_MEAS_CS_IRQ_MASK_DBG()	ChkL1ClsFltr_UL1D_THIRD_MEAS_H()
#define ChkL1MsgFltr_UL1D_TRC_MEAS_MPS_CALLBACK()	ChkL1ClsFltr_UL1D_THIRD_MEAS_M()
#define ChkL1MsgFltr_UL1D_TRC_MEAS_RF_CONTROL()	ChkL1ClsFltr_UL1D_THIRD_MEAS_M()
#define ChkL1MsgFltr_UL1D_TRC_MEAS_RF_CENTRAL_CONTROL_REG()	ChkL1ClsFltr_UL1D_THIRD_MEAS_M()
#define ChkL1MsgFltr_UL1D_TRC_MEAS_DRX_MASK()	ChkL1ClsFltr_UL1D_THIRD_MEAS_M()
#define ChkL1MsgFltr_UL1D_TRC_MEAS_SCHDL_MASK()	ChkL1ClsFltr_UL1D_THIRD_MEAS_M()
#define ChkL1MsgFltr_UL1D_TRC_MEAS_SET_CALLBACK()	ChkL1ClsFltr_UL1D_THIRD_MEAS_M()
#define ChkL1MsgFltr_UL1D_TRC_MEAS_MEAS_TID_START_LOCATION()	ChkL1ClsFltr_UL1D_THIRD_MEAS_M()
#define ChkL1MsgFltr_UL1D_TRC_MEAS_RSSI_ERROR()	ChkL1ClsFltr_UL1D_THIRD_MEAS_M()
#define ChkL1MsgFltr_UL1D_TRC_CAL_AVAIL_TIME()	ChkL1ClsFltr_UL1D_THIRD_MEAS_M()
#define ChkL1MsgFltr_UL1D_TRC_MEAS_GAP_MASK()	ChkL1ClsFltr_UL1D_THIRD_MEAS_M()
#define ChkL1MsgFltr_UL1D_TRC_CELL_STATE_CHANGE()	ChkL1ClsFltr_UL1D_THIRD_MEAS_M()
#define ChkL1MsgFltr_UL1D_TRC_MEAS_RXD_STATUS()	ChkL1ClsFltr_UL1D_THIRD_MEAS_H()
#define ChkL1MsgFltr_UL1D_TRC_MEAS_RXD_DETECT_DBG()	ChkL1ClsFltr_UL1D_THIRD_MEAS_H()
#define ChkL1MsgFltr_UL1D_TRC_MEAS_RXD_DETECTION_CHECK()	ChkL1ClsFltr_UL1D_THIRD_MEAS_H()
#define ChkL1MsgFltr_UL1D_TRC_MEAS_RXD_DETECTION_FINAL_RESULT()	ChkL1ClsFltr_UL1D_THIRD_MEAS_H()
#define ChkL1MsgFltr_UL1D_TRC_DD_STOP_PARAM()	ChkL1ClsFltr_UL1D_THIRD_MEAS_H()
#define ChkL1MsgFltr_UL1D_TRC_DD_PARAM()	ChkL1ClsFltr_UL1D_THIRD_MEAS_H()
#define ChkL1MsgFltr_UL1D_TRC_DD_DURATION()	ChkL1ClsFltr_UL1D_THIRD_MEAS_H()
#define ChkL1MsgFltr_UL1D_TRC_IDLE_RFM_FRAMES()	ChkL1ClsFltr_UL1D_THIRD_MEAS_M()
#define ChkL1MsgFltr_UL1D_TRC_IDLE_FREE_RUN_SCHDL()	ChkL1ClsFltr_UL1D_THIRD_MEAS_H()
#define ChkL1MsgFltr_UL1D_TRC_IDLE_FREE_RUNNING()	ChkL1ClsFltr_UL1D_THIRD_MEAS_H()
#define ChkL1MsgFltr_UL1D_TRC_DD_RSSI()	ChkL1ClsFltr_UL1D_THIRD_MEAS_M()
#define ChkL1MsgFltr_UL1D_TRC_FA_CELL_CORRECT()	ChkL1ClsFltr_UL1D_THIRD_MEAS_H()
#define ChkL1MsgFltr_UL1D_TRC_MS3_STATUS()	ChkL1ClsFltr_UL1D_THIRD_MEAS_M()
#define ChkL1MsgFltr_UL1D_TRC_PROHIBIT_INTER_MEAS()	ChkL1ClsFltr_UL1D_THIRD_MEAS_H()
#define ChkL1MsgFltr_UL1D_TRC_MEAS_START()	ChkL1ClsFltr_UL1D_THIRD_MEAS_M()
#define ChkL1MsgFltr_UL1D_TRC_CS_HW_IN_USE()	ChkL1ClsFltr_UL1D_THIRD_MEAS_H()
#define ChkL1MsgFltr_UL1D_TRC_MEAS_CHECK_CS_TIME()	ChkL1ClsFltr_UL1D_THIRD_MEAS_H()
#define ChkL1MsgFltr_UL1D_TRC_MEAS_IDLE_FLAG()	ChkL1ClsFltr_UL1D_THIRD_MEAS_H()
#define ChkL1MsgFltr_UL1D_TRC_CELL_STATE_DBG1()	ChkL1ClsFltr_UL1D_THIRD_MEAS_M()
#define ChkL1MsgFltr_UL1D_TRC_MEAS_REPORT_FROM_RL6_RFM()	ChkL1ClsFltr_UL1D_THIRD_MEAS_M()
#define ChkL1MsgFltr_UL1D_TRC_MEAS_MEAS_RESULT1()	ChkL1ClsFltr_UL1D_THIRD_MEAS_M()
#define ChkL1MsgFltr_UL1D_TRC_MEAS_MEAS_RESULT2()	ChkL1ClsFltr_UL1D_THIRD_MEAS_H()
#define ChkL1MsgFltr_UL1D_TRC_TX_TIMING_OFFSET()	ChkL1ClsFltr_UL1D_THIRD_MEAS_M()
#define ChkL1MsgFltr_UL1D_TRC_TIMING_TRACKING()	ChkL1ClsFltr_UL1D_THIRD_MEAS_L()
#define ChkL1MsgFltr_UL1D_TRC_MEAS_RESULT_COMP()	ChkL1ClsFltr_UL1D_THIRD_MEAS_H()
#define ChkL1MsgFltr_UL1D_TRC_DD_RSSIDBRG()	ChkL1ClsFltr_UL1D_THIRD_MEAS_M()
#define ChkL1MsgFltr_UL1D_TRC_MBD_PATH_PWR_DBG()	ChkL1ClsFltr_UL1D_THIRD_MEAS_L()
#define ChkL1MsgFltr_UL1D_TRC_MBD_PATH_POS_DBG()	ChkL1ClsFltr_UL1D_THIRD_MEAS_L()
#define ChkL1MsgFltr_UL1D_TRC_MEAS_SCHDL_DBG1()	ChkL1ClsFltr_UL1D_THIRD_MEAS_H()
#define ChkL1MsgFltr_UL1D_TRC_MEAS_SCHDL_DBG2()	ChkL1ClsFltr_UL1D_THIRD_MEAS_H()
#define ChkL1MsgFltr_UL1D_TRC_TMP_DBG_MEAS_SCHDL()	ChkL1ClsFltr_UL1D_THIRD_MEAS_H()
#define ChkL1MsgFltr_UL1D_TRC_WIN_TRK_TAIL_HEAD()	ChkL1ClsFltr_UL1D_THIRD_WIN_TRK_L()
#define ChkL1MsgFltr_UL1D_TRC_WIN_TRK_GSR_ADDR()	ChkL1ClsFltr_UL1D_THIRD_WIN_TRK_M()
#define ChkL1MsgFltr_UL1D_TRC_WIN_TRK_ADV_RTD()	ChkL1ClsFltr_UL1D_THIRD_WIN_TRK_M()
#define ChkL1MsgFltr_UL1D_TRC_UL_TFC_STATUS()	ChkL1ClsFltr_UL1D_THIRD_UL_TFC_STATE_L()
#define ChkL1MsgFltr_UL1D_TRC_UL_TFC_STATUS_RESTRICTED_SF()	ChkL1ClsFltr_UL1D_THIRD_UL_TFC_STATE_H()
#define ChkL1MsgFltr_UL1D_TRC_UL_TFC_BETA()	ChkL1ClsFltr_UL1D_THIRD_UL_TFC_STATE_L()
#define ChkL1MsgFltr_UL1D_TRC_UL_TFC_FRAME()	ChkL1ClsFltr_UL1D_THIRD_UL_TFC_STATE_L()
#define ChkL1MsgFltr_UL1D_TRC_WGG_MEAS_EVENT()	ChkL1ClsFltr_UL1D_THIRD_GEMINI_WGG_H()
#define ChkL1MsgFltr_UL1D_TRC_MEAS_GEMINI_RESOURCE_REQ_STATE()	ChkL1ClsFltr_UL1D_THIRD_GEMINI_WGG_H()
#define ChkL1MsgFltr_UL1D_TRC_WGG_MEAS_GAP_END()	ChkL1ClsFltr_UL1D_THIRD_GEMINI_WGG_H()
#define ChkL1MsgFltr_UL1D_TRC_WGG_3G_CHANNEL_ACTIVE()	ChkL1ClsFltr_UL1D_THIRD_GEMINI_WGG_H()
#define ChkL1MsgFltr_UL1D_TRC_WGG_3G_Channel_Done()	ChkL1ClsFltr_UL1D_THIRD_GEMINI_WGG_H()
#define ChkL1MsgFltr_UL1D_TRC_WGG_3G_WAITING_FOR_RETURN()	ChkL1ClsFltr_UL1D_THIRD_GEMINI_WGG_H()
#define ChkL1MsgFltr_UL1D_TRC_SFN_CELL_INVALID_CM_DATABASE()	ChkL1ClsFltr_UL1D_THIRD_SFN_TM_M()
#define ChkL1MsgFltr_UL1D_TRC_SFN_UPDATE_CM_DATABASE()	ChkL1ClsFltr_UL1D_THIRD_SFN_TM_M()
#define ChkL1MsgFltr_UL1D_TRC_RXD_MEAS_START()	ChkL1ClsFltr_UL1D_THIRD_UL1D_R6s_Meas_H()
#define ChkL1MsgFltr_UL1D_TRC_RXD_MPS_START()	ChkL1ClsFltr_UL1D_THIRD_UL1D_R6s_Meas_H()
#define ChkL1MsgFltr_UL1D_TRC_DEBUG_LORX_CRC()	ChkL1ClsFltr_UL1D_THIRD_MEAS_H()
#define ChkL1MsgFltr_UL1D_TRC_DEBUG_LORX_CRC1()	ChkL1ClsFltr_UL1D_THIRD_MEAS_H()
#define ChkL1MsgFltr_UL1D_TRC_DEBUG_LORX_CRC2()	ChkL1ClsFltr_UL1D_THIRD_MEAS_H()


#endif
