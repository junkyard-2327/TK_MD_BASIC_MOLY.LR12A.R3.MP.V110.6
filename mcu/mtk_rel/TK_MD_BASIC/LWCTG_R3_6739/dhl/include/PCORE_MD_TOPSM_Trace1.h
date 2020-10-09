#ifndef L1TRC_PCORE_MD_TOPSM_1_DEF_H
#define L1TRC_PCORE_MD_TOPSM_1_DEF_H

/******************************/
/* String category definition */
/******************************/
#define MD_TOPSM_Str_Bool(v1)  (unsigned char)(v1+0)


/****************************/
/* Message macro definition */
/****************************/
#include "L1Trc.h"
#if defined(L1_CATCHER)
	#define MD_TOPSM_TRC_CALIBRATION(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(PCORE_MD_TOPSM_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0041,0x0041);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(PCORE_MD_TOPSM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define MD_TOPSM_TRC_CALIBRATION(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define MD_TOPSM_DBG_COCLK_UPDATE_FMRESULT(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(PCORE_MD_TOPSM_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0141,0x0141);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(PCORE_MD_TOPSM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define MD_TOPSM_DBG_COCLK_UPDATE_FMRESULT(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define MD_TOPSM_TRC_RESOURCE_SET(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(PCORE_MD_TOPSM_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0241,0x0241);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(PCORE_MD_TOPSM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define MD_TOPSM_TRC_RESOURCE_SET(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define MD_TOPSM_TRC_POLLING(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L1(PCORE_MD_TOPSM_1_Trace_Filter, 1, 0x01);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0341,0x0341);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(PCORE_MD_TOPSM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define MD_TOPSM_TRC_POLLING(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER)
	#define MD_TOPSM_TRC_SRCLK_FORCE_ON_OFF(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(PCORE_MD_TOPSM_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0441,0x0441);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(PCORE_MD_TOPSM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define MD_TOPSM_TRC_SRCLK_FORCE_ON_OFF(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define MD_TOPSM_TRC_PLL_FORCE_ON_OFF(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(PCORE_MD_TOPSM_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0541,0x0541);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(PCORE_MD_TOPSM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define MD_TOPSM_TRC_PLL_FORCE_ON_OFF(v1, v2, v3)
#endif



/*******************************/
/* declaration of filter array */
/*******************************/
EXTERN_TMD_FILTER(unsigned char, PCORE_MD_TOPSM_1_Trace_Filter, 5);
/*************************/
/* Function declarations */
/*************************/
#ifdef L1_CATCHER

void Set_PCORE_MD_TOPSM_1_Filter(unsigned char *setting);

#endif

/************************************/
/* Filter checking API declarations */
/************************************/

#define ChkL1ModFltr_PCORE_MD_TOPSM_1()	(FILTER_CHECK(PCORE_MD_TOPSM_1_Trace_Filter, 0, 1))
#define ChkL1ClsFltr_PCORE_MD_TOPSM_1_MD_TOPSM_SM_H()	(ChkL1ModFltr_PCORE_MD_TOPSM_1()&&(FILTER_CHECK(PCORE_MD_TOPSM_1_Trace_Filter, 1, 0x01)))
#define ChkL1MsgFltr_MD_TOPSM_TRC_CALIBRATION()	ChkL1ClsFltr_PCORE_MD_TOPSM_1_MD_TOPSM_SM_H()
#define ChkL1MsgFltr_MD_TOPSM_DBG_COCLK_UPDATE_FMRESULT()	ChkL1ClsFltr_PCORE_MD_TOPSM_1_MD_TOPSM_SM_H()
#define ChkL1MsgFltr_MD_TOPSM_TRC_RESOURCE_SET()	ChkL1ClsFltr_PCORE_MD_TOPSM_1_MD_TOPSM_SM_H()
#define ChkL1MsgFltr_MD_TOPSM_TRC_POLLING()	ChkL1ClsFltr_PCORE_MD_TOPSM_1_MD_TOPSM_SM_H()
#define ChkL1MsgFltr_MD_TOPSM_TRC_SRCLK_FORCE_ON_OFF()	ChkL1ClsFltr_PCORE_MD_TOPSM_1_MD_TOPSM_SM_H()
#define ChkL1MsgFltr_MD_TOPSM_TRC_PLL_FORCE_ON_OFF()	ChkL1ClsFltr_PCORE_MD_TOPSM_1_MD_TOPSM_SM_H()


#endif
