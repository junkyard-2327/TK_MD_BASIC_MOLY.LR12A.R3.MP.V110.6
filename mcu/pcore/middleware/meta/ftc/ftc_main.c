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
 *   ftc_main.c
 *
 * Project:
 * --------
 *   Maui_Software
 *
 * Description:
 * ------------
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
 * removed!
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

/*************************************************************************
* Include Statements for KAL
 *************************************************************************/
#include "kal_public_defs.h" //MSBB change #include "stack_common.h"
#include "kal_public_defs.h" //MSBB change #include "stack_msgs.h"
#include "task_config.h"
#include "syscomp_config.h"
#include "md_mw_sap.h"
#include "ft_msgid.h"
/*************************************************************************
* Include Statements for MAUI
 *************************************************************************/
//MSBB remove #include "fctycomp_config.h"
#include "ft_msg_common.h"
#include "ftc_msg.h"
#include "ftc_private.h"
// added in RHR first round
#include "kal_public_defs.h" //MSBB change #include "stack_config.h"
#include "kal_general_types.h"
#include "kal_public_api.h"
#include "kal_public_defs.h"
/*************************************************************************
* Function declaration
 *************************************************************************/
void FTC_Task(task_entry_struct * task_entry_ptr);

//#pragma arm section zidata = "NONCACHEDZI",  rwdata = "NONCACHEDRW"
//#pragma arm section zidata, rwdata

/*************************************************************************
* FUNCTION
*  ft_create
*
* DESCRIPTION
*
* PARAMETERS
*
* RETURNS
*  None
*
* GLOBALS AFFECTED
*
*************************************************************************/
kal_bool
ftc_create(comptask_handler_struct **handle)
{
    static const comptask_handler_struct ftc_handler_info =
    {
        FTC_Task,  /* task entry function */
        NULL,  /* task initialization function */
        NULL   /* task configuration function */
    };
    *handle = (comptask_handler_struct *)&ftc_handler_info;
    return KAL_TRUE;
}
/*******************************************************************************
*
*  Local Functions
*
*******************************************************************************/
void FTC_ALLOC_MSG(ilm_struct* ilm_ptr, kal_uint16 size)
{
    ilm_ptr->local_para_ptr = NULL;
    ilm_ptr->peer_buff_ptr = NULL;
    if( 0 < size ) {
        if( NULL == (ilm_ptr->local_para_ptr=construct_local_para(size, TD_RESET)) ) {
            ASSERT(0); // assert it!
        }
    }
}
void FTC_SEND_MSG(module_type  src_mod,
                  module_type  dest_mod,
                  sap_type  sap,
                  msg_type  msg,
                  ilm_struct  *ilm_ptr)
{
    msg_send6(src_mod, dest_mod, sap, msg, ilm_ptr->local_para_ptr, ilm_ptr->peer_buff_ptr);
}
void FTC_DispatchMessage(ilm_struct* ptrMsg)
{
    if( (ptrMsg->src_mod_id == MOD_FT) )
    {
        if(ptrMsg->peer_buff_ptr == NULL)
        {
            return;
        }
        switch (ptrMsg->msg_id)
        {
            case MSG_ID_FTC_BASIC_REQ:
            {
                // do the echo operation (This is the sample code, please extend the customization in this switch case
                ftc_basic_cnf_struct *ftc_ptr_loc_para;
                ilm_struct  ilm_ptr;
                FTC_ALLOC_MSG(&ilm_ptr, sizeof(ftc_basic_cnf_struct));
                ftc_ptr_loc_para=(ftc_basic_cnf_struct *)(ilm_ptr.local_para_ptr);
                ftc_ptr_loc_para->status = FTC_CNF_OK;
                hold_peer_buff(ptrMsg->peer_buff_ptr);
                ilm_ptr.peer_buff_ptr = ptrMsg->peer_buff_ptr;
                FTC_SEND_MSG(MOD_FTC ,MOD_FT, FTC_FT_SAP, MSG_ID_FTC_BASIC_CNF, &ilm_ptr);
                break;
            }
            default:
                break;
        }
    }
    else if( (ptrMsg->src_mod_id == MOD_NVRAM) )
    {
    }
}
/*******************************************************************************
* FUNCTION
*   FT_Task
*
* DESCRIPTION
*   Entry point for the factory testing task. The function performs initialisation,
*   then sits in an infinite loop reading messages or reports and dispatching
*   them.
*
* CALLS
*
* PARAMETERS
*   None
*
* RETURNS
*   None
*
* GLOBALS AFFECTED
*   None
*******************************************************************************/
void FTC_Task(task_entry_struct * task_entry_ptr)
{
    ilm_struct current_ilm;
    while ( 1 )
    {
        msg_receive_extq(&current_ilm);
        FTC_DispatchMessage(&current_ilm);
        destroy_ilm(&current_ilm);
    }
}
