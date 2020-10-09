/******************************************************************************
*  Modification Notice:
*  --------------------------
*  This software is modified by MediaTek Inc. and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2016
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
 * cl1d_rf_error_check.h
 *
 * Project:
 * --------
 * MT6177L
 *
 * Description:
 * ------------
 * Error check assert function
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
 *
 *
 *
 *----------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================*/
/* Doxygen Group Header ****************************************************//**
 * @addtogroup
 * @{
 ******************************************************************************/
/***************************************************************************//**
 * @file       cl1d_rf_error_check.h
 * @author     Make.Wu (MTK11049)
 * @date       2016.09.06
 * @brief     Error check (header file)
 * @details
 ******************************************************************************/

#ifndef  _CL1D_RF_ERROR_CHECK_H_
#define  _CL1D_RF_ERROR_CHECK_H_

/*******************************************************************************
 * #include
 ******************************************************************************/

/*******************************************************************************
 * #define
 ******************************************************************************/

/*******************************************************************************
 * Typedef
 ******************************************************************************/
typedef enum
{
    CL1D_RF_HAL_RX_ERR_MAIN_SEC_BOTH_ON = 0,
    CL1D_RF_HAL_RX_ERR_DIV_SEC_BOTH_ON  = 1,
    CL1D_RF_HAL_RX_ERR_PATH_ON_CONFLICT = 2,
}CL1D_RF_HAL_RX_ERROR_E;

typedef enum
{
    CL1D_RF_CUIF_TPC_CFG_ERR_BUF_FULL                    = 0,
    CL1D_RF_CUIF_TPC_CFG_TEST_ERR_CMD_INVALID            = 1,
    CL1D_RF_CUIF_TPC_CFG_TEST_ERR_CMD_VLD_FLAG_NOT_CLEAR = 2,
    CL1D_RF_CUIF_TPC_CFG_TEST_ERR_BUF_VLD_FLAG_NOT_CLEAR = 3
}CL1D_RF_CUIF_TPC_CFG_ERROR_E;

typedef enum
{
    CL1D_RF_CUIF_AGC_ERR_INIT_BUF_FULL    = 0,
    CL1D_RF_CUIF_AGC_ERR_SCH_BUF_FULL     = 1,
    CL1D_RF_CUIF_AGC_ERR_TEST_CMD_INVALID = 2,
    CL1D_RF_CUIF_AGC_ERR_CELL_IDX_INVALID = 3,
}CL1D_RF_CUIF_AGC_ERROR_E;

/*******************************************************************************
 * Constant
 ******************************************************************************/

/*******************************************************************************
 * Global variables (Extern)
 ******************************************************************************/


/*******************************************************************************
 * Global Functions Prototype (Interface)
 ******************************************************************************/
