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
 *   el1d_gpt_if.h
 *
 * Project:
 * --------
 *   UMOLY
 *
 * Description:
 * ------------
 *  LTE test mode specific definitions for synchronizing with HOST tool
 *
 * Author:
 * -------
 * -------
 *
 * ==========================================================================
 * $Log$
 *
 * 10 30 2018 cc.shen
 * [MOLY00360661] [GEN93_R3]MIPI PA Bias Tuning feature-Interface modification.
 *
 * 09 12 2018 cc.shen
 * [MOLY00347908] [GEN93_R3]MIPI PA Bias Tuning feature.
 *
 * 02 12 2018 wade.chen
 * [MOLY00306800] B28??¤u¨ã±±¨î¡Ó0.3dB
 * 	[EL1C] NSFT tx power offset
 *
 * 08 08 2017 chenghsu.ke
 * [MOLY00268393] [EL1D][DPD] DPD calibration/norrmal mode/otfc codes.
 * 	
 * 	[93][UMOLYA][EL1D DPD] mipi/TPC/custom code update.
 *
 * 07 21 2017 yungshian.lai
 * [MOLY00266063] [EL1TST] GPS coclock v2.0 Development - 4G Read AuxADC /2G add capability and modify DHL PSTrace - UMOLYA.
 *
 * 06 13 2017 wei-han.tseng
 * [MOLY00256909] [EL1D RF][UMOLYA] MT6177M LTE RF Driver
 * .
 *
 * 05 25 2017 chen-ju.chen
 * [MOLY00252153] [MT6293]add spec support band & B71
 * [EL1D RF]add spec band & B71 enum.
 *
 * 04 10 2017 chunchieh.liao
 * [MOLY00238875] [MT6293][EL1D][RF] Merge DRDI patch from UMOLY (Oct.) and modify calibration default tables to RO type
 * .
 *
 * 04 07 2017 johnny.chiang
 * [MOLY00202329] [UMOLYA] 93 TSTM_META Development
 * 	
 * 	.TSTM_META UMOLYA patch back and fix build error
 *
 * 04 05 2017 chunchieh.liao
 * [MOLY00238875] [MT6293][EL1D][RF] Merge DRDI patch from UMOLY (Oct.) and modify calibration default tables to RO type
 * .
 *
 * 03 28 2017 johnny.chiang
 * [MOLY00202329] [UMOLYA] 93 TSTM_META Development
 * 	
 * 	.
 *
 * 03 16 2017 chia-hung.tsai
 * [MOLY00235233] [MT6293][EL1TST] 1. DDL & TX SYS feature  2. RX RF Tool Simutaneously issue fixed
 * 	
 * 	.
 *
 * 03 09 2017 joe-wc.chang
 * [MOLY00232823] [EL1D RF] GP tool porting
 * [EL1D RF] GP tool fixing.
 *
 * 03 02 2017 joe-wc.chang
 * [MOLY00232823] [EL1D RF] GP tool porting
 * Rollback of CL3577608
 *
 * 02 03 2017 mars.chang
 * [MOLY00198691] [MT6293][EL1TST] Common Modification
 * add gp cmd
 *
 * 12 14 2016 mars.chang
 * [MOLY00198691] [MT6293][EL1TST] Common Modification 
 * Shrinking CMD & XL1SIM issure resolved
 *
 * 12 05 2016 mars.chang
 * [MOLY00198691] [MT6293][EL1TST] Common Modification
 * MT6293 EL1TST First huge modification
 *
 * 07 25 2016 chia-hung.tsai
 * [MOLY00191754] [MT6293] Merge code from UMOLY
 *
 * 	.
 *
 * 06 09 2016 mars.chang
 * [MOLY00182564] [MT6293][EL1TST] reduce callstack deepth
 * 1.add gp cmd
 * 2.modify task level update SHM error
 * 3.modify TRX route info error
 *
 * 03 09 2016 samuel.yang
 * [MOLY00155278] [MT6292] LTE RF tool command handler related update
 * .
 *
 * 03 03 2016 samuel.yang
 * [MOLY00155278] [MT6292] Add definition of LTE GP tool command structure
 * .
 *
 * 02 18 2016 lawrence.chen
 * [MOLY00155370] meta test mode code check in for 6292
 * Renaming meta NSFT command.
 *
 * 02 16 2016 samuel.yang
 * [MOLY00155278] [MT6292] Update comments
 * .
 *
 * 02 05 2016 samuel.yang
 * [MOLY00155278] [MT6292] Update GP tool commands
 * .
 *
 ****************************************************************************/

#ifndef __EL1D_GPT_IF_H__
#define __EL1D_GPT_IF_H__

/*******************************************************************************
 * Include
 ******************************************************************************/
#include "kal_general_types.h"
#include "el1d_meta_if.h"


/*******************************************************************************
 * Enumeration
 ******************************************************************************/
