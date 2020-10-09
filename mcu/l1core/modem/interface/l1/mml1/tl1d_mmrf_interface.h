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
 *   tl1d_mmrf_interface.h
 *
 * Project:
 * --------
 *   TK6291
 *
 * Description:
 * ------------
 *   TL1D interface to Multi-Mode Multi-RAT RF Central Control
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
 *----------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

#ifndef  _TL1D_MMRF_INTERFACE_H_
#define  _TL1D_MMRF_INTERFACE_H_

/*===============================================================================*/
#include "kal_general_types.h"
#include "mml1_rf_interface.h"
#include "mml1_rf_cal_interface.h"
#include "mml1_rf_calpocif.h"

/*===============================================================================*/


/*===============================================================================*/
/*                     RF Calibration Result Structure                           */
/*     The structure is grouped from post-processing result. Some redundent      */
/*     items may need to be removed and excluded in shared memory or NVRAM.      */
/*===============================================================================*/

typedef enum
{
   TTG_1ST,
   TTG_2ND,
   TTG_3RD,
   TTG_4TH,
   TTG_NUM,
} TDDTXDFE_TTG_INDEX_E;


typedef enum
{
   TDS_COS_ONLY,
   TDS_SIN_ONLY,
   TDS_COS_N_P_SIN,
   TDS_COS_N_N_SIN,
   TDS_TTG_MODE_NUM,
} TDDTXDFE_TTG_MODE_E;

typedef enum
{
   TDS_DPD_MODE=0,   
   TDS_LINEAR_MODE1=2,
   TDS_LINEAR_MODE1_ET=3,
   TDS_LINEAR_MODE2=4,
   TDS_LINEAR_MODE2_ET=5,
} TDDTXDFE_SW_MODE_E;

typedef enum
{
   TDS_PGA_SETA_SLICE1,
   TDS_PGA_SETA_SLICE2,    
   TDS_PGA_SETA_SLICE4,
   TDS_PGA_SETA_SLICE7,
   TDS_PGA_SETA_SLICE8,
   TDS_PGA_SETB_SLICE1,
   TDS_PGA_SETB_SLICE2,
   TDS_PGA_SETAUX,
} TDDTXDFE_SW_GAIN_INFO_E;

typedef enum
{
   TDS_LTE_1P4M,
   TDS_LTE_3M,    
   TDS_LTE_5M,
   TDS_LTE_10M,
   TDS_LTE_15M,
   TDS_LTE_20M,
   TDS_LTE_PRACH_FMT0,  // 4'd6~9: LTE-PRACH FMT 0~3
   TDS_LTE_PRACH_FMT1,
   TDS_LTE_PRACH_FMT2,
   TDS_LTE_PRACH_FMT3,
   TDS_LTE_PRACH_FMT4,
   TDS_W_FDD_SC,
   TDS_W_FDD_DC,
   TDS_W_TDD,
} TDDTXDFE_SW_RAT_E;

typedef struct
{
    kal_uint32 rxdfe_filter_parameter[9];
}TDDRXDFE_FDPM_PARA_T;


typedef struct
{
   /** TTG phase*/
   kal_int32 phi;

   /** TTG gain*/
   kal_uint32 gain;

   /** TTG phase0 mode*/
   TDDTXDFE_TTG_MODE_E p0_mode;

   /** TTG phase1 mode*/
   TDDTXDFE_TTG_MODE_E p1_mode;

   /** 1st TTG tone DC value: i part*/
   kal_int32  dc_i;

   /** 1st TTG tone DC value: q part*/
   kal_int32  dc_q;

} TDDTXDFE_TTG_CTRL_T;

typedef struct
{
   /** CON0 SW mode */
   TDDTXDFE_SW_MODE_E mode;

   /** CON0 SW gain information */
   TDDTXDFE_SW_GAIN_INFO_E gain;

   /** CON0 SW theta_at */
   kal_int16 theta_at;

   /** CON1 SW RAT selection*/
   TDDTXDFE_SW_RAT_E rat_sel;

   /** CON1 FEC gain norm pout for TxDFE*/
   kal_int16 gain_pout;

   /** CON1 FEC detrough linear for ET*/
   kal_int16 dtr_lin;
   
} TDDTXDFE_SW_MODE_CFG_T;