void CL1D_ErrorCheck_Dev_config_rf_scenario(kal_uint16 rf_scen);
void CL1D_ErrorCheck_Dev_afc_config(kal_uint16 path);
void CL1D_ErrorCheck_Dev_c2k_bsi_switch_to_mml1_bsi(kal_uint16 bsi);
void CL1D_ErrorCheck_Dev_get_rx1_warmup_code_word(kal_uint16 band_class, kal_uint16 band);
void CL1D_ErrorCheck_Dev_get_rx2_warmup_code_word(kal_uint16 band_class, kal_uint16 band);
void CL1D_ErrorCheck_Dev_get_prx_port(kal_uint16 prxPort);
void CL1D_ErrorCheck_Dev_get_drx_port(kal_uint16 drxPort);
void CL1D_ErrorCheck_Dev_build_rx_warmup_script(kal_uint16 path);
void CL1D_ErrorCheck_Dev_build_rx_burst_script(kal_uint16 path);
void CL1D_ErrorCheck_Dev_build_rx_patial_on_script(kal_uint16 path);
void CL1D_ErrorCheck_Dev_build_rx_patial_off_script(kal_uint16 path);
void CL1D_ErrorCheck_Dev_build_rx_sleep_script(kal_uint16 path);
void CL1D_ErrorCheck_Dev_rx_on_rx_path(kal_uint16 path);
void CL1D_ErrorCheck_Dev_rx_on_path_band(kal_uint16 rx_path,kal_uint16  band_class,kal_uint16  rf_band);
void CL1D_ErrorCheck_Dev_rx_on_mode_rf_config(kal_uint16 mode);
void CL1D_ErrorCheck_Dev_rx_off_path_mode(kal_uint16 rx_path, kal_uint16 mode);
void CL1D_ErrorCheck_Dev_tx_on_band_mode(kal_uint16 cdma_band, kal_uint16 band,kal_uint16 rat_type);
void CL1D_ErrorCheck_Dev_get_tx_warmup_code_word(kal_uint16 band_class, kal_uint16 band);
void CL1D_ErrorCheck_Dev_get_tx_port(kal_uint16 txPort);
void CL1D_ErrorCheck_Dev_gate_on(kal_uint16 rat_type);
void CL1D_ErrorCheck_Dev_tx_off(kal_uint16 rat_type);
void CL1D_ErrorCheck_Dev_gate_off(kal_uint16 rat_type);
void CL1D_ErrorCheck_Dev_get_rx_dc_tbl(kal_uint8 rx_path,kal_uint8 rf_band);
void CL1D_ErrorCheck_Dev_pll_srx(kal_uint16 band_class);
void CL1D_ErrorCheck_Dev_pll_stx(kal_uint16 band_class);
#if defined(__PMIC_VS1_LOW_POWER_CTRL_SUPPORT__)
void CL1D_ErrorCheck_Dev_vs1(kal_uint16 path_type, kal_uint16 path_on);
#endif
void CL1D_ErrorCheck_RxDfe_path_rat(kal_uint16 rat_type);
void CL1D_ErrorCheck_RxDfe_path_scen(kal_uint16 scen);
void CL1D_ErrorCheck_RxDfe_fc_rat(kal_uint16 rat_type);
void CL1D_ErrorCheck_RxDfe_fc_write_rat(kal_uint16 rat_type);
void CL1D_ErrorCheck_RxDfe_tq_type(kal_uint16 tq_type);
void CL1D_ErrorCheck_RxDfe_fc_type(kal_uint16 tq_type);
void CL1D_ErrorCheck_RxDfe_fc_tq_type(kal_uint16 tq_type);
void CL1D_ErrorCheck_TxDfe_path_scen(kal_uint16 scen);
void CL1D_ErrorCheck_TxDfe_evt_scen(kal_uint16 scen);
void CL1D_ErrorCheck_TxDfe_evt_rat(kal_uint16 rat_type);
void CL1D_ErrorCheck_TxDfe_ttg_scen(kal_uint16 scen);
void CL1D_ErrorCheck_TxDfe_ttg_rat(kal_uint16 rat);
void CL1D_ErrorCheck_TxDfe_ttg_phi(kal_uint16 phi);

/* CUST PARAMETER */
void CL1D_ErrorCheck_CUST_param_illegal_sysBandClass(kal_uint8 bandClass);
/* CUST MIPI */
/** RX & TX **/
void CL1D_ErrorCheck_CUST_mipi_illegal_data_tab_num_rx(kal_uint16 dataEnd);
void CL1D_ErrorCheck_CUST_mipi_illegal_event_type_rx(kal_uint16 rxEventType);
void CL1D_ErrorCheck_CUST_mipi_illegal_data_tab_num_tx(kal_uint16 txDataEnd);
void CL1D_ErrorCheck_CUST_mipi_illegal_event_type_tx(kal_uint16 txEventType);
void CL1D_ErrorCheck_CUST_mipi_illegal_buffer_index(kal_uint8 txRxBufferIndex);
void CL1D_ErrorCheck_CUST_mipi_illegal_mipi_data_seq(kal_uint16 mipiDataSeq);
/** TPC 1xrtt **/
void CL1D_ErrorCheck_CUST_mipi_illegal_data_tab_num_tpc1xrtt(kal_uint16 tpcDataEnd);
void CL1D_ErrorCheck_CUST_mipi_illegal_buffer_index_tpc1xrtt(kal_uint8 tpcBufferIndex);
void CL1D_ErrorCheck_CUST_mipi_illegal_mipi_data_seq_tpc1xrtt(kal_uint16 mipiDataSeqTpc);
/** TPC evdo **/
void CL1D_ErrorCheck_CUST_mipi_illegal_data_tab_num_tpcEvdo(kal_uint16 tpcDataEnd);
void CL1D_ErrorCheck_CUST_mipi_illegal_buffer_index_tpcEvdo(kal_uint8 tpcBufferIndex);
void CL1D_ErrorCheck_CUST_mipi_illegal_mipi_data_seq_tpcEvdo(kal_uint16 mipiDataSeqTpc);
/** ETM **/
void CL1D_ErrorCheck_CUST_mipi_illegal_data_tab_num_etm(kal_uint16 etmDataEnd);
void CL1D_ErrorCheck_CUST_mipi_illegal_event_type_etm(kal_uint16 etmEventType);
/*** ETM TX ON ***/
void CL1D_ErrorCheck_CUST_mipi_illegal_buffer_index_etmTxOn(kal_uint8 etmBufferIndex);
void CL1D_ErrorCheck_CUST_mipi_illegal_mipi_data_seq_etmTxOn(kal_uint16 mipiDataSeq);
/*** ETM TX OFF ***/
void CL1D_ErrorCheck_CUST_mipi_illegal_buffer_index_etmTxOff(kal_uint8 etmBufferIndex);
void CL1D_ErrorCheck_CUST_mipi_illegal_mipi_data_seq_etmTxOff(kal_uint16 mipiDataSeq);
/*** ETM TPC 1XRTT ***/
void CL1D_ErrorCheck_CUST_mipi_illegal_data_tab_num_etm_tpc1xrtt(kal_uint16 tpcDataEnd);
void CL1D_ErrorCheck_CUST_mipi_illegal_buffer_index_etm_tpc1xrtt(kal_uint8 etmBufferIndex);
void CL1D_ErrorCheck_CUST_mipi_illegal_mipi_data_seq_etm_tpc1xrtt(kal_uint16 mipiDataSeq);
/*** ETM TPC EVDO ***/
void CL1D_ErrorCheck_CUST_mipi_illegal_data_tab_num_etm_tpcEvdo(kal_uint16 tpcDataEnd);
void CL1D_ErrorCheck_CUST_mipi_illegal_buffer_index_etm_tpcEvdo(kal_uint8 etmBufferIndex);
void CL1D_ErrorCheck_CUST_mipi_illegal_mipi_data_seq_etm_tpcEvdo(kal_uint16 mipiDataSeq);