typedef enum
{
    e_get_rf_capability       = ERF_TEST_CMD_GET_RF_CAPABILITY
   ,e_get_ca_capability       = ERF_TEST_CMD_QUERY_CA_CONFIG_TABLE_V3

   ,e_rf_stop                 = ERF_TEST_CMD_STOP_TEST_MODE
   ,e_rx_rssi                 = ERF_TEST_CMD_START_RSSI_V3
   ,e_rx_cont                 = ERF_TEST_CMD_START_CONT_RX_V3
   ,e_tx_tone                 = ERF_TEST_CMD_START_TPC_SINGLE_TONE_TX_V2
   ,e_get_pd_value            = ERF_TEST_CMD_GET_POWER_DETECTOR_VALUE
   ,e_tx_tone_afc             = ERF_TEST_CMD_START_AFC_SINGLE_TONE_TX

   ,e_start_pucch              = ERF_TEST_CMD_START_PUCCH_TX_V2
   ,e_start_prach              = ERF_TEST_CMD_START_PRACH_TX_V2
   ,e_start_srs             = ERF_TEST_CMD_START_SRS_TX_CA_V2
   ,e_start_pusch             = ERF_TEST_CMD_START_PUSCH_TX_CA_V2
   ,e_nsft_cmd               = ERF_TEST_CMD_START_NSFT_TX_RX_LIST_V3
   ,e_nsft_cmd_v2             = ERF_TEST_CMD_START_NSFT_TX_RX_LIST_V2
   ,e_get_mix_rx_rpt               = ERF_TEST_CMD_GET_MIX_RX_CA_RPT_V3
   ,e_start_mix_rx_v3               = ERF_TEST_CMD_START_MIX_RX_CA_V3
   ,e_reset_counter               = ERF_TEST_CMD_RESET_COUNTER

   ,e_get_cal_data_afc        = ERF_TEST_CMD_GET_AFC_SETTING
   ,e_get_cal_data_rx_tx      = ERF_TEST_CMD_GET_RX_TX_SETTING_V3
   ,e_get_cal_data_co_clock   = ERF_TEST_CMD_GET_GPS_CO_CLOCK_DATA

   ,e_set_cal_data_afc        = ERF_TEST_CMD_SET_AFC_SETTING
   ,e_set_cal_data_rx_tx      = ERF_TEST_CMD_SET_RX_TX_SETTING_V3
   ,e_set_cal_data_co_clock   = ERF_TEST_CMD_SET_GPS_CO_CLOCK_DATA
   ,e_fhc_v3                  = ERF_TEST_CMD_START_FHC_V3
   ,e_trx_route_info          = ERF_TEST_CMD_GET_TXRX_ROUTE_INFO
   ,e_get_auxadc_temp         = ERF_TEST_CMD_QUERY_AUXADC_TEMP
   ,e_ubin_mode_setup         = ERF_TEST_CMD_UBIN_MODE_SETUP

   ,e_test_command            = ERF_TEST_CMD_GP_TOOL_COMMAND_START
   /* ---------- please add self-defined command posterior to this line ----------- */

   ,e_rf_database_set       
   ,e_rf_rxon               
   ,e_rf_rxoff              
   ,e_rf_txon               
   ,e_rf_txoff 
   ,e_dpd_rid_writetonvram 

   ,e_rid_writeback_to_nvram
#if IS_4G_META_MIPI_PA_TUNING_SUPPORT
   ,e_rf_get_pa_mipi_data
   ,e_rf_set_pa_mipi_data
   ,e_rf_get_pa_tuning_band_route_info
#endif
   ,e_get_tx_power_offset            = ERF_TEST_CMD_GET_TX_POWER_OFFSET
   ,e_set_tx_power_offset            = ERF_TEST_CMD_SET_TX_POWER_OFFSET
}ft_erf_test_req_id_cmd_enum_type;


/*******************************************************************************
 * GP RF Tool Commands I (for existing ERF Tool commands shown on GP tool UI)
 ******************************************************************************/

/* ----------------- *\
|* Get MS Capability *|
\* ------------------------------------------------------------------------------------ */
typedef ERfTestCmd_GetRfCapability_ReqParam        e_get_rf_capability_req_param_struct;
typedef ERfTestCmd_GetRfCapability_CnfParam        e_get_rf_capability_cnf_param_struct;
typedef ERfTestCmd_GetRfCapability_CnfPdu          e_get_rf_capability_cnf_pdu_struct;

/* ----------------- *\
|* Get CA Capability *|
\* ------------------------------------------------------------------------------------ */
typedef ERfTestCmd_QueryCaConfigTableV3_ReqParam   e_get_ca_capability_req_param_struct;
typedef ERfTestCmd_QueryCaConfigTableV3_CnfParam   e_get_ca_capability_cnf_param_struct;
typedef ERfTestCmd_QueryCaConfigTableV3_CnfPdu     e_get_ca_capability_cnf_pdu_struct;