typedef struct
{
    /**CON0, fdiq comp bit num*/
    kal_uint16 fpid_comp_en;
	
    /**CON1, mode tap seletion mode012*/
    kal_uint16 tap_num_mode012;
	
    /**CON1, mode tap seletion mode34*/
    kal_uint16 tap_num_mode34;	
	
}TDD_TXDFE_FDIQ_CON_T;

typedef struct
{
   kal_uint8             route_num;
   kal_bool              is_rx_tdd_band;
   MMRFC_RX_CAL_CFG_T    cfg;
}TL1D_RX_CAL_IRR_DC_CFG_T;


typedef struct
{
   /* RX IRR */
   MMRFC_RX_IRR_RESULT_T       rx_irr_hpm[MMRFC_ANT_NUM]; //3 
   MMRFC_RX_IRR_RESULT_T       rx_irr_lpm[MMRFC_ANT_NUM]; //3 

   /* RX DC */
   MMRFC_RX_DC_RESULT_T        rx_dc_hpm[MMRFC_RXDC_TIA_GAIN_STEPS][MMRFC_RXDC_PGA_GAIN_STEPS]; //3 
   MMRFC_RX_DC_RESULT_T        rx_dc_lpm[MMRFC_RXDC_TIA_GAIN_STEPS][MMRFC_RXDC_PGA_GAIN_STEPS]; //3 

   MMRFC_RX_DC_RESULT_T        rx_dig_dc_hpm[MMRFC_RXDC_TIA_GAIN_STEPS][MMRFC_RXDC_PGA_GAIN_STEPS]; //3 
   /* DET */
   /* Only FDIQ is dependent with sample rates, other redundent items need to be removed in NVRAM/share memory structure */
   MMRFC_DET_IQAD_RESULT_T    det_iqdnl[MMRFC_DET_FE_GAIN_STEPS]; //2 
   MMRFC_DET_DC_RESULT_T       det_dc[MMRFC_DET_GAIN_STEPS+2]; //15 DET gain step

   kal_uint32                  det_coarse_dcoc_cw807; //CW807, V_TXCDCOC1[19:0]
   kal_uint32                  det_coarse_dcoc_cw808; //CW808, V_TXCDCOC2[19:0]

   kal_uint32                  tx_lo;            //CW714, {2'b00,V_TXLOCAP[6:0],V_TXLOIND,V_TXLOINBIAS[4:0],V_TXLOINBIAS[4:0]}
   kal_uint8                   tx_lo_ind;
   kal_uint8                   tx_lo_capcal_peak_cap; //CW714
   kal_uint8                   tx_lo_in_bias_hpm;     //CW714
   kal_uint8                   tx_lo_in_bias_lpm;     //CW714  

   /* TX RC */
   kal_int16                   tx_rc_lpf;
   kal_int16                   tx_rc_rcf;

   /* TX IQDC */
   /* TXIQ: G0, G9, G10, G12a, G14a, G12b, G14b       */
   /* TXDC: G0, G9, G10, G12a, G14a, G12b, G14b, G21  */
   /* freq_dep_phase_tx is temp output for FDIQ cal   */
   MMRFC_TX_IQDC_RESULT_T      tx_iqdc_lin[MMRFC_TX_PGA_SLICE_NUM+1]; //+1 only for DC with PGA-AUX
   MMRFC_TX_IQDC_RESULT_T      tx_iqdc_dpd[MMRFC_TX_PGA_SLICE_NUM+1]; //+1 only for DC with PGA-AUX
   MMRFC_TX_FD_FILT_RESULT_T   tx_fdiq[MMRFC_TX_PGA_SLICE_NUM+1];

   /* TX DNL */
   kal_int16                   tx_dnl_lin_pga_a[MMRFC_TX_DNL_PGA_A_SEQ_NUM]; //20 gain diff
   kal_int16                   tx_dnl_lin_pga_b[MMRFC_TX_DNL_PGA_B_SEQ_NUM]; //15 gain diff
   kal_int16                   tx_dnl_dpd_pga_a[MMRFC_TX_DNL_PGA_A_SEQ_NUM]; //20 gain diff
   kal_int16                   tx_dnl_dpd_pga_b[MMRFC_TX_DNL_PGA_B_SEQ_NUM]; //15 gain diff

   /* TX PGA Gain Step */
   kal_int16                   pga_gain_step[MMRFC_TX_PGA_GAIN_STEP_NUM];

   /* TX PGA Cap Tuning */
   kal_int16                   cap_tuning_pga_a;
   kal_int16                   cap_tuning_pga_b;
   
} MMRFC_3GTDD_RESULT_PER_BAND_T;

