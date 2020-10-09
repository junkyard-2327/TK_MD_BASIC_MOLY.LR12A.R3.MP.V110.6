#ifndef L1TRC_EL1_TSTM_2_DEF_H
#define L1TRC_EL1_TSTM_2_DEF_H

/******************************/
/* String category definition */
/******************************/
#define TSTM_Ps_Tx_Rx_St_String(v1)  (unsigned char)(v1+0)
#define TSTM_NSFT_St_String(v1)  (unsigned char)(v1+7)
#define TSTM_Meta_Command_Type_String(v1)  (unsigned char)(v1+13)
#define TSTM_NSFT_Rx_Status_String(v1)  (unsigned char)(v1+16)


/****************************/
/* Message macro definition */
/****************************/
#include "L1Trc.h"
#if defined(L1_CATCHER)
	#define TSTM_LOG_PS_TX_RX_ST(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TSTM_2_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x000F,0x000F);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TSTM_2_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define TSTM_LOG_PS_TX_RX_ST(v1)
#endif

#if defined(L1_CATCHER)
	#define TSTM_LOG_NSFT_ST(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TSTM_2_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x010F,0x010F);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TSTM_2_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define TSTM_LOG_NSFT_ST(v1)
#endif

#if defined(L1_CATCHER)
	#define TSTM_LOG_META_COMMAND_TYPE(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TSTM_2_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x020F,0x020F);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TSTM_2_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define TSTM_LOG_META_COMMAND_TYPE(v1)
#endif

#if defined(L1_CATCHER)
	#define TSTM_LOG_NSFT_NEXT_STATE(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TSTM_2_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x030F,0x030F);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TSTM_2_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define TSTM_LOG_NSFT_NEXT_STATE(v1)
#endif

#if defined(L1_CATCHER)
	#define TSTM_LOG_NSFT_NEXT_DUPLEX_TIME(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TSTM_2_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x040F,0x040F);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TSTM_2_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define TSTM_LOG_NSFT_NEXT_DUPLEX_TIME(v1)
#endif

#if defined(L1_CATCHER)
	#define TSTM_LOG_ABS_TIME(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TSTM_2_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x050F,0x050F);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TSTM_2_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define TSTM_LOG_ABS_TIME(v1)
#endif

#if defined(L1_CATCHER)
	#define TSTM_LOG_NSFT_TX_TRIG_CHK() do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TSTM_2_Trace_Filter, 1, 0x01);\
			TRC_START_FILL_L1();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L1(0x060F,0x060F);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TSTM_2_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define TSTM_LOG_NSFT_TX_TRIG_CHK()
#endif

#if defined(L1_CATCHER)
	#define TSTM_LOG_NSFT_LIST_SET_TX_TRIG(v1, v2, v3, v4, v5, v6) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TSTM_2_Trace_Filter, 1, 0x01);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x070F,0x070F);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TSTM_2_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define TSTM_LOG_NSFT_LIST_SET_TX_TRIG(v1, v2, v3, v4, v5, v6)
#endif

#if defined(L1_CATCHER)
	#define TSTM_LOG_NSFT_CHNG_BAND_FREQ(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TSTM_2_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x080F,0x080F);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TSTM_2_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define TSTM_LOG_NSFT_CHNG_BAND_FREQ(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define TSTM_LOG_NSFT_STEP_SWITCH_TIME(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TSTM_2_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x090F,0x090F);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TSTM_2_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define TSTM_LOG_NSFT_STEP_SWITCH_TIME(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define TSTM_LOG_NSFT_RE_SYNC_TIME(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TSTM_2_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0A0F,0x0A0F);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TSTM_2_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define TSTM_LOG_NSFT_RE_SYNC_TIME(v1)
#endif

#if defined(L1_CATCHER)
	#define TSTM_LOG_NSFT_TX_TRIGG_END() do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TSTM_2_Trace_Filter, 1, 0x01);\
			TRC_START_FILL_L1();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L1(0x0B0F,0x0B0F);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TSTM_2_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define TSTM_LOG_NSFT_TX_TRIGG_END()
#endif

