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
 *   FT NVRAM security mechanism
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
/*************************************************************************
 * FT header
 *************************************************************************/
#if defined(__NVRAM_SECRET_DATA__)
#include "ft_msg.h"
#include "ft_private.h"
#include "ft_fnc_nvram.h"
#include "ft_fnc_misc.h"
#include "svc_sap.h"
#include "nvram_msgid.h"
#include "ft_msgid.h"
#include "ft_fnc_mmrf.h"
/**************************************************************************
 * NVRAM header
 *************************************************************************/
#include "nvram_defs.h"
#include "nvram_enums.h"
#include "nvram_interface.h"
#include "nvram_data_items.h"
#include "nvram_struct.h"
#include "rc4.h"
/*******************************************************************************
 * FUNCTION
 *   FT_NvramSec_WriteNvramHandler()
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
kal_uint16  g_u2_ft_nvram_pdu_length = 0;
kal_uint8   *p_g_u1_ft_nvram_pdu_ptr = NULL;
peer_buff_struct *p_g_pbs_ft_nvram = NULL;
void FT_NvramSec_WriteNvramHandler(ft_nvram_write_req_struct_T* req, peer_buff_struct* peer_buff, kal_uint8 accessId)
{
    //ilm_struct  ilm_ptr;
    //nvram_write_req_struct *nvram_ptr_loc_para;
    kal_uint16             pdu_length;
    kal_uint8              *pdu_ptr = get_peer_buff_pdu( peer_buff, &pdu_length );
    kal_bool  bPassCheck = KAL_FALSE;
    kal_int32 err_code = 0xFE;
    kal_uint8 key[256]; // at most 256 bytes
    kal_int32 real_key_len;
    real_key_len = custom_nvram_get_database_key(key, sizeof(key));
    if(req->msg_num == 2 && real_key_len >0) // we must wait until we collect all
    {
        if(req->msg_idx == 0) // allocate a peer buffer to store it.
        {
            if(p_g_pbs_ft_nvram != NULL) // free previous buffer
            {
                free_peer_buff(p_g_pbs_ft_nvram);
                p_g_pbs_ft_nvram = NULL;
            }
            // allocate a new peer buffer
            if( NULL != (p_g_pbs_ft_nvram=construct_peer_buff(pdu_length, 0, 0, TD_CTRL)) )
            {
                p_g_u1_ft_nvram_pdu_ptr = get_peer_buff_pdu( p_g_pbs_ft_nvram, &g_u2_ft_nvram_pdu_length );
                kal_mem_cpy(p_g_u1_ft_nvram_pdu_ptr, pdu_ptr , pdu_length);
                p_g_pbs_ft_nvram->pdu_len = pdu_length;
            }
            return; // wait for next message
        }
        else // the second message with encrpted data
        {
            kal_int32 i;
            RC4_CNXT cnxt;
            kal_uint8 *output_data = (kal_uint8*) get_ctrl_buffer(g_u2_ft_nvram_pdu_length);  // since at most 2k bytes
            if(p_g_u1_ft_nvram_pdu_ptr!=NULL)
            {
                // get the key
                //real_key_len =  custom_nvram_get_database_key(key, sizeof(key));
                if(real_key_len >0) // get the key
                {
                    // deciphered the input data
                    che_rc4_set_key((RC4_CNXT *)&cnxt, (kal_uint32)real_key_len, (kal_uint8 *)key);
                    che_rc4((RC4_CNXT *)&cnxt, p_g_u1_ft_nvram_pdu_ptr , g_u2_ft_nvram_pdu_length, key, real_key_len, CHE_MODE_NULL, output_data);
                    for(i=0; i<g_u2_ft_nvram_pdu_length; i++)
                    {
                        if(output_data[i] != pdu_ptr[i])
                        {
                            err_code = 0xFD;
                            break;
                        }
                    }
                    if(i == g_u2_ft_nvram_pdu_length)
                    {
                        bPassCheck = true;
                    }
                }
            }
            else
            {
                err_code = 0xFC;
            }
            free_ctrl_buffer(output_data);
        }
    }
    else
    {
        if(real_key_len == 0) // sec not ON
            bPassCheck = true;
    }
    if(!bPassCheck)
    {
        // invoke:
        nvram_write_cnf_struct  cnf_result;
        cnf_result.file_idx = req->file_idx;
        cnf_result.para = req->para;
        cnf_result.result = err_code;
        // allocate a peer buffer to stored the output data for debug
        FT_WriteTo_NVRAM_CNF(&cnf_result);
        return;
    }
    if(real_key_len >0 &&
            req->msg_num == 2 &&
            p_g_pbs_ft_nvram != NULL) // re-assign the pdu_ptr, and free the buffer
    {
        kal_mem_cpy(pdu_ptr, p_g_u1_ft_nvram_pdu_ptr,pdu_length);
        free_peer_buff(p_g_pbs_ft_nvram);
        p_g_pbs_ft_nvram = NULL;
    }
    /* Duplicate the message to MMRF for runtime update */
    FT_Mmrf_UpdateRuntimeHandler(peer_buff, req->file_idx, req->para);
    FT_Nvram_SendWriteCommandToNvram(peer_buff, req->file_idx, req->para, accessId, KAL_TRUE);
}
/*******************************************************************************
 * FUNCTION
 *   FT_NvramSec_ReadNvramHandler()
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
void FT_NvramSec_ReadNvramHandler(ft_nvram_read_req_struct_T* req, kal_uint8 accessId)
{
    //ilm_struct  ilm_ptr;
    //nvram_read_req_struct *ptrMsg;
    kal_uint8 key[256]; // at most 256 bytes
    kal_int32 real_key_len;
    kal_uint8 input_data[4];
    kal_uint8 output_data[4];
    kal_uint8 i;
    RC4_CNXT cnxt;
    kal_uint32 err_code = 0xFE;
    kal_bool bPassCheck = KAL_FALSE;
    real_key_len =  custom_nvram_get_database_key(key, sizeof(key));
    kal_mem_set(output_data, 0x0, sizeof(output_data));
    // make sure if the authenticaion pass
    if(req->ciphered_data_valid && real_key_len > 0 ) // the load need to be checked, and user send ciphered data
    {
        kal_mem_cpy(input_data, &(req->file_idx), 2);
        kal_mem_cpy(input_data+2, &(req->para), 2);
        // deciphered the input data
        che_rc4_set_key((RC4_CNXT *)&cnxt, (kal_uint32)real_key_len, (kal_uint8 *)key);
        che_rc4((RC4_CNXT *)&cnxt, input_data , 4, key, real_key_len, CHE_MODE_NULL, output_data);
        for(i=0; i<4; i++)
        {
            if(output_data[i] != req->ciphered_data[i])
            {
                err_code = 0xFD;
                break;
            }
        }
        if(i == 4)
            bPassCheck = KAL_TRUE;
    }
    else // ciphered data invalid
    {
        if(real_key_len == 0) // no need to checked
            bPassCheck = KAL_TRUE;
        else // need check, but user doesn't send data
            err_code = 0xFB;
    }
    if(!bPassCheck)
    {
        // invoke:
        kal_uint16    pdu_length_new = 0;
        kal_uint8   *pdu_ptr_new;
        peer_buff_struct *peer_buff_new;
        nvram_read_cnf_struct  cnf_result;
        cnf_result.file_idx = req->file_idx;
        cnf_result.para = req->para;
        cnf_result.result = err_code;
        cnf_result.access_id = 0;
        // allocate a peer buffer to stored the output data for debug

        if( NULL != (peer_buff_new=construct_peer_buff(4, 0, 0, TD_CTRL)) )
        {
            pdu_ptr_new = get_peer_buff_pdu( peer_buff_new, &pdu_length_new );
            kal_mem_cpy(pdu_ptr_new, output_data , 4);
            peer_buff_new->pdu_len = 4;
        }
        FT_ReadFrom_NVRAM_CNF(&cnf_result, peer_buff_new);
        return;
    }
    FT_Nvram_SendReadCommandToNvram(req->file_idx, req->para, accessId);
}
#endif // #if defined(__NVRAM_SECRET_DATA__)
