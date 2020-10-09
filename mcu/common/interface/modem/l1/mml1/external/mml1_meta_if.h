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
 * Filename:
 * ---------
 *   mml1_meta_if.h
 *
 * Project:
 * --------
 *   TK6291
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
 * 03 13 2019 yu-hsuan.sung
 * [MOLY00389569] [T100] 在信??好地方，插入移?sim卡，?屏待手机休眠后解??亮手机??信??差，稍后自?恢复
 *
 * 08 10 2018 yungshian.lai
 * [MOLY00339854] [MMRF][Huawei][6762][6761] Make sure RF Cal Data accuracy Development - LR12A.R3.MP.
 *
 * 08 10 2018 yungshian.lai
 * [MOLY00339854] [MMRF][Huawei][6762][6761] Make sure RF Cal Data accuracy Development - LR12A.R3.MP.
 *
 * 06 05 2018 mars.chang
 * [MOLY00330383] META工具优化
 * MMRF MIPI R/W (R3)
 *
 * 05 28 2018 mars.chang
 * [MOLY00198691] MMRF MIPI CW set get tst part
 *
 * 09 28 2017 wei-shou.yang
 * [MOLY00277821] [MT6293][DPD][SMT] DPD code update
 * 3G traditional cal force APT mode.
 *
 * 09 20 2017 wei-shou.yang
 * [MOLY00276517] [MT6293][C2K][DPD]Feature Submit
 * MML1 part.
 *
 * 09 20 2017 lin.cao
 * [MOLY00276517] [MT6293][C2K][DPD]Feature Submit[TRUNK MML1 change for C2K DPD]
 *
 * 09 20 2017 lin.cao
 * [MOLY00276517] [MT6293][C2K][DPD]Feature Submit[TRUNK MML1 change for C2K DPD]
 *
 * 09 20 2017 lin.cao
 * [MOLY00276517] [MT6293][C2K][DPD]Feature Submit[TRUNK MML1 change for C2K DPD]
 *
 * 09 01 2017 yu-hsuan.sung
 * [MOLY00267124] TAS 2.0
 *
 * 08 15 2017 chia-hung.tsai
 * [MOLY00269172] [MT6293][MML1TST] Calibration Time Reduction
 *
 * 	.
 *
 * 08 08 2017 chia-hung.tsai
 * [MOLY00268393] [EL1D][DPD] DPD calibration/norrmal mode/otfc codes.
 *
 * 	.
 *
 * 07 17 2017 wei-shou.yang
 * [MOLY00263955] [93][DPD] Meta tool capability
 * 1. 3/4G factory cal capability.
 * 2. Traditional cal capability.
 * 3. Fix xL1sim build error.
 *
 * 07 17 2017 wei-shou.yang
 * [MOLY00263955] [93][DPD] Meta tool capability
 * 1. 3/4G factory cal capability.
 * 2. Traditional cal capability.
 * 3. Fix xL1sim build error.
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
 * [MOLY00250807] [MT6293] Revise MMRF CDDC feature
 * .
 *
 * 01 25 2017 chunchieh.liao
 * [MOLY00226727] [MT6293] LTE RFC META debug tool implementation
 * .
 *
 * 01 09 2017 samuel.yang
 * [MOLY00220821] [MT6293] Add MT6177L option
 * .
 *
 * 12 13 2016 samuel.yang
 * [MOLY00218234] [MT6292] Update union tag of MMRF_XL1TST
 * .
 *
 * 12 09 2016 sj.cheng
 * [MOLY00217416] [MMRF] Add MIPI port 5/6/7 in GP tool for Whitney and Alaska -- Sync code to UMOLYA
 *
 * 12 05 2016 mars.chang
 * [MOLY00198691] [MT6293][EL1TST] Common Modification
 * MT6293 EL1TST First huge modification
 *
 * 11 29 2016 samuel.yang
 * [MOLY00206311] [MT6292] Add MMRF common self-cal flow and revise post-stage RF self-cal flow
 * .
 *
 * 11 28 2016 chia-hung.tsai
 * [MOLY00214873] [MML1_XL1TST] Create xl1tst task and script interpreter on xl1sim
 *
 * 	.
 *
 * 07 18 2016 samuel.yang
 * [MOLY00191684] [MT6293] Add MMRF CDDC mechanism
 * .
 *
 * 06 27 2016 samuel.yang
 * [MOLY00181357] [MT6292][MMRF] Add command for querying VPA voltage table
 * .
 *
 * 06 06 2016 samuel.yang
 * [MOLY00183249] [MT6292][MMRF] Enlarge MMRF xl1tst peer buffer limit to 60kB per LTE RFC's request
 * .
 *
 * 06 01 2016 yuyang.hsiao
 * [MOLY00177543] [MMRF] Add MIPI Imm and BB reg R/W in GP tool
 *
 * 05 30 2016 yu-hsuan.sung
 * [MOLY00180557] [ELBRUS] add capability for META update parameter
 *
 * 05 12 2016 samuel.yang
 * [MOLY00179250] [MT6292] Update upper limit of transmission data size for MMRF self-k command
 * .
 *
 * 05 12 2016 samuel.yang
 * [MOLY00179250] [MT6292] Update upper limit of MMRF self-k LID count
 * .
 *
 * 04 26 2016 samuel.yang
 * [MOLY00175930] [MT6292] Sync XL1TST ET command enum
 * .
 *
 * 04 07 2016 samuel.yang
 * [MOLY00171042] [MMRF] Update MMRF TADC interface
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
 * 02 03 2016 samuel.yang
 * [MOLY00160514] [MT6292] Add error handle for MMRF self-k get result command
 * .
 *
 * 02 01 2016 wei-shou.yang
 * [MOLY00133503] [UMOLY][DPD] DPD code update
 * [0201] DPD coverity modification.
 *
 * 01 27 2016 samuel.yang
 * [MOLY00160514] [MT6292] MMRF NVRAM service enhancement
 * .
 *
 * 01 25 2016 mars.chang
 * [MOLY00162529] [MT6292][EL1TST]TAS feature
 * TAS.
 *
 * 01 21 2016 samuel.yang
 * [MOLY00160514] [MT6292] Update LR11 MMRF-TST related modifications to UMOLY
 * .
 *
 * 01 19 2016 samuel.yang
 * [MOLY00160192] [MT6292] Add MMRF TADC related commands
 * .
 *
 * 01 19 2016 samuel.yang
 * [MOLY00160514] [MT6292] MMRF-TST command format re-structure
 * .
 *
 * 01 06 2016 samuel.yang
 * [MOLY00155278] [MT6292] Check in feature of MMRF Sel-cal V2
 * .
 *
 * 07 06 2015 samuel.yang
 * [MOLY00126228] [MMRF] Add mechanism for RF self-K to print debug info during factory calibration
 * .
 *
 * 07 03 2015 samuel.yang
 * [MOLY00122885] [TK6291] Modify comment and remove redundant DPD/CIM3 capability from LTE
 * .
 *
 * 05 17 2015 samuel.yang
 * [MOLY00114080] [TK6291] Add mechanism for delivering string of self-cal to FT
 * .
 *
 * 05 13 2015 samuel.yang
 * [MOLY00113424] [TK6291] To prevent xL1sim from building error
 * .
 *
 * 05 07 2015 samuel.yang
 * [MOLY00111833] [TK6291] Phase in MMRF TST related modifications
 * .
 *
 ****************************************************************************/

#ifndef __MML1_META_IF_H__
#define __MML1_META_IF_H__

/*******************************************************************************
 * Include
 ******************************************************************************/
#include "kal_general_types.h"
#include "ft_msg_common.h"
#include "el1d_meta_if.h"

#ifndef L1_SIM
#include "cl1tstdpdif.h"
#include "ft_msg_ul1rf.h"
#endif

/*******************************************************************************
 * Constant
 ******************************************************************************/

// FMC is the abbreviation of "Factory Mode Capability"
#define MMRF_FMC_NULL_SETTING                     (0x0)  // default
#define MMRF_FMC_CAPABLE                          (0x1)  // item capable
#define MMRF_FMC_MANDATORY                        (0x1)  // item mandatory

#define MMRF_MAX_RF_SELF_K_LID_COUNT              (64)
#define MMRF_MAX_RF_SELF_K_STRING_LENGTH          (64)
#define MMRF_MAX_RF_SELF_K_DBG_INFO_COUNT         (128)

#define MMRF_MAX_RF_SELF_K_LID_COUNT_V2           (256)
#define MMRF_MAX_RF_SELF_K_LID_COUNT_PDU          (16)
#define MMRF_MAX_RF_SELF_K_PDU_SIZE               (60<<10)
#define MMRF_MAX_RF_SELF_K_DBG_INFO_COUNT_V2      (256)

#define MMRF_MAX_TADC_LEV_NUM                     (8)
#define MMRF_MAX_TADC_SET_NUM                     (8)

#define MMRF_GPTOOL_EN_BSI_CW_NUMBER              (64)

#define MMRF_MAX_TOOL_DATA_SIZE_PER_CMD           (64 * 1024 - 8) /* The max data size supported by one tool command */
#define MMRF_MAX_TOOL_LOCAL_P_HEADER_SIZE_PER_CMD (2 * 1024)      /* The max size of tool command header + local buffer, just a magic number, not a real tool limit */

/* The max data limit of one meta tool command(header + local buffer + peer buffer),
   so the max peer buffer size is MMRF_MAX_TOOL_DATA_SIZE_PER_CMD - MMRF_MAX_TOOL_LOCAL_P_HEADER_SIZE_PER_CMD */
#define MMRF_MAX_TOOL_PEER_SIZE_PER_CMD           (MMRF_MAX_TOOL_DATA_SIZE_PER_CMD - MMRF_MAX_TOOL_LOCAL_P_HEADER_SIZE_PER_CMD)

/*******************************************************************************
 * Macro
 ******************************************************************************/
#define DEFAULT_CNF_PARAM                 kal_uint32  result; // 0: confirm fail; 1: confirm ok


/*******************************************************************************
 * Enumeration
 ******************************************************************************/
typedef enum
{
   MMRF_TEST_CMD_CHECK_IF_FUNC_EXIST                 = 0,
   MMRF_TEST_CMD_GET_RF_CAPABILITY                   = 1,
   MMRF_TEST_CMD_START_DPD_FAC_CAL                   = 2,
   MMRF_TEST_CMD_GET_DPD_FAC_RESULT                  = 3,
   MMRF_TEST_CMD_SET_DPD_FAC_RESULT                  = 4,
   MMRF_TEST_CMD_DPD_FAC_EN_DIS                      = 5,
   MMRF_TEST_CMD_START_CIM3_FAC_CAL                  = 6,
   MMRF_TEST_CMD_GET_CIM3_FAC_RESULT                 = 7,
   MMRF_TEST_CMD_SET_CIM3_FAC_RESULT                 = 8,
   MMRF_TEST_CMD_CIM3_FAC_EN_DIS                     = 9,
   MMRF_TEST_CMD_START_RF_SELF_CAL                   = 10,
   MMRF_TEST_CMD_GET_RF_SELF_CAL_RESULT              = 11,
   MMRF_TEST_CMD_SET_RF_SELF_CAL_RESULT              = 12,
   MMRF_TEST_CMD_GET_RF_SELF_CAL_RESULT_LEN          = 13,
   MMRF_TEST_CMD_START_RF_SELF_CAL_V2                = 14,
   MMRF_TEST_CMD_GET_RF_SELF_CAL_RESULT_V2           = 15,
   MMRF_TEST_CMD_SET_RF_SELF_CAL_RESULT_V2           = 16,
   MMRF_TEST_CMD_GET_RF_SELF_CAL_DBG_INFO_V2         = 17,
   MMRF_TEST_CMD_GET_RF_SELF_CAL_DBG_INFO            = 18,
   MMRF_TEST_CMD_GET_RF_SELF_CAL_RESULT_KEY          = 19,
   MMRF_TEST_CMD_GET_RF_SELF_CAL_RESULT_KEY_V2       = 20,
   MMRF_TEST_CMD_START_DPD_PA_PROFILE_FAC_CAL        = 21,
   MMRF_TEST_CMD_GET_DPD_PA_PROFILE_FAC_RESULT       = 22,
   MMRF_TEST_CMD_SET_DPD_PA_PROFILE_FAC_RESULT       = 23,
   MMRF_TEST_CMD_GET_DPD_CIM3_LUT_CONFIG             = 24,
   MMRF_TEST_CMD_FORCE_TAS                           = 25,
   MMRF_TEST_CMD_START_ETCAL                         = 26,
   MMRF_TEST_CMD_GET_ETCAL_SETTING                   = 27,
   MMRF_TEST_CMD_SET_ETCAL_SETTING                   = 28,
   MMRF_TEST_CMD_CHECK_ET_PATH_DELAY_SEARCH          = 29,
   MMRF_TEST_CMD_START_ET_PATH_DELAY_SEARCH          = 30,
   MMRF_TEST_CMD_ET_MODE_SETTING                     = 31,
   MMRF_TEST_CMD_SET_TOOL_USAGE_TO_L1                = 32,
   MMRF_TEST_CMD_CHECK_DPD_PATH_DELAY_SEARCH         = 33,
   MMRF_TEST_CMD_START_DPD_PATH_DELAY_SEARCH         = 34,
   MMRF_TEST_CMD_GET_TADC_SETTING                    = 35,
   MMRF_TEST_CMD_SET_TADC_SETTING                    = 36,
   MMRF_TEST_CMD_GET_RF_TEMP                         = 37,
   MMRF_TEST_CMD_GET_TEMPERATURE_INFO                = 38,
   MMRF_TEST_CMD_SET_GET_BSI_CW                      = 39,
   MMRF_TEST_CMD_QUERY_VPA_VOLTAGE_LIST              = 44,
   MMRF_TEST_CMD_START_RF_SELF_TEST_ANALYZER         = 54,
   MMRF_TEST_CMD_CHECK_ET_PATH_DELAY_SEARCH_V2_EX    = 55,
   MMRF_TEST_CMD_GET_AFC_SETTING                     = 56,
   MMRF_TEST_CMD_SET_AFC_SETTING                     = 57,
   MMRF_TEST_CMD_GET_TAS_STATE_CFG                   = 58,
   MMRF_TEST_CMD_START_DPD_FAC_CAL_V3                = 59,
   MMRF_TEST_CMD_GET_DPD_FAC_CAL_ALL_V3              = 60,
   MMRF_TEST_CMD_SET_DPD_FAC_CAL_ALL_V3              = 61,
   MMRF_TEST_CMD_SET_DPD_FAC_CAL_PARTIAL_V3          = 62,
   MMRF_TEST_CMD_FORCE_TRAD_CAL_INTO_APT_MODE        = 63,
   MMRF_TEST_CMD_SET_DPD_PATH_DELAY_SEARCH_V3        = 64,
   MMRF_TEST_CMD_START_DPD_PATH_DELAY_SEARCH_V3      = 65,
   MMRF_TEST_CMD_GET_DPD_PATH_DELAY_SEARCH_V3        = 66,   
   MMRF_TEST_CMD_GET_AFC_SETTING_V2                  = 75,
   MMRF_TEST_CMD_SET_AFC_SETTING_V2                  = 76,
   MMRF_TEST_CMD_GET_SET_MIPI_CW                     = 87,
   MMRF_TEST_CMD_CALC_CHECKSUM_CAL                   = 100,
   MMRF_TEST_CMD_VERIFY_CHECKSUM                     = 101,

   /* --------------- please add new command prior to this line --------------- */
   MMRF_TEST_CMD_GP_TOOL_COMMAND_START,
   MMRF_TEST_CMD_END,
   MMRF_TEST_CMD_MAX                             = 0x7FFFFFFF

} MMRfTestCmdType;


