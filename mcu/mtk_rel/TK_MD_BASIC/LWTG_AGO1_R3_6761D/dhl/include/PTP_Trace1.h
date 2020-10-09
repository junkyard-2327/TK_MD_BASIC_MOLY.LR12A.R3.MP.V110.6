#ifndef L1TRC_PTP_1_DEF_H
#define L1TRC_PTP_1_DEF_H

/******************************/
/* String category definition */
/******************************/
#define PTP_Str_Bool(v1)  (unsigned char)(v1+0)
#define PTP_Core_String(v1)  (unsigned char)(v1+2)
#define PTP_Mode_String(v1)  (unsigned char)(v1+5)
#define MD_PTP_Init_Monitor_String(v1)  (unsigned char)(v1+8)


/****************************/
/* Message macro definition */
/****************************/
#include "L1Trc.h"
#if defined(L1_CATCHER)
	#define MD_PTP_DBG_INFO(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(PTP_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0037,0x0037);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(PTP_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define MD_PTP_DBG_INFO(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define MD_PTP_DBG_DUMP1(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(PTP_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0137,0x0137);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(PTP_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define MD_PTP_DBG_DUMP1(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define MD_PTP_DBG_DUMP2(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(PTP_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0237,0x0237);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(PTP_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define MD_PTP_DBG_DUMP2(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define MD_PTP_DBG_DUMP3(v1, v2, v3) do {\
		{\
			TRC_START_FILTER_CHECK_L1(PTP_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0337,0x0337);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(PTP_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define MD_PTP_DBG_DUMP3(v1, v2, v3)
#endif

#if defined(L1_CATCHER)
	#define MD_PTP_DBG_DUMP4(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(PTP_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0437,0x0437);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(PTP_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define MD_PTP_DBG_DUMP4(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define MD_PTP_DBG_DUMP5(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(PTP_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0537,0x0537);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(PTP_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define MD_PTP_DBG_DUMP5(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define MD_PTP_DBG_DUMP_Table(v1, v2) do {\
		{\
			TRC_START_FILTER_CHECK_L1(PTP_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0637,0x0637);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(PTP_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define MD_PTP_DBG_DUMP_Table(v1, v2)
#endif

#if defined(L1_CATCHER)
	#define MD_PTP_DBG_MON(v1, v2, v3, v4, v5, v6, v7, v8) do {\
		{\
			TRC_START_FILTER_CHECK_L1(PTP_1_Trace_Filter, 1, 0x01);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v5,v5);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v6,v6);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v7,v7);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v8,v8);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v5,v5);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v6,v6);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v7,v7);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v8,v8);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0737,0x0737);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v7,v7);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v8,v8);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(PTP_1_Trace_Filter, 1, 0x01);\
		}\
	} while(0)
#else
	#define MD_PTP_DBG_MON(v1, v2, v3, v4, v5, v6, v7, v8)
#endif



/*******************************/
/* declaration of filter array */
/*******************************/
EXTERN_TMD_FILTER(unsigned char, PTP_1_Trace_Filter, 5);
/*************************/
/* Function declarations */
/*************************/
#ifdef L1_CATCHER

void Set_PTP_1_Filter(unsigned char *setting);

#endif

/************************************/
/* Filter checking API declarations */
/************************************/

#define ChkL1ModFltr_PTP_1()	(FILTER_CHECK(PTP_1_Trace_Filter, 0, 1))
#define ChkL1ClsFltr_PTP_1_PTP_H()	(ChkL1ModFltr_PTP_1()&&(FILTER_CHECK(PTP_1_Trace_Filter, 1, 0x01)))
#define ChkL1MsgFltr_MD_PTP_DBG_INFO()	ChkL1ClsFltr_PTP_1_PTP_H()
#define ChkL1MsgFltr_MD_PTP_DBG_DUMP1()	ChkL1ClsFltr_PTP_1_PTP_H()
#define ChkL1MsgFltr_MD_PTP_DBG_DUMP2()	ChkL1ClsFltr_PTP_1_PTP_H()
#define ChkL1MsgFltr_MD_PTP_DBG_DUMP3()	ChkL1ClsFltr_PTP_1_PTP_H()
#define ChkL1MsgFltr_MD_PTP_DBG_DUMP4()	ChkL1ClsFltr_PTP_1_PTP_H()
#define ChkL1MsgFltr_MD_PTP_DBG_DUMP5()	ChkL1ClsFltr_PTP_1_PTP_H()
#define ChkL1MsgFltr_MD_PTP_DBG_DUMP_Table()	ChkL1ClsFltr_PTP_1_PTP_H()
#define ChkL1MsgFltr_MD_PTP_DBG_MON()	ChkL1ClsFltr_PTP_1_PTP_H()


#endif
