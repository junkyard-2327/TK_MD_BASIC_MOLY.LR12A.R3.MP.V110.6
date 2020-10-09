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
 *   cl1d_mmrf_interface.h
 *
 * Project:
 * --------
 *   TK6293
 *
 * Description:
 * ------------
 *   C2K interface to Multi-Mode Multi-RAT RF Central Control
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
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 *
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
 *----------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

#ifndef  _CL1D_MMRF_INTERFACE_H_
#define  _CL1D_MMRF_INTERFACE_H_

/*===============================================================================*/

//#include "kal_general_types.h"

#include "mml1_rf_interface.h"
#include "mml1_rf_cal_interface.h"

#include "mml1_rf_c2k_config.h"
#include "cl1_rf_poc_public.h"

//#include "el1d_mmrf_interface.h"
/*===============================================================================*/

/**********************************************************************************
* define
**********************************************************************************/
#define   CL1D_RFC_RECAL_ENABLE                     (0)

#if CL1D_RFC_RECAL_ENABLE
#define   CL1D_RFC_RECAL_ITER                       (2)
#else
#define   CL1D_RFC_RECAL_ITER                       (1)
#endif

/*C2K IIP2 cal dimension for single band case*/
#define   C2K_IIP2_SINGLE_CAL_DIM                    7 
/*C2K IIP2 cal dimension for SHDR case*/
#define	 C2K_IIP2_CA_CAL_DIM                        2 

#define   ASYMM_COMP_COEFF_NUM                       5
#define   ASYMM_COMP_PGA_SLICE_SET_NUM               3
#define   FDAD_COMP_COEFF_NUM                       13
#define   FDAD_COMP_PGA_SLICE_SET_NUM                8

#define   DET_C2K_CAL_FE_MID_GAIN_IDX                0     //D0 for C2K DET calibration with FE middle gain
#define   DET_C2K_CAL_FE_LOW_GAIN_IDX                1     //D1 for C2K DET calibration with FE low gain
#define   C2K_CAL_RESULT_DEBUG                      (0)
#define   NCO_Freq                                  406250
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
#if       IS_C2K_RFC_POC_TXLO_DETCDCOC_SUPPORT
/* under construction !*/
#else
/* under construction !*/
#endif
/* under construction !*/
#if       IS_C2K_RFC_POC_DET_IQDCDNL_SUPPORT
/* under construction !*/
#else
/* under construction !*/
#endif
/* under construction !*/
#if       IS_C2K_RFC_POC_TX_LPF_RCF_SUPPORT
/* under construction !*/
#else
/* under construction !*/
#endif
/* under construction !*/
#if       IS_C2K_RFC_POC_TX_FDIQ_SUPPORT
/* under construction !*/
#else
/* under construction !*/
#endif
/* under construction !*/
#if       IS_C2K_RFC_POC_TX_FIIQ_DC_SUPPORT
/* under construction !*/
#else
/* under construction !*/
#endif
/* under construction !*/
#if       IS_C2K_RFC_POC_TX_GA_SUPPORT
/* under construction !*/
#else
/* under construction !*/
#endif
/* under construction !*/
#if       IS_C2K_RFC_POC_TX_PGA_CAP_TUNING_SUPPORT
/* under construction !*/
#else
/* under construction !*/
#endif
/* under construction !*/
#if       IS_C2K_RFC_POC_TX_DNL_SUPPORT
/* under construction !*/
#else
/* under construction !*/
#endif
/* under construction !*/
#if       IS_C2K_RFC_POC_TX_PGA_GAIN_STEP_SUPPORT
/* under construction !*/
#else
/* under construction !*/
#endif
/* under construction !*/
#if       IS_C2K_RFC_POC_TX_PGA_PHASE_STEP_SUPPORT
/* under construction !*/
#else
/* under construction !*/
#endif
/* under construction !*/
#if       IS_C2K_RFC_POC_RX_DC_SUPPORT
/* under construction !*/
#else
/* under construction !*/
#endif
/* under construction !*/
#if       IS_C2K_RFC_POC_RX_IIP2_SUPPORT
/* under construction !*/
#else
/* under construction !*/
#endif
/* under construction !*/
#if       IS_C2K_RFC_POC_RX_IQ_SUPPORT
/* under construction !*/
#else
/* under construction !*/
#endif
/* under construction !*/
#if       IS_C2K_RFC_POC_STX_DCC_SUPPORT
/* under construction !*/
#else
/* under construction !*/
#endif
/* under construction !*/
#endif


/************************************************************************************
* enum
************************************************************************************/
typedef enum
{
   C2K_FDAD_TAPS_5,
   C2K_FDAD_TAPS_7,
   C2K_FDAD_TAPS_9,
   C2K_FDAD_TAPS_11,
   C2K_FDAD_TAPS_13,
   C2K_FDAD_TAPS_UNDEF,

} C2K_TXDFE_FDAD_TAP_E;

