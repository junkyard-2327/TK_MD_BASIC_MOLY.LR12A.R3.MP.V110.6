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
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/
#ifndef __MML1_NVRAM_EDITOR_H__
#define __MML1_NVRAM_EDITOR_H__


#ifndef NVRAM_NOT_PRESENT
#ifdef __cplusplus
extern "C"
{
#endif /* __cplusplus */ 

#include "mml1_nvram_def.h"

/*** MMRF related items   ***/
typedef struct
{
   MML1_MIPI_INITIAL_CW_T mipi_initial_cw_table[MML1_MIPI_MAX_INITIAL_CW_NUM];
}nvram_mml1_mipi_initial_cw_struct;

typedef struct
{
   MML1_MIPI_USID_CHANGE_T mipi_usid_change_table[MML1_MIPI_MAX_USID_CHANGE_NUM];
}nvram_mml1_mipi_usid_change_struct;

#if defined(__RF_DRDI_CAPABILITY_SUPPORT__)
typedef struct
{
    Mml1RfDrdiDynamicInitParam mml1_drdi_dynamic_init;
}nvram_mml1_dynamic_init_struct;
#endif



#ifdef __MMRF_MIPI_HW_CHECK_SUPPORT__
typedef struct
{
   MML1_MIPI_CHECK_HW_T mipi_hw_check_table[MML1_MIPI_MAX_HW_CHECK_NUM];
}nvram_mml1_mipi_hw_check_struct;
#endif


/*****************
 * Barcode number
 *****************/
typedef struct
{
    kal_uint8 nvram_ef_barcode_num[NVRAM_EF_BARCODE_NUM_SIZE];
} nvram_ef_barcode_num_struct;

typedef struct
{
   MML1_MIPI_LPM_CW_T mipi_lpm_cw_table[MML1_MIPI_MAX_LPM_CW_NUM];
}nvram_mml1_mipi_lpm_cw_struct;

#ifdef GEN_FOR_PC
BEGIN_NVRAM_DATA

/*** MMRF Related Nvram Items ***/
/***************************************************************************************************
* LID_NAME
*      NVRAM_EF_MML1_RF_PARAMETER_LID
*DESCRIPTION
*      This nvram item include clock buffer & IQ swap setting but it does not effect after Gen92 modem.
*      Reference:Platform_System_RF_MT6763_RF_NVRAM_LID_Introduction_Application_Note.docx
*INFORMATION
*     Can OTA Reset: Yes
*     Update Scenario:This LID will update once during task init.
****************************************************************************************************/
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_MML1_RF_PARAMETER_LID)
     mml1_rf_custom_input_data_T *NVRAM_EF_MML1_RF_PARAMETER_TOTAL
     {

     };
/***************************************************************************************************
* LID_NAME
*      NVRAM_EF_MML1_RF_POC_DATA_LID
*DESCRIPTION
*      This Nvram LID store POC calibration data and can't be modified.
*      Reference:Platform_System_RF_MT6763_RF_NVRAM_LID_Introduction_Application_Note.docx
*INFORMATION
*     Can OTA Reset: No
*     Update Scenario:This LID will update once during task init.
****************************************************************************************************/
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_MML1_RF_POC_DATA_LID)
     mml1_rf_poc_data_T *NVRAM_EF_MML1_RF_POC_DATA_TOTAL
     {

     };
/***************************************************************************************************
* LID_NAME
*      NVRAM_EF_MML1_MIPI_INITIAL_CW_LID
*DESCRIPTION
*      This nvram item store mipi initial cw setting.
*      Reference:Platform_System_RF_MT6763_RF_NVRAM_LID_Introduction_Application_Note.docx
*INFORMATION
*     Can OTA Reset: Yes
*     Update Scenario:This LID will update once during task init.
****************************************************************************************************/
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_MML1_MIPI_INITIAL_CW_LID)
     nvram_mml1_mipi_initial_cw_struct *NVRAM_EF_MML1_MIPI_INITIAL_CW_TOTAL
     {

     };
/***************************************************************************************************
* LID_NAME
*      NVRAM_EF_MML1_MIPI_USID_CHANGE_LID
*DESCRIPTION
*      This nvram item store mipi usid change setting.
*      Reference:Platform_System_RF_MT6763_RF_NVRAM_LID_Introduction_Application_Note.docx
*INFORMATION
*     Can OTA Reset: Yes
*     Update Scenario:This LID will update once during task init.
****************************************************************************************************/
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_MML1_MIPI_USID_CHANGE_LID)
     nvram_mml1_mipi_usid_change_struct *NVRAM_EF_MML1_MIPI_USID_CHANGE_TOTAL
     {

     };

