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
 * nvram_handler_notify.h
 *
 * Project:
 * --------
 *   MT6293
 *
 * Description:
 * ------------
 *   This is nvram_mon_xxx_handler() of NVRAM module.
 *
 * Author:
 * -------
 * -------
 *
 *==============================================================================
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
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!! 
 *==============================================================================
 *******************************************************************************/
#include "nvram_handler_monitor.h"
#include "nvram_interface.h"
#include "nvram_io.h"
#include "nvram_msgid.h"
#include "nvram_defs.h"
#include "nvram_main.h"

#if defined(__NVRAM_MONITOR_ENABLED__)
#define MIN(a, b)    (((a)>(b))?(b):(a))
#define MAX(a, b)   (((a)>(b))?(a):(b))

typedef struct {
    kal_bool registered;
    module_type reg_module; // only monitor write from other modules
    kal_uint16 lid;
    kal_uint16 rec_index;
    kal_uint16 rec_amount;
    kal_uint16 hit_count;   // for debug
} nvram_mon_reg_info;

#define NVRAM_MAX_NOTIFY_NUM 20
static nvram_mon_reg_info nvram_reg_list[NVRAM_MAX_NOTIFY_NUM];
static kal_mutexid nvram_reg_list_mutex = NULL;

static nvram_mon_reg_info * nvram_mon_find_free_record()
{
    kal_int32 idx;
    nvram_mon_reg_info *reg_info;

    for (idx = 0; idx < NVRAM_MAX_NOTIFY_NUM; idx++) {
        reg_info = &nvram_reg_list[idx];
        if (KAL_FALSE == reg_info->registered) {
            return reg_info;
        }
    }

    return NULL;
}


static nvram_mon_reg_info * nvram_mon_find_reg_record(module_type reg_mod, 
        nvram_lid_enum lid, kal_uint16 rec_idx, kal_int16 rec_amount)
{
    kal_int32 idx;
    nvram_mon_reg_info *reg_info;

    for (idx = 0; idx < NVRAM_MAX_NOTIFY_NUM; idx++) {
        reg_info = &nvram_reg_list[idx];
        
        if (KAL_FALSE == reg_info->registered) {
            continue;
        }

        if (lid == reg_info->lid 
            && rec_idx == reg_info->rec_index
            && rec_amount == reg_info->rec_amount
            && reg_mod == reg_info->reg_module) {
            return reg_info;
        }
    } 

    return NULL;
}


static void nvram_mon_reg_notify(module_type reg_mod, nvram_lid_enum lid, kal_uint16 rec_idx, kal_uint16 rec_amt)
{
    nvram_mon_reg_info *reg_info = NULL;
    nvram_ltable_entry_struct *ldi = NULL;
    nvram_errno_enum result = NVRAM_ERRNO_SUCCESS;
    peer_buff_struct *peer_buf_ptr = NULL;
    kal_uint8 *pdu_ptr = NULL;
    kal_uint16 pdu_len = 0;
    nvram_read_cnf_struct *nvram_read_cnf = NULL;

    if (!nvram_util_get_data_item(&ldi, lid)) {
        result = NVRAM_IO_ERRNO_INVALID_LID;
    } else if (rec_idx < 1 || rec_idx > ldi->total_records) {
         result = NVRAM_IO_ERRNO_INVALID_RECORD;
    } else if (rec_idx + rec_amt -1 > ldi->total_records) {
        rec_amt = ldi->total_records - rec_idx + 1;
    }

    if (result == NVRAM_ERRNO_SUCCESS) {
        // check if already registered
        nvram_util_take_mutex(nvram_reg_list_mutex);
        reg_info = nvram_mon_find_reg_record(reg_mod, lid, rec_idx, rec_amt);
        if (reg_info == NULL) {
            // try reg
            reg_info = nvram_mon_find_free_record();
            if (reg_info == NULL) {
                NVRAM_EXT_ASSERT(KAL_FALSE, (kal_uint32)reg_info, NVRAM_LOC_INVALID_INDEX_4, 0);
                return;
            }
            // reg OK
            reg_info->registered = KAL_TRUE;
            reg_info->reg_module = reg_mod;
            reg_info->lid = lid;
            reg_info->rec_index = rec_idx;
            reg_info->rec_amount= rec_amt;
            reg_info->hit_count = 0;
        }
        nvram_util_give_mutex(nvram_reg_list_mutex);

        // read lid back
        pdu_len = ldi->size*rec_amt;
        peer_buf_ptr = construct_peer_buff(pdu_len, 0, 0, TD_CTRL);
        pdu_ptr = get_peer_buff_pdu(peer_buf_ptr, &pdu_len);
        result= nvram_read_data_item(ldi, rec_idx, rec_amt, pdu_ptr, pdu_len);
    }

    // send read confirmation
    nvram_read_cnf = (nvram_read_cnf_struct*) construct_local_para(sizeof(nvram_read_cnf_struct), TD_CTRL);
    nvram_read_cnf->result = result;
    nvram_read_cnf->file_idx = lid;
    nvram_read_cnf->para = rec_idx;
    nvram_read_cnf->length = pdu_len;
    nvram_read_cnf->access_id = 0;
    
    nvram_send_ilm(reg_mod, MSG_ID_NVRAM_READ_CNF, nvram_read_cnf, peer_buf_ptr);
}

