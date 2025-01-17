#ifndef L1TRC_EL1D_TX_PUBLIC_DEF_H
#define L1TRC_EL1D_TX_PUBLIC_DEF_H

/******************************/
/* String category definition */
/******************************/
#define EL1D_TRC_STR_TX_CHANNEL(v1)  (unsigned char)(v1+0)
#define EL1D_TRC_STR_TIMING_SRC(v1)  (unsigned char)(v1+9)
#define EL1D_TRC_STR_PUCCH_RES_IDX(v1)  (unsigned char)(v1+12)
#define EL1D_TRC_STR_SPECIAL_CASE(v1)  (unsigned char)(v1+17)
#define EL1D_TRC_STR_HARQ_MOD(v1)  (unsigned char)(v1+28)
#define EL1D_TRC_STR_PUCCH_FMT(v1)  (unsigned char)(v1+35)
#define EL1D_TRC_STR_HARQ_MOD_FROM_L1C(v1)  (unsigned char)(v1+43)


/****************************/
/* Message macro definition */
/****************************/
#include "L1Trc.h"
#if defined(L1_CATCHER)
	#define EL1D_TRC_TX_CMD_TX_EN_COMBI(v1, v2, v3, v5, v6, v8, v9) do {\
		{\
			TRC_START_FILTER_CHECK_L1_NON_SMP(EL1D_TX_PUBLIC_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v5,v5);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v6,v6);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v8,v8);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v9,v9);\
			TRC_START_FILL_L1_NON_SMP();\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v5,v5);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v6,v6);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v8,v8);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v9,v9);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1_NON_SMP(0x004B,0x004B);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v5,v5);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v6,v6);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v8,v8);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1_NON_SMP(cgen_local_v9,v9);\
			TRC_END_FILL_L1_NON_SMP();\
			TRC_END_FILTER_CHECK_L1_NON_SMP(EL1D_TX_PUBLIC_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1D_TRC_TX_CMD_TX_EN_COMBI(v1, v2, v3, v5, v6, v8, v9)
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_TX_CMD_TIMING_UPDATE(v1, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1_NON_SMP(EL1D_TX_PUBLIC_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_START_FILL_L1_NON_SMP();\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1_NON_SMP(0x014B,0x014B);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_END_FILL_L1_NON_SMP();\
			TRC_END_FILTER_CHECK_L1_NON_SMP(EL1D_TX_PUBLIC_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1D_TRC_TX_CMD_TIMING_UPDATE(v1, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define EL1D_TRC_TX_PUSCH_RM_COMBI(v1, v5, v9, v12, v14) do {\
		{\
			TRC_START_FILTER_CHECK_L1_NON_SMP(EL1D_TX_PUBLIC_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v5,v5);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v9,v9);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v12,v12);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v14,v14);\
			TRC_START_FILL_L1_NON_SMP();\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v5,v5);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v9,v9);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v12,v12);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v14,v14);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1_NON_SMP(0x024B,0x024B);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1_NON_SMP(cgen_local_v5,v5);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v9,v9);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v12,v12);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1_NON_SMP(cgen_local_v14,v14);\
			TRC_END_FILL_L1_NON_SMP();\
			TRC_END_FILTER_CHECK_L1_NON_SMP(EL1D_TX_PUBLIC_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define EL1D_TRC_TX_PUSCH_RM_COMBI(v1, v5, v9, v12, v14)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define EL1D_TRC_TX_PUSCH_HARQ_CTRL_COMBI(v1, v7) do {\
		{\
			TRC_START_FILTER_CHECK_L1_NON_SMP(EL1D_TX_PUBLIC_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v7,v7);\
			TRC_START_FILL_L1_NON_SMP();\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v7,v7);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1_NON_SMP(0x034B,0x034B);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1_NON_SMP(cgen_local_v7,v7);\
			TRC_END_FILL_L1_NON_SMP();\
			TRC_END_FILTER_CHECK_L1_NON_SMP(EL1D_TX_PUBLIC_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define EL1D_TRC_TX_PUSCH_HARQ_CTRL_COMBI(v1, v7)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define EL1D_TRC_TX_PUSCH_HARQ_CONFIG_NUM_CALC_COMBI(v1, v7) do {\
		{\
			TRC_START_FILTER_CHECK_L1_NON_SMP(EL1D_TX_PUBLIC_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v7,v7);\
			TRC_START_FILL_L1_NON_SMP();\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v7,v7);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1_NON_SMP(0x044B,0x044B);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1_NON_SMP(cgen_local_v7,v7);\
			TRC_END_FILL_L1_NON_SMP();\
			TRC_END_FILTER_CHECK_L1_NON_SMP(EL1D_TX_PUBLIC_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define EL1D_TRC_TX_PUSCH_HARQ_CONFIG_NUM_CALC_COMBI(v1, v7)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define EL1D_TRC_TX_PUCCH_HARQ_CTRL_COMBI(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L1_NON_SMP(EL1D_TX_PUBLIC_Trace_Filter, 1, 0x02);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1_NON_SMP(0x054B,0x054B);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v4,v4);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1_NON_SMP(cgen_local_v5,v5);\
			TRC_END_FILL_L1_NON_SMP();\
			TRC_END_FILTER_CHECK_L1_NON_SMP(EL1D_TX_PUBLIC_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define EL1D_TRC_TX_PUCCH_HARQ_CTRL_COMBI(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define EL1D_TRC_TX_PUCCH_RES_PRECALC_COMBI(v1, v2, v3, v10, v12, v14, v16) do {\
		{\
			TRC_START_FILTER_CHECK_L1_NON_SMP(EL1D_TX_PUBLIC_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v10,v10);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v12,v12);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v14,v14);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v16,v16);\
			TRC_START_FILL_L1_NON_SMP();\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v10,v10);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v12,v12);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v14,v14);\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v16,v16);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1_NON_SMP(0x064B,0x064B);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1_NON_SMP(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v3,v3);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v10,v10);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v12,v12);\
			TRC_OUTPUT_32_MID_WRAPPER_L1_NON_SMP(cgen_local_v14,v14);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1_NON_SMP(cgen_local_v16,v16);\
			TRC_END_FILL_L1_NON_SMP();\
			TRC_END_FILTER_CHECK_L1_NON_SMP(EL1D_TX_PUBLIC_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define EL1D_TRC_TX_PUCCH_RES_PRECALC_COMBI(v1, v2, v3, v10, v12, v14, v16)
#endif

#if defined(L1_CATCHER)
	#define EL1D_TRC_TX_SRS_ENCODER_COMBI(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1_NON_SMP(EL1D_TX_PUBLIC_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_START_FILL_L1_NON_SMP();\
			TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1_NON_SMP(0x074B,0x074B);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1_NON_SMP(cgen_local_v1,v1);\
			TRC_END_FILL_L1_NON_SMP();\
			TRC_END_FILTER_CHECK_L1_NON_SMP(EL1D_TX_PUBLIC_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define EL1D_TRC_TX_SRS_ENCODER_COMBI(v1)
#endif



/*******************************/
/* declaration of filter array */
/*******************************/
EXTERN_TMD_FILTER(unsigned char, EL1D_TX_PUBLIC_Trace_Filter, 5);
/*************************/
/* Function declarations */
/*************************/
#ifdef L1_CATCHER

void Set_EL1D_TX_PUBLIC_Filter(unsigned char *setting);

#endif

/************************************/
/* Filter checking API declarations */
/************************************/

#define ChkL1ModFltr_EL1D_TX_PUBLIC()	(FILTER_CHECK(EL1D_TX_PUBLIC_Trace_Filter, 0, 1))
#define ChkL1ClsFltr_EL1D_TX_PUBLIC_EL1D_TRC_CLS_TX_H()	(ChkL1ModFltr_EL1D_TX_PUBLIC()&&(FILTER_CHECK(EL1D_TX_PUBLIC_Trace_Filter, 1, 0x01)))
#define ChkL1ClsFltr_EL1D_TX_PUBLIC_EL1D_TRC_CLS_TX_M()	(ChkL1ModFltr_EL1D_TX_PUBLIC()&&(FILTER_CHECK(EL1D_TX_PUBLIC_Trace_Filter, 1, 0x02)))
#define ChkL1ClsFltr_EL1D_TX_PUBLIC_EL1D_TRC_CLS_TX_L()	(ChkL1ModFltr_EL1D_TX_PUBLIC()&&(FILTER_CHECK(EL1D_TX_PUBLIC_Trace_Filter, 1, 0x04)))
#define ChkL1MsgFltr_EL1D_TRC_TX_CMD_TX_EN_COMBI()	ChkL1ClsFltr_EL1D_TX_PUBLIC_EL1D_TRC_CLS_TX_H()
#define ChkL1MsgFltr_EL1D_TRC_TX_CMD_TIMING_UPDATE()	ChkL1ClsFltr_EL1D_TX_PUBLIC_EL1D_TRC_CLS_TX_H()
#define ChkL1MsgFltr_EL1D_TRC_TX_PUSCH_RM_COMBI()	ChkL1ClsFltr_EL1D_TX_PUBLIC_EL1D_TRC_CLS_TX_M()
#define ChkL1MsgFltr_EL1D_TRC_TX_PUSCH_HARQ_CTRL_COMBI()	ChkL1ClsFltr_EL1D_TX_PUBLIC_EL1D_TRC_CLS_TX_M()
#define ChkL1MsgFltr_EL1D_TRC_TX_PUSCH_HARQ_CONFIG_NUM_CALC_COMBI()	ChkL1ClsFltr_EL1D_TX_PUBLIC_EL1D_TRC_CLS_TX_M()
#define ChkL1MsgFltr_EL1D_TRC_TX_PUCCH_HARQ_CTRL_COMBI()	ChkL1ClsFltr_EL1D_TX_PUBLIC_EL1D_TRC_CLS_TX_M()
#define ChkL1MsgFltr_EL1D_TRC_TX_PUCCH_RES_PRECALC_COMBI()	ChkL1ClsFltr_EL1D_TX_PUBLIC_EL1D_TRC_CLS_TX_M()
#define ChkL1MsgFltr_EL1D_TRC_TX_SRS_ENCODER_COMBI()	ChkL1ClsFltr_EL1D_TX_PUBLIC_EL1D_TRC_CLS_TX_H()


#endif
