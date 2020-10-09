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
 *   med_main.c
 *
 * Project:
 * --------
 *   Maui
 *
 * Description:
 * ------------
 *   This file includes primary functions of media task.
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
 * removed!
 *
 * removed!
 * removed!
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
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
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
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!! 
 *==============================================================================
 *******************************************************************************/

/*==== INCLUDES =========*/

/* system includes */

#include "kal_public_defs.h"
#include "kal_general_types.h"
#include "kal_public_api.h"
#include "kal_trace.h"
#include "syscomp_config.h"
#include "task_config.h"
#include "nvram_msgid.h"
#include "sysservice_msgid.h"
#include "tst_msgid.h"
#include "med_msgid.h"
#include "drv_msgid.h"
#include "cmux_msgid.h"
#include "audio_msgid.h"
#include "em_msgid.h"

#include "tst_sap.h"
#include "drv_sap.h"


/* global includes */
#include "l1audio.h"
#include "nvram_struct.h"
#include "audio_nvram_def.h"
#include "nvram_editor_data_item.h"
// #include "aud_common_config.h"

/* local include */
#include "med_global.h"
#include "med_mem.h"
#include "med_struct.h"
#include "med_context.h"
#include "med_utility.h"

#include "aud_main.h"
#include "med_main.h"

#ifdef __SPEECH_MODE_TABLE_SUPPORT__
#include "speech_mode_table.h"
#endif

//Only for AUDIO_DEVICE_MICROPHONE
#include "device.h"

#include "em_struct.h"

#if defined(__VOLTE_SUPPORT__)
#include "ltecsr_msgid.h"
#endif //#if defined(__VOLTE_SUPPORT__)


/* global variables */
med_context_struct med_context;
med_context_struct *med_context_p = &med_context;

#ifdef __MTK_TARGET__
   #if defined(__DYNAMIC_SWITCH_CACHEABILITY__)
      __attribute__ ((section ("DYNAMICCACHEABLEZI_NC_MMIPOOL"))) 
      __attribute__((aligned(4)))
      kal_uint8 med_aud_mem[MED_AUD_MEM_SIZE];
   #else
      __attribute__ ((section ("LARGEPOOL_ZI"))) 
      __attribute__((aligned(4)))
      kal_uint8 med_aud_mem[MED_AUD_MEM_SIZE];
   #endif
#else
    kal_uint8 med_aud_mem[MED_AUD_MEM_SIZE];
#endif


#if !defined(MED_NOT_PRESENT)

/*==== FUNCTIONS ===========*/
extern void med_timer_expiry_hdlr(ilm_struct *ilm_ptr);

/*****************************************************************************
 * FUNCTION
 *  med_nvram_read_data_cnf_hdlr
 * DESCRIPTION
 *  This function is to handle nvram read data confirm.
 * PARAMETERS
 *  local_para_ptr      [?]     
 *  peer_buff_ptr       [?]     
 * RETURNS
 *  void
 *****************************************************************************/
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
            #if defined(__SPEECH_MODE_TABLE_SUPPORT__)
/* under construction !*/
            #elif defined(__AMRWB_LINK_SUPPORT__)
/* under construction !*/
            #elif defined(__DUAL_MIC_SUPPORT__)
/* under construction !*/
            #else
/* under construction !*/
            #endif
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
    #ifdef __SPEECH_MODE_TABLE_SUPPORT__        
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
            #if defined(__AMRWB_LINK_SUPPORT__)
/* under construction !*/
            #elif defined( __DUAL_MIC_SUPPORT__)
/* under construction !*/
            #else
/* under construction !*/
            #endif
/* under construction !*/
/* under construction !*/
    #endif /* __SPEECH_MODE_TABLE_SUPPORT__ */
/* under construction !*/
    #ifdef __AMRWB_LINK_SUPPORT__
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
            #if defined(__DUAL_MIC_SUPPORT__)
/* under construction !*/
            #else
/* under construction !*/
            #endif
/* under construction !*/
/* under construction !*/
    #endif /* __AMRWB_LINK_SUPPORT__ */
/* under construction !*/
    #ifdef __DUAL_MIC_SUPPORT__
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
        #ifdef __AMRWB_LINK_SUPPORT__
/* under construction !*/
        #endif
/* under construction !*/
/* under construction !*/
/* under construction !*/
        #ifdef __AMRWB_LINK_SUPPORT__
/* under construction !*/
        #endif     
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
    #endif
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
    #ifdef __AMRWB_LINK_SUPPORT__
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
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif   // #if 0 
#endif   // #if !defined(MED_NOT_PRESENT)

