/*****************************************************************************
 *
 * Filename:
 * ---------
 *   ft_fnc_custom.c
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description:
 * ------------
 *  Misc Function
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
 *
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
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/
 
/*************************************************************************
 * Include Statements for KAL
 *************************************************************************/
#include "kal_public_defs.h" //MSBB change #include "stack_common.h"
#include "kal_public_defs.h" //MSBB change #include "stack_msgs.h"
#include "md_mw_sap.h"
#include "svc_sap.h"
#include "ft_msgid.h"
#include "nvram_msgid.h"
#ifdef __MTK_TARGET__
#include <stdio.h>
#endif
/*************************************************************************
 * Include Statements for MAUI
 *************************************************************************/
#include "ftc_msg.h"
#include "ft_private.h"
#include "kal_public_api.h"
#include "kal_general_types.h"
#include "kal_public_defs.h"
void FT_Custom_Operation(ilm_struct *ptrMsg)
{
    ilm_struct        ilm_ptr;
    FT_CUSTOMER_REQ  *p_req = (FT_CUSTOMER_REQ *)ptrMsg->local_para_ptr;
    if(ptrMsg->peer_buff_ptr == NULL)
    {
        return;
    }
    switch(p_req->type)
    {
        case FT_CUSTOMER_OP_BASIC:
        {
            FT_ALLOC_OTHER_MSG(&ilm_ptr, sizeof(ftc_basic_req_struct));
            ilm_ptr.peer_buff_ptr = ptrMsg->peer_buff_ptr;
            /* hold this peer buffer so that we don't need to duplicate the buffer */
            hold_peer_buff(ptrMsg->peer_buff_ptr);
            FT_SEND_MSG(MOD_FT, MOD_FTC, FT_FTC_SAP , (msg_type)MSG_ID_FTC_BASIC_REQ, &ilm_ptr);
            break;
        }
        default:
            break;
    } 
}
void FT_Handle_FTC_CNF(ilm_struct *ptrMsg)
{
    ilm_struct		ilm_ptr;
    FT_CUSTOMER_CNF  *ptrMsg2;
    switch (ptrMsg->msg_id)
    {
        case MSG_ID_FTC_BASIC_CNF:
        {
            ftc_basic_cnf_struct *tmp_local_para = NULL;
            tmp_local_para = (ftc_basic_cnf_struct*)ptrMsg->local_para_ptr;

            FT_ALLOC_MSG(&ilm_ptr ,sizeof(FT_CUSTOMER_CNF));

            ilm_ptr.peer_buff_ptr = ptrMsg->peer_buff_ptr;
            ptrMsg2 = (FT_CUSTOMER_CNF*)ilm_ptr.local_para_ptr;  

            ptrMsg2->header.ft_msg_id = FT_CUSTOM_CNF_ID;
            ptrMsg2->type = FT_CUSTOMER_OP_BASIC; 
            ptrMsg2->status = tmp_local_para->status;
            break;
        }
        default:
            return;
    }
    FT_SEND_MSG_TO_PC(&ilm_ptr);
}
