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
 *
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/
#ifndef __TD_NVRAM_EDITOR_H__
#define __TD_NVRAM_EDITOR_H__


#ifndef NVRAM_NOT_PRESENT
#ifdef __cplusplus
extern "C"
{
#endif /* __cplusplus */ 

#include "td_nvram_def.h"

// Data Structure of Each LID
#ifdef __AST_TL1_TDD__
typedef struct
{
	kal_uint16 TL1_DRDI_STATUS;
}nvram_ast_tl1_dynamic_init_struct;

typedef struct
{
	Tl1CustomDynamicInitDebug custom_dynamic_init_debug_info;
}nvram_ast_tl1_dynamic_init_debug_struct;
#endif

#ifdef GEN_FOR_PC
BEGIN_NVRAM_DATA

#ifdef __AST_TL1_TDD__
/********************************************************************************************
* LID_NAME
*      NVRAM_EF_AST_TL1_TEMP_DAC_LID
* DESCRIPTION
*      RF temperature information configuration, can be customized.
* INFOMATION
*      Can OTA Reset: No
*      Update Scenario: This LID will update once during task init.
*********************************************************************************************/
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_AST_TL1_TEMP_DAC_LID)
     ast_tl1cal_tempdacData_T *NVRAM_EF_AST_TL1_TEMP_DAC_TOTAL
     {
   };
   
/********************************************************************************************
* LID_NAME
*      NVRAM_EF_AST_TL1_AFC_DATA_LID
* DESCRIPTION
*      Calibration data of TDSCDMA AFC for compensating frequency offset.
* INFOMATION
*      Can OTA Reset: No
*      Update Scenario: This LID will update once during task init.
*********************************************************************************************/
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_AST_TL1_AFC_DATA_LID)
     ast_tl1cal_afcData_T *NVRAM_EF_AST_TL1_AFC_DATA_TOTAL
     {
   };

/********************************************************************************************
* LID_NAME
*      NVRAM_EF_AST_TL1_PATHLOSS_BAND33_35_37_39_LID
* DESCRIPTION
*      Rx LNA High/Middle/Low mode pathloss vs. frequency & temperature.
* INFOMATION
*      Can OTA Reset: No
*      Update Scenario: This LID will update once during task init.
*********************************************************************************************/
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_AST_TL1_PATHLOSS_BAND33_35_37_39_LID)
     ast_tl1cal_pathlossData_T *NVRAM_EF_AST_TL1_PATHLOSS_BAND_TOTAL
     {
   };
   
/********************************************************************************************
* LID_NAME
*      NVRAM_EF_AST_TL1_PATHLOSS_BAND34_LID
* DESCRIPTION
*      Rx LNA High/Middle/Low mode pathloss vs. frequency & temperature.
* INFOMATION
*      Can OTA Reset: No
*      Update Scenario: This LID will update once during task init.
*********************************************************************************************/
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_AST_TL1_PATHLOSS_BAND34_LID)
     ast_tl1cal_pathlossData_T *NVRAM_EF_AST_TL1_PATHLOSS_BAND_TOTAL
     {
   };
   
/********************************************************************************************
* LID_NAME
*      NVRAM_EF_AST_TL1_PATHLOSS_BAND36_LID
* DESCRIPTION
*      Rx LNA High/Middle/Low mode pathloss vs. frequency & temperature.
* INFOMATION
*      Can OTA Reset: No
*      Update Scenario: This LID will update once during task init.
*********************************************************************************************/
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_AST_TL1_PATHLOSS_BAND36_LID)
     ast_tl1cal_pathlossData_T *NVRAM_EF_AST_TL1_PATHLOSS_BAND_TOTAL
     {
   };
   
/********************************************************************************************
* LID_NAME
*      NVRAM_EF_AST_TL1_PATHLOSS_BAND38_LID
* DESCRIPTION
*      Rx LNA High/Middle/Low mode pathloss vs. frequency & temperature.
* INFOMATION
*      Can OTA Reset: No
*      Update Scenario: This LID will update once during task init.
*********************************************************************************************/
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_AST_TL1_PATHLOSS_BAND38_LID)
     ast_tl1cal_pathlossData_T *NVRAM_EF_AST_TL1_PATHLOSS_BAND_TOTAL
     {
   };
   
