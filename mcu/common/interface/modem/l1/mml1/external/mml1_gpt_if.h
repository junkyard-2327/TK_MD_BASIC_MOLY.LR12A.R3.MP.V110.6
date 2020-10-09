/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2012
*
*  BY OPENING THIS FILE, BUYER HEREBY UNEQUIVOCALLY ACKNOWLEDGES AND AGREES
*  THAT THE SOFTWARE/FIRMWARE AND ITS DOCUMENTATIONS ("MEDIATEK SOFTWARE")
*  RECEIVED FROM MEDIATEK AND/OR ITS REPRESENTATIVES ARE PROVIDED TO BUYER ON
*  AN "AS-IS" BASIS ONLY. MEDIATEK EXPRESSLY DISCLAIMS ANY AND ALL WARRANTIES,
*  EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE IMPLIED WARRANTIES OF
*  MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE OR NONINFRINGEMENT.
*  NEITHER DOES MEDIATEK PROVIDE ANY WARRANTY WHATSOEVER WITH RESPECT TO THE
*  SOFTWARE OF ANY THIRD PARTY WHICH MAY BE USED BY, INCORPORATED IN, OR
*  SUPPLIED WITH THE MEDIATEK SOFTWARE, AND BUYER AGREES TO LOOK ONLY TO SUCH
*  THIRD PARTY FOR ANY WARRANTY CLAIM RELATING THERETO. MEDIATEK SHALL ALSO
*  NOT BE RESPONSIBLE FOR ANY MEDIATEK SOFTWARE RELEASES MADE TO BUYER'S
*  SPECIFICATION OR TO CONFORM TO A PARTICULAR STANDARD OR OPEN FORUM.
*
*  BUYER'S SOLE AND EXCLUSIVE REMEDY AND MEDIATEK'S ENTIRE AND CUMULATIVE
*  LIABILITY WITH RESPECT TO THE MEDIATEK SOFTWARE RELEASED HEREUNDER WILL BE,
*  AT MEDIATEK'S OPTION, TO REVISE OR REPLACE THE MEDIATEK SOFTWARE AT ISSUE,
*  OR REFUND ANY SOFTWARE LICENSE FEES OR SERVICE CHARGE PAID BY BUYER TO
*  MEDIATEK FOR SUCH MEDIATEK SOFTWARE AT ISSUE.
*
*  THE TRANSACTION CONTEMPLATED HEREUNDER SHALL BE CONSTRUED IN ACCORDANCE
*  WITH THE LAWS OF THE STATE OF CALIFORNIA, USA, EXCLUDING ITS CONFLICT OF
*  LAWS PRINCIPLES.  ANY DISPUTES, CONTROVERSIES OR CLAIMS ARISING THEREOF AND
*  RELATED THERETO SHALL BE SETTLED BY ARBITRATION IN SAN FRANCISCO, CA, UNDER
*  THE RULES OF THE INTERNATIONAL CHAMBER OF COMMERCE (ICC).
*
*****************************************************************************/

/*******************************************************************************
 * File name:
 * ---------
 *   mml1_gpt_if.h
 *
 * Project:
 * --------
 *   UMOLY
 *
 * Description:
 * ------------
 *  MMRF test mode specific definitions for synchronizing with HOST tool
 *
 * Author:
 * -------
 * -------
 *
 * ==========================================================================
 * $Log$
 *
 * 08 10 2018 yungshian.lai
 * [MOLY00339854] [MMRF][Huawei][6762][6761] Make sure RF Cal Data accuracy Development - LR12A.R3.MP.
 *
 * 08 10 2018 yungshian.lai
 * [MOLY00339854] [MMRF][Huawei][6762][6761] Make sure RF Cal Data accuracy Development - LR12A.R3.MP.
 *
 * 09 01 2017 yu-hsuan.sung
 * [MOLY00267124] TAS 2.0
 *
 * 07 17 2017 kai-wei.chou
 * [MOLY00263951] [MT6293][DPD] DPD delay search, update the method to PUSCH and bypass the confirm msg.
 * .
 *
 * 06 13 2017 kai-wei.chou
 * [MOLY00256747] [DPD] new create LTE/WCDMA DPD.
 * .
 *
 * 05 23 2017 samuel.yang
 * [MOLY00251669] [MT6293] Enable MMTST TAS forced mode API
 * .
 *
 * 01 25 2017 chunchieh.liao
 * [MOLY00226727] [MT6293] LTE RFC META debug tool implementation
 * .
 *
 * 01 24 2017 yi-ying.lin
 * [MOLY00226588] [Bianco Bring-up][MMRF] MMRF BSI/BPI SCH allocation DVT test function
 * .
 *
 * 11 02 2016 sj.cheng
 * [MOLY00208638] [MMRF] Add BPI data read/write function in GP tool
 *
 * 10 21 2016 sj.cheng
 * [MOLY00208638] [MMRF] Add BPI data read/write function in GP tool (Roll back)
 *
 * 08 02 2016 yuyang.hsiao
 * [MOLY00194704] [MMRF] Add PMIC resd/write function in GP Tool
 *
 * 06 01 2016 yuyang.hsiao
 * [MOLY00177543] [MMRF] Add MIPI Imm and BB reg R/W in GP tool
 *
 * 04 07 2016 samuel.yang
 * [MOLY00172925] [MT6292] Add command to copy MMRF self-cal results to NVRAM
 * .
 *
 * 04 07 2016 samuel.yang
 * [MOLY00172920] [MT6292] MMRF RF self-K command enumeration update
 * .
 *
 * 02 17 2016 yu-hsuan.sung
 * [MOLY00165084] [MMRFTST] Set/Get BSI CW
 *
 * 02 16 2016 samuel.yang
 * [MOLY00160514] [MT6292] Check in MMRF modifications for GP tool
 * .
 *
 ****************************************************************************/

