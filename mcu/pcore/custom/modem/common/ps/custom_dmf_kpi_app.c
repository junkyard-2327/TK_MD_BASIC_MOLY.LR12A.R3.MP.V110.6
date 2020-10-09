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
 * Filename:
 * ---------
 * custom_dmf_kpi_app.c
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description:
 * ------------
 *   This file is for customized DMF APP
 *
 * Author:
 * -------
 * -------
 *
 *============================================================================
 *             HISTORY
 * Below this line, this part is controlled by ClearCase. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
 * $Log$
 *
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by ClearCase. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

#include "kal_general_types.h"
#include "kal_public_api.h"
#include "kal_public_defs.h"

#include "em_mtf_public_struct.h"

#include "dmf_public_event.h"
#include "dmf_public_def.h"

#include "protocol_section.h"
#include "icd_logging.h"
#include "mte_if.h"
#include "em_msgid.h"
#include "custom_dmf_kpi_app.h"
#include "mtf_nvram_def.h"
#include "nvram_interface.h"


dmf_custom_kpi_context_struct dmf_custom_kpi_context[MAX_SIM_NUM];


#define DMF_REG_EM(EM_INFO, EM_MSG_ID, HDLR) \
extern void HDLR(const mte_rule_t *mte_rule, void* msg, kal_uint32 msg_size);

#define DMF_REG_PEER(PEER_ID, HDLR) \
extern void HDLR(const mte_rule_t *mte_rule, void* msg, kal_uint32 msg_size);

#ifdef __ICD_LOGGING_SUPPORT__
#define DMF_REG_ICD_EVENT(ICD_EVENT_CODE, HDLR) \
extern void HDLR(const mte_rule_t *mte_rule, void* msg, kal_uint32 msg_size);

#define DMF_REG_ICD_RECORD(ICD_RECORD_CODE, HDLR) \
extern void HDLR(const mte_rule_t *mte_rule, void* msg, kal_uint32 msg_size);
#endif

#include "custom_dmf_kpi_app_reg.h"


static kal_uint32 dmf_custom_kpi_needed_peer_msg_id[] = 
{
    0xffffffff,
    #define DMF_REG_PEER(PEER_ID, HDLR) PEER_ID,
        #include "custom_dmf_kpi_app_reg.h"
};

kal_bool dmf_custom_kpi_needed_peer_trace(kal_uint32 global_peer_msg_id)
{
    kal_uint16 i;
    kal_uint32 size = sizeof(dmf_custom_kpi_needed_peer_msg_id) / sizeof(kal_uint32);

    for (i=0; i< size; i++)
    {
        if (dmf_custom_kpi_needed_peer_msg_id[i] == global_peer_msg_id)
            return KAL_TRUE;
    }
    return KAL_FALSE;
}

void dmf_custom_kpi_set_em_filters(mtfl4c_em_update_req_struct *em_ptr)
{
    #define DMF_REG_EM(EM_INFO, EM_MSG_ID, HDLR) \
        em_ptr->info_request[EM_INFO] = EM_ON;
        #include "custom_dmf_kpi_app_reg.h"
}

#ifdef __ICD_LOGGING_SUPPORT__
void dmf_custom_kpi_set_icd_filters()
{

    #define DMF_REG_ICD_EVENT(ICD_EVENT_CODE, HDLR) \
        icd_set_mtf_event_filter(KAL_TRUE, ICD_PROTOCOL_ID_1, ICD_EVENT_CODE); \
        icd_set_mtf_event_filter(KAL_TRUE, ICD_PROTOCOL_ID_2, ICD_EVENT_CODE);
    #define DMF_REG_ICD_RECORD(ICD_RECORD_CODE, HDLR) \
        icd_set_mtf_record_filter(KAL_TRUE, ICD_PROTOCOL_ID_1, ICD_RECORD_CODE); \
        icd_set_mtf_record_filter(KAL_TRUE, ICD_PROTOCOL_ID_2, ICD_RECORD_CODE);
        #include "custom_dmf_kpi_app_reg.h"
}
#endif

