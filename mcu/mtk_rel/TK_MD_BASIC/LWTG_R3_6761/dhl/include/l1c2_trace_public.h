#ifndef L1TRC_L1C_GPRS_PUBLIC_DEF_H
#define L1TRC_L1C_GPRS_PUBLIC_DEF_H

/******************************/
/* String category definition */
/******************************/
#define L1C_Str_Bool(v1)  (unsigned char)(v1+0)
#define L1C_Str_GPRS_DL_CtrlMsg(v1)  (unsigned char)(v1+2)
#define L1C_Str_UplinkAccessMode(v1)  (unsigned char)(v1+58)
#define L1C_Str_BandInfo(v1)  (unsigned char)(v1+62)


/****************************/
/* Message macro definition */
/****************************/
#include "L1Trc.h"
#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define L1C_Trace_ReportPBCCh(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1C_GPRS_PUBLIC_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0055,0x0055);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1C_GPRS_PUBLIC_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define L1C_Trace_ReportPBCCh(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define L1C_Trace_ReportNPBCCh(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1C_GPRS_PUBLIC_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0155,0x0155);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1C_GPRS_PUBLIC_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define L1C_Trace_ReportNPBCCh(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define L1C_Trace_ReportPPCh(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1C_GPRS_PUBLIC_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0255,0x0255);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1C_GPRS_PUBLIC_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define L1C_Trace_ReportPPCh(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define L1C_Trace_ReportPTCChDown(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1C_GPRS_PUBLIC_Trace_Filter, 1, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0355,0x0355);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1C_GPRS_PUBLIC_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define L1C_Trace_ReportPTCChDown(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define L1C_Trace_PDTChGood_woRRBP_woFBI(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1C_GPRS_PUBLIC_Trace_Filter, 1, 0x10);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0455,0x0455);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1C_GPRS_PUBLIC_Trace_Filter, 1, 0x10);\
		}\
	} while(0)
#else
	#define L1C_Trace_PDTChGood_woRRBP_woFBI(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER)
	#define L1C_Trace_PDTChGood_woRRBP_wFBI(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1C_GPRS_PUBLIC_Trace_Filter, 1, 0x10);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0555,0x0555);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1C_GPRS_PUBLIC_Trace_Filter, 1, 0x10);\
		}\
	} while(0)
#else
	#define L1C_Trace_PDTChGood_woRRBP_wFBI(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER)
	#define L1C_Trace_PDTChGood_wRRBP_woFBI(v1, v2, v3, v4, v5, v6) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1C_GPRS_PUBLIC_Trace_Filter, 1, 0x10);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0655,0x0655);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1C_GPRS_PUBLIC_Trace_Filter, 1, 0x10);\
		}\
	} while(0)
#else
	#define L1C_Trace_PDTChGood_wRRBP_woFBI(v1, v2, v3, v4, v5, v6)
#endif

#if defined(L1_CATCHER)
	#define L1C_Trace_PDTChGood_wRRBP_wFBI(v1, v2, v3, v4, v5, v6) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1C_GPRS_PUBLIC_Trace_Filter, 1, 0x10);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0755,0x0755);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1C_GPRS_PUBLIC_Trace_Filter, 1, 0x10);\
		}\
	} while(0)
#else
	#define L1C_Trace_PDTChGood_wRRBP_wFBI(v1, v2, v3, v4, v5, v6)
#endif

#if defined(L1_CATCHER)
	#define L1C_Trace_PDTChGood_Ctrl(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1C_GPRS_PUBLIC_Trace_Filter, 1, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0855,0x0855);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1C_GPRS_PUBLIC_Trace_Filter, 1, 0x10);\
		}\
	} while(0)
#else
	#define L1C_Trace_PDTChGood_Ctrl(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define L1C_Trace_PDTChGood_Dummy_Ctrl(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1C_GPRS_PUBLIC_Trace_Filter, 1, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0955,0x0955);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1C_GPRS_PUBLIC_Trace_Filter, 1, 0x10);\
		}\
	} while(0)
