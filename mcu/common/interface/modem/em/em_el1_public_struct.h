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
 * Filename:
 * ---------
 *   em_el1_public_struct.h
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description:
 * ------------
 *   Engineer mode public structures.
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
 *
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
 *
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 *
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
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
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
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
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
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 *
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
 * removed!
 *
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
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *==============================================================================
 *******************************************************************************/

/********************************************************************************
*  Copyright Statement:
*  --------------------
*
*  This product has been developed using a protocol stack
*  developed by Sasken Communication Technologies Limited.
*
********************************************************************************/


#ifndef _EM_EL1_PUBLIC_STRUCT_H
#define _EM_EL1_PUBLIC_STRUCT_H

#include "em_public_struct.h"
#include "em_as_common_public_struct.h"



/* EL1 */
#define RPT_LTE_RX_CC_MAX   4
#define RPT_LTE_TX_CC_MAX   2
#define LTE_MAX_DATA_BUF   30   // EL1 MDMI

#define AGC_RX_ANT_NUM 2
#define EM_OTDOA_MAX_NBR_CELL_LIST_NUM_TOTAL  3

typedef enum
{
    EM_TX_ANT_L_ANT    = 0, // L_ANT
    EM_TX_ANT_U_ANT    = 1, // U_ANT
    EM_TX_ANT_L_ANT_A  = 2, // L_ANT'
    EM_TX_ANT_INVALID  = 0xFF
} em_tx_ant_enum;


typedef enum
{
    EM_TAS_VERSION_1_0     = 0,
    EM_TAS_VERSION_2_0     = 1,
    EM_TAS_VERSION_INVALID = 0xFF
} em_tas_version_enum;


typedef struct
{
    /* PWR info */
    kal_int16  prach_tx_power_ave;
    kal_int16  pucch_tx_power_ave;
    kal_int16  pusch_tx_power_ave;
    kal_int16  srs_tx_power_ave;

    /* Tx report */
    kal_int16  tm;
    kal_int16  phr;
    kal_int16  ta;

    /* UL info */
    kal_uint32 UL_Tput;
    kal_int16  UL_Imcs;
    kal_int16  UL_rb;
    kal_int16  UL_block;
    kal_int16  UL_bler;
    kal_uint16 UL_retx_rate;

   /* TAS info */
    kal_int16   tx_ant;
    kal_int8   UL_Mod;

    /*RJIL requirement*/
    kal_uint8   srs_bw_ave;
    kal_int16   pucch_tx_power_ave_fmt[9]; //0:FMT1 1:FMT1A 2:FMT1B 3:FMT2 4:FMT2_extCP 5:FMT2A 6:FMT2B 7:FMT3 8:FMT1B_CS
    kal_bool    hop_en;
    kal_int8    puschPrb0;
    kal_int8    puschPrb1;

    /*Power scaling*/
    kal_int16  pucch_tx_pwr;
    kal_int16  pucch_tx_pwr_out;
    kal_int16  pusch_tx_pwr;
    kal_int16  pusch_tx_pwr_out;
    kal_int16  ul_ca_pucch_tx_pwr_out;
    kal_int16  ul_ca_pusch_tx_pwr_out;

    /* TAS Info */
    em_tx_ant_enum  tx_ant_type;
    kal_int16       rsrp_l_ant;      // L_ANT: -255: disable, -140 ~ 18 (dBm)
    kal_int16       rsrp_u_ant;      // U_ANT: -255: disable, -140 ~ 18 (dBm)
    kal_int16       rsrp_l_ant_a;    // L_ANT' -255: disable, -140 ~ 18 (dBm)
    kal_int16       tx_power;        // -50...33
    kal_int16       el1_dat_scenario_index;

    kal_uint16  ul_grant_cnt;
    kal_uint16  cqi_req_cnt;
    kal_int16   total_tx_power_ave;

    /* PUCCH format statistics */
    kal_uint16  pucch_f1_cnt;       // Standalone SR count
    kal_uint16  pucch_f1a_cnt;      // Probable SR + 1 bit HARQ count
    kal_uint16  pucch_f1b_cnt;      // Probable SR + 2 bit HARQ count
    kal_uint16  pucch_f2_cnt;       // Standalone CSI over PUCCH count
    kal_uint16  pucch_f2a_cnt;      // CSI + 1 bit HARQ count
    kal_uint16  pucch_f2b_cnt;      // CSI + 2 bit HARQ count
    kal_uint16  pucch_f2_ecp_cnt;   // CSI with extended CP
    kal_uint16  pucch_f3_cnt;       // Format 3 count
    kal_uint16  pucch_f1b_cs_cnt;   // Format 1b with CS count
    kal_uint16  pucch_sr_cnt;       // Overall SR count

    /* TITAN Info */
    kal_int16   curr_fi;
    kal_int16   curr_gi;
    kal_int16   num_tpc_fi;
    kal_int16   num_tpc_gi;
    kal_int16   avg_ul_retx;

    /* TAS Info */ // This is request by OPPO
    kal_uint8   tas_status;         // TAS status: 0: disable/ 1: enable
    kal_uint8   force_tx_ant;       // TAS force tx ant status: 0: disable/ 1: enable
    kal_uint8   force_tx_idx;       // TAS force tx ann index: 0~7 according to antenna state

    kal_int16   pcmax;
} em_el1_ul_status_struct;

