#ifndef L1TRC_MODEM_TOPSM_1_DEF_H
#define L1TRC_MODEM_TOPSM_1_DEF_H

/******************************/
/* String category definition */
/******************************/
#define MODEM_TOPSM_Str_Bool(v1)  (unsigned char)(v1+0)
#define MODEM_TOPSM_Str_Enable(v1)  (unsigned char)(v1+2)
#define L1_SLEEPDRV_Str_User(v1)  (unsigned char)(v1+4)
#define L1_SLEEPDRV_Str_EL1Action(v1)  (unsigned char)(v1+10)
#define L1_SLEEPDRV_Str_TriggerAction(v1)  (unsigned char)(v1+12)
#define RM_Str_ResourceControl(v1)  (unsigned char)(v1+15)
#define RM_Str_Resource(v1)  (unsigned char)(v1+17)


/****************************/
/* Message macro definition */
/****************************/
#include "L1Trc.h"
#if defined(L1_CATCHER)
	#define MODEM_TOPSM_EMI_REQUEST(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(MODEM_TOPSM_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0031,0x0031);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(MODEM_TOPSM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define MODEM_TOPSM_EMI_REQUEST(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define MODEM_TOPSM_TRC_BIG_DAC_CALIBRATION(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L1(MODEM_TOPSM_1_Trace_Filter, 1, 0x01);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0131,0x0131);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(MODEM_TOPSM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define MODEM_TOPSM_TRC_BIG_DAC_CALIBRATION(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER)
	#define MODEM_TOPSM_DBG_CALI_START() do {\
		{\
			TRC_START_FILTER_CHECK_L1(MODEM_TOPSM_1_Trace_Filter, 1, 0x01);\
			TRC_START_FILL_L1();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L1(0x0231,0x0231);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(MODEM_TOPSM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define MODEM_TOPSM_DBG_CALI_START()
#endif

#if defined(L1_CATCHER)
	#define L1_SLEEPDRV_DBG_EL1_EL2_CCIRQ(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(MODEM_TOPSM_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0331,0x0331);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(MODEM_TOPSM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define L1_SLEEPDRV_DBG_EL1_EL2_CCIRQ(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define RM_DBG_RESOURCE_CONTROL(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(MODEM_TOPSM_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0431,0x0431);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(MODEM_TOPSM_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define RM_DBG_RESOURCE_CONTROL(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define MEM_CONF_DBG_RAKE_CC(v1, v3, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L1(MODEM_TOPSM_1_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v5,v5);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0531,0x0531);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(MODEM_TOPSM_1_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define MEM_CONF_DBG_RAKE_CC(v1, v3, v5)
#endif

#if defined(L1_CATCHER)
	#define CG_CTRL_DBG_RAKE_CC(v1, v3, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L1(MODEM_TOPSM_1_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v5,v5);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0631,0x0631);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(MODEM_TOPSM_1_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define CG_CTRL_DBG_RAKE_CC(v1, v3, v5)
#endif



/*******************************/
/* declaration of filter array */
/*******************************/
EXTERN_TMD_FILTER(unsigned char, MODEM_TOPSM_1_Trace_Filter, 5);
/*************************/
/* Function declarations */
/*************************/
#ifdef L1_CATCHER

void Set_MODEM_TOPSM_1_Filter(unsigned char *setting);

#endif

/************************************/
/* Filter checking API declarations */
/************************************/

#define ChkL1ModFltr_MODEM_TOPSM_1()	(FILTER_CHECK(MODEM_TOPSM_1_Trace_Filter, 0, 1))
#define ChkL1ClsFltr_MODEM_TOPSM_1_MODEM_TOPSM_SM_H()	(ChkL1ModFltr_MODEM_TOPSM_1()&&(FILTER_CHECK(MODEM_TOPSM_1_Trace_Filter, 1, 0x01)))
#define ChkL1ClsFltr_MODEM_TOPSM_1_MEM_CG_CTRL_H()	(ChkL1ModFltr_MODEM_TOPSM_1()&&(FILTER_CHECK(MODEM_TOPSM_1_Trace_Filter, 1, 0x02)))
#define ChkL1MsgFltr_MODEM_TOPSM_EMI_REQUEST()	ChkL1ClsFltr_MODEM_TOPSM_1_MODEM_TOPSM_SM_H()
#define ChkL1MsgFltr_MODEM_TOPSM_TRC_BIG_DAC_CALIBRATION()	ChkL1ClsFltr_MODEM_TOPSM_1_MODEM_TOPSM_SM_H()
#define ChkL1MsgFltr_MODEM_TOPSM_DBG_CALI_START()	ChkL1ClsFltr_MODEM_TOPSM_1_MODEM_TOPSM_SM_H()
#define ChkL1MsgFltr_L1_SLEEPDRV_DBG_EL1_EL2_CCIRQ()	ChkL1ClsFltr_MODEM_TOPSM_1_MODEM_TOPSM_SM_H()
#define ChkL1MsgFltr_RM_DBG_RESOURCE_CONTROL()	ChkL1ClsFltr_MODEM_TOPSM_1_MODEM_TOPSM_SM_H()
#define ChkL1MsgFltr_MEM_CONF_DBG_RAKE_CC()	ChkL1ClsFltr_MODEM_TOPSM_1_MEM_CG_CTRL_H()
#define ChkL1MsgFltr_CG_CTRL_DBG_RAKE_CC()	ChkL1ClsFltr_MODEM_TOPSM_1_MEM_CG_CTRL_H()


#endif
