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
 * cl1d_rf_error_check.c
 *
 * Project:
 * --------
 * MT6177l
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
 *
 *
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
 * @file       cl1d_rf_error_check.c
 * @author     Make.Wu (MTK11049)
 * @date       2016.09.6
 * @brief      Error check function
 * @details
 ******************************************************************************/

/*******************************************************************************
 * #include
 ******************************************************************************/
#include "kal_general_types.h"
#include "kal_public_api.h"
#include "cl1d_rf_error_check.h"
#include "mml1_rf_interface.h"

/*******************************************************************************
 * Global Functions declaration (interface)
 ******************************************************************************/
//[NOTE] Please add the new check from the end of this file!!!
//       => In order to keep the assert line number unchanged
/*===============================================================================*/
void CL1D_ErrorCheck_Dev_config_rf_scenario(kal_uint16 rf_scen)
{
   kal_bool Rf_Scenario = KAL_FALSE;
   EXT_ASSERT(Rf_Scenario,rf_scen, 0, 0);
}

void CL1D_ErrorCheck_Dev_afc_config(kal_uint16 path)
{
   kal_bool Path = KAL_FALSE;
   EXT_ASSERT(Path,path, 0, 0);
}

void CL1D_ErrorCheck_Dev_get_bsi_save(kal_uint16 dev_path, kal_uint16 is_valid)
{
   kal_bool get_bsi = KAL_FALSE;
   EXT_ASSERT(get_bsi,dev_path,is_valid,0);
}

void CL1D_ErrorCheck_Dev_set_bsi_save(kal_uint16 dev_path, void* bsi_get)
{
   kal_bool get_bsi = KAL_FALSE;
   EXT_ASSERT(get_bsi,dev_path,(kal_uint32)bsi_get,0);
}

void CL1D_ErrorCheck_Dev_get_bsi_port(kal_uint16 rf)
{
   kal_bool Rf = KAL_FALSE;
   EXT_ASSERT(Rf,rf,0,0);
}

void CL1D_ErrorCheck_Dev_rf_cust_get_prx_rf(kal_uint16 rf_band,void* bsi_get)
{
   kal_bool prx_rf = KAL_FALSE;
   EXT_ASSERT(prx_rf,rf_band,(kal_uint32)bsi_get,0);   
}

void CL1D_ErrorCheck_Dev_rf_cust_get_drx_rf(kal_uint16 rf_band,void* bsi_get)
{
   kal_bool drx_rf = KAL_FALSE;
   EXT_ASSERT(drx_rf,rf_band,(kal_uint32)bsi_get,0);   
}

void CL1D_ErrorCheck_Dev_rf_get_tx_rf_bsi_idx(kal_uint16 CL1D_RF_DEV_PllBand,void* bsi_get)
{
   kal_bool bsi_idx = KAL_FALSE;
   EXT_ASSERT(bsi_idx,CL1D_RF_DEV_PllBand,(kal_uint32)bsi_get,0); 
}

void CL1D_ErrorCheck_Dev_set_dev_ctrl(kal_uint16 path,void* bsi_get)
{
   kal_bool dev_ctrl = KAL_FALSE;
   EXT_ASSERT(dev_ctrl,path,(kal_uint32)bsi_get,0); 
}

void CL1D_ErrorCheck_Dev_c2k_bsi_switch_to_mml1_bsi(kal_uint16 bsi)
{
   kal_bool bsi_switch = KAL_FALSE;
   EXT_ASSERT(bsi_switch,bsi,0,0); 
}

void CL1D_ErrorCheck_Dev_get_rx1_warmup_code_word(kal_uint16 band_class, kal_uint16 band)
{
   kal_bool Path = KAL_FALSE;
   EXT_ASSERT(Path, band_class, band,0);
}

void CL1D_ErrorCheck_Dev_get_rx2_warmup_code_word(kal_uint16 band_class, kal_uint16 band)
{
   kal_bool Path = KAL_FALSE;
   EXT_ASSERT(Path, band_class, band,0);
}

