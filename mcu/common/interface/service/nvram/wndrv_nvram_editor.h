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
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/
#ifndef __WNDRV_NVRAM_EDITOR_H__
#define __WNDRV_NVRAM_EDITOR_H__


#ifndef NVRAM_NOT_PRESENT
#ifdef __cplusplus
extern "C"
{
#endif /* __cplusplus */ 

#include "wndrv_nvram_def.h"

#ifdef GEN_FOR_PC
BEGIN_NVRAM_DATA

 #if defined(__WIFI_SUPPORT__)
/***********************************************************************
  ***  This is a nvram data item bit level description for meta tools nvram editor
  ***
  ***  Logical Data Item ID : NVRAM_EF_WNDRV_MAC_ADDRESS_LID
  ***
  ***  Module: WNDRV
  ***
  ***  Description:
  ***
  ***  Maintainer:
  ***
  ***********************************************************************/
     LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_WNDRV_MAC_ADDRESS_LID)
     wndrv_cal_mac_addr_struct *NVRAM_EF_WNDRV_MAC_ADDRESS_TOTAL
     {
     };

/***********************************************************************
  ***  This is a nvram data item bit level description for meta tools nvram editor
  ***
  ***  Logical Data Item ID : NVRAM_EF_WNDRV_TX_POWER_2400M_LID
  ***
  ***  Module: WNDRV
  ***
  ***  Description:
  ***
  ***  Maintainer:
  ***
  ***********************************************************************/
     LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_WNDRV_TX_POWER_2400M_LID)
     wndrv_cal_txpwr_2400M_struct *NVRAM_EF_WNDRV_TX_POWER_2400M_TOTAL
     {
     };

/***********************************************************************
  ***  This is a nvram data item bit level description for meta tools nvram editor
  ***
  ***  Logical Data Item ID : NVRAM_EF_WNDRV_TX_POWER_5000M_LID
  ***
  ***  Module: WNDRV
  ***
  ***  Description:
  ***
  ***  Maintainer:
  ***
  ***********************************************************************/
     LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_WNDRV_TX_POWER_5000M_LID)
     wndrv_cal_txpwr_5000M_struct *NVRAM_EF_WNDRV_TX_POWER_5000M_TOTAL
     {
     };

/***********************************************************************
  ***  This is a nvram data item bit level description for meta tools nvram editor
  ***
  ***  Logical Data Item ID : NVRAM_EF_WNDRV_DAC_DC_OFFSET_LID
  ***
  ***  Module: WNDRV
  ***
  ***  Description:
  ***
  ***  Maintainer:
  ***
  ***********************************************************************/
     LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_WNDRV_DAC_DC_OFFSET_LID)
     wndrv_cal_dac_dc_offset_struct *NVRAM_EF_WNDRV_DAC_DC_OFFSET_TOTAL
     {
     };

     LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_WNDRV_TX_ALC_POWER_LID)
     wndrv_cal_tx_ALC_2400M_struct *NVRAM_EF_WNDRV_TX_ALC_POWER_TOTAL
     {
     };

     LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_WNDRV_EXT_SETTING_TRIMVAL_THERMOVAL_LID)
     wndrv_cal_setting_trim_thermo_struct *NVRAM_EF_WNDRV_EXT_SETTING_TRIMVAL_THERMOVAL_TOTAL
     {
     };

     LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_WNDRV_ALC_SLOPE_LID)
     wndrv_cal_ALC_Slope_2400M_struct *NVRAM_EF_WNDRV_ALC_SLOPE_TOTAL
     {
     };

/***********************************************************************
  ***  This is a nvram data item bit level description for meta tools nvram editor
  ***
  ***  Logical Data Item ID : NVRAM_EF_WNDRV_TPCFF_LID
  ***
  ***  Module: WNDRV
  ***
  ***  Description:
  ***
  ***  Maintainer:
  ***
  ***********************************************************************/
     LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_WNDRV_TPCFF_LID)
     wndrv_cal_txpwr_cal_free_flow_struct *NVRAM_EF_WNDRV_TPCFF_TOTAL
     {
     };

 #endif /* defined(__WIFI_SUPPORT__) */

END_NVRAM_DATA
#endif	/*GEN FOR PC*/

#ifdef __cplusplus
}
#endif 

#endif  /* !NVRAM_NOT_PRESENT */
#endif  /* __WNDRV_NVRAM_EDITOR_H__ */
