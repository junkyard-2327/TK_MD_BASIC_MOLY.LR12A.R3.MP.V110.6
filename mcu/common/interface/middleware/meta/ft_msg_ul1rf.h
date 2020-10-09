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
*  Modification Notice:
*  --------------------------
*  This software is modified by MediaTek Inc. and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2001
*
*******************************************************************************/

/*******************************************************************************
 * Filename:
 * ---------
 *   ft_msg_ul1rf.h
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description:
 * ------------
 *   Messages definition of UL1 RF category of FT Library
 *
 * Author:
 * -------
 * -------
 *
 *==============================================================================
 *              HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
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
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *==============================================================================
 *******************************************************************************/

#ifndef __FT_MSG_UL1RF_H__
#define __FT_MSG_UL1RF_H__
#include "ft_msg_common.h"
#include "ul1d_rf_public.h"

#include "kal_public_defs.h"


#define UL1TST_LNA_MODE_NUMBER_EXT 6

#define UL1_DPD_FDB_NUM                    (CAL_UARFCN_SECTION * UL1_DPD_MAX_PA_LEVEL_NUM) /* refer to f_db in U_sDPD_COMMON_CAL */
#define UL1_DPD_MAX_PTAR_TH_NUM            (CAL_UARFCN_SECTION * UL1_DPD_MAX_PA_LEVEL_NUM) /* refer to pa_idx_th in U_sDPD_COMMON_CAL */
#define UL1_DPD_MAX_IMPLICIT_RSV_NUM       0
#define UL1_DPD_MAX_IMPLICIT_NUM           (UL1_DPD_FDB_NUM + UL1_DPD_MAX_PTAR_TH_NUM + UL1_DPD_MAX_IMPLICIT_RSV_NUM)
#define UL1_DPD_MAX_SET_ALL_DATA_NUM       (7)  /* floor(MMRF_MAX_TOOL_PEER_SIZE_PER_CMD / sizeof(URfTestCmd_SetDpdPaAndDpdFacCalAll_OneBand)) */
#define UL1_DPD_MAX_GET_ALL_DATA_NUM       (UL1_DPD_MAX_SET_ALL_DATA_NUM)
#define UL1_DPD_MAX_SET_PARTIAL_DATA_NUM   (239) /* floor(MMRF_MAX_TOOL_PEER_SIZE_PER_CMD / sizeof(URfTestCmd_SetDpdPaAndDpdFacCalPartial_OneBand)) */

/*******************************************************************************
*
*  Message structures defined for UL1 TST Interface
*
*******************************************************************************/
#if defined(__UMTS_RAT__) && defined(__MTK_UL1_FDD__)

//type1: communicate with ul1tst module, and send the confirm without waiting!
//type2: communicate with u1ltst module, and wait their confirm, then send back to PC
//type3: invoke UL1D's API, then send confirm to PC side.
//type4: no operation, only get FT task's current status, and reply to PC side

typedef enum
{
   URF_TEST_CMD_TXACCESS = 0,
   URF_TEST_CMD_STOP = 1,
   URF_TEST_CMD_TX_DPCH = 2,
   URF_TEST_CMD_RX_DPCH = 3,
   URF_TEST_CMD_RSSI = 4,
   URF_TEST_CMD_RSCP = 5,
   URF_TEST_CMD_AFC = 6,
   URF_TEST_CMD_TX_PAAPC = 7,
   URF_TEST_CMD_GET_RFID = 8,
   URF_TEST_CMD_CONFIG_HWTPC = 9,
   URF_TEST_CMD_GET_PWR_DT_STEP = 10,
   URF_TEST_CMD_GET_PWR_DT_DAC = 11,
   URF_TEST_CMD_GET_PWR_DT_DEFAULT_THR = 12,
   URF_TEST_CMD_SET_IMMEDIATE_BSI = 13,
   URF_TEST_CMD_GET_IMMEDIATE_BSI = 14,
   URF_TEST_CMD_CONTINUOUS_RX = 15,
   URF_TEST_CMD_START_FHC = 16,
   URF_TEST_CMD_SET_TXDAC_DATA = 17,
   URF_TEST_CMD_GET_PWR_DET_MEASURE_RES = 18,
   URF_TEST_CMD_SET_PWR_CTRL_MODE = 19,
   URF_TEST_CMD_REPLACE_GAIN_TABLE_FOR_CAL = 20,
   URF_TEST_CMD_START_FHC_NO_WAIT = 21,
   URF_TEST_CMD_GET_FHC_RESULT = 22,
   URF_TEST_CMD_QUERY_TARGET_CAPABILITY = 23,
   URF_TEST_CMD_START_NSFT = 24,
   URF_TEST_CMD_GET_BIT_COUNT_FOR_SINGLE_ENDED_BER = 25,
   URF_TEST_CMD_NSFT_SET_ILPC_STEP = 26,
   URF_TEST_CMD_START_NSFT_EX = 27,
   URF_TEST_CMD_SET_PA_OCT_LEVEL_DATA = 28,
   URF_TEST_CMD_START_HSDPA_NSFT = 29,
   URF_TEST_CMD_START_HSUPA_NSFT = 30,
   URF_TEST_CMD_START_FHC_EX = 31,
   URF_TEST_CMD_GET_FHC_EX_RESULT = 32,
   URF_TEST_CMD_GET_CURRENT_LNA_MODE = 33,
   URF_TEST_CMD_SET_CAPID = 34,
   URF_TEST_CMD_GET_MAX_CAPID = 35,
   URF_TEST_CMD_AFC_EX = 36,
   URF_TEST_CMD_RSSI_RXD = 37,
   URF_TEST_CMD_GET_CURRENT_RXD_LNA_MODE = 38,
   URF_TEST_CMD_SET_RX_BANDWIDTH = 39,
   URF_TEST_CMD_SET_RX_ANTENNA = 40,
   URF_TEST_CMD_SET_TX_PA_DRIFT_COMPENSATION = 41,
   URF_TEST_CMD_SET_ICS_CELL_POWER = 42,
   URF_TEST_CMD_GET_RF_TEMP_BSI = 43,
   URF_TEST_CMD_GET_RF_CAPABILITY = 44,
   URF_TEST_CMD_START_NSFT_LIST_MODE  = 45,
   URF_TEST_CMD_SET_RF_MIPI_CODEWORD = 46,
   URF_TEST_CMD_GET_RF_MIPI_CODEWORD = 47,
   URF_TEST_CMD_GET_TEMPERATURE_INFO = 48,
   URF_TEST_CMD_RX_GAIN_SWEEP = 49,
   URF_TEST_CMD_RELOAD_NVRAM = 50,
   URF_TEST_CMD_CHECK_IF_FUNC_EXIST = 51,
   URF_TEST_CMD_UBIN_MODE_SETUP = 52,
   URF_TEST_CMD_SET_RX_PATH_LOSS = 53,
   URF_TEST_CMD_GET_RX_PATH_LOSS = 54,
   URF_TEST_CMD_RSSI_LPM = 55,
   URF_TEST_CMD_RSSI_RXD_LPM = 56,
   URF_TEST_CMD_CONTINUOUS_RX_LPM = 57,
   URF_TEST_CMD_NSFT_GET_RSSI = 58,
   URF_TEST_CMD_SET_RX_CALIBRATION_DATA = 59,
   URF_TEST_CMD_GET_RX_CALIBRATION_DATA = 60,
   URF_TEST_CMD_SET_TX_CALIBRATION_DATA = 61,
   URF_TEST_CMD_GET_TX_CALIBRATION_DATA = 62,
   URF_TEST_CMD_NSFT_RESET_BER_RESULT = 66,
   URF_TEST_CMD_FHC_ELNA = 67,
   URF_TEST_CMD_GET_RSSI_ELNA = 68,
   URF_TEST_CMD_GET_CONTINUOUS_RSSI_ELNA = 69,
   URF_TEST_CMD_TX_DPCH_FIX_PGA_GAIN = 70,
   URF_TEST_CMD_GET_CALIBRATION_INFO_V3 = 71,
   URF_TEST_CMD_START_FHC_V3 = 72,
   URF_TEST_CMD_GET_FHC_RESULT_V3 = 73,
   URF_TEST_CMD_GET_RSSI_V3 = 74,
   URF_TEST_CMD_GAIN_SELECT_PWR_V3 = 75,
   URF_TEST_CMD_GAIN_SELECT_LNA_V3 = 76,
   URF_TEST_CMD_GET_RXTX_CALIBRATION_DATA_V3 = 77,          //after 6293
   URF_TEST_CMD_SET_RXTX_CALIBRATION_DATA_V3 = 78,          //after 6293
   URF_TEST_CMD_RSCP_V3 = 79,
   URF_TEST_CMD_AFC_V3 = 80,
   URF_TEST_CMD_AFC_CAPID_V3 = 81,
   URF_TEST_CMD_LOW_POWER_CAL_V3 = 82,
   URF_TEST_CMD_TRIGGER_IQ_DUMP_MODE_V3 = 88,
   URF_TEST_CMD_GET_IQ_DUMP_RESULT_V3 = 89,
   URF_TEST_CMD_SET_RFEQ_SUBBAND_RESULT_V3 = 90,
/*----------------------------------------------------------------------------------------------------*/
   URF_TEST_CMD_GP_TOOL_COMMAND_START,
   URF_TEST_CMD_END,
   URF_TEST_CMD_MAX                     = 0x7FFFFFFF
} URfTestCmdType;
typedef struct
{
    kal_uint16  ul_uarfcn;      /* UL uarfcn range:????Read from NVRAM?? (9612 ~ 9888) */
    kal_uint16  dl_psc;         /* 0~511. */
    kal_uint16  signature;      /* 0~15, for single signature decision. */
    kal_uint8   pa_mode;        /* 0: High 1: Middle 2: Low */
    kal_int8    init_power;     /* Assume cpich_rscp=0, ul_interference=0. */
    kal_uint8   power_step;     /* Preamble power ramping step. 1 ~ 8dB */
    kal_uint8   max_retrans;    /* 1~64. */
    kal_uint16  dl_uarfcn;
    kal_uint8   asc;
} URfTestCmdTxAccess;
typedef struct
{
    kal_uint16  ul_freq;
    kal_int16   psc;        /* 0~511. */
    kal_uint32  sc_code;    /* Scrambling code #. 0 ~ 16777215 */
    kal_uint8   power_ctrl_mode;
    kal_uint8   pa_mode;
    kal_uint16  idx;
    kal_uint16  afc_dac;
    kal_uint8   dpcch_pwr;
    kal_uint8   dpdch_pwr;

    /* Below for UL1D_RF_Meta_SetTxInfo. */
    kal_bool    no_loop_ctrl;

    /* Below for setPaApcDac. */
    kal_uint8   rf_band;
    kal_uint8   vm1;
    kal_uint8   vm2;
    kal_uint16  dc2dc_dac;
    kal_uint16  vbias_dac;
    kal_bool    pwr_det;
    kal_uint16  apc_dac;
    kal_bool    pa_octlev_ctrl_used;
} URfTestCmdTxDPCh;

