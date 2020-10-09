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
 *
 * Filename:
 * ---------
 * l1sp.c
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description:
 * ------------
 *   L1SP Interface 
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
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 *
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 *
 * removed!
 * removed!
 *
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
 *
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
 *
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
 *
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
 *==============================================================================
 *******************************************************************************/
#include "kal_public_api.h"
#include "kal_general_types.h"
#include "kal_trace.h"
#include "string.h"
#include "reg_base.h"
// #include "custom_equipment.h" /* custom_cfg_audio_ec_range() */
#include "device.h" /* MAX_VOL_LEVEL,  in ps\l4\include */
#include "audcoeff_default.h"
#include "gmss_public.h"
#include "l4_ps_api.h" //for query_ps_conf_test_mode()

// #include "audio_def.h"
#include "l1audio.h"
#include "l1audio_trace.h"
#include "l1sp_trc.h"
#include "l1audio_sph_trc.h"

#include "media.h"
#include "sp_enhance.h"
#include "afe.h"
#include "am.h"
#include "vm.h"
#include "sal_def.h"
#include "sal_exp.h"
#include "bgSnd.h"
#include "spc_drv.h"
#include "extcodec.h"

#include "mml1_rf_global.h"
#include "sp_drv.h"

#include "ps_em_exported_enum.h" 
#include "ps_public_utility.h"

#if defined(__DATA_CARD_SPEECH__) || defined(__BT_SCO_CODEC_SUPPORT__)
#include "sp_daca.h"
#endif

#ifdef __TWOMICNR_SUPPORT__
#include "two_mic_NR_custom_if.h"
#endif

#if !defined(__SMART_PHONE_MODEM__)
#include "apAudSysConfig.h"
#else

#endif

#if defined(__CVSD_CODEC_SUPPORT__) 
#include "bt_sco_drv.h"
#endif

#if defined(__VOLTE_SUPPORT__) 
#include "l1audio.h"
#endif

#include "speech_service.h"
#include "sp_cc.h"

// for modem project, DONGLE product use
#if defined(MT6280)
//	#define DACA_SPE_ENABLE_INTERNAL
#endif

#include "audio_msgid.h"
#include "drv_sap.h"
// #include "aud_common_config.h" // for DEFAULT_SPEECH_COMMON_PARA. in customer folder
#if defined(__C2K_SPEECH_SUPPORT__)
#include "lmd_audio.h" 
#endif

#if defined( __UMTS_RAT__ )
#include "uas_export_api.h"
#endif
#include "sp_dsptone_drv.h"
#include "ctm_drv.h" 

/* ------------------------------------------------------------------------------ */
/*  Speech Interface                                                              */
/* ------------------------------------------------------------------------------ */

static struct {
   uint8	   devSr;
   sp_device_info_t devInfo;
   sp_ext_dev_info_t extDevInfo;
   
   uint16   aud_id;
   uint16   aud_id_network_status;
   uint16   aud_id_em_codec_update; 
   uint16   sph_before_network_status;
   uint16   sph_c_para[NUM_COMMON_PARAS];
   uint16   sph_m_para[NUM_MODE_PARAS];
   // uint16   sph_v_para[NUM_VOL_PARAS]; // useless, should fine time to remove it  
	uint16   sph_m_paraWb[NUM_MODE_PARAS];
	uint16  sph_m_paraSWb[NUM_MODE_PARAS];

   uint8    mic_volume; //  [analog+digital gain]value corrently set to DSP&HW; when ANALOG_AFE_PATH_EXIST is NOT defined, this is 0

   uint16   isULMute; // flag to keep the DSP UL MUTE states
   bool     isDLMute; // flag to keep the DSP DL MUTE states
   
   bool     isUlEnhResultMute;
	bool     isUlSourceMute;
   bool     codec_mute; 
   bool     dl_codec_mute_by_ap; 
   L1SP_L4C_Event_Mode   codec_mute_mode;
   bool     tch_state; // true: TCH on; false: TCH off
   uint8    state; // recording the network is 2G or 3G      
   bool     isStandByMode; // recording any RAB exist
   
   L1SP_L4C_Codec  pre_l4c_codec; // remind to clean the codec in MED task

#if defined( __UMTS_RAT__ )
   bool     interRAT;
#endif
	
#if defined(__DATA_CARD_SPEECH__)
   void (*strmOnHandler)(void *); 
   void (*strmOffHandler)(void *);
   void (*strmHdl)(kal_uint32 event, void *param);
#endif      
   

#if defined(__ECALL_SUPPORT__)
   void (*pcm4wayOnHandler)(void *); 
   void (*pcm4wayOffHandler)(void *);
#endif

	bool isEmCodecNotifyOff;

#if defined(__C2K_SPEECH_SUPPORT__)
	int              c2k_so_codec;
	bool             isSO_Connected;
	bool             isConSSO_Done;
#endif	
} l1sp;
extern kal_enhmutexid sp_handover_mutex;

static kal_timerid sp_emCodec_timer;
extern void PSR_SP4G_Callback( SP4G_Event event, void *data);
//extern void CSR_SP3G_Callback( SP3G_Event event, void *data );
extern void vt_SP3G_Callback( kal_uint8 event, void *data );
extern void CSR_Codec_Ready(int rab_id);
extern void CSR_Codec_Close(int rab_id);
extern kal_uint32 SP3G_GetCodecMode(void);
extern kal_uint32 SP4G_GetCodecMode(void);

#if defined( __UMTS_RAT__ )
SP_3G_SIM L1SP_GetSIMStatus()
{
#ifdef __FAKE_3G_LOOPBACK__
   return SP_3G_SIM_FDD_ACTIVE;
#else	
   if( gmss_is_wcdma_mode_activated( FDD_CSR_ACTIVE_SIM()) ) {
      return SP_3G_SIM_FDD_ACTIVE;
   }else if( gmss_is_tdscdma_mode_activated( TDD_CSR_ACTIVE_SIM())){
   	  return SP_3G_SIM_TDD_ACTIVE;
   }else{
      return SP_3G_SIM_IDLE;	
   }
#endif   
}
#endif

#if defined(__C2K_SPEECH_SUPPORT__)
void L1SP_C2K_IntraRAT(int codec){
   ilm_SP_C2K_EVENT_t *local_para;	
   local_para = (ilm_SP_C2K_EVENT_t *) construct_local_para( sizeof(ilm_SP_C2K_EVENT_t), TD_CTRL );
   local_para->event  = L1SP_C2K_LINK_INTRARAT;
   local_para->param  = codec;
   msg_send6(MOD_L1SP, MOD_MED, AUDIO_SAP, MSG_ID_AUDIO_M2M_SP_C2K_EVENT, (local_para_struct *)local_para, NULL);
}

void SO_IntraRAT( int codec )
{
	 int16 aud_id;
	 ASSERT(l1sp.isSO_Connected);
   kal_trace( TRACE_INFO, C2K_SPH_INTRARAT, 0);
   kal_take_enh_mutex( sp_handover_mutex );
   aud_id = L1SP_GetAudID();   
   AM_C2K_IntraRAT(codec);
   L1SP_FreeAudID(aud_id);
   kal_give_enh_mutex( sp_handover_mutex );
   kal_trace( TRACE_INFO, C2K_SPH_INTRARAT, 1);
}

void L1SP_C2K_Est(int codec){   
   ilm_SP_C2K_EVENT_t *local_para;	
   local_para = (ilm_SP_C2K_EVENT_t *) construct_local_para( sizeof(ilm_SP_C2K_EVENT_t), TD_CTRL );
   local_para->event  = L1SP_C2K_LINK_ESTABLISH;
   local_para->param  = codec;
   SAL_Set_LinkStatus(SAL_LINKSTATUS_C2K  , true);     
   msg_send6(MOD_L1SP, MOD_MED, AUDIO_SAP, MSG_ID_AUDIO_M2M_SP_C2K_EVENT, (local_para_struct *)local_para, NULL);
}

void L1SP_C2K_DeEst( void ){   
   ilm_SP_C2K_EVENT_t *local_para;	
   local_para = (ilm_SP_C2K_EVENT_t *) construct_local_para( sizeof(ilm_SP_C2K_EVENT_t), TD_CTRL );
   local_para->event  = L1SP_C2K_LINK_DEESTABLISH;
   local_para->param  = 0;
   SAL_Set_LinkStatus(SAL_LINKSTATUS_C2K  , false);
   msg_send6(MOD_L1SP, MOD_MED, AUDIO_SAP, MSG_ID_AUDIO_M2M_SP_C2K_EVENT, (local_para_struct *)local_para, NULL);
}

void sub_SPC2K_DisconSSO_Done(void)
{
	  uint16 aud_id;
	 kal_trace( TRACE_INFO, C2K_SPH_SO_DISCON_DONE, 0);
	 aud_id = L1SP_GetAudID();
   l1sp.isConSSO_Done = false;//clear
   SPC2K_DisconSSO_Done();
   L1SP_FreeAudID(aud_id);
   kal_trace( TRACE_INFO, C2K_SPH_SO_DISCON_DONE, 1);
}

void SO_Disconnect( void )
{
   uint16 aud_id;
   kal_trace( TRACE_INFO, C2K_SPH_SO_DISCON, 0);
   kal_take_enh_mutex( sp_handover_mutex );
   aud_id = L1SP_GetAudID();                 
   ASSERT(l1sp.isSO_Connected);
#ifndef __FAKE_C2K_LOOPBACK__    
   SP_L4C_SetEvent(L1SP_L4C_ESPEECH_0, L1SP_L4C_EVENT_CS);
#endif   
   //SAL_C2K_SetValue(SAL_C2K_DL_RATE, IPC_SPCH_ERASURE);
   //l1sp.c2k_so_codec   = SAL_C2K_COD_MODE_UNDEF;
   l1sp.isSO_Connected = false;
//#if !defined(__WAIT_SP1__)     
   sub_SPC2K_DisconSSO_Done();
//#endif   

#if defined(__VOLTE_SUPPORT__)
   if( SP4G_Rab_State() && L1SP_GetState() != L1SP_STATE_4G_SPEECH_ON && L1SP_GetState() != L1SP_STATE_IDLE ){//3G->4G 
      PSR_SP4G_Callback(SP4G_CODEC_READY, (void*)0 );   
      SP4G_Reset();
      AM_InterRAT_C2K_to_4G(SP4G_GetCodecMode());
      L1SP_SetState( L1SP_STATE_4G_SPEECH_ON );
   }else
#endif  
   if( SP3G_Rab_State() && L1SP_GetState() != L1SP_STATE_3G_SPEECH_ON && L1SP_GetState() != L1SP_STATE_IDLE ){//4G->3G       
      CSR_Codec_Ready(SP3G_Rab_Id());
      AM_InterRAT_C2K_to_3G(SP3G_GetCodecMode());
      L1SP_SetState( L1SP_STATE_3G_SPEECH_ON );
   }else 
   if( L1SP_TCH_State() && L1SP_GetState() != L1SP_STATE_2G_SPEECH_ON && L1SP_GetState() != L1SP_STATE_IDLE ){//2G->3G fail case      
      AM_InterRAT_C2K_to_2G();
      L1SP_SetState( L1SP_STATE_2G_SPEECH_ON );
   }
   L1SP_FreeAudID(aud_id);
   kal_give_enh_mutex( sp_handover_mutex ); 
   kal_trace( TRACE_INFO, C2K_SPH_SO_DISCON, 1);
}

