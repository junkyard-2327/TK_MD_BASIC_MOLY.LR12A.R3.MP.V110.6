#ifndef L1TRC_UL1C_PRI4_PUBLIC_DEF_H
#define L1TRC_UL1C_PRI4_PUBLIC_DEF_H

/******************************/
/* String category definition */
/******************************/


/****************************/
/* Message macro definition */
/****************************/
#include "L1Trc.h"
#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UL1I_TRC_EDCH_TTI_Config(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI4_PUBLIC_Trace_Filter, 1, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x00A0,0x00A0);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI4_PUBLIC_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define UL1I_TRC_EDCH_TTI_Config(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UL1I_TRC_EDCH_Serv_Cell_Config(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI4_PUBLIC_Trace_Filter, 1, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x01A0,0x01A0);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI4_PUBLIC_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define UL1I_TRC_EDCH_Serv_Cell_Config(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_UL1D_HS_Serv_RL_Config(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI4_PUBLIC_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x02A0,0x02A0);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI4_PUBLIC_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define UL1I_TRC_UL1D_HS_Serv_RL_Config(v1, v2)
#endif



/*******************************/
/* declaration of filter array */
/*******************************/
EXTERN_TMD_FILTER(unsigned char, UL1C_PRI4_PUBLIC_Trace_Filter, 5);
/*************************/
/* Function declarations */
/*************************/
#ifdef L1_CATCHER

void Set_UL1C_PRI4_PUBLIC_Filter(unsigned char *setting);

#endif

/************************************/
/* Filter checking API declarations */
/************************************/

#define ChkL1ModFltr_UL1C_PRI4_PUBLIC()	(FILTER_CHECK(UL1C_PRI4_PUBLIC_Trace_Filter, 0, 1))
#define ChkL1ClsFltr_UL1C_PRI4_PUBLIC_UL1C_HSDSCH_L()	(ChkL1ModFltr_UL1C_PRI4_PUBLIC()&&(FILTER_CHECK(UL1C_PRI4_PUBLIC_Trace_Filter, 1, 0x01)))
#define ChkL1ClsFltr_UL1C_PRI4_PUBLIC_UL1C_HSDSCH_M()	(ChkL1ModFltr_UL1C_PRI4_PUBLIC()&&(FILTER_CHECK(UL1C_PRI4_PUBLIC_Trace_Filter, 1, 0x02)))
#define ChkL1ClsFltr_UL1C_PRI4_PUBLIC_UL1C_HSDSCH_H()	(ChkL1ModFltr_UL1C_PRI4_PUBLIC()&&(FILTER_CHECK(UL1C_PRI4_PUBLIC_Trace_Filter, 1, 0x04)))
#define ChkL1ClsFltr_UL1C_PRI4_PUBLIC_UL1C_EDCH_L()	(ChkL1ModFltr_UL1C_PRI4_PUBLIC()&&(FILTER_CHECK(UL1C_PRI4_PUBLIC_Trace_Filter, 1, 0x08)))
#define ChkL1ClsFltr_UL1C_PRI4_PUBLIC_UL1C_EDCH_H()	(ChkL1ModFltr_UL1C_PRI4_PUBLIC()&&(FILTER_CHECK(UL1C_PRI4_PUBLIC_Trace_Filter, 1, 0x10)))
#define ChkL1ClsFltr_UL1C_PRI4_PUBLIC_UL1C_CPC_M()	(ChkL1ModFltr_UL1C_PRI4_PUBLIC()&&(FILTER_CHECK(UL1C_PRI4_PUBLIC_Trace_Filter, 1, 0x20)))
#define ChkL1ClsFltr_UL1C_PRI4_PUBLIC_UL1C_MonitorOrd_M()	(ChkL1ModFltr_UL1C_PRI4_PUBLIC()&&(FILTER_CHECK(UL1C_PRI4_PUBLIC_Trace_Filter, 1, 0x40)))
#define ChkL1ClsFltr_UL1C_PRI4_PUBLIC_UL1C_CEDCH_M()	(ChkL1ModFltr_UL1C_PRI4_PUBLIC()&&(FILTER_CHECK(UL1C_PRI4_PUBLIC_Trace_Filter, 1, 0x80)))
#define ChkL1ClsFltr_UL1C_PRI4_PUBLIC_UL1C_DC_HSDSCH_M()	(ChkL1ModFltr_UL1C_PRI4_PUBLIC()&&(FILTER_CHECK(UL1C_PRI4_PUBLIC_Trace_Filter, 2, 0x01)))
#define ChkL1ClsFltr_UL1C_PRI4_PUBLIC_UL1C_ETWS_M()	(ChkL1ModFltr_UL1C_PRI4_PUBLIC()&&(FILTER_CHECK(UL1C_PRI4_PUBLIC_Trace_Filter, 2, 0x02)))
#define ChkL1MsgFltr_UL1I_TRC_EDCH_TTI_Config()	ChkL1ClsFltr_UL1C_PRI4_PUBLIC_UL1C_EDCH_L()
#define ChkL1MsgFltr_UL1I_TRC_EDCH_Serv_Cell_Config()	ChkL1ClsFltr_UL1C_PRI4_PUBLIC_UL1C_EDCH_L()
#define ChkL1MsgFltr_UL1I_TRC_UL1D_HS_Serv_RL_Config()	ChkL1ClsFltr_UL1C_PRI4_PUBLIC_UL1C_HSDSCH_H()


#endif