typedef struct
{
    kal_uint16  dl_freq;
    kal_int16   psc;        /* 0~511. */
    kal_uint8   ssc;        /* 0~15. */
    kal_int16   ovsf;       /* 0~sf-1. */
    kal_uint16  afc_dac;

    /* Below for RF_SetBBRxParams. */
    kal_bool    hwAGC;
    kal_uint8   mode;       /* 0: mode0, 1: mode1. */
    kal_int16   gain;       /* mode0. */
    kal_uint8   LNAmode;    /* mode1. 0: LNA low, 1: LNA mid, 2: LNA high. */
    kal_uint16  pga;        /* mode1. */
} URfTestCmdRxDPCh;
#define FDD_MAX_FREQ_LIST 36
typedef struct
{
    kal_uint8   num_freq;
    kal_uint16  dl_freq[ FDD_MAX_FREQ_LIST ];
    kal_uint8   temperature;

    /* Below for RF_SetBBRxParams. */
    kal_bool    hwAGC;
    kal_uint8   mode;       /* 0: mode0, 1: mode1. */
    kal_int16   gain;       /* mode0. */
    kal_uint8   LNAmode;    /* mode1. 0: LNA low, 1: LNA mid, 2: LNA high. */
    kal_uint16  pga;        /* mode1. */
} URfTestCmdRSSI;

typedef struct
{
    kal_uint8   num_freq;
    kal_uint16  dl_freq[ FDD_MAX_FREQ_LIST ];
    kal_uint8   temperature;

    /* Below for RF_SetBBRxParams. */
    kal_bool    hwAGC;
    kal_uint8   mode;       /* 0: mode0, 1: mode1. */
    kal_int16   gain;       /* mode0. */
    kal_uint8   LNAmode;    /* mode1. 0: LNA low, 1: LNA mid, 2: LNA high. */
    kal_uint16  pga;        /* mode1. */
    kal_uint8   lpm_mode;   /* 0: normal LNA gain mode , 1: low power LNA gain mode. */
} URfTestCmdLPMRSSI;

typedef struct
{
    kal_uint8   num_freq;
    kal_uint16  dl_freq[ FDD_MAX_FREQ_LIST ];
    kal_uint16  scc_dl_freq[ FDD_MAX_FREQ_LIST ];
    kal_int16   settings;    //  PCC  SRX/LNA Settings
    kal_uint8   srxcfg;
    kal_uint8   vcocfg;
    kal_uint8   lnaport;
    kal_uint8   temperature;

    /* Below for RF_SetBBRxParams. */
    kal_bool    hwAGC;
    kal_uint8   mode;       /* 0: mode0, 1: mode1. */
    kal_int16   gain;       /* mode0. */
    kal_uint8   LNAmode;    /* mode1. 0: LNA low, 1: LNA mid, 2: LNA high. */
    kal_uint16  pga;        /* mode1. */
} URfTestCmdCARSSI;

typedef struct
{
    kal_uint8   num_freq;
    kal_uint16  dl_freq[ FDD_MAX_FREQ_LIST ];
    kal_uint8   temperature;

    /* Below for RF_SetBBRxParams. */
    kal_bool    hwAGC;
    kal_uint8   mode;       /* 0: mode0, 1: mode1. */
    kal_int16   gain;       /* mode0. */
    kal_uint8   LNAmode;    /* mode1. 0: LNA low, 1: LNA mid, 2: LNA high. */
    kal_uint16  pga;        /* mode1. */
} URfTestCmdRxGainSweep;

typedef struct
{
    kal_bool    pscan_before_cell_search;   /* True if UL1TST needs power scan before cell search/RSCP. */
    kal_uint16  dl_freq;    /* Specific dl_freq to do cell search. Valid if pscan_before_cell_search=F. */
    kal_uint8   sample_num_per_cell;
    kal_bool    read_sfn;   /* True if we need to do SFN measurement for the found cell. */

    /* Below for RF_SetBBRxParams. */
    kal_bool    hwAGC;
    kal_uint8   mode;       /* 0: mode0, 1: mode1. */
    kal_int16   gain;       /* mode0. */
    kal_uint8   LNAmode;    /* mode1. 0: LNA low, 1: LNA mid, 2: LNA high. */
    kal_uint16  pga;        /* mode1. */
} URfTestCmdRSCP;

typedef struct
{
    kal_uint16  dl_freq;    /* Specific dl_freq to do cell search. Valid if pscan_before_cell_search=F. */
} UTSTCmdRSCPV3lp;


typedef struct
{
    kal_int16    dl_freq;     /* Specific dl_freq to do cell search. Valid if pscan_before_cell_search=F. */
    kal_int16    afc_dac;
    /* Below for RF_SetBBRxParams. */
    kal_bool     hwAGC;
    kal_uint8    mode;        /* 0: mode0, 1: mode1. */
    kal_int16    gain;        /* mode0. */
    kal_uint8    LNAmode;     /* mode1. 0: LNA low, 1: LNA mid, 2: LNA high. */
    kal_uint16   pga;         /* mode1. */
} URfTestCmdAFC;

typedef struct
{
    kal_int16    dl_freq;     /* Specific dl_freq to do cell search. Valid if pscan_before_cell_search=F. */
    kal_int16    afc_dac;
} UTSTCmdAFCV3lp;


typedef struct
{
    kal_int8     m_cRfBand;
    kal_uint16   m_u2Idx;
    kal_uint8    m_ucPaMode;
    kal_uint8    m_ucVm1;
    kal_uint8    m_ucVm2;
    kal_uint16   m_u2DC2DC_Dac;
    kal_uint16   m_u2Vbias_Dac;
    kal_uint16   m_u2ApcDac;

}UL1D_RF_TX_PA_APC_REQ_T;

typedef struct
{
    //should be exactly the same as META_HWTPC_FRAME_INFO in ul1d_rf_general.h
    kal_uint8 tpc_step;
    kal_uint8 itp;
    kal_uint8 rpp;
    kal_uint8 fmt_idx;
    kal_uint8 dl_frame_type;
    kal_uint16 slot_mask;
    kal_int8   tpc_cmd[15];
    kal_uint8  beta_c;
    kal_uint8  beta_d;

}UL1D_RF_HWTPC_FRAME_INFO;
typedef struct
{
    kal_uint8 pc_algo;
    kal_uint8 tpc_used_frame; // specify the frame number
    kal_int16 p_ini;

    UL1D_RF_HWTPC_FRAME_INFO frame_info[8];

}UL1D_RF_HWTPC_CONFIG_REQ_T;

typedef struct
{
    kal_uint8 rf_band;

}UL1D_RF_GET_PWR_THR_REQ_T;

typedef struct
{
   kal_uint32          lid;      // the lid is needed to update run-time value
   kal_uint32          eg_ptr;   // the event group pointer used to notify runt-time update finish
} URFTestCmdReloadNVRAM;

typedef struct
{
    kal_bool      no_loop_ctrl;
    kal_uint16    afc_dac;
    kal_bool      pwr_det;
    kal_uint8     power_ctrl_mode;
    kal_uint8     vm1[10][3];
    kal_uint8     vm2[10][3];
    kal_uint16    dc2dc_dac[10][3];
    kal_uint16    vbias_dac[10][3];
    kal_bool      init_tx_onoff;
    kal_bool      ready_tx_onoff;
    kal_uint8     init_pa_mode;
    kal_uint8     ready_pa_mode;
    kal_uint16    init_pa_gain;
    kal_uint16    ready_pa_gain;
    kal_uint16    init_vga_dac_tpc_idx;
    kal_uint16    ready_vga_dac_tpc_idx;
    kal_uint8     temperature;
    kal_bool      hwAGC;
    kal_int16     gain_init;
    kal_bool      init_condition;
    kal_uint8     step_duration;
    kal_uint8     ready_duration;
    kal_uint8     retune_duration;
    kal_uint8     gain_stable_time;
    kal_uint16    max_vga_dac;
    kal_uint16    min_vga_dac;
    kal_uint16    jump_vga_dac;
    kal_uint8     freq_count;
    kal_uint8     pwr_count;
    kal_uint8     freq_start_idx;
    kal_uint8     pwr_start_idx;
    kal_uint8     odd_record;
    kal_uint8     pa_gain_start_idx;
    kal_uint8     pd_gain_start_idx;
    kal_uint8     dl_band[40];
    kal_uint8     ul_band[40];
    kal_uint16    dl_freq[40];
    kal_uint16    ul_freq[40];
    kal_uint8     pa_mode[40];
    kal_uint16    vga_dac_tpc_idx[40];
    kal_uint16    pa_gain[40];
    kal_uint8     pd_gain[40];
}UL1D_RF_FHC_REQ_T;

