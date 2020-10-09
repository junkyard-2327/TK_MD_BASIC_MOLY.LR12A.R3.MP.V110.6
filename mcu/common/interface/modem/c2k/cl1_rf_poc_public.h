
/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2017
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


/*****************************************************************************
*
* FILE NAME   :cl1_rf_poc_public.h
*
* DESCRIPTION :
*
*
* HISTORY     :
*     See Log at end of file
*
*****************************************************************************/
/*----------------------------------------------------------------------------
 Include Files
----------------------------------------------------------------------------*/
#ifndef _CL1D_RF_POC_PUBLIC_H_
#define _CL1D_RF_POC_PUBLIC_H_

#include "cl1d_rf_cid.h"

/* TX DFE related */
#define TX_DC_COMP_FC_MODE_NUM                 2
#define TX_DC_COMP_PGA_SLICE_SET_NUM           8

#define TX_IQ_COMP_FC_MODE_NUM                 2
#define TX_IQ_COMP_PGA_SLICE_SET_NUM           8

/* RX DFE related */
#define RX_PATH_MAX_NUM                        (3)
#define RX_POWER_MODE_MAX_NUM                  (2)

#define RX_FD_FILT_TAPS_MAX_NUM                 7   /*>  maximum numbers of compensation filter taps  */

#define CL1D_RF_RXDFE_DC_TIA_GAIN_HPM_STEPS     (3)
#define CL1D_RF_RXDFE_DC_PGA_GAIN_HPM_STEPS     (7)

#define CL1D_RF_RXDFE_DC_TIA_GAIN_LPM_STEPS     CL1D_RF_RXDFE_DC_TIA_GAIN_HPM_STEPS
#define CL1D_RF_RXDFE_DC_PGA_GAIN_LPM_STEPS     CL1D_RF_RXDFE_DC_PGA_GAIN_HPM_STEPS

/* TXK DFE related */
#define CL1D_RF_TXK_DETDFE_EQLPF_TAP_NUM        (11)
#define CL1D_RF_TXK_DETDFE_FE_GAIN_STEPS        (2)
#define CL1D_RF_TXK_DETDFE_GAIN_STEPS           (15)

/* RX DEV related */
#define CL1D_RF_DEV_POC_RXAGC_TABLE_MAX_INDEX   (19) // CL1D_RF_DEV_RXAGC_TABLE_MAX_INDEX
#define MMRFC_C2K_POC_TX_PGA_SLICE_NUM          (7)  // MMRFC_C2K_TX_PGA_SLICE_NUM

#if IS_CL1D_RF_MT6177L
#define CL1D_RF_DEV_POC_TX_PGA_A_TABLE_SIZE     (21)  //CL1D_RF_DEV_TX_PGA_A_TABLE_SIZE
#define CL1D_RF_DEV_POC_TX_PGA_B_TABLE_SIZE     (17)  //CL1D_RF_DEV_TX_PGA_B_TABLE_SIZE
#elif IS_CL1D_RF_MT6177M
#define CL1D_RF_DEV_POC_TX_PGA_A_TABLE_SIZE     (30)  //CL1D_RF_DEV_TX_PGA_A_TABLE_SIZE
#define CL1D_RF_DEV_POC_TX_PGA_B_TABLE_SIZE     (0)  //CL1D_RF_DEV_TX_PGA_B_TABLE_SIZE
#endif
#define CL1D_RF_DEV_POC_TX_PGA_TABLE_SIZE       (CL1D_RF_DEV_POC_TX_PGA_A_TABLE_SIZE + CL1D_RF_DEV_POC_TX_PGA_B_TABLE_SIZE)//CL1D_RF_DEV_TX_PGA_TABLE_SIZE

#define CL1D_RF_DEV_POC_TXDET_AGC_TABLE_SIZE    (15)  //CL1D_RF_DEV_TXDET_AGC_TABLE_SIZE
#define CL1D_RF_DEV_POC_DET_FE_GAIN_STEPS       (2)   //CL1D_RF_DEV_DET_FE_GAIN_STEPS


