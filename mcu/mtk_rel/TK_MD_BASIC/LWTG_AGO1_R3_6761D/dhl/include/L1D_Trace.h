#ifndef L1TRC_L1D_PRI_DEF_H
#define L1TRC_L1D_PRI_DEF_H

/******************************/
/* String category definition */
/******************************/
#define L1C_Str_Bool(v1)  (unsigned char)(v1+0)
#define L1C_Str_SM_Handler(v1)  (unsigned char)(v1+2)
#define L1D_Str_CCH(v1)  (unsigned char)(v1+6)
#define L1D_Str_AGPS(v1)  (unsigned char)(v1+9)


/****************************/
/* Message macro definition */
/****************************/
#include "L1Trc.h"
#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define L1D_Trc_DPTCHS0FLAGS(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1D_PRI_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x005E,0x005E);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1D_PRI_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define L1D_Trc_DPTCHS0FLAGS(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define L1D_Trc_DPCCFLAG(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1D_PRI_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x015E,0x015E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1D_PRI_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define L1D_Trc_DPCCFLAG(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define L1D_Trc_DPNB(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1D_PRI_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x025E,0x025E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1D_PRI_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define L1D_Trc_DPNB(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define L1D_Trc_DPGSMMODE(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1D_PRI_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x035E,0x035E);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1D_PRI_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define L1D_Trc_DPGSMMODE(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define L1D_Trc_DPTXWIN0PROC(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1D_PRI_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x045E,0x045E);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1D_PRI_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define L1D_Trc_DPTXWIN0PROC(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define L1D_Trc_DPRXWIN0PROC(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1D_PRI_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x055E,0x055E);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1D_PRI_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define L1D_Trc_DPRXWIN0PROC(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define L1D_Trc_D2CStopUL() do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1D_PRI_Trace_Filter, 1, 0x08);\
			TRC_START_FILL_L1();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L1(0x065E,0x065E);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1D_PRI_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define L1D_Trc_D2CStopUL()
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define L1D_Trc_D2CFBFound() do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1D_PRI_Trace_Filter, 1, 0x04);\
			TRC_START_FILL_L1();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L1(0x075E,0x075E);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1D_PRI_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define L1D_Trc_D2CFBFound()
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define L1D_Trc_SHARED2MCTL(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1D_PRI_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x085E,0x085E);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1D_PRI_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define L1D_Trc_SHARED2MCTL(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define L1D_Trc_SetChannelCmd(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1D_PRI_Trace_Filter, 1, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x095E,0x095E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1D_PRI_Trace_Filter, 1, 0x10);\
		}\
	} while(0)
#else
	#define L1D_Trc_SetChannelCmd(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define L1D_Trc_ReportPeriod(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1D_PRI_Trace_Filter, 1, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0A5E,0x0A5E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1D_PRI_Trace_Filter, 1, 0x10);\
		}\
	} while(0)
#else
	#define L1D_Trc_ReportPeriod(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define L1D_Trc_FCChStage(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1D_PRI_Trace_Filter, 1, 0x20);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0B5E,0x0B5E);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1D_PRI_Trace_Filter, 1, 0x20);\
		}\
	} while(0)
#else
	#define L1D_Trc_FCChStage(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define L1D_Trc_CipherCmd(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1D_PRI_Trace_Filter, 1, 0x40);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0C5E,0x0C5E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1D_PRI_Trace_Filter, 1, 0x40);\
		}\
	} while(0)
#else
	#define L1D_Trc_CipherCmd(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define L1D_Trc_CipherKey(v1, v2, v3, v4, v5, v6) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1D_PRI_Trace_Filter, 1, 0x40);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0D5E,0x0D5E);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1D_PRI_Trace_Filter, 1, 0x40);\
		}\
	} while(0)
#else
	#define L1D_Trc_CipherKey(v1, v2, v3, v4, v5, v6)
#endif