/*******************************************************************************
 * Default Command Parameters
 ******************************************************************************/
typedef struct
{
   kal_uint8 void_param;

}MMRfTestCmd_NoParam;

typedef struct
{
   DEFAULT_CNF_PARAM

} MMRfTestCmd_DefaultCnfParam;


/*******************************************************************************
 * MMRF_TEST_CMD_CHECK_IF_FUNC_EXIST
 ******************************************************************************/
typedef struct
{
   MMRfTestCmdType  query_op_code;

} MMRfTestCmd_CheckIfFuncExist_ReqParam;

typedef MMRfTestCmd_CheckIfFuncExist_ReqParam MMRfTestCmd_CheckIfFuncExist_CnfParam;


/*******************************************************************************
 * MMRF_TEST_CMD_GET_RF_CAPABILITY
 ******************************************************************************/
typedef MMRfTestCmd_NoParam MMRfTestCmd_GetRfCapability_ReqParam;
typedef MMRfTestCmd_NoParam MMRfTestCmd_GetRfCapability_CnfParam;

/* the strict ordering MUST be kept */
typedef struct
{
   /*Struct should be 4 bytes alignment*/
   kal_uint32 rf_id;

}MMRfTestCapabilityItemSet;

/* DO NOT modify this structure */
typedef struct
{
   kal_uint32 is_capable  : 1;
   kal_uint32 is_mandatory: 1;
   kal_uint32 parameter   :30;

}MMRfTestCalibrationItem;

typedef struct
{
   kal_uint32 is_capable   : 1;
   kal_uint32 is_mandatory : 1;
   kal_uint32 freq_drift   : 16;
   kal_uint32 reserve      : 14;
}MMRfTest32kless;

typedef struct
{
   kal_uint32 is_capable   : 1;
   kal_uint32 is_mandatory : 1;
   kal_uint32 version      : 8;
   kal_uint32 reserve      : 22;
}MMRfTestAfcNvram;

typedef struct
{
   kal_uint32 is_capable   : 1;
   kal_uint32 is_mandatory : 1;
   kal_uint32 version      : 8;
   kal_uint32 t0           : 16;
   kal_uint32 reserve      : 6;
}MMRfTestCotmsCal;

typedef struct
{
   kal_uint32 is_capable  : 1;
   kal_uint32 is_mandatory: 1;
   kal_uint32 port_num    : 8;
   kal_uint32 reserve     : 22;

}MMRfTestMipiSetGetItem;

/* the strict ordering MUST be kept */
typedef struct
{
   /*Struct should be 4 bytes alignment*/
   MMRfTestCalibrationItem ratmap_cal_result_share_tadc;       // [0],  bitmap for Multi-RAT to share TADC calibration result
   MMRfTestCalibrationItem ratmap_cal_result_share_afc;        // [1],  bitmap for Multi-RAT to share AFC calibration result
   MMRfTestCalibrationItem ratmap_support_RfSelf_cal;          // [2],  bitmap for Multi-RAT to support Rf-Self cal.      (0|0|Lf|Lt|W|C|T|G)
   MMRfTestCalibrationItem ratmap_support_RfSelf_cal_v2;       // [3],  bitmap for Multi-RAT to support post Rf-Self cal. (0|0|Lf|Lt|W|C|T|G)
   MMRfTestCalibrationItem ratmap_support_dpd_cal;             // [4],  bitmap for Multi-RAT to support DPD cal.          (0|0|Lf|Lt|W|C|T|G)
   MMRfTestCalibrationItem ratmap_support_cim3_cal;            // [5],  bitmap for Multi-RAT to support CIM3 cal.         (0|0|Lf|Lt|W|C|T|G)
   MMRfTestCalibrationItem ratmap_support_et_cal;              // [6],  bitmap for Multi-RAT to support ET cal.           (0|0|Lf|Lt|W|C|T|G)
   MMRfTestCalibrationItem ratmap_support_TAS;                 // [7],  bitmap for Multi-RAT to support TAS               (0|0|Lf|Lt|W|C|T|G)
   MMRfTestCalibrationItem ratmap_support_WM;                  // [8],  bitmap for Multi-RAT to support WMID              (0|0|Lf|Lt|W|C|T|G)
   MMRfTestCalibrationItem ratmap_support_tool_usage;          // [9],  bitmap for Multi-RAT to support Tool usage        (0|0|Lf|Lt|W|C|T|G)
   MMRfTestCalibrationItem support_query_temp_info;            // [10], query temperature DAC and temperature info.
   MMRfTestCalibrationItem support_query_vpa_voltage_list;     // [11], query supported VPA voltage list of PMIC
   MMRfTestCalibrationItem support_query_RfSelf_test_analyzer; // [12], query to support Rf-Self test analyzer
   MMRfTestCalibrationItem support_et_cal_capability;          // [13], query ET Lab-K's MMRF_MAX_ET_NUM_ROUTE info; parameter=0 -> MMRF_MAX_ET_NUM_ROUTE=301, parameter=1 -> MMRF_MAX_ET_NUM_ROUTE=522
   MMRfTestCalibrationItem support_mmrf_afc_nvram;             // [14], query supported of MMRF AFC NVRAM file
   MMRfTestCalibrationItem ratmap_support_querying_tas_cfg;    // [15], query supported of reporting "TAS State Config
   MMRfTestCalibrationItem support_force_trad_cal_apt;         // [16], query to support traditional cal info command
   MMRfTestCalibrationItem ratmap_support_RfPostSelf_cal;      // [17], bitmap for Multi-RAT to support post Rf-Self cal. (0|0|Lf|Lt|W|C|T|G)
   MMRfTestCalibrationItem support_et_pa_labk_capability;      // [18], Indicate whether "reporting ET PA parameters labk capability" is supported or not
   MMRfTestCalibrationItem support_query_tms_data_status;      // [19], Indicates "querying TMS cal data status API" is supported or not
   MMRfTestCalibrationItem support_mmtst_record_for_cddc;      // [20], Indicates whether MMTST supports "add NVRAM record for CDDC" or not
   MMRfTestCalibrationItem support_set_apt_pa_setting;         // [21], Indicates whether "set PA settings for APT mode" is supported or not
   MMRfTestCalibrationItem support_32kless;                    // [22], Indicates support 32kless or not
   MMRfTestCalibrationItem xtal_info;                          // [23], Indicates x-tal type & live in PMIC or not
   MMRfTestCalibrationItem support_mm_cotms_setget;            // [24], query supported mm tms set get mechanism
   MMRfTestCalibrationItem support_mm_cotms_cal;               // [25], query supported mm tms calibration mechanism
   MMRfTestCalibrationItem support_mipi_cw_setget;             // [26], query supported mipi cw set get and return mipi port number for UI expression
   MMRfTestCalibrationItem support_mm_cmr_info;                // [27], query supported mm cmr info   
   MMRfTestCalibrationItem support_RfSelf_cal_v7;              // [28], query supported RfSelf cal v7
   MMRfTestCalibrationItem support_checksum_verify;            // [29], query supported cal data checksum verify or not
   MMRfTestCalibrationItem ratmap_support_querying_utas_cfg;   // [30], query supported of reporting "UTAS State Config
   MMRfTestCalibrationItem en_used_cc_num_info;                // [31], indicates LTE & NR used TX & RX CC num
   MMRfTestCalibrationItem support_check_mipi_component;       // [32], Indicates "check MIPI component exist" is supported or not

}MMRfTestCalibrationItemSet;

/* the strict ordering MUST be kept calibrationItems & capabilityItems are variable part*/
typedef struct
{
   /*Struct should be 4 bytes alignment*/
   kal_uint32 mmrf_capability_verno;                       // version number of MMRF capability field
   kal_uint32 capability_item_offset;                      // capability item offset (byte unit) from structure begin
   kal_uint32 calibration_item_offset;                     // calibration item offset (byte unit) from structure begin
   MMRfTestCapabilityItemSet  capabilityItems;
   MMRfTestCalibrationItemSet calibrationItems;

}MMRfTestResultRfCapability;

/*******************************************************************************
 * Old DPD command (defined as MMRfTestCmd_NoParam to avoid build error)
 ******************************************************************************/
typedef MMRfTestCmd_NoParam MMRfTestCmd_GetDpdFacResult_ReqParam;
typedef MMRfTestCmd_NoParam MMRfTestCmd_SetDpdFacResult_ReqParam;
typedef MMRfTestCmd_NoParam MMRfTestCmd_GetDpdFacResult_CnfParam;
typedef MMRfTestCmd_NoParam MMRfTestCmd_SetDpdFacResult_CnfParam;
typedef MMRfTestCmd_NoParam MMRfTestCmd_StartDpdFacCal_CnfParam;
typedef MMRfTestCmd_NoParam MMRfTestCmd_StartDpdFacCal_ReqParam;

/*******************************************************************************
 * Old CIM3 command (defined as MMRfTestCmd_NoParam to avoid build error)
 ******************************************************************************/
typedef MMRfTestCmd_NoParam MMRfTestCmd_StartCim3FacCal_ReqParam;
typedef MMRfTestCmd_NoParam MMRfTestCmd_StartCim3FacCal_CnfParam;
typedef MMRfTestCmd_NoParam MMRfTestCmd_GetCim3FacResult_ReqParam;
typedef MMRfTestCmd_NoParam MMRfTestCmd_SetCim3FacResult_ReqParam;
typedef MMRfTestCmd_NoParam MMRfTestCmd_GetCim3FacResult_CnfParam;
typedef MMRfTestCmd_NoParam MMRfTestCmd_SetCim3FacResult_CnfParam;
typedef MMRfTestCmd_NoParam MMRfTestCmd_Cim3FacEnDis_ReqParam;
typedef MMRfTestCmd_NoParam MMRfTestCmd_Cim3FacEnDis_CnfParam;

/*******************************************************************************
 * DPD Start Command (MMRF_TEST_CMD_START_DPD_PA_AND_DPD_FAC_CAL)
 ******************************************************************************/
/* Request local */
typedef union
{
   ERfTestCmd_StartDpd_ReqInfo lte_dpd_req;

   #if !defined(L1_SIM) && !defined(__EL1D_COSIM__)
   URfTestCmd_StartDpd_ReqInfo wcdma_dpd_req;
   #endif

   #ifndef L1_SIM
   CRfTestCmd_StartDpd_ReqInfo c2k_dpd_req;
   #endif

}MMRfTestCmd_StartMmDpd_ReqInfo;

typedef struct
{
   /* bitmap:(0|0|Lf|Lt|W|C|T|G) */
   kal_uint16                     rat_idx;
   MMRfTestCmd_StartMmDpd_ReqInfo mm_dpd_info;

}MMRfTestCmd_StartDpdFacCalV3_ReqParam;

/* Confirm local */
typedef union
{
   ERfTestCmd_StartDpd_CnfInfo lte_dpd_status; /* ERfTest_StartDpdPaAndDpdFacCal_Status */

   #if !defined(L1_SIM) && !defined(__EL1D_COSIM__)
   URfTestCmd_StartDpd_CnfInfo wcdma_dpd_status;
   #endif

   #ifndef L1_SIM
   CRfTestCmd_StartDpd_CnfInfo c2k_dpd_status;
   #endif

}MMRfTestCmd_StartMmDpd_CnfInfo;