typedef struct
{
    kal_bool      no_loop_ctrl;
    kal_uint16    afc_dac;
    kal_bool      pwr_det;
    kal_uint8     power_ctrl_mode;
    kal_uint8     vm1[10][3];
    kal_uint8     vm2[10][3];
    kal_uint16    dc2dc_dac[10][3];
    kal_uint16    vbias_dac[10][3];
    kal_bool      init_tx_onoff;
    kal_bool      ready_tx_onoff;
    kal_uint8     init_pa_mode;
    kal_uint8     ready_pa_mode;
    kal_uint16    init_pa_gain;
    kal_uint16    ready_pa_gain;
    kal_uint16    init_vga_dac_tpc_idx;
    kal_uint16    ready_vga_dac_tpc_idx;
    kal_uint8     temperature;
    kal_bool      hwAGC;
    kal_int16     gain_init;
    kal_bool      init_condition;
    kal_uint8     step_duration;
    kal_uint8     ready_duration;
    kal_uint8     retune_duration;
    kal_uint8     gain_stable_time;
    kal_uint16    max_vga_dac;
    kal_uint16    min_vga_dac;
    kal_uint16    jump_vga_dac;
    kal_uint8     freq_count;
    kal_uint8     pwr_count;
    kal_uint8     freq_start_idx;
    kal_uint8     pwr_start_idx;
    kal_uint8     odd_record;
    kal_uint8     pa_gain_start_idx;
    kal_uint8     pd_gain_start_idx;
    kal_uint8     dl_band[40];
    kal_uint8     ul_band[40];
    kal_uint16    dl_freq[40];
    kal_uint16    ul_freq[40];
    kal_uint8     pa_mode[40];
    kal_uint16    vga_dac_tpc_idx[40];
    kal_uint16    pa_gain[40];
    kal_uint8     pd_gain[40];
    kal_uint8     pa_section[40];
    kal_uint16    lna_gain[40];
}UL1D_RF_FHC_EX_REQ_T;

typedef struct
{
    kal_bool      no_loop_ctrl;
    kal_uint16    afc_dac;
    kal_bool      pwr_det;
    kal_uint8     power_ctrl_mode;
    kal_uint8     vm1[10][3];
    kal_uint8     vm2[10][3];
    kal_uint16    dc2dc_dac[10][3];
    kal_uint16    vbias_dac[10][3];
    kal_bool      init_tx_onoff;
    kal_bool      ready_tx_onoff;
    kal_uint8     init_pa_mode;
    kal_uint8     ready_pa_mode;
    kal_uint16    init_pa_gain;
    kal_uint16    ready_pa_gain;
    kal_uint16    init_vga_dac_tpc_idx;
    kal_uint16    ready_vga_dac_tpc_idx;
    kal_uint8     temperature;
    kal_bool      hwAGC;
    kal_int16     gain_init;
    kal_bool      init_condition;
    kal_uint8     step_duration;
    kal_uint8     ready_duration;
    kal_uint8     retune_duration;
    kal_uint8     gain_stable_time;
    kal_uint16    max_vga_dac;
    kal_uint16    min_vga_dac;
    kal_uint16    jump_vga_dac;
    kal_uint8     freq_count;
    kal_uint8     pwr_count;
    kal_uint8     freq_start_idx;
    kal_uint8     pwr_start_idx;
    kal_uint8     odd_record;
    kal_uint8     pa_gain_start_idx;
    kal_uint8     pd_gain_start_idx;
    kal_uint8     dl_band[40];
    kal_uint8     ul_band[40];
    kal_uint16    dl_freq[40];
    kal_uint16    ul_freq[40];
    kal_uint8     pa_mode[40];
    kal_uint16    vga_dac_tpc_idx[40];
    kal_uint16    pa_gain[40];
    kal_uint8     pd_gain[40];
    kal_uint8     pa_section[40];
    kal_uint16    lna_gain[40];
    kal_uint8     cal_num;
    kal_uint8     route_setting[3];
}UL1D_RF_FHC_EX_CA_REQ_T;

typedef struct
{
    kal_bool        ok;
    kal_uint8       freq_count;
    kal_uint8       pwr_count;
    kal_uint8       freq_start_idx;
    kal_uint8       pwr_start_idx;
    kal_int16       rssi[400];
    kal_uint16      pwr_det_value[40];
}UL1D_RF_FHC_CNF_T;

typedef struct
{
    kal_bool     ok;
    kal_uint8    freq_count;
    kal_uint8    pwr_count;
    kal_uint8    freq_start_idx;
    kal_uint8    pwr_start_idx;
    kal_uint8    rx_lna_mode[400];
    kal_int16    rssi[400];
    kal_uint16   pwr_det_value[40][3];
/**V R8 new features */
    kal_int16    Gbb_Offset[400];   /**< \brief TX Gbb power compensation */
    kal_uint8    rxd_lna_mode[400]; /**< \brief Rx diversity path lna mode */
    kal_int16    rxd_rssi[400];     /**< \brief Rx diversity path RSSI */    
}UL1D_RF_FHC_EX_CNF_T;

typedef struct
{

   kal_bool      b_afc_dac_valid;
   kal_uint16    u2_afc_dac;
   kal_uint8     u1_loopbackType;
   kal_uint8     u1_frame_shift;
   kal_uint8     u1_rmc_type;
   kal_uint8     u1_ctfc[4];
   kal_uint8     u1_bit_pattern;

   kal_int16     i2_dl_freq;
   kal_int16     i2_dl_psc;
   kal_int16     i2_dl_ovsf;

   kal_int16     i2_ul_freq;
   kal_uint16    u2_ul_tfci;
   kal_uint32    u4_ul_sc_code;
   kal_bool      b_iq_pwr_valid;
   kal_uint8     u1_dpcch_pwr;
   kal_uint8     u1_dpdch_pwr;

}UL1D_RF_NSFT_REQ_T;
/**
 * NSFT List Mode command parameter
 */
typedef struct
{
   kal_bool    afc_dac_valid;
   kal_uint16  afc_dac;
   kal_uint8   loopbackType;
   kal_uint8   frame_shift;
   kal_uint8   rmc_type;
   kal_uint8   ctfc[4];
   kal_uint8   bit_pattern;
/* DL parameters */
   kal_int16   dl_freq[50];
   kal_int16   dl_psc;
   kal_int16   dl_ovsf;
/* UL parameters */
   kal_int16   ul_freq[50];
   kal_uint16  ul_tfci;
   kal_uint32  ul_sc_code;
   kal_bool    iq_pwr_valid;
   kal_uint8   dpcch_pwr;
   kal_uint8   dpdch_pwr;
/* common parameters */
   kal_uint8   valid_freq;
   kal_uint16  test_item[50];
/* the time settings, unit = frame */
   kal_uint16  full_test_time;
   kal_uint8   ready_time;
   kal_uint8   sync_time;
   kal_uint8   retrial;   
   kal_uint16  test_time;
   kal_uint16  rx_rssi_start_time[3];
   kal_uint8   rx_rssi_duration[3];
   kal_uint16  rx_ber_start_time;
   kal_uint8   rx_ber_duration;
   kal_uint16  ILPC_ABC_time;
   kal_uint16  ILPC_EF_time;
   kal_uint16  ILPC_GH_time;
   kal_uint16  transition_time;
} URfNsftListModeReq;
/**
 * HSPA command parameter
 */
typedef struct
{
   kal_bool      b_afc_dac_valid;
   kal_uint16    u2_afc_dac;
   kal_uint8     u1_loopbackType;
   kal_uint8     u1_frame_shift;
   kal_uint8     u1_rmc_type;
   kal_uint8     u1_ctfc[4];
   kal_uint8     u1_bit_pattern;

   kal_int16     i2_dl_freq;
   kal_int16     i2_dl_psc;
   kal_int16     i2_dl_ovsf;

   kal_int16     i2_ul_freq;
   kal_uint16    u2_ul_tfci;
   kal_uint32    u4_ul_sc_code;
   kal_bool      b_iq_pwr_valid;
   kal_uint8     u1_dpcch_pwr;
   kal_uint8     u1_dpdch_pwr;
   kal_uint8     subTest;
}URfTestCmdHspaNsft;

typedef struct
{
    kal_uint16 measure_count;
} URfTestCmdGetRfTempSensor;

typedef struct
{
    kal_bool    bDataValid;
    kal_uint32  u4TotalBits;
    kal_uint32  u4ErrorBits;
}UL1D_RF_NSFT_BET_BIT_CNT_FOR_BER_CNF_T;


typedef struct
{
    kal_bool    ok;
    kal_uint8   num_freq;
    kal_int16   dl_freq[ FDD_MAX_FREQ_LIST ];
    kal_int32   rssi[ FDD_MAX_FREQ_LIST ];
} URfTestResultRSSI;

// R8 both rx path RSSI result
typedef struct
{
   kal_bool    ok;
   kal_uint8   num_freq;
   kal_int16   dl_freq[ FDD_MAX_FREQ_LIST ];
   kal_int32   rssi[ FDD_MAX_FREQ_LIST ];
   kal_int32   rssi_rxd[ FDD_MAX_FREQ_LIST ];
} URfTestResultRSSIRxD;

typedef struct
{
   kal_bool    ok;
   kal_int32   NSFT_RSSI;
   kal_int32   NSFT_RSSI_RXD;
   kal_int32   cmd_location;
}URfTestResultNSFTRSSI;

typedef struct
{
    kal_bool    ok;
    kal_uint8   num_freq;
    kal_int16   dl_freq[ FDD_MAX_FREQ_LIST ];
    kal_int32   inband_pow[ FDD_MAX_FREQ_LIST ];
} URfTestResultRxGainSweep;