#ifndef __MML1_GPT_IF_H__
#define __MML1_GPT_IF_H__

/*******************************************************************************
 * Include
 ******************************************************************************/
#include "kal_general_types.h"
#include "mml1_meta_if.h"


/*******************************************************************************
 * Enumeration
 ******************************************************************************/
typedef enum
{
    mm_get_8_lev_tadc      = MMRF_TEST_CMD_GET_TADC_SETTING
   ,mm_set_8_lev_tadc      = MMRF_TEST_CMD_SET_TADC_SETTING
   ,mm_get_curr_tadc       = MMRF_TEST_CMD_GET_RF_TEMP
   ,mm_get_temp_info       = MMRF_TEST_CMD_GET_TEMPERATURE_INFO
   ,mm_force_tas           = MMRF_TEST_CMD_FORCE_TAS
   ,mm_query_tas_info      = MMRF_TEST_CMD_GET_TAS_STATE_CFG
   ,mm_self_k_v2           = MMRF_TEST_CMD_START_RF_SELF_CAL_V2
   ,mm_get_self_k_rslt     = MMRF_TEST_CMD_GET_RF_SELF_CAL_RESULT_V2
   ,mm_set_self_k_rslt     = MMRF_TEST_CMD_SET_RF_SELF_CAL_RESULT_V2
   ,mm_get_self_k_dbg_info = MMRF_TEST_CMD_GET_RF_SELF_CAL_DBG_INFO_V2
   ,mm_get_self_k_key      = MMRF_TEST_CMD_GET_RF_SELF_CAL_RESULT_KEY_V2
   ,mm_self_test_analyzer  = MMRF_TEST_CMD_START_RF_SELF_TEST_ANALYZER
   ,mm_set_get_bsi         = MMRF_TEST_CMD_SET_GET_BSI_CW
   ,mm_start_lte_dpd_k_v3       = MMRF_TEST_CMD_START_DPD_FAC_CAL_V3
   ,mm_get_lte_dpd_all_v3       = MMRF_TEST_CMD_GET_DPD_FAC_CAL_ALL_V3
   ,mm_set_lte_dpd_all_v3       = MMRF_TEST_CMD_SET_DPD_FAC_CAL_ALL_V3
   ,mm_set_lte_dpd_partial_v3   = MMRF_TEST_CMD_SET_DPD_FAC_CAL_PARTIAL_V3
   ,mm_start_wcdma_dpd_k_v3     = MMRF_TEST_CMD_START_DPD_FAC_CAL_V3
   ,mm_get_wcdma_dpd_all_v3     = MMRF_TEST_CMD_GET_DPD_FAC_CAL_ALL_V3
   ,mm_set_wcdma_dpd_all_v3     = MMRF_TEST_CMD_SET_DPD_FAC_CAL_ALL_V3
   ,mm_set_wcdma_dpd_partial_v3 = MMRF_TEST_CMD_SET_DPD_FAC_CAL_PARTIAL_V3
   ,mm_set_lte_dpd_delay        = MMRF_TEST_CMD_SET_DPD_PATH_DELAY_SEARCH_V3
   ,mm_start_lte_dpd_delay      = MMRF_TEST_CMD_START_DPD_PATH_DELAY_SEARCH_V3
   ,mm_get_lte_dpd_delay        = MMRF_TEST_CMD_GET_DPD_PATH_DELAY_SEARCH_V3
   ,mm_set_wcdma_dpd_delay      = MMRF_TEST_CMD_SET_DPD_PATH_DELAY_SEARCH_V3
   ,mm_start_wcdma_dpd_delay    = MMRF_TEST_CMD_START_DPD_PATH_DELAY_SEARCH_V3
   ,mm_get_wcdma_dpd_delay      = MMRF_TEST_CMD_GET_DPD_PATH_DELAY_SEARCH_V3
   #if (defined __MMRF_CAL_DATA_CHECKSUM_VERIFY__ )
   ,mm_calc_checksum_cal        = MMRF_TEST_CMD_CALC_CHECKSUM_CAL
   ,mm_verify_checksum          = MMRF_TEST_CMD_VERIFY_CHECKSUM
   #endif
   ,mm_test_command        = MMRF_TEST_CMD_GP_TOOL_COMMAND_START

   /* --------------- please add self-defined command posterior to this line ---------------- */
   ,mm_copy_self_k_rslt_to_nv
   ,mm_set_get_mipi_cw
   ,mm_set_get_bb_reg
   ,mm_set_get_pmic_reg
   ,mm_set_get_bpi_data
   ,mm_set_bsisch_allocate
   ,mm_set_bpisch_allocate

}ft_mmrf_test_req_id_cmd_enum_type;


