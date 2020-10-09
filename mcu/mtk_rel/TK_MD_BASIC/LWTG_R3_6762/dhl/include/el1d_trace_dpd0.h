#ifndef L1TRC_EL1D_DPD0_DEF_H
#define L1TRC_EL1D_DPD0_DEF_H

/******************************/
/* String category definition */
/******************************/
#define EL1D_TRC_STR_DPD_FAC_DBG_MSG_TYPE(v1)  (unsigned char)(v1+0)
#define EL1D_TRC_STR_DPD_FAC_CIM3_GET_SET_TYPE(v1)  (unsigned char)(v1+20)
#define EL1D_TRC_STR_DPD_FAC_DPD_GET_SET_TYPE(v1)  (unsigned char)(v1+22)
#define EL1D_TRC_STR_DPD_FAC_PA_GET_SET_TYPE(v1)  (unsigned char)(v1+26)
#define EL1D_TRC_STR_DPD_FAC_TIME_PROFILE(v1)  (unsigned char)(v1+28)
#define EL1D_TRC_STR_DPD_OTFC_CMIF_HANDSHAKE_ENTRY_EYPE(v1)  (unsigned char)(v1+32)
#define EL1D_TRC_STR_DPD_OTFC_CMIF_MEAS_STATE_E(v1)  (unsigned char)(v1+34)
#define EL1D_TRC_STR_DPD_OTFC_LISR_STATE(v1)  (unsigned char)(v1+39)
#define EL1D_TRC_STR_DPD_OTFC_CMIF_ABORT_STATE(v1)  (unsigned char)(v1+43)
#define EL1D_TRC_STR_DPD_OTFC_WRITE_BUFFER_STATE(v1)  (unsigned char)(v1+46)
#define EL1D_TRC_STR_DPD_OTFC_DBG_MSG_TYPE(v1)  (unsigned char)(v1+50)
#define EL1D_TRC_STR_DPD_LTE_TX_BANDS(v1)  (unsigned char)(v1+58)
#define EL1D_TRC_STR_DPD_LTE_TX_CBW(v1)  (unsigned char)(v1+103)
#define EL1D_TRC_STR_DPD_TXDFE(v1)  (unsigned char)(v1+109)
#define EL1D_TRC_STR_DPD_OTFC_DBG_AMPM(v1)  (unsigned char)(v1+112)
#define DPD_FOR_TPC_STARTREQUEST_ENTRY(v1)  (unsigned char)(v1+118)
#define EL1D_TRC_DPD_TPC_DBG_MSG_TYPE(v1)  (unsigned char)(v1+121)
#define EL1D_TRC_DPD_BYPASS_DPD_NS_INFO_TYPE(v1)  (unsigned char)(v1+125)
#define EL1D_TRC_DPD_NORMAL_MISC_TYPE(v1)  (unsigned char)(v1+128)