//#if !defined(MED_NOT_PRESENT)
//extern void l1audio_console_handler(kal_char *string); 
//#endif // 
/*****************************************************************************
 * FUNCTION
 *  med_main
 * DESCRIPTION
 *  This function is main message dispatching function of media task.
 * PARAMETERS
 *  ilm_ptr     [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void med_main(ilm_struct *ilm_ptr)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/

#if defined(__VOLTE_SUPPORT__)
    if (ilm_ptr->msg_id == MSG_ID_LTECSR_VOICE_UL_DATA_NOTIFY)
    {
#ifndef __MTK_TARGET__
        return;
#else //#ifndef __MTK_TARGET__
       void sp4g_fake_loopback(void);
       sp4g_fake_loopback();
#endif //#ifndef __MTK_TARGET__
    }
    if (ilm_ptr->msg_id == MSG_ID_LTECSR_VOICE_UL_MUTE_NOTIFY)
    {
        return;
    }
#endif //#if defined(__VOLTE_SUPPORT__)

#if !defined(MED_NOT_PRESENT)
    if (ilm_ptr->msg_id == MSG_ID_TIMER_EXPIRY)
    {
    	  ASSERT(0);
        //med_timer_expiry_hdlr(ilm_ptr);
    }
    /*else if (ilm_ptr->msg_id == MSG_ID_MED_STARTUP_REQ)
    {
        med_startup_hdlr(ilm_ptr);
    }
    else if (ilm_ptr->msg_id == MSG_ID_NVRAM_READ_CNF)
    {
        med_nvram_read_data_cnf_hdlr(ilm_ptr->local_para_ptr, ilm_ptr->peer_buff_ptr);
    }
    else if (ilm_ptr->msg_id == MSG_ID_NVRAM_WRITE_CNF)
    {
        med_nvram_write_data_cnf_hdlr(ilm_ptr->local_para_ptr, ilm_ptr->peer_buff_ptr);
    }
    else if ( (ilm_ptr->msg_id >= MSG_ID_MED_CODE_BEGIN) && (ilm_ptr->msg_id <= MSG_ID_MED_CODE_TAIL) )
    {
        aud_main(ilm_ptr);
    }*/
    else if(ilm_ptr->msg_id == MSG_ID_MEDIA_AUD_SP_SET_MODE_REQ)
	  {
		   meida_aud_sp_set_mode_req_struct *req_p;
		   req_p = (meida_aud_sp_set_mode_req_struct*) ilm_ptr->local_para_ptr;
		   if (req_p->speech_on)
		   {
	          L1SP_Speech_On(req_p->rat_mode);	   	
		   }
		   else
		   {
		      L1SP_Speech_Off();
		   }
    }

    else 
#endif    
    if (ilm_ptr->msg_id == MSG_ID_TST_INJECT_STRING) {
	 	tst_module_string_inject_struct *tstInj = (tst_module_string_inject_struct *)ilm_ptr->local_para_ptr;
		if(tstInj->index == 99 ) {
			void l1audio_console_handler(kal_char *string);
			l1audio_console_handler((kal_char *)(tstInj->string));
		} else {
			kal_prompt_trace(MOD_MED, "unused inject string index = %d ", tstInj->index);
		}			
	} else if(ilm_ptr->msg_id == MSG_ID_L4CPS_EM_UPDATE_REQ ) {
		l4cps_em_update_req_struct * em_update_ptr = (l4cps_em_update_req_struct *) ilm_ptr->local_para_ptr;
		if(em_update_ptr->em_src == EM_FROM_ELT) {
			void SP_setEmCodecNotifyOff(kal_bool isOff);
			if(EM_OFF == em_update_ptr->info_request[EM_SPEECH_INFO_SPH_CODEC]) {
				SP_setEmCodecNotifyOff(KAL_TRUE);
			} else if(EM_ON == em_update_ptr->info_request[EM_SPEECH_INFO_SPH_CODEC]) {
				SP_setEmCodecNotifyOff(KAL_FALSE);
			} // EM_NC, no change do nothing
		} // else from AT do nothing
	}

	 if (ilm_ptr->msg_id ==  MSG_ID_AUDIO_L4C_EPOF_NOTIFY) {
#if defined( __SMART_PHONE_MODEM__ )	 	
		kal_prompt_trace(MOD_L1SP, "[EPOF]med_main receive L4C EPOF notify");
		set_spcGetEpofTimes(ENUM_EPOF_MD1_L4C_NOTIFY, 1);
		if( 0 == get_spcGetEpofTimes(ENUM_EPOF_DO_FORCEENDALLAPP) )
		{
			void Spc_ForceEndAllApp(void);
			Spc_ForceEndAllApp();
		}
		if(get_spcGetEpofTimes(ENUM_EPOF_AP_ACK_NOTIFY))
		{
			//Notify L4C: speech driver enter EPOF done
			msg_send6(MOD_MED, MOD_L4C, AUDIO_SAP, MSG_ID_AUDIO_L4C_EPOF_ACK, (local_para_struct *)NULL, NULL);
			kal_prompt_trace(MOD_L1SP, "[EPOF]med_main notify L4C done");
		}
#else // #if defined( __SMART_PHONE_MODEM__ )
		//Notify L4C: speech driver enter EPOF done
		msg_send6(MOD_MED, MOD_L4C, AUDIO_SAP, MSG_ID_AUDIO_L4C_EPOF_ACK, (local_para_struct *)NULL, NULL);
		kal_prompt_trace(MOD_L1SP, "[EPOF]med_main notify L4C done 2");
#endif // #if defined( __SMART_PHONE_MODEM__ )	 	
	 }

