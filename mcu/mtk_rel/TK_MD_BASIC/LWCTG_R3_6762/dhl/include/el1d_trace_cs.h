#ifndef L1TRC_EL1D_CS_DEF_H
#define L1TRC_EL1D_CS_DEF_H

/******************************/
/* String category definition */
/******************************/
#define EL1D_TRC_STR_CS_INJ_MSG(v1)  (unsigned char)(v1+0)


/****************************/
/* Message macro definition */
/****************************/
#include "L1Trc.h"
#if defined(L1_CATCHER)
	#define EL1D_TRC_CS_CMD_ID_H(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_CS_Trace_Filter, 2, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x004E,0x004E);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_CS_Trace_Filter, 2, 0x10);\
		}\
	} while(0)
#else
	#define EL1D_TRC_CS_CMD_ID_H(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_CS_CMD_INFO_1_H(v1, v2, v3, v4, v5, v6, v7, v8, v9) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_CS_Trace_Filter, 2, 0x10);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x014E,0x014E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v7,v7);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v8,v8);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v9,v9);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_CS_Trace_Filter, 2, 0x10);\
		}\
	} while(0)
#else
	#define EL1D_TRC_CS_CMD_INFO_1_H(v1, v2, v3, v4, v5, v6, v7, v8, v9)
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_CS_CMD_INFO_2_H(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_CS_Trace_Filter, 2, 0x10);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x024E,0x024E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v7,v7);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v8,v8);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v9,v9);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v10,v10);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v11,v11);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_CS_Trace_Filter, 2, 0x10);\
		}\
	} while(0)
#else
	#define EL1D_TRC_CS_CMD_INFO_2_H(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11)
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_CS_CMD_RELEASE(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_CS_Trace_Filter, 2, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x034E,0x034E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_CS_Trace_Filter, 2, 0x10);\
		}\
	} while(0)
#else
	#define EL1D_TRC_CS_CMD_RELEASE(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_CS_CMD_UPDATA_INFO(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_CS_Trace_Filter, 2, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x044E,0x044E);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_CS_Trace_Filter, 2, 0x10);\
		}\
	} while(0)
#else
	#define EL1D_TRC_CS_CMD_UPDATA_INFO(v1)
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_CS_EM_PSS_INFO(v1, v2, v3, v4, v5, v6) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_CS_Trace_Filter, 2, 0x10);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x054E,0x054E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_CS_Trace_Filter, 2, 0x10);\
		}\
	} while(0)
#else
	#define EL1D_TRC_CS_EM_PSS_INFO(v1, v2, v3, v4, v5, v6)
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_CS_EM_SSS_INFO(v1, v2, v3, v4, v5, v6, v7) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_CS_Trace_Filter, 2, 0x10);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x064E,0x064E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v7,v7);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_CS_Trace_Filter, 2, 0x10);\
		}\
	} while(0)
#else
	#define EL1D_TRC_CS_EM_SSS_INFO(v1, v2, v3, v4, v5, v6, v7)
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_CS_EM_INVALID_EL1C_INFO() do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_CS_Trace_Filter, 2, 0x10);\
			TRC_START_FILL_L1();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L1(0x074E,0x074E);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_CS_Trace_Filter, 2, 0x10);\
		}\
	} while(0)
#else
	#define EL1D_TRC_CS_EM_INVALID_EL1C_INFO()
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_CS_EM_CELL_DB_INFO() do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_CS_Trace_Filter, 2, 0x10);\
			TRC_START_FILL_L1();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L1(0x084E,0x084E);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_CS_Trace_Filter, 2, 0x10);\
		}\
	} while(0)
#else
	#define EL1D_TRC_CS_EM_CELL_DB_INFO()
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_CS_DUMP_STATE_CHANGE_H(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_CS_Trace_Filter, 2, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x094E,0x094E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_CS_Trace_Filter, 2, 0x04);\
		}\
	} while(0)
#else
	#define EL1D_TRC_CS_DUMP_STATE_CHANGE_H(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_CS_RFCC_PREPARE2(v1, v2, v3, v4, v5, v6, v7) do {\
		{\
			TRC_START_FILTER_CHECK_L1_NON_SMP(EL1D_CS_Trace_Filter, 2, 0x04);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1_NON_SMP(0x0A4E,0x0A4E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v5,v5);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v6,v6);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1_NON_SMP(cgen_local_v7,v7);\
			TRC_END_FILL_L1_NON_SMP();\
			TRC_END_FILTER_CHECK_L1_NON_SMP(EL1D_CS_Trace_Filter, 2, 0x04);\
		}\
	} while(0)
#else
	#define EL1D_TRC_CS_RFCC_PREPARE2(v1, v2, v3, v4, v5, v6, v7)
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_CS_RF_ON_OFF_INFO_H(v1, v2, v3, v4, v5, v6, v7, v8, v9) do {\
		{\
			TRC_START_FILTER_CHECK_L1_NON_SMP(EL1D_CS_Trace_Filter, 2, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v5,v5);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v6,v6);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v7,v7);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v8,v8);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v9,v9);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1_NON_SMP(0x0B4E,0x0B4E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v5,v5);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v6,v6);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v7,v7);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v8,v8);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1_NON_SMP(cgen_local_v9,v9);\
			TRC_END_FILL_L1_NON_SMP();\
			TRC_END_FILTER_CHECK_L1_NON_SMP(EL1D_CS_Trace_Filter, 2, 0x04);\
		}\
	} while(0)
#else
	#define EL1D_TRC_CS_RF_ON_OFF_INFO_H(v1, v2, v3, v4, v5, v6, v7, v8, v9)
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_CS_RF_ABORT_INFO_H(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1_NON_SMP(EL1D_CS_Trace_Filter, 2, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_START_FILL_L1_NON_SMP();\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1_NON_SMP(0x0C4E,0x0C4E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_END_FILL_L1_NON_SMP();\
			TRC_END_FILTER_CHECK_L1_NON_SMP(EL1D_CS_Trace_Filter, 2, 0x04);\
		}\
	} while(0)
#else
	#define EL1D_TRC_CS_RF_ABORT_INFO_H(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_CS_DUMP_CONTROL_H(v1, v2, v3, v4, v5, v6, v7) do {\
		{\
			TRC_START_FILTER_CHECK_L1_NON_SMP(EL1D_CS_Trace_Filter, 2, 0x04);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1_NON_SMP(0x0D4E,0x0D4E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v5,v5);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v6,v6);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1_NON_SMP(cgen_local_v7,v7);\
			TRC_END_FILL_L1_NON_SMP();\
			TRC_END_FILTER_CHECK_L1_NON_SMP(EL1D_CS_Trace_Filter, 2, 0x04);\
		}\
	} while(0)
#else
	#define EL1D_TRC_CS_DUMP_CONTROL_H(v1, v2, v3, v4, v5, v6, v7)
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_CS_DUMP_DONE_H(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_CS_Trace_Filter, 1, 0x40);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0E4E,0x0E4E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_CS_Trace_Filter, 1, 0x40);\
		}\
	} while(0)
#else
	#define EL1D_TRC_CS_DUMP_DONE_H(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_CS_DUMP_PROCESS_ABORT_H(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_CS_Trace_Filter, 2, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0F4E,0x0F4E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_CS_Trace_Filter, 2, 0x04);\
		}\
	} while(0)