/****************************/
/* Message macro definition */
/****************************/
#include "L1Trc.h"
#if defined(L1_CATCHER)
	#define EL1D_TRC_DPD_FAC_DBG_MSG0(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0050,0x0050);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1D_TRC_DPD_FAC_DBG_MSG0(v1)
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_DPD_FAC_DBG_MSG1(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0150,0x0150);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1D_TRC_DPD_FAC_DBG_MSG1(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_DPD_FAC_DBG_MSG2(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0250,0x0250);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1D_TRC_DPD_FAC_DBG_MSG2(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_DPD_FAC_DBG_MSG3(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0350,0x0350);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1D_TRC_DPD_FAC_DBG_MSG3(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_DPD_FAC_DBG_MSG4(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x01);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0450,0x0450);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1D_TRC_DPD_FAC_DBG_MSG4(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_DPD_OTFC_DBG_MSG0(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0550,0x0550);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define EL1D_TRC_DPD_OTFC_DBG_MSG0(v1)
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_DPD_OTFC_DBG_MSG1(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0650,0x0650);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define EL1D_TRC_DPD_OTFC_DBG_MSG1(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_DPD_OTFC_DBG_MSG2(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0750,0x0750);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define EL1D_TRC_DPD_OTFC_DBG_MSG2(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_DPD_OTFC_DBG_MSG3(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0850,0x0850);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define EL1D_TRC_DPD_OTFC_DBG_MSG3(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_DPD_OTFC_DBG_MSG4(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x08);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0950,0x0950);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define EL1D_TRC_DPD_OTFC_DBG_MSG4(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_DPD_FAC_BAND_ROUTE_LOOP1(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0A50,0x0A50);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1D_TRC_DPD_FAC_BAND_ROUTE_LOOP1(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EL1D_TRC_DPD_FAC_BAND_ROUTE_LOOP2(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x04);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0B50,0x0B50);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define EL1D_TRC_DPD_FAC_BAND_ROUTE_LOOP2(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_DPD_FAC_SUBBAND_LOOP(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0C50,0x0C50);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1D_TRC_DPD_FAC_SUBBAND_LOOP(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_DPD_FAC_DPD_START_ENTER(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0D50,0x0D50);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1D_TRC_DPD_FAC_DPD_START_ENTER(v1)
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_DPD_FAC_DPD_START_LEAVE(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0E50,0x0E50);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1D_TRC_DPD_FAC_DPD_START_LEAVE(v1)
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_DPD_FAC_DPD_GET_ENTER(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0F50,0x0F50);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1D_TRC_DPD_FAC_DPD_GET_ENTER(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_DPD_FAC_DPD_GET_LEAVE(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1050,0x1050);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1D_TRC_DPD_FAC_DPD_GET_LEAVE(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_DPD_FAC_DPD_SET_ENTER(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1150,0x1150);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1D_TRC_DPD_FAC_DPD_SET_ENTER(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_DPD_FAC_DPD_SET_LEAVE(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1250,0x1250);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1D_TRC_DPD_FAC_DPD_SET_LEAVE(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_DPD_FAC_PARAM(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x01);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1350,0x1350);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1D_TRC_DPD_FAC_PARAM(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_DPD_FAC_TPC_PARAM(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x01);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1450,0x1450);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v7,v7);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v8,v8);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v9,v9);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v10,v10);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v11,v11);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1D_TRC_DPD_FAC_TPC_PARAM(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EL1D_TRC_DPD_FAC_PGA_SRCH(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1550,0x1550);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define EL1D_TRC_DPD_FAC_PGA_SRCH(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EL1D_TRC_DPD_FAC_SW_MODE(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1650,0x1650);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define EL1D_TRC_DPD_FAC_SW_MODE(v1)
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_DPD_FAC_ASSERT_LOOP(v1, v2, v3, v4, v5, v6) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x01);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1750,0x1750);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1D_TRC_DPD_FAC_ASSERT_LOOP(v1, v2, v3, v4, v5, v6)
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_DPD_FAC_PA_ASSERT_LIMIT(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x01);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1850,0x1850);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1D_TRC_DPD_FAC_PA_ASSERT_LIMIT(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_DPD_FAC_CIM3_START_ENTER(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1950,0x1950);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1D_TRC_DPD_FAC_CIM3_START_ENTER(v1)
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_DPD_FAC_CIM3_START_LEAVE(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1A50,0x1A50);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1D_TRC_DPD_FAC_CIM3_START_LEAVE(v1)
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_DPD_FAC_CIM3_GET_ENTER(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1B50,0x1B50);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1D_TRC_DPD_FAC_CIM3_GET_ENTER(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_DPD_FAC_CIM3_GET_LEAVE(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1C50,0x1C50);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1D_TRC_DPD_FAC_CIM3_GET_LEAVE(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_DPD_FAC_CIM3_SET_ENTER(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1D50,0x1D50);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1D_TRC_DPD_FAC_CIM3_SET_ENTER(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_DPD_FAC_CIM3_SET_LEAVE(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1E50,0x1E50);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1D_TRC_DPD_FAC_CIM3_SET_LEAVE(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_DPD_FAC_PA_START_ENTER(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1F50,0x1F50);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1D_TRC_DPD_FAC_PA_START_ENTER(v1)
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_DPD_FAC_PA_START_LEAVE(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x2050,0x2050);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1D_TRC_DPD_FAC_PA_START_LEAVE(v1)
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_DPD_FAC_PA_GET_ENTER(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x2150,0x2150);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1D_TRC_DPD_FAC_PA_GET_ENTER(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_DPD_FAC_PA_GET_LEAVE(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x2250,0x2250);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1D_TRC_DPD_FAC_PA_GET_LEAVE(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_DPD_FAC_PA_SET_ENTER(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x2350,0x2350);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1D_TRC_DPD_FAC_PA_SET_ENTER(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_DPD_FAC_PA_SET_LEAVE(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x2450,0x2450);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1D_TRC_DPD_FAC_PA_SET_LEAVE(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_DPD_CIM3_GET_LUT_CONFIG_ENTER(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x2550,0x2550);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1D_TRC_DPD_CIM3_GET_LUT_CONFIG_ENTER(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_DPD_CIM3_GET_LUT_CONFIG_LEAVE(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x2650,0x2650);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1D_TRC_DPD_CIM3_GET_LUT_CONFIG_LEAVE(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_DPD_SWITCH_ENTER(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x2750,0x2750);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1D_TRC_DPD_SWITCH_ENTER(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_CIM3_SWITCH_ENTER(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x2850,0x2850);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1D_TRC_CIM3_SWITCH_ENTER(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_DPD_FAC_SF_TICK_RF_FEC_CTRL_ENTER(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x2950,0x2950);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1D_TRC_DPD_FAC_SF_TICK_RF_FEC_CTRL_ENTER(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_DPD_FAC_TAR_TIME_WAIT(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x2A50,0x2A50);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1D_TRC_DPD_FAC_TAR_TIME_WAIT(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_DPD_FAC_GAIN_CTRL() do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x01);\
			TRC_START_FILL_L1();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L1(0x2B50,0x2B50);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1D_TRC_DPD_FAC_GAIN_CTRL()
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_DPD_OTFC_NRT(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x2C50,0x2C50);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define EL1D_TRC_DPD_OTFC_NRT(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_DPD_CIM3_OTFC_GDMA_HISR_ENTER(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x2D50,0x2D50);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define EL1D_TRC_DPD_CIM3_OTFC_GDMA_HISR_ENTER(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_DPD_CIM3_OTFC_GDMA_HISR_LEAVE(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x2E50,0x2E50);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define EL1D_TRC_DPD_CIM3_OTFC_GDMA_HISR_LEAVE(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_DPD_OTFC_COMP_EN() do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x08);\
			TRC_START_FILL_L1();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L1(0x2F50,0x2F50);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define EL1D_TRC_DPD_OTFC_COMP_EN()
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_CIM3_OTFC_COMP_EN() do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x08);\
			TRC_START_FILL_L1();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L1(0x3050,0x3050);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define EL1D_TRC_CIM3_OTFC_COMP_EN()
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_DPD_OTFC_SRAM_CONFLICT(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x3150,0x3150);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define EL1D_TRC_DPD_OTFC_SRAM_CONFLICT(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_DPD_OTFC_ENTER_CMIF_HANDSHAKE(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x3250,0x3250);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define EL1D_TRC_DPD_OTFC_ENTER_CMIF_HANDSHAKE(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_DPD_OTFC_LEAVE_CMIF_HANDSHAKE(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x3350,0x3350);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define EL1D_TRC_DPD_OTFC_LEAVE_CMIF_HANDSHAKE(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_DPD_OTFC_SEND_DPD_LUT_TO_FEC(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x3450,0x3450);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define EL1D_TRC_DPD_OTFC_SEND_DPD_LUT_TO_FEC(v1)
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_DPD_OTFC_ISSUE_LISR(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x3550,0x3550);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define EL1D_TRC_DPD_OTFC_ISSUE_LISR(v1)
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_DPD_OTFC_TX_SHARE_CH_OFF() do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x08);\
			TRC_START_FILL_L1();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L1(0x3650,0x3650);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define EL1D_TRC_DPD_OTFC_TX_SHARE_CH_OFF()
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_DPD_OTFC_COPY_CMIF_RESULT() do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x08);\
			TRC_START_FILL_L1();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L1(0x3750,0x3750);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define EL1D_TRC_DPD_OTFC_COPY_CMIF_RESULT()
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_DPD_OTFC_AM_ACTIVE_BUF(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x3850,0x3850);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define EL1D_TRC_DPD_OTFC_AM_ACTIVE_BUF(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_DPD_OTFC_PM_ACTIVE_BUF(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x3950,0x3950);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define EL1D_TRC_DPD_OTFC_PM_ACTIVE_BUF(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_DPD_OTFC_AM_RESULT(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x3A50,0x3A50);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define EL1D_TRC_DPD_OTFC_AM_RESULT(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_DPD_OTFC_PM_RESULT(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x3B50,0x3B50);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define EL1D_TRC_DPD_OTFC_PM_RESULT(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_DPD_OTFC_LISR_UPDATE_SRAM() do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x08);\
			TRC_START_FILL_L1();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L1(0x3C50,0x3C50);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define EL1D_TRC_DPD_OTFC_LISR_UPDATE_SRAM()
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_DPD_OTFC_LISR_NO_UPDATE_SRAM() do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x08);\
			TRC_START_FILL_L1();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L1(0x3D50,0x3D50);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define EL1D_TRC_DPD_OTFC_LISR_NO_UPDATE_SRAM()
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_DPD_OTFC_EXCEED_MAX_SUBFRAME(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x3E50,0x3E50);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define EL1D_TRC_DPD_OTFC_EXCEED_MAX_SUBFRAME(v1)
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_DPD_OTFC_HW_LUT_IDX(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x3F50,0x3F50);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define EL1D_TRC_DPD_OTFC_HW_LUT_IDX(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_DPD_OTFC_AM_PM_UPDATE_EN(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x4050,0x4050);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define EL1D_TRC_DPD_OTFC_AM_PM_UPDATE_EN(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_DPD_OTFC_UPDATE_SHARE_MEMORY() do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x08);\
			TRC_START_FILL_L1();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L1(0x4150,0x4150);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define EL1D_TRC_DPD_OTFC_UPDATE_SHARE_MEMORY()
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_DPD_OTFC_ABORT_DSP() do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x08);\
			TRC_START_FILL_L1();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L1(0x4250,0x4250);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define EL1D_TRC_DPD_OTFC_ABORT_DSP()
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_DPD_OTFC_COMP_EN_AM_OR_PM_DISABLE(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x4350,0x4350);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define EL1D_TRC_DPD_OTFC_COMP_EN_AM_OR_PM_DISABLE(v1)
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_DPD_OTFC_BYPASS_DUETO_BAD_TDE() do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x08);\
			TRC_START_FILL_L1();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L1(0x4450,0x4450);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define EL1D_TRC_DPD_OTFC_BYPASS_DUETO_BAD_TDE()
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_DPD_OTFC_TEMPERATURE(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x4550,0x4550);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define EL1D_TRC_DPD_OTFC_TEMPERATURE(v1)
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_DPD_OTFC_FORCE_TO_APT(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x4650,0x4650);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define EL1D_TRC_DPD_OTFC_FORCE_TO_APT(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_DPD_OTFC_TR_DELAY_SELECT(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x4750,0x4750);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define EL1D_TRC_DPD_OTFC_TR_DELAY_SELECT(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_DPD_OTFC_NORMAL_MODE(v1, v2, v3, v4, v5, v6) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x08);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x4850,0x4850);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define EL1D_TRC_DPD_OTFC_NORMAL_MODE(v1, v2, v3, v4, v5, v6)
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_DPD_OTFC_TEST() do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x08);\
			TRC_START_FILL_L1();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L1(0x4950,0x4950);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define EL1D_TRC_DPD_OTFC_TEST()
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_DPD_OTFC_AMACTIVE_BUF(v1, v2, v3, v4, v5, v6, v7) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x08);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x4A50,0x4A50);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v7,v7);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define EL1D_TRC_DPD_OTFC_AMACTIVE_BUF(v1, v2, v3, v4, v5, v6, v7)
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_DPD_OTFC_PMACTIVE_BUF(v1, v2, v3, v4, v5, v6, v7) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x08);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x4B50,0x4B50);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v7,v7);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define EL1D_TRC_DPD_OTFC_PMACTIVE_BUF(v1, v2, v3, v4, v5, v6, v7)
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_DPD_OTFC_NRT_UPDATE(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x4C50,0x4C50);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define EL1D_TRC_DPD_OTFC_NRT_UPDATE(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_DPD_OTFC_NRT_UPDATE_1(v1, v2, v3, v4, v5, v6, v7, v8) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x08);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x4D50,0x4D50);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v7,v7);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v8,v8);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define EL1D_TRC_DPD_OTFC_NRT_UPDATE_1(v1, v2, v3, v4, v5, v6, v7, v8)
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_DPD_OTFC_NRT_UPDATE_2(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x4E50,0x4E50);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define EL1D_TRC_DPD_OTFC_NRT_UPDATE_2(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_DPD_OTFC_NRT_UPDATE_3(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x4F50,0x4F50);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define EL1D_TRC_DPD_OTFC_NRT_UPDATE_3(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_DPD_OTFC_NRT_UPDATE_4(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x5050,0x5050);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define EL1D_TRC_DPD_OTFC_NRT_UPDATE_4(v1)
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_DPD_OTFC_NRT_PATH(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x5150,0x5150);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define EL1D_TRC_DPD_OTFC_NRT_PATH(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_DPD_OTFC_INFO_0(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x5250,0x5250);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define EL1D_TRC_DPD_OTFC_INFO_0(v1)
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_DPD_OTFC_INFO_1(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x5350,0x5350);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define EL1D_TRC_DPD_OTFC_INFO_1(v1)
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_DPD_OTFC_INFO_3(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x5450,0x5450);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define EL1D_TRC_DPD_OTFC_INFO_3(v1)
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_DPD_OTFC_INFO_4(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x5550,0x5550);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define EL1D_TRC_DPD_OTFC_INFO_4(v1)
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_DPD_OTFC_INFO_5(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x5650,0x5650);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define EL1D_TRC_DPD_OTFC_INFO_5(v1)
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_DPD_OTFC_INFO_6(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x5750,0x5750);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define EL1D_TRC_DPD_OTFC_INFO_6(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_DPD_OTFC_INFO_7(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x5850,0x5850);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define EL1D_TRC_DPD_OTFC_INFO_7(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_DPD_OTFC_INFO_8(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x5950,0x5950);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define EL1D_TRC_DPD_OTFC_INFO_8(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EL1D_TRC_DPD_OTFC_INFO_9(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x20);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x5A50,0x5A50);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x20);\
		}\
	} while(0)
#else
	#define EL1D_TRC_DPD_OTFC_INFO_9(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define EL1D_TRC_DPD_OTFC_INFO_10() do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x10);\
			TRC_START_FILL_L1();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L1(0x5B50,0x5B50);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x10);\
		}\
	} while(0)
#else
	#define EL1D_TRC_DPD_OTFC_INFO_10()
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EL1D_TRC_DPD_OTFC_INFO_11() do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x20);\
			TRC_START_FILL_L1();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L1(0x5C50,0x5C50);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x20);\
		}\
	} while(0)
#else
	#define EL1D_TRC_DPD_OTFC_INFO_11()
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EL1D_TRC_DPD_OTFC_INFO_12() do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x20);\
			TRC_START_FILL_L1();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L1(0x5D50,0x5D50);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x20);\
		}\
	} while(0)
#else
	#define EL1D_TRC_DPD_OTFC_INFO_12()
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define EL1D_TRC_DPD_OTFC_INFO_14(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x5E50,0x5E50);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x10);\
		}\
	} while(0)
