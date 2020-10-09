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
 * 
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description:
 * ------------
 * 
 *
 * Author:
 * -------
 *  
 *
 *============================================================================
 *             HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
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
 *
 * removed!
 * removed!
 * removed!
 * removed!
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/
#ifndef __L1_NVRAM_EDITOR_H__
#define __L1_NVRAM_EDITOR_H__


#ifndef NVRAM_NOT_PRESENT
#ifdef __cplusplus
extern "C"
{
#endif /* __cplusplus */ 

#include "l1_nvram_def.h"


#ifdef GEN_FOR_PC
BEGIN_NVRAM_DATA


/******************************
 ***  Section:  L1 Calibration Data
 ******************************/

 /*
  *
  * Notes:  The defination of L1 calibration data structure is located at
  *            "inc/l1cal.h". Here, provide decriptions only.
  */
/***************************************************************************************************
* LID_NAME
*      NVRAM_EF_L1_AGCPATHLOSS_LID
* DESCRIPTION
*      This nvram item includes calibration data for AGC Pathloss, and can be customized.
*      Reference:Platform_System_RF_MT6763_RF_NVRAM_LID_Introduction_Application_Note.docx
* INFORMATION
*     Can OTA Reset: No
*     Update Scenario:This LID will be updated in initial task
****************************************************************************************************/

     LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_L1_AGCPATHLOSS_LID)
     l1cal_agcPathLoss_T *NVRAM_EF_L1_AGCPATHLOSS_TOTAL
     {

     };


#ifdef __GSM850__


/***************************************************************************************************
* LID_NAME
*      NVRAM_EF_L1_RAMPTABLE_GSM850_LID
* DESCRIPTION
*      This nvram item includes calibration data of GMSK APC ramptable data for GSM 850 band.  This can be customized.
*      Reference:Platform_System_RF_MT6763_RF_NVRAM_LID_Introduction_Application_Note.docx
* INFORMATION
*     Can OTA Reset: No
*     Update Scenario:This LID will be updated in initial task
****************************************************************************************************/
     LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_L1_RAMPTABLE_GSM850_LID)
     l1cal_rampTable_T *NVRAM_EF_L1_RAMPTABLE_GSM850_TOTAL
     {

     };


#endif
#ifdef __EGSM900__


/***************************************************************************************************
* LID_NAME
*      NVRAM_EF_L1_RAMPTABLE_GSM900_LID
* DESCRIPTION
*      This nvram item includes calibration data of GMSK APC ramptable data for GSM 900 band.  This can be customized.
*      Reference:Platform_System_RF_MT6763_RF_NVRAM_LID_Introduction_Application_Note.docx
* INFORMATION
*     Can OTA Reset: No
*     Update Scenario:This LID will be updated in initial task
****************************************************************************************************/
     LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_L1_RAMPTABLE_GSM900_LID)
     l1cal_rampTable_T *NVRAM_EF_L1_RAMPTABLE_GSM900_TOTAL
     {

     };


#endif
#ifdef __DCS1800__


/***************************************************************************************************
* LID_NAME
*      NVRAM_EF_L1_RAMPTABLE_DCS1800_LID
* DESCRIPTION
*      This nvram item includes calibration data of GMSK APC ramptable data for DCS 1800 band.  This can be customized.
*      Reference:Platform_System_RF_MT6763_RF_NVRAM_LID_Introduction_Application_Note.docx
* INFORMATION
*     Can OTA Reset: No
*     Update Scenario:This LID will be updated in initial task
****************************************************************************************************/
     LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_L1_RAMPTABLE_DCS1800_LID)
     l1cal_rampTable_T *NVRAM_EF_L1_RAMPTABLE_DCS1800_TOTAL
     {
     };


#endif
#ifdef __PCS1900__


/***************************************************************************************************
* LID_NAME
*      NVRAM_EF_L1_RAMPTABLE_PCS1900_LID
* DESCRIPTION
*      This nvram item includes calibration data of GMSK APC ramptable data for PCS 1900 band.  This can be customized.
*      Reference:Platform_System_RF_MT6763_RF_NVRAM_LID_Introduction_Application_Note.docx
* INFORMATION
*     Can OTA Reset: No
*     Update Scenario:This LID will be updated in initial task
****************************************************************************************************/
     LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_L1_RAMPTABLE_PCS1900_LID)
     l1cal_rampTable_T *NVRAM_EF_L1_RAMPTABLE_DCS1800_TOTAL
     {
     };


#endif


#if defined(__EPSK_TX__)


#ifdef __GSM850__


/********************************************************************************************
* LID_NAME
*   NVRAM_EF_L1_EPSK_RAMPTABLE_GSM850_LID
* DESCRIPTION
*   It is the calibration data of sub-band weighting for EDGE
*   The sub-band weighting and EDGE PA gain are used for adjusting the power of EDGE
* INFOMATION
*   Can OTA Reset: No
*   Update Scenario: This LID will be updated in initial task.
*********************************************************************************************/

     LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_L1_EPSK_RAMPTABLE_GSM850_LID)
     l1cal_rampTable_T *NVRAM_EF_L1_EPSK_RAMPTABLE_GSM850_TOTAL
     {

     };


/********************************************************************************************
* LID_NAME
*   NVRAM_EF_L1_EPSK_INTERSLOT_RAMP_GSM850_LID
* DESCRIPTION
*   EPSK APC interslot Ramptable data for Adjusting the power of multislot of EGPRS
* INFOMATION
*   Can OTA Reset: No
*   Update Scenario: This LID will be updated in initial task.
*********************************************************************************************/
     LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_L1_EPSK_INTERSLOT_RAMP_GSM850_LID)
     l1cal_EPSK_interRampData_T *NVRAM_EF_L1_EPSK_INTERSLOT_RAMP_GSM850_TOTAL
     {
     };


#endif
#ifdef __EGSM900__



/********************************************************************************************
* LID_NAME
*   NVRAM_EF_L1_EPSK_RAMPTABLE_GSM900_LID
* DESCRIPTION
*   It is the calibration data of sub-band weighting for EDGE
*   The sub-band weighting and EDGE PA gain are used for adjusting the power of EDGE
* INFOMATION
*   Can OTA Reset: No
*   Update Scenario: This LID will be updated in initial task.
*********************************************************************************************/

     LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_L1_EPSK_RAMPTABLE_GSM900_LID)
     l1cal_rampTable_T *NVRAM_EF_L1_EPSK_RAMPTABLE_GSM900_TOTAL
     {

     };


