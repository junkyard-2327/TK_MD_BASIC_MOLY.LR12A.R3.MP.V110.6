#ifndef L1TRC_L1D_SEC_DEF_H
#define L1TRC_L1D_SEC_DEF_H

/******************************/
/* String category definition */
/******************************/
#define L1I_AFC_REASON_STR(v1)  (unsigned char)(v1+0)
#define L1D_Str_Bool(v1)  (unsigned char)(v1+15)
#define L1I_DCM_status_STR(v1)  (unsigned char)(v1+17)
#define L1D_Str_PM_Mode(v1)  (unsigned char)(v1+19)
#define L1D_ExecuteTime_Type(v1)  (unsigned char)(v1+24)
#define L1D_Debug_Type(v1)  (unsigned char)(v1+26)
#define L1D_Trc_Str_FCCh_Start_Type(v1)  (unsigned char)(v1+28)
#define L1D_Trc_Str_FH_CLK(v1)  (unsigned char)(v1+35)


/****************************/
/* Message macro definition */
/****************************/
#include "L1Trc.h"
#if defined(L1_CATCHER)
	#define L1I_Msg_AFC_Assert_Reason(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1D_SEC_Trace_Filter, 3, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x006E,0x006E);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1D_SEC_Trace_Filter, 3, 0x04);\
		}\
	} while(0)
#else
	#define L1I_Msg_AFC_Assert_Reason(v1)
#endif

#if defined(L1_CATCHER)
	#define L1I_Msg_AFC_TQ_TIME(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1D_SEC_Trace_Filter, 3, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x016E,0x016E);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1D_SEC_Trace_Filter, 3, 0x04);\
		}\
	} while(0)
#else
	#define L1I_Msg_AFC_TQ_TIME(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define L1I_Msg_AFC_Assert34(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1D_SEC_Trace_Filter, 3, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x026E,0x026E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1D_SEC_Trace_Filter, 3, 0x04);\
		}\
	} while(0)
#else
	#define L1I_Msg_AFC_Assert34(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define L1I_Msg_AFC_Tid_MisMatch(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1D_SEC_Trace_Filter, 3, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x036E,0x036E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1D_SEC_Trace_Filter, 3, 0x04);\
		}\
	} while(0)
#else
	#define L1I_Msg_AFC_Tid_MisMatch(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define L1D_Trc_HIGHSNR_BADBLOCK() do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1D_SEC_Trace_Filter, 1, 0x04);\
			TRC_START_FILL_L1();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L1(0x046E,0x046E);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1D_SEC_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define L1D_Trc_HIGHSNR_BADBLOCK()
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define L1D_SP_flag(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1D_SEC_Trace_Filter, 1, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x056E,0x056E);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1D_SEC_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define L1D_SP_flag(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define L1D_SP_flag_Fsig_no_data_tx(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1D_SEC_Trace_Filter, 1, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x066E,0x066E);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1D_SEC_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define L1D_SP_flag_Fsig_no_data_tx(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define L1I_DCM_status(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1D_SEC_Trace_Filter, 1, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x076E,0x076E);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1D_SEC_Trace_Filter, 1, 0x10);\
		}\
	} while(0)
#else
	#define L1I_DCM_status(v1)
#endif

#if defined(L1_CATCHER)
	#define L1D_PCH_OK_AT_STATE(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1D_SEC_Trace_Filter, 3, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x086E,0x086E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1D_SEC_Trace_Filter, 3, 0x10);\
		}\
	} while(0)
#else
	#define L1D_PCH_OK_AT_STATE(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define L1D_CCCH_OK_AT_STATE(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1D_SEC_Trace_Filter, 3, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x096E,0x096E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1D_SEC_Trace_Filter, 3, 0x10);\
		}\
	} while(0)
#else
	#define L1D_CCCH_OK_AT_STATE(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define L1D_PCH_One_Burst_Enable(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1D_SEC_Trace_Filter, 1, 0x20);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0A6E,0x0A6E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1D_SEC_Trace_Filter, 1, 0x20);\
		}\
	} while(0)
#else
	#define L1D_PCH_One_Burst_Enable(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define L1D_PCH_Null_Detect(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1D_SEC_Trace_Filter, 1, 0x20);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0B6E,0x0B6E);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1D_SEC_Trace_Filter, 1, 0x20);\
		}\
	} while(0)
