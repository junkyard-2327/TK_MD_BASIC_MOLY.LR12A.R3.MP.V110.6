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
 *   l1d_mmrf_interface.h
 *
 * Project:
 * --------
 *   TK6291
 *
 * Description:
 * ------------
 *   L1D interface to Multi-Mode Multi-RAT RF Central Control
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
 *----------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

#ifndef  _L1D_MMRF_INTERFACE_H_
#define  _L1D_MMRF_INTERFACE_H_

/*===============================================================================*/

#include "kal_general_types.h"

#include "mml1_rf_interface.h"
#include "mml1_rf_cal_interface.h"
#include "mml1_rf_calpocif.h"

#include "l1cal.h"

/*===============================================================================*/

#define GSM_MAX_MIPI_PAON_CW_NUMBER_PER_BAND  (48)  //24*2
#define GSM_MAX_MIPI_PAOFF_CW_NUMBER_PER_BAND (24)  //12*2
#if defined(MT6177M_2G_RF)
/*MT6173*/ /* RF CW table type for the action to turn on TX PA in low gain mode */
/*MT6173*/ typedef struct
/*MT6173*/ {
/*MT6173*/    kal_uint32 data1[GSM_MAX_MIPI_PAON_CW_NUMBER_PER_BAND];
/*MT6173*/ 
/*MT6173*/ }GL1D_RF_CAL_TXPA_ON_LOWGAIN_BUFFER_T;
/*MT6173*/ 
/*MT6173*/ /* RF CW table type for the action to turn on TX PA in low gain mode */
/*MT6173*/ typedef struct
/*MT6173*/ {
/*MT6173*/    kal_uint32 data1[GSM_MAX_MIPI_PAOFF_CW_NUMBER_PER_BAND];
/*MT6173*/ 
/*MT6173*/ }GL1D_RF_CAL_TXPA_OFF_BUFFER_T;
/*MT6173*/ 
/*MT6173*/ /** RF CW table type for the BPI ctrl to turn on TX PA */
/*MT6173*/ typedef struct
/*MT6173*/ {
/*MT6173*/    kal_uint32 pt0_data_l; ///< bpi[31:0]
/*MT6173*/    kal_uint32 pt0_data_h; ///< bpi[47:32]
/*MT6173*/    kal_uint32 pt1_data_l; ///< bpi[31:0]
/*MT6173*/    kal_uint32 pt1_data_h; ///< bpi[47:32]
/*MT6173*/    kal_uint32 pt2_data_l; ///< bpi[31:0]
/*MT6173*/    kal_uint32 pt2_data_h; ///< bpi[47:32]
/*MT6173*/ 
/*MT6173*/ }GL1D_RF_CAL_TX_ON_BPI_CTRL_BUFFER_T;
/*MT6173*/ 
/*MT6173*/ /** RF CW table type for the BPI ctrl to turn off TX PA */
/*MT6173*/ typedef struct
/*MT6173*/ {
/*MT6173*/    kal_uint32 pt3_data_l; ///< bpi[31:0]
/*MT6173*/    kal_uint32 pt3_data_h; ///< bpi[47:32]
/*MT6173*/ 
/*MT6173*/ }GL1D_RF_CAL_TX_OFF_BPI_CTRL_BUFFER_T;
/*MT6173*/ /* MMRFC Related Setting */
/*MT6173*/ /* RF CW table type for the action to set RF STX settings, including DCO/NMMD */
/*MT6173*/ typedef struct
/*MT6173*/ {
/*MT6173*/    RF_CW_T stxCw511;   /* CW511: STX Band                        */
/*MT6173*/    RF_CW_T stxCw529;   /* CW529: STX Codetype                    */
/*MT6173*/    RF_CW_T stxCw549;   /* CW549: STX_NMMD                        */
/*MT6173*/    RF_CW_T stxCw550;   /* CW550: STX_NMMD                        */
/*MT6173*/    RF_CW_T stxCw551;   /* CW551: STX_NMMD1                       */
/*MT6173*/    RF_CW_T stxCw552;   /* CW552: STX_NMMD1                       */
/*MT6173*/    RF_CW_T stxCw582;   /* CW582: STX NFRAC offset           */
/*MT6173*/ }GL1D_RF_CAL_RF_STX_CONFIG_BUFFER_T;
/*MT6173*/ 
/*MT6173*/ /* RF CW table type for the action to set RF TX output modulator mode (HRM, NHRM),  */
/*MT6173*/ /* TX o/p port, TX balun cap., TX PGA driver */
/*MT6173*/ typedef struct
/*MT6173*/ {
/*MT6173*/    RF_CW_T txCw707;   /* CW707: TX Port                         */
/*MT6173*/    RF_CW_T txCw786;   /* CW786: Set TX LO FE Comp.              */
/*MT6173*/    RF_CW_T txCw794;   /* CW794: Set TX Balun Result, from PGA Cap Tuning */
/*MT6173*/    RF_CW_T txCw795;   /* CW795: Set TX Balun Cap 1, from PGA Cap Tuning */
/*MT6173*/    RF_CW_T txCw796;   /* CW796: Set TX Balun Cap 2, from PGA Cap Tuning */
/*MT6173*/    RF_CW_T txCw814;   /* CW814: Set LO supply settings */
/*MT6173*/    RF_CW_T txCw712;   /* CW712: Set Modulator bias setting */
/*MT6173*/    RF_CW_T txCw802;   /* CW802: Set LO cal inputs */
/*MT6173*/    RF_CW_T txCw803;   /* CW803: Set LO cal inputs */
/*MT6173*/    RF_CW_T txCw816;   /* CW816: Set TTG buffer gain*/
/*MT6173*/    RF_CW_T txCw818;   /* CW818: Set Detector setting */
/*MT6173*/ }GL1D_RF_CAL_RF_TX_CONFIG_BUFFER_T;
/*MT6173*/ 
/*MT6173*/ /* RF CW table type for the action to set RF TX PGA driver bias current for Linear mode */
/*MT6173*/ typedef struct
/*MT6173*/ {
/*MT6173*/    RF_CW_T txGainCw797;   /* CW797: Set TX Drv bias for Linear Mode */
/*MT6173*/    RF_CW_T txGainCw798;   /* CW798: Set TX DRV bias temp coefficient*/
/*MT6173*/ 
/*MT6173*/ }GL1D_RF_CAL_RF_TX_DRV_BIAS_LIN_CONFIG_BUFFER_T;
/*MT6173*/ 
/*MT6173*/ /** RF CW table type for the action to set RF TX PGA driver bias current for DPD mode */
/*MT6173*/ typedef struct
/*MT6173*/ {
/*MT6173*/ 	RF_CW_T txGainCw799;
/*MT6173*/ 	
/*MT6173*/ }GL1D_RF_CAL_RF_TX_DRV_BIAS_DPD_CONFIG_BUFFER_T;
#elif defined(MT6177L_2G_RF)
/*MT6177L*/ /* RF CW table type for the action to set RF TX output modulator mode (HRM, NHRM),  */
/*MT6177L*/ /* TX o/p port, TX balun cap., TX PGA driver */
/*MT6177L*/ typedef struct
/*MT6177L*/ {
/*MT6177L*/    RF_CW_T txCw707;   /* CW707: TX Port                         */
/*MT6177L*/    RF_CW_T txCw786;   /* CW786: Set TX LO FE Comp.              */
/*MT6177L*/    RF_CW_T txCw794;   /* CW794: Set TX Balun Result, from PGA Cap Tuning */
/*MT6177L*/    RF_CW_T txCw795;   /* CW795: Set TX Balun Cap 1, from PGA Cap Tuning */
/*MT6177L*/    RF_CW_T txCw796;   /* CW796: Set TX Balun Cap 2, from PGA Cap Tuning */
/*MT6177L*/    RF_CW_T txCw814;   /* CW814: Set LO supply settings */
/*MT6177L*/    RF_CW_T txCw712;   /* CW712: Set Modulator bias setting */
/*MT6177L*/    RF_CW_T txCw802;   /* CW802: Set LO cal inputs */
/*MT6177L*/    RF_CW_T txCw803;   /* CW803: Set LO cal inputs */
/*MT6177L*/    RF_CW_T txCw714;   /* CW714: Set LO  */
/*MT6177L*/ // RF_CW_T txCw787;   /* CW787: Write LPF CSEL value */
/*MT6177L*/ // RF_CW_T txCw793;   /* CW793: Write RCF CEL & RSEL for desired BW */
/*MT6177L*/ // RF_CW_T txCw710;   /* CW710: Set BW3_EN & LPF_RSEL */
/*MT6177L*/    RF_CW_T txCw816;   /* CW816: Set TTG buffer gain*/
/*MT6177L*/    RF_CW_T txCw818;   /* CW818: Set Detector setting */
/*MT6177L*/    RF_CW_T txCw819;   /* CW819: Set LPF VCM controls setting(High Power UE) */
/*MT6177L*/ }GL1D_RF_CAL_RF_TX_CONFIG_BUFFER_T;
/*MT6177L*/
#endif
void L1D_MMRF_PowerOnCalibration(void);
void L1D_MMRF_L1CoreSHMDataInit(void);
void L1D_MMRF_L1coreSHMUpdate2Local(void);
kal_uint32 L1D_MMRF_UpdateRuntimeHandler(kal_uint32 nvram_lid, kal_uint32 record_idx, kal_uint8 *data, kal_uint16 nvram_size);