#else
	#define EL1D_TRC_CS_DUMP_PROCESS_ABORT_H(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_CS_DUMP_FAIL_H(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_CS_Trace_Filter, 2, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x104E,0x104E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_CS_Trace_Filter, 2, 0x04);\
		}\
	} while(0)
#else
	#define EL1D_TRC_CS_DUMP_FAIL_H(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_CS_DUMP_DRAM_FREE_H(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_CS_Trace_Filter, 2, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x114E,0x114E);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_CS_Trace_Filter, 2, 0x04);\
		}\
	} while(0)
#else
	#define EL1D_TRC_CS_DUMP_DRAM_FREE_H(v1)
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_CS_PAGE_REG_WRITE_CFG_0(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_CS_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x124E,0x124E);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_CS_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define EL1D_TRC_CS_PAGE_REG_WRITE_CFG_0(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_CS_PAGE_REG_WRITE_CFG_1(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_CS_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x134E,0x134E);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_CS_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define EL1D_TRC_CS_PAGE_REG_WRITE_CFG_1(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_CS_PAGE_REG_WRITE_CFG_2(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_CS_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x144E,0x144E);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_CS_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define EL1D_TRC_CS_PAGE_REG_WRITE_CFG_2(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_CS_PAGE_REG_WRITE_CFG_3(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_CS_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x154E,0x154E);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_CS_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define EL1D_TRC_CS_PAGE_REG_WRITE_CFG_3(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_CS_PAGE_REG_WRITE_CFG_4(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_CS_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x164E,0x164E);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_CS_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define EL1D_TRC_CS_PAGE_REG_WRITE_CFG_4(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_CS_PAGE_REG_WRITE_ADDR_CFG_0(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_CS_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x174E,0x174E);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_CS_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define EL1D_TRC_CS_PAGE_REG_WRITE_ADDR_CFG_0(v1)
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_CS_PAGE_REG_WRITE_ADDR_CFG_1(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_CS_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x184E,0x184E);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_CS_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define EL1D_TRC_CS_PAGE_REG_WRITE_ADDR_CFG_1(v1)
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_CS_PAGE_REG_WRITE_ADDR_CFG_2(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_CS_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x194E,0x194E);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_CS_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define EL1D_TRC_CS_PAGE_REG_WRITE_ADDR_CFG_2(v1)
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_CS_PAGE_REG_WRITE_SIC_CFG_0(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_CS_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1A4E,0x1A4E);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_CS_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define EL1D_TRC_CS_PAGE_REG_WRITE_SIC_CFG_0(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_CS_PAGE_REG_WRITE_SIC_CFG_1(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_CS_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1B4E,0x1B4E);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_CS_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define EL1D_TRC_CS_PAGE_REG_WRITE_SIC_CFG_1(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_CS_PAGE_REG_WRITE_SIC_CFG_2(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_CS_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1C4E,0x1C4E);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_CS_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define EL1D_TRC_CS_PAGE_REG_WRITE_SIC_CFG_2(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_CS_PAGE_REG_WRITE_SIC_CFG_3(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_CS_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1D4E,0x1D4E);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_CS_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define EL1D_TRC_CS_PAGE_REG_WRITE_SIC_CFG_3(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_CS_PAGE_REG_WRITE_PSCAN_CFG(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_CS_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1E4E,0x1E4E);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_CS_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define EL1D_TRC_CS_PAGE_REG_WRITE_PSCAN_CFG(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_CS_PAGE_REG_WRITE_CHECK_PATTERN(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_CS_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1F4E,0x1F4E);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_CS_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define EL1D_TRC_CS_PAGE_REG_WRITE_CHECK_PATTERN(v1)
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_CS_PAGE_REG_WRITE_INFO(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_CS_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x204E,0x204E);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_CS_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define EL1D_TRC_CS_PAGE_REG_WRITE_INFO(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_CS_PAGE_RPT_H(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_CS_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x214E,0x214E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_CS_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define EL1D_TRC_CS_PAGE_RPT_H(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_CS_PAGE_RPT01_H() do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_CS_Trace_Filter, 1, 0x04);\
			TRC_START_FILL_L1();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L1(0x224E,0x224E);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_CS_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define EL1D_TRC_CS_PAGE_RPT01_H()
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_CS_PAGE_RPT02_H(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_CS_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x234E,0x234E);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_CS_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define EL1D_TRC_CS_PAGE_RPT02_H(v1)
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_CS_ENABLE_PAGE(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_CS_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x244E,0x244E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_CS_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define EL1D_TRC_CS_ENABLE_PAGE(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_CS_PAGE_STATE_CHANGE_H(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_CS_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x254E,0x254E);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_CS_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define EL1D_TRC_CS_PAGE_STATE_CHANGE_H(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_CS_SIC_SKIP_CMD_H(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_CS_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x264E,0x264E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_CS_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define EL1D_TRC_CS_SIC_SKIP_CMD_H(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_CS_SIC_TIMING(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_CS_Trace_Filter, 1, 0x04);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x274E,0x274E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_CS_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define EL1D_TRC_CS_SIC_TIMING(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_CS_SW_RST() do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_CS_Trace_Filter, 1, 0x04);\
			TRC_START_FILL_L1();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L1(0x284E,0x284E);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_CS_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define EL1D_TRC_CS_SW_RST()
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_CS_PAGE_ABORT(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_CS_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x294E,0x294E);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_CS_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define EL1D_TRC_CS_PAGE_ABORT(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_CS_DSPCNWDMA_IDLE() do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_CS_Trace_Filter, 1, 0x04);\
			TRC_START_FILL_L1();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L1(0x2A4E,0x2A4E);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_CS_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define EL1D_TRC_CS_DSPCNWDMA_IDLE()
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_CS_DSPCNWDMA_ACTIVE() do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_CS_Trace_Filter, 1, 0x04);\
			TRC_START_FILL_L1();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L1(0x2B4E,0x2B4E);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_CS_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define EL1D_TRC_CS_DSPCNWDMA_ACTIVE()
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_CS_NOTHING_FILTER_H() do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_CS_Trace_Filter, 3, 0x10);\
			TRC_START_FILL_L1();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L1(0x2C4E,0x2C4E);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_CS_Trace_Filter, 3, 0x10);\
		}\
	} while(0)
#else
	#define EL1D_TRC_CS_NOTHING_FILTER_H()
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_CS_SIC_FILTER_H(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_CS_Trace_Filter, 3, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x2D4E,0x2D4E);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_CS_Trace_Filter, 3, 0x10);\
		}\
	} while(0)
#else
	#define EL1D_TRC_CS_SIC_FILTER_H(v1)
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_CS_BLACKLIST_FILTER_H(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_CS_Trace_Filter, 3, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x2E4E,0x2E4E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_CS_Trace_Filter, 3, 0x10);\
		}\
	} while(0)
#else
	#define EL1D_TRC_CS_BLACKLIST_FILTER_H(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_CS_FREQUENCY_BIN_FILTER(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_CS_Trace_Filter, 3, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x2F4E,0x2F4E);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_CS_Trace_Filter, 3, 0x10);\
		}\
	} while(0)
#else
	#define EL1D_TRC_CS_FREQUENCY_BIN_FILTER(v1)
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_CS_CDC_RPT_COMPLETED_H(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_CS_Trace_Filter, 1, 0x40);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x304E,0x304E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v7,v7);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v8,v8);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v9,v9);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v10,v10);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_CS_Trace_Filter, 1, 0x40);\
		}\
	} while(0)
