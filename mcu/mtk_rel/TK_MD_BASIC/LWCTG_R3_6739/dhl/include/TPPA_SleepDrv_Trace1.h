#ifndef L1TRC_TPPA_SleepDrv_1_DEF_H
#define L1TRC_TPPA_SleepDrv_1_DEF_H

/******************************/
/* String category definition */
/******************************/
#define TPPA_SleepDrv_Str_Bool(v1)  (unsigned char)(v1+0)


/****************************/
/* Message macro definition */
/****************************/
#include "L1Trc.h"
#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define TPPA_TRC_OSTD_TME_STA(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(TPPA_SleepDrv_1_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0040,0x0040);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(TPPA_SleepDrv_1_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define TPPA_TRC_OSTD_TME_STA(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define TPPA_TRC_OSTD_CPU_RATE(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(TPPA_SleepDrv_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0140,0x0140);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(TPPA_SleepDrv_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define TPPA_TRC_OSTD_CPU_RATE(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define TPPA_TRC_DVFS_VMODEM(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(TPPA_SleepDrv_1_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0240,0x0240);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(TPPA_SleepDrv_1_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define TPPA_TRC_DVFS_VMODEM(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define TPPA_TRC_DVFS_CPUFREQ(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(TPPA_SleepDrv_1_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0340,0x0340);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(TPPA_SleepDrv_1_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define TPPA_TRC_DVFS_CPUFREQ(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define TPPA_TRC_MODEM_TOPSM_POWER(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(TPPA_SleepDrv_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0440,0x0440);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(TPPA_SleepDrv_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define TPPA_TRC_MODEM_TOPSM_POWER(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define TPPA_TRC_MODEM_TOPSM_PLLCK(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(TPPA_SleepDrv_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0540,0x0540);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(TPPA_SleepDrv_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define TPPA_TRC_MODEM_TOPSM_PLLCK(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define TPPA_TRC_MODEM_TOPSM_SYSTEMCLK(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(TPPA_SleepDrv_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0640,0x0640);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(TPPA_SleepDrv_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define TPPA_TRC_MODEM_TOPSM_SYSTEMCLK(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define TPPA_TRC_RM_RESOURCE_CONTROL(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(TPPA_SleepDrv_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0740,0x0740);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(TPPA_SleepDrv_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define TPPA_TRC_RM_RESOURCE_CONTROL(v1, v2, v3)
#endif



/*******************************/
/* declaration of filter array */
/*******************************/
EXTERN_TMD_FILTER(unsigned char, TPPA_SleepDrv_1_Trace_Filter, 5);
/*************************/
/* Function declarations */
/*************************/
#ifdef L1_CATCHER

void Set_TPPA_SleepDrv_1_Filter(unsigned char *setting);

#endif

/************************************/
/* Filter checking API declarations */
/************************************/

#define ChkL1ModFltr_TPPA_SleepDrv_1()	(FILTER_CHECK(TPPA_SleepDrv_1_Trace_Filter, 0, 1))
#define ChkL1ClsFltr_TPPA_SleepDrv_1_TPPA_SleepDrv_H()	(ChkL1ModFltr_TPPA_SleepDrv_1()&&(FILTER_CHECK(TPPA_SleepDrv_1_Trace_Filter, 1, 0x01)))
#define ChkL1ClsFltr_TPPA_SleepDrv_1_TPPA_SleepDrv_M()	(ChkL1ModFltr_TPPA_SleepDrv_1()&&(FILTER_CHECK(TPPA_SleepDrv_1_Trace_Filter, 1, 0x02)))
#define ChkL1ClsFltr_TPPA_SleepDrv_1_TPPA_SleepDrv_L()	(ChkL1ModFltr_TPPA_SleepDrv_1()&&(FILTER_CHECK(TPPA_SleepDrv_1_Trace_Filter, 1, 0x04)))
#define ChkL1MsgFltr_TPPA_TRC_OSTD_TME_STA()	ChkL1ClsFltr_TPPA_SleepDrv_1_TPPA_SleepDrv_L()
#define ChkL1MsgFltr_TPPA_TRC_OSTD_CPU_RATE()	ChkL1ClsFltr_TPPA_SleepDrv_1_TPPA_SleepDrv_H()
#define ChkL1MsgFltr_TPPA_TRC_DVFS_VMODEM()	ChkL1ClsFltr_TPPA_SleepDrv_1_TPPA_SleepDrv_L()
#define ChkL1MsgFltr_TPPA_TRC_DVFS_CPUFREQ()	ChkL1ClsFltr_TPPA_SleepDrv_1_TPPA_SleepDrv_L()
#define ChkL1MsgFltr_TPPA_TRC_MODEM_TOPSM_POWER()	ChkL1ClsFltr_TPPA_SleepDrv_1_TPPA_SleepDrv_H()
#define ChkL1MsgFltr_TPPA_TRC_MODEM_TOPSM_PLLCK()	ChkL1ClsFltr_TPPA_SleepDrv_1_TPPA_SleepDrv_H()
#define ChkL1MsgFltr_TPPA_TRC_MODEM_TOPSM_SYSTEMCLK()	ChkL1ClsFltr_TPPA_SleepDrv_1_TPPA_SleepDrv_H()
#define ChkL1MsgFltr_TPPA_TRC_RM_RESOURCE_CONTROL()	ChkL1ClsFltr_TPPA_SleepDrv_1_TPPA_SleepDrv_H()


#endif
