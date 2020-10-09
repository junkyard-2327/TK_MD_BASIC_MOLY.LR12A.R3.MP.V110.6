#ifndef L1TRC_L1D_SEC_PUBLIC_DEF_H
#define L1TRC_L1D_SEC_PUBLIC_DEF_H

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
	#define L1D_SB_Status_Extend(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1D_SEC_PUBLIC_Trace_Filter, 3, 0x08);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0061,0x0061);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v7,v7);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v8,v8);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v9,v9);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v10,v10);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1D_SEC_PUBLIC_Trace_Filter, 3, 0x08);\
		}\
	} while(0)
#else
	#define L1D_SB_Status_Extend(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10)
#endif

#if defined(L1_CATCHER)
	#define L1D_SB_Enhance_Status(v1, v2, v3, v4, v5, v6) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1D_SEC_PUBLIC_Trace_Filter, 3, 0x08);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0161,0x0161);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1D_SEC_PUBLIC_Trace_Filter, 3, 0x08);\
		}\
	} while(0)
#else
	#define L1D_SB_Enhance_Status(v1, v2, v3, v4, v5, v6)
#endif

#if defined(L1_CATCHER)
	#define L1D_Trc_Tx_ARFCN_TA(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1D_SEC_PUBLIC_Trace_Filter, 3, 0x80);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0261,0x0261);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1D_SEC_PUBLIC_Trace_Filter, 3, 0x80);\
		}\
	} while(0)
#else
	#define L1D_Trc_Tx_ARFCN_TA(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define L1D_Trc_FCCh_Start(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1D_SEC_PUBLIC_Trace_Filter, 4, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0361,0x0361);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1D_SEC_PUBLIC_Trace_Filter, 4, 0x04);\
		}\
	} while(0)
#else
	#define L1D_Trc_FCCh_Start(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define L1D_Trc_FCCh_Stop(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1D_SEC_PUBLIC_Trace_Filter, 4, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0461,0x0461);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1D_SEC_PUBLIC_Trace_Filter, 4, 0x04);\
		}\
	} while(0)
#else
	#define L1D_Trc_FCCh_Stop(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define L1D_Trc_FB_False_Alarm(v1, v2, v3, v4, v5, v6) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1D_SEC_PUBLIC_Trace_Filter, 4, 0x04);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0561,0x0561);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1D_SEC_PUBLIC_Trace_Filter, 4, 0x04);\
		}\
	} while(0)
#else
	#define L1D_Trc_FB_False_Alarm(v1, v2, v3, v4, v5, v6)
#endif



/*******************************/
/* declaration of filter array */
/*******************************/
EXTERN_TMD_FILTER(unsigned char, L1D_SEC_PUBLIC_Trace_Filter, 5);
/*************************/
/* Function declarations */
/*************************/
#ifdef L1_CATCHER

void Set_L1D_SEC_PUBLIC_Filter(unsigned char *setting);

#endif

/************************************/
/* Filter checking API declarations */
/************************************/

