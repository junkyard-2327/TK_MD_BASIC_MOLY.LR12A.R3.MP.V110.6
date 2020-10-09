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
 *   em_public_struct_xl1.h
 *
 * Project:
 * --------
 *   Gen93
 *
 * Description:
 * ------------
 *   Engineer mode public structures for C2K XL3 module.
 *
 * Author:
 * -------
 *   
 *
 *==============================================================================
 * HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
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

#ifndef _EM_PUBLIC_STRUCT_XL1_H
#define _EM_PUBLIC_STRUCT_XL1_H

#include "em_struct.h"
#include "em_msgid.h"

#define XL1_EM_REPORT_FRAME_NUM            25
#define EM_SYS_MAX_ACTIVE_LIST_PILOTS         6
#define EM_SYS_MAX_CANDIDATE_LIST_PILOTS      10
#define EM_SYS_MAX_NEIGHBOR_LIST_PILOTS       44

/* begin of C2K definition */

/*EM_XL1_STATUS_IND*/
typedef enum {
    EM_L1D_UNINITIALIZED = 0,
    EM_L1D_INITIALIZED,
    EM_PILOT_ACQ,
    EM_PILOT_FOUND,
    EM_ACQ_COMPLETE,
    EM_TIMING_CHANGE,
    EM_SYSTEM_TIME_UPDATE, /* Eliminated */
    EM_IDLE,
    EM_EACH_PREAMBLE_SETUP,
    EM_EACH_PREAMBLE_ON,
    EM_ACCESS_PREAMBLE_SETUP,
    EM_ACCESS_PREAMBLE_ON,
    EM_TRAFFIC_CHANNEL_SETUP, /* Renamed */
    EM_POWER_CONTROL_COMPLETE,/* Eliminated */
    EM_PREAMBLE_ON_RC1_2,/* Eliminated */
    EM_REVERSE_PILOT_SETUP,/* Eliminated */
    EM_PREAMBLE_ON_RC3_6,/* Eliminated */
    EM_L1D_TRAFFIC,
    EM_HARD_HANDOFF,
    EM_HARDHO_COMPLETE, /* Eliminated */
    EM_HARDHO_TRANSMITTER_CONTROL,/* Eliminated */
    EM_SERVICE_CONFIG,
#if defined (MTK_DEV_C2K_IRAT) && defined (MTK_DEV_C2K_SRLTE_L1)
    EM_TRAFFIC_SUSPEND,
#endif
    EM_L1D_NULL_STATE
}em_xl1_state_type_enum; 

typedef enum {
    EM_SP_STATE_IDLE = 0,                   /* slotted page mode is disabled */
    EM_SP_STATE_CLOCK_CAL,                  /* 32kHz 9mHz calibration */
    EM_SP_STATE_DIFF_FREQ_SEARCH,
    EM_SP_STATE_PCH_FCCCH_MONITOR,
    EM_SP_STATE_WAIT_FOR_SLEEP,
    EM_SP_STATE_WAIT_FOR_SEARCH,
    EM_SP_STATE_WAIT_FOR_SLEEP_ACK,
    EM_SP_STATE_SLEEP,
    EM_SP_STATE_QPCH1_MONITOR,
    EM_SP_STATE_QPCH2_MONITOR,
    EM_SP_STATE_CCI_MONITOR
}em_xl1_spage_state_type_enum; 

typedef enum {
    EM_SCH_SPAGE_STATE_RF_LOST = 0,
    EM_SCH_SPAGE_STATE_PCH_DECODE_NGHBR,
    EM_SCH_SPAGE_STATE_SLEEP,
    EM_SCH_SPAGE_STATE_SRCH_PILOT_LIST,
    EM_SCH_SPAGE_STATE_QPCH_DECODE_NO_NGHBR_RSLT,
    EM_SCH_SPAGE_STATE_SRCH_NGHBR,
    EM_SCH_SPAGE_STATE_QPCH_DECODE,
    EM_SCH_SPAGE_STATE_CCI_DECODE,
    EM_SCH_SPAGE_STATE_SRCH_BUFFER_DELAY,
    EM_SCH_SPAGE_STATE_CONT_RX,
    EM_SCH_SPAGE_STATE_INTER_FREQ_SRCH   
}em_xl1_slt_sch_state_type_enum; 