#if defined(__F32_XOSC_REMOVAL_SUPPORT__)
/* Update CloadFreqOffset before share this value to MMRF */
int L1D_RF_UpdateCLoadFreqOffset( int freq_offset );
#endif

/* SHM reset function*/
void L1_MULTI_RESET_AFC_SHM(void);

//API for 2G MMRFC
#if defined(MT6176_2G_RF)
kal_uint16 L1D_RF_Get_RFC_State(void);
kal_bool L1D_RF_DET_Path_Query(MMRFC_XL1_BAND_NUM_E band, MMRF_DET_IO_E tx_det_io);
void L1D_RF_GET_TX_DET_ANT(MMRFC_XL1_BAND_NUM_E band, kal_uint32 route_idx, kal_bool is_fw_path);
void L1D_RF_POC_CDCOC_Result_WB( kal_uint8 TX_WB_port, MMRFC_XL1_BAND_NUM_E band, kal_uint32* det_coarse_dcoc_cw807, kal_uint32* det_coarse_dcoc_cw808 );
#endif
kal_uint16 L1D_RF_Cal_Poc_NVRAM_Lid_Total_Num_InUse( void );
kal_uint16 L1D_RF_Get_Rf_Self_Cal_Result_Size(kal_uint16 lid_index);
kal_uint16 L1D_RF_Get_Rf_Self_Cal_Result(kal_uint16 lid_index, kal_uint16 lid_size, kal_uint8 *dst);
kal_uint16 L1D_RF_Set_Rf_Self_Cal_Result(kal_uint16 lid_index, kal_uint16 lid_size, kal_uint8 *src);
kal_uint16 L1D_RF_Get_Rf_Self_Cal_String( kal_uint16 lid_index, kal_char *string_dst );
void L1D_RF_UpdatePocResultToSHM(MMRFC_XL1_BAND_NUM_E band, kal_uint8  band_idx, kal_uint8  subband_idx, kal_uint8  cal_type, MMRFC_GSM_RESULT_PER_BAND_T* cal_result);
kal_uint32 L1D_RF_DATA_BUFFER_LENGTH_RETURN(MMPOC_BUFFER_IDX_E buf_type);
kal_uint32* L1D_RF_DATA_BUFFER_PTR_RETURN(MMPOC_BUFFER_IDX_E  buf_type);
kal_uint32 L1D_RF_DATA_BUFFER_MIPI_LENGTH_RETURN(kal_bool is_mipi_on, kal_uint8 curr_band_idx);
MML1_RF_BSIMM_PORT_T L1D_RF_BUF_DATA_PORT_TABLE_RETURN(MMPOC_BUFFER_IDX_E bufId);
#if (defined(MT6177L_2G_RF) || defined(MT6177M_2G_RF))
void L1D_RF_TX_PARAM_COMP(RF_COMP_INDEX_E comp_idx,
                           kal_uint32 tx_route_idx,
                           MMRFC_TX_RAT_CBW_CFG_E cbw_cfg,
                           MMRFC_XL1_BAND_NUM_E band,
                           kal_uint32 subband_idx);

