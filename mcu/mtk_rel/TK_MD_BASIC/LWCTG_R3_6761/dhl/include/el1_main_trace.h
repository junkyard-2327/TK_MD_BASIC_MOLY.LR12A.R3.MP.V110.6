#ifndef L1TRC_EL1_MAIN_DEF_H
#define L1TRC_EL1_MAIN_DEF_H

/******************************/
/* String category definition */
/******************************/
#define EL1_BOOLING_Str(v1)  (unsigned char)(v1+0)
#define EL1_EFUSE_Str(v1)  (unsigned char)(v1+2)
#define EL1_BW_Str(v1)  (unsigned char)(v1+5)
#define EL1_CH_Str(v1)  (unsigned char)(v1+13)
#define EL1_CH_Evt_Str(v1)  (unsigned char)(v1+25)
#define EL1_CH_Ctrl_Str(v1)  (unsigned char)(v1+41)
#define EL1_CH_MainSt_Str(v1)  (unsigned char)(v1+47)
#define EL1_CH_ALLOC_TASK_CMD_Str(v1)  (unsigned char)(v1+55)
#define EL1_CH_ALLOC_TASK2RX_CMD_Str(v1)  (unsigned char)(v1+58)
#define EL1_SCS_Ctrl_Str(v1)  (unsigned char)(v1+65)
#define EL1_DRX_Next_Str(v1)  (unsigned char)(v1+70)
#define EL1_DRX_Cycle_Str(v1)  (unsigned char)(v1+74)
#define EL1_BCCH_PURPOSE_Str(v1)  (unsigned char)(v1+76)
#define EL1_BCCH_TYPE_Str(v1)  (unsigned char)(v1+83)
#define EL1_PCH_NB_Str(v1)  (unsigned char)(v1+89)
#define EL1_PCH_MOD_Str(v1)  (unsigned char)(v1+97)
#define EL1_SCH_EVT_Str(v1)  (unsigned char)(v1+101)
#define EL1_CSR_Str(v1)  (unsigned char)(v1+110)
#define EL1_CSR_ST_Str(v1)  (unsigned char)(v1+118)
#define EL1_CSR_Purpose_Str(v1)  (unsigned char)(v1+125)
#define EL1_CSR_Cause_Str(v1)  (unsigned char)(v1+130)
#define EL1_CSR_CmdQStatus_Str(v1)  (unsigned char)(v1+133)
#define EL1_CSR_CmdQEnabled_Str(v1)  (unsigned char)(v1+138)
#define EL1_CSR_CmdType_Str(v1)  (unsigned char)(v1+140)
#define EL1_Duplex_Mode(v1)  (unsigned char)(v1+142)
#define EL1_CSR_SpecialType_Str(v1)  (unsigned char)(v1+145)
#define EL1_MEAS_CmdType_Str(v1)  (unsigned char)(v1+151)
#define EL1_MEAS_PhsCmdType_Str(v1)  (unsigned char)(v1+156)
#define EL1_MEAS_CmdQueueSt_Str(v1)  (unsigned char)(v1+166)
#define EL1_MEAS_MainSt_Str(v1)  (unsigned char)(v1+171)
#define EL1_MEAS_NaccSetting_Str(v1)  (unsigned char)(v1+176)
#define EL1_MEAS_NaccMode_Str(v1)  (unsigned char)(v1+181)
#define EL1_MEAS_Speed_Mode_Str(v1)  (unsigned char)(v1+185)
#define EL1_CH_DvfsGear_Str(v1)  (unsigned char)(v1+188)
#define LCE_Str(v1)  (unsigned char)(v1+190)
#define PWR_INJECT_Str(v1)  (unsigned char)(v1+193)
#define MCS_Str(v1)  (unsigned char)(v1+204)


/****************************/
/* Message macro definition */
/****************************/
#include "L1Trc.h"
#if defined(L1_CATCHER)
	#define EL1_RECAL_SLEEP_TIME(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x000C,0x000C);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1_RECAL_SLEEP_TIME(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define EL1_EFUSE_TURN_OFF(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x010C,0x010C);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1_EFUSE_TURN_OFF(v1)
#endif

#if defined(L1_CATCHER)
	#define EL1_RXPATH_LOG(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x020C,0x020C);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1_RXPATH_LOG(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define EL1_EM_LOG_SET_PWR_SCN_CMD(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x030C,0x030C);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1_EM_LOG_SET_PWR_SCN_CMD(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define EL1_CAPTURE_START(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x040C,0x040C);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1_CAPTURE_START(v1)
#endif

#if defined(L1_CATCHER)
	#define EL1_CAPTURE_STOP(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x050C,0x050C);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1_CAPTURE_STOP(v1)
#endif

#if defined(L1_CATCHER)
	#define EL1_CAPTURE_STOP_COUNT_DOWN(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x060C,0x060C);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1_CAPTURE_STOP_COUNT_DOWN(v1)
#endif

#if defined(L1_CATCHER)
	#define EL1_RNTI_SCELL_INVALID(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x070C,0x070C);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1_RNTI_SCELL_INVALID(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define EL1_CH_RX_QUAL_RPT_OS_SNR(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x080C,0x080C);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1_CH_RX_QUAL_RPT_OS_SNR(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define EL1_CH_DRX_CFG(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x090C,0x090C);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1_CH_DRX_CFG(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER)
	#define EL1_CH_DRX_CFG1(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0A0C,0x0A0C);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1_CH_DRX_CFG1(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define EL1_CH_DRX_CYC_SLP_EN(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0B0C,0x0B0C);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1_CH_DRX_CYC_SLP_EN(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define EL1_CH_DRX_CYC_NTF(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0C0C,0x0C0C);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1_CH_DRX_CYC_NTF(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define EL1_CH_DRX_SLP_NTF(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0D0C,0x0D0C);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1_CH_DRX_SLP_NTF(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define EL1_CH_LOG(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0E0C,0x0E0C);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1_CH_LOG(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define EL1_CH_LOG_DVFS_GEAR(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0F0C,0x0F0C);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1_CH_LOG_DVFS_GEAR(v1)
