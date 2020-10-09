#ifndef L1TRC_GL1_PCORE_DEF_H
#define L1TRC_GL1_PCORE_DEF_H

/******************************/
/* String category definition */
/******************************/


/****************************/
/* Message macro definition */
/****************************/
#include "L1Trc.h"
#if defined(L1_CATCHER)
	#define GL1_PCORE_TRC_CCIRQ_Handler(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(GL1_PCORE_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0078,0x0078);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(GL1_PCORE_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define GL1_PCORE_TRC_CCIRQ_Handler(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define GL1_PCORE_TRC_CCIRQ_SACCH_UPLINK(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(GL1_PCORE_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0178,0x0178);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(GL1_PCORE_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define GL1_PCORE_TRC_CCIRQ_SACCH_UPLINK(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define GL1_PCORE_TRC_CCIRQ_SDCCH_UPLINK(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(GL1_PCORE_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0278,0x0278);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(GL1_PCORE_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define GL1_PCORE_TRC_CCIRQ_SDCCH_UPLINK(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define GL1_PCORE_TRC_CCIRQ_FACCH_UPLINK(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(GL1_PCORE_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0378,0x0378);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(GL1_PCORE_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define GL1_PCORE_TRC_CCIRQ_FACCH_UPLINK(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define GL1_PCORE_TRC_MAIN_Init() do {\
		{\
			TRC_START_FILTER_CHECK_L1(GL1_PCORE_Trace_Filter, 1, 0x02);\
			TRC_START_FILL_L1();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L1(0x0478,0x0478);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(GL1_PCORE_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define GL1_PCORE_TRC_MAIN_Init()
#endif

#if defined(L1_CATCHER)
	#define GL1_PCORE_TRC_MAIN_SACCH_DOWNLINK() do {\
		{\
			TRC_START_FILTER_CHECK_L1(GL1_PCORE_Trace_Filter, 1, 0x02);\
			TRC_START_FILL_L1();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L1(0x0578,0x0578);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(GL1_PCORE_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define GL1_PCORE_TRC_MAIN_SACCH_DOWNLINK()
#endif

#if defined(L1_CATCHER)
	#define GL1_PCORE_TRC_MAIN_SDCCH_DOWNLINK() do {\
		{\
			TRC_START_FILTER_CHECK_L1(GL1_PCORE_Trace_Filter, 1, 0x02);\
			TRC_START_FILL_L1();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L1(0x0678,0x0678);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(GL1_PCORE_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define GL1_PCORE_TRC_MAIN_SDCCH_DOWNLINK()
#endif

#if defined(L1_CATCHER)
	#define GL1_PCORE_TRC_MAIN_FACCH_DOWNLINK() do {\
		{\
			TRC_START_FILTER_CHECK_L1(GL1_PCORE_Trace_Filter, 1, 0x02);\
			TRC_START_FILL_L1();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L1(0x0778,0x0778);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(GL1_PCORE_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define GL1_PCORE_TRC_MAIN_FACCH_DOWNLINK()
#endif

#if defined(L1_CATCHER)
	#define GL1_PCORE_TRC_MAIN_PACKET_DOWNLINK() do {\
		{\
			TRC_START_FILTER_CHECK_L1(GL1_PCORE_Trace_Filter, 1, 0x02);\
			TRC_START_FILL_L1();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L1(0x0878,0x0878);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(GL1_PCORE_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define GL1_PCORE_TRC_MAIN_PACKET_DOWNLINK()
#endif

#if defined(L1_CATCHER)
	#define GL1_PCORE_TRC_TOOL_GetFn(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(GL1_PCORE_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0978,0x0978);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(GL1_PCORE_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define GL1_PCORE_TRC_TOOL_GetFn(v1)
#endif

#if defined(L1_CATCHER)
	#define GL1_PCORE_TRC_CSD_Activate() do {\
		{\
			TRC_START_FILTER_CHECK_L1(GL1_PCORE_Trace_Filter, 1, 0x08);\
			TRC_START_FILL_L1();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L1(0x0A78,0x0A78);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(GL1_PCORE_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define GL1_PCORE_TRC_CSD_Activate()
#endif

#if defined(L1_CATCHER)
	#define GL1_PCORE_TRC_CSD_Deactivate() do {\
		{\
			TRC_START_FILTER_CHECK_L1(GL1_PCORE_Trace_Filter, 1, 0x08);\
			TRC_START_FILL_L1();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L1(0x0B78,0x0B78);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(GL1_PCORE_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define GL1_PCORE_TRC_CSD_Deactivate()
#endif

#if defined(L1_CATCHER)
	#define GL1_PCORE_TRC_CSD_DnlinkData1(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(GL1_PCORE_Trace_Filter, 1, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0C78,0x0C78);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(GL1_PCORE_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define GL1_PCORE_TRC_CSD_DnlinkData1(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define GL1_PCORE_TRC_CSD_DnlinkData2(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(GL1_PCORE_Trace_Filter, 1, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0D78,0x0D78);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(GL1_PCORE_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define GL1_PCORE_TRC_CSD_DnlinkData2(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define GL1_PCORE_TRC_FCS(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(GL1_PCORE_Trace_Filter, 1, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0E78,0x0E78);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(GL1_PCORE_Trace_Filter, 1, 0x10);\
		}\
	} while(0)
#else
	#define GL1_PCORE_TRC_FCS(v1)
#endif



/*******************************/
/* declaration of filter array */
/*******************************/
EXTERN_TMD_FILTER(unsigned char, GL1_PCORE_Trace_Filter, 5);
/*************************/
/* Function declarations */
/*************************/
#ifdef L1_CATCHER

void Set_GL1_PCORE_Filter(unsigned char *setting);

#endif

/************************************/
/* Filter checking API declarations */
/************************************/

#define ChkL1ModFltr_GL1_PCORE()	(FILTER_CHECK(GL1_PCORE_Trace_Filter, 0, 1))
#define ChkL1ClsFltr_GL1_PCORE_GL1_PCORE_CCIRQ_H()	(ChkL1ModFltr_GL1_PCORE()&&(FILTER_CHECK(GL1_PCORE_Trace_Filter, 1, 0x01)))
#define ChkL1ClsFltr_GL1_PCORE_GL1_PCORE_MAIN_H()	(ChkL1ModFltr_GL1_PCORE()&&(FILTER_CHECK(GL1_PCORE_Trace_Filter, 1, 0x02)))
#define ChkL1ClsFltr_GL1_PCORE_GL1_PCORE_TOOL_H()	(ChkL1ModFltr_GL1_PCORE()&&(FILTER_CHECK(GL1_PCORE_Trace_Filter, 1, 0x04)))
#define ChkL1ClsFltr_GL1_PCORE_GL1_PCORE_CSD_H()	(ChkL1ModFltr_GL1_PCORE()&&(FILTER_CHECK(GL1_PCORE_Trace_Filter, 1, 0x08)))
#define ChkL1ClsFltr_GL1_PCORE_GL1_PCORE_FCS_H()	(ChkL1ModFltr_GL1_PCORE()&&(FILTER_CHECK(GL1_PCORE_Trace_Filter, 1, 0x10)))
#define ChkL1MsgFltr_GL1_PCORE_TRC_CCIRQ_Handler()	ChkL1ClsFltr_GL1_PCORE_GL1_PCORE_CCIRQ_H()
#define ChkL1MsgFltr_GL1_PCORE_TRC_CCIRQ_SACCH_UPLINK()	ChkL1ClsFltr_GL1_PCORE_GL1_PCORE_CCIRQ_H()
#define ChkL1MsgFltr_GL1_PCORE_TRC_CCIRQ_SDCCH_UPLINK()	ChkL1ClsFltr_GL1_PCORE_GL1_PCORE_CCIRQ_H()
#define ChkL1MsgFltr_GL1_PCORE_TRC_CCIRQ_FACCH_UPLINK()	ChkL1ClsFltr_GL1_PCORE_GL1_PCORE_CCIRQ_H()
#define ChkL1MsgFltr_GL1_PCORE_TRC_MAIN_Init()	ChkL1ClsFltr_GL1_PCORE_GL1_PCORE_MAIN_H()
#define ChkL1MsgFltr_GL1_PCORE_TRC_MAIN_SACCH_DOWNLINK()	ChkL1ClsFltr_GL1_PCORE_GL1_PCORE_MAIN_H()
#define ChkL1MsgFltr_GL1_PCORE_TRC_MAIN_SDCCH_DOWNLINK()	ChkL1ClsFltr_GL1_PCORE_GL1_PCORE_MAIN_H()
#define ChkL1MsgFltr_GL1_PCORE_TRC_MAIN_FACCH_DOWNLINK()	ChkL1ClsFltr_GL1_PCORE_GL1_PCORE_MAIN_H()
#define ChkL1MsgFltr_GL1_PCORE_TRC_MAIN_PACKET_DOWNLINK()	ChkL1ClsFltr_GL1_PCORE_GL1_PCORE_MAIN_H()
#define ChkL1MsgFltr_GL1_PCORE_TRC_TOOL_GetFn()	ChkL1ClsFltr_GL1_PCORE_GL1_PCORE_TOOL_H()
#define ChkL1MsgFltr_GL1_PCORE_TRC_CSD_Activate()	ChkL1ClsFltr_GL1_PCORE_GL1_PCORE_CSD_H()
#define ChkL1MsgFltr_GL1_PCORE_TRC_CSD_Deactivate()	ChkL1ClsFltr_GL1_PCORE_GL1_PCORE_CSD_H()
#define ChkL1MsgFltr_GL1_PCORE_TRC_CSD_DnlinkData1()	ChkL1ClsFltr_GL1_PCORE_GL1_PCORE_CSD_H()
#define ChkL1MsgFltr_GL1_PCORE_TRC_CSD_DnlinkData2()	ChkL1ClsFltr_GL1_PCORE_GL1_PCORE_CSD_H()
#define ChkL1MsgFltr_GL1_PCORE_TRC_FCS()	ChkL1ClsFltr_GL1_PCORE_GL1_PCORE_FCS_H()


#endif