void CL1D_ErrorCheck_Dev_get_prx_port(kal_uint16 prxPort)
{
   kal_bool RxPort = KAL_FALSE;
   EXT_ASSERT(RxPort, prxPort, 0, 0);
}

void CL1D_ErrorCheck_Dev_get_drx_port(kal_uint16 drxPort)
{
   kal_bool RxPort = KAL_FALSE;
   EXT_ASSERT(RxPort, drxPort, 0, 0);
}

void CL1D_ErrorCheck_Dev_build_rx_warmup_script(kal_uint16 path)
{
   kal_bool Path = KAL_FALSE;
   EXT_ASSERT(Path, path,0,0);
}

void CL1D_ErrorCheck_Dev_build_rx_burst_script(kal_uint16 path)
{
   kal_bool Path = KAL_FALSE;
   EXT_ASSERT(Path, path,0,0);
}

void CL1D_ErrorCheck_Dev_build_rx_patial_on_script(kal_uint16 path)
{
   kal_bool Path = KAL_FALSE;
   EXT_ASSERT(Path,path, 0,0);
}

void CL1D_ErrorCheck_Dev_build_rx_patial_off_script(kal_uint16 path)
{
   kal_bool Path = KAL_FALSE;
   EXT_ASSERT(Path,path, 0,0);
}

void CL1D_ErrorCheck_Dev_build_rx_sleep_script(kal_uint16 path)
{
   kal_bool Path = KAL_FALSE;
   EXT_ASSERT(Path,path, 0,0);
}

void CL1D_ErrorCheck_Dev_rx_on_rx_path(kal_uint16 path)
{
   kal_bool Path = KAL_FALSE;
   EXT_ASSERT(Path,path, 0,0);
}

void CL1D_ErrorCheck_Dev_rx_on_path_band(kal_uint16 rx_path,kal_uint16  band_class,kal_uint16  rf_band)
{
   kal_bool Path = KAL_FALSE;
   EXT_ASSERT(Path,rx_path, band_class, rf_band);
}

void CL1D_ErrorCheck_Dev_rx_on_mode_rf_config(kal_uint16 mode)
{
   kal_bool Mode = KAL_FALSE;
   EXT_ASSERT(Mode,mode, 0, 0);
}

void CL1D_ErrorCheck_Dev_rx_off_path_mode(kal_uint16 rx_path, kal_uint16 mode)
{
   kal_bool Path = KAL_FALSE;
   EXT_ASSERT(Path,rx_path, mode, 0);
}

void CL1D_ErrorCheck_Dev_tx_on_band_mode(kal_uint16 cdma_band, kal_uint16 band,kal_uint16 rat_type)
{
   kal_bool Band = KAL_FALSE;
   EXT_ASSERT(Band,cdma_band, band, rat_type);
}

void CL1D_ErrorCheck_Dev_get_tx_warmup_code_word(kal_uint16 band_class, kal_uint16 band)
{
   kal_bool Path = KAL_FALSE;
   EXT_ASSERT(Path, band_class, band,0);
}

void CL1D_ErrorCheck_Dev_get_tx_port(kal_uint16 txPort)
{
   kal_bool TxPort = KAL_FALSE;
   EXT_ASSERT(TxPort, txPort, 0,0);    
}

void CL1D_ErrorCheck_Dev_gate_on(kal_uint16 rat_type)
{
   kal_bool Rat = KAL_FALSE;
   EXT_ASSERT(Rat,rat_type, 0, 0); 
}

void CL1D_ErrorCheck_Dev_tx_off(kal_uint16 rat_type)
{
   kal_bool Rat = KAL_FALSE;
   EXT_ASSERT(Rat,rat_type, 0, 0); 
}

void CL1D_ErrorCheck_Dev_gate_off(kal_uint16 rat_type)
{
   kal_bool Rat = KAL_FALSE;
   EXT_ASSERT(Rat,rat_type, 0, 0); 
}