/********************************************************************************************
* LID_NAME
*   NVRAM_EF_L1_EPSK_INTERSLOT_RAMP_GSM900_LID
* DESCRIPTION
*   EPSK APC interslot Ramptable data for Adjusting the power of multislot of EGPRS
* INFOMATION
*   Can OTA Reset: No
*   Update Scenario: This LID will be updated in initial task.
*********************************************************************************************/
     LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_L1_EPSK_INTERSLOT_RAMP_GSM900_LID)
     l1cal_EPSK_interRampData_T *NVRAM_EF_L1_EPSK_INTERSLOT_RAMP_GSM900_TOTAL
     {
     };


#endif
#ifdef __DCS1800__


/********************************************************************************************
* LID_NAME
*   NVRAM_EF_L1_EPSK_RAMPTABLE_DCS1800_LID
* DESCRIPTION
*   It is the calibration data of sub-band weighting for EDGE
*   The sub-band weighting and EDGE PA gain are used for adjusting the power of EDGE
* INFOMATION
*   Can OTA Reset: No
*   Update Scenario: This LID will be updated in initial task.
*********************************************************************************************/

     LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_L1_EPSK_RAMPTABLE_DCS1800_LID)
     l1cal_rampTable_T *NVRAM_EF_L1_EPSK_RAMPTABLE_DCS1800_TOTAL
     {
     };


/********************************************************************************************
* LID_NAME
*   NVRAM_EF_L1_EPSK_INTERSLOT_RAMP_DCS1800_LID
* DESCRIPTION
*   EPSK APC interslot Ramptable data for Adjusting the power of multislot of EGPRS
* INFOMATION
*   Can OTA Reset: No
*   Update Scenario: This LID will be updated in initial task.
*********************************************************************************************/
     LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_L1_EPSK_INTERSLOT_RAMP_DCS1800_LID)
     l1cal_EPSK_interRampData_T *NVRAM_EF_L1_EPSK_INTERSLOT_RAMP_DCS1800_TOTAL
     {
     };


#endif
#ifdef __PCS1900__


/********************************************************************************************
* LID_NAME
*   NVRAM_EF_L1_EPSK_RAMPTABLE_PCS1900_LID
* DESCRIPTION
*   It is the calibration data of sub-band weighting for EDGE
*   The sub-band weighting and EDGE PA gain are used for adjusting the power of EDGE
* INFOMATION
*   Can OTA Reset: No
*   Update Scenario: This LID will be updated in initial task.
*********************************************************************************************/

     LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_L1_EPSK_RAMPTABLE_PCS1900_LID)
     l1cal_rampTable_T *NVRAM_EF_L1_EPSK_RAMPTABLE_DCS1800_TOTAL
     {
     };


/********************************************************************************************
* LID_NAME
*   NVRAM_EF_L1_EPSK_INTERSLOT_RAMP_PCS1900_LID
* DESCRIPTION
*   EPSK APC interslot Ramptable data for Adjusting the power of multislot of EGPRS
* INFOMATION
*   Can OTA Reset: No
*   Update Scenario: This LID will be updated in initial task.
*********************************************************************************************/

     LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_L1_EPSK_INTERSLOT_RAMP_PCS1900_LID)
     l1cal_EPSK_interRampData_T *NVRAM_EF_L1_EPSK_INTERSLOT_RAMP_PCS1900_TOTAL
     {
     };


#endif
#endif /* defined(__EPSK_TX__) */

#if defined(__PS_SERVICE__)
/********************************************************************************************
* LID_NAME
*   NVRAM_EF_L1_GMSK_TX_POWER_ROLLBACK_TABLE_LID
* DESCRIPTION
*   GMSK maximun TX Power roll back , Modified interms of DAC.Can be customisied ,Since in case of multislot config of GPRS
*   like 2T,3T,4T we roll back ,maximum Tx power.
* INFOMATION
*   Can OTA Reset: Yes
*   Update Scenario: This LID will be updated in initial task.
*********************************************************************************************/
     LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_L1_GMSK_TX_POWER_ROLLBACK_TABLE_LID)
     l1cal_tx_power_rollback_T *NVRAM_EF_L1_GMSK_TX_POWER_ROLLBACK_TABLE_TOTAL
     {

     };
#if defined(__EGPRS_MODE__)
/********************************************************************************************
* LID_NAME
*   NVRAM_EF_L1_EPSK_TX_POWER_ROLLBACK_TABLE_LID
* DESCRIPTION
*   Rolling back the maximum power of multi-slot of EGPRS depending on multi-slot scenarioEPSK,
*   TX power rollback data, can be customized,Modified in terms of DAC value.
*...The unit of the roll back data is 8 DAC/dB (e.g. after calibration, the maximum power = 27.5dbm,
*   roll back data = 16, then the maximum power will be 25.5dbm).
* INFOMATION
*   Can OTA Reset: Yes
*   Update Scenario: This LID will be updated in initial task.
*********************************************************************************************/

     LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_L1_EPSK_TX_POWER_ROLLBACK_TABLE_LID)
     l1cal_tx_power_rollback_T *NVRAM_EF_L1_EPSK_TX_POWER_ROLLBACK_TABLE_TOTAL
     {

     };
#endif /*__EGPRS_MODE__*/
#endif /*__PS_SERVICE__*/

#if defined(__2G_TX_POWER_CONTROL_SUPPORT__)
/********************************************************************************************
* LID_NAME
*   NVRAM_EF_L1_GMSK_TXPC_LID
* DESCRIPTION
*   This LID used for GMSK power control,used to store Reference temperature.
* INFOMATION
*   Can OTA Reset: No
*   Update Scenario: This LID will be updated in initial task.
*********************************************************************************************/
     LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_L1_GMSK_TXPC_LID)
     l1cal_txpc_T *NVRAM_EF_L1_GMSK_TXPC_TOTAL
     {

     };

