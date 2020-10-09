#ifndef L1TRC_EL1_PHS_2_DEF_H
#define L1TRC_EL1_PHS_2_DEF_H

/******************************/
/* String category definition */
/******************************/
#define PHS_TRACE_ZERO(v1)  (unsigned char)(v1+0)
#define PHS_SCELL_ACTV_CB_STATUS(v1)  (unsigned char)(v1+1)
#define PHS_SCELL_ACTV_REQ_TYPE(v1)  (unsigned char)(v1+11)
#define PHS_RNTI_STATUS(v1)  (unsigned char)(v1+18)
#define PHS_LRX_STATE(v1)  (unsigned char)(v1+30)
#define PHS_SCELL_REQ(v1)  (unsigned char)(v1+44)
#define PHS_SCELL_CH_TYPE(v1)  (unsigned char)(v1+47)
#define PHS_ILM_MSG(v1)  (unsigned char)(v1+51)
#define PHS_CNF_WAIT_STRING(v1)  (unsigned char)(v1+109)
#define PHS_L1D_HP_RPT_STRING(v1)  (unsigned char)(v1+135)
#define PHS_L1D_LP_RPT_STRING(v1)  (unsigned char)(v1+144)
#define PHS_TX2RX_MSG(v1)  (unsigned char)(v1+149)
#define PHS_SCELL_STATUS(v1)  (unsigned char)(v1+158)
#define PHS_SCALL_ACTV_ACTION(v1)  (unsigned char)(v1+167)
#define PHS_EVT_ACTION_CONFIG(v1)  (unsigned char)(v1+177)
#define PHS_ISR_CMD_STRING(v1)  (unsigned char)(v1+180)
#define PHS_SIM_IDX_STRING_2(v1)  (unsigned char)(v1+214)
#define PHS_TAS_STATUS_STRING(v1)  (unsigned char)(v1+218)
#define PHS_INTER_SIM_CONFLICT_STRING(v1)  (unsigned char)(v1+225)
#define PHS_PARAM_TYPE_STRING(v1)  (unsigned char)(v1+230)


/****************************/
/* Message macro definition */
/****************************/
#include "L1Trc.h"
#if defined(L1_CATCHER)
	#define PHS_LOG_T_SCELL_ADRL_2(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_PHS_2_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0004,0x0004);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_PHS_2_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define PHS_LOG_T_SCELL_ADRL_2(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define PHS_LOG_T_SCC_ACTV_CB_ST_UPT(v1, v2, v3, v4, v5, v6) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_PHS_2_Trace_Filter, 1, 0x01);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0104,0x0104);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_PHS_2_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define PHS_LOG_T_SCC_ACTV_CB_ST_UPT(v1, v2, v3, v4, v5, v6)
#endif

#if defined(L1_CATCHER)
	#define PHS_LOG_T_SCC_ACTV_ACTION(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_PHS_2_Trace_Filter, 1, 0x01);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0204,0x0204);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_PHS_2_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define PHS_LOG_T_SCC_ACTV_ACTION(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER)
	#define PHS_LOG_T_SCC_ACTV_CNFBMP_CHK(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_PHS_2_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0304,0x0304);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_PHS_2_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define PHS_LOG_T_SCC_ACTV_CNFBMP_CHK(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define PHS_LOG_I_PHS_SCELL_ACT_STATE(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_PHS_2_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0404,0x0404);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_PHS_2_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define PHS_LOG_I_PHS_SCELL_ACT_STATE(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define PHS_LOG_I_PHS_LRX_STATE(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_PHS_2_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0504,0x0504);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_PHS_2_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define PHS_LOG_I_PHS_LRX_STATE(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define PHS_LOG_T_PHS_RCV_ILM_MSG(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_PHS_2_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0604,0x0604);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_PHS_2_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define PHS_LOG_T_PHS_RCV_ILM_MSG(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define PHS_LOG_I_TX_ISR_MSG(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_PHS_2_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0704,0x0704);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_PHS_2_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define PHS_LOG_I_TX_ISR_MSG(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define PHS_LOG_T_L1D_RPT(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_PHS_2_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0804,0x0804);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_PHS_2_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define PHS_LOG_T_L1D_RPT(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define PHS_LOG_T_NXT_CH_CHNG_PROC(v1, v2, v3, v4, v5, v6, v7) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_PHS_2_Trace_Filter, 1, 0x01);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0904,0x0904);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v7,v7);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_PHS_2_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define PHS_LOG_T_NXT_CH_CHNG_PROC(v1, v2, v3, v4, v5, v6, v7)
