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
 * nvram_ut_test.c
 *
 * Author:
 * -------
 * -------
 *
 ****************************************************************************/
#if defined (__NVRAM_UT_TEST__)


#include "nvram_main.h"
#include "nvram_interface.h"
#include "nvram_struct.h"
#include "nvram_msgid.h"
#include "nvram_io.h"
#include "syscomp_config.h"
#include "svc_sap.h"
#include "nvram_editor_data_item.h"
#include "us_timer.h"
#include "tst_sap.h"
#include "tst_msgid.h"
#include "math.h"
#include "stdlib.h"

#define nvram_ut_trace(...) kal_prompt_trace(MOD_NVRAM, __VA_ARGS__)
#define NVRAM_MAX_OP_BUFFER_SIZE    63*1024
#define NVRAM_EF_SW_VERNO_LID   NVRAM_EF_SYS_LID
#define SW_VERNO_RECORD_NUMBER  1
#define RECORD_CHANGE_SIZE  2

/*
2 is an error number
this define is used to make meesage and external API return back value agreement
External API: KAL_TRUE: success, KAL_FALSE: fail
Message: 0: success, others: fail
*/
#define agreement_return_value(value) \
        if(KAL_TRUE == value)\
            value = NVRAM_ERRNO_SUCCESS;\
        else\
            value = 0x2\

typedef kal_bool (*ut_testcase_fn_ptr)(kal_uint32 flags, void *param);
typedef struct
{
    ut_testcase_fn_ptr _main_fn;
    kal_uint32         flags;
    void               *para;
    kal_char           *description;
    kal_char           *testplan_section;
}ut_testcase_struct;

typedef struct
{
    kal_uint32 test_case_lst[10][20];
    kal_uint8 break_test_case_num; //user may set test case list as: 2.1 2.2 2.3
    kal_uint8 sub_test_case_num; //test may break at 2.2.1.1, and this is sub case of 2.2
    kal_uint8 valid_test_case_num_total;
    kal_uint8 context_is_valid; //mark whether this log is valid
    kal_uint32 tst_time_consume;
    kal_uint32 total_case_number;
    kal_uint32 fail_case_number;
}factory_test_context_struct;

typedef struct
{
    kal_uint32 start_record_size; //from start_record_size to end_record_size will full cover
    kal_uint32 end_record_size;
}record_size_boundary_struct;

typedef struct
{
    kal_uint32 start_record_number; //from start_record_size to end_record_size will full cover
    kal_uint32 end_record_number;
}record_number_boundary_struct;


kal_uint32 test_lid_enum[]=
{
    NVRAM_EF_NVRAM_TEST_1_LID,
    NVRAM_EF_NVRAM_TEST_2_LID,
    NVRAM_EF_NVRAM_TEST_3_LID,
    NVRAM_EF_NVRAM_TEST_4_LID,
    NVRAM_EF_NVRAM_TEST_5_LID,
    NVRAM_EF_NVRAM_TEST_6_LID,    
};

kal_uint8 test_case_list[10][20];
kal_uint8 valid_test_case_num;
kal_uint8 is_clean_boot_test;
kal_taskid nvram_test_task1_id;
kal_uint8 is_insulation_access;
kal_uint32 nvram_ut_assert_flag;
kal_uint8 factory_test_reboot_finish; //factory reset will reboot SP, this flag is used for mark reboot finish
kal_uint8 manual_ota_reboot_finish;
kal_uint8 test_number, sub_test_number; //mark test which test case is runing
kal_uint32 nvram_boot_trace;
kal_uint8 test_lid_number = sizeof(test_lid_enum)/sizeof(kal_uint32);
//--------------------------------------------------------------------------------------------------------------------
//kal_uint32 data_buffer[NVRAM_EF_TEST_LID_RECORD_TOTAL*NVRAM_EF_TEST_LID_SIZE/4 + 256]; //test LID total size + 4KB
//kal_uint32 cmp_buffer[NVRAM_EF_TEST_LID_RECORD_TOTAL*NVRAM_EF_TEST_LID_SIZE/4 + 256];
#define NVRAM_UT_BUFFER_SIZE (70 * 1024)
kal_uint8 large_buffer[NVRAM_UT_BUFFER_SIZE]; // large buffer is for RAW data test, shared with data_buffer & cmp_buffer
kal_uint32 *data_buffer = (kal_uint32*)large_buffer; 
kal_uint32 *cmp_buffer = (kal_uint32*)(large_buffer + (NVRAM_EF_TEST_LID_RECORD_TOTAL*NVRAM_EF_TEST_LID_SIZE + 4096));
typedef unsigned int nvram_large_buffer_check[NVRAM_UT_BUFFER_SIZE - 2*(NVRAM_EF_TEST_LID_RECORD_TOTAL*NVRAM_EF_TEST_LID_SIZE + 4096)];
//--------------------------------------------------------------------------------------------------------------------
kal_uint32 fail_case_num, total_case_num;
kal_uint32 start_test_time, end_test_time, test_time_consume;
kal_uint8 const table_default[NVRAM_EF_TEST_LID_RECORD_TOTAL][NVRAM_EF_TEST_LID_SIZE] = {
    {0x01, },
    {0x02, },
    {0x03, },
    {0x04, },
    {0x05, },
    {0x06, },
    {0x07, },
    {0x08, },
    {0x09, },
    {0x0A, },
};

extern void SST_Secure_Algo(kal_uint8 Direction, kal_uint32 ContentAddr,
                        kal_uint32 ContentLen, kal_uint8 *CustomSeed,
                        kal_uint8 *ResText); 
extern kal_bool nvram_external_read_chksum_8b(nvram_lid_enum LID, kal_uint16 rec_index, kal_uint16 rec_amount, kal_uint8 *buffer, kal_uint32 buffer_size);
extern kal_mutexid g_nvram_fs_mutex;

void nvram_ut_get_default_value(nvram_lid_core_enum lid, kal_uint8 *buffer, kal_uint16 buffer_size)
{
    kal_mem_set(buffer, 0x55, buffer_size);
}

/*
    For factory reset, we want to the LIDs backup to binregion is not default value.
    So this function will be called at nvram_init() end to modify the LID value.
*/
kal_bool nvram_write_test_lids()
{
    kal_uint8 i, j;
    nvram_ltable_entry_struct *ldi = NULL;

    kal_mem_set(data_buffer, 0, NVRAM_EF_TEST_LID_SIZE);
    data_buffer[0] = 0x1; //modify one data
    
    for(i = 0; i < test_lid_number; i++)
    {
        nvram_util_get_data_item(&ldi, test_lid_enum[i]);
        for(j = 1; j <= NVRAM_EF_TEST_LID_RECORD_TOTAL; j++)
        {
            if(!nvram_external_write_data(ldi->LID, j, (kal_uint8 *)data_buffer, ldi->size))
            {
                return KAL_FALSE;
            }
        }
    }

    return KAL_TRUE;
    
}

/*
Description: nvram_lid_cmpt_operation is used to merge several LID operations together and return result.
Parameters:
    LID: LID enum value
    operation_flag: this is 32-bit parameter and each 8-bit stand one kind of operation, parsing will start from high 8-bit -> low 8-bit
        0x1: reset, 0x2: read(just read API return success), 0x3: write, 0x4: read(read back default value)--------0x01020300 stands do reset, read, write one by one
    access_way: by message or external API
        0x1: external API, 0x2: message
Return Value:
    return value is a 32-bit vaule and each 8-bit respond to the operation_flag result.
        0x0: success, 0x1: fail--------0x00000000 stands all the operations are success
Important Note: 
    To simple the flow, this API make some assue: if send a message to NVRAM to read/write/reset,
    the next message in the task extq we assue it is the result of the last operation.
*/
#define CMPT_OP_FLAG_NULL       0x0
#define CMPT_OP_FLAG_RESET      0x1
#define CMPT_OP_FLAG_READ       0x2
#define CMPT_OP_FLAG_WRITE      0x3
#define CMPT_OP_FLAG_READBACK   0x4
#define CMPT_OP_FLAG_SET_LOCK     0x5
#define CMPT_OP_FLAG_SET_UNLOCK     0x6

#define CMPT_OP_WAY_API         0x1
#define CMPT_OP_WAY_MSG         0x2

#define CMPT_OP_FLAG_GEN(v1, v2, v3, v4)    ((v1 << 24) | (v2 << 16) | (v3 << 8) | v4)

kal_uint32 nvram_lid_cmpt_op_push(kal_uint32 value, kal_uint8 operation_flag)
{
    value <<= 8;
    value |= (operation_flag & 0xFF);
    return value;
}

kal_uint32 nvram_lid_cmpt_op_pop(kal_uint32 value, kal_uint8 *operation_flag)
{
    *operation_flag = (value >> 24);
    return (value << 8);
}

kal_uint32 nvram_lid_cmpt_operation(nvram_lid_enum LID, kal_uint32 operation_flag, kal_uint8 access_way, kal_uint32 start_record, kal_uint32 end_record)
{
    nvram_ltable_entry_struct *ldi = NULL;
    kal_uint32 temp_result = 0, final_result = 0, i;
    kal_uint8 *d_buffer, *c_buffer;
    nvram_reset_req_struct *reset_req;
    nvram_reset_cnf_struct *nvram_reset_cnf;
    nvram_read_req_struct *read_req;
    nvram_read_cnf_struct *nvram_read_cnf;
    nvram_write_req_struct *write_req;
    nvram_write_cnf_struct *nvram_write_cnf;
    nvram_set_lock_req_struct *nvram_set_lock_req;
    nvram_set_lock_cnf_struct *nvram_set_lock_cnf;
    kal_uint8 *pdu_write_buffer;
    ilm_struct current_ilm;
    kal_uint8 op_val;

    if((access_way != CMPT_OP_WAY_API) && (access_way != CMPT_OP_WAY_MSG))
    {
        return 0xFFFFFFFF;
    }

    if(!NVRAM_IS_LID_VALID(LID))
    {
        return 0x0FFFFFFF;
    }
    nvram_util_get_data_item(&ldi, LID);

    if(start_record < 1 || start_record > ldi->total_records)
    {
        return 0xFF0FFFFF;
    }

    if(end_record < 1 || end_record > ldi->total_records)
    {
        return 0xFFF0FFFF;
    }

    if(ldi->size > NVRAM_MAX_OP_BUFFER_SIZE)
    {
        return 0xF0FFFFFF;
    }

    do
    {
        operation_flag = nvram_lid_cmpt_op_pop(operation_flag, &op_val);
        switch(op_val)
        {
            case CMPT_OP_FLAG_RESET: //reset
                if(CMPT_OP_WAY_API == access_way) //external API
                {
                    temp_result = nvram_external_reset_data(ldi->LID, start_record, end_record-start_record+1);
                    agreement_return_value(temp_result);
                }
                else if(CMPT_OP_WAY_MSG == access_way) //message
                {
                    reset_req = (nvram_reset_req_struct *)construct_local_para(sizeof(nvram_reset_req_struct), TD_CTRL);
                    reset_req->ref_count = 1;
                    reset_req->LID = ldi->LID;
                    reset_req->rec_index = start_record;
                    reset_req->rec_amount = end_record-start_record+1;
                    reset_req->reset_category = NVRAM_RESET_CERTAIN;
                    reset_req->app_id = NVRAM_APP_RESERVED;

                    msg_send6(kal_get_active_module_id(), MOD_NVRAM, PS_NVRAM_SAP, MSG_ID_NVRAM_RESET_REQ, 
                            (local_para_struct*)reset_req, NULL);
                    msg_receive_extq(&current_ilm);
                    nvram_reset_cnf = (nvram_reset_cnf_struct*)current_ilm.local_para_ptr;
                    temp_result = nvram_reset_cnf->result; //NVRAM_ERRNO_SUCCESS(0) stands success
                    destroy_ilm(&current_ilm);
                }
                
                if(NVRAM_ERRNO_SUCCESS == temp_result)
                {   
                    d_buffer = (kal_uint8*)get_ctrl_buffer(ldi->size);
                    c_buffer = (kal_uint8*)get_ctrl_buffer(ldi->size);
                    for(i = start_record; i <= end_record; i++)
                    {
                        nvram_get_default_value_to_write(ldi, i, c_buffer, ldi->size);
                        temp_result = nvram_external_read_data(ldi->LID, i, d_buffer, ldi->size);
                        agreement_return_value(temp_result);
                        if(NVRAM_ERRNO_SUCCESS == temp_result)
                        {   
                            /*if buffer data is the same kal_mem_cmp will return 0 (NVRAM_ERRNO_SUCCESS)*/
                            temp_result = kal_mem_cmp((kal_char*)d_buffer, (kal_char*)c_buffer, ldi->size);
                        }
                        else
                        {
                            nvram_ut_trace("[NVUT] nvram_lid_cmpt_operation(): reset-read fail!\n\r");
                        }
                        
                        if(NVRAM_ERRNO_SUCCESS != temp_result)
                        {
                            nvram_ut_trace("[NVUT] nvram_lid_cmpt_operation(): reset-read is not default value!\n\r");
                            break;
                        }
                    }
                    free_ctrl_buffer(d_buffer);
                    free_ctrl_buffer(c_buffer);
                }
                else
                {
                    nvram_ut_trace("[NVUT] nvram_lid_cmpt_operation(): reset-reset fail!\n\r");
                }
                break;
                
            case CMPT_OP_FLAG_READ: //read
                if(CMPT_OP_WAY_API == access_way) //external API
                {
                    d_buffer = (kal_uint8*)get_ctrl_buffer(ldi->size);
                    /*for read operation we just judge return value, if it is NVRAM_ERRNO_SUCCESS, we assue it success*/
                    for(i = start_record; i <= end_record; i++)
                    {
                        temp_result = nvram_external_read_data(ldi->LID, i, d_buffer, ldi->size);
                        agreement_return_value(temp_result);
                        if(NVRAM_ERRNO_SUCCESS != temp_result)
                        {
                            nvram_ut_trace("[NVUT] nvram_lid_cmpt_operation(): api_read-read fail!\n\r");
                            break;
                        }
                    }
                    free_ctrl_buffer(d_buffer);
                }
                else if(CMPT_OP_WAY_MSG == access_way) //message
                {
                    for(i = start_record; i <= end_record; i++)
                    {
                        read_req = (nvram_read_req_struct *)construct_local_para(sizeof(nvram_read_req_struct), TD_CTRL);
                        read_req->ref_count = 1;
                        read_req->file_idx = ldi->LID;
                        read_req->para = i;
                        read_req->rec_amount = 1;
                        msg_send6(kal_get_active_module_id(), MOD_NVRAM, PS_NVRAM_SAP, MSG_ID_NVRAM_READ_REQ, 
                            (local_para_struct*)read_req, NULL);    
                        msg_receive_extq(&current_ilm);
                        nvram_read_cnf = (nvram_read_cnf_struct*)current_ilm.local_para_ptr;
                        temp_result = nvram_read_cnf->result; //NVRAM_ERRNO_SUCCESS(0) stands success
                        destroy_ilm(&current_ilm);
                        if(NVRAM_ERRNO_SUCCESS != temp_result)
                        {
                            nvram_ut_trace("[NVUT] nvram_lid_cmpt_operation(): msg_read-read fail!\n\r");
                            break;
                        }
                    }
                }
                break;
                
            case CMPT_OP_FLAG_WRITE: //write
                if(CMPT_OP_WAY_API == access_way) //external API
                {
                    d_buffer = (kal_uint8*)get_ctrl_buffer(ldi->size);
                    d_buffer[0] = 0x1; //modify some data
                    if(ldi->size >= 3)
                    {
                        d_buffer[1] = 0x2;
                        d_buffer[2] = 0x3;
                    }
                    for(i = start_record; i <= end_record; i++)
                    {
                        temp_result = nvram_external_write_data(ldi->LID, i, d_buffer, ldi->size);
                        agreement_return_value(temp_result);
                        if(NVRAM_ERRNO_SUCCESS != temp_result)
                        {
                            nvram_ut_trace("[NVUT] nvram_lid_cmpt_operation(): api_write-write fail!\n\r");
                            break;
                        }
                    }

                    if(NVRAM_ERRNO_SUCCESS == temp_result)
                    {
                        c_buffer = (kal_uint8*)get_ctrl_buffer(ldi->size);
                        for(i = start_record; i <= end_record; i++)
                        {
                            kal_mem_set(c_buffer, 0, ldi->size);
                            temp_result = nvram_external_read_data(ldi->LID, i, c_buffer, ldi->size);
                            agreement_return_value(temp_result);
                            if(NVRAM_ERRNO_SUCCESS == temp_result)
                            {
                                /*if buffer data is the same kal_mem_cmp will return 0 (NVRAM_ERRNO_SUCCESS)*/
                                temp_result = kal_mem_cmp((kal_char*)d_buffer, (kal_char*)c_buffer, ldi->size);                             
                            }
                            else
                            {
                                nvram_ut_trace("[NVUT] nvram_lid_cmpt_operation(): api_write-read fail!\n\r");
                            }
                            
                            if(NVRAM_ERRNO_SUCCESS != temp_result)
                            {
                                nvram_ut_trace("[NVUT] nvram_lid_cmpt_operation(): api_write-read back is not expect!\n\r");
                                break;
                            }
                        }
                        free_ctrl_buffer(d_buffer);
                        free_ctrl_buffer(c_buffer);
                    }
                    else
                    {
                        free_ctrl_buffer(d_buffer);
                    }
                }
                else if(CMPT_OP_WAY_MSG == access_way) //message
                {
                    d_buffer = (kal_uint8*)get_ctrl_buffer(ldi->size);
                    d_buffer[0] = 0x1; //make some modify
                    if(ldi->size >= 3)
                    {
                        d_buffer[1] = 0x2;
                        d_buffer[2] = 0x3;
                    }
                    for(i = start_record; i <= end_record; i++)
                    {
                        write_req = (nvram_write_req_struct *)construct_local_para(sizeof(nvram_write_req_struct), TD_CTRL);
                        pdu_write_buffer = (kal_uint8 *)construct_peer_buff(ldi->size, 0, 0, TD_CTRL);
                        kal_mem_cpy(get_peer_buff_pdu((peer_buff_struct*)pdu_write_buffer, 0), d_buffer, ldi->size);
                        write_req->ref_count = 1;
                        write_req->file_idx = ldi->LID;
                        write_req->para = i;
                        msg_send6(kal_get_active_module_id(), MOD_NVRAM, PS_NVRAM_SAP, MSG_ID_NVRAM_WRITE_REQ, 
                                (local_para_struct*)write_req, (peer_buff_struct*)pdu_write_buffer);
                        msg_receive_extq(&current_ilm);
                        nvram_write_cnf = (nvram_write_cnf_struct*)current_ilm.local_para_ptr;
                        temp_result = nvram_write_cnf->result; //NVRAM_ERRNO_SUCCESS(0) stands success
                        destroy_ilm(&current_ilm);
                        if(NVRAM_ERRNO_SUCCESS != temp_result)
                        {
                            nvram_ut_trace("[NVUT] nvram_lid_cmpt_operation(): msg_write-write fail!\n\r");
                            break;
                        }
                    }

                    if(NVRAM_ERRNO_SUCCESS == temp_result)
                    {
                        c_buffer = (kal_uint8*)get_ctrl_buffer(ldi->size);
                        for(i = start_record; i <= end_record; i++)
                        {
                            kal_mem_set(c_buffer, 0, ldi->size);
                            temp_result = nvram_external_read_data(ldi->LID, i, c_buffer, ldi->size);
                            agreement_return_value(temp_result);
                            if(NVRAM_ERRNO_SUCCESS == temp_result)
                            {   
                                /*if buffer data is the same kal_mem_cmp will return 0 (NVRAM_ERRNO_SUCCESS)*/
                                temp_result = kal_mem_cmp((kal_char*)d_buffer, (kal_char*)c_buffer, ldi->size);
                            }
                            else
                            {
                                nvram_ut_trace("[NVUT] nvram_lid_cmpt_operation(): msg_write-read fail!\n\r");
                            }
                            if(NVRAM_ERRNO_SUCCESS != temp_result)
                            {
                                nvram_ut_trace("[NVUT] nvram_lid_cmpt_operation(): msg_write-read is not expect!\n\r");
                                break;
                            }                           
                        }
                        free_ctrl_buffer(d_buffer);
                        free_ctrl_buffer(c_buffer);                     
                    }
                    else
                    {
                        free_ctrl_buffer(d_buffer);
                    }
                }
                break;
                
            case CMPT_OP_FLAG_READBACK: //read back default value
                if(CMPT_OP_WAY_API == access_way) //external API
                {
                    d_buffer = (kal_uint8*)get_ctrl_buffer(ldi->size);
                    c_buffer = (kal_uint8*)get_ctrl_buffer(ldi->size);
                    /*for read operation we just judge return value, if it is NVRAM_ERRNO_SUCCESS, we assue it success*/
                    for(i = start_record; i <= end_record; i++)
                    {
                        temp_result = nvram_external_read_data(ldi->LID, i, d_buffer, ldi->size);
                        agreement_return_value(temp_result);
                        if(NVRAM_ERRNO_SUCCESS != temp_result)
                        {
                            nvram_ut_trace("[NVUT] nvram_lid_cmpt_operation(): api_dread-read fail!\n\r");
                            break;
                        }
                        
                        nvram_get_default_value_to_write(ldi, i, c_buffer, ldi->size);
                        temp_result = kal_mem_cmp(c_buffer, d_buffer, ldi->size);
                        if(0 != temp_result)
                        {
                            nvram_ut_trace("[NVUT] nvram_lid_cmpt_operation(): api_dread-read back is not default value!\n\r");
                            break;
                        }
                    }
                    free_ctrl_buffer(d_buffer);
                    free_ctrl_buffer(c_buffer);
                }
                else if(CMPT_OP_WAY_MSG == access_way) //message
                {
                    c_buffer = (kal_uint8*)get_ctrl_buffer(ldi->size);
                    for(i = start_record; i <= end_record; i++)
                    {
                        read_req = (nvram_read_req_struct *)construct_local_para(sizeof(nvram_read_req_struct), TD_CTRL);
                        read_req->ref_count = 1;
                        read_req->file_idx = ldi->LID;
                        read_req->para = i;
                        read_req->rec_amount = 1;
                        msg_send6(kal_get_active_module_id(), MOD_NVRAM, PS_NVRAM_SAP, MSG_ID_NVRAM_READ_REQ, 
                            (local_para_struct*)read_req, NULL);    
                        msg_receive_extq(&current_ilm);
                        nvram_read_cnf = (nvram_read_cnf_struct*)current_ilm.local_para_ptr;
                        temp_result = nvram_read_cnf->result; //NVRAM_ERRNO_SUCCESS(0) stands success
                        if(NVRAM_ERRNO_SUCCESS != temp_result)
                        {
                            nvram_ut_trace("[NVUT] nvram_lid_cmpt_operation(): msg_dread-read fail!\n\r");
                            break;
                        }
                        nvram_get_default_value_to_write(ldi, i, c_buffer, ldi->size);
                        temp_result = kal_mem_cmp(c_buffer, 
                                                  get_peer_buff_pdu((peer_buff_struct*)current_ilm.peer_buff_ptr, 0), 
                                                  ldi->size);
                        destroy_ilm(&current_ilm);
                        if(0 != temp_result)
                        {
                            nvram_ut_trace("[NVUT] nvram_lid_cmpt_operation(): msg_dread-read back is not defalut value!\n\r");
                            break;
                        }
                    }
                    free_ctrl_buffer(c_buffer);
                }
                break;
            case CMPT_OP_FLAG_SET_LOCK:
                if(CMPT_OP_WAY_MSG == access_way) //message
                {
                    nvram_set_lock_req = (nvram_set_lock_req_struct *)construct_local_para(sizeof(nvram_set_lock_req_struct), TD_CTRL);
                    nvram_set_lock_req->lock_en = NVRAM_LOCK_ENABLE;
                    msg_send6(kal_get_active_module_id(), MOD_NVRAM, PS_NVRAM_SAP, MSG_ID_NVRAM_SET_LOCK_REQ, 
                            (local_para_struct*)nvram_set_lock_req, NULL);
                    msg_receive_extq(&current_ilm);
                    nvram_set_lock_cnf = (nvram_set_lock_cnf_struct*)current_ilm.local_para_ptr;
                    temp_result = nvram_set_lock_cnf->result; //NVRAM_ERRNO_SUCCESS(0) stands success
                    destroy_ilm(&current_ilm);
                }
                break;
            case CMPT_OP_FLAG_SET_UNLOCK:
                if(CMPT_OP_WAY_MSG == access_way) //message
                {
                    nvram_set_lock_req = (nvram_set_lock_req_struct *)construct_local_para(sizeof(nvram_set_lock_req_struct), TD_CTRL);
                    nvram_set_lock_req->lock_en = NVRAM_LOCK_DISABLE;
                    msg_send6(kal_get_active_module_id(), MOD_NVRAM, PS_NVRAM_SAP, MSG_ID_NVRAM_SET_LOCK_REQ, 
                            (local_para_struct*)nvram_set_lock_req, NULL);
                    msg_receive_extq(&current_ilm);
                    nvram_set_lock_cnf = (nvram_set_lock_cnf_struct*)current_ilm.local_para_ptr;
                    temp_result = nvram_set_lock_cnf->result; //NVRAM_ERRNO_SUCCESS(0) stands success
                    destroy_ilm(&current_ilm);
                }
                break;    
            default:
                break;
        }
        final_result = nvram_lid_cmpt_op_push(final_result, temp_result);
        
    }while(operation_flag != CMPT_OP_FLAG_NULL);

    return final_result;
    
}


/*
This function is used to reset the NVRAM UT test LIDs to default seetings.
Default settings value please refer to test plan.
Input:
    One of NVRAM_EF_NVRAM_TEST_1_LID~NVRAM_EF_NVRAM_TEST_6_LID
Output:
    KAL_TRUE: success
    KAL_FALSE: fail
*/
kal_bool reset_test_lid_default_setting(nvram_lid_enum LID)
{
    nvram_ltable_entry_struct *ldi = NULL;

    if(!NVRAM_IS_LID_VALID(LID))
    {
        return KAL_FALSE;
    }
    nvram_util_get_data_item(&ldi, LID);
    
    switch(ldi->LID)
    {
        case NVRAM_EF_NVRAM_TEST_1_LID:
            ldi->category = NVRAM_CATEGORY_USER;
            ldi->attr = NVRAM_ATTR_AVERAGE | NVRAM_ATTR_GEN_DEFAULT;
            ldi->size = 1024;
            ldi->total_records = 10;
            ldi->default_value = NVRAM_EF_ZERO_DEFAULT; 
            kal_mem_cpy(ldi->fileverno, NVRAM_EF_NVRAM_TEST_1_LID_VERNO, 3);
            break;
        case NVRAM_EF_NVRAM_TEST_2_LID:
            ldi->category = NVRAM_CATEGORY_INTERNAL;
            ldi->attr = NVRAM_ATTR_AVERAGE | NVRAM_ATTR_GEN_DEFAULT;
            ldi->size = 1024;
            ldi->total_records = 10;
            ldi->default_value = NVRAM_EF_ZERO_DEFAULT;
            kal_mem_cpy(ldi->fileverno, NVRAM_EF_NVRAM_TEST_2_LID_VERNO, 3);
            break;
        case NVRAM_EF_NVRAM_TEST_3_LID:
            ldi->category = NVRAM_CATEGORY_CALIBRAT;
            ldi->attr = NVRAM_ATTR_AVERAGE | NVRAM_ATTR_GEN_DEFAULT;
            ldi->size = 1024;
            ldi->total_records = 10;
            ldi->default_value = NVRAM_EF_ZERO_DEFAULT;
            kal_mem_cpy(ldi->fileverno, NVRAM_EF_NVRAM_TEST_3_LID_VERNO, 3);
            break;
        case NVRAM_EF_NVRAM_TEST_4_LID:
            ldi->category = NVRAM_CATEGORY_IMPORTANT;
            ldi->attr = NVRAM_ATTR_AVERAGE | NVRAM_ATTR_GEN_DEFAULT;
            ldi->size = 1024;
            ldi->total_records = 10;
            ldi->default_value = NVRAM_EF_ZERO_DEFAULT;
            kal_mem_cpy(ldi->fileverno, NVRAM_EF_NVRAM_TEST_4_LID_VERNO, 3);
            break;
        case NVRAM_EF_NVRAM_TEST_5_LID:
            ldi->category = NVRAM_CATEGORY_IMPORTANT_L1;
            ldi->attr = NVRAM_ATTR_AVERAGE | NVRAM_ATTR_GEN_DEFAULT;
            ldi->size = 1024;
            ldi->total_records = 10;
            ldi->default_value = NVRAM_EF_ZERO_DEFAULT;
            kal_mem_cpy(ldi->fileverno, NVRAM_EF_NVRAM_TEST_5_LID_VERNO, 3);
            break;
        case NVRAM_EF_NVRAM_TEST_6_LID:
            ldi->category = NVRAM_CATEGORY_IMPORTANT_L4;
            ldi->attr = NVRAM_ATTR_AVERAGE | NVRAM_ATTR_GEN_DEFAULT;
            ldi->size = 1024;
            ldi->total_records = 10;
            ldi->default_value = NVRAM_EF_ZERO_DEFAULT;
            kal_mem_cpy(ldi->fileverno, NVRAM_EF_NVRAM_TEST_6_LID_VERNO, 3);
            break;
        case NVRAM_EF_NVRAM_TEST_7_LID:
            ldi->category = NVRAM_CATEGORY_CALIBRAT;
            ldi->attr = NVRAM_ATTR_AVERAGE | NVRAM_ATTR_RAW_DATA;
            ldi->size = 1024;
            ldi->total_records = 1;
            ldi->default_value = NVRAM_EF_ZERO_DEFAULT;
            kal_mem_cpy(ldi->fileverno, NVRAM_EF_NVRAM_TEST_7_LID_VERNO, 3);
            break;
        default:
            return KAL_FALSE;
    }

    return KAL_TRUE;
}

kal_bool lid_verno_increase_one(nvram_lid_enum LID)
{
    nvram_ltable_entry_struct *ldi = NULL;
    kal_uint8 overflow_flag, i;
    
    if(!NVRAM_IS_LID_VALID(LID))
    {
        return KAL_FALSE;
    }
    nvram_util_get_data_item(&ldi, LID);

    for(i = 0, overflow_flag = 1; (i < 3) && (overflow_flag); i++)
    {   
        if((ldi->fileverno[2-i] - '0') < 9)
        {
            ldi->fileverno[2-i] += 1;
            overflow_flag = 0;
        }
        else
        {
            ldi->fileverno[2-i] = '0';
            overflow_flag = 1;
        }
    }
    
    return KAL_TRUE;
}

kal_bool modify_md_sw_version()
{
    kal_uint8 *d_buffer;
    nvram_ltable_entry_struct *ldi = NULL;
    
    nvram_util_get_data_item(&ldi, NVRAM_EF_SW_VERNO_LID);
    d_buffer = (kal_uint8*)get_ctrl_buffer(ldi->size);
    if(!nvram_external_read_data(ldi->LID, SW_VERNO_RECORD_NUMBER, d_buffer, ldi->size))
    {
        free_ctrl_buffer(d_buffer);
        return KAL_FALSE;
    }
    d_buffer[0] += 0x1; //modify one uint in the buffer
    if(!nvram_external_write_data(ldi->LID, SW_VERNO_RECORD_NUMBER, d_buffer, ldi->size))
    {
        free_ctrl_buffer(d_buffer);
        return KAL_FALSE;
    }
    free_ctrl_buffer(d_buffer);

    return KAL_TRUE;
}

kal_bool delete_special_version_lid(nvram_lid_enum LID, kal_uint32 start_version, kal_uint32 end_version)
{
    nvram_ltable_entry_struct *ldi = NULL;
    kal_wchar filename[NVRAM_MAX_PATH_LEN];
    nvram_folder_enum folder_index;
    NVRAM_FILE_NAME nvramname;
    kal_uint32 i;
    kal_uint8 lid_verno_bak[3];
    
    if(!NVRAM_IS_LID_VALID(LID))
    {
        return KAL_FALSE;
    }

    if((start_version > end_version) || (end_version > 999))
    {
        return KAL_FALSE;
    }
    nvram_util_get_data_item(&ldi, LID);
    kal_mem_cpy(lid_verno_bak, ldi->fileverno, 3);
    ldi->fileverno[0] = '0'; //set LID verno as "000"
    ldi->fileverno[1] = '0';
    ldi->fileverno[2] = '0';

    for(i = 0; i < start_version; i++) //skip to start_version
    {
        lid_verno_increase_one(LID);
    }

    for(i = start_version; i <= end_version; i++) //delete related LID version
    {
        folder_index = nvram_query_folder_index(ldi->category);
        nvram_util_make_lid_filename(ldi, nvramname, KAL_TRUE);
        nvram_query_file_name(folder_index, nvramname, filename);
        nvram_util_mark_file_uncreated(ldi);
        FS_Delete(filename);
        
        if(ldi->attr & NVRAM_ATTR_MULTIPLE)
        {
            nvram_util_make_lid_filename(ldi, nvramname, KAL_FALSE);
            nvram_query_file_name(folder_index, nvramname, filename);
            FS_Delete(filename);
        }
        lid_verno_increase_one(LID);
    }
    kal_mem_cpy(ldi->fileverno, lid_verno_bak, 3);
    
    return KAL_TRUE;
}

kal_bool first_boot_basic_access(kal_uint32 flags, void *param)
{
    kal_wchar filename[NVRAM_MAX_PATH_LEN];
    kal_uint8 i;

/*  default settings is OK
    nvram_util_get_data_item(&ldi, NVRAM_EF_NVRAM_TEST_1_LID);
    ldi->category = NVRAM_CATEGORY_USER;
    ldi->attr = NVRAM_ATTR_AVERAGE;
    ldi->size = 1024;
    ldi->total_records = 10;
    ldi->default_value = NVRAM_EF_ZERO_DEFAULT;

    nvram_util_get_data_item(&ldi, NVRAM_EF_NVRAM_TEST_2_LID);
    ldi->category = NVRAM_CATEGORY_INTERNAL;
    ldi->attr = NVRAM_ATTR_AVERAGE;
    ldi->size = 1024;
    ldi->total_records = 10;
    ldi->default_value = NVRAM_EF_ZERO_DEFAULT;
    
    nvram_util_get_data_item(&ldi, NVRAM_EF_NVRAM_TEST_3_LID);
    ldi->category = NVRAM_CATEGORY_CALIBRAT;
    ldi->attr = NVRAM_ATTR_AVERAGE;
    ldi->size = 1024;
    ldi->total_records = 10;
    ldi->default_value = NVRAM_EF_ZERO_DEFAULT;
    
    nvram_util_get_data_item(&ldi, NVRAM_EF_NVRAM_TEST_4_LID);
    ldi->category = NVRAM_CATEGORY_IMPORTANT;
    ldi->attr = NVRAM_ATTR_AVERAGE;
    ldi->size = 1024;
    ldi->total_records = 10;
    ldi->default_value = NVRAM_EF_ZERO_DEFAULT;

    nvram_util_get_data_item(&ldi, NVRAM_EF_NVRAM_TEST_5_LID);
    ldi->category = NVRAM_CATEGORY_IMPORTANT_L1;
    ldi->attr = NVRAM_ATTR_AVERAGE;
    ldi->size = 1024;
    ldi->total_records = 10;
    ldi->default_value = NVRAM_EF_ZERO_DEFAULT;

    nvram_util_get_data_item(&ldi, NVRAM_EF_NVRAM_TEST_6_LID);
    ldi->category = NVRAM_CATEGORY_IMPORTANT_L4;
    ldi->attr = NVRAM_ATTR_AVERAGE;
    ldi->size = 1024;
    ldi->total_records = 10;
    ldi->default_value = NVRAM_EF_ZERO_DEFAULT;
*/

    is_insulation_access = 1;

    NVRAM_FS_MAKE_ROOT_PATH(filename);
    FS_XDelete(filename, (FS_FILE_TYPE | FS_DIR_TYPE | FS_RECURSIVE_TYPE), NULL, 0);
#if defined(__MTK_TARGET__) && defined(__NVRAM_IMPORTANT_PARTITIONS__)
    FS_XDelete((const WCHAR*)L"X:\\NV_TEST", (FS_FILE_TYPE|FS_DIR_TYPE|FS_RECURSIVE_TYPE), NULL, 0);
    FS_XDelete((const WCHAR*)L"Y:\\NV_TEST", (FS_FILE_TYPE|FS_DIR_TYPE|FS_RECURSIVE_TYPE), NULL, 0);
#endif  

    nvram_init();

    for(i = 0; i < test_lid_number; i++)
    {
        if(0 != nvram_lid_cmpt_operation(test_lid_enum[i], 
                                         CMPT_OP_FLAG_GEN(CMPT_OP_FLAG_READBACK, CMPT_OP_FLAG_WRITE, CMPT_OP_FLAG_RESET, 0), 
                                         CMPT_OP_WAY_API, 1, NVRAM_EF_TEST_LID_RECORD_TOTAL))
        {
            nvram_ut_trace("[NVUT] first_boot_basic_access(): LID cmpt operations fail!\n\r");
            is_insulation_access = 0;
            return KAL_FALSE;
        }
    }

    FS_XDelete(filename, (FS_FILE_TYPE | FS_DIR_TYPE | FS_RECURSIVE_TYPE), NULL, 0);
#if defined(__MTK_TARGET__) && defined(__NVRAM_IMPORTANT_PARTITIONS__)
    FS_XDelete((const WCHAR*)L"X:\\NV_TEST", (FS_FILE_TYPE|FS_DIR_TYPE|FS_RECURSIVE_TYPE), NULL, 0);
    FS_XDelete((const WCHAR*)L"Y:\\NV_TEST", (FS_FILE_TYPE|FS_DIR_TYPE|FS_RECURSIVE_TYPE), NULL, 0);
#endif

    is_insulation_access = 0;

    return KAL_TRUE;
}


/*
store test logs to LID6, and this LID is stored in protect_f partition
*/
void save_context_notify_tester()
{
    nvram_ltable_entry_struct *ldi = NULL;
    factory_test_context_struct *test_context;

    nvram_util_get_data_item(&ldi, NVRAM_EF_NVRAM_TEST_6_LID);
    test_context = (factory_test_context_struct*)data_buffer;
    test_context->context_is_valid = 0xAB; //a special value we appoint
    test_context->break_test_case_num = test_number;
    test_context->sub_test_case_num = sub_test_number;
    test_context->valid_test_case_num_total = valid_test_case_num;
    test_context->total_case_number = total_case_num;
    test_context->fail_case_number = fail_case_num;
    test_context->tst_time_consume = ust_get_current_time() - start_test_time;
    kal_mem_cpy(test_context->test_case_lst, test_case_list, sizeof(test_case_list));
    
    nvram_external_write_data(ldi->LID, 1, (kal_uint8 *)data_buffer, ldi->size); //write context to record 1

    nvram_external_read_data(ldi->LID, 1, (kal_uint8 *)cmp_buffer, ldi->size);
    if(0 == kal_mem_cmp(data_buffer, cmp_buffer, sizeof(test_case_list)))
    {
        nvram_ut_trace("[NVRAM UT] Save test context success!\n\r");
    }
    
    while(1)
    {
        nvram_ut_trace("[NVRAM UT] Please do SP \"Factory Reset Operation\" manually!\n\r");
        kal_sleep_task(kal_milli_secs_to_ticks(5000));
    }
}

void ota_save_context()
{
    nvram_ltable_entry_struct *ldi = NULL;
    factory_test_context_struct *test_context;

    nvram_util_get_data_item(&ldi, NVRAM_EF_NVRAM_TEST_6_LID);
    test_context = (factory_test_context_struct*)data_buffer;
    test_context->context_is_valid = 0xCD; //a special value we appoint
    test_context->break_test_case_num = test_number;
    test_context->sub_test_case_num = sub_test_number;
    test_context->valid_test_case_num_total = valid_test_case_num;
    test_context->total_case_number = total_case_num;
    test_context->fail_case_number = fail_case_num;
    test_context->tst_time_consume = ust_get_current_time() - start_test_time;
    kal_mem_cpy(test_context->test_case_lst, test_case_list, sizeof(test_case_list));
    
    nvram_external_write_data(ldi->LID, 1, (kal_uint8 *)data_buffer, ldi->size); //write context to record 1

    nvram_external_read_data(ldi->LID, 1, (kal_uint8 *)cmp_buffer, ldi->size);
    if(0 == kal_mem_cmp(data_buffer, cmp_buffer, sizeof(test_case_list)))
    {
        nvram_ut_trace("[NVRAM UT] Save test context success!\n\r");
    }
}

void ota_notify_tester(char *ptr)
{
    while(1)
    {
        nvram_ut_trace("[NVRAM UT] %s\n\r", ptr);
        kal_sleep_task(kal_milli_secs_to_ticks(5000));
    }
}



kal_bool factory_reset_user_access(kal_uint32 flags, void *param)
{
    nvram_ltable_entry_struct *ldi = NULL;
    
    if(!factory_test_reboot_finish)
    {
        save_context_notify_tester();
    }
    nvram_util_get_data_item(&ldi, NVRAM_EF_NVRAM_TEST_1_LID);
    
    //read, write and reset test
    if(0 != nvram_lid_cmpt_operation(NVRAM_EF_NVRAM_TEST_1_LID, 
                                     CMPT_OP_FLAG_GEN(CMPT_OP_FLAG_READBACK, CMPT_OP_FLAG_WRITE, CMPT_OP_FLAG_RESET, 0), 
                                     CMPT_OP_WAY_API, 1, NVRAM_EF_TEST_LID_RECORD_TOTAL))        
    {
        nvram_ut_trace("[NVUT] factory_reset_user_access(): access fail!\n\r");
        return KAL_FALSE;
    }
    
    return KAL_TRUE;
}

kal_bool factory_reset_internal_access(kal_uint32 flags, void *param)
{
    nvram_ltable_entry_struct *ldi = NULL;
    
    if(!factory_test_reboot_finish)
    {
        save_context_notify_tester();
    }
    nvram_util_get_data_item(&ldi, NVRAM_EF_NVRAM_TEST_2_LID);
    
    //read, write and reset test
    if(0 != nvram_lid_cmpt_operation(NVRAM_EF_NVRAM_TEST_2_LID, 
                                     CMPT_OP_FLAG_GEN(CMPT_OP_FLAG_READBACK, CMPT_OP_FLAG_WRITE, CMPT_OP_FLAG_RESET, 0), 
                                     CMPT_OP_WAY_API, 1, NVRAM_EF_TEST_LID_RECORD_TOTAL))        
    {
        nvram_ut_trace("[NVUT] factory_reset_internal_access(): access fail!\n\r");
        return KAL_FALSE;
    }
    
    return KAL_TRUE;
}

kal_bool factory_reset_calibrat_access(kal_uint32 flags, void *param)
{
    nvram_ltable_entry_struct *ldi = NULL;
    kal_uint32 i;
    
    if(!factory_test_reboot_finish)
    {
        save_context_notify_tester();
    }
    nvram_util_get_data_item(&ldi, NVRAM_EF_NVRAM_TEST_3_LID);

    //read test
    for(i = 1; i <= ldi->total_records; i++)
    {
        kal_mem_set(data_buffer, 0, NVRAM_EF_TEST_LID_SIZE);
        data_buffer[0] = 0x1; //modify data_buffer to special value write before binregion backup
        kal_mem_set(cmp_buffer, 0, ldi->size);
        if(!nvram_external_read_data(ldi->LID, i, (kal_uint8 *)cmp_buffer, ldi->size))
        {
            nvram_ut_trace("[NVUT] factory_reset_calibrat_access(): read fail!\n\r");
            return KAL_FALSE;
        }

        if(0 != kal_mem_cmp((kal_char*)data_buffer, (kal_char*)cmp_buffer, ldi->size))
        {
            nvram_ut_trace("[NVUT] factory_reset_calibrat_access(): read back value is not expect!\n\r");
            return KAL_FALSE;
        }
    }
    
    if(i <= ldi->total_records)
    {   
        nvram_ut_trace("[NVUT] factory_reset_calibrat_access(): read fail!\n\r");
        return KAL_FALSE; //return error number
    }
    
    //write and reset test
    if(0 != nvram_lid_cmpt_operation(NVRAM_EF_NVRAM_TEST_3_LID, 
                                     CMPT_OP_FLAG_GEN(CMPT_OP_FLAG_WRITE, CMPT_OP_FLAG_RESET, 0, 0), 
                                     CMPT_OP_WAY_API, 1, NVRAM_EF_TEST_LID_RECORD_TOTAL))
    {
        nvram_ut_trace("[NVUT] factory_reset_calibrat_access(): write/reset fail!\n\r");
        return KAL_FALSE;
    }
    
    return KAL_TRUE;
}

kal_bool factory_reset_important_access(kal_uint32 flags, void *param)
{
    nvram_ltable_entry_struct *ldi = NULL;
    kal_uint32 i;
        
    if(!factory_test_reboot_finish)
    {
        save_context_notify_tester();
    }
    nvram_util_get_data_item(&ldi, NVRAM_EF_NVRAM_TEST_4_LID);

    //read test
    for(i = 1; i <= ldi->total_records; i++)
    {
        kal_mem_set(data_buffer, 0, NVRAM_EF_TEST_LID_SIZE);
        data_buffer[0] = 0x1; //modify data_buffer to special value write before binregion backup
        kal_mem_set(cmp_buffer, 0, ldi->size);
        if(!nvram_external_read_data(ldi->LID, i, (kal_uint8 *)cmp_buffer, ldi->size))
        {
            nvram_ut_trace("[NVUT] factory_reset_important_access(): read fail!\n\r");
            return KAL_FALSE;
        }
        
        if(0 != kal_mem_cmp((kal_char*)data_buffer, (kal_char*)cmp_buffer, ldi->size))
        {
            nvram_ut_trace("[NVUT] factory_reset_important_access(): read back value is not expect!\n\r");
            return KAL_FALSE;
        }
    }
    
    //write and reset test
    if(0 != nvram_lid_cmpt_operation(NVRAM_EF_NVRAM_TEST_4_LID, 
                                     CMPT_OP_FLAG_GEN(CMPT_OP_FLAG_WRITE, CMPT_OP_FLAG_RESET, 0, 0), 
                                     CMPT_OP_WAY_API, 1, NVRAM_EF_TEST_LID_RECORD_TOTAL))        
    {   
        nvram_ut_trace("[NVUT] factory_reset_important_access(): write/reset fail!\n\r");
        return KAL_FALSE;
    }   
    
    return KAL_TRUE;
}


kal_bool factory_reset_importantl1_access(kal_uint32 flags, void *param)
{
    nvram_ltable_entry_struct *ldi = NULL;
    kal_uint32 i;
        
    if(!factory_test_reboot_finish)
    {
        save_context_notify_tester();
    }
    nvram_util_get_data_item(&ldi, NVRAM_EF_NVRAM_TEST_5_LID);

    //read test
    for(i = 1; i <= ldi->total_records; i++)
    {
        kal_mem_set(data_buffer, 0, NVRAM_EF_TEST_LID_SIZE);
        data_buffer[0] = 0x1; //modify data_buffer to special value write before binregion backup
        kal_mem_set(cmp_buffer, 0, ldi->size);
        if(!nvram_external_read_data(ldi->LID, i, (kal_uint8 *)cmp_buffer, ldi->size))
        {
            nvram_ut_trace("[NVUT] factory_reset_importantl1_access(): read fail!\n\r");
            return KAL_FALSE;
        }
        
        if(0 != kal_mem_cmp((kal_char*)data_buffer, (kal_char*)cmp_buffer, ldi->size))
        {
            nvram_ut_trace("[NVUT] factory_reset_importantl1_access(): read back value is not expect!\n\r");
            return KAL_FALSE;
        }
    }
    
    //write test and reset test
    if(0 != nvram_lid_cmpt_operation(NVRAM_EF_NVRAM_TEST_5_LID, 
                                     CMPT_OP_FLAG_GEN(CMPT_OP_FLAG_WRITE, CMPT_OP_FLAG_RESET, 0, 0), 
                                     CMPT_OP_WAY_API, 1, NVRAM_EF_TEST_LID_RECORD_TOTAL))         
    {   
        nvram_ut_trace("[NVUT] factory_reset_importantl1_access(): write/reset fail!\n\r");
        return KAL_FALSE;
    }   
    
    return KAL_TRUE;
}

kal_bool factory_reset_importantl4_access(kal_uint32 flags, void *param)
{
    nvram_ltable_entry_struct *ldi = NULL;
    kal_uint32 i;
            
    if(!factory_test_reboot_finish)
    {
        save_context_notify_tester();
    }
    nvram_util_get_data_item(&ldi, NVRAM_EF_NVRAM_TEST_6_LID);

    //read test, record 1 stores the factory reset context so read test start from record 2
    for(i = 2; i <= ldi->total_records; i++)
    {
        kal_mem_set(data_buffer, 0, NVRAM_EF_TEST_LID_SIZE);
        data_buffer[0] = 0x1; //modify data_buffer to special value write before binregion backup
        kal_mem_set(cmp_buffer, 0, ldi->size);
        if(!nvram_external_read_data(ldi->LID, i, (kal_uint8 *)cmp_buffer, ldi->size))
        {
            nvram_ut_trace("[NVUT] factory_reset_importantl4_access(): read fail!\n\r");
            return KAL_FALSE;
        }
        
        if(0 != kal_mem_cmp((kal_char*)data_buffer, (kal_char*)cmp_buffer, ldi->size))
        {
            nvram_ut_trace("[NVUT] factory_reset_importantl4_access(): read back value is not expect!\n\r");
            return KAL_FALSE;
        }
    }

    //write and reset test 
    if(0 != nvram_lid_cmpt_operation(NVRAM_EF_NVRAM_TEST_6_LID, 
                                     CMPT_OP_FLAG_GEN(CMPT_OP_FLAG_WRITE, CMPT_OP_FLAG_RESET, 0, 0), 
                                     CMPT_OP_WAY_API, 1, NVRAM_EF_TEST_LID_RECORD_TOTAL))         
    {   
        nvram_ut_trace("[NVUT] factory_reset_importantl4_access(): write/reset fail!\n\r");
        return KAL_FALSE;
    }   
    
    return KAL_TRUE;
}

kal_bool ota_boot_basic_access(kal_uint32 flags, void *param)
{
    nvram_ltable_entry_struct *ldi = NULL;
    kal_uint8 i;
    
    //reset test LIDs to default settings
    for(i = 0; i < test_lid_number; i++)
    {
        if(!reset_test_lid_default_setting(test_lid_enum[i]))
        {
            nvram_ut_trace("[NVUT] ota_boot_basic_access(): reset LIDs to default setting fail!\n\r");
            return KAL_FALSE;
        }
    }

    //reset test LIDs
    for(i = 0; i < test_lid_number; i++)
    {
        nvram_util_get_data_item(&ldi, test_lid_enum[i]);
        if(!nvram_reset_data_items(NVRAM_RESET_CERTAIN, NVRAM_APP_RESERVED, ldi, 1, ldi->total_records))
        {
            nvram_ut_trace("[NVUT] ota_boot_basic_access(): reset test LIDs fail!\n\r");
            return KAL_FALSE;
        }
    }
    
    //reset SYS LID
    if(!nvram_external_reset_data(NVRAM_EF_SW_VERNO_LID, SW_VERNO_RECORD_NUMBER, 1))
    {
        nvram_ut_trace("[NVUT] ota_boot_basic_access(): reset SYS LID fail!\n\r");
        return KAL_FALSE;
    }

    //modify MD SW version
    if(!modify_md_sw_version())
    {
        nvram_ut_trace("[NVUT] ota_boot_basic_access(): modify MD SW version fail!\n\r");
        return KAL_FALSE;
    }

    //call nvram_init()
    nvram_boot_trace = 0;
    nvram_init();
    if(!(nvram_boot_trace & BOOT_TRACE_SW_VERNO_CONFLICT))
    {
        nvram_ut_trace("[NVUT] ota_boot_basic_access(): enter version conflict fail!\n\r");
        return KAL_FALSE;
    }

    //lid access
    for(i = 0; i < test_lid_number; i++)
    { 
        if(0 != nvram_lid_cmpt_operation(test_lid_enum[i], 
                                         CMPT_OP_FLAG_GEN(CMPT_OP_FLAG_READBACK, CMPT_OP_FLAG_WRITE, CMPT_OP_FLAG_RESET, 0), 
                                         CMPT_OP_WAY_API, 1, NVRAM_EF_TEST_LID_RECORD_TOTAL))            
        {
            nvram_ut_trace("[NVUT] ota_boot_basic_access(): nvram_lid_cmpt_operation() fail!\n\r");
        }
    }

    return KAL_TRUE;
    
}

kal_bool ota_boot_lid_verno_change_access(kal_uint32 flags, void *param)
{
    nvram_ltable_entry_struct *ldi = NULL;
    kal_uint8 i;
    
    //reset test LIDs to default settings
    for(i = 0; i < test_lid_number; i++)
    {
         if(!reset_test_lid_default_setting(test_lid_enum[i]))
         {
            nvram_ut_trace("[NVUT] ota_boot_lid_verno_change_access(): reset LIDs to default setting fail!\n\r");
            return KAL_FALSE;
         }
    }

    //reset test LIDs
    for(i = 0; i < test_lid_number; i++)
    {
        nvram_util_get_data_item(&ldi, test_lid_enum[i]);
        if(!nvram_reset_data_items(NVRAM_RESET_CERTAIN, NVRAM_APP_RESERVED, ldi, 1, ldi->total_records))
        {
            nvram_ut_trace("[NVUT] ota_boot_lid_verno_change_access(): reset test LIDs fail!\n\r");
            return KAL_FALSE;
        }
    }
    
    //reset SYS LID
    if(!nvram_external_reset_data(NVRAM_EF_SW_VERNO_LID, SW_VERNO_RECORD_NUMBER, 1))
    {
        nvram_ut_trace("[NVUT] ota_boot_lid_verno_change_access(): reset SYS LID fail!\n\r");
        return KAL_FALSE;
    }

    //modify MD SW version
    if(!modify_md_sw_version())
    {
        nvram_ut_trace("[NVUT] ota_boot_lid_verno_change_access(): modify MD SW version fail!\n\r");
        return KAL_FALSE;
    }
    
    //test LID1~LID6 verno +1
    for(i = 0; i < test_lid_number; i++)
    {
        if(!lid_verno_increase_one(test_lid_enum[i]))
        {
            nvram_ut_trace("[NVUT] ota_boot_lid_verno_change_access(): increase verno fail!\n\r");
            return KAL_FALSE;
        }
    }

    //call nvram_init()
    nvram_boot_trace = 0;
    nvram_init();
    if(!(nvram_boot_trace & BOOT_TRACE_SW_VERNO_CONFLICT))
    {
        nvram_ut_trace("[NVUT] ota_boot_lid_verno_change_access(): enter version conflict fail!\n\r");
        return KAL_FALSE;
    }

    //lid access
    for(i = 0; i < test_lid_number; i++)
    { 
        if(0 != nvram_lid_cmpt_operation(test_lid_enum[i], 
                                         CMPT_OP_FLAG_GEN(CMPT_OP_FLAG_READBACK, CMPT_OP_FLAG_WRITE, CMPT_OP_FLAG_RESET, 0), 
                                         CMPT_OP_WAY_API, 1, NVRAM_EF_TEST_LID_RECORD_TOTAL))            
        {
            nvram_ut_trace("NVUT] ota_boot_lid_verno_change_access(): nvram_lid_cmpt_operation() fail!\n\r");
            return KAL_FALSE;
        }
    }
    
    return KAL_TRUE;
}

kal_bool ota_boot_add_record_read(kal_uint32 flags, void *param)
{
    nvram_ltable_entry_struct *ldi = NULL;
    kal_uint8 i;
    
    //reset test LIDs to default settings
    for(i = 0; i < test_lid_number; i++)
    {
        if(!reset_test_lid_default_setting(test_lid_enum[i]))
        {
            nvram_ut_trace("[NVUT] ota_boot_add_record_read(): reset LIDs to default setting fail!\n\r");
            return KAL_FALSE;
        }
    }
    
    //reset test LIDs
    for(i = 0; i < test_lid_number; i++)
    {
        nvram_util_get_data_item(&ldi, test_lid_enum[i]);
        if(!nvram_reset_data_items(NVRAM_RESET_CERTAIN, NVRAM_APP_RESERVED, ldi, 1, ldi->total_records))
        {
            nvram_ut_trace("[NVUT] ota_boot_add_record_read(): reset test LIDs fail!\n\r");
            return KAL_FALSE;
        }
    }

    //reset SYS LID
    if(!nvram_external_reset_data(NVRAM_EF_SW_VERNO_LID, SW_VERNO_RECORD_NUMBER, 1))
    {
        nvram_ut_trace("[NVUT] ota_boot_add_record_read(): reset SYS LID fail!\n\r");
        return KAL_FALSE;
    }

    //modify MD SW version
    if(!modify_md_sw_version())
    {
        nvram_ut_trace("[NVUT] ota_boot_add_record_read(): modify MD SW version fail!\n\r");
        return KAL_FALSE;
    }

    //modify LID's value
    kal_mem_set(cmp_buffer, 0x0, ldi->size);
    cmp_buffer[0] = 0x1; //modify some value
    cmp_buffer[1] = 0x2;
    cmp_buffer[2] = 0x3;
    for(i = 0; i < test_lid_number; i++)
    {
        nvram_util_get_data_item(&ldi, test_lid_enum[i]);
        if(!(nvram_external_write_data(test_lid_enum[i], ldi->total_records, (kal_uint8 *)cmp_buffer, ldi->size)))
        {
            nvram_ut_trace("[NVUT] ota_boot_add_record_read(): modify LID's value fail!\n\r");
            return KAL_FALSE;
        }
    }
    
    //test LID1~LID6 record number +1
    for(i = 0; i < test_lid_number; i++)
    {
        nvram_util_get_data_item(&ldi, test_lid_enum[i]);
        ldi->total_records += 1;
    }

    //call nvram_init()
    nvram_boot_trace = 0;
    nvram_init();
    if(!(nvram_boot_trace & BOOT_TRACE_SW_VERNO_CONFLICT))
    {
        nvram_ut_trace("[NVUT] ota_boot_add_record_read(): enter version conflict fail!\n\r");
        return KAL_FALSE;
    }

    //lid access
    for(i = 0; i < test_lid_number; i++)
    {
        nvram_util_get_data_item(&ldi, test_lid_enum[i]);
        if(!(nvram_external_read_data(test_lid_enum[i], ldi->total_records - 1, (kal_uint8 *)data_buffer, ldi->size)))
        {
            nvram_ut_trace("[NVUT] ota_boot_add_record_read(): read old record fail!\n\r");
            return KAL_FALSE;
        }
        //old record should keep value
        if(0 != kal_mem_cmp(data_buffer, cmp_buffer, ldi->size))
        {
            nvram_ut_trace("[NVUT] ota_boot_add_record_read(): old record value change!\n\r");
            return KAL_FALSE;
        }

        if(!(nvram_external_read_data(test_lid_enum[i], ldi->total_records, (kal_uint8 *)data_buffer, ldi->size)))
        {
            nvram_ut_trace("[NVUT] ota_boot_add_record_read(): read old record fail!\n\r");
            return KAL_FALSE;
        }
        nvram_get_default_value_to_write(ldi, ldi->total_records, (kal_uint8 *)cmp_buffer, ldi->size);
        //new record should be default value
        if(0 != kal_mem_cmp(data_buffer, cmp_buffer, ldi->size))
        {
            nvram_ut_trace("[NVUT] ota_boot_add_record_read(): old record value change!\n\r");
            return KAL_FALSE;
        }   
    }
    
    return KAL_TRUE;
    
}

kal_bool ota_boot_add_record_write(kal_uint32 flags, void *param)
{
    nvram_ltable_entry_struct *ldi = NULL;
    kal_uint8 i;
    
    //reset test LIDs to default settings
    for(i = 0; i < test_lid_number; i++)
    {
        if(!reset_test_lid_default_setting(test_lid_enum[i]))
        {
            nvram_ut_trace("[NVUT] ota_boot_add_record_write(): reset LIDs to default setting fail!\n\r");
            return KAL_FALSE;
        }
    }

    //reset test LIDs
    for(i = 0; i < test_lid_number; i++)
    {
        nvram_util_get_data_item(&ldi, test_lid_enum[i]);
        if(!nvram_reset_data_items(NVRAM_RESET_CERTAIN, NVRAM_APP_RESERVED, ldi, 1, ldi->total_records))
        {
            nvram_ut_trace("[NVUT] ota_boot_add_record_write(): reset test LIDs fail!\n\r");
            return KAL_FALSE;
        }
    }
    
    //reset SYS LID
    if(!nvram_external_reset_data(NVRAM_EF_SW_VERNO_LID, SW_VERNO_RECORD_NUMBER, 1))
    {
        nvram_ut_trace("[NVUT] ota_boot_add_record_write(): reset SYS LID fail!\n\r");
        return KAL_FALSE;
    }

    //modify MD SW version
    if(!modify_md_sw_version())
    {
        nvram_ut_trace("[NVUT] ota_boot_add_record_write(): modify MD SW version fail!\n\r");
        return KAL_FALSE;
    }

    //test LID1~LID6 record number +1
    for(i = 0; i < test_lid_number; i++)
    {
        nvram_util_get_data_item(&ldi, test_lid_enum[i]);
        ldi->total_records += 1;
    }

    //call nvram_init()
    nvram_boot_trace = 0;
    nvram_init();
    if(!(nvram_boot_trace & BOOT_TRACE_SW_VERNO_CONFLICT))
    {
        nvram_ut_trace("[NVUT] ota_boot_add_record_write(): enter version conflict fail!\n\r");
        return KAL_FALSE;
    }

    //lid access
    for(i = 0; i < test_lid_number; i++)
    {
        if(0 != nvram_lid_cmpt_operation(test_lid_enum[i],
                                         CMPT_OP_FLAG_GEN(CMPT_OP_FLAG_WRITE, 0, 0, 0),
                                         CMPT_OP_WAY_API, 1, ldi->total_records))
        {
            nvram_ut_trace("[NVUT] ota_boot_add_record_write(): nvram_lid_cmpt_operation() fail!\n\r");
            return KAL_FALSE;
        }
    }
    
    return KAL_TRUE;
    
}

kal_bool ota_boot_add_record_reset(kal_uint32 flags, void *param)
{
    nvram_ltable_entry_struct *ldi = NULL;
    kal_uint8 i;
    
    //reset test LIDs to default settings
    for(i = 0; i < test_lid_number; i++)
    {
        if(!reset_test_lid_default_setting(test_lid_enum[i]))
        {
            nvram_ut_trace("[NVUT] ota_boot_add_record_reset(): reset LIDs to default setting fail!\n\r");
            return KAL_FALSE;
        }
    }

    //reset test LIDs
    for(i = 0; i < test_lid_number; i++)
    {
        nvram_util_get_data_item(&ldi, test_lid_enum[i]);
        if(!nvram_reset_data_items(NVRAM_RESET_CERTAIN, NVRAM_APP_RESERVED, ldi, 1, ldi->total_records))
        {
            nvram_ut_trace("[NVUT] ota_boot_add_record_reset(): reset test LIDs fail!\n\r");
            return KAL_FALSE;
        }
    }

    //reset SYS LID
    if(!nvram_external_reset_data(NVRAM_EF_SW_VERNO_LID, SW_VERNO_RECORD_NUMBER, 1))
    {
        nvram_ut_trace("[NVUT] ota_boot_add_record_reset(): reset SYS LID fail!\n\r");
        return KAL_FALSE;
    }

    //modify MD SW version
    if(!modify_md_sw_version())
    {
        nvram_ut_trace("[NVUT] ota_boot_add_record_reset(): modify MD SW version fail!\n\r");
        return KAL_FALSE;
    }

    //test LID1~LID6 record number +1
    for(i = 0; i < test_lid_number; i++)
    {
        nvram_util_get_data_item(&ldi, test_lid_enum[i]);
        ldi->total_records += 1;
    }

    //call nvram_init()
    nvram_boot_trace = 0;
    nvram_init();
    if(!(nvram_boot_trace & BOOT_TRACE_SW_VERNO_CONFLICT))
    {
        nvram_ut_trace("[NVUT] ota_boot_add_record_reset(): enter version conflict fail!\n\r");
        return KAL_FALSE;
    }

    //lid access
    for(i = 0; i<test_lid_number; i++)
    {
        if(0 != nvram_lid_cmpt_operation(test_lid_enum[i],
                                         CMPT_OP_FLAG_GEN(CMPT_OP_FLAG_RESET, 0, 0, 0),
                                         CMPT_OP_WAY_API, 1, ldi->total_records))           
        {
            nvram_ut_trace("[NVUT] ota_boot_add_record_reset(): nvram_lid_cmpt_operation() fail!\n\r");
            return KAL_FALSE;
        }
    }
    
    return KAL_TRUE;
    
}

kal_bool ota_boot_delete_record_read(kal_uint32 flags, void *param)
{
    nvram_ltable_entry_struct *ldi = NULL;
    kal_uint8 i;
    
    //reset test LIDs to default settings
    for(i = 0; i < test_lid_number; i++)
    {
        if(!reset_test_lid_default_setting(test_lid_enum[i]))
        {
            nvram_ut_trace("[NVUT] ota_boot_delete_record_read(): reset LIDs to default setting fail!\n\r");
            return KAL_FALSE;
        }
    }

    //reset test LIDs
    for(i = 0; i < test_lid_number; i++)
    {
        nvram_util_get_data_item(&ldi, test_lid_enum[i]);
        if(!nvram_reset_data_items(NVRAM_RESET_CERTAIN, NVRAM_APP_RESERVED, ldi, 1, ldi->total_records))
        {
            nvram_ut_trace("[NVUT] ota_boot_delete_record_read(): reset test LIDs fail!\n\r");
            return KAL_FALSE;
        }
    }
    
    //reset SYS LID
    if(!nvram_external_reset_data(NVRAM_EF_SW_VERNO_LID, SW_VERNO_RECORD_NUMBER, 1))
    {
        nvram_ut_trace("[NVUT] ota_boot_delete_record_read(): reset SYS LID fail!\n\r");
        return KAL_FALSE;
    }

    //modify MD SW version
    if(!modify_md_sw_version())
    {
        nvram_ut_trace("[NVUT] ota_boot_delete_record_read(): modify MD SW version fail!\n\r");
        return KAL_FALSE;
    }

    //modify LID's value
    kal_mem_set(cmp_buffer, 0x0, ldi->size);
    cmp_buffer[0] = 0x1; //modify some value
    cmp_buffer[1] = 0x2;
    cmp_buffer[2] = 0x3;
    for(i = 0; i < test_lid_number; i++)
    {
        nvram_util_get_data_item(&ldi, test_lid_enum[i]);
        if(!(nvram_external_write_data(test_lid_enum[i], ldi->total_records - 1, (kal_uint8 *)cmp_buffer, ldi->size)))
        {
            nvram_ut_trace("[NVUT] ota_boot_delete_record_read(): modify LID's value fail!\n\r");
            return KAL_FALSE;
        }
    }

    //test LID1~LID6 record number -1
    for(i = 0; i < test_lid_number; i++)
    {
        nvram_util_get_data_item(&ldi, test_lid_enum[i]);
        ldi->total_records -= 1;
    }

    //call nvram_init()
    nvram_boot_trace = 0;
    nvram_init();
    if(!(nvram_boot_trace & BOOT_TRACE_SW_VERNO_CONFLICT))
    {
        nvram_ut_trace("[NVUT] ota_boot_delete_record_read(): enter version conflict fail!\n\r");
        return KAL_FALSE;
    }

    //lid access
    for(i = 0; i < test_lid_number; i++)
    {
        nvram_util_get_data_item(&ldi, test_lid_enum[i]);
        if(!(nvram_external_read_data(test_lid_enum[i], ldi->total_records, (kal_uint8 *)data_buffer, ldi->size)))
        {
            nvram_ut_trace("[NVUT] ota_boot_delete_record_read(): read old record fail!\n\r");
            return KAL_FALSE;
        }
        //old record should keep value
        if(0 != kal_mem_cmp(data_buffer, cmp_buffer, ldi->size))
        {
            nvram_ut_trace("[NVUT] ota_boot_delete_record_read(): old record value change!\n\r");
            return KAL_FALSE;
        }
    }
    
    return KAL_TRUE;
    
}

kal_bool ota_boot_delete_record_write(kal_uint32 flags, void *param)
{
    nvram_ltable_entry_struct *ldi = NULL;
    kal_uint8 i;
    
    //reset test LIDs to default settings
    for(i = 0; i < test_lid_number; i++)
    {
        if(!reset_test_lid_default_setting(test_lid_enum[i]))
        {
            nvram_ut_trace("[NVUT] ota_boot_delete_record_write(): reset LIDs to default setting fail!\n\r");
            return KAL_FALSE;
        }
    }
    
    //reset test LIDs
    for(i = 0; i < test_lid_number; i++)
    {
        nvram_util_get_data_item(&ldi, test_lid_enum[i]);
        if(!nvram_reset_data_items(NVRAM_RESET_CERTAIN, NVRAM_APP_RESERVED, ldi, 1, ldi->total_records))
        {
            nvram_ut_trace("[NVUT] ota_boot_delete_record_write(): reset test LIDs fail!\n\r");
            return KAL_FALSE;
        }
    }
    
    //reset SYS LID
    if(!nvram_external_reset_data(NVRAM_EF_SW_VERNO_LID, SW_VERNO_RECORD_NUMBER, 1))
    {
        nvram_ut_trace("[NVUT] ota_boot_delete_record_write(): reset SYS LID fail!\n\r");
        return KAL_FALSE;
    }

    //modify MD SW version
    if(!modify_md_sw_version())
    {
        nvram_ut_trace("[NVUT] ota_boot_delete_record_write(): modify MD SW version fail!\n\r");
        return KAL_FALSE;
    }

    //test LID1~LID6 record number -1
    for(i = 0; i < test_lid_number; i++)
    {
        nvram_util_get_data_item(&ldi, test_lid_enum[i]);
        ldi->total_records -= 1;
    }

    //call nvram_init()
    nvram_boot_trace = 0;
    nvram_init();
    if(!(nvram_boot_trace & BOOT_TRACE_SW_VERNO_CONFLICT))
    {
        nvram_ut_trace("[NVUT] ota_boot_delete_record_write(): enter version conflict fail!\n\r");
        return KAL_FALSE;
    }

    //lid access
    for(i = 0; i < test_lid_number; i++)
    {
        if(0 != nvram_lid_cmpt_operation(test_lid_enum[i],
                                         CMPT_OP_FLAG_GEN(CMPT_OP_FLAG_WRITE, 0, 0, 0),
                                         CMPT_OP_WAY_API, 1, ldi->total_records))             
        {
            nvram_ut_trace("[NVUT] ota_boot_delete_record_write(): nvram_lid_cmpt_operation() fail!\n\r");
            return KAL_FALSE;
        }
    }
    
    return KAL_TRUE;
    
}

kal_bool ota_boot_delete_record_reset(kal_uint32 flags, void *param)
{
    nvram_ltable_entry_struct *ldi = NULL;
    kal_uint8 i;
    
    //reset test LIDs to default settings
    for(i = 0; i < test_lid_number; i++)
    {
        if(!reset_test_lid_default_setting(test_lid_enum[i]))
        {
            nvram_ut_trace("[NVUT] ota_boot_delete_record_reset(): reset LIDs to default setting fail!\n\r");
            return KAL_FALSE;
        }
    }

    //reset test LIDs
    for(i = 0; i < test_lid_number; i++)
    {
        nvram_util_get_data_item(&ldi, test_lid_enum[i]);
        if(!nvram_reset_data_items(NVRAM_RESET_CERTAIN, NVRAM_APP_RESERVED, ldi, 1, ldi->total_records))
        {
            nvram_ut_trace("[NVUT] ota_boot_delete_record_reset(): reset test LIDs fail!\n\r");
            return KAL_FALSE;
        }
    }
    
    //reset SYS LID
    if(!nvram_external_reset_data(NVRAM_EF_SW_VERNO_LID, SW_VERNO_RECORD_NUMBER, 1))
    {
        nvram_ut_trace("[NVUT] ota_boot_delete_record_reset(): reset SYS LID fail!\n\r");
        return KAL_FALSE;
    }

    //modify MD SW version
    if(!modify_md_sw_version())
    {
        nvram_ut_trace("[NVUT] ota_boot_delete_record_reset(): modify MD SW version fail!\n\r");
        return KAL_FALSE;
    }

    //test LID1~LID6 record number -1
    for(i = 0; i < test_lid_number; i++)
    {
        nvram_util_get_data_item(&ldi, test_lid_enum[i]);
        ldi->total_records -= 1;
    }

    //call nvram_init()
    nvram_boot_trace = 0;
    nvram_init();
    if(!(nvram_boot_trace & BOOT_TRACE_SW_VERNO_CONFLICT))
    {
        nvram_ut_trace("[NVUT] ota_boot_delete_record_reset(): enter version conflict fail!\n\r");
        return KAL_FALSE;
    }

    //lid access
    for(i = 0; i < test_lid_number; i++)
    {
        if(0 != nvram_lid_cmpt_operation(test_lid_enum[i],
                                         CMPT_OP_FLAG_GEN(CMPT_OP_FLAG_RESET, 0, 0, 0),
                                         CMPT_OP_WAY_API, 1, ldi->total_records))              
        {
            nvram_ut_trace("[NVUT] ota_boot_delete_record_reset(): nvram_lid_cmpt_operation() fail!\n\r");
            return KAL_FALSE;
        }
    }
    
    return KAL_TRUE;
    
}

kal_bool ota_boot_verno_change_previous_lid_access(kal_uint32 flags, void *param)
{
    nvram_ltable_entry_struct *ldi = NULL;
    kal_uint8 i, j;

    //delete all files in Z:/BACKUP folder
    FS_XDelete((const WCHAR*)L"Z:\\NVRAM\\BACKUP", (FS_FILE_TYPE|FS_RECURSIVE_TYPE), NULL, 0);

    //this test will use LID verno "000"~"001" total 2 version
    for(i = 0; i < test_lid_number; i++)
    {
        if(!delete_special_version_lid(test_lid_enum[i], 0, 1))
        {
            nvram_ut_trace("[NVUT] ota_boot_verno_change_previous_lid_access(): delete old version LID fail!\n\r");
            return KAL_FALSE;
        }
    }
    
    //reset test LIDs to default settings
    for(i = 0; i < test_lid_number; i++)
    {
        if(!reset_test_lid_default_setting(test_lid_enum[i]))
        {
            nvram_ut_trace("[NVUT] ota_boot_verno_change_previous_lid_access(): reset LIDs to default setting fail!\n\r");
            return KAL_FALSE;
        }
        //add NVRAM_ATTR_RESERVE_BACKWARD to test LID
        nvram_util_get_data_item(&ldi, test_lid_enum[i]);
        ldi->attr |= NVRAM_ATTR_RESERVE_BACKWARD;
    }

    //reset test LIDs
    for(i = 0; i < test_lid_number; i++)
    {
        nvram_util_get_data_item(&ldi, test_lid_enum[i]);
        if(!nvram_reset_data_items(NVRAM_RESET_CERTAIN, NVRAM_APP_RESERVED, ldi, 1, ldi->total_records))
        {
            nvram_ut_trace("[NVUT] ota_boot_verno_change_previous_lid_access(): reset test LIDs fail!\n\r");
            return KAL_FALSE;
        }
    }

    //write old LID with non-default value
    cmp_buffer[0] = 0x1; //modify some value
    cmp_buffer[1] = 0x2;
    cmp_buffer[2] = 0x3;
    for(i = 0; i < test_lid_number; i++)
    {
        for(j = 1; j <= NVRAM_EF_TEST_LID_RECORD_TOTAL; j++)
        {
            if(!nvram_external_write_data(test_lid_enum[i], j, (kal_uint8 *)cmp_buffer, NVRAM_EF_TEST_LID_SIZE))
            {
                break;
            }
        }
        
        if(j <= NVRAM_EF_TEST_LID_RECORD_TOTAL)
        {
            nvram_ut_trace("[NVUT] ota_boot_verno_change_previous_lid_access(): write previous LID fail!\n\r");
            return KAL_FALSE;
        }
    }

    //reset SYS LID
    if(!nvram_external_reset_data(NVRAM_EF_SW_VERNO_LID, SW_VERNO_RECORD_NUMBER, 1))
    {
        nvram_ut_trace("[NVUT] ota_boot_verno_change_previous_lid_access(): reset SYS LID fail!\n\r");
        return KAL_FALSE;
    }

    //modify MD SW version
    if(!modify_md_sw_version())
    {
        nvram_ut_trace("[NVUT] ota_boot_verno_change_previous_lid_access(): modify MD SW version fail!\n\r");
        return KAL_FALSE;
    }

    //test LID1~LID6 verno +1
    for(i = 0; i < test_lid_number; i++)
    {
        if(!lid_verno_increase_one(test_lid_enum[i]))
        {
            nvram_ut_trace("[NVUT] ota_boot_verno_change_previous_lid_access(): change LID verno fail!\n\r");
            return KAL_FALSE;
        }
    }
    
    //call nvram_init()
    nvram_boot_trace = 0;
    nvram_init();
    if(!(nvram_boot_trace & BOOT_TRACE_SW_VERNO_CONFLICT))
    {
        nvram_ut_trace("[NVUT] ota_boot_verno_change_previous_lid_access(): enter version conflict fail!\n\r");
        return KAL_FALSE;
    }

    //old version lid access
    for(i = 0; i < test_lid_number; i++)
    {
        nvram_util_get_data_item(&ldi, test_lid_enum[i]);
        if(!nvram_external_search_reserved_lid(ldi->LID, "000", NVRAM_EF_TEST_LID_RECORD_TOTAL, NVRAM_EF_TEST_LID_SIZE))
        {
            nvram_ut_trace("[NVUT] ota_boot_verno_change_previous_lid_access(): cannot find previous LID!\n\r");
            return KAL_FALSE;
        }
        for(j = 1; j <= NVRAM_EF_TEST_LID_RECORD_TOTAL; j++)
        {
            kal_mem_set(data_buffer, 0, ldi->size);
            if(! nvram_external_read_data(NVRAM_EF_READ_RESERVED_LID, j, (kal_uint8 *)data_buffer, NVRAM_EF_TEST_LID_SIZE))
            {
                nvram_ut_trace("[NVUT] ota_boot_verno_change_previous_lid_access(): read reserve LID fail!\n\r");
                return KAL_FALSE;
            }

            if(0 != kal_mem_cmp((kal_char*)data_buffer, (kal_char*)cmp_buffer, NVRAM_EF_TEST_LID_SIZE))
            {
                nvram_ut_trace("[NVUT] ota_boot_verno_change_previous_lid_access(): read back reserve LID changed!\n\r");
                return KAL_FALSE;
            }
        }
    }
    
    return KAL_TRUE;
    
}

kal_bool ota_boot_size_change_previous_lid_access(kal_uint32 flags, void *param)
{
    nvram_ltable_entry_struct *ldi = NULL;
    kal_uint8 i, j;

    //delete all files in Z:/BACKUP folder
    FS_XDelete((const WCHAR*)L"Z:\\NVRAM\\BACKUP", (FS_FILE_TYPE|FS_RECURSIVE_TYPE), NULL, 0);

    //this test will use LID verno "000"~"001" total 2 version
    for(i = 0; i < test_lid_number; i++)
    {
        if(!delete_special_version_lid(test_lid_enum[i], 0, 1))
        {
            nvram_ut_trace("[NVUT] ota_boot_size_change_previous_lid_access(): delete old version LID fail!\n\r");
            return KAL_FALSE;
        }
    }
    
    //reset test LIDs to default settings
    for(i = 0; i < test_lid_number; i++)
    {
        if(!reset_test_lid_default_setting(test_lid_enum[i]))
        {
            nvram_ut_trace("[NVUT] ota_boot_size_change_previous_lid_access(): reset LIDs to default setting fail!\n\r");
            return KAL_FALSE;
        }
        //add NVRAM_ATTR_RESERVE_BACKWARD to test LID
        nvram_util_get_data_item(&ldi, test_lid_enum[i]);
        ldi->attr |= NVRAM_ATTR_RESERVE_BACKWARD;
    }

    //reset test LIDs
    for(i = 0; i < test_lid_number; i++)
    {
        nvram_util_get_data_item(&ldi, test_lid_enum[i]);
        if(!nvram_reset_data_items(NVRAM_RESET_CERTAIN, NVRAM_APP_RESERVED, ldi, 1, ldi->total_records))
        {
            nvram_ut_trace("[NVUT] ota_boot_size_change_previous_lid_access(): reset test LIDs fail!\n\r");
            return KAL_FALSE;
        }
    }

    //write old LID with non-default value
    cmp_buffer[0] = 0x4; //modify some value
    cmp_buffer[1] = 0x5;
    cmp_buffer[2] = 0x6;
    for(i = 0; i < test_lid_number; i++)
    {
        for(j = 1; j <= NVRAM_EF_TEST_LID_RECORD_TOTAL; j++)
        {
            if(!nvram_external_write_data(test_lid_enum[i], j, (kal_uint8 *)cmp_buffer, NVRAM_EF_TEST_LID_SIZE))
            {
                break;
            }
        }
        
        if(j <= NVRAM_EF_TEST_LID_RECORD_TOTAL)
        {
            nvram_ut_trace("[NVUT] ota_boot_size_change_previous_lid_access(): write previous LID fail!\n\r");
            return KAL_FALSE;
        }
    }

    //reset SYS LID
    if(!nvram_external_reset_data(NVRAM_EF_SW_VERNO_LID, SW_VERNO_RECORD_NUMBER, 1))
    {
        nvram_ut_trace("[NVUT] ota_boot_size_change_previous_lid_access(): reset SYS LID fail!\n\r");
        return KAL_FALSE;
    }

    //modify MD SW version
    if(!modify_md_sw_version())
    {
        nvram_ut_trace("[NVUT] ota_boot_size_change_previous_lid_access(): modify MD SW version fail!\n\r");
        return KAL_FALSE;
    }

    //test LID1~LID6 verno +1
    for(i = 0; i < test_lid_number; i++)
    {
        nvram_util_get_data_item(&ldi, test_lid_enum[i]);
        ldi->size += RECORD_CHANGE_SIZE;
    }
    
    //call nvram_init()
    nvram_boot_trace = 0;
    nvram_init();
    if(!(nvram_boot_trace & BOOT_TRACE_SW_VERNO_CONFLICT))
    {
        nvram_ut_trace("[NVUT] ota_boot_size_change_previous_lid_access(): enter version conflict fail!\n\r");
        return KAL_FALSE;
    }

    //old version lid access
    for(i = 0; i < test_lid_number; i++)
    {
        nvram_util_get_data_item(&ldi, test_lid_enum[i]);
        if( NVRAM_IS_CATEGORY_IMPORTANT_L4(ldi->category) || NVRAM_IS_CATEGORY_IN_BIN_REGION(ldi->category))
        {
            continue;
        }
        if(!nvram_external_search_reserved_lid(ldi->LID, "000", NVRAM_EF_TEST_LID_RECORD_TOTAL, NVRAM_EF_TEST_LID_SIZE))
        {
            nvram_ut_trace("[NVUT] ota_boot_size_change_previous_lid_access(): cannot find previous LID!\n\r");
            return KAL_FALSE;
        }
        for(j = 1; j <= NVRAM_EF_TEST_LID_RECORD_TOTAL; j++)
        {
            kal_mem_set(data_buffer, 0, ldi->size);
            if(! nvram_external_read_data(NVRAM_EF_READ_RESERVED_LID, j, (kal_uint8 *)data_buffer, NVRAM_EF_TEST_LID_SIZE))
            {
                nvram_ut_trace("[NVUT] ota_boot_size_change_previous_lid_access(): read reserve LID fail!\n\r");
                return KAL_FALSE;
            }

            if(0 != kal_mem_cmp((kal_char*)data_buffer, (kal_char*)cmp_buffer, NVRAM_EF_TEST_LID_SIZE))
            {
                nvram_ut_trace("[NVUT] ota_boot_size_change_previous_lid_access(): read back reserve LID changed!\n\r");
                return KAL_FALSE;
            }
        }
    }
    
    return KAL_TRUE;
    
}


kal_bool ota_boot_record_change_previous_lid_access(kal_uint32 flags, void *param)
{
    nvram_ltable_entry_struct *ldi = NULL;
    kal_uint8 i, j;

    //delete all files in Z:/BACKUP folder
    FS_XDelete((const WCHAR*)L"Z:\\NVRAM\\BACKUP", (FS_FILE_TYPE|FS_RECURSIVE_TYPE), NULL, 0);

    //this test will use LID verno "000"~"001" total 2 version
    for(i = 0; i < test_lid_number; i++)
    {
        if(!delete_special_version_lid(test_lid_enum[i], 0, 1))
        {
            nvram_ut_trace("[NVUT] ota_boot_record_change_previous_lid_access(): delete old version LID fail!\n\r");
            return KAL_FALSE;
        }
    }   
    
    //reset test LIDs to default settings
    for(i = 0; i < test_lid_number; i++)
    {
        if(!reset_test_lid_default_setting(test_lid_enum[i]))
        {
            nvram_ut_trace("[NVUT] ota_boot_record_change_previous_lid_access(): reset LIDs to default setting fail!\n\r");
            return KAL_FALSE;
        }
        //add NVRAM_ATTR_RESERVE_BACKWARD to test LID
        nvram_util_get_data_item(&ldi, test_lid_enum[i]);
        ldi->attr |= NVRAM_ATTR_RESERVE_BACKWARD;
    }

    //reset test LIDs
    for(i = 0; i < test_lid_number; i++)
    {
        nvram_util_get_data_item(&ldi, test_lid_enum[i]);
        if(!nvram_reset_data_items(NVRAM_RESET_CERTAIN, NVRAM_APP_RESERVED, ldi, 1, ldi->total_records))
        {
            nvram_ut_trace("[NVUT] ota_boot_record_change_previous_lid_access(): reset test LIDs fail!\n\r");
            return KAL_FALSE;
        }
    }

    //write old LID with non-default value
    cmp_buffer[0] = 0x4; //modify some value
    cmp_buffer[1] = 0x5;
    cmp_buffer[2] = 0x6;
    for(i = 0; i < test_lid_number; i++)
    {
        for(j = 1; j <= NVRAM_EF_TEST_LID_RECORD_TOTAL; j++)
        {
            if(!nvram_external_write_data(test_lid_enum[i], j, (kal_uint8 *)cmp_buffer, NVRAM_EF_TEST_LID_SIZE))
            {
                break;
            }
        }
        
        if(j <= NVRAM_EF_TEST_LID_RECORD_TOTAL)
        {
            nvram_ut_trace("[NVUT] ota_boot_record_change_previous_lid_access(): write previous LID fail!\n\r");
            return KAL_FALSE;
        }
    }

    //reset SYS LID
    if(!nvram_external_reset_data(NVRAM_EF_SW_VERNO_LID, SW_VERNO_RECORD_NUMBER, 1))
    {
        nvram_ut_trace("[NVUT] ota_boot_record_change_previous_lid_access(): reset SYS LID fail!\n\r");
        return KAL_FALSE;
    }

    //modify MD SW version
    if(!modify_md_sw_version())
    {
        nvram_ut_trace("[NVUT] ota_boot_record_change_previous_lid_access(): modify MD SW version fail!\n\r");
        return KAL_FALSE;
    }

    //test LID1~LID6 verno +1
    for(i = 0; i < test_lid_number; i++)
    {
        nvram_util_get_data_item(&ldi, test_lid_enum[i]);
        ldi->total_records += 1;
    }
    
    //call nvram_init()
    nvram_boot_trace = 0;
    nvram_init();
    if(!(nvram_boot_trace & BOOT_TRACE_SW_VERNO_CONFLICT))
    {
        nvram_ut_trace("[NVUT] ota_boot_record_change_previous_lid_access(): enter version conflict fail!\n\r");
        return KAL_FALSE;
    }

    //old version lid access
    for(i = 0; i < test_lid_number; i++)
    {
        nvram_util_get_data_item(&ldi, test_lid_enum[i]);
        if( NVRAM_IS_CATEGORY_IMPORTANT_L4(ldi->category) || NVRAM_IS_CATEGORY_IN_BIN_REGION(ldi->category))
        {
            continue;
        }
        if(!nvram_external_search_reserved_lid(ldi->LID, "000", NVRAM_EF_TEST_LID_RECORD_TOTAL, NVRAM_EF_TEST_LID_SIZE))
        {
            nvram_ut_trace("[NVUT] ota_boot_record_change_previous_lid_access(): cannot find previous LID!\n\r");
            return KAL_FALSE;
        }
        for(j = 1; j <= NVRAM_EF_TEST_LID_RECORD_TOTAL; j++)
        {
            kal_mem_set(data_buffer, 0, ldi->size);
            if(! nvram_external_read_data(NVRAM_EF_READ_RESERVED_LID, j, (kal_uint8 *)data_buffer, NVRAM_EF_TEST_LID_SIZE))
            {
                nvram_ut_trace("[NVUT] ota_boot_record_change_previous_lid_access(): read reserve LID fail!\n\r");
                return KAL_FALSE;
            }

            if(0 != kal_mem_cmp((kal_char*)data_buffer, (kal_char*)cmp_buffer, NVRAM_EF_TEST_LID_SIZE))
            {
                nvram_ut_trace("[NVUT] ota_boot_record_change_previous_lid_access(): read back reserve LID changed!\n\r");
                return KAL_FALSE;
            }
        }
    }
    
    return KAL_TRUE;
    
}


kal_bool ota_boot_extend_record_read(kal_uint32 flags, void *param)
{
    nvram_ltable_entry_struct *ldi = NULL;
    kal_uint8 i;
    
    //reset test LIDs to default settings
    for(i = 0; i < test_lid_number; i++)
    {
        if(!reset_test_lid_default_setting(test_lid_enum[i]))
        {
            nvram_ut_trace("[NVUT] ota_boot_extend_record_read(): reset LIDs to default setting fail!\n\r");
            return KAL_FALSE;
        }
    }
    
    //set test LID1~LID6 record number to 1, reset LID, write LID, extend record size
    cmp_buffer[0] = 0x1; //modify some value
    cmp_buffer[1] = 0x2;
    cmp_buffer[2] = 0x3;
    for(i = 0; i < test_lid_number; i++)
    {
        nvram_util_get_data_item(&ldi, test_lid_enum[i]);
        ldi->total_records = 1;
        if(!nvram_reset_data_items(NVRAM_RESET_CERTAIN, NVRAM_APP_RESERVED, ldi, 1, ldi->total_records))
        {
            nvram_ut_trace("[NVUT] ota_boot_extend_record_read(): reset LID fail!\n\r");
            return KAL_FALSE;
        }
        if(!nvram_external_write_data(test_lid_enum[i], 1, (kal_uint8 *)cmp_buffer, NVRAM_EF_TEST_LID_SIZE))
        {
            nvram_ut_trace("[NVUT] ota_boot_extend_record_read(): write previous LID fail!\n\r");
            return KAL_FALSE;
        }
        ldi->size += RECORD_CHANGE_SIZE;
    }

    //reset SYS LID
    if(!nvram_external_reset_data(NVRAM_EF_SW_VERNO_LID, SW_VERNO_RECORD_NUMBER, 1))
    {
        nvram_ut_trace("[NVUT] ota_boot_extend_record_read(): reset SYS LID fail!\n\r");
        return KAL_FALSE;
    }

    //modify MD SW version
    if(!modify_md_sw_version())
    {
        nvram_ut_trace("[NVUT] ota_boot_extend_record_read(): modify MD SW version fail!\n\r");
        return KAL_FALSE;
    }

    //call nvram_init()
    nvram_boot_trace = 0;
    nvram_init();
    if(!(nvram_boot_trace & BOOT_TRACE_SW_VERNO_CONFLICT))
    {
        nvram_ut_trace("[NVUT] ota_boot_extend_record_read(): enter version conflict fail!\n\r");
        return KAL_FALSE;
    }

    //new LID access
    for(i = 0; i < test_lid_number; i++)
    {
        nvram_util_get_data_item(&ldi, test_lid_enum[i]);
        if(!nvram_external_read_data(test_lid_enum[i], 1, (kal_uint8 *)data_buffer, NVRAM_EF_TEST_LID_SIZE + RECORD_CHANGE_SIZE))
        {
            nvram_ut_trace("[NVUT] ota_boot_extend_record_read(): read fail!\n\r");
            return KAL_FALSE;
        }

        if(0 != kal_mem_cmp((kal_char*)data_buffer, (kal_char*)cmp_buffer, NVRAM_EF_TEST_LID_SIZE))
        {
            nvram_ut_trace("[NVUT] ota_boot_extend_record_read(): old data changed!\n\r");
            return KAL_FALSE;
        }

        nvram_get_default_value_to_write(ldi, i, (kal_uint8 *)cmp_buffer, ldi->size);
        if(0 != kal_mem_cmp((kal_char*)(&data_buffer[NVRAM_EF_TEST_LID_SIZE]), (kal_char*)(&cmp_buffer[NVRAM_EF_TEST_LID_SIZE]), RECORD_CHANGE_SIZE))
        {
            nvram_ut_trace("[NVUT] ota_boot_extend_record_read(): extend data is not as expect!\n\r");
            return KAL_FALSE;
        }
    }
    
    return KAL_TRUE;
    
}

kal_bool ota_boot_extend_record_write(kal_uint32 flags, void *param)
{
    nvram_ltable_entry_struct *ldi = NULL;
    kal_uint8 i;
    
    //reset test LIDs to default settings
    for(i = 0; i < test_lid_number; i++)
    {
        if(!reset_test_lid_default_setting(test_lid_enum[i]))
        {
            nvram_ut_trace("[NVUT] ota_boot_extend_record_write(): reset LIDs to default setting fail!\n\r");
            return KAL_FALSE;
        }
    }
    
    //extend record size
    for(i = 0; i < test_lid_number; i++)
    {
        nvram_util_get_data_item(&ldi, test_lid_enum[i]);
        ldi->total_records = 1;
        if(!nvram_reset_data_items(NVRAM_RESET_CERTAIN, NVRAM_APP_RESERVED, ldi, 1, ldi->total_records))
        {
            
            return KAL_FALSE;
        }
        ldi->size += RECORD_CHANGE_SIZE;
    }

    //reset SYS LID
    if(!nvram_external_reset_data(NVRAM_EF_SW_VERNO_LID, SW_VERNO_RECORD_NUMBER, 1))
    {
        nvram_ut_trace("[NVUT] ota_boot_extend_record_write(): reset SYS LID fail!\n\r");
        return KAL_FALSE;
    }

    //modify MD SW version
    if(!modify_md_sw_version())
    {
        nvram_ut_trace("[NVUT] ota_boot_extend_record_write(): modify MD SW version fail!\n\r");
        return KAL_FALSE;
    }

    //call nvram_init()
    nvram_boot_trace = 0;
    nvram_init();
    if(!(nvram_boot_trace & BOOT_TRACE_SW_VERNO_CONFLICT))
    {
        nvram_ut_trace("[NVUT] ota_boot_extend_record_write(): enter version conflict fail!\n\r");
        return KAL_FALSE;
    }

    //new LID access
    data_buffer[0] = 0x1;
    data_buffer[1] = 0x2;
    data_buffer[2] = 0x3;
    for(i = 0; i < test_lid_number; i++)
    {
        nvram_util_get_data_item(&ldi, test_lid_enum[i]);
        if(!nvram_external_write_data(test_lid_enum[i], 1, (kal_uint8 *)data_buffer, NVRAM_EF_TEST_LID_SIZE + RECORD_CHANGE_SIZE))
        {
            nvram_ut_trace("[NVUT] ota_boot_extend_record_write(): write extend LID fail!\n\r");
            return KAL_FALSE;
        }

        if(!nvram_external_read_data(test_lid_enum[i], 1, (kal_uint8 *)cmp_buffer, NVRAM_EF_TEST_LID_SIZE + RECORD_CHANGE_SIZE))
        {
            nvram_ut_trace("[NVUT] ota_boot_extend_record_write(): read extend LID fail!\n\r");
            return KAL_FALSE;
        }

        if(0 != kal_mem_cmp((kal_char*)data_buffer, (kal_char*)cmp_buffer, NVRAM_EF_TEST_LID_SIZE + RECORD_CHANGE_SIZE))
        {
            nvram_ut_trace("[NVUT] ota_boot_extend_record_write(): read back value is not expect!\n\r");
            return KAL_FALSE;
        }
    }

    return KAL_TRUE;
    
}

kal_bool ota_boot_extend_record_reset(kal_uint32 flags, void *param)
{
    nvram_ltable_entry_struct *ldi = NULL;
    kal_uint8 i;
    
    //reset test LIDs to default settings
    for(i = 0; i < test_lid_number; i++)
    {
        if(!reset_test_lid_default_setting(test_lid_enum[i]))
        {
            nvram_ut_trace("[NVUT] ota_boot_extend_record_reset(): reset LIDs to default setting fail!\n\r");
            return KAL_FALSE;
        }
    }
    
    //set test LID1~LID6 record number to 1, reset LID, write LID, extend record size
    cmp_buffer[0] = 0x1; //modify some value
    cmp_buffer[1] = 0x2;
    cmp_buffer[2] = 0x3;
    for(i = 0; i < test_lid_number; i++)
    {
        nvram_util_get_data_item(&ldi, test_lid_enum[i]);
        ldi->total_records = 1;
        if(!nvram_reset_data_items(NVRAM_RESET_CERTAIN, NVRAM_APP_RESERVED, ldi, 1, ldi->total_records))
        {
            nvram_ut_trace("[NVUT] ota_boot_extend_record_reset(): reset previous LID fail!\n\r");
            return KAL_FALSE;
        }
        if(!nvram_external_write_data(test_lid_enum[i], 1, (kal_uint8 *)cmp_buffer, NVRAM_EF_TEST_LID_SIZE))
        {
            nvram_ut_trace("[NVUT] ota_boot_extend_record_reset(): write previous LID fail!\n\r");
            return KAL_FALSE;
        }
        ldi->size += RECORD_CHANGE_SIZE;
    }

    //reset SYS LID
    if(!nvram_external_reset_data(NVRAM_EF_SW_VERNO_LID, SW_VERNO_RECORD_NUMBER, 1))
    {
        nvram_ut_trace("[NVUT] ota_boot_extend_record_reset(): reset SYS LID fail!\n\r");
        return KAL_FALSE;
    }

    //modify MD SW version
    if(!modify_md_sw_version())
    {
        nvram_ut_trace("[NVUT] ota_boot_extend_record_reset(): modify MD SW version fail!\n\r");
        return KAL_FALSE;
    }

    //call nvram_init()
    nvram_boot_trace = 0;
    nvram_init();
    if(!(nvram_boot_trace & BOOT_TRACE_SW_VERNO_CONFLICT))
    {
        nvram_ut_trace("[NVUT] ota_boot_extend_record_reset(): enter version conflict fail!\n\r");
        return KAL_FALSE;
    }

    //new LID access
    for(i = 0; i < test_lid_number; i++)
    {
        nvram_util_get_data_item(&ldi, test_lid_enum[i]);
        if(!nvram_reset_data_items(NVRAM_RESET_CERTAIN, NVRAM_APP_RESERVED, ldi, 1, ldi->total_records))
        {
            nvram_ut_trace("[NVUT] ota_boot_extend_record_reset(): reset extend LID fail!\n\r");
            return KAL_FALSE;
        }

        if(!nvram_external_read_data(test_lid_enum[i], 1, (kal_uint8 *)data_buffer, NVRAM_EF_TEST_LID_SIZE + RECORD_CHANGE_SIZE))
        {
            nvram_ut_trace("[NVUT] ota_boot_extend_record_reset(): read extend LID fail!\n\r");
            return KAL_FALSE;
        }

        nvram_get_default_value_to_write(ldi, i, (kal_uint8 *)cmp_buffer, ldi->size);
        if(0 != kal_mem_cmp((kal_char*)data_buffer, (kal_char*)cmp_buffer, NVRAM_EF_TEST_LID_SIZE + RECORD_CHANGE_SIZE))
        {
            nvram_ut_trace("[NVUT] ota_boot_extend_record_reset(): read extend LID fail!\n\r");
            return KAL_FALSE;
        }
    }
    
    return KAL_TRUE;
    
}

kal_bool ota_boot_minish_record_read(kal_uint32 flags, void *param)
{
    nvram_ltable_entry_struct *ldi = NULL;
    kal_uint8 i;
    
    //reset test LIDs to default settings
    for(i = 0; i < test_lid_number; i++)
    {
        if(!reset_test_lid_default_setting(test_lid_enum[i]))
        {
            nvram_ut_trace("[NVUT] ota_boot_minish_record_read(): reset LIDs to default setting fail!\n\r");
            return KAL_FALSE;
        }
    }
    
    //set test LID1~LID6 record number to 1, reset LID, write LID, minish record size
    cmp_buffer[0] = 0x1; //modify some value
    cmp_buffer[1] = 0x2;
    cmp_buffer[2] = 0x3;
    for(i = 0; i < test_lid_number; i++)
    {
        nvram_util_get_data_item(&ldi, test_lid_enum[i]);
        ldi->total_records = 1;
        if(!nvram_reset_data_items(NVRAM_RESET_CERTAIN, NVRAM_APP_RESERVED, ldi, 1, ldi->total_records))
        {
            nvram_ut_trace("[NVUT] ota_boot_minish_record_read(): reset previous LID fail!\n\r");
            return KAL_FALSE;
        }
        if(!nvram_external_write_data(test_lid_enum[i], 1, (kal_uint8 *)cmp_buffer, NVRAM_EF_TEST_LID_SIZE))
        {
            nvram_ut_trace("[NVUT] ota_boot_minish_record_read(): write previous LID fail!\n\r");
            return KAL_FALSE;
        }
        ldi->size -= RECORD_CHANGE_SIZE;
    }

    //reset SYS LID
    if(!nvram_external_reset_data(NVRAM_EF_SW_VERNO_LID, SW_VERNO_RECORD_NUMBER, 1))
    {
        nvram_ut_trace("[NVUT] ota_boot_minish_record_read(): reset SYS LID fail!\n\r");
        return KAL_FALSE;
    }

    //modify MD SW version
    if(!modify_md_sw_version())
    {
        nvram_ut_trace("[NVUT] ota_boot_minish_record_read(): modify MD SW version fail!\n\r");
        return KAL_FALSE;
    }

    //call nvram_init()
    nvram_boot_trace = 0;
    nvram_init();
    if(!(nvram_boot_trace & BOOT_TRACE_SW_VERNO_CONFLICT))
    {
        nvram_ut_trace("[NVUT] ota_boot_minish_record_read(): enter version conflict fail!\n\r");
        return KAL_FALSE;
    }

    //new LID access
    for(i = 0; i < test_lid_number; i++)
    {
        nvram_util_get_data_item(&ldi, test_lid_enum[i]);
        if(!nvram_external_read_data(test_lid_enum[i], 1, (kal_uint8 *)data_buffer, NVRAM_EF_TEST_LID_SIZE - RECORD_CHANGE_SIZE))
        {
            nvram_ut_trace("[NVUT] ota_boot_minish_record_read(): read extend record fail!\n\r");
            return KAL_FALSE;
        }
        
        if(0 != kal_mem_cmp((kal_char*)data_buffer, (kal_char*)cmp_buffer, ldi->size))
        {
            nvram_ut_trace("[NVUT] ota_boot_minish_record_read(): read back extend LID not expect!\n\r");
            return KAL_FALSE;
        }
    }

    return KAL_TRUE;
    
}

kal_bool ota_boot_minish_record_write(kal_uint32 flags, void *param)
{
    nvram_ltable_entry_struct *ldi = NULL;
    kal_uint8 i;
    
    //reset test LIDs to default settings
    for(i = 0; i < test_lid_number; i++)
    {
        if(!reset_test_lid_default_setting(test_lid_enum[i]))
        {
            nvram_ut_trace("[NVUT] ota_boot_minish_record_write(): reset LIDs to default setting fail!\n\r");
            return KAL_FALSE;
        }
    }
    
    //minish record size
    for(i = 0; i < test_lid_number; i++)
    {
        nvram_util_get_data_item(&ldi, test_lid_enum[i]);
        ldi->total_records = 1;
        if(!nvram_reset_data_items(NVRAM_RESET_CERTAIN, NVRAM_APP_RESERVED, ldi, 1, ldi->total_records))
        {
            nvram_ut_trace("[NVUT] ota_boot_minish_record_write(): reset previous LID fail!\n\r");
            return KAL_FALSE;
        }
        ldi->size -= RECORD_CHANGE_SIZE;
    }

    //reset SYS LID
    if(!nvram_external_reset_data(NVRAM_EF_SW_VERNO_LID, SW_VERNO_RECORD_NUMBER, 1))
    {
        nvram_ut_trace("[NVUT] ota_boot_minish_record_write(): reset SYS LID fail!\n\r");
        return KAL_FALSE;
    }

    //modify MD SW version
    if(!modify_md_sw_version())
    {
        nvram_ut_trace("[NVUT] ota_boot_minish_record_write(): modify MD SW version fail!\n\r");
        return KAL_FALSE;
    }

    //call nvram_init()
    nvram_boot_trace = 0;
    nvram_init();
    if(!(nvram_boot_trace & BOOT_TRACE_SW_VERNO_CONFLICT))
    {
        nvram_ut_trace("[NVUT] ota_boot_minish_record_write(): enter version conflict fail!\n\r");
        return KAL_FALSE;
    }

    //new LID access
    data_buffer[0] = 0x1;
    data_buffer[1] = 0x2;
    data_buffer[2] = 0x3;
    for(i = 0; i < test_lid_number; i++)
    {
        nvram_util_get_data_item(&ldi, test_lid_enum[i]);
        if(!nvram_external_write_data(test_lid_enum[i], 1, (kal_uint8 *)data_buffer, NVRAM_EF_TEST_LID_SIZE - RECORD_CHANGE_SIZE))
        {
            nvram_ut_trace("[NVUT] ota_boot_minish_record_write(): write extend LID fail!\n\r");
            return KAL_FALSE;
        }

        if(!nvram_external_read_data(test_lid_enum[i], 1, (kal_uint8 *)cmp_buffer, NVRAM_EF_TEST_LID_SIZE - RECORD_CHANGE_SIZE))
        {
            nvram_ut_trace("[NVUT] ota_boot_minish_record_write(): read extend LID fail!\n\r");
            return KAL_FALSE;
        }

        if(0 != kal_mem_cmp((kal_char*)data_buffer, (kal_char*)cmp_buffer, NVRAM_EF_TEST_LID_SIZE - RECORD_CHANGE_SIZE))
        {
            nvram_ut_trace("[NVUT] ota_boot_minish_record_write(): read back extend LID not expect!\n\r");
            return KAL_FALSE;
        }
    }
    
    return KAL_TRUE;
    
}

kal_bool ota_boot_minish_record_reset(kal_uint32 flags, void *param)
{
    nvram_ltable_entry_struct *ldi = NULL;
    kal_uint8 i;
    
    //reset test LIDs to default settings
    for(i = 0; i < test_lid_number; i++)
    {
        if(!reset_test_lid_default_setting(test_lid_enum[i]))
        {
            nvram_ut_trace("[NVUT] ota_boot_minish_record_reset(): reset LIDs to default setting fail!\n\r");
            return KAL_FALSE;
        }
    }
    
    //set test LID1~LID6 record number to 1, reset LID, write LID, minish record size
    cmp_buffer[0] = 0x1; //modify some value
    cmp_buffer[1] = 0x2;
    cmp_buffer[2] = 0x3;
    for(i = 0; i < test_lid_number; i++)
    {
        nvram_util_get_data_item(&ldi, test_lid_enum[i]);
        ldi->total_records = 1;
        if(!nvram_reset_data_items(NVRAM_RESET_CERTAIN, NVRAM_APP_RESERVED, ldi, 1, ldi->total_records))
        {
            nvram_ut_trace("[NVUT] ota_boot_minish_record_reset(): reset previous LID fail!\n\r");
            return KAL_FALSE;
        }
        if(!nvram_external_write_data(test_lid_enum[i], 1, (kal_uint8 *)cmp_buffer, NVRAM_EF_TEST_LID_SIZE))
        {
            nvram_ut_trace("[NVUT] ota_boot_minish_record_reset(): write previous LID fail!\n\r");
            return KAL_FALSE;
        }
        ldi->size -= RECORD_CHANGE_SIZE;
    }

    //reset SYS LID
    if(!nvram_external_reset_data(NVRAM_EF_SW_VERNO_LID, SW_VERNO_RECORD_NUMBER, 1))
    {
        nvram_ut_trace("[NVUT] ota_boot_minish_record_reset(): reset SYS LID fail!\n\r");
        return KAL_FALSE;
    }

    //modify MD SW version
    if(!modify_md_sw_version())
    {
        nvram_ut_trace("[NVUT] ota_boot_minish_record_reset(): modify MD SW version fail!\n\r");
        return KAL_FALSE;
    }

    //call nvram_init()
    nvram_boot_trace = 0;
    nvram_init();
    if(!(nvram_boot_trace & BOOT_TRACE_SW_VERNO_CONFLICT))
    {
        nvram_ut_trace("[NVUT] ota_boot_minish_record_reset(): enter version conflict fail!\n\r");
        return KAL_FALSE;
    }

    //new LID access
    for(i = 0; i < test_lid_number; i++)
    {
        nvram_util_get_data_item(&ldi, test_lid_enum[i]);
        if(!nvram_reset_data_items(NVRAM_RESET_CERTAIN, NVRAM_APP_RESERVED, ldi, 1, ldi->total_records))
        {
            nvram_ut_trace("[NVUT] ota_boot_minish_record_reset(): reset extend LID fail!\n\r");
            return KAL_FALSE;
        }

        if(!nvram_external_read_data(test_lid_enum[i], 1, (kal_uint8 *)data_buffer, NVRAM_EF_TEST_LID_SIZE - RECORD_CHANGE_SIZE))
        {
            nvram_ut_trace("[NVUT] ota_boot_minish_record_reset(): read extend LID fail!\n\r");
            return KAL_FALSE;
        }

        nvram_get_default_value_to_write(ldi, i, (kal_uint8 *)cmp_buffer, ldi->size);
        if(0 != kal_mem_cmp((kal_char*)data_buffer, (kal_char*)cmp_buffer, NVRAM_EF_TEST_LID_SIZE - RECORD_CHANGE_SIZE))
        {
            nvram_ut_trace("[NVUT] ota_boot_minish_record_reset(): read back extend LID not expect!\n\r");
            return KAL_FALSE;
        }
    }

    return KAL_TRUE;
    
}

kal_bool ota_boot_user_size_change_read(kal_uint32 flags, void *param)
{
    nvram_ltable_entry_struct *ldi = NULL;
    
    //reset test LIDs to default settings
    if(!reset_test_lid_default_setting(NVRAM_EF_NVRAM_TEST_1_LID))
    {
        nvram_ut_trace("[NVUT] ota_boot_user_size_change_read(): reset LIDs to default setting fail!\n\r");
        return KAL_FALSE;
    }

    //delete old LID
    if( !delete_special_version_lid(NVRAM_EF_NVRAM_TEST_1_LID, 0, 0) )
    {
        nvram_ut_trace("[NVUT] ota_boot_user_size_change_read(): delete test LID fail!\n\r");
    }

    //change test LID record size
    nvram_util_get_data_item(&ldi, NVRAM_EF_NVRAM_TEST_1_LID);
    if(!nvram_reset_data_items(NVRAM_RESET_CERTAIN, NVRAM_APP_RESERVED, ldi, 1, ldi->total_records))
    {
        nvram_ut_trace("[NVUT] ota_boot_user_size_change_read(): reset test LID fail!\n\r");
        return KAL_FALSE;
    }
    ldi->size += RECORD_CHANGE_SIZE;

    //reset SYS LID
    if(!nvram_external_reset_data(NVRAM_EF_SW_VERNO_LID, SW_VERNO_RECORD_NUMBER, 1))
    {
        nvram_ut_trace("[NVUT] ota_boot_user_size_change_read(): reset SYS LID fail!\n\r");
        return KAL_FALSE;
    }

    //modify MD SW version
    if(!modify_md_sw_version())
    {
        nvram_ut_trace("[NVUT] ota_boot_user_size_change_read(): modify MD SW version fail!\n\r");
        return KAL_FALSE;
    }

    //call nvram_init()
    nvram_boot_trace = 0;
    nvram_init();
    if(!(nvram_boot_trace & BOOT_TRACE_SW_VERNO_CONFLICT))
    {
        nvram_ut_trace("[NVUT] ota_boot_user_size_change_read(): enter version conflict fail!\n\r");
        return KAL_FALSE;
    }

    //new LID access
    nvram_ut_assert_flag = 0;
    if(0 != nvram_lid_cmpt_operation(NVRAM_EF_NVRAM_TEST_1_LID,
                                     CMPT_OP_FLAG_GEN(CMPT_OP_FLAG_READBACK, 0, 0, 0),
                                     CMPT_OP_WAY_API, 1, NVRAM_EF_TEST_LID_RECORD_TOTAL))         
    {
        nvram_ut_trace("[NVUT] ota_boot_user_size_change_read(): read LID fail!\n\r");
        return KAL_FALSE;
    }
    
    if(0 != nvram_ut_assert_flag)
    {
        nvram_ut_trace("nvram_ut_assert_flag: %d.\n\r", nvram_ut_assert_flag);
        return KAL_FALSE;
    }
    
    return KAL_TRUE;
    
}


kal_bool ota_boot_user_size_change_write(kal_uint32 flags, void *param)
{
    nvram_ltable_entry_struct *ldi = NULL;
    
    //reset test LIDs to default settings
    if(!reset_test_lid_default_setting(NVRAM_EF_NVRAM_TEST_1_LID))
    {
        nvram_ut_trace("[NVUT] ota_boot_user_size_change_write(): reset LIDs to default setting fail!\n\r");
        return KAL_FALSE;
    }

    //delete old LID
    if( !delete_special_version_lid(NVRAM_EF_NVRAM_TEST_1_LID, 0, 0) )
    {
        nvram_ut_trace("[NVUT] ota_boot_user_size_change_write(): delete test LID fail!\n\r");
    }
    
    //change test LID record size
    nvram_util_get_data_item(&ldi, NVRAM_EF_NVRAM_TEST_1_LID);
    if(!nvram_reset_data_items(NVRAM_RESET_CERTAIN, NVRAM_APP_RESERVED, ldi, 1, ldi->total_records))
    {
        nvram_ut_trace("[NVUT] ota_boot_user_size_change_write(): reset test LID fail!\n\r");
        return KAL_FALSE;
    }
    ldi->size += RECORD_CHANGE_SIZE;

    //reset SYS LID
    if(!nvram_external_reset_data(NVRAM_EF_SW_VERNO_LID, SW_VERNO_RECORD_NUMBER, 1))
    {
        nvram_ut_trace("[NVUT] ota_boot_user_size_change_write(): reset SYS LID fail!\n\r");
        return KAL_FALSE;
    }

    //modify MD SW version
    if(!modify_md_sw_version())
    {
        nvram_ut_trace("[NVUT] ota_boot_user_size_change_write(): modify MD SW version fail!\n\r");
        return KAL_FALSE;
    }

    //call nvram_init()
    nvram_boot_trace = 0;
    nvram_init();
    if(!(nvram_boot_trace & BOOT_TRACE_SW_VERNO_CONFLICT))
    {
        nvram_ut_trace("[NVUT] ota_boot_user_size_change_write(): enter version conflict fail!\n\r");
        return KAL_FALSE;
    }

    //new LID access
    nvram_ut_assert_flag = 0;
    if(0 != nvram_lid_cmpt_operation(NVRAM_EF_NVRAM_TEST_1_LID,
                                     CMPT_OP_FLAG_GEN(CMPT_OP_FLAG_WRITE, 0, 0, 0),
                                     CMPT_OP_WAY_API, 1, NVRAM_EF_TEST_LID_RECORD_TOTAL))         
    {
        nvram_ut_trace("[NVUT] ota_boot_user_size_change_write(): write LID fail!\n\r");
        return KAL_FALSE;
    }

    if(0 != nvram_ut_assert_flag)
    {
        nvram_ut_trace("nvram_ut_assert_flag: %d.\n\r", nvram_ut_assert_flag);
        return KAL_FALSE;
    }
    
    return KAL_TRUE;
    
}

kal_bool ota_boot_user_size_change_reset(kal_uint32 flags, void *param)
{
    nvram_ltable_entry_struct *ldi = NULL;
    
    //reset test LIDs to default settings
    if(!reset_test_lid_default_setting(NVRAM_EF_NVRAM_TEST_1_LID))
    {
        nvram_ut_trace("[NVUT] ota_boot_user_size_change_reset(): reset LIDs to default setting fail!\n\r");
        return KAL_FALSE;
    }

    //delete old LID
    if( !delete_special_version_lid(NVRAM_EF_NVRAM_TEST_1_LID, 0, 0) )
    {
        nvram_ut_trace("[NVUT] ota_boot_user_size_change_reset(): delete test LID fail!\n\r");
    }
    
    //change test LID record size
    nvram_util_get_data_item(&ldi, NVRAM_EF_NVRAM_TEST_1_LID);
    if(!nvram_reset_data_items(NVRAM_RESET_CERTAIN, NVRAM_APP_RESERVED, ldi, 1, ldi->total_records))
    {
        nvram_ut_trace("[NVUT] ota_boot_user_size_change_reset(): reset test LID fail!\n\r");
        return KAL_FALSE;
    }
    ldi->size += RECORD_CHANGE_SIZE;

    //reset SYS LID
    if(!nvram_external_reset_data(NVRAM_EF_SW_VERNO_LID, SW_VERNO_RECORD_NUMBER, 1))
    {
        nvram_ut_trace("[NVUT] ota_boot_user_size_change_reset(): reset SYS LID fail!\n\r");
        return KAL_FALSE;
    }

    //modify MD SW version
    if(!modify_md_sw_version())
    {
        nvram_ut_trace("[NVUT] ota_boot_user_size_change_reset(): modify MD SW version fail!\n\r");
        return KAL_FALSE;
    }

    //call nvram_init()
    nvram_boot_trace = 0;
    nvram_init();
    if(!(nvram_boot_trace & BOOT_TRACE_SW_VERNO_CONFLICT))
    {
        nvram_ut_trace("[NVUT] ota_boot_user_size_change_reset(): enter version conflict fail!\n\r");
        return KAL_FALSE;
    }

    //new LID access
    nvram_ut_assert_flag = 0;
    if(0 != nvram_lid_cmpt_operation(NVRAM_EF_NVRAM_TEST_1_LID,
                                     CMPT_OP_FLAG_GEN(CMPT_OP_FLAG_RESET, 0, 0, 0),
                                     CMPT_OP_WAY_API, 1, NVRAM_EF_TEST_LID_RECORD_TOTAL))       
    {
        nvram_ut_trace("[NVUT] ota_boot_user_size_change_reset(): reset LID fail!\n\r");
        return KAL_FALSE;
    }
    if(0 != nvram_ut_assert_flag)
    {
        nvram_ut_trace("nvram_ut_assert_flag: %d.\n\r", nvram_ut_assert_flag);
        return KAL_FALSE;
    }
    
    return KAL_TRUE;
    
}

kal_bool ota_boot_internal_size_change_read(kal_uint32 flags, void *param)
{
    nvram_ltable_entry_struct *ldi = NULL;
    
    //reset test LIDs to default settings
    if(!reset_test_lid_default_setting(NVRAM_EF_NVRAM_TEST_2_LID))
    {
        nvram_ut_trace("[NVUT] ota_boot_internal_size_change_read(): reset LIDs to default setting fail!\n\r");
        return KAL_FALSE;
    }

    //delete old LID
    if( !delete_special_version_lid(NVRAM_EF_NVRAM_TEST_2_LID, 0, 0) )
    {
        nvram_ut_trace("[NVUT] ota_boot_internal_size_change_read(): delete test LID fail!\n\r");
    }
    
    //change test LID record size
    nvram_util_get_data_item(&ldi, NVRAM_EF_NVRAM_TEST_2_LID);
    if(!nvram_reset_data_items(NVRAM_RESET_CERTAIN, NVRAM_APP_RESERVED, ldi, 1, ldi->total_records))
    {
        nvram_ut_trace("[NVUT] ota_boot_internal_size_change_read(): reset test LID fail!\n\r");
        return KAL_FALSE;
    }
    ldi->size += RECORD_CHANGE_SIZE;

    //reset SYS LID
    if(!nvram_external_reset_data(NVRAM_EF_SW_VERNO_LID, SW_VERNO_RECORD_NUMBER, 1))
    {
        nvram_ut_trace("[NVUT] ota_boot_internal_size_change_read(): reset SYS LID fail!\n\r");
        return KAL_FALSE;
    }

    //modify MD SW version
    if(!modify_md_sw_version())
    {
        nvram_ut_trace("[NVUT] ota_boot_internal_size_change_read(): modify MD SW version fail!\n\r");
        return KAL_FALSE;
    }

    //call nvram_init()
    nvram_boot_trace = 0;
    nvram_init();
    if(!(nvram_boot_trace & BOOT_TRACE_SW_VERNO_CONFLICT))
    {
        nvram_ut_trace("[NVUT] ota_boot_internal_size_change_read(): enter version conflict fail!\n\r");
        return KAL_FALSE;
    }

    //new LID access
    nvram_ut_assert_flag = 0;
        //internal LID size change expect read fail, internal will not run reset flow in nvram_read_data_item()
    if(0 == nvram_lid_cmpt_operation(NVRAM_EF_NVRAM_TEST_2_LID,
                                     CMPT_OP_FLAG_GEN(CMPT_OP_FLAG_READ, 0, 0, 0),
                                     CMPT_OP_WAY_API, 1, NVRAM_EF_TEST_LID_RECORD_TOTAL))           
    {
        nvram_ut_trace("[NVUT] ota_boot_internal_size_change_read(): read fail do not happen!\n\r");
        return KAL_FALSE;
    }
    if(0 != nvram_ut_assert_flag)
    {
        nvram_ut_trace("[NVUT] ota_boot_internal_size_change_read(): unexpect assert happen!\n\r");
        return KAL_FALSE;
    }
    
    return KAL_TRUE;
    
}

kal_bool ota_boot_internal_size_change_write(kal_uint32 flags, void *param)
{
    nvram_ltable_entry_struct *ldi = NULL;
    
    //reset test LIDs to default settings
    if(!reset_test_lid_default_setting(NVRAM_EF_NVRAM_TEST_2_LID))
    {
        nvram_ut_trace("[NVUT] ota_boot_internal_size_change_write(): reset LIDs to default setting fail!\n\r");
        return KAL_FALSE;
    }

    //delete old LID
    if( !delete_special_version_lid(NVRAM_EF_NVRAM_TEST_2_LID, 0, 0) )
    {
        nvram_ut_trace("[NVUT] ota_boot_internal_size_change_write(): delete test LID fail!\n\r");
    }
    
    //change test LID record size
    nvram_util_get_data_item(&ldi, NVRAM_EF_NVRAM_TEST_2_LID);
    if(!nvram_reset_data_items(NVRAM_RESET_CERTAIN, NVRAM_APP_RESERVED, ldi, 1, ldi->total_records))
    {
        nvram_ut_trace("[NVUT] ota_boot_internal_size_change_write(): reset test LID fail!\n\r");
        return KAL_FALSE;
    }
    ldi->size += RECORD_CHANGE_SIZE;

    //reset SYS LID
    if(!nvram_external_reset_data(NVRAM_EF_SW_VERNO_LID, SW_VERNO_RECORD_NUMBER, 1))
    {
        nvram_ut_trace("[NVUT] ota_boot_internal_size_change_write(): reset SYS LID fail!\n\r");
        return KAL_FALSE;
    }

    //modify MD SW version
    if(!modify_md_sw_version())
    {
        nvram_ut_trace("[NVUT] ota_boot_internal_size_change_write(): modify MD SW version fail!\n\r");
        return KAL_FALSE;
    }

    //call nvram_init()
    nvram_boot_trace = 0;
    nvram_init();
    if(!(nvram_boot_trace & BOOT_TRACE_SW_VERNO_CONFLICT))
    {
        nvram_ut_trace("[NVUT] ota_boot_internal_size_change_write(): enter version conflict fail!\n\r");
        return KAL_FALSE;
    }

    //new LID access
    nvram_ut_assert_flag = 0;
    if(0 != nvram_lid_cmpt_operation(NVRAM_EF_NVRAM_TEST_2_LID,
                                     CMPT_OP_FLAG_GEN(CMPT_OP_FLAG_WRITE, 0, 0, 0),
                                     CMPT_OP_WAY_API, 1, NVRAM_EF_TEST_LID_RECORD_TOTAL))           
    {
        nvram_ut_trace("[NVUT] ota_boot_internal_size_change_write(): write LID fail!\n\r");
        return KAL_FALSE;
    }
    if(0 != nvram_ut_assert_flag)
    {
        nvram_ut_trace("[NVUT] nvram_ut_assert_flag: %d.\n\r", nvram_ut_assert_flag);
        return KAL_FALSE;
    }
    
    return KAL_TRUE;
    
}

kal_bool ota_boot_internal_size_change_reset(kal_uint32 flags, void *param)
{
    nvram_ltable_entry_struct *ldi = NULL;
    
    //reset test LIDs to default settings
    if(!reset_test_lid_default_setting(NVRAM_EF_NVRAM_TEST_2_LID))
    {
        nvram_ut_trace("[NVUT] ota_boot_internal_size_change_reset(): reset LIDs to default setting fail!\n\r");
        return KAL_FALSE;
    }

    //delete old LID
    if( !delete_special_version_lid(NVRAM_EF_NVRAM_TEST_2_LID, 0, 0) )
    {
        nvram_ut_trace("[NVUT] ota_boot_internal_size_change_reset(): delete test LID fail!\n\r");
    }

    //change test LID record size
    nvram_util_get_data_item(&ldi, NVRAM_EF_NVRAM_TEST_2_LID);
    if(!nvram_reset_data_items(NVRAM_RESET_CERTAIN, NVRAM_APP_RESERVED, ldi, 1, ldi->total_records))
    {
        nvram_ut_trace("[NVUT] ota_boot_internal_size_change_reset(): reset test LID fail!\n\r");
        return KAL_FALSE;
    }
    ldi->size += RECORD_CHANGE_SIZE;

    //reset SYS LID
    if(!nvram_external_reset_data(NVRAM_EF_SW_VERNO_LID, SW_VERNO_RECORD_NUMBER, 1))
    {
        nvram_ut_trace("[NVUT] ota_boot_internal_size_change_reset(): reset SYS LID fail!\n\r");
        return KAL_FALSE;
    }

    //modify MD SW version
    if(!modify_md_sw_version())
    {
        nvram_ut_trace("[NVUT] ota_boot_internal_size_change_reset(): modify MD SW version fail!\n\r");
        return KAL_FALSE;
    }

    //call nvram_init()
    nvram_boot_trace = 0;
    nvram_init();
    if(!(nvram_boot_trace & BOOT_TRACE_SW_VERNO_CONFLICT))
    {
        nvram_ut_trace("[NVUT] ota_boot_internal_size_change_reset(): enter version conflict fail!\n\r");
        return KAL_FALSE;
    }

    //new LID access
    nvram_ut_assert_flag = 0;
    if(0 != nvram_lid_cmpt_operation(NVRAM_EF_NVRAM_TEST_2_LID,
                                     CMPT_OP_FLAG_GEN(CMPT_OP_FLAG_RESET, 0, 0, 0),
                                     CMPT_OP_WAY_API, 1, NVRAM_EF_TEST_LID_RECORD_TOTAL))
    {
        nvram_ut_trace("[NVUT] ota_boot_internal_size_change_reset(): reset LID fail!\n\r");
        return KAL_FALSE;
    }
    if(0 != nvram_ut_assert_flag)
    {
        nvram_ut_trace("[NVUT] nvram_ut_assert_flag: %d.\n\r", nvram_ut_assert_flag);
        return KAL_FALSE;
    }
    
    return KAL_TRUE;
    
}

//OTA file size change, CALIBRAT & IMPORTANT will assert(with FATAL_ASSERT)
kal_bool ota_boot_calibrat_size_change(kal_uint32 flags, void *param)
{
    nvram_ltable_entry_struct *ldi = NULL;
    
    //reset test LIDs to default settings
    if(!reset_test_lid_default_setting(NVRAM_EF_NVRAM_TEST_3_LID))
    {
        nvram_ut_trace("[NVUT] ota_boot_calibrat_size_change_read(): reset LIDs to default setting fail!\n\r");
        return KAL_FALSE;
    }
    
    //delete old LID
    if( !delete_special_version_lid(NVRAM_EF_NVRAM_TEST_3_LID, 0, 0) )
    {
        nvram_ut_trace("[NVUT] ota_boot_calibrat_size_change_read(): delete test LID fail!\n\r");
    }
    
    //change test LID record size
    nvram_util_get_data_item(&ldi, NVRAM_EF_NVRAM_TEST_3_LID);
    ldi->attr |= NVRAM_ATTR_FAULT_ASSERT;
    
    if(!nvram_reset_data_items(NVRAM_RESET_CERTAIN, NVRAM_APP_RESERVED, ldi, 1, ldi->total_records))
    {
        nvram_ut_trace("[NVUT] ota_boot_calibrat_size_change_read(): reset test LID fail!\n\r");
        return KAL_FALSE;
    }
    ldi->size += RECORD_CHANGE_SIZE;

    //reset SYS LID
    if(!nvram_external_reset_data(NVRAM_EF_SW_VERNO_LID, SW_VERNO_RECORD_NUMBER, 1))
    {
        nvram_ut_trace("[NVUT] ota_boot_calibrat_size_change_read(): reset SYS LID fail!\n\r");
        return KAL_FALSE;
    }

    //modify MD SW version
    if(!modify_md_sw_version())
    {
        nvram_ut_trace("[NVUT] ota_boot_calibrat_size_change_read(): modify MD SW version fail!\n\r");
        return KAL_FALSE;
    }

    //call nvram_init()
    nvram_ut_assert_flag = 0;
    nvram_boot_trace = 0;
    nvram_init();
    if(!(nvram_boot_trace & BOOT_TRACE_SW_VERNO_CONFLICT))
    {
        nvram_ut_trace("[NVUT] ota_boot_calibrat_size_change_read(): enter version conflict fail!\n\r");
        return KAL_FALSE;
    }

    if(0 == nvram_ut_assert_flag)
    {
        nvram_ut_trace("[NVUT] ota_boot_calibrat_size_change_read(): calibration LID(with FAULT_ASSERT) size change OTA do not assert.\n\r");
        return KAL_FALSE;
    }
    
    return KAL_TRUE;
    
}

//OTA file size change, CALIBRAT & IMPORTANT will assert(with FATAL_ASSERT)
kal_bool ota_boot_important_size_change(kal_uint32 flags, void *param)
{
    nvram_ltable_entry_struct *ldi = NULL;
    
    //reset test LIDs to default settings
    if(!reset_test_lid_default_setting(NVRAM_EF_NVRAM_TEST_4_LID))
    {
        nvram_ut_trace("[NVUT] ota_boot_important_size_change_read(): reset LIDs to default setting fail!\n\r");
        return KAL_FALSE;
    }

    //delete old LID
    if( !delete_special_version_lid(NVRAM_EF_NVRAM_TEST_4_LID, 0, 0) )
    {
        nvram_ut_trace("[NVUT] ota_boot_important_size_change_read(): delete test LID fail!\n\r");
    }

    //change test LID record size
    nvram_util_get_data_item(&ldi, NVRAM_EF_NVRAM_TEST_4_LID);
    ldi->attr |= NVRAM_ATTR_FAULT_ASSERT;
    
    if(!nvram_reset_data_items(NVRAM_RESET_CERTAIN, NVRAM_APP_RESERVED, ldi, 1, ldi->total_records))
    {
        nvram_ut_trace("[NVUT] ota_boot_important_size_change_read(): reset test LID fail!\n\r");
        return KAL_FALSE;
    }
    ldi->size += RECORD_CHANGE_SIZE;

    //reset SYS LID
    if(!nvram_external_reset_data(NVRAM_EF_SW_VERNO_LID, SW_VERNO_RECORD_NUMBER, 1))
    {
        nvram_ut_trace("[NVUT] ota_boot_important_size_change_read(): reset SYS LID fail!\n\r");
        return KAL_FALSE;
    }

    //modify MD SW version
    if(!modify_md_sw_version())
    {
        nvram_ut_trace("[NVUT] ota_boot_important_size_change_read(): modify MD SW version fail!\n\r");
        return KAL_FALSE;
    }

    //call nvram_init()
    nvram_boot_trace = 0;
    nvram_ut_assert_flag = 0;
    nvram_init();
    if(!(nvram_boot_trace & BOOT_TRACE_SW_VERNO_CONFLICT))
    {
        nvram_ut_trace("[NVUT] ota_boot_important_size_change_read(): enter version conflict fail!\n\r");
        nvram_ut_trace("[NVUT] ota_boot_calibrat_size_change_read(): enter version conflict fail!\n\r");
        return KAL_FALSE;
    }

    if(0 == nvram_ut_assert_flag)
    {
        nvram_ut_trace("[NVUT] ota_boot_important_size_change_read(): important LID(with FAULT_ASSERT) size change OTA do not assert.\n\r");
        return KAL_FALSE;
    }
    
    return KAL_TRUE;
    
}

//OTA boot file lost will try to restore from binregion(IMPORTANT & CALIBRAT)
kal_bool ota_boot_calibrat_lost_access(kal_uint32 flags, void *param)
{
    nvram_ltable_entry_struct *ldi = NULL;
    kal_wchar filename[NVRAM_MAX_PATH_LEN];
    nvram_folder_enum folder_index;
    NVRAM_FILE_NAME nvramname;
    kal_uint8 i;

    
    //reset test LIDs to default settings
    if(!reset_test_lid_default_setting(NVRAM_EF_NVRAM_TEST_3_LID))
    {
        nvram_ut_trace("[NVUT] ota_boot_calibrat_lost_access(): reset LIDs to default setting fail!\n\r");
        return KAL_FALSE;
    }
    
    //delete old LID
    if( !delete_special_version_lid(NVRAM_EF_NVRAM_TEST_3_LID, 0, 0) )
    {
        nvram_ut_trace("[NVUT] ota_boot_calibrat_lost_access(): delete test LID fail!\n\r");
    }
    
    //change test LID record size
    nvram_util_get_data_item(&ldi, NVRAM_EF_NVRAM_TEST_3_LID);
    if(!nvram_reset_data_items(NVRAM_RESET_CERTAIN, NVRAM_APP_RESERVED, ldi, 1, ldi->total_records))
    {
        nvram_ut_trace("[NVUT] ota_boot_calibrat_lost_access(): reset test LID fail!\n\r");
        return KAL_FALSE;
    }

    folder_index = nvram_query_folder_index(ldi->category);
    nvram_util_make_lid_filename(ldi, nvramname, KAL_TRUE);
    nvram_query_file_name(folder_index, nvramname, filename);
    FS_Delete(filename);

    //reset SYS LID
    if(!nvram_external_reset_data(NVRAM_EF_SW_VERNO_LID, SW_VERNO_RECORD_NUMBER, 1))
    {
        nvram_ut_trace("[NVUT] ota_boot_calibrat_lost_access(): reset SYS LID fail!\n\r");
        return KAL_FALSE;
    }

    //modify MD SW version
    if(!modify_md_sw_version())
    {
        nvram_ut_trace("[NVUT] ota_boot_calibrat_lost_access(): modify MD SW version fail!\n\r");
        return KAL_FALSE;
    }

    //call nvram_init()
    nvram_boot_trace = 0;
    nvram_init();
    if(!(nvram_boot_trace & BOOT_TRACE_SW_VERNO_CONFLICT))
    {
        nvram_ut_trace("[NVUT] ota_boot_calibrat_lost_access(): enter version conflict fail!\n\r");
        return KAL_FALSE;
    }

    //lid access
    kal_mem_set(data_buffer, 0, ldi->size);
    data_buffer[0] = 0x1; //modify to the value before binregion backup
    for(i = 1; i <= ldi->total_records; i++)
    {
        if(!nvram_external_read_data(ldi->LID, i, (kal_uint8 *)cmp_buffer, ldi->size))
        {
            nvram_ut_trace("[NVUT] ota_boot_calibrat_lost_access(): read LID fail!\n\r");
            return KAL_FALSE;
        }
        if(0 != kal_mem_cmp(data_buffer, cmp_buffer, ldi->size))
        {
            nvram_ut_trace("[NVUT] ota_boot_calibrat_lost_access(): read back value not expect!\n\r");
            return KAL_FALSE;
        }
    }    
    
    return KAL_TRUE;
    
}

//OTA boot file lost will try to restore from binregion(IMPORTANT & CALIBRAT)
kal_bool ota_boot_important_lost_access(kal_uint32 flags, void *param)
{
    nvram_ltable_entry_struct *ldi = NULL;
    kal_wchar filename[NVRAM_MAX_PATH_LEN];
    nvram_folder_enum folder_index;
    NVRAM_FILE_NAME nvramname;
    kal_uint8 i;
    
    //reset test LIDs to default settings
    if(!reset_test_lid_default_setting(NVRAM_EF_NVRAM_TEST_4_LID))
    {
        nvram_ut_trace("[NVUT] ota_boot_important_lost_access(): reset LIDs to default setting fail!\n\r");
        return KAL_FALSE;
    }
    
    //delete old LID
    if( !delete_special_version_lid(NVRAM_EF_NVRAM_TEST_4_LID, 0, 0) )
    {
        nvram_ut_trace("[NVUT] ota_boot_important_lost_access(): delete test LID fail!\n\r");
    }
    
    //change test LID record size
    nvram_util_get_data_item(&ldi, NVRAM_EF_NVRAM_TEST_4_LID);
    if(!nvram_reset_data_items(NVRAM_RESET_CERTAIN, NVRAM_APP_RESERVED, ldi, 1, ldi->total_records))
    {
        nvram_ut_trace("[NVUT] ota_boot_important_lost_access(): reset test LID fail!\n\r");
        return KAL_FALSE;
    }

    folder_index = nvram_query_folder_index(ldi->category);
    nvram_util_make_lid_filename(ldi, nvramname, KAL_TRUE);
    nvram_query_file_name(folder_index, nvramname, filename);
    FS_Delete(filename);

    //reset SYS LID
    if(!nvram_external_reset_data(NVRAM_EF_SW_VERNO_LID, SW_VERNO_RECORD_NUMBER, 1))
    {
        nvram_ut_trace("[NVUT] ota_boot_important_lost_access(): reset SYS LID fail!\n\r");
        return KAL_FALSE;
    }

    //modify MD SW version
    if(!modify_md_sw_version())
    {
        nvram_ut_trace("[NVUT] ota_boot_important_lost_access(): modify MD SW version fail!\n\r");
        return KAL_FALSE;
    }

    //call nvram_init()
    nvram_boot_trace = 0;
    nvram_init();
    if(!(nvram_boot_trace & BOOT_TRACE_SW_VERNO_CONFLICT))
    {
        nvram_ut_trace("[NVUT] ota_boot_important_lost_access(): enter version conflict fail!\n\r");
        return KAL_FALSE;
    }

    //lid access
    kal_mem_set(data_buffer, 0, ldi->size);
    data_buffer[0] = 0x1; //modify to the value before binregion backup
    for(i = 1; i <= ldi->total_records; i++)
    {
        if(!nvram_external_read_data(ldi->LID, i, (kal_uint8 *)cmp_buffer, ldi->size))
        {
            nvram_ut_trace("[NVUT] ota_boot_important_lost_access(): read LID fail!\n\r");
            return KAL_FALSE;
        }
        if(0 != kal_mem_cmp(data_buffer, cmp_buffer, ldi->size))
        {
            nvram_ut_trace("[NVUT] ota_boot_important_lost_access(): read back value not expect!\n\r");
            return KAL_FALSE;
        }
    }    
    
    return KAL_TRUE;
    
}

#if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif

kal_bool ota_boot_importantl1_size_change_read(kal_uint32 flags, void *param)
{
    nvram_ltable_entry_struct *ldi = NULL;
    
    //reset test LIDs to default settings
    if(!reset_test_lid_default_setting(NVRAM_EF_NVRAM_TEST_5_LID))
    {
        nvram_ut_trace("[NVUT] ota_boot_importantl1_size_change_read(): reset LIDs to default setting fail!\n\r");
        return KAL_FALSE;
    }

    //delete old LID
    if( !delete_special_version_lid(NVRAM_EF_NVRAM_TEST_5_LID, 0, 0) )
    {
        nvram_ut_trace("[NVUT] ota_boot_importantl1_size_change_read(): delete test LID fail!\n\r");
    }

    //change test LID record size
    nvram_util_get_data_item(&ldi, NVRAM_EF_NVRAM_TEST_5_LID);
    if(!nvram_reset_data_items(NVRAM_RESET_CERTAIN, NVRAM_APP_RESERVED, ldi, 1, ldi->total_records))
    {
        nvram_ut_trace("[NVUT] ota_boot_importantl1_size_change_read(): reset test LID fail!\n\r");
        return KAL_FALSE;
    }
    ldi->size += RECORD_CHANGE_SIZE;

    //reset SYS LID
    if(!nvram_external_reset_data(NVRAM_EF_SW_VERNO_LID, SW_VERNO_RECORD_NUMBER, 1))
    {
        nvram_ut_trace("[NVUT] ota_boot_importantl1_size_change_read(): reset SYS LID fail!\n\r");
        return KAL_FALSE;
    }

    //modify MD SW version
    if(!modify_md_sw_version())
    {
        nvram_ut_trace("[NVUT] ota_boot_importantl1_size_change_read(): modify MD SW version fail!\n\r");
        return KAL_FALSE;
    }

    //call nvram_init()
    nvram_boot_trace = 0;
    nvram_init();
    if(!(nvram_boot_trace & BOOT_TRACE_SW_VERNO_CONFLICT))
    {
        nvram_ut_trace("[NVUT] ota_boot_importantl1_size_change_read(): enter version conflict fail!\n\r");
        return KAL_FALSE;
    }

    //new LID access
    nvram_ut_assert_flag = 0;
    if(0 != nvram_lid_cmpt_operation(NVRAM_EF_NVRAM_TEST_5_LID,
                                     CMPT_OP_FLAG_GEN(CMPT_OP_FLAG_READ, 0, 0, 0),
                                     CMPT_OP_WAY_API, 1, NVRAM_EF_TEST_LID_RECORD_TOTAL))
    {
        nvram_ut_trace("[NVUT] ota_boot_importantl1_size_change_read(): read LID fail!\n\r");
        return KAL_FALSE;       
    }
    if(0 != nvram_ut_assert_flag)
    {
        nvram_ut_trace("[NVUT] nvram_ut_assert_flag: %d.\n\r", nvram_ut_assert_flag);
        return KAL_FALSE;       
    }
    
    return KAL_TRUE;
    
}

kal_bool ota_boot_importantl1_size_change_write(kal_uint32 flags, void *param)
{
    nvram_ltable_entry_struct *ldi = NULL;
    
    //reset test LIDs to default settings
    if(!reset_test_lid_default_setting(NVRAM_EF_NVRAM_TEST_5_LID))
    {
        nvram_ut_trace("[NVUT] ota_boot_importantl1_size_change_write(): reset LIDs to default setting fail!\n\r");
        return KAL_FALSE;
    }

    //delete old LID
    if( !delete_special_version_lid(NVRAM_EF_NVRAM_TEST_5_LID, 0, 0) )
    {
        nvram_ut_trace("[NVUT] ota_boot_importantl1_size_change_write(): delete test LID fail!\n\r");
    }

    //change test LID record size
    nvram_util_get_data_item(&ldi, NVRAM_EF_NVRAM_TEST_5_LID);
    if(!nvram_reset_data_items(NVRAM_RESET_CERTAIN, NVRAM_APP_RESERVED, ldi, 1, ldi->total_records))
    {
        nvram_ut_trace("[NVUT] ota_boot_importantl1_size_change_write(): reset test LID fail!\n\r");
        return KAL_FALSE;
    }
    ldi->size += RECORD_CHANGE_SIZE;

    //reset SYS LID
    if(!nvram_external_reset_data(NVRAM_EF_SW_VERNO_LID, SW_VERNO_RECORD_NUMBER, 1))
    {
        nvram_ut_trace("[NVUT] ota_boot_importantl1_size_change_write(): reset SYS LID fail!\n\r");
        return KAL_FALSE;
    }

    //modify MD SW version
    if(!modify_md_sw_version())
    {
        nvram_ut_trace("[NVUT] ota_boot_importantl1_size_change_write(): modify MD SW version fail!\n\r");
        return KAL_FALSE;
    }

    //call nvram_init()
    nvram_boot_trace = 0;
    nvram_init();
    if(!(nvram_boot_trace & BOOT_TRACE_SW_VERNO_CONFLICT))
    {
        nvram_ut_trace("[NVUT] ota_boot_importantl1_size_change_write(): enter version conflict fail!\n\r");
        return KAL_FALSE;
    }

    //new LID access
    nvram_ut_assert_flag = 0;
    if(0 != nvram_lid_cmpt_operation(NVRAM_EF_NVRAM_TEST_5_LID,
                                     CMPT_OP_FLAG_GEN(CMPT_OP_FLAG_WRITE, 0, 0, 0),
                                     CMPT_OP_WAY_API, 1, NVRAM_EF_TEST_LID_RECORD_TOTAL))
    {
        nvram_ut_trace("[NVUT] ota_boot_importantl1_size_change_write(): write LID fail!\n\r");
        return KAL_FALSE;       
    }
    if(0 != nvram_ut_assert_flag)
    {
        nvram_ut_trace("[NVUT] nvram_ut_assert_flag: %d.\n\r", nvram_ut_assert_flag);
        return KAL_FALSE;
    }
    
    return KAL_TRUE;
    
}

kal_bool ota_boot_importantl1_size_change_reset(kal_uint32 flags, void *param)
{
    nvram_ltable_entry_struct *ldi = NULL;
    
    //reset test LIDs to default settings
    if(!reset_test_lid_default_setting(NVRAM_EF_NVRAM_TEST_5_LID))
    {
        nvram_ut_trace("[NVUT] ota_boot_importantl1_size_change_reset(): reset LIDs to default setting fail!\n\r");
        return KAL_FALSE;
    }
    
    //delete old LID
    if( !delete_special_version_lid(NVRAM_EF_NVRAM_TEST_5_LID, 0, 0) )
    {
        nvram_ut_trace("[NVUT] ota_boot_importantl1_size_change_reset(): delete test LID fail!\n\r");
    }

    //change test LID record size
    nvram_util_get_data_item(&ldi, NVRAM_EF_NVRAM_TEST_5_LID);
    if(!nvram_reset_data_items(NVRAM_RESET_CERTAIN, NVRAM_APP_RESERVED, ldi, 1, ldi->total_records))
    {
        nvram_ut_trace("[NVUT] ota_boot_importantl1_size_change_reset(): reset test LID fail!\n\r");
        return KAL_FALSE;
    }
    ldi->size += RECORD_CHANGE_SIZE;

    //reset SYS LID
    if(!nvram_external_reset_data(NVRAM_EF_SW_VERNO_LID, SW_VERNO_RECORD_NUMBER, 1))
    {
        nvram_ut_trace("[NVUT] ota_boot_importantl1_size_change_reset(): reset SYS LID fail!\n\r");
        return KAL_FALSE;
    }

    //modify MD SW version
    if(!modify_md_sw_version())
    {
        nvram_ut_trace("[NVUT] ota_boot_importantl1_size_change_reset(): modify MD SW version fail!\n\r");
        return KAL_FALSE;
    }

    //call nvram_init()
    nvram_boot_trace = 0;
    nvram_init();
    if(!(nvram_boot_trace & BOOT_TRACE_SW_VERNO_CONFLICT))
    {
        nvram_ut_trace("[NVUT] ota_boot_importantl1_size_change_reset(): enter version conflict fail!\n\r");
        return KAL_FALSE;
    }

    //new LID access
    nvram_ut_assert_flag = 0;
    if(0 != nvram_lid_cmpt_operation(NVRAM_EF_NVRAM_TEST_5_LID,
                                     CMPT_OP_FLAG_GEN(CMPT_OP_FLAG_RESET, 0, 0, 0),
                                     CMPT_OP_WAY_API, 1, NVRAM_EF_TEST_LID_RECORD_TOTAL))
    {
        nvram_ut_trace("[NVUT] ota_boot_importantl1_size_change_reset(): reset LID fail!\n\r");
        return KAL_FALSE;       
    }
    if(0 != nvram_ut_assert_flag)
    {
        nvram_ut_trace("[NVUT] nvram_ut_assert_flag: %d.\n\r", nvram_ut_assert_flag);
        return KAL_FALSE;
    }
    
    return KAL_TRUE;
    
}

kal_bool ota_boot_importantl4_size_change_read(kal_uint32 flags, void *param)
{
    nvram_ltable_entry_struct *ldi = NULL;
    
    //reset test LIDs to default settings
    if(!reset_test_lid_default_setting(NVRAM_EF_NVRAM_TEST_6_LID))
    {
        nvram_ut_trace("[NVUT] ota_boot_importantl4_size_change_read(): reset LIDs to default setting fail!\n\r");
        return KAL_FALSE;
    }

    //delete old LID
    if( !delete_special_version_lid(NVRAM_EF_NVRAM_TEST_6_LID, 0, 0) )
    {
        nvram_ut_trace("[NVUT] ota_boot_importantl4_size_change_read(): delete test LID fail!\n\r");
    }

    //change test LID record size
    nvram_util_get_data_item(&ldi, NVRAM_EF_NVRAM_TEST_6_LID);
    if(!nvram_reset_data_items(NVRAM_RESET_CERTAIN, NVRAM_APP_RESERVED, ldi, 1, ldi->total_records))
    {
        nvram_ut_trace("[NVUT] ota_boot_importantl4_size_change_read(): reset test LID fail!\n\r");
        return KAL_FALSE;
    }
    ldi->size += RECORD_CHANGE_SIZE;

    //reset SYS LID
    if(!nvram_external_reset_data(NVRAM_EF_SW_VERNO_LID, SW_VERNO_RECORD_NUMBER, 1))
    {
        nvram_ut_trace("[NVUT] ota_boot_importantl4_size_change_read(): reset SYS LID fail!\n\r");
        return KAL_FALSE;
    }

    //modify MD SW version
    if(!modify_md_sw_version())
    {
        nvram_ut_trace("[NVUT] ota_boot_importantl4_size_change_read(): modify MD SW version fail!\n\r");
        return KAL_FALSE;
    }

    //call nvram_init()
    nvram_boot_trace = 0;
    nvram_init();
    if(!(nvram_boot_trace & BOOT_TRACE_SW_VERNO_CONFLICT))
    {
        nvram_ut_trace("[NVUT] ota_boot_importantl4_size_change_read(): enter version conflict fail!\n\r");
        return KAL_FALSE;
    }

    //new LID access
    nvram_ut_assert_flag = 0;
    if(0 != nvram_lid_cmpt_operation(NVRAM_EF_NVRAM_TEST_6_LID,
                                     CMPT_OP_FLAG_GEN(CMPT_OP_FLAG_READ, 0, 0, 0),
                                     CMPT_OP_WAY_API, 1, NVRAM_EF_TEST_LID_RECORD_TOTAL))
    {
        nvram_ut_trace("[NVUT] ota_boot_importantl4_size_change_read(): read fail happen!\n\r");
        return KAL_FALSE;
    }
    if(0 != nvram_ut_assert_flag)
    {
        nvram_ut_trace("[NVUT] ota_boot_importantl4_size_change_read(): unexpect assert happen!\n\r");
        return KAL_FALSE;
    }
    
    return KAL_TRUE;
    
}

kal_bool ota_boot_importantl4_size_change_write(kal_uint32 flags, void *param)
{
    nvram_ltable_entry_struct *ldi = NULL;
    
    //reset test LIDs to default settings
    if(!reset_test_lid_default_setting(NVRAM_EF_NVRAM_TEST_6_LID))
    {
        nvram_ut_trace("[NVUT] ota_boot_importantl4_size_change_write(): reset LIDs to default setting fail!\n\r");
        return KAL_FALSE;
    }

    //delete old LID
    if( !delete_special_version_lid(NVRAM_EF_NVRAM_TEST_6_LID, 0, 0) )
    {
        nvram_ut_trace("[NVUT] ota_boot_importantl4_size_change_write(): delete test LID fail!\n\r");
    }

    //change test LID record size
    nvram_util_get_data_item(&ldi, NVRAM_EF_NVRAM_TEST_6_LID);
    if(!nvram_reset_data_items(NVRAM_RESET_CERTAIN, NVRAM_APP_RESERVED, ldi, 1, ldi->total_records))
    {
        nvram_ut_trace("[NVUT] ota_boot_importantl4_size_change_write(): reset test LID fail!\n\r");
        return KAL_FALSE;
    }
    ldi->size += RECORD_CHANGE_SIZE;

    //reset SYS LID
    if(!nvram_external_reset_data(NVRAM_EF_SW_VERNO_LID, SW_VERNO_RECORD_NUMBER, 1))
    {
        nvram_ut_trace("[NVUT] ota_boot_importantl4_size_change_write(): reset SYS LID fail!\n\r");
        return KAL_FALSE;
    }

    //modify MD SW version
    if(!modify_md_sw_version())
    {
        nvram_ut_trace("[NVUT] ota_boot_importantl4_size_change_write(): modify MD SW version fail!\n\r");
        return KAL_FALSE;
    }

    //call nvram_init()
    nvram_boot_trace = 0;
    nvram_init();
    if(!(nvram_boot_trace & BOOT_TRACE_SW_VERNO_CONFLICT))
    {
        nvram_ut_trace("[NVUT] ota_boot_importantl4_size_change_write(): enter version conflict fail!\n\r");
        return KAL_FALSE;
    }

    //new LID access
    nvram_ut_assert_flag = 0;
    if(0 != nvram_lid_cmpt_operation(NVRAM_EF_NVRAM_TEST_6_LID,
                                     CMPT_OP_FLAG_GEN(CMPT_OP_FLAG_WRITE, 0, 0, 0),
                                     CMPT_OP_WAY_API, 1, NVRAM_EF_TEST_LID_RECORD_TOTAL))
    {
        nvram_ut_trace("[NVUT] ota_boot_importantl4_size_change_write(): write LID fail!\n\r");
        return KAL_FALSE;       
    }
    if(0 != nvram_ut_assert_flag)
    {
        nvram_ut_trace("[NVUT] nvram_ut_assert_flag: %d.\n\r", nvram_ut_assert_flag);
        return KAL_FALSE;
    }
    
    return KAL_TRUE;
    
}

kal_bool ota_boot_importantl4_size_change_reset(kal_uint32 flags, void *param)
{
    nvram_ltable_entry_struct *ldi = NULL;
    
    //reset test LIDs to default settings
    if(!reset_test_lid_default_setting(NVRAM_EF_NVRAM_TEST_6_LID))
    {
        nvram_ut_trace("[NVUT] ota_boot_importantl4_size_change_reset(): reset LIDs to default setting fail!\n\r");
        return KAL_FALSE;
    }

    //delete old LID
    if( !delete_special_version_lid(NVRAM_EF_NVRAM_TEST_6_LID, 0, 0) )
    {
        nvram_ut_trace("[NVUT] ota_boot_importantl4_size_change_reset(): delete test LID fail!\n\r");
    }

    //change test LID record size
    nvram_util_get_data_item(&ldi, NVRAM_EF_NVRAM_TEST_6_LID);
    if(!nvram_reset_data_items(NVRAM_RESET_CERTAIN, NVRAM_APP_RESERVED, ldi, 1, ldi->total_records))
    {
        nvram_ut_trace("[NVUT] ota_boot_importantl4_size_change_reset(): reset test LID fail!\n\r");
        return KAL_FALSE;
    }
    ldi->size += RECORD_CHANGE_SIZE;

    //reset SYS LID
    if(!nvram_external_reset_data(NVRAM_EF_SW_VERNO_LID, SW_VERNO_RECORD_NUMBER, 1))
    {
        nvram_ut_trace("[NVUT] ota_boot_importantl4_size_change_reset(): reset SYS LID fail!\n\r");
        return KAL_FALSE;
    }

    //modify MD SW version
    if(!modify_md_sw_version())
    {
        nvram_ut_trace("[NVUT] ota_boot_importantl4_size_change_reset(): modify MD SW version fail!\n\r");
        return KAL_FALSE;
    }

    //call nvram_init()
    nvram_boot_trace = 0;
    nvram_init();
    if(!(nvram_boot_trace & BOOT_TRACE_SW_VERNO_CONFLICT))
    {
        nvram_ut_trace("[NVUT] ota_boot_importantl4_size_change_reset(): enter version conflict fail!\n\r");
        return KAL_FALSE;
    }

    //new LID access
    nvram_ut_assert_flag = 0;
    if(0 != nvram_lid_cmpt_operation(NVRAM_EF_NVRAM_TEST_6_LID,
                                     CMPT_OP_FLAG_GEN(CMPT_OP_FLAG_RESET, 0, 0, 0),
                                     CMPT_OP_WAY_API, 1, NVRAM_EF_TEST_LID_RECORD_TOTAL))
    {
        nvram_ut_trace("[NVUT] ota_boot_importantl4_size_change_reset(): reset LID fail!\n\r");
        return KAL_FALSE;       
    }
    if(0 != nvram_ut_assert_flag)
    {
        nvram_ut_trace("[NVUT] nvram_ut_assert_flag: %d.\n\r", nvram_ut_assert_flag);
        return KAL_FALSE;
    }
    
    return KAL_TRUE;
    
}

kal_bool ota_boot_ota_reset_attr(kal_uint32 flags, void *param)
{
    nvram_ltable_entry_struct *ldi = NULL;
    kal_uint8 i;
    
    //reset test LIDs to default settings
    for(i = 0; i < test_lid_number; i++)
    {
        if(!reset_test_lid_default_setting(test_lid_enum[i]))
        {
            nvram_ut_trace("[NVUT] ota_boot_ota_reset_attr(): reset LIDs to default seeting fail!\n\r");
            return KAL_FALSE;
        }
    }

    //write LID, add OTA_RESET attr
    data_buffer[0] = 0x1; //modify some value
    data_buffer[1] = 0x2;
    data_buffer[2] = 0x3;
    for(i = 0; i < test_lid_number; i++)
    {
        nvram_util_get_data_item(&ldi, test_lid_enum[i]);
        if(!nvram_reset_data_items(NVRAM_RESET_CERTAIN, NVRAM_APP_RESERVED, ldi, 1, ldi->total_records))
        {
            nvram_ut_trace("[NVUT] ota_boot_ota_reset_attr(): reset LID fail!\n\r");
            return KAL_FALSE;
        }
        ldi->attr |= NVRAM_ATTR_OTA_RESET;
        if(!nvram_external_write_data(test_lid_enum[i], 1, (kal_uint8 *)data_buffer, NVRAM_EF_TEST_LID_SIZE))
        {
            nvram_ut_trace("[NVUT] ota_boot_ota_reset_attr(): write LID fail!\n\r");
            return KAL_FALSE;
        }
    }
    
    //reset SYS LID
    if(!nvram_external_reset_data(NVRAM_EF_SW_VERNO_LID, SW_VERNO_RECORD_NUMBER, 1))
    {
        nvram_ut_trace("[NVUT] ota_boot_ota_reset_attr(): reset SYS LID fail!\n\r");
        return KAL_FALSE;
    }

    //modify MD SW version
    if(!modify_md_sw_version())
    {
        nvram_ut_trace("[NVUT] ota_boot_ota_reset_attr(): modify MD SW version fail!\n\r");
        return KAL_FALSE;
    }

    //call nvram_init()
    nvram_boot_trace = 0;
    nvram_init();
    if(!(nvram_boot_trace & BOOT_TRACE_SW_VERNO_CONFLICT))
    {
        nvram_ut_trace("[NVUT] ota_boot_ota_reset_attr(): enter version conflict fail!\n\r");
        return KAL_FALSE;
    }

    //lid access
    for(i = 0; i < test_lid_number; i++)
    {
        nvram_util_get_data_item(&ldi, test_lid_enum[i]);
        nvram_get_default_value_to_write(ldi, 1, (kal_uint8 *)cmp_buffer, ldi->size);
        if(!nvram_external_read_data(ldi->LID, 1, (kal_uint8 *)data_buffer, ldi->size))
        {
            nvram_ut_trace("[NVUT] ota_boot_ota_reset_attr(): read OTA LID fail!\n\r");
            return KAL_FALSE;
        }
        if(0 != kal_mem_cmp((kal_char*)data_buffer, (kal_char*)cmp_buffer, ldi->size))
        {
            nvram_ut_trace("[NVUT] ota_boot_ota_reset_attr(): read back value not expect!\n\r");
            return KAL_FALSE;
        }
    }

    return KAL_TRUE;
    
}

kal_bool ota_boot_reserve_backward_verno_change(kal_uint32 flags, void *param)
{
    nvram_ltable_entry_struct *ldi = NULL;
    kal_wchar filename[NVRAM_MAX_PATH_LEN];
    nvram_folder_enum folder_index;
    NVRAM_FILE_NAME nvramname;
    kal_uint8 i, ota_time, j;
    kal_uint8 lid_ver[4] = "000";

    //delete all files in Z:/BACKUP folder
    FS_XDelete((const WCHAR*)L"Z:\\NVRAM\\BACKUP", (FS_FILE_TYPE|FS_RECURSIVE_TYPE), NULL, 0);

    //reset test LIDs to default settings
    for(i = 0; i < test_lid_number; i++)
    {
        if(!reset_test_lid_default_setting(test_lid_enum[i]))
        {
            nvram_ut_trace("[NVUT] ota_boot_reserve_backward_verno_change(): reset to default setting fail!\n\r");
            return KAL_FALSE;
        }
    }

    //remove GEN_DEFAULT and add RESERVE_BACKWARD
    for(i = 0; i < test_lid_number; i++)
    {
        nvram_util_get_data_item(&ldi, test_lid_enum[i]);
        ldi->attr &= (~NVRAM_ATTR_GEN_DEFAULT);
        ldi->attr |= NVRAM_ATTR_RESERVE_BACKWARD;
        if(0 == i)
        {
            ldi->attr |= NVRAM_ATTR_MULTIPLE; //add multiple for LID1
        }
    }

    //this test will use LID verno "000"~"012" total 12 version
    for(i = 0; i < test_lid_number; i++)
    {
        if(!delete_special_version_lid(test_lid_enum[i], 0, 12))
        {
            nvram_ut_trace("[NVUT] ota_boot_reserve_backward_verno_change(): delete old version LID fail!\n\r");
            return KAL_FALSE;
        }
    }

    //reset test LIDs
    for(i = 0; i < test_lid_number; i++)
    {
        nvram_util_get_data_item(&ldi, test_lid_enum[i]);
        if(!nvram_reset_data_items(NVRAM_RESET_CERTAIN, NVRAM_APP_RESERVED, ldi, 1, ldi->total_records))
        {
            nvram_ut_trace("[NVUT] ota_boot_reserve_backward_verno_change(): reset test LIDs fail!\n\r");
            return KAL_FALSE;
        }
    }
    
    //reset SYS LID
    if(!nvram_external_reset_data(NVRAM_EF_SW_VERNO_LID, SW_VERNO_RECORD_NUMBER, 1))
    {
        nvram_ut_trace("[NVUT] ota_boot_reserve_backward_verno_change(): reset SYS LID fail!\n\r");
        return KAL_FALSE;
    }

    //write LID
    for(ota_time = 0; ota_time < 12; ota_time++)
    {
        if(0 == ota_time%2) //even loop time write LID of record 1 first
        {
            cmp_buffer[0] = ota_time + 0x30;
            for(i = 0; i < test_lid_number; i++)
            {
                if(!nvram_external_write_data(test_lid_enum[i], 1, (kal_uint8 *)cmp_buffer, NVRAM_EF_TEST_LID_SIZE))
                {
                    nvram_ut_trace("[NVUT] ota_boot_reserve_backward_verno_change(): write previous LID fail!\n\r");
                    return KAL_FALSE;
                }
            }
        }
        //increase LID verno
        for(i = 0; i < test_lid_number; i++)
        {
            if(!lid_verno_increase_one(test_lid_enum[i]))
            {
                nvram_ut_trace("[NVUT] ota_boot_reserve_backward_verno_change(): increase verno fail!\n\r");
                return KAL_FALSE;
            }
        }
        //modify MD SW version
        if(!modify_md_sw_version())
        {
            nvram_ut_trace("[NVUT] ota_boot_reserve_backward_verno_change(): modify MD SW version location1 fail!\n\r");
        }
        //call nvram_init()
        nvram_boot_trace = 0;
        nvram_init();
        if(!(nvram_boot_trace & BOOT_TRACE_SW_VERNO_CONFLICT))
        {
            nvram_ut_trace("[NVUT] ota_boot_reserve_backward_verno_change(): enter version conflict fail!\n\r");
            return KAL_FALSE;
        }
        
    }

    //test nvram_external_search_reserved_lid() API only give first two parameters
    for(j = 0; j < test_lid_number; j++)
    {
        nvram_util_get_data_item(&ldi, test_lid_enum[j]);
        for(i = 0; i <= 10; i+=2) //version 2,4,6,8,10 should in backup folder, version 0 will be deleted
        {
            lid_ver[0] = i/100 + '0';
            lid_ver[1] = i%100/10 + '0';
            lid_ver[2] = i%10 + '0';

            if(0 == i)
            {
                if(nvram_external_search_reserved_lid(ldi->LID, (kal_char *)lid_ver, 0, 0))
                {
                    nvram_ut_trace("[NVUT] ota_boot_reserve_backward_verno_change(): too old versions not deleted!\n\r");
                    return KAL_FALSE;
                }
            }
            else
            {
                if(! nvram_external_search_reserved_lid(ldi->LID, (kal_char *)lid_ver, 0, 0))
                {
                    nvram_ut_trace("[NVUT] ota_boot_reserve_backward_verno_change(): old versions not in backup folder!\n\r");
                    return KAL_FALSE;
                }
            }
        }
    }
    
    //check old versions delete or not(version 12 exist, version 0~14 not exist )
    for(i = 0; i < test_lid_number; i++)
    {
        nvram_util_get_data_item(&ldi, test_lid_enum[i]);
        ldi->fileverno[0] = '0';
        ldi->fileverno[1] = '0';
        ldi->fileverno[2] = '0';
    }
    for(i = 0; i <= 12; i++)
    {
        for(j = 0; j < test_lid_number; j++)
        {
            nvram_util_get_data_item(&ldi, test_lid_enum[j]);
            folder_index = nvram_query_folder_index(ldi->category);
            nvram_util_make_lid_filename(ldi, nvramname, KAL_TRUE);
            nvram_query_file_name(folder_index, nvramname, filename);

            if (FS_GetAttributes(filename) >= FS_NO_ERROR) //all files expect not exist
            {
                nvram_ut_trace("[NVUT] ota_boot_reserve_backward_verno_change(): old version LID not delete!\n\r");
                return KAL_FALSE;
            }

            if(ldi->attr & NVRAM_ATTR_MULTIPLE)
            {
                nvram_util_make_lid_filename(ldi, nvramname, KAL_FALSE);
                nvram_query_file_name(folder_index, nvramname, filename);

                if (FS_GetAttributes(filename) >= FS_NO_ERROR)
                {
                    nvram_ut_trace("[NVUT] ota_boot_reserve_backward_verno_change(): old version LID not delete!\n\r");
                    return KAL_FALSE;
                }
            }
            lid_verno_increase_one(test_lid_enum[j]);
        }
    }

    //downgrade to MD SW version 3 -> related LID verno is "002"
    for(i = 0; i < test_lid_number; i++) //set LID verno to "002"
    {
        nvram_util_get_data_item(&ldi, test_lid_enum[i]);
        ldi->fileverno[0] = '0';
        ldi->fileverno[1] = '0';
        ldi->fileverno[2] = '2';
    }
    //modify MD SW version
    if(!modify_md_sw_version())
    {
        nvram_ut_trace("[NVUT] ota_boot_reserve_backward_verno_change(): modify MD SW version location2 fail!\n\r");
    }
    //call nvram_init()
    nvram_boot_trace = 0;
    nvram_init();
    if(!(nvram_boot_trace & BOOT_TRACE_SW_VERNO_CONFLICT))
    {
        nvram_ut_trace("[NVUT] ota_boot_reserve_backward_verno_change(): second enter version conflict fail!\n\r");
        return KAL_FALSE;
    }
    //check LID record 1 value
    cmp_buffer[0] = 0x32; //expect value is 0x32
    for(i = 0; i < test_lid_number; i++)
    {
        if(!nvram_external_read_data(test_lid_enum[i], 1, (kal_uint8 *)data_buffer, NVRAM_EF_TEST_LID_SIZE))
        {
            nvram_ut_trace("[NVUT] ota_boot_reserve_backward_verno_change(): second read LID fail!\n\r");
            return KAL_FALSE;
        }
        if(0 != kal_mem_cmp((kal_char*)data_buffer, (kal_char*)cmp_buffer, NVRAM_EF_TEST_LID_SIZE))
        {
            nvram_ut_trace("[NVUT] ota_boot_reserve_backward_verno_change(): second read not expect!\n\r");
            return KAL_FALSE;
        }
    }

    //downgrade to MD SW version 1 -> related LID verno is "000"
    for(i = 0; i < test_lid_number; i++)
    {
        nvram_util_get_data_item(&ldi, test_lid_enum[i]);
        ldi->fileverno[0] = '0';
        ldi->fileverno[1] = '0';
        ldi->fileverno[2] = '0';
    }
    //modify MD SW version
    if(!modify_md_sw_version())
    {
        nvram_ut_trace("[NVUT] ota_boot_reserve_backward_verno_change(): modify MD SW version location3 fail!\n\r");
    }
    //call nvram_init()
    nvram_boot_trace = 0;
    nvram_init();
    if(!(nvram_boot_trace & BOOT_TRACE_SW_VERNO_CONFLICT))
    {
        nvram_ut_trace("[NVUT] ota_boot_reserve_backward_verno_change(): third enter version conflict fail!\n\r");
        return KAL_FALSE;
    }
    //check LID record 1 value
    for(i = 0; i < test_lid_number; i++)
    {
        if(!nvram_external_read_data(test_lid_enum[i], 1, (kal_uint8 *)data_buffer, NVRAM_EF_TEST_LID_SIZE))
        {
            nvram_ut_trace("[NVUT] ota_boot_reserve_backward_verno_change(): third read fail!\n\r");
            return KAL_FALSE;
        }

        nvram_util_get_data_item(&ldi, test_lid_enum[i]);
        nvram_get_default_value_to_write(ldi, 1, (kal_uint8 *)cmp_buffer, ldi->size);
        if(0 != kal_mem_cmp((kal_char*)data_buffer, (kal_char*)cmp_buffer, NVRAM_EF_TEST_LID_SIZE))
        {
            cmp_buffer[0] += 1;
            if (NVRAM_IS_CATEGORY_IN_BIN_REGION(ldi->category) && 
                !kal_mem_cmp((kal_char*)data_buffer, (kal_char*)cmp_buffer, NVRAM_EF_TEST_LID_SIZE) ) 
            {
                continue;
            }
            nvram_ut_trace("[NVUT] ota_boot_reserve_backward_verno_change(): third read not expect!\n\r");
            return KAL_FALSE;
        }
    }

    return KAL_TRUE;
    
}

kal_bool ota_boot_reserve_backward_size_change(kal_uint32 flags, void *param)
{
    nvram_ltable_entry_struct *ldi = NULL;
    kal_uint8 i, ota_time;

    //delete all files in Z:/BACKUP folder
    FS_XDelete((const WCHAR*)L"Z:\\NVRAM\\BACKUP", (FS_FILE_TYPE|FS_RECURSIVE_TYPE), NULL, 0);

    //reset test LIDs to default settings
    for(i = 0; i < test_lid_number; i++)
    {
        if(!reset_test_lid_default_setting(test_lid_enum[i]))
        {
            nvram_ut_trace("[NVUT] ota_boot_reserve_backward_size_change(): reset to default setting fail!\n\r");
            return KAL_FALSE;
        }
    }

    //remove GEN_DEFAULT and add RESERVE_BACKWARD
    for(i = 0; i < test_lid_number; i++)
    {
        nvram_util_get_data_item(&ldi, test_lid_enum[i]);
        ldi->attr &= (~NVRAM_ATTR_GEN_DEFAULT);
        ldi->attr |= NVRAM_ATTR_RESERVE_BACKWARD;
        if(0 == i)
        {
            ldi->attr |= NVRAM_ATTR_MULTIPLE; //add multiple for LID1
        }
    }

    //this test will use LID verno "000" version
    for(i = 0; i < test_lid_number; i++)
    {
        if(!delete_special_version_lid(test_lid_enum[i], 0, 0))
        {
            nvram_ut_trace("[NVUT] ota_boot_reserve_backward_size_change(): delete old version LID fail!\n\r");
            return KAL_FALSE;
        }
    }

    //reset test LIDs
    for(i = 0; i < test_lid_number; i++)
    {
        nvram_util_get_data_item(&ldi, test_lid_enum[i]);
        if(!nvram_reset_data_items(NVRAM_RESET_CERTAIN, NVRAM_APP_RESERVED, ldi, 1, ldi->total_records))
        {
            nvram_ut_trace("[NVUT] ota_boot_reserve_backward_size_change(): reset test LIDs fail!\n\r");
            return KAL_FALSE;
        }
    }
    
    //reset SYS LID
    if(!nvram_external_reset_data(NVRAM_EF_SW_VERNO_LID, SW_VERNO_RECORD_NUMBER, 1))
    {
        nvram_ut_trace("[NVUT] ota_boot_reserve_backward_size_change(): reset SYS LID fail!\n\r");
        return KAL_FALSE;
    }

    //write LID
    for(ota_time = 0; ota_time < 12; ota_time++)
    {
        if(0 == ota_time%2) //even loop time write LID of record 1 first
        {
            cmp_buffer[0] = ota_time + 0x30;
            for(i = 0; i < test_lid_number; i++)
            {
                if(!nvram_external_write_data(test_lid_enum[i], 1, (kal_uint8 *)cmp_buffer, ldi->size))
                {
                    nvram_ut_trace("[NVUT] ota_boot_reserve_backward_size_change(): write previous LID fail!\n\r");
                    return KAL_FALSE;
                }
            }
        }
        //change LID size
        for(i = 0; i < test_lid_number; i++)
        {
            nvram_util_get_data_item(&ldi, test_lid_enum[i]);
            ldi->size += 2; //add record size
        }
        //modify MD SW version
        if(!modify_md_sw_version())
        {
            nvram_ut_trace("[NVUT] ota_boot_reserve_backward_size_change(): modify MD SW version location1 fail!\n\r");
        }
        //call nvram_init()
        nvram_boot_trace = 0;
        nvram_init();
        if(!(nvram_boot_trace & BOOT_TRACE_SW_VERNO_CONFLICT))
        {
            nvram_ut_trace("[NVUT] ota_boot_reserve_backward_size_change(): first enter version conflict fail!\n\r");
            return KAL_FALSE;
        }       
        
    }

    //downgrade to MD SW version 2 -> related LID record size is (NVRAM_EF_TEST_LID_SIZE + 4)
    for(i = 0; i < test_lid_number; i++)
    {
        nvram_util_get_data_item(&ldi, test_lid_enum[i]);
        ldi->size = NVRAM_EF_TEST_LID_SIZE + 4;
    }
    //modify MD SW version
    if(!modify_md_sw_version())
    {
        nvram_ut_trace("[NVUT] ota_boot_reserve_backward_size_change(): modify MD SW version location2 fail!\n\r");
    }
    //call nvram_init()
    nvram_boot_trace = 0;
    nvram_init();
    if(!(nvram_boot_trace & BOOT_TRACE_SW_VERNO_CONFLICT))
    {
        nvram_ut_trace("[NVUT] ota_boot_reserve_backward_size_change(): second enter version conflict fail!\n\r");
        return KAL_FALSE;
    }
    //check LID record 1 value
    cmp_buffer[0] = 0x32; //expect value is 0x32
    for(i = 0; i < test_lid_number; i++)
    {
        nvram_util_get_data_item(&ldi, test_lid_enum[i]);
        if( NVRAM_IS_CATEGORY_IMPORTANT_L4(ldi->category) || NVRAM_IS_CATEGORY_IN_BIN_REGION(ldi->category))
        {
            continue;
        }
        if(!nvram_external_read_data(test_lid_enum[i], 1, (kal_uint8 *)data_buffer, ldi->size))
        {
            nvram_ut_trace("[NVUT] ota_boot_reserve_backward_size_change(): second read fail!\n\r");
            return KAL_FALSE;
        }

        if(0 != kal_mem_cmp((kal_char*)data_buffer, (kal_char*)cmp_buffer, ldi->size))
        {
            nvram_ut_trace("[NVUT] ota_boot_reserve_backward_size_change(): second read not expect!\n\r");
            return KAL_FALSE;
        }
    }

    //downgrade to MD SW version 1 -> related LID record size is (NVRAM_EF_TEST_LID_SIZE)
    for(i = 0; i < test_lid_number; i++)
    {
        nvram_util_get_data_item(&ldi, test_lid_enum[i]);
        ldi->size = NVRAM_EF_TEST_LID_SIZE;
    }
    //modify MD SW version
    if(!modify_md_sw_version())
    {
        nvram_ut_trace("[NVUT] ota_boot_reserve_backward_size_change(): modify MD SW version location3 fail!\n\r");
    }
    //call nvram_init()
    nvram_boot_trace = 0;
    nvram_init();
    if(!(nvram_boot_trace & BOOT_TRACE_SW_VERNO_CONFLICT))
    {
        nvram_ut_trace("[NVUT] ota_boot_reserve_backward_size_change(): third enter version conflict fail!\n\r");
        return KAL_FALSE;
    }
    //check LID record 1 value
    for(i = 0; i < test_lid_number; i++)
    {
        nvram_util_get_data_item(&ldi, test_lid_enum[i]);
        if( NVRAM_IS_CATEGORY_IMPORTANT_L4(ldi->category) || NVRAM_IS_CATEGORY_IN_BIN_REGION(ldi->category))
        {
            continue;
        }
        if(!nvram_external_read_data(test_lid_enum[i], 1, (kal_uint8 *)data_buffer, ldi->size))
        {
            nvram_ut_trace("[NVUT] ota_boot_reserve_backward_size_change(): third read fail!\n\r");
            return KAL_FALSE;
        }

        nvram_get_default_value_to_write(ldi, 1, (kal_uint8 *)cmp_buffer, ldi->size);
        if(0 != kal_mem_cmp((kal_char*)data_buffer, (kal_char*)cmp_buffer, ldi->size))
        {
            nvram_ut_trace("[NVUT] ota_boot_reserve_backward_size_change(): third read not expect!\n\r");
            return KAL_FALSE;
        }
    }

    return KAL_TRUE;
    
}

kal_bool normal_boot_basic_access(kal_uint32 flags, void *param)
{
    nvram_ltable_entry_struct *ldi = NULL;
    kal_uint8 i;
    
    //reset test LIDs to default settings
    for(i = 0; i < test_lid_number; i++)
    {
        if(!reset_test_lid_default_setting(test_lid_enum[i]))
        {
            nvram_ut_trace("[NVUT] normal_boot_basic_access(): reset LIDs to default setting fail!\n\r");
            return KAL_FALSE;
        }
    }

    //this test will use LID verno "000" only
    for(i = 0; i < test_lid_number; i++)
    {
        if(!delete_special_version_lid(test_lid_enum[i], 0, 0))
        {
            nvram_ut_trace("[NVUT] normal_boot_basic_access(): delete old version LID fail!\n\r");
            return KAL_FALSE;
        }
    }

    //reset(create) test LIDs
    for(i = 0; i < test_lid_number; i++)
    {
        nvram_util_get_data_item(&ldi, test_lid_enum[i]);
        if(!nvram_reset_data_items(NVRAM_RESET_CERTAIN, NVRAM_APP_RESERVED, ldi, 1, ldi->total_records))
        {
            nvram_ut_trace("[NVUT] normal_boot_basic_access(): reset test LIDs fail!\n\r");
            return KAL_FALSE;
        }
    }

    //reset SYS LID to default value
    if(!nvram_external_reset_data(NVRAM_EF_SW_VERNO_LID, SW_VERNO_RECORD_NUMBER, 1))
    {
        nvram_ut_trace("[NVUT] normal_boot_basic_access(): reset SYS LID fail!\n\r");
        return KAL_FALSE;
    }

    //call nvram_init()
    nvram_boot_trace = 0;
    nvram_init();
    if(!(nvram_boot_trace & BOOT_TRACE_SW_VERNO_COMPATIBLE))
    {
        nvram_ut_trace("[NVUT] normal_boot_basic_access(): enter version conflict fail!\n\r");
        return KAL_FALSE;
    }

    //lid access
    for(i = 0; i < test_lid_number; i++)
    {
        if(0 != nvram_lid_cmpt_operation(test_lid_enum[i], 
                                         CMPT_OP_FLAG_GEN(CMPT_OP_FLAG_READBACK, CMPT_OP_FLAG_WRITE, CMPT_OP_FLAG_RESET, 0), 
                                         CMPT_OP_WAY_API, 1, NVRAM_EF_TEST_LID_RECORD_TOTAL))           
        {   
            nvram_ut_trace("[NVUT] normal_boot_basic_access(): nvram_lid_cmpt_operation() fail!\n\r");
            return KAL_FALSE;
        }
    }

    return KAL_TRUE;
    
}

kal_bool normal_boot_user_lost_read(kal_uint32 flags, void *param)
{
    nvram_ltable_entry_struct *ldi = NULL;
    kal_wchar filename[NVRAM_MAX_PATH_LEN];
    nvram_folder_enum folder_index;
    NVRAM_FILE_NAME nvramname;

    //reset test LIDs to default settings
    if( !reset_test_lid_default_setting(NVRAM_EF_NVRAM_TEST_1_LID) )
    {
        nvram_ut_trace("[NVUT] normal_boot_user_lost_read(): reset test LID settings fail!\n\r");
    }

    //this test will use LID verno "000" only
    if( !delete_special_version_lid(NVRAM_EF_NVRAM_TEST_1_LID, 0, 0) )
    {
        nvram_ut_trace("[NVUT] normal_boot_user_lost_read(): delete test LID fail!\n\r");
    }

    //reset LID and then delete it
    nvram_util_get_data_item(&ldi, NVRAM_EF_NVRAM_TEST_1_LID);
    if(!nvram_reset_data_items(NVRAM_RESET_CERTAIN, NVRAM_APP_RESERVED, ldi, 1, ldi->total_records))
    {
        nvram_ut_trace("[NVUT] normal_boot_user_lost_read(): reset test LID fail!\n\r");
        return KAL_FALSE;
    }
    folder_index = nvram_query_folder_index(ldi->category);
    nvram_util_make_lid_filename(ldi, nvramname, KAL_TRUE);
    nvram_query_file_name(folder_index, nvramname, filename);
    FS_Delete(filename);

    //reset SYS LID to default value
    if(!nvram_external_reset_data(NVRAM_EF_SW_VERNO_LID, SW_VERNO_RECORD_NUMBER, 1))
    {
        nvram_ut_trace("[NVUT] normal_boot_user_lost_read(): reset SYS LID fail!\n\r");
        return KAL_FALSE;
    }

    //call nvram_init()
    nvram_boot_trace = 0;
    nvram_init();
    if(!(nvram_boot_trace & BOOT_TRACE_SW_VERNO_COMPATIBLE))
    {
        nvram_ut_trace("[NVUT] normal_boot_user_lost_read(): enter version conflict fail!\n\r");
        return KAL_FALSE;
    }

    //lid access
    nvram_ut_assert_flag = 0;
    if(0 != nvram_lid_cmpt_operation(NVRAM_EF_NVRAM_TEST_1_LID,
                                     CMPT_OP_FLAG_GEN(CMPT_OP_FLAG_READBACK, 0, 0, 0),
                                     CMPT_OP_WAY_API, 1, NVRAM_EF_TEST_LID_RECORD_TOTAL))
    {
        nvram_ut_trace("[NVUT] normal_boot_user_lost_read(): nvram_lid_cmpt_operation() fail!\n\r");
        return KAL_FALSE;
    }
    if(nvram_ut_assert_flag)
    {
        nvram_ut_trace("[NVUT] normal_boot_user_lost_read(): unexpect assert happen!\n\r");
        return KAL_FALSE;
    }

    return KAL_TRUE;
    
}

kal_bool normal_boot_user_lost_write(kal_uint32 flags, void *param)
{
    nvram_ltable_entry_struct *ldi = NULL;
    kal_wchar filename[NVRAM_MAX_PATH_LEN];
    nvram_folder_enum folder_index;
    NVRAM_FILE_NAME nvramname;

    //reset test LIDs to default settings
    if( !reset_test_lid_default_setting(NVRAM_EF_NVRAM_TEST_1_LID) )
    {
        nvram_ut_trace("[NVUT] normal_boot_user_lost_write(): reset test LID settings fail!\n\r");
    }

    //this test will use LID verno "000" only
    if( !delete_special_version_lid(NVRAM_EF_NVRAM_TEST_1_LID, 0, 0) )
    {
        nvram_ut_trace("[NVUT] normal_boot_user_lost_write(): delete test LID fail!\n\r");
    }

    //reset LID and then delete it
    nvram_util_get_data_item(&ldi, NVRAM_EF_NVRAM_TEST_1_LID);
    if(!nvram_reset_data_items(NVRAM_RESET_CERTAIN, NVRAM_APP_RESERVED, ldi, 1, ldi->total_records))
    {
        nvram_ut_trace("[NVUT] normal_boot_user_lost_write(): reset test LID fail!\n\r");
        return KAL_FALSE;
    }
    folder_index = nvram_query_folder_index(ldi->category);
    nvram_util_make_lid_filename(ldi, nvramname, KAL_TRUE);
    nvram_query_file_name(folder_index, nvramname, filename);
    FS_Delete(filename);

    //reset SYS LID to default value
    if(!nvram_external_reset_data(NVRAM_EF_SW_VERNO_LID, SW_VERNO_RECORD_NUMBER, 1))
    {
        nvram_ut_trace("[NVUT] normal_boot_user_lost_write(): reset SYS LID fail!\n\r");
        return KAL_FALSE;
    }

    //call nvram_init()
    nvram_boot_trace = 0;
    nvram_init();
    if(!(nvram_boot_trace & BOOT_TRACE_SW_VERNO_COMPATIBLE))
    {
        nvram_ut_trace("[NVUT] normal_boot_user_lost_write(): enter version conflict fail!\n\r");
        return KAL_FALSE;
    }

    //lid access
    nvram_ut_assert_flag = 0;
    if(0 != nvram_lid_cmpt_operation(NVRAM_EF_NVRAM_TEST_1_LID,
                                     CMPT_OP_FLAG_GEN(CMPT_OP_FLAG_WRITE, 0, 0, 0),
                                     CMPT_OP_WAY_API, 1, NVRAM_EF_TEST_LID_RECORD_TOTAL))
    {
        nvram_ut_trace("[NVUT] normal_boot_user_lost_write(): nvram_lid_cmpt_operation() fail!\n\r");
        return KAL_FALSE;
    }
    if(nvram_ut_assert_flag)
    {
        nvram_ut_trace("[NVUT] normal_boot_user_lost_write(): unexpect assert happen!\n\r");
        return KAL_FALSE;
    }

    return KAL_TRUE;
    
}

kal_bool normal_boot_user_lost_reset(kal_uint32 flags, void *param)
{
    nvram_ltable_entry_struct *ldi = NULL;
    kal_wchar filename[NVRAM_MAX_PATH_LEN];
    nvram_folder_enum folder_index;
    NVRAM_FILE_NAME nvramname;

    //reset test LIDs to default settings
    if( !reset_test_lid_default_setting(NVRAM_EF_NVRAM_TEST_1_LID) )
    {
        nvram_ut_trace("[NVUT] normal_boot_user_lost_reset(): reset test LID settings fail!\n\r");
    }

    //this test will use LID verno "000" only
    if( !delete_special_version_lid(NVRAM_EF_NVRAM_TEST_1_LID, 0, 0) )
    {
        nvram_ut_trace("[NVUT] normal_boot_user_lost_reset(): delete test LID fail!\n\r");
    }

    //reset LID and then delete it
    nvram_util_get_data_item(&ldi, NVRAM_EF_NVRAM_TEST_1_LID);
    if(!nvram_reset_data_items(NVRAM_RESET_CERTAIN, NVRAM_APP_RESERVED, ldi, 1, ldi->total_records))
    {
        nvram_ut_trace("[NVUT] normal_boot_user_lost_reset(): reset test LID fail!\n\r");
        return KAL_FALSE;
    }
    folder_index = nvram_query_folder_index(ldi->category);
    nvram_util_make_lid_filename(ldi, nvramname, KAL_TRUE);
    nvram_query_file_name(folder_index, nvramname, filename);
    FS_Delete(filename);

    //reset SYS LID to default value
    if(!nvram_external_reset_data(NVRAM_EF_SW_VERNO_LID, SW_VERNO_RECORD_NUMBER, 1))
    {
        nvram_ut_trace("[NVUT] normal_boot_user_lost_reset(): reset SYS LID fail!\n\r");
        return KAL_FALSE;
    }

    //call nvram_init()
    nvram_boot_trace = 0;
    nvram_init();
    if(!(nvram_boot_trace & BOOT_TRACE_SW_VERNO_COMPATIBLE))
    {
        nvram_ut_trace("[NVUT] normal_boot_user_lost_reset(): enter version conflict fail!\n\r");
        return KAL_FALSE;
    }

    //lid access
    nvram_ut_assert_flag = 0;
    if(0 != nvram_lid_cmpt_operation(NVRAM_EF_NVRAM_TEST_1_LID,
                                     CMPT_OP_FLAG_GEN(CMPT_OP_FLAG_WRITE, 0, 0, 0),
                                     CMPT_OP_WAY_API, 1, NVRAM_EF_TEST_LID_RECORD_TOTAL))
    {
        nvram_ut_trace("[NVUT] normal_boot_user_lost_reset(): nvram_lid_cmpt_operation() fail!\n\r");
        return KAL_FALSE;
    }
    if(nvram_ut_assert_flag)
    {
        nvram_ut_trace("[NVUT] normal_boot_user_lost_reset(): unexpect assert happen!\n\r");
        return KAL_FALSE;
    }

    return KAL_TRUE;
    
}

kal_bool normal_boot_internal_lost_read(kal_uint32 flags, void *param)
{
    nvram_ltable_entry_struct *ldi = NULL;
    kal_wchar filename[NVRAM_MAX_PATH_LEN];
    nvram_folder_enum folder_index;
    NVRAM_FILE_NAME nvramname;

    //reset test LIDs to default settings
    if( !reset_test_lid_default_setting(NVRAM_EF_NVRAM_TEST_2_LID) )
    {
        nvram_ut_trace("[NVUT] normal_boot_internal_lost_read(): reset test LID settings fail!\n\r");
    }

    //this test will use LID verno "000" only
    if( !delete_special_version_lid(NVRAM_EF_NVRAM_TEST_2_LID, 0, 0) )
    {
        nvram_ut_trace("[NVUT] normal_boot_internal_lost_read(): delete test LID fail!\n\r");
    }

    //reset LID and then delete it
    nvram_util_get_data_item(&ldi, NVRAM_EF_NVRAM_TEST_2_LID);
    if(!nvram_reset_data_items(NVRAM_RESET_CERTAIN, NVRAM_APP_RESERVED, ldi, 1, ldi->total_records))
    {
        nvram_ut_trace("[NVUT] normal_boot_internal_lost_read(): reset test LID fail!\n\r");
        return KAL_FALSE;
    }
    folder_index = nvram_query_folder_index(ldi->category);
    nvram_util_make_lid_filename(ldi, nvramname, KAL_TRUE);
    nvram_query_file_name(folder_index, nvramname, filename);
    FS_Delete(filename);

    //reset SYS LID to default value
    if(!nvram_external_reset_data(NVRAM_EF_SW_VERNO_LID, SW_VERNO_RECORD_NUMBER, 1))
    {
        nvram_ut_trace("[NVUT] normal_boot_internal_lost_read(): reset SYS LID fail!\n\r");
        return KAL_FALSE;
    }

    //call nvram_init()
    nvram_boot_trace = 0;
    nvram_init();
    if(!(nvram_boot_trace & BOOT_TRACE_SW_VERNO_COMPATIBLE))
    {
        nvram_ut_trace("[NVUT] normal_boot_internal_lost_read(): enter version conflict fail!\n\r");
        return KAL_FALSE;
    }

    //lid access
    nvram_ut_assert_flag = 0;
        //internal LID size change expect read fail, internal will not run reset flow in nvram_read_data_item()
    if(0 == nvram_lid_cmpt_operation(NVRAM_EF_NVRAM_TEST_2_LID,
                                     CMPT_OP_FLAG_GEN(CMPT_OP_FLAG_READ, 0, 0, 0),
                                     CMPT_OP_WAY_API, 1, NVRAM_EF_TEST_LID_RECORD_TOTAL))
    {
        nvram_ut_trace("[NVUT] normal_boot_internal_lost_read(): expect read fail not happen!\n\r");
        return KAL_FALSE;
    }
    if(nvram_ut_assert_flag)
    {
        nvram_ut_trace("[NVUT] normal_boot_internal_lost_read(): unexpect assert happen!\n\r");
        return KAL_FALSE;
    }

    return KAL_TRUE;
    
}

kal_bool normal_boot_internal_lost_write(kal_uint32 flags, void *param)
{
    nvram_ltable_entry_struct *ldi = NULL;
    kal_wchar filename[NVRAM_MAX_PATH_LEN];
    nvram_folder_enum folder_index;
    NVRAM_FILE_NAME nvramname;

    //reset test LIDs to default settings
    if( !reset_test_lid_default_setting(NVRAM_EF_NVRAM_TEST_2_LID) )
    {
        nvram_ut_trace("[NVUT] normal_boot_internal_lost_write(): reset test LID settings fail!\n\r");
    }

    //this test will use LID verno "000" only
    if( !delete_special_version_lid(NVRAM_EF_NVRAM_TEST_2_LID, 0, 0) )
    {
        nvram_ut_trace("[NVUT] normal_boot_internal_lost_write(): delete test LID fail!\n\r");
    }

    //reset LID and then delete it
    nvram_util_get_data_item(&ldi, NVRAM_EF_NVRAM_TEST_2_LID);
    if(!nvram_reset_data_items(NVRAM_RESET_CERTAIN, NVRAM_APP_RESERVED, ldi, 1, ldi->total_records))
    {
        nvram_ut_trace("[NVUT] normal_boot_internal_lost_write(): reset test LID fail!\n\r");
        return KAL_FALSE;
    }
    folder_index = nvram_query_folder_index(ldi->category);
    nvram_util_make_lid_filename(ldi, nvramname, KAL_TRUE);
    nvram_query_file_name(folder_index, nvramname, filename);
    FS_Delete(filename);

    //reset SYS LID to default value
    if(!nvram_external_reset_data(NVRAM_EF_SW_VERNO_LID, SW_VERNO_RECORD_NUMBER, 1))
    {
        nvram_ut_trace("[NVUT] normal_boot_internal_lost_write(): reset SYS LID fail!\n\r");
        return KAL_FALSE;
    }

    //call nvram_init()
    nvram_boot_trace = 0;
    nvram_init();
    if(!(nvram_boot_trace & BOOT_TRACE_SW_VERNO_COMPATIBLE))
    {
        nvram_ut_trace("[NVUT] normal_boot_internal_lost_write(): enter version conflict fail!\n\r");
        return KAL_FALSE;
    }

    //lid access
    nvram_ut_assert_flag = 0;
    if(0 != nvram_lid_cmpt_operation(NVRAM_EF_NVRAM_TEST_2_LID,
                                     CMPT_OP_FLAG_GEN(CMPT_OP_FLAG_WRITE, 0, 0, 0),
                                     CMPT_OP_WAY_API, 1, NVRAM_EF_TEST_LID_RECORD_TOTAL))
    {
        nvram_ut_trace("[NVUT] normal_boot_internal_lost_write(): nvram_lid_cmpt_operation() fail!\n\r");
        return KAL_FALSE;
    }
    if(nvram_ut_assert_flag)
    {
        nvram_ut_trace("[NVUT] normal_boot_internal_lost_write(): unexpect assert happen!\n\r");
        return KAL_FALSE;
    }

    return KAL_TRUE;
    
}

kal_bool normal_boot_internal_lost_reset(kal_uint32 flags, void *param)
{
    nvram_ltable_entry_struct *ldi = NULL;
    kal_wchar filename[NVRAM_MAX_PATH_LEN];
    nvram_folder_enum folder_index;
    NVRAM_FILE_NAME nvramname;

    //reset test LIDs to default settings
    if( !reset_test_lid_default_setting(NVRAM_EF_NVRAM_TEST_2_LID) )
    {
        nvram_ut_trace("[NVUT] normal_boot_internal_lost_reset(): reset test LID settings fail!\n\r");
    }

    //this test will use LID verno "000" only
    if( !delete_special_version_lid(NVRAM_EF_NVRAM_TEST_2_LID, 0, 0) )
    {
        nvram_ut_trace("[NVUT] normal_boot_internal_lost_reset(): delete test LID fail!\n\r");
    }
    
    //reset LID and then delete it
    nvram_util_get_data_item(&ldi, NVRAM_EF_NVRAM_TEST_2_LID);
    if(!nvram_reset_data_items(NVRAM_RESET_CERTAIN, NVRAM_APP_RESERVED, ldi, 1, ldi->total_records))
    {
        nvram_ut_trace("[NVUT] normal_boot_internal_lost_reset(): reset test LID fail!\n\r");
        return KAL_FALSE;
    }
    folder_index = nvram_query_folder_index(ldi->category);
    nvram_util_make_lid_filename(ldi, nvramname, KAL_TRUE);
    nvram_query_file_name(folder_index, nvramname, filename);
    FS_Delete(filename);

    //reset SYS LID to default value
    if(!nvram_external_reset_data(NVRAM_EF_SW_VERNO_LID, SW_VERNO_RECORD_NUMBER, 1))
    {
        nvram_ut_trace("[NVUT] normal_boot_internal_lost_reset(): reset SYS LID fail!\n\r");
        return KAL_FALSE;
    }

    //call nvram_init()
    nvram_boot_trace = 0;
    nvram_init();
    if(!(nvram_boot_trace & BOOT_TRACE_SW_VERNO_COMPATIBLE))
    {
        nvram_ut_trace("[NVUT] normal_boot_internal_lost_reset(): enter version conflict fail!\n\r");
        return KAL_FALSE;
    }

    //lid access
    nvram_ut_assert_flag = 0;
    if(0 != nvram_lid_cmpt_operation(NVRAM_EF_NVRAM_TEST_2_LID,
                                     CMPT_OP_FLAG_GEN(CMPT_OP_FLAG_RESET, 0, 0, 0),
                                     CMPT_OP_WAY_API, 1, NVRAM_EF_TEST_LID_RECORD_TOTAL))
    {
        nvram_ut_trace("[NVUT] normal_boot_internal_lost_reset(): nvram_lid_cmpt_operation() fail!\n\r");
        return KAL_FALSE;
    }
    if(nvram_ut_assert_flag)
    {
        nvram_ut_trace("[NVUT] normal_boot_internal_lost_reset(): unexpect assert happen!\n\r");
        return KAL_FALSE;
    }

    return KAL_TRUE;
    
}

kal_bool normal_boot_calibrat_lost_read(kal_uint32 flags, void *param)
{
    nvram_ltable_entry_struct *ldi = NULL;
    kal_wchar filename[NVRAM_MAX_PATH_LEN];
    nvram_folder_enum folder_index;
    NVRAM_FILE_NAME nvramname;
    kal_uint8 i;
    
    //reset test LIDs to default settings
    if( !reset_test_lid_default_setting(NVRAM_EF_NVRAM_TEST_3_LID) )
    {
        nvram_ut_trace("[NVUT] normal_boot_calibrat_lost_read(): reset test LID settings fail!\n\r");
    }

    //this test will use LID verno "000" only
    if( !delete_special_version_lid(NVRAM_EF_NVRAM_TEST_3_LID, 0, 0) )
    {
        nvram_ut_trace("[NVUT] normal_boot_calibrat_lost_read(): delete test LID fail!\n\r");
    }
    
    //reset LID and then delete it
    nvram_util_get_data_item(&ldi, NVRAM_EF_NVRAM_TEST_3_LID);
    if(!nvram_reset_data_items(NVRAM_RESET_CERTAIN, NVRAM_APP_RESERVED, ldi, 1, ldi->total_records))
    {
        nvram_ut_trace("[NVUT] normal_boot_calibrat_lost_read(): reset test LID fail!\n\r");
        return KAL_FALSE;
    }
    folder_index = nvram_query_folder_index(ldi->category);
    nvram_util_make_lid_filename(ldi, nvramname, KAL_TRUE);
    nvram_query_file_name(folder_index, nvramname, filename);
    FS_Delete(filename);

    //reset SYS LID to default value
    if(!nvram_external_reset_data(NVRAM_EF_SW_VERNO_LID, SW_VERNO_RECORD_NUMBER, 1))
    {
        nvram_ut_trace("[NVUT] normal_boot_calibrat_lost_read(): reset SYS LID fail!\n\r");
        return KAL_FALSE;
    }

    //call nvram_init()
    nvram_boot_trace = 0;
    nvram_init();
    if(!(nvram_boot_trace & BOOT_TRACE_SW_VERNO_COMPATIBLE))
    {
        nvram_ut_trace("[NVUT] normal_boot_calibrat_lost_read(): enter version conflict fail!\n\r");
        return KAL_FALSE;
    }

    //lid access
    nvram_util_get_data_item(&ldi, NVRAM_EF_NVRAM_TEST_3_LID);
    kal_mem_set(data_buffer, 0, ldi->size);
    data_buffer[0] = 0x1; //modify to the value before binregion backup
    for(i = 1; i <= ldi->total_records; i++)
    {
        if(!nvram_external_read_data(ldi->LID, i, (kal_uint8 *)cmp_buffer, ldi->size))
        {
            nvram_ut_trace("[NVUT] normal_boot_calibrat_lost_read(): read LID fail!\n\r");
            return KAL_FALSE;
        }
        if(0 != kal_mem_cmp(data_buffer, cmp_buffer, ldi->size))
        {
            nvram_ut_trace("[NVUT] normal_boot_calibrat_lost_read(): read back value not expect!\n\r");
            return KAL_FALSE;
        }
    }

    return KAL_TRUE;
    
}

kal_bool normal_boot_calibrat_lost_write(kal_uint32 flags, void *param)
{
    nvram_ltable_entry_struct *ldi = NULL;
    kal_wchar filename[NVRAM_MAX_PATH_LEN];
    nvram_folder_enum folder_index;
    NVRAM_FILE_NAME nvramname;

    //reset test LIDs to default settings
    if( !reset_test_lid_default_setting(NVRAM_EF_NVRAM_TEST_3_LID) )
    {
        nvram_ut_trace("[NVUT] normal_boot_calibrat_lost_write(): reset test LID settings fail!\n\r");
    }

    //this test will use LID verno "000" only
    if( !delete_special_version_lid(NVRAM_EF_NVRAM_TEST_3_LID, 0, 0) )
    {
        nvram_ut_trace("[NVUT] normal_boot_calibrat_lost_write(): delete test LID fail!\n\r");
    }

    //reset LID and then delete it
    nvram_util_get_data_item(&ldi, NVRAM_EF_NVRAM_TEST_3_LID);
    if(!nvram_reset_data_items(NVRAM_RESET_CERTAIN, NVRAM_APP_RESERVED, ldi, 1, ldi->total_records))
    {
        nvram_ut_trace("[NVUT] normal_boot_calibrat_lost_write(): reset test LID fail!\n\r");
        return KAL_FALSE;
    }
    folder_index = nvram_query_folder_index(ldi->category);
    nvram_util_make_lid_filename(ldi, nvramname, KAL_TRUE);
    nvram_query_file_name(folder_index, nvramname, filename);
    FS_Delete(filename);

    //reset SYS LID to default value
    if(!nvram_external_reset_data(NVRAM_EF_SW_VERNO_LID, SW_VERNO_RECORD_NUMBER, 1))
    {
        nvram_ut_trace("[NVUT] normal_boot_calibrat_lost_write(): reset SYS LID fail!\n\r");
        return KAL_FALSE;
    }

    //call nvram_init()
    nvram_boot_trace = 0;
    nvram_init();
    if(!(nvram_boot_trace & BOOT_TRACE_SW_VERNO_COMPATIBLE))
    {
        nvram_ut_trace("[NVUT] normal_boot_calibrat_lost_write(): enter version conflict fail!\n\r");
        return KAL_FALSE;
    }

    //lid access
    nvram_ut_assert_flag = 0;
    if(0 != nvram_lid_cmpt_operation(NVRAM_EF_NVRAM_TEST_3_LID,
                                     CMPT_OP_FLAG_GEN(CMPT_OP_FLAG_WRITE, 0, 0, 0),
                                     CMPT_OP_WAY_API, 1, NVRAM_EF_TEST_LID_RECORD_TOTAL))
    {
        nvram_ut_trace("[NVUT] normal_boot_calibrat_lost_write(): nvram_lid_cmpt_operation() fail!\n\r");
        return KAL_FALSE;
    }
    if(nvram_ut_assert_flag)
    {
        nvram_ut_trace("[NVUT] normal_boot_calibrat_lost_write(): unexpect assert happen!\n\r");
        return KAL_FALSE;
    }

    return KAL_TRUE;
    
}

kal_bool normal_boot_calibrat_lost_reset(kal_uint32 flags, void *param)
{
    nvram_ltable_entry_struct *ldi = NULL;
    kal_wchar filename[NVRAM_MAX_PATH_LEN];
    nvram_folder_enum folder_index;
    NVRAM_FILE_NAME nvramname;

    //reset test LIDs to default settings
    if( !reset_test_lid_default_setting(NVRAM_EF_NVRAM_TEST_3_LID) )
    {
        nvram_ut_trace("[NVUT] normal_boot_calibrat_lost_reset(): reset test LID settings fail!\n\r");
    }

    //this test will use LID verno "000" only
    if( !delete_special_version_lid(NVRAM_EF_NVRAM_TEST_3_LID, 0, 0) )
    {
        nvram_ut_trace("[NVUT] normal_boot_calibrat_lost_reset(): delete test LID fail!\n\r");
    }
    
    //reset LID and then delete it
    nvram_util_get_data_item(&ldi, NVRAM_EF_NVRAM_TEST_3_LID);
    if(!nvram_reset_data_items(NVRAM_RESET_CERTAIN, NVRAM_APP_RESERVED, ldi, 1, ldi->total_records))
    {
        nvram_ut_trace("[NVUT] normal_boot_calibrat_lost_reset(): reset test LID fail!\n\r");
        return KAL_FALSE;
    }
    folder_index = nvram_query_folder_index(ldi->category);
    nvram_util_make_lid_filename(ldi, nvramname, KAL_TRUE);
    nvram_query_file_name(folder_index, nvramname, filename);
    FS_Delete(filename);

    //reset SYS LID to default value
    if(!nvram_external_reset_data(NVRAM_EF_SW_VERNO_LID, SW_VERNO_RECORD_NUMBER, 1))
    {
        nvram_ut_trace("[NVUT] normal_boot_calibrat_lost_reset(): reset SYS LID fail!\n\r");
        return KAL_FALSE;
    }

    //call nvram_init()
    nvram_boot_trace = 0;
    nvram_init();
    if(!(nvram_boot_trace & BOOT_TRACE_SW_VERNO_COMPATIBLE))
    {
        nvram_ut_trace("[NVUT] normal_boot_calibrat_lost_reset(): enter version conflict fail!\n\r");
        return KAL_FALSE;
    }

    //lid access
    nvram_ut_assert_flag = 0;
    if(0 != nvram_lid_cmpt_operation(NVRAM_EF_NVRAM_TEST_3_LID,
                                     CMPT_OP_FLAG_GEN(CMPT_OP_FLAG_RESET, 0, 0, 0),
                                     CMPT_OP_WAY_API, 1, NVRAM_EF_TEST_LID_RECORD_TOTAL))
    {
        nvram_ut_trace("[NVUT] normal_boot_calibrat_lost_reset(): nvram_lid_cmpt_operation() fail!\n\r");
        return KAL_FALSE;
    }
    if(nvram_ut_assert_flag)
    {
        nvram_ut_trace("[NVUT] normal_boot_calibrat_lost_reset(): unexpect assert happen!\n\r");
        return KAL_FALSE;
    }

    return KAL_TRUE;
    
}

kal_bool normal_boot_important_lost_read(kal_uint32 flags, void *param)
{
    nvram_ltable_entry_struct *ldi = NULL;
    kal_wchar filename[NVRAM_MAX_PATH_LEN];
    nvram_folder_enum folder_index;
    NVRAM_FILE_NAME nvramname;
    kal_uint8 i;

    //reset test LIDs to default settings
    if( !reset_test_lid_default_setting(NVRAM_EF_NVRAM_TEST_4_LID) )
    {
        nvram_ut_trace("[NVUT] normal_boot_important_lost_read(): reset test LID settings fail!\n\r");
    }

    //this test will use LID verno "000" only
    if( !delete_special_version_lid(NVRAM_EF_NVRAM_TEST_4_LID, 0, 0) )
    {
        nvram_ut_trace("[NVUT] normal_boot_important_lost_read(): delete test LID fail!\n\r");
    }

    //reset LID and then delete it
    nvram_util_get_data_item(&ldi, NVRAM_EF_NVRAM_TEST_4_LID);
    if(!nvram_reset_data_items(NVRAM_RESET_CERTAIN, NVRAM_APP_RESERVED, ldi, 1, ldi->total_records))
    {
        nvram_ut_trace("[NVUT] normal_boot_important_lost_read(): reset test LID fail!\n\r");
        return KAL_FALSE;
    }
    folder_index = nvram_query_folder_index(ldi->category);
    nvram_util_make_lid_filename(ldi, nvramname, KAL_TRUE);
    nvram_query_file_name(folder_index, nvramname, filename);
    FS_Delete(filename);


    //reset SYS LID to default value
    if(!nvram_external_reset_data(NVRAM_EF_SW_VERNO_LID, SW_VERNO_RECORD_NUMBER, 1))
    {
        nvram_ut_trace("[NVUT] normal_boot_important_lost_read(): reset SYS LID fail!\n\r");
        return KAL_FALSE;
    }

    //call nvram_init()
    nvram_boot_trace = 0;
    nvram_init();
    if(!(nvram_boot_trace & BOOT_TRACE_SW_VERNO_COMPATIBLE))
    {
        nvram_ut_trace("[NVUT] normal_boot_important_lost_read(): enter version conflict fail!\n\r");
        return KAL_FALSE;
    }

    //lid access
    nvram_util_get_data_item(&ldi, NVRAM_EF_NVRAM_TEST_4_LID);
    kal_mem_set(data_buffer, 0, ldi->size);
    data_buffer[0] = 0x1; //modify to the value before binregion backup
    for(i = 1; i <= ldi->total_records; i++)
    {
        if(!nvram_external_read_data(ldi->LID, i, (kal_uint8 *)cmp_buffer, ldi->size))
        {
            nvram_ut_trace("[NVUT] normal_boot_important_lost_read(): read LID fail!\n\r");
            return KAL_FALSE;
        }
        if(0 != kal_mem_cmp(data_buffer, cmp_buffer, ldi->size))
        {
            nvram_ut_trace("[NVUT] normal_boot_important_lost_read(): read back value not expect!\n\r");
            return KAL_FALSE;
        }
    }

    return KAL_TRUE;
    
}

kal_bool normal_boot_important_lost_write(kal_uint32 flags, void *param)
{
    nvram_ltable_entry_struct *ldi = NULL;
    kal_wchar filename[NVRAM_MAX_PATH_LEN];
    nvram_folder_enum folder_index;
    NVRAM_FILE_NAME nvramname;

    //reset test LIDs to default settings
    if( !reset_test_lid_default_setting(NVRAM_EF_NVRAM_TEST_4_LID) )
    {
        nvram_ut_trace("[NVUT] normal_boot_important_lost_write(): reset test LID settings fail!\n\r");
    }

    //this test will use LID verno "000" only
    if( !delete_special_version_lid(NVRAM_EF_NVRAM_TEST_4_LID, 0, 0) )
    {
        nvram_ut_trace("[NVUT] normal_boot_important_lost_write(): delete test LID fail!\n\r");
    }
    
    //reset LID and then delete it
    nvram_util_get_data_item(&ldi, NVRAM_EF_NVRAM_TEST_4_LID);
    if(!nvram_reset_data_items(NVRAM_RESET_CERTAIN, NVRAM_APP_RESERVED, ldi, 1, ldi->total_records))
    {
        nvram_ut_trace("[NVUT] normal_boot_important_lost_write(): reset test LID fail!\n\r");
        return KAL_FALSE;
    }
    folder_index = nvram_query_folder_index(ldi->category);
    nvram_util_make_lid_filename(ldi, nvramname, KAL_TRUE);
    nvram_query_file_name(folder_index, nvramname, filename);
    FS_Delete(filename);

    //reset SYS LID to default value
    if(!nvram_external_reset_data(NVRAM_EF_SW_VERNO_LID, SW_VERNO_RECORD_NUMBER, 1))
    {
        nvram_ut_trace("[NVUT] normal_boot_important_lost_write(): reset SYS LID fail!\n\r");
        return KAL_FALSE;
    }

    //call nvram_init()
    nvram_boot_trace = 0;
    nvram_init();
    if(!(nvram_boot_trace & BOOT_TRACE_SW_VERNO_COMPATIBLE))
    {
        nvram_ut_trace("[NVUT] normal_boot_important_lost_write(): enter version conflict fail!\n\r");
        return KAL_FALSE;
    }

    //lid access
    nvram_ut_assert_flag = 0;
    if(0 != nvram_lid_cmpt_operation(NVRAM_EF_NVRAM_TEST_4_LID,
                                     CMPT_OP_FLAG_GEN(CMPT_OP_FLAG_WRITE, 0, 0, 0),
                                     CMPT_OP_WAY_API, 1, NVRAM_EF_TEST_LID_RECORD_TOTAL))
    {
        nvram_ut_trace("[NVUT] normal_boot_important_lost_write(): write fail do not happen!\n\r");
        return KAL_FALSE;
    }
    if(0 != nvram_ut_assert_flag)
    {
        nvram_ut_trace("[NVUT] normal_boot_important_lost_write(): expect assert not happen!\n\r");
        return KAL_FALSE;
    }

    return KAL_TRUE;
    
}

kal_bool normal_boot_important_lost_reset(kal_uint32 flags, void *param)
{
    nvram_ltable_entry_struct *ldi = NULL;
    kal_wchar filename[NVRAM_MAX_PATH_LEN];
    nvram_folder_enum folder_index;
    NVRAM_FILE_NAME nvramname;

    //reset test LIDs to default settings
    if( !reset_test_lid_default_setting(NVRAM_EF_NVRAM_TEST_4_LID) )
    {
        nvram_ut_trace("[NVUT] normal_boot_important_lost_reset(): reset test LID settings fail!\n\r");
    }

    //this test will use LID verno "000" only
    if( !delete_special_version_lid(NVRAM_EF_NVRAM_TEST_4_LID, 0, 0) )
    {
        nvram_ut_trace("[NVUT] normal_boot_important_lost_reset(): delete test LID fail!\n\r");
    }
    
    //reset LID and then delete it
    nvram_util_get_data_item(&ldi, NVRAM_EF_NVRAM_TEST_4_LID);
    if(!nvram_reset_data_items(NVRAM_RESET_CERTAIN, NVRAM_APP_RESERVED, ldi, 1, ldi->total_records))
    {
        nvram_ut_trace("[NVUT] normal_boot_important_lost_reset(): reset test LID fail!\n\r");
        return KAL_FALSE;
    }
    folder_index = nvram_query_folder_index(ldi->category);
    nvram_util_make_lid_filename(ldi, nvramname, KAL_TRUE);
    nvram_query_file_name(folder_index, nvramname, filename);
    FS_Delete(filename);

    //reset SYS LID to default value
    if(!nvram_external_reset_data(NVRAM_EF_SW_VERNO_LID, SW_VERNO_RECORD_NUMBER, 1))
    {
        nvram_ut_trace("[NVUT] normal_boot_important_lost_reset(): reset SYS LID fail!\n\r");
        return KAL_FALSE;
    }

    //call nvram_init()
    nvram_boot_trace = 0;
    nvram_init();
    if(!(nvram_boot_trace & BOOT_TRACE_SW_VERNO_COMPATIBLE))
    {
        nvram_ut_trace("[NVUT] normal_boot_important_lost_reset(): enter version conflict fail!\n\r");
        return KAL_FALSE;
    }

    //lid access
    nvram_ut_assert_flag = 0;
    if(0 != nvram_lid_cmpt_operation(NVRAM_EF_NVRAM_TEST_4_LID,
                                     CMPT_OP_FLAG_GEN(CMPT_OP_FLAG_RESET, 0, 0, 0),
                                     CMPT_OP_WAY_API, 1, NVRAM_EF_TEST_LID_RECORD_TOTAL))
    {
        nvram_ut_trace("[NVUT] normal_boot_important_lost_reset(): nvram_lid_cmpt_operation() fail!\n\r");
        return KAL_FALSE;
    }
    if(nvram_ut_assert_flag)
    {
        nvram_ut_trace("[NVUT] normal_boot_important_lost_reset(): unexpect asser happen!\n\r");
        return KAL_FALSE;
    }

    return KAL_TRUE;
    
}

kal_bool normal_boot_importantl1_lost_read(kal_uint32 flags, void *param)
{
    nvram_ltable_entry_struct *ldi = NULL;
    kal_wchar filename[NVRAM_MAX_PATH_LEN];
    nvram_folder_enum folder_index;
    NVRAM_FILE_NAME nvramname;

    //reset test LIDs to default settings
    if( !reset_test_lid_default_setting(NVRAM_EF_NVRAM_TEST_5_LID) )
    {
        nvram_ut_trace("[NVUT] normal_boot_importantl1_lost_read(): reset test LID settings fail!\n\r");
    }

    //this test will use LID verno "000" only
    if( !delete_special_version_lid(NVRAM_EF_NVRAM_TEST_5_LID, 0, 0) )
    {
        nvram_ut_trace("[NVUT] normal_boot_importantl1_lost_read(): delete test LID fail!\n\r");
    }

    //reset LID and then delete it
    nvram_util_get_data_item(&ldi, NVRAM_EF_NVRAM_TEST_5_LID);
    if(!nvram_reset_data_items(NVRAM_RESET_CERTAIN, NVRAM_APP_RESERVED, ldi, 1, ldi->total_records))
    {
        nvram_ut_trace("[NVUT] normal_boot_importantl1_lost_read(): reset test LID fail!\n\r");
        return KAL_FALSE;
    }
    folder_index = nvram_query_folder_index(ldi->category);
    nvram_util_make_lid_filename(ldi, nvramname, KAL_TRUE);
    nvram_query_file_name(folder_index, nvramname, filename);
    FS_Delete(filename);

    //reset SYS LID to default value
    if(!nvram_external_reset_data(NVRAM_EF_SW_VERNO_LID, SW_VERNO_RECORD_NUMBER, 1))
    {
        nvram_ut_trace("[NVUT] normal_boot_importantl1_lost_read(): reset SYS LID fail!\n\r");
        return KAL_FALSE;
    }

    //call nvram_init()
    nvram_boot_trace = 0;
    nvram_init();
    if(!(nvram_boot_trace & BOOT_TRACE_SW_VERNO_COMPATIBLE))
    {
        nvram_ut_trace("[NVUT] normal_boot_importantl1_lost_read(): enter version conflict fail!\n\r");
        return KAL_FALSE;
    }

    //lid access
    nvram_ut_assert_flag = 0;
    if(0 != nvram_lid_cmpt_operation(NVRAM_EF_NVRAM_TEST_5_LID,
                                     CMPT_OP_FLAG_GEN(CMPT_OP_FLAG_READ, 0, 0, 0),
                                     CMPT_OP_WAY_API, 1, NVRAM_EF_TEST_LID_RECORD_TOTAL))
    {
        nvram_ut_trace("[NVUT] normal_boot_importantl1_lost_read(): nvram_lid_cmpt_operation() fail!\n\r");
        return KAL_FALSE;
    }
    if(nvram_ut_assert_flag)
    {
        nvram_ut_trace("[NVUT] normal_boot_importantl1_lost_read(): unexpect assert happen!\n\r");
        return KAL_FALSE;
    }

    return KAL_TRUE;
    
}

kal_bool normal_boot_importantl1_lost_write(kal_uint32 flags, void *param)
{
    nvram_ltable_entry_struct *ldi = NULL;
    kal_wchar filename[NVRAM_MAX_PATH_LEN];
    nvram_folder_enum folder_index;
    NVRAM_FILE_NAME nvramname;

    //reset test LIDs to default settings
    if( !reset_test_lid_default_setting(NVRAM_EF_NVRAM_TEST_5_LID) )
    {
        nvram_ut_trace("[NVUT] normal_boot_importantl1_lost_write(): reset test LID settings fail!\n\r");
    }

    //this test will use LID verno "000" only
    if( !delete_special_version_lid(NVRAM_EF_NVRAM_TEST_5_LID, 0, 0) )
    {
        nvram_ut_trace("[NVUT] normal_boot_importantl1_lost_write(): delete test LID fail!\n\r");
    }
    
    //reset LID and then delete it
    nvram_util_get_data_item(&ldi, NVRAM_EF_NVRAM_TEST_5_LID);
    if(!nvram_reset_data_items(NVRAM_RESET_CERTAIN, NVRAM_APP_RESERVED, ldi, 1, ldi->total_records))
    {
        nvram_ut_trace("[NVUT] normal_boot_importantl1_lost_write(): reset test LID fail!\n\r");
        return KAL_FALSE;
    }
    folder_index = nvram_query_folder_index(ldi->category);
    nvram_util_make_lid_filename(ldi, nvramname, KAL_TRUE);
    nvram_query_file_name(folder_index, nvramname, filename);
    FS_Delete(filename);

    //reset SYS LID to default value
    if(!nvram_external_reset_data(NVRAM_EF_SW_VERNO_LID, SW_VERNO_RECORD_NUMBER, 1))
    {
        nvram_ut_trace("[NVUT] normal_boot_importantl1_lost_write(): reset SYS LID fail!\n\r");
        return KAL_FALSE;
    }

    //call nvram_init()
    nvram_boot_trace = 0;
    nvram_init();
    if(!(nvram_boot_trace & BOOT_TRACE_SW_VERNO_COMPATIBLE))
    {
        nvram_ut_trace("[NVUT] normal_boot_importantl1_lost_write(): enter version conflict fail!\n\r");
        return KAL_FALSE;
    }

    //lid access
    nvram_ut_assert_flag = 0;
    if(0 != nvram_lid_cmpt_operation(NVRAM_EF_NVRAM_TEST_5_LID,
                                     CMPT_OP_FLAG_GEN(CMPT_OP_FLAG_WRITE, 0, 0, 0),
                                     CMPT_OP_WAY_API, 1, NVRAM_EF_TEST_LID_RECORD_TOTAL))
    {
        nvram_ut_trace("[NVUT] normal_boot_importantl1_lost_write(): nvram_lid_cmpt_operation() fail!\n\r");
        return KAL_FALSE;
    }
    if(nvram_ut_assert_flag)
    {
        nvram_ut_trace("[NVUT] normal_boot_importantl1_lost_write(): unexpect assert happen!\n\r");
        return KAL_FALSE;
    }

    return KAL_TRUE;
    
}

kal_bool normal_boot_importantl1_lost_reset(kal_uint32 flags, void *param)
{
    nvram_ltable_entry_struct *ldi = NULL;
    kal_wchar filename[NVRAM_MAX_PATH_LEN];
    nvram_folder_enum folder_index;
    NVRAM_FILE_NAME nvramname;

    //reset test LIDs to default settings
    if( !reset_test_lid_default_setting(NVRAM_EF_NVRAM_TEST_5_LID) )
    {
        nvram_ut_trace("[NVUT] normal_boot_importantl1_lost_reset(): reset test LID settings fail!\n\r");
    }

    //this test will use LID verno "000" only
    if( !delete_special_version_lid(NVRAM_EF_NVRAM_TEST_5_LID, 0, 0) )
    {
        nvram_ut_trace("[NVUT] normal_boot_importantl1_lost_reset(): delete test LID fail!\n\r");
    }
   
   //reset LID and then delete it
   nvram_util_get_data_item(&ldi, NVRAM_EF_NVRAM_TEST_5_LID);
   if(!nvram_reset_data_items(NVRAM_RESET_CERTAIN, NVRAM_APP_RESERVED, ldi, 1, ldi->total_records))
   {
       nvram_ut_trace("[NVUT] normal_boot_importantl1_lost_reset(): reset test LID fail!\n\r");
       return KAL_FALSE;
   }
   folder_index = nvram_query_folder_index(ldi->category);
   nvram_util_make_lid_filename(ldi, nvramname, KAL_TRUE);
   nvram_query_file_name(folder_index, nvramname, filename);
   FS_Delete(filename);

    //reset SYS LID to default value
    if(!nvram_external_reset_data(NVRAM_EF_SW_VERNO_LID, SW_VERNO_RECORD_NUMBER, 1))
    {
        nvram_ut_trace("[NVUT] normal_boot_importantl1_lost_reset(): reset SYS LID fail!\n\r");
        return KAL_FALSE;
    }

    //call nvram_init()
    nvram_boot_trace = 0;
    nvram_init();
    if(!(nvram_boot_trace & BOOT_TRACE_SW_VERNO_COMPATIBLE))
    {
        nvram_ut_trace("[NVUT] normal_boot_importantl1_lost_reset(): enter version conflict fail!\n\r");
        return KAL_FALSE;
    }

    //lid access
    nvram_ut_assert_flag = 0;
    if(0 != nvram_lid_cmpt_operation(NVRAM_EF_NVRAM_TEST_5_LID,
                                     CMPT_OP_FLAG_GEN(CMPT_OP_FLAG_RESET, 0, 0, 0),
                                     CMPT_OP_WAY_API, 1, NVRAM_EF_TEST_LID_RECORD_TOTAL))
    {
        nvram_ut_trace("[NVUT] normal_boot_importantl1_lost_reset(): nvram_lid_cmpt_operation() fail!\n\r");
        return KAL_FALSE;
    }
    if(nvram_ut_assert_flag)
    {
        nvram_ut_trace("[NVUT] normal_boot_importantl1_lost_reset(): unexpect assert happen!\n\r");
        return KAL_FALSE;
    }

    return KAL_TRUE;
    
}

kal_bool normal_boot_importantl4_lost_read(kal_uint32 flags, void *param)
{
    nvram_ltable_entry_struct *ldi = NULL;
    kal_wchar filename[NVRAM_MAX_PATH_LEN];
    nvram_folder_enum folder_index;
    NVRAM_FILE_NAME nvramname;

    //reset test LIDs to default settings
    if( !reset_test_lid_default_setting(NVRAM_EF_NVRAM_TEST_6_LID) )
    {
        nvram_ut_trace("[NVUT] normal_boot_importantl4_lost_read(): reset test LID settings fail!\n\r");
    }

    //this test will use LID verno "000" only
    if( !delete_special_version_lid(NVRAM_EF_NVRAM_TEST_6_LID, 0, 0) )
    {
        nvram_ut_trace("[NVUT] normal_boot_importantl4_lost_read(): delete test LID fail!\n\r");
    }
    
    //reset LID and then delete it
    nvram_util_get_data_item(&ldi, NVRAM_EF_NVRAM_TEST_6_LID);
    if(!nvram_reset_data_items(NVRAM_RESET_CERTAIN, NVRAM_APP_RESERVED, ldi, 1, ldi->total_records))
    {
        nvram_ut_trace("[NVUT] normal_boot_importantl4_lost_read(): reset test LID fail!\n\r");
        return KAL_FALSE;
    }
    folder_index = nvram_query_folder_index(ldi->category);
    nvram_util_make_lid_filename(ldi, nvramname, KAL_TRUE);
    nvram_query_file_name(folder_index, nvramname, filename);
    FS_Delete(filename);

    //reset SYS LID to default value
    if(!nvram_external_reset_data(NVRAM_EF_SW_VERNO_LID, SW_VERNO_RECORD_NUMBER, 1))
    {
        nvram_ut_trace("[NVUT] normal_boot_importantl4_lost_read(): reset SYS LID fail!\n\r");
        return KAL_FALSE;
    }

    //call nvram_init()
    nvram_boot_trace = 0;
    nvram_init();
    if(!(nvram_boot_trace & BOOT_TRACE_SW_VERNO_COMPATIBLE))
    {
        nvram_ut_trace("[NVUT] normal_boot_importantl4_lost_read(): enter version conflict fail!\n\r");
        return KAL_FALSE;
    }

    //lid access, without FATAL_ASSET will run reset flow
    nvram_ut_assert_flag = 0;
    if(0 
!= nvram_lid_cmpt_operation(NVRAM_EF_NVRAM_TEST_6_LID,
                                     CMPT_OP_FLAG_GEN(CMPT_OP_FLAG_READ, 0, 0, 0),
                                     CMPT_OP_WAY_API, 1, NVRAM_EF_TEST_LID_RECORD_TOTAL))
    {
        nvram_ut_trace("[NVUT] normal_boot_importantl4_lost_read(): read fail happen!\n\r");
        return KAL_FALSE;
    }
    if(0 != nvram_ut_assert_flag)
    {
        nvram_ut_trace("[NVUT] normal_boot_importantl4_lost_read(): unexpect assert happen!\n\r");
        return KAL_FALSE;
    }

    return KAL_TRUE;
    
}

kal_bool normal_boot_importantl4_lost_write(kal_uint32 flags, void *param)
{
    nvram_ltable_entry_struct *ldi = NULL;
    kal_wchar filename[NVRAM_MAX_PATH_LEN];
    nvram_folder_enum folder_index;
    NVRAM_FILE_NAME nvramname;

    //reset test LIDs to default settings
    if( !reset_test_lid_default_setting(NVRAM_EF_NVRAM_TEST_6_LID) )
    {
        nvram_ut_trace("[NVUT] normal_boot_importantl4_lost_write(): reset test LID settings fail!\n\r");
    }

    //this test will use LID verno "000" only
    if( !delete_special_version_lid(NVRAM_EF_NVRAM_TEST_6_LID, 0, 0) )
    {
        nvram_ut_trace("[NVUT] normal_boot_importantl4_lost_write(): delete test LID fail!\n\r");
    }

    //reset LID and then delete it
    nvram_util_get_data_item(&ldi, NVRAM_EF_NVRAM_TEST_6_LID);
    if(!nvram_reset_data_items(NVRAM_RESET_CERTAIN, NVRAM_APP_RESERVED, ldi, 1, ldi->total_records))
    {
        nvram_ut_trace("[NVUT] normal_boot_importantl4_lost_write(): reset test LID fail!\n\r");
        return KAL_FALSE;
    }
    folder_index = nvram_query_folder_index(ldi->category);
    nvram_util_make_lid_filename(ldi, nvramname, KAL_TRUE);
    nvram_query_file_name(folder_index, nvramname, filename);
    FS_Delete(filename);

    //reset SYS LID to default value
    if(!nvram_external_reset_data(NVRAM_EF_SW_VERNO_LID, SW_VERNO_RECORD_NUMBER, 1))
    {
        nvram_ut_trace("[NVUT] normal_boot_importantl4_lost_write(): reset SYS LID fail!\n\r");
        return KAL_FALSE;
    }

    //call nvram_init()
    nvram_boot_trace = 0;
    nvram_init();
    if(!(nvram_boot_trace & BOOT_TRACE_SW_VERNO_COMPATIBLE))
    {
        nvram_ut_trace("[NVUT] normal_boot_importantl4_lost_write(): enter version conflict fail!\n\r");
        return KAL_FALSE;
    }

    //lid access, without FATAL_ASSET will run reset flow
    nvram_ut_assert_flag = 0;
    if(0 != nvram_lid_cmpt_operation(NVRAM_EF_NVRAM_TEST_6_LID,
                                     CMPT_OP_FLAG_GEN(CMPT_OP_FLAG_WRITE, 0, 0, 0),
                                     CMPT_OP_WAY_API, 1, NVRAM_EF_TEST_LID_RECORD_TOTAL))
    {
        nvram_ut_trace("[NVUT] normal_boot_importantl4_lost_write(): write fail happen!\n\r");
        return KAL_FALSE;
    }
    if(0 != nvram_ut_assert_flag)
    {
        nvram_ut_trace("[NVUT] normal_boot_importantl4_lost_write(): unexpect assert happen!\n\r");
        return KAL_FALSE;
    }

    return KAL_TRUE;
    
}

kal_bool normal_boot_importantl4_lost_reset(kal_uint32 flags, void *param)
{
    nvram_ltable_entry_struct *ldi = NULL;
    kal_wchar filename[NVRAM_MAX_PATH_LEN];
    nvram_folder_enum folder_index;
    NVRAM_FILE_NAME nvramname;

    //reset test LIDs to default settings
    if( !reset_test_lid_default_setting(NVRAM_EF_NVRAM_TEST_6_LID) )
    {
        nvram_ut_trace("[NVUT] normal_boot_importantl4_lost_reset(): reset test LID settings fail!\n\r");
    }

    //this test will use LID verno "000" only
    if( !delete_special_version_lid(NVRAM_EF_NVRAM_TEST_6_LID, 0, 0) )
    {
        nvram_ut_trace("[NVUT] normal_boot_importantl4_lost_reset(): delete test LID fail!\n\r");
    }
    
    //reset LID and then delete it
    nvram_util_get_data_item(&ldi, NVRAM_EF_NVRAM_TEST_6_LID);
    if(!nvram_reset_data_items(NVRAM_RESET_CERTAIN, NVRAM_APP_RESERVED, ldi, 1, ldi->total_records))
    {
        nvram_ut_trace("[NVUT] normal_boot_importantl4_lost_reset(): reset test LID fail!\n\r");
        return KAL_FALSE;
    }
    folder_index = nvram_query_folder_index(ldi->category);
    nvram_util_make_lid_filename(ldi, nvramname, KAL_TRUE);
    nvram_query_file_name(folder_index, nvramname, filename);
    FS_Delete(filename);

    //reset SYS LID to default value
    if(!nvram_external_reset_data(NVRAM_EF_SW_VERNO_LID, SW_VERNO_RECORD_NUMBER, 1))
    {
        nvram_ut_trace("[NVUT] normal_boot_importantl4_lost_reset(): reset SYS LID fail!\n\r");
        return KAL_FALSE;
    }

    //call nvram_init()
    nvram_boot_trace = 0;
    nvram_init();
    if(!(nvram_boot_trace & BOOT_TRACE_SW_VERNO_COMPATIBLE))
    {
        nvram_ut_trace("[NVUT] normal_boot_importantl4_lost_reset(): enter version conflict fail!\n\r");
        return KAL_FALSE;
    }

    //lid access
    nvram_ut_assert_flag = 0;
    if(0 != nvram_lid_cmpt_operation(NVRAM_EF_NVRAM_TEST_6_LID,
                                     CMPT_OP_FLAG_GEN(CMPT_OP_FLAG_RESET, 0, 0, 0),
                                     CMPT_OP_WAY_API, 1, NVRAM_EF_TEST_LID_RECORD_TOTAL))
    {
        nvram_ut_trace("[NVUT] normal_boot_importantl4_lost_reset(): nvram_lid_cmpt_operation() fail!\n\r");
        return KAL_FALSE;
    }
    if(nvram_ut_assert_flag)
    {
        nvram_ut_trace("[NVUT] normal_boot_importantl4_lost_reset(): unexpect asser happen!\n\r");
        return KAL_FALSE;
    }

    return KAL_TRUE;
    
}

kal_bool normal_boot_user_altered_read(kal_uint32 flags, void *param)
{
    nvram_ltable_entry_struct *ldi = NULL;
    kal_wchar filename[NVRAM_MAX_PATH_LEN];
    nvram_folder_enum folder_index;
    NVRAM_FILE_NAME nvramname;
    FS_HANDLE hFile = 0;
    kal_uint32 len;
    
    //reset test LIDs to default settings
    if( !reset_test_lid_default_setting(NVRAM_EF_NVRAM_TEST_1_LID) )
    {
        nvram_ut_trace("[NVUT] normal_boot_user_altered_read(): reset test LID settings fail!\n\r");
    }

    //this test will use LID verno "000" only
    if( !delete_special_version_lid(NVRAM_EF_NVRAM_TEST_1_LID, 0, 0) )
    {
        nvram_ut_trace("[NVUT] normal_boot_user_altered_read(): delete test LID fail!\n\r");
    }

    //reset(create) test LID
    nvram_util_get_data_item(&ldi, NVRAM_EF_NVRAM_TEST_1_LID);
    if( !nvram_reset_data_items(NVRAM_RESET_CERTAIN, NVRAM_APP_RESERVED, ldi, 1, ldi->total_records) )
    {
        nvram_ut_trace("[NVUT] normal_boot_user_altered_read(): reset test LID fail!\n\r");
        return KAL_FALSE;
    }

    //alter test LID
    folder_index = nvram_query_folder_index(ldi->category);
    nvram_util_make_lid_filename(ldi, nvramname, KAL_TRUE);
    nvram_query_file_name(folder_index, nvramname, filename);
    hFile = FS_Open((const kal_wchar*)filename, FS_READ_WRITE | FS_OPEN_NO_DIR | FS_OPEN_SHARED);
    if (hFile == FS_FILE_NOT_FOUND)
    {
        nvram_ut_trace("[NVUT] normal_boot_user_altered_read(): can not find test LID!\n\r");
        return KAL_FALSE;
    }
    else if (hFile <= FS_NO_ERROR)
    {
        nvram_ut_trace("[NVUT] normal_boot_user_altered_read(): open test LID fail!\n\r");
        return KAL_FALSE;
    }

    if(FS_NO_ERROR > FS_Seek(hFile, NVRAM_LDI_HEADER_SIZE, FS_FILE_BEGIN)) //skip LID header
    {
        nvram_ut_trace("[NVUT] normal_boot_user_altered_read(): first FS_Seek test LID fail!\n\r");
        return KAL_FALSE;
    }
    
    if(FS_NO_ERROR > FS_Read(hFile, data_buffer, ldi->size, &len))
    {
        nvram_ut_trace("[NVUT] normal_boot_user_altered_read(): read test LID fail!\n\r");
        return KAL_FALSE;
    }

    data_buffer[0] += 1;
    data_buffer[1] += 1;
    data_buffer[2] += 1;
    if(FS_NO_ERROR > FS_Seek(hFile, NVRAM_LDI_HEADER_SIZE, FS_FILE_BEGIN)) //skip LID header
    {
        nvram_ut_trace("[NVUT] normal_boot_user_altered_read(): FS_Seek test LID fail!\n\r");
        return KAL_FALSE;
    }

    if(FS_NO_ERROR > FS_Write(hFile, data_buffer, ldi->size, &len))
    {
        nvram_ut_trace("[NVUT] normal_boot_user_altered_read(): write back test LID fail!\n\r");
        return KAL_FALSE;
    }

    if(hFile > FS_NO_ERROR)
    {
        FS_Close(hFile);
    }

    //reset SYS LID to default value
    if(!nvram_external_reset_data(NVRAM_EF_SW_VERNO_LID, SW_VERNO_RECORD_NUMBER, 1))
    {
        nvram_ut_trace("[NVUT] normal_boot_user_altered_read(): reset SYS LID fail!\n\r");
        return KAL_FALSE;
    }

    //call nvram_init()
    nvram_boot_trace = 0;
    nvram_init();
    if(!(nvram_boot_trace & BOOT_TRACE_SW_VERNO_COMPATIBLE))
    {
        nvram_ut_trace("[NVUT] normal_boot_user_altered_read(): enter version conflict fail!\n\r");
        return KAL_FALSE;
    }

    //lid access
    nvram_ut_assert_flag = 0;
    if(0 != nvram_lid_cmpt_operation(NVRAM_EF_NVRAM_TEST_1_LID,
                                     CMPT_OP_FLAG_GEN(CMPT_OP_FLAG_READBACK, 0, 0, 0),
                                     CMPT_OP_WAY_API, 1, NVRAM_EF_TEST_LID_RECORD_TOTAL))
    {
        nvram_ut_trace("[NVUT] normal_boot_user_altered_read(): unexpect read fail happen!\n\r");
        return KAL_FALSE;
    }
    if(nvram_ut_assert_flag)
    {
        nvram_ut_trace("[NVUT] normal_boot_user_altered_read(): unexpect assert happen!\n\r");
        return KAL_FALSE;
    }

    return KAL_TRUE;
    
}

kal_bool normal_boot_user_altered_write(kal_uint32 flags, void *param)
{
    nvram_ltable_entry_struct *ldi = NULL;
    kal_wchar filename[NVRAM_MAX_PATH_LEN];
    nvram_folder_enum folder_index;
    NVRAM_FILE_NAME nvramname;
    FS_HANDLE hFile = 0;
    kal_uint32 len;
    
    //reset test LIDs to default settings
    if( !reset_test_lid_default_setting(NVRAM_EF_NVRAM_TEST_1_LID) )
    {
        nvram_ut_trace("[NVUT] normal_boot_user_altered_write(): reset test LID settings fail!\n\r");
    }

    //this test will use LID verno "000" only
    if( !delete_special_version_lid(NVRAM_EF_NVRAM_TEST_1_LID, 0, 0) )
    {
        nvram_ut_trace("[NVUT] normal_boot_user_altered_write(): delete test LID fail!\n\r");
    }

    //reset(create) test LID
    nvram_util_get_data_item(&ldi, NVRAM_EF_NVRAM_TEST_1_LID);
    if( !nvram_reset_data_items(NVRAM_RESET_CERTAIN, NVRAM_APP_RESERVED, ldi, 1, ldi->total_records) )
    {
        nvram_ut_trace("[NVUT] normal_boot_user_altered_write(): reset test LID fail!\n\r");
        return KAL_FALSE;
    }

    //alter test LID
    folder_index = nvram_query_folder_index(ldi->category);
    nvram_util_make_lid_filename(ldi, nvramname, KAL_TRUE);
    nvram_query_file_name(folder_index, nvramname, filename);
    hFile = FS_Open((const kal_wchar*)filename, FS_READ_WRITE | FS_OPEN_NO_DIR | FS_OPEN_SHARED);
    if (hFile == FS_FILE_NOT_FOUND)
    {
        nvram_ut_trace("[NVUT] normal_boot_user_altered_write(): can not find test LID!\n\r");
        return KAL_FALSE;
    }
    else if (hFile <= FS_NO_ERROR)
    {
        nvram_ut_trace("[NVUT] normal_boot_user_altered_write(): open test LID fail!\n\r");
        return KAL_FALSE;
    }

    if(FS_NO_ERROR > FS_Seek(hFile, NVRAM_LDI_HEADER_SIZE, FS_FILE_BEGIN)) //skip LID header
    {
        nvram_ut_trace("[NVUT] normal_boot_user_altered_write(): first FS_Seek test LID fail!\n\r");
        return KAL_FALSE;
    }

    if(FS_NO_ERROR > FS_Read(hFile, data_buffer, ldi->size, &len))
    {
        nvram_ut_trace("[NVUT] normal_boot_user_altered_write(): read test LID fail!\n\r");
        return KAL_FALSE;
    }

    data_buffer[0] += 1;
    data_buffer[1] += 1;
    data_buffer[2] += 1;
    if(FS_NO_ERROR > FS_Seek(hFile, NVRAM_LDI_HEADER_SIZE, FS_FILE_BEGIN)) //skip LID header
    {
        nvram_ut_trace("[NVUT] normal_boot_user_altered_write(): FS_Seek test LID fail!\n\r");
        return KAL_FALSE;
    }

    if(FS_NO_ERROR > FS_Write(hFile, data_buffer, ldi->size, &len))
    {
        nvram_ut_trace("[NVUT] normal_boot_user_altered_write(): write back test LID fail!\n\r");
        return KAL_FALSE;
    }
    if(hFile > FS_NO_ERROR)
    {
        FS_Close(hFile);
    }
    
    //reset SYS LID to default value
    if(!nvram_external_reset_data(NVRAM_EF_SW_VERNO_LID, SW_VERNO_RECORD_NUMBER, 1))
    {
        nvram_ut_trace("[NVUT] normal_boot_user_altered_write(): reset SYS LID fail!\n\r");
        return KAL_FALSE;
    }

    //call nvram_init()
    nvram_boot_trace = 0;
    nvram_init();
    if(!(nvram_boot_trace & BOOT_TRACE_SW_VERNO_COMPATIBLE))
    {
        nvram_ut_trace("[NVUT] normal_boot_user_altered_write(): enter version conflict fail!\n\r");
        return KAL_FALSE;
    }

    //lid access
    nvram_ut_assert_flag = 0;
    if(0 != nvram_lid_cmpt_operation(NVRAM_EF_NVRAM_TEST_1_LID,
                                     CMPT_OP_FLAG_GEN(CMPT_OP_FLAG_WRITE, 0, 0, 0),
                                     CMPT_OP_WAY_API, 1, NVRAM_EF_TEST_LID_RECORD_TOTAL))
    {
        nvram_ut_trace("[NVUT] normal_boot_user_altered_write(): nvram_lid_cmpt_operation() fail!\n\r");
        return KAL_FALSE;
    }
    if(nvram_ut_assert_flag)
    {
        nvram_ut_trace("[NVUT] normal_boot_user_altered_write(): unexpect assert happen!\n\r");
        return KAL_FALSE;
    }

    return KAL_TRUE;
    
}

kal_bool normal_boot_user_altered_reset(kal_uint32 flags, void *param)
{
    nvram_ltable_entry_struct *ldi = NULL;
    kal_wchar filename[NVRAM_MAX_PATH_LEN];
    nvram_folder_enum folder_index;
    NVRAM_FILE_NAME nvramname;
    FS_HANDLE hFile = 0;
    kal_uint32 len;
    
    //reset test LIDs to default settings
    if( !reset_test_lid_default_setting(NVRAM_EF_NVRAM_TEST_1_LID) )
    {
        nvram_ut_trace("[NVUT] normal_boot_user_altered_reset(): reset test LID settings fail!\n\r");
    }

    //this test will use LID verno "000" only
    if( !delete_special_version_lid(NVRAM_EF_NVRAM_TEST_1_LID, 0, 0) )
    {
        nvram_ut_trace("[NVUT] normal_boot_user_altered_reset(): delete test LID fail!\n\r");
    }

    //reset(create) test LID
    nvram_util_get_data_item(&ldi, NVRAM_EF_NVRAM_TEST_1_LID);
    if( !nvram_reset_data_items(NVRAM_RESET_CERTAIN, NVRAM_APP_RESERVED, ldi, 1, ldi->total_records) )
    {
        nvram_ut_trace("[NVUT] normal_boot_user_altered_reset(): reset test LID fail!\n\r");
        return KAL_FALSE;
    }

    //alter test LID
    folder_index = nvram_query_folder_index(ldi->category);
    nvram_util_make_lid_filename(ldi, nvramname, KAL_TRUE);
    nvram_query_file_name(folder_index, nvramname, filename);
    hFile = FS_Open((const kal_wchar*)filename, FS_READ_WRITE | FS_OPEN_NO_DIR | FS_OPEN_SHARED);
    if (hFile == FS_FILE_NOT_FOUND)
    {
        nvram_ut_trace("[NVUT] normal_boot_user_altered_reset(): can not find test LID!\n\r");
        return KAL_FALSE;
    }
    else if (hFile <= FS_NO_ERROR)
    {
        nvram_ut_trace("[NVUT] normal_boot_user_altered_reset(): open test LID fail!\n\r");
        return KAL_FALSE;
    }

    if(FS_NO_ERROR > FS_Seek(hFile, NVRAM_LDI_HEADER_SIZE, FS_FILE_BEGIN)) //skip LID header
    {
        nvram_ut_trace("[NVUT] normal_boot_user_altered_reset(): first FS_Seek test LID fail!\n\r");
        return KAL_FALSE;
    }   
    
    if(FS_NO_ERROR > FS_Read(hFile, data_buffer, ldi->size, &len))
    {
        nvram_ut_trace("[NVUT] normal_boot_user_altered_reset(): read test LID fail!\n\r");
        return KAL_FALSE;
    }

    data_buffer[0] += 1;
    data_buffer[1] += 1;
    data_buffer[2] += 1;
    if(FS_NO_ERROR > FS_Seek(hFile, NVRAM_LDI_HEADER_SIZE, FS_FILE_BEGIN)) //skip LID header
    {
        nvram_ut_trace("[NVUT] normal_boot_user_altered_reset(): FS_Seek test LID fail!\n\r");
        return KAL_FALSE;
    }

    if(FS_NO_ERROR > FS_Write(hFile, data_buffer, ldi->size, &len))
    {
        nvram_ut_trace("[NVUT] normal_boot_user_altered_reset(): write back test LID fail!\n\r");
        return KAL_FALSE;
    }

    if(hFile > FS_NO_ERROR)
    {
        FS_Close(hFile);
    }

    //reset SYS LID to default value
    if(!nvram_external_reset_data(NVRAM_EF_SW_VERNO_LID, SW_VERNO_RECORD_NUMBER, 1))
    {
        nvram_ut_trace("[NVUT] normal_boot_user_altered_reset(): reset SYS LID fail!\n\r");
        return KAL_FALSE;
    }

    //call nvram_init()
    nvram_boot_trace = 0;
    nvram_init();
    if(!(nvram_boot_trace & BOOT_TRACE_SW_VERNO_COMPATIBLE))
    {
        nvram_ut_trace("[NVUT] normal_boot_user_altered_reset(): enter version conflict fail!\n\r");
        return KAL_FALSE;
    }

    //lid access
    nvram_ut_assert_flag = 0;
    if(0 != nvram_lid_cmpt_operation(NVRAM_EF_NVRAM_TEST_1_LID,
                                     CMPT_OP_FLAG_GEN(CMPT_OP_FLAG_RESET, 0, 0, 0),
                                     CMPT_OP_WAY_API, 1, NVRAM_EF_TEST_LID_RECORD_TOTAL))
    {
        nvram_ut_trace("[NVUT] normal_boot_user_altered_reset(): nvram_lid_cmpt_operation() fail!\n\r");
        return KAL_FALSE;
    }
    if(nvram_ut_assert_flag)
    {
        nvram_ut_trace("[NVUT] normal_boot_user_altered_reset(): unexpect assert happen!\n\r");
        return KAL_FALSE;
    }

    return KAL_TRUE;
    
}

kal_bool normal_boot_internal_altered_read(kal_uint32 flags, void *param)
{
    nvram_ltable_entry_struct *ldi = NULL;
    kal_wchar filename[NVRAM_MAX_PATH_LEN];
    nvram_folder_enum folder_index;
    NVRAM_FILE_NAME nvramname;
    FS_HANDLE hFile = 0;
    kal_uint32 len;
    
    //reset test LIDs to default settings
    if( !reset_test_lid_default_setting(NVRAM_EF_NVRAM_TEST_2_LID) )
    {
        nvram_ut_trace("[NVUT] normal_boot_internal_altered_read(): reset test LID settings fail!\n\r");
    }

    //this test will use LID verno "000" only
    if( !delete_special_version_lid(NVRAM_EF_NVRAM_TEST_2_LID, 0, 0) )
    {
        nvram_ut_trace("[NVUT] normal_boot_internal_altered_read(): delete test LID fail!\n\r");
    }

    //reset(create) test LID
    nvram_util_get_data_item(&ldi, NVRAM_EF_NVRAM_TEST_2_LID);
    if( !nvram_reset_data_items(NVRAM_RESET_CERTAIN, NVRAM_APP_RESERVED, ldi, 1, ldi->total_records) )
    {
        nvram_ut_trace("[NVUT] normal_boot_internal_altered_read(): reset test LID fail!\n\r");
        return KAL_FALSE;
    }

    //alter test LID
    folder_index = nvram_query_folder_index(ldi->category);
    nvram_util_make_lid_filename(ldi, nvramname, KAL_TRUE);
    nvram_query_file_name(folder_index, nvramname, filename);
    hFile = FS_Open((const kal_wchar*)filename, FS_READ_WRITE | FS_OPEN_NO_DIR | FS_OPEN_SHARED);
    if (hFile == FS_FILE_NOT_FOUND)
    {
        nvram_ut_trace("[NVUT] normal_boot_internal_altered_read(): can not find test LID!\n\r");
        return KAL_FALSE;
    }
    else if (hFile <= FS_NO_ERROR)
    {
        nvram_ut_trace("[NVUT] normal_boot_internal_altered_read(): open test LID fail!\n\r");
        return KAL_FALSE;
    }

    if(FS_NO_ERROR > FS_Seek(hFile, NVRAM_LDI_HEADER_SIZE, FS_FILE_BEGIN)) //skip LID header
    {
        nvram_ut_trace("[NVUT] normal_boot_internal_altered_read(): first FS_Seek test LID fail!\n\r");
        return KAL_FALSE;
    }
    
    if(FS_NO_ERROR > FS_Read(hFile, data_buffer, ldi->size, &len))
    {
        nvram_ut_trace("[NVUT] normal_boot_internal_altered_read(): read test LID fail!\n\r");
        return KAL_FALSE;
    }

    data_buffer[0] += 1;
    data_buffer[1] += 1;
    data_buffer[2] += 1;
    if(FS_NO_ERROR > FS_Seek(hFile, NVRAM_LDI_HEADER_SIZE, FS_FILE_BEGIN)) //skip LID header
    {
        nvram_ut_trace("[NVUT] normal_boot_internal_altered_read(): FS_Seek test LID fail!\n\r");
        return KAL_FALSE;
    }

    if(FS_NO_ERROR > FS_Write(hFile, data_buffer, ldi->size, &len))
    {
        nvram_ut_trace("[NVUT] normal_boot_internal_altered_read(): write back test LID fail!\n\r");
        return KAL_FALSE;
    }
    
    if(hFile > FS_NO_ERROR)
    {
        FS_Close(hFile);
    }

    //reset SYS LID to default value
    if(!nvram_external_reset_data(NVRAM_EF_SW_VERNO_LID, SW_VERNO_RECORD_NUMBER, 1))
    {
        nvram_ut_trace("[NVUT] normal_boot_internal_altered_read(): reset SYS LID fail!\n\r");
        return KAL_FALSE;
    }

    //call nvram_init()
    nvram_boot_trace = 0;
    nvram_init();
    if(!(nvram_boot_trace & BOOT_TRACE_SW_VERNO_COMPATIBLE))
    {
        nvram_ut_trace("[NVUT] normal_boot_internal_altered_read(): enter version conflict fail!\n\r");
        return KAL_FALSE;
    }

    //lid access
    nvram_ut_assert_flag = 0;
        //internal LID size change expect read fail, internal will not run reset flow in nvram_read_data_item()
    if(0 == nvram_lid_cmpt_operation(NVRAM_EF_NVRAM_TEST_2_LID,
                                     CMPT_OP_FLAG_GEN(CMPT_OP_FLAG_READ, 0, 0, 0),
                                     CMPT_OP_WAY_API, 1, NVRAM_EF_TEST_LID_RECORD_TOTAL))
    {
        nvram_ut_trace("[NVUT] normal_boot_internal_altered_read(): expect read fail not happen!\n\r");
        return KAL_FALSE;
    }
    if(nvram_ut_assert_flag)
    {
        nvram_ut_trace("[NVUT] normal_boot_internal_altered_read(): unexpect assert happen!\n\r");
        return KAL_FALSE;
    }

    return KAL_TRUE;
    
}

kal_bool normal_boot_internal_altered_write(kal_uint32 flags, void *param)
{
    nvram_ltable_entry_struct *ldi = NULL;
    kal_wchar filename[NVRAM_MAX_PATH_LEN];
    nvram_folder_enum folder_index;
    NVRAM_FILE_NAME nvramname;
    FS_HANDLE hFile = 0;
    kal_uint32 len;
    
    //reset test LIDs to default settings
    if( !reset_test_lid_default_setting(NVRAM_EF_NVRAM_TEST_2_LID) )
    {
        nvram_ut_trace("[NVUT] normal_boot_internal_altered_write(): reset test LID settings fail!\n\r");
    }

    //this test will use LID verno "000" only
    if( !delete_special_version_lid(NVRAM_EF_NVRAM_TEST_2_LID, 0, 0) )
    {
        nvram_ut_trace("[NVUT] normal_boot_internal_altered_write(): delete test LID fail!\n\r");
    }

    //reset(create) test LID
    nvram_util_get_data_item(&ldi, NVRAM_EF_NVRAM_TEST_2_LID);
    if( !nvram_reset_data_items(NVRAM_RESET_CERTAIN, NVRAM_APP_RESERVED, ldi, 1, ldi->total_records) )
    {
        nvram_ut_trace("[NVUT] normal_boot_internal_altered_write(): reset test LID fail!\n\r");
        return KAL_FALSE;
    }

    //alter test LID
    folder_index = nvram_query_folder_index(ldi->category);
    nvram_util_make_lid_filename(ldi, nvramname, KAL_TRUE);
    nvram_query_file_name(folder_index, nvramname, filename);
    hFile = FS_Open((const kal_wchar*)filename, FS_READ_WRITE | FS_OPEN_NO_DIR | FS_OPEN_SHARED);
    if (hFile == FS_FILE_NOT_FOUND)
    {
        nvram_ut_trace("[NVUT] normal_boot_internal_altered_write(): can not find test LID!\n\r");
        return KAL_FALSE;
    }
    else if (hFile <= FS_NO_ERROR)
    {
        nvram_ut_trace("[NVUT] normal_boot_internal_altered_write(): open test LID fail!\n\r");
        return KAL_FALSE;
    }

    if(FS_NO_ERROR > FS_Seek(hFile, NVRAM_LDI_HEADER_SIZE, FS_FILE_BEGIN)) //skip LID header
    {
        nvram_ut_trace("[NVUT] normal_boot_internal_altered_write(): first FS_Seek test LID fail!\n\r");
        return KAL_FALSE;
    }

    if(FS_NO_ERROR > FS_Read(hFile, data_buffer, ldi->size, &len))
    {
        nvram_ut_trace("[NVUT] normal_boot_internal_altered_write(): read test LID fail!\n\r");
        return KAL_FALSE;
    }

    data_buffer[0] += 1;
    data_buffer[1] += 1;
    data_buffer[2] += 1;
    if(FS_NO_ERROR > FS_Seek(hFile, NVRAM_LDI_HEADER_SIZE, FS_FILE_BEGIN)) //skip LID header
    {
        nvram_ut_trace("[NVUT] normal_boot_internal_altered_write(): FS_Seek test LID fail!\n\r");
        return KAL_FALSE;
    }

    if(FS_NO_ERROR > FS_Write(hFile, data_buffer, ldi->size, &len))
    {
        nvram_ut_trace("[NVUT] normal_boot_internal_altered_write(): write back test LID fail!\n\r");
        return KAL_FALSE;
    }
    
    if(hFile > FS_NO_ERROR)
    {
        FS_Close(hFile);
    }

    //reset SYS LID to default value
    if(!nvram_external_reset_data(NVRAM_EF_SW_VERNO_LID, SW_VERNO_RECORD_NUMBER, 1))
    {
        nvram_ut_trace("[NVUT] normal_boot_internal_altered_write(): reset SYS LID fail!\n\r");
        return KAL_FALSE;
    }

    //call nvram_init()
    nvram_boot_trace = 0;
    nvram_init();
    if(!(nvram_boot_trace & BOOT_TRACE_SW_VERNO_COMPATIBLE))
    {
        nvram_ut_trace("[NVUT] normal_boot_internal_altered_write(): enter version conflict fail!\n\r");
        return KAL_FALSE;
    }

    //lid access
    nvram_ut_assert_flag = 0;
    if(0 != nvram_lid_cmpt_operation(NVRAM_EF_NVRAM_TEST_2_LID,
                                     CMPT_OP_FLAG_GEN(CMPT_OP_FLAG_WRITE, 0, 0, 0),
                                     CMPT_OP_WAY_API, 1, NVRAM_EF_TEST_LID_RECORD_TOTAL))
    {
        nvram_ut_trace("[NVUT] normal_boot_internal_altered_write(): write test LID fail!\n\r");
        return KAL_FALSE;
    }
    if(nvram_ut_assert_flag)
    {
        nvram_ut_trace("[NVUT] normal_boot_internal_altered_write(): unexpect assert happen!\n\r");
        return KAL_FALSE;
    }

    return KAL_TRUE;
    
}

kal_bool normal_boot_internal_altered_reset(kal_uint32 flags, void *param)
{
    nvram_ltable_entry_struct *ldi = NULL;
    kal_wchar filename[NVRAM_MAX_PATH_LEN];
    nvram_folder_enum folder_index;
    NVRAM_FILE_NAME nvramname;
    FS_HANDLE hFile = 0;
    kal_uint32 len;
    
    //reset test LIDs to default settings
    if( !reset_test_lid_default_setting(NVRAM_EF_NVRAM_TEST_2_LID) )
    {
        nvram_ut_trace("[NVUT] normal_boot_internal_altered_reset(): reset test LID settings fail!\n\r");
    }

    //this test will use LID verno "000" only
    if( !delete_special_version_lid(NVRAM_EF_NVRAM_TEST_2_LID, 0, 0) )
    {
        nvram_ut_trace("[NVUT] normal_boot_internal_altered_reset(): delete test LID fail!\n\r");
    }

    //reset(create) test LID
    nvram_util_get_data_item(&ldi, NVRAM_EF_NVRAM_TEST_2_LID);
    if( !nvram_reset_data_items(NVRAM_RESET_CERTAIN, NVRAM_APP_RESERVED, ldi, 1, ldi->total_records) )
    {
        nvram_ut_trace("[NVUT] normal_boot_internal_altered_reset(): reset test LID fail!\n\r");
        return KAL_FALSE;
    }

    //alter test LID
    folder_index = nvram_query_folder_index(ldi->category);
    nvram_util_make_lid_filename(ldi, nvramname, KAL_TRUE);
    nvram_query_file_name(folder_index, nvramname, filename);
    hFile = FS_Open((const kal_wchar*)filename, FS_READ_WRITE | FS_OPEN_NO_DIR | FS_OPEN_SHARED);
    if (hFile == FS_FILE_NOT_FOUND)
    {
        nvram_ut_trace("[NVUT] normal_boot_internal_altered_reset(): can not find test LID!\n\r");
        return KAL_FALSE;
    }
    else if (hFile <= FS_NO_ERROR)
    {
        nvram_ut_trace("[NVUT] normal_boot_internal_altered_reset(): open test LID fail!\n\r");
        return KAL_FALSE;
    }

    if(FS_NO_ERROR > FS_Seek(hFile, NVRAM_LDI_HEADER_SIZE, FS_FILE_BEGIN)) //skip LID header
    {
        nvram_ut_trace("[NVUT] normal_boot_internal_altered_reset(): first FS_Seek test LID fail!\n\r");
        return KAL_FALSE;
    }
    
    if(FS_NO_ERROR > FS_Read(hFile, data_buffer, ldi->size, &len))
    {
        nvram_ut_trace("[NVUT] normal_boot_internal_altered_reset(): read test LID fail!\n\r");
        return KAL_FALSE;
    }

    data_buffer[0] += 1;
    data_buffer[1] += 1;
    data_buffer[2] += 1;
    if(FS_NO_ERROR > FS_Seek(hFile, NVRAM_LDI_HEADER_SIZE, FS_FILE_BEGIN)) //skip LID header
    {
        nvram_ut_trace("[NVUT] normal_boot_internal_altered_reset(): FS_Seek test LID fail!\n\r");
        return KAL_FALSE;
    }

    if(FS_NO_ERROR > FS_Write(hFile, data_buffer, ldi->size, &len))
    {
        nvram_ut_trace("[NVUT] normal_boot_internal_altered_reset(): write back test LID fail!\n\r");
        return KAL_FALSE;
    }
    
    if(hFile > FS_NO_ERROR)
    {
        FS_Close(hFile);
    }

    //reset SYS LID to default value
    if(!nvram_external_reset_data(NVRAM_EF_SW_VERNO_LID, SW_VERNO_RECORD_NUMBER, 1))
    {
        nvram_ut_trace("[NVUT] normal_boot_internal_altered_reset(): reset SYS LID fail!\n\r");
        return KAL_FALSE;
    }

    //call nvram_init()
    nvram_boot_trace = 0;
    nvram_init();
    if(!(nvram_boot_trace & BOOT_TRACE_SW_VERNO_COMPATIBLE))
    {
        nvram_ut_trace("[NVUT] normal_boot_internal_altered_reset(): enter version conflict fail!\n\r");
        return KAL_FALSE;
    }

    //lid access
    nvram_ut_assert_flag = 0;
    if(0 != nvram_lid_cmpt_operation(NVRAM_EF_NVRAM_TEST_2_LID,
                                     CMPT_OP_FLAG_GEN(CMPT_OP_FLAG_RESET, 0, 0, 0),
                                     CMPT_OP_WAY_API, 1, NVRAM_EF_TEST_LID_RECORD_TOTAL))
    {
        nvram_ut_trace("[NVUT] normal_boot_internal_altered_reset(): reset test LID fail!\n\r");
        return KAL_FALSE;
    }
    if(nvram_ut_assert_flag)
    {
        nvram_ut_trace("[NVUT] normal_boot_internal_altered_reset(): unexpect assert happen!\n\r");
        return KAL_FALSE;
    }

    return KAL_TRUE;
    
}

kal_bool normal_boot_calibrat_altered_read(kal_uint32 flags, void *param)
{
    nvram_ltable_entry_struct *ldi = NULL;
    kal_wchar filename[NVRAM_MAX_PATH_LEN];
    nvram_folder_enum folder_index;
    NVRAM_FILE_NAME nvramname;
    FS_HANDLE hFile = 0;
    kal_uint32 len;
    kal_uint8 i;
    
    //reset test LIDs to default settings
    if( !reset_test_lid_default_setting(NVRAM_EF_NVRAM_TEST_3_LID) )
    {
        nvram_ut_trace("[NVUT] normal_boot_calibrat_altered_read(): reset test LID settings fail!\n\r");
    }

    //this test will use LID verno "000" only
    if( !delete_special_version_lid(NVRAM_EF_NVRAM_TEST_3_LID, 0, 0) )
    {
        nvram_ut_trace("[NVUT] normal_boot_calibrat_altered_read(): delete test LID fail!\n\r");
    }

    //reset(create) test LID
    nvram_util_get_data_item(&ldi, NVRAM_EF_NVRAM_TEST_3_LID);
    if( !nvram_reset_data_items(NVRAM_RESET_CERTAIN, NVRAM_APP_RESERVED, ldi, 1, ldi->total_records) )
    {
        nvram_ut_trace("[NVUT] normal_boot_calibrat_altered_read(): reset test LID fail!\n\r");
        return KAL_FALSE;
    }

    //alter test LID
    folder_index = nvram_query_folder_index(ldi->category);
    nvram_util_make_lid_filename(ldi, nvramname, KAL_TRUE);
    nvram_query_file_name(folder_index, nvramname, filename);
    hFile = FS_Open((const kal_wchar*)filename, FS_READ_WRITE | FS_OPEN_NO_DIR | FS_OPEN_SHARED);
    if (hFile == FS_FILE_NOT_FOUND)
    {
        nvram_ut_trace("[NVUT] normal_boot_calibrat_altered_read(): can not find test LID!\n\r");
        return KAL_FALSE;
    }
    else if (hFile <= FS_NO_ERROR)
    {
        nvram_ut_trace("[NVUT] normal_boot_calibrat_altered_read(): open test LID fail!\n\r");
        return KAL_FALSE;
    }

    if(FS_NO_ERROR > FS_Seek(hFile, NVRAM_LDI_HEADER_SIZE, FS_FILE_BEGIN)) //skip LID header
    {
        nvram_ut_trace("[NVUT] normal_boot_calibrat_altered_read(): first FS_Seek test LID fail!\n\r");
        return KAL_FALSE;
    }

    if(FS_NO_ERROR > FS_Read(hFile, data_buffer, ldi->size, &len))
    {
        nvram_ut_trace("[NVUT] normal_boot_calibrat_altered_read(): read test LID fail!\n\r");
        return KAL_FALSE;
    }

    data_buffer[0] += 1;
    data_buffer[1] += 1;
    data_buffer[2] += 1;
    if(FS_NO_ERROR > FS_Seek(hFile, NVRAM_LDI_HEADER_SIZE, FS_FILE_BEGIN)) //skip LID header
    {
        nvram_ut_trace("[NVUT] normal_boot_calibrat_altered_read(): FS_Seek test LID fail!\n\r");
        return KAL_FALSE;
    }

    if(FS_NO_ERROR > FS_Write(hFile, data_buffer, ldi->size, &len))
    {
        nvram_ut_trace("[NVUT] normal_boot_calibrat_altered_read(): write back test LID fail!\n\r");
        return KAL_FALSE;
    }
    
    if(hFile > FS_NO_ERROR)
    {
        FS_Close(hFile);
    }

    //reset SYS LID to default value
    if(!nvram_external_reset_data(NVRAM_EF_SW_VERNO_LID, SW_VERNO_RECORD_NUMBER, 1))
    {
        nvram_ut_trace("[NVUT] normal_boot_calibrat_altered_read(): reset SYS LID fail!\n\r");
        return KAL_FALSE;
    }

    //call nvram_init()
    nvram_boot_trace = 0;
    nvram_init();
    if(!(nvram_boot_trace & BOOT_TRACE_SW_VERNO_COMPATIBLE))
    {
        nvram_ut_trace("[NVUT] normal_boot_calibrat_altered_read(): enter version conflict fail!\n\r");
        return KAL_FALSE;
    }

    //lid access
    nvram_util_get_data_item(&ldi, NVRAM_EF_NVRAM_TEST_3_LID);
    kal_mem_set(data_buffer, 0, ldi->size);
    data_buffer[0] = 0x1; //modify to the value before binregion backup
    for(i = 1; i <= ldi->total_records; i++)
    {
        if(!nvram_external_read_data(ldi->LID, i, (kal_uint8 *)cmp_buffer, ldi->size))
        {
            nvram_ut_trace("[NVUT] normal_boot_calibrat_altered_read(): read LID fail!\n\r");
            return KAL_FALSE;
        }
        if(0 != kal_mem_cmp(data_buffer, cmp_buffer, ldi->size))
        {
            nvram_ut_trace("[NVUT] normal_boot_calibrat_altered_read(): read back value not expect!\n\r");
            return KAL_FALSE;
        }
    }

    return KAL_TRUE;
    
}

kal_bool normal_boot_calibrat_altered_write(kal_uint32 flags, void *param)
{
    nvram_ltable_entry_struct *ldi = NULL;
    kal_wchar filename[NVRAM_MAX_PATH_LEN];
    nvram_folder_enum folder_index;
    NVRAM_FILE_NAME nvramname;
    FS_HANDLE hFile = 0;
    kal_uint32 len;
    
    //reset test LIDs to default settings
    if( !reset_test_lid_default_setting(NVRAM_EF_NVRAM_TEST_3_LID) )
    {
        nvram_ut_trace("[NVUT] normal_boot_calibrat_altered_write(): reset test LID settings fail!\n\r");
    }

    //this test will use LID verno "000" only
    if( !delete_special_version_lid(NVRAM_EF_NVRAM_TEST_3_LID, 0, 0) )
    {
        nvram_ut_trace("[NVUT] normal_boot_calibrat_altered_write(): delete test LID fail!\n\r");
    }

    //reset(create) test LID
    nvram_util_get_data_item(&ldi, NVRAM_EF_NVRAM_TEST_3_LID);
    if( !nvram_reset_data_items(NVRAM_RESET_CERTAIN, NVRAM_APP_RESERVED, ldi, 1, ldi->total_records) )
    {
        nvram_ut_trace("[NVUT] normal_boot_calibrat_altered_write(): reset test LID fail!\n\r");
        return KAL_FALSE;
    }

    //alter test LID
    folder_index = nvram_query_folder_index(ldi->category);
    nvram_util_make_lid_filename(ldi, nvramname, KAL_TRUE);
    nvram_query_file_name(folder_index, nvramname, filename);
    hFile = FS_Open((const kal_wchar*)filename, FS_READ_WRITE | FS_OPEN_NO_DIR | FS_OPEN_SHARED);
    if (hFile == FS_FILE_NOT_FOUND)
    {
        nvram_ut_trace("[NVUT] normal_boot_calibrat_altered_write(): can not find test LID!\n\r");
        return KAL_FALSE;
    }
    else if (hFile <= FS_NO_ERROR)
    {
        nvram_ut_trace("[NVUT] normal_boot_calibrat_altered_write(): open test LID fail!\n\r");
        return KAL_FALSE;
    }

    if(FS_NO_ERROR > FS_Seek(hFile, NVRAM_LDI_HEADER_SIZE, FS_FILE_BEGIN)) //skip LID header
    {
        nvram_ut_trace("[NVUT] normal_boot_calibrat_altered_write(): first FS_Seek test LID fail!\n\r");
        return KAL_FALSE;
    }

    if(FS_NO_ERROR > FS_Read(hFile, data_buffer, ldi->size, &len))
    {
        nvram_ut_trace("[NVUT] normal_boot_calibrat_altered_write(): read test LID fail!\n\r");
        return KAL_FALSE;
    }

    data_buffer[0] += 1;
    data_buffer[1] += 1;
    data_buffer[2] += 1;
    if(FS_NO_ERROR > FS_Seek(hFile, NVRAM_LDI_HEADER_SIZE, FS_FILE_BEGIN)) //skip LID header
    {
        nvram_ut_trace("[NVUT] normal_boot_calibrat_altered_write(): FS_Seek test LID fail!\n\r");
        return KAL_FALSE;
    }

    if(FS_NO_ERROR > FS_Write(hFile, data_buffer, ldi->size, &len))
    {
        nvram_ut_trace("[NVUT] normal_boot_calibrat_altered_write(): write back test LID fail!\n\r");
        return KAL_FALSE;
    }
    
    if(hFile > FS_NO_ERROR)
    {
        FS_Close(hFile);
    }

    //reset SYS LID to default value
    if(!nvram_external_reset_data(NVRAM_EF_SW_VERNO_LID, SW_VERNO_RECORD_NUMBER, 1))
    {
        nvram_ut_trace("[NVUT] normal_boot_calibrat_altered_write(): reset SYS LID fail!\n\r");
        return KAL_FALSE;
    }

    //call nvram_init()
    nvram_boot_trace = 0;
    nvram_init();
    if(!(nvram_boot_trace & BOOT_TRACE_SW_VERNO_COMPATIBLE))
    {
        nvram_ut_trace("[NVUT] normal_boot_calibrat_altered_write(): enter version conflict fail!\n\r");
        return KAL_FALSE;
    }

    //lid access
    nvram_ut_assert_flag = 0;
    if(0 != nvram_lid_cmpt_operation(NVRAM_EF_NVRAM_TEST_3_LID,
                                     CMPT_OP_FLAG_GEN(CMPT_OP_FLAG_WRITE, 0, 0, 0),
                                     CMPT_OP_WAY_API, 1, NVRAM_EF_TEST_LID_RECORD_TOTAL))
    {
        nvram_ut_trace("[NVUT] normal_boot_calibrat_altered_write(): nvram_lid_cmpt_operation() fail!\n\r");
        return KAL_FALSE;
    }
    if(nvram_ut_assert_flag)
    {
        nvram_ut_trace("[NVUT] normal_boot_calibrat_altered_write(): unexpect assert happen!\n\r");
        return KAL_FALSE;
    }

    return KAL_TRUE;
    
}

kal_bool normal_boot_calibrat_altered_reset(kal_uint32 flags, void *param)
{
    nvram_ltable_entry_struct *ldi = NULL;
    kal_wchar filename[NVRAM_MAX_PATH_LEN];
    nvram_folder_enum folder_index;
    NVRAM_FILE_NAME nvramname;
    FS_HANDLE hFile = 0;
    kal_uint32 len;
    
    //reset test LIDs to default settings
    if( !reset_test_lid_default_setting(NVRAM_EF_NVRAM_TEST_3_LID) )
    {
        nvram_ut_trace("[NVUT] normal_boot_calibrat_altered_reset(): reset test LID settings fail!\n\r");
    }

    //this test will use LID verno "000" only
    if( !delete_special_version_lid(NVRAM_EF_NVRAM_TEST_3_LID, 0, 0) )
    {
        nvram_ut_trace("[NVUT] normal_boot_calibrat_altered_reset(): delete test LID fail!\n\r");
    }

    //reset(create) test LID
    nvram_util_get_data_item(&ldi, NVRAM_EF_NVRAM_TEST_3_LID);
    if( !nvram_reset_data_items(NVRAM_RESET_CERTAIN, NVRAM_APP_RESERVED, ldi, 1, ldi->total_records) )
    {
        nvram_ut_trace("[NVUT] normal_boot_calibrat_altered_reset(): reset test LID fail!\n\r");
        return KAL_FALSE;
    }

    //alter test LID
    folder_index = nvram_query_folder_index(ldi->category);
    nvram_util_make_lid_filename(ldi, nvramname, KAL_TRUE);
    nvram_query_file_name(folder_index, nvramname, filename);
    hFile = FS_Open((const kal_wchar*)filename, FS_READ_WRITE | FS_OPEN_NO_DIR | FS_OPEN_SHARED);
    if (hFile == FS_FILE_NOT_FOUND)
    {
        nvram_ut_trace("[NVUT] normal_boot_calibrat_altered_reset(): can not find test LID!\n\r");
        return KAL_FALSE;
    }
    else if (hFile <= FS_NO_ERROR)
    {
        nvram_ut_trace("[NVUT] normal_boot_calibrat_altered_reset(): open test LID fail!\n\r");
        return KAL_FALSE;
    }

    if(FS_NO_ERROR > FS_Seek(hFile, NVRAM_LDI_HEADER_SIZE, FS_FILE_BEGIN)) //skip LID header
    {
        nvram_ut_trace("[NVUT] normal_boot_calibrat_altered_reset(): first FS_Seek test LID fail!\n\r");
        return KAL_FALSE;
    }
    
    if(FS_NO_ERROR > FS_Read(hFile, data_buffer, ldi->size, &len))
    {
        nvram_ut_trace("[NVUT] normal_boot_calibrat_altered_reset(): read test LID fail!\n\r");
        return KAL_FALSE;
    }

    data_buffer[0] += 1;
    data_buffer[1] += 1;
    data_buffer[2] += 1;
    if(FS_NO_ERROR > FS_Seek(hFile, NVRAM_LDI_HEADER_SIZE, FS_FILE_BEGIN)) //skip LID header
    {
        nvram_ut_trace("[NVUT] normal_boot_calibrat_altered_reset(): FS_Seek test LID fail!\n\r");
        return KAL_FALSE;
    }

    if(FS_NO_ERROR > FS_Write(hFile, data_buffer, ldi->size, &len))
    {
        nvram_ut_trace("[NVUT] normal_boot_calibrat_altered_reset(): write back test LID fail!\n\r");
        return KAL_FALSE;
    }
    
    if(hFile > FS_NO_ERROR)
    {
        FS_Close(hFile);
    }

    //reset SYS LID to default value
    if(!nvram_external_reset_data(NVRAM_EF_SW_VERNO_LID, SW_VERNO_RECORD_NUMBER, 1))
    {
        nvram_ut_trace("[NVUT] normal_boot_calibrat_altered_reset(): reset SYS LID fail!\n\r");
        return KAL_FALSE;
    }

    //call nvram_init()
    nvram_boot_trace = 0;
    nvram_init();
    if(!(nvram_boot_trace & BOOT_TRACE_SW_VERNO_COMPATIBLE))
    {
        nvram_ut_trace("[NVUT] normal_boot_calibrat_altered_reset(): enter version conflict fail!\n\r");
        return KAL_FALSE;
    }

    //lid access
    nvram_ut_assert_flag = 0;
    if(0 != nvram_lid_cmpt_operation(NVRAM_EF_NVRAM_TEST_3_LID,
                                     CMPT_OP_FLAG_GEN(CMPT_OP_FLAG_RESET, 0, 0, 0),
                                     CMPT_OP_WAY_API, 1, NVRAM_EF_TEST_LID_RECORD_TOTAL))
    {
        nvram_ut_trace("[NVUT] normal_boot_calibrat_altered_reset(): nvram_lid_cmpt_operation() fail!\n\r");
        return KAL_FALSE;
    }
    if(nvram_ut_assert_flag)
    {
        nvram_ut_trace("[NVUT] normal_boot_calibrat_altered_reset(): unexpect assert happen!\n\r");
        return KAL_FALSE;
    }

    return KAL_TRUE;
    
}

kal_bool normal_boot_important_altered_read(kal_uint32 flags, void *param)
{
    nvram_ltable_entry_struct *ldi = NULL;
    kal_wchar filename[NVRAM_MAX_PATH_LEN];
    nvram_folder_enum folder_index;
    NVRAM_FILE_NAME nvramname;
    FS_HANDLE hFile = 0;
    kal_uint32 len;
    kal_uint8 i;
    
    //reset test LIDs to default settings
    if( !reset_test_lid_default_setting(NVRAM_EF_NVRAM_TEST_4_LID) )
    {
        nvram_ut_trace("[NVUT] normal_boot_important_altered_read(): reset test LID settings fail!\n\r");
    }

    //this test will use LID verno "000" only
    if( !delete_special_version_lid(NVRAM_EF_NVRAM_TEST_4_LID, 0, 0) )
    {
        nvram_ut_trace("[NVUT] normal_boot_important_altered_read(): delete test LID fail!\n\r");
    }

    //reset(create) test LID
    nvram_util_get_data_item(&ldi, NVRAM_EF_NVRAM_TEST_4_LID);
    if( !nvram_reset_data_items(NVRAM_RESET_CERTAIN, NVRAM_APP_RESERVED, ldi, 1, ldi->total_records) )
    {
        nvram_ut_trace("[NVUT] normal_boot_important_altered_read(): reset test LID fail!\n\r");
        return KAL_FALSE;
    }

    //alter test LID
    folder_index = nvram_query_folder_index(ldi->category);
    nvram_util_make_lid_filename(ldi, nvramname, KAL_TRUE);
    nvram_query_file_name(folder_index, nvramname, filename);
    hFile = FS_Open((const kal_wchar*)filename, FS_READ_WRITE | FS_OPEN_NO_DIR | FS_OPEN_SHARED);
    if (hFile == FS_FILE_NOT_FOUND)
    {
        nvram_ut_trace("[NVUT] normal_boot_important_altered_read(): can not find test LID!\n\r");
        return KAL_FALSE;
    }
    else if (hFile <= FS_NO_ERROR)
    {
        nvram_ut_trace("[NVUT] normal_boot_important_altered_read(): open test LID fail!\n\r");
        return KAL_FALSE;
    }

    if(FS_NO_ERROR > FS_Seek(hFile, NVRAM_LDI_HEADER_SIZE, FS_FILE_BEGIN)) //skip LID header
    {
        nvram_ut_trace("[NVUT] normal_boot_important_altered_read(): first FS_Seek test LID fail!\n\r");
        return KAL_FALSE;
    }
    
    if(FS_NO_ERROR > FS_Read(hFile, data_buffer, ldi->size, &len))
    {
        nvram_ut_trace("[NVUT] normal_boot_important_altered_read(): read test LID fail!\n\r");
        return KAL_FALSE;
    }

    data_buffer[0] += 1;
    data_buffer[1] += 1;
    data_buffer[2] += 1;
    if(FS_NO_ERROR > FS_Seek(hFile, NVRAM_LDI_HEADER_SIZE, FS_FILE_BEGIN)) //skip LID header
    {
        nvram_ut_trace("[NVUT] normal_boot_important_altered_read(): FS_Seek test LID fail!\n\r");
        return KAL_FALSE;
    }

    if(FS_NO_ERROR > FS_Write(hFile, data_buffer, ldi->size, &len))
    {
        nvram_ut_trace("[NVUT] normal_boot_important_altered_read(): write back test LID fail!\n\r");
        return KAL_FALSE;
    }
    
    if(hFile > FS_NO_ERROR)
    {
        FS_Close(hFile);
    }

    //reset SYS LID to default value
    if(!nvram_external_reset_data(NVRAM_EF_SW_VERNO_LID, SW_VERNO_RECORD_NUMBER, 1))
    {
        nvram_ut_trace("[NVUT] normal_boot_important_altered_read(): reset SYS LID fail!\n\r");
        return KAL_FALSE;
    }

    //call nvram_init()
    nvram_boot_trace = 0;
    nvram_init();
    if(!(nvram_boot_trace & BOOT_TRACE_SW_VERNO_COMPATIBLE))
    {
        nvram_ut_trace("[NVUT] normal_boot_important_altered_read(): enter version conflict fail!\n\r");
        return KAL_FALSE;
    }

    //lid access
    nvram_util_get_data_item(&ldi, NVRAM_EF_NVRAM_TEST_4_LID);
    kal_mem_set(data_buffer, 0, ldi->size);
    data_buffer[0] = 0x1; //modify to the value before binregion backup
    for(i = 1; i <= ldi->total_records; i++)
    {
        if(!nvram_external_read_data(ldi->LID, i, (kal_uint8 *)cmp_buffer, ldi->size))
        {
            nvram_ut_trace("[NVUT] normal_boot_important_altered_read(): read LID fail!\n\r");
            return KAL_FALSE;
        }
        if(0 != kal_mem_cmp(data_buffer, cmp_buffer, ldi->size))
        {
            nvram_ut_trace("[NVUT] normal_boot_important_altered_read(): read back value not expect!\n\r");
            return KAL_FALSE;
        }
    }

    return KAL_TRUE;
    
}

kal_bool normal_boot_important_altered_write(kal_uint32 flags, void *param)
{
    nvram_ltable_entry_struct *ldi = NULL;
    kal_wchar filename[NVRAM_MAX_PATH_LEN];
    nvram_folder_enum folder_index;
    NVRAM_FILE_NAME nvramname;
    FS_HANDLE hFile = 0;
    kal_uint32 len;
    
    //reset test LIDs to default settings
    if( !reset_test_lid_default_setting(NVRAM_EF_NVRAM_TEST_4_LID) )
    {
        nvram_ut_trace("[NVUT] normal_boot_important_altered_write(): reset test LID settings fail!\n\r");
    }

    //this test will use LID verno "000" only
    if( !delete_special_version_lid(NVRAM_EF_NVRAM_TEST_4_LID, 0, 0) )
    {
        nvram_ut_trace("[NVUT] normal_boot_important_altered_write(): delete test LID fail!\n\r");
    }

    //reset(create) test LID
    nvram_util_get_data_item(&ldi, NVRAM_EF_NVRAM_TEST_4_LID);
    if( !nvram_reset_data_items(NVRAM_RESET_CERTAIN, NVRAM_APP_RESERVED, ldi, 1, ldi->total_records) )
    {
        nvram_ut_trace("[NVUT] normal_boot_important_altered_write(): reset test LID fail!\n\r");
        return KAL_FALSE;
    }

    //alter test LID
    folder_index = nvram_query_folder_index(ldi->category);
    nvram_util_make_lid_filename(ldi, nvramname, KAL_TRUE);
    nvram_query_file_name(folder_index, nvramname, filename);
    hFile = FS_Open((const kal_wchar*)filename, FS_READ_WRITE | FS_OPEN_NO_DIR | FS_OPEN_SHARED);
    if (hFile == FS_FILE_NOT_FOUND)
    {
        nvram_ut_trace("[NVUT] normal_boot_important_altered_write(): can not find test LID!\n\r");
        return KAL_FALSE;
    }
    else if (hFile <= FS_NO_ERROR)
    {
        nvram_ut_trace("[NVUT] normal_boot_important_altered_write(): open test LID fail!\n\r");
        return KAL_FALSE;
    }

    if(FS_NO_ERROR > FS_Seek(hFile, NVRAM_LDI_HEADER_SIZE, FS_FILE_BEGIN)) //skip LID header
    {
        nvram_ut_trace("[NVUT] normal_boot_important_altered_write(): first FS_Seek test LID fail!\n\r");
        return KAL_FALSE;
    }
    
    if(FS_NO_ERROR > FS_Read(hFile, data_buffer, ldi->size, &len))
    {
        nvram_ut_trace("[NVUT] normal_boot_important_altered_write(): read test LID fail!\n\r");
        return KAL_FALSE;
    }

    data_buffer[0] += 1;
    data_buffer[1] += 1;
    data_buffer[2] += 1;
    if(FS_NO_ERROR > FS_Seek(hFile, NVRAM_LDI_HEADER_SIZE, FS_FILE_BEGIN)) //skip LID header
    {
        nvram_ut_trace("[NVUT] normal_boot_important_altered_write(): FS_Seek test LID fail!\n\r");
        return KAL_FALSE;
    }

    if(FS_NO_ERROR > FS_Write(hFile, data_buffer, ldi->size, &len))
    {
        nvram_ut_trace("[NVUT] normal_boot_important_altered_write(): write back test LID fail!\n\r");
        return KAL_FALSE;
    }

    if(hFile > FS_NO_ERROR)
    {
        FS_Close(hFile);
    }

    //reset SYS LID to default value
    if(!nvram_external_reset_data(NVRAM_EF_SW_VERNO_LID, SW_VERNO_RECORD_NUMBER, 1))
    {
        nvram_ut_trace("[NVUT] normal_boot_important_altered_write(): reset SYS LID fail!\n\r");
        return KAL_FALSE;
    }

    //call nvram_init()
    nvram_boot_trace = 0;
    nvram_init();
    if(!(nvram_boot_trace & BOOT_TRACE_SW_VERNO_COMPATIBLE))
    {
        nvram_ut_trace("[NVUT] normal_boot_important_altered_write(): enter version conflict fail!\n\r");
        return KAL_FALSE;
    }

    //lid access
    nvram_ut_assert_flag = 0;
    if(0 != nvram_lid_cmpt_operation(NVRAM_EF_NVRAM_TEST_4_LID,
                                     CMPT_OP_FLAG_GEN(CMPT_OP_FLAG_WRITE, 0, 0, 0),
                                     CMPT_OP_WAY_API, 1, NVRAM_EF_TEST_LID_RECORD_TOTAL))
    {
        nvram_ut_trace("[NVUT] normal_boot_important_altered_write(): nvram_lid_cmpt_operation() fail!\n\r");
        return KAL_FALSE;
    }
    if(nvram_ut_assert_flag)
    {
        nvram_ut_trace("[NVUT] normal_boot_important_altered_write(): unexpect assert happen!\n\r");
        return KAL_FALSE;
    }

    return KAL_TRUE;
    
}

kal_bool normal_boot_important_altered_reset(kal_uint32 flags, void *param)
{
    nvram_ltable_entry_struct *ldi = NULL;
    kal_wchar filename[NVRAM_MAX_PATH_LEN];
    nvram_folder_enum folder_index;
    NVRAM_FILE_NAME nvramname;
    FS_HANDLE hFile = 0;
    kal_uint32 len;
    
    //reset test LIDs to default settings
    if( !reset_test_lid_default_setting(NVRAM_EF_NVRAM_TEST_4_LID) )
    {
        nvram_ut_trace("[NVUT] normal_boot_important_altered_reset(): reset test LID settings fail!\n\r");
    }

    //this test will use LID verno "000" only
    if( !delete_special_version_lid(NVRAM_EF_NVRAM_TEST_4_LID, 0, 0) )
    {
        nvram_ut_trace("[NVUT] normal_boot_important_altered_reset(): delete test LID fail!\n\r");
    }

    //reset(create) test LID
    nvram_util_get_data_item(&ldi, NVRAM_EF_NVRAM_TEST_4_LID);
    if( !nvram_reset_data_items(NVRAM_RESET_CERTAIN, NVRAM_APP_RESERVED, ldi, 1, ldi->total_records) )
    {
        nvram_ut_trace("[NVUT] normal_boot_important_altered_reset(): reset test LID fail!\n\r");
        return KAL_FALSE;
    }

    //alter test LID
    folder_index = nvram_query_folder_index(ldi->category);
    nvram_util_make_lid_filename(ldi, nvramname, KAL_TRUE);
    nvram_query_file_name(folder_index, nvramname, filename);
    hFile = FS_Open((const kal_wchar*)filename, FS_READ_WRITE | FS_OPEN_NO_DIR | FS_OPEN_SHARED);
    if (hFile == FS_FILE_NOT_FOUND)
    {
        nvram_ut_trace("[NVUT] normal_boot_important_altered_reset(): can not find test LID!\n\r");
        return KAL_FALSE;
    }
    else if (hFile <= FS_NO_ERROR)
    {
        nvram_ut_trace("[NVUT] normal_boot_important_altered_reset(): open test LID fail!\n\r");
        return KAL_FALSE;
    }

    if(FS_NO_ERROR > FS_Seek(hFile, NVRAM_LDI_HEADER_SIZE, FS_FILE_BEGIN)) //skip LID header
    {
        nvram_ut_trace("[NVUT] normal_boot_important_altered_reset(): first FS_Seek test LID fail!\n\r");
        return KAL_FALSE;
    }
    
    if(FS_NO_ERROR > FS_Read(hFile, data_buffer, ldi->size, &len))
    {
        nvram_ut_trace("[NVUT] normal_boot_important_altered_reset(): read test LID fail!\n\r");
        return KAL_FALSE;
    }

    data_buffer[0] += 1;
    data_buffer[1] += 1;
    data_buffer[2] += 1;
    if(FS_NO_ERROR > FS_Seek(hFile, NVRAM_LDI_HEADER_SIZE, FS_FILE_BEGIN)) //skip LID header
    {
        nvram_ut_trace("[NVUT] normal_boot_important_altered_reset(): FS_Seek test LID fail!\n\r");
        return KAL_FALSE;
    }

    if(FS_NO_ERROR > FS_Write(hFile, data_buffer, ldi->size, &len))
    {
        nvram_ut_trace("[NVUT] normal_boot_important_altered_reset(): write back test LID fail!\n\r");
        return KAL_FALSE;
    }
    
    if(hFile > FS_NO_ERROR)
    {
        FS_Close(hFile);
    }

    //reset SYS LID to default value
    if(!nvram_external_reset_data(NVRAM_EF_SW_VERNO_LID, SW_VERNO_RECORD_NUMBER, 1))
    {
        nvram_ut_trace("[NVUT] normal_boot_important_altered_reset(): reset SYS LID fail!\n\r");
        return KAL_FALSE;
    }

    //call nvram_init()
    nvram_boot_trace = 0;
    nvram_init();
    if(!(nvram_boot_trace & BOOT_TRACE_SW_VERNO_COMPATIBLE))
    {
        nvram_ut_trace("[NVUT] normal_boot_important_altered_reset(): enter version conflict fail!\n\r");
        return KAL_FALSE;
    }

    //lid access
    nvram_ut_assert_flag = 0;
    if(0 != nvram_lid_cmpt_operation(NVRAM_EF_NVRAM_TEST_4_LID,
                                     CMPT_OP_FLAG_GEN(CMPT_OP_FLAG_RESET, 0, 0, 0),
                                     CMPT_OP_WAY_API, 1, NVRAM_EF_TEST_LID_RECORD_TOTAL))
    {
        nvram_ut_trace("[NVUT] normal_boot_important_altered_reset(): nvram_lid_cmpt_operation() fail!\n\r");
        return KAL_FALSE;
    }
    if(nvram_ut_assert_flag)
    {
        nvram_ut_trace("[NVUT] normal_boot_important_altered_reset(): unexpect assert happen!\n\r");
        return KAL_FALSE;
    }

    return KAL_TRUE;
    
}

kal_bool normal_boot_importantl1_altered_read(kal_uint32 flags, void *param)
{
    nvram_ltable_entry_struct *ldi = NULL;
    kal_wchar filename[NVRAM_MAX_PATH_LEN];
    nvram_folder_enum folder_index;
    NVRAM_FILE_NAME nvramname;
    FS_HANDLE hFile = 0;
    kal_uint32 len;
    
    //reset test LIDs to default settings
    if( !reset_test_lid_default_setting(NVRAM_EF_NVRAM_TEST_5_LID) )
    {
        nvram_ut_trace("[NVUT] normal_boot_importantl1_altered_read(): reset test LID settings fail!\n\r");
    }

    //this test will use LID verno "000" only
    if( !delete_special_version_lid(NVRAM_EF_NVRAM_TEST_5_LID, 0, 0) )
    {
        nvram_ut_trace("[NVUT] normal_boot_importantl1_altered_read(): delete test LID fail!\n\r");
    }

    //reset(create) test LID
    nvram_util_get_data_item(&ldi, NVRAM_EF_NVRAM_TEST_5_LID);
    if( !nvram_reset_data_items(NVRAM_RESET_CERTAIN, NVRAM_APP_RESERVED, ldi, 1, ldi->total_records) )
    {
        nvram_ut_trace("[NVUT] normal_boot_importantl1_altered_read(): reset test LID fail!\n\r");
        return KAL_FALSE;
    }

    //alter test LID
    folder_index = nvram_query_folder_index(ldi->category);
    nvram_util_make_lid_filename(ldi, nvramname, KAL_TRUE);
    nvram_query_file_name(folder_index, nvramname, filename);
    hFile = FS_Open((const kal_wchar*)filename, FS_READ_WRITE | FS_OPEN_NO_DIR | FS_OPEN_SHARED);
    if (hFile == FS_FILE_NOT_FOUND)
    {
        nvram_ut_trace("[NVUT] normal_boot_importantl1_altered_read(): can not find test LID!\n\r");
        return KAL_FALSE;
    }
    else if (hFile <= FS_NO_ERROR)
    {
        nvram_ut_trace("[NVUT] normal_boot_importantl1_altered_read(): open test LID fail!\n\r");
        return KAL_FALSE;
    }

    if(FS_NO_ERROR > FS_Seek(hFile, NVRAM_LDI_HEADER_SIZE, FS_FILE_BEGIN)) //skip LID header
    {
        nvram_ut_trace("[NVUT] normal_boot_importantl1_altered_read(): first FS_Seek test LID fail!\n\r");
        return KAL_FALSE;
    }
    
    if(FS_NO_ERROR > FS_Read(hFile, data_buffer, ldi->size, &len))
    {
        nvram_ut_trace("[NVUT] normal_boot_importantl1_altered_read(): read test LID fail!\n\r");
        return KAL_FALSE;
    }

    data_buffer[0] += 1;
    data_buffer[1] += 1;
    data_buffer[2] += 1;
    if(FS_NO_ERROR > FS_Seek(hFile, NVRAM_LDI_HEADER_SIZE, FS_FILE_BEGIN)) //skip LID header
    {
        nvram_ut_trace("[NVUT] normal_boot_importantl1_altered_read(): FS_Seek test LID fail!\n\r");
        return KAL_FALSE;
    }

    if(FS_NO_ERROR > FS_Write(hFile, data_buffer, ldi->size, &len))
    {
        nvram_ut_trace("[NVUT] normal_boot_importantl1_altered_read(): write back test LID fail!\n\r");
        return KAL_FALSE;
    }
    
    if(hFile > FS_NO_ERROR)
    {
        FS_Close(hFile);
    }

    //reset SYS LID to default value
    if(!nvram_external_reset_data(NVRAM_EF_SW_VERNO_LID, SW_VERNO_RECORD_NUMBER, 1))
    {
        nvram_ut_trace("[NVUT] normal_boot_importantl1_altered_read(): reset SYS LID fail!\n\r");
        return KAL_FALSE;
    }

    //call nvram_init()
    nvram_boot_trace = 0;
    nvram_init();
    if(!(nvram_boot_trace & BOOT_TRACE_SW_VERNO_COMPATIBLE))
    {
        nvram_ut_trace("[NVUT] normal_boot_importantl1_altered_read(): enter version conflict fail!\n\r");
        return KAL_FALSE;
    }

    //lid access
    nvram_ut_assert_flag = 0;
    if(0 != nvram_lid_cmpt_operation(NVRAM_EF_NVRAM_TEST_5_LID,
                                     CMPT_OP_FLAG_GEN(CMPT_OP_FLAG_READBACK, 0, 0, 0),
                                     CMPT_OP_WAY_API, 1, NVRAM_EF_TEST_LID_RECORD_TOTAL))
    {
        nvram_ut_trace("[NVUT] normal_boot_importantl1_altered_read(): unexpect read fail happen!\n\r");
        return KAL_FALSE;
    }
    if(nvram_ut_assert_flag)
    {
        nvram_ut_trace("[NVUT] normal_boot_importantl1_altered_read(): unexpect assert happen!\n\r");
        return KAL_FALSE;
    }

    return KAL_TRUE;
    
}

kal_bool normal_boot_importantl1_altered_write(kal_uint32 flags, void *param)
{
    nvram_ltable_entry_struct *ldi = NULL;
    kal_wchar filename[NVRAM_MAX_PATH_LEN];
    nvram_folder_enum folder_index;
    NVRAM_FILE_NAME nvramname;
    FS_HANDLE hFile = 0;
    kal_uint32 len;
    
    //reset test LIDs to default settings
    if( !reset_test_lid_default_setting(NVRAM_EF_NVRAM_TEST_5_LID) )
    {
        nvram_ut_trace("[NVUT] normal_boot_importantl1_altered_write(): reset test LID settings fail!\n\r");
    }

    //this test will use LID verno "000" only
    if( !delete_special_version_lid(NVRAM_EF_NVRAM_TEST_5_LID, 0, 0) )
    {
        nvram_ut_trace("[NVUT] normal_boot_importantl1_altered_write(): delete test LID fail!\n\r");
    }

    //reset(create) test LID
    nvram_util_get_data_item(&ldi, NVRAM_EF_NVRAM_TEST_5_LID);
    if( !nvram_reset_data_items(NVRAM_RESET_CERTAIN, NVRAM_APP_RESERVED, ldi, 1, ldi->total_records) )
    {
        nvram_ut_trace("[NVUT] normal_boot_importantl1_altered_write(): reset test LID fail!\n\r");
        return KAL_FALSE;
    }

    //alter test LID
    folder_index = nvram_query_folder_index(ldi->category);
    nvram_util_make_lid_filename(ldi, nvramname, KAL_TRUE);
    nvram_query_file_name(folder_index, nvramname, filename);
    hFile = FS_Open((const kal_wchar*)filename, FS_READ_WRITE | FS_OPEN_NO_DIR | FS_OPEN_SHARED);
    if (hFile == FS_FILE_NOT_FOUND)
    {
        nvram_ut_trace("[NVUT] normal_boot_importantl1_altered_write(): can not find test LID!\n\r");
        return KAL_FALSE;
    }
    else if (hFile <= FS_NO_ERROR)
    {
        nvram_ut_trace("[NVUT] normal_boot_importantl1_altered_write(): open test LID fail!\n\r");
        return KAL_FALSE;
    }

    if(FS_NO_ERROR > FS_Seek(hFile, NVRAM_LDI_HEADER_SIZE, FS_FILE_BEGIN)) //skip LID header
    {
        nvram_ut_trace("[NVUT] normal_boot_importantl1_altered_write(): first FS_Seek test LID fail!\n\r");
        return KAL_FALSE;
    }
    
    if(FS_NO_ERROR > FS_Read(hFile, data_buffer, ldi->size, &len))
    {
        nvram_ut_trace("[NVUT] normal_boot_importantl1_altered_write(): read test LID fail!\n\r");
        return KAL_FALSE;
    }

    data_buffer[0] += 1;
    data_buffer[1] += 1;
    data_buffer[2] += 1;
    if(FS_NO_ERROR > FS_Seek(hFile, NVRAM_LDI_HEADER_SIZE, FS_FILE_BEGIN)) //skip LID header
    {
        nvram_ut_trace("[NVUT] normal_boot_importantl1_altered_write(): FS_Seek test LID fail!\n\r");
        return KAL_FALSE;
    }

    if(FS_NO_ERROR > FS_Write(hFile, data_buffer, ldi->size, &len))
    {
        nvram_ut_trace("[NVUT] normal_boot_importantl1_altered_write(): write back test LID fail!\n\r");
        return KAL_FALSE;
    }
    
    if(hFile > FS_NO_ERROR)
    {
        FS_Close(hFile);
    }

    //reset SYS LID to default value
    if(!nvram_external_reset_data(NVRAM_EF_SW_VERNO_LID, SW_VERNO_RECORD_NUMBER, 1))
    {
        nvram_ut_trace("[NVUT] normal_boot_importantl1_altered_write(): reset SYS LID fail!\n\r");
        return KAL_FALSE;
    }

    //call nvram_init()
    nvram_boot_trace = 0;
    nvram_init();
    if(!(nvram_boot_trace & BOOT_TRACE_SW_VERNO_COMPATIBLE))
    {
        nvram_ut_trace("[NVUT] normal_boot_importantl1_altered_write(): enter version conflict fail!\n\r");
        return KAL_FALSE;
    }

    //lid access
    nvram_ut_assert_flag = 0;
    if(0 != nvram_lid_cmpt_operation(NVRAM_EF_NVRAM_TEST_5_LID,
                                     CMPT_OP_FLAG_GEN(CMPT_OP_FLAG_WRITE, 0, 0, 0),
                                     CMPT_OP_WAY_API, 1, NVRAM_EF_TEST_LID_RECORD_TOTAL))
    {
        nvram_ut_trace("[NVUT] normal_boot_importantl1_altered_write(): nvram_lid_cmpt_operation() fail!\n\r");
        return KAL_FALSE;
    }
    if(nvram_ut_assert_flag)
    {
        nvram_ut_trace("[NVUT] normal_boot_importantl1_altered_write(): unexpect assert happen!\n\r");
        return KAL_FALSE;
    }

    return KAL_TRUE;
    
}

kal_bool normal_boot_importantl1_altered_reset(kal_uint32 flags, void *param)
{
    nvram_ltable_entry_struct *ldi = NULL;
    kal_wchar filename[NVRAM_MAX_PATH_LEN];
    nvram_folder_enum folder_index;
    NVRAM_FILE_NAME nvramname;
    FS_HANDLE hFile = 0;
    kal_uint32 len;
    
    //reset test LIDs to default settings
    if( !reset_test_lid_default_setting(NVRAM_EF_NVRAM_TEST_5_LID) )
    {
        nvram_ut_trace("[NVUT] normal_boot_importantl1_altered_reset(): reset test LID settings fail!\n\r");
    }

    //this test will use LID verno "000" only
    if( !delete_special_version_lid(NVRAM_EF_NVRAM_TEST_5_LID, 0, 0) )
    {
        nvram_ut_trace("[NVUT] normal_boot_importantl1_altered_reset(): delete test LID fail!\n\r");
    }

    //reset(create) test LID
    nvram_util_get_data_item(&ldi, NVRAM_EF_NVRAM_TEST_5_LID);
    if( !nvram_reset_data_items(NVRAM_RESET_CERTAIN, NVRAM_APP_RESERVED, ldi, 1, ldi->total_records) )
    {
        nvram_ut_trace("[NVUT] normal_boot_importantl1_altered_reset(): reset test LID fail!\n\r");
        return KAL_FALSE;
    }

    //alter test LID
    folder_index = nvram_query_folder_index(ldi->category);
    nvram_util_make_lid_filename(ldi, nvramname, KAL_TRUE);
    nvram_query_file_name(folder_index, nvramname, filename);
    hFile = FS_Open((const kal_wchar*)filename, FS_READ_WRITE | FS_OPEN_NO_DIR | FS_OPEN_SHARED);
    if (hFile == FS_FILE_NOT_FOUND)
    {
        nvram_ut_trace("[NVUT] normal_boot_importantl1_altered_reset(): can not find test LID!\n\r");
        return KAL_FALSE;
    }
    else if (hFile <= FS_NO_ERROR)
    {
        nvram_ut_trace("[NVUT] normal_boot_importantl1_altered_reset(): open test LID fail!\n\r");
        return KAL_FALSE;
    }

    if(FS_NO_ERROR > FS_Seek(hFile, NVRAM_LDI_HEADER_SIZE, FS_FILE_BEGIN)) //skip LID header
    {
        nvram_ut_trace("[NVUT] normal_boot_importantl1_altered_reset(): first FS_Seek test LID fail!\n\r");
        return KAL_FALSE;
    }
    
    if(FS_NO_ERROR > FS_Read(hFile, data_buffer, ldi->size, &len))
    {
        nvram_ut_trace("[NVUT] normal_boot_importantl1_altered_reset(): read test LID fail!\n\r");
        return KAL_FALSE;
    }

    data_buffer[0] += 1;
    data_buffer[1] += 1;
    data_buffer[2] += 1;
    if(FS_NO_ERROR > FS_Seek(hFile, NVRAM_LDI_HEADER_SIZE, FS_FILE_BEGIN)) //skip LID header
    {
        nvram_ut_trace("[NVUT] normal_boot_importantl1_altered_reset(): FS_Seek test LID fail!\n\r");
        return KAL_FALSE;
    }

    if(FS_NO_ERROR > FS_Write(hFile, data_buffer, ldi->size, &len))
    {
        nvram_ut_trace("[NVUT] normal_boot_importantl1_altered_reset(): write back test LID fail!\n\r");
        return KAL_FALSE;
    }
    
    if(hFile > FS_NO_ERROR)
    {
        FS_Close(hFile);
    }

    //reset SYS LID to default value
    if(!nvram_external_reset_data(NVRAM_EF_SW_VERNO_LID, SW_VERNO_RECORD_NUMBER, 1))
    {
        nvram_ut_trace("[NVUT] normal_boot_importantl1_altered_reset(): reset SYS LID fail!\n\r");
        return KAL_FALSE;
    }

    //call nvram_init()
    nvram_boot_trace = 0;
    nvram_init();
    if(!(nvram_boot_trace & BOOT_TRACE_SW_VERNO_COMPATIBLE))
    {
        nvram_ut_trace("[NVUT] normal_boot_importantl1_altered_reset(): enter version conflict fail!\n\r");
        return KAL_FALSE;
    }

    //lid access
    nvram_ut_assert_flag = 0;
    if(0 != nvram_lid_cmpt_operation(NVRAM_EF_NVRAM_TEST_5_LID,
                                     CMPT_OP_FLAG_GEN(CMPT_OP_FLAG_RESET, 0, 0, 0),
                                     CMPT_OP_WAY_API, 1, NVRAM_EF_TEST_LID_RECORD_TOTAL))
    {
        nvram_ut_trace("[NVUT] normal_boot_importantl1_altered_reset(): nvram_lid_cmpt_operation() fail!\n\r");
        return KAL_FALSE;
    }
    if(nvram_ut_assert_flag)
    {
        nvram_ut_trace("[NVUT] normal_boot_importantl1_altered_reset(): unexpect assert happen!\n\r");
        return KAL_FALSE;
    }

    return KAL_TRUE;
    
}

kal_bool normal_boot_importantl4_altered_read(kal_uint32 flags, void *param)
{
    nvram_ltable_entry_struct *ldi = NULL;
    kal_wchar filename[NVRAM_MAX_PATH_LEN];
    nvram_folder_enum folder_index;
    NVRAM_FILE_NAME nvramname;
    FS_HANDLE hFile = 0;
    kal_uint32 len;
    
    //reset test LIDs to default settings
    if( !reset_test_lid_default_setting(NVRAM_EF_NVRAM_TEST_6_LID) )
    {
        nvram_ut_trace("[NVUT] normal_boot_importantl4_altered_read(): reset test LID settings fail!\n\r");
    }

    //this test will use LID verno "000" only
    if( !delete_special_version_lid(NVRAM_EF_NVRAM_TEST_6_LID, 0, 0) )
    {
        nvram_ut_trace("[NVUT] normal_boot_importantl4_altered_read(): delete test LID fail!\n\r");
    }

    //reset(create) test LID
    nvram_util_get_data_item(&ldi, NVRAM_EF_NVRAM_TEST_6_LID);
    if( !nvram_reset_data_items(NVRAM_RESET_CERTAIN, NVRAM_APP_RESERVED, ldi, 1, ldi->total_records) )
    {
        nvram_ut_trace("[NVUT] normal_boot_importantl4_altered_read(): reset test LID fail!\n\r");
        return KAL_FALSE;
    }

    //alter test LID
    folder_index = nvram_query_folder_index(ldi->category);
    nvram_util_make_lid_filename(ldi, nvramname, KAL_TRUE);
    nvram_query_file_name(folder_index, nvramname, filename);
    hFile = FS_Open((const kal_wchar*)filename, FS_READ_WRITE | FS_OPEN_NO_DIR | FS_OPEN_SHARED);
    if (hFile == FS_FILE_NOT_FOUND)
    {
        nvram_ut_trace("[NVUT] normal_boot_importantl4_altered_read(): can not find test LID!\n\r");
        return KAL_FALSE;
    }
    else if (hFile <= FS_NO_ERROR)
    {
        nvram_ut_trace("[NVUT] normal_boot_importantl4_altered_read(): open test LID fail!\n\r");
        return KAL_FALSE;
    }

    if(FS_NO_ERROR > FS_Seek(hFile, NVRAM_LDI_HEADER_SIZE, FS_FILE_BEGIN)) //skip LID header
    {
        nvram_ut_trace("[NVUT] normal_boot_importantl4_altered_read(): first FS_Seek test LID fail!\n\r");
        return KAL_FALSE;
    }
    
    if(FS_NO_ERROR > FS_Read(hFile, data_buffer, ldi->size, &len))
    {
        nvram_ut_trace("[NVUT] normal_boot_importantl4_altered_read(): read test LID fail!\n\r");
        return KAL_FALSE;
    }

    data_buffer[0] += 1;
    data_buffer[1] += 1;
    data_buffer[2] += 1;
    if(FS_NO_ERROR > FS_Seek(hFile, NVRAM_LDI_HEADER_SIZE, FS_FILE_BEGIN)) //skip LID header
    {
        nvram_ut_trace("[NVUT] normal_boot_importantl4_altered_read(): FS_Seek test LID fail!\n\r");
        return KAL_FALSE;
    }

    if(FS_NO_ERROR > FS_Write(hFile, data_buffer, ldi->size, &len))
    {
        nvram_ut_trace("[NVUT] normal_boot_importantl4_altered_read(): write back test LID fail!\n\r");
        return KAL_FALSE;
    }
    
    if(hFile > FS_NO_ERROR)
    {
        FS_Close(hFile);
    }

    //reset SYS LID to default value
    if(!nvram_external_reset_data(NVRAM_EF_SW_VERNO_LID, SW_VERNO_RECORD_NUMBER, 1))
    {
        nvram_ut_trace("[NVUT] normal_boot_importantl4_altered_read(): reset SYS LID fail!\n\r");
        return KAL_FALSE;
    }

    //call nvram_init()
    nvram_boot_trace = 0;
    nvram_init();
    if(!(nvram_boot_trace & BOOT_TRACE_SW_VERNO_COMPATIBLE))
    {
        nvram_ut_trace("[NVUT] normal_boot_importantl4_altered_read(): enter version conflict fail!\n\r");
        return KAL_FALSE;
    }

    //lid access, without FATAL_ASSET will run reset flow
    nvram_ut_assert_flag = 0;
    if(0 != nvram_lid_cmpt_operation(NVRAM_EF_NVRAM_TEST_6_LID,
                                     CMPT_OP_FLAG_GEN(CMPT_OP_FLAG_READ, 0, 0, 0),
                                     CMPT_OP_WAY_API, 1, NVRAM_EF_TEST_LID_RECORD_TOTAL))
    {
        nvram_ut_trace("[NVUT] normal_boot_importantl4_altered_read(): read fail happen!\n\r");
        return KAL_FALSE;
    }
    if(0 != nvram_ut_assert_flag)
    {
        nvram_ut_trace("[NVUT] normal_boot_importantl4_altered_read(): unexpect assert happen!\n\r");
        return KAL_FALSE;
    }

    return KAL_TRUE;
    
}

kal_bool normal_boot_importantl4_altered_write(kal_uint32 flags, void *param)
{
    nvram_ltable_entry_struct *ldi = NULL;
    kal_wchar filename[NVRAM_MAX_PATH_LEN];
    nvram_folder_enum folder_index;
    NVRAM_FILE_NAME nvramname;
    FS_HANDLE hFile = 0;
    kal_uint32 len;
    
    //reset test LIDs to default settings
    if( !reset_test_lid_default_setting(NVRAM_EF_NVRAM_TEST_6_LID) )
    {
        nvram_ut_trace("[NVUT] normal_boot_importantl4_altered_write(): reset test LID settings fail!\n\r");
    }

    //this test will use LID verno "000" only
    if( !delete_special_version_lid(NVRAM_EF_NVRAM_TEST_6_LID, 0, 0) )
    {
        nvram_ut_trace("[NVUT] normal_boot_importantl4_altered_write(): delete test LID fail!\n\r");
    }

    //reset(create) test LID
    nvram_util_get_data_item(&ldi, NVRAM_EF_NVRAM_TEST_6_LID);
    if( !nvram_reset_data_items(NVRAM_RESET_CERTAIN, NVRAM_APP_RESERVED, ldi, 1, ldi->total_records) )
    {
        nvram_ut_trace("[NVUT] normal_boot_importantl4_altered_write(): reset test LID fail!\n\r");
        return KAL_FALSE;
    }

    //alter test LID
    folder_index = nvram_query_folder_index(ldi->category);
    nvram_util_make_lid_filename(ldi, nvramname, KAL_TRUE);
    nvram_query_file_name(folder_index, nvramname, filename);
    hFile = FS_Open((const kal_wchar*)filename, FS_READ_WRITE | FS_OPEN_NO_DIR | FS_OPEN_SHARED);
    if (hFile == FS_FILE_NOT_FOUND)
    {
        nvram_ut_trace("[NVUT] normal_boot_importantl4_altered_write(): can not find test LID!\n\r");
        return KAL_FALSE;
    }
    else if (hFile <= FS_NO_ERROR)
    {
        nvram_ut_trace("[NVUT] normal_boot_importantl4_altered_write(): open test LID fail!\n\r");
        return KAL_FALSE;
    }

    if(FS_NO_ERROR > FS_Seek(hFile, NVRAM_LDI_HEADER_SIZE, FS_FILE_BEGIN)) //skip LID header
    {
        nvram_ut_trace("[NVUT] normal_boot_importantl4_altered_write(): first FS_Seek test LID fail!\n\r");
        return KAL_FALSE;
    }
    
    if(FS_NO_ERROR > FS_Read(hFile, data_buffer, ldi->size, &len))
    {
        nvram_ut_trace("[NVUT] normal_boot_importantl4_altered_write(): read test LID fail!\n\r");
        return KAL_FALSE;
    }

    data_buffer[0] += 1;
    data_buffer[1] += 1;
    data_buffer[2] += 1;
    if(FS_NO_ERROR > FS_Seek(hFile, NVRAM_LDI_HEADER_SIZE, FS_FILE_BEGIN)) //skip LID header
    {
        nvram_ut_trace("[NVUT] normal_boot_importantl4_altered_write(): FS_Seek test LID fail!\n\r");
        return KAL_FALSE;
    }

    if(FS_NO_ERROR > FS_Write(hFile, data_buffer, ldi->size, &len))
    {
        nvram_ut_trace("[NVUT] normal_boot_importantl4_altered_write(): write back test LID fail!\n\r");
        return KAL_FALSE;
    }
    
    if(hFile > FS_NO_ERROR)
    {
        FS_Close(hFile);
    }

    //reset SYS LID to default value
    if(!nvram_external_reset_data(NVRAM_EF_SW_VERNO_LID, SW_VERNO_RECORD_NUMBER, 1))
    {
        nvram_ut_trace("[NVUT] normal_boot_importantl4_altered_write(): reset SYS LID fail!\n\r");
        return KAL_FALSE;
    }

    //call nvram_init()
    nvram_boot_trace = 0;
    nvram_init();
    if(!(nvram_boot_trace & BOOT_TRACE_SW_VERNO_COMPATIBLE))
    {
        nvram_ut_trace("[NVUT] normal_boot_importantl4_altered_write(): enter version conflict fail!\n\r");
        return KAL_FALSE;
    }

    //lid access
    nvram_ut_assert_flag = 0;
    if(0 != nvram_lid_cmpt_operation(NVRAM_EF_NVRAM_TEST_6_LID,
                                     CMPT_OP_FLAG_GEN(CMPT_OP_FLAG_WRITE, 0, 0, 0),
                                     CMPT_OP_WAY_API, 1, NVRAM_EF_TEST_LID_RECORD_TOTAL))
    {
        nvram_ut_trace("[NVUT] normal_boot_importantl4_altered_write(): nvram_lid_cmpt_operation() fail!\n\r");
        return KAL_FALSE;
    }
    if(nvram_ut_assert_flag)
    {
        nvram_ut_trace("[NVUT] normal_boot_importantl4_altered_write(): unexpect assert happen!\n\r");
        return KAL_FALSE;
    }

    return KAL_TRUE;
    
}

kal_bool normal_boot_importantl4_altered_reset(kal_uint32 flags, void *param)
{
    nvram_ltable_entry_struct *ldi = NULL;
    kal_wchar filename[NVRAM_MAX_PATH_LEN];
    nvram_folder_enum folder_index;
    NVRAM_FILE_NAME nvramname;
    FS_HANDLE hFile = 0;
    kal_uint32 len;
    
    //reset test LIDs to default settings
    if( !reset_test_lid_default_setting(NVRAM_EF_NVRAM_TEST_6_LID) )
    {
        nvram_ut_trace("[NVUT] normal_boot_importantl4_altered_reset(): reset test LID settings fail!\n\r");
    }

    //this test will use LID verno "000" only
    if( !delete_special_version_lid(NVRAM_EF_NVRAM_TEST_6_LID, 0, 0) )
    {
        nvram_ut_trace("[NVUT] normal_boot_importantl4_altered_reset(): delete test LID fail!\n\r");
    }

    //reset(create) test LID
    nvram_util_get_data_item(&ldi, NVRAM_EF_NVRAM_TEST_6_LID);
    if( !nvram_reset_data_items(NVRAM_RESET_CERTAIN, NVRAM_APP_RESERVED, ldi, 1, ldi->total_records) )
    {
        nvram_ut_trace("[NVUT] normal_boot_importantl4_altered_reset(): reset test LID fail!\n\r");
        return KAL_FALSE;
    }

    //alter test LID
    folder_index = nvram_query_folder_index(ldi->category);
    nvram_util_make_lid_filename(ldi, nvramname, KAL_TRUE);
    nvram_query_file_name(folder_index, nvramname, filename);
    hFile = FS_Open((const kal_wchar*)filename, FS_READ_WRITE | FS_OPEN_NO_DIR | FS_OPEN_SHARED);
    if (hFile == FS_FILE_NOT_FOUND)
    {
        nvram_ut_trace("[NVUT] normal_boot_importantl4_altered_reset(): can not find test LID!\n\r");
        return KAL_FALSE;
    }
    else if (hFile <= FS_NO_ERROR)
    {
        nvram_ut_trace("[NVUT] normal_boot_importantl4_altered_reset(): open test LID fail!\n\r");
        return KAL_FALSE;
    }

    if(FS_NO_ERROR > FS_Seek(hFile, NVRAM_LDI_HEADER_SIZE, FS_FILE_BEGIN)) //skip LID header
    {
        nvram_ut_trace("[NVUT] normal_boot_importantl4_altered_reset(): first FS_Seek test LID fail!\n\r");
        return KAL_FALSE;
    }
    
    if(FS_NO_ERROR > FS_Read(hFile, data_buffer, ldi->size, &len))
    {
        nvram_ut_trace("[NVUT] normal_boot_importantl4_altered_reset(): read test LID fail!\n\r");
        return KAL_FALSE;
    }

    data_buffer[0] += 1;
    data_buffer[1] += 1;
    data_buffer[2] += 1;
    if(FS_NO_ERROR > FS_Seek(hFile, NVRAM_LDI_HEADER_SIZE, FS_FILE_BEGIN)) //skip LID header
    {
        nvram_ut_trace("[NVUT] normal_boot_importantl4_altered_reset(): FS_Seek test LID fail!\n\r");
        return KAL_FALSE;
    }

    if(FS_NO_ERROR > FS_Write(hFile, data_buffer, ldi->size, &len))
    {
        nvram_ut_trace("[NVUT] normal_boot_importantl4_altered_reset(): write back test LID fail!\n\r");
        return KAL_FALSE;
    }
    
    if(hFile > FS_NO_ERROR)
    {
        FS_Close(hFile);
    }

    //reset SYS LID to default value
    if(!nvram_external_reset_data(NVRAM_EF_SW_VERNO_LID, SW_VERNO_RECORD_NUMBER, 1))
    {
        nvram_ut_trace("[NVUT] normal_boot_importantl4_altered_reset(): reset SYS LID fail!\n\r");
        return KAL_FALSE;
    }

    //call nvram_init()
    nvram_boot_trace = 0;
    nvram_init();
    if(!(nvram_boot_trace & BOOT_TRACE_SW_VERNO_COMPATIBLE))
    {
        nvram_ut_trace("[NVUT] normal_boot_importantl4_altered_reset(): enter version conflict fail!\n\r");
        return KAL_FALSE;
    }

    //lid access
    nvram_ut_assert_flag = 0;
    if(0 != nvram_lid_cmpt_operation(NVRAM_EF_NVRAM_TEST_6_LID,
                                     CMPT_OP_FLAG_GEN(CMPT_OP_FLAG_RESET, 0, 0, 0),
                                     CMPT_OP_WAY_API, 1, NVRAM_EF_TEST_LID_RECORD_TOTAL))
    {
        nvram_ut_trace("[NVUT] normal_boot_importantl4_altered_reset(): nvram_lid_cmpt_operation() fail!\n\r");
        return KAL_FALSE;
    }
    if(nvram_ut_assert_flag)
    {
        nvram_ut_trace("[NVUT] normal_boot_importantl4_altered_reset(): unexpect assert happen!\n\r");
        return KAL_FALSE;
    }

    return KAL_TRUE;
    
}

kal_bool normal_boot_read_syslid_fail(kal_uint32 flags, void *param)
{
    nvram_ltable_entry_struct *ldi = NULL;
    kal_wchar filename[NVRAM_MAX_PATH_LEN];
    kal_uint8 *default_value;
    nvram_folder_enum folder_index;
    NVRAM_FILE_NAME nvramname;
    kal_uint8 i, temp_result;
    
    //reset test LIDs to default settings
    for(i = 0; i < test_lid_number; i++)
    {
        if(!reset_test_lid_default_setting(test_lid_enum[i]))
        {
            nvram_ut_trace("[NVUT] normal_boot_read_syslid_fail(): reset LIDs to default setting fail!\n\r");
            return KAL_FALSE;
        }
    }

    //this test will use LID verno "000" only
    for(i = 0; i < test_lid_number; i++)
    {
        if(!delete_special_version_lid(test_lid_enum[i], 0, 0))
        {
            nvram_ut_trace("[NVUT] normal_boot_read_syslid_fail(): delete old version LID fail!\n\r");
            return KAL_FALSE;
        }
    }

    //reset(create) test LIDs
    for(i = 0; i < test_lid_number; i++)
    {
        nvram_util_get_data_item(&ldi, test_lid_enum[i]);
        if(!nvram_reset_data_items(NVRAM_RESET_CERTAIN, NVRAM_APP_RESERVED, ldi, 1, ldi->total_records))
        {
            nvram_ut_trace("[NVUT] normal_boot_read_syslid_fail(): reset test LID fail!\n\r");
            return KAL_FALSE;
        }
    }

    //write test LID with non-default value
    data_buffer[0] = 0x01;
    data_buffer[1] = 0x02;
    data_buffer[2] = 0x03;
    for(i = 0; i < test_lid_number; i++)
    {
        if(!nvram_external_write_data(test_lid_enum[i], 1, (kal_uint8 *)data_buffer, NVRAM_EF_TEST_LID_SIZE))
        {
            nvram_ut_trace("[NVUT] normal_boot_read_syslid_fail(): write test LID fail!\n\r");
            return KAL_FALSE;
        }
    }

    //delete SYS LID
    nvram_util_get_data_item(&ldi, NVRAM_EF_SW_VERNO_LID);
    folder_index = nvram_query_folder_index(ldi->category);
    nvram_util_make_lid_filename(ldi, nvramname, KAL_TRUE);
    nvram_query_file_name(folder_index, nvramname, filename);
    FS_Delete(filename); //here do not update bitmap
    if(ldi->attr & NVRAM_ATTR_MULTIPLE)
    {
        nvram_util_make_lid_filename(ldi, nvramname, KAL_FALSE); //B file
        nvram_query_file_name(folder_index, nvramname, filename);
        FS_Delete(filename);
    }

    //call nvram_init()
    nvram_boot_trace = 0;
    nvram_init();
    if(!(nvram_boot_trace & BOOT_TRACE_READ_SYS_LID_FAIL))
    {
        nvram_ut_trace("[NVUT] normal_boot_read_syslid_fail(): read SYS LID fail not happen!\n\r");
        return KAL_FALSE;
    }

    //lid access
    default_value = (kal_uint8*)get_ctrl_buffer(NVRAM_EF_TEST_LID_SIZE);
    for(i = 0; i < test_lid_number; i++)
    {
        temp_result = nvram_external_read_data(test_lid_enum[i], 1, (kal_uint8 *)cmp_buffer, NVRAM_EF_TEST_LID_SIZE);
        if(!temp_result)
        {
            nvram_ut_trace("[NVUT] normal_boot_read_syslid_fail(): read test LID fail!\n\r");
            break;
        }
        
        if((NVRAM_EF_NVRAM_TEST_1_LID == test_lid_enum[i]) ||
           (NVRAM_EF_NVRAM_TEST_2_LID == test_lid_enum[i]) )
        {
            nvram_util_get_data_item(&ldi, test_lid_enum[i]);
            nvram_get_default_value_to_write(ldi, i, default_value, NVRAM_EF_TEST_LID_SIZE);
            temp_result = !(kal_mem_cmp((kal_char*)default_value, (kal_char*)cmp_buffer, NVRAM_EF_TEST_LID_SIZE));
        }
        else
        {
            temp_result = !(kal_mem_cmp((kal_char*)data_buffer, (kal_char*)cmp_buffer, NVRAM_EF_TEST_LID_SIZE));
        }
        
        if(!temp_result)
        {
            nvram_ut_trace("[NVUT] normal_boot_read_syslid_fail(): read back value is not expect!\n\r");
            break;
        }
    }
    free_ctrl_buffer(default_value);
    
    if(i < test_lid_number)
    {
        nvram_ut_trace("[NVUT] normal_boot_read_syslid_fail(): read back value not as expect!\n\r");
        return KAL_FALSE;
    }

    return KAL_TRUE;
    
}

kal_bool attr_average_basic_access(kal_uint32 flags, void *param)
{
    nvram_ltable_entry_struct *ldi = NULL;
    
    //reset test LIDs to default settings
    if( !reset_test_lid_default_setting(NVRAM_EF_NVRAM_TEST_1_LID) )
    {
        nvram_ut_trace("[NVUT] attr_average_basic_access(): reset test LID settings fail!\n\r");
    }

    nvram_util_get_data_item(&ldi, NVRAM_EF_NVRAM_TEST_1_LID);
    ldi->attr = NVRAM_ATTR_AVERAGE;

    //this test will use LID verno "000" only
    if( !delete_special_version_lid(NVRAM_EF_NVRAM_TEST_1_LID, 0, 0) )
    {
        nvram_ut_trace("[NVUT] attr_average_basic_access(): delete test LID fail!\n\r");
    }

    //reset test LID to default value
    if( !nvram_reset_data_items(NVRAM_RESET_CERTAIN, NVRAM_APP_RESERVED, ldi, 1, ldi->total_records) )
    {
        nvram_ut_trace("[NVUT] attr_average_basic_access(): reset test LID fail!\n\r");
        return KAL_FALSE;
    }

    //lid access
    nvram_ut_assert_flag = 0;
    if(0 != nvram_lid_cmpt_operation(NVRAM_EF_NVRAM_TEST_1_LID,
                                     CMPT_OP_FLAG_GEN(CMPT_OP_FLAG_READBACK, CMPT_OP_FLAG_WRITE, CMPT_OP_FLAG_RESET, 0),
                                     CMPT_OP_WAY_API, 1, NVRAM_EF_TEST_LID_RECORD_TOTAL))
    {
        nvram_ut_trace("[NVUT] attr_average_basic_access(): nvram_lid_cmpt_operation() fail!\n\r");
        return KAL_FALSE;
    }
    if(nvram_ut_assert_flag)
    {
        nvram_ut_trace("[NVUT] attr_average_basic_access(): unexpect assert happen!\n\r");
        return KAL_FALSE;
    }

    return KAL_TRUE;
    
}

kal_bool attr_multi_default_read_basic_access(kal_uint32 flags, void *param)
{
    nvram_ltable_entry_struct *ldi = NULL;
    kal_uint8 *p_buffer;
    nvram_read_req_struct *read_req;
    //nvram_read_cnf_struct *nvram_read_cnf;
    ilm_struct current_ilm;
    kal_uint8 i;
    kal_uint8 temp_result;
    
    //reset test LIDs to default settings
    if( !reset_test_lid_default_setting(NVRAM_EF_NVRAM_TEST_1_LID) )
    {
        nvram_ut_trace("[NVUT] attr_multi_default_read_basic_access(): reset test LID settings fail!\n\r");
    }
    
    nvram_util_get_data_item(&ldi, NVRAM_EF_NVRAM_TEST_1_LID);
    //this test will use LID verno "000" only
    if( !delete_special_version_lid(NVRAM_EF_NVRAM_TEST_1_LID, 0, 0) )
    {
        nvram_ut_trace("[NVUT] attr_multi_default_read_basic_access(): delete test LID fail!\n\r");
    }
    
    for(i = 0; i < ldi->total_records; i++)
    {
        data_buffer[ldi->size * i] = i+1; //modify data_buffer to special value
    }
    ldi->default_value = (kal_uint8 const*)data_buffer;
    ldi->attr = NVRAM_ATTR_MULTI_DEFAULT | NVRAM_ATTR_MULTIREC_READ;
    
    //reset test LID to default value
    if( !nvram_reset_data_items(NVRAM_RESET_CERTAIN, NVRAM_APP_RESERVED, ldi, 1, ldi->total_records) )
    {
        nvram_ut_trace("[NVUT] attr_multi_default_read_basic_access(): reset test LID fail!\n\r");
        return KAL_FALSE;
    }

    //lid access
    read_req = (nvram_read_req_struct *)construct_local_para(sizeof(nvram_read_req_struct), TD_CTRL);
    read_req->ref_count = 1;
    read_req->file_idx = ldi->LID;
    read_req->para = 1;
    read_req->rec_amount = ldi->total_records;
    msg_send6(kal_get_active_module_id(), MOD_NVRAM, PS_NVRAM_SAP, MSG_ID_NVRAM_READ_REQ, 
            (local_para_struct*)read_req, NULL);    
    msg_receive_extq(&current_ilm);
    p_buffer = (kal_uint8 *)get_peer_buff_pdu(current_ilm.peer_buff_ptr, 0);
    temp_result = kal_mem_cmp(data_buffer, p_buffer, ldi->size * ldi->total_records);
    destroy_ilm(&current_ilm);
    
    if(0 != temp_result)
    {
        nvram_ut_trace("[NVUT] attr_multi_default_read_basic_access(): read back value not as expect!\n\r");
        return KAL_FALSE;
    }

    nvram_ut_assert_flag = 0;
    if(0 != nvram_lid_cmpt_operation(NVRAM_EF_NVRAM_TEST_1_LID, 
                                     CMPT_OP_FLAG_GEN(CMPT_OP_FLAG_WRITE, CMPT_OP_FLAG_RESET, 0, 0), 
                                     CMPT_OP_WAY_API, 1, NVRAM_EF_TEST_LID_RECORD_TOTAL))
    {
        nvram_ut_trace("[NVUT] attr_multi_default_read_basic_access(): nvram_lid_cmpt_operation() fail!\n\r");
        return KAL_FALSE;
    }
    if(nvram_ut_assert_flag)
    {
        nvram_ut_trace("[NVUT] attr_multi_default_read_basic_access(): unexpect assert happen!\n\r");
        return KAL_FALSE;
    }

    return KAL_TRUE;
    
}

kal_bool attr_write_protect_basic_access(kal_uint32 flags, void *param)
{
    nvram_ltable_entry_struct *ldi = NULL;
    kal_uint8 lock_status;
    
    //reset test LIDs to default settings
    if( !reset_test_lid_default_setting(NVRAM_EF_NVRAM_TEST_1_LID) )
    {
        nvram_ut_trace("[NVUT] attr_write_protect_basic_access(): reset test LID settings fail!\n\r");
    }
    
    nvram_util_get_data_item(&ldi, NVRAM_EF_NVRAM_TEST_1_LID);
    //this test will use LID verno "000" only
    if( !delete_special_version_lid(NVRAM_EF_NVRAM_TEST_1_LID, 0, 0) )
    {
        nvram_ut_trace("[NVUT] attr_write_protect_basic_access(): delete test LID fail!\n\r");
    }

    //reset test LID to default value
    if( !nvram_reset_data_items(NVRAM_RESET_CERTAIN, NVRAM_APP_RESERVED, ldi, 1, ldi->total_records) )
    {
        nvram_ut_trace("[NVUT] attr_write_protect_basic_access(): reset test LID fail!\n\r");
        return KAL_FALSE;
    }
    nvram_get_default_value_to_write(ldi, 1, (kal_uint8 *)data_buffer, ldi->size);
    
    ldi->attr |= NVRAM_ATTR_WRITEPROTECT;
    ldi->default_value = NVRAM_EF_FF_DEFAULT; //modify test LID's default value

    //lid read
    if( !nvram_external_read_data(ldi->LID, 1, (kal_uint8 *)cmp_buffer, ldi->size) )
    {
        nvram_ut_trace("[NVUT] attr_write_protect_basic_access(): first read test LID fail!\n\r");
        return KAL_FALSE;
    }
    
    if(0 != kal_mem_cmp(data_buffer, cmp_buffer, ldi->size))
    {
        nvram_ut_trace("[NVUT] attr_write_protect_basic_access(): first read not as expect!\n\r");
        return KAL_FALSE;
    }
    //lid write
    lock_status = nvram_ptr->lock;
    nvram_ptr->lock = KAL_TRUE;
    cmp_buffer[0] = 0x30;
    if( KAL_TRUE == nvram_external_write_data(ldi->LID, 1, (kal_uint8 *)cmp_buffer, ldi->size) )
    {
        nvram_ut_trace("[NVUT] attr_write_protect_basic_access(): write fail not happen!\n\r");
        return KAL_FALSE;
    }

    if( !nvram_external_read_data(ldi->LID, 1, (kal_uint8 *)cmp_buffer, ldi->size) )
    {
        nvram_ut_trace("[NVUT] attr_write_protect_basic_access(): second read test LID fail!\n\r");
        return KAL_FALSE;
    }
    
    if(0 != kal_mem_cmp(data_buffer, cmp_buffer, ldi->size))
    {
        nvram_ut_trace("[NVUT] attr_write_protect_basic_access(): second read not as expect!\n\r");
        return KAL_FALSE;
    }
    //lid reset
    nvram_reset_data_items(NVRAM_RESET_CERTAIN, NVRAM_APP_RESERVED, ldi, 1, ldi->total_records);
    nvram_get_default_value_to_write(ldi, 1, (kal_uint8 *)data_buffer, ldi->size); //get new default value
    if( !nvram_external_read_data(ldi->LID, 1, (kal_uint8 *)cmp_buffer, ldi->size) )
    {
        nvram_ut_trace("[NVUT] attr_write_protect_basic_access(): third read test LID fail!\n\r");
        return KAL_FALSE;
    }
    if(0 != kal_mem_cmp(data_buffer, cmp_buffer, ldi->size))
    {
        nvram_ut_trace("[NVUT] attr_write_protect_basic_access(): third read not as expect!\n\r");
        return KAL_FALSE;
    }

    nvram_ptr->lock = lock_status;
    
    return KAL_TRUE;
    
}

kal_bool attr_multiple_basic_access(kal_uint32 flags, void *param)
{
    nvram_ltable_entry_struct *ldi = NULL;
    kal_wchar filename[NVRAM_MAX_PATH_LEN];
    nvram_folder_enum folder_index;
    NVRAM_FILE_NAME nvramname;
    
    //reset test LIDs to default settings
    if( !reset_test_lid_default_setting(NVRAM_EF_NVRAM_TEST_1_LID) )
    {
        nvram_ut_trace("[NVUT] attr_multiple_basic_access(): reset test LID settings fail!\n\r");
    }

    nvram_util_get_data_item(&ldi, NVRAM_EF_NVRAM_TEST_1_LID);
    ldi->attr = NVRAM_ATTR_MULTIPLE;

    //this test will use LID verno "000" only
    if( !delete_special_version_lid(NVRAM_EF_NVRAM_TEST_1_LID, 0, 0) )
    {
        nvram_ut_trace("[NVUT] attr_multiple_basic_access(): delete test LID fail!\n\r");
    }

    //reset test LID to default value
    if( !nvram_reset_data_items(NVRAM_RESET_CERTAIN, NVRAM_APP_RESERVED, ldi, 1, ldi->total_records) )
    {
        nvram_ut_trace("[NVUT] attr_multiple_basic_access(): reset test LID fail!\n\r");
        return KAL_FALSE;
    }
    
    //lid read
    nvram_ut_assert_flag = 0;
    if(0 != nvram_lid_cmpt_operation(NVRAM_EF_NVRAM_TEST_1_LID,
                                     CMPT_OP_FLAG_GEN(CMPT_OP_FLAG_READBACK, 0, 0, 0),
                                     CMPT_OP_WAY_API, 1, NVRAM_EF_TEST_LID_RECORD_TOTAL))
    {
        nvram_ut_trace("[NVUT] attr_multiple_basic_access(): nvram_lid_cmpt_operation() read fail!\n\r");
        return KAL_FALSE;
    }
    if(nvram_ut_assert_flag)
    {
        nvram_ut_trace("[NVUT] attr_multiple_basic_access(): unexpect read assert happen!\n\r");
        return KAL_FALSE;
    }

    //lid write
    data_buffer[0] = 0x01;
    data_buffer[1] = 0x02;
    data_buffer[2] = 0x03;
    if( !nvram_external_write_data(ldi->LID, 1, (kal_uint8 *)data_buffer, ldi->size) )
    {
        nvram_ut_trace("[NVUT] attr_multiple_basic_access(): write test LID fail!\n\r");
        return KAL_FALSE;
    }
    folder_index = nvram_query_folder_index(ldi->category);
    nvram_util_make_lid_filename(ldi, nvramname, KAL_TRUE); //A file
    nvram_query_file_name(folder_index, nvramname, filename);
    FS_Delete(filename);
    if( !nvram_external_read_data(ldi->LID, 1, (kal_uint8 *)cmp_buffer, ldi->size) )
    {
        nvram_ut_trace("[NVUT] attr_multiple_basic_access(): read test LID fail!\n\r");
        return KAL_FALSE;
    }
    if(0 != kal_mem_cmp(data_buffer, cmp_buffer, ldi->size))
    {
        nvram_ut_trace("[NVUT] attr_multiple_basic_access(): read back value not as expect!\n\r");
        return KAL_FALSE;
    }

    folder_index = nvram_query_folder_index(ldi->category);
    nvram_util_make_lid_filename(ldi, nvramname, KAL_TRUE); //B file
    nvram_query_file_name(folder_index, nvramname, filename);
    FS_Delete(filename);
    if( !nvram_external_read_data(ldi->LID, 1, (kal_uint8 *)cmp_buffer, ldi->size) )
    {
        nvram_ut_trace("[NVUT] attr_multiple_basic_access(): second read test LID fail!\n\r");
        return KAL_FALSE;
    }
    if(0 != kal_mem_cmp(data_buffer, cmp_buffer, ldi->size))
    {
        nvram_ut_trace("[NVUT] attr_multiple_basic_access(): second read back value not as expect!\n\r");
        return KAL_FALSE;
    }

    //lid reset
    nvram_ut_assert_flag = 0;
    if(0 != nvram_lid_cmpt_operation(NVRAM_EF_NVRAM_TEST_1_LID,
                                     CMPT_OP_FLAG_GEN(CMPT_OP_FLAG_RESET, 0, 0, 0),
                                     CMPT_OP_WAY_API, 1, NVRAM_EF_TEST_LID_RECORD_TOTAL))
    {
        nvram_ut_trace("[NVUT] attr_multiple_basic_access(): nvram_lid_cmpt_operation() reset fail!\n\r");
        return KAL_FALSE;
    }
    if(nvram_ut_assert_flag)
    {
        nvram_ut_trace("[NVUT] attr_multiple_basic_access(): unexpect reset assert happen!\n\r");
        return KAL_FALSE;
    }

    return KAL_TRUE;
    
}

kal_bool attr_confidential_basic_access(kal_uint32 flags, void *param)
{
    nvram_ltable_entry_struct *ldi = NULL;
    kal_wchar filename[NVRAM_MAX_PATH_LEN];
    nvram_folder_enum folder_index;
    NVRAM_FILE_NAME nvramname;
    FS_HANDLE hFile = 0;
    kal_uint32 len = 0, remainLen = 0;
    
    //reset test LIDs to default settings
    if( !reset_test_lid_default_setting(NVRAM_EF_NVRAM_TEST_1_LID) )
    {
        nvram_ut_trace("[NVUT] attr_confidential_basic_access(): reset test LID settings fail!\n\r");
    }

    nvram_util_get_data_item(&ldi, NVRAM_EF_NVRAM_TEST_1_LID);
    ldi->attr |= NVRAM_ATTR_CONFIDENTIAL;

    //this test will use LID verno "000" only
    if( !delete_special_version_lid(NVRAM_EF_NVRAM_TEST_1_LID, 0, 0) )
    {
        nvram_ut_trace("[NVUT] attr_confidential_basic_access(): delete test LID fail!\n\r");
    }

    //reset test LID to default value
    if( !nvram_reset_data_items(NVRAM_RESET_CERTAIN, NVRAM_APP_RESERVED, ldi, 1, ldi->total_records) )
    {
        nvram_ut_trace("[NVUT] attr_confidential_basic_access(): reset test LID fail!\n\r");
        return KAL_FALSE;
    }

    data_buffer[0] = 0x01;
    data_buffer[1] = 0x02;
    data_buffer[2] = 0x03;
    if( !nvram_external_write_data(ldi->LID, 1, (kal_uint8 *)data_buffer, ldi->size) )
    {
        nvram_ut_trace("[NVUT] attr_confidential_basic_access(): first write test LID fail!\n\r");
        return KAL_FALSE;
    }

    if( !nvram_external_read_data(ldi->LID, 1, (kal_uint8 *)cmp_buffer, ldi->size) )
    {
        nvram_ut_trace("[NVUT] attr_confidential_basic_access(): first read test LID fail!\n\r");
        return KAL_FALSE;
    }

    if(0 != kal_mem_cmp(data_buffer, cmp_buffer, ldi->size))
    {
        nvram_ut_trace("[NVUT] attr_confidential_basic_access(): read back value not as expect!\n\r");
        return KAL_FALSE;
    }

    folder_index = nvram_query_folder_index(ldi->category);
    nvram_util_make_lid_filename(ldi, nvramname, KAL_TRUE);
    nvram_query_file_name(folder_index, nvramname, filename);
    hFile = FS_Open((const kal_wchar*)filename, FS_READ_WRITE | FS_OPEN_NO_DIR | FS_OPEN_SHARED);
    if (hFile == FS_FILE_NOT_FOUND)
    {
        nvram_ut_trace("[NVUT] attr_confidential_basic_access(): can not find test LID!\n\r");
        return KAL_FALSE;
    }
    else if (hFile <= FS_NO_ERROR)
    {
        nvram_ut_trace("[NVUT] attr_confidential_basic_access(): open test LID fail!\n\r");
        return KAL_FALSE;
    }

    if(FS_NO_ERROR > FS_Seek(hFile, NVRAM_LDI_HEADER_SIZE, FS_FILE_BEGIN)) //skip LID header
    {
        nvram_ut_trace("[NVUT] attr_confidential_basic_access(): FS_Seek test LID fail!\n\r");
        return KAL_FALSE;
    }

    remainLen = NVRAM_MSP_ALIGNMENT_REMAINDER(ldi->size + NVRAM_CHKSUM_SIZE); //SW or HW encrpyt need align data
    if(FS_NO_ERROR > FS_Read(hFile, cmp_buffer, ldi->size + NVRAM_CHKSUM_SIZE + remainLen, &len))
    {
        nvram_ut_trace("[NVUT] attr_confidential_basic_access(): read test LID fail!\n\r");
        return KAL_FALSE;
    }

    if(hFile > FS_NO_ERROR)
    {
        FS_Close(hFile);
    }

    //expect data is changed
    if(0 == kal_mem_cmp(data_buffer, cmp_buffer, ldi->size))
    {
        nvram_ut_trace("[NVUT] attr_confidential_basic_access(): after encrypt data not change!\n\r");
        return KAL_FALSE;
    }   

    //decrypt
    nvram_AES_decrypt((kal_uint8 *)cmp_buffer, ldi->size + NVRAM_CHKSUM_SIZE + remainLen);
    if(0 != kal_mem_cmp(data_buffer, cmp_buffer, ldi->size)) //only check data part, ignore cheksum
    {
        nvram_ut_trace("[NVUT] attr_confidential_basic_access(): second read back value not as expect!\n\r");
        return KAL_FALSE;
    }
    
    return KAL_TRUE;
    
}

kal_bool attr_msp_basic_access(kal_uint32 flags, void *param)
{
#ifdef __NVRAM_BIND_TO_CHIP_CIPHER__
    nvram_ltable_entry_struct *ldi = NULL;
    kal_wchar filename[NVRAM_MAX_PATH_LEN];
    nvram_folder_enum folder_index;
    NVRAM_FILE_NAME nvramname;
    FS_HANDLE hFile = 0;
    kal_uint32 len = 0, remainLen = 0, section_size = 0;
    
    //reset test LIDs to default settings
    if( !reset_test_lid_default_setting(NVRAM_EF_NVRAM_TEST_1_LID) )
    {
        nvram_ut_trace("[NVUT] attr_msp_basic_access(): reset test LID settings fail!\n\r");
    }

    nvram_util_get_data_item(&ldi, NVRAM_EF_NVRAM_TEST_1_LID);
    ldi->attr = NVRAM_ATTR_MSP;

    //this test will use LID verno "000" only
    if( !delete_special_version_lid(NVRAM_EF_NVRAM_TEST_1_LID, 0, 0) )
    {
        nvram_ut_trace("[NVUT] attr_msp_basic_access(): delete test LID fail!\n\r");
    }

    //reset test LID to default value
    if( !nvram_reset_data_items(NVRAM_RESET_CERTAIN, NVRAM_APP_RESERVED, ldi, 1, ldi->total_records) )
    {
        nvram_ut_trace("[NVUT] attr_msp_basic_access(): reset test LID fail!\n\r");
        return KAL_FALSE;
    }

    data_buffer[0] = 0x01;
    data_buffer[1] = 0x02;
    data_buffer[2] = 0x03;
    if( !nvram_external_write_data(ldi->LID, 1, (kal_uint8 *)data_buffer, ldi->size) )
    {
        nvram_ut_trace("[NVUT] attr_msp_basic_access(): write test LID fail!\n\r");
        return KAL_FALSE;
    }

    if( !nvram_external_read_data(ldi->LID, 1, (kal_uint8 *)cmp_buffer, ldi->size) )
    {
        nvram_ut_trace("[NVUT] attr_msp_basic_access(): read test LID fail!\n\r");
        return KAL_FALSE;
    }

    if(0 != kal_mem_cmp(data_buffer, cmp_buffer, ldi->size))
    {
        nvram_ut_trace("[NVUT] attr_msp_basic_access(): first read not as expect!\n\r");
        return KAL_FALSE;
    }

    folder_index = nvram_query_folder_index(ldi->category);
    nvram_util_make_lid_filename(ldi, nvramname, KAL_TRUE);
    nvram_query_file_name(folder_index, nvramname, filename);
    hFile = FS_Open((const kal_wchar*)filename, FS_READ_WRITE | FS_OPEN_NO_DIR | FS_OPEN_SHARED);
    if (hFile == FS_FILE_NOT_FOUND)
    {
        nvram_ut_trace("[NVUT] attr_msp_basic_access(): can not find test LID!\n\r");
        return KAL_FALSE;
    }
    else if (hFile <= FS_NO_ERROR)
    {
        nvram_ut_trace("[NVUT] attr_msp_basic_access(): open test LID fail!\n\r");
        return KAL_FALSE;
    }

    if(FS_NO_ERROR > FS_Seek(hFile, NVRAM_LDI_HEADER_SIZE, FS_FILE_BEGIN)) //skip LID header
    {
        nvram_ut_trace("[NVUT] attr_msp_basic_access(): FS_Seek test LID fail!\n\r");
        return KAL_FALSE;
    }

    remainLen = NVRAM_MSP_ALIGNMENT_REMAINDER(ldi->size + NVRAM_CHKSUM_SIZE); //SW or HW encrpyt need align data        
    section_size = ldi->size + NVRAM_CHKSUM_SIZE + remainLen;
    if(FS_NO_ERROR > FS_Read(hFile, cmp_buffer, section_size, &len))
    {
        nvram_ut_trace("[NVUT] attr_msp_basic_access(): FS_Read test LID fail!\n\r");
        return KAL_FALSE;
    }

    if(hFile > FS_NO_ERROR)
    {
        FS_Close(hFile);
    }

    //expect after HW encrypt data is changed
    if(0 == kal_mem_cmp(data_buffer, cmp_buffer, ldi->size))
    {
        nvram_ut_trace("[NVUT] attr_msp_basic_access(): after encrypt data not change!\n\r");
        return KAL_FALSE;
    }

    //decrypt
    {
        kal_uint8 *working_buffer2 = (kal_uint8*) get_ctrl_buffer(section_size);
        kal_uint8 *working_buffer3 = (kal_uint8*) get_ctrl_buffer(section_size);
        memcpy(working_buffer2, cmp_buffer, section_size);
        do
        {
            //decrypt the cmp_buffer
            SST_Secure_Algo(NVRAM_MSP_DECRYPT, (kal_uint32) (cmp_buffer), section_size, nvram_ptr->secret_key, (kal_uint8 *)cmp_buffer);
            //copy decrypted data from working_buffer to working_buffer3
            memcpy(working_buffer3, cmp_buffer, section_size);
            //encrypt the working_buffer3
            SST_Secure_Algo(NVRAM_MSP_ENCRYPT, (kal_uint32)working_buffer3, section_size, nvram_ptr->secret_key, working_buffer3);

            //compare the working_buffer2 & working_buffer3
            if (memcmp(working_buffer2, working_buffer3, section_size) == 0)
            {
                //decrypt PASS
                break;
            }
            else
            {
                //decrypt FAIL, try again
                memcpy(cmp_buffer, working_buffer2, section_size);
            }
        }while(1);
        free_ctrl_buffer(working_buffer2);
        free_ctrl_buffer(working_buffer3);
    }

    //after decrypt expect data is same
    if(0 != kal_mem_cmp(data_buffer, cmp_buffer, ldi->size))
    {
        nvram_ut_trace("[NVUT] attr_msp_basic_access(): second read not as expect!\n\r");
        return KAL_FALSE;
    }
    
    return KAL_TRUE;
#else

    nvram_ut_trace("[NVUT] attr_msp_basic_access(): HW encrypt is not enable!\n\r");
    return KAL_TRUE;
    
#endif
    
}

kal_bool attr_committed_basic_access(kal_uint32 flags, void *param)
{
    nvram_ltable_entry_struct *ldi = NULL;
    
    //reset test LIDs to default settings
    if( !reset_test_lid_default_setting(NVRAM_EF_NVRAM_TEST_1_LID) )
    {
        nvram_ut_trace("[NVUT] attr_committed_basic_access(): reset test LID settings fail!\n\r");
    }

    nvram_util_get_data_item(&ldi, NVRAM_EF_NVRAM_TEST_1_LID);
    ldi->attr = NVRAM_ATTR_COMMITTED;

    //this test will use LID verno "000" only
    if( !delete_special_version_lid(NVRAM_EF_NVRAM_TEST_1_LID, 0, 0) )
    {
        nvram_ut_trace("[NVUT] attr_committed_basic_access(): delete test LID fail!\n\r");
    }

    //reset test LID to default value
    if( !nvram_reset_data_items(NVRAM_RESET_CERTAIN, NVRAM_APP_RESERVED, ldi, 1, ldi->total_records) )
    {
        nvram_ut_trace("[NVUT] attr_committed_basic_access(): reset test LID fail!\n\r");
        return KAL_FALSE;
    }

    //lid access
    nvram_ut_assert_flag = 0;
    if(0 != nvram_lid_cmpt_operation(NVRAM_EF_NVRAM_TEST_1_LID,
                                     CMPT_OP_FLAG_GEN(CMPT_OP_FLAG_READBACK, CMPT_OP_FLAG_WRITE, CMPT_OP_FLAG_RESET, 0),
                                     CMPT_OP_WAY_API, 1, NVRAM_EF_TEST_LID_RECORD_TOTAL))
    {
        nvram_ut_trace("[NVUT] attr_committed_basic_access(): nvram_lid_cmpt_operation() fail!\n\r");
        return KAL_FALSE;
    }
    if(nvram_ut_assert_flag)
    {
        nvram_ut_trace("[NVUT] attr_committed_basic_access(): unexpect assert happen!\n\r");
        return KAL_FALSE;
    }

    return KAL_TRUE;
    
}

kal_bool attr_ring_basic_access(kal_uint32 flags, void *param)
{
    nvram_ltable_entry_struct *ldi = NULL;
    nvram_write_req_struct *write_req;
    nvram_write_cnf_struct *nvram_write_cnf;
    kal_uint8 *pdu_write_buffer;
    ilm_struct current_ilm;
    kal_uint8 i;
    kal_uint8 temp_result;
    
    //reset test LIDs to default settings
    if( !reset_test_lid_default_setting(NVRAM_EF_NVRAM_TEST_1_LID) )
    {
        nvram_ut_trace("[NVUT] attr_ring_basic_access(): reset test LID settings fail!\n\r");
    }

    nvram_util_get_data_item(&ldi, NVRAM_EF_NVRAM_TEST_1_LID);
    ldi->attr = NVRAM_ATTR_RING;
    ldi->total_records = 3;

    //this test will use LID verno "000" only
    if( !delete_special_version_lid(NVRAM_EF_NVRAM_TEST_1_LID, 0, 0) )
    {
        nvram_ut_trace("[NVUT] attr_ring_basic_access(): delete test LID fail!\n\r");
    }

    //reset test LID to default value
    if( !nvram_reset_data_items(NVRAM_RESET_CERTAIN, NVRAM_APP_RESERVED, ldi, 1, ldi->total_records) )
    {
        nvram_ut_trace("[NVUT] attr_ring_basic_access(): reset test LID fail!\n\r");
        return KAL_FALSE;
    }

    //write LID
    data_buffer[0] = 0x31;
    data_buffer[1] = 0x32;
    data_buffer[2] = 0x33;
    for(i = 1; i <= ldi->total_records; i++)
    {
        write_req = (nvram_write_req_struct *)construct_local_para(sizeof(nvram_write_req_struct), TD_CTRL);
        pdu_write_buffer = (kal_uint8 *)construct_peer_buff(ldi->size, 0, 0, TD_CTRL);
        kal_mem_cpy(get_peer_buff_pdu((peer_buff_struct*)pdu_write_buffer, 0), data_buffer, ldi->size);
        write_req->ref_count = 1;
        write_req->file_idx = ldi->LID;
        write_req->para = i;
        msg_send6(kal_get_active_module_id(), MOD_NVRAM, PS_NVRAM_SAP, MSG_ID_NVRAM_WRITE_REQ, 
                (local_para_struct*)write_req, (peer_buff_struct*)pdu_write_buffer);
        msg_receive_extq(&current_ilm);
        nvram_write_cnf = (nvram_write_cnf_struct*)current_ilm.local_para_ptr;
        temp_result = nvram_write_cnf->result;
        destroy_ilm(&current_ilm);
        if(NVRAM_ERRNO_SUCCESS != temp_result)
        {
            break;
        }
    }

    if(i <= ldi->total_records)
    {
        nvram_ut_trace("[NVUT] attr_ring_basic_access(): ring write test LID fail!\n\r");
        return KAL_FALSE;
    }

    //check LID value
    for(i = 1; i <= ldi->total_records; i++)
    {
        if( !nvram_external_read_data(ldi->LID, i, (kal_uint8 *)cmp_buffer, ldi->size) )
        {
            nvram_ut_trace("[NVUT] attr_ring_basic_access(): read test LID fail!\n\r");
            return KAL_FALSE;
        }

        if(1 == i)
        {
            if(cmp_buffer[0] != 0x2) //last write record is stored in cmp_buffer[0]
            {
                nvram_ut_trace("[NVUT] attr_ring_basic_access(): record 1 read back value is not expect!\n\r");
                return KAL_FALSE;
            }
        }
        else
        {
            if(0 != kal_mem_cmp(cmp_buffer, data_buffer, ldi->size)) //expect same
            {
                nvram_ut_trace("[NVUT] attr_ring_basic_access(): read back value is not expect!\n\r");
                return KAL_FALSE;
            }
        }
    }

    return KAL_TRUE;
    
}

/*
Because IMPORTANT/IMPORTANT_L4 access error will cause assert defaultly, so NVRAM_ATTR_FAULT_ASSERT
is mainly used for some LIDs without IMPORTANT/IMPORTANT_L4 category. So in this case we just test other
categories with this attribute.
*/
kal_bool attr_fault_assert_test(kal_uint32 flags, void *param)
{
    nvram_ltable_entry_struct *ldi = NULL;
    kal_uint32 category_list[] = {
                                  NVRAM_CATEGORY_USER, NVRAM_CATEGORY_INTERNAL, 
                                  NVRAM_CATEGORY_CALIBRAT,NVRAM_CATEGORY_IMPORTANT,
                                  NVRAM_CATEGORY_IMPORTANT_L1,NVRAM_CATEGORY_IMPORTANT_L4,
                                 };
    kal_wchar filename[NVRAM_MAX_PATH_LEN];
    nvram_folder_enum folder_index;
    NVRAM_FILE_NAME nvramname;
    kal_uint8 i;

    for(i = 0; i < sizeof(category_list)/sizeof(kal_uint32); i++)
    {
        //reset test LIDs to default settings
        if( !reset_test_lid_default_setting(NVRAM_EF_NVRAM_TEST_1_LID) )
        {
            nvram_ut_trace("[NVUT] attr_fault_assert_test(): reset test LID settings fail!\n\r");
        }
        nvram_util_get_data_item(&ldi, NVRAM_EF_NVRAM_TEST_1_LID);
        ldi->category = (nvram_category_enum)(category_list[i]);
        ldi->attr |= NVRAM_ATTR_FAULT_ASSERT;
        ldi->attr &= ~NVRAM_ATTR_MULTIPLE;

        if(NVRAM_IS_CATEGORY_IN_BIN_REGION(ldi->category))
        {
            ldi->fileverno[0]++; //change filename not same with binregion backup file
        }
        
        //reset test LID to default value, LID default has GEN_DEFAULT attribute
        if( !nvram_reset_data_items(NVRAM_RESET_CERTAIN, NVRAM_APP_RESERVED, ldi, 1, ldi->total_records) )
        {
            nvram_ut_trace("[NVUT] attr_fault_assert_test(): reset test LID fail!\n\r");
            return KAL_FALSE;
        }

        //delete LID
        folder_index = nvram_query_folder_index(ldi->category);
        nvram_util_make_lid_filename(ldi, nvramname, KAL_TRUE);
        nvram_query_file_name(folder_index, nvramname, filename);
        FS_Delete(filename);

        //read access
        nvram_ut_assert_flag = 0;
        if(KAL_TRUE == nvram_external_read_data(ldi->LID, 1, (kal_uint8*)data_buffer, ldi->size))
        {
            nvram_ut_trace("[NVUT] attr_fault_assert_test(): read fail do not happen!\n\r");
            return KAL_FALSE;
        }
        if((0 == nvram_ut_assert_flag) && (!NVRAM_IS_CATEGORY_INTERNAL(ldi->category))) //internal category read fail only return fail status
        {
            nvram_ut_trace("[NVUT] attr_fault_assert_test(): read assert do not happen!\n\r");
            return KAL_FALSE;
        }

        //delete LID
        folder_index = nvram_query_folder_index(ldi->category);
        nvram_util_make_lid_filename(ldi, nvramname, KAL_TRUE);
        nvram_query_file_name(folder_index, nvramname, filename);
        FS_Delete(filename);

        //write access
        nvram_ut_assert_flag = 0;
        if(KAL_TRUE == nvram_external_write_data(ldi->LID, 1, (kal_uint8*)data_buffer, ldi->size))
        {
            nvram_ut_trace("[NVUT] attr_fault_assert_test(): write fail do not happen!\n\r");
            return KAL_FALSE;
        }
        if(0 == nvram_ut_assert_flag)
        {
            nvram_ut_trace("[NVUT] attr_fault_assert_test(): write assert do not happen!\n\r");
            return KAL_FALSE;
        }
        
    }

    return KAL_TRUE;
}


kal_bool category_user_basic_access(kal_uint32 flags, void *param)
{
    nvram_ltable_entry_struct *ldi = NULL;
    
    //reset test LIDs to default settings
    if( !reset_test_lid_default_setting(NVRAM_EF_NVRAM_TEST_1_LID) )
    {
        nvram_ut_trace("[NVUT] category_user_basic_access(): reset test LID settings fail!\n\r");
    }

    nvram_util_get_data_item(&ldi, NVRAM_EF_NVRAM_TEST_1_LID);
    ldi->category = NVRAM_CATEGORY_USER;

    //this test will use LID verno "000" only
    if( !delete_special_version_lid(NVRAM_EF_NVRAM_TEST_1_LID, 0, 0) )
    {
        nvram_ut_trace("[NVUT] category_user_basic_access(): delete test LID fail!\n\r");
    }

    //reset test LID to default value
    if( !nvram_reset_data_items(NVRAM_RESET_CERTAIN, NVRAM_APP_RESERVED, ldi, 1, ldi->total_records) )
    {
        nvram_ut_trace("[NVUT] category_user_basic_access(): reset test LID fail!\n\r");
        return KAL_FALSE;
    }

    //lid access
    nvram_ut_assert_flag = 0;
    if(0 != nvram_lid_cmpt_operation(NVRAM_EF_NVRAM_TEST_1_LID,
                                     CMPT_OP_FLAG_GEN(CMPT_OP_FLAG_READBACK, CMPT_OP_FLAG_WRITE, CMPT_OP_FLAG_RESET, 0),
                                     CMPT_OP_WAY_API, 1, NVRAM_EF_TEST_LID_RECORD_TOTAL))
    {
        nvram_ut_trace("[NVUT] category_user_basic_access(): nvram_lid_cmpt_operation() fail!\n\r");
        return KAL_FALSE;
    }
    if(nvram_ut_assert_flag)
    {
        nvram_ut_trace("[NVUT] category_user_basic_access(): unexpect assert happen!\n\r");
        return KAL_FALSE;
    }

    return KAL_TRUE;
    
}

kal_bool category_internal_basic_access(kal_uint32 flags, void *param)
{
    nvram_ltable_entry_struct *ldi = NULL;
    
    //reset test LIDs to default settings
    if( !reset_test_lid_default_setting(NVRAM_EF_NVRAM_TEST_1_LID) )
    {
        nvram_ut_trace("[NVUT] category_internal_basic_access(): reset test LID settings fail!\n\r");
    }

    nvram_util_get_data_item(&ldi, NVRAM_EF_NVRAM_TEST_1_LID);
    ldi->category = NVRAM_CATEGORY_INTERNAL;

    //this test will use LID verno "000" only
    if( !delete_special_version_lid(NVRAM_EF_NVRAM_TEST_1_LID, 0, 0) )
    {
        nvram_ut_trace("[NVUT] category_internal_basic_access(): delete test LID fail!\n\r");
    }

    //reset test LID to default value
    if( !nvram_reset_data_items(NVRAM_RESET_CERTAIN, NVRAM_APP_RESERVED, ldi, 1, ldi->total_records) )
    {
        nvram_ut_trace("[NVUT] category_internal_basic_access(): reset test LID fail!\n\r");
        return KAL_FALSE;
    }

    //lid access
    nvram_ut_assert_flag = 0;
    if(0 != nvram_lid_cmpt_operation(NVRAM_EF_NVRAM_TEST_1_LID,
                                     CMPT_OP_FLAG_GEN(CMPT_OP_FLAG_READBACK, CMPT_OP_FLAG_WRITE, CMPT_OP_FLAG_RESET, 0),
                                     CMPT_OP_WAY_API, 1, NVRAM_EF_TEST_LID_RECORD_TOTAL))
    {
        nvram_ut_trace("[NVUT] category_internal_basic_access(): nvram_lid_cmpt_operation() fail!\n\r");
        return KAL_FALSE;
    }
    if(nvram_ut_assert_flag)
    {
        nvram_ut_trace("[NVUT] category_internal_basic_access(): unexpect assert happen!\n\r");
        return KAL_FALSE;
    }

    return KAL_TRUE;
    
}

kal_bool category_calibrat_basic_access(kal_uint32 flags, void *param)
{
    nvram_ltable_entry_struct *ldi = NULL;
    
    //reset test LIDs to default settings
    if( !reset_test_lid_default_setting(NVRAM_EF_NVRAM_TEST_1_LID) )
    {
        nvram_ut_trace("[NVUT] category_calibrat_basic_access(): reset test LID settings fail!\n\r");
    }

    nvram_util_get_data_item(&ldi, NVRAM_EF_NVRAM_TEST_1_LID);
    ldi->category = NVRAM_CATEGORY_CALIBRAT;

    //this test will use LID verno "000" only
    if( !delete_special_version_lid(NVRAM_EF_NVRAM_TEST_1_LID, 0, 0) )
    {
        nvram_ut_trace("[NVUT] category_calibrat_basic_access(): delete test LID fail!\n\r");
    }

    //reset test LID to default value
    if( !nvram_reset_data_items(NVRAM_RESET_CERTAIN, NVRAM_APP_RESERVED, ldi, 1, ldi->total_records) )
    {
        nvram_ut_trace("[NVUT] category_calibrat_basic_access(): reset test LID fail!\n\r");
        return KAL_FALSE;
    }

    //lid access
    nvram_ut_assert_flag = 0;
    if(0 != nvram_lid_cmpt_operation(NVRAM_EF_NVRAM_TEST_1_LID,
                                     CMPT_OP_FLAG_GEN(CMPT_OP_FLAG_READBACK, CMPT_OP_FLAG_WRITE, CMPT_OP_FLAG_RESET, 0),
                                     CMPT_OP_WAY_API, 1, NVRAM_EF_TEST_LID_RECORD_TOTAL))
    {
        nvram_ut_trace("[NVUT] category_calibrat_basic_access(): nvram_lid_cmpt_operation() fail!\n\r");
        return KAL_FALSE;
    }
    if(nvram_ut_assert_flag)
    {
        nvram_ut_trace("[NVUT] category_calibrat_basic_access(): unexpect assert happen!\n\r");
        return KAL_FALSE;
    }

    return KAL_TRUE;
    
}

kal_bool category_important_basic_access(kal_uint32 flags, void *param)
{
    nvram_ltable_entry_struct *ldi = NULL;
    
    //reset test LIDs to default settings
    if( !reset_test_lid_default_setting(NVRAM_EF_NVRAM_TEST_1_LID) )
    {
        nvram_ut_trace("[NVUT] category_important_basic_access(): reset test LID settings fail!\n\r");
    }

    nvram_util_get_data_item(&ldi, NVRAM_EF_NVRAM_TEST_1_LID);
    ldi->category = NVRAM_CATEGORY_IMPORTANT;

    //this test will use LID verno "000" only
    if( !delete_special_version_lid(NVRAM_EF_NVRAM_TEST_1_LID, 0, 0) )
    {
        nvram_ut_trace("[NVUT] category_important_basic_access(): delete test LID fail!\n\r");
    }

    //reset test LID to default value
    if( !nvram_reset_data_items(NVRAM_RESET_CERTAIN, NVRAM_APP_RESERVED, ldi, 1, ldi->total_records) )
    {
        nvram_ut_trace("[NVUT] category_important_basic_access(): reset test LID fail!\n\r");
        return KAL_FALSE;
    }

    //lid access
    nvram_ut_assert_flag = 0;
    if(0 != nvram_lid_cmpt_operation(NVRAM_EF_NVRAM_TEST_1_LID,
                                     CMPT_OP_FLAG_GEN(CMPT_OP_FLAG_READBACK, CMPT_OP_FLAG_WRITE, CMPT_OP_FLAG_RESET, 0),
                                     CMPT_OP_WAY_API, 1, NVRAM_EF_TEST_LID_RECORD_TOTAL))
    {
        nvram_ut_trace("[NVUT] category_important_basic_access(): nvram_lid_cmpt_operation() fail!\n\r");
        return KAL_FALSE;
    }
    if(nvram_ut_assert_flag)
    {
        nvram_ut_trace("[NVUT] category_important_basic_access(): unexpect assert happen!\n\r");
        return KAL_FALSE;
    }

    return KAL_TRUE;
    
}

kal_bool category_importantl1_basic_access(kal_uint32 flags, void *param)
{
    nvram_ltable_entry_struct *ldi = NULL;
    
    //reset test LIDs to default settings
    if( !reset_test_lid_default_setting(NVRAM_EF_NVRAM_TEST_1_LID) )
    {
        nvram_ut_trace("[NVUT] category_importantl1_basic_access(): reset test LID settings fail!\n\r");
    }

    nvram_util_get_data_item(&ldi, NVRAM_EF_NVRAM_TEST_1_LID);
    ldi->category = NVRAM_CATEGORY_IMPORTANT_L1;

    //this test will use LID verno "000" only
    if( !delete_special_version_lid(NVRAM_EF_NVRAM_TEST_1_LID, 0, 0) )
    {
        nvram_ut_trace("[NVUT] category_importantl1_basic_access(): delete test LID fail!\n\r");
    }

    //reset test LID to default value
    if( !nvram_reset_data_items(NVRAM_RESET_CERTAIN, NVRAM_APP_RESERVED, ldi, 1, ldi->total_records) )
    {
        nvram_ut_trace("[NVUT] category_importantl1_basic_access(): reset test LID fail!\n\r");
        return KAL_FALSE;
    }

    //lid access
    nvram_ut_assert_flag = 0;
    if(0 != nvram_lid_cmpt_operation(NVRAM_EF_NVRAM_TEST_1_LID,
                                     CMPT_OP_FLAG_GEN(CMPT_OP_FLAG_READBACK, CMPT_OP_FLAG_WRITE, CMPT_OP_FLAG_RESET, 0),
                                     CMPT_OP_WAY_API, 1, NVRAM_EF_TEST_LID_RECORD_TOTAL))
    {
        nvram_ut_trace("[NVUT] category_importantl1_basic_access(): nvram_lid_cmpt_operation() fail!\n\r");
        return KAL_FALSE;
    }
    if(nvram_ut_assert_flag)
    {
        nvram_ut_trace("[NVUT] category_importantl1_basic_access(): unexpect assert happen!\n\r");
        return KAL_FALSE;
    }

    return KAL_TRUE;
    
}

kal_bool category_importantl4_basic_access(kal_uint32 flags, void *param)
{
    nvram_ltable_entry_struct *ldi = NULL;
    
    //reset test LIDs to default settings
    if( !reset_test_lid_default_setting(NVRAM_EF_NVRAM_TEST_1_LID) )
    {
        nvram_ut_trace("[NVUT] category_importantl4_basic_access(): reset test LID settings fail!\n\r");
    }

    nvram_util_get_data_item(&ldi, NVRAM_EF_NVRAM_TEST_1_LID);
    ldi->category = NVRAM_CATEGORY_IMPORTANT_L4;

    //this test will use LID verno "000" only
    if( !delete_special_version_lid(NVRAM_EF_NVRAM_TEST_1_LID, 0, 0) )
    {
        nvram_ut_trace("[NVUT] category_importantl4_basic_access(): delete test LID fail!\n\r");
    }

    //reset test LID to default value
    if( !nvram_reset_data_items(NVRAM_RESET_CERTAIN, NVRAM_APP_RESERVED, ldi, 1, ldi->total_records) )
    {
        nvram_ut_trace("[NVUT] category_importantl4_basic_access(): reset test LID fail!\n\r");
        return KAL_FALSE;
    }

    //lid access
    nvram_ut_assert_flag = 0;
    if(0 != nvram_lid_cmpt_operation(NVRAM_EF_NVRAM_TEST_1_LID,
                                     CMPT_OP_FLAG_GEN(CMPT_OP_FLAG_READBACK, CMPT_OP_FLAG_WRITE, CMPT_OP_FLAG_RESET, 0),
                                     CMPT_OP_WAY_API, 1, NVRAM_EF_TEST_LID_RECORD_TOTAL))
    {
        nvram_ut_trace("[NVUT] category_importantl4_basic_access(): nvram_lid_cmpt_operation() fail!\n\r");
        return KAL_FALSE;
    }
    if(nvram_ut_assert_flag)
    {
        nvram_ut_trace("[NVUT] category_importantl4_basic_access(): unexpect assert happen!\n\r");
        return KAL_FALSE;
    }

    return KAL_TRUE;
    
}

kal_bool func_default_basic_access(kal_uint32 flags, void *param)
{
    nvram_ltable_entry_struct *ldi = NULL;
    kal_uint8 i;
    
    //reset test LIDs to default settings
    if( !reset_test_lid_default_setting(NVRAM_EF_NVRAM_TEST_1_LID) )
    {
        nvram_ut_trace("[NVUT] func_default_basic_access(): reset test LID settings fail!\n\r");
    }

    nvram_util_get_data_item(&ldi, NVRAM_EF_NVRAM_TEST_1_LID);
    ldi->category |= NVRAM_CATEGORY_FUNC_DEFAULT;
    ldi->default_value= (kal_uint8 const*)nvram_ut_get_default_value;

    //this test will use LID verno "000" only
    if( !delete_special_version_lid(NVRAM_EF_NVRAM_TEST_1_LID, 0, 0) )
    {
        nvram_ut_trace("[NVUT] func_default_basic_access(): delete test LID fail!\n\r");
    }

    //reset test LID to default value
    if( !nvram_reset_data_items(NVRAM_RESET_CERTAIN, NVRAM_APP_RESERVED, ldi, 1, ldi->total_records) )
    {
        nvram_ut_trace("[NVUT] func_default_basic_access(): reset test LID fail!\n\r");
        return KAL_FALSE;
    }

    //check LID value
    nvram_ut_get_default_value(ldi->LID, (kal_uint8 *)data_buffer, ldi->size);
    for(i = 1; i <= ldi->total_records; i++)
    {
        if(!nvram_external_read_data(ldi->LID, i, (kal_uint8 *)cmp_buffer, ldi->size))
        {
            nvram_ut_trace("[NVUT] func_default_basic_access(): read test LID fail!\n\r");
            return KAL_FALSE;
        }
        if(0 != kal_mem_cmp(data_buffer, cmp_buffer, ldi->size))
        {
            nvram_ut_trace("[NVUT] func_default_basic_access(): read back value not expect!\n\r");
            return KAL_FALSE;
        }
    }
    
    return KAL_TRUE;
    
}

kal_bool zero_default_basic_access(kal_uint32 flags, void *param)
{
    nvram_ltable_entry_struct *ldi = NULL;
    kal_uint8 i;
    
    //reset test LIDs to default settings
    if( !reset_test_lid_default_setting(NVRAM_EF_NVRAM_TEST_1_LID) )
    {
        nvram_ut_trace("[NVUT] zero_default_basic_access(): reset test LID settings fail!\n\r");
    }

    nvram_util_get_data_item(&ldi, NVRAM_EF_NVRAM_TEST_1_LID);
    ldi->default_value = NVRAM_EF_ZERO_DEFAULT;

    //this test will use LID verno "000" only
    if( !delete_special_version_lid(NVRAM_EF_NVRAM_TEST_1_LID, 0, 0) )
    {
        nvram_ut_trace("[NVUT] zero_default_basic_access(): delete test LID fail!\n\r");
    }

    //reset test LID to default value
    if( !nvram_reset_data_items(NVRAM_RESET_CERTAIN, NVRAM_APP_RESERVED, ldi, 1, ldi->total_records) )
    {
        nvram_ut_trace("[NVUT] zero_default_basic_access(): reset test LID fail!\n\r");
        return KAL_FALSE;
    }

    //check LID value
    kal_mem_set(data_buffer, 0x0, ldi->size);
    for(i = 1; i <= ldi->total_records; i++)
    {
        if(!nvram_external_read_data(ldi->LID, i, (kal_uint8 *)cmp_buffer, ldi->size))
        {
            nvram_ut_trace("[NVUT] zero_default_basic_access(): read test LID fail!\n\r");
            return KAL_FALSE;
        }
        if(0 != kal_mem_cmp(data_buffer, cmp_buffer, ldi->size))
        {
            nvram_ut_trace("[NVUT] zero_default_basic_access(): read back value not expect!\n\r");
            return KAL_FALSE;
        }
    }
    
    return KAL_TRUE;
    
}

kal_bool ff_default_basic_access(kal_uint32 flags, void *param)
{
    nvram_ltable_entry_struct *ldi = NULL;
    kal_uint8 i;
    
    //reset test LIDs to default settings
    if( !reset_test_lid_default_setting(NVRAM_EF_NVRAM_TEST_1_LID) )
    {
        nvram_ut_trace("[NVUT] ff_default_basic_access(): reset test LID settings fail!\n\r");
    }

    nvram_util_get_data_item(&ldi, NVRAM_EF_NVRAM_TEST_1_LID);
    ldi->default_value = NVRAM_EF_FF_DEFAULT;

    //this test will use LID verno "000" only
    if( !delete_special_version_lid(NVRAM_EF_NVRAM_TEST_1_LID, 0, 0) )
    {
        nvram_ut_trace("[NVUT] ff_default_basic_access(): delete test LID fail!\n\r");
    }

    //reset test LID to default value
    if( !nvram_reset_data_items(NVRAM_RESET_CERTAIN, NVRAM_APP_RESERVED, ldi, 1, ldi->total_records) )
    {
        nvram_ut_trace("[NVUT] ff_default_basic_access(): reset test LID fail!\n\r");
        return KAL_FALSE;
    }

    //check LID value
    kal_mem_set(data_buffer, 0xFF, ldi->size);
    for(i = 1; i <= ldi->total_records; i++)
    {
        if(!nvram_external_read_data(ldi->LID, i, (kal_uint8 *)cmp_buffer, ldi->size))
        {
            nvram_ut_trace("[NVUT] ff_default_basic_access(): read test LID fail!\n\r");
            return KAL_FALSE;
        }
        if(0 != kal_mem_cmp(data_buffer, cmp_buffer, ldi->size))
        {
            nvram_ut_trace("[NVUT] ff_default_basic_access(): read back value not expect!\n\r");
            return KAL_FALSE;
        }
    }
    
    return KAL_TRUE;
    
}

kal_bool table_default_basic_access(kal_uint32 flags, void *param)
{
    nvram_ltable_entry_struct *ldi = NULL;
    kal_uint8 i;
    
    //reset test LIDs to default settings
    if( !reset_test_lid_default_setting(NVRAM_EF_NVRAM_TEST_1_LID) )
    {
        nvram_ut_trace("[NVUT] table_default_basic_access(): reset test LID settings fail!\n\r");
    }

    nvram_util_get_data_item(&ldi, NVRAM_EF_NVRAM_TEST_1_LID);
    kal_mem_set(data_buffer, 0x01, ldi->size);
    ldi->default_value = (kal_uint8 const*)data_buffer;

    //this test will use LID verno "000" only
    if( !delete_special_version_lid(NVRAM_EF_NVRAM_TEST_1_LID, 0, 0) )
    {
        nvram_ut_trace("[NVUT] table_default_basic_access(): delete test LID fail!\n\r");
    }

    //reset test LID to default value
    if( !nvram_reset_data_items(NVRAM_RESET_CERTAIN, NVRAM_APP_RESERVED, ldi, 1, ldi->total_records) )
    {
        nvram_ut_trace("[NVUT] table_default_basic_access(): reset test LID fail!\n\r");
        return KAL_FALSE;
    }

    //check LID value
    for(i = 1; i <= ldi->total_records; i++)
    {
        if(!nvram_external_read_data(ldi->LID, i, (kal_uint8 *)cmp_buffer, ldi->size))
        {
            nvram_ut_trace("[NVUT] table_default_basic_access(): read test LID fail!\n\r");
            return KAL_FALSE;
        }
        if(0 != kal_mem_cmp(data_buffer, cmp_buffer, ldi->size))
        {
            nvram_ut_trace("[NVUT] table_default_basic_access(): read back value not expcet!\n\r");
            return KAL_FALSE;
        }
    }
    
    return KAL_TRUE;
    
}

kal_bool attribute_category_defaultvalue_combine(kal_uint32 flags, void *param)
{
    nvram_ltable_entry_struct *ldi = NULL;
    nvram_attr_enum attr_bak;
    kal_uint8 i, j, k;
    kal_uint8 lock_status = KAL_FALSE;
    kal_uint32 attribute_list[] = {
                                    NVRAM_ATTR_AVERAGE, NVRAM_ATTR_COMMITTED, NVRAM_ATTR_CONFIDENTIAL,
                                #ifdef __NVRAM_BIND_TO_CHIP_CIPHER__
                                    NVRAM_ATTR_MSP, 
                                #endif
                                    NVRAM_ATTR_MULTIPLE, NVRAM_ATTR_MULTIREC_READ,
                                    NVRAM_ATTR_MULTI_DEFAULT, NVRAM_ATTR_OTA_RESET, NVRAM_ATTR_WRITEPROTECT,
                                    NVRAM_ATTR_GEN_DEFAULT,
                                  };
    kal_uint32 category_list[] = {
                                    NVRAM_CATEGORY_USER, NVRAM_CATEGORY_INTERNAL, NVRAM_CATEGORY_CALIBRAT,
                                    NVRAM_CATEGORY_IMPORTANT, NVRAM_CATEGORY_IMPORTANT_L1, NVRAM_CATEGORY_IMPORTANT_L4,
                                 };
    
    kal_uint8 const* default_value_list[] = {
                                                (kal_uint8 const*)NVRAM_EF_ZERO_DEFAULT, (kal_uint8 const*)NVRAM_EF_FF_DEFAULT, (kal_uint8 const*)table_default, (kal_uint8 const*)nvram_ut_get_default_value,
                                            };

    //reset test LIDs to default settings
    if( !reset_test_lid_default_setting(NVRAM_EF_NVRAM_TEST_1_LID) )
    {
        nvram_ut_trace("[NVUT] attribute_category_defaultvalue_combine(): reset test LID settings fail!\n\r");
    }   
    nvram_util_get_data_item(&ldi, NVRAM_EF_NVRAM_TEST_1_LID);
    ldi->attr = 0;
    ldi->category = 0;
    ldi->default_value = 0;
    for(i = 0; i < (sizeof(default_value_list)/sizeof(kal_uint8 const*)); i++) //default value loop
    {
        for(j = 0; j < (sizeof(category_list)/sizeof(kal_uint32)); j++) //category loop
        {
            for(k = 0; k < (sizeof(attribute_list)/sizeof(kal_uint32)); k++) //attribute loop
            {
                ldi->default_value = default_value_list[i];
                ldi->category = category_list[j];
                ldi->attr |= attribute_list[k];
                if((kal_uint8 const*)nvram_ut_get_default_value == default_value_list[i])
                {
                    ldi->category |= NVRAM_CATEGORY_FUNC_DEFAULT;
                }
                else
                {
                    ldi->category &= ~NVRAM_CATEGORY_FUNC_DEFAULT;
                }

                if((kal_uint8 const*)table_default != default_value_list[i])
                {
                    ldi->attr &= ~NVRAM_ATTR_MULTI_DEFAULT;
                }

                if(ldi->attr & NVRAM_ATTR_WRITEPROTECT)
                {
                    lock_status = nvram_ptr->lock;
                    nvram_ptr->lock = KAL_FALSE;
                }
                
                //this test will use LID verno "000" only
                if( !delete_special_version_lid(NVRAM_EF_NVRAM_TEST_1_LID, 0, 0) )
                {
                    nvram_ut_trace("[NVUT] attribute_category_defaultvalue_combine(): delete test LID fail!\n\r");
                    return KAL_FALSE;
                }

                attr_bak = ldi->attr;

                //reset test LID to default value
                if( !nvram_reset_data_items(NVRAM_RESET_CERTAIN, NVRAM_APP_RESERVED, ldi, 1, ldi->total_records) )
                {
                    nvram_ut_trace("[NVUT] attribute_category_defaultvalue_combine(): reset test LID fail!\n\r");
                    return KAL_FALSE;
                }

                if(0 != nvram_lid_cmpt_operation(NVRAM_EF_NVRAM_TEST_1_LID,
                                     CMPT_OP_FLAG_GEN(CMPT_OP_FLAG_READBACK, CMPT_OP_FLAG_WRITE, CMPT_OP_FLAG_RESET, 0),
                                     CMPT_OP_WAY_API, 1, NVRAM_EF_TEST_LID_RECORD_TOTAL))
                {
                    nvram_ut_trace("[NVUT] attribute_category_defaultvalue_combine(): nvram_lid_cmpt_operation() fail!\n\r");
                    return KAL_FALSE;
                }

                if(attr_bak != ldi->attr)
                {
                    nvram_ut_trace("[NVUT] attribute_category_defaultvalue_combine(): attr changed unexpect!\n\r");
                }

                if(ldi->attr & NVRAM_ATTR_WRITEPROTECT)
                {
                    nvram_ptr->lock = lock_status;
                }
            }
            ldi->attr = 0; //attr is |= add, so need clear
            kal_sleep_task(kal_milli_secs_to_ticks(10));
        }
    }
    
    return KAL_TRUE;
    
}

kal_bool chksum_read_function_basic_test(kal_uint32 flags, void *param)
{
    nvram_ltable_entry_struct *ldi = NULL;
    kal_uint32 remainLen = 0, file_size;
    NVRAM_FILE_NAME nvramname;
    FS_FileOpenHint Hint;
    nvram_folder_enum folder_index;
    kal_uint16 chksum1, chksum2, chksum3;
    kal_uint8 md5_chksum[NVRAM_CHKSUM_SIZE], md5_file_chksum[NVRAM_CHKSUM_SIZE];
    kal_uint8 i;

    //reset test LIDs to default settings
    if( !reset_test_lid_default_setting(NVRAM_EF_NVRAM_TEST_1_LID) )
    {
        nvram_ut_trace("[NVUT] chksum_read_function_test(): reset test LID settings fail!\n\r");
    }

    nvram_util_get_data_item(&ldi, NVRAM_EF_NVRAM_TEST_1_LID);
    ldi->total_records = 1;
    ldi->attr |= NVRAM_ATTR_CONFIDENTIAL;
    #ifdef __NVRAM_BIND_TO_CHIP_CIPHER__
        ldi->attr |= NVRAM_ATTR_MSP;
    #endif

//check 2B checksum API
    //zero default-with not NVRAM_ATTR_GEN_DEFAULT
        //clear test environment
    if( !delete_special_version_lid(NVRAM_EF_NVRAM_TEST_1_LID, 0, 0) )
    {
        nvram_ut_trace("[NVUT] chksum_read_function_test(): delete test LID fail!\n\r");
    }
    ldi->default_value = NVRAM_EF_ZERO_DEFAULT;
    ldi->attr &= (~NVRAM_ATTR_GEN_DEFAULT); //remove GEN_DEFAULT attr
    if( !nvram_reset_data_items(NVRAM_RESET_CERTAIN, NVRAM_APP_RESERVED, ldi, 1, ldi->total_records) )
    {
        nvram_ut_trace("[NVUT] chksum_read_function_test(): reset test LID fail(ZERO default)!\n\r");
        return KAL_FALSE;
    }
    nvram_external_read_chksum(ldi->LID, 1, 1, (kal_uint8 *)(&chksum2), sizeof(chksum2));
    nvram_external_read_chksum_only(ldi->LID, 1, 1, (kal_uint8 *)(&chksum3), sizeof(chksum3));
    if(0xCDEF != chksum2 || 0xCDEF != chksum3)
    {
        nvram_ut_trace("[NVUT] chksum_read_function_test(): ZERO default without GEN_DEFAULT checksum mismatch!\n\r");
        nvram_ut_trace("[NVUT] chksum2: %x, chksum3: %x.\n\r", chksum2, chksum3);
        return KAL_FALSE;
    }

    //zero default-with NVRAM_ATTR_GEN_DEFAULT
    if( !delete_special_version_lid(NVRAM_EF_NVRAM_TEST_1_LID, 0, 0) )
    {
        nvram_ut_trace("[NVUT] chksum_read_function_test(): delete test LID fail!\n\r");
    }
    ldi->attr |= NVRAM_ATTR_GEN_DEFAULT; //add GEN_DEFAULT attr
    if( !nvram_reset_data_items(NVRAM_RESET_CERTAIN, NVRAM_APP_RESERVED, ldi, 1, ldi->total_records) )
    {
        nvram_ut_trace("[NVUT] chksum_read_function_test(): reset test LID fail(ZERO default)!\n\r");
        return KAL_FALSE;
    }
    nvram_external_read_chksum(ldi->LID, 1, 1, (kal_uint8 *)(&chksum2), sizeof(chksum2));
    nvram_external_read_chksum_only(ldi->LID, 1, 1, (kal_uint8 *)(&chksum3), sizeof(chksum3));
    if(0xCDEF != chksum2 || 0xCDEF != chksum3)
    {
        nvram_ut_trace("[NVUT] chksum_read_function_test(): ZERO default with GEN_DEFAULT checksum mismatch!\n\r");
        nvram_ut_trace("[NVUT] chksum2: %x, chksum3: %x.\n\r", chksum2, chksum3);
        return KAL_FALSE;
    }   
    
    //non-zero default
    data_buffer[0] = 0x12; //modify one data
    ldi->default_value = (const kal_uint8 *)data_buffer;
    nvram_util_get_data_item(&ldi, NVRAM_EF_NVRAM_TEST_1_LID);
    for(i = 0; i < 16; i++) //change LID to different size to test(SW/HW encrypt need 16B align)
    {
        if(i%2) //only 0dd time add SW/HW encrypt
        {
            ldi->attr |= NVRAM_ATTR_CONFIDENTIAL;
            #ifdef __NVRAM_BIND_TO_CHIP_CIPHER__
                ldi->attr |= NVRAM_ATTR_MSP;
            #endif
        }
        else
        {
            ldi->attr &= ~NVRAM_ATTR_CONFIDENTIAL;
            #ifdef __NVRAM_BIND_TO_CHIP_CIPHER__
                ldi->attr &= ~NVRAM_ATTR_MSP;
            #endif
        }
        kal_mem_set(data_buffer, i, ldi->size);
        chksum1 = nvram_util_caculate_checksum((const kal_uint8*)data_buffer, ldi->size, md5_chksum); //record size is about 1K, so can generate chksum at one time

        //clear test environment
        if( !delete_special_version_lid(NVRAM_EF_NVRAM_TEST_1_LID, 0, 0) )
        {
            nvram_ut_trace("[NVUT] chksum_read_function_test(): delete test LID fail!\n\r");
        }

        //reset test LID to default value
        if( !nvram_reset_data_items(NVRAM_RESET_CERTAIN, NVRAM_APP_RESERVED, ldi, 1, ldi->total_records) )
        {
            nvram_ut_trace("[NVUT] chksum_read_function_test(): reset test LID fail!\n\r");
            return KAL_FALSE;
        }

        //check LID file size
        if((ldi->attr & NVRAM_ATTR_CONFIDENTIAL) || (ldi->attr & NVRAM_ATTR_MSP))
            remainLen = NVRAM_MSP_ALIGNMENT_REMAINDER(ldi->size+NVRAM_CHKSUM_SIZE); //SW or HW encrypt align after add checksum
        else
            remainLen = 0;
        
        folder_index = nvram_query_folder_index(ldi->category);
        nvram_util_make_lid_filename(ldi, nvramname, KAL_TRUE);
        file_size = nvram_drv_fat_get_record_size(nvramname, &Hint, folder_index);
        if(file_size != ((ldi->size+NVRAM_CHKSUM_SIZE+remainLen) * ldi->total_records))
        {
            nvram_ut_trace("[NVUT] chksum_read_function_test(): file size not match!\n\r");
            nvram_ut_trace("[NVUT] file size: %d, expect size: %d\n\r", file_size, (ldi->size+NVRAM_CHKSUM_SIZE+remainLen) * ldi->total_records);
            return KAL_FALSE;
        }

        //check checksum value
        if(!nvram_external_read_chksum(ldi->LID, 1, 1, (kal_uint8 *)(&chksum2), sizeof(chksum2)))
        {
            nvram_ut_trace("[NVUT] chksum_read_function_test(): nvram_external_read_chksum() fail!\n\r");
            return KAL_FALSE;
        }

        if(!nvram_external_read_chksum_only(ldi->LID, 1, 1, (kal_uint8 *)(&chksum3), sizeof(chksum3)))
        {
            nvram_ut_trace("[NVUT] chksum_read_function_test(): nvram_external_read_chksum_only() fail!\n\r");
            return KAL_FALSE;
        }

        if((chksum1 != chksum2) || (chksum1 != chksum3))
        {
            nvram_ut_trace("[NVUT] i: %d.\n\r", i);
            nvram_ut_trace("[NVUT] chksum_read_function_test(): chksum compare fail!\n\r");
            nvram_ut_trace("[NVUT] chksum1: %x, chksum2: %x, chksum3: %x.\n\r", chksum1, chksum2, chksum3);
            return KAL_FALSE;
        }

//chcek 8B checksum API
        nvram_util_caculate_checksum((const kal_uint8 *)data_buffer, ldi->size, md5_chksum);
        if(!nvram_external_read_chksum_8b(ldi->LID, 1, 1, md5_file_chksum, NVRAM_CHKSUM_SIZE))
        {
            nvram_ut_trace("[NVUT] chksum_read_function_test(): 8B checksum read fail!\n\r");
            return KAL_FALSE;
        }
        if(0 != kal_mem_cmp(md5_file_chksum, md5_chksum, NVRAM_CHKSUM_SIZE))
        {
            nvram_ut_trace("[NVUT] i: %d.\n\r", i);
            nvram_ut_trace("[NVUT] chksum_read_function_test(): 8B checksum not match!\n\r");
            return KAL_FALSE;
        }
        
        ldi->size ++; //modify lid size
    }
    
    return KAL_TRUE;
    
}

kal_bool chksum_multi_read_function_test(kal_uint32 flags, void *param)
{
    nvram_ltable_entry_struct *ldi = NULL;
    kal_uint8 md5_chksum_comput[NVRAM_CHKSUM_SIZE_2B* NVRAM_EF_TEST_LID_RECORD_TOTAL]; //chksum compute by API
    kal_uint8 md5_chksum_read[NVRAM_CHKSUM_SIZE_2B* NVRAM_EF_TEST_LID_RECORD_TOTAL]; //chksum read by nvram_external_chksum_read()
    kal_uint8 md5_chksum_read_only[NVRAM_CHKSUM_SIZE_2B* NVRAM_EF_TEST_LID_RECORD_TOTAL]; //chksum read by nvram_external_chksum_read_only()
    kal_uint8 md5_chksum_8B[NVRAM_CHKSUM_SIZE];
    kal_uint16 *ptr, md5_chksum_2B;
    kal_uint8 i;
    
#define CHKSUM_TEST_RECORD_NUM  NVRAM_EF_TEST_LID_RECORD_TOTAL/2 //read start_record ~ total_record total CHKSUM_TEST_RECORD_NUM records

//NVRAM_EF_ZERO_DEFAULT check (chksum should be 0xCDEF)
    //reset test LIDs to default settings
    if( !reset_test_lid_default_setting(NVRAM_EF_NVRAM_TEST_1_LID) )
    {
        nvram_ut_trace("[NVUT] chksum_multi_read_function_test(): reset test LID settings fail!\n\r");
    }
    nvram_util_get_data_item(&ldi, NVRAM_EF_NVRAM_TEST_1_LID);
    ldi->attr &= ~NVRAM_ATTR_GEN_DEFAULT; //remove GEN_DEFAULT attribute
    ldi->default_value = NVRAM_EF_ZERO_DEFAULT;

    //delete related version LID
    if( !delete_special_version_lid(NVRAM_EF_NVRAM_TEST_1_LID, 0, 0) )
    {
        nvram_ut_trace("[NVUT] chksum_multi_read_function_test(): delete test LID fail!\n\r");
    }

    ptr = (kal_uint16 *)md5_chksum_comput; //fill buffer with 0xCDEF
    for(i = 0; i < CHKSUM_TEST_RECORD_NUM; i++)
        ptr[i] = 0xCDEF;

    kal_mem_set(md5_chksum_read, 0, sizeof(md5_chksum_read));
    kal_mem_set(md5_chksum_read_only, 0, sizeof(md5_chksum_read_only));
    nvram_external_read_chksum(ldi->LID, ldi->total_records-CHKSUM_TEST_RECORD_NUM+1, CHKSUM_TEST_RECORD_NUM, (kal_uint8 *)(md5_chksum_read), sizeof(md5_chksum_read));
    nvram_external_read_chksum_only(ldi->LID, ldi->total_records-CHKSUM_TEST_RECORD_NUM+1, CHKSUM_TEST_RECORD_NUM, (kal_uint8 *)(md5_chksum_read_only), sizeof(md5_chksum_read_only));

    if(0 != kal_mem_cmp(md5_chksum_comput, md5_chksum_read, NVRAM_CHKSUM_SIZE_2B*CHKSUM_TEST_RECORD_NUM) ||
       0 != kal_mem_cmp(md5_chksum_comput, md5_chksum_read_only, NVRAM_CHKSUM_SIZE_2B*CHKSUM_TEST_RECORD_NUM))
    {
        nvram_ut_trace("[NVUT] chksum_multi_read_function_test(): zero default chksum check fail!\n\r");
        for(i = 0; i < NVRAM_CHKSUM_SIZE_2B* CHKSUM_TEST_RECORD_NUM; i++)
        {
            nvram_ut_trace("[NVUT] cksum_compute[%d]: %x, chksum_read[%d]: %x, chksum_read_only[%d]: %x.\n\r", 
                i, md5_chksum_comput[i], i, md5_chksum_read[i], i, md5_chksum_read_only[i]);
        }
        return KAL_FALSE;
    }
    
//non-zero(with encrypt) chksum check
    ldi->attr |= NVRAM_ATTR_CONFIDENTIAL;
    #ifdef __NVRAM_BIND_TO_CHIP_CIPHER__
        ldi->attr |= NVRAM_ATTR_MSP;
    #endif
    //delete related version LID
    if( !delete_special_version_lid(NVRAM_EF_NVRAM_TEST_1_LID, 0, 0) )
    {
        nvram_ut_trace("[NVUT] chksum_multi_read_function_test(): delete test LID fail!\n\r");
    }
    ptr = (kal_uint16 *)md5_chksum_comput;
    for(i = NVRAM_EF_TEST_LID_RECORD_TOTAL-CHKSUM_TEST_RECORD_NUM+1; i <= NVRAM_EF_TEST_LID_RECORD_TOTAL; i++)
    {
        data_buffer[i] = i;
        md5_chksum_2B = nvram_util_caculate_checksum((const kal_uint8*)data_buffer, ldi->size, md5_chksum_8B);
        ptr[i-(NVRAM_EF_TEST_LID_RECORD_TOTAL-CHKSUM_TEST_RECORD_NUM+1)] = md5_chksum_2B;
        if(!nvram_external_write_data(ldi->LID, i, (kal_uint8 *)data_buffer, ldi->size))
        {
            nvram_ut_trace("[NVUT] chksum_multi_read_function_test(): write test LID fail!\n\r");
            return KAL_FALSE;
        }
    }

    kal_mem_set(md5_chksum_read, 0, sizeof(md5_chksum_read));
    kal_mem_set(md5_chksum_read_only, 0, sizeof(md5_chksum_read_only));
    nvram_external_read_chksum(ldi->LID, NVRAM_EF_TEST_LID_RECORD_TOTAL-CHKSUM_TEST_RECORD_NUM+1, CHKSUM_TEST_RECORD_NUM, (kal_uint8 *)(md5_chksum_read), sizeof(md5_chksum_read));
    nvram_external_read_chksum_only(ldi->LID, NVRAM_EF_TEST_LID_RECORD_TOTAL-CHKSUM_TEST_RECORD_NUM+1, CHKSUM_TEST_RECORD_NUM, (kal_uint8 *)(md5_chksum_read_only), sizeof(md5_chksum_read_only));

    if(0 != kal_mem_cmp(md5_chksum_comput, md5_chksum_read, NVRAM_CHKSUM_SIZE_2B*CHKSUM_TEST_RECORD_NUM) ||
       0 != kal_mem_cmp(md5_chksum_comput, md5_chksum_read_only, NVRAM_CHKSUM_SIZE_2B*CHKSUM_TEST_RECORD_NUM))
    {
        nvram_ut_trace("[NVUT] chksum_multi_read_function_test(): non-zero with encrypt chksum check fail!\n\r");
        for(i = 0; i < NVRAM_CHKSUM_SIZE_2B*CHKSUM_TEST_RECORD_NUM; i++)
        {
            nvram_ut_trace("[NVUT] cksum_compute[%d]: %x, chksum_read[%d]: %x, chksum_read_only[%d]: %x.\n\r", 
                i, md5_chksum_comput[i], i, md5_chksum_read[i], i, md5_chksum_read_only[i]);
        }
        return KAL_FALSE;
    }

//non-zero(without encrypt) chksum check
    ldi->attr &= ~NVRAM_ATTR_CONFIDENTIAL;
    #ifdef __NVRAM_BIND_TO_CHIP_CIPHER__
        ldi->attr &= ~NVRAM_ATTR_MSP;
    #endif
    //delete related version LID
    if( !delete_special_version_lid(NVRAM_EF_NVRAM_TEST_1_LID, 0, 0) )
    {
        nvram_ut_trace("[NVUT] chksum_multi_read_function_test(): delete test LID fail!\n\r");
    }
    ptr = (kal_uint16 *)md5_chksum_comput;
    for(i = NVRAM_EF_TEST_LID_RECORD_TOTAL-CHKSUM_TEST_RECORD_NUM+1; i <= NVRAM_EF_TEST_LID_RECORD_TOTAL; i++)
    {
        data_buffer[i] = i;
        md5_chksum_2B = nvram_util_caculate_checksum((const kal_uint8*)data_buffer, ldi->size, md5_chksum_8B);
        ptr[i-(NVRAM_EF_TEST_LID_RECORD_TOTAL-CHKSUM_TEST_RECORD_NUM+1)] = md5_chksum_2B;
        if(!nvram_external_write_data(ldi->LID, i, (kal_uint8 *)data_buffer, ldi->size))
        {
            nvram_ut_trace("[NVUT] chksum_multi_read_function_test(): write test LID fail!\n\r");
            return KAL_FALSE;
        }
    }

    nvram_external_read_chksum(ldi->LID, NVRAM_EF_TEST_LID_RECORD_TOTAL-CHKSUM_TEST_RECORD_NUM+1, CHKSUM_TEST_RECORD_NUM, (kal_uint8 *)(md5_chksum_read), sizeof(md5_chksum_read));
    nvram_external_read_chksum_only(ldi->LID, NVRAM_EF_TEST_LID_RECORD_TOTAL-CHKSUM_TEST_RECORD_NUM+1, CHKSUM_TEST_RECORD_NUM, (kal_uint8 *)(md5_chksum_read_only), sizeof(md5_chksum_read_only));

    if(0 != kal_mem_cmp(md5_chksum_comput, md5_chksum_read, NVRAM_CHKSUM_SIZE_2B*CHKSUM_TEST_RECORD_NUM) ||
       0 != kal_mem_cmp(md5_chksum_comput, md5_chksum_read_only, NVRAM_CHKSUM_SIZE_2B*CHKSUM_TEST_RECORD_NUM))
    {
        nvram_ut_trace("[NVUT] chksum_multi_read_function_test(): non-zero chksum check fail!\n\r");
        for(i = 0; i < NVRAM_CHKSUM_SIZE_2B*CHKSUM_TEST_RECORD_NUM; i++)
        {
            nvram_ut_trace("[NVUT] cksum_compute[%d]: %x, chksum_read[%d]: %x, chksum_read_only[%d]: %x.\n\r", 
                i, md5_chksum_comput[i], i, md5_chksum_read[i], i, md5_chksum_read_only[i]);
        }
        return KAL_FALSE;
    }
    
    return KAL_TRUE;
    
}


kal_bool raw_data_access_function_test(kal_uint32 flags, void *param)
{
    nvram_ltable_entry_struct *ldi = NULL;
    kal_uint32 *large_buffer_ptr = (kal_uint32*)large_buffer;
    kal_uint32 i, j, addr;

    //reset test LIDs to default settings
    if( !reset_test_lid_default_setting(NVRAM_EF_NVRAM_TEST_7_LID) )
    {
        nvram_ut_trace("[NVUT] raw_data_access_function_test(): reset test LID settings fail!\n\r");
    }
    nvram_util_get_data_item(&ldi, NVRAM_EF_NVRAM_TEST_7_LID);
    if(!nvram_external_reset_data(ldi->LID, 1, ldi->total_records)) {
        nvram_ut_trace("[NVUT] raw_data_access_function_test(): LID reset fail!\n\r");
    }
    
    //empty file read test
    nvram_memset(large_buffer, 0xFF, NVRAM_UT_BUFFER_SIZE);
    if(!nvram_external_read_raw_data(NVRAM_EF_NVRAM_TEST_7_LID, 0x100000, large_buffer, NVRAM_UT_BUFFER_SIZE)) {
        nvram_ut_trace("[NVUT] raw_data_access_function_test(): read empty file fail!\n\r");
        return KAL_FALSE;
    }
    for(i = 0; i < (NVRAM_UT_BUFFER_SIZE / sizeof(kal_uint32)); i++) {
        if(large_buffer_ptr[i] != 0) {
            nvram_ut_trace("[NVUT] raw_data_access_function_test(): read empty file not as expect!\n\r");
            return KAL_FALSE;
        }
    }

    //write extern
    for(i = 0; i < (NVRAM_UT_BUFFER_SIZE / sizeof(kal_uint32)); i++) {
        large_buffer_ptr[i] = ((i * sizeof(kal_uint32)) + 0xAA100000);
    }
    if(!nvram_external_write_raw_data(NVRAM_EF_NVRAM_TEST_7_LID, 0x100000, large_buffer, NVRAM_UT_BUFFER_SIZE)) {
        nvram_ut_trace("[NVUT] raw_data_access_function_test(): write extern file fail!\n\r");
        return KAL_FALSE;
    }
    
    //write exist
    for(i = 0; i < (NVRAM_UT_BUFFER_SIZE / sizeof(kal_uint32)); i++) {
        large_buffer_ptr[i] = ((i * sizeof(kal_uint32)) + 0xBB0F0000);
    }
    if(!nvram_external_write_raw_data(NVRAM_EF_NVRAM_TEST_7_LID, 0xF0000, large_buffer, NVRAM_UT_BUFFER_SIZE)) {
        nvram_ut_trace("[NVUT] raw_data_access_function_test(): write exist file fail!\n\r");
        return KAL_FALSE;
    }

    //read back check
    for(i = 0; i < (0x100000 + 2*NVRAM_UT_BUFFER_SIZE); i+= NVRAM_UT_BUFFER_SIZE) {
        nvram_memset(large_buffer, 0xFF, NVRAM_UT_BUFFER_SIZE);
        if(!nvram_external_read_raw_data(NVRAM_EF_NVRAM_TEST_7_LID, i, large_buffer, NVRAM_UT_BUFFER_SIZE) &&
            i < (0x100000 + NVRAM_UT_BUFFER_SIZE))
        {
            nvram_ut_trace("[NVUT] raw_data_access_function_test(): read back fail!\n\r");
            return KAL_FALSE;
        }
        for(j = 0; j < (NVRAM_UT_BUFFER_SIZE / sizeof(kal_uint32)); j++) {
            addr = (i + (j * sizeof(kal_uint32)));
            if(addr < 0xF0000) {
                if(large_buffer_ptr[j] != 0) {
                    nvram_ut_trace("[NVUT] raw_data_access_function_test(): read back check_a fail!\n\r");
                    return KAL_FALSE;
                }
            }
            else if(addr < (0x100000 + NVRAM_UT_BUFFER_SIZE - 0x10000)) {
                if((large_buffer_ptr[j] >> 24) != 0xBB || (large_buffer_ptr[j] & 0x00FFFFFF) != addr) {
                    nvram_ut_trace("[NVUT] raw_data_access_function_test(): read back check_b fail!\n\r");
                    return KAL_FALSE;
                }
            }
            else if(addr < (0x100000 + NVRAM_UT_BUFFER_SIZE)) {
                if((large_buffer_ptr[j] >> 24) != 0xAA || (large_buffer_ptr[j] & 0x00FFFFFF) != addr) {
                    nvram_ut_trace("[NVUT] raw_data_access_function_test(): read back check_c fail!\n\r");
                    return KAL_FALSE;
                }
            }
            else {
                if(large_buffer_ptr[j] != 0xFFFFFFFF) {
                    nvram_ut_trace("[NVUT] raw_data_access_function_test(): read back check_d fail!\n\r");
                    return KAL_FALSE;
                }                
            }
        }
    }

    //check normal r/w API
    if(nvram_external_read_data(NVRAM_EF_NVRAM_TEST_7_LID, 1, large_buffer, MAX_NVRAM_RECORD_SIZE)) {
        nvram_ut_trace("[NVUT] raw_data_access_function_test(): nvram_external_read_data() test fail.\n\r");
        return KAL_FALSE;
    }
    if(nvram_external_secure_read_data(NVRAM_EF_NVRAM_TEST_7_LID, 1, large_buffer, MAX_NVRAM_RECORD_SIZE, NULL)) {
        nvram_ut_trace("[NVUT] raw_data_access_function_test(): nvram_external_secure_read_data() test fail.\n\r");
        return KAL_FALSE;
    }
    if(nvram_external_write_data(NVRAM_EF_NVRAM_TEST_7_LID, 1, large_buffer, 2)) {
        nvram_ut_trace("[NVUT] raw_data_access_function_test(): nvram_external_write_data() test fail.\n\r");
        return KAL_FALSE;
    }
    if(nvram_external_secure_write_data(NVRAM_EF_NVRAM_TEST_7_LID, 1, large_buffer, 2, NULL)) {
        nvram_ut_trace("[NVUT] raw_data_access_function_test(): nvram_external_secure_write_data() test fail.\n\r");
        return KAL_FALSE;
    } 
        
    return KAL_TRUE;
    
}

kal_bool record_size_boundary_test(kal_uint32 flags, void *param)
{
    record_size_boundary_struct record_size_loop[] = {
        {1, 32}, {1024-16, 1024+16}, {2*1024-16, 2*1024+16},
        {4*1024-16, 4*1024+16}, {8*1024-16, 8*1024+16}, {16*1024-16, 16*1024+16},
        {32*1024-16, 32*1024+16}, {NVRAM_MAX_OP_BUFFER_SIZE-32, NVRAM_MAX_OP_BUFFER_SIZE},
    };
    nvram_ltable_entry_struct *ldi = NULL;
    kal_uint32 i, j, result;

    for(i = 0; i < sizeof(record_size_loop)/sizeof(record_size_boundary_struct); i++)
    {
        for(j = record_size_loop[i].start_record_size ; j <= record_size_loop[i].end_record_size; j++)
        {
            //reset test LIDs to default settings
            if( !reset_test_lid_default_setting(NVRAM_EF_NVRAM_TEST_1_LID) )
            {
                nvram_ut_trace("[NVUT] record_size_boundary_test(): reset test LID settings fail!\n\r");
            }
            nvram_util_get_data_item(&ldi, NVRAM_EF_NVRAM_TEST_1_LID);
            ldi->total_records = 2; // to save time we just set record number to 2
            ldi->size = j;

            //this test will use LID verno "000" only
            if( !delete_special_version_lid(NVRAM_EF_NVRAM_TEST_1_LID, 0, 0) )
            {
                nvram_ut_trace("[NVUT] record_size_boundary_test(): delete test LID fail!\n\r");
                return KAL_FALSE;
            }

            result = nvram_lid_cmpt_operation(NVRAM_EF_NVRAM_TEST_1_LID, 
                                         CMPT_OP_FLAG_GEN(CMPT_OP_FLAG_READBACK, CMPT_OP_FLAG_WRITE, CMPT_OP_FLAG_RESET, 0), 
                                         CMPT_OP_WAY_API,
                                         1, ldi->total_records);
            if(0 != result)
            {
                nvram_ut_trace("[NVUT] record_size_boundary_test(): lid API access fail! i=%d, j=%d.\n\r", i, j);
                return KAL_FALSE;
            }

            result = nvram_lid_cmpt_operation(NVRAM_EF_NVRAM_TEST_1_LID, 
                                         CMPT_OP_FLAG_GEN(CMPT_OP_FLAG_READBACK, CMPT_OP_FLAG_WRITE, CMPT_OP_FLAG_RESET, 0), 
                                         CMPT_OP_WAY_MSG,
                                         1, ldi->total_records);
            if(0 != result)
            {
                nvram_ut_trace("[NVUT] record_size_boundary_test(): lid MSG access fail! i=%d, j=%d.\n\r", i, j);
                return KAL_FALSE;
            }

            nvram_ut_trace("[NVUT] record_size_boundary_test(): loop i=%d j=%d\n\r", i, j);
            kal_sleep_task(kal_milli_secs_to_ticks(10)); //do not always take CPU
        }
    }

    return KAL_TRUE;
}

kal_bool record_number_boundary_test(kal_uint32 flags, void *param)
{
    record_number_boundary_struct record_number_loop[] = {
        {1, 16}, {32-8, 32+8}, {64-8, 64+8},
        {128-8, 128+8}, {256-8, 256+8}, {512-8, 512+8},
        {1024-8, 1024+8}, {2048-8, 2048+8}, {4096-8, 2048+8}, 
        {8192-8, 8192+8}, {16384-8, 16384+8}, {32768-8, 32768+8},
        {65535-16, 65535},
    };
    nvram_ltable_entry_struct *ldi = NULL;
    kal_uint32 i, j, result;

    for(i = 0; i < sizeof(record_number_loop)/sizeof(record_number_boundary_struct); i++)
    {
        for(j = record_number_loop[i].start_record_number ; j <= record_number_loop[i].end_record_number; j++)
        {
            //reset test LIDs to default settings
            if( !reset_test_lid_default_setting(NVRAM_EF_NVRAM_TEST_1_LID) )
            {
                nvram_ut_trace("[NVUT] record_number_boundary_test(): reset test LID settings fail!\n\r");
            }
            nvram_util_get_data_item(&ldi, NVRAM_EF_NVRAM_TEST_1_LID);
            ldi->total_records = j;
            ldi->size = 20; //we just set record size to 10 for test

            //this test will use LID verno "000" only
            if( !delete_special_version_lid(NVRAM_EF_NVRAM_TEST_1_LID, 0, 0) )
            {
                nvram_ut_trace("[NVUT] record_number_boundary_test(): delete test LID fail!\n\r");
                return KAL_FALSE;
            }

            if(j > 30) //if record number large than 30, only access 30 records to test(begin, middle, end)
            {
                //through API
                result = nvram_lid_cmpt_operation(NVRAM_EF_NVRAM_TEST_1_LID, 
                     CMPT_OP_FLAG_GEN(CMPT_OP_FLAG_READBACK, CMPT_OP_FLAG_WRITE, CMPT_OP_FLAG_RESET, 0), 
                     CMPT_OP_WAY_API, 1, 10);
                if(0 != result)
                {
                    nvram_ut_trace("[NVUT] record_number_boundary_test(): lid API1 access fail! i=%d, j=%d.\n\r", i, j);
                    return KAL_FALSE;
                }
                result = nvram_lid_cmpt_operation(NVRAM_EF_NVRAM_TEST_1_LID, 
                     CMPT_OP_FLAG_GEN(CMPT_OP_FLAG_READBACK, CMPT_OP_FLAG_WRITE, CMPT_OP_FLAG_RESET, 0), 
                     CMPT_OP_WAY_API, ldi->total_records/2 - 4, ldi->total_records/2 + 5);
                if(0 != result)
                {
                    nvram_ut_trace("[NVUT] record_number_boundary_test(): lid API2 access fail! i=%d, j=%d.\n\r", i, j);
                    return KAL_FALSE;
                }
                result = nvram_lid_cmpt_operation(NVRAM_EF_NVRAM_TEST_1_LID, 
                     CMPT_OP_FLAG_GEN(CMPT_OP_FLAG_READBACK, CMPT_OP_FLAG_WRITE, CMPT_OP_FLAG_RESET, 0), 
                     CMPT_OP_WAY_API, ldi->total_records-9, ldi->total_records);
                if(0 != result)
                {
                    nvram_ut_trace("[NVUT] record_number_boundary_test(): lid API3 access fail! i=%d, j=%d.\n\r", i, j);
                    return KAL_FALSE;
                }
                //through MSG
                result = nvram_lid_cmpt_operation(NVRAM_EF_NVRAM_TEST_1_LID, 
                     CMPT_OP_FLAG_GEN(CMPT_OP_FLAG_READBACK, CMPT_OP_FLAG_WRITE, CMPT_OP_FLAG_RESET, 0), 
                     CMPT_OP_WAY_MSG, 1, 10);
                if(0 != result)
                {
                    nvram_ut_trace("[NVUT] record_number_boundary_test(): lid MSG1 access fail! i=%d, j=%d.\n\r", i, j);
                    return KAL_FALSE;
                }
                result = nvram_lid_cmpt_operation(NVRAM_EF_NVRAM_TEST_1_LID, 
                     CMPT_OP_FLAG_GEN(CMPT_OP_FLAG_READBACK, CMPT_OP_FLAG_WRITE, CMPT_OP_FLAG_RESET, 0), 
                     CMPT_OP_WAY_MSG, ldi->total_records/2 - 4, ldi->total_records/2 + 5);
                if(0 != result)
                {
                    nvram_ut_trace("[NVUT] record_number_boundary_test(): lid MSG2 access fail! i=%d, j=%d.\n\r", i, j);
                    return KAL_FALSE;
                }
                result = nvram_lid_cmpt_operation(NVRAM_EF_NVRAM_TEST_1_LID, 
                     CMPT_OP_FLAG_GEN(CMPT_OP_FLAG_READBACK, CMPT_OP_FLAG_WRITE, CMPT_OP_FLAG_RESET, 0), 
                     CMPT_OP_WAY_MSG, ldi->total_records-9, ldi->total_records);
                if(0 != result)
                {
                    nvram_ut_trace("[NVUT] record_number_boundary_test(): lid MSG3 access fail! i=%d, j=%d.\n\r", i, j);
                    return KAL_FALSE;
                }                
            }
            else //full record cover
            {
                result = nvram_lid_cmpt_operation(NVRAM_EF_NVRAM_TEST_1_LID, 
                                 CMPT_OP_FLAG_GEN(CMPT_OP_FLAG_READBACK, CMPT_OP_FLAG_WRITE, CMPT_OP_FLAG_RESET, 0), 
                                 CMPT_OP_WAY_API, 1, ldi->total_records);
                if(0 != result)
                {
                    nvram_ut_trace("[NVUT] record_number_boundary_test(): lid API access fail! i=%d, j=%d.\n\r", i, j);
                    return KAL_FALSE;
                }

                result = nvram_lid_cmpt_operation(NVRAM_EF_NVRAM_TEST_1_LID, 
                                             CMPT_OP_FLAG_GEN(CMPT_OP_FLAG_READBACK, CMPT_OP_FLAG_WRITE, CMPT_OP_FLAG_RESET, 0), 
                                             CMPT_OP_WAY_MSG, 1, ldi->total_records);
                if(0 != result)
                {
                    nvram_ut_trace("[NVUT] record_number_boundary_test(): lid MSG access fail! i=%d, j=%d.\n\r", i, j);
                    return KAL_FALSE;
                }
            }
            nvram_ut_trace("[NVUT] record_number_boundary_test(): loop i=%d j=%d\n\r", i, j);
            kal_sleep_task(kal_milli_secs_to_ticks(10)); //do not always take CPU
        }
    }

    return KAL_TRUE;
}

kal_bool nvram_stress_test(kal_uint32 flags, void *param)
{
#define NVRAM_STRESS_TEST_LOOP  1000
#define NVRAM_MAX_RAND_RECORD_NUM    512 //normally user's LID record number will not exceed 512
#define NVRAM_MAX_FILE_SIZE 1024*1024 //there we assue max test LID file size is 1MB, if exceed, ajust record number
    nvram_ltable_entry_struct *ldi = NULL;
    nvram_attr_enum attr_bak;
    nvram_write_req_struct *write_req;
    nvram_write_cnf_struct *nvram_write_cnf;
    kal_uint8 *pdu_write_buffer;
    ilm_struct current_ilm;
    kal_uint32 attribute_list[] = {
                                    NVRAM_ATTR_AVERAGE, NVRAM_ATTR_COMMITTED, NVRAM_ATTR_CONFIDENTIAL,
                                #ifdef __NVRAM_BIND_TO_CHIP_CIPHER__
                                    NVRAM_ATTR_MSP, 
                                #endif
                                    NVRAM_ATTR_MULTIPLE, NVRAM_ATTR_MULTIREC_READ,
                                    NVRAM_ATTR_MULTI_DEFAULT, NVRAM_ATTR_OTA_RESET, NVRAM_ATTR_WRITEPROTECT,
                                    NVRAM_ATTR_GEN_DEFAULT, NVRAM_ATTR_FAULT_ASSERT,
                                    //because NVRAM_ATTR_RING is not often used, there do not test, if test ctrl buffer is not enough
                                    //NVRAM_ATTR_RING,
                                  };
    kal_uint32 category_list[] = {
                                    NVRAM_CATEGORY_USER, NVRAM_CATEGORY_INTERNAL, NVRAM_CATEGORY_CALIBRAT,
                                    NVRAM_CATEGORY_IMPORTANT, NVRAM_CATEGORY_IMPORTANT_L1, NVRAM_CATEGORY_IMPORTANT_L4,
                                 };
    
    kal_uint8 const* default_value_list[] = {
                                                (kal_uint8 const*)NVRAM_EF_ZERO_DEFAULT, (kal_uint8 const*)NVRAM_EF_FF_DEFAULT, (kal_uint8 const*)table_default, (kal_uint8 const*)nvram_ut_get_default_value,
                                            };
    kal_uint32 attr_rand_range, category_rand_range, default_rand_range; //insteand random value range
    kal_uint32 attr_rand_value, category_rand_value, default_rand_value;
    kal_uint32 attr_number, category_number, default_number;
    kal_uint32 i, j;
    kal_uint16 ring_write_record;
    kal_uint8 lock_status = KAL_FALSE;
    kal_uint8 *d_buffer, *c_buffer, result;

    attr_number = sizeof(attribute_list)/sizeof(kal_uint32);
    category_number = sizeof(category_list)/sizeof(kal_uint32);
    default_number = sizeof(default_value_list)/sizeof(kal_uint8 const *);

    attr_rand_range = (kal_uint32)pow(2, attr_number); //each bit stands a attribute should have or not have
    category_rand_range = category_number; //each LID only have one kind category
    default_rand_range = default_number; //each LID only have one kind default value

    //set random seed
    srand(ust_get_current_time());

    nvram_util_get_data_item(&ldi, NVRAM_EF_NVRAM_TEST_1_LID);
    //reset test LID to default settings
    if( !reset_test_lid_default_setting(NVRAM_EF_NVRAM_TEST_1_LID) )
    {
        nvram_ut_trace("[NVUT] nvram_stress_test(): reset test LID settings fail!\n\r");
    }
    
    for(i = 0; i < NVRAM_STRESS_TEST_LOOP; i++)
    {
        attr_rand_value = rand()%attr_rand_range;
        category_rand_value = rand()%category_rand_range;
        default_rand_value = rand()%default_rand_range;
        //set attr, category, default value, record_size, record_number
        for(ldi->attr = 0, j = 0; j < attr_number; j++)
        {
            if((attr_rand_value>>j)&0x1) //shoud add this attribute
            {
                ldi->attr |= attribute_list[j];
            }
        }
        
        ldi->category = category_list[category_rand_value];
        ldi->default_value = default_value_list[default_rand_value];
        ldi->total_records = rand()%NVRAM_MAX_RAND_RECORD_NUM + 1;
        ldi->size = rand()%NVRAM_MAX_OP_BUFFER_SIZE + 1;
        if((ldi->size+NVRAM_CHKSUM_SIZE)*ldi->total_records > NVRAM_MAX_FILE_SIZE) //do not allow LID size too large
        {
            ldi->total_records = NVRAM_MAX_FILE_SIZE / ldi->size;
        }

        if(ldi->attr & NVRAM_ATTR_RING)
        {
            if(ldi->size < 2)
                ldi->size = 2;
            if(ldi->total_records < 2)
                ldi->total_records = 2;
        }
        nvram_ut_trace("[NVDBG] nvram_stress_test(): category= %8x,attr= %8x,ldi->size=%d,lid->total_records=%d!\n\r",
            ldi->category,ldi->attr,ldi->size,ldi->total_records);

        if((ldi->size+NVRAM_CHKSUM_SIZE)*ldi->total_records > NVRAM_MAX_OP_BUFFER_SIZE) //large LID can only set default value as 0x00 or 0xFF otherwise buffer is not enough
        {
            ldi->default_value = NVRAM_EF_ZERO_DEFAULT;
            nvram_ut_trace("[NVDBG] nvram_stress_test(): default_value is NVRAM_EF_ZERO_DEFAULT!\n\r");
        }

        if((kal_uint8 const*)nvram_ut_get_default_value == ldi->default_value)
        {
            ldi->category |= NVRAM_CATEGORY_FUNC_DEFAULT;
            nvram_ut_trace("[NVDBG] nvram_stress_test(): mask the NVRAM_CATEGORY_FUNC_DEFAULT!\n\r");
        }
        else
        {
            ldi->category &= ~NVRAM_CATEGORY_FUNC_DEFAULT;
            nvram_ut_trace("[NVDBG] nvram_stress_test(): unmask the NVRAM_CATEGORY_FUNC_DEFAULT!\n\r");
        }

        if((kal_uint8 const*)table_default != ldi->default_value)
        {
            ldi->attr &= ~NVRAM_ATTR_MULTI_DEFAULT;
            nvram_ut_trace("[NVDBG] nvram_stress_test(): unmask the NVRAM_ATTR_MULTI_DEFAULT!\n\r");
        }
        if(ldi->attr & NVRAM_ATTR_WRITEPROTECT) //temp close NVRAM system lock status
        {
            lock_status = nvram_ptr->lock;
            nvram_ptr->lock = KAL_FALSE;
        }
        nvram_ut_trace("[NVDBG] nvram_stress_test() 2: category= %8x,attr= %8x,ldi->size=%d,lid->total_records=%d!\n\r",
            ldi->category,ldi->attr,ldi->size,ldi->total_records);
        //this test will use LID verno "000" only
        if( !delete_special_version_lid(NVRAM_EF_NVRAM_TEST_1_LID, 0, 0) )
        {
            nvram_ut_trace("[NVUT] nvram_stress_test(): delete test LID fail before test!\n\r");
            //return KAL_FALSE;
        }

        attr_bak = ldi->attr;

        //reset test LID to default value
        if( !nvram_reset_data_items(NVRAM_RESET_CERTAIN, NVRAM_APP_RESERVED, ldi, 1, ldi->total_records) )
        {
            nvram_ut_trace("[NVUT] nvram_stress_test(): reset test LID fail!\n\r");
            return KAL_FALSE;
        }
        nvram_ut_trace("[NVDBG] nvram_stress_test(): reset test LID Success!\n\r");

        if(ldi->attr & NVRAM_ATTR_RING) //ring attribute should use msg to test only
        {
            //write LID
            d_buffer = (kal_uint8*)get_ctrl_buffer(ldi->size);
            d_buffer[0] = 0xEF;
            write_req = (nvram_write_req_struct *)construct_local_para(sizeof(nvram_write_req_struct), TD_CTRL);
            pdu_write_buffer = (kal_uint8 *)construct_peer_buff(ldi->size, 0, 0, TD_CTRL);
            kal_mem_cpy(get_peer_buff_pdu((peer_buff_struct*)pdu_write_buffer, 0), d_buffer, ldi->size);
            write_req->ref_count = 1;
            write_req->file_idx = ldi->LID;
            write_req->para = 1; //for ring, this para have no meaning
            
            msg_send6(kal_get_active_module_id(), MOD_NVRAM, 0, MSG_ID_NVRAM_WRITE_REQ, 
                    (local_para_struct*)write_req, (peer_buff_struct*)pdu_write_buffer);
            msg_receive_extq(&current_ilm);
            nvram_write_cnf = (nvram_write_cnf_struct*)current_ilm.local_para_ptr;
            result = nvram_write_cnf->result;
            destroy_ilm(&current_ilm);
            if(NVRAM_ERRNO_SUCCESS != result)
            {
                free_ctrl_buffer(d_buffer);
                nvram_ut_trace("[NVUT] nvram_stress_test(): ring write fail!\n\r");
                break;
            }
            c_buffer = (kal_uint8*)get_ctrl_buffer(ldi->size);
            //for ring LID, record 1's first two bytes stores the last written record
            if( !nvram_external_read_data(ldi->LID, 1, (kal_uint8 *)c_buffer, ldi->size) )
            {
                free_ctrl_buffer(d_buffer);
                free_ctrl_buffer(c_buffer);
                nvram_ut_trace("[NVUT] nvram_stress_test(): ring read record 1 fail!\n\r");
                return KAL_FALSE;
            }
            ring_write_record = (kal_uint16)c_buffer[0];
            if( !nvram_external_read_data(ldi->LID, ring_write_record, (kal_uint8 *)c_buffer, ldi->size) )
            {
                free_ctrl_buffer(d_buffer);
                free_ctrl_buffer(c_buffer);
                nvram_ut_trace("[NVUT] nvram_stress_test(): ring read write record fail!\n\r");
                return KAL_FALSE;
            }      
            if(0 != kal_mem_cmp(c_buffer, d_buffer, ldi->size))
            {
                free_ctrl_buffer(d_buffer);
                free_ctrl_buffer(c_buffer);
                nvram_ut_trace("[NVUT] nvram_stress_test(): ring read back value change.\n\r");
                return KAL_FALSE;
            }      
            free_ctrl_buffer(d_buffer);
            free_ctrl_buffer(c_buffer);
        }
        else
        {
            if(ldi->total_records <= 5) //full record cover
            {
                //API access
                if(0 != nvram_lid_cmpt_operation(NVRAM_EF_NVRAM_TEST_1_LID,
                         CMPT_OP_FLAG_GEN(CMPT_OP_FLAG_READBACK, CMPT_OP_FLAG_WRITE, CMPT_OP_FLAG_RESET, 0),
                         CMPT_OP_WAY_API, 1, ldi->total_records))
                {
                    nvram_ut_trace("[NVUT] nvram_stress_test(): nvram_lid_cmpt_operation() API fail!\n\r");
                    nvram_ut_trace("[NVUT] nvram_stress_test(): attr_rand_value=%d, category_rand_value=%d, default_rand_value=%d.\n\r", attr_rand_value, category_rand_value, default_rand_value);
                    nvram_ut_trace("[NVUT] nvram_stress_test(): attr_number=%d, category_number=%d, default_number=%d.\n\r", attr_number, category_number, default_number);
                    return KAL_FALSE;
                }

                //MSG access
                if(0 != nvram_lid_cmpt_operation(NVRAM_EF_NVRAM_TEST_1_LID,
                         CMPT_OP_FLAG_GEN(CMPT_OP_FLAG_READBACK, CMPT_OP_FLAG_WRITE, CMPT_OP_FLAG_RESET, 0),
                         CMPT_OP_WAY_MSG, 1, ldi->total_records))
                {
                    nvram_ut_trace("[NVUT] nvram_stress_test(): nvram_lid_cmpt_operation() MSG fail!\n\r");
                    nvram_ut_trace("[NVUT] nvram_stress_test(): attr_rand_value=%d, category_rand_value=%d, default_rand_value=%d.\n\r", attr_rand_value, category_rand_value, default_rand_value);
                    nvram_ut_trace("[NVUT] nvram_stress_test(): attr_number=%d, category_number=%d, default_number=%d.\n\r", attr_number, category_number, default_number);
                    return KAL_FALSE;
                }

            }
            else //only access begin and end part ecah 2 records
            {
                //API access
                if(0 != nvram_lid_cmpt_operation(NVRAM_EF_NVRAM_TEST_1_LID,
                         CMPT_OP_FLAG_GEN(CMPT_OP_FLAG_READBACK, CMPT_OP_FLAG_WRITE, CMPT_OP_FLAG_RESET, 0),
                         CMPT_OP_WAY_API, 1, 2))
                {
                    nvram_ut_trace("[NVUT] nvram_stress_test(): nvram_lid_cmpt_operation() API fail!\n\r");
                    nvram_ut_trace("[NVUT] nvram_stress_test(): attr_rand_value=%d, category_rand_value=%d, default_rand_value=%d.\n\r", attr_rand_value, category_rand_value, default_rand_value);
                    nvram_ut_trace("[NVUT] nvram_stress_test(): attr_number=%d, category_number=%d, default_number=%d.\n\r", attr_number, category_number, default_number);
                    return KAL_FALSE;
                }
                if(0 != nvram_lid_cmpt_operation(NVRAM_EF_NVRAM_TEST_1_LID,
                         CMPT_OP_FLAG_GEN(CMPT_OP_FLAG_READBACK, CMPT_OP_FLAG_WRITE, CMPT_OP_FLAG_RESET, 0),
                         CMPT_OP_WAY_API, ldi->total_records-1, ldi->total_records))
                {
                    nvram_ut_trace("[NVUT] nvram_stress_test(): nvram_lid_cmpt_operation() API fail!\n\r");
                    nvram_ut_trace("[NVUT] nvram_stress_test(): attr_rand_value=%d, category_rand_value=%d, default_rand_value=%d.\n\r", attr_rand_value, category_rand_value, default_rand_value);
                    nvram_ut_trace("[NVUT] nvram_stress_test(): attr_number=%d, category_number=%d, default_number=%d.\n\r", attr_number, category_number, default_number);
                    return KAL_FALSE;
                }

                //MSG access
                if(0 != nvram_lid_cmpt_operation(NVRAM_EF_NVRAM_TEST_1_LID,
                         CMPT_OP_FLAG_GEN(CMPT_OP_FLAG_READBACK, CMPT_OP_FLAG_WRITE, CMPT_OP_FLAG_RESET, 0),
                         CMPT_OP_WAY_MSG, 1, 2))
                {
                    nvram_ut_trace("[NVUT] nvram_stress_test(): nvram_lid_cmpt_operation() MSG fail!\n\r");
                    nvram_ut_trace("[NVUT] nvram_stress_test(): attr_rand_value=%d, category_rand_value=%d, default_rand_value=%d.\n\r", attr_rand_value, category_rand_value, default_rand_value);
                    nvram_ut_trace("[NVUT] nvram_stress_test(): attr_number=%d, category_number=%d, default_number=%d.\n\r", attr_number, category_number, default_number);
                    return KAL_FALSE;
                }
                if(0 != nvram_lid_cmpt_operation(NVRAM_EF_NVRAM_TEST_1_LID,
                         CMPT_OP_FLAG_GEN(CMPT_OP_FLAG_READBACK, CMPT_OP_FLAG_WRITE, CMPT_OP_FLAG_RESET, 0),
                         CMPT_OP_WAY_MSG, ldi->total_records-1, ldi->total_records))
                {
                    nvram_ut_trace("[NVUT] nvram_stress_test(): nvram_lid_cmpt_operation() MSG fail!\n\r");
                    nvram_ut_trace("[NVUT] nvram_stress_test(): attr_rand_value=%d, category_rand_value=%d, default_rand_value=%d.\n\r", attr_rand_value, category_rand_value, default_rand_value);
                    nvram_ut_trace("[NVUT] nvram_stress_test(): attr_number=%d, category_number=%d, default_number=%d.\n\r", attr_number, category_number, default_number);
                    return KAL_FALSE;
                }
            }
        }
        
        if(attr_bak != ldi->attr)
        {
            nvram_ut_trace("[NVUT] nvram_stress_test(): attr changed unexpect!\n\r");
        }
        if( !delete_special_version_lid(NVRAM_EF_NVRAM_TEST_1_LID, 0, 0) )
        {
            nvram_ut_trace("[NVUT] nvram_stress_test(): delete test LID fail after test!\n\r");
        }
        if(ldi->attr & NVRAM_ATTR_WRITEPROTECT)
        {
            nvram_ptr->lock = lock_status;
        }

        if(0 == i%10) //suspend a while
        {
            kal_sleep_task(kal_milli_secs_to_ticks(10));
        }
        nvram_ut_trace("[NVUT] nvram_stress_test(): loop i=%d\n\r", i);
    }
    
    return KAL_TRUE;
    
}

kal_bool nvram_exception_test(kal_uint32 flags, void *param)
{
    nvram_ltable_entry_struct *ldi = NULL;
    kal_uint32 exception_test_lid[]=
    {
        NVRAM_EF_SYS_EXCEPTION_LID_DUMMY, NVRAM_EF_SYS_STATISTICS_LID
    }; //nvram_write_exception_data_item and nvram_read_exception_data_item only allow this two LID's operation
    kal_uint32 i, j;

    for(i = 0; i < sizeof(exception_test_lid)/sizeof(kal_uint32); i++)
    {
        nvram_util_get_data_item(&ldi, exception_test_lid[i]);

        data_buffer[0] = i;
        for(j = 1; j <= ldi->total_records; j++)
        {
            //nvram_write_exception_data_item() test
            if(NVRAM_DRV_OK != nvram_write_exception_data_item(ldi, j, (kal_uint8 *)data_buffer))
            {
                nvram_ut_trace("[NVUT] nvram_exception_test(): nvram_write_exception_data_item() fail.\n\r");
                return KAL_FALSE;
            }
            if(NVRAM_DRV_OK != nvram_read_exception_data_item(ldi, j, (kal_uint8 *)cmp_buffer, ldi->size))
            {
                nvram_ut_trace("[NVUT] nvram_exception_test(): 1st nvram_read_exception_data_item() fail.\n\r");
                return KAL_FALSE;
            }
            if(0 != kal_mem_cmp(data_buffer, cmp_buffer, ldi->size))
            {
                nvram_ut_trace("[NVUT] nvram_exception_test(): nvram_read_exception_data_item() 1st readback not as except.\n\r");
                return KAL_FALSE;
            }
            if(! nvram_external_read_data(ldi->LID, j, (kal_uint8 *)cmp_buffer, ldi->size))
            {
                nvram_ut_trace("[NVUT] nvram_exception_test(): 1st nvram_external_read_data() fail.\n\r");
                return KAL_FALSE;
            }
            if(0 != kal_mem_cmp(data_buffer, cmp_buffer, ldi->size))
            {
                nvram_ut_trace("[NVUT] nvram_exception_test(): 1st nvram_external_read_data() readback not as except.\n\r");
                return KAL_FALSE;
            }

            //nvram_read_exception_data_item() test
            if(! nvram_external_write_data(ldi->LID, j, (kal_uint8 *)data_buffer, ldi->size))
            {
                nvram_ut_trace("[NVUT] nvram_exception_test(): nvram_external_write_data() fail.\n\r");
                return KAL_FALSE;
            }
            if(NVRAM_DRV_OK != nvram_read_exception_data_item(ldi, j, (kal_uint8 *)cmp_buffer, ldi->size))
            {
                nvram_ut_trace("[NVUT] nvram_exception_test(): 2nd nvram_read_exception_data_item() fail.\n\r");
                return KAL_FALSE;
            }
            if(0 != kal_mem_cmp(data_buffer, cmp_buffer, ldi->size))
            {
                nvram_ut_trace("[NVUT] nvram_exception_test(): nvram_read_exception_data_item() 2nd readback not as except.\n\r");
                return KAL_FALSE;
            }
            
        }
    }

    return KAL_TRUE;
    
}

kal_bool nvram_security_test(kal_uint32 flags, void *param)
{
    nvram_ltable_entry_struct *ldi = NULL;
    
    //reset test LIDs to default settings
    if( !reset_test_lid_default_setting(NVRAM_EF_NVRAM_TEST_1_LID) )
    {
        nvram_ut_trace("[NVUT] nvram_security_test(): reset test LID settings fail!\n\r");
    }
    
    nvram_util_get_data_item(&ldi, NVRAM_EF_NVRAM_TEST_1_LID);
    //this test will use LID verno "000" only
    if( !delete_special_version_lid(NVRAM_EF_NVRAM_TEST_1_LID, 0, 0) )
    {
        nvram_ut_trace("[NVUT] nvram_security_test(): delete test LID fail!\n\r");
    }

    //reset test LID to default value
    if( !nvram_reset_data_items(NVRAM_RESET_CERTAIN, NVRAM_APP_RESERVED, ldi, 1, ldi->total_records) )
    {
        nvram_ut_trace("[NVUT] nvram_security_test(): reset test LID fail!\n\r");
        return KAL_FALSE;
    }
    nvram_ut_trace("[NVUT] nvram_security_test(): reset test LID Success!\n\r");
    
    nvram_get_default_value_to_write(ldi, 1, (kal_uint8 *)data_buffer, ldi->size);

    ldi->attr |= NVRAM_ATTR_WRITEPROTECT;
    ldi->default_value = NVRAM_EF_FF_DEFAULT; //modify test LID's default value
    //lid read
    if( !nvram_external_read_data(ldi->LID, 1, (kal_uint8 *)cmp_buffer, ldi->size) )
    {
        nvram_ut_trace("[NVUT] nvram_security_test(): first read test LID fail!\n\r");
        return KAL_FALSE;
    }
    if(0 != kal_mem_cmp(data_buffer, cmp_buffer, ldi->size))
    {
        nvram_ut_trace("[NVUT] nvram_security_test(): first read not as expect!\n\r");
        return KAL_FALSE;
    }
    nvram_ut_trace("[NVUT] nvram_security_test(): first read  as expect!\n\r");
    
   //lid access
    nvram_ut_assert_flag = 0;
    
    if(0 != nvram_lid_cmpt_operation(NVRAM_EF_NVRAM_TEST_1_LID,
                                     CMPT_OP_FLAG_GEN(CMPT_OP_FLAG_SET_LOCK, 0, 0, 0),
                                     CMPT_OP_WAY_MSG, 1, 1))
    {
        nvram_ut_trace("[NVUT] nvram_security_test(): nvram_lid_cmpt_operation()Lock fail!\n\r");
        return KAL_FALSE;
    }
    nvram_ut_trace("[NVUT] nvram_security_test(): nvram_lid_cmpt_operation()Lock Success!\n\r");
    
    cmp_buffer[0] = 0x30;
    if( KAL_TRUE == nvram_external_write_data(ldi->LID, 1, (kal_uint8 *)cmp_buffer, ldi->size) )
    {
        nvram_ut_trace("[NVUT] nvram_security_test(): write fail not happen!\n\r");
        return KAL_FALSE;
    }
    else
    {
        nvram_ut_trace("[NVUT] nvram_security_test(): can't write when locked!\n\r");
    }
    
    if( !nvram_external_read_data(ldi->LID, 1, (kal_uint8 *)cmp_buffer, ldi->size) )
    {
        nvram_ut_trace("[NVUT] nvram_security_test(): second read test LID fail!\n\r");
        return KAL_FALSE;
    }
    
    if(0 != kal_mem_cmp(data_buffer, cmp_buffer, ldi->size))
    {
        nvram_ut_trace("[NVUT] nvram_security_test(): second read not as expect!\n\r");
        return KAL_FALSE;
    }
    nvram_ut_trace("[NVUT] nvram_security_test(): second read  as expect!\n\r");
    
    if(0 == nvram_lid_cmpt_operation(NVRAM_EF_NVRAM_TEST_1_LID,
                                     CMPT_OP_FLAG_GEN(CMPT_OP_FLAG_SET_UNLOCK, 0, 0, 0),
                                     CMPT_OP_WAY_MSG, 1, 1))
    {
        #ifdef __NVRAM_IMEI_UNLOCK_DISABLE__
        nvram_ut_trace("[NVUT] nvram_security_test(): nvram_lid_cmpt_operation() UNLOCK fail not happen!\n\r");
        return KAL_FALSE;
        #else
        nvram_ut_trace("[NVUT] nvram_security_test(): nvram_lid_cmpt_operation() UNLOCK Success !\n\r");
        #endif
        
    }
    #ifdef __NVRAM_IMEI_UNLOCK_DISABLE__
    nvram_ut_trace("[NVUT] nvram_security_test(): nvram_lid_cmpt_operation() UNLOCK fail happen!\n\r");
    #endif
    
    if(nvram_ut_assert_flag)
    {
        nvram_ut_trace("[NVUT] nvram_security_test(): unexpect assert happen!\n\r");
        return KAL_FALSE;
    }
    
    cmp_buffer[0] = 0x32;
    if( KAL_TRUE == nvram_external_write_data(ldi->LID, 1, (kal_uint8 *)cmp_buffer, ldi->size) )
    {
        #ifdef __NVRAM_IMEI_UNLOCK_DISABLE__
        nvram_ut_trace("[NVUT] nvram_security_test(): write fail not happen!\n\r");
        return KAL_FALSE;
        #else
        nvram_ut_trace("[NVUT] nvram_security_test(): write success after unlock!\n\r");
        #endif
    }
    #ifdef __NVRAM_IMEI_UNLOCK_DISABLE__
    nvram_ut_trace("[NVUT] nvram_security_test(): write fail happen when unlock fail!\n\r");
    #endif
    
    if( !nvram_external_read_data(ldi->LID, 1, (kal_uint8 *)cmp_buffer, ldi->size) )
    {
        nvram_ut_trace("[NVUT] nvram_security_test(): third read test LID fail!\n\r");
        return KAL_FALSE;
    }
    
    if(0 != kal_mem_cmp(data_buffer, cmp_buffer, ldi->size))
    {
        #ifdef __NVRAM_IMEI_UNLOCK_DISABLE__
        nvram_ut_trace("[NVUT] nvram_security_test(): third read not as expect!\n\r");
        return KAL_FALSE;
        #endif
    }
    nvram_ut_trace("[NVUT] nvram_security_test(): third read as expect!\n\r");
    
    //lid reset
    nvram_reset_data_items(NVRAM_RESET_CERTAIN, NVRAM_APP_RESERVED, ldi, 1, ldi->total_records);
    nvram_get_default_value_to_write(ldi, 1, (kal_uint8 *)data_buffer, ldi->size); //get new default value
    if( !nvram_external_read_data(ldi->LID, 1, (kal_uint8 *)cmp_buffer, ldi->size) )
    {
        nvram_ut_trace("[NVUT] nvram_security_test(): third read test LID fail!\n\r");
        return KAL_FALSE;
    }
    nvram_ut_trace("[NVUT] nvram_security_test(): third read test LID Success!\n\r");
    if(0 != kal_mem_cmp(data_buffer, cmp_buffer, ldi->size))
    {
        nvram_ut_trace("[NVUT] nvram_security_test(): third read not as expect!\n\r");
        return KAL_FALSE;
    }
    nvram_ut_trace("[NVUT] nvram_security_test(): third read as expect!\n\r");
    return KAL_TRUE; 
}

kal_bool nvram_otp_access_test()
{
    nvram_ltable_entry_struct *ldi = NULL;
    kal_uint8 *p_buffer = NULL;
    kal_uint32 i = 0;
    kal_uint32 j = 0;
    
    nvram_util_get_data_item(&ldi, NVRAM_EF_INTERNAL_TEST_15_LID);

    p_buffer = (kal_uint8*)get_ctrl_buffer(ldi->size);

    //Read OTP data
    for(i = 1; i <= ldi->total_records; i++)
    {
        memset(p_buffer,0,ldi->size);
        if(!nvram_external_read_data(NVRAM_EF_INTERNAL_TEST_15_LID,i,p_buffer,ldi->size))
        {
            nvram_ut_trace("[NVUT] %s(): nvram_external_read_data fail @line %d!\n\r",__FUNCTION__,__LINE__);
            free_ctrl_buffer(p_buffer);
            return KAL_FALSE;
        }
        for(j = 0; j < ldi->size; j++)
        {
            if ((p_buffer[j] != 0xFF && p_buffer[j] != 0x00) || (p_buffer[j] != p_buffer[0]))
            {
               nvram_ut_trace("[NVUT] %s(): OTP_PROGRAM_TWICE at record %d offset %d, @line %d!\n\r",__FUNCTION__,i,j,__LINE__);
               return KAL_FALSE;;
            }            
        }
    }

    //Write and Read OTP data
    for(i = 1; i <= ldi->total_records; i++)
    {
        memset(p_buffer,0,ldi->size);
        p_buffer[0] = 0x1; //modify some data
        if(ldi->size >= 3)
        {
            p_buffer[1] = 0x2;
            p_buffer[2] = 0x3;
        }
        if(!nvram_external_write_data(NVRAM_EF_INTERNAL_TEST_15_LID,i,p_buffer,ldi->size))
        {
            nvram_ut_trace("[NVUT] %s(): nvram_external_write_data fail @%d!\n\r",__FUNCTION__,__LINE__);
            free_ctrl_buffer(p_buffer);
            return KAL_FALSE;
        }
    }
    
    //Read back the write from OTP and check whether the data is written correctly
    for(i = 1; i <= ldi->total_records; i++)
    {
        memset(p_buffer,0,ldi->size);
        if(!nvram_external_read_data(NVRAM_EF_INTERNAL_TEST_15_LID,i,p_buffer,ldi->size))
        {
            nvram_ut_trace("[NVUT] %s(): nvram_external_read_data fail @line %d!\n\r",__FUNCTION__,__LINE__);
            free_ctrl_buffer(p_buffer);
            return KAL_FALSE;
        }
        for(j = 0; j < ldi->size; j++)
        {
            if(p_buffer[0] != 0x1)
            {
                nvram_ut_trace("[NVUT] %s() @line %d: record[%d] data[0]:%d error!\n\r",__FUNCTION__,__LINE__,i,p_buffer[0]);
                free_ctrl_buffer(p_buffer);            
                return KAL_FALSE;
            }
            if((ldi->size >= 3) && (j <3))
            {
                if((p_buffer[1] != 0x2) ||(p_buffer[2] != 0x3))
                {
                    nvram_ut_trace("[NVUT] %s() @line %d: record[%d] data[1]:%d data[2]:%d error!\n\r",__FUNCTION__,__LINE__,i,p_buffer[1],p_buffer[2]);
                    free_ctrl_buffer(p_buffer);
                    return KAL_FALSE;
                }
            }
            else if (p_buffer[j] != 0x00)
            {               
               nvram_ut_trace("[NVUT] %s(): the data is not expected at record %d offset %d, @line %d!\n\r",__FUNCTION__,i,j,__LINE__);
               free_ctrl_buffer(p_buffer);
               return KAL_FALSE;;
            }
        }
        
    }

    //remove the HW Encrypt function
    ldi->attr &= ~NVRAM_ATTR_MSP;
    
    for(i = 1;i <= ldi->total_records; i++)
    {
        memset(p_buffer,0,ldi->size);
        if(nvram_external_read_data(NVRAM_EF_INTERNAL_TEST_15_LID,i,p_buffer,ldi->size))
        {
            nvram_ut_trace("[NVUT] %s(): nvram_external_read_data should fail but not@line %d!\n\r",__FUNCTION__,__LINE__);
            free_ctrl_buffer(p_buffer);
            return KAL_FALSE;
        }
    }
    ldi->attr |= NVRAM_ATTR_MSP;
    
    free_ctrl_buffer(p_buffer);
    return KAL_TRUE;
}

#if defined(__NVRAM_STRUCTURE_CHANGE_RESET__) || defined(__NVRAM_DEFVAL_CHANGE_RESET__)
extern const checksum_reset_struct lid_structure_chksum[];
extern const checksum_reset_struct lid_default_value_chksum[];


extern kal_uint32 lid_structure_chksum_num;
extern kal_uint32 lid_default_value_chksum_num;

kal_bool nvram_modify_structure_checksum(nvram_lid_enum LID)
{
    NVRAM_FILE_NAME nvramname;
    kal_wchar filename[NVRAM_MAX_PATH_LEN];
    nvram_folder_enum nvram_folder;
    FS_HANDLE file_handle = FS_INVALID_FILE_HANDLE;
    nvram_ldi_header nv_header;
    nvram_ltable_entry_struct *ldi;
    kal_bool mulpiple = KAL_FALSE, ret_val = KAL_TRUE;
    kal_int32 backup_file_num = 1, result;
    kal_uint32 len;

    nvram_util_get_data_item(&ldi, LID);
    nvram_util_make_lid_filename(ldi, nvramname, KAL_TRUE);
    nvram_folder = nvram_query_folder_index(ldi->category);
    nvram_query_file_name(nvram_folder, nvramname, filename);
    nvram_read_data_header(filename, LDI_HEADER_ALL_SECTION, &nv_header, NVRAM_LDI_HEADER_SIZE);
    nv_header.nv_dbg_header.struct_chkrst[0]++;

    //write header nvram_write_data_header()
    if(NVRAM_IS_ATTR_MULTIPLE(ldi->attr))
    {
        mulpiple = KAL_TRUE;
        backup_file_num = 2;
    }
    
    nvram_util_take_mutex(g_nvram_fs_mutex);
    do {
        file_handle = FS_Open(filename, FS_READ_WRITE | FS_OPEN_NO_DIR | FS_CREATE);
        if (file_handle < FS_NO_ERROR) {
            if(NVRAM_IS_ATTR_FAULT_ASSERT(ldi->attr)) {
                NVRAM_EXT_ASSERT(KAL_FALSE, (kal_uint32)file_handle, NVRAM_LOC_OPEN_NV_FOLDER_FAIL_4, ldi->LID);
            }
            ret_val = KAL_FALSE;
        }
        if ((result = FS_Write(file_handle, (void *)(&nv_header), sizeof(nv_header), &len)) < FS_NO_ERROR) {
            if(NVRAM_IS_ATTR_FAULT_ASSERT(ldi->attr)) {
                NVRAM_EXT_ASSERT(KAL_FALSE, (kal_uint32)file_handle, NVRAM_LOC_OPEN_NV_FOLDER_FAIL_5, ldi->LID);
            }
            ret_val = KAL_FALSE;
        }
        if(file_handle > FS_NO_ERROR) {
            FS_Close(file_handle);
        }
        if(!mulpiple)
        {
          break;  
        }
        nvram_folder = nvram_query_folder_index_ex(ldi->category,KAL_FALSE);
        nvram_util_make_lid_filename(ldi, nvramname, KAL_FALSE);
        nvram_query_file_name(nvram_folder, nvramname, filename);
    }while(backup_file_num > 0);
    nvram_util_give_mutex(g_nvram_fs_mutex);

    return ret_val;
}

kal_bool nvram_modify_default_value_checksum(nvram_lid_enum LID)
{
    NVRAM_FILE_NAME nvramname;
    kal_wchar filename[NVRAM_MAX_PATH_LEN];
    nvram_folder_enum nvram_folder;
    FS_HANDLE file_handle = FS_INVALID_FILE_HANDLE;
    nvram_ldi_header nv_header;
    nvram_ltable_entry_struct *ldi;
    kal_bool mulpiple = KAL_FALSE, ret_val = KAL_TRUE;
    kal_int32 backup_file_num = 1, result;
    kal_uint32 len;

    nvram_util_get_data_item(&ldi, LID);
    nvram_util_make_lid_filename(ldi, nvramname, KAL_TRUE);
    nvram_folder = nvram_query_folder_index(ldi->category);
    nvram_query_file_name(nvram_folder, nvramname, filename);
    nvram_read_data_header(filename, LDI_HEADER_ALL_SECTION, &nv_header, NVRAM_LDI_HEADER_SIZE);
    nv_header.nv_dbg_header.defval_chkrst_l[0]++;

    //write header nvram_write_data_header()
    if(NVRAM_IS_ATTR_MULTIPLE(ldi->attr))
    {
        mulpiple = KAL_TRUE;
        backup_file_num = 2;
    }
    
    nvram_util_take_mutex(g_nvram_fs_mutex);
    do {
        file_handle = FS_Open(filename, FS_READ_WRITE | FS_OPEN_NO_DIR | FS_CREATE);
        if (file_handle < FS_NO_ERROR) {
            if(NVRAM_IS_ATTR_FAULT_ASSERT(ldi->attr)) {
                NVRAM_EXT_ASSERT(KAL_FALSE, (kal_uint32)file_handle, NVRAM_LOC_OPEN_NV_FOLDER_FAIL_4, ldi->LID);
            }
            ret_val = KAL_FALSE;
        }
        if ((result = FS_Write(file_handle, (void *)(&nv_header), sizeof(nv_header), &len)) < FS_NO_ERROR) {
            if(NVRAM_IS_ATTR_FAULT_ASSERT(ldi->attr)) {
                NVRAM_EXT_ASSERT(KAL_FALSE, (kal_uint32)file_handle, NVRAM_LOC_OPEN_NV_FOLDER_FAIL_5, ldi->LID);
            }
            ret_val = KAL_FALSE;
        }
        if(file_handle > FS_NO_ERROR) {
            FS_Close(file_handle);
        }
        if(!mulpiple)
        {
          break;  
        }
        nvram_folder = nvram_query_folder_index_ex(ldi->category,KAL_FALSE);
        nvram_util_make_lid_filename(ldi, nvramname, KAL_FALSE);
        nvram_query_file_name(nvram_folder, nvramname, filename);
    }while(backup_file_num > 0);
    nvram_util_give_mutex(g_nvram_fs_mutex);

    return ret_val;
}

kal_bool nvram_verify_checksum(nvram_lid_enum LID)
{
    NVRAM_FILE_NAME nvramname;
    kal_wchar filename[NVRAM_MAX_PATH_LEN];
    nvram_folder_enum nvram_folder;
    nvram_ldi_header nv_header;
    nvram_ltable_entry_struct *ldi;
    kal_int32 index = 0;

    nvram_util_get_data_item(&ldi, LID);
    nvram_util_make_lid_filename(ldi, nvramname, KAL_TRUE);
    nvram_folder = nvram_query_folder_index(ldi->category);
    nvram_query_file_name(nvram_folder, nvramname, filename);
    nvram_read_data_header(filename, LDI_HEADER_ALL_SECTION, &nv_header, NVRAM_LDI_HEADER_SIZE);

    #if defined(__NVRAM_STRUCTURE_CHANGE_RESET__)
    for(index = 0; index < lid_structure_chksum_num && LID != lid_structure_chksum[index].LID; index ++)
    {}
    if(index >= lid_structure_chksum_num)
    {
        nvram_ut_trace("[NVUT] nvram_verify_checksum(): LID not in structure checksum table!\n\r");
        nvram_ut_trace("[NVUT] LID: %d!\n\r", LID);
        return KAL_FALSE;
    }
    if(strncmp((const char *)(lid_structure_chksum[index].chksum), (const char *)(nv_header.nv_dbg_header.struct_chkrst), RST_CHKSUM_SIZE))
    {
        nvram_ut_trace("[NVUT] nvram_verify_checksum(): structure checksum not match LID header!\n\r");
        nvram_ut_trace("[NVUT] LID: %d!\n\r", LID);
        return KAL_FALSE;
    }
    #endif

    #if defined(__NVRAM_DEFVAL_CHANGE_RESET__)
    for(index = 0; index < lid_default_value_chksum_num && LID != lid_default_value_chksum[index].LID; index ++)
    {}
    if(index >= lid_default_value_chksum_num)
    {
        nvram_ut_trace("[NVUT] nvram_verify_checksum(): LID not in default value checksum table!\n\r");
        nvram_ut_trace("[NVUT] LID: %d!\n\r", LID);
        return KAL_FALSE;
    }
    if(strncmp((const char *)(nv_header.nv_ota_header.defval_chkrst_h), (const char *)(lid_default_value_chksum[index].chksum), RST_CHKSUM_SIZE-6) ||
        strncmp((const char *)(nv_header.nv_dbg_header.defval_chkrst_l), (const char*)(&(lid_default_value_chksum[index].chksum[RST_CHKSUM_SIZE-6])), 6))
    {
        nvram_ut_trace("[NVUT] nvram_verify_checksum(): default value checksum not match LID header!\n\r");
        nvram_ut_trace("[NVUT] LID: %d!\n\r", LID);
        return KAL_FALSE;
    }
    #endif

    return KAL_TRUE;
}
    


kal_bool nvram_smart_reset_entry_test(kal_uint32 flags, void *param)
{
    nvram_ltable_entry_struct *ldi = &logical_data_item_table[0];
    kal_int32 index = 0;
    kal_bool case_fail = KAL_FALSE;

    //first round check: every reset LID should in checksum table
    do
    {
    #if defined(__NVRAM_STRUCTURE_CHANGE_RESET__)
        if(NVRAM_STRUCTURE_CHKSUM_CHANGE_RESETABLE(ldi))
        {
            for(index = 0; index < lid_structure_chksum_num && lid_structure_chksum[index].LID != ldi->LID; index ++)
            {}
            if(index >= lid_structure_chksum_num)
            {
                nvram_ut_trace("[NVUT] nvram_smart_reset_entry_test(): LID not in structure checksum table!\n\r");
                nvram_ut_trace("[NVUT] LID: %d!\n\r", ldi->LID);
                case_fail = KAL_TRUE;
            }
        }
    #endif

    #if defined(__NVRAM_DEFVAL_CHANGE_RESET__)
        if(NVRAM_DEFVAL_CHKSUM_CHANGE_RESETABLE(ldi))
        {
            for(index = 0; index < lid_default_value_chksum_num && lid_default_value_chksum[index].LID != ldi->LID; index ++)
            {}
            if(index >= lid_default_value_chksum_num)
            {
                nvram_ut_trace("[NVUT] nvram_smart_reset_entry_test(): LID not in default value checksum table!\n\r");
                nvram_ut_trace("[NVUT] LID: %d!\n\r", ldi->LID);
                case_fail = KAL_TRUE;
            }            
        }
    #endif
    }while(nvram_util_next_data_item(&ldi));

    //second round check: every LID in checksum table should be reset LID
    #if defined(__NVRAM_STRUCTURE_CHANGE_RESET__)
    for(index = 0; index < lid_structure_chksum_num; index++)
    {
        ldi = NULL;
        nvram_util_get_data_item(&ldi, lid_structure_chksum[index].LID);
        if(! ldi)
        {
            nvram_ut_trace("[NVUT] nvram_smart_reset_entry_test(): structure checksum LID not in LID table!\n\r");
            nvram_ut_trace("[NVUT] LID: %d!\n\r", lid_structure_chksum[index].LID);
            case_fail = KAL_TRUE;
        }
        if(! NVRAM_STRUCTURE_CHKSUM_CHANGE_RESETABLE(ldi))
        {
            nvram_ut_trace("[NVUT] nvram_smart_reset_entry_test(): structure checksum LID can not be reset!\n\r");
            nvram_ut_trace("[NVUT] LID: %d!\n\r", lid_structure_chksum[index].LID);
            case_fail = KAL_TRUE;          
        }
        
    }
    #endif

    #if defined(__NVRAM_DEFVAL_CHANGE_RESET__)
    for(index = 0; index < lid_default_value_chksum_num; index++)
    {
        ldi = NULL;
        nvram_util_get_data_item(&ldi, lid_default_value_chksum[index].LID);
        if(! ldi)
        {
            nvram_ut_trace("[NVUT] nvram_smart_reset_entry_test(): structure checksum LID not in LID table!\n\r");
            nvram_ut_trace("[NVUT] LID: %d!\n\r", lid_default_value_chksum[index].LID);
            case_fail = KAL_TRUE;
        }
        if(! NVRAM_DEFVAL_CHKSUM_CHANGE_RESETABLE(ldi))
        {
            nvram_ut_trace("[NVUT] nvram_smart_reset_entry_test(): default value checksum LID can not be reset!\n\r");
            nvram_ut_trace("[NVUT] LID: %d!\n\r", lid_default_value_chksum[index].LID);
            case_fail = KAL_TRUE;            
        }
    }
    #endif

    if(case_fail)
        return KAL_FALSE;
    else
        return KAL_TRUE; 
}

kal_bool nvram_structure_change_reset_test(kal_uint32 flags, void *param)
{
    nvram_ltable_entry_struct *ldi = NULL;
    kal_uint8 *d_buffer, *c_buffer;
    kal_uint8 i, j;
    
    //reset test LIDs to default settings
    for(i = 0; i < test_lid_number; i++)
    {
        if(!reset_test_lid_default_setting(test_lid_enum[i]))
        {
            nvram_ut_trace("[NVUT] nvram_structure_change_reset_test(): reset LIDs to default setting fail!\n\r");
            return KAL_FALSE;
        }
    }

    //reset test LIDs
    for(i = 0; i < test_lid_number; i++)
    {
        nvram_util_get_data_item(&ldi, test_lid_enum[i]);
        if(!nvram_reset_data_items(NVRAM_RESET_CERTAIN, NVRAM_APP_RESERVED, ldi, 1, ldi->total_records))
        {
            nvram_ut_trace("[NVUT] nvram_structure_change_reset_test(): reset test LIDs fail!\n\r");
            return KAL_FALSE;
        }
    }

    //write test LIDs to non-default
    nvram_write_test_lids();

    //modify structure checksum
    for(i = 0; i < test_lid_number; i++)
    {
        nvram_modify_structure_checksum(test_lid_enum[i]);
    }    
    
    //reset SYS LID
    if(!nvram_external_reset_data(NVRAM_EF_SW_VERNO_LID, SW_VERNO_RECORD_NUMBER, 1))
    {
        nvram_ut_trace("[NVUT] nvram_structure_change_reset_test(): reset SYS LID fail!\n\r");
        return KAL_FALSE;
    }

    //modify MD SW version
    if(!modify_md_sw_version())
    {
        nvram_ut_trace("[NVUT] nvram_structure_change_reset_test(): modify MD SW version fail!\n\r");
        return KAL_FALSE;
    }

    //call nvram_init()
    nvram_boot_trace = 0;
    nvram_init();
    if(!(nvram_boot_trace & BOOT_TRACE_SW_VERNO_CONFLICT))
    {
        nvram_ut_trace("[NVUT] nvram_structure_change_reset_test(): enter version conflict fail!\n\r");
        return KAL_FALSE;
    }

    //check new checksum is right
    if(! nvram_verify_checksum(NVRAM_EF_NVRAM_TEST_1_LID)) //USER category
    {
        return KAL_FALSE;
    }
    if(! nvram_verify_checksum(NVRAM_EF_NVRAM_TEST_5_LID)) //L1 category
    {
        return KAL_FALSE;
    }
    
    //check LID is reset
    for(j = 0; j < test_lid_number; j++)
    {
        nvram_util_get_data_item(&ldi, test_lid_enum[j]);
        d_buffer = (kal_uint8*)get_ctrl_buffer(ldi->size);
        c_buffer = (kal_uint8*)get_ctrl_buffer(ldi->size);
        kal_mem_set(c_buffer, 0x33, ldi->size);
        kal_mem_set(d_buffer, 0x66, ldi->size);
        for(i = 1; i <= ldi->total_records; i++)
        {
            nvram_get_default_value_to_write(ldi, i, c_buffer, ldi->size);
            nvram_external_read_data(ldi->LID, i, d_buffer, ldi->size);
            if(ldi->LID == NVRAM_EF_NVRAM_TEST_1_LID || ldi->LID == NVRAM_EF_NVRAM_TEST_5_LID)
            {
                if(kal_mem_cmp((kal_char*)d_buffer, (kal_char*)c_buffer, ldi->size))
                {
                    nvram_ut_trace("[NVUT] nvram_structure_change_reset_test(): LID do not reset!\n\r");
                    nvram_ut_trace("[NVUT] LID: %d!\n\r", ldi->LID);
                    free_ctrl_buffer(d_buffer);
                    free_ctrl_buffer(c_buffer);
                    return KAL_FALSE;
                }
            }
            else
            {
                if(! kal_mem_cmp((kal_char*)d_buffer, (kal_char*)c_buffer, ldi->size))
                {
                    nvram_ut_trace("[NVUT] nvram_structure_change_reset_test(): un-expect LID reset!\n\r");
                    nvram_ut_trace("[NVUT] LID: %d!\n\r", ldi->LID);
                    free_ctrl_buffer(d_buffer);
                    free_ctrl_buffer(c_buffer);
                    return KAL_FALSE;
                }
            }
        }
        free_ctrl_buffer(d_buffer);
        free_ctrl_buffer(c_buffer);
    }

    return KAL_TRUE;
}

kal_bool nvram_default_value_change_reset_test(kal_uint32 flags, void *param)
{
    nvram_ltable_entry_struct *ldi = NULL;
    kal_uint8 *d_buffer, *c_buffer;
    kal_uint8 i, j;
    
    //reset test LIDs to default settings
    for(i = 0; i < test_lid_number; i++)
    {
        if(!reset_test_lid_default_setting(test_lid_enum[i]))
        {
            nvram_ut_trace("[NVUT] nvram_structure_change_reset_test(): reset LIDs to default setting fail!\n\r");
            return KAL_FALSE;
        }
    }

    //reset test LIDs
    for(i = 0; i < test_lid_number; i++)
    {
        nvram_util_get_data_item(&ldi, test_lid_enum[i]);
        if(!nvram_reset_data_items(NVRAM_RESET_CERTAIN, NVRAM_APP_RESERVED, ldi, 1, ldi->total_records))
        {
            nvram_ut_trace("[NVUT] nvram_structure_change_reset_test(): reset test LIDs fail!\n\r");
            return KAL_FALSE;
        }
    }

    //write test LIDs to non-default
    nvram_write_test_lids();

    //modify structure checksum
    for(i = 0; i < test_lid_number; i++)
    {
        nvram_modify_default_value_checksum(test_lid_enum[i]);
    }    
    
    //reset SYS LID
    if(!nvram_external_reset_data(NVRAM_EF_SW_VERNO_LID, SW_VERNO_RECORD_NUMBER, 1))
    {
        nvram_ut_trace("[NVUT] nvram_structure_change_reset_test(): reset SYS LID fail!\n\r");
        return KAL_FALSE;
    }

    //modify MD SW version
    if(!modify_md_sw_version())
    {
        nvram_ut_trace("[NVUT] nvram_structure_change_reset_test(): modify MD SW version fail!\n\r");
        return KAL_FALSE;
    }

    //call nvram_init()
    nvram_boot_trace = 0;
    nvram_init();
    if(!(nvram_boot_trace & BOOT_TRACE_SW_VERNO_CONFLICT))
    {
        nvram_ut_trace("[NVUT] nvram_structure_change_reset_test(): enter version conflict fail!\n\r");
        return KAL_FALSE;
    }

    //check new checksum is right
    if(! nvram_verify_checksum(NVRAM_EF_NVRAM_TEST_1_LID)) //USER category
    {
        return KAL_FALSE;
    }
    if(! nvram_verify_checksum(NVRAM_EF_NVRAM_TEST_5_LID)) //L1 category
    {
        return KAL_FALSE;
    }
    
    //check LID is reset
    for(j = 0; j < test_lid_number; j++)
    {
        nvram_util_get_data_item(&ldi, test_lid_enum[j]);
        d_buffer = (kal_uint8*)get_ctrl_buffer(ldi->size);
        c_buffer = (kal_uint8*)get_ctrl_buffer(ldi->size);
        kal_mem_set(c_buffer, 0x33, ldi->size);
        kal_mem_set(d_buffer, 0x66, ldi->size);
        for(i = 1; i <= ldi->total_records; i++)
        {
            nvram_get_default_value_to_write(ldi, i, c_buffer, ldi->size);
            nvram_external_read_data(ldi->LID, i, d_buffer, ldi->size);
            if(ldi->LID == NVRAM_EF_NVRAM_TEST_1_LID || ldi->LID == NVRAM_EF_NVRAM_TEST_5_LID)
            {
                if(kal_mem_cmp((kal_char*)d_buffer, (kal_char*)c_buffer, ldi->size))
                {
                    nvram_ut_trace("[NVUT] nvram_structure_change_reset_test(): LID do not reset!\n\r");
                    nvram_ut_trace("[NVUT] LID: %d!\n\r", ldi->LID);
                    free_ctrl_buffer(d_buffer);
                    free_ctrl_buffer(c_buffer);
                    return KAL_FALSE;
                }
            }
            else
            {
                if(! kal_mem_cmp((kal_char*)d_buffer, (kal_char*)c_buffer, ldi->size))
                {
                    nvram_ut_trace("[NVUT] nvram_structure_change_reset_test(): un-expect LID reset!\n\r");
                    nvram_ut_trace("[NVUT] LID: %d!\n\r", ldi->LID);
                    free_ctrl_buffer(d_buffer);
                    free_ctrl_buffer(c_buffer);
                    return KAL_FALSE;
                }
            }
        }
        free_ctrl_buffer(d_buffer);
        free_ctrl_buffer(c_buffer);
    }

    return KAL_TRUE;
}

kal_bool nvram_func_default_checksum_change_test(kal_uint32 flags, void *param)
{
    nvram_ltable_entry_struct *ldi = NULL;
    kal_uint8 *d_buffer, *c_buffer;
    kal_uint8 i, j;
    
    //reset test LIDs to default settings
    for(i = 0; i < test_lid_number; i++)
    {
        if(!reset_test_lid_default_setting(test_lid_enum[i]))
        {
            nvram_ut_trace("[NVUT] nvram_structure_change_reset_test(): reset LIDs to default setting fail!\n\r");
            return KAL_FALSE;
        }
        if(test_lid_enum[i] == NVRAM_EF_NVRAM_TEST_1_LID || test_lid_enum[i] == NVRAM_EF_NVRAM_TEST_5_LID)
        {
            nvram_util_get_data_item(&ldi, test_lid_enum[i]);
            ldi->category |= NVRAM_CATEGORY_FUNC_DEFAULT;
            ldi->default_value= (kal_uint8 const*)nvram_ut_get_default_value;
        }
    }

    //reset test LIDs
    for(i = 0; i < test_lid_number; i++)
    {
        nvram_util_get_data_item(&ldi, test_lid_enum[i]);
        if(!nvram_reset_data_items(NVRAM_RESET_CERTAIN, NVRAM_APP_RESERVED, ldi, 1, ldi->total_records))
        {
            nvram_ut_trace("[NVUT] nvram_structure_change_reset_test(): reset test LIDs fail!\n\r");
            return KAL_FALSE;
        }
    }

    //write test LIDs to non-default
    nvram_write_test_lids();

    //modify structure checksum
    for(i = 0; i < test_lid_number; i++)
    {
        nvram_modify_default_value_checksum(test_lid_enum[i]);
    }    
    
    //reset SYS LID
    if(!nvram_external_reset_data(NVRAM_EF_SW_VERNO_LID, SW_VERNO_RECORD_NUMBER, 1))
    {
        nvram_ut_trace("[NVUT] nvram_structure_change_reset_test(): reset SYS LID fail!\n\r");
        return KAL_FALSE;
    }

    //modify MD SW version
    if(!modify_md_sw_version())
    {
        nvram_ut_trace("[NVUT] nvram_structure_change_reset_test(): modify MD SW version fail!\n\r");
        return KAL_FALSE;
    }

    //call nvram_init()
    nvram_boot_trace = 0;
    nvram_init();
    if(!(nvram_boot_trace & BOOT_TRACE_SW_VERNO_CONFLICT))
    {
        nvram_ut_trace("[NVUT] nvram_structure_change_reset_test(): enter version conflict fail!\n\r");
        return KAL_FALSE;
    }
    
    //check LID is reset
    for(j = 0; j < test_lid_number; j++)
    {
        nvram_util_get_data_item(&ldi, test_lid_enum[j]);
        d_buffer = (kal_uint8*)get_ctrl_buffer(ldi->size);
        c_buffer = (kal_uint8*)get_ctrl_buffer(ldi->size);
        kal_mem_set(c_buffer, 0x33, ldi->size);
        kal_mem_set(d_buffer, 0x66, ldi->size);
        for(i = 1; i <= ldi->total_records; i++)
        {
            nvram_get_default_value_to_write(ldi, i, c_buffer, ldi->size);
            nvram_external_read_data(ldi->LID, i, d_buffer, ldi->size);
            if(! kal_mem_cmp((kal_char*)d_buffer, (kal_char*)c_buffer, ldi->size))
            {
                nvram_ut_trace("[NVUT] nvram_structure_change_reset_test(): un-expect LID reset!\n\r");
                nvram_ut_trace("[NVUT] LID: %d!\n\r", ldi->LID);
                free_ctrl_buffer(d_buffer);
                free_ctrl_buffer(c_buffer);
                return KAL_FALSE;
            }
        }
        free_ctrl_buffer(d_buffer);
        free_ctrl_buffer(c_buffer);
    }

    return KAL_TRUE;
}

kal_bool nvram_smart_reset_checksum_test(kal_uint32 flags, void *param)
{
    nvram_ltable_entry_struct *ldi = NULL;
    kal_uint8 i;
    
    //reset test LIDs to default settings
    for(i = 0; i < test_lid_number; i++)
    {
        if(!reset_test_lid_default_setting(test_lid_enum[i]))
        {
            nvram_ut_trace("[NVUT] nvram_structure_change_reset_test(): reset LIDs to default setting fail!\n\r");
            return KAL_FALSE;
        }
    }

    //reset test LIDs
    for(i = 0; i < test_lid_number; i++)
    {
        nvram_util_get_data_item(&ldi, test_lid_enum[i]);
        if(!nvram_reset_data_items(NVRAM_RESET_CERTAIN, NVRAM_APP_RESERVED, ldi, 1, ldi->total_records))
        {
            nvram_ut_trace("[NVUT] nvram_structure_change_reset_test(): reset test LIDs fail!\n\r");
            return KAL_FALSE;
        }
    }

    //check new checksum is right
    if(! nvram_verify_checksum(NVRAM_EF_NVRAM_TEST_1_LID)) //USER category
    {
        return KAL_FALSE;
    }
    if(! nvram_verify_checksum(NVRAM_EF_NVRAM_TEST_5_LID)) //L1 category
    {
        return KAL_FALSE;
    }

    //write test LIDs to non-default
    nvram_write_test_lids();

    //check new checksum is right
    if(! nvram_verify_checksum(NVRAM_EF_NVRAM_TEST_1_LID)) //USER category
    {
        return KAL_FALSE;
    }
    if(! nvram_verify_checksum(NVRAM_EF_NVRAM_TEST_5_LID)) //L1 category
    {
        return KAL_FALSE;
    }

    return KAL_TRUE;
}

kal_bool nvram_no_checksum_change_test(kal_uint32 flags, void *param)
{
    nvram_ltable_entry_struct *ldi = NULL;
    kal_uint8 *d_buffer, *c_buffer;
    kal_uint8 i, j;
    
    //reset test LIDs to default settings
    for(i = 0; i < test_lid_number; i++)
    {
        if(!reset_test_lid_default_setting(test_lid_enum[i]))
        {
            nvram_ut_trace("[NVUT] nvram_structure_change_reset_test(): reset LIDs to default setting fail!\n\r");
            return KAL_FALSE;
        }
    }

    //reset test LIDs
    for(i = 0; i < test_lid_number; i++)
    {
        nvram_util_get_data_item(&ldi, test_lid_enum[i]);
        if(!nvram_reset_data_items(NVRAM_RESET_CERTAIN, NVRAM_APP_RESERVED, ldi, 1, ldi->total_records))
        {
            nvram_ut_trace("[NVUT] nvram_structure_change_reset_test(): reset test LIDs fail!\n\r");
            return KAL_FALSE;
        }
    }

    //write test LIDs to non-default
    nvram_write_test_lids();
    
    //reset SYS LID
    if(!nvram_external_reset_data(NVRAM_EF_SW_VERNO_LID, SW_VERNO_RECORD_NUMBER, 1))
    {
        nvram_ut_trace("[NVUT] nvram_structure_change_reset_test(): reset SYS LID fail!\n\r");
        return KAL_FALSE;
    }

    //modify MD SW version
    if(!modify_md_sw_version())
    {
        nvram_ut_trace("[NVUT] nvram_structure_change_reset_test(): modify MD SW version fail!\n\r");
        return KAL_FALSE;
    }

    //call nvram_init()
    nvram_boot_trace = 0;
    nvram_init();
    if(!(nvram_boot_trace & BOOT_TRACE_SW_VERNO_CONFLICT))
    {
        nvram_ut_trace("[NVUT] nvram_structure_change_reset_test(): enter version conflict fail!\n\r");
        return KAL_FALSE;
    }

    //check new checksum is right
    if(! nvram_verify_checksum(NVRAM_EF_NVRAM_TEST_1_LID)) //USER category
    {
        return KAL_FALSE;
    }
    if(! nvram_verify_checksum(NVRAM_EF_NVRAM_TEST_5_LID)) //L1 category
    {
        return KAL_FALSE;
    }
    
    //check LID is reset
    for(j = 0; j < test_lid_number; j++)
    {
        nvram_util_get_data_item(&ldi, test_lid_enum[j]);
        d_buffer = (kal_uint8*)get_ctrl_buffer(ldi->size);
        c_buffer = (kal_uint8*)get_ctrl_buffer(ldi->size);
        kal_mem_set(c_buffer, 0x33, ldi->size);
        kal_mem_set(d_buffer, 0x66, ldi->size);
        for(i = 1; i <= ldi->total_records; i++)
        {
            nvram_get_default_value_to_write(ldi, i, c_buffer, ldi->size);
            nvram_external_read_data(ldi->LID, i, d_buffer, ldi->size);
            if(! kal_mem_cmp((kal_char*)d_buffer, (kal_char*)c_buffer, ldi->size))
            {
                nvram_ut_trace("[NVUT] nvram_structure_change_reset_test(): un-expect LID reset!\n\r");
                nvram_ut_trace("[NVUT] LID: %d!\n\r", ldi->LID);
                free_ctrl_buffer(d_buffer);
                free_ctrl_buffer(c_buffer);
                return KAL_FALSE;
            }
        }
        free_ctrl_buffer(d_buffer);
        free_ctrl_buffer(c_buffer);
    }

    return KAL_TRUE;
}

kal_bool nvram_write_header_test(kal_uint32 flags, void *param)
{
    NVRAM_FILE_NAME nvramname;
    kal_wchar filename[NVRAM_MAX_PATH_LEN];
    nvram_folder_enum nvram_folder;
    nvram_ldi_header nv_header, nv_header_cmp;
    nvram_ltable_entry_struct *ldi;
    kal_uint8 i;
    
    //reset test LIDs to default settings
    for(i = 0; i < test_lid_number; i++)
    {
        if(!reset_test_lid_default_setting(test_lid_enum[i]))
        {
            nvram_ut_trace("[NVUT] nvram_write_header_test(): reset LIDs to default setting fail!\n\r");
            return KAL_FALSE;
        }
    }

    //reset test LIDs
    for(i = 0; i < test_lid_number; i++)
    {
        nvram_util_get_data_item(&ldi, test_lid_enum[i]);
        if(!nvram_reset_data_items(NVRAM_RESET_CERTAIN, NVRAM_APP_RESERVED, ldi, 1, ldi->total_records))
        {
            nvram_ut_trace("[NVUT] nvram_write_header_test(): reset test LIDs fail!\n\r");
            return KAL_FALSE;
        }
    }

    nvram_util_get_data_item(&ldi, NVRAM_EF_NVRAM_TEST_1_LID); //only use NVRAM_EF_NVRAM_TEST_1_LID to test
    nvram_util_make_lid_filename(ldi, nvramname, KAL_TRUE);
    nvram_folder = nvram_query_folder_index(ldi->category);
    nvram_query_file_name(nvram_folder, nvramname, filename);
    nvram_read_data_header(filename, LDI_HEADER_ALL_SECTION, &nv_header, NVRAM_LDI_HEADER_SIZE);

    //write ota header by API
    nvram_write_data_header(ldi, LDI_HEADER_OTA_SECTION);
    nvram_read_data_header(filename, LDI_HEADER_ALL_SECTION, &nv_header_cmp, NVRAM_LDI_HEADER_SIZE);
    if(strncmp((const char *)(nv_header.nv_dbg_header.defval_chkrst_l), (const char *)(nv_header_cmp.nv_dbg_header.defval_chkrst_l), 6) ||
       strncmp((const char *)(nv_header.nv_dbg_header.struct_chkrst), (const char *)(nv_header_cmp.nv_dbg_header.struct_chkrst), RST_CHKSUM_SIZE) ||
       strncmp((const char *)(nv_header.nv_ota_header.defval_chkrst_h), (const char *)(nv_header_cmp.nv_ota_header.defval_chkrst_h), RST_CHKSUM_SIZE-6))
    {
        nvram_ut_trace("[NVUT] nvram_write_header_test(): write ota header checksum change!\n\r");
        return KAL_FALSE;
    }
    
    //write dbg header by API
    nvram_write_data_header(ldi, LDI_HEADER_DBG_SECTION);
    nvram_read_data_header(filename, LDI_HEADER_ALL_SECTION, &nv_header_cmp, NVRAM_LDI_HEADER_SIZE);
    if(strncmp((const char *)(nv_header.nv_dbg_header.defval_chkrst_l), (const char *)(nv_header_cmp.nv_dbg_header.defval_chkrst_l), 6) ||
       strncmp((const char *)(nv_header.nv_dbg_header.struct_chkrst), (const char *)(nv_header_cmp.nv_dbg_header.struct_chkrst), RST_CHKSUM_SIZE) ||
       strncmp((const char *)(nv_header.nv_ota_header.defval_chkrst_h), (const char *)(nv_header_cmp.nv_ota_header.defval_chkrst_h), RST_CHKSUM_SIZE-6))
    {
        nvram_ut_trace("[NVUT] nvram_write_header_test(): write dbg header checksum change!\n\r");
        return KAL_FALSE;
    }

    //write all header by API
    nvram_write_data_header(ldi, LDI_HEADER_ALL_SECTION);
    nvram_read_data_header(filename, LDI_HEADER_ALL_SECTION, &nv_header_cmp, NVRAM_LDI_HEADER_SIZE);
    if(strncmp((const char *)(nv_header.nv_dbg_header.defval_chkrst_l), (const char *)(nv_header_cmp.nv_dbg_header.defval_chkrst_l), 6) ||
       strncmp((const char *)(nv_header.nv_dbg_header.struct_chkrst), (const char *)(nv_header_cmp.nv_dbg_header.struct_chkrst), RST_CHKSUM_SIZE) ||
       strncmp((const char *)(nv_header.nv_ota_header.defval_chkrst_h), (const char *)(nv_header_cmp.nv_ota_header.defval_chkrst_h), RST_CHKSUM_SIZE-6))
    {
        nvram_ut_trace("[NVUT] nvram_write_header_test(): write all header checksum change!\n\r");
        return KAL_FALSE;
    }

    return KAL_TRUE;
}

kal_bool nvram_attribute_change_reset_test(kal_uint32 flags, void *param)
{
    nvram_ltable_entry_struct *ldi = NULL;
    kal_uint8 *d_buffer, *c_buffer;
    kal_uint8 i, j;
    
    //reset test LIDs to default settings
    for(i = 0; i < test_lid_number; i++)
    {
        if(!reset_test_lid_default_setting(test_lid_enum[i]))
        {
            nvram_ut_trace("[NVUT] nvram_attribute_change_reset_test(): reset LIDs to default setting fail!\n\r");
            return KAL_FALSE;
        }
    }

    //reset test LIDs
    for(i = 0; i < test_lid_number; i++)
    {
        nvram_util_get_data_item(&ldi, test_lid_enum[i]);
        if(!nvram_reset_data_items(NVRAM_RESET_CERTAIN, NVRAM_APP_RESERVED, ldi, 1, ldi->total_records))
        {
            nvram_ut_trace("[NVUT] nvram_attribute_change_reset_test(): reset test LIDs fail!\n\r");
            return KAL_FALSE;
        }
    }

    //write test LIDs to non-default
    nvram_write_test_lids();

    //modify attribute
    for(i = 0; i < test_lid_number; i++)
    {
        nvram_util_get_data_item(&ldi, test_lid_enum[i]);
        ldi->attr &= (~NVRAM_ATTR_GEN_DEFAULT); //remove GEN_DEFAULT
    }
    
    //reset SYS LID
    if(!nvram_external_reset_data(NVRAM_EF_SW_VERNO_LID, SW_VERNO_RECORD_NUMBER, 1))
    {
        nvram_ut_trace("[NVUT] nvram_attribute_change_reset_test(): reset SYS LID fail!\n\r");
        return KAL_FALSE;
    }

    //modify MD SW version
    if(!modify_md_sw_version())
    {
        nvram_ut_trace("[NVUT] nvram_attribute_change_reset_test(): modify MD SW version fail!\n\r");
        return KAL_FALSE;
    }

    //call nvram_init()
    nvram_boot_trace = 0;
    nvram_init();
    if(!(nvram_boot_trace & BOOT_TRACE_SW_VERNO_CONFLICT))
    {
        nvram_ut_trace("[NVUT] nvram_attribute_change_reset_test(): enter version conflict fail!\n\r");
        return KAL_FALSE;
    }
    
    //check LID is reset
    for(j = 0; j < test_lid_number; j++)
    {
        nvram_util_get_data_item(&ldi, test_lid_enum[j]);
        d_buffer = (kal_uint8*)get_ctrl_buffer(ldi->size);
        c_buffer = (kal_uint8*)get_ctrl_buffer(ldi->size);
        kal_mem_set(c_buffer, 0x33, ldi->size);
        kal_mem_set(d_buffer, 0x66, ldi->size);
        for(i = 1; i <= ldi->total_records; i++)
        {
            nvram_get_default_value_to_write(ldi, i, c_buffer, ldi->size);
            nvram_external_read_data(ldi->LID, i, d_buffer, ldi->size);
            if(ldi->LID == NVRAM_EF_NVRAM_TEST_1_LID || ldi->LID == NVRAM_EF_NVRAM_TEST_5_LID)
            {
                if(kal_mem_cmp((kal_char*)d_buffer, (kal_char*)c_buffer, ldi->size))
                {
                    nvram_ut_trace("[NVUT] nvram_attribute_change_reset_test(): LID do not reset!\n\r");
                    nvram_ut_trace("[NVUT] LID: %d!\n\r", ldi->LID);
                    free_ctrl_buffer(d_buffer);
                    free_ctrl_buffer(c_buffer);
                    return KAL_FALSE;
                }
            }
            else
            {
                if(! kal_mem_cmp((kal_char*)d_buffer, (kal_char*)c_buffer, ldi->size))
                {
                    nvram_ut_trace("[NVUT] nvram_attribute_change_reset_test(): un-expect LID reset!\n\r");
                    nvram_ut_trace("[NVUT] LID: %d!\n\r", ldi->LID);
                    free_ctrl_buffer(d_buffer);
                    free_ctrl_buffer(c_buffer);
                    return KAL_FALSE;
                }
            }
        }
        free_ctrl_buffer(d_buffer);
        free_ctrl_buffer(c_buffer);
    }

    return KAL_TRUE;
}

kal_bool nvram_attribute_no_change_test(kal_uint32 flags, void *param)
{
    nvram_ltable_entry_struct *ldi = NULL;
    kal_uint8 *d_buffer, *c_buffer;
    kal_uint8 i, j;
    
    //reset test LIDs to default settings
    for(i = 0; i < test_lid_number; i++)
    {
        if(!reset_test_lid_default_setting(test_lid_enum[i]))
        {
            nvram_ut_trace("[NVUT] nvram_attribute_no_change_test(): reset LIDs to default setting fail!\n\r");
            return KAL_FALSE;
        }
    }

    //reset test LIDs
    for(i = 0; i < test_lid_number; i++)
    {
        nvram_util_get_data_item(&ldi, test_lid_enum[i]);
        if(!nvram_reset_data_items(NVRAM_RESET_CERTAIN, NVRAM_APP_RESERVED, ldi, 1, ldi->total_records))
        {
            nvram_ut_trace("[NVUT] nvram_attribute_no_change_test(): reset test LIDs fail!\n\r");
            return KAL_FALSE;
        }
    }

    //write test LIDs to non-default
    nvram_write_test_lids();

    //modify attribute
    for(i = 0; i < test_lid_number; i++)
    {
        nvram_util_get_data_item(&ldi, test_lid_enum[i]);
        ldi->attr |= NVRAM_ATTR_WRITEPROTECT; //add a now reset attribute to test
    }
    
    //reset SYS LID
    if(!nvram_external_reset_data(NVRAM_EF_SW_VERNO_LID, SW_VERNO_RECORD_NUMBER, 1))
    {
        nvram_ut_trace("[NVUT] nvram_attribute_no_change_test(): reset SYS LID fail!\n\r");
        return KAL_FALSE;
    }

    //modify MD SW version
    if(!modify_md_sw_version())
    {
        nvram_ut_trace("[NVUT] nvram_attribute_no_change_test(): modify MD SW version fail!\n\r");
        return KAL_FALSE;
    }

    //call nvram_init()
    nvram_boot_trace = 0;
    nvram_init();
    if(!(nvram_boot_trace & BOOT_TRACE_SW_VERNO_CONFLICT))
    {
        nvram_ut_trace("[NVUT] nvram_attribute_no_change_test(): enter version conflict fail!\n\r");
        return KAL_FALSE;
    }
    
    //check LID is reset
    for(j = 0; j < test_lid_number; j++)
    {
        nvram_util_get_data_item(&ldi, test_lid_enum[j]);
        d_buffer = (kal_uint8*)get_ctrl_buffer(ldi->size);
        c_buffer = (kal_uint8*)get_ctrl_buffer(ldi->size);
        kal_mem_set(c_buffer, 0x33, ldi->size);
        kal_mem_set(d_buffer, 0x66, ldi->size);
        for(i = 1; i <= ldi->total_records; i++)
        {
            nvram_get_default_value_to_write(ldi, i, c_buffer, ldi->size);
            nvram_external_read_data(ldi->LID, i, d_buffer, ldi->size);
            if(! kal_mem_cmp((kal_char*)d_buffer, (kal_char*)c_buffer, ldi->size))
            {
                nvram_ut_trace("[NVUT] nvram_attribute_no_change_test(): un-expect LID reset!\n\r");
                nvram_ut_trace("[NVUT] LID: %d!\n\r", ldi->LID);
                free_ctrl_buffer(d_buffer);
                free_ctrl_buffer(c_buffer);
                return KAL_FALSE;
            }
        }
        free_ctrl_buffer(d_buffer);
        free_ctrl_buffer(c_buffer);
    }

    return KAL_TRUE;
}
#endif

kal_bool nvram_smart_reset_new_ota_old_test(kal_uint32 flags, void *param)
{
    nvram_ltable_entry_struct *ldi = NULL;
    kal_uint8 *d_buffer, *c_buffer;
    kal_uint8 i, j;
    
    if(!manual_ota_reboot_finish)
    {
    #if defined(__NVRAM_STRUCTURE_CHANGE_RESET__) || defined(__NVRAM_DEFVAL_CHANGE_RESET__)
    #else
        nvram_ut_trace("[NVUT] nvram_smart_reset_new_ota_old_test(): First version is not smart reset enable!\n\r");
        return KAL_FALSE;
    #endif
        //reset test LIDs to default settings
        for(i = 0; i < test_lid_number; i++)
        {
            if(!reset_test_lid_default_setting(test_lid_enum[i]))
            {
                nvram_ut_trace("[NVUT] nvram_smart_reset_new_ota_old_test(): reset LIDs to default setting fail!\n\r");
                return KAL_FALSE;
            }
        }

        //reset test LIDs
        for(i = 0; i < test_lid_number; i++)
        {
            nvram_util_get_data_item(&ldi, test_lid_enum[i]);
            if(!nvram_reset_data_items(NVRAM_RESET_CERTAIN, NVRAM_APP_RESERVED, ldi, 1, ldi->total_records))
            {
                nvram_ut_trace("[NVUT] nvram_smart_reset_new_ota_old_test(): reset test LIDs fail!\n\r");
                return KAL_FALSE;
            }
        }

        //write test LIDs to non-default
        nvram_write_test_lids();
        ota_save_context();
        ota_notify_tester("Please mannual do OTA: NEW(smart reset) -> OLD(no smart reset)");
    }
    else
    {
        manual_ota_reboot_finish = KAL_FALSE;
    }
    
    //check LID is reset
    for(j = 0; j < test_lid_number; j++)
    {
        nvram_util_get_data_item(&ldi, test_lid_enum[j]);
        d_buffer = (kal_uint8*)get_ctrl_buffer(ldi->size);
        c_buffer = (kal_uint8*)get_ctrl_buffer(ldi->size);
        kal_mem_set(c_buffer, 0x33, ldi->size);
        kal_mem_set(d_buffer, 0x66, ldi->size);
        for(i = 1; i <= ldi->total_records; i++)
        {
            nvram_get_default_value_to_write(ldi, i, c_buffer, ldi->size);
            nvram_external_read_data(ldi->LID, i, d_buffer, ldi->size);
            if(ldi->LID == NVRAM_EF_NVRAM_TEST_1_LID || ldi->LID == NVRAM_EF_NVRAM_TEST_5_LID)
            {
                if(kal_mem_cmp((kal_char*)d_buffer, (kal_char*)c_buffer, ldi->size))
                {
                    nvram_ut_trace("[NVUT] nvram_smart_reset_new_ota_old_test(): LID do not reset!\n\r");
                    nvram_ut_trace("[NVUT] LID: %d!\n\r", ldi->LID);
                    free_ctrl_buffer(d_buffer);
                    free_ctrl_buffer(c_buffer);
                    return KAL_FALSE;
                }
            }
            else
            {
                if(! kal_mem_cmp((kal_char*)d_buffer, (kal_char*)c_buffer, ldi->size))
                {
                    nvram_ut_trace("[NVUT] nvram_smart_reset_new_ota_old_test(): un-expect LID reset!\n\r");
                    nvram_ut_trace("[NVUT] LID: %d!\n\r", ldi->LID);
                    free_ctrl_buffer(d_buffer);
                    free_ctrl_buffer(c_buffer);
                    return KAL_FALSE;
                }
            }

        }
        free_ctrl_buffer(d_buffer);
        free_ctrl_buffer(c_buffer);
    }

    return KAL_TRUE;
}

kal_bool nvram_smart_reset_old_ota_new_test(kal_uint32 flags, void *param)
{
    nvram_ltable_entry_struct *ldi = NULL;
    kal_uint8 *d_buffer, *c_buffer;
    kal_uint8 i, j;
    
    if(!manual_ota_reboot_finish)
    {
    #if defined(__NVRAM_STRUCTURE_CHANGE_RESET__) || defined(__NVRAM_DEFVAL_CHANGE_RESET__)
        nvram_ut_trace("[NVUT] nvram_smart_reset_old_ota_new_test(): Second version is not no smart reset!\n\r");
        return KAL_FALSE;
    #else
    #endif
        //reset test LIDs to default settings
        for(i = 0; i < test_lid_number; i++)
        {
            if(!reset_test_lid_default_setting(test_lid_enum[i]))
            {
                nvram_ut_trace("[NVUT] nvram_smart_reset_old_ota_new_test(): reset LIDs to default setting fail!\n\r");
                return KAL_FALSE;
            }
        }

        //reset test LIDs
        for(i = 0; i < test_lid_number; i++)
        {
            nvram_util_get_data_item(&ldi, test_lid_enum[i]);
            if(!nvram_reset_data_items(NVRAM_RESET_CERTAIN, NVRAM_APP_RESERVED, ldi, 1, ldi->total_records))
            {
                nvram_ut_trace("[NVUT] nvram_smart_reset_old_ota_new_test(): reset test LIDs fail!\n\r");
                return KAL_FALSE;
            }
        }

        //write test LIDs to non-default
        nvram_write_test_lids();
        ota_save_context();
        ota_notify_tester("Please mannual do OTA: OLD(no smart reset) -> NEW(smart reset)");
    }
    else
    {
        manual_ota_reboot_finish = KAL_FALSE;
    }
    
    //check LID is reset
    for(j = 0; j < test_lid_number; j++)
    {
        nvram_util_get_data_item(&ldi, test_lid_enum[j]);
        d_buffer = (kal_uint8*)get_ctrl_buffer(ldi->size);
        c_buffer = (kal_uint8*)get_ctrl_buffer(ldi->size);
        kal_mem_set(c_buffer, 0x33, ldi->size);
        kal_mem_set(d_buffer, 0x66, ldi->size);
        for(i = 1; i <= ldi->total_records; i++)
        {
            nvram_get_default_value_to_write(ldi, i, c_buffer, ldi->size);
            nvram_external_read_data(ldi->LID, i, d_buffer, ldi->size);
            if(ldi->LID == NVRAM_EF_NVRAM_TEST_1_LID || ldi->LID == NVRAM_EF_NVRAM_TEST_5_LID)
            {
                if(kal_mem_cmp((kal_char*)d_buffer, (kal_char*)c_buffer, ldi->size))
                {
                    nvram_ut_trace("[NVUT] nvram_smart_reset_old_ota_new_test(): LID do not reset!\n\r");
                    nvram_ut_trace("[NVUT] LID: %d!\n\r", ldi->LID);
                    free_ctrl_buffer(d_buffer);
                    free_ctrl_buffer(c_buffer);
                    return KAL_FALSE;
                }
            }
            else
            {
                if(! kal_mem_cmp((kal_char*)d_buffer, (kal_char*)c_buffer, ldi->size))
                {
                    nvram_ut_trace("[NVUT] nvram_smart_reset_old_ota_new_test(): un-expect LID reset!\n\r");
                    nvram_ut_trace("[NVUT] LID: %d!\n\r", ldi->LID);
                    free_ctrl_buffer(d_buffer);
                    free_ctrl_buffer(c_buffer);
                    return KAL_FALSE;
                }
            }

        }
        free_ctrl_buffer(d_buffer);
        free_ctrl_buffer(c_buffer);
    }

    return KAL_TRUE;
}



kal_bool nvram_ut_test1(kal_uint32 flags, void *param)
{   
    nvram_ut_trace("[NVUT] This is in nvram_ut_test1().\n\r");
    return KAL_FALSE;
}
kal_bool nvram_ut_test2(kal_uint32 flags, void *param)
{
    nvram_ut_trace("[NVUT] This is in nvram_ut_test2().\n\r");
    return KAL_FALSE;
}
kal_bool nvram_ut_test3(kal_uint32 flags, void *param)
{
    nvram_ut_trace("[NVUT] This is in nvram_ut_test3().\n\r");
    return KAL_TRUE;
}
kal_bool nvram_ut_test4(kal_uint32 flags, void *param)
{
    nvram_ut_trace("[NVUT] This is in nvram_ut_test4().\n\r");
    return KAL_TRUE;
}






/*
Test case return value: 0: success, others: fail
*/
ut_testcase_struct ut_nvram_full_test[] = 
{
  //factory test cases
    {factory_reset_user_access, 0, NULL, "Factory Reset USER LID Access Test", "2.1.1.1"},
    {factory_reset_internal_access, 0, NULL, "Factory Reset INTERNAL LID Access Test", "2.1.1.2"},
    {factory_reset_calibrat_access, 0, NULL, "Factory Reset CALIBRAT LID Access Test", "2.1.1.3"},
    {factory_reset_important_access, 0, NULL, "Factory Reset IMPORTANT LID Access Test", "2.1.1.4"},
    {factory_reset_importantl1_access, 0, NULL, "Factory Reset IMPORTANT_L1 LID Access Test", "2.1.1.5"},
    {factory_reset_importantl4_access, 0, NULL, "Factory Reset IMPORTANT_L4 LID Access Test", "2.1.1.6"},
  //first boot test cases
    {first_boot_basic_access, 0, NULL, "First Boot Basic Access Test", "2.1.2.1"},
  //OTA boot test cases
    {ota_boot_basic_access, 0, NULL, "OTA Boot Basic Access Test", "2.1.3.1"},
    {ota_boot_lid_verno_change_access, 0, NULL, "OTA Boot LID Verno Change Access", "2.1.3.2"},
        //{ota_boot_add_lid_access, 0, NULL, "OTA Boot Basic Add LID Access Test", "2.1.3.3"},//cancel, this is the same with 2.1.3.1
    /* bellow 6 cases feature currently not support
    {ota_boot_add_record_read, 0, NULL, "OTA Boot Add Record Read Test", "2.1.3.4"},
    {ota_boot_add_record_write, 0, NULL, "OTA Boot Add Record Write Test", "2.1.3.5"},
    {ota_boot_add_record_reset, 0, NULL, "OTA Boot Add Record Reset Test", "2.1.3.6"},
    {ota_boot_delete_record_read, 0, NULL, "OTA Boot Delete Record Read Test", "2.1.3.7"},
    {ota_boot_delete_record_write, 0, NULL, "OTA Boot Delete Record Write Test", "2.1.3.8"},
    {ota_boot_delete_record_reset, 0, NULL, "OTA Boot Delete Record Reset Test", "2.1.3.9"},
    */
    {ota_boot_verno_change_previous_lid_access, 0, NULL, "OTA Boot Verno Change Previous Version LID Access Test", "2.1.3.10"},
    {ota_boot_size_change_previous_lid_access, 0, NULL, "OTA Boot Record Size Change Previous Version LID Access Test", "2.1.3.11"},
    {ota_boot_record_change_previous_lid_access, 0, NULL, "OTA Boot Record Number Change Previous Version LID Access Test", "2.1.3.12"},
    /* bellow 6 cases feature currently not support
    {ota_boot_extend_record_read, 0, NULL, "OTA Boot Extend Record Read Test", "2.1.3.13"},
    {ota_boot_extend_record_write, 0, NULL, "OTA Boot Extend Record Write Test", "2.1.3.14"},
    {ota_boot_extend_record_reset, 0, NULL, "OTA Boot Extend Record Reset Test", "2.1.3.15"},
    {ota_boot_minish_record_read, 0, NULL, "OTA Boot Minish Record Read Test", "2.1.3.16"},
    {ota_boot_minish_record_write, 0, NULL, "OTA Boot Minish Record Write Test", "2.1.3.17"},
    {ota_boot_minish_record_reset, 0, NULL, "OTA Boot Minish Record Reset Test", "2.1.3.18"},
    */
    {ota_boot_user_size_change_read, 0, NULL, "OTA Boot USER LID Size Change Read Test", "2.1.3.19"},
    {ota_boot_user_size_change_write, 0, NULL, "OTA Boot USER LID Size Change Write Test", "2.1.3.20"},
    {ota_boot_user_size_change_reset, 0, NULL, "OTA Boot USER LID Size Change Reset Test", "2.1.3.21"},
    {ota_boot_internal_size_change_read, 0, NULL, "OTA Boot INTERNAL LID Size Change Read Test", "2.1.3.22"},
    {ota_boot_internal_size_change_write, 0, NULL, "OTA Boot INTERNAL LID Size Change Write Test", "2.1.3.23"},
    {ota_boot_internal_size_change_reset, 0, NULL, "OTA Boot INTERNAL LID Size Change Reset Test", "2.1.3.24"},
    {ota_boot_calibrat_size_change, 0, NULL, "OTA Boot CALIBRAT LID Size Change Test", "2.1.3.25"},
    {ota_boot_important_size_change, 0, NULL, "OTA Boot IMPORTANT LID Size Change Test", "2.1.3.26"},
    {ota_boot_calibrat_lost_access, 0, NULL, "OTA Boot CALIBRAT LID Lost Test", "2.1.3.27"},
    {ota_boot_important_lost_access, 0, NULL, "OTA Boot IMPORTANT LID Lost Test", "2.1.3.28"},
    #if 0 //change test cases, because NVRAM design flow change
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
    #endif
    {ota_boot_importantl1_size_change_read, 0, NULL, "OTA Boot IMPORTANT_L1 LID Size Change Read Test", "2.1.3.31"},
    {ota_boot_importantl1_size_change_write, 0, NULL, "OTA Boot IMPORTANT_L1 LID Size Change Write Test", "2.1.3.32"},
    {ota_boot_importantl1_size_change_reset, 0, NULL, "OTA Boot IMPORTANT_L1 LID Size Change Reset Test", "2.1.3.33"},
    {ota_boot_importantl4_size_change_read, 0, NULL, "OTA Boot IMPORTANT_L4 LID Size Change Read Test", "2.1.3.34"},
    {ota_boot_importantl4_size_change_write, 0, NULL, "OTA Boot IMPORTANT_L4 LID Size Change Write Test", "2.1.3.35"},
    {ota_boot_importantl4_size_change_reset, 0, NULL, "OTA Boot IMPORTANT_L4 LID Size Change Reset Test", "2.1.3.36"},
    {ota_boot_ota_reset_attr, 0, NULL, "OTA Boot OTA_RESET Attribute Test", "2.1.3.37"},
    {ota_boot_reserve_backward_verno_change, 0, NULL, "OTA Boot RESERVE_BACKWARD VERNO Change Test", "2.1.3.38"},
    {ota_boot_reserve_backward_size_change, 0, NULL, "OTA Boot RESERVE_BACKWARD Size Change Test", "2.1.3.39"},
  //normal boot test
    {normal_boot_basic_access, 0, NULL, "Normal Boot Basic Access Test", "2.1.4.1"},
    {normal_boot_user_lost_read, 0, NULL, "Normal Boot USER LID Lost Read Test", "2.1.4.2"},
    {normal_boot_user_lost_write, 0, NULL, "Normal Boot USER LID Lost Write Test", "2.1.4.3"},
    {normal_boot_user_lost_reset, 0, NULL, "Normal Boot USER LID Lost Reset Test", "2.1.4.4"},
    {normal_boot_internal_lost_read, 0, NULL, "Normal Boot INTERNAL LID Lost Read Test", "2.1.4.5"},
    {normal_boot_internal_lost_write, 0, NULL, "Normal Boot INTERNAL LID Lost Write Test", "2.1.4.6"},
    {normal_boot_internal_lost_reset, 0, NULL, "Normal Boot INTERNAL LID Lost Reset Test", "2.1.4.7"},
    {normal_boot_calibrat_lost_read, 0, NULL, "Normal Boot CALIBRAT LID Lost Read Test", "2.1.4.8"},
    {normal_boot_calibrat_lost_write, 0, NULL, "Normal Boot CALIBRAT LID Lost Write Test", "2.1.4.9"},
    {normal_boot_calibrat_lost_reset, 0, NULL, "Normal Boot CALIBRAT LID Lost Reset Test", "2.1.4.10"},
    {normal_boot_important_lost_read, 0, NULL, "Normal Boot IMPORTANT LID Lost Read Test", "2.1.4.11"},
    {normal_boot_important_lost_write, 0, NULL, "Normal Boot IMPORTANT LID Lost Write Test", "2.1.4.12"},
    {normal_boot_important_lost_reset, 0, NULL, "Normal Boot IMPORTANT LID Lost Reset Test", "2.1.4.13"},
    {normal_boot_importantl1_lost_read, 0, NULL, "Normal Boot IMPORTANT_L1 LID Lost Read Test", "2.1.4.14"},
    {normal_boot_importantl1_lost_write, 0, NULL, "Normal Boot IMPORTANT_L1 LID Lost Write Test", "2.1.4.15"},
    {normal_boot_importantl1_lost_reset, 0, NULL, "Normal Boot IMPORTANT_L1 LID Lost Reset Test", "2.1.4.16"},
    {normal_boot_importantl4_lost_read, 0, NULL, "Normal Boot IMPORTANT_L4 LID Lost Read Test", "2.1.4.17"},
    {normal_boot_importantl4_lost_write, 0, NULL, "Normal Boot IMPORTANT_L4 LID Lost Write Test", "2.1.4.18"},
    {normal_boot_importantl4_lost_reset, 0, NULL, "Normal Boot IMPORTANT_L4 LID Lost Reset Test", "2.1.4.19"},
    {normal_boot_user_altered_read, 0, NULL, "Normal Boot USER LID Altered Read Test", "2.1.4.20"},
    {normal_boot_user_altered_write, 0, NULL, "Normal Boot USER LID Altered Write Test", "2.1.4.21"},
    {normal_boot_user_altered_reset, 0, NULL, "Normal Boot USER LID Altered Reset Test", "2.1.4.22"},
    {normal_boot_internal_altered_read, 0, NULL, "Normal Boot INTERNAL LID Altered Read Test", "2.1.4.23"},
    {normal_boot_internal_altered_write, 0, NULL, "Normal Boot INTERNAL LID Altered Write Test", "2.1.4.24"},
    {normal_boot_internal_altered_reset, 0, NULL, "Normal Boot INTERNAL LID Altered Reset Test", "2.1.4.25"},
    {normal_boot_calibrat_altered_read, 0, NULL, "Normal Boot CALIBRAT LID Altered Read Test", "2.1.4.26"},
    {normal_boot_calibrat_altered_write, 0, NULL, "Normal Boot CALIBRAT LID Altered Write Test", "2.1.4.27"},
    {normal_boot_calibrat_altered_reset, 0, NULL, "Normal Boot CALIBRAT LID Altered Reset Test", "2.1.4.28"},
    {normal_boot_important_altered_read, 0, NULL, "Normal Boot IMPORTANT LID Altered Read Test", "2.1.4.29"},
    {normal_boot_important_altered_write, 0, NULL, "Normal Boot IMPORTANT Altered Write Test", "2.1.4.30"},
    {normal_boot_important_altered_reset, 0, NULL, "Normal Boot IMPORTANT Altered Reset Test", "2.1.4.31"},
    {normal_boot_importantl1_altered_read, 0, NULL, "Normal Boot IMPORTANT_L1 LID Altered Read Test", "2.1.4.32"},
    {normal_boot_importantl1_altered_write, 0, NULL, "Normal Boot IMPORTANT_L1 LID Altered Write Test", "2.1.4.33"},
    {normal_boot_importantl1_altered_reset, 0, NULL, "Normal Boot IMPORTANT_L1 LID Altered Reset Test", "2.1.4.34"},
    {normal_boot_importantl4_altered_read, 0, NULL, "Normal Boot IMPORTANT_L4 LID Altered Read Test", "2.1.4.35"},
    {normal_boot_importantl4_altered_write, 0, NULL, "Normal Boot IMPORTANT_L4 LID Altered Write Test", "2.1.4.36"},
    {normal_boot_importantl4_altered_reset, 0, NULL, "Normal Boot IMPORTANT_L4 LID Altered Reset Test", "2.1.4.37"},
    {normal_boot_read_syslid_fail, 0, NULL, "Normal Boot Read SYS LID Fail Test", "2.1.4.38"},
  //attribute & category test
    {attr_average_basic_access, 0, NULL, "NVRAM_ATTR_AVERAGE Attribute Basic Test", "2.2.1.1"},
    {attr_multi_default_read_basic_access, 0, NULL, "MULTI_DEFAULT and MULTI_READ Attribute Basic Test", "2.2.1.2"},
    {attr_write_protect_basic_access, 0, NULL, "NVRAM_ATTR_WRITE_PROTECT Attribute Basic Test", "2.2.1.3"},
    {attr_multiple_basic_access, 0, NULL, "NVRAM_ATTR_MULTIPLE Attribute Basic Test", "2.2.1.4"},
    {attr_confidential_basic_access, 0, NULL, "NVRAM_ATTR_CONFIDENTIAL Attribute Basic Test", "2.2.1.5"},
    {attr_msp_basic_access, 0, NULL, "NVRAM_ATTR_MSP Attribute Basic Test", "2.2.1.6"},
    {attr_committed_basic_access, 0, NULL, "NVRAM_ATTR_COMMITTED Attribute Basic Test", "2.2.1.7"},
    {attr_ring_basic_access, 0, NULL, "NVRAM_ATTR_RING Attribute Basic Test", "2.2.1.8"},
    {attr_fault_assert_test, 0, NULL, "NVRAM_ATTR_FAULT_ASSERT Attribute Test", "2.2.1.9"},
    {category_user_basic_access, 0, NULL, "NVRAM_CATEGORY_USER Basic Test", "2.2.2.1"},
    {category_internal_basic_access, 0, NULL, "NVRAM_CATEGORY_INTERNAL Basic Test", "2.2.2.2"},
    {category_calibrat_basic_access, 0, NULL, "NVRAM_CATEGORY_CALIBRAT Basic Test", "2.2.2.3"},
    {category_important_basic_access, 0, NULL, "NVRAM_CATEGORY_IMPORTANT Basic Test", "2.2.2.4"},
    {category_importantl1_basic_access, 0, NULL, "NVRAM_CATEGORY_IMPORTANT_L1 Basic Test", "2.2.2.5"},
    {category_importantl4_basic_access, 0, NULL, "NVRAM_CATEGORY_IMPORTANT_L4 Basic Test", "2.2.2.6"},
    {func_default_basic_access, 0, NULL, "NVRAM_CATEGORY_FUNC_DEFAULT Basic Test", "2.2.2.7"},
    {zero_default_basic_access, 0, NULL, "NVRAM_EF_ZERO_DEFAULT Basic Test", "2.2.2.8"},
    {ff_default_basic_access, 0, NULL, "NVRAM_EF_FF_DEFAULT Basic Test", "2.2.2.9"},
    {table_default_basic_access, 0, NULL, "TABLE_DEFAULT Basic Test", "2.2.2.10"},
    {attribute_category_defaultvalue_combine, 0, NULL, "Attribute/Category/Default Value Combine Basic Test", "2.2.2.11"},
    {chksum_read_function_basic_test, 0, NULL, "NVRAM Checksum Read Function Basic Test", "2.2.2.12"},
    {chksum_multi_read_function_test, 0, NULL, "NVRAM Checksum Multi Read Function Test", "2.2.2.13"},
    {raw_data_access_function_test, 0, NULL, "NVRAM RAW_DATA Access Function Test", "2.2.2.14"},
  //boundary & stress test
    {record_size_boundary_test, 0, NULL, "NVRAM Record Size Boundary Test", "2.3.1.1"},
    {record_number_boundary_test, 0, NULL, "NVRAM Record Number Boundary Test", "2.3.2.1"},
    {nvram_stress_test, 0, NULL, "NVRAM Stress Test", "2.3.3.1"},

  //nvram special feature test
    //{nvram_write_exception_test, 0, NULL, "NVRAM Write Exception Test", "2.4.4.1"}, //cancel, this API is exception owner own
    {nvram_exception_test, 0, NULL, "NVRAM Exception Test", "2.4.4.2"},
    {nvram_security_test, 0, NULL, "NVRAM Security Test", "2.4.1.3"},
    #if defined(__NVRAM_STRUCTURE_CHANGE_RESET__) || defined(__NVRAM_DEFVAL_CHANGE_RESET__)
    {nvram_smart_reset_entry_test, 0, NULL, "NVRAM Smart Reset Entry Number Test", "2.4.1.4"}, //build checksum enties need match code
    {nvram_structure_change_reset_test, 0, NULL, "NVRAM Structure Change Reset Test", "2.4.1.5"},
    {nvram_default_value_change_reset_test, 0, NULL, "NVRAM Default Value Change Reset Test", "2.4.1.6"},
    {nvram_func_default_checksum_change_test, 0, NULL, "NVRAM FUN_DEF Checksum Change Test", "2.4.1.7"},
    {nvram_smart_reset_checksum_test, 0, NULL, "NVRAM Smart Reset Checksum Test", "2.4.1.8"},
    {nvram_no_checksum_change_test, 0, NULL, "NVRAM No Checksum Change Test", "2.4.1.9"},
    {nvram_write_header_test, 0, NULL, "NVRAM Write Header Test", "2.4.1.10"},
    {nvram_attribute_change_reset_test, 0, NULL, "NVRAM Attribute Change Reset Test", "2.4.1.11"},
    {nvram_attribute_no_change_test, 0, NULL, "NVRAM Attribute No Change Test", "2.4.1.12"},
    #endif
    /*Bellow two cases should not be put into __NVRAM_STRUCTURE_CHANGE_RESET__ and __NVRAM_DEFVAL_CHANGE_RESET__ option
          these two test need prepare two versions modem load
          1st version: NVRAM_UT enable, NVRAM_OTA_SMART_RESET enable
          2nd version: NVRAM_UT enable, NVRAM_OTA_SMART_RESET disable
    these two cases need manual build load to test
    Tips:
        disable dbg header write then build load.
        old OTA to new or new OTA to old, CALIBRAT/IMPORTANT/IMPORTANT_L4 category LID should not change.
        LIDs in USER and IMPORTANT_1 should all reset.
      */
    {nvram_smart_reset_new_ota_old_test, 0, NULL, "NVRAM Smart Reset OTA to No Smart Reset Test", "2.4.1.20"},
    {nvram_smart_reset_old_ota_new_test, 0, NULL, "NVRAM No Smart Reset OTA to Smart Reset Test", "2.4.1.21"},
    #ifdef __NVRAM_OTP__
    {nvram_otp_access_test, 0, NULL, "NVRAM OTP access Test", "2.7.1"},
    #endif
    //pleaes add test case before these cases
    /* These 4 cases just use for test structure
    {nvram_ut_test1, 0, NULL, "NVRAM UT Test Case 1", "9.1"},
    {nvram_ut_test2, 0, NULL, "NVRAM UT Test Case 2", "9.11"},
    {nvram_ut_test3, 0, NULL, "NVRAM UT Test Case 3", "9.1.1"},
    {nvram_ut_test4, 0, NULL, "NVRAM UT Test Case 4", "9.1.2"},
    */
};
kal_uint16 full_test_num = sizeof(ut_nvram_full_test)/sizeof(ut_testcase_struct);



#if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif


kal_uint32 nvram_ut_test() //return value insted fail case num, 0 stands all pass
{
    kal_uint32 result;
    kal_uint8 next_char;

    start_test_time = ust_get_current_time();
    for(; test_number < valid_test_case_num; test_number++)
    {
        for(; sub_test_number < full_test_num; sub_test_number++)
        {
            //if(case_is_need_run(test_case_list[test_number], (kal_uint8*)ut_nvram_full_test[sub_test_number].testplan_section))
            if(strlen((char *)test_case_list[test_number]) > strlen((char *)ut_nvram_full_test[sub_test_number].testplan_section))
            {
                continue;
            }

            //test case is "2.1", case "2.11" should not run. next_char is used to this case
            next_char = ut_nvram_full_test[sub_test_number].testplan_section[strlen((char *)test_case_list[test_number])];
            if(0 == kal_mem_cmp(test_case_list[test_number], ut_nvram_full_test[sub_test_number].testplan_section, strlen((char *)test_case_list[test_number]))
                && ('\0' == next_char || '.' == next_char))
            {
                result = ut_nvram_full_test[sub_test_number]._main_fn(ut_nvram_full_test[sub_test_number].flags, ut_nvram_full_test[sub_test_number].para);
                total_case_num++;
                if(KAL_TRUE == result) //success
                {
                    nvram_ut_trace("[NVRAM UT] %s : %s -- test result: PASS!\n\r", 
                                    ut_nvram_full_test[sub_test_number].testplan_section, ut_nvram_full_test[sub_test_number].description);
                }
                else
                {
                    nvram_ut_trace("[NVRAM UT] %s : %s -- test result: FAIL!\n\r",
                                    ut_nvram_full_test[sub_test_number].testplan_section, ut_nvram_full_test[sub_test_number].description);
                    fail_case_num++;
                }
            }
            kal_sleep_task(kal_milli_secs_to_ticks(10));
        }

        sub_test_number = 0;
    }
    end_test_time = ust_get_current_time();
    test_time_consume += end_test_time - start_test_time;

    return fail_case_num;
}

//kal_uint32 read_write_buffer[NVRAM_EF_TEST_LID_SIZE/4]; //1K glbal buffer
void nvram_Ttask1_main(task_entry_struct *task_entry_ptr)
{
    /*local parameters*/
    ilm_struct current_ilm;
    tst_module_string_inject_struct *nvram_tst_req;
    //nvram_stress_test1_req_struct *stress_test1_req1,*stress_test1_req2,*stress_test1_req3;
    //nvram_stress_test1_cnf_struct *stress_test1_cnf;
    nvram_ltable_entry_struct *ldi = NULL;
    factory_test_context_struct *test_context;
    kal_wchar filename[NVRAM_MAX_PATH_LEN] = L"Z:\\W_TST_LID.log";
    kal_uint8 *d_buffer;
    kal_uint32 i;
    kal_uint8 test_result;
    kal_uint8 begin_test = 0;

    nvram_util_get_data_item(&ldi, NVRAM_EF_NVRAM_TEST_6_LID);
    d_buffer = (kal_uint8*)get_ctrl_buffer(ldi->size);
    nvram_external_read_data(ldi->LID, 1, d_buffer, ldi->size);
    test_context = (factory_test_context_struct*)d_buffer;
    if(0xAB == test_context->context_is_valid) //0xAB is a special value we write
    {
        factory_test_reboot_finish = KAL_TRUE;
        test_number = test_context->break_test_case_num;
        sub_test_number = test_context->sub_test_case_num;
        valid_test_case_num = test_context->valid_test_case_num_total;
        total_case_num = test_context->total_case_number;
        fail_case_num = test_context->fail_case_number;
        test_time_consume = test_context->tst_time_consume;
        kal_mem_cpy(test_case_list, test_context->test_case_lst, sizeof(test_case_list));
        nvram_external_reset_data(NVRAM_EF_NVRAM_TEST_6_LID, 1, 1);

        msg_receive_extq(&current_ilm); //wait start msg
        destroy_ilm(&current_ilm);
    }
    else if(0xCD == test_context->context_is_valid)
    {
        manual_ota_reboot_finish = KAL_TRUE;
        test_number = test_context->break_test_case_num;
        sub_test_number = test_context->sub_test_case_num;
        valid_test_case_num = test_context->valid_test_case_num_total;
        total_case_num = test_context->total_case_number;
        fail_case_num = test_context->fail_case_number;
        test_time_consume = test_context->tst_time_consume;
        kal_mem_cpy(test_case_list, test_context->test_case_lst, sizeof(test_case_list));
        nvram_external_reset_data(NVRAM_EF_NVRAM_TEST_6_LID, 1, 1);

        msg_receive_extq(&current_ilm); //wait start msg
        destroy_ilm(&current_ilm);

    }
    else
    {
        if(FS_GetAttributes(filename) < FS_NO_ERROR) //before binregion backup write TEST LIDs to special value
        {
            nvram_write_test_lids();
            FS_Close(FS_Open(filename, FS_READ_WRITE | FS_CREATE_ALWAYS));
            nvram_ap_bin_region_backup();
        }
    }
    free_ctrl_buffer(d_buffer);

    nvram_test_task1_id = kal_get_current_task();
    
    while(1)
    {
        if(!factory_test_reboot_finish && !manual_ota_reboot_finish)
        {
            msg_receive_extq(&current_ilm);
            kal_set_active_module_id(current_ilm.dest_mod_id);  
            
            if(current_ilm.msg_id == MSG_ID_TST_INJECT_STRING)
            {
                nvram_tst_req = (tst_module_string_inject_struct*) current_ilm.local_para_ptr;
                nvram_ut_trace("[NVRAM UT] test_case_num:%s\n\r", nvram_tst_req->string);
                nvram_ut_trace("[NVRAM UT] test_start:%d\n\r", nvram_tst_req->index);

                if(0 == kal_mem_cmp("p", nvram_tst_req->string, 1)) //print all test_case_list
                {
                    if(0 == valid_test_case_num)
                    {
                        nvram_ut_trace("[NVRAM UT] test_case_list is NULL.\n\r");
                    }

                    for(i = 0; i < valid_test_case_num; i++)
                    {
                        nvram_ut_trace("[NVRAM UT] test_case_list[%d]: %s.\n\r", i, test_case_list[i]);
                    }

                    if((valid_test_case_num > 0) && (0 != nvram_tst_req->index))
                    {
                        begin_test = 1;
                    }
                }
                else if(0 == kal_mem_cmp("c", nvram_tst_req->string, 1)) //clear all test_case_list
                {
                    kal_mem_set(test_case_list, 0 , sizeof(test_case_list));
                    valid_test_case_num = 0;
                    nvram_ut_trace("[NVRAM UT] test_case_list has been cleared.\n\r");
                    
                }
                else //normal test case parse
                {
                    for(i = 0; i < full_test_num && 
                        0 != (kal_mem_cmp(nvram_tst_req->string, (kal_uint8*)ut_nvram_full_test[i].testplan_section, strlen((char *)nvram_tst_req->string)))
                        ; i++)
                    {} //to find whether there is one test case need to run
                    
                    if(i >= full_test_num)
                    {
                        nvram_ut_trace("[NVRAM UT] Invalid test_case_num, please try again!\n\r");
                    }
                    else
                    {
                        if(valid_test_case_num < 10)
                        {
                            kal_mem_cpy(test_case_list[valid_test_case_num++], nvram_tst_req->string, strlen((char *)nvram_tst_req->string));
                        }
                        else
                        {
                            nvram_ut_trace("[NVRAM UT] test_case_num list is full, max is 10!\n\r");
                        }

                        if(nvram_tst_req->index)
                        {
                            begin_test = 1;
                        }
                    }
                }
            }
            destroy_ilm(&current_ilm);
        }
        else //go on factory test
        {
            kal_set_active_module_id(MOD_NV_TEST1);
            begin_test = 1;
        }
        
        if(begin_test)
        {
            nvram_ut_trace("[NVRAM UT] Start: nvram_ut_test()!\n\r");
            test_result = nvram_ut_test();
            nvram_ut_trace("[NVRAM UT] End: nvram_ut_test()!\n\r");

            //print test results
            nvram_ut_trace("[NVRAM UT] Total Test Cases: %d.\n\r", total_case_num);
            if(!test_result)
            {
                nvram_ut_trace("[NVRAM UT] NVRAM UT Test Result: PASS!\n\r");
            }
            else
            {
                nvram_ut_trace("[NVRAM UT] NVRAM UT Test Result: FAIL!\n\r");
                nvram_ut_trace("[NVRAM UT] Total Fail Cases: %d!\n\r", fail_case_num);
            }
            nvram_ut_trace("[NVRAM UT] Test Time Consume: %d ticks.\n\r", test_time_consume);

            //clear environment, you can do another test again(except factory reset test)
            kal_mem_set(test_case_list, 0 , sizeof(test_case_list));
            begin_test = 0;
            valid_test_case_num = 0;
            factory_test_reboot_finish = KAL_FALSE;
            manual_ota_reboot_finish = KAL_FALSE;
            test_number = 0;
            sub_test_number = 0;
            total_case_num = 0;
            fail_case_num = 0;
            test_time_consume = 0;
        }

        /*send msg to Ttask2~Ttask4*/
        /*
        stress_test1_req1 = (nvram_stress_test1_req_struct*) construct_local_para(sizeof(nvram_stress_test1_req_struct), TD_CTRL);
        stress_test1_req1->access_id = 0x0;
        stress_test1_req1->ref_count = 1;
        stress_test1_req1->start_stress_test1 = 1;
        msg_send6(MOD_NV_TEST1, MOD_NV_TEST2, 0x0, MSG_ID_NVRAM_STRESS_TEST1_REQ, 
            (local_para_struct*)stress_test1_req1, NULL);
        
        stress_test1_req2 = (nvram_stress_test1_req_struct*) construct_local_para(sizeof(nvram_stress_test1_req_struct), TD_CTRL);
        stress_test1_req2->access_id = 0x0;
        stress_test1_req2->ref_count = 1;
        stress_test1_req2->start_stress_test1 = 1;
        msg_send6(MOD_NV_TEST1, MOD_NV_TEST3, 0x0, MSG_ID_NVRAM_STRESS_TEST1_REQ, 
            (local_para_struct*)stress_test1_req2, NULL);
        
        stress_test1_req3 = (nvram_stress_test1_req_struct*) construct_local_para(sizeof(nvram_stress_test1_req_struct), TD_CTRL);
        stress_test1_req3->access_id = 0x0;
        stress_test1_req3->ref_count = 1;
        stress_test1_req3->start_stress_test1 = 1;
        msg_send6(MOD_NV_TEST1, MOD_NV_TEST4, 0x0, MSG_ID_NVRAM_STRESS_TEST1_REQ, 
            (local_para_struct*)stress_test1_req3, NULL);
        
        kal_prompt_trace(MOD_NVRAM, "Ttask1 send msg to Ttask2~Ttask4 done!\n\r");
        */
        /*else if(current_ilm.msg_id == MSG_ID_NVRAM_STRESS_TEST1_CNF)
        {
            stress_test1_cnf = (nvram_stress_test1_cnf_struct*) current_ilm.local_para_ptr;
            kal_prompt_trace(MOD_NVRAM, "current_ilm.src_mod_id = %d!\n\r", current_ilm.src_mod_id);
            kal_prompt_trace(MOD_NVRAM, "test result = %d!\n\r", stress_test1_cnf.stress_test1_result);
        }*/
        
        //nvram_ut_trace("cmpt_op_result:%d\n\r", nvram_lid_cmpt_operation(NVRAM_EF_NVRAM_TEST_1_LID, 0x01020300, 0x1));
        //nvram_ut_trace("cmpt_op_result:%d\n\r", nvram_lid_cmpt_operation(NVRAM_EF_NVRAM_TEST_1_LID, 0x00020301, 0x2));
    }

}

kal_bool nvram_Ttask1_init(void)
{

    return KAL_TRUE;

}

kal_bool nvram_Ttask1_reset(void)
{

    return KAL_TRUE;

}

#if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif
kal_bool nvram_Ttask1_create(comptask_handler_struct **handle)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    static const comptask_handler_struct nvram_ttask1_handler_info =
    {
        nvram_Ttask1_main,    /* task entry function */
        nvram_Ttask1_init,         /* task initialization function */
        nvram_Ttask1_reset        /* task reset handler */
    };

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    *handle = (comptask_handler_struct*) & nvram_ttask1_handler_info;
    return KAL_TRUE;
}
#if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif
#endif
