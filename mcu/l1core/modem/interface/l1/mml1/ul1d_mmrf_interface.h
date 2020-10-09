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

/*****************************************************************************
 *
 * Filename:
 * ---------
 *   ul1d_mmrf_interface.h
 *
 * Project:
 * --------
 *   TK6291
 *
 * Description:
 * ------------
 *   UL1D interface to Multi-Mode Multi-RAT RF Central Control
 *
 * Author:
 * -------
 * -------
 *
 *============================================================================
 *             HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *----------------------------------------------------------------------------
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
 *
 * removed!
 * removed!
 *
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
 * removed!
 *
 * removed!
 * removed!
 *
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
 *
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
 *----------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

#ifndef  _UL1D_MMRF_INTERFACE_H_
#define  _UL1D_MMRF_INTERFACE_H_

/*===============================================================================*/

#include "kal_general_types.h"
#include "mml1_rf_cal_def.h"
#include "ul1d_rf_public.h"
#include "mml1_rf_cal_interface.h"
#include "mml1_rf_interface.h"
#include "mml1_rf_calpoc_rf_if.h"
//#include "ul1d_rf_internal.h"
//#include "el1d_mmrf_interface.h"

/**********************************************************************************
* define
**********************************************************************************/
/* TX MIPI PA */
#define UMTS_MAX_MIPI_PAON_CW_NUMBER_PER_BAND (48) //amount of 14 is used for ASM(2)/TPC(4+1) as default
#define UMTS_MAX_MIPI_PAOFF_CW_NUMBER_PER_BAND (20) // amount of 8 is used for TPC(4) as default

/* RXPOC */
#define UL1D_RX_IRR_DC_ROUTE_NUM_MAX      4
#define UL1D_RX_IIP2_ROUTE_NUM_MAX        (UL1D_RF_RX_IIP2_COMP_ROUTE_MAX)

#if 1/*POC Re-Org Phase 1*/
/** TXDFE filter coefficient and compensation data dimension*/
#define UL1D_TX_DC_COMP_FC_MODE_NUM            2
#define UL1D_TX_DC_COMP_PGA_SLICE_SET_NUM      8

#define UL1D_TX_IQ_COMP_FC_MODE_NUM            2
#define UL1D_TX_IQ_COMP_PGA_SLICE_SET_NUM      8

#define UL1D_FREQ_DEP_COMP_FC_MODE_NUM         2
#define UL1D_FREQ_DEP_COMP_PGA_SLICE_SET_NUM   8
#define UL1D_FREQ_DEP_COMP_COEFF_NUM           MMRFC_FILT_TAPS_NUM

#define UL1D_ASYMM_COMP_FC_MODE_NUM            4
#define UL1D_ASYMM_COMP_PGA_SLICE_SET_NUM      3
#define UL1D_ASYMM_COMP_COEFF_NUM              7
#endif

#if UMTS_POC_RECAL_ENABLE
#define UMTS_RECAL_ITER           (2)
#else
#define UMTS_RECAL_ITER           (1)
#endif

#define UL1D_POC_RX_DCOC_RECAL_ENABLE (0)

#if UL1D_POC_RX_DCOC_RECAL_ENABLE
#define UMTS_RX_DCOC_RECAL_ITER   (2)
#else
#define UMTS_RX_DCOC_RECAL_ITER   (1)
#endif


/************************************************************************************
* enum
************************************************************************************/

typedef enum
{
   BB_NO_ADJ,
   BB_NEG_3,
   BB_ADJ_VALUE,
}  TX_BB_GAIN_ADJ_TYPE_T;

typedef enum
{
   FREQ_DEP_3TAPS,
   FREQ_DEP_5TAPS,
   FREQ_DEP_7TAPS,
   FREQ_DEP_NA,
}  TX_FREQ_DEP_TAPS_T;

typedef enum
{
   ASYMM_3TAPS,
   ASYMM_5TAPS,
   ASYMM_7TAPS,
   ASYMM_9TAPS,
   ASYMM_11TAPS,
   ASYMM_NA,
}  TX_ASYMM_TAPS_T;

typedef enum
{
   DAC_RAT_104M,
   DAC_RAT_208M,
   DAC_RAT_416M,
}  TX_DAC_RATE_T;

typedef enum
{
   COS,
   JSIN,
   COS_PLUS_JSIN,
   COS_MINUS_JSIN,
}  TX_TTG_TONE_PHASE_T;

typedef enum
{
   PATH0,
   PATH1,
}  RX_PATH_T;

typedef enum
{
   FEC,
   CR4,
}  RX_SRC_SEL_T;

typedef enum
{
   ANT0,
   ANT1,
}  RX_ANT_T;

typedef enum
{
   FREQ_COMPLEX_BYPASS,
   RFEQ_COMPLEX_3TAPS,
   RFEQ_COMPLEX_5TAPS,
   RFEQ_COMPLEX_8TAPS,
}  RX_RFEQ_COMPLEX_TAPS_T;

typedef enum
{
   FDPM_0TAPS,
   FDPM_2TAPS,
   FDPM_3TAPS,
   FDPM_4TAPS,
   FDPM_5TAPS,
   FDPM_6TAPS,
   FDPM_7TAPS,
   FDPM_8TAPS,
   FDPM_DELAY_1TAPS,
   FDPM_DELAY_2TAPS,
   FDPM_DELAY_3TAPS,
}  RX_FDPM_TAPS_T;