/* -------------- *\
|* Stop Test Mode *|
\* ------------------------------------------------------------------------------------ */
typedef ERfTestCmd_StopTestMode_ReqParam           e_rf_stop_req_param_struct;
typedef ERfTestCmd_StopTestMode_CnfParam           e_rf_stop_cnf_param_struct;

/* ---------- *\
|* Start RSSI *|
\* ------------------------------------------------------------------------------------ */
typedef ERfTestCmd_StartRssiV3_ReqParam            e_rx_rssi_req_param_struct;
typedef ERfTestCmd_StartRssiV3_CnfParam            e_rx_rssi_cnf_param_struct;
typedef ERfTestCmd_StartRssiV3_CnfPdu              e_rx_rssi_cnf_pdu_struct;

/* ------------------- *\
|* Start Continuous Rx *|
\* ------------------------------------------------------------------------------------ */
typedef ERfTestCmd_StartContRxV3_ReqParam          e_rx_cont_req_param_struct;
typedef ERfTestCmd_StartContRxV3_CnfParam          e_rx_cont_cnf_param_struct;

/* ------------------------ *\
|* Start TPC Single Tone Tx *|
\* ------------------------------------------------------------------------------------ */
typedef ERfTestCmd_StartTpcSingleToneTxV2_ReqParam e_tx_tone_req_param_struct;
typedef ERfTestCmd_StartTpcSingleToneTxV2_CnfParam e_tx_tone_cnf_param_struct;

/* ------------------------ *\
|* Get Power Detector Value *|
\* ------------------------------------------------------------------------------------ */
typedef ERfTestCmd_GetPowerDetectorValue_ReqParam  e_get_pd_value_req_param_struct;
typedef ERfTestCmd_GetPowerDetectorValue_CnfParam  e_get_pd_value_cnf_param_struct;

/* ------------------------ *\
|* Start AFC Single Tone Tx *|
\* ------------------------------------------------------------------------------------ */
typedef ERfTestCmd_StartAfcSingleToneTx_ReqParam e_tx_tone_afc_req_param_struct;
typedef ERfTestCmd_StartAfcSingleToneTx_CnfParam e_tx_tone_afc_cnf_param_struct;

/* --------------- *\
|* Get AFC Setting *|
\* ------------------------------------------------------------------------------------ */
typedef ERfTestCmd_GetAfcSetting_ReqParam          e_get_cal_data_afc_req_param_struct;
typedef ERfTestCmd_GetAfcSetting_CnfParam          e_get_cal_data_afc_cnf_param_struct;
typedef ERfTestCmd_GetAfcSetting_CnfPdu            e_get_cal_data_afc_cnf_pdu_struct;

/* ----------------- *\
|* Get Rx/Tx Setting *|
\* ------------------------------------------------------------------------------------ */
typedef ERfTestCmd_GetRxTxSettingV3_ReqParam       e_get_cal_data_rx_tx_req_param_struct;
typedef ERfTestCmd_GetRxTxSettingV3_CnfParam       e_get_cal_data_rx_tx_cnf_param_struct;
typedef ERfTestCmd_GetRxTxSettingV3_CnfPdu         e_get_cal_data_rx_tx_cnf_pdu_struct;

/* --------------------- *\
|* Get GPS Co-clock Data *|
\* ------------------------------------------------------------------------------------ */
typedef ERfTestCmd_GetGpsCoClockData_ReqParam      e_get_cal_data_co_clock_req_param_struct;
typedef ERfTestCmd_GetGpsCoClockData_CnfParam      e_get_cal_data_co_clock_cnf_param_struct;

/* --------------- *\
|* Set AFC Setting *|
\* ------------------------------------------------------------------------------------ */
typedef ERfTestCmd_SetAfcSetting_ReqParam          e_set_cal_data_afc_req_param_struct;
typedef ERfTestCmd_SetAfcSetting_ReqPdu            e_set_cal_data_afc_req_pdu_struct;
typedef ERfTestCmd_SetAfcSetting_CnfParam          e_set_cal_data_afc_cnf_param_struct;

/* ----------------- *\
|* Set Rx/Tx Setting *|
\* ------------------------------------------------------------------------------------ */
typedef ERfTestCmd_SetRxTxSettingV3_ReqParam       e_set_cal_data_rx_tx_req_param_struct;
typedef ERfTestCmd_SetRxTxSettingV3_ReqPdu         e_set_cal_data_rx_tx_req_pdu_struct;
typedef ERfTestCmd_SetRxTxSettingV3_CnfParam       e_set_cal_data_rx_tx_cnf_param_struct;

