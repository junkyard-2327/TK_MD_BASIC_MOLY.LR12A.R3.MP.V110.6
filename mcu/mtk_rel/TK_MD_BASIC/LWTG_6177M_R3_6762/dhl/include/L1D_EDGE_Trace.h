#ifndef L1TRC_L1D_EDGE_DEF_H
#define L1TRC_L1D_EDGE_DEF_H

/******************************/
/* String category definition */
/******************************/
#define L1D_Str_FBM_PROC(v1)  (unsigned char)(v1+0)
#define L1D_Str_RTTI(v1)  (unsigned char)(v1+8)


/****************************/
/* Message macro definition */
/****************************/
#include "L1Trc.h"
#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define L1D_Trc_DelayCD(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1D_EDGE_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0062,0x0062);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1D_EDGE_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define L1D_Trc_DelayCD(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define L1D_Trc_PTCCH_CD_TOGETHER() do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1D_EDGE_Trace_Filter, 1, 0x01);\
			TRC_START_FILL_L1();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L1(0x0162,0x0162);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1D_EDGE_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define L1D_Trc_PTCCH_CD_TOGETHER()
#endif

#if defined(L1_CATCHER)
	#define L1D_Trc_USF_Status(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1D_EDGE_Trace_Filter, 3, 0x20);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0262,0x0262);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1D_EDGE_Trace_Filter, 3, 0x20);\
		}\
	} while(0)
#else
	#define L1D_Trc_USF_Status(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define L1D_USF_Modtype(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1D_EDGE_Trace_Filter, 3, 0x20);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0362,0x0362);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1D_EDGE_Trace_Filter, 3, 0x20);\
		}\
	} while(0)
#else
	#define L1D_USF_Modtype(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define L1D_USF_3R_Status(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1D_EDGE_Trace_Filter, 3, 0x20);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0462,0x0462);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1D_EDGE_Trace_Filter, 3, 0x20);\
		}\
	} while(0)
#else
	#define L1D_USF_3R_Status(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define L1D_DSP_Mod_type(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1D_EDGE_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0562,0x0562);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1D_EDGE_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define L1D_DSP_Mod_type(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define L1D_DSP_REPORT_D_VALUE(v1, v2, v3, v4, v5, v6) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1D_EDGE_Trace_Filter, 3, 0x40);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0662,0x0662);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1D_EDGE_Trace_Filter, 3, 0x40);\
		}\
	} while(0)
#else
	#define L1D_DSP_REPORT_D_VALUE(v1, v2, v3, v4, v5, v6)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define L1D_DSP_SRB_MACHINE(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1D_EDGE_Trace_Filter, 1, 0x10);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0762,0x0762);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1D_EDGE_Trace_Filter, 1, 0x10);\
		}\
	} while(0)
#else
	#define L1D_DSP_SRB_MACHINE(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define L1D_USF_Dummy_Detect(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1D_EDGE_Trace_Filter, 1, 0x20);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0862,0x0862);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1D_EDGE_Trace_Filter, 1, 0x20);\
		}\
	} while(0)
#else
	#define L1D_USF_Dummy_Detect(v1)
#endif

#if defined(L1_CATCHER)
	#define L1D_TX_AFC_Dac(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1D_EDGE_Trace_Filter, 3, 0x80);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0962,0x0962);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1D_EDGE_Trace_Filter, 3, 0x80);\
		}\
	} while(0)
#else
	#define L1D_TX_AFC_Dac(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define L1D_IGain_Update(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1D_EDGE_Trace_Filter, 1, 0x80);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0A62,0x0A62);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1D_EDGE_Trace_Filter, 1, 0x80);\
		}\
	} while(0)
#else
	#define L1D_IGain_Update(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define L1D_IGain_NewGain(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1D_EDGE_Trace_Filter, 1, 0x80);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0B62,0x0B62);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1D_EDGE_Trace_Filter, 1, 0x80);\
		}\
	} while(0)
#else
	#define L1D_IGain_NewGain(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define L1D_Rxiq_Phase_Update(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1D_EDGE_Trace_Filter, 2, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0C62,0x0C62);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1D_EDGE_Trace_Filter, 2, 0x01);\
		}\
	} while(0)