#else
	#define EL1D_TRC_DPD_OTFC_INFO_14(v1)
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_DPD_OTFC_INFO_16(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x5F50,0x5F50);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define EL1D_TRC_DPD_OTFC_INFO_16(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_DPD_OTFC_INFO_17(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x6050,0x6050);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define EL1D_TRC_DPD_OTFC_INFO_17(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_DPD_OTFC_INFO_18(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x6150,0x6150);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define EL1D_TRC_DPD_OTFC_INFO_18(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_DPD_OTFC_INFO_19(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x6250,0x6250);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define EL1D_TRC_DPD_OTFC_INFO_19(v1)
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_DPD_OTFC_INFO_20(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x6350,0x6350);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define EL1D_TRC_DPD_OTFC_INFO_20(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define EL1D_TRC_DPD_OTFC_INFO_24(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x6450,0x6450);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x10);\
		}\
	} while(0)
#else
	#define EL1D_TRC_DPD_OTFC_INFO_24(v1)
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_DPD_OTFC_INFO_25(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x6550,0x6550);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define EL1D_TRC_DPD_OTFC_INFO_25(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define EL1D_TRC_DPD_OTFC_AM_CR2_TO_FEC(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x6650,0x6650);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x10);\
		}\
	} while(0)
#else
	#define EL1D_TRC_DPD_OTFC_AM_CR2_TO_FEC(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_DPD_OTFC_PACKET_CONDITION(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x6750,0x6750);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define EL1D_TRC_DPD_OTFC_PACKET_CONDITION(v1)
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_DPD_OTFC_NRT_HISR_INFO_0(v1, v2, v3, v4, v5, v6, v7) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x08);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x6850,0x6850);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v7,v7);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define EL1D_TRC_DPD_OTFC_NRT_HISR_INFO_0(v1, v2, v3, v4, v5, v6, v7)
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_DPD_OTFC_NRT_HISR_INFO_1(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x6950,0x6950);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define EL1D_TRC_DPD_OTFC_NRT_HISR_INFO_1(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_DPD_OTFC_NRT_HISR_INFO_4(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x6A50,0x6A50);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define EL1D_TRC_DPD_OTFC_NRT_HISR_INFO_4(v1)
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_DPD_OTFC_NRT_HISR_INFO_5(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x6B50,0x6B50);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define EL1D_TRC_DPD_OTFC_NRT_HISR_INFO_5(v1)
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_DPD_OTFC_NRT_HISR_INFO_6(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x6C50,0x6C50);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define EL1D_TRC_DPD_OTFC_NRT_HISR_INFO_6(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_DPD_OTFC_NRT_HISR_INFO_7(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x6D50,0x6D50);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define EL1D_TRC_DPD_OTFC_NRT_HISR_INFO_7(v1)
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_DPD_OTFC_Restore(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x6E50,0x6E50);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define EL1D_TRC_DPD_OTFC_Restore(v1)
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_DPD_OTFC_RFCC_UPDATE(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x6F50,0x6F50);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define EL1D_TRC_DPD_OTFC_RFCC_UPDATE(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_DPD_OTFC_AM_OBSERVER(v1, v2, v3, v4, v5, v6) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x08);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x7050,0x7050);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define EL1D_TRC_DPD_OTFC_AM_OBSERVER(v1, v2, v3, v4, v5, v6)
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_DPD_OTFC_PM_OBSERVER(v1, v2, v3, v4, v5, v6) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x08);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x7150,0x7150);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define EL1D_TRC_DPD_OTFC_PM_OBSERVER(v1, v2, v3, v4, v5, v6)
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_DPD_OTFC_NRT_TPC_StartRequest(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x7250,0x7250);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define EL1D_TRC_DPD_OTFC_NRT_TPC_StartRequest(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_DPD_DBG_ACT_BUFF_OBSERVER(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x7350,0x7350);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define EL1D_TRC_DPD_DBG_ACT_BUFF_OBSERVER(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_DPD_OTFC_DBG_TPC_CON(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x7450,0x7450);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define EL1D_TRC_DPD_OTFC_DBG_TPC_CON(v1)
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_DPD_OTFC_ENTER_NSFT() do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x08);\
			TRC_START_FILL_L1();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L1(0x7550,0x7550);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define EL1D_TRC_DPD_OTFC_ENTER_NSFT()
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_DPD_OTFC_LEAVE_NSFT() do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x08);\
			TRC_START_FILL_L1();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L1(0x7650,0x7650);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define EL1D_TRC_DPD_OTFC_LEAVE_NSFT()
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EL1D_TRC_DPD_TPC_PTAR(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x20);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x7750,0x7750);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x20);\
		}\
	} while(0)