typedef struct
{
    /* DL Qual indicator */
    kal_int16  dl_rssi[2]; // -255: disable, -140 ~ 18 (dBm)
    kal_int16  dl_rsrp[2]; // -255: disable, -140 ~ 18 (dBm)
    kal_int16  dl_rsrq[2]; //
    kal_int16  dl_sinr[2];
    kal_int16  rsrp;
    kal_int16  rsrq;
    kal_int16  sinr;
    kal_int16  rsSNR;

    /* Rx report */
    kal_int16  tm;
    kal_int16  cqi_cw0;
    kal_int16  cqi_cw1;
    kal_int16  ri;

    /* DL info */
    kal_uint32 DL_Tput;
    kal_uint32 DL_Tput_cw0;
    kal_uint32 DL_Tput_cw1;
    kal_int16  DL_Imcs;
    kal_int16  DL_rb;
    kal_int16  DL_block;
    kal_int16  DL_bler;
    kal_int8  DL_Mod0;
    kal_int8  DL_Mod1;

    /* MCH info */
    kal_uint32 MCH_Tput;
    kal_int16  MCH_block;
    kal_int16  MCH_bler;

    // PDSCH info
    kal_uint16 pdsch_tc_rnti;
    kal_uint16 pdsch_c_rnti;
    kal_uint16 pdsch_sps_rnti;
    kal_uint16 pdsch_avg_tbs;
    kal_uint16 dl_grant_cnt;
    kal_int8   dl_carrier_idx;
    kal_int8   dl_mcs0;
    kal_int8   dl_mcs1;
    kal_int8   dl_pmi0;
    kal_int8   dl_pmi1;  // Not used in 90 as well. Can be used to differentiate 1CW and 2CW scenario in future.

    // PDCCH info
    kal_int8   pdcch_dci;
    kal_uint16 pdcch_agg_lv[4];
    kal_uint16 pdcch_sps_rnti;
    kal_uint16 pdcch_ra_rnti;
    kal_uint16 tpc_pucch_rnti;
    kal_uint16 tpc_pusch_rnti;
    kal_uint16 pdcch_p_rnti;
    kal_uint16 pdcch_si_rnti;

    // For 93 KPI
    kal_int16  kpi_DL_bler[2];

    //For 91 Titan request
    kal_int16  avg_dl_grant;
    kal_int16  dl_sm_ratio;

    /* MCH info */
    kal_int16  MCH_sf_skip_cnt;
	
    /* DL Qual indicator */
    kal_int16  sir;

    /* DL tb Number*/	 
    kal_uint8	DL_TB;

    /* rxpath_sum for RSRP/RSRQ/SNR as Mohamed' request */
    kal_int16    rsrp_l1_rxpath_sum_dBm;     /*rx0 + rx1  RSRP dBm*/
    kal_int16    rsrq_l1_rxpath_sum_dB;      /*rx0 + rx1  RSRQ dB*/
    kal_int16    snr_l1_rxpath_sum_dB;       /*rx0 + rx1  SNR dB*/  

    // For LG
    kal_int16  DL_bler_harq[15];
    kal_int16  DL_rb_tb1;
    kal_int16  DL_rb_tb2;

    kal_uint8  rsrq_decimal;
    // For AT&T
    kal_uint16 DL_Mod_time[4];
	
	/*Path loss*/
	kal_uint8    pathloss;                   /* Rs_power - RSRP*/
} em_el1_dl_status_struct;

typedef struct
{
    /* TPC info */
    kal_uint8 pa_mode[RPT_LTE_TX_CC_MAX];
    kal_uint8 pa_idx[RPT_LTE_TX_CC_MAX];
    kal_int16 pa_gain[RPT_LTE_TX_CC_MAX];
    kal_uint8 temper_idx[RPT_LTE_TX_CC_MAX];  //temperature idx
    kal_int16 temper_comp[RPT_LTE_TX_CC_MAX]; //temperature compensation power for PA 
    kal_int16 cmeas_rf[RPT_LTE_TX_CC_MAX];    //close loop compensation 
    kal_int16 ppa_dbm[RPT_LTE_TX_CC_MAX];     //DDPC report(antenna power)

    /* RF info */
    kal_int16 rf_gain_absolute[RPT_LTE_RX_CC_MAX][AGC_RX_ANT_NUM];

    /* Power info */
    kal_int16  mpr[RPT_LTE_TX_CC_MAX];
    kal_int16  a_mpr[RPT_LTE_TX_CC_MAX];
    kal_int16  p_cmax[RPT_LTE_TX_CC_MAX];
    kal_int16 main_ant_sar[RPT_LTE_TX_CC_MAX]; // S(9,7)
    kal_int16 div_ant_sar[RPT_LTE_TX_CC_MAX];  // S(9,7)

    kal_int16 bb_gain[RPT_LTE_TX_CC_MAX];
    kal_int16 rf_gain[RPT_LTE_TX_CC_MAX];     //PGA gain
    kal_uint8 dc2dc_lvl[RPT_LTE_TX_CC_MAX];   //VP
} em_el1_tpc_rf_status_struct;

typedef struct
{
    /* DL info */
    kal_int16  DL_block;
    kal_int16  DL_nack_cnt;
    kal_int16  DL_bler;
    kal_uint8  fail_rate_ind;
} em_el1_dl_pdsch_status_struct;

typedef struct
{
    kal_uint16                         phyCellId;
    kal_uint32                         earfcn;        /* [0..262143], 65535 is invalid to indicate ARFCN-ValueEUTRA-v9a0 present */
    kal_int64                          rstd_microsec; 
}em_el1_mpc_otdoa_measured_nbr_cell_em_struct;


