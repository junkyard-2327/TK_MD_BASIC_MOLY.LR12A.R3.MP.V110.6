#ifndef L1TRC_UL1C_PRI3_PUBLIC_DEF_H
#define L1TRC_UL1C_PRI3_PUBLIC_DEF_H

/******************************/
/* String category definition */
/******************************/


/****************************/
/* Message macro definition */
/****************************/
#include "L1Trc.h"
#if defined(L1_CATCHER)
	#define UL1T_TRC_RSSI_SNIFFER1(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI3_PUBLIC_Trace_Filter, 2, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x00AD,0x00AD);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI3_PUBLIC_Trace_Filter, 2, 0x04);\
		}\
	} while(0)
#else
	#define UL1T_TRC_RSSI_SNIFFER1(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_RSSI_SNIFFER2(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI3_PUBLIC_Trace_Filter, 2, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x01AD,0x01AD);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI3_PUBLIC_Trace_Filter, 2, 0x04);\
		}\
	} while(0)
#else
	#define UL1I_TRC_RSSI_SNIFFER2(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define UL1T_TRC_RSSI_SNIFFER3(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI3_PUBLIC_Trace_Filter, 2, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x02AD,0x02AD);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI3_PUBLIC_Trace_Filter, 2, 0x04);\
		}\
	} while(0)
#else
	#define UL1T_TRC_RSSI_SNIFFER3(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define UL1T_TRC_TGPS_Act(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI3_PUBLIC_Trace_Filter, 2, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x03AD,0x03AD);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI3_PUBLIC_Trace_Filter, 2, 0x01);\
		}\
	} while(0)
#else
	#define UL1T_TRC_TGPS_Act(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_TGPS_Frame(v1, v2, v3, v4, v5, v6) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI3_PUBLIC_Trace_Filter, 2, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v5,v5);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v6,v6);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v5,v5);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v6,v6);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x04AD,0x04AD);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI3_PUBLIC_Trace_Filter, 2, 0x01);\
		}\
	} while(0)
#else
	#define UL1I_TRC_TGPS_Frame(v1, v2, v3, v4, v5, v6)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_TGPS_Status(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI3_PUBLIC_Trace_Filter, 2, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x05AD,0x05AD);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI3_PUBLIC_Trace_Filter, 2, 0x01);\
		}\
	} while(0)
#else
	#define UL1I_TRC_TGPS_Status(v1, v2, v3)
#endif



/*******************************/
/* declaration of filter array */
/*******************************/
EXTERN_TMD_FILTER(unsigned char, UL1C_PRI3_PUBLIC_Trace_Filter, 5);
/*************************/
/* Function declarations */
/*************************/
#ifdef L1_CATCHER

void Set_UL1C_PRI3_PUBLIC_Filter(unsigned char *setting);

#endif

/************************************/
/* Filter checking API declarations */
/************************************/

