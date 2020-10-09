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
#include "custom_imc_config.h"
#include "imc_msgid.h"
#include "md_sap.h"

kal_uint32 ims_operator_code[MAX_SIM_NUM] = {0};
extern sim_interface_enum l4c_gemini_get_actual_sim_id(sim_interface_enum simId);

void imc_set_config(kal_uint32 op_id, sim_interface_enum sim_slot_id, kal_bool with_imsi_info, kal_uint8 imsi_mnc_len, kal_uint8 *mccmnc, kal_uint32 special_profile);

#if defined (__MOD_IMC__)
/*****************************************************************************
 * FUNCTION
 *  nvram_custom_config_ims_profile
 * DESCRIPTION
 *  Pre-process nvram data items for IMS PROFILE at customer function.
 *  User can pre-process nvram data items using NVRAM external API here.
 *  nvram_external_write_data()
 *  nvram_external_read_data()
 * PARAMETERS
 *  
 *  typedef struct {
 *      kal_uint32          sbp_id;
 *      kal_bool            is_in_dynamic_sbp;
 *      kal_uint8           imsi[9];
 *      protocol_id_enum    ps_id;
 *   }
 *  
 * RETURNS
 *  KAL_TRUE
 *****************************************************************************/
 kal_bool nvram_custom_config_ims_profile(sbp_reconfig_custom_param_struct *param_ptr)
 {
    kal_uint8  imsi_mnc_len = 0;
    kal_uint8  mccmnc[6] = {0};
    sim_interface_enum sim_slot_id;

    if (!param_ptr) {
        return KAL_FALSE;
    }

#ifdef __MULTIPLE_IMS_SUPPORT__
    sim_slot_id = l4c_gemini_get_actual_sim_id((sim_interface_enum)param_ptr->ps_id);
#else
    sim_slot_id = SIM1;
#endif

    imsi_mnc_len = (kal_uint8)strlen((char *)&param_ptr->mnc[0]);

    if(param_ptr->is_in_dynamic_sbp){
        imc_dsbp_reconfigure_req_struct *p_req;
       
        p_req = (imc_dsbp_reconfigure_req_struct *)construct_local_para
                        (sizeof(imc_dsbp_reconfigure_req_struct), TD_RESET);
        if (!p_req) {
            return KAL_FALSE;
        }
        p_req->sim_slot_id = sim_slot_id;
        p_req->sbp_id = param_ptr->sbp_id;
        p_req->is_in_dynamic_sbp = param_ptr->is_in_dynamic_sbp;
        p_req->imsi_mnc_len = imsi_mnc_len;
        p_req->mccmnc[0] = param_ptr->mcc[0];
        p_req->mccmnc[1] = param_ptr->mcc[1];
        p_req->mccmnc[2] = param_ptr->mcc[2];
        p_req->mccmnc[3] = param_ptr->mnc[0];
        p_req->mccmnc[4] = param_ptr->mnc[1];
        p_req->mccmnc[5] = param_ptr->mnc[2];

        msg_send6(kal_get_active_module_id(),
                  MOD_IMC + param_ptr->ps_id,
                  L4C_ME_SAP,
                  MSG_ID_IMC_DSBP_RECONFIGURE_REQ,
                  (local_para_struct *)p_req,
                  NULL);
    }
    else{
        imc_set_config(param_ptr->sbp_id, sim_slot_id, param_ptr->is_in_dynamic_sbp, imsi_mnc_len, &mccmnc[0], 0);
    }
    return KAL_FALSE;
 }
 #endif /* __MOD_IMC__ */