#if defined(L1_CATCHER)
	#define TSTM_LOG_NEXT_DUPLEX_TIME(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TSTM_2_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0C0F,0x0C0F);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TSTM_2_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define TSTM_LOG_NEXT_DUPLEX_TIME(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define TSTM_LOG_NEXT_TX_TRIGGER_TIME(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TSTM_2_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0D0F,0x0D0F);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TSTM_2_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define TSTM_LOG_NEXT_TX_TRIGGER_TIME(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define TSTM_LOG_NSFT_RX_STEP(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TSTM_2_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0E0F,0x0E0F);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TSTM_2_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define TSTM_LOG_NSFT_RX_STEP(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define TSTM_LOG_NSFT_RX_ROUTE_SWITCH(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TSTM_2_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0F0F,0x0F0F);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TSTM_2_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define TSTM_LOG_NSFT_RX_ROUTE_SWITCH(v1)
#endif

#if defined(L1_CATCHER)
	#define TSTM_LOG_NSFT_RX_ROUTE_RESET() do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TSTM_2_Trace_Filter, 1, 0x01);\
			TRC_START_FILL_L1();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L1(0x100F,0x100F);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TSTM_2_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define TSTM_LOG_NSFT_RX_ROUTE_RESET()
#endif

#if defined(L1_CATCHER)
	#define TSTM_LOG_NSFT_RX_TIME_INFO(v1, v2, v3, v4, v5, v6) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TSTM_2_Trace_Filter, 1, 0x01);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x110F,0x110F);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TSTM_2_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define TSTM_LOG_NSFT_RX_TIME_INFO(v1, v2, v3, v4, v5, v6)
#endif

#if defined(L1_CATCHER)
	#define TSTM_LOG_NSFT_RX_TEST_STATUS(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TSTM_2_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x120F,0x120F);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TSTM_2_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define TSTM_LOG_NSFT_RX_TEST_STATUS(v1)
#endif

#if defined(L1_CATCHER)
	#define TSTM_LOG_RESYNC_CNT(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TSTM_2_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x130F,0x130F);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TSTM_2_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define TSTM_LOG_RESYNC_CNT(v1)
#endif

#if defined(L1_CATCHER)
	#define TSTM_LOG_NBR_MEAS_DUMP_0(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TSTM_2_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x140F,0x140F);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TSTM_2_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define TSTM_LOG_NBR_MEAS_DUMP_0(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define TSTM_LOG_SET_SRV_MEAS_PERIOD(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TSTM_2_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x150F,0x150F);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TSTM_2_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define TSTM_LOG_SET_SRV_MEAS_PERIOD(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define TSTM_LOG_CURRENT_PHY_TIME(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TSTM_2_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x160F,0x160F);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TSTM_2_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define TSTM_LOG_CURRENT_PHY_TIME(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define TSTM_LOG_TX_ROUTE_REQUEST_TIME(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TSTM_2_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x170F,0x170F);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TSTM_2_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define TSTM_LOG_TX_ROUTE_REQUEST_TIME(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define TSTM_LOG_RX_ROUTE_REQUEST_TIME(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TSTM_2_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x180F,0x180F);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TSTM_2_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define TSTM_LOG_RX_ROUTE_REQUEST_TIME(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define TSTM_LOG_TX_ROUTE_INFO(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TSTM_2_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x190F,0x190F);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TSTM_2_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define TSTM_LOG_TX_ROUTE_INFO(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define TSTM_LOG_RX_ROUTE_INFO(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TSTM_2_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1A0F,0x1A0F);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TSTM_2_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define TSTM_LOG_RX_ROUTE_INFO(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define TSTM_LOG_NSFT_FORCE_TX_ROUTE_STATUS(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TSTM_2_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1B0F,0x1B0F);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TSTM_2_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define TSTM_LOG_NSFT_FORCE_TX_ROUTE_STATUS(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define TSTM_LOG_CNTR_RPT(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TSTM_2_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1C0F,0x1C0F);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TSTM_2_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define TSTM_LOG_CNTR_RPT(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define TSTM_LOG_NSFT_TRX_MEAS_RLT(v1, v2, v3, v4, v5, v6, v7, v8) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TSTM_2_Trace_Filter, 1, 0x01);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1D0F,0x1D0F);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v7,v7);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v8,v8);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TSTM_2_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define TSTM_LOG_NSFT_TRX_MEAS_RLT(v1, v2, v3, v4, v5, v6, v7, v8)
