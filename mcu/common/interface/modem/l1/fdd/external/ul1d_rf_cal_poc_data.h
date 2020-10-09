/******************************************************************************
*  Modification Notice:
*  --------------------------
*  This software is modified by MediaTek Inc. and the information contained
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
*******************************************************************************/

/*==============================================================================
 *             HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
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
 *
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
 * removed!
 *
 * removed!
 * removed!
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================*/
/* Doxygen Group Header ****************************************************//**
 * @addtogroup UL1D_RF_CUSTOM_DATA
 * @{
 ******************************************************************************/
/***************************************************************************//**
 * @file       ul1d_rf_cal_poc_data.h
 * @author     Neil Chung(MTK08266)
 * @date       2015.01.26
 * @brief      UL1D RF POC SHM data header file
 * @details    Provide RF POC data structure for PCORE and L1CORE (SHM)
 ******************************************************************************/

#ifndef __UL1D_RF_CAL_POC_DATA_H__
#define __UL1D_RF_CAL_POC_DATA_H__

/*******************************************************************************
 * #include
 ******************************************************************************/
#include "kal_general_types.h"
#include "mml1_rf_cal_def.h"

/*******************************************************************************
 * #define
 ******************************************************************************/
#define UMTS_RFC_RXDFE_FDPM_TAPS_NUM_MAX        (5)

#define UL1D_RF_RX_ROUTE_MAX                    (5)
#define UL1D_RF_RX_DC_COMP_ROUTE_MAX            (1)//UL1D_RF_RX_ROUTE_MAX
#define UL1D_RF_RX_IRR_COMP_ROUTE_MAX           (1)
#define UL1D_RF_RX_IIP2_COMP_ROUTE_MAX          (1)//11

#define UL1D_RXDC_HPM_TIA_GAIN_STEPS            (2)
#define UL1D_RXDC_HPM_PGA_GAIN_STEPS            (7)
#define UL1D_RXDC_LPM_TIA_GAIN_STEPS            (1)
#define UL1D_RXDC_LPM_PGA_GAIN_STEPS            (6+1)

/*******************************************************************************
 * Enum
 ******************************************************************************/
typedef enum{
    UMTS_DET_CBW_COMP_INDEX_0, /* 5MHz */
    UMTS_DET_CBW_COMP_INDEX_1, /* 10MHz */
    UMTS_DET_CBW_COMP_INDEX_2, /* 15MHz */
} UMTS_DET_CBW_COMP_INDEX_E;



/*******************************************************************************
 * Typedef
 ******************************************************************************/
/** Structure Prototypes can be seen by other files */
typedef enum
{
   UMTSBandNone = 0,
   UMTSBand1    = 1,
   UMTSBand2    = 2,
   UMTSBand3    = 3,
   UMTSBand4    = 4,
   UMTSBand5    = 5,
   UMTSBand6    = 6,
   UMTSBand7    = 7,
   UMTSBand8    = 8,
   UMTSBand9    = 9,
   UMTSBand10   = 10,
   UMTSBand11   = 11,
   UMTSBand12   = 12,
   UMTSBand13   = 13,
   UMTSBand14   = 14,
   UMTSBand15   = 15,
   UMTSBand16   = 16,
   UMTSBand17   = 17,
   UMTSBand18   = 18,
   UMTSBand19   = 19,
   UMTSBand20   = 20,
   UMTSBand21   = 21,
   UMTSBand22   = 22,
   UMTSBandcount
}  UMTSBand;

typedef struct
{
   kal_uint32 emptydata;
}UL1D_RF_CAL_POC_RESULT_T;

/******************************
* Rx POC Part
*******************************/
typedef struct
{
    kal_int8            gain_est_hw;
    kal_int8            phase_est_hw;
    kal_int16           freq_dep_filt[UMTS_RFC_RXDFE_FDPM_TAPS_NUM_MAX];
} UMTS_RF_POC_RX_IRR_COMP_T;