void CL1D_ErrorCheck_Dev_get_rx_dc_tbl(kal_uint8 rx_path,kal_uint8 rf_band)
{
   kal_bool Dc = KAL_FALSE;
   EXT_ASSERT(Dc,rx_path, rf_band, 0); 
}


void CL1D_ErrorCheck_Dev_pll_srx(kal_uint16 band_class)
{
   kal_bool Pll = KAL_FALSE;
   EXT_ASSERT(Pll,band_class, 0, 0); 
}

void CL1D_ErrorCheck_Dev_pll_stx(kal_uint16 band_class)
{
   kal_bool Pll = KAL_FALSE;
   EXT_ASSERT(Pll,band_class, 0, 0); 
}

#if defined(__PMIC_VS1_LOW_POWER_CTRL_SUPPORT__)
void CL1D_ErrorCheck_Dev_vs1(kal_uint16 path_type, kal_uint16 path_on)
{
   kal_bool Vs1 = KAL_FALSE;
   EXT_ASSERT(Vs1,path_type, path_type, 0);  
}
#endif

void CL1D_ErrorCheck_RxDfe_path_rat(kal_uint16 rat_type)
{
   kal_bool Rat = KAL_FALSE;
   EXT_ASSERT(Rat,rat_type ,0 ,0);
}

void CL1D_ErrorCheck_RxDfe_path_scen(kal_uint16 scen)
{
   kal_bool Scen = KAL_FALSE;
   EXT_ASSERT(Scen,scen ,0 ,0);
}

void CL1D_ErrorCheck_RxDfe_fc_rat(kal_uint16 rat_type)
{
   kal_bool Rat = KAL_FALSE;
   EXT_ASSERT(Rat,rat_type ,0 ,0);
}

void CL1D_ErrorCheck_RxDfe_fc_write_rat(kal_uint16 rat_type)
{
   kal_bool Rat = KAL_FALSE;
   EXT_ASSERT(Rat,rat_type ,0 ,0);
}


void CL1D_ErrorCheck_RxDfe_tq_type(kal_uint16 tq_type)
{
   kal_bool Tq = KAL_FALSE;
   EXT_ASSERT(Tq,tq_type ,0 ,0);
}

void CL1D_ErrorCheck_RxDfe_fc_type(kal_uint16 fc_type)
{
   kal_bool Fc = KAL_FALSE;
   EXT_ASSERT(Fc,fc_type ,0 ,0);
}

void CL1D_ErrorCheck_RxDfe_fc_tq_type(kal_uint16 tq_type)
{
   kal_bool Tq = KAL_FALSE;
   EXT_ASSERT(Tq,tq_type ,0 ,0);
}


void CL1D_ErrorCheck_TxDfe_path_scen(kal_uint16 scen)
{
   kal_bool Scen = KAL_FALSE;
   EXT_ASSERT(Scen,scen ,0 ,0);
}

void CL1D_ErrorCheck_TxDfe_evt_scen(kal_uint16 scen)
{
   kal_bool Scen = KAL_FALSE;
   EXT_ASSERT(Scen,scen ,0 ,0);
}

void CL1D_ErrorCheck_TxDfe_evt_rat(kal_uint16 rat_type)
{
   kal_bool Rat = KAL_FALSE;
   EXT_ASSERT(Rat,rat_type ,0 ,0);
}

void CL1D_ErrorCheck_TxDfe_ttg_scen(kal_uint16 scen)
{
   kal_bool Scen = KAL_FALSE;
   EXT_ASSERT(Scen,scen ,0 ,0);
}

void CL1D_ErrorCheck_TxDfe_ttg_rat(kal_uint16 rat)
{
    kal_bool Rat = KAL_FALSE;
    EXT_ASSERT(Rat,rat ,0 ,0);

}


void CL1D_ErrorCheck_TxDfe_ttg_phi(kal_uint16 phi)
{
    kal_bool Phi = KAL_FALSE;
    EXT_ASSERT(Phi,phi ,0 ,0);

}