typedef enum
{
   C2K_ASYM_TAPS_3,
   C2K_ASYM_TAPS_5,
   C2K_ASYM_TAPS_7,
   C2K_ASYM_TAPS_9,
   C2K_ASYM_TAPS_UNDEF,

} C2K_TXDFE_ASYM_TAP_E;


// TX DFE Setting
typedef enum
{
   C2K_TXDFE_INVALID,
   C2K_TXDFE_0,
   C2K_TXDFE_1,
}C2K_RF_TXDFE_SEL_E;

typedef enum
{
   C2K_TXDFE_RFPATH_P0,
   C2K_TXDFE_RFPATH_P1,
   C2K_TXDFE_RFPATH_INVALID,
}C2K_RFPATH_TXDFE_SEL_E;

typedef enum
{
   C2K_TXDFE_BBPATH_P0,
   C2K_TXDFE_BBPATH_P1,
   C2K_TXDFE_BBPATH_INVALID,
}C2K_BBPATH_TXDFE_SEL_E;

typedef enum
{
   C2K_TXDFE_FDAPATH_P0,
   C2K_TXDFE_FDAPATH_P1,
   C2K_TXDFE_FDAPATH_INVALID,
}C2K_FDAPATH_TXDFE_SEL_E;

typedef enum
{
   C2K_TTG_GAIN_FROM_L1,
   C2K_TTG_GAIN_FROM_TPC,
}C2K_RFPATH_TTG_GAIN_SWTICH_E;


typedef enum
{
   C2K_CIM3_CANCEL_ON,
   C2K_CIM3_CANCEL_OFF,
}C2K_TXDFE_CIM3_CANCEL_EN_E;

typedef enum
{
   C2K_TX_ASYMM_COMP_ON,
   C2K_TX_ASYMM_COMP_OFF,
}C2K_TXDFE_ASYMM_COMP_EN_E;

typedef enum
{
   C2K_TX_FDAD_COMP_ON,
   C2K_TX_FDAD_COMP_OFF,
}C2K_TXDFE_FDAD_COMP_EN_E;

typedef enum
{
   C2K_ANTI_DROOP_ON,
   C2K_ANTI_DROOP_OFF,
}C2K_TXDFE_ANTI_DROOP_EN_E;


/************************************************************************************
* typedef
************************************************************************************/
/** Structure Prototypes can be seen by other files**/

typedef struct
{
   kal_uint8             route_num;
   kal_bool              is_rx_tdd_band;
   MMRFC_RX_CAL_CFG_T    cfg[MMRFC_RX_IRR_COMP_ROUTE_MAX];
}CL1D_RX_CAL_IRR_DC_CFG_T;

typedef struct
{
   kal_uint8          route_num;
   kal_uint16         rx_iip2_usage_comp_idx[MMRFC_C2K_RX_IIP2_ROUTE_NUM_MAX];
   kal_bool           is_rx_tdd_band;
   MMRFC_RX_CAL_CFG_T rx_cfg[MMRFC_C2K_RX_IIP2_ROUTE_NUM_MAX];
   MMRFC_TX_CAL_CFG_T tx_cfg[MMRFC_C2K_RX_IIP2_ROUTE_NUM_MAX];
}CL1D_RX_CAL_IIP2_CFG_T;


typedef struct
{
   MMRFC_C2K_BAND_NUM_E c2k_band;
   MMRFC_XL1_BAND_NUM_E xl1_band;
} C2K_XL1_Band;

typedef struct
{
   kal_uint8 c2k_band;
   kal_uint8 c2k_supBandIdx;
} C2KBandInfo;

#if IS_CL1D_RF_MT6177L
typedef struct
{
   kal_int16        tx_dnl_lin_pga_a[MMRFC_TX_DNL_PGA_A_GAIN_STEPS];
   kal_int16        tx_dnl_lin_pga_b[MMRFC_TX_DNL_PGA_B_GAIN_STEPS+MMRFC_TX_DNL_PGA_AUX_GAIN_STEPS];
} C2K_TX_DNL_COMP_T;
#elif IS_CL1D_RF_MT6177M
typedef struct
{
   kal_int16        tx_dnl_lin_pga[MMRFC_C2K_TX_GAIN_STEPS];
} C2K_TX_DNL_COMP_T;
#endif