#else
	#define L1C_Trace_PDTChGood_Dummy_Ctrl(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define L1C_Trace_ReportPDTChBad(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1C_GPRS_PUBLIC_Trace_Filter, 1, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0A55,0x0A55);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1C_GPRS_PUBLIC_Trace_Filter, 1, 0x10);\
		}\
	} while(0)
#else
	#define L1C_Trace_ReportPDTChBad(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define L1C_Trace_TBFStart(v1, v2, v3, v4, v5, v6, v7) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1C_GPRS_PUBLIC_Trace_Filter, 1, 0x20);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0B55,0x0B55);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v7,v7);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1C_GPRS_PUBLIC_Trace_Filter, 1, 0x20);\
		}\
	} while(0)
#else
	#define L1C_Trace_TBFStart(v1, v2, v3, v4, v5, v6, v7)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define L1C_Trace_ReportIM(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1C_GPRS_PUBLIC_Trace_Filter, 3, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0C55,0x0C55);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1C_GPRS_PUBLIC_Trace_Filter, 3, 0x04);\
		}\
	} while(0)
#else
	#define L1C_Trace_ReportIM(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define L1C_Trace_ReportIMPower(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1C_GPRS_PUBLIC_Trace_Filter, 3, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0D55,0x0D55);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1C_GPRS_PUBLIC_Trace_Filter, 3, 0x04);\
		}\
	} while(0)
#else
	#define L1C_Trace_ReportIMPower(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define L1C_Trace_ReportPAGCh(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1C_GPRS_PUBLIC_Trace_Filter, 1, 0x40);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0E55,0x0E55);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1C_GPRS_PUBLIC_Trace_Filter, 1, 0x40);\
		}\
	} while(0)
#else
	#define L1C_Trace_ReportPAGCh(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define L1C_Trace_ReportSingleDL(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1C_GPRS_PUBLIC_Trace_Filter, 1, 0x80);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0F55,0x0F55);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1C_GPRS_PUBLIC_Trace_Filter, 1, 0x80);\
		}\
	} while(0)
#else
	#define L1C_Trace_ReportSingleDL(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define L1C_Trace_ReportPACCh(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1C_GPRS_PUBLIC_Trace_Filter, 2, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1055,0x1055);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1C_GPRS_PUBLIC_Trace_Filter, 2, 0x01);\
		}\
	} while(0)
#else
	#define L1C_Trace_ReportPACCh(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define L1C_Trace_ReportPACCh_Ctrl(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1C_GPRS_PUBLIC_Trace_Filter, 2, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1155,0x1155);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1C_GPRS_PUBLIC_Trace_Filter, 2, 0x01);\
		}\
	} while(0)
#else
	#define L1C_Trace_ReportPACCh_Ctrl(v1, v2)
#endif



/*******************************/
/* declaration of filter array */
/*******************************/
EXTERN_TMD_FILTER(unsigned char, L1C_GPRS_PUBLIC_Trace_Filter, 5);
/*************************/
/* Function declarations */
/*************************/
#ifdef L1_CATCHER

void Set_L1C_GPRS_PUBLIC_Filter(unsigned char *setting);

#endif

/************************************/
/* Filter checking API declarations */
/************************************/

