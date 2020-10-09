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
 *   crfcalcwctrl_mt6177m.h
 *
 * Project:
 * --------
 *   TK6293
 *
 * Description:
 * ------------
 *   C2K Calibration power-on calibration interface header file
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

 *----------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

#ifndef  _CRFCALCWCTRL_MT6177M_H_
#define  _CRFCALCWCTRL_MT6177M_H_

/************************************************************************************
*  Include 
************************************************************************************/
#include "mml1_rf_cal_interface.h"
//#include "mml1_rf_calpocif.h"


/************************************************************************************
*  Defines
************************************************************************************/
#define CL1D_RFC_TXDNL_CAL_DIM                          (39)
#define CL1D_CAP_CTRL_SETTING(port, det_pga_cap_csel) MML1_RF_IMM_SEND_BSI(port, CL1D_RFC_CW817_DET_SPARES(det_pga_cap_csel))
#define CL1D_TX_PRE_CAPTUN_SEQ_TABLE_LENGTH                  (1)
#define CL1D_TX_PHASE_STEP_CAL_TABLE_LENGTH                  (1)

//RX DC algorithm input
#define C1LD_RFC_IS_DC_ALGO_DIG_DC_ONLY_IN_HPM           KAL_FALSE
#define C1LD_RFC_IS_DC_ALGO_DIG_DC_ONLY_IN_LPM           KAL_TRUE //MT6177m can't support RF DC compensation 

#define CL1_DET_DC_TONE_NUM                              (1)
#define CL1_DET_IQPCBDNL_TONE_NUM                        (2)

extern TX_DNL_CAL_SEQ_T cl1d_rfc_tx_lpf_gain_table;
extern TX_DNL_CAL_SEQ_T cl1d_rfc_tx_dnl_cal_seq_lb[MMRFC_TX_DNL_PGA_A_SEQ_NUM + MMRFC_TX_DNL_PGA_B_SEQ_NUM];
extern TX_DNL_CAL_SEQ_T cl1d_rfc_tx_dnl_cal_seq_mb[MMRFC_TX_DNL_PGA_A_SEQ_NUM + MMRFC_TX_DNL_PGA_B_SEQ_NUM];
extern TX_IQDC_CAL_SEQ_T cl1d_rfc_tx_pre_captun_seq_lb[CL1D_TX_PRE_CAPTUN_SEQ_TABLE_LENGTH];
extern TX_IQDC_CAL_SEQ_T cl1d_rfc_tx_pre_captun_seq_mb[CL1D_TX_PRE_CAPTUN_SEQ_TABLE_LENGTH];
extern TX_IQDC_CAL_SEQ_T cl1d_rfc_tx_fiiq_fdiq_index_lb[TX_IQ_COMP_PGA_SLICE_SET_NUM];
extern TX_IQDC_CAL_SEQ_T cl1d_rfc_tx_fiiq_fdiq_index_mb[TX_IQ_COMP_PGA_SLICE_SET_NUM];
extern TX_IQDC_CAL_SEQ_T cl1d_rfc_txfiiq_index_ABB_4dB_lb[TX_IQ_COMP_PGA_SLICE_SET_NUM];
extern TX_IQDC_CAL_SEQ_T cl1d_rfc_txfiiq_index_ABB_4dB_mb[TX_IQ_COMP_PGA_SLICE_SET_NUM];
extern TXFIIQDC_TTG_DC_artificial cl1d_rfc_pwronk_txfiiqdc_dc_i_cfg_lb[CL1D_RFC_TXDNL_CAL_DIM];
extern TXFIIQDC_TTG_DC_artificial cl1d_rfc_pwronk_txfiiqdc_dc_i_cfg_mb[CL1D_RFC_TXDNL_CAL_DIM];
extern TX_IQDC_CAL_SEQ_T cl1d_tx_phase_step_cal[1][CL1D_TX_PHASE_STEP_CAL_TABLE_LENGTH];