/*******************************************************************************
 * GP RF Tool Commands I (for existing MMRF commands shown on GP tool UI)
 ******************************************************************************/

/* ----------------------------------- *\
|* Get Temperature 8-level DAC Command *|
\* ------------------------------------------------------------------------------------ */
typedef MMRfTestCmd_GetTadcSetting_ReqParam           mm_get_8_lev_tadc_req_param_struct;
typedef MMRfTestCmd_GetTadcSetting_CnfParam           mm_get_8_lev_tadc_cnf_param_struct;
typedef MMRfTestCmd_GetTadcSetting_CnfPdu             mm_get_8_lev_tadc_cnf_pdu_struct;

/* ----------------------------------- *\
|* Set Temperature 8-level DAC Command *|
\* ------------------------------------------------------------------------------------ */
typedef MMRfTestCmd_SetTadcSetting_ReqParam           mm_set_8_lev_tadc_req_param_struct;
typedef MMRfTestCmd_SetTadcSetting_ReqPdu             mm_set_8_lev_tadc_req_pdu_struct;
typedef MMRfTestCmd_SetTadcSetting_CnfParam           mm_set_8_lev_tadc_cnf_param_struct;

/* --------------------------- *\
|* Get Temperature DAC Command *|
\* ------------------------------------------------------------------------------------ */
typedef MMRfTestCmd_GetRfTemp_ReqParam                mm_get_curr_tadc_req_param_struct;
typedef MMRfTestCmd_GetRfTemp_CnfParam                mm_get_curr_tadc_cnf_param_struct;

/* ---------------------------- *\
|* Get Temperature Info Command *|
\* ------------------------------------------------------------------------------------ */
typedef MMRfTestCmd_GetTemperatureInfo_ReqParam       mm_get_temp_info_req_param_struct;
typedef MMRfTestCmd_GetTemperatureInfo_CnfParam       mm_get_temp_info_cnf_param_struct;

/* ----------------- *\
|* TAS Force Setting *|
\* ------------------------------------------------------------------------------------ */
typedef MMRfTestCmd_ForceTas_ReqParam                 mm_force_tas_req_param_struct;
typedef MMRfTestCmd_ForceTas_CnfParam                 mm_force_tas_cnf_param_struct;

typedef MMRfTestCmd_GetTasStateCfg_ReqParam           mm_query_tas_info_req_param_struct;
typedef MMRfTestCmd_GetTasStateCfg_CnfParam           mm_query_tas_info_cnf_param_struct;
typedef MMRfTestCmd_GetTasStateCfg_CnfPdu             mm_query_tas_info_cnf_pdu_struct;

/* ------------------- *\
|* RF Self-Cal Command *|
\* ------------------------------------------------------------------------------------ */
typedef MMRfTestCmd_StartRfSelfCalV2_ReqParam         mm_self_k_v2_req_param_struct;
typedef MMRfTestCmd_StartRfSelfCalV2_CnfParam         mm_self_k_v2_cnf_param_struct;
typedef MMRfTestCmd_StartRfSelfCalV2_CnfPdu           mm_self_k_v2_cnf_pdu_struct;

typedef MMRfTestCmd_GetRfSelfCalResultV2_ReqParam     mm_get_self_k_rslt_req_param_struct;
typedef MMRfTestCmd_GetRfSelfCalResultV2_CnfParam     mm_get_self_k_rslt_cnf_param_struct;
typedef MMRfTestCmd_GetRfSelfCalResultV2_CnfPdu       mm_get_self_k_rslt_cnf_pdu_struct;

typedef MMRfTestCmd_SetRfSelfCalResultV2_ReqParam     mm_set_self_k_rslt_req_param_struct;
typedef MMRfTestCmd_SetRfSelfCalResultV2_ReqPdu       mm_set_self_k_rslt_req_pdu_struct;
typedef MMRfTestCmd_SetRfSelfCalResultV2_CnfParam     mm_set_self_k_rslt_cnf_param_struct;

typedef MMRfTestCmd_GetRfSelfCalDbgInfoV2_ReqParam    mm_get_self_k_dbg_info_req_param_struct;
typedef MMRfTestCmd_GetRfSelfCalDbgInfoV2_CnfParam    mm_get_self_k_dbg_info_cnf_param_struct;
typedef MMRfTestCmd_GetRfSelfCalDbgInfoV2_CnfPdu      mm_get_self_k_dbg_info_cnf_pdu_struct;

typedef MMRfTestCmd_GetRfSelfCalResultKeyV2_ReqParam  mm_get_self_k_key_req_param_struct;
typedef MMRfTestCmd_GetRfSelfCalResultKeyV2_CnfParam  mm_get_self_k_key_cnf_param_struct;
typedef MMRfTestCmd_GetRfSelfCalResultKeyV2_CnfPdu    mm_get_self_k_key_cnf_pdu_struct;