#endif

#if defined(L1_CATCHER)
	#define TSTM_LOG_CSR_RLT(v1, v2, v3, v4, v5, v6) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TSTM_2_Trace_Filter, 1, 0x01);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1E0F,0x1E0F);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TSTM_2_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define TSTM_LOG_CSR_RLT(v1, v2, v3, v4, v5, v6)
#endif

#if defined(L1_CATCHER)
	#define TSTM_LOG_TASK_TRIGGER(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TSTM_2_Trace_Filter, 1, 0x01);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1F0F,0x1F0F);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TSTM_2_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define TSTM_LOG_TASK_TRIGGER(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER)
	#define TSTM_LOG_FREQ_FIRST_TX_TIME(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TSTM_2_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x200F,0x200F);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TSTM_2_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define TSTM_LOG_FREQ_FIRST_TX_TIME(v1)
#endif

#if defined(L1_CATCHER)
	#define TSTM_LOG_FREQ_FIRST_RX_TIME(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TSTM_2_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x210F,0x210F);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TSTM_2_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define TSTM_LOG_FREQ_FIRST_RX_TIME(v1)
#endif

#if defined(L1_CATCHER)
	#define TSTM_LOG_NSFT_TX_STEP_CNT(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TSTM_2_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x220F,0x220F);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TSTM_2_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define TSTM_LOG_NSFT_TX_STEP_CNT(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define TSTM_LOG_NSFT_PWR_STEP_CNT(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TSTM_2_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x230F,0x230F);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TSTM_2_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define TSTM_LOG_NSFT_PWR_STEP_CNT(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define TSTM_LOG_NSFT_ROUTE_STEP_CNT(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TSTM_2_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x240F,0x240F);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TSTM_2_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define TSTM_LOG_NSFT_ROUTE_STEP_CNT(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define TSTM_LOG_NSFT_FREQ_STEP_CNT(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TSTM_2_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x250F,0x250F);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TSTM_2_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define TSTM_LOG_NSFT_FREQ_STEP_CNT(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define TSTM_LOG_NSFT_BAND_STEP_CNT(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TSTM_2_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x260F,0x260F);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TSTM_2_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define TSTM_LOG_NSFT_BAND_STEP_CNT(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define TSTM_LOG_NSFT_DUPLEX_STEP_CNT(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TSTM_2_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x270F,0x270F);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TSTM_2_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define TSTM_LOG_NSFT_DUPLEX_STEP_CNT(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define TSTM_LOG_NSFT_MCS_CRC_RLT(v1, v2, v3, v4, v5, v6) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TSTM_2_Trace_Filter, 1, 0x01);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x280F,0x280F);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TSTM_2_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define TSTM_LOG_NSFT_MCS_CRC_RLT(v1, v2, v3, v4, v5, v6)
#endif

#if defined(L1_CATCHER)
	#define TSTM_LOG_NSFT_MCS_CRC_CNT(v1, v2, v3, v4, v5, v6) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TSTM_2_Trace_Filter, 1, 0x01);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x290F,0x290F);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TSTM_2_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define TSTM_LOG_NSFT_MCS_CRC_CNT(v1, v2, v3, v4, v5, v6)
#endif

#if defined(L1_CATCHER)
	#define TSTM_LOG_PRINT_SRV_RSSI_TYPE(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TSTM_2_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x2A0F,0x2A0F);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TSTM_2_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define TSTM_LOG_PRINT_SRV_RSSI_TYPE(v1)
#endif

#if defined(L1_CATCHER)
	#define TSTM_LOG_NSFT_PRE_RNTI_CNT(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TSTM_2_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x2B0F,0x2B0F);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TSTM_2_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define TSTM_LOG_NSFT_PRE_RNTI_CNT(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define TSTM_LOG_NSFT_SET_TX_POWER_ON() do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TSTM_2_Trace_Filter, 1, 0x01);\
			TRC_START_FILL_L1();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L1(0x2C0F,0x2C0F);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TSTM_2_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define TSTM_LOG_NSFT_SET_TX_POWER_ON()
