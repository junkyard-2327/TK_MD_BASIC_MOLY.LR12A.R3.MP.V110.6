#include <string.h>
#include "nvram_msgid.h"

#include "kal_general_types.h"
#include "kal_public_defs.h"
#include "kal_public_api.h"
#include "kal_trace.h"

#include "syscomp_config.h"
#include "task_config.h"
#include "sysconf_statistics.h"     /* stack_statistics_struct */

#include "nvram_enums.h"
#include "nvram_struct.h"
#include "nvram_data_items.h"
#include "drv_sap.h"

#include "tst_msgid.h"
#include "tst_sap.h"

void nvtest_main(ilm_struct *ilm_ptr)
{
    NVRAM_EXT_ASSERT(ilm_ptr != NULL,(kal_uint32)ilm_ptr,NVRAM_LOC_ILM_PTR_IS_NULL_2, 0);

    if (ilm_ptr != NULL)
    {
        if (ilm_ptr->msg_id == MSG_ID_NVRAM_READ_CNF) {
            nvram_read_cnf_struct *read_cnf;
            kal_uint8 *data_ptr;
            kal_uint16 data_len;
            
            read_cnf = (nvram_read_cnf_struct *)ilm_ptr->local_para_ptr;
            data_ptr = get_peer_buff_pdu(ilm_ptr->peer_buff_ptr, &data_len);
            kal_prompt_trace(MOD_NVTEST, "Got Read CNF from NVRAM, [LID=%d, Index=%d, Len=%d]", 
                read_cnf->file_idx, read_cnf->para, read_cnf->length);
        } else if (ilm_ptr->msg_id == MSG_ID_TST_INJECT_STRING) {
            tst_module_string_inject_struct *tst_inject = (tst_module_string_inject_struct*) ilm_ptr->local_para_ptr;
            if (strncmp((kal_char*) tst_inject->string, "reg", 3) == 0 || strncmp((kal_char*) tst_inject->string, "REG", 3) == 0 )
            {
                kal_prompt_trace(MOD_NVTEST, "Test Reg NVRAM Monitor, index=%d, inject string=%s", tst_inject->index , tst_inject->string);
                nvram_mon_reg_notify(tst_inject->index, 1, 1);
            }
            else if (strncmp((kal_char*) tst_inject->string, "dereg", 5) == 0 || strncmp((kal_char*) tst_inject->string, "DEREG", 5) == 0 )
            {
                kal_prompt_trace(MOD_NVTEST, "Test Dereg NVRAM Monitor, index=%d, inject string=%s", tst_inject->index , tst_inject->string);
                nvram_mon_dereg_notify(tst_inject->index, 1, 1);
            }
        }
    }
}

void nvtest_task_main(task_entry_struct *task_entry_ptr)
{
    ilm_struct current_ilm;
    kal_set_active_module_id(MOD_NVTEST);

    while(1) {
        msg_receive_extq(&current_ilm);
        nvtest_main(&current_ilm);
        destroy_ilm(&current_ilm);
    }
}

void nvram_mon_reg_notify(nvram_lid_enum lid, kal_uint16 rec_idx, kal_uint16 rec_amt)
{
    nvram_read_req_struct *read_req = (nvram_read_req_struct *)construct_local_para(sizeof(nvram_read_req_struct), TD_CTRL);

    read_req->file_idx = lid;
    read_req->para = rec_idx;
    read_req->rec_amount = rec_amt;

    msg_send5(MOD_NVTEST, MOD_NVRAM, NVTEST_SAP, MSG_ID_NVRAM_REG_NOTIFY_REQ,  (local_para_struct *)read_req);
}

void nvram_mon_dereg_notify(nvram_lid_enum lid, kal_uint16 rec_idx, kal_uint16 rec_amt)
{
    nvram_read_req_struct *read_req = (nvram_read_req_struct *)construct_local_para(sizeof(nvram_read_req_struct), TD_CTRL);

    read_req->file_idx = lid;
    read_req->para = rec_idx;
    read_req->rec_amount = rec_amt;

    msg_send5(MOD_NVTEST, MOD_NVRAM, NVTEST_SAP, MSG_ID_NVRAM_DEREG_NOTIFY_REQ,  (local_para_struct *)read_req);
}


kal_bool nvtest_init(void)
{
    nvram_mon_reg_notify(NVRAM_EF_CB_CH_INFO_LID, 1, 1);
    return KAL_TRUE;
}

kal_bool nvtest_reset(void)
{
    return KAL_TRUE;
}

kal_bool nvtest_create(comptask_handler_struct **handle)
{
    static const comptask_handler_struct nvram_handler_info =
    {
        nvtest_task_main,   /* task entry function */
        nvtest_init,                /* task initialization function */
        nvtest_reset            /* task reset handler */
    };

    *handle = (comptask_handler_struct*) & nvram_handler_info;
    return KAL_TRUE;
}

