#ifndef L1TRC_UL1C_PRI1_DEF_H
#define L1TRC_UL1C_PRI1_DEF_H

/******************************/
/* String category definition */
/******************************/


/****************************/
/* Message macro definition */
/****************************/
#include "L1Trc.h"
#if defined(L1_CATCHER)
	#define UL1I_TRC_CM_Obsolete(v1, v2, v3, v4, v5, v6) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 3, 0x10);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0099,0x0099);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 3, 0x10);\
		}\
	} while(0)
#else
	#define UL1I_TRC_CM_Obsolete(v1, v2, v3, v4, v5, v6)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_PS_TASFreqScanAnt(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 3, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0199,0x0199);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 3, 0x10);\
		}\
	} while(0)
#else
	#define UL1I_TRC_PS_TASFreqScanAnt(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_PS_Result(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 3, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0299,0x0299);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 3, 0x10);\
		}\
	} while(0)
#else
	#define UL1I_TRC_PS_Result(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_PS_SortedFreq(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 3, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0399,0x0399);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 3, 0x10);\
		}\
	} while(0)
#else
	#define UL1I_TRC_PS_SortedFreq(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_FS_State(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 3, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0499,0x0499);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 3, 0x10);\
		}\
	} while(0)
#else
	#define UL1I_TRC_FS_State(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_FS_UL1_Suspend(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 3, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0599,0x0599);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 3, 0x10);\
		}\
	} while(0)
#else
	#define UL1I_TRC_FS_UL1_Suspend(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_FS_FB_PwrScanNext(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 3, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0699,0x0699);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 3, 0x10);\
		}\
	} while(0)
#else
	#define UL1I_TRC_FS_FB_PwrScanNext(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_FS_AutoGap_State(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 3, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0799,0x0799);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 3, 0x10);\
		}\
	} while(0)
#else
	#define UL1I_TRC_FS_AutoGap_State(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_FS_ScanSuspend(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 3, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0899,0x0899);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 3, 0x10);\
		}\
	} while(0)
#else
	#define UL1I_TRC_FS_ScanSuspend(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_FS_ProcessScanStart(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 3, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0999,0x0999);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 3, 0x10);\
		}\
	} while(0)
#else
	#define UL1I_TRC_FS_ProcessScanStart(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_FS_NextFullbandAnt(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 3, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0A99,0x0A99);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 3, 0x10);\
		}\
	} while(0)
#else
	#define UL1I_TRC_FS_NextFullbandAnt(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_FS_SuspendFullbandScan(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 3, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0B99,0x0B99);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 3, 0x10);\
		}\
	} while(0)
#else
	#define UL1I_TRC_FS_SuspendFullbandScan(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_FS_SetFullbandAntenna(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 3, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0C99,0x0C99);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 3, 0x10);\
		}\
	} while(0)
#else
	#define UL1I_TRC_FS_SetFullbandAntenna(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_CSFB_SRVCC_4GInheritantena(v1, v2, v3, v4, v5, v6, v7) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 3, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v5,v5);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v6,v6);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v7,v7);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v5,v5);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v6,v6);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v7,v7);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0D99,0x0D99);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v7,v7);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 3, 0x10);\
		}\
	} while(0)
#else
	#define UL1I_TRC_CSFB_SRVCC_4GInheritantena(v1, v2, v3, v4, v5, v6, v7)
#endif

#if defined(L1_CATCHER)
	#define UL1T_TRC_ECS_Start(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 3, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0E99,0x0E99);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 3, 0x10);\
		}\
	} while(0)
#else
	#define UL1T_TRC_ECS_Start(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define UL1T_TRC_ECS_Stop(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 3, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0F99,0x0F99);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 3, 0x10);\
		}\
	} while(0)
#else
	#define UL1T_TRC_ECS_Stop(v1)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_ECS_InternalStop(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 3, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1099,0x1099);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 3, 0x10);\
		}\
	} while(0)
#else
	#define UL1I_TRC_ECS_InternalStop(v1)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_ECS_Status(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 3, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1199,0x1199);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 3, 0x10);\
		}\
	} while(0)
#else
	#define UL1I_TRC_ECS_Status(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_ECS_Result(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 3, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1299,0x1299);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 3, 0x10);\
		}\
	} while(0)
#else
	#define UL1I_TRC_ECS_Result(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_FS_BeforeGetPendingResult(v1, v2, v3, v4, v5, v6) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 3, 0x10);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1399,0x1399);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 3, 0x10);\
		}\
	} while(0)
#else
	#define UL1I_TRC_FS_BeforeGetPendingResult(v1, v2, v3, v4, v5, v6)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_FS_AfterGetPendingResult(v1, v2, v3, v4, v5, v6) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 3, 0x10);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1499,0x1499);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 3, 0x10);\
		}\
	} while(0)
#else
	#define UL1I_TRC_FS_AfterGetPendingResult(v1, v2, v3, v4, v5, v6)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_FS_AfterResume(v1, v2, v3, v4, v5, v6) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 3, 0x10);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1599,0x1599);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 3, 0x10);\
		}\
	} while(0)
#else
	#define UL1I_TRC_FS_AfterResume(v1, v2, v3, v4, v5, v6)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_HFS_DBG(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 3, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1699,0x1699);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 3, 0x10);\
		}\
	} while(0)
#else
	#define UL1I_TRC_HFS_DBG(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_HFS_DBG2(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 3, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1799,0x1799);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 3, 0x10);\
		}\
	} while(0)
#else
	#define UL1I_TRC_HFS_DBG2(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_HFS_Reset(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 3, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1899,0x1899);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 3, 0x10);\
		}\
	} while(0)
#else
	#define UL1I_TRC_HFS_Reset(v1)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_HFS_ValidFrequency(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 3, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1999,0x1999);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 3, 0x10);\
		}\
	} while(0)
#else
	#define UL1I_TRC_HFS_ValidFrequency(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_HFS_FinalFrequencyNum(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 3, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1A99,0x1A99);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 3, 0x10);\
		}\
	} while(0)
#else
	#define UL1I_TRC_HFS_FinalFrequencyNum(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_Get_ULDCHData(v1, v2, v3, v4, v5, v6) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x01);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1B99,0x1B99);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x01);\
		}\
	} while(0)
#else
	#define UL1I_TRC_Get_ULDCHData(v1, v2, v3, v4, v5, v6)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_Get_ULDCHTRCHData(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x01);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1C99,0x1C99);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x01);\
		}\
	} while(0)
#else
	#define UL1I_TRC_Get_ULDCHTRCHData(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_UL_Timer_TFC_CB(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1D99,0x1D99);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x01);\
		}\
	} while(0)
#else
	#define UL1I_TRC_UL_Timer_TFC_CB(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_UL_Timer_Data_CB(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1E99,0x1E99);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x01);\
		}\
	} while(0)
#else
	#define UL1I_TRC_UL_Timer_Data_CB(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define UL1T_TRC_Report_ULCB_Data(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1F99,0x1F99);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x01);\
		}\
	} while(0)
#else
	#define UL1T_TRC_Report_ULCB_Data(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define UL1T_TRC_Report_ULCB_TFC(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x2099,0x2099);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x01);\
		}\
	} while(0)
#else
	#define UL1T_TRC_Report_ULCB_TFC(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_StopULDCh(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x2199,0x2199);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x01);\
		}\
	} while(0)
