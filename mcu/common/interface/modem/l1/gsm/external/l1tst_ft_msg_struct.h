/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2005
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
 *
 * Filename:
 * ---------
 *   l1tst_ft_msg_struct.h
 *
 * Project:
 * --------
 *   MT6291
 *
 * Description:
 * ------------
 *   Struct definition of L1TST - FT interface
 *
 * Author:
 * -------
 * -------
 *
 *------------------------------------------------------------------------------
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 *
 * removed!
 * removed!
 *
 * removed!
 * removed!
 *
 * removed!
 * removed!
 *
 * removed!
 * removed!
 *
 * removed!
 * removed!
 *
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 *******************************************************************************/

#ifndef _L1TST_FT_MSG_STRUCT_H_
#define _L1TST_FT_MSG_STRUCT_H_
#include "l1_types_public.h"
//#if IS_2G_RXD_SUPPORT
#include "ft_msg_common.h"  //For L1D read RXD Info struct
//#endif

/*************************************************************************
* Include Statements for PLTABLE_SIZE
 *************************************************************************/
#include "l1cal.h"


/*******************************************************************************
*
*  Data structures used in Message Definition
*
*******************************************************************************/

typedef enum
{
     FT_RF_PWR_STATE_UNKNOWN = -1,
     FT_RF_PWR_STATE_ON,
     FT_RF_PWR_STATE_OFF,
}ft_rf_power_state_enum;

typedef enum
{
    RF_TEST_CMD_PM = 0
    ,RF_TEST_CMD_AFC = 1
    ,RF_TEST_CMD_NB_TX = 2
    ,RF_TEST_CMD_CONTINUOUS_RX = 3
    ,RF_TEST_CMD_CONTINUOUS_TX = 4
    ,RF_TEST_CMD_SET_BB_TX_CFG = 5  //phase out
    ,RF_TEST_CMD_BAND_SEL = 6
    ,RF_TEST_CMD_STOP = 7
    ,RF_TEST_CMD_MULTISLOT_TX = 8
    ,RF_TEST_CMD_SET_RAMPAPCLVL = 9
    ,RF_TEST_CMD_SET_AFCDACVALUE = 10 //phase out
    ,RF_TEST_CMD_SET_BBTXCFG2 = 11    //phase out
    ,RF_TEST_CMD_GET_BBTXCFG2 = 12    //phase out
    ,RF_TEST_CMD_SET_CRYSTAL_CFG = 13
    ,RF_TEST_CMD_BBTX_AUTOCAL = 14    //phase out
    ,RF_TEST_CMD_QUERY_MS_CAPABILITY = 15
    ,RF_TEST_CMD_SET_RAMPTABLE = 16
    ,RF_TEST_CMD_SET_AFC_SINWAVE_DETECTION = 17
    ,RF_TEST_CMD_MULTISLOT_TX_EX = 18
    ,RF_TEST_CMD_EPSK_SET_RAMPAPCLVL = 19
    ,RF_TEST_CMD_GET_RFID = 20
    ,RF_TEST_CMD_SET_IMMEDIATE_BSI = 21
    ,RF_TEST_CMD_GET_IMMEDIATE_BSI = 22
    ,RF_TEST_CMD_SET_SPECIALCOEF = 23  //phase out
    ,RF_TEST_CMD_CONTINUOUS_TX_EX = 24
    ,RF_TEST_CMD_SET_BBTXCFG3 = 25  //phase out
    ,RF_TEST_CMD_GET_BBTXCFG3 = 26  //phase out
    ,RF_TEST_CMD_IF_TWO_APC_DC_OFFSET_SUPPORT = 27
    ,RF_TEST_CMD_CONTINUOUS_TX_EX2 = 28
    ,RF_TEST_CMD_QUERY_MS_CAPABILITY_EX = 29
    ,RF_TEST_CMD_GET_AFCDACVALUE_AT_RTX_OFFSET_CAL = 30
    ,RF_TEST_CMD_SET_BBTXCFG4 = 31  //phase out
    ,RF_TEST_CMD_GET_BBTXCFG4 = 32  //phase out
    ,RF_TEST_CMD_SET_BBTXCFG5 = 33  //phase out
    ,RF_TEST_CMD_GET_BBTXCFG5 = 34  //phase out
    ,RF_TEST_CMD_CALIBRATE_32K = 35
    ,RF_TEST_CMD_QUERY_MS_CAPABILITY_EX2 = 36
    ,RF_TEST_CMD_START_FDT_DL_WAIT_RESULT_50P = 37    // including AFC and RX pathloss: downlink  //RF_TEST_CMD_START_FDT_DL
    ,RF_TEST_CMD_START_FDT_UL_50P = 38    // APC calibration :uplink   //RF_TEST_CMD_START_FDT_UL
    ,RF_TEST_CMD_EPSK_SET_RAMPTABLE = 39  //phase out
    ,RF_TEST_CMD_GET_AFC_DAC_OFFSET = 40  //phase out
    ,RF_TEST_CMD_SET_AFC_DAC_OFFSET = 41  //phase out
    ,RF_TEST_CMD_SET_BBTXCFG6 = 42  //phase out
    ,RF_TEST_CMD_GET_BBTXCFG6 = 43  //phase out
    ,RF_TEST_CMD_GET_FDT_RESULT_50P = 44   //RF_TEST_CMD_GET_FDT_RESULT
    ,RF_TEST_CMD_START_FDT_DL_NOT_WAIT_RESULT_50P = 45
    ,RF_TEST_CMD_NSFT_CHANGE_SETTING = 46
    ,RF_TEST_CMD_NSFT_START = 47
    ,RF_TEST_CMD_NSFT_STOP = 48
    ,RF_TEST_CMD_NSFT_CHANGE_POWER = 49 //phase out?
    ,RF_TEST_CMD_NSFT_START_EPSK_TX = 50
    ,RF_TEST_CMD_OE_PATTERN_READY = 51
    ,RF_TEST_CMD_POWER_ON = 52
    ,RF_TEST_CMD_POWER_OFF = 53
    ,RF_TEST_CMD_QUERY_POWER_STATE_IN_FT = 54 //phase out?
    ,RF_TEST_CMD_AFC_TYPE_QUERY_READY = 55
    ,RF_TEST_CMD_SET_TX_POWER_ROLLBACK_GMSK = 56
    ,RF_TEST_CMD_SET_TX_POWER_ROLLBACK_EPSK = 57
    ,RF_TEST_CMD_SET_TX_POWER_ROLLBACK_TABLE_GMSK = 58  //phase out
    ,RF_TEST_CMD_SET_TX_POWER_ROLLBACK_TABLE_EPSK = 59  //phase out
    ,RF_TEST_CMD_GET_SPECIALCOEF = 60
    ,RF_TEST_CMD_NSFT_CONFIG_SBER = 61
    ,RF_TEST_CMD_NSFT_GET_SBER = 62
    ,RF_TEST_CMD_NSFT_START_RXLEV = 63
    ,RF_TEST_CMD_NSFT_GET_RXLEV = 64
    ,RF_TEST_CMD_NSFT_GET_RXQUAL = 65
    ,RF_TEST_CMD_IF_PM = 66
    ,RF_TEST_CMD_GET_TXPC_PD_VALUE_BY_PCL_GMSK = 67  //phase out
    ,RF_TEST_CMD_GET_TXPC_PD_VALUE_BY_PCL_EPSK = 68  //phase out
    ,RF_TEST_CMD_GET_TXPC_PD_VALUE_GMSK = 69  //phase out
    ,RF_TEST_CMD_GET_TXPC_PD_VALUE_EPSK = 70  //phase out
    ,RF_TEST_CMD_GET_TXPC_SUBBAND_GMSK = 71   //phase out
    ,RF_TEST_CMD_GET_TXPC_SUBBAND_EPSK = 72   //phase out
    ,RF_TEST_CMD_GET_TXPC_TEMPERATURE = 73
    ,RF_TEST_CMD_QUERY_MS_CAPABILITY_EX3 = 74
    /* [LPM CAL] */
    ,RF_TEST_CMD_SET_DCXO_POWER_MODE = 75               //32k Less
    ,RF_TEST_CMD_START_FDT_DL_NOT_WAIT_RESULT_LPM_50P = 76   //32k Less, Check func is False, open if need  //RF_TEST_CMD_START_FDT_DL_NOT_WAIT_RESULT_EX
    ,RF_TEST_CMD_GET_FDT_RESULT_LPM_50P = 77                 //32k Less, Check func is False, open if need  //RF_TEST_CMD_GET_FDT_RESULT_EX
    ,RF_TEST_CMD_SET_EDGE_TX_OCT_PA_SPECIAL_COEF = 78
    ,RF_TEST_CMD_TXPC_CL_RESET_PD_DATA = 79       /**< \brief reset TX power control close loop pd value */
    ,RF_TEST_CMD_START_FDT_DL_WAIT_RESULT_100P = 80   //RF_TEST_CMD_START_FDT_DL_BIG
    ,RF_TEST_CMD_START_FDT_UL_100P = 81   //RF_TEST_CMD_START_FDT_UL_BIG
    ,RF_TEST_CMD_GET_FDT_RESULT_100P = 82   //RF_TEST_CMD_GET_FDT_RESULT_BIG
    ,RF_TEST_CMD_START_FDT_DL_NOT_WAIT_RESULT_100P = 83  //RF_TEST_CMD_START_FDT_DL_NOT_WAIT_RESULT_BIG
    ,RF_TEST_CMD_START_FDT_DL_NOT_WAIT_RESULT_LPM_100P = 84   //32k Less,  //RF_TEST_CMD_START_FDT_DL_NOT_WAIT_RESULT_EX_BIG
    ,RF_TEST_CMD_GET_FDT_RESULT_LPM_100P = 85                 //32k Less, Check func is False, open if need  //RF_TEST_CMD_GET_FDT_RESULT_EX_BIG
    ,RF_TEST_CMD_MULTISLOT_TX_WITH_AUXADC_READ = 86          /**< \brief TX RF on and read AuxADC at same time for CoTsx */ 
    ,RF_TEST_CMD_GAIN_RF_TX = 87         //Marked, open if need      /**< \brief EDGE TX gain rf cal */ 
    ,RF_TEST_CMD_QUERY_GAIN_RF_NUM = 88  //Marked, open if need      /**< \brief Query gain rf target support number (max: 20)*/ 
    ,RF_TEST_CMD_GET_BB_POWER_LIST = 89  //Marked, open if need      /**< \brief Get BB power list from target */ 
    ,RF_TEST_CMD_CHECK_IF_FUNC_EXIST = 90         /**< \brief Reserved. META DLL not send directly */
    ,RF_TEST_CMD_GET_TEMPERATURE_INFO = 91
    ,RF_TEST_CMD_SET_DT_PATH_FLAG = 92            /**< \brief Set L1 flag to use second path */ 
    ,RF_TEST_CMD_LIST_MODE_NSFT_START = 93        /**< \brief 2G list mode nsft*/ 
    ,RF_TEST_CMD_START_FDT_UL_512P = 94         /** reduce UL CMD round trip number*/  //RF_TEST_CMD_START_FDT_UL_BIG_V2
    ,RF_TEST_CMD_START_FDT_DL_WAIT_RESULT_LPM_512P = 95      /** For sawless lna mode and reduce DL CMD round trip number*/ 
    ,RF_TEST_CMD_START_FDT_DL_NOT_WAIT_RESULT_LPM_512P = 96  /** For sawless lna mode and reduce DL CMD round trip number*/  //RF_TEST_CMD_START_FDT_DL_NOT_WAIT_RESULT_EX_BIG_V2
    ,RF_TEST_CMD_GET_FDT_RESULT_LPM_512P = 97               /** For sawless lna mode and reduce DL CMD round trip number*/ 
    ,RF_TEST_CMD_SAWLESS_PM = 98   /** Force LTF on - for sawless lna mode in trad calibration*/ 
    ,RF_TEST_CMD_SET_RX_PATH_LOSS = 99    /** FT Set data to runtime var, use flag to decide whether to update NVRAM or not*/ 
    ,RF_TEST_CMD_GET_RX_PATH_LOSS = 100   /** FT Get data from runtime var (because runtime var==NVRAM)*/ 
    ,RF_TEST_CMD_SET_RX_PATH_LOSS_V3 = 101  //For 93 SET_RX_PATH_LOSS  elna+g6, elna bypass+g1   /** FT Set data to runtime var, use flag to decide whether to update NVRAM or not*/ 
    ,RF_TEST_CMD_GET_RX_PATH_LOSS_V3 = 102  //For 93 GET_RX_PATH_LOSS  elna+g6, elna bypass+g1   /** FT Get data from runtime var (because runtime var==NVRAM)*/ 
    ,RF_TEST_CMD_START_FDT_DL_NOT_WAIT_RESULT_LPM_512P_V3 = 103 //Add New CMD, For 6293 compatible with 92 tool procedure - RFTestCmdDTS_Lpm_512P_V3
    ,RF_TEST_CMD_START_FDT_DL_WAIT_RESULT_LPM_512P_V3 = 104    //Add New CMD, For 6293 compatible with 92 tool procedure (previous CMD)
    ,RF_TEST_CMD_GET_FDT_RESULT_LPM_512P_V3 = 105            //Add New CMD, For 6293 compatible with 92 tool procedure (previous CMD)
    ,RF_TEST_CMD_SINEWAVE_AFC_GET_TEMP_FREQ = 106   /*For GPS co-clock V2.0, use this CMD to get temperature and freq offset*/
    ,RF_TEST_CMD_SET_WCOEF = 107        //Cal time reduction development - Wcoef part
    ,RF_TEST_CMD_GET_WCOEF = 108        //Cal time reduction development - Wcoef part
    ,RF_TEST_CMD_SET_TXDATA = 109        //Cal time reduction development - Tx part
    ,RF_TEST_CMD_GET_TXDATA = 110        //Cal time reduction development - Tx part
    ,RF_TEST_CMD_GET_TPO_VALUE = 111    // For NSFT Adjust TPO support
    ,RF_TEST_CMD_SET_TPO_VALUE = 112     // For NSFT Adjust TPO support
    ,RF_TEST_CMD_GET_RXD_INFO_V5 = 113  //Gen95:  Get Rx DL Power or ELNA Type info
    ,RF_TEST_CMD_SET_RXDATA_V5 = 114  //RF_TEST_CMD_SET_RX_PATH_LOSS_V5
    ,RF_TEST_CMD_GET_RXDATA_V5 = 115  //RF_TEST_CMD_SET_RX_PATH_LOSS_V5
    ,RF_TEST_CMD_START_FDT_DL_NOT_WAIT_RESULT_LPM_512P_V5 = 116  //Gen95: RFTestCmdDTS_Lpm_512P_V5
    ,RF_TEST_CMD_START_FDT_DL_WAIT_RESULT_LPM_512P_V5 = 117   //Gen95: RFTestCmdDTS_Lpm_512P_V5
    ,RF_TEST_CMD_GET_FDT_RESULT_LPM_512P_V5 = 118
    ,RF_TEST_CMD_PM_V5 = 119 // Gen95: Trad Cal
    ,RF_TEST_CMD_IF_PM_V5 = 120  // Gen95: RF Tool & Trad Cal
    ,RF_TEST_CMD_CONTINUOUS_RX_V5 = 121  // Gen95: RF Tool & Trad Cal
    ,RF_TEST_CMD_NSFT_START_V5 = 122   // Gen95
    ,RF_TEST_CMD_NSFT_GET_RXLEV_V5 =123 // Gen95
    ,RF_TEST_CMD_NSFT_CHANGE_SETTING_V5 = 124 // Gen95
    ,RF_TEST_CMD_LIST_MODE_NSFT_START_V5 = 125  // Gen95
    ,RF_TEST_CMD_RX_GAIN_CALCULATE_V5 = 126  // Gen95

    //Remember to add req/result param to FT_GL1TST_UnionTag.txt  & add CMD to CheckFunction
    /*----------------------------------------------------------------------------------------------------*/
    ,RF_TEST_CMD_GP_TOOL_COMMAND_START
    ,RF_TEST_CMD_END
    ,RF_TEST_CMD_MAX                     = 0x7FFFFFFF
} RfTestCmdType;