typedef struct
{
    kal_uint16  psc;        /* Primary scrambling code */
    kal_int32   tm;         /* Cell frame boundary offset to LST */
    kal_int16   off;        /* Cell frame number offset to LST */
    kal_bool    sttd;       /* True for STTD used. */
    kal_uint8   sample_num;
    kal_int16   rscp_sum;
    kal_int16   freq_error;
} URfTest_cpich_result_T;

#define MAX_NUM_MEAS_CELL 32

typedef struct
{
    kal_bool        ok;
    kal_uint8       num_cell;
    URfTest_cpich_result_T  cpich_result[ MAX_NUM_MEAS_CELL ];
} URfTestResultRSCP;

typedef struct
{
    kal_bool        ok;
    kal_uint8       num_cell;
    URfTest_cpich_result_T  cpich_result[ MAX_NUM_MEAS_CELL ];
} UTSTestResultRSCPV3lp;

typedef struct
{
    kal_bool       ok;
    kal_uint16     psc;
    kal_int32      tm;
    kal_bool       sttd;
    kal_uint8      rscp_sum;
    kal_int16      freq_error;

}URfTestResultAFC;

typedef struct
{
    kal_bool       ok;
    kal_uint16     psc;
    kal_int32      tm;
    kal_bool       sttd;
    kal_uint8      rscp_sum;
    kal_int16      freq_error;
}UTSTestResultAFCV3lp;

typedef struct
{
    kal_bool       ok;
    kal_uint16     psc;
    kal_int32      tm;
    kal_bool       sttd;
    kal_uint8      rscp_sum;
    kal_int32      freq_error;
}URfTestResultAFC_Ex;

typedef struct
{
    kal_bool    ok;
    kal_uint32  ber;    /* Spec requirement=10^-3. We will count 10^5 frames(100 times spec requirement) for BER calculation. Only count for the only TRCh for DPDCh. */
} URfTestResultRxDPCh;

typedef struct
{
    kal_uint32 m_u4Rfid;
}URfTestResultRFID;

typedef struct
{
    kal_uint8 m_u1Result;

}URfTestResultPwrDtStep;

typedef struct
{
    kal_uint16 m_u2Result;

}URfTestResultPwrDtDac;

typedef struct
{
    kal_uint8 m_u1Result;

}URfTestResultPwrDtDefaultThr;

typedef struct
{
    kal_bool      ok;
    kal_int8      m_i1CurGainTableState;

}URfTestResultReplaceGainTable;

typedef struct
{
   kal_uint32      capability;
   kal_uint32      band_support;
   kal_uint32      rxd_band_support;   
   kal_uint32      padrift_band_support;
   kal_uint32      wcdma_dpd_band_support;
}FT_UMTS_MsCapabilityEx;

typedef struct
{
    kal_bool   ok;
    kal_uint8  link_status;
}FT_UMTS_NSFTLinkStatusReport;

typedef struct 
{
    kal_bool    ok;    /*<! ok indicator */
    kal_uint32  sum;   /*<! the sum of measure_count times of temp sensor result */
} URfTestResultGetRfTempSensor;

typedef struct
{
    kal_bool   ok;
    kal_uint8  link_status;
} URfNsftListModeCnf;

typedef struct
{
    kal_uint16 rf_band_idx;
    kal_uint16 power_level_num;
    kal_uint16 code_word_num;
} URfTestCmdSetMIPICodeWord;

typedef struct
{
    kal_uint8  status;
    kal_uint16 power_level_num;
    kal_uint16 code_word_num;
} URfTestResultGetMIPICodeWord;

typedef struct
{
    kal_int16 status;
    kal_int16 tadc_dac;
    kal_int16 temperature;
    kal_int16 temp_idx;
} URfTestResultRfTemperatureInfo;

typedef struct 
{
    kal_uint32      result;         // 1: support 0: not support
    kal_uint32      query_op_code;  // query op code
}URfCheckIfFuncExist;

typedef  enum
{
   CNF_SUCCESS = 0,
   CNF_GENERAL_FAIL = 1,
   CNF_NVRAM_READ_FAIL = 2,
   CNF_FREQ_INVALID = 3,
   CNF_CMD_INVALID = 4,
   CNF_NVRAM_SET_FAIL = 5,
   CNF_TX_DATA_CHECK_FAIL = 6,
   CNF_TX_STRUCTURE_ERROR = 7,
   CNF_RX_STRUCTURE_ERROR = 8,
   CNF_TX_VGA_FREQ_CHECK_FAIL=9,
   CNF_TX_PWR_DT_FREQ_CHECK_FAIL=10,
//   CNF_RXTX_STRUCTURE_ERROR=11,            //after 6293, it can remove because no version number in 6293
   CNF_GET_RXTX_PEER_BUF_OVERFLOW=11,     //after 6293
   CNF_ADDRECORD_FAIL=12               //after 6293
}  NVRAM_ACCESS_RESULT_MSG;

/*TX/RX calibration data------------------------------------------------------------------------------------->*/
typedef struct
{
   kal_bool    ok;
   kal_uint8   error_check;         //for calibration data checking
   kal_uint8   version_number;
} URfTestResultCalDataProcess;      //after 6292 get/set  calibration data (confirm : local parameter) 
/*93 get/set command optimization Cnf-----------------------------*/
typedef struct
{
   kal_bool    ok;
   NVRAM_ACCESS_RESULT_MSG   error_check;          //for calibration data checking
   kal_uint8   rxm_result_num;                     //the number of bands to SET
   kal_uint8   rxd_result_num;
   kal_uint8   tx_result_num;
   NVRAM_ACCESS_RESULT_MSG  rxm_result[5];         //result status of SET command for each band
   NVRAM_ACCESS_RESULT_MSG  rxd_result[5];
   NVRAM_ACCESS_RESULT_MSG  tx_result[5];
} URfTestCmd_SetRxTxCalData_CnfParam_V3;           //Local parameter of confirm after 6293 set Rx/Tx cal data command

typedef struct
{
   kal_bool    ok;
   NVRAM_ACCESS_RESULT_MSG   error_check;          //for calibration data checking
   kal_uint8   rxm_count;                          //the number of bands to GET
   kal_uint8   rxd_count;
   kal_uint8   tx_count;
   kal_uint8   padding;
   kal_uint16  rxm_offset;                         //offset of data in peer buffer
   kal_uint16  rxd_offset;
   kal_uint16  tx_offset;
} URfTestCmd_GetRxTxCalData_CnfParam_V3;           //Local parameter of confirm  after 6293 get Rx/Tx cal data command
/*93 get/set command optimization Cnf-----------------------------*/
typedef struct
{
   kal_uint8   version_number;
   kal_bool    is_uplate_to_NVRAM;  //to memory or NVRAM
} URfTestCmdSetCalData ;            //after 6292 get/set  calibration data (command : local parameter)

typedef struct
{
   kal_uint8   version_number; 
} URfTestCmdGetCalData ;      //after 6292 get/set  calibration data (command : local parameter)
/*93 get/set command optimization Req--------------------------*/
typedef struct
{
   kal_uint8   rxm_band_num;                       //the number of bands to GET
   kal_uint8   rxd_band_num;
   kal_uint8   tx_band_num;
   kal_uint8   rxm_band_index[5];                  //Band index 
   kal_uint8   rxd_band_index[5];
   kal_uint8   tx_band_index[5];
} URfTestCmd_GetRxTxCalData_ReqParam_V3;           //Local parameter of request  after 6293 get Rx/Tx cal data command

typedef struct
{
   kal_bool    is_uplate_to_NVRAM;                 //write to NVRAM or not
   kal_uint8   rxm_count;                          //the number of bands to SET
   kal_uint8   rxd_count;
   kal_uint8   tx_count;
   kal_uint16  rxm_offset;
   kal_uint16  rxd_offset;
   kal_uint16  tx_offset;
} URfTestCmd_SetRxTxCalData_ReqParam_V3;           //Local parameter of request  after 6293 set Rx/Tx cal data command
/*93 get/set command optimization Req--------------------------*/
/*TX/RX calibration data<-------------------------------------------------------------------------------------*/

/*RX calibration data------------------------------------------------------------------------------------->*/
typedef  struct
{
   kal_uint16  uarfcn;
   kal_int8    path_loss_HPM[UL1TST_LNA_MODE_NUMBER_EXT];
   kal_int8    path_loss_LPM[UL1TST_LNA_MODE_NUMBER_EXT];
} UL1D_RF_LNA_PATHLOSS;       //after 6292 LNA pathloss format

typedef struct
{
   kal_uint8               band;
   kal_uint8               rxantpath;  // 1: main path  ,  2 : diversity path
   kal_int8                temper_offset[CAL_TEMP_SECTION];
   UL1D_RF_LNA_PATHLOSS    loss_of_uarfcn[CAL_UARFCN_SECTION];
} URfTestPathlossItem;       //after 6292 get/set RX pathloss  (confirm/command : peer buffer)
/*RX calibration data<-------------------------------------------------------------------------------------*/
/*RX calibration data----------6293---------------------------------------------------------------------->*/
#define UTST_NVRAM_SIZE_V3 7

typedef  struct
{
   kal_uint16  uarfcn;
   kal_int16    path_loss_HPM[UTST_NVRAM_SIZE_V3];
   kal_int16    path_loss_LPM[UTST_NVRAM_SIZE_V3];
} UTST_LNA_PATHLOSS;       //after 6293 LNA pathloss format

typedef struct
{
   kal_uint8               band;
   kal_uint8               rxantpath;  // 1: main path  ,  2 : diversity path
   kal_int8                temper_offset[CAL_TEMP_SECTION];
   UTST_LNA_PATHLOSS    loss_of_uarfcn[CAL_UARFCN_SECTION];
} UTSTPathlossV3;       //after 6293 get/set RX pathloss  (confirm/command : peer buffer)

