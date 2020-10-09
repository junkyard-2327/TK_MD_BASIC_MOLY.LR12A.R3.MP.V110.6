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
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/
#ifndef __DHL_NVRAM_EDITOR_H__
#define __DHL_NVRAM_EDITOR_H__

#ifndef NVRAM_NOT_PRESENT
#ifdef __cplusplus
extern "C"
{
#endif /* __cplusplus */ 
#include "csg_nvram_def.h"

// Data Structure of Each LID

typedef struct
{
    kal_uint8 nvram_ef_tst_filter[NVRAM_EF_TST_FILTER_SIZE];
} nvram_ef_tst_filter_struct;
typedef struct
{
    kal_uint8 nvram_ef_dhl_filter[NVRAM_EF_DHL_FILTER_SIZE];
} nvram_ef_dhl_filter_struct;

typedef struct
{
    kal_uint8 nvram_ef_dsp_filter[NVRAM_EF_DSP_FILTER_SIZE];
} nvram_ef_dsp_filter_struct;

#if defined(__TST_DNT_LOGGING__)
typedef struct
{
    kal_uint8 nvram_ef_ps_l2copro_filter[NVRAM_EF_PS_L2COPRO_FILTER_SETTINGS_SIZE];
} nvram_ef_ps_l2copro_filter_struct;
#endif  //#if defined(__TST_DNT_LOGGING__)

#ifdef GEN_FOR_PC
BEGIN_NVRAM_DATA
/* Lisen 0604 TST */
#ifndef __L1_STANDALONE__
/********************************************************************************************
* LID_NAME
*      NVRAM_EF_TST_FILTER_LID
* DESCRIPTION
*      This LID stores PS & L1/L2 filters.
* INFOMATION
*      Can OTA Reset: Yes
*      Update Scenario: This LID will update when update filter.
*********************************************************************************************/
     LID_BIT VER_LID(NVRAM_EF_TST_FILTER_LID)
     nvram_ef_tst_filter_struct *NVRAM_EF_TST_FILTER_TOTAL
     {
         nvram_ef_tst_filter:"Stores PS/L1/L2 filter array"
         {
         };
     };
/********************************************************************************************
* LID_NAME
*      NVRAM_EF_DHL_FILTER_LID
* DESCRIPTION
*      This LID stores MUX filters.
* INFOMATION
*      Can OTA Reset: Yes
*      Update Scenario: This LID will update when update filter.
*********************************************************************************************/
     LID_BIT VER_LID(NVRAM_EF_DHL_FILTER_LID)
     nvram_ef_dhl_filter_struct *NVRAM_EF_DHL_FILTER_TOTAL
     {
         nvram_ef_dhl_filter:"Stores MUX filter array"
         {
         };
     };
/********************************************************************************************
* LID_NAME
*      NVRAM_EF_DSP_FILTER_LID
* DESCRIPTION
*      This LID stores DSP filters.
* INFOMATION
*      Can OTA Reset: Yes
*      Update Scenario: This LID will update when update filter.
*********************************************************************************************/
     LID_BIT VER_LID(NVRAM_EF_DSP_FILTER_LID)
     nvram_ef_dsp_filter_struct *NVRAM_EF_DSP_FILTER_TOTAL
     {
	     nvram_ef_dsp_filter:"Stores DSP filter array"
	     {
	     };
     };

#endif /* __L1_STANDALONE__ */
/********************************************************************************************
* LID_NAME
*      NVRAM_EF_TST_CONFIG_LID
* DESCRIPTION
*      This LID stores the meta_trace_enable flag (deprecated).
* INFOMATION
*      Can OTA Reset: Yes
*      Update Scenario: This LID will update when enable MD log on META tool (deprecated).
*********************************************************************************************/
LID_BIT VER_LID(NVRAM_EF_TST_CONFIG_LID)
     tst_config_struct_t *NVRAM_EF_TST_CONFIG_TOTAL
     {
     };
/********************************************************************************************
* LID_NAME
*      NVRAM_EF_PORT_SETTING_LID
* DESCRIPTION
*      This LID stores port settings (deprecated).
* INFOMATION
*      Can OTA Reset: Yes
*      Update Scenario: Deprecated.
*********************************************************************************************/
LID_BIT VER_LID(NVRAM_EF_PORT_SETTING_LID)
     port_setting_struct *NVRAM_EF_PORT_SETTING_TOTAL
     {
     };

#if defined(__TST_DNT_LOGGING__)
/********************************************************************************************
* LID_NAME
*      NVRAM_EF_PS_L2COPRO_FILTER_SETTINGS_LID
* DESCRIPTION
*      This LID stores the L2 Copro setting under DNT logging (deprecated).
* INFOMATION
*      Can OTA Reset: Yes
*      Update Scenario: Deprecated.
*********************************************************************************************/
     LID_BIT VER_LID(NVRAM_EF_PS_L2COPRO_FILTER_SETTINGS_LID)
     nvram_ef_ps_l2copro_filter_struct *NVRAM_EF_PS_L2COPRO_FILTER_SETTINGS_TOTAL
     {
         nvram_ef_ps_l2copro_filter:"l2copro specific data"
         {
         };
     };
#endif  //#if defined(__TST_DNT_LOGGING__)

END_NVRAM_DATA
#endif	/*GEN FOR PC*/

#ifdef __cplusplus
}
#endif 

#endif  /* !NVRAM_NOT_PRESENT */
#endif  /* __DHL_NVRAM_EDITOR_H__ */