typedef struct
{
   kal_int16 dc_i;
   kal_int16 dc_q;
} UMTS_RF_POC_RX_DC_COMP_T;

typedef struct
{
  UMTS_RF_POC_RX_DC_COMP_T    rx_dc[UL1D_RXDC_HPM_TIA_GAIN_STEPS][UL1D_RXDC_HPM_PGA_GAIN_STEPS];
} UMTS_RF_POC_RX_DC_HPM_COMP_T;

typedef struct
{
  UMTS_RF_POC_RX_DC_COMP_T    rx_dc[UL1D_RXDC_LPM_TIA_GAIN_STEPS][UL1D_RXDC_LPM_PGA_GAIN_STEPS];
} UMTS_RF_POC_RX_DC_LPM_COMP_T;

typedef struct
{
   kal_int8             gate_bias_i;
   kal_int8             gate_bias_q;
} UMTS_RF_POC_RX_IIP2_COMP_T;

typedef struct
{
   /* RX IRR */
   UMTS_RF_POC_RX_IRR_COMP_T    rx_irr_hpm[UL1D_RF_RX_IRR_COMP_ROUTE_MAX][MMRFC_UMTS_RX_CBW_NUM][MMRFC_ANT_NUM];
   UMTS_RF_POC_RX_IRR_COMP_T    rx_irr_lpm[UL1D_RF_RX_IRR_COMP_ROUTE_MAX][MMRFC_UMTS_RX_CBW_NUM][MMRFC_ANT_NUM];

   /* RX DC */
   UMTS_RF_POC_RX_DC_HPM_COMP_T rx_rf_dc_hpm[UL1D_RF_RX_DC_COMP_ROUTE_MAX][MMRFC_ANT_NUM];
   UMTS_RF_POC_RX_DC_LPM_COMP_T rx_rf_dc_lpm[UL1D_RF_RX_DC_COMP_ROUTE_MAX][MMRFC_ANT_NUM];
   UMTS_RF_POC_RX_DC_HPM_COMP_T rx_dig_dc_hpm[UL1D_RF_RX_DC_COMP_ROUTE_MAX][MMRFC_ANT_NUM];
   UMTS_RF_POC_RX_DC_LPM_COMP_T rx_dig_dc_lpm[UL1D_RF_RX_DC_COMP_ROUTE_MAX][MMRFC_ANT_NUM];

   /* RX IIP2 */
   UMTS_RF_POC_RX_IIP2_COMP_T   rx_iip2[MMRFC_ANT_NUM][UL1D_RF_RX_IIP2_COMP_ROUTE_MAX];

} UMTS_RF_POC_RX_COMP_DATA_T;


/******************************
* Tx DET POC Part
*******************************/
typedef struct
{
   kal_int32 i_part;
   kal_int32 q_part;

} UMTS_DET_EQLPF_COMP_T;

typedef struct
{
   UMTS_DET_EQLPF_COMP_T   coef[MMRFC_DET_EQLPF_TAP_NUM];
   kal_int32               scale_i;
   kal_int32               scale_q;
} UMTS_DET_FDADPCB_EQLPF_COMP_T;

typedef struct{
    kal_int8                        gain_est_hw;   //FIIQ gain
    kal_int8                        phase_est_hw;  //FIIQ phase
    UMTS_DET_FDADPCB_EQLPF_COMP_T   fd_ad_pcb;     //FDIQ, AD coefficient, 3G do not contain PCB information
} UMTS_RF_POC_DET_IQ_COMP_T;

typedef struct
{
   kal_int16            dc_i;
   kal_int16            dc_q;
} UMTS_RF_POC_DET_DC_COMP_T;