typedef enum
{
   RX_PATH_NONE,
   RX_PATH_MAIN,
   RX_PATH_DIVERSITY,
   RX_PATH_BOTH,
} RF_RX_PATH_T;

typedef enum
{
   C0,
   C1,
   C2,
}  RX_CARRIER_T;

typedef enum
{
   DCK,
   IQK,
   IIP2K,
   IIP2K_NM,
}  RX_CAL_MODE_T;

typedef enum
{
   BWT_SC,
   BWT_DC,
   BWT_3C,
}  RX_PATH_BANDWIDTH_T;

typedef struct
{
   kal_uint16 mipi_data_start;
   kal_uint16 mipi_data_number;
}UL1D_RF_CAL_MIPI_DATA_T;
/*===============================================================================*/
/*===============================================================================*/
/*                     RF Calibration Result Structure                           */
/*     The structure is grouped from post-processing result. Some redundent      */
/*     items may need to be removed and excluded in shared memory or NVRAM.      */
/*===============================================================================*/
typedef struct
{
   RF_CW_T stxCw511;   //STX MAIN
   RF_CW_T stxCw529;   //DCO1
   RF_CW_T stxCw549;   //MMD2
   RF_CW_T stxCw582;
}UMTS_STX_CONFIG_BUFFER_T;
typedef struct
{
   kal_uint8             route_num;
   kal_bool              is_rx_tdd_band;
   MMRFC_RX_CAL_CFG_T    cfg[MMRFC_RX_IRR_COMP_ROUTE_MAX];
}UL1D_RX_CAL_IRR_DC_CFG_T;
typedef struct
{
  MMRFC_RX_DC_RESULT_T rx_dc[MMRFC_RXDC_TIA_GAIN_STEPS][MMRFC_RXDC_PGA_GAIN_WCDMA_STEPS];
} UMTS_RX_DC_HPM_RESULT_T;

typedef struct
{
  MMRFC_RX_DC_RESULT_T rx_dc[MMRFC_RXDC_TIA_GAIN_LPM_STEPS][MMRFC_RXDC_PGA_GAIN_LPM_STEPS];
} UMTS_RX_DC_LPM_RESULT_T;

