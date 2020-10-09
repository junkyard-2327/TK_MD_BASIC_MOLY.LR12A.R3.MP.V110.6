/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2015
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
 * Filename:
 * ---------
 * qmu_bm_common.h
 *
 * Project:
 * --------
 * UMOLY
 *
 * Description:
 * ------------
 * QMU BM common definition header file.
 *
 * Author:
 * -------
 * -------
 *   
 *
 *============================================================================
 *             HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *----------------------------------------------------------------------------
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 *----------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

#ifndef QMU_BM_COMMON_H
#define QMU_BM_COMMON_H

#include "kal_public_api.h"

/****************************************************************************
 * Type Definitions
 ****************************************************************************/

typedef struct _qbm_gpd qbm_gpd;

/****************************************************************************/
/*! @brief structure of GPD header.

    @note It only can be used on 32 bits CPU, this pointer implies kal_uint32 
          Declared as pointer is used for ICE debug easily.

    @since MOLY
*/
/****************************************************************************/
struct _qbm_gpd
{
    kal_uint8   flags;
    kal_uint8   chksum;
    kal_uint16  reserved1;
    qbm_gpd    *p_next;
    void       *p_data_tbd;
    kal_uint16  data_len;
    kal_uint8   ext_len;
    kal_uint8   reserved2;
};

/****************************************************************************
 * Exported Macros
 ****************************************************************************/

#define DES_FLAG_BIT_HWO  0x01
#define DES_FLAG_BIT_EOL  0x01
#define DES_FLAG_BIT_BDP  0x02
#define DES_FLAG_BIT_BPS  0x04
#define DES_FLAG_BIT_GPD  0x00
#define DES_FLAG_BIT_SPD1 0x08
#define DES_FLAG_BIT_SPD2 0x10
#define DES_FLAG_BIT_SPD3 0x18
#define DES_FLAG_BIT_PH   0x40
#define DES_FLAG_BIT_IOC  0x80

#define QBM_GET_GPD_PTR(_p) ((qbm_gpd*)(_p))

#define QBM_DES_SET_HWO(_p) \
          (QBM_GET_GPD_PTR(_p)->flags |= DES_FLAG_BIT_HWO)

#define QBM_DES_CLR_HWO(_p) \
          (QBM_GET_GPD_PTR(_p)->flags &= ~DES_FLAG_BIT_HWO)

#define QBM_DES_GET_HWO(_p) \
          (QBM_GET_GPD_PTR(_p)->flags & DES_FLAG_BIT_HWO)

#define QBM_DES_SET_BDP(_p) \
          (QBM_GET_GPD_PTR(_p)->flags |= DES_FLAG_BIT_BDP)

#define QBM_DES_CLR_BDP(_p) \
          (QBM_GET_GPD_PTR(_p)->flags &= ~DES_FLAG_BIT_BDP)

#define QBM_DES_GET_BDP(_p) \
          (QBM_GET_GPD_PTR(_p)->flags & DES_FLAG_BIT_BDP)

#define QBM_DES_SET_BPS(_p) \
          (QBM_GET_GPD_PTR(_p)->flags |= DES_FLAG_BIT_BPS)

#define QBM_DES_CLR_BPS(_p) \
          (QBM_GET_GPD_PTR(_p)->flags &= ~DES_FLAG_BIT_BPS)

#define QBM_DES_GET_BPS(_p) \
          (QBM_GET_GPD_PTR(_p)->flags & DES_FLAG_BIT_BPS)

#define QBM_DES_SET_PH(_p) \
          (QBM_GET_GPD_PTR(_p)->flags |= DES_FLAG_BIT_PH)

#define QBM_DES_CLR_PH(_p) \
          (QBM_GET_GPD_PTR(_p)->flags &= ~DES_FLAG_BIT_PH)

#define QBM_DES_GET_PH(_p) \
          (QBM_GET_GPD_PTR(_p)->flags & DES_FLAG_BIT_PH)

#define QBM_DES_SET_IOC(_p) \
          (QBM_GET_GPD_PTR(_p)->flags |= DES_FLAG_BIT_IOC)