typedef struct
{
    em_xl1_state_type_enum               l1d_state;
    em_xl1_spage_state_type_enum         l1d_spage_state;
    em_xl1_slt_sch_state_type_enum       l1d_slt_sch_state;
    kal_uint32                           frc_cnt;
} xl1_status_info_struct;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum               em_info;
    xl1_status_info_struct     xl1_status_info[XL1_EM_REPORT_FRAME_NUM];
} em_xl1_status_info_ind_struct;

/*EM_XL1_MEAS_INFO*/
typedef enum {
    EM_SCH_RST = 0,
    EM_SCH_NCOH_IAQ,
    EM_SCH_COH_IAQ,
    EM_SCH_FDS,
    EM_SCH_NORMAL,
    EM_SCH_SPAGE,
    EM_SCH_QPCH,
    EM_SCH_CFS 
}em_xl1_srch_mode_type_enum; 

typedef struct
{
    kal_uint16                 PnOffset;
    kal_uint16                 PnPhase;
    kal_int16                  PnStrength;
    kal_int16                  Otd;
}xl1_pn_meas_rslt_struct;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum               em_info;
    em_xl1_srch_mode_type_enum SrchMode;
    kal_uint16                 NumAct;
    kal_uint16                 NumCand;
    kal_uint16                 NumNghbr; 
    xl1_pn_meas_rslt_struct    ActiveMeasRslt[EM_SYS_MAX_ACTIVE_LIST_PILOTS];
    xl1_pn_meas_rslt_struct    CandMeasRslt[EM_SYS_MAX_CANDIDATE_LIST_PILOTS];
    xl1_pn_meas_rslt_struct    NghbrMeasRslt[EM_SYS_MAX_NEIGHBOR_LIST_PILOTS];
    kal_int16                  pi;
    kal_int16                  cci;
} em_xl1_meas_info_ind_struct;

/*EM_XL1_MAIN_RXAGC_IND*/
typedef enum {
    EM_XL1_RXAGC_STATE_FAST = 0,
    EM_XL1_RXAGC_STATE_STEADY,
    EM_XL1_RXAGC_STATE_ICS,
    EM_XL1_RXAGC_STATE_CAL
}em_rxagc_state_enum; 

typedef enum{
    EM_CL1D_RF_HPM = 0,
    EM_CL1D_RF_LPM,
    EM_CL1D_RF_MAX_NUM_OF_PM
}em_pwr_mode_type_enum;

typedef struct
{
    kal_int16                  rssi;
    em_rxagc_state_enum        agc_state;
    em_pwr_mode_type_enum      power_mode;
    kal_int16                  dc;//TBD
    kal_int16                  band;
    kal_int16                  channel;
    kal_uint32                 frc_cnt;
} xl1_rxagc_info_struct;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum               em_info;
    xl1_rxagc_info_struct      xl1_rxagc_info[XL1_EM_REPORT_FRAME_NUM];
} em_xl1_main_rxagc_info_ind_struct;

/*EM_XL1_DIV_RXAGC_IND*/
typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum               em_info;
    xl1_rxagc_info_struct      xl1_rxagc_info[XL1_EM_REPORT_FRAME_NUM];
} em_xl1_div_rxagc_info_ind_struct;


/* begin of C2K definition */
typedef struct
{
    kal_uint16          tx_ctrl;
    kal_uint16          fch_status;
    kal_uint32          frc_cnt;
} xl1_tx_path_info_struct;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum               em_info;
    xl1_tx_path_info_struct    tx_path_info[XL1_EM_REPORT_FRAME_NUM];
} em_xl1_tx_path_info_ind_struct;

typedef struct
{
    kal_uint16          pcg_num;  /** close loop adjust accumulation with 1/64dB@S8.6 unit */
    kal_int16           cl_accum_pre;  /** RSSI value with filter in TXAGC HW with 1/64dBm@S7.6 unit*/
    kal_int16           ol_rx_pwr_filter_pre; /** current max limit Tx power with temperature back off and SWTP back off in HW with 1/64dBm@S5.6 unit */
    kal_int16           pwr_max;       /**Tx power at antenna in 1/32dBm@S6.5 unit */
    kal_int16           target_pwr;    /** KS in HW with 1/64dBm@S6.6 unit */
    kal_int16           ks;             /** RPC bit position*/
    kal_int16           rpc_sym_pos;   /** TX UPC trigger */
    kal_int16           tx_upc_trig;    /** RPC bit */
    kal_int16           rpc_bit;
    kal_uint32          frc_cnt;
} xl1_tx_agc_info_struct;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum             em_info;
    xl1_tx_agc_info_struct   tx_agc_info[XL1_EM_REPORT_FRAME_NUM];
} em_xl1_tx_agc_info_ind_struct;