typedef struct
{
   /* RX IRR */
   MMRFC_RX_IRR_RESULT_T       rx_irr_hpm[UL1D_RF_RX_IRR_COMP_ROUTE_MAX][MMRFC_UMTS_RX_CBW_NUM][MMRFC_ANT_NUM]; //4 route, 9CBW, 2ANT
   MMRFC_RX_IRR_RESULT_T       rx_irr_lpm[UL1D_RF_RX_IRR_COMP_ROUTE_MAX][MMRFC_UMTS_RX_CBW_NUM][MMRFC_ANT_NUM]; //4 route, 9CBW, 2ANT

   /* RX DC */
   UMTS_RX_DC_HPM_RESULT_T     rx_dc_hpm[UL1D_RF_RX_DC_COMP_ROUTE_MAX][MMRFC_ANT_NUM]; //4 route, 2ANT
   UMTS_RX_DC_HPM_RESULT_T     rx_dig_dc_hpm[UL1D_RF_RX_DC_COMP_ROUTE_MAX][MMRFC_ANT_NUM]; //4 route, 2ANT   Digital DC
   UMTS_RX_DC_LPM_RESULT_T     rx_dc_lpm[UL1D_RF_RX_DC_COMP_ROUTE_MAX][MMRFC_ANT_NUM]; //4 route, 2ANT
   UMTS_RX_DC_LPM_RESULT_T     rx_dig_dc_lpm[UL1D_RF_RX_DC_COMP_ROUTE_MAX][MMRFC_ANT_NUM]; //4 route, 2ANT   Digital DC

   /* RX IIP2 */
#if IS_URF_MT6179||IS_URF_MT6177L_RX
   MMRFC_IIP2_RESULT_T         rx_iip2[2][UL1D_RF_RX_IIP2_COMP_ROUTE_MAX]; //[0] for RXP, [1] for RXD
#else
   MMRFC_IIP2_RESULT_T         rx_iip2[UL1D_RF_RX_IIP2_COMP_ROUTE_MAX]; //TODO: Need to check inter-band CA case
#endif

   /* DET */
   /* Only FDIQ is dependent with sample rates, other redundent items need to be removed in NVRAM/share memory structure */
   kal_uint32                  det_coarse_dcoc_cw807; //CW807, V_TXCDCOC1[19:0]
   kal_uint32                  det_coarse_dcoc_cw808; //CW808, V_TXCDCOC2[19:0]
   MMRFC_DET_IQDNL_RESULT_T    det_iqdnl_fwd[MMRFC_DET_FE_GAIN_STEPS][MMRFC_UMTS_TX_CBW_NUM];
   MMRFC_DET_DC_RESULT_T       det_dc_fwd[MMRFC_DET_GAIN_STEPS_DET_CAL]; //17 DET gain step

   MMRFC_DET_IQDNL_RESULT_T    det_iqdnl_rev[MMRFC_DET_FE_GAIN_STEPS][MMRFC_UMTS_TX_CBW_NUM];
   MMRFC_DET_DC_RESULT_T       det_dc_rev[MMRFC_DET_GAIN_STEPS_DET_CAL]; //17 DET gain step

   /* TX LO Cal */
   kal_uint32                  tx_lo;            //CW714, {2'b00,V_TXLOCAP[6:0],V_TXLOIND,V_TXLOINBIAS[4:0],V_TXLOINBIAS[4:0]}
   kal_uint8                   tx_lo_ind;
   kal_uint8                   tx_lo_capcal_peak_cap; //CW714
   kal_uint8                   tx_lo_in_bias_hpm;     //CW714
   kal_uint8                   tx_lo_in_bias_lpm;     //CW714
   kal_uint32                  stx_dcc_delta_nc; //CW568, V_DCC_DELTA_NC[10:0]

   /* TX RC */
   kal_int16                   tx_rc_lpf[MMRFC_UMTS_TX_CBW_NUM];
   kal_int16                   tx_rc_rcf;

   /* TX IQDC */
   /* TXIQ: G0, G9, G10, G12a, G14a, G12b, G14b, G21  */
   /* TXDC: G0, G9, G10, G12a, G14a, G12b, G14b, G21  */
   /* freq_dep_phase_tx is temp output for FDIQ cal   */
   MMRFC_TX_IQDC_RESULT_T      tx_iqdc_lin[MMRFC_TX_PGA_SLICE_NUM+1];
   MMRFC_TX_IQDC_RESULT_T      tx_iqdc_dpd[MMRFC_TX_PGA_SLICE_NUM+1];
   MMRFC_TX_FD_FILT_RESULT_T   tx_fdiq[MMRFC_UMTS_TX_CBW_NUM][MMRFC_TX_PGA_SLICE_NUM+1];

   /* TX DNL */
   kal_int16                   tx_dnl_lin_pga_a[MMRFC_TX_DNL_PGA_A_SEQ_NUM]; //20 gain diff
   kal_int16                   tx_dnl_lin_pga_b[MMRFC_TX_DNL_PGA_B_SEQ_NUM]; //15 gain diff
   kal_int16                   tx_dnl_dpd_pga_a[MMRFC_TX_DNL_PGA_A_SEQ_NUM]; //20 gain diff
   kal_int16                   tx_dnl_dpd_pga_b[MMRFC_TX_DNL_PGA_B_SEQ_NUM]; //15 gain diff

   /* TX GA */
   MMRFC_TX_GA_RESULT_T        tx_ga_w_ET[MMRFC_TX_PGA_TYPE_NUM][MMRFC_UMTS_TX_CBW_NUM];  //3 PGA type, 6CBW
   MMRFC_TX_GA_RESULT_T        tx_ga_wo_ET[MMRFC_TX_PGA_TYPE_NUM][MMRFC_UMTS_TX_CBW_NUM]; //3 PGA type, 6CBW

   /* TX PGA Phase Step */
   kal_int16                   pga_phase_step;

   /* TX PGA Gain Step */
   kal_int16                   pga_gain_step[MMRFC_TX_PGA_GAIN_STEP_SUBBAND_NUM][MMRFC_TX_PGA_GAIN_STEP_NUM];

   /* TX PGA Cap Tuning */
   kal_int16                   cap_tuning_pga_a;
   kal_int16                   cap_tuning_pga_b;


} MMRFC_UMTS_RESULT_PER_BAND_T;

typedef struct
{
   MMRFC_UMTS_RESULT_PER_BAND_T umts_result[MAX_SUPPORTED_BAND_INDEX];
} MMRFC_UMTS_RESULT_T;


/* RX POC index and CFG table */
typedef struct
{
   UMTSBand   band;
   kal_uint8  route_num;
   UMTS_Route route_idx[UL1D_RX_IRR_DC_ROUTE_NUM_MAX];
}UL1D_RX_IRR_DC_CFG_INDEX_TBL_T;

typedef struct
{
   UMTSBand   band;
   kal_uint8  route_num;
   UMTS_Route rx_route_idx[UL1D_RX_IIP2_ROUTE_NUM_MAX];
   UMTS_Route tx_route_idx[UL1D_RX_IIP2_ROUTE_NUM_MAX];
}UL1D_RX_IIP2_CFG_INDEX_TBL_T;

#if 1/*POC Re-Org Phase 1*/
typedef struct
{
   kal_int16 i_part;
   kal_int16 q_part;

} UL1D_TXDFE_TX_DC_COMP_T;

typedef struct
{
   UL1D_TXDFE_TX_DC_COMP_T comp_tab[UL1D_TX_DC_COMP_FC_MODE_NUM][UL1D_TX_DC_COMP_PGA_SLICE_SET_NUM];

} UL1D_TXDFE_TX_DC_COMP_TAB_T;

typedef struct
{
   kal_int16 gain;
   kal_int16 phase;

} UL1D_TXDFE_TX_IQ_COMP_T;

typedef struct
{
   UL1D_TXDFE_TX_IQ_COMP_T comp_tab[UL1D_TX_IQ_COMP_FC_MODE_NUM][UL1D_TX_IQ_COMP_PGA_SLICE_SET_NUM];

} UL1D_TXDFE_TX_IQ_COMP_TAB_T;
#endif

