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
 * sbp_task.c
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description:
 * ------------
 *   This file is intends for ...
 *
 * Author:
 * -------
 * -------
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
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

/********************************************************************************
*  Copyright Statement:
*  --------------------
*
*  This product has been developed using a protocol stack
*  developed by Sasken Communication Technologies Limited.
*
********************************************************************************/

#include "syscomp_config.h"
#include "task_config.h"      	/* Task creation */
#include "kal_public_defs.h"

#include "l4_msgid.h"
#include "dhl_trace.h"
#include "l4_trc.h"

#include "ps_public_enum.h"
#include "ps_public_struct.h"
#include "sim_exported_enum.h"

#include "sbp_public_utility.h"
#include "md_sap.h"

extern sbp_reconfigure_module_info_struct *sbp_get_sbp_reconfigure_mod_tbl();
extern kal_uint8 sbp_get_num_of_sbp_reconfigure_mod_tbl();
extern kal_bool nvram_custom_config_sbp(sbp_reconfig_custom_param_struct *param_ptr);

#ifndef __MTK_TARGET__
kal_bool sbp_reset(void)
{
    return KAL_TRUE;
}
#endif

kal_bool sbp_init(void)
{
    return KAL_TRUE;
}

void sbp_dsbp_reconfigure_req_hdlr(ilm_struct *ilm_ptr)
{
    kal_uint8 ps_id;
    kal_uint8 total_mod;
    sbp_reconfigure_module_info_struct *module_tbl;
    l4c_sbp_dsbp_reconfigure_req_struct *req_ptr;
    l4c_me_reconfig_enum type = RECONFIG_DSBP_CHANGE;
    kal_uint32 i;
    l4c_sbp_dsbp_reconfigure_cnf_struct *cnf_ptr;

    ps_id = ilm_ptr->dest_mod_id - MOD_SBP;
    req_ptr = (l4c_sbp_dsbp_reconfigure_req_struct*) ilm_ptr->local_para_ptr;

    if (req_ptr->is_all == KAL_TRUE)
        type |= RECONFIG_DSBP_CHANGE_ALL;

    module_tbl = sbp_get_sbp_reconfigure_mod_tbl();
    total_mod = sbp_get_num_of_sbp_reconfigure_mod_tbl();
    
    if (req_ptr->is_all)
    {
        nvram_custom_config_sbp(&req_ptr->sbp_parameters);
    }
    
    for (i=0; i<total_mod; i++)
    {

#ifndef __L1_STANDALONE__
        kal_brief_trace(TRACE_INFO, INFO_SBP_RECONFIGURE_TBL, i, module_tbl[i].mod_id, 
                            module_tbl[i].reconfig_type, module_tbl[i].gemini_check);
#endif
                            
        /* Only handle RECONFIG_IMS_CHANGE type */
        if ((module_tbl[i].reconfig_type & type) == 0)
        {
            continue;
        }

        /* Check if Gemini module and right protocol id */
        if ((module_tbl[i].gemini_check & CFG_MASK_MOD) == CFG_SINGLE_MOD)
        {
            if (ps_id != PROTOCOL_1)
            {
                continue;
            }
        }
        // Check the numbers of GEMINI_LTE that this module supports:
        else if ((module_tbl[i].gemini_check & CFG_MASK_MOD) == CFG_GEMINI_LTE_MOD)
        {
            if (ps_id >= MAX_LTE_NUM)
        {
            continue;
        }
        }
        /*else if (((module_tbl[i].gemini_check & CFG_C2K_MOD) == 0) &&
            (ps_id != ValCurrentActiveSimIndex()))
        {
            continue;
        }*/

        if (module_tbl[i].custom_func_ptr != NULL)
        {
            module_tbl[i].custom_func_ptr(&(req_ptr->sbp_parameters));
        }

    }

    // send cnf
    cnf_ptr = (l4c_sbp_dsbp_reconfigure_cnf_struct *)    
            construct_local_para(sizeof(l4c_sbp_dsbp_reconfigure_cnf_struct), TD_RESET);
    cnf_ptr->is_all = req_ptr->is_all;

    msg_send5(ilm_ptr->dest_mod_id,
              MOD_L4C + ps_id,
              L4C_ME_SAP,
              MSG_ID_L4C_SBP_DSBP_RECONFIGURE_CNF,
              (local_para_struct *)cnf_ptr);

}


void sbp_task_main( task_entry_struct *task_entry_ptr);

kal_bool sbp_create(comptask_handler_struct **handle)
{
    static const comptask_handler_struct l4_handler_info =
    {
        sbp_task_main,       /* task entry function */
        sbp_init,            /* task initialization function */
    #ifndef __MTK_TARGET__
        sbp_reset                /* task reset handler */
    #else
        NULL
    #endif
    };

    *handle = (comptask_handler_struct *)&l4_handler_info;
    return KAL_TRUE;
}

void sbp_task_main(task_entry_struct *task_entry_ptr)
{
    ilm_struct current_ilm;

    while (1)
    {
        msg_receive_extq(&current_ilm);

        //stack_set_active_module_id (my_index, current_ilm.dest_mod_id);
        kal_set_active_module_id(current_ilm.dest_mod_id);

        // handle ILM
        if (current_ilm.msg_id == MSG_ID_L4C_SBP_DSBP_RECONFIGURE_REQ)
        {
            sbp_dsbp_reconfigure_req_hdlr(&current_ilm);
        }

        destroy_ilm(&current_ilm);
    }

}