typedef struct
{
   MMRFC_3GTDD_RESULT_PER_BAND_T tds_result[2];
} MMRFC_3GTDD_RESULT_T;
#if defined(MT6177L_RF)
typedef struct
{
    RF_CW_T txCw707;
    RF_CW_T txCw786;
    RF_CW_T txCw794;
    RF_CW_T txCw795;
    RF_CW_T txCw796;
    RF_CW_T txCw814;
    RF_CW_T txCw712;
    RF_CW_T txCw802;
    RF_CW_T txCw803;
    RF_CW_T txCw714;  //MT6179 needed for STX locking,refer to BBBM setting.
    RF_CW_T txCw816;
    RF_CW_T txCw818;
    RF_CW_T txCw819;
}TL1D_TX_CONFIG_BUFFER_T;
#else
typedef struct
{
  RF_CW_T txCw707;
  RF_CW_T txCw786;
  RF_CW_T txCw794;
  RF_CW_T txCw795;
  RF_CW_T txCw796;
  RF_CW_T txCw814;
  RF_CW_T txCw712;
  RF_CW_T txCw802;
  RF_CW_T txCw803;
}TL1D_TX_CONFIG_BUFFER_T;
#endif
#define TL1D_RFC_RECAL_ENABLE (0)
#if TL1D_RFC_RECAL_ENABLE
#define TL1D_RFC_RECAL_ITER (2)
#else
#define TL1D_RFC_RECAL_ITER (1)
#endif

extern   MMRFC_3GTDD_RESULT_PER_BAND_T tds_result_per_band;
extern   MMRFC_3GTDD_RESULT_PER_BAND_T tds_result_recal_per_band;

void TL1D_MMRF_PowerOnCalibration(void);
#if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif
extern MMRFC_3GTDD_RESULT_T tdsResult;

