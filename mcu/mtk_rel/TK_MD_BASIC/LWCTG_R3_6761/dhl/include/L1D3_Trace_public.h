#ifndef L1TRC_L1D_3RD_PUBLIC_DEF_H
#define L1TRC_L1D_3RD_PUBLIC_DEF_H

/******************************/
/* String category definition */
/******************************/
#define L1D_Trace_Str_TM_Sync_State(v1)  (unsigned char)(v1+0)
#define L1SM_Str_Wakeup(v1)  (unsigned char)(v1+2)
#define L1SM_Str_Bool(v1)  (unsigned char)(v1+13)
#define L1SM_Disable_Bool(v1)  (unsigned char)(v1+15)
#define L1D_Dual_Afc_L1C_Ask_Msg(v1)  (unsigned char)(v1+17)
#define L1D_Trc_AFC_status(v1)  (unsigned char)(v1+27)
#define L1D_Trc_Str_NonSync_HO(v1)  (unsigned char)(v1+31)
#define L1D_Trc_Str_WGG_Event(v1)  (unsigned char)(v1+36)
#define L1D_Trc_Str_TDDM_SetGap(v1)  (unsigned char)(v1+38)
#define L1D_Trc_Str_TDDM_PM(v1)  (unsigned char)(v1+41)


/****************************/
/* Message macro definition */
/****************************/
#include "L1Trc.h"
#if defined(L1_CATCHER)
	#define L1D_SWTP_TRC_SAR_TABLE(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1D_3RD_PUBLIC_Trace_Filter, 4, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x007B,0x007B);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1D_3RD_PUBLIC_Trace_Filter, 4, 0x08);\
		}\
	} while(0)
#else
	#define L1D_SWTP_TRC_SAR_TABLE(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define L1D_SWTP_TRC_SAR_STATE_UPDATE(v1, v2, v3, v4) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1D_3RD_PUBLIC_Trace_Filter, 4, 0x08);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x017B,0x017B);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1D_3RD_PUBLIC_Trace_Filter, 4, 0x08);\
		}\
	} while(0)
#else
	#define L1D_SWTP_TRC_SAR_STATE_UPDATE(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER)
	#define L1D_RPO_TRC(v1, v2, v3, v4, v5, v6) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1D_3RD_PUBLIC_Trace_Filter, 4, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v5,v5);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v6,v6);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v5,v5);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v6,v6);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x027B,0x027B);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1D_3RD_PUBLIC_Trace_Filter, 4, 0x10);\
		}\
	} while(0)
#else
	#define L1D_RPO_TRC(v1, v2, v3, v4, v5, v6)
#endif

#if defined(L1_CATCHER)
	#define L1D_RPO_TRC_DRX(v1, v2, v3, v4, v5, v6) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1D_3RD_PUBLIC_Trace_Filter, 4, 0x10);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v5,v5);\
			TRC_PREPROCESS_DATA_SECTION1_L1(cgen_local_v6,v6);\
			TRC_START_FILL_L1();\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v1,v1);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v2,v2);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v3,v3);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v4,v4);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v5,v5);\
			TRC_PREPROCESS_DATA_SECTION2_L1(cgen_local_v6,v6);\
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x037B,0x037B);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v6,v6);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1D_3RD_PUBLIC_Trace_Filter, 4, 0x10);\
		}\
	} while(0)
#else
	#define L1D_RPO_TRC_DRX(v1, v2, v3, v4, v5, v6)
#endif

#if defined(L1_CATCHER)
	#define L1D_SWTP_SAR_db_TRC(v1, v2, v3, v4, v5) do {\
		{\
			TRC_START_FILTER_CHECK_L1(L1D_3RD_PUBLIC_Trace_Filter, 4, 0x20);\
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
			TRC_OUTPUT_16_FIRST_WRAPPER_L1(0x047B,0x047B);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v1,v1);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v2,v2);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v3,v3);\
			TRC_OUTPUT_16_MID_WRAPPER_L1(cgen_local_v4,v4);\
			TRC_OUTPUT_16_LAST_WRAPPER_L1(cgen_local_v5,v5);\
			TRC_END_FILL_L1();\
			TRC_END_FILTER_CHECK_L1(L1D_3RD_PUBLIC_Trace_Filter, 4, 0x20);\
		}\
	} while(0)
#else
	#define L1D_SWTP_SAR_db_TRC(v1, v2, v3, v4, v5)
#endif



/*******************************/
/* declaration of filter array */
/*******************************/
EXTERN_TMD_FILTER(unsigned char, L1D_3RD_PUBLIC_Trace_Filter, 5);
/*************************/
/* Function declarations */
/*************************/
#ifdef L1_CATCHER

void Set_L1D_3RD_PUBLIC_Filter(unsigned char *setting);

#endif

/************************************/
/* Filter checking API declarations */
/************************************/