typedef struct
{
   /* DET Coarse DCOC */
   kal_uint32                  det_coarse_dcoc_cw807;
   kal_uint32                  det_coarse_dcoc_cw808;

   /* DET IQ/DC/DNL Forward */
   UMTS_RF_POC_DET_IQ_COMP_T    det_iq_fwd[MMRFC_DET_FE_GAIN_STEPS][MMRFC_UMTS_TX_CBW_NUM];
   UMTS_RF_POC_DET_DC_COMP_T    det_dc_fwd[MMRFC_DET_GAIN_STEPS];
   kal_int16                    det_dnl_fwd[MMRFC_DET_GAIN_STEPS];

   /* DET IQ/DC/DNL Reverse */
   UMTS_RF_POC_DET_IQ_COMP_T    det_iq_rev[MMRFC_DET_FE_GAIN_STEPS][MMRFC_UMTS_TX_CBW_NUM];
   UMTS_RF_POC_DET_DC_COMP_T    det_dc_rev[MMRFC_DET_GAIN_STEPS];
   kal_int16                    det_dnl_rev[MMRFC_DET_GAIN_STEPS];
} UMTS_RF_POC_DET_COMP_DATA_T;

/******************************
* Tx FOWRAD POC Part
*******************************/
typedef struct{
    kal_int8            gain_est;
    kal_int8            phase_est;
} UMTS_RF_POC_TX_IQ_COMP_T;

typedef struct
{
   kal_int16            dc_i;
   kal_int16            dc_q;
} UMTS_RF_POC_TX_DC_COMP_T;

typedef struct{
    kal_int16           freq_dep_filt[MMRFC_FILT_TAPS_NUM];
} UMTS_TX_FD_FILT_COMP_T;

typedef struct{
    kal_int16           re;
    kal_int16           im;
} UMTS_COMPLEX_16_T;

typedef struct
{
   UMTS_COMPLEX_16_T    tx_ga_filt_lin_1[MMRFC_FILT_TAPS_NUM];
   UMTS_COMPLEX_16_T    tx_ga_filt_lin_2[MMRFC_FILT_TAPS_NUM];
} UMTS_RF_POC_TX_GA_FILT_COMP_T;

typedef struct
{
   kal_int16            slope[13];//[MMRFC_TXGA_MAX_TONES-1];
   kal_int16            mag_inv_norm[14];//[MMRFC_TXGA_MAX_TONES];
} UMTS_RF_POC_TX_GA_TPC_COMP_T;

typedef struct{
   UMTS_RF_POC_TX_GA_FILT_COMP_T  tx_ga_filt_comp;
   UMTS_RF_POC_TX_GA_TPC_COMP_T   tx_ga_tpc_comp;
} UMTS_RF_POC_TX_GA_COMP_T;