typedef struct
{  
    kal_uint8                           numMeasuredNbrCell;
    em_el1_mpc_otdoa_measured_nbr_cell_em_struct  measuredNbrCell[EM_OTDOA_MAX_NBR_CELL_LIST_NUM_TOTAL];  
} em_el1_mpc_otdoa_struct;

typedef struct
{
    /* cell info */
    kal_uint8  band;
    kal_uint8  ant_port;
    kal_uint8  dl_bw;       // 100kHz
    kal_uint8  ul_bw;       // 100kHz
    kal_uint8  tdd_cfg;     // TDD: 0~6, FDD: 0xFF
    kal_uint8  sp_cfg;      // TDD: 0~9, FDD: 0xFF
    kal_uint8  tm;          // 0,1~9
    kal_int8   ul_cc_idx;   //-1,0~(ul_cc_max-1)
    kal_int16  pci;         // 0~503
    EARFCN     earfcn;
    EARFCN     ul_earfcn;
    kal_uint16 dlFreq;      // 100kHz
    kal_uint16 ulFreq;      // 100kHz
    kal_bool   enable_64qam;
    kal_uint8  ue_category;
    kal_uint8  sr_period;   //ms
    kal_uint8  main_ant_swap; // Main Antenna swap information
    kal_uint8  rx_antenna_config;
    kal_uint8  rx_div_status;
    em_el1_mpc_otdoa_struct otdoa_info;
	kal_uint8  dl_bw_rb;
    kal_uint8  ul_bw_rb;
    kal_uint32 dl_max_throughput;
    kal_uint32 ul_max_throughput;
} em_el1_cell_info_struct;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum            em_info;
    kal_uint8               dl_cc_count;
    kal_uint8               ul_cc_count;
    em_el1_cell_info_struct cell_info[RPT_LTE_RX_CC_MAX];
    em_el1_dl_status_struct dl_info[RPT_LTE_RX_CC_MAX];
    em_el1_ul_status_struct ul_info[RPT_LTE_TX_CC_MAX];
    em_tas_version_enum     tas_version;
    em_el1_tpc_rf_status_struct tpc_rf_info;
} em_el1_status_ind_struct;


typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum            em_info;
    em_el1_dl_pdsch_status_struct dl_info[RPT_LTE_RX_CC_MAX]; 
} em_el1_status_pdsch_ind_struct;


typedef enum
{
    EM_CRC_FAIL                 = 0,
    EM_CRC_PASS                 = 1
} em_dl_crc_enum;

typedef enum
{
    EM_FDD                      = 0,
    EM_TDD                      = 1
} em_duplex_enum;

typedef enum
{
    EM_COMMON_SPACE             = 0,
    EM_UE_SPECIFIC_SPACE        = 1
} em_dci_srch_space;

typedef enum
{
    EM_PCC                      = 0,
    EM_SCC1                     = 1,
    EM_SCC2                     = 2
} em_carrier_idx_enum;

typedef enum
{
    EM_Bandwidth_1_4            = 1,
    EM_Bandwidth_3              = 2,
    EM_Bandwidth_5              = 3,
    EM_Bandwidth_10             = 4,
    EM_Bandwidth_15             = 5,
    EM_Bandwidth_20             = 6
} em_BandWidth_enum;

typedef enum
{
    EM_CCE_AGG_LV1              = 0,
    EM_CCE_AGG_LV2              = 1,
    EM_CCE_AGG_LV4              = 2,
    EM_CCE_AGG_LV8              = 3
} em_cce_agg_lv_enum;

typedef enum
{
    EM_PDCCH_FMT0               = 0,
    EM_PDCCH_FMT1               = 1,
    EM_PDCCH_FMT1A              = 2,
    EM_PDCCH_FMT1B              = 3,
    EM_PDCCH_FMT1C              = 4,
    EM_PDCCH_FMT1D              = 5,
    EM_PDCCH_FMT2               = 6,
    EM_PDCCH_FMT2A              = 7,
    EM_PDCCH_FMT2B              = 8,
    EM_PDCCH_FMT2C              = 9,
    EM_PDCCH_FMT2D              = 10,
    EM_PDCCH_FMT3               = 11,
    EM_PDCCH_FMT3A              = 12,
    EM_PDCCH_FMT4               = 13,
    EM_PDCCH_INVALID            = 255
} em_pdcch_fmt_enum;

typedef enum
{
    EM_DCI_FMT0                 = 0,
    EM_DCI_FMT1                 = 1,
    EM_DCI_FMT1A                = 2,
    EM_DCI_FMT1B                = 3,
    EM_DCI_FMT1C                = 4,
    EM_DCI_FMT1D                = 5,
    EM_DCI_FMT2                 = 6,
    EM_DCI_FMT2A                = 7,
    EM_DCI_FMT3                 = 8,
    EM_DCI_FMT3A                = 9
} em_dci_fmt_enum;

typedef enum
{
    EM_dciSuc                   = 1,
    EM_dciErr                   = 2
} em_dci_stat_enum;

typedef enum
{
    EM_PHICH_NACK               = 0,
    EM_PHICH_ACK                = 1
} em_phich_val_enum;

typedef enum
{
    EM_PUCCH_FMT1               = 0,
    EM_PUCCH_FMT1A              = 1,
    EM_PUCCH_FMT1B              = 2,
    EM_PUCCH_FMT2               = 3,
    EM_PUCCH_FMT2A              = 4,
    EM_PUCCH_FMT2B              = 5
} em_pucch_fmt_enum;