typedef enum {
    MS_GSM = 0
    ,MS_GPRS
    ,MS_EGPRS_RX_ONLY
    ,MS_EGPRS_FULL_FUNCTION
} MS_CAPABILITY_E;

typedef struct
{
  ARFCN               arfcn;
  kal_int8            sampleNoPerFrame;
  /* Resoultion can be up to RSSI_RESOLUTION_BITS bits*/
  Gain                gain;
  kal_int16           frames;
} RfTestCmdPm;

typedef struct
{
   ARFCN              arfcn;
   kal_int16          dacValue;
   /* Resoultion can be up to RSSI_RESOLUTION_BITS bits*/
   Gain               gain;
   kal_int16          testNumber;
} RfTestCmdAfc;

typedef struct
{
   ARFCN           arfcn;
   BSIC          bsic;
   kal_int8      bitmask;
   Power           txPowerLev;
   kal_int16       frames;
   kal_int16     dacValue;
   APCTxPattern  burstTypeNB;
} RfTestCmdNbTx;

typedef struct
{
   ARFCN           arfcn;
   /* Resoultion can be up to RSSI_RESOLUTION_BITS bits*/
   Gain          gain;
   kal_bool      onOff;
} RfTestCmdContRx;

typedef struct
{
   ARFCN            arfcn;
   ContTxPattern  pattern;
   kal_bool       onOff;
} RfTestCmdContTx;

typedef struct {
   kal_int8         TxTrimI;
   kal_int8         TxTrimQ;
   kal_int8         TxOffsetI;
   kal_int8         TxOffsetQ;
} RfTestCmdSetBBTXCfg;

typedef struct {
   kal_int8         TxTrimI;
   kal_int8         TxTrimQ;
   kal_int8         TxOffsetI;
   kal_int8         TxOffsetQ;
   kal_int8         TxCalbias;
   kal_int8         TxIQSwap;
   kal_int8         TxCMV;
   kal_int8         TxGain;
   kal_int8         TxCalrcsel;
} RfTestCmdSetBBTXCfg2;

typedef struct {
    ARFCN           arfcn;
    BSIC            bsic;
    kal_int8        timeSlotmask;
    Power           powerLev[4];
    CodingScheme    cs[4];
    TimingAdvance   ta;
    kal_int32       frames;
    kal_int16       dacValue;
} RfTestCmdMultiSlotTX;

typedef struct {
    kal_int32       rf_band;
    kal_int32       power_level;
    kal_int32       apc_dac;
} RfTestCmdSetRampApcLevel;

typedef struct {
    kal_int16       dacValue;
} RfTestCmdSetAfcDacValue;

typedef struct {
    kal_int32       cap_id;
} RfTestCmdSetCrystalCfg;

typedef struct {
    kal_int32       rf_band;
} RfTestCmdSetRampTable;

typedef struct {
    kal_bool        is_sinwave;
} RfTestCmdSetAfcSinWave;

typedef struct {
    kal_uint32      bsi_data;
} RfTestCmdSetBSI;

typedef struct {
    kal_uint32      bsi_addr;
} RfTestCmdGetBSI;

typedef struct {
   kal_int8         TxTrimI;
   kal_int8         TxTrimQ;
   kal_int8         TxOffsetI;
   kal_int8         TxOffsetQ;
   kal_int8         TxCalbias;
   kal_int8         TxIQSwap;
   kal_int8         TxCMV;
   kal_int8         TxGain;
   kal_int8         TxCalrcsel;
   kal_int8         TxPhasesel;
} RfTestCmdSetBBTXCfg3;

typedef struct
{
    kal_int8    TxTrimI;
    kal_int8    TxTrimQ;
    kal_int8      TxOffsetI;
    kal_int8      TxOffsetQ;
    kal_int8      TxCalbias;
    kal_int8      TxIQSwap;
    kal_int8      TxCMV;
    kal_int8      TxGain;
    kal_int8      TxCalrcsel;
    kal_int8      TxPhasesel;
    kal_int8    TxCoarseI;
    kal_int8    TxCoarseQ;

}RfTestCmdSetBBTXCfg4;

typedef struct {
    ARFCN           arfcn;
    BSIC            bsic;
    kal_int8        timeSlotmask;
    Power           powerLev[4];
    CodingScheme    cs[4];
    TimingAdvance   ta;
    kal_int32       frames;
    kal_int16       dacValue;
    APCTxPattern    pattern;
    kal_uint16      pattern_data;
} RfTestCmdMultiSlotTXEx;

typedef struct {
    ARFCN           arfcn;
    ContTxPattern   pattern;
    kal_uint16      pattern_data;
    kal_bool        onOff;
    kal_uint16      modtype;
} RfTestCmdContTxEx;

typedef struct {
    ARFCN           arfcn;
    ContTxPattern   pattern;
    kal_uint16      pattern_data;
    kal_bool        onOff;
    kal_uint16      modtype;
    Power           powerLev;
} RfTestCmdContTxEx2;

typedef struct{
    FrequencyBand   band;
    ARFCN           BCH_ARFCN;
    ARFCN           TCH_ARFCN;
    Gain                BCH_gain;
    Gain                TCH_gain;
    TSC             tsc;
    TimeSlot            TCH_slot;
    Power           tx_power_level;
    kal_bool            is_EPSK_tx;
      CodingScheme        epsk_cs;
}RfTestCmdNSFTParam;