#define ChkL1ModFltr_UL1C_PRI3_PUBLIC()	(FILTER_CHECK(UL1C_PRI3_PUBLIC_Trace_Filter, 0, 1))
#define ChkL1ClsFltr_UL1C_PRI3_PUBLIC_UL1C_TGPS_L()	(ChkL1ModFltr_UL1C_PRI3_PUBLIC()&&(FILTER_CHECK(UL1C_PRI3_PUBLIC_Trace_Filter, 1, 0x01)))
#define ChkL1ClsFltr_UL1C_PRI3_PUBLIC_UL1C_Debug_L()	(ChkL1ModFltr_UL1C_PRI3_PUBLIC()&&(FILTER_CHECK(UL1C_PRI3_PUBLIC_Trace_Filter, 1, 0x02)))
#define ChkL1ClsFltr_UL1C_PRI3_PUBLIC_UL1C_RS_L()	(ChkL1ModFltr_UL1C_PRI3_PUBLIC()&&(FILTER_CHECK(UL1C_PRI3_PUBLIC_Trace_Filter, 1, 0x04)))
#define ChkL1ClsFltr_UL1C_PRI3_PUBLIC_UL1C_Frame_H()	(ChkL1ModFltr_UL1C_PRI3_PUBLIC()&&(FILTER_CHECK(UL1C_PRI3_PUBLIC_Trace_Filter, 1, 0x08)))
#define ChkL1ClsFltr_UL1C_PRI3_PUBLIC_UL1C_TGPS_M()	(ChkL1ModFltr_UL1C_PRI3_PUBLIC()&&(FILTER_CHECK(UL1C_PRI3_PUBLIC_Trace_Filter, 1, 0x10)))
#define ChkL1ClsFltr_UL1C_PRI3_PUBLIC_UL1C_Debug_M()	(ChkL1ModFltr_UL1C_PRI3_PUBLIC()&&(FILTER_CHECK(UL1C_PRI3_PUBLIC_Trace_Filter, 1, 0x20)))
#define ChkL1ClsFltr_UL1C_PRI3_PUBLIC_UL1C_RS_M()	(ChkL1ModFltr_UL1C_PRI3_PUBLIC()&&(FILTER_CHECK(UL1C_PRI3_PUBLIC_Trace_Filter, 1, 0x40)))
#define ChkL1ClsFltr_UL1C_PRI3_PUBLIC_UL1C_GEMINI20_M()	(ChkL1ModFltr_UL1C_PRI3_PUBLIC()&&(FILTER_CHECK(UL1C_PRI3_PUBLIC_Trace_Filter, 1, 0x80)))
#define ChkL1ClsFltr_UL1C_PRI3_PUBLIC_UL1C_TGPS_H()	(ChkL1ModFltr_UL1C_PRI3_PUBLIC()&&(FILTER_CHECK(UL1C_PRI3_PUBLIC_Trace_Filter, 2, 0x01)))
#define ChkL1ClsFltr_UL1C_PRI3_PUBLIC_UL1C_Debug_H()	(ChkL1ModFltr_UL1C_PRI3_PUBLIC()&&(FILTER_CHECK(UL1C_PRI3_PUBLIC_Trace_Filter, 2, 0x02)))
#define ChkL1ClsFltr_UL1C_PRI3_PUBLIC_UL1C_RS_H()	(ChkL1ModFltr_UL1C_PRI3_PUBLIC()&&(FILTER_CHECK(UL1C_PRI3_PUBLIC_Trace_Filter, 2, 0x04)))
#define ChkL1ClsFltr_UL1C_PRI3_PUBLIC_UL1C_GEMINI_LW_H()	(ChkL1ModFltr_UL1C_PRI3_PUBLIC()&&(FILTER_CHECK(UL1C_PRI3_PUBLIC_Trace_Filter, 2, 0x08)))
#define ChkL1MsgFltr_UL1T_TRC_RSSI_SNIFFER1()	ChkL1ClsFltr_UL1C_PRI3_PUBLIC_UL1C_RS_H()
#define ChkL1MsgFltr_UL1I_TRC_RSSI_SNIFFER2()	ChkL1ClsFltr_UL1C_PRI3_PUBLIC_UL1C_RS_H()
#define ChkL1MsgFltr_UL1T_TRC_RSSI_SNIFFER3()	ChkL1ClsFltr_UL1C_PRI3_PUBLIC_UL1C_RS_H()
#define ChkL1MsgFltr_UL1T_TRC_TGPS_Act()	ChkL1ClsFltr_UL1C_PRI3_PUBLIC_UL1C_TGPS_H()
#define ChkL1MsgFltr_UL1I_TRC_TGPS_Frame()	ChkL1ClsFltr_UL1C_PRI3_PUBLIC_UL1C_TGPS_H()
#define ChkL1MsgFltr_UL1I_TRC_TGPS_Status()	ChkL1ClsFltr_UL1C_PRI3_PUBLIC_UL1C_TGPS_H()


#endif