#define CL1D_RF_IF_MAX_NUM                  (7)

#if IS_CL1D_RF_MT6177L
#define CL1D_TX_LPF_NOMINAL_VALUE      172//for 77L
#elif IS_CL1D_RF_MT6177M
#define CL1D_TX_LPF_NOMINAL_VALUE      26//for 77M
#endif

#if IS_CL1D_RF_MT6177L
#define CL1D_TX_RCF_NOMINAL_VALUE      16
#elif IS_CL1D_RF_MT6177M
#define CL1D_TX_RCF_NOMINAL_VALUE      17
#endif

typedef enum
{
  CL1D_RF_DEV_TIA0,
  CL1D_RF_DEV_TIA1,
  CL1D_RF_DEV_TIA_NUM
}CL1D_RF_DEV_TIA_E;

typedef struct
{
   kal_int16                      i_part;
   kal_int16                      q_part;
} CL1D_RF_TXDFE_DC_COMP_T;

typedef struct
{
   CL1D_RF_TXDFE_DC_COMP_T        comp_tab[TX_DC_COMP_FC_MODE_NUM][TX_DC_COMP_PGA_SLICE_SET_NUM];
} CL1D_RF_TXDFE_DC_COMP_TAB_T;

typedef struct
{
   kal_int16                      gain;
   kal_int16                      phase;
} CL1D_RF_TXDFE_IQ_COMP_T;

typedef struct
{
   CL1D_RF_TXDFE_IQ_COMP_T           comp_tab[TX_IQ_COMP_FC_MODE_NUM][TX_IQ_COMP_PGA_SLICE_SET_NUM];
} CL1D_RF_TXDFE_IQ_COMP_TAB_T;


typedef struct{    
    kal_int32            gain_est_hw; /*>  S-3.10, epsilon */
    kal_int32            phase_est_hw;/*>  S-4.10, -theta/2, in radians */
    kal_int16            freq_dep_filt[RX_FD_FILT_TAPS_MAX_NUM]; /*>  Valid for 2-point meas. */
} CL1D_RF_RXDFE_IRR_COMP_T;

typedef struct{
    CL1D_RF_RXDFE_IRR_COMP_T hpm;
    CL1D_RF_RXDFE_IRR_COMP_T lpm;
} CL1D_RF_RXDFE_IRR_COMP_PER_PATH_T;

/* Real hit */
typedef struct{
    CL1D_RF_RXDFE_IRR_COMP_PER_PATH_T rx[RX_PATH_MAX_NUM];
} CL1D_RF_RXDFE_IRR_COMP_PER_BAND_T;

typedef struct
{
    kal_int16 dc_i; /*>  RF DC:S5.0,resolution = 9mV. DFE DC: S0.14, fixed point value at Rx ADC, Rx ADC full swing is +/-1.62v */
    kal_int16 dc_q; /*>  RF DC:S5.0,resolution = 9mV. DFE DC: S0.14, fixed point value at Rx ADC, Rx ADC full swing is +/-1.62v */
} CL1D_RF_RXDFE_DC_COMP_T;

typedef struct
{
    CL1D_RF_RXDFE_DC_COMP_T hpm[CL1D_RF_RXDFE_DC_TIA_GAIN_HPM_STEPS][CL1D_RF_RXDFE_DC_PGA_GAIN_HPM_STEPS];
    CL1D_RF_RXDFE_DC_COMP_T lpm[CL1D_RF_RXDFE_DC_TIA_GAIN_LPM_STEPS][CL1D_RF_RXDFE_DC_PGA_GAIN_LPM_STEPS];
} CL1D_RF_RXDFE_DC_COMP_PER_PATH_T;

typedef struct
{
   CL1D_RF_RXDFE_DC_COMP_PER_PATH_T rx[RX_PATH_MAX_NUM];
} CL1D_RF_RXDFE_DC_COMP_PER_BAND_T;