/** ----- 2G nsft V5 -----*/
#if IS_2G_RXD_SUPPORT
typedef struct{
    FrequencyBand   band;
    ARFCN           BCH_ARFCN;
    ARFCN           TCH_ARFCN;
    Power                BCH_DL_Power;
    Power                TCH_DL_Power;
    TSC             tsc;
    TimeSlot            TCH_slot;
    Power           tx_power_level;
    kal_bool            is_EPSK_tx;
    CodingScheme        epsk_cs;
    kal_uint8         Antenna; //GSM_AntDimension
}RfTestCmdNSFTParam_V5;
#endif
/** ----------------------*/


typedef struct{
    Power tx_power_level;
}RfTestCmdNSFTPowerChangeParam;

/** ----- 2G list mode nsft -----*/
typedef struct 
{
	kal_uint8	cmd_count;
} RfTestCmdListModeNSFTParam;

typedef struct 
{
    kal_uint8   cmd_type;
} RfTestCmdListModeNSFTCommonParam;

typedef struct 
{
    RfTestCmdListModeNSFTCommonParam common;
	kal_uint8                        band;
	kal_uint16                       arfcn; 
	kal_int16                        sync_power;
    kal_uint8                        sync_slot_offset;
} RfTestCmdListModeNSFT_Sync_REQ;

typedef struct 
{
    RfTestCmdListModeNSFTCommonParam common;
    kal_uint8                        band;
	kal_uint16                       arfcn; 
	kal_uint8                        tsc;
	kal_uint8                        trx_type;
	kal_int16                        tx_power;
} RfTestCmdListModeNSFT_Trigger_REQ;

typedef struct 
{
    RfTestCmdListModeNSFTCommonParam common;
    kal_uint8                        band;
	kal_uint16                       arfcn;
	kal_uint8                        tsc;
	kal_uint8                        trx_type;
	kal_int8                         tx_pcl[8];
	kal_int16                        rx_power;
	kal_int8                         repeat_count[8];
} RfTestCmdListModeNSFT_CHMeas_REQ;

typedef union
{
    RfTestCmdListModeNSFT_Sync_REQ    sync;
    RfTestCmdListModeNSFT_Trigger_REQ trigger;
    RfTestCmdListModeNSFT_CHMeas_REQ  test;
} RfTestCmdListModeNSFTCmdParam;

typedef struct
{ 
    RfTestCmdListModeNSFTCmdParam param[60];
} RfTestCmdListModeNSFT;
// --------------------------------- //



/** ----- 2G list mode nsft V5 -----*/
#if IS_2G_RXD_SUPPORT
//Req Param
typedef struct 
{
	kal_uint8	cmd_count;
   kal_uint8   Antenna;  // GSM_AntDimension
} RfTestCmdListModeNSFTParam_V5;


//Req Pdu
typedef struct 
{
   RfTestCmdListModeNSFTCommonParam common;
	kal_uint8                        band;
	kal_uint16                       arfcn; 
   kal_uint8                        trx_type;   //new param
	kal_int16                        sync_power;
    kal_uint8                        sync_slot_offset;
} RfTestCmdListModeNSFT_Sync_REQ_V5;

typedef RfTestCmdListModeNSFT_Trigger_REQ RfTestCmdListModeNSFT_Trigger_REQ_V5;

typedef struct 
{
   RfTestCmdListModeNSFTCommonParam common;
   kal_uint8                        band;
   kal_uint16                       arfcn;
   kal_uint8                        tsc;
   kal_uint8                        trx_type;
   kal_int8                         tx_pcl[8];
   kal_int16                        rx_power;
   kal_int8                         repeat_count[8];
} RfTestCmdListModeNSFT_CHMeas_REQ_V5;
//typedef RfTestCmdListModeNSFT_CHMeas_REQ RfTestCmdListModeNSFT_CHMeas_REQ_V5;

typedef union
{
    RfTestCmdListModeNSFT_Sync_REQ_V5    sync;
    RfTestCmdListModeNSFT_Trigger_REQ_V5 trigger;
    RfTestCmdListModeNSFT_CHMeas_REQ_V5  test;
} RfTestCmdListModeNSFTCmdParam_V5;

typedef struct
{ 
    RfTestCmdListModeNSFTCmdParam_V5 param[60];
} RfTestCmdListModeNSFT_V5;
#endif  //#if IS_2G_RXD_SUPPORT
// --------------------------------- //



// ***************************************** //
// FDT Calibration
// ***************************************** //
#define FT_MAX_STEP_CNT_50P 50
#define FT_MAX_STEP_CNT_100P 100
#define FT_MAX_STEP_CNT_512P 512

typedef struct
{
   FrequencyBand     band;
   ARFCN             arfcn;
   kal_int16         dac_value[33];
   Gain              gain;
   kal_int16         repeat_cnt; // repetitive test counts (frames) for each AFC DAC value
   kal_bool          capid_cal;  // capid calibration ctrl
   kal_bool          linear_cal; // 33 stages calibration ctrl
   //kal_int8        capid_min;  // min value for capid range when capid_cal is True; capid when capid_cal is False
   //kal_int8        capid_max;  // max value for capid range
   kal_int32         capid_min;  // min value for capid range when capid_cal is True; capid when capid_cal is False
   kal_int32         capid_max;  // max value for capid range
} RFTestCmdDSSAfc;

#define RF_TEST_CMD_DSSPL_HDR      \
   FrequencyBand       band;       \
   ARFCN               arfcn;      \
   Gain                gain[6];    \
   kal_int16           repeat_cnt; \

typedef struct
{
   //FrequencyBand       band;
   //ARFCN               arfcn;
   //Gain                gain[6];    // gain for rx slot 0/1/2/3/4/5
   //kal_int16           repeat_cnt; // repetitive test counts (frames) for each ARFCN value
   RF_TEST_CMD_DSSPL_HDR
 //kal_int16           dac_value;  // Use InitDacValue from AFC calibration when dacValue = 0 (or -1)
} RFTestCmdDSSPL;

typedef enum
{
   LNA_NULL,  //For old CMD, tool will not set gsm_lna_mode
   LNA_HIGH,
   LNA_MID,
   LNA_LOW,
   LNA_W_COEF,
   LNA_SAWLESS_MID
}RFTestCmdLNACalType;

typedef struct
{
   RF_TEST_CMD_DSSPL_HDR
   RFTestCmdLNACalType   gsm_lna_mode; //0(Null) 1(high) 2(mid) 3(low) 4(w-coef) 5(sawless mid) 6(elna+G6) 7(elna bypass+G1)
} RFTestCmdDSSPL_V2;

typedef enum
{
   LNA_NULL_V3,  //For old CMD, tool will not set gsm_lna_mode
   LNA_HIGH_V3,
   LNA_MID_V3,
   LNA_LOW_V3,
   LNA_W_COEF_V3,
   LNA_SAWLESS_MID_V3,
   ELNA_HIGH_SENSITIVITY,
   ELNA_BYPASS_LOW_MAXPIN
}RFTestCmdLNACalType_V3;

typedef struct
{
   RF_TEST_CMD_DSSPL_HDR
   RFTestCmdLNACalType_V3   gsm_lna_mode; //0(Null) 1(high) 2(mid) 3(low) 4(w-coef) 5(sawless mid) 6(elna+G6) 7(elna bypass+G1)
} RFTestCmdDSSPL_V3;

#define RF_TEST_CMD_DTS_HDR           \
     kal_bool            afc_cal;     \
     kal_bool            pl_cal;      \
     kal_int8            sync_sb_num; \
     kal_int16           power;       \
     RFTestCmdDSSAfc     AfcDSS;      

typedef struct
{
   //kal_bool            afc_cal;
   //kal_bool            pl_cal;     // Control whether Path loss calibration is needed or not
   //kal_int8            sync_sb_num; // the SB frame numbers needed for sync process before path loss calibration
   //kal_int16           power;      // the power level expected to measure from test set
   //RFTestCmdDSSAfc     AfcDSS;
   RF_TEST_CMD_DTS_HDR
   kal_int8            step_cnt;  //Still use int8, old CMD struct must the same as before
   RFTestCmdDSSPL      PathLossDSS[FT_MAX_STEP_CNT_50P-2];
} RFTestCmdDTS_50P;  

typedef struct
{
   RF_TEST_CMD_DTS_HDR
   kal_int8            step_cnt;  //Still use int8, old CMD struct must the same as before
   RFTestCmdDSSPL      PathLossDSS[FT_MAX_STEP_CNT_100P-2];
} RFTestCmdDTS_100P;  

/* [LPM CAL] */
typedef struct
{
   RF_TEST_CMD_DTS_HDR
   kal_int8            step_cnt;  //Still use int8, old CMD struct must the same as before
   RFTestCmdDSSPL      PathLossDSS[FT_MAX_STEP_CNT_50P-2];
   kal_int16           lpm_sb_num;
} RFTestCmdDTS_Lpm_50P;

typedef struct
{
    RF_TEST_CMD_DTS_HDR
    kal_int8           step_cnt;  //Still use int8, old CMD struct must the same as before
    RFTestCmdDSSPL     PathLossDSS[FT_MAX_STEP_CNT_100P-2];
    kal_int16          lpm_sb_num;
} RFTestCmdDTS_Lpm_100P;

typedef struct
{
    RF_TEST_CMD_DTS_HDR
    kal_uint16         step_cnt;  //int8 -> uint16 to match size 512
    RFTestCmdDSSPL_V2  PathLossDSS[FT_MAX_STEP_CNT_512P-2];
    kal_int16          lpm_sb_num;
} RFTestCmdDTS_Lpm_512P;

typedef struct
{
    RF_TEST_CMD_DTS_HDR
    kal_uint16         step_cnt;  //int8 -> uint16 to match size 512
    RFTestCmdDSSPL_V3  PathLossDSS[FT_MAX_STEP_CNT_512P-2];
    kal_int16          lpm_sb_num;
} RFTestCmdDTS_Lpm_512P_V3;


/* ----RF_TEST_CMD_GET_CALIBRATION_INFO_FOR_RXD_V5 ---- */
#if IS_2G_RXD_SUPPORT
typedef enum
{
   NON_ELNA,
   ELNA_BYPASS_NB_MATCH,
   ELNA_BYPASS_WB_MATCH,
   ELNA_ALWAYS_ON
} RfTestRx_Elna_Type_E;

typedef enum
{
   RX_LNA_NONE = 0, 
   RX_LNA_UTRA_HIGH = 1,
   RX_LNA_HIGH = 2,
   RX_LNA_MID = 3,
   RX_LNA_MID_SAWLESS = 4,
   RX_LNA_LOW = 5,
   RX_LNA_BYPASS_LOW = 6, //the same as GSM_RF_MAX_RX_GAIN_NUM_V5
} RfTestRx_Lna_Mode_E;

typedef enum
{
   SUPPORT_BAND_GSM400,
   SUPPORT_BAND_GSM850,
   SUPPORT_BAND_GSM900,
   SUPPORT_BAND_DCS1800,
   SUPPORT_BAND_PCS1900,
   SUPPORT_BAND_NUM
} RfTestSupportBand;  //FrequencyBand

