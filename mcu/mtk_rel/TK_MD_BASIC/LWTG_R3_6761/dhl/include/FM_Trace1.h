#ifndef L1TRC_FM_1_DEF_H
#define L1TRC_FM_1_DEF_H

/******************************/
/* String category definition */
/******************************/
#define FM_Str_Bool(v1)  (unsigned char)(v1+0)
#define FM_Str_Calibration(v1)  (unsigned char)(v1+2)


/****************************/
/* Message macro definition */
/****************************/
#include "L1Trc.h"
#if defined(L1_CATCHER)
	#define FM_TRC_CALIBRATION(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(FM_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0030,0x0030);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(FM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define FM_TRC_CALIBRATION(v1, v2, v3, v4)
#endif



/*******************************/
/* declaration of filter array */
/*******************************/
EXTERN_TMD_FILTER(unsigned char, FM_1_Trace_Filter, 5);
/*************************/
/* Function declarations */
/*************************/
#ifdef L1_CATCHER

void Set_FM_1_Filter(unsigned char *setting);

#endif

/************************************/
/* Filter checking API declarations */
/************************************/

#define ChkL1ModFltr_FM_1()	(FILTER_CHECK(FM_1_Trace_Filter, 0, 1))
#define ChkL1ClsFltr_FM_1_FM_H()	(ChkL1ModFltr_FM_1()&&(FILTER_CHECK(FM_1_Trace_Filter, 1, 0x01)))
#define ChkL1MsgFltr_FM_TRC_CALIBRATION()	ChkL1ClsFltr_FM_1_FM_H()


#endif