#if defined(SHASTA_L)
	 if (ilm_ptr->msg_id ==  MSG_ID_AUDIO_C2K_EPOF_NOTIFY) {
#if defined( __SMART_PHONE_MODEM__ )
		kal_prompt_trace(MOD_L1SP, "[EPOF]med_main receive C2K EPOF notify");
		set_spcGetEpofTimes(ENUM_EPOF_C2K_NOTIFY, 1);
		if( 0 == get_spcGetEpofTimes(ENUM_EPOF_DO_FORCEENDALLAPP) )
		{
			Spc_ForceEndAllApp();
		}
#endif // #if defined( __SMART_PHONE_MODEM__ )
	 }
#endif //#if defined(SHASTA_L)

	if(ilm_ptr->msg_id == MSG_ID_AUDIO_CUST_DUMP_REQ) {
#if defined( __SMART_PHONE_MODEM__ ) 
		void spc_sendCustomDump(void *ilm);
		spc_sendCustomDump(ilm_ptr->local_para_ptr);
#endif 
	}
#if !defined(L1_NOT_PRESENT) && !defined(__UE_SIMULATOR__)
  #if defined( __DATA_CARD_SPEECH__ )
    if ( ( (ilm_ptr->msg_id >= CMUX_MSG_CODE_BEGIN) && (ilm_ptr->msg_id <= MSG_ID_CMUX_CODE_TAIL) )
    	   || ( (ilm_ptr->msg_id >= MSG_ID_SPEECH_ON_ACK) && (ilm_ptr->msg_id <= MSG_ID_STRM_SPEECH_UL_DATA_REQUEST ) )
    	   || ( (ilm_ptr->msg_id >= DRIVER_MSG_CODE_BEGIN) && (ilm_ptr->msg_id <= MSG_ID_DRIVER_CODE_TAIL) ) )
    {
        SP_Strm_Audl_Handler(ilm_ptr);
    }
  #endif
  #if defined( __SMART_PHONE_MODEM__ )
    if (ilm_ptr->msg_id == MSG_ID_AUDIO_A2M_CCCI)
    {
        SpcIO_Msg_Handler_inAudL(ilm_ptr);
    } else if (ilm_ptr->msg_id == MSG_ID_MEDIA_AUD_MUTE_REQ) {
    	 /*----------------------------------------------------------------*/
	    /* Local Variables                                                */
	    /*----------------------------------------------------------------*/
	    kal_uint16 cnf_msg_id;
	    void *cnf_p = NULL;

	    media_aud_mute_req_struct *req_p;

	    /*----------------------------------------------------------------*/
	    /* Code Body                                                      */
	    /*----------------------------------------------------------------*/
	    req_p = (media_aud_mute_req_struct*) ilm_ptr->local_para_ptr;

	    switch (req_p->device)
	    {
	        case AUDIO_DEVICE_MICROPHONE:
	            /* call L1AUD to set microphone mute */
	            L1SP_MuteMicrophone(req_p->mute);
	            // aud_context_p->audio_mute = req_p->mute;
	            break;
	        default:
	            break;
	    }

	    cnf_p = (media_aud_mute_cnf_struct*) construct_local_para(sizeof(media_aud_mute_cnf_struct), TD_CTRL);

	    cnf_msg_id = MSG_ID_MEDIA_AUD_MUTE_CNF;

	    // aud_send_ilm(ilm_ptr->src_mod_id, cnf_msg_id, cnf_p, NULL);
	    msg_send6(kal_get_active_module_id(),ilm_ptr->src_mod_id,AUDIO_SAP,cnf_msg_id,cnf_p, NULL);
    }
  #endif