typedef struct
{
   kal_uint16                     rat_idx;
   MMRfTestCmd_StartMmDpd_CnfInfo mm_dpd_cnf;

}MMRfTestCmd_StartDpdFacCalV3_CnfParam;

/* There is only one function argument in xL1sim, so we need to merge the command and report into one structure */
typedef struct
{
   /* Request peer buffer pointer */
   ilm_struct                            *p_ilm;

   /* Request local buffer pointer */
   MMRfTestCmd_StartDpdFacCalV3_ReqParam *p_req_local;

   /* Confirm local buffer pointer */
   MMRfTestCmd_StartDpdFacCalV3_CnfParam *p_cnf_local;

}MMRfTest_StartDpdFacCalMix;

/*******************************************************************************
 * DPD Get/Set Command (MMRF_TEST_CMD_GET_DPD_PA_AND_DPD_FAC_CAL_ALL/MMRF_TEST_CMD_SET_DPD_PA_AND_DPD_FAC_CAL_ALL)
 ******************************************************************************/
/* Set all request local */
typedef union
{
   ERfTestCmd_SetDpdAll_ReqInfo lte_dpd_req;

   #if !defined(L1_SIM) && !defined(__EL1D_COSIM__)
      URfTestCmd_SetDpdAll_ReqInfo wcdma_dpd_req;
   #endif

   #ifndef L1_SIM
   CRfTestCmd_SetDpdAll_ReqInfo c2k_dpd_req;
   #endif

}MMRfTestCmd_SetMmDpdAll_ReqInfo;

typedef struct
{
   /* bitmap:(0|0|Lf|Lt|W|C|T|G) */
   kal_uint16                      rat_idx;
   MMRfTestCmd_SetMmDpdAll_ReqInfo mm_dpd_info;

}MMRfTestCmd_SetDpdFacCalAllV3_ReqParam;

/* Set all confirm local */
typedef union
{
   ERfTestCmd_SetDpdAll_CnfInfo lte_dpd_cnf;

   #if !defined(L1_SIM) && !defined(__EL1D_COSIM__)
      URfTestCmd_SetDpdAll_CnfInfo wcdma_dpd_cnf;
   #endif

   #ifndef L1_SIM
   CRfTestCmd_SetDpdAll_CnfInfo c2k_dpd_cnf;
   #endif

}MMRfTestCmd_SetMmDpdAll_CnfInfo;

typedef struct
{
   /* bitmap:(0|0|Lf|Lt|W|C|T|G) */
   kal_uint16                      rat_idx;
   MMRfTestCmd_SetMmDpdAll_CnfInfo mm_dpd_cnf;

}MMRfTestCmd_SetDpdFacCalAllV3_CnfParam;

/* Set partial request local */
typedef union
{
   ERfTestCmd_SetDpdPartial_ReqInfo lte_dpd_req;

   #if !defined(L1_SIM) && !defined(__EL1D_COSIM__)
      URfTestCmd_SetDpdPartial_ReqInfo wcdma_dpd_req;
   #endif

   #ifndef L1_SIM
   CRfTestCmd_SetDpdAll_ReqInfo c2k_dpd_req;
   #endif

}MMRfTestCmd_SetMmDpdPartial_ReqInfo;

typedef struct
{
   /* bitmap:(0|0|Lf|Lt|W|C|T|G) */
   kal_uint16                          rat_idx;
   MMRfTestCmd_SetMmDpdPartial_ReqInfo mm_dpd_info;

}MMRfTestCmd_SetDpdFacCalPartialV3_ReqParam;

/* Set partial confirm local */
typedef union
{
   ERfTestCmd_SetDpdPartial_CnfInfo lte_dpd_cnf;

   #if !defined(L1_SIM) && !defined(__EL1D_COSIM__)
      URfTestCmd_SetDpdPartial_CnfInfo wcdma_dpd_cnf;
   #endif

   #ifndef L1_SIM
   CRfTestCmd_SetDpdAll_CnfInfo c2k_dpd_cnf;
   #endif

}MMRfTestCmd_SetMmDpdPartial_CnfInfo;

typedef struct
{
   /* bitmap:(0|0|Lf|Lt|W|C|T|G) */
   kal_uint16                          rat_idx;
   MMRfTestCmd_SetMmDpdPartial_CnfInfo mm_dpd_cnf;

}MMRfTestCmd_SetDpdFacCalPartialV3_CnfParam;

/* There is only one function argument in xL1sim, so we need to merge the command and report into one structure */
typedef struct
{
   kal_bool                                    is_set_all;

   /* Request peer buffer pointer */
   ilm_struct                                 *p_ilm;

   /* Request local buffer for MMRF_TEST_CMD_SET_DPD_PA_AND_DPD_FAC_CAL_ALL and MMRF_TEST_CMD_SET_DPD_PA_AND_DPD_FAC_CAL_PARTIAL */
   MMRfTestCmd_SetDpdFacCalAllV3_ReqParam     *p_req_local_all;
   MMRfTestCmd_SetDpdFacCalPartialV3_ReqParam *p_req_local_par;

   /* Confirm local buffer for MMRF_TEST_CMD_SET_DPD_PA_AND_DPD_FAC_CAL_ALL and MMRF_TEST_CMD_SET_DPD_PA_AND_DPD_FAC_CAL_PARTIAL */
   MMRfTestCmd_SetDpdFacCalAllV3_CnfParam     *p_cnf_local_all;
   MMRfTestCmd_SetDpdFacCalPartialV3_CnfParam *p_cnf_local_par;

}MMRfTest_SetDpdFacCalMix;

/* Get all request local */
typedef union
{
   ERfTestCmd_GetDpdAll_ReqInfo lte_dpd_req;

   #if !defined(L1_SIM) && !defined(__EL1D_COSIM__)
      URfTestCmd_GetDpdAll_ReqInfo wcdma_dpd_req;
   #endif

   #ifndef L1_SIM
   CRfTestCmd_GetDpdAll_ReqInfo c2k_dpd_req;
   #endif

}MMRfTestCmd_GetMmDpdAll_ReqInfo;

typedef struct
{
   /* bitmap:(0|0|Lf|Lt|W|C|T|G) */
   kal_uint16                      rat_idx;
   MMRfTestCmd_GetMmDpdAll_ReqInfo mm_dpd_req;

}MMRfTestCmd_GetDpdFacCalAllV3_ReqParam;

/* Get all confirm local */
typedef union
{
   ERfTestCmd_GetDpdAll_CnfInfo lte_dpd_cnf;

   #if !defined(L1_SIM) && !defined(__EL1D_COSIM__)
      URfTestCmd_GetDpdAll_CnfInfo wcdma_dpd_cnf;
   #endif

   #ifndef L1_SIM
   CRfTestCmd_GetDpdAll_CnfInfo c2k_dpd_cnf;
   #endif

}MMRfTestCmd_GetMmDpdAll_CnfInfo;

typedef struct
{
   /* bitmap:(0|0|Lf|Lt|W|C|T|G) */
   kal_uint16                      rat_idx;
   MMRfTestCmd_GetMmDpdAll_CnfInfo mm_dpd_cnf;

}MMRfTestCmd_GetDpdFacCalAllV3_CnfParam;

/* There is only one function argument in xL1sim, so we need to merge the command and report into one structure */
typedef struct
{
   /* Confirm peer buffer pointer */
   ilm_struct                             *p_cnf_ilm;

   /* Request local buffer pointer */
   MMRfTestCmd_GetDpdFacCalAllV3_ReqParam *p_req_local;

   /* Confirm local buffer pointer */
   MMRfTestCmd_GetDpdFacCalAllV3_CnfParam *p_cnf_local;

}MMRfTest_GetDpdFacCalMix;

typedef struct
{
   void (*start_func)( MMRfTest_StartDpdFacCalMix *p_start_mix );
   void (*get_func)( MMRfTest_GetDpdFacCalMix *p_get_mix );
   void (*set_func)( MMRfTest_SetDpdFacCalMix *p_set_mix );

}MMRfTest_DpdPaAndDpd_FuncPtr;

/*******************************************************************************
 * DPD En/Dis Command (MMRF_TEST_CMD_DPD_FAC_EN_DIS)
 ******************************************************************************/
typedef enum
{
   MMRF_TEST_DPD_DIS = 0,
   MMRF_TEST_DPD_EN  = 1

}MMRfTestDPDFacEnDisType; /* The enum for dpd_switch */

typedef struct
{
   /* bitmap:(0|0|Lf|Lt|W|C|T|G) */
   kal_uint16  rat_idx;

   /* The value will be one of the element in MMRfTestDPDFacEnDisType */
   kal_uint16  dpd_switch;

} MMRfTestCmd_DpdFacEnDis_ReqParam;

typedef struct
{
   /* The value will be one of the element in MMRfTestDPDFacStatusType */
   kal_uint16  dpd_switch_status;

   /* The value will be one of the element in MMRfTestDPDFacErrType */
   kal_uint16  dpd_switch_error_code;

   /* Return for tool debug */
   MMRfTestCmd_DpdFacEnDis_ReqParam  dpd_switch_cmd;

} MMRfTestCmd_DpdFacEnDis_CnfParam;

/*******************************************************************************
 * 93 DPD Delay Search Set Command (MMRF_TEST_CMD_SET_DPD_PATH_DELAY_SEARCH_V3)
 ******************************************************************************/

typedef union
{
   ERfTestCmd_SetDpdPathDelaySearchV3_ReqInfo lte_dpd_delay_req;
   #if !defined(L1_SIM) && !defined(__EL1D_COSIM__)
   URfTestCmd_SetDpdPathDelaySearchV3_ReqInfo wcdma_dpd_delay_req;
   #endif

   #ifndef L1_SIM
   CRfTestCmd_SetDpdPathDelaySearch_ReqInfo c2k_dpd_delay_req;
   #endif

}MMRfTestCmd_SetMmDpdPathDelaySearchV3_ReqInfo;

typedef struct
{
   /* bitmap:(0|0|Lf|Lt|W|C|T|G) */
   kal_uint16                                  rat_idx;
   MMRfTestCmd_SetMmDpdPathDelaySearchV3_ReqInfo mm_dpd_delay_req_info;

}MMRfTestCmd_SetDpdPathDelaySearchV3_ReqParam;

/* GP tool only support union in struct */
typedef struct
{
   union
   {
      ERfTestCmd_SetDpdPathDelaySearchV3_ReqPdu lte_req_pdu;
      #if !defined(L1_SIM) && !defined(__EL1D_COSIM__)
      URfTestCmd_SetDpdPathDelaySearchV3_ReqPdu wcdma_req_pdu;
      #endif

      #ifndef L1_SIM
      CRfTestCmd_SetDpdPathDelaySearch_ReqPdu c2k_req_pdu;
      #endif
      /* Add other RAT pdu here */

   }mm_dpd_delay_set_req_pdu;

}MMRfTestCmd_SetDpdPathDelaySearchV3_ReqPdu;

typedef union
{
   ERfTestCmd_SetDpdPathDelaySearchV3_CnfInfo lte_dpd_delay_cnf;
   #if !defined(L1_SIM) && !defined(__EL1D_COSIM__)
   URfTestCmd_SetDpdPathDelaySearchV3_CnfInfo wcdma_dpd_delay_cnf;
   #endif

   #ifndef L1_SIM
   CRfTestCmd_SetDpdPathDelaySearch_CnfInfo c2k_dpd_delay_cnf;
   #endif

}MMRfTestCmd_SetMmDpdPathDelaySearchV3_CnfInfo;

typedef struct
{
   /* bitmap:(0|0|Lf|Lt|W|C|T|G) */
   kal_uint16                                  rat_idx;
   MMRfTestCmd_SetMmDpdPathDelaySearchV3_CnfInfo mm_dpd_delay_cnf_info;

}MMRfTestCmd_SetDpdPathDelaySearchV3_CnfParam;

/* There is only one function argument in xL1sim, so we need to merge the command and report into one structure */
typedef struct
{
   /* Request peer buffer pointer */
   ilm_struct                                     *p_ilm;

   /* Request local buffer */
   MMRfTestCmd_SetDpdPathDelaySearchV3_ReqParam   *p_req_local;

   /* Confirm local buffer */
   MMRfTestCmd_SetDpdPathDelaySearchV3_CnfParam   *p_cnf_local;

}MMRfTest_SetDpdPathDelaySearchMix;

/**********************************************************************************
 * 93 DPD Delay Search Start Command (MMRF_TEST_CMD_START_DPD_PATH_DELAY_SEARCH_V3)
 **********************************************************************************/
typedef union
{
   ERfTestCmd_StartDpdPathDelaySearchV3_ReqInfo lte_dpd_req;
   #if !defined(L1_SIM) && !defined(__EL1D_COSIM__)
   URfTestCmd_StartDpdPathDelaySearchV3_ReqInfo wcdma_dpd_req;
   #endif

   #ifndef L1_SIM
   CRfTestCmd_StartDpdPathDelaySearch_ReqInfo c2k_dpd_req;
   #endif

}MMRfTestCmd_StartMmDpdPathDelaySearchV3_ReqInfo;

typedef struct
{
   /* bitmap:(0|0|Lf|Lt|W|C|T|G) */
   kal_uint16                                    rat_idx;
   MMRfTestCmd_StartMmDpdPathDelaySearchV3_ReqInfo mm_dpd_delay_req_info;

}MMRfTestCmd_StartDpdPathDelaySearchV3_ReqParam;