typedef MMRfTestCmd_StartRFSelfTestAnalyzer_ReqParam   mm_self_test_analyzer_req_param_struct;
typedef MMRfTestCmd_StartRFSelfTestAnalyzer_CnfParam   mm_self_test_analyzer_cnf_param_struct;
typedef MMRfTestCmd_StartRFSelfTestAnalyzer_CnfPdu     mm_self_test_analyzer_cnf_pdu_struct;

/* -------------- *\
|* MM_SET_GET_BSI *|
\* ------------------------------------------------------------------------------------ */
typedef MMRfTestCmd_GetSetBSICW_ReqParam              mm_set_get_bsi_req_param_struct;
typedef MMRfTestCmd_GetSetBSICW_ReqPdu                mm_set_get_bsi_req_pdu_struct;
typedef MMRfTestCmd_GetSetBSICW_CnfParam              mm_set_get_bsi_cnf_param_struct;
typedef MMRfTestCmd_GetSetBSICW_CnfPdu                mm_set_get_bsi_cnf_pdu_struct;

/* ----------- *\
|* DPD Command *|
\* ------------------------------------------------------------------------------------ */
/* Since DPD code check the peer buffer size, if we define the peer buffer for LTE and WCDMA
   as a union, the peer buffer size will be the size of the largest element, e.g.,
   sizeof(ERfTestCmd_SetDpdAll_ReqInfo), in this case, 3G DPD code checks the size is 4G,
   then it assert. So we define two command for LTE and WCDMA DPD command for GP tool */

/* start */
typedef MMRfTestCmd_StartDpdFacCalV3_ReqParam         mm_start_lte_dpd_k_v3_req_param_struct;
typedef MMRfTestCmd_StartDpdFacCalV3_CnfParam         mm_start_lte_dpd_k_v3_cnf_param_struct;
typedef ERfTestCmd_StartDpdFacCal_ReqPdu              mm_start_lte_dpd_k_v3_req_pdu_struct;
                                                         
typedef MMRfTestCmd_StartDpdFacCalV3_ReqParam         mm_start_wcdma_dpd_k_v3_req_param_struct;
typedef MMRfTestCmd_StartDpdFacCalV3_CnfParam         mm_start_wcdma_dpd_k_v3_cnf_param_struct;

#ifndef __LTE_L1SIM__
   typedef URfTestCmd_StartDpdPaAndDpdFacCal_ReqPdu   mm_start_wcdma_dpd_k_v3_req_pdu_struct;
#endif

/* get */
typedef MMRfTestCmd_GetDpdFacCalAllV3_ReqParam        mm_get_lte_dpd_all_v3_req_param_struct;
typedef MMRfTestCmd_GetDpdFacCalAllV3_CnfParam        mm_get_lte_dpd_all_v3_cnf_param_struct;
typedef ERfTestCmd_GetDpdFacCalAll_CnfPdu             mm_get_lte_dpd_all_v3_cnf_pdu_struct;
                                                         
typedef MMRfTestCmd_GetDpdFacCalAllV3_ReqParam        mm_get_wcdma_dpd_all_v3_req_param_struct;
typedef MMRfTestCmd_GetDpdFacCalAllV3_CnfParam        mm_get_wcdma_dpd_all_v3_cnf_param_struct;

#ifndef __LTE_L1SIM__
   typedef URfTestCmd_GetDpdFacCalAll_CnfPdu          mm_get_wcdma_dpd_all_v3_cnf_pdu_struct;
#endif

/* set all */
typedef MMRfTestCmd_SetDpdFacCalAllV3_ReqParam        mm_set_lte_dpd_all_v3_req_param_struct;
typedef MMRfTestCmd_SetDpdFacCalAllV3_CnfParam        mm_set_lte_dpd_all_v3_cnf_param_struct;
typedef ERfTestCmd_SetDpdFacCalAll_ReqPdu             mm_set_lte_dpd_all_v3_req_pdu_struct;
                                                         
typedef MMRfTestCmd_SetDpdFacCalAllV3_ReqParam        mm_set_wcdma_dpd_all_v3_req_param_struct;
typedef MMRfTestCmd_SetDpdFacCalAllV3_CnfParam        mm_set_wcdma_dpd_all_v3_cnf_param_struct;

#ifndef __LTE_L1SIM__
   typedef URfTestCmd_SetDpdFacCalAll_ReqPdu          mm_set_wcdma_dpd_all_v3_req_pdu_struct;
#endif

/* set partial */
typedef MMRfTestCmd_SetDpdFacCalPartialV3_ReqParam    mm_set_lte_dpd_partial_v3_req_param_struct;
typedef MMRfTestCmd_SetDpdFacCalPartialV3_CnfParam    mm_set_lte_dpd_partial_v3_cnf_param_struct;
typedef ERfTestCmd_SetDpdFacCalPartial_ReqPdu         mm_set_lte_dpd_partial_v3_req_pdu_struct;

