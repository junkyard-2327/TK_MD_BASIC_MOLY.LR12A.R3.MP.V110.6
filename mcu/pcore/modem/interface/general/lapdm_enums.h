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
 *      lapdm_enums.h
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

#ifndef _LAPDM_ENUMS_H
#define _LAPDM_ENUMS_H

/* states of LAPDm FSM */
typedef enum lapdm_fsm_state
{
    LAPDM_IDLE = 0,
    LAPDM_ESTABLISHING,
    LAPDM_ESTABLISHED,
    LAPDM_SUSPENDED,
    LAPDM_RELEASING,
    LAPDM_NUM_STATES
}
lapdm_fsm_state;

/* LAPDm frame types */
typedef enum lapdm_frame_type
{
    LAPDM_I_FRAME = 1,
    LAPDM_RR_FRAME,
    LAPDM_REJ_FRAME,
    LAPDM_SABM_FRAME,
    LAPDM_DM_FRAME,
    LAPDM_DISC_FRAME,
    LAPDM_UI_FRAME,
    LAPDM_UA_FRAME,
    LAPDM_FILL_FRAME
}
lapdm_frame_type;

typedef enum lapdm_queue_type
{
    LAPDM_INT_Q = 1,
    LAPDM_EXT_Q
}
lapdm_queue_type;

#ifdef __AGPS_CONTROL_PLANE__
typedef enum
{
    LAPDM_INITIAL_CAUSE = 0,
    L3_MESG_CAN_NOT_PREEMPT_APP_MESG = 1,
    L3_MESG_CAN_PREEMPT_APP_MESG = 2
} lapdm_agps_cause_enum;

typedef enum
{
    AGPS_SEND_NO_FRAME = 0,
    AGPS_SEND_FIRST_SEG_OR_SINGLE_MESG = 1,
    AGPS_SEND_MID_OR_LAST_SEG = 2,
    AGPS_SEND_NORMAL_L3_MESG = 3
} lapdm_agps_sending_enum;
#endif /* __AGPS_CONTROL_PLANE__ */ 

/* Peter, LAPDM refactor */
typedef enum
{
   LAPDM_NONE_EVENT_IN_PROGRESS = 0,
   LAPDM_ESTABLISH_IN_PROGRESS,
   LAPDM_IR_ESTBLISH_IN_PROGRESS,  
   LAPDM_RELEASE_IN_PROGRESS,
   LAPDM_RESUMPTION_IN_PROGRESS,
   LAPDM_RECONNECTION_IN_PROGRESS
}lapdm_triggered_event_enum;

#endif /* _LAPDM_ENUMS_H */