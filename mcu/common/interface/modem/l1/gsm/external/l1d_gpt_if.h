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
 *   l1d_gpt_if.h
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
 * 03 15 2018 yungshian.lai
 * [MOLY00313777] [Cervino] Cont Rx PCS not have signal - R3 for RXD.
 *
 * 02 02 2018 yungshian.lai
 * [MOLY00301854] [MT6793][MT6795] GSM RXD Development - LR12A.R3.MP TST part.
 *
 * 02 02 2018 yungshian.lai
 * [MOLY00301854] [MT6793][MT6795] GSM RXD Development - LR12A.R3.MP TST part.
 *
 * 09 01 2017 yungshian.lai
 * [MOLY00275140] [Bianco] 93 2G Cal Time Reduction Development - UMOLYA.
 *
 ****************************************************************************/

#ifndef __L1D_GPT_IF_H__
#define __L1D_GPT_IF_H__

/*******************************************************************************
 * Include
 ******************************************************************************/
#include "kal_general_types.h"
#include "ft_msg_l1rf.h"


/*******************************************************************************
 * Enumeration
 ******************************************************************************/
typedef enum
{
   g_sinwave_afc_get_temp_freq = RF_TEST_CMD_SINEWAVE_AFC_GET_TEMP_FREQ,  // 106
   g_set_wcoef                 = RF_TEST_CMD_SET_WCOEF,  // 107
   g_get_wcoef                 = RF_TEST_CMD_GET_WCOEF,  // 108
   g_set_txdata                = RF_TEST_CMD_SET_TXDATA,  // 109
   g_set_txdata_onemod         = RF_TEST_CMD_SET_TXDATA,  // 109
   g_set_txdata_notxpc         = RF_TEST_CMD_SET_TXDATA,  // 109
   g_set_txdata_orignal        = RF_TEST_CMD_SET_TXDATA,  // 109
   
   g_get_txdata                = RF_TEST_CMD_GET_TXDATA,  // 110
   g_get_txdata_onemod         = RF_TEST_CMD_GET_TXDATA,  // 110
   g_get_txdata_notxpc         = RF_TEST_CMD_GET_TXDATA,  // 110
   g_get_txdata_orignal        = RF_TEST_CMD_GET_TXDATA,  // 110
   
#if IS_2G_RXD_SUPPORT
   g_get_rxd_info_v5           = RF_TEST_CMD_GET_RXD_INFO_V5,  // 113

   g_set_rxdata_all            = RF_TEST_CMD_SET_RXDATA_V5,  // 114
   g_set_rxdata_partial        = RF_TEST_CMD_SET_RXDATA_V5,  // 114
   g_set_rxdata_orignal        = RF_TEST_CMD_SET_RXDATA_V5,  // 114

   g_get_rxdata_all            = RF_TEST_CMD_GET_RXDATA_V5,  // 115
   g_get_rxdata_partial        = RF_TEST_CMD_GET_RXDATA_V5,  // 115
   g_get_rxdata_orignal        = RF_TEST_CMD_GET_RXDATA_V5,  // 115

   g_rx_gain_calculate         = RF_TEST_CMD_RX_GAIN_CALCULATE_V5, //126
#endif

   g_test_command_1            = RF_TEST_CMD_GP_TOOL_COMMAND_START,
   g_test_command_2,
   g_test_command_3,
   g_test_command_4,
#if IS_2G_RXD_SUPPORT
   g_test_rftool_set_path,
#endif
   /* --------------- please add new command posterior to this line --------------- */
   
}ft_rf_test_req_id_cmd_enum_type;


/*******************************************************************************
 * Legacy RF Tool Commands
 ******************************************************************************/



/* --------------- please add new command structure posterior to this line --------------- */

/*******************************************************************************
 * GP RF Tool Commands I (for existing GL1 commands shown on GP tool UI)
 ******************************************************************************/

/* ---------------------------------------------- *\
|* RF Test CMD no Req Param *|
\* ------------------------------------------------------------------------------------ */
typedef struct
{
   kal_uint8 void_param;
}RfTestCmd_NoParam;

typedef struct
{
   kal_uint32  void_result;
} RfTestCmd_DefaultCnfParam;