#else
	#define EL1D_TRC_CS_CDC_RPT_COMPLETED_H(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10)
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_CS_CSC_RPT_COMPLETED_H(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_CS_Trace_Filter, 1, 0x40);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x314E,0x314E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_CS_Trace_Filter, 1, 0x40);\
		}\
	} while(0)
#else
	#define EL1D_TRC_CS_CSC_RPT_COMPLETED_H(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_CS_CSC_RPT_CELL_RESULT_H(v1, v2, v3, v4, v5, v6, v7, v8) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_CS_Trace_Filter, 1, 0x40);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x324E,0x324E);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v7,v7);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v8,v8);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_CS_Trace_Filter, 1, 0x40);\
		}\
	} while(0)
#else
	#define EL1D_TRC_CS_CSC_RPT_CELL_RESULT_H(v1, v2, v3, v4, v5, v6, v7, v8)
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_CS_CSC_RPT_THRESHOLD_H(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_CS_Trace_Filter, 1, 0x40);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x334E,0x334E);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v7,v7);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v8,v8);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v9,v9);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v10,v10);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_CS_Trace_Filter, 1, 0x40);\
		}\
	} while(0)
#else
	#define EL1D_TRC_CS_CSC_RPT_THRESHOLD_H(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10)
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_CS_CSCM_RPT_COMPLETED_H(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_CS_Trace_Filter, 1, 0x40);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x344E,0x344E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_CS_Trace_Filter, 1, 0x40);\
		}\
	} while(0)
#else
	#define EL1D_TRC_CS_CSCM_RPT_COMPLETED_H(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_CS_CSCM_RPT_DATA1_TO_EL1C_H(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_CS_Trace_Filter, 1, 0x40);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x354E,0x354E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_CS_Trace_Filter, 1, 0x40);\
		}\
	} while(0)
#else
	#define EL1D_TRC_CS_CSCM_RPT_DATA1_TO_EL1C_H(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_CS_CSCM_RPT_DATA2_TO_EL1C_H(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_CS_Trace_Filter, 1, 0x40);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x364E,0x364E);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_CS_Trace_Filter, 1, 0x40);\
		}\
	} while(0)
#else
	#define EL1D_TRC_CS_CSCM_RPT_DATA2_TO_EL1C_H(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_CS_CSCM_RPT_CELL_RESULT_H(v1, v2, v3, v4, v5, v6, v7) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_CS_Trace_Filter, 1, 0x40);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x374E,0x374E);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v7,v7);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_CS_Trace_Filter, 1, 0x40);\
		}\
	} while(0)
#else
	#define EL1D_TRC_CS_CSCM_RPT_CELL_RESULT_H(v1, v2, v3, v4, v5, v6, v7)
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_CS_HW_RAW_RESULT_H(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_CS_Trace_Filter, 1, 0x40);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x384E,0x384E);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_CS_Trace_Filter, 1, 0x40);\
		}\
	} while(0)
#else
	#define EL1D_TRC_CS_HW_RAW_RESULT_H(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_CS_CSCM_RPT_TIMING_CONDITION_H(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_CS_Trace_Filter, 1, 0x40);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x394E,0x394E);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_CS_Trace_Filter, 1, 0x40);\
		}\
	} while(0)
#else
	#define EL1D_TRC_CS_CSCM_RPT_TIMING_CONDITION_H(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_CS_CSCM_RPT_THRESHOLD_H(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_CS_Trace_Filter, 1, 0x40);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x3A4E,0x3A4E);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_CS_Trace_Filter, 1, 0x40);\
		}\
	} while(0)
#else
	#define EL1D_TRC_CS_CSCM_RPT_THRESHOLD_H(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_CS_CSCM_RPT_RS_SSS_FILTER_THRESHOLD_H(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_CS_Trace_Filter, 1, 0x40);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x3B4E,0x3B4E);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_CS_Trace_Filter, 1, 0x40);\
		}\
	} while(0)
#else
	#define EL1D_TRC_CS_CSCM_RPT_RS_SSS_FILTER_THRESHOLD_H(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_CS_CSCM_RPT_SSS_RS_CMB_ELYDET_THRESHOLD_H(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_CS_Trace_Filter, 1, 0x40);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x3C4E,0x3C4E);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_CS_Trace_Filter, 1, 0x40);\
		}\
	} while(0)
#else
	#define EL1D_TRC_CS_CSCM_RPT_SSS_RS_CMB_ELYDET_THRESHOLD_H(v1)
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_CS_RAW_DATA_RESULT1_H(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_CS_Trace_Filter, 1, 0x40);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x3D4E,0x3D4E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_CS_Trace_Filter, 1, 0x40);\
		}\
	} while(0)
#else
	#define EL1D_TRC_CS_RAW_DATA_RESULT1_H(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_CS_RAW_DATA_RESULT2_H(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_CS_Trace_Filter, 1, 0x40);\
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
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v12,v12);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v13,v13);\
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
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v12,v12);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v13,v13);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x3E4E,0x3E4E);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v7,v7);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v8,v8);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v9,v9);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v10,v10);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v11,v11);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v12,v12);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v13,v13);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_CS_Trace_Filter, 1, 0x40);\
		}\
	} while(0)
#else
	#define EL1D_TRC_CS_RAW_DATA_RESULT2_H(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13)
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_CS_FREQ_ADD(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_CS_Trace_Filter, 1, 0x40);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x3F4E,0x3F4E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_CS_Trace_Filter, 1, 0x40);\
		}\
	} while(0)
#else
	#define EL1D_TRC_CS_FREQ_ADD(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_CS_RPT_ABORT_H(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_CS_Trace_Filter, 1, 0x40);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x404E,0x404E);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_CS_Trace_Filter, 1, 0x40);\
		}\
	} while(0)
#else
	#define EL1D_TRC_CS_RPT_ABORT_H(v1)
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_CS_SCDC_NULL_POINTER_H() do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_CS_Trace_Filter, 1, 0x40);\
			TRC_START_FILL_L1();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L1(0x414E,0x414E);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_CS_Trace_Filter, 1, 0x40);\
		}\
	} while(0)
#else
	#define EL1D_TRC_CS_SCDC_NULL_POINTER_H()
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_CS_RPT_FBD_NO_UPDATE_H(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_CS_Trace_Filter, 1, 0x40);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x424E,0x424E);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_CS_Trace_Filter, 1, 0x40);\
		}\
	} while(0)
#else
	#define EL1D_TRC_CS_RPT_FBD_NO_UPDATE_H(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_CS_RPT_CSCM_SIC_DISABLE_H(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_CS_Trace_Filter, 1, 0x40);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x434E,0x434E);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_CS_Trace_Filter, 1, 0x40);\
		}\
	} while(0)
#else
	#define EL1D_TRC_CS_RPT_CSCM_SIC_DISABLE_H(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_CS_RPT_SCELL_OUT_OF_RANGE(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_CS_Trace_Filter, 1, 0x40);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x444E,0x444E);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_CS_Trace_Filter, 1, 0x40);\
		}\
	} while(0)
#else
	#define EL1D_TRC_CS_RPT_SCELL_OUT_OF_RANGE(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_CS_CSC_ICS_ENHANCE(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_CS_Trace_Filter, 1, 0x40);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x454E,0x454E);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_CS_Trace_Filter, 1, 0x40);\
		}\
	} while(0)
