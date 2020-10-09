#ifndef L1TRC_L1_AFC_PUBLIC_DEF_H
#define L1TRC_L1_AFC_PUBLIC_DEF_H

/******************************/
/* String category definition */
/******************************/
#define L1_Multi_Afc_Query_Msg(v1)  (unsigned char)(v1+0)
#define L1_Multi_Afc_rat(v1)  (unsigned char)(v1+9)
#define L1_Multi_Afc_mode(v1)  (unsigned char)(v1+15)
#define L1_Multi_Afc_Notify_Msg(v1)  (unsigned char)(v1+19)
#define L1_DLAFC_Notify_Msg(v1)  (unsigned char)(v1+26)
#define L1_Afc_SM_ask_rat(v1)  (unsigned char)(v1+42)


/****************************/
/* Message macro definition */
/****************************/
#include "L1Trc.h"
#if defined(L1_CATCHER)
	#define L1_Trc_AFC_SM_ask(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1_AFC_PUBLIC_Trace_Filter, 1, 0x04);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x007D,0x007D);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1_AFC_PUBLIC_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define L1_Trc_AFC_SM_ask(v1, v2, v3, v4, v5)
#endif



/*******************************/
/* declaration of filter array */
/*******************************/
EXTERN_TMD_FILTER(unsigned char, L1_AFC_PUBLIC_Trace_Filter, 5);
/*************************/
/* Function declarations */
/*************************/
#ifdef L1_CATCHER

void Set_L1_AFC_PUBLIC_Filter(unsigned char *setting);

#endif

/************************************/
/* Filter checking API declarations */
/************************************/

#define ChkL1ModFltr_L1_AFC_PUBLIC()	(FILTER_CHECK(L1_AFC_PUBLIC_Trace_Filter, 0, 1))
#define ChkL1ClsFltr_L1_AFC_PUBLIC_Multi_afc_dbg_H()	(ChkL1ModFltr_L1_AFC_PUBLIC()&&(FILTER_CHECK(L1_AFC_PUBLIC_Trace_Filter, 1, 0x01)))
#define ChkL1ClsFltr_L1_AFC_PUBLIC_Multi_afc_dbg_L()	(ChkL1ModFltr_L1_AFC_PUBLIC()&&(FILTER_CHECK(L1_AFC_PUBLIC_Trace_Filter, 1, 0x02)))
#define ChkL1ClsFltr_L1_AFC_PUBLIC_DLAFC_dbg_H()	(ChkL1ModFltr_L1_AFC_PUBLIC()&&(FILTER_CHECK(L1_AFC_PUBLIC_Trace_Filter, 1, 0x04)))
#define ChkL1ClsFltr_L1_AFC_PUBLIC_SGTDS_dbg_H()	(ChkL1ModFltr_L1_AFC_PUBLIC()&&(FILTER_CHECK(L1_AFC_PUBLIC_Trace_Filter, 1, 0x08)))
#define ChkL1MsgFltr_L1_Trc_AFC_SM_ask()	ChkL1ClsFltr_L1_AFC_PUBLIC_DLAFC_dbg_H()


#endif