/* TRANSCEIVER PART */
/** POC  processing result structure definition*/
typedef struct
{
  kal_uint32 rxd_iip2_cw349;  /* RX1 IIP2 Cal */
  kal_uint32 rx_iip2_cw473;  /* RX1 IIP2 Cal */
  kal_uint32 rx_iip2_cw482;  /* RX2 IIP2 Cal */
  kal_uint32 rxd_iip2_cw350;
}RX_IIP2_CAL_RESULT_CW_T;

typedef struct
{
  kal_uint32 tx_lo_cw714;     /* TX LO Cal */
}TX_LO_CAL_RESULT_T;

typedef struct
{
  kal_uint32 tx_rc_lpf_cw787;  /* TX RC Cal */
  kal_uint32 tx_rc_rcf_cw793;  /* TX RC Cal */
}TX_RC_CAL_RESULT_T;

typedef struct
{
  kal_uint32 tx_bal_cap_cw795;  /* TX PGA Cap Tuning */
  kal_uint32 tx_bal_cap_cw796;  /* TX PGA Cap Tuning */
}TX_CAP_CAL_RESULT_T;

typedef struct
{
  kal_uint32 tx_cdcoc_cw807;  /* DET coarse DCOC */
  kal_uint32 tx_cdcoc_cw808;  /* DET coarse DCOC */
}DET_CDCOC_CAL_RESULT_T;

typedef struct{    
    kal_int16 gain_est;  /*>  S-3.10 */
    kal_int16 phase_est; /*>  S-4.10 */
}DET_IQ_CAL_RESULT_T;

typedef struct
{
   /** The estimate DC offset in S0.11 */
   kal_int16 dco_est_i; 
   kal_int16 dco_est_q; 
}DET_DC_CAL_RESULT_T;

typedef struct
{
   kal_uint32 tx_det_cw817; /* Bit19-Bit12 Ncsel */
}DET_SPARES_T;

/** RXDC Table context */
typedef struct 
{
  kal_uint16  rxDcocI;  /** S5.0,resolution = 9mV */
  kal_uint16  rxDcocQ;  /** S5.0,resolution = 9mV */
}CL1D_RF_DEV_POC_RF_RX_DCOC_T; //CL1D_RF_DEV_RF_RX_DCOC_T

typedef struct 
{
   /** The estimate DC offset, TxPath:S0.14, Tx DAC full swing is +/-1.05v. DetPath:S0.11, det ADC full swing is +/-0.6v, 13MHz clock */
   kal_int16    dco_est_i; 
   kal_int16    dco_est_q; 
   /** The estimate phase error, TxPath:S-4.10, -theta/2, in radians. DetPath:S-4.10, -theta/2, in radians */
   kal_int16    phase_est; 
   /** The estimate gain error, TxPath:S-4.10, epsilon/2. DetPath:S-3.10, epsilon */
   kal_int16    gain_est; 
}CL1D_RF_DEV_POC_IQ_DC_CALIB_PARM_T; //CL1D_RF_DEV_IQ_DC_CALIB_PARM_T

typedef struct 
{
  kal_int16   pga_gain;    /** TX_PGA relative gain with G0, 1/32dB unit */
}CL1D_RF_DEV_POC_RF_TX_AGC_TABLE_T;

/** TX and DET path IQ imbalance and DC POC result structure */
typedef struct{    
   kal_int16 gain_est;  /*>  S-3.10, epsilon */
   kal_int16 phase_est; /*>  S-4.10, -theta/2, in radians */
}CL1D_RF_DEV_POC_DET_IQ_CAL_PARM_T;

typedef struct
{
   /** The estimate DC offset in S0.11, det ADC full swing is +/-0.6v, the clock is 13MHz */
   kal_int16 dco_est_i; 
   kal_int16 dco_est_q; 
}CL1D_RF_DEV_POC_DET_DC_CAL_PARM_T;