typedef MMRfTestCmd_SetDpdFacCalPartialV3_ReqParam    mm_set_wcdma_dpd_partial_v3_req_param_struct;
typedef MMRfTestCmd_SetDpdFacCalPartialV3_CnfParam    mm_set_wcdma_dpd_partial_v3_cnf_param_struct;

#ifndef __LTE_L1SIM__
   typedef URfTestCmd_SetDpdFacCalPartial_ReqPdu      mm_set_wcdma_dpd_partial_v3_req_pdu_struct;
#endif

/* ------------------ *\
|* DPD DELAY_COMMAND  *|
\* ------------------------------------------------------------------------------------ */

/* New create WCDMA commmand for debugging WCDMA,
   because the peer buffer size is always the largest one (from LTE)*/

/* LTE DPD Delay Search */
/* set */
typedef MMRfTestCmd_SetDpdPathDelaySearchV3_ReqParam     mm_set_lte_dpd_delay_req_param_struct;
typedef MMRfTestCmd_SetDpdPathDelaySearchV3_CnfParam     mm_set_lte_dpd_delay_cnf_param_struct;
typedef ERfTestCmd_SetDpdPathDelaySearchV3_ReqPdu        mm_set_lte_dpd_delay_req_pdu_struct;

/* start */
typedef MMRfTestCmd_StartDpdPathDelaySearchV3_ReqParam   mm_start_lte_dpd_delay_req_param_struct;
typedef MMRfTestCmd_StartDpdPathDelaySearchV3_CnfParam   mm_start_lte_dpd_delay_cnf_param_struct;

/* get */
typedef MMRfTestCmd_GetDpdPathDelaySearchV3_ReqParam     mm_get_lte_dpd_delay_req_param_struct;
typedef MMRfTestCmd_GetDpdPathDelaySearchV3_CnfParam     mm_get_lte_dpd_delay_cnf_param_struct;
typedef ERfTestCmd_GetDpdPathDelaySearchV3_CnfPdu        mm_get_lte_dpd_delay_cnf_pdu_struct;

/* WCDMA DPD Delay Search */
/* set */
typedef MMRfTestCmd_SetDpdPathDelaySearchV3_ReqParam     mm_set_wcdma_dpd_delay_req_param_struct;
typedef MMRfTestCmd_SetDpdPathDelaySearchV3_CnfParam     mm_set_wcdma_dpd_delay_cnf_param_struct;

#ifndef __LTE_L1SIM__
typedef URfTestCmd_SetDpdPathDelaySearchV3_ReqPdu        mm_set_wcdma_dpd_delay_req_pdu_struct;
#endif

/* start */
typedef MMRfTestCmd_StartDpdPathDelaySearchV3_ReqParam   mm_start_wcdma_dpd_delay_req_param_struct;
typedef MMRfTestCmd_StartDpdPathDelaySearchV3_CnfParam   mm_start_wcdma_dpd_delay_cnf_param_struct;

/* get */
typedef MMRfTestCmd_GetDpdPathDelaySearchV3_ReqParam     mm_get_wcdma_dpd_delay_req_param_struct;
typedef MMRfTestCmd_GetDpdPathDelaySearchV3_CnfParam     mm_get_wcdma_dpd_delay_cnf_param_struct;

#ifndef __LTE_L1SIM__
typedef URfTestCmd_GetDpdPathDelaySearchV3_CnfPdu        mm_get_wcdma_dpd_delay_cnf_pdu_struct;
#endif


#if (defined __MMRF_CAL_DATA_CHECKSUM_VERIFY__ )
/* ----------------- *\
|* CHECK_SUM_COMMAND *|
\* ------------------------------------------------------------------------------------ */
/* calulate checksum cal */
typedef MMRfTestCmd_CalcCheckSumCal_ReqParam          mm_calc_checksum_cal_req_param_struct;
typedef MMRfTestCmd_CalcCheckSumCal_CnfParam          mm_calc_checksum_cal_cnf_param_struct;

/* verify checksum */
typedef MMRfTestCmd_VerifyCheckSum_ReqParam          mm_verify_checksum_req_param_struct;
typedef MMRfTestCmd_VerifyCheckSum_CnfParam          mm_verify_checksum_cnf_param_struct;
#endif


/*******************************************************************************
 * GP RF Tool Commands II (for self-defined MMRF commands)
 ******************************************************************************/

/* --------------- *\
|* MM_TEST_COMMAND *|
\* ------------------------------------------------------------------------------------ */
typedef struct
{
   kal_uint16 req_param1;
   kal_uint16 req_param2;
   kal_uint16 req_param3;
} mm_test_command_req_param_struct;

typedef struct
{
   kal_uint16 req_pdu1;
   kal_uint16 req_pdu2;
   kal_uint16 req_pdu3;
} mm_test_command_req_pdu_struct;

typedef struct
{
   kal_uint16 cnf_param1;
   kal_uint16 cnf_param2;
   kal_uint16 cnf_param3;
} mm_test_command_cnf_param_struct;

/* =========== please add self-defined command structure posterior to this line ========== */

