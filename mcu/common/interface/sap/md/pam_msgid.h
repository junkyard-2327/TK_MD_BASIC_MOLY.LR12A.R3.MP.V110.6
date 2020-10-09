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
 *  Copyright Statement:
 *  --------------------
 *  This software is protected by Copyright and the information contained
 *  herein is confidential. The software may not be copied and the information
 *  contained herein may not be used or disclosed except with the written
 *  permission of MediaTek Inc. (C) 2001
 *
 *******************************************************************************/

 /*******************************************************************************
 * Filename:
 * ---------
 *   
 *
 * Project:
 * --------
 *   
 *
 * Description:
 * ------------
 *   PAM related message identity definition
 *
 * Author:
 * -------
 * 
 *
 *==============================================================================
 * 				HISTORY
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
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!! 
 *==============================================================================
 *******************************************************************************/

#include "module_msg_range.h"

#ifndef _PAM_MSG_H
#define _PAM_MSG_H

/*------------------- PAM_MSG_CODE_BEGIN---------------------*/
MODULE_MSG_BEGIN( MSG_ID_PAM_CODE_BEGIN )
MSG_ID_PAM_MSG_ID_START = MSG_ID_PAM_CODE_BEGIN,

    MSG_ID_NWSEL_PAM_EQ_PLMN_LIST_UPDATE_IND,
    MSG_ID_TCM_PAM_START_REQ,
    MSG_ID_TCM_PAM_ATTACH_CONTEXT_DEFINED_NOTIFY_REQ,
    MSG_ID_TCM_PAM_CELLULAR_NETWORK_CONFIG_REQ,
    MSG_ID_TCM_PAM_SET_VZW_APN_TABLE_REQ,
    MSG_ID_TCM_PAM_GET_VZW_APN_TABLE_REQ,
    MSG_ID_TCM_PAM_SET_VZW_PARAMS_REQ,
    MSG_ID_TCM_PAM_GET_VZW_PARAMS_REQ,
    MSG_ID_TCM_PAM_GET_APN_BLOCKING_TIMER_LENGTH_REQ,

    /* MSGs from SM/ESM */
    MSG_ID_PAM_STOP_ALL_T3396_IND,
    MSG_ID_PAM_PDP_SYNCED_IND,
    
    /* MSGs from ESM */
    MSG_ID_PAM_ESM_T3402_STOP_IND,
    MSG_ID_PAM_ESM_STOP_ALL_PDN_THROTT_TIMER_IND,
    MSG_ID_PAM_ESM_CONN_EST_IND,
    MSG_ID_PAM_ESM_T3402_CHANGE_IND, // __ATnT__

    /* MSGs for logging */
    MSG_ID_PAM_LOG_PIB, 
    MSG_ID_PAM_LOG_SMIB,
    MSG_ID_PAM_LOG_SMIB_VZW,

    /* MSGs for USM context checking */
    MSG_ID_USM_CHECK_GV,

    MSG_ID_TCM_PAM_EVENT_NOTIFY_REQ,

MSG_ID_PAM_MSG_ID_END,
MODULE_MSG_END( MSG_ID_PAM_CODE_TAIL )
/*------------------- PAM_MSG_CODE_END-----------------------*/

#endif  /* _PAM_MSG_H */
