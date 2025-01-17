#ifndef L1TRC_MML1_DPD_DEF_H
#define L1TRC_MML1_DPD_DEF_H

/******************************/
/* String category definition */
/******************************/


/****************************/
/* Message macro definition */
/****************************/
#include "L1Trc.h"
#if defined(L1_CATCHER)
	#define MML1_TRC_DPD_FXP_INIT(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(MML1_DPD_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x008B,0x008B);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(MML1_DPD_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define MML1_TRC_DPD_FXP_INIT(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define MML1_TRC_DPD_FXP_PA_ALGO(v1, v2, v3, v4, v5, v6, v7) do {\
		{\
			TRC_START_FILTER_CHECK_L1(MML1_DPD_Trace_Filter, 1, 0x01);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x018B,0x018B);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v7,v7);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(MML1_DPD_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define MML1_TRC_DPD_FXP_PA_ALGO(v1, v2, v3, v4, v5, v6, v7)
#endif

#if defined(L1_CATCHER)
	#define MML1_TRC_DPD_FXP_PA_GAIN_VAR(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(MML1_DPD_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x028B,0x028B);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(MML1_DPD_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define MML1_TRC_DPD_FXP_PA_GAIN_VAR(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define MML1_TRC_DPD_FXP_PA_GAIN_VAR_SLP(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(MML1_DPD_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x038B,0x038B);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(MML1_DPD_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define MML1_TRC_DPD_FXP_PA_GAIN_VAR_SLP(v1)
#endif

#if defined(L1_CATCHER)
	#define MML1_TRC_DPD_FXP_PA_BUF_I(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(MML1_DPD_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x048B,0x048B);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(MML1_DPD_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define MML1_TRC_DPD_FXP_PA_BUF_I(v1)
#endif

#if defined(L1_CATCHER)
	#define MML1_TRC_DPD_FXP_PA_BUF_Q(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(MML1_DPD_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x058B,0x058B);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(MML1_DPD_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define MML1_TRC_DPD_FXP_PA_BUF_Q(v1)
#endif

#if defined(L1_CATCHER)
	#define MML1_TRC_DPD_FXP_AM_PM_BUF_I(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(MML1_DPD_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x068B,0x068B);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(MML1_DPD_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define MML1_TRC_DPD_FXP_AM_PM_BUF_I(v1)
#endif

#if defined(L1_CATCHER)
	#define MML1_TRC_DPD_FXP_AM_PM_BUF_Q(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(MML1_DPD_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x078B,0x078B);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(MML1_DPD_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define MML1_TRC_DPD_FXP_AM_PM_BUF_Q(v1)
#endif

#if defined(L1_CATCHER)
	#define MML1_TRC_DPD_FXP_AM_LUT(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(MML1_DPD_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x088B,0x088B);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(MML1_DPD_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define MML1_TRC_DPD_FXP_AM_LUT(v1)
#endif

#if defined(L1_CATCHER)
	#define MML1_TRC_DPD_FXP_PM_LUT(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(MML1_DPD_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x098B,0x098B);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(MML1_DPD_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define MML1_TRC_DPD_FXP_PM_LUT(v1)
#endif

#if defined(L1_CATCHER)
	#define MML1_TRC_DPD_FXP_AM_PM_TARGET(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(MML1_DPD_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0A8B,0x0A8B);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(MML1_DPD_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define MML1_TRC_DPD_FXP_AM_PM_TARGET(v1)
#endif

#if defined(L1_CATCHER)
	#define MML1_TRC_DPD_FXP_PA_BUF_ABS_AVG(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(MML1_DPD_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0B8B,0x0B8B);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(MML1_DPD_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define MML1_TRC_DPD_FXP_PA_BUF_ABS_AVG(v1)
#endif

#if defined(L1_CATCHER)
	#define MML1_TRC_DPD_FXP_AM_BUF_ABS_AVG(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(MML1_DPD_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0C8B,0x0C8B);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(MML1_DPD_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define MML1_TRC_DPD_FXP_AM_BUF_ABS_AVG(v1)
#endif

#if defined(L1_CATCHER)
	#define MML1_TRC_DPD_FAC_PA_ASSERT_LOOP(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(MML1_DPD_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0D8B,0x0D8B);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(MML1_DPD_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define MML1_TRC_DPD_FAC_PA_ASSERT_LOOP(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define MML1_TRC_DPD_FXP_PA_INIT_ASSERT(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(MML1_DPD_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0E8B,0x0E8B);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(MML1_DPD_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define MML1_TRC_DPD_FXP_PA_INIT_ASSERT(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define MML1_TRC_DPD_FXP_PA_ITER2_ASSERT(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(MML1_DPD_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0F8B,0x0F8B);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(MML1_DPD_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define MML1_TRC_DPD_FXP_PA_ITER2_ASSERT(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define MML1_TRC_DPD_FXP_PA_UPDATE_ASSERT(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(MML1_DPD_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x108B,0x108B);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(MML1_DPD_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define MML1_TRC_DPD_FXP_PA_UPDATE_ASSERT(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define MML1_TRC_DPD_UNLOCK_MUTEX_ERROR(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(MML1_DPD_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x118B,0x118B);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(MML1_DPD_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define MML1_TRC_DPD_UNLOCK_MUTEX_ERROR(v1)
#endif



/*******************************/
/* declaration of filter array */
/*******************************/
EXTERN_TMD_FILTER(unsigned char, MML1_DPD_Trace_Filter, 5);
/*************************/
/* Function declarations */
/*************************/
#ifdef L1_CATCHER

void Set_MML1_DPD_Filter(unsigned char *setting);

#endif

/************************************/
/* Filter checking API declarations */
/************************************/

#define ChkL1ModFltr_MML1_DPD()	(FILTER_CHECK(MML1_DPD_Trace_Filter, 0, 1))
#define ChkL1ClsFltr_MML1_DPD_MML1_DPD_H()	(ChkL1ModFltr_MML1_DPD()&&(FILTER_CHECK(MML1_DPD_Trace_Filter, 1, 0x01)))
#define ChkL1MsgFltr_MML1_TRC_DPD_FXP_INIT()	ChkL1ClsFltr_MML1_DPD_MML1_DPD_H()
#define ChkL1MsgFltr_MML1_TRC_DPD_FXP_PA_ALGO()	ChkL1ClsFltr_MML1_DPD_MML1_DPD_H()
#define ChkL1MsgFltr_MML1_TRC_DPD_FXP_PA_GAIN_VAR()	ChkL1ClsFltr_MML1_DPD_MML1_DPD_H()
#define ChkL1MsgFltr_MML1_TRC_DPD_FXP_PA_GAIN_VAR_SLP()	ChkL1ClsFltr_MML1_DPD_MML1_DPD_H()
#define ChkL1MsgFltr_MML1_TRC_DPD_FXP_PA_BUF_I()	ChkL1ClsFltr_MML1_DPD_MML1_DPD_H()
#define ChkL1MsgFltr_MML1_TRC_DPD_FXP_PA_BUF_Q()	ChkL1ClsFltr_MML1_DPD_MML1_DPD_H()
#define ChkL1MsgFltr_MML1_TRC_DPD_FXP_AM_PM_BUF_I()	ChkL1ClsFltr_MML1_DPD_MML1_DPD_H()
#define ChkL1MsgFltr_MML1_TRC_DPD_FXP_AM_PM_BUF_Q()	ChkL1ClsFltr_MML1_DPD_MML1_DPD_H()
#define ChkL1MsgFltr_MML1_TRC_DPD_FXP_AM_LUT()	ChkL1ClsFltr_MML1_DPD_MML1_DPD_H()
#define ChkL1MsgFltr_MML1_TRC_DPD_FXP_PM_LUT()	ChkL1ClsFltr_MML1_DPD_MML1_DPD_H()
#define ChkL1MsgFltr_MML1_TRC_DPD_FXP_AM_PM_TARGET()	ChkL1ClsFltr_MML1_DPD_MML1_DPD_H()
#define ChkL1MsgFltr_MML1_TRC_DPD_FXP_PA_BUF_ABS_AVG()	ChkL1ClsFltr_MML1_DPD_MML1_DPD_H()
#define ChkL1MsgFltr_MML1_TRC_DPD_FXP_AM_BUF_ABS_AVG()	ChkL1ClsFltr_MML1_DPD_MML1_DPD_H()
#define ChkL1MsgFltr_MML1_TRC_DPD_FAC_PA_ASSERT_LOOP()	ChkL1ClsFltr_MML1_DPD_MML1_DPD_H()
#define ChkL1MsgFltr_MML1_TRC_DPD_FXP_PA_INIT_ASSERT()	ChkL1ClsFltr_MML1_DPD_MML1_DPD_H()
#define ChkL1MsgFltr_MML1_TRC_DPD_FXP_PA_ITER2_ASSERT()	ChkL1ClsFltr_MML1_DPD_MML1_DPD_H()
#define ChkL1MsgFltr_MML1_TRC_DPD_FXP_PA_UPDATE_ASSERT()	ChkL1ClsFltr_MML1_DPD_MML1_DPD_H()
#define ChkL1MsgFltr_MML1_TRC_DPD_UNLOCK_MUTEX_ERROR()	ChkL1ClsFltr_MML1_DPD_MML1_DPD_H()


#endif