#else
	#define EL1D_TRC_DPD_TPC_PTAR(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_DPD_OTFC_LCHPUE_BAND(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x7850,0x7850);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define EL1D_TRC_DPD_OTFC_LCHPUE_BAND(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_DPD_OTFC_HPUE_INFO(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x7950,0x7950);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define EL1D_TRC_DPD_OTFC_HPUE_INFO(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EL1D_TRC_DPD_DELAY_GD_RESULT_DEC(v1, v2, v3, v4, v5, v6) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x04);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x7A50,0x7A50);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define EL1D_TRC_DPD_DELAY_GD_RESULT_DEC(v1, v2, v3, v4, v5, v6)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EL1D_TRC_DPD_DELAY_GD_SEARCH_RESULT(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x04);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x7B50,0x7B50);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v7,v7);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v8,v8);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v9,v9);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v10,v10);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define EL1D_TRC_DPD_DELAY_GD_SEARCH_RESULT(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EL1D_TRC_DPD_DELAY_GD_SEARCH_UPDATE(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x7C50,0x7C50);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define EL1D_TRC_DPD_DELAY_GD_SEARCH_UPDATE(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EL1D_TRC_DPD_DELAY_GD_STATUS(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x7D50,0x7D50);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define EL1D_TRC_DPD_DELAY_GD_STATUS(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EL1D_TRC_DPD_DELAY_GD_WAIT_LENGTH(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x7E50,0x7E50);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_DPD0_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define EL1D_TRC_DPD_DELAY_GD_WAIT_LENGTH(v1, v2, v3)
#endif



/*******************************/
/* declaration of filter array */
/*******************************/
EXTERN_TMD_FILTER(unsigned char, EL1D_DPD0_Trace_Filter, 5);
/*************************/
/* Function declarations */
/*************************/
#ifdef L1_CATCHER

void Set_EL1D_DPD0_Filter(unsigned char *setting);

#endif

/************************************/
/* Filter checking API declarations */
/************************************/

