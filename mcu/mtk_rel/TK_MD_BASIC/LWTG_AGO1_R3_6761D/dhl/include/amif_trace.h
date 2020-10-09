#ifndef L1TRC_AMIF_DEF_H
#define L1TRC_AMIF_DEF_H

/******************************/
/* String category definition */
/******************************/


/****************************/
/* Message macro definition */
/****************************/
#include "L1Trc.h"
#if defined(L1_CATCHER)
	#define L1TRC_AMIF_PRESET_SCENARIO_LOG(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(AMIF_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x00A8,0x00A8);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(AMIF_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define L1TRC_AMIF_PRESET_SCENARIO_LOG(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define L1TRC_AMIF_PRESET_STATUS_DUMP(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(AMIF_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x01A8,0x01A8);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(AMIF_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define L1TRC_AMIF_PRESET_STATUS_DUMP(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define L1TRC_AMIF_POSTSET_SCENARIO_LOG(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(AMIF_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x02A8,0x02A8);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(AMIF_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define L1TRC_AMIF_POSTSET_SCENARIO_LOG(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define L1TRC_AMIF_POSTSET_STATUS_DUMP(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(AMIF_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x03A8,0x03A8);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(AMIF_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define L1TRC_AMIF_POSTSET_STATUS_DUMP(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define L1TRC_AMIF_START_SCENARIO_LOG(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(AMIF_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x04A8,0x04A8);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(AMIF_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define L1TRC_AMIF_START_SCENARIO_LOG(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define L1TRC_AMIF_START_STATUS_DUMP(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(AMIF_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x05A8,0x05A8);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(AMIF_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define L1TRC_AMIF_START_STATUS_DUMP(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define L1TRC_AMIF_SWITCH_SCENARIO_LOG(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(AMIF_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x06A8,0x06A8);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(AMIF_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define L1TRC_AMIF_SWITCH_SCENARIO_LOG(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define L1TRC_AMIF_SWITCH_STATUS_DUMP(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(AMIF_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x07A8,0x07A8);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(AMIF_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define L1TRC_AMIF_SWITCH_STATUS_DUMP(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define L1TRC_AMIF_WAKE_LOG(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(AMIF_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x08A8,0x08A8);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(AMIF_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define L1TRC_AMIF_WAKE_LOG(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define L1TRC_AMIF_ELM_CFG_DIRECT_LOG(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(AMIF_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x09A8,0x09A8);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(AMIF_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define L1TRC_AMIF_ELM_CFG_DIRECT_LOG(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define L1TRC_AMIF_ELM_CFG_ACT_ISR_LOG(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(AMIF_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0AA8,0x0AA8);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(AMIF_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define L1TRC_AMIF_ELM_CFG_ACT_ISR_LOG(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define L1TRC_AMIF_BIT_UPDATE_DBG(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(AMIF_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0BA8,0x0BA8);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(AMIF_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define L1TRC_AMIF_BIT_UPDATE_DBG(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define L1TRC_NOBIT_DBG() do {\
		{\
			TRC_START_FILTER_CHECK_L1(AMIF_Trace_Filter, 1, 0x01);\
			TRC_START_FILL_L1();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L1(0x0CA8,0x0CA8);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(AMIF_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define L1TRC_NOBIT_DBG()
#endif



/*******************************/
/* declaration of filter array */
/*******************************/
EXTERN_TMD_FILTER(unsigned char, AMIF_Trace_Filter, 5);
/*************************/
/* Function declarations */
/*************************/
#ifdef L1_CATCHER

void Set_AMIF_Filter(unsigned char *setting);

#endif

/************************************/
/* Filter checking API declarations */
/************************************/

#define ChkL1ModFltr_AMIF()	(FILTER_CHECK(AMIF_Trace_Filter, 0, 1))
#define ChkL1ClsFltr_AMIF_AMIF_Basic_Info_H()	(ChkL1ModFltr_AMIF()&&(FILTER_CHECK(AMIF_Trace_Filter, 1, 0x01)))
#define ChkL1MsgFltr_L1TRC_AMIF_PRESET_SCENARIO_LOG()	ChkL1ClsFltr_AMIF_AMIF_Basic_Info_H()
#define ChkL1MsgFltr_L1TRC_AMIF_PRESET_STATUS_DUMP()	ChkL1ClsFltr_AMIF_AMIF_Basic_Info_H()
#define ChkL1MsgFltr_L1TRC_AMIF_POSTSET_SCENARIO_LOG()	ChkL1ClsFltr_AMIF_AMIF_Basic_Info_H()
#define ChkL1MsgFltr_L1TRC_AMIF_POSTSET_STATUS_DUMP()	ChkL1ClsFltr_AMIF_AMIF_Basic_Info_H()
#define ChkL1MsgFltr_L1TRC_AMIF_START_SCENARIO_LOG()	ChkL1ClsFltr_AMIF_AMIF_Basic_Info_H()
#define ChkL1MsgFltr_L1TRC_AMIF_START_STATUS_DUMP()	ChkL1ClsFltr_AMIF_AMIF_Basic_Info_H()
#define ChkL1MsgFltr_L1TRC_AMIF_SWITCH_SCENARIO_LOG()	ChkL1ClsFltr_AMIF_AMIF_Basic_Info_H()
#define ChkL1MsgFltr_L1TRC_AMIF_SWITCH_STATUS_DUMP()	ChkL1ClsFltr_AMIF_AMIF_Basic_Info_H()
#define ChkL1MsgFltr_L1TRC_AMIF_WAKE_LOG()	ChkL1ClsFltr_AMIF_AMIF_Basic_Info_H()
#define ChkL1MsgFltr_L1TRC_AMIF_ELM_CFG_DIRECT_LOG()	ChkL1ClsFltr_AMIF_AMIF_Basic_Info_H()
#define ChkL1MsgFltr_L1TRC_AMIF_ELM_CFG_ACT_ISR_LOG()	ChkL1ClsFltr_AMIF_AMIF_Basic_Info_H()
#define ChkL1MsgFltr_L1TRC_AMIF_BIT_UPDATE_DBG()	ChkL1ClsFltr_AMIF_AMIF_Basic_Info_H()
#define ChkL1MsgFltr_L1TRC_NOBIT_DBG()	ChkL1ClsFltr_AMIF_AMIF_Basic_Info_H()


#endif