typedef struct
{
   kal_uint8          route_num;
   kal_uint16         rx_iip2_usage_comp_idx[UL1D_RX_IIP2_ROUTE_NUM_MAX];
   kal_bool           is_rx_tdd_band;
   MMRFC_RX_CAL_CFG_T rx_cfg[UL1D_RX_IIP2_ROUTE_NUM_MAX];
   MMRFC_TX_CAL_CFG_T tx_cfg[UL1D_RX_IIP2_ROUTE_NUM_MAX];
}UL1D_RX_CAL_IIP2_CFG_T;

typedef struct
{
UMTS_RF_POC_RX_DC_COMP_T dc_ant0;
UMTS_RF_POC_RX_DC_COMP_T dc_ant1;
}UL1D_RX_DCOC_COMP_DATA_T;

#if IS_URF_MT6177L_RFC || IS_URF_MT6173_RFC
typedef struct
{
   kal_uint32 bsiDada[SEQ_3G_FDD_RFC_STX_CONFIG_BUFFER_COUNT];
}URFC_STX_CONFIG_BUFFER_T;

typedef struct
{
   kal_uint32 bsiDada[SEQ_3G_FDD_RFC_TX_CONFIG_BUFFER_COUNT];
}URFC_TX_CONFIG_BUFFER_T;

typedef struct
{
   kal_uint32 bsiDada[SEQ_3G_FDD_RFC_LIN_CONFIG_BUFFER_COUNT];

}URFC_TX_DRV_BIAS_LIN_CONFIG_BUFFER_T;

typedef struct
{
   kal_uint32 bsiDada[SEQ_3G_FDD_RFC_DPD_CONFIG_BUFFER_COUNT];
}URFC_TX_DRV_BIAS_DPD_CONFIG_BUFFER_T;
#endif

void UL1D_MMRF_PowerOnCalibration(void);
void UL1D_MMRF_L1CoreSHMDataInit(void);
void UL1D_MMRF_L1coreSHMUpdate2Local(void);
void UL1D_MMRF_PCoreSHMDataCacheFlush(void);

/** Update Run-Time APIs */
kal_uint32 UL1D_MMRF_UpdateRuntimeHandler( kal_uint32 nvram_lid, kal_uint32 record_idx, kal_uint8 *data, kal_uint16 nvram_size );

kal_uint16 UL1D_RF_Cal_Poc_NVRAM_Lid_Total_Num_InUse(void );
kal_uint16 UL1D_RF_Get_Rf_Self_Cal_Result_Size(kal_uint16 lid_index);
kal_uint16 UL1D_RF_Get_Rf_Self_Cal_Result(kal_uint16 lid_index, kal_uint16 lid_size, kal_uint8 *dst);
kal_uint16 UL1D_RF_Set_Rf_Self_Cal_Result(kal_uint16 lid_index, kal_uint16 lid_size, kal_uint8 *src);
kal_uint16 UL1D_RF_Get_Rf_Self_Cal_String( kal_uint16 lid_index, kal_char *string_dst );


//For POC TX API
//xxx_en_bit :: bit0:DPD, bit1:line mode1 without ET, bit2:line mode1 with ET,bit3:line mode2 without ET, bit4:line mode2 with ET
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
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif

/** RF Route Table */
void UL1D_RF_ConstructRxConfigTable(void);
void UL1D_RF_ConstructRxIrrConfigTable(void);
void UL1D_RF_ConstructRxDcConfigTable(void);
void UL1D_RF_ConstructRxIip2ConfigTable(void);
void UL1D_RF_GetRxIrrDcConfigTable( UMTSBand band, UL1D_RX_CAL_IRR_DC_CFG_T* irr_dc_cfg, kal_uint8 is_irr_cal );
void UL1D_RF_GetRxIip2ConfigTable( UMTSBand band, UL1D_RX_CAL_IIP2_CFG_T* iip2_cfg );
#if IS_URF_MT6179||IS_URF_MT6177L_RX||IS_URF_MT6173_RX
void UL1D_RF_CAL_Set_TX_CW_Rx_IIP2_CAL(MMRFC_TX_CAL_CFG_T *tx_cfg, MML1_RF_BSIMM_PORT_T port_sel);
void UL1D_RF_CAL_Set_TX_PGA_Gain_CW_Rx_IIP2_CAL(MMRFC_TX_CAL_CFG_T *iip2_tx_cfg_p, MML1_RF_BSIMM_PORT_T port_sel);
#else
void UL1D_RF_CAL_Set_TX_CW_Rx_IIP2_CAL(MMRFC_TX_CAL_CFG_T *tx_cfg);
void UL1D_RF_CAL_Set_TX_PGA_Gain_CW_Rx_IIP2_CAL(MMRFC_TX_CAL_CFG_T *iip2_tx_cfg_p, MML1_RF_BSIMM_PORT_T port_sel);
#endif

/** API to get TX DET ANT*/
void UL1D_RF_GET_TX_DET_ANT(MMRFC_XL1_BAND_NUM_E band, kal_bool is_fwd_path);
kal_bool UL1D_RF_DET_Path_Query(MMRFC_XL1_BAND_NUM_E band, MMRF_DET_IO_E tx_det_io);

/** API for TAS*/
kal_bool UL1D_RF_TAS_Support(void);
#if IS_3G_TAS_UL1_CUSTOM_SUPPORT

