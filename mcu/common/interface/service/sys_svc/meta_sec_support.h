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
 *   Meta_sec_support.h
 *
 * Project:
 * --------
 *   UMOLYE
 *
 * Description:
 * ------------
 *   The source is for META security support
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
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/
 
#ifndef __META_SEC_SUPPORT__
#define __META_SEC_SUPPORT__

#define META_SLA_RND_LEN	16
#define META_SLA_ENC_RND_LEN	256   //RSA 2048

typedef enum{
    META_SLA_ERROR_NONE = 0x0000,
    META_SLA_GEN_END_ERR = 0x0001,    
    META_SLA_GET_SLA_KEY_ERR = 0x0002,    
    META_SLA_RSA_VERIFY_ERR = 0x0003,
    META_SLA_DEC_RND_LEN_ERR = 0x0004,
    META_SLA_DEC_RND_COMPARE_ERR = 0x0005,
    META_SLA_RND_BUF_LEN_ERR = 0x0006,
    META_SLA_RND_ENC_LEN_ERR = 0x0007,
    META_SLA_RND_ENC_BUF_LEN_ERR = 0x0008,
    META_SLA_RSA_ENCRYPT_ERR = 0x0009,
    META_SLA_ENC_RND_LEN_ERR = 0x000A,
}META_SLA_ERROR_E;

kal_uint32 MetaSLA_Get_Sec_Err_Code(void);

kal_bool MetaSLA_Is_Enabled(void);

kal_bool MetaSLA_Is_Verified(void);

kal_uint32 MetaSLA_Rnd_Gen(kal_uint8 *rnd_buf, kal_uint32 rnd_buf_len);

kal_uint32 MetaSLA_Rnd_Verify(kal_uint8 *rnd_enc, kal_uint32 rnd_enc_len);

#endif /*__META_SEC_SUPPORT__*/
