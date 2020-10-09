/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2012
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
 * Filename:
 * ---------
 *   qmu_bm_size.h
 *
 * Project:
 * --------
 *   MOLY
 *
 * Description:
 * ------------
 *
 *
 * Author:
 * -------
 * -------
 *   
 *
 *============================================================================
 *             HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
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
 * removed!
 *
 * removed!
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
 * removed!
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

/*
 * =====================================================================================
 *
 *       Filename:  qmu_bm_size.h
 *
 *    Description:  Each buffer type size. Defined as constant.
 *                  For user can put it into array.
 *                  Because in kal model, it don't prefer dynamic allocation.
 *
 *        Created:  2011/8/11 03:06:39
 *        Author:  mtk01641 (moja)
 * =====================================================================================
 */
 
#ifndef  QMU_BM_SIZE_INC
#define  QMU_BM_SIZE_INC
/****************************************************************************/

#include "kal_public_defs.h"
#include "ps_public_enum.h"
#include "qmu_bm_spd.h"

/****************************************************************************/

#define _QBM_MAX(_a, _b)   (((_a) > (_b)) ? (_a):(_b))

/****************************************************************************/

/* 
 * Because kal cache related api have alignment restriction.
 * Not convenient. So just export this API for user who is not sure the alignement.
 */
#if defined(__DYNAMIC_SWITCH_CACHEABILITY__)
#include "cache_sw.h"
#define QBM_CACHE_ALIGN          CPU_CACHE_LINE_BIT_OFFSET
#define QBM_CACHE_SIZE           CPU_CACHE_LINE_SIZE
#define QBM_CACHE_LINE_SIZE_MASK CPU_CACHE_LINE_SIZE_MASK
#else
#define QBM_CACHE_ALIGN 5
#define QBM_CACHE_SIZE  32
#define QBM_CACHE_LINE_SIZE_MASK ((1 << QBM_CACHE_ALIGN) - 1)
#endif

/* calculate nearest cache aligned size. */
#define QBM_SIZE_CACHE_ALIGN(_sz) (((_sz) + (QBM_CACHE_SIZE - 1)) & ~QBM_CACHE_LINE_SIZE_MASK)

/****************************************************************************/

#define QBM_HEAD_SIZE  (QBM_CACHE_SIZE)
#define TGPD_SZ        (16)
#define COMMON_EXT_LEN (QBM_CACHE_SIZE - TGPD_SZ)
#define EMBEDDED_BD_SZ (2*QBM_CACHE_SIZE)
#define QBM_SIZE_PD	   (QBM_HEAD_SIZE + TGPD_SZ)

/****************************************************************************/

/*! @brief define the MTU of HIF related buffers  */
#define QBM_HIF_MTU 	(3072)
#define QBM_HIF_MTU_MAX	(8188)

/****************************************************************************/

/* 
 * Reserve RX_EXT_LEN space before data 
 * So we can put the decompressed header on this space.
 * Note: the extension is after the embedded BD.
 */
#define QBM_NET_DL_EXT_LEN   (224)
#define QBM_NET_DL_DATA_LEN  (_QBM_MAX( 2080, QBM_SIZE_CACHE_ALIGN(QBM_HIF_MTU)))

/*! @brief define the maximal size of DHL SPD extention part.
    WITH CCCI + L2COPRO:  4 + (16 (CCCI) + 8(DHL) + 64(L2COPRO) + 4) * 16 = 1476bytes
    USB + L2COPRO: 4 + (8 + 64 + 4) * 16 = 1220 bytes
    MAX(1476, 1220) = 1476
*/
#define QBM_DHL_SPD_EXT_LEN    (1476)

/* 20120724 ian: QBM_TYPE_CCCI_COMM*/
#define QBM_CCCI_COMM_EXT_LEN  (128)
#define QBM_CCCI_COMM_DATA_LEN (3584)
#define QBM_IMS_DL_DATA_LEN    (4096)

#define QBM_TTY_XXX_DATA_LEN       (1024)
#define QBM_GPD_BD_TST_DATA_LEN    (2048)
#define QBM_GPD_BD_TST_EXT_LEN     (256)

#define QBM_ACM_DATA_LEN           (64)

#define QBM_NET_UL_DATA_LEN        (1536 + QBM_CACHE_SIZE)
#define QBM_NET_UL_SHRD_EXT_LEN    (128)
#define QBM_NET_UL_SHRD_DATA_LEN   (1536 + QBM_CACHE_SIZE)
#define QBM_MSD_DATA_LEN           (1024)

/****************************************************************************/

/*---------- Each foramt size constant ----------*/
#define _QBM_SIZE_TGPD          (QBM_SIZE_PD + COMMON_EXT_LEN)
#define _QBM_SIZE_TBD           (_QBM_SIZE_TGPD)
#define _QBM_SIZE_TGPD_BPS      (_QBM_SIZE_TGPD)
#define _QBM_SIZE_DHL_GPD_BD    (_QBM_SIZE_TGPD + _QBM_SIZE_TBD)
#define _QBM_SIZE_DHL_SPD       (QBM_SIZE_PD + QBM_DHL_SPD_EXT_LEN)

