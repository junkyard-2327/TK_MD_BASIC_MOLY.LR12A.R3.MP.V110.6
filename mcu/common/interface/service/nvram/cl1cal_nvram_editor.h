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
#ifndef __CL1CAL_NVRAM_EDITOR_H__
#define __CL1CAL_NVRAM_EDITOR_H__

#ifndef NVRAM_NOT_PRESENT
#if defined (__C2K_RAT__)
#ifdef __cplusplus
extern "C"
{
#endif /* __cplusplus */ 



#ifdef GEN_FOR_PC
#include "cl1cal_nvram_def.h"


BEGIN_NVRAM_DATA

//add LID_BIT VER_LID here
/***********************************************************************************
* LID_NAME
*	NVRAM_EF_CL1CAL_AFC_DATA_LID
* DESCRIPTION
*	This is Calibration Data of C2K AFC DAC.
* INFORMATION
*	Can OTA Reset: No
*	Update Scenario: 
*				1.This LID will update during task init.   
*				2.This LID will update after calibration.  
*
************************************************************************************/
LID_BIT VER_LID(NVRAM_EF_CL1CAL_AFC_DATA_LID)
CL1D_RF_AFC_DATA_T * NVRAM_EF_CL1CAL_AFC_DATA_TOTAL
{
};


/***********************************************************************************
* LID_NAME
*	NVRAM_EF_CL1CAL_TX_APT_PA_CONTEXT_1XRTT_LID
* DESCRIPTION
*	This is C2K RF TX APT PA context  in 1xRTT.
* INFORMATION
*	Can OTA Reset: No
*	Update Scenario: 
*				1.This LID will update during task init.                 
*				2.Must do calibration again after modifying this setting.
*				3.Not recommend modifying.                               
************************************************************************************/
LID_BIT VER_LID(NVRAM_EF_CL1CAL_TX_APT_PA_CONTEXT_1XRTT_LID)
CL1D_RF_TX_APT_PA_CONTEXT_T * NVRAM_EF_CL1CAL_TX_APT_PA_CONTEXT_1XRTT_TOTAL
{
};


/***********************************************************************************
* LID_NAME
*	NVRAM_EF_CL1CAL_TX_APT_PA_CONTEXT_EVDO_LID
* DESCRIPTION
*	This is C2K RF TX APT PA Gain context in EVDO.
* INFORMATION
*	Can OTA Reset: No
*	Update Scenario: 
*				1.This LID will update during task init.                 
*				2.Must do calibration again after modifying this setting.
*				3.Not recommend modifying.    
************************************************************************************/
LID_BIT VER_LID(NVRAM_EF_CL1CAL_TX_APT_PA_CONTEXT_EVDO_LID)
CL1D_RF_TX_APT_PA_CONTEXT_T * NVRAM_EF_CL1CAL_TX_APT_PA_CONTEXT_EVDO_TOTAL
{
};


/***********************************************************************************
* LID_NAME
*	NVRAM_EF_CL1CAL_TX_DPD_PA_CONTEXT_1XRTT_LID
* DESCRIPTION
*	This is C2K RF TX DPD PA Gain context in 1xRTT.
* INFORMATION
*	Can OTA Reset: No
*	Update Scenario: 
*				1.This LID will update during task init.                 
*				2.Must do calibration again after modifying this setting.
*				3.Not recommend modifying. 
************************************************************************************/

LID_BIT VER_LID(NVRAM_EF_CL1CAL_TX_DPD_PA_CONTEXT_1XRTT_LID)
CL1D_RF_TX_DPD_PA_CONTEXT_T * NVRAM_EF_CL1CAL_TX_DPD_PA_CONTEXT_1XRTT_TOTAL
{
};


/***********************************************************************************
* LID_NAME
*	NVRAM_EF_CL1CAL_TX_DPD_PA_CONTEXT_EVDO_LID
* DESCRIPTION
*	This is C2K RF TX DPD PA Gain context in EVDO.
* INFORMATION
*	Can OTA Reset: No
*	Update Scenario: 
*				1.This LID will update during task init.                 
*				2.Must do calibration again after modifying this setting.
*				3.Not recommend modifying. 
************************************************************************************/

LID_BIT VER_LID(NVRAM_EF_CL1CAL_TX_DPD_PA_CONTEXT_EVDO_LID)
CL1D_RF_TX_DPD_PA_CONTEXT_T * NVRAM_EF_CL1CAL_TX_DPD_PA_CONTEXT_EVDO_TOTAL
{
};


/***********************************************************************************
* LID_NAME
*	NVRAM_EF_CL1CAL_TX_APT_PA_GAIN_COMP_1XRTT_LID
* DESCRIPTION
*	This is C2K RF TX APT PA Gain compensation in 1xRTT.
* INFORMATION
*	Can OTA Reset: No
*	Update Scenario: 
*				1.This LID will update during task init.                 
*				2.Must do calibration again after modifying this setting.
*				3.Not recommend modifying. 
************************************************************************************/

LID_BIT VER_LID(NVRAM_EF_CL1CAL_TX_APT_PA_GAIN_COMP_1XRTT_LID)
CL1D_RF_TX_APT_PA_GAIN_COMP_T * NVRAM_EF_CL1CAL_TX_APT_PA_GAIN_COMP_1XRTT_TOTAL
{
};


/***********************************************************************************
* LID_NAME
*	NVRAM_EF_CL1CAL_TX_APT_PA_GAIN_COMP_EVDO_LID
* DESCRIPTION
*	This is C2K RF TX APT PA Gain compensation in EVDO.
* INFORMATION
*	Can OTA Reset: No
*	Update Scenario: 
*				1.This LID will update during task init.                 
*				2.Must do calibration again after modifying this setting.
*				3.Not recommend modifying. 
************************************************************************************/

LID_BIT VER_LID(NVRAM_EF_CL1CAL_TX_APT_PA_GAIN_COMP_EVDO_LID)
CL1D_RF_TX_APT_PA_GAIN_COMP_T * NVRAM_EF_CL1CAL_TX_APT_PA_GAIN_COMP_EVDO_TOTAL
{
};


/***********************************************************************************
* LID_NAME
*	NVRAM_EF_CL1CAL_TX_DPD_PA_GAIN_COMP_1XRTT_LID
* DESCRIPTION
*	This is C2K RF TX DPD PA Gain compensation in EVDO.
* INFORMATION
*	Can OTA Reset: No
*	Update Scenario: 
*				1.This LID will update during task init.                 
*				2.Must do calibration again after modifying this setting.
*				3.Not recommend modifying. 
************************************************************************************/

LID_BIT VER_LID(NVRAM_EF_CL1CAL_TX_DPD_PA_GAIN_COMP_1XRTT_LID)
CL1D_RF_TX_DPD_PA_GAIN_COMP_T * NVRAM_EF_CL1CAL_TX_DPD_PA_GAIN_COMP_1XRTT_TOTAL
{
};


/***********************************************************************************
* LID_NAME
*	NVRAM_EF_CL1CAL_TX_DPD_PA_GAIN_COMP_EVDO_LID
* DESCRIPTION
*	This is C2K RF TX DPD PA Gain compensation in EVDO.
* INFORMATION
*	Can OTA Reset: No
*	Update Scenario: 
*				1.This LID will update during task init.                 
*				2.Must do calibration again after modifying this setting.
*				3.Not recommend modifying. 
************************************************************************************/

LID_BIT VER_LID(NVRAM_EF_CL1CAL_TX_DPD_PA_GAIN_COMP_EVDO_LID)
CL1D_RF_TX_DPD_PA_GAIN_COMP_T * NVRAM_EF_CL1CAL_TX_DPD_PA_GAIN_COMP_EVDO_TOTAL
{
};


/***********************************************************************************
* LID_NAME
*	NVRAM_EF_CL1CAL_DET_COUPLE_LOSS_1XRTT_LID
* DESCRIPTION
*	This is C2K RF TX Det Couple Loss in 1xRTT.
* INFORMATION
*	Can OTA Reset: No
*	Update Scenario: 
*				1.This LID will update during task init.                 
*				2.Must do calibration again after modifying this setting.
*				3.Not recommend modifying. 
************************************************************************************/

LID_BIT VER_LID(NVRAM_EF_CL1CAL_DET_COUPLE_LOSS_1XRTT_LID)
CL1D_RF_DET_COUPLE_LOSS_T * NVRAM_EF_CL1CAL_DET_COUPLE_LOSS_1XRTT_TOTAL
{
};


/***********************************************************************************
* LID_NAME
*	NVRAM_EF_CL1CAL_DET_COUPLE_LOSS_EVDO_LID
* DESCRIPTION
*	This is C2K RF TX Det Couple Loss in EVDO.
* INFORMATION
*	Can OTA Reset: No
*	Update Scenario: 
*				1.This LID will update during task init.                 
*				2.Must do calibration again after modifying this setting.
*				3.Not recommend modifying.
************************************************************************************/

LID_BIT VER_LID(NVRAM_EF_CL1CAL_DET_COUPLE_LOSS_EVDO_LID)
CL1D_RF_DET_COUPLE_LOSS_T * NVRAM_EF_CL1CAL_DET_COUPLE_LOSS_EVDO_TOTAL
{
};


/***********************************************************************************
* LID_NAME
*	NVRAM_EF_CL1CAL_DET_COUPLE_LOSS_COMP_1XRTT_LID
* DESCRIPTION
*	This is C2K RF TX Det Couple Loss  Compensation in 1xRTT.
* INFORMATION
*	Can OTA Reset: No
*	Update Scenario: 
*				1.This LID will update during task init.                 
*				2.Must do calibration again after modifying this setting.
*				3.Not recommend modifying.
************************************************************************************/

LID_BIT VER_LID(NVRAM_EF_CL1CAL_DET_COUPLE_LOSS_COMP_1XRTT_LID)
CL1D_RF_DET_COUPLE_LOSS_COMP_T * NVRAM_EF_CL1CAL_DET_COUPLE_LOSS_COMP_1XRTT_TOTAL
{
};


/***********************************************************************************
* LID_NAME
*	NVRAM_EF_CL1CAL_DET_COUPLE_LOSS_COMP_EVDO_LID
* DESCRIPTION
*	This is C2K RF TX Det Couple Loss  Compensation in EVDO.
* INFORMATION
*	Can OTA Reset: No
*	Update Scenario: 
*				1.This LID will update during task init.                 
*				2.Must do calibration again after modifying this setting.
*				3.Not recommend modifying. 
************************************************************************************/

LID_BIT VER_LID(NVRAM_EF_CL1CAL_DET_COUPLE_LOSS_COMP_EVDO_LID)
CL1D_RF_DET_COUPLE_LOSS_COMP_T * NVRAM_EF_CL1CAL_DET_COUPLE_LOSS_COMP_EVDO_TOTAL
{
};


/***********************************************************************************
* LID_NAME
*	NVRAM_EF_CL1CAL_MAIN_RX_PATH_LOSS_HPM_LID
* DESCRIPTION
*	This is C2K RF RX Main Path Loss  in HPM.
* INFORMATION
*	Can OTA Reset: No
*	Update Scenario: 
*				1.This LID will update during task init.                 
*				2.Must do calibration again after modifying this setting.
*				3.Not recommend modifying. 
************************************************************************************/

LID_BIT VER_LID(NVRAM_EF_CL1CAL_MAIN_RX_PATH_LOSS_HPM_LID)
CL1D_RF_RX_PATH_LOSS_COMP_T * NVRAM_EF_CL1CAL_MAIN_RX_PATH_LOSS_HPM_TOTAL
{
};


/***********************************************************************************
* LID_NAME
*	NVRAM_EF_CL1CAL_MAIN_RX_PATH_LOSS_LPM_LID
* DESCRIPTION
*	This is C2K RF RX Main Path Loss  in LPM.
* INFORMATION
*	Can OTA Reset: No
*	Update Scenario: 
*				1.This LID will update during task init.                 
*				2.Must do calibration again after modifying this setting.
*				3.Not recommend modifying. 
************************************************************************************/

LID_BIT VER_LID(NVRAM_EF_CL1CAL_MAIN_RX_PATH_LOSS_LPM_LID)
CL1D_RF_RX_PATH_LOSS_COMP_T * NVRAM_EF_CL1CAL_MAIN_RX_PATH_LOSS_LPM_TOTAL
{
};


/***********************************************************************************
* LID_NAME
*	NVRAM_EF_CL1CAL_DIV_RX_PATH_LOSS_HPM_LID
* DESCRIPTION
*	This is C2K RF RX Div Path Loss  in HPM.
* INFORMATION
*	Can OTA Reset: No
*	Update Scenario:
*				1.This LID will update during task init.                 
*				2.Must do calibration again after modifying this setting.
*				3.Not recommend modifying. 
************************************************************************************/

LID_BIT VER_LID(NVRAM_EF_CL1CAL_DIV_RX_PATH_LOSS_HPM_LID)
CL1D_RF_RX_PATH_LOSS_COMP_T * NVRAM_EF_CL1CAL_DIV_RX_PATH_LOSS_HPM_TOTAL
{
};


/***********************************************************************************
* LID_NAME
*	NVRAM_EF_CL1CAL_DIV_RX_PATH_LOSS_LPM_LID
* DESCRIPTION
*	This is C2K RF RX Div Path Loss  in LPM.
* INFORMATION
*	Can OTA Reset: No
*	Update Scenario:
*				1.This LID will update during task init.                 
*				2.Must do calibration again after modifying this setting.
*				3.Not recommend modifying. 
************************************************************************************/

LID_BIT VER_LID(NVRAM_EF_CL1CAL_DIV_RX_PATH_LOSS_LPM_LID)
CL1D_RF_RX_PATH_LOSS_COMP_T * NVRAM_EF_CL1CAL_DIV_RX_PATH_LOSS_LPM_TOTAL
{
};


/***********************************************************************************
* LID_NAME
*	NVRAM_EF_CL1CAL_SHDR_RX_PATH_LOSS_HPM_LID
* DESCRIPTION
*	This is C2K RF RX SHDR Path Loss  in HPM.
* INFORMATION
*	Can OTA Reset: No
*	Update Scenario:
*				1.This LID will update during task init.                 
*				2.Must do calibration again after modifying this setting.
*				3.Not recommend modifying. 
************************************************************************************/

LID_BIT VER_LID(NVRAM_EF_CL1CAL_SHDR_RX_PATH_LOSS_HPM_LID)
CL1D_RF_RX_PATH_LOSS_COMP_T * NVRAM_EF_CL1CAL_SHDR_RX_PATH_LOSS_HPM_TOTAL
{
};


/***********************************************************************************
* LID_NAME
*	NVRAM_EF_CL1CAL_SHDR_RX_PATH_LOSS_LPM_LID
* DESCRIPTION
*	This is C2K RF RX SHDR Path Loss  in LPM.
* INFORMATION
*	Can OTA Reset: No
*	Update Scenario: 
*				1.This LID will update during task init.                 
*				2.Must do calibration again after modifying this setting.
*				3.Not recommend modifying.
************************************************************************************/

LID_BIT VER_LID(NVRAM_EF_CL1CAL_SHDR_RX_PATH_LOSS_LPM_LID)
CL1D_RF_RX_PATH_LOSS_COMP_T * NVRAM_EF_CL1CAL_SHDR_RX_PATH_LOSS_LPM_TOTAL
{
};


/***********************************************************************************
* LID_NAME
*	NVRAM_EF_CL1CAL_AGPS_GROUP_DELAY_LID
* DESCRIPTION
*	This is AGPS Group Delay  LID.
* INFORMATION
*	Can OTA Reset: No
*	Update Scenario: 
*				1.This LID will update during task init.                 
*				2.Must do calibration again after modifying this setting.
*				3.Not recommend modifying. 
************************************************************************************/

LID_BIT VER_LID(NVRAM_EF_CL1CAL_AGPS_GROUP_DELAY_LID)
CL1D_RF_AGPS_GROUP_DELAY_T * NVRAM_EF_CL1CAL_AGPS_GROUP_DELAY_TOTAL
{
};


/***********************************************************************************
* LID_NAME
*	NVRAM_EF_CL1CAL_POC_FINAL_LID
* DESCRIPTION
*	This is RF transceiver poc cal results LID.
* INFORMATION
*	Can OTA Reset: No
*	Update Scenario: 
*				1.This LID will update during task init.                 
*				2.Must do calibration again after modifying this setting.
*				3.Not recommend modifying. 
************************************************************************************/


LID_BIT VER_LID(NVRAM_EF_CL1CAL_POC_FINAL_LID)
CL1D_RF_POC_FINAL_T * NVRAM_EF_CL1CAL_POC_FINAL_TOTAL
{
};


/***********************************************************************************
* LID_NAME
*	NVRAM_EF_CL1CAL_TX_DPD_AM_PM_COMP_1XRTT_LID
* DESCRIPTION
*	This is C2K RF TX DPD AM PM LUT context in 1xRTT.
* INFORMATION
*	Can OTA Reset: No
*	Update Scenario: 
*				1.This LID will update during task init.                 
*				2.Must do calibration again after modifying this setting.
*				3.Not recommend modifying. 
************************************************************************************/

LID_BIT VER_LID(NVRAM_EF_CL1CAL_TX_DPD_AM_PM_COMP_1XRTT_LID)
CL1D_RF_TX_DPD_AM_PM_LUT_DATA_T * NVRAM_EF_CL1CAL_TX_DPD_AM_PM_COMP_1XRTT_TOTAL
{
};


/***********************************************************************************
* LID_NAME
*	NVRAM_EF_CL1CAL_TX_DPD_AM_PM_COMP_EVDO_LID
* DESCRIPTION
*	This is C2K RF TX DPD AM PM LUT context in EVDO.
* INFORMATION
*	Can OTA Reset: No
*	Update Scenario: 
*				1.This LID will update during task init.                 
*				2.Must do calibration again after modifying this setting.
*				3.Not recommend modifying. 
************************************************************************************/

LID_BIT VER_LID(NVRAM_EF_CL1CAL_TX_DPD_AM_PM_COMP_EVDO_LID)
CL1D_RF_TX_DPD_AM_PM_LUT_DATA_T * NVRAM_EF_CL1CAL_TX_DPD_AM_PM_COMP_EVDO_TOTAL
{
};





END_NVRAM_DATA
#endif	/*GEN FOR PC*/

#ifdef __cplusplus
}
#endif 
#endif /* __C2K_RAT__ */
#endif  /* !NVRAM_NOT_PRESENT */
#endif  /* __CL1CAL_NVRAM_EDITOR_H__ */