/*TX calibration data------------------------------------------------------------------------------------->*/
typedef struct
{
   kal_uint16  start;
   kal_uint16  end;
} UL1D_sHYSTERESISDATA;

typedef struct
{
   kal_uint16  level_0;
   kal_uint16  level_1;
} UL1D_sDC2DC;

typedef struct
{
   kal_uint16  max_uarfcn;
   kal_int16   pwr_offset_dB;
   kal_int16   pwr_offset_txdac;
} UL1D_sARFCN_SECTION;

typedef struct
{
   kal_uint16  dc2dc_level;
   kal_uint16  vbias_dac;
   kal_uint8   vm1;
   kal_uint8   vm2;
} UL1D_sPADATA;

typedef struct
{
   kal_uint8   pa_mode;
   kal_int8    prf;
   kal_uint8   dc2dc_lvl;
   kal_uint8   vm1;
   kal_uint8   vm2;
   kal_uint16  vbias_dac;
   kal_uint16  pa_gain;
} UL1D_sPMULEVHANDLE;

typedef struct
{
   kal_uint8            octlev_num_section;
   kal_uint8            reserved_byte;
   kal_uint32           pa_phase_compensation[3];
   UL1D_sPMULEVHANDLE   pmu_level_handle[8];//8
   kal_uint16           pa_gain_g12a;
   kal_uint16           pa_gain_g12b;
}UL1D_sPAOCTLVLSETTING;

typedef struct
{
   UL1D_sPADATA         pa_data;
   kal_uint16           vga_dac[NUMBER_OF_VGA_DAC];
   UL1D_sARFCN_SECTION  vga_comp_by_subband[CAL_UARFCN_SECTION];
   kal_int16            vga_comp_by_temperature[8][2];
} UL1D_sTXPOWERDATA;

typedef struct
{
   kal_uint8            pwr_dt_thr;
   kal_uint8            pwr_dt_section;
   kal_uint16           pwr_dt_dac[CAL_PWR_DETECTOR_SECTION];
   kal_int16            pwr_dt_value[CAL_PWR_DETECTOR_SECTION];
   UL1D_sARFCN_SECTION  pwr_dt_comp_by_subband[CAL_UARFCN_SECTION];
   kal_int16            pwr_dt_comp_by_temperature[8][2];
} UL1D_sPWTDTDATA;

typedef struct
{
   UL1D_sDC2DC             pa_dc2dc;
   UL1D_sTXPOWERDATA       power_dac[3];
   UL1D_sHYSTERESISDATA    tx_hvsteresis[2];
   UL1D_sPWTDTDATA         pwr_dt_data;
} UL1D_sRAMPDATA;

typedef struct
{
   kal_uint8               band;
   UL1D_sRAMPDATA          txdacData;
   UL1D_sPAOCTLVLSETTING   txPAOCTLevelData;
} URfTestTXDaTaItem;

/*******************************************************************************
 * WCDMA DPD common
 ******************************************************************************/
typedef enum
{
   URF_TEST_WCDMA_DPD_91 = 0,
   URF_TEST_WCDMA_DPD_92 = 1,
   URF_TEST_WCDMA_DPD_93 = 2
   
}URfTest_Wcdma_Dpd_Generation;

/*******************************************************************************
 * MMRF_TEST_CMD_START_DPD_FAC_CAL_V3
 ******************************************************************************/
typedef enum
{
   URF_TEST_START_DPD_INVALID               = 0,
   URF_TEST_START_DPD_OK                    = 1,
   URF_TEST_START_DPD_PEER_SIZE_MISMATCH    = 2,
   URF_TEST_START_DPD_EXCEED_TTG_LIMIT_INIT = 3,
   URF_TEST_START_DPD_EXCEED_TTG_LIMIT      = 4,
   URF_TEST_START_DPD_NEGATIVE_PA_GAIN      = 5,
   URF_TEST_START_DPD_LARGE_PA_GAIN_DIFF    = 6   

}URfTest_StartDpdFacCal_Status;

typedef struct
{
   kal_uint16 num_of_band;
   kal_uint16 cal_band[MAX_SUPPORTED_BAND_INDEX];

}URfTestCmd_StartDpd_ReqInfo;

typedef struct
{
   kal_uint8  status; /* URfTest_StartDpdPaAndDpdFacCal_Status */
   kal_uint16 curr_band_idx;    
   kal_uint32 curr_subband_idx;
   kal_uint32 curr_gain_idx;   
   kal_int16  curr_pa_gain;
   
}URfTestCmd_StartDpd_CnfInfo;

typedef struct
{
   kal_uint16 band_idx;
   kal_uint16 apt_ref_channel;
   kal_int16  tpc_wanted_p_offset;
   
}URfTest_AptRefChannel_OneBand;

/* struct for GP tool */
typedef struct
{
   URfTest_AptRefChannel_OneBand wcdma_apt_channel_info[MAX_SUPPORTED_BAND_INDEX];

}URfTestCmd_StartDpdPaAndDpdFacCal_ReqPdu;

/*******************************************************************************
 * MMRF_TEST_CMD_SET_DPD_FAC_RESULT_V3 and MMRF_TEST_CMD_GET_DPD_FAC_RESULT_V3
 ******************************************************************************/
typedef enum
{
   URF_TEST_SET_DPD_INVALID            = 0,
   URF_TEST_SET_DPD_OK                 = 1,
   URF_TEST_SET_DPD_PEER_SIZE_MISMATCH = 2,
   URF_TEST_SET_DPD_INVALID_BAND       = 3
   
}URfTest_SetDpdFacCal_Status;

typedef enum
{
   URF_TEST_GET_DPD_INVALID            = 0,
   URF_TEST_GET_DPD_OK                 = 1,
   URF_TEST_GET_DPD_INVALID_BAND       = 2   
   
}URfTest_GetDpdFacCal_Status;

typedef struct
{
   /* Tool can set several band in one set command */
   kal_uint16 num_of_band;

}URfTestCmd_SetDpdAll_ReqInfo;

typedef struct
{
   kal_uint16 num_of_band;
   kal_uint8  status; /* URfTest_SetDpdFacCal_Status */

}URfTestCmd_SetDpdAll_CnfInfo;

typedef struct
{
   kal_uint16 num_of_band;

}URfTestCmd_SetDpdPartial_ReqInfo;

typedef struct
{
   kal_uint16 num_of_band;
   kal_uint8  status; /* URfTest_SetDpdPaAndDpdFacCal_Status */

}URfTestCmd_SetDpdPartial_CnfInfo;

typedef struct
{   
   kal_uint16           band_idx;
   kal_uint8            dpd_cal_done;
   kal_int16            dpd_tr[CAL_UARFCN_SECTION];

   /* ramp */   
   kal_int16            vga_comp_subband[UL1D_DPD_MAX_PA_MODE_NUM][CAL_UARFCN_SECTION];
   kal_int16            vga_comp_temperature[UL1D_DPD_MAX_PA_MODE_NUM][UL1_DPD_MAX_PA_LEVEL_NUM];
   UL1D_sHYSTERESISDATA tx_hysteresis[UL1D_DPD_MAX_PA_HYST_NUM];

   /* paoct */
   kal_uint8            octlev_num_section;
   kal_uint32           pa_phase_compensation[UL1D_DPD_MAX_PA_MODE_NUM];
   UL1D_sPMULEVHANDLE   pmu_level_handle[UL1_DPD_MAX_PA_LEVEL_NUM];

}URfTest_SetGetDpd_TpcPeer;

typedef struct
{
   kal_uint8  lut[UL1_DPD_MAX_AM_LUT_GAIN_NUM][MMDPD_MAX_AM_LUT_PWR_NUM];

}URfTest_DPDAMLutSubBand;

typedef struct
{
   kal_int8  lut[UL1_DPD_MAX_PM_LUT_GAIN_NUM][MMDPD_MAX_PM_LUT_PWR_NUM];

}URfTest_DPDPMLutSubBand;

typedef struct
{
   kal_int16               dpdImplicitArray[UL1_DPD_MAX_IMPLICIT_NUM]; /* For the parameters whose name will not be shown in cal file */	
   URfTest_DPDAMLutSubBand am_lut_subband[CAL_UARFCN_SECTION];
   URfTest_DPDPMLutSubBand pm_lut_subband[CAL_UARFCN_SECTION];

}URfTest_SetGetDpd_DpdPeer;

typedef struct
{   
   URfTest_SetGetDpd_TpcPeer dpdtpc_peer;
   URfTest_SetGetDpd_DpdPeer dpd_peer;

}URfTestCmd_SetDpdFacCalAll_OneBand, URfTestCmd_GetDpdFacCalAll_OneBand;

typedef struct
{
   URfTest_SetGetDpd_TpcPeer dpdtpc_peer;

}URfTestCmd_SetDpdFacCalPartial_OneBand;

typedef struct
{             
   kal_uint16 num_of_band;
   kal_uint16 band_idx[MAX_SUPPORTED_BAND_INDEX];
             
}URfTestCmd_GetDpdAll_ReqInfo;

typedef struct
{             
   kal_uint16 num_of_band;
   kal_uint8  get_status; /* URfTest_GetDpdPaAndDpdFacCal_Status */
                
}URfTestCmd_GetDpdAll_CnfInfo;

/* struct for GP tool */
typedef struct
{
   URfTestCmd_GetDpdFacCalAll_OneBand get_peer[MAX_SUPPORTED_BAND_INDEX];

}URfTestCmd_GetDpdFacCalAll_CnfPdu;

typedef struct
{  
   URfTestCmd_SetDpdFacCalAll_OneBand set_all_peer[MAX_SUPPORTED_BAND_INDEX];
   
}URfTestCmd_SetDpdFacCalAll_ReqPdu;

