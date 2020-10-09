#ifndef L1TRC_EL1_TX_PUBLIC_DEF_H
#define L1TRC_EL1_TX_PUBLIC_DEF_H

/******************************/
/* String category definition */
/******************************/
#define Tx_Grant_Type_Str_Pub(v1)  (unsigned char)(v1+0)
#define Rx_Assgn_Type_Str(v1)  (unsigned char)(v1+20)
#define Tx_Pucch_Fmt_Str(v1)  (unsigned char)(v1+30)
#define Tx_ACK_Mode_Pub(v1)  (unsigned char)(v1+38)
#define Tx_TA_Type(v1)  (unsigned char)(v1+43)
#define Tx_TPC_Mode(v1)  (unsigned char)(v1+45)
#define Tx_PL_Alpha_Str(v1)  (unsigned char)(v1+47)
#define Tx_ACK_Str(v1)  (unsigned char)(v1+55)
#define Tx_PH_Str(v1)  (unsigned char)(v1+59)
#define Tx_PCQI_Mode(v1)  (unsigned char)(v1+62)
#define Tx_ACQI_Mode(v1)  (unsigned char)(v1+68)
#define Tx_String_Pub(v1)  (unsigned char)(v1+74)
#define Tx_CH_Str(v1)  (unsigned char)(v1+77)
#define Tx_CSI_Str(v1)  (unsigned char)(v1+87)
#define Tx_ACQI2_Hi_Str(v1)  (unsigned char)(v1+99)
#define Rx_DCI_Str(v1)  (unsigned char)(v1+104)
#define Tx_Pwr2_Str(v1)  (unsigned char)(v1+120)


/****************************/
/* Message macro definition */
/****************************/
#include "L1Trc.h"
#if defined(L1_CATCHER)
	#define EL1TX_LOG_RRC_SYS0(v1, v2, v3, v4, v5, v6, v7) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TX_PUBLIC_Trace_Filter, 1, 0x01);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x000B,0x000B);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v7,v7);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TX_PUBLIC_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1TX_LOG_RRC_SYS0(v1, v2, v3, v4, v5, v6, v7)
#endif

#if defined(L1_CATCHER)
	#define EL1TX_LOG_RRC_SYS1(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TX_PUBLIC_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x010B,0x010B);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TX_PUBLIC_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1TX_LOG_RRC_SYS1(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define EL1TX_LOG_RRC_SYS2(v1, v2, v3, v4, v5, v6) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TX_PUBLIC_Trace_Filter, 1, 0x01);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x020B,0x020B);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TX_PUBLIC_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1TX_LOG_RRC_SYS2(v1, v2, v3, v4, v5, v6)
#endif

#if defined(L1_CATCHER)
	#define EL1TX_LOG_RRC_PCMAX(v1, v2, v3, v4, v5, v6) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TX_PUBLIC_Trace_Filter, 1, 0x01);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x030B,0x030B);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TX_PUBLIC_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1TX_LOG_RRC_PCMAX(v1, v2, v3, v4, v5, v6)
#endif

#if defined(L1_CATCHER)
	#define EL1TX_LOG_RRC_deltaTc(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TX_PUBLIC_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x040B,0x040B);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TX_PUBLIC_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1TX_LOG_RRC_deltaTc(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define EL1TX_LOG_RRC_PRACH0(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TX_PUBLIC_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x050B,0x050B);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TX_PUBLIC_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1TX_LOG_RRC_PRACH0(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define EL1TX_LOG_RRC_PRACH(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TX_PUBLIC_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x060B,0x060B);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TX_PUBLIC_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1TX_LOG_RRC_PRACH(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define EL1TX_LOG_RRC_PUCCH(v1, v2, v3, v4, v5, v6, v7, v8) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TX_PUBLIC_Trace_Filter, 1, 0x01);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x070B,0x070B);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v7,v7);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v8,v8);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TX_PUBLIC_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1TX_LOG_RRC_PUCCH(v1, v2, v3, v4, v5, v6, v7, v8)
#endif

#if defined(L1_CATCHER)
	#define EL1TX_LOG_RRC_PUSCH(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TX_PUBLIC_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x080B,0x080B);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TX_PUBLIC_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1TX_LOG_RRC_PUSCH(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define EL1TX_LOG_RRC_SPS_UL(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TX_PUBLIC_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x090B,0x090B);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TX_PUBLIC_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1TX_LOG_RRC_SPS_UL(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define EL1TX_LOG_RRC_SPS_DL(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TX_PUBLIC_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0A0B,0x0A0B);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TX_PUBLIC_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1TX_LOG_RRC_SPS_DL(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define EL1TX_LOG_RRC_CQI(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TX_PUBLIC_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0B0B,0x0B0B);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TX_PUBLIC_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1TX_LOG_RRC_CQI(v1)
#endif

#if defined(L1_CATCHER)
	#define EL1TX_LOG_RRC_CQI0(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TX_PUBLIC_Trace_Filter, 1, 0x01);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0C0B,0x0C0B);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TX_PUBLIC_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1TX_LOG_RRC_CQI0(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER)
	#define EL1TX_LOG_RRC_CQI1(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TX_PUBLIC_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0D0B,0x0D0B);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TX_PUBLIC_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1TX_LOG_RRC_CQI1(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define EL1TX_LOG_RRC_CQI2(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TX_PUBLIC_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0E0B,0x0E0B);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TX_PUBLIC_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1TX_LOG_RRC_CQI2(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define EL1TX_LOG_RRC_CQI3(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TX_PUBLIC_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0F0B,0x0F0B);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TX_PUBLIC_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1TX_LOG_RRC_CQI3(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define EL1TX_LOG_RRC_SRS0(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TX_PUBLIC_Trace_Filter, 1, 0x01);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x100B,0x100B);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TX_PUBLIC_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1TX_LOG_RRC_SRS0(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER)
	#define EL1TX_LOG_RRC_SRS1(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TX_PUBLIC_Trace_Filter, 1, 0x01);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x110B,0x110B);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TX_PUBLIC_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1TX_LOG_RRC_SRS1(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER)
	#define EL1TX_LOG_RRC_SRS2(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TX_PUBLIC_Trace_Filter, 1, 0x01);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x120B,0x120B);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TX_PUBLIC_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1TX_LOG_RRC_SRS2(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER)
	#define EL1TX_LOG_RRC_SRS3(v1, v2, v3, v4, v5, v6, v7, v8) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TX_PUBLIC_Trace_Filter, 1, 0x01);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x130B,0x130B);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v7,v7);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v8,v8);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TX_PUBLIC_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1TX_LOG_RRC_SRS3(v1, v2, v3, v4, v5, v6, v7, v8)
#endif