#else
	#define L1D_Rxiq_Phase_Update(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define L1D_Rxiq_NewPhase(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1D_EDGE_Trace_Filter, 2, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0D62,0x0D62);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1D_EDGE_Trace_Filter, 2, 0x01);\
		}\
	} while(0)
#else
	#define L1D_Rxiq_NewPhase(v1)
#endif

#if defined(L1_CATCHER)
	#define L1D_CTIRQ_PRE_EQ(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1D_EDGE_Trace_Filter, 4, 0x01);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0E62,0x0E62);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1D_EDGE_Trace_Filter, 4, 0x01);\
		}\
	} while(0)
#else
	#define L1D_CTIRQ_PRE_EQ(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER)
	#define L1D_CTIRQ_POST_EQ(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1D_EDGE_Trace_Filter, 4, 0x01);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0F62,0x0F62);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1D_EDGE_Trace_Filter, 4, 0x01);\
		}\
	} while(0)
#else
	#define L1D_CTIRQ_POST_EQ(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER)
	#define L1D_6229_FB_power(v1, v2, v3, v4, v5, v6, v7) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1D_EDGE_Trace_Filter, 4, 0x02);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1062,0x1062);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v7,v7);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1D_EDGE_Trace_Filter, 4, 0x02);\
		}\
	} while(0)
#else
	#define L1D_6229_FB_power(v1, v2, v3, v4, v5, v6, v7)
#endif

#if defined(L1_CATCHER)
	#define L1D_TX_info(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1D_EDGE_Trace_Filter, 4, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1162,0x1162);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1D_EDGE_Trace_Filter, 4, 0x04);\
		}\
	} while(0)
#else
	#define L1D_TX_info(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define L1D_Trc_RX_DC_Offset(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1D_EDGE_Trace_Filter, 2, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1262,0x1262);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1D_EDGE_Trace_Filter, 2, 0x10);\
		}\
	} while(0)
#else
	#define L1D_Trc_RX_DC_Offset(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define L1D_Trc_RX_DC_Offset_DRX(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1D_EDGE_Trace_Filter, 2, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1362,0x1362);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1D_EDGE_Trace_Filter, 2, 0x10);\
		}\
	} while(0)
#else
	#define L1D_Trc_RX_DC_Offset_DRX(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define L1D_Trc_SAIC_FOE(v1, v2, v3, v4, v5, v6) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1D_EDGE_Trace_Filter, 4, 0x10);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1462,0x1462);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1D_EDGE_Trace_Filter, 4, 0x10);\
		}\
	} while(0)
#else
	#define L1D_Trc_SAIC_FOE(v1, v2, v3, v4, v5, v6)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define L1D_Trc_SAIC_FWBW_SNR(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1D_EDGE_Trace_Filter, 3, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1562,0x1562);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1D_EDGE_Trace_Filter, 3, 0x01);\
		}\
	} while(0)
#else
	#define L1D_Trc_SAIC_FWBW_SNR(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define L1D_Trc_Static_Detect(v1, v2, v3, v4, v5, v6, v7, v8) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1D_EDGE_Trace_Filter, 4, 0x20);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1662,0x1662);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v7,v7);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v8,v8);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1D_EDGE_Trace_Filter, 4, 0x20);\
		}\
	} while(0)
#else
	#define L1D_Trc_Static_Detect(v1, v2, v3, v4, v5, v6, v7, v8)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define L1D_Trc_FWBW_DCOC(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1D_EDGE_Trace_Filter, 3, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1762,0x1762);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1D_EDGE_Trace_Filter, 3, 0x04);\
		}\
	} while(0)
#else
	#define L1D_Trc_FWBW_DCOC(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define L1D_Trc_Step_DC_tmp(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1D_EDGE_Trace_Filter, 3, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1862,0x1862);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1D_EDGE_Trace_Filter, 3, 0x04);\
		}\
	} while(0)
#else
	#define L1D_Trc_Step_DC_tmp(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define L1D_NSFT_TRACE_GetSBFail(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1D_EDGE_Trace_Filter, 3, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1962,0x1962);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1D_EDGE_Trace_Filter, 3, 0x08);\
		}\
	} while(0)
