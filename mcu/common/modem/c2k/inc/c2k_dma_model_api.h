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
 *  c2k_dma_model_api.h
 *
 * Project:
 * --------
 *   C2K
 *
 * Description:
 * ------------
 * C2K DMA hardware model api header file
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
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/
#ifndef _C2K_DMA_MODEL_API_H
#define _C2K_DMA_MODEL_API_H
 
#include  "kal_general_types.h"

/*-----------------**
** Register Access **
**-----------------*/

extern void hwd_write(kal_uint32 reg, kal_int16 data);
extern kal_int16 hwd_read(kal_uint32 reg);
extern void hwd_set_bit(kal_uint32 reg, kal_uint32 bit_mask);
extern void hwd_clear_bit(kal_uint32 reg, kal_uint32 bit_mask);

/* 32-Bit Register MACROS - used by USB */
extern void hwd_write_32(kal_uint32 reg, kal_int32 data);
extern kal_int32 hwd_read_32(kal_uint32 reg);
extern void hwd_set_bit_32(kal_uint32 reg, kal_uint32 bit_mask);
extern void hwd_reset_bit_32(kal_uint32 reg, kal_uint32 bit_mask);

/* 16-Bit Register MACROS  */
extern void hwd_write_16(kal_uint32 reg, kal_int16 data);
extern kal_int16 hwd_read_16(kal_uint32 reg);
extern void hwd_set_bit_16(kal_uint32 reg, kal_uint16 bit_mask);
extern void hwd_reset_bit_16(kal_uint32 reg, kal_uint16 bit_mask);

/* 8-Bit Register MACROS - used by EBI */
extern void hwd_write_8(kal_uint32 reg, kal_int8 data);
extern kal_int8 hwd_read_8(kal_uint32 reg);
extern void hwd_set_bit_8(kal_uint32 reg, kal_uint8 bit_mask);
extern void hwd_reset_bit_8(kal_uint32 reg, kal_uint8 bit_mask);

#endif  /* _C2K_DMA_MODEL_API_H */
