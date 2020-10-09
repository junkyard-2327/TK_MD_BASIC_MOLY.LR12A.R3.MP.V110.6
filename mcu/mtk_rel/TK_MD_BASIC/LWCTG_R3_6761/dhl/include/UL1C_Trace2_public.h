#ifndef L1TRC_UL1C_PRI2_PUBLIC_DEF_H
#define L1TRC_UL1C_PRI2_PUBLIC_DEF_H

/******************************/
/* String category definition */
/******************************/


/****************************/
/* Message macro definition */
/****************************/
#include "L1Trc.h"
#if defined(L1_CATCHER)
	#define UL1I_TRC_CTCH_Start(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_PUBLIC_Trace_Filter, 4, 0x01);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x00AC,0x00AC);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_PUBLIC_Trace_Filter, 4, 0x01);\
		}\
	} while(0)
#else
	#define UL1I_TRC_CTCH_Start(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_EnterMode(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_PUBLIC_Trace_Filter, 3, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x01AC,0x01AC);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_PUBLIC_Trace_Filter, 3, 0x10);\
		}\
	} while(0)
#else
	#define UL1I_TRC_EnterMode(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_SimStatus(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_PUBLIC_Trace_Filter, 3, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x02AC,0x02AC);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_PUBLIC_Trace_Filter, 3, 0x10);\
		}\
	} while(0)
#else
	#define UL1I_TRC_SimStatus(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define UL1T_TRC_SFN_Stop(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_PUBLIC_Trace_Filter, 3, 0x80);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x03AC,0x03AC);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_PUBLIC_Trace_Filter, 3, 0x80);\
		}\
	} while(0)
#else
	#define UL1T_TRC_SFN_Stop(v1)
#endif

#if defined(L1_CATCHER)
	#define UL1T_TRC_SFN_Start(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_PUBLIC_Trace_Filter, 3, 0x80);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x04AC,0x04AC);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_PUBLIC_Trace_Filter, 3, 0x80);\
		}\
	} while(0)
#else
	#define UL1T_TRC_SFN_Start(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define UL1T_TRC_SFN_Data(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_PUBLIC_Trace_Filter, 3, 0x80);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x05AC,0x05AC);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_PUBLIC_Trace_Filter, 3, 0x80);\
		}\
	} while(0)
#else
	#define UL1T_TRC_SFN_Data(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define UL1T_TRC_SIB_Start(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_PUBLIC_Trace_Filter, 3, 0x40);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v5,v5);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v6,v6);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v7,v7);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v8,v8);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v9,v9);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v10,v10);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v11,v11);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v5,v5);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v6,v6);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v7,v7);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v8,v8);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v9,v9);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v10,v10);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v11,v11);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x06AC,0x06AC);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v7,v7);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v8,v8);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v9,v9);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v10,v10);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v11,v11);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_PUBLIC_Trace_Filter, 3, 0x40);\
		}\
	} while(0)
#else
	#define UL1T_TRC_SIB_Start(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11)
#endif

#if defined(L1_CATCHER)
	#define UL1T_TRC_SIB_Reconfig(v1, v2, v3, v4, v5, v6, v7, v8) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_PUBLIC_Trace_Filter, 3, 0x40);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v5,v5);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v6,v6);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v7,v7);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v8,v8);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v5,v5);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v6,v6);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v7,v7);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v8,v8);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x07AC,0x07AC);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v7,v7);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v8,v8);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_PUBLIC_Trace_Filter, 3, 0x40);\
		}\
	} while(0)
#else
	#define UL1T_TRC_SIB_Reconfig(v1, v2, v3, v4, v5, v6, v7, v8)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_SIB_Rx(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_PUBLIC_Trace_Filter, 3, 0x40);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x08AC,0x08AC);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_PUBLIC_Trace_Filter, 3, 0x40);\
		}\
	} while(0)
#else
	#define UL1I_TRC_SIB_Rx(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_SIB_Rpt(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_PUBLIC_Trace_Filter, 3, 0x40);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x09AC,0x09AC);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_PUBLIC_Trace_Filter, 3, 0x40);\
		}\
	} while(0)
