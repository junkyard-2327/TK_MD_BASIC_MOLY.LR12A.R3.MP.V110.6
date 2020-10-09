/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2014
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
 *   PFM_object.h
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
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *==============================================================================
 *******************************************************************************/

#ifndef __INC_PFM_OBJECT_H
#define __INC_PFM_OBJECT_H

#include "kal_public_api.h"

#include "pfm_defs.h"

struct _pfm_object_template;
extern kal_spinlockid pfm_spinlock_g;
static INLINE kal_bool pfm_is_object_valid(struct _pfm_object_template *object);

/*------------------------------------------------------------------------------
 * Data structure defintion.
 *----------------------------------------------------------------------------*/
#define PFM_SPIN_LOCK(_lock)    kal_take_spinlock(_lock, KAL_INFINITE_WAIT)
#define PFM_SPIN_UNLOCK(_lock)  kal_give_spinlock(_lock)

#define PFM_DECLARE_OBJECT \
            kal_int32       ref_count; \
            kal_int32       reader_cnt; \
            kal_int32       writer_cnt;

#define PFM_IS_VALID_OBJECT_WO_LOCK(_object) \
            ((_object) != NULL && (_object)->ref_count == 2)

#define PFM_IS_VALID_OBJECT(_object) \
            pfm_is_object_valid((struct _pfm_object_template *)_object)

#define PFM_R_LOCK_OBJECT(_object, _lock) \
            PFM_SPIN_LOCK(_lock); \
            if (PFM_IS_VALID_OBJECT_WO_LOCK(_object) && ((_object)->writer_cnt == 0)) { \
                ++((_object)->reader_cnt); \
            } else { \
                (_object) = NULL; \
            } \
            PFM_SPIN_UNLOCK(_lock)

#define PFM_R_UNLOCK_OBJECT(_object, _lock) \
            ASSERT((_object)); \
            PFM_SPIN_LOCK(_lock); \
            ASSERT((_object)->reader_cnt > 0); \
            --((_object)->reader_cnt); \
            PFM_SPIN_UNLOCK(_lock)

#define PFM_INIT_OBJECT_BEGIN(_object, _lock) \
            PFM_ASSERT(_object); \
            PFM_SPIN_LOCK(_lock); \
            PFM_ASSERT((_object)->ref_count == 0); \
            (_object)->ref_count = 1; \
            PFM_SPIN_UNLOCK(_lock)

#define PFM_INIT_OBJECT_END(_object, _lock) \
            PFM_ASSERT(_object); \
            PFM_SPIN_LOCK(_lock); \
            PFM_ASSERT(_object->ref_count == 1); \
            (_object)->ref_count = 2; \
            (_object)->reader_cnt = 0; \
            (_object)->writer_cnt = 0; \
            PFM_SPIN_UNLOCK(_lock)

#define PFM_DEINIT_OBJECT_BEGIN(_object, _lock) \
            PFM_ASSERT(kal_if_hisr() == KAL_FALSE); \
            PFM_SPIN_LOCK(_lock); \
            if (PFM_IS_VALID_OBJECT_WO_LOCK(_object)) { \
                --((_object)->ref_count); \
                while ((_object)->reader_cnt != 0 || (_object)->writer_cnt != 0) { \
                    PFM_SPIN_UNLOCK(_lock); \
                    kal_sleep_task(PFM_DEL_OBJECT_SLEEP_TICKS); \
                    PFM_SPIN_LOCK(_lock); \
                } \
                PFM_ASSERT((_object)->ref_count == 1); \
            } else { \
                (_object) = NULL; \
            } \
            PFM_SPIN_UNLOCK(_lock)

#define PFM_DEINIT_OBJECT_END(_object, _lock) \
            PFM_SPIN_LOCK(_lock); \
            PFM_ASSERT((_object)->ref_count == 1); \
            PFM_ASSERT((_object)->reader_cnt == 0); \
            PFM_ASSERT((_object)->writer_cnt == 0); \
            (_object)->ref_count = 0; \
            PFM_SPIN_UNLOCK(_lock)

#define PFM_W_LOCK_OBJECT(_object, _lock) \
            PFM_ASSERT(kal_if_hisr() == KAL_FALSE); \
            PFM_SPIN_LOCK(_lock); \
            if (PFM_IS_VALID_OBJECT_WO_LOCK(_object)) { \
                while ((_object)->reader_cnt != 0 || (_object)->writer_cnt != 0) { \
                    PFM_SPIN_UNLOCK(_lock); \
                    kal_sleep_task(PFM_W_LOCK_OBJECT_SLEEP_TICKS); \
                    PFM_SPIN_LOCK(_lock); \
                } \
                if (PFM_IS_VALID_OBJECT_WO_LOCK(_object)) { \
                    ++((_object)->writer_cnt); \
                } else { \
                    (_object) = NULL; \
                    PFM_SPIN_UNLOCK(_lock); \
                } \
            } else { \
                (_object) = NULL; \
                PFM_SPIN_UNLOCK(_lock); \
            }

#define PFM_W_UNLOCK_OBJECT(_object, _lock) \
            PFM_ASSERT((_object)); \
            PFM_ASSERT((_object)->writer_cnt == 1); \
            --((_object)->writer_cnt); \
            PFM_SPIN_UNLOCK(_lock)

/*------------------------------------------------------------------------------
 * Functions for Synchronization
 *----------------------------------------------------------------------------*/
struct _pfm_object_template {
    PFM_DECLARE_OBJECT
};

static INLINE kal_bool pfm_is_object_valid(struct _pfm_object_template *object)
{
    kal_bool ret;

    PFM_SPIN_LOCK(pfm_spinlock_g);
    ret = PFM_IS_VALID_OBJECT_WO_LOCK(object);
    PFM_SPIN_UNLOCK(pfm_spinlock_g);

    return ret;
}

#endif /* __INC_PFM_OBJECT_H */