#else
	#define L1D_PCH_Null_Detect(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define L1D_PCH_Empty_Detect(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1D_SEC_Trace_Filter, 1, 0x20);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0C6E,0x0C6E);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1D_SEC_Trace_Filter, 1, 0x20);\
		}\
	} while(0)
#else
	#define L1D_PCH_Empty_Detect(v1)
#endif

#if defined(L1_CATCHER)
	#define L1D_PCH_Pattern(v1, v2, v3, v4, v5, v6, v7, v8) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1D_SEC_Trace_Filter, 3, 0x10);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0D6E,0x0D6E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v7,v7);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v8,v8);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1D_SEC_Trace_Filter, 3, 0x10);\
		}\
	} while(0)
#else
	#define L1D_PCH_Pattern(v1, v2, v3, v4, v5, v6, v7, v8)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define L1D_TRC_PM(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1D_SEC_Trace_Filter, 1, 0x40);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0E6E,0x0E6E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1D_SEC_Trace_Filter, 1, 0x40);\
		}\
	} while(0)
#else
	#define L1D_TRC_PM(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define L1D_Trc_DP6TapEQStatus(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1D_SEC_Trace_Filter, 1, 0x80);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0F6E,0x0F6E);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1D_SEC_Trace_Filter, 1, 0x80);\
		}\
	} while(0)
#else
	#define L1D_Trc_DP6TapEQStatus(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define L1D_DSP_WATCH_DOG(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1D_SEC_Trace_Filter, 3, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x106E,0x106E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1D_SEC_Trace_Filter, 3, 0x10);\
		}\
	} while(0)
#else
	#define L1D_DSP_WATCH_DOG(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define L1D_DSP_RX_FILTER(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1D_SEC_Trace_Filter, 3, 0x20);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x116E,0x116E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1D_SEC_Trace_Filter, 3, 0x20);\
		}\
	} while(0)
#else
	#define L1D_DSP_RX_FILTER(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define L1D_Trc_CD2nd_CRC_Pass(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1D_SEC_Trace_Filter, 3, 0x40);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x126E,0x126E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1D_SEC_Trace_Filter, 3, 0x40);\
		}\
	} while(0)
#else
	#define L1D_Trc_CD2nd_CRC_Pass(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define L1D_Trc_Timing_Check_Fail_v1(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1D_SEC_Trace_Filter, 4, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x136E,0x136E);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1D_SEC_Trace_Filter, 4, 0x01);\
		}\
	} while(0)
#else
	#define L1D_Trc_Timing_Check_Fail_v1(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define L1D_Trc_Timing_Check_Fail_v2(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1D_SEC_Trace_Filter, 4, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x146E,0x146E);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1D_SEC_Trace_Filter, 4, 0x01);\
		}\
	} while(0)
#else
	#define L1D_Trc_Timing_Check_Fail_v2(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define L1D_Trc_Execute_Timing_Check(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1D_SEC_Trace_Filter, 4, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x156E,0x156E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1D_SEC_Trace_Filter, 4, 0x01);\
		}\
	} while(0)
#else
	#define L1D_Trc_Execute_Timing_Check(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define L1D_Trc_DSP_PM_Not_Done(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1D_SEC_Trace_Filter, 4, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x166E,0x166E);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1D_SEC_Trace_Filter, 4, 0x02);\
		}\
	} while(0)
#else
	#define L1D_Trc_DSP_PM_Not_Done(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define L1D_Trc_AFC_DAC_Data(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1D_SEC_Trace_Filter, 2, 0x40);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x176E,0x176E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1D_SEC_Trace_Filter, 2, 0x40);\
		}\
	} while(0)
#else
	#define L1D_Trc_AFC_DAC_Data(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define L1D_Trc_MPLL_FH(v1, v2, v3, v4, v5, v6, v7, v8) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1D_SEC_Trace_Filter, 2, 0x80);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x186E,0x186E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v7,v7);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v8,v8);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1D_SEC_Trace_Filter, 2, 0x80);\
		}\
	} while(0)
#else
	#define L1D_Trc_MPLL_FH(v1, v2, v3, v4, v5, v6, v7, v8)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define L1D_Trc_LCD_Collision(v1, v2, v3, v4, v5, v6) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1D_SEC_Trace_Filter, 2, 0x80);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x196E,0x196E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1D_SEC_Trace_Filter, 2, 0x80);\
		}\
	} while(0)