#define ChkL1ModFltr_L1D_SEC_PUBLIC()	(FILTER_CHECK(L1D_SEC_PUBLIC_Trace_Filter, 0, 1))
#define ChkL1ClsFltr_L1D_SEC_PUBLIC_AFCdebug_M()	(ChkL1ModFltr_L1D_SEC_PUBLIC()&&(FILTER_CHECK(L1D_SEC_PUBLIC_Trace_Filter, 1, 0x01)))
#define ChkL1ClsFltr_L1D_SEC_PUBLIC_L1D_SB_Extend_M()	(ChkL1ModFltr_L1D_SEC_PUBLIC()&&(FILTER_CHECK(L1D_SEC_PUBLIC_Trace_Filter, 1, 0x02)))
#define ChkL1ClsFltr_L1D_SEC_PUBLIC_L1D_GPRS_State_L()	(ChkL1ModFltr_L1D_SEC_PUBLIC()&&(FILTER_CHECK(L1D_SEC_PUBLIC_Trace_Filter, 1, 0x04)))
#define ChkL1ClsFltr_L1D_SEC_PUBLIC_SP_flag_L()	(ChkL1ModFltr_L1D_SEC_PUBLIC()&&(FILTER_CHECK(L1D_SEC_PUBLIC_Trace_Filter, 1, 0x08)))
#define ChkL1ClsFltr_L1D_SEC_PUBLIC_DCM_debug_L()	(ChkL1ModFltr_L1D_SEC_PUBLIC()&&(FILTER_CHECK(L1D_SEC_PUBLIC_Trace_Filter, 1, 0x10)))
#define ChkL1ClsFltr_L1D_SEC_PUBLIC_L1D_PCH_M()	(ChkL1ModFltr_L1D_SEC_PUBLIC()&&(FILTER_CHECK(L1D_SEC_PUBLIC_Trace_Filter, 1, 0x20)))
#define ChkL1ClsFltr_L1D_SEC_PUBLIC_L1D_PM_M()	(ChkL1ModFltr_L1D_SEC_PUBLIC()&&(FILTER_CHECK(L1D_SEC_PUBLIC_Trace_Filter, 1, 0x40)))
#define ChkL1ClsFltr_L1D_SEC_PUBLIC_L1D_DSP_COMMON2_L()	(ChkL1ModFltr_L1D_SEC_PUBLIC()&&(FILTER_CHECK(L1D_SEC_PUBLIC_Trace_Filter, 1, 0x80)))
#define ChkL1ClsFltr_L1D_SEC_PUBLIC_L1D_DSP_FILTER_M()	(ChkL1ModFltr_L1D_SEC_PUBLIC()&&(FILTER_CHECK(L1D_SEC_PUBLIC_Trace_Filter, 2, 0x01)))
#define ChkL1ClsFltr_L1D_SEC_PUBLIC_L1D_CD_2nd_M()	(ChkL1ModFltr_L1D_SEC_PUBLIC()&&(FILTER_CHECK(L1D_SEC_PUBLIC_Trace_Filter, 2, 0x02)))
#define ChkL1ClsFltr_L1D_SEC_PUBLIC_Tx_ARFCN_TA_M()	(ChkL1ModFltr_L1D_SEC_PUBLIC()&&(FILTER_CHECK(L1D_SEC_PUBLIC_Trace_Filter, 2, 0x04)))
#define ChkL1ClsFltr_L1D_SEC_PUBLIC_FB_Search_M()	(ChkL1ModFltr_L1D_SEC_PUBLIC()&&(FILTER_CHECK(L1D_SEC_PUBLIC_Trace_Filter, 2, 0x08)))
#define ChkL1ClsFltr_L1D_SEC_PUBLIC_L1D_Timing_Check_M()	(ChkL1ModFltr_L1D_SEC_PUBLIC()&&(FILTER_CHECK(L1D_SEC_PUBLIC_Trace_Filter, 2, 0x10)))
#define ChkL1ClsFltr_L1D_SEC_PUBLIC_PM_DONE_CHECK_M()	(ChkL1ModFltr_L1D_SEC_PUBLIC()&&(FILTER_CHECK(L1D_SEC_PUBLIC_Trace_Filter, 2, 0x20)))
#define ChkL1ClsFltr_L1D_SEC_PUBLIC_AFC_DAC_L()	(ChkL1ModFltr_L1D_SEC_PUBLIC()&&(FILTER_CHECK(L1D_SEC_PUBLIC_Trace_Filter, 2, 0x40)))
#define ChkL1ClsFltr_L1D_SEC_PUBLIC_L1D_MPLL_FH_L()	(ChkL1ModFltr_L1D_SEC_PUBLIC()&&(FILTER_CHECK(L1D_SEC_PUBLIC_Trace_Filter, 2, 0x80)))
#define ChkL1ClsFltr_L1D_SEC_PUBLIC_L1D_TXPC_M()	(ChkL1ModFltr_L1D_SEC_PUBLIC()&&(FILTER_CHECK(L1D_SEC_PUBLIC_Trace_Filter, 3, 0x01)))
#define ChkL1ClsFltr_L1D_SEC_PUBLIC_L1D_TXPC_L()	(ChkL1ModFltr_L1D_SEC_PUBLIC()&&(FILTER_CHECK(L1D_SEC_PUBLIC_Trace_Filter, 3, 0x02)))
#define ChkL1ClsFltr_L1D_SEC_PUBLIC_AFCdebug_H()	(ChkL1ModFltr_L1D_SEC_PUBLIC()&&(FILTER_CHECK(L1D_SEC_PUBLIC_Trace_Filter, 3, 0x04)))
#define ChkL1ClsFltr_L1D_SEC_PUBLIC_L1D_SB_Extend_H()	(ChkL1ModFltr_L1D_SEC_PUBLIC()&&(FILTER_CHECK(L1D_SEC_PUBLIC_Trace_Filter, 3, 0x08)))
#define ChkL1ClsFltr_L1D_SEC_PUBLIC_L1D_PCH_H()	(ChkL1ModFltr_L1D_SEC_PUBLIC()&&(FILTER_CHECK(L1D_SEC_PUBLIC_Trace_Filter, 3, 0x10)))
#define ChkL1ClsFltr_L1D_SEC_PUBLIC_L1D_DSP_FILTER_H()	(ChkL1ModFltr_L1D_SEC_PUBLIC()&&(FILTER_CHECK(L1D_SEC_PUBLIC_Trace_Filter, 3, 0x20)))
#define ChkL1ClsFltr_L1D_SEC_PUBLIC_L1D_CD_2nd_H()	(ChkL1ModFltr_L1D_SEC_PUBLIC()&&(FILTER_CHECK(L1D_SEC_PUBLIC_Trace_Filter, 3, 0x40)))
#define ChkL1ClsFltr_L1D_SEC_PUBLIC_Tx_ARFCN_TA_H()	(ChkL1ModFltr_L1D_SEC_PUBLIC()&&(FILTER_CHECK(L1D_SEC_PUBLIC_Trace_Filter, 3, 0x80)))
#define ChkL1ClsFltr_L1D_SEC_PUBLIC_L1D_Timing_Check_H()	(ChkL1ModFltr_L1D_SEC_PUBLIC()&&(FILTER_CHECK(L1D_SEC_PUBLIC_Trace_Filter, 4, 0x01)))
#define ChkL1ClsFltr_L1D_SEC_PUBLIC_PM_DONE_CHECK_H()	(ChkL1ModFltr_L1D_SEC_PUBLIC()&&(FILTER_CHECK(L1D_SEC_PUBLIC_Trace_Filter, 4, 0x02)))
#define ChkL1ClsFltr_L1D_SEC_PUBLIC_FB_Search_H()	(ChkL1ModFltr_L1D_SEC_PUBLIC()&&(FILTER_CHECK(L1D_SEC_PUBLIC_Trace_Filter, 4, 0x04)))
#define ChkL1MsgFltr_L1D_SB_Status_Extend()	ChkL1ClsFltr_L1D_SEC_PUBLIC_L1D_SB_Extend_H()
#define ChkL1MsgFltr_L1D_SB_Enhance_Status()	ChkL1ClsFltr_L1D_SEC_PUBLIC_L1D_SB_Extend_H()
#define ChkL1MsgFltr_L1D_Trc_Tx_ARFCN_TA()	ChkL1ClsFltr_L1D_SEC_PUBLIC_Tx_ARFCN_TA_H()
#define ChkL1MsgFltr_L1D_Trc_FCCh_Start()	ChkL1ClsFltr_L1D_SEC_PUBLIC_FB_Search_H()
#define ChkL1MsgFltr_L1D_Trc_FCCh_Stop()	ChkL1ClsFltr_L1D_SEC_PUBLIC_FB_Search_H()
#define ChkL1MsgFltr_L1D_Trc_FB_False_Alarm()	ChkL1ClsFltr_L1D_SEC_PUBLIC_FB_Search_H()


#endif
