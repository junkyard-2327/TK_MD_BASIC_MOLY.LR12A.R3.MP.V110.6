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

/*****************************************************************************
 *
 * Filename:
 * ---------
 * ipc_fragment.h
 *
 * Project:
 * --------
 * MOLY
 *
 * Description:
 * ------------
 *   
 *
 * Author:
 * -------
 * -------
 *
 *============================================================================
 *             HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *----------------------------------------------------------------------------
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 *----------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

/****************************************************************************/
#ifndef  _IPC_FRAGMENT_INC
#define  _IPC_FRAGMENT_INC
/****************************************************************************/

extern "C" 
{
#include "kal_public_api.h"
#include "ipc_api.h"
#include "qmu_bm_util.h"
#include "qmu_bm.h"
#include "ipc_fragment_def.h"
#include "ipc_fragment_debug.h"
}

/****************************************************************************
 * Definitions
 ****************************************************************************/
#define IPC_FRAG_INVALID_FILTER_ID      -1

#define IPC_FRAG_IPV6_MAX_LEN           65535

#define IPC_FRAG_FLAG_MF                0x01

#define IPC_FRAG_INFO_RECEIVE_FIRST_PKT 0x1
#define IPC_FRAG_INFO_RECEIVE_LAST_PKT  0x2
#define IPC_FRAG_INFO_RECEIVE_COMPLETE  0x4
#define IPC_FRAG_INFO_RECEIVE_DROPPED   0x8

/****************************************************************************
 * Type definitions
 ****************************************************************************/
typedef struct _ipc_fragment_t {
    /* AFM Info */
    KAL_AFM_ID k_afm_id;
    kal_uint8* afm_buffer_p;
    kal_uint32* afm_sub_buffer_size_p;
    kal_uint32* afm_sub_buffer_num_p;
    kal_uint32 afm_left_mem_size;

    /* Queuing expiring */
    event_scheduler* ipc_frag_queue_expire_es;
    eventid ipc_frag_queue_expire_evt;
} ipc_fragment_t;

/****************************************************************************
 * Global variables
 ****************************************************************************/

/****************************************************************************
 * Function prototypes
 ****************************************************************************/ 
ipc_fragment_t* ipc_fragment_get_inst();

void* ipc_fragment_mem_alloc(size_t size);
void ipc_fragment_mem_free(void* p);

void ipc_fragment_afm_init();
void ipc_fragment_afm_deinit();

void ipc_fragment_hash_table_init();
void ipc_fragment_hash_table_deinit();

void ipc_fragment_queuing_expire_init();
void ipc_fragment_queuing_expire_deinit();

void ipc_fragment_queuing_v4(qbm_gpd *new_gpd, ipc_packet_info_t *packet_info, kal_uint32 matched_filter_id, ipc_frag_refilter_info_t *refilter_info);
void ipc_fragment_queuing_v6(qbm_gpd *new_gpd, ipc_packet_info_t *packet_info, kal_uint32 matched_filter_id, ipc_frag_refilter_info_t *refilter_info);

/****************************************************************************
 * Export Function prototypes
  ****************************************************************************/
extern "C" kal_bool ipc_fragment_init();
extern "C" kal_bool ipc_fragment_deinit();
extern "C" kal_bool ipc_fragment_reset();
extern "C" void ipc_fragment_on_ilm(ilm_struct *ilm);
extern "C" kal_uint32 ipc_fragment_frag(void* buff, kal_uint32 buff_len, qbm_gpd** frag_gpd_head, qbm_gpd** frag_gpd_tail, kal_bool is_v4);
extern "C" void ipc_fragment_defrag(qbm_gpd *new_gpd, ipc_frag_refilter_info_t *info, kal_bool is_v4);

/****************************************************************************/
#endif /* _IPC_FRAGMENT_INC */