void L1D_RF_GetDetBwConfig(MMRFC_DET_CAL_ITEM_CFG_E detk_item, MMRFC_TX_RAT_CBW_CFG_E* start_cbw, MMRFC_TX_RAT_CBW_CFG_E* end_cbw, kal_uint8* tone_num);
void L1D_RF_GetTxBwConfig(MMRFC_TX_CAL_ITEM_CFG_E txk_item, MMRFC_TX_RAT_CBW_CFG_E* start_cbw, MMRFC_TX_RAT_CBW_CFG_E* end_cbw);
   #if defined(MT6177M_2G_RF)
void L1D_MMRF_RFCAL_STX_CONFIG_BUFFER(MMRFC_XL1_BAND_SUPPORT_CAPABILITY_T* band_cap_p, 
                                                             kal_uint8* length, 
                                                             GL1D_RF_CAL_RF_STX_CONFIG_BUFFER_T* buffer,kal_uint8 buffer_length);
void L1D_MMRF_RFCAL_TX_CONFIG_BUFFER(MMRFC_XL1_BAND_SUPPORT_CAPABILITY_T* band_cap_p, 
                                                           kal_uint8* length, 
                                                           GL1D_RF_CAL_RF_TX_CONFIG_BUFFER_T* buffer,kal_uint8 buffer_length);