#if defined(__EPSK_TX__)
/********************************************************************************************
* LID_NAME
*   NVRAM_EF_L1_EPSK_TXPC_LID
* DESCRIPTION
*   This LID used for EPSK power control,used to store Reference temperature and ADC data.
* INFOMATION
*   Can OTA Reset: No
*   Update Scenario: This LID will be updated in initial task.
*********************************************************************************************/

     LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_L1_EPSK_TXPC_LID)
     l1cal_txpc_T *NVRAM_EF_L1_EPSK_TXPC_TOTAL
     {

     };
#endif /*__EPSK_TX__*/
#endif /*__2G_TX_POWER_CONTROL_SUPPORT__*/

#if defined(__MULTI_LNA_MODE_CALIBRATION_SUPPORT__)
/********************************************************************************************
* LID_NAME
*   NVRAM_EF_L1_LNAPATHLOSS_LID
* DESCRIPTION
*   Stores the calibration data of AGC LNA Path loss , Measured in terms of dB. 
* INFOMATION
*   Can OTA Reset: No
*   Update Scenario: This LID will be updated in initial task.
*********************************************************************************************/
     LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_L1_LNAPATHLOSS_LID)
     l1cal_lnaPathLoss_T *NVRAM_EF_L1_LNAPATHLOSS_TOTAL
     {

     };
#endif /*__MULTI_LNA_MODE_CALIBRATION_SUPPORT__*/

#if defined(__F32_XOSC_REMOVAL_SUPPORT__)
/********************************************************************************************
* LID_NAME
*   NVRAM_EF_L1_CLOAD_FREQ_OFFSET_LID
* DESCRIPTION
*   It is the calibration data of Cload variable, for detecting the frequency error
*   between FPM and LPM (low power mode of 32K less)
* INFOMATION
*   Can OTA Reset: No
*   Update Scenario: This LID will be updated in initial task.
*********************************************************************************************/
     LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_L1_CLOAD_FREQ_OFFSET_LID)
     l1cal_cload_freq_offset_T *NVRAM_EF_L1_CLOAD_FREQ_OFFSET_TOTAL
     {

     };
#endif /*__F32_XOSC_REMOVAL_SUPPORT__*/

#if defined(__2G_TX_GAIN_RF_CALIBRATION__)
/********************************************************************************************
* LID_NAME
*   NVRAM_EF_L1_GAINRF_LID
* DESCRIPTION
*   TX gain step K for POC It had been implemented with instrument for MT6165 calibration by
*   instrument for TX gain step. Not used in other RF chips
* INFOMATION
*   Can OTA Reset: No
*   Update Scenario: This LID will be updated in initial task.
*********************************************************************************************/
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_L1_GAINRF_LID)
l1cal_gainrf_T *NVRAM_EF_L1_GAINRF_LID_TOTAL
{

};
#endif

#if defined(__TX_POWER_OFFSET_SUPPORT__) || defined (__SAR_TX_POWER_BACKOFF_SUPPORT__)



/********************************************************************************************
* LID_NAME
*   NVRAM_EF_L1_GMSK_TX_POWER_OFFSET_GSM850_LID
* DESCRIPTION
*    TX POWER offset for GMSK GSM850 , Adjusting output TX power.
* INFOMATION
*   Can OTA Reset: Yes
*   Update Scenario: This LID will be updated in initial task.
*********************************************************************************************/
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_L1_GMSK_TX_POWER_OFFSET_GSM850_LID)
tx_power_offset_t *NVRAM_EF_L1_GMSK_TX_POWER_OFFSET_GSM850_TOTAL
{

};

/********************************************************************************************
* LID_NAME
*   NVRAM_EF_L1_GMSK_TX_POWER_OFFSET_GSM900_LID
* DESCRIPTION
*    TX POWER offset for GMSK GSM900 , Adjusting output TX power.
* INFOMATION
*   Can OTA Reset: Yes
*   Update Scenario: This LID will be updated in initial task.
*********************************************************************************************/
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_L1_GMSK_TX_POWER_OFFSET_GSM900_LID)
tx_power_offset_t *NVRAM_EF_L1_GMSK_TX_POWER_OFFSET_GSM900_TOTAL
{

};

/********************************************************************************************
* LID_NAME
*   NVRAM_EF_L1_GMSK_TX_POWER_OFFSET_DCS_LID
* DESCRIPTION
*    TX POWER offset for GMSK DCS1800 , Adjusting output TX power.
* INFOMATION
*   Can OTA Reset: Yes
*   Update Scenario: This LID will be updated in initial task.
*********************************************************************************************/
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_L1_GMSK_TX_POWER_OFFSET_DCS_LID)
tx_power_offset_t *NVRAM_EF_L1_GMSK_TX_POWER_OFFSET_DCS_TOTAL
{

};

/********************************************************************************************
* LID_NAME
*   NVRAM_EF_L1_GMSK_TX_POWER_OFFSET_PCS_LID
* DESCRIPTION
*    TX POWER offset for GMSK PCS1900 , Adjusting output TX power.
* INFOMATION
*   Can OTA Reset: Yes
*   Update Scenario: This LID will be updated in initial task.
*********************************************************************************************/
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_L1_GMSK_TX_POWER_OFFSET_PCS_LID)
tx_power_offset_t *NVRAM_EF_L1_GMSK_TX_POWER_OFFSET_PCS_TOTAL
{

};

/********************************************************************************************
* LID_NAME
*   NVRAM_EF_L1_EPSK_TX_POWER_OFFSET_GSM850_LID
* DESCRIPTION
*   TX POWER offset used for adjusting output TX power in EPSK modulation for GSM850 band.
* INFOMATION
*   Can OTA Reset: Yes
*   Update Scenario: This LID will be updated in initial task.
*********************************************************************************************/

LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_L1_EPSK_TX_POWER_OFFSET_GSM850_LID)
tx_power_offset_t *NVRAM_EF_L1_EPSK_TX_POWER_OFFSET_GSM850_TOTAL
{

};

/********************************************************************************************
* LID_NAME
*   NVRAM_EF_L1_EPSK_TX_POWER_OFFSET_GSM900_LID
* DESCRIPTION
*   TX POWER offset used for adjusting output TX power in EPSK modulation for GSM900 band.
* INFOMATION
*   Can OTA Reset: Yes
*   Update Scenario: This LID will be updated in initial task.
*********************************************************************************************/

LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_L1_EPSK_TX_POWER_OFFSET_GSM900_LID)
tx_power_offset_t *NVRAM_EF_L1_EPSK_TX_POWER_OFFSET_GSM900_TOTAL
{

};

/********************************************************************************************
* LID_NAME
*   NVRAM_EF_L1_EPSK_TX_POWER_OFFSET_DCS_LID
* DESCRIPTION
*   TX POWER offset used for adjusting output TX power in EPSK modulation for DCS band.
* INFOMATION
*   Can OTA Reset: Yes
*   Update Scenario: This LID will be updated in initial task.
*********************************************************************************************/

LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_L1_EPSK_TX_POWER_OFFSET_DCS_LID)
tx_power_offset_t *NVRAM_EF_L1_EPSK_TX_POWER_OFFSET_DCS_TOTAL
{

};

/********************************************************************************************
* LID_NAME
*   NVRAM_EF_L1_EPSK_TX_POWER_OFFSET_PCS_LID
* DESCRIPTION
*   TX POWER offset used for adjusting output TX power in EPSK modulation for PCS band.
* INFOMATION
*   Can OTA Reset: Yes
*   Update Scenario: This LID will be updated in initial task.
*********************************************************************************************/

LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_L1_EPSK_TX_POWER_OFFSET_PCS_LID)
tx_power_offset_t *NVRAM_EF_L1_EPSK_TX_POWER_OFFSET_PCS_TOTAL
{

};
#endif   /* __TX_POWER_OFFSET_SUPPORT__ */


#if defined(__RX_POWER_OFFSET_SUPPORT__)
/***************************************************************************************************
* LID_NAME
*      NVRAM_EF_L1_2G_RF_RX_PARAMETER_EXT_LID
* DESCRIPTION
*      This nvram item is used for setting RX power offset.  It is enabled for Normal / Meta mode.
*      Reference:Platform_System_RF_MT6763_RF_NVRAM_LID_Introduction_Application_Note.docx
* INFORMATION
*     Can OTA Reset: Yes
*     Update Scenario:This LID will be updated in initial task
****************************************************************************************************/
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_L1_2G_RF_RX_PARAMETER_EXT_LID)
l1_2g_rf_rx_parameter_ext_t *NVRAM_EF_L1_2G_RF_RX_PARAMETER_EXT_TOTAL
{

};

/********************************************************************************************
* LID_NAME
*   NVRAM_EF_L1_AGCPATHLOSS_OFFSET_LID
* DESCRIPTION
*   It is the calibration data of AGC pathloss
* INFOMATION
*   Can OTA Reset: Yes
*   Update Scenario: This LID will be updated in initial task.
*********************************************************************************************/
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_L1_AGCPATHLOSS_OFFSET_LID)
l1cal_agclnaPathLoss_T *NVRAM_EF_L1_AGCPATHLOSS_OFFSET_TOTAL
{

};
#endif /*__RX_POWER_OFFSET_SUPPORT__*/

#if defined(__TAS_SUPPORT__)
/***************************************************************************************************
* LID_NAME
*      NVRAM_EF_L1_TAS_CUSTOM_PARAMES_LID
* DESCRIPTION
*      This nvram item includes GSM TAS parameters and can be customized.
*      Reference:Platform_System_RF_MT6763_RF_NVRAM_LID_Introduction_Application_Note.docx
* INFORMATION
*     Can OTA Reset: Yes
*     Update Scenario:This LID will be updated in initial task
****************************************************************************************************/
     LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_L1_TAS_CUSTOM_PARAMES_LID)
     L1D_CUSTOM_TAS_NVRAM_T *NVRAM_EF_L1_TAS_CUSTOM_PARAMES_TOTAL
     {

     };
/***************************************************************************************************
* LID_NAME
*      NVRAM_EF_L1_TAS_CUSTOM_FE_PARAMS_LID
* DESCRIPTION
*      This nvram item includes GSM TAS FE parameters and can be customized.
*      Reference:Platform_System_RF_MT6763_RF_NVRAM_LID_Introduction_Application_Note.docx
* INFORMATION
*     Can OTA Reset: Yes
*     Update Scenario:This LID will be updated in initial task
****************************************************************************************************/
     LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_L1_TAS_CUSTOM_FE_PARAMS_LID)
     L1D_CUSTOM_TAS_FE_NVRAM_T *NVRAM_EF_L1_TAS_CUSTOM_FE_PARAMS_TOTAL
     {

     };
/***************************************************************************************************
* LID_NAME
*      NVRAM_EF_L1_TAS_CUSTOM_INHERIT_LTE_BAND_LID
* DESCRIPTION
*      This nvram item includes GSM to choose inherit antenna from LTE band or not.based on
*      Custom folder setting.
*      Reference:Platform_System_RF_MT6763_RF_NVRAM_LID_Introduction_Application_Note.docx
* INFORMATION
*      Can OTA Reset: Yes
*      Update Scenario:This LID will be updated in initial task
****************************************************************************************************/
     LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_L1_TAS_CUSTOM_INHERIT_LTE_BAND_LID)
     L1D_CUSTOM_TAS_INHERIT_LTE_BAND_BITMAP_TABLE_T *NVRAM_EF_L1_TAS_CUSTOM_INHERIT_LTE_BAND_TOTAL
     {

     };
#endif

#if defined(__DYNAMIC_ANTENNA_TUNING__)
/***************************************************************************************************
* LID_NAME
*      NVRAM_EF_L1_DAT_CUSTOM_FE_ROUTE_PARAMES_LID
* DESCRIPTION
*      This nvram item provides information on whether DAT is enabled of not. It also provides route number for CAT A/B
*      Reference:Platform_System_RF_MT6763_RF_NVRAM_LID_Introduction_Application_Note.docx
* INFORMATION
*     Can OTA Reset: Yes
*     Update Scenario:This LID will be updated in initial task
****************************************************************************************************/
 LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_L1_DAT_CUSTOM_FE_ROUTE_PARAMES_LID)
 L1D_CUSTOM_DAT_FE_ROUTE_NVRAM_T *NVRAM_EF_L1_DAT_CUSTOM_FE_ROUTE_PARAMES_TOTAL
 {

 };

