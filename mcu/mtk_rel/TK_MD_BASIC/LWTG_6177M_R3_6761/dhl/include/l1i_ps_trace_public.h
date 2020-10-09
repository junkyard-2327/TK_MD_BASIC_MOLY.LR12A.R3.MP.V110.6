#ifndef L1TRC_L1I_GPRS_PUBLIC_DEF_H
#define L1TRC_L1I_GPRS_PUBLIC_DEF_H

/******************************/
/* String category definition */
/******************************/
#define L1I_GPRS_Str_Bool(v1)  (unsigned char)(v1+0)
#define L1I_PRACH_Str_States(v1)  (unsigned char)(v1+2)
#define L1I_TBF_Str_States(v1)  (unsigned char)(v1+8)
#define L1I_Str_GPRS_UL_CtrlMsg(v1)  (unsigned char)(v1+14)
#define L1I_Str_Check_RRBP(v1)  (unsigned char)(v1+28)


/****************************/
/* Message macro definition */
/****************************/
#include "L1Trc.h"
#if defined(L1_CATCHER)
	#define L1I_Trace_ReportPollResp(v1, v2, v3, v4, v5, v6) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1I_GPRS_PUBLIC_Trace_Filter, 1, 0x40);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0059,0x0059);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1I_GPRS_PUBLIC_Trace_Filter, 1, 0x40);\
		}\
	} while(0)
#else
	#define L1I_Trace_ReportPollResp(v1, v2, v3, v4, v5, v6)
#endif

#if defined(L1_CATCHER)
	#define L1I_Trace_ReportSingleDL(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1I_GPRS_PUBLIC_Trace_Filter, 1, 0x80);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0159,0x0159);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1I_GPRS_PUBLIC_Trace_Filter, 1, 0x80);\
		}\
	} while(0)
#else
	#define L1I_Trace_ReportSingleDL(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define L1I_Trace_ReportULTwoPhase(v1, v2, v3, v4, v5, v6) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1I_GPRS_PUBLIC_Trace_Filter, 2, 0x01);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0259,0x0259);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1I_GPRS_PUBLIC_Trace_Filter, 2, 0x01);\
		}\
	} while(0)
#else
	#define L1I_Trace_ReportULTwoPhase(v1, v2, v3, v4, v5, v6)
#endif

#if defined(L1_CATCHER)
	#define L1I_Trace_ReportULWithoutTBF(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1I_GPRS_PUBLIC_Trace_Filter, 2, 0x02);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0359,0x0359);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1I_GPRS_PUBLIC_Trace_Filter, 2, 0x02);\
		}\
	} while(0)
#else
	#define L1I_Trace_ReportULWithoutTBF(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER)
	#define L1I_Trace_MACTxSpec(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1I_GPRS_PUBLIC_Trace_Filter, 2, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0459,0x0459);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1I_GPRS_PUBLIC_Trace_Filter, 2, 0x04);\
		}\
	} while(0)
#else
	#define L1I_Trace_MACTxSpec(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define L1I_Trace_UL_DATA(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1I_GPRS_PUBLIC_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0559,0x0559);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1I_GPRS_PUBLIC_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define L1I_Trace_UL_DATA(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define L1I_Trace_UL_Ctrl(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1I_GPRS_PUBLIC_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0659,0x0659);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1I_GPRS_PUBLIC_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define L1I_Trace_UL_Ctrl(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define L1I_Trace_PDAN(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1I_GPRS_PUBLIC_Trace_Filter, 3, 0x20);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0759,0x0759);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v7,v7);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v8,v8);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v9,v9);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v10,v10);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v11,v11);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v12,v12);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1I_GPRS_PUBLIC_Trace_Filter, 3, 0x20);\
		}\
	} while(0)
#else
	#define L1I_Trace_PDAN(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12)
#endif

#if defined(L1_CATCHER)
	#define L1I_Trace_PCA_AB(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1I_GPRS_PUBLIC_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0859,0x0859);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1I_GPRS_PUBLIC_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define L1I_Trace_PCA_AB(v1)
#endif



/*******************************/
/* declaration of filter array */
/*******************************/
EXTERN_TMD_FILTER(unsigned char, L1I_GPRS_PUBLIC_Trace_Filter, 5);
/*************************/
/* Function declarations */
/*************************/
#ifdef L1_CATCHER

