#ifndef L1TRC_UL1C_PRI1_PUBLIC_DEF_H
#define L1TRC_UL1C_PRI1_PUBLIC_DEF_H

/******************************/
/* String category definition */
/******************************/


/****************************/
/* Message macro definition */
/****************************/
#include "L1Trc.h"
#if defined(L1_CATCHER)
	#define UL1T_TRC_FS_Start(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_PUBLIC_Trace_Filter, 3, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x00AB,0x00AB);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_PUBLIC_Trace_Filter, 3, 0x10);\
		}\
	} while(0)
#else
	#define UL1T_TRC_FS_Start(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define UL1T_TRC_FS_Cont(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_PUBLIC_Trace_Filter, 3, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x01AB,0x01AB);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_PUBLIC_Trace_Filter, 3, 0x10);\
		}\
	} while(0)
#else
	#define UL1T_TRC_FS_Cont(v1)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_FS_Suspend(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_PUBLIC_Trace_Filter, 3, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x02AB,0x02AB);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_PUBLIC_Trace_Filter, 3, 0x10);\
		}\
	} while(0)
#else
	#define UL1I_TRC_FS_Suspend(v1)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_FS_Result(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_PUBLIC_Trace_Filter, 3, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x03AB,0x03AB);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_PUBLIC_Trace_Filter, 3, 0x10);\
		}\
	} while(0)
#else
	#define UL1I_TRC_FS_Result(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define UL1T_TRC_TxAccess(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_PUBLIC_Trace_Filter, 4, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x04AB,0x04AB);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_PUBLIC_Trace_Filter, 4, 0x08);\
		}\
	} while(0)
#else
	#define UL1T_TRC_TxAccess(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_TxAccess(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_PUBLIC_Trace_Filter, 4, 0x08);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x05AB,0x05AB);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_PUBLIC_Trace_Filter, 4, 0x08);\
		}\
	} while(0)
#else
	#define UL1I_TRC_TxAccess(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER)
	#define UL1T_TRC_SCS_Start(v1, v2, v3, v4, v5, v6) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_PUBLIC_Trace_Filter, 3, 0x20);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x06AB,0x06AB);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_PUBLIC_Trace_Filter, 3, 0x20);\
		}\
	} while(0)
#else
	#define UL1T_TRC_SCS_Start(v1, v2, v3, v4, v5, v6)
#endif

#if defined(L1_CATCHER)
	#define UL1T_TRC_SCS_Stop(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_PUBLIC_Trace_Filter, 3, 0x20);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x07AB,0x07AB);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_PUBLIC_Trace_Filter, 3, 0x20);\
		}\
	} while(0)
#else
	#define UL1T_TRC_SCS_Stop(v1)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_SCS_Result(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_PUBLIC_Trace_Filter, 3, 0x20);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x08AB,0x08AB);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_PUBLIC_Trace_Filter, 3, 0x20);\
		}\
	} while(0)
#else
	#define UL1I_TRC_SCS_Result(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_FMO(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_PUBLIC_Trace_Filter, 4, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x09AB,0x09AB);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_PUBLIC_Trace_Filter, 4, 0x04);\
		}\
	} while(0)
#else
	#define UL1I_TRC_FMO(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_StartULDCh(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_PUBLIC_Trace_Filter, 4, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0AAB,0x0AAB);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_PUBLIC_Trace_Filter, 4, 0x01);\
		}\
	} while(0)
#else
	#define UL1I_TRC_StartULDCh(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_TxStatus(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_PUBLIC_Trace_Filter, 4, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0BAB,0x0BAB);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_PUBLIC_Trace_Filter, 4, 0x01);\
		}\
	} while(0)
#else
	#define UL1I_TRC_TxStatus(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_Get_DLDCHData(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_PUBLIC_Trace_Filter, 3, 0x80);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0CAB,0x0CAB);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_PUBLIC_Trace_Filter, 3, 0x80);\
		}\
	} while(0)
#else
	#define UL1I_TRC_Get_DLDCHData(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_Get_DLDCHTRCHData(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_PUBLIC_Trace_Filter, 3, 0x80);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0DAB,0x0DAB);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_PUBLIC_Trace_Filter, 3, 0x80);\
		}\
	} while(0)
#else
	#define UL1I_TRC_Get_DLDCHTRCHData(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_DLSync_Config(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_PUBLIC_Trace_Filter, 3, 0x80);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0EAB,0x0EAB);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_PUBLIC_Trace_Filter, 3, 0x80);\
		}\
	} while(0)
#else
	#define UL1I_TRC_DLSync_Config(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_DLSync_State(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_PUBLIC_Trace_Filter, 3, 0x80);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0FAB,0x0FAB);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_PUBLIC_Trace_Filter, 3, 0x80);\
		}\
	} while(0)
