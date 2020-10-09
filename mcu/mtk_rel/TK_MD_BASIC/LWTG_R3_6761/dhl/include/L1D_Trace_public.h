#ifndef L1TRC_L1D_PRI_PUBLIC_DEF_H
#define L1TRC_L1D_PRI_PUBLIC_DEF_H

/******************************/
/* String category definition */
/******************************/
#define L1C_Str_Bool(v1)  (unsigned char)(v1+0)
#define L1C_Str_SM_Handler(v1)  (unsigned char)(v1+2)
#define L1D_Str_CCH(v1)  (unsigned char)(v1+6)
#define L1D_Str_AGPS(v1)  (unsigned char)(v1+9)


/****************************/
/* Message macro definition */
/****************************/
#include "L1Trc.h"
#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define L1D_Trc_USF(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1D_PRI_PUBLIC_Trace_Filter, 3, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x005F,0x005F);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1D_PRI_PUBLIC_Trace_Filter, 3, 0x01);\
		}\
	} while(0)
#else
	#define L1D_Trc_USF(v1, v2, v3, v4)
#endif



/*******************************/
/* declaration of filter array */
/*******************************/
EXTERN_TMD_FILTER(unsigned char, L1D_PRI_PUBLIC_Trace_Filter, 5);
/*************************/
/* Function declarations */
/*************************/
#ifdef L1_CATCHER

void Set_L1D_PRI_PUBLIC_Filter(unsigned char *setting);

#endif

/************************************/
/* Filter checking API declarations */
/************************************/

#define ChkL1ModFltr_L1D_PRI_PUBLIC()	(FILTER_CHECK(L1D_PRI_PUBLIC_Trace_Filter, 0, 1))
#define ChkL1ClsFltr_L1D_PRI_PUBLIC_L1D_DSP_COMMON_L()	(ChkL1ModFltr_L1D_PRI_PUBLIC()&&(FILTER_CHECK(L1D_PRI_PUBLIC_Trace_Filter, 1, 0x01)))
#define ChkL1ClsFltr_L1D_PRI_PUBLIC_L1D_DSP_PROC_L()	(ChkL1ModFltr_L1D_PRI_PUBLIC()&&(FILTER_CHECK(L1D_PRI_PUBLIC_Trace_Filter, 1, 0x02)))
#define ChkL1ClsFltr_L1D_PRI_PUBLIC_L1D_DSP_INT_L()	(ChkL1ModFltr_L1D_PRI_PUBLIC()&&(FILTER_CHECK(L1D_PRI_PUBLIC_Trace_Filter, 1, 0x04)))
#define ChkL1ClsFltr_L1D_PRI_PUBLIC_L1D_DSP_INT_H()	(ChkL1ModFltr_L1D_PRI_PUBLIC()&&(FILTER_CHECK(L1D_PRI_PUBLIC_Trace_Filter, 1, 0x08)))
#define ChkL1ClsFltr_L1D_PRI_PUBLIC_L1D_GET_CMD_L()	(ChkL1ModFltr_L1D_PRI_PUBLIC()&&(FILTER_CHECK(L1D_PRI_PUBLIC_Trace_Filter, 1, 0x10)))
#define ChkL1ClsFltr_L1D_PRI_PUBLIC_L1D_FB_STAGE_L()	(ChkL1ModFltr_L1D_PRI_PUBLIC()&&(FILTER_CHECK(L1D_PRI_PUBLIC_Trace_Filter, 1, 0x20)))
#define ChkL1ClsFltr_L1D_PRI_PUBLIC_L1D_CIPHER_L()	(ChkL1ModFltr_L1D_PRI_PUBLIC()&&(FILTER_CHECK(L1D_PRI_PUBLIC_Trace_Filter, 1, 0x40)))
#define ChkL1ClsFltr_L1D_PRI_PUBLIC_L1D_CIPHER_H()	(ChkL1ModFltr_L1D_PRI_PUBLIC()&&(FILTER_CHECK(L1D_PRI_PUBLIC_Trace_Filter, 1, 0x80)))
#define ChkL1ClsFltr_L1D_PRI_PUBLIC_L1D_UL_L()	(ChkL1ModFltr_L1D_PRI_PUBLIC()&&(FILTER_CHECK(L1D_PRI_PUBLIC_Trace_Filter, 2, 0x01)))
#define ChkL1ClsFltr_L1D_PRI_PUBLIC_L1D_UL_CCH_L()	(ChkL1ModFltr_L1D_PRI_PUBLIC()&&(FILTER_CHECK(L1D_PRI_PUBLIC_Trace_Filter, 2, 0x02)))
#define ChkL1ClsFltr_L1D_PRI_PUBLIC_L1D_UL_CCH_DATA_M()	(ChkL1ModFltr_L1D_PRI_PUBLIC()&&(FILTER_CHECK(L1D_PRI_PUBLIC_Trace_Filter, 2, 0x04)))
#define ChkL1ClsFltr_L1D_PRI_PUBLIC_L1D_UL_CCH_DATA_H()	(ChkL1ModFltr_L1D_PRI_PUBLIC()&&(FILTER_CHECK(L1D_PRI_PUBLIC_Trace_Filter, 2, 0x08)))
#define ChkL1ClsFltr_L1D_PRI_PUBLIC_L1D_MAX_TIME_L()	(ChkL1ModFltr_L1D_PRI_PUBLIC()&&(FILTER_CHECK(L1D_PRI_PUBLIC_Trace_Filter, 2, 0x10)))
#define ChkL1ClsFltr_L1D_PRI_PUBLIC_L1D_MARGIN_H()	(ChkL1ModFltr_L1D_PRI_PUBLIC()&&(FILTER_CHECK(L1D_PRI_PUBLIC_Trace_Filter, 2, 0x20)))
#define ChkL1ClsFltr_L1D_PRI_PUBLIC_SleepMode_L()	(ChkL1ModFltr_L1D_PRI_PUBLIC()&&(FILTER_CHECK(L1D_PRI_PUBLIC_Trace_Filter, 2, 0x40)))
#define ChkL1ClsFltr_L1D_PRI_PUBLIC_FMCalibration_M()	(ChkL1ModFltr_L1D_PRI_PUBLIC()&&(FILTER_CHECK(L1D_PRI_PUBLIC_Trace_Filter, 2, 0x80)))
#define ChkL1ClsFltr_L1D_PRI_PUBLIC_L1D_USF_L()	(ChkL1ModFltr_L1D_PRI_PUBLIC()&&(FILTER_CHECK(L1D_PRI_PUBLIC_Trace_Filter, 3, 0x01)))
#define ChkL1ClsFltr_L1D_PRI_PUBLIC_L1D_APC_VOLTTEMP_L()	(ChkL1ModFltr_L1D_PRI_PUBLIC()&&(FILTER_CHECK(L1D_PRI_PUBLIC_Trace_Filter, 3, 0x02)))
#define ChkL1ClsFltr_L1D_PRI_PUBLIC_L1D_AGPS_L()	(ChkL1ModFltr_L1D_PRI_PUBLIC()&&(FILTER_CHECK(L1D_PRI_PUBLIC_Trace_Filter, 3, 0x04)))
#define ChkL1ClsFltr_L1D_PRI_PUBLIC_FMCalibration_H()	(ChkL1ModFltr_L1D_PRI_PUBLIC()&&(FILTER_CHECK(L1D_PRI_PUBLIC_Trace_Filter, 3, 0x08)))
#define ChkL1MsgFltr_L1D_Trc_USF()	ChkL1ClsFltr_L1D_PRI_PUBLIC_L1D_USF_L()


#endif