/* Confirm */
typedef union
{
   kal_uint16 lte_dpd_delay_status;   /* ERfTest_StartDpdPathDelaySearchV3_Status */
   kal_uint16 wcdma_dpd_delay_status; /* URfTest_StartWcdmaDpdPathDelaySearchV3_Status */
   kal_uint16 c2k_dpd_delay_status;   /* CRfTest_StartWcdmaDpdPathDelaySearch_Status */
}MMRfTestCmd_StartMmDpdPathDelaySearchV3_CnfInfo;

typedef struct
{
   kal_uint16                                    rat_idx;
   MMRfTestCmd_StartMmDpdPathDelaySearchV3_CnfInfo mm_dpd_delay_cnf_info;

}MMRfTestCmd_StartDpdPathDelaySearchV3_CnfParam;

/* There is only one function argument in xL1sim, so we need to merge the command and report into one structure */
typedef struct
{
   /* Request peer buffer pointer */
   ilm_struct                                     *p_ilm;

   /* Request local buffer pointer */
   MMRfTestCmd_StartDpdPathDelaySearchV3_ReqParam *p_req_local;

   /* Confirm local buffer pointer */
   MMRfTestCmd_StartDpdPathDelaySearchV3_CnfParam *p_cnf_local;

}MMRfTest_StartDpdPathDelaySearchMix;

/**********************************************************************************
 * 93 DPD Delay Search Get Command (MMRF_TEST_CMD_GET_DPD_PATH_DELAY_SEARCH_V3)
 **********************************************************************************/
typedef union
{
   ERfTestCmd_GetDpdPathDelaySearchV3_ReqInfo lte_dpd_delay_req;
   #if !defined(L1_SIM) && !defined(__EL1D_COSIM__)
   URfTestCmd_GetDpdPathDelaySearchV3_ReqInfo wcdma_dpd_delay_req;
   #endif

   #ifndef L1_SIM
   CRfTestCmd_GetDpdPathDelaySearch_ReqInfo c2k_dpd_delay_req;
   #endif

}MMRfTestCmd_GetMmDpdPathDelaySearchV3_ReqInfo;

typedef struct
{
   /* bitmap:(0|0|Lf|Lt|W|C|T|G) */
   kal_uint16                                  rat_idx;
   MMRfTestCmd_GetMmDpdPathDelaySearchV3_ReqInfo mm_dpd_delay_req_info;

}MMRfTestCmd_GetDpdPathDelaySearchV3_ReqParam;

/* Confirm */
typedef union
{
   ERfTestCmd_GetDpdPathDelaySearchV3_CnfInfo lte_dpd_delay_cnf;
   #if !defined(L1_SIM) && !defined(__EL1D_COSIM__)
   URfTestCmd_GetDpdPathDelaySearchV3_CnfInfo wcdma_dpd_delay_cnf;
   #endif

   #ifndef L1_SIM
   CRfTestCmd_GetDpdPathDelaySearch_CnfInfo c2k_dpd_delay_cnf;
   #endif

}MMRfTestCmd_GetMmDpdPathDelaySearchV3_CnfInfo;

typedef struct
{
   /* bitmap:(0|0|Lf|Lt|W|C|T|G) */
   kal_uint16                                  rat_idx;
   MMRfTestCmd_GetMmDpdPathDelaySearchV3_CnfInfo mm_dpd_delay_cnf_info;

}MMRfTestCmd_GetDpdPathDelaySearchV3_CnfParam;

/* GP tool only support union in struct */
typedef struct
{
   union
   {
      ERfTestCmd_GetDpdPathDelaySearchV3_CnfPdu lte_cnf_pdu;
      #if !defined(L1_SIM) && !defined(__EL1D_COSIM__)
      URfTestCmd_GetDpdPathDelaySearchV3_CnfPdu wcdma_cnf_pdu;
      #endif
      /* Add other RAT pdu here */

      #ifndef L1_SIM
      CRfTestCmd_GetDpdPathDelaySearch_CnfPdu c2k_cnf_pdu;
      #endif
   }mm_dpd_delay_get_cnf_pdu;

}MMRfTestCmd_GetDpdPathDelaySearch_CnfPdu;

/* There is only one function argument in xL1sim, so we need to merge the command and report into one structure */
typedef struct
{
   /* Request peer buffer pointer */
   ilm_struct                                     *p_ilm;

   /* Request local buffer */
   MMRfTestCmd_GetDpdPathDelaySearchV3_ReqParam   *p_req_local;

   /* Confirm local buffer */
   MMRfTestCmd_GetDpdPathDelaySearchV3_CnfParam   *p_cnf_local;

}MMRfTest_GetDpdPathDelaySearchMix;

typedef struct
{
   void (*start_func)( MMRfTest_StartDpdPathDelaySearchMix *p_start_mix );
   void (*get_func)( MMRfTest_GetDpdPathDelaySearchMix *p_get_mix );
   void (*set_func)( MMRfTest_SetDpdPathDelaySearchMix *p_set_mix );

}MMRfTest_DpdPathDelaySearch_FuncPtr;

/*******************************************************************************
 * Force OP mode for traditional calibration (MMRF_TEST_CMD_FORCE_TRAD_CAL_INTO_APT_MODE)
 ******************************************************************************/
/* Request local */
typedef union
{
   /* To avoid xl1sim build error */
   kal_uint32 lte_dummy;

   #if !defined(L1_SIM) && !defined(__EL1D_COSIM__)
      URfTestCmd_TradCal_ReqInfo wcdma_trad_cal;
   #endif

}MMRfTestCmd_TradCal_ReqInfo;

typedef struct
{
   /* bitmap:(0|0|Lf|Lt|W|C|T|G) */
   kal_uint16                  rat_idx;
   MMRfTestCmd_TradCal_ReqInfo trad_cal_info;

}MMRfTestCmd_ForceTradCalIntoAptMode_ReqParam;

/* Confirm local */
typedef union
{
   /* To avoid xl1sim build error */
   kal_uint32 lte_dummy;

   #if !defined(L1_SIM) && !defined(__EL1D_COSIM__)
      URfTestCmd_TradCal_CnfInfo wcdma_trad_cal;
   #endif

}MMRfTestCmd_TradCal_CnfInfo;

typedef struct
{
   /* bitmap:(0|0|Lf|Lt|W|C|T|G) */
   kal_uint16                  rat_idx;
   MMRfTestCmd_TradCal_CnfInfo trad_cal_info;

}MMRfTestCmd_ForceTradCalIntoAptMode_CnfParam;

/* There is only one function argument in xL1sim, so we need to merge the command and report into one structure */
typedef struct
{
   /* Request local buffer pointer */
   MMRfTestCmd_ForceTradCalIntoAptMode_ReqParam *p_req_local;

   /* Confirm local buffer pointer */
   MMRfTestCmd_ForceTradCalIntoAptMode_CnfParam *p_cnf_local;

}MMRfTest_ForceTradCalIntoAptModeMix;

typedef struct
{
   void (*force_mode_handler)( MMRfTest_ForceTradCalIntoAptModeMix *p_tool_data_mix );

}MMRfTest_ForceTradCalIntoAptMode_FuncPtr;

/*******************************************************************************
 * ET CAL STRAT Command
 ******************************************************************************/
   





/* There is only one function argument in xL1sim, so we need to merge the command and report into one structure */
    /* Request peer buffer pointer */

   /* Request local buffer pointer */

   /* Confirm local buffer pointer */   
   

/*******************************************************************************
 * ET CAL SET Command
 ******************************************************************************/
/*Tool Set Request Structure*/
   /* bitmap:(0|0|Lf|Lt|W|C|T|G) */






/* There is only one function argument in xL1sim, so we need to merge the command and report into one structure */

   /* Request peer buffer pointer */

   /* Request local buffer pointer */

   /* Confirm local buffer pointer */   	
   

/*******************************************************************************
 * RF self-K Start Command (MMRF_TEST_CMD_START_RF_SELF_CAL)
 ******************************************************************************/
// Payload of local parameter within request ILM message  (FT task --> MMRF task)
typedef enum
{
   MMRF_RAT_GSM      = 0x01,
   MMRF_RAT_TDSCDMA  = 0x02,
   MMRF_RAT_CDMA2000 = 0x04,
   MMRF_RAT_WCDMA    = 0x08,
   MMRF_RAT_TDDLTE   = 0x10,
   MMRF_RAT_FDDLTE   = 0x20,
   MMRF_RAT_LTE      = 0x30,
   MMRF_RAT_INVALID  = 0x7FFF,

}MMRfTestCmd_RatIndicator;

typedef struct
{
   MMRfTestCmd_RatIndicator   rat_idx;       // bitmap: (0|0|Lf|Lt|W|C|T|G)
   kal_uint16                 do_self_k;     // 0: get total LID num, bypass cal; 1: get total LID num and do cal

}MMRfTestCmd_StartRfSelfCal_ReqParam;

// Payload of local parameter within confirm ILM message  (MMRF task --> FT task)
typedef struct
{
   MMRfTestCmd_RatIndicator   rat_idx;       // bitmap: (0|0|Lf|Lt|W|C|T|G)
   kal_uint16                 lid_total_num;
   kal_uint16                 is_error_occur;

}MMRfTestCmd_StartRfSelfCal_CnfParam;

typedef struct
{
   void        (*calInvoked)( void );
   kal_uint16  (*getCalTotalLidNum)( void );
   kal_uint16  (*getCalResultSize)( kal_uint16 lid_index );
   kal_uint16  (*getCalResult)( kal_uint16 lid_index, kal_uint16 lid_size, kal_uint8 *dst );
   kal_uint16  (*setCalResult)( kal_uint16 lid_index, kal_uint16 lid_size, kal_uint8 *src );
   kal_uint16  (*getCalString)( kal_uint16 lid_index, kal_char *string_dst );

}MMRfTestRfSelfCalFuncPtr;


/*******************************************************************************
 * RF Self-K Start Command V2 (MMRF_TEST_CMD_START_RF_SELF_CAL_V2)
 ******************************************************************************/
typedef enum
{
   MMRF_SFK_1ST_STAGE     = 0,
   MMRF_SFK_2ND_STAGE     = 1,
   MMRF_SFK_INVALID_STAGE = 0x7FFF,

}MMRfTestCmd_RfSelfCalStage;

typedef enum
{
   MMRF_SFK_STAGE_CONFIG_FAIL    = 0,
   MMRF_SFK_STAGE_CONFIG_OK      = 1,
   MMRF_SFK_STAGE_CONFIG_INVALID = 0x7FFF,

}MMRfTestCmd_RfSelfCalSetStageStatus;

// Payload of local parameter within request ILM message  (FT task --> MMRF task)
typedef struct
{
   MMRfTestCmd_RatIndicator   rat_idx;        // bitmap: (0|0|Lf|Lt|W|C|T|G)
   MMRfTestCmd_RfSelfCalStage self_k_stage;   // 0: pre-self-K, 1: post-self-K
   kal_uint16                 do_self_k;      // 0: get total LID num, bypass cal; 1: get total LID num and do cal

}MMRfTestCmd_StartRfSelfCalV2_ReqParam;

// Payload of local parameter within confirm ILM message  (MMRF task --> FT task)
typedef struct
{
   MMRfTestCmd_RatIndicator            rat_idx;        // bitmap: (0|0|Lf|Lt|W|C|T|G)
   MMRfTestCmd_RfSelfCalStage          self_k_stage;   // 0: pre-self-K, 1: post-self-K
   MMRfTestCmd_RfSelfCalSetStageStatus stage_set_sts;  // 0: stage not support, 1: process OK
   kal_uint16                          total_item_cnt;

}MMRfTestCmd_StartRfSelfCalV2_CnfParam;

// Payload of peer buffer within confirm ILM message  (MMRF task --> FT task)
typedef struct
{
   kal_uint16 item_index[MMRF_MAX_RF_SELF_K_LID_COUNT_V2];
   kal_uint16 item_size[MMRF_MAX_RF_SELF_K_LID_COUNT_V2];

}MMRfTestCmd_StartRfSelfCalV2_CnfPdu;

typedef struct
{
   void        (*calInvoked)( void );
   kal_uint16  (*getCalTotalLidNum)( void );
   kal_uint16  (*getCalResultSize)( kal_uint16 lid_index );
   kal_uint16  (*getCalResult)( kal_uint16 lid_index, kal_uint16 lid_size, kal_uint8 *dst );
   kal_uint16  (*setCalResult)( kal_uint16 lid_index, kal_uint16 lid_size, kal_uint8 *src );
   kal_uint16  (*getCalString)( kal_uint16 lid_index, kal_char *string_dst );

}MMRfTestRfSelfCalFuncPtrV2;


/*******************************************************************************
 * RF self-K Get/Set Command (MMRF_TEST_CMD_GET/SET_RF_SELF_CAL_RESULT)
 ******************************************************************************/
// Payload of local parameter within request ILM message  (FT task --> MMRF task)
typedef struct
{
   MMRfTestCmd_RatIndicator   rat_idx;       // bitmap: (0|0|Lf|Lt|W|C|T|G)
   kal_uint16                 lid_index;

}MMRfTestCmd_GetRfSelfCalResult_ReqParam;

typedef MMRfTestCmd_GetRfSelfCalResult_ReqParam MMRfTestCmd_GetRfSelfCalResultLen_ReqParam;

typedef struct
{
   MMRfTestCmd_RatIndicator   rat_idx;       // bitmap: (0|0|Lf|Lt|W|C|T|G)
   kal_uint16                 lid_index;
   kal_uint16                 lid_size;

}MMRfTestCmd_SetRfSelfCalResult_ReqParam;