#endif

#if defined(L1_CATCHER)
	#define TSTM_LOG_FORCE_TX_ROUTE(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TSTM_2_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x2D0F,0x2D0F);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TSTM_2_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define TSTM_LOG_FORCE_TX_ROUTE(v1)
#endif

#if defined(L1_CATCHER)
	#define TSTM_LOG_HPUE_HW_INFO(v1, v2, v3, v4, v5, v6) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TSTM_2_Trace_Filter, 1, 0x01);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x2E0F,0x2E0F);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TSTM_2_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define TSTM_LOG_HPUE_HW_INFO(v1, v2, v3, v4, v5, v6)
#endif

#if defined(L1_CATCHER)
	#define TSTM_LOG_HPUE_NVRAM_INFO(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TSTM_2_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x2F0F,0x2F0F);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TSTM_2_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define TSTM_LOG_HPUE_NVRAM_INFO(v1)
#endif

#if defined(L1_CATCHER)
	#define TSTM_LOG_HPUE_ENABLE_INFO(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TSTM_2_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x300F,0x300F);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TSTM_2_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define TSTM_LOG_HPUE_ENABLE_INFO(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define TSTM_LOG_NO_TX_ROUTE(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TSTM_2_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x310F,0x310F);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TSTM_2_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define TSTM_LOG_NO_TX_ROUTE(v1)
#endif

#if defined(L1_CATCHER)
	#define TSTM_LOG_QUERY_TX_ROUTE(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TSTM_2_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x320F,0x320F);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TSTM_2_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define TSTM_LOG_QUERY_TX_ROUTE(v1)
#endif

#if defined(L1_CATCHER)
	#define TSTM_LOG_RX_ROUTE(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TSTM_2_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x330F,0x330F);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TSTM_2_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define TSTM_LOG_RX_ROUTE(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define TSTM_LOG_FORCE_TX_DBG(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TSTM_2_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x340F,0x340F);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TSTM_2_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define TSTM_LOG_FORCE_TX_DBG(v1)
#endif

#if defined(L1_CATCHER)
	#define TSTM_LOG_TX_REPORT_IND(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TSTM_2_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x350F,0x350F);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TSTM_2_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define TSTM_LOG_TX_REPORT_IND(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define TSTM_LOG_TX_REPORT_NOT_IN_FLIGHT() do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TSTM_2_Trace_Filter, 1, 0x01);\
			TRC_START_FILL_L1();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L1(0x360F,0x360F);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TSTM_2_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define TSTM_LOG_TX_REPORT_NOT_IN_FLIGHT()
#endif

#if defined(L1_CATCHER)
	#define TSTM_LOG_GET_TX_POWER_OFFSET(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TSTM_2_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x370F,0x370F);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TSTM_2_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define TSTM_LOG_GET_TX_POWER_OFFSET(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define TSTM_LOG_SET_TX_POWER_OFFSET(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TSTM_2_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x380F,0x380F);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TSTM_2_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define TSTM_LOG_SET_TX_POWER_OFFSET(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define TSTM_LOG_SET_TX_POWER_OFFSET_DBG() do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TSTM_2_Trace_Filter, 1, 0x01);\
			TRC_START_FILL_L1();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L1(0x390F,0x390F);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TSTM_2_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define TSTM_LOG_SET_TX_POWER_OFFSET_DBG()
#endif

#if defined(L1_CATCHER)
	#define TSTM_LOG_TAS_STATE_INFO(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TSTM_2_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x3A0F,0x3A0F);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TSTM_2_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define TSTM_LOG_TAS_STATE_INFO(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define TSTM_LOG_PS_CMD(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TSTM_2_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x3B0F,0x3B0F);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TSTM_2_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define TSTM_LOG_PS_CMD(v1, v2, v3)
#endif



/*******************************/
/* declaration of filter array */
/*******************************/
EXTERN_TMD_FILTER(unsigned char, EL1_TSTM_2_Trace_Filter, 5);
/*************************/
/* Function declarations */
/*************************/
#ifdef L1_CATCHER