typedef struct {
    kal_uint32 dc;  /*RF DC offset in S5.0*/ /*digital DC offset in S0.14*/
}CL1D_RF_DEV_DC_T;

typedef struct {
    CL1D_RF_DEV_DC_T DC_DATA_I_HPM[CL1D_RF_DEV_TIA_NUM][CL1D_RF_IF_MAX_NUM];
    CL1D_RF_DEV_DC_T DC_DATA_I_LPM[CL1D_RF_DEV_TIA_NUM][CL1D_RF_IF_MAX_NUM];
    CL1D_RF_DEV_DC_T DC_DATA_Q_HPM[CL1D_RF_DEV_TIA_NUM][CL1D_RF_IF_MAX_NUM];
    CL1D_RF_DEV_DC_T DC_DATA_Q_LPM[CL1D_RF_DEV_TIA_NUM][CL1D_RF_IF_MAX_NUM];
} CL1D_RF_DEV_DC_TBL_T;

typedef struct
{
/* RX IRR, config in RXDFE */
    //CL1D_RF_DEV_DFE_RX_IRR_T rx_irr_hpm[RX_PATH_MAX_NUM];
    //CL1D_RF_DEV_DFE_RX_IRR_T rx_irr_lpm[RX_PATH_MAX_NUM];

/* RX DC of DFE*/
    //CL1D_RF_DEV_DFE_RX_DC_T dfe_rx_dc_hpm[RX_PATH_MAX_NUM][CL1D_RF_DEV_POC_RXAGC_TABLE_MAX_INDEX];
    //CL1D_RF_DEV_DFE_RX_DC_T dfe_rx_dc_lpm[RX_PATH_MAX_NUM][CL1D_RF_DEV_POC_RXAGC_TABLE_MAX_INDEX];

/* RX DC of RF*/
	CL1D_RF_DEV_DC_TBL_T         rf_rx_dc[3];

/* RX IIP2, config in RF */
    RX_IIP2_CAL_RESULT_CW_T rx_iip2_cal_result;
}RX_POC_TABLE_T;

typedef struct
{
/* TX LO Cal, config in RF */
    TX_LO_CAL_RESULT_T tx_lo_cal_result;

/* TX RC, config in RF */
    TX_RC_CAL_RESULT_T tx_rc_cal_result;

/* TX IQDC, config in TXDFE */
//    CL1D_RF_DEV_POC_IQ_DC_CALIB_PARM_T tx_iq_dc_cal_result[MMRFC_C2K_POC_TX_PGA_SLICE_NUM+1];

/* TX DNL */
    CL1D_RF_DEV_POC_RF_TX_AGC_TABLE_T tx_dnl_cal_result[CL1D_RF_DEV_POC_TX_PGA_TABLE_SIZE];

/* TX PGA Cap Tuning, config in RF */
    TX_CAP_CAL_RESULT_T tx_cap_cal_result;

/* TX PGA phase step */
    kal_int16           tx_pga_phase_step;

}TX_POC_TABLE_T;

typedef struct
{
/* DET coarse DCOC, config in RF */
    DET_CDCOC_CAL_RESULT_T det_cdcoc_cal_result;

/* DET spare */
    DET_SPARES_T  det_spares;

/* DET DNL, config in RF */
    kal_int16 det_dnl_cal_result[CL1D_RF_DEV_POC_TXDET_AGC_TABLE_SIZE];

/* DET IQ imbalance with Tx path forward signal, config in TXDFE  */
    CL1D_RF_DEV_POC_DET_IQ_CAL_PARM_T det_iq_fwd[CL1D_RF_DEV_POC_DET_FE_GAIN_STEPS];

/* DET fine DC with Tx path forward signal, config in TXDFE */
    CL1D_RF_DEV_POC_DET_DC_CAL_PARM_T det_dc_fwd[CL1D_RF_DEV_POC_TXDET_AGC_TABLE_SIZE];

/* DET IQ imbalance with Tx path reverse signal, config in TXDFE  */
    CL1D_RF_DEV_POC_DET_IQ_CAL_PARM_T det_iq_rev[CL1D_RF_DEV_POC_DET_FE_GAIN_STEPS];

/* DET fine DC with Tx path reverse signal, config in TXDFE */
    CL1D_RF_DEV_POC_DET_DC_CAL_PARM_T det_dc_rev[CL1D_RF_DEV_POC_TXDET_AGC_TABLE_SIZE];
}DET_POC_TABLE_T;

