#ifndef L1TRC_TPPA_EL1SM_1_DEF_H
#define L1TRC_TPPA_EL1SM_1_DEF_H

/******************************/
/* String category definition */
/******************************/
#define TPPA_EL1SM_Str_Bool(v1)  (unsigned char)(v1+0)


/****************************/
/* Message macro definition */
/****************************/
#include "L1Trc.h"
#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define TPPA_EL1SM_TMR_STA(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1_NON_SMP(TPPA_EL1SM_1_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_START_FILL_L1_NON_SMP();\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1_NON_SMP(0x00A7,0x00A7);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_END_FILL_L1_NON_SMP();\
			TRC_END_FILTER_CHECK_L1_NON_SMP(TPPA_EL1SM_1_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define TPPA_EL1SM_TMR_STA(v1, v2)
#endif



/*******************************/
/* declaration of filter array */
/*******************************/
EXTERN_TMD_FILTER(unsigned char, TPPA_EL1SM_1_Trace_Filter, 5);
/*************************/
/* Function declarations */
/*************************/
#ifdef L1_CATCHER

void Set_TPPA_EL1SM_1_Filter(unsigned char *setting);

#endif

/************************************/
/* Filter checking API declarations */
/************************************/

#define ChkL1ModFltr_TPPA_EL1SM_1()	(FILTER_CHECK(TPPA_EL1SM_1_Trace_Filter, 0, 1))
#define ChkL1ClsFltr_TPPA_EL1SM_1_TPPA_EL1SM_H()	(ChkL1ModFltr_TPPA_EL1SM_1()&&(FILTER_CHECK(TPPA_EL1SM_1_Trace_Filter, 1, 0x01)))
#define ChkL1ClsFltr_TPPA_EL1SM_1_TPPA_EL1SM_M()	(ChkL1ModFltr_TPPA_EL1SM_1()&&(FILTER_CHECK(TPPA_EL1SM_1_Trace_Filter, 1, 0x02)))
#define ChkL1ClsFltr_TPPA_EL1SM_1_TPPA_EL1SM_L()	(ChkL1ModFltr_TPPA_EL1SM_1()&&(FILTER_CHECK(TPPA_EL1SM_1_Trace_Filter, 1, 0x04)))
#define ChkL1MsgFltr_TPPA_EL1SM_TMR_STA()	ChkL1ClsFltr_TPPA_EL1SM_1_TPPA_EL1SM_L()


#endif