/* ------------------------- *\
|* MM_COPY_SELF_K_RSLT_TO_NV *|
\* ------------------------------------------------------------------------------------ */
typedef enum
{
   MMRF_SFKDCS_NOT_USED  = 0,
   MMRF_SFKDCS_COPY_OK   = 1,
   MMRF_SFKDCS_GET_FAIL  = 2,
   MMRF_SFKDCS_SET_FAIL  = 2,
   MMRF_SFKDCS_INVALID   = 0x7FFF,

}MMRfTestCmd_RfSelfCalDataCopyStatus;

// Payload of local parameter within request ILM message  (FT task --> MMRF task)
typedef struct
{
   MMRfTestCmd_RatIndicator   rat_idx;          // bitmap: (0|0|Lf|Lt|W|C|T|G)
   MMRfTestCmd_RfSelfCalStage self_k_stage;     // 0: pre-self-K, 1: post-self-K
   kal_uint16                 item_index_start; // start index of items which are requested to copy to NVRAM
   kal_uint16                 item_index_cnt;   // total count of items which are requested to copy to NVRAM

}mm_copy_self_k_rslt_to_nv_req_param_struct;

// Payload of local parameter within confirm ILM message  (MMRF task --> FT task)
typedef struct
{
   MMRfTestCmd_RatIndicator            rat_idx;          // bitmap: (0|0|Lf|Lt|W|C|T|G)
   MMRfTestCmd_RfSelfCalStage          self_k_stage;     // 0: pre-self-K, 1: post-self-K
   MMRfTestCmd_RfSelfCalSetStageStatus stage_set_sts;    // 0: stage not support, 1: process OK
   kal_uint16                          item_index_start; // start index of items which are requested to copy to NVRAM
   kal_uint16                          item_index_cnt;   // total count of items which are requested to copy to NVRAM

}mm_copy_self_k_rslt_to_nv_cnf_param_struct;

// Payload of peer buffer within confirm ILM message  (MMRF task --> FT task)
typedef struct
{
   kal_uint16                           item_index;
   MMRfTestCmd_RfSelfCalDataCopyStatus  set_status;

}MMRfTestCmd_CopySelfCalResultInfo;

typedef struct
{
   MMRfTestCmd_CopySelfCalResultInfo info[1024];

}mm_copy_self_k_rslt_to_nv_cnf_pdu_struct;

/* ------------------ *\
|* MM_SET_GET_MIPI_CW *|
\* ------------------------------------------------------------------------------------ */
typedef enum
{
   MIPI_RW          = 0x0000,
   MIPI_EXTRW_1BYTE = 0x0001,
   MIPI_EXTRW_2BYTE = 0x0002,
   MIPI_EXTRW_3BYTE = 0x0003,
   MIPI_EXTRW_4BYTE = 0x0004,
   MIPI_SUPPORT_RW_CNT,
}MML1TST_MIPI_REG_RW_E;

typedef struct
{
   MML1TST_RF_BSIMM_PORT_T  port_sel;
   MML1TST_MIPI_REG_RW_E    rw_type;
   kal_uint8                usid;
   kal_uint16               addr;
   kal_uint32               data1;
   kal_uint32               data2;
   kal_uint32               wait_us;
}MML1TST_MIPI_CW_T;

typedef struct
{
   MMRfSetGetBSIEnableE     gpt_mipi_enable;
   MMRfSstGstBSIE           w_r;
   MML1TST_MIPI_CW_T        mipi_ctrl;
}MIPI_GPT_INFORMATION;

typedef struct
{
   kal_uint32  meaningless;
}mm_set_get_mipi_cw_req_param_struct;

typedef struct
{
   MIPI_GPT_INFORMATION MIPI_GPT[MMRF_GPTOOL_EN_BSI_CW_NUMBER];
}mm_set_get_mipi_cw_req_pdu_struct;

typedef struct
{
   kal_uint32  meaningless;
}mm_set_get_mipi_cw_cnf_param_struct;

typedef struct
{
   MIPI_GPT_INFORMATION MIPI_GPT[MMRF_GPTOOL_EN_BSI_CW_NUMBER];
}mm_set_get_mipi_cw_cnf_pdu_struct;

/* ----------------- *\
|* MM_SET_GET_BB_REG *|
\* ------------------------------------------------------------------------------------ */
#define MMRF_GPTOOL_EN_BB_REG_NUMBER     64

typedef enum
{
   MM_SET_GET_BBREG_DISABLE = 0,
   MM_SET_GET_BBREG_ENABLE  = 1
}MMRfSetGetBBRegEnableE;

typedef enum
{
   MM_SET_GET_BBREG_WRITE = 0,
   MM_SET_GET_BBREG_READ  = 1
}MMRfSstGstBBRegE;

typedef struct
{
   MMRfSetGetBBRegEnableE gpt_bb_reg_enable;
   MMRfSstGstBBRegE       w_r;
   kal_uint32 addr;
   kal_uint32 data;
}BB_REG_GPT_INFORMATION;

typedef struct
{
   kal_uint32  meaningless;
}mm_set_get_bb_reg_req_param_struct;

