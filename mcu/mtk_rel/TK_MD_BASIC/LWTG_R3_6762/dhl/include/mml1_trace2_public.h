#ifndef L1TRC_MML1_RF_2_PUBLIC_DEF_H
#define L1TRC_MML1_RF_2_PUBLIC_DEF_H

/******************************/
/* String category definition */
/******************************/
#define MMRF_TRC_STR_SINGLE_RAT_2(v1)  (unsigned char)(v1+0)
#define MMRF_TRC_STR_BSIMM_PORT_2(v1)  (unsigned char)(v1+33)
#define MMRF_TRC_STR_BSILOGGER_RAT_RW_2(v1)  (unsigned char)(v1+44)
#define MMRF_TRC_STR_BSIBPIRS_CATEGORY(v1)  (unsigned char)(v1+76)
#define MMRF_TRC_STR_BSIBPIRS_MODE(v1)  (unsigned char)(v1+79)
#define MMRF_TRC_STR_BPIRS_DAT_BUF(v1)  (unsigned char)(v1+86)
#define MMRF_TRC_STR_BSIRS_DAT_PORT(v1)  (unsigned char)(v1+100)
#define MMRF_TRC_STR_BSILOGGER_MODE_RW(v1)  (unsigned char)(v1+108)
#define MMADT_TRC_ADT_RAT(v1)  (unsigned char)(v1+128)
#define MML1_ADT_CONN_DL_RESULT(v1)  (unsigned char)(v1+133)
#define MML1_ADT_IDLE_REQ(v1)  (unsigned char)(v1+141)
#define MML1_ADT_DL_RESULT(v1)  (unsigned char)(v1+144)
#define MMTXDFE_TRC_TXDFE_TXK_MODULE(v1)  (unsigned char)(v1+150)
#define MMTXDFE_TRC_TXDFE_TXK_FLAG(v1)  (unsigned char)(v1+154)
#define MMTXDFE_TRC_TXDFE_RAT(v1)  (unsigned char)(v1+156)
#define MMTXDFE_TRC_TXDFE_TXK_ACCESS(v1)  (unsigned char)(v1+160)
#define MML1RF_TRC_TXDFE_RFPATH(v1)  (unsigned char)(v1+169)
#define MMRF_TRC_TX_POWER_RECORD_RAT(v1)  (unsigned char)(v1+172)


/****************************/
/* Message macro definition */
/****************************/
#include "L1Trc.h"
#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define MMRF_TRC_BSILOGGER_RAT_REDUCE_DBG1(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(MML1_RF_2_PUBLIC_Trace_Filter, 1, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x007B,0x007B);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(MML1_RF_2_PUBLIC_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define MMRF_TRC_BSILOGGER_RAT_REDUCE_DBG1(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define MMRF_TRC_BSILOGGER_RAT_REDUCE_DBG2(v1, v2, v3, v4, v5, v6, v7) do {\
		{\
			TRC_START_FILTER_CHECK_L1(MML1_RF_2_PUBLIC_Trace_Filter, 1, 0x08);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x017B,0x017B);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v7,v7);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(MML1_RF_2_PUBLIC_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define MMRF_TRC_BSILOGGER_RAT_REDUCE_DBG2(v1, v2, v3, v4, v5, v6, v7)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define MMRF_TRC_BSILOGGER_RAT_REDUCE_DBG3(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10) do {\
		{\
			TRC_START_FILTER_CHECK_L1(MML1_RF_2_PUBLIC_Trace_Filter, 1, 0x08);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x027B,0x027B);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v7,v7);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v8,v8);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v9,v9);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v10,v10);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(MML1_RF_2_PUBLIC_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define MMRF_TRC_BSILOGGER_RAT_REDUCE_DBG3(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define MMRF_TRC_BSILOGGER_RAT_REDUCE_DBG4(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13) do {\
		{\
			TRC_START_FILTER_CHECK_L1(MML1_RF_2_PUBLIC_Trace_Filter, 1, 0x08);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x037B,0x037B);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v7,v7);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v8,v8);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v9,v9);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v10,v10);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v11,v11);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v12,v12);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v13,v13);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(MML1_RF_2_PUBLIC_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define MMRF_TRC_BSILOGGER_RAT_REDUCE_DBG4(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define MMRF_TRC_BSILOGGER_RAT_REDUCE_DBG5(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16) do {\
		{\
			TRC_START_FILTER_CHECK_L1(MML1_RF_2_PUBLIC_Trace_Filter, 1, 0x08);\
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
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v14,v14);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v15,v15);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v16,v16);\
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
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v14,v14);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v15,v15);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v16,v16);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x047B,0x047B);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v7,v7);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v8,v8);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v9,v9);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v10,v10);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v11,v11);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v12,v12);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v13,v13);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v14,v14);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v15,v15);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v16,v16);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(MML1_RF_2_PUBLIC_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define MMRF_TRC_BSILOGGER_RAT_REDUCE_DBG5(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16)
#endif

#if defined(L1_CATCHER)
	#define MMRF_TRC_BPILOGGER_PUBLIC_DBG(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(MML1_RF_2_PUBLIC_Trace_Filter, 3, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x057B,0x057B);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(MML1_RF_2_PUBLIC_Trace_Filter, 3, 0x01);\
		}\
	} while(0)
