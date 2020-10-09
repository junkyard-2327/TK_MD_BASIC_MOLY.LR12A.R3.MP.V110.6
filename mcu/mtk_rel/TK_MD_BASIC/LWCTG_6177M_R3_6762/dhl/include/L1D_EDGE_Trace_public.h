#ifndef L1TRC_L1D_EDGE_PUBLIC_DEF_H
#define L1TRC_L1D_EDGE_PUBLIC_DEF_H

/******************************/
/* String category definition */
/******************************/
#define L1D_Str_FBM_PROC(v1)  (unsigned char)(v1+0)
#define L1D_Str_RTTI(v1)  (unsigned char)(v1+8)


/****************************/
/* Message macro definition */
/****************************/
#include "L1Trc.h"
#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define L1D_Trc_EDGE_USF(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1D_EDGE_PUBLIC_Trace_Filter, 2, 0x20);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0071,0x0071);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1D_EDGE_PUBLIC_Trace_Filter, 2, 0x20);\
		}\
	} while(0)
#else
	#define L1D_Trc_EDGE_USF(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define L1D_Trc_SAIC_SNR(v1, v2, v3, v4, v5, v6, v7, v8) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1D_EDGE_PUBLIC_Trace_Filter, 4, 0x08);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0171,0x0171);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v7,v7);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v8,v8);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1D_EDGE_PUBLIC_Trace_Filter, 4, 0x08);\
		}\
	} while(0)
#else
	#define L1D_Trc_SAIC_SNR(v1, v2, v3, v4, v5, v6, v7, v8)
#endif



/*******************************/
/* declaration of filter array */
/*******************************/
EXTERN_TMD_FILTER(unsigned char, L1D_EDGE_PUBLIC_Trace_Filter, 5);
/*************************/
/* Function declarations */
/*************************/
#ifdef L1_CATCHER

void Set_L1D_EDGE_PUBLIC_Filter(unsigned char *setting);

#endif

/************************************/
/* Filter checking API declarations */
/************************************/