void UL1D_RF_Force_TAS(UMTS_CUSTOM_TAS_SWITCH_E force_tas_enable, UMTS_CUSTOM_TAS_STATE_E tas_state);
#else
void UL1D_RF_Force_TAS(kal_bool force_tas_enable, kal_uint8 tas_idx);
#endif

#if IS_3G_DAT_RFD_CTRL_EN
void UL1D_RF_Force_DAT(kal_bool dat_feature_enable, kal_int16 scenario);
kal_bool URFD_AP_Sensor_Relative_Feature_IS_Need_L1C_GAP(MMRF_AP_SENSOR_RELATIVE_OP_CODE_E OP_code, kal_int16 new_scenario);
#endif

/** API for BSI_W Init for MML1 normal power on flow */
void UL1D_RF_INIT_BSI_POWER_ON(void);

#if 1/*POC Re-Org Phase 1*/
/** API for MMPOC Re-Org Phase 1*/
#if IS_MML1_UMTS_FDD_RAT_SUPPORT
void UL1D_RFC_TXDFE_MTCMOS_CONTROL(kal_bool is_on);
void UL1D_RF_TX_PARAM_COMP(RF_COMP_INDEX_E comp_idx, MMRFC_TX_RAT_CBW_CFG_E cbw_cfg, MMRFC_XL1_BAND_NUM_E band, kal_uint32 reCalIdx);
void UL1D_RFC_DET_FIIQ_COMP(kal_uint32 route_idx, MMRFC_DETDFE_TIA_GAIN_IDX_E fe_gain, MMRFC_TX_RAT_CBW_CFG_E cbw_case_idx, MMRFC_DET_FIIQ_COMP_T* p);
void UL1D_RFC_DET_DC_COMP(kal_uint32 route_idx, kal_uint32 det_gain_step, MMRFC_DET_DC_COMP_T* p);
void UL1D_RFC_DET_FDPCB_COMP(kal_uint32 route_idx, MMRFC_DETDFE_TIA_GAIN_IDX_E fe_gain, MMRFC_TX_RAT_CBW_CFG_E cbw_case_idx, MMRFC_DET_EQLPF_CFG_T* p);
void UL1D_RF_GetDetBwConfig(MMRFC_DET_CAL_ITEM_CFG_E detk_item, MMRFC_TX_RAT_CBW_CFG_E* start_cbw, MMRFC_TX_RAT_CBW_CFG_E* end_cbw, kal_uint8* tone_num);
void UL1D_RF_GetTxBwConfig(MMRFC_TX_CAL_ITEM_CFG_E txk_item, MMRFC_TX_RAT_CBW_CFG_E* start_cbw, MMRFC_TX_RAT_CBW_CFG_E* end_cbw);
kal_uint32 UL1D_RF_DATA_BUFFER_LENGTH_RETURN(MMPOC_BUFFER_IDX_E  buf_type);
kal_uint32* UL1D_RF_DATA_BUFFER_PTR_RETURN(MMPOC_BUFFER_IDX_E  buf_type);
kal_uint32 UL1D_RF_DATA_BUFFER_MIPI_LENGTH_RETURN(kal_bool is_mipi_on, kal_uint8 curr_band_idx);
MML1_RF_BSIMM_PORT_T UL1D_RF_BUF_DATA_PORT_TABLE_RETURN(MMPOC_BUFFER_IDX_E bufId);
#endif
#endif/*POC Re-Org Phase 1*/

#if 1/*POC Re-Org Phase 2*/