#else
	#define UL1I_TRC_DLSync_State(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_DL_DCHQual(v1, v2, v3, v4, v5, v6, v7, v8) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_PUBLIC_Trace_Filter, 3, 0x80);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x10AB,0x10AB);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v7,v7);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v8,v8);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_PUBLIC_Trace_Filter, 3, 0x80);\
		}\
	} while(0)
#else
	#define UL1I_TRC_DL_DCHQual(v1, v2, v3, v4, v5, v6, v7, v8)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_New_DPCH_Type(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_PUBLIC_Trace_Filter, 3, 0x80);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x11AB,0x11AB);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_PUBLIC_Trace_Filter, 3, 0x80);\
		}\
	} while(0)
#else
	#define UL1I_TRC_New_DPCH_Type(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_DPCH_Type(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_PUBLIC_Trace_Filter, 3, 0x80);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x12AB,0x12AB);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_PUBLIC_Trace_Filter, 3, 0x80);\
		}\
	} while(0)
#else
	#define UL1I_TRC_DPCH_Type(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define UL1I_TRC_PCH_RxDEn(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI1_PUBLIC_Trace_Filter, 4, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x13AB,0x13AB);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI1_PUBLIC_Trace_Filter, 4, 0x02);\
		}\
	} while(0)
#else
	#define UL1I_TRC_PCH_RxDEn(v1, v2)
#endif



/*******************************/
/* declaration of filter array */
/*******************************/
EXTERN_TMD_FILTER(unsigned char, UL1C_PRI1_PUBLIC_Trace_Filter, 5);
/*************************/
/* Function declarations */
/*************************/
#ifdef L1_CATCHER

void Set_UL1C_PRI1_PUBLIC_Filter(unsigned char *setting);

#endif

/************************************/
/* Filter checking API declarations */
/************************************/