void L1D_MMRF_RFCAL_LIN_CONFIG_BUFFER(MMRFC_XL1_BAND_SUPPORT_CAPABILITY_T* band_cap_p, 
                                                            kal_uint8* length, 
                                                            GL1D_RF_CAL_RF_TX_DRV_BIAS_LIN_CONFIG_BUFFER_T* buffer,kal_uint8 buffer_length);
void L1D_MMRF_RFCAL_DPD_CONFIG_BUFFER(MMRFC_XL1_BAND_SUPPORT_CAPABILITY_T* band_cap_p, 
                                                             kal_uint8* length, 
                                                             GL1D_RF_CAL_RF_TX_DRV_BIAS_DPD_CONFIG_BUFFER_T* buffer,kal_uint8 buffer_length);
/*MIPI DATA ON OFF */
void L1D_MMRF_RFCAL_TX_PA_ON_LOWGAIN_CONFIG_BUFFER(MMRFC_XL1_BAND_SUPPORT_CAPABILITY_T* band_cap_p, 
                                                                                    kal_uint8* length, 
                                                                                    GL1D_RF_CAL_TXPA_ON_LOWGAIN_BUFFER_T* buffer,
                                                                                    kal_uint8 buffer_length,																					
                                                                                    MML1_RF_BSIMM_PORT_T* port_sel);
void L1D_MMRF_RFCAL_TX_PA_OFF_CONFIG_BUFFER(MMRFC_XL1_BAND_SUPPORT_CAPABILITY_T* band_cap_p, 
                                                                       kal_uint8* length, 
                                                                       GL1D_RF_CAL_TXPA_OFF_BUFFER_T* buffer,
                                                                       kal_uint8 buffer_length,																	   
                                                                       MML1_RF_BSIMM_PORT_T* port_sel);