typedef struct
{
   /* RX IRR */
   MMRFC_C2K_RX_IRR_RESULT_T       rx_irr_hpm[MMRFC_C2K_RX_IRR_COMP_ROUTE_MAX][MMRFC_C2K_ANT_NUM]; /*> 4route */
   MMRFC_C2K_RX_IRR_RESULT_T       rx_irr_lpm[MMRFC_C2K_RX_IRR_COMP_ROUTE_MAX][MMRFC_C2K_ANT_NUM]; /*> 4route */

   /* RX DC */
   MMRFC_C2K_RX_DC_HPM_RESULT_T    rx_dc_hpm[MMRFC_C2K_RX_DC_COMP_ROUTE_MAX][MMRFC_C2K_ANT_NUM]; /*> 4route */
   MMRFC_C2K_RX_DC_LPM_RESULT_T    rx_dc_lpm[MMRFC_C2K_RX_DC_COMP_ROUTE_MAX][MMRFC_C2K_ANT_NUM]; /*> 4route */
   MMRFC_C2K_RX_DC_HPM_RESULT_T    rx_dig_dc_hpm[MMRFC_C2K_RX_DC_COMP_ROUTE_MAX][MMRFC_C2K_ANT_NUM]; /*> 4route */
   MMRFC_C2K_RX_DC_LPM_RESULT_T    rx_dig_dc_lpm[MMRFC_C2K_RX_DC_COMP_ROUTE_MAX][MMRFC_C2K_ANT_NUM]; /*> 4route */

   /* RX IIP2 */
   /* CW473 for Rx path 1, CW482 for Rx path 2 */
   /* i_idx_opt->V_RX1_IIP2_IRESULTS[6:0], q_idx_opt->V_RX1_IIP2_QRESULTS[6:0] */
   MMRFC_C2K_IIP2_RESULT_T         rx_iip2[MMRFC_C2K_RX_IIP2_COMP_ROUTE_MAX][MMRFC_C2K_ANT_NUM];

   /* DET coarse DCOC */
   kal_uint32                  det_coarse_dcoc_cw807; /*> CW807, V_TXCDCOC1[19:0], CW811->CW807 */
   kal_uint32                  det_coarse_dcoc_cw808; /*> CW808, V_TXCDCOC2[19:0], CW812->CW808 */

   /* DET IQ imbalance and FE gain with Tx path forward signal */
   MMRFC_C2K_DET_IQDNL_RESULT_T    det_iqdnl_fwd[MMRFC_C2K_DET_FE_GAIN_STEPS];

   /* DET fine DC with Tx path forward signal */
   MMRFC_C2K_DET_DC_RESULT_T       det_dc_fwd[MMRFC_C2K_DET_GAIN_STEPS_DET_CAL]; /*> 17 DET gain step */

   /* DET IQ imbalance and FE gain with Tx path reverse signal */
    MMRFC_C2K_DET_IQDNL_RESULT_T    det_iqdnl_rev[MMRFC_C2K_DET_FE_GAIN_STEPS];

   /* DET fine DC with Tx path reverse signal */
     MMRFC_C2K_DET_DC_RESULT_T       det_dc_rev[MMRFC_C2K_DET_GAIN_STEPS]; /*> 17 DET gain step */

   /* TX LO Cal */
   /* CW714, {2'b00,V_TXLOCAP[6:0],V_TXLOIND,V_TXLOINBIAS[4:0],V_TXLOINBIAS[4:0]}*/
   kal_uint8                   tx_lo_ind;
   kal_uint8                   tx_lo_capcal_peak_cap; //CW714
   kal_uint8                   tx_lo_in_bias_hpm;     //CW714
   kal_uint8                   tx_lo_in_bias_lpm;     //CW714   

   /* TX RC */
   kal_int16                   tx_rc_lpf; /*> CW787, V_TXLPFCSEL[7:0] */
   kal_int16                   tx_rc_rcf; /*> CW793, V_TXRCFCSEL[6:0] */

   /* TX IQDC */
   /* TXIQ: G0, G9, G10, G12a, G14a, G12b, G14b, G22  */
   /* TXDC: G0, G9, G10, G12a, G14a, G12b, G14b, G22  */
   MMRFC_C2K_TX_IQDC_RESULT_T      tx_iqdc_lin[TX_IQ_COMP_PGA_SLICE_SET_NUM]; /*>  +1 for PGA-AUX */
#if IS_CL1D_RF_MT6177L
   /* TX DNL */
   kal_int16                   tx_dnl_lin_pga_a[MMRFC_C2K_TX_DNL_PGA_A_SEQ_NUM]; /*> 20 gain diff, S7.8 */
   kal_int16                   tx_dnl_lin_pga_b[MMRFC_C2K_TX_DNL_PGA_B_SEQ_NUM]; /*> 16 gain diff, S7.8 */
#elif IS_CL1D_RF_MT6177M

   kal_int16                   tx_dnl_lin_pga[MMRFC_C2K_TX_GAIN_STEPS];
#endif
   /* TX PGA phase step */
   kal_int16                   tx_pga_phase_step; /*> Diff of B-A, S0.14 */

   /* TX PGA Gain Step */
   kal_int16                   pga_gain_step[MMRFC_C2K_TX_PGA_GAIN_STEP_SUBBAND_NUM][MMRFC_C2K_TX_PGA_GAIN_STEP_NUM]; /*> S7.8 */

   /* TX PGA Cap Tuning */
   MMRFC_C2K_CAP_TUNNING_SETTING_T        cap_tuning_pga_a; /*> CW795, V_TX_BAL_CAPA_AACT[5:0] , V_TX_BAL_CAPB_AACT[5:0]*/
   MMRFC_C2K_CAP_TUNNING_SETTING_T        cap_tuning_pga_b; /*> CW796, V_TX_BAL_CAPA_BACT[5:0] , V_TX_BAL_CAPB_BACT[5:0]*/

   /* TX PGA Pre-Cap Tuning*/
   MMRFC_C2K_CAP_TUNNING_SETTING_T        pre_cap_tuning_pga_a; /*> CW795, V_TX_BAL_CAPA_AACT[5:0] , V_TX_BAL_CAPB_AACT[5:0]*/
   MMRFC_C2K_CAP_TUNNING_SETTING_T        pre_cap_tuning_pga_b; /*> CW796, V_TX_BAL_CAPA_BACT[5:0] , V_TX_BAL_CAPB_BACT[5:0]*/

}MMRFC_C2K_POC_RESULT_PER_BAND_T;