#define ChkL1ModFltr_UL1C_PRI1_PUBLIC()	(FILTER_CHECK(UL1C_PRI1_PUBLIC_Trace_Filter, 0, 1))
#define ChkL1ClsFltr_UL1C_PRI1_PUBLIC_UL1C_FS_L()	(ChkL1ModFltr_UL1C_PRI1_PUBLIC()&&(FILTER_CHECK(UL1C_PRI1_PUBLIC_Trace_Filter, 1, 0x01)))
#define ChkL1ClsFltr_UL1C_PRI1_PUBLIC_UL1C_SCS_L()	(ChkL1ModFltr_UL1C_PRI1_PUBLIC()&&(FILTER_CHECK(UL1C_PRI1_PUBLIC_Trace_Filter, 1, 0x02)))
#define ChkL1ClsFltr_UL1C_PRI1_PUBLIC_UL1C_CM_L()	(ChkL1ModFltr_UL1C_PRI1_PUBLIC()&&(FILTER_CHECK(UL1C_PRI1_PUBLIC_Trace_Filter, 1, 0x04)))
#define ChkL1ClsFltr_UL1C_PRI1_PUBLIC_UL1C_DLDCH_L()	(ChkL1ModFltr_UL1C_PRI1_PUBLIC()&&(FILTER_CHECK(UL1C_PRI1_PUBLIC_Trace_Filter, 1, 0x08)))
#define ChkL1ClsFltr_UL1C_PRI1_PUBLIC_UL1C_ULDCH_L()	(ChkL1ModFltr_UL1C_PRI1_PUBLIC()&&(FILTER_CHECK(UL1C_PRI1_PUBLIC_Trace_Filter, 1, 0x10)))
#define ChkL1ClsFltr_UL1C_PRI1_PUBLIC_UL1C_PCH_L()	(ChkL1ModFltr_UL1C_PRI1_PUBLIC()&&(FILTER_CHECK(UL1C_PRI1_PUBLIC_Trace_Filter, 1, 0x20)))
#define ChkL1ClsFltr_UL1C_PRI1_PUBLIC_UL1C_FACH_L()	(ChkL1ModFltr_UL1C_PRI1_PUBLIC()&&(FILTER_CHECK(UL1C_PRI1_PUBLIC_Trace_Filter, 1, 0x40)))
#define ChkL1ClsFltr_UL1C_PRI1_PUBLIC_UL1C_RACH_L()	(ChkL1ModFltr_UL1C_PRI1_PUBLIC()&&(FILTER_CHECK(UL1C_PRI1_PUBLIC_Trace_Filter, 1, 0x80)))
#define ChkL1ClsFltr_UL1C_PRI1_PUBLIC_UL1C_RPT_L()	(ChkL1ModFltr_UL1C_PRI1_PUBLIC()&&(FILTER_CHECK(UL1C_PRI1_PUBLIC_Trace_Filter, 2, 0x01)))
#define ChkL1ClsFltr_UL1C_PRI1_PUBLIC_UL1C_ERROR_L()	(ChkL1ModFltr_UL1C_PRI1_PUBLIC()&&(FILTER_CHECK(UL1C_PRI1_PUBLIC_Trace_Filter, 2, 0x02)))
#define ChkL1ClsFltr_UL1C_PRI1_PUBLIC_UL1C_EM_L()	(ChkL1ModFltr_UL1C_PRI1_PUBLIC()&&(FILTER_CHECK(UL1C_PRI1_PUBLIC_Trace_Filter, 2, 0x04)))
#define ChkL1ClsFltr_UL1C_PRI1_PUBLIC_UL1C_FS_M()	(ChkL1ModFltr_UL1C_PRI1_PUBLIC()&&(FILTER_CHECK(UL1C_PRI1_PUBLIC_Trace_Filter, 2, 0x08)))
#define ChkL1ClsFltr_UL1C_PRI1_PUBLIC_UL1C_SCS_M()	(ChkL1ModFltr_UL1C_PRI1_PUBLIC()&&(FILTER_CHECK(UL1C_PRI1_PUBLIC_Trace_Filter, 2, 0x10)))
#define ChkL1ClsFltr_UL1C_PRI1_PUBLIC_UL1C_CM_M()	(ChkL1ModFltr_UL1C_PRI1_PUBLIC()&&(FILTER_CHECK(UL1C_PRI1_PUBLIC_Trace_Filter, 2, 0x20)))
#define ChkL1ClsFltr_UL1C_PRI1_PUBLIC_UL1C_DLDCH_M()	(ChkL1ModFltr_UL1C_PRI1_PUBLIC()&&(FILTER_CHECK(UL1C_PRI1_PUBLIC_Trace_Filter, 2, 0x40)))
#define ChkL1ClsFltr_UL1C_PRI1_PUBLIC_UL1C_ULDCH_M()	(ChkL1ModFltr_UL1C_PRI1_PUBLIC()&&(FILTER_CHECK(UL1C_PRI1_PUBLIC_Trace_Filter, 2, 0x80)))
#define ChkL1ClsFltr_UL1C_PRI1_PUBLIC_UL1C_PCH_M()	(ChkL1ModFltr_UL1C_PRI1_PUBLIC()&&(FILTER_CHECK(UL1C_PRI1_PUBLIC_Trace_Filter, 3, 0x01)))
#define ChkL1ClsFltr_UL1C_PRI1_PUBLIC_UL1C_FACH_M()	(ChkL1ModFltr_UL1C_PRI1_PUBLIC()&&(FILTER_CHECK(UL1C_PRI1_PUBLIC_Trace_Filter, 3, 0x02)))
#define ChkL1ClsFltr_UL1C_PRI1_PUBLIC_UL1C_RACH_M()	(ChkL1ModFltr_UL1C_PRI1_PUBLIC()&&(FILTER_CHECK(UL1C_PRI1_PUBLIC_Trace_Filter, 3, 0x04)))
#define ChkL1ClsFltr_UL1C_PRI1_PUBLIC_UL1C_RPT_M()	(ChkL1ModFltr_UL1C_PRI1_PUBLIC()&&(FILTER_CHECK(UL1C_PRI1_PUBLIC_Trace_Filter, 3, 0x08)))
#define ChkL1ClsFltr_UL1C_PRI1_PUBLIC_UL1C_FS_H()	(ChkL1ModFltr_UL1C_PRI1_PUBLIC()&&(FILTER_CHECK(UL1C_PRI1_PUBLIC_Trace_Filter, 3, 0x10)))
#define ChkL1ClsFltr_UL1C_PRI1_PUBLIC_UL1C_SCS_H()	(ChkL1ModFltr_UL1C_PRI1_PUBLIC()&&(FILTER_CHECK(UL1C_PRI1_PUBLIC_Trace_Filter, 3, 0x20)))
#define ChkL1ClsFltr_UL1C_PRI1_PUBLIC_UL1C_CM_H()	(ChkL1ModFltr_UL1C_PRI1_PUBLIC()&&(FILTER_CHECK(UL1C_PRI1_PUBLIC_Trace_Filter, 3, 0x40)))
#define ChkL1ClsFltr_UL1C_PRI1_PUBLIC_UL1C_DLDCH_H()	(ChkL1ModFltr_UL1C_PRI1_PUBLIC()&&(FILTER_CHECK(UL1C_PRI1_PUBLIC_Trace_Filter, 3, 0x80)))
#define ChkL1ClsFltr_UL1C_PRI1_PUBLIC_UL1C_ULDCH_H()	(ChkL1ModFltr_UL1C_PRI1_PUBLIC()&&(FILTER_CHECK(UL1C_PRI1_PUBLIC_Trace_Filter, 4, 0x01)))
#define ChkL1ClsFltr_UL1C_PRI1_PUBLIC_UL1C_PCH_H()	(ChkL1ModFltr_UL1C_PRI1_PUBLIC()&&(FILTER_CHECK(UL1C_PRI1_PUBLIC_Trace_Filter, 4, 0x02)))
#define ChkL1ClsFltr_UL1C_PRI1_PUBLIC_UL1C_FACH_H()	(ChkL1ModFltr_UL1C_PRI1_PUBLIC()&&(FILTER_CHECK(UL1C_PRI1_PUBLIC_Trace_Filter, 4, 0x04)))
#define ChkL1ClsFltr_UL1C_PRI1_PUBLIC_UL1C_RACH_H()	(ChkL1ModFltr_UL1C_PRI1_PUBLIC()&&(FILTER_CHECK(UL1C_PRI1_PUBLIC_Trace_Filter, 4, 0x08)))
#define ChkL1ClsFltr_UL1C_PRI1_PUBLIC_UL1C_RPT_H()	(ChkL1ModFltr_UL1C_PRI1_PUBLIC()&&(FILTER_CHECK(UL1C_PRI1_PUBLIC_Trace_Filter, 4, 0x10)))
#define ChkL1MsgFltr_UL1T_TRC_FS_Start()	ChkL1ClsFltr_UL1C_PRI1_PUBLIC_UL1C_FS_H()
#define ChkL1MsgFltr_UL1T_TRC_FS_Cont()	ChkL1ClsFltr_UL1C_PRI1_PUBLIC_UL1C_FS_H()
#define ChkL1MsgFltr_UL1I_TRC_FS_Suspend()	ChkL1ClsFltr_UL1C_PRI1_PUBLIC_UL1C_FS_H()
#define ChkL1MsgFltr_UL1I_TRC_FS_Result()	ChkL1ClsFltr_UL1C_PRI1_PUBLIC_UL1C_FS_H()
#define ChkL1MsgFltr_UL1T_TRC_TxAccess()	ChkL1ClsFltr_UL1C_PRI1_PUBLIC_UL1C_RACH_H()
#define ChkL1MsgFltr_UL1I_TRC_TxAccess()	ChkL1ClsFltr_UL1C_PRI1_PUBLIC_UL1C_RACH_H()
#define ChkL1MsgFltr_UL1T_TRC_SCS_Start()	ChkL1ClsFltr_UL1C_PRI1_PUBLIC_UL1C_SCS_H()
#define ChkL1MsgFltr_UL1T_TRC_SCS_Stop()	ChkL1ClsFltr_UL1C_PRI1_PUBLIC_UL1C_SCS_H()
#define ChkL1MsgFltr_UL1I_TRC_SCS_Result()	ChkL1ClsFltr_UL1C_PRI1_PUBLIC_UL1C_SCS_H()
#define ChkL1MsgFltr_UL1I_TRC_FMO()	ChkL1ClsFltr_UL1C_PRI1_PUBLIC_UL1C_FACH_H()
#define ChkL1MsgFltr_UL1I_TRC_StartULDCh()	ChkL1ClsFltr_UL1C_PRI1_PUBLIC_UL1C_ULDCH_H()
#define ChkL1MsgFltr_UL1I_TRC_TxStatus()	ChkL1ClsFltr_UL1C_PRI1_PUBLIC_UL1C_ULDCH_H()
#define ChkL1MsgFltr_UL1I_TRC_Get_DLDCHData()	ChkL1ClsFltr_UL1C_PRI1_PUBLIC_UL1C_DLDCH_H()
#define ChkL1MsgFltr_UL1I_TRC_Get_DLDCHTRCHData()	ChkL1ClsFltr_UL1C_PRI1_PUBLIC_UL1C_DLDCH_H()
#define ChkL1MsgFltr_UL1I_TRC_DLSync_Config()	ChkL1ClsFltr_UL1C_PRI1_PUBLIC_UL1C_DLDCH_H()
#define ChkL1MsgFltr_UL1I_TRC_DLSync_State()	ChkL1ClsFltr_UL1C_PRI1_PUBLIC_UL1C_DLDCH_H()
#define ChkL1MsgFltr_UL1I_TRC_DL_DCHQual()	ChkL1ClsFltr_UL1C_PRI1_PUBLIC_UL1C_DLDCH_H()
#define ChkL1MsgFltr_UL1I_TRC_New_DPCH_Type()	ChkL1ClsFltr_UL1C_PRI1_PUBLIC_UL1C_DLDCH_H()
#define ChkL1MsgFltr_UL1I_TRC_DPCH_Type()	ChkL1ClsFltr_UL1C_PRI1_PUBLIC_UL1C_DLDCH_H()
#define ChkL1MsgFltr_UL1I_TRC_PCH_RxDEn()	ChkL1ClsFltr_UL1C_PRI1_PUBLIC_UL1C_PCH_H()


#endif