#define QBM_DES_CLR_IOC(_p) \
          (QBM_GET_GPD_PTR(_p)->flags &= ~DES_FLAG_BIT_IOC)

#define QBM_DES_GET_IOC(_p) \
          (QBM_GET_GPD_PTR(_p)->flags & DES_FLAG_BIT_IOC)

#define QBM_DES_SET_EOL(_p) \
          (QBM_GET_GPD_PTR(_p)->flags |= DES_FLAG_BIT_EOL)

#define QBM_DES_CLR_EOL(_p) \
          (QBM_GET_GPD_PTR(_p)->flags &= ~DES_FLAG_BIT_EOL)

#define QBM_DES_GET_EOL(_p) \
          (QBM_GET_GPD_PTR(_p)->flags & DES_FLAG_BIT_EOL)

#define QBM_DES_SET_GPD(_p) \
          (QBM_GET_GPD_PTR(_p)->flags &= ~(DES_FLAG_BIT_SPD1|DES_FLAG_BIT_SPD2))

#define QBM_DES_SET_SPD1(_p) \
          (QBM_GET_GPD_PTR(_p)->flags &= ~(DES_FLAG_BIT_SPD2)); \
          (QBM_GET_GPD_PTR(_p)->flags |= DES_FLAG_BIT_SPD1 )

#define QBM_DES_SET_SPD2(_p) \
          (QBM_GET_GPD_PTR(_p)->flags &= ~(DES_FLAG_BIT_SPD1)); \
          (QBM_GET_GPD_PTR(_p)->flags |= DES_FLAG_BIT_SPD2 )

#define QBM_DES_SET_SPD3(_p) \
          (QBM_GET_GPD_PTR(_p)->flags |= DES_FLAG_BIT_SPD3 )

#define QBM_DES_CLR_PDT(_p) \
          (QBM_DES_SET_GPD(_p))
          
#define QBM_DES_GET_PDT(_p) \
          (QBM_GET_GPD_PTR(_p)->flags & (DES_FLAG_BIT_SPD1|DES_FLAG_BIT_SPD2))

#ifdef __ENABLE_QMU_CHECKSUM__
#define QBM_DES_SET_CHKSUM(_p, _chk) \
          (QBM_GET_GPD_PTR(_p)->chksum = (_chk))
#else
#define QBM_DES_SET_CHKSUM(_p, _chk)
#endif

#define QBM_DES_GET_CHKSUM(_p) \
          QBM_GET_GPD_PTR(_p)->chksum

#define QBM_DES_SET_ALLOW_LEN(_p, _len) \
          (QBM_GET_GPD_PTR(_p)->reserved1 = (kal_uint16)(_len))

#define QBM_DES_GET_ALLOW_LEN(_p) \
          (QBM_GET_GPD_PTR(_p)->reserved1)

#define QBM_DES_SET_NEXT(_p, _nxt)           \
          QBM_GET_GPD_PTR(_p)->p_next = (qbm_gpd*)(_nxt)

#define QBM_DES_GET_NEXT(_p) \
          (QBM_GET_GPD_PTR(_p)->p_next)

#define QBM_DES_SET_DATAPTR(_p, _dp)     \
          (QBM_GET_GPD_PTR(_p)->p_data_tbd = (kal_uint8*)(_dp))

#define QBM_DES_GET_DATAPTR(_p) \
          (QBM_GET_GPD_PTR(_p)->p_data_tbd)

#define QBM_DES_GET_DATALEN(_p) \
          QBM_GET_GPD_PTR(_p)->data_len

#define QBM_DES_SET_DATALEN(_p, _l) \
          QBM_GET_GPD_PTR(_p)->data_len = (kal_uint16)(_l)

#define QBM_DES_GET_EXTLEN(_p) \
          QBM_GET_GPD_PTR(_p)->ext_len

#define QBM_DES_SET_EXTLEN(_p, _l) \
          QBM_GET_GPD_PTR(_p)->ext_len = (_l)

#define QBM_DES_GET_EXT(_p) \
          ((kal_uint8*)(_p) + sizeof(qbm_gpd)) 

/****************************************************************************/
#endif /* QMU_BM_COMMON_H */