typedef struct
{
   URfTestCmd_SetDpdFacCalPartial_OneBand set_partial_peer[MAX_SUPPORTED_BAND_INDEX];

}URfTestCmd_SetDpdFacCalPartial_ReqPdu;

/*******************************************************************************
 * MMRF_TEST_CMD_SET_DPD_PATH_DELAY_SEARCH_V3
 ******************************************************************************/
typedef enum
{
   URF_TEST_SET_DPD_DELAY_INVALID            = 0,
   URF_TEST_SET_DPD_DELAY_VALID              = 1,
   URF_TEST_SET_DPD_DELAY_PEER_SIZE_MISMATCH = 2
   
}URfTest_SetDpdPathDelaySearchV3_Status;

typedef struct
{
   /* Tool can set several band in one set command */
   kal_uint16 band_num;

}URfTestCmd_SetDpdPathDelaySearchV3_ReqInfo;

typedef struct
{
   kal_uint16   rf_band;
   kal_uint16   subband_freq[CAL_UARFCN_SECTION];
   kal_int16    dpd_tr[CAL_UARFCN_SECTION];

}URfTest_SetDpdPathDelaySearchV3_ReqPeer_OneBand;

/* struct for GP tool */
typedef struct
{
   URfTest_SetDpdPathDelaySearchV3_ReqPeer_OneBand dpd_one_band[MAX_SUPPORTED_BAND_INDEX];

}URfTestCmd_SetDpdPathDelaySearchV3_ReqPdu;

/* Confirm */
typedef struct
{
   kal_uint16 band_num;
   kal_uint16 status;

}URfTestCmd_SetDpdPathDelaySearchV3_CnfInfo;

/*******************************************************************************
 * MMRF_TEST_CMD_START_DPD_PATH_DELAY_SEARCH_V3
 ******************************************************************************/
typedef enum
{
   URF_TEST_START_DPD_DELAY_INVALID       = 0,
   URF_TEST_START_DPD_DELAY_VALID         = 1,
   URF_TEST_START_DPD_DELAY_TIMEOUT       = 2,
   URF_TEST_START_DPD_DELAY_SEARCH_FAILED = 3
}URfTest_StartDpdPathDelaySearchV3_Status;

/* Request */
typedef struct
{
   kal_uint16 test_times;
   kal_uint16 search_band[MAX_SUPPORTED_BAND_INDEX];
}URfTestCmd_StartDpdPathDelaySearchV3_ReqInfo;

/*******************************************************************************
 * MMRF_TEST_CMD_GET_DPD_PATH_DELAY_SEARCH_V3
 ******************************************************************************/
 
/* Request */
typedef struct
{             
   kal_uint16        band_num;
   kal_uint16        rf_band_info[MAX_SUPPORTED_BAND_INDEX];
   
}URfTestCmd_GetDpdPathDelaySearchV3_ReqInfo;


/* Confirm */

typedef enum
{
   URF_TEST_GET_DPD_DELAY_INVALID = 0,
   URF_TEST_GET_DPD_DELAY_VALID   = 1   
   
}URfTest_GetDpdPathDelaySearchV3_Status;

typedef struct
{
   kal_uint16 band_num;
   kal_uint16 get_status; /* URfTest_GetDpdPathDelaySearchV3_Status */

}URfTestCmd_GetDpdPathDelaySearchV3_CnfInfo;

typedef struct
{
   kal_uint16   rf_band;
   kal_int16    dpd_tr[CAL_UARFCN_SECTION];

}URfTest_GetDpdPathDelaySearchV3_CnfPeer_OneBand;

/* struct for GP tool */
typedef struct
{
   URfTest_GetDpdPathDelaySearchV3_CnfPeer_OneBand dpd_delay_one_band[MAX_SUPPORTED_BAND_INDEX];

}URfTestCmd_GetDpdPathDelaySearchV3_CnfPdu;

/*******************************************************************************
 * MMRF_TEST_CMD_SET_DPD_FAC_RESULT_V3 and MMRF_TEST_CMD_GET_DPD_FAC_RESULT_V3
 ******************************************************************************/
/* Reuqest */
typedef enum
{
   URF_TEST_TRAD_CAL_EXE_INVALID = 0,
   URF_TEST_TRAD_CAL_EXE_START   = 1,
   URF_TEST_TRAD_CAL_EXE_END     = 2
   
}URfTest_TradCal_Exe_Status;

typedef struct
{
   kal_uint32 exe_status; /* URfTest_TradCal_Exe_Status */
   
}URfTestCmd_TradCal_ReqInfo;

/* Confirm */
typedef enum
{
   URF_TEST_TRAD_CAL_CMD_INVALID = 0,
   URF_TEST_TRAD_CAL_CMD_OK      = 1
   
}URfTest_TradCal_Cmd_Status;

typedef struct
{
   kal_uint32 cmd_status; /* URfTest_TradCal_Cmd_Status */
   
}URfTestCmd_TradCal_CnfInfo;

/******************************************************************************/
/*TX calibration data<-------------------------------------------------------------------------------------*/

typedef  enum
{
   SETUP_FAIL_GENERAL = 0,
   SETUP_FAIL_TCM_MISMATCH = 1,
   SETUP_FAIL_TDD_TIMER_STILL_RUNNING = 2,
}  UBIN_MODE_SETUP_FAIL_MSG;

typedef struct
{
    kal_bool                ok;
    kal_int8                setup_result;
} URfTestResultUbinModeSetup;

/************************************************************************/
/*               New FHC Command when introduce eLNA                                                */
/*               URF_TEST_CMD_FHC_ELNA                                                                   */
/************************************************************************/
typedef struct
{
   kal_bool    no_loop_ctrl;
   kal_uint16  afc_dac;
   kal_bool    pwr_det;
   kal_uint8   power_ctrl_mode;
   kal_uint8   vm1[10][3];
   kal_uint8   vm2[10][3];
   kal_uint16  dc2dc_dac[10][3];
   kal_uint16  vbias_dac[10][3];
   kal_uint8   temperature;
   kal_bool    hwAGC;
   kal_uint8   step_duration;
   kal_uint8   freq_count;
   kal_uint8   pwr_count;
   kal_uint8   freq_start_idx;
   kal_uint8   pwr_start_idx;
   kal_uint8   pa_gain_start_idx;
   kal_uint8   pd_gain_start_idx;
   kal_uint8   lna_gain_start_idx;
   kal_uint8   dl_band[40];
   kal_uint8   ul_band[40];
   kal_uint16  dl_freq[40];
   kal_uint16  ul_freq[40];
   kal_uint8   pd_gain[40];
   kal_uint8   pa_mode[40];
   kal_uint16  vga_dac_tpc_idx[40];
   kal_uint16  pa_gain[40];
   kal_uint8   pa_section[40];
   kal_uint16  rx_lna_gain[40];
   kal_uint16  rxd_lna_gain[40];
   kal_uint8   fix_pga_gain[40];
   kal_uint8   is_lpm[40];
}URfTestCmdFHCeLNAPB;

typedef struct
{
    kal_bool                ok;
} URfTestResultFHCeLNALP;
/*---------------------------------------------------------------------*/

/***********************************************************************/
/*       New RSSI Command when introduce eLNA                                                      */
/*       URF_TEST_CMD_GET_RSSI_ELNA                                                                 */
/***********************************************************************/
typedef struct
{
   kal_uint8   num_freq;
   kal_uint16  dl_freq[36];
   kal_uint8   temperature;
   kal_bool    hwAGC;
   kal_uint8   mode;
   kal_int16   rx_gain;
   kal_uint8   rx_LNAmode;
   kal_uint16  rx_pga;
   kal_int16   rxd_gain;
   kal_uint8   rxd_LNAmode;
   kal_uint16  rxd_pga;
   kal_uint8   antenna_path;
   kal_bool    is_cal;
   kal_uint8   lpm_mode;
}URfTestCmdRSSIeLNAPB;

typedef struct
{
    kal_bool                ok;
} URfTestResultRSSIeLNALP;

typedef struct
{
   kal_uint8   num_freq;
   kal_uint16  dl_freq[36];
   kal_int32   rx_rssi[36];
   kal_int32   rxd_rssi[36];
   kal_uint8   rx_LNAmode[36];
   kal_uint8   rxd_LNAmode[36];
}URfTestResultRSSIeLNAPB;
/*---------------------------------------------------------------------*/
/***********************************************************************/
/*       TX SUPPORT Command FIX RF PGA GAIN                                                    */
/*       URF_TEST_CMD_TX_DPCH_FIX_PGA_GAIN                                                   */
/***********************************************************************/
typedef enum
{
   UL1TST_NO_PGA_ABILITY = 0, 
   UL1TST_FIX_PGA_GAIN_12B = 1, 
   UL1TST_FIX_PGA_GAIN_12A = 2, 
   UL1TST_PGA_ALGO_ENABLE = 3,
   UL1TST_PGA_FEATURE_DEFAULT_STATE = UL1TST_PGA_ALGO_ENABLE
}UL1TST_FIX_PGA_GAIN_T;

typedef struct
{
   UL1TST_FIX_PGA_GAIN_T   ul1tst_fix_pga_gain;
/*    
         0 : no need fix
         1 : fix PGA 12A
         2 : fix PGA 12B
 */
}URfTestCmdDPCHTXFIXPGAPB;

typedef struct
{
    kal_bool                ok;
}URfTestResultDPCHTXFIXPGALP;
/*------------------------------6293 Get FHC Information from TST---------------------------------------*/
#define UL1TST_HPM_POINT_V3 7
#define UL1TST_LPM_POINT_V3 4
#define UL1TST_WCDMA_BAND_SUPPORT 5

