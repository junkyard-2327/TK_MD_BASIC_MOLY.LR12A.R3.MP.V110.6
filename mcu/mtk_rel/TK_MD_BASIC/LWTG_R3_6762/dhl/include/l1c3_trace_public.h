#ifndef L1TRC_L1C_GSM2_PUBLIC_DEF_H
#define L1TRC_L1C_GSM2_PUBLIC_DEF_H

/******************************/
/* String category definition */
/******************************/
#define L1C_Str_Bool(v1)  (unsigned char)(v1+0)
#define L1C_Str_ReportType(v1)  (unsigned char)(v1+2)
#define L1C_Str_InitialCvalue(v1)  (unsigned char)(v1+52)
#define L1C_Str_SDCCH_Update_MeanBep(v1)  (unsigned char)(v1+54)
#define L1C_Str_Power_Ctrl_Status(v1)  (unsigned char)(v1+56)
#define L1C_Str_PCHinPTM(v1)  (unsigned char)(v1+66)
#define L1C_Str_PDTCH_BLOCK(v1)  (unsigned char)(v1+70)
#define L1C_Str_Serv_BSIC(v1)  (unsigned char)(v1+72)
#define L1C_Str_Rdrbn_Type(v1)  (unsigned char)(v1+76)
#define L1C_Str_VirtualPowerScanState(v1)  (unsigned char)(v1+81)
#define L1C_Str_SetSuspendBitmapSource(v1)  (unsigned char)(v1+85)


/****************************/
/* Message macro definition */
/****************************/
#include "L1Trc.h"
#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define L1C_DUMMY_MSG(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1C_GSM2_PUBLIC_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0071,0x0071);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1C_GSM2_PUBLIC_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define L1C_DUMMY_MSG(v1)
#endif



/*******************************/
/* declaration of filter array */
/*******************************/
EXTERN_TMD_FILTER(unsigned char, L1C_GSM2_PUBLIC_Trace_Filter, 5);
/*************************/
/* Function declarations */
/*************************/
#ifdef L1_CATCHER

void Set_L1C_GSM2_PUBLIC_Filter(unsigned char *setting);

#endif

/************************************/
/* Filter checking API declarations */
/************************************/

#define ChkL1ModFltr_L1C_GSM2_PUBLIC()	(FILTER_CHECK(L1C_GSM2_PUBLIC_Trace_Filter, 0, 1))
#define ChkL1ClsFltr_L1C_GSM2_PUBLIC_REL5_L()	(ChkL1ModFltr_L1C_GSM2_PUBLIC()&&(FILTER_CHECK(L1C_GSM2_PUBLIC_Trace_Filter, 1, 0x01)))
#define ChkL1ClsFltr_L1C_GSM2_PUBLIC_BlindHO_H()	(ChkL1ModFltr_L1C_GSM2_PUBLIC()&&(FILTER_CHECK(L1C_GSM2_PUBLIC_Trace_Filter, 1, 0x02)))
#define ChkL1ClsFltr_L1C_GSM2_PUBLIC_PCH_PTM_L()	(ChkL1ModFltr_L1C_GSM2_PUBLIC()&&(FILTER_CHECK(L1C_GSM2_PUBLIC_Trace_Filter, 1, 0x04)))
#define ChkL1ClsFltr_L1C_GSM2_PUBLIC_AGPS_L()	(ChkL1ModFltr_L1C_GSM2_PUBLIC()&&(FILTER_CHECK(L1C_GSM2_PUBLIC_Trace_Filter, 1, 0x08)))
#define ChkL1ClsFltr_L1C_GSM2_PUBLIC_RDRBN_L()	(ChkL1ModFltr_L1C_GSM2_PUBLIC()&&(FILTER_CHECK(L1C_GSM2_PUBLIC_Trace_Filter, 1, 0x10)))
#define ChkL1ClsFltr_L1C_GSM2_PUBLIC_ReportSharing_L()	(ChkL1ModFltr_L1C_GSM2_PUBLIC()&&(FILTER_CHECK(L1C_GSM2_PUBLIC_Trace_Filter, 1, 0x20)))
#define ChkL1ClsFltr_L1C_GSM2_PUBLIC_GEMINI20_M()	(ChkL1ModFltr_L1C_GSM2_PUBLIC()&&(FILTER_CHECK(L1C_GSM2_PUBLIC_Trace_Filter, 1, 0x40)))
#define ChkL1ClsFltr_L1C_GSM2_PUBLIC_SmartPaging_M()	(ChkL1ModFltr_L1C_GSM2_PUBLIC()&&(FILTER_CHECK(L1C_GSM2_PUBLIC_Trace_Filter, 1, 0x80)))
#define ChkL1ClsFltr_L1C_GSM2_PUBLIC_VAMOS_M()	(ChkL1ModFltr_L1C_GSM2_PUBLIC()&&(FILTER_CHECK(L1C_GSM2_PUBLIC_Trace_Filter, 2, 0x01)))
#define ChkL1MsgFltr_L1C_DUMMY_MSG()	ChkL1ClsFltr_L1C_GSM2_PUBLIC_REL5_L()


#endif
