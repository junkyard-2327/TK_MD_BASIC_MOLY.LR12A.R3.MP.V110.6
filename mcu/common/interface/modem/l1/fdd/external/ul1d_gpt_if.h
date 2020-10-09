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
 *   ul1d_gpt_if.h
 *
 * Project:
 * --------
 *   UMOLY
 *
 * Description:
 * ------------
 *  WCDMA test mode specific definitions for synchronizing with HOST tool
 *
 * Author:
 * -------
 * -------
 *
 * ==========================================================================
 * $Log$
 *
 * 03 08 2018 alan.wong
 * [MOLY00310588] [UL1D][RF] RFEQ Subband Setting and RXDFE IQ Dump by META Auto Tool
 * -TST part
 *
 * 02 09 2018 alan.wong
 * [MOLY00304150] WCDMA ?ºÝBER???¥ÎMETA_3Grf_NSFT_Reset_BER_Result_r¥¢?
 * -fix NSFT reset BER flow sync from R2 5055617
 *
 * 02 23 2017 alan.wong
 * [MOLY00231464] [Bianco Bring-up][WCDMA][UL1TST] Add GP tool command
 * .
 *
 * 05 30 2016 yu-hsuan.sung
 * [MOLY00180557] [ELBRUS] add capability for META update parameter
 *
 ****************************************************************************/

#ifndef __UL1D_GPT_IF_H__
#define __UL1D_GPT_IF_H__

/*******************************************************************************
 * Include
 ******************************************************************************/
#include "kal_general_types.h"
#include "ft_msg_ul1rf.h"

#define GPTOOL_EN_BSI_CW_NUMBER 64
/*******************************************************************************
 * Enumeration
 ******************************************************************************/
typedef enum
{
   u_test_command       = URF_TEST_CMD_GP_TOOL_COMMAND_START,
   //u_set_get_bsi,
   /* --------------- please add new command posterior to this line --------------- */
   //93new
   u_get_rxtx_cal_data  = URF_TEST_CMD_GET_RXTX_CALIBRATION_DATA_V3,
   u_set_rxtx_cal_data  = URF_TEST_CMD_SET_RXTX_CALIBRATION_DATA_V3,
   u_get_calinfo_v3      =URF_TEST_CMD_GET_CALIBRATION_INFO_V3,
   u_start_fhc_v3        =URF_TEST_CMD_START_FHC_V3,
   u_get_fhc_result_v3   =URF_TEST_CMD_GET_FHC_RESULT_V3,
   u_get_rssi_v3         =URF_TEST_CMD_GET_RSSI_V3,
   u_gain_select_pwr_v3  =URF_TEST_CMD_GAIN_SELECT_PWR_V3,
   u_gain_select_lna_v3  =URF_TEST_CMD_GAIN_SELECT_LNA_V3,
   u_trigger_iq_dump_mode_v3    =URF_TEST_CMD_TRIGGER_IQ_DUMP_MODE_V3,
   u_get_iq_dump_result_v3      =URF_TEST_CMD_GET_IQ_DUMP_RESULT_V3,
   u_set_rfeq_subband_result_v3 =URF_TEST_CMD_SET_RFEQ_SUBBAND_RESULT_V3,
   u_hsdpa_r5_tx         =URF_TEST_CMD_START_HSDPA_NSFT,
   u_hsupa_r6_tx         =URF_TEST_CMD_START_HSUPA_NSFT,
   u_stop                =URF_TEST_CMD_STOP,
   u_nsft_ex             =URF_TEST_CMD_START_NSFT_EX,
   u_nsft_get_rssi       =URF_TEST_CMD_NSFT_GET_RSSI,
   u_nsft_reset_ber      =URF_TEST_CMD_NSFT_RESET_BER_RESULT,
   u_get_single_end_ber  =URF_TEST_CMD_GET_BIT_COUNT_FOR_SINGLE_ENDED_BER,
}ft_urf_test_req_id_cmd_enum_type;


/*******************************************************************************
 * Legacy LTE RF Tool Commands
 ******************************************************************************/



/* --------------- please add new command structure posterior to this line --------------- */

/*******************************************************************************
 * GP RF Tool Commands
 ******************************************************************************/

/* -------------- *\
|* U_TEST_COMMAND *|
\* -------------- */
typedef struct
{
   kal_uint16 req_param1;
   kal_uint16 req_param2;
   kal_uint16 req_param3;
} u_test_command_req_param_struct;