/* ---------------------------------------------- *\
|* Use Sinwave AFC Get Freq & Temperature Command *|
\* ------------------------------------------------------------------------------------ */
typedef RfTestCmdSinewaveAfcGetTempFreq         g_sinwave_afc_get_temp_freq_req_param_struct;
typedef RfTestResultSinewaveAfcGetTempFreq      g_sinwave_afc_get_temp_freq_cnf_param_struct;


/* ---------------------------------------------- *\
|* SET Wcoef Command *|
\* ------------------------------------------------------------------------------------ */
typedef struct
{
   kal_bool is_uplate_to_NVRAM;
}RfTestCmd_SetWcoef_ReqParam_GpTool;

typedef struct
{
   kal_uint8 nvramAccessResult;
}RfTestCmd_SetGetWcoef_CnfParam_GpTool;

typedef RfTestCmd_SetWcoef_ReqParam_GpTool            g_set_wcoef_req_param_struct;
typedef RfTestCmdSetGetWcoefPdu                          g_set_wcoef_req_pdu_struct;
typedef RfTestCmd_SetGetWcoef_CnfParam_GpTool            g_set_wcoef_cnf_param_struct;
//typedef RfTestCmdParam               g_set_wcoef_req_param_struct;
//typedef RfTestResultParam            g_set_wcoef_cnf_param_struct;

/* ---------------------------------------------- *\
|* GET Wcoef Command *|
\* ------------------------------------------------------------------------------------ */
typedef RfTestCmd_NoParam            g_get_wcoef_req_param_struct;
typedef RfTestCmdSetGetWcoefPdu         g_get_wcoef_cnf_pdu_struct;
//typedef RfTestCmd_DefaultCnfParam         g_get_wcoef_cnf_param_struct;
typedef RfTestCmd_SetGetWcoef_CnfParam_GpTool         g_get_wcoef_cnf_param_struct;




/* ---------------------------------------------- *\
|* SET Tx Command *|
\* ------------------------------------------------------------------------------------ */
typedef struct
{
   L1_Ramptable_Type1_T             type1_ramptable_pdu[8];
   L1_EPSK_InterRamptable_Type2_T   type2_epsk_interramptable_pdu[4];
   L1_Txpc_Type3_T                  type3_txpc_pdu[2];
   //L1_RFSpecialCoef_Type4_T         type4_rfspecialcoef_pdu;
   L1_EpskPA_Type4_T                type4_epskpa_pdu;
}RfTestCmdSetTxDataReqPdu_GpTool;

typedef RfTestCmdSetTxDataReqParam         g_set_txdata_req_param_struct;
//typedef RfTestCmdSetTxDataReqPdu           g_set_txdata_cnf_pdu_struct;
typedef RfTestCmdSetTxDataReqPdu_GpTool    g_set_txdata_req_pdu_struct;
typedef RfTestCmdSetTxDataCnfParam         g_set_txdata_cnf_param_struct;



/* ---------------------------------------------- *\
|* SET Tx Command One Modulation *|
\* ------------------------------------------------------------------------------------ */
typedef struct
{
   L1_Ramptable_Type1_T             type1_ramptable_pdu[4];
   L1_EPSK_InterRamptable_Type2_T   type2_epsk_interramptable_pdu[2];
   L1_Txpc_Type3_T                  type3_txpc_pdu[1];
   //L1_RFSpecialCoef_Type4_T         type4_rfspecialcoef_pdu;
   L1_EpskPA_Type4_T                type4_epskpa_pdu;
}RfTestCmdSetTxDataReqPdu_onemod_GpTool;

typedef RfTestCmdSetTxDataReqParam                g_set_txdata_onemod_req_param_struct;
typedef RfTestCmdSetTxDataReqPdu_onemod_GpTool    g_set_txdata_onemod_req_pdu_struct;
typedef RfTestCmdSetTxDataCnfParam                g_set_txdata_onemod_cnf_param_struct;



/* ---------------------------------------------- *\
|* SET Tx Command No TXPC *|
\* ------------------------------------------------------------------------------------ */
typedef struct
{
   L1_Ramptable_Type1_T             type1_ramptable_pdu[5];
   L1_EPSK_InterRamptable_Type2_T   type2_epsk_interramptable_pdu[3];
   //L1_Txpc_Type3_T                  type3_txpc_pdu[1];
   L1_EpskPA_Type4_T                type4_epskpa_pdu;
}RfTestCmdSetTxDataReqPdu_notxpc_GpTool;