// Payload of local parameter within confirm ILM message  (MMRF task --> FT task)
typedef struct
{
   MMRfTestCmd_RatIndicator   rat_idx;       // bitmap: (0|0|Lf|Lt|W|C|T|G)
   kal_uint16                 lid_index;
   kal_uint16                 lid_size;

}MMRfTestCmd_GetRfSelfCalResult_CnfParam;

typedef MMRfTestCmd_GetRfSelfCalResult_CnfParam MMRfTestCmd_GetRfSelfCalResultLen_CnfParam;

typedef struct
{
   MMRfTestCmd_RatIndicator   rat_idx;       // bitmap: (0|0|Lf|Lt|W|C|T|G)
   kal_uint16                 lid_index;

}MMRfTestCmd_SetRfSelfCalResult_CnfParam;


/*******************************************************************************
 * RF self-K Get/Set Command V2 (MMRF_TEST_CMD_GET/SET_RF_SELF_CAL_RESULT_V2)
 ******************************************************************************/
// Payload of local parameter within request ILM message  (FT task --> MMRF task)
typedef struct
{
   MMRfTestCmd_RatIndicator   rat_idx;        // bitmap: (0|0|Lf|Lt|W|C|T|G)
   MMRfTestCmd_RfSelfCalStage self_k_stage;   // 0: pre-self-K, 1: post-self-K
   kal_uint16                 total_item_cnt; // total count should be less than 16
   kal_uint16                 item_index[MMRF_MAX_RF_SELF_K_LID_COUNT_PDU]; // total size should be less than 60kB

}MMRfTestCmd_GetRfSelfCalResultV2_ReqParam;

typedef struct
{
   MMRfTestCmd_RatIndicator   rat_idx;        // bitmap: (0|0|Lf|Lt|W|C|T|G)
   MMRfTestCmd_RfSelfCalStage self_k_stage;   // 0: pre-self-K, 1: post-self-K
   kal_uint16                 total_item_cnt; // total count should be less than 16
   kal_uint16                 item_index[MMRF_MAX_RF_SELF_K_LID_COUNT_PDU]; // list of item index
   kal_uint16                 item_size [MMRF_MAX_RF_SELF_K_LID_COUNT_PDU]; // size of item
   kal_uint16                 mem_offset[MMRF_MAX_RF_SELF_K_LID_COUNT_PDU]; // memory offset in peer buffer for each item

}MMRfTestCmd_SetRfSelfCalResultV2_ReqParam;

// Payload of local parameter within confirm ILM message  (MMRF task --> FT task)
typedef struct
{
   MMRfTestCmd_RatIndicator            rat_idx;        // bitmap: (0|0|Lf|Lt|W|C|T|G)
   MMRfTestCmd_RfSelfCalStage          self_k_stage;   // 0: pre-self-K, 1: post-self-K
   MMRfTestCmd_RfSelfCalSetStageStatus stage_set_sts;  // 0: stage not support, 1: process OK
   kal_uint16                          total_item_cnt; // total count should be less than 16
   kal_uint16                          item_index[MMRF_MAX_RF_SELF_K_LID_COUNT_PDU]; // list of item index
   kal_uint16                          item_size [MMRF_MAX_RF_SELF_K_LID_COUNT_PDU]; // size of item
   kal_uint16                          mem_offset[MMRF_MAX_RF_SELF_K_LID_COUNT_PDU]; // memory offset in peer buffer for each item

}MMRfTestCmd_GetRfSelfCalResultV2_CnfParam;

typedef struct
{
   MMRfTestCmd_RatIndicator            rat_idx;        // bitmap: (0|0|Lf|Lt|W|C|T|G)
   MMRfTestCmd_RfSelfCalStage          self_k_stage;   // 0: pre-self-K, 1: post-self-K
   MMRfTestCmd_RfSelfCalSetStageStatus stage_set_sts;  // 0: stage not support, 1: process OK
   kal_uint16                          total_item_cnt; // total count should be less than 16
   kal_uint16                          item_index[MMRF_MAX_RF_SELF_K_LID_COUNT_PDU]; // total size should be less than 60kB

}MMRfTestCmd_SetRfSelfCalResultV2_CnfParam;

// Payload of peer buffer within confirm ILM message (MMRF task --> FT task) (for GP tool only)
typedef struct
{
   kal_uint32  raw_data[MMRF_MAX_RF_SELF_K_PDU_SIZE>>2];  // total size should be less than 60kB

}MMRfTestCmd_GetRfSelfCalResultV2_CnfPdu;

typedef struct
{
   kal_uint32  raw_data[MMRF_MAX_RF_SELF_K_PDU_SIZE>>2];  // total size should be less than 60kB

}MMRfTestCmd_SetRfSelfCalResultV2_ReqPdu;


/*******************************************************************************
 * RF self-K Get String Command (MMRF_TEST_CMD_GET_RF_SELF_CAL_RESULT_KEY)
 ******************************************************************************/
// Payload of local parameter within request ILM message  (FT task --> MMRF task)
typedef struct
{
   MMRfTestCmd_RatIndicator   rat_idx;        // bitmap: (0|0|Lf|Lt|W|C|T|G)

}MMRfTestCmd_GetRfSelfCalResultKey_ReqParam;

// Payload of local parameter within confirm ILM message  (MMRF task --> FT task)
typedef struct
{
   MMRfTestCmd_RatIndicator   rat_idx;        // bitmap: (0|0|Lf|Lt|W|C|T|G)
   kal_uint16                 lid_total_num;

}MMRfTestCmd_GetRfSelfCalResultKey_CnfParam;

// Payload of peer buffer within confirm ILM message  (MMRF task --> FT task)
typedef struct
{
   kal_char    key[MMRF_MAX_RF_SELF_K_LID_COUNT][MMRF_MAX_RF_SELF_K_STRING_LENGTH];

}MMRfTestCmd_GetRfSelfCalResultKey_CnfPdu;


/*******************************************************************************
 * RF self-K Get String Command V2 (MMRF_TEST_CMD_GET_RF_SELF_CAL_RESULT_KEY_V2)
 ******************************************************************************/
// Payload of local parameter within request ILM message  (FT task --> MMRF task)
typedef struct
{
   MMRfTestCmd_RatIndicator   rat_idx;        // bitmap: (0|0|Lf|Lt|W|C|T|G)
   MMRfTestCmd_RfSelfCalStage self_k_stage;   // 0: pre-self-K, 1: post-self-K

}MMRfTestCmd_GetRfSelfCalResultKeyV2_ReqParam;

// Payload of local parameter within confirm ILM message  (MMRF task --> FT task)
typedef struct
{
   MMRfTestCmd_RatIndicator            rat_idx;        // bitmap: (0|0|Lf|Lt|W|C|T|G)
   MMRfTestCmd_RfSelfCalStage          self_k_stage;   // 0: pre-self-K, 1: post-self-K
   MMRfTestCmd_RfSelfCalSetStageStatus stage_set_sts;  // 0: stage not support, 1: process OK
   kal_uint16                          total_item_cnt;

}MMRfTestCmd_GetRfSelfCalResultKeyV2_CnfParam;

// Payload of peer buffer within confirm ILM message  (MMRF task --> FT task)
typedef struct
{
   kal_char    key[MMRF_MAX_RF_SELF_K_LID_COUNT_V2][MMRF_MAX_RF_SELF_K_STRING_LENGTH];

}MMRfTestCmd_GetRfSelfCalResultKeyV2_CnfPdu;


/*******************************************************************************
 * RF self-K Get Debug Info Command (MMRF_TEST_CMD_GET_RF_SELF_CAL_DBG_INFO)
 ******************************************************************************/
// Payload of local parameter within request ILM message  (FT task --> MMRF task)
typedef struct
{
   MMRfTestCmd_RatIndicator   rat_idx;        // bitmap: (0|0|Lf|Lt|W|C|T|G)

}MMRfTestCmd_GetRfSelfCalDbgInfo_ReqParam;

// Payload of local parameter within confirm ILM message  (MMRF task --> FT task)
typedef struct
{
   MMRfTestCmd_RatIndicator   rat_idx;        // bitmap: (0|0|Lf|Lt|W|C|T|G)
   kal_uint16                 dbg_info_entry_num;

}MMRfTestCmd_GetRfSelfCalDbgInfo_CnfParam;

// Payload of peer buffer within confirm ILM message  (MMRF task --> FT task)
typedef struct
{
   kal_char    dbg_info[MMRF_MAX_RF_SELF_K_DBG_INFO_COUNT][MMRF_MAX_RF_SELF_K_STRING_LENGTH];

}MMRfTestCmd_GetRfSelfCalDbgInfo_CnfPdu;


/*******************************************************************************
 * RF self-K Get Debug Info Command V2 (MMRF_TEST_CMD_GET_RF_SELF_CAL_DBG_INFO_V2)
 ******************************************************************************/
// Payload of local parameter within request ILM message  (FT task --> MMRF task)
typedef struct
{
   MMRfTestCmd_RatIndicator   rat_idx;        // bitmap: (0|0|Lf|Lt|W|C|T|G)
   MMRfTestCmd_RfSelfCalStage self_k_stage;   // 0: pre-self-K, 1: post-self-K

}MMRfTestCmd_GetRfSelfCalDbgInfoV2_ReqParam;

// Payload of local parameter within confirm ILM message  (MMRF task --> FT task)
typedef struct
{
   MMRfTestCmd_RatIndicator            rat_idx;        // bitmap: (0|0|Lf|Lt|W|C|T|G)
   MMRfTestCmd_RfSelfCalStage          self_k_stage;   // 0: pre-self-K, 1: post-self-K
   MMRfTestCmd_RfSelfCalSetStageStatus stage_set_sts;  // 0: stage not support, 1: process OK
   kal_uint16                          dbg_info_entry_num;

}MMRfTestCmd_GetRfSelfCalDbgInfoV2_CnfParam;

// Payload of peer buffer within confirm ILM message  (MMRF task --> FT task)
typedef struct
{
   kal_char    dbg_info[MMRF_MAX_RF_SELF_K_DBG_INFO_COUNT_V2][MMRF_MAX_RF_SELF_K_STRING_LENGTH];

}MMRfTestCmd_GetRfSelfCalDbgInfoV2_CnfPdu;


/*******************************************************************************
 * RF Self Test Analyzer (MMRF_TEST_CMD_START_RF_SELF_TEST_ANALYZER)
 ******************************************************************************/
#define MMRFC_RSLT_DUMP_TONE_SUPPORT            28
#define MMRFC_RSLT_DUMP_GAIN_SUPPORT            8
#define MMRFC_RSLT_DUMP_CABAND_SUPPORT          5
// Dump Config Margin Check
#define MMRFC_RSLT_DUMP_CFG_MARGIN_NUM          10
#define MMRFC_RSLT_DUMP_DUMP_CFG_NUM            2
#define MMRFC_RSLT_DUMP_RESERVE_NUM             (MMRFC_RSLT_DUMP_CFG_MARGIN_NUM - MMRFC_RSLT_DUMP_DUMP_CFG_NUM)
// Dump Postdata Margin Check
#define MMRFC_RSLT_DUMP_POSTDATA_MARGIN_NUM     5000
#define MMRFC_RSLT_DUMP_POSTDATA_FS_RATE_NUM       1
#define MMRFC_RSLT_DUMP_RESERVE_POSTDATA_NUM    (MMRFC_RSLT_DUMP_POSTDATA_MARGIN_NUM-MMRFC_RSLT_DUMP_POSTDATA_FS_RATE_NUM)

// Payload of local parameter within request ILM message  (FT task --> MMRF task)
typedef struct
{
   kal_int32 opt_code;  // IRR/Gain/Phase/GA...etc
   kal_int32 opt_code2; // Reserve
   kal_int32 rat_idx;   // MMRfTestCmd_RatIndicator
   kal_int32 ca_band[MMRFC_RSLT_DUMP_CABAND_SUPPORT];
   kal_int32 meas_band_index;
   kal_int32 test_idx;  // 0:Test without Comp., 1:Test with Comp(Iterative Tuning), 2:Test with Comp(NVRAM)
   kal_int32 test_item; // 0:RXIRR_IQ, 1:RXIRR_IQ(RXIQ), 2:DETIQDC_DNL, 3:TXIQ, 4:TXGA
   kal_int32 mode_idx;  // RX(0:Primary, 1:Diversity), TX(0:Normal, 1:DPD)
   kal_int32 cbw_idx;   // 0x0:BW1p4, 0x1:BW3, 0x2:BW5, 0x3:BW10, 0x4:BW15, 0x5:BW20, 0x6:BW30, 0x7:BW35, 0x8:BW40, 0x9:BW50, 0xA:BW60, 0x10GSM_SC, 0x20:WCDMA_SC, 0x21:WCDMA_DC, 0x22:WCDMA_3C, 0x30:TDS_SC, 0x31TDS_DC,
   kal_int32 dump_cfg[MMRFC_RSLT_DUMP_DUMP_CFG_NUM]; // MMPOC_RXIRR_IQ_CAL: gain, MMPOC_TXIQ_CAL: subband ; MMPOC_RXIRR_IQ_CAL: tone, MMPOC_TXIQ_CAL: tx_route
   kal_int32 reserve[MMRFC_RSLT_DUMP_RESERVE_NUM];
}MMRfTestCmd_StartRFSelfTestAnalyzer_ReqParam;