/* --------------------- *\
|* Set GPS Co-clock Data *|
\* ------------------------------------------------------------------------------------ */
typedef ERfTestCmd_SetGpsCoClockData_ReqParam      e_set_cal_data_co_clock_req_param_struct;
typedef ERfTestCmd_SetGpsCoClockData_CnfParam      e_set_cal_data_co_clock_cnf_param_struct;

/* -------------- *\
|* Start PUSCH Tx *|
\* ------------------------------------------------------------------------------------ */
typedef ERfTestCmd_StartPuschTxCaV2_ReqParam       e_start_pusch_req_param_struct;
typedef ERfTestCmd_StartPuschTxCaV2_CnfParam       e_start_pusch_cnf_param_struct;

/* -------------- *\
|* Start PUCCH Tx *|
\* ------------------------------------------------------------------------------------ */
typedef ERfTestCmd_StartPucchTxV2_ReqParam       e_start_pucch_req_param_struct;
typedef ERfTestCmd_StartPucchTxV2_CnfParam       e_start_pucch_cnf_param_struct;

/* -------------- *\
|* Start PRACH Tx *|
\* ------------------------------------------------------------------------------------ */
typedef ERfTestCmd_StartPrachTxV2_ReqParam       e_start_prach_req_param_struct;
typedef ERfTestCmd_StartPrachTxV2_CnfParam       e_start_prach_cnf_param_struct;

/* -------------- *\
|* Start SRS Tx *|
\* ------------------------------------------------------------------------------------ */
typedef ERfTestCmd_StartSrsTxCaV2_ReqParam       e_start_srs_req_param_struct;
typedef ERfTestCmd_StartSrsTxCaV2_CnfParam       e_start_srs_cnf_param_struct;

/* -------------- *\
|* Start Mix Rx *|
\* ------------------------------------------------------------------------------------ */
typedef ERfTestCmd_StartMixRxCaV2_ReqParam       e_start_mix_rx_req_param_struct;
typedef ERfTestCmd_StartMixRxCaV2_CnfParam        e_start_mix_rx_cnf_param_struct;

/* -------------- *\
|* Start Mix Rx *|
\* ------------------------------------------------------------------------------------ */
typedef ERfTestCmd_StartMixRxCaV3_ReqParam       e_start_mix_rx_v3_req_param_struct;
typedef ERfTestCmd_StartMixRxCaV3_CnfParam        e_start_mix_rx_v3_cnf_param_struct;

/* -------------- *\
|* Start Mix Rx Rpt *|
\* ------------------------------------------------------------------------------------ */
typedef ERfTestCmd_NoParam       e_get_mix_rx_rpt_req_param_struct;
typedef ERfTestCmd_GetMixRxRpt_CnfParam       e_get_mix_rx_rpt_cnf_param_struct;

/* -------------- *\
|* Start NSFT *|
\* ------------------------------------------------------------------------------------ */
typedef ERfTestCmd_StartNsftTxRxListV3_ReqParam       e_nsft_cmd_req_param_struct;
typedef ERfTestCmd_StartNsftTxRxListV3_ReqPdu       e_nsft_cmd_req_pdu_struct;
typedef ERfTestCmd_StartNsftTxRxListV3_CnfParam       e_nsft_cmd_cnf_param_struct;
typedef ERfTestCmd_StartNsftTxRxListV3_CnfPdu        e_nsft_cmd_cnf_pdu_struct;


/* -------------- *\
|* Start NSFT *|
\* ------------------------------------------------------------------------------------ */
typedef ERfTestCmd_StartNsftTxRxListV2_ReqParam       e_nsft_cmd_v2_req_param_struct;
typedef ERfTestCmd_StartNsftTxRxListV2_ReqPdu       e_nsft_cmd_v2_req_pdu_struct;
typedef ERfTestCmd_StartNsftTxRxListV2_CnfParam       e_nsft_cmd_v2_cnf_param_struct;
typedef ERfTestCmd_StartNsftTxRxListV2_CnfPdu        e_nsft_cmd_v2_cnf_pdu_struct;

/* -------------- *\
|* Start Reset *|
\* ------------------------------------------------------------------------------------ */
typedef ERfTestCmd_NoParam       e_reset_counter_req_param_struct;
typedef ERfTestCmd_DefaultCnfParam       e_reset_counter_cnf_param_struct;

/* --------------------- *\
|* FHC V3                *|
\* ------------------------------------------------------------------------------------ */

typedef struct
{
   union
   {
      kal_uint32                    raw_data[ERF_MAX_PEER_BUF_CNF_WORD_SIZE];
      FHC_V3_Rx_Type1_Cfg_T         rx_type1_route [ERF_MAX_FHC_RX_TYPE1_CMD_NUM_V3];
      FHC_V3_Rx_Type2_Cfg_T         rx_type2_route [ERF_MAX_FHC_RX_TYPE2_CMD_NUM_V3];
      FHC_V3_Tx_Type1_Cfg_T         tx_type1_route [ERF_MAX_FHC_TX_TYPE1_CMD_NUM_V3];
   }request;

}ERfTestCmd_StartFhcV3_ReqPdu;