static void nvram_mon_dereg_notify(module_type reg_mod, nvram_lid_enum lid, kal_uint16 rec_idx, kal_uint16 rec_amt)
{
    nvram_mon_reg_info *reg_info = NULL;
    nvram_ltable_entry_struct *ldi = NULL;
    
    if (!nvram_util_get_data_item(&ldi, lid)) {
        return;
    }

    if (rec_idx < 1 || rec_idx > ldi->total_records) {
        return;
    }

    if (rec_idx + rec_amt -1 > ldi->total_records) {
        rec_amt = ldi->total_records - rec_idx + 1;
    }
    
    // find reg info
    nvram_util_take_mutex(nvram_reg_list_mutex);
    reg_info = nvram_mon_find_reg_record(reg_mod, lid, rec_idx, rec_amt);
    if (reg_info != NULL) {
        // mark reg status as invalid
        reg_info->registered = KAL_FALSE;
    }
    nvram_util_give_mutex(nvram_reg_list_mutex);
}

static void nvram_mon_notify_change(module_type reg_mod, 
    nvram_lid_enum lid, kal_uint16 idx, kal_uint8 *write_buff, kal_uint16 buff_len)
{
    nvram_read_cnf_struct *nvram_read_cnf;
    peer_buff_struct *peer_buf_ptr;
    kal_uint8 *pdu_ptr;
    kal_uint16 pdu_len;

    // construct peer buff
    pdu_len = buff_len;
    peer_buf_ptr = construct_peer_buff(pdu_len, 0, 0, TD_CTRL);
    pdu_ptr = get_peer_buff_pdu(peer_buf_ptr, &pdu_len);
    kal_mem_cpy(pdu_ptr, write_buff, pdu_len);

    // send read confirmation
    nvram_read_cnf = (nvram_read_cnf_struct*) construct_local_para(sizeof(nvram_read_cnf_struct), TD_CTRL);
    nvram_read_cnf->result = NVRAM_ERRNO_SUCCESS;
    nvram_read_cnf->file_idx = lid;
    nvram_read_cnf->para = idx;
    nvram_read_cnf->length = pdu_len;
    nvram_read_cnf->access_id = 0;

    nvram_send_ilm(reg_mod, MSG_ID_NVRAM_READ_CNF, nvram_read_cnf, peer_buf_ptr);
}


/********************************************************
 *
 *    APIs Referenced by other NVRAM Component
 *
 ********************************************************/