// Payload of local parameter within confirm ILM message  (MMRF task --> FT task)
typedef struct
{
   kal_int32 rat_idx; //MML1_RF_RAT_T
   kal_int32 ca_band[MMRFC_RSLT_DUMP_CABAND_SUPPORT];
   kal_int32 band;
   kal_int32 route;
   kal_int32 test_idx;  // 0:Test without Comp., 1:Test with Comp(Iterative Tuning), 2:Test with Comp(NVRAM)
   kal_int32 test_item; // 0:RXIRR_IQ, 1:RXIRR_IQ(RXIQ), 2:DETIQDC_DNL, 3:TXIQ, 4:TXGA
   kal_int32 mode_idx;  // RX(0:Primary, 1:Diversity), TX(0:Normal, 1:DPD)
   kal_int32 cbw_idx;   // 0x0:BW1p4, 0x1:BW3, 0x2:BW5, 0x3:BW10, 0x4:BW15, 0x5:BW20, 0x6:BW30, 0x7:BW35, 0x8:BW40, 0x9:BW50, 0xA:BW60, 0x10GSM_SC, 0x20:WCDMA_SC, 0x21:WCDMA_DC, 0x22:WCDMA_3C, 0x30:TDS_SC, 0x31TDS_DC,
   kal_int32 dump_mode; // 0:default joint, 1:joint for RXIQ
   kal_int32 dump_cfg[MMRFC_RSLT_DUMP_DUMP_CFG_NUM]; // MMPOC_RXIRR_IQ_CAL: gain, MMPOC_TXIQ_CAL: subband ; MMPOC_RXIRR_IQ_CAL: tone, MMPOC_TXIQ_CAL: tx_route
   kal_int32 reserve[MMRFC_RSLT_DUMP_RESERVE_NUM];
}MMRfTestCmd_StartRFSelfTestAnalyzer_CnfParam;

typedef struct
{
   kal_int32  data_cfg[MMRFC_RSLT_DUMP_TONE_SUPPORT];
   kal_int32  data0[MMRFC_RSLT_DUMP_GAIN_SUPPORT][MMRFC_RSLT_DUMP_TONE_SUPPORT];
   kal_int32  data1[MMRFC_RSLT_DUMP_GAIN_SUPPORT][MMRFC_RSLT_DUMP_TONE_SUPPORT];
   kal_int32  data2[MMRFC_RSLT_DUMP_GAIN_SUPPORT][MMRFC_RSLT_DUMP_TONE_SUPPORT];
   kal_int32  data3[MMRFC_RSLT_DUMP_GAIN_SUPPORT][MMRFC_RSLT_DUMP_TONE_SUPPORT];
   kal_int32  data4[MMRFC_RSLT_DUMP_GAIN_SUPPORT][MMRFC_RSLT_DUMP_TONE_SUPPORT];
   kal_int32  data5[MMRFC_RSLT_DUMP_GAIN_SUPPORT][MMRFC_RSLT_DUMP_TONE_SUPPORT];
   kal_int32  data6[MMRFC_RSLT_DUMP_GAIN_SUPPORT][MMRFC_RSLT_DUMP_TONE_SUPPORT];
   kal_int32  data7[MMRFC_RSLT_DUMP_GAIN_SUPPORT][MMRFC_RSLT_DUMP_TONE_SUPPORT];
}MMRFC_ANALYZER_MEAS_DATA_T;

typedef struct
{
   kal_int32  opt_code;
   kal_int32  opt_code2;
   kal_int32  n_tone;
   kal_int32  n_gain;  // Dimension depend on RF (8 Slice)
   kal_int32  tone_freq[MMRFC_RSLT_DUMP_TONE_SUPPORT];
   kal_int32  gain_est_pos[MMRFC_RSLT_DUMP_GAIN_SUPPORT][MMRFC_RSLT_DUMP_TONE_SUPPORT];
   kal_int32  gain_est_neg[MMRFC_RSLT_DUMP_GAIN_SUPPORT][MMRFC_RSLT_DUMP_TONE_SUPPORT];
   kal_int32  phase_est_pos[MMRFC_RSLT_DUMP_GAIN_SUPPORT][MMRFC_RSLT_DUMP_TONE_SUPPORT];
   kal_int32  phase_est_neg[MMRFC_RSLT_DUMP_GAIN_SUPPORT][MMRFC_RSLT_DUMP_TONE_SUPPORT];
   kal_int32  mean_tone_pos_re[MMRFC_RSLT_DUMP_GAIN_SUPPORT][MMRFC_RSLT_DUMP_TONE_SUPPORT];
   kal_int32  mean_tone_pos_im[MMRFC_RSLT_DUMP_GAIN_SUPPORT][MMRFC_RSLT_DUMP_TONE_SUPPORT];
   kal_int32  mean_tone_neg_re[MMRFC_RSLT_DUMP_GAIN_SUPPORT][MMRFC_RSLT_DUMP_TONE_SUPPORT];
   kal_int32  mean_tone_neg_im[MMRFC_RSLT_DUMP_GAIN_SUPPORT][MMRFC_RSLT_DUMP_TONE_SUPPORT];
   kal_int16  data_dump_i[8192];
   kal_int16  data_dump_q[8192];
   /******* Below region share memory size of kal_int32*MMRFC_RSLT_DUMP_RESERVE_POSTDATA_NUM *******/
   kal_int32  fs_rate;  // Change MMRFC_RSLT_DUMP_POSTDATA_FS_RATE_NUM when sizeof(fs_rate) modified
   kal_int32  reserve[MMRFC_RSLT_DUMP_RESERVE_POSTDATA_NUM];  // To avoid violate META command buffer limitation, please use these reserve memory size to create new test condition
   /******* Above region share memory size of kal_int32*MMRFC_RSLT_DUMP_RESERVE_POSTDATA_NUM *******/
   kal_int32  status;   // 0:not start, 1:pass, 2:wrong rat, 3:wrong cal item
}MMRFC_ANALYZER_MEAS_RESULT_T;

// Payload of peer buffer within confirm ILM message  (MMRF task --> FT task)
typedef struct
{
   MMRFC_ANALYZER_MEAS_RESULT_T post_result;
}MMRfTestCmd_StartRFSelfTestAnalyzer_CnfPdu;


/*******************************************************************************
 * TAS Command (MMRF_TEST_CMD_FORCE_TAS)
 ******************************************************************************/
// Payload of local parameter within request ILM message  (FT task --> MMRF task)
typedef struct
{
   MMRfTestCmd_RatIndicator   rat_idx;       // bitmap: (0|0|Lf|Lt|W|C|T|G)
   kal_uint8                  tas_cfg;       // 0: disable tas
                                             // 1: enable tas and set tas_index=0

}MMRfTestCmd_ForceTas_ReqParam;

// Payload of local parameter within confirm ILM message  (MMRF task --> FT task)
typedef struct
{
   MMRfTestCmd_RatIndicator   rat_idx;       // bitmap: (0|0|Lf|Lt|W|C|T|G)

}MMRfTestCmd_ForceTas_CnfParam;

typedef struct
{
   kal_uint16    gmss_wm_id;
   kal_bool    (*queryTasSupport)( void );
   void        (*cfgTasSetting)( kal_bool force_tas_enable, kal_uint8 tas_index );

   kal_uint16  (*isQueryingTasStateCfgSupport)( void );
   kal_uint16  (*queryTasVersion)( void );
   kal_uint16  (*getTasStateCfgBandNum)( void );
   void        (*getTasStateCfg)(kal_uint16 buf_length, kal_uint16* band_list, kal_uint16* state_limit, kal_uint16* tas_state );

}MMRfTestAntennaSwitchFuncPtr;

/*******************************************************************************
 * RF Get AFC DAC Command (MMRF_TEST_CMD_GET_AFC_SETTING)
 ******************************************************************************/
typedef MMRfTestCmd_NoParam  MMRfTestCmd_GetAfcSetting_ReqParam;

typedef struct
{
   kal_uint16   AfcDac;
   kal_int32    SlopeInv;
   kal_uint32   CapId;

}MMRfTestCmd_GetAfcSetting_CnfParam;


/*******************************************************************************
 * RF Set AFC DAC Command (MMRF_TEST_CMD_SET_AFC_SETTING)
 ******************************************************************************/
typedef MMRfTestCmd_GetAfcSetting_CnfParam  MMRfTestCmd_SetAfcSetting_ReqParam;
typedef MMRfTestCmd_NoParam  MMRfTestCmd_SetAfcSetting_CnfParam;

/*******************************************************************************
 * Querying TAS State Config Command (MMRF_TEST_CMD_GET_TAS_STATE_CFG)
 ******************************************************************************/
typedef enum
{
   MMTST_TAS_VER_1_0     = 0,
   MMTST_TAS_VER_1_5     = 1,
   MMTST_TAS_VER_2_0     = 2,
   MMTST_TAS_VER_COUNT,
   MMTST_TAS_VER_INVALID = 0x7FFF,
} MMRfTestCmd_TasVer_E;

typedef enum
{
   MMTST_TAS_STATE0,
   MMTST_TAS_STATE1,
   MMTST_TAS_STATE2,
   MMTST_TAS_STATE3,
   MMTST_TAS_STATE4,
   MMTST_TAS_STATE5,
   MMTST_TAS_STATE6,
   MMTST_TAS_STATE7,
   MMTST_TAS_STATE_INVALID = 0x7FFF,
} MMRfTestCmd_TasState_E;

#define MMRF_MAX_TAS_CONFIG_COUNT               (32)

// Payload of local parameter within request ILM message  (FT task --> MMRF task)
typedef struct
{
   MMRfTestCmd_RatIndicator   rat_idx;       // bitmap: (0|0|Lf|Lt|W|C|T|G)

} MMRfTestCmd_GetTasStateCfg_ReqParam;

// Payload of local parameter within confirm ILM message  (MMRF task --> FT task)
typedef struct
{
   MMRfTestCmd_RatIndicator   rat_idx;       // bitmap: (0|0|Lf|Lt|W|C|T|G)
   MMRfTestCmd_TasVer_E       tas_ver;
   kal_uint16                 band_cnt;

} MMRfTestCmd_GetTasStateCfg_CnfParam;

// Payload of peer buffer within confirm ILM message  (MMRF task --> FT task)
typedef struct
{
   kal_uint16  band;                         // 2G: band_enum, TD/3/4G: band#
   kal_uint16  tas_state_up_bound;           // state limit; tas_cfg should not exceed this value (but can equal to it)
   kal_uint16  tas_state_bitmap;             // eg. bitmap = 0xD means state-0,2,3 need to be toggled

} MMRF_TasStateConfig_Entry_T;

typedef struct
{
   MMRF_TasStateConfig_Entry_T tas_state_cfg[MMRF_MAX_TAS_CONFIG_COUNT];

} MMRfTestCmd_GetTasStateCfg_CnfPdu;
/*******************************************************************************
 * RF Get Temperature 8-level DAC Command (MMRF_TEST_CMD_GET_TADC_SETTING)
 ******************************************************************************/
typedef MMRfTestCmd_NoParam  MMRfTestCmd_GetTadcSetting_ReqParam;
typedef MMRfTestCmd_NoParam  MMRfTestCmd_GetTadcSetting_CnfParam;

typedef struct
{
   kal_int16   temp_degree[MMRF_MAX_TADC_LEV_NUM];
   kal_uint16  temp_dac[MMRF_MAX_TADC_SET_NUM][MMRF_MAX_TADC_LEV_NUM];

}MMRfTestCmd_GetTadcSetting_CnfPdu;


/*******************************************************************************
 * RF Set Temperature 8-level DAC Command (MMRF_TEST_CMD_SET_TADC_SETTING)
 ******************************************************************************/
typedef MMRfTestCmd_NoParam  MMRfTestCmd_SetTadcSetting_ReqParam;
typedef MMRfTestCmd_NoParam  MMRfTestCmd_SetTadcSetting_CnfParam;

typedef struct
{
   kal_uint16  temp_dac[MMRF_MAX_TADC_SET_NUM][MMRF_MAX_TADC_LEV_NUM];

}MMRfTestCmd_SetTadcSetting_ReqPdu;


/*******************************************************************************
 * RF Get Temperature DAC Command (MMRF_TEST_CMD_GET_RF_TEMP)
 ******************************************************************************/
typedef struct
{
   kal_uint16 measure_count;

}MMRfTestCmd_GetRfTemp_ReqParam;

typedef struct
{
   kal_uint32 sum[MMRF_MAX_TADC_SET_NUM];

}MMRfTestCmd_GetRfTemp_CnfParam;


/*******************************************************************************
 * RF Get Temperature Info Command (MMRF_TEST_CMD_GET_TEMPERATURE_INFO)
 ******************************************************************************/
typedef MMRfTestCmd_NoParam  MMRfTestCmd_GetTemperatureInfo_ReqParam;

typedef struct
{
    kal_int16 status[MMRF_MAX_TADC_SET_NUM];  // can use enum of MML1_RF_GTI_STATUS_E
    kal_int16 tadc_dac[MMRF_MAX_TADC_SET_NUM];
    kal_int16 temperature[MMRF_MAX_TADC_SET_NUM];
    kal_int16 temp_idx[MMRF_MAX_TADC_SET_NUM];

}MMRfTestCmd_GetTemperatureInfo_CnfParam;

/*******************************************************************************
 * Read LID Check Sum (MMRF_TEST_CMD_CALC_CHECKSUM_CAL)
 ******************************************************************************/
typedef MMRfTestCmd_NoParam  MMRfTestCmd_CalcCheckSumCal_ReqParam;