typedef struct
{
   kal_uint16 req_pdu1;
   kal_uint16 req_pdu2;
   kal_uint16 req_pdu3;
} u_test_command_req_pdu_struct;

typedef struct
{
   kal_uint16 cnf_param1;
   kal_uint16 cnf_param2;
   kal_uint16 cnf_param3;
} u_test_command_cnf_param_struct;

typedef struct
{
   kal_uint16 req_pdu1;
   kal_uint16 req_pdu2;
   kal_uint16 req_pdu3;
} u_test_command_cnf_pdu_struct;

/* -------------- *\
|* U_SET_GET_BSI  *|
\* -------------- */
typedef enum
{
   U_SET_GET_BSI_WRITE = 0,
   U_SET_GET_BSI_READ = 1
} U_SET_GET_BSI_E;

typedef enum
{
   U_SET_GET_BSI_DISABLE = 0,
   U_SET_GET_BSI_ENABLE = 1
} U_SET_GET_BSI_ENABLE_E;

typedef enum
{  /* following number are according to HWPOR port select */
   UL1TST_RF_RFIC1   = 0x0000,
   UL1TST_RF_RFIC2   = 0x0001,
   UL1TST_RF_PMIC    = 0x0002,
   UL1TST_RF_MIPI0   = 0x0003,
   UL1TST_RF_MIPI1   = 0x0004,
   UL1TST_RF_MIPI2   = 0x0005,
   UL1TST_RF_MIPI3   = 0x0006,
   UL1TST_RF_MIPI4   = 0x0007,
   UL1TST_RF_PORT_CNT,
}UL1TST_RF_BSIMM_PORT_T;


typedef struct
{
   U_SET_GET_BSI_ENABLE_E gpt_bsi_enable;
   U_SET_GET_BSI_E w_r;
   UL1TST_RF_BSIMM_PORT_T sel_rfic;
   kal_uint32 cw_address;
   kal_uint32 cw_data;
   kal_uint32 delay_us;
} BSI_INFORMATION;

typedef struct
{
   kal_uint32  void_param;
} u_set_get_bsi_req_param_struct;

typedef struct
{
   BSI_INFORMATION BSI[GPTOOL_EN_BSI_CW_NUMBER];
} u_set_get_bsi_req_pdu_struct;

typedef struct
{
   kal_uint32  void_param;
} u_set_get_bsi_cnf_param_struct;

typedef struct
{
   BSI_INFORMATION BSI[GPTOOL_EN_BSI_CW_NUMBER];
} u_set_get_bsi_cnf_pdu_struct;


/*93 get set*/
typedef URfTestCmd_GetRxTxCalData_ReqParam_V3 u_get_rxtx_cal_data_req_param_struct;
typedef URfTestCmd_GetRxTxCalData_CnfParam_V3 u_get_rxtx_cal_data_cnf_param_struct;

typedef struct //fix structure
{
   UTSTPathlossV3 RXM_peer_buf[5];
   UTSTPathlossV3 RXD_peer_buf[5];
   URfTestTXDaTaItem TX_peer_buf[5];
}u_get_rxtx_cal_data_cnf_pdu_struct;

typedef URfTestCmd_SetRxTxCalData_ReqParam_V3 u_set_rxtx_cal_data_req_param_struct;
typedef URfTestCmd_SetRxTxCalData_CnfParam_V3 u_set_rxtx_cal_data_cnf_param_struct;

typedef struct //fix structure
{
   UTSTPathlossV3 RXM_peer_buf[5];
   UTSTPathlossV3 RXD_peer_buf[5];
   URfTestTXDaTaItem TX_peer_buf[5];
}u_set_rxtx_cal_data_req_pdu_struct;

//get_calinfo_v3
typedef UTSTReqGetCalInfoV3lp u_get_calinfo_v3_req_param_struct;
typedef UTSTCnfGetCalInfoV3lp u_get_calinfo_v3_cnf_param_struct;
typedef struct
{
   UTSTCnfGetCalInfoV3pb calinfo[5];
}u_get_calinfo_v3_cnf_pdu_struct;

