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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0040,0x0040);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0140,0x0140);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0240,0x0240);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0340,0x0340);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0440,0x0440);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0540,0x0540);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0640,0x0640);\
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
			TRC_OUTPUT_16_SINGLE_WRAPPER_L1(0x0740,0x0740);\
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
			TRC_OUTPUT_16_SINGLE_WRAPPER_L1(0x0840,0x0840);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0940,0x0940);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1_NON_SMP(0x0A40,0x0A40);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1_NON_SMP(0x0B40,0x0B40);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1_NON_SMP(0x0C40,0x0C40);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1_NON_SMP(0x0D40,0x0D40);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0E40,0x0E40);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0F40,0x0F40);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1040,0x1040);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1140,0x1140);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1240,0x1240);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1340,0x1340);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1440,0x1440);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1540,0x1540);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1640,0x1640);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1740,0x1740);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1840,0x1840);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1940,0x1940);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1A40,0x1A40);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1B40,0x1B40);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1C40,0x1C40);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1D40,0x1D40);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1E40,0x1E40);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x1F40,0x1F40);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x2040,0x2040);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x2140,0x2140);\
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
			TRC_OUTPUT_16_SINGLE_WRAPPER_L1(0x2240,0x2240);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x2340,0x2340);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x2440,0x2440);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x2540,0x2540);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x2640,0x2640);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x2740,0x2740);\
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
			TRC_OUTPUT_16_SINGLE_WRAPPER_L1(0x2840,0x2840);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x2940,0x2940);\
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
			TRC_OUTPUT_16_SINGLE_WRAPPER_L1(0x2A40,0x2A40);\
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
			TRC_OUTPUT_16_SINGLE_WRAPPER_L1(0x2B40,0x2B40);\
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
			TRC_OUTPUT_16_SINGLE_WRAPPER_L1(0x2C40,0x2C40);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x2D40,0x2D40);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x2E40,0x2E40);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x2F40,0x2F40);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x3040,0x3040);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x3140,0x3140);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x3240,0x3240);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x3340,0x3340);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x3440,0x3440);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x3540,0x3540);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x3640,0x3640);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x3740,0x3740);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x3840,0x3840);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x3940,0x3940);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x3A40,0x3A40);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x3B40,0x3B40);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x3C40,0x3C40);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x3D40,0x3D40);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x3E40,0x3E40);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x3F40,0x3F40);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x4040,0x4040);\
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
			TRC_OUTPUT_16_SINGLE_WRAPPER_L1(0x4140,0x4140);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x4240,0x4240);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x4340,0x4340);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x4440,0x4440);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x4540,0x4540);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x4640,0x4640);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x4740,0x4740);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x4840,0x4840);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1_NON_SMP(0x4940,0x4940);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x4A40,0x4A40);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x4B40,0x4B40);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1_NON_SMP(0x4C40,0x4C40);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1_NON_SMP(0x4D40,0x4D40);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1_NON_SMP(0x4E40,0x4E40);\
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
			TRC_OUTPUT_16_SINGLE_WRAPPER_L1(0x4F40,0x4F40);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1_NON_SMP(0x5040,0x5040);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1_NON_SMP(0x5140,0x5140);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1_NON_SMP(0x5240,0x5240);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x5340,0x5340);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1_NON_SMP(0x5440,0x5440);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1_NON_SMP(0x5540,0x5540);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1_NON_SMP(0x5640,0x5640);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x5740,0x5740);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x5840,0x5840);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x5940,0x5940);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x5A40,0x5A40);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x5B40,0x5B40);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x5C40,0x5C40);\
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
			TRC_OUTPUT_16_SINGLE_WRAPPER_L1(0x5D40,0x5D40);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x5E40,0x5E40);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x5F40,0x5F40);\
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