#define _QBM_SIZE_TTY_TYPE1     (_QBM_SIZE_TGPD + QBM_TTY_XXX_DATA_LEN)

#define _QBM_SIZE_TTY_INT       (_QBM_SIZE_TTY_TYPE1)
#define _QBM_SIZE_GPD_BD_TST    (QBM_SIZE_PD + QBM_GPD_BD_TST_EXT_LEN + QBM_GPD_BD_TST_DATA_LEN)

#define _QBM_SIZE_ACM           (_QBM_SIZE_TGPD + QBM_ACM_DATA_LEN)
#define _QBM_SIZE_MSD         	(_QBM_SIZE_TGPD + QBM_MSD_DATA_LEN)

#define _QBM_SIZE_NET_DL        (_QBM_SIZE_TGPD + EMBEDDED_BD_SZ - COMMON_EXT_LEN + QBM_NET_DL_EXT_LEN + QBM_NET_DL_DATA_LEN)

#define _QBM_SIZE_IMS_DL        (_QBM_SIZE_TGPD + EMBEDDED_BD_SZ + QBM_IMS_DL_DATA_LEN)
#if defined(__MTK_TARGET__)
#define _QBM_SIZE_NET_UL        (_QBM_SIZE_TGPD + EMBEDDED_BD_SZ - COMMON_EXT_LEN + QBM_NET_UL_SHRD_EXT_LEN + QBM_NET_UL_SHRD_DATA_LEN)
#else
#define _QBM_SIZE_NET_UL        (_QBM_SIZE_TGPD + EMBEDDED_BD_SZ + QBM_NET_UL_DATA_LEN)
#endif
#define _QBM_SIZE_NET_UL_SHRD   (_QBM_SIZE_TGPD + EMBEDDED_BD_SZ - COMMON_EXT_LEN + QBM_NET_UL_SHRD_EXT_LEN + QBM_NET_UL_SHRD_DATA_LEN)

#define _QBM_SIZE_CCCI_COMM   	(_QBM_SIZE_TGPD + EMBEDDED_BD_SZ - COMMON_EXT_LEN + QBM_CCCI_COMM_EXT_LEN + QBM_CCCI_COMM_DATA_LEN)

/*
 * For the QBM_HEADER and Descriptor start address is cache aligned,
 * We need to make sure all entry is cache aligned
 * 
 * Note:
 * Don't use the size as the total size of your memory pool.
 * Please use QBM_QUEUE_GET_MEM_SIZE(_sz, _buf_num) defined in qmu_bm.h to get total memory size.
 * e.g. 
 * QBM_QUEUE_GET_MEM_SIZE(QBM_SIZE_TGPD, 12);
 */
#define QBM_SIZE_TGPD           QBM_SIZE_CACHE_ALIGN(_QBM_SIZE_TGPD)
#define QBM_SIZE_TBD            QBM_SIZE_CACHE_ALIGN(_QBM_SIZE_TBD)
#define QBM_SIZE_TGPD_BPS       QBM_SIZE_CACHE_ALIGN(_QBM_SIZE_TGPD_BPS)
#define QBM_SIZE_DHL_GPD_BD     QBM_SIZE_CACHE_ALIGN(_QBM_SIZE_DHL_GPD_BD)
#define QBM_SIZE_DHL_SPD        QBM_SIZE_CACHE_ALIGN(_QBM_SIZE_DHL_SPD)

#define QBM_SIZE_TTY_TYPE1      QBM_SIZE_CACHE_ALIGN(_QBM_SIZE_TTY_TYPE1)
#define QBM_SIZE_TTY_INT        QBM_SIZE_CACHE_ALIGN(_QBM_SIZE_TTY_INT)
#define QBM_SIZE_GPD_BD_TST     QBM_SIZE_CACHE_ALIGN(_QBM_SIZE_GPD_BD_TST)
#define QBM_SIZE_ACM            QBM_SIZE_CACHE_ALIGN(_QBM_SIZE_ACM)
#define QBM_SIZE_MSD            QBM_SIZE_CACHE_ALIGN(_QBM_SIZE_MSD)

#define QBM_SIZE_NET_DL         QBM_SIZE_CACHE_ALIGN(_QBM_SIZE_NET_DL)
#define QBM_SIZE_IMS_DL         QBM_SIZE_CACHE_ALIGN(_QBM_SIZE_IMS_DL)
#define QBM_SIZE_NET_UL         QBM_SIZE_CACHE_ALIGN(_QBM_SIZE_NET_UL)
#define QBM_SIZE_NET_UL_SHRD    QBM_SIZE_CACHE_ALIGN(_QBM_SIZE_NET_UL_SHRD)

#define QBM_SIZE_CCCI_COMM      QBM_SIZE_CACHE_ALIGN(_QBM_SIZE_CCCI_COMM)
#define QBM_SIZE_IMS_UL         QBM_SIZE_CCCI_COMM  // apply same config as CCCI_COMM requested by VoLTE_CSR

/*---------- Each foramt size constant ----------*/

/****************************************************************************/
#endif  /* QMU_BM_SIZE_INC */

