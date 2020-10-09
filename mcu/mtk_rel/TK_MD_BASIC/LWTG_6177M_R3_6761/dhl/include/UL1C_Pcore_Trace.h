#ifndef L1TRC_UL1C_PRI_PCORE_DEF_H
#define L1TRC_UL1C_PRI_PCORE_DEF_H

/******************************/
/* String category definition */
/******************************/


/****************************/
/* Message macro definition */
/****************************/
#include "L1Trc.h"
#if defined(L1_CATCHER)
	#define UL1PcoreI_TRC_PutHISRQueue(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI_PCORE_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x00A5,0x00A5);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI_PCORE_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define UL1PcoreI_TRC_PutHISRQueue(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define UL1PcoreT_TRC_ControlInit() do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI_PCORE_Trace_Filter, 1, 0x02);\
			TRC_START_FILL_L1();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L1(0x01A5,0x01A5);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI_PCORE_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define UL1PcoreT_TRC_ControlInit()
#endif

#if defined(L1_CATCHER)
	#define UL1PcoreT_TRC_GetCurrentTime(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI_PCORE_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x02A5,0x02A5);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI_PCORE_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define UL1PcoreT_TRC_GetCurrentTime(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define UL1PcoreT_TRC_CEDCHCheckStarted(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI_PCORE_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x03A5,0x03A5);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI_PCORE_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define UL1PcoreT_TRC_CEDCHCheckStarted(v1)
#endif

#if defined(L1_CATCHER)
	#define UL1PcoreT_TRC_CurrAndPendingConfigTGPS(v1, v2, v3, v4, v5, v6) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI_PCORE_Trace_Filter, 1, 0x02);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x04A5,0x04A5);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI_PCORE_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define UL1PcoreT_TRC_CurrAndPendingConfigTGPS(v1, v2, v3, v4, v5, v6)
#endif

#if defined(L1_CATCHER)
	#define UL1PcoreT_TRC_PendingConfigTGPS_byTGPSI(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI_PCORE_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x05A5,0x05A5);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI_PCORE_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define UL1PcoreT_TRC_PendingConfigTGPS_byTGPSI(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define UL1PcoreT_TRC_CurrAndPendingTGPS_Status_byTGMP(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI_PCORE_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x06A5,0x06A5);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI_PCORE_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define UL1PcoreT_TRC_CurrAndPendingTGPS_Status_byTGMP(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define UL1PcoreT_TRC_FreeDLDataBuffer(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI_PCORE_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x07A5,0x07A5);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI_PCORE_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define UL1PcoreT_TRC_FreeDLDataBuffer(v1)
#endif

#if defined(L1_CATCHER)
	#define UL1PcoreI_TRC_FreeDLDataReport(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI_PCORE_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x08A5,0x08A5);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI_PCORE_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define UL1PcoreI_TRC_FreeDLDataReport(v1)
#endif

#if defined(L1_CATCHER)
	#define UL1PcoreI_TRC_DLDataReportHandler0(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI_PCORE_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x09A5,0x09A5);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI_PCORE_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define UL1PcoreI_TRC_DLDataReportHandler0(v1)
#endif

#if defined(L1_CATCHER)
	#define UL1PcoreI_TRC_DLDataReportHandler1(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI_PCORE_Trace_Filter, 1, 0x04);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0AA5,0x0AA5);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI_PCORE_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define UL1PcoreI_TRC_DLDataReportHandler1(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER)
	#define UL1PcoreI_TRC_DLDataReportHandler2(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI_PCORE_Trace_Filter, 1, 0x04);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0BA5,0x0BA5);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI_PCORE_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define UL1PcoreI_TRC_DLDataReportHandler2(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER)
	#define UL1PcoreI_TRC_DLDataReportHandler3(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI_PCORE_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0CA5,0x0CA5);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI_PCORE_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define UL1PcoreI_TRC_DLDataReportHandler3(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define UL1PcoreI_TRC_DLDataReportHandler4(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI_PCORE_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0DA5,0x0DA5);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI_PCORE_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define UL1PcoreI_TRC_DLDataReportHandler4(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define UL1PcoreI_TRC_PhyMsgHandler(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(UL1C_PRI_PCORE_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0EA5,0x0EA5);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(UL1C_PRI_PCORE_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define UL1PcoreI_TRC_PhyMsgHandler(v1)
#endif



/*******************************/
/* declaration of filter array */
/*******************************/
EXTERN_TMD_FILTER(unsigned char, UL1C_PRI_PCORE_Trace_Filter, 5);
/*************************/
/* Function declarations */
/*************************/
#ifdef L1_CATCHER

