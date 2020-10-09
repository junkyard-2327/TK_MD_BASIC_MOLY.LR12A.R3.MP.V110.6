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
 *   ft_fnc_nvram.c
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description:
 * ------------
 *   FT NVRAM operations
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
 *
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *==============================================================================
 *******************************************************************************/
#if defined(__MOD_NVRAM__) && !defined(NVRAM_NOT_PRESENT)
/*************************************************************************
 * FT header
 *************************************************************************/
#include "ft_msg.h"
#include "ft_private.h"
#include "ft_fnc_nvram.h"
#include "ft_fnc_misc.h"
#include "svc_sap.h"
#include "nvram_msgid.h"
#include "ft_msgid.h"
#include "ft_trace_def.h"
#include "ft_fnc_mmrf.h"
/**************************************************************************
 * NVRAM header
 *************************************************************************/
#include "nvram_defs.h"
#include "nvram_enums.h"
#include "nvram_interface.h"
#include "nvram_data_items.h"
#include "nvram_struct.h"
void FT_Nvram_SendWriteCommandToNvram(peer_buff_struct* peer_buff, kal_uint16 lid, kal_uint16 rid, kal_uint8 ftAccessId, kal_bool holdBufferForRelay)
{
    kal_uint8  *pdu_ptr;
    kal_uint16 pdu_length; 
    ilm_struct  ilm_ptr;
    nvram_write_cnf_struct *cnf_result_ptr;

    FT_ALLOC_OTHER_MSG(&ilm_ptr, sizeof( nvram_write_cnf_struct ));
    cnf_result_ptr = (nvram_write_cnf_struct *)ilm_ptr.local_para_ptr;
    pdu_ptr = get_peer_buff_pdu(peer_buff, &pdu_length);   
    cnf_result_ptr->file_idx = lid;
    cnf_result_ptr->para = rid;
    cnf_result_ptr->access_id = ftAccessId;
    
    /* call secure API  to access nvram item */
    cnf_result_ptr->result = nvram_external_secure_write_data(lid, rid, pdu_ptr, pdu_length, NULL);
    kal_trace(TRACE_FUNC, FT_NVRAM_CALL_WRITE_NVRAM_API, cnf_result_ptr->result);	
    
    if( holdBufferForRelay != KAL_TRUE)
    {
        free_peer_buff(peer_buff);
    }
    /* Check polling for MMRF runtime update */
    FT_SEND_MSG(MOD_FT, MOD_FT, PS_NVRAM_SAP, MSG_ID_NVRAM_WRITE_CNF, &ilm_ptr);
}
void FT_Nvram_SendReadCommandToNvram(kal_uint16 lid, kal_uint16 rid, kal_uint8 ftAccessId)
{
    nvram_read_cnf_struct  cnf_result;
    peer_buff_struct *peer_buff = NULL;
    kal_uint8  *pdu_ptr;
    kal_uint16 totalRID;
    kal_uint16 pdu_length; 

    cnf_result.file_idx = lid;
    cnf_result.para = rid;
    cnf_result.length = 0;
    cnf_result.access_id = ftAccessId;
    cnf_result.result = nvram_get_info(lid, & totalRID, &pdu_length);  
    if( NVRAM_ERRNO_SUCCESS == cnf_result.result )
    {
        if( NULL != (peer_buff=construct_peer_buff(pdu_length, 0, 0, TD_CTRL)) )
        {
            pdu_ptr = get_peer_buff_pdu(peer_buff, &pdu_length);  
            cnf_result.length = pdu_length;
            /* call secure API  to access nvram item */
            cnf_result.result = nvram_external_secure_read_data(lid, rid, pdu_ptr, pdu_length, NULL); 
        }
        else
        {
            cnf_result.result = 0xFA; 
        }
    }
    kal_trace(TRACE_FUNC, FT_NVRAM_CALL_READ_NVRAM_API, cnf_result.result);
	
    if ( NVRAM_ERRNO_SUCCESS != cnf_result.result )
    {
        cnf_result.length = 0;
        peer_buff = NULL;
        free_peer_buff(peer_buff);
		FT_Nvram_SendReadResponseToHost(&cnf_result, peer_buff, KAL_TRUE);
    }
    else
	{
		FT_Nvram_ReadNvramConfirmHandler(&cnf_result, peer_buff);
	}
}
/*******************************************************************************
 * FUNCTION
 *   FT_Nvram_WriteNvramHandler()
 *
 * DESCRIPTION
 *   Handle the write request of NVRAM
 *
 * CALLS
 *   None
 *
 * PARAMETERS
 *
 *
 * RETURNS
 *   None
 *
 * GLOBALS AFFECTED
 *   None
 *******************************************************************************/
void FT_Nvram_WriteNvramHandler(ft_nvram_write_req_struct_T* req, peer_buff_struct* peer_buff, kal_uint8 accessId)
{
    /* Duplicate the message to MMRF for runtime update */
    FT_Mmrf_UpdateRuntimeHandler(peer_buff, req->file_idx, req->para);
    FT_Nvram_SendWriteCommandToNvram(peer_buff, req->file_idx, req->para, accessId, KAL_TRUE);
}
/*******************************************************************************
 * FUNCTION
 *   FT_Nvram_ReadNvramHandler()
 *
 * DESCRIPTION
 *   Handle the read request of FT to NVRAM
 *
 * CALLS
 *   None
 *
 * PARAMETERS
 *
 *
 * RETURNS
 *   None
 *
 * GLOBALS AFFECTED
 *   None
 *******************************************************************************/