#else
	#define MMRF_TRC_BPILOGGER_PUBLIC_DBG(v1, v2)
#endif



/*******************************/
/* declaration of filter array */
/*******************************/
EXTERN_TMD_FILTER(unsigned char, MML1_RF_2_PUBLIC_Trace_Filter, 5);
/*************************/
/* Function declarations */
/*************************/
#ifdef L1_CATCHER

void Set_MML1_RF_2_PUBLIC_Filter(unsigned char *setting);

#endif

/************************************/
/* Filter checking API declarations */
/************************************/

#define ChkL1ModFltr_MML1_RF_2_PUBLIC()	(FILTER_CHECK(MML1_RF_2_PUBLIC_Trace_Filter, 0, 1))
#define ChkL1ClsFltr_MML1_RF_2_PUBLIC_MML1_ALLOCA_V1_L()	(ChkL1ModFltr_MML1_RF_2_PUBLIC()&&(FILTER_CHECK(MML1_RF_2_PUBLIC_Trace_Filter, 1, 0x01)))
#define ChkL1ClsFltr_MML1_RF_2_PUBLIC_MML1_ALLOCA_V2_H()	(ChkL1ModFltr_MML1_RF_2_PUBLIC()&&(FILTER_CHECK(MML1_RF_2_PUBLIC_Trace_Filter, 1, 0x02)))
#define ChkL1ClsFltr_MML1_RF_2_PUBLIC_MML1_ALLOCA_USAGE_H()	(ChkL1ModFltr_MML1_RF_2_PUBLIC()&&(FILTER_CHECK(MML1_RF_2_PUBLIC_Trace_Filter, 1, 0x04)))
#define ChkL1ClsFltr_MML1_RF_2_PUBLIC_MML1_BSILOG_L()	(ChkL1ModFltr_MML1_RF_2_PUBLIC()&&(FILTER_CHECK(MML1_RF_2_PUBLIC_Trace_Filter, 1, 0x08)))
#define ChkL1ClsFltr_MML1_RF_2_PUBLIC_MML1_BSILOG_M()	(ChkL1ModFltr_MML1_RF_2_PUBLIC()&&(FILTER_CHECK(MML1_RF_2_PUBLIC_Trace_Filter, 1, 0x10)))
#define ChkL1ClsFltr_MML1_RF_2_PUBLIC_MML1_BSILOG_H()	(ChkL1ModFltr_MML1_RF_2_PUBLIC()&&(FILTER_CHECK(MML1_RF_2_PUBLIC_Trace_Filter, 1, 0x20)))
#define ChkL1ClsFltr_MML1_RF_2_PUBLIC_MML1_ADT_H()	(ChkL1ModFltr_MML1_RF_2_PUBLIC()&&(FILTER_CHECK(MML1_RF_2_PUBLIC_Trace_Filter, 1, 0x40)))
#define ChkL1ClsFltr_MML1_RF_2_PUBLIC_MML1_ADT_L()	(ChkL1ModFltr_MML1_RF_2_PUBLIC()&&(FILTER_CHECK(MML1_RF_2_PUBLIC_Trace_Filter, 1, 0x80)))
#define ChkL1ClsFltr_MML1_RF_2_PUBLIC_MML1_RF_L()	(ChkL1ModFltr_MML1_RF_2_PUBLIC()&&(FILTER_CHECK(MML1_RF_2_PUBLIC_Trace_Filter, 2, 0x01)))
#define ChkL1ClsFltr_MML1_RF_2_PUBLIC_MML1_RF_M()	(ChkL1ModFltr_MML1_RF_2_PUBLIC()&&(FILTER_CHECK(MML1_RF_2_PUBLIC_Trace_Filter, 2, 0x02)))
#define ChkL1ClsFltr_MML1_RF_2_PUBLIC_MML1_RF_H()	(ChkL1ModFltr_MML1_RF_2_PUBLIC()&&(FILTER_CHECK(MML1_RF_2_PUBLIC_Trace_Filter, 2, 0x04)))
#define ChkL1ClsFltr_MML1_RF_2_PUBLIC_MML1_TXDFE_L()	(ChkL1ModFltr_MML1_RF_2_PUBLIC()&&(FILTER_CHECK(MML1_RF_2_PUBLIC_Trace_Filter, 2, 0x08)))
#define ChkL1ClsFltr_MML1_RF_2_PUBLIC_MML1_TXDFE_M()	(ChkL1ModFltr_MML1_RF_2_PUBLIC()&&(FILTER_CHECK(MML1_RF_2_PUBLIC_Trace_Filter, 2, 0x10)))
#define ChkL1ClsFltr_MML1_RF_2_PUBLIC_MML1_TXDFE_H()	(ChkL1ModFltr_MML1_RF_2_PUBLIC()&&(FILTER_CHECK(MML1_RF_2_PUBLIC_Trace_Filter, 2, 0x20)))
#define ChkL1ClsFltr_MML1_RF_2_PUBLIC_MML1_BPILOG_L()	(ChkL1ModFltr_MML1_RF_2_PUBLIC()&&(FILTER_CHECK(MML1_RF_2_PUBLIC_Trace_Filter, 2, 0x40)))
#define ChkL1ClsFltr_MML1_RF_2_PUBLIC_MML1_BPILOG_M()	(ChkL1ModFltr_MML1_RF_2_PUBLIC()&&(FILTER_CHECK(MML1_RF_2_PUBLIC_Trace_Filter, 2, 0x80)))
#define ChkL1ClsFltr_MML1_RF_2_PUBLIC_MML1_BPILOG_H()	(ChkL1ModFltr_MML1_RF_2_PUBLIC()&&(FILTER_CHECK(MML1_RF_2_PUBLIC_Trace_Filter, 3, 0x01)))
#define ChkL1MsgFltr_MMRF_TRC_BSILOGGER_RAT_REDUCE_DBG1()	ChkL1ClsFltr_MML1_RF_2_PUBLIC_MML1_BSILOG_L()
#define ChkL1MsgFltr_MMRF_TRC_BSILOGGER_RAT_REDUCE_DBG2()	ChkL1ClsFltr_MML1_RF_2_PUBLIC_MML1_BSILOG_L()
#define ChkL1MsgFltr_MMRF_TRC_BSILOGGER_RAT_REDUCE_DBG3()	ChkL1ClsFltr_MML1_RF_2_PUBLIC_MML1_BSILOG_L()
#define ChkL1MsgFltr_MMRF_TRC_BSILOGGER_RAT_REDUCE_DBG4()	ChkL1ClsFltr_MML1_RF_2_PUBLIC_MML1_BSILOG_L()
#define ChkL1MsgFltr_MMRF_TRC_BSILOGGER_RAT_REDUCE_DBG5()	ChkL1ClsFltr_MML1_RF_2_PUBLIC_MML1_BSILOG_L()
#define ChkL1MsgFltr_MMRF_TRC_BPILOGGER_PUBLIC_DBG()	ChkL1ClsFltr_MML1_RF_2_PUBLIC_MML1_BPILOG_H()


#endif