extern void TL1D_MMRF_L1coreSHMUpdate2Local(void);
extern void TL1D_MMRF_L1CoreSHMDataInit(void);
extern void TL1D_RF_CUSTOM_Table_Update(void);
extern void TL1D_MMRF_L1coreSHMDataCacheFlush(void);
extern void TL1D_RFCW_DUMP(void);
extern void TL1D_MMMRF_SRXCFG(MMRFC_XL1_BAND_NUM_E band);
extern void TL1D_MMRF_TXFIIQCOMP_CONFIG(kal_uint32 coef_num, kal_int32 dccompvlaue, kal_int32 iqcompvlaue );
extern kal_uint32 TL1D_MMRF_UpdateRuntimeHandler( kal_uint32 nvram_lid, kal_uint32 record_idx, kal_uint8 *data, kal_uint16 nvram_size );
extern void TL1D_RfSelfCalInvoke( void );
extern kal_uint16 TL1D_GetRfSelfCalTotalLidNum( void );
extern kal_uint16 TL1D_GetRfSelfCalResultSize( kal_uint16 lid_index);
extern kal_uint16 TL1D_GetRfSelfCalResult( kal_uint16 lid_index, kal_uint16 lid_size, kal_uint8 *dst);
extern kal_uint16 TL1D_SetRfSelfCalResult( kal_uint16 lid_index, kal_uint16 lid_size, kal_uint8 *src);
extern kal_uint16 TL1D_GetRfSelfCalString( kal_uint16 lid_index, kal_char *string_dst);
extern void TL1D_RF_UpdatePocResultToSHM(kal_uint8 band_idx, kal_uint32 cal_item_list_bitmap, MMRFC_3GTDD_RESULT_PER_BAND_T* cal_result);
extern kal_uint32 TL1D_RF_DATA_BUFFER_LENGTH_RETURN(MMPOC_BUFFER_IDX_E  buf_type);
extern MML1_RF_BSIMM_PORT_T TL1D_RF_BUF_DATA_PORT_TABLE_RETURN(MMPOC_BUFFER_IDX_E  buf_type);
extern kal_uint32* TL1D_RF_DATA_BUFFER_PTR_RETURN(MMPOC_BUFFER_IDX_E  buf_type);
extern void TL1D_RF_TX_PARAM_COMP (RF_COMP_INDEX_E comp_idx, MMRFC_3GTDD_RESULT_PER_BAND_T* tds_result_per_band_comp);
extern void TL1D_MMRF_RFCAL_SRX_CONFIG_BUFFER(MMRFC_XL1_BAND_SUPPORT_CAPABILITY_T* band_cap_p,kal_uint8 band_index,kal_uint8 * length,MMRFC_SRX_RXLO_CONFIG_BUFFER_T * buffer);
extern void TL1D_MMRF_RFCAL_TX_CONFIG_BUFFER(MMRFC_XL1_BAND_SUPPORT_CAPABILITY_T* band_cap_p,kal_uint8 band_index,kal_uint8 * length,MMRFC_TX_CONFIG_BUFFER_T * buffer);
extern void TL1D_MMRF_RFCAL_LIN_CONFIG_BUFFER(MMRFC_XL1_BAND_SUPPORT_CAPABILITY_T* band_cap_p,kal_uint8 band_index,kal_uint8 * length,MMRFC_TX_DRV_BIAS_LIN_CONFIG_BUFFER_T * buffer);
extern void TL1D_MMRF_RFCAL_DPD_CONFIG_BUFFER(MMRFC_XL1_BAND_SUPPORT_CAPABILITY_T* band_cap_p,kal_uint8 band_index,kal_uint8 * length,MMRFC_TX_DRV_BIAS_DPD_CONFIG_BUFFER_T * buffer);
extern void TL1D_MMRF_RFCAL_TX_PA_ON_LOWGAIN_CONFIG_BUFFER(MMRFC_XL1_BAND_SUPPORT_CAPABILITY_T* band_cap_p,kal_uint8 * length,MMRFC_TXPA_ON_LOWGAIN_BUFFER_T * buffer,MML1_RF_BSIMM_PORT_T * port_sel);
extern void TL1D_MMRF_RFCAL_TX_ASM_ON_LOWGAIN_CONFIG_BUFFER(MMRFC_XL1_BAND_SUPPORT_CAPABILITY_T* band_cap_p, kal_uint8* length, MMRFC_TXPA_ON_LOWGAIN_BUFFER_T* buffer, MML1_RF_BSIMM_PORT_T* port_sel);
extern void TL1D_MMRF_RFCAL_TX_PA_OFF_CONFIG_BUFFER(MMRFC_XL1_BAND_SUPPORT_CAPABILITY_T* band_cap_p,kal_uint8 * length,MMRFC_TXPA_OFF_BUFFER_T * buffer,MML1_RF_BSIMM_PORT_T * port_sel);
extern void TL1D_MMRF_RFCAL_RX_OFF_CONFIG_BUFFER(MMRFC_XL1_BAND_SUPPORT_CAPABILITY_T* band_cap_p, kal_uint8* length, MMRFC_TXPA_ON_LOWGAIN_BUFFER_T* buffer, MML1_RF_BSIMM_PORT_T* port_sel);
extern void TL1D_RF_MMPOC_GetTxCfg(MMRFC_XL1_BAND_NUM_E band,MMRFC_TX_ROUTE_CFG_T * tx_cfg);
extern void TL1D_RF_CAL_Set_Rx_Path_Ctrl_CW(MMRFC_RX_CW_PARAM_T* rx_cw_param, MMRFC_RX_CAL_CFG_T* rx_config, MMRFC_RX_CAL_TYPE_E rx_cal_type);
extern void TL1D_MMRF_RFCAL_BUFFERCFG(void);
extern void TL1D_RF_CAL_Set_Rx_LO_Ctrl_CW(MMRFC_RX_CW_PARAM_T* rx_cw_param, MMRFC_RX_CAL_CFG_T* rx_config);
extern void TL1D_RF_CAL_Set_Tunnel_Path_Ctrl_CW(MMRFC_RX_CW_PARAM_T* rx_cw_param, MMRFC_RXT_PATH_CTRL_BUFFER_T* buffer);
extern void TL1D_RF_CAL_Set_Srx_Config_CW(MMRFC_RX_CW_PARAM_T* rx_cw_param, MMRFC_RX_CAL_CFG_T* rx_config);
extern void TL1D_RF_CAL_Set_Rx_Mixer_Gate_Bias_CW(MMRFC_RX_CW_PARAM_T* rx_cw_param, MMRFC_RX_CAL_CFG_T* rx_config);
extern void TL1D_RFC_RxDcocCW(MMRFC_PATH_BITMAP_E path_sel , kal_int16 dc_i , kal_int16 dc_q , MMRFC_ANT_BITMAP_E ant_idx, MML1_RF_BSIMM_PORT_T port_sel);