#else
	#define UL1I_TRC_SIB_Rpt(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define UL1T_TRC_CMAverager(v1, v2, v3, v4, v5, v6, v7, v8) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_PUBLIC_Trace_Filter, 4, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v5,v5);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v6,v6);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v7,v7);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v8,v8);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v5,v5);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v6,v6);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v7,v7);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v8,v8);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0AAC,0x0AAC);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v7,v7);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v8,v8);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_PUBLIC_Trace_Filter, 4, 0x04);\
		}\
	} while(0)
#else
	#define UL1T_TRC_CMAverager(v1, v2, v3, v4, v5, v6, v7, v8)
#endif

#if defined(L1_CATCHER)
	#define UL1T_TRC_CMAverager_RXD(v1, v2, v3, v4, v5, v6, v7, v8) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_PUBLIC_Trace_Filter, 4, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v5,v5);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v6,v6);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v7,v7);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v8,v8);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v5,v5);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v6,v6);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v7,v7);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v8,v8);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0BAC,0x0BAC);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v7,v7);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v8,v8);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_PUBLIC_Trace_Filter, 4, 0x04);\
		}\
	} while(0)
#else
	#define UL1T_TRC_CMAverager_RXD(v1, v2, v3, v4, v5, v6, v7, v8)
#endif

#if defined(L1_CATCHER)
	#define UL1T_TRC_CMAverager_MAX(v1, v2, v3, v4, v5, v6, v7, v8) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_PUBLIC_Trace_Filter, 4, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v5,v5);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v6,v6);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v7,v7);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v8,v8);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v5,v5);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v6,v6);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v7,v7);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v8,v8);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0CAC,0x0CAC);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v7,v7);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v8,v8);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_PUBLIC_Trace_Filter, 4, 0x04);\
		}\
	} while(0)
#else
	#define UL1T_TRC_CMAverager_MAX(v1, v2, v3, v4, v5, v6, v7, v8)
#endif

#if defined(L1_CATCHER)
	#define UL1T_TRC_CMAverager2(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_PUBLIC_Trace_Filter, 4, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0DAC,0x0DAC);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_PUBLIC_Trace_Filter, 4, 0x04);\
		}\
	} while(0)
#else
	#define UL1T_TRC_CMAverager2(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define UL1T_TRC_CMAverager2_RXD(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_PUBLIC_Trace_Filter, 4, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0EAC,0x0EAC);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_PUBLIC_Trace_Filter, 4, 0x04);\
		}\
	} while(0)
#else
	#define UL1T_TRC_CMAverager2_RXD(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UL1I_TRC_CSResult(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_PUBLIC_Trace_Filter, 1, 0x80);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0FAC,0x0FAC);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_PUBLIC_Trace_Filter, 1, 0x80);\
		}\
	} while(0)
#else
	#define UL1I_TRC_CSResult(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define UL1_TRC_CM_TASCurrentAnt(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_PUBLIC_Trace_Filter, 4, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x10AC,0x10AC);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_PUBLIC_Trace_Filter, 4, 0x02);\
		}\
	} while(0)
#else
	#define UL1_TRC_CM_TASCurrentAnt(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define UL1_TRC_CM_TASSelectDefaultAnt(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_PUBLIC_Trace_Filter, 4, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x11AC,0x11AC);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_PUBLIC_Trace_Filter, 4, 0x02);\
		}\
	} while(0)
#else
	#define UL1_TRC_CM_TASSelectDefaultAnt(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define UL1_TRC_CM_TASForceTxAnt(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_PUBLIC_Trace_Filter, 4, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x12AC,0x12AC);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_PUBLIC_Trace_Filter, 4, 0x02);\
		}\
	} while(0)
#else
	#define UL1_TRC_CM_TASForceTxAnt(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define UL1_TRC_CM_TASSwitchAnt(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_PUBLIC_Trace_Filter, 4, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x13AC,0x13AC);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_PUBLIC_Trace_Filter, 4, 0x02);\
		}\
	} while(0)
