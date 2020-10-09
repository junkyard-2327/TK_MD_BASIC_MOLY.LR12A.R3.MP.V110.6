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
 *   kpalv.h
 *
 * Project:
 * --------
 *   
 *
 * Description:
 * ------------
 *  keepalive task handling function
 *
 * Author:
 * -------
 * -------
 *
 * ==========================================================================
 * $Log$
 *
 *
 *
 ****************************************************************************/
#include "kal_public_api.h"
#include "syscomp_config.h"
#include "kpalv.h"
#include "kpalv_debug.h"
/*------------------------------------------------------------------------------
 * Public fucntions.
 *----------------------------------------------------------------------------*/

kal_bool kpalv_task_init(void)
{
    kal_bool result = KAL_TRUE;
    kpalv_init();
    return result;
} 


kal_bool kpalv_task_reset(void)
{
    kal_bool result = KAL_TRUE;
    kpalv_reset();

    return result;
}


void kpalv_dispatch_ilm(ilm_struct *ilm)
{  
    if (MOD_KPALV == ilm->dest_mod_id) {
        kal_set_active_module_id(MOD_KPALV);
        kpalv_ilm_handler(ilm);
    }
    
     /*
     * Free the ILM.
     */
    destroy_ilm(ilm);
}


static void kpalv_task_main(task_entry_struct *task_entry_ptr)
{
    ilm_struct current_ilm;

     while (1) {
        if (KAL_TRUE == msg_receive_extq(&current_ilm)) {
            kpalv_dispatch_ilm(&current_ilm);
        }
    }
}
 
kal_bool kpalv_create(comptask_handler_struct **handle)
{
    static const comptask_handler_struct handler_info = 
    {
        kpalv_task_main,       /* task entry function */
        kpalv_task_init,       /* task initialization function */
        kpalv_task_reset,      /* task reset handler */
    };

    *handle = (comptask_handler_struct *)&handler_info;

    return KAL_TRUE;
}