void Set_UL1C_PRI_PCORE_Filter(unsigned char *setting);

#endif

/************************************/
/* Filter checking API declarations */
/************************************/

#define ChkL1ModFltr_UL1C_PRI_PCORE()	(FILTER_CHECK(UL1C_PRI_PCORE_Trace_Filter, 0, 1))
#define ChkL1ClsFltr_UL1C_PRI_PCORE_UL1C_PCORE_CORE_H()	(ChkL1ModFltr_UL1C_PRI_PCORE()&&(FILTER_CHECK(UL1C_PRI_PCORE_Trace_Filter, 1, 0x01)))
#define ChkL1ClsFltr_UL1C_PRI_PCORE_UL1C_PCORE_CTRL_H()	(ChkL1ModFltr_UL1C_PRI_PCORE()&&(FILTER_CHECK(UL1C_PRI_PCORE_Trace_Filter, 1, 0x02)))
#define ChkL1ClsFltr_UL1C_PRI_PCORE_UL1C_PCORE_DATA_H()	(ChkL1ModFltr_UL1C_PRI_PCORE()&&(FILTER_CHECK(UL1C_PRI_PCORE_Trace_Filter, 1, 0x04)))
#define ChkL1MsgFltr_UL1PcoreI_TRC_PutHISRQueue()	ChkL1ClsFltr_UL1C_PRI_PCORE_UL1C_PCORE_CORE_H()
#define ChkL1MsgFltr_UL1PcoreT_TRC_ControlInit()	ChkL1ClsFltr_UL1C_PRI_PCORE_UL1C_PCORE_CTRL_H()
#define ChkL1MsgFltr_UL1PcoreT_TRC_GetCurrentTime()	ChkL1ClsFltr_UL1C_PRI_PCORE_UL1C_PCORE_CTRL_H()
#define ChkL1MsgFltr_UL1PcoreT_TRC_CEDCHCheckStarted()	ChkL1ClsFltr_UL1C_PRI_PCORE_UL1C_PCORE_CTRL_H()
#define ChkL1MsgFltr_UL1PcoreT_TRC_CurrAndPendingConfigTGPS()	ChkL1ClsFltr_UL1C_PRI_PCORE_UL1C_PCORE_CTRL_H()
#define ChkL1MsgFltr_UL1PcoreT_TRC_PendingConfigTGPS_byTGPSI()	ChkL1ClsFltr_UL1C_PRI_PCORE_UL1C_PCORE_CTRL_H()
#define ChkL1MsgFltr_UL1PcoreT_TRC_CurrAndPendingTGPS_Status_byTGMP()	ChkL1ClsFltr_UL1C_PRI_PCORE_UL1C_PCORE_CTRL_H()
#define ChkL1MsgFltr_UL1PcoreT_TRC_FreeDLDataBuffer()	ChkL1ClsFltr_UL1C_PRI_PCORE_UL1C_PCORE_DATA_H()
#define ChkL1MsgFltr_UL1PcoreI_TRC_FreeDLDataReport()	ChkL1ClsFltr_UL1C_PRI_PCORE_UL1C_PCORE_DATA_H()
#define ChkL1MsgFltr_UL1PcoreI_TRC_DLDataReportHandler0()	ChkL1ClsFltr_UL1C_PRI_PCORE_UL1C_PCORE_DATA_H()
#define ChkL1MsgFltr_UL1PcoreI_TRC_DLDataReportHandler1()	ChkL1ClsFltr_UL1C_PRI_PCORE_UL1C_PCORE_DATA_H()
#define ChkL1MsgFltr_UL1PcoreI_TRC_DLDataReportHandler2()	ChkL1ClsFltr_UL1C_PRI_PCORE_UL1C_PCORE_DATA_H()
#define ChkL1MsgFltr_UL1PcoreI_TRC_DLDataReportHandler3()	ChkL1ClsFltr_UL1C_PRI_PCORE_UL1C_PCORE_DATA_H()
#define ChkL1MsgFltr_UL1PcoreI_TRC_DLDataReportHandler4()	ChkL1ClsFltr_UL1C_PRI_PCORE_UL1C_PCORE_DATA_H()
#define ChkL1MsgFltr_UL1PcoreI_TRC_PhyMsgHandler()	ChkL1ClsFltr_UL1C_PRI_PCORE_UL1C_PCORE_DATA_H()


#endif
