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
 * Filename:
 * ---------
 *   ipc_object.h
 *
 * Project:
 * --------
 *   TATAKA
 *
 * Description:
 * ------------
 *   Helper for object management and synchronization.
 *
 * Author:
 * -------
 * -------
 *
 *==============================================================================
 *                 HISTORY
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
 * removed!
 * removed!
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!! 
 *==============================================================================
 *******************************************************************************/

#ifndef __INC_IPC_OBJECT_H
#define __INC_IPC_OBJECT_H

#include "kal_public_api.h"

#include "ipc_api.h"

struct _ipc_object_template;
extern kal_spinlockid ipc_spinlock_g;
static INLINE kal_bool ipc_is_object_valid(struct _ipc_object_template *object);

/*------------------------------------------------------------------------------
 * Data structure defintion.
 *----------------------------------------------------------------------------*/
#define IPC_SPIN_LOCK(_lock)    kal_take_spinlock(_lock, KAL_INFINITE_WAIT)
#define IPC_SPIN_UNLOCK(_lock)  kal_give_spinlock(_lock)

#define IPC_DECLARE_OBJECT \
            kal_int32       ref_count; \
            kal_int32       reader_cnt; \
            kal_int32       writer_cnt;

#define IPC_IS_VALID_OBJECT_WO_LOCK(_object) \
            ((_object) != NULL && (_object)->ref_count == 2)

#define IPC_IS_VALID_OBJECT(_object) \
            ipc_is_object_valid((struct _ipc_object_template *)_object)

#define IPC_R_LOCK_OBJECT(_object, _lock) \
            IPC_SPIN_LOCK(_lock); \
            if (IPC_IS_VALID_OBJECT_WO_LOCK(_object) && ((_object)->writer_cnt == 0)) { \
                ++((_object)->reader_cnt); \
            } else { \
                (_object) = NULL; \
            } \
            IPC_SPIN_UNLOCK(_lock)

#define IPC_R_UNLOCK_OBJECT(_object, _lock) \
            ASSERT((_object)); \
            IPC_SPIN_LOCK(_lock); \
            ASSERT((_object)->reader_cnt > 0); \
            --((_object)->reader_cnt); \
            IPC_SPIN_UNLOCK(_lock)

#define IPC_INIT_OBJECT_BEGIN(_object, _lock) \
            IPC_ASSERT(_object); \
            IPC_SPIN_LOCK(_lock); \
            IPC_ASSERT((_object)->ref_count == 0); \
            (_object)->ref_count = 1; \
            IPC_SPIN_UNLOCK(_lock)

#define IPC_INIT_OBJECT_END(_object, _lock) \
            IPC_ASSERT(_object); \
            IPC_SPIN_LOCK(_lock); \
            IPC_ASSERT(_object->ref_count == 1); \
            (_object)->ref_count = 2; \
            (_object)->reader_cnt = 0; \
            (_object)->writer_cnt = 0; \
            IPC_SPIN_UNLOCK(_lock)

#define IPC_DEINIT_OBJECT_BEGIN(_object, _lock) \
            IPC_ASSERT(kal_if_hisr() == KAL_FALSE); \
            IPC_SPIN_LOCK(_lock); \
            if (IPC_IS_VALID_OBJECT_WO_LOCK(_object)) { \
                --((_object)->ref_count); \
                while ((_object)->reader_cnt != 0 || (_object)->writer_cnt != 0) { \
                    IPC_SPIN_UNLOCK(_lock); \
                    kal_sleep_task(IPC_DEL_OBJECT_SLEEP_TICKS); \
                    IPC_SPIN_LOCK(_lock); \
                } \
                IPC_ASSERT((_object)->ref_count == 1); \
            } else { \
                (_object) = NULL; \
            } \
            IPC_SPIN_UNLOCK(_lock)

#define IPC_DEINIT_OBJECT_END(_object, _lock) \
            IPC_SPIN_LOCK(_lock); \
            IPC_ASSERT((_object)->ref_count == 1); \
            IPC_ASSERT((_object)->reader_cnt == 0); \
            IPC_ASSERT((_object)->writer_cnt == 0); \
            (_object)->ref_count = 0; \
            IPC_SPIN_UNLOCK(_lock)

#define IPC_W_LOCK_OBJECT(_object, _lock) \
            IPC_ASSERT(kal_if_hisr() == KAL_FALSE); \
            IPC_SPIN_LOCK(_lock); \
            if (IPC_IS_VALID_OBJECT_WO_LOCK(_object)) { \
                while ((_object)->reader_cnt != 0 || (_object)->writer_cnt != 0) { \
                    IPC_SPIN_UNLOCK(_lock); \
                    kal_sleep_task(IPC_W_LOCK_OBJECT_SLEEP_TICKS); \
                    IPC_SPIN_LOCK(_lock); \
                } \
                if (IPC_IS_VALID_OBJECT_WO_LOCK(_object)) { \
                    ++((_object)->writer_cnt); \
                } else { \
                    (_object) = NULL; \
                    IPC_SPIN_UNLOCK(_lock); \
                } \
            } else { \
                (_object) = NULL; \
                IPC_SPIN_UNLOCK(_lock); \
            }

#define IPC_W_UNLOCK_OBJECT(_object, _lock) \
            IPC_ASSERT((_object)); \
            IPC_ASSERT((_object)->writer_cnt == 1); \
            --((_object)->writer_cnt); \
            IPC_SPIN_UNLOCK(_lock)

/* Safely convert between Read & Write lock at the same time. */
#define IPC_R_TO_W_LOCK_OBJECT(_object, _lock) \
            IPC_ASSERT(kal_if_hisr() == KAL_FALSE); \
            IPC_SPIN_LOCK(_lock); \
            if (IPC_IS_VALID_OBJECT_WO_LOCK(_object)) { \
                ASSERT((_object)->reader_cnt > 0); \
                --((_object)->reader_cnt); \
                while ((_object)->reader_cnt != 0 || (_object)->writer_cnt != 0) { \
                    IPC_SPIN_UNLOCK(_lock); \
                    kal_sleep_task(IPC_W_LOCK_OBJECT_SLEEP_TICKS); \
                    IPC_SPIN_LOCK(_lock); \
                } \
                if (IPC_IS_VALID_OBJECT_WO_LOCK(_object)) { \
                    ++((_object)->writer_cnt); \
                } else { \
                    (_object) = NULL; \
                    IPC_SPIN_UNLOCK(_lock); \
                } \
            } else { \
                (_object) = NULL; \
                IPC_SPIN_UNLOCK(_lock); \
            }

#define IPC_W_TO_R_LOCK_OBJECT(_object, _lock) \
            IPC_ASSERT((_object)); \
            IPC_ASSERT((_object)->reader_cnt == 0); \
            IPC_ASSERT((_object)->writer_cnt == 1); \
            --((_object)->writer_cnt); \
            ++((_object)->reader_cnt); \
            IPC_SPIN_UNLOCK(_lock)

/*------------------------------------------------------------------------------
 * Functions for Synchronization
 *----------------------------------------------------------------------------*/
struct _ipc_object_template {
    IPC_DECLARE_OBJECT
};

static INLINE kal_bool ipc_is_object_valid(struct _ipc_object_template *object)
{
    kal_bool ret;

    IPC_SPIN_LOCK(ipc_spinlock_g);
    ret = IPC_IS_VALID_OBJECT_WO_LOCK(object)? KAL_TRUE:KAL_FALSE;
    IPC_SPIN_UNLOCK(ipc_spinlock_g);

    return ret;
}

#endif /* __INC_IPC_OBJECT_H */