typedef RfTestCmdSetTxDataReqParam              g_set_txdata_notxpc_req_param_struct;
typedef RfTestCmdSetTxDataReqPdu_notxpc_GpTool    g_set_txdata_notxpc_req_pdu_struct;
typedef RfTestCmdSetTxDataCnfParam              g_set_txdata_notxpc_cnf_param_struct;



/* ---------------------------------------------- *\
|* SET Tx Command Orignal *|
\* ------------------------------------------------------------------------------------ */
typedef RfTestCmdSetTxDataReqParam              g_set_txdata_orignal_req_param_struct;
typedef RfTestCmdSetTxDataReqPdu                g_set_txdata_orignal_req_pdu_struct;
typedef RfTestCmdSetTxDataCnfParam              g_set_txdata_orignal_cnf_param_struct;


//******************************************************************************************************************//


/* ---------------------------------------------- *\
|* GET Tx Command *|
\* ------------------------------------------------------------------------------------ */
typedef struct
{
   L1_Ramptable_Type1_T             type1_ramptable_pdu[8];
   L1_EPSK_InterRamptable_Type2_T   type2_epsk_interramptable_pdu[4];
   L1_Txpc_Type3_T                  type3_txpc_pdu[2];
   L1_EpskPA_Type4_T                type4_epskpa_pdu;
}RfTestCmdGetTxDataCnfPdu_GpTool;  //RfTestCmdGetTxDataCnfPdu

typedef RfTestCmdGetTxDataReqParam              g_get_txdata_req_param_struct;
typedef RfTestCmdGetTxDataCnfPdu_GpTool         g_get_txdata_cnf_pdu_struct;
typedef RfTestCmdGetTxDataCnfParam              g_get_txdata_cnf_param_struct;



/* ---------------------------------------------- *\
|* GET Tx Command One Modulation *|
\* ------------------------------------------------------------------------------------ */
typedef struct
{
   L1_Ramptable_Type1_T             type1_ramptable_pdu[4];
   L1_EPSK_InterRamptable_Type2_T   type2_epsk_interramptable_pdu[2];
   L1_Txpc_Type3_T                  type3_txpc_pdu[1];
   L1_EpskPA_Type4_T                type4_epskpa_pdu;
}RfTestCmdGetTxDataCnfPdu_onemod_GpTool;  //RfTestCmdGetTxDataCnfPdu

typedef RfTestCmdGetTxDataReqParam                g_get_txdata_onemod_req_param_struct;
typedef RfTestCmdGetTxDataCnfPdu_onemod_GpTool    g_get_txdata_onemod_cnf_pdu_struct;
typedef RfTestCmdGetTxDataCnfParam                g_get_txdata_onemod_cnf_param_struct;


/* ---------------------------------------------- *\
|* GET Tx Command No TXPC *|
\* ------------------------------------------------------------------------------------ */
typedef struct
{
   L1_Ramptable_Type1_T             type1_ramptable_pdu[5];
   L1_EPSK_InterRamptable_Type2_T   type2_epsk_interramptable_pdu[3];
   //L1_Txpc_Type3_T                  type3_txpc_pdu[2];
   L1_EpskPA_Type4_T                type4_epskpa_pdu;
}RfTestCmdGetTxDataCnfPdu_notxpc_GpTool;  //RfTestCmdGetTxDataCnfPdu

typedef RfTestCmdGetTxDataReqParam                g_get_txdata_notxpc_req_param_struct;
typedef RfTestCmdGetTxDataCnfPdu_notxpc_GpTool    g_get_txdata_notxpc_cnf_pdu_struct;
typedef RfTestCmdGetTxDataCnfParam                g_get_txdata_notxpc_cnf_param_struct;


/* ---------------------------------------------- *\
|* GET Tx Command Orignal *|
\* ------------------------------------------------------------------------------------ */
typedef RfTestCmdGetTxDataReqParam                g_get_txdata_orignal_req_param_struct;
typedef RfTestCmdGetTxDataCnfPdu                  g_get_txdata_orignal_cnf_pdu_struct;
typedef RfTestCmdGetTxDataCnfParam                g_get_txdata_orignal_cnf_param_struct;



//******************************************************************************************************************//