typedef struct
{
   //FHC
   kal_uint8   seq_num;
   kal_int16   dlpow_default[GSM_RF_MAX_RX_GAIN_NUM_V5];  //0.125 dBm
   kal_int16   dlpow_lbound[GSM_RF_MAX_RX_GAIN_NUM_V5];
   kal_int16   dlpow_hbound[GSM_RF_MAX_RX_GAIN_NUM_V5];   
   kal_uint8   lna_enum_type[GSM_RF_MAX_RX_ANT_NUM][GSM_RF_MAX_RX_GAIN_NUM_V5];  //RfTestRx_Lna_Mode_E
   kal_uint8   antenna_enable[GSM_RF_MAX_RX_ANT_NUM][GSM_RF_MAX_RX_GAIN_NUM_V5];
   kal_int16   dlpow_wcoef_default;  //0.125 dBm
   kal_int16   dlpow_wcoef_lbound;
   kal_int16   dlpow_wcoef_hbound;
   kal_int16   wcoef_arfcn[8];  //each band woef arfcn, [850][900][DCS][PCS]=[1][2][8][6]

  //for trad cal
   kal_int16   gain_default[GSM_RF_MAX_RX_ANT_NUM][GSM_RF_MAX_RX_GAIN_NUM_V5];  // 0.125 dB
   kal_int16   wcoef_gain_default[GSM_RF_MAX_RX_ANT_NUM];  // 0.125 dB
  //RF Tool
   kal_uint8   elna_type[GSM_RF_MAX_RX_ANT_NUM];   // RfTestRx_Elna_Type_E
   kal_int16   gain_hbound[GSM_RF_MAX_RX_ANT_NUM][GSM_RF_MAX_RX_GAIN_NUM_V5];
   kal_int16   gain_lbound[GSM_RF_MAX_RX_ANT_NUM][GSM_RF_MAX_RX_GAIN_NUM_V5];
} RfTestCmdCalInfoV5_T;    // RfTestElnaInfoV5_T

typedef struct
{
   RfTestCmdCalInfoV5_T  GSM_Band_Info[SUPPORT_BAND_NUM-1];  //No GSM400
} RfTestCmdCalInfoV5AllBandCnfPdu_T;


/* ----RF_TEST_CMD_START_FDT_DL_NOT_WAIT_RESULT_LPM_512P_V5 ---- */
typedef enum
{
   RX_CAL_SEQ_V5_NULL = RX_LNA_NONE ,
   RX_CAL_SEQ_V5_UTRA_HIGH = RX_LNA_UTRA_HIGH ,
   RX_CAL_SEQ_V5_HIGH = RX_LNA_HIGH ,
   RX_CAL_SEQ_V5_MID = RX_LNA_MID ,
   RX_CAL_SEQ_V5_MID_SAWLESS = RX_LNA_MID_SAWLESS,
   RX_CAL_SEQ_V5_LOW = RX_LNA_LOW ,
   RX_CAL_SEQ_V5_BYPASS_LOW = RX_LNA_BYPASS_LOW ,
   RX_CAL_SEQ_V5_WCOEF
} RfTestRxCalSeqV5_E; //the same as LNACalSeqV5_E   //reference to RfTestRx_Lna_Mode_E   

typedef struct
{
   FrequencyBand       band;      
   ARFCN               arfcn;     
   kal_int16           repeat_cnt;
   kal_int16            dl_power;  //it is DL Power for each frame
   RfTestRxCalSeqV5_E   gsm_lna_mode[GSM_RF_MAX_RX_ANT_NUM];
} RFTestCmdDSSPL_V5;

typedef struct
{
    RF_TEST_CMD_DTS_HDR
    kal_uint16         step_cnt;  //int8 -> uint16 to match size 512
    RFTestCmdDSSPL_V5  PathLossDSS[FT_MAX_STEP_CNT_512P-2];
    kal_int16          lpm_sb_num;
    kal_uint8          Antenna;   //GSM_AntDimension
} RFTestCmdDTS_Lpm_512P_V5;


/* ----RF_TEST_CMD_PM_V5  &  RF_TEST_CMD_IF_PM_V5---- */
//REQ Param
typedef struct
{
  RfTestSupportBand   band;
  ARFCN               arfcn;
  kal_int8            sampleNoPerFrame;
  /* Resoultion can be up to RSSI_RESOLUTION_BITS bits*/
  Gain                gain[GSM_RF_MAX_RX_ANT_NUM];
  kal_int16           frames;
  GSM_AntDimension      Antenna;
  RfTestRx_Lna_Mode_E   elna_mode[GSM_RF_MAX_RX_ANT_NUM];
} RfTestCmdPm_V5;

//CNF Param
typedef struct
{
   /* Resoultion can be up to RSSI_RESOLUTION_BITS bits*/
   kal_int32            power[GSM_RF_MAX_RX_ANT_NUM];
   /* Resoultion can be up to RSSI_RESOLUTION_BITS*2 bits*/
   kal_int32            deviation[GSM_RF_MAX_RX_ANT_NUM];
   /* Resoultion can be up to RSSI_RESOLUTION_BITS bits*/
   Gain                 usedGain[GSM_RF_MAX_RX_ANT_NUM];
   kal_int32            iOffset[GSM_RF_MAX_RX_ANT_NUM];
   kal_int32            qOffset[GSM_RF_MAX_RX_ANT_NUM];
   kal_int32            validSamples[GSM_RF_MAX_RX_ANT_NUM];
   RfTestRx_Lna_Mode_E   elna_mode[GSM_RF_MAX_RX_ANT_NUM];
   kal_int32            ok;
} RfTestResultPm_V5;


/* ----RF_TEST_CMD_CONTINUOUS_RX_V5---- */
//REQ Param
typedef struct
{
   RfTestSupportBand  band;
   ARFCN           arfcn;
   Gain          gain[GSM_RF_MAX_RX_ANT_NUM];
   GSM_AntDimension        Antenna;
   RfTestRx_Lna_Mode_E   elna_mode[GSM_RF_MAX_RX_ANT_NUM];
   kal_bool      onOff;
} RfTestCmdContRx_V5;
//CNF Param
//kal_bool  ok;


/* ----RF_TEST_CMD_RX_GAIN_CALCULATE_V5---- */
//REQ Param
typedef struct
{
  RfTestSupportBand    band;
  GSM_AntDimension        Antenna;
  RfTestRx_Lna_Mode_E   elna_mode[GSM_RF_MAX_RX_ANT_NUM];
} RfTestCmdRxGainCalculate_V5;

//CNF Param
typedef enum
{
    GSM_CALCULATE_NULL = 0,
    GSM_CALCULATE_SUCCESS,
    GSM_CALCULATE_FAIL
} GSM_RxGain_Caculator;

typedef struct
{
   kal_int16                 recommend_dlpow;
   kal_uint16                request_gain [GSM_RF_MAX_RX_ANT_NUM];  // 1/8 dB
   GSM_RxGain_Caculator      calculate_status;
} RfTestResultRxGainCalculate_V5;
#endif //#if IS_2G_RXD_SUPPORT
/* ---------------------------------------------------------------------------- */


typedef struct
{
   FrequencyBand     band;
   ARFCN             arfcn;
   kal_int8          timeslot_per_frame;
   kal_int8          apc_dac_pcl_sel;               // 1: apc_dac, 0: apc_pcl
   kal_int16         apc_dac_pcl_value[4];
   //kal_uint8         pa_vbias_val;
   kal_uint8         pa_vbias_val[4];
   kal_uint8         is_low_pcl[4];

   CodingScheme      cs[4];
   kal_int32         repeat_cnt;
   kal_int16         afc_dac_value;
   kal_int8          tsc;
   APCTxPattern      pattern;
   kal_uint16        pattern_data;
} RfTestCmdUSSApc;

typedef struct
{
 //kal_bool          pa_vbias_cal; // Control whether PA need to calibrate different Vbias value when APC DAC is used
   kal_int8          step_cnt;  //Still use int8, old CMD struct must the same as before
   kal_int16         high_apc_dcoffset[FrequencyBandCount];
 //  kal_int32         lowest_power[FrequencyBandCount];
   RfTestCmdUSSApc   ApcUSS[FT_MAX_STEP_CNT_50P];
}RfTestCmdUTS_50P;

typedef struct
{
   kal_int8                 step_cnt;  //Still use int8, old CMD struct must the same as before
   kal_int16                high_apc_dcoffset[FrequencyBandCount];
   RfTestCmdUSSApc          ApcUSS[FT_MAX_STEP_CNT_100P];
}RfTestCmdUTS_100P;

typedef struct
{
   kal_uint16               step_cnt;  //int8 -> uint16 to match size 512
   kal_int16                high_apc_dcoffset[FrequencyBandCount];
   RfTestCmdUSSApc          ApcUSS[FT_MAX_STEP_CNT_512P];
}RfTestCmdUTS_512P;

typedef struct
{
    //kal_int32   rf_band;
    kal_int16  afc_offset[FrequencyBandCount];

}RF_SET_AFC_DAC_OFFSET_REQ_T;

typedef  struct
{
    signed char rollback_2t; /* Rollback (2t/F2I_Resolution) dB when 2 TX slots */
    signed char rollback_3t; /* Rollback (3t/F2I_Resolution) dB when 3 TX slots */
    signed char rollback_4t; /* Rollback (4t/F2I_Resolution) dB when 4 TX slots */
    signed char rollback_5t; /* Rollback (5t/F2I_Resolution) dB when 5 TX slots */
} FT_Rf_sTX_POWER_ROLLBACK;

typedef struct
{
    kal_int32  band;
    FT_Rf_sTX_POWER_ROLLBACK PowerRollbackTable;
}RfTestCmdSetPowerRollbackTable;

/**
 * The RfTestCmdIrPm is used for IRR w coeffiecient calibration
 * The command is analogous to RfTestCmdPm, except the m_IfFlag
 */
typedef struct
{
    /// power scan input parameter
    RfTestCmdPm   m_Pm;
    /// if_flag for the power scan (to override the if setting in power scan, the original interface is not changed)
    kal_int8      m_IfFlag;
}RfTestCmdIrPm;

#if IS_2G_RXD_SUPPORT
typedef struct
{
    /// power scan input parameter
    RfTestCmdPm_V5   m_Pm;
    /// if_flag for the power scan (to override the if setting in power scan, the original interface is not changed)
    kal_int8         m_IfFlag;
}
RfTestCmdIrPm_V5;
#endif

typedef struct
{
    FrequencyBand band;
    Power pcl;
}RfTestCmdTXPC;
// ***************************************** //

// R8 edge new feature
typedef struct
{
    unsigned char                rf_band;
    unsigned short               pa_gain[16];
}RfTestCmdSetEdgeTxOctPACoef;

