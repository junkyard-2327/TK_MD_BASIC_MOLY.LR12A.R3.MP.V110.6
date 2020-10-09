#ifndef L1TRC_PCORE_SleepDrv_1_DEF_H
#define L1TRC_PCORE_SleepDrv_1_DEF_H

/******************************/
/* String category definition */
/******************************/
#define SLEEPDRV_Disable_Bool(v1)  (unsigned char)(v1+0)
#define SLEEPDRV_Str_Modem(v1)  (unsigned char)(v1+2)
#define SLEEPDRV_Str_CCIRQ(v1)  (unsigned char)(v1+5)


/****************************/
/* Message macro definition */
/****************************/
#include "L1Trc.h"
#if defined(L1_CATCHER)
	#define SLEEPDRV_DBG_CHECK_SM_CALLER(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L1(PCORE_SleepDrv_1_Trace_Filter, 1, 0x01);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0036,0x0036);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(PCORE_SleepDrv_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define SLEEPDRV_DBG_CHECK_SM_CALLER(v1, v2, v3, v4, v5)
#endif

#if defined(L1_CATCHER)
	#define SLEEPDRV_DBG_CHECK_SM_LOCKER(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(PCORE_SleepDrv_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0136,0x0136);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(PCORE_SleepDrv_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define SLEEPDRV_DBG_CHECK_SM_LOCKER(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define SLEEPDRV_DBG_CHECK_MODEM_LOCKER(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(PCORE_SleepDrv_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0236,0x0236);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(PCORE_SleepDrv_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define SLEEPDRV_DBG_CHECK_MODEM_LOCKER(v1)
#endif

#if defined(L1_CATCHER)
	#define SLEEPDRV_DBG_CCIRQ_CMD(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(PCORE_SleepDrv_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0336,0x0336);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(PCORE_SleepDrv_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define SLEEPDRV_DBG_CCIRQ_CMD(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define SLEEPDRV_DBG_CCIRQ_CALLBACK(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(PCORE_SleepDrv_1_Trace_Filter, 1, 0x02);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0436,0x0436);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(PCORE_SleepDrv_1_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define SLEEPDRV_DBG_CCIRQ_CALLBACK(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define SLEEPDRV_DBG_CCIRQ_TRIGGER(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L1(PCORE_SleepDrv_1_Trace_Filter, 1, 0x02);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0536,0x0536);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(PCORE_SleepDrv_1_Trace_Filter, 1, 0x02);\
		}\
	} while(0)
#else
	#define SLEEPDRV_DBG_CCIRQ_TRIGGER(v1, v2, v3, v4, v5)
#endif



/*******************************/
/* declaration of filter array */
/*******************************/
EXTERN_TMD_FILTER(unsigned char, PCORE_SleepDrv_1_Trace_Filter, 5);
/*************************/
/* Function declarations */
/*************************/
#ifdef L1_CATCHER

void Set_PCORE_SleepDrv_1_Filter(unsigned char *setting);

#endif

/************************************/
/* Filter checking API declarations */
/************************************/

#define ChkL1ModFltr_PCORE_SleepDrv_1()	(FILTER_CHECK(PCORE_SleepDrv_1_Trace_Filter, 0, 1))
#define ChkL1ClsFltr_PCORE_SleepDrv_1_SLEEPDRV_LOCKER_H()	(ChkL1ModFltr_PCORE_SleepDrv_1()&&(FILTER_CHECK(PCORE_SleepDrv_1_Trace_Filter, 1, 0x01)))
#define ChkL1ClsFltr_PCORE_SleepDrv_1_SLEEPDRV_DBG_H()	(ChkL1ModFltr_PCORE_SleepDrv_1()&&(FILTER_CHECK(PCORE_SleepDrv_1_Trace_Filter, 1, 0x02)))
#define ChkL1MsgFltr_SLEEPDRV_DBG_CHECK_SM_CALLER()	ChkL1ClsFltr_PCORE_SleepDrv_1_SLEEPDRV_LOCKER_H()
#define ChkL1MsgFltr_SLEEPDRV_DBG_CHECK_SM_LOCKER()	ChkL1ClsFltr_PCORE_SleepDrv_1_SLEEPDRV_LOCKER_H()
#define ChkL1MsgFltr_SLEEPDRV_DBG_CHECK_MODEM_LOCKER()	ChkL1ClsFltr_PCORE_SleepDrv_1_SLEEPDRV_LOCKER_H()
#define ChkL1MsgFltr_SLEEPDRV_DBG_CCIRQ_CMD()	ChkL1ClsFltr_PCORE_SleepDrv_1_SLEEPDRV_LOCKER_H()
#define ChkL1MsgFltr_SLEEPDRV_DBG_CCIRQ_CALLBACK()	ChkL1ClsFltr_PCORE_SleepDrv_1_SLEEPDRV_DBG_H()
#define ChkL1MsgFltr_SLEEPDRV_DBG_CCIRQ_TRIGGER()	ChkL1ClsFltr_PCORE_SleepDrv_1_SLEEPDRV_DBG_H()


#endif