typedef struct
{
   /* TX LO Cal */
   kal_uint32                   tx_lo;
   kal_uint8                    tx_lo_ind;
   kal_uint8                    tx_lo_capcal_peak_cap;
   kal_uint8                    tx_lo_in_bias_hpm;
   kal_uint8                    tx_lo_in_bias_lpm;
   kal_uint32                   stx_dcc_delta_nc;

   /* TX RC */
   kal_int16                     tx_rc_lpf[MMRFC_UMTS_TX_CBW_NUM];
   kal_int16                     tx_rc_rcf;

   /* TX FIIQ/DC/DNL Linear Mode */
   UMTS_RF_POC_TX_IQ_COMP_T     tx_iq_lin[MMRFC_TX_PGA_SLICE_NUM+1];
   UMTS_RF_POC_TX_DC_COMP_T     tx_dc_lin[MMRFC_TX_PGA_SLICE_NUM+1];

   UMTS_RF_POC_TX_IQ_COMP_T     tx_iq_dpd[MMRFC_TX_PGA_SLICE_NUM+1];
   UMTS_RF_POC_TX_DC_COMP_T     tx_dc_dpd[MMRFC_TX_PGA_SLICE_NUM+1];

   kal_int16                    tx_dnl_lin_pga_a[MMRFC_TX_DNL_PGA_A_GAIN_STEPS];
   kal_int16                    tx_dnl_lin_pga_b[MMRFC_TX_DNL_PGA_B_GAIN_STEPS+MMRFC_TX_DNL_PGA_AUX_GAIN_STEPS];

   /* TX FDIQ Linear Mode 1 */
   UMTS_TX_FD_FILT_COMP_T       tx_fdiq_lin_1[MMRFC_UMTS_TX_CBW_NUM][MMRFC_TX_PGA_SLICE_NUM+1];
   /* TX FDIQ Linear Mode 2 */
   UMTS_TX_FD_FILT_COMP_T       tx_fdiq_lin_2[MMRFC_UMTS_TX_CBW_NUM][MMRFC_TX_PGA_SLICE_NUM+1];

   /* TX GA */
   UMTS_RF_POC_TX_GA_COMP_T     tx_ga_w_ET[MMRFC_TX_PGA_TYPE_NUM][MMRFC_UMTS_TX_CBW_NUM];
   UMTS_RF_POC_TX_GA_COMP_T     tx_ga_wo_ET[MMRFC_TX_PGA_TYPE_NUM][MMRFC_UMTS_TX_CBW_NUM];

   /* TX PGA Phase Step */
   kal_int16                    pga_phase_step;

   /* TX PGA Gain Step */
   kal_int16                    pga_gain_step[MMRFC_TX_PGA_GAIN_STEP_SUBBAND_NUM][MMRFC_TX_PGA_GAIN_STEP_NUM];

   /* TX PGA Cap Tuning */
   kal_int8                     cap_tuning_pga_a;
   kal_int8                     cap_tuning_pga_b;
} UMTS_RF_POC_TX_COMP_DATA_T;

typedef struct
{
   kal_uint32 verno;
   UMTSBand band;
   UMTS_RF_POC_RX_COMP_DATA_T  umts_rx_comp;
   UMTS_RF_POC_DET_COMP_DATA_T umts_det_comp;
   UMTS_RF_POC_TX_COMP_DATA_T  umts_tx_comp;
} UMTS_RF_POWER_ON_CAL_DATA_PER_BAND_T;


#if UMTS_POC_RECAL_ENABLE
/******************************
*  POC Recal Part
*******************************/
typedef struct
{
    kal_int8            gain_est_hw;
    kal_int8            phase_est_hw;
    kal_int16           freq_dep_filt[MMRFC_FILT_TAPS_NUM];
} UMTS_RX_IRR_RESULT_DBG_T;

typedef struct
{
   kal_int16 dc_i;
   kal_int16 dc_q;
} UMTS_RX_DC_RESULT_DBG_T;

typedef struct
{
  UMTS_RF_POC_RX_DC_COMP_T    rx_dc[MMRFC_RXDC_TIA_GAIN_STEPS][MMRFC_RXDC_PGA_GAIN_WCDMA_STEPS];
} UMTS_RX_DC_HPM_RESULT_DBG_T;

typedef struct
{
  UMTS_RF_POC_RX_DC_COMP_T    rx_dc[MMRFC_RXDC_TIA_GAIN_LPM_STEPS][MMRFC_RXDC_PGA_GAIN_LPM_STEPS];
} UMTS_RX_DC_LPM_RESULT_DBG_T;

typedef struct{
    kal_int8            gain_est;
    kal_int8            phase_est;
} UMTS_TX_IQ_RESULT_DBG_T;

typedef struct
{
   kal_int16            dc_i;
   kal_int16            dc_q;
} UMTS_TX_DC_RESULT_DBG_T;