#else
	#define UL1I_TRC_StopULDCh(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_ULDCH_next_timer_delay(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x2299,0x2299);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x01);\
		}\
	} while(0)
#else
	#define UL1I_TRC_ULDCH_next_timer_delay(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_ULDCH_UL1D_Intf(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x2399,0x2399);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x01);\
		}\
	} while(0)
#else
	#define UL1I_TRC_ULDCH_UL1D_Intf(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_ULDCH_Set_MAC_Event(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x2499,0x2499);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x01);\
		}\
	} while(0)
#else
	#define UL1I_TRC_ULDCH_Set_MAC_Event(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_ULDCH_TxPwr_Info_DuringBHHO(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x2599,0x2599);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x01);\
		}\
	} while(0)
#else
	#define UL1I_TRC_ULDCH_TxPwr_Info_DuringBHHO(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_RefDCH(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 3, 0x80);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x2699,0x2699);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 3, 0x80);\
		}\
	} while(0)
#else
	#define UL1I_TRC_RefDCH(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_RefDCHCFN(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 3, 0x80);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x2799,0x2799);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 3, 0x80);\
		}\
	} while(0)
#else
	#define UL1I_TRC_RefDCHCFN(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_DLSync_Qin(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 3, 0x80);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x2899,0x2899);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 3, 0x80);\
		}\
	} while(0)
#else
	#define UL1I_TRC_DLSync_Qin(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define UL1T_TRC_ReconfigDCH(v1, v2, v3, v4, v5, v6, v7, v8) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 3, 0x80);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x2999,0x2999);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v7,v7);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v8,v8);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 3, 0x80);\
		}\
	} while(0)
#else
	#define UL1T_TRC_ReconfigDCH(v1, v2, v3, v4, v5, v6, v7, v8)
#endif

#if defined(L1_CATCHER)
	#define UL1T_TRC_ReconfigDCH_ASAP(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 3, 0x80);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x2A99,0x2A99);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 3, 0x80);\
		}\
	} while(0)
#else
	#define UL1T_TRC_ReconfigDCH_ASAP(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define UL1T_TRC_LoopMode2(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 3, 0x80);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x2B99,0x2B99);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 3, 0x80);\
		}\
	} while(0)
#else
	#define UL1T_TRC_LoopMode2(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_ASU(v1, v2, v3, v4, v5, v6) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 3, 0x80);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x2C99,0x2C99);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 3, 0x80);\
		}\
	} while(0)
#else
	#define UL1I_TRC_ASU(v1, v2, v3, v4, v5, v6)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_DL_CRC_Value(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 3, 0x80);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x2D99,0x2D99);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 3, 0x80);\
		}\
	} while(0)
#else
	#define UL1I_TRC_DL_CRC_Value(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_DL_Sync_Type(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 3, 0x80);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x2E99,0x2E99);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 3, 0x80);\
		}\
	} while(0)
#else
	#define UL1I_TRC_DL_Sync_Type(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_DL_Sync_Info(v1, v2, v3, v4, v5, v6) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 3, 0x80);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x2F99,0x2F99);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 3, 0x80);\
		}\
	} while(0)
#else
	#define UL1I_TRC_DL_Sync_Info(v1, v2, v3, v4, v5, v6)
#endif

#if defined(L1_CATCHER)
	#define UL1T_TRC_ReconfigDCH_TTI(v1, v2, v3, v4, v5, v6, v7) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 3, 0x80);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v5,v5);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v6,v6);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v7,v7);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v5,v5);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v6,v6);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v7,v7);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x3099,0x3099);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v7,v7);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 3, 0x80);\
		}\
	} while(0)
#else
	#define UL1T_TRC_ReconfigDCH_TTI(v1, v2, v3, v4, v5, v6, v7)
#endif

#if defined(L1_CATCHER)
	#define UL1T_TRC_ReconfigDCH_TGPS(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 3, 0x80);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x3199,0x3199);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 3, 0x80);\
		}\
	} while(0)
#else
	#define UL1T_TRC_ReconfigDCH_TGPS(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define UL1T_TRC_ReconfigDCH_R5R6(v1, v2, v3, v4, v5, v6) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 3, 0x80);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x3299,0x3299);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 3, 0x80);\
		}\
	} while(0)
#else
	#define UL1T_TRC_ReconfigDCH_R5R6(v1, v2, v3, v4, v5, v6)
#endif

#if defined(L1_CATCHER)
	#define UL1T_TRC_Modify_Abort(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 3, 0x80);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x3399,0x3399);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 3, 0x80);\
		}\
	} while(0)
#else
	#define UL1T_TRC_Modify_Abort(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_UpdateDpchRl(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 3, 0x80);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x3499,0x3499);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 3, 0x80);\
		}\
	} while(0)
#else
	#define UL1I_TRC_UpdateDpchRl(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define UL1T_TRC_Sec_ASU_Config(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 3, 0x80);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x3599,0x3599);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 3, 0x80);\
		}\
	} while(0)
#else
	#define UL1T_TRC_Sec_ASU_Config(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_Sec_DLDCH_Config(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 3, 0x80);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x3699,0x3699);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 3, 0x80);\
		}\
	} while(0)
#else
	#define UL1I_TRC_Sec_DLDCH_Config(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_DLDCH_TriggerExtendRLF(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 3, 0x80);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x3799,0x3799);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 3, 0x80);\
		}\
	} while(0)
#else
	#define UL1I_TRC_DLDCH_TriggerExtendRLF(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_DLSync_HsStuck(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 3, 0x80);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x3899,0x3899);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 3, 0x80);\
		}\
	} while(0)
#else
	#define UL1I_TRC_DLSync_HsStuck(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_FMO_Config(v1, v2, v3, v4, v5, v6, v7) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v5,v5);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v6,v6);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v7,v7);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v5,v5);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v6,v6);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v7,v7);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x3999,0x3999);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v7,v7);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x04);\
		}\
	} while(0)
#else
	#define UL1I_TRC_FMO_Config(v1, v2, v3, v4, v5, v6, v7)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_FACH_Data(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x3A99,0x3A99);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x04);\
		}\
	} while(0)
#else
	#define UL1I_TRC_FACH_Data(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_DRX_GAP(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x3B99,0x3B99);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x04);\
		}\
	} while(0)
#else
	#define UL1I_TRC_DRX_GAP(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_DRX_Change(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x3C99,0x3C99);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x04);\
		}\
	} while(0)
#else
	#define UL1I_TRC_DRX_Change(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define UL1_TRC_FMO_LOCK(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x3D99,0x3D99);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x04);\
		}\
	} while(0)
#else
	#define UL1_TRC_FMO_LOCK(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_FMO_Timer_Started(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x3E99,0x3E99);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x04);\
		}\
	} while(0)
#else
	#define UL1I_TRC_FMO_Timer_Started(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_SCS_State(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 3, 0x20);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x3F99,0x3F99);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 3, 0x20);\
		}\
	} while(0)
#else
	#define UL1I_TRC_SCS_State(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_SCS_Conflict(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 3, 0x20);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x4099,0x4099);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 3, 0x20);\
		}\
	} while(0)
#else
	#define UL1I_TRC_SCS_Conflict(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_SCS_ResourceConflict(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 3, 0x20);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x4199,0x4199);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 3, 0x20);\
		}\
	} while(0)
#else
	#define UL1I_TRC_SCS_ResourceConflict(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_SCS_Resource(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 3, 0x20);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x4299,0x4299);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 3, 0x20);\
		}\
	} while(0)