typedef struct
{
    kal_uint32  mmrftst_total_chksum_cal_lsb;
    kal_uint32  mmrftst_total_chksum_cal_msb;
}MMRfTestCmd_CalcCheckSumCal_CnfParam;

/*******************************************************************************
 * Trigger LID Check Sum (MMRF_TEST_CMD_VERIFY_CHECKSUM)
 ******************************************************************************/
typedef MMRfTestCmd_NoParam  MMRfTestCmd_VerifyCheckSum_ReqParam;

typedef struct
{
    kal_uint32  mmrftst_total_chksum_cal_lsb;
    kal_uint32  mmrftst_total_chksum_cal_msb;
    kal_uint32  mmrftst_total_chksum_curr_lsb;
    kal_uint32  mmrftst_total_chksum_curr_msb;
}MMRfTestCmd_VerifyCheckSum_CnfParam;

/*******************************************************************************
 * Read/Write BSI CW Command (MMRF_TEST_CMD_SET_GET_BSI_CW)
 ******************************************************************************/
typedef enum
{
   MM_SET_GET_BSI_WRITE = 0,
   MM_SET_GET_BSI_READ = 1
}MMRfSstGstBSIE;

typedef enum
{
   MM_SET_GET_BSI_DISABLE = 0,
   MM_SET_GET_BSI_ENABLE = 1
}MMRfSetGetBSIEnableE;

typedef enum
{  /* following number are according to HWPOR port select */
   MML1TST_BSI_PORT_RFIC1   = 0x0000,
   MML1TST_BSI_PORT_RFIC2   = 0x0001,
   MML1TST_BSI_PORT_PMIC    = 0x0002,
   MML1TST_BSI_PORT_MIPI0   = 0x0003,
   MML1TST_BSI_PORT_MIPI1   = 0x0004,
   MML1TST_BSI_PORT_MIPI2   = 0x0005,
   MML1TST_BSI_PORT_MIPI3   = 0x0006,
   MML1TST_BSI_PORT_MIPI4   = 0x0007,
#if defined(ELBRUS) || defined(MT6799) || defined(MT6759)
   MML1TST_BSI_PORT_MIPI5   = 0x0008,
   MML1TST_BSI_PORT_MIPI6   = 0x0009,
   MML1TST_BSI_PORT_MIPI7   = 0x000A,
#endif
   MML1TST_BSI_PORT_CNT,
}MML1TST_RF_BSIMM_PORT_T;

typedef struct
{
   MMRfSetGetBSIEnableE gpt_bsi_enable;
   MMRfSstGstBSIE w_r;
   MML1TST_RF_BSIMM_PORT_T sel_rfic;
   kal_uint32 cw_address;
   kal_uint32 cw_data;
   kal_uint32 delay_us;
}BSI_INFORMATION;

typedef struct
{
   kal_uint32  meaningless;
}MMRfTestCmd_GetSetBSICW_ReqParam;

typedef struct
{
   BSI_INFORMATION BSI[MMRF_GPTOOL_EN_BSI_CW_NUMBER];
}MMRfTestCmd_GetSetBSICW_ReqPdu;

typedef struct
{
   kal_uint32  meaningless;
}MMRfTestCmd_GetSetBSICW_CnfParam;

typedef struct
{
   BSI_INFORMATION BSI[MMRF_GPTOOL_EN_BSI_CW_NUMBER];
}MMRfTestCmd_GetSetBSICW_CnfPdu;


/*******************************************************************************
 * MMRF_TEST_CMD_QUERY_VPA_VOLTAGE_LIST
 ******************************************************************************/
typedef MMRfTestCmd_NoParam  MMRfTestCmd_QueryVpaVoltageList_ReqParam;
typedef MMRfTestCmd_NoParam  MMRfTestCmd_QueryVpaVoltageList_CnfParam;

typedef struct
{
    /// number of elements in the list
    kal_uint32 validNumber;
    /// voltage list (unit: micro volt 10^-6)
    kal_uint32 voltageList[255];
    /// register value of each voltageList
    kal_uint32 registerValue[255];
}MMRfTestCmd_QueryVpaVoltageList_CnfPdu;


/*******************************************************************************
 * MMRFTST request/confirm command (local parameters of ILM message)
 ******************************************************************************/
typedef struct
{
   kal_uint16 token;
   kal_uint32 type;

}MMRfTestFtCmdType;

typedef struct
{
   kal_uint32 curr_idx;
   MMRfTestFtCmdType queue[4];

}MMRfTestFtCmdBackup;


/*******************************************************************************
 * Add NVRAM record command (local parameters of ILM message)
 ******************************************************************************/
typedef struct
{
   LOCAL_PARA_HDR
   kal_uint8 lid_count;
}MMRfTestCmd_Cdar_ReqParam;

typedef struct
{
   kal_uint16  LID;        // Logical data item ID of a EF
   kal_uint16  RID;        // Record ID (the first record is 1)
}MMRfTestCmd_Cdar_ReqPdu;

typedef struct
{
   LOCAL_PARA_HDR
   kal_uint8 status;
}MMRfTestCmd_Cdar_CnfParam;

/*******************************************************************************
 * RF Get AFC DAC Command V2 (MMRF_TEST_CMD_GET_AFC_SETTING_V2)
 ******************************************************************************/
typedef MMRfTestCmd_NoParam  MMRfTestCmd_GetAfcSettingV2_ReqParam;

typedef struct
{
   kal_uint16   AfcDac;
   kal_int32    SlopeInv;
   kal_uint32   CapId;
   kal_int32    cload_freq_offset;
}MMRfTestCmd_GetAfcSettingV2_CnfParam;

/*******************************************************************************
 * RF Set AFC DAC Command V2 (MMRF_TEST_CMD_SET_AFC_SETTING_V2)
 ******************************************************************************/
typedef MMRfTestCmd_GetAfcSettingV2_CnfParam    MMRfTestCmd_SetAfcSettingV2_ReqParam;
typedef MMRfTestCmd_NoParam                     MMRfTestCmd_SetAfcSettingV2_CnfParam;

/*******************************************************************************
 * MMRF_TEST_CMD_GET_SET_MIPI_CW
 ******************************************************************************/
typedef enum
{  /* following number are according to HWPOR port select */
   MML1TST_MIPI_PORT_MIPI0   = 0x0003,
   MML1TST_MIPI_PORT_MIPI1   = 0x0004,
   MML1TST_MIPI_PORT_MIPI2   = 0x0005,
   MML1TST_MIPI_PORT_MIPI3   = 0x0006,
   MML1TST_MIPI_PORT_MIPI4   = 0x0007,
   MML1TST_MIPI_PORT_MIPI5   = 0x0008,
   MML1TST_MIPI_PORT_MIPI6   = 0x0009,
   MML1TST_MIPI_PORT_MIPI7   = 0x000A,
   MML1TST_MIPI_PORT_CNT,
}MMRF_TEST_MIPI_PORT_E;

typedef enum
{
   MML1TST_MIPI_RW          = 0x0000,
   MML1TST_MIPI_EXTRW_1BYTE = 0x0001,
   MML1TST_MIPI_EXTRW_2BYTE = 0x0002,
   MML1TST_MIPI_EXTRW_3BYTE = 0x0003,
   MML1TST_MIPI_EXTRW_4BYTE = 0x0004,
   MML1TST_MIPI_SUPPORT_RW_CNT,
}MMRF_TEST_MIPI_RW_TYPE_E;


typedef MMRfTestCmd_NoParam          MMRfTestCmd_GetSetMipiCw_ReqParam;
typedef MMRfTestCmd_DefaultCnfParam  MMRfTestCmd_GetSetMipiCw_CnfParam;


typedef struct
{
   MMRF_TEST_MIPI_PORT_E      port_sel;
   MMRF_TEST_MIPI_RW_TYPE_E   rw_type;
   kal_uint8                  usid;
   kal_uint16                 addr;
   kal_uint32                 data1;
   kal_uint32                 data2;
   kal_uint32                 wait_us;
}MML1TST_MIPI_CTRL_T;

typedef struct
{
   MMRfSetGetBSIEnableE     gpt_mipi_enable;
   MMRfSstGstBSIE           w_r;
   MML1TST_MIPI_CTRL_T      mipi_ctrl;
}MIPI_INFORMATION;


typedef struct
{
   MIPI_INFORMATION MIPI[MMRF_GPTOOL_EN_BSI_CW_NUMBER];
}MMRfTestCmd_GetSetMIPICW_ReqPdu;


typedef struct
{
   MIPI_INFORMATION MIPI[MMRF_GPTOOL_EN_BSI_CW_NUMBER];
}MMRfTestCmd_GetSetMIPICW_CnfPdu;

typedef union
{
   MMRfTestCmd_CheckIfFuncExist_ReqParam              checkIfFuncExist;       // for MMRF_TEST_CMD_CHECK_IF_FUNC_EXIST                 = 0
   MMRfTestCmd_GetRfCapability_ReqParam               getRfCapability;        // for MMRF_TEST_CMD_GET_RF_CAPABILITY                   = 1
   MMRfTestCmd_StartDpdFacCal_ReqParam                dpd_fac_start_dim;      // for MMRF_TEST_CMD_START_DPD_FAC_CAL                   = 2
   MMRfTestCmd_GetDpdFacResult_ReqParam               dpd_fac_get_dim;        // for MMRF_TEST_CMD_GET_DPD_FAC_RESULT                  = 3
   MMRfTestCmd_SetDpdFacResult_ReqParam               dpd_fac_set_dim;        // for MMRF_TEST_CMD_SET_DPD_FAC_RESULT                  = 4
   MMRfTestCmd_DpdFacEnDis_ReqParam                   dpd_fac_en_dis;         // for MMRF_TEST_CMD_DPD_FAC_EN_DIS                      = 5
   MMRfTestCmd_StartCim3FacCal_ReqParam               cim3_fac_start_dim;     // for MMRF_TEST_CMD_START_CIM3_FAC_CAL                  = 6
   MMRfTestCmd_GetCim3FacResult_ReqParam              cim3_fac_get_dim;       // for MMRF_TEST_CMD_GET_CIM3_FAC_RESULT                 = 7
   MMRfTestCmd_SetCim3FacResult_ReqParam              cim3_fac_set_dim;       // for MMRF_TEST_CMD_SET_CIM3_FAC_RESULT                 = 8
   MMRfTestCmd_Cim3FacEnDis_ReqParam                  cim3_fac_en_dis;        // for MMRF_TEST_CMD_CIM3_FAC_EN_DIS                     = 9
   MMRfTestCmd_StartRfSelfCal_ReqParam                startRfSelfKparam;      // for MMRF_TEST_CMD_START_RF_SELF_CAL                   = 10
   MMRfTestCmd_GetRfSelfCalResult_ReqParam            getRfSelfKResult;       // for MMRF_TEST_CMD_GET_RF_SELF_CAL_RESULT              = 11
   MMRfTestCmd_SetRfSelfCalResult_ReqParam            setRfSelfKResult;       // for MMRF_TEST_CMD_SET_RF_SELF_CAL_RESULT              = 12
   MMRfTestCmd_GetRfSelfCalResultLen_ReqParam         getRfSelfKRltLen;       // for MMRF_TEST_CMD_GET_RF_SELF_CAL_RESULT_LEN          = 13
   MMRfTestCmd_StartRfSelfCalV2_ReqParam              startRfSelfKparamV2;    // for MMRF_TEST_CMD_START_RF_SELF_CAL_V2                = 14
   MMRfTestCmd_GetRfSelfCalResultV2_ReqParam          getRfSelfKResultV2;     // for MMRF_TEST_CMD_GET_RF_SELF_CAL_RESULT_V2           = 15
   MMRfTestCmd_SetRfSelfCalResultV2_ReqParam          setRfSelfKResultV2;     // for MMRF_TEST_CMD_SET_RF_SELF_CAL_RESULT_V2           = 16
   MMRfTestCmd_GetRfSelfCalDbgInfoV2_ReqParam         getRfSelfKDbgInfoV2;    // for MMRF_TEST_CMD_GET_RF_SELF_CAL_DBG_INFO_V2         = 17
   MMRfTestCmd_GetRfSelfCalDbgInfo_ReqParam           getRfSelfKDbgInfo;      // for MMRF_TEST_CMD_GET_RF_SELF_CAL_DBG_INFO            = 18
   MMRfTestCmd_GetRfSelfCalResultKey_ReqParam         getRfSelfKResultStr;    // for MMRF_TEST_CMD_GET_RF_SELF_CAL_RESULT_KEY          = 19
   MMRfTestCmd_GetRfSelfCalResultKeyV2_ReqParam       getRfSelfKResultStrV2;  // for MMRF_TEST_CMD_GET_RF_SELF_CAL_RESULT_KEY_V2       = 20
   MMRfTestCmd_ForceTas_ReqParam                      cfg_tas;                // for MMRF_TEST_CMD_FORCE_TAS                           = 25
   MMRfTestCmd_GetTadcSetting_ReqParam                getTadcSetting;         // for MMRF_TEST_CMD_GET_TADC_SETTING                    = 35
   MMRfTestCmd_SetTadcSetting_ReqParam                setTadcSetting;         // for MMRF_TEST_CMD_SET_TADC_SETTING                    = 36
   MMRfTestCmd_GetRfTemp_ReqParam                     getRfTemp;              // for MMRF_TEST_CMD_GET_RF_TEMP                         = 37
   MMRfTestCmd_GetTemperatureInfo_ReqParam            getTemperatureInfo;     // for MMRF_TEST_CMD_GET_TEMPERATURE_INFO                = 38
   MMRfTestCmd_GetSetBSICW_ReqParam                   getSetBSICW;            // for MMRF_TEST_CMD_GET_SET_BSI_CW
   MMRfTestCmd_QueryVpaVoltageList_ReqParam           queryVpaVoltageList;    // for MMRF_TEST_CMD_QUERY_VPA_VOLTAGE_LIST              = 44
   MMRfTestCmd_StartRFSelfTestAnalyzer_ReqParam       startRFSelfTestAnalyzer;// for MMRF_TEST_CMD_START_RF_SELF_TEST_ANALYZER         = 54
   MMRfTestCmd_GetAfcSetting_ReqParam                 getAfcSetting;          // for MMRF_TEST_CMD_GET_AFC_SETTING                     = 56
   MMRfTestCmd_SetAfcSetting_ReqParam                 setAfcSetting;          // for MMRF_TEST_CMD_SET_AFC_SETTING                     = 57
   MMRfTestCmd_GetTasStateCfg_ReqParam                getTasStateCfg;         // for MMRF_TEST_CMD_GET_TAS_STATE_CFG                   = 58
   MMRfTestCmd_StartDpdFacCalV3_ReqParam              start_dpd_v3_req;       // for MMRF_TEST_CMD_START_DPD_FAC_CAL_V3                = 59
   MMRfTestCmd_GetDpdFacCalAllV3_ReqParam             get_dpd_all_v3_req;     // for MMRF_TEST_CMD_GET_DPD_FAC_CAL_ALL_V3              = 60
   MMRfTestCmd_SetDpdFacCalAllV3_ReqParam             set_dpd_all_v3_req;     // for MMRF_TEST_CMD_SET_DPD_FAC_CAL_ALL_V3              = 61
   MMRfTestCmd_SetDpdFacCalPartialV3_ReqParam         set_dpd_par_v3_req;     // for MMRF_TEST_CMD_SET_DPD_FAC_CAL_PARTIAL_V3          = 62
   MMRfTestCmd_ForceTradCalIntoAptMode_ReqParam       trad_cal_force_mode_req;// for MMRF_TEST_CMD_FORCE_TRAD_CAL_INTO_APT_MODE        = 63
   MMRfTestCmd_SetDpdPathDelaySearchV3_ReqParam       set_dpd_delay_req;      // for MMRF_TEST_CMD_SET_DPD_PATH_DELAY_SEARCH_V3        = 64
   MMRfTestCmd_StartDpdPathDelaySearchV3_ReqParam     start_dpd_delay_req;    // for MMRF_TEST_CMD_START_DPD_PATH_DELAY_SEARCH_V3      = 65
   MMRfTestCmd_GetDpdPathDelaySearchV3_ReqParam       get_dpd_delay_req;      // for MMRF_TEST_CMD_GET_DPD_PATH_DELAY_SEARCH_V3        = 66
   MMRfTestCmd_GetAfcSettingV2_ReqParam               getAfcSettingv2_req;    // for MMRF_TEST_CMD_GET_AFC_SETTING_V2                  = 75
   MMRfTestCmd_SetAfcSettingV2_ReqParam               setAfcSettingv2_req;    // for MMRF_TEST_CMD_SET_AFC_SETTING_V2                  = 76
   MMRfTestCmd_GetSetMipiCw_ReqParam                  getSetMIPICW;           // for MMRF_TEST_CMD_GET_SET_MIPI_CW                     = 87
   MMRfTestCmd_CalcCheckSumCal_ReqParam               checksum_read_req;      // for MMRF_TEST_CMD_CALC_CHECKSUM_CAL                   = 100
   MMRfTestCmd_VerifyCheckSum_ReqParam                checksum_trigger_req;   // for MMRF_TEST_CMD_VERIFY_CHECKSUM                     = 101
}MMRfTestCmdParam;