void dmf_custom_kpi_reset()
{
	kal_uint8 i;

    for (i=0; i<MAX_SIM_NUM; i++)
    {
    	kal_mem_set(&dmf_custom_kpi_context[i], 0, sizeof(dmf_custom_kpi_context_struct));
    }
}

void dmf_custom_kpi_create()
{
    // Register callback function thorugh MTF

    /* define Info Collect static variables*/
	kal_uint8 i;
	
#define DMF_REG_EM(EM_INFO, EM_MSG_ID, HDLR) \
    static mte_rule_t EM_INFO##EM_MSG_ID##HDLR##_em_rule;
#define DMF_REG_PEER(PEER_ID, HDLR) \
    static mte_rule_t PEER_ID##HDLR##_peer_rule;
#ifdef __ICD_LOGGING_SUPPORT__
#define DMF_REG_ICD_EVENT(ICD_EVENT_CODE, HDLR) \
    static mte_rule_t ICD_EVENT_CODE##HDLR##_icd_event_rule; \
    static mte_rule_t ICD_EVENT_CODE##HDLR##_icd_event_rule_2;
#define DMF_REG_ICD_RECORD(ICD_RECORD_CODE, HDLR) \
    static mte_rule_t ICD_RECORD_CODE##HDLR##_icd_record_rule; \
    static mte_rule_t ICD_RECORD_CODE##HDLR##_icd_record_rule_2;
#endif
    #include "custom_dmf_kpi_app_reg.h"

/* Register InfoCollect source */
#define DMF_REG_EM(EM_INFO, EM_MSG_ID, HDLR) \
    EM_INFO##EM_MSG_ID##HDLR##_em_rule.fmt_id = MT_FMT_ILM; \
    EM_INFO##EM_MSG_ID##HDLR##_em_rule.code = EM_MSG_ID; \
    EM_INFO##EM_MSG_ID##HDLR##_em_rule.context = NULL; \
    EM_INFO##EM_MSG_ID##HDLR##_em_rule.execute = HDLR; \
    mt_register_mte_rule(&EM_INFO##EM_MSG_ID##HDLR##_em_rule);

#define DMF_REG_PEER(PEER_ID, HDLR) \
    PEER_ID##HDLR##_peer_rule.fmt_id = MT_FMT_PEER_TRACE; \
    PEER_ID##HDLR##_peer_rule.code = PEER_ID; \
    PEER_ID##HDLR##_peer_rule.context = NULL; \
    PEER_ID##HDLR##_peer_rule.execute = HDLR; \
    mt_register_mte_rule(&PEER_ID##HDLR##_peer_rule);

#ifdef __ICD_LOGGING_SUPPORT__

#define DMF_REG_ICD_EVENT(ICD_EVENT_CODE, HDLR) \
    ICD_EVENT_CODE##HDLR##_icd_event_rule.fmt_id = MT_FMT_ICD; \
    ICD_EVENT_CODE##HDLR##_icd_event_rule.code = GET_RULE_CODE(ICD_LOG_EVENT_T, ICD_EVENT_CODE, ICD_PROTOCOL_ID_1); \
    ICD_EVENT_CODE##HDLR##_icd_event_rule.context = NULL; \
    ICD_EVENT_CODE##HDLR##_icd_event_rule.execute = HDLR; \
    mt_register_mte_rule(&ICD_EVENT_CODE##HDLR##_icd_event_rule); \
    ICD_EVENT_CODE##HDLR##_icd_event_rule_2.fmt_id = MT_FMT_ICD; \
    ICD_EVENT_CODE##HDLR##_icd_event_rule_2.code = GET_RULE_CODE(ICD_LOG_EVENT_T, ICD_EVENT_CODE, ICD_PROTOCOL_ID_2); \
    ICD_EVENT_CODE##HDLR##_icd_event_rule_2.context = NULL; \
    ICD_EVENT_CODE##HDLR##_icd_event_rule_2.execute = HDLR; \
    mt_register_mte_rule(&ICD_EVENT_CODE##HDLR##_icd_event_rule_2); \


#define ATT_ICD_RECORD_SRC(ICD_RECORD_CODE) \
    ICD_RECORD_CODE##_lte_icd_record_rule.fmt_id = MT_FMT_ICD; \
    ICD_RECORD_CODE##_lte_icd_record_rule.code = GET_RULE_CODE(ICD_LOG_RECORD_T, ICD_RECORD_CODE, ICD_PROTOCOL_ID_1); \
    ICD_RECORD_CODE##_lte_icd_record_rule.context = NULL; \
    ICD_RECORD_CODE##_lte_icd_record_rule.execute = HDLR; \
    mt_register_mte_rule(&ICD_RECORD_CODE##_lte_icd_record_rule); \
    ICD_RECORD_CODE##_lte_icd_record_rule_2.fmt_id = MT_FMT_ICD; \
    ICD_RECORD_CODE##_lte_icd_record_rule_2.code = GET_RULE_CODE(ICD_LOG_RECORD_T, ICD_RECORD_CODE, ICD_PROTOCOL_ID_2); \
    ICD_RECORD_CODE##_lte_icd_record_rule_2.context = NULL; \
    ICD_RECORD_CODE##_lte_icd_record_rule_2.execute = HDLR; \
    mt_register_mte_rule(&ICD_RECORD_CODE##_lte_icd_record_rule_2); \


#endif /* __ICD_LOGGING_SUPPORT__ */
    #include "custom_dmf_kpi_app_reg.h"

    // reset contexts here
    dmf_custom_kpi_reset();
	
	for (i=0; i<MAX_SIM_NUM; i++)
    {
        nvram_ef_mtf_dmf_custom_kpi_statistics_struct nvram_buf;
	
		nvram_external_read_data(NVRAM_EF_MTF_DMF_CUSTOM_KPI_STATISTICS_LID,
			i+1,
			(kal_uint8*) &nvram_buf,
			NVRAM_EF_MTF_DMF_CUSTOM_KPI_STATISTICS_SIZE);
		dmf_custom_kpi_context[i].eps_attach_req_snd_cnt = nvram_buf.lte_attach_req_cnt;
		dmf_custom_kpi_context[i].eps_attach_succ_cnt = nvram_buf.lte_attach_succ_cnt;
		dmf_custom_kpi_context[i].eps_attach_fail_with_cause2_cnt = nvram_buf.lte_attach_fail_with_cause2_cnt;
		dmf_custom_kpi_context[i].eps_attach_fail_with_cause3_cnt = nvram_buf.lte_attach_fail_with_cause3_cnt;
		dmf_custom_kpi_context[i].eps_attach_fail_with_cause6_cnt = nvram_buf.lte_attach_fail_with_cause6_cnt;
		dmf_custom_kpi_context[i].eps_attach_fail_with_cause7_cnt = nvram_buf.lte_attach_fail_with_cause7_cnt;
		dmf_custom_kpi_context[i].eps_attach_fail_with_cause8_cnt = nvram_buf.lte_attach_fail_with_cause8_cnt;
		dmf_custom_kpi_context[i].eps_attach_fail_with_cause11_cnt = nvram_buf.lte_attach_fail_with_cause11_cnt;
		dmf_custom_kpi_context[i].eps_attach_fail_with_cause12_cnt = nvram_buf.lte_attach_fail_with_cause12_cnt;
		dmf_custom_kpi_context[i].eps_attach_fail_with_cause13_cnt = nvram_buf.lte_attach_fail_with_cause13_cnt;
		dmf_custom_kpi_context[i].eps_attach_fail_with_cause14_cnt = nvram_buf.lte_attach_fail_with_cause14_cnt;
		dmf_custom_kpi_context[i].eps_attach_fail_with_cause15_cnt = nvram_buf.lte_attach_fail_with_cause15_cnt;
		dmf_custom_kpi_context[i].eps_attach_fail_with_cause16_cnt = nvram_buf.lte_attach_fail_with_cause16_cnt;
		dmf_custom_kpi_context[i].eps_attach_fail_with_cause17_cnt = nvram_buf.lte_attach_fail_with_cause17_cnt;
		dmf_custom_kpi_context[i].eps_attach_fail_with_cause18_cnt = nvram_buf.lte_attach_fail_with_cause18_cnt;
		dmf_custom_kpi_context[i].eps_attach_fail_with_cause22_cnt = nvram_buf.lte_attach_fail_with_cause22_cnt;
		dmf_custom_kpi_context[i].eps_attach_fail_with_cause25_cnt = nvram_buf.lte_attach_fail_with_cause25_cnt;
		dmf_custom_kpi_context[i].eps_attach_fail_with_cause35_cnt = nvram_buf.lte_attach_fail_with_cause35_cnt;
		dmf_custom_kpi_context[i].eps_attach_fail_with_cause42_cnt = nvram_buf.lte_attach_fail_with_cause42_cnt;
		dmf_custom_kpi_context[i].act_default_bearer_req_rcv_cnt = nvram_buf.act_default_eps_bearer_req_cnt;
		dmf_custom_kpi_context[i].act_default_bearer_accept_sent_cnt = nvram_buf.act_default_eps_bearer_accept_cnt;
		dmf_custom_kpi_context[i].act_default_bearer_reject_sent_cnt = nvram_buf.act_default_eps_bearer_reject_cnt;
		dmf_custom_kpi_context[i].srvcc_ho_req_rcv_cnt = nvram_buf.srvcc_ho_req_cnt;
		dmf_custom_kpi_context[i].srvcc_ho_succ_sent_cnt = nvram_buf.srvcc_ho_succ_cnt;
		dmf_custom_kpi_context[i].srvcc_ho_fail_cnt = nvram_buf.srvcc_ho_fail_cnt;
		dmf_custom_kpi_context[i].initial_reg_req_cnt = nvram_buf.initial_ims_reg_req_cnt;
		dmf_custom_kpi_context[i].initial_reg_req_with_401_rsp_cnt = nvram_buf.initial_ims_reg_req_with_401_rsp_cnt;
        dmf_custom_kpi_context[i].initial_reg_req_with_auc_cnt = nvram_buf.initial_ims_reg_req_with_auc_cnt;
	    dmf_custom_kpi_context[i].initial_reg_success_cnt = nvram_buf.initial_ims_reg_success_cnt;
		dmf_custom_kpi_context[i].initial_rsp_cnt = nvram_buf.initial_volte_call_rsp_cnt;
	    dmf_custom_kpi_context[i].final_rsp_cnt = nvram_buf.final_volte_call_rsp_cnt;
	    dmf_custom_kpi_context[i].initial_call_drop_cnt = nvram_buf.initial_volte_call_drop_cnt;
	    dmf_custom_kpi_context[i].final_call_drop_cnt = nvram_buf.final_volte_call_drop_cnt;
		dmf_custom_kpi_context[i].mo_call_req_cnt = nvram_buf.initial_mo_volte_call_req_cnt;
		dmf_custom_kpi_context[i].mo_call_connect_to_nw_cnt = nvram_buf.initial_mo_volte_call_connect_to_nw_cnt;
		dmf_custom_kpi_context[i].mo_call_early_release_cnt = nvram_buf.mo_volte_call_early_release_cnt;
		dmf_custom_kpi_context[i].mo_call_with_403_cnt = nvram_buf.mo_volte_call_with_403_cnt;
		dmf_custom_kpi_context[i].mo_call_with_486_cnt = nvram_buf.mo_volte_call_with_486_cnt; 
		dmf_custom_kpi_context[i].mo_call_with_480_cnt = nvram_buf.mo_volte_call_with_480_cnt;
		dmf_custom_kpi_context[i].mo_call_with_484_cnt = nvram_buf.mo_volte_call_with_484_cnt;
		dmf_custom_kpi_context[i].mo_call_with_600_cnt = nvram_buf.mo_volte_call_with_600_cnt;
		dmf_custom_kpi_context[i].mo_call_with_604_cnt = nvram_buf.mo_volte_call_with_604_cnt;
		dmf_custom_kpi_context[i].mo_call_with_487_cnt = nvram_buf.mo_volte_call_with_487_cnt;
		dmf_custom_kpi_context[i].mt_call_req_cnt = nvram_buf.initial_mt_volte_call_req_cnt;
		dmf_custom_kpi_context[i].mt_call_connect_success_cnt = nvram_buf.mt_volte_call_connect_success_cnt;
		dmf_custom_kpi_context[i].mt_call_early_release_cnt = nvram_buf.mt_volte_call_early_release_cnt;
		dmf_custom_kpi_context[i].mt_call_with_486_cnt = nvram_buf.mt_volte_call_with_486_cnt;
		dmf_custom_kpi_context[i].mt_call_with_403_cnt = nvram_buf.mt_volte_call_with_403_cnt;
		dmf_custom_kpi_context[i].mt_call_with_480_cnt = nvram_buf.mt_volte_call_with_480_cnt;
		dmf_custom_kpi_context[i].mt_call_with_484_cnt = nvram_buf.mt_volte_call_with_484_cnt;
		dmf_custom_kpi_context[i].mt_call_with_600_cnt = nvram_buf.mt_volte_call_with_600_cnt;
		dmf_custom_kpi_context[i].mt_call_with_604_cnt = nvram_buf.mt_volte_call_with_604_cnt;
		dmf_custom_kpi_context[i].mt_call_with_487_cnt = nvram_buf.mt_volte_call_with_487_cnt;
    }
}



void dmf_custom_kpi_clean_context(void)
{
    memset(&dmf_custom_kpi_context, 0, MAX_SIM_NUM*sizeof(dmf_custom_kpi_context));
}





void dmf_custom_kpi_event_hdlr(dmf_event_struct *event)
{

    // handle event broadcasted by DMF InfoCollector in this function
    if (event->event_id == DMF_EVENT_CMCC_EPS_ATTACH_INFO)
    {
        dmf_custom_kpi_event_cmcc_eps_attach_info_handler(event);
    }
	if(event->event_id == DMF_EVENT_CMCC_ESM_ACT_DEFAULT_BEARER_INFO)
	{
		dmf_custom_kpi_event_cmcc_eps_bearer_info_handler(event);
	}
	if(event->event_id == DMF_EVENT_CMCC_ERRC_SUCC_RATE_KPI_INFO)
	{
		dmf_custom_kpi_event_cmcc_succ_rate_kpi_info_handler(event);
	}
	if(event->event_id == DMF_EVENT_CMCC_ERRC_MFROM_INFO)
	{
		dmf_custom_kpi_event_cmcc_errc_mfrom_info_handler(event);
	}
	if(event->event_id == DMF_EVENT_CMCC_ERRC_SRVCC_FAIL_INFO)
	{
		dmf_custom_kpi_event_cmcc_errc_srvcc_fail_info_handler(event);
	}
	if(event->event_id == DMF_EVENT_CMCC_IMS_REG_INFO)
	{
		dmf_custom_kpi_event_cmcc_ims_reg_info_handler(event);
	}
	if(event->event_id == DMF_EVENT_CMCC_VOLTE_CALL_DROP_INFO)
	{
		dmf_custom_kpi_event_cmcc_volte_call_drop_info_handler(event);
	}
	if(event->event_id == DMF_EVENT_CMCC_MO_VOLTE_CALL_INFO)
	{
		dmf_custom_kpi_event_cmcc_mo_volte_call_info_handler(event);
	}
	if(event->event_id == DMF_EVENT_CMCC_MT_VOLTE_CALL_INFO)
	{
		dmf_custom_kpi_event_cmcc_mt_volte_call_info_handler(event);
	}
}


