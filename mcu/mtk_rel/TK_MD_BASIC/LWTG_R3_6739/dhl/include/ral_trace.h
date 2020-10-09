#ifndef L1TRC_RAL_DEF_H
#define L1TRC_RAL_DEF_H

/******************************/
/* String category definition */
/******************************/


/****************************/
/* Message macro definition */
/****************************/
#include "L1Trc.h"
#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define RAL_LOG_GENERIC(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L2(RAL_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v4,v4);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x0025,0x0025);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_32_LAST_WRAPPER_L2(cgen_local_v4,v4);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(RAL_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define RAL_LOG_GENERIC(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define RAL_LOG_CR4_SND_CMD_START(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L2(RAL_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x0125,0x0125);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(RAL_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define RAL_LOG_CR4_SND_CMD_START(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define RAL_LOG_CR4_SND_CMD_END(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L2(RAL_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x0225,0x0225);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(RAL_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define RAL_LOG_CR4_SND_CMD_END(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define RAL_LOG_CR4_CMD_QUE_FULL() do {\
		{\
			TRC_START_FILTER_CHECK_L2(RAL_Trace_Filter, 1, 0x01);\
			TRC_START_FILL_L2();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L2(0x0325,0x0325);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(RAL_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define RAL_LOG_CR4_CMD_QUE_FULL()
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define RAL_LOG_CR4_CMD_QUE_FULL_1() do {\
		{\
			TRC_START_FILTER_CHECK_L2(RAL_Trace_Filter, 1, 0x01);\
			TRC_START_FILL_L2();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L2(0x0425,0x0425);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(RAL_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define RAL_LOG_CR4_CMD_QUE_FULL_1()
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define RAL_LOG_CR4_CMD_QUE_FULL_2() do {\
		{\
			TRC_START_FILTER_CHECK_L2(RAL_Trace_Filter, 1, 0x01);\
			TRC_START_FILL_L2();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L2(0x0525,0x0525);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(RAL_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define RAL_LOG_CR4_CMD_QUE_FULL_2()
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define RAL_LOG_CR4_RAL_MCU_NOT_INIT() do {\
		{\
			TRC_START_FILTER_CHECK_L2(RAL_Trace_Filter, 1, 0x01);\
			TRC_START_FILL_L2();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L2(0x0625,0x0625);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(RAL_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define RAL_LOG_CR4_RAL_MCU_NOT_INIT()
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define RAL_LOG_CR4_CMD_POLL_START(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L2(RAL_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v3,v3);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x0725,0x0725);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_32_LAST_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(RAL_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define RAL_LOG_CR4_CMD_POLL_START(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define RAL_LOG_CR4_CMD_POLL_END(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L2(RAL_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x0825,0x0825);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(RAL_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define RAL_LOG_CR4_CMD_POLL_END(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define RAL_LOG_CR4_RTP_SN_CONFIDENCE(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L2(RAL_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x0925,0x0925);\
			TRC_OUTPUT_8_LAST_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(RAL_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define RAL_LOG_CR4_RTP_SN_CONFIDENCE(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define RAL_LOG_CR4_RTP_TS_CONFIDENCE(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L2(RAL_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x0A25,0x0A25);\
			TRC_OUTPUT_8_LAST_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(RAL_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define RAL_LOG_CR4_RTP_TS_CONFIDENCE(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define RAL_LOG_CR4_UPDT_ROHC_SBP_BMP(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L2(RAL_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x0B25,0x0B25);\
			TRC_OUTPUT_32_LAST_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(RAL_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define RAL_LOG_CR4_UPDT_ROHC_SBP_BMP(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define RAL_LOG_MCU_RBM_USG(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L2(RAL_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v3,v3);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x0C25,0x0C25);\
			TRC_OUTPUT_8_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_32_LAST_WRAPPER_L2(cgen_local_v3,v3);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(RAL_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define RAL_LOG_MCU_RBM_USG(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define RAL_LOG_MCU_EXE_CMD_START(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L2(RAL_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x0D25,0x0D25);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(RAL_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define RAL_LOG_MCU_EXE_CMD_START(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define RAL_LOG_MCU_EXE_CMD_END(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L2(RAL_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x0E25,0x0E25);\
			TRC_OUTPUT_16_LAST_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(RAL_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define RAL_LOG_MCU_EXE_CMD_END(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define RAL_LOG_MCU_EXE_CMD_INIT(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L2(RAL_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x0F25,0x0F25);\
			TRC_OUTPUT_16_LAST_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(RAL_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define RAL_LOG_MCU_EXE_CMD_INIT(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define RAL_LOG_MCU_EXE_CMD_ADD_INST(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L2(RAL_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x1025,0x1025);\
			TRC_OUTPUT_16_LAST_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(RAL_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define RAL_LOG_MCU_EXE_CMD_ADD_INST(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define RAL_LOG_MCU_EXE_CMD_DEL_INST(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L2(RAL_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x1125,0x1125);\
			TRC_OUTPUT_16_LAST_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(RAL_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define RAL_LOG_MCU_EXE_CMD_DEL_INST(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define RAL_LOG_MCU_EXE_CMD_RST_INST(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L2(RAL_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x1225,0x1225);\
			TRC_OUTPUT_16_LAST_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(RAL_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define RAL_LOG_MCU_EXE_CMD_RST_INST(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define RAL_LOG_MCU_EXE_CMD_RST_INST_PARAM(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L2(RAL_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x1325,0x1325);\
			TRC_OUTPUT_16_LAST_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(RAL_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define RAL_LOG_MCU_EXE_CMD_RST_INST_PARAM(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define RAL_LOG_MCU_EXE_CMD_UL_END(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L2(RAL_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x1425,0x1425);\
			TRC_OUTPUT_16_LAST_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(RAL_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define RAL_LOG_MCU_EXE_CMD_UL_END(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define RAL_LOG_CR4_DL_POLL_PKT_DROP(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L2(RAL_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x1525,0x1525);\
			TRC_OUTPUT_16_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(RAL_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define RAL_LOG_CR4_DL_POLL_PKT_DROP(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define RAL_LOG_CR4_CAIF_MSG_BUF_READ_ERR() do {\
		{\
			TRC_START_FILTER_CHECK_L2(RAL_Trace_Filter, 1, 0x01);\
			TRC_START_FILL_L2();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L2(0x1625,0x1625);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(RAL_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define RAL_LOG_CR4_CAIF_MSG_BUF_READ_ERR()
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define RAL_LOG_CR4_FDBK_GPD_ALLOC_ERR() do {\
		{\
			TRC_START_FILTER_CHECK_L2(RAL_Trace_Filter, 1, 0x01);\
			TRC_START_FILL_L2();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L2(0x1725,0x1725);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(RAL_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define RAL_LOG_CR4_FDBK_GPD_ALLOC_ERR()
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define RAL_LOG_CR4_UL_GPD_ALLOC_ERR() do {\
		{\
			TRC_START_FILTER_CHECK_L2(RAL_Trace_Filter, 1, 0x01);\
			TRC_START_FILL_L2();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L2(0x1825,0x1825);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(RAL_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define RAL_LOG_CR4_UL_GPD_ALLOC_ERR()
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define RAL_LOG_CR4_CMPRS_ERR(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L2(RAL_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x1925,0x1925);\
			TRC_OUTPUT_16_LAST_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(RAL_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define RAL_LOG_CR4_CMPRS_ERR(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define RAL_LOG_MCU_RBM_BUF_TYPE_ERR(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L2(RAL_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x1A25,0x1A25);\
			TRC_OUTPUT_16_LAST_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(RAL_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define RAL_LOG_MCU_RBM_BUF_TYPE_ERR(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define RAL_LOG_MCU_CMPRS_ERR(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L2(RAL_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x1B25,0x1B25);\
			TRC_OUTPUT_16_LAST_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(RAL_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define RAL_LOG_MCU_CMPRS_ERR(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define RAL_LOG_CR4_CMD_RES_ERR(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L2(RAL_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x1C25,0x1C25);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(RAL_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define RAL_LOG_CR4_CMD_RES_ERR(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define RAL_LOG_CR4_CMD_INST_PARAM_ERR(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L2(RAL_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v2,v2);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x1D25,0x1D25);\
			TRC_OUTPUT_32_MID_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L2(cgen_local_v2,v2);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(RAL_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define RAL_LOG_CR4_CMD_INST_PARAM_ERR(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define RAL_LOG_CR4_CMD_ID_ERR(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L2(RAL_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x1E25,0x1E25);\
			TRC_OUTPUT_32_LAST_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(RAL_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define RAL_LOG_CR4_CMD_ID_ERR(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define RAL_LOG_MCU_RBM_ALLOW_LEN_ERR(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L2(RAL_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L2(cgen_local_v1,v1);\
			TRC_START_FILL_L2();\
			TRC_PREPROCESS_DATA_SECTION2_L2(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L2(0x1F25,0x1F25);\
			TRC_OUTPUT_16_LAST_WRAPPER_L2(cgen_local_v1,v1);\
			TRC_END_FILL_L2();\
			TRC_END_FILTER_CHECK_L2(RAL_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define RAL_LOG_MCU_RBM_ALLOW_LEN_ERR(v1)
#endif



/*******************************/
/* declaration of filter array */
/*******************************/
EXTERN_TMD_FILTER(unsigned char, RAL_Trace_Filter, 5);
/*************************/
/* Function declarations */
/*************************/
#ifdef L1_CATCHER

void Set_RAL_Filter(unsigned char *setting);

#endif

/************************************/
/* Filter checking API declarations */
/************************************/

#define ChkL1ModFltr_RAL()	(FILTER_CHECK(RAL_Trace_Filter, 0, 1))
#define ChkL1ClsFltr_RAL_RAL_INFO()	(ChkL1ModFltr_RAL()&&(FILTER_CHECK(RAL_Trace_Filter, 1, 0x01)))
#define ChkL1ClsFltr_RAL_RAL_DUMP()	(ChkL1ModFltr_RAL()&&(FILTER_CHECK(RAL_Trace_Filter, 1, 0x02)))
#define ChkL1MsgFltr_RAL_LOG_GENERIC()	ChkL1ClsFltr_RAL_RAL_DUMP()
#define ChkL1MsgFltr_RAL_LOG_CR4_SND_CMD_START()	ChkL1ClsFltr_RAL_RAL_DUMP()
#define ChkL1MsgFltr_RAL_LOG_CR4_SND_CMD_END()	ChkL1ClsFltr_RAL_RAL_DUMP()
#define ChkL1MsgFltr_RAL_LOG_CR4_CMD_QUE_FULL()	ChkL1ClsFltr_RAL_RAL_INFO()
#define ChkL1MsgFltr_RAL_LOG_CR4_CMD_QUE_FULL_1()	ChkL1ClsFltr_RAL_RAL_INFO()
#define ChkL1MsgFltr_RAL_LOG_CR4_CMD_QUE_FULL_2()	ChkL1ClsFltr_RAL_RAL_INFO()
#define ChkL1MsgFltr_RAL_LOG_CR4_RAL_MCU_NOT_INIT()	ChkL1ClsFltr_RAL_RAL_INFO()
#define ChkL1MsgFltr_RAL_LOG_CR4_CMD_POLL_START()	ChkL1ClsFltr_RAL_RAL_DUMP()
#define ChkL1MsgFltr_RAL_LOG_CR4_CMD_POLL_END()	ChkL1ClsFltr_RAL_RAL_DUMP()
#define ChkL1MsgFltr_RAL_LOG_CR4_RTP_SN_CONFIDENCE()	ChkL1ClsFltr_RAL_RAL_INFO()
#define ChkL1MsgFltr_RAL_LOG_CR4_RTP_TS_CONFIDENCE()	ChkL1ClsFltr_RAL_RAL_INFO()
#define ChkL1MsgFltr_RAL_LOG_CR4_UPDT_ROHC_SBP_BMP()	ChkL1ClsFltr_RAL_RAL_DUMP()
#define ChkL1MsgFltr_RAL_LOG_MCU_RBM_USG()	ChkL1ClsFltr_RAL_RAL_INFO()
#define ChkL1MsgFltr_RAL_LOG_MCU_EXE_CMD_START()	ChkL1ClsFltr_RAL_RAL_DUMP()
#define ChkL1MsgFltr_RAL_LOG_MCU_EXE_CMD_END()	ChkL1ClsFltr_RAL_RAL_DUMP()
#define ChkL1MsgFltr_RAL_LOG_MCU_EXE_CMD_INIT()	ChkL1ClsFltr_RAL_RAL_INFO()
#define ChkL1MsgFltr_RAL_LOG_MCU_EXE_CMD_ADD_INST()	ChkL1ClsFltr_RAL_RAL_INFO()
#define ChkL1MsgFltr_RAL_LOG_MCU_EXE_CMD_DEL_INST()	ChkL1ClsFltr_RAL_RAL_INFO()
#define ChkL1MsgFltr_RAL_LOG_MCU_EXE_CMD_RST_INST()	ChkL1ClsFltr_RAL_RAL_INFO()
#define ChkL1MsgFltr_RAL_LOG_MCU_EXE_CMD_RST_INST_PARAM()	ChkL1ClsFltr_RAL_RAL_INFO()
#define ChkL1MsgFltr_RAL_LOG_MCU_EXE_CMD_UL_END()	ChkL1ClsFltr_RAL_RAL_INFO()
#define ChkL1MsgFltr_RAL_LOG_CR4_DL_POLL_PKT_DROP()	ChkL1ClsFltr_RAL_RAL_INFO()
#define ChkL1MsgFltr_RAL_LOG_CR4_CAIF_MSG_BUF_READ_ERR()	ChkL1ClsFltr_RAL_RAL_INFO()
#define ChkL1MsgFltr_RAL_LOG_CR4_FDBK_GPD_ALLOC_ERR()	ChkL1ClsFltr_RAL_RAL_INFO()
#define ChkL1MsgFltr_RAL_LOG_CR4_UL_GPD_ALLOC_ERR()	ChkL1ClsFltr_RAL_RAL_INFO()
#define ChkL1MsgFltr_RAL_LOG_CR4_CMPRS_ERR()	ChkL1ClsFltr_RAL_RAL_INFO()
#define ChkL1MsgFltr_RAL_LOG_MCU_RBM_BUF_TYPE_ERR()	ChkL1ClsFltr_RAL_RAL_INFO()
#define ChkL1MsgFltr_RAL_LOG_MCU_CMPRS_ERR()	ChkL1ClsFltr_RAL_RAL_INFO()
#define ChkL1MsgFltr_RAL_LOG_CR4_CMD_RES_ERR()	ChkL1ClsFltr_RAL_RAL_INFO()
#define ChkL1MsgFltr_RAL_LOG_CR4_CMD_INST_PARAM_ERR()	ChkL1ClsFltr_RAL_RAL_INFO()
#define ChkL1MsgFltr_RAL_LOG_CR4_CMD_ID_ERR()	ChkL1ClsFltr_RAL_RAL_INFO()
#define ChkL1MsgFltr_RAL_LOG_MCU_RBM_ALLOW_LEN_ERR()	ChkL1ClsFltr_RAL_RAL_INFO()


#endif