#else
	#define UL1_TRC_CM_TASSwitchAnt(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define UL1_TRC_CM_TASRevertSwitch(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_PUBLIC_Trace_Filter, 4, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x14AC,0x14AC);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_PUBLIC_Trace_Filter, 4, 0x02);\
		}\
	} while(0)
#else
	#define UL1_TRC_CM_TASRevertSwitch(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define UL1_TRC_CM_RAS_start_ras_status1(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_PUBLIC_Trace_Filter, 4, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x15AC,0x15AC);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_PUBLIC_Trace_Filter, 4, 0x02);\
		}\
	} while(0)
#else
	#define UL1_TRC_CM_RAS_start_ras_status1(v1)
#endif

#if defined(L1_CATCHER)
	#define UL1_TRC_CM_RAS_antennaonoff(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_PUBLIC_Trace_Filter, 4, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x16AC,0x16AC);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_PUBLIC_Trace_Filter, 4, 0x02);\
		}\
	} while(0)
#else
	#define UL1_TRC_CM_RAS_antennaonoff(v1)
#endif

#if defined(L1_CATCHER)
	#define UL1_TRC_CM_RAS_antennaonoff1(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_PUBLIC_Trace_Filter, 4, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x17AC,0x17AC);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_PUBLIC_Trace_Filter, 4, 0x02);\
		}\
	} while(0)
#else
	#define UL1_TRC_CM_RAS_antennaonoff1(v1)
#endif

#if defined(L1_CATCHER)
	#define UL1_TRC_CM_RAS_antennaonoff2(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI2_PUBLIC_Trace_Filter, 4, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x18AC,0x18AC);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI2_PUBLIC_Trace_Filter, 4, 0x02);\
		}\
	} while(0)
#else
	#define UL1_TRC_CM_RAS_antennaonoff2(v1)
#endif



/*******************************/
/* declaration of filter array */
/*******************************/
EXTERN_TMD_FILTER(unsigned char, UL1C_PRI2_PUBLIC_Trace_Filter, 5);
/*************************/
/* Function declarations */
/*************************/
#ifdef L1_CATCHER

void Set_UL1C_PRI2_PUBLIC_Filter(unsigned char *setting);

#endif

/************************************/
/* Filter checking API declarations */
/************************************/