void Set_L1I_GPRS_PUBLIC_Filter(unsigned char *setting);

#endif

/************************************/
/* Filter checking API declarations */
/************************************/

#define ChkL1ModFltr_L1I_GPRS_PUBLIC()	(FILTER_CHECK(L1I_GPRS_PUBLIC_Trace_Filter, 0, 1))
#define ChkL1ClsFltr_L1I_GPRS_PUBLIC_C_Value_M()	(ChkL1ModFltr_L1I_GPRS_PUBLIC()&&(FILTER_CHECK(L1I_GPRS_PUBLIC_Trace_Filter, 1, 0x01)))
#define ChkL1ClsFltr_L1I_GPRS_PUBLIC_UL_Block_H()	(ChkL1ModFltr_L1I_GPRS_PUBLIC()&&(FILTER_CHECK(L1I_GPRS_PUBLIC_Trace_Filter, 1, 0x02)))
#define ChkL1ClsFltr_L1I_GPRS_PUBLIC_ReportTBF_M()	(ChkL1ModFltr_L1I_GPRS_PUBLIC()&&(FILTER_CHECK(L1I_GPRS_PUBLIC_Trace_Filter, 1, 0x04)))
#define ChkL1ClsFltr_L1I_GPRS_PUBLIC_ReportTBF_H()	(ChkL1ModFltr_L1I_GPRS_PUBLIC()&&(FILTER_CHECK(L1I_GPRS_PUBLIC_Trace_Filter, 1, 0x08)))
#define ChkL1ClsFltr_L1I_GPRS_PUBLIC_ReportPDTChConflict_H()	(ChkL1ModFltr_L1I_GPRS_PUBLIC()&&(FILTER_CHECK(L1I_GPRS_PUBLIC_Trace_Filter, 1, 0x10)))
#define ChkL1ClsFltr_L1I_GPRS_PUBLIC_ReportPRACh_M()	(ChkL1ModFltr_L1I_GPRS_PUBLIC()&&(FILTER_CHECK(L1I_GPRS_PUBLIC_Trace_Filter, 1, 0x20)))
#define ChkL1ClsFltr_L1I_GPRS_PUBLIC_ReportPollResp_H()	(ChkL1ModFltr_L1I_GPRS_PUBLIC()&&(FILTER_CHECK(L1I_GPRS_PUBLIC_Trace_Filter, 1, 0x40)))
#define ChkL1ClsFltr_L1I_GPRS_PUBLIC_ReportSingleDL_H()	(ChkL1ModFltr_L1I_GPRS_PUBLIC()&&(FILTER_CHECK(L1I_GPRS_PUBLIC_Trace_Filter, 1, 0x80)))
#define ChkL1ClsFltr_L1I_GPRS_PUBLIC_ReportULTwoPhase_H()	(ChkL1ModFltr_L1I_GPRS_PUBLIC()&&(FILTER_CHECK(L1I_GPRS_PUBLIC_Trace_Filter, 2, 0x01)))
#define ChkL1ClsFltr_L1I_GPRS_PUBLIC_ReportSingleULWithoutTBF_H()	(ChkL1ModFltr_L1I_GPRS_PUBLIC()&&(FILTER_CHECK(L1I_GPRS_PUBLIC_Trace_Filter, 2, 0x02)))
#define ChkL1ClsFltr_L1I_GPRS_PUBLIC_L1D_Constellation_H()	(ChkL1ModFltr_L1I_GPRS_PUBLIC()&&(FILTER_CHECK(L1I_GPRS_PUBLIC_Trace_Filter, 2, 0x04)))
#define ChkL1ClsFltr_L1I_GPRS_PUBLIC_mpal_uplink_transfer_H()	(ChkL1ModFltr_L1I_GPRS_PUBLIC()&&(FILTER_CHECK(L1I_GPRS_PUBLIC_Trace_Filter, 2, 0x08)))
#define ChkL1ClsFltr_L1I_GPRS_PUBLIC_mpal_ul_status_report_H()	(ChkL1ModFltr_L1I_GPRS_PUBLIC()&&(FILTER_CHECK(L1I_GPRS_PUBLIC_Trace_Filter, 2, 0x10)))
#define ChkL1ClsFltr_L1I_GPRS_PUBLIC_mpal_next_rrbp_frame_no_M()	(ChkL1ModFltr_L1I_GPRS_PUBLIC()&&(FILTER_CHECK(L1I_GPRS_PUBLIC_Trace_Filter, 2, 0x20)))
#define ChkL1ClsFltr_L1I_GPRS_PUBLIC_L1I_UpdateTimingAdvance_M()	(ChkL1ModFltr_L1I_GPRS_PUBLIC()&&(FILTER_CHECK(L1I_GPRS_PUBLIC_Trace_Filter, 2, 0x40)))
#define ChkL1ClsFltr_L1I_GPRS_PUBLIC_L1I_MACFrameTick_L()	(ChkL1ModFltr_L1I_GPRS_PUBLIC()&&(FILTER_CHECK(L1I_GPRS_PUBLIC_Trace_Filter, 2, 0x80)))
#define ChkL1ClsFltr_L1I_GPRS_PUBLIC_SetReceivedUSF_L()	(ChkL1ModFltr_L1I_GPRS_PUBLIC()&&(FILTER_CHECK(L1I_GPRS_PUBLIC_Trace_Filter, 3, 0x01)))
#define ChkL1ClsFltr_L1I_GPRS_PUBLIC_OurUSFMask_L()	(ChkL1ModFltr_L1I_GPRS_PUBLIC()&&(FILTER_CHECK(L1I_GPRS_PUBLIC_Trace_Filter, 3, 0x02)))
#define ChkL1ClsFltr_L1I_GPRS_PUBLIC_PR_Payload_Type_L()	(ChkL1ModFltr_L1I_GPRS_PUBLIC()&&(FILTER_CHECK(L1I_GPRS_PUBLIC_Trace_Filter, 3, 0x04)))
#define ChkL1ClsFltr_L1I_GPRS_PUBLIC_PR_TFI_L()	(ChkL1ModFltr_L1I_GPRS_PUBLIC()&&(FILTER_CHECK(L1I_GPRS_PUBLIC_Trace_Filter, 3, 0x08)))
#define ChkL1ClsFltr_L1I_GPRS_PUBLIC_Block_AGC_L()	(ChkL1ModFltr_L1I_GPRS_PUBLIC()&&(FILTER_CHECK(L1I_GPRS_PUBLIC_Trace_Filter, 3, 0x10)))
#define ChkL1ClsFltr_L1I_GPRS_PUBLIC_UL_Ctrl_Block_L()	(ChkL1ModFltr_L1I_GPRS_PUBLIC()&&(FILTER_CHECK(L1I_GPRS_PUBLIC_Trace_Filter, 3, 0x20)))
#define ChkL1MsgFltr_L1I_Trace_ReportPollResp()	ChkL1ClsFltr_L1I_GPRS_PUBLIC_ReportPollResp_H()
#define ChkL1MsgFltr_L1I_Trace_ReportSingleDL()	ChkL1ClsFltr_L1I_GPRS_PUBLIC_ReportSingleDL_H()
#define ChkL1MsgFltr_L1I_Trace_ReportULTwoPhase()	ChkL1ClsFltr_L1I_GPRS_PUBLIC_ReportULTwoPhase_H()
#define ChkL1MsgFltr_L1I_Trace_ReportULWithoutTBF()	ChkL1ClsFltr_L1I_GPRS_PUBLIC_ReportSingleULWithoutTBF_H()
#define ChkL1MsgFltr_L1I_Trace_MACTxSpec()	ChkL1ClsFltr_L1I_GPRS_PUBLIC_L1D_Constellation_H()
#define ChkL1MsgFltr_L1I_Trace_UL_DATA()	ChkL1ClsFltr_L1I_GPRS_PUBLIC_UL_Block_H()
#define ChkL1MsgFltr_L1I_Trace_UL_Ctrl()	ChkL1ClsFltr_L1I_GPRS_PUBLIC_UL_Block_H()
#define ChkL1MsgFltr_L1I_Trace_PDAN()	ChkL1ClsFltr_L1I_GPRS_PUBLIC_UL_Ctrl_Block_L()
#define ChkL1MsgFltr_L1I_Trace_PCA_AB()	ChkL1ClsFltr_L1I_GPRS_PUBLIC_UL_Block_H()


#endif