/***************************************************************************************************
* LID_NAME
*      NVRAM_EF_L1_DAT_CUSTOM_FE_CAT_A_PARAMES_LID
* DESCRIPTION
*      This nvram item includes CAT A route parameters.
*      Reference:Platform_System_RF_MT6763_RF_NVRAM_LID_Introduction_Application_Note.docx
* INFORMATION
*     Can OTA Reset: Yes
*     Update Scenario:This LID will be updated in initial task
****************************************************************************************************/
 LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_L1_DAT_CUSTOM_FE_CAT_A_PARAMES_LID)
 L1D_CUSTOM_DAT_FE_CAT_A_NVRAM_T *NVRAM_EF_L1_DAT_CUSTOM_FE_CAT_A_PARAMES_TOTAL
 {

 };

/***************************************************************************************************
* LID_NAME
*      NVRAM_EF_L1_DAT_CUSTOM_FE_CAT_B_PARAMES_LID
* DESCRIPTION
*      This nvram item includes CAT B route parameters.
*      Reference:Platform_System_RF_MT6763_RF_NVRAM_LID_Introduction_Application_Note.docx
* INFORMATION
*     Can OTA Reset: Yes
*     Update Scenario:This LID will be updated in initial task
****************************************************************************************************/
 LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_L1_DAT_CUSTOM_FE_CAT_B_PARAMES_LID)
 L1D_CUSTOM_DAT_FE_CAT_B_NVRAM_T *NVRAM_EF_L1_DAT_CUSTOM_FE_CAT_B_PARAMES_TOTAL
 {

 };
#endif

#if defined(__ANT_RXPWR_OFFSET_SUPPORT__)
/***********************************************************************
  ***  This is a nvram data item bit level description for meta tools nvram editor
  ***
  ***  Logical Data Item ID: NVRAM_EF_L1_ANTENNA_RXPWR_OFFSET_LID
  ***
  ***  Module: L1
  ***
  ***  Description:
  ***
  ***  Maintainer:
  ***
  ***********************************************************************/
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_L1_ANT_RXPWR_OFFSET_LID)
sL1D_ANT_RxPWR_Offset_v2_T* NVRAM_EF_L1_ANT_RXPWR_OFFSET_TOTAL
{

};
#endif

/***************************************************************************************************
* LID_NAME
*      NVRAM_EF_L1_RFC_LID
* DESCRIPTION
*      This nvram item includes GSM self-calibration data. This cannot be customized.
*      Reference:Platform_System_RF_MT6763_RF_NVRAM_LID_Introduction_Application_Note.docx
* INFORMATION
*     Can OTA Reset: No
*     Update Scenario:This LID will be updated in initial task
****************************************************************************************************/
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_L1_RFC_LID)
l1cal_mmrfc_result_T *NVRAM_EF_L1_RFC_LID_TOTAL
{

};