typedef union
{
   MMRfTestCmd_CheckIfFuncExist_CnfParam              checkIfFuncExist;       // for MMRF_TEST_CMD_CHECK_IF_FUNC_EXIST                 = 0
   MMRfTestCmd_GetRfCapability_CnfParam               getRfCapability;        // for MMRF_TEST_CMD_GET_RF_CAPABILITY                   = 1
   MMRfTestCmd_StartDpdFacCal_CnfParam                dpd_fac_rpt;            // for MMRF_TEST_CMD_START_DPD_FAC_CAL                   = 2
   MMRfTestCmd_GetDpdFacResult_CnfParam               get_dpd_fac_rpt;        // for MMRF_TEST_CMD_GET_DPD_FAC_RESULT                  = 3
   MMRfTestCmd_SetDpdFacResult_CnfParam               set_dpd_fac_rpt;        // for MMRF_TEST_CMD_SET_DPD_FAC_RESULT                  = 4
   MMRfTestCmd_DpdFacEnDis_CnfParam                   dpd_fac_en_dis;         // for MMRF_TEST_CMD_DPD_FAC_EN_DIS                      = 5
   MMRfTestCmd_StartCim3FacCal_CnfParam               cim3_fac_rpt;           // for MMRF_TEST_CMD_START_CIM3_FAC_CAL                  = 6
   MMRfTestCmd_GetCim3FacResult_CnfParam              get_cim3_fac_rpt;       // for MMRF_TEST_CMD_GET_CIM3_FAC_RESULT                 = 7
   MMRfTestCmd_SetCim3FacResult_CnfParam              set_cim3_fac_rpt;       // for MMRF_TEST_CMD_SET_CIM3_FAC_RESULT                 = 8
   MMRfTestCmd_Cim3FacEnDis_CnfParam                  cim3_fac_en_dis;        // for MMRF_TEST_CMD_CIM3_FAC_EN_DIS                     = 9
   MMRfTestCmd_StartRfSelfCal_CnfParam                rfSelfKStatus;          // for MMRF_TEST_CMD_START_RF_SELF_CAL                   = 10
   MMRfTestCmd_GetRfSelfCalResult_CnfParam            getRfSelfKResult;       // for MMRF_TEST_CMD_GET_RF_SELF_CAL_RESULT              = 11
   MMRfTestCmd_SetRfSelfCalResult_CnfParam            setRfSelfKResult;       // for MMRF_TEST_CMD_SET_RF_SELF_CAL_RESULT              = 12
   MMRfTestCmd_GetRfSelfCalResultLen_CnfParam         getRfSelfKRltLen;       // for MMRF_TEST_CMD_GET_RF_SELF_CAL_RESULT_LEN          = 13
   MMRfTestCmd_StartRfSelfCalV2_CnfParam              rfSelfKStatusV2;        // for MMRF_TEST_CMD_START_RF_SELF_CAL_V2                = 14
   MMRfTestCmd_GetRfSelfCalResultV2_CnfParam          getRfSelfKResultV2;     // for MMRF_TEST_CMD_GET_RF_SELF_CAL_RESULT_V2           = 15
   MMRfTestCmd_SetRfSelfCalResultV2_CnfParam          setRfSelfKResultV2;     // for MMRF_TEST_CMD_SET_RF_SELF_CAL_RESULT_V2           = 16
   MMRfTestCmd_GetRfSelfCalDbgInfoV2_CnfParam         getRfSelfKDbgInfoV2;    // for MMRF_TEST_CMD_GET_RF_SELF_CAL_DBG_INFO_V2         = 17
   MMRfTestCmd_GetRfSelfCalDbgInfo_CnfParam           getRfSelfKDbgInfo;      // for MMRF_TEST_CMD_GET_RF_SELF_CAL_DBG_INFO            = 18
   MMRfTestCmd_GetRfSelfCalResultKey_CnfParam         getRfSelfKResultStr;    // for MMRF_TEST_CMD_GET_RF_SELF_CAL_RESULT_KEY          = 19
   MMRfTestCmd_GetRfSelfCalResultKeyV2_CnfParam       getRfSelfKResultStrV2;  // for MMRF_TEST_CMD_GET_RF_SELF_CAL_RESULT_KEY_V2       = 20
   MMRfTestCmd_ForceTas_CnfParam                      CfgTas;                 // for MMRF_TEST_CMD_FORCE_TAS                           = 25
   MMRfTestCmd_GetTadcSetting_CnfParam                getTadcSetting;         // for MMRF_TEST_CMD_GET_TADC_SETTING                    = 35
   MMRfTestCmd_SetTadcSetting_CnfParam                setTadcSetting;         // for MMRF_TEST_CMD_SET_TADC_SETTING                    = 36
   MMRfTestCmd_GetRfTemp_CnfParam                     getRfTemp;              // for MMRF_TEST_CMD_GET_RF_TEMP                         = 37
   MMRfTestCmd_GetTemperatureInfo_CnfParam            getTemperatureInfo;     // for MMRF_TEST_CMD_GET_TEMPERATURE_INFO                = 38
   MMRfTestCmd_GetSetBSICW_CnfParam                   getSetBSICW;            // for MMRF_TEST_CMD_GET_SET_BSI_CW
   MMRfTestCmd_QueryVpaVoltageList_CnfParam           queryVpaVoltageList;    // for MMRF_TEST_CMD_QUERY_VPA_VOLTAGE_LIST              = 44
   MMRfTestCmd_StartRFSelfTestAnalyzer_CnfParam       startRFSelfTestAnalyzer;// for MMRF_TEST_CMD_START_RF_SELF_TEST_ANALYZER         = 54
   MMRfTestCmd_GetAfcSetting_CnfParam                 getAfcSetting;          // for MMRF_TEST_CMD_GET_AFC_SETTING                     = 56
   MMRfTestCmd_SetAfcSetting_CnfParam                 setAfcSetting;          // for MMRF_TEST_CMD_SET_AFC_SETTING                     = 57
   MMRfTestCmd_GetTasStateCfg_CnfParam                getTasStateCfg;         // for MMRF_TEST_CMD_GET_TAS_STATE_CFG                   = 58
   MMRfTestCmd_StartDpdFacCalV3_CnfParam              start_dpd_v3_cnf;       // for MMRF_TEST_CMD_START_DPD_FAC_CAL_V3                = 59
   MMRfTestCmd_GetDpdFacCalAllV3_CnfParam             get_dpd_all_v3_cnf;     // for MMRF_TEST_CMD_GET_DPD_FAC_CAL_ALL_V3              = 60
   MMRfTestCmd_SetDpdFacCalAllV3_CnfParam             set_dpd_all_v3_cnf;     // for MMRF_TEST_CMD_SET_DPD_FAC_CAL_ALL_V3              = 61
   MMRfTestCmd_SetDpdFacCalPartialV3_CnfParam         set_dpd_par_v3_cnf;     // for MMRF_TEST_CMD_SET_DPD_FAC_CAL_PARTIAL_V3          = 62
   MMRfTestCmd_ForceTradCalIntoAptMode_CnfParam       trad_cal_force_mode_cnf;// for MMRF_TEST_CMD_FORCE_TRAD_CAL_INTO_APT_MODE        = 63
   MMRfTestCmd_SetDpdPathDelaySearchV3_CnfParam       set_dpd_delay_cnf;      // for MMRF_TEST_CMD_SET_DPD_PATH_DELAY_SEARCH_V3        = 64
   MMRfTestCmd_StartDpdPathDelaySearchV3_CnfParam     start_dpd_delay_cnf;    // for MMRF_TEST_CMD_START_DPD_PATH_DELAY_SEARCH_V3      = 65
   MMRfTestCmd_GetDpdPathDelaySearchV3_CnfParam       get_dpd_delay_cnf;      // for MMRF_TEST_CMD_GET_DPD_PATH_DELAY_SEARCH_V3        = 66
   MMRfTestCmd_GetAfcSettingV2_CnfParam               getAfcSettingv2_cnf;    // for MMRF_TEST_CMD_GET_AFC_SETTING_V2                  = 75
   MMRfTestCmd_SetAfcSettingV2_CnfParam               setAfcSettingv2_cnf;    // for MMRF_TEST_CMD_SET_AFC_SETTING_V2                  = 76
   MMRfTestCmd_GetSetMipiCw_CnfParam                  getSetMIPICW;           // for MMRF_TEST_CMD_GET_SET_MIPI_CW                     = 87
   MMRfTestCmd_CalcCheckSumCal_CnfParam               calc_checksum_cal_cnf;  // for MMRF_TEST_CMD_CALC_CHECKSUM_CAL                   = 100
   MMRfTestCmd_VerifyCheckSum_CnfParam                verify_checksum_cnf;    // for MMRF_TEST_CMD_VERIFY_CHECKSUM                     = 101
}MMRfTestResultParam;


// Local parameter of request ILM message  (FT task --> MMRF task)
typedef struct
{
   FT_HDR
   MMRfTestCmdType   type;
   MMRfTestCmdParam  param;
}mmrftst_req_struct;

// Local parameter of confirm ILM message  (MMRF task --> FT task)
typedef struct
{
   FT_HDR
   MMRfTestCmdType      type;
   DEFAULT_CNF_PARAM
   MMRfTestResultParam  param;
}mmrftst_cnf_struct;

typedef mmrftst_req_struct ft_to_mmrf_struct;
typedef mmrftst_req_struct ft_mmrf_test_req_id_struct;
typedef mmrftst_cnf_struct ft_mmrf_test_cnf_id_struct;

typedef MMRfTestCmd_NoParam pb_pdu_start_self_k_struct;
typedef ERfTestCmd_StartDpdFacCal_ReqPdu pb_pdu_start_dpd_fac_cal_struct;

#endif
