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
 * ul1_nvram_editor.h
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description:
 * ------------
 *    This file contains `vendor' defined logical data items stored in NVRAM.
 *    These logical data items are used in object code of Protocol Stack software.
 *
 *    As for customizable logical data items, they are defined in nvram_user_config.c
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
 * removed!
 *
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/
#ifndef __UL1_NVRAM_EDITOR_H__
#define __UL1_NVRAM_EDITOR_H__
#ifndef NVRAM_NOT_PRESENT

/* In case of that not to build this file in 2G projects or 3G TDD projects */
#if defined (__MTK_UL1_FDD__)

#ifdef __cplusplus
extern "C"
{
#endif /* __cplusplus */ 

/*
 *   Include Headers
 */
 
/*
 *   NVRAM Basic Headers
 */
#include "nvram_data_items.h"

/*
 *   User Headers
 */
#include "ul1_nvram_def.h"


#ifdef GEN_FOR_PC
BEGIN_NVRAM_DATA 
 
#if (defined (__UL1_HS_PLATFORM__) || defined (__UL1_HS_PLUS_PLATFORM__)) 
 
/********************************************************************************************
* LID_NAME
*   NVRAM_EF_UL1_3G_RF_PARAMETER_LID
* DESCRIPTION
*   This LID is used to store the BPI and LNA port data settings in ul1d_custom_rf.h, ul1d_custom_rf.c.
*   Refer to CS0021-GAK1C-AND-v1.0EN_Platform_System_RF_RF_NVRAM_LID_Introduction_Application_Note.docx for more details.
* INFOMATION
*   Can OTA Reset: Yes
*   Update Scenario: This LID will be updated in initial task.
*********************************************************************************************/
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_UL1_3G_RF_PARAMETER_LID)
     U_sUl1dRfCustomInputData * NVRAM_EF_UL1_3G_RF_PARAMETER_TOTAL
     {
        startPattern:"#U_0x1234ABCD_L_0x1234ABCD"
        {
        };
        structVersion:""
        {
        };
        rfType:""
        {
        };
        isDataUpdate:"#U_1_L_1"
        {
        };
        umtsRfPaControlTimingOffset:""
        {
        };
        umtsRfPaControlTimingOffset.maxOffset:"#U_65535"
        {
        };
        umtsRfPaControlTimingOffset.vmOffset:"#U_65535"
        {
        };
        umtsRfPaControlTimingOffset.vbiasOffset:"#U_65535"
        {
        };
        umtsRfPaControlTimingOffset.dc2dcOffset:"#U_65535"
        {
        };
        umtsRfPaControlTimingOffset.vgaOffset:"#U_65535"
        {
        };
        umtsBsiBpiTiming:""
        {
        };
        umtsBsiBpiTiming.xTC_PR1:"#U_32767"
        {
        };
        umtsBsiBpiTiming.xTC_PR2:"#U_32767"
        {
        };
        umtsBsiBpiTiming.xTC_PR2B:"#U_32767"
        {
        };
        umtsBsiBpiTiming.xTC_PR3:"#U_32767"
        {
        };
        umtsBsiBpiTiming.xTC_PR3A:"#U_32767"
        {
        };
        umtsBsiBpiTiming.xTC_PT1:"#U_32767"
        {
        };
        umtsBsiBpiTiming.xTC_PT2:"#U_32767"
        {
        };
        umtsBsiBpiTiming.xTC_PT2B:"#U_32767"
        {
        };
        umtsBsiBpiTiming.xTC_PT3:"#U_32767"
        {
        };
        umtsBsiBpiTiming.xTC_PT3A:"#U_32767"
        {
        };
        umtsPdata:""
        {
        };
        umtsBandIndicator:""
        {
        };
        umtsRxLnaPortSel:""
        {
        };
        umtsTxPathSel:""
        {
        };
        xPMU_PA_CONTROL:""
        {
        };
        endPattern:"#U_0xABCD1234_L_0xABCD1234"
        {
        };
     };

#endif /* #if (defined (__UL1_HS_PLATFORM__) || defined (__UL1_HS_PLUS_PLATFORM__)) */

#if defined (__UL1_HS_PLATFORM__) || defined (__UL1_HS_PLUS_PLATFORM__) 
LID_BIT VER_LID(NVRAM_EF_UL1_IOT_CUSTOMIZATION_LID)
     U_sUl1IotCustomSupportStruct *NVRAM_EF_UL1_IOT_CUSTOMIZATION_TOTAL
     {
         ADAPT_Customized:""
         {
         };
         reserved1:""
         {
         };
         reserved2:""
         {
         };
         reserved3:""
         {
         };
     };
#endif /* #if defined (__UL1_HS_PLATFORM__) || defined (__UL1_HS_PLUS_PLATFORM__) */

/***************************************************************************************************
* LID_NAME
*       NVRAM_EF_UL1_HSPA_CATEGORY_LID
*DESCRIPTION
*      This LID is used to store maximum support HSDPA & HSUPA category in WCDMA.
*      
*INFORMATION
*      Can OTA Reset: No
*      Update Scenario:The data in this LID will be updated task init.
****************************************************************************************************/ 
#if defined (__UL1_HS_PLATFORM__) || defined (__UL1_HS_PLUS_PLATFORM__) 
LID_BIT VER_LID(NVRAM_EF_UL1_HSPA_CATEGORY_LID)
   nvram_ef_ul1_hspa_category_struct * NVRAM_EF_UL1_HSPA_CATEGORY_TOTAL
   {
      dpa_cat:"WCDMA Max Supptor HSDPA category"
      {
      };
      upa_cat:"WCDMA Max Supptor HSUPA category"
      {
      };
   };
#endif /* #if defined (__UL1_HS_PLATFORM__) || defined (__UL1_HS_PLUS_PLATFORM__) */

/***************************************************************************************************
* LID_NAME
*       NVRAM_EF_UL1_LOW_POWER_LID
*DESCRIPTION
*      For 3G low power feature on/off
*      
*INFORMATION
*      Can OTA Reset: Yes
*      Update Scenario:The data in this LID will be updated task init.
****************************************************************************************************/ 
#if defined (__MTK_UL1_FDD__)
LID_BIT VER_LID(NVRAM_EF_UL1_LOW_POWER_LID)
   nvram_ef_ul1_low_power_category_struct * NVRAM_EF_UL1_LOW_POWER_TOTAL
   {
      arx_enable:"arx feature on/off"
      {
      };
      lorx_enable:"lorx feature on/off"
      {
      };
      lorx_debug_enable:"lorx debug feature on/off"
      {
      };
   };
LID_BIT VER_LID(NVRAM_EF_UL1_HS_PATCH_LID)
   nvram_ef_ul1_hs_patch_struct * NVRAM_EF_UL1_HS_PATCH_TOTAL
   {
      hs_patch_enable:""
      {
      };
   };
#endif   //#if defined (__MTK_UL1_FDD__)

/* TX PRACH TM Comp.  (for MT6572,MT6582) */
/***************************************************************************************************
* LID_NAME
*       NVRAM_EF_UL1_TXPRACHTMCOMP_BAND1_LID
*DESCRIPTION
*      WCDMA calibration data of temperature compensation for TX Prach .It is usually not used now.
*      Reference:Platform_System_RF_MT6763_RF_NVRAM_LID_Introduction_Application_Note.docx
*INFORMATION
*      Can OTA Reset: No
*      Update Scenario:The data in this LID will be updated task init and calibration.
****************************************************************************************************/ 
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_UL1_TXPRACHTMCOMP_BAND1_LID)
     ul1cal_txPrachTmCompData_T *NVRAM_EF_UL1_TXPRACHTMCOMP_BAND_TOTAL
     {

     };
/***************************************************************************************************
* LID_NAME
*       NVRAM_EF_UL1_TXPRACHTMCOMP_BAND2_LID
*DESCRIPTION
*      WCDMA calibration data of temperature compensation for TX Prach .It is usually not used now.
*      Reference:Platform_System_RF_MT6763_RF_NVRAM_LID_Introduction_Application_Note.docx
*INFORMATION
*      Can OTA Reset: No
*      Update Scenario:The data in this LID will be updated task init and calibration.
****************************************************************************************************/ 
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_UL1_TXPRACHTMCOMP_BAND2_LID)
     ul1cal_txPrachTmCompData_T *NVRAM_EF_UL1_TXPRACHTMCOMP_BAND_TOTAL
     {

     };
/***************************************************************************************************
* LID_NAME
*       NVRAM_EF_UL1_TXPRACHTMCOMP_BAND3_LID
*DESCRIPTION
*      WCDMA calibration data of temperature compensation for TX Prach .It is usually not used now.
*      Reference:Platform_System_RF_MT6763_RF_NVRAM_LID_Introduction_Application_Note.docx
*INFORMATION
*      Can OTA Reset: No
*      Update Scenario:The data in this LID will be updated task init and calibration.
****************************************************************************************************/ 
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_UL1_TXPRACHTMCOMP_BAND3_LID)
     ul1cal_txPrachTmCompData_T *NVRAM_EF_UL1_TXPRACHTMCOMP_BAND_TOTAL
     {

     };
/***************************************************************************************************
* LID_NAME
*       NVRAM_EF_UL1_TXPRACHTMCOMP_BAND4_LID
*DESCRIPTION
*      WCDMA calibration data of temperature compensation for TX Prach .It is usually not used now.
*      Reference:Platform_System_RF_MT6763_RF_NVRAM_LID_Introduction_Application_Note.docx
*INFORMATION
*      Can OTA Reset: No
*      Update Scenario:The data in this LID will be updated task init and calibration.
****************************************************************************************************/ 
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_UL1_TXPRACHTMCOMP_BAND4_LID)
     ul1cal_txPrachTmCompData_T *NVRAM_EF_UL1_TXPRACHTMCOMP_BAND_TOTAL
     {

     };
/***************************************************************************************************
* LID_NAME
*       NVRAM_EF_UL1_TXPRACHTMCOMP_BAND5_LID
*DESCRIPTION
*      WCDMA calibration data of temperature compensation for TX Prach .It is usually not used now.
*      Reference:Platform_System_RF_MT6763_RF_NVRAM_LID_Introduction_Application_Note.docx
*INFORMATION
*      Can OTA Reset: No
*      Update Scenario:The data in this LID will be updated task init and calibration.
****************************************************************************************************/ 
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_UL1_TXPRACHTMCOMP_BAND5_LID)
     ul1cal_txPrachTmCompData_T *NVRAM_EF_UL1_TXPRACHTMCOMP_BAND_TOTAL
     {
     
     };
/***************************************************************************************************
* LID_NAME
*       NVRAM_EF_UL1_TXPRACHTMCOMP_BAND6_LID
*DESCRIPTION
*      WCDMA calibration data of temperature compensation for TX Prach .It is usually not used now.
*      Reference:Platform_System_RF_MT6763_RF_NVRAM_LID_Introduction_Application_Note.docx
*INFORMATION
*      Can OTA Reset: No
*      Update Scenario:The data in this LID will be updated task init and calibration.
****************************************************************************************************/ 
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_UL1_TXPRACHTMCOMP_BAND6_LID)
     ul1cal_txPrachTmCompData_T *NVRAM_EF_UL1_TXPRACHTMCOMP_BAND_TOTAL
     {

     };
/***************************************************************************************************
* LID_NAME
*       NVRAM_EF_UL1_TXPRACHTMCOMP_BAND7_LID
*DESCRIPTION
*      WCDMA calibration data of temperature compensation for TX Prach .It is usually not used now.
*      Reference:Platform_System_RF_MT6763_RF_NVRAM_LID_Introduction_Application_Note.docx
*INFORMATION
*      Can OTA Reset: No
*      Update Scenario:The data in this LID will be updated task init and calibration.
****************************************************************************************************/ 
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_UL1_TXPRACHTMCOMP_BAND7_LID)
     ul1cal_txPrachTmCompData_T *NVRAM_EF_UL1_TXPRACHTMCOMP_BAND_TOTAL
     {

     };
/***************************************************************************************************
* LID_NAME
*       NVRAM_EF_UL1_TXPRACHTMCOMP_BAND8_LID
*DESCRIPTION
*      WCDMA calibration data of temperature compensation for TX Prach .It is usually not used now.
*      Reference:Platform_System_RF_MT6763_RF_NVRAM_LID_Introduction_Application_Note.docx
*INFORMATION
*      Can OTA Reset: No
*      Update Scenario:The data in this LID will be updated task init and calibration.
****************************************************************************************************/ 
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_UL1_TXPRACHTMCOMP_BAND8_LID)
     ul1cal_txPrachTmCompData_T *NVRAM_EF_UL1_TXPRACHTMCOMP_BAND_TOTAL
     {

     };
/***************************************************************************************************
* LID_NAME
*       NVRAM_EF_UL1_TXPRACHTMCOMP_BAND9_LID
*DESCRIPTION
*      WCDMA calibration data of temperature compensation for TX Prach .It is usually not used now.
*      Reference:Platform_System_RF_MT6763_RF_NVRAM_LID_Introduction_Application_Note.docx
*INFORMATION
*      Can OTA Reset: No
*      Update Scenario:The data in this LID will be updated task init and calibration.
****************************************************************************************************/ 
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_UL1_TXPRACHTMCOMP_BAND9_LID)
     ul1cal_txPrachTmCompData_T *NVRAM_EF_UL1_TXPRACHTMCOMP_BAND_TOTAL
     {
     
     };
/***************************************************************************************************
* LID_NAME
*       NVRAM_EF_UL1_TXPRACHTMCOMP_BAND10_LID
*DESCRIPTION
*      WCDMA calibration data of temperature compensation for TX Prach .It is usually not used now.
*      Reference:Platform_System_RF_MT6763_RF_NVRAM_LID_Introduction_Application_Note.docx
*INFORMATION
*      Can OTA Reset: No
*      Update Scenario:The data in this LID will be updated task init and calibration.
****************************************************************************************************/ 
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_UL1_TXPRACHTMCOMP_BAND10_LID)
     ul1cal_txPrachTmCompData_T *NVRAM_EF_UL1_TXPRACHTMCOMP_BAND_TOTAL
     {
     
     };
/***************************************************************************************************
* LID_NAME
*       NVRAM_EF_UL1_TXPRACHTMCOMP_BAND11_LID
*DESCRIPTION
*      WCDMA calibration data of temperature compensation for TX Prach .It is usually not used now.
*      Reference:Platform_System_RF_MT6763_RF_NVRAM_LID_Introduction_Application_Note.docx
*INFORMATION
*      Can OTA Reset: No
*      Update Scenario:The data in this LID will be updated task init and calibration.
****************************************************************************************************/      
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_UL1_TXPRACHTMCOMP_BAND11_LID)
     ul1cal_txPrachTmCompData_T *NVRAM_EF_UL1_TXPRACHTMCOMP_BAND_TOTAL
     {
     
     };
/***************************************************************************************************
* LID_NAME
*       NVRAM_EF_UL1_TXPRACHTMCOMP_BAND19_LID
*DESCRIPTION
*      WCDMA calibration data of temperature compensation for TX Prach .It is usually not used now.
*      Reference:Platform_System_RF_MT6763_RF_NVRAM_LID_Introduction_Application_Note.docx
*INFORMATION
*      Can OTA Reset: No
*      Update Scenario:The data in this LID will be updated task init and calibration.
****************************************************************************************************/        
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_UL1_TXPRACHTMCOMP_BAND19_LID)
     ul1cal_txPrachTmCompData_T *NVRAM_EF_UL1_TXPRACHTMCOMP_BAND_TOTAL
     {
     
     };
/***************************************************************************************************
* LID_NAME
*      NVRAM_EF_UL1_AFCDAC_LID
*DESCRIPTION
*      Adjusting the frequency of DCXO finely.
*      Reference:Platform_System_RF_MT6763_RF_NVRAM_LID_Introduction_Application_Note.docx
*INFORMATION
*     Can OTA Reset: No
*     Update Scenario:The data in this LID will be updated during calibration.
****************************************************************************************************/
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_UL1_AFCDAC_LID)
     ul1cal_afcDacData_T *NVRAM_EF_UL1_AFCDAC_TOTAL
     {
     
     };
/***************************************************************************************************
* LID_NAME
*      NVRAM_EF_UL1_AFCCAP_LID
*DESCRIPTION
*      Adjusting the frequency of DCXO coarsly.
*      Reference:Platform_System_RF_MT6763_RF_NVRAM_LID_Introduction_Application_Note.docx
*INFORMATION
*     Can OTA Reset: No
*     Update Scenario:The data in this LID will be updated during calibration and task init.
****************************************************************************************************/

LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_UL1_AFCCAP_LID)
     ul1cal_afcCapData_T *NVRAM_EF_UL1_AFCCAP_TOTAL
     {
     
     };

#if (IS_3G_MIPI_SUPPORT)
/***************************************************************************************************
* LID_NAME
*      NVRAM_EF_UL1_MIPI_TPC_HIGHBAND1_LID
*DESCRIPTION
*      WCDMA MIPI TPC event and data  are stored in this LID.
*      Reference:Platform_System_RF_MT6763_RF_NVRAM_LID_Introduction_Application_Note.docx
*INFORMATION
*     Can OTA Reset: Yes
*     Update Scenario:This LID will update once during task init.
****************************************************************************************************/

LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_UL1_MIPI_TPC_HIGHBAND1_LID)
     ul1mipi_tpcData_T *NVRAM_EF_UL1_MIPI_TPC_BAND_TOTAL
     {
     
     };

/***************************************************************************************************
* LID_NAME
*      NVRAM_EF_UL1_MIPI_TPC_HIGHBAND2_LID
*DESCRIPTION
*      WCDMA MIPI TPC event and data  are stored in this LID.
*      Reference:Platform_System_RF_MT6763_RF_NVRAM_LID_Introduction_Application_Note.docx
*INFORMATION
*     Can OTA Reset: Yes
*     Update Scenario:This LID will update once during task init.
****************************************************************************************************/
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_UL1_MIPI_TPC_HIGHBAND2_LID)
     ul1mipi_tpcData_T *NVRAM_EF_UL1_MIPI_TPC_BAND_TOTAL
     {
     
     };

/***************************************************************************************************
* LID_NAME
*      NVRAM_EF_UL1_MIPI_TPC_HIGHBAND3_LID
*DESCRIPTION
*      WCDMA MIPI TPC event and data  are stored in this LID.
*      Reference:Platform_System_RF_MT6763_RF_NVRAM_LID_Introduction_Application_Note.docx
*INFORMATION
*     Can OTA Reset: Yes
*     Update Scenario:This LID will update once during task init.
****************************************************************************************************/
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_UL1_MIPI_TPC_HIGHBAND3_LID)
     ul1mipi_tpcData_T *NVRAM_EF_UL1_MIPI_TPC_BAND_TOTAL
     {
     
     };

/***************************************************************************************************
* LID_NAME
*      NVRAM_EF_UL1_MIPI_TPC_LOWBAND1_LID
*DESCRIPTION
*      WCDMA MIPI TPC event and data  are stored in this LID.
*      Reference:Platform_System_RF_MT6763_RF_NVRAM_LID_Introduction_Application_Note.docx
*INFORMATION
*     Can OTA Reset: Yes
*     Update Scenario:This LID will update once during task init.
****************************************************************************************************/
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_UL1_MIPI_TPC_LOWBAND1_LID)
     ul1mipi_tpcData_T *NVRAM_EF_UL1_MIPI_TPC_BAND_TOTAL
     {
     
     };

/***************************************************************************************************
* LID_NAME
*      NVRAM_EF_UL1_MIPI_TPC_LOWBAND2_LID
*DESCRIPTION
*      WCDMA MIPI TPC event and data  are stored in this LID.
*      Reference:Platform_System_RF_MT6763_RF_NVRAM_LID_Introduction_Application_Note.docx
*INFORMATION
*     Can OTA Reset: Yes
*     Update Scenario:This LID will update once during task init.
****************************************************************************************************/
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_UL1_MIPI_TPC_LOWBAND2_LID)
     ul1mipi_tpcData_T *NVRAM_EF_UL1_MIPI_TPC_BAND_TOTAL
     {
     
     };
#endif

#if (IS_3G_ET_NVRAM_SUPPORT)
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_UL1_MIPI_ET_HIGHBAND1_LID)
     ul1mipi_etData_T *NVRAM_EF_UL1_MIPI_ET_BAND_TOTAL
     {
     
     };

LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_UL1_MIPI_ET_HIGHBAND2_LID)
     ul1mipi_etData_T *NVRAM_EF_UL1_MIPI_ET_BAND_TOTAL
     {
     
     };

LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_UL1_MIPI_ET_HIGHBAND3_LID)
     ul1mipi_etData_T *NVRAM_EF_UL1_MIPI_ET_BAND_TOTAL
     {
     
     };

LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_UL1_MIPI_ET_LOWBAND1_LID)
     ul1mipi_etData_T *NVRAM_EF_UL1_MIPI_ET_BAND_TOTAL
     {
     
     };

LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_UL1_MIPI_ET_LOWBAND2_LID)
     ul1mipi_etData_T *NVRAM_EF_UL1_MIPI_ET_BAND_TOTAL
     {
     
     };
#endif/*IS_3G_ET_NVRAM_SUPPORT*/

#if (IS_3G_MIPI_NVRAM_FULL_SUPPORT)
/***************************************************************************************************
* LID_NAME
*      NVRAM_EF_UL1_MIPI_RX_EVENT_HIGHBAND1_LID
*DESCRIPTION
*      WCDMA RX MIPI Event , can be customized.
*      Reference:Platform_System_RF_MT6763_RF_NVRAM_LID_Introduction_Application_Note.docx
*INFORMATION
*     Can OTA Reset: Yes
*     Update Scenario:The data in this LID will be updated task init.
****************************************************************************************************/
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_UL1_MIPI_RX_EVENT_HIGHBAND1_LID)
     ul1mipi_rxEvent_T *NVRAM_EF_UL1_MIPI_RX_EVT_BAND_TOTAL
     {
     
     };
/***************************************************************************************************
* LID_NAME
*      NVRAM_EF_UL1_MIPI_RX_EVENT_HIGHBAND2_LID
*DESCRIPTION
*      WCDMA RX MIPI Event , can be customized.
*      Reference:Platform_System_RF_MT6763_RF_NVRAM_LID_Introduction_Application_Note.docx
*INFORMATION
*     Can OTA Reset: Yes
*     Update Scenario:The data in this LID will be updated task init.
****************************************************************************************************/
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_UL1_MIPI_RX_EVENT_HIGHBAND2_LID)
     ul1mipi_rxEvent_T *NVRAM_EF_UL1_MIPI_RX_EVT_BAND_TOTAL
     {
     
     };
/***************************************************************************************************
* LID_NAME
*      NVRAM_EF_UL1_MIPI_RX_EVENT_HIGHBAND3_LID
*DESCRIPTION
*      WCDMA RX MIPI Event , can be customized.
*      Reference:Platform_System_RF_MT6763_RF_NVRAM_LID_Introduction_Application_Note.docx
*INFORMATION
*     Can OTA Reset: Yes
*     Update Scenario:The data in this LID will be updated task init.
****************************************************************************************************/
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_UL1_MIPI_RX_EVENT_HIGHBAND3_LID)
     ul1mipi_rxEvent_T *NVRAM_EF_UL1_MIPI_RX_EVT_BAND_TOTAL
     {
     
     };

/***************************************************************************************************
* LID_NAME
*      NVRAM_EF_UL1_MIPI_RX_EVENT_LOWBAND1_LID
*DESCRIPTION
*      WCDMA RX MIPI Event , can be customized.
*      Reference:Platform_System_RF_MT6763_RF_NVRAM_LID_Introduction_Application_Note.docx
*INFORMATION
*     Can OTA Reset: Yes
*     Update Scenario:The data in this LID will be updated task init.
****************************************************************************************************/
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_UL1_MIPI_RX_EVENT_LOWBAND1_LID)
     ul1mipi_rxEvent_T *NVRAM_EF_UL1_MIPI_RX_EVT_BAND_TOTAL
     {
     
     };
/***************************************************************************************************
* LID_NAME
*      NVRAM_EF_UL1_MIPI_RX_EVENT_LOWBAND2_LID
*DESCRIPTION
*      WCDMA RX MIPI Event , can be customized.
*      Reference:Platform_System_RF_MT6763_RF_NVRAM_LID_Introduction_Application_Note.docx
*INFORMATION
*     Can OTA Reset: Yes
*     Update Scenario:The data in this LID will be updated task init.
****************************************************************************************************/
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_UL1_MIPI_RX_EVENT_LOWBAND2_LID)
     ul1mipi_rxEvent_T *NVRAM_EF_UL1_MIPI_RX_EVT_BAND_TOTAL
     {
     
     };

/***************************************************************************************************
* LID_NAME
*      NVRAM_EF_UL1_MIPI_RX_DATA_HIGHBAND1_LID
*DESCRIPTION
*      WCDMA RX MIPI Data , can be customized.
*      Reference:Platform_System_RF_MT6763_RF_NVRAM_LID_Introduction_Application_Note.docx
*INFORMATION
*     Can OTA Reset: Yes
*     Update Scenario:The data in this LID will be updated task init.
****************************************************************************************************/
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_UL1_MIPI_RX_DATA_HIGHBAND1_LID)
     ul1mipi_rxData_T *NVRAM_EF_UL1_MIPI_RX_DATA_BAND_TOTAL
     {
     
     };

/***************************************************************************************************
* LID_NAME
*      NVRAM_EF_UL1_MIPI_RX_DATA_HIGHBAND2_LID
*DESCRIPTION
*      WCDMA RX MIPI Data , can be customized.
*      Reference:Platform_System_RF_MT6763_RF_NVRAM_LID_Introduction_Application_Note.docx
*INFORMATION
*     Can OTA Reset: Yes
*     Update Scenario:The data in this LID will be updated task init.
****************************************************************************************************/
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_UL1_MIPI_RX_DATA_HIGHBAND2_LID)
     ul1mipi_rxData_T *NVRAM_EF_UL1_MIPI_RX_DATA_BAND_TOTAL
     {
     
     };

/***************************************************************************************************
* LID_NAME
*      NVRAM_EF_UL1_MIPI_RX_DATA_HIGHBAND3_LID
*DESCRIPTION
*      WCDMA RX MIPI Data , can be customized.
*      Reference:Platform_System_RF_MT6763_RF_NVRAM_LID_Introduction_Application_Note.docx
*INFORMATION
*     Can OTA Reset: Yes
*     Update Scenario:The data in this LID will be updated task init.
****************************************************************************************************/
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_UL1_MIPI_RX_DATA_HIGHBAND3_LID)
     ul1mipi_rxData_T *NVRAM_EF_UL1_MIPI_RX_DATA_BAND_TOTAL
     {
     
     };

/***************************************************************************************************
* LID_NAME
*      NVRAM_EF_UL1_MIPI_RX_DATA_LOWBAND1_LID
*DESCRIPTION
*      WCDMA RX MIPI Data , can be customized.
*      Reference:Platform_System_RF_MT6763_RF_NVRAM_LID_Introduction_Application_Note.docx
*INFORMATION
*     Can OTA Reset: Yes
*     Update Scenario:The data in this LID will be updated task init.
****************************************************************************************************/
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_UL1_MIPI_RX_DATA_LOWBAND1_LID)
     ul1mipi_rxData_T *NVRAM_EF_UL1_MIPI_RX_DATA_BAND_TOTAL
     {
     
     };

/***************************************************************************************************
* LID_NAME
*      NVRAM_EF_UL1_MIPI_RX_DATA_LOWBAND2_LID
*DESCRIPTION
*      WCDMA RX MIPI Data , can be customized.
*      Reference:Platform_System_RF_MT6763_RF_NVRAM_LID_Introduction_Application_Note.docx
*INFORMATION
*     Can OTA Reset: Yes
*     Update Scenario:The data in this LID will be updated task init.
****************************************************************************************************/
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_UL1_MIPI_RX_DATA_LOWBAND2_LID)
     ul1mipi_rxData_T *NVRAM_EF_UL1_MIPI_RX_DATA_BAND_TOTAL
     {
     
     };

/***************************************************************************************************
* LID_NAME
*      NVRAM_EF_UL1_MIPI_TX_EVENT_HIGHBAND1_LID
*DESCRIPTION
*      WCDMA TX MIPI Event , can be customized.
*      Reference:Platform_System_RF_MT6763_RF_NVRAM_LID_Introduction_Application_Note.docx
*INFORMATION
*     Can OTA Reset: Yes
*     Update Scenario:The data in this LID will be updated task init.
****************************************************************************************************/
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_UL1_MIPI_TX_EVENT_HIGHBAND1_LID)
     ul1mipi_txEvent_T *NVRAM_EF_UL1_MIPI_TX_EVT_BAND_TOTAL
     {
     
     };

/***************************************************************************************************
* LID_NAME
*      NVRAM_EF_UL1_MIPI_TX_EVENT_HIGHBAND2_LID
*DESCRIPTION
*      WCDMA TX MIPI Event , can be customized.
*      Reference:Platform_System_RF_MT6763_RF_NVRAM_LID_Introduction_Application_Note.docx
*INFORMATION
*     Can OTA Reset: Yes
*     Update Scenario:The data in this LID will be updated task init.
****************************************************************************************************/
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_UL1_MIPI_TX_EVENT_HIGHBAND2_LID)
     ul1mipi_txEvent_T *NVRAM_EF_UL1_MIPI_TX_EVT_BAND_TOTAL
     {
     
     };

/***************************************************************************************************
* LID_NAME
*      NVRAM_EF_UL1_MIPI_TX_EVENT_HIGHBAND3_LID
*DESCRIPTION
*      WCDMA TX MIPI Event , can be customized.
*      Reference:Platform_System_RF_MT6763_RF_NVRAM_LID_Introduction_Application_Note.docx
*INFORMATION
*     Can OTA Reset: Yes
*     Update Scenario:The data in this LID will be updated task init.
****************************************************************************************************/
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_UL1_MIPI_TX_EVENT_HIGHBAND3_LID)
     ul1mipi_txEvent_T *NVRAM_EF_UL1_MIPI_TX_EVT_BAND_TOTAL
     {
     
     };
/***************************************************************************************************
* LID_NAME
*      NVRAM_EF_UL1_MIPI_TX_EVENT_LOWBAND1_LID
*DESCRIPTION
*      WCDMA TX MIPI Event , can be customized.
*      Reference:Platform_System_RF_MT6763_RF_NVRAM_LID_Introduction_Application_Note.docx
*INFORMATION
*     Can OTA Reset: Yes
*     Update Scenario:The data in this LID will be updated task init.
****************************************************************************************************/
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_UL1_MIPI_TX_EVENT_LOWBAND1_LID)
     ul1mipi_txEvent_T *NVRAM_EF_UL1_MIPI_TX_EVT_BAND_TOTAL
     {
     
     };

/***************************************************************************************************
* LID_NAME
*      NVRAM_EF_UL1_MIPI_TX_EVENT_LOWBAND2_LID
*DESCRIPTION
*      WCDMA TX MIPI Event , can be customized.
*      Reference:Platform_System_RF_MT6763_RF_NVRAM_LID_Introduction_Application_Note.docx
*INFORMATION
*     Can OTA Reset: Yes
*     Update Scenario:The data in this LID will be updated task init.
****************************************************************************************************/
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_UL1_MIPI_TX_EVENT_LOWBAND2_LID)
     ul1mipi_txEvent_T *NVRAM_EF_UL1_MIPI_TX_EVT_BAND_TOTAL
     {
     
     };

/***************************************************************************************************
* LID_NAME
*      NVRAM_EF_UL1_MIPI_TX_DATA_HIGHBAND1_LID
*DESCRIPTION
*      WCDMA TX MIPI Data , can be customized.
*      Reference:Platform_System_RF_MT6763_RF_NVRAM_LID_Introduction_Application_Note.docx
*INFORMATION
*     Can OTA Reset: Yes
*     Update Scenario:The data in this LID will be updated task init.
****************************************************************************************************/
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_UL1_MIPI_TX_DATA_HIGHBAND1_LID)
     ul1mipi_txData_T *NVRAM_EF_UL1_MIPI_TX_DATA_BAND_TOTAL
     {
     
     };

/***************************************************************************************************
* LID_NAME
*      NVRAM_EF_UL1_MIPI_TX_DATA_HIGHBAND2_LID
*DESCRIPTION
*      WCDMA TX MIPI Data , can be customized.
*      Reference:Platform_System_RF_MT6763_RF_NVRAM_LID_Introduction_Application_Note.docx
*INFORMATION
*     Can OTA Reset: Yes
*     Update Scenario:The data in this LID will be updated task init.
****************************************************************************************************/
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_UL1_MIPI_TX_DATA_HIGHBAND2_LID)
     ul1mipi_txData_T *NVRAM_EF_UL1_MIPI_TX_DATA_BAND_TOTAL
     {
     
     };

/***************************************************************************************************
* LID_NAME
*      NVRAM_EF_UL1_MIPI_TX_DATA_HIGHBAND3_LID
*DESCRIPTION
*      WCDMA TX MIPI Data , can be customized.
*      Reference:Platform_System_RF_MT6763_RF_NVRAM_LID_Introduction_Application_Note.docx
*INFORMATION
*     Can OTA Reset: Yes
*     Update Scenario:The data in this LID will be updated task init.
****************************************************************************************************/
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_UL1_MIPI_TX_DATA_HIGHBAND3_LID)
     ul1mipi_txData_T *NVRAM_EF_UL1_MIPI_TX_DATA_BAND_TOTAL
     {
     
     };

/***************************************************************************************************
* LID_NAME
*      NVRAM_EF_UL1_MIPI_TX_DATA_LOWBAND1_LID
*DESCRIPTION
*      WCDMA TX MIPI Data , can be customized.
*      Reference:Platform_System_RF_MT6763_RF_NVRAM_LID_Introduction_Application_Note.docx
*INFORMATION
*     Can OTA Reset: Yes
*     Update Scenario:The data in this LID will be updated task init.
****************************************************************************************************/
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_UL1_MIPI_TX_DATA_LOWBAND1_LID)
     ul1mipi_txData_T *NVRAM_EF_UL1_MIPI_TX_DATA_BAND_TOTAL
     {
     
     };

/***************************************************************************************************
* LID_NAME
*      NVRAM_EF_UL1_MIPI_TX_DATA_LOWBAND2_LID
*DESCRIPTION
*      WCDMA TX MIPI Data , can be customized.
*      Reference:Platform_System_RF_MT6763_RF_NVRAM_LID_Introduction_Application_Note.docx
*INFORMATION
*     Can OTA Reset: Yes
*     Update Scenario:The data in this LID will be updated task init.
****************************************************************************************************/
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_UL1_MIPI_TX_DATA_LOWBAND2_LID)
     ul1mipi_txData_T *NVRAM_EF_UL1_MIPI_TX_DATA_BAND_TOTAL
     {
     
     };

LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_UL1_MIPI_ASM_ISOLATION_HIGHBAND1_LID)
     ul1mipi_asmIsoData_T *NVRAM_EF_UL1_MIPI_ASM_ISOLATION_BAND_TOTAL
     {
     
     };

LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_UL1_MIPI_ASM_ISOLATION_HIGHBAND2_LID)
     ul1mipi_asmIsoData_T *NVRAM_EF_UL1_MIPI_ASM_ISOLATION_BAND_TOTAL
     {
     
     };

LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_UL1_MIPI_ASM_ISOLATION_HIGHBAND3_LID)
     ul1mipi_asmIsoData_T *NVRAM_EF_UL1_MIPI_ASM_ISOLATION_BAND_TOTAL
     {
     
     };

LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_UL1_MIPI_ASM_ISOLATION_LOWBAND1_LID)
     ul1mipi_asmIsoData_T *NVRAM_EF_UL1_MIPI_ASM_ISOLATION_BAND_TOTAL
     {
     
     };

LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_UL1_MIPI_ASM_ISOLATION_LOWBAND2_LID)
     ul1mipi_asmIsoData_T *NVRAM_EF_UL1_MIPI_ASM_ISOLATION_BAND_TOTAL
     {
     
     };

LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_UL1_MIPI_INIT_CW_LID)
     ul1mipi_initCwData_T *NVRAM_EF_UL1_MIPI_INIT_CW_TOTAL
     {
     
     };

LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_UL1_MIPI_SLEEP_CW_LID)
     ul1mipi_sleepCwData_T *NVRAM_EF_UL1_MIPI_SLEEP_CW_TOTAL
     {
     
     };
#if (IS_3G_ET_NVRAM_SUPPORT)
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_UL1_MIPI_ET_ON_CW_LID)
     ul1mipi_etOnCwData_T *NVRAM_EF_UL1_MIPI_ET_ON_CW_TOTAL
     {
     
     };

LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_UL1_MIPI_ET_OFF_CW_LID)
     ul1mipi_etOffCwData_T *NVRAM_EF_UL1_MIPI_ET_OFF_CW_TOTAL
     {
     
     };

#endif/*IS_3G_ET_NVRAM_SUPPORT*/
#endif/*IS_3G_MIPI_NVRAM_FULL_SUPPORT*/

#if (IS_3G_VPA_SEL_BY_BAND_SUPPORT)
/********************************************************************************************
* LID_NAME
*   NVRAM_EF_UL1_VPA_SRC_SEL_HIGHBAND1_LID
* DESCRIPTION
*   This LID is used to store the relevant data on controling the components to support envelope tracking.
*   Refer to CS0021-GAK1C-AND-v1.0EN_Platform_System_RF_RF_NVRAM_LID_Introduction_Application_Note.docx for more details.
* INFOMATION
*   Can OTA Reset: Yes
*   Update Scenario: This LID will be updated in initial task.
*********************************************************************************************/
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_UL1_VPA_SRC_SEL_HIGHBAND1_LID)
     ul1vpa_sel_T *NVRAM_EF_UL1_VPA_SRC_SEL_BAND_TOTAL
     {
     
     };
/********************************************************************************************
* LID_NAME
*   NVRAM_EF_UL1_VPA_SRC_SEL_HIGHBAND2_LID
* DESCRIPTION
*   This LID is used to store the relevant data on controling the components to support envelope tracking.
*   Refer to CS0021-GAK1C-AND-v1.0EN_Platform_System_RF_RF_NVRAM_LID_Introduction_Application_Note.docx for more details.
* INFOMATION
*   Can OTA Reset: Yes
*   Update Scenario: This LID will be updated in initial task.
*********************************************************************************************/
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_UL1_VPA_SRC_SEL_HIGHBAND2_LID)
     ul1vpa_sel_T *NVRAM_EF_UL1_VPA_SRC_SEL_BAND_TOTAL
     {
     
     };
/********************************************************************************************
* LID_NAME
*   NVRAM_EF_UL1_VPA_SRC_SEL_HIGHBAND3_LID
* DESCRIPTION
*   This LID is used to store the relevant data on controling the components to support envelope tracking.
*   Refer to CS0021-GAK1C-AND-v1.0EN_Platform_System_RF_RF_NVRAM_LID_Introduction_Application_Note.docx for more details.
* INFOMATION
*   Can OTA Reset: Yes
*   Update Scenario: This LID will be updated in initial task.
*********************************************************************************************/
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_UL1_VPA_SRC_SEL_HIGHBAND3_LID)
     ul1vpa_sel_T *NVRAM_EF_UL1_VPA_SRC_SEL_BAND_TOTAL
     {
     
     };
/********************************************************************************************
* LID_NAME
*   NVRAM_EF_UL1_VPA_SRC_SEL_LOWBAND1_LID
* DESCRIPTION
*   This LID is used to store the relevant data on controling the components to support envelope tracking.
*   Refer to CS0021-GAK1C-AND-v1.0EN_Platform_System_RF_RF_NVRAM_LID_Introduction_Application_Note.docx for more details.
* INFOMATION
*   Can OTA Reset: Yes
*   Update Scenario: This LID will be updated in initial task.
*********************************************************************************************/
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_UL1_VPA_SRC_SEL_LOWBAND1_LID)
     ul1vpa_sel_T *NVRAM_EF_UL1_VPA_SRC_SEL_BAND_TOTAL
     {
     
     };
/********************************************************************************************
* LID_NAME
*   NVRAM_EF_UL1_VPA_SRC_SEL_LOWBAND2_LID
* DESCRIPTION
*   This LID is used to store the relevant data on controling the components to support envelope tracking.
*   Refer to CS0021-GAK1C-AND-v1.0EN_Platform_System_RF_RF_NVRAM_LID_Introduction_Application_Note.docx for more details.
* INFOMATION
*   Can OTA Reset: Yes
*   Update Scenario: This LID will be updated in initial task.
*********************************************************************************************/
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_UL1_VPA_SRC_SEL_LOWBAND2_LID)
     ul1vpa_sel_T *NVRAM_EF_UL1_VPA_SRC_SEL_BAND_TOTAL
     {
     
     };
#endif/*IS_3G_VPA_SEL_BY_BAND_SUPPORT*/

#if IS_3G_TAS_UL1_CUSTOM_SUPPORT
/********************************************************************************************
* LID_NAME
*   NVRAM_EF_UL1_TAS_FEATURE_BY_RAT_LID
* DESCRIPTION
*   This LID is used to store the relevant data on switching the antenna to transmit the signal due to the different scenario of the cell phone.
*   Refer to CS0021-GAK1C-AND-v1.0EN_Platform_System_RF_RF_NVRAM_LID_Introduction_Application_Note.docx for more details.
* INFOMATION
*   Can OTA Reset: Yes
*   Update Scenario: This LID will be updated in initial task.
*********************************************************************************************/
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_UL1_TAS_FEATURE_BY_RAT_LID)
     UMTS_CUSTOM_TAS_FEATURE_BY_RAT_T *NVRAM_EF_UL1_TAS_FEATURE_BY_RAT_TOTAL
     {

     };
/********************************************************************************************
* LID_NAME
*   NVRAM_EF_UL1_TAS_FE_ROUTE_DATABASE_LID
* DESCRIPTION
*   TAS detailed settings for each band, including RealSim/TestSim enable flag, antenna state setting, and the mapping to databaseA(B)(C) route index in each antenna state.
*   Refer to CS0021-GAK1C-AND-v1.0EN_Platform_System_RF_RF_NVRAM_LID_Introduction_Application_Note.docx for more details.
* INFOMATION
*   Can OTA Reset: Yes
*   Update Scenario: This LID will be updated in initial task.
*********************************************************************************************/
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_UL1_TAS_FE_ROUTE_DATABASE_LID)
     UMTS_CUSTOM_TAS_FE_ROUTE_DATABASE_T *NVRAM_EF_UL1_TAS_FE_ROUTE_DATABASE_TOTAL
     {

     };
/********************************************************************************************
* LID_NAME
*   NVRAM_EF_UL1_TAS_FE_DATABASE_LID
* DESCRIPTION
*   Database reference for antenna tuner control, with BPI setting or MIPI setting via LUT table index.
*   Refer to CS0021-GAK1C-AND-v1.0EN_Platform_System_RF_RF_NVRAM_LID_Introduction_Application_Note.docx for more details.
* INFOMATION
*   Can OTA Reset: Yes
*   Update Scenario: This LID will be updated in initial task.
*********************************************************************************************/
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_UL1_TAS_FE_DATABASE_LID)
     UMTS_CUSTOM_TAS_FE_DATABASE_T *NVRAM_EF_UL1_TAS_FE_DATABASE_TOTAL
     {

     };
#if (IS_3G_MIPI_NVRAM_FULL_SUPPORT)
/********************************************************************************************
* LID_NAME
*   NVRAM_EF_UL1_TAS_CAT_A_MIPI_EVENT_LID
* DESCRIPTION
*   MIPI control event used for antenna tuner. Chosen by database table MIPI config index.
*   Refer to CS0021-GAK1C-AND-v1.0EN_Platform_System_RF_RF_NVRAM_LID_Introduction_Application_Note.docx for more details.
* INFOMATION
*   Can OTA Reset: Yes
*   Update Scenario: This LID will be updated in initial task.
*********************************************************************************************/
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_UL1_TAS_CAT_A_MIPI_EVENT_LID)
     ul1mipi_tasEvent_CatA_T *NVRAM_EF_UL1_CAT_A_TAS_MIPI_EVT_ROUTE_TOTAL
     {

     };
/********************************************************************************************
* LID_NAME
*   NVRAM_EF_UL1_TAS_CAT_A_MIPI_DATA_LID
* DESCRIPTION
*   MIPI control data used for antenna tuner. Chosen by database table MIPI config index.
*   Refer to CS0021-GAK1C-AND-v1.0EN_Platform_System_RF_RF_NVRAM_LID_Introduction_Application_Note.docx for more details.
* INFOMATION
*   Can OTA Reset: Yes
*   Update Scenario: This LID will be updated in initial task.
*********************************************************************************************/
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_UL1_TAS_CAT_A_MIPI_DATA_LID)
     ul1mipi_tasData_CatA_T *NVRAM_EF_UL1_CAT_A_TAS_MIPI_DATA_ROUTE_TOTAL
     {

     };

/********************************************************************************************
* LID_NAME
*   NVRAM_EF_UL1_TAS_CAT_B_MIPI_EVENT_LID
* DESCRIPTION
*   MIPI control event used for antenna tuner. Chosen by database table MIPI config index.
*   Refer to CS0021-GAK1C-AND-v1.0EN_Platform_System_RF_RF_NVRAM_LID_Introduction_Application_Note.docx for more details.
* INFOMATION
*   Can OTA Reset: Yes
*   Update Scenario: This LID will be updated in initial task.
*********************************************************************************************/
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_UL1_TAS_CAT_B_MIPI_EVENT_LID)
     ul1mipi_tasEvent_CatB_T *NVRAM_EF_UL1_CAT_B_TAS_MIPI_EVT_ROUTE_TOTAL
     {

     };
/********************************************************************************************
* LID_NAME
*   NVRAM_EF_UL1_TAS_CAT_B_MIPI_DATA_LID
* DESCRIPTION
*   MIPI control data used for antenna tuner. Chosen by database table MIPI config index.
*   Refer to CS0021-GAK1C-AND-v1.0EN_Platform_System_RF_RF_NVRAM_LID_Introduction_Application_Note.docx for more details.
* INFOMATION
*   Can OTA Reset: Yes
*   Update Scenario: This LID will be updated in initial task.
*********************************************************************************************/
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_UL1_TAS_CAT_B_MIPI_DATA_LID)
     ul1mipi_tasData_CatB_T *NVRAM_EF_UL1_CAT_B_TAS_MIPI_DATA_ROUTE_TOTAL
     {

     };

/********************************************************************************************
* LID_NAME
*   NVRAM_EF_UL1_TAS_CAT_C_MIPI_EVENT_LID
* DESCRIPTION
*   MIPI control event used for antenna tuner. Chosen by database table MIPI config index.
*   Refer to CS0021-GAK1C-AND-v1.0EN_Platform_System_RF_RF_NVRAM_LID_Introduction_Application_Note.docx for more details.
* INFOMATION
*   Can OTA Reset: Yes
*   Update Scenario: This LID will be updated in initial task.
*********************************************************************************************/
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_UL1_TAS_CAT_C_MIPI_EVENT_LID)
     ul1mipi_tasEvent_CatC_T *NVRAM_EF_UL1_CAT_C_TAS_MIPI_EVT_ROUTE_TOTAL
     {

     };
/********************************************************************************************
* LID_NAME
*   NVRAM_EF_UL1_TAS_CAT_C_MIPI_DATA_LID
* DESCRIPTION
*   MIPI control data used for antenna tuner. Chosen by database table MIPI config index.
*   Refer to CS0021-GAK1C-AND-v1.0EN_Platform_System_RF_RF_NVRAM_LID_Introduction_Application_Note.docx for more details.
* INFOMATION
*   Can OTA Reset: Yes
*   Update Scenario: This LID will be updated in initial task.
*********************************************************************************************/
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_UL1_TAS_CAT_C_MIPI_DATA_LID)
     ul1mipi_tasData_CatC_T *NVRAM_EF_UL1_CAT_C_TAS_MIPI_DATA_ROUTE_TOTAL
     {

     };
#endif
#if IS_3G_TAS_INHERIT_4G_ANT
/********************************************************************************************
* LID_NAME
*   NVRAM_EF_UL1_TAS_INHERIT_LTE_ANT_LID
* DESCRIPTION
*   This LID is used to set what LTE band's TAS states can be inherited by WCDMA band when SRVCC cenario.
*   
* INFOMATION
*   Can OTA Reset: Yes
*   Update Scenario: This LID will be updated in initial task.
*********************************************************************************************/
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_UL1_TAS_INHERIT_LTE_ANT_LID)
     UMTS_CUSTOM_TAS_INHERIT_LTE_BAND_BITMAP_TABLE_T *NVRAM_EF_UL1_TAS_INHERIT_LTE_ANT_TOTAL
     {

     };
#endif
#endif
#if IS_3G_DAT_UL1_CUSTOM_SUPPORT
/********************************************************************************************
* LID_NAME
*   NVRAM_EF_UL1_DAT_FEATURE_BY_RAT_LID
* DESCRIPTION
*   This LID is switch to turn on/off the DAT feature.
*   Refer to CS0021-GAK1C-AND-v1.0EN_Platform_System_RF_RF_NVRAM_LID_Introduction_Application_Note.docx for more details.
* INFOMATION
*   Can OTA Reset: Yes
*   Update Scenario: This LID will be updated in initial task.
*********************************************************************************************/
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_UL1_DAT_FEATURE_BY_RAT_LID)
     UMTS_CUSTOM_DAT_FEATURE_BY_RAT_T *NVRAM_EF_UL1_DAT_FEATURE_BY_RAT_TOTAL
     {

     };
/********************************************************************************************
* LID_NAME
*   NVRAM_EF_UL1_DAT_FE_ROUTE_DATABASE_LID
* DESCRIPTION
*   This LID is mainly for route configure index setting for DAT feature.
*   Refer to CS0021-GAK1C-AND-v1.0EN_Platform_System_RF_RF_NVRAM_LID_Introduction_Application_Note.docx for more details.
* INFOMATION
*   Can OTA Reset: Yes
*   Update Scenario: This LID will be updated in initial task.
*********************************************************************************************/
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_UL1_DAT_FE_ROUTE_DATABASE_LID)
     UMTS_CUSTOM_DAT_FE_ROUTE_DATABASE_T *NVRAM_EF_UL1_DAT_FE_ROUTE_DATABASE_TOTAL
     {

     };
/********************************************************************************************
* LID_NAME
*   NVRAM_EF_UL1_DAT_FE_DATABASE_LID
* DESCRIPTION
*   This LID is mainly for BPI Settings for DAT feature.
*   Refer to CS0021-GAK1C-AND-v1.0EN_Platform_System_RF_RF_NVRAM_LID_Introduction_Application_Note.docx for more details.
* INFOMATION
*   Can OTA Reset: Yes
*   Update Scenario: This LID will be updated in initial task.
*********************************************************************************************/
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_UL1_DAT_FE_DATABASE_LID)
     UMTS_CUSTOM_DAT_FE_DATABASE_T *NVRAM_EF_UL1_DAT_FE_DATABASE_TOTAL
     {

     };
#if (IS_3G_MIPI_NVRAM_FULL_SUPPORT)
/********************************************************************************************
* LID_NAME
*   NVRAM_EF_UL1_DAT_CAT_A_MIPI_EVENT_LID
* DESCRIPTION
*   This LID is mainly for MIPI codeword event of DAT feature.
*   Refer to CS0021-GAK1C-AND-v1.0EN_Platform_System_RF_RF_NVRAM_LID_Introduction_Application_Note.docx for more details.
* INFOMATION
*   Can OTA Reset: Yes
*   Update Scenario: This LID will be updated in initial task.
*********************************************************************************************/
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_UL1_DAT_CAT_A_MIPI_EVENT_LID)
     ul1mipi_datEvent_CatA_T *NVRAM_EF_UL1_CAT_A_DAT_MIPI_EVT_ROUTE_TOTAL
     {

     };
/********************************************************************************************
* LID_NAME
*   NVRAM_EF_UL1_DAT_CAT_A_MIPI_DATA_LID
* DESCRIPTION
*   This LID is mainly for MIPI codeword data of DAT feature.
*   Refer to CS0021-GAK1C-AND-v1.0EN_Platform_System_RF_RF_NVRAM_LID_Introduction_Application_Note.docx for more details.
* INFOMATION
*   Can OTA Reset: Yes
*   Update Scenario: This LID will be updated in initial task.
*********************************************************************************************/
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_UL1_DAT_CAT_A_MIPI_DATA_LID)
     ul1mipi_datData_CatA_T *NVRAM_EF_UL1_CAT_A_DAT_MIPI_DATA_ROUTE_TOTAL
     {

     };
/********************************************************************************************
* LID_NAME
*   NVRAM_EF_UL1_DAT_CAT_B_MIPI_EVENT_LID
* DESCRIPTION
*   This LID is mainly for MIPI codeword event of DAT feature.
*   Refer to CS0021-GAK1C-AND-v1.0EN_Platform_System_RF_RF_NVRAM_LID_Introduction_Application_Note.docx for more details.
* INFOMATION
*   Can OTA Reset: Yes
*   Update Scenario: This LID will be updated in initial task.
*********************************************************************************************/
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_UL1_DAT_CAT_B_MIPI_EVENT_LID)
     ul1mipi_datEvent_CatB_T *NVRAM_EF_UL1_CAT_B_DAT_MIPI_EVT_ROUTE_TOTAL
     {

     };
/********************************************************************************************
* LID_NAME
*   NVRAM_EF_UL1_DAT_CAT_B_MIPI_DATA_LID
* DESCRIPTION
*   This LID is mainly for MIPI codeword data of DAT feature.
*   Refer to CS0021-GAK1C-AND-v1.0EN_Platform_System_RF_RF_NVRAM_LID_Introduction_Application_Note.docx for more details.
* INFOMATION
*   Can OTA Reset: Yes
*   Update Scenario: This LID will be updated in initial task.
*********************************************************************************************/
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_UL1_DAT_CAT_B_MIPI_DATA_LID)
     ul1mipi_datData_CatB_T *NVRAM_EF_UL1_CAT_B_DAT_MIPI_DATA_ROUTE_TOTAL
     {

     };

#endif
#endif
#if (IS_3G_TX_POWER_OFFSET_SUPPORT || IS_3G_SAR_TX_POWER_BACKOFF_SUPPORT)
/********************************************************************************************
* LID_NAME
*   NVRAM_EF_UL1_TXPOWEROFFSET_HIGHBAND1_LID
* DESCRIPTION
*   The maximum of Tx power can be increased or decreased by modifying the value in this LID.
*   Refer to CS0021-GAK1C-AND-v1.0EN_Platform_System_RF_RF_NVRAM_LID_Introduction_Application_Note.docx for more details.
* INFOMATION
*   Can OTA Reset: Yes
*   Update Scenario: This LID will be updated in initial task.
*********************************************************************************************/
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_UL1_TXPOWEROFFSET_HIGHBAND1_LID)
     U_sTXPOWEROFFSETDATA *NVRAM_EF_UL1_TXPOWEROFFSET_BAND_TOTAL
     {
     
     };
/********************************************************************************************
* LID_NAME
*   NVRAM_EF_UL1_TXPOWEROFFSET_HIGHBAND2_LID
* DESCRIPTION
*   The maximum of Tx power can be increased or decreased by modifying the value in this LID.
*   Refer to CS0021-GAK1C-AND-v1.0EN_Platform_System_RF_RF_NVRAM_LID_Introduction_Application_Note.docx for more details.
* INFOMATION
*   Can OTA Reset: Yes
*   Update Scenario: This LID will be updated in initial task.
*********************************************************************************************/
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_UL1_TXPOWEROFFSET_HIGHBAND2_LID)
     U_sTXPOWEROFFSETDATA *NVRAM_EF_UL1_TXPOWEROFFSET_BAND_TOTAL
     {
     
     };
/********************************************************************************************
* LID_NAME
*   NVRAM_EF_UL1_TXPOWEROFFSET_HIGHBAND3_LID
* DESCRIPTION
*   The maximum of Tx power can be increased or decreased by modifying the value in this LID.
*   Refer to CS0021-GAK1C-AND-v1.0EN_Platform_System_RF_RF_NVRAM_LID_Introduction_Application_Note.docx for more details.
* INFOMATION
*   Can OTA Reset: Yes
*   Update Scenario: This LID will be updated in initial task.
*********************************************************************************************/
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_UL1_TXPOWEROFFSET_HIGHBAND3_LID)
     U_sTXPOWEROFFSETDATA *NVRAM_EF_UL1_TXPOWEROFFSET_BAND_TOTAL
     {
     
     };
/********************************************************************************************
* LID_NAME
*   NVRAM_EF_UL1_TXPOWEROFFSET_LOWBAND1_LID
* DESCRIPTION
*   The maximum of Tx power can be increased or decreased by modifying the value in this LID.
*   Refer to CS0021-GAK1C-AND-v1.0EN_Platform_System_RF_RF_NVRAM_LID_Introduction_Application_Note.docx for more details.
* INFOMATION
*   Can OTA Reset: Yes
*   Update Scenario: This LID will be updated in initial task.
*********************************************************************************************/
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_UL1_TXPOWEROFFSET_LOWBAND1_LID)
     U_sTXPOWEROFFSETDATA *NVRAM_EF_UL1_TXPOWEROFFSET_BAND_TOTAL
     {
     
     };
/********************************************************************************************
* LID_NAME
*   NVRAM_EF_UL1_TXPOWEROFFSET_LOWBAND2_LID
* DESCRIPTION
*   The maximum of Tx power can be increased or decreased by modifying the value in this LID.
*   Refer to CS0021-GAK1C-AND-v1.0EN_Platform_System_RF_RF_NVRAM_LID_Introduction_Application_Note.docx for more details.
* INFOMATION
*   Can OTA Reset: Yes
*   Update Scenario: This LID will be updated in initial task.
*********************************************************************************************/
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_UL1_TXPOWEROFFSET_LOWBAND2_LID)
     U_sTXPOWEROFFSETDATA *NVRAM_EF_UL1_TXPOWEROFFSET_BAND_TOTAL
     {
     
     };
#endif   /* IS_3G_TX_POWER_OFFSET_SUPPORT */
#if (IS_3G_RX_POWER_OFFSET_SUPPORT )
/********************************************************************************************
* LID_NAME
*   NVRAM_EF_UL1_RXPOWEROFFSET_HIGHBAND1_LID
* DESCRIPTION
*   The RSSI of received signal can be increased or decreased by modifying the value in this LID.
*   Refer to CS0021-GAK1C-AND-v1.0EN_Platform_System_RF_RF_NVRAM_LID_Introduction_Application_Note.docx for more details.
* INFOMATION
*   Can OTA Reset: Yes
*   Update Scenario: This LID will be updated in initial task.
*********************************************************************************************/
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_UL1_RXPOWEROFFSET_HIGHBAND1_LID)
     U_sRXPOWEROFFSETDATA *NVRAM_EF_UL1_RXPOWEROFFSET_BAND_TOTAL
     {
     
     };
/********************************************************************************************
* LID_NAME
*   NVRAM_EF_UL1_RXPOWEROFFSET_HIGHBAND2_LID
* DESCRIPTION
*   The RSSI of received signal can be increased or decreased by modifying the value in this LID.
*   Refer to CS0021-GAK1C-AND-v1.0EN_Platform_System_RF_RF_NVRAM_LID_Introduction_Application_Note.docx for more details.
* INFOMATION
*   Can OTA Reset: Yes
*   Update Scenario: This LID will be updated in initial task.
*********************************************************************************************/
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_UL1_RXPOWEROFFSET_HIGHBAND2_LID)
     U_sRXPOWEROFFSETDATA *NVRAM_EF_UL1_RXPOWEROFFSET_BAND_TOTAL
     {
     
     };
/********************************************************************************************
* LID_NAME
*   NVRAM_EF_UL1_RXPOWEROFFSET_HIGHBAND3_LID
* DESCRIPTION
*   The RSSI of received signal can be increased or decreased by modifying the value in this LID.
*   Refer to CS0021-GAK1C-AND-v1.0EN_Platform_System_RF_RF_NVRAM_LID_Introduction_Application_Note.docx for more details.
* INFOMATION
*   Can OTA Reset: Yes
*   Update Scenario: This LID will be updated in initial task.
*********************************************************************************************/
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_UL1_RXPOWEROFFSET_HIGHBAND3_LID)
     U_sRXPOWEROFFSETDATA *NVRAM_EF_UL1_RXPOWEROFFSET_BAND_TOTAL
     {
     
     };
/********************************************************************************************
* LID_NAME
*   NVRAM_EF_UL1_RXPOWEROFFSET_LOWBAND1_LID
* DESCRIPTION
*   The RSSI of received signal can be increased or decreased by modifying the value in this LID.
*   Refer to CS0021-GAK1C-AND-v1.0EN_Platform_System_RF_RF_NVRAM_LID_Introduction_Application_Note.docx for more details.
* INFOMATION
*   Can OTA Reset: Yes
*   Update Scenario: This LID will be updated in initial task.
*********************************************************************************************/
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_UL1_RXPOWEROFFSET_LOWBAND1_LID)
     U_sRXPOWEROFFSETDATA *NVRAM_EF_UL1_RXPOWEROFFSET_BAND_TOTAL
     {
     
     };
/********************************************************************************************
* LID_NAME
*   NVRAM_EF_UL1_RXPOWEROFFSET_LOWBAND2_LID
* DESCRIPTION
*   The RSSI of received signal can be increased or decreased by modifying the value in this LID.
*   Refer to CS0021-GAK1C-AND-v1.0EN_Platform_System_RF_RF_NVRAM_LID_Introduction_Application_Note.docx for more details.
* INFOMATION
*   Can OTA Reset: Yes
*   Update Scenario: This LID will be updated in initial task.
*********************************************************************************************/
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_UL1_RXPOWEROFFSET_LOWBAND2_LID)
     U_sRXPOWEROFFSETDATA *NVRAM_EF_UL1_RXPOWEROFFSET_BAND_TOTAL
     {
     
     };
#endif   /* IS_3G_RX_POWER_OFFSET_SUPPORT */

#if (IS_3G_RFEQ_COEF_SUBBAND_SUPPORT)
/********************************************************************************************
* LID_NAME
*   NVRAM_EF_UL1_RFEQ_COEF_HIGHBAND1_LID
* DESCRIPTION
*   Finetune Complex RFEQ for HSDPA max throughput.
*   Refer to CS0021-GAK1C-AND-v1.0EN_Platform_System_RF_RF_NVRAM_LID_Introduction_Application_Note.docx for more details.
* INFOMATION
*   Can OTA Reset: Yes
*   Update Scenario: This LID will be updated in initial task.
*********************************************************************************************/
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_UL1_RFEQ_COEF_HIGHBAND1_LID)
     hs_dsch_rfeq_info_band_T *NVRAM_EF_UL1_RFEQ_COEF_BAND_TOTAL
     {
     
     };
/********************************************************************************************
* LID_NAME
*   NVRAM_EF_UL1_RFEQ_COEF_HIGHBAND2_LID
* DESCRIPTION
*   Finetune Complex RFEQ for HSDPA max throughput.
*   Refer to CS0021-GAK1C-AND-v1.0EN_Platform_System_RF_RF_NVRAM_LID_Introduction_Application_Note.docx for more details.
* INFOMATION
*   Can OTA Reset: Yes
*   Update Scenario: This LID will be updated in initial task.
*********************************************************************************************/
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_UL1_RFEQ_COEF_HIGHBAND2_LID)
     hs_dsch_rfeq_info_band_T *NVRAM_EF_UL1_RFEQ_COEF_BAND_TOTAL
     {
     
     };
/********************************************************************************************
* LID_NAME
*   NVRAM_EF_UL1_RFEQ_COEF_HIGHBAND3_LID
* DESCRIPTION
*   Finetune Complex RFEQ for HSDPA max throughput.
*   Refer to CS0021-GAK1C-AND-v1.0EN_Platform_System_RF_RF_NVRAM_LID_Introduction_Application_Note.docx for more details.
* INFOMATION
*   Can OTA Reset: Yes
*   Update Scenario: This LID will be updated in initial task.
*********************************************************************************************/
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_UL1_RFEQ_COEF_HIGHBAND3_LID)
     hs_dsch_rfeq_info_band_T *NVRAM_EF_UL1_RFEQ_COEF_BAND_TOTAL
     {
     
     };
/********************************************************************************************
* LID_NAME
*   NVRAM_EF_UL1_RFEQ_COEF_LOWBAND1_LID
* DESCRIPTION
*   Finetune Complex RFEQ for HSDPA max throughput.
*   Refer to CS0021-GAK1C-AND-v1.0EN_Platform_System_RF_RF_NVRAM_LID_Introduction_Application_Note.docx for more details.
* INFOMATION
*   Can OTA Reset: Yes
*   Update Scenario: This LID will be updated in initial task.
*********************************************************************************************/
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_UL1_RFEQ_COEF_LOWBAND1_LID)
     hs_dsch_rfeq_info_band_T *NVRAM_EF_UL1_RFEQ_COEF_BAND_TOTAL
     {
     
     };
/********************************************************************************************
* LID_NAME
*   NVRAM_EF_UL1_RFEQ_COEF_LOWBAND2_LID
* DESCRIPTION
*   Finetune Complex RFEQ for HSDPA max throughput.
*   Refer to CS0021-GAK1C-AND-v1.0EN_Platform_System_RF_RF_NVRAM_LID_Introduction_Application_Note.docx for more details.
* INFOMATION
*   Can OTA Reset: Yes
*   Update Scenario: This LID will be updated in initial task.
*********************************************************************************************/
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_UL1_RFEQ_COEF_LOWBAND2_LID)
     hs_dsch_rfeq_info_band_T *NVRAM_EF_UL1_RFEQ_COEF_BAND_TOTAL
     {
     
     };
#endif   /* IS_3G_RFEQ_COEF_SUBBAND_SUPPORT */

#if (IS_3G_RFEQ_REAL_COEF_TEST)
/********************************************************************************************
* LID_NAME
*   NVRAM_EF_UL1_RFEQ_REAL_COEF_HIGHBAND1_LID
* DESCRIPTION
*   Finetune Real RFEQ for HSDPA max throughput.
*   Refer to CS0021-GAK1C-AND-v1.0EN_Platform_System_RF_RF_NVRAM_LID_Introduction_Application_Note.docx for more details.
* INFOMATION
*   Can OTA Reset: Yes
*   Update Scenario: This LID will be updated in initial task.
*********************************************************************************************/
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_UL1_RFEQ_REAL_COEF_HIGHBAND1_LID)
     URXDFE_REAL_RFEQ_CUSTOM_BAND_T *NVRAM_EF_UL1_RFEQ_REAL_COEF_BAND_TOTAL
     {
     
     };
/********************************************************************************************
* LID_NAME
*   NVRAM_EF_UL1_RFEQ_REAL_COEF_HIGHBAND2_LID
* DESCRIPTION
*   Finetune Real RFEQ for HSDPA max throughput.
*   Refer to CS0021-GAK1C-AND-v1.0EN_Platform_System_RF_RF_NVRAM_LID_Introduction_Application_Note.docx for more details.
* INFOMATION
*   Can OTA Reset: Yes
*   Update Scenario: This LID will be updated in initial task.
*********************************************************************************************/
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_UL1_RFEQ_REAL_COEF_HIGHBAND2_LID)
     URXDFE_REAL_RFEQ_CUSTOM_BAND_T *NVRAM_EF_UL1_RFEQ_REAL_COEF_BAND_TOTAL
     {
     
     };
/********************************************************************************************
* LID_NAME
*   NVRAM_EF_UL1_RFEQ_REAL_COEF_HIGHBAND3_LID
* DESCRIPTION
*   Finetune Real RFEQ for HSDPA max throughput.
*   Refer to CS0021-GAK1C-AND-v1.0EN_Platform_System_RF_RF_NVRAM_LID_Introduction_Application_Note.docx for more details.
* INFOMATION
*   Can OTA Reset: Yes
*   Update Scenario: This LID will be updated in initial task.
*********************************************************************************************/
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_UL1_RFEQ_REAL_COEF_HIGHBAND3_LID)
     URXDFE_REAL_RFEQ_CUSTOM_BAND_T *NVRAM_EF_UL1_RFEQ_REAL_COEF_BAND_TOTAL
     {
     
     };
/********************************************************************************************
* LID_NAME
*   NVRAM_EF_UL1_RFEQ_REAL_COEF_LOWBAND1_LID
* DESCRIPTION
*   Finetune Real RFEQ for HSDPA max throughput.
*   Refer to CS0021-GAK1C-AND-v1.0EN_Platform_System_RF_RF_NVRAM_LID_Introduction_Application_Note.docx for more details.
* INFOMATION
*   Can OTA Reset: Yes
*   Update Scenario: This LID will be updated in initial task.
*********************************************************************************************/
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_UL1_RFEQ_REAL_COEF_LOWBAND1_LID)
     URXDFE_REAL_RFEQ_CUSTOM_BAND_T *NVRAM_EF_UL1_RFEQ_REAL_COEF_BAND_TOTAL
     {
     
     };
/********************************************************************************************
* LID_NAME
*   NVRAM_EF_UL1_RFEQ_REAL_COEF_LOWBAND2_LID
* DESCRIPTION
*   Finetune Real RFEQ for HSDPA max throughput.
*   Refer to CS0021-GAK1C-AND-v1.0EN_Platform_System_RF_RF_NVRAM_LID_Introduction_Application_Note.docx for more details.
* INFOMATION
*   Can OTA Reset: Yes
*   Update Scenario: This LID will be updated in initial task.
*********************************************************************************************/
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_UL1_RFEQ_REAL_COEF_LOWBAND2_LID)
     URXDFE_REAL_RFEQ_CUSTOM_BAND_T *NVRAM_EF_UL1_RFEQ_REAL_COEF_BAND_TOTAL
     {
     
     };
#endif   /* IS_3G_RFEQ_REAL_COEF_TEST */

/********************************************************************************************
* LID_NAME
*   NVRAM_EF_UL1_PWRONCAL_BAND1_LID
* DESCRIPTION
*   WCDMA calibration data for Power On.
*   Refer to CS0021-GAK1C-AND-v1.0EN_Platform_System_RF_RF_NVRAM_LID_Introduction_Application_Note.docx for more details.
* INFOMATION
*   Can OTA Reset: No
*   Update Scenario: This LID will be updated in initial task and calibration.
*********************************************************************************************/
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_UL1_PWRONCAL_BAND1_LID)
     UMTS_RF_POWER_ON_CAL_DATA_PER_BAND_T *NVRAM_EF_UL1_PWRONCAL_TOTAL
     {

   };
/********************************************************************************************
* LID_NAME
*   NVRAM_EF_UL1_PWRONCAL_BAND2_LID
* DESCRIPTION
*   WCDMA calibration data for Power On.
*   Refer to CS0021-GAK1C-AND-v1.0EN_Platform_System_RF_RF_NVRAM_LID_Introduction_Application_Note.docx for more details.
* INFOMATION
*   Can OTA Reset: No
*   Update Scenario: This LID will be updated in initial task and calibration.
*********************************************************************************************/
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_UL1_PWRONCAL_BAND2_LID)
     UMTS_RF_POWER_ON_CAL_DATA_PER_BAND_T *NVRAM_EF_UL1_PWRONCAL_TOTAL
     {

   };
/********************************************************************************************
* LID_NAME
*   NVRAM_EF_UL1_PWRONCAL_BAND3_LID
* DESCRIPTION
*   WCDMA calibration data for Power On.
*   Refer to CS0021-GAK1C-AND-v1.0EN_Platform_System_RF_RF_NVRAM_LID_Introduction_Application_Note.docx for more details.
* INFOMATION
*   Can OTA Reset: No
*   Update Scenario: This LID will be updated in initial task and calibration.
*********************************************************************************************/
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_UL1_PWRONCAL_BAND3_LID)
     UMTS_RF_POWER_ON_CAL_DATA_PER_BAND_T *NVRAM_EF_UL1_PWRONCAL_TOTAL
     {

   };
/********************************************************************************************
* LID_NAME
*   NVRAM_EF_UL1_PWRONCAL_BAND4_LID
* DESCRIPTION
*   WCDMA calibration data for Power On.
*   Refer to CS0021-GAK1C-AND-v1.0EN_Platform_System_RF_RF_NVRAM_LID_Introduction_Application_Note.docx for more details.
* INFOMATION
*   Can OTA Reset: No
*   Update Scenario: This LID will be updated in initial task and calibration.
*********************************************************************************************/
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_UL1_PWRONCAL_BAND4_LID)
     UMTS_RF_POWER_ON_CAL_DATA_PER_BAND_T *NVRAM_EF_UL1_PWRONCAL_TOTAL
     {

   };
/********************************************************************************************
* LID_NAME
*   NVRAM_EF_UL1_PWRONCAL_BAND5_LID
* DESCRIPTION
*   WCDMA calibration data for Power On.
*   Refer to CS0021-GAK1C-AND-v1.0EN_Platform_System_RF_RF_NVRAM_LID_Introduction_Application_Note.docx for more details.
* INFOMATION
*   Can OTA Reset: No
*   Update Scenario: This LID will be updated in initial task and calibration.
*********************************************************************************************/
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_UL1_PWRONCAL_BAND5_LID)
     UMTS_RF_POWER_ON_CAL_DATA_PER_BAND_T *NVRAM_EF_UL1_PWRONCAL_TOTAL
     {

   };
/********************************************************************************************
* LID_NAME
*   NVRAM_EF_UL1_PWRONCAL_BAND6_LID
* DESCRIPTION
*   WCDMA calibration data for Power On.
*   Refer to CS0021-GAK1C-AND-v1.0EN_Platform_System_RF_RF_NVRAM_LID_Introduction_Application_Note.docx for more details.
* INFOMATION
*   Can OTA Reset: No
*   Update Scenario: This LID will be updated in initial task and calibration.
*********************************************************************************************/
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_UL1_PWRONCAL_BAND6_LID)
     UMTS_RF_POWER_ON_CAL_DATA_PER_BAND_T *NVRAM_EF_UL1_PWRONCAL_TOTAL
     {

   };
/********************************************************************************************
* LID_NAME
*   NVRAM_EF_UL1_PWRONCAL_BAND7_LID
* DESCRIPTION
*   WCDMA calibration data for Power On.
*   Refer to CS0021-GAK1C-AND-v1.0EN_Platform_System_RF_RF_NVRAM_LID_Introduction_Application_Note.docx for more details.
* INFOMATION
*   Can OTA Reset: No
*   Update Scenario: This LID will be updated in initial task and calibration.
*********************************************************************************************/
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_UL1_PWRONCAL_BAND7_LID)
     UMTS_RF_POWER_ON_CAL_DATA_PER_BAND_T *NVRAM_EF_UL1_PWRONCAL_TOTAL
     {

   };
/********************************************************************************************
* LID_NAME
*   NVRAM_EF_UL1_PWRONCAL_BAND8_LID
* DESCRIPTION
*   WCDMA calibration data for Power On.
*   Refer to CS0021-GAK1C-AND-v1.0EN_Platform_System_RF_RF_NVRAM_LID_Introduction_Application_Note.docx for more details.
* INFOMATION
*   Can OTA Reset: No
*   Update Scenario: This LID will be updated in initial task and calibration.
*********************************************************************************************/
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_UL1_PWRONCAL_BAND8_LID)
     UMTS_RF_POWER_ON_CAL_DATA_PER_BAND_T *NVRAM_EF_UL1_PWRONCAL_TOTAL
     {

   };
/********************************************************************************************
* LID_NAME
*   NVRAM_EF_UL1_PWRONCAL_BAND9_LID
* DESCRIPTION
*   WCDMA calibration data for Power On.
*   Refer to CS0021-GAK1C-AND-v1.0EN_Platform_System_RF_RF_NVRAM_LID_Introduction_Application_Note.docx for more details.
* INFOMATION
*   Can OTA Reset: No
*   Update Scenario: This LID will be updated in initial task and calibration.
*********************************************************************************************/
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_UL1_PWRONCAL_BAND9_LID)
     UMTS_RF_POWER_ON_CAL_DATA_PER_BAND_T *NVRAM_EF_UL1_PWRONCAL_TOTAL
     {

   };
/********************************************************************************************
* LID_NAME
*   NVRAM_EF_UL1_PWRONCAL_BAND10_LID
* DESCRIPTION
*   WCDMA calibration data for Power On.
*   Refer to CS0021-GAK1C-AND-v1.0EN_Platform_System_RF_RF_NVRAM_LID_Introduction_Application_Note.docx for more details.
* INFOMATION
*   Can OTA Reset: No
*   Update Scenario: This LID will be updated in initial task and calibration.
*********************************************************************************************/
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_UL1_PWRONCAL_BAND10_LID)
     UMTS_RF_POWER_ON_CAL_DATA_PER_BAND_T *NVRAM_EF_UL1_PWRONCAL_TOTAL
     {

   };
/********************************************************************************************
* LID_NAME
*   NVRAM_EF_UL1_PWRONCAL_BAND11_LID
* DESCRIPTION
*   WCDMA calibration data for Power On.
*   Refer to CS0021-GAK1C-AND-v1.0EN_Platform_System_RF_RF_NVRAM_LID_Introduction_Application_Note.docx for more details.
* INFOMATION
*   Can OTA Reset: No
*   Update Scenario: This LID will be updated in initial task and calibration.
*********************************************************************************************/
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_UL1_PWRONCAL_BAND11_LID)
     UMTS_RF_POWER_ON_CAL_DATA_PER_BAND_T *NVRAM_EF_UL1_PWRONCAL_TOTAL
     {

   };
/********************************************************************************************
* LID_NAME
*   NVRAM_EF_UL1_PWRONCAL_BAND19_LID
* DESCRIPTION
*   WCDMA calibration data for Power On.
*   Refer to CS0021-GAK1C-AND-v1.0EN_Platform_System_RF_RF_NVRAM_LID_Introduction_Application_Note.docx for more details.
* INFOMATION
*   Can OTA Reset: No
*   Update Scenario: This LID will be updated in initial task and calibration.
*********************************************************************************************/
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_UL1_PWRONCAL_BAND19_LID)
     UMTS_RF_POWER_ON_CAL_DATA_PER_BAND_T *NVRAM_EF_UL1_PWRONCAL_TOTAL
     {

   };

#if defined(__UMTS_RAT__) && defined(__MTK_UL1_FDD__)
/***************************************************************************************************
* LID_NAME
*      NVRAM_EF_UL1_TEMP_DAC_LID
*DESCRIPTION
*      The value of temperature DAC value ranged from 0 to 1023.
*      Reference:Platform_System_RF_MT6763_RF_NVRAM_LID_Introduction_Application_Note.docx
*INFORMATION
*     Can OTA Reset: No
*     Update Scenario:The data in this LID will be updated task init and calibration..
****************************************************************************************************/
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_UL1_TEMP_DAC_LID)
     ul1cal_tempdacData_T *NVRAM_EF_UL1_TEMP_DAC_TOTAL
     {

   };
/***************************************************************************************************
* LID_NAME
*      NVRAM_EF_UL1_PATHLOSS_BAND1_LID
*DESCRIPTION
*      WCDMA calibration data for RX main path pahtloss.
*      Reference:Platform_System_RF_MT6763_RF_NVRAM_LID_Introduction_Application_Note.docx
*INFORMATION
*     Can OTA Reset: No
*     Update Scenario:The data in this LID will be updated task init and calibration..
****************************************************************************************************/
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_UL1_PATHLOSS_BAND1_LID)
     ul1cal_pathlossData_T *NVRAM_EF_UL1_PATHLOSS_BAND_TOTAL
     {

   };
/***************************************************************************************************
* LID_NAME
*      NVRAM_EF_UL1_PATHLOSS_BAND2_LID
*DESCRIPTION
*      WCDMA calibration data for RX main path pahtloss.
*      Reference:Platform_System_RF_MT6763_RF_NVRAM_LID_Introduction_Application_Note.docx
*INFORMATION
*     Can OTA Reset: No
*     Update Scenario:The data in this LID will be updated task init and calibration..
****************************************************************************************************/
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_UL1_PATHLOSS_BAND2_LID)
     ul1cal_pathlossData_T *NVRAM_EF_UL1_PATHLOSS_BAND_TOTAL
     {

   };
/***************************************************************************************************
* LID_NAME
*      NVRAM_EF_UL1_PATHLOSS_BAND3_LID
*DESCRIPTION
*      WCDMA calibration data for RX main path pahtloss.
*      Reference:Platform_System_RF_MT6763_RF_NVRAM_LID_Introduction_Application_Note.docx
*INFORMATION
*     Can OTA Reset: No
*     Update Scenario:The data in this LID will be updated task init and calibration..
****************************************************************************************************/
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_UL1_PATHLOSS_BAND3_LID)
     ul1cal_pathlossData_T *NVRAM_EF_UL1_PATHLOSS_BAND_TOTAL
     {

   };
/***************************************************************************************************
* LID_NAME
*      NVRAM_EF_UL1_PATHLOSS_BAND4_LID
*DESCRIPTION
*      WCDMA calibration data for RX main path pahtloss.
*      Reference:Platform_System_RF_MT6763_RF_NVRAM_LID_Introduction_Application_Note.docx
*INFORMATION
*     Can OTA Reset: No
*     Update Scenario:The data in this LID will be updated task init and calibration..
****************************************************************************************************/
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_UL1_PATHLOSS_BAND4_LID)
     ul1cal_pathlossData_T *NVRAM_EF_UL1_PATHLOSS_BAND_TOTAL
     {

   };
/***************************************************************************************************
* LID_NAME
*      NVRAM_EF_UL1_PATHLOSS_BAND5_LID
*DESCRIPTION
*      WCDMA calibration data for RX main path pahtloss.
*      Reference:Platform_System_RF_MT6763_RF_NVRAM_LID_Introduction_Application_Note.docx
*INFORMATION
*     Can OTA Reset: No
*     Update Scenario:The data in this LID will be updated task init and calibration..
****************************************************************************************************/
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_UL1_PATHLOSS_BAND5_LID)
     ul1cal_pathlossData_T *NVRAM_EF_UL1_PATHLOSS_BAND_TOTAL
     {

   };
/***************************************************************************************************
* LID_NAME
*      NVRAM_EF_UL1_PATHLOSS_BAND6_LID
*DESCRIPTION
*      WCDMA calibration data for RX main path pahtloss.
*      Reference:Platform_System_RF_MT6763_RF_NVRAM_LID_Introduction_Application_Note.docx
*INFORMATION
*     Can OTA Reset: No
*     Update Scenario:The data in this LID will be updated task init and calibration..
****************************************************************************************************/
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_UL1_PATHLOSS_BAND6_LID)
     ul1cal_pathlossData_T *NVRAM_EF_UL1_PATHLOSS_BAND_TOTAL
     {

   };
/***************************************************************************************************
* LID_NAME
*      NVRAM_EF_UL1_PATHLOSS_BAND7_LID
*DESCRIPTION
*      WCDMA calibration data for RX main path pahtloss.
*      Reference:Platform_System_RF_MT6763_RF_NVRAM_LID_Introduction_Application_Note.docx
*INFORMATION
*     Can OTA Reset: No
*     Update Scenario:The data in this LID will be updated task init and calibration..
****************************************************************************************************/
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_UL1_PATHLOSS_BAND7_LID)
     ul1cal_pathlossData_T *NVRAM_EF_UL1_PATHLOSS_BAND_TOTAL
     {

   };
/***************************************************************************************************
* LID_NAME
*      NVRAM_EF_UL1_PATHLOSS_BAND8_LID
*DESCRIPTION
*      WCDMA calibration data for RX main path pahtloss.
*      Reference:Platform_System_RF_MT6763_RF_NVRAM_LID_Introduction_Application_Note.docx
*INFORMATION
*     Can OTA Reset: No
*     Update Scenario:The data in this LID will be updated task init and calibration..
****************************************************************************************************/
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_UL1_PATHLOSS_BAND8_LID)
     ul1cal_pathlossData_T *NVRAM_EF_UL1_PATHLOSS_BAND_TOTAL
     {

   };
/***************************************************************************************************
* LID_NAME
*      NVRAM_EF_UL1_PATHLOSS_BAND9_LID
*DESCRIPTION
*      WCDMA calibration data for RX main path pahtloss.
*      Reference:Platform_System_RF_MT6763_RF_NVRAM_LID_Introduction_Application_Note.docx
*INFORMATION
*     Can OTA Reset: No
*     Update Scenario:The data in this LID will be updated task init and calibration..
****************************************************************************************************/
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_UL1_PATHLOSS_BAND9_LID)
     ul1cal_pathlossData_T *NVRAM_EF_UL1_PATHLOSS_BAND_TOTAL
     {

   };
/***************************************************************************************************
* LID_NAME
*      NVRAM_EF_UL1_PATHLOSS_BAND10_LID
*DESCRIPTION
*      WCDMA calibration data for RX main path pahtloss.
*      Reference:Platform_System_RF_MT6763_RF_NVRAM_LID_Introduction_Application_Note.docx
*INFORMATION
*     Can OTA Reset: No
*     Update Scenario:The data in this LID will be updated task init and calibration..
****************************************************************************************************/
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_UL1_PATHLOSS_BAND10_LID)
     ul1cal_pathlossData_T *NVRAM_EF_UL1_PATHLOSS_BAND_TOTAL
     {

   };
/***************************************************************************************************
* LID_NAME
*      NVRAM_EF_UL1_PATHLOSS_BAND11_LID
*DESCRIPTION
*      WCDMA calibration data for RX main path pahtloss.
*      Reference:Platform_System_RF_MT6763_RF_NVRAM_LID_Introduction_Application_Note.docx
*INFORMATION
*     Can OTA Reset: No
*     Update Scenario:The data in this LID will be updated task init and calibration..
****************************************************************************************************/
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_UL1_PATHLOSS_BAND11_LID)
     ul1cal_pathlossData_T *NVRAM_EF_UL1_PATHLOSS_BAND_TOTAL
     {

   };
/***************************************************************************************************
* LID_NAME
*      NVRAM_EF_UL1_PATHLOSS_BAND19_LID
*DESCRIPTION
*      WCDMA calibration data for RX main path pahtloss.
*      Reference:Platform_System_RF_MT6763_RF_NVRAM_LID_Introduction_Application_Note.docx
*INFORMATION
*     Can OTA Reset: No
*     Update Scenario:The data in this LID will be updated task init and calibration..
****************************************************************************************************/
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_UL1_PATHLOSS_BAND19_LID)
     ul1cal_pathlossData_T *NVRAM_EF_UL1_PATHLOSS_BAND_TOTAL
     {

   };
/***************************************************************************************************
* LID_NAME
*      NVRAM_EF_UL1_TXDAC_BAND1_LID
*DESCRIPTION
*      WCDMA calibration data for TX and detector.
*      Reference:Platform_System_RF_MT6763_RF_NVRAM_LID_Introduction_Application_Note.docx
*INFORMATION
*     Can OTA Reset: No
*     Update Scenario:The data in this LID will be updated task init and calibration..
****************************************************************************************************/
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_UL1_TXDAC_BAND1_LID)
     ul1cal_txdacData_T *NVRAM_EF_UL1_TXDAC_BAND_TOTAL
     {

   };
/***************************************************************************************************
* LID_NAME
*      NVRAM_EF_UL1_TXDAC_BAND2_LID
*DESCRIPTION
*      WCDMA calibration data for TX and detector.
*      Reference:Platform_System_RF_MT6763_RF_NVRAM_LID_Introduction_Application_Note.docx
*INFORMATION
*     Can OTA Reset: No
*     Update Scenario:The data in this LID will be updated task init and calibration..
****************************************************************************************************/
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_UL1_TXDAC_BAND2_LID)
     ul1cal_txdacData_T *NVRAM_EF_UL1_TXDAC_BAND_TOTAL
     {

     };
/***************************************************************************************************
* LID_NAME
*      NVRAM_EF_UL1_TXDAC_BAND3_LID
*DESCRIPTION
*      WCDMA calibration data for TX and detector.
*      Reference:Platform_System_RF_MT6763_RF_NVRAM_LID_Introduction_Application_Note.docx
*INFORMATION
*     Can OTA Reset: No
*     Update Scenario:The data in this LID will be updated task init and calibration..
****************************************************************************************************/
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_UL1_TXDAC_BAND3_LID)
     ul1cal_txdacData_T *NVRAM_EF_UL1_TXDAC_BAND_TOTAL
     {

     };
/***************************************************************************************************
* LID_NAME
*      NVRAM_EF_UL1_TXDAC_BAND4_LID
*DESCRIPTION
*      WCDMA calibration data for TX and detector.
*      Reference:Platform_System_RF_MT6763_RF_NVRAM_LID_Introduction_Application_Note.docx
*INFORMATION
*     Can OTA Reset: No
*     Update Scenario:The data in this LID will be updated task init and calibration..
****************************************************************************************************/
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_UL1_TXDAC_BAND4_LID)
     ul1cal_txdacData_T *NVRAM_EF_UL1_TXDAC_BAND_TOTAL
     {

   };
/***************************************************************************************************
* LID_NAME
*      NVRAM_EF_UL1_TXDAC_BAND5_LID
*DESCRIPTION
*      WCDMA calibration data for TX and detector.
*      Reference:Platform_System_RF_MT6763_RF_NVRAM_LID_Introduction_Application_Note.docx
*INFORMATION
*     Can OTA Reset: No
*     Update Scenario:The data in this LID will be updated task init and calibration..
****************************************************************************************************/
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_UL1_TXDAC_BAND5_LID)
     ul1cal_txdacData_T *NVRAM_EF_UL1_TXDAC_BAND_TOTAL
     {

     };
/***************************************************************************************************
* LID_NAME
*      NVRAM_EF_UL1_TXDAC_BAND6_LID
*DESCRIPTION
*      WCDMA calibration data for TX and detector.
*      Reference:Platform_System_RF_MT6763_RF_NVRAM_LID_Introduction_Application_Note.docx
*INFORMATION
*     Can OTA Reset: No
*     Update Scenario:The data in this LID will be updated task init and calibration..
****************************************************************************************************/
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_UL1_TXDAC_BAND6_LID)
     ul1cal_txdacData_T *NVRAM_EF_UL1_TXDAC_BAND_TOTAL
     {

     };
/***************************************************************************************************
* LID_NAME
*      NVRAM_EF_UL1_TXDAC_BAND7_LID
*DESCRIPTION
*      WCDMA calibration data for TX and detector.
*      Reference:Platform_System_RF_MT6763_RF_NVRAM_LID_Introduction_Application_Note.docx
*INFORMATION
*     Can OTA Reset: No
*     Update Scenario:The data in this LID will be updated task init and calibration..
****************************************************************************************************/
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_UL1_TXDAC_BAND7_LID)
     ul1cal_txdacData_T *NVRAM_EF_UL1_TXDAC_BAND_TOTAL
     {

     };
/***************************************************************************************************
* LID_NAME
*      NVRAM_EF_UL1_TXDAC_BAND8_LID
*DESCRIPTION
*      WCDMA calibration data for TX and detector.
*      Reference:Platform_System_RF_MT6763_RF_NVRAM_LID_Introduction_Application_Note.docx
*INFORMATION
*     Can OTA Reset: No
*     Update Scenario:The data in this LID will be updated task init and calibration..
****************************************************************************************************/
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_UL1_TXDAC_BAND8_LID)
     ul1cal_txdacData_T *NVRAM_EF_UL1_TXDAC_BAND_TOTAL
     {

     };
/***************************************************************************************************
* LID_NAME
*      NVRAM_EF_UL1_TXDAC_BAND9_LID
*DESCRIPTION
*      WCDMA calibration data for TX and detector.
*      Reference:Platform_System_RF_MT6763_RF_NVRAM_LID_Introduction_Application_Note.docx
*INFORMATION
*     Can OTA Reset: No
*     Update Scenario:The data in this LID will be updated task init and calibration..
****************************************************************************************************/
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_UL1_TXDAC_BAND9_LID)
     ul1cal_txdacData_T *NVRAM_EF_UL1_TXDAC_BAND_TOTAL
     {

     };
/***************************************************************************************************
* LID_NAME
*      NVRAM_EF_UL1_TXDAC_BAND10_LID
*DESCRIPTION
*      WCDMA calibration data for TX and detector.
*      Reference:Platform_System_RF_MT6763_RF_NVRAM_LID_Introduction_Application_Note.docx
*INFORMATION
*     Can OTA Reset: No
*     Update Scenario:The data in this LID will be updated task init and calibration..
****************************************************************************************************/
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_UL1_TXDAC_BAND10_LID)
     ul1cal_txdacData_T *NVRAM_EF_UL1_TXDAC_BAND_TOTAL
     {

     };
/***************************************************************************************************
* LID_NAME
*      NVRAM_EF_UL1_TXDAC_BAND11_LID
*DESCRIPTION
*      WCDMA calibration data for TX and detector.
*      Reference:Platform_System_RF_MT6763_RF_NVRAM_LID_Introduction_Application_Note.docx
*INFORMATION
*     Can OTA Reset: No
*     Update Scenario:The data in this LID will be updated task init and calibration..
****************************************************************************************************/
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_UL1_TXDAC_BAND11_LID)
     ul1cal_txdacData_T *NVRAM_EF_UL1_TXDAC_BAND_TOTAL
     {

     };
/***************************************************************************************************
* LID_NAME
*      NVRAM_EF_UL1_TXDAC_BAND19_LID
*DESCRIPTION
*      WCDMA calibration data for TX and detector.
*      Reference:Platform_System_RF_MT6763_RF_NVRAM_LID_Introduction_Application_Note.docx
*INFORMATION
*     Can OTA Reset: No
*     Update Scenario:The data in this LID will be updated task init and calibration..
****************************************************************************************************/
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_UL1_TXDAC_BAND19_LID)
     ul1cal_txdacData_T *NVRAM_EF_UL1_TXDAC_BAND_TOTAL
     {

     };
#endif /* __UMTS_RAT__ && __MTK_UL1_FDD__ */

#if defined (__MTK_UL1_FDD__)
   #if defined (__UL1_HS_PLATFORM__) || defined (__UL1_HS_PLUS_PLATFORM__)
/* PA 8-level control (for MT6276, MT6573) */


/***************************************************************************************************
* LID_NAME
*       NVRAM_EF_UL1_TXPAOCTLEV_BAND1_LID
*DESCRIPTION
*      WCDMA calibration data for PA 8 level .
*      Reference:Platform_System_RF_MT6763_RF_NVRAM_LID_Introduction_Application_Note.docx
*INFORMATION
*      Can OTA Reset: No
*      Update Scenario:The data in this LID will be updated task init and calibration.
****************************************************************************************************/ 
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_UL1_TXPAOCTLEV_BAND1_LID)
     ul1cal_txPaOctLevData_T *NVRAM_EF_UL1_TXPAOCTLEV_BAND_TOTAL
     {

     };
/***************************************************************************************************
* LID_NAME
*       NVRAM_EF_UL1_TXPAOCTLEV_BAND2_LID
*DESCRIPTION
*      WCDMA calibration data for PA 8 level .
*      Reference:Platform_System_RF_MT6763_RF_NVRAM_LID_Introduction_Application_Note.docx
*INFORMATION
*      Can OTA Reset: No
*      Update Scenario:The data in this LID will be updated task init and calibration.
****************************************************************************************************/   
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_UL1_TXPAOCTLEV_BAND2_LID)
     ul1cal_txPaOctLevData_T *NVRAM_EF_UL1_TXPAOCTLEV_BAND_TOTAL
     {

     };
/***************************************************************************************************
* LID_NAME
*       NVRAM_EF_UL1_TXPAOCTLEV_BAND3_LID
*DESCRIPTION
*      WCDMA calibration data for PA 8 level .
*      Reference:Platform_System_RF_MT6763_RF_NVRAM_LID_Introduction_Application_Note.docx
*INFORMATION
*      Can OTA Reset: No
*      Update Scenario:The data in this LID will be updated task init and calibration.
****************************************************************************************************/   
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_UL1_TXPAOCTLEV_BAND3_LID)
     ul1cal_txPaOctLevData_T *NVRAM_EF_UL1_TXPAOCTLEV_BAND_TOTAL
     {

     };

/***************************************************************************************************
* LID_NAME
*       NVRAM_EF_UL1_TXPAOCTLEV_BAND4_LID
*DESCRIPTION
*      WCDMA calibration data for PA 8 level .
*      Reference:Platform_System_RF_MT6763_RF_NVRAM_LID_Introduction_Application_Note.docx
*INFORMATION
*      Can OTA Reset: No
*      Update Scenario:The data in this LID will be updated task init and calibration.
****************************************************************************************************/   
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_UL1_TXPAOCTLEV_BAND4_LID)
     ul1cal_txPaOctLevData_T *NVRAM_EF_UL1_TXPAOCTLEV_BAND_TOTAL
     {

     };

/***************************************************************************************************
* LID_NAME
*       NVRAM_EF_UL1_TXPAOCTLEV_BAND5_LID
*DESCRIPTION
*      WCDMA calibration data for PA 8 level .
*      Reference:Platform_System_RF_MT6763_RF_NVRAM_LID_Introduction_Application_Note.docx
*INFORMATION
*      Can OTA Reset: No
*      Update Scenario:The data in this LID will be updated task init and calibration.
****************************************************************************************************/   
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_UL1_TXPAOCTLEV_BAND5_LID)
     ul1cal_txPaOctLevData_T *NVRAM_EF_UL1_TXPAOCTLEV_BAND_TOTAL
     {

     };

/***************************************************************************************************
* LID_NAME
*       NVRAM_EF_UL1_TXPAOCTLEV_BAND6_LID
*DESCRIPTION
*      WCDMA calibration data for PA 8 level .
*      Reference:Platform_System_RF_MT6763_RF_NVRAM_LID_Introduction_Application_Note.docx
*INFORMATION
*      Can OTA Reset: No
*      Update Scenario:The data in this LID will be updated task init and calibration.
****************************************************************************************************/   
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_UL1_TXPAOCTLEV_BAND6_LID)
     ul1cal_txPaOctLevData_T *NVRAM_EF_UL1_TXPAOCTLEV_BAND_TOTAL
     {

     };
/***************************************************************************************************
* LID_NAME
*       NVRAM_EF_UL1_TXPAOCTLEV_BAND7_LID
*DESCRIPTION
*      WCDMA calibration data for PA 8 level .
*      Reference:Platform_System_RF_MT6763_RF_NVRAM_LID_Introduction_Application_Note.docx
*INFORMATION
*      Can OTA Reset: No
*      Update Scenario:The data in this LID will be updated task init and calibration.
****************************************************************************************************/   
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_UL1_TXPAOCTLEV_BAND7_LID)
     ul1cal_txPaOctLevData_T *NVRAM_EF_UL1_TXPAOCTLEV_BAND_TOTAL
     {

     };
/***************************************************************************************************
* LID_NAME
*       NVRAM_EF_UL1_TXPAOCTLEV_BAND8_LID
*DESCRIPTION
*      WCDMA calibration data for PA 8 level .
*      Reference:Platform_System_RF_MT6763_RF_NVRAM_LID_Introduction_Application_Note.docx
*INFORMATION
*      Can OTA Reset: No
*      Update Scenario:The data in this LID will be updated task init and calibration.
****************************************************************************************************/   
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_UL1_TXPAOCTLEV_BAND8_LID)
     ul1cal_txPaOctLevData_T *NVRAM_EF_UL1_TXPAOCTLEV_BAND_TOTAL
     {

     };
/***************************************************************************************************
* LID_NAME
*       NVRAM_EF_UL1_TXPAOCTLEV_BAND9_LID
*DESCRIPTION
*      WCDMA calibration data for PA 8 level .
*      Reference:Platform_System_RF_MT6763_RF_NVRAM_LID_Introduction_Application_Note.docx
*INFORMATION
*      Can OTA Reset: No
*      Update Scenario:The data in this LID will be updated task init and calibration.
****************************************************************************************************/   
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_UL1_TXPAOCTLEV_BAND9_LID)
     ul1cal_txPaOctLevData_T *NVRAM_EF_UL1_TXPAOCTLEV_BAND_TOTAL
     {

     };
/***************************************************************************************************
* LID_NAME
*       NVRAM_EF_UL1_TXPAOCTLEV_BAND10_LID
*DESCRIPTION
*      WCDMA calibration data for PA 8 level .
*      Reference:Platform_System_RF_MT6763_RF_NVRAM_LID_Introduction_Application_Note.docx
*INFORMATION
*      Can OTA Reset: No
*      Update Scenario:The data in this LID will be updated task init and calibration.
****************************************************************************************************/   
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_UL1_TXPAOCTLEV_BAND10_LID)
     ul1cal_txPaOctLevData_T *NVRAM_EF_UL1_TXPAOCTLEV_BAND_TOTAL
     {

     };
/***************************************************************************************************
* LID_NAME
*       NVRAM_EF_UL1_TXPAOCTLEV_BAND11_LID
*DESCRIPTION
*      WCDMA calibration data for PA 8 level .
*      Reference:Platform_System_RF_MT6763_RF_NVRAM_LID_Introduction_Application_Note.docx
*INFORMATION
*      Can OTA Reset: No
*      Update Scenario:The data in this LID will be updated task init and calibration.
****************************************************************************************************/   
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_UL1_TXPAOCTLEV_BAND11_LID)
     ul1cal_txPaOctLevData_T *NVRAM_EF_UL1_TXPAOCTLEV_BAND_TOTAL
     {

     };
/***************************************************************************************************
* LID_NAME
*       NVRAM_EF_UL1_TXPAOCTLEV_BAND19_LID
*DESCRIPTION
*      WCDMA calibration data for PA 8 level .
*      Reference:Platform_System_RF_MT6763_RF_NVRAM_LID_Introduction_Application_Note.docx
*INFORMATION
*      Can OTA Reset: No
*      Update Scenario:The data in this LID will be updated task init and calibration.
****************************************************************************************************/   
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_UL1_TXPAOCTLEV_BAND19_LID)
     ul1cal_txPaOctLevData_T *NVRAM_EF_UL1_TXPAOCTLEV_BAND_TOTAL
     {

     };
   #endif // #if defined (__UL1_HS_PLATFORM__) || defined (__UL1_HS_PLUS_PLATFORM__)

   #if defined(__UMTS_R8__)
   
 /***************************************************************************************************
   * LID_NAME
   *	  NVRAM_EF_UL1_PATHLOSS2_BAND1_LID
   *DESCRIPTION
   *	  WCDMA calibration data for RX diversity path pahtloss.
   *	  Reference:Platform_System_RF_MT6763_RF_NVRAM_LID_Introduction_Application_Note.docx
   *INFORMATION
   *	 Can OTA Reset: No
   *	 Update Scenario:The data in this LID will be updated task init and calibration.
   ****************************************************************************************************/
   LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_UL1_PATHLOSS2_BAND1_LID)
        ul1cal_pathlossRxdData_T *NVRAM_EF_UL1_PATHLOSS2_BAND_TOTAL
        {

      };
/***************************************************************************************************
* LID_NAME
*        NVRAM_EF_UL1_PATHLOSS2_BAND2_LID
*DESCRIPTION
*	WCDMA calibration data for RX diversity path pahtloss.
*	Reference:Platform_System_RF_MT6763_RF_NVRAM_LID_Introduction_Application_Note.docx
*INFORMATION
*        Can OTA Reset: No
*        Update Scenario:The data in this LID will be updated task init and calibration.
****************************************************************************************************/   
   LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_UL1_PATHLOSS2_BAND2_LID)
        ul1cal_pathlossRxdData_T *NVRAM_EF_UL1_PATHLOSS2_BAND_TOTAL
        {

      };
/***************************************************************************************************
* LID_NAME
*        NVRAM_EF_UL1_PATHLOSS2_BAND3_LID
*DESCRIPTION
*       WCDMA calibration data for RX diversity path pahtloss.
*       Reference:Platform_System_RF_MT6763_RF_NVRAM_LID_Introduction_Application_Note.docx
*INFORMATION
*      Can OTA Reset: No
*     Update Scenario:The data in this LID will be updated task init and calibration.
****************************************************************************************************/ 

   LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_UL1_PATHLOSS2_BAND3_LID)
        ul1cal_pathlossRxdData_T *NVRAM_EF_UL1_PATHLOSS2_BAND_TOTAL
        {

      };
 
/***************************************************************************************************
* LID_NAME
*        NVRAM_EF_UL1_PATHLOSS2_BAND4_LID
*DESCRIPTION
*        WCDMA calibration data for RX diversity path pahtloss.
*	Reference:Platform_System_RF_MT6763_RF_NVRAM_LID_Introduction_Application_Note.docx
*INFORMATION
*        Can OTA Reset: No
*        Update Scenario:The data in this LID will be updated task init and calibration.
****************************************************************************************************/ 
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_UL1_PATHLOSS2_BAND4_LID)
     ul1cal_pathlossRxdData_T *NVRAM_EF_UL1_PATHLOSS2_BAND_TOTAL
     {

   };

/***************************************************************************************************
* LID_NAME
*        NVRAM_EF_UL1_PATHLOSS2_BAND5_LID
*DESCRIPTION
*        WCDMA calibration data for RX diversity path pahtloss.
*	Reference:Platform_System_RF_MT6763_RF_NVRAM_LID_Introduction_Application_Note.docx
*INFORMATION
*        Can OTA Reset: No
*        Update Scenario:The data in this LID will be updated task init and calibration.
****************************************************************************************************/ 
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_UL1_PATHLOSS2_BAND5_LID)
     ul1cal_pathlossRxdData_T *NVRAM_EF_UL1_PATHLOSS2_BAND_TOTAL
     {

   };
/***************************************************************************************************
* LID_NAME
*        NVRAM_EF_UL1_PATHLOSS2_BAND6_LID
*DESCRIPTION
*        WCDMA calibration data for RX diversity path pahtloss.
*	Reference:Platform_System_RF_MT6763_RF_NVRAM_LID_Introduction_Application_Note.docx
*INFORMATION
*        Can OTA Reset: No
*        Update Scenario:The data in this LID will be updated task init and calibration.
****************************************************************************************************/ 
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_UL1_PATHLOSS2_BAND6_LID)
     ul1cal_pathlossRxdData_T *NVRAM_EF_UL1_PATHLOSS2_BAND_TOTAL
     {

   };
/***************************************************************************************************
* LID_NAME
*        NVRAM_EF_UL1_PATHLOSS2_BAND7_LID
*DESCRIPTION
*        WCDMA calibration data for RX diversity path pahtloss.
*	Reference:Platform_System_RF_MT6763_RF_NVRAM_LID_Introduction_Application_Note.docx
*INFORMATION
*        Can OTA Reset: No
*        Update Scenario:The data in this LID will be updated task init and calibration.
****************************************************************************************************/ 
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_UL1_PATHLOSS2_BAND7_LID)
     ul1cal_pathlossRxdData_T *NVRAM_EF_UL1_PATHLOSS2_BAND_TOTAL
     {

   };
/***************************************************************************************************
* LID_NAME
*        NVRAM_EF_UL1_PATHLOSS2_BAND8_LID
*DESCRIPTION
*        WCDMA calibration data for RX diversity path pahtloss.
*	Reference:Platform_System_RF_MT6763_RF_NVRAM_LID_Introduction_Application_Note.docx
*INFORMATION
*        Can OTA Reset: No
*        Update Scenario:The data in this LID will be updated task init and calibration.
****************************************************************************************************/ 
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_UL1_PATHLOSS2_BAND8_LID)
     ul1cal_pathlossRxdData_T *NVRAM_EF_UL1_PATHLOSS2_BAND_TOTAL
     {

   };
/***************************************************************************************************
* LID_NAME
*        NVRAM_EF_UL1_PATHLOSS2_BAND9_LID
*DESCRIPTION
*        WCDMA calibration data for RX diversity path pahtloss.
*        Reference:Platform_System_RF_MT6763_RF_NVRAM_LID_Introduction_Application_Note.docx
*INFORMATION
*        Can OTA Reset: No
*        Update Scenario:The data in this LID will be updated task init and calibration.
****************************************************************************************************/ 
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_UL1_PATHLOSS2_BAND9_LID)
     ul1cal_pathlossRxdData_T *NVRAM_EF_UL1_PATHLOSS2_BAND_TOTAL
     {

   };
/***************************************************************************************************
* LID_NAME
*        NVRAM_EF_UL1_PATHLOSS2_BAND10_LID
*DESCRIPTION
*        WCDMA calibration data for RX diversity path pahtloss.
*	Reference:Platform_System_RF_MT6763_RF_NVRAM_LID_Introduction_Application_Note.docx
*INFORMATION
*        Can OTA Reset: No
*        Update Scenario:The data in this LID will be updated task init and calibration.
****************************************************************************************************/ 
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_UL1_PATHLOSS2_BAND10_LID)
     ul1cal_pathlossRxdData_T *NVRAM_EF_UL1_PATHLOSS2_BAND_TOTAL
     {

   };
/***************************************************************************************************
* LID_NAME
*        NVRAM_EF_UL1_PATHLOSS2_BAND11_LID
*DESCRIPTION
*        WCDMA calibration data for RX diversity path pahtloss.
*	Reference:Platform_System_RF_MT6763_RF_NVRAM_LID_Introduction_Application_Note.docx
*INFORMATION
*        Can OTA Reset: No
*        Update Scenario:The data in this LID will be updated task init and calibration.
****************************************************************************************************/ 
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_UL1_PATHLOSS2_BAND11_LID)
     ul1cal_pathlossRxdData_T *NVRAM_EF_UL1_PATHLOSS2_BAND_TOTAL
     {

   };
/***************************************************************************************************
* LID_NAME
*        NVRAM_EF_UL1_PATHLOSS2_BAND19_LID
*DESCRIPTION
*        WCDMA calibration data for RX diversity path pahtloss.
*	Reference:Platform_System_RF_MT6763_RF_NVRAM_LID_Introduction_Application_Note.docx
*INFORMATION
*        Can OTA Reset: No
*        Update Scenario:The data in this LID will be updated task init and calibration.
****************************************************************************************************/ 
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_UL1_PATHLOSS2_BAND19_LID)
     ul1cal_pathlossRxdData_T *NVRAM_EF_UL1_PATHLOSS2_BAND_TOTAL
     {

   };

// add by Wilson
/***************************************************************************************************
* LID_NAME
*        NVRAM_EF_UL1_TXPADRIFTCOMP_BAND1_LID
*DESCRIPTION
*        WCDMA calibration data of compensation for PA output power in the hysterisis region.It is usually not used now.
*        Reference:Platform_System_RF_MT6763_RF_NVRAM_LID_Introduction_Application_Note.docx
*INFORMATION
*        Can OTA Reset: No
*        Update Scenario:The data in this LID will be updated task init and calibration.
****************************************************************************************************/ 
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_UL1_TXPADRIFTCOMP_BAND1_LID)
     ul1cal_txPaDriftCompData_T *NVRAM_EF_UL1_TXPADRIFTCOMP_BAND_TOTAL
     {

   };

/***************************************************************************************************
* LID_NAME
*        NVRAM_EF_UL1_TXPADRIFTCOMP_BAND2_LID
*DESCRIPTION
*        WCDMA calibration data of compensation for PA output power in the hysterisis region.It is usually not used now.
*        Reference:Platform_System_RF_MT6763_RF_NVRAM_LID_Introduction_Application_Note.docx
*INFORMATION
*        Can OTA Reset: No
*        Update Scenario:The data in this LID will be updated task init and calibration.
****************************************************************************************************/ 
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_UL1_TXPADRIFTCOMP_BAND2_LID)
     ul1cal_txPaDriftCompData_T *NVRAM_EF_UL1_TXPADRIFTCOMP_BAND_TOTAL
     {

   };

/***************************************************************************************************
* LID_NAME
*        NVRAM_EF_UL1_TXPADRIFTCOMP_BAND3_LID
*DESCRIPTION
*        WCDMA calibration data of compensation for PA output power in the hysterisis region.It is usually not used now.
*        Reference:Platform_System_RF_MT6763_RF_NVRAM_LID_Introduction_Application_Note.docx
*INFORMATION
*        Can OTA Reset: No
*        Update Scenario:The data in this LID will be updated task init and calibration.
****************************************************************************************************/ 
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_UL1_TXPADRIFTCOMP_BAND3_LID)
     ul1cal_txPaDriftCompData_T *NVRAM_EF_UL1_TXPADRIFTCOMP_BAND_TOTAL
     {

   };
/***************************************************************************************************
* LID_NAME
*        NVRAM_EF_UL1_TXPADRIFTCOMP_BAND4_LID
*DESCRIPTION
*        WCDMA calibration data of compensation for PA output power in the hysterisis region.It is usually not used now.
*        Reference:Platform_System_RF_MT6763_RF_NVRAM_LID_Introduction_Application_Note.docx
*INFORMATION
*        Can OTA Reset: No
*        Update Scenario:The data in this LID will be updated task init and calibration.
****************************************************************************************************/ 
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_UL1_TXPADRIFTCOMP_BAND4_LID)
     ul1cal_txPaDriftCompData_T *NVRAM_EF_UL1_TXPADRIFTCOMP_BAND_TOTAL
     {

   };

/***************************************************************************************************
* LID_NAME
*        NVRAM_EF_UL1_TXPADRIFTCOMP_BAND5_LID
*DESCRIPTION
*        WCDMA calibration data of compensation for PA output power in the hysterisis region.It is usually not used now.
*        Reference:Platform_System_RF_MT6763_RF_NVRAM_LID_Introduction_Application_Note.docx
*INFORMATION
*        Can OTA Reset: No
*        Update Scenario:The data in this LID will be updated task init and calibration.
****************************************************************************************************/ 
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_UL1_TXPADRIFTCOMP_BAND5_LID)
     ul1cal_txPaDriftCompData_T *NVRAM_EF_UL1_TXPADRIFTCOMP_BAND_TOTAL
     {

   };
/***************************************************************************************************
* LID_NAME
*        NVRAM_EF_UL1_TXPADRIFTCOMP_BAND6_LID
*DESCRIPTION
*        WCDMA calibration data of compensation for PA output power in the hysterisis region.It is usually not used now.
*        Reference:Platform_System_RF_MT6763_RF_NVRAM_LID_Introduction_Application_Note.docx
*INFORMATION
*        Can OTA Reset: No
*        Update Scenario:The data in this LID will be updated task init and calibration.
****************************************************************************************************/ 
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_UL1_TXPADRIFTCOMP_BAND6_LID)
     ul1cal_txPaDriftCompData_T *NVRAM_EF_UL1_TXPADRIFTCOMP_BAND_TOTAL
     {

   };
/***************************************************************************************************
* LID_NAME
*        NVRAM_EF_UL1_TXPADRIFTCOMP_BAND7_LID
*DESCRIPTION
*        WCDMA calibration data of compensation for PA output power in the hysterisis region.It is usually not used now.
*        Reference:Platform_System_RF_MT6763_RF_NVRAM_LID_Introduction_Application_Note.docx
*INFORMATION
*        Can OTA Reset: No
*        Update Scenario:The data in this LID will be updated task init and calibration.
****************************************************************************************************/ 
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_UL1_TXPADRIFTCOMP_BAND7_LID)
     ul1cal_txPaDriftCompData_T *NVRAM_EF_UL1_TXPADRIFTCOMP_BAND_TOTAL
     {

   };
/***************************************************************************************************
* LID_NAME
*        NVRAM_EF_UL1_TXPADRIFTCOMP_BAND8_LID
*DESCRIPTION
*        WCDMA calibration data of compensation for PA output power in the hysterisis region.It is usually not used now.
*        Reference:Platform_System_RF_MT6763_RF_NVRAM_LID_Introduction_Application_Note.docx
*INFORMATION
*        Can OTA Reset: No
*        Update Scenario:The data in this LID will be updated task init and calibration.
****************************************************************************************************/ 
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_UL1_TXPADRIFTCOMP_BAND8_LID)
     ul1cal_txPaDriftCompData_T *NVRAM_EF_UL1_TXPADRIFTCOMP_BAND_TOTAL
     {

   };
/***************************************************************************************************
* LID_NAME
*        NVRAM_EF_UL1_TXPADRIFTCOMP_BAND9_LID
*DESCRIPTION
*        WCDMA calibration data of compensation for PA output power in the hysterisis region.It is usually not used now.
*        Reference:Platform_System_RF_MT6763_RF_NVRAM_LID_Introduction_Application_Note.docx
*INFORMATION
*        Can OTA Reset: No
*        Update Scenario:The data in this LID will be updated task init and calibration.
****************************************************************************************************/ 
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_UL1_TXPADRIFTCOMP_BAND9_LID)
     ul1cal_txPaDriftCompData_T *NVRAM_EF_UL1_TXPADRIFTCOMP_BAND_TOTAL
     {

   };
/***************************************************************************************************
* LID_NAME
*        NVRAM_EF_UL1_TXPADRIFTCOMP_BAND10_LID
*DESCRIPTION
*        WCDMA calibration data of compensation for PA output power in the hysterisis region.It is usually not used now. 
*        Reference:Platform_System_RF_MT6763_RF_NVRAM_LID_Introduction_Application_Note.docx
*INFORMATION
*        Can OTA Reset: No
*        Update Scenario:The data in this LID will be updated task init and calibration.
****************************************************************************************************/ 
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_UL1_TXPADRIFTCOMP_BAND10_LID)
     ul1cal_txPaDriftCompData_T *NVRAM_EF_UL1_TXPADRIFTCOMP_BAND_TOTAL
     {

   };
/***************************************************************************************************
* LID_NAME
*        NVRAM_EF_UL1_TXPADRIFTCOMP_BAND11_LID
*DESCRIPTION
*        WCDMA calibration data of compensation for PA output power in the hysterisis region.It is usually not used now.
*        Reference:Platform_System_RF_MT6763_RF_NVRAM_LID_Introduction_Application_Note.docx
*INFORMATION
*        Can OTA Reset: No
*        Update Scenario:The data in this LID will be updated task init and calibration.
****************************************************************************************************/ 
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_UL1_TXPADRIFTCOMP_BAND11_LID)
     ul1cal_txPaDriftCompData_T *NVRAM_EF_UL1_TXPADRIFTCOMP_BAND_TOTAL
     {

   };
/***************************************************************************************************
* LID_NAME
*        NVRAM_EF_UL1_TXPADRIFTCOMP_BAND19_LID
*DESCRIPTION
*        WCDMA calibration data of compensation for PA output power in the hysterisis region.It is usually not used now.
*        Reference:Platform_System_RF_MT6763_RF_NVRAM_LID_Introduction_Application_Note.docx
*INFORMATION
*        Can OTA Reset: No
*        Update Scenario:The data in this LID will be updated task init and calibration.
****************************************************************************************************/ 
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_UL1_TXPADRIFTCOMP_BAND19_LID)
     ul1cal_txPaDriftCompData_T *NVRAM_EF_UL1_TXPADRIFTCOMP_BAND_TOTAL
     {

   };
#endif
/***************************************************************************************************
* LID_NAME
*       NVRAM_EF_UL1_TAS_THRESHOLD_LID
*DESCRIPTION
*      For 3G TAS Parameters and threshold settings
*      
*INFORMATION
*      Can OTA Reset: Yes
*      Update Scenario:The data in this LID will be updated task init.
****************************************************************************************************/ 
LID_BIT VER_LID(NVRAM_EF_UL1_TAS_THRESHOLD_LID)
     nvram_ef_umts_tas_thr_struct * NVRAM_EF_UL1_TAS_THRESHOLD_TOTAL
     {
        rscp_diff_thd_rp:"RSCP difference threshold div to main rscp diff for SAR type 1"
        {
        };
        rscp_diff_thd_po:"RSCP difference threshold"
        {
        };
        rscp_diff_thd_txp:"Diversity to main RSCP difference threshold for txp"
        {
        };
        rscp_diff_thd_cb:"Diversity to main RSCP difference threshold for rscp"
        {
        };
        tas_type2_blind_switch_init_thd1:"Blind switch initial threshold for TAS Type2 in sec"
        {
        };
        tas_type2_blind_switch_step_size:"Blind swithc step size for TAS Type2 in sec"
        {
        };
        tas_type2_blind_switch_uppBound:"Blind switch upper bound for TAS Type2 in sec"
        {
        };
        tas_type2_rscp_switch_back_thd:"RSCP threshold for switch back condition"
        {
        };
     };
/***************************************************************************************************
* LID_NAME
*       NVRAM_EF_UL1_RAS_PARAMETER_LID
*DESCRIPTION
*      For 3G RAS Parameters and threshold settings
*      
*INFORMATION
*      Can OTA Reset: Yes
*      Update Scenario:The data in this LID will be updated task init.
****************************************************************************************************/ 
LID_BIT VER_LID(NVRAM_EF_UL1_RAS_PARAMETER_LID)
     nvram_ef_umts_ul1_ras_struct * NVRAM_EF_UL1_RAS_PARAMETER_TOTAL
     {
        umtsRASFeatureOn:""
        {
        };
        RssiS2WThrdBm:""
        {
        };
        RssiW2SThrdBm:""
        {
        };
        EcnoS2WThrdB:""
        {
        };
        EcnoW2SThrdB:""
        {
        };
        RscpS2WThrdB:""
        {
        };
        RscpW2SThrdB:""
        {
        };
        BothAntforTestSimPS:""
        {
        };
        HsRateHystPercentage:""
        {
        };
        CqiHystIdx:""
        {
        };
        HsRateThrPercentage:""
        {
        };
        CqiDiffThrIdx:""
        {
        };
     };
#endif // #if defined (__MTK_UL1_FDD__)
/********************************************************************************************
* LID_NAME
*   NVRAM_EF_UL1_DPD_CTRL_DATA_HIGHBAND1_LID
* DESCRIPTION
*   WCDMA DPD control dat
* INFOMATION
*   Can OTA Reset: Yes
*   Update Scenario: This LID will be updated in initial task.
*********************************************************************************************/ 
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_UL1_DPD_CTRL_DATA_HIGHBAND1_LID)
        U_sDPD_COMMON_CTRL *NVRAM_EF_UL1_DPD_CTRL_DATA_TOTAL{

   };
/********************************************************************************************
* LID_NAME
*   NVRAM_EF_UL1_DPD_CTRL_DATA_HIGHBAND2_LID
* DESCRIPTION
*   WCDMA DPD control data
* INFOMATION
*   Can OTA Reset: Yes
*   Update Scenario: This LID will be updated in initial task.
*********************************************************************************************/  
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_UL1_DPD_CTRL_DATA_HIGHBAND2_LID)
     U_sDPD_COMMON_CTRL *NVRAM_EF_UL1_DPD_CTRL_DATA_TOTAL
     {

   };
/********************************************************************************************
* LID_NAME
*   NVRAM_EF_UL1_DPD_CTRL_DATA_HIGHBAND3_LID
* DESCRIPTION
*   WCDMA DPD control data
* INFOMATION
*   Can OTA Reset: Yes
*   Update Scenario: This LID will be updated in initial task.
*********************************************************************************************/   
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_UL1_DPD_CTRL_DATA_HIGHBAND3_LID)
     U_sDPD_COMMON_CTRL *NVRAM_EF_UL1_DPD_CTRL_DATA_TOTAL
     {

   };
/********************************************************************************************
* LID_NAME
*   NVRAM_EF_UL1_DPD_CTRL_DATA_LOWBAND1_LID
* DESCRIPTION
*   WCDMA DPD control data
* INFOMATION
*   Can OTA Reset: Yes
*   Update Scenario: This LID will be updated in initial task.
*********************************************************************************************/   
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_UL1_DPD_CTRL_DATA_LOWBAND1_LID)
     U_sDPD_COMMON_CTRL *NVRAM_EF_UL1_DPD_CTRL_DATA_TOTAL
     {

   };
/********************************************************************************************
* LID_NAME
*   NVRAM_EF_UL1_DPD_CTRL_DATA_LOWBAND2_LID
* DESCRIPTION
*   WCDMA DPD control data
* INFOMATION
*   Can OTA Reset: Yes
*   Update Scenario: This LID will be updated in initial task.
*********************************************************************************************/   
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_UL1_DPD_CTRL_DATA_LOWBAND2_LID)
     U_sDPD_COMMON_CTRL *NVRAM_EF_UL1_DPD_CTRL_DATA_TOTAL
     {

   };
/***************************************************************************************************
* LID_NAME
*       NVRAM_EF_UL1_DPD_CAL_DATA_HIGHBAND1_LID
*DESCRIPTION
*      WCDMA DPD calibration data.
*INFORMATION
*      Can OTA Reset: No
*      Update Scenario:The data in this LID will be updated task init and calibration.
****************************************************************************************************/    
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_UL1_DPD_CAL_DATA_HIGHBAND1_LID)
     U_sDPD_GROUP_CAL *NVRAM_EF_UL1_DPD_CAL_DATA_TOTAL
     {

   };
/***************************************************************************************************
* LID_NAME
*       NVRAM_EF_UL1_DPD_CAL_DATA_HIGHBAND2_LID
*DESCRIPTION
*      WCDMA DPD calibration data.
*INFORMATION
*      Can OTA Reset: No
*      Update Scenario:The data in this LID will be updated task init and calibration.
****************************************************************************************************/    
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_UL1_DPD_CAL_DATA_HIGHBAND2_LID)
     U_sDPD_GROUP_CAL *NVRAM_EF_UL1_DPD_CAL_DATA_TOTAL
     {

   };
/***************************************************************************************************
* LID_NAME
*       NVRAM_EF_UL1_DPD_CAL_DATA_HIGHBAND3_LID
*DESCRIPTION
*      WCDMA DPD calibration data.
*INFORMATION
*      Can OTA Reset: No
*      Update Scenario:The data in this LID will be updated task init and calibration.
****************************************************************************************************/    
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_UL1_DPD_CAL_DATA_HIGHBAND3_LID)
     U_sDPD_GROUP_CAL *NVRAM_EF_UL1_DPD_CAL_DATA_TOTAL
     {

   };
/***************************************************************************************************
* LID_NAME
*       NVRAM_EF_UL1_DPD_CAL_DATA_LOWBAND1_LID
*DESCRIPTION
*      WCDMA DPD calibration data.
*INFORMATION
*      Can OTA Reset: No
*      Update Scenario:The data in this LID will be updated task init and calibration.
****************************************************************************************************/    
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_UL1_DPD_CAL_DATA_LOWBAND1_LID)
     U_sDPD_GROUP_CAL *NVRAM_EF_UL1_DPD_CAL_DATA_TOTAL
     {


   };
/***************************************************************************************************
* LID_NAME
*       NVRAM_EF_UL1_DPD_CAL_DATA_LOWBAND2_LID
*DESCRIPTION
*      WCDMA DPD calibration data.
*INFORMATION
*      Can OTA Reset: No
*      Update Scenario:The data in this LID will be updated task init and calibration.
****************************************************************************************************/    
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_UL1_DPD_CAL_DATA_LOWBAND2_LID)
     U_sDPD_GROUP_CAL *NVRAM_EF_UL1_DPD_CAL_DATA_TOTAL
     {

   };
/********************************************************************************************
* LID_NAME
*      NVRAM_EF_UL1_DPD_PARAMETER_LID
* DESCRIPTION
*      WCDMA DPD parameters setting and debug usage.
* INFORMATION
*      Can OTA Reset: No
*      Update Scenario: 1.This LID will update during task init.
*                       2.Must do calibration again after modifying this setting.
*                       3.Not recommend modifying.
*********************************************************************************************/   
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_UL1_DPD_PARAMETER_LID)
     U_sUl1dDpdCustomInputData *NVRAM_EF_UL1_DPD_PARAMETER_TOTAL
     {

   };
#if (IS_3G_MIPI_SUPPORT)
/********************************************************************************************
* LID_NAME
*      NVRAM_EF_UL1_MIPI_DPD_TPC_HIGHBAND1_LID
* DESCRIPTION
*      shows the DPD MIPI PA TPC actual setting by band
* INFORMATION
*      Can OTA Reset: Yes
*      Update Scenario: 1.This LID will update during task init.
*                       2.Must do calibration again after modifying this setting.
*                       3.Not recommend modifying.
*********************************************************************************************/
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_UL1_MIPI_DPD_TPC_HIGHBAND1_LID)
     ul1mipi_tpcData_T *NVRAM_EF_UL1_MIPI_DPD_TPC_BAND_TOTAL
     {
     
     };
/********************************************************************************************
* LID_NAME
*      NVRAM_EF_UL1_MIPI_DPD_TPC_HIGHBAND2_LID
* DESCRIPTION
*      shows the DPD MIPI PA TPC actual setting by band
* INFORMATION
*      Can OTA Reset: Yes
*      Update Scenario: 1.This LID will update during task init.
*                       2.Must do calibration again after modifying this setting.
*                       3.Not recommend modifying.
*********************************************************************************************/
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_UL1_MIPI_DPD_TPC_HIGHBAND2_LID)
     ul1mipi_tpcData_T *NVRAM_EF_UL1_MIPI_DPD_TPC_BAND_TOTAL
     {
     
     };
/********************************************************************************************
* LID_NAME
*      NVRAM_EF_UL1_MIPI_DPD_TPC_HIGHBAND3_LID
* DESCRIPTION
*      shows the DPD MIPI PA TPC actual setting by band
* INFORMATION
*      Can OTA Reset: Yes
*      Update Scenario: 1.This LID will update during task init.
*                       2.Must do calibration again after modifying this setting.
*                       3.Not recommend modifying.
*********************************************************************************************/
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_UL1_MIPI_DPD_TPC_HIGHBAND3_LID)
     ul1mipi_tpcData_T *NVRAM_EF_UL1_MIPI_DPD_TPC_BAND_TOTAL
     {
     
     };
/********************************************************************************************
* LID_NAME
*      NVRAM_EF_UL1_MIPI_DPD_TPC_LOWBAND1_LID
* DESCRIPTION
*      shows the DPD MIPI PA TPC actual setting by band
* INFORMATION
*      Can OTA Reset: Yes
*      Update Scenario: 1.This LID will update during task init.
*                       2.Must do calibration again after modifying this setting.
*                       3.Not recommend modifying.
*********************************************************************************************/
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_UL1_MIPI_DPD_TPC_LOWBAND1_LID)
     ul1mipi_tpcData_T *NVRAM_EF_UL1_MIPI_DPD_TPC_BAND_TOTAL
     {
     
     };
/********************************************************************************************
* LID_NAME
*      NVRAM_EF_UL1_MIPI_DPD_TPC_LOWBAND2_LID
* DESCRIPTION
*      shows the DPD MIPI PA TPC actual setting by band
* INFORMATION
*      Can OTA Reset: Yes
*      Update Scenario: 1.This LID will update during task init.
*                       2.Must do calibration again after modifying this setting.
*                       3.Not recommend modifying.
*********************************************************************************************/
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_UL1_MIPI_DPD_TPC_LOWBAND2_LID)
     ul1mipi_tpcData_T *NVRAM_EF_UL1_MIPI_DPD_TPC_BAND_TOTAL
     {
     
     };
#endif

END_NVRAM_DATA

#endif  /* GEN_FOR_PC */

#ifdef __cplusplus
}
#endif 

#endif  /* __MTK_UL1_FDD__ */
#endif  /* !NVRAM_NOT_PRESENT */
#endif  /* __UL1_NVRAM_EDITOR_H__ */