#else
	#define EL1D_TRC_CS_CSC_ICS_ENHANCE(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_CS_CSC_JOINT_DETECTION_CELL_RESULT_H(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_CS_Trace_Filter, 1, 0x40);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x464E,0x464E);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_CS_Trace_Filter, 1, 0x40);\
		}\
	} while(0)
#else
	#define EL1D_TRC_CS_CSC_JOINT_DETECTION_CELL_RESULT_H(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_CS_CSC_EACH_JOINT_DETECTION_CELL_RESULT_H(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_CS_Trace_Filter, 1, 0x40);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x474E,0x474E);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_CS_Trace_Filter, 1, 0x40);\
		}\
	} while(0)
#else
	#define EL1D_TRC_CS_CSC_EACH_JOINT_DETECTION_CELL_RESULT_H(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_CS_CSC_TOP_BIN_CELL_H(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_CS_Trace_Filter, 1, 0x40);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x484E,0x484E);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_CS_Trace_Filter, 1, 0x40);\
		}\
	} while(0)
#else
	#define EL1D_TRC_CS_CSC_TOP_BIN_CELL_H(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_CS_ABORT_CMD_INFO_H(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1_NON_SMP(EL1D_CS_Trace_Filter, 1, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_START_FILL_L1_NON_SMP();\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1_NON_SMP(0x494E,0x494E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_END_FILL_L1_NON_SMP();\
			TRC_END_FILTER_CHECK_L1_NON_SMP(EL1D_CS_Trace_Filter, 1, 0x10);\
		}\
	} while(0)
#else
	#define EL1D_TRC_CS_ABORT_CMD_INFO_H(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_CS_ABORT_PAGE_H(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_CS_Trace_Filter, 1, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x4A4E,0x4A4E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_CS_Trace_Filter, 1, 0x10);\
		}\
	} while(0)
#else
	#define EL1D_TRC_CS_ABORT_PAGE_H(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_CS_ABORT_RPT_H(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_CS_Trace_Filter, 1, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x4B4E,0x4B4E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_CS_Trace_Filter, 1, 0x10);\
		}\
	} while(0)
#else
	#define EL1D_TRC_CS_ABORT_RPT_H(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_CS_ABORT_REPORT_PARSE_H(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1_NON_SMP(EL1D_CS_Trace_Filter, 1, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_START_FILL_L1_NON_SMP();\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1_NON_SMP(0x4C4E,0x4C4E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_END_FILL_L1_NON_SMP();\
			TRC_END_FILTER_CHECK_L1_NON_SMP(EL1D_CS_Trace_Filter, 1, 0x10);\
		}\
	} while(0)
#else
	#define EL1D_TRC_CS_ABORT_REPORT_PARSE_H(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_CS_ABORT_CHECK_HW_IDLE_H(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1_NON_SMP(EL1D_CS_Trace_Filter, 1, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_START_FILL_L1_NON_SMP();\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1_NON_SMP(0x4D4E,0x4D4E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_END_FILL_L1_NON_SMP();\
			TRC_END_FILTER_CHECK_L1_NON_SMP(EL1D_CS_Trace_Filter, 1, 0x10);\
		}\
	} while(0)
#else
	#define EL1D_TRC_CS_ABORT_CHECK_HW_IDLE_H(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_CS_ABORT_BY_EL1D(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1_NON_SMP(EL1D_CS_Trace_Filter, 1, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_START_FILL_L1_NON_SMP();\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1_NON_SMP(0x4E4E,0x4E4E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_END_FILL_L1_NON_SMP();\
			TRC_END_FILTER_CHECK_L1_NON_SMP(EL1D_CS_Trace_Filter, 1, 0x10);\
		}\
	} while(0)
#else
	#define EL1D_TRC_CS_ABORT_BY_EL1D(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_CS_MAIN_CSHW_HANGING() do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_CS_Trace_Filter, 1, 0x10);\
			TRC_START_FILL_L1();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L1(0x4F4E,0x4F4E);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_CS_Trace_Filter, 1, 0x10);\
		}\
	} while(0)
#else
	#define EL1D_TRC_CS_MAIN_CSHW_HANGING()
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_CS_LPWR_SLEEP(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1_NON_SMP(EL1D_CS_Trace_Filter, 3, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_START_FILL_L1_NON_SMP();\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1_NON_SMP(0x504E,0x504E);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_END_FILL_L1_NON_SMP();\
			TRC_END_FILTER_CHECK_L1_NON_SMP(EL1D_CS_Trace_Filter, 3, 0x08);\
		}\
	} while(0)
#else
	#define EL1D_TRC_CS_LPWR_SLEEP(v1)
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_CS_LPWR_4G_SLEEP(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1_NON_SMP(EL1D_CS_Trace_Filter, 3, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_START_FILL_L1_NON_SMP();\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1_NON_SMP(0x514E,0x514E);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_END_FILL_L1_NON_SMP();\
			TRC_END_FILTER_CHECK_L1_NON_SMP(EL1D_CS_Trace_Filter, 3, 0x08);\
		}\
	} while(0)
#else
	#define EL1D_TRC_CS_LPWR_4G_SLEEP(v1)
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_CS_LPWR_CSHW_POWER(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1_NON_SMP(EL1D_CS_Trace_Filter, 3, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_START_FILL_L1_NON_SMP();\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1_NON_SMP(0x524E,0x524E);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_END_FILL_L1_NON_SMP();\
			TRC_END_FILTER_CHECK_L1_NON_SMP(EL1D_CS_Trace_Filter, 3, 0x08);\
		}\
	} while(0)
#else
	#define EL1D_TRC_CS_LPWR_CSHW_POWER(v1)
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_CS_LPWR_CSHW_CG(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_CS_Trace_Filter, 3, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x534E,0x534E);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_CS_Trace_Filter, 3, 0x08);\
		}\
	} while(0)
#else
	#define EL1D_TRC_CS_LPWR_CSHW_CG(v1)
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_CS_LPWR_CSHW_CG_NON_SMP(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1_NON_SMP(EL1D_CS_Trace_Filter, 3, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_START_FILL_L1_NON_SMP();\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1_NON_SMP(0x544E,0x544E);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_END_FILL_L1_NON_SMP();\
			TRC_END_FILTER_CHECK_L1_NON_SMP(EL1D_CS_Trace_Filter, 3, 0x08);\
		}\
	} while(0)
#else
	#define EL1D_TRC_CS_LPWR_CSHW_CG_NON_SMP(v1)
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_CS_LPWR_CSHW_INFO(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1_NON_SMP(EL1D_CS_Trace_Filter, 3, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_START_FILL_L1_NON_SMP();\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1_NON_SMP(0x554E,0x554E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_END_FILL_L1_NON_SMP();\
			TRC_END_FILTER_CHECK_L1_NON_SMP(EL1D_CS_Trace_Filter, 3, 0x08);\
		}\
	} while(0)
#else
	#define EL1D_TRC_CS_LPWR_CSHW_INFO(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_CS_LPWR_PROTECT_ADD(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1_NON_SMP(EL1D_CS_Trace_Filter, 3, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_START_FILL_L1_NON_SMP();\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1_NON_SMP(0x564E,0x564E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_END_FILL_L1_NON_SMP();\
			TRC_END_FILTER_CHECK_L1_NON_SMP(EL1D_CS_Trace_Filter, 3, 0x08);\
		}\
	} while(0)