typedef struct
{
    kal_uint8     rf_band;
    kal_int8      cTxAdc_State;
    kal_int8      is_EPSK;    
}RfTestCmdResetPdData;

typedef struct{
    ARFCN                arfcn;          // absolute radio frequency channel number
    BSIC                 bsic;           // training sequence
    CodingScheme         cs;             // coding scheme for each time slot, MCS1~9 is only valid for EPSK function 
    TimingAdvance        ta;             // time advance
    kal_int32            frames;         // the number of frames should transmit
    kal_int16            dacValue;       // AFC DAC value
    APCTxPattern         pattern;        // Tx pattern is only valid for EPSK function  
    kal_uint16           pattern_data;   // if NB_TX_PATTERN_WITHOUT_TSC==pattern, user can input any 16bits value as pattern.
    kal_uint16           pa_gain;        // pa gain from ini file
    kal_uint16           pa_vbias;       // pa vbias from ini file
    kal_uint8            rf_gain_index;  // gain rf index
}Rf_GainRfTx_Req;

typedef struct
{
    kal_uint16    max_arfcn;
    kal_int8      path_loss_H;
    kal_int8      path_loss_M;
    kal_int8      path_loss_M_sawless;
    kal_int8      path_loss_L;
}RfPathLossOffset;

typedef struct
{
   RfPathLossOffset  rx_pathloss[FrequencyBandCount][PLTABLE_SIZE];
}RfTestCmdSetGetRxPathLoss;

typedef struct
{
    kal_uint16    max_arfcn;
    kal_int8      path_loss_H;
    kal_int8      path_loss_M;
    kal_int8      path_loss_M_sawless;
    kal_int8      path_loss_L;
    kal_int8      path_loss_H_sensitivity;  //elna+g6
    kal_int8      path_loss_L_maxpin;  //elna_bypass+g1   ,sLNAGAINOFFSET
}RfPathLossOffset_V3;

typedef struct
{
   RfPathLossOffset_V3  rx_pathloss[FrequencyBandCount][PLTABLE_SIZE];
}RfTestCmdSetGetRxPathLoss_V3;

typedef struct
{
   RfTestCmdAfc        afc;
   FrequencyBand       band;
   RfTestCmdSetAfcSinWave    setAfcSinWave;
}RfTestCmdSinewaveAfcGetTempFreq;

typedef struct
{
   //sRFSpecialCoef  rfspecialcoef;
   //RFSpecialCoef.rx.mt6256_51rf.w_data
   w_coef         w_data[WCTABLE_SIZE];
}RfTestCmdSetGetWcoefPdu;




/* -------------------- *\
|* SET TX CMD REQ Struct   *|
 \* -------------------- */
#define RF_MAX_PEER_BUF_CNF_BYTE_SIZE            51200 //50*1024
#define RF_MAX_PEER_BUF_CNF_WORD_SIZE            RF_MAX_PEER_BUF_CNF_BYTE_SIZE >> 2

typedef enum
{
   GMSK_Band850   =1,     //0x00 01
   GMSK_Band900   =2,     //0x00 02
   GMSK_Band1800  =4,     //0x00 04
   GMSK_Band1900  =8,     //0x00 08
   EPSK_Band850   =256,   //0x01 00
   EPSK_Band900   =512,   //0x02 00
   EPSK_Band1800  =1024,  //0x04 00
   EPSK_Band1900  =2048,  //0x08 00
}RfTestTxData_ModBand_Bitmap_E;

typedef struct
{
    kal_uint16  count;
    kal_uint16  offset;
    //kal_uint16  mod_band_bitmap; //modulation+band bitmap
    //// EPSK(4bit) | GMSK(4bit) -> 0000 0101 | 0000 0011 -> PCS|DCS|900|850  ex.Set Data for GSM850/GSM900 GMSK + GSM850/DCS EPSK  Ramping
    //kal_uint16  mod_bitmap; //modulation bitmap
    //// EPSK(1bit) | GMSK(1bit) -> 00000001 | 00000001    ex.Set Data for GMSK &  EPSK Txpc
    //kal_uint16  band_bitmap; //band bitmap
    // EPSK(4bit)  -> PCS|DCS|900|850-> 0000 1111 | 0000 0000    ex.Set Data for EPSK interslotramp GSM850/GSM900/DCS/PCS
    //kal_uint16  not_used_bitmap; //0000 0000 | 0000 0001,  only need one bit,  data did not separate from diff band and mod type
    kal_uint16  bitmap;  //for general purpose  //RfTestTxData_ModBand_Bitmap_E  //RfTestRxData_ModBand_Bitmap_E
    kal_uint16  zero_padding;
}RfTestParamDynamicEntryElm_T;

typedef struct
{
   kal_uint16                     is_uplate_to_NVRAM;
   RfTestParamDynamicEntryElm_T   type1_ramptable_param;
   RfTestParamDynamicEntryElm_T   type2_epsk_interramptable_param;
   RfTestParamDynamicEntryElm_T   type3_txpc_param;
   RfTestParamDynamicEntryElm_T   type4_epskpa_param;
}RfTestCmdSetTxDataReqParam;

typedef l1cal_rampTable_T L1_Ramptable_Type1_T;

#if MD_DRV_IS_EPSK_TX_SUPPORT
typedef l1cal_EPSK_interRampData_T L1_EPSK_InterRamptable_Type2_T;
#endif

typedef struct
{
   char           is_calibrated;
   short          temperature;
}L1_Txpc_Type3_T;  //l1cal_txpc_T

typedef orionRFtx_pa_vbias L1_EpskPA_Type4_T;   //l1cal_rfspecialcoef_T

typedef struct
{
   union
   {
      kal_int32                        set_txdata_req_pdu_raw_data[RF_MAX_PEER_BUF_CNF_WORD_SIZE];
      L1_Ramptable_Type1_T             type1_ramptable_pdu[8];
	  #if MD_DRV_IS_EPSK_TX_SUPPORT
      L1_EPSK_InterRamptable_Type2_T   type2_epsk_interramptable_pdu[4];
	  #endif
      L1_Txpc_Type3_T                  type3_txpc_pdu[2];
      L1_EpskPA_Type4_T                type4_epskpa_pdu;
   } request;
}RfTestCmdSetTxDataReqPdu;
/* -------------------------------------- */



/* -------------------- *\
|* GET TX CMD REQ Struct   *|
 \* -------------------- */
typedef struct
{
    kal_uint16                type1_ramptable_count;
    kal_uint16                type2_epsk_interramptable_count;
    kal_uint16                type3_txpc_count;
    kal_uint16                type4_epskpa_count;
    
    //point out which kind of this type should be got
    kal_uint16                type1_ramptable_bitmap;
    kal_uint16                type2_epsk_interramptable_bitmap;
    kal_uint16                type3_txpc_bitmap;
    kal_uint16                type4_epskpa_bitmap;
}RfTestCmdGetTxDataReqParam;
/* -------------------------------------- */


#if IS_2G_RXD_SUPPORT
/* -------------------- *\
|* SET RX CMD REQ Struct   *|
 \* -------------------- */
typedef enum
{
   GSM_RXM_Band850   =1,     //0x00 01
   GSM_RXM_Band900   =2,     //0x00 02
   GSM_RXM_Band1800  =4,     //0x00 04
   GSM_RXM_Band1900  =8,     //0x00 08
   GSM_RXD_Band850   =256,   //0x01 00
   GSM_RXD_Band900   =512,   //0x02 00
   GSM_RXD_Band1800  =1024,  //0x04 00
   GSM_RXD_Band1900  =2048,  //0x08 00
}RfTestRxData_ModBand_Bitmap_E;

//typedef struct
//{
//    kal_uint16  count;
//    kal_uint16  offset;
//    kal_uint16  bitmap;  //for general purpose  //RfTestTxData_ModBand_Bitmap_E, RfTestRxData_ModBand_Bitmap_E
//    kal_uint16  zero_padding;
//}RfTestParamDynamicEntryElm_T;

typedef struct
{
   kal_uint16                     is_uplate_to_NVRAM;
   RfTestParamDynamicEntryElm_T   type1_rxpathloss_param;
   RfTestParamDynamicEntryElm_T   type2_wcoef_param;
}RfTestCmdSetRxDataReqParam;

typedef struct
{
   RfPathLossOffset_V3  rx_pathloss_entry[PLTABLE_SIZE]; 
} L1_SetGetRxPathLossEntry_Type1_T;

typedef l1cal_wcoef_T L1_Wcoef_Type2_T;

typedef struct
{
   union
   {
      kal_int32 set_rxdata_req_pdu_raw_data[RF_MAX_PEER_BUF_CNF_WORD_SIZE];
      L1_SetGetRxPathLossEntry_Type1_T   type1_pathloss_pdu[8];
      L1_Wcoef_Type2_T   type2_wcoef_pdu[2];
   } request;
}RfTestCmdSetRxDataReqPdu;
/* -------------------------------------- */


/* -------------------- *\
|* GET RX CMD REQ Struct   *|
 \* -------------------- */
typedef struct
{
    kal_uint16                type1_rxpathloss_count;
    kal_uint16                type2_wcoef_count;
    
    //point out which kind of this type should be got
    kal_uint16                type1_rxpathloss_bitmap;
    kal_uint16                type2_wcoef_bitmap;
}RfTestCmdGetRxDataReqParam;
/* -------------------------------------- */
#endif  //#if IS_2G_RXD_SUPPORT


