#ifndef L1TRC_L1SC_PUBLIC_DEF_H
#define L1TRC_L1SC_PUBLIC_DEF_H

/******************************/
/* String category definition */
/******************************/
#define L1SC_Str_Bool(v1)  (unsigned char)(v1+0)
#define L1SC_Str_SCMODE(v1)  (unsigned char)(v1+2)
#define L1SC_Str_VMODE(v1)  (unsigned char)(v1+12)
#define L1C_Str_Identity(v1)  (unsigned char)(v1+14)
#define L1C_Str_TFI(v1)  (unsigned char)(v1+18)
#define L1C_Str_AMR_Status(v1)  (unsigned char)(v1+20)
#define L1C_Str_Loopback_Mode(v1)  (unsigned char)(v1+28)
#define L1C_Str_NC_Report(v1)  (unsigned char)(v1+37)


/****************************/
/* Message macro definition */
/****************************/
#include "L1Trc.h"
#if defined(L1_CATCHER)
	#define L1SC_Msg_SCMODE(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1SC_PUBLIC_Trace_Filter, 1, 0x08);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x005B,0x005B);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1SC_PUBLIC_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define L1SC_Msg_SCMODE(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER)
	#define L1SC_Msg_SCARFCN(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1SC_PUBLIC_Trace_Filter, 1, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x015B,0x015B);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1SC_PUBLIC_Trace_Filter, 1, 0x10);\
		}\
	} while(0)
#else
	#define L1SC_Msg_SCARFCN(v1, v2, v3)
#endif



/*******************************/
/* declaration of filter array */
/*******************************/
EXTERN_TMD_FILTER(unsigned char, L1SC_PUBLIC_Trace_Filter, 5);
/*************************/
/* Function declarations */
/*************************/
#ifdef L1_CATCHER

void Set_L1SC_PUBLIC_Filter(unsigned char *setting);

#endif

/************************************/
/* Filter checking API declarations */
/************************************/

#define ChkL1ModFltr_L1SC_PUBLIC()	(FILTER_CHECK(L1SC_PUBLIC_Trace_Filter, 0, 1))
#define ChkL1ClsFltr_L1SC_PUBLIC_FB_M()	(ChkL1ModFltr_L1SC_PUBLIC()&&(FILTER_CHECK(L1SC_PUBLIC_Trace_Filter, 1, 0x01)))
#define ChkL1ClsFltr_L1SC_PUBLIC_SB_M()	(ChkL1ModFltr_L1SC_PUBLIC()&&(FILTER_CHECK(L1SC_PUBLIC_Trace_Filter, 1, 0x02)))
#define ChkL1ClsFltr_L1SC_PUBLIC_SI_M()	(ChkL1ModFltr_L1SC_PUBLIC()&&(FILTER_CHECK(L1SC_PUBLIC_Trace_Filter, 1, 0x04)))
#define ChkL1ClsFltr_L1SC_PUBLIC_SCMODE_H()	(ChkL1ModFltr_L1SC_PUBLIC()&&(FILTER_CHECK(L1SC_PUBLIC_Trace_Filter, 1, 0x08)))
#define ChkL1ClsFltr_L1SC_PUBLIC_SCARFCN_H()	(ChkL1ModFltr_L1SC_PUBLIC()&&(FILTER_CHECK(L1SC_PUBLIC_Trace_Filter, 1, 0x10)))
#define ChkL1ClsFltr_L1SC_PUBLIC_DL_Block_M()	(ChkL1ModFltr_L1SC_PUBLIC()&&(FILTER_CHECK(L1SC_PUBLIC_Trace_Filter, 1, 0x20)))
#define ChkL1ClsFltr_L1SC_PUBLIC_DL_Block_H()	(ChkL1ModFltr_L1SC_PUBLIC()&&(FILTER_CHECK(L1SC_PUBLIC_Trace_Filter, 1, 0x40)))
#define ChkL1ClsFltr_L1SC_PUBLIC_CB_Debug_M()	(ChkL1ModFltr_L1SC_PUBLIC()&&(FILTER_CHECK(L1SC_PUBLIC_Trace_Filter, 1, 0x80)))
#define ChkL1ClsFltr_L1SC_PUBLIC_FIX_ALLOC_M()	(ChkL1ModFltr_L1SC_PUBLIC()&&(FILTER_CHECK(L1SC_PUBLIC_Trace_Filter, 2, 0x01)))
#define ChkL1ClsFltr_L1SC_PUBLIC_BITMAP_NO_M()	(ChkL1ModFltr_L1SC_PUBLIC()&&(FILTER_CHECK(L1SC_PUBLIC_Trace_Filter, 2, 0x02)))
#define ChkL1ClsFltr_L1SC_PUBLIC_AMR_M()	(ChkL1ModFltr_L1SC_PUBLIC()&&(FILTER_CHECK(L1SC_PUBLIC_Trace_Filter, 2, 0x04)))
#define ChkL1ClsFltr_L1SC_PUBLIC_Loop_Mode_L()	(ChkL1ModFltr_L1SC_PUBLIC()&&(FILTER_CHECK(L1SC_PUBLIC_Trace_Filter, 2, 0x08)))
#define ChkL1ClsFltr_L1SC_PUBLIC_DL_Ctrl_Block_L()	(ChkL1ModFltr_L1SC_PUBLIC()&&(FILTER_CHECK(L1SC_PUBLIC_Trace_Filter, 2, 0x10)))
#define ChkL1ClsFltr_L1SC_PUBLIC_NC_Report_H()	(ChkL1ModFltr_L1SC_PUBLIC()&&(FILTER_CHECK(L1SC_PUBLIC_Trace_Filter, 2, 0x20)))
#define ChkL1ClsFltr_L1SC_PUBLIC_BSIC_debug_L()	(ChkL1ModFltr_L1SC_PUBLIC()&&(FILTER_CHECK(L1SC_PUBLIC_Trace_Filter, 2, 0x40)))
#define ChkL1ClsFltr_L1SC_PUBLIC_BCCH_debug_L()	(ChkL1ModFltr_L1SC_PUBLIC()&&(FILTER_CHECK(L1SC_PUBLIC_Trace_Filter, 2, 0x80)))
#define ChkL1MsgFltr_L1SC_Msg_SCMODE()	ChkL1ClsFltr_L1SC_PUBLIC_SCMODE_H()
#define ChkL1MsgFltr_L1SC_Msg_SCARFCN()	ChkL1ClsFltr_L1SC_PUBLIC_SCARFCN_H()


#endif
