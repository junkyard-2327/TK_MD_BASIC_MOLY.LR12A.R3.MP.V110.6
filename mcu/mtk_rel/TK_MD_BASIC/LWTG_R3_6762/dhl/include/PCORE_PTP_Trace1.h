#ifndef L1TRC_PCORE_MD_PTP_1_DEF_H
#define L1TRC_PCORE_MD_PTP_1_DEF_H

/******************************/
/* String category definition */
/******************************/
#define MD_PTP_Str_Bool(v1)  (unsigned char)(v1+0)


/****************************/
/* Message macro definition */
/****************************/
#include "L1Trc.h"
#if defined(L1_CATCHER)
	#define MD_PTP_DBG_DUMP_PCore() do {\
		{\
			TRC_START_FILTER_CHECK_L1(PCORE_MD_PTP_1_Trace_Filter, 1, 0x01);\
			TRC_START_FILL_L1();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L1(0x0035,0x0035);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(PCORE_MD_PTP_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define MD_PTP_DBG_DUMP_PCore()
#endif

#if defined(L1_CATCHER)
	#define MD_PTP_DBG_DUMP_L1Core() do {\
		{\
			TRC_START_FILTER_CHECK_L1(PCORE_MD_PTP_1_Trace_Filter, 1, 0x01);\
			TRC_START_FILL_L1();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L1(0x0135,0x0135);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(PCORE_MD_PTP_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define MD_PTP_DBG_DUMP_L1Core()
#endif

#if defined(L1_CATCHER)
	#define MD_PTP_DBG_DUMP_DSP() do {\
		{\
			TRC_START_FILTER_CHECK_L1(PCORE_MD_PTP_1_Trace_Filter, 1, 0x01);\
			TRC_START_FILL_L1();\
			TRC_OUTPUT_16_SINGLE_WRAPPER_L1(0x0235,0x0235);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(PCORE_MD_PTP_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define MD_PTP_DBG_DUMP_DSP()
#endif



/*******************************/
/* declaration of filter array */
/*******************************/
EXTERN_TMD_FILTER(unsigned char, PCORE_MD_PTP_1_Trace_Filter, 5);
/*************************/
/* Function declarations */
/*************************/
#ifdef L1_CATCHER

void Set_PCORE_MD_PTP_1_Filter(unsigned char *setting);

#endif

/************************************/
/* Filter checking API declarations */
/************************************/

#define ChkL1ModFltr_PCORE_MD_PTP_1()	(FILTER_CHECK(PCORE_MD_PTP_1_Trace_Filter, 0, 1))
#define ChkL1ClsFltr_PCORE_MD_PTP_1_MD_PTP_DBG_H()	(ChkL1ModFltr_PCORE_MD_PTP_1()&&(FILTER_CHECK(PCORE_MD_PTP_1_Trace_Filter, 1, 0x01)))
#define ChkL1MsgFltr_MD_PTP_DBG_DUMP_PCore()	ChkL1ClsFltr_PCORE_MD_PTP_1_MD_PTP_DBG_H()
#define ChkL1MsgFltr_MD_PTP_DBG_DUMP_L1Core()	ChkL1ClsFltr_PCORE_MD_PTP_1_MD_PTP_DBG_H()
#define ChkL1MsgFltr_MD_PTP_DBG_DUMP_DSP()	ChkL1ClsFltr_PCORE_MD_PTP_1_MD_PTP_DBG_H()


#endif