#if defined(L1_CATCHER)
	#define L1D_Trc_CipherKey128(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1D_PRI_Trace_Filter, 1, 0x80);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0E5E,0x0E5E);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v7,v7);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v8,v8);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v9,v9);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v10,v10);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1D_PRI_Trace_Filter, 1, 0x80);\
		}\
	} while(0)
#else
	#define L1D_Trc_CipherKey128(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10)
#endif

#if defined(L1_CATCHER)
	#define L1D_Trc_PDNCON2(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1D_PRI_Trace_Filter, 1, 0x80);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0F5E,0x0F5E);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1D_PRI_Trace_Filter, 1, 0x80);\
		}\
	} while(0)
#else
	#define L1D_Trc_PDNCON2(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define L1D_Trc_BCCR(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1D_PRI_Trace_Filter, 1, 0x40);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x105E,0x105E);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1D_PRI_Trace_Filter, 1, 0x40);\
		}\
	} while(0)
#else
	#define L1D_Trc_BCCR(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define L1D_Trc_EVENA1(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1D_PRI_Trace_Filter, 2, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x115E,0x115E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1D_PRI_Trace_Filter, 2, 0x01);\
		}\
	} while(0)
#else
	#define L1D_Trc_EVENA1(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define L1D_Trc_APC_VOLTTEMP(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1D_PRI_Trace_Filter, 3, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x125E,0x125E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1D_PRI_Trace_Filter, 3, 0x02);\
		}\
	} while(0)
#else
	#define L1D_Trc_APC_VOLTTEMP(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define L1D_Trc_CCH_UL(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1D_PRI_Trace_Filter, 2, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x135E,0x135E);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1D_PRI_Trace_Filter, 2, 0x02);\
		}\
	} while(0)
#else
	#define L1D_Trc_CCH_UL(v1)
#endif

#if defined(L1_CATCHER)
	#define L1D_Trc_CCH_UL_DATA(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1D_PRI_Trace_Filter, 2, 0x08);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x145E,0x145E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1D_PRI_Trace_Filter, 2, 0x08);\
		}\
	} while(0)
#else
	#define L1D_Trc_CCH_UL_DATA(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define L1D_Trc_MaxTime(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1D_PRI_Trace_Filter, 2, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x155E,0x155E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1D_PRI_Trace_Filter, 2, 0x10);\
		}\
	} while(0)
#else
	#define L1D_Trc_MaxTime(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define L1D_Trc_DurMargin(v1, v2, v3, v4, v5, v6) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1D_PRI_Trace_Filter, 2, 0x20);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x165E,0x165E);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1D_PRI_Trace_Filter, 2, 0x20);\
		}\
	} while(0)
#else
	#define L1D_Trc_DurMargin(v1, v2, v3, v4, v5, v6)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define L1_Trace_sm1(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1D_PRI_Trace_Filter, 2, 0x40);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x175E,0x175E);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1D_PRI_Trace_Filter, 2, 0x40);\
		}\
	} while(0)
#else
	#define L1_Trace_sm1(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define L1_Trace_sm2(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1D_PRI_Trace_Filter, 2, 0x40);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x185E,0x185E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1D_PRI_Trace_Filter, 2, 0x40);\
		}\
	} while(0)
#else
	#define L1_Trace_sm2(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define L1_Trace_sm3(v1, v2, v3, v4, v5, v6) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1D_PRI_Trace_Filter, 2, 0x40);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x195E,0x195E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1D_PRI_Trace_Filter, 2, 0x40);\
		}\
	} while(0)
#else
	#define L1_Trace_sm3(v1, v2, v3, v4, v5, v6)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define L1_Trace_sm4(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1D_PRI_Trace_Filter, 2, 0x40);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1A5E,0x1A5E);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1D_PRI_Trace_Filter, 2, 0x40);\
		}\
	} while(0)
#else
	#define L1_Trace_sm4(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define L1_Trace_sm5(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1D_PRI_Trace_Filter, 2, 0x40);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1B5E,0x1B5E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1D_PRI_Trace_Filter, 2, 0x40);\
		}\
	} while(0)