typedef struct
{
   kal_int16                      gain;
   kal_int16                      phase;

} C2K_TXDFE_TX_IQ_COMP_T;

typedef struct
{
   C2K_TXDFE_TX_IQ_COMP_T            comp_tab[TX_IQ_COMP_FC_MODE_NUM][TX_IQ_COMP_PGA_SLICE_SET_NUM];

} C2K_TXDFE_TX_IQ_COMP_TAB_T;

typedef struct
{
   kal_int16                      i_part;
   kal_int16                      q_part;

} C2K_TXDFE_TX_DC_COMP_T;

typedef struct
{
   C2K_TXDFE_TX_DC_COMP_T            comp_tab[TX_DC_COMP_FC_MODE_NUM][TX_DC_COMP_PGA_SLICE_SET_NUM];

} C2K_TXDFE_TX_DC_COMP_TAB_T;

typedef struct
{
   kal_int16                      i_part;
   kal_int16                      q_part;

} C2K_TXDFE_ASYMM_COMP_COEFF_UNIT_T;

typedef struct
{
   C2K_TXDFE_ASYMM_COMP_COEFF_UNIT_T cof[ASYMM_COMP_COEFF_NUM];

} C2K_TXDFE_ASYMM_COMP_COEFF_T;

typedef struct
{
   C2K_TXDFE_ASYMM_COMP_COEFF_T      coeff_tab[ASYMM_COMP_PGA_SLICE_SET_NUM];

} C2K_TXDFE_ASYMM_COMP_COEFF_TAB_T;


typedef struct
{
   kal_int16                      i_part;
   kal_int16                      q_part;

} C2K_TXDFE_FDAD_COMP_COEFF_UNIT_T;

typedef struct
{
   C2K_TXDFE_FDAD_COMP_COEFF_UNIT_T  cof[FDAD_COMP_COEFF_NUM];

} C2K_TXDFE_FDAD_COMP_COEFF_T;

typedef struct
{
   C2K_TXDFE_FDAD_COMP_COEFF_T       coeff_tab[FDAD_COMP_PGA_SLICE_SET_NUM];

} C2K_TXDFE_FDAD_COMP_COEFF_TAB_T;

typedef struct
{
   MMRFC_C2K_RX_DC_RESULT_T dc_ant0;
   MMRFC_C2K_RX_DC_RESULT_T dc_ant1;
}CL1D_RX_DCOC_COMP_DATA_T;

/*===============================================================================*/
/*                     RF Calibration Result Structure                           */
/*     The structure is grouped from post-processing result. Some redundent      */
/*     items may need to be removed and excluded in shared memory or NVRAM.      */
/*===============================================================================*/


/************************************************************************************
*  Global Variables extern (Interface)
************************************************************************************/

extern HwdRfC2kPocDataBaseT C2K_POWER_ON_CALIBRATION_DATABASE;
extern MMRFC_C2K_RESULT_T C2K_POWER_ON_CALIBRATION_RESULT;
extern kal_uint32 C2K_FREQ_CENTER[2][C2K_BAND_CLASS_MAX];
extern C2K_XL1_Band c2k_xl1_bandMapTbl[C2K_BAND_CLASS_MAX];
extern const MMRFC_C2K_BAND_NUM_E c2k_rx_cal_band_iip2[C2K_IIP2_SINGLE_CAL_DIM];
extern const MMRFC_C2K_BAND_NUM_E c2k_rx_cal_band_iip2_ca_combination[C2K_IIP2_CA_CAL_DIM][2];
extern MMRFC_C2K_POC_RESULT_PER_BAND_T c2k_result_per_band;
extern MMRFC_C2K_POC_RESULT_PER_BAND_T c2k_result_per_band_recal;
#if C2K_CAL_RESULT_DEBUG
extern kal_uint32 flag_values[20];
extern kal_uint32 lo_index;
#endif


