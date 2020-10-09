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
 * d2pm_public_defs.h
 *
 * Project:
 * --------
 * 
 *
 * Description:
 * ------------
 *   
 *
 * Author:
 * -------
 * 
 *
 *============================================================================
 *             HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
 * removed!
 * removed!
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

#ifndef __D2PM_PUBLIC_DEFS_H__
#define __D2PM_PUBLIC_DEFS_H__

#include "atcmd_enum.h"
#include "ddm_enum.h"

// Type definitions
typedef enum
{
    // a single CID or the final CID 
    D2PM_RES_NONE = -2, 
    D2PM_RES_FAIL = -1, 
    D2PM_RES_SUCC = 0, 
    // a subsequent CID
    D2PM_RES_FAIL_ABORT = 1, 
    D2PM_RES_SUCC_ABORT = 2, 
    D2PM_RES_FAIL_CONT = 3, 
    D2PM_RES_SUCC_CONT = 4, 
    // otherwise
    D2PM_RES_REJ = 5, 
    D2PM_RES_RETRY = 6, 
    D2PM_RES_MAX = 0x7FFFFFFF
}d2pm_res_enum;

typedef enum
{
    D2PM_AUTH_TYPE_NONE = 0, 
    D2PM_AUTH_TYPE_PAP = 1, 
    D2PM_AUTH_TYPE_CHAP = 2, 
    D2PM_AUTH_TYPE_PAP_CHAP = 3, 
}d2pm_auth_type_enum;

// Macro
#define D2PM_UNSOLICITED    (DDM_UNSOLICITED + 5566)
#define D2PM_INVAL_CID    (-1)
#define D2PM_MIN_CID    ((D2PM_INVAL_CID) + 1)
#define D2PM_MAX_CID    (10)
#define D2PM_INVAL_APN_IDX    (-1)
#define D2PM_NW_ASSIGNED_APN_IDX    (556600)

// Functions
// => Fundamental prototype
#define vl_bitmap_set(bitmap_ptr, size, bit_num)    ((size) < ((bit_num) >> 3) + 1 ? NULL : \
                                                     (*(((kal_uint8*)(bitmap_ptr)) + ((bit_num) >> 3)) |= (1 << ((bit_num) & 7)), (bitmap_ptr)))
#define vl_bitmap_reset(bitmap_ptr, size, bit_num)    ((size) < ((bit_num) >> 3) + 1 ? NULL : \
                                                       (*(((kal_uint8*)(bitmap_ptr)) + ((bit_num) >> 3)) &= ~(1 << ((bit_num) & 7)), (bitmap_ptr)))
#define vl_bitmap_get(bitmap_ptr, size, bit_num)    ((size) < ((bit_num) >> 3) + 1 ? 0 != 0 : \
                                                     ((*(((kal_uint8*)(bitmap_ptr)) + ((bit_num) >> 3)) & (1 << ((bit_num) & 7))) == 0 ? 0 != 0 : 0 == 0))
#define cid_bitmap_set(bitmap_ptr, size, cid)    ((cid) < D2PM_MIN_CID || (cid) > D2PM_MAX_CID || (size) < (((cid) - D2PM_MIN_CID) >> 3) + 1 ? NULL : \
                                                  (vl_bitmap_set((bitmap_ptr), (size), (cid) - D2PM_MIN_CID)))
#define cid_bitmap_reset(bitmap_ptr, size, cid)    ((cid) < D2PM_MIN_CID || (cid) > D2PM_MAX_CID || (size) < (((cid) - D2PM_MIN_CID) >> 3) + 1 ? NULL : \
                                                  (vl_bitmap_reset((bitmap_ptr), (size), (cid) - D2PM_MIN_CID)))
#define cid_bitmap_get(bitmap_ptr, size, cid)    ((cid) < D2PM_MIN_CID || (cid) > D2PM_MAX_CID || (size) < (((cid) - D2PM_MIN_CID) >> 3) + 1 ? 0 != 0 : \
                                                  (vl_bitmap_get((bitmap_ptr), (size), (cid) - D2PM_MIN_CID)))
#endif