#endif

#if defined(L1_CATCHER)
	#define EL1_CH_LOG0(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x100C,0x100C);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1_CH_LOG0(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER)
	#define EL1_CH_LOG1(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x110C,0x110C);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1_CH_LOG1(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define EL1_CH_DLCHG0(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x120C,0x120C);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1_CH_DLCHG0(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define EL1_CH_DLCHG1(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x130C,0x130C);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1_CH_DLCHG1(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define EL1_CH_DLCHG_SCELL(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x140C,0x140C);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1_CH_DLCHG_SCELL(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define EL1_CH_DLCHGRPT(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x150C,0x150C);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1_CH_DLCHGRPT(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define EL1_CH_PHS_CNF(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x160C,0x160C);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1_CH_PHS_CNF(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define EL1_CH_LOG_ALLOC_TASK_CMD(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x170C,0x170C);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1_CH_LOG_ALLOC_TASK_CMD(v1)
#endif

#if defined(L1_CATCHER)
	#define EL1_CH_LOG_ALLOC_TASK2RX_CMD(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x180C,0x180C);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1_CH_LOG_ALLOC_TASK2RX_CMD(v1)
#endif

#if defined(L1_CATCHER)
	#define EL1_BCCH_LOG1(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x190C,0x190C);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1_BCCH_LOG1(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define EL1_BCCH_LOG2(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1A0C,0x1A0C);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1_BCCH_LOG2(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define EL1_BCCH_MIB_RPT0(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1B0C,0x1B0C);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1_BCCH_MIB_RPT0(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER)
	#define EL1_BCCH_MIB_RPT1(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1C0C,0x1C0C);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1_BCCH_MIB_RPT1(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define EL1_BCCH_SI_RPT(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1D0C,0x1D0C);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1_BCCH_SI_RPT(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define EL1_PCH_LOG0(v1, v2, v3, v4, v5, v6) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1E0C,0x1E0C);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1_PCH_LOG0(v1, v2, v3, v4, v5, v6)
#endif

#if defined(L1_CATCHER)
	#define EL1_PCH_LOG1(v1, v2, v3, v4, v5, v6, v7, v8) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1F0C,0x1F0C);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v7,v7);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v8,v8);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1_PCH_LOG1(v1, v2, v3, v4, v5, v6, v7, v8)
#endif

#if defined(L1_CATCHER)
	#define EL1_PCH_PI_BUF_ALLOC(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x200C,0x200C);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1_PCH_PI_BUF_ALLOC(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define EL1_PCH_PI_RPT(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x210C,0x210C);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1_PCH_PI_RPT(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define EL1_CSR_LOG_REQ(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x220C,0x220C);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1_CSR_LOG_REQ(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define EL1_CSR_LOG_PARAM0(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x230C,0x230C);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1_CSR_LOG_PARAM0(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define EL1_CSR_LOG_PARAM1(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x240C,0x240C);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1_CSR_LOG_PARAM1(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define EL1_CSR_LOG_CMD(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x250C,0x250C);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1_CSR_LOG_CMD(v1)
#endif

#if defined(L1_CATCHER)
	#define EL1_CSR_LOG_START_CNF(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x260C,0x260C);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1_CSR_LOG_START_CNF(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define EL1_CSR_LOG_STOP_CNF(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x270C,0x270C);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1_CSR_LOG_STOP_CNF(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define EL1_CSR_LOG_PHS_REL() do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
			TRC_START_FILL_L1();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L1(0x280C,0x280C);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1_CSR_LOG_PHS_REL()
#endif

#if defined(L1_CATCHER)
	#define EL1_CSR_LOG_REGEN_SRCH_LIST(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x290C,0x290C);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1_CSR_LOG_REGEN_SRCH_LIST(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define EL1_CSR_LOG_RPT(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x2A0C,0x2A0C);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1_CSR_LOG_RPT(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define EL1_CSR_LOG_MAX_RSSI_VALUE(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x2B0C,0x2B0C);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1_CSR_LOG_MAX_RSSI_VALUE(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define EL1_CSR_LOG_CELL(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x2C0C,0x2C0C);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1_CSR_LOG_CELL(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER)
	#define EL1_CSR_LOG_RCV_RPT(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x2D0C,0x2D0C);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1_CSR_LOG_RCV_RPT(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER)
	#define EL1_CSR_LOG_FREQ_IDX(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x2E0C,0x2E0C);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1_CSR_LOG_FREQ_IDX(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER)
	#define EL1_CSR_LOG_BandJDG(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x2F0C,0x2F0C);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1_CSR_LOG_BandJDG(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define EL1_CSR_LOG_SET_PWR_SCN_CMD(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x300C,0x300C);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1_CSR_LOG_SET_PWR_SCN_CMD(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define EL1_CSR_CMD_Q_CONTROL(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x310C,0x310C);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1_CSR_CMD_Q_CONTROL(v1)
#endif

