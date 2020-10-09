#if !defined(__L4_TASK_DISABLE__) && !defined(L4_NOT_PRESENT) 
/*************************************************************************
* Include Statements for KAL
 *************************************************************************/
#include "kal_public_defs.h"
#include "md_sap.h"
#include "tst_msgid.h"
#include "ft_msgid.h"
#include "ps_public_l4_msgid.h"
/*************************************************************************
 * FT header
 *************************************************************************/
#include "ft_msg.h"
#include "ft_private.h"
#include "ft_fnc_l4.h"
/**
 * @param metaMessage and MOD_L4C  the input message for L4 AT test command processing
 */
void FT_L4_Operation(ilm_struct* ptrMsg)
{
    ilm_struct l4Message;

    if(MOD_L4C == ptrMsg->src_mod_id)
    {
        switch (ptrMsg->msg_id)
        {
            case MSG_ID_FT_ENTER_FACTORY_MODE_CNF:
	        {
                FT_L4_ATCMD_CNF *ptrCnfMsg;
                FT_ALLOC_MSG(&l4Message, sizeof(FT_L4_ATCMD_CNF));
                ptrCnfMsg = (FT_L4_ATCMD_CNF *)l4Message.local_para_ptr;
                ptrCnfMsg->header.ft_msg_id = FT_L4_ATCMD_CNF_ID;
                ptrCnfMsg->type = 1;
                ptrCnfMsg->status = FT_CNF_OK;
                FT_SEND_MSG_TO_PC(&l4Message);
                break;
            }
            case MSG_ID_FT_ENTER_NORMAL_MODE_CNF:
            {
                FT_L4_ATCMD_CNF *ptrCnfMsg;
		        FT_ALLOC_MSG(&l4Message, sizeof(FT_L4_ATCMD_CNF));
                ptrCnfMsg = (FT_L4_ATCMD_CNF *)l4Message.local_para_ptr;
                ptrCnfMsg->header.ft_msg_id = FT_L4_ATCMD_CNF_ID;
                ptrCnfMsg->type = 0;
                ptrCnfMsg->status = FT_CNF_OK;
                FT_SEND_MSG_TO_PC(&l4Message);
                break;
            }
            /* FT not in switch mode broadcast list
			case MSG_ID_L4C_ENTER_FACTORY_MODE_REQ:
            {
                l4Message.local_para_ptr = NULL;
                l4Message.peer_buff_ptr = NULL;
                FT_SEND_MSG(MOD_FT, MOD_L4C, L4C_META_SAP, MSG_ID_L4C_ENTER_FACTORY_MODE_CNF, &l4Message); 
                break;
            }*/
        }
    }
    else
    {
        FT_L4_ATCMD_REQ *ptrLocalMsg;
        ptrLocalMsg = (FT_L4_ATCMD_REQ *)ptrMsg->local_para_ptr;
        if(FT_L4_ATCMD_REQ_ID == ptrLocalMsg->header.ft_msg_id)
        {
            l4Message.local_para_ptr = NULL;
            l4Message.peer_buff_ptr = NULL;
            if(ptrLocalMsg->type == 1)
            {
                FT_SEND_MSG(MOD_FT, MOD_L4C, L4C_META_SAP,  MSG_ID_FT_ENTER_FACTORY_MODE_REQ, &l4Message);
            }
            else if(ptrLocalMsg->type == 0)
            {
                FT_SEND_MSG(MOD_FT, MOD_L4C, L4C_META_SAP,  MSG_ID_FT_ENTER_NORMAL_MODE_REQ, &l4Message);
            }
        }
    }
}
#endif // #if !defined(__L4_TASK_DISABLE__) && !defined(L4_NOT_PRESENT) 