typedef struct
{
   union
   {
      kal_uint32               raw_data[ERF_MAX_PEER_BUF_CNF_WORD_SIZE];
      FHC_V3_Rx_Type1_Rpt_T    rx_type1_rpt[ERF_MAX_FHC_RX_TYPE1_REPORT_NUM_V3];
      FHC_V3_Rx_Type2_Rpt_T    rx_type2_rpt[ERF_MAX_FHC_RX_TYPE2_REPORT_NUM_V3];
      FHC_V3_Tx_Type1_Rpt_T    tx_type1_rpt[ERF_MAX_FHC_TX_TYPE1_REPORT_NUM_V3];
   }confirm;

}ERfTestCmd_StartFhcV3_CnfPdu;

typedef ERfTestCmd_StartFhcV3_ReqParam       e_fhc_v3_req_param_struct;
typedef ERfTestCmd_StartFhcV3_ReqPdu         e_fhc_v3_req_pdu_struct;
typedef ERfTestCmd_StartFhcV3_CnfParam       e_fhc_v3_cnf_param_struct;
typedef ERfTestCmd_StartFhcV3_CnfPdu         e_fhc_v3_cnf_pdu_struct;


/* --------------------- *\
|* TRX Route Info        *|
\* ------------------------------------------------------------------------------------ */
typedef ERfTestCmd_GetTxRxRouteInfo_ReqParam       e_trx_route_info_req_param_struct;
typedef ERfTestCmd_GetTxRxRouteInfo_CnfParam       e_trx_route_info_cnf_param_struct;
typedef ERfTestCmd_GetTxRxRouteInfo_CnfPdu         e_trx_route_info_cnf_pdu_struct;


/* --------------------- *\
|* Get RX Gain Info      *|
\* ------------------------------------------------------------------------------------ */
typedef ERfTestCmd_GetRxGainInfoV3_ReqParam        e_get_rxgain_info_req_param_struct;
typedef ERfTestCmd_GetRxGainInfoV3_CnfParam        e_get_rxgain_info_cnf_param_struct;
typedef ERfTestCmd_GetRxGainInfoV3_CnfPdu          e_get_rxgain_info_cnf_pdu_struct;

/* -------------- *\
|* UBIN Mode Setup *|
\* ------------------------------------------------------------------------------------ */
typedef ERfTestCmd_UbinModeSetup_ReqParam          e_ubin_mode_setup_req_param_struct;
typedef ERfTestCmd_UbinModeSetup_CnfParam          e_ubin_mode_setup_cnf_param_struct;

/* ----------------- *\
|* Query AUXADC Temp *|
\* ------------------------------------------------------------------------------------ */
typedef ERfTestCmd_AuxDacResult_ReqParam           e_get_auxadc_temp_req_param_struct;
typedef ERfTestCmd_AuxDacResult_CnfParam           e_get_auxadc_temp_cnf_param_struct;

/* -------------- *\
|* Get Tx Power Offset *|
\* ------------------------------------------------------------------------------------ */
typedef ERfTestCmd_GetTxPowerOffset_ReqParam       e_get_tx_power_offset_req_param_struct;
typedef ERfTestCmd_GetTxPowerOffset_CnfParam       e_get_tx_power_offset_cnf_param_struct;


/* -------------- *\
|* Set Tx Power Offset *|
\* ------------------------------------------------------------------------------------ */
typedef ERfTestCmd_SetTxPowerOffset_ReqParam        e_set_tx_power_offset_req_param_struct;
typedef ERfTestCmd_SetTxPowerOffset_CnfParam        e_set_tx_power_offset_cnf_param_struct;


/* --------------------- *\
|* RF GP tool cmd param  *|
\* ------------------------------------------------------------------------------------ */
typedef unsigned short int       UINT16;
typedef unsigned char            UINT8;
typedef unsigned int             UINT32;

typedef enum
{
   LTE_BW_6RB_gp,   ///< 1.4 MHz
   LTE_BW_15RB_gp,  ///<   3 MHz
   LTE_BW_25RB_gp,  ///<   5 MHz
   LTE_BW_50RB_gp,  ///<  10 MHz
   LTE_BW_75RB_gp,  ///<  15 MHz
   LTE_BW_100RB_gp, ///<  20 MHz
   LTE_BW_MAX_gp,
   LTE_BW_UNKNOWN_gp = LTE_BW_MAX_gp
} LTE_BW_E2;