void CL1D_ErrorCheck_CUST_param_illegal_sysBandClass(kal_uint8 bandClass){
	kal_bool BandClass=KAL_FALSE;
	EXT_ASSERT(BandClass,bandClass,0,0);
}
void CL1D_ErrorCheck_CUST_mipi_illegal_data_tab_num_rx(kal_uint16 rxDataEnd){
	kal_bool RxDataEnd=KAL_FALSE;
	EXT_ASSERT(RxDataEnd,rxDataEnd,0,0);
}

void CL1D_ErrorCheck_CUST_mipi_illegal_event_type_rx(kal_uint16 rxEventType){
	kal_bool RxEventType=KAL_FALSE;
	EXT_ASSERT(RxEventType,rxEventType,0,0);
}

void CL1D_ErrorCheck_CUST_mipi_illegal_data_tab_num_tx(kal_uint16 txDataEnd){
	kal_bool TxDataEnd=KAL_FALSE;
	EXT_ASSERT(TxDataEnd,txDataEnd,0,0);
}

void CL1D_ErrorCheck_CUST_mipi_illegal_event_type_tx(kal_uint16 txEventType){
	kal_bool TxEventType=KAL_FALSE;
	EXT_ASSERT(TxEventType,txEventType,0,0);
}

void CL1D_ErrorCheck_CUST_mipi_illegal_buffer_index(kal_uint8 txRxBufferIndex){
	kal_bool TxRxBufferIndex=KAL_FALSE;
	EXT_ASSERT(TxRxBufferIndex,txRxBufferIndex,0,0);
}

void CL1D_ErrorCheck_CUST_mipi_illegal_mipi_data_seq(kal_uint16 mipiDataSeq){
	kal_bool MipiDataSeq=KAL_FALSE;
	EXT_ASSERT(MipiDataSeq,mipiDataSeq,0,0);
}

void CL1D_ErrorCheck_CUST_mipi_illegal_data_tab_num_tpc1xrtt(kal_uint16 tpcDataEnd){
	kal_bool TpcDataEnd=KAL_FALSE;
	EXT_ASSERT(TpcDataEnd,tpcDataEnd,0,0);
}

void CL1D_ErrorCheck_CUST_mipi_illegal_buffer_index_tpc1xrtt(kal_uint8 tpcBufferIndex){
	kal_bool TpcBufferIndex=KAL_FALSE;
	EXT_ASSERT(TpcBufferIndex,tpcBufferIndex,0,0);
}

void CL1D_ErrorCheck_CUST_mipi_illegal_mipi_data_seq_tpc1xrtt(kal_uint16 mipiDataSeqTpc){
	kal_bool MipiDataSeqTpc=KAL_FALSE;
	EXT_ASSERT(MipiDataSeqTpc,mipiDataSeqTpc,0,0);
}

void CL1D_ErrorCheck_CUST_mipi_illegal_data_tab_num_tpcEvdo(kal_uint16 tpcDataEnd){
	kal_bool TpcDataEnd=KAL_FALSE;
	EXT_ASSERT(TpcDataEnd,tpcDataEnd,0,0);
}

void CL1D_ErrorCheck_CUST_mipi_illegal_buffer_index_tpcEvdo(kal_uint8 tpcBufferIndex){
	kal_bool TpcBufferIndex=KAL_FALSE;
	EXT_ASSERT(TpcBufferIndex,tpcBufferIndex,0,0);
}

void CL1D_ErrorCheck_CUST_mipi_illegal_mipi_data_seq_tpcEvdo(kal_uint16 mipiDataSeqTpc){
	kal_bool MipiDataSeqTpc=KAL_FALSE;
	EXT_ASSERT(MipiDataSeqTpc,mipiDataSeqTpc,0,0);
}

void CL1D_ErrorCheck_CUST_mipi_illegal_data_tab_num_etm(kal_uint16 etmDataEnd){
	kal_bool EtmDataEnd=KAL_FALSE;
	EXT_ASSERT(EtmDataEnd,etmDataEnd,0,0);
}

void CL1D_ErrorCheck_CUST_mipi_illegal_buffer_index_etmTxOn(kal_uint8 etmBufferIndex){
	kal_bool EtmBufferIndex=KAL_FALSE;
	EXT_ASSERT(EtmBufferIndex,etmBufferIndex,0,0);
}

