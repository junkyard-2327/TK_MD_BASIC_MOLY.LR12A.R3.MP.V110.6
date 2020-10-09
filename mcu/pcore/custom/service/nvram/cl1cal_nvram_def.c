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
 * cl1cal_nvram_def.c
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description:
 * ------------
 *   This file is intends for NVRAM security customization. 
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
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

#ifndef NVRAM_NOT_PRESENT
#if defined (__C2K_RAT__)

#include "kal_general_types.h"
#ifdef NVRAM_AUTO_GEN
#include "nvram_auto_gen.h"
#endif

#include "nvram_enums.h"
#include "nvram_defs.h"

/*
 *   User Headers & Default value
 */
#include "cl1cal_nvram_def.h" 
#include "cl1cal_nvram_editor.h" 
extern void nvram_get_cl1_default_value_to_write(nvram_lid_enum lid, kal_uint8 *buffer, kal_uint16 buffer_size);
extern void nvram_get_cl1_poc_default_value_to_write(nvram_lid_enum lid, kal_uint8 *buffer, kal_uint16 buffer_size);
extern void nvram_get_cl1_1xrtt_dpd_am_pm_default_value_to_write(nvram_lid_enum lid, kal_uint8 *buffer, kal_uint16 buffer_size);
extern void nvram_get_cl1_evdo_dpd_am_pm_default_value_to_write(nvram_lid_enum lid, kal_uint8 *buffer, kal_uint16 buffer_size);