#if (defined __TAS_SUPPORT__) && (defined __UMTS_TDD128_MODE__)
extern kal_bool TL1D_RF_TAS_Support(void);
extern void TL1D_RF_Force_TAS(kal_bool force_tas_enable, kal_uint8 tas_idx);
extern kal_uint16 TL1D_IsQueryingTasStateInfoSupported(void);
extern kal_uint16 TL1D_QueryTasVersion(void);
extern kal_uint16 TL1D_GetTasStateConfigBandNum(void);
extern void TL1D_GetTasStateConfig(kal_uint16 buf_length, kal_uint16* band_list, kal_uint16* state_limit, kal_uint16* tas_state );
#else
#define TL1D_RF_TAS_Support                   NULL
#define TL1D_RF_Force_TAS                     NULL
#define TL1D_IsQueryingTasStateInfoSupported  NULL
#define TL1D_QueryTasVersion                  NULL
#define TL1D_GetTasStateConfigBandNum         NULL
#define TL1D_GetTasStateConfig                NULL
#endif

void TL1D_RF_TXCAP_RESULT_WRITE_BACK(kal_uint8 pga_ab, kal_bool is_pre_cap_tuning, kal_uint8 CAP_OPT_A, kal_uint8 CAP_OPT_B);
void TL1D_RF_TXDC_RESULT_WRITE_BACK(MMRFC_TX_IQDC_RESULT_T tx_iqdc_calgo_result, MMRFC_TX_RAT_CBW_CFG_E cbw_idx, kal_uint8 tx_pga_slice, kal_uint32 recal, kal_uint8 pwr_mode);
void TL1D_RF_TXFIIQ_RESULT_WRITE_BACK( MMRFC_TX_IQDC_RESULT_T tx_iqdc_calgo_result, MMRFC_TX_RAT_CBW_CFG_E cbw_idx, kal_uint8 tx_pga_slice, kal_uint32 recal,kal_uint8 pwr_mode);
void TL1D_RF_PRECAL_RESULT_WRITE_BACK(
                                      kal_uint8 ind_sw, 
                                      kal_uint8 capcal_peak_cap, 
                                      kal_uint8 in_bias_lpm, 
                                      kal_uint8 in_bias_hpm, 
                                      kal_uint32 det_coarse_dcoc_cw807, 
                                      kal_uint32 det_coarse_dcoc_cw808);