#else
	#define EL1D_TRC_CS_LPWR_PROTECT_ADD(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_CS_LPWR_PROTECT_DEC(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_CS_Trace_Filter, 3, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x574E,0x574E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_CS_Trace_Filter, 3, 0x08);\
		}\
	} while(0)
#else
	#define EL1D_TRC_CS_LPWR_PROTECT_DEC(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_CS_LPWR_PROTECT_ZERO(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_CS_Trace_Filter, 3, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x584E,0x584E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_CS_Trace_Filter, 3, 0x08);\
		}\
	} while(0)
#else
	#define EL1D_TRC_CS_LPWR_PROTECT_ZERO(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_CS_PRINT_RAW_DATA_RX0(v1, v2, v3, v4, v5, v6, v7, v8, v9) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_CS_Trace_Filter, 3, 0x04);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x594E,0x594E);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v7,v7);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v8,v8);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v9,v9);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_CS_Trace_Filter, 3, 0x04);\
		}\
	} while(0)
#else
	#define EL1D_TRC_CS_PRINT_RAW_DATA_RX0(v1, v2, v3, v4, v5, v6, v7, v8, v9)
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_CS_PRINT_RAW_DATA_RX1(v1, v2, v3, v4, v5, v6, v7, v8, v9) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_CS_Trace_Filter, 3, 0x04);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x5A4E,0x5A4E);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v7,v7);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v8,v8);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v9,v9);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_CS_Trace_Filter, 3, 0x04);\
		}\
	} while(0)
#else
	#define EL1D_TRC_CS_PRINT_RAW_DATA_RX1(v1, v2, v3, v4, v5, v6, v7, v8, v9)
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_CS_INJECT_INFO(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_CS_Trace_Filter, 3, 0x40);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x5B4E,0x5B4E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_CS_Trace_Filter, 3, 0x40);\
		}\
	} while(0)
#else
	#define EL1D_TRC_CS_INJECT_INFO(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_CS_INJECT_OUT_OF_RANGE(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_CS_Trace_Filter, 3, 0x40);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x5C4E,0x5C4E);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_CS_Trace_Filter, 3, 0x40);\
		}\
	} while(0)
#else
	#define EL1D_TRC_CS_INJECT_OUT_OF_RANGE(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_CS_INJECT_PARAM_ERROR() do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_CS_Trace_Filter, 3, 0x40);\
			TRC_START_FILL_L1();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L1(0x5D4E,0x5D4E);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_CS_Trace_Filter, 3, 0x40);\
		}\
	} while(0)
#else
	#define EL1D_TRC_CS_INJECT_PARAM_ERROR()
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_CS_COSIM_STATISTICS(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_CS_Trace_Filter, 3, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x5E4E,0x5E4E);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_CS_Trace_Filter, 3, 0x01);\
		}\
	} while(0)
#else
	#define EL1D_TRC_CS_COSIM_STATISTICS(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_CS_RP_SRAM(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(EL1D_CS_Trace_Filter, 3, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x5F4E,0x5F4E);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(EL1D_CS_Trace_Filter, 3, 0x01);\
		}\
	} while(0)
#else
	#define EL1D_TRC_CS_RP_SRAM(v1, v2, v3)
#endif



/*******************************/
/* declaration of filter array */
/*******************************/
EXTERN_TMD_FILTER(unsigned char, EL1D_CS_Trace_Filter, 5);
/*************************/
/* Function declarations */
/*************************/
#ifdef L1_CATCHER

void Set_EL1D_CS_Filter(unsigned char *setting);

#endif

/************************************/
/* Filter checking API declarations */
/************************************/

