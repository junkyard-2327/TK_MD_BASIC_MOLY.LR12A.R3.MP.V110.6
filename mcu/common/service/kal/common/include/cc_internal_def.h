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
 *   cc_internal_api.h
 *
 * Project:
 * --------
 *   Maui_Software
 *
 * Description:
 * ------------
 *   This header file is used to define internal api, do not export!
 *
 * Author:
 * -------
 * -------
 *
 *============================================================================
 *             HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
 *
 * removed!
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/
#ifndef __CC_INTERNAL_DEFINATIONS__
#define __CC_INTERNAL_DEFINATIONS__


#include "kal_public_defs.h"
#include "spinlock.h"
#include "lcd_ip_cqueue.h"




/******************************************************************************
 * internal cross core mutex for cross core event group
 ******************************************************************************/

#define _CC_MUTEX_TASK_WAITING_QUEUE_SIZE   (20)

typedef struct cc_eg_mutex_t{
    kal_semid           master_sem;
    kal_semid           slave_sem;
    module_type         owner_task;
    kal_uint8           padding[2];
    kal_int32           mutex_count;
    LCD_IP_CQUEUE(kal_uint32, _CC_MUTEX_TASK_WAITING_QUEUE_SIZE) waiting_task_queue;
    spinlock_t          SLEG;
}cc_eg_mutex;




/******************************************************************************
 * cross core event group
 ******************************************************************************/

#define CC_EG_MAGIC     (0x47454343)

#define CC_MAX_NAME     8

#define CC_EG_MUTEX_OPERATION   (0x1)
#define CC_EG_SET_OPERATION     (0x2)


typedef struct cc_eg_suspend_info_t{
    struct cc_eg_suspend_info_t     *ev_next;
    struct cc_internal_eventgrpid_t *ev_event_group;        /* Pointer to Event group */
    kal_uint32                      ev_requested_events;    /* Requested event flags  */
    module_type                     ev_task_id;             /* module id */
    kal_uint8                       ev_operation;           /* Event operation        */
    kal_uint8                       ev_padding[1];
    void                            *ev_suspended_task;      /* Task suspended         */
    kal_int32                       ev_return_status;       /* Return status          */
    kal_int32                       ev_actual_events;       /* Event flags returned   */
}cc_eg_suspend_info;


typedef struct cc_internal_eventgrpid_t{
    char                    ev_name[CC_MAX_NAME];
    kal_uint32              ev_id;
    kal_uint32              ev_current_events;
    cc_eg_suspend_info      *ev_waiting_task_head;
    cc_eg_suspend_info      *ev_waiting_task_tail;
}cc_internal_eventgrpid;


#define CC_EG_SUCCESS               0
#define CC_EG_SUSPEND               1
#define CC_EG_INVALID_GROUP         2
#define CC_EG_INVALID_OPERATION     3
#define CC_EG_INVALID_CALLER        4
#define CC_EG_INVALID_POINTER       5



#endif /* __CC_INTERNAL_DEFINATIONS__  */