/********************************************************************************************
* LID_NAME
*      NVRAM_EF_AST_TL1_PATHLOSS_BAND40_LID
* DESCRIPTION
*      Rx LNA High/Middle/Low mode pathloss vs. frequency & temperature.
* INFOMATION
*      Can OTA Reset: No
*      Update Scenario: This LID will update once during task init.
*********************************************************************************************/
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_AST_TL1_PATHLOSS_BAND40_LID)
     ast_tl1cal_pathlossData_T *NVRAM_EF_AST_TL1_PATHLOSS_BAND_TOTAL
     {
   };
   
/********************************************************************************************
* LID_NAME
*      NVRAM_EF_AST_TL1_TXDAC_BAND33_35_37_39_LID
* DESCRIPTION
*      Calibration data of txdac value, can be customized.
* INFOMATION
*      Can OTA Reset: No
*      Update Scenario: This LID will update once during task init.
*********************************************************************************************/
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_AST_TL1_TXDAC_BAND33_35_37_39_LID)
     ast_tl1cal_txdacData_T *NVRAM_EF_AST_TL1_TXDAC_BAND_TOTAL
     {
   };
   
/********************************************************************************************
* LID_NAME
*      NVRAM_EF_AST_TL1_TXDAC_BAND34_LID
* DESCRIPTION
*      Calibration data of txdac value, can be customized..
* INFOMATION
*      Can OTA Reset: No
*      Update Scenario: This LID will update once during task init.
*********************************************************************************************/
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_AST_TL1_TXDAC_BAND34_LID)
     ast_tl1cal_txdacData_T *NVRAM_EF_AST_TL1_TXDAC_BAND_TOTAL
     {

   };
   
/********************************************************************************************
* LID_NAME
*      NVRAM_EF_AST_TL1_TXDAC_BAND36_LID
* DESCRIPTION
*      Calibration data of txdac value, can be customized..
* INFOMATION
*      Can OTA Reset: No
*      Update Scenario: This LID will update once during task init.
*********************************************************************************************/
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_AST_TL1_TXDAC_BAND36_LID)
     ast_tl1cal_txdacData_T *NVRAM_EF_AST_TL1_TXDAC_BAND_TOTAL
     {

   };
   
/********************************************************************************************
* LID_NAME
*      NVRAM_EF_AST_TL1_TXDAC_BAND38_LID
* DESCRIPTION
*      Calibration data of txdac value, can be customized..
* INFOMATION
*      Can OTA Reset: No
*      Update Scenario: This LID will update once during task init.
*********************************************************************************************/
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_AST_TL1_TXDAC_BAND38_LID)
     ast_tl1cal_txdacData_T *NVRAM_EF_AST_TL1_TXDAC_BAND_TOTAL
     {

   };
   
/********************************************************************************************
* LID_NAME
*      NVRAM_EF_AST_TL1_TXDAC_BAND40_LID
* DESCRIPTION
*      Calibration data of txdac value, can be customized..
* INFOMATION
*      Can OTA Reset: No
*      Update Scenario: This LID will update once during task init.
*********************************************************************************************/
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_AST_TL1_TXDAC_BAND40_LID)
     ast_tl1cal_txdacData_T *NVRAM_EF_AST_TL1_TXDAC_BAND_TOTAL
     {

   };
   
/********************************************************************************************
* LID_NAME
*      NVRAM_EF_AST_TL1_ABB_CAL_LID
* DESCRIPTION
*      Calibration data of abb mixsys, can be customized.
* INFOMATION
*      Can OTA Reset: No
*      Update Scenario: This LID will update once during task init.
*********************************************************************************************/
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_AST_TL1_ABB_CAL_LID)
     ast_tl1cal_abbData_T *NVRAM_EF_AST_TL1_ABB_CAL_TOTAL
     {

   };
   