typedef struct
{
   kal_uint8 calibration_band_number;
   kal_uint8 calibration_band[UL1TST_WCDMA_BAND_SUPPORT];         // band 1 : band index = 0
} UTSTReqGetCalInfoV3lp;  // request local parameter

typedef enum
{
   UTST_ELNA_OFF=0,
   UTST_ELNA_ALWAYS_ON,
   UTST_ELNA_ALWAYS_ON_2ND_SAW,
   UTST_ELNA_BYPASS,
   UTST_ELNA_BYPASS_2ND_SAW
}UTST_ELNA_E;


typedef struct
{
   kal_uint8   band;
   kal_uint8   rx_elna_mode;
   kal_uint8   rxd_elna_mode;
   kal_uint8   cal_point_hpm;
   kal_uint8   cal_point_lpm;
   kal_uint8   rx_cal_sequency[UL1TST_HPM_POINT_V3+UL1TST_LPM_POINT_V3];
   kal_uint8   rx_elna_bypass[UL1TST_HPM_POINT_V3+UL1TST_LPM_POINT_V3];
   kal_uint8   rxd_elna_bypass[UL1TST_HPM_POINT_V3+UL1TST_LPM_POINT_V3];
   kal_int16   rx_cal_dl_power_min[UL1TST_HPM_POINT_V3+UL1TST_LPM_POINT_V3];  //s.5
   kal_int16   rx_cal_dl_power_max[UL1TST_HPM_POINT_V3+UL1TST_LPM_POINT_V3];  //s.5
   kal_int16   rx_cal_dl_power[UL1TST_HPM_POINT_V3+UL1TST_LPM_POINT_V3];      //s.5
}UTSTCnfGetCalInfoV3pb;                                                     //band unit : dynamic size
typedef struct
{
   kal_uint8 support_band_number;
}UTSTCnfGetCalInfoV3lp; // conform local parameter

/*------------------------------6293 START FHC---------------------------------------*/
#define UL1TST_FHC_FREQUENCY_NUMBER  15

typedef struct
{
   kal_uint8   ok;
   kal_uint8   error_code;
}UTSTCnfFHCeLNAV3lp;

typedef struct
{
   kal_uint8   cal_band_number;
   kal_uint8   cal_band[UL1TST_WCDMA_BAND_SUPPORT];
   kal_uint8   antenna_setting;
   kal_uint8   step_duration;
}UTSTReqFHCeLNAV3lp;

typedef struct
{
/*common*/
   kal_uint8   band;
   kal_uint8   freq_count;
   kal_uint8   pwr_count;
   kal_uint8   hpm_cal_point;
   kal_uint8   lpm_cal_point;
/*RX*/
   kal_uint8   rx_elna_mode;
   kal_uint8   rxd_elna_mode;
   kal_uint8   is_lpm[UL1TST_HPM_POINT_V3+UL1TST_LPM_POINT_V3+2];
   kal_uint8   rx_elna_bypass[UL1TST_HPM_POINT_V3+UL1TST_LPM_POINT_V3+2];
   kal_uint8   rxd_elna_bypass[UL1TST_HPM_POINT_V3+UL1TST_LPM_POINT_V3+2];
   kal_uint8   rx_cal_sequency[UL1TST_HPM_POINT_V3+UL1TST_LPM_POINT_V3+2];
/*TX*/
   kal_uint8   fix_pga_gain[UL1TST_HPM_POINT_V3+UL1TST_LPM_POINT_V3+2];
   kal_uint8   pa_mode[UL1TST_HPM_POINT_V3+UL1TST_LPM_POINT_V3+2];
   kal_uint8   vga_dac_tpc_idx[UL1TST_HPM_POINT_V3+UL1TST_LPM_POINT_V3+2];
   kal_uint8   pa_section[UL1TST_HPM_POINT_V3+UL1TST_LPM_POINT_V3+2];
   kal_uint16  pa_gain[UL1TST_HPM_POINT_V3+UL1TST_LPM_POINT_V3+2];
/*RX*/
   kal_int16  rx_cal_dl_power[UL1TST_HPM_POINT_V3+UL1TST_LPM_POINT_V3+2];
/*UARFCN*/
   kal_uint16  dl_uarfcn[UL1TST_FHC_FREQUENCY_NUMBER];
   kal_uint16  ul_uarfcn[UL1TST_FHC_FREQUENCY_NUMBER];
/*Initial file data*/
   URfTestTXDaTaItem    tx_cal_data_info;
   UTSTPathlossV3       rx_cal_data_info;
   UTSTPathlossV3       rxd_cal_data_info;
}UTSTReqFHCeLNAV3pb;    //band unit  it depends on local parameter cal band number expend to array

/*------------------------------6293 GET FHC RESULT----------------------------------------*/
typedef struct
{
   kal_uint16     ul_uarfcn;
   kal_int16      pd_value_h;
   kal_int16      pd_value_m;
   kal_int16      pd_value_l;
} UL1TST_FHC_PD_RESULT_INFO ;

typedef struct
{
   kal_uint16  dl_uarfcn;
   kal_int16   hpm_rssi[UL1TST_HPM_POINT_V3];
   kal_int16   lpm_rssi[UL1TST_LPM_POINT_V3];
} UL1TST_FHC_PATHLOSS_RESULT_INFO ;

typedef struct
{
   kal_uint8                        band;
   UL1TST_FHC_PD_RESULT_INFO        pd_result[UL1TST_FHC_FREQUENCY_NUMBER];
   UL1TST_FHC_PATHLOSS_RESULT_INFO  rx_rssi_result[UL1TST_FHC_FREQUENCY_NUMBER];
   UL1TST_FHC_PATHLOSS_RESULT_INFO  rxd_rssi_result[UL1TST_FHC_FREQUENCY_NUMBER];
} UTSTCnfGetFHCResultV3pb ;     //band unit

typedef struct
{
   kal_bool    ok;
   kal_uint8   band_number;      // indicate how many band's report in peer buffer
} UTSTCnfGetFHCResultV3lp;

/*-----------------------------6293 GET RSSI-----------------------------------------*/
typedef struct
{
   kal_bool    hwAGC;
   kal_bool    rx_elna_bypass;
   kal_bool    rxd_elna_bypass;
   kal_bool    conti_rssi;
   kal_uint8   rx_elna_mode;
   kal_uint8   rxd_elna_mode;
   kal_uint8   temperature;
   kal_uint8   antenna_path;
   kal_uint8   lpm_mode;
   kal_uint16  uarfcn;
   kal_uint16  rx_rf_gain;
   kal_uint16  rxd_rf_gain;
   kal_uint16  rx_digital_gain;
   kal_uint16  rxd_digital_gain;
} UTSTReqGetRSSIV3lp;

typedef struct
{
   kal_bool    ok;
   kal_uint8   rx_elna_bypass;
   kal_uint8   rxd_elna_bypass;
   kal_uint8   rx_lna_mode;
   kal_uint8   rxd_lna_mode;
   kal_uint16  uarfcn;
   kal_int16   rx_rssi;
   kal_int16   rxd_rssi;
   kal_uint16  rx_used_gain;
   kal_uint16  rxd_used_gain;
} UTSTCnfGetRSSIV3lp;

/*-----------------------------6293 power to gain-----------------------------------------*/
typedef struct
{
   kal_bool    rx_elna_bypass;
   kal_bool    rxd_elna_bypass;
   kal_uint8   antenna_path;
   kal_uint8   lpm_mode;
   kal_uint8   rx_elna_mode;
   kal_uint8   rxd_elna_mode;
   kal_uint8   rx_cal_sequency;
   kal_int16   rx_dl_power;
} UTSTReqPwrtoGainV3lp;

typedef struct
{
   kal_bool    ok;
   kal_uint16  rx_digital_gain;
   kal_uint16  rxd_digital_gain;
   kal_uint16  rx_rf_gain;
   kal_uint16  rxd_rf_gain;
}UTSTCnfPwrtoGainV3lp;

/*-----------------------------6293 lna to gain-----------------------------------------*/
typedef struct
{
   kal_bool    rx_elna_bypass;
   kal_bool    rxd_elna_bypass;
   kal_uint8   band;
   kal_uint8   antenna_path;
   kal_uint8   lpm_mode;
   kal_uint8   rx_lna_mode;
   kal_uint8   rxd_lna_mode;
   kal_uint8   rx_elna_mode;
   kal_uint8   rxd_elna_mode;
} UTSTReqLnatoGainV3lp;

typedef struct
{
   kal_bool    ok;
   kal_uint16  rx_digital_gain;
   kal_uint16  rxd_digital_gain;
   kal_uint16  rx_rf_gain;
   kal_uint16  rxd_rf_gain;
   kal_int16   dl_power;
}UTSTCnfLnatoGainV3lp;

/*----------------------------------------------------------------------*/
/*-----------------------------6293 PGA AB CAL-----------------------------------------*/
typedef struct
{
   UL1TST_FIX_PGA_GAIN_T   ul1tst_fix_pga_gain;
   kal_bool                is_calibration;
}UTSTCmdLPCal;

typedef struct
{
   kal_bool    ok;
}UTSTResultLPCal;

/*----------------------------------------------------------------------*/
/*-----------------------------6293 ATE tool T-put-----------------------------------------*/
//trigger IQ dump
typedef struct
{
   kal_uint16   enable_iq_dump;              //enable or disable IQ dump mode.
   kal_uint16   ant_idx;                 //0=RX main antenna, 1=RX diversity antenna.
}UTSTReqTriggerIqDumpModeV3lp;  // request local parameter

typedef struct
{
   kal_uint16   dump_status;             //1=enable IQ dump mode successfully
}UTSTCnfTriggerIqDumpModeV3lp; // conform local parameter

