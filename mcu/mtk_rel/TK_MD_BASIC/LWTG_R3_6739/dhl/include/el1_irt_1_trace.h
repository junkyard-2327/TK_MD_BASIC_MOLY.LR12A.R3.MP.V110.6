#ifndef L1TRC_EL1_IRT_1_DEF_H
#define L1TRC_EL1_IRT_1_DEF_H

/******************************/
/* String category definition */
/******************************/
#define RF_CONFLICT_RAT_String(v1)  (unsigned char)(v1+0)


/****************************/
/* Message macro definition */
/****************************/
#include "L1Trc.h"
#if defined(L1_CATCHER)
	#define IRT_LOG_RF_CONFLICT(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_IRT_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0007,0x0007);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_IRT_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define IRT_LOG_RF_CONFLICT(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define IRT_LOG_RF_CONFLICT_RAT(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_IRT_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0107,0x0107);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_IRT_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define IRT_LOG_RF_CONFLICT_RAT(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define IRT_LOG_RF_CONFLICT_STRT(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_IRT_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0207,0x0207);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_IRT_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define IRT_LOG_RF_CONFLICT_STRT(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define IRT_LOG_RF_CONFLICT_STOP(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_IRT_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0307,0x0307);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_IRT_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define IRT_LOG_RF_CONFLICT_STOP(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define IRT_LOG_SWITCH_AFC_CONTROL(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_IRT_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0407,0x0407);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_IRT_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define IRT_LOG_SWITCH_AFC_CONTROL(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define IRT_LOG_MULTI_AFC_QUERY(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_IRT_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0507,0x0507);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_IRT_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define IRT_LOG_MULTI_AFC_QUERY(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define IRT_LOG_AGPS_TIME_SYNC_OLD(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_IRT_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0607,0x0607);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_IRT_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define IRT_LOG_AGPS_TIME_SYNC_OLD(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define IRT_LOG_AGPS_TIME_SYNC(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_IRT_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0707,0x0707);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_IRT_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define IRT_LOG_AGPS_TIME_SYNC(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define IRT_LOG_AGPS_SYNC(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_IRT_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0807,0x0807);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_IRT_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define IRT_LOG_AGPS_SYNC(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define IRT_LOG_AGPS_PHYTIME_OLD(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_IRT_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0907,0x0907);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_IRT_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define IRT_LOG_AGPS_PHYTIME_OLD(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define IRT_LOG_AGPS_PHYTIME(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_IRT_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0A07,0x0A07);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_IRT_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define IRT_LOG_AGPS_PHYTIME(v1)
#endif

#if defined(L1_CATCHER)
	#define IRT_LOG_SRVCC_GAP_INFO_1(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_IRT_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0B07,0x0B07);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_IRT_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define IRT_LOG_SRVCC_GAP_INFO_1(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define IRT_LOG_SRVCC_GAP_INFO_2(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_IRT_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0C07,0x0C07);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_IRT_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define IRT_LOG_SRVCC_GAP_INFO_2(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define IRT_LOG_SRVCC_PROCESS_1(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_IRT_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0D07,0x0D07);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_IRT_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define IRT_LOG_SRVCC_PROCESS_1(v1)
#endif



/*******************************/
/* declaration of filter array */
/*******************************/
EXTERN_TMD_FILTER(unsigned char, EL1_IRT_1_Trace_Filter, 5);
/*************************/
/* Function declarations */
/*************************/
#ifdef L1_CATCHER

void Set_EL1_IRT_1_Filter(unsigned char *setting);

#endif

/************************************/
/* Filter checking API declarations */
/************************************/

#define ChkL1ModFltr_EL1_IRT_1()	(FILTER_CHECK(EL1_IRT_1_Trace_Filter, 0, 1))
#define ChkL1ClsFltr_EL1_IRT_1_el1_trace_1_H()	(ChkL1ModFltr_EL1_IRT_1()&&(FILTER_CHECK(EL1_IRT_1_Trace_Filter, 1, 0x01)))
#define ChkL1ClsFltr_EL1_IRT_1_el1_trace_2_H()	(ChkL1ModFltr_EL1_IRT_1()&&(FILTER_CHECK(EL1_IRT_1_Trace_Filter, 1, 0x02)))
#define ChkL1ClsFltr_EL1_IRT_1_el1_trace_3_M()	(ChkL1ModFltr_EL1_IRT_1()&&(FILTER_CHECK(EL1_IRT_1_Trace_Filter, 1, 0x04)))
#define ChkL1ClsFltr_EL1_IRT_1_el1_trace_4_L()	(ChkL1ModFltr_EL1_IRT_1()&&(FILTER_CHECK(EL1_IRT_1_Trace_Filter, 1, 0x08)))
#define ChkL1MsgFltr_IRT_LOG_RF_CONFLICT()	ChkL1ClsFltr_EL1_IRT_1_el1_trace_1_H()
#define ChkL1MsgFltr_IRT_LOG_RF_CONFLICT_RAT()	ChkL1ClsFltr_EL1_IRT_1_el1_trace_1_H()
#define ChkL1MsgFltr_IRT_LOG_RF_CONFLICT_STRT()	ChkL1ClsFltr_EL1_IRT_1_el1_trace_1_H()
#define ChkL1MsgFltr_IRT_LOG_RF_CONFLICT_STOP()	ChkL1ClsFltr_EL1_IRT_1_el1_trace_1_H()
#define ChkL1MsgFltr_IRT_LOG_SWITCH_AFC_CONTROL()	ChkL1ClsFltr_EL1_IRT_1_el1_trace_1_H()
#define ChkL1MsgFltr_IRT_LOG_MULTI_AFC_QUERY()	ChkL1ClsFltr_EL1_IRT_1_el1_trace_1_H()
#define ChkL1MsgFltr_IRT_LOG_AGPS_TIME_SYNC_OLD()	ChkL1ClsFltr_EL1_IRT_1_el1_trace_1_H()
#define ChkL1MsgFltr_IRT_LOG_AGPS_TIME_SYNC()	ChkL1ClsFltr_EL1_IRT_1_el1_trace_1_H()
#define ChkL1MsgFltr_IRT_LOG_AGPS_SYNC()	ChkL1ClsFltr_EL1_IRT_1_el1_trace_1_H()
#define ChkL1MsgFltr_IRT_LOG_AGPS_PHYTIME_OLD()	ChkL1ClsFltr_EL1_IRT_1_el1_trace_1_H()
#define ChkL1MsgFltr_IRT_LOG_AGPS_PHYTIME()	ChkL1ClsFltr_EL1_IRT_1_el1_trace_1_H()
#define ChkL1MsgFltr_IRT_LOG_SRVCC_GAP_INFO_1()	ChkL1ClsFltr_EL1_IRT_1_el1_trace_1_H()
#define ChkL1MsgFltr_IRT_LOG_SRVCC_GAP_INFO_2()	ChkL1ClsFltr_EL1_IRT_1_el1_trace_1_H()
#define ChkL1MsgFltr_IRT_LOG_SRVCC_PROCESS_1()	ChkL1ClsFltr_EL1_IRT_1_el1_trace_1_H()


#endif