/********************************************************************************************
* LID_NAME
*      NVRAM_EF_AST_TL1_TXCLPC_BAND34_LID
* DESCRIPTION
*      Calibration data of power detector, can be customized.
* INFOMATION
*      Can OTA Reset: No
*      Update Scenario: This LID will update once during task init.
*********************************************************************************************/
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_AST_TL1_TXCLPC_BAND34_LID)
     ast_tl1cal_txPdData_T *NVRAM_EF_AST_TL1_TXCLPC_BAND_TOTAL
     {
   };
   
/********************************************************************************************
* LID_NAME
*      NVRAM_EF_AST_TL1_TXCLPC_BAND33_35_37_39_LID
* DESCRIPTION
*      Calibration data of power detector, can be customized.
* INFOMATION
*      Can OTA Reset: No
*      Update Scenario: This LID will update once during task init.
*********************************************************************************************/
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_AST_TL1_TXCLPC_BAND33_35_37_39_LID)
     ast_tl1cal_txPdData_T *NVRAM_EF_AST_TL1_TXCLPC_BAND_TOTAL
     {
   };
   
/********************************************************************************************
* LID_NAME
*      NVRAM_EF_AST_TL1_TXCLPC_BAND36_LID
* DESCRIPTION
*      Calibration data of power detector, can be customized.
* INFOMATION
*      Can OTA Reset: No
*      Update Scenario: This LID will update once during task init.
*********************************************************************************************/
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_AST_TL1_TXCLPC_BAND36_LID)
     ast_tl1cal_txPdData_T *NVRAM_EF_AST_TL1_TXCLPC_BAND_TOTAL
     {
   };
   
/********************************************************************************************
* LID_NAME
*      NVRAM_EF_AST_TL1_TXCLPC_BAND38_LID
* DESCRIPTION
*      Calibration data of power detector, can be customized.
* INFOMATION
*      Can OTA Reset: No
*      Update Scenario: This LID will update once during task init.
*********************************************************************************************/
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_AST_TL1_TXCLPC_BAND38_LID)
     ast_tl1cal_txPdData_T *NVRAM_EF_AST_TL1_TXCLPC_BAND_TOTAL
     {
   };
   
/********************************************************************************************
* LID_NAME
*      NVRAM_EF_AST_TL1_TXCLPC_BAND40_LID
* DESCRIPTION
*      Calibration data of power detector, can be customized.
* INFOMATION
*      Can OTA Reset: No
*      Update Scenario: This LID will update once during task init.
*********************************************************************************************/
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_AST_TL1_TXCLPC_BAND40_LID)
     ast_tl1cal_txPdData_T *NVRAM_EF_AST_TL1_TXCLPC_BAND_TOTAL
     {
   };
   
/********************************************************************************************
* LID_NAME
*      NVRAM_EF_AST_CUSTOM_DYNAMIC_INIT_LID
* DESCRIPTION
*      DRDI status.
* INFOMATION
*      Can OTA Reset: Yes
*      Update Scenario: This LID will update once during task init.
*********************************************************************************************/
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_AST_CUSTOM_DYNAMIC_INIT_LID)
     nvram_ast_tl1_dynamic_init_struct *NVRAM_EF_AST_CUSTOM_DYNAMIC_INIT_TOTAL
     {
   };
   
/********************************************************************************************
* LID_NAME
*      NVRAM_EF_AST_CUSTOM_DYNAMIC_INIT_DEBUG_LID
* DESCRIPTION
*      Internal typedef used by TL1CUSTOM GPIO detection HW setting mechanism.
* INFOMATION
*      Can OTA Reset: Yes
*      Update Scenario: This LID will update once during task init.
*********************************************************************************************/
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_AST_CUSTOM_DYNAMIC_INIT_DEBUG_LID)
     nvram_ast_tl1_dynamic_init_debug_struct *NVRAM_EF_AST_CUSTOM_DYNAMIC_INIT_DEBUG_TOTAL
     {
   };
   
/********************************************************************************************
* LID_NAME
*      NVRAM_EF_AST_TL1_RF_TIMESEQ_LID
* DESCRIPTION
*      RF timing info configuration, can be customized.
* INFOMATION
*      Can OTA Reset: Yes
*      Update Scenario: This LID will update once during task init.
*********************************************************************************************/
LID_BIT VER_LID(NVRAM_EF_AST_TL1_RF_TIMESEQ_LID)
     T_RF_PROG_SEQ_STRUCT *NVRAM_EF_AST_TL1_RF_TIMESEQ_TOTAL
     {
   };

