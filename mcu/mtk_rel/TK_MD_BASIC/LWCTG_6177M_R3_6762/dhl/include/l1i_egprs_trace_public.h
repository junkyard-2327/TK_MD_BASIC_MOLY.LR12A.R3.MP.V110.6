#ifndef L1TRC_L1I_EGPRS_PUBLIC_DEF_H
#define L1TRC_L1I_EGPRS_PUBLIC_DEF_H

/******************************/
/* String category definition */
/******************************/
#define L1I_EGPRS_Str_Bool(v1)  (unsigned char)(v1+0)
#define L1I_Str_TBF_Direct(v1)  (unsigned char)(v1+2)
#define L1I_Str_MAC_Grant(v1)  (unsigned char)(v1+5)
#define L1C_Str_restart_bsic_type(v1)  (unsigned char)(v1+8)


/****************************/
/* Message macro definition */
/****************************/
#include "L1Trc.h"
#if defined(L1_CATCHER)
	#define L1I_Trace_UL_Header1(v1, v2, v3, v4, v5, v6, v7) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1I_EGPRS_PUBLIC_Trace_Filter, 1, 0x01);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0073,0x0073);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v7,v7);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1I_EGPRS_PUBLIC_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define L1I_Trace_UL_Header1(v1, v2, v3, v4, v5, v6, v7)
#endif

#if defined(L1_CATCHER)
	#define L1I_Trace_UL_Header2(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1I_EGPRS_PUBLIC_Trace_Filter, 1, 0x01);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0173,0x0173);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1I_EGPRS_PUBLIC_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define L1I_Trace_UL_Header2(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER)
	#define L1I_Trace_UL_Header3(v1, v2, v3, v4, v5, v6) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1I_EGPRS_PUBLIC_Trace_Filter, 1, 0x01);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0273,0x0273);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1I_EGPRS_PUBLIC_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define L1I_Trace_UL_Header3(v1, v2, v3, v4, v5, v6)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define L1I_Trace_EGPRS_PDAN(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1I_EGPRS_PUBLIC_Trace_Filter, 1, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0373,0x0373);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1I_EGPRS_PUBLIC_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define L1I_Trace_EGPRS_PDAN(v1, v2, v3, v4)
#endif



/*******************************/
/* declaration of filter array */
/*******************************/
EXTERN_TMD_FILTER(unsigned char, L1I_EGPRS_PUBLIC_Trace_Filter, 5);
/*************************/
/* Function declarations */
/*************************/
#ifdef L1_CATCHER

void Set_L1I_EGPRS_PUBLIC_Filter(unsigned char *setting);

#endif

/************************************/
/* Filter checking API declarations */
/************************************/

#define ChkL1ModFltr_L1I_EGPRS_PUBLIC()	(FILTER_CHECK(L1I_EGPRS_PUBLIC_Trace_Filter, 0, 1))
#define ChkL1ClsFltr_L1I_EGPRS_PUBLIC_UL_Block_H()	(ChkL1ModFltr_L1I_EGPRS_PUBLIC()&&(FILTER_CHECK(L1I_EGPRS_PUBLIC_Trace_Filter, 1, 0x01)))
#define ChkL1ClsFltr_L1I_EGPRS_PUBLIC_U2_header_L()	(ChkL1ModFltr_L1I_EGPRS_PUBLIC()&&(FILTER_CHECK(L1I_EGPRS_PUBLIC_Trace_Filter, 1, 0x02)))
#define ChkL1ClsFltr_L1I_EGPRS_PUBLIC_IRParams_M()	(ChkL1ModFltr_L1I_EGPRS_PUBLIC()&&(FILTER_CHECK(L1I_EGPRS_PUBLIC_Trace_Filter, 1, 0x04)))
#define ChkL1ClsFltr_L1I_EGPRS_PUBLIC_EGPRS_PDAN_L()	(ChkL1ModFltr_L1I_EGPRS_PUBLIC()&&(FILTER_CHECK(L1I_EGPRS_PUBLIC_Trace_Filter, 1, 0x08)))
#define ChkL1ClsFltr_L1I_EGPRS_PUBLIC_U1_cps_L()	(ChkL1ModFltr_L1I_EGPRS_PUBLIC()&&(FILTER_CHECK(L1I_EGPRS_PUBLIC_Trace_Filter, 1, 0x10)))
#define ChkL1ClsFltr_L1I_EGPRS_PUBLIC_SRB_L()	(ChkL1ModFltr_L1I_EGPRS_PUBLIC()&&(FILTER_CHECK(L1I_EGPRS_PUBLIC_Trace_Filter, 1, 0x20)))
#define ChkL1ClsFltr_L1I_EGPRS_PUBLIC_PR_TFI_L()	(ChkL1ModFltr_L1I_EGPRS_PUBLIC()&&(FILTER_CHECK(L1I_EGPRS_PUBLIC_Trace_Filter, 1, 0x40)))
#define ChkL1ClsFltr_L1I_EGPRS_PUBLIC_newTBFtid_M()	(ChkL1ModFltr_L1I_EGPRS_PUBLIC()&&(FILTER_CHECK(L1I_EGPRS_PUBLIC_Trace_Filter, 1, 0x80)))
#define ChkL1ClsFltr_L1I_EGPRS_PUBLIC_U2_data_L()	(ChkL1ModFltr_L1I_EGPRS_PUBLIC()&&(FILTER_CHECK(L1I_EGPRS_PUBLIC_Trace_Filter, 2, 0x01)))
#define ChkL1ClsFltr_L1I_EGPRS_PUBLIC_TAC_M()	(ChkL1ModFltr_L1I_EGPRS_PUBLIC()&&(FILTER_CHECK(L1I_EGPRS_PUBLIC_Trace_Filter, 2, 0x02)))
#define ChkL1ClsFltr_L1I_EGPRS_PUBLIC_MTBF_M()	(ChkL1ModFltr_L1I_EGPRS_PUBLIC()&&(FILTER_CHECK(L1I_EGPRS_PUBLIC_Trace_Filter, 2, 0x04)))
#define ChkL1ClsFltr_L1I_EGPRS_PUBLIC_GEMINI20_M()	(ChkL1ModFltr_L1I_EGPRS_PUBLIC()&&(FILTER_CHECK(L1I_EGPRS_PUBLIC_Trace_Filter, 2, 0x08)))
#define ChkL1ClsFltr_L1I_EGPRS_PUBLIC_DL_Block_M()	(ChkL1ModFltr_L1I_EGPRS_PUBLIC()&&(FILTER_CHECK(L1I_EGPRS_PUBLIC_Trace_Filter, 2, 0x10)))
#define ChkL1MsgFltr_L1I_Trace_UL_Header1()	ChkL1ClsFltr_L1I_EGPRS_PUBLIC_UL_Block_H()
#define ChkL1MsgFltr_L1I_Trace_UL_Header2()	ChkL1ClsFltr_L1I_EGPRS_PUBLIC_UL_Block_H()
#define ChkL1MsgFltr_L1I_Trace_UL_Header3()	ChkL1ClsFltr_L1I_EGPRS_PUBLIC_UL_Block_H()
#define ChkL1MsgFltr_L1I_Trace_EGPRS_PDAN()	ChkL1ClsFltr_L1I_EGPRS_PUBLIC_EGPRS_PDAN_L()


#endif
