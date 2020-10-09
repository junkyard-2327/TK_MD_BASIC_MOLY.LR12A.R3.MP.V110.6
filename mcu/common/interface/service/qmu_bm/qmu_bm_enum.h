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
 *   qmu_bm_enum.h
 *
 * Project:
 * --------
 *   MOLY
 *
 * Description:
 * ------------
 *  enum values.
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
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/
 
#ifndef  QMU_BM_ENUM_INC
#define  QMU_BM_ENUM_INC

#include "qbm_features.h"

typedef enum
{
    /*----------only descriptor buffer start----------*/
    QBM_TYPE_TGPD, /*  note the first is anchor, don't change the order. */
    QBM_TYPE_TBD,
    QBM_TYPE_TGPD_BPS,
    QBM_TYPE_DHL_GPD_BD,
    QBM_TYPE_DHL_SPD,
    /*----------only descriptor buffer end------------*/

    /*----------GPD with data buffer start------------*/
    QBM_TYPE_TTY_TYPE1, /*  note the first is anchor, don't change the order. */
    QBM_TYPE_TTY_INT,
    QBM_TYPE_GPD_BD_TST,
    QBM_TYPE_ACM,
    QBM_TYPE_MSD,
    /*----------GPD with data buffer end--------------*/

    /*----------GPD with BD with buffer start----------*/
    /* It is allocated for LTE decipher engine DRB queue */
    QBM_TYPE_NET_DL,    /*  note the first is anchor, don't change the order. */
    QBM_TYPE_IMS_DL,
    QBM_TYPE_NET_UL,
    QBM_TYPE_NET_UL_SHRD,
     /* 20120724 ian: QBM_TYPE_CCCI_COMM*/
    /*
     * Used for real queue end anchor.
     * Please don't modify it, UT case will use it to test boundary cae
     */
    QBM_TYPE_CCCI_COMM,
    QBM_TYPE_IMS_UL,
    QBM_TYPE_QUEUE_END = QBM_TYPE_IMS_UL,
    /*----------GPD with BD with buffer end-------------*/

    /*----------Pseudo type start----------*/
    /* don't need to do free */
    QBM_TYPE_NON_FREE,
    /*----------Pseudo type end----------*/

    QBM_QUEUE_NUM
} qbm_type;

typedef enum
{
    QBM_ERROR_OK                      = 0,
    QBM_ERROR_QBM_NOT_INITED          = 1,
    QBM_ERROR_QUEUE_IS_ALREADY_INITED = 2,
    QBM_ERROR_MEM_NOT_ENOUGH          = 3,
    QBM_ERROR_PRE_Q_IS_NOT_INITED     = 4,
} qbm_error_code;

typedef enum
{
    QBM_POOL_NORMAL = 0,
    QBM_POOL_SHRINK, 
    QBM_POOL_NONE,
}qbm_pool_status;

#endif   /* ----- #ifndef QMU_BM_ENUM_INC  ----- */