typedef struct
{
    kal_int32           foe_read;
    kal_int32           total_foe;
    kal_int32           rx_pll_hz;
    kal_int32           tx_pll_hz;
    kal_int32           rx_nco_phase;    
    kal_int32           tx_nco_hz;
    kal_uint32          frc_cnt;
} xl1_afc_info_struct;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum          em_info;
    xl1_afc_info_struct   afc_info[XL1_EM_REPORT_FRAME_NUM];
} em_xl1_afc_info_ind_struct;
/* end of C2K definition */

typedef struct
{
    kal_uint32            micpwr[8];
    kal_int8              accdrift[8];
    kal_uint32            frc_cnt;
} xl1_rake_info_struct;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum          em_info;
    xl1_rake_info_struct  rake_info[8];
} em_xl1_rake_info_ind_struct;

typedef enum
{
    EM_FCH_BLANK      = 0x0,
    EM_FCH_EIGHTH     = 0x1,
    EM_FCH_QUARTER    = 0x2,   /* not used for SSO 3 */
    EM_FCH_HALF       = 0x3,
    EM_FCH_FULL       = 0x4,
    EM_FCH_ERASURE     = 0xE,
    EM_FCH_FULL_LIKELY = 0xF   /* used only for SSO's 1&3 */
}em_fch_data_rate;

typedef struct
{       
    kal_uint16            sync_EbNt;
    kal_uint16            pch_EbNt;
    kal_uint16            fch_EbNt;
    kal_uint16            sch_EbNt;
    em_fch_data_rate      fch_rate;    
    kal_bool              fchchnlqual;
    kal_bool              schchnlqual;
    kal_uint32            frc_cnt;
} xl1_crc_info_struct;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum          em_info;
    xl1_crc_info_struct   crc_info[XL1_EM_REPORT_FRAME_NUM];
} em_xl1_crc_info_ind_struct;

typedef enum
{
    EM_PATH_RXM      = 0x0,
    EM_PATH_RXD      = 0x1,
    EM_PATH_RXS      = 0x2,
    EM_PATH_TX       = 0x3,
    EM_MAX_PATH      = 0x4
}em_xl1_path_type_enum;

typedef enum
{
    EM_INIT_FOE_ICS      = 0x0,
    EM_INIT_FOE_DRX      = 0x1,
    EM_INIT_FOE_DFS      = 0x2
}em_xl1_path_on_scenario_enum;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum                   em_info;
    kal_int32                      InitFoe;
    em_xl1_path_type_enum          Path;
    em_xl1_path_on_scenario_enum   PathOnScenario;
    kal_int32                      InitPpb;
} em_xl1_mmafc_init_foe_info_ind_struct;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum     em_info;
    kal_uint16       Channel;          /* Current channel number */
    kal_uint16       BandClass;        /* Current band class  */
    kal_uint16       PilotPnOffset;    /* Pilot PN offset  */
    kal_int16        TxPower;   
    kal_int16        TasState;      /*figure*/
    kal_int16        TasVer;
    kal_int16        RxPowerDbmL;   /*figure*/
    kal_int16        RxPowerDbmU;   /*figure*/
    kal_int16        RxPowerDbmLp;  /*figure*/      
} em_xl1_tas_info_ind_struct;

typedef enum
{
    EM_TLP_TMG_TRK_NO_CHG,
    EM_TLP_TMG_TRK_ADV,
    EM_TLP_TMG_TRK_RET,
    EM_TLP_TMG_TRK_MAX
}em_xl1_tlp_tmg_trk_dir_enum;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum                    em_info;
    em_xl1_tlp_tmg_trk_dir_enum     em_tmg_trk_dir_info;
    kal_uint8                       AdjQ3;     
} em_xl1_timing_loop_info_ind_struct;
#endif