/********************************************************************************************
* LID_NAME
*      NVRAM_EF_AST_TL1_RF_PARAM_LID
* DESCRIPTION
*      RF parameter configuration, can be customized .
* INFOMATION
*      Can OTA Reset: Yes
*      Update Scenario: This LID will update once during task init.
*********************************************************************************************/
LID_BIT VER_LID(NVRAM_EF_AST_TL1_RF_PARAM_LID)
     T_TD_CUSTOMIZATION_STRUCT *NVRAM_EF_AST_TL1_RF_PARAM_TOTAL
     {
   };

/********************************************************************************************
* LID_NAME
*      NVRAM_EF_AST_TL1_RFFE_PARAM_LID
* DESCRIPTION
*      RF front end configuration, can be customized.
* INFOMATION
*      Can OTA Reset: Yes
*      Update Scenario: This LID will update once during task init.
*********************************************************************************************/
LID_BIT VER_LID(NVRAM_EF_AST_TL1_RFFE_PARAM_LID)
     T_MIPI_CUSTOMIZATION_STRUCT *NVRAM_EF_AST_TL1_RFFE_PARAM_TOTAL
     {
   };

/********************************************************************************************
* LID_NAME
*      NVRAM_EF_AST_TL1_DAT_PARAM_LID
* DESCRIPTION
*      DAT configuration, can be customized.
* INFOMATION
*      Can OTA Reset: Yes
*      Update Scenario: This LID will update once during task init.
*********************************************************************************************/
LID_BIT VER_LID(NVRAM_EF_AST_TL1_DAT_PARAM_LID)
     T_TD_CUSTOMIZATION_DAT_STRUCT *NVRAM_EF_AST_TL1_DAT_PARAM_TOTAL
     {
   };

/********************************************************************************************
* LID_NAME
*      NVRAM_EF_AST_TL1_POC_PARAM_LID
* DESCRIPTION
*      Calibration data of power on calibration, cannot be customized .
* INFOMATION
*      Can OTA Reset: No
*      Update Scenario: This LID will update once during task init.
*********************************************************************************************/
LID_BIT VER_LID(NVRAM_EF_AST_TL1_POC_PARAM_LID)
     TDS_RF_POC_COMP_T *NVRAM_EF_AST_TL1_POC_PARAM_TOTAL
     {
   };
#ifdef __TAS_SUPPORT__ 
//maybe need add more tas item ting.xu

/********************************************************************************************
* LID_NAME
*      NVRAM_EF_AST_TL1_TAS_CUSTOM_PARAMES_LID
* DESCRIPTION
*      Calibration data of TAS in value, can be customized.
* INFOMATION
*      Can OTA Reset: Yes
*      Update Scenario: This LID will update once during task init.
*********************************************************************************************/
LID_BIT VER_LID(NVRAM_EF_AST_TL1_TAS_CUSTOM_PARAMES_LID)
     T_TD_CUSTOMIZATION_TAS_STRUCT *NVRAM_EF_AST_TL1_TAS_CUSTOM_PARAMES_TOTAL
     {
  	
   };
#endif

/********************************************************************************************
* LID_NAME
*      NVRAM_EF_AST_TL1_CAP_DATA_LID
* DESCRIPTION
*      Calibration data of cap in value, can be customized. It will use default value configured in the NVRAM and CAP ID will be corrected when doing RF calibration. Usually this value will be updated based on frequency offset observed during RF calibration
* INFOMATION
*      Can OTA Reset: No
*      Update Scenario: This LID will update once during task init.
*********************************************************************************************/
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_AST_TL1_CAP_DATA_LID)
     ast_tl1cal_capData_T *NVRAM_EF_AST_TL1_CAP_DATA_TOTAL
     {
   };
#endif // __AST_TL1_TDD__


END_NVRAM_DATA
#endif	/*GEN FOR PC*/

#ifdef __cplusplus
}
#endif 

#endif  /* !NVRAM_NOT_PRESENT */
#endif  /* __TD_NVRAM_EDITOR_H__ */