/*TX*/
void UL1D_RF_MMPOC_GetTxCfg(MMRFC_XL1_BAND_NUM_E band, MMRFC_TX_ROUTE_CFG_T* tx_cfg);
void UL1D_RFC_GetCalibrationResults_RX_DC(MMRFC_POWER_MODE_E mode,kal_uint16 dc_comp_route_idx,RX_TIA_GAIN_E tia_gain_idx,RXIF_GAIN_E if_gain_idx,UMTS_RF_POC_RX_DC_COMP_T* rf_dc,MMRFC_XL1_BAND_NUM_E band);
void UL1D_RFC_GetCalibrationResults_RX_Dig_DC(MMRFC_POWER_MODE_E mode,kal_uint16 dc_comp_route_idx,RX_TIA_GAIN_E tia_gain_idx,RXIF_GAIN_E if_gain_idx,UMTS_RF_POC_RX_DC_COMP_T* rf_dig_dc, MMRFC_XL1_BAND_NUM_E band);
void UL1D_RFC_Get_Rx_IRR_Comp_Data( kal_uint16 rx_irr_comp_idx, MMRFC_RXIRR_CAL_MODE_E power_mode,kal_uint8 rx_bw_idx,UMTS_RF_POC_RX_IRR_COMP_T* rf_rx_irr_comp_p,MMRFC_XL1_BAND_NUM_E band);
void UL1D_RFC_RF_RXDFE_Comp_Imm(RF_COMP_INDEX_E comp_idx, MMRFC_PATH_BITMAP_E path_sel,MML1_RF_BSIMM_PORT_T rfic,MMRFC_RX_GAIN_T rx_gain_info,kal_uint32 rx_rf_route_idx,MMRFC_XL1_BAND_NUM_E band,MMRFC_RX_CAL_TYPE_E  rx_cal_item,kal_uint8 re_cal_indx);
void UL1D_RFC_RXIRR_Gain_Config(MMRFC_RXIRR_CAL_MODE_E irr_mode_idx, kal_uint32 rx_gain_idx, RXIF_GAIN_E* pga_gain_p, RX_LNA_GAIN_E* lna_gain_p, RX_TIA_GAIN_E* tia_gain_p);
/*RX*/
void UL1D_RF_CAL_Set_Tunnel_Path_Ctrl_CW(MMRFC_RX_CW_PARAM_T* rx_cw_param, MMRFC_RXT_PATH_CTRL_BUFFER_T* buffer);
void UL1D_RFC_Get_Rx_IRR_Recal_Comp_Data( kal_uint16 rx_irr_comp_idx, MMRFC_RXIRR_CAL_MODE_E power_mode,kal_uint8 rx_bw_idx,UMTS_RF_POC_RX_IRR_COMP_T* rf_rx_irr_comp_p,MMRFC_XL1_BAND_NUM_E band,kal_uint8 re_cal_indx);
void UL1D_RFC_GetCalibrationResults_RX_DC_Recal(MMRFC_POWER_MODE_E mode,kal_uint16 dc_comp_route_idx,RX_TIA_GAIN_E tia_gain_idx,RXIF_GAIN_E if_gain_idx,UMTS_RF_POC_RX_DC_COMP_T* rf_dc,MMRFC_XL1_BAND_NUM_E band,kal_uint8 re_cal_indx);
void UL1D_RF_CAL_Set_Rx_Path_Ctrl_CW(MMRFC_RX_CW_PARAM_T* rx_cw_param, MMRFC_RX_CAL_CFG_T* rx_cfg);
void UL1D_RF_CAL_Set_Rx_Mixer_Gate_Bias_CW(MMRFC_RX_CW_PARAM_T* rx_cw_param, MMRFC_RX_CAL_CFG_T* rx_cfg);
void UL1D_RF_CAL_Set_Rx_LO_Ctrl_CW(MMRFC_RX_CW_PARAM_T* rx_cw_param, MMRFC_RX_CAL_CFG_T* rx_cfg);
void UL1D_RF_CAL_Set_Srx_Config_CW(MMRFC_RX_CW_PARAM_T* rx_cw_param, MMRFC_RX_CAL_CFG_T* rx_cfg);


#if IS_URF_MT6177L_RFC||IS_URF_MT6173_RFC
void UL1D_RFC_STX_CONFIG_BUFFER(MMRFC_XL1_BAND_SUPPORT_CAPABILITY_T* band_cap_p, 
                                               kal_uint8* length, 
                                               URFC_STX_CONFIG_BUFFER_T* buffer);
void UL1D_RFC_TX_CONFIG_BUFFER(MMRFC_XL1_BAND_SUPPORT_CAPABILITY_T* band_cap_p, 
                                             kal_uint8* length, 
                                             URFC_TX_CONFIG_BUFFER_T* buffer);
void UL1D_RFC_LIN_CONFIG_BUFFER(MMRFC_XL1_BAND_SUPPORT_CAPABILITY_T* band_cap_p, 
                                              kal_uint8* length, 
                                              URFC_TX_DRV_BIAS_LIN_CONFIG_BUFFER_T* buffer);
void UL1D_RFC_DPD_CONFIG_BUFFER(MMRFC_XL1_BAND_SUPPORT_CAPABILITY_T* band_cap_p, 
                                               kal_uint8* length, 
                                               URFC_TX_DRV_BIAS_DPD_CONFIG_BUFFER_T* buffer);
#else
void UL1D_RFC_STX_CONFIG_BUFFER(MMRFC_XL1_BAND_SUPPORT_CAPABILITY_T* band_cap_p, 
                                               kal_uint8* length, 
                                               MMRFC_STX_CONFIG_BUFFER_T* buffer);
void UL1D_RFC_TX_CONFIG_BUFFER(MMRFC_XL1_BAND_SUPPORT_CAPABILITY_T* band_cap_p,
                                             kal_uint8* length,
                                             MMRFC_TX_CONFIG_BUFFER_T* buffer);
void UL1D_RFC_LIN_CONFIG_BUFFER(MMRFC_XL1_BAND_SUPPORT_CAPABILITY_T* band_cap_p,
                                              kal_uint8* length,
                                              MMRFC_TX_DRV_BIAS_LIN_CONFIG_BUFFER_T* buffer);
void UL1D_RFC_DPD_CONFIG_BUFFER(MMRFC_XL1_BAND_SUPPORT_CAPABILITY_T* band_cap_p,
                                               kal_uint8* length,
                                               MMRFC_TX_DRV_BIAS_DPD_CONFIG_BUFFER_T* buffer);
#endif
void UL1D_MMRF_RFCAL_TX_PA_ON_LOWGAIN_CONFIG_BUFFER_2(MMRFC_XL1_BAND_SUPPORT_CAPABILITY_T* band_cap_p,
                                                      kal_uint8* length,
                                                      MMRFC_TXPA_ON_LOWGAIN_BUFFER_T* buffer,
                                                      MML1_RF_BSIMM_PORT_T* port_sel);

