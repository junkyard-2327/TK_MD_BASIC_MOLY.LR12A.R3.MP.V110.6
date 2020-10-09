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
 * cl1cal_nvram_def.h
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
 *
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
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/
#ifndef __CL1CAL_NVRAM_DEF_H__
#define __CL1CAL_NVRAM_DEF_H__

#if defined (__C2K_RAT__)

#ifdef __cplusplus
extern "C"
{
#endif /* __cplusplus */ 

#include "nvram_defs.h"
#include "nvram_enums.h"

// LID Enums

typedef enum
{
   NVRAM_EF_CL1CAL_AFC_DATA_LID                            = NVRAM_LID_GRP_CL1CAL(0),
   NVRAM_EF_CL1CAL_TX_APT_PA_CONTEXT_1XRTT_LID             = NVRAM_LID_GRP_CL1CAL(1),
   NVRAM_EF_CL1CAL_TX_APT_PA_CONTEXT_EVDO_LID              = NVRAM_LID_GRP_CL1CAL(2),
   NVRAM_EF_CL1CAL_TX_DPD_PA_CONTEXT_1XRTT_LID             = NVRAM_LID_GRP_CL1CAL(3),
   NVRAM_EF_CL1CAL_TX_DPD_PA_CONTEXT_EVDO_LID              = NVRAM_LID_GRP_CL1CAL(4),
   NVRAM_EF_CL1CAL_TX_APT_PA_GAIN_COMP_1XRTT_LID           = NVRAM_LID_GRP_CL1CAL(5),
   NVRAM_EF_CL1CAL_TX_APT_PA_GAIN_COMP_EVDO_LID            = NVRAM_LID_GRP_CL1CAL(6),
   NVRAM_EF_CL1CAL_TX_DPD_PA_GAIN_COMP_1XRTT_LID           = NVRAM_LID_GRP_CL1CAL(7),
   NVRAM_EF_CL1CAL_TX_DPD_PA_GAIN_COMP_EVDO_LID            = NVRAM_LID_GRP_CL1CAL(8),
   NVRAM_EF_CL1CAL_DET_COUPLE_LOSS_1XRTT_LID               = NVRAM_LID_GRP_CL1CAL(9),
   NVRAM_EF_CL1CAL_DET_COUPLE_LOSS_EVDO_LID                = NVRAM_LID_GRP_CL1CAL(10),
   NVRAM_EF_CL1CAL_DET_COUPLE_LOSS_COMP_1XRTT_LID          = NVRAM_LID_GRP_CL1CAL(11),
   NVRAM_EF_CL1CAL_DET_COUPLE_LOSS_COMP_EVDO_LID           = NVRAM_LID_GRP_CL1CAL(12),
   NVRAM_EF_CL1CAL_MAIN_RX_PATH_LOSS_HPM_LID          	   = NVRAM_LID_GRP_CL1CAL(13),
   NVRAM_EF_CL1CAL_MAIN_RX_PATH_LOSS_LPM_LID          	   = NVRAM_LID_GRP_CL1CAL(14),
   NVRAM_EF_CL1CAL_DIV_RX_PATH_LOSS_HPM_LID           	   = NVRAM_LID_GRP_CL1CAL(15),
   NVRAM_EF_CL1CAL_DIV_RX_PATH_LOSS_LPM_LID           	   = NVRAM_LID_GRP_CL1CAL(16),
   NVRAM_EF_CL1CAL_SHDR_RX_PATH_LOSS_HPM_LID          	   = NVRAM_LID_GRP_CL1CAL(17),
   NVRAM_EF_CL1CAL_SHDR_RX_PATH_LOSS_LPM_LID          	   = NVRAM_LID_GRP_CL1CAL(18),
   NVRAM_EF_CL1CAL_AGPS_GROUP_DELAY_LID                    = NVRAM_LID_GRP_CL1CAL(19),
   NVRAM_EF_CL1CAL_TX_POWER_BACK_OFF_LID                   = NVRAM_LID_GRP_CL1CAL(20),
   NVRAM_EF_CL1CAL_TX_POWER_OFFSET_LID                     = NVRAM_LID_GRP_CL1CAL(21),
   NVRAM_EF_CL1CAL_POC_FINAL_LID                           = NVRAM_LID_GRP_CL1CAL(22),
   
   NVRAM_EF_CL1CAL_TX_DPD_AM_PM_COMP_1XRTT_LID             = NVRAM_LID_GRP_CL1CAL(23),
   NVRAM_EF_CL1CAL_TX_DPD_AM_PM_COMP_EVDO_LID			   = NVRAM_LID_GRP_CL1CAL(24),
   
   
   /* WARNING: DO NOT modify the last LID */
   NVRAM_EF_CL1CAL_LAST_LID                                = NVRAM_LID_GRP_CL1CAL(255)
} nvram_lid_cl1cal_cal_enum;

// VERNO


#define NVRAM_EF_CL1CAL_AFC_DATA_LID_VERNO                            "001"
#define NVRAM_EF_CL1CAL_TX_APT_PA_CONTEXT_1XRTT_LID_VERNO             "001"
#define NVRAM_EF_CL1CAL_TX_APT_PA_CONTEXT_EVDO_LID_VERNO              "001"
#define NVRAM_EF_CL1CAL_TX_DPD_PA_CONTEXT_1XRTT_LID_VERNO             "001"
#define NVRAM_EF_CL1CAL_TX_DPD_PA_CONTEXT_EVDO_LID_VERNO              "001"
#define NVRAM_EF_CL1CAL_TX_APT_PA_GAIN_COMP_1XRTT_LID_VERNO           "001"
#define NVRAM_EF_CL1CAL_TX_APT_PA_GAIN_COMP_EVDO_LID_VERNO            "001"
#define NVRAM_EF_CL1CAL_TX_DPD_PA_GAIN_COMP_1XRTT_LID_VERNO           "001"
#define NVRAM_EF_CL1CAL_TX_DPD_PA_GAIN_COMP_EVDO_LID_VERNO            "001"
#define NVRAM_EF_CL1CAL_DET_COUPLE_LOSS_1XRTT_LID_VERNO               "001"
#define NVRAM_EF_CL1CAL_DET_COUPLE_LOSS_EVDO_LID_VERNO                "001"
#define NVRAM_EF_CL1CAL_DET_COUPLE_LOSS_COMP_1XRTT_LID_VERNO          "001"
#define NVRAM_EF_CL1CAL_DET_COUPLE_LOSS_COMP_EVDO_LID_VERNO           "001"
#define NVRAM_EF_CL1CAL_MAIN_RX_PATH_LOSS_HPM_LID_VERNO          	  "002"
#define NVRAM_EF_CL1CAL_MAIN_RX_PATH_LOSS_LPM_LID_VERNO          	  "002"
#define NVRAM_EF_CL1CAL_DIV_RX_PATH_LOSS_HPM_LID_VERNO           	  "002"
#define NVRAM_EF_CL1CAL_DIV_RX_PATH_LOSS_LPM_LID_VERNO           	  "002"
#define NVRAM_EF_CL1CAL_SHDR_RX_PATH_LOSS_HPM_LID_VERNO          	  "002"
#define NVRAM_EF_CL1CAL_SHDR_RX_PATH_LOSS_LPM_LID_VERNO          	  "002"
#define NVRAM_EF_CL1CAL_AGPS_GROUP_DELAY_LID_VERNO                    "001"
#define NVRAM_EF_CL1CAL_TX_POWER_BACK_OFF_LID_VERNO                   "001"
#define NVRAM_EF_CL1CAL_TX_POWER_OFFSET_LID_VERNO                     "001"
#define NVRAM_EF_CL1CAL_POC_FINAL_LID_VERNO                           "002"
#define NVRAM_EF_CL1CAL_TX_DPD_AM_PM_COMP_1XRTT_LID_VERNO		      "001"
#define NVRAM_EF_CL1CAL_TX_DPD_AM_PM_COMP_EVDO_LID_VERNO		      "001"


#include "cl1_rf_public.h"
// Size and Total 


#define NVRAM_EF_CL1CAL_AFC_DATA_SIZE                                 sizeof(CL1D_RF_AFC_DATA_T)
#define NVRAM_EF_CL1CAL_TX_APT_PA_CONTEXT_1XRTT_SIZE                  sizeof(CL1D_RF_TX_APT_PA_CONTEXT_T)
#define NVRAM_EF_CL1CAL_TX_APT_PA_CONTEXT_EVDO_SIZE                   sizeof(CL1D_RF_TX_APT_PA_CONTEXT_T)
#define NVRAM_EF_CL1CAL_TX_DPD_PA_CONTEXT_1XRTT_SIZE                  sizeof(CL1D_RF_TX_DPD_PA_CONTEXT_T)
#define NVRAM_EF_CL1CAL_TX_DPD_PA_CONTEXT_EVDO_SIZE                   sizeof(CL1D_RF_TX_DPD_PA_CONTEXT_T)
#define NVRAM_EF_CL1CAL_TX_APT_PA_GAIN_COMP_1XRTT_SIZE                sizeof(CL1D_RF_TX_APT_PA_GAIN_COMP_T)
#define NVRAM_EF_CL1CAL_TX_APT_PA_GAIN_COMP_EVDO_SIZE                 sizeof(CL1D_RF_TX_APT_PA_GAIN_COMP_T)
#define NVRAM_EF_CL1CAL_TX_DPD_PA_GAIN_COMP_1XRTT_SIZE                sizeof(CL1D_RF_TX_DPD_PA_GAIN_COMP_T)
#define NVRAM_EF_CL1CAL_TX_DPD_PA_GAIN_COMP_EVDO_SIZE                 sizeof(CL1D_RF_TX_DPD_PA_GAIN_COMP_T)
#define NVRAM_EF_CL1CAL_DET_COUPLE_LOSS_1XRTT_SIZE                    sizeof(CL1D_RF_DET_COUPLE_LOSS_T)
#define NVRAM_EF_CL1CAL_DET_COUPLE_LOSS_EVDO_SIZE                     sizeof(CL1D_RF_DET_COUPLE_LOSS_T)
#define NVRAM_EF_CL1CAL_DET_COUPLE_LOSS_COMP_1XRTT_SIZE               sizeof(CL1D_RF_DET_COUPLE_LOSS_COMP_T)
#define NVRAM_EF_CL1CAL_DET_COUPLE_LOSS_COMP_EVDO_SIZE                sizeof(CL1D_RF_DET_COUPLE_LOSS_COMP_T)
#define NVRAM_EF_CL1CAL_MAIN_RX_PATH_LOSS_HPM_SIZE               	  sizeof(CL1D_RF_RX_PATH_LOSS_COMP_T)
#define NVRAM_EF_CL1CAL_MAIN_RX_PATH_LOSS_LPM_SIZE               	  sizeof(CL1D_RF_RX_PATH_LOSS_COMP_T)
#define NVRAM_EF_CL1CAL_DIV_RX_PATH_LOSS_HPM_SIZE                	  sizeof(CL1D_RF_RX_PATH_LOSS_COMP_T)
#define NVRAM_EF_CL1CAL_DIV_RX_PATH_LOSS_LPM_SIZE                	  sizeof(CL1D_RF_RX_PATH_LOSS_COMP_T)
#define NVRAM_EF_CL1CAL_SHDR_RX_PATH_LOSS_HPM_SIZE               	  sizeof(CL1D_RF_RX_PATH_LOSS_COMP_T)
#define NVRAM_EF_CL1CAL_SHDR_RX_PATH_LOSS_LPM_SIZE               	  sizeof(CL1D_RF_RX_PATH_LOSS_COMP_T)
#define NVRAM_EF_CL1CAL_AGPS_GROUP_DELAY_SIZE                         sizeof(CL1D_RF_AGPS_GROUP_DELAY_T)
#define NVRAM_EF_CL1CAL_TX_POWER_BACK_OFF_SIZE                        sizeof(CL1D_RF_TX_POWER_BACK_OFF_T)
#define NVRAM_EF_CL1CAL_TX_POWER_OFFSET_SIZE                          sizeof(CL1D_RF_TX_POWER_OFFSET_T)
#define NVRAM_EF_CL1CAL_POC_FINAL_SIZE                                sizeof(CL1D_RF_POC_FINAL_T)
#define NVRAM_EF_CL1CAL_TX_DPD_AM_PM_COMP_1XRTT_SIZE                  sizeof(CL1D_RF_TX_DPD_AM_PM_LUT_DATA_T)
#define NVRAM_EF_CL1CAL_TX_DPD_AM_PM_COMP_EVDO_SIZE                   sizeof(CL1D_RF_TX_DPD_AM_PM_LUT_DATA_T)


#define NVRAM_EF_CL1CAL_AFC_DATA_TOTAL                                 1
#define NVRAM_EF_CL1CAL_TX_APT_PA_CONTEXT_1XRTT_TOTAL                  MAX_BAND_NUM
#define NVRAM_EF_CL1CAL_TX_APT_PA_CONTEXT_EVDO_TOTAL                   MAX_BAND_NUM
#define NVRAM_EF_CL1CAL_TX_DPD_PA_CONTEXT_1XRTT_TOTAL                  MAX_BAND_NUM
#define NVRAM_EF_CL1CAL_TX_DPD_PA_CONTEXT_EVDO_TOTAL                   MAX_BAND_NUM
#define NVRAM_EF_CL1CAL_TX_APT_PA_GAIN_COMP_1XRTT_TOTAL                MAX_BAND_NUM
#define NVRAM_EF_CL1CAL_TX_APT_PA_GAIN_COMP_EVDO_TOTAL                 MAX_BAND_NUM
#define NVRAM_EF_CL1CAL_TX_DPD_PA_GAIN_COMP_1XRTT_TOTAL                MAX_BAND_NUM
#define NVRAM_EF_CL1CAL_TX_DPD_PA_GAIN_COMP_EVDO_TOTAL                 MAX_BAND_NUM
#define NVRAM_EF_CL1CAL_DET_COUPLE_LOSS_1XRTT_TOTAL                    MAX_BAND_NUM
#define NVRAM_EF_CL1CAL_DET_COUPLE_LOSS_EVDO_TOTAL                     MAX_BAND_NUM
#define NVRAM_EF_CL1CAL_DET_COUPLE_LOSS_COMP_1XRTT_TOTAL               MAX_BAND_NUM
#define NVRAM_EF_CL1CAL_DET_COUPLE_LOSS_COMP_EVDO_TOTAL                MAX_BAND_NUM
#define NVRAM_EF_CL1CAL_MAIN_RX_PATH_LOSS_HPM_TOTAL               	   MAX_BAND_NUM
#define NVRAM_EF_CL1CAL_MAIN_RX_PATH_LOSS_LPM_TOTAL               	   MAX_BAND_NUM
#define NVRAM_EF_CL1CAL_DIV_RX_PATH_LOSS_HPM_TOTAL                	   MAX_BAND_NUM
#define NVRAM_EF_CL1CAL_DIV_RX_PATH_LOSS_LPM_TOTAL                	   MAX_BAND_NUM
#define NVRAM_EF_CL1CAL_SHDR_RX_PATH_LOSS_HPM_TOTAL               	   MAX_BAND_NUM
#define NVRAM_EF_CL1CAL_SHDR_RX_PATH_LOSS_LPM_TOTAL               	   MAX_BAND_NUM
#define NVRAM_EF_CL1CAL_AGPS_GROUP_DELAY_TOTAL                         MAX_BAND_NUM
#define NVRAM_EF_CL1CAL_TX_POWER_BACK_OFF_TOTAL                        MAX_BAND_NUM
#define NVRAM_EF_CL1CAL_TX_POWER_OFFSET_TOTAL                          MAX_BAND_NUM
#define NVRAM_EF_CL1CAL_POC_FINAL_TOTAL                                MAX_BAND_NUM
#define NVRAM_EF_CL1CAL_TX_DPD_AM_PM_COMP_1XRTT_TOTAL                  MAX_BAND_NUM
#define NVRAM_EF_CL1CAL_TX_DPD_AM_PM_COMP_EVDO_TOTAL                   MAX_BAND_NUM


#undef NVRAM_ITEM_RF_CUST
#undef NVRAM_ITEM_MIPI
#undef NVRAM_ITEM_RF_CAL
#undef NVRAM_ITEM_RF_POC
#undef NVRAM_ITEM_RF_TAS_VAR
#undef NVRAM_ITEM_RF_TAS_ARRAY
#undef NVRAM_ITEM_ELNA_VAR
#undef NVRAM_ITEM_ELNA_ARRAY
#undef NVRAM_ITEM_TX_POWER_VAR
#undef NVRAM_ITEM_RF_TAS_TST
#define NVRAM_ITEM_RF_CUST(nAME, aFFIX, rECnUM, tYPE, tYPEnUM, fUNC)
#define NVRAM_ITEM_MIPI(nAME, aFFIX, rECnUM, tYPE, tYPEnUM, fUNC)
#define NVRAM_ITEM_RF_CAL(nAME, aFFIX, rECnUM, tYPE, tYPEnUM, fUNC)
#define NVRAM_ITEM_RF_POC(nAME, aFFIX, rECnUM, tYPE, tYPEnUM, fUNC)
/*** TAS LID REC SIZE ***/
#define NVRAM_ITEM_RF_TAS_VAR(nAME, aFFIX, rECnUM, tYPE, tYPEnUM, fUNC)
#define NVRAM_ITEM_RF_TAS_ARRAY(nAME, aFFIX, rECnUM, tYPE, tYPEnUM, fUNC)
/*ELNA*/
#define NVRAM_ITEM_ELNA_VAR(nAME, aFFIX, rECnUM, tYPE, tYPEnUM, fUNC)
#define NVRAM_ITEM_ELNA_ARRAY(nAME, aFFIX, rECnUM, tYPE, tYPEnUM, fUNC)
/*TX POWER*/
#define NVRAM_ITEM_TX_POWER_VAR(nAME, aFFIX, rECnUM, tYPE, tYPEnUM, fUNC)
/*TAS TST */
#define NVRAM_ITEM_RF_TAS_TST(nAME, aFFIX, rECnUM, tYPE, tYPEnUM, fUNC)
#include "cl1_nvram_id.h"

#ifdef __cplusplus
}
#endif 

#endif /*__C2K_RAT__ */
#endif /* __CL1CAL_NVRAM_DEF_H__ */