//get_RSSI_V3
typedef UTSTReqGetRSSIV3lp u_get_rssi_v3_req_param_struct;
typedef UTSTCnfGetRSSIV3lp u_get_rssi_v3_cnf_param_struct;
//powertogain
typedef UTSTReqPwrtoGainV3lp u_gain_select_pwr_v3_req_param_struct;
typedef UTSTCnfPwrtoGainV3lp u_gain_select_pwr_v3_cnf_param_struct;
//powertoLNA
typedef UTSTReqLnatoGainV3lp u_gain_select_lna_v3_req_param_struct;
typedef UTSTCnfLnatoGainV3lp u_gain_select_lna_v3_cnf_param_struct;
//start_fhc_v3(One band only)
typedef UTSTReqFHCeLNAV3lp u_start_fhc_v3_req_param_struct;
typedef UTSTCnfFHCeLNAV3lp u_start_fhc_v3_cnf_param_struct;
typedef UTSTReqFHCeLNAV3pb u_start_fhc_v3_req_pdu_struct;
//get_fhc_result_v3 
typedef struct
{
   kal_bool    get_result;
}u_get_fhc_result_v3_req_param_struct;
typedef UTSTCnfGetFHCResultV3lp u_get_fhc_result_v3_cnf_param_struct;
typedef UTSTCnfGetFHCResultV3pb u_get_fhc_result_v3_cnf_pdu_struct;

//u_trigger_iq_dump_mode_v3
typedef UTSTReqTriggerIqDumpModeV3lp u_trigger_iq_dump_mode_v3_req_param_struct;
typedef UTSTCnfTriggerIqDumpModeV3lp u_trigger_iq_dump_mode_v3_cnf_param_struct;

//u_get_iq_dump_result_v3
typedef struct
{
   kal_bool get_result;
}u_get_iq_dump_result_v3_req_param_struct;
typedef UTSTCnfGetIqDumpResultV3lp u_get_iq_dump_result_v3_cnf_param_struct;
typedef struct
{ 
   UTSTCnfGetIqDumpResultV3pb iq_dump_result[8192];
}u_get_iq_dump_result_v3_cnf_pdu_struct;

//u_set_rfeq_subband_result_v3
typedef UTSTReqSetRfeqSubbandV3lp u_set_rfeq_subband_result_v3_req_param_struct;
typedef struct
{
   UTSTReqSetRfeqSubbandV3pb rfeq_data[10];
}u_set_rfeq_subband_result_v3_req_pdu_struct;
typedef UTSTCnfSetRfeqSubbandV3lp u_set_rfeq_subband_result_v3_cnf_param_struct;

//R5
typedef struct
{
   kal_bool   open_R5_test;
}u_hsdpa_r5_tx_req_param_struct;
typedef URfTestCmdHspaNsft u_hsdpa_r5_tx_req_pdu_struct;
typedef FT_UMTS_NSFTLinkStatusReport u_hsdpa_r5_tx_cnf_param_struct;
//R6
typedef struct
{
   kal_bool   open_R6_test;
}u_hsupa_r6_tx_req_param_struct;
typedef URfTestCmdHspaNsft u_hsupa_r6_tx_req_pdu_struct;
typedef FT_UMTS_NSFTLinkStatusReport u_hsupa_r6_tx_cnf_param_struct;
//STOP
typedef struct
{
   kal_bool stop;
}u_stop_req_param_struct;
typedef struct
{
   kal_bool ok;
}u_stop_cnf_param_struct;

//u_nsft_ex
typedef struct
{
   kal_bool   open_nsft_test;
}u_nsft_ex_req_param_struct;
typedef UL1D_RF_NSFT_REQ_T u_nsft_ex_req_pdu_struct;
typedef FT_UMTS_NSFTLinkStatusReport u_nsft_ex_cnf_param_struct;
//u_nsft_get_rssi
typedef struct
{
   kal_bool get_rssi;
}u_nsft_get_rssi_req_param_struct;
typedef URfTestResultNSFTRSSI u_nsft_get_rssi_cnf_param_struct;


//u_nsft_reset_ber
typedef URFTestCmdResetBERResult u_nsft_reset_ber_req_param_struct;
typedef URFTestResultResetBERResult u_nsft_reset_ber_cnf_param_struct;
//u_get_single_end_ber
typedef struct
{
   kal_bool get_single_end_ber;
}u_get_single_end_ber_req_param_struct;
typedef UL1D_RF_NSFT_BET_BIT_CNT_FOR_BER_CNF_T u_get_single_end_ber_cnf_param_struct;
#endif