#else
	#define UL1I_TRC_SCS_Resource(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_SCS_Init(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 3, 0x20);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x4399,0x4399);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 3, 0x20);\
		}\
	} while(0)
#else
	#define UL1I_TRC_SCS_Init(v1)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_PCH_Status(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x4499,0x4499);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x02);\
		}\
	} while(0)
#else
	#define UL1I_TRC_PCH_Status(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_PCH_PICHOverlapFrames(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x4599,0x4599);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x02);\
		}\
	} while(0)
#else
	#define UL1I_TRC_PCH_PICHOverlapFrames(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_ReconfigPCH(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x4699,0x4699);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x02);\
		}\
	} while(0)
#else
	#define UL1I_TRC_ReconfigPCH(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_TwoPhaseSrchPI_PCHType_Debug(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x4799,0x4799);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x02);\
		}\
	} while(0)
#else
	#define UL1I_TRC_TwoPhaseSrchPI_PCHType_Debug(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_TwoPhaseSrchPI_GAPType_Debug(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x02);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x4899,0x4899);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x02);\
		}\
	} while(0)
#else
	#define UL1I_TRC_TwoPhaseSrchPI_GAPType_Debug(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_Reschedule_PCH(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x4999,0x4999);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x02);\
		}\
	} while(0)
#else
	#define UL1I_TRC_Reschedule_PCH(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_PCH_SetType(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x4A99,0x4A99);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x02);\
		}\
	} while(0)
#else
	#define UL1I_TRC_PCH_SetType(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_TwoPhaseSrchPI_GAP(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x4B99,0x4B99);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x02);\
		}\
	} while(0)
#else
	#define UL1I_TRC_TwoPhaseSrchPI_GAP(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_PCH_Frames_debug(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x4C99,0x4C99);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x02);\
		}\
	} while(0)
#else
	#define UL1I_TRC_PCH_Frames_debug(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_TwoPhaseSrchPI_Res(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x4D99,0x4D99);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x02);\
		}\
	} while(0)
#else
	#define UL1I_TRC_TwoPhaseSrchPI_Res(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_PCH_Type(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x4E99,0x4E99);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x02);\
		}\
	} while(0)
#else
	#define UL1I_TRC_PCH_Type(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_PCH_drx_cycle2_life(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x4F99,0x4F99);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x02);\
		}\
	} while(0)
#else
	#define UL1I_TRC_PCH_drx_cycle2_life(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_PCH_SmartPagingState(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x5099,0x5099);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x02);\
		}\
	} while(0)
#else
	#define UL1I_TRC_PCH_SmartPagingState(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_PCH_SmartPagingEvaluate(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x5199,0x5199);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x02);\
		}\
	} while(0)
#else
	#define UL1I_TRC_PCH_SmartPagingEvaluate(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_PCH_SmartPagingLog(v1, v2, v3, v4, v5, v6, v7, v8, v9) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v5,v5);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v6,v6);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v7,v7);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v8,v8);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v9,v9);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x5299,0x5299);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v7,v7);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v8,v8);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v9,v9);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x02);\
		}\
	} while(0)
#else
	#define UL1I_TRC_PCH_SmartPagingLog(v1, v2, v3, v4, v5, v6, v7, v8, v9)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_PCH_SmartCSState(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x5399,0x5399);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x02);\
		}\
	} while(0)
#else
	#define UL1I_TRC_PCH_SmartCSState(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define UL1T_TRC_PCH_SmartCSLog(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x02);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x5499,0x5499);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v7,v7);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v8,v8);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v9,v9);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v10,v10);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x02);\
		}\
	} while(0)
#else
	#define UL1T_TRC_PCH_SmartCSLog(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_PCH_SmartCSSkip(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x5599,0x5599);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x02);\
		}\
	} while(0)
#else
	#define UL1I_TRC_PCH_SmartCSSkip(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_PCH_SmartCMBypass(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x5699,0x5699);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x02);\
		}\
	} while(0)
#else
	#define UL1I_TRC_PCH_SmartCMBypass(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_PCH_SmartCMPeriodicSwitch(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x5799,0x5799);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x02);\
		}\
	} while(0)
#else
	#define UL1I_TRC_PCH_SmartCMPeriodicSwitch(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_PCH_UL1D_Start_PCH(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x5899,0x5899);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x02);\
		}\
	} while(0)
#else
	#define UL1I_TRC_PCH_UL1D_Start_PCH(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_PCH_UL1D_Stop_PCH(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x5999,0x5999);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x02);\
		}\
	} while(0)
#else
	#define UL1I_TRC_PCH_UL1D_Stop_PCH(v1)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_PCH_UL1D_CheckResource(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x02);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x5A99,0x5A99);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x02);\
		}\
	} while(0)
#else
	#define UL1I_TRC_PCH_UL1D_CheckResource(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_PCH_SleepEnable(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x5B99,0x5B99);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x02);\
		}\
	} while(0)
#else
	#define UL1I_TRC_PCH_SleepEnable(v1)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_PCH_SleepDisable(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x5C99,0x5C99);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x02);\
		}\
	} while(0)
#else
	#define UL1I_TRC_PCH_SleepDisable(v1)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_PCH_Start_PCHWakeup(v1, v2, v3, v4, v5, v6, v7) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v5,v5);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v6,v6);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v7,v7);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v5,v5);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v6,v6);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v7,v7);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x5D99,0x5D99);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v7,v7);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x02);\
		}\
	} while(0)
#else
	#define UL1I_TRC_PCH_Start_PCHWakeup(v1, v2, v3, v4, v5, v6, v7)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_PCH_ChangeTo_NormalPI(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x5E99,0x5E99);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x02);\
		}\
	} while(0)
#else
	#define UL1I_TRC_PCH_ChangeTo_NormalPI(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_PCH_NormalPI_Period(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x5F99,0x5F99);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x02);\
		}\
	} while(0)
#else
	#define UL1I_TRC_PCH_NormalPI_Period(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_PCH_RescheduleRTBTimer(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x6099,0x6099);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x02);\
		}\
	} while(0)
#else
	#define UL1I_TRC_PCH_RescheduleRTBTimer(v1)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_PCH_RescheduleRTBTimerFlag(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x6199,0x6199);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x02);\
		}\
	} while(0)
#else
	#define UL1I_TRC_PCH_RescheduleRTBTimerFlag(v1)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_PCH_RescheduleRTBTimerImm(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x6299,0x6299);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x02);\
		}\
	} while(0)
#else
	#define UL1I_TRC_PCH_RescheduleRTBTimerImm(v1)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_PCH_Check_MPS_Ahead_Dbg(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x02);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x6399,0x6399);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x02);\
		}\
	} while(0)
#else
	#define UL1I_TRC_PCH_Check_MPS_Ahead_Dbg(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_PCH_RxDEnSkip(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x6499,0x6499);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x02);\
		}\
	} while(0)
#else
	#define UL1I_TRC_PCH_RxDEnSkip(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_PCH_RxDSwitchDelay(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x6599,0x6599);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x02);\
		}\
	} while(0)
#else
	#define UL1I_TRC_PCH_RxDSwitchDelay(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_PCH_RxDEcnoRscpMain(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x6699,0x6699);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x02);\
		}\
	} while(0)