typedef struct
{
    RX_POC_TABLE_T  rx_poc_table;
    TX_POC_TABLE_T  tx_poc_table;
    DET_POC_TABLE_T det_poc_table;
}CL1D_RF_POC_DEV_FINAL_RESULT_T;

typedef struct
{
    kal_int32 i_part;
    kal_int32 q_part;
}CL1D_RF_TXK_DETDFE_EQLPF_COMP_T;

typedef struct
{
    CL1D_RF_TXK_DETDFE_EQLPF_COMP_T coef[CL1D_RF_TXK_DETDFE_EQLPF_TAP_NUM];
    kal_int32              scale_i;
    kal_int32              scale_q;
}CL1D_RF_TXK_DETDFE_EQLPF_CFG_T;

typedef struct
{
    CL1D_RF_TXK_DETDFE_EQLPF_CFG_T per_fe_gain[CL1D_RF_TXK_DETDFE_FE_GAIN_STEPS];
}CL1D_RF_TXK_DETDFE_EQLPF_COMP_PER_BAND_T;

typedef struct
{
    kal_int32              gain_est_hw;
    kal_int32              phase_est_hw;
    kal_int32              dnl; 
    kal_int32              freq_dep_phase_est;                 ///< Valid for 2-point meas. for error handling
}CL1D_RF_TXK_DETDFE_IQ_COMP_T;

typedef struct
{
    CL1D_RF_TXK_DETDFE_IQ_COMP_T  per_fe_gain[CL1D_RF_TXK_DETDFE_FE_GAIN_STEPS];
}CL1D_RF_TXK_DETDFE_IQ_COMP_PER_BAND_T;

typedef struct
{
    kal_int32            dc_est_i; /*>  S0.11, fixed point value at Det ADC, Det ADC full swing is +/-0.6v */
    kal_int32            dc_est_q; /*>  S0.11, fixed point value at Det ADC, Det ADC full swing is +/-0.6v */
}CL1D_RF_TXK_DETDFE_DC_COMP_T;

typedef struct
{
    CL1D_RF_TXK_DETDFE_DC_COMP_T per_det_gain[CL1D_RF_TXK_DETDFE_GAIN_STEPS];
}CL1D_RF_TXK_DETDFE_DC_COMP_PER_BAND_T;

typedef struct{
    /* RXDFE */
    CL1D_RF_RXDFE_IRR_COMP_PER_BAND_T irr_comp;
    CL1D_RF_RXDFE_DC_COMP_PER_BAND_T dc_comp;

    /* TXDFE */
    CL1D_RF_TXDFE_IQ_COMP_TAB_T tx_iq_comp;
    CL1D_RF_TXDFE_DC_COMP_TAB_T tx_dc_comp;

    /* TXKDFE */
    CL1D_RF_TXK_DETDFE_EQLPF_COMP_PER_BAND_T txk_eqlpf_fwd_comp;
    CL1D_RF_TXK_DETDFE_IQ_COMP_PER_BAND_T txk_iq_fwd_comp;
    CL1D_RF_TXK_DETDFE_DC_COMP_PER_BAND_T txk_dc_fwd_comp;

    /* Transceiver */
    CL1D_RF_POC_DEV_FINAL_RESULT_T poc_dev_fin;
} CL1D_RF_POC_FINAL_T;

#endif /* _CL1D_RF_POC_PUBLIC_H_ */