/*BPI DATA ON OFF */
void L1D_MMRF_RFCAL_TX_ON_BPI_CTRL_BUFFER_TYPE(MMRFC_XL1_BAND_SUPPORT_CAPABILITY_T* band_cap_p, 
                                                                                    kal_uint8* length, 
                                                                                    GL1D_RF_CAL_TX_ON_BPI_CTRL_BUFFER_T* buffer,
                                                                                    kal_uint8 buffer_length,																					
                                                                                    MML1_RF_BSIMM_PORT_T* port_sel);

void L1D_MMRF_RFCAL_TX_OFF_BPI_CTRL_BUFFER_TYPE(MMRFC_XL1_BAND_SUPPORT_CAPABILITY_T* band_cap_p, 
                                                                                    kal_uint8* length, 
                                                                                    GL1D_RF_CAL_TX_OFF_BPI_CTRL_BUFFER_T* buffer,
                                                                                    kal_uint8 buffer_length,																					
                                                                                    MML1_RF_BSIMM_PORT_T* port_sel);															 
   #else//defined(MT6177L_2G_RF)
void L1D_MMRF_RFCAL_STX_CONFIG_BUFFER(MMRFC_XL1_BAND_SUPPORT_CAPABILITY_T* band_cap_p, 
                                                             kal_uint8* length, 
                                                             MMRFC_STX_CONFIG_BUFFER_T* buffer);
void L1D_MMRF_RFCAL_TX_CONFIG_BUFFER(MMRFC_XL1_BAND_SUPPORT_CAPABILITY_T* band_cap_p, 
                                                           kal_uint8* length, 
                                                           GL1D_RF_CAL_RF_TX_CONFIG_BUFFER_T* buffer);
void L1D_MMRF_RFCAL_LIN_CONFIG_BUFFER(MMRFC_XL1_BAND_SUPPORT_CAPABILITY_T* band_cap_p, 
                                                            kal_uint8* length, 
                                                            MMRFC_TX_DRV_BIAS_LIN_CONFIG_BUFFER_T* buffer);
void L1D_MMRF_RFCAL_DPD_CONFIG_BUFFER(MMRFC_XL1_BAND_SUPPORT_CAPABILITY_T* band_cap_p, 
                                                             kal_uint8* length, 
                                                             MMRFC_TX_DRV_BIAS_DPD_CONFIG_BUFFER_T* buffer);

/*MIPI DATA ON OFF */
void L1D_MMRF_RFCAL_TX_PA_ON_LOWGAIN_CONFIG_BUFFER(MMRFC_XL1_BAND_SUPPORT_CAPABILITY_T* band_cap_p, 
                                                                                    kal_uint8* length, 
                                                                                    MMRFC_TXPA_ON_LOWGAIN_BUFFER_T* buffer, 
                                                                                    MML1_RF_BSIMM_PORT_T* port_sel);
void L1D_MMRF_RFCAL_TX_PA_OFF_CONFIG_BUFFER(MMRFC_XL1_BAND_SUPPORT_CAPABILITY_T* band_cap_p, 
                                                                       kal_uint8* length, 
                                                                       MMRFC_TXPA_OFF_BUFFER_T* buffer, 
                                                                       MML1_RF_BSIMM_PORT_T* port_sel);
/*BPI DATA ON OFF */
void L1D_MMRF_RFCAL_TX_ON_BPI_CTRL_BUFFER_TYPE(MMRFC_XL1_BAND_SUPPORT_CAPABILITY_T* band_cap_p, 
                                                                                    kal_uint8* length, 
                                                                                    MMRFC_TX_ON_BPI_CTRL_BUFFER_T* buffer, 
                                                                                    MML1_RF_BSIMM_PORT_T* port_sel);