typedef enum
{
    EM_DL_TM_MODE_DISABLED      = 0,
    EM_DL_TM_MODE_1             = 1,
    EM_DL_TM_MODE_2             = 2,
    EM_DL_TM_MODE_3             = 3,
    EM_DL_TM_MODE_4             = 4,
    EM_DL_TM_MODE_5             = 5,
    EM_DL_TM_MODE_6             = 6,
    EM_DL_TM_MODE_7             = 7,
    EM_DL_TM_MODE_8             = 8,
    EM_DL_TM_MODE_9             = 9,
    EM_DL_TM_MODE_10            = 10,
    EM_DL_TM_MODE_INVALID       = 255
} em_dl_tm_mode_enum;

typedef enum
{
    EM_mode10                   = 0,
    EM_mode11                   = 1,
    EM_mode20                   = 2,
    EM_mode21                   = 3
} em_pucch_rpt_mode_enum;

typedef enum
{
    EM_subBandCqiFeedback       = 0,
    EM_wideBandCqiPmiFeedback   = 1,
    EM_riFeedback               = 2,
    EM_widebandCqiFeedback      = 3
} em_pucch_rpt_type_enum;

typedef enum
{
    EM_UL_BPSK                  = 0,
    EM_UL_QPSK                  = 1,
    EM_UL_QAM16                 = 2,
    EM_UL_QAM64                 = 3
} em_pusch_mcs_enum;

typedef enum
{
    EM_FREQ_HOP_DISABLED        = 0,
    EM_FREQ_HOP_INTER_SF        = 1,
    EM_FREQ_HOP_INTRA_INTER_SF  = 2,
    EM_FREQ_HOP_INVALID         = 255
} em_pusch_freq_hop_enum;

typedef enum
{
    EM_semiPersistent           = 0,
    EM_dynamic                  = 1,
    EM_rachMsg3                 = 2
} em_pusch_type_enum;

typedef enum
{
    EM_modeAperiodicRm12        = 0,
    EM_modeAperiodicRm20        = 1,
    EM_modeAperiodicRm22        = 2,
    EM_modeAperiodicRm30        = 3,
    EM_modeAperiodicRm31        = 4
} em_pusch_rpt_mode_enum;

typedef enum
{
    EM_NoSrs                    = 0,
    EM_UpPtsSymbol0             = 1,
    EM_UpPtsSymbol1             = 2,
    EM_BothUpPtsSymbols         = 3
} em_srs_uppts_enum;

typedef enum
{
    EM_SRS_Type0                = 0,
    EM_SRS_Type1Dci0            = 1,
    EM_SRS_Type1Dci1A2B2C       = 2,
    EM_SRS_Type1Dci4            = 3
} em_srs_trig_enum;

typedef enum
{
    EM_CYCLE_320                = 0,
    EM_CYCLE_640                = 1,
    EM_CYCLE_1280               = 2,
    EM_CYCLE_2560               = 3
} em_paging_cyc_enum;

typedef enum
{
    EM_fourT                    = 0,
    EM_twoT                     = 1,
    EM_oneT                     = 2,
    EM_one2T                    = 3,
    EM_one4T                    = 4,
    EM_one8T                    = 5,
    EM_one16T                   = 6,
    EM_one32T                   = 7
} em_drx_nb_enum;

typedef enum
{
    EM_T310_STOP                = 0,
    EM_T310_START               = 1,
    EM_T310_EXPIRE              = 2,
    EM_T310_INVALID             = 255
} em_t310_status_enum;



typedef enum
{
    EM_DL_QPSK                  = 0,
    EM_DL_QAM16                 = 1,
    EM_DL_QAM64                 = 2,
    EM_DL_QAM256                = 3,
    EM_DL_INVALID               = 255
} em_dl_mod_enum;


typedef struct
{
    kal_bool                        tbEn;
    kal_uint8                       Imcs;
    em_dl_mod_enum                  mcs;
    kal_uint8                       rv;
    kal_uint8                       ndi;
    kal_uint8                       tbIndex;
    kal_uint32                      tbsize;
    kal_uint8                       dupPacket;
    kal_bool                        harqComb;
    //pdsch 3
    em_dl_crc_enum                  tbCrc;
    kal_uint16                      cbCrc;
    kal_uint8                       cw_idx;
    kal_uint8                       reRxNum;                        // 1~8
    kal_uint16                      cbSizePlus;                     // 0~6168
    kal_uint8                       numCbPlus;                      // 0~13
    kal_uint8                       turboDecMaxIterNum;
    kal_uint8                       turboDecIterNum;
    kal_bool                        earlyEndAlgm;
} em_PdschTb_struct;

typedef struct
{
    kal_uint8                       numRBs;      //pdsch 1,2
    kal_uint8                       numLayers;   //pdsch 2
    kal_uint8                       numTBs;      //pdsch 2
    kal_uint8                       harqId;      //pdsch 1,3
    em_dl_rnti_enum                 rntiType;
    kal_uint16                      rntiValue;
    em_PdschTb_struct               PdschTb[2];
} em_PdschRlt_struct;

typedef struct
{
    kal_uint16                      SFN;
    kal_uint8                       subframe;
    kal_uint16                      pci;

    kal_uint8                       cc_idx;//pdsch 3
    kal_uint8                       ueCat;//pdsch 3
    kal_uint8                       tranMode;//pdsch 3
    kal_uint8                       mimoRi;                     // num of tb
    kal_uint8                       pmchId;                     // 0~255
    kal_uint8                       areaId;                     // 0~255    
    em_PdschRlt_struct              PdschRlt[5];
} el1_em_PdschRpt_struct;