#if IS_2G_RXD_SUPPORT
/* ---------------------------------------------- *\
|* GET RXD Info *|
\* ------------------------------------------------------------------------------------ */
typedef struct
{
   kal_bool  ok;    //RfTestResultParam
}RfTestCmdGetRXDInfoCnfParam_GPTool;

typedef RfTestCmd_NoParam                       g_get_rxd_info_v5_req_param_struct;
typedef RfTestCmdCalInfoV5AllBandCnfPdu_T       g_get_rxd_info_v5_cnf_pdu_struct;
typedef RfTestCmdGetRXDInfoCnfParam_GPTool      g_get_rxd_info_v5_cnf_param_struct;

//******************************************************************************************************************//


/* ---------------------------------------------- *\
|* SET Rx Command all *|
\* ------------------------------------------------------------------------------------ */
typedef struct
{
   L1_SetGetRxPathLossEntry_Type1_T  type1_rxpathloss_pdu[8];
   L1_Wcoef_Type2_T                  type2_wcoef_pdu[2];
}RfTestCmdSetRxDataReqPdu_GpTool;

typedef RfTestCmdSetRxDataReqParam         g_set_rxdata_all_req_param_struct;
//typedef RfTestCmdSetRxDataReqPdu           g_set_rxdata_cnf_pdu_struct;
typedef RfTestCmdSetRxDataReqPdu_GpTool    g_set_rxdata_all_req_pdu_struct;
typedef RfTestCmdSetRxDataCnfParam         g_set_rxdata_all_cnf_param_struct;


/* ---------------------------------------------- *\
|* SET Rx Command RXM or RXD only *|
\* ------------------------------------------------------------------------------------ */
typedef struct
{
   L1_SetGetRxPathLossEntry_Type1_T  type1_rxpathloss_pdu[4];
   L1_Wcoef_Type2_T                  type2_wcoef_pdu[1];
}RfTestCmdSetRxDataReqPdu_partial_GpTool;

typedef RfTestCmdSetRxDataReqParam                g_set_rxdata_partial_req_param_struct;
typedef RfTestCmdSetRxDataReqPdu_partial_GpTool   g_set_rxdata_partial_req_pdu_struct;
typedef RfTestCmdSetRxDataCnfParam                g_set_rxdata_partial_cnf_param_struct;

/* ---------------------------------------------- *\
|* SET Rx Command Orignal *|
\* ------------------------------------------------------------------------------------ */
typedef RfTestCmdSetRxDataReqParam              g_set_rxdata_orignal_req_param_struct;
typedef RfTestCmdSetRxDataReqPdu                g_set_rxdata_orignal_req_pdu_struct;
typedef RfTestCmdSetRxDataCnfParam              g_set_rxdata_orignal_cnf_param_struct;

//******************************************************************************************************************//

/* ---------------------------------------------- *\
|* GET Rx Command All*|
\* ------------------------------------------------------------------------------------ */
typedef struct
{
   L1_SetGetRxPathLossEntry_Type1_T  type1_rxpathloss_pdu[8];
   L1_Wcoef_Type2_T                  type2_wcoef_pdu[2];
}RfTestCmdGetRxDataCnfPdu_GpTool;  //RfTestCmdGetRxDataCnfPdu

typedef RfTestCmdGetRxDataReqParam              g_get_rxdata_all_req_param_struct;
typedef RfTestCmdGetRxDataCnfPdu_GpTool         g_get_rxdata_all_cnf_pdu_struct;
typedef RfTestCmdGetRxDataCnfParam              g_get_rxdata_all_cnf_param_struct;

/* ---------------------------------------------- *\
|* GET Rx Command Partial *|
\* ------------------------------------------------------------------------------------ */
typedef struct
{
   L1_SetGetRxPathLossEntry_Type1_T  type1_rxpathloss_pdu[4];
   L1_Wcoef_Type2_T                  type2_wcoef_pdu[1];
}RfTestCmdGetRxDataCnfPdu_partial_GpTool;  //RfTestCmdGetRxDataCnfPdu

typedef RfTestCmdGetRxDataReqParam                 g_get_rxdata_partial_req_param_struct;
typedef RfTestCmdGetRxDataCnfPdu_partial_GpTool    g_get_rxdata_partial_cnf_pdu_struct;
typedef RfTestCmdGetRxDataCnfParam                 g_get_rxdata_partial_cnf_param_struct;

