#ifndef L1TRC_C2K_L1_COMMON_DEF_H
#define L1TRC_C2K_L1_COMMON_DEF_H

/******************************/
/* String category definition */
/******************************/
#define L1_Test_String(v1)  (unsigned char)(v1+0)


/****************************/
/* Message macro definition */
/****************************/
#include "L1Trc.h"
#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define CL1TRACE_HSC_Rec_Msg_Dbg(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(C2K_L1_COMMON_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0030,0x0030);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(C2K_L1_COMMON_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define CL1TRACE_HSC_Rec_Msg_Dbg(v1)
#endif



/*******************************/
/* declaration of filter array */
/*******************************/
EXTERN_TMD_FILTER(unsigned char, C2K_L1_COMMON_Trace_Filter, 5);
/*************************/
/* Function declarations */
/*************************/
#ifdef L1_CATCHER

void Set_C2K_L1_COMMON_Filter(unsigned char *setting);

#endif

/************************************/
/* Filter checking API declarations */
/************************************/

#define ChkL1ModFltr_C2K_L1_COMMON()	(FILTER_CHECK(C2K_L1_COMMON_Trace_Filter, 0, 1))
#define ChkL1ClsFltr_C2K_L1_COMMON_L1_COMMON_UT_TRACE()	(ChkL1ModFltr_C2K_L1_COMMON()&&(FILTER_CHECK(C2K_L1_COMMON_Trace_Filter, 1, 0x01)))
#define ChkL1ClsFltr_C2K_L1_COMMON_L1_COMMON_IT_TRACE()	(ChkL1ModFltr_C2K_L1_COMMON()&&(FILTER_CHECK(C2K_L1_COMMON_Trace_Filter, 1, 0x02)))
#define ChkL1ClsFltr_C2K_L1_COMMON_L1_COMMON_MP_TRACE()	(ChkL1ModFltr_C2K_L1_COMMON()&&(FILTER_CHECK(C2K_L1_COMMON_Trace_Filter, 1, 0x04)))
#define ChkL1ClsFltr_C2K_L1_COMMON_L1_COMMON_FULL_FT_TRACE()	(ChkL1ModFltr_C2K_L1_COMMON()&&(FILTER_CHECK(C2K_L1_COMMON_Trace_Filter, 1, 0x08)))
#define ChkL1ClsFltr_C2K_L1_COMMON_L1_COMMON_KERNAL_TRACE()	(ChkL1ModFltr_C2K_L1_COMMON()&&(FILTER_CHECK(C2K_L1_COMMON_Trace_Filter, 1, 0x10)))
#define ChkL1ClsFltr_C2K_L1_COMMON_L1_COMMON_WARN()	(ChkL1ModFltr_C2K_L1_COMMON()&&(FILTER_CHECK(C2K_L1_COMMON_Trace_Filter, 1, 0x20)))
#define ChkL1MsgFltr_CL1TRACE_HSC_Rec_Msg_Dbg()	ChkL1ClsFltr_C2K_L1_COMMON_L1_COMMON_MP_TRACE()


#endif