typedef struct
{
    kal_uint16                      SFN;
    kal_uint8                       subframe;
    kal_uint16                      pci;
    kal_uint8                       cc_idx;
    kal_uint8                       ulDlCfg;                        // 0~6:TDD
    //ltePhyPdcch 1
    em_dl_rnti_enum                 rntiType[9];
    em_cce_agg_lv_enum              cceAggLv[9];
    kal_bool                        newDl[9];
    em_dci_srch_space               srchSpace[9];                   // 0: common, 1: ue-specific
    kal_uint16                      payloadSize[9];                 // pi/si/ra/c,tc,sps
    kal_uint8                       spsType;                        // 1:rel, 2:acv, 3:cfg, 4:retx
    //ltePhyPdcch 2
    kal_uint8                       numDlTbs[9];                    // 0~3, number of DL TBs
    //ltePhyPdcch 3
    em_pdcch_fmt_enum               dciFormat[9];
    kal_uint8                       strtCce[9];                     // 0~86
    kal_bool                        dciStatus[9];
} el1_em_PdcchRpt_struct;

typedef struct
{
    //ltePhyPhich 1, 3
    kal_bool                        phichEn;
    em_phich_val_enum               phichRlt;
    //ltePhyPhich 3
    kal_uint8                       spreadCode;                     // 0~7
    kal_uint8                       groupNum;                       // 0~31
} em_PhichRlt_struct;

typedef struct
{
    kal_uint16                      SFN;
    kal_uint8                       subframe;
    kal_uint16                      pci;
    em_carrier_idx_enum             cc_idx;
    kal_uint8                       ulDlCfg;                        //0~6:TDD
    em_PhichRlt_struct              phichRlt0;
    em_PhichRlt_struct              phichRlt1;
} el1_em_PhichRpt_struct;

typedef struct
{
    kal_uint16                      SFN;
    kal_uint8                       subframe;
    kal_uint16                      pci;
    em_pdcch_fmt_enum               dciFormat[9];
    em_pucch_fmt_enum               txFormat;
    kal_uint8                       numAck;                         //0~2, number of Harq bits
    kal_bool                        csiEn[RPT_LTE_RX_CC_MAX];
    kal_uint8                       numCqi[RPT_LTE_RX_CC_MAX];
    kal_int8                        pucchTpc[9];
    kal_int16                       gi;
    kal_uint8                       digitalGain;                    //0~255, PUCCH digital amplitude gain in dB
    kal_int8                        txPower;
    kal_int8                        ActualTxPower;
    kal_uint8                       pathLoss;
    kal_uint8                       startRbSlot0;                   //0~110
    kal_uint8                       startRbSlot1;                   //0~110
    kal_uint8                       dmrsSeqSlot0;                   //0~29
    kal_uint8                       dmrsSeqSlot1;                   //0~29
} em_el1_PucchRpt_struct;

typedef struct
{
    kal_bool                        csiEn;
    kal_uint8                       cc_idx;
    em_dl_tm_mode_enum              csiTxMode;
    em_pucch_rpt_mode_enum          csiRptMode;
    em_pucch_rpt_type_enum          csiRptType;
    //kal_uint8                       numCqi;
    kal_uint8                       bpSize;                         //0~4
    kal_uint8                       bpIndex;                        //0~4
    kal_uint8                       sbNum;
    kal_uint8                       ri;
    kal_uint8                       cqiCw0;
    kal_uint8                       cqiCw1;
    kal_uint8                       wbPmi;
} em_pucchCsiRpt_struct;

typedef struct
{
    kal_uint16                      SFN;
    kal_uint8                       subframe;

    em_pucchCsiRpt_struct           csiRpt[RPT_LTE_RX_CC_MAX];
} em_el1_PucchCsiRpt_struct;

typedef struct
{
    kal_uint16                      SFN;
    kal_uint8                       subframe;
    kal_uint16                      pci;
    em_pdcch_fmt_enum               dciFormat;                      // DCI format of the decoded PDCCH
    kal_int8                        puschTpc;
    em_pusch_type_enum              puschType;
    kal_int16                       fi;
    kal_uint8                       digitalGain;                    //0~255, PUSCH digital amplitude gain in dB
    kal_int8                        txPower;
    kal_int8                        ActualTxPower;
    kal_uint8                       pathLoss;
    kal_uint8                       rbNum;
    em_pusch_mcs_enum               ModOrd;
    kal_uint8                       harqId;
    kal_uint16                      tbSize;
    kal_uint8                       retxIndex;                      //1~8, HARQ retransmission number 
    em_pusch_freq_hop_enum          freqHop;
    //kal_bool                        ackExists;
    kal_uint8                       numAck;                         //0~7, length of ACK NACK bit
    //kal_bool                        cqiExists[RPT_LTE_RX_CC_MAX];    
    kal_bool                        csiEn[RPT_LTE_RX_CC_MAX];
    kal_uint8                       numCqi[RPT_LTE_RX_CC_MAX];      //0~66, length of CQI bit
    //kal_bool                        riExists[RPT_LTE_RX_CC_MAX];
    kal_uint8                       numRi[RPT_LTE_RX_CC_MAX];       //0~3, length of RI bit
    kal_uint8                       startRbSlot0;                   //0~110
    kal_uint8                       startRbSlot1;                   //0~110
    kal_uint8                       dmrsSeqSlot0;                   //0~29
    kal_uint8                       dmrsSeqSlot1;                   //0~29
} em_el1_PuschRpt_struct;