#define ChkL1ModFltr_EL1D_CS()	(FILTER_CHECK(EL1D_CS_Trace_Filter, 0, 1))
#define ChkL1ClsFltr_EL1D_CS_EL1D_TRC_CS_FSM_H()	(ChkL1ModFltr_EL1D_CS()&&(FILTER_CHECK(EL1D_CS_Trace_Filter, 1, 0x01)))
#define ChkL1ClsFltr_EL1D_CS_EL1D_TRC_CS_FSM_L()	(ChkL1ModFltr_EL1D_CS()&&(FILTER_CHECK(EL1D_CS_Trace_Filter, 1, 0x02)))
#define ChkL1ClsFltr_EL1D_CS_EL1D_TRC_CS_PAGE_H()	(ChkL1ModFltr_EL1D_CS()&&(FILTER_CHECK(EL1D_CS_Trace_Filter, 1, 0x04)))
#define ChkL1ClsFltr_EL1D_CS_EL1D_TRC_CS_PAGE_L()	(ChkL1ModFltr_EL1D_CS()&&(FILTER_CHECK(EL1D_CS_Trace_Filter, 1, 0x08)))
#define ChkL1ClsFltr_EL1D_CS_EL1D_TRC_CS_ABORT_H()	(ChkL1ModFltr_EL1D_CS()&&(FILTER_CHECK(EL1D_CS_Trace_Filter, 1, 0x10)))
#define ChkL1ClsFltr_EL1D_CS_EL1D_TRC_CS_ABORT_L()	(ChkL1ModFltr_EL1D_CS()&&(FILTER_CHECK(EL1D_CS_Trace_Filter, 1, 0x20)))
#define ChkL1ClsFltr_EL1D_CS_EL1D_TRC_CS_RPT_H()	(ChkL1ModFltr_EL1D_CS()&&(FILTER_CHECK(EL1D_CS_Trace_Filter, 1, 0x40)))
#define ChkL1ClsFltr_EL1D_CS_EL1D_TRC_CS_RPT_L()	(ChkL1ModFltr_EL1D_CS()&&(FILTER_CHECK(EL1D_CS_Trace_Filter, 1, 0x80)))
#define ChkL1ClsFltr_EL1D_CS_EL1D_TRC_CS_UTILITY_H()	(ChkL1ModFltr_EL1D_CS()&&(FILTER_CHECK(EL1D_CS_Trace_Filter, 2, 0x01)))
#define ChkL1ClsFltr_EL1D_CS_EL1D_TRC_CS_UTILITY_L()	(ChkL1ModFltr_EL1D_CS()&&(FILTER_CHECK(EL1D_CS_Trace_Filter, 2, 0x02)))
#define ChkL1ClsFltr_EL1D_CS_EL1D_TRC_CS_DUMP_H()	(ChkL1ModFltr_EL1D_CS()&&(FILTER_CHECK(EL1D_CS_Trace_Filter, 2, 0x04)))
#define ChkL1ClsFltr_EL1D_CS_EL1D_TRC_CS_DUMP_L()	(ChkL1ModFltr_EL1D_CS()&&(FILTER_CHECK(EL1D_CS_Trace_Filter, 2, 0x08)))
#define ChkL1ClsFltr_EL1D_CS_EL1D_TRC_CS_CMD_H()	(ChkL1ModFltr_EL1D_CS()&&(FILTER_CHECK(EL1D_CS_Trace_Filter, 2, 0x10)))
#define ChkL1ClsFltr_EL1D_CS_EL1D_TRC_CS_CMD_L()	(ChkL1ModFltr_EL1D_CS()&&(FILTER_CHECK(EL1D_CS_Trace_Filter, 2, 0x20)))
#define ChkL1ClsFltr_EL1D_CS_EL1D_TRC_CS_SFTMR_H()	(ChkL1ModFltr_EL1D_CS()&&(FILTER_CHECK(EL1D_CS_Trace_Filter, 2, 0x40)))
#define ChkL1ClsFltr_EL1D_CS_EL1D_TRC_CS_SFTMR_L()	(ChkL1ModFltr_EL1D_CS()&&(FILTER_CHECK(EL1D_CS_Trace_Filter, 2, 0x80)))
#define ChkL1ClsFltr_EL1D_CS_EL1D_TRC_CS_FPGA_H()	(ChkL1ModFltr_EL1D_CS()&&(FILTER_CHECK(EL1D_CS_Trace_Filter, 3, 0x01)))
#define ChkL1ClsFltr_EL1D_CS_EL1D_TRC_CS_FPGA_L()	(ChkL1ModFltr_EL1D_CS()&&(FILTER_CHECK(EL1D_CS_Trace_Filter, 3, 0x02)))
#define ChkL1ClsFltr_EL1D_CS_EL1D_TRC_CS_HW_DBG_H()	(ChkL1ModFltr_EL1D_CS()&&(FILTER_CHECK(EL1D_CS_Trace_Filter, 3, 0x04)))
#define ChkL1ClsFltr_EL1D_CS_EL1D_TRC_CS_LPWR_H()	(ChkL1ModFltr_EL1D_CS()&&(FILTER_CHECK(EL1D_CS_Trace_Filter, 3, 0x08)))
#define ChkL1ClsFltr_EL1D_CS_EL1D_TRC_CS_FILTER_H()	(ChkL1ModFltr_EL1D_CS()&&(FILTER_CHECK(EL1D_CS_Trace_Filter, 3, 0x10)))
#define ChkL1ClsFltr_EL1D_CS_EL1D_TRC_CS_FACTORY_H()	(ChkL1ModFltr_EL1D_CS()&&(FILTER_CHECK(EL1D_CS_Trace_Filter, 3, 0x20)))
#define ChkL1ClsFltr_EL1D_CS_EL1D_TRC_CS_INJECT_STR_H()	(ChkL1ModFltr_EL1D_CS()&&(FILTER_CHECK(EL1D_CS_Trace_Filter, 3, 0x40)))
#define ChkL1MsgFltr_EL1D_TRC_CS_CMD_ID_H()	ChkL1ClsFltr_EL1D_CS_EL1D_TRC_CS_CMD_H()
#define ChkL1MsgFltr_EL1D_TRC_CS_CMD_INFO_1_H()	ChkL1ClsFltr_EL1D_CS_EL1D_TRC_CS_CMD_H()
#define ChkL1MsgFltr_EL1D_TRC_CS_CMD_INFO_2_H()	ChkL1ClsFltr_EL1D_CS_EL1D_TRC_CS_CMD_H()
#define ChkL1MsgFltr_EL1D_TRC_CS_CMD_RELEASE()	ChkL1ClsFltr_EL1D_CS_EL1D_TRC_CS_CMD_H()
#define ChkL1MsgFltr_EL1D_TRC_CS_CMD_UPDATA_INFO()	ChkL1ClsFltr_EL1D_CS_EL1D_TRC_CS_CMD_H()
#define ChkL1MsgFltr_EL1D_TRC_CS_EM_PSS_INFO()	ChkL1ClsFltr_EL1D_CS_EL1D_TRC_CS_CMD_H()
#define ChkL1MsgFltr_EL1D_TRC_CS_EM_SSS_INFO()	ChkL1ClsFltr_EL1D_CS_EL1D_TRC_CS_CMD_H()
#define ChkL1MsgFltr_EL1D_TRC_CS_EM_INVALID_EL1C_INFO()	ChkL1ClsFltr_EL1D_CS_EL1D_TRC_CS_CMD_H()
#define ChkL1MsgFltr_EL1D_TRC_CS_EM_CELL_DB_INFO()	ChkL1ClsFltr_EL1D_CS_EL1D_TRC_CS_CMD_H()
#define ChkL1MsgFltr_EL1D_TRC_CS_DUMP_STATE_CHANGE_H()	ChkL1ClsFltr_EL1D_CS_EL1D_TRC_CS_DUMP_H()
#define ChkL1MsgFltr_EL1D_TRC_CS_RFCC_PREPARE2()	ChkL1ClsFltr_EL1D_CS_EL1D_TRC_CS_DUMP_H()
#define ChkL1MsgFltr_EL1D_TRC_CS_RF_ON_OFF_INFO_H()	ChkL1ClsFltr_EL1D_CS_EL1D_TRC_CS_DUMP_H()
#define ChkL1MsgFltr_EL1D_TRC_CS_RF_ABORT_INFO_H()	ChkL1ClsFltr_EL1D_CS_EL1D_TRC_CS_DUMP_H()
#define ChkL1MsgFltr_EL1D_TRC_CS_DUMP_CONTROL_H()	ChkL1ClsFltr_EL1D_CS_EL1D_TRC_CS_DUMP_H()
#define ChkL1MsgFltr_EL1D_TRC_CS_DUMP_DONE_H()	ChkL1ClsFltr_EL1D_CS_EL1D_TRC_CS_RPT_H()
#define ChkL1MsgFltr_EL1D_TRC_CS_DUMP_PROCESS_ABORT_H()	ChkL1ClsFltr_EL1D_CS_EL1D_TRC_CS_DUMP_H()
#define ChkL1MsgFltr_EL1D_TRC_CS_DUMP_FAIL_H()	ChkL1ClsFltr_EL1D_CS_EL1D_TRC_CS_DUMP_H()
#define ChkL1MsgFltr_EL1D_TRC_CS_DUMP_DRAM_FREE_H()	ChkL1ClsFltr_EL1D_CS_EL1D_TRC_CS_DUMP_H()
#define ChkL1MsgFltr_EL1D_TRC_CS_PAGE_REG_WRITE_CFG_0()	ChkL1ClsFltr_EL1D_CS_EL1D_TRC_CS_PAGE_H()
#define ChkL1MsgFltr_EL1D_TRC_CS_PAGE_REG_WRITE_CFG_1()	ChkL1ClsFltr_EL1D_CS_EL1D_TRC_CS_PAGE_H()
#define ChkL1MsgFltr_EL1D_TRC_CS_PAGE_REG_WRITE_CFG_2()	ChkL1ClsFltr_EL1D_CS_EL1D_TRC_CS_PAGE_H()
#define ChkL1MsgFltr_EL1D_TRC_CS_PAGE_REG_WRITE_CFG_3()	ChkL1ClsFltr_EL1D_CS_EL1D_TRC_CS_PAGE_H()
#define ChkL1MsgFltr_EL1D_TRC_CS_PAGE_REG_WRITE_CFG_4()	ChkL1ClsFltr_EL1D_CS_EL1D_TRC_CS_PAGE_H()
#define ChkL1MsgFltr_EL1D_TRC_CS_PAGE_REG_WRITE_ADDR_CFG_0()	ChkL1ClsFltr_EL1D_CS_EL1D_TRC_CS_PAGE_H()
#define ChkL1MsgFltr_EL1D_TRC_CS_PAGE_REG_WRITE_ADDR_CFG_1()	ChkL1ClsFltr_EL1D_CS_EL1D_TRC_CS_PAGE_H()
#define ChkL1MsgFltr_EL1D_TRC_CS_PAGE_REG_WRITE_ADDR_CFG_2()	ChkL1ClsFltr_EL1D_CS_EL1D_TRC_CS_PAGE_H()
#define ChkL1MsgFltr_EL1D_TRC_CS_PAGE_REG_WRITE_SIC_CFG_0()	ChkL1ClsFltr_EL1D_CS_EL1D_TRC_CS_PAGE_H()
#define ChkL1MsgFltr_EL1D_TRC_CS_PAGE_REG_WRITE_SIC_CFG_1()	ChkL1ClsFltr_EL1D_CS_EL1D_TRC_CS_PAGE_H()
#define ChkL1MsgFltr_EL1D_TRC_CS_PAGE_REG_WRITE_SIC_CFG_2()	ChkL1ClsFltr_EL1D_CS_EL1D_TRC_CS_PAGE_H()
#define ChkL1MsgFltr_EL1D_TRC_CS_PAGE_REG_WRITE_SIC_CFG_3()	ChkL1ClsFltr_EL1D_CS_EL1D_TRC_CS_PAGE_H()
#define ChkL1MsgFltr_EL1D_TRC_CS_PAGE_REG_WRITE_PSCAN_CFG()	ChkL1ClsFltr_EL1D_CS_EL1D_TRC_CS_PAGE_H()
#define ChkL1MsgFltr_EL1D_TRC_CS_PAGE_REG_WRITE_CHECK_PATTERN()	ChkL1ClsFltr_EL1D_CS_EL1D_TRC_CS_PAGE_H()
#define ChkL1MsgFltr_EL1D_TRC_CS_PAGE_REG_WRITE_INFO()	ChkL1ClsFltr_EL1D_CS_EL1D_TRC_CS_PAGE_H()
#define ChkL1MsgFltr_EL1D_TRC_CS_PAGE_RPT_H()	ChkL1ClsFltr_EL1D_CS_EL1D_TRC_CS_PAGE_H()
#define ChkL1MsgFltr_EL1D_TRC_CS_PAGE_RPT01_H()	ChkL1ClsFltr_EL1D_CS_EL1D_TRC_CS_PAGE_H()
#define ChkL1MsgFltr_EL1D_TRC_CS_PAGE_RPT02_H()	ChkL1ClsFltr_EL1D_CS_EL1D_TRC_CS_PAGE_H()
#define ChkL1MsgFltr_EL1D_TRC_CS_ENABLE_PAGE()	ChkL1ClsFltr_EL1D_CS_EL1D_TRC_CS_PAGE_H()
#define ChkL1MsgFltr_EL1D_TRC_CS_PAGE_STATE_CHANGE_H()	ChkL1ClsFltr_EL1D_CS_EL1D_TRC_CS_PAGE_H()
#define ChkL1MsgFltr_EL1D_TRC_CS_SIC_SKIP_CMD_H()	ChkL1ClsFltr_EL1D_CS_EL1D_TRC_CS_PAGE_H()
#define ChkL1MsgFltr_EL1D_TRC_CS_SIC_TIMING()	ChkL1ClsFltr_EL1D_CS_EL1D_TRC_CS_PAGE_H()
#define ChkL1MsgFltr_EL1D_TRC_CS_SW_RST()	ChkL1ClsFltr_EL1D_CS_EL1D_TRC_CS_PAGE_H()
#define ChkL1MsgFltr_EL1D_TRC_CS_PAGE_ABORT()	ChkL1ClsFltr_EL1D_CS_EL1D_TRC_CS_PAGE_H()
#define ChkL1MsgFltr_EL1D_TRC_CS_DSPCNWDMA_IDLE()	ChkL1ClsFltr_EL1D_CS_EL1D_TRC_CS_PAGE_H()
#define ChkL1MsgFltr_EL1D_TRC_CS_DSPCNWDMA_ACTIVE()	ChkL1ClsFltr_EL1D_CS_EL1D_TRC_CS_PAGE_H()
#define ChkL1MsgFltr_EL1D_TRC_CS_NOTHING_FILTER_H()	ChkL1ClsFltr_EL1D_CS_EL1D_TRC_CS_FILTER_H()
#define ChkL1MsgFltr_EL1D_TRC_CS_SIC_FILTER_H()	ChkL1ClsFltr_EL1D_CS_EL1D_TRC_CS_FILTER_H()
#define ChkL1MsgFltr_EL1D_TRC_CS_BLACKLIST_FILTER_H()	ChkL1ClsFltr_EL1D_CS_EL1D_TRC_CS_FILTER_H()
#define ChkL1MsgFltr_EL1D_TRC_CS_FREQUENCY_BIN_FILTER()	ChkL1ClsFltr_EL1D_CS_EL1D_TRC_CS_FILTER_H()
#define ChkL1MsgFltr_EL1D_TRC_CS_CDC_RPT_COMPLETED_H()	ChkL1ClsFltr_EL1D_CS_EL1D_TRC_CS_RPT_H()
#define ChkL1MsgFltr_EL1D_TRC_CS_CSC_RPT_COMPLETED_H()	ChkL1ClsFltr_EL1D_CS_EL1D_TRC_CS_RPT_H()
#define ChkL1MsgFltr_EL1D_TRC_CS_CSC_RPT_CELL_RESULT_H()	ChkL1ClsFltr_EL1D_CS_EL1D_TRC_CS_RPT_H()
#define ChkL1MsgFltr_EL1D_TRC_CS_CSC_RPT_THRESHOLD_H()	ChkL1ClsFltr_EL1D_CS_EL1D_TRC_CS_RPT_H()
#define ChkL1MsgFltr_EL1D_TRC_CS_CSCM_RPT_COMPLETED_H()	ChkL1ClsFltr_EL1D_CS_EL1D_TRC_CS_RPT_H()
#define ChkL1MsgFltr_EL1D_TRC_CS_CSCM_RPT_DATA1_TO_EL1C_H()	ChkL1ClsFltr_EL1D_CS_EL1D_TRC_CS_RPT_H()
#define ChkL1MsgFltr_EL1D_TRC_CS_CSCM_RPT_DATA2_TO_EL1C_H()	ChkL1ClsFltr_EL1D_CS_EL1D_TRC_CS_RPT_H()
#define ChkL1MsgFltr_EL1D_TRC_CS_CSCM_RPT_CELL_RESULT_H()	ChkL1ClsFltr_EL1D_CS_EL1D_TRC_CS_RPT_H()
#define ChkL1MsgFltr_EL1D_TRC_CS_HW_RAW_RESULT_H()	ChkL1ClsFltr_EL1D_CS_EL1D_TRC_CS_RPT_H()
#define ChkL1MsgFltr_EL1D_TRC_CS_CSCM_RPT_TIMING_CONDITION_H()	ChkL1ClsFltr_EL1D_CS_EL1D_TRC_CS_RPT_H()
#define ChkL1MsgFltr_EL1D_TRC_CS_CSCM_RPT_THRESHOLD_H()	ChkL1ClsFltr_EL1D_CS_EL1D_TRC_CS_RPT_H()
#define ChkL1MsgFltr_EL1D_TRC_CS_CSCM_RPT_RS_SSS_FILTER_THRESHOLD_H()	ChkL1ClsFltr_EL1D_CS_EL1D_TRC_CS_RPT_H()
#define ChkL1MsgFltr_EL1D_TRC_CS_CSCM_RPT_SSS_RS_CMB_ELYDET_THRESHOLD_H()	ChkL1ClsFltr_EL1D_CS_EL1D_TRC_CS_RPT_H()
#define ChkL1MsgFltr_EL1D_TRC_CS_RAW_DATA_RESULT1_H()	ChkL1ClsFltr_EL1D_CS_EL1D_TRC_CS_RPT_H()
#define ChkL1MsgFltr_EL1D_TRC_CS_RAW_DATA_RESULT2_H()	ChkL1ClsFltr_EL1D_CS_EL1D_TRC_CS_RPT_H()
#define ChkL1MsgFltr_EL1D_TRC_CS_FREQ_ADD()	ChkL1ClsFltr_EL1D_CS_EL1D_TRC_CS_RPT_H()
#define ChkL1MsgFltr_EL1D_TRC_CS_RPT_ABORT_H()	ChkL1ClsFltr_EL1D_CS_EL1D_TRC_CS_RPT_H()
#define ChkL1MsgFltr_EL1D_TRC_CS_SCDC_NULL_POINTER_H()	ChkL1ClsFltr_EL1D_CS_EL1D_TRC_CS_RPT_H()
#define ChkL1MsgFltr_EL1D_TRC_CS_RPT_FBD_NO_UPDATE_H()	ChkL1ClsFltr_EL1D_CS_EL1D_TRC_CS_RPT_H()
#define ChkL1MsgFltr_EL1D_TRC_CS_RPT_CSCM_SIC_DISABLE_H()	ChkL1ClsFltr_EL1D_CS_EL1D_TRC_CS_RPT_H()
#define ChkL1MsgFltr_EL1D_TRC_CS_RPT_SCELL_OUT_OF_RANGE()	ChkL1ClsFltr_EL1D_CS_EL1D_TRC_CS_RPT_H()
#define ChkL1MsgFltr_EL1D_TRC_CS_CSC_ICS_ENHANCE()	ChkL1ClsFltr_EL1D_CS_EL1D_TRC_CS_RPT_H()
#define ChkL1MsgFltr_EL1D_TRC_CS_CSC_JOINT_DETECTION_CELL_RESULT_H()	ChkL1ClsFltr_EL1D_CS_EL1D_TRC_CS_RPT_H()
#define ChkL1MsgFltr_EL1D_TRC_CS_CSC_EACH_JOINT_DETECTION_CELL_RESULT_H()	ChkL1ClsFltr_EL1D_CS_EL1D_TRC_CS_RPT_H()
#define ChkL1MsgFltr_EL1D_TRC_CS_CSC_TOP_BIN_CELL_H()	ChkL1ClsFltr_EL1D_CS_EL1D_TRC_CS_RPT_H()
#define ChkL1MsgFltr_EL1D_TRC_CS_ABORT_CMD_INFO_H()	ChkL1ClsFltr_EL1D_CS_EL1D_TRC_CS_ABORT_H()
#define ChkL1MsgFltr_EL1D_TRC_CS_ABORT_PAGE_H()	ChkL1ClsFltr_EL1D_CS_EL1D_TRC_CS_ABORT_H()
#define ChkL1MsgFltr_EL1D_TRC_CS_ABORT_RPT_H()	ChkL1ClsFltr_EL1D_CS_EL1D_TRC_CS_ABORT_H()
#define ChkL1MsgFltr_EL1D_TRC_CS_ABORT_REPORT_PARSE_H()	ChkL1ClsFltr_EL1D_CS_EL1D_TRC_CS_ABORT_H()
#define ChkL1MsgFltr_EL1D_TRC_CS_ABORT_CHECK_HW_IDLE_H()	ChkL1ClsFltr_EL1D_CS_EL1D_TRC_CS_ABORT_H()
#define ChkL1MsgFltr_EL1D_TRC_CS_ABORT_BY_EL1D()	ChkL1ClsFltr_EL1D_CS_EL1D_TRC_CS_ABORT_H()
#define ChkL1MsgFltr_EL1D_TRC_CS_MAIN_CSHW_HANGING()	ChkL1ClsFltr_EL1D_CS_EL1D_TRC_CS_ABORT_H()
#define ChkL1MsgFltr_EL1D_TRC_CS_LPWR_SLEEP()	ChkL1ClsFltr_EL1D_CS_EL1D_TRC_CS_LPWR_H()
#define ChkL1MsgFltr_EL1D_TRC_CS_LPWR_4G_SLEEP()	ChkL1ClsFltr_EL1D_CS_EL1D_TRC_CS_LPWR_H()
#define ChkL1MsgFltr_EL1D_TRC_CS_LPWR_CSHW_POWER()	ChkL1ClsFltr_EL1D_CS_EL1D_TRC_CS_LPWR_H()
#define ChkL1MsgFltr_EL1D_TRC_CS_LPWR_CSHW_CG()	ChkL1ClsFltr_EL1D_CS_EL1D_TRC_CS_LPWR_H()
#define ChkL1MsgFltr_EL1D_TRC_CS_LPWR_CSHW_CG_NON_SMP()	ChkL1ClsFltr_EL1D_CS_EL1D_TRC_CS_LPWR_H()
#define ChkL1MsgFltr_EL1D_TRC_CS_LPWR_CSHW_INFO()	ChkL1ClsFltr_EL1D_CS_EL1D_TRC_CS_LPWR_H()
#define ChkL1MsgFltr_EL1D_TRC_CS_LPWR_PROTECT_ADD()	ChkL1ClsFltr_EL1D_CS_EL1D_TRC_CS_LPWR_H()
#define ChkL1MsgFltr_EL1D_TRC_CS_LPWR_PROTECT_DEC()	ChkL1ClsFltr_EL1D_CS_EL1D_TRC_CS_LPWR_H()
#define ChkL1MsgFltr_EL1D_TRC_CS_LPWR_PROTECT_ZERO()	ChkL1ClsFltr_EL1D_CS_EL1D_TRC_CS_LPWR_H()
#define ChkL1MsgFltr_EL1D_TRC_CS_PRINT_RAW_DATA_RX0()	ChkL1ClsFltr_EL1D_CS_EL1D_TRC_CS_HW_DBG_H()
#define ChkL1MsgFltr_EL1D_TRC_CS_PRINT_RAW_DATA_RX1()	ChkL1ClsFltr_EL1D_CS_EL1D_TRC_CS_HW_DBG_H()
#define ChkL1MsgFltr_EL1D_TRC_CS_INJECT_INFO()	ChkL1ClsFltr_EL1D_CS_EL1D_TRC_CS_INJECT_STR_H()
#define ChkL1MsgFltr_EL1D_TRC_CS_INJECT_OUT_OF_RANGE()	ChkL1ClsFltr_EL1D_CS_EL1D_TRC_CS_INJECT_STR_H()
#define ChkL1MsgFltr_EL1D_TRC_CS_INJECT_PARAM_ERROR()	ChkL1ClsFltr_EL1D_CS_EL1D_TRC_CS_INJECT_STR_H()
#define ChkL1MsgFltr_EL1D_TRC_CS_COSIM_STATISTICS()	ChkL1ClsFltr_EL1D_CS_EL1D_TRC_CS_FPGA_H()
#define ChkL1MsgFltr_EL1D_TRC_CS_RP_SRAM()	ChkL1ClsFltr_EL1D_CS_EL1D_TRC_CS_FPGA_H()


#endif