void FT_Nvram_ReadNvramHandler(ft_nvram_read_req_struct_T* req, kal_uint8 accessId)
{
    FT_Nvram_SendReadCommandToNvram(req->file_idx, req->para, accessId);
}
void FT_Nvram_SendReadResponseToHost(nvram_read_cnf_struct* nvramReadCnf, peer_buff_struct* nvramReadCnfPeerBuf, kal_bool holdBufferForRelay)
{
    ilm_struct    ilm_ptr;
    ft_nvram_read_cnf_struct_T *ft_cnf;

    kal_trace(TRACE_FUNC, FT_NVRAM_SEND_READ_RESPONSE_TO_HOST, holdBufferForRelay);
    FT_ALLOC_MSG(&ilm_ptr, sizeof(ft_nvram_read_cnf_struct_T));
    ft_cnf = (ft_nvram_read_cnf_struct_T *)ilm_ptr.local_para_ptr;
    ft_cnf->header.ft_msg_id = FT_NVRAM_READ_CNF_ID;
    ft_cnf->file_idx = nvramReadCnf->file_idx;
    ft_cnf->para = nvramReadCnf->para;
    /* Check the FILE index to SIM lock */
    if( nvram_test_lock() && (NVRAM_EF_SML_LID == nvramReadCnf->file_idx) )
    {
        ft_cnf->status = 0xFF;
        ilm_ptr.peer_buff_ptr = NULL;
        free_peer_buff(nvramReadCnfPeerBuf);
    }
    else
    {
        ft_cnf->status = nvramReadCnf->result;
        ilm_ptr.peer_buff_ptr = nvramReadCnfPeerBuf;
    }
    FT_SEND_MSG_TO_PC(&ilm_ptr);
}
/*******************************************************************************
 * FUNCTION
 *   FT_Nvram_ReadNvramConfirmHandler
 *
 * DESCRIPTION
 *   Handle the confirmation of reading
 *
 * CALLS
 *
 *
 * PARAMETERS
 *   local_para_struct * local_para_ptr, //( force to nvram_read_cnf_struct* cnf )
 *   peer_buff_struct * peer_buff_ptr
 *
 *
 * RETURNS
 *   None
 *
 * GLOBALS AFFECTED
 *   None
 *******************************************************************************/
void FT_Nvram_ReadNvramConfirmHandler(nvram_read_cnf_struct* nvramReadCnf, peer_buff_struct* nvramReadCnfPeerBuf)
{
    ft_gl_token = ft_gl_nvram_token;
    /* Handle Cal Data Integrity check OP (Start Record) */
    if( KAL_TRUE == FT_Misc_IsCalIntegrityNvramOp(nvramReadCnf->access_id, nvramReadCnf->file_idx))
    {
        FT_Misc_CalDataInitBufferFromNvramResponseHandler(nvramReadCnf, nvramReadCnfPeerBuf);
		free_peer_buff(nvramReadCnfPeerBuf);
        return;
    }
    FT_Nvram_SendReadResponseToHost(nvramReadCnf, nvramReadCnfPeerBuf, KAL_TRUE);
}
void FT_Nvram_SendWriteResponseToHost(nvram_write_cnf_struct* nvramWriteCnf)
{
    ilm_struct  ilm_ptr;
    ft_nvram_write_cnf_struct_T *ptrMsg ;

    kal_trace(TRACE_FUNC, FT_NVRAM_SEND_WRITE_RESPONSE_TO_HOST);
    FT_ALLOC_MSG(&ilm_ptr, sizeof(ft_nvram_write_cnf_struct_T));
    ptrMsg = (ft_nvram_write_cnf_struct_T *)ilm_ptr.local_para_ptr;
    ptrMsg->header.ft_msg_id = FT_NVRAM_WRITE_CNF_ID;
    ptrMsg->file_idx = nvramWriteCnf->file_idx;
    ptrMsg->para = nvramWriteCnf->para;
    ptrMsg->status = nvramWriteCnf->result;
    FT_SEND_MSG_TO_PC(&ilm_ptr);
}
/*******************************************************************************
 * FUNCTION
 *   FT_Nvram_WriteNvramConfirmHandler
 *
 * DESCRIPTION
 *   Handle the confirmation of writting
 *
 * CALLS
 *
 *
 * PARAMETERS
 *
 * RETURNS
 *   None
 *
 * GLOBALS AFFECTED
 *   None
 *******************************************************************************/
void FT_Nvram_WriteNvramConfirmHandler(nvram_write_cnf_struct* nvramWriteCnf)
{
    if(nvramWriteCnf->result == 0)
    {
        FT_Misc_CalDataRecordItemProcess(nvramWriteCnf->file_idx, nvramWriteCnf->para);
    }
    FT_Nvram_SendWriteResponseToHost(nvramWriteCnf);
}
kal_bool FT_Nvram_IsModNvramRespnose(ilm_struct* ilm_ptr)
{
    if(ilm_ptr->msg_id == MSG_ID_NVRAM_WRITE_CNF ||
            ilm_ptr->msg_id == MSG_ID_NVRAM_CREATE_IMAGE_CNF ||
            ilm_ptr->msg_id == MSG_ID_NVRAM_VERIFY_IMAGE_CNF ||
            ilm_ptr->msg_id == MSG_ID_NVRAM_RESET_CNF ||
            ilm_ptr->msg_id == MSG_ID_NVRAM_WRITE_IMEI_CNF ||
            ilm_ptr->msg_id == MSG_ID_NVRAM_SET_LOCK_CNF ||
            ilm_ptr->msg_id == MSG_ID_NVRAM_SDS_CNF ||
            ilm_ptr->msg_id == MSG_ID_NVRAM_BIN_REGION_CNF)
    {
        return KAL_TRUE;
    }
    else
    {
        return KAL_FALSE;
    }
}
#endif // #if defined(__MOD_NVRAM__) && !defined(NVRAM_NOT_PRESENT)