#else
	#define L1D_Trc_LCD_Collision(v1, v2, v3, v4, v5, v6)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define L1D_Trc_TXPC(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1D_SEC_Trace_Filter, 3, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1A6E,0x1A6E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1D_SEC_Trace_Filter, 3, 0x02);\
		}\
	} while(0)
#else
	#define L1D_Trc_TXPC(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define L1D_Trc_TXPC_EDGE(v1, v2, v3, v4, v5, v6, v7, v8) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1D_SEC_Trace_Filter, 3, 0x01);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1B6E,0x1B6E);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v7,v7);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v8,v8);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1D_SEC_Trace_Filter, 3, 0x01);\
		}\
	} while(0)
#else
	#define L1D_Trc_TXPC_EDGE(v1, v2, v3, v4, v5, v6, v7, v8)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define L1D_Trc_TXPC_DAC(v1, v2, v3, v4, v5, v6, v7) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1D_SEC_Trace_Filter, 3, 0x01);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1C6E,0x1C6E);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v7,v7);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1D_SEC_Trace_Filter, 3, 0x01);\
		}\
	} while(0)
#else
	#define L1D_Trc_TXPC_DAC(v1, v2, v3, v4, v5, v6, v7)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define L1D_Trc_Rollback_db(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1D_SEC_Trace_Filter, 3, 0x01);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1D6E,0x1D6E);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1D_SEC_Trace_Filter, 3, 0x01);\
		}\
	} while(0)
#else
	#define L1D_Trc_Rollback_db(v1, v2, v3, v4, v5)
#endif



/*******************************/
/* declaration of filter array */
/*******************************/
EXTERN_TMD_FILTER(unsigned char, L1D_SEC_Trace_Filter, 5);
/*************************/
/* Function declarations */
/*************************/
#ifdef L1_CATCHER

void Set_L1D_SEC_Filter(unsigned char *setting);

#endif

/************************************/
/* Filter checking API declarations */
/************************************/