#ifdef __MMRF_MIPI_HW_CHECK_SUPPORT__
/***************************************************************************************************
* LID_NAME
*      NVRAM_EF_MML1_MIPI_HW_CHECK_LID
*DESCRIPTION
*      This nvram item store mipi hw device check feature setting.
*      Reference:Platform_System_RF_MT6763_RF_NVRAM_LID_Introduction_Application_Note.docx
*INFORMATION
*     Can OTA Reset: Yes
*     Update Scenario:This LID will update once during task init.
****************************************************************************************************/
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_MML1_MIPI_HW_CHECK_LID)
     nvram_mml1_mipi_hw_check_struct *NVRAM_EF_MML1_MIPI_HW_CHECK_TOTAL
     {

     };
#endif
#ifdef __RF_DRDI_CAPABILITY_SUPPORT__
/***************************************************************************************************
* LID_NAME
*      NVRAM_EF_MML1_CUSTOM_DYNAMIC_INIT_LID
*DESCRIPTION
*      This nvram item store drdi information.
*      Reference:Platform_System_RF_MT6763_RF_NVRAM_LID_Introduction_Application_Note.docx
*INFORMATION
*     Can OTA Reset: Yes
*     Update Scenario:This LID will update once during task init.
****************************************************************************************************/
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_MML1_CUSTOM_DYNAMIC_INIT_LID)
     nvram_mml1_dynamic_init_struct *NVRAM_EF_MML1_CUSTOM_DYNAMIC_INIT_TOTAL
     {

     };
#endif
#if defined(__TX_POWER_OFFSET_SUPPORT__)
/***************************************************************************************************
* LID_NAME
*      NVRAM_EF_MML1_TXPOWEROFFSET_LID
*DESCRIPTION
*      This nvram store Tx power offset feature related setting.
*      Reference:Platform_System_RF_MT6763_RF_NVRAM_LID_Introduction_Application_Note.docx
*INFORMATION
*     Can OTA Reset: Yes
*     Update Scenario:This LID will update once during task init.
****************************************************************************************************/
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_MML1_TXPOWEROFFSET_LID)
     MML1_RF_SWTP_T *NVRAM_EF_MML1_TXPOWEROFFSET_TOTAL
     {

     };
#endif
#if defined(__SAR_TX_POWER_BACKOFF_SUPPORT__)
/***************************************************************************************************
* LID_NAME
*      NVRAM_EF_MML1_SAR_TXPOWEROFFSET_LID
*DESCRIPTION
*      This nvram store SAR Tx power offset feature related setting.
*      Reference:Platform_System_RF_MT6763_RF_NVRAM_LID_Introduction_Application_Note.docx
*INFORMATION
*     Can OTA Reset: Yes
*     Update Scenario:This LID will update once during task init.
****************************************************************************************************/
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_MML1_SAR_TXPOWEROFFSET_LID)
     MML1_RF_SAR_T *NVRAM_EF_MML1_SAR_TXPOWEROFFSET_TOTAL
     {

     };
#endif
/***************************************************************************************************
* LID_NAME
*      NVRAM_EF_MML1_CRYSTAL_LID
*DESCRIPTION
*      Vcxo_type & crystal_on_pmic_en setting.
*      Reference:Platform_System_RF_MT6763_RF_NVRAM_LID_Introduction_Application_Note.docx
*INFORMATION
*     Can OTA Reset: Yes
*     Update Scenario:This LID will update once during task init.
****************************************************************************************************/
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_MML1_CRYSTAL_LID)
     MML1_CRYSTAL_T *NVRAM_EF_MML1_CRYSTAL_TOTAL
     {

     };
/***************************************************************************************************
* LID_NAME
*      NVRAM_EF_MML1_GPS_CO_TMS_DATA_LID
*DESCRIPTION
*      This nvram LID store GPS CO-TMS calibration data.
*      Reference:Platform_System_RF_MT6763_RF_NVRAM_LID_Introduction_Application_Note.docx
*INFORMATION
*     Can OTA Reset: No
*     Update Scenario:This LID will update once during task init.
****************************************************************************************************/
//GPS Co-Tms cal data
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_MML1_GPS_CO_TMS_DATA_LID)
     MML1_CO_TMS_CONFIG_T *NVRAM_EF_MML1_GPS_CO_TMS_DATA_TOTAL
     {

     };