#else
	#define L1D_NSFT_TRACE_GetSBFail(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define L1D_Trc_PCH_Report() do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1D_EDGE_Trace_Filter, 1, 0x02);\
			TRC_START_FILL_L1();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L1(0x1A62,0x1A62);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1D_EDGE_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define L1D_Trc_PCH_Report()
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define L1D_FANR_ULTBF_Info(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1D_EDGE_Trace_Filter, 3, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1B62,0x1B62);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1D_EDGE_Trace_Filter, 3, 0x10);\
		}\
	} while(0)
#else
	#define L1D_FANR_ULTBF_Info(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define L1D_RTTI_ULTBF_Info(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1D_EDGE_Trace_Filter, 3, 0x10);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1C62,0x1C62);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1D_EDGE_Trace_Filter, 3, 0x10);\
		}\
	} while(0)
#else
	#define L1D_RTTI_ULTBF_Info(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define L1D_RTTI_DLTBF_Info(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1D_EDGE_Trace_Filter, 3, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1D62,0x1D62);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1D_EDGE_Trace_Filter, 3, 0x10);\
		}\
	} while(0)
#else
	#define L1D_RTTI_DLTBF_Info(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define L1D_FANR_Rx_Info(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1D_EDGE_Trace_Filter, 3, 0x10);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1E62,0x1E62);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1D_EDGE_Trace_Filter, 3, 0x10);\
		}\
	} while(0)
#else
	#define L1D_FANR_Rx_Info(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define L1D_RTTI_Slot_Info(v1, v2, v3, v4, v5, v6) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1D_EDGE_Trace_Filter, 3, 0x10);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1F62,0x1F62);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1D_EDGE_Trace_Filter, 3, 0x10);\
		}\
	} while(0)
#else
	#define L1D_RTTI_Slot_Info(v1, v2, v3, v4, v5, v6)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define L1D_RTTI_Header_Info(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1D_EDGE_Trace_Filter, 3, 0x10);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x2062,0x2062);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1D_EDGE_Trace_Filter, 3, 0x10);\
		}\
	} while(0)
#else
	#define L1D_RTTI_Header_Info(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define L1D_RTTI_FANR_TRC_DEBUG(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1D_EDGE_Trace_Filter, 3, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x2162,0x2162);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1D_EDGE_Trace_Filter, 3, 0x10);\
		}\
	} while(0)
#else
	#define L1D_RTTI_FANR_TRC_DEBUG(v1, v2, v3)
#endif



/*******************************/
/* declaration of filter array */
/*******************************/
EXTERN_TMD_FILTER(unsigned char, L1D_EDGE_Trace_Filter, 5);
/*************************/
/* Function declarations */
/*************************/
#ifdef L1_CATCHER

void Set_L1D_EDGE_Filter(unsigned char *setting);

#endif

/************************************/
/* Filter checking API declarations */
/************************************/

