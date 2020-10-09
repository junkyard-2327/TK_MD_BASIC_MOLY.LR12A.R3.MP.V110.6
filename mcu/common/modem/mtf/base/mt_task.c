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
 * mt_task.c
 *
 * Project:
 * --------
 * UMOLYA
 *
 * Description:
 * ------------
 * MT_Framework task implement 
 *
 * Author:
 * -------
 * -------
 *
 *
 * ==========================================================================
 * $Log$ 
 *
 * 
 ****************************************************************************/

/*****************************************************************************/
/*                            Includes                                       */
/*****************************************************************************/
#include "mt.h"
#include "mte_if.h"
#include "mt_dispatcher.h"
#include "mtf_msgid.h"
#include "em_msgid.h"
#include "dhl_trace.h"
#include "dhl_def.h"

#include "srv_modid.h"

#include "tst_msgid.h"
#include "tst_sap.h"

#include "nvram_defs.h"

/*****************************************************************************/
/*                               Define                                      */
/*****************************************************************************/

#define MT_MAGIC_FORMATTER (0x8877)
#define MT_MAGIC_ELEMENT (0x5566)

/*****************************************************************************/
/*                         Global variables                                  */
/*****************************************************************************/
mt_context_t mt;

/*****************************************************************************/
/*                         External functions                                */
/*****************************************************************************/
extern nvram_ltable_entry_struct logical_data_item_table_mtf[];

/*****************************************************************************/
/*                         External functions                                */
/*****************************************************************************/

/*****************************************************************************/
/*                         Internal functions                                */
/*****************************************************************************/

/*****************************************************************************/
/*                         Function Body                                     */
/*****************************************************************************/


void
mt_register_formatter(mt_formatter_t *formatter)
{
	int result;
	EXT_ASSERT(formatter, 0, 0, 0);
	EXT_ASSERT(formatter->fmt_id < MT_FMT_MAX, formatter->fmt_id, MT_FMT_MAX, 0);
	
	result = mt_dispatcher_entry_init(formatter, MT_MAGIC_FORMATTER, formatter->ilm_msg_id);
	EXT_ASSERT(result == 0, result, 0, formatter->ilm_msg_id);
	
	mt.formatter[formatter->fmt_id] = formatter;
	
	if (formatter->fmt_id != MT_FMT_ILM) {
		result = mt_dispatcher_add_entry(&mt.formatter_list, formatter->ilm_msg_id, formatter);	
		EXT_ASSERT(result == 0, result, formatter->fmt_id, 0);
	}
}

void 
mt_register_mte_rule(mte_rule_t *mte_rule)
{
	int result;
	mt_formatter_t *f;
    
	EXT_ASSERT(mte_rule, 0, 0, 0);
	EXT_ASSERT(mte_rule->fmt_id < MT_FMT_MAX, mte_rule, mte_rule->fmt_id, mte_rule->code);
	EXT_ASSERT(mte_rule->execute, mte_rule, mte_rule->fmt_id, mte_rule->code);
	
	result = mt_dispatcher_entry_init(mte_rule, MT_MAGIC_ELEMENT, mte_rule->code);
	EXT_ASSERT(result == 0, result, mte_rule->fmt_id, mte_rule->code);
	
	f = mt.formatter[mte_rule->fmt_id];
	EXT_ASSERT(f, mte_rule->fmt_id, mte_rule, 0);
	
	result = mt_dispatcher_add_entry(&f->element_list, mte_rule->code, mte_rule);
	EXT_ASSERT(result == 0, result, mte_rule->code, mte_rule);
}

kal_bool mt_send_to_framework(ilm_struct *ilm_ptr)
{
    if(ilm_ptr->msg_id == MSG_ID_DHL_MT_ICD_IND || 
        ilm_ptr->msg_id == MSG_ID_DHL_MT_PEER_TRACE_IND || 
        ilm_ptr->msg_id == MSG_ID_EM_IMC_SIP_INFO_IND ||
        ilm_ptr->msg_id == MSG_ID_EM_RRCE_NW_PEER_MSG_INFO_IND)
    {
        //ICD or PEER_TRACE formatter would use Peer buffer
        hold_peer_buff(ilm_ptr->peer_buff_ptr);
    }
    
    hold_local_para(ilm_ptr->local_para_ptr);
    ilm_ptr->dest_mod_id = MOD_MT;   
    msg_send(ilm_ptr);
    return KAL_TRUE;
}

kal_bool 
mt_task_init()
{
    mt_dispatcher_init();
    mt_formatters_init();
    mt_elements_init();

    nvram_ltable_register( logical_data_item_table_mtf);
    return KAL_TRUE;
}

kal_bool 
mt_task_reset(void)
{
    mt_elements_reset();
    return KAL_TRUE;
}


extern void mte_att_set_em_filters();
extern void mte_att_set_icd_filters();
void mt_tst_inject_string_hdlr(ilm_struct *ilm_ptr)
{
    tst_module_string_inject_struct *msg_ptr;

    msg_ptr = (tst_module_string_inject_struct*) ilm_ptr->local_para_ptr;

    switch(msg_ptr->index)
    {

        default:
            break;
    }
}

void 
mt_task_main(task_entry_struct* task_entry_ptr)
{
	ilm_struct current_ilm;

	kal_set_active_module_id(MOD_MT);
	dhl_print(TRACE_STATE, DHL_USER_FLAG_NONE, MOD_MT, "enter mt_task_main");

	mt_elements_init_proc();
    
	while(1) {
		mt_formatter_t *f;		
		mt_msginfo_t m;
		mte_rule_t *r = NULL;
        
		msg_receive_extq(&current_ilm);


		if (current_ilm.msg_id == MSG_ID_TST_INJECT_STRING)
		{
			mt_tst_inject_string_hdlr(&current_ilm);
			continue;
		}

		if (!(f = mt_dispatcher_find_entry(&mt.formatter_list, current_ilm.msg_id, NULL))) {
			f = mt.formatter[MT_FMT_ILM];
		}
		if (!f) {
			continue;
		}
		mt_dispatcher_verify(f, MT_MAGIC_FORMATTER);
		

		f->extract_msginfo(&current_ilm, &m);// put current ilm content to msginfo


        while ((r = mt_dispatcher_find_entry(&f->element_list, m.code, r))) {
    		mt_dispatcher_verify(r, MT_MAGIC_ELEMENT);
		
    		r->execute(r, m.msg, m.msg_size);
        }
		destroy_ilm(&current_ilm);
	}
}

#ifndef STANDALONE_TEST
kal_bool
mt_create(comptask_handler_struct **handle)
{
	static const comptask_handler_struct task_handler_info =
	{
		mt_task_main,    /* task entry function */
		mt_task_init,    /* task initialization function */
		mt_task_reset    /* task reset handler */
	};

	*handle = (comptask_handler_struct *)&task_handler_info;
	return KAL_TRUE;
}
#endif 