//get IQ dump result
typedef struct
{
   kal_uint16   is_data_ready;           //1=IQ raw data is ready
   kal_uint16   data_section_length;     //length of IQ raw data in corresponding peer buffer
}UTSTCnfGetIqDumpResultV3lp; // confirm local parameter

typedef struct
{
   kal_int16   i_data;
   kal_int16   q_data;
}UTSTCnfGetIqDumpResultV3pb;// confirm peer buffer :RFEQ unit 
//set RFEQ
typedef struct
{
   kal_uint16   rfeq_set_num; //number of subband RFEQ to update
}UTSTReqSetRfeqSubbandV3lp;   // request local parameter

typedef struct
{
   kal_uint16    band;                   //UMTS band
   kal_uint16    subband_idx;            //which sub-band that user want to fill
   kal_uint16    max_uarfcn;             //max uarfcn of this subband
   kal_uint8     ant_idx;                //which antenna should be write in this command. 0: RX Main, 1:RX Div
   kal_bool      rfeq_enable;            //RFEQ enable or not. 
   kal_int16     rfeq_coef_real[7];      //RFEQ real part coefficient. 7 taps.
   kal_int16     rfeq_coef_imag[7];      //RFEQ image part coefficient. 7 taps. 	
}UTSTReqSetRfeqSubbandV3pb;  // request peer buffer : subband unit

typedef struct
{
   kal_uint16   is_rfeq_set;             //1=RFEQ is set to NVRAM successfully
}UTSTCnfSetRfeqSubbandV3lp; // confirm local parameter


/*----------------------------------------------------------------------*/

typedef struct
{
   URfTestCmdType   urf_test_cmd_type;
   void           (*handler)( ilm_struct* );
}UL1TST_RF_TEST_HANDLER_T;
/* ------------------------------------------------------------------------------------------- *\
|*                                                   U_RESET_BIT_COUNT                                                                             *|
\* ------------------------------------------------------------------------------------------- */

typedef struct
{
   kal_uint32  meaningless;
} URFTestCmdResetBERResult;

typedef struct
{
   kal_bool ok;
   kal_uint32  u4TotalBits;
   kal_uint32  u4ErrorBits;
} URFTestResultResetBERResult;
/*---------------------------------------------------------------------------------------------*/
typedef union
{
   kal_uint8                                 m_u1RfBand;
   kal_uint8                                 m_u1PwrCtrlMode;
   kal_uint8                                 m_u1TableType;                // 1: special table for calibration, 2: normal table
   kal_uint8                                 m_u1ILPCStep;
   kal_uint16                                m_u2TxPclIndex;
   kal_uint16                                rf_band_idx;
/* PA drift compensation */
   kal_uint8                                 is_PaDrift;                   /*R8< \brief the parameter to UL1 for PA drift compensation setting (1: turn on, 0: turn off) */
/* R8 RF tool */
   kal_uint8                                 is_5mhz;
   kal_uint8                                 is_main;
   kal_uint32                                m_rBSIData;
   kal_uint32                                m_rBSIAddr;
/* DCXO development */
   kal_uint32                                m_u4CapId;
/* WM Switch */
   kal_uint8                                 ubin_fdd_mode_init;           //  1 : UBIN mode Init 3G FDD ,      0 : UBIN mode de-init 3G FDD
   URfTestCmdAFC                             afc;
   URfTestCmdRSCP                            rscp;
   URfTestCmdType                            query_op_code;
   URfTestCmdTxDPCh                          txdpch;
   URfTestCmdRxDPCh                          rxdpch;
   URfTestCmdTxAccess                        txaccess;
   URFTestCmdReloadNVRAM                     reload;
   URfTestCmdSetMIPICodeWord                 set_mipi_cw_param;
   URfTestCmdGetRfTempSensor                 rfTemperature;
   UL1D_RF_TX_PA_APC_REQ_T                   m_rTxPaApc;
   UL1D_RF_GET_PWR_THR_REQ_T                 m_rGetPwrThr;
   kal_int32                                 m_i4IcsCellPower;             /**< \brief pass cell power to UL1 to choose the best initial gain for ICS */
   URFTestCmdResetBERResult                  resetBERResult;
   URfTestCmdSetCalData                      set_cal_data_command_lp;      //after 6292
   URfTestCmdGetCalData                      get_cal_data_command_lp;      //after 6292
   UTSTReqGetCalInfoV3lp                     get_cal_info_v3_lp;           //6293 get FHC infomation from RFD & FEC
   UTSTReqFHCeLNAV3lp                        fhc_control_v3_lp;            //6293 FHC flow control infomation
   UTSTReqGetRSSIV3lp                        get_rssi_v3_lp;               //6293 RF tool RSSI
   UTSTReqPwrtoGainV3lp                      pwr_to_gain_v3_lp;            //6293 Tradk, NSFT
   UTSTReqLnatoGainV3lp                      lna_to_gain_v3_lp;            //6293 RF tool get RSSI calculator
   URfTestCmd_SetRxTxCalData_ReqParam_V3     set_RxTx_cal_data_command_lp;  //after6293
   URfTestCmd_GetRxTxCalData_ReqParam_V3     get_RxTx_cal_data_command_lp;  //after6293
   UTSTCmdRSCPV3lp                           rscp_v3_lp;
   UTSTCmdAFCV3lp                            afc_v3_lp;
   UTSTCmdLPCal                              pga_type_v3_lp;
   UTSTReqTriggerIqDumpModeV3lp              trigger_iq_dump_v3_lp;    //Trigger IQ dump
   UTSTReqSetRfeqSubbandV3lp                 set_rfeq_subband_v3_lp;   //Set RFEQ subband result
}URfTestCmdParam;

typedef union
{
   kal_bool                                  ok;
   kal_uint8                                 nvramAccessResult;
   kal_uint8                                 currentLnaMode;
   kal_int16                                 m_u2PwrDetResult;
   kal_uint32                                bsi_data;
   kal_uint32                                m_u4MaxCapId;
   FT_UMTS_MsCapabilityEx                    m_rTargetCapability;
   FT_UMTS_NSFTLinkStatusReport              m_rNSFTLinkStatusReport;
   URfNsftListModeCnf                        m_rNSFTListModeLinkStatusReport;
   UL1D_RF_NSFT_BET_BIT_CNT_FOR_BER_CNF_T    m_rNSFTBERResult;
   URfTestResultAFC                          afc;
   URfTestResultRFID                         rfid;
   URfCheckIfFuncExist                       CheckIfFuncExist;
   URfTestResultAFC_Ex                       afc_ex;
   URfTestResultRxDPCh                       rx_dpch;
   URfTestResultPwrDtDac                     pwr_dt_dac;
   URfTestResultPwrDtStep                    pwr_dt_step;
   URfTestResultGetRfTempSensor              rfTemperature;
   URfTestResultGetMIPICodeWord              get_mipi_cw_param;
   URfTestResultPwrDtDefaultThr              pwr_dt_default_thr;
   URfTestResultReplaceGainTable             replace_gain_table;
   URfTestResultRfTemperatureInfo            rfTemperatureInfo;
   URfTestResultUbinModeSetup                ubin_mode_setup_result;
   URfTestResultNSFTRSSI                     ft_rpt_nsft_rssi;                   /*for getting RSSI value during NSFT*/
   URFTestResultResetBERResult               resetBERResult;
   URfTestResultCalDataProcess               cal_data_process_result_lp;         //after 6292
   URfTestResultDPCHTXFIXPGALP               dpch_tx_fix_pga_gain_lp;
   URfTestResultFHCeLNALP                    fhc_elna_result_lp;
   URfTestResultRSSIeLNALP                   rssi_elna;
   UTSTCnfGetCalInfoV3lp                     cnf_get_cal_info_v3_lp;          //6293 get calibration information
   UTSTCnfFHCeLNAV3lp                        cnf_fhc_control_v3_lp;           //6293 FHC flow control infomation
   UTSTCnfGetFHCResultV3lp                   cnf_fhc_report_v3_lp;            //6293 fhc report
   UTSTCnfGetRSSIV3lp                        cnf_get_rssi_v3_lp;              //6293 RF tool RSSI
   UTSTCnfPwrtoGainV3lp                      cnf_pwr_to_gain_v3_lp;           //6293 Tradk, NSFT
   UTSTCnfLnatoGainV3lp                      cnf_lna_to_gain_v3_lp;           //6293 RF tool get RSSI calculator
   URfTestCmd_SetRxTxCalData_CnfParam_V3     set_RxTx_cal_data_process_result_lp; //after 6293
   URfTestCmd_GetRxTxCalData_CnfParam_V3     get_RxTx_cal_data_process_result_lp; //after 6293
   UTSTResultLPCal                           cnf_pga_type_v3_lp;
   UTSTCnfTriggerIqDumpModeV3lp              cnf_trigger_iq_dump_v3_lp;     //Trigger IQ dump
   UTSTCnfGetIqDumpResultV3lp                cnf_get_iq_data_v3_lp;         //Get IQ dump result
   UTSTCnfSetRfeqSubbandV3lp                 cnf_set_rfeq_subband_v3_lp;    //Set RFEQ subband result
} URfTestResultParam;

typedef struct
{
    FT_HDR
    URfTestCmdType     type;
    URfTestCmdParam    param;
} ft_urf_test_req_T;

typedef struct
{
    FT_HDR
    URfTestCmdType     type;
    URfTestResultParam param;
} ft_urf_test_cnf_T;

typedef ft_urf_test_req_T ft_to_ul1tst_struct;
typedef ft_urf_test_cnf_T ul1tst_to_ft_struct;

typedef ft_urf_test_req_T ft_urf_test_req_id_struct;
typedef ft_urf_test_cnf_T ft_urf_test_cnf_id_struct;

#endif  // #if defined(__UMTS_RAT__) && defined(__MTK_UL1_FDD__)

#endif // #ifndef __FT_MSG_UL1RF_H__