int L1SP_GetC2KSO_Codec( void )
{
   return l1sp.c2k_so_codec;
}

void sub_SPC2K_ConSSO_Done(void)
{
   if(!l1sp.isConSSO_Done){
   	  kal_trace( TRACE_INFO, C2K_SPH_SKIP_SO_CON_DONE, 0); 
      l1sp.isConSSO_Done = true;
      SPC2K_ConSSO_Done();
   }else{//skip
   	  kal_trace( TRACE_INFO, C2K_SPH_SKIP_SO_CON_DONE, 1);
  	  //log
   }
}

void SO_Connect(int codec)//ESpeech:1 is presumed before this is invoked.
{
   kal_trace( TRACE_INFO, C2K_SPH_SO_CONNECT, codec);
   
   ASSERT(!l1sp.isSO_Connected);
   kal_take_enh_mutex( sp_handover_mutex );    
   l1sp.c2k_so_codec = codec;

   if(AM_IsSpeechOn()){ //speech On(2G) -> SO connect or  during a call, SO change       
      kal_trace( TRACE_INFO, C2K_SPH_SO_CONNECT2, 1);
      if( L1SP_GetState() == L1SP_STATE_2G_SPEECH_ON ){                          
         kal_trace( TRACE_INFO, C2K_SPH_SO_CONNECT2, 2);
         AM_InterRAT_2G_to_C2K(codec);
         L1SP_SetState( L1SP_STATE_C2K_SPEECH_ON );
      }else if( L1SP_GetState() == L1SP_STATE_3G_SPEECH_ON ){                          
         kal_trace( TRACE_INFO, C2K_SPH_SO_CONNECT2, 3);
         CSR_Codec_Close(SP3G_Rab_Id());
         AM_InterRAT_3G_to_C2K(codec);
         L1SP_SetState( L1SP_STATE_C2K_SPEECH_ON );
      }
#if defined(__VOLTE_SUPPORT__)
      else if( L1SP_GetState() == L1SP_STATE_4G_SPEECH_ON ){                          
         kal_trace( TRACE_INFO, C2K_SPH_SO_CONNECT2, 4);
         PSR_SP4G_Callback(SP4G_CODEC_CLOSED, (void*)0 ); 
         AM_InterRAT_4G_to_C2K(codec);
         L1SP_SetState( L1SP_STATE_C2K_SPEECH_ON );
      }
#endif      
      else if( L1SP_GetState() == L1SP_STATE_C2K_SPEECH_ON ){
         kal_trace( TRACE_INFO, C2K_SPH_SO_CONNECT2, 5);
         AM_C2K_IntraRAT(codec);
         L1SP_SetState( L1SP_STATE_C2K_SPEECH_ON );
      }else{//others
         kal_trace( TRACE_INFO, C2K_SPH_SO_CONNECT2, 6);
         ASSERT(0);
      }     
      
      sub_SPC2K_ConSSO_Done();

      kal_trace( TRACE_INFO, C2K_SPH_SO_CONNECT2, 7);
 
   }else{
      kal_trace( TRACE_INFO, C2K_SPH_SO_CONNECT2, 8);
      //don't send ack until SpeechOn 
   }
   l1sp.isSO_Connected = true;
#ifndef __FAKE_C2K_LOOPBACK__   
   SP_L4C_SetEvent(L1SP_L4C_ESPEECH_1, L1SP_L4C_EVENT_CS); 
#endif   
   kal_give_enh_mutex( sp_handover_mutex ); 
      
   kal_trace( TRACE_INFO, C2K_SPH_SO_CONNECT2, 9);
}

bool L1SP_isC2KSO_Connected()
{
   return l1sp.isSO_Connected;
}

#endif


bool L1SP_IsBluetoothOn( void )
{
	return ((l1sp.devInfo == SPH_DEVINFO_BT_CVSD_MSBC) 
		|| (l1sp.devInfo == SPH_DEVINFO_BT_CVSD)
		|| (l1sp.devInfo == SPH_DEVINFO_BT_MSBC) 
		|| (l1sp.devInfo == SPH_DEVINFO_BT_PCM));
}

void SP_SetSpeechPara( uint16 sph_m_para[NUM_MODE_PARAS] )
{
   memcpy(l1sp.sph_m_para, sph_m_para, NUM_MODE_PARAS*sizeof(uint16));
}


kal_uint16 L1SP_GetAudID(void)/*Be careful.Before Locking SleepMode, to access DSP sherrif tasks much time. So access DSP must be after SetFlag*/
{
   kal_uint16 aud_id;
   aud_id = L1Audio_GetAudioID();
   L1Audio_SetFlag( aud_id );
   return aud_id;
}
void L1SP_FreeAudID(kal_uint16 aud_id)
{
   L1Audio_ClearFlag( aud_id );
   L1Audio_FreeAudioID( aud_id );
}


/*******************************************************************/
/*   The new interface for DSP speech enhancement function / Bluetooth */
/*******************************************************************/
/*
void sp_setBtOn(bool on)
{
	l1sp.bt_on = on;
}

bool sp_getIsBtOn(void)
{
	return l1sp.bt_on;
}
*/



void L1SP_Reload_SPE_Para( void )
{
   SPE_LoadSpeechPara(l1sp.sph_c_para, l1sp.sph_m_para, l1sp.sph_m_paraWb,l1sp.sph_m_paraSWb); 
}





void L1SP_LoadCommonSpeechPara( uint16 c_para[NUM_COMMON_PARAS] )
{
#if ( defined( __CENTRALIZED_SLEEP_MANAGER__ )&& defined( MTK_SLEEP_ENABLE ))
   kal_uint16 aud_id = L1SP_GetAudID();
#endif    

   memcpy(l1sp.sph_c_para, c_para, NUM_COMMON_PARAS*sizeof(uint16));
    
   // Some common parameters are used in non-speech function
   // Force to load common parameter
   SPE_LoadSpeechPara(l1sp.sph_c_para, NULL, NULL, NULL);
	
#if ( defined( __CENTRALIZED_SLEEP_MANAGER__ )&& defined( MTK_SLEEP_ENABLE ))
   L1SP_FreeAudID(aud_id);
#endif
}

uint16 *Sp_GetCommonSpeechPara(void)
{
	return l1sp.sph_c_para;
}



uint16 *Sp_GetSpeechPara(void)
{
	return l1sp.sph_m_para;
}


void SP_SetWbSpeechPara( kal_uint16 m_para[NUM_MODE_PARAS] )
{
   memcpy( l1sp.sph_m_paraWb, m_para, NUM_MODE_PARAS*sizeof(uint16));
}
void SP_SetSWbSpeechPara( kal_uint16 m_para[NUM_MODE_PARAS] )
{
   memcpy( l1sp.sph_m_paraSWb, m_para, NUM_MODE_PARAS*sizeof(uint16));
}

uint16 *Sp_GetWbSpeechPara(void)
{
	return l1sp.sph_m_paraWb;
}

#if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif


// TODO: this function should phase out

/**
	@index: [Input] Identify which LID is going to provide
	@buffer: [Output] Buffer with the contain the result
	@len: [Input] Length of the output buffer
*/
void L1SP_GetNvramInfoByIndex(L1SP_NVRAM_INFO_INDEX index, void *buffer, uint16 len)
{
	switch(index)
	{

	case L1SP_NVRAM_INFO_INDEX_WB_SPEECH_INPUT_FIR:
	{
		ASSERT(len == (NUM_SPH_INPUT_FIR * NUM_WB_FIR_COEFFS));
	}
		break;
	case L1SP_NVRAM_INFO_INDEX_WB_SPEECH_OUTPUT_FIR:
	{
		ASSERT(len == (NUM_SPH_OUTPUT_FIR * NUM_WB_FIR_COEFFS));
	}
		break;
	case L1SP_NVRAM_INFO_INDEX_WB_SPEECH_MODE_PARAM:
	{
		ASSERT(len == (NUM_SPH_MODE * NUM_MODE_PARAS));
	}
		break;

	default:
		ASSERT(0); 
	}
}
/**
	MED can put all nvram structure to AUD via this function. Audio/Speech driver will parsing the LID by itself. 
	
	@index: [Input] Identify which LID is used to parsing the buffer
	@buffer: [Input] Buffer with the contain from nvram
	@len: [Input] Length of the input buffer
*/
void L1SP_SetNvramInfoByIndex(L1SP_NVRAM_INFO_INDEX index, uint8* buffer, uint16 len)
{
	{
    bool L1Audio_IsInitialized();
		while( !L1Audio_IsInitialized()){
			kal_sleep_task(AUD_1TICK(1));
		}
  }
  return;
		
}



/**
	@device: device using in speech. pleae refer to 
		#define  L1SP_BUFFER_0        0x01    // NOTE: Don't use buffer definition directly
		#define  L1SP_BUFFER_1        0x02    //       Use speaker definition below
		#define  L1SP_BUFFER_ST       0x04
		#define  L1SP_BUFFER_EXT      0x08
		#define  L1SP_BUFFER_EXT_G    0x10
		#define  L1SP_STEREO2MONO     0x20     // Do not use this term for speaker definition
		#define  L1SP_BUFFER_ST_M     (L1SP_BUFFER_ST|L1SP_STEREO2MONO)
		#define  L1SP_EXT_DAC_BUF0    0x40 
		#define  L1SP_EXT_DAC_BUF1    0x80
	Phase-out function without using
*/
void L1SP_SetOutputDevice( uint8 device )
{
}


