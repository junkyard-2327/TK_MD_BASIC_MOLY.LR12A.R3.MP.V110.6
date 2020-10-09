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
 *   kalcc_rcu.h
 *
 * Project:
 * --------
 *   
 *
 * Description:
 * ------------
 *   
 *
 * Author:
 * -------
 *   
 *
 *============================================================================
 *             HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
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
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/
#ifndef __KALCC_RCU__
#define __KALCC_RCU__

#include "cache_sw.h"

#define KALCC_RCU_MAGIC (0x554352)

typedef struct kalcc_rcu_buff_t{
    struct kalcc_internal_rcu_t  *rcu_ptr;
    struct kalcc_rcu_buff_t      *rcu_next;
    kal_uint32                   rcu_reader_count;
    kal_uint32                   rcu_checksum;

    /* for debug purpose */
    struct kalcc_rcu_buff_t      *rcu_debug_pre_buff;     //for traverse all rcu buff
    struct kalcc_rcu_buff_t      *rcu_debug_next_buff;    //no use mlib dll
    kal_uint32                   rcu_buff_count;
}kalcc_rcu_buffer_type, *kalcc_rcu_buffid;


typedef struct kalcc_internal_rcu_t{
    kal_uint32                  rcu_id;
    kalcc_rcu_buffid            rcu_avail_buff;
    kalcc_rcu_buffid            rcu_curr_data;
    kal_uint32                  rcu_total_alloc_buff;
    kal_uint32                  rcu_total_avail_buff;
    kal_uint32                  rcu_buff_size;
    kal_spinlockid              rcu_spinlock;
    module_type                 rcu_lastest_commit_modid;
}kalcc_internal_rcu_type, *kalcc_internal_rcuid;



/* align RCU to cache line size */
#define ALIGN_RCU_SIZE                      ( ALIGNTOCACHELINE(sizeof(kalcc_internal_rcu_type)) )

/* align RCU buff header to cache line size */
#define ALIGN_RCU_HEADER_SIZE               ( ALIGNTOCACHELINE(sizeof(kalcc_rcu_buffer_type)) )

#endif /* __KALCC_RCU__  */