typedef struct
{
   /* RX IRR */
   UMTS_RF_POC_RX_IRR_COMP_T       rx_irr_hpm_recal[UL1D_RF_RX_IRR_COMP_ROUTE_MAX][MMRFC_UMTS_RX_CBW_NUM][MMRFC_ANT_NUM];
   UMTS_RF_POC_RX_IRR_COMP_T       rx_irr_lpm_recal[UL1D_RF_RX_IRR_COMP_ROUTE_MAX][MMRFC_UMTS_RX_CBW_NUM][MMRFC_ANT_NUM];
   UMTS_RF_POC_RX_DC_HPM_COMP_T    rx_dc_hpm_recal[UL1D_RF_RX_DC_COMP_ROUTE_MAX][MMRFC_ANT_NUM];
   UMTS_RF_POC_RX_DC_LPM_COMP_T    rx_dc_lpm_recal[UL1D_RF_RX_DC_COMP_ROUTE_MAX][MMRFC_ANT_NUM];

   /* DET Coarse DCOC */
   kal_uint32                  det_coarse_dcoc_cw807;
   kal_uint32                  det_coarse_dcoc_cw808;

   /* DET IQ/DC/DNL Forward */
   UMTS_RF_POC_DET_IQ_COMP_T    det_iq_fwd[MMRFC_DET_FE_GAIN_STEPS][MMRFC_UMTS_TX_CBW_NUM];
   UMTS_RF_POC_DET_DC_COMP_T    det_dc_fwd[MMRFC_DET_GAIN_STEPS];
   kal_int16                    det_dnl_fwd[MMRFC_DET_GAIN_STEPS];

    /* TX */
   UMTS_TX_IQ_RESULT_DBG_T     tx_iq_lin[MMRFC_TX_PGA_SLICE_NUM+1];
   UMTS_TX_DC_RESULT_DBG_T     tx_dc_lin[MMRFC_TX_PGA_SLICE_NUM+1];

   UMTS_TX_IQ_RESULT_DBG_T     tx_iq_dpd[MMRFC_TX_PGA_SLICE_NUM+1];
   UMTS_TX_DC_RESULT_DBG_T     tx_dc_dpd[MMRFC_TX_PGA_SLICE_NUM+1];
}UMTS_RF_POC_RECAL_DATA_T;

#endif


/*******************************************************************************
 * Global variables (Extern)
 ******************************************************************************/



/*******************************************************************************
** Global data for RF customization and META Factory Calibration
*******************************************************************************/


/*******************************************************************************
** Macro define for POC default value
*******************************************************************************/

#define UMTS_RXDC_RF_I_Default  (0xFFE0)
#define UMTS_RXDC_RF_Q_Default  (0xFFE0)
#define UMTS_RXDC_Dig_I_Default (0)
#define UMTS_RXDC_Dig_Q_Default (0)

#define UMTS_RXDC_RF_IQ_Default  \
{\
    UMTS_RXDC_RF_I_Default, UMTS_RXDC_RF_Q_Default \
}

#define UMTS_RXDC_Dig_IQ_Default  \
{\
    UMTS_RXDC_Dig_I_Default,\
    UMTS_RXDC_Dig_Q_Default \
}

#define UMTS_RXDC_RF_IQ_PGA_HPM_Default  \
{\
    /*rx_dc[0][0]*/UMTS_RXDC_RF_IQ_Default,\
    /*rx_dc[0][1]*/UMTS_RXDC_RF_IQ_Default,\
    /*rx_dc[0][2]*/UMTS_RXDC_RF_IQ_Default,\
    /*rx_dc[0][3]*/UMTS_RXDC_RF_IQ_Default,\
    /*rx_dc[0][4]*/UMTS_RXDC_RF_IQ_Default,\
    /*rx_dc[0][5]*/UMTS_RXDC_RF_IQ_Default,\
    /*rx_dc[0][6]*/UMTS_RXDC_RF_IQ_Default \
}