/************************************************************************************
* Global Functions Prototype (Interface)
************************************************************************************/
void CL1D_RF_TX_PARAM_COMP(RF_COMP_INDEX_E comp_idx, MMRFC_TX_RAT_CBW_CFG_E cbw_cfg, MMRFC_C2K_POC_RESULT_PER_BAND_T* c2k_result_per_band_comp);
void CL1D_RF_UpdatePocResult(kal_uint8 band_idx, kal_uint8 cal_type, kal_uint32 cal_item_list_bitmap, MMRFC_C2K_POC_RESULT_PER_BAND_T* cal_result);
void CL1D_RF_UpdateDetResult(kal_uint8 band_idx,kal_uint32 cal_item_list_bitmap,MMRFC_C2K_POC_RESULT_PER_BAND_T* cal_result);
void CL1D_RF_UpdateTxResult(kal_uint8 band_idx, kal_uint32 cal_item_list_bitmap, MMRFC_C2K_POC_RESULT_PER_BAND_T* cal_result);
void CL1D_RF_UpdateRxResult(kal_uint8 band_idx, kal_uint32 cal_item_list_bitmap, MMRFC_C2K_POC_RESULT_PER_BAND_T* cal_result);
void CL1D_MMRF_PowerOnCalibration( void );
void CL1D_RF_GetRxIrrDcConfigTable( MMRFC_XL1_BAND_NUM_E band, CL1D_RX_CAL_IRR_DC_CFG_T* irr_dc_cfg, kal_uint8 is_irr_cal );
void CL1D_RF_GetRxIIP2ConfigTable( MMRFC_XL1_BAND_NUM_E band, CL1D_RX_CAL_IIP2_CFG_T* iip2_cfg );
void cl1d_get_c2k_band_info_by_xl1_band(MMRFC_XL1_BAND_NUM_E xL1band, C2KBandInfo* c2k_band_info);
MMRFC_XL1_BAND_NUM_E cl1d_get_xl1_band_by_c2k_band(MMRFC_C2K_BAND_NUM_E C2K_band);
void cl1d_rf_cal_calculate_det_gain(MMRFC_C2K_RESULT_PER_BAND_T* p_det, kal_int32* det_tia_gain_fwd);
void CL1D_RF_GetDetBwConfig(MMRFC_DET_CAL_ITEM_CFG_E detk_item,MMRFC_TX_RAT_CBW_CFG_E* start_cbw, MMRFC_TX_RAT_CBW_CFG_E* end_cbw, kal_uint8* tone_num);
void CL1D_RF_GetTxBwConfig(MMRFC_TX_CAL_ITEM_CFG_E txk_item, MMRFC_TX_RAT_CBW_CFG_E* start_cbw, MMRFC_TX_RAT_CBW_CFG_E* end_cbw);
void CL1D_RF_CAL_Set_TX_CW_Rx_IIP2_CAL(MMRFC_TX_CAL_CFG_T *tx_cfg, MML1_RF_BSIMM_PORT_T port_sel);
void CL1D_RF_MMPOC_GetTxCfg(MMRFC_XL1_BAND_NUM_E band, MMRFC_TX_ROUTE_CFG_T* tx_route_cfg);
void CL1D_MMRF_RFCAL_STX_CONFIG_BUFFER(MMRFC_XL1_BAND_SUPPORT_CAPABILITY_T* band_cap_p, MML1_RF_BSIMM_PORT_T port_sel);
void CL1D_MMRF_RFCAL_TX_CONFIG_BUFFER(MMRFC_XL1_BAND_SUPPORT_CAPABILITY_T* band_cap_p, MML1_RF_BSIMM_PORT_T port_sel);
void CL1D_MMRF_RFCAL_LIN_CONFIG_BUFFER(MMRFC_XL1_BAND_SUPPORT_CAPABILITY_T* band_cap_p, MML1_RF_BSIMM_PORT_T port_sel);
void CL1D_MMRF_RFCAL_DPD_CONFIG_BUFFER(MMRFC_XL1_BAND_SUPPORT_CAPABILITY_T* band_cap_p, MML1_RF_BSIMM_PORT_T port_sel);
void CL1D_MMRF_RFCAL_TX_PA_ON_LOWGAIN_CONFIG_BUFFER(MMRFC_XL1_BAND_SUPPORT_CAPABILITY_T* band_cap_p, kal_uint8* length, MMRFC_TXPA_ON_LOWGAIN_BUFFER_T* buffer, MML1_RF_BSIMM_PORT_T* port_sel);
void CL1D_MMRF_RFCAL_TX_PA_OFF_CONFIG_BUFFER(MMRFC_XL1_BAND_SUPPORT_CAPABILITY_T* band_cap_p, kal_uint8* length, MMRFC_TXPA_OFF_BUFFER_T* buffer, MML1_RF_BSIMM_PORT_T* port_sel);
void CL1D_RF_CAL_Set_Rx_Path_Ctrl_CW(MMRFC_RX_CW_PARAM_T* rx_cw_param, MMRFC_RX_CAL_CFG_T* rx_cfg);
void CL1D_RF_CAL_Set_Rx_Mixer_Gate_Bias_CW(MMRFC_RX_CW_PARAM_T* rx_cw_param, MMRFC_RX_CAL_CFG_T* rx_cfg);
void CL1D_RF_CAL_Set_Rx_LO_Ctrl_CW(MMRFC_RX_CW_PARAM_T * rx_cw_param, MMRFC_RX_CAL_CFG_T* rx_cfg);
void CL1D_RF_CAL_Set_Srx_Config_CW(MMRFC_RX_CW_PARAM_T* rx_cw_param, MMRFC_RX_CAL_CFG_T* rx_cfg);
void CL1D_RF_CAL_Set_TX_PGA_Gain_CW_Rx_IIP2_CAL(MMRFC_TX_CAL_CFG_T *tx_cfg, MML1_RF_BSIMM_PORT_T port_sel);
kal_bool CL1D_RF_DET_Path_Query(MMRFC_XL1_BAND_NUM_E band, MMRF_DET_IO_E tx_det_io);
void CL1D_RF_GET_TX_DET_ANT(MMRFC_XL1_BAND_NUM_E band, kal_bool is_fwd_path);
void CL1D_MMRF_RFCAL_RX_OFF_CONFIG_BUFFER(MMRFC_XL1_BAND_SUPPORT_CAPABILITY_T* band_cap_p, kal_uint8* length, MMRFC_RX_OFF_BUFFER_T* buffer, MML1_RF_BSIMM_PORT_T* port_sel);
void cl1d_rf_tx_param_comp_fdiq(kal_bool comp_enable, MMRFC_TX_RAT_CBW_CFG_E mmrfc_cbw, MMRFC_C2K_POC_RESULT_PER_BAND_T* c2k_result_per_band_comp);
void CL1D_TXDFE_Update_FDAD_Coeff( C2K_TXDFE_FDAD_COMP_COEFF_TAB_T *p_fdad, C2K_RFPATH_TXDFE_SEL_E txdfe_rfpath_sel );
void CL1D_TXDFE_FDAD_Comp_On_Off( C2K_TXDFE_FDAD_COMP_EN_E en, const C2K_TXDFE_FDAD_TAP_E fdad_tap, C2K_RFPATH_TXDFE_SEL_E txdfe_rfpath_sel );
void cl1d_rf_tx_param_comp_dc(kal_bool comp_enable, MMRFC_TX_RAT_CBW_CFG_E cbw_cfg, MMRFC_C2K_POC_RESULT_PER_BAND_T* c2k_result_per_band_comp, kal_bool is_lin_pwr_mode);
void CL1D_TXDFE_Update_Tx_Dc_Comp( C2K_TXDFE_TX_DC_COMP_TAB_T *p_dc, C2K_RFPATH_TXDFE_SEL_E txdfe_rfpath_sel );
void cl1d_rf_tx_param_comp_fiiq(kal_bool comp_enable, MMRFC_TX_RAT_CBW_CFG_E cbw_cfg, MMRFC_C2K_POC_RESULT_PER_BAND_T* c2k_result_per_band_comp, kal_bool is_lin_pwr_mode);
void CL1D_TXDFE_Update_Tx_Iq_Comp( C2K_TXDFE_TX_IQ_COMP_TAB_T *p_iq, C2K_RFPATH_TXDFE_SEL_E txdfe_rfpath_sel );
void cl1d_rf_tx_param_comp_ga(kal_bool comp_enable, MMRFC_TX_RAT_CBW_CFG_E cbw_cfg, MMRFC_C2K_POC_RESULT_PER_BAND_T* c2k_result_per_band_comp);
void CL1D_TXDFE_Asymm_Comp_On_Off( C2K_TXDFE_ASYMM_COMP_EN_E en, const C2K_TXDFE_ASYM_TAP_E asymm_comp_tap, C2K_RFPATH_TXDFE_SEL_E txdfe_rfpath_sel );
void CL1D_RFC_RXDFE_Config(MMRFC_RX_CAL_TYPE_E rx_cal_type, kal_uint32 agg_bw, MMRFC_PATH_BITMAP_E path_sel);
void CL1D_RFC_RXDFE_Win_On_Ctrl(MMRFC_RX_CAL_TYPE_E rx_cal_type);
void CL1D_RFC_RXDFE_Meas_Trigger(MMRFC_RX_CAL_TYPE_E rx_cal_type, kal_uint32 meas_atime);
void CL1D_RFC_RXDFE_Win_Off_Ctrl(MMRFC_RX_CAL_TYPE_E rx_cal_type);
                                                      