void L1D_MMRF_RFCAL_TX_OFF_BPI_CTRL_BUFFER_TYPE(MMRFC_XL1_BAND_SUPPORT_CAPABILITY_T* band_cap_p, 
                                                                                    kal_uint8* length, 
                                                                                    MMRFC_TX_OFF_BPI_CTRL_BUFFER_T* buffer, 
                                                                                    MML1_RF_BSIMM_PORT_T* port_sel);
kal_uint32 L1D_RF_GET_LPF_CSEL_VALUE(kal_uint32 tx_self_comp_index);

kal_int32 L1D_RF_GET_RCF_CSEL_VALUE(kal_uint32 route_index);

   #endif
void L1D_RF_MMPOC_GetTxCfg(MMRFC_XL1_BAND_NUM_E band, MMRFC_TX_ROUTE_CFG_T* tx_cfg);
/*Write Back result for CDOC */
void GL1D_RF_CAL_DETCDCOC_RESULT_WRITE_BACK(MMRFC_XL1_BAND_NUM_E band,
                                            kal_uint32 det_coarse_dcoc_cw807, 
                                            kal_uint32 det_coarse_dcoc_cw808);
/*Write Back result for LO */
void GL1D_RF_CAL_TXLO_RESULT_WRITE_BACK(kal_uint32 route_idx,
                                        MMRFC_XL1_BAND_NUM_E band,
                                        kal_uint32 subband_idx,
                                        kal_uint8  ind_sw, 
                                        kal_uint8  capcal_peak_cap, 
                                        kal_uint8  in_bias_lpm, 
                                        kal_uint8  in_bias_hpm);
/*Write Back result for LPF and RCF */
void GL1D_RF_CAL_TXRC_RESULT_WRITE_BACK(MMRFC_XL1_BAND_NUM_E band,
                                        MMRFC_LPF_RCF_CAL_TYPE_E lpf_rcf_select,
                                        kal_int16 tx_rc_calgo_result);

/*Write Back result for DET DC */
void GL1D_RF_CAL_DETDC_RESULT_WRITE_BACK(MMRFC_XL1_BAND_NUM_E band,
                                         MMRFC_DET_G_IDX gain_idx,
                                         kal_uint32 recal,
                                         MMRFC_DET_DC_RESULT_T* tx_det_dc_calgo_result);
/*Write Back result for Pre-Cap and cap tunning */
void GL1D_RF_CAL_TXCAP_RESULT_WRITE_BACK(kal_uint32 route_idx,
                                         MMRFC_XL1_BAND_NUM_E band,
                                         kal_uint32 subband_idx,
                                         kal_uint8  pga_ab,
                                         kal_bool   is_pre_cap_tuning,
                                         kal_uint8  CAP_OPT_A,
                                         kal_uint8  CAP_OPT_B);

/* Write back results after calibration of TX DC */
void GL1D_RF_CAL_TXDC_RESULT_WRITE_BACK(MMRFC_XL1_BAND_NUM_E band,
                                        MMRFC_TX_RAT_CBW_CFG_E cbw_case_idx,
                                        kal_uint32 pwr_mode,
                                        kal_uint32 tx_pga_slice,
                                        kal_uint32 recal,
                                        MMRFC_TX_IQDC_RESULT_T* tx_iqdc_calgo_result);

void GL1D_RF_CAL_TXFIIQ_RESULT_WRITE_BACK(MMRFC_XL1_BAND_NUM_E band,
                                          MMRFC_TX_RAT_CBW_CFG_E cbw_case_idx,
                                          kal_uint32 pwr_mode,
                                          kal_uint32 tx_pga_slice,
                                          kal_uint32 recal,
                                          MMRFC_TX_IQDC_RESULT_T* tx_iqdc_calgo_result);