#if defined(L1_CATCHER)
	#define EL1_CSR_CMD_Q_BEFORE_UPT(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x320C,0x320C);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1_CSR_CMD_Q_BEFORE_UPT(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define EL1_CSR_CMD_Q_AFTER_UPT(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x330C,0x330C);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1_CSR_CMD_Q_AFTER_UPT(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define EL1_CSR_CMD_IS_LAST_CMD(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x340C,0x340C);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1_CSR_CMD_IS_LAST_CMD(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define EL1_CSR_LOG_BEF_CMD_Q_QRY(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x350C,0x350C);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1_CSR_LOG_BEF_CMD_Q_QRY(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER)
	#define EL1_CSR_LOG_AFT_CMD_Q_QRY(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x360C,0x360C);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1_CSR_LOG_AFT_CMD_Q_QRY(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define EL1_CSR_LOG_REC_PTR(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x370C,0x370C);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1_CSR_LOG_REC_PTR(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define EL1_CSR_LOG_NOT_VALID_CMD_QRY(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x380C,0x380C);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1_CSR_LOG_NOT_VALID_CMD_QRY(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define EL1_CSR_LOG_CMD_Q_CS_Exe(v1, v2, v3, v4, v5, v6, v7, v8, v9) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x390C,0x390C);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v7,v7);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v8,v8);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v9,v9);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1_CSR_LOG_CMD_Q_CS_Exe(v1, v2, v3, v4, v5, v6, v7, v8, v9)
#endif

#if defined(L1_CATCHER)
	#define EL1_CSR_LOG_CMD_Q_PS_Exe(v1, v2, v3, v4, v5, v6, v7, v8, v9) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x3A0C,0x3A0C);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v7,v7);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v8,v8);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v9,v9);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1_CSR_LOG_CMD_Q_PS_Exe(v1, v2, v3, v4, v5, v6, v7, v8, v9)
#endif

#if defined(L1_CATCHER)
	#define EL1_MEAS_LOG_CMD_Q_UPDT_STATUS(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x3B0C,0x3B0C);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1_MEAS_LOG_CMD_Q_UPDT_STATUS(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define EL1_MEAS_LOG_CMD_Q_QUERY(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x3C0C,0x3C0C);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1_MEAS_LOG_CMD_Q_QUERY(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define EL1_MEAS_LOG_CMD_Q_QUERY_AB(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x3D0C,0x3D0C);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1_MEAS_LOG_CMD_Q_QUERY_AB(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define EL1_MEAS_LOG_CMD_Q_QUERY_RLT(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x3E0C,0x3E0C);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1_MEAS_LOG_CMD_Q_QUERY_RLT(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define EL1_MEAS_LOG_CH_CELL_OFST(v1, v2, v3, v4, v5, v6) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x3F0C,0x3F0C);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1_MEAS_LOG_CH_CELL_OFST(v1, v2, v3, v4, v5, v6)
#endif

#if defined(L1_CATCHER)
	#define EL1_MEAS_LOG_CH_CELL_OFST2(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x400C,0x400C);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1_MEAS_LOG_CH_CELL_OFST2(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define EL1_MEAS_LOG_MEAS_STATE(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x410C,0x410C);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1_MEAS_LOG_MEAS_STATE(v1)
#endif

#if defined(L1_CATCHER)
	#define EL1_MEAS_LOG_MEAS_Q_REFRESH(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x420C,0x420C);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1_MEAS_LOG_MEAS_Q_REFRESH(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER)
	#define EL1_MEAS_LOG_MEAS_IDLE_RULE_CHK(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x430C,0x430C);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1_MEAS_LOG_MEAS_IDLE_RULE_CHK(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define EL1_MEAS_LOG_MEAS_BUILD_TBL(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x440C,0x440C);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1_MEAS_LOG_MEAS_BUILD_TBL(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define EL1_MEAS_LOG_MEAS_BUILD_TBL_HPS(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x450C,0x450C);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1_MEAS_LOG_MEAS_BUILD_TBL_HPS(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define EL1_MEAS_LOG_MEAS_BUILD_TBL_ADD(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x460C,0x460C);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1_MEAS_LOG_MEAS_BUILD_TBL_ADD(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define EL1_MEAS_LOG_MEAS_DRX_PCELL_SCH() do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
			TRC_START_FILL_L1();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L1(0x470C,0x470C);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1_MEAS_LOG_MEAS_DRX_PCELL_SCH()
#endif

#if defined(L1_CATCHER)
	#define EL1_MEAS_LOG_PINTRA_TICK_INC(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x480C,0x480C);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1_MEAS_LOG_PINTRA_TICK_INC(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define EL1_MEAS_LOG_SINTRA_TICK_INC(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x490C,0x490C);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1_MEAS_LOG_SINTRA_TICK_INC(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define EL1_MEAS_LOG_MEAS_ENQUEUE(v1, v2, v3, v4, v5, v6, v7) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x4A0C,0x4A0C);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v7,v7);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1_MEAS_LOG_MEAS_ENQUEUE(v1, v2, v3, v4, v5, v6, v7)
#endif

#if defined(L1_CATCHER)
	#define EL1_MEAS_LOG_MEAS_CELL_ADD(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x4B0C,0x4B0C);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1_MEAS_LOG_MEAS_CELL_ADD(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define EL1_MEAS_LOG_MEAS_TIMER_STRT(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x4C0C,0x4C0C);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1_MEAS_LOG_MEAS_TIMER_STRT(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define EL1_MEAS_LOG_MEAS_TIMER_TASK(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x4D0C,0x4D0C);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1_MEAS_LOG_MEAS_TIMER_TASK(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define EL1_MEAS_LOG_MEAS_ADD_CS(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x4E0C,0x4E0C);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1_MEAS_LOG_MEAS_ADD_CS(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER)
	#define EL1_MEAS_LOG_MEAS_ADD_MEAS2(v1, v2, v3, v4, v5, v6) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x4F0C,0x4F0C);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1_MEAS_LOG_MEAS_ADD_MEAS2(v1, v2, v3, v4, v5, v6)