void CL1D_MMRF_L1CoreSHMDataInit(void);
void CL1D_MMRF_L1coreSHMUpdate2Local(void);
void CL1D_RF_PRECAL_RESULT_WRITE_BACK(kal_uint8 ind_sw, 
                                      kal_uint8 capcal_peak_cap, 
                                      kal_uint8 in_bias_lpm, 
                                      kal_uint8 in_bias_hpm, 
                                      kal_uint32 det_coarse_dcoc_cw807, 
                                      kal_uint32 det_coarse_dcoc_cw808);
void CL1D_RF_DETCAL_DC_RESULT_WRITE_BACK(kal_uint8 gain_idx, kal_uint32 recal, MMRFC_DET_DC_RESULT_T tx_det_dc_calgo_result, kal_uint16 internal_ms_elapsed_time_check_flag);
void CL1D_RF_DETCAL_FDPCB_RESULT_WRITE_BACK(MMRFC_DETDFE_TIA_GAIN_IDX_E fe_gain_idx, kal_uint32 recal, 
                                         MMRFC_DET_EQLPF_CFG_T* tx_det_iqdnl_calgo_result, kal_uint16 internal_ms_elapsed_time_check_flag);

void CL1D_RF_TXRC_RESULT_WRITE_BACK(kal_int16 tx_rc_calgo_result, MMRFC_LPF_RCF_CAL_TYPE_E lpf_rcf_select, kal_uint16 internal_ms_elapsed_time_check_flag);
void CL1D_RF_TXDC_RESULT_WRITE_BACK(MMRFC_TX_IQDC_RESULT_T* tx_iqdc_calgo_result, MMRFC_TX_RAT_CBW_CFG_E cbw_idx, kal_uint32 tx_pga_slice, kal_uint32 recal, kal_uint32 pwr_mode, kal_uint16 internal_ms_elapsed_time_check_flag);
void CL1D_RF_TXFIIQ_RESULT_WRITE_BACK(MMRFC_TX_IQDC_RESULT_T* tx_iqdc_calgo_result, MMRFC_TX_RAT_CBW_CFG_E cbw_idx, kal_uint32 tx_pga_slice, kal_uint32 recal, kal_uint32 pwr_mode, kal_uint16 internal_ms_elapsed_time_check_flag);
#if IS_CL1D_RF_MT6177L      
void CL1D_RF_TXCAP_RESULT_WRITE_BACK(kal_uint8 pga_ab, kal_bool is_pre_cap_tuning, kal_uint8 CAP_OPT_A, kal_uint8 CAP_OPT_B, kal_uint16 internal_ms_elapsed_time_check_flag);
#elif IS_CL1D_RF_MT6177M
void CL1D_RF_TXCAP_RESULT_WRITE_BACK(kal_uint8 pga_ab, kal_bool is_pre_cap_tuning, kal_uint8 CAP_OPT_A, kal_uint16 internal_ms_elapsed_time_check_flag);
#endif
void CL1D_RF_TXDNL_RESULT_WRITE_BACK(kal_bool is_tx_dnl_valid, C2K_TX_DNL_COMP_T* dnl_cal_result, kal_uint16 internal_ms_elapsed_time_check_flag);
void CL1D_RF_TX_PGA_PHASE_STEP_RESULT_WRITE_BACK(kal_int16 result, kal_uint16 internal_ms_elapsed_time_check_flag);
void CL1D_RF_RXDC_RESULT_WRITE_BACK(MMRFC_POWER_MODE_E dc_mode_idx,
                                        kal_uint8 tia_gain_idx, 
                                        kal_uint8 if_gain_idx, 
                                        kal_uint8 route_idx,
                                        kal_uint8 ant_idx,
                                        MMRFC_RX_DC_RESULT_T* rf_dc,
                                        MMRFC_RX_DC_RESULT_T* dig_dc,
                                        kal_uint8 re_cal_index,
                                        kal_uint16 internal_ms_elapsed_time_check_flag);