typedef struct
{
   BB_REG_GPT_INFORMATION BB_REG[MMRF_GPTOOL_EN_BB_REG_NUMBER];
}mm_set_get_bb_reg_req_pdu_struct;

typedef struct
{
   kal_uint32  meaningless;
}mm_set_get_bb_reg_cnf_param_struct;

typedef struct
{
   BB_REG_GPT_INFORMATION BB_REG[MMRF_GPTOOL_EN_BB_REG_NUMBER];
}mm_set_get_bb_reg_cnf_pdu_struct;

/* ------------------- *\
|* MM_SET_GET_PMIC_REG *|
\* ------------------------------------------------------------------------------------ */
#define MMRF_GPTOOL_EN_PMIC_REG_NUMBER     32

typedef enum
{
   MM_SET_GET_PMICREG_DISABLE = 0,
   MM_SET_GET_PMICREG_ENABLE  = 1
}MMRfSetGetPMICRegEnableE;

typedef enum
{
   MM_SET_GET_PMICREG_WRITE = 0,
   MM_SET_GET_PMICREG_READ  = 1,
   MM_SET_GET_DCXOREG_WRITE = 2,
   MM_SET_GET_DCXOREG_READ  = 3   
}MMRfSstGstPMICRegE;

typedef struct
{
   MMRfSetGetPMICRegEnableE gpt_pmic_reg_enable;
   MMRfSstGstPMICRegE       w_r;
   kal_uint32 addr;
   kal_uint16 data;
}PMIC_REG_GPT_INFORMATION;

typedef struct
{
   kal_uint32  meaningless;
}mm_set_get_pmic_reg_req_param_struct;

typedef struct
{
   PMIC_REG_GPT_INFORMATION PMIC_REG[MMRF_GPTOOL_EN_PMIC_REG_NUMBER];
}mm_set_get_pmic_reg_req_pdu_struct;

typedef struct
{
   kal_uint32  meaningless;
}mm_set_get_pmic_reg_cnf_param_struct;

typedef struct
{
   PMIC_REG_GPT_INFORMATION PMIC_REG[MMRF_GPTOOL_EN_PMIC_REG_NUMBER];
}mm_set_get_pmic_reg_cnf_pdu_struct;

/* ---------------*\
|* MM_SET_GET_BPI *|
\* ------------------------------------------------------------------------------------ */
#define MMRF_GPTOOL_EN_BPI_DATA_NUMBER      2

typedef enum
{
   MM_SET_GET_BPI_DATA_DISABLE = 0,
   MM_SET_GET_BPI_DATA_ENABLE  = 1
}MMRfSetGetBPIDataEnableE;

typedef enum
{
   MM_SET_GET_BPI_DATA_WRITE = 0,
   MM_SET_GET_BPI_DATA_READ  = 1 
}MMRfSstGstBPIDataE;

typedef struct
{
   MMRfSetGetBPIDataEnableE  gpt_bpi_data_enable;
   MMRfSstGstBPIDataE        w_r;
   kal_uint32 data1;
   kal_uint32 data2;
}BPI_DATA_GPT_INFORMATION;

typedef struct
{
   kal_uint32  meaningless;
}mm_set_get_bpi_data_req_param_struct;

typedef struct
{
   BPI_DATA_GPT_INFORMATION BPI_GPT[MMRF_GPTOOL_EN_BPI_DATA_NUMBER];
}mm_set_get_bpi_data_req_pdu_struct;

typedef struct
{
   kal_uint32  meaningless;
}mm_set_get_bpi_data_cnf_param_struct;

typedef struct
{
   BPI_DATA_GPT_INFORMATION BPI_GPT[MMRF_GPTOOL_EN_BPI_DATA_NUMBER];
}mm_set_get_bpi_data_cnf_pdu_struct;