#if defined(__2G_RF_CUSTOM_TOOL_SUPPORT__)
/********************************************************************************************
* LID_NAME
*   NVRAM_EF_L1_2G_RF_PARAMETER_LID
* DESCRIPTION
*   GSM RF parameters like BSI/BPI values and timing.
* INFOMATION
*   Can OTA Reset: Yes
*   Update Scenario: This LID will be updated in initial task.
*********************************************************************************************/
    LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_L1_2G_RF_PARAMETER_LID)
     l1d_rf_custom_input_data_T *NVRAM_EF_L1_2G_RF_PARAMETER_TOTAL
     {
      start:"#U_0x12345678_L_0x12345678";                    // the special pattern of start position
      version:"";                                            // Struct Version ID
      RF_Type:"";                                            // RF type
      is_data_update:"#U_1_L_1";                             // default is false, and will be changed  as true after tool update

      RF_BPI_Variable:"";

      RF_Timing_Variable:""{};
      RF_Timing_Variable.xQB_RX_FENA_2_FSYNC:"#U_32767"{};
      RF_Timing_Variable.xQB_RX_FSYNC_2_FENA:"#U_32767"{};
      RF_Timing_Variable.xQB_TX_FENA_2_FSYNC:"#U_32767"{};
      RF_Timing_Variable.xQB_TX_FSYNC_2_FENA:"#U_32767"{};
      RF_Timing_Variable.xQB_SR0:"#U_32767"{};
      RF_Timing_Variable.xQB_SR1:"#U_32767"{};
      RF_Timing_Variable.xQB_SR2:"#U_32767"{};
      RF_Timing_Variable.xQB_SR3:"#U_32767"{};
      RF_Timing_Variable.xQB_SR2M:"#U_32767"{};
      RF_Timing_Variable.xQB_PR1:"#U_32767"{};
      RF_Timing_Variable.xQB_PR2:"#U_32767"{};
      RF_Timing_Variable.xQB_PR2B:"#U_32767"{};
      RF_Timing_Variable.xQB_PR3:"#U_32767"{};
      RF_Timing_Variable.xQB_PR3A:"#U_32767"{};
      RF_Timing_Variable.xQB_PR2M1:"#U_32767"{};
      RF_Timing_Variable.xQB_PR2M2:"#U_32767"{};
      RF_Timing_Variable.xQB_ST0:"#U_32767"{};
      RF_Timing_Variable.xQB_ST1:"#U_32767"{};
      RF_Timing_Variable.xQB_ST2:"#U_32767"{};
      RF_Timing_Variable.xQB_ST2B:"#U_32767"{};
      RF_Timing_Variable.xQB_ST3:"#U_32767"{};
      RF_Timing_Variable.xQB_ST2M_G8:"#U_32767"{};
      RF_Timing_Variable.xQB_ST2M_8G:"#U_32767"{};
      RF_Timing_Variable.xQB_PT1:"#U_32767"{};
      RF_Timing_Variable.xQB_PT2:"#U_32767"{};
      RF_Timing_Variable.xQB_PT2B:"#U_32767"{};
      RF_Timing_Variable.xQB_PT3:"#U_32767"{};
      RF_Timing_Variable.xQB_PT3A:"#U_32767"{};
      RF_Timing_Variable.xQB_PT2M1_G8:"#U_32767"{};
      RF_Timing_Variable.xQB_PT2M2_G8:"#U_32767"{};
      RF_Timing_Variable.xQB_PT2M3_G8:"#U_32767"{};
      RF_Timing_Variable.xQB_PT2M1_8G:"#U_32767"{};
      RF_Timing_Variable.xQB_PT2M2_8G:"#U_32767"{};
      RF_Timing_Variable.xQB_PT2M3_8G:"#U_32767"{};
      RF_Timing_Variable.xQB_APCON:"#U_32767"{};
      RF_Timing_Variable.xQB_APCMID:"#U_32767"{};
      RF_Timing_Variable.xQB_APCOFF:"#U_32767"{};
      RF_Timing_Variable.xQB_APCDACON:"#U_32767"{};

      RF_APC_Compensate_Variable:""{};
      RF_APC_Compensate_Variable.xBAT_VOLTAGE_SAMPLE_PERIOD:"#U_10000"{};
      RF_APC_Compensate_Variable.xBAT_VOLTAGE_AVERAGE_COUNT:"#U_10000"{};
      RF_APC_Compensate_Variable.xBAT_TEMPERATURE_SAMPLE_PERIOD:"#U_10000"{};
      RF_APC_Compensate_Variable.xBAT_TEMPERATURE_AVERAGE_COUNT:"#U_10000"{};
      //RF_APC_Compensate_Variable.xBAT_LOW_VOLTAGE:"#U_10000"{};
      //RF_APC_Compensate_Variable.xBAT_HIGH_VOLTAGE:"#U_10000"{};
      //RF_APC_Compensate_Variable.xBAT_LOW_TEMPERATURE:"#U_10000"{};
      //RF_APC_Compensate_Variable.xBAT_HIGH_TEMPERATURE:"#U_10000"{};
      RF_APC_Compensate_Variable.xRF_TEMPERATURE_SAMPLE_PERIOD:"#U_10000"{};
      RF_APC_Compensate_Variable.xRF_TEMPERATURE_AVERAGE_COUNT:"#U_10000"{};

      RF_PCL_Varaible:"";
      RF_Lbmod_GC_Variable:"";
      RF_Hbmod_GC_Variable:"";
      RF_ITC_PCL_Variable:"";

      RF_TX_PowerFeedback_Variable:""{};
      //RF_TX_PowerFeedback_Variable.xCLOSED_LOOP_TXPC_TYPE:"#U_127"{};
      RF_TX_PowerFeedback_Variable.xQB_TX_SAMPLE_OFFSET_GMSK:"#U_32767"{};
      RF_TX_PowerFeedback_Variable.xQB_TX_SAMPLE_OFFSET_EPSK:"#U_32767"{};
      RF_TX_PowerFeedback_Variable.xTXPC_EPSK_TP_SLOPE_LB:"#U_32767"{};
      RF_TX_PowerFeedback_Variable.xTXPC_EPSK_TP_SLOPE_HB:"#U_32767"{};

      //RF_TX_Power_Rollback_Variable:""{};

      RF_RX_Band_Variable:""{};

      RF_Others_Variable:""{};
      //RF_Others_Variable.xXO_CapID:"#U_10000"{};
      //RF_Others_Variable.xafc_dac_default:"#U_32767"{};
      //RF_Others_Variable.xafc_inv_slope:"#U_32767"{};
      RF_Others_Variable.xEGSM_DISABLE:"#U_127"{};
      //RF_Others_Variable.xGSM850_GSM900_SWAP:"#U_127"{};
      //RF_Others_Variable.xDCS1800_PCS1900_SWAP:"#U_127"{};
      RF_Others_Variable.xGSM_ERR_DET_ID:"#U_127"{};

      RF_AFC_Tracking_Variable:""{};
      RF_AFC_Tracking_Variable.xAFC_PREDICTION_ON:"#U_127"{};
      RF_AFC_Tracking_Variable.xAFC_PREDICTION_INTERVAL:"#U_32767"{};
      RF_AFC_Tracking_Variable.xAFC_PREDICTION_DECAYING_FACTOR:"#U_255"{};

      RF_CLK_Buffer_Variable:""{};

      end:"#U_0x87654321_L_0x87654321";                     // the special pattern of end1 position

     };
#endif
/********************************************************************************************
* LID_NAME
*   NVRAM_EF_L1_CUSTOM_BAND_SUPPORT_LID
* DESCRIPTION
*   Gives the Frequency bands supported by GSM
* INFOMATION
*   Can OTA Reset: Yes
*   Update Scenario: This LID will be updated in initial task.
*********************************************************************************************/
     LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_L1_CUSTOM_BAND_SUPPORT_LID)
     l1cal_l1CustomBandSupport_T *NVRAM_EF_L1_CUSTOM_BAND_SUPPORT_TOTAL
     {

     };

#if defined(__2G_MIPI_SUPPORT__)
   #ifdef __GSM850__
/***************************************************************************************************
* LID_NAME
*      NVRAM_EF_L1_MIPI_CTRL_TABLE_GSM850_LID
* DESCRIPTION
*      This nvram item includes GSM MIPI setting data for GSM 850 band.  This can be customized.
*      Reference:Platform_System_RF_MT6763_RF_NVRAM_LID_Introduction_Application_Note.docx
* INFORMATION
*     Can OTA Reset: Yes
*     Update Scenario:This LID will be updated in initial task
****************************************************************************************************/
     LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_L1_MIPI_CTRL_TABLE_GSM850_LID)
     l1cal_mipi_ctrl_table_band_T *NVRAM_EF_L1_MIPI_CTRL_TABLE_GSM850_TOTAL
     {

     };
   #endif
   #ifdef __EGSM900__
/***************************************************************************************************
* LID_NAME
*      NVRAM_EF_L1_MIPI_CTRL_TABLE_GSM900_LID
* DESCRIPTION
*      This nvram item includes GSM MIPI setting data for GSM 900 band.  This can be customized.
*      Reference:Platform_System_RF_MT6763_RF_NVRAM_LID_Introduction_Application_Note.docx
* INFORMATION
*     Can OTA Reset: Yes
*     Update Scenario:This LID will be updated in initial task
****************************************************************************************************/
     LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_L1_MIPI_CTRL_TABLE_GSM900_LID)
     l1cal_mipi_ctrl_table_band_T *NVRAM_EF_L1_MIPI_CTRL_TABLE_GSM900_TOTAL
     {

     };
   #endif
   #ifdef __DCS1800__