void CL1D_ErrorCheck_CUST_mipi_illegal_mipi_data_num(kal_bool is_start,kal_uint16 mipiDataNum);
void CL1D_ErrorCheck_CUST_mipi_illegal_mipi_data_check(void *infoPtr,kal_uint8 band, kal_uint8 act);
void CL1D_ErrorCheck_CUST_mipi_illegal_mipi_get_subband_check(kal_uint32 subband_freq, kal_uint32 freq);
void CL1D_ErrorCheck_Dev_tx_poc_band(kal_uint32 band_class);

/* CUST CALIBRATION */
void CL1D_ErrorCheck_CUST_cal_illegal_rat(kal_uint8 rat);
void CL1D_ErrorCheck_CUST_cal_illegal_chanNum(kal_uint16 chanNum);
void CL1D_ErrorCheck_CUST_cal_illegal_devSenario(kal_uint8 devSenario);
void CL1D_ErrorCheck_CUST_cal_runtime_illegal_devSenario(kal_uint8 devSenario);


/* CUST ELNA */
void CL1D_ErrorCheck_CUST_elna_illegal_desSubband(kal_uint8 dstSubband);
void CL1D_ErrorCheck_CUST_elna_illegal_elnaSwitch(kal_uint8 elnaSel);
void CL1D_ErrorCheck_CUST_elna_illegal_category(kal_uint8 elnaCategory);

/* CUST TAS */
void CL1D_ErrorCheck_CUST_tas_illegal_c2k_band(kal_uint8 c2k_band);
void CL1D_ErrorCheck_CUST_tas_illegal_rf_band(kal_uint8 rf_band);


/* TEMPERATURE*/
void CL1D_ErrorCheck_TEMP_meas(kal_uint8 rat,kal_uint8 tmp_mode);

/* HAL common*/
void CL1D_ErrorCheck_Hal_Rat_Type(kal_uint8 rat);

/* HAL_RX*/
void CL1D_ErrorCheck_Hal_Rx_Conflict(CL1D_RF_HAL_RX_ERROR_E error_type,kal_uint8 cur_bmp, kal_uint8 req_bmp);

/* HAL_AFC*/
void CL1D_ErrorCheck_Hal_Afc_Band_Class(kal_uint32 band_class);
void CL1D_ErrorCheck_Hal_Afc_Channel(kal_uint32 band_class, kal_uint32 channel);

/* CUIF*/
void CL1D_ErrorCheck_Cuif_Tpc(CL1D_RF_CUIF_TPC_CFG_ERROR_E error_type);
void CL1D_ErrorCheck_Cuif_Agc(CL1D_RF_CUIF_AGC_ERROR_E error_type, kal_uint32 param0, kal_uint32 param1);

/*BPI Conflict*/
void CL1D_ErrorCheck_Rf_Confict(kal_uint32 param0, kal_uint32 param1, kal_uint32 param2);
/*--HPUE --*/
/*custom file*/
void CL1D_ErrorCheck_Rf_PaVddSel_CustomFileSetting(kal_uint8 rf_band);
/*interface info illegal */
void CL1D_ErrorCheck_Rf_Hpue_Interface_Info(kal_uint8 param);

#endif //_EL1D_RF_ERROR_CHECK_H_

/* Doxygen Group End ***************************************************//**@}*/