void CL1D_RF_RXIRR_RESULT_WRITE_BACK(MMRFC_RXIRR_CAL_MODE_E irr_mode_idx,
                                         kal_uint8 route_idx,
                                         MMRFC_RX_RAT_CBW_CFG_E rx_cbw,
                                         kal_uint8 ant_idx,
                                         MMRFC_RX_IRR_RESULT_T* rx_irr_data,
                                         kal_uint8 re_cal_index,
                                         kal_uint16 internal_ms_elapsed_time_check_flag);

void CL1D_RF_RXIIP2_RESULT_WRITE_BACK(kal_uint8 route_idx,
                                      MMRFC_IIP2_RESULT_T* rxp_iip2, 
                                      MMRFC_IIP2_RESULT_T* rxd_iip2,
                                      kal_uint16 internal_ms_elapsed_time_check_flag);
void CL1D_RFC_DET_FIIQ_COMP(MMRFC_DETDFE_TIA_GAIN_IDX_E fe_gain, MMRFC_DET_FIIQ_COMP_T* p);
void CL1D_RFC_DET_DC_COMP(MMRFC_DET_G_IDX det_gain_step, MMRFC_DET_DC_COMP_T* p);
void CL1D_RFC_DET_FDPCB_COMP(MMRFC_DETDFE_TIA_GAIN_IDX_E fe_gain, MMRFC_DET_EQLPF_CFG_T* p);
void CL1D_RF_CAL_DETIQDNL_RESULT_WRITE_BACK(MMRFC_DET_TIA_COMP_INDEX_E fe_gain_idx, kal_uint32 recal, 
                                            MMRFC_DET_IQDNL_RESULT_T* tx_det_iqdnl_calgo_result, kal_uint16 internal_ms_elapsed_time_check_flag);