#define ChkL1ModFltr_L1D_EDGE_PUBLIC()	(FILTER_CHECK(L1D_EDGE_PUBLIC_Trace_Filter, 0, 1))
#define ChkL1ClsFltr_L1D_EDGE_PUBLIC_L1D_EDGE_State_L()	(ChkL1ModFltr_L1D_EDGE_PUBLIC()&&(FILTER_CHECK(L1D_EDGE_PUBLIC_Trace_Filter, 1, 0x01)))
#define ChkL1ClsFltr_L1D_EDGE_PUBLIC_L1D_USF_Status_M()	(ChkL1ModFltr_L1D_EDGE_PUBLIC()&&(FILTER_CHECK(L1D_EDGE_PUBLIC_Trace_Filter, 1, 0x02)))
#define ChkL1ClsFltr_L1D_EDGE_PUBLIC_L1D_DSP_Modtype_L()	(ChkL1ModFltr_L1D_EDGE_PUBLIC()&&(FILTER_CHECK(L1D_EDGE_PUBLIC_Trace_Filter, 1, 0x04)))
#define ChkL1ClsFltr_L1D_EDGE_PUBLIC_L1D_DSP_Dvalue_M()	(ChkL1ModFltr_L1D_EDGE_PUBLIC()&&(FILTER_CHECK(L1D_EDGE_PUBLIC_Trace_Filter, 1, 0x08)))
#define ChkL1ClsFltr_L1D_EDGE_PUBLIC_L1D_TEST_SRB_L()	(ChkL1ModFltr_L1D_EDGE_PUBLIC()&&(FILTER_CHECK(L1D_EDGE_PUBLIC_Trace_Filter, 1, 0x10)))
#define ChkL1ClsFltr_L1D_EDGE_PUBLIC_L1D_USF_DEBUG_L()	(ChkL1ModFltr_L1D_EDGE_PUBLIC()&&(FILTER_CHECK(L1D_EDGE_PUBLIC_Trace_Filter, 1, 0x20)))
#define ChkL1ClsFltr_L1D_EDGE_PUBLIC_L1D_TX_AFC_DAC_M()	(ChkL1ModFltr_L1D_EDGE_PUBLIC()&&(FILTER_CHECK(L1D_EDGE_PUBLIC_Trace_Filter, 1, 0x40)))
#define ChkL1ClsFltr_L1D_EDGE_PUBLIC_L1D_IGain_Compen_L()	(ChkL1ModFltr_L1D_EDGE_PUBLIC()&&(FILTER_CHECK(L1D_EDGE_PUBLIC_Trace_Filter, 1, 0x80)))
#define ChkL1ClsFltr_L1D_EDGE_PUBLIC_L1D_IQ_Phase_Compen_L()	(ChkL1ModFltr_L1D_EDGE_PUBLIC()&&(FILTER_CHECK(L1D_EDGE_PUBLIC_Trace_Filter, 2, 0x01)))
#define ChkL1ClsFltr_L1D_EDGE_PUBLIC_L1D_NBRES_M()	(ChkL1ModFltr_L1D_EDGE_PUBLIC()&&(FILTER_CHECK(L1D_EDGE_PUBLIC_Trace_Filter, 2, 0x02)))
#define ChkL1ClsFltr_L1D_EDGE_PUBLIC_L1D_6229_FB_M()	(ChkL1ModFltr_L1D_EDGE_PUBLIC()&&(FILTER_CHECK(L1D_EDGE_PUBLIC_Trace_Filter, 2, 0x04)))
#define ChkL1ClsFltr_L1D_EDGE_PUBLIC_L1D_TX_MODULATION_M()	(ChkL1ModFltr_L1D_EDGE_PUBLIC()&&(FILTER_CHECK(L1D_EDGE_PUBLIC_Trace_Filter, 2, 0x08)))
#define ChkL1ClsFltr_L1D_EDGE_PUBLIC_L1D_RX_DC_Offset_M()	(ChkL1ModFltr_L1D_EDGE_PUBLIC()&&(FILTER_CHECK(L1D_EDGE_PUBLIC_Trace_Filter, 2, 0x10)))
#define ChkL1ClsFltr_L1D_EDGE_PUBLIC_L1D_EDGE_USF_L()	(ChkL1ModFltr_L1D_EDGE_PUBLIC()&&(FILTER_CHECK(L1D_EDGE_PUBLIC_Trace_Filter, 2, 0x20)))
#define ChkL1ClsFltr_L1D_EDGE_PUBLIC_L1D_SAIC_SNR_M()	(ChkL1ModFltr_L1D_EDGE_PUBLIC()&&(FILTER_CHECK(L1D_EDGE_PUBLIC_Trace_Filter, 2, 0x40)))
#define ChkL1ClsFltr_L1D_EDGE_PUBLIC_L1D_SAIC_FOE_M()	(ChkL1ModFltr_L1D_EDGE_PUBLIC()&&(FILTER_CHECK(L1D_EDGE_PUBLIC_Trace_Filter, 2, 0x80)))
#define ChkL1ClsFltr_L1D_EDGE_PUBLIC_L1D_SAIC_FWBW_SNR_L()	(ChkL1ModFltr_L1D_EDGE_PUBLIC()&&(FILTER_CHECK(L1D_EDGE_PUBLIC_Trace_Filter, 3, 0x01)))
#define ChkL1ClsFltr_L1D_EDGE_PUBLIC_L1D_SAIC_StaticDet_M()	(ChkL1ModFltr_L1D_EDGE_PUBLIC()&&(FILTER_CHECK(L1D_EDGE_PUBLIC_Trace_Filter, 3, 0x02)))
#define ChkL1ClsFltr_L1D_EDGE_PUBLIC_L1D_AM_Suppression_L()	(ChkL1ModFltr_L1D_EDGE_PUBLIC()&&(FILTER_CHECK(L1D_EDGE_PUBLIC_Trace_Filter, 3, 0x04)))
#define ChkL1ClsFltr_L1D_EDGE_PUBLIC_L1D_NSFT_H()	(ChkL1ModFltr_L1D_EDGE_PUBLIC()&&(FILTER_CHECK(L1D_EDGE_PUBLIC_Trace_Filter, 3, 0x08)))
#define ChkL1ClsFltr_L1D_EDGE_PUBLIC_L1D_RTTI_FANR_M()	(ChkL1ModFltr_L1D_EDGE_PUBLIC()&&(FILTER_CHECK(L1D_EDGE_PUBLIC_Trace_Filter, 3, 0x10)))
#define ChkL1ClsFltr_L1D_EDGE_PUBLIC_L1D_USF_Status_H()	(ChkL1ModFltr_L1D_EDGE_PUBLIC()&&(FILTER_CHECK(L1D_EDGE_PUBLIC_Trace_Filter, 3, 0x20)))
#define ChkL1ClsFltr_L1D_EDGE_PUBLIC_L1D_DSP_Dvalue_H()	(ChkL1ModFltr_L1D_EDGE_PUBLIC()&&(FILTER_CHECK(L1D_EDGE_PUBLIC_Trace_Filter, 3, 0x40)))
#define ChkL1ClsFltr_L1D_EDGE_PUBLIC_L1D_TX_AFC_DAC_H()	(ChkL1ModFltr_L1D_EDGE_PUBLIC()&&(FILTER_CHECK(L1D_EDGE_PUBLIC_Trace_Filter, 3, 0x80)))
#define ChkL1ClsFltr_L1D_EDGE_PUBLIC_L1D_NBRES_H()	(ChkL1ModFltr_L1D_EDGE_PUBLIC()&&(FILTER_CHECK(L1D_EDGE_PUBLIC_Trace_Filter, 4, 0x01)))
#define ChkL1ClsFltr_L1D_EDGE_PUBLIC_L1D_6229_FB_H()	(ChkL1ModFltr_L1D_EDGE_PUBLIC()&&(FILTER_CHECK(L1D_EDGE_PUBLIC_Trace_Filter, 4, 0x02)))
#define ChkL1ClsFltr_L1D_EDGE_PUBLIC_L1D_TX_MODULATION_H()	(ChkL1ModFltr_L1D_EDGE_PUBLIC()&&(FILTER_CHECK(L1D_EDGE_PUBLIC_Trace_Filter, 4, 0x04)))
#define ChkL1ClsFltr_L1D_EDGE_PUBLIC_L1D_SAIC_SNR_H()	(ChkL1ModFltr_L1D_EDGE_PUBLIC()&&(FILTER_CHECK(L1D_EDGE_PUBLIC_Trace_Filter, 4, 0x08)))
#define ChkL1ClsFltr_L1D_EDGE_PUBLIC_L1D_SAIC_FOE_H()	(ChkL1ModFltr_L1D_EDGE_PUBLIC()&&(FILTER_CHECK(L1D_EDGE_PUBLIC_Trace_Filter, 4, 0x10)))
#define ChkL1ClsFltr_L1D_EDGE_PUBLIC_L1D_SAIC_StaticDet_H()	(ChkL1ModFltr_L1D_EDGE_PUBLIC()&&(FILTER_CHECK(L1D_EDGE_PUBLIC_Trace_Filter, 4, 0x20)))
#define ChkL1MsgFltr_L1D_Trc_EDGE_USF()	ChkL1ClsFltr_L1D_EDGE_PUBLIC_L1D_EDGE_USF_L()
#define ChkL1MsgFltr_L1D_Trc_SAIC_SNR()	ChkL1ClsFltr_L1D_EDGE_PUBLIC_L1D_SAIC_SNR_H()


#endif