#endif

    if ((ilm_ptr->msg_id > MSG_ID_AUDIO_M2M_BEGIN) && (ilm_ptr->msg_id < MSG_ID_AUDIO_M2M_TAIL))
    {
        #ifdef __MTK_TARGET__
        void SP_M2M_Handler(ilm_struct *ilm_ptr);
        SP_M2M_Handler(ilm_ptr);
        #endif //#ifdef __MTK_TARGET__
    }
#if !defined(__L1_STANDALONE__)    
    if ((ilm_ptr->msg_id > MSG_ID_AUDIO_L2P_BEGIN) && (ilm_ptr->msg_id < MSG_ID_AUDIO_L2P_TAIL))
    {
        #ifdef __MTK_TARGET__
        void SP_L2P_Handler(ilm_struct *ilm_ptr);
        SP_L2P_Handler(ilm_ptr);
        #endif //#ifdef __MTK_TARGET__
    }        
#endif   
#if defined(__VOLTE_SUPPORT__)    
    if ( ilm_ptr->msg_id == MSG_ID_MEDIA_IN_PROC_CALL_REQ )
    {
        #ifdef __MTK_TARGET__
        void aud_util_in_proc_call_req_hdlr(ilm_struct *ilm_ptr);
        kal_prompt_trace(MOD_L1SP, "[TONEDEBUG]MSG_ID_MEDIA_IN_PROC_CALL_REQ1");
        aud_util_in_proc_call_req_hdlr(ilm_ptr);
        #endif //#ifdef __MTK_TARGET__
    }
#endif   
}


/*****************************************************************************
 * FUNCTION
 *  med_task_main
 * DESCRIPTION
 *  This function is main function of media task.
 * PARAMETERS
 *  task_entry_ptr      [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void med_task_main(task_entry_struct *task_entry_ptr)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    ilm_struct current_ilm;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/

#if !defined(L1_NOT_PRESENT) && !defined(__UE_SIMULATOR__)
    SP_Drv_Init_Task();
#endif

    while (1)
    {
        msg_receive_extq(&current_ilm);
        
        kal_set_active_module_id(current_ilm.dest_mod_id);

        med_main((void*)&current_ilm);

        destroy_ilm(&current_ilm);
    }

}


/*****************************************************************************
 * FUNCTION
 *  med_init
 * DESCRIPTION
 *  This function is used to init media task.
 * PARAMETERS
 *  task_indx       [IN]        
 * RETURNS
 *  
 *****************************************************************************/
kal_bool med_init(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
#if !defined(MED_NOT_PRESENT)
    med_context_p->aud_mem_p = med_aud_mem;

    /*if (!aud_init())
    {
        return KAL_FALSE;
    }*/
#else //#if !defined(MED_NOT_PRESENT)
    #if defined(__MCU_DTMF_SUPPORT__) 
    med_context_p->aud_mem_p = med_aud_mem;
    #endif //#if defined(__MCU_DTMF_SUPPORT__) 
#endif //#if !defined(MED_NOT_PRESENT)

    if (!med_utility_init())
    {
        return KAL_FALSE;
    }

#if !defined(L1_NOT_PRESENT) && !defined(__UE_SIMULATOR__)
    if (!SP_Drv_Init_Bootup())
    {
        return KAL_FALSE;
    }
#endif

    return KAL_TRUE;
}


/*****************************************************************************
 * FUNCTION
 *  med_reset
 * DESCRIPTION
 *  This function is used to reset media task.
 * PARAMETERS
 *  task_indx       [IN]        
 * RETURNS
 *  
 *****************************************************************************/
kal_bool med_reset(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    return KAL_TRUE;
}


/*****************************************************************************
 * FUNCTION
 *  med_create
 * DESCRIPTION
 *  This function is used to create media task configuration info.
 * PARAMETERS
 *  handle      [IN]        
 * RETURNS
 *  
 *****************************************************************************/
kal_bool med_create(comptask_handler_struct **handle)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    static const comptask_handler_struct med_handler_info = 
    {
        med_task_main,  /* task entry function */
        med_init,       /* task initialization function */
        med_reset       /* task reset handler */
    };

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    *handle = (comptask_handler_struct*) & med_handler_info;

    return KAL_TRUE;
}