#endif

#if defined(L1_CATCHER)
	#define PHS_LOG_SCELL_STATUS_CHNG(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_PHS_2_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0A04,0x0A04);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_PHS_2_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define PHS_LOG_SCELL_STATUS_CHNG(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define PHS_LOG_SCELL_PSEUDO_ACT_SET(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_PHS_2_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0B04,0x0B04);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_PHS_2_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define PHS_LOG_SCELL_PSEUDO_ACT_SET(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define PHS_LOG_I_SCELL_PSEUDO_ACT(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_PHS_2_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0C04,0x0C04);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_PHS_2_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define PHS_LOG_I_SCELL_PSEUDO_ACT(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define PHS_LOG_T_SCELL_MSG_SEND(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_PHS_2_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0D04,0x0D04);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_PHS_2_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define PHS_LOG_T_SCELL_MSG_SEND(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define PHS_LOG_I_L1D_CMD_SET(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_PHS_2_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0E04,0x0E04);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_PHS_2_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define PHS_LOG_I_L1D_CMD_SET(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define PHS_LOG_I_AMIF_INFO(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_PHS_2_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0F04,0x0F04);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_PHS_2_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define PHS_LOG_I_AMIF_INFO(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define PHS_LOG_I_TAS_STATUS_SET(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_PHS_2_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1004,0x1004);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_PHS_2_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define PHS_LOG_I_TAS_STATUS_SET(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define PHS_LOG_I_TAS_CMD_SET(v1, v2, v3, v4, v5, v6) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_PHS_2_Trace_Filter, 1, 0x01);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1104,0x1104);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_PHS_2_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define PHS_LOG_I_TAS_CMD_SET(v1, v2, v3, v4, v5, v6)
#endif

#if defined(L1_CATCHER)
	#define PHS_LOG_I_TAS_INACTIVE_FLOW(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_PHS_2_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1204,0x1204);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_PHS_2_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define PHS_LOG_I_TAS_INACTIVE_FLOW(v1)
#endif

#if defined(L1_CATCHER)
	#define PHS_LOG_I_TAS_IDLE_DRX_FLOW(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_PHS_2_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1304,0x1304);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_PHS_2_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define PHS_LOG_I_TAS_IDLE_DRX_FLOW(v1)
#endif

#if defined(L1_CATCHER)
	#define PHS_LOG_SLEEP_DURATION(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_PHS_2_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1404,0x1404);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_PHS_2_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define PHS_LOG_SLEEP_DURATION(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define PHS_LOG_MODEM_SLEEP_IND(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_PHS_2_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1504,0x1504);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_PHS_2_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define PHS_LOG_MODEM_SLEEP_IND(v1)
#endif

#if defined(L1_CATCHER)
	#define PHS_LOG_DISABLE_SLEEP(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_PHS_2_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1604,0x1604);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_PHS_2_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define PHS_LOG_DISABLE_SLEEP(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define PHS_LOG_ENABLE_SLEEP(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_PHS_2_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1704,0x1704);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_PHS_2_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define PHS_LOG_ENABLE_SLEEP(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define PHS_LOG_SET_RRC_CONFIG(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_PHS_2_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1804,0x1804);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_PHS_2_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define PHS_LOG_SET_RRC_CONFIG(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define PHS_LOG_SET_AFC_CTRL_IND(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_PHS_2_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1904,0x1904);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_PHS_2_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define PHS_LOG_SET_AFC_CTRL_IND(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define PHS_LOG_UPDATE_LAST_RLQ_SF(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_PHS_2_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1A04,0x1A04);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_PHS_2_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define PHS_LOG_UPDATE_LAST_RLQ_SF(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define PHS_LOG_SET_DCI_PREDICT_RLT(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_PHS_2_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1B04,0x1B04);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_PHS_2_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define PHS_LOG_SET_DCI_PREDICT_RLT(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define PHS_LOG_GEAR_UP_AFTER_WAKEUP(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_PHS_2_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1C04,0x1C04);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_PHS_2_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define PHS_LOG_GEAR_UP_AFTER_WAKEUP(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define PHS_LOG_MBSFN_CONFIG_SET(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_PHS_2_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1D04,0x1D04);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_PHS_2_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define PHS_LOG_MBSFN_CONFIG_SET(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define PHS_LOG_CRNTI_EVT_ENABLE_SET(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_PHS_2_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1E04,0x1E04);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_PHS_2_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define PHS_LOG_CRNTI_EVT_ENABLE_SET(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define PHS_LOG_TX_SUSP_CHK_ENABLE_SET(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_PHS_2_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1F04,0x1F04);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_PHS_2_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define PHS_LOG_TX_SUSP_CHK_ENABLE_SET(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define PHS_LOG_L2_PWR_CTRL(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_PHS_2_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x2004,0x2004);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_PHS_2_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define PHS_LOG_L2_PWR_CTRL(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define PHS_LOG_HRT_TIME_CHECK(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_PHS_2_Trace_Filter, 1, 0x01);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x2104,0x2104);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_PHS_2_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define PHS_LOG_HRT_TIME_CHECK(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER)
	#define PHS_LOG_I_INTER_WRR_EVENT_CHK(v1, v2, v3, v4, v5, v6) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_PHS_2_Trace_Filter, 1, 0x01);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x2204,0x2204);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_PHS_2_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define PHS_LOG_I_INTER_WRR_EVENT_CHK(v1, v2, v3, v4, v5, v6)
