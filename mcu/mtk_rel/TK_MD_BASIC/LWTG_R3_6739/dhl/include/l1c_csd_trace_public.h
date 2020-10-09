#ifndef L1TRC_CSD_PUBLIC_DEF_H
#define L1TRC_CSD_PUBLIC_DEF_H

/******************************/
/* String category definition */
/******************************/


/****************************/
/* Message macro definition */
/****************************/
#include "L1Trc.h"
#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define CSD_DUMMY_MSG(v1) do {\
		{\
			TRC_START_FILTER_CHECK_L1(CSD_PUBLIC_Trace_Filter, 1, 0x04);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x005D,0x005D);\
			TRC_OUTPUT_8_LAST_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(CSD_PUBLIC_Trace_Filter, 1, 0x04);\
		}\
	} while(0)
#else
	#define CSD_DUMMY_MSG(v1)
#endif



/*******************************/
/* declaration of filter array */
/*******************************/
EXTERN_TMD_FILTER(unsigned char, CSD_PUBLIC_Trace_Filter, 5);
/*************************/
/* Function declarations */
/*************************/
#ifdef L1_CATCHER

void Set_CSD_PUBLIC_Filter(unsigned char *setting);

#endif

/************************************/
/* Filter checking API declarations */
/************************************/

#define ChkL1ModFltr_CSD_PUBLIC()	(FILTER_CHECK(CSD_PUBLIC_Trace_Filter, 0, 1))
#define ChkL1ClsFltr_CSD_PUBLIC_RX_QUAL_L()	(ChkL1ModFltr_CSD_PUBLIC()&&(FILTER_CHECK(CSD_PUBLIC_Trace_Filter, 1, 0x01)))
#define ChkL1ClsFltr_CSD_PUBLIC_RX_QUAL_IN_L()	(ChkL1ModFltr_CSD_PUBLIC()&&(FILTER_CHECK(CSD_PUBLIC_Trace_Filter, 1, 0x02)))
#define ChkL1ClsFltr_CSD_PUBLIC_CSD_COMMON_L()	(ChkL1ModFltr_CSD_PUBLIC()&&(FILTER_CHECK(CSD_PUBLIC_Trace_Filter, 1, 0x04)))
#define ChkL1ClsFltr_CSD_PUBLIC_CSD_DL_Data1_L()	(ChkL1ModFltr_CSD_PUBLIC()&&(FILTER_CHECK(CSD_PUBLIC_Trace_Filter, 1, 0x08)))
#define ChkL1ClsFltr_CSD_PUBLIC_CSD_DL_Data2_L()	(ChkL1ModFltr_CSD_PUBLIC()&&(FILTER_CHECK(CSD_PUBLIC_Trace_Filter, 1, 0x10)))
#define ChkL1ClsFltr_CSD_PUBLIC_CSD_UL_Data1_L()	(ChkL1ModFltr_CSD_PUBLIC()&&(FILTER_CHECK(CSD_PUBLIC_Trace_Filter, 1, 0x20)))
#define ChkL1ClsFltr_CSD_PUBLIC_CSD_UL_Data2_L()	(ChkL1ModFltr_CSD_PUBLIC()&&(FILTER_CHECK(CSD_PUBLIC_Trace_Filter, 1, 0x40)))
#define ChkL1ClsFltr_CSD_PUBLIC_CSD_L1PutDL_Data1_L()	(ChkL1ModFltr_CSD_PUBLIC()&&(FILTER_CHECK(CSD_PUBLIC_Trace_Filter, 1, 0x80)))
#define ChkL1ClsFltr_CSD_PUBLIC_CSD_L1PutDL_Data2_L()	(ChkL1ModFltr_CSD_PUBLIC()&&(FILTER_CHECK(CSD_PUBLIC_Trace_Filter, 2, 0x01)))
#define ChkL1ClsFltr_CSD_PUBLIC_CSD_L1GetUL_Data1_L()	(ChkL1ModFltr_CSD_PUBLIC()&&(FILTER_CHECK(CSD_PUBLIC_Trace_Filter, 2, 0x02)))
#define ChkL1ClsFltr_CSD_PUBLIC_CSD_L1GetUL_Data2_L()	(ChkL1ModFltr_CSD_PUBLIC()&&(FILTER_CHECK(CSD_PUBLIC_Trace_Filter, 2, 0x04)))
#define ChkL1ClsFltr_CSD_PUBLIC_FAX_DL_Data1_L()	(ChkL1ModFltr_CSD_PUBLIC()&&(FILTER_CHECK(CSD_PUBLIC_Trace_Filter, 2, 0x08)))
#define ChkL1ClsFltr_CSD_PUBLIC_FAX_DL_Data2_L()	(ChkL1ModFltr_CSD_PUBLIC()&&(FILTER_CHECK(CSD_PUBLIC_Trace_Filter, 2, 0x10)))
#define ChkL1ClsFltr_CSD_PUBLIC_FAX_UL_Data1_L()	(ChkL1ModFltr_CSD_PUBLIC()&&(FILTER_CHECK(CSD_PUBLIC_Trace_Filter, 2, 0x20)))
#define ChkL1ClsFltr_CSD_PUBLIC_FAX_UL_Data2_L()	(ChkL1ModFltr_CSD_PUBLIC()&&(FILTER_CHECK(CSD_PUBLIC_Trace_Filter, 2, 0x40)))
#define ChkL1MsgFltr_CSD_DUMMY_MSG()	ChkL1ClsFltr_CSD_PUBLIC_CSD_COMMON_L()


#endif