#define ChkL1ModFltr_EL1D_DPD0()	(FILTER_CHECK(EL1D_DPD0_Trace_Filter, 0, 1))
#define ChkL1ClsFltr_EL1D_DPD0_EL1D_TRC_CLS_DPD_FAC_MAIN_H()	(ChkL1ModFltr_EL1D_DPD0()&&(FILTER_CHECK(EL1D_DPD0_Trace_Filter, 1, 0x01)))
#define ChkL1ClsFltr_EL1D_DPD0_EL1D_TRC_CLS_DPD_FAC_MAIN_M()	(ChkL1ModFltr_EL1D_DPD0()&&(FILTER_CHECK(EL1D_DPD0_Trace_Filter, 1, 0x02)))
#define ChkL1ClsFltr_EL1D_DPD0_EL1D_TRC_CLS_DPD_FAC_MAIN_L()	(ChkL1ModFltr_EL1D_DPD0()&&(FILTER_CHECK(EL1D_DPD0_Trace_Filter, 1, 0x04)))
#define ChkL1ClsFltr_EL1D_DPD0_EL1D_TRC_CLS_DPD_OTFC_MAIN_H()	(ChkL1ModFltr_EL1D_DPD0()&&(FILTER_CHECK(EL1D_DPD0_Trace_Filter, 1, 0x08)))
#define ChkL1ClsFltr_EL1D_DPD0_EL1D_TRC_CLS_DPD_OTFC_MAIN_M()	(ChkL1ModFltr_EL1D_DPD0()&&(FILTER_CHECK(EL1D_DPD0_Trace_Filter, 1, 0x10)))
#define ChkL1ClsFltr_EL1D_DPD0_EL1D_TRC_CLS_DPD_OTFC_MAIN_L()	(ChkL1ModFltr_EL1D_DPD0()&&(FILTER_CHECK(EL1D_DPD0_Trace_Filter, 1, 0x20)))
#define ChkL1MsgFltr_EL1D_TRC_DPD_FAC_DBG_MSG0()	ChkL1ClsFltr_EL1D_DPD0_EL1D_TRC_CLS_DPD_FAC_MAIN_H()
#define ChkL1MsgFltr_EL1D_TRC_DPD_FAC_DBG_MSG1()	ChkL1ClsFltr_EL1D_DPD0_EL1D_TRC_CLS_DPD_FAC_MAIN_H()
#define ChkL1MsgFltr_EL1D_TRC_DPD_FAC_DBG_MSG2()	ChkL1ClsFltr_EL1D_DPD0_EL1D_TRC_CLS_DPD_FAC_MAIN_H()
#define ChkL1MsgFltr_EL1D_TRC_DPD_FAC_DBG_MSG3()	ChkL1ClsFltr_EL1D_DPD0_EL1D_TRC_CLS_DPD_FAC_MAIN_H()
#define ChkL1MsgFltr_EL1D_TRC_DPD_FAC_DBG_MSG4()	ChkL1ClsFltr_EL1D_DPD0_EL1D_TRC_CLS_DPD_FAC_MAIN_H()
#define ChkL1MsgFltr_EL1D_TRC_DPD_OTFC_DBG_MSG0()	ChkL1ClsFltr_EL1D_DPD0_EL1D_TRC_CLS_DPD_OTFC_MAIN_H()
#define ChkL1MsgFltr_EL1D_TRC_DPD_OTFC_DBG_MSG1()	ChkL1ClsFltr_EL1D_DPD0_EL1D_TRC_CLS_DPD_OTFC_MAIN_H()
#define ChkL1MsgFltr_EL1D_TRC_DPD_OTFC_DBG_MSG2()	ChkL1ClsFltr_EL1D_DPD0_EL1D_TRC_CLS_DPD_OTFC_MAIN_H()
#define ChkL1MsgFltr_EL1D_TRC_DPD_OTFC_DBG_MSG3()	ChkL1ClsFltr_EL1D_DPD0_EL1D_TRC_CLS_DPD_OTFC_MAIN_H()
#define ChkL1MsgFltr_EL1D_TRC_DPD_OTFC_DBG_MSG4()	ChkL1ClsFltr_EL1D_DPD0_EL1D_TRC_CLS_DPD_OTFC_MAIN_H()
#define ChkL1MsgFltr_EL1D_TRC_DPD_FAC_BAND_ROUTE_LOOP1()	ChkL1ClsFltr_EL1D_DPD0_EL1D_TRC_CLS_DPD_FAC_MAIN_H()
#define ChkL1MsgFltr_EL1D_TRC_DPD_FAC_BAND_ROUTE_LOOP2()	ChkL1ClsFltr_EL1D_DPD0_EL1D_TRC_CLS_DPD_FAC_MAIN_L()
#define ChkL1MsgFltr_EL1D_TRC_DPD_FAC_SUBBAND_LOOP()	ChkL1ClsFltr_EL1D_DPD0_EL1D_TRC_CLS_DPD_FAC_MAIN_H()
#define ChkL1MsgFltr_EL1D_TRC_DPD_FAC_DPD_START_ENTER()	ChkL1ClsFltr_EL1D_DPD0_EL1D_TRC_CLS_DPD_FAC_MAIN_H()
#define ChkL1MsgFltr_EL1D_TRC_DPD_FAC_DPD_START_LEAVE()	ChkL1ClsFltr_EL1D_DPD0_EL1D_TRC_CLS_DPD_FAC_MAIN_H()
#define ChkL1MsgFltr_EL1D_TRC_DPD_FAC_DPD_GET_ENTER()	ChkL1ClsFltr_EL1D_DPD0_EL1D_TRC_CLS_DPD_FAC_MAIN_H()
#define ChkL1MsgFltr_EL1D_TRC_DPD_FAC_DPD_GET_LEAVE()	ChkL1ClsFltr_EL1D_DPD0_EL1D_TRC_CLS_DPD_FAC_MAIN_H()
#define ChkL1MsgFltr_EL1D_TRC_DPD_FAC_DPD_SET_ENTER()	ChkL1ClsFltr_EL1D_DPD0_EL1D_TRC_CLS_DPD_FAC_MAIN_H()
#define ChkL1MsgFltr_EL1D_TRC_DPD_FAC_DPD_SET_LEAVE()	ChkL1ClsFltr_EL1D_DPD0_EL1D_TRC_CLS_DPD_FAC_MAIN_H()
#define ChkL1MsgFltr_EL1D_TRC_DPD_FAC_PARAM()	ChkL1ClsFltr_EL1D_DPD0_EL1D_TRC_CLS_DPD_FAC_MAIN_H()
#define ChkL1MsgFltr_EL1D_TRC_DPD_FAC_TPC_PARAM()	ChkL1ClsFltr_EL1D_DPD0_EL1D_TRC_CLS_DPD_FAC_MAIN_H()
#define ChkL1MsgFltr_EL1D_TRC_DPD_FAC_PGA_SRCH()	ChkL1ClsFltr_EL1D_DPD0_EL1D_TRC_CLS_DPD_FAC_MAIN_L()
#define ChkL1MsgFltr_EL1D_TRC_DPD_FAC_SW_MODE()	ChkL1ClsFltr_EL1D_DPD0_EL1D_TRC_CLS_DPD_FAC_MAIN_L()
#define ChkL1MsgFltr_EL1D_TRC_DPD_FAC_ASSERT_LOOP()	ChkL1ClsFltr_EL1D_DPD0_EL1D_TRC_CLS_DPD_FAC_MAIN_H()
#define ChkL1MsgFltr_EL1D_TRC_DPD_FAC_PA_ASSERT_LIMIT()	ChkL1ClsFltr_EL1D_DPD0_EL1D_TRC_CLS_DPD_FAC_MAIN_H()
#define ChkL1MsgFltr_EL1D_TRC_DPD_FAC_CIM3_START_ENTER()	ChkL1ClsFltr_EL1D_DPD0_EL1D_TRC_CLS_DPD_FAC_MAIN_H()
#define ChkL1MsgFltr_EL1D_TRC_DPD_FAC_CIM3_START_LEAVE()	ChkL1ClsFltr_EL1D_DPD0_EL1D_TRC_CLS_DPD_FAC_MAIN_H()
#define ChkL1MsgFltr_EL1D_TRC_DPD_FAC_CIM3_GET_ENTER()	ChkL1ClsFltr_EL1D_DPD0_EL1D_TRC_CLS_DPD_FAC_MAIN_H()
#define ChkL1MsgFltr_EL1D_TRC_DPD_FAC_CIM3_GET_LEAVE()	ChkL1ClsFltr_EL1D_DPD0_EL1D_TRC_CLS_DPD_FAC_MAIN_H()
#define ChkL1MsgFltr_EL1D_TRC_DPD_FAC_CIM3_SET_ENTER()	ChkL1ClsFltr_EL1D_DPD0_EL1D_TRC_CLS_DPD_FAC_MAIN_H()
#define ChkL1MsgFltr_EL1D_TRC_DPD_FAC_CIM3_SET_LEAVE()	ChkL1ClsFltr_EL1D_DPD0_EL1D_TRC_CLS_DPD_FAC_MAIN_H()
#define ChkL1MsgFltr_EL1D_TRC_DPD_FAC_PA_START_ENTER()	ChkL1ClsFltr_EL1D_DPD0_EL1D_TRC_CLS_DPD_FAC_MAIN_H()
#define ChkL1MsgFltr_EL1D_TRC_DPD_FAC_PA_START_LEAVE()	ChkL1ClsFltr_EL1D_DPD0_EL1D_TRC_CLS_DPD_FAC_MAIN_H()
#define ChkL1MsgFltr_EL1D_TRC_DPD_FAC_PA_GET_ENTER()	ChkL1ClsFltr_EL1D_DPD0_EL1D_TRC_CLS_DPD_FAC_MAIN_H()
#define ChkL1MsgFltr_EL1D_TRC_DPD_FAC_PA_GET_LEAVE()	ChkL1ClsFltr_EL1D_DPD0_EL1D_TRC_CLS_DPD_FAC_MAIN_H()
#define ChkL1MsgFltr_EL1D_TRC_DPD_FAC_PA_SET_ENTER()	ChkL1ClsFltr_EL1D_DPD0_EL1D_TRC_CLS_DPD_FAC_MAIN_H()
#define ChkL1MsgFltr_EL1D_TRC_DPD_FAC_PA_SET_LEAVE()	ChkL1ClsFltr_EL1D_DPD0_EL1D_TRC_CLS_DPD_FAC_MAIN_H()
#define ChkL1MsgFltr_EL1D_TRC_DPD_CIM3_GET_LUT_CONFIG_ENTER()	ChkL1ClsFltr_EL1D_DPD0_EL1D_TRC_CLS_DPD_FAC_MAIN_H()
#define ChkL1MsgFltr_EL1D_TRC_DPD_CIM3_GET_LUT_CONFIG_LEAVE()	ChkL1ClsFltr_EL1D_DPD0_EL1D_TRC_CLS_DPD_FAC_MAIN_H()
#define ChkL1MsgFltr_EL1D_TRC_DPD_SWITCH_ENTER()	ChkL1ClsFltr_EL1D_DPD0_EL1D_TRC_CLS_DPD_FAC_MAIN_H()
#define ChkL1MsgFltr_EL1D_TRC_CIM3_SWITCH_ENTER()	ChkL1ClsFltr_EL1D_DPD0_EL1D_TRC_CLS_DPD_FAC_MAIN_H()
#define ChkL1MsgFltr_EL1D_TRC_DPD_FAC_SF_TICK_RF_FEC_CTRL_ENTER()	ChkL1ClsFltr_EL1D_DPD0_EL1D_TRC_CLS_DPD_FAC_MAIN_H()
#define ChkL1MsgFltr_EL1D_TRC_DPD_FAC_TAR_TIME_WAIT()	ChkL1ClsFltr_EL1D_DPD0_EL1D_TRC_CLS_DPD_FAC_MAIN_H()
#define ChkL1MsgFltr_EL1D_TRC_DPD_FAC_GAIN_CTRL()	ChkL1ClsFltr_EL1D_DPD0_EL1D_TRC_CLS_DPD_FAC_MAIN_H()
#define ChkL1MsgFltr_EL1D_TRC_DPD_OTFC_NRT()	ChkL1ClsFltr_EL1D_DPD0_EL1D_TRC_CLS_DPD_OTFC_MAIN_H()
#define ChkL1MsgFltr_EL1D_TRC_DPD_CIM3_OTFC_GDMA_HISR_ENTER()	ChkL1ClsFltr_EL1D_DPD0_EL1D_TRC_CLS_DPD_OTFC_MAIN_H()
#define ChkL1MsgFltr_EL1D_TRC_DPD_CIM3_OTFC_GDMA_HISR_LEAVE()	ChkL1ClsFltr_EL1D_DPD0_EL1D_TRC_CLS_DPD_OTFC_MAIN_H()
#define ChkL1MsgFltr_EL1D_TRC_DPD_OTFC_COMP_EN()	ChkL1ClsFltr_EL1D_DPD0_EL1D_TRC_CLS_DPD_OTFC_MAIN_H()
#define ChkL1MsgFltr_EL1D_TRC_CIM3_OTFC_COMP_EN()	ChkL1ClsFltr_EL1D_DPD0_EL1D_TRC_CLS_DPD_OTFC_MAIN_H()
#define ChkL1MsgFltr_EL1D_TRC_DPD_OTFC_SRAM_CONFLICT()	ChkL1ClsFltr_EL1D_DPD0_EL1D_TRC_CLS_DPD_OTFC_MAIN_H()
#define ChkL1MsgFltr_EL1D_TRC_DPD_OTFC_ENTER_CMIF_HANDSHAKE()	ChkL1ClsFltr_EL1D_DPD0_EL1D_TRC_CLS_DPD_OTFC_MAIN_H()
#define ChkL1MsgFltr_EL1D_TRC_DPD_OTFC_LEAVE_CMIF_HANDSHAKE()	ChkL1ClsFltr_EL1D_DPD0_EL1D_TRC_CLS_DPD_OTFC_MAIN_H()
#define ChkL1MsgFltr_EL1D_TRC_DPD_OTFC_SEND_DPD_LUT_TO_FEC()	ChkL1ClsFltr_EL1D_DPD0_EL1D_TRC_CLS_DPD_OTFC_MAIN_H()
#define ChkL1MsgFltr_EL1D_TRC_DPD_OTFC_ISSUE_LISR()	ChkL1ClsFltr_EL1D_DPD0_EL1D_TRC_CLS_DPD_OTFC_MAIN_H()
#define ChkL1MsgFltr_EL1D_TRC_DPD_OTFC_TX_SHARE_CH_OFF()	ChkL1ClsFltr_EL1D_DPD0_EL1D_TRC_CLS_DPD_OTFC_MAIN_H()
#define ChkL1MsgFltr_EL1D_TRC_DPD_OTFC_COPY_CMIF_RESULT()	ChkL1ClsFltr_EL1D_DPD0_EL1D_TRC_CLS_DPD_OTFC_MAIN_H()
#define ChkL1MsgFltr_EL1D_TRC_DPD_OTFC_AM_ACTIVE_BUF()	ChkL1ClsFltr_EL1D_DPD0_EL1D_TRC_CLS_DPD_OTFC_MAIN_H()
#define ChkL1MsgFltr_EL1D_TRC_DPD_OTFC_PM_ACTIVE_BUF()	ChkL1ClsFltr_EL1D_DPD0_EL1D_TRC_CLS_DPD_OTFC_MAIN_H()
#define ChkL1MsgFltr_EL1D_TRC_DPD_OTFC_AM_RESULT()	ChkL1ClsFltr_EL1D_DPD0_EL1D_TRC_CLS_DPD_OTFC_MAIN_H()
#define ChkL1MsgFltr_EL1D_TRC_DPD_OTFC_PM_RESULT()	ChkL1ClsFltr_EL1D_DPD0_EL1D_TRC_CLS_DPD_OTFC_MAIN_H()
#define ChkL1MsgFltr_EL1D_TRC_DPD_OTFC_LISR_UPDATE_SRAM()	ChkL1ClsFltr_EL1D_DPD0_EL1D_TRC_CLS_DPD_OTFC_MAIN_H()
#define ChkL1MsgFltr_EL1D_TRC_DPD_OTFC_LISR_NO_UPDATE_SRAM()	ChkL1ClsFltr_EL1D_DPD0_EL1D_TRC_CLS_DPD_OTFC_MAIN_H()
#define ChkL1MsgFltr_EL1D_TRC_DPD_OTFC_EXCEED_MAX_SUBFRAME()	ChkL1ClsFltr_EL1D_DPD0_EL1D_TRC_CLS_DPD_OTFC_MAIN_H()
#define ChkL1MsgFltr_EL1D_TRC_DPD_OTFC_HW_LUT_IDX()	ChkL1ClsFltr_EL1D_DPD0_EL1D_TRC_CLS_DPD_OTFC_MAIN_H()
#define ChkL1MsgFltr_EL1D_TRC_DPD_OTFC_AM_PM_UPDATE_EN()	ChkL1ClsFltr_EL1D_DPD0_EL1D_TRC_CLS_DPD_OTFC_MAIN_H()
#define ChkL1MsgFltr_EL1D_TRC_DPD_OTFC_UPDATE_SHARE_MEMORY()	ChkL1ClsFltr_EL1D_DPD0_EL1D_TRC_CLS_DPD_OTFC_MAIN_H()
#define ChkL1MsgFltr_EL1D_TRC_DPD_OTFC_ABORT_DSP()	ChkL1ClsFltr_EL1D_DPD0_EL1D_TRC_CLS_DPD_OTFC_MAIN_H()
#define ChkL1MsgFltr_EL1D_TRC_DPD_OTFC_COMP_EN_AM_OR_PM_DISABLE()	ChkL1ClsFltr_EL1D_DPD0_EL1D_TRC_CLS_DPD_OTFC_MAIN_H()
#define ChkL1MsgFltr_EL1D_TRC_DPD_OTFC_BYPASS_DUETO_BAD_TDE()	ChkL1ClsFltr_EL1D_DPD0_EL1D_TRC_CLS_DPD_OTFC_MAIN_H()
#define ChkL1MsgFltr_EL1D_TRC_DPD_OTFC_TEMPERATURE()	ChkL1ClsFltr_EL1D_DPD0_EL1D_TRC_CLS_DPD_OTFC_MAIN_H()
#define ChkL1MsgFltr_EL1D_TRC_DPD_OTFC_FORCE_TO_APT()	ChkL1ClsFltr_EL1D_DPD0_EL1D_TRC_CLS_DPD_OTFC_MAIN_H()
#define ChkL1MsgFltr_EL1D_TRC_DPD_OTFC_TR_DELAY_SELECT()	ChkL1ClsFltr_EL1D_DPD0_EL1D_TRC_CLS_DPD_OTFC_MAIN_H()
#define ChkL1MsgFltr_EL1D_TRC_DPD_OTFC_NORMAL_MODE()	ChkL1ClsFltr_EL1D_DPD0_EL1D_TRC_CLS_DPD_OTFC_MAIN_H()
#define ChkL1MsgFltr_EL1D_TRC_DPD_OTFC_TEST()	ChkL1ClsFltr_EL1D_DPD0_EL1D_TRC_CLS_DPD_OTFC_MAIN_H()
#define ChkL1MsgFltr_EL1D_TRC_DPD_OTFC_AMACTIVE_BUF()	ChkL1ClsFltr_EL1D_DPD0_EL1D_TRC_CLS_DPD_OTFC_MAIN_H()
#define ChkL1MsgFltr_EL1D_TRC_DPD_OTFC_PMACTIVE_BUF()	ChkL1ClsFltr_EL1D_DPD0_EL1D_TRC_CLS_DPD_OTFC_MAIN_H()
#define ChkL1MsgFltr_EL1D_TRC_DPD_OTFC_NRT_UPDATE()	ChkL1ClsFltr_EL1D_DPD0_EL1D_TRC_CLS_DPD_OTFC_MAIN_H()
#define ChkL1MsgFltr_EL1D_TRC_DPD_OTFC_NRT_UPDATE_1()	ChkL1ClsFltr_EL1D_DPD0_EL1D_TRC_CLS_DPD_OTFC_MAIN_H()
#define ChkL1MsgFltr_EL1D_TRC_DPD_OTFC_NRT_UPDATE_2()	ChkL1ClsFltr_EL1D_DPD0_EL1D_TRC_CLS_DPD_OTFC_MAIN_H()
#define ChkL1MsgFltr_EL1D_TRC_DPD_OTFC_NRT_UPDATE_3()	ChkL1ClsFltr_EL1D_DPD0_EL1D_TRC_CLS_DPD_OTFC_MAIN_H()
#define ChkL1MsgFltr_EL1D_TRC_DPD_OTFC_NRT_UPDATE_4()	ChkL1ClsFltr_EL1D_DPD0_EL1D_TRC_CLS_DPD_OTFC_MAIN_H()
#define ChkL1MsgFltr_EL1D_TRC_DPD_OTFC_NRT_PATH()	ChkL1ClsFltr_EL1D_DPD0_EL1D_TRC_CLS_DPD_OTFC_MAIN_H()
#define ChkL1MsgFltr_EL1D_TRC_DPD_OTFC_INFO_0()	ChkL1ClsFltr_EL1D_DPD0_EL1D_TRC_CLS_DPD_OTFC_MAIN_H()
#define ChkL1MsgFltr_EL1D_TRC_DPD_OTFC_INFO_1()	ChkL1ClsFltr_EL1D_DPD0_EL1D_TRC_CLS_DPD_OTFC_MAIN_H()
#define ChkL1MsgFltr_EL1D_TRC_DPD_OTFC_INFO_3()	ChkL1ClsFltr_EL1D_DPD0_EL1D_TRC_CLS_DPD_OTFC_MAIN_H()
#define ChkL1MsgFltr_EL1D_TRC_DPD_OTFC_INFO_4()	ChkL1ClsFltr_EL1D_DPD0_EL1D_TRC_CLS_DPD_OTFC_MAIN_H()
#define ChkL1MsgFltr_EL1D_TRC_DPD_OTFC_INFO_5()	ChkL1ClsFltr_EL1D_DPD0_EL1D_TRC_CLS_DPD_OTFC_MAIN_H()
#define ChkL1MsgFltr_EL1D_TRC_DPD_OTFC_INFO_6()	ChkL1ClsFltr_EL1D_DPD0_EL1D_TRC_CLS_DPD_OTFC_MAIN_H()
#define ChkL1MsgFltr_EL1D_TRC_DPD_OTFC_INFO_7()	ChkL1ClsFltr_EL1D_DPD0_EL1D_TRC_CLS_DPD_OTFC_MAIN_H()
#define ChkL1MsgFltr_EL1D_TRC_DPD_OTFC_INFO_8()	ChkL1ClsFltr_EL1D_DPD0_EL1D_TRC_CLS_DPD_OTFC_MAIN_H()
#define ChkL1MsgFltr_EL1D_TRC_DPD_OTFC_INFO_9()	ChkL1ClsFltr_EL1D_DPD0_EL1D_TRC_CLS_DPD_OTFC_MAIN_L()
#define ChkL1MsgFltr_EL1D_TRC_DPD_OTFC_INFO_10()	ChkL1ClsFltr_EL1D_DPD0_EL1D_TRC_CLS_DPD_OTFC_MAIN_M()
#define ChkL1MsgFltr_EL1D_TRC_DPD_OTFC_INFO_11()	ChkL1ClsFltr_EL1D_DPD0_EL1D_TRC_CLS_DPD_OTFC_MAIN_L()
#define ChkL1MsgFltr_EL1D_TRC_DPD_OTFC_INFO_12()	ChkL1ClsFltr_EL1D_DPD0_EL1D_TRC_CLS_DPD_OTFC_MAIN_L()
#define ChkL1MsgFltr_EL1D_TRC_DPD_OTFC_INFO_14()	ChkL1ClsFltr_EL1D_DPD0_EL1D_TRC_CLS_DPD_OTFC_MAIN_M()
#define ChkL1MsgFltr_EL1D_TRC_DPD_OTFC_INFO_16()	ChkL1ClsFltr_EL1D_DPD0_EL1D_TRC_CLS_DPD_OTFC_MAIN_H()
#define ChkL1MsgFltr_EL1D_TRC_DPD_OTFC_INFO_17()	ChkL1ClsFltr_EL1D_DPD0_EL1D_TRC_CLS_DPD_OTFC_MAIN_H()
#define ChkL1MsgFltr_EL1D_TRC_DPD_OTFC_INFO_18()	ChkL1ClsFltr_EL1D_DPD0_EL1D_TRC_CLS_DPD_OTFC_MAIN_H()
#define ChkL1MsgFltr_EL1D_TRC_DPD_OTFC_INFO_19()	ChkL1ClsFltr_EL1D_DPD0_EL1D_TRC_CLS_DPD_OTFC_MAIN_H()
#define ChkL1MsgFltr_EL1D_TRC_DPD_OTFC_INFO_20()	ChkL1ClsFltr_EL1D_DPD0_EL1D_TRC_CLS_DPD_OTFC_MAIN_H()
#define ChkL1MsgFltr_EL1D_TRC_DPD_OTFC_INFO_24()	ChkL1ClsFltr_EL1D_DPD0_EL1D_TRC_CLS_DPD_OTFC_MAIN_M()
#define ChkL1MsgFltr_EL1D_TRC_DPD_OTFC_INFO_25()	ChkL1ClsFltr_EL1D_DPD0_EL1D_TRC_CLS_DPD_OTFC_MAIN_H()
#define ChkL1MsgFltr_EL1D_TRC_DPD_OTFC_AM_CR2_TO_FEC()	ChkL1ClsFltr_EL1D_DPD0_EL1D_TRC_CLS_DPD_OTFC_MAIN_M()
#define ChkL1MsgFltr_EL1D_TRC_DPD_OTFC_PACKET_CONDITION()	ChkL1ClsFltr_EL1D_DPD0_EL1D_TRC_CLS_DPD_OTFC_MAIN_H()
#define ChkL1MsgFltr_EL1D_TRC_DPD_OTFC_NRT_HISR_INFO_0()	ChkL1ClsFltr_EL1D_DPD0_EL1D_TRC_CLS_DPD_OTFC_MAIN_H()
#define ChkL1MsgFltr_EL1D_TRC_DPD_OTFC_NRT_HISR_INFO_1()	ChkL1ClsFltr_EL1D_DPD0_EL1D_TRC_CLS_DPD_OTFC_MAIN_H()
#define ChkL1MsgFltr_EL1D_TRC_DPD_OTFC_NRT_HISR_INFO_4()	ChkL1ClsFltr_EL1D_DPD0_EL1D_TRC_CLS_DPD_OTFC_MAIN_H()
#define ChkL1MsgFltr_EL1D_TRC_DPD_OTFC_NRT_HISR_INFO_5()	ChkL1ClsFltr_EL1D_DPD0_EL1D_TRC_CLS_DPD_OTFC_MAIN_H()
#define ChkL1MsgFltr_EL1D_TRC_DPD_OTFC_NRT_HISR_INFO_6()	ChkL1ClsFltr_EL1D_DPD0_EL1D_TRC_CLS_DPD_OTFC_MAIN_H()
#define ChkL1MsgFltr_EL1D_TRC_DPD_OTFC_NRT_HISR_INFO_7()	ChkL1ClsFltr_EL1D_DPD0_EL1D_TRC_CLS_DPD_OTFC_MAIN_H()
#define ChkL1MsgFltr_EL1D_TRC_DPD_OTFC_Restore()	ChkL1ClsFltr_EL1D_DPD0_EL1D_TRC_CLS_DPD_OTFC_MAIN_H()
#define ChkL1MsgFltr_EL1D_TRC_DPD_OTFC_RFCC_UPDATE()	ChkL1ClsFltr_EL1D_DPD0_EL1D_TRC_CLS_DPD_OTFC_MAIN_H()
#define ChkL1MsgFltr_EL1D_TRC_DPD_OTFC_AM_OBSERVER()	ChkL1ClsFltr_EL1D_DPD0_EL1D_TRC_CLS_DPD_OTFC_MAIN_H()
#define ChkL1MsgFltr_EL1D_TRC_DPD_OTFC_PM_OBSERVER()	ChkL1ClsFltr_EL1D_DPD0_EL1D_TRC_CLS_DPD_OTFC_MAIN_H()
#define ChkL1MsgFltr_EL1D_TRC_DPD_OTFC_NRT_TPC_StartRequest()	ChkL1ClsFltr_EL1D_DPD0_EL1D_TRC_CLS_DPD_OTFC_MAIN_H()
#define ChkL1MsgFltr_EL1D_TRC_DPD_DBG_ACT_BUFF_OBSERVER()	ChkL1ClsFltr_EL1D_DPD0_EL1D_TRC_CLS_DPD_OTFC_MAIN_H()
#define ChkL1MsgFltr_EL1D_TRC_DPD_OTFC_DBG_TPC_CON()	ChkL1ClsFltr_EL1D_DPD0_EL1D_TRC_CLS_DPD_OTFC_MAIN_H()
#define ChkL1MsgFltr_EL1D_TRC_DPD_OTFC_ENTER_NSFT()	ChkL1ClsFltr_EL1D_DPD0_EL1D_TRC_CLS_DPD_OTFC_MAIN_H()
#define ChkL1MsgFltr_EL1D_TRC_DPD_OTFC_LEAVE_NSFT()	ChkL1ClsFltr_EL1D_DPD0_EL1D_TRC_CLS_DPD_OTFC_MAIN_H()
#define ChkL1MsgFltr_EL1D_TRC_DPD_TPC_PTAR()	ChkL1ClsFltr_EL1D_DPD0_EL1D_TRC_CLS_DPD_OTFC_MAIN_L()
#define ChkL1MsgFltr_EL1D_TRC_DPD_OTFC_LCHPUE_BAND()	ChkL1ClsFltr_EL1D_DPD0_EL1D_TRC_CLS_DPD_OTFC_MAIN_H()
#define ChkL1MsgFltr_EL1D_TRC_DPD_OTFC_HPUE_INFO()	ChkL1ClsFltr_EL1D_DPD0_EL1D_TRC_CLS_DPD_OTFC_MAIN_H()
#define ChkL1MsgFltr_EL1D_TRC_DPD_DELAY_GD_RESULT_DEC()	ChkL1ClsFltr_EL1D_DPD0_EL1D_TRC_CLS_DPD_FAC_MAIN_L()
#define ChkL1MsgFltr_EL1D_TRC_DPD_DELAY_GD_SEARCH_RESULT()	ChkL1ClsFltr_EL1D_DPD0_EL1D_TRC_CLS_DPD_FAC_MAIN_L()
#define ChkL1MsgFltr_EL1D_TRC_DPD_DELAY_GD_SEARCH_UPDATE()	ChkL1ClsFltr_EL1D_DPD0_EL1D_TRC_CLS_DPD_FAC_MAIN_L()
#define ChkL1MsgFltr_EL1D_TRC_DPD_DELAY_GD_STATUS()	ChkL1ClsFltr_EL1D_DPD0_EL1D_TRC_CLS_DPD_FAC_MAIN_L()
#define ChkL1MsgFltr_EL1D_TRC_DPD_DELAY_GD_WAIT_LENGTH()	ChkL1ClsFltr_EL1D_DPD0_EL1D_TRC_CLS_DPD_FAC_MAIN_L()


#endif
