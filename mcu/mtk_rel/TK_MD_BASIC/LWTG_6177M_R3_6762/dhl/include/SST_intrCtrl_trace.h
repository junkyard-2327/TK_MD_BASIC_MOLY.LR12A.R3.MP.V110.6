#ifndef L1TRC_QbitsCheck_DEF_H
#define L1TRC_QbitsCheck_DEF_H

/******************************/
/* String category definition */
/******************************/


/****************************/
/* Message macro definition */
/****************************/
#include "L1Trc.h"
#if defined(L1_CATCHER)
	#define QBITS_CHECK_FAIL_WARN(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(QbitsCheck_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0028,0x0028);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(QbitsCheck_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define QBITS_CHECK_FAIL_WARN(v1, v2, v3)
#endif



/*******************************/
/* declaration of filter array */
/*******************************/
EXTERN_TMD_FILTER(unsigned char, QbitsCheck_Trace_Filter, 5);
/*************************/
/* Function declarations */
/*************************/
#ifdef L1_CATCHER

void Set_QbitsCheck_Filter(unsigned char *setting);

#endif

/************************************/
/* Filter checking API declarations */
/************************************/

#define ChkL1ModFltr_QbitsCheck()	(FILTER_CHECK(QbitsCheck_Trace_Filter, 0, 1))
#define ChkL1ClsFltr_QbitsCheck_Interrupt_Disable_Qbit_Check_H()	(ChkL1ModFltr_QbitsCheck()&&(FILTER_CHECK(QbitsCheck_Trace_Filter, 1, 0x01)))
#define ChkL1MsgFltr_QBITS_CHECK_FAIL_WARN()	ChkL1ClsFltr_QbitsCheck_Interrupt_Disable_Qbit_Check_H()


#endif
