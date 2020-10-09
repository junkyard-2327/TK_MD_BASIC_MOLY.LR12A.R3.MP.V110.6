#ifndef L1TRC_L1C_GPRS3_PUBLIC_DEF_H
#define L1TRC_L1C_GPRS3_PUBLIC_DEF_H

/******************************/
/* String category definition */
/******************************/
#define TDRTB_Str_Bool(v1)  (unsigned char)(v1+0)
#define TDRTB_Str_RAT(v1)  (unsigned char)(v1+2)
#define TDRTB_Str_SIM(v1)  (unsigned char)(v1+4)
#define TDRTB_Str_MEAS(v1)  (unsigned char)(v1+6)
#define TDRTB_Str_FCB(v1)  (unsigned char)(v1+10)
#define TDRTB_Str_MODE(v1)  (unsigned char)(v1+12)
#define TDRTB_Str_Priority(v1)  (unsigned char)(v1+14)
#define TDRTB_Str_Task_Type(v1)  (unsigned char)(v1+20)


/****************************/
/* Message macro definition */
/****************************/
#include "L1Trc.h"
#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define L1D_TDDM_RF_CONFLICT(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1C_GPRS3_PUBLIC_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0075,0x0075);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1C_GPRS3_PUBLIC_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define L1D_TDDM_RF_CONFLICT(v1)
#endif



/*******************************/
/* declaration of filter array */
/*******************************/
EXTERN_TMD_FILTER(unsigned char, L1C_GPRS3_PUBLIC_Trace_Filter, 5);
/*************************/
/* Function declarations */
/*************************/
#ifdef L1_CATCHER

void Set_L1C_GPRS3_PUBLIC_Filter(unsigned char *setting);

#endif

/************************************/
/* Filter checking API declarations */
/************************************/

#define ChkL1ModFltr_L1C_GPRS3_PUBLIC()	(FILTER_CHECK(L1C_GPRS3_PUBLIC_Trace_Filter, 0, 1))
#define ChkL1ClsFltr_L1C_GPRS3_PUBLIC_RTB_M()	(ChkL1ModFltr_L1C_GPRS3_PUBLIC()&&(FILTER_CHECK(L1C_GPRS3_PUBLIC_Trace_Filter, 1, 0x01)))
#define ChkL1ClsFltr_L1C_GPRS3_PUBLIC_RTB_L()	(ChkL1ModFltr_L1C_GPRS3_PUBLIC()&&(FILTER_CHECK(L1C_GPRS3_PUBLIC_Trace_Filter, 1, 0x02)))
#define ChkL1MsgFltr_L1D_TDDM_RF_CONFLICT()	ChkL1ClsFltr_L1C_GPRS3_PUBLIC_RTB_M()


#endif