void TL1D_RF_CAL_TXDNL_RESULT_WRITE_BACK(kal_uint32 tx_gain_idx,
                                         kal_int32  tx_dnl_calgo_result0,
                                         kal_int32  tx_dnl_calgo_result1);
void TL1_RF_DETCAL_DC_RESULT_WRITE_BACK( kal_uint32 det_path_sel,
                                         kal_uint8 gain_idx, 
                                         MMRFC_DET_DC_RESULT_T tx_det_dc_calgo_result);
void TL1D_RF_CAL_DETDC_RESULT_WRITE_BACK(MMRFC_DET_G_IDX gain_idx,
                                         kal_uint32 recal,
                                         MMRFC_DET_DC_RESULT_T* tx_det_dc_calgo_result);
void TL1D_RF_CAL_DETIQDNL_RESULT_WRITE_BACK(kal_uint32 route_idx,
                                            MMRFC_DET_TIA_COMP_INDEX_E fe_gain_idx,
                                            MMRFC_DET_G_IDX gain_idx,
                                            kal_uint32 recal,
                                            MMRFC_DET_IQDNL_RESULT_T* tx_det_iqdnl_calgo_result);
void TL1D_RF_CAL_DETFDPCB_RESULT_WRITE_BACK(kal_uint32 route_idx,
                                            MMRFC_DET_TIA_COMP_INDEX_E fe_gain_idx,
                                            MMRFC_TX_RAT_CBW_CFG_E cbw_case_idx,
                                            kal_uint32 recal,
                                            MMRFC_DET_EQLPF_CFG_T* tx_det_pcb_calgo_result);

void TL1D_RF_TXRC_RESULT_WRITE_BACK(kal_int32  tx_rc_calgo_result, MMRFC_LPF_RCF_CAL_TYPE_E  lpf_rcf_select);
void TL1D_RFC_GetRxIrrDcConfigTable(TL1D_RX_CAL_IRR_DC_CFG_T* dc_cfg);
void TL1_RF_POC_RxBwSettingCW(MMRFC_PATH_BITMAP_E path_sel, MML1_RF_BSIMM_PORT_T port_sel);

/*MT6293 RFC RXDFE API*/
void TL1D_RFC_RXDFE_Meas_Trigger(MMRFC_RX_CAL_TYPE_E rx_cal_type, kal_uint32 meas_atime, kal_uint16 index);
void TL1D_RFC_RXDFE_Config(MMRFC_RX_CAL_TYPE_E rx_cal_type, kal_uint32 agg_bw, MMRFC_PATH_BITMAP_E path_sel);
void TL1D_RFC_RXDFE_Win_On_Ctrl(MMRFC_RX_CAL_TYPE_E rx_cal_type);
void TL1D_RFC_RXDFE_Win_Off_Ctrl(MMRFC_RX_CAL_TYPE_E rx_cal_type);
void TL1D_RFC_RXDFE_comp_Ctrl(kal_uint32 tq_cfg);
void TL1D_RFC_RF_RXDFE_Comp_Imm(RF_COMP_INDEX_E comp_idx, MMRFC_PATH_BITMAP_E path_sel, MML1_RF_BSIMM_PORT_T rfic, MMRFC_RX_GAIN_T rx_gain_info, kal_uint16 rx_rf_route_idx);
void TL1D_RFC_RXDC_RESULT_WRITE_BACK(kal_uint8 re_cal_index, kal_uint8 tia_gain_idx, kal_uint8 if_gain_idx, kal_uint8 ant_idx, MMRFC_RX_DC_RESULT_T* rf_dc, MMRFC_RX_DC_RESULT_T* dig_dc);
void TL1D_RFC_RXIRR_RESULT_WRITE_BACK(MMRFC_RXIRR_CAL_MODE_E irr_mode_idx, kal_uint16 recal, kal_uint8 cbw_idx, MMRFC_RX_RAT_CBW_CFG_E rx_cbw, kal_uint8 ant_idx, MMRFC_RX_IRR_RESULT_T* rx_irr_data);
void TL1_RF_GetCalibrationResults_RX_DC(kal_uint8 tia_gain_idx, kal_uint8 if_gain_idx, MMRFC_RX_DC_RESULT_T* rf_dc);
void TL1_RF_GetCalibrationResults_RX_dig_DC(kal_uint8 tia_gain_idx, kal_uint8 if_gain_idx, MMRFC_RX_DC_RESULT_T* rf_dc);
void TL1_RF_GetCalibrationResults_RX_IRR(MMRFC_RX_IRR_RESULT_T* irr_result);
/* DET compensation (in calibration mode) */
void TL1D_RFC_DET_FIIQ_COMP(kal_uint32 route_idx,
                            MMRFC_DETDFE_TIA_GAIN_IDX_E fe_gain,
                            MMRFC_DET_FIIQ_COMP_T* p);