void GL1D_RF_CAL_TXDNL_RESULT_WRITE_BACK(MMRFC_XL1_BAND_NUM_E band,
                                         kal_uint32 tx_gain_idx,
                                         kal_uint8  tx_21a_index,
                                         kal_int32  tx_dnl_calgo_result0,
                                         kal_int32  tx_dnl_calgo_result1);

void GL1D_RF_CAL_DETIQDNL_RESULT_WRITE_BACK(MMRFC_XL1_BAND_NUM_E band,
                                            MMRFC_DET_TIA_COMP_INDEX_E fe_gain_idx,
                                            MMRFC_DET_G_IDX gain_idx,
                                            kal_uint32 recal,
                                            MMRFC_DET_IQDNL_RESULT_T* tx_det_iqdnl_calgo_result);
void GL1D_RF_CAL_DETFDPCB_RESULT_WRITE_BACK(MMRFC_XL1_BAND_NUM_E band,
                                            MMRFC_DET_TIA_COMP_INDEX_E fe_gain_idx,
                                            MMRFC_TX_RAT_CBW_CFG_E cbw_case_idx,
                                            kal_uint32 recal,
                                            MMRFC_DET_EQLPF_CFG_T* tx_det_pcb_calgo_result);


//DET COMP
void GL1D_RFC_DET_FIIQ_COMP(kal_uint32 route_idx,
                            MMRFC_DETDFE_TIA_GAIN_IDX_E fe_gain,
                            MMRFC_DET_FIIQ_COMP_T* p);

void GL1D_RFC_DET_DC_COMP(kal_uint32 route_idx, kal_uint32 det_gain_step, MMRFC_DET_DC_COMP_T* p);

void GL1D_RFC_DET_FDPCB_COMP(kal_uint32 route_idx,
                             MMRFC_DETDFE_TIA_GAIN_IDX_E fe_gain,
                             MMRFC_TX_RAT_CBW_CFG_E cbw_case_idx,
                             MMRFC_DET_EQLPF_CFG_T* p);


#else/*legacy chips 6176,MT6179*/
void L1D_RF_TX_PARAM_COMP(RF_COMP_INDEX_E comp_idx, MMRFC_TX_RAT_CBW_CFG_E cbw_cfg, kal_uint8 curr_band_idx, MMRFC_GSM_RESULT_PER_BAND_T* gsm_result_per_band);
void L1D_RF_GetDetBwConfig(MMRFC_DET_CAL_ITEM_CFG_E detk_item, MMRFC_TX_RAT_CBW_CFG_E* start_cbw, MMRFC_TX_RAT_CBW_CFG_E* end_cbw, kal_uint8* tone_num);
void L1D_RF_GetTxBwConfig(MMRFC_TX_CAL_ITEM_CFG_E txk_item, MMRFC_TX_RAT_CBW_CFG_E* start_cbw, MMRFC_TX_RAT_CBW_CFG_E* end_cbw);
void L1D_MMRF_RFCAL_STX_CONFIG_BUFFER(MMRFC_XL1_BAND_SUPPORT_CAPABILITY_T* band_cap_p, 
                                                             kal_uint8 band_index, 
                                                             kal_uint8* length, 
                                                             MMRFC_STX_CONFIG_BUFFER_T* buffer);
void L1D_MMRF_RFCAL_TX_CONFIG_BUFFER(MMRFC_XL1_BAND_SUPPORT_CAPABILITY_T* band_cap_p, 
                                                           kal_uint8 band_index, 
                                                           kal_uint8* length, 
                                                           MMRFC_TX_CONFIG_BUFFER_T* buffer);
void L1D_MMRF_RFCAL_LIN_CONFIG_BUFFER(MMRFC_XL1_BAND_SUPPORT_CAPABILITY_T* band_cap_p, 
                                                            kal_uint8 band_index, 
                                                            kal_uint8* length, 
                                                            MMRFC_TX_DRV_BIAS_LIN_CONFIG_BUFFER_T* buffer);
