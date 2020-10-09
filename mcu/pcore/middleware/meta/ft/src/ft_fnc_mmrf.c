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
/*******************************************************************************
 *  Modification Notice:
 *  --------------------------
 *  This software is modified by MediaTek Inc. and the information contained
 *  herein is confidential. The software may not be copied and the information
 *  contained herein may not be used or disclosed except with the written
 *  permission of MediaTek Inc. (C) 2001
 *
 *******************************************************************************/

/*******************************************************************************
 * Filename:
 * ---------
 *   ft_fnc_mmrf.c
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description:
 * ------------
 *   Factory testing function for MMRF
 *
 * Author:
 * -------
 * -------
 *
 *==============================================================================
 *              HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
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
 *
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
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *==============================================================================
 *******************************************************************************/
/*************************************************************************
 * Include Statements for KAL
 *************************************************************************/
#include "kal_public_defs.h"
#include "kal_trace.h"
#include "svc_sap.h"
#include "md_mw_sap.h"
#include "mmrf_msgid.h"
#include "mmrf_msg_interface.h"
#include "ft_msgid.h"
/*************************************************************************
 * FT header
 *************************************************************************/
#include "ft_msg.h"
#include "ft_private.h"
#include "ft_fnc_nvram.h"
#include "nvram_defs.h"
#include "nvram_enums.h"
#include "nvram_interface.h"
#include "nvram_data_items.h"
#include "nvram_struct.h"
#include "ft_fnc_mmrf.h"
extern kal_eventgrpid MMRF_UPDATE_RUNTIME_EVENT;
/**
 * @param metaMessage the input message from META tool for MMRF test command processing
 */
void FT_Mmrf_Operation(ilm_struct* ptrMsg)
{
    ilm_struct mmrfMessage;
    FT_CONSTRUCT_CC_MSG(ptrMsg, &mmrfMessage);
    FT_SEND_MSG(MOD_FT, MOD_MMRF, FT_MMRF_SAP, MSG_ID_FT_TO_MMRF, &mmrfMessage);   
}
/**
 * Confirm message handler for MOD_ETSTM
 */
void FT_Mmrf_ConfirmHandler(ilm_struct* mmrfMessage)
{
    mmrftst_cnf_struct *ptrMsg;
    ptrMsg = (mmrftst_cnf_struct *)mmrfMessage->local_para_ptr;
    if(ptrMsg->type == MMRF_TEST_CMD_CHECK_IF_FUNC_EXIST)
    {
        FT_UTILITY_COMMAND_CNF  cnf;
        kal_mem_set(&cnf, '\0', sizeof(cnf));
        cnf.status = (ptrMsg->result==1)?FT_CNF_OK:FT_CNF_FAIL;
        cnf.result.CheckIfFuncExist.query_ft_msg_id = ptrMsg->header.ft_msg_id;
        cnf.result.CheckIfFuncExist.query_op_code = ptrMsg->param.checkIfFuncExist.query_op_code;
        FT_UTIL_SendCnf(&cnf, NULL);
        return;
    }
    FT_SEND_MSG_TO_PC(mmrfMessage);
}
void FT_MmrfCheckFunctionSupported(kal_uint32 query_op_code)
{
    ilm_struct ilm_ptr;
    mmrftst_req_struct *ptrMsg;	
    FT_ALLOC_OTHER_CC_MSG( &ilm_ptr, sizeof(mmrftst_req_struct) );
    // local parameter    
    ptrMsg = (mmrftst_req_struct *)ilm_ptr.local_para_ptr;
    ptrMsg->header.ft_msg_id = FT_MMRF_TEST_REQ_ID;  
    ptrMsg->type = MMRF_TEST_CMD_CHECK_IF_FUNC_EXIST;
    ptrMsg->param.checkIfFuncExist.query_op_code = (MMRfTestCmdType)query_op_code;
    FT_SEND_MSG(MOD_FT, MOD_MMRF, FT_MMRF_SAP, MSG_ID_FT_TO_MMRF, &ilm_ptr);
}
/**
 * Update Runtime Confirm message handler for MOD_MMRF
 */
void FT_Mmrf_UpdateRuntimeHandler(peer_buff_struct* peer_buff, kal_uint16 lid, kal_uint16 rid)
{
    ilm_struct ilm_ptr;
    kal_char* pduToMmrf;
    kal_char* pduInput;
    peer_buff_struct* peerToMmrf;
    mmrf_update_runtime_req_struct* mmrf_update_runtime_req;

    FT_ALLOC_OTHER_CC_MSG(&ilm_ptr, sizeof(mmrf_update_runtime_req_struct));
    /* set local parameter */
    mmrf_update_runtime_req = (mmrf_update_runtime_req_struct*)ilm_ptr.local_para_ptr;
    mmrf_update_runtime_req->nvramLid = lid;
    mmrf_update_runtime_req->record = rid;
    /* copy peer buffer */
    pduInput = get_peer_buff_pdu(peer_buff, NULL);
    peerToMmrf = construct_cc_non_cached_peer_buff(peer_buff->pdu_len, 0, 0, TD_RESET);
    pduToMmrf = get_peer_buff_pdu(peerToMmrf, NULL);
    kal_mem_cpy(pduToMmrf, pduInput, peer_buff->pdu_len);
    ilm_ptr.peer_buff_ptr = peerToMmrf;
    FT_SEND_MSG(MOD_FT, MOD_MMRF, FT_MMRF_SAP, MSG_ID_MMRF_UPDATE_RUNTIME_REQ, &ilm_ptr);
}
/**
 * Update Runtime Confirm message handler for MOD_MMRF
 */
void FT_Mmrf_UpdateRuntimeConfirmHandler(ilm_struct* _ilm)
{
    kal_set_eg_events(MMRF_UPDATE_RUNTIME_EVENT, 0x1, KAL_OR);
}
kal_bool FT_Mmrf_PollUpdateRuntimeReady()
{
    kal_uint32 ev;
    kal_sleep_task(1);
    if(kal_retrieve_eg_events(MMRF_UPDATE_RUNTIME_EVENT, 0x1, KAL_AND_CONSUME, &ev, 0) == KAL_NOT_PRESENT)
    {
        return KAL_FALSE;
    }
    return KAL_TRUE;
}
