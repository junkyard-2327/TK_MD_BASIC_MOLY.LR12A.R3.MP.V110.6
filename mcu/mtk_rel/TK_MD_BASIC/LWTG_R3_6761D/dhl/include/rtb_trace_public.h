#ifndef L1TRC_RTB_PUBLIC_DEF_H
#define L1TRC_RTB_PUBLIC_DEF_H

/******************************/
/* String category definition */
/******************************/
#define RTB_Str_RAT(v1)  (unsigned char)(v1+0)
#define RTB_Str_Unit(v1)  (unsigned char)(v1+5)
#define RTB_Str_Protect(v1)  (unsigned char)(v1+9)
#define RTB_Str_SIM(v1)  (unsigned char)(v1+11)
#define RTB_Str_Channel_Protect(v1)  (unsigned char)(v1+16)
#define RTB_Str_Message(v1)  (unsigned char)(v1+18)
#define RTB_Str_Bool(v1)  (unsigned char)(v1+29)
#define RTB_Str_sync_proc(v1)  (unsigned char)(v1+31)


/****************************/
/* Message macro definition */
/****************************/
#include "L1Trc.h"
#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define L1C4_DUMMY_MSG(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(RTB_PUBLIC_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0073,0x0073);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(RTB_PUBLIC_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define L1C4_DUMMY_MSG(v1)
#endif



/*******************************/
/* declaration of filter array */
/*******************************/
EXTERN_TMD_FILTER(unsigned char, RTB_PUBLIC_Trace_Filter, 5);
/*************************/
/* Function declarations */
/*************************/
#ifdef L1_CATCHER

void Set_RTB_PUBLIC_Filter(unsigned char *setting);

#endif

/************************************/
/* Filter checking API declarations */
/************************************/

#define ChkL1ModFltr_RTB_PUBLIC()	(FILTER_CHECK(RTB_PUBLIC_Trace_Filter, 0, 1))
#define ChkL1ClsFltr_RTB_PUBLIC_RTB_M()	(ChkL1ModFltr_RTB_PUBLIC()&&(FILTER_CHECK(RTB_PUBLIC_Trace_Filter, 1, 0x01)))
#define ChkL1ClsFltr_RTB_PUBLIC_RTB_L()	(ChkL1ModFltr_RTB_PUBLIC()&&(FILTER_CHECK(RTB_PUBLIC_Trace_Filter, 1, 0x02)))
#define ChkL1MsgFltr_L1C4_DUMMY_MSG()	ChkL1ClsFltr_RTB_PUBLIC_RTB_L()


#endif