/**
	Function is used when MODEM side has PGA gain & DSP digital gain control 
	i.e. ANALOG_AFE_PATH_EXIST is defined
	
	@volume1: MMI(EM) value from 0 to 256	
	@digital_gain_index:unit is 0.5 db. Value from 0 to -64db (seems option)
*/
void L1SP_SetOutputVolume( uint8 volume1, int8 digital_gain_index )
{
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
#endif 


/**
	this function is to replace L1SP_SetSpeechVolumeLevel()
	
	@level: [input] speech volume level for speech
	@v_paraIndex: [input] volume paramter (saving in nvram) index
*/
void L1SP_SetSpeechVolumeLevelByIndex(kal_uint8 level, kal_uint8 v_paraIndex)
{
//  phase out. 
// 	L1SP_SetSpeechVolumeLevel(level, l1sp.sph_allVolumePara[v_paraIndex][level]);
}

/**
	Phase out function without using
	@src: microhpone source for speech, plese refer to
		#define  L1SP_LNA_0           0
		#define  L1SP_LNA_1           1
		#define  L1SP_LNA_DIGITAL     2
		#define  L1SP_LNA_FMRR        3
	
*/
void L1SP_SetInputSource( uint8 src )
{

}

/**
	Phase out function without using
	@return: microphone source for speech
*/
uint8 L1SP_GetInputSource( void )
{
	return 0; // AFE_GetInputSource();
}



/**
	@mic_volume: MMI(EM) value. Including Analog & digital gain
*/
void L1SP_SetMicrophoneVolume( uint8 mic_volume )
{


}

#if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif


uint8 L1SP_GetMicrophoneVolume( void )
{
   return 0;
}

/**
	Phase out function without using
	@sidetone: value from EM, which is 0~255. 
*/
void L1SP_SetSidetoneVolume( uint8 sidetone )
{
	// keep API header to avoid link error
}

/**
	Phase out function without using
	@return: value from EM, which is 0~255. 
*/
uint8 L1SP_GetSidetoneVolume( void )
{
	// keep API header to avoid link error, 
	return 0;
}
void SP_MuteUlEnhResult(bool mute)
{
#if ( defined( __CENTRALIZED_SLEEP_MANAGER__ )&& defined( MTK_SLEEP_ENABLE ))
			kal_uint16 aud_id = L1SP_GetAudID();
#endif  
	l1sp.isUlEnhResultMute = mute;
	AM_Mute_UL_EnhResult_Speech(mute);

#if ( defined( __CENTRALIZED_SLEEP_MANAGER__ )&& defined( MTK_SLEEP_ENABLE ))
   L1SP_FreeAudID(aud_id);
#endif 

}

void SP_MuteUlSource(bool mute)
{
#if ( defined( __CENTRALIZED_SLEEP_MANAGER__ )&& defined( MTK_SLEEP_ENABLE ))
			kal_uint16 aud_id = L1SP_GetAudID();
#endif  
	l1sp.isUlSourceMute = mute;
	AM_Mute_UL_Source_Speech(mute);

#if ( defined( __CENTRALIZED_SLEEP_MANAGER__ )&& defined( MTK_SLEEP_ENABLE ))
   L1SP_FreeAudID(aud_id);
#endif 

}

void L1SP_SetCodecMuteByAp( bool mute )
{
#if ( defined( __CENTRALIZED_SLEEP_MANAGER__ )&& defined( MTK_SLEEP_ENABLE ))
   kal_uint16 aud_id = L1SP_GetAudID();
#endif  
   l1sp.dl_codec_mute_by_ap = mute;

   AM_Mute_DL_Speech_Traffic(l1sp.codec_mute || l1sp.dl_codec_mute_by_ap);
#if ( defined( __CENTRALIZED_SLEEP_MANAGER__ )&& defined( MTK_SLEEP_ENABLE ))
   L1SP_FreeAudID(aud_id);
#endif 	
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
#endif

void SP_MuteUlFromDiffPos(bool mute, SP_MIC_MUTE_POS pos)
{
#if ( defined( __CENTRALIZED_SLEEP_MANAGER__ )&& defined( MTK_SLEEP_ENABLE ))
		kal_uint16 aud_id = L1SP_GetAudID();
#endif   

	if(mute) 
		l1sp.isULMute |= pos; 
	else 
		l1sp.isULMute &= (~pos);

	AM_Mute_UL_POS_EN_Speech(0 != l1sp.isULMute); // use raming if possible
	// SP_MuteController();
	
#if ( defined( __CENTRALIZED_SLEEP_MANAGER__ )&& defined( MTK_SLEEP_ENABLE ))
   L1SP_FreeAudID(aud_id);
#endif      	
}

/**
	For MED use ONLY!!! 
	other function please use void SP_MuteUlFromDiffPos(bool mute, SP_MIC_MUTE_POS pos)
*/
void L1SP_MuteMicrophone( bool mute )
{	
   
   //AFE_MuteMicrophone( mute ); // do not use AFE_MuteMicrophone for speech enhancement
   // AM_MuteULSpeech( mute );
   // l1sp.isULMute = mute;
   SP_MuteUlFromDiffPos(mute, SP_MIC_MUTE_POS_FROM_MED);
}

void L1SP_MuteSpeaker( bool mute )
{
#if 0 //def ANALOG_AFE_PATH_EXIST
/* under construction !*/
#else

#if ( defined( __CENTRALIZED_SLEEP_MANAGER__ )&& defined( MTK_SLEEP_ENABLE ))
   kal_uint16 aud_id = L1SP_GetAudID();
#endif
   l1sp.isDLMute = mute;
   AM_Mute_DL_8K_Speech(l1sp.isDLMute);
#if ( defined( __CENTRALIZED_SLEEP_MANAGER__ )&& defined( MTK_SLEEP_ENABLE ))
   L1SP_FreeAudID(aud_id);
#endif      
	
#endif
}

bool SP_IsSpeakerMute(void)
{
        return (l1sp.isDLMute!=0);
}

bool SP_IsMicMute(void)
{
	return (l1sp.isULMute!=0);
}

/**
	For MED use ONLY!!! 
	other function please use SP_IsMicMute() instead
*/
bool L1SP_IsMicrophoneMuted( void )
{
	return (l1sp.isULMute&SP_MIC_MUTE_POS_FROM_MED)!=0; 
   // return AM_IsULSpeechMuted();
}


#if defined( __UMTS_RAT__ )

void L1SP_3G_Request(void)
{  
   if(l1sp.state ==  L1SP_STATE_3G_SPEECH_ON)
   {
      CSR_Codec_Ready(SP3G_Rab_Id());
      return;
   }
}
#endif

void L1SP_SetState(uint8 state)
{
#if defined( __UMTS_RAT__ )
   if(( l1sp.state == L1SP_STATE_2G_SPEECH_ON && state == L1SP_STATE_3G_SPEECH_ON ) ||
      ( l1sp.state == L1SP_STATE_2G_SPEECH_ON && state == L1SP_STATE_4G_SPEECH_ON ) ||
      ( l1sp.state == L1SP_STATE_3G_SPEECH_ON && state == L1SP_STATE_2G_SPEECH_ON ) ||
      ( l1sp.state == L1SP_STATE_3G_SPEECH_ON && state == L1SP_STATE_4G_SPEECH_ON ) ||      
      ( l1sp.state == L1SP_STATE_4G_SPEECH_ON && state == L1SP_STATE_2G_SPEECH_ON ) ||
      ( l1sp.state == L1SP_STATE_4G_SPEECH_ON && state == L1SP_STATE_3G_SPEECH_ON ) )
      l1sp.interRAT = true;
#endif
   l1sp.state = state; 
   L1Audio_Msg_Speech_State(L1Audio_Speech_State(state));
}

uint8 L1SP_GetState( void )
{
   return l1sp.state; 
}


void L1SP_Set_isStandByMode(bool RAB_status)
{
   l1sp.isStandByMode = RAB_status; 
   //TRC_MSG(L1SP_SET_ISSTANDBYMODE                          ,"L1SP_Set_isStandByMode: %d")
   kal_trace(TRACE_INFO, L1SP_SET_ISSTANDBYMODE, (int)RAB_status);
}


bool L1SP_Get_isStandByMode( void )
{
   return l1sp.isStandByMode; 
}


kal_bool L1SP_IsSpeechOn( void )
{
    return (AM_IsSpeechOn());
}

bool voc_flag = false;

void L1SP_extcodec_hisr_ul(void *data)
{
#if defined(__SMART_PHONE_MODEM__)
   if(spc_isAcLoopback()) {
      Extcodec_hisr_ul_loopback(0);
   }
#endif   
#if defined(__G_CODEC_SUPPORT__)  
   else if( SP4G_Rab_State()){
      sp4g_hisr_ul_g(0);
   }
#endif

}

void sp_enableBT_SCO(sp_device_info_t newDev, kal_uint8 voice8kMode)
{
#if defined(__CVSD_CODEC_SUPPORT__) 
	if(!BT_SCO_IS_SPEECH_ON())
	{
		if (SPH_DEVINFO_BT_CVSD_MSBC == newDev) {
			ASSERT( (voice8kMode==0) || (voice8kMode==1) );
			BT_SCO_SPEECH_ON((voice8kMode == 1));
		} else if (SPH_DEVINFO_BT_CVSD == newDev) {
			BT_SCO_SPEECH_ON(false);
		}  else if (SPH_DEVINFO_BT_MSBC == newDev){
			BT_SCO_SPEECH_ON(true);
		}
	}
#endif

}

void L1SP_Speech_On( uint8 RAT_Mode )
{
   kal_uint32 module_id = MOD_L1AUDIO_SPH_SRV;
   kal_uint32 voc_ptn = TVCI_CREATE_FILE;
   kal_uint32 *voc_ptn_ptr = &voc_ptn;
   
   kal_trace(TRACE_INFO, L1SP_PHONE_CALL, 0, RAT_Mode, -1);
	 L1Audio_HookHisrHandler(DP_D2C_4G_PCM_DONE_UL,(L1Audio_EventHandler)L1SP_extcodec_hisr_ul, 0);//fix
   SPLog_GetFlagSetting(); //get logging flag setting from engineer mode
   if( AM_IsSpeechOn() )
   {
      sp_enableBT_SCO(l1sp.devInfo, l1sp.devSr);
      return;
   }

#if (!defined(__SMART_PHONE_MODEM__)) && (!defined(__DATA_CARD_SPEECH__)) && (!defined(TK6291))
   ApAudSys_config();
#endif // defined(__SMART_PHONE_MODEM__)

   // for phone call used. 
   l1sp.aud_id = L1Audio_GetAudioID();
   L1Audio_SetFlag( l1sp.aud_id );     /* To lock sleep mode */

   l1sp.sph_before_network_status = 0xFF;
   l1sp.pre_l4c_codec = L1SP_L4C_NONE;

   //SP_MuteController();
   //Check the mute status, this should always unmute. 
   ASSERT(SAL_Mute_Check(SAL_MUTE_DL_8K)==0);

   SP_DSPTone_ForceEnd();

   spGain_Refresh2DSP();

#if 0 // def ANALOG_AFE_PATH_EXIST
/* under construction !*/
#else

#endif

#if defined(__VOLTE_SUPPORT__)
	sp4g_speech_init( RAT_4G_MODE );
#endif

#if defined( __UMTS_RAT__ )
#ifdef __VIDEO_CALL_SUPPORT__
   if( RAT_Mode == RAT_3G324M_MODE )
      sp3g_speech_init( RAT_3G324M_MODE );
   else
#endif
      //In Dual mode, allow 2G/3G capability at initialization stage  for InterRAT HO
      //if 3G324M, there is no InterRAT
      sp3g_speech_init( RAT_3G_MODE );
#endif      
   L1Audio_Msg_SP(0);
   kal_take_enh_mutex( sp_handover_mutex );    
	// choose the mode is 2g /3g
#if defined(__VOLTE_SUPPORT__)
   if( SP4G_Rab_State()){
      RAT_Mode = RAT_4G_MODE;
   }else 
#endif
#if defined( __UMTS_RAT__ )
   if( SP3G_Rab_State() && RAT_Mode != RAT_3G324M_MODE ){
      RAT_Mode = RAT_3G_MODE;
   }else 
#endif   	
#if defined(__C2K_SPEECH_SUPPORT__)
   if (l1sp.isSO_Connected){
      RAT_Mode = RAT_C2K_MODE;
   }else
#endif   	
   if ( l1sp.tch_state ){
      RAT_Mode = RAT_2G_MODE;
   }   
#if defined( __UMTS_RAT__ )
   else if(RAT_Mode != RAT_3G324M_MODE ){
   	  RAT_Mode = RAT_2G_MODE;
   }
   l1sp.interRAT = false;
#endif   
#if defined(__VOLTE_SUPPORT__)
   kal_trace(TRACE_INFO, L1SP_PHONE_CALL, 1, SP4G_Rab_State(), SP3G_Rab_State());  
#endif      
#if defined(__C2K_SPEECH_SUPPORT__)   
   kal_trace(TRACE_INFO, L1SP_PHONE_CALL, 2, l1sp.isSO_Connected, l1sp.tch_state);
#else
   kal_trace(TRACE_INFO, L1SP_PHONE_CALL, 2, -1, l1sp.tch_state);
#endif   
   kal_trace(TRACE_INFO, L1SP_PHONE_CALL, 3, RAT_Mode, -1);
   kal_trace(TRACE_INFO, L1SP_PHONE_CALL, 3, -1, -1);
          
   L1Audio_Msg_SP(1);
   AM_SpeechOn(RAT_Mode, 0);
   L1Audio_Msg_SP(2);

   switch(RAT_Mode)
   {
      case RAT_2G_MODE:
           L1SP_SetState(L1SP_STATE_2G_SPEECH_ON);           	
         break;
#if defined( __UMTS_RAT__ )
      case RAT_3G_MODE: 
         L1SP_SetState(L1SP_STATE_3G_SPEECH_ON);
         CSR_Codec_Ready(SP3G_Rab_Id());       
         break;
#ifdef __VIDEO_CALL_SUPPORT__
      case RAT_3G324M_MODE: 
         L1SP_SetState(L1SP_STATE_3G324M_SPEECH_ON);
         vt_SP3G_Callback( (kal_uint8)SP3G_CODEC_READY, (void*)0 );
         break;
#endif
#endif
#if defined(__VOLTE_SUPPORT__)
      case RAT_4G_MODE: 
         L1SP_SetState(L1SP_STATE_4G_SPEECH_ON);
         PSR_SP4G_Callback(SP4G_CODEC_READY, (void*)SP4G_Rab_Id());              
         break;
#endif
#if defined(__C2K_SPEECH_SUPPORT__)
      case RAT_C2K_MODE:
         L1SP_SetState(L1SP_STATE_C2K_SPEECH_ON);
         sub_SPC2K_ConSSO_Done();
         break;
#endif         
      default: 
         ASSERT(false);
   }
   kal_trace(TRACE_INFO, L1SP_PHONE_CALL, 4, -1, -1);
   kal_give_enh_mutex( sp_handover_mutex );
   kal_trace(TRACE_INFO, L1SP_PHONE_CALL, 5, -1, -1);

#ifndef __L1_STANDALONE__ // avoid link error
    if(!tst_trace_check_ps_filter_off(TRACE_GROUP_VM, &module_id, 0x2))
    {
      tst_vc_response(TVCI_VM_LOGGING, (const kal_uint8*)voc_ptn_ptr, 4);
      VMREC_Start(NULL, true);
      voc_flag = true;
    }
#endif
   emCodecTimerOn();

   SetSpeechEnhancement( true );
	
// for phone call usage   
#if !DATA_CARD_DISABLE_INTERNAL
#if defined(__DATA_CARD_SPEECH__)
   if (l1sp.strmOnHandler != NULL)
      l1sp.strmOnHandler( NULL );
#endif
#endif

#if defined(__ECALL_SUPPORT__)
   if (l1sp.pcm4wayOnHandler != NULL)
      l1sp.pcm4wayOnHandler( (void *)0);
#endif

   sp_enableBT_SCO(l1sp.devInfo, l1sp.devSr);

   L1Audio_Msg_SP(4);

}


#if defined(__DATA_CARD_SPEECH__)
void L1SP_Register_Strm_Handler(
   void (*onHandler)(void *hdl),
   void (*offHandler)(void *hdl),
   void (*hdl)(kal_uint32 event, void *param))
{
   l1sp.strmOnHandler  = onHandler;
   l1sp.strmOffHandler = offHandler;
   l1sp.strmHdl        = hdl;
   //For MOLY00004781, sometimes auto script hit that register handler later than speech on. In this case, we let daca run.
   if( AM_IsSpeechOn() ){
      l1sp.strmOnHandler(NULL);
   }
}

void L1SP_UnRegister_Strm_Handler( void )
{
   if(AM_IsDataCardOn() && (l1sp.strmOffHandler != NULL)){
      /* Normal     Case: PLUGIN(RegisterHandler)-->SpeechOn(OnHandler)-->SpeechOff(OffHandler) -->PLUGOUT(UnRegisterHandler)
         Unexpected Case: PLUGIN(RegisterHandler)-->SpeechOn(OnHandler)-->PLUGOUT(UnRegisterHandler), registerHandler again -->SpeechOff(OffHandler)     */      
      DACA_Stop(DACA_APP_TYPE_ACTIVE_UL_DL_WB);   
   }
   l1sp.strmOnHandler  = NULL;
   l1sp.strmOffHandler = NULL;
}
#endif

#if defined(__ECALL_SUPPORT__)
void L1SP_Register_Pcm4WayService(void (*onHandler)(void *), void (*offHandler)(void *))
{
   l1sp.pcm4wayOnHandler = onHandler; 
   l1sp.pcm4wayOffHandler = offHandler;
}

void L1SP_UnRegister_Pcm4Way_Service( void )
{
   l1sp.pcm4wayOnHandler = NULL; 
   l1sp.pcm4wayOffHandler = NULL;
}
#endif

void L1SP_Speech_Off( void )
{
   kal_uint32 voc_ptn = TVCI_CLOSE_FILE;
   kal_uint32 *voc_ptn_ptr = &voc_ptn;

#if defined(__CVSD_CODEC_SUPPORT__) 
   if(BT_SCO_IS_SPEECH_ON())
   {
      BT_SCO_SPEECH_OFF();
   }
#endif
  
   if( !AM_IsSpeechOn() )
      return;

	// due to AP will close DL directly before speech off, so md can mute dl directly without ramping
	// This will prevent sound pushes to hardware buffer then cause noise
	kal_trace(TRACE_INFO, L1SP_MUTE_DSP_DL_8K_CONTROL, KAL_TRUE);
	SAL_Mute_Ctrl(SAL_MUTE_DL_8K, KAL_TRUE);

		
#if !DATA_CARD_DISABLE_INTERNAL      
//FIXME: for phone call usage
#if defined(__DATA_CARD_SPEECH__)
   if (l1sp.strmOffHandler != NULL)
      l1sp.strmOffHandler( NULL );
#endif
#endif

#if defined(__ECALL_SUPPORT__)
   if (l1sp.pcm4wayOffHandler != NULL)
      l1sp.pcm4wayOffHandler( (void *)0 );
#endif

   SetSpeechEnhancement( false );

   emCodecTimerOff();
#ifndef __L1_STANDALONE__ // avoid link error
   // kal_uint32 module_id = MOD_L1AUDIO_SPH_SRV;	   
   // if(!tst_trace_check_ps_filter_off(TRACE_GROUP_VM, &module_id, 0x2) && voc_flag)
   if(voc_flag)
   {
      tst_vc_response(TVCI_VM_LOGGING, (const kal_uint8*)voc_ptn_ptr, 4);
	  VMREC_Stop(true);
	  voc_flag = false;	  
   }
#endif
   kal_trace(TRACE_INFO, L1SP_PHONE_CALL, 20, -1, -1);
   kal_take_enh_mutex( sp_handover_mutex ); 
   kal_trace(TRACE_INFO, L1SP_PHONE_CALL, 21, -1, -1);
   cc_set_VBI_for_FSM(1);
   AM_SpeechOff(0);
   cc_set_VBI_for_FSM(2); 
#if defined(__VOLTE_SUPPORT__)
   {
      uint8 state;
      state = l1sp.state;
      
      if(l1sp.state == L1SP_STATE_4G_SPEECH_ON || l1sp.interRAT ){
         L1SP_SetState(L1SP_STATE_4G_SPEECH_CLOSING);
      }
      sp4g_speech_close();
         
      /* only these cases should wait state, if only 2G happen, then return to idle */
      if( state == L1SP_STATE_4G_SPEECH_ON || l1sp.interRAT
      ){
            PSR_SP4G_Callback(SP4G_CODEC_CLOSED, (void*)SP4G_Rab_Id());
      }
   }
#endif

#if defined( __UMTS_RAT__ )
   {     
      if(l1sp.state == L1SP_STATE_3G_SPEECH_ON || l1sp.interRAT
#ifdef __VIDEO_CALL_SUPPORT__
          || l1sp.state == L1SP_STATE_3G324M_SPEECH_ON
#endif
      ){
         L1SP_SetState(L1SP_STATE_3G_SPEECH_CLOSING);
      }
      sp3g_speech_close(l1sp.interRAT);
   }
#endif

#if defined(__C2K_SPEECH_SUPPORT__)
   {
      uint8 state;
      state = l1sp.state;
      
      if(l1sp.state == L1SP_STATE_C2K_SPEECH_ON || l1sp.isSO_Connected){
         L1SP_SetState(L1SP_STATE_C2K_SPEECH_CLOSING);
      }
      
      if( state == L1SP_STATE_C2K_SPEECH_ON || l1sp.isSO_Connected){
         //uint32 waitTime;
          ;//TODO : Daniel : CSR_Codec_Close(SP3G_Rab_Id());
      }
   }
#endif

   L1SP_SetState( L1SP_STATE_IDLE );
   L1SP_Set_isStandByMode( false );
   kal_trace(TRACE_INFO, L1SP_PHONE_CALL, 22, -1, -1);
   kal_give_enh_mutex( sp_handover_mutex );
   kal_trace(TRACE_INFO, L1SP_PHONE_CALL, 23, -1, -1);
   
#if defined(__VIBRATION_SPEAKER_SUPPORT__)
   VIBR_Vibration_Activate();
#endif

   //always unmute DSP uplink after speech off to keep the mute definition
   SP_MuteUlEnhResult(false);
   SP_MuteUlFromDiffPos(false, SP_MIC_MUTE_POS_FROM_ALL); 
   SAL_Mute_Ctrl(SAL_MUTE_DL_8K, KAL_FALSE); // to replace L1SP_MuteSpeaker(false);   
   L1Audio_UnhookHisrHandler(DP_D2C_4G_PCM_DONE_UL);
   L1Audio_ClearFlag( l1sp.aud_id );
   L1Audio_FreeAudioID( l1sp.aud_id );

   // clean emCodec 
   SP_updateEmCodecEvent();
   kal_trace(TRACE_INFO, L1SP_PHONE_CALL, 24, -1, -1);
}

#if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif

void L1SP_SetAfeLoopback( bool enable )
{
#if ( defined( __CENTRALIZED_SLEEP_MANAGER__ )&& defined( MTK_SLEEP_ENABLE ))
   kal_uint16 aud_id = L1SP_GetAudID();
#endif         
   if( enable )
      AFE_TurnOnLoopback();
   else
      AFE_TurnOffLoopback();
#if ( defined( __CENTRALIZED_SLEEP_MANAGER__ )&& defined( MTK_SLEEP_ENABLE ))
   L1SP_FreeAudID(aud_id);
#endif      
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
#endif



void L1SP_LoadSpeechPara( void ) 
{
#if ( defined( __CENTRALIZED_SLEEP_MANAGER__ )&& defined( MTK_SLEEP_ENABLE ))
   kal_uint16 aud_id = L1SP_GetAudID();
#endif   
   SPE_LoadSpeechPara(l1sp.sph_c_para, l1sp.sph_m_para, l1sp.sph_m_paraWb,l1sp.sph_m_paraSWb);  
#if ( defined( __CENTRALIZED_SLEEP_MANAGER__ )&& defined( MTK_SLEEP_ENABLE ))
   L1SP_FreeAudID(aud_id);
#endif      
}

// ----------------------------------------------------------------------------
// codec information update
// ----------------------------------------------------------------------------

#include "em_audio_public_struct.h"
#include "em_msgid.h"
#include "md_sap.h"

void emCodecTimerCallback(void)
{
	SP_updateEmCodecEvent();
	if (false == voc_flag && (true == AM_IsSpeechOn()) && (false==l1sp.isEmCodecNotifyOff)) {
		kal_set_timer(sp_emCodec_timer, (kal_timer_func_ptr)(emCodecTimerCallback), NULL, AUD_1TICK(4), AUD_1TICK(0));
	}
}

void emCodecTimerOn(void)
{
	if (false == voc_flag && (true == AM_IsSpeechOn()) && (false==l1sp.isEmCodecNotifyOff)) {
		kal_set_timer(sp_emCodec_timer, (kal_timer_func_ptr)(emCodecTimerCallback), NULL, AUD_1TICK(4), AUD_1TICK(0));
	}
}

void emCodecTimerOff(void)
{
	kal_cancel_timer(sp_emCodec_timer);
}

/**
	call from MED, to turn/off EM codec filter
	@isOff:
*/
void SP_setEmCodecNotifyOff(bool isOff){

	bool orgValue = l1sp.isEmCodecNotifyOff;
	l1sp.isEmCodecNotifyOff = isOff;
	
	if(true==isOff && false==orgValue){ // turn off
		emCodecTimerOff();
	} else if(false==isOff && true==orgValue){ // turn on
		emCodecTimerOn();
	}
	
	
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
#endif

void SP_updateEmCodecEvent(void)
{
	if(true  == l1sp.isEmCodecNotifyOff) {
		kal_brief_trace(TRACE_INFO, SP_EM_UPDATE_CODEC, l1sp.isEmCodecNotifyOff, 
			SAL_Get_Codec_Mode(0), SAL_Get_Codec_Mode(1), 
			voc_flag, L1SP_GetState());
		return;
	} else { // set event 
		if(kal_if_lisr())
		   L1Audio_LSetEvent(l1sp.aud_id_em_codec_update, NULL);
		else
		   L1Audio_SetEvent(l1sp.aud_id_em_codec_update, NULL);
	}	
}

void sp_updateEmCodecEventHandler(void)
{
	ilm_struct ilm;
    em_speech_info_sph_codec_ind_struct *em_para_ptr;

	if((true == AM_IsSpeechOn()) && (true==l1sp.codec_mute)){ //During ESPEECH OFF, skip
		return;
	}

    ilm.src_mod_id = MOD_L1SP;
	ilm.dest_mod_id = MOD_DHL;
    ilm.sap_id = EM_PS_SAP;
    ilm.msg_id = MSG_ID_EM_SPEECH_INFO_SPH_CODEC_IND;
    em_para_ptr = (em_speech_info_sph_codec_ind_struct *)(construct_local_para(sizeof(em_speech_info_sph_codec_ind_struct ), TD_RESET));
	
	em_para_ptr->em_info = EM_SPEECH_INFO_SPH_CODEC;

	if(true == AM_IsSpeechOn()) {
		em_para_ptr->ulSphCodec = SAL_Get_Codec_Mode(0);
		em_para_ptr->dlSphCodec = SAL_Get_Codec_Mode(1);
	} else {
		em_para_ptr->ulSphCodec = SPH_CODEC_CODEC_NONE;
		em_para_ptr->dlSphCodec = SPH_CODEC_CODEC_NONE;
	}
	em_para_ptr->sphNetwork = L1SP_GetState(); 
	
    ilm.local_para_ptr = (local_para_struct*)em_para_ptr;
    ilm.peer_buff_ptr = NULL;    
    dhl_EM_logger(&ilm);
	
    destroy_ilm(&ilm); //or free_local_para((local_para_struct*)em_para_ptr );
}


void l1sp_NetworkStatusNotification(void)
{
    if(kal_if_lisr())
	   L1Audio_LSetEvent(l1sp.aud_id_network_status, NULL );
	else
	   L1Audio_SetEvent(l1sp.aud_id_network_status, NULL);
}

//AUDIO task
L1SP_L4C_Codec l1sp_mappingCodec(uint32 codec)
{
	L1SP_L4C_Codec l4c_codec = L1SP_L4C_NONE;
	 
	 switch(codec){
	    case 0:
	      l4c_codec = L1SP_L4C_GSM_FR;
	      break;
	    case 1:
	      l4c_codec = L1SP_L4C_GSM_HR;
	      break;
	    case 2:
	      l4c_codec = L1SP_L4C_GSM_EFR;
	      break;

		// c2k 
		case SPH_CODEC_C2K_SO3:
		 	l4c_codec = L1SP_L4C_EVRC;
	    	break;
		case  SPH_CODEC_C2K_SO17:
		 	l4c_codec = L1SP_L4C_QCELP13K;
	    	break;
		case  SPH_CODEC_C2K_SO68:
		 	l4c_codec = L1SP_L4C_EVRC_B;
	    	break;
		case  SPH_CODEC_C2K_SO73:
		 	l4c_codec = L1SP_L4C_EVRC_NW;
	    	break;
		case SPH_CODEC_C2K_SO73WB:
		 	l4c_codec = L1SP_L4C_EVRC_WB;
	    	break;

		default:
			
		  if(codec >= 0x3 && codec <= 0xA ){
	         l4c_codec = L1SP_L4C_AMR_NB;
	      }else if(codec >= 0x20 && codec <= 0x28 ){ 
	         l4c_codec = L1SP_L4C_AMR_WB;
	      }else if(codec >= SPH_CODEC_EVS_08K_005_9 && codec <= SPH_CODEC_EVS_08K_000_0_NODATA  ){
	
	         l4c_codec = L1SP_L4C_EVS_NB;
	      }else if(codec >= SPH_CODEC_EVS_16K_005_9 && codec <= SPH_CODEC_EVS_16K_000_0_NODATA  ){
	
			 l4c_codec = L1SP_L4C_EVS_WB;
		  }else if(codec >= SPH_CODEC_EVS_32K_005_9 && codec <= SPH_CODEC_EVS_32K_000_0_NODATA  ){
	
	         l4c_codec = L1SP_L4C_EVS_SW;
		  }else if(codec >= SPH_CODEC_EVS_48K_005_9 && codec <= SPH_CODEC_EVS_48K_000_0_NODATA  ){
	
		     l4c_codec = L1SP_L4C_EVS_FB;
	      }else if(codec >= SPH_CODEC_EVS_AWB_06_60 && codec <= SPH_CODEC_EVS_AWB_00_00_NODATA  ){
	
	         l4c_codec = L1SP_L4C_EVS_AWB;
		  }
	      break;
	 }
	 return l4c_codec;
}

void l1sp_send_codec_status_notify(uint32 codec)//to L4C
{
#if !defined(__L1_STANDALONE__)    
	 // uint32 codec = (uint32) data;
	 L1SP_L4C_Codec l4c_codec = l1sp_mappingCodec(codec);
	  
	 kal_trace(TRACE_INFO, L1SP_L4C_SEND_CODEC, codec, l4c_codec);

	 l4c_report_voice_codec(l4c_codec);
#endif
}

void l1sp_notify_network_status( void )
{   

   	uint32 amCodec = AM_GetSpeechMode();

    kal_trace(TRACE_INFO, L1SP_NOTIFY_NETWORK_STATUS, amCodec);
     msg_send6(MOD_L1SP, MOD_MED, AUDIO_SAP, MSG_ID_AUDIO_M2M_SP_UPDATE_SPEECH_ENHANCEMENT_PARAMETER, NULL, NULL);
	 if(l1sp.codec_mute){//During ESPEECH OFF, skip all codec notification
	    kal_trace(TRACE_INFO, L1SP_L4C_SEND_CODEC_SKIP, amCodec);
	    return;    
	 }  
	
	if(!L1SP_IsSpeechOn()){//During SPEECH OFF, skip all codec notification
	   kal_trace(TRACE_INFO, L1SP_L4C_SEND_CODEC_SKIP2);
	   return;    
	}
	// send via L4C. too keep original process
	l1sp_send_codec_status_notify(amCodec);	
	
#if defined(__SMART_PHONE_MODEM__)     
	extern void spc_send_network_status_notify(em_speech_info_SpeechCodecType codec);
	spc_send_network_status_notify((em_speech_info_SpeechCodecType)amCodec);
#endif 

  // msg_send6(MOD_L1SP, MOD_MED, AUDIO_SAP, MSG_ID_AUDIO_M2M_SP_UPDATE_SPEECH_ENHANCEMENT_PARAMETER, NULL, NULL); 
   kal_trace(TRACE_INFO, L1SP_NOTIFY_NETWORK_STATUS, -1);
}

extern const unsigned short Speech_Normal_Mode_Para[16];
extern const unsigned short WB_Speech_Normal_Mode_Para[16];

void L1SP_Init( void )
{
   l1sp.tch_state = KAL_FALSE;   
	uint16 commonP[] = DEFAULT_SPEECH_COMMON_PARA;


#if (!defined(__SMART_PHONE_MODEM__)) && (!defined(__DATA_CARD_SPEECH__)) && (!defined(TK6291))
	ApAudSys_config();
#endif



   memset(&l1sp.sph_c_para, 0, NUM_COMMON_PARAS*sizeof(uint16));
   memset(&l1sp.sph_m_para, 0, NUM_MODE_PARAS*sizeof(uint16));
   // memset(&l1sp.sph_v_para, 0, NUM_VOL_PARAS*sizeof(uint16));
	memset(&l1sp.sph_m_paraWb, 0, NUM_MODE_PARAS*sizeof(uint16));
	memset(&l1sp.sph_m_paraSWb, 0, NUM_MODE_PARAS*sizeof(uint16));

	memcpy(l1sp.sph_c_para, commonP, NUM_COMMON_PARAS*sizeof(uint16));
	memcpy(l1sp.sph_m_para, Speech_Normal_Mode_Para, 16*sizeof(uint16));
	memcpy( l1sp.sph_m_paraWb, WB_Speech_Normal_Mode_Para, 16*sizeof(uint16));
	memcpy( l1sp.sph_m_paraSWb, WB_Speech_Normal_Mode_Para, 16*sizeof(uint16));
	L1SP_LoadCommonSpeechPara(commonP);

	l1sp.devInfo = 0;
   	l1sp.devSr = 2; // similar to afe.voice8kMode = 2 but keeping in driver. for 
   	SP_SetDevicePath(l1sp.devInfo, l1sp.devSr);

#if 0 // def ANALOG_AFE_PATH_EXIST
/* under construction !*/
#else
	l1sp.mic_volume = 0;
#endif


#if defined( __UMTS_RAT__ )
   sp3g_init();
   l1sp.interRAT = false;
#endif
#if defined(__VOLTE_SUPPORT__)
   sp4g_init();
#endif
#if defined(__C2K_SPEECH_SUPPORT__)
   SPC2K_init();
#endif
   SPE_Init();
   // l1sp.spe_flag = true;
   l1sp.isDLMute = l1sp.isULMute = false;
   l1sp.codec_mute = true;
   l1sp.codec_mute_mode = L1SP_L4C_EVENT_NONE;
   l1sp.dl_codec_mute_by_ap = false;
   l1sp.sph_before_network_status = 0xFF; // no defined network
   l1sp.pre_l4c_codec = L1SP_L4C_NONE;

      
#if defined(__DATA_CARD_SPEECH__)
   l1sp.strmOnHandler  = NULL;
   l1sp.strmOffHandler = NULL;
   l1sp.strmHdl = NULL;
#endif      
#if defined(__ECALL_SUPPORT__)
   l1sp.pcm4wayOnHandler = NULL; 
   l1sp.pcm4wayOffHandler = NULL;
#endif
   L1SP_Set_isStandByMode( false );
   L1SP_SetState(L1SP_STATE_IDLE);
   l1sp.aud_id_network_status = L1Audio_GetAudioID();

   L1Audio_SetEventHandler(l1sp.aud_id_network_status, (L1Audio_EventHandler)l1sp_notify_network_status);

   l1sp.isEmCodecNotifyOff = true;
   l1sp.aud_id_em_codec_update = L1Audio_GetAudioID();
   L1Audio_SetEventHandler(l1sp.aud_id_em_codec_update, (L1Audio_EventHandler)sp_updateEmCodecEventHandler);
   sp_emCodec_timer = kal_create_timer("emCodec");

#if defined(__C2K_SPEECH_SUPPORT__)
   l1sp.c2k_so_codec = SAL_C2K_COD_MODE_UNDEF;
   l1sp.isConSSO_Done = l1sp.isSO_Connected = false;	
#endif   

}
kal_bool L1SP_TCH_State( void )
{
   return l1sp.tch_state;
}

void ChangeRAT_Mode(SP_CHANGERAT_EVENT event, kal_uint32 param1, kal_uint32 param2)
{
	 kal_trace( TRACE_FUNC,SP_CHANGERAT_MODE, event, param1, param2);
   switch(event){  
   case SP_2G_HANDOVER:
   	  //param1 : codec
   	  //param2 : sub_channel      
      {
      	void cc_2G_Call_Handover(kal_uint32 speech_mode, kal_uint32 sub_channel);
        cc_2G_Call_Handover(param1, param2);	
        AM_SetSpeechMode(param1, param2);	  
      }
      l1sp_NetworkStatusNotification();
	  // l1sp_CodecStatusNotification((uint16)param1); 
   	  break;  
   case SP_2G_AUDIOMANAGER_INFO:
   	  AM_Set2GCodecInfo((uint16)param1, (int8)param2);
   	  break;	     
   case SP_2G_TCH:
      //param1 : on / off
      {
	      void L1SP_TCH_Notify( bool bOn );
	      L1SP_TCH_Notify( param1);
      }
      break;    	   
   case SP_3G_RAB:
      //param1 : on / off
      //param2 : codec
      break;    
   case SP_4G_RAB:
      //param1 : on / off
      //param2 : codec
      break;           
   }
   

   if( AM_IsSpeechOn() ){
      //original      
      //switch( L1SP_GetState() == L1SP_STATE_4G_SPEECH_ON )
      //new   
   }else{
      
   }   
}

// This is invoked by 2G L1D(LISR)
void L1SP_TCH_Notify( bool bOn )
{
   kal_take_enh_mutex( sp_handover_mutex );    
   if( !bOn ){ // for 2G->3G handover, mute speech in case Speech_Off command too late to avoid noise
      L1Audio_Msg_TCH_NOTIFY(L1AUDIO_Str_onoff(0), L1Audio_Speech_State(l1sp.state));
      l1sp.tch_state = KAL_FALSE;
      SAL_Set_LinkStatus(SAL_LINKSTATUS_2G  , false);
      //mute speech
#if defined(__VOLTE_SUPPORT__)
      if( SP4G_Rab_State() && l1sp.state != L1SP_STATE_4G_SPEECH_ON && l1sp.state != L1SP_STATE_IDLE){//2G->4G fail case, TCH will be off
         SP4G_Reset();
         AM_InterRAT_2G_to_4G(SP4G_GetCodecMode());         
         L1SP_SetState( L1SP_STATE_4G_SPEECH_ON );
      }else     
#endif                     
#if defined( __UMTS_RAT__ )      
      if( SP3G_Rab_State() && l1sp.state != L1SP_STATE_3G_SPEECH_ON && l1sp.state != L1SP_STATE_IDLE){//3G->2G fail case, TCH will be off
         SP3G_Reset();
         AM_InterRAT_2G_to_3G(SP3G_GetCodecMode());        
         L1SP_SetState( L1SP_STATE_3G_SPEECH_ON );
      }
#endif
#if defined(__C2K_SPEECH_SUPPORT__)
      if( L1SP_isC2KSO_Connected() && (l1sp.state != L1SP_STATE_C2K_SPEECH_ON) && (l1sp.state != L1SP_STATE_IDLE) ){
         //reset
         AM_InterRAT_2G_to_C2K(L1SP_GetC2KSO_Codec());        
         L1SP_SetState( L1SP_STATE_C2K_SPEECH_ON );	
      }
#endif      
   }
   else{
      L1Audio_Msg_TCH_NOTIFY(L1AUDIO_Str_onoff(1), L1Audio_Speech_State(l1sp.state));
      l1sp.tch_state = KAL_TRUE;
      SAL_Set_LinkStatus(SAL_LINKSTATUS_2G  , true);
      //*DP_SC_MUTE &= ~0x0002;
#if defined(__VOLTE_SUPPORT__)
      if( l1sp.state == L1SP_STATE_4G_SPEECH_ON ){//4G->2G HO
         AM_InterRAT_4G_to_2G();
         L1SP_SetState( L1SP_STATE_2G_SPEECH_ON );
      }else 
#endif               
#if defined( __UMTS_RAT__ )      
      if( l1sp.state == L1SP_STATE_3G_SPEECH_ON ){//3G->2G HO
         AM_InterRAT_3G_to_2G();         
         L1SP_SetState( L1SP_STATE_2G_SPEECH_ON );
      }
#endif
#if defined(__C2K_SPEECH_SUPPORT__)
      if( l1sp.state == L1SP_STATE_C2K_SPEECH_ON ){//3G->2G HO
         AM_InterRAT_C2K_to_2G();         
         L1SP_SetState( L1SP_STATE_2G_SPEECH_ON );
      }
#endif      
      if( L1SP_Get_isStandByMode()  ){//Standby->2G HO
         AM_InterRAT_Standby_to_2G();         
         L1SP_SetState( L1SP_STATE_2G_SPEECH_ON );
      }
   }
   kal_give_enh_mutex( sp_handover_mutex );
}

void L1SP_SpeechLoopBackEnable(kal_bool fgEnable)
{
	 SAL_LBK_Codec(fgEnable);
}

//-----------------------------------------------------------------------------
// Line in related. Phase out
/* 

void LINEIN_SetOutputDevice( uint8 device )
{
   AFE_SetOutputDevice( L1SP_LINEIN, device );
}

void LINEIN_SetOutputVolume( uint8 volume1, int8 digital_gain_index )
{
   AFE_SetOutputVolume( L1SP_LINEIN, volume1, digital_gain_index );
}

void LINEIN_Open()
{

   if (!lineon_flag){
      ktLock();
#if 0 // def ANALOG_AFE_PATH_EXIST	      
      AFE_TurnOnSpeaker(L1SP_LINEIN);
#endif      
      lineon_flag = KAL_TRUE;
   }
}

void LINEIN_Close()
{
   if(lineon_flag){
#if defined(MT6252H) || defined(MT6252)
      AFE_SetGainFastRamp(KAL_TRUE);    
#endif

#if 0 // def ANALOG_AFE_PATH_EXIST	
      AFE_TurnOffSpeaker(L1SP_LINEIN);
#endif      

#if defined(MT6252H) || defined(MT6252)
      kal_sleep_task( AUD_1TICK(3) );
      AFE_SetGainFastRamp(KAL_FALSE);    
#endif

      ktUnlock();
      lineon_flag = KAL_FALSE;
   }
#if defined(__VIBRATION_SPEAKER_SUPPORT__)
   VIBR_Vibration_Activate();
#endif
}

void LINEIN_MuteSpeaker( bool mute )
{
   AFE_MuteSpeaker( L1SP_LINEIN, mute );
}

#if 0 // defined(__GAIN_TABLE_SUPPORT__)
void LINEIN_SetOutputGainControl( kal_uint32 gain ){
}

void LINEIN_SetOutputGainControlDualPath( kal_uint32 ext_amp_gain ){
}
#endif
*/
//-----------------------------------------------------------------------------
void L1SP_MutePCMOuputPort ( kal_bool fMute )
{

}

//-----------------------------------------------------------------------------


bool SP_is_codec_mute()
{
	 return l1sp.codec_mute;
}

void SP_L4C_SetEvent(L1SP_L4C_Event event, L1SP_L4C_Event_Mode mode)
{
	 #if defined(__SMART_PHONE_MODEM__)	
   kal_prompt_trace(MOD_L1SP, "SP_L4C_SetEvent = %d %d %d", event, L1SP_GetState(), spc_isPCM());
   if(L1SP_STATE_C2K_SPEECH_ON == L1SP_GetState() && event){
       if(spc_isPCM()){
           L1Ctm_Close();
       }
       spc_C2KCtmStart(spc_getCtmMode());
   }
   #endif
   ilm_SP_L4C_SET_EVENT_t *local_para;
   kal_trace( TRACE_FUNC,SP_L4C_SETEVENT_ENTER);
   local_para = (ilm_SP_L4C_SET_EVENT_t *) construct_local_para( sizeof(ilm_SP_L4C_SET_EVENT_t), TD_CTRL );
   local_para->event = event;
   local_para->mode  = mode;
   msg_send6(MOD_L1SP, MOD_MED, AUDIO_SAP, MSG_ID_AUDIO_M2M_SP_L4C_SET_EVENT, (local_para_struct *)local_para, NULL);
   kal_trace( TRACE_FUNC,SP_L4C_SETEVENT_LEAVE);
}


void SP_L4C_SetEvent_Execute(L1SP_L4C_Event event, L1SP_L4C_Event_Mode mode)
{	
   kal_trace(TRACE_INFO, L1SP_L4C_EVENT, event, mode, l1sp.codec_mute_mode);
   kal_trace(TRACE_INFO, L1SP_MUTE_CONTROL_STATUS, 0, l1sp.isULMute, l1sp.isDLMute, l1sp.codec_mute);
   
   ASSERT( L1SP_L4C_EVENT_NONE == l1sp.codec_mute_mode || mode == l1sp.codec_mute_mode );
   
   switch(event){
   case L1SP_L4C_ESPEECH_0:
      ASSERT(!l1sp.codec_mute);
      l1sp.codec_mute = true;
      l1sp.codec_mute_mode = L1SP_L4C_EVENT_NONE;
      break;   
   case L1SP_L4C_ESPEECH_1:
      ASSERT(l1sp.codec_mute);
      l1sp.codec_mute = false;
      l1sp.codec_mute_mode = mode;
      break;      
   default:
      ASSERT(0);   
   }
   if(AM_IsSpeechOn()){
      l1sp_NetworkStatusNotification();
   }else{
   	  kal_trace(TRACE_INFO, SP_L4C_SKIP_NETWORKNOTIFICATION);
   }
   {   
#if ( defined( __CENTRALIZED_SLEEP_MANAGER__ )&& defined( MTK_SLEEP_ENABLE ))
   kal_uint16 aud_id = L1SP_GetAudID();
#endif      
   AM_Mute_DL_Speech_Traffic(l1sp.codec_mute || l1sp.dl_codec_mute_by_ap);  
   AM_Mute_UL_Codec_Speech(l1sp.codec_mute);
#if ( defined( __CENTRALIZED_SLEEP_MANAGER__ )&& defined( MTK_SLEEP_ENABLE ))
   L1SP_FreeAudID(aud_id);
#endif  
   kal_trace(TRACE_INFO, L1SP_MUTE_CONTROL_STATUS, 1, l1sp.isULMute, l1sp.isDLMute, l1sp.codec_mute);
   }
}

#if defined(__VOLTE_SUPPORT__)
static const L1SP_Tones tone_call_waiting[]           =  {  { 440,   0, 200, 100,   1 },
                                                            { 440,   0, 200,3500,   0 }   };        

extern void spc_BgSndConfig(kal_uint8 ulGainLevel, kal_uint8 dlGainLevel);
int spc_ul_gain = 7;
int spc_dl_gain = 7;
#endif
void SpeechDVT(int item){
#if defined(__VOLTE_SUPPORT__)
   switch(item){
   case 0:  
      spc_ul_gain --;    
      if(spc_ul_gain<0)spc_ul_gain = 0;
      spc_BgSndConfig(spc_ul_gain, spc_dl_gain);
      break;
   case 1:      
      spc_ul_gain ++;
      if(spc_ul_gain>7)spc_ul_gain = 7;
      spc_BgSndConfig(spc_ul_gain, spc_dl_gain);         
      break;      
   case 2:      
      spc_dl_gain --;    
      if(spc_dl_gain<0)spc_dl_gain = 0;
      spc_BgSndConfig(spc_ul_gain, spc_dl_gain);         
      break;
   case 3:      
      spc_dl_gain ++;   
      if(spc_dl_gain>7)spc_dl_gain = 7;       
      spc_BgSndConfig(spc_ul_gain, spc_dl_gain);         
      break;    
              
   case 6:
      L1SP_Speech_On(RAT_2G_MODE);
      break;
   case 7:
      L1SP_Speech_Off();
      break;
  
    case 57:
      SP4G_PSR_DL_KT_Play(300, 1300, 20000);   
      break;
    case 58:
      SP4G_PSR_DL_KT_Stop();
      break;                
    case 67:
      SP4G_PSR_UL_KT_Play(1000, 0, 20000);   
      break;
    case 68:
      SP4G_PSR_UL_KT_Stop();
      break;   
    case 69:
      //KT_SetOutputVolume(100,4096*2); //avoid build warning
      break;                   
    case 71:
      {
         SP4G_PSR_UL_Tone_Play( tone_call_waiting );  
      }
      break;
    case 72:
      {
         SP4G_PSR_UL_Tone_Stop( );  
      }
      break;  
    case 73:
      {
         SP4G_PSR_DL_Tone_Play( tone_call_waiting );  
      }
      break;
    case 74:
      {
         SP4G_PSR_DL_Tone_Stop( );  
      }
      break;        
   }
#endif   
}

#if defined(__VOLTE_SUPPORT__)  
#include "l1sp_el2_struct.h"
#if defined(__MCU_DTMF_SUPPORT__)       
void volte_Tone_bgSnd_closeHandler(void);//BGSND HISR to MED  ToDO
void volte_KT_bgSnd_closeHandler(void);//BGSND HISR to MED  ToDO
void volte_BGSND_ULHdr(void);
uint32 VolteToneGetID();
void VolteToneSetID(uint32 u32val);
bool VolteToneGetUsed();
void VolteToneSetUsed(bool bval);
#endif //#if defined(__MCU_DTMF_SUPPORT__)       
#endif //#if defined(__VOLTE_SUPPORT__)
#ifdef __FAKE_3G_LOOPBACK__
kal_uint8 tmp_buf[1000];
void SP3GHSPA_UL_GetSpeechFrame(kal_uint8 *frame_type, kal_uint8 *rab_byte_array, kal_uint8 *len);
void SP3GHSPA_DL_PutSpeechFrame(kal_uint32 CFN, kal_uint8 frame_type, kal_bool crc_status, kal_uint8 *subflow);
#endif
void SP_M2M_Handler(ilm_struct *ilm_ptr)
{
   switch (ilm_ptr->msg_id) {
#if defined(__C2K_SPEECH_SUPPORT__)   	
   	  case MSG_ID_AUDIO_M2M_SP_C2K_EVENT:
   	  {
	  	   ilm_SP_C2K_EVENT_t *local_para;
         local_para = (ilm_SP_C2K_EVENT_t *)(ilm_ptr->local_para_ptr);	
         switch(local_para->event)
         {
            case L1SP_C2K_LINK_ESTABLISH:
            	SO_Connect(local_para->param);
            	break;
            case L1SP_C2K_LINK_DEESTABLISH:
            	SO_Disconnect();
            	break;
            case L1SP_C2K_LINK_INTRARAT:
            	SO_IntraRAT(local_para->param);
            	break;            	            		
         }
   	  }
   	  break;   	
	  case MSG_ID_AUDIO_M2M_SP_C2K_RATE_REDUCTION:
	  {
#if defined(__SMART_PHONE_MODEM__)
         extern void spc_codecInfoNotify_soRateUpdate(uint16 newRate);
         ilm_SP_C2K_RATE_NOTI_t *local_para;
		 local_para = (ilm_SP_C2K_RATE_NOTI_t *)(ilm_ptr->local_para_ptr);
         spc_codecInfoNotify_soRateUpdate(local_para->rate);
#endif
	  }
	  break;
#endif   	  
   	  case MSG_ID_AUDIO_M2M_CHANGERATE_EVENT:
   	  {
	  	   ilm_SP_CHANGERATE_EVENT_t *local_para;
         local_para = (ilm_SP_CHANGERATE_EVENT_t *)(ilm_ptr->local_para_ptr);	
       
   	  	 ChangeRAT_Mode(local_para->event, local_para->param[0], local_para->param[1]);
   	  }
   	  break;	
      case MSG_ID_AUDIO_M2M_SP_L4C_SET_EVENT:
      {
	  	   ilm_SP_L4C_SET_EVENT_t *local_para;
	  	   kal_trace(TRACE_INFO, SP_M2M_HANDLER, 1);	
         local_para = (ilm_SP_L4C_SET_EVENT_t *)(ilm_ptr->local_para_ptr);
         SP_L4C_SetEvent_Execute(local_para->event, local_para->mode);
      }
      break;
      case MSG_ID_AUDIO_M2M_SP_UPDATE_SPEECH_ENHANCEMENT_PARAMETER:
      {
	  		uint16 spc_after_network = AM_GetNetworkRate();
			uint32 amCodec = AM_GetSpeechMode();
			L1SP_L4C_Codec l4c_codec = l1sp_mappingCodec(amCodec);
			kal_trace(TRACE_INFO, SP_M2M_HANDLER, 2);	
			if(spc_after_network!=l1sp.sph_before_network_status || l4c_codec!=l1sp.pre_l4c_codec)
			{
				kal_prompt_trace(MOD_L1SP, "Get_Reset_Enh_Status()=%x",Get_Reset_Enh_Status() );
				if(Get_Reset_Enh_Status()==true)
				{
					SetSpeechEnhancement( false );
					SetSpeechEnhancement( true );
					Set_Reset_Enh_Status(false);
				}
				else
				{
					SetSpeechEnhancement( true );
				}
			}
			l1sp.sph_before_network_status = spc_after_network;
			l1sp.pre_l4c_codec = l4c_codec;
      }	  
      break;
#if defined(__VOLTE_SUPPORT__)   	
      case MSG_ID_AUDIO_M2M_VOLTE_MAC_TIMING_INFO:
      {
         sub_SP4G_emac_timing_update((l1sp_emac_resync_info_struct*)ilm_ptr->local_para_ptr);
      }
      break;                 
#if defined(__MCU_DTMF_SUPPORT__)       
      case MSG_ID_AUDIO_M2M_VOLTE_KT_BGSND_CLOSE:
      {
      	 ASSERT(0);
      }
      break;  
      case MSG_ID_AUDIO_M2M_VOLTE_TONE_BGSND_CLOSE:
      {
         ASSERT(0);
      }
      break;             
      case MSG_ID_AUDIO_M2M_VOLTE_DL_KT_PLAY:
      {
         //SP4G_PSR_DL_KT_Play(5000, 8000, 100000);
         ilm_PSR_DL_KT_t *local_para;
         local_para = (ilm_PSR_DL_KT_t *)(ilm_ptr->local_para_ptr);
         //KT_Play(local_para->freq1, local_para->freq2, local_para->duration, DSP_TONE);
         SP_DSPTone_DL_KT_Play(local_para->freq1, local_para->freq2, local_para->duration);
      }
      break;
      case MSG_ID_AUDIO_M2M_VOLTE_DL_KT_STOP:      
      {
         //SP4G_PSR_DL_KT_Stop();
         //KT_Stop(DSP_TONE);
         SP_DSPTone_DL_KT_Stop();
      }     
      break;  
      case MSG_ID_AUDIO_M2M_VOLTE_UL_KT_PLAY:
      {
         //SP4G_PSR_UL_KT_Play(5000, 8000, 100000);
         ilm_PSR_DL_KT_t *local_para;
         local_para = (ilm_PSR_DL_KT_t *)(ilm_ptr->local_para_ptr);
         /*if( KAL_FALSE == VolteToneGetUsed() ){	
            KT_Play(local_para->freq1, local_para->freq2, local_para->duration, MCU_TONE);
            VolteToneSetID( EXT_BGSND_Start(volte_KT_bgSnd_closeHandler, NULL, volte_BGSND_ULHdr, 7, 7) );
            VolteToneSetUsed(KAL_TRUE);
         }else{
            kal_trace( TRACE_FUNC,SP4G_PSR_UL_KT_PLAY_SKIP);	   
         }*/
         SP_DSPTone_UL_KT_Play(local_para->freq1, local_para->freq2, local_para->duration);
      }         
      break;
      case MSG_ID_AUDIO_M2M_VOLTE_UL_KT_STOP:      
      {
         //SP4G_PSR_UL_KT_Stop();
         /*if( KAL_TRUE == VolteToneGetUsed() ){ 
            EXT_BGSND_Flush( VolteToneGetID() );  
            KT_Stop(MCU_TONE);	   
         }else{
            kal_trace( TRACE_FUNC,SP4G_PSR_UL_KT_STOP_SKIP);		 
         }*/
         SP_DSPTone_UL_KT_Stop();
      }         
      break;   
      case MSG_ID_AUDIO_M2M_VOLTE_DL_TONE_PLAY:      
      {
         //SP4G_PSR_DL_Tone_Play( tone_call_waiting );
         //ilm_PSR_DL_TONE_t *local_para;
         //local_para = (ilm_PSR_DL_TONE_t *)(ilm_ptr->local_para_ptr);
		     //TONE_Play(local_para->pToneList, DSP_TONE);
		     kal_prompt_trace(MOD_L1SP, "DSP tone not ready skip MSG_ID_AUDIO_M2M_VOLTE_DL_TONE_PLAY");
      }         
      break;   
      case MSG_ID_AUDIO_M2M_VOLTE_DL_TONE_STOP:      
      {
         //SP4G_PSR_DL_Tone_Stop();
		     //TONE_Stop(DSP_TONE);
		     kal_prompt_trace(MOD_L1SP, "DSP tone not ready skip MSG_ID_AUDIO_M2M_VOLTE_DL_TONE_STOP");
      }         
      break;   
      case MSG_ID_AUDIO_M2M_VOLTE_UL_TONE_PLAY:      
      {
      	  ASSERT(0);
      }         
      break;   
      case MSG_ID_AUDIO_M2M_VOLTE_UL_TONE_STOP:      
      {
      	  ASSERT(0);
      }         
      break;   
#endif //#if defined(__MCU_DTMF_SUPPORT__) 
#endif //#if defined(__VOLTE_SUPPORT__)
#ifdef __FAKE_3G_LOOPBACK__
   	  case MSG_ID_AUDIO_M2M_SP3G_UL_EVENT:
   	  {
   	  	   kal_uint8 frame_type, len;
   	  	   kal_prompt_trace(MOD_L1SP, "MSG_ID_AUDIO_M2M_SP3G_UL_EVENT 1");
   	  	   //if(use_sleep == 1){
   	  	   //  kal_sleep_task( AUD_1TICK(1) );
   	  	   //}
   	  	   kal_prompt_trace(MOD_L1SP, "MSG_ID_AUDIO_M2M_SP3G_UL_EVENT 2");
   	  	 	 SP3GHSPA_UL_GetSpeechFrame(&frame_type, tmp_buf, &len);
           SP3GHSPA_DL_PutSpeechFrame(1, frame_type, 1, tmp_buf);
           break;
   	  }
#endif
	  default:
      {
         kal_trace( TRACE_FUNC,SP_M2M_HANDLER_SKIP_COMMAND, ilm_ptr->msg_id);
         break;
      }
   }
}

void SP_SetDevSamplingRate(kal_uint8 voice8kMode)
{
	l1sp.devSr = voice8kMode;
}

uint8 SP_GetDevSamplingRate(void)
{
	return l1sp.devSr;
}


sp_device_info_t SP_GetDevInfo(void)
{
	return l1sp.devInfo;
}

void sp_turnOffPath(kal_bool isSpeechOn, kal_bool isPcmRoutOn)
{
	if(true == isSpeechOn) {
		AM_SpeechOff(1); // turn off 8k and speech off
	} else if (true == isPcmRoutOn){
		AM_PcmRouter_Off();
	} else { // cordless mode AM_BTCordlessOff ()/ speech 			
	}
}

void sp_turnOnPath(kal_bool isSpeechOn, kal_bool isPcmRoutOn)
{
	if(true == isSpeechOn) {				
	   uint32 rat = AM_GetNetworkRate();			
		// [REMIND]L1SP_STATE_xx can mapping to RAT_2G_MODE using "index -1"
		ASSERT(L1SP_STATE_IDLE != L1SP_GetState());
		ASSERT(RAT_NONE_MODE != rat );
		AM_SpeechOn(rat, 1); 
		
	} else if (true == isPcmRoutOn){
		AM_PcmRouter_On();
	} else { // cordless mode / speech
	}
}

void SP_SetDevicePath(sp_device_info_t newDev, kal_uint8 voice8kMode)
{
	kal_bool isSpeechOn; 
	kal_bool isPcmRoutOn;
	kal_bool isAmInSpeechState;
	kal_bool needOffOn;
	kal_uint16 audId;

	audId = L1SP_GetAudID();

	sp_device_info_t beforeDev = l1sp.devInfo;

	isSpeechOn = AM_IsSpeechOn();
	isPcmRoutOn = AM_IsVoIPOn();
	isAmInSpeechState = AM_IsAmInSpeechState();
	
	kal_trace(TRACE_INFO, SP_DEV_MODE_SETTING, beforeDev, newDev, SP_GetDevSamplingRate(), voice8kMode);
	if((SPH_DEVINFO_NORMAL == beforeDev && SPH_DEVINFO_NORMAL== newDev)
		|| (SPH_DEVINFO_NORMAL == beforeDev && SPH_DEVINFO_BT_PCM== newDev)
		|| (SPH_DEVINFO_BT_PCM == beforeDev && SPH_DEVINFO_NORMAL == newDev)
		|| (SPH_DEVINFO_BT_PCM == beforeDev && SPH_DEVINFO_BT_PCM == newDev) ){

		needOffOn = ((true == isAmInSpeechState) && (SP_GetDevSamplingRate()!=voice8kMode));
		
		// off
		if(true == needOffOn) {
			sp_turnOffPath(isSpeechOn, isPcmRoutOn);
		}
		if(SPH_DEVINFO_BT_PCM == beforeDev) {
			AM_BluetoothOff();
		}

		// change setting
		if(SPH_DEVINFO_BT_PCM== newDev) {
			ASSERT( (voice8kMode==0) || (voice8kMode==1) );
			if(0== voice8kMode) { // NB
				SAL_Set_Device(SAL_DEV_BT_EARPHONE_NB, SAL_NB);
			} else { //WB
				SAL_Set_Device(SAL_DEV_BT_EARPHONE_WB, SAL_WB);
			}
		} else {
			SAL_Set_Device(SAL_DEV_NORMAL, voice8kMode);
		}
		SP_SetDevSamplingRate(voice8kMode);
		AFE_SetVoice8KMode(voice8kMode);

		// on
		if(SPH_DEVINFO_BT_PCM == newDev) {			
			AM_BluetoothOn(2);
		}
		if(true == needOffOn){
			sp_turnOnPath(isSpeechOn, isPcmRoutOn);
		}
	}
#if defined(__CVSD_CODEC_SUPPORT__) 	
	else if((SPH_DEVINFO_NORMAL == beforeDev 
			|| SPH_DEVINFO_BT_CVSD_MSBC == beforeDev 
			|| SPH_DEVINFO_BT_CVSD == beforeDev 
			|| SPH_DEVINFO_BT_MSBC == beforeDev)
		&& (SPH_DEVINFO_BT_CVSD_MSBC == newDev
			|| SPH_DEVINFO_BT_CVSD == newDev
			|| SPH_DEVINFO_BT_MSBC == newDev)) {
			
		// no off		
		if (isSpeechOn && BT_SCO_IS_SPEECH_ON())
		{
			BT_SCO_SPEECH_OFF();
		}
		
		// change
		if (SPH_DEVINFO_BT_CVSD_MSBC == newDev) {
			SP_SetDevSamplingRate(voice8kMode);
		} else if (SPH_DEVINFO_BT_CVSD == newDev) {
			SP_SetDevSamplingRate(0);
		} else { // MSBC
			SP_SetDevSamplingRate(1);
		}

		// on
		if(isSpeechOn)
      	{
	      	sp_enableBT_SCO(newDev, voice8kMode);			
		}
	}
	else if((SPH_DEVINFO_BT_CVSD_MSBC == beforeDev && SPH_DEVINFO_NORMAL == newDev)
		|| (SPH_DEVINFO_BT_CVSD == beforeDev && SPH_DEVINFO_NORMAL == newDev)
		|| (SPH_DEVINFO_BT_MSBC == beforeDev && SPH_DEVINFO_NORMAL == newDev)) {
		needOffOn = ((true == isAmInSpeechState) && (AFE_GetVoice8KMode() != voice8kMode));
		
		// off
		if (isSpeechOn && BT_SCO_IS_SPEECH_ON())
	    {
			BT_SCO_SPEECH_OFF();
		}
		if (needOffOn) {
			sp_turnOffPath(isSpeechOn, isPcmRoutOn);
		}
		
		// change		
		SAL_Set_Device(SAL_DEV_NORMAL, voice8kMode);
		SP_SetDevSamplingRate(voice8kMode);
		AFE_SetVoice8KMode(voice8kMode);

		// on 
		if(needOffOn){
			sp_turnOnPath(isSpeechOn, isPcmRoutOn);
		}
	}
#endif
		
	l1sp.devInfo = newDev; 
	if(l1sp.devInfo== SPH_DEVINFO_NORMAL || l1sp.devInfo == SPH_DEVINFO_BT_PCM) {
		SAL_Set_DevInfo((Sal_DevInfo_Int_t)(l1sp.devInfo + 1 ), (Sal_DevInfo_Ext_t)(l1sp.extDevInfo));
	} else {
		SAL_Set_DevInfo(SAL_DEVINFO_INT_CVSD_MSBC, (Sal_DevInfo_Ext_t)(l1sp.extDevInfo));	
	}
	L1SP_FreeAudID(audId);

}

void SP_SetExtraDevInfo(sp_device_info_t dev, sp_ext_dev_info_t extDevInfo, uint16 echoRefDelay, uint8 micDelay)
{
	
	kal_uint16 audId; 

	kal_trace(TRACE_INFO, SP_EXT_DEV_SETTING, dev, extDevInfo, echoRefDelay, micDelay);

	audId = L1SP_GetAudID();
	
	// notch filter setting 
	switch(extDevInfo) {
		case SPH_EXTDEVINFO_VIBRATION_RECEIVER:
		case SPH_EXTDEVINFO_VIBRATION_SPEAKER:
		case SPH_EXTDEVINFO_SMARTPA_VIBRATION_SPEAKER:
			AM_DSP_WriteNotchFilterParam();
			SAL_NotchFilter_Enable(true , false);
			break;
		default:
			SAL_NotchFilter_Enable(false , false);
			break;
	}	


	// echo ref setting
	switch(extDevInfo) {
		case SPH_EXTDEVINFO_SMARTPA_SPEAKER:
		case SPH_EXTDEVINFO_SMARTPA_VIBRATION_SPEAKER:
		case SPH_EXTDEVINFO_USB_AUDIO:
			SAL_ENH_ExtEchoRef_Switch(true);
			SAL_ENH_ExtEchoRef_DelayConfig(echoRefDelay, micDelay);
			break;
		default:			
		{
			SAL_ENH_ExtEchoRef_Switch(false);
		    if(SPH_DEVINFO_BT_CVSD_MSBC == dev || SPH_DEVINFO_BT_CVSD == dev || SPH_DEVINFO_BT_MSBC == dev) {
				SAL_ENH_ExtEchoRef_DelayConfig(echoRefDelay, micDelay);
			} else { // not delay setting 
				SAL_ENH_ExtEchoRef_DelayConfig(0, 0);
			}
		}
			break;
	}

	l1sp.extDevInfo = extDevInfo; 
    if(l1sp.devInfo== SPH_DEVINFO_NORMAL || l1sp.devInfo == SPH_DEVINFO_BT_PCM) {
		SAL_Set_DevInfo((Sal_DevInfo_Int_t)(l1sp.devInfo + 1 ), (Sal_DevInfo_Ext_t)(l1sp.extDevInfo));
	} else {
		SAL_Set_DevInfo(SAL_DEVINFO_INT_CVSD_MSBC, (Sal_DevInfo_Ext_t)(l1sp.extDevInfo));	
	}
	L1SP_FreeAudID(audId);

}

sp_ext_dev_info_t SP_GetExtDevInfo (void) 
{
	return l1sp.extDevInfo;

}