/***************************************************************************************************
* LID_NAME
*      NVRAM_EF_MML1_TEMPERATURE_DAC_LID
*DESCRIPTION
*      This nvram LID store temperature dac value.
*      Reference:Platform_System_RF_MT6763_RF_NVRAM_LID_Introduction_Application_Note.docx
*INFORMATION
*     Can OTA Reset: No
*     Update Scenario:This LID will update once during task init.
****************************************************************************************************/
//Temperature DAC data
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_MML1_TEMPERATURE_DAC_LID)
     MMRF_TemperatureDac_T *NVRAM_EF_MML1_TEMPERATURE_DAC_TOTAL
     {

     };
/***************************************************************************************************
* LID_NAME
*      NVRAM_EF_MML1_MIPI_LPM_CW_LID
*DESCRIPTION
*      This nvram item store mipi lpm cw setting.
*      Reference:Platform_System_RF_MT6763_RF_NVRAM_LID_Introduction_Application_Note.docx
*INFORMATION
*     Can OTA Reset: Yes
*     Update Scenario:This LID will update once during task init.
****************************************************************************************************/
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_MML1_MIPI_LPM_CW_LID)
     nvram_mml1_mipi_lpm_cw_struct *NVRAM_EF_MML1_MIPI_LPM_CW_TOTAL
     {

     };

/********************************************************************************************
* LID_NAME
*      NVRAM_EF_MML1_ELNA_DATABASE_LID
* DESCRIPTION
*      This LID is for ELNA settling time
* INFOMATION
*      Can OTA Reset: Yes
*      Update Scenario: It will update once during task init.
*********************************************************************************************/
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_MML1_ELNA_DATABASE_LID)
     MML1_FE_ELNA_NVRAM_T *NVRAM_EF_MML1_ELNA_DATABASE_TOTAL
     {
        elna_settling_time:"The unit is us*32 "{};
     };
/***************************************************************************************************
* LID_NAME
*      NVRAM_EF_MML1_ABB_CAL_LID
*DESCRIPTION
*      This nvram LID store POC calibration data .
*      Reference:Platform_System_RF_MT6763_RF_NVRAM_LID_Introduction_Application_Note.docx
*INFORMATION
*     Can OTA Reset: No
*     Update Scenario:This LID will update once during task init.
****************************************************************************************************/
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_MML1_ABB_CAL_LID)
     MMRF_AbbDacCalFromNVRAM_T *NVRAM_EF_MML1_ABB_CAL_TOTAL
     {

     };

#if defined (__MTK_TARGET__) && !defined (__HIF_CCCI_SUPPORT__) //!defined (__HIF_CCCI_SUPPORT__) is modem only load
/********************************************************************************************
* LID_NAME
*      NVRAM_EF_MML1_PMIC_SLT_VOLTAGE_CONTROL_LID
* DESCRIPTION
*      This LID is for PMIC SLT voltage control. (internal use)
* INFOMATION
*      Can OTA Reset: Yes
*      Update Scenario: It will update once during task init.
*********************************************************************************************/
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_MML1_PMIC_SLT_VOLTAGE_CONTROL_LID)
     MMRF_PmicSltDataFromNVRAM_T *NVRAM_EF_MML1_PMIC_SLT_VOLTAGE_CONTROL_TOTAL
     {
        pmic_nvram_control_enable: ""
        {
           pmic_nvram_control_enable:16 "please select"
           {
              0x0: "Disable feature";
              0x1: "Enable feature";
           };
        };
        pmic_reg_read_when_1_write_when_2: ""
        {
           pmic_reg_read_when_1_write_when_2:16 "please select the thing need to do at next time power on"
           {
              0x0: "None";
              0x1: "Read";
              0x2: "Write";
           };
        };
        pmic_vrf18_vocal: ""{};
        pmic_vrf12_vocal: ""{};
        pmic_vrf18_votrim: ""{};
        pmic_vrf12_votrim: ""{};
        pmic_vrf18_vosel: "unavailable at MT6356"{};
        pmic_vrf12_vosel: "unavailable at MT6356"{};
     };