void CL1D_RFC_GetCalibrationResults_RX_DC(MMRFC_POWER_MODE_E mode,
                                                      kal_uint16 dc_comp_route_idx,
                                                      RX_TIA_GAIN_E tia_gain_idx,
                                                      RXIF_GAIN_E if_gain_idx,
                                                      MMRFC_C2K_RX_DC_RESULT_T* rf_dc);
void CL1D_RFC_GetCalibrationResults_RX_Dig_DC(MMRFC_POWER_MODE_E mode,
                                                      kal_uint16 dc_comp_route_idx,
                                                      RX_TIA_GAIN_E tia_gain_idx,
                                                      RXIF_GAIN_E if_gain_idx,
                                                      MMRFC_C2K_RX_DC_RESULT_T* rf_dig_dc);
void CL1D_RXDFE_Comp_ActBuff_Rxk(kal_bool is_hpm, MMRFC_C2K_RX_IRR_RESULT_T* irr_comp, MMRFC_C2K_RX_DC_RESULT_T* dc_comp, MMRFC_RX_CAL_TYPE_E cal_type);
void CL1D_RFC_Get_Rx_IRR_Comp_Data(MMRFC_POWER_MODE_E mode,
                                                      kal_uint16 irr_comp_route_idx,
                                                      MMRFC_C2K_RX_IRR_RESULT_T* rf_rx_irr_comp);

void cl1d_rf_getpoccaldatafromemi(kal_uint16 nvram_lid, MMRFC_C2K_BAND_NUM_E band, kal_uint8* dst, kal_uint16 lid_size);
kal_uint32 CL1D_MMRF_UpdateRuntimeHandler(kal_uint32 nvram_lid, kal_uint32 record_idx, kal_uint8 *data, kal_uint16 nvram_size );
kal_uint16 CL1D_RF_Cal_Poc_NVRAM_Lid_Total_Num_InUse(void);
kal_uint16 CL1D_RF_Get_Rf_Self_Cal_Result_Size(kal_uint16 lid_idx);
kal_uint16 CL1D_RF_Get_Rf_Self_Cal_Result(kal_uint16 lid_idx, kal_uint16 lid_size, kal_uint8 *dst);
kal_uint16 CL1D_RF_Set_Rf_Self_Cal_Result(kal_uint16 lid_idx, kal_uint16 lid_size, kal_uint8 *src);
kal_uint16 CL1D_RF_Get_Rf_Self_Cal_String(kal_uint16 lid_idx, kal_char *string_dst );
void CL1D_RFC_Update_POC_Result_After_Parsing_To_Local(kal_uint16 band_idx, CL1D_RF_POC_FINAL_T* cal_result_after_parsing);
/*DAT interace */
kal_bool CL1D_AP_Sensor_Relative_Feature_IS_Need_L1C_GAP(MMRF_AP_SENSOR_RELATIVE_OP_CODE_E OP_code, kal_int16 new_scenario);

#ifdef __C2K_RAT__
kal_bool C2K_RF_TAS_Support(void);
void     C2K_RF_Force_TAS(kal_bool force_tas_enable, kal_uint8 tas_idx);
/*TAS TST interface */
extern kal_uint16 CL1D_IsQueryingTasStateInfoSupported(void);
extern kal_uint16 CL1D_QueryTasVersion(void);
extern kal_uint16 CL1D_GetTasStateConfigBandNum(void);
extern void CL1D_GetTasStateConfig(kal_uint16 buf_length,
										kal_uint16 * band_list,
										kal_uint16 * state_limit,
										kal_uint16 * state_map);
#else
#define C2K_RF_TAS_Support   NULL
#define C2K_RF_Force_TAS     NULL
#define CL1D_IsQueryingTasStateInfoSupported	NULL
#define CL1D_QueryTasVersion	NULL
#define CL1D_GetTasStateConfigBandNum	NULL
#define CL1D_GetTasStateConfig	NULL
#endif

#endif /* End of #ifndef _C2K_MMRF_INTERFACE_H_ */