void CL1D_ErrorCheck_CUST_mipi_illegal_mipi_data_seq_etmTxOn(kal_uint16 mipiDataSeq){
	kal_bool MipiDataSeq=KAL_FALSE;
	EXT_ASSERT(MipiDataSeq,mipiDataSeq,0,0);
}

void CL1D_ErrorCheck_CUST_mipi_illegal_buffer_index_etmTxOff(kal_uint8 etmBufferIndex){
	kal_bool EtmBufferIndex=KAL_FALSE;
	EXT_ASSERT(EtmBufferIndex,etmBufferIndex,0,0);
}

void CL1D_ErrorCheck_CUST_mipi_illegal_mipi_data_seq_etmTxOff(kal_uint16 mipiDataSeq){
	kal_bool MipiDataSeq=KAL_FALSE;
	EXT_ASSERT(MipiDataSeq,mipiDataSeq,0,0);
}

void CL1D_ErrorCheck_CUST_mipi_illegal_event_type_etm(kal_uint16 etmEventType){
	kal_bool EtmEventType=KAL_FALSE;
	EXT_ASSERT(EtmEventType,etmEventType,0,0);
}

void CL1D_ErrorCheck_CUST_mipi_illegal_data_tab_num_etm_tpc1xrtt(kal_uint16 tpcDataEnd){
	kal_bool TpcDataEnd=KAL_FALSE;
	EXT_ASSERT(TpcDataEnd,tpcDataEnd,0,0);
}

void CL1D_ErrorCheck_CUST_mipi_illegal_buffer_index_etm_tpc1xrtt(kal_uint8 etmBufferIndex){
	kal_bool EtmBufferIndex=KAL_FALSE;
	EXT_ASSERT(EtmBufferIndex,etmBufferIndex,0,0);
}

void CL1D_ErrorCheck_CUST_mipi_illegal_mipi_data_seq_etm_tpc1xrtt(kal_uint16 mipiDataSeq){
	kal_bool MipiDataSeq=KAL_FALSE;
	EXT_ASSERT(MipiDataSeq,mipiDataSeq,0,0);
}

void CL1D_ErrorCheck_CUST_mipi_illegal_data_tab_num_etm_tpcEvdo(kal_uint16 tpcDataEnd){
	kal_bool TpcDataEnd=KAL_FALSE;
	EXT_ASSERT(TpcDataEnd,tpcDataEnd,0,0);
}

void CL1D_ErrorCheck_CUST_mipi_illegal_buffer_index_etm_tpcEvdo(kal_uint8 etmBufferIndex){
	kal_bool EtmBufferIndex=KAL_FALSE;
	EXT_ASSERT(EtmBufferIndex,etmBufferIndex,0,0);
}

void CL1D_ErrorCheck_CUST_mipi_illegal_mipi_data_seq_etm_tpcEvdo(kal_uint16 mipiDataSeq){
	kal_bool MipiDataSeq=KAL_FALSE;
	EXT_ASSERT(MipiDataSeq,mipiDataSeq,0,0);
}

void CL1D_ErrorCheck_CUST_mipi_illegal_mipi_data_num(kal_bool is_start,kal_uint16 mipiDataNum){
	kal_bool MipiDataNum=KAL_FALSE;
	EXT_ASSERT(MipiDataNum,is_start,mipiDataNum,0);
}

void CL1D_ErrorCheck_CUST_mipi_illegal_mipi_data_check(void *infoPtr,kal_uint8 band, kal_uint8 act){
	kal_bool MipiDataCheck=KAL_FALSE;
	EXT_ASSERT(MipiDataCheck,(kal_uint32)infoPtr,band,act);
}

void CL1D_ErrorCheck_CUST_mipi_illegal_mipi_get_subband_check(kal_uint32 subband_freq, kal_uint32 freq){
	kal_bool MipiSubbandCheck=KAL_FALSE;
	EXT_ASSERT(MipiSubbandCheck,subband_freq,freq,0);
}