#endif

#if defined(L1_CATCHER)
	#define EL1_MEAS_LOG_MEAS_DRX_CS(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x500C,0x500C);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1_MEAS_LOG_MEAS_DRX_CS(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define EL1_MEAS_LOG_MEAS_DRX_CM(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x510C,0x510C);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1_MEAS_LOG_MEAS_DRX_CM(v1)
#endif

#if defined(L1_CATCHER)
	#define EL1_MEAS_LOG_MEAS_CELL_DEL2(v1, v2, v3, v4, v5, v6) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x520C,0x520C);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1_MEAS_LOG_MEAS_CELL_DEL2(v1, v2, v3, v4, v5, v6)
#endif

#if defined(L1_CATCHER)
	#define EL1_MEAS_LOG_MEAS_CELL_DEL(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x530C,0x530C);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1_MEAS_LOG_MEAS_CELL_DEL(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define EL1_MEAS_LOG_SIC_REC(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x540C,0x540C);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1_MEAS_LOG_SIC_REC(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER)
	#define EL1_MEAS_LOG_MEAS_L1_FILTER(v1, v2, v3, v4, v5, v6, v7, v8) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x550C,0x550C);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v7,v7);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v8,v8);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1_MEAS_LOG_MEAS_L1_FILTER(v1, v2, v3, v4, v5, v6, v7, v8)
#endif

#if defined(L1_CATCHER)
	#define EL1_MEAS_ENQUEUE(v1, v2, v3, v4, v5, v6, v7) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x560C,0x560C);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v7,v7);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1_MEAS_ENQUEUE(v1, v2, v3, v4, v5, v6, v7)
#endif

#if defined(L1_CATCHER)
	#define EL1_MEAS_LOG_SCHDL_TICK_INTVL_Q(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x570C,0x570C);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1_MEAS_LOG_SCHDL_TICK_INTVL_Q(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define EL1_MEAS_LOG_GAP_TICK_SHIFT_Q(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x580C,0x580C);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1_MEAS_LOG_GAP_TICK_SHIFT_Q(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define EL1_MEAS_LOG_INC_CELL_CS_CNT(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x590C,0x590C);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1_MEAS_LOG_INC_CELL_CS_CNT(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER)
	#define EL1_MEAS_LOG_INC_CELL_CM_CNT(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x5A0C,0x5A0C);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1_MEAS_LOG_INC_CELL_CM_CNT(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER)
	#define EL1_MEAS_LOG_INC_CELL_CS_SIC_CNT(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x5B0C,0x5B0C);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1_MEAS_LOG_INC_CELL_CS_SIC_CNT(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER)
	#define EL1_MEAS_LOG_INC_CELL_CM_REF_CNT(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x5C0C,0x5C0C);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1_MEAS_LOG_INC_CELL_CM_REF_CNT(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER)
	#define EL1_MEAS_LOG_DEC_CELL_CS_CNT(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x5D0C,0x5D0C);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1_MEAS_LOG_DEC_CELL_CS_CNT(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER)
	#define EL1_MEAS_LOG_DEC_CELL_CM_CNT(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x5E0C,0x5E0C);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1_MEAS_LOG_DEC_CELL_CM_CNT(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER)
	#define EL1_MEAS_LOG_DEC_CELL_CS_SIC_CNT(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x5F0C,0x5F0C);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1_MEAS_LOG_DEC_CELL_CS_SIC_CNT(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER)
	#define EL1_MEAS_LOG_DEC_CELL_CM_REF_CNT(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x600C,0x600C);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1_MEAS_LOG_DEC_CELL_CM_REF_CNT(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER)
	#define EL1_MEAS_LOG_INC_FREQ_CS_CNT(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x610C,0x610C);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1_MEAS_LOG_INC_FREQ_CS_CNT(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define EL1_MEAS_LOG_INC_FREQ_CM_CNT(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x620C,0x620C);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1_MEAS_LOG_INC_FREQ_CM_CNT(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define EL1_MEAS_LOG_DEC_FREQ_CS_CNT(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x630C,0x630C);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1_MEAS_LOG_DEC_FREQ_CS_CNT(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define EL1_MEAS_LOG_DEC_FREQ_CM_CNT(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x640C,0x640C);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1_MEAS_LOG_DEC_FREQ_CM_CNT(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define EL1_MEAS_LOG_RESET_CELL_ALL_CNT(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x650C,0x650C);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1_MEAS_LOG_RESET_CELL_ALL_CNT(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define EL1_LPP_UPDT_NEXT_PRS(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x660C,0x660C);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1_LPP_UPDT_NEXT_PRS(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define EL1_LPP_IS_MUTE_NBR(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x670C,0x670C);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1_LPP_IS_MUTE_NBR(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define EL1_LPP_UPDT_NEXT_REF(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x680C,0x680C);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1_LPP_UPDT_NEXT_REF(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define EL1_LPP_UPDT_NBR_DATA(v1, v2, v3, v4, v5, v6, v7, v8) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x690C,0x690C);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v7,v7);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v8,v8);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1_LPP_UPDT_NBR_DATA(v1, v2, v3, v4, v5, v6, v7, v8)
#endif

#if defined(L1_CATCHER)
	#define EL1_LPP_GAP(v1, v2, v3, v4, v5, v6, v7) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x6A0C,0x6A0C);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v7,v7);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1_LPP_GAP(v1, v2, v3, v4, v5, v6, v7)
#endif