#define ChkL1ModFltr_UL1C_PRI2_PUBLIC()	(FILTER_CHECK(UL1C_PRI2_PUBLIC_Trace_Filter, 0, 1))
#define ChkL1ClsFltr_UL1C_PRI2_PUBLIC_UL1C_CCM_L()	(ChkL1ModFltr_UL1C_PRI2_PUBLIC()&&(FILTER_CHECK(UL1C_PRI2_PUBLIC_Trace_Filter, 1, 0x01)))
#define ChkL1ClsFltr_UL1C_PRI2_PUBLIC_UL1C_TIMER_L()	(ChkL1ModFltr_UL1C_PRI2_PUBLIC()&&(FILTER_CHECK(UL1C_PRI2_PUBLIC_Trace_Filter, 1, 0x02)))
#define ChkL1ClsFltr_UL1C_PRI2_PUBLIC_UL1C_SIB_L()	(ChkL1ModFltr_UL1C_PRI2_PUBLIC()&&(FILTER_CHECK(UL1C_PRI2_PUBLIC_Trace_Filter, 1, 0x04)))
#define ChkL1ClsFltr_UL1C_PRI2_PUBLIC_UL1C_SFN_L()	(ChkL1ModFltr_UL1C_PRI2_PUBLIC()&&(FILTER_CHECK(UL1C_PRI2_PUBLIC_Trace_Filter, 1, 0x08)))
#define ChkL1ClsFltr_UL1C_PRI2_PUBLIC_UL1C_CTCH_L()	(ChkL1ModFltr_UL1C_PRI2_PUBLIC()&&(FILTER_CHECK(UL1C_PRI2_PUBLIC_Trace_Filter, 1, 0x10)))
#define ChkL1ClsFltr_UL1C_PRI2_PUBLIC_UL1C_CMM_L()	(ChkL1ModFltr_UL1C_PRI2_PUBLIC()&&(FILTER_CHECK(UL1C_PRI2_PUBLIC_Trace_Filter, 1, 0x20)))
#define ChkL1ClsFltr_UL1C_PRI2_PUBLIC_UL1C_AVG_L()	(ChkL1ModFltr_UL1C_PRI2_PUBLIC()&&(FILTER_CHECK(UL1C_PRI2_PUBLIC_Trace_Filter, 1, 0x40)))
#define ChkL1ClsFltr_UL1C_PRI2_PUBLIC_UL1C_CS_L()	(ChkL1ModFltr_UL1C_PRI2_PUBLIC()&&(FILTER_CHECK(UL1C_PRI2_PUBLIC_Trace_Filter, 1, 0x80)))
#define ChkL1ClsFltr_UL1C_PRI2_PUBLIC_UL1C_DM_L()	(ChkL1ModFltr_UL1C_PRI2_PUBLIC()&&(FILTER_CHECK(UL1C_PRI2_PUBLIC_Trace_Filter, 2, 0x01)))
#define ChkL1ClsFltr_UL1C_PRI2_PUBLIC_UL1C_RTB_L()	(ChkL1ModFltr_UL1C_PRI2_PUBLIC()&&(FILTER_CHECK(UL1C_PRI2_PUBLIC_Trace_Filter, 2, 0x02)))
#define ChkL1ClsFltr_UL1C_PRI2_PUBLIC_UL1C_CCM_M()	(ChkL1ModFltr_UL1C_PRI2_PUBLIC()&&(FILTER_CHECK(UL1C_PRI2_PUBLIC_Trace_Filter, 2, 0x04)))
#define ChkL1ClsFltr_UL1C_PRI2_PUBLIC_UL1C_TIMER_M()	(ChkL1ModFltr_UL1C_PRI2_PUBLIC()&&(FILTER_CHECK(UL1C_PRI2_PUBLIC_Trace_Filter, 2, 0x08)))
#define ChkL1ClsFltr_UL1C_PRI2_PUBLIC_UL1C_SIB_M()	(ChkL1ModFltr_UL1C_PRI2_PUBLIC()&&(FILTER_CHECK(UL1C_PRI2_PUBLIC_Trace_Filter, 2, 0x10)))
#define ChkL1ClsFltr_UL1C_PRI2_PUBLIC_UL1C_SFN_M()	(ChkL1ModFltr_UL1C_PRI2_PUBLIC()&&(FILTER_CHECK(UL1C_PRI2_PUBLIC_Trace_Filter, 2, 0x20)))
#define ChkL1ClsFltr_UL1C_PRI2_PUBLIC_UL1C_CTCH_M()	(ChkL1ModFltr_UL1C_PRI2_PUBLIC()&&(FILTER_CHECK(UL1C_PRI2_PUBLIC_Trace_Filter, 2, 0x40)))
#define ChkL1ClsFltr_UL1C_PRI2_PUBLIC_UL1C_CMM_M()	(ChkL1ModFltr_UL1C_PRI2_PUBLIC()&&(FILTER_CHECK(UL1C_PRI2_PUBLIC_Trace_Filter, 2, 0x80)))
#define ChkL1ClsFltr_UL1C_PRI2_PUBLIC_UL1C_AVG_M()	(ChkL1ModFltr_UL1C_PRI2_PUBLIC()&&(FILTER_CHECK(UL1C_PRI2_PUBLIC_Trace_Filter, 3, 0x01)))
#define ChkL1ClsFltr_UL1C_PRI2_PUBLIC_UL1C_CS_M()	(ChkL1ModFltr_UL1C_PRI2_PUBLIC()&&(FILTER_CHECK(UL1C_PRI2_PUBLIC_Trace_Filter, 3, 0x02)))
#define ChkL1ClsFltr_UL1C_PRI2_PUBLIC_UL1C_DM_M()	(ChkL1ModFltr_UL1C_PRI2_PUBLIC()&&(FILTER_CHECK(UL1C_PRI2_PUBLIC_Trace_Filter, 3, 0x04)))
#define ChkL1ClsFltr_UL1C_PRI2_PUBLIC_UL1C_RTB_M()	(ChkL1ModFltr_UL1C_PRI2_PUBLIC()&&(FILTER_CHECK(UL1C_PRI2_PUBLIC_Trace_Filter, 3, 0x08)))
#define ChkL1ClsFltr_UL1C_PRI2_PUBLIC_UL1C_CCM_H()	(ChkL1ModFltr_UL1C_PRI2_PUBLIC()&&(FILTER_CHECK(UL1C_PRI2_PUBLIC_Trace_Filter, 3, 0x10)))
#define ChkL1ClsFltr_UL1C_PRI2_PUBLIC_UL1C_TIMER_H()	(ChkL1ModFltr_UL1C_PRI2_PUBLIC()&&(FILTER_CHECK(UL1C_PRI2_PUBLIC_Trace_Filter, 3, 0x20)))
#define ChkL1ClsFltr_UL1C_PRI2_PUBLIC_UL1C_SIB_H()	(ChkL1ModFltr_UL1C_PRI2_PUBLIC()&&(FILTER_CHECK(UL1C_PRI2_PUBLIC_Trace_Filter, 3, 0x40)))
#define ChkL1ClsFltr_UL1C_PRI2_PUBLIC_UL1C_SFN_H()	(ChkL1ModFltr_UL1C_PRI2_PUBLIC()&&(FILTER_CHECK(UL1C_PRI2_PUBLIC_Trace_Filter, 3, 0x80)))
#define ChkL1ClsFltr_UL1C_PRI2_PUBLIC_UL1C_CTCH_H()	(ChkL1ModFltr_UL1C_PRI2_PUBLIC()&&(FILTER_CHECK(UL1C_PRI2_PUBLIC_Trace_Filter, 4, 0x01)))
#define ChkL1ClsFltr_UL1C_PRI2_PUBLIC_UL1C_CMM_H()	(ChkL1ModFltr_UL1C_PRI2_PUBLIC()&&(FILTER_CHECK(UL1C_PRI2_PUBLIC_Trace_Filter, 4, 0x02)))
#define ChkL1ClsFltr_UL1C_PRI2_PUBLIC_UL1C_AVG_H()	(ChkL1ModFltr_UL1C_PRI2_PUBLIC()&&(FILTER_CHECK(UL1C_PRI2_PUBLIC_Trace_Filter, 4, 0x04)))
#define ChkL1ClsFltr_UL1C_PRI2_PUBLIC_UL1C_CS_H()	(ChkL1ModFltr_UL1C_PRI2_PUBLIC()&&(FILTER_CHECK(UL1C_PRI2_PUBLIC_Trace_Filter, 4, 0x08)))
#define ChkL1ClsFltr_UL1C_PRI2_PUBLIC_UL1C_DM_H()	(ChkL1ModFltr_UL1C_PRI2_PUBLIC()&&(FILTER_CHECK(UL1C_PRI2_PUBLIC_Trace_Filter, 4, 0x10)))
#define ChkL1ClsFltr_UL1C_PRI2_PUBLIC_UL1C_RTB_H()	(ChkL1ModFltr_UL1C_PRI2_PUBLIC()&&(FILTER_CHECK(UL1C_PRI2_PUBLIC_Trace_Filter, 4, 0x20)))
#define ChkL1MsgFltr_UL1I_TRC_CTCH_Start()	ChkL1ClsFltr_UL1C_PRI2_PUBLIC_UL1C_CTCH_H()
#define ChkL1MsgFltr_UL1I_TRC_EnterMode()	ChkL1ClsFltr_UL1C_PRI2_PUBLIC_UL1C_CCM_H()
#define ChkL1MsgFltr_UL1I_TRC_SimStatus()	ChkL1ClsFltr_UL1C_PRI2_PUBLIC_UL1C_CCM_H()
#define ChkL1MsgFltr_UL1T_TRC_SFN_Stop()	ChkL1ClsFltr_UL1C_PRI2_PUBLIC_UL1C_SFN_H()
#define ChkL1MsgFltr_UL1T_TRC_SFN_Start()	ChkL1ClsFltr_UL1C_PRI2_PUBLIC_UL1C_SFN_H()
#define ChkL1MsgFltr_UL1T_TRC_SFN_Data()	ChkL1ClsFltr_UL1C_PRI2_PUBLIC_UL1C_SFN_H()
#define ChkL1MsgFltr_UL1T_TRC_SIB_Start()	ChkL1ClsFltr_UL1C_PRI2_PUBLIC_UL1C_SIB_H()
#define ChkL1MsgFltr_UL1T_TRC_SIB_Reconfig()	ChkL1ClsFltr_UL1C_PRI2_PUBLIC_UL1C_SIB_H()
#define ChkL1MsgFltr_UL1I_TRC_SIB_Rx()	ChkL1ClsFltr_UL1C_PRI2_PUBLIC_UL1C_SIB_H()
#define ChkL1MsgFltr_UL1I_TRC_SIB_Rpt()	ChkL1ClsFltr_UL1C_PRI2_PUBLIC_UL1C_SIB_H()
#define ChkL1MsgFltr_UL1T_TRC_CMAverager()	ChkL1ClsFltr_UL1C_PRI2_PUBLIC_UL1C_AVG_H()
#define ChkL1MsgFltr_UL1T_TRC_CMAverager_RXD()	ChkL1ClsFltr_UL1C_PRI2_PUBLIC_UL1C_AVG_H()
#define ChkL1MsgFltr_UL1T_TRC_CMAverager_MAX()	ChkL1ClsFltr_UL1C_PRI2_PUBLIC_UL1C_AVG_H()
#define ChkL1MsgFltr_UL1T_TRC_CMAverager2()	ChkL1ClsFltr_UL1C_PRI2_PUBLIC_UL1C_AVG_H()
#define ChkL1MsgFltr_UL1T_TRC_CMAverager2_RXD()	ChkL1ClsFltr_UL1C_PRI2_PUBLIC_UL1C_AVG_H()
#define ChkL1MsgFltr_UL1I_TRC_CSResult()	ChkL1ClsFltr_UL1C_PRI2_PUBLIC_UL1C_CS_L()
#define ChkL1MsgFltr_UL1_TRC_CM_TASCurrentAnt()	ChkL1ClsFltr_UL1C_PRI2_PUBLIC_UL1C_CMM_H()
#define ChkL1MsgFltr_UL1_TRC_CM_TASSelectDefaultAnt()	ChkL1ClsFltr_UL1C_PRI2_PUBLIC_UL1C_CMM_H()
#define ChkL1MsgFltr_UL1_TRC_CM_TASForceTxAnt()	ChkL1ClsFltr_UL1C_PRI2_PUBLIC_UL1C_CMM_H()
#define ChkL1MsgFltr_UL1_TRC_CM_TASSwitchAnt()	ChkL1ClsFltr_UL1C_PRI2_PUBLIC_UL1C_CMM_H()
#define ChkL1MsgFltr_UL1_TRC_CM_TASRevertSwitch()	ChkL1ClsFltr_UL1C_PRI2_PUBLIC_UL1C_CMM_H()
#define ChkL1MsgFltr_UL1_TRC_CM_RAS_start_ras_status1()	ChkL1ClsFltr_UL1C_PRI2_PUBLIC_UL1C_CMM_H()
#define ChkL1MsgFltr_UL1_TRC_CM_RAS_antennaonoff()	ChkL1ClsFltr_UL1C_PRI2_PUBLIC_UL1C_CMM_H()
#define ChkL1MsgFltr_UL1_TRC_CM_RAS_antennaonoff1()	ChkL1ClsFltr_UL1C_PRI2_PUBLIC_UL1C_CMM_H()
#define ChkL1MsgFltr_UL1_TRC_CM_RAS_antennaonoff2()	ChkL1ClsFltr_UL1C_PRI2_PUBLIC_UL1C_CMM_H()


#endif