/***************************************************************************************************
* LID_NAME
*      NVRAM_EF_L1_MIPI_CTRL_TABLE_DCS1800_LID
* DESCRIPTION
*      This nvram item includes GSM MIPI setting data for DCS 1800 band.  This can be customized.
*      Reference:Platform_System_RF_MT6763_RF_NVRAM_LID_Introduction_Application_Note.docx
* INFORMATION
*     Can OTA Reset: Yes
*     Update Scenario:This LID will be updated in initial task
****************************************************************************************************/
     LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_L1_MIPI_CTRL_TABLE_DCS1800_LID)
     l1cal_mipi_ctrl_table_band_T *NVRAM_EF_L1_MIPI_CTRL_TABLE_DCS1800_TOTAL
     {

     };
   #endif
   #ifdef __PCS1900__
/***************************************************************************************************
* LID_NAME
*      NVRAM_EF_L1_MIPI_CTRL_TABLE_PCS1900_LID
* DESCRIPTION
*      This nvram item includes GSM MIPI setting data for DCS 1900 band.  This can be customized.
*      Reference:Platform_System_RF_MT6763_RF_NVRAM_LID_Introduction_Application_Note.docx
* INFORMATION
*     Can OTA Reset: Yes
*     Update Scenario:This LID will be updated in initial task
****************************************************************************************************/
     LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_L1_MIPI_CTRL_TABLE_PCS1900_LID)
     l1cal_mipi_ctrl_table_band_T *NVRAM_EF_L1_MIPI_CTRL_TABLE_PCS1900_TOTAL
     {

     };
   #endif
#endif

#if defined(__2G_TX_POWER_CONTROL_SUPPORT__)
#if !defined(__UMTS_RAT__) || !defined(__MTK_UL1_FDD__)|| defined(__MULTI_RAT_AFC_TADC_SHARE_SUPPORT__)
/***************************************************************************************************
* LID_NAME
*      NVRAM_EF_L1_TEMPERATURE_ADC_LID
* DESCRIPTION
*      This nvram item includes calibration data of GSWM Temperature DAC, can be customized.
*      Reference:Platform_System_RF_MT6763_RF_NVRAM_LID_Introduction_Application_Note.docx
* INFORMATION
*     Can OTA Reset: No
*     Update Scenario:This LID will be updated in initial task
****************************************************************************************************/
     LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_L1_TEMPERATURE_ADC_LID)
     l1cal_temperatureADC_T *NVRAM_EF_L1_TEMPERATURE_ADC_TOTAL
     {

     };
#endif /*!defined(__UMTS_RAT__) || !defined(__MTK_UL1_FDD__)|| defined(__MULTI_RAT_AFC_TADC_SHARE_SUPPORT__)*/
#endif /*__2G_TX_POWER_CONTROL_SUPPORT__*/


/********************************************************************************************
* LID_NAME
*   NVRAM_EF_L1_AFCDATA_LID
* DESCRIPTION
*   It is the calibration data for AFC DAC and AFC slope
* INFOMATION
*   Can OTA Reset: No
*   Update Scenario: This LID will be updated in initial task.
*********************************************************************************************/
     LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_L1_AFCDATA_LID)
     l1cal_afcData_T *NVRAM_EF_L1_AFCDATA_TOTAL
     {
     };

/***************************************************************************************************
* LID_NAME
*      NVRAM_EF_L1_TXIQ_LID
* DESCRIPTION
*      This nvram item includes Baseband TX parameter.  Only GSM voltage and temperature compensation 
*      and AP update voltage information period can be customized.  Other parameters cannot be customized.
*      Reference:Platform_System_RF_MT6763_RF_NVRAM_LID_Introduction_Application_Note.docx
* INFORMATION
*     Can OTA Reset: No
*     Update Scenario:This LID will be updated in initial task
****************************************************************************************************/
     LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_L1_TXIQ_LID)
     l1cal_txiq_T *NVRAM_EF_L1_TXIQ_TOTAL
     {
     };

/***************************************************************************************************
* LID_NAME
*      NVRAM_EF_L1_RFSPECIALCOEF_LID
* DESCRIPTION
*      This nvram item includes GSM RF Special Coefficient data. This cannot be customized.
*      Reference:Platform_System_RF_MT6763_RF_NVRAM_LID_Introduction_Application_Note.docx
* INFORMATION
*     Can OTA Reset: No
*     Update Scenario:This LID will be updated in initial task
****************************************************************************************************/
     LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_L1_RFSPECIALCOEF_LID)
     l1cal_rfspecialcoef_T *NVRAM_EF_L1_RFSPECIALCOEF_TOTAL
     {
     };


#ifdef __PS_SERVICE__
#ifdef __GSM850__


/********************************************************************************************
* LID_NAME
*   NVRAM_EF_L1_INTERSLOT_RAMP_GSM850_LID
* DESCRIPTION
*   Stores the insterslot ramping data for GMSK GSM850 band , can be customaisied. 
* INFOMATION
*   Can OTA Reset: No
*   Update Scenario: This LID will be updated in initial task.
*********************************************************************************************/
     LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_L1_INTERSLOT_RAMP_GSM850_LID)
     l1cal_interRampData_T *NVRAM_EF_L1_INTERSLOT_RAMP_GSM850_TOTAL
     {
     };


#endif
#ifdef __EGSM900__


/********************************************************************************************
* LID_NAME
*   NVRAM_EF_L1_INTERSLOT_RAMP_GSM900_LID
* DESCRIPTION
*   Stores the insterslot ramping data for GMSK GSM900 band , can be customaisied. 
* INFOMATION
*   Can OTA Reset: No
*   Update Scenario: This LID will be updated in initial task.
*********************************************************************************************/
     LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_L1_INTERSLOT_RAMP_GSM900_LID)
     l1cal_interRampData_T *NVRAM_EF_L1_INTERSLOT_RAMP_GSM900_TOTAL
     {
     };


#endif
#ifdef __DCS1800__


/********************************************************************************************
* LID_NAME
*   NVRAM_EF_L1_INTERSLOT_RAMP_DCS1800_LID
* DESCRIPTION
*   Stores the insterslot ramping data for GMSK DCS1800 band , can be customaisied. 
* INFOMATION
*   Can OTA Reset: No
*   Update Scenario: This LID will be updated in initial task.
*********************************************************************************************/
     LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_L1_INTERSLOT_RAMP_DCS1800_LID)
     l1cal_interRampData_T *NVRAM_EF_L1_INTERSLOT_RAMP_DCS1800_TOTAL
     {
     };



