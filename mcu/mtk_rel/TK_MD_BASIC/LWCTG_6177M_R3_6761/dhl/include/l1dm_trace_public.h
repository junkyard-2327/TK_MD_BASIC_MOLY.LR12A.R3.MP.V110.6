#ifndef L1TRC_L1DM_PUBLIC_DEF_H
#define L1TRC_L1DM_PUBLIC_DEF_H

/******************************/
/* String category definition */
/******************************/
#define L1DM_Str_Bool(v1)  (unsigned char)(v1+0)
#define L1DM_Str_DMState(v1)  (unsigned char)(v1+2)
#define L1DM_Str_2g_resel_mode(v1)  (unsigned char)(v1+15)
#define L1DM_Str_switch_2G_resel_mode_when(v1)  (unsigned char)(v1+17)
#define L1DM_Str_gap_purpose(v1)  (unsigned char)(v1+22)
#define L1DM_Str_pm_period(v1)  (unsigned char)(v1+28)
#define L1DM_Str_ignore_gap_cause(v1)  (unsigned char)(v1+30)


/****************************/
/* Message macro definition */
/****************************/
#include "L1Trc.h"
#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define L1DM_MSG_GAP_STANDBY(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1DM_PUBLIC_Trace_Filter, 1, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v5,v5);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v6,v6);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v7,v7);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v8,v8);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v9,v9);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v10,v10);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v11,v11);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v12,v12);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v5,v5);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v6,v6);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v7,v7);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v8,v8);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v9,v9);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v10,v10);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v11,v11);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v12,v12);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x0079,0x0079);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_8_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_24_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v7,v7);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v8,v8);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v9,v9);\
			TRC_OUTPUT_32_MID_WRAPPER_L1(cgen_local_v10,v10);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v11,v11);\
			TRC_OUTPUT_32_LAST_WRAPPER_L1(cgen_local_v12,v12);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1DM_PUBLIC_Trace_Filter, 1, 0x08);\
		}\
	} while(0)
#else
	#define L1DM_MSG_GAP_STANDBY(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12)
#endif



/*******************************/
/* declaration of filter array */
/*******************************/
EXTERN_TMD_FILTER(unsigned char, L1DM_PUBLIC_Trace_Filter, 5);
/*************************/
/* Function declarations */
/*************************/
#ifdef L1_CATCHER

void Set_L1DM_PUBLIC_Filter(unsigned char *setting);

#endif

/************************************/
/* Filter checking API declarations */
/************************************/

#define ChkL1ModFltr_L1DM_PUBLIC()	(FILTER_CHECK(L1DM_PUBLIC_Trace_Filter, 0, 1))
#define ChkL1ClsFltr_L1DM_PUBLIC_DMBSIC_M()	(ChkL1ModFltr_L1DM_PUBLIC()&&(FILTER_CHECK(L1DM_PUBLIC_Trace_Filter, 1, 0x01)))
#define ChkL1ClsFltr_L1DM_PUBLIC_DMSYNC_M()	(ChkL1ModFltr_L1DM_PUBLIC()&&(FILTER_CHECK(L1DM_PUBLIC_Trace_Filter, 1, 0x02)))
#define ChkL1ClsFltr_L1DM_PUBLIC_DMPM_M()	(ChkL1ModFltr_L1DM_PUBLIC()&&(FILTER_CHECK(L1DM_PUBLIC_Trace_Filter, 1, 0x04)))
#define ChkL1ClsFltr_L1DM_PUBLIC_DMGAP_M()	(ChkL1ModFltr_L1DM_PUBLIC()&&(FILTER_CHECK(L1DM_PUBLIC_Trace_Filter, 1, 0x08)))
#define ChkL1ClsFltr_L1DM_PUBLIC_DMTick_M()	(ChkL1ModFltr_L1DM_PUBLIC()&&(FILTER_CHECK(L1DM_PUBLIC_Trace_Filter, 1, 0x10)))
#define ChkL1MsgFltr_L1DM_MSG_GAP_STANDBY()	ChkL1ClsFltr_L1DM_PUBLIC_DMGAP_M()


#endif