/* ---------------------------------------------- *\
|* GET Rx Command Orignal *|
\* ------------------------------------------------------------------------------------ */
typedef RfTestCmdGetRxDataReqParam                g_get_rxdata_orignal_req_param_struct;
typedef RfTestCmdGetRxDataCnfPdu                  g_get_rxdata_orignal_cnf_pdu_struct;
typedef RfTestCmdGetRxDataCnfParam                g_get_rxdata_orignal_cnf_param_struct;

//******************************************************************************************************************//


/* ---------------------------------------------- *\
|* GET Rx Gain Calculate value *|
\* ------------------------------------------------------------------------------------ */
typedef RfTestCmdRxGainCalculate_V5        g_rx_gain_calculate_req_param_struct;
typedef RfTestResultRxGainCalculate_V5     g_rx_gain_calculate_cnf_param_struct;
//******************************************************************************************************************//
#endif  //#if IS_2G_RXD_SUPPORT

/*******************************************************************************
 * GP RF Tool Commands
 ******************************************************************************/

/* ------------------ *\
|* G_TEST_COMMAND_1 *|
\* ------------------ */
//PDU: ReqPdu, X
typedef struct
{
   kal_uint16 req_param1;
   kal_uint16 req_param2;
   kal_uint16 req_param3;
} g_test_command_1_req_param_struct;

typedef struct
{
   kal_uint16 req_pdu1;
   kal_uint16 req_pdu2;
   kal_uint16 req_pdu3;
} g_test_command_1_req_pdu_struct;

typedef struct
{
   kal_uint16 cnf_param1;
   kal_uint16 cnf_param2;
   kal_uint16 cnf_param3;
} g_test_command_1_cnf_param_struct;


/* ------------------ *\
|* G_TEST_COMMAND_2 *|
\* ------------------ */
//PDU: ReqPdu, CnfPdu
typedef struct
{
   kal_uint16 req_param1;
   kal_uint16 req_param2;
   kal_uint16 req_param3;
} g_test_command_2_req_param_struct;

typedef struct
{
   kal_uint16 req_pdu1;
   kal_uint16 req_pdu2;
   kal_uint16 req_pdu3;
} g_test_command_2_req_pdu_struct;

typedef struct
{
   kal_uint16 cnf_param1;
   kal_uint16 cnf_param2;
   kal_uint16 cnf_param3;
} g_test_command_2_cnf_param_struct;

typedef struct
{
   kal_uint16 cnf_pdu1;
   kal_uint16 cnf_pdu2;
   kal_uint16 cnf_pdu3;
} g_test_command_2_cnf_pdu_struct;


/* ------------------ *\
|* G_TEST_COMMAND_3 *|
\* ------------------ */
//PDU: X, CnfPdu
typedef struct
{
   kal_uint16 req_param1;
   kal_uint16 req_param2;
   kal_uint16 req_param3;
} g_test_command_3_req_param_struct;

typedef struct
{
   kal_uint16 cnf_param1;
   kal_uint16 cnf_param2;
   kal_uint16 cnf_param3;
} g_test_command_3_cnf_param_struct;

typedef struct
{
   kal_uint16 cnf_pdu1;
   kal_uint16 cnf_pdu2;
   kal_uint16 cnf_pdu3;
} g_test_command_3_cnf_pdu_struct;


/* ------------------ *\
|* G_TEST_COMMAND_4 *|
\* ------------------ */
//PDU: X, X
typedef struct
{
   kal_uint16 req_param1;
   kal_uint16 req_param2;
   kal_uint16 req_param3;
} g_test_command_4_req_param_struct;

typedef struct
{
   kal_uint16 cnf_param1;
   kal_uint16 cnf_param2;
   kal_uint16 cnf_param3;
} g_test_command_4_cnf_param_struct;


#if IS_2G_RXD_SUPPORT
/* ---------------------- *\
|* G_TEST_RFTOOL_SET_PATH *|
\* ---------------------- */
//PDU: X, X
typedef struct
{
   FrequencyBand     req_band;
   GSM_AntDimension  req_path; //GSM_ANT_MASK_RXM
} g_test_rftool_set_path_req_param_struct;

typedef struct
{
   kal_uint16 cnf_ok;
} g_test_rftool_set_path_cnf_param_struct;
#endif //#if IS_2G_RXD_SUPPORT

#endif