// LID Declaration
ltable_entry_struct logical_data_item_table_cl1cal[] =
{
   {
      NVRAM_EF_CL1CAL_AFC_DATA_LID,
      NVRAM_EF_CL1CAL_AFC_DATA_TOTAL,
      NVRAM_EF_CL1CAL_AFC_DATA_SIZE,
      NVRAM_DEFAULT_FUNC(nvram_get_cl1_default_value_to_write),
      NVRAM_CATEGORY_CALIBRAT | NVRAM_CATEGORY_FUNC_DEFAULT,
      NVRAM_ATTR_AVERAGE | NVRAM_ATTR_GEN_DEFAULT,
      "CC00",
      VER(NVRAM_EF_CL1CAL_AFC_DATA_LID)
   },

   {
      NVRAM_EF_CL1CAL_TX_APT_PA_CONTEXT_1XRTT_LID,
      NVRAM_EF_CL1CAL_TX_APT_PA_CONTEXT_1XRTT_TOTAL,
      NVRAM_EF_CL1CAL_TX_APT_PA_CONTEXT_1XRTT_SIZE,
      NVRAM_DEFAULT_FUNC(nvram_get_cl1_default_value_to_write),
      NVRAM_CATEGORY_CALIBRAT | NVRAM_CATEGORY_FUNC_DEFAULT,
      NVRAM_ATTR_AVERAGE | NVRAM_ATTR_GEN_DEFAULT | NVRAM_ATTR_MULTI_DEFAULT,
      "CC01",
      VER(NVRAM_EF_CL1CAL_TX_APT_PA_CONTEXT_1XRTT_LID)
   },

   {
      NVRAM_EF_CL1CAL_TX_APT_PA_CONTEXT_EVDO_LID,
      NVRAM_EF_CL1CAL_TX_APT_PA_CONTEXT_EVDO_TOTAL,
      NVRAM_EF_CL1CAL_TX_APT_PA_CONTEXT_EVDO_SIZE,
      NVRAM_DEFAULT_FUNC(nvram_get_cl1_default_value_to_write),
      NVRAM_CATEGORY_CALIBRAT | NVRAM_CATEGORY_FUNC_DEFAULT,
      NVRAM_ATTR_AVERAGE | NVRAM_ATTR_GEN_DEFAULT | NVRAM_ATTR_MULTI_DEFAULT,
      "CC02",
      VER(NVRAM_EF_CL1CAL_TX_APT_PA_CONTEXT_EVDO_LID)
   },

   {
      NVRAM_EF_CL1CAL_TX_DPD_PA_CONTEXT_1XRTT_LID,
      NVRAM_EF_CL1CAL_TX_DPD_PA_CONTEXT_1XRTT_TOTAL,
      NVRAM_EF_CL1CAL_TX_DPD_PA_CONTEXT_1XRTT_SIZE,
      NVRAM_DEFAULT_FUNC(nvram_get_cl1_default_value_to_write),
      NVRAM_CATEGORY_CALIBRAT | NVRAM_CATEGORY_FUNC_DEFAULT,
      NVRAM_ATTR_AVERAGE | NVRAM_ATTR_GEN_DEFAULT | NVRAM_ATTR_MULTI_DEFAULT,
      "CC03",
      VER(NVRAM_EF_CL1CAL_TX_DPD_PA_CONTEXT_1XRTT_LID)
   },

   {
      NVRAM_EF_CL1CAL_TX_DPD_PA_CONTEXT_EVDO_LID,
      NVRAM_EF_CL1CAL_TX_DPD_PA_CONTEXT_EVDO_TOTAL,
      NVRAM_EF_CL1CAL_TX_DPD_PA_CONTEXT_EVDO_SIZE,
      NVRAM_DEFAULT_FUNC(nvram_get_cl1_default_value_to_write),
      NVRAM_CATEGORY_CALIBRAT | NVRAM_CATEGORY_FUNC_DEFAULT,
      NVRAM_ATTR_AVERAGE | NVRAM_ATTR_GEN_DEFAULT | NVRAM_ATTR_MULTI_DEFAULT,
      "CC04",
      VER(NVRAM_EF_CL1CAL_TX_DPD_PA_CONTEXT_EVDO_LID)
   },

   {
      NVRAM_EF_CL1CAL_TX_APT_PA_GAIN_COMP_1XRTT_LID,
      NVRAM_EF_CL1CAL_TX_APT_PA_GAIN_COMP_1XRTT_TOTAL,
      NVRAM_EF_CL1CAL_TX_APT_PA_GAIN_COMP_1XRTT_SIZE,
      NVRAM_DEFAULT_FUNC(nvram_get_cl1_default_value_to_write),
      NVRAM_CATEGORY_CALIBRAT | NVRAM_CATEGORY_FUNC_DEFAULT,
      NVRAM_ATTR_AVERAGE | NVRAM_ATTR_GEN_DEFAULT | NVRAM_ATTR_MULTI_DEFAULT,
      "CC05",
      VER(NVRAM_EF_CL1CAL_TX_APT_PA_GAIN_COMP_1XRTT_LID)
   },

   {
      NVRAM_EF_CL1CAL_TX_APT_PA_GAIN_COMP_EVDO_LID,
      NVRAM_EF_CL1CAL_TX_APT_PA_GAIN_COMP_EVDO_TOTAL,
      NVRAM_EF_CL1CAL_TX_APT_PA_GAIN_COMP_EVDO_SIZE,
      NVRAM_DEFAULT_FUNC(nvram_get_cl1_default_value_to_write),
      NVRAM_CATEGORY_CALIBRAT | NVRAM_CATEGORY_FUNC_DEFAULT,
      NVRAM_ATTR_AVERAGE | NVRAM_ATTR_GEN_DEFAULT | NVRAM_ATTR_MULTI_DEFAULT,
      "CC06",
      VER(NVRAM_EF_CL1CAL_TX_APT_PA_GAIN_COMP_EVDO_LID)
   },
#if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif
   {
      NVRAM_EF_CL1CAL_DET_COUPLE_LOSS_1XRTT_LID,
      NVRAM_EF_CL1CAL_DET_COUPLE_LOSS_1XRTT_TOTAL,
      NVRAM_EF_CL1CAL_DET_COUPLE_LOSS_1XRTT_SIZE,
      NVRAM_DEFAULT_FUNC(nvram_get_cl1_default_value_to_write),
      NVRAM_CATEGORY_CALIBRAT | NVRAM_CATEGORY_FUNC_DEFAULT,
      NVRAM_ATTR_AVERAGE | NVRAM_ATTR_GEN_DEFAULT | NVRAM_ATTR_MULTI_DEFAULT,
      "CC09",
      VER(NVRAM_EF_CL1CAL_DET_COUPLE_LOSS_1XRTT_LID)
   },

   {
      NVRAM_EF_CL1CAL_DET_COUPLE_LOSS_EVDO_LID,
      NVRAM_EF_CL1CAL_DET_COUPLE_LOSS_EVDO_TOTAL,
      NVRAM_EF_CL1CAL_DET_COUPLE_LOSS_EVDO_SIZE,
      NVRAM_DEFAULT_FUNC(nvram_get_cl1_default_value_to_write),
      NVRAM_CATEGORY_CALIBRAT | NVRAM_CATEGORY_FUNC_DEFAULT,
      NVRAM_ATTR_AVERAGE | NVRAM_ATTR_GEN_DEFAULT | NVRAM_ATTR_MULTI_DEFAULT,
      "CC0A",
      VER(NVRAM_EF_CL1CAL_DET_COUPLE_LOSS_EVDO_LID)
   },

   {
      NVRAM_EF_CL1CAL_DET_COUPLE_LOSS_COMP_1XRTT_LID,
      NVRAM_EF_CL1CAL_DET_COUPLE_LOSS_COMP_1XRTT_TOTAL,
      NVRAM_EF_CL1CAL_DET_COUPLE_LOSS_COMP_1XRTT_SIZE,
      NVRAM_DEFAULT_FUNC(nvram_get_cl1_default_value_to_write),
      NVRAM_CATEGORY_CALIBRAT | NVRAM_CATEGORY_FUNC_DEFAULT,
      NVRAM_ATTR_AVERAGE | NVRAM_ATTR_GEN_DEFAULT | NVRAM_ATTR_MULTI_DEFAULT,
      "CC0B",
      VER(NVRAM_EF_CL1CAL_DET_COUPLE_LOSS_COMP_1XRTT_LID)
   },

   {
      NVRAM_EF_CL1CAL_DET_COUPLE_LOSS_COMP_EVDO_LID,
      NVRAM_EF_CL1CAL_DET_COUPLE_LOSS_COMP_EVDO_TOTAL,
      NVRAM_EF_CL1CAL_DET_COUPLE_LOSS_COMP_EVDO_SIZE,
      NVRAM_DEFAULT_FUNC(nvram_get_cl1_default_value_to_write),
      NVRAM_CATEGORY_CALIBRAT | NVRAM_CATEGORY_FUNC_DEFAULT,
      NVRAM_ATTR_AVERAGE | NVRAM_ATTR_GEN_DEFAULT | NVRAM_ATTR_MULTI_DEFAULT,
      "CC0C",
      VER(NVRAM_EF_CL1CAL_DET_COUPLE_LOSS_COMP_EVDO_LID)
   },
#if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif
   {
      NVRAM_EF_CL1CAL_MAIN_RX_PATH_LOSS_HPM_LID,
      NVRAM_EF_CL1CAL_MAIN_RX_PATH_LOSS_HPM_TOTAL,
      NVRAM_EF_CL1CAL_MAIN_RX_PATH_LOSS_HPM_SIZE,
      NVRAM_DEFAULT_FUNC(nvram_get_cl1_default_value_to_write),
      NVRAM_CATEGORY_CALIBRAT | NVRAM_CATEGORY_FUNC_DEFAULT,
      NVRAM_ATTR_AVERAGE | NVRAM_ATTR_GEN_DEFAULT | NVRAM_ATTR_MULTI_DEFAULT,
      "CC0D",
      VER(NVRAM_EF_CL1CAL_MAIN_RX_PATH_LOSS_HPM_LID)
   },

   {
      NVRAM_EF_CL1CAL_MAIN_RX_PATH_LOSS_LPM_LID,
      NVRAM_EF_CL1CAL_MAIN_RX_PATH_LOSS_LPM_TOTAL,
      NVRAM_EF_CL1CAL_MAIN_RX_PATH_LOSS_LPM_SIZE,
      NVRAM_DEFAULT_FUNC(nvram_get_cl1_default_value_to_write),
      NVRAM_CATEGORY_CALIBRAT | NVRAM_CATEGORY_FUNC_DEFAULT,
      NVRAM_ATTR_AVERAGE | NVRAM_ATTR_GEN_DEFAULT | NVRAM_ATTR_MULTI_DEFAULT,
      "CC0E",
      VER(NVRAM_EF_CL1CAL_MAIN_RX_PATH_LOSS_LPM_LID)
   },
#if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif
   {
      NVRAM_EF_CL1CAL_DIV_RX_PATH_LOSS_HPM_LID,
      NVRAM_EF_CL1CAL_DIV_RX_PATH_LOSS_HPM_TOTAL,
      NVRAM_EF_CL1CAL_DIV_RX_PATH_LOSS_HPM_SIZE,
      NVRAM_DEFAULT_FUNC(nvram_get_cl1_default_value_to_write),
      NVRAM_CATEGORY_CALIBRAT | NVRAM_CATEGORY_FUNC_DEFAULT,
      NVRAM_ATTR_AVERAGE | NVRAM_ATTR_GEN_DEFAULT | NVRAM_ATTR_MULTI_DEFAULT,
      "CC0F",
      VER(NVRAM_EF_CL1CAL_DIV_RX_PATH_LOSS_HPM_LID)
   },

   {
      NVRAM_EF_CL1CAL_DIV_RX_PATH_LOSS_LPM_LID,
      NVRAM_EF_CL1CAL_DIV_RX_PATH_LOSS_LPM_TOTAL,
      NVRAM_EF_CL1CAL_DIV_RX_PATH_LOSS_LPM_SIZE,
      NVRAM_DEFAULT_FUNC(nvram_get_cl1_default_value_to_write),
      NVRAM_CATEGORY_CALIBRAT | NVRAM_CATEGORY_FUNC_DEFAULT,
      NVRAM_ATTR_AVERAGE | NVRAM_ATTR_GEN_DEFAULT | NVRAM_ATTR_MULTI_DEFAULT,
      "CC0G",
      VER(NVRAM_EF_CL1CAL_DIV_RX_PATH_LOSS_LPM_LID)
   },
#if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif
   {
      NVRAM_EF_CL1CAL_SHDR_RX_PATH_LOSS_HPM_LID,
      NVRAM_EF_CL1CAL_SHDR_RX_PATH_LOSS_HPM_TOTAL,
      NVRAM_EF_CL1CAL_SHDR_RX_PATH_LOSS_HPM_SIZE,
      NVRAM_DEFAULT_FUNC(nvram_get_cl1_default_value_to_write),
      NVRAM_CATEGORY_CALIBRAT | NVRAM_CATEGORY_FUNC_DEFAULT,
      NVRAM_ATTR_AVERAGE | NVRAM_ATTR_GEN_DEFAULT | NVRAM_ATTR_MULTI_DEFAULT,
      "CC0H",
      VER(NVRAM_EF_CL1CAL_SHDR_RX_PATH_LOSS_HPM_LID)
   },

   {
      NVRAM_EF_CL1CAL_SHDR_RX_PATH_LOSS_LPM_LID,
      NVRAM_EF_CL1CAL_SHDR_RX_PATH_LOSS_LPM_TOTAL,
      NVRAM_EF_CL1CAL_SHDR_RX_PATH_LOSS_LPM_SIZE,
      NVRAM_DEFAULT_FUNC(nvram_get_cl1_default_value_to_write),
      NVRAM_CATEGORY_CALIBRAT | NVRAM_CATEGORY_FUNC_DEFAULT,
      NVRAM_ATTR_AVERAGE | NVRAM_ATTR_GEN_DEFAULT | NVRAM_ATTR_MULTI_DEFAULT,
      "CC0I",
      VER(NVRAM_EF_CL1CAL_SHDR_RX_PATH_LOSS_LPM_LID)
   },

   {
      NVRAM_EF_CL1CAL_AGPS_GROUP_DELAY_LID,
      NVRAM_EF_CL1CAL_AGPS_GROUP_DELAY_TOTAL,
      NVRAM_EF_CL1CAL_AGPS_GROUP_DELAY_SIZE,
      NVRAM_DEFAULT_FUNC(nvram_get_cl1_default_value_to_write),
      NVRAM_CATEGORY_CALIBRAT | NVRAM_CATEGORY_FUNC_DEFAULT,
      NVRAM_ATTR_AVERAGE | NVRAM_ATTR_GEN_DEFAULT | NVRAM_ATTR_MULTI_DEFAULT,
      "CC0P",
      VER(NVRAM_EF_CL1CAL_AGPS_GROUP_DELAY_LID)
   },
   {
      NVRAM_EF_CL1CAL_POC_FINAL_LID,
      NVRAM_EF_CL1CAL_POC_FINAL_TOTAL,
      NVRAM_EF_CL1CAL_POC_FINAL_SIZE,
      NVRAM_DEFAULT_FUNC(nvram_get_cl1_poc_default_value_to_write),
      NVRAM_CATEGORY_CALIBRAT | NVRAM_CATEGORY_FUNC_DEFAULT,
      NVRAM_ATTR_AVERAGE | NVRAM_ATTR_GEN_DEFAULT | NVRAM_ATTR_MULTI_DEFAULT,
      "CC0Q",
      VER(NVRAM_EF_CL1CAL_POC_FINAL_LID)
   },
   {
      NVRAM_EF_CL1CAL_TX_DPD_AM_PM_COMP_1XRTT_LID,
      NVRAM_EF_CL1CAL_TX_DPD_AM_PM_COMP_1XRTT_TOTAL,
      NVRAM_EF_CL1CAL_TX_DPD_AM_PM_COMP_1XRTT_SIZE,
      NVRAM_DEFAULT_FUNC(nvram_get_cl1_1xrtt_dpd_am_pm_default_value_to_write),
	  NVRAM_CATEGORY_USER | NVRAM_CATEGORY_FUNC_DEFAULT,
	  NVRAM_ATTR_AVERAGE | NVRAM_ATTR_OTA_RESET | NVRAM_ATTR_GEN_DEFAULT | NVRAM_ATTR_MULTI_DEFAULT,
      "CC0R",
      VER(NVRAM_EF_CL1CAL_TX_DPD_AM_PM_COMP_1XRTT_LID)
   },
   {
      NVRAM_EF_CL1CAL_TX_DPD_AM_PM_COMP_EVDO_LID,
      NVRAM_EF_CL1CAL_TX_DPD_AM_PM_COMP_EVDO_TOTAL,
      NVRAM_EF_CL1CAL_TX_DPD_AM_PM_COMP_EVDO_SIZE,
      NVRAM_DEFAULT_FUNC(nvram_get_cl1_evdo_dpd_am_pm_default_value_to_write),
	  NVRAM_CATEGORY_USER | NVRAM_CATEGORY_FUNC_DEFAULT,
	  NVRAM_ATTR_AVERAGE | NVRAM_ATTR_OTA_RESET | NVRAM_ATTR_GEN_DEFAULT | NVRAM_ATTR_MULTI_DEFAULT,
      "CC0S",
      VER(NVRAM_EF_CL1CAL_TX_DPD_AM_PM_COMP_EVDO_LID)
   },
   
   {
 	 NVRAM_EF_CL1CAL_TX_DPD_PA_GAIN_COMP_1XRTT_LID,
 	 NVRAM_EF_CL1CAL_TX_DPD_PA_GAIN_COMP_1XRTT_TOTAL,
 	 NVRAM_EF_CL1CAL_TX_DPD_PA_GAIN_COMP_1XRTT_SIZE,
 	 NVRAM_DEFAULT_FUNC(nvram_get_cl1_default_value_to_write),
 	 NVRAM_CATEGORY_CALIBRAT | NVRAM_CATEGORY_FUNC_DEFAULT,
 	 NVRAM_ATTR_AVERAGE | NVRAM_ATTR_GEN_DEFAULT | NVRAM_ATTR_MULTI_DEFAULT,
 	 "CC0T",
 	 VER(NVRAM_EF_CL1CAL_TX_DPD_PA_GAIN_COMP_1XRTT_LID)
   },
   
   {
 	 NVRAM_EF_CL1CAL_TX_DPD_PA_GAIN_COMP_EVDO_LID,
 	 NVRAM_EF_CL1CAL_TX_DPD_PA_GAIN_COMP_EVDO_TOTAL,
 	 NVRAM_EF_CL1CAL_TX_DPD_PA_GAIN_COMP_EVDO_SIZE,
 	 NVRAM_DEFAULT_FUNC(nvram_get_cl1_default_value_to_write),
 	 NVRAM_CATEGORY_CALIBRAT | NVRAM_CATEGORY_FUNC_DEFAULT,
 	 NVRAM_ATTR_AVERAGE | NVRAM_ATTR_GEN_DEFAULT | NVRAM_ATTR_MULTI_DEFAULT,
 	 "CC0U",
 	 VER(NVRAM_EF_CL1CAL_TX_DPD_PA_GAIN_COMP_EVDO_LID)
   },

   NVRAM_LTABLE_END
};

#endif /* __C2K_RAT__ */

#endif /* NVRAM_NOT_PRESENT */