void TL1D_RFC_DET_DC_COMP(kal_uint32 route_idx,
                          MMRFC_DET_G_IDX det_gain_step,
                          MMRFC_DET_DC_COMP_T* p);
void TL1D_RFC_DET_FDPCB_COMP(kal_uint32 route_idx,
                             MMRFC_DETDFE_TIA_GAIN_IDX_E fe_gain,
                             MMRFC_DET_EQLPF_CFG_T* p);
void TL1D_RF_TX_DNL_SET_DEFAULT(MMRFC_XL1_BAND_NUM_E band);

#if defined(MT6177M_RF)

void TL1D_RFCAL_SRX_CONFIG_BUFFER(MMRFC_XL1_BAND_SUPPORT_CAPABILITY_T* band_cap_p, kal_uint8* length, kal_uint32 * buffer);
void TL1D_RFCAL_TX_CONFIG_BUFFER(MMRFC_XL1_BAND_SUPPORT_CAPABILITY_T* band_cap_p, kal_uint8* length, kal_uint32* buffer);
void TL1D_RFCAL_LIN_CONFIG_BUFFER(MMRFC_XL1_BAND_SUPPORT_CAPABILITY_T* band_cap_p, kal_uint8* length, kal_uint32* buffer);
void TL1D_RFCAL_DPD_CONFIG_BUFFER(MMRFC_XL1_BAND_SUPPORT_CAPABILITY_T* band_cap_p, kal_uint8* length, kal_uint32* buffer);
void TL1D_RFC_RXDFE_FC_TQ_Allocal(void);
void TL1D_RFC_RXDFE_FC_TQ_Release(void);

#elif defined(MT6177L_RF) || defined(MT6179_RF)

void TL1D_RFCAL_SRX_CONFIG_BUFFER(MMRFC_XL1_BAND_SUPPORT_CAPABILITY_T* band_cap_p, kal_uint8* length, MMRFC_SRX_RXLO_CONFIG_BUFFER_T* buffer);
void TL1D_RFCAL_TX_CONFIG_BUFFER(MMRFC_XL1_BAND_SUPPORT_CAPABILITY_T* band_cap_p, kal_uint8* length, TL1D_TX_CONFIG_BUFFER_T* buffer);
void TL1D_RFCAL_LIN_CONFIG_BUFFER(MMRFC_XL1_BAND_SUPPORT_CAPABILITY_T* band_cap_p, kal_uint8* length, MMRFC_TX_DRV_BIAS_LIN_CONFIG_BUFFER_T* buffer);
void TL1D_RFCAL_DPD_CONFIG_BUFFER(MMRFC_XL1_BAND_SUPPORT_CAPABILITY_T* band_cap_p, kal_uint8* length, MMRFC_TX_DRV_BIAS_DPD_CONFIG_BUFFER_T* buffer);
void TL1D_RFC_RXDFE_FC_TQ_Allocal(void);
void TL1D_RFC_RXDFE_FC_TQ_Release(void);
#endif
#endif /* End of #ifndef _TL1D_MMRF_INTERFACE_H_ */