#define UMTS_RXDC_Dig_IQ_PGA_HPM_Default  \
{\
    /*rx_dc[0][0]*/UMTS_RXDC_Dig_IQ_Default,\
    /*rx_dc[0][1]*/UMTS_RXDC_Dig_IQ_Default,\
    /*rx_dc[0][2]*/UMTS_RXDC_Dig_IQ_Default,\
    /*rx_dc[0][3]*/UMTS_RXDC_Dig_IQ_Default,\
    /*rx_dc[0][4]*/UMTS_RXDC_Dig_IQ_Default,\
    /*rx_dc[0][5]*/UMTS_RXDC_Dig_IQ_Default,\
    /*rx_dc[0][6]*/UMTS_RXDC_Dig_IQ_Default \
}

#define UMTS_RXDC_RF_IQ_PGA_LPM_Default  \
{\
    /*rx_dc[0][0]*/UMTS_RXDC_RF_IQ_Default,\
    /*rx_dc[0][1]*/UMTS_RXDC_RF_IQ_Default,\
    /*rx_dc[0][2]*/UMTS_RXDC_RF_IQ_Default,\
    /*rx_dc[0][3]*/UMTS_RXDC_RF_IQ_Default,\
    /*rx_dc[0][4]*/UMTS_RXDC_RF_IQ_Default,\
    /*rx_dc[0][5]*/UMTS_RXDC_RF_IQ_Default,\
    /*rx_dc[0][6]*/UMTS_RXDC_RF_IQ_Default,\
}

#define UMTS_RXDC_Dig_IQ_PGA_LPM_Default  \
{\
    /*rx_dc[0][0]*/UMTS_RXDC_Dig_IQ_Default,\
    /*rx_dc[0][1]*/UMTS_RXDC_Dig_IQ_Default,\
    /*rx_dc[0][2]*/UMTS_RXDC_Dig_IQ_Default,\
    /*rx_dc[0][3]*/UMTS_RXDC_Dig_IQ_Default,\
    /*rx_dc[0][4]*/UMTS_RXDC_Dig_IQ_Default,\
    /*rx_dc[0][5]*/UMTS_RXDC_Dig_IQ_Default,\
    /*rx_dc[0][6]*/UMTS_RXDC_Dig_IQ_Default,\
}

#define UMTS_RXDC_RF_IQ_PGA_TIA_HPM_Default  \
{\
/*rx_dc[2:RX_TIA_GAIN_63p5dB][0~6]*/UMTS_RXDC_RF_IQ_PGA_HPM_Default,\
/*rx_dc[3:RX_TIA_GAIN_69p5dB][0~6]*/UMTS_RXDC_RF_IQ_PGA_HPM_Default \
}

#define UMTS_RXDC_Dig_IQ_PGA_TIA_HPM_Default  \
{\
/*rx_dc[2:RX_TIA_GAIN_63p5dB][0~6]*/UMTS_RXDC_Dig_IQ_PGA_HPM_Default,\
/*rx_dc[3:RX_TIA_GAIN_69p5dB][0~6]*/UMTS_RXDC_Dig_IQ_PGA_HPM_Default \
}


#define UMTS_RXDC_RF_IQ_PGA_TIA_LPM_Default  \
{\
    /*rx_dc[0:RX_TIA_GAIN_67p5dB][0~6]*/UMTS_RXDC_RF_IQ_PGA_LPM_Default,\
}

#define UMTS_RXDC_Dig_IQ_PGA_TIA_LPM_Default  \
{\
    /*rx_dc[0:RX_TIA_GAIN_67p5dB][0~6]*/UMTS_RXDC_Dig_IQ_PGA_LPM_Default,\
}

#define UMTS_RXDC_RF_ANT_HPM_Default  \
{/*ROUTE:0*/                          \
{ /*ANT0*/                            \
 UMTS_RXDC_RF_IQ_PGA_TIA_HPM_Default, \
},                                    \
{ /*ANT1*/                            \
 UMTS_RXDC_RF_IQ_PGA_TIA_HPM_Default, \
},                                    \
}