void UL1D_MMRF_RFCAL_TX_PA_OFF_CONFIG_BUFFER_2(MMRFC_XL1_BAND_SUPPORT_CAPABILITY_T* band_cap_p,
                                               kal_uint8* length,
                                               MMRFC_TXPA_OFF_BUFFER_T* buffer,
                                               MML1_RF_BSIMM_PORT_T* port_sel);

void UL1D_RFC_RXIRR_RESULT_WRITE_BACK(MMRFC_RXIRR_CAL_MODE_E irr_mode_idx,
                                  kal_uint8 irr_route_idx ,
                                  MMRFC_XL1_BAND_NUM_E band,
                                  kal_uint8 cbw_idx,
                                  kal_uint8 ant_idx,
                                  MMRFC_RX_IRR_RESULT_T* rx_irr_data,
                                  kal_bool internal_ms_elapsed_time_check_flag);

void UL1D_RF_CAL_TXCAP_RESULT_WRITE_BACK(
                                         MMRFC_XL1_BAND_NUM_E band,
                                         kal_uint32 subband_idx,
                                         kal_uint8  pga_ab,
                                         kal_bool   is_pre_cap_tuning,
                                         kal_uint8  CAP_OPT_A,
                                         kal_uint8  CAP_OPT_B,
                                         kal_bool   internal_ms_elapsed_time_check_flag);

void UL1D_RF_TX_PGA_PHASE_STEP_RESULT_WRITE_BACK(MMRFC_XL1_BAND_NUM_E band, kal_int16 result);
void UL1D_RF_CAL_TXDC_RESULT_WRITE_BACK(MMRFC_XL1_BAND_NUM_E band,
                                        kal_uint32 pwr_mode,
                                        kal_uint32 tx_pga_slice,
                                        MMRFC_TX_IQDC_RESULT_T* tx_iqdc_calgo_result,
                                        kal_uint32 recal,
                                        kal_bool internal_ms_elapsed_time_check_flag);
void UL1D_RF_CAL_TXFIIQ_RESULT_WRITE_BACK(MMRFC_XL1_BAND_NUM_E band,
                                          kal_uint32 pwr_mode,
                                          kal_uint32 tx_pga_slice,
                                          MMRFC_TX_IQDC_RESULT_T* tx_iqdc_calgo_result,
                                          kal_uint32 recal,
                                          kal_bool internal_ms_elapsed_time_check_flag);
void UL1D_RF_CAL_TXRC_RESULT_WRITE_BACK(MMRFC_XL1_BAND_NUM_E band,
                                        MMRFC_LPF_RCF_CAL_TYPE_E lpf_rcf_select,
                                        kal_int16 tx_rc_calgo_result,
                                        kal_bool internal_ms_elapsed_time_check_flag);
#endif/*POC ReOrg Phase 2*/

kal_uint8 UL1D_RF_CAL_RSEL_RCF(MMRFC_XL1_BAND_NUM_E band);
kal_uint8 UL1D_RF_CAL_RSEL_LPF(MMRFC_XL1_BAND_NUM_E band);

void UL1D_RF_RXIRR_Gain_Config(MMRFC_RXIRR_CAL_MODE_E irr_mode_idx, kal_uint32 rx_bw_idx, RXIF_GAIN_E* pga_gain_p, RX_LNA_GAIN_E* lna_gain_p, RX_TIA_GAIN_E* tia_gain_p);
void UL1D_RF_POC_RxGainCW(MMRFC_RX_CW_PARAM_T* rx_cw_param, MMRFC_RXIRR_CAL_MODE_E power_mode_idx, kal_uint32 rx_gain_idx,
                                    MMRFC_PATH_BITMAP_E path_sel, MMRFC_RX_GAIN_CW_BUFFER_T* buffer);
void UL1D_RF_RXDC_Setting_Config(kal_uint32** rx_hpm_gain_idx_by_rat, kal_uint32** rx_lpm_gain_idx_by_rat, MMRFC_POWER_MODE_E** dc_mode_idx_cal_end);

void UL1D_RF_DETCDCOC_RESULT_WRITE_BACK(MMRFC_XL1_BAND_NUM_E band,
                                        kal_uint32 det_coarse_dcoc_cw807,
                                        kal_uint32 det_coarse_dcoc_cw808);

void UL1D_RF_TXLO_RESULT_WRITE_BACK(MMRFC_XL1_BAND_NUM_E band,
                                    kal_uint8  ind_sw,
                                    kal_uint8  capcal_peak_cap,
                                    kal_uint8  in_bias_lpm,
                                    kal_uint8  in_bias_hpm);

void UL1D_RF_DETDC_RESULT_WRITE_BACK(MMRFC_XL1_BAND_NUM_E band,
                                     kal_uint8  gain_idx,
                                     kal_uint32 recal,
                                     MMRFC_DET_DC_RESULT_T* tx_det_dc_calgo_result,
                                     kal_bool internal_ms_elapsed_time_check_flag);

void UL1D_RF_DETFDPCB_RESULT_WRITE_BACK(MMRFC_XL1_BAND_NUM_E band,
                                         MMRFC_DET_TIA_COMP_INDEX_E fe_gain_idx,
                                         MMRFC_TX_RAT_CBW_CFG_E cbw_case_idx,
                                         kal_uint32 recal,
                                         MMRFC_DET_EQLPF_CFG_T* tx_det_pcb_calgo_result,
                                         kal_bool internal_ms_elapsed_time_check_flag);