#else
	#define L1_Trace_sm5(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER)
	#define L1D_Trace_FMResult(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1D_PRI_Trace_Filter, 3, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1C5E,0x1C5E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1D_PRI_Trace_Filter, 3, 0x08);\
		}\
	} while(0)
#else
	#define L1D_Trace_FMResult(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define L1D_AGPS_LCT_COUNTING(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1D_PRI_Trace_Filter, 3, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1D5E,0x1D5E);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1D_PRI_Trace_Filter, 3, 0x04);\
		}\
	} while(0)
#else
	#define L1D_AGPS_LCT_COUNTING(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define L1D_AGPS_REPORT(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1D_PRI_Trace_Filter, 3, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1E5E,0x1E5E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1D_PRI_Trace_Filter, 3, 0x04);\
		}\
	} while(0)
#else
	#define L1D_AGPS_REPORT(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define L1D_AGPS_FRC_PARAM(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1D_PRI_Trace_Filter, 3, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1F5E,0x1F5E);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1D_PRI_Trace_Filter, 3, 0x04);\
		}\
	} while(0)
#else
	#define L1D_AGPS_FRC_PARAM(v1, v2, v3)
#endif



/*******************************/
/* declaration of filter array */
/*******************************/
EXTERN_TMD_FILTER(unsigned char, L1D_PRI_Trace_Filter, 5);
/*************************/
/* Function declarations */
/*************************/
#ifdef L1_CATCHER

void Set_L1D_PRI_Filter(unsigned char *setting);

#endif

/************************************/
/* Filter checking API declarations */
/************************************/