typedef union
{
  RfTestCmdPm         pm;
  RfTestCmdAfc        afc;
  RfTestCmdNbTx       nbTx;
  RfTestCmdContRx     contRx;
  RfTestCmdContTx     contTx;
  RfTestCmdSetBBTXCfg setBBTXCfg;
  kal_bool            selectPCS1900;
  kal_int8            dummy;
  RfTestCmdMultiSlotTX  msTx;
  RfTestCmdSetRampApcLevel  setRampApcLevel;
  RfTestCmdSetAfcDacValue   setAfcDacValue;
  RfTestCmdSetBBTXCfg2      BBTxCfg2;
  RfTestCmdSetCrystalCfg    setCrystalCfg;
  RfTestCmdSetRampTable     setRampTable;
  RfTestCmdSetAfcSinWave    setAfcSinWave;
  RfTestCmdSetBSI           SetBSI;
  RfTestCmdGetBSI           GetBSI;
  RfTestCmdSetBBTXCfg3      BBTxCfg3;
  RfTestCmdMultiSlotTXEx    msTxEx;
  RfTestCmdContTxEx         contTxEx;
  RfTestCmdContTxEx2        contTxEx2;
  RfTestCmdSetBBTXCfg4   BBTxCfg4;
  RF_SET_AFC_DAC_OFFSET_REQ_T     set_afc_offset_req;
  RfTestCmdNSFTParam        NSFT_start;
  RfTestCmdNSFTPowerChangeParam  NSFT_change_power;
  RfTestCmdSetPowerRollbackTable      PowerRollbackTable;
  kal_uint32                m_u4NSFTSBERTestCount;
  /// for L1TST_ReportRXQual input
  kal_uint16                m_u2NSFTRxQualBerDecile;
  /// for SOC2 IRR W PM
  RfTestCmdIrPm             m_IrPm;
  RfTestCmdTXPC         txpc_req;
  /// for L1TST_TXPC_CL_GetSubband input
  kal_uint8                 band;
  /* [LPM CAL] */
  /// for DCXO FPM/LPM control (1 FPM, 0 LPM)
  kal_uint8                 dcxoMode;
  /// R8 edge new feature
  RfTestCmdSetEdgeTxOctPACoef setTxOctPaCoef;
  RfTestCmdResetPdData      resetTxPcPdData;
  /// gain rf tx
  Rf_GainRfTx_Req           gainRfTx;  
  kal_uint8                 path_flag;
  RfTestCmdType query_op_code;
  RfTestCmdListModeNSFTParam    List_Mode_NSFT_start;
  kal_bool      is_uplate_to_NVRAM;
  RfTestCmdSinewaveAfcGetTempFreq   afc_gpscoclockv2;
  RfTestCmdSetTxDataReqParam       set_txdata_req;
  RfTestCmdGetTxDataReqParam       get_txdata_req;
  #if IS_2G_RXD_SUPPORT
  RfTestCmdPm_V5      pm_v5;
  RfTestCmdIrPm_V5    m_IrPm_v5;
  RfTestCmdContRx_V5  contRx_v5;
  RfTestCmdNSFTParam_V5        NSFT_start_v5;
  RfTestCmdListModeNSFTParam_V5    List_Mode_NSFT_start_v5;
  RfTestCmdSetRxDataReqParam       set_rxdata_req;
  RfTestCmdGetRxDataReqParam       get_rxdata_req;
  RfTestCmdRxGainCalculate_V5      rx_gain_calculate_req;
  #endif
} RfTestCmdParam;




/* ---------------------------------- */
typedef struct
{
   /* Resoultion can be up to RSSI_RESOLUTION_BITS bits*/
   kal_int32            power;
   /* Resoultion can be up to RSSI_RESOLUTION_BITS*2 bits*/
   kal_int32            deviation;
   /* Resoultion can be up to RSSI_RESOLUTION_BITS bits*/
   Gain                 usedGain;
   kal_int32            ok;
   kal_int32            iOffset;
   kal_int32            qOffset;
   kal_int32            validSamples;
} RfTestResultPm;

typedef struct
{
   kal_int16              fcb_ok_number;
   kal_int32              freqOffset;
   kal_int32              deviation;
   kal_int32              ok;
} RfTestResultAfc;

typedef struct
{
   kal_int16              fcb_ok_number;
   kal_int32              freqOffset;
   kal_int32              deviation;
   kal_int32              ok;
   kal_int32              temperature;
} RfTestResultSinewaveAfcGetTempFreq;

typedef struct {
    kal_bool                ok;
    RfTestCmdSetBBTXCfg2    bbtx_cfg;
} RfTestResultGetBBTXCfg2;

typedef struct {
    kal_uint32      GSM400;
    kal_uint32      GSM850;
    kal_uint32      GSM900;
    kal_uint32      DCS1800;
    kal_uint32      PCS1900;
} RfTestResultBandSupport;

typedef struct {
    kal_bool                    ok;
    MS_CAPABILITY_E             capability;
    RfTestResultBandSupport     band_support;
} RfTestResultMsCapability;
/*
#define MS_CAPABILITY_GSM           0x00000001
#define MS_CAPABILITY_GPRS          0x00000002
#define MS_CAPABILITY_EDGE_RX       0x00000004
#define MS_CAPABILITY_EDGE_8PSK_TX  0x00000008
#define MS_CAPABILITY_8PM           0x00000010

#define MS_BAND_SUPPORT_GSM400      0x00000001
#define MS_BAND_SUPPORT_GSM850      0x00000002
#define MS_BAND_SUPPORT_GSM900      0x00000004
#define MS_BAND_SUPPORT_DCS1800     0x00000008
#define MS_BAND_SUPPORT_PCS1900     0x00000010
*/

typedef struct
{
    kal_uint32      capability;
    kal_uint32      band_support;
}RfResultMsCapabilityEx;

typedef struct {
    kal_bool        ok;
    kal_uint32      capability;
    kal_uint32      band_support;
} RfTestResultMsCapabilityEx;

typedef struct {
    kal_bool                ok;
    kal_uint32              id;
} RfTestResultGetRFID;

typedef struct {
    kal_bool        ok;
    kal_uint32      bsi_data;
} RfTestResultGetBSI;

typedef struct {
    kal_bool                ok;
    RfTestCmdSetBBTXCfg3    bbtx_cfg;
} RfTestResultGetBBTXCfg3;

typedef struct
{
    kal_bool              ok;
    RfTestCmdSetBBTXCfg4    bbtx_cfg;
}RfTestResultGetBBTXCfg4;

typedef struct {
    kal_bool        ok;
    kal_int16       dacValue;
} RfGetAfcDacValueAtRTXOffsetCal;

typedef struct
{
    kal_bool        ok;
    kal_int32      calibra_result_32k;
}RfTestResult32kCalibration;

// ****************************** //
// FDT Calibration
// ****************************** //
typedef struct
{
   kal_int32         power[FT_MAX_STEP_CNT_50P-2];
   kal_int16         valid_sample[FT_MAX_STEP_CNT_50P-2];
   kal_bool          ok;
} RfTestResultDSSPL_50P;

typedef struct
{
   kal_int32         power[FT_MAX_STEP_CNT_100P-2];
   kal_int16         valid_sample[FT_MAX_STEP_CNT_100P-2];
   kal_bool          ok;
} RfTestResultDSSPL_100P;

typedef struct
{
   kal_int32         power[FT_MAX_STEP_CNT_512P-2];
   kal_int16         valid_sample[FT_MAX_STEP_CNT_512P-2];
   kal_bool          ok;
   //kal_bool          is_se_sawless;  // remove this item, otherwise memory copy from ResultDSSPL will be not match  
} RfTestResultDSSPL_512P;  /** For sawless lna mode and enlarge size=512 to reduce CMD round trip number*/

typedef struct
{
   kal_int32         freq_offset[33];   // only valid when 33 stage calibration is ON
   kal_int32         deviation[33];     // only valid when 33 stage calibration is ON
   kal_int16         fcb_ok_number[33];
   //kal_int8        capid;             // only valid when capid calibration is ON
   kal_int32         capid;             // only valid when capid calibration is ON
   kal_int16         init_dac_value;    // only valid when 33 stage calibration is OFF
   kal_int32         slope;             // only valid when 33 stage calibration is OFF
   kal_bool          ok;
} RfTestResultDSSAfc;
/* [LPM CAL] */
typedef struct
{
    kal_int32 cload_freq_offset;
    kal_bool  ok;
    kal_bool  is_perform_cal;
} RfTestResultDSSLpm;

#if  IS_FHC_SUPPORT == 1
typedef struct
{
     kal_int32              path_loss_cnt;
   kal_int32              freq_offset;
   kal_int32              capid_freq_offset_min;
   kal_int32              capid_freq_offset[FHC_MAX_CAPID_SEARCH_NUM];      // 16
   kal_int32              capid_search_order[FHC_MAX_CAPID_SEARCH_NUM];     // 16
   kal_int32              capid;
   kal_int32              capid_high;
   kal_int32              capid_low;
   kal_int32              capid_best;
   kal_int16              afc_dac;
   kal_int16              arfcn;
   kal_int16              capid_cnt;
   kal_int16              repeat_index;
   kal_int8               state;
   kal_int8               capid_index;
   kal_int8               capid_okay_cnt;
   kal_int8               afc_dac_index;
   kal_int8               sb_okay_cnt;
   kal_uint8              sb_fail_cnt;
   kal_uint8              fb_fail_cnt;
   kal_bool               pl_started;
   kal_bool               pre_capid_cal_ok[FHC_PRE_CAPID_SEARCH_NUM];   // FHC_PRE_CAPID_SEARCH_NUM
}RfTestResultDtsmInfo;
#else
typedef struct
{
     kal_int32              path_loss_cnt;
       kal_int32              freq_offset;
       kal_int32              capid_freq_offset_min;
       kal_int32              capid_freq_offset[16];        //FHC_MAX_CAPID_SEARCH_NUM
       kal_int32              capid_search_order[16];       //FHC_MAX_CAPID_SEARCH_NUM
       kal_int32              capid;
       kal_int32              capid_high;
       kal_int32              capid_low;
       kal_int32              capid_best;
       kal_int16              afc_dac;
       kal_int16              arfcn;
       kal_int16              capid_cnt;
       kal_int16              repeat_index;
       kal_int8               state;
       kal_int8               capid_index;
       kal_int8               capid_okay_cnt;
       kal_int8               afc_dac_index;
       kal_int8               sb_okay_cnt;
       kal_uint8              sb_fail_cnt;
       kal_uint8              fb_fail_cnt;
       kal_bool               pl_started;
       kal_bool               pre_capid_cal_ok[9];  // FHC_PRE_CAPID_SEARCH_NUM
}RfTestResultDtsmInfo;
#endif

typedef enum  {
    DTS_RESULT_READY = 0,       // DTS results is ready to get back
    DTS_RESULT_NOT_READY,       // DTS result is still in progress and not ready to get back
    DTS_RESULT_NOT_REQUESTED,   // Haven't called the META_Rf_StartFdtDL() in advance.
    DTS_FATAL_ERROR
}RF_DTS_GET_RESULT_STATUS;
typedef struct
{
   RfTestResultDSSPL_50P          PLResult;
   RfTestResultDSSAfc             AfcResult;
   RfTestResultDtsmInfo           m_rDtsmInfo;  // for L1 debug use, will print in META Tool's test report.
} RfTestResultDTS_50P;

typedef struct
{
   RfTestResultDSSPL_100P         PLResult;
   RfTestResultDSSAfc             AfcResult;
   RfTestResultDtsmInfo           m_rDtsmInfo;  // for L1 debug use, will print in META Tool's test report.
} RfTestResultDTS_100P;


/* [LPM CAL] */
typedef struct
{
   RfTestResultDSSPL_50P          PLResult;
   RfTestResultDSSAfc             AfcResult;
   RfTestResultDtsmInfo           m_rDtsmInfo;
   /* crystal low power mode calibration result (for 32k removal) */
   RfTestResultDSSLpm             LpmResult;
} RfTestResultDTS_Lpm_50P;

typedef struct
{
   RfTestResultDSSPL_100P         PLResult;
   RfTestResultDSSAfc             AfcResult;
   RfTestResultDtsmInfo           m_rDtsmInfo;
   /* crystal low power mode calibration result (for 32k removal) */
   RfTestResultDSSLpm             LpmResult;
} RfTestResultDTS_Lpm_100P;