#endif

#if defined(L1_CATCHER)
	#define PHS_LOG_I_INTER_SIM_EVT_CONFLICT(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_PHS_2_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x2304,0x2304);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_PHS_2_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define PHS_LOG_I_INTER_SIM_EVT_CONFLICT(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define PHS_LOG_I_INTER_SIM_PROC_ALLOW_TIME(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_PHS_2_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x2404,0x2404);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_PHS_2_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define PHS_LOG_I_INTER_SIM_PROC_ALLOW_TIME(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define PHS_LOG_T_PEER_SIM_SUSPEND(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_PHS_2_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x2504,0x2504);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_PHS_2_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define PHS_LOG_T_PEER_SIM_SUSPEND(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define PHS_LOG_I_SSIM_CELL_TIME(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_PHS_2_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x2604,0x2604);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_PHS_2_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define PHS_LOG_I_SSIM_CELL_TIME(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define PHS_LOG_T_CH_CHNG_LOCK_CHK(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_PHS_2_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x2704,0x2704);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_PHS_2_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define PHS_LOG_T_CH_CHNG_LOCK_CHK(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define PHS_LOG_I_TX_SUSP_EXE_EVT_TIME(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_PHS_2_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x2804,0x2804);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_PHS_2_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define PHS_LOG_I_TX_SUSP_EXE_EVT_TIME(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define PHS_LOG_I_TX_SUSP_TIME(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_PHS_2_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x2904,0x2904);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_PHS_2_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define PHS_LOG_I_TX_SUSP_TIME(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define PHS_LOG_I_CALC_MCH_TIME(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_PHS_2_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x2A04,0x2A04);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_PHS_2_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define PHS_LOG_I_CALC_MCH_TIME(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define PHS_LOG_I_CTRL_PARAM_2(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_PHS_2_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x2B04,0x2B04);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_PHS_2_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define PHS_LOG_I_CTRL_PARAM_2(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define PHS_LOG_T_SET_PSIM_TIME_CHANGE(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_PHS_2_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x2C04,0x2C04);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_PHS_2_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define PHS_LOG_T_SET_PSIM_TIME_CHANGE(v1)
#endif



/*******************************/
/* declaration of filter array */
/*******************************/
EXTERN_TMD_FILTER(unsigned char, EL1_PHS_2_Trace_Filter, 5);
/*************************/
/* Function declarations */
/*************************/
#ifdef L1_CATCHER

void Set_EL1_PHS_2_Filter(unsigned char *setting);

#endif

/************************************/
/* Filter checking API declarations */
/************************************/