void CL1D_ErrorCheck_Dev_tx_poc_band(kal_uint32 band_class){
	kal_bool TxPocBand=KAL_FALSE;
	EXT_ASSERT(TxPocBand,band_class,0,0);
}

void CL1D_ErrorCheck_CUST_cal_illegal_rat(kal_uint8 rat){
	kal_bool Rat=KAL_FALSE;
	EXT_ASSERT(Rat,rat,0,0);
}

void CL1D_ErrorCheck_CUST_cal_illegal_chanNum(kal_uint16 chanNum){
	kal_bool ChanNum=KAL_FALSE;
	EXT_ASSERT(ChanNum,chanNum,0,0);
}

void CL1D_ErrorCheck_CUST_cal_illegal_devSenario(kal_uint8 devSenario){
	kal_bool DevSenario=KAL_FALSE;
	EXT_ASSERT(DevSenario,devSenario,0,0);
}

void CL1D_ErrorCheck_CUST_cal_runtime_illegal_devSenario(kal_uint8 devSenario){
	kal_bool DevSenario=KAL_FALSE;
	EXT_ASSERT(DevSenario,devSenario,0,0);
}
void CL1D_ErrorCheck_CUST_elna_illegal_desSubband(kal_uint8 dstSubband){
	kal_bool DstSubband=KAL_FALSE;
	EXT_ASSERT(DstSubband,dstSubband,0,0);
}

void CL1D_ErrorCheck_CUST_elna_illegal_elnaSwitch(kal_uint8 elnaSel){
	kal_bool ElnaSel=KAL_FALSE;
	EXT_ASSERT(ElnaSel,elnaSel,0,0);
}

void CL1D_ErrorCheck_CUST_elna_illegal_category(kal_uint8 elnaCategory){
	kal_bool ElnaCategory=KAL_FALSE;
	EXT_ASSERT(ElnaCategory,elnaCategory,0,0);
}
void CL1D_ErrorCheck_TEMP_meas(kal_uint8 rat,kal_uint8 tmp_mode){
	kal_bool TEMP_meas=KAL_FALSE;
	EXT_ASSERT(TEMP_meas,rat,tmp_mode,0);
}
/***********************************************
 FUNCTION NAME:  CL1D_ErrorCheck_Hal_Rat_Type()
 
 DESCRIPTION:    This fucntion is used to check rat type.

 PARAMETERS:     rat type

 RETURNS VALUES: void
 ***********************************************/
void CL1D_ErrorCheck_Hal_Rat_Type(kal_uint8 rat)
{
   kal_bool error = KAL_FALSE;
	 EXT_ASSERT(error,rat,0,0);
}

/***********************************************
 FUNCTION NAME:  CL1D_ErrorCheck_Hal_Rx()
 
 DESCRIPTION:    This fucntion is used to check HAL rx path control conflict.

 PARAMETERS:     void

 RETURNS VALUES: void
 ***********************************************/
void CL1D_ErrorCheck_Hal_Rx_Conflict(CL1D_RF_HAL_RX_ERROR_E error_type,kal_uint8 cur_bmp, kal_uint8 req_bmp)
{
   kal_bool error = KAL_FALSE;
	 EXT_ASSERT(error,error_type,cur_bmp,req_bmp);
}

/***********************************************
 FUNCTION NAME:  CL1D_ErrorCheck_Hal_Afc_Band_Class()
 
 DESCRIPTION:    This fucntion is used to check bandclass supported status.

 PARAMETERS:     3GPP2 band class

 RETURNS VALUES: void
 ***********************************************/
void CL1D_ErrorCheck_Hal_Afc_Band_Class(kal_uint32 band_class)
{
   kal_bool bc = KAL_FALSE;
	 EXT_ASSERT(bc,band_class,0,0);
}

/***********************************************
 FUNCTION NAME:  CL1D_ErrorCheck_Hal_Afc_Channel()
 
 DESCRIPTION:    This fucntion is used to check channel of the bandclass supported status.

 PARAMETERS:     3GPP2 band class and channel

 RETURNS VALUES: void
 ***********************************************/
