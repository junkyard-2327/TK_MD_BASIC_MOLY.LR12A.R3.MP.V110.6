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

/******************************************************************************
 * Filename:
 * ---------
 *      mpal_enums.h
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description:
 * ------------
 *
 * Author:
 * -------
 * -------
 *
 *=============================================================================
 *                              HISTORY
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
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *=============================================================================
 ******************************************************************************/

/********************************************************************************
*  Copyright Statement:
*  --------------------
*
*  This product has been developed using a protocol stack
*  developed by Sasken Communication Technologies Limited.
*
********************************************************************************/

#ifndef _MPAL_ENUMS_H
#define _MPAL_ENUMS_H

/* The states of MPAL */
typedef enum
{
    MPAL_NULL_STATE      = 0x00,
    MPAL_CS_SCAN         = 0x80,
    MPAL_CS_IDLE         = 0x40,
    MPAL_CS_ACCESS       = 0x20,
    MPAL_CS_DEDICATED    = 0x10,
    MPAL_CCCH_PS_IDLE    = 0x08, /* __PS_SERVICE__ start */
    MPAL_PCCCH_PS_IDLE   = 0x04,
    MPAL_PS_ACCESS       = 0x02,
    MPAL_PS_TRANSFER     = 0x01  /* __PS_SERVICE__ end */
} mpal_state_enum;

#ifdef __GEMINI_GSM__
typedef enum
{
    MPAL1 = 0x0,
    MPAL2 = 0x1,
    MPAL3 = 0x2,    /* Gemini+ */
    MPAL4 = 0x3,    /* Gemini+ */
    MPAL_INVALID_NO = 0xF
} mpal_current_cntx_ptr_enum;
#endif /* end of __GEMINI_GSM__ */


#ifdef __GEMINI__
typedef enum
{
    GEMINI_NORMAL_MODE     = 0x0,
    GEMINI_SUSPEND_MODE    = 0x1,
    GEMINI_VIRTUAL_MODE    = 0x2 /* Gemini 2.0 */
} mpal_gemini_mode_enum;
#endif /* end of __GEMINI__ */


typedef enum
{
    MPAL_QUEUE_NULL             = 0x0,
    MPAL_QUEUE_PDTCH_DISCONN    = 0x1,
    MPAL_QUEUE_SUSPENSION       = 0x2   /* for Gemini */
} mpal_queue_reason_enum;

typedef enum
{   /* shall sync with RLC_TIMER_NUM_MSGS value */
    MPAL_T3124_TIMER_ID = 0,
    MPAL_TIMER_NUM_MSGS
} mpal_timer_id_enum;    /* MPAL_TIMER Message Type */

#endif /* _MPAL_ENUMS_H */