#define ChkL1ModFltr_EL1_PHS_2()	(FILTER_CHECK(EL1_PHS_2_Trace_Filter, 0, 1))
#define ChkL1ClsFltr_EL1_PHS_2_el1_trace_1_H()	(ChkL1ModFltr_EL1_PHS_2()&&(FILTER_CHECK(EL1_PHS_2_Trace_Filter, 1, 0x01)))
#define ChkL1ClsFltr_EL1_PHS_2_el1_trace_2_H()	(ChkL1ModFltr_EL1_PHS_2()&&(FILTER_CHECK(EL1_PHS_2_Trace_Filter, 1, 0x02)))
#define ChkL1ClsFltr_EL1_PHS_2_el1_trace_3_M()	(ChkL1ModFltr_EL1_PHS_2()&&(FILTER_CHECK(EL1_PHS_2_Trace_Filter, 1, 0x04)))
#define ChkL1ClsFltr_EL1_PHS_2_el1_trace_4_L()	(ChkL1ModFltr_EL1_PHS_2()&&(FILTER_CHECK(EL1_PHS_2_Trace_Filter, 1, 0x08)))
#define ChkL1MsgFltr_PHS_LOG_T_SCELL_ADRL_2()	ChkL1ClsFltr_EL1_PHS_2_el1_trace_1_H()
#define ChkL1MsgFltr_PHS_LOG_T_SCC_ACTV_CB_ST_UPT()	ChkL1ClsFltr_EL1_PHS_2_el1_trace_1_H()
#define ChkL1MsgFltr_PHS_LOG_T_SCC_ACTV_ACTION()	ChkL1ClsFltr_EL1_PHS_2_el1_trace_1_H()
#define ChkL1MsgFltr_PHS_LOG_T_SCC_ACTV_CNFBMP_CHK()	ChkL1ClsFltr_EL1_PHS_2_el1_trace_1_H()
#define ChkL1MsgFltr_PHS_LOG_I_PHS_SCELL_ACT_STATE()	ChkL1ClsFltr_EL1_PHS_2_el1_trace_1_H()
#define ChkL1MsgFltr_PHS_LOG_I_PHS_LRX_STATE()	ChkL1ClsFltr_EL1_PHS_2_el1_trace_1_H()
#define ChkL1MsgFltr_PHS_LOG_T_PHS_RCV_ILM_MSG()	ChkL1ClsFltr_EL1_PHS_2_el1_trace_1_H()
#define ChkL1MsgFltr_PHS_LOG_I_TX_ISR_MSG()	ChkL1ClsFltr_EL1_PHS_2_el1_trace_1_H()
#define ChkL1MsgFltr_PHS_LOG_T_L1D_RPT()	ChkL1ClsFltr_EL1_PHS_2_el1_trace_1_H()
#define ChkL1MsgFltr_PHS_LOG_T_NXT_CH_CHNG_PROC()	ChkL1ClsFltr_EL1_PHS_2_el1_trace_1_H()
#define ChkL1MsgFltr_PHS_LOG_SCELL_STATUS_CHNG()	ChkL1ClsFltr_EL1_PHS_2_el1_trace_1_H()
#define ChkL1MsgFltr_PHS_LOG_SCELL_PSEUDO_ACT_SET()	ChkL1ClsFltr_EL1_PHS_2_el1_trace_1_H()
#define ChkL1MsgFltr_PHS_LOG_I_SCELL_PSEUDO_ACT()	ChkL1ClsFltr_EL1_PHS_2_el1_trace_1_H()
#define ChkL1MsgFltr_PHS_LOG_T_SCELL_MSG_SEND()	ChkL1ClsFltr_EL1_PHS_2_el1_trace_1_H()
#define ChkL1MsgFltr_PHS_LOG_I_L1D_CMD_SET()	ChkL1ClsFltr_EL1_PHS_2_el1_trace_1_H()
#define ChkL1MsgFltr_PHS_LOG_I_AMIF_INFO()	ChkL1ClsFltr_EL1_PHS_2_el1_trace_1_H()
#define ChkL1MsgFltr_PHS_LOG_I_TAS_STATUS_SET()	ChkL1ClsFltr_EL1_PHS_2_el1_trace_1_H()
#define ChkL1MsgFltr_PHS_LOG_I_TAS_CMD_SET()	ChkL1ClsFltr_EL1_PHS_2_el1_trace_1_H()
#define ChkL1MsgFltr_PHS_LOG_I_TAS_INACTIVE_FLOW()	ChkL1ClsFltr_EL1_PHS_2_el1_trace_1_H()
#define ChkL1MsgFltr_PHS_LOG_I_TAS_IDLE_DRX_FLOW()	ChkL1ClsFltr_EL1_PHS_2_el1_trace_1_H()
#define ChkL1MsgFltr_PHS_LOG_SLEEP_DURATION()	ChkL1ClsFltr_EL1_PHS_2_el1_trace_1_H()
#define ChkL1MsgFltr_PHS_LOG_MODEM_SLEEP_IND()	ChkL1ClsFltr_EL1_PHS_2_el1_trace_1_H()
#define ChkL1MsgFltr_PHS_LOG_DISABLE_SLEEP()	ChkL1ClsFltr_EL1_PHS_2_el1_trace_1_H()
#define ChkL1MsgFltr_PHS_LOG_ENABLE_SLEEP()	ChkL1ClsFltr_EL1_PHS_2_el1_trace_1_H()
#define ChkL1MsgFltr_PHS_LOG_SET_RRC_CONFIG()	ChkL1ClsFltr_EL1_PHS_2_el1_trace_1_H()
#define ChkL1MsgFltr_PHS_LOG_SET_AFC_CTRL_IND()	ChkL1ClsFltr_EL1_PHS_2_el1_trace_1_H()
#define ChkL1MsgFltr_PHS_LOG_UPDATE_LAST_RLQ_SF()	ChkL1ClsFltr_EL1_PHS_2_el1_trace_1_H()
#define ChkL1MsgFltr_PHS_LOG_SET_DCI_PREDICT_RLT()	ChkL1ClsFltr_EL1_PHS_2_el1_trace_1_H()
#define ChkL1MsgFltr_PHS_LOG_GEAR_UP_AFTER_WAKEUP()	ChkL1ClsFltr_EL1_PHS_2_el1_trace_1_H()
#define ChkL1MsgFltr_PHS_LOG_MBSFN_CONFIG_SET()	ChkL1ClsFltr_EL1_PHS_2_el1_trace_1_H()
#define ChkL1MsgFltr_PHS_LOG_CRNTI_EVT_ENABLE_SET()	ChkL1ClsFltr_EL1_PHS_2_el1_trace_1_H()
#define ChkL1MsgFltr_PHS_LOG_TX_SUSP_CHK_ENABLE_SET()	ChkL1ClsFltr_EL1_PHS_2_el1_trace_1_H()
#define ChkL1MsgFltr_PHS_LOG_L2_PWR_CTRL()	ChkL1ClsFltr_EL1_PHS_2_el1_trace_1_H()
#define ChkL1MsgFltr_PHS_LOG_HRT_TIME_CHECK()	ChkL1ClsFltr_EL1_PHS_2_el1_trace_1_H()
#define ChkL1MsgFltr_PHS_LOG_I_INTER_WRR_EVENT_CHK()	ChkL1ClsFltr_EL1_PHS_2_el1_trace_1_H()
#define ChkL1MsgFltr_PHS_LOG_I_INTER_SIM_EVT_CONFLICT()	ChkL1ClsFltr_EL1_PHS_2_el1_trace_1_H()
#define ChkL1MsgFltr_PHS_LOG_I_INTER_SIM_PROC_ALLOW_TIME()	ChkL1ClsFltr_EL1_PHS_2_el1_trace_1_H()
#define ChkL1MsgFltr_PHS_LOG_T_PEER_SIM_SUSPEND()	ChkL1ClsFltr_EL1_PHS_2_el1_trace_1_H()
#define ChkL1MsgFltr_PHS_LOG_I_SSIM_CELL_TIME()	ChkL1ClsFltr_EL1_PHS_2_el1_trace_1_H()
#define ChkL1MsgFltr_PHS_LOG_T_CH_CHNG_LOCK_CHK()	ChkL1ClsFltr_EL1_PHS_2_el1_trace_1_H()
#define ChkL1MsgFltr_PHS_LOG_I_TX_SUSP_EXE_EVT_TIME()	ChkL1ClsFltr_EL1_PHS_2_el1_trace_1_H()
#define ChkL1MsgFltr_PHS_LOG_I_TX_SUSP_TIME()	ChkL1ClsFltr_EL1_PHS_2_el1_trace_1_H()
#define ChkL1MsgFltr_PHS_LOG_I_CALC_MCH_TIME()	ChkL1ClsFltr_EL1_PHS_2_el1_trace_1_H()
#define ChkL1MsgFltr_PHS_LOG_I_CTRL_PARAM_2()	ChkL1ClsFltr_EL1_PHS_2_el1_trace_1_H()
#define ChkL1MsgFltr_PHS_LOG_T_SET_PSIM_TIME_CHANGE()	ChkL1ClsFltr_EL1_PHS_2_el1_trace_1_H()


#endif