/* -------------------------*\
|* MM_SET_BSISCH_ALLOCATE   *|
\* ------------------------------------------------------------------------------------ */
#define MMRF_GPTOOL_EN_BSISCH_ALLOCATE_NUMBER      6
   
   typedef enum
   {
      MM_SET_BSISCH_ALLOCATE_DISABLE = 0,
      MM_SET_BSISCH_ALLOCATE_ENABLE  = 1
   }MMRfSetBSISchAllocateE;

   typedef enum
   {
      MMRF_GPT_MODE_LTE = 0x0,
      MMRF_GPT_MODE_FDD = 0x1, 
      MMRF_GPT_MODE_GSM = 0x2, 
      MMRF_GPT_MODE_C1X = 0x4, 
      MMRF_GPT_MODE_CDO = 0x5, 
      MMRF_GPT_MODE_TDD = 0x6, 
   } MML1TST_RF_MODE_E;

   typedef struct
   {
      MML1TST_RF_MODE_E        mode;
      kal_uint32               Bias;      
      kal_int32                event_time;
      kal_uint32               bsi_data_num;
      kal_uint32               bsi_data_buf[32];
      MML1TST_RF_BSIMM_PORT_T  bsi_data_port[32];
      /************** mipi only ****************/      
      kal_uint32               mipi_wlen[32];
      kal_uint32               mipi_lock[32];
   }MMRfBSISchAllocateInfo;

   typedef enum
   {
      MM_SET_BSISCH_ALLOCATE_RFIC,
      MM_SET_BSISCH_ALLOCATE_MIPI,
      MM_SET_BSISCH_ALLOCATE_RFIC_EVENT_CONTINUOUS,
      MM_SET_BSISCH_ALLOCATE_RFIC_EVENT_STOP,
      MM_SET_BSISCH_ALLOCATE_MIPI_EVENT_CONTINUOUS,
      MM_SET_BSISCH_ALLOCATE_MIPI_EVENT_STOP
   } MMRfBSISchRficMipiE;
   
   typedef struct
   {
      MMRfSetBSISchAllocateE  gpt_bsisch_allocate_enable;
      MMRfBSISchRficMipiE     BSISch_rfic_mipi;
      MMRfBSISchAllocateInfo  BSISch_ctrl;
   }BSISCH_GPT_INFORMATION;
   
   typedef struct
   {
      kal_uint32  meaningless;
   }mm_set_bsisch_allocate_req_param_struct;
   
   typedef struct
   {
      BSISCH_GPT_INFORMATION BSISCH_GPT[MMRF_GPTOOL_EN_BSISCH_ALLOCATE_NUMBER];
   }mm_set_bsisch_allocate_req_pdu_struct;
   
   typedef struct
   {
      kal_uint32  meaningless;
   }mm_set_bsisch_allocate_cnf_param_struct;
   
   typedef struct
   {
      BSISCH_GPT_INFORMATION BSISCH_GPT[MMRF_GPTOOL_EN_BSISCH_ALLOCATE_NUMBER];
   }mm_set_bsisch_allocate_cnf_pdu_struct;

/* -------------------------*\
|* MM_SET_BPISCH_ALLOCATE   *|
\* ------------------------------------------------------------------------------------ */
#define MMRF_GPTOOL_EN_BPISCH_ALLOCATE_NUMBER      3
   
   typedef enum
   {
      MM_SET_BPISCH_ALLOCATE_DISABLE = 0,
      MM_SET_BPISCH_ALLOCATE_ENABLE  = 1
   }MMRfSetBPISchAllocateE;


   /* for BPI_MM, BPI buffer config */
   typedef enum
   {
      MMRF_GPT_GSM_EVT_BUF       = 0x0,
      MMRF_GPT_FDD_TX1_EVT_BUF   = 0x1,
      MMRF_GPT_FDD_RX1_EVT_BUF   = 0x2,
      MMRF_GPT_FDD_RX2_EVT_BUF   = 0x3,
      MMRF_GPT_TDD_EVT_BUF       = 0x4,
      MMRF_GPT_LTE_TX1_EVT_BUF   = 0x5,
      MMRF_GPT_LTE_RX1_EVT_BUF   = 0x6,
      MMRF_GPT_LTE_RX2_EVT_BUF   = 0x7,
      MMRF_GPT_C2K1X_TX1_EVT_BUF = 0x8,
      MMRF_GPT_C2K1X_RX1_EVT_BUF = 0x9,
      MMRF_GPT_C2K1X_RX2_EVT_BUF = 0xA,
      MMRF_GPT_C2KDP_TX1_EVT_BUF = 0xB,
      MMRF_GPT_C2KDP_RX1_EVT_BUF = 0xC,
      MMRF_GPT_C2KDP_RX2_EVT_BUF = 0xD,
   
   } MML1TST_BPIMM_BUF_CFG_E;

   typedef struct
   {
      MML1TST_RF_MODE_E        mode;
      kal_uint32               Bias;      
      kal_int32                event_time;
      kal_uint32               bpi_data;
      MML1TST_BPIMM_BUF_CFG_E  bpi_buf_cfg;
   }MMRfBPISchAllocateInfo;

   typedef enum
   {
      MM_SET_BPISCH_ALLOCATE,
      MM_SET_BPISCH_ALLOCATE_EVENT_CONTINUOUS,
      MM_SET_BPISCH_ALLOCATE_EVENT_STOP
   } MMRfBPISchE;
   
   typedef struct
   {
      MMRfSetBPISchAllocateE  gpt_bpisch_allocate_enable;
      MMRfBPISchE             BPISch_mode;
      MMRfBPISchAllocateInfo  BPISch_ctrl;
   }BPISCH_GPT_INFORMATION;
   
   typedef struct
   {
      kal_uint32  meaningless;
   }mm_set_bpisch_allocate_req_param_struct;
   
   typedef struct
   {
      BPISCH_GPT_INFORMATION BPISCH_GPT[MMRF_GPTOOL_EN_BPISCH_ALLOCATE_NUMBER];
   }mm_set_bpisch_allocate_req_pdu_struct;
   
   typedef struct
   {
      kal_uint32  meaningless;
   }mm_set_bpisch_allocate_cnf_param_struct;
   
   typedef struct
   {
      BPISCH_GPT_INFORMATION BPISCH_GPT[MMRF_GPTOOL_EN_BPISCH_ALLOCATE_NUMBER];
   }mm_set_bpisch_allocate_cnf_pdu_struct;

#endif