#if defined(L1_CATCHER)
	#define EL1_LPP_GAP_PRS_DIFF(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x6B0C,0x6B0C);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1_LPP_GAP_PRS_DIFF(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define EL1_LCE_INFO(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x6C0C,0x6C0C);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1_LCE_INFO(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define EL1_LCE_INFO2(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x6D0C,0x6D0C);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1_LCE_INFO2(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define EL1_LOG_PWR_INJECT(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x6E0C,0x6E0C);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1_LOG_PWR_INJECT(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define EL1_LOG_CQI_INJECT(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x6F0C,0x6F0C);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1_LOG_CQI_INJECT(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define EL1_LOG_RI_INJECT(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x700C,0x700C);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1_LOG_RI_INJECT(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EL1TX_LOG_DEBUG_6(v1, v2, v3, v4, v5, v6) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x08);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x710C,0x710C);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define EL1TX_LOG_DEBUG_6(v1, v2, v3, v4, v5, v6)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EL1_ICD_DEBUG_DMRS(v1, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x720C,0x720C);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_MAIN_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define EL1_ICD_DEBUG_DMRS(v1, v4)
#endif



/*******************************/
/* declaration of filter array */
/*******************************/
EXTERN_TMD_FILTER(unsigned char, EL1_MAIN_Trace_Filter, 5);
/*************************/
/* Function declarations */
/*************************/
#ifdef L1_CATCHER

void Set_EL1_MAIN_Filter(unsigned char *setting);

#endif

/************************************/
/* Filter checking API declarations */
/************************************/

