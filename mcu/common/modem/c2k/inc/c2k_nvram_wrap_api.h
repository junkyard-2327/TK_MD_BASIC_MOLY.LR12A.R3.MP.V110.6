/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2016
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
 * c2k_nvram_wrap_api.h
 *
 * Project:
 * --------
 *   93m
 *
 * Description:
 * ------------
 *     This file contains NVRAM WRAP API
 *
 * Author:
 * -------
 * 
 *
 *============================================================================*/


#ifndef __C2K_NVRAM_WRAP_API_H__
#define __C2K_NVRAM_WRAP_API_H__

#ifdef __cplusplus
extern "C"
{
#endif /* __cplusplus */ 

#include "kal_public_defs.h"


void nvram_external_msg_read_req(
                kal_uint16 file_idx,
                kal_uint16 record_index,
                kal_uint8 access_id,
                kal_uint16 rec_amount);

void nvram_external_msg_write_req(
                kal_uint16 file_idx,
                kal_uint16 record_index,
                kal_uint8 access_id,
                peer_buff_struct *peer_buf_ptr);

void nvram_external_msg_reset_req(
         kal_uint16 file_idx,
            kal_uint16 record_index,
            kal_uint16 rec_amount,
            kal_uint8 access_id);

void nvram_external_msg_reg_req(
            kal_uint16 file_idx,
            kal_uint16 record_index,
            kal_uint16 rec_amount);

void nvram_external_msg_dereg_req(
            kal_uint16 file_idx,
            kal_uint16 record_index,
            kal_uint16 rec_amount);

#ifdef __cplusplus
}
#endif 


#endif