void UL1D_RF_DETIQDNL_RESULT_WRITE_BACK(MMRFC_XL1_BAND_NUM_E band,
                                         MMRFC_DET_TIA_COMP_INDEX_E fe_gain_idx,
                                         MMRFC_DET_G_IDX gain_idx,
                                         MMRFC_TX_RAT_CBW_CFG_E cbw_case_idx,
                                         kal_uint32 recal,
                                         MMRFC_DET_IQDNL_RESULT_T* tx_det_iqdnl_calgo_result,
                                         kal_bool internal_ms_elapsed_time_check_flag);

void UL1D_RF_TXDNL_RESULT_WRITE_BACK(MMRFC_XL1_BAND_NUM_E band,
                                      kal_uint32 tx_gain_idx,
                                      kal_int32  tx_dnl_calgo_result0,
                                      kal_int32  tx_dnl_calgo_result1,
                                      kal_bool   internal_ms_elapsed_time_check_flag);

void UL1D_RFC_RXDC_RESULT_WRITE_BACK(MMRFC_POWER_MODE_E dc_mode_idx,
                                     MMRFC_XL1_BAND_NUM_E band,
                                     kal_uint8 tia_gain_idx,
                                     kal_uint8 if_gain_idx,
                                     kal_uint8 route_idx,
                                     kal_uint8 ant_idx,
                                     MMRFC_RX_DC_RESULT_T* rf_dc,
                                     MMRFC_RX_DC_RESULT_T* dig_dc,
                                     kal_bool internal_ms_elapsed_time_check_flag);

void UL1D_RFC_RXIIP2_RESULT_WRITE_BACK(MMRFC_XL1_BAND_NUM_E band,
                                       kal_uint16 iip2_route_idx,
                                       MMRFC_IIP2_RESULT_T* rxp_iip2,
                                       MMRFC_IIP2_RESULT_T* rxd_iip2,
                                       kal_bool internal_ms_elapsed_time_check_flag);

void UL1D_RFC_TX_DNL_SET_DEFAULT(MMRFC_XL1_BAND_NUM_E band);

void UL1D_RFC_RXDFE_Win_On_Ctrl(MMRFC_RX_CAL_TYPE_E rx_cal_type, MMRFC_XL1_BAND_NUM_E band, MMRFC_PATH_BITMAP_E path_sel);
void UL1D_RFC_RXDFE_Meas_Trigger(MMRFC_RX_CAL_TYPE_E rx_cal_type, kal_uint32 meas_atime, MMRFC_PATH_BITMAP_E path_sel);
void UL1D_RFC_RXDFE_Win_Off_Ctrl(MMRFC_RX_CAL_TYPE_E rx_cal_type, MMRFC_PATH_BITMAP_E path_sel);
void UL1D_RXDFE_Comp_ActBuff_Rxk(MMRFC_RX_CAL_TYPE_E calType, kal_bool is_hpm, kal_uint32 rx_bw_idx, UMTS_RF_POC_RX_IRR_COMP_T* irr_comp, UMTS_RF_POC_RX_DC_COMP_T* dc_comp);

void ul1d_rf_cal_calculate_det_gain(UMTS_RF_POC_DET_COMP_DATA_T* p_det_shm);


extern void UL1D_RFC_RxDcocCW(MMRFC_PATH_BITMAP_E path_sel , UMTS_RF_POC_RX_DC_COMP_T* dcoc_comp, MML1_RF_BSIMM_PORT_T port_sel);

/************************************************************************************
*  Global Variables extern (Interface)
************************************************************************************/
extern kal_uint32*          wrfcalPocBufferTable              [/*MMPOC_BUFFER_TYPE_NUM_OF*/];
extern kal_uint32           wrfcalPocBufferSizeTable          [/*MMPOC_BUFFER_TYPE_NUM_OF*/];
extern MML1_RF_BSIMM_PORT_T wrfcalPocBufferDataPortSelTable   [/*MMPOC_BUFFER_TYPE_NUM_OF*/];
extern MML1_MIPI_REG_RW_T   wrfcalPocBufferDataMipiCwTypeTable[/*MMPOC_BUFFER_TYPE_NUM_OF*/];
extern UL1D_RF_CAL_MIPI_DATA_T UMTS_MIPI_PA_ON_DATA           [/*MMPOC_BUFFER_TYPE_NUM_OF*/];
extern UL1D_RF_CAL_MIPI_DATA_T UMTS_MIPI_PA_OFF_DATA          [/*MMPOC_BUFFER_TYPE_NUM_OF*/];

#if UMTS_POC_RECAL_ENABLE
extern UMTS_RECAL_DEBUG_T umts_result_rek[UMTS_RECAL_ITER];
extern UMTS_RECAL_TXDET_INFO_T txdetRecalInfo;
#endif

#if IS_3G_TAS_TST_SUPPORT
kal_uint16 UL1D_IsQueryingTasStateInfoSupported( void );
kal_uint16 UL1D_QueryTasVersion( void );
kal_uint16 UL1D_GetTasStateConfigBandNum( void );
void UL1D_GetTasStateConfig(kal_uint16 buf_length, kal_uint16* band_list, kal_uint16* state_limit, kal_uint16* tas_state );
#endif

#endif /* End of #ifndef _UL1D_MMRF_INTERFACE_H_ */