#define ChkL1ModFltr_EL1_MAIN()	(FILTER_CHECK(EL1_MAIN_Trace_Filter, 0, 1))
#define ChkL1ClsFltr_EL1_MAIN_el1_trace_1_H()	(ChkL1ModFltr_EL1_MAIN()&&(FILTER_CHECK(EL1_MAIN_Trace_Filter, 1, 0x01)))
#define ChkL1ClsFltr_EL1_MAIN_el1_trace_2_H()	(ChkL1ModFltr_EL1_MAIN()&&(FILTER_CHECK(EL1_MAIN_Trace_Filter, 1, 0x02)))
#define ChkL1ClsFltr_EL1_MAIN_el1_trace_3_M()	(ChkL1ModFltr_EL1_MAIN()&&(FILTER_CHECK(EL1_MAIN_Trace_Filter, 1, 0x04)))
#define ChkL1ClsFltr_EL1_MAIN_el1_trace_4_L()	(ChkL1ModFltr_EL1_MAIN()&&(FILTER_CHECK(EL1_MAIN_Trace_Filter, 1, 0x08)))
#define ChkL1MsgFltr_EL1_RECAL_SLEEP_TIME()	ChkL1ClsFltr_EL1_MAIN_el1_trace_1_H()
#define ChkL1MsgFltr_EL1_EFUSE_TURN_OFF()	ChkL1ClsFltr_EL1_MAIN_el1_trace_1_H()
#define ChkL1MsgFltr_EL1_RXPATH_LOG()	ChkL1ClsFltr_EL1_MAIN_el1_trace_1_H()
#define ChkL1MsgFltr_EL1_EM_LOG_SET_PWR_SCN_CMD()	ChkL1ClsFltr_EL1_MAIN_el1_trace_1_H()
#define ChkL1MsgFltr_EL1_CAPTURE_START()	ChkL1ClsFltr_EL1_MAIN_el1_trace_1_H()
#define ChkL1MsgFltr_EL1_CAPTURE_STOP()	ChkL1ClsFltr_EL1_MAIN_el1_trace_1_H()
#define ChkL1MsgFltr_EL1_CAPTURE_STOP_COUNT_DOWN()	ChkL1ClsFltr_EL1_MAIN_el1_trace_1_H()
#define ChkL1MsgFltr_EL1_RNTI_SCELL_INVALID()	ChkL1ClsFltr_EL1_MAIN_el1_trace_1_H()
#define ChkL1MsgFltr_EL1_CH_RX_QUAL_RPT_OS_SNR()	ChkL1ClsFltr_EL1_MAIN_el1_trace_1_H()
#define ChkL1MsgFltr_EL1_CH_DRX_CFG()	ChkL1ClsFltr_EL1_MAIN_el1_trace_1_H()
#define ChkL1MsgFltr_EL1_CH_DRX_CFG1()	ChkL1ClsFltr_EL1_MAIN_el1_trace_1_H()
#define ChkL1MsgFltr_EL1_CH_DRX_CYC_SLP_EN()	ChkL1ClsFltr_EL1_MAIN_el1_trace_1_H()
#define ChkL1MsgFltr_EL1_CH_DRX_CYC_NTF()	ChkL1ClsFltr_EL1_MAIN_el1_trace_1_H()
#define ChkL1MsgFltr_EL1_CH_DRX_SLP_NTF()	ChkL1ClsFltr_EL1_MAIN_el1_trace_1_H()
#define ChkL1MsgFltr_EL1_CH_LOG()	ChkL1ClsFltr_EL1_MAIN_el1_trace_1_H()
#define ChkL1MsgFltr_EL1_CH_LOG_DVFS_GEAR()	ChkL1ClsFltr_EL1_MAIN_el1_trace_1_H()
#define ChkL1MsgFltr_EL1_CH_LOG0()	ChkL1ClsFltr_EL1_MAIN_el1_trace_1_H()
#define ChkL1MsgFltr_EL1_CH_LOG1()	ChkL1ClsFltr_EL1_MAIN_el1_trace_1_H()
#define ChkL1MsgFltr_EL1_CH_DLCHG0()	ChkL1ClsFltr_EL1_MAIN_el1_trace_1_H()
#define ChkL1MsgFltr_EL1_CH_DLCHG1()	ChkL1ClsFltr_EL1_MAIN_el1_trace_1_H()
#define ChkL1MsgFltr_EL1_CH_DLCHG_SCELL()	ChkL1ClsFltr_EL1_MAIN_el1_trace_1_H()
#define ChkL1MsgFltr_EL1_CH_DLCHGRPT()	ChkL1ClsFltr_EL1_MAIN_el1_trace_1_H()
#define ChkL1MsgFltr_EL1_CH_PHS_CNF()	ChkL1ClsFltr_EL1_MAIN_el1_trace_1_H()
#define ChkL1MsgFltr_EL1_CH_LOG_ALLOC_TASK_CMD()	ChkL1ClsFltr_EL1_MAIN_el1_trace_1_H()
#define ChkL1MsgFltr_EL1_CH_LOG_ALLOC_TASK2RX_CMD()	ChkL1ClsFltr_EL1_MAIN_el1_trace_1_H()
#define ChkL1MsgFltr_EL1_BCCH_LOG1()	ChkL1ClsFltr_EL1_MAIN_el1_trace_1_H()
#define ChkL1MsgFltr_EL1_BCCH_LOG2()	ChkL1ClsFltr_EL1_MAIN_el1_trace_1_H()
#define ChkL1MsgFltr_EL1_BCCH_MIB_RPT0()	ChkL1ClsFltr_EL1_MAIN_el1_trace_1_H()
#define ChkL1MsgFltr_EL1_BCCH_MIB_RPT1()	ChkL1ClsFltr_EL1_MAIN_el1_trace_1_H()
#define ChkL1MsgFltr_EL1_BCCH_SI_RPT()	ChkL1ClsFltr_EL1_MAIN_el1_trace_1_H()
#define ChkL1MsgFltr_EL1_PCH_LOG0()	ChkL1ClsFltr_EL1_MAIN_el1_trace_1_H()
#define ChkL1MsgFltr_EL1_PCH_LOG1()	ChkL1ClsFltr_EL1_MAIN_el1_trace_1_H()
#define ChkL1MsgFltr_EL1_PCH_PI_BUF_ALLOC()	ChkL1ClsFltr_EL1_MAIN_el1_trace_1_H()
#define ChkL1MsgFltr_EL1_PCH_PI_RPT()	ChkL1ClsFltr_EL1_MAIN_el1_trace_1_H()
#define ChkL1MsgFltr_EL1_CSR_LOG_REQ()	ChkL1ClsFltr_EL1_MAIN_el1_trace_1_H()
#define ChkL1MsgFltr_EL1_CSR_LOG_PARAM0()	ChkL1ClsFltr_EL1_MAIN_el1_trace_1_H()
#define ChkL1MsgFltr_EL1_CSR_LOG_PARAM1()	ChkL1ClsFltr_EL1_MAIN_el1_trace_1_H()
#define ChkL1MsgFltr_EL1_CSR_LOG_CMD()	ChkL1ClsFltr_EL1_MAIN_el1_trace_1_H()
#define ChkL1MsgFltr_EL1_CSR_LOG_START_CNF()	ChkL1ClsFltr_EL1_MAIN_el1_trace_1_H()
#define ChkL1MsgFltr_EL1_CSR_LOG_STOP_CNF()	ChkL1ClsFltr_EL1_MAIN_el1_trace_1_H()
#define ChkL1MsgFltr_EL1_CSR_LOG_PHS_REL()	ChkL1ClsFltr_EL1_MAIN_el1_trace_1_H()
#define ChkL1MsgFltr_EL1_CSR_LOG_REGEN_SRCH_LIST()	ChkL1ClsFltr_EL1_MAIN_el1_trace_1_H()
#define ChkL1MsgFltr_EL1_CSR_LOG_RPT()	ChkL1ClsFltr_EL1_MAIN_el1_trace_1_H()
#define ChkL1MsgFltr_EL1_CSR_LOG_MAX_RSSI_VALUE()	ChkL1ClsFltr_EL1_MAIN_el1_trace_1_H()
#define ChkL1MsgFltr_EL1_CSR_LOG_CELL()	ChkL1ClsFltr_EL1_MAIN_el1_trace_1_H()
#define ChkL1MsgFltr_EL1_CSR_LOG_RCV_RPT()	ChkL1ClsFltr_EL1_MAIN_el1_trace_1_H()
#define ChkL1MsgFltr_EL1_CSR_LOG_FREQ_IDX()	ChkL1ClsFltr_EL1_MAIN_el1_trace_1_H()
#define ChkL1MsgFltr_EL1_CSR_LOG_BandJDG()	ChkL1ClsFltr_EL1_MAIN_el1_trace_1_H()
#define ChkL1MsgFltr_EL1_CSR_LOG_SET_PWR_SCN_CMD()	ChkL1ClsFltr_EL1_MAIN_el1_trace_1_H()
#define ChkL1MsgFltr_EL1_CSR_CMD_Q_CONTROL()	ChkL1ClsFltr_EL1_MAIN_el1_trace_1_H()
#define ChkL1MsgFltr_EL1_CSR_CMD_Q_BEFORE_UPT()	ChkL1ClsFltr_EL1_MAIN_el1_trace_1_H()
#define ChkL1MsgFltr_EL1_CSR_CMD_Q_AFTER_UPT()	ChkL1ClsFltr_EL1_MAIN_el1_trace_1_H()
#define ChkL1MsgFltr_EL1_CSR_CMD_IS_LAST_CMD()	ChkL1ClsFltr_EL1_MAIN_el1_trace_1_H()
#define ChkL1MsgFltr_EL1_CSR_LOG_BEF_CMD_Q_QRY()	ChkL1ClsFltr_EL1_MAIN_el1_trace_1_H()
#define ChkL1MsgFltr_EL1_CSR_LOG_AFT_CMD_Q_QRY()	ChkL1ClsFltr_EL1_MAIN_el1_trace_1_H()
#define ChkL1MsgFltr_EL1_CSR_LOG_REC_PTR()	ChkL1ClsFltr_EL1_MAIN_el1_trace_1_H()
#define ChkL1MsgFltr_EL1_CSR_LOG_NOT_VALID_CMD_QRY()	ChkL1ClsFltr_EL1_MAIN_el1_trace_1_H()
#define ChkL1MsgFltr_EL1_CSR_LOG_CMD_Q_CS_Exe()	ChkL1ClsFltr_EL1_MAIN_el1_trace_1_H()
#define ChkL1MsgFltr_EL1_CSR_LOG_CMD_Q_PS_Exe()	ChkL1ClsFltr_EL1_MAIN_el1_trace_1_H()
#define ChkL1MsgFltr_EL1_MEAS_LOG_CMD_Q_UPDT_STATUS()	ChkL1ClsFltr_EL1_MAIN_el1_trace_1_H()
#define ChkL1MsgFltr_EL1_MEAS_LOG_CMD_Q_QUERY()	ChkL1ClsFltr_EL1_MAIN_el1_trace_1_H()
#define ChkL1MsgFltr_EL1_MEAS_LOG_CMD_Q_QUERY_AB()	ChkL1ClsFltr_EL1_MAIN_el1_trace_1_H()
#define ChkL1MsgFltr_EL1_MEAS_LOG_CMD_Q_QUERY_RLT()	ChkL1ClsFltr_EL1_MAIN_el1_trace_1_H()
#define ChkL1MsgFltr_EL1_MEAS_LOG_CH_CELL_OFST()	ChkL1ClsFltr_EL1_MAIN_el1_trace_1_H()
#define ChkL1MsgFltr_EL1_MEAS_LOG_CH_CELL_OFST2()	ChkL1ClsFltr_EL1_MAIN_el1_trace_1_H()
#define ChkL1MsgFltr_EL1_MEAS_LOG_MEAS_STATE()	ChkL1ClsFltr_EL1_MAIN_el1_trace_1_H()
#define ChkL1MsgFltr_EL1_MEAS_LOG_MEAS_Q_REFRESH()	ChkL1ClsFltr_EL1_MAIN_el1_trace_1_H()
#define ChkL1MsgFltr_EL1_MEAS_LOG_MEAS_IDLE_RULE_CHK()	ChkL1ClsFltr_EL1_MAIN_el1_trace_1_H()
#define ChkL1MsgFltr_EL1_MEAS_LOG_MEAS_BUILD_TBL()	ChkL1ClsFltr_EL1_MAIN_el1_trace_1_H()
#define ChkL1MsgFltr_EL1_MEAS_LOG_MEAS_BUILD_TBL_HPS()	ChkL1ClsFltr_EL1_MAIN_el1_trace_1_H()
#define ChkL1MsgFltr_EL1_MEAS_LOG_MEAS_BUILD_TBL_ADD()	ChkL1ClsFltr_EL1_MAIN_el1_trace_1_H()
#define ChkL1MsgFltr_EL1_MEAS_LOG_MEAS_DRX_PCELL_SCH()	ChkL1ClsFltr_EL1_MAIN_el1_trace_1_H()
#define ChkL1MsgFltr_EL1_MEAS_LOG_PINTRA_TICK_INC()	ChkL1ClsFltr_EL1_MAIN_el1_trace_1_H()
#define ChkL1MsgFltr_EL1_MEAS_LOG_SINTRA_TICK_INC()	ChkL1ClsFltr_EL1_MAIN_el1_trace_1_H()
#define ChkL1MsgFltr_EL1_MEAS_LOG_MEAS_ENQUEUE()	ChkL1ClsFltr_EL1_MAIN_el1_trace_1_H()
#define ChkL1MsgFltr_EL1_MEAS_LOG_MEAS_CELL_ADD()	ChkL1ClsFltr_EL1_MAIN_el1_trace_1_H()
#define ChkL1MsgFltr_EL1_MEAS_LOG_MEAS_TIMER_STRT()	ChkL1ClsFltr_EL1_MAIN_el1_trace_1_H()
#define ChkL1MsgFltr_EL1_MEAS_LOG_MEAS_TIMER_TASK()	ChkL1ClsFltr_EL1_MAIN_el1_trace_1_H()
#define ChkL1MsgFltr_EL1_MEAS_LOG_MEAS_ADD_CS()	ChkL1ClsFltr_EL1_MAIN_el1_trace_1_H()
#define ChkL1MsgFltr_EL1_MEAS_LOG_MEAS_ADD_MEAS2()	ChkL1ClsFltr_EL1_MAIN_el1_trace_1_H()
#define ChkL1MsgFltr_EL1_MEAS_LOG_MEAS_DRX_CS()	ChkL1ClsFltr_EL1_MAIN_el1_trace_1_H()
#define ChkL1MsgFltr_EL1_MEAS_LOG_MEAS_DRX_CM()	ChkL1ClsFltr_EL1_MAIN_el1_trace_1_H()
#define ChkL1MsgFltr_EL1_MEAS_LOG_MEAS_CELL_DEL2()	ChkL1ClsFltr_EL1_MAIN_el1_trace_1_H()
#define ChkL1MsgFltr_EL1_MEAS_LOG_MEAS_CELL_DEL()	ChkL1ClsFltr_EL1_MAIN_el1_trace_1_H()
#define ChkL1MsgFltr_EL1_MEAS_LOG_SIC_REC()	ChkL1ClsFltr_EL1_MAIN_el1_trace_1_H()
#define ChkL1MsgFltr_EL1_MEAS_LOG_MEAS_L1_FILTER()	ChkL1ClsFltr_EL1_MAIN_el1_trace_1_H()
#define ChkL1MsgFltr_EL1_MEAS_ENQUEUE()	ChkL1ClsFltr_EL1_MAIN_el1_trace_1_H()
#define ChkL1MsgFltr_EL1_MEAS_LOG_SCHDL_TICK_INTVL_Q()	ChkL1ClsFltr_EL1_MAIN_el1_trace_1_H()
#define ChkL1MsgFltr_EL1_MEAS_LOG_GAP_TICK_SHIFT_Q()	ChkL1ClsFltr_EL1_MAIN_el1_trace_1_H()
#define ChkL1MsgFltr_EL1_MEAS_LOG_INC_CELL_CS_CNT()	ChkL1ClsFltr_EL1_MAIN_el1_trace_1_H()
#define ChkL1MsgFltr_EL1_MEAS_LOG_INC_CELL_CM_CNT()	ChkL1ClsFltr_EL1_MAIN_el1_trace_1_H()
#define ChkL1MsgFltr_EL1_MEAS_LOG_INC_CELL_CS_SIC_CNT()	ChkL1ClsFltr_EL1_MAIN_el1_trace_1_H()
#define ChkL1MsgFltr_EL1_MEAS_LOG_INC_CELL_CM_REF_CNT()	ChkL1ClsFltr_EL1_MAIN_el1_trace_1_H()
#define ChkL1MsgFltr_EL1_MEAS_LOG_DEC_CELL_CS_CNT()	ChkL1ClsFltr_EL1_MAIN_el1_trace_1_H()
#define ChkL1MsgFltr_EL1_MEAS_LOG_DEC_CELL_CM_CNT()	ChkL1ClsFltr_EL1_MAIN_el1_trace_1_H()
#define ChkL1MsgFltr_EL1_MEAS_LOG_DEC_CELL_CS_SIC_CNT()	ChkL1ClsFltr_EL1_MAIN_el1_trace_1_H()
#define ChkL1MsgFltr_EL1_MEAS_LOG_DEC_CELL_CM_REF_CNT()	ChkL1ClsFltr_EL1_MAIN_el1_trace_1_H()
#define ChkL1MsgFltr_EL1_MEAS_LOG_INC_FREQ_CS_CNT()	ChkL1ClsFltr_EL1_MAIN_el1_trace_1_H()
#define ChkL1MsgFltr_EL1_MEAS_LOG_INC_FREQ_CM_CNT()	ChkL1ClsFltr_EL1_MAIN_el1_trace_1_H()
#define ChkL1MsgFltr_EL1_MEAS_LOG_DEC_FREQ_CS_CNT()	ChkL1ClsFltr_EL1_MAIN_el1_trace_1_H()
#define ChkL1MsgFltr_EL1_MEAS_LOG_DEC_FREQ_CM_CNT()	ChkL1ClsFltr_EL1_MAIN_el1_trace_1_H()
#define ChkL1MsgFltr_EL1_MEAS_LOG_RESET_CELL_ALL_CNT()	ChkL1ClsFltr_EL1_MAIN_el1_trace_1_H()
#define ChkL1MsgFltr_EL1_LPP_UPDT_NEXT_PRS()	ChkL1ClsFltr_EL1_MAIN_el1_trace_1_H()
#define ChkL1MsgFltr_EL1_LPP_IS_MUTE_NBR()	ChkL1ClsFltr_EL1_MAIN_el1_trace_1_H()
#define ChkL1MsgFltr_EL1_LPP_UPDT_NEXT_REF()	ChkL1ClsFltr_EL1_MAIN_el1_trace_1_H()
#define ChkL1MsgFltr_EL1_LPP_UPDT_NBR_DATA()	ChkL1ClsFltr_EL1_MAIN_el1_trace_1_H()
#define ChkL1MsgFltr_EL1_LPP_GAP()	ChkL1ClsFltr_EL1_MAIN_el1_trace_1_H()
#define ChkL1MsgFltr_EL1_LPP_GAP_PRS_DIFF()	ChkL1ClsFltr_EL1_MAIN_el1_trace_1_H()
#define ChkL1MsgFltr_EL1_LCE_INFO()	ChkL1ClsFltr_EL1_MAIN_el1_trace_1_H()
#define ChkL1MsgFltr_EL1_LCE_INFO2()	ChkL1ClsFltr_EL1_MAIN_el1_trace_1_H()
#define ChkL1MsgFltr_EL1_LOG_PWR_INJECT()	ChkL1ClsFltr_EL1_MAIN_el1_trace_1_H()
#define ChkL1MsgFltr_EL1_LOG_CQI_INJECT()	ChkL1ClsFltr_EL1_MAIN_el1_trace_1_H()
#define ChkL1MsgFltr_EL1_LOG_RI_INJECT()	ChkL1ClsFltr_EL1_MAIN_el1_trace_1_H()
#define ChkL1MsgFltr_EL1TX_LOG_DEBUG_6()	ChkL1ClsFltr_EL1_MAIN_el1_trace_4_L()
#define ChkL1MsgFltr_EL1_ICD_DEBUG_DMRS()	ChkL1ClsFltr_EL1_MAIN_el1_trace_4_L()


#endif