#define UMTS_RXDC_RF_ANT_LPM_Default  \
{/*ROUTE:0*/                          \
{ /*ANT0*/                            \
 UMTS_RXDC_RF_IQ_PGA_TIA_LPM_Default, \
},                                    \
{ /*ANT1*/                            \
 UMTS_RXDC_RF_IQ_PGA_TIA_LPM_Default, \
},                                    \
}

#define UMTS_RXDC_Dig_ANT_HPM_Default  \
{/*ROUTE:0*/                           \
{ /*ANT0*/                             \
 UMTS_RXDC_Dig_IQ_PGA_TIA_HPM_Default, \
},                                     \
{ /*ANT1*/                             \
 UMTS_RXDC_Dig_IQ_PGA_TIA_HPM_Default, \
},                                     \
}

#define UMTS_RXDC_Dig_ANT_LPM_Default  \
{/*ROUTE:0*/                           \
{ /*ANT0*/                             \
 UMTS_RXDC_Dig_IQ_PGA_TIA_LPM_Default, \
},                                     \
{ /*ANT1*/                             \
 UMTS_RXDC_Dig_IQ_PGA_TIA_LPM_Default, \
},                                     \
}


#define UMTS_RX_DC_RF_HPM_Default          \
{                                          \
  UMTS_RXDC_RF_ANT_HPM_Default,/*ROUTE:0*/ \
}

#define UMTS_RX_DC_RF_LPM_Default          \
{                                          \
  UMTS_RXDC_RF_ANT_LPM_Default,/*ROUTE:0*/ \
}

#define UMTS_RX_DC_Dig_HPM_Default          \
{                                           \
  UMTS_RXDC_Dig_ANT_HPM_Default,/*ROUTE:0*/ \
}

#define UMTS_RX_DC_Dig_LPM_Default          \
{                                           \
  UMTS_RXDC_Dig_ANT_LPM_Default,/*ROUTE:0*/ \
}


//ANT0/1
#define W_Rx_Irr_5Tap_Comp_Poc_Default \
{                                      \
   {0,0,{0,0,512,0,0}},                \
   {0,0,{0,0,512,0,0}},                \
}

//ANT0/1
#define W_Rx_Irr_7Tap_Comp_Poc_Default \
{                                      \
   {0,0,{0,0,512,0,0}},                \
   {0,0,{0,0,512,0,0}},                \
}


#define UMTS_RX_IRR_HPM_Default                \
{                                              \
 /*MMRFC_RX_IRR_COMP_ROUTE_MAX = 1, HPM*/      \
 {                                             \
    W_Rx_Irr_5Tap_Comp_Poc_Default,            \
    W_Rx_Irr_7Tap_Comp_Poc_Default,            \
    W_Rx_Irr_7Tap_Comp_Poc_Default            \
 },                                            \
}

#define UMTS_RX_IRR_LPM_Default                \
{                                              \
 /*MMRFC_RX_IRR_COMP_ROUTE_MAX = 5, HPM*/      \
 {                                             \
    W_Rx_Irr_5Tap_Comp_Poc_Default,            \
    W_Rx_Irr_7Tap_Comp_Poc_Default,            \
    W_Rx_Irr_7Tap_Comp_Poc_Default            \
 },                                            \
}


#define M_IIP2_I_DEFAULT (64)
#define M_IIP2_Q_DEFAULT (64)

#define W_Rx_Iip2_Comp_Poc_Default {M_IIP2_I_DEFAULT, M_IIP2_Q_DEFAULT}

#define UMTS_RX_IIP2_Default                \
{                                           \
 {  /*RXP*/                                 \
    W_Rx_Iip2_Comp_Poc_Default,/*ROUTE00*/  \
 },                                         \
 {  /*RXD*/                                 \
    W_Rx_Iip2_Comp_Poc_Default,/*ROUTE00*/  \
 }                                          \
}


/*******************************************************************************
 * Global Functions Prototype (Interface)
 ******************************************************************************/

#endif /*__EL1D_RF_CAL_POC_DATA_H__*/

/* Doxygen Group End ***************************************************//**@}*/