void nvram_mon_init()
{
    nvram_reg_list_mutex = kal_create_mutex("nvram_mon_mutex");
}

void nvram_mon_check_and_notify(module_type write_mod, 
    nvram_write_req_struct *write_req, kal_uint8 *write_buff, kal_uint16 buff_len)
{
    int idx;
    nvram_mon_reg_info *reg_info;
    nvram_ltable_entry_struct *ldi;
    kal_uint16 write_start = write_req->para;
    kal_uint16 write_end = write_start;
    kal_uint32 mixed_start, mixed_end, mixed_buf_len;
    kal_uint8* mixed_buf;

    for (idx = 0; idx < NVRAM_MAX_NOTIFY_NUM; idx++) {
        reg_info = &nvram_reg_list[idx];
        
        if (KAL_FALSE == reg_info->registered) {
            continue;
        }

        if (write_mod != reg_info->reg_module && write_req->file_idx == reg_info->lid) {
            nvram_util_get_data_item(&ldi, write_req->file_idx);
            write_end = write_start + buff_len/ldi->size - 1;
            if (write_start > reg_info->rec_index + reg_info->rec_amount - 1 || write_end < reg_info->rec_index) {
                continue;   // not in wirte monitor range
            }

            mixed_start = MAX(write_start, reg_info->rec_index);
            mixed_end = MIN(write_end, reg_info->rec_index + reg_info->rec_amount - 1);
            
            mixed_buf = write_buff+(mixed_start-write_start)*ldi->size;
            mixed_buf_len = (mixed_end - mixed_start + 1)*ldi->size;
            
            reg_info->hit_count ++;
            nvram_mon_notify_change(reg_info->reg_module, write_req->file_idx, mixed_start, mixed_buf, mixed_buf_len);
        }
    }
}


/********************************************************
 *
 *    NVRAM MSG HANDLERs
 *
 ********************************************************/
void nvram_mon_dereg_handler(ilm_struct *ilm_ptr)
{ 
    nvram_read_req_struct *req = (nvram_read_req_struct *)ilm_ptr->local_para_ptr;

    NVRAM_EXT_ASSERT(req != NULL,(kal_uint32)req, NVRAM_LOC_DEREG_NOTIFY_REQ_IS_NULL_1, 0);
    nvram_mon_dereg_notify(ilm_ptr->src_mod_id, req->file_idx, req->para, req->rec_amount);    
}

void nvram_mon_reg_handler(ilm_struct *ilm_ptr)
{
    nvram_read_req_struct *req = (nvram_read_req_struct *)ilm_ptr->local_para_ptr;

    NVRAM_EXT_ASSERT(req != NULL,(kal_uint32)req, NVRAM_LOC_REG_NOTIFY_REQ_IS_NULL_1, 0);
    nvram_mon_reg_notify(ilm_ptr->src_mod_id, req->file_idx, req->para, req->rec_amount);    
}


/********************************************************
 *
 *    NVRAM EXTERNAL APIs (Reserved.)
 *
 ********************************************************/
void nvram_external_reg_monitor(module_type reg_mod, nvram_lid_enum lid, kal_uint16 rec_idx, kal_uint16 rec_amt)
{
    nvram_mon_dereg_notify(reg_mod, lid, rec_idx, rec_amt); 
}


void nvram_external_dereg_monitor(module_type reg_mod, nvram_lid_enum lid, kal_uint16 rec_idx, kal_uint16 rec_amt)
{
     nvram_mon_dereg_notify(reg_mod, lid, rec_idx, rec_amt); 
}

#else

void nvram_mon_init() {};
void nvram_mon_reg_handler(ilm_struct *ilm_ptr){};
void nvram_mon_dereg_handler(ilm_struct *ilm_ptr){};
void nvram_mon_check_and_notify(module_type src_mod, nvram_write_req_struct *write_req, kal_uint8 *write_buff, kal_uint16 buff_len){};

#endif

