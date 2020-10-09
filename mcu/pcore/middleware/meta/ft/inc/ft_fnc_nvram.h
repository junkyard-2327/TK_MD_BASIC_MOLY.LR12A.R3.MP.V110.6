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
 *   ft_fnc_nvram.h
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description:
 * ------------
 *   FT NVRAM operation header file
 *
 * Author:
 * -------
 * -------
 *
 *==============================================================================
 * 				HISTORY
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
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *==============================================================================
 *******************************************************************************/

#ifndef _FT_FNC_NVRAM_H_
#define _FT_FNC_NVRAM_H_
#include "ft_msg.h"
#include "nvram_struct.h"
#ifdef	__cplusplus
extern "C" {
#endif

typedef void (*fp_nvram_read_handler_t)(ft_nvram_read_req_struct_T* req, kal_uint8 ftAccessId);
typedef void (*fp_nvram_read_confirm_handler_t)(nvram_read_cnf_struct*, peer_buff_struct*);
typedef void (*fp_nvram_write_handler_t)(ft_nvram_write_req_struct_T* req, peer_buff_struct* peer_buff, kal_uint8 ftAccessId);
typedef void (*fp_nvram_write_confirm_handler_t)(nvram_write_cnf_struct*);

extern fp_nvram_read_handler_t FT_ReadFrom_NVRAM;
extern fp_nvram_read_confirm_handler_t FT_ReadFrom_NVRAM_CNF;
extern fp_nvram_write_handler_t FT_WriteTo_NVRAM;
extern fp_nvram_write_confirm_handler_t FT_WriteTo_NVRAM_CNF;
void FT_Nvram_SendReadRequestToNvram(kal_uint16, kal_uint16, kal_uint8 accessId);
void FT_Nvram_ReadNvramHandler(ft_nvram_read_req_struct_T* req, kal_uint8 accessId);
void FT_NvramSec_ReadNvramHandler(ft_nvram_read_req_struct_T* req, kal_uint8 accessId);
void FT_Nvram_ReadNvramConfirmHandler(nvram_read_cnf_struct*, peer_buff_struct*);
void FT_Nvram_WriteNvramHandler(ft_nvram_write_req_struct_T* req, peer_buff_struct* peer_buff, kal_uint8 accessId);
void FT_NvramSec_WriteNvramHandler(ft_nvram_write_req_struct_T* req, peer_buff_struct* peer_buff, kal_uint8 accessId);
void FT_Nvram_WriteNvramConfirmHandler(nvram_write_cnf_struct*);

void FT_Nvram_SendReadResponseToHost(nvram_read_cnf_struct* nvramReadCnf, peer_buff_struct* nvramReadCnfPeerBuf, kal_bool holdBufferForRelay);
void FT_Nvram_SendWriteResponseToHost(nvram_write_cnf_struct* nvramWriteCnf);
kal_bool FT_Nvram_IsModNvramRespnose(ilm_struct* ilm_ptr);
void FT_Nvram_SendWriteCommandToNvram(peer_buff_struct* peer_buff, kal_uint16 lid, kal_uint16 rid, kal_uint8 ftAccessId, kal_bool holdBufferForRelay);
void FT_Nvram_SendReadCommandToNvram(kal_uint16 lid, kal_uint16 rid, kal_uint8 ftAccessId);

#define FT_NVRAM_ACCESS_ID_CAL_INTEGRITY_OP 0x1
#ifdef __cplusplus
}
#endif // #ifdef __cplusplus

#endif // #ifndef _FT_FNC_NVRAM_H_
