#ifndef L1TRC_EL1D_COSIM_DEF_H
#define L1TRC_EL1D_COSIM_DEF_H

/******************************/
/* String category definition */
/******************************/


/****************************/
/* Message macro definition */
/****************************/
#include "L1Trc.h"
#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define EL1D_TRC_COSIM_SUCCESS(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_COSIM_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x005A,0x005A);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_COSIM_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1D_TRC_COSIM_SUCCESS(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define EL1D_TRC_COSIM_FAIL(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_COSIM_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x015A,0x015A);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_COSIM_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1D_TRC_COSIM_FAIL(v1, v2, v3)
#endif



/*******************************/
/* declaration of filter array */
/*******************************/
EXTERN_TMD_FILTER(unsigned char, EL1D_COSIM_Trace_Filter, 5);
/*************************/
/* Function declarations */
/*************************/
#ifdef L1_CATCHER

void Set_EL1D_COSIM_Filter(unsigned char *setting);

#endif

/************************************/
/* Filter checking API declarations */
/************************************/

#define ChkL1ModFltr_EL1D_COSIM()	(FILTER_CHECK(EL1D_COSIM_Trace_Filter, 0, 1))
#define ChkL1ClsFltr_EL1D_COSIM_EL1D_COSIM_M()	(ChkL1ModFltr_EL1D_COSIM()&&(FILTER_CHECK(EL1D_COSIM_Trace_Filter, 1, 0x01)))
#define ChkL1MsgFltr_EL1D_TRC_COSIM_SUCCESS()	ChkL1ClsFltr_EL1D_COSIM_EL1D_COSIM_M()
#define ChkL1MsgFltr_EL1D_TRC_COSIM_FAIL()	ChkL1ClsFltr_EL1D_COSIM_EL1D_COSIM_M()


#endif