typedef enum
{
   LTE_BANDNONE_gp = 0 ,
   LTE_BAND1_gp    = 1 , // FDD Band
   LTE_BAND2_gp    = 2 ,
   LTE_BAND3_gp    = 3 ,
   LTE_BAND4_gp    = 4 ,
   LTE_BAND5_gp    = 5 ,
   LTE_BAND6_gp    = 6 ,
   LTE_BAND7_gp    = 7 ,
   LTE_BAND8_gp    = 8 ,
   LTE_BAND9_gp    = 9 ,
   LTE_BAND10_gp   = 10,
   LTE_BAND11_gp   = 11,
   LTE_BAND12_gp   = 12,
   LTE_BAND13_gp   = 13,
   LTE_BAND14_gp   = 14,
   LTE_BAND15_gp   = 15, // Reserved
   LTE_BAND16_gp   = 16, // Reserved
   LTE_BAND17_gp   = 17,
   LTE_BAND18_gp   = 18,
   LTE_BAND19_gp   = 19,
   LTE_BAND20_gp   = 20,
   LTE_BAND21_gp   = 21,
   LTE_BAND22_gp   = 22,
   LTE_BAND23_gp   = 23,
   LTE_BAND24_gp   = 24,
   LTE_BAND25_gp   = 25,
   LTE_BAND26_gp   = 26,
   LTE_BAND27_gp   = 27,
   LTE_BAND28_gp   = 28,
   LTE_BAND29_gp   = 29,
   LTE_BAND30_gp   = 30,
   LTE_BAND31_gp   = 31,
   LTE_BAND32_gp   = 32, // Not defined in 3GPP spec.
   LTE_BAND33_gp   = 33, // TDD Band
   LTE_BAND34_gp   = 34,
   LTE_BAND35_gp   = 35,
   LTE_BAND36_gp   = 36,
   LTE_BAND37_gp   = 37,
   LTE_BAND38_gp   = 38,
   LTE_BAND39_gp   = 39,
   LTE_BAND40_gp   = 40,
   LTE_BAND41_gp   = 41,
   LTE_BAND42_gp   = 42,
   LTE_BAND43_gp   = 43,
   LTE_BAND44_gp   = 44, // defined in 3GPP 36101-c30
   LTE_BAND45_gp   = 45,
   LTE_BAND46_gp   = 46,
   LTE_BAND47_gp   = 47,
   LTE_BAND48_gp   = 48,
   LTE_BAND65_gp   = 49,
   LTE_BAND66_gp   = 50,
   LTE_BAND67_gp   = 51,
   LTE_BAND68_gp   = 52,
   LTE_BAND69_gp   = 53,
   LTE_BAND70_gp   = 54,
   LTE_BAND71_gp   = 55,
   LTE_BAND252_gp  = 56,
   LTE_BAND253_gp  = 57,
   LTE_BAND254_gp  = 58,
   LTE_BAND255_gp  = 59,
   LTE_BAND62_gp   = 60,
   LTE_BAND63_gp   = 61,
   LTE_BANDCOUNT_gp,
} LTE_BAND_E2;

typedef enum
{
   LTE_CP_NORMAL_gp,
   LTE_CP_EXTENDED_gp,
   LTE_CP_MAX_gp,
   LTE_CP_UNKNOWN_gp
} LTE_CP_TYPE_E2;

typedef enum
{
   LTE_FDD_gp,
   LTE_TDD_gp,
   LTE_FRAME_TYPE_INVALID_gp = 0xFF
} LTE_FRAME_TYPE_E2;

typedef enum
{
   LTE_ANT_PORT_1_gp,
   LTE_ANT_PORT_2_gp,
   LTE_ANT_PORT_4_gp,
   LTE_ANT_PORT_8_gp,
   LTE_ANT_PORT_UNKNOWN_gp
} LTE_ANT_PORT_E2;

typedef struct
{
    UINT16           freq;
    LTE_BW_E2         bw;
    LTE_BAND_E2       band;
    LTE_CP_TYPE_E2    cp_type;
    LTE_FRAME_TYPE_E2 frame_type;
    UINT8            cc_rs_offset;
    LTE_ANT_PORT_E2   enb_ant_cfg; ///< eNB antenna config 
}RF_CC_INFO_T2;


/*******************************************************************************
 * GP RF Tool Commands II (for self-defined ERF commands)
 ******************************************************************************/

/* -------------- *\
|* E_TEST_COMMAND *|
\* ------------------------------------------------------------------------------------ */
typedef struct
{
   kal_uint16 req_param1;
   kal_uint16 req_param2;
   kal_uint16 req_param3;
} e_test_command_req_param_struct;

typedef struct
{
   kal_uint16 req_pdu1;
   kal_uint16 req_pdu2;
   kal_uint16 req_pdu3;
} e_test_command_req_pdu_struct;

typedef struct
{
   kal_uint16 cnf_param1;
   kal_uint16 cnf_param2;
   kal_uint16 cnf_param3;
} e_test_command_cnf_param_struct;