void MMPOC_CalItemInfo( MMRFC_RAT_E rat_type, kal_uint16 item, MMRFC_XL1_BAND_NUM_E band, kal_uint16 freq );
void MMPOC_CalItemEndInfo(  MMRFC_RAT_E rat_type, kal_uint16 item, MMRFC_XL1_BAND_NUM_E band);
kal_uint32 CL1D_Get_TX_CW_Table_By_Band(const MMRFC_XL1_BAND_NUM_E band);
void CL1D_RFC_TTG_CALC(const kal_uint32 freq /* in 1kHz */, MMRFC_XL1_BAND_NUM_E   curr_band, MMRF_DUP_MOD TRX_MODE, kal_uint8 TX_TTG_port);
kal_uint32 CL1D_RFC_CW817_DET_SPARES(kal_uint32 det_pga_cap_csel);
void CL1D_RFC_SET_RCF_BW (MMRFC_XL1_BAND_NUM_E band, kal_bool is_hrm, kal_bool is_tx_cca, MML1_RF_BSIMM_PORT_T port_sel);
//void CL1D_RFC_SET_EXTRA_LPF_CW(MMRFC_TX_RAT_CBW_CFG_E cbw_idx, kal_bool is_tdd_band, MML1_RF_BSIMM_PORT_T port_sel);
void CL1D_RFC_QDL_SetRxLoSlice_CW( MML1_RF_BSIMM_PORT_T port_sel);
void CL1D_RFC_QDL_ResetRxLoSlice_CW(MML1_RF_BSIMM_PORT_T port_sel);
kal_bool CL1D_RFC_IsQDLEnable(MML1_RF_BSIMM_PORT_T port_sel);
void CL1D_RFC_QDL_SetManTrig_CW(kal_bool is_trig_enable, MML1_RF_BSIMM_PORT_T port_sel);
MMRFC_XL1_BAND_DEF_E CL1D_RFC_TX_BandToHMLB(MMRFC_XL1_BAND_NUM_E rf_band);
kal_bool CL1D_RFC_BAND_CHECK_CAP_TUNING(MMRFC_XL1_BAND_NUM_E rf_band);
kal_bool CL1D_RFC_IIP2_CalBandCombinationCheck(MMRFC_RAT_E rx_poc_rat, MMRFC_XL1_BAND_NUM_E poc_rx_band, MMRFC_XL1_BAND_NUM_E poc_tx_band, kal_bool is_iip2_single_band, kal_bool is_iip2_ca_rx_band, kal_uint8 div);
void CL1D_RFC_SET_RF_CW_TX_RCF(MMRFC_XL1_BAND_NUM_E band, kal_int32  rcf_csel, kal_uint32 rcf_rsel, MML1_RF_BSIMM_PORT_T port_sel);
void CL1D_RFC_SET_RF_CW_TX_LPF_4_TXDNL(MMRFC_XL1_BAND_NUM_E band,  kal_bool is_abb_4dB, MML1_RF_BSIMM_PORT_T port_sel);
void CL1D_RFC_SET_RF_CW_TX_RCCAL1(MMRFC_XL1_BAND_NUM_E band, kal_uint32 rc_code, MML1_RF_BSIMM_PORT_T port_sel);
void CL1D_RFC_SET_LPF_RCF_SLICE(const MMRFC_LPF_RCF_SLICE_CTRL SLICE_CTRL, kal_uint8 TX_SLICE_CTL_port);
void CL1D_RFC_SET_LPF_OP_BIAS_01(kal_uint8 op1_compen_offset_gain0, kal_uint8 op2_bias_ctrl_gain0, kal_uint8 op1_bias_ctrl_gain0, kal_uint8 op2_slice_en_gain0, kal_uint8 op1_slice_en_gain0, kal_uint8 op2_bias_ctrl_gain1, kal_uint8 op1_bias_ctrl_gain1, kal_uint8 TX_LPF_OP_BIAS_port);
void CL1D_RFC_SET_LPF_OP_BIAS_23(kal_uint8 op2_bias_ctrl_gain2, kal_uint8 op1_bias_ctrl_gain2, kal_uint8 op2_bias_ctrl_gain3, kal_uint8 op1_bias_ctrl_gain3, kal_uint8 TX_LPF_OP_BIAS_port);
void CL1D_RFC_MANUAL_SET_TX_LPF_CW710(kal_uint32 lpf_rsel, kal_uint32 opib1, kal_uint32 opib2, kal_bool is_abb_4dB, MML1_RF_BSIMM_PORT_T port_sel);
void CL1D_RFC_MANUAL_SET_TX_LPF_CW710_4_LPF(kal_uint8 lpf_rsel, kal_uint32 opib1, kal_uint32 opib2, kal_uint8 c_mode, MML1_RF_BSIMM_PORT_T port_sel,kal_uint8 lpf_gain_lin);
kal_uint32 CL1D_RFC_TTG_BUF_LB_EN(MMRFC_XL1_BAND_NUM_E rf_band);
void CL1D_RFC_TTG_CTRL(const MMRFC_CTRL TTG_CTRL, kal_uint8 TX_TTG_CTL_port);
kal_uint32 CL1D_RFC_TTG_FREQ_CONFIG(kal_uint8 cbw_case_idx, kal_uint32 tone_idx, kal_uint32 center_freq);
void CL1D_RFC_DET_PCB_FREQ_CONFIG(kal_uint32 tone_num, kal_uint32 center_freq, kal_uint32* ttg_buf);
void CL1D_RFC_RX_IRR_TTG_Config(MMRFC_XL1_BAND_NUM_E current_poc_band, MMRFC_RX_RAT_CBW_CFG_E bw, kal_uint32* ttg_freq, kal_uint32* tone_pair, kal_uint32 center_freq);
void CL1D_RFC_SET_LO_CDCOC_TrigConfig(MMRFC_XL1_BAND_NUM_E curr_band, kal_uint8 TX_LO_DCOC_K_port );
void CL1D_RFC_SET_LO_CDCOC_TrigTime( kal_uint32 TRIG_CFG, kal_uint8 TX_LO_DCOC_K_port );
void CL1D_RFC_CDCOC_result_WB( kal_uint8 TX_WB_port, kal_uint32* det_coarse_dcoc_cw807, kal_uint32* det_coarse_dcoc_cw808 );
void CL1D_RFC_LO_result_WB( kal_uint8 TX_WB_port, MMRFC_XL1_BAND_NUM_E curr_band, kal_uint8* lo_ind_sw, kal_uint8* capcal_peak_cap, kal_uint8* in_bias_lpm, kal_uint8* in_bias_hpm);
void CL1D_RFC_SET_TX_GAIN(kal_uint32 DPD_M, kal_uint32 PGA_AB, kal_uint32 Gain_idx, kal_uint32 TX_Gain_port_sel, MMRFC_XL1_BAND_DEF_E HML_Band_idx);
void CL1D_RFC_SET_TX_GAIN_4_LPF(kal_uint32 DPD_M, kal_uint32 PGA_AB, kal_uint32 Gain_idx, kal_uint32 TX_Gain_port_sel, MMRFC_XL1_BAND_DEF_E HML_Band_idx);
void CL1D_RFC_SET_TX_GAIN_4_LO(kal_uint32 DPD_M, kal_uint32 PGA_AB, kal_uint32 Gain_idx, kal_uint32 TX_Gain_port_sel, MMRFC_XL1_BAND_DEF_E HML_Band_idx,kal_uint8 tx_mod_slice);
void CL1D_RFC_SET_RF_CAPCODE(kal_uint32 PGA_AB, kal_uint8 Cap, kal_uint8 Tx_cap_port_sel );
void CL1D_RFC_SET_RF_CAPCODE_COMBINE(kal_uint32 PGA_AB, kal_uint32 CAP_OPT, kal_uint32 Tx_cap_port_sel );
kal_uint8 CL1D_RFC_GET_DET_TIA_GAIN( kal_uint8 Gain_idx );
void CL1D_RFC_SET_DET_GAIN( kal_uint32 Gain_idx, MMRFC_TX_RAT_CBW_CFG_E det_cbw, kal_uint32 TX_DET_Gain_port_sel  );
void CL1D_RFC_SET_DET_GAIN_4_LPF( kal_uint32 Gain_idx, kal_uint16 det_csel , kal_uint32 TX_DET_Gain_port_sel );
void CL1D_RFC_SET_TX_LBPK(kal_uint32 LBPK_idx, MMRFC_XL1_BAND_NUM_E curr_band, kal_uint32 TX_Gain_idx, kal_uint32 TX_LBPK_port, kal_bool is_PA_ON,kal_bool is_DNL_K);
void CL1D_RFC_SET_TX_LBPK_LPF(kal_uint32 LBPK_idx, MMRFC_XL1_BAND_NUM_E curr_band, kal_uint32 TX_Gain_idx, kal_uint32 TX_LBPK_port, kal_bool is_PA_ON, kal_bool is_DNL_K);
void CL1D_RFC_SET_LPF_BW(MMRFC_XL1_BAND_NUM_E band, MMRFC_TX_RAT_CBW_CFG_E cbw, kal_bool is_tdd_band, kal_bool is_abb_4dB, MML1_RF_BSIMM_PORT_T port_sel);
void CL1D_RFC_TX_BW_CHANGE(MMRFC_XL1_BAND_NUM_E current_band, MMRFC_TX_RAT_CBW_CFG_E cbw_idx, kal_bool is_tdd_band, kal_bool is_abb_4dB, kal_bool is_hrm, MML1_RF_BSIMM_PORT_T port_sel);
void CL1D_RFC_TX_BW_CHANGE_FOR_TXDNL(MMRFC_XL1_BAND_NUM_E current_band, MMRFC_TX_RAT_CBW_CFG_E cbw_idx, kal_bool is_tdd_band, kal_bool is_abb_4dB, kal_bool is_hrm, MML1_RF_BSIMM_PORT_T port_sel);
void CL1D_RFC_CW1_ModeSetting(const kal_uint32 rf_mode, const kal_uint32 trx, const kal_uint32 rat, const kal_uint32 ccIdx, const kal_uint32 srxIdx, const kal_uint32 std, MML1_RF_BSIMM_PORT_T CW1port);
void CL1D_RFC_RxBwSettingCW(MMRFC_RX_RAT_CBW_CFG_E bw, MMRFC_PATH_BITMAP_E path_sel, MML1_RF_BSIMM_PORT_T port_sel);
void CL1D_RFC_RxPowerModeCW(MMRFC_RX_RAT_CBW_CFG_E bw, MMRFC_POWER_MODE_E power_mode, MMRFC_PATH_BITMAP_E path_sel, MML1_RF_BSIMM_PORT_T port_sel);
void CL1D_RFC_SetRxCurrABBCW(MMRFC_RX_RAT_CBW_CFG_E bw, MMRFC_POWER_MODE_E power_mode, MMRFC_PATH_BITMAP_E path_sel, MML1_RF_BSIMM_PORT_T port_sel);
void CL1D_RFC_RxDcocCW(MMRFC_PATH_BITMAP_E path_sel , kal_int16 dc_i , kal_int16 dc_q , MMRFC_ANT_BITMAP_E ant_idx, MML1_RF_BSIMM_PORT_T port_sel);
void CL1D_RFC_IIP2C_RG_BIAS_CW_SET(MMRFC_PATH_BITMAP_E path_sel, const MML1_RX_IIP2C_GATE_BIAS_T rxp, const MML1_RX_IIP2C_GATE_BIAS_T rxd, MML1_RF_BSIMM_PORT_T port_sel);
void CL1D_RFC_RF_CW_Init(MMRFC_RF_CW_BACKUP_T* cw_backup);
void CL1D_RFC_RF_CW_Restore(const MMRFC_RF_CW_BACKUP_T* cw_backup);
void CL1D_RFC_TX_CW_Reset(MMRFC_XL1_BAND_NUM_E curr_band, MML1_RF_BSIMM_PORT_T rfic_port);
void CL1D_RFC_LO_DET_Cal_Config(MMRFC_XL1_BAND_NUM_E poc_band, MML1_RF_BSIMM_PORT_T port_sel,kal_uint8*lo_cdcoc_cal_loop_end);
void CL1D_RFC_PRE_CONFIG(MMRFC_XL1_BAND_SUPPORT_CAPABILITY_T* band_cap_p,MMRFC_TX_CAL_CFG_T* tx_cfg_per_route_p);
void CL1D_RFC_PA_CTRL(MMRFC_XL1_BAND_SUPPORT_CAPABILITY_T* band_cap_p, MMRFC_MIPI_DATA_CTRL_E mipi_ctrl);
void CL1D_RFC_Set_IOTXOFF_backup(kal_uint8 port_sel, kal_uint32* backup_cw707_data);
void CL1D_RFC_Set_IOTXOFF_restore(kal_uint8 port_sel, kal_uint32* backup_cw707_data);
void CL1D_RFC_Set_IOTX_Off(kal_uint8 port_sel, kal_uint32 txio_cw707_data);
void CL1D_RFC_Set_IOTX_On(kal_uint8 port_sel, kal_uint32 txio_cw707_data);
void CL1D_RFC_Get_CW1_Params(kal_uint32* p_cw1_rat, kal_uint32* p_cw1_std);
void CL1D_RFC_RX_IIP2_Config(MMRFC_RX_RAT_CBW_CFG_E* rx_iip2_bw, MMRFC_TX_RAT_CBW_CFG_E* tx_iip2_bw, kal_uint8* pga_gain_idx_iip2, MMRFC_TXDFE_TTG_CTRL_T* txdfe_ttg_ctrl);
kal_uint32 CL1D_RFC_Get_Lbpk_Atten_By_CW_Reg(MML1_RF_BSIMM_PORT_T port_sel);
void CL1D_RFC_RxModeGainPresetCW(kal_uint16 irr_mode_idx, MMRFC_RAT_E rx_poc_rat, MMRFC_RX_CW_PARAM_T* rx_cw_param_p, MMRFC_RX_RAT_CBW_CFG_E cbw, MMRFC_PATH_BITMAP_E path_sel, MML1_RF_BSIMM_PORT_T rfic);
kal_bool CL1D_RFC_RxDcocDefaultCheck(kal_uint8 div);
void CL1D_RFC_RXDC_Setting_Config(kal_uint32* rx_dc_hpm_gain_dim, kal_uint32* rx_dc_lpm_gain_dim, MMRFC_POWER_MODE_E* dc_mode_dim);
void CL1D_RFC_RXDC_Gain_Config(MMRFC_POWER_MODE_E dc_mode_idx, kal_uint32 rx_gain_idx, RXIF_GAIN_E* pga_gain_p, RX_LNA_GAIN_E* lna_gain_p, RX_TIA_GAIN_E* tia_gain_p);
void CL1D_RFC_RxIRRGainChange(kal_uint16 irr_mode_idx, MMRFC_RAT_E rx_poc_rat, kal_uint32 rx_bw_idx, MMRFC_RX_RAT_CBW_CFG_E cbw, MMRFC_PATH_BITMAP_E path_sel, MMRFC_RX_CW_PARAM_T *rx_cw_param, MML1_RF_BSIMM_PORT_T rfic);
void CL1D_RFC_RxIRRDcocComp(kal_uint16 irr_mode_idx, MMRFC_RAT_E rx_poc_rat, kal_uint8 dc_comp_idx,kal_uint32 rx_bw_idx, MMRFC_PATH_BITMAP_E path_sel, MML1_RF_BSIMM_PORT_T rfic, kal_uint32 bypass_dc_comp);
void CL1D_RFC_RXIRR_Setting_Config(kal_uint8* rx_irr_bw_dim, MMRFC_RX_RAT_CBW_CFG_E* rx_irr_bw_ptr, MMRFC_RXIRR_CAL_MODE_E* irr_mode_dim);
void CL1D_RFC_RXIRR_Gain_Config(MMRFC_RXIRR_CAL_MODE_E irr_mode_idx, kal_uint32 rx_gain_idx, RXIF_GAIN_E* pga_gain_p, RX_LNA_GAIN_E* lna_gain_p, RX_TIA_GAIN_E* tia_gain_p);
void CL1D_RFC_RxIip2CheckSelection(kal_uint32 iip2_noise_ms_result_p, kal_uint32 iip2_noise_ms_result_d, kal_uint16 *ant_sel, kal_bool *iip2_cal_en);
void CL1D_RFC_RXIIP2_Gain_Config(RXIF_GAIN_E* pga_gain_p, RX_LNA_GAIN_E* lna_gain_p, RX_TIA_GAIN_E* tia_gain_p);
void CL1D_RFC_RxGainCW(MMRFC_RX_CW_PARAM_T* rx_cw_param, MMRFC_RXIRR_CAL_MODE_E power_mode_idx, kal_uint32 rx_gain_idx, MMRFC_PATH_BITMAP_E path_sel, MML1_RF_BSIMM_PORT_T rfic);
void CL1D_RFC_RF_PATH_REMAP(MMRFC_PATH_BITMAP_E* path_sel, kal_uint32 srx_path);

#endif /* _MML1_RF_CALPOC_RF_IF_H_*/