#define ChkL1ModFltr_L1C_GPRS_PUBLIC()	(FILTER_CHECK(L1C_GPRS_PUBLIC_Trace_Filter, 0, 1))
#define ChkL1ClsFltr_L1C_GPRS_PUBLIC_ReportPBCCh_M()	(ChkL1ModFltr_L1C_GPRS_PUBLIC()&&(FILTER_CHECK(L1C_GPRS_PUBLIC_Trace_Filter, 1, 0x01)))
#define ChkL1ClsFltr_L1C_GPRS_PUBLIC_ReportNPBCCh_M()	(ChkL1ModFltr_L1C_GPRS_PUBLIC()&&(FILTER_CHECK(L1C_GPRS_PUBLIC_Trace_Filter, 1, 0x02)))
#define ChkL1ClsFltr_L1C_GPRS_PUBLIC_ReportPPCh_M()	(ChkL1ModFltr_L1C_GPRS_PUBLIC()&&(FILTER_CHECK(L1C_GPRS_PUBLIC_Trace_Filter, 1, 0x04)))
#define ChkL1ClsFltr_L1C_GPRS_PUBLIC_ReportPTCCh_H()	(ChkL1ModFltr_L1C_GPRS_PUBLIC()&&(FILTER_CHECK(L1C_GPRS_PUBLIC_Trace_Filter, 1, 0x08)))
#define ChkL1ClsFltr_L1C_GPRS_PUBLIC_ReportPDTCh_H()	(ChkL1ModFltr_L1C_GPRS_PUBLIC()&&(FILTER_CHECK(L1C_GPRS_PUBLIC_Trace_Filter, 1, 0x10)))
#define ChkL1ClsFltr_L1C_GPRS_PUBLIC_L1T_TBFStart_M()	(ChkL1ModFltr_L1C_GPRS_PUBLIC()&&(FILTER_CHECK(L1C_GPRS_PUBLIC_Trace_Filter, 1, 0x20)))
#define ChkL1ClsFltr_L1C_GPRS_PUBLIC_ReportPAGCh_M()	(ChkL1ModFltr_L1C_GPRS_PUBLIC()&&(FILTER_CHECK(L1C_GPRS_PUBLIC_Trace_Filter, 1, 0x40)))
#define ChkL1ClsFltr_L1C_GPRS_PUBLIC_ReportSingleDL_H()	(ChkL1ModFltr_L1C_GPRS_PUBLIC()&&(FILTER_CHECK(L1C_GPRS_PUBLIC_Trace_Filter, 1, 0x80)))
#define ChkL1ClsFltr_L1C_GPRS_PUBLIC_ReportULTwoPhase_H()	(ChkL1ModFltr_L1C_GPRS_PUBLIC()&&(FILTER_CHECK(L1C_GPRS_PUBLIC_Trace_Filter, 2, 0x01)))
#define ChkL1ClsFltr_L1C_GPRS_PUBLIC_SetupPBCCh_M()	(ChkL1ModFltr_L1C_GPRS_PUBLIC()&&(FILTER_CHECK(L1C_GPRS_PUBLIC_Trace_Filter, 2, 0x02)))
#define ChkL1ClsFltr_L1C_GPRS_PUBLIC_SetupPPCh_M()	(ChkL1ModFltr_L1C_GPRS_PUBLIC()&&(FILTER_CHECK(L1C_GPRS_PUBLIC_Trace_Filter, 2, 0x04)))
#define ChkL1ClsFltr_L1C_GPRS_PUBLIC_StartPAGCh_M()	(ChkL1ModFltr_L1C_GPRS_PUBLIC()&&(FILTER_CHECK(L1C_GPRS_PUBLIC_Trace_Filter, 2, 0x08)))
#define ChkL1ClsFltr_L1C_GPRS_PUBLIC_SetupPRACh_M()	(ChkL1ModFltr_L1C_GPRS_PUBLIC()&&(FILTER_CHECK(L1C_GPRS_PUBLIC_Trace_Filter, 2, 0x10)))
#define ChkL1ClsFltr_L1C_GPRS_PUBLIC_StartPollResp_H()	(ChkL1ModFltr_L1C_GPRS_PUBLIC()&&(FILTER_CHECK(L1C_GPRS_PUBLIC_Trace_Filter, 2, 0x20)))
#define ChkL1ClsFltr_L1C_GPRS_PUBLIC_StartSingleUL_H()	(ChkL1ModFltr_L1C_GPRS_PUBLIC()&&(FILTER_CHECK(L1C_GPRS_PUBLIC_Trace_Filter, 2, 0x40)))
#define ChkL1ClsFltr_L1C_GPRS_PUBLIC_StartSingleDL_H()	(ChkL1ModFltr_L1C_GPRS_PUBLIC()&&(FILTER_CHECK(L1C_GPRS_PUBLIC_Trace_Filter, 2, 0x80)))
#define ChkL1ClsFltr_L1C_GPRS_PUBLIC_StartULTwoPhase_H()	(ChkL1ModFltr_L1C_GPRS_PUBLIC()&&(FILTER_CHECK(L1C_GPRS_PUBLIC_Trace_Filter, 3, 0x01)))
#define ChkL1ClsFltr_L1C_GPRS_PUBLIC_StartIM_M()	(ChkL1ModFltr_L1C_GPRS_PUBLIC()&&(FILTER_CHECK(L1C_GPRS_PUBLIC_Trace_Filter, 3, 0x02)))
#define ChkL1ClsFltr_L1C_GPRS_PUBLIC_ReportIM_L()	(ChkL1ModFltr_L1C_GPRS_PUBLIC()&&(FILTER_CHECK(L1C_GPRS_PUBLIC_Trace_Filter, 3, 0x04)))
#define ChkL1ClsFltr_L1C_GPRS_PUBLIC_TAS_H()	(ChkL1ModFltr_L1C_GPRS_PUBLIC()&&(FILTER_CHECK(L1C_GPRS_PUBLIC_Trace_Filter, 3, 0x08)))
#define ChkL1MsgFltr_L1C_Trace_ReportPBCCh()	ChkL1ClsFltr_L1C_GPRS_PUBLIC_ReportPBCCh_M()
#define ChkL1MsgFltr_L1C_Trace_ReportNPBCCh()	ChkL1ClsFltr_L1C_GPRS_PUBLIC_ReportNPBCCh_M()
#define ChkL1MsgFltr_L1C_Trace_ReportPPCh()	ChkL1ClsFltr_L1C_GPRS_PUBLIC_ReportPPCh_M()
#define ChkL1MsgFltr_L1C_Trace_ReportPTCChDown()	ChkL1ClsFltr_L1C_GPRS_PUBLIC_ReportPTCCh_H()
#define ChkL1MsgFltr_L1C_Trace_PDTChGood_woRRBP_woFBI()	ChkL1ClsFltr_L1C_GPRS_PUBLIC_ReportPDTCh_H()
#define ChkL1MsgFltr_L1C_Trace_PDTChGood_woRRBP_wFBI()	ChkL1ClsFltr_L1C_GPRS_PUBLIC_ReportPDTCh_H()
#define ChkL1MsgFltr_L1C_Trace_PDTChGood_wRRBP_woFBI()	ChkL1ClsFltr_L1C_GPRS_PUBLIC_ReportPDTCh_H()
#define ChkL1MsgFltr_L1C_Trace_PDTChGood_wRRBP_wFBI()	ChkL1ClsFltr_L1C_GPRS_PUBLIC_ReportPDTCh_H()
#define ChkL1MsgFltr_L1C_Trace_PDTChGood_Ctrl()	ChkL1ClsFltr_L1C_GPRS_PUBLIC_ReportPDTCh_H()
#define ChkL1MsgFltr_L1C_Trace_PDTChGood_Dummy_Ctrl()	ChkL1ClsFltr_L1C_GPRS_PUBLIC_ReportPDTCh_H()
#define ChkL1MsgFltr_L1C_Trace_ReportPDTChBad()	ChkL1ClsFltr_L1C_GPRS_PUBLIC_ReportPDTCh_H()
#define ChkL1MsgFltr_L1C_Trace_TBFStart()	ChkL1ClsFltr_L1C_GPRS_PUBLIC_L1T_TBFStart_M()
#define ChkL1MsgFltr_L1C_Trace_ReportIM()	ChkL1ClsFltr_L1C_GPRS_PUBLIC_ReportIM_L()
#define ChkL1MsgFltr_L1C_Trace_ReportIMPower()	ChkL1ClsFltr_L1C_GPRS_PUBLIC_ReportIM_L()
#define ChkL1MsgFltr_L1C_Trace_ReportPAGCh()	ChkL1ClsFltr_L1C_GPRS_PUBLIC_ReportPAGCh_M()
#define ChkL1MsgFltr_L1C_Trace_ReportSingleDL()	ChkL1ClsFltr_L1C_GPRS_PUBLIC_ReportSingleDL_H()
#define ChkL1MsgFltr_L1C_Trace_ReportPACCh()	ChkL1ClsFltr_L1C_GPRS_PUBLIC_ReportULTwoPhase_H()
#define ChkL1MsgFltr_L1C_Trace_ReportPACCh_Ctrl()	ChkL1ClsFltr_L1C_GPRS_PUBLIC_ReportULTwoPhase_H()


#endif