#else
	#define UL1I_TRC_PCH_RxDEcnoRscpMain(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_PCH_RxDEcnoRscpDiv(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x6799,0x6799);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x02);\
		}\
	} while(0)
#else
	#define UL1I_TRC_PCH_RxDEcnoRscpDiv(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_PCH_RxDServingInfo(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x6899,0x6899);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x02);\
		}\
	} while(0)
#else
	#define UL1I_TRC_PCH_RxDServingInfo(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_PCH_Test_Sim_Status(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x6999,0x6999);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x02);\
		}\
	} while(0)
#else
	#define UL1I_TRC_PCH_Test_Sim_Status(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_PCH_TASEvaluate(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x6A99,0x6A99);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x02);\
		}\
	} while(0)
#else
	#define UL1I_TRC_PCH_TASEvaluate(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_PCH_TASProcOngoing(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x6B99,0x6B99);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x02);\
		}\
	} while(0)
#else
	#define UL1I_TRC_PCH_TASProcOngoing(v1)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_PCH_TASStartTimer(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x6C99,0x6C99);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x02);\
		}\
	} while(0)
#else
	#define UL1I_TRC_PCH_TASStartTimer(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_PCH_TASTriggerUnsync(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x6D99,0x6D99);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x02);\
		}\
	} while(0)
#else
	#define UL1I_TRC_PCH_TASTriggerUnsync(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_PCH_Force_Normal_Status(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x6E99,0x6E99);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x02);\
		}\
	} while(0)
#else
	#define UL1I_TRC_PCH_Force_Normal_Status(v1)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_RAChData(v1, v2, v3, v4, v5, v6) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x08);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x6F99,0x6F99);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x08);\
		}\
	} while(0)
#else
	#define UL1I_TRC_RAChData(v1, v2, v3, v4, v5, v6)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_RACH_ASCSetting(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x7099,0x7099);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x08);\
		}\
	} while(0)
#else
	#define UL1I_TRC_RACH_ASCSetting(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_Get_Access_Slot(v1, v2, v3, v4, v5, v6) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x08);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x7199,0x7199);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x08);\
		}\
	} while(0)
#else
	#define UL1I_TRC_Get_Access_Slot(v1, v2, v3, v4, v5, v6)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_RACH_Start(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x7299,0x7299);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x08);\
		}\
	} while(0)
#else
	#define UL1I_TRC_RACH_Start(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_RACH_NextASS(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x7399,0x7399);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x08);\
		}\
	} while(0)
#else
	#define UL1I_TRC_RACH_NextASS(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_DelayTxAccess_CCM(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x08);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x7499,0x7499);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x08);\
		}\
	} while(0)
#else
	#define UL1I_TRC_DelayTxAccess_CCM(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_DelayTxAccess_FMO(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x7599,0x7599);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x08);\
		}\
	} while(0)
#else
	#define UL1I_TRC_DelayTxAccess_FMO(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UL1T_TRC_InitReport(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 2, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x7699,0x7699);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 2, 0x01);\
		}\
	} while(0)
#else
	#define UL1T_TRC_InitReport(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define UL1AC_TRC_EvtReport(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x7799,0x7799);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x10);\
		}\
	} while(0)
#else
	#define UL1AC_TRC_EvtReport(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_AllocDlDataReport(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x7899,0x7899);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x10);\
		}\
	} while(0)
#else
	#define UL1I_TRC_AllocDlDataReport(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_FreeDLDataReport(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x7999,0x7999);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x10);\
		}\
	} while(0)
#else
	#define UL1I_TRC_FreeDLDataReport(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UL1_TRC_FreeReport(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 2, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x7A99,0x7A99);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 2, 0x01);\
		}\
	} while(0)
#else
	#define UL1_TRC_FreeReport(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UL1T_TRC_HoldReport(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 2, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x7B99,0x7B99);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 2, 0x01);\
		}\
	} while(0)
#else
	#define UL1T_TRC_HoldReport(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define UL1_TRC_Dbg_AllocReport(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x7C99,0x7C99);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x10);\
		}\
	} while(0)
#else
	#define UL1_TRC_Dbg_AllocReport(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define UL1_TRC_Dbg_SendReport(v1, v2, v3, v4, v5, v6) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x10);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x7D99,0x7D99);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x10);\
		}\
	} while(0)
#else
	#define UL1_TRC_Dbg_SendReport(v1, v2, v3, v4, v5, v6)
#endif

#if defined(L1_CATCHER)
	#define UL1_TRC_SFN_Report_Callback(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x7E99,0x7E99);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x10);\
		}\
	} while(0)
#else
	#define UL1_TRC_SFN_Report_Callback(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define UL1_TRC_Dbg_AllocDataBuffer(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x7F99,0x7F99);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x10);\
		}\
	} while(0)
#else
	#define UL1_TRC_Dbg_AllocDataBuffer(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define UL1_TRC_Dbg_FreeDataBuffer(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x8099,0x8099);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x10);\
		}\
	} while(0)
#else
	#define UL1_TRC_Dbg_FreeDataBuffer(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_UL1D_State_Conflict(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x8199,0x8199);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 4, 0x10);\
		}\
	} while(0)
#else
	#define UL1I_TRC_UL1D_State_Conflict(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UL1T_TRC_EM_Switch(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 2, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x8299,0x8299);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 2, 0x04);\
		}\
	} while(0)
#else
	#define UL1T_TRC_EM_Switch(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UL1T_TRC_EM_RL_Sync_Switch(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 2, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x8399,0x8399);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 2, 0x04);\
		}\
	} while(0)
#else
	#define UL1T_TRC_EM_RL_Sync_Switch(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UL1I_TRC_EM_Switch(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 2, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x8499,0x8499);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 2, 0x04);\
		}\
	} while(0)
#else
	#define UL1I_TRC_EM_Switch(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define UL1T_TRC_REDUMP(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 2, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x8599,0x8599);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_Trace_Filter, 2, 0x02);\
		}\
	} while(0)
#else
	#define UL1T_TRC_REDUMP(v1)
#endif



/*******************************/
/* declaration of filter array */
/*******************************/
EXTERN_TMD_FILTER(unsigned char, UL1C_PRI1_Trace_Filter, 5);
/*************************/
/* Function declarations */
/*************************/
#ifdef L1_CATCHER

void Set_UL1C_PRI1_Filter(unsigned char *setting);

#endif

/************************************/
/* Filter checking API declarations */
/************************************/