#define ChkL1ModFltr_L1D_EDGE()	(FILTER_CHECK(L1D_EDGE_Trace_Filter, 0, 1))
#define ChkL1ClsFltr_L1D_EDGE_L1D_EDGE_State_L()	(ChkL1ModFltr_L1D_EDGE()&&(FILTER_CHECK(L1D_EDGE_Trace_Filter, 1, 0x01)))
#define ChkL1ClsFltr_L1D_EDGE_L1D_USF_Status_M()	(ChkL1ModFltr_L1D_EDGE()&&(FILTER_CHECK(L1D_EDGE_Trace_Filter, 1, 0x02)))
#define ChkL1ClsFltr_L1D_EDGE_L1D_DSP_Modtype_L()	(ChkL1ModFltr_L1D_EDGE()&&(FILTER_CHECK(L1D_EDGE_Trace_Filter, 1, 0x04)))
#define ChkL1ClsFltr_L1D_EDGE_L1D_DSP_Dvalue_M()	(ChkL1ModFltr_L1D_EDGE()&&(FILTER_CHECK(L1D_EDGE_Trace_Filter, 1, 0x08)))
#define ChkL1ClsFltr_L1D_EDGE_L1D_TEST_SRB_L()	(ChkL1ModFltr_L1D_EDGE()&&(FILTER_CHECK(L1D_EDGE_Trace_Filter, 1, 0x10)))
#define ChkL1ClsFltr_L1D_EDGE_L1D_USF_DEBUG_L()	(ChkL1ModFltr_L1D_EDGE()&&(FILTER_CHECK(L1D_EDGE_Trace_Filter, 1, 0x20)))
#define ChkL1ClsFltr_L1D_EDGE_L1D_TX_AFC_DAC_M()	(ChkL1ModFltr_L1D_EDGE()&&(FILTER_CHECK(L1D_EDGE_Trace_Filter, 1, 0x40)))
#define ChkL1ClsFltr_L1D_EDGE_L1D_IGain_Compen_L()	(ChkL1ModFltr_L1D_EDGE()&&(FILTER_CHECK(L1D_EDGE_Trace_Filter, 1, 0x80)))
#define ChkL1ClsFltr_L1D_EDGE_L1D_IQ_Phase_Compen_L()	(ChkL1ModFltr_L1D_EDGE()&&(FILTER_CHECK(L1D_EDGE_Trace_Filter, 2, 0x01)))
#define ChkL1ClsFltr_L1D_EDGE_L1D_NBRES_M()	(ChkL1ModFltr_L1D_EDGE()&&(FILTER_CHECK(L1D_EDGE_Trace_Filter, 2, 0x02)))
#define ChkL1ClsFltr_L1D_EDGE_L1D_6229_FB_M()	(ChkL1ModFltr_L1D_EDGE()&&(FILTER_CHECK(L1D_EDGE_Trace_Filter, 2, 0x04)))
#define ChkL1ClsFltr_L1D_EDGE_L1D_TX_MODULATION_M()	(ChkL1ModFltr_L1D_EDGE()&&(FILTER_CHECK(L1D_EDGE_Trace_Filter, 2, 0x08)))
#define ChkL1ClsFltr_L1D_EDGE_L1D_RX_DC_Offset_M()	(ChkL1ModFltr_L1D_EDGE()&&(FILTER_CHECK(L1D_EDGE_Trace_Filter, 2, 0x10)))
#define ChkL1ClsFltr_L1D_EDGE_L1D_EDGE_USF_L()	(ChkL1ModFltr_L1D_EDGE()&&(FILTER_CHECK(L1D_EDGE_Trace_Filter, 2, 0x20)))
#define ChkL1ClsFltr_L1D_EDGE_L1D_SAIC_SNR_M()	(ChkL1ModFltr_L1D_EDGE()&&(FILTER_CHECK(L1D_EDGE_Trace_Filter, 2, 0x40)))
#define ChkL1ClsFltr_L1D_EDGE_L1D_SAIC_FOE_M()	(ChkL1ModFltr_L1D_EDGE()&&(FILTER_CHECK(L1D_EDGE_Trace_Filter, 2, 0x80)))
#define ChkL1ClsFltr_L1D_EDGE_L1D_SAIC_FWBW_SNR_L()	(ChkL1ModFltr_L1D_EDGE()&&(FILTER_CHECK(L1D_EDGE_Trace_Filter, 3, 0x01)))
#define ChkL1ClsFltr_L1D_EDGE_L1D_SAIC_StaticDet_M()	(ChkL1ModFltr_L1D_EDGE()&&(FILTER_CHECK(L1D_EDGE_Trace_Filter, 3, 0x02)))
#define ChkL1ClsFltr_L1D_EDGE_L1D_AM_Suppression_L()	(ChkL1ModFltr_L1D_EDGE()&&(FILTER_CHECK(L1D_EDGE_Trace_Filter, 3, 0x04)))
#define ChkL1ClsFltr_L1D_EDGE_L1D_NSFT_H()	(ChkL1ModFltr_L1D_EDGE()&&(FILTER_CHECK(L1D_EDGE_Trace_Filter, 3, 0x08)))
#define ChkL1ClsFltr_L1D_EDGE_L1D_RTTI_FANR_M()	(ChkL1ModFltr_L1D_EDGE()&&(FILTER_CHECK(L1D_EDGE_Trace_Filter, 3, 0x10)))
#define ChkL1ClsFltr_L1D_EDGE_L1D_USF_Status_H()	(ChkL1ModFltr_L1D_EDGE()&&(FILTER_CHECK(L1D_EDGE_Trace_Filter, 3, 0x20)))
#define ChkL1ClsFltr_L1D_EDGE_L1D_DSP_Dvalue_H()	(ChkL1ModFltr_L1D_EDGE()&&(FILTER_CHECK(L1D_EDGE_Trace_Filter, 3, 0x40)))
#define ChkL1ClsFltr_L1D_EDGE_L1D_TX_AFC_DAC_H()	(ChkL1ModFltr_L1D_EDGE()&&(FILTER_CHECK(L1D_EDGE_Trace_Filter, 3, 0x80)))
#define ChkL1ClsFltr_L1D_EDGE_L1D_NBRES_H()	(ChkL1ModFltr_L1D_EDGE()&&(FILTER_CHECK(L1D_EDGE_Trace_Filter, 4, 0x01)))
#define ChkL1ClsFltr_L1D_EDGE_L1D_6229_FB_H()	(ChkL1ModFltr_L1D_EDGE()&&(FILTER_CHECK(L1D_EDGE_Trace_Filter, 4, 0x02)))
#define ChkL1ClsFltr_L1D_EDGE_L1D_TX_MODULATION_H()	(ChkL1ModFltr_L1D_EDGE()&&(FILTER_CHECK(L1D_EDGE_Trace_Filter, 4, 0x04)))
#define ChkL1ClsFltr_L1D_EDGE_L1D_SAIC_SNR_H()	(ChkL1ModFltr_L1D_EDGE()&&(FILTER_CHECK(L1D_EDGE_Trace_Filter, 4, 0x08)))
#define ChkL1ClsFltr_L1D_EDGE_L1D_SAIC_FOE_H()	(ChkL1ModFltr_L1D_EDGE()&&(FILTER_CHECK(L1D_EDGE_Trace_Filter, 4, 0x10)))
#define ChkL1ClsFltr_L1D_EDGE_L1D_SAIC_StaticDet_H()	(ChkL1ModFltr_L1D_EDGE()&&(FILTER_CHECK(L1D_EDGE_Trace_Filter, 4, 0x20)))
#define ChkL1MsgFltr_L1D_Trc_DelayCD()	ChkL1ClsFltr_L1D_EDGE_L1D_EDGE_State_L()
#define ChkL1MsgFltr_L1D_Trc_PTCCH_CD_TOGETHER()	ChkL1ClsFltr_L1D_EDGE_L1D_EDGE_State_L()
#define ChkL1MsgFltr_L1D_Trc_USF_Status()	ChkL1ClsFltr_L1D_EDGE_L1D_USF_Status_H()
#define ChkL1MsgFltr_L1D_USF_Modtype()	ChkL1ClsFltr_L1D_EDGE_L1D_USF_Status_H()
#define ChkL1MsgFltr_L1D_USF_3R_Status()	ChkL1ClsFltr_L1D_EDGE_L1D_USF_Status_H()
#define ChkL1MsgFltr_L1D_DSP_Mod_type()	ChkL1ClsFltr_L1D_EDGE_L1D_DSP_Modtype_L()
#define ChkL1MsgFltr_L1D_DSP_REPORT_D_VALUE()	ChkL1ClsFltr_L1D_EDGE_L1D_DSP_Dvalue_H()
#define ChkL1MsgFltr_L1D_DSP_SRB_MACHINE()	ChkL1ClsFltr_L1D_EDGE_L1D_TEST_SRB_L()
#define ChkL1MsgFltr_L1D_USF_Dummy_Detect()	ChkL1ClsFltr_L1D_EDGE_L1D_USF_DEBUG_L()
#define ChkL1MsgFltr_L1D_TX_AFC_Dac()	ChkL1ClsFltr_L1D_EDGE_L1D_TX_AFC_DAC_H()
#define ChkL1MsgFltr_L1D_IGain_Update()	ChkL1ClsFltr_L1D_EDGE_L1D_IGain_Compen_L()
#define ChkL1MsgFltr_L1D_IGain_NewGain()	ChkL1ClsFltr_L1D_EDGE_L1D_IGain_Compen_L()
#define ChkL1MsgFltr_L1D_Rxiq_Phase_Update()	ChkL1ClsFltr_L1D_EDGE_L1D_IQ_Phase_Compen_L()
#define ChkL1MsgFltr_L1D_Rxiq_NewPhase()	ChkL1ClsFltr_L1D_EDGE_L1D_IQ_Phase_Compen_L()
#define ChkL1MsgFltr_L1D_CTIRQ_PRE_EQ()	ChkL1ClsFltr_L1D_EDGE_L1D_NBRES_H()
#define ChkL1MsgFltr_L1D_CTIRQ_POST_EQ()	ChkL1ClsFltr_L1D_EDGE_L1D_NBRES_H()
#define ChkL1MsgFltr_L1D_6229_FB_power()	ChkL1ClsFltr_L1D_EDGE_L1D_6229_FB_H()
#define ChkL1MsgFltr_L1D_TX_info()	ChkL1ClsFltr_L1D_EDGE_L1D_TX_MODULATION_H()
#define ChkL1MsgFltr_L1D_Trc_RX_DC_Offset()	ChkL1ClsFltr_L1D_EDGE_L1D_RX_DC_Offset_M()
#define ChkL1MsgFltr_L1D_Trc_RX_DC_Offset_DRX()	ChkL1ClsFltr_L1D_EDGE_L1D_RX_DC_Offset_M()
#define ChkL1MsgFltr_L1D_Trc_SAIC_FOE()	ChkL1ClsFltr_L1D_EDGE_L1D_SAIC_FOE_H()
#define ChkL1MsgFltr_L1D_Trc_SAIC_FWBW_SNR()	ChkL1ClsFltr_L1D_EDGE_L1D_SAIC_FWBW_SNR_L()
#define ChkL1MsgFltr_L1D_Trc_Static_Detect()	ChkL1ClsFltr_L1D_EDGE_L1D_SAIC_StaticDet_H()
#define ChkL1MsgFltr_L1D_Trc_FWBW_DCOC()	ChkL1ClsFltr_L1D_EDGE_L1D_AM_Suppression_L()
#define ChkL1MsgFltr_L1D_Trc_Step_DC_tmp()	ChkL1ClsFltr_L1D_EDGE_L1D_AM_Suppression_L()
#define ChkL1MsgFltr_L1D_NSFT_TRACE_GetSBFail()	ChkL1ClsFltr_L1D_EDGE_L1D_NSFT_H()
#define ChkL1MsgFltr_L1D_Trc_PCH_Report()	ChkL1ClsFltr_L1D_EDGE_L1D_USF_Status_M()
#define ChkL1MsgFltr_L1D_FANR_ULTBF_Info()	ChkL1ClsFltr_L1D_EDGE_L1D_RTTI_FANR_M()
#define ChkL1MsgFltr_L1D_RTTI_ULTBF_Info()	ChkL1ClsFltr_L1D_EDGE_L1D_RTTI_FANR_M()
#define ChkL1MsgFltr_L1D_RTTI_DLTBF_Info()	ChkL1ClsFltr_L1D_EDGE_L1D_RTTI_FANR_M()
#define ChkL1MsgFltr_L1D_FANR_Rx_Info()	ChkL1ClsFltr_L1D_EDGE_L1D_RTTI_FANR_M()
#define ChkL1MsgFltr_L1D_RTTI_Slot_Info()	ChkL1ClsFltr_L1D_EDGE_L1D_RTTI_FANR_M()
#define ChkL1MsgFltr_L1D_RTTI_Header_Info()	ChkL1ClsFltr_L1D_EDGE_L1D_RTTI_FANR_M()
#define ChkL1MsgFltr_L1D_RTTI_FANR_TRC_DEBUG()	ChkL1ClsFltr_L1D_EDGE_L1D_RTTI_FANR_M()


#endif