#endif
#ifdef __PCS1900__


/********************************************************************************************
* LID_NAME
*   NVRAM_EF_L1_INTERSLOT_RAMP_PCS1900_LID
* DESCRIPTION
*   Stores the insterslot ramping data for GMSK PCS1900 band , can be customaisied. 
* INFOMATION
*   Can OTA Reset: No
*   Update Scenario: This LID will be updated in initial task.
*********************************************************************************************/
     LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_L1_INTERSLOT_RAMP_PCS1900_LID)
     l1cal_interRampData_T *NVRAM_EF_L1_INTERSLOT_RAMP_PCS1900_TOTAL
     {
     };


#endif
#endif /* __PS_SERVICE__ */


/********************************************************************************************
* LID_NAME
*   NVRAM_EF_L1_CRYSTAL_AFCDATA_LID
* DESCRIPTION
*   Calibration data for AFC using cystal
* INFOMATION
*   Can OTA Reset: No
*   Update Scenario: This LID will be updated in initial task.
*********************************************************************************************/
     LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_L1_CRYSTAL_AFCDATA_LID)
     l1cal_crystalAfcData_T *NVRAM_EF_L1_CRYSTAL_AFCDATA_TOTAL
     {
     };

/********************************************************************************************
* LID_NAME
*   NVRAM_EF_L1_CRYSTAL_CAPDATA_LID
* DESCRIPTION
*   Calibration data for CAP ID, Range [0,255]
* INFOMATION
*   Can OTA Reset: No
*   Update Scenario: This LID will be updated in initial task.
*********************************************************************************************/
     LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_L1_CRYSTAL_CAPDATA_LID)
     l1cal_crystalCapData_T *NVRAM_EF_L1_CRYSTAL_CAPDATA_TOTAL
     {
     };

#if defined(__2G_RX_DIVERSITY_PATH_SUPPORT__)
/***********************************************************************
  *** This is a nvram data item bit level description for meta tools nvram editor
  ***
  *** Logical Data Item ID : NVRAM_EF_L1_AGCPATHLOSS_RXD_LID
  ***
  *** Module: L1
  ***
  *** Description:
  ***
  *** Maintainer:
  ***
  ***********************************************************************/
     LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_L1_AGCPATHLOSS_RXD_LID)
     l1cal_agcPathLoss_T *NVRAM_EF_L1_AGCPATHLOSS_RXD_TOTAL
     {

     };

#if defined(__MULTI_LNA_MODE_CALIBRATION_SUPPORT__)
/***********************************************************************
  ***  This is a nvram data item bit level description for meta tools nvram editor
  ***
  ***  Logical Data Item ID : NVRAM_EF_L1_LNAPATHLOSS_RXD_LID
  ***
  ***  Module: L1
  ***
  ***  Description:
  ***
  ***  Maintainer:
  ***
  ***********************************************************************/
     LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_L1_LNAPATHLOSS_RXD_LID)
     l1cal_lnaPathLoss_T *NVRAM_EF_L1_LNAPATHLOSS_RXD_TOTAL
     {
     };
#endif /*__MULTI_LNA_MODE_CALIBRATION_SUPPORT__*/

#if defined(__RX_POWER_OFFSET_SUPPORT__)
/***********************************************************************
  *** This is a nvram data item bit level description for meta tools nvram editor
  ***
  *** Logical Data Item ID : NVRAM_EF_L1_AGCPATHLOSS_OFFSET_RXD_LID
  ***
  *** Module: L1
  ***
  *** Description:
  ***
  *** Maintainer:
  ***
  ***********************************************************************/
     LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_L1_AGCPATHLOSS_OFFSET_RXD_LID)
     l1cal_agclnaPathLoss_T *NVRAM_EF_L1_AGCPATHLOSS_OFFSET_RXD_TOTAL
     {

     };
#endif /*__RX_POWER_OFFSET_SUPPORT__*/
/***********************************************************************
  *** This is a nvram data item bit level description for meta tools nvram editor
  ***
  *** Logical Data Item ID : NVRAM_EF_L1_WCOEF_RXD_LID
  ***
  *** Module: L1
  ***
  *** Description:
  ***
  *** Maintainer:
  ***
  ***********************************************************************/
     LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_L1_WCOEF_RXD_LID)
     l1cal_wcoef_T *NVRAM_EF_L1_WCOEF_RXD_TOTAL
     {

     };
/***********************************************************************
  *** This is a nvram data item bit level description for meta tools nvram editor
  ***
  *** Logical Data Item ID : NVRAM_EF_L1_RAS_CUSTOM_PARAMES_LID
  ***
  *** Module: L1
  ***
  *** Description:
  ***
  *** Maintainer:
  ***
  ***********************************************************************/
     LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_L1_RAS_CUSTOM_PARAMES_LID)
     L1D_CUSTOM_RAS_NVRAM_T *NVRAM_EF_L1_RAS_CUSTOM_PARAMES_TOTAL
     {

     };

#endif /**#if defined(__2G_RX_DIVERSITY_PATH_SUPPORT__)***/
#if defined(__SAR_TX_POWER_BACKOFF_SUPPORT__)
/***********************************************************************
  *** This is a nvram data item bit level description for meta tools nvram editor
  ***
  *** Logical Data Item ID : NVRAM_EF_L1_SAR_TX_BACKOFF_DB_CUSTOM_PARAMES_LID
  ***
  *** Module: L1
  ***
  *** Description:
  ***
  *** Maintainer:
  ***
  ***********************************************************************/
     LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_L1_SAR_TX_BACKOFF_DB_CUSTOM_PARAMES_LID)
     L1D_CUSTOM_SAR_TX_BACKOFF_DB_NVRAM_T *NVRAM_EF_L1_SAR_TX_BACKOFF_DB_CUSTOM_PARAMES_TOTAL
     {

     };
#endif

END_NVRAM_DATA
#endif	/*GEN FOR PC*/

#ifdef __cplusplus
}
#endif 

#endif  /* !NVRAM_NOT_PRESENT */
#endif  /* __L1_NVRAM_EDITOR_H__ */