typedef struct
{
   RfTestResultDSSPL_512P       PLResult;
   RfTestResultDSSAfc             AfcResult;
   RfTestResultDtsmInfo           m_rDtsmInfo;
   /* crystal low power mode calibration result (for 32k removal) */
   RfTestResultDSSLpm             LpmResult;
} RfTestResultDTS_Lpm_512P;  /** For sawless lna mode and reduce CMD round trip number*/

typedef struct
{
   RfTestResultDSSPL_512P       PLResult;
   RfTestResultDSSAfc             AfcResult;
   RfTestResultDtsmInfo           m_rDtsmInfo;
   /* crystal low power mode calibration result (for 32k removal) */
   RfTestResultDSSLpm             LpmResult;
} RfTestResultDTS_Lpm_512P_V3;  /** For sawless lna mode and reduce CMD round trip number*/

/*------RF_TEST_CMD_START_FDT_DL_WAIT_RESULT_LPM_512P_V5,  RF_TEST_CMD_GET_FDT_RESULT_LPM_512P_V5------*/
#if IS_2G_RXD_SUPPORT
typedef struct
{
   kal_int32         power[GSM_RF_MAX_RX_ANT_NUM][FT_MAX_STEP_CNT_512P-2];
   kal_int16         valid_sample[GSM_RF_MAX_RX_ANT_NUM][FT_MAX_STEP_CNT_512P-2];
   kal_bool          ok;
} RfTestResultDSSPL_512P_V5;  //ResultDSSPL

typedef struct
{
   RfTestResultDSSPL_512P_V5       PLResult;
   RfTestResultDSSAfc             AfcResult;
   RfTestResultDtsmInfo           m_rDtsmInfo;
   /* crystal low power mode calibration result (for 32k removal) */
   RfTestResultDSSLpm             LpmResult;
} RfTestResultDTS_Lpm_512P_V5;
#endif  //#if IS_2G_RXD_SUPPORT
/*---------------------------------------------------------------*/

typedef struct
{
     kal_int16        afc_offset[FrequencyBandCount];
     kal_bool                  ok;
}RfGetAfcOffsetResult;

typedef struct
{
    kal_uint32        m_u4NSFTSBER;
    kal_uint32        m_u4NSFTSBERCurrentCount;
}RfNSFTSBERResult;
// local
typedef struct
{
    kal_bool         ok;
    kal_uint16       m_u2PDValue;
}RfTestResultPDValue;

// peer
typedef struct
{
    kal_uint16       data[16];
} RfTestResultTXPCPD;

typedef struct
{
    kal_uint16       data[8];
} RfTestResultTXPCPDTemp;

typedef struct
{
    /// calibrated flag
    kal_int8               is_calibrated;
    /// closed-loop target value by PCL
    RfTestResultTXPCPD     adc[FrequencyBandCount];
    /// temperature compensation interval
    kal_int16              temperature;
    /// closed-loop target value by temperature compensation
    RfTestResultTXPCPDTemp temp[FrequencyBandCount];
}RfTestResultTXPCAllPD;

typedef struct
{
    kal_int16 status;
    kal_int16 tadc_dac;
    kal_int16 temperature;
    kal_int16 temp_idx;
} RfTestResultRfTemperatureInfo;

// ****************************** //

typedef struct
{
    kal_uint32      result;         // 1: support 0: not support
    kal_uint32      query_op_code;  // query op code
}RfCheckIfFuncExist;

/** ----- 2G list mode nsft -----*/
typedef struct
{
    kal_uint8 report_count;
}RfTestResultListModeNSFT;

typedef struct
{
    kal_uint16 status;  //NsftListCmdStatus  //NsftListRpt_Com_t
}RfTestResultListModeNSFTCommon;

typedef struct
{
   RfTestResultListModeNSFTCommon common;
	kal_uint16                     retry_count;
	kal_int16                      new_afc_dac;
	kal_int32                      detected_foe;
}RfTestResultListModeNSFTSync;

typedef struct
{
    RfTestResultListModeNSFTCommon common;
}RfTestResultListModeNSFTTrigger;

typedef struct
{
   RfTestResultListModeNSFTCommon common;
	kal_uint16                     RX_level;
	kal_uint32                     BER_sum;
	kal_uint32                     BER_frame_count;
}RfTestResultListModeNSFTMeasure;

typedef struct
{
    RfTestResultListModeNSFTCommon common;
}RfTestResultListModeNSFTStop;

typedef union
{
   RfTestResultListModeNSFTSync    sync;
	RfTestResultListModeNSFTTrigger trigger;
	RfTestResultListModeNSFTMeasure test;
	RfTestResultListModeNSFTStop    stop;
}RfTestResultListModeNSFTReport;

typedef struct
{
    unsigned char                  cmd_type[60];
    RfTestResultListModeNSFTReport report[60];
}RfTestResultListModeNSFTParam;
// --------------------------------- //


/** ----- 2G list mode nsft V5 -----*/
#if IS_2G_RXD_SUPPORT
//CNF Local Param
typedef RfTestResultListModeNSFT RfTestResultListModeNSFT_V5;

//CNF Pdu
typedef RfTestResultListModeNSFTSync RfTestResultListModeNSFTSync_V5;
typedef RfTestResultListModeNSFTTrigger RfTestResultListModeNSFTTrigger_V5;

typedef struct
{
   RfTestResultListModeNSFTCommon common;
	kal_uint16                     RX_level[GSM_RF_MAX_RX_ANT_NUM];
	kal_uint32                     BER_sum;
	kal_uint32                     BER_frame_count;
}RfTestResultListModeNSFTMeasure_V5;

typedef RfTestResultListModeNSFTStop RfTestResultListModeNSFTStop_V5;

typedef union
{
   RfTestResultListModeNSFTSync_V5    sync;
	RfTestResultListModeNSFTTrigger_V5 trigger;
	RfTestResultListModeNSFTMeasure_V5 test;
	RfTestResultListModeNSFTStop_V5    stop;
}RfTestResultListModeNSFTReport_V5;

typedef struct
{
    unsigned char                  cmd_type[60];
    RfTestResultListModeNSFTReport_V5 report[60];
}RfTestResultListModeNSFTParam_V5;
#endif  //#if IS_2G_RXD_SUPPORT
// --------------------------------- //

typedef enum
{
   RF_CNF_SUCCESS            = 0, /**< access NVRAM successfully? */
   RF_CNF_RECORD_STATUS_FAIL = 1, /**< access NVRAM general error? */
   RF_CNF_NVRAM_GET_FAIL     = 2, /**< GET NVRAM, NVRAM return failed */
   RF_CNF_FREQ_INVALID       = 3, /**< Error arfcn parameter for band*/
   RF_CNF_CMD_INVALID        = 4, /**< Error, SET CMD peer buffer is NULL*/
   RF_CNF_NVRAM_SET_FAIL     = 5, /**< SET NVRAM, NVRAM return failed */
   RF_CNF_ALLOC_BUFFER_FAIL  = 6  /**< Allocate peer buffer FAIL */
}RF_NVRAM_ACCESS_CAl_DATA_RESULT;


/* -------------------- *\
|* SET TX CMD CNF Struct   *|
 \* -------------------- */
typedef enum
{
   RF_TEST_SET_TX_DATA_CNF_STATUS_INVALID     = 0,
   RF_TEST_SET_TX_DATA_CNF_STATUS_OK          = 1,
   RF_TEST_SET_TX_DATA_TYPE2_OFFSET_ERROR     = 2,  // Type-2 count/offset mismatch
   RF_TEST_SET_TX_DATA_TYPE3_OFFSET_ERROR     = 3,  // Type-3 count/offset mismatch
   RF_TEST_SET_TX_DATA_TYPE4_OFFSET_ERROR     = 4,  // Type-4 count/offset mismatch
   RF_TEST_SET_TX_DATA_EXCESS_REQ_PDU_LENGTH  = 5,
   RF_TEST_SET_TX_DATA_CNF_CHECK_OFFSET_PASS  = 6,
   RF_TEST_SET_TX_DATA_BITMAP_COUNT_MISMATCH  = 7,
   RF_TEST_SET_TX_DATA_NULL_PEER_BUF          = 8,
   RF_TEST_SET_TX_DATA_RECORD_SET_FAIL        = 9,
   RF_TEST_SET_TX_DATA_CNF_STATUS_MAX      = 0xFFFF
}RfTestSetTxData_Cnf_Status_E;

typedef enum
{
   RF_TEST_SET_TX_RUNTIME_DATA_STATUS_INVALID           = 0,
   RF_TEST_SET_TX_RUNTIME_DATA_STATUS_OK                = 1,  // set runtime success
   RF_TEST_SET_TX_RUNTIME_DATA_STATUS_BAND_NOT_SUPPORT  = 2,  // band mismatch with route
   RF_TEST_SET_TX_RUNTIME_DATA_STATUS_MAX,
}RfTestSetTxData_RunTime_Status_E;

typedef struct
{
    kal_uint16  count;
    kal_uint16  bitmap;   //add bitmap for tool team debug
}RfTestSetTxDataCnfParamEntry_T; // Similar with RfTestParamDynamicEntryElm_T

typedef struct
{
   RfTestSetTxData_Cnf_Status_E        set_txdata_cnf_status;
   RfTestSetTxDataCnfParamEntry_T      type1_result;
   RfTestSetTxDataCnfParamEntry_T      type2_result;
   RfTestSetTxDataCnfParamEntry_T      type3_result;
   RfTestSetTxDataCnfParamEntry_T      type4_result;
   RfTestSetTxData_RunTime_Status_E    type1_ramptable_result[8];
   RfTestSetTxData_RunTime_Status_E    type2_epsk_interramptable_result[4];
   RfTestSetTxData_RunTime_Status_E    type3_txpc_result[2];
   RfTestSetTxData_RunTime_Status_E    type4_epskpa_result;  //RFSpecialCoef.tx.orionRFtx.data...
}RfTestCmdSetTxDataCnfParam;
/* -------------------------------------- */


/* -------------------- *\
|* GET TX CMD CNF Struct   *|
 \* -------------------- */
typedef enum
{
   RF_TEST_GET_TX_DATA_CNF_STATUS_INVALID         = 0,
   RF_TEST_GET_TX_DATA_CNF_STATUS_OK              = 1,
   RF_TEST_GET_TX_DATA_BITMAP_COUNT_MISMATCH      = 2,
   RF_TEST_GET_TX_DATA_OFFSET_MISMATCH            = 3,
   RF_TEST_GET_TX_DATA_NULL_PEER_BUF              = 4,
   RF_TEST_GET_TX_DATA_PEER_BUF_SIZE_OVERFLOW     = 5,
   RF_TEST_GET_TX_DATA_CNF_STATUS_MAX      = 0xFFFF
}RfTestGetTxData_Cnf_Status_E;