#endif
/***************************************************************************************************
* LID_NAME
*      NVRAM_EF_MML1_CAL_DATA_DL_CHECK_LID
*DESCRIPTION
*      This nvram LID is a record for calibration data have downloaded or not information.
*      Reference:Platform_System_RF_MT6763_RF_NVRAM_LID_Introduction_Application_Note.docx
*INFORMATION
*     Can OTA Reset: No
*     Update Scenario:This LID will update once during task init.
****************************************************************************************************/
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_MML1_CAL_DATA_DL_CHECK_LID)
     MMRF_Cal_Data_Dl_Check_T *NVRAM_EF_MML1_CAL_DATA_DL_CHECK_TOTAL
     {

     };
/***************************************************************************************************
* LID_NAME
*      NVRAM_EF_MML1_EXT_VPA_INITIAL_CW_LID
*DESCRIPTION
*      This nvram LID store external vpa feature initial setting.
*INFORMATION
*     Can OTA Reset: Yes
*     Update Scenario:This LID will update once during task init.
****************************************************************************************************/
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_MML1_EXT_VPA_INITIAL_CW_LID)
     MML1_EXT_VPA_CW_T *NVRAM_EF_MML1_EXT_VPA_INITIAL_CW_TOTAL
     {

     };
/***********************************************************************
  ***  This is a nvram data item bit level description for meta tools nvram editor
  ***
  ***  Logical Data Item ID : NVRAM_EF_BARCODE_NUM_LID
  ***
  ***  Module: FT
  ***
  ***  Description: ME barcode number
  ***
  ***  Maintainer: YH Sung (2010 Sept)
  ***
  ***********************************************************************/
     LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_BARCODE_NUM_LID)
     nvram_ef_barcode_num_struct *NVRAM_EF_BARCODE_NUM_TOTAL
     {
         nvram_ef_barcode_num:"Barcode Serial Number"
         {
         };
     };



#if (defined __MMRF_CAL_DATA_CHECKSUM_VERIFY__ )
/********************************************************************************************
* LID_NAME
*      NVRAM_EF_MML1_CAL_DATA_CHECKSUM_LIST_LID
* DESCRIPTION
*      MMRF ETM Information
* INFOMATION
*      Can OTA Reset: No
*      Update Scenario: It will update once during task init.
*********************************************************************************************/
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_MML1_CAL_DATA_CHECKSUM_LIST_LID)
     MMRF_Cal_Data_Dl_Check_T *NVRAM_EF_MML1_CAL_DATA_CHECKSUM_LIST_TOTAL
     {
     };

/********************************************************************************************
* LID_NAME
*      NVRAM_EF_MML1_CAL_DATA_CHECKSUM_CAL_LID
* DESCRIPTION
*      MMRF ETM Information
* INFOMATION
*      Can OTA Reset: No
*      Update Scenario: It will update once during task init.
*********************************************************************************************/
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_MML1_CAL_DATA_CHECKSUM_CAL_LID)
     MMRF_Cal_Data_Chksum_T *NVRAM_EF_MML1_CAL_DATA_CHECKSUM_CAL_TOTAL
     {
     };

/********************************************************************************************
* LID_NAME
*      NVRAM_EF_MML1_CAL_DATA_CHECKSUM_VERIFY_LID
* DESCRIPTION
*      MMRF ETM Information
* INFOMATION
*      Can OTA Reset: Yes
*      Update Scenario: It will update once during task init.
*********************************************************************************************/
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_MML1_CAL_DATA_CHECKSUM_VERIFY_LID)
     MMRF_Cal_Data_Chksum_T *NVRAM_EF_MML1_CAL_DATA_CHECKSUM_VERIFY_TOTAL
     {
     };
#endif //__MMRF_CAL_DATA_CHECKSUM_VERIFY__
#if defined(__SAR_SENSOR_TX_DETECTION_SUPPORT__)
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_MML1_TX_PWR_INDICATION_THRESHOLD_LID)
 sMMRF_TX_PWR_INDICATION_PARAM_RAT_T *NVRAM_EF_MML1_TX_PWR_INDICATION_THRESHOLD_TOTAL
 {

 };

#endif//__SAR_SENSOR_TX_DETECTION_SUPPORT__



END_NVRAM_DATA
#endif	/*GEN FOR PC*/

#ifdef __cplusplus
}
#endif 

#endif  /* !NVRAM_NOT_PRESENT */
#endif  /* __MML1_NVRAM_EDITOR_H__ */