#define ChkL1ModFltr_L1D_3RD_PUBLIC()	(FILTER_CHECK(L1D_3RD_PUBLIC_Trace_Filter, 0, 1))
#define ChkL1ClsFltr_L1D_3RD_PUBLIC_XO_VTUNE_L()	(ChkL1ModFltr_L1D_3RD_PUBLIC()&&(FILTER_CHECK(L1D_3RD_PUBLIC_Trace_Filter, 1, 0x01)))
#define ChkL1ClsFltr_L1D_3RD_PUBLIC_XO_TEMP_L()	(ChkL1ModFltr_L1D_3RD_PUBLIC()&&(FILTER_CHECK(L1D_3RD_PUBLIC_Trace_Filter, 1, 0x02)))
#define ChkL1ClsFltr_L1D_3RD_PUBLIC_Dual_afc_dbg_M()	(ChkL1ModFltr_L1D_3RD_PUBLIC()&&(FILTER_CHECK(L1D_3RD_PUBLIC_Trace_Filter, 1, 0x04)))
#define ChkL1ClsFltr_L1D_3RD_PUBLIC_L1D_DM_H()	(ChkL1ModFltr_L1D_3RD_PUBLIC()&&(FILTER_CHECK(L1D_3RD_PUBLIC_Trace_Filter, 1, 0x08)))
#define ChkL1ClsFltr_L1D_3RD_PUBLIC_GSM_SM_M()	(ChkL1ModFltr_L1D_3RD_PUBLIC()&&(FILTER_CHECK(L1D_3RD_PUBLIC_Trace_Filter, 1, 0x10)))
#define ChkL1ClsFltr_L1D_3RD_PUBLIC_GSM_SM_L()	(ChkL1ModFltr_L1D_3RD_PUBLIC()&&(FILTER_CHECK(L1D_3RD_PUBLIC_Trace_Filter, 1, 0x20)))
#define ChkL1ClsFltr_L1D_3RD_PUBLIC_SM_LOCKER_L()	(ChkL1ModFltr_L1D_3RD_PUBLIC()&&(FILTER_CHECK(L1D_3RD_PUBLIC_Trace_Filter, 1, 0x40)))
#define ChkL1ClsFltr_L1D_3RD_PUBLIC_L1D_RepeatedACCH_L()	(ChkL1ModFltr_L1D_3RD_PUBLIC()&&(FILTER_CHECK(L1D_3RD_PUBLIC_Trace_Filter, 1, 0x80)))
#define ChkL1ClsFltr_L1D_3RD_PUBLIC_L1D_DBG_M()	(ChkL1ModFltr_L1D_3RD_PUBLIC()&&(FILTER_CHECK(L1D_3RD_PUBLIC_Trace_Filter, 2, 0x01)))
#define ChkL1ClsFltr_L1D_3RD_PUBLIC_L1D_FHC_M()	(ChkL1ModFltr_L1D_3RD_PUBLIC()&&(FILTER_CHECK(L1D_3RD_PUBLIC_Trace_Filter, 2, 0x02)))
#define ChkL1ClsFltr_L1D_3RD_PUBLIC_L1D_Improve_HO_M()	(ChkL1ModFltr_L1D_3RD_PUBLIC()&&(FILTER_CHECK(L1D_3RD_PUBLIC_Trace_Filter, 2, 0x04)))
#define ChkL1ClsFltr_L1D_3RD_PUBLIC_GEMINI_WGG_M()	(ChkL1ModFltr_L1D_3RD_PUBLIC()&&(FILTER_CHECK(L1D_3RD_PUBLIC_Trace_Filter, 2, 0x08)))
#define ChkL1ClsFltr_L1D_3RD_PUBLIC_Dual_afc_dbg_H()	(ChkL1ModFltr_L1D_3RD_PUBLIC()&&(FILTER_CHECK(L1D_3RD_PUBLIC_Trace_Filter, 2, 0x10)))
#define ChkL1ClsFltr_L1D_3RD_PUBLIC_GSM_SM_H()	(ChkL1ModFltr_L1D_3RD_PUBLIC()&&(FILTER_CHECK(L1D_3RD_PUBLIC_Trace_Filter, 2, 0x20)))
#define ChkL1ClsFltr_L1D_3RD_PUBLIC_L1D_DBG_H()	(ChkL1ModFltr_L1D_3RD_PUBLIC()&&(FILTER_CHECK(L1D_3RD_PUBLIC_Trace_Filter, 2, 0x40)))
#define ChkL1ClsFltr_L1D_3RD_PUBLIC_L1D_DBG_FRC_H()	(ChkL1ModFltr_L1D_3RD_PUBLIC()&&(FILTER_CHECK(L1D_3RD_PUBLIC_Trace_Filter, 2, 0x80)))
#define ChkL1ClsFltr_L1D_3RD_PUBLIC_L1D_Improve_HO_H()	(ChkL1ModFltr_L1D_3RD_PUBLIC()&&(FILTER_CHECK(L1D_3RD_PUBLIC_Trace_Filter, 3, 0x01)))
#define ChkL1ClsFltr_L1D_3RD_PUBLIC_GEMINI_WGG_H()	(ChkL1ModFltr_L1D_3RD_PUBLIC()&&(FILTER_CHECK(L1D_3RD_PUBLIC_Trace_Filter, 3, 0x02)))
#define ChkL1ClsFltr_L1D_3RD_PUBLIC_VAMOS_H()	(ChkL1ModFltr_L1D_3RD_PUBLIC()&&(FILTER_CHECK(L1D_3RD_PUBLIC_Trace_Filter, 3, 0x04)))
#define ChkL1ClsFltr_L1D_3RD_PUBLIC_L1D_BLK_H()	(ChkL1ModFltr_L1D_3RD_PUBLIC()&&(FILTER_CHECK(L1D_3RD_PUBLIC_Trace_Filter, 3, 0x08)))
#define ChkL1ClsFltr_L1D_3RD_PUBLIC_L1D_BLK_M()	(ChkL1ModFltr_L1D_3RD_PUBLIC()&&(FILTER_CHECK(L1D_3RD_PUBLIC_Trace_Filter, 3, 0x10)))
#define ChkL1ClsFltr_L1D_3RD_PUBLIC_L1D_DLIF_H()	(ChkL1ModFltr_L1D_3RD_PUBLIC()&&(FILTER_CHECK(L1D_3RD_PUBLIC_Trace_Filter, 3, 0x20)))
#define ChkL1ClsFltr_L1D_3RD_PUBLIC_L1D_WCAL_M()	(ChkL1ModFltr_L1D_3RD_PUBLIC()&&(FILTER_CHECK(L1D_3RD_PUBLIC_Trace_Filter, 3, 0x40)))
#define ChkL1ClsFltr_L1D_3RD_PUBLIC_L1D_TAS_H()	(ChkL1ModFltr_L1D_3RD_PUBLIC()&&(FILTER_CHECK(L1D_3RD_PUBLIC_Trace_Filter, 3, 0x80)))
#define ChkL1ClsFltr_L1D_3RD_PUBLIC_L1D_NBIC_H()	(ChkL1ModFltr_L1D_3RD_PUBLIC()&&(FILTER_CHECK(L1D_3RD_PUBLIC_Trace_Filter, 4, 0x01)))
#define ChkL1ClsFltr_L1D_3RD_PUBLIC_L1D_ELNA_H()	(ChkL1ModFltr_L1D_3RD_PUBLIC()&&(FILTER_CHECK(L1D_3RD_PUBLIC_Trace_Filter, 4, 0x02)))
#define ChkL1ClsFltr_L1D_3RD_PUBLIC_L1D_DRX_H()	(ChkL1ModFltr_L1D_3RD_PUBLIC()&&(FILTER_CHECK(L1D_3RD_PUBLIC_Trace_Filter, 4, 0x04)))
#define ChkL1ClsFltr_L1D_3RD_PUBLIC_L1D_SWTP_H()	(ChkL1ModFltr_L1D_3RD_PUBLIC()&&(FILTER_CHECK(L1D_3RD_PUBLIC_Trace_Filter, 4, 0x08)))
#define ChkL1ClsFltr_L1D_3RD_PUBLIC_L1D_RPO_H()	(ChkL1ModFltr_L1D_3RD_PUBLIC()&&(FILTER_CHECK(L1D_3RD_PUBLIC_Trace_Filter, 4, 0x10)))
#define ChkL1ClsFltr_L1D_3RD_PUBLIC_L1D_SAR_SWTP_db_H()	(ChkL1ModFltr_L1D_3RD_PUBLIC()&&(FILTER_CHECK(L1D_3RD_PUBLIC_Trace_Filter, 4, 0x20)))
#define ChkL1MsgFltr_L1D_SWTP_TRC_SAR_TABLE()	ChkL1ClsFltr_L1D_3RD_PUBLIC_L1D_SWTP_H()
#define ChkL1MsgFltr_L1D_SWTP_TRC_SAR_STATE_UPDATE()	ChkL1ClsFltr_L1D_3RD_PUBLIC_L1D_SWTP_H()
#define ChkL1MsgFltr_L1D_RPO_TRC()	ChkL1ClsFltr_L1D_3RD_PUBLIC_L1D_RPO_H()
#define ChkL1MsgFltr_L1D_RPO_TRC_DRX()	ChkL1ClsFltr_L1D_3RD_PUBLIC_L1D_RPO_H()
#define ChkL1MsgFltr_L1D_SWTP_SAR_db_TRC()	ChkL1ClsFltr_L1D_3RD_PUBLIC_L1D_SAR_SWTP_db_H()


#endif