//database set
typedef struct
{
   UINT32 rf_rx_cc_count;   
   RF_CC_INFO_T2 cc_rx[2];

   UINT32 rf_tx_cc_count;   
   RF_CC_INFO_T2 cc_tx[2];      
} e_rf_database_set_req_param_struct;

typedef struct
{
   kal_uint16 cnf_param1;

} e_rf_database_set_cnf_param_struct;

//RX_ON
typedef struct
{
   UINT32     cc_mask[2];
      
} e_rf_rxon_req_param_struct;

typedef struct
{
   kal_uint16 cnf_param1;

} e_rf_rxon_cnf_param_struct;

//RX_OFF
typedef struct
{
   UINT32     cc_mask[2];
      
} e_rf_rxoff_req_param_struct;

typedef struct
{
   kal_uint16 cnf_param1;

} e_rf_rxoff_cnf_param_struct;

//TX_ON
typedef struct
{
   UINT32     tx_cc_mask[1];
      
} e_rf_txon_req_param_struct;

typedef struct
{
   kal_uint16 cnf_param1;

} e_rf_txon_cnf_param_struct;

//TX_OFF
typedef struct
{
   UINT32     tx_cc_mask[1];
      
} e_rf_txoff_req_param_struct;

typedef struct
{
   kal_uint16 cnf_param1;

} e_rf_txoff_cnf_param_struct;

typedef struct
{
   kal_uint32  meaningless;
}e_rid_writeback_to_nvram_req_param_struct;

typedef struct
{
   kal_uint32  meaningless;
}e_rid_writeback_to_nvram_req_pdu_struct;

typedef struct
{
   ERfTestLteDpdDataType data_type;
} e_dpd_rid_writetonvram_req_param_struct;

typedef struct
{
   ERfTestLteDpdDataType data_type;
} e_dpd_rid_writetonvram_cnf_param_struct;

typedef struct
{
   kal_uint32  meaningless;
}e_rid_writeback_to_nvram_cnf_param_struct;

typedef struct
{
   kal_uint32  rid_success_count[30];
}e_rid_writeback_to_nvram_cnf_pdu_struct;

/* =========== please add self-defined command structure posterior to this line ========== */
#if IS_4G_META_MIPI_PA_TUNING_SUPPORT

#define ERF_MAX_BAND_NUM_GP 25
#define ERF_MAX_TX_CATEGORY_NUM_GP 6
#define ERF_MAX_PEER_BUF_CNF_BYTE_SIZE_GP            61440 //60*1024
#define ERF_MAX_PEER_BUF_CNF_WORD_SIZE_GP            ERF_MAX_PEER_BUF_CNF_BYTE_SIZE_GP >> 2
//****************New PA section data struct****************
typedef struct
{
   LTE_MIPI_TPC_SECTION_TABLE_T    single_carrier[LTE_MIPI_SUBBAND_NUM_PER_DATA];
   LTE_MIPI_TPC_SECTION_TABLE_T    cca[LTE_MIPI_SUBBAND_NUM_PER_DATA];
}LTE_MIPI_TPC_SECTION_TABLE_DEFAULT_SIZE_GP;
//**********************************************************

#define ERF_MAX_PA_DATA_ACCESS_NUM_GP   ( ERF_MAX_PEER_BUF_CNF_BYTE_SIZE_GP/sizeof(LTE_MIPI_TPC_SECTION_TABLE_DEFAULT_SIZE_GP) )

//Expect all features would add Enum here.
typedef enum
{
   MIPI_TPC_PROC_GP             =0,
   MIPI_TPC_ET_PROC_GP          =1,
   MIPI_TPC_DPD_PROC_GP         =2,
   MIPI_TPC_PROC_CONFIG_CNT_GP,
   MIPI_TPC_PROC_END            =0xFFFF,
}MIPI_TPC_CONFIG_PROC_E_GP;

//****************Get PA Tuning Band Route Info*************
typedef struct
{
  kal_uint8  meaningless;
}e_rf_get_pa_tuning_band_route_info_req_pdu_struct;

typedef struct
{
  kal_uint8  meaningless;
}e_rf_get_pa_tuning_band_route_info_req_param_struct;

typedef struct
{
  kal_uint16  tx_fe_route;
  kal_uint16  nbr_comp_route;
  kal_uint16  tx_comp_route[ERF_MAX_TX_CATEGORY_NUM_GP];
  kal_uint8   normal_support_bitmap;//bit0:apt bit1:et bit2:dpd
  kal_uint8   cca_support_bitmap;//bit0:apt bit1:et bit2:dpd
}e_rf_get_pa_tuning_route_map;

typedef struct
{
  //LTE_BAND_E2                     lte_tx_band;
  kal_uint16                      lte_tx_band;
  kal_uint16                      nbr_fe_route;
  e_rf_get_pa_tuning_route_map    fe_route_table[ERF_MAX_TX_CATEGORY_NUM_GP];
}e_rf_get_pa_tuning_band_info;


