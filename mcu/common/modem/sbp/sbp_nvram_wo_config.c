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
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/
 
#include "kal_general_types.h"
#include "sbp_public_utility.h"
#include "kal_public_api.h"
#include "nvram_interface.h"
#include "nvram_data_items.h"
#include "nvram_enums.h"
#include "nvram_editor_data_item.h"
#include "custom_wo_config.h"
#include "wo_msgid.h"
#include "md_sap.h"

#if UNIT_TEST
#define SBP_RECONFIGURE_SAP     DUMMY_SAP
#else
#define SBP_RECONFIGURE_SAP     L4C_ME_SAP
#endif /* UNIT_TEST*/


extern sim_interface_enum l4c_gemini_get_actual_sim_id(sim_interface_enum simId);

 /*****************************************************************************
  * FUNCTION
  *  nvram_custom_config_wo_profile
  * DESCRIPTION
  *  Pre-process nvram data items for WO PROFILE at customer function.
  *  User can pre-process nvram data items using NVRAM external API here.
  *  nvram_external_write_data()
  *  nvram_external_read_data()
  * PARAMETERS
  *  sbp_id
  *  is_in_dynamic_sbp (not used)
  *  imsi
  *  ps_id
  * RETURNS
  *  KAL_TRUE
  *****************************************************************************/
kal_bool nvram_custom_config_wo_profile(sbp_reconfig_custom_param_struct *param_ptr)
{
#ifndef __L1_STANDALONE__
    wo_dsbp_reconfigure_ind_struct *p_ind;
    sap_type sap_id = SBP_RECONFIGURE_SAP;

    if (!param_ptr) {
        return KAL_FALSE;
    }

    p_ind = (wo_dsbp_reconfigure_ind_struct *)construct_local_para
                    (sizeof(wo_dsbp_reconfigure_ind_struct), TD_RESET);
    if (!p_ind) {
        return KAL_FALSE;
    }
    p_ind->trans_id = param_ptr->trans_id;
    p_ind->sbp_id = param_ptr->sbp_id;
    kal_snprintf(p_ind->mcc, sizeof(p_ind->mcc), "%s", param_ptr->mcc);
    kal_snprintf(p_ind->mnc, sizeof(p_ind->mnc), "%s", param_ptr->mnc);

    custom_wo_cfg_get(&p_ind->cfg, param_ptr->ps_id, param_ptr->sbp_id,
           (const kal_char *)param_ptr->mcc, (const kal_char *)param_ptr->mnc);

#if defined(__SENSITIVE_DATA_MOSAIC__) && defined(__MTK_TARGET__)
    sap_id = WO_USER_SENSITIVE_SAP;
    kal_set_sensitive_buff((local_para_struct *)p_ind);   /* flag sensitive buffer */
#endif
    msg_send6(kal_get_active_module_id(),
              MOD_WO + param_ptr->ps_id,
              sap_id,
              MSG_ID_WO_DSBP_RECONFIGURE_IND,
              (local_para_struct *)p_ind,
              NULL);
#endif
    return KAL_TRUE;
}