void L1D_MMRF_RFCAL_DPD_CONFIG_BUFFER(MMRFC_XL1_BAND_SUPPORT_CAPABILITY_T* band_cap_p, 
                                                             kal_uint8 band_index, 
                                                             kal_uint8* length, 
                                                             MMRFC_TX_DRV_BIAS_DPD_CONFIG_BUFFER_T* buffer);
void L1D_MMRF_RFCAL_TX_PA_ON_LOWGAIN_CONFIG_BUFFER(MMRFC_XL1_BAND_SUPPORT_CAPABILITY_T* band_cap_p, 
                                                                                    kal_uint8 band_index, 
                                                                                    kal_uint8* length, 
                                                                                    MMRFC_TXPA_ON_LOWGAIN_BUFFER_T* buffer, 
                                                                                    MML1_RF_BSIMM_PORT_T* port_sel);
void L1D_MMRF_RFCAL_TX_PA_OFF_CONFIG_BUFFER(MMRFC_XL1_BAND_SUPPORT_CAPABILITY_T* band_cap_p, 
                                                                       kal_uint8 band_index, 
                                                                       kal_uint8* length, 
                                                                       MMRFC_TXPA_OFF_BUFFER_T* buffer, 
                                                                       MML1_RF_BSIMM_PORT_T* port_sel);
void L1D_RF_MMPOC_GetTxCfg(MMRFC_XL1_BAND_NUM_E band, MMRFC_TX_ROUTE_CFG_T* tx_cfg);
#endif

#ifdef __TAS_SUPPORT__
kal_bool   L1D_RF_TAS_Support(void);
void       L1D_RF_Force_TAS(kal_bool force_tas_enable, kal_uint8 tas_idx);
kal_uint16 L1D_IsQueryingTasStateInfoSupported( void );
kal_uint16 L1D_QueryTasVersion( void );
kal_uint16 L1D_GetTasStateConfigBandNum( void );
void       L1D_GetTasStateConfig(kal_uint16 buf_length, kal_uint16* band_list, kal_uint16* state_limit, kal_uint16* tas_state );
#else
#define    L1D_RF_TAS_Support                    NULL
#define    L1D_RF_Force_TAS                      NULL
#define    L1D_IsQueryingTasStateInfoSupported   NULL
#define    L1D_QueryTasVersion                   NULL
#define    L1D_GetTasStateConfigBandNum          NULL
#define    L1D_GetTasStateConfig                 NULL
#endif
typedef enum
{
   GL1D_LTE_DET_CAL = 0,
   GL1D_GSM_TX_CAL  = 1
} GL1D_POC_STATE_E;

typedef struct
{
   kal_uint16 mipi_data_start;
   kal_uint16 mipi_data_number;
}GL1D_RF_CAL_MIPI_DATA_T;

extern kal_uint32*             grfcalPocBufferTable              [/*MMPOC_BUFFER_TYPE_NUM_OF*/];
extern kal_uint32              grfcalPocBufferSizeTable          [/*MMPOC_BUFFER_TYPE_NUM_OF*/];
extern MML1_RF_BSIMM_PORT_T    grfcalPocBufferDataPortSelTable   [/*MMPOC_BUFFER_TYPE_NUM_OF*/];
extern MML1_MIPI_REG_RW_T      grfcalPocBufferDataMipiCwTypeTable[/*MMPOC_BUFFER_TYPE_NUM_OF*/];
extern GL1D_RF_CAL_MIPI_DATA_T GSM_MIPI_PA_ON_DATA               [/*MMPOC_BUFFER_TYPE_NUM_OF*/];
extern GL1D_RF_CAL_MIPI_DATA_T GSM_MIPI_PA_OFF_DATA              [/*MMPOC_BUFFER_TYPE_NUM_OF*/];

/* provide this API to MMRF, use for calibration download check */
kal_uint32 L1D_Return_AFC_DAC_SW_Default_value(void);

#endif /* End of #ifndef _L1D_MMRF_INTERFACE_H_ */