typedef struct
{
    kal_bool                        csiEn;
    kal_uint8                       cc_idx;
    em_dl_tm_mode_enum              csiTxMode;
    em_pusch_rpt_mode_enum          csiRptMode;
    kal_uint8                       sbNum;
    kal_uint8                       ri;
    kal_uint8                       wbCqiCw0;
    kal_uint8                       wbCqiCw1;
    kal_uint8                       sizeM;
    kal_uint8                       snglWbPmi;
    kal_uint8                       snglMbPmi;
    kal_uint8                       sbCqiCw0[13];
    kal_uint8                       sbCqiCw1[13];
    kal_uint8                       mSbCqiCw0;
    kal_uint8                       mSbCqiCw1;
    kal_uint8                       sbSize;
} em_puschCsiRpt_struct;

typedef struct
{
    kal_uint16                      SFN;
    kal_uint8                       subframe;

    em_puschCsiRpt_struct           csiRpt[RPT_LTE_RX_CC_MAX];
} em_el1_PuschCsiRpt_struct;

typedef struct
{
    kal_uint16                      SFN;
    kal_uint8                       subframe;
    kal_uint16                      pci;
    em_carrier_idx_enum             cc_idx;
    kal_uint8                       cfi;
} em_el1_PcfichRpt_struct;

typedef struct
{
    kal_uint16                      SFN;
    kal_uint8                       subframe;
    kal_uint16                      pci;
    em_carrier_idx_enum             cc_idx;
    kal_uint8                       pmchId;
    kal_uint8                       areaId;
    //kal_uint8                       numOfRB;
    kal_uint8                       numRBs;
    kal_uint8                       numLayers;
    kal_uint8                       harqId;
    kal_uint8                       rv;
    kal_uint8                       ndi;
    em_dl_crc_enum                  crcRlt;
    em_dl_rnti_enum                 rntiType;
    kal_uint8                       tbIndex;
    kal_uint16                      tbSize;                         // bytes
    kal_uint8                       Imcs;                           // 0~31
    //kal_uint8                       numRBs;                         // 0~255 // TBD
} em_el1_PmchRpt_struct;

typedef struct
{
    kal_uint16                      strtSFN;
    kal_uint8                       strtSubframe;
    kal_uint32                      strtDlFrameTimeOffst;           // 0~307200, Ts units
    kal_uint32                      strtUlFrameTimeOffst;           // 0~307200, Ts units
    kal_uint32                      strtUlTimeAdv;                  // 0~307200, Ts units

    kal_int16                       dlFrameTimeChng;                // -512~511
    kal_int8                        ulFrameTimeChng;                //  -16~15
    kal_int8                        timeAdvChng;                    // -128~127
} em_el1_CellTime_struct;

typedef struct
{
    kal_uint16                      SFN;
    kal_uint8                       subframe;
    kal_uint16                      pci;
    kal_int16                       rsrp;                           // -180~-30
    kal_int16                       rsrp0;
    kal_int16                       rsrp1;
    kal_int16                       rsrq;                           //  -30~ 10
    kal_int16                       rsrq0;
    kal_int16                       rsrq1;
    kal_int16                       rssi;                           // -110~-10
    kal_int16                       rssi0;
    kal_int16                       rssi1;
    kal_int16                       sinr;                           //  -20~ 30
    kal_int16                       sinr0;
    kal_int16                       sinr1;
    EARFCN                          earfcn;
    kal_uint8                       priority;                       // 0~7, The priority of the layer that the cell resides on
    kal_bool                        isIdleMode;
    em_BandWidth_enum               Bandwidth;
    em_carrier_idx_enum             CarrierType;
} em_el1_SrvMeasRpt_struct;

#if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif


typedef struct
{
    kal_bool                        ueSrsEn;
    kal_bool                        cellSrsEn;
    kal_uint8                       strtRb;
    kal_uint8                       numRb;
    kal_uint16                      zcRoot;                         // 1~1151
    em_srs_uppts_enum               upPtsType;
    //em_srs_trig_enum                srsTrigType;
} em_srsTxParam_struct;

typedef struct
{
    kal_uint16                      SFN;
    kal_uint8                       subframe;
    kal_uint16                      pci;
    em_carrier_idx_enum             carrierType;
    em_duplex_enum                  duplexMode[RPT_LTE_RX_CC_MAX];
    //ltePhyMeasurements 15
    kal_int8                        srsTxPower;
    kal_int16                       fi;
    kal_uint8                       pathLoss;
    kal_uint8                       srsTxBw;
    kal_int8                        srsActualTxPower;
    //ltePhyMeasurements 16
    em_srs_trig_enum                srsTrigType;
    kal_uint8                       cycShift;
    kal_int8                        srsPwrOffst;                 // 0:p-srs,    1:a-srs
    em_srsTxParam_struct            srsTxParam[2];                  // 0:symbol 1, 1:symbol 2
} em_el1_SrsRpt_struct;

typedef struct
{
    kal_uint8                       mcsIndex;
    kal_uint8                       cqiRequest;
    kal_uint8                       startRB[2];
    kal_uint8                       numRB[2];
    kal_uint8                       tbSizeIndex;
    kal_uint8                       modType;
    kal_bool                        freqHop;                        // 0: disable, 1: enable
    kal_uint8                       ndi;
    kal_uint8                       rv;
    kal_int8                        tpcCmd;
    kal_uint8                       dmrsCycShift;
    kal_uint8                       timeToTx;
} ul_grant_struct;