#define ChkL1ModFltr_UL1C_PRI1()	(FILTER_CHECK(UL1C_PRI1_Trace_Filter, 0, 1))
#define ChkL1ClsFltr_UL1C_PRI1_UL1C_FS_L()	(ChkL1ModFltr_UL1C_PRI1()&&(FILTER_CHECK(UL1C_PRI1_Trace_Filter, 1, 0x01)))
#define ChkL1ClsFltr_UL1C_PRI1_UL1C_SCS_L()	(ChkL1ModFltr_UL1C_PRI1()&&(FILTER_CHECK(UL1C_PRI1_Trace_Filter, 1, 0x02)))
#define ChkL1ClsFltr_UL1C_PRI1_UL1C_CM_L()	(ChkL1ModFltr_UL1C_PRI1()&&(FILTER_CHECK(UL1C_PRI1_Trace_Filter, 1, 0x04)))
#define ChkL1ClsFltr_UL1C_PRI1_UL1C_DLDCH_L()	(ChkL1ModFltr_UL1C_PRI1()&&(FILTER_CHECK(UL1C_PRI1_Trace_Filter, 1, 0x08)))
#define ChkL1ClsFltr_UL1C_PRI1_UL1C_ULDCH_L()	(ChkL1ModFltr_UL1C_PRI1()&&(FILTER_CHECK(UL1C_PRI1_Trace_Filter, 1, 0x10)))
#define ChkL1ClsFltr_UL1C_PRI1_UL1C_PCH_L()	(ChkL1ModFltr_UL1C_PRI1()&&(FILTER_CHECK(UL1C_PRI1_Trace_Filter, 1, 0x20)))
#define ChkL1ClsFltr_UL1C_PRI1_UL1C_FACH_L()	(ChkL1ModFltr_UL1C_PRI1()&&(FILTER_CHECK(UL1C_PRI1_Trace_Filter, 1, 0x40)))
#define ChkL1ClsFltr_UL1C_PRI1_UL1C_RACH_L()	(ChkL1ModFltr_UL1C_PRI1()&&(FILTER_CHECK(UL1C_PRI1_Trace_Filter, 1, 0x80)))
#define ChkL1ClsFltr_UL1C_PRI1_UL1C_RPT_L()	(ChkL1ModFltr_UL1C_PRI1()&&(FILTER_CHECK(UL1C_PRI1_Trace_Filter, 2, 0x01)))
#define ChkL1ClsFltr_UL1C_PRI1_UL1C_ERROR_L()	(ChkL1ModFltr_UL1C_PRI1()&&(FILTER_CHECK(UL1C_PRI1_Trace_Filter, 2, 0x02)))
#define ChkL1ClsFltr_UL1C_PRI1_UL1C_EM_L()	(ChkL1ModFltr_UL1C_PRI1()&&(FILTER_CHECK(UL1C_PRI1_Trace_Filter, 2, 0x04)))
#define ChkL1ClsFltr_UL1C_PRI1_UL1C_FS_M()	(ChkL1ModFltr_UL1C_PRI1()&&(FILTER_CHECK(UL1C_PRI1_Trace_Filter, 2, 0x08)))
#define ChkL1ClsFltr_UL1C_PRI1_UL1C_SCS_M()	(ChkL1ModFltr_UL1C_PRI1()&&(FILTER_CHECK(UL1C_PRI1_Trace_Filter, 2, 0x10)))
#define ChkL1ClsFltr_UL1C_PRI1_UL1C_CM_M()	(ChkL1ModFltr_UL1C_PRI1()&&(FILTER_CHECK(UL1C_PRI1_Trace_Filter, 2, 0x20)))
#define ChkL1ClsFltr_UL1C_PRI1_UL1C_DLDCH_M()	(ChkL1ModFltr_UL1C_PRI1()&&(FILTER_CHECK(UL1C_PRI1_Trace_Filter, 2, 0x40)))
#define ChkL1ClsFltr_UL1C_PRI1_UL1C_ULDCH_M()	(ChkL1ModFltr_UL1C_PRI1()&&(FILTER_CHECK(UL1C_PRI1_Trace_Filter, 2, 0x80)))
#define ChkL1ClsFltr_UL1C_PRI1_UL1C_PCH_M()	(ChkL1ModFltr_UL1C_PRI1()&&(FILTER_CHECK(UL1C_PRI1_Trace_Filter, 3, 0x01)))
#define ChkL1ClsFltr_UL1C_PRI1_UL1C_FACH_M()	(ChkL1ModFltr_UL1C_PRI1()&&(FILTER_CHECK(UL1C_PRI1_Trace_Filter, 3, 0x02)))
#define ChkL1ClsFltr_UL1C_PRI1_UL1C_RACH_M()	(ChkL1ModFltr_UL1C_PRI1()&&(FILTER_CHECK(UL1C_PRI1_Trace_Filter, 3, 0x04)))
#define ChkL1ClsFltr_UL1C_PRI1_UL1C_RPT_M()	(ChkL1ModFltr_UL1C_PRI1()&&(FILTER_CHECK(UL1C_PRI1_Trace_Filter, 3, 0x08)))
#define ChkL1ClsFltr_UL1C_PRI1_UL1C_FS_H()	(ChkL1ModFltr_UL1C_PRI1()&&(FILTER_CHECK(UL1C_PRI1_Trace_Filter, 3, 0x10)))
#define ChkL1ClsFltr_UL1C_PRI1_UL1C_SCS_H()	(ChkL1ModFltr_UL1C_PRI1()&&(FILTER_CHECK(UL1C_PRI1_Trace_Filter, 3, 0x20)))
#define ChkL1ClsFltr_UL1C_PRI1_UL1C_CM_H()	(ChkL1ModFltr_UL1C_PRI1()&&(FILTER_CHECK(UL1C_PRI1_Trace_Filter, 3, 0x40)))
#define ChkL1ClsFltr_UL1C_PRI1_UL1C_DLDCH_H()	(ChkL1ModFltr_UL1C_PRI1()&&(FILTER_CHECK(UL1C_PRI1_Trace_Filter, 3, 0x80)))
#define ChkL1ClsFltr_UL1C_PRI1_UL1C_ULDCH_H()	(ChkL1ModFltr_UL1C_PRI1()&&(FILTER_CHECK(UL1C_PRI1_Trace_Filter, 4, 0x01)))
#define ChkL1ClsFltr_UL1C_PRI1_UL1C_PCH_H()	(ChkL1ModFltr_UL1C_PRI1()&&(FILTER_CHECK(UL1C_PRI1_Trace_Filter, 4, 0x02)))
#define ChkL1ClsFltr_UL1C_PRI1_UL1C_FACH_H()	(ChkL1ModFltr_UL1C_PRI1()&&(FILTER_CHECK(UL1C_PRI1_Trace_Filter, 4, 0x04)))
#define ChkL1ClsFltr_UL1C_PRI1_UL1C_RACH_H()	(ChkL1ModFltr_UL1C_PRI1()&&(FILTER_CHECK(UL1C_PRI1_Trace_Filter, 4, 0x08)))
#define ChkL1ClsFltr_UL1C_PRI1_UL1C_RPT_H()	(ChkL1ModFltr_UL1C_PRI1()&&(FILTER_CHECK(UL1C_PRI1_Trace_Filter, 4, 0x10)))
#define ChkL1MsgFltr_UL1I_TRC_CM_Obsolete()	ChkL1ClsFltr_UL1C_PRI1_UL1C_FS_H()
#define ChkL1MsgFltr_UL1I_TRC_PS_TASFreqScanAnt()	ChkL1ClsFltr_UL1C_PRI1_UL1C_FS_H()
#define ChkL1MsgFltr_UL1I_TRC_PS_Result()	ChkL1ClsFltr_UL1C_PRI1_UL1C_FS_H()
#define ChkL1MsgFltr_UL1I_TRC_PS_SortedFreq()	ChkL1ClsFltr_UL1C_PRI1_UL1C_FS_H()
#define ChkL1MsgFltr_UL1I_TRC_FS_State()	ChkL1ClsFltr_UL1C_PRI1_UL1C_FS_H()
#define ChkL1MsgFltr_UL1I_TRC_FS_UL1_Suspend()	ChkL1ClsFltr_UL1C_PRI1_UL1C_FS_H()
#define ChkL1MsgFltr_UL1I_TRC_FS_FB_PwrScanNext()	ChkL1ClsFltr_UL1C_PRI1_UL1C_FS_H()
#define ChkL1MsgFltr_UL1I_TRC_FS_AutoGap_State()	ChkL1ClsFltr_UL1C_PRI1_UL1C_FS_H()
#define ChkL1MsgFltr_UL1I_TRC_FS_ScanSuspend()	ChkL1ClsFltr_UL1C_PRI1_UL1C_FS_H()
#define ChkL1MsgFltr_UL1I_TRC_FS_ProcessScanStart()	ChkL1ClsFltr_UL1C_PRI1_UL1C_FS_H()
#define ChkL1MsgFltr_UL1I_TRC_FS_NextFullbandAnt()	ChkL1ClsFltr_UL1C_PRI1_UL1C_FS_H()
#define ChkL1MsgFltr_UL1I_TRC_FS_SuspendFullbandScan()	ChkL1ClsFltr_UL1C_PRI1_UL1C_FS_H()
#define ChkL1MsgFltr_UL1I_TRC_FS_SetFullbandAntenna()	ChkL1ClsFltr_UL1C_PRI1_UL1C_FS_H()
#define ChkL1MsgFltr_UL1I_TRC_CSFB_SRVCC_4GInheritantena()	ChkL1ClsFltr_UL1C_PRI1_UL1C_FS_H()
#define ChkL1MsgFltr_UL1T_TRC_ECS_Start()	ChkL1ClsFltr_UL1C_PRI1_UL1C_FS_H()
#define ChkL1MsgFltr_UL1T_TRC_ECS_Stop()	ChkL1ClsFltr_UL1C_PRI1_UL1C_FS_H()
#define ChkL1MsgFltr_UL1I_TRC_ECS_InternalStop()	ChkL1ClsFltr_UL1C_PRI1_UL1C_FS_H()
#define ChkL1MsgFltr_UL1I_TRC_ECS_Status()	ChkL1ClsFltr_UL1C_PRI1_UL1C_FS_H()
#define ChkL1MsgFltr_UL1I_TRC_ECS_Result()	ChkL1ClsFltr_UL1C_PRI1_UL1C_FS_H()
#define ChkL1MsgFltr_UL1I_TRC_FS_BeforeGetPendingResult()	ChkL1ClsFltr_UL1C_PRI1_UL1C_FS_H()
#define ChkL1MsgFltr_UL1I_TRC_FS_AfterGetPendingResult()	ChkL1ClsFltr_UL1C_PRI1_UL1C_FS_H()
#define ChkL1MsgFltr_UL1I_TRC_FS_AfterResume()	ChkL1ClsFltr_UL1C_PRI1_UL1C_FS_H()
#define ChkL1MsgFltr_UL1I_TRC_HFS_DBG()	ChkL1ClsFltr_UL1C_PRI1_UL1C_FS_H()
#define ChkL1MsgFltr_UL1I_TRC_HFS_DBG2()	ChkL1ClsFltr_UL1C_PRI1_UL1C_FS_H()
#define ChkL1MsgFltr_UL1I_TRC_HFS_Reset()	ChkL1ClsFltr_UL1C_PRI1_UL1C_FS_H()
#define ChkL1MsgFltr_UL1I_TRC_HFS_ValidFrequency()	ChkL1ClsFltr_UL1C_PRI1_UL1C_FS_H()
#define ChkL1MsgFltr_UL1I_TRC_HFS_FinalFrequencyNum()	ChkL1ClsFltr_UL1C_PRI1_UL1C_FS_H()
#define ChkL1MsgFltr_UL1I_TRC_Get_ULDCHData()	ChkL1ClsFltr_UL1C_PRI1_UL1C_ULDCH_H()
#define ChkL1MsgFltr_UL1I_TRC_Get_ULDCHTRCHData()	ChkL1ClsFltr_UL1C_PRI1_UL1C_ULDCH_H()
#define ChkL1MsgFltr_UL1I_TRC_UL_Timer_TFC_CB()	ChkL1ClsFltr_UL1C_PRI1_UL1C_ULDCH_H()
#define ChkL1MsgFltr_UL1I_TRC_UL_Timer_Data_CB()	ChkL1ClsFltr_UL1C_PRI1_UL1C_ULDCH_H()
#define ChkL1MsgFltr_UL1T_TRC_Report_ULCB_Data()	ChkL1ClsFltr_UL1C_PRI1_UL1C_ULDCH_H()
#define ChkL1MsgFltr_UL1T_TRC_Report_ULCB_TFC()	ChkL1ClsFltr_UL1C_PRI1_UL1C_ULDCH_H()
#define ChkL1MsgFltr_UL1I_TRC_StopULDCh()	ChkL1ClsFltr_UL1C_PRI1_UL1C_ULDCH_H()
#define ChkL1MsgFltr_UL1I_TRC_ULDCH_next_timer_delay()	ChkL1ClsFltr_UL1C_PRI1_UL1C_ULDCH_H()
#define ChkL1MsgFltr_UL1I_TRC_ULDCH_UL1D_Intf()	ChkL1ClsFltr_UL1C_PRI1_UL1C_ULDCH_H()
#define ChkL1MsgFltr_UL1I_TRC_ULDCH_Set_MAC_Event()	ChkL1ClsFltr_UL1C_PRI1_UL1C_ULDCH_H()
#define ChkL1MsgFltr_UL1I_TRC_ULDCH_TxPwr_Info_DuringBHHO()	ChkL1ClsFltr_UL1C_PRI1_UL1C_ULDCH_H()
#define ChkL1MsgFltr_UL1I_TRC_RefDCH()	ChkL1ClsFltr_UL1C_PRI1_UL1C_DLDCH_H()
#define ChkL1MsgFltr_UL1I_TRC_RefDCHCFN()	ChkL1ClsFltr_UL1C_PRI1_UL1C_DLDCH_H()
#define ChkL1MsgFltr_UL1I_TRC_DLSync_Qin()	ChkL1ClsFltr_UL1C_PRI1_UL1C_DLDCH_H()
#define ChkL1MsgFltr_UL1T_TRC_ReconfigDCH()	ChkL1ClsFltr_UL1C_PRI1_UL1C_DLDCH_H()
#define ChkL1MsgFltr_UL1T_TRC_ReconfigDCH_ASAP()	ChkL1ClsFltr_UL1C_PRI1_UL1C_DLDCH_H()
#define ChkL1MsgFltr_UL1T_TRC_LoopMode2()	ChkL1ClsFltr_UL1C_PRI1_UL1C_DLDCH_H()
#define ChkL1MsgFltr_UL1I_TRC_ASU()	ChkL1ClsFltr_UL1C_PRI1_UL1C_DLDCH_H()
#define ChkL1MsgFltr_UL1I_TRC_DL_CRC_Value()	ChkL1ClsFltr_UL1C_PRI1_UL1C_DLDCH_H()
#define ChkL1MsgFltr_UL1I_TRC_DL_Sync_Type()	ChkL1ClsFltr_UL1C_PRI1_UL1C_DLDCH_H()
#define ChkL1MsgFltr_UL1I_TRC_DL_Sync_Info()	ChkL1ClsFltr_UL1C_PRI1_UL1C_DLDCH_H()
#define ChkL1MsgFltr_UL1T_TRC_ReconfigDCH_TTI()	ChkL1ClsFltr_UL1C_PRI1_UL1C_DLDCH_H()
#define ChkL1MsgFltr_UL1T_TRC_ReconfigDCH_TGPS()	ChkL1ClsFltr_UL1C_PRI1_UL1C_DLDCH_H()
#define ChkL1MsgFltr_UL1T_TRC_ReconfigDCH_R5R6()	ChkL1ClsFltr_UL1C_PRI1_UL1C_DLDCH_H()
#define ChkL1MsgFltr_UL1T_TRC_Modify_Abort()	ChkL1ClsFltr_UL1C_PRI1_UL1C_DLDCH_H()
#define ChkL1MsgFltr_UL1I_TRC_UpdateDpchRl()	ChkL1ClsFltr_UL1C_PRI1_UL1C_DLDCH_H()
#define ChkL1MsgFltr_UL1T_TRC_Sec_ASU_Config()	ChkL1ClsFltr_UL1C_PRI1_UL1C_DLDCH_H()
#define ChkL1MsgFltr_UL1I_TRC_Sec_DLDCH_Config()	ChkL1ClsFltr_UL1C_PRI1_UL1C_DLDCH_H()
#define ChkL1MsgFltr_UL1I_TRC_DLDCH_TriggerExtendRLF()	ChkL1ClsFltr_UL1C_PRI1_UL1C_DLDCH_H()
#define ChkL1MsgFltr_UL1I_TRC_DLSync_HsStuck()	ChkL1ClsFltr_UL1C_PRI1_UL1C_DLDCH_H()
#define ChkL1MsgFltr_UL1I_TRC_FMO_Config()	ChkL1ClsFltr_UL1C_PRI1_UL1C_FACH_H()
#define ChkL1MsgFltr_UL1I_TRC_FACH_Data()	ChkL1ClsFltr_UL1C_PRI1_UL1C_FACH_H()
#define ChkL1MsgFltr_UL1I_TRC_DRX_GAP()	ChkL1ClsFltr_UL1C_PRI1_UL1C_FACH_H()
#define ChkL1MsgFltr_UL1I_TRC_DRX_Change()	ChkL1ClsFltr_UL1C_PRI1_UL1C_FACH_H()
#define ChkL1MsgFltr_UL1_TRC_FMO_LOCK()	ChkL1ClsFltr_UL1C_PRI1_UL1C_FACH_H()
#define ChkL1MsgFltr_UL1I_TRC_FMO_Timer_Started()	ChkL1ClsFltr_UL1C_PRI1_UL1C_FACH_H()
#define ChkL1MsgFltr_UL1I_TRC_SCS_State()	ChkL1ClsFltr_UL1C_PRI1_UL1C_SCS_H()
#define ChkL1MsgFltr_UL1I_TRC_SCS_Conflict()	ChkL1ClsFltr_UL1C_PRI1_UL1C_SCS_H()
#define ChkL1MsgFltr_UL1I_TRC_SCS_ResourceConflict()	ChkL1ClsFltr_UL1C_PRI1_UL1C_SCS_H()
#define ChkL1MsgFltr_UL1I_TRC_SCS_Resource()	ChkL1ClsFltr_UL1C_PRI1_UL1C_SCS_H()
#define ChkL1MsgFltr_UL1I_TRC_SCS_Init()	ChkL1ClsFltr_UL1C_PRI1_UL1C_SCS_H()
#define ChkL1MsgFltr_UL1I_TRC_PCH_Status()	ChkL1ClsFltr_UL1C_PRI1_UL1C_PCH_H()
#define ChkL1MsgFltr_UL1I_TRC_PCH_PICHOverlapFrames()	ChkL1ClsFltr_UL1C_PRI1_UL1C_PCH_H()
#define ChkL1MsgFltr_UL1I_TRC_ReconfigPCH()	ChkL1ClsFltr_UL1C_PRI1_UL1C_PCH_H()
#define ChkL1MsgFltr_UL1I_TRC_TwoPhaseSrchPI_PCHType_Debug()	ChkL1ClsFltr_UL1C_PRI1_UL1C_PCH_H()
#define ChkL1MsgFltr_UL1I_TRC_TwoPhaseSrchPI_GAPType_Debug()	ChkL1ClsFltr_UL1C_PRI1_UL1C_PCH_H()
#define ChkL1MsgFltr_UL1I_TRC_Reschedule_PCH()	ChkL1ClsFltr_UL1C_PRI1_UL1C_PCH_H()
#define ChkL1MsgFltr_UL1I_TRC_PCH_SetType()	ChkL1ClsFltr_UL1C_PRI1_UL1C_PCH_H()
#define ChkL1MsgFltr_UL1I_TRC_TwoPhaseSrchPI_GAP()	ChkL1ClsFltr_UL1C_PRI1_UL1C_PCH_H()
#define ChkL1MsgFltr_UL1I_TRC_PCH_Frames_debug()	ChkL1ClsFltr_UL1C_PRI1_UL1C_PCH_H()
#define ChkL1MsgFltr_UL1I_TRC_TwoPhaseSrchPI_Res()	ChkL1ClsFltr_UL1C_PRI1_UL1C_PCH_H()
#define ChkL1MsgFltr_UL1I_TRC_PCH_Type()	ChkL1ClsFltr_UL1C_PRI1_UL1C_PCH_H()
#define ChkL1MsgFltr_UL1I_TRC_PCH_drx_cycle2_life()	ChkL1ClsFltr_UL1C_PRI1_UL1C_PCH_H()
#define ChkL1MsgFltr_UL1I_TRC_PCH_SmartPagingState()	ChkL1ClsFltr_UL1C_PRI1_UL1C_PCH_H()
#define ChkL1MsgFltr_UL1I_TRC_PCH_SmartPagingEvaluate()	ChkL1ClsFltr_UL1C_PRI1_UL1C_PCH_H()
#define ChkL1MsgFltr_UL1I_TRC_PCH_SmartPagingLog()	ChkL1ClsFltr_UL1C_PRI1_UL1C_PCH_H()
#define ChkL1MsgFltr_UL1I_TRC_PCH_SmartCSState()	ChkL1ClsFltr_UL1C_PRI1_UL1C_PCH_H()
#define ChkL1MsgFltr_UL1T_TRC_PCH_SmartCSLog()	ChkL1ClsFltr_UL1C_PRI1_UL1C_PCH_H()
#define ChkL1MsgFltr_UL1I_TRC_PCH_SmartCSSkip()	ChkL1ClsFltr_UL1C_PRI1_UL1C_PCH_H()
#define ChkL1MsgFltr_UL1I_TRC_PCH_SmartCMBypass()	ChkL1ClsFltr_UL1C_PRI1_UL1C_PCH_H()
#define ChkL1MsgFltr_UL1I_TRC_PCH_SmartCMPeriodicSwitch()	ChkL1ClsFltr_UL1C_PRI1_UL1C_PCH_H()
#define ChkL1MsgFltr_UL1I_TRC_PCH_UL1D_Start_PCH()	ChkL1ClsFltr_UL1C_PRI1_UL1C_PCH_H()
#define ChkL1MsgFltr_UL1I_TRC_PCH_UL1D_Stop_PCH()	ChkL1ClsFltr_UL1C_PRI1_UL1C_PCH_H()
#define ChkL1MsgFltr_UL1I_TRC_PCH_UL1D_CheckResource()	ChkL1ClsFltr_UL1C_PRI1_UL1C_PCH_H()
#define ChkL1MsgFltr_UL1I_TRC_PCH_SleepEnable()	ChkL1ClsFltr_UL1C_PRI1_UL1C_PCH_H()
#define ChkL1MsgFltr_UL1I_TRC_PCH_SleepDisable()	ChkL1ClsFltr_UL1C_PRI1_UL1C_PCH_H()
#define ChkL1MsgFltr_UL1I_TRC_PCH_Start_PCHWakeup()	ChkL1ClsFltr_UL1C_PRI1_UL1C_PCH_H()
#define ChkL1MsgFltr_UL1I_TRC_PCH_ChangeTo_NormalPI()	ChkL1ClsFltr_UL1C_PRI1_UL1C_PCH_H()
#define ChkL1MsgFltr_UL1I_TRC_PCH_NormalPI_Period()	ChkL1ClsFltr_UL1C_PRI1_UL1C_PCH_H()
#define ChkL1MsgFltr_UL1I_TRC_PCH_RescheduleRTBTimer()	ChkL1ClsFltr_UL1C_PRI1_UL1C_PCH_H()
#define ChkL1MsgFltr_UL1I_TRC_PCH_RescheduleRTBTimerFlag()	ChkL1ClsFltr_UL1C_PRI1_UL1C_PCH_H()
#define ChkL1MsgFltr_UL1I_TRC_PCH_RescheduleRTBTimerImm()	ChkL1ClsFltr_UL1C_PRI1_UL1C_PCH_H()
#define ChkL1MsgFltr_UL1I_TRC_PCH_Check_MPS_Ahead_Dbg()	ChkL1ClsFltr_UL1C_PRI1_UL1C_PCH_H()
#define ChkL1MsgFltr_UL1I_TRC_PCH_RxDEnSkip()	ChkL1ClsFltr_UL1C_PRI1_UL1C_PCH_H()
#define ChkL1MsgFltr_UL1I_TRC_PCH_RxDSwitchDelay()	ChkL1ClsFltr_UL1C_PRI1_UL1C_PCH_H()
#define ChkL1MsgFltr_UL1I_TRC_PCH_RxDEcnoRscpMain()	ChkL1ClsFltr_UL1C_PRI1_UL1C_PCH_H()
#define ChkL1MsgFltr_UL1I_TRC_PCH_RxDEcnoRscpDiv()	ChkL1ClsFltr_UL1C_PRI1_UL1C_PCH_H()
#define ChkL1MsgFltr_UL1I_TRC_PCH_RxDServingInfo()	ChkL1ClsFltr_UL1C_PRI1_UL1C_PCH_H()
#define ChkL1MsgFltr_UL1I_TRC_PCH_Test_Sim_Status()	ChkL1ClsFltr_UL1C_PRI1_UL1C_PCH_H()
#define ChkL1MsgFltr_UL1I_TRC_PCH_TASEvaluate()	ChkL1ClsFltr_UL1C_PRI1_UL1C_PCH_H()
#define ChkL1MsgFltr_UL1I_TRC_PCH_TASProcOngoing()	ChkL1ClsFltr_UL1C_PRI1_UL1C_PCH_H()
#define ChkL1MsgFltr_UL1I_TRC_PCH_TASStartTimer()	ChkL1ClsFltr_UL1C_PRI1_UL1C_PCH_H()
#define ChkL1MsgFltr_UL1I_TRC_PCH_TASTriggerUnsync()	ChkL1ClsFltr_UL1C_PRI1_UL1C_PCH_H()
#define ChkL1MsgFltr_UL1I_TRC_PCH_Force_Normal_Status()	ChkL1ClsFltr_UL1C_PRI1_UL1C_PCH_H()
#define ChkL1MsgFltr_UL1I_TRC_RAChData()	ChkL1ClsFltr_UL1C_PRI1_UL1C_RACH_H()
#define ChkL1MsgFltr_UL1I_TRC_RACH_ASCSetting()	ChkL1ClsFltr_UL1C_PRI1_UL1C_RACH_H()
#define ChkL1MsgFltr_UL1I_TRC_Get_Access_Slot()	ChkL1ClsFltr_UL1C_PRI1_UL1C_RACH_H()
#define ChkL1MsgFltr_UL1I_TRC_RACH_Start()	ChkL1ClsFltr_UL1C_PRI1_UL1C_RACH_H()
#define ChkL1MsgFltr_UL1I_TRC_RACH_NextASS()	ChkL1ClsFltr_UL1C_PRI1_UL1C_RACH_H()
#define ChkL1MsgFltr_UL1I_TRC_DelayTxAccess_CCM()	ChkL1ClsFltr_UL1C_PRI1_UL1C_RACH_H()
#define ChkL1MsgFltr_UL1I_TRC_DelayTxAccess_FMO()	ChkL1ClsFltr_UL1C_PRI1_UL1C_RACH_H()
#define ChkL1MsgFltr_UL1T_TRC_InitReport()	ChkL1ClsFltr_UL1C_PRI1_UL1C_RPT_L()
#define ChkL1MsgFltr_UL1AC_TRC_EvtReport()	ChkL1ClsFltr_UL1C_PRI1_UL1C_RPT_H()
#define ChkL1MsgFltr_UL1I_TRC_AllocDlDataReport()	ChkL1ClsFltr_UL1C_PRI1_UL1C_RPT_H()
#define ChkL1MsgFltr_UL1I_TRC_FreeDLDataReport()	ChkL1ClsFltr_UL1C_PRI1_UL1C_RPT_H()
#define ChkL1MsgFltr_UL1_TRC_FreeReport()	ChkL1ClsFltr_UL1C_PRI1_UL1C_RPT_L()
#define ChkL1MsgFltr_UL1T_TRC_HoldReport()	ChkL1ClsFltr_UL1C_PRI1_UL1C_RPT_L()
#define ChkL1MsgFltr_UL1_TRC_Dbg_AllocReport()	ChkL1ClsFltr_UL1C_PRI1_UL1C_RPT_H()
#define ChkL1MsgFltr_UL1_TRC_Dbg_SendReport()	ChkL1ClsFltr_UL1C_PRI1_UL1C_RPT_H()
#define ChkL1MsgFltr_UL1_TRC_SFN_Report_Callback()	ChkL1ClsFltr_UL1C_PRI1_UL1C_RPT_H()
#define ChkL1MsgFltr_UL1_TRC_Dbg_AllocDataBuffer()	ChkL1ClsFltr_UL1C_PRI1_UL1C_RPT_H()
#define ChkL1MsgFltr_UL1_TRC_Dbg_FreeDataBuffer()	ChkL1ClsFltr_UL1C_PRI1_UL1C_RPT_H()
#define ChkL1MsgFltr_UL1I_TRC_UL1D_State_Conflict()	ChkL1ClsFltr_UL1C_PRI1_UL1C_RPT_H()
#define ChkL1MsgFltr_UL1T_TRC_EM_Switch()	ChkL1ClsFltr_UL1C_PRI1_UL1C_EM_L()
#define ChkL1MsgFltr_UL1T_TRC_EM_RL_Sync_Switch()	ChkL1ClsFltr_UL1C_PRI1_UL1C_EM_L()
#define ChkL1MsgFltr_UL1I_TRC_EM_Switch()	ChkL1ClsFltr_UL1C_PRI1_UL1C_EM_L()
#define ChkL1MsgFltr_UL1T_TRC_REDUMP()	ChkL1ClsFltr_UL1C_PRI1_UL1C_ERROR_L()


#endif