#define ChkL1ModFltr_L1D_PRI()	(FILTER_CHECK(L1D_PRI_Trace_Filter, 0, 1))
#define ChkL1ClsFltr_L1D_PRI_L1D_DSP_COMMON_L()	(ChkL1ModFltr_L1D_PRI()&&(FILTER_CHECK(L1D_PRI_Trace_Filter, 1, 0x01)))
#define ChkL1ClsFltr_L1D_PRI_L1D_DSP_PROC_L()	(ChkL1ModFltr_L1D_PRI()&&(FILTER_CHECK(L1D_PRI_Trace_Filter, 1, 0x02)))
#define ChkL1ClsFltr_L1D_PRI_L1D_DSP_INT_L()	(ChkL1ModFltr_L1D_PRI()&&(FILTER_CHECK(L1D_PRI_Trace_Filter, 1, 0x04)))
#define ChkL1ClsFltr_L1D_PRI_L1D_DSP_INT_H()	(ChkL1ModFltr_L1D_PRI()&&(FILTER_CHECK(L1D_PRI_Trace_Filter, 1, 0x08)))
#define ChkL1ClsFltr_L1D_PRI_L1D_GET_CMD_L()	(ChkL1ModFltr_L1D_PRI()&&(FILTER_CHECK(L1D_PRI_Trace_Filter, 1, 0x10)))
#define ChkL1ClsFltr_L1D_PRI_L1D_FB_STAGE_L()	(ChkL1ModFltr_L1D_PRI()&&(FILTER_CHECK(L1D_PRI_Trace_Filter, 1, 0x20)))
#define ChkL1ClsFltr_L1D_PRI_L1D_CIPHER_L()	(ChkL1ModFltr_L1D_PRI()&&(FILTER_CHECK(L1D_PRI_Trace_Filter, 1, 0x40)))
#define ChkL1ClsFltr_L1D_PRI_L1D_CIPHER_H()	(ChkL1ModFltr_L1D_PRI()&&(FILTER_CHECK(L1D_PRI_Trace_Filter, 1, 0x80)))
#define ChkL1ClsFltr_L1D_PRI_L1D_UL_L()	(ChkL1ModFltr_L1D_PRI()&&(FILTER_CHECK(L1D_PRI_Trace_Filter, 2, 0x01)))
#define ChkL1ClsFltr_L1D_PRI_L1D_UL_CCH_L()	(ChkL1ModFltr_L1D_PRI()&&(FILTER_CHECK(L1D_PRI_Trace_Filter, 2, 0x02)))
#define ChkL1ClsFltr_L1D_PRI_L1D_UL_CCH_DATA_M()	(ChkL1ModFltr_L1D_PRI()&&(FILTER_CHECK(L1D_PRI_Trace_Filter, 2, 0x04)))
#define ChkL1ClsFltr_L1D_PRI_L1D_UL_CCH_DATA_H()	(ChkL1ModFltr_L1D_PRI()&&(FILTER_CHECK(L1D_PRI_Trace_Filter, 2, 0x08)))
#define ChkL1ClsFltr_L1D_PRI_L1D_MAX_TIME_L()	(ChkL1ModFltr_L1D_PRI()&&(FILTER_CHECK(L1D_PRI_Trace_Filter, 2, 0x10)))
#define ChkL1ClsFltr_L1D_PRI_L1D_MARGIN_H()	(ChkL1ModFltr_L1D_PRI()&&(FILTER_CHECK(L1D_PRI_Trace_Filter, 2, 0x20)))
#define ChkL1ClsFltr_L1D_PRI_SleepMode_L()	(ChkL1ModFltr_L1D_PRI()&&(FILTER_CHECK(L1D_PRI_Trace_Filter, 2, 0x40)))
#define ChkL1ClsFltr_L1D_PRI_FMCalibration_M()	(ChkL1ModFltr_L1D_PRI()&&(FILTER_CHECK(L1D_PRI_Trace_Filter, 2, 0x80)))
#define ChkL1ClsFltr_L1D_PRI_L1D_USF_L()	(ChkL1ModFltr_L1D_PRI()&&(FILTER_CHECK(L1D_PRI_Trace_Filter, 3, 0x01)))
#define ChkL1ClsFltr_L1D_PRI_L1D_APC_VOLTTEMP_L()	(ChkL1ModFltr_L1D_PRI()&&(FILTER_CHECK(L1D_PRI_Trace_Filter, 3, 0x02)))
#define ChkL1ClsFltr_L1D_PRI_L1D_AGPS_L()	(ChkL1ModFltr_L1D_PRI()&&(FILTER_CHECK(L1D_PRI_Trace_Filter, 3, 0x04)))
#define ChkL1ClsFltr_L1D_PRI_FMCalibration_H()	(ChkL1ModFltr_L1D_PRI()&&(FILTER_CHECK(L1D_PRI_Trace_Filter, 3, 0x08)))
#define ChkL1MsgFltr_L1D_Trc_DPTCHS0FLAGS()	ChkL1ClsFltr_L1D_PRI_L1D_DSP_COMMON_L()
#define ChkL1MsgFltr_L1D_Trc_DPCCFLAG()	ChkL1ClsFltr_L1D_PRI_L1D_DSP_COMMON_L()
#define ChkL1MsgFltr_L1D_Trc_DPNB()	ChkL1ClsFltr_L1D_PRI_L1D_DSP_COMMON_L()
#define ChkL1MsgFltr_L1D_Trc_DPGSMMODE()	ChkL1ClsFltr_L1D_PRI_L1D_DSP_PROC_L()
#define ChkL1MsgFltr_L1D_Trc_DPTXWIN0PROC()	ChkL1ClsFltr_L1D_PRI_L1D_DSP_PROC_L()
#define ChkL1MsgFltr_L1D_Trc_DPRXWIN0PROC()	ChkL1ClsFltr_L1D_PRI_L1D_DSP_PROC_L()
#define ChkL1MsgFltr_L1D_Trc_D2CStopUL()	ChkL1ClsFltr_L1D_PRI_L1D_DSP_INT_H()
#define ChkL1MsgFltr_L1D_Trc_D2CFBFound()	ChkL1ClsFltr_L1D_PRI_L1D_DSP_INT_L()
#define ChkL1MsgFltr_L1D_Trc_SHARED2MCTL()	ChkL1ClsFltr_L1D_PRI_L1D_DSP_INT_L()
#define ChkL1MsgFltr_L1D_Trc_SetChannelCmd()	ChkL1ClsFltr_L1D_PRI_L1D_GET_CMD_L()
#define ChkL1MsgFltr_L1D_Trc_ReportPeriod()	ChkL1ClsFltr_L1D_PRI_L1D_GET_CMD_L()
#define ChkL1MsgFltr_L1D_Trc_FCChStage()	ChkL1ClsFltr_L1D_PRI_L1D_FB_STAGE_L()
#define ChkL1MsgFltr_L1D_Trc_CipherCmd()	ChkL1ClsFltr_L1D_PRI_L1D_CIPHER_L()
#define ChkL1MsgFltr_L1D_Trc_CipherKey()	ChkL1ClsFltr_L1D_PRI_L1D_CIPHER_L()
#define ChkL1MsgFltr_L1D_Trc_CipherKey128()	ChkL1ClsFltr_L1D_PRI_L1D_CIPHER_H()
#define ChkL1MsgFltr_L1D_Trc_PDNCON2()	ChkL1ClsFltr_L1D_PRI_L1D_CIPHER_H()
#define ChkL1MsgFltr_L1D_Trc_BCCR()	ChkL1ClsFltr_L1D_PRI_L1D_CIPHER_L()
#define ChkL1MsgFltr_L1D_Trc_EVENA1()	ChkL1ClsFltr_L1D_PRI_L1D_UL_L()
#define ChkL1MsgFltr_L1D_Trc_APC_VOLTTEMP()	ChkL1ClsFltr_L1D_PRI_L1D_APC_VOLTTEMP_L()
#define ChkL1MsgFltr_L1D_Trc_CCH_UL()	ChkL1ClsFltr_L1D_PRI_L1D_UL_CCH_L()
#define ChkL1MsgFltr_L1D_Trc_CCH_UL_DATA()	ChkL1ClsFltr_L1D_PRI_L1D_UL_CCH_DATA_H()
#define ChkL1MsgFltr_L1D_Trc_MaxTime()	ChkL1ClsFltr_L1D_PRI_L1D_MAX_TIME_L()
#define ChkL1MsgFltr_L1D_Trc_DurMargin()	ChkL1ClsFltr_L1D_PRI_L1D_MARGIN_H()
#define ChkL1MsgFltr_L1_Trace_sm1()	ChkL1ClsFltr_L1D_PRI_SleepMode_L()
#define ChkL1MsgFltr_L1_Trace_sm2()	ChkL1ClsFltr_L1D_PRI_SleepMode_L()
#define ChkL1MsgFltr_L1_Trace_sm3()	ChkL1ClsFltr_L1D_PRI_SleepMode_L()
#define ChkL1MsgFltr_L1_Trace_sm4()	ChkL1ClsFltr_L1D_PRI_SleepMode_L()
#define ChkL1MsgFltr_L1_Trace_sm5()	ChkL1ClsFltr_L1D_PRI_SleepMode_L()
#define ChkL1MsgFltr_L1D_Trace_FMResult()	ChkL1ClsFltr_L1D_PRI_FMCalibration_H()
#define ChkL1MsgFltr_L1D_AGPS_LCT_COUNTING()	ChkL1ClsFltr_L1D_PRI_L1D_AGPS_L()
#define ChkL1MsgFltr_L1D_AGPS_REPORT()	ChkL1ClsFltr_L1D_PRI_L1D_AGPS_L()
#define ChkL1MsgFltr_L1D_AGPS_FRC_PARAM()	ChkL1ClsFltr_L1D_PRI_L1D_AGPS_L()


#endif