typedef struct
{
    kal_uint16                      pci;
    em_pdcch_fmt_enum               dlAssgnFmt[7];
    kal_uint8                       numAck[7];                      // 0~2
    kal_int8                        tpcCmd[7];
} dl_assgn_struct;

typedef struct
{
    em_duplex_enum                  duplexMode[RPT_LTE_RX_CC_MAX];

    kal_uint16                      SFN;
    kal_uint8                       subframe;

    kal_bool                        pdcchOrderVld[RPT_LTE_TX_CC_MAX];

    kal_bool                        ulGrantVld[RPT_LTE_TX_CC_MAX];
    ul_grant_struct                 ulGrantInfo[RPT_LTE_TX_CC_MAX];

    kal_bool                        tpcVld;
    em_pdcch_fmt_enum               tpcFmt[2];                      // 0: tpc-pucch, 1: tpc-pusch

    kal_bool                        dlAssgnVld[RPT_LTE_RX_CC_MAX];                  // 2cc
    dl_assgn_struct                 dlAssgnInfo[RPT_LTE_RX_CC_MAX];                 // 2/tc/spsc -rnti
} em_el1_DciRpt_struct;

typedef struct
{
    kal_uint16                      SFN;
    kal_uint8                       subframe;
    //PSS result
    kal_int16                       pssQualLev;
    kal_uint16                      pssPeakPos;                     // 0~10000
    kal_uint8                       pssIndex;                       // 0~2
    //SSS result
    kal_uint16                      pci;
    kal_int16                       sssQualLev;
    kal_uint16                      sssFrameBoundary;
    kal_uint16                      sssCp;
} em_el1_CsrRpt_struct;

typedef struct
{
    kal_uint16                      SFN;
    kal_uint8                       subframe;
    kal_uint16                      pci;
    EARFCN                          earfcn;
    kal_uint8                       dlBw;
    kal_uint16                      payloadSize;
    kal_uint16                      decSFN;
    em_dl_crc_enum                  crcRlt;
    kal_uint8                       numAnt;
    kal_uint8                       txAntCfg;
    kal_uint16                      sfnOffst;
    kal_uint16                      freqOffst;                      // TBD
    kal_uint16                      tx0Rx0Cir;                      // TBD
} em_el1_PbchRpt_struct;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum                    mdmi_info;

    //lteMacKpis 7
    kal_uint16                      SFN;
    kal_uint8                       subframe;
    kal_uint8                       srPeriod;
} em_el1_status_sr_cfg_ind_struct;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum                    mdmi_info;

    //ltePhyPrach 1
    kal_uint16                      SFN;
    kal_uint8                       subframe;
    kal_int16                       rachTxPwr;
    kal_uint16                      zadOffSeq;                      //0~837, ZadOFF Sequence Number
    kal_uint8                       prachCfg;
    kal_uint8                       preambleFmt;
    em_duplex_enum                  duplexType;
    kal_uint8                       maxTxMsg3;
    kal_uint8                       rarWinSize;
    kal_bool                        rachRlt;
} em_el1_status_prach_ind_struct;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum                    mdmi_info;

    //ltePhyMeasurements 5
    kal_uint16                      SFN;
    kal_uint8                       subframe;
    kal_uint32                      dlTputVal;
    kal_uint32                      dlTputCw0;
    kal_uint32                      dlTputCw1;
} em_el1_status_dl_tput_ind_struct;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum                    mdmi_info;

    //ltePhyMeasurements 6
    kal_uint16                      SFN;
    kal_uint8                       subframe;
    kal_uint32                      ulTputVal;
} em_el1_status_ul_tput_ind_struct;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum                    mdmi_info;

    el1_em_PdcchRpt_struct          PdcchRpt[LTE_MAX_DATA_BUF];
    kal_uint16                      PdcchRpt_num;
    kal_uint16                      Pdcch_num;
} em_el1_status_pdcch_rpt_ind_struct;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum                    mdmi_info;

    //ltePhyPdsch 1
    el1_em_PdschRpt_struct          PdschRpt[LTE_MAX_DATA_BUF];
    kal_uint16                      PdschRpt_num;
    kal_uint16                      Pdsch_num;
} em_el1_status_pdsch_rpt_ind_struct;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum                    mdmi_info;

    //ltePhyPhich 1,3
    el1_em_PhichRpt_struct          PhichRpt[LTE_MAX_DATA_BUF];
    kal_uint16                      PhichRpt_num;
} em_el1_status_phich_rpt_ind_struct;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum                    mdmi_info;

    //ltePhyMeasurements 10, 11
    em_el1_CsrRpt_struct            CsrRlt[LTE_MAX_DATA_BUF];
    kal_uint8                       CsrRlt_num;
} em_el1_status_csr_rpt_ind_struct;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum                    em_info;

    //Carrier search information
    EARFCN                          csr_earfcn;
    kal_uint8                       csr_band;
} em_el1_status_csr_ind_struct;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum                    mdmi_info;

    //ltePhyMeasurements 1
    em_el1_SrvMeasRpt_struct        SrvMeasRpt[LTE_MAX_DATA_BUF];
    kal_int8                        SrvMeasRpt_num;
} em_el1_status_srv_meas_rpt_ind_struct;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum                    mdmi_info;

    //ltePhyPucch 1,3
    em_el1_PucchRpt_struct          PucchRpt[LTE_MAX_DATA_BUF];
    kal_uint8                       PucchRpt_num;
} em_el1_status_pucch_rpt_ind_struct;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum                    mdmi_info;

    //ltePhyPucch 4
    em_el1_PucchCsiRpt_struct       PucchCsiRpt[LTE_MAX_DATA_BUF];
    kal_uint8                       PucchCsiRpt_num;
} em_el1_status_pucch_csi_rpt_ind_struct;



typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum                    mdmi_info;

    //ltePhyPusch 1,3
    em_el1_PuschRpt_struct          PuschRpt[LTE_MAX_DATA_BUF];
    kal_uint8                       PuschRpt_num;
} em_el1_status_pusch_rpt_ind_struct;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum                    mdmi_info;

    //ltePhyPusch 4
    em_el1_PuschCsiRpt_struct       PuschCsiRpt[LTE_MAX_DATA_BUF];
    kal_uint8                       PuschCsiRpt_num;
} em_el1_status_pusch_csi_rpt_ind_struct;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum                    mdmi_info;

    //ltePhyMeasurements 17
    em_el1_DciRpt_struct            DciRpt[LTE_MAX_DATA_BUF];
    kal_uint8                       DciRpt_num;
} em_el1_status_dci_rpt_ind_struct;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum                    mdmi_info;

    //ltePhyPmch 3
    em_el1_PmchRpt_struct           PmchRpt[LTE_MAX_DATA_BUF];
    kal_uint8                       PmchRpt_num;
} em_el1_status_pmch_rpt_ind_struct;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum                    mdmi_info;

    //ltePhyMeasurements 15, 16
    em_el1_SrsRpt_struct            SrsRpt[LTE_MAX_DATA_BUF];
	kal_uint8                       SrsRpt_num;
} em_el1_status_srs_rpt_ind_struct;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum                    mdmi_info;

    //ltePhyDebug 1
    kal_uint16                      SFN;
    kal_uint8                       subframe;
    kal_uint32                      strtDlFrmeTimeOffst;            // 0~307200, Ts units
    kal_uint32                      strtUlFrameTimeOffst;           // 0~307200, Ts units
    kal_uint32                      strtUlTimeAdv;                  // 0~307200, Ts units
    kal_int16                       dlFrameTimeChng;                // -512~511
    kal_int16                       ulFrameTimeChng;                //  -16~15
    kal_int8                        timeAdvChng;                    // -128~127
} em_el1_status_celltime_rpt_ind_struct;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum                    mdmi_info;

    //ltePhyPcfich 3
    em_el1_PcfichRpt_struct         PcfichRpt[LTE_MAX_DATA_BUF];
    kal_uint8                       PcfichRpt_num;
} em_el1_status_pcfich_rpt_ind_struct;

typedef struct
{
    kal_uint8                       sequence;                       //    0~63, Preamble sequence index
    kal_int8                        prachTxPower;                   // -112~23, PRACH tx power
    kal_uint8                       duplexMode;
} el1_em_msg1_rpt_struct;

typedef struct
{
    kal_uint8                       mcs;
    kal_uint8                       modType;
    kal_uint8                       startRb;
    kal_uint8                       numRb;
    kal_uint8                       tbSizeIndex;
} el1_em_msg3_rpt_struct;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum                    mdmi_info;

    kal_uint16                      SFN;
    kal_uint8                       subframe;

    kal_bool                        msg1_valid;
    el1_em_msg1_rpt_struct          msg1_rpt;
    kal_bool                        msg3_valid;
    el1_em_msg3_rpt_struct          msg3_rpt;
} em_el1_status_rach_ind_struct;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum                    mdmi_info;

    em_el1_PbchRpt_struct           PbchRpt[LTE_MAX_DATA_BUF];
    kal_uint8                       PbchRpt_num;
} em_el1_status_pbch_rpt_ind_struct;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum                    mdmi_info;

    EARFCN                          earfcn;
    kal_uint16                      pci;
    em_paging_cyc_enum              pagCyc;
    em_drx_nb_enum                  nb;
    kal_uint16                      ueId;                           // IMSI mod 1024
    kal_uint8                       drxFrameNumOffst;
    kal_uint8                       drxSubframeNum;
} em_el1_status_pch_ind_struct;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum                    mdmi_info;

    //ltePhyMeasurements 7
    kal_uint16                      SFN;
    kal_uint8                       subframe;
    kal_int16                       ta_value;
} em_el1_status_ta_ind_struct;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum                    mdmi_info;

    //ltePhyMeasurements 8
    kal_uint16                      SFN;
    kal_uint8                       subframe;
    kal_int8                        phr_value;                      // -23~40
} em_el1_status_phr_ind_struct;

// CIQ
typedef struct
{
    kal_bool                        wb_rpt_valid;
    kal_uint8                       sb_rpt_num;
    kal_uint16                      wb_cqi_dist[16];
    kal_uint16                      sb_cqi_dist[4][16];
    kal_uint16                      ri_dist[5];
    kal_uint16                      pmi_dist[16];
} el1_em_csi_rpt_struct;



typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum                    ciq_info;
    kal_uint32				trig_time; 
    //LT13 - E-UTRA Radio Link Sync Status
    em_t310_status_enum             t310_status;
} em_el1_ciq_rlf_status_ind_struct;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum                    ciq_info;
    kal_uint32				trig_time; 

    //LT12 - E-UTRA PUSCH Transmission Status
    kal_int16                       total_pwr;
    kal_int16                       perRB_pwr;
    kal_uint16                      count_pwr;
    //CSI info
    //TBD
    el1_em_csi_rpt_struct		csi_rpt;
} em_el1_ciq_pusch_ind_struct;




#endif /* _EM_EL1_PUBLIC_STRUCT_H */