void Set_EL1_TSTM_2_Filter(unsigned char *setting);

#endif

/************************************/
/* Filter checking API declarations */
/************************************/

#define ChkL1ModFltr_EL1_TSTM_2()	(FILTER_CHECK(EL1_TSTM_2_Trace_Filter, 0, 1))
#define ChkL1ClsFltr_EL1_TSTM_2_el1_trace_1_H()	(ChkL1ModFltr_EL1_TSTM_2()&&(FILTER_CHECK(EL1_TSTM_2_Trace_Filter, 1, 0x01)))
#define ChkL1ClsFltr_EL1_TSTM_2_el1_trace_2_H()	(ChkL1ModFltr_EL1_TSTM_2()&&(FILTER_CHECK(EL1_TSTM_2_Trace_Filter, 1, 0x02)))
#define ChkL1ClsFltr_EL1_TSTM_2_el1_trace_3_M()	(ChkL1ModFltr_EL1_TSTM_2()&&(FILTER_CHECK(EL1_TSTM_2_Trace_Filter, 1, 0x04)))
#define ChkL1ClsFltr_EL1_TSTM_2_el1_trace_4_L()	(ChkL1ModFltr_EL1_TSTM_2()&&(FILTER_CHECK(EL1_TSTM_2_Trace_Filter, 1, 0x08)))
#define ChkL1MsgFltr_TSTM_LOG_PS_TX_RX_ST()	ChkL1ClsFltr_EL1_TSTM_2_el1_trace_1_H()
#define ChkL1MsgFltr_TSTM_LOG_NSFT_ST()	ChkL1ClsFltr_EL1_TSTM_2_el1_trace_1_H()
#define ChkL1MsgFltr_TSTM_LOG_META_COMMAND_TYPE()	ChkL1ClsFltr_EL1_TSTM_2_el1_trace_1_H()
#define ChkL1MsgFltr_TSTM_LOG_NSFT_NEXT_STATE()	ChkL1ClsFltr_EL1_TSTM_2_el1_trace_1_H()
#define ChkL1MsgFltr_TSTM_LOG_NSFT_NEXT_DUPLEX_TIME()	ChkL1ClsFltr_EL1_TSTM_2_el1_trace_1_H()
#define ChkL1MsgFltr_TSTM_LOG_ABS_TIME()	ChkL1ClsFltr_EL1_TSTM_2_el1_trace_1_H()
#define ChkL1MsgFltr_TSTM_LOG_NSFT_TX_TRIG_CHK()	ChkL1ClsFltr_EL1_TSTM_2_el1_trace_1_H()
#define ChkL1MsgFltr_TSTM_LOG_NSFT_LIST_SET_TX_TRIG()	ChkL1ClsFltr_EL1_TSTM_2_el1_trace_1_H()
#define ChkL1MsgFltr_TSTM_LOG_NSFT_CHNG_BAND_FREQ()	ChkL1ClsFltr_EL1_TSTM_2_el1_trace_1_H()
#define ChkL1MsgFltr_TSTM_LOG_NSFT_STEP_SWITCH_TIME()	ChkL1ClsFltr_EL1_TSTM_2_el1_trace_1_H()
#define ChkL1MsgFltr_TSTM_LOG_NSFT_RE_SYNC_TIME()	ChkL1ClsFltr_EL1_TSTM_2_el1_trace_1_H()
#define ChkL1MsgFltr_TSTM_LOG_NSFT_TX_TRIGG_END()	ChkL1ClsFltr_EL1_TSTM_2_el1_trace_1_H()
#define ChkL1MsgFltr_TSTM_LOG_NEXT_DUPLEX_TIME()	ChkL1ClsFltr_EL1_TSTM_2_el1_trace_1_H()
#define ChkL1MsgFltr_TSTM_LOG_NEXT_TX_TRIGGER_TIME()	ChkL1ClsFltr_EL1_TSTM_2_el1_trace_1_H()
#define ChkL1MsgFltr_TSTM_LOG_NSFT_RX_STEP()	ChkL1ClsFltr_EL1_TSTM_2_el1_trace_1_H()
#define ChkL1MsgFltr_TSTM_LOG_NSFT_RX_ROUTE_SWITCH()	ChkL1ClsFltr_EL1_TSTM_2_el1_trace_1_H()
#define ChkL1MsgFltr_TSTM_LOG_NSFT_RX_ROUTE_RESET()	ChkL1ClsFltr_EL1_TSTM_2_el1_trace_1_H()
#define ChkL1MsgFltr_TSTM_LOG_NSFT_RX_TIME_INFO()	ChkL1ClsFltr_EL1_TSTM_2_el1_trace_1_H()
#define ChkL1MsgFltr_TSTM_LOG_NSFT_RX_TEST_STATUS()	ChkL1ClsFltr_EL1_TSTM_2_el1_trace_1_H()
#define ChkL1MsgFltr_TSTM_LOG_RESYNC_CNT()	ChkL1ClsFltr_EL1_TSTM_2_el1_trace_1_H()
#define ChkL1MsgFltr_TSTM_LOG_NBR_MEAS_DUMP_0()	ChkL1ClsFltr_EL1_TSTM_2_el1_trace_1_H()
#define ChkL1MsgFltr_TSTM_LOG_SET_SRV_MEAS_PERIOD()	ChkL1ClsFltr_EL1_TSTM_2_el1_trace_1_H()
#define ChkL1MsgFltr_TSTM_LOG_CURRENT_PHY_TIME()	ChkL1ClsFltr_EL1_TSTM_2_el1_trace_1_H()
#define ChkL1MsgFltr_TSTM_LOG_TX_ROUTE_REQUEST_TIME()	ChkL1ClsFltr_EL1_TSTM_2_el1_trace_1_H()
#define ChkL1MsgFltr_TSTM_LOG_RX_ROUTE_REQUEST_TIME()	ChkL1ClsFltr_EL1_TSTM_2_el1_trace_1_H()
#define ChkL1MsgFltr_TSTM_LOG_TX_ROUTE_INFO()	ChkL1ClsFltr_EL1_TSTM_2_el1_trace_1_H()
#define ChkL1MsgFltr_TSTM_LOG_RX_ROUTE_INFO()	ChkL1ClsFltr_EL1_TSTM_2_el1_trace_1_H()
#define ChkL1MsgFltr_TSTM_LOG_NSFT_FORCE_TX_ROUTE_STATUS()	ChkL1ClsFltr_EL1_TSTM_2_el1_trace_1_H()
#define ChkL1MsgFltr_TSTM_LOG_CNTR_RPT()	ChkL1ClsFltr_EL1_TSTM_2_el1_trace_1_H()
#define ChkL1MsgFltr_TSTM_LOG_NSFT_TRX_MEAS_RLT()	ChkL1ClsFltr_EL1_TSTM_2_el1_trace_1_H()
#define ChkL1MsgFltr_TSTM_LOG_CSR_RLT()	ChkL1ClsFltr_EL1_TSTM_2_el1_trace_1_H()
#define ChkL1MsgFltr_TSTM_LOG_TASK_TRIGGER()	ChkL1ClsFltr_EL1_TSTM_2_el1_trace_1_H()
#define ChkL1MsgFltr_TSTM_LOG_FREQ_FIRST_TX_TIME()	ChkL1ClsFltr_EL1_TSTM_2_el1_trace_1_H()
#define ChkL1MsgFltr_TSTM_LOG_FREQ_FIRST_RX_TIME()	ChkL1ClsFltr_EL1_TSTM_2_el1_trace_1_H()
#define ChkL1MsgFltr_TSTM_LOG_NSFT_TX_STEP_CNT()	ChkL1ClsFltr_EL1_TSTM_2_el1_trace_1_H()
#define ChkL1MsgFltr_TSTM_LOG_NSFT_PWR_STEP_CNT()	ChkL1ClsFltr_EL1_TSTM_2_el1_trace_1_H()
#define ChkL1MsgFltr_TSTM_LOG_NSFT_ROUTE_STEP_CNT()	ChkL1ClsFltr_EL1_TSTM_2_el1_trace_1_H()
#define ChkL1MsgFltr_TSTM_LOG_NSFT_FREQ_STEP_CNT()	ChkL1ClsFltr_EL1_TSTM_2_el1_trace_1_H()
#define ChkL1MsgFltr_TSTM_LOG_NSFT_BAND_STEP_CNT()	ChkL1ClsFltr_EL1_TSTM_2_el1_trace_1_H()
#define ChkL1MsgFltr_TSTM_LOG_NSFT_DUPLEX_STEP_CNT()	ChkL1ClsFltr_EL1_TSTM_2_el1_trace_1_H()
#define ChkL1MsgFltr_TSTM_LOG_NSFT_MCS_CRC_RLT()	ChkL1ClsFltr_EL1_TSTM_2_el1_trace_1_H()
#define ChkL1MsgFltr_TSTM_LOG_NSFT_MCS_CRC_CNT()	ChkL1ClsFltr_EL1_TSTM_2_el1_trace_1_H()
#define ChkL1MsgFltr_TSTM_LOG_PRINT_SRV_RSSI_TYPE()	ChkL1ClsFltr_EL1_TSTM_2_el1_trace_1_H()
#define ChkL1MsgFltr_TSTM_LOG_NSFT_PRE_RNTI_CNT()	ChkL1ClsFltr_EL1_TSTM_2_el1_trace_1_H()
#define ChkL1MsgFltr_TSTM_LOG_NSFT_SET_TX_POWER_ON()	ChkL1ClsFltr_EL1_TSTM_2_el1_trace_1_H()
#define ChkL1MsgFltr_TSTM_LOG_FORCE_TX_ROUTE()	ChkL1ClsFltr_EL1_TSTM_2_el1_trace_1_H()
#define ChkL1MsgFltr_TSTM_LOG_HPUE_HW_INFO()	ChkL1ClsFltr_EL1_TSTM_2_el1_trace_1_H()
#define ChkL1MsgFltr_TSTM_LOG_HPUE_NVRAM_INFO()	ChkL1ClsFltr_EL1_TSTM_2_el1_trace_1_H()
#define ChkL1MsgFltr_TSTM_LOG_HPUE_ENABLE_INFO()	ChkL1ClsFltr_EL1_TSTM_2_el1_trace_1_H()
#define ChkL1MsgFltr_TSTM_LOG_NO_TX_ROUTE()	ChkL1ClsFltr_EL1_TSTM_2_el1_trace_1_H()
#define ChkL1MsgFltr_TSTM_LOG_QUERY_TX_ROUTE()	ChkL1ClsFltr_EL1_TSTM_2_el1_trace_1_H()
#define ChkL1MsgFltr_TSTM_LOG_RX_ROUTE()	ChkL1ClsFltr_EL1_TSTM_2_el1_trace_1_H()
#define ChkL1MsgFltr_TSTM_LOG_FORCE_TX_DBG()	ChkL1ClsFltr_EL1_TSTM_2_el1_trace_1_H()
#define ChkL1MsgFltr_TSTM_LOG_TX_REPORT_IND()	ChkL1ClsFltr_EL1_TSTM_2_el1_trace_1_H()
#define ChkL1MsgFltr_TSTM_LOG_TX_REPORT_NOT_IN_FLIGHT()	ChkL1ClsFltr_EL1_TSTM_2_el1_trace_1_H()
#define ChkL1MsgFltr_TSTM_LOG_GET_TX_POWER_OFFSET()	ChkL1ClsFltr_EL1_TSTM_2_el1_trace_1_H()
#define ChkL1MsgFltr_TSTM_LOG_SET_TX_POWER_OFFSET()	ChkL1ClsFltr_EL1_TSTM_2_el1_trace_1_H()
#define ChkL1MsgFltr_TSTM_LOG_SET_TX_POWER_OFFSET_DBG()	ChkL1ClsFltr_EL1_TSTM_2_el1_trace_1_H()
#define ChkL1MsgFltr_TSTM_LOG_TAS_STATE_INFO()	ChkL1ClsFltr_EL1_TSTM_2_el1_trace_1_H()
#define ChkL1MsgFltr_TSTM_LOG_PS_CMD()	ChkL1ClsFltr_EL1_TSTM_2_el1_trace_1_H()


#endif
