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
 ****************************************************************************/
#ifndef __SSDS_NVRAM_EDITOR_H__
#define __SSDS_NVRAM_EDITOR_H__

#ifndef NVRAM_NOT_PRESENT
#ifdef __cplusplus
extern "C"
{
#endif /* __cplusplus */ 

#include "ssds_nvram_def.h"
#ifdef GEN_FOR_PC
BEGIN_NVRAM_DATA

#if 1
/********************************************************************************************
* LID_NAME
*      NVRAM_EF_SSDS_REQUEST_PROFILE_LID
* DESCRIPTION
*      This LID is used to modify the rule of supplementary sevice domian selection for the 
*      specified scenario.   
* INFORMATION
*      Can OTA Reset: Yes
*      Update Scenario: This LID will update when SIM ready,ie:power-on,plug in SIM card.
*********************************************************************************************/
LID_BIT VER_LID(NVRAM_EF_SSDS_REQUEST_PROFILE_LID) 
     nvram_ef_ssds_request_profile_struct *NVRAM_EF_SSDS_REQUEST_PROFILE_TOTAL
     {
         req_path_entry:"request path entry"
         {
         };
         req_path_entry.is_valid:"this entry valid?"
         {
         };
         req_path_entry.mask:"check option ?"
         {
         };
         req_path_entry.mask.check_atcmd_type:"check atcmd type ?"
         {
         };
         req_path_entry.mask.check_opid:"check operator ID ?"
         {
         };
         req_path_entry.mask.check_mccmnc:"check mccmnc ?"
         {
         };
         req_path_entry.mask.check_sim_type:"check sim type ?"
         {
         };
         req_path_entry.mask.check_ims_registered:"check if ims is registered ?"
         {
         };
         req_path_entry.mask.check_ims_domain:"check ims domain ?"
         {
         };
         req_path_entry.mask.check_roaming_type:"check roaming type ?"
         {
         };
         req_path_entry.value:"value information"
         {
         };
         req_path_entry.value.atcmd_type:"atcmd type"
         {
         };
         req_path_entry.value.op_id:"operator ID"
         {
         };
         req_path_entry.value.mccmnc:"mccmnc"
         {
         };
         req_path_entry.value.sim_type:"sim type"
         {
         };
         req_path_entry.value.ims_registered:"ims registered status"
         {
         };
         req_path_entry.value.ims_domain:"ims domain"
         {
         };
         req_path_entry.value.roaming_type:"roaming type"
         {
         };
         req_path_entry.action:"action"
         {
         };
         req_path_entry.action.req_path:"request path type"
         {
         };
     };
/********************************************************************************************
* LID_NAME
*      NVRAM_EF_SSDS_RESPONSE_PROFILE_LID
* DESCRIPTION
*      This LID is used to modify the rule of supplementary sevice domian selection after 
*      receiving response from XCAP for the specified scenario.
* INFORMATION
*      Can OTA Reset: Yes
*      Update Scenario: This LID will update when SIM ready,ie:power-on,plug in SIM card.
*********************************************************************************************/
LID_BIT VER_LID(NVRAM_EF_SSDS_RESPONSE_PROFILE_LID) 
     nvram_ef_ssds_response_profile_struct *NVRAM_EF_SSDS_RESPONSE_PROFILE_TOTAL
     {
         response_path_entry:"response path entry"
         {
         };
         response_path_entry.is_valid:"this entry valid?"
         {
         };

         response_path_entry.mask.check_atcmd_type:"check atcmd type ?"
         {
         };

         response_path_entry.mask.check_rsp_id:"check response ID ?"
         {
         };
		  
         response_path_entry.mask.check_opid:"check operator ID ?"
         {
         };
         response_path_entry.mask.check_mccmnc:"check mccmnc ?"
         {
         };
         response_path_entry.mask.check_sim_type:"check sim type ?"
         {
         };
         response_path_entry.mask.check_ims_registered:"check if ims is registered ?"
         {
         };
         response_path_entry.mask.check_ims_domain:"check ims domain ?"
         {
         };
         response_path_entry.mask.check_roaming_type:"check roaming type ?"
         {
         };

         response_path_entry.value.atcmd_type:"atcmd type"
         {
         };
         response_path_entry.value.op_id:"operator ID"
         {
         };
         response_path_entry.value.mccmnc:"mccmnc"
         {
         };
         response_path_entry.value.sim_type:"sim type"
         {
         };
         response_path_entry.value.ims_registered:"ims registered status"
         {
         };
         response_path_entry.value.ims_domain:"ims domain"
         {
         };
         response_path_entry.value.roaming_type:"roaming type"
         {
         };

         response_path_entry.action.rsp_path:"response path type"
         {
         };
     };
/********************************************************************************************
* LID_NAME
*      NVRAM_EF_SSDS_PDN_PROFILE_LID
* DESCRIPTION
*      This LID is used to modify the type of PDN connection when selecting XCAP to implement 
*      the supplementary service for the specified scenario.
* INFORMATION
*      Can OTA Reset: Yes
*      Update Scenario: This LID will update when SIM ready,ie:power-on,plug in SIM card.
*********************************************************************************************/
LID_BIT VER_LID(NVRAM_EF_SSDS_PDN_PROFILE_LID) 
     nvram_ef_ssds_pdn_profile_struct *NVRAM_EF_SSDS_PDN_PROFILE_TOTAL
     {
         pdn_path_entry:"response path entry"
         {
         };
         pdn_path_entry.is_valid:"this entry valid?"
         {
         };

         pdn_path_entry.mask.check_atcmd_type:"check atcmd type ?"
         {
         };
  
         pdn_path_entry.mask.check_opid:"check operator ID ?"
         {
         };
         pdn_path_entry.mask.check_mccmnc:"check mccmnc ?"
         {
         };
         pdn_path_entry.mask.check_sim_type:"check sim type ?"
         {
         };
         pdn_path_entry.mask.check_ims_registered:"check if ims is registered ?"
         {
         };
         pdn_path_entry.mask.check_ims_domain:"check ims domain ?"
         {
         };
         pdn_path_entry.mask.check_roaming_type:"check roaming type ?"
         {
         };
         pdn_path_entry.mask.check_roaming_setting:"check roaming setting ?"
         {
         };
         pdn_path_entry.mask.check_data_setting:"check mobile data setting ?"
         {
         };

         pdn_path_entry.value.atcmd_type:"atcmd type"
         {
         };
         pdn_path_entry.value.op_id:"operator ID"
         {
         };
         pdn_path_entry.value.mccmnc:"mccmnc"
         {
         };
         pdn_path_entry.value.sim_type:"sim type"
         {
         };
         pdn_path_entry.value.ims_registered:"ims registered status"
         {
         };
         pdn_path_entry.value.ims_domain:"ims domain"
         {
         };
         pdn_path_entry.value.roaming_type:"roaming type"
         {
         };
         pdn_path_entry.value.roaming_setting:"roaming setting"
         {
         };
         pdn_path_entry.value.data_setting:"mobile data setting"
         {
         };

         pdn_path_entry.action.pdn_path:"pdn path type"
         {
         };
          pdn_path_entry.action.pdn_rat_type:"pdn rat type"
         {
         };
    };
/********************************************************************************************
* LID_NAME
*      NVRAM_EF_SSDS_PDN_FAIL_PROFILE_LID
* DESCRIPTION
*      This LID is used to modify the rule of supplementary sevice domain selection after 
*      establishing PDN connection fail for the specified scenario.
* INFORMATION
*      Can OTA Reset: Yes
*      Update Scenario: This LID will update when SIM ready,ie:power-on,plug in SIM card.
*********************************************************************************************/
LID_BIT VER_LID(NVRAM_EF_SSDS_PDN_FAIL_PROFILE_LID) 
     nvram_ef_ssds_pdn_fail_profile_struct *NVRAM_EF_SSDS_PDN_FAIL_PROFILE_TOTAL
     {
	 };
#else
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
END_NVRAM_DATA
#endif	/*GEN FOR PC*/

#ifdef __cplusplus
}
#endif

#endif  /* !NVRAM_NOT_PRESENT */
#endif  /* __SSDS_NVRAM_EDITOR_H__ */