//typedef struct
//{
//    kal_uint16  count;
//    kal_uint16  offset;
//}RfTestGetParamDynamicEntryElm_T;

typedef enum
{
   RF_TEST_GET_TX_RUNTIME_DATA_STATUS_INVALID           = 0,
   RF_TEST_GET_TX_RUNTIME_DATA_STATUS_OK                = 1,  // set runtime success
   RF_TEST_GET_TX_RUNTIME_DATA_STATUS_BAND_NOT_SUPPORT  = 2,  // band mismatch with route
   RF_TEST_GET_TX_RUNTIME_DATA_STATUS_MAX,
}RfTestGetTxData_RunTime_Status_E;

typedef struct
{
   RfTestGetTxData_Cnf_Status_E      get_txdata_cnf_status;
   RfTestParamDynamicEntryElm_T      type1_ramptable_data;
   RfTestParamDynamicEntryElm_T      type2_epsk_interramptable_data;
   RfTestParamDynamicEntryElm_T      type3_txpc_data;
   RfTestParamDynamicEntryElm_T      type4_epskpa_data;
   RfTestGetTxData_RunTime_Status_E    type1_ramptable_result[8];
   RfTestGetTxData_RunTime_Status_E    type2_epsk_interramptable_result[4];
   RfTestGetTxData_RunTime_Status_E    type3_txpc_result[2];
   RfTestGetTxData_RunTime_Status_E    type4_epskpa_result;  //RFSpecialCoef.tx.orionRFtx.data...
}RfTestCmdGetTxDataCnfParam;

typedef struct
{
   union
   {
      kal_int32                        get_txdata_cnf_pdu_raw_data[RF_MAX_PEER_BUF_CNF_WORD_SIZE];
      L1_Ramptable_Type1_T             type1_ramptable_pdu[8];
	  #if MD_DRV_IS_EPSK_TX_SUPPORT
      L1_EPSK_InterRamptable_Type2_T   type2_epsk_interramptable_pdu[4];
	  #endif
      L1_Txpc_Type3_T                  type3_txpc_pdu[2];
      L1_EpskPA_Type4_T                type4_epskpa_pdu;
   } confirm;
}RfTestCmdGetTxDataCnfPdu;
/* -------------------------------------- */



/* -------------------- *\
|* SET RX CMD CNF Struct   *|
 \* -------------------- */
#if IS_2G_RXD_SUPPORT
typedef enum
{
   RF_TEST_SET_RX_DATA_CNF_STATUS_INVALID     = 0,
   RF_TEST_SET_RX_DATA_CNF_STATUS_OK          = 1,
   RF_TEST_SET_RX_DATA_TYPE2_OFFSET_ERROR     = 2,  // Type-2 count/offset mismatch
   RF_TEST_SET_RX_DATA_TYPE3_OFFSET_ERROR     = 3,  // Type-3 count/offset mismatch
   RF_TEST_SET_RX_DATA_TYPE4_OFFSET_ERROR     = 4,  // Type-4 count/offset mismatch
   RF_TEST_SET_RX_DATA_EXCESS_REQ_PDU_LENGTH  = 5,
   RF_TEST_SET_RX_DATA_CNF_CHECK_OFFSET_PASS  = 6,
   RF_TEST_SET_RX_DATA_BITMAP_COUNT_MISMATCH  = 7,
   RF_TEST_SET_RX_DATA_NULL_PEER_BUF          = 8,
   RF_TEST_SET_RX_DATA_RECORD_SET_FAIL        = 9,
   RF_TEST_SET_RX_DATA_CNF_STATUS_MAX      = 0xFFFF
}RfTestSetRxData_Cnf_Status_E;

typedef enum
{
   RF_TEST_SET_RX_RUNTIME_DATA_STATUS_INVALID           = 0,
   RF_TEST_SET_RX_RUNTIME_DATA_STATUS_OK                = 1,  // set runtime success
   RF_TEST_SET_RX_RUNTIME_DATA_STATUS_BAND_NOT_SUPPORT  = 2,  // band mismatch with route
   RF_TEST_SET_RX_RUNTIME_DATA_STATUS_MAX,
}RfTestSetRxData_RunTime_Status_E;

typedef struct
{
    kal_uint16  count;
    kal_uint16  bitmap;   //add bitmap for tool team debug
}RfTestSetRxDataCnfParamEntry_T; // Similar with RfTestParamDynamicEntryElm_T

typedef struct
{
   RfTestSetRxData_Cnf_Status_E        set_rxdata_cnf_status;
   RfTestSetRxDataCnfParamEntry_T      type1_result;
   RfTestSetRxDataCnfParamEntry_T      type2_result;
   RfTestSetRxData_RunTime_Status_E    type1_rxpathloss_result[8];
   RfTestSetRxData_RunTime_Status_E    type2_wcoef_result[2];
}RfTestCmdSetRxDataCnfParam;
/* -------------------------------------- */


/* -------------------- *\
|* GET RX CMD CNF Struct   *|
 \* -------------------- */
typedef enum
{
   RF_TEST_GET_RX_DATA_CNF_STATUS_INVALID         = 0,
   RF_TEST_GET_RX_DATA_CNF_STATUS_OK              = 1,
   RF_TEST_GET_RX_DATA_BITMAP_COUNT_MISMATCH      = 2,
   RF_TEST_GET_RX_DATA_OFFSET_MISMATCH            = 3,
   RF_TEST_GET_RX_DATA_NULL_PEER_BUF              = 4,
   RF_TEST_GET_RX_DATA_PEER_BUF_SIZE_OVERFLOW     = 5,
   RF_TEST_GET_RX_DATA_CNF_STATUS_MAX      = 0xFFFF
}RfTestGetRxData_Cnf_Status_E;

//typedef struct
//{
//    kal_uint16  count;
//    kal_uint16  offset;
//}RfTestGetParamDynamicEntryElm_T;

typedef enum
{
   RF_TEST_GET_RX_RUNTIME_DATA_STATUS_INVALID           = 0,
   RF_TEST_GET_RX_RUNTIME_DATA_STATUS_OK                = 1,  // set runtime success
   RF_TEST_GET_RX_RUNTIME_DATA_STATUS_BAND_NOT_SUPPORT  = 2,  // band mismatch with route
   RF_TEST_GET_RX_RUNTIME_DATA_STATUS_MAX,
}RfTestGetRxData_RunTime_Status_E;

typedef struct
{
   RfTestGetRxData_Cnf_Status_E      get_rxdata_cnf_status;
   RfTestParamDynamicEntryElm_T      type1_rxpathloss_data;
   RfTestParamDynamicEntryElm_T      type2_wcoef_data;
   RfTestGetRxData_RunTime_Status_E    type1_rxpathloss_result[8];
   RfTestGetRxData_RunTime_Status_E    type2_wcoef_result[2];
}RfTestCmdGetRxDataCnfParam;

typedef struct
{
   union
   {
      kal_int32                        get_rxdata_req_pdu_raw_data[RF_MAX_PEER_BUF_CNF_WORD_SIZE];
      L1_SetGetRxPathLossEntry_Type1_T   type1_pathloss_pdu[8];
      L1_Wcoef_Type2_T   type2_wcoef_pdu[2];
   } confirm;
}RfTestCmdGetRxDataCnfPdu;
#endif  //#if IS_2G_RXD_SUPPORT
/* -------------------------------------- */


typedef union
{
   kal_bool                       ok;
   kal_int8                       m_i1RfPwrState_FT;
   kal_int16                      m_sBBPowerArrary[20];   /// META_Rf_QueryBBPowerList_r output
   kal_uint8                      nvramAccessResult;      //RF_NVRAM_ACCESS_CAl_DATA_RESULT
   kal_uint8                      m_u1NSFTRxQual;         /// L1TST_ReportRXQual output
   kal_uint8                      m_ucNumOfGainRf;        /// META_Rf_QueryNumOfGainRf_r output
   kal_uint16                     m_u2NSFTRxLevel;        /// L1TST_ReportRXLEV output
   kal_uint16                     temperature;            /// L1TST_TXPC_GetTemperature output: RF_TEST_CMD_GET_TXPC_TEMPERATURE
   kal_uint16                     m_txpc_subband_compensation[11];   /// L1TST_TXPC_CL_GetSubband output   
   RF_DTS_GET_RESULT_STATUS       dts_get_result_status;
   RfGetAfcOffsetResult           afc_result;
   RfGetAfcDacValueAtRTXOffsetCal GetAfcDacValueAtRTXOffsetCal;
   RfNSFTSBERResult               m_rNSFTSBER;   
   RfTestResultPm                 pm;
   RfTestResultAfc                afc;
   RfTestResultSinewaveAfcGetTempFreq  afc_gpscoclockv2_result;
   RfTestResultGetBSI             GetBSI;
   RfTestResultGetRFID            rfid;
   RfTestResultPDValue            txpc_cnf;
   RfTestResultGetBBTXCfg2        BBTxCfg2;
   RfTestResultGetBBTXCfg3        BBTxCfg3;
   RfTestResultGetBBTXCfg4        BBTxCfg4;
   RfTestResultListModeNSFT       List_Mode_NSFT_result;
   RfTestResultMsCapability       ms_capability;    
   RfTestResultMsCapabilityEx     ms_capability_ex;
   RfTestResult32kCalibration     calibration_32k;
   RfTestResultRfTemperatureInfo  rfTemperatureInfo;
   RfCheckIfFuncExist            CheckIfFuncExist;
   RfTestCmdSetTxDataCnfParam     set_txdata_cnf;
   RfTestCmdGetTxDataCnfParam     get_txdata_cnf;
   #if IS_2G_RXD_SUPPORT
   kal_uint16                     m_u2NSFTRxLevel_v5[GSM_RF_MAX_RX_ANT_NUM];        /// L1TST_ReportRXLEV output
   RfTestResultPm_V5              pm_v5;
   RfTestCmdSetRxDataCnfParam     set_rxdata_cnf;
   RfTestCmdGetRxDataCnfParam     get_rxdata_cnf;
   RfTestResultRxGainCalculate_V5   rx_gain_calculate_cnf;
   #endif
} RfTestResultParam;

/*******************************************************************************
*
*  Message structures defined for L1TST Interface
*
*******************************************************************************/
typedef struct
{
  FT_HDR
  RfTestCmdType     type;
  RfTestCmdParam    param;
} ft_rf_test_req_T;

typedef struct
{
  FT_HDR
  RfTestCmdType      type;
  RfTestResultParam  param;
} ft_rf_test_cnf_T;

typedef ft_rf_test_req_T ft_to_gl1tst_struct;
typedef ft_rf_test_cnf_T gl1tst_to_ft_struct;

typedef ft_rf_test_req_T ft_rf_test_req_id_struct;
typedef ft_rf_test_cnf_T ft_rf_test_cnf_id_struct;

#endif /* _L1TST_FT_MSG_STRUCT_H_ */
