#ifndef L1TRC_MML1_RF_PCORE_DEF_H
#define L1TRC_MML1_RF_PCORE_DEF_H

/******************************/
/* String category definition */
/******************************/
#define MMRF_TRC_STR_SINGLE_RAT(v1)  (unsigned char)(v1+0)
#define MMRF_TRC_STR_RAT(v1)  (unsigned char)(v1+33)
#define MMRF_TRC_STR_RATs(v1)  (unsigned char)(v1+66)
#define MMRF_TRC_STR_MD(v1)  (unsigned char)(v1+130)
#define MMRF_TRC_STR_PHASE(v1)  (unsigned char)(v1+133)
#define MMRF_TRC_STR_STATE(v1)  (unsigned char)(v1+135)
#define MMRF_TRC_STR_FLAG(v1)  (unsigned char)(v1+137)
#define MMRF_TRC_STR_ONOFF(v1)  (unsigned char)(v1+139)
#define MMRF_TRC_STR_CLK_BUF_MODE(v1)  (unsigned char)(v1+141)
#define MMRF_TRC_STR_CLK_BUF_SW_STATUS(v1)  (unsigned char)(v1+144)
#define MMRF_TRC_STR_RW(v1)  (unsigned char)(v1+146)
#define MMRF_TRC_STR_RFIC(v1)  (unsigned char)(v1+148)
#define MMRF_TRC_STR_CLKBUF_DRIVING(v1)  (unsigned char)(v1+151)
#define MMRF_TRC_STR_BSILOGGER_RAT_RW(v1)  (unsigned char)(v1+155)
#define MMRF_TRC_STR_BSIMM_PORT(v1)  (unsigned char)(v1+187)
#define MMRF_TRC_STR_HEX(v1)  (unsigned char)(v1+198)


/****************************/
/* Message macro definition */
/****************************/
#include "L1Trc.h"
#if defined(L1_CATCHER)
	#define MMRF_TRC_DRDI_Init(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(MML1_RF_PCORE_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x007E,0x007E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(MML1_RF_PCORE_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define MMRF_TRC_DRDI_Init(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define MMRF_TRC_DRDI_Update(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(MML1_RF_PCORE_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x017E,0x017E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(MML1_RF_PCORE_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define MMRF_TRC_DRDI_Update(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define MMRF_TRC_DRDI_Nvram_DBG(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(MML1_RF_PCORE_Trace_Filter, 1, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x027E,0x027E);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(MML1_RF_PCORE_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define MMRF_TRC_DRDI_Nvram_DBG(v1)
#endif

#if defined(L1_CATCHER)
	#define MMRF_TRC_DRDI_ReMap_DBG(v1, v2, v3, v4, v5, v6, v7) do {\
		{\
			TRC_START_FILTER_CHECK_L1(MML1_RF_PCORE_Trace_Filter, 1, 0x08);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x037E,0x037E);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v7,v7);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(MML1_RF_PCORE_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define MMRF_TRC_DRDI_ReMap_DBG(v1, v2, v3, v4, v5, v6, v7)
#endif

#if defined(L1_CATCHER)
	#define MMRF_TRC_DRDI_ReMapSetNum_DBG(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(MML1_RF_PCORE_Trace_Filter, 1, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x047E,0x047E);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(MML1_RF_PCORE_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define MMRF_TRC_DRDI_ReMapSetNum_DBG(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define MMRF_TRC_DRDI_GPIO_QUERY_DBG(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(MML1_RF_PCORE_Trace_Filter, 1, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x057E,0x057E);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(MML1_RF_PCORE_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define MMRF_TRC_DRDI_GPIO_QUERY_DBG(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define MMRF_TRC_DRDI_ADC_QUERY_DBG(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(MML1_RF_PCORE_Trace_Filter, 1, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x067E,0x067E);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(MML1_RF_PCORE_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define MMRF_TRC_DRDI_ADC_QUERY_DBG(v1)
#endif

#if defined(L1_CATCHER)
	#define MMRF_TRC_SAR_BITMASK_DBG(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(MML1_RF_PCORE_Trace_Filter, 1, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x077E,0x077E);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(MML1_RF_PCORE_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define MMRF_TRC_SAR_BITMASK_DBG(v1)
#endif



/*******************************/
/* declaration of filter array */
/*******************************/
EXTERN_TMD_FILTER(unsigned char, MML1_RF_PCORE_Trace_Filter, 5);
/*************************/
/* Function declarations */
/*************************/
#ifdef L1_CATCHER

void Set_MML1_RF_PCORE_Filter(unsigned char *setting);

#endif

/************************************/
/* Filter checking API declarations */
/************************************/

#define ChkL1ModFltr_MML1_RF_PCORE()	(FILTER_CHECK(MML1_RF_PCORE_Trace_Filter, 0, 1))
#define ChkL1ClsFltr_MML1_RF_PCORE_MML1_RF_L()	(ChkL1ModFltr_MML1_RF_PCORE()&&(FILTER_CHECK(MML1_RF_PCORE_Trace_Filter, 1, 0x01)))
#define ChkL1ClsFltr_MML1_RF_PCORE_MML1_RF_M()	(ChkL1ModFltr_MML1_RF_PCORE()&&(FILTER_CHECK(MML1_RF_PCORE_Trace_Filter, 1, 0x02)))
#define ChkL1ClsFltr_MML1_RF_PCORE_MML1_RF_H()	(ChkL1ModFltr_MML1_RF_PCORE()&&(FILTER_CHECK(MML1_RF_PCORE_Trace_Filter, 1, 0x04)))
#define ChkL1ClsFltr_MML1_RF_PCORE_MML1_DBG_H()	(ChkL1ModFltr_MML1_RF_PCORE()&&(FILTER_CHECK(MML1_RF_PCORE_Trace_Filter, 1, 0x08)))
#define ChkL1ClsFltr_MML1_RF_PCORE_MML1_DBG_L()	(ChkL1ModFltr_MML1_RF_PCORE()&&(FILTER_CHECK(MML1_RF_PCORE_Trace_Filter, 1, 0x10)))
#define ChkL1MsgFltr_MMRF_TRC_DRDI_Init()	ChkL1ClsFltr_MML1_RF_PCORE_MML1_RF_H()
#define ChkL1MsgFltr_MMRF_TRC_DRDI_Update()	ChkL1ClsFltr_MML1_RF_PCORE_MML1_RF_H()
#define ChkL1MsgFltr_MMRF_TRC_DRDI_Nvram_DBG()	ChkL1ClsFltr_MML1_RF_PCORE_MML1_DBG_H()
#define ChkL1MsgFltr_MMRF_TRC_DRDI_ReMap_DBG()	ChkL1ClsFltr_MML1_RF_PCORE_MML1_DBG_H()
#define ChkL1MsgFltr_MMRF_TRC_DRDI_ReMapSetNum_DBG()	ChkL1ClsFltr_MML1_RF_PCORE_MML1_DBG_H()
#define ChkL1MsgFltr_MMRF_TRC_DRDI_GPIO_QUERY_DBG()	ChkL1ClsFltr_MML1_RF_PCORE_MML1_DBG_H()
#define ChkL1MsgFltr_MMRF_TRC_DRDI_ADC_QUERY_DBG()	ChkL1ClsFltr_MML1_RF_PCORE_MML1_DBG_H()
#define ChkL1MsgFltr_MMRF_TRC_SAR_BITMASK_DBG()	ChkL1ClsFltr_MML1_RF_PCORE_MML1_DBG_H()


#endif