void CL1D_ErrorCheck_Hal_Afc_Channel(kal_uint32 band_class, kal_uint32 channel)
{
   kal_bool ch = KAL_FALSE;
	 EXT_ASSERT(ch,band_class,channel,0);
}

/***********************************************
 FUNCTION NAME:  CL1D_ErrorCheck_Cuif_Tpc()
 
 DESCRIPTION:    This fucntion is used to check TPC cuif transfer error.

 PARAMETERS:     error type

 RETURNS VALUES: void
 ***********************************************/
void CL1D_ErrorCheck_Cuif_Tpc(CL1D_RF_CUIF_TPC_CFG_ERROR_E error_type)
{
#ifndef L1_SIM
   kal_bool error = KAL_FALSE;
	 EXT_ASSERT(error,error_type,0,0);
#endif
}

/***********************************************
 FUNCTION NAME:  CL1D_ErrorCheck_Cuif_Agc()
 
 DESCRIPTION:    This fucntion is used to check AGC cuif transfer error.

 PARAMETERS:     error type

 RETURNS VALUES: void
 ***********************************************/
void CL1D_ErrorCheck_Cuif_Agc(CL1D_RF_CUIF_AGC_ERROR_E error_type, kal_uint32 param0, kal_uint32 param1)
{
#ifndef L1_SIM
   kal_bool error = KAL_FALSE;
	 EXT_ASSERT(error,error_type,param0,param1);
#endif
}

void CL1D_ErrorCheck_Rf_Confict(kal_uint32 param0, kal_uint32 param1, kal_uint32 param2)
{
#ifndef L1_SIM
   kal_bool error = KAL_FALSE;
   EXT_ASSERT(error,param0,param1,param2);
#endif
}


void CL1D_ErrorCheck_CUST_tas_illegal_c2k_band(kal_uint8 c2k_band){
	kal_bool C2k_Band=KAL_FALSE;
	EXT_ASSERT(C2k_Band,c2k_band,0,0);
}

void CL1D_ErrorCheck_CUST_tas_illegal_rf_band(kal_uint8 rf_band){
	kal_bool Rf_Band=KAL_FALSE;
	EXT_ASSERT(Rf_Band,rf_band,0,0);
}

void CL1D_ErrorCheck_Rf_PaVddSel_CustomFileSetting(kal_uint8 rf_band){
	kal_bool Pa_Vdd_Ctrl=KAL_FALSE;
	EXT_ASSERT(Pa_Vdd_Ctrl,rf_band,0,0);
}

void CL1D_ErrorCheck_Rf_Hpue_Interface_Info(kal_uint8 param){
	kal_bool hpue_ret_info=KAL_FALSE;
	EXT_ASSERT(hpue_ret_info,param,0,0);
}

/***********************************************
 FUNCTION NAME:  C2K_FEC_MMRF_Error_Check()
 
 DESCRIPTION:    This fucntion is used to check C2K abnormal CW error. It will be called by MMRF.

 PARAMETERS:     error type

 RETURNS VALUES: void
 ***********************************************/
void C2K_FEC_MMRF_Error_Check(MMRF_DBG_OP_E op_code, kal_uint32 bin_mode)
{
   kal_bool error = KAL_FALSE;
   EXT_ASSERT(error,op_code,bin_mode,0);
}

/*******************************************************************************
 * #define
 ******************************************************************************/

/*******************************************************************************
 * typedef
 ******************************************************************************/

/*******************************************************************************
 * Constant
 ******************************************************************************/

/*******************************************************************************
 * Global Variables
 ******************************************************************************/


/*******************************************************************************
 * Local Variables
 * Static variables declaration
 ******************************************************************************/

/*******************************************************************************
 * Local Functions
 * Static Functions Prototype
 ******************************************************************************/


/*******************************************************************************
 * Static Functions declaration
 ******************************************************************************/




/* Doxygen Group End ***************************************************//**@}*/
