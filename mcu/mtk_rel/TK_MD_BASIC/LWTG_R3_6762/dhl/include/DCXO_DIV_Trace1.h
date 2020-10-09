#ifndef L1TRC_DCXO_DIV_1_DEF_H
#define L1TRC_DCXO_DIV_1_DEF_H

/******************************/
/* String category definition */
/******************************/
#define DCXO_MODE_Str(v1)  (unsigned char)(v1+0)
#define DCXO_UPDATE_R32K_Str(v1)  (unsigned char)(v1+2)
#define DCXO_Str_Bool(v1)  (unsigned char)(v1+24)
#define DCXO_ENTER_26M_FPM_Str(v1)  (unsigned char)(v1+26)
#define DCXO_Str_Lpm_Changed(v1)  (unsigned char)(v1+29)


/****************************/
/* Message macro definition */
/****************************/
#include "L1Trc.h"
#if defined(L1_CATCHER)
	#define DCXO_DIV_DBG_UPDATE_R32K(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L1(DCXO_DIV_1_Trace_Filter, 1, 0x01);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x002F,0x002F);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(DCXO_DIV_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define DCXO_DIV_DBG_UPDATE_R32K(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER)
	#define DCXO_DIV_LPM_CNT_UPDATE(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(DCXO_DIV_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x012F,0x012F);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(DCXO_DIV_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define DCXO_DIV_LPM_CNT_UPDATE(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define DCXO_DIV_LPM_CNT_END(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L1(DCXO_DIV_1_Trace_Filter, 1, 0x01);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x022F,0x022F);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(DCXO_DIV_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define DCXO_DIV_LPM_CNT_END(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER)
	#define DCXO_DIV_DBG_UPDATE(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(DCXO_DIV_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x032F,0x032F);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(DCXO_DIV_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define DCXO_DIV_DBG_UPDATE(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define DCXO_DIV_DBG_UPDATE_UNLOCK(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(DCXO_DIV_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x042F,0x042F);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(DCXO_DIV_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define DCXO_DIV_DBG_UPDATE_UNLOCK(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define DCXO_DIV_PCM_CNT(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(DCXO_DIV_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x052F,0x052F);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(DCXO_DIV_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define DCXO_DIV_PCM_CNT(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define DCXO_DIV_DBG_Check(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(DCXO_DIV_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x062F,0x062F);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(DCXO_DIV_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define DCXO_DIV_DBG_Check(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define DCXO_DIV_DBG_LOG(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(DCXO_DIV_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x072F,0x072F);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(DCXO_DIV_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define DCXO_DIV_DBG_LOG(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define DCXO_DIV_ATOMIC_PROTECT(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(DCXO_DIV_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x082F,0x082F);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(DCXO_DIV_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define DCXO_DIV_ATOMIC_PROTECT(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define DCXO_DIV_DBG_ENTER_26MHz_FPM(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(DCXO_DIV_1_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x092F,0x092F);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(DCXO_DIV_1_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define DCXO_DIV_DBG_ENTER_26MHz_FPM(v1, v2, v3)
#endif



/*******************************/
/* declaration of filter array */
/*******************************/
EXTERN_TMD_FILTER(unsigned char, DCXO_DIV_1_Trace_Filter, 5);
/*************************/
/* Function declarations */
/*************************/
#ifdef L1_CATCHER

void Set_DCXO_DIV_1_Filter(unsigned char *setting);

#endif

/************************************/
/* Filter checking API declarations */
/************************************/

#define ChkL1ModFltr_DCXO_DIV_1()	(FILTER_CHECK(DCXO_DIV_1_Trace_Filter, 0, 1))
#define ChkL1ClsFltr_DCXO_DIV_1_DCXO_DIV_32K_H()	(ChkL1ModFltr_DCXO_DIV_1()&&(FILTER_CHECK(DCXO_DIV_1_Trace_Filter, 1, 0x01)))
#define ChkL1ClsFltr_DCXO_DIV_1_DCXO_DIV_32K_M()	(ChkL1ModFltr_DCXO_DIV_1()&&(FILTER_CHECK(DCXO_DIV_1_Trace_Filter, 1, 0x02)))
#define ChkL1MsgFltr_DCXO_DIV_DBG_UPDATE_R32K()	ChkL1ClsFltr_DCXO_DIV_1_DCXO_DIV_32K_H()
#define ChkL1MsgFltr_DCXO_DIV_LPM_CNT_UPDATE()	ChkL1ClsFltr_DCXO_DIV_1_DCXO_DIV_32K_H()
#define ChkL1MsgFltr_DCXO_DIV_LPM_CNT_END()	ChkL1ClsFltr_DCXO_DIV_1_DCXO_DIV_32K_H()
#define ChkL1MsgFltr_DCXO_DIV_DBG_UPDATE()	ChkL1ClsFltr_DCXO_DIV_1_DCXO_DIV_32K_H()
#define ChkL1MsgFltr_DCXO_DIV_DBG_UPDATE_UNLOCK()	ChkL1ClsFltr_DCXO_DIV_1_DCXO_DIV_32K_H()
#define ChkL1MsgFltr_DCXO_DIV_PCM_CNT()	ChkL1ClsFltr_DCXO_DIV_1_DCXO_DIV_32K_H()
#define ChkL1MsgFltr_DCXO_DIV_DBG_Check()	ChkL1ClsFltr_DCXO_DIV_1_DCXO_DIV_32K_H()
#define ChkL1MsgFltr_DCXO_DIV_DBG_LOG()	ChkL1ClsFltr_DCXO_DIV_1_DCXO_DIV_32K_H()
#define ChkL1MsgFltr_DCXO_DIV_ATOMIC_PROTECT()	ChkL1ClsFltr_DCXO_DIV_1_DCXO_DIV_32K_H()
#define ChkL1MsgFltr_DCXO_DIV_DBG_ENTER_26MHz_FPM()	ChkL1ClsFltr_DCXO_DIV_1_DCXO_DIV_32K_M()


#endif