#if defined(L1_CATCHER)
	#define EL1TX_LOG_RRC_POWER0(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TX_PUBLIC_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x140B,0x140B);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TX_PUBLIC_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1TX_LOG_RRC_POWER0(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define EL1TX_LOG_RRC_POWER1(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TX_PUBLIC_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x150B,0x150B);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TX_PUBLIC_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1TX_LOG_RRC_POWER1(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define EL1TX_LOG_RAR_GRANT(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1_NON_SMP(EL1_TX_PUBLIC_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_START_FILL_L1_NON_SMP();\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1_NON_SMP(0x160B,0x160B);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_END_FILL_L1_NON_SMP();\
			TRC_END_FILTER_CHECK_L1_NON_SMP(EL1_TX_PUBLIC_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1TX_LOG_RAR_GRANT(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define EL1TX_LOG_RAR_MATCH(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1_NON_SMP(EL1_TX_PUBLIC_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_START_FILL_L1_NON_SMP();\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1_NON_SMP(0x170B,0x170B);\
			TRC_OUTPUT_16_MID_WRAPPER_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_END_FILL_L1_NON_SMP();\
			TRC_END_FILTER_CHECK_L1_NON_SMP(EL1_TX_PUBLIC_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1TX_LOG_RAR_MATCH(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define EL1TX_LOG_RAR_FALSE_ALARM(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1_NON_SMP(EL1_TX_PUBLIC_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_START_FILL_L1_NON_SMP();\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1_NON_SMP(0x180B,0x180B);\
			TRC_OUTPUT_16_MID_WRAPPER_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_END_FILL_L1_NON_SMP();\
			TRC_END_FILTER_CHECK_L1_NON_SMP(EL1_TX_PUBLIC_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1TX_LOG_RAR_FALSE_ALARM(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define EL1TX_LOG_PRACH_INFO(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L1_NON_SMP(EL1_TX_PUBLIC_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v5,v5);\
			TRC_START_FILL_L1_NON_SMP();\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v5,v5);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1_NON_SMP(0x190B,0x190B);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1_NON_SMP(cgen_local_v5,v5);\
			TRC_END_FILL_L1_NON_SMP();\
			TRC_END_FILTER_CHECK_L1_NON_SMP(EL1_TX_PUBLIC_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1TX_LOG_PRACH_INFO(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER)
	#define EL1TX_LOG_COMBINED_PRACH_INFO(v1, v2, v3, v4, v5, v6, v7) do {\
		{\
			TRC_START_FILTER_CHECK_L1_NON_SMP(EL1_TX_PUBLIC_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v5,v5);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v6,v6);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v7,v7);\
			TRC_START_FILL_L1_NON_SMP();\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v5,v5);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v6,v6);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v7,v7);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1_NON_SMP(0x1A0B,0x1A0B);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v5,v5);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v6,v6);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1_NON_SMP(cgen_local_v7,v7);\
			TRC_END_FILL_L1_NON_SMP();\
			TRC_END_FILTER_CHECK_L1_NON_SMP(EL1_TX_PUBLIC_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1TX_LOG_COMBINED_PRACH_INFO(v1, v2, v3, v4, v5, v6, v7)
#endif

#if defined(L1_CATCHER)
	#define EL1TX_LOG_UL_PARAM_INFO(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1_NON_SMP(EL1_TX_PUBLIC_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_START_FILL_L1_NON_SMP();\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1_NON_SMP(0x1B0B,0x1B0B);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_END_FILL_L1_NON_SMP();\
			TRC_END_FILTER_CHECK_L1_NON_SMP(EL1_TX_PUBLIC_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1TX_LOG_UL_PARAM_INFO(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define EL1TX_LOG_TA_INFO(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L1_NON_SMP(EL1_TX_PUBLIC_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v5,v5);\
			TRC_START_FILL_L1_NON_SMP();\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v5,v5);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1_NON_SMP(0x1C0B,0x1C0B);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1_NON_SMP(cgen_local_v5,v5);\
			TRC_END_FILL_L1_NON_SMP();\
			TRC_END_FILTER_CHECK_L1_NON_SMP(EL1_TX_PUBLIC_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1TX_LOG_TA_INFO(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER)
	#define EL1TX_LOG_TA_COMBINED_INFO(v1, v2, v3, v4, v5, v6, v7, v8) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TX_PUBLIC_Trace_Filter, 1, 0x01);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1D0B,0x1D0B);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v7,v7);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v8,v8);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TX_PUBLIC_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1TX_LOG_TA_COMBINED_INFO(v1, v2, v3, v4, v5, v6, v7, v8)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EL1TX_LOG_UL_GRANT_PROC(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14) do {\
		{\
			TRC_START_FILTER_CHECK_L1_NON_SMP(EL1_TX_PUBLIC_Trace_Filter, 1, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v5,v5);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v6,v6);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v7,v7);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v8,v8);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v9,v9);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v10,v10);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v11,v11);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v12,v12);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v13,v13);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v14,v14);\
			TRC_START_FILL_L1_NON_SMP();\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v5,v5);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v6,v6);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v7,v7);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v8,v8);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v9,v9);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v10,v10);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v11,v11);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v12,v12);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v13,v13);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v14,v14);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1_NON_SMP(0x1E0B,0x1E0B);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v5,v5);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v6,v6);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v7,v7);\
			TRC_OUTPUT_16_MID_WRAPPER_L1_NON_SMP(cgen_local_v8,v8);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v9,v9);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v10,v10);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v11,v11);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v12,v12);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v13,v13);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1_NON_SMP(cgen_local_v14,v14);\
			TRC_END_FILL_L1_NON_SMP();\
			TRC_END_FILTER_CHECK_L1_NON_SMP(EL1_TX_PUBLIC_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define EL1TX_LOG_UL_GRANT_PROC(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14)
#endif

#if defined(L1_CATCHER)
	#define EL1TX_LOG_UL_GRANT_PROC2(v1, v2, v4, v7, v8, v10, v13) do {\
		{\
			TRC_START_FILTER_CHECK_L1_NON_SMP(EL1_TX_PUBLIC_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v7,v7);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v8,v8);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v10,v10);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v13,v13);\
			TRC_START_FILL_L1_NON_SMP();\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v7,v7);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v8,v8);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v10,v10);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v13,v13);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1_NON_SMP(0x1F0B,0x1F0B);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v7,v7);\
			TRC_OUTPUT_16_MID_WRAPPER_L1_NON_SMP(cgen_local_v8,v8);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v10,v10);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1_NON_SMP(cgen_local_v13,v13);\
			TRC_END_FILL_L1_NON_SMP();\
			TRC_END_FILTER_CHECK_L1_NON_SMP(EL1_TX_PUBLIC_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1TX_LOG_UL_GRANT_PROC2(v1, v2, v4, v7, v8, v10, v13)
#endif

#if defined(L1_CATCHER)
	#define EL1TX_LOG_UL_GRANT_PROC2_nodai(v1, v2, v4, v7, v9, v12) do {\
		{\
			TRC_START_FILTER_CHECK_L1_NON_SMP(EL1_TX_PUBLIC_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v7,v7);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v9,v9);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v12,v12);\
			TRC_START_FILL_L1_NON_SMP();\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v7,v7);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v9,v9);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v12,v12);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1_NON_SMP(0x200B,0x200B);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_OUTPUT_16_MID_WRAPPER_L1_NON_SMP(cgen_local_v7,v7);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v9,v9);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1_NON_SMP(cgen_local_v12,v12);\
			TRC_END_FILL_L1_NON_SMP();\
			TRC_END_FILTER_CHECK_L1_NON_SMP(EL1_TX_PUBLIC_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1TX_LOG_UL_GRANT_PROC2_nodai(v1, v2, v4, v7, v9, v12)
#endif

#if defined(L1_CATCHER)
	#define EL1TX_LOG_DL_ASSIGN_PROC0(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L1_NON_SMP(EL1_TX_PUBLIC_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v5,v5);\
			TRC_START_FILL_L1_NON_SMP();\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v5,v5);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1_NON_SMP(0x210B,0x210B);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1_NON_SMP(cgen_local_v5,v5);\
			TRC_END_FILL_L1_NON_SMP();\
			TRC_END_FILTER_CHECK_L1_NON_SMP(EL1_TX_PUBLIC_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1TX_LOG_DL_ASSIGN_PROC0(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER)
	#define EL1TX_LOG_DL_ASSIGN_PROC0_SET2(v1, v2, v3, v4, v5, v6, v7, v8) do {\
		{\
			TRC_START_FILTER_CHECK_L1_NON_SMP(EL1_TX_PUBLIC_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v5,v5);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v6,v6);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v7,v7);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v8,v8);\
			TRC_START_FILL_L1_NON_SMP();\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v5,v5);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v6,v6);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v7,v7);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v8,v8);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1_NON_SMP(0x220B,0x220B);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v5,v5);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v6,v6);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v7,v7);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1_NON_SMP(cgen_local_v8,v8);\
			TRC_END_FILL_L1_NON_SMP();\
			TRC_END_FILTER_CHECK_L1_NON_SMP(EL1_TX_PUBLIC_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1TX_LOG_DL_ASSIGN_PROC0_SET2(v1, v2, v3, v4, v5, v6, v7, v8)
#endif

#if defined(L1_CATCHER)
	#define EL1TX_LOG_DL_ASSIGN_PROC1(v1, v3, v7, v10, v13, v14, v16) do {\
		{\
			TRC_START_FILTER_CHECK_L1_NON_SMP(EL1_TX_PUBLIC_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v7,v7);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v10,v10);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v13,v13);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v14,v14);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v16,v16);\
			TRC_START_FILL_L1_NON_SMP();\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v7,v7);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v10,v10);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v13,v13);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v14,v14);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v16,v16);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1_NON_SMP(0x230B,0x230B);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v7,v7);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v10,v10);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v13,v13);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v14,v14);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1_NON_SMP(cgen_local_v16,v16);\
			TRC_END_FILL_L1_NON_SMP();\
			TRC_END_FILTER_CHECK_L1_NON_SMP(EL1_TX_PUBLIC_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1TX_LOG_DL_ASSIGN_PROC1(v1, v3, v7, v10, v13, v14, v16)
#endif

#if defined(L1_CATCHER)
	#define EL1TX_LOG_DL_ASSIGN_PROC1_nodai(v1, v3, v7, v10, v13, v15) do {\
		{\
			TRC_START_FILTER_CHECK_L1_NON_SMP(EL1_TX_PUBLIC_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v7,v7);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v10,v10);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v13,v13);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v15,v15);\
			TRC_START_FILL_L1_NON_SMP();\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v7,v7);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v10,v10);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v13,v13);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v15,v15);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1_NON_SMP(0x240B,0x240B);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v7,v7);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v10,v10);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v13,v13);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1_NON_SMP(cgen_local_v15,v15);\
			TRC_END_FILL_L1_NON_SMP();\
			TRC_END_FILTER_CHECK_L1_NON_SMP(EL1_TX_PUBLIC_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1TX_LOG_DL_ASSIGN_PROC1_nodai(v1, v3, v7, v10, v13, v15)
#endif

#if defined(L1_CATCHER)
	#define EL1TX_LOG_UL_HARQ(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TX_PUBLIC_Trace_Filter, 1, 0x01);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x250B,0x250B);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v7,v7);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v8,v8);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v9,v9);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v10,v10);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TX_PUBLIC_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1TX_LOG_UL_HARQ(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10)
#endif

#if defined(L1_CATCHER)
	#define EL1TX_LOG_DL_PDSCH_CRC(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L1_NON_SMP(EL1_TX_PUBLIC_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v5,v5);\
			TRC_START_FILL_L1_NON_SMP();\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v5,v5);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1_NON_SMP(0x260B,0x260B);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1_NON_SMP(cgen_local_v5,v5);\
			TRC_END_FILL_L1_NON_SMP();\
			TRC_END_FILTER_CHECK_L1_NON_SMP(EL1_TX_PUBLIC_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1TX_LOG_DL_PDSCH_CRC(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER)
	#define EL1TX_LOG_DL_PDSCH_TBS(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TX_PUBLIC_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x270B,0x270B);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TX_PUBLIC_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1TX_LOG_DL_PDSCH_TBS(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define EL1TX_LOG_DL_PDSCH_COMBINED(v1, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1_NON_SMP(EL1_TX_PUBLIC_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_START_FILL_L1_NON_SMP();\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1_NON_SMP(0x280B,0x280B);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_END_FILL_L1_NON_SMP();\
			TRC_END_FILTER_CHECK_L1_NON_SMP(EL1_TX_PUBLIC_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1TX_LOG_DL_PDSCH_COMBINED(v1, v4)
#endif

#if defined(L1_CATCHER)
	#define EL1TX_LOG_PHICH(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1_NON_SMP(EL1_TX_PUBLIC_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_START_FILL_L1_NON_SMP();\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1_NON_SMP(0x290B,0x290B);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_END_FILL_L1_NON_SMP();\
			TRC_END_FILTER_CHECK_L1_NON_SMP(EL1_TX_PUBLIC_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1TX_LOG_PHICH(v1)
#endif

#if defined(L1_CATCHER)
	#define EL1TX_LOG_PHICH_COMBINED(v1, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1_NON_SMP(EL1_TX_PUBLIC_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_START_FILL_L1_NON_SMP();\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1_NON_SMP(0x2A0B,0x2A0B);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_END_FILL_L1_NON_SMP();\
			TRC_END_FILTER_CHECK_L1_NON_SMP(EL1_TX_PUBLIC_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1TX_LOG_PHICH_COMBINED(v1, v4)
#endif

#if defined(L1_CATCHER)
	#define EL1TX_LOG_PDCCH_ORDER(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1_NON_SMP(EL1_TX_PUBLIC_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_START_FILL_L1_NON_SMP();\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1_NON_SMP(0x2B0B,0x2B0B);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_END_FILL_L1_NON_SMP();\
			TRC_END_FILTER_CHECK_L1_NON_SMP(EL1_TX_PUBLIC_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1TX_LOG_PDCCH_ORDER(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define EL1TX_LOG_CR_INFO(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TX_PUBLIC_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x2C0B,0x2C0B);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TX_PUBLIC_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1TX_LOG_CR_INFO(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define EL1TX_LOG_CR_RCV_TIME(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TX_PUBLIC_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x2D0B,0x2D0B);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TX_PUBLIC_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1TX_LOG_CR_RCV_TIME(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define EL1TX_LOG_CR_ACK_TIME(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TX_PUBLIC_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x2E0B,0x2E0B);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TX_PUBLIC_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1TX_LOG_CR_ACK_TIME(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define EL1TX_LOG_ACK_REP_CNT(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1_NON_SMP(EL1_TX_PUBLIC_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_START_FILL_L1_NON_SMP();\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1_NON_SMP(0x2F0B,0x2F0B);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_END_FILL_L1_NON_SMP();\
			TRC_END_FILTER_CHECK_L1_NON_SMP(EL1_TX_PUBLIC_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1TX_LOG_ACK_REP_CNT(v1)
#endif

#if defined(L1_CATCHER)
	#define EL1TX_LOG_DCI0_FALSE_ALARM(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TX_PUBLIC_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x300B,0x300B);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TX_PUBLIC_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1TX_LOG_DCI0_FALSE_ALARM(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define EL1TX_LOG_DCI_WARNING(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TX_PUBLIC_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x310B,0x310B);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TX_PUBLIC_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1TX_LOG_DCI_WARNING(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EL1TX_LOG_RT_CMD_Tx_Enbl(v1, v2, v3, v4, v5, v6, v7) do {\
		{\
			TRC_START_FILTER_CHECK_L1_NON_SMP(EL1_TX_PUBLIC_Trace_Filter, 1, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v5,v5);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v6,v6);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v7,v7);\
			TRC_START_FILL_L1_NON_SMP();\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v5,v5);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v6,v6);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v7,v7);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1_NON_SMP(0x320B,0x320B);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v5,v5);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v6,v6);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1_NON_SMP(cgen_local_v7,v7);\
			TRC_END_FILL_L1_NON_SMP();\
			TRC_END_FILTER_CHECK_L1_NON_SMP(EL1_TX_PUBLIC_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define EL1TX_LOG_RT_CMD_Tx_Enbl(v1, v2, v3, v4, v5, v6, v7)
#endif

#if defined(L1_CATCHER)
	#define EL1TX_LOG_RT_CMD_Tx_Enbl2(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1_NON_SMP(EL1_TX_PUBLIC_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_START_FILL_L1_NON_SMP();\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1_NON_SMP(0x330B,0x330B);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_END_FILL_L1_NON_SMP();\
			TRC_END_FILTER_CHECK_L1_NON_SMP(EL1_TX_PUBLIC_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1TX_LOG_RT_CMD_Tx_Enbl2(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define EL1TX_LOG_RT_CMD_Tx_Enbl3(v1, v8, v9, v10, v11) do {\
		{\
			TRC_START_FILTER_CHECK_L1_NON_SMP(EL1_TX_PUBLIC_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v8,v8);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v9,v9);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v10,v10);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v11,v11);\
			TRC_START_FILL_L1_NON_SMP();\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v8,v8);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v9,v9);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v10,v10);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v11,v11);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1_NON_SMP(0x340B,0x340B);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v8,v8);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v9,v9);\
			TRC_OUTPUT_16_MID_WRAPPER_L1_NON_SMP(cgen_local_v10,v10);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1_NON_SMP(cgen_local_v11,v11);\
			TRC_END_FILL_L1_NON_SMP();\
			TRC_END_FILTER_CHECK_L1_NON_SMP(EL1_TX_PUBLIC_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1TX_LOG_RT_CMD_Tx_Enbl3(v1, v8, v9, v10, v11)
#endif

#if defined(L1_CATCHER)
	#define EL1TX_LOG_RT_CMD_Tx_Enbl3_noinj(v1, v8, v9, v10) do {\
		{\
			TRC_START_FILTER_CHECK_L1_NON_SMP(EL1_TX_PUBLIC_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v8,v8);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v9,v9);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v10,v10);\
			TRC_START_FILL_L1_NON_SMP();\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v8,v8);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v9,v9);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v10,v10);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1_NON_SMP(0x350B,0x350B);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v8,v8);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v9,v9);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1_NON_SMP(cgen_local_v10,v10);\
			TRC_END_FILL_L1_NON_SMP();\
			TRC_END_FILTER_CHECK_L1_NON_SMP(EL1_TX_PUBLIC_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1TX_LOG_RT_CMD_Tx_Enbl3_noinj(v1, v8, v9, v10)
#endif

#if defined(L1_CATCHER)
	#define El1TX_LOG_RT_CMD_Tx_time(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1_NON_SMP(EL1_TX_PUBLIC_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_START_FILL_L1_NON_SMP();\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1_NON_SMP(0x360B,0x360B);\
			TRC_OUTPUT_16_MID_WRAPPER_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_END_FILL_L1_NON_SMP();\
			TRC_END_FILTER_CHECK_L1_NON_SMP(EL1_TX_PUBLIC_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define El1TX_LOG_RT_CMD_Tx_time(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define EL1TX_LOG_RT_CMD_Rx_time(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1_NON_SMP(EL1_TX_PUBLIC_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_START_FILL_L1_NON_SMP();\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1_NON_SMP(0x370B,0x370B);\
			TRC_OUTPUT_16_MID_WRAPPER_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_END_FILL_L1_NON_SMP();\
			TRC_END_FILTER_CHECK_L1_NON_SMP(EL1_TX_PUBLIC_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1TX_LOG_RT_CMD_Rx_time(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EL1TX_LOG_RT_CMD_PUSCH0(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L1_NON_SMP(EL1_TX_PUBLIC_Trace_Filter, 1, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v5,v5);\
			TRC_START_FILL_L1_NON_SMP();\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v5,v5);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1_NON_SMP(0x380B,0x380B);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1_NON_SMP(cgen_local_v5,v5);\
			TRC_END_FILL_L1_NON_SMP();\
			TRC_END_FILTER_CHECK_L1_NON_SMP(EL1_TX_PUBLIC_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define EL1TX_LOG_RT_CMD_PUSCH0(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EL1TX_LOG_RT_CMD_PUSCH1(v1, v2, v3, v4, v5, v6, v7, v8) do {\
		{\
			TRC_START_FILTER_CHECK_L1_NON_SMP(EL1_TX_PUBLIC_Trace_Filter, 1, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v5,v5);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v6,v6);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v7,v7);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v8,v8);\
			TRC_START_FILL_L1_NON_SMP();\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v5,v5);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v6,v6);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v7,v7);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v8,v8);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1_NON_SMP(0x390B,0x390B);\
			TRC_OUTPUT_16_MID_WRAPPER_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_OUTPUT_16_MID_WRAPPER_L1_NON_SMP(cgen_local_v5,v5);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v6,v6);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v7,v7);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1_NON_SMP(cgen_local_v8,v8);\
			TRC_END_FILL_L1_NON_SMP();\
			TRC_END_FILTER_CHECK_L1_NON_SMP(EL1_TX_PUBLIC_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define EL1TX_LOG_RT_CMD_PUSCH1(v1, v2, v3, v4, v5, v6, v7, v8)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EL1TX_LOG_RT_CMD_PUSCH2(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1_NON_SMP(EL1_TX_PUBLIC_Trace_Filter, 1, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_START_FILL_L1_NON_SMP();\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1_NON_SMP(0x3A0B,0x3A0B);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_END_FILL_L1_NON_SMP();\
			TRC_END_FILTER_CHECK_L1_NON_SMP(EL1_TX_PUBLIC_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define EL1TX_LOG_RT_CMD_PUSCH2(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EL1TX_LOG_RT_CMD_PUSCH3(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1_NON_SMP(EL1_TX_PUBLIC_Trace_Filter, 1, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_START_FILL_L1_NON_SMP();\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1_NON_SMP(0x3B0B,0x3B0B);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_END_FILL_L1_NON_SMP();\
			TRC_END_FILTER_CHECK_L1_NON_SMP(EL1_TX_PUBLIC_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define EL1TX_LOG_RT_CMD_PUSCH3(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EL1TX_LOG_RT_CMD_PUSCH4(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1_NON_SMP(EL1_TX_PUBLIC_Trace_Filter, 1, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_START_FILL_L1_NON_SMP();\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1_NON_SMP(0x3C0B,0x3C0B);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_END_FILL_L1_NON_SMP();\
			TRC_END_FILTER_CHECK_L1_NON_SMP(EL1_TX_PUBLIC_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define EL1TX_LOG_RT_CMD_PUSCH4(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define EL1TX_LOG_RT_CMD_PUSCH0000(v1, v2, v4, v9, v12, v13, v14) do {\
		{\
			TRC_START_FILTER_CHECK_L1_NON_SMP(EL1_TX_PUBLIC_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v9,v9);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v12,v12);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v13,v13);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v14,v14);\
			TRC_START_FILL_L1_NON_SMP();\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v9,v9);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v12,v12);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v13,v13);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v14,v14);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1_NON_SMP(0x3D0B,0x3D0B);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_OUTPUT_16_MID_WRAPPER_L1_NON_SMP(cgen_local_v9,v9);\
			TRC_OUTPUT_16_MID_WRAPPER_L1_NON_SMP(cgen_local_v12,v12);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v13,v13);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1_NON_SMP(cgen_local_v14,v14);\
			TRC_END_FILL_L1_NON_SMP();\
			TRC_END_FILTER_CHECK_L1_NON_SMP(EL1_TX_PUBLIC_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1TX_LOG_RT_CMD_PUSCH0000(v1, v2, v4, v9, v12, v13, v14)
#endif

#if defined(L1_CATCHER)
	#define EL1TX_LOG_RT_CMD_PUSCH0001(v1, v2, v4, v9, v12, v13, v14, v15, v16) do {\
		{\
			TRC_START_FILTER_CHECK_L1_NON_SMP(EL1_TX_PUBLIC_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v9,v9);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v12,v12);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v13,v13);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v14,v14);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v15,v15);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v16,v16);\
			TRC_START_FILL_L1_NON_SMP();\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v9,v9);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v12,v12);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v13,v13);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v14,v14);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v15,v15);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v16,v16);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1_NON_SMP(0x3E0B,0x3E0B);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_OUTPUT_16_MID_WRAPPER_L1_NON_SMP(cgen_local_v9,v9);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v12,v12);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v13,v13);\
			TRC_OUTPUT_16_MID_WRAPPER_L1_NON_SMP(cgen_local_v14,v14);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v15,v15);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1_NON_SMP(cgen_local_v16,v16);\
			TRC_END_FILL_L1_NON_SMP();\
			TRC_END_FILTER_CHECK_L1_NON_SMP(EL1_TX_PUBLIC_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1TX_LOG_RT_CMD_PUSCH0001(v1, v2, v4, v9, v12, v13, v14, v15, v16)
#endif

#if defined(L1_CATCHER)
	#define EL1TX_LOG_RT_CMD_PUSCH0010(v1, v2, v4, v9, v12, v13, v14, v15, v16) do {\
		{\
			TRC_START_FILTER_CHECK_L1_NON_SMP(EL1_TX_PUBLIC_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v9,v9);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v12,v12);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v13,v13);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v14,v14);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v15,v15);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v16,v16);\
			TRC_START_FILL_L1_NON_SMP();\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v9,v9);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v12,v12);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v13,v13);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v14,v14);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v15,v15);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v16,v16);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1_NON_SMP(0x3F0B,0x3F0B);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_OUTPUT_16_MID_WRAPPER_L1_NON_SMP(cgen_local_v9,v9);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v12,v12);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v13,v13);\
			TRC_OUTPUT_16_MID_WRAPPER_L1_NON_SMP(cgen_local_v14,v14);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v15,v15);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1_NON_SMP(cgen_local_v16,v16);\
			TRC_END_FILL_L1_NON_SMP();\
			TRC_END_FILTER_CHECK_L1_NON_SMP(EL1_TX_PUBLIC_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1TX_LOG_RT_CMD_PUSCH0010(v1, v2, v4, v9, v12, v13, v14, v15, v16)
#endif

#if defined(L1_CATCHER)
	#define EL1TX_LOG_RT_CMD_PUSCH0011(v1, v2, v4, v9, v12, v13, v14, v15, v16, v17, v18) do {\
		{\
			TRC_START_FILTER_CHECK_L1_NON_SMP(EL1_TX_PUBLIC_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v9,v9);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v12,v12);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v13,v13);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v14,v14);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v15,v15);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v16,v16);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v17,v17);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v18,v18);\
			TRC_START_FILL_L1_NON_SMP();\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v9,v9);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v12,v12);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v13,v13);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v14,v14);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v15,v15);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v16,v16);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v17,v17);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v18,v18);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1_NON_SMP(0x400B,0x400B);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_OUTPUT_16_MID_WRAPPER_L1_NON_SMP(cgen_local_v9,v9);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v12,v12);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v13,v13);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v14,v14);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v15,v15);\
			TRC_OUTPUT_16_MID_WRAPPER_L1_NON_SMP(cgen_local_v16,v16);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v17,v17);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1_NON_SMP(cgen_local_v18,v18);\
			TRC_END_FILL_L1_NON_SMP();\
			TRC_END_FILTER_CHECK_L1_NON_SMP(EL1_TX_PUBLIC_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1TX_LOG_RT_CMD_PUSCH0011(v1, v2, v4, v9, v12, v13, v14, v15, v16, v17, v18)
#endif

#if defined(L1_CATCHER)
	#define EL1TX_LOG_RT_CMD_PUSCH0100(v1, v2, v4, v9, v12, v13, v14) do {\
		{\
			TRC_START_FILTER_CHECK_L1_NON_SMP(EL1_TX_PUBLIC_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v9,v9);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v12,v12);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v13,v13);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v14,v14);\
			TRC_START_FILL_L1_NON_SMP();\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v9,v9);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v12,v12);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v13,v13);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v14,v14);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1_NON_SMP(0x410B,0x410B);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_OUTPUT_16_MID_WRAPPER_L1_NON_SMP(cgen_local_v9,v9);\
			TRC_OUTPUT_16_MID_WRAPPER_L1_NON_SMP(cgen_local_v12,v12);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v13,v13);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1_NON_SMP(cgen_local_v14,v14);\
			TRC_END_FILL_L1_NON_SMP();\
			TRC_END_FILTER_CHECK_L1_NON_SMP(EL1_TX_PUBLIC_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1TX_LOG_RT_CMD_PUSCH0100(v1, v2, v4, v9, v12, v13, v14)
#endif

#if defined(L1_CATCHER)
	#define EL1TX_LOG_RT_CMD_PUSCH0101(v1, v2, v4, v9, v12, v13, v14, v15, v16) do {\
		{\
			TRC_START_FILTER_CHECK_L1_NON_SMP(EL1_TX_PUBLIC_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v9,v9);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v12,v12);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v13,v13);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v14,v14);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v15,v15);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v16,v16);\
			TRC_START_FILL_L1_NON_SMP();\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v9,v9);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v12,v12);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v13,v13);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v14,v14);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v15,v15);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v16,v16);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1_NON_SMP(0x420B,0x420B);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_OUTPUT_16_MID_WRAPPER_L1_NON_SMP(cgen_local_v9,v9);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v12,v12);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v13,v13);\
			TRC_OUTPUT_16_MID_WRAPPER_L1_NON_SMP(cgen_local_v14,v14);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v15,v15);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1_NON_SMP(cgen_local_v16,v16);\
			TRC_END_FILL_L1_NON_SMP();\
			TRC_END_FILTER_CHECK_L1_NON_SMP(EL1_TX_PUBLIC_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1TX_LOG_RT_CMD_PUSCH0101(v1, v2, v4, v9, v12, v13, v14, v15, v16)
#endif

#if defined(L1_CATCHER)
	#define EL1TX_LOG_RT_CMD_PUSCH0110(v1, v2, v4, v9, v12, v13, v14, v15, v16) do {\
		{\
			TRC_START_FILTER_CHECK_L1_NON_SMP(EL1_TX_PUBLIC_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v9,v9);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v12,v12);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v13,v13);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v14,v14);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v15,v15);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v16,v16);\
			TRC_START_FILL_L1_NON_SMP();\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v9,v9);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v12,v12);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v13,v13);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v14,v14);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v15,v15);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v16,v16);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1_NON_SMP(0x430B,0x430B);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_OUTPUT_16_MID_WRAPPER_L1_NON_SMP(cgen_local_v9,v9);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v12,v12);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v13,v13);\
			TRC_OUTPUT_16_MID_WRAPPER_L1_NON_SMP(cgen_local_v14,v14);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v15,v15);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1_NON_SMP(cgen_local_v16,v16);\
			TRC_END_FILL_L1_NON_SMP();\
			TRC_END_FILTER_CHECK_L1_NON_SMP(EL1_TX_PUBLIC_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1TX_LOG_RT_CMD_PUSCH0110(v1, v2, v4, v9, v12, v13, v14, v15, v16)
#endif

#if defined(L1_CATCHER)
	#define EL1TX_LOG_RT_CMD_PUSCH0111(v1, v2, v4, v9, v12, v13, v14, v15, v16, v17, v18) do {\
		{\
			TRC_START_FILTER_CHECK_L1_NON_SMP(EL1_TX_PUBLIC_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v9,v9);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v12,v12);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v13,v13);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v14,v14);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v15,v15);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v16,v16);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v17,v17);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v18,v18);\
			TRC_START_FILL_L1_NON_SMP();\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v9,v9);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v12,v12);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v13,v13);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v14,v14);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v15,v15);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v16,v16);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v17,v17);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v18,v18);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1_NON_SMP(0x440B,0x440B);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_OUTPUT_16_MID_WRAPPER_L1_NON_SMP(cgen_local_v9,v9);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v12,v12);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v13,v13);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v14,v14);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v15,v15);\
			TRC_OUTPUT_16_MID_WRAPPER_L1_NON_SMP(cgen_local_v16,v16);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v17,v17);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1_NON_SMP(cgen_local_v18,v18);\
			TRC_END_FILL_L1_NON_SMP();\
			TRC_END_FILTER_CHECK_L1_NON_SMP(EL1_TX_PUBLIC_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1TX_LOG_RT_CMD_PUSCH0111(v1, v2, v4, v9, v12, v13, v14, v15, v16, v17, v18)
#endif

#if defined(L1_CATCHER)
	#define EL1TX_LOG_RT_CMD_PUSCH1000(v1, v2, v4, v9, v12, v13, v14) do {\
		{\
			TRC_START_FILTER_CHECK_L1_NON_SMP(EL1_TX_PUBLIC_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v9,v9);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v12,v12);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v13,v13);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v14,v14);\
			TRC_START_FILL_L1_NON_SMP();\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v9,v9);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v12,v12);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v13,v13);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v14,v14);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1_NON_SMP(0x450B,0x450B);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_OUTPUT_16_MID_WRAPPER_L1_NON_SMP(cgen_local_v9,v9);\
			TRC_OUTPUT_16_MID_WRAPPER_L1_NON_SMP(cgen_local_v12,v12);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v13,v13);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1_NON_SMP(cgen_local_v14,v14);\
			TRC_END_FILL_L1_NON_SMP();\
			TRC_END_FILTER_CHECK_L1_NON_SMP(EL1_TX_PUBLIC_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1TX_LOG_RT_CMD_PUSCH1000(v1, v2, v4, v9, v12, v13, v14)
#endif

#if defined(L1_CATCHER)
	#define EL1TX_LOG_RT_CMD_PUSCH1001(v1, v2, v4, v9, v12, v13, v14, v15, v16) do {\
		{\
			TRC_START_FILTER_CHECK_L1_NON_SMP(EL1_TX_PUBLIC_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v9,v9);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v12,v12);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v13,v13);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v14,v14);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v15,v15);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v16,v16);\
			TRC_START_FILL_L1_NON_SMP();\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v9,v9);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v12,v12);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v13,v13);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v14,v14);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v15,v15);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v16,v16);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1_NON_SMP(0x460B,0x460B);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_OUTPUT_16_MID_WRAPPER_L1_NON_SMP(cgen_local_v9,v9);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v12,v12);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v13,v13);\
			TRC_OUTPUT_16_MID_WRAPPER_L1_NON_SMP(cgen_local_v14,v14);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v15,v15);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1_NON_SMP(cgen_local_v16,v16);\
			TRC_END_FILL_L1_NON_SMP();\
			TRC_END_FILTER_CHECK_L1_NON_SMP(EL1_TX_PUBLIC_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1TX_LOG_RT_CMD_PUSCH1001(v1, v2, v4, v9, v12, v13, v14, v15, v16)
#endif

#if defined(L1_CATCHER)
	#define EL1TX_LOG_RT_CMD_PUSCH1011(v1, v2, v4, v9, v12, v13, v14, v15, v16, v17, v18) do {\
		{\
			TRC_START_FILTER_CHECK_L1_NON_SMP(EL1_TX_PUBLIC_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v9,v9);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v12,v12);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v13,v13);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v14,v14);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v15,v15);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v16,v16);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v17,v17);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v18,v18);\
			TRC_START_FILL_L1_NON_SMP();\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v9,v9);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v12,v12);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v13,v13);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v14,v14);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v15,v15);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v16,v16);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v17,v17);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v18,v18);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1_NON_SMP(0x470B,0x470B);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_OUTPUT_16_MID_WRAPPER_L1_NON_SMP(cgen_local_v9,v9);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v12,v12);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v13,v13);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v14,v14);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v15,v15);\
			TRC_OUTPUT_16_MID_WRAPPER_L1_NON_SMP(cgen_local_v16,v16);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v17,v17);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1_NON_SMP(cgen_local_v18,v18);\
			TRC_END_FILL_L1_NON_SMP();\
			TRC_END_FILTER_CHECK_L1_NON_SMP(EL1_TX_PUBLIC_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1TX_LOG_RT_CMD_PUSCH1011(v1, v2, v4, v9, v12, v13, v14, v15, v16, v17, v18)
#endif

#if defined(L1_CATCHER)
	#define EL1TX_LOG_RT_CMD_PUSCH1010(v1, v2, v4, v9, v12, v13, v14, v15, v16) do {\
		{\
			TRC_START_FILTER_CHECK_L1_NON_SMP(EL1_TX_PUBLIC_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v9,v9);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v12,v12);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v13,v13);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v14,v14);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v15,v15);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v16,v16);\
			TRC_START_FILL_L1_NON_SMP();\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v9,v9);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v12,v12);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v13,v13);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v14,v14);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v15,v15);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v16,v16);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1_NON_SMP(0x480B,0x480B);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_OUTPUT_16_MID_WRAPPER_L1_NON_SMP(cgen_local_v9,v9);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v12,v12);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v13,v13);\
			TRC_OUTPUT_16_MID_WRAPPER_L1_NON_SMP(cgen_local_v14,v14);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v15,v15);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1_NON_SMP(cgen_local_v16,v16);\
			TRC_END_FILL_L1_NON_SMP();\
			TRC_END_FILTER_CHECK_L1_NON_SMP(EL1_TX_PUBLIC_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1TX_LOG_RT_CMD_PUSCH1010(v1, v2, v4, v9, v12, v13, v14, v15, v16)
#endif

#if defined(L1_CATCHER)
	#define EL1TX_LOG_RT_CMD_PUSCH1100(v1, v2, v4, v9, v12, v13, v14, v18) do {\
		{\
			TRC_START_FILTER_CHECK_L1_NON_SMP(EL1_TX_PUBLIC_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v9,v9);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v12,v12);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v13,v13);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v14,v14);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v18,v18);\
			TRC_START_FILL_L1_NON_SMP();\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v9,v9);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v12,v12);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v13,v13);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v14,v14);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v18,v18);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1_NON_SMP(0x490B,0x490B);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_OUTPUT_16_MID_WRAPPER_L1_NON_SMP(cgen_local_v9,v9);\
			TRC_OUTPUT_16_MID_WRAPPER_L1_NON_SMP(cgen_local_v12,v12);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v13,v13);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v14,v14);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1_NON_SMP(cgen_local_v18,v18);\
			TRC_END_FILL_L1_NON_SMP();\
			TRC_END_FILTER_CHECK_L1_NON_SMP(EL1_TX_PUBLIC_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1TX_LOG_RT_CMD_PUSCH1100(v1, v2, v4, v9, v12, v13, v14, v18)
#endif

#if defined(L1_CATCHER)
	#define EL1TX_LOG_RT_CMD_PUSCH1101(v1, v2, v4, v9, v12, v13, v14, v15, v16, v20) do {\
		{\
			TRC_START_FILTER_CHECK_L1_NON_SMP(EL1_TX_PUBLIC_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v9,v9);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v12,v12);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v13,v13);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v14,v14);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v15,v15);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v16,v16);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v20,v20);\
			TRC_START_FILL_L1_NON_SMP();\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v9,v9);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v12,v12);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v13,v13);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v14,v14);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v15,v15);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v16,v16);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v20,v20);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1_NON_SMP(0x4A0B,0x4A0B);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_OUTPUT_16_MID_WRAPPER_L1_NON_SMP(cgen_local_v9,v9);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v12,v12);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v13,v13);\
			TRC_OUTPUT_16_MID_WRAPPER_L1_NON_SMP(cgen_local_v14,v14);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v15,v15);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v16,v16);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1_NON_SMP(cgen_local_v20,v20);\
			TRC_END_FILL_L1_NON_SMP();\
			TRC_END_FILTER_CHECK_L1_NON_SMP(EL1_TX_PUBLIC_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1TX_LOG_RT_CMD_PUSCH1101(v1, v2, v4, v9, v12, v13, v14, v15, v16, v20)
#endif

#if defined(L1_CATCHER)
	#define EL1TX_LOG_RT_CMD_PUSCH1110(v1, v2, v4, v9, v12, v13, v14, v15, v16, v20) do {\
		{\
			TRC_START_FILTER_CHECK_L1_NON_SMP(EL1_TX_PUBLIC_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v9,v9);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v12,v12);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v13,v13);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v14,v14);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v15,v15);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v16,v16);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v20,v20);\
			TRC_START_FILL_L1_NON_SMP();\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v9,v9);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v12,v12);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v13,v13);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v14,v14);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v15,v15);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v16,v16);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v20,v20);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1_NON_SMP(0x4B0B,0x4B0B);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_OUTPUT_16_MID_WRAPPER_L1_NON_SMP(cgen_local_v9,v9);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v12,v12);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v13,v13);\
			TRC_OUTPUT_16_MID_WRAPPER_L1_NON_SMP(cgen_local_v14,v14);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v15,v15);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v16,v16);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1_NON_SMP(cgen_local_v20,v20);\
			TRC_END_FILL_L1_NON_SMP();\
			TRC_END_FILTER_CHECK_L1_NON_SMP(EL1_TX_PUBLIC_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1TX_LOG_RT_CMD_PUSCH1110(v1, v2, v4, v9, v12, v13, v14, v15, v16, v20)
#endif

#if defined(L1_CATCHER)
	#define EL1TX_LOG_RT_CMD_PUSCH1111(v1, v2, v4, v9, v12, v13, v14, v15, v16, v17, v18, v22) do {\
		{\
			TRC_START_FILTER_CHECK_L1_NON_SMP(EL1_TX_PUBLIC_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v9,v9);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v12,v12);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v13,v13);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v14,v14);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v15,v15);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v16,v16);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v17,v17);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v18,v18);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v22,v22);\
			TRC_START_FILL_L1_NON_SMP();\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v9,v9);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v12,v12);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v13,v13);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v14,v14);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v15,v15);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v16,v16);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v17,v17);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v18,v18);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v22,v22);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1_NON_SMP(0x4C0B,0x4C0B);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_OUTPUT_16_MID_WRAPPER_L1_NON_SMP(cgen_local_v9,v9);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v12,v12);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v13,v13);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v14,v14);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v15,v15);\
			TRC_OUTPUT_16_MID_WRAPPER_L1_NON_SMP(cgen_local_v16,v16);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v17,v17);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v18,v18);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1_NON_SMP(cgen_local_v22,v22);\
			TRC_END_FILL_L1_NON_SMP();\
			TRC_END_FILTER_CHECK_L1_NON_SMP(EL1_TX_PUBLIC_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1TX_LOG_RT_CMD_PUSCH1111(v1, v2, v4, v9, v12, v13, v14, v15, v16, v17, v18, v22)
#endif

#if defined(L1_CATCHER)
	#define EL1TX_LOG_RT_CMD_PUCCH(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1_NON_SMP(EL1_TX_PUBLIC_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_START_FILL_L1_NON_SMP();\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1_NON_SMP(0x4D0B,0x4D0B);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_END_FILL_L1_NON_SMP();\
			TRC_END_FILTER_CHECK_L1_NON_SMP(EL1_TX_PUBLIC_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1TX_LOG_RT_CMD_PUCCH(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define EL1TX_LOG_RT_CMD_PRACH0(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1_NON_SMP(EL1_TX_PUBLIC_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_START_FILL_L1_NON_SMP();\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1_NON_SMP(0x4E0B,0x4E0B);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_END_FILL_L1_NON_SMP();\
			TRC_END_FILTER_CHECK_L1_NON_SMP(EL1_TX_PUBLIC_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1TX_LOG_RT_CMD_PRACH0(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define EL1TX_LOG_RT_CMD_SRS_UCI(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1_NON_SMP(EL1_TX_PUBLIC_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_START_FILL_L1_NON_SMP();\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1_NON_SMP(0x4F0B,0x4F0B);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_END_FILL_L1_NON_SMP();\
			TRC_END_FILTER_CHECK_L1_NON_SMP(EL1_TX_PUBLIC_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1TX_LOG_RT_CMD_SRS_UCI(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define EL1TX_LOG_PUXCH_ACK_RPT_L(v1, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1_NON_SMP(EL1_TX_PUBLIC_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_START_FILL_L1_NON_SMP();\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1_NON_SMP(0x500B,0x500B);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_END_FILL_L1_NON_SMP();\
			TRC_END_FILTER_CHECK_L1_NON_SMP(EL1_TX_PUBLIC_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1TX_LOG_PUXCH_ACK_RPT_L(v1, v3)
#endif

#if defined(L1_CATCHER)
	#define EL1TX_LOG_PUXCH_ACK_RPT_D(v1, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1_NON_SMP(EL1_TX_PUBLIC_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_START_FILL_L1_NON_SMP();\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1_NON_SMP(0x510B,0x510B);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_END_FILL_L1_NON_SMP();\
			TRC_END_FILTER_CHECK_L1_NON_SMP(EL1_TX_PUBLIC_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1TX_LOG_PUXCH_ACK_RPT_D(v1, v3)
#endif

#if defined(L1_CATCHER)
	#define EL1TX_LOG_PUXCH_ACK_RPT_B(v1, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1_NON_SMP(EL1_TX_PUBLIC_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_START_FILL_L1_NON_SMP();\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1_NON_SMP(0x520B,0x520B);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_END_FILL_L1_NON_SMP();\
			TRC_END_FILTER_CHECK_L1_NON_SMP(EL1_TX_PUBLIC_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1TX_LOG_PUXCH_ACK_RPT_B(v1, v3)
#endif

#if defined(L1_CATCHER)
	#define EL1TX_LOG_TX_COMMON_RPT(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1_NON_SMP(EL1_TX_PUBLIC_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_START_FILL_L1_NON_SMP();\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1_NON_SMP(0x530B,0x530B);\
			TRC_OUTPUT_16_MID_WRAPPER_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_END_FILL_L1_NON_SMP();\
			TRC_END_FILTER_CHECK_L1_NON_SMP(EL1_TX_PUBLIC_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1TX_LOG_TX_COMMON_RPT(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define EL1TX_LOG_PUSCH_PRB_RPT(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TX_PUBLIC_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x540B,0x540B);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TX_PUBLIC_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1TX_LOG_PUSCH_PRB_RPT(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define EL1TX_LOG_ACQI_INFO_RPT(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TX_PUBLIC_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x550B,0x550B);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TX_PUBLIC_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1TX_LOG_ACQI_INFO_RPT(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define EL1TX_LOG_ACQI_1_2_WB_RPT(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TX_PUBLIC_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x560B,0x560B);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TX_PUBLIC_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1TX_LOG_ACQI_1_2_WB_RPT(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define EL1TX_LOG_ACQI_1_2_PMI_RPT(v1, v2, v3, v4, v5, v6, v7) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TX_PUBLIC_Trace_Filter, 1, 0x01);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x570B,0x570B);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v7,v7);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TX_PUBLIC_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1TX_LOG_ACQI_1_2_PMI_RPT(v1, v2, v3, v4, v5, v6, v7)
#endif

#if defined(L1_CATCHER)
	#define EL1TX_LOG_ACQI_2_2_WB_RPT(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TX_PUBLIC_Trace_Filter, 1, 0x01);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x580B,0x580B);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TX_PUBLIC_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1TX_LOG_ACQI_2_2_WB_RPT(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER)
	#define EL1TX_LOG_ACQI_2_2_UE_M_RPT(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TX_PUBLIC_Trace_Filter, 1, 0x01);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x590B,0x590B);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_24_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TX_PUBLIC_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1TX_LOG_ACQI_2_2_UE_M_RPT(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER)
	#define EL1TX_LOG_ACQI_3_1_WB_RPT(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TX_PUBLIC_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x5A0B,0x5A0B);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TX_PUBLIC_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1TX_LOG_ACQI_3_1_WB_RPT(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define EL1TX_LOG_ACQI_3_1_SB_RPT(v1, v2, v3, v4, v5, v6, v7) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TX_PUBLIC_Trace_Filter, 1, 0x01);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x5B0B,0x5B0B);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v7,v7);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TX_PUBLIC_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1TX_LOG_ACQI_3_1_SB_RPT(v1, v2, v3, v4, v5, v6, v7)
#endif

#if defined(L1_CATCHER)
	#define EL1TX_LOG_PCQI_DATA_RPT(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TX_PUBLIC_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x5C0B,0x5C0B);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TX_PUBLIC_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1TX_LOG_PCQI_DATA_RPT(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define EL1TX_LOG_PCQI_INFO_RPT(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TX_PUBLIC_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x5D0B,0x5D0B);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TX_PUBLIC_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1TX_LOG_PCQI_INFO_RPT(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define EL1TX_LOG_PCQI_INFO_RPT_COMB(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TX_PUBLIC_Trace_Filter, 1, 0x01);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x5E0B,0x5E0B);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TX_PUBLIC_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1TX_LOG_PCQI_INFO_RPT_COMB(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER)
	#define EL1TX_LOG_PCQI_WB_RPT(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TX_PUBLIC_Trace_Filter, 1, 0x01);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x5F0B,0x5F0B);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TX_PUBLIC_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1TX_LOG_PCQI_WB_RPT(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER)
	#define EL1TX_LOG_PCQI_SB_RPT(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1_TX_PUBLIC_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x600B,0x600B);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1_TX_PUBLIC_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1TX_LOG_PCQI_SB_RPT(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define EL1TX_LOG_RT_CMD_PL_PWR(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1_NON_SMP(EL1_TX_PUBLIC_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_START_FILL_L1_NON_SMP();\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1_NON_SMP(0x610B,0x610B);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_END_FILL_L1_NON_SMP();\
			TRC_END_FILTER_CHECK_L1_NON_SMP(EL1_TX_PUBLIC_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1TX_LOG_RT_CMD_PL_PWR(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define EL1TX_LOG_RT_CMD_PUSCH_SCALE(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1_NON_SMP(EL1_TX_PUBLIC_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_START_FILL_L1_NON_SMP();\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1_NON_SMP(0x620B,0x620B);\
			TRC_OUTPUT_16_MID_WRAPPER_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_END_FILL_L1_NON_SMP();\
			TRC_END_FILTER_CHECK_L1_NON_SMP(EL1_TX_PUBLIC_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1TX_LOG_RT_CMD_PUSCH_SCALE(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define EL1TX_LOG_RT_CMD_PUSCH_PWR0(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L1_NON_SMP(EL1_TX_PUBLIC_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v5,v5);\
			TRC_START_FILL_L1_NON_SMP();\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v5,v5);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1_NON_SMP(0x630B,0x630B);\
			TRC_OUTPUT_16_MID_WRAPPER_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1_NON_SMP(cgen_local_v5,v5);\
			TRC_END_FILL_L1_NON_SMP();\
			TRC_END_FILTER_CHECK_L1_NON_SMP(EL1_TX_PUBLIC_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1TX_LOG_RT_CMD_PUSCH_PWR0(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER)
	#define EL1TX_LOG_RT_CMD_PUSCH_PWR1(v1, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L1_NON_SMP(EL1_TX_PUBLIC_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v5,v5);\
			TRC_START_FILL_L1_NON_SMP();\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v5,v5);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1_NON_SMP(0x640B,0x640B);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1_NON_SMP(cgen_local_v5,v5);\
			TRC_END_FILL_L1_NON_SMP();\
			TRC_END_FILTER_CHECK_L1_NON_SMP(EL1_TX_PUBLIC_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1TX_LOG_RT_CMD_PUSCH_PWR1(v1, v3, v4, v5)
#endif

#if defined(L1_CATCHER)
	#define EL1TX_LOG_RT_CMD_PUSCH_PWR1_noinj(v1, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1_NON_SMP(EL1_TX_PUBLIC_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_START_FILL_L1_NON_SMP();\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1_NON_SMP(0x650B,0x650B);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_END_FILL_L1_NON_SMP();\
			TRC_END_FILTER_CHECK_L1_NON_SMP(EL1_TX_PUBLIC_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1TX_LOG_RT_CMD_PUSCH_PWR1_noinj(v1, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define EL1TX_LOG_RT_CMD_PUCCH_PWR0(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1_NON_SMP(EL1_TX_PUBLIC_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_START_FILL_L1_NON_SMP();\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1_NON_SMP(0x660B,0x660B);\
			TRC_OUTPUT_16_MID_WRAPPER_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_END_FILL_L1_NON_SMP();\
			TRC_END_FILTER_CHECK_L1_NON_SMP(EL1_TX_PUBLIC_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1TX_LOG_RT_CMD_PUCCH_PWR0(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define EL1TX_LOG_RT_CMD_PUCCH_PWR1(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1_NON_SMP(EL1_TX_PUBLIC_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_START_FILL_L1_NON_SMP();\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1_NON_SMP(0x670B,0x670B);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_END_FILL_L1_NON_SMP();\
			TRC_END_FILTER_CHECK_L1_NON_SMP(EL1_TX_PUBLIC_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1TX_LOG_RT_CMD_PUCCH_PWR1(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define EL1TX_LOG_RT_CMD_PRACH_PWR(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L1_NON_SMP(EL1_TX_PUBLIC_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v5,v5);\
			TRC_START_FILL_L1_NON_SMP();\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v5,v5);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1_NON_SMP(0x680B,0x680B);\
			TRC_OUTPUT_16_MID_WRAPPER_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1_NON_SMP(cgen_local_v5,v5);\
			TRC_END_FILL_L1_NON_SMP();\
			TRC_END_FILTER_CHECK_L1_NON_SMP(EL1_TX_PUBLIC_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1TX_LOG_RT_CMD_PRACH_PWR(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER)
	#define EL1TX_LOG_RT_CMD_SRS_PWR0(v1, v2, v3, v4, v5, v6) do {\
		{\
			TRC_START_FILTER_CHECK_L1_NON_SMP(EL1_TX_PUBLIC_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v5,v5);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v6,v6);\
			TRC_START_FILL_L1_NON_SMP();\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v5,v5);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v6,v6);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1_NON_SMP(0x690B,0x690B);\
			TRC_OUTPUT_16_MID_WRAPPER_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v5,v5);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1_NON_SMP(cgen_local_v6,v6);\
			TRC_END_FILL_L1_NON_SMP();\
			TRC_END_FILTER_CHECK_L1_NON_SMP(EL1_TX_PUBLIC_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1TX_LOG_RT_CMD_SRS_PWR0(v1, v2, v3, v4, v5, v6)
#endif

#if defined(L1_CATCHER)
	#define EL1TX_LOG_RT_CMD_ONE_PWR2_PUCCH(v1, v2, v3, v4, v6) do {\
		{\
			TRC_START_FILTER_CHECK_L1_NON_SMP(EL1_TX_PUBLIC_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v6,v6);\
			TRC_START_FILL_L1_NON_SMP();\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v6,v6);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1_NON_SMP(0x6A0B,0x6A0B);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1_NON_SMP(cgen_local_v6,v6);\
			TRC_END_FILL_L1_NON_SMP();\
			TRC_END_FILTER_CHECK_L1_NON_SMP(EL1_TX_PUBLIC_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1TX_LOG_RT_CMD_ONE_PWR2_PUCCH(v1, v2, v3, v4, v6)
#endif

#if defined(L1_CATCHER)
	#define EL1TX_LOG_RT_CMD_ONE_PWR2_PUSCH(v1, v2, v3, v4, v6) do {\
		{\
			TRC_START_FILTER_CHECK_L1_NON_SMP(EL1_TX_PUBLIC_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v6,v6);\
			TRC_START_FILL_L1_NON_SMP();\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v6,v6);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1_NON_SMP(0x6B0B,0x6B0B);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1_NON_SMP(cgen_local_v6,v6);\
			TRC_END_FILL_L1_NON_SMP();\
			TRC_END_FILTER_CHECK_L1_NON_SMP(EL1_TX_PUBLIC_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1TX_LOG_RT_CMD_ONE_PWR2_PUSCH(v1, v2, v3, v4, v6)
#endif

#if defined(L1_CATCHER)
	#define EL1TX_LOG_RT_CMD_ONE_PWR2_SRS(v1, v2, v3, v4, v6) do {\
		{\
			TRC_START_FILTER_CHECK_L1_NON_SMP(EL1_TX_PUBLIC_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v6,v6);\
			TRC_START_FILL_L1_NON_SMP();\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v6,v6);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1_NON_SMP(0x6C0B,0x6C0B);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1_NON_SMP(cgen_local_v6,v6);\
			TRC_END_FILL_L1_NON_SMP();\
			TRC_END_FILTER_CHECK_L1_NON_SMP(EL1_TX_PUBLIC_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1TX_LOG_RT_CMD_ONE_PWR2_SRS(v1, v2, v3, v4, v6)
#endif

#if defined(L1_CATCHER)
	#define EL1TX_LOG_RT_CMD_TWO_PWR2(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13) do {\
		{\
			TRC_START_FILTER_CHECK_L1_NON_SMP(EL1_TX_PUBLIC_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v5,v5);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v6,v6);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v7,v7);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v8,v8);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v9,v9);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v10,v10);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v11,v11);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v12,v12);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v13,v13);\
			TRC_START_FILL_L1_NON_SMP();\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v5,v5);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v6,v6);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v7,v7);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v8,v8);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v9,v9);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v10,v10);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v11,v11);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v12,v12);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v13,v13);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1_NON_SMP(0x6D0B,0x6D0B);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_OUTPUT_16_MID_WRAPPER_L1_NON_SMP(cgen_local_v5,v5);\
			TRC_OUTPUT_16_MID_WRAPPER_L1_NON_SMP(cgen_local_v6,v6);\
			TRC_OUTPUT_16_MID_WRAPPER_L1_NON_SMP(cgen_local_v7,v7);\
			TRC_OUTPUT_16_MID_WRAPPER_L1_NON_SMP(cgen_local_v8,v8);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v9,v9);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v10,v10);\
			TRC_OUTPUT_16_MID_WRAPPER_L1_NON_SMP(cgen_local_v11,v11);\
			TRC_OUTPUT_16_MID_WRAPPER_L1_NON_SMP(cgen_local_v12,v12);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1_NON_SMP(cgen_local_v13,v13);\
			TRC_END_FILL_L1_NON_SMP();\
			TRC_END_FILTER_CHECK_L1_NON_SMP(EL1_TX_PUBLIC_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1TX_LOG_RT_CMD_TWO_PWR2(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13)
#endif

#if defined(L1_CATCHER)
	#define EL1TX_LOG_RT_CMD_THREE_PWR2(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17) do {\
		{\
			TRC_START_FILTER_CHECK_L1_NON_SMP(EL1_TX_PUBLIC_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v5,v5);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v6,v6);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v7,v7);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v8,v8);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v9,v9);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v10,v10);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v11,v11);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v12,v12);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v13,v13);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v14,v14);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v15,v15);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v16,v16);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v17,v17);\
			TRC_START_FILL_L1_NON_SMP();\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v5,v5);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v6,v6);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v7,v7);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v8,v8);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v9,v9);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v10,v10);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v11,v11);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v12,v12);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v13,v13);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v14,v14);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v15,v15);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v16,v16);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v17,v17);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1_NON_SMP(0x6E0B,0x6E0B);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_OUTPUT_16_MID_WRAPPER_L1_NON_SMP(cgen_local_v5,v5);\
			TRC_OUTPUT_16_MID_WRAPPER_L1_NON_SMP(cgen_local_v6,v6);\
			TRC_OUTPUT_16_MID_WRAPPER_L1_NON_SMP(cgen_local_v7,v7);\
			TRC_OUTPUT_16_MID_WRAPPER_L1_NON_SMP(cgen_local_v8,v8);\
			TRC_OUTPUT_16_MID_WRAPPER_L1_NON_SMP(cgen_local_v9,v9);\
			TRC_OUTPUT_16_MID_WRAPPER_L1_NON_SMP(cgen_local_v10,v10);\
			TRC_OUTPUT_16_MID_WRAPPER_L1_NON_SMP(cgen_local_v11,v11);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v12,v12);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v13,v13);\
			TRC_OUTPUT_16_MID_WRAPPER_L1_NON_SMP(cgen_local_v14,v14);\
			TRC_OUTPUT_16_MID_WRAPPER_L1_NON_SMP(cgen_local_v15,v15);\
			TRC_OUTPUT_16_MID_WRAPPER_L1_NON_SMP(cgen_local_v16,v16);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1_NON_SMP(cgen_local_v17,v17);\
			TRC_END_FILL_L1_NON_SMP();\
			TRC_END_FILTER_CHECK_L1_NON_SMP(EL1_TX_PUBLIC_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1TX_LOG_RT_CMD_THREE_PWR2(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17)
#endif

#if defined(L1_CATCHER)
	#define EL1TX_LOG_TPC_PHR_RPT(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10) do {\
		{\
			TRC_START_FILTER_CHECK_L1_NON_SMP(EL1_TX_PUBLIC_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v5,v5);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v6,v6);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v7,v7);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v8,v8);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v9,v9);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v10,v10);\
			TRC_START_FILL_L1_NON_SMP();\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v5,v5);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v6,v6);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v7,v7);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v8,v8);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v9,v9);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v10,v10);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1_NON_SMP(0x6F0B,0x6F0B);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v5,v5);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v6,v6);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v7,v7);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v8,v8);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v9,v9);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1_NON_SMP(cgen_local_v10,v10);\
			TRC_END_FILL_L1_NON_SMP();\
			TRC_END_FILTER_CHECK_L1_NON_SMP(EL1_TX_PUBLIC_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1TX_LOG_TPC_PHR_RPT(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10)
#endif

#if defined(L1_CATCHER)
	#define EL1TX_LOG_RT_CMD_ONE_PWR2_PUCCH_noinj(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1_NON_SMP(EL1_TX_PUBLIC_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_START_FILL_L1_NON_SMP();\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1_NON_SMP(0x700B,0x700B);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_END_FILL_L1_NON_SMP();\
			TRC_END_FILTER_CHECK_L1_NON_SMP(EL1_TX_PUBLIC_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1TX_LOG_RT_CMD_ONE_PWR2_PUCCH_noinj(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define EL1TX_LOG_RT_CMD_ONE_PWR2_PUSCH_noinj(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1_NON_SMP(EL1_TX_PUBLIC_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_START_FILL_L1_NON_SMP();\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1_NON_SMP(0x710B,0x710B);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_END_FILL_L1_NON_SMP();\
			TRC_END_FILTER_CHECK_L1_NON_SMP(EL1_TX_PUBLIC_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1TX_LOG_RT_CMD_ONE_PWR2_PUSCH_noinj(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define EL1TX_LOG_RT_CMD_ONE_PWR2_SRS_noinj(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1_NON_SMP(EL1_TX_PUBLIC_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_START_FILL_L1_NON_SMP();\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1_NON_SMP(0x720B,0x720B);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_END_FILL_L1_NON_SMP();\
			TRC_END_FILTER_CHECK_L1_NON_SMP(EL1_TX_PUBLIC_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1TX_LOG_RT_CMD_ONE_PWR2_SRS_noinj(v1, v2, v3, v4)
#endif



/*******************************/
/* declaration of filter array */
/*******************************/
EXTERN_TMD_FILTER(unsigned char, EL1_TX_PUBLIC_Trace_Filter, 5);
/*************************/
/* Function declarations */
/*************************/
#ifdef L1_CATCHER

void Set_EL1_TX_PUBLIC_Filter(unsigned char *setting);

#endif

/************************************/
/* Filter checking API declarations */
/************************************/

#define ChkL1ModFltr_EL1_TX_PUBLIC()	(FILTER_CHECK(EL1_TX_PUBLIC_Trace_Filter, 0, 1))
#define ChkL1ClsFltr_EL1_TX_PUBLIC_el1_trace_1_H()	(ChkL1ModFltr_EL1_TX_PUBLIC()&&(FILTER_CHECK(EL1_TX_PUBLIC_Trace_Filter, 1, 0x01)))
#define ChkL1ClsFltr_EL1_TX_PUBLIC_el1_trace_2_H()	(ChkL1ModFltr_EL1_TX_PUBLIC()&&(FILTER_CHECK(EL1_TX_PUBLIC_Trace_Filter, 1, 0x02)))
#define ChkL1ClsFltr_EL1_TX_PUBLIC_el1_trace_3_M()	(ChkL1ModFltr_EL1_TX_PUBLIC()&&(FILTER_CHECK(EL1_TX_PUBLIC_Trace_Filter, 1, 0x04)))
#define ChkL1ClsFltr_EL1_TX_PUBLIC_el1_trace_4_L()	(ChkL1ModFltr_EL1_TX_PUBLIC()&&(FILTER_CHECK(EL1_TX_PUBLIC_Trace_Filter, 1, 0x08)))
#define ChkL1MsgFltr_EL1TX_LOG_RRC_SYS0()	ChkL1ClsFltr_EL1_TX_PUBLIC_el1_trace_1_H()
#define ChkL1MsgFltr_EL1TX_LOG_RRC_SYS1()	ChkL1ClsFltr_EL1_TX_PUBLIC_el1_trace_1_H()
#define ChkL1MsgFltr_EL1TX_LOG_RRC_SYS2()	ChkL1ClsFltr_EL1_TX_PUBLIC_el1_trace_1_H()
#define ChkL1MsgFltr_EL1TX_LOG_RRC_PCMAX()	ChkL1ClsFltr_EL1_TX_PUBLIC_el1_trace_1_H()
#define ChkL1MsgFltr_EL1TX_LOG_RRC_deltaTc()	ChkL1ClsFltr_EL1_TX_PUBLIC_el1_trace_1_H()
#define ChkL1MsgFltr_EL1TX_LOG_RRC_PRACH0()	ChkL1ClsFltr_EL1_TX_PUBLIC_el1_trace_1_H()
#define ChkL1MsgFltr_EL1TX_LOG_RRC_PRACH()	ChkL1ClsFltr_EL1_TX_PUBLIC_el1_trace_1_H()
#define ChkL1MsgFltr_EL1TX_LOG_RRC_PUCCH()	ChkL1ClsFltr_EL1_TX_PUBLIC_el1_trace_1_H()
#define ChkL1MsgFltr_EL1TX_LOG_RRC_PUSCH()	ChkL1ClsFltr_EL1_TX_PUBLIC_el1_trace_1_H()
#define ChkL1MsgFltr_EL1TX_LOG_RRC_SPS_UL()	ChkL1ClsFltr_EL1_TX_PUBLIC_el1_trace_1_H()
#define ChkL1MsgFltr_EL1TX_LOG_RRC_SPS_DL()	ChkL1ClsFltr_EL1_TX_PUBLIC_el1_trace_1_H()
#define ChkL1MsgFltr_EL1TX_LOG_RRC_CQI()	ChkL1ClsFltr_EL1_TX_PUBLIC_el1_trace_1_H()
#define ChkL1MsgFltr_EL1TX_LOG_RRC_CQI0()	ChkL1ClsFltr_EL1_TX_PUBLIC_el1_trace_1_H()
#define ChkL1MsgFltr_EL1TX_LOG_RRC_CQI1()	ChkL1ClsFltr_EL1_TX_PUBLIC_el1_trace_1_H()
#define ChkL1MsgFltr_EL1TX_LOG_RRC_CQI2()	ChkL1ClsFltr_EL1_TX_PUBLIC_el1_trace_1_H()
#define ChkL1MsgFltr_EL1TX_LOG_RRC_CQI3()	ChkL1ClsFltr_EL1_TX_PUBLIC_el1_trace_1_H()
#define ChkL1MsgFltr_EL1TX_LOG_RRC_SRS0()	ChkL1ClsFltr_EL1_TX_PUBLIC_el1_trace_1_H()
#define ChkL1MsgFltr_EL1TX_LOG_RRC_SRS1()	ChkL1ClsFltr_EL1_TX_PUBLIC_el1_trace_1_H()
#define ChkL1MsgFltr_EL1TX_LOG_RRC_SRS2()	ChkL1ClsFltr_EL1_TX_PUBLIC_el1_trace_1_H()
#define ChkL1MsgFltr_EL1TX_LOG_RRC_SRS3()	ChkL1ClsFltr_EL1_TX_PUBLIC_el1_trace_1_H()
#define ChkL1MsgFltr_EL1TX_LOG_RRC_POWER0()	ChkL1ClsFltr_EL1_TX_PUBLIC_el1_trace_1_H()
#define ChkL1MsgFltr_EL1TX_LOG_RRC_POWER1()	ChkL1ClsFltr_EL1_TX_PUBLIC_el1_trace_1_H()
#define ChkL1MsgFltr_EL1TX_LOG_RAR_GRANT()	ChkL1ClsFltr_EL1_TX_PUBLIC_el1_trace_1_H()
#define ChkL1MsgFltr_EL1TX_LOG_RAR_MATCH()	ChkL1ClsFltr_EL1_TX_PUBLIC_el1_trace_1_H()
#define ChkL1MsgFltr_EL1TX_LOG_RAR_FALSE_ALARM()	ChkL1ClsFltr_EL1_TX_PUBLIC_el1_trace_1_H()
#define ChkL1MsgFltr_EL1TX_LOG_PRACH_INFO()	ChkL1ClsFltr_EL1_TX_PUBLIC_el1_trace_1_H()
#define ChkL1MsgFltr_EL1TX_LOG_COMBINED_PRACH_INFO()	ChkL1ClsFltr_EL1_TX_PUBLIC_el1_trace_1_H()
#define ChkL1MsgFltr_EL1TX_LOG_UL_PARAM_INFO()	ChkL1ClsFltr_EL1_TX_PUBLIC_el1_trace_1_H()
#define ChkL1MsgFltr_EL1TX_LOG_TA_INFO()	ChkL1ClsFltr_EL1_TX_PUBLIC_el1_trace_1_H()
#define ChkL1MsgFltr_EL1TX_LOG_TA_COMBINED_INFO()	ChkL1ClsFltr_EL1_TX_PUBLIC_el1_trace_1_H()
#define ChkL1MsgFltr_EL1TX_LOG_UL_GRANT_PROC()	ChkL1ClsFltr_EL1_TX_PUBLIC_el1_trace_4_L()
#define ChkL1MsgFltr_EL1TX_LOG_UL_GRANT_PROC2()	ChkL1ClsFltr_EL1_TX_PUBLIC_el1_trace_1_H()
#define ChkL1MsgFltr_EL1TX_LOG_UL_GRANT_PROC2_nodai()	ChkL1ClsFltr_EL1_TX_PUBLIC_el1_trace_1_H()
#define ChkL1MsgFltr_EL1TX_LOG_DL_ASSIGN_PROC0()	ChkL1ClsFltr_EL1_TX_PUBLIC_el1_trace_1_H()
#define ChkL1MsgFltr_EL1TX_LOG_DL_ASSIGN_PROC0_SET2()	ChkL1ClsFltr_EL1_TX_PUBLIC_el1_trace_1_H()
#define ChkL1MsgFltr_EL1TX_LOG_DL_ASSIGN_PROC1()	ChkL1ClsFltr_EL1_TX_PUBLIC_el1_trace_1_H()
#define ChkL1MsgFltr_EL1TX_LOG_DL_ASSIGN_PROC1_nodai()	ChkL1ClsFltr_EL1_TX_PUBLIC_el1_trace_1_H()
#define ChkL1MsgFltr_EL1TX_LOG_UL_HARQ()	ChkL1ClsFltr_EL1_TX_PUBLIC_el1_trace_1_H()
#define ChkL1MsgFltr_EL1TX_LOG_DL_PDSCH_CRC()	ChkL1ClsFltr_EL1_TX_PUBLIC_el1_trace_1_H()
#define ChkL1MsgFltr_EL1TX_LOG_DL_PDSCH_TBS()	ChkL1ClsFltr_EL1_TX_PUBLIC_el1_trace_1_H()
#define ChkL1MsgFltr_EL1TX_LOG_DL_PDSCH_COMBINED()	ChkL1ClsFltr_EL1_TX_PUBLIC_el1_trace_1_H()
#define ChkL1MsgFltr_EL1TX_LOG_PHICH()	ChkL1ClsFltr_EL1_TX_PUBLIC_el1_trace_1_H()
#define ChkL1MsgFltr_EL1TX_LOG_PHICH_COMBINED()	ChkL1ClsFltr_EL1_TX_PUBLIC_el1_trace_1_H()
#define ChkL1MsgFltr_EL1TX_LOG_PDCCH_ORDER()	ChkL1ClsFltr_EL1_TX_PUBLIC_el1_trace_1_H()
#define ChkL1MsgFltr_EL1TX_LOG_CR_INFO()	ChkL1ClsFltr_EL1_TX_PUBLIC_el1_trace_1_H()
#define ChkL1MsgFltr_EL1TX_LOG_CR_RCV_TIME()	ChkL1ClsFltr_EL1_TX_PUBLIC_el1_trace_1_H()
#define ChkL1MsgFltr_EL1TX_LOG_CR_ACK_TIME()	ChkL1ClsFltr_EL1_TX_PUBLIC_el1_trace_1_H()
#define ChkL1MsgFltr_EL1TX_LOG_ACK_REP_CNT()	ChkL1ClsFltr_EL1_TX_PUBLIC_el1_trace_1_H()
#define ChkL1MsgFltr_EL1TX_LOG_DCI0_FALSE_ALARM()	ChkL1ClsFltr_EL1_TX_PUBLIC_el1_trace_1_H()
#define ChkL1MsgFltr_EL1TX_LOG_DCI_WARNING()	ChkL1ClsFltr_EL1_TX_PUBLIC_el1_trace_1_H()
#define ChkL1MsgFltr_EL1TX_LOG_RT_CMD_Tx_Enbl()	ChkL1ClsFltr_EL1_TX_PUBLIC_el1_trace_4_L()
#define ChkL1MsgFltr_EL1TX_LOG_RT_CMD_Tx_Enbl2()	ChkL1ClsFltr_EL1_TX_PUBLIC_el1_trace_1_H()
#define ChkL1MsgFltr_EL1TX_LOG_RT_CMD_Tx_Enbl3()	ChkL1ClsFltr_EL1_TX_PUBLIC_el1_trace_1_H()
#define ChkL1MsgFltr_EL1TX_LOG_RT_CMD_Tx_Enbl3_noinj()	ChkL1ClsFltr_EL1_TX_PUBLIC_el1_trace_1_H()
#define ChkL1MsgFltr_El1TX_LOG_RT_CMD_Tx_time()	ChkL1ClsFltr_EL1_TX_PUBLIC_el1_trace_1_H()
#define ChkL1MsgFltr_EL1TX_LOG_RT_CMD_Rx_time()	ChkL1ClsFltr_EL1_TX_PUBLIC_el1_trace_1_H()
#define ChkL1MsgFltr_EL1TX_LOG_RT_CMD_PUSCH0()	ChkL1ClsFltr_EL1_TX_PUBLIC_el1_trace_4_L()
#define ChkL1MsgFltr_EL1TX_LOG_RT_CMD_PUSCH1()	ChkL1ClsFltr_EL1_TX_PUBLIC_el1_trace_4_L()
#define ChkL1MsgFltr_EL1TX_LOG_RT_CMD_PUSCH2()	ChkL1ClsFltr_EL1_TX_PUBLIC_el1_trace_4_L()
#define ChkL1MsgFltr_EL1TX_LOG_RT_CMD_PUSCH3()	ChkL1ClsFltr_EL1_TX_PUBLIC_el1_trace_4_L()
#define ChkL1MsgFltr_EL1TX_LOG_RT_CMD_PUSCH4()	ChkL1ClsFltr_EL1_TX_PUBLIC_el1_trace_4_L()
#define ChkL1MsgFltr_EL1TX_LOG_RT_CMD_PUSCH0000()	ChkL1ClsFltr_EL1_TX_PUBLIC_el1_trace_1_H()
#define ChkL1MsgFltr_EL1TX_LOG_RT_CMD_PUSCH0001()	ChkL1ClsFltr_EL1_TX_PUBLIC_el1_trace_1_H()
#define ChkL1MsgFltr_EL1TX_LOG_RT_CMD_PUSCH0010()	ChkL1ClsFltr_EL1_TX_PUBLIC_el1_trace_1_H()
#define ChkL1MsgFltr_EL1TX_LOG_RT_CMD_PUSCH0011()	ChkL1ClsFltr_EL1_TX_PUBLIC_el1_trace_1_H()
#define ChkL1MsgFltr_EL1TX_LOG_RT_CMD_PUSCH0100()	ChkL1ClsFltr_EL1_TX_PUBLIC_el1_trace_1_H()
#define ChkL1MsgFltr_EL1TX_LOG_RT_CMD_PUSCH0101()	ChkL1ClsFltr_EL1_TX_PUBLIC_el1_trace_1_H()
#define ChkL1MsgFltr_EL1TX_LOG_RT_CMD_PUSCH0110()	ChkL1ClsFltr_EL1_TX_PUBLIC_el1_trace_1_H()
#define ChkL1MsgFltr_EL1TX_LOG_RT_CMD_PUSCH0111()	ChkL1ClsFltr_EL1_TX_PUBLIC_el1_trace_1_H()
#define ChkL1MsgFltr_EL1TX_LOG_RT_CMD_PUSCH1000()	ChkL1ClsFltr_EL1_TX_PUBLIC_el1_trace_1_H()
#define ChkL1MsgFltr_EL1TX_LOG_RT_CMD_PUSCH1001()	ChkL1ClsFltr_EL1_TX_PUBLIC_el1_trace_1_H()
#define ChkL1MsgFltr_EL1TX_LOG_RT_CMD_PUSCH1011()	ChkL1ClsFltr_EL1_TX_PUBLIC_el1_trace_1_H()
#define ChkL1MsgFltr_EL1TX_LOG_RT_CMD_PUSCH1010()	ChkL1ClsFltr_EL1_TX_PUBLIC_el1_trace_1_H()
#define ChkL1MsgFltr_EL1TX_LOG_RT_CMD_PUSCH1100()	ChkL1ClsFltr_EL1_TX_PUBLIC_el1_trace_1_H()
#define ChkL1MsgFltr_EL1TX_LOG_RT_CMD_PUSCH1101()	ChkL1ClsFltr_EL1_TX_PUBLIC_el1_trace_1_H()
#define ChkL1MsgFltr_EL1TX_LOG_RT_CMD_PUSCH1110()	ChkL1ClsFltr_EL1_TX_PUBLIC_el1_trace_1_H()
#define ChkL1MsgFltr_EL1TX_LOG_RT_CMD_PUSCH1111()	ChkL1ClsFltr_EL1_TX_PUBLIC_el1_trace_1_H()
#define ChkL1MsgFltr_EL1TX_LOG_RT_CMD_PUCCH()	ChkL1ClsFltr_EL1_TX_PUBLIC_el1_trace_1_H()
#define ChkL1MsgFltr_EL1TX_LOG_RT_CMD_PRACH0()	ChkL1ClsFltr_EL1_TX_PUBLIC_el1_trace_1_H()
#define ChkL1MsgFltr_EL1TX_LOG_RT_CMD_SRS_UCI()	ChkL1ClsFltr_EL1_TX_PUBLIC_el1_trace_1_H()
#define ChkL1MsgFltr_EL1TX_LOG_PUXCH_ACK_RPT_L()	ChkL1ClsFltr_EL1_TX_PUBLIC_el1_trace_1_H()
#define ChkL1MsgFltr_EL1TX_LOG_PUXCH_ACK_RPT_D()	ChkL1ClsFltr_EL1_TX_PUBLIC_el1_trace_1_H()
#define ChkL1MsgFltr_EL1TX_LOG_PUXCH_ACK_RPT_B()	ChkL1ClsFltr_EL1_TX_PUBLIC_el1_trace_1_H()
#define ChkL1MsgFltr_EL1TX_LOG_TX_COMMON_RPT()	ChkL1ClsFltr_EL1_TX_PUBLIC_el1_trace_1_H()
#define ChkL1MsgFltr_EL1TX_LOG_PUSCH_PRB_RPT()	ChkL1ClsFltr_EL1_TX_PUBLIC_el1_trace_1_H()
#define ChkL1MsgFltr_EL1TX_LOG_ACQI_INFO_RPT()	ChkL1ClsFltr_EL1_TX_PUBLIC_el1_trace_1_H()
#define ChkL1MsgFltr_EL1TX_LOG_ACQI_1_2_WB_RPT()	ChkL1ClsFltr_EL1_TX_PUBLIC_el1_trace_1_H()
#define ChkL1MsgFltr_EL1TX_LOG_ACQI_1_2_PMI_RPT()	ChkL1ClsFltr_EL1_TX_PUBLIC_el1_trace_1_H()
#define ChkL1MsgFltr_EL1TX_LOG_ACQI_2_2_WB_RPT()	ChkL1ClsFltr_EL1_TX_PUBLIC_el1_trace_1_H()
#define ChkL1MsgFltr_EL1TX_LOG_ACQI_2_2_UE_M_RPT()	ChkL1ClsFltr_EL1_TX_PUBLIC_el1_trace_1_H()
#define ChkL1MsgFltr_EL1TX_LOG_ACQI_3_1_WB_RPT()	ChkL1ClsFltr_EL1_TX_PUBLIC_el1_trace_1_H()
#define ChkL1MsgFltr_EL1TX_LOG_ACQI_3_1_SB_RPT()	ChkL1ClsFltr_EL1_TX_PUBLIC_el1_trace_1_H()
#define ChkL1MsgFltr_EL1TX_LOG_PCQI_DATA_RPT()	ChkL1ClsFltr_EL1_TX_PUBLIC_el1_trace_1_H()
#define ChkL1MsgFltr_EL1TX_LOG_PCQI_INFO_RPT()	ChkL1ClsFltr_EL1_TX_PUBLIC_el1_trace_1_H()
#define ChkL1MsgFltr_EL1TX_LOG_PCQI_INFO_RPT_COMB()	ChkL1ClsFltr_EL1_TX_PUBLIC_el1_trace_1_H()
#define ChkL1MsgFltr_EL1TX_LOG_PCQI_WB_RPT()	ChkL1ClsFltr_EL1_TX_PUBLIC_el1_trace_1_H()
#define ChkL1MsgFltr_EL1TX_LOG_PCQI_SB_RPT()	ChkL1ClsFltr_EL1_TX_PUBLIC_el1_trace_1_H()
#define ChkL1MsgFltr_EL1TX_LOG_RT_CMD_PL_PWR()	ChkL1ClsFltr_EL1_TX_PUBLIC_el1_trace_1_H()
#define ChkL1MsgFltr_EL1TX_LOG_RT_CMD_PUSCH_SCALE()	ChkL1ClsFltr_EL1_TX_PUBLIC_el1_trace_1_H()
#define ChkL1MsgFltr_EL1TX_LOG_RT_CMD_PUSCH_PWR0()	ChkL1ClsFltr_EL1_TX_PUBLIC_el1_trace_1_H()
#define ChkL1MsgFltr_EL1TX_LOG_RT_CMD_PUSCH_PWR1()	ChkL1ClsFltr_EL1_TX_PUBLIC_el1_trace_1_H()
#define ChkL1MsgFltr_EL1TX_LOG_RT_CMD_PUSCH_PWR1_noinj()	ChkL1ClsFltr_EL1_TX_PUBLIC_el1_trace_1_H()
#define ChkL1MsgFltr_EL1TX_LOG_RT_CMD_PUCCH_PWR0()	ChkL1ClsFltr_EL1_TX_PUBLIC_el1_trace_1_H()
#define ChkL1MsgFltr_EL1TX_LOG_RT_CMD_PUCCH_PWR1()	ChkL1ClsFltr_EL1_TX_PUBLIC_el1_trace_1_H()
#define ChkL1MsgFltr_EL1TX_LOG_RT_CMD_PRACH_PWR()	ChkL1ClsFltr_EL1_TX_PUBLIC_el1_trace_1_H()
#define ChkL1MsgFltr_EL1TX_LOG_RT_CMD_SRS_PWR0()	ChkL1ClsFltr_EL1_TX_PUBLIC_el1_trace_1_H()
#define ChkL1MsgFltr_EL1TX_LOG_RT_CMD_ONE_PWR2_PUCCH()	ChkL1ClsFltr_EL1_TX_PUBLIC_el1_trace_1_H()
#define ChkL1MsgFltr_EL1TX_LOG_RT_CMD_ONE_PWR2_PUSCH()	ChkL1ClsFltr_EL1_TX_PUBLIC_el1_trace_1_H()
#define ChkL1MsgFltr_EL1TX_LOG_RT_CMD_ONE_PWR2_SRS()	ChkL1ClsFltr_EL1_TX_PUBLIC_el1_trace_1_H()
#define ChkL1MsgFltr_EL1TX_LOG_RT_CMD_TWO_PWR2()	ChkL1ClsFltr_EL1_TX_PUBLIC_el1_trace_1_H()
#define ChkL1MsgFltr_EL1TX_LOG_RT_CMD_THREE_PWR2()	ChkL1ClsFltr_EL1_TX_PUBLIC_el1_trace_1_H()
#define ChkL1MsgFltr_EL1TX_LOG_TPC_PHR_RPT()	ChkL1ClsFltr_EL1_TX_PUBLIC_el1_trace_1_H()
#define ChkL1MsgFltr_EL1TX_LOG_RT_CMD_ONE_PWR2_PUCCH_noinj()	ChkL1ClsFltr_EL1_TX_PUBLIC_el1_trace_1_H()
#define ChkL1MsgFltr_EL1TX_LOG_RT_CMD_ONE_PWR2_PUSCH_noinj()	ChkL1ClsFltr_EL1_TX_PUBLIC_el1_trace_1_H()
#define ChkL1MsgFltr_EL1TX_LOG_RT_CMD_ONE_PWR2_SRS_noinj()	ChkL1ClsFltr_EL1_TX_PUBLIC_el1_trace_1_H()


#endif