typedef struct
{
  kal_uint16                      nbr_tx_band;
  e_rf_get_pa_tuning_band_info    lte_tx_info[ERF_MAX_BAND_NUM_GP];
}e_rf_get_pa_tuning_band_route_info_cnf_pdu_struct;

typedef struct
{
  kal_bool get_cnf;
}e_rf_get_pa_tuning_band_route_info_cnf_param_struct;
//*********************************************************

//*****************Get PA Tuning data**********************
typedef struct
{
   kal_uint16                   nbr_routes;
   MIPI_TPC_CONFIG_PROC_E_GP    mipi_config;
   kal_uint16                   mipi_fe_route_idx[ERF_MAX_PA_DATA_ACCESS_NUM_GP];
}e_rf_get_pa_mipi_data_req_param_struct;


typedef struct
{

   kal_uint8  meaningless;
}e_rf_get_pa_mipi_data_req_pdu_struct;

typedef struct
{
   kal_bool                    get_cnf;
   kal_uint16                  nbr_routes;
   MIPI_TPC_CONFIG_PROC_E_GP   mipi_config;
}e_rf_get_pa_mipi_data_cnf_param_struct;

typedef struct
{
   //LTE_MIPI_TPC_SECTION_TABLE_DEFAULT_SIZE_GP    lte_mipi_tpc_sec_table[ERF_MAX_PA_DATA_ACCESS_NUM_GP];
   union
   {
     kal_int32                                     raw_data[ERF_MAX_PEER_BUF_CNF_WORD_SIZE_GP];
     LTE_MIPI_TPC_SECTION_TABLE_DEFAULT_SIZE_GP    lte_mipi_tpc_sec_table[ERF_MAX_PA_DATA_ACCESS_NUM_GP];
   }get_pa_data_cnf;
}e_rf_get_pa_mipi_data_cnf_pdu_struct;
//*********************************************************

//******************Set PA Tuning data*********************
typedef struct
{
   kal_uint16                   nbr_routes;
   MIPI_TPC_CONFIG_PROC_E_GP    mipi_config;
   kal_uint16                   mipi_fe_route_idx[ERF_MAX_PA_DATA_ACCESS_NUM_GP];
}e_rf_set_pa_mipi_data_req_param_struct;

typedef struct
{
   //LTE_MIPI_TPC_SECTION_TABLE_DEFAULT_SIZE_GP    lte_mipi_tpc_sec_table[ERF_MAX_PA_DATA_ACCESS_NUM_GP];//used for set desire data
   union
   {
     kal_int32                                     raw_data[ERF_MAX_PEER_BUF_CNF_WORD_SIZE_GP];
     LTE_MIPI_TPC_SECTION_TABLE_DEFAULT_SIZE_GP    lte_mipi_tpc_sec_table[ERF_MAX_PA_DATA_ACCESS_NUM_GP];
   }set_pa_data_cnf;
}e_rf_set_pa_mipi_data_req_pdu_struct;

typedef struct
{
   kal_bool set_cnf;
}e_rf_set_pa_mipi_data_cnf_param_struct;


typedef struct
{
   kal_uint8  meaningless;
}e_rf_set_pa_mipi_data_cnf_pdu_struct;
//*********************************************************


//Get current setting to cnf_pdu. Need number of routes, route indexes, cfg information
void E_RF_Get_PA_MIPI_Data_CallbackFunc(e_rf_get_pa_mipi_data_req_param_struct *req_param,
                                        e_rf_get_pa_mipi_data_req_pdu_struct   *req_pdu,
                                        e_rf_get_pa_mipi_data_cnf_param_struct *cnf_param,
                                        e_rf_get_pa_mipi_data_cnf_pdu_struct   *cnf_pdu);

//Set desire setting in req_pdu, Need number of routes, route indexes, cfg information
void E_RF_Set_PA_MIPI_Data_CallbackFunc(e_rf_set_pa_mipi_data_req_param_struct *req_param,
                                        e_rf_set_pa_mipi_data_req_pdu_struct   *req_pdu,
                                        e_rf_set_pa_mipi_data_cnf_param_struct *cnf_param,
                                        e_rf_set_pa_mipi_data_cnf_pdu_struct   *cnf_pdu);

//Get PA tuning band routes information, no input is required, return the result in cnf_pdu
void E_RF_Get_PA_Tuning_Band_Route_Info_CallbackFunc(e_rf_get_pa_tuning_band_route_info_req_param_struct *req_param,
                                                     e_rf_get_pa_tuning_band_route_info_req_pdu_struct   *req_pdu,
                                                     e_rf_get_pa_tuning_band_route_info_cnf_param_struct *cnf_param,
                                                     e_rf_get_pa_tuning_band_route_info_cnf_pdu_struct   *cnf_pdu);
#endif

#endif