#define ChkL1ModFltr_L1D_SEC()	(FILTER_CHECK(L1D_SEC_Trace_Filter, 0, 1))
#define ChkL1ClsFltr_L1D_SEC_AFCdebug_M()	(ChkL1ModFltr_L1D_SEC()&&(FILTER_CHECK(L1D_SEC_Trace_Filter, 1, 0x01)))
#define ChkL1ClsFltr_L1D_SEC_L1D_SB_Extend_M()	(ChkL1ModFltr_L1D_SEC()&&(FILTER_CHECK(L1D_SEC_Trace_Filter, 1, 0x02)))
#define ChkL1ClsFltr_L1D_SEC_L1D_GPRS_State_L()	(ChkL1ModFltr_L1D_SEC()&&(FILTER_CHECK(L1D_SEC_Trace_Filter, 1, 0x04)))
#define ChkL1ClsFltr_L1D_SEC_SP_flag_L()	(ChkL1ModFltr_L1D_SEC()&&(FILTER_CHECK(L1D_SEC_Trace_Filter, 1, 0x08)))
#define ChkL1ClsFltr_L1D_SEC_DCM_debug_L()	(ChkL1ModFltr_L1D_SEC()&&(FILTER_CHECK(L1D_SEC_Trace_Filter, 1, 0x10)))
#define ChkL1ClsFltr_L1D_SEC_L1D_PCH_M()	(ChkL1ModFltr_L1D_SEC()&&(FILTER_CHECK(L1D_SEC_Trace_Filter, 1, 0x20)))
#define ChkL1ClsFltr_L1D_SEC_L1D_PM_M()	(ChkL1ModFltr_L1D_SEC()&&(FILTER_CHECK(L1D_SEC_Trace_Filter, 1, 0x40)))
#define ChkL1ClsFltr_L1D_SEC_L1D_DSP_COMMON2_L()	(ChkL1ModFltr_L1D_SEC()&&(FILTER_CHECK(L1D_SEC_Trace_Filter, 1, 0x80)))
#define ChkL1ClsFltr_L1D_SEC_L1D_DSP_FILTER_M()	(ChkL1ModFltr_L1D_SEC()&&(FILTER_CHECK(L1D_SEC_Trace_Filter, 2, 0x01)))
#define ChkL1ClsFltr_L1D_SEC_L1D_CD_2nd_M()	(ChkL1ModFltr_L1D_SEC()&&(FILTER_CHECK(L1D_SEC_Trace_Filter, 2, 0x02)))
#define ChkL1ClsFltr_L1D_SEC_Tx_ARFCN_TA_M()	(ChkL1ModFltr_L1D_SEC()&&(FILTER_CHECK(L1D_SEC_Trace_Filter, 2, 0x04)))
#define ChkL1ClsFltr_L1D_SEC_FB_Search_M()	(ChkL1ModFltr_L1D_SEC()&&(FILTER_CHECK(L1D_SEC_Trace_Filter, 2, 0x08)))
#define ChkL1ClsFltr_L1D_SEC_L1D_Timing_Check_M()	(ChkL1ModFltr_L1D_SEC()&&(FILTER_CHECK(L1D_SEC_Trace_Filter, 2, 0x10)))
#define ChkL1ClsFltr_L1D_SEC_PM_DONE_CHECK_M()	(ChkL1ModFltr_L1D_SEC()&&(FILTER_CHECK(L1D_SEC_Trace_Filter, 2, 0x20)))
#define ChkL1ClsFltr_L1D_SEC_AFC_DAC_L()	(ChkL1ModFltr_L1D_SEC()&&(FILTER_CHECK(L1D_SEC_Trace_Filter, 2, 0x40)))
#define ChkL1ClsFltr_L1D_SEC_L1D_MPLL_FH_L()	(ChkL1ModFltr_L1D_SEC()&&(FILTER_CHECK(L1D_SEC_Trace_Filter, 2, 0x80)))
#define ChkL1ClsFltr_L1D_SEC_L1D_TXPC_M()	(ChkL1ModFltr_L1D_SEC()&&(FILTER_CHECK(L1D_SEC_Trace_Filter, 3, 0x01)))
#define ChkL1ClsFltr_L1D_SEC_L1D_TXPC_L()	(ChkL1ModFltr_L1D_SEC()&&(FILTER_CHECK(L1D_SEC_Trace_Filter, 3, 0x02)))
#define ChkL1ClsFltr_L1D_SEC_AFCdebug_H()	(ChkL1ModFltr_L1D_SEC()&&(FILTER_CHECK(L1D_SEC_Trace_Filter, 3, 0x04)))
#define ChkL1ClsFltr_L1D_SEC_L1D_SB_Extend_H()	(ChkL1ModFltr_L1D_SEC()&&(FILTER_CHECK(L1D_SEC_Trace_Filter, 3, 0x08)))
#define ChkL1ClsFltr_L1D_SEC_L1D_PCH_H()	(ChkL1ModFltr_L1D_SEC()&&(FILTER_CHECK(L1D_SEC_Trace_Filter, 3, 0x10)))
#define ChkL1ClsFltr_L1D_SEC_L1D_DSP_FILTER_H()	(ChkL1ModFltr_L1D_SEC()&&(FILTER_CHECK(L1D_SEC_Trace_Filter, 3, 0x20)))
#define ChkL1ClsFltr_L1D_SEC_L1D_CD_2nd_H()	(ChkL1ModFltr_L1D_SEC()&&(FILTER_CHECK(L1D_SEC_Trace_Filter, 3, 0x40)))
#define ChkL1ClsFltr_L1D_SEC_Tx_ARFCN_TA_H()	(ChkL1ModFltr_L1D_SEC()&&(FILTER_CHECK(L1D_SEC_Trace_Filter, 3, 0x80)))
#define ChkL1ClsFltr_L1D_SEC_L1D_Timing_Check_H()	(ChkL1ModFltr_L1D_SEC()&&(FILTER_CHECK(L1D_SEC_Trace_Filter, 4, 0x01)))
#define ChkL1ClsFltr_L1D_SEC_PM_DONE_CHECK_H()	(ChkL1ModFltr_L1D_SEC()&&(FILTER_CHECK(L1D_SEC_Trace_Filter, 4, 0x02)))
#define ChkL1ClsFltr_L1D_SEC_FB_Search_H()	(ChkL1ModFltr_L1D_SEC()&&(FILTER_CHECK(L1D_SEC_Trace_Filter, 4, 0x04)))
#define ChkL1MsgFltr_L1I_Msg_AFC_Assert_Reason()	ChkL1ClsFltr_L1D_SEC_AFCdebug_H()
#define ChkL1MsgFltr_L1I_Msg_AFC_TQ_TIME()	ChkL1ClsFltr_L1D_SEC_AFCdebug_H()
#define ChkL1MsgFltr_L1I_Msg_AFC_Assert34()	ChkL1ClsFltr_L1D_SEC_AFCdebug_H()
#define ChkL1MsgFltr_L1I_Msg_AFC_Tid_MisMatch()	ChkL1ClsFltr_L1D_SEC_AFCdebug_H()
#define ChkL1MsgFltr_L1D_Trc_HIGHSNR_BADBLOCK()	ChkL1ClsFltr_L1D_SEC_L1D_GPRS_State_L()
#define ChkL1MsgFltr_L1D_SP_flag()	ChkL1ClsFltr_L1D_SEC_SP_flag_L()
#define ChkL1MsgFltr_L1D_SP_flag_Fsig_no_data_tx()	ChkL1ClsFltr_L1D_SEC_SP_flag_L()
#define ChkL1MsgFltr_L1I_DCM_status()	ChkL1ClsFltr_L1D_SEC_DCM_debug_L()
#define ChkL1MsgFltr_L1D_PCH_OK_AT_STATE()	ChkL1ClsFltr_L1D_SEC_L1D_PCH_H()
#define ChkL1MsgFltr_L1D_CCCH_OK_AT_STATE()	ChkL1ClsFltr_L1D_SEC_L1D_PCH_H()
#define ChkL1MsgFltr_L1D_PCH_One_Burst_Enable()	ChkL1ClsFltr_L1D_SEC_L1D_PCH_M()
#define ChkL1MsgFltr_L1D_PCH_Null_Detect()	ChkL1ClsFltr_L1D_SEC_L1D_PCH_M()
#define ChkL1MsgFltr_L1D_PCH_Empty_Detect()	ChkL1ClsFltr_L1D_SEC_L1D_PCH_M()
#define ChkL1MsgFltr_L1D_PCH_Pattern()	ChkL1ClsFltr_L1D_SEC_L1D_PCH_H()
#define ChkL1MsgFltr_L1D_TRC_PM()	ChkL1ClsFltr_L1D_SEC_L1D_PM_M()
#define ChkL1MsgFltr_L1D_Trc_DP6TapEQStatus()	ChkL1ClsFltr_L1D_SEC_L1D_DSP_COMMON2_L()
#define ChkL1MsgFltr_L1D_DSP_WATCH_DOG()	ChkL1ClsFltr_L1D_SEC_L1D_PCH_H()
#define ChkL1MsgFltr_L1D_DSP_RX_FILTER()	ChkL1ClsFltr_L1D_SEC_L1D_DSP_FILTER_H()
#define ChkL1MsgFltr_L1D_Trc_CD2nd_CRC_Pass()	ChkL1ClsFltr_L1D_SEC_L1D_CD_2nd_H()
#define ChkL1MsgFltr_L1D_Trc_Timing_Check_Fail_v1()	ChkL1ClsFltr_L1D_SEC_L1D_Timing_Check_H()
#define ChkL1MsgFltr_L1D_Trc_Timing_Check_Fail_v2()	ChkL1ClsFltr_L1D_SEC_L1D_Timing_Check_H()
#define ChkL1MsgFltr_L1D_Trc_Execute_Timing_Check()	ChkL1ClsFltr_L1D_SEC_L1D_Timing_Check_H()
#define ChkL1MsgFltr_L1D_Trc_DSP_PM_Not_Done()	ChkL1ClsFltr_L1D_SEC_PM_DONE_CHECK_H()
#define ChkL1MsgFltr_L1D_Trc_AFC_DAC_Data()	ChkL1ClsFltr_L1D_SEC_AFC_DAC_L()
#define ChkL1MsgFltr_L1D_Trc_MPLL_FH()	ChkL1ClsFltr_L1D_SEC_L1D_MPLL_FH_L()
#define ChkL1MsgFltr_L1D_Trc_LCD_Collision()	ChkL1ClsFltr_L1D_SEC_L1D_MPLL_FH_L()
#define ChkL1MsgFltr_L1D_Trc_TXPC()	ChkL1ClsFltr_L1D_SEC_L1D_TXPC_L()
#define ChkL1MsgFltr_L1D_Trc_TXPC_EDGE()	ChkL1ClsFltr_L1D_SEC_L1D_TXPC_M()
#define ChkL1MsgFltr_L1D_Trc_TXPC_DAC()	ChkL1ClsFltr_L1D_SEC_L1D_TXPC_M()
#define ChkL1MsgFltr_L1D_Trc_Rollback_db()	ChkL1ClsFltr_L1D_SEC_L1D_TXPC_M()


#endif
