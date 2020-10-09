#ifndef L1TRC_EL1_PHS_PUBLIC_DEF_H
#define L1TRC_EL1_PHS_PUBLIC_DEF_H

/******************************/
/* String category definition */
/******************************/
#define PHS_SIM_IDX_STRING_PUBLIC(v1)  (unsigned char)(v1+0)
#define PHS_RRC_CONFIG_STRING(v1)  (unsigned char)(v1+4)


/****************************/
/* Message macro definition */
/****************************/
#include "L1Trc.h"
#if defined(L1_CATCHER)
	#define PHS_LOG_I_ACTIVE_NW_CONFIG_GAP_DURATION(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_PHS_PUBLIC_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0005,0x0005);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_PHS_PUBLIC_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define PHS_LOG_I_ACTIVE_NW_CONFIG_GAP_DURATION(v1)
#endif



/*******************************/
/* declaration of filter array */
/*******************************/
EXTERN_TMD_FILTER(unsigned char, EL1_PHS_PUBLIC_Trace_Filter, 5);
/*************************/
/* Function declarations */
/*************************/
#ifdef L1_CATCHER

void Set_EL1_PHS_PUBLIC_Filter(unsigned char *setting);

#endif

/************************************/
/* Filter checking API declarations */
/************************************/

#define ChkL1ModFltr_EL1_PHS_PUBLIC()	(FILTER_CHECK(EL1_PHS_PUBLIC_Trace_Filter, 0, 1))
#define ChkL1ClsFltr_EL1_PHS_PUBLIC_el1_trace_1_H()	(ChkL1ModFltr_EL1_PHS_PUBLIC()&&(FILTER_CHECK(EL1_PHS_PUBLIC_Trace_Filter, 1, 0x01)))
#define ChkL1ClsFltr_EL1_PHS_PUBLIC_el1_trace_2_H()	(ChkL1ModFltr_EL1_PHS_PUBLIC()&&(FILTER_CHECK(EL1_PHS_PUBLIC_Trace_Filter, 1, 0x02)))
#define ChkL1ClsFltr_EL1_PHS_PUBLIC_el1_trace_3_M()	(ChkL1ModFltr_EL1_PHS_PUBLIC()&&(FILTER_CHECK(EL1_PHS_PUBLIC_Trace_Filter, 1, 0x04)))
#define ChkL1ClsFltr_EL1_PHS_PUBLIC_el1_trace_4_L()	(ChkL1ModFltr_EL1_PHS_PUBLIC()&&(FILTER_CHECK(EL1_PHS_PUBLIC_Trace_Filter, 1, 0x08)))
#define ChkL1MsgFltr_PHS_LOG_I_ACTIVE_NW_CONFIG_GAP_DURATION()	ChkL1ClsFltr_EL1_PHS_PUBLIC_el1_trace_1_H()


#endif
