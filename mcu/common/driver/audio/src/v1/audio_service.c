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
 *
 * Filename:
 * ---------
 * l1audio_service.c
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description:
 * ------------
 *   L1SP Task / L1Audio Service
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
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *==============================================================================
 *******************************************************************************/

#include "kal_public_defs.h"
#include "kal_public_api.h"
#include "kal_hrt_api.h"
#include "extcodec.h"
#include "intrCtrl.h"
#include "string.h"
#include "hisr_config.h"
#include "kal_public_defs.h"
#include "sync_data.h"
#include "reg_base.h"
// #include "l1sm_public.h"
#include "sp_cc.h"
#include "sleepdrv_interface.h"
#include "kal_trace.h"
#include "l1sp_trc.h"
#include "l1audio.h"
// #include "audio_def.h"
#include "media.h"
#include "l1audio_trace.h"
#include "ddload.h"
#include "am.h"
#include "afe.h"
#include "l1aud_common_def.h"
#include "cuif_l1core_public.h"
//#include "speech_def.h"
#include "sal_def.h"
#include "sal_exp.h"
//for DSP_DynamicDownload(DDID_SPH_SCH);
#include "ddload.h"
#if defined( __CENTRALIZED_SLEEP_MANAGER__ )
#include "RM_public.h"
#include "reg_base.h"
//#include "drv_iomux.h"
#endif
#include "usip_api_public.h"

#if defined(__SMART_PHONE_MODEM__)
#include "bgSnd.h" // for BGSND_INIT() 
#endif // defined(__SMART_PHONE_MODEM__)

#if defined(__CVSD_CODEC_SUPPORT__) 
#include "bt_sco_drv.h"
#endif

#include "vm.h"
#include "tone_drv.h"
#include "pcm4way.h"
#include "sp_daca.h"
#include "rawpcmrec.h"
#include "mml1_rf_global.h"
#ifdef __FAKE_C2K_LOOPBACK__
#include "lmd_audio.h"
#endif
#include "sp_dsptone_drv.h"
#include "pcmMixer.h"
#include "pcmMixer3.h"
//#define TK6291_FAKE_COMPILE
//#define TK6291_NO_SPEECH_HW

#if defined( __UMTS_RAT__ ) || defined( __UMTS_TDD128_MODE__ )

#if defined(__VOLTE_SUPPORT__)
  #define  MAX_HISR_HANDLER       19 // ramping, 3g(ul+dl), pnw(ul+dl), DACA for bt (ul+dl), vm, epl, bgsnd(ul+dl), record, 4G AMR (ul+dl), 4G G-codec (ul+dl), pcmmixer
#else //#if defined(__VOLTE_SUPPORT__)
  #define  MAX_HISR_HANDLER       15 // ramping, 3g, pnw, DACA for bt, vm, epl, bgsnd(ul+dl), record, cvsd, pcmmixer
#endif //#if defined(__VOLTE_SUPPORT__)
#else // no 3g
#define  MAX_HISR_HANDLER       13 // ramping, pnw, DACA for bt, vm, epl, bgsnd(ul+dl), record, cvsd, pcmmixer

#endif

void toneLoopbackRecInit( void );
extern void DisableIRQ(void);


#ifdef MTK_SLEEP_ENABLE
   #include "sleepdrv_interface.h"      
   #define  SLEEP_LOCK()         {  SleepDrv_LockSleep( SLEEP_CTL_SPEECH, SMP );   }
   #define  SLEEP_UNLOCK()       {  SleepDrv_UnlockSleep( SLEEP_CTL_SPEECH, SMP );    }
#else   
   #define  SLEEP_LOCK()
   #define  SLEEP_UNLOCK()
#endif

#ifndef TK6291_FAKE_COMPILE
extern uint32 L1I_GetTimeStamp( void );
#endif //#ifndef TK6291_FAKE_COMPILE

#if (defined( __CENTRALIZED_SLEEP_MANAGER__ ) && defined(MTK_SLEEP_ENABLE) )
#if defined(__AUDIO_POWERON_RESET_DSP__)
   #ifndef TK6291_FAKE_COMPILE
   extern unsigned short  cc_L1D_Audio_RestartDSP( void );
   extern void            cc_L1D_Audio_NoNeedDSP( void );
   #endif //#ifndef TK6291_FAKE_COMPILE
   // extern void AFE_Init_status(kal_bool flag);
#else
   #ifndef TK6291_FAKE_COMPILE
   extern kal_uint8  L1SM_IntGetHandle( void );
   extern void       L1SM_Multi_SW_WakeUp(void); 
   extern void       L1SM_IntSleepDisable( kal_uint8 handle );
   extern void       L1SM_IntSleepEnable( kal_uint8 handle );
   extern kal_uint8  L1D_MD2G_PWD_GetHandle( void );
   extern      void  L1D_MD2G_PWD_Disable( kal_uint8 handle );
   extern      void  L1D_MD2G_PWD_Enable( kal_uint8 handle );
   #endif //#ifndef TK6291_FAKE_COMPILE
#endif // defined(__AUDIO_POWERON_RESET_DSP__)
#endif //(defined( __CENTRALIZED_SLEEP_MANAGER__ ) && defined(MTK_SLEEP_ENABLE) )

#if defined(__SMART_PHONE_MODEM__)
extern void SpcIO_shmInit(void);
#endif
/* ------------------------------------------------------------------------------ */

static struct {
   uint32               sleppModeLocker;
   uint32               dspUser;
   kal_eventgrpid       aud_events;
   uint16               media_flag;
   uint16               d2c_itype;
   uint32               d2c_l1FN;
   uint32               retrieved_events;
   uint32               events_l1FN;

   L1Audio_EventHandler evHandler[MAX_AUDIO_FUNCTIONS];
   void                 *evData[MAX_AUDIO_FUNCTIONS];
   uint32               id_flag;
   uint32               event_flag;
   L1Audio_EventHandler hisrHandler[MAX_HISR_HANDLER];
   uint16               hisrMagicNo[MAX_HISR_HANDLER];
   void                 *hisrUserData[MAX_HISR_HANDLER];
   uint32               hisrMagicFlag;
   uint8                sleep_handle;
   int8                 dsp_slow_idle_counter;

   uint16               debug_info[NUM_DEBUG_INFO];

   kal_uint8            md2g_pdn_handle;
   kal_uint8            l1sm_handle;
   kal_uint8            audio_dsp_count;
   kal_semid            sema;
   bool                 is_Initialized;
	 bool                 isD2MIntAvalibaleUnderSleep; // does Dsp to MCU interrupt can trigger under MCU sleep
	 kal_spinlockid       lisr_lockId;
} l1audio;

//#define L1_BASE_MADDR_SHARE_D1          REG_BASE(0xF77A0000)

#define  HW_WRITE(ptr,data)         (*(ptr) = (data))
#define  HW_READ(ptr)               (*(ptr)) 
#define  DSP_WRITE(addr, data)      HW_WRITE(addr, (kal_uint16)(data) )
#define  DSP_READ(addr)             HW_READ(addr)
   
#define DP_D2C_TASK4          ((APBADDR)(AFE_SHARED_REGISTER_BASE+0x0060))     /* 4th FW tsk interrupt                                 */
#define DP_D2C_TASK5          ((APBADDR)(AFE_SHARED_REGISTER_BASE+0x0064))     /* 5th FW tsk interrupt                                 */
#define DP_D2C_TASK6          ((APBADDR)(AFE_SHARED_REGISTER_BASE+0x0068))     /* 6th FW tsk interrupt   															 */
#define DP_D2C_TASK7          ((APBADDR)(AFE_SHARED_REGISTER_BASE+0x006C))     /* 6th FW tsk interrupt   															 */
/* ------------------------------------------------------------------------------ */
#ifndef TK6291_FAKE_COMPILE
extern void L1D_DSP_EnableDspSlowIdle( void );
#endif //#ifndef TK6291_FAKE_COMPILE
int8 L1Audio_Disable_DSPSlowIdle(void)
{
   int8    dis_check_counter;

   
   l1audio.dsp_slow_idle_counter++;
   dis_check_counter = l1audio.dsp_slow_idle_counter;

   //DP_SLOW_IDLE_CTRL = 0xFFFF;
   

   return dis_check_counter;
}

int8 L1Audio_Enable_DSPSlowIdle(void)
{
   int8    en_check_counter;

   
   l1audio.dsp_slow_idle_counter--;
   en_check_counter = l1audio.dsp_slow_idle_counter;

#ifndef TK6291_FAKE_COMPILE
   if ( l1audio.dsp_slow_idle_counter == 0 )
       ;//L1D_DSP_EnableDspSlowIdle();
#endif //#ifndef TK6291_FAKE_COMPILE

   
   ASSERT( en_check_counter >= 0 );

   return en_check_counter;
}

kal_bool L1Audio_CheckAudioID( kal_uint16 audio_id )
{
   if( l1audio.id_flag & (1 << audio_id) )
      return true;
   return false;
}

uint16 L1Audio_GetAudioID( void )
{
   uint32 I;

   
   for( I = 0; I < MAX_AUDIO_FUNCTIONS; I++ ) {
      if( (l1audio.id_flag & (1<<I)) == 0 ) {
         l1audio.id_flag |= (1<<I);
         break;
      }
   }
   

   ASSERT( (l1audio.sleppModeLocker & (1 << I)) == 0 );
   ASSERT_REBOOT( I < MAX_AUDIO_FUNCTIONS );
   return (uint16)I;
}

void L1Audio_FreeAudioID( uint16 aud_id )
{
   uint32 retrieved_events;
   kal_retrieve_eg_events(l1audio.aud_events,(1<<aud_id),KAL_OR_CONSUME,&retrieved_events,0);
   ASSERT( (l1audio.sleppModeLocker & (1 << aud_id)) == 0 );
   ASSERT( l1audio.id_flag & (1<<aud_id) );
   
   l1audio.id_flag &= ~(1<<aud_id);
   l1audio.retrieved_events &= ~(1<<aud_id);
   
}

void L1Audio_SetEventHandler( uint16 audio_id, L1Audio_EventHandler handler )
{
   l1audio.evHandler[audio_id] = handler;
}

void L1Audio_SetEvent( uint16 audio_id, void *data )
{
   l1audio.evData[audio_id] = data;
   /* Activate L1Audio Task */
   kal_set_eg_events( l1audio.aud_events, 1 << audio_id, KAL_OR );
}

void L1Audio_LSetEvent( uint16 audio_id, void *data )
{
//When run in P-core/Core2, we do not run under CTIRQ.
#if 1
   L1Audio_SetEvent( audio_id, data );
#else
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif
}

void L1Audio_CCSetEvent( void )
{
   /* Activate L1Audio HISR */
   kal_hrt_activate_hisr_index(L1AUDIO_HISR);
}

bool L1Audio_CheckFlag( uint16 audio_id )
{
   ASSERT( l1audio.id_flag & (1 << audio_id) );
   if( l1audio.sleppModeLocker & (1 << audio_id) )
      return true;
   return false;
}

#if defined( __CENTRALIZED_SLEEP_MANAGER__ )

static void Audio_Wake_DSP(uint16 audio_id, kal_bool flag)
{
   if (!kal_if_hisr() && !kal_if_lisr())
      kal_trace( TRACE_GROUP_AUD_MD2GCTRL, L1AUDIO_MD2G_PWR_CTRL, audio_id, flag);
   else
      kal_dev_trace( TRACE_GROUP_AUD_MD2GCTRL, L1AUDIO_MD2G_PWR_CTRL, audio_id, flag);
      
   if(flag)
   {
   	  //MODEM_TOPSM_MD2G_PowerControl(KAL_TRUE);
      MD_TOPSM_PWR_SW_Control(USIP0_PWR, KAL_TRUE);	  

#if defined(MTK_SLEEP_ENABLE)
      // AFE_RegisterStore();   
      {
         //unsigned short DSP_status;     
         //DSP_status = cc_L1D_Audio_RestartDSP();
         //ASSERT(!DSP_status);
      }
      {
      	 uint32 I = 0 ;
      	 kal_uint32 core_id;
      	 kal_runtime_affinity_to_current_vpe();
      	 core_id = kal_get_current_core_id();
         SleepDrv_LockSleep( SLEEP_CTL_SPEECH, core_id );
      	 kal_prompt_trace(MOD_L1SP, "lock sleep mode core:%d for active1 uSip",core_id);         
         dsp_uSIP_speech_activate(DSP_CTRL_USIP_SPEECH);
         kal_prompt_trace(MOD_L1SP, "lock sleep mode core:%d for active2 uSip",core_id);
         kal_runtime_affinity_resume();
         //is_default_user = is_myself_duty_rat(DSP_CTRL_USIP_SPEECH_SS1_INIT, DSP_CTRL_USIP_SPEECH);

         while( uSIP_ACTIVEDONE != dsp_uSIP_speech_active_done_check(DSP_CTRL_USIP_SPEECH)){
	          kal_sleep_task(AUD_1TICK(1));
	          ASSERT( ++I < 3 );
	       }
	       SleepDrv_UnlockSleep( SLEEP_CTL_SPEECH, core_id ); 
      }
#endif

      l1audio.audio_dsp_count++;
   } else {
#if defined(MTK_SLEEP_ENABLE)
      uint32 I = 0; 
      kal_uint32 core_id;
      kal_runtime_affinity_to_current_vpe();
      core_id = kal_get_current_core_id();      
      SleepDrv_LockSleep( SLEEP_CTL_SPEECH, core_id );
      kal_prompt_trace(MOD_L1SP, "lock sleep mode core:%d for deactive1 uSip",core_id);
      dsp_uSIP_speech_deactivate(DSP_CTRL_USIP_SPEECH);
      kal_prompt_trace(MOD_L1SP, "lock sleep mode core:%d for deactive2 uSip",core_id);
      kal_runtime_affinity_resume();
	    while( uSIP_DEACTIVEDONE != dsp_uSIP_speech_deactive_done_check(DSP_CTRL_USIP_SPEECH)){
		     kal_sleep_task(AUD_1TICK(1));
		     ASSERT( ++I < 5 );
		  }
		  SleepDrv_UnlockSleep( SLEEP_CTL_SPEECH, core_id ); 
      // AFE_RegisterBackup();                         //Backup AFE register
      //cc_L1D_Audio_NoNeedDSP();
#endif
      MD_TOPSM_PWR_SW_Control(USIP0_PWR, KAL_FALSE);
      //MODEM_TOPSM_MD2G_PowerControl(KAL_FALSE);
      l1audio.audio_dsp_count--;
   }
   if (!kal_if_hisr() && !kal_if_lisr())
      kal_trace( TRACE_GROUP_AUD_MD2GCTRL, L1AUDIO_MD2G_PWR_CTRL_DONE, audio_id, flag);
   else
      kal_dev_trace( TRACE_GROUP_AUD_MD2GCTRL, L1AUDIO_MD2G_PWR_CTRL_DONE, audio_id, flag);
}
#endif //( defined( __CENTRALIZED_SLEEP_MANAGER__ )&& defined( MTK_SLEEP_ENABLE ))

void L1Audio_SetFlag( uint16 audio_id )
{
   if (!kal_if_hisr() && !kal_if_lisr())
      kal_trace( TRACE_GROUP_AUD_MD2GCTRL, L1AUDIO_SETFLAG_A,audio_id,l1audio.dspUser);
   else
      kal_dev_trace( TRACE_GROUP_AUD_MD2GCTRL, L1AUDIO_SETFLAG_A,audio_id,l1audio.dspUser);

   kal_take_sem( l1audio.sema, KAL_INFINITE_WAIT );
   ASSERT( l1audio.id_flag & (1 << audio_id) );
   ASSERT( (l1audio.sleppModeLocker & (1 << audio_id)) == 0 );
	ASSERT( (l1audio.dspUser & (1 << audio_id)) == 0 );
	
   if( l1audio.dspUser == 0 ) {
#if ( defined( __CENTRALIZED_SLEEP_MANAGER__ )&& defined( MTK_SLEEP_ENABLE ))
      Audio_Wake_DSP(audio_id, KAL_TRUE);
#endif
   }

	if (false == l1audio.isD2MIntAvalibaleUnderSleep && l1audio.sleppModeLocker == 0) {
      	SLEEP_LOCK();
	}

   
	if (false == l1audio.isD2MIntAvalibaleUnderSleep) {
	   l1audio.sleppModeLocker |= (1 << audio_id);	
	}
   l1audio.dspUser |= (1 << audio_id);
   
   kal_give_sem( l1audio.sema ); 
}

void L1Audio_ClearFlag( uint16 audio_id )
{
   if (!kal_if_hisr() && !kal_if_lisr())  
      kal_trace( TRACE_GROUP_AUD_MD2GCTRL, L1AUDIO_CLEARFLAG_A,audio_id,l1audio.dspUser);
   else
      kal_dev_trace( TRACE_GROUP_AUD_MD2GCTRL, L1AUDIO_CLEARFLAG_A,audio_id,l1audio.dspUser);

	kal_take_sem( l1audio.sema, KAL_INFINITE_WAIT );
   ASSERT( l1audio.id_flag & (1 << audio_id) );
	ASSERT( l1audio.dspUser & (1 << audio_id) );
	if (false == l1audio.isD2MIntAvalibaleUnderSleep) {
   	ASSERT( l1audio.sleppModeLocker & (1 << audio_id) );
	}

   
	if (false == l1audio.isD2MIntAvalibaleUnderSleep) {
	   l1audio.sleppModeLocker &= ~(1 << audio_id);
	}
   l1audio.dspUser &= ~(1 << audio_id);
   

	if((false == l1audio.isD2MIntAvalibaleUnderSleep) && (l1audio.sleppModeLocker == 0) ) {
      SLEEP_UNLOCK();
   }
	
   if( l1audio.dspUser == 0 ) {      
#if ( defined( __CENTRALIZED_SLEEP_MANAGER__ )&& defined( MTK_SLEEP_ENABLE ))
      Audio_Wake_DSP(audio_id, KAL_FALSE);
#endif
   }
   kal_give_sem( l1audio.sema ); 
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
#if defined( __CENTRALIZED_SLEEP_MANAGER__ )
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
#if defined( __CENTRALIZED_SLEEP_MANAGER__ )
/* under construction !*/
#endif
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif //#if 0

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
#endif //#if 0

/* ------------------------------------------------------------------------------ */
/*  L1Audio HISR                                                                  */
/* ------------------------------------------------------------------------------ */

void L1Audio_HISR( void )
{
   int32  I;

  //L1Audio_Disable_DSPSlowIdle();

   if( l1audio.hisrMagicFlag ) {
      for( I = 0; I < MAX_HISR_HANDLER; I++ ) {
         if( l1audio.hisrMagicFlag & (1<<I) ) {
            kal_take_spinlock(l1audio.lisr_lockId, KAL_INFINITE_WAIT);
            l1audio.hisrMagicFlag &= ~(1<<I);
            kal_give_spinlock(l1audio.lisr_lockId);
            l1audio.hisrHandler[I]( l1audio.hisrUserData[I] );
         }
      }
   }

   if( l1audio.event_flag ) {
      int16 I;
      for( I = 0; I < MAX_AUDIO_FUNCTIONS; I++ ) {
         if( l1audio.event_flag & (1<<I) ) {
            
            l1audio.event_flag &= ~(1<<I);
            
            L1Audio_SetEvent( I, l1audio.evData[I] );
         }
      }
   }

   SP_CC_Event_Handler();
   // To restore slow idle ctrl for DSP
   //L1Audio_Enable_DSPSlowIdle();
}


void L1Audio_TrigD2CHisr(uint16 magicNo)
{
	int32 I;
	   for( I = 0; I < MAX_HISR_HANDLER; I++ ) {
      if( magicNo == l1audio.hisrMagicNo[I] ) {
      	 kal_take_spinlock(l1audio.lisr_lockId, KAL_INFINITE_WAIT);
         l1audio.hisrMagicFlag |= (1<<I);
         kal_give_spinlock(l1audio.lisr_lockId);
         kal_activate_hisr_index(L1AUDIO_HISR);
         return; 
      }
   }
	
}

void L1SP_D2C_LISR( uint16 itype )
{
	uint32 sph_int = 0;
	bool dsp_ok = false;
	bool from_sph;

   l1audio.d2c_itype = itype;
#ifndef TK6291_FAKE_COMPILE
   l1audio.d2c_l1FN = 0;//L1I_GetTimeStamp();
#else //#ifndef TK6291_FAKE_COMPILE
   l1audio.d2c_l1FN = 0;
#endif //#ifndef TK6291_FAKE_COMPILE
   ////L1Audio_Msg_DSP_INT( itype );

   if(itype == D2C_DSP_DEAD_INT_ID){
   	  ASSERT(0);
/*#ifndef  L1D_TEST
      ASSERT_DUMP_PARAM_T dump_param;
      dump_param.addr[0] = (kal_uint32)(DPRAM_CPU_base +0x0A0*2);
      dump_param.len[0]  = 70*2;
      dump_param.addr[1] = (kal_uint32)(DPRAM2_CPU_base+0x130*2);
      dump_param.len[1]  = 180*2;
      dump_param.addr[2] = 0;    //End of dump param
      //EXT_ASSERT_DUMP(0, 0x20060622, 0, 0, &dump_param);
      EXT_ASSERT_DUMP(0, &dump_param);
#else
      extern void  L1DTest_AssertFail(void);
      L1DTest_AssertFail();
#endif*/
   }

   from_sph = SAL_DSPINT_Resolve(itype, &sph_int);//the itype should be the real one sent directly from DSP

   L1Audio_Msg_DSP_D2C_SPEECH_INT(L1AUDIO_Str_Bool(from_sph), (sph_int >> 16), sph_int);
	
	if(from_sph) {
		
		kal_int16 i;
		for( i=1; i< SAL_DSPINT_PRIO_MAX; i++) {
			if(sph_int & (1 << i)) {
				L1Audio_TrigD2CHisr(DP_D2C_INT_MAPPING_BASIC+i); // please reference to 
				dsp_ok |= true;
			}
		}
		/*
		// original mapping
      if(sph_int & SAL_DSPINT_ID_REC_VM){ // vm record
	  		L1Audio_TrigD2CHisr(DP_D2C_VM_REC_INT);
         dsp_ok |= true;
      }

		if(sph_int & SAL_DSPINT_ID_REC_PCM){ // pcm record
	  		L1Audio_TrigD2CHisr(DP_D2C_PCM_REC_INT);
         dsp_ok |= true;
      }
	  
      if(sph_int & SAL_DSPINT_ID_PNW_DL){ // pnw
			 L1Audio_TrigD2CHisr(DP_D2C_PCM_EX_DL); // DP_D2C_PCM_EX_DL, pcmNway
         dsp_ok |= true;
      }
      if(sph_int & SAL_DSPINT_ID_DACA_DL){ // data card
         L1Audio_TrigD2CHisr(DP_D2C_DACA_REQ_DL); // data card
         dsp_ok |= true;
      }
      if(sph_int & SAL_DSPINT_ID_3G_DL){ // 3g dl
         //L1SP_D2C_LISR(DP_D2C_3G_DONE_DL);//Don't trigger LISR here. 3G driver will trigger HISR by it's timing
         dsp_ok |= true;
      }
      if(sph_int & SAL_DSPINT_ID_BGS){ // background sound
         L1Audio_TrigD2CHisr(D2C_SOUND_EFFECT_INT_ID); // background sound, SND_EFFECT_MAGIC_NO
         dsp_ok |= true;
      }
      if(sph_int & SAL_DSPINT_ID_AVBT){ //AVBT
         L1Audio_TrigD2CHisr(D2C_AUDIO_VIA_BT_ID);
         dsp_ok |= true;
      }

      if(sph_int & SAL_DSPINT_ID_REC_EPL){
         L1Audio_TrigD2CHisr(DP_D2C_VMEPL_REC_INT); // call record pcm, call record vm
         dsp_ok |= true;
      }
      if(sph_int & SAL_DSPINT_ID_PNW_UL){
         L1Audio_TrigD2CHisr(DP_D2C_PCM_EX_UL); // pcmnway ul
         dsp_ok |= true;
      }
      if(sph_int & SAL_DSPINT_ID_DACA_UL){
         L1Audio_TrigD2CHisr(DP_D2C_DACA_REQ_UL); // data card
         dsp_ok |= true;
      }
      if(sph_int & SAL_DSPINT_ID_3G_UL){
         L1Audio_TrigD2CHisr(DP_D2C_3G_DONE_UL); // 3g
         dsp_ok |= true;
      }
	 */
	 
      if(0 != sph_int){//After DSP send D2C and turn on bit in DP_D2C_SPEECH_UL_INT, but  MCU doesnt  receive D2C. Handover causes VBIReset which will clean DP_D2C_SPEECH_UL_INT
         if (!dsp_ok) {            
            ASSERT(0);            
         }
      }else{
	   	////L1Audio_Msg_DSP_D2C_SPEECH_INT_SKIP((sph_int >> 16), sph_int);
      }
	  
	// if(from_sph)  
		return;
   } 

   l1audio.media_flag = itype;
   kal_activate_hisr_index(L1AUDIO_HISR);
}

#if 1
void L1Audio_ActivateHisrHandler(kal_uint16 magic_no, void *userData)
{
   uint32 I;
   
   for( I = 0; I < MAX_HISR_HANDLER; I++ ) {
      if( magic_no == l1audio.hisrMagicNo[I] ) {
         l1audio.hisrMagicFlag |= (1<<I);
         l1audio.hisrUserData[I] = userData;
      }
   }
   
   if(l1audio.hisrMagicFlag != 0)
      kal_activate_hisr_index(L1AUDIO_HISR);
}
#endif //#if 0

void L1Audio_HookHisrHandler( kal_uint16 magic_no, L1Audio_EventHandler handler, void *userData )
{
   int32 I;
   for( I = 0; I < MAX_HISR_HANDLER; I++ ) {
      if( l1audio.hisrMagicNo[I] == 0 ) {
         l1audio.hisrMagicNo[I] = magic_no;
         l1audio.hisrHandler[I] = handler;
         l1audio.hisrUserData[I] = userData;
         break;
      }
   }
   ASSERT_REBOOT( I != MAX_HISR_HANDLER );
}

void L1Audio_UnhookHisrHandler( kal_uint16 magic_no )
{
   int32 I;
   for( I = 0; I < MAX_HISR_HANDLER; I++ ) {
      if( l1audio.hisrMagicNo[I] == magic_no ) {
         l1audio.hisrMagicNo[I] = 0;
         break;
      }
   }
   ASSERT_REBOOT( I != MAX_HISR_HANDLER );
}

void L1Audio_SetDebugInfo( kal_uint16 debug_info[NUM_DEBUG_INFO])
{
   memcpy(l1audio.debug_info, debug_info, NUM_DEBUG_INFO*sizeof(uint16));
   memcpy((void *)(SAL_EMP_DebugInfo_GetBuf()), debug_info, NUM_DEBUG_INFO*sizeof(uint16));
}

void L1Audio_SetDebugInfoN( kal_uint16 index, kal_uint16 debug_info )
{
   l1audio.debug_info[index] = debug_info;
   *(SAL_EMP_DebugInfo_GetBuf() + index) = debug_info;
}

kal_uint16 L1Audio_GetDebugInfo( kal_uint8 index )
{
   ASSERT( index < NUM_DEBUG_INFO );
   return l1audio.debug_info[index];
}

/* ------------------------------------------------------------------------------ */
/*  Debug functions used to verify the data written to DSP                        */
/* ------------------------------------------------------------------------------ */
#if VERIFY_DATA_TO_DSP
#include   "fat_fs.h"
kal_uint8  bDSPBuffer[8192];
kal_uint16 uDSPBufferRead;
kal_uint16 uDSPBufferWrite;
kal_uint32 uDSPBufferSize;
kal_uint16 fname[12] = { 'E', ':', '\\', 'D', 'A', 'T', 'A', '.', 'D', 'A', 'T', 0x00 };
FS_HANDLE  fs_handle = 0;

void VERIFY_DATA_TO_DSP_START( void )
{
   if( fs_handle )
      FS_Close( fs_handle );
   fs_handle = FS_Open( (const kal_wchar*)fname, FS_CREATE_ALWAYS );
   ASSERT( fs_handle > 0 );
   uDSPBufferSize = 8192;
   uDSPBufferRead = 0;
   uDSPBufferWrite = 0;
}

void VERIFY_DATA_TO_DSP_RESUME( void )
{
   kal_uint32 uFileSize;
   kal_int32  ret;
   fs_handle = FS_Open( (const kal_wchar*)fname, FS_READ_WRITE|FS_CREATE );
   ASSERT( fs_handle > 0 );
   if(FS_GetFileSize(fs_handle, &uFileSize) < 0)
     ASSERT(0);
   if(FS_Seek(fs_handle, uFileSize, FS_FILE_BEGIN) < 0)
     ASSERT(0);
   uDSPBufferSize = 8192;
}

void VERIFY_DATA_TO_DSP_STOP( void )
{
   if( fs_handle )
   {
      if (FS_Close( fs_handle ) != 0)
         ASSERT(0);
      fs_handle = 0;
   }
}

void VERIFY_DATA_TO_DSP_WRITE_DATA( const kal_uint16 *buf, int32 len )
{
   kal_uint32 uDSPBufferFree;
   if( uDSPBufferWrite < uDSPBufferRead )
   {  /// DDDDWxxxxxxxRDD
      uDSPBufferFree = uDSPBufferRead - uDSPBufferWrite - 1;
      ASSERT( len*2 <= uDSPBufferFree );
      memcpy(bDSPBuffer+uDSPBufferWrite, buf, len*2);
      uDSPBufferWrite += len*2;
   }
   else
   {  /// xxxRDDDDDDWxxxx
      kal_uint32 free_1, free_2, write_count;
      free_1 = uDSPBufferSize - uDSPBufferWrite;
      free_2 = uDSPBufferRead - 1;
      uDSPBufferFree = free_1 + free_2;
      ASSERT( len*2 <= uDSPBufferFree );
      write_count = ( len*2 > free_1 )? free_1 : len*2;
      memcpy(bDSPBuffer+uDSPBufferWrite, buf, write_count);
      uDSPBufferWrite += write_count;
      if( uDSPBufferWrite==uDSPBufferSize )
         uDSPBufferWrite = 0;
      write_count = len*2 - write_count;
      if( write_count )
         memcpy(bDSPBuffer+uDSPBufferWrite, buf, write_count);
      uDSPBufferWrite += write_count;
   }
}

void VERIFY_DATA_TO_DSP_SAVE_DATA( void )
{
   if( fs_handle != 0 && uDSPBufferRead != uDSPBufferWrite )
   {
      kal_uint32 uDSPBufferUsed;
      kal_uint32 uDataSaved;
      if( uDSPBufferRead < uDSPBufferWrite )
      {  /// xxxRDDDDDDWxxxx
         uDSPBufferUsed = uDSPBufferWrite - uDSPBufferRead;
         FS_Write( fs_handle, bDSPBuffer+uDSPBufferRead, uDSPBufferUsed, &uDataSaved );
         ASSERT( uDSPBufferUsed == uDataSaved );
         uDSPBufferRead += uDataSaved;
      }
      else
      {  /// DDDDWxxxxxxxRDD
         kal_uint32 used_1, used_2, write_count;
         used_1 = uDSPBufferSize - uDSPBufferRead;
         FS_Write( fs_handle, bDSPBuffer+uDSPBufferRead, used_1, &uDataSaved );
         ASSERT( used_1 == uDataSaved );
         used_2 = uDSPBufferWrite;
         FS_Write( fs_handle, bDSPBuffer, used_2, &uDataSaved );
         ASSERT( used_2 == uDataSaved );
         uDSPBufferRead = uDataSaved;
      }
   }
}
#endif

/* ------------------------------------------------------------------------------ */
/*  L1Audio Task                                                                  */
/* ------------------------------------------------------------------------------ */

#ifndef TK6291_FAKE_COMPILE
extern unsigned short L1D_Audio_ChkDspInitDone();
#endif //#ifndef TK6291_FAKE_COMPILE

#ifdef __DHL_MODULE__
void tst_dummy_callback(const kal_uint8* pData, kal_uint32 nLen){
}	
#endif

kal_enhmutexid sp_handover_mutex; //just for 4G and 4G
#if defined(__VOLTE_SUPPORT__)
kal_enhmutexid sp4g_dl_mutex;
kal_enhmutexid sp4g_ul_mutex;
uint32 g_retrieved_events;
#endif

kal_enhmutexid sp_cc_mutex;

#define  DSP_DSP_EXCEPTION_ID             0x003E
#define  DSP_MPU_VIOLATION                0x003F

void *CUIF_U2C_ULTail_ISR(CUIF_Mask_t* mask)
{
	 L1SP_D2C_LISR( DSP_IID_SPEECH_UL_ID );
	 CUIF_SPEECH_WAKEUP_EOI();
	 return NULL;
}

void *CUIF_U2C_DLTail_ISR(CUIF_Mask_t* mask)
{
	 L1SP_D2C_LISR( DSP_IID_SPEECH_DL_ID );
	 CUIF_SPEECH_WAKEUP_EOI();
	 return NULL;
}

void *CUIF_U2C_ULHead_ISR(CUIF_Mask_t* mask)
{
	 L1SP_D2C_LISR( DSP_IID_SPEECH_UL_ID2 );
	 CUIF_SPEECH_WAKEUP_EOI();
	 return NULL;
}

void *CUIF_U2C_DLHead_ISR(CUIF_Mask_t* mask)
{
	 L1SP_D2C_LISR( DSP_IID_SPEECH_DL_ID2 );
	 CUIF_SPEECH_WAKEUP_EOI();
	 return NULL;
}

bool L1Audio_IsInitialized(){
   return l1audio.is_Initialized;
}

void L1Audio_LISR_Init()
{
    l1audio.lisr_lockId = kal_create_spinlock("LISR_LOCK");
}
void L1Audio_BootDSPSpeech()
{
    uint32 I = 0 ;	
	  //bool is_default_user;
	  //turn on power/clock API
	  MD_TOPSM_PWR_SW_Control(USIP0_PWR, KAL_TRUE);
	  
	  firstboot_activate(DSP_CONTROL_USIP1_SPEECH, DSP_CTRL_USIP_SPEECH);

    //is_default_user = is_myself_duty_rat(DSP_CTRL_USIP_SPEECH_SS1_INIT, DSP_CTRL_USIP_SPEECH);

    while( uSIP_ACTIVEDONE != dsp_uSIP_speech_active_done_check(DSP_CTRL_USIP_SPEECH)){
	    kal_sleep_task(AUD_1TICK(1));
	    ASSERT( ++I < 3 );
	  }
}

void L1Audio_UnBootDSPSpeech()
{
	  uint32 I = 0 ;
	  //turn off power/clock API 
	  dsp_uSIP_speech_deactivate(DSP_CTRL_USIP_SPEECH);
	  while( uSIP_DEACTIVEDONE != dsp_uSIP_speech_deactive_done_check(DSP_CTRL_USIP_SPEECH)){
		   kal_sleep_task(AUD_1TICK(1));
		   ASSERT( ++I < 5 );
		}		  
		MD_TOPSM_PWR_SW_Control(USIP0_PWR, KAL_FALSE);
}

void L1Audio_Task(unsigned argc, void *argv)
{
   uint32 retrieved_events;
   uint32 I;
   kal_uint16 initaud_id;

#if defined(__SMART_PHONE_MODEM__)
   SpcIO_shmInit();
#endif


   /*-----------------------------*/
   /* enable FD216 DSP event (pcore) */
   /*-----------------------------*/
#ifdef __AUDIO_TASK_DISABLE__
   return;
#endif
	 L1Audio_BootDSPSpeech();
	 L1Audio_UnBootDSPSpeech();
	    
   IRQSensitivity(IRQ_USIP0_0_CODE,  LEVEL_SENSITIVE);
   //IRQ_Register_LISR(IRQ_USIP0_0_CODE, L1Audio_DSP2MCU_Interrupt/*L1Audio_DSP2MCU_Interrupt*/, "L1Audio_DSP2CPU" );
   IRQUnmask(IRQ_USIP0_0_CODE);
   
   
#ifdef __DHL_MODULE__
   tst_vc_register_channel(TVCI_VM_LOGGING, tst_dummy_callback);
#endif

   sp_cc_mutex = kal_create_enh_mutex( "SP_CC_MUTEX" );
   SP_CC_Init();

   sp_handover_mutex = kal_create_enh_mutex( "SP_HANDOVER_ENH_MUTEX" );
#if defined(__VOLTE_SUPPORT__)
   sp4g_dl_mutex = kal_create_enh_mutex( "SP4G_DL_MUTEX" );
   sp4g_ul_mutex = kal_create_enh_mutex( "SP4G_UL_MUTEX" );
#endif
   l1audio.aud_events = kal_create_event_group("L1Audio");

      
#if ( defined( __CENTRALIZED_SLEEP_MANAGER__ ) && defined(MTK_SLEEP_ENABLE) && !defined(__AUDIO_POWERON_RESET_DSP__) )
#ifndef TK6291_FAKE_COMPILE
   l1audio.md2g_pdn_handle = L1D_MD2G_PWD_GetHandle();
   l1audio.l1sm_handle = L1SM_IntGetHandle();
#endif //#ifndef TK6291_FAKE_COMPILE
#endif

   l1audio.isD2MIntAvalibaleUnderSleep = KAL_TRUE;

   l1audio.sleppModeLocker        = 0;
   l1audio.dspUser  = 0;
   l1audio.dsp_slow_idle_counter = 0;
   l1audio.event_flag   = 0;
   l1audio.id_flag      = 0;
   l1audio.media_flag   = 0;
   l1audio.sema = kal_create_sem( "Aud_Sema", 1 );  

   l1audio.hisrMagicFlag = 0;
   for( I = 0; I < MAX_HISR_HANDLER; I++ )
      l1audio.hisrMagicNo[I] = 0;

   cc_L1D_Audio_ChkDspInitDone();
   
#if ( defined( __CENTRALIZED_SLEEP_MANAGER__ )&& defined( MTK_SLEEP_ENABLE ))
   initaud_id = L1Audio_GetAudioID();
   L1Audio_SetFlag( initaud_id );
#endif   
   DSP_DynamicDownload_Init();

   AM_Init();
   AFE_Init();
   spGain_Init();
#if defined(__AUDIO_POWERON_RESET_DSP__)
#if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
#ifndef TK6291_NO_SPEECH_HW
/* under construction !*/
#endif //#ifndef TK6291_NO_SPEECH_HW
/* under construction !*/
/* under construction !*/
#endif
#endif

   L1SP_Init();

#if defined(__SMART_PHONE_MODEM__)
   EXT_BGSND_init();
#endif
	
#ifdef __CTM_SUPPORT__
   l1ctm_init();
#endif

#if defined(__DATA_CARD_SPEECH__)
   SP_Strm_Init();
#endif
   memset( &(l1audio.debug_info), 0, sizeof(l1audio.debug_info) );


#if defined(__CVSD_CODEC_SUPPORT__) 
   BT_SCO_Init();
#endif

	VM_Init();
  DACA_Init();
  pcmEx_Init();
  RAWPcmRec_Init();
  Extcodec_Init();
  L1Audio_LISR_Init();
  SP_DSPTone_Init();
  PcmMixer_Init();
  PcmMixer3_Init();

#if ( defined( __CENTRALIZED_SLEEP_MANAGER__ )&& defined( MTK_SLEEP_ENABLE ))
   L1Audio_ClearFlag( initaud_id );
   L1Audio_FreeAudioID( initaud_id );
#endif

#if defined(MT6595) && (MDAFE_DVT_CASE1 || MDAFE_DVT_CASE2 || MDAFE_DVT_CASE3 || APAUDSYS_DVT_8K || APAUDSYS_DVT_16K || APAUDSYS_DVT_32K)
		kal_sleep_task( AUD_1TICK(3) );
		L1SP_Speech_On(1);
#endif
   l1audio.is_Initialized = true;
   while( 1 ) {
#if VERIFY_DATA_TO_DSP
      VERIFY_DATA_TO_DSP_SAVE_DATA();
#endif
      kal_retrieve_eg_events(l1audio.aud_events,0xFFFF,KAL_OR_CONSUME,&retrieved_events,KAL_SUSPEND);
      l1audio.retrieved_events = retrieved_events;
#ifndef TK6291_FAKE_COMPILE
      l1audio.events_l1FN = 0;//L1I_GetTimeStamp();
#else //#ifndef TK6291_FAKE_COMPILE
      l1audio.events_l1FN = 0;
#endif //#ifndef TK6291_FAKE_COMPILE
      kal_runtime_affinity_to_current_vpe();
      for( I = 0; I < MAX_AUDIO_FUNCTIONS; I++ ) {
         if ( l1audio.retrieved_events & (1<<I) ) {
            l1audio.evHandler[I]( l1audio.evData[I] );
         }
      }
      kal_runtime_affinity_resume();
      // if( (l1audio.sleppModeLocker == 0))
      //   SLEEP_UNLOCK();
   }
}


uint32 L1Audio_GetEventGroup( void )
{
   uint32 retrieved_events;
   kal_retrieve_eg_events( l1audio.aud_events, 0xFFFF, KAL_OR_CONSUME, &retrieved_events, KAL_SUSPEND );
   return retrieved_events;
}

void L1Audio_ExeEventHandler( uint32 event )
{
   ASSERT_REBOOT( event < MAX_AUDIO_FUNCTIONS );
   l1audio.evHandler[event]( l1audio.evData[event] );
}

void L1Audio_ResetDevice(void)
{
   AFE_Init();
}
/* ------------------------------------------------------------------------------ */

static char *_get_next_arg(char **ppstring)
{
   char *pstring = *ppstring, *pstring_t;
   kal_uint8 ch;

   if( *pstring=='\0' )
      return NULL;

   while(1)
   { // find start
      ch = *pstring;
      if( ch!=' ' && ch!='\t' )
         break;
      pstring++;
   }

   pstring_t = pstring;

   while(1)
   {
      ch = *pstring;
      if( ch=='\0' )
         break;
      else if( ch==' ' || ch=='\t' )
      {
         *pstring = '\0';
         pstring++;
         break;
      }
      pstring++;
   }

   *ppstring = (char *)pstring;

   return pstring_t;
}

static void dispatcher(char **ppstring, int (*entry_main)(int argc, char **argv))
{
   int argc = 0;
   char *argv[16];

   while(1)
   {
      char *args = _get_next_arg( ppstring );

      if( args==NULL )
      {
         entry_main( argc, argv );
         break;
      }
      else if( strcmp( args, "|" )==0 )
      {
         argv[argc] = NULL;
         entry_main( argc, argv );
         argc = 0;
      }
      else
         argv[argc++] = args;
   }
}

void l1audio_console(kal_uint8 index, kal_char *string)
{
   int (*entry_main)(int argc, char **argv);
   char *pstring = (char *)string;

   entry_main = NULL;
   switch(index)
   {
      case 99: /* VoRTP unit test */
      {
         break;
      }
      default:
         break;
   }
   if( entry_main!=NULL )
      dispatcher(&pstring, entry_main);
}

static kal_uint32 is_fake_4g = 0;
kal_uint32 get_is_fake_4g(void)
{
   return(is_fake_4g);
}
#ifdef __FAKE_3G_LOOPBACK__
static kal_uint32 is_fake_3g = 0;
kal_uint32 get_is_fake_3g(void)
{
   return(is_fake_3g);
}
#endif
void l1audio_console_handler(kal_char *string)
{
   //(void)string; //just for integrating MCU TONE
   //int ii=atoi(string);
#if defined(__VOLTE_SUPPORT__)
   static kal_uint32 temp_RAB_ID = 0;
#endif //#if defined(__VOLTE_SUPPORT__)

   if(strcmp(string, "0")==0) {
 		  //void Spc_SpeechOn( kal_uint8 RAT_Mode );
	    //Spc_SpeechOn( 0 );
  		void L1SP_Speech_On( uint8 RAT_Mode );
   		L1SP_Speech_On(0);
   }
   else if(strcmp(string, "1")==0) {
    	//void Spc_SpeechOff( void );
    	//Spc_SpeechOff();
    	void L1SP_Speech_Off( void );
    	L1SP_Speech_Off();
   }
   else if(strcmp(string, "2")==0) {
				void cc_2G_Call_Open(kal_uint32 enc_mod, kal_uint32 dec_mod, kal_uint32 sub_channel);
				cc_2G_Call_Open(2, 2, 1);
   }
   else if(strcmp(string, "3")==0) {

				void cc_2G_Call_Close(kal_uint32 dsp_end);
				cc_2G_Call_Close(KAL_TRUE);
   }
#if defined(__VOLTE_SUPPORT__)
   else if(strcmp(string, "4")==0) {
      kal_uint32 SP4G_PSR_Link_Est( SP4G_Codec default_speech_codec );
      void SP4G_SetDTX(kal_bool on);

      if(temp_RAB_ID == 0)
      {
         SP4G_SetDTX(KAL_TRUE);
         is_fake_4g = 1;
         
         temp_RAB_ID = SP4G_PSR_Link_Est( SP4G_CODEC_AMR_12_2 );
         kal_prompt_trace(MOD_L1SP, "[l1audio_console_handler] Fake 4G AMR");
      }
   }
   else if(strcmp(string, "5")==0) {
      kal_uint32 SP4G_PSR_Link_Est( SP4G_Codec default_speech_codec );
      void SP4G_SetDTX(kal_bool on);
     
      if(temp_RAB_ID == 0)
      {
         SP4G_SetDTX(KAL_TRUE);
         is_fake_4g = 1;
         temp_RAB_ID = SP4G_PSR_Link_Est( SP4G_CODEC_WBAMR_23_85 );
         kal_prompt_trace(MOD_L1SP, "[l1audio_console_handler] Fake 4G AMR-WB");
      }
   }
#if defined(__EVS_CODEC_SUPPORT__)
   else if(strcmp(string, "6")==0) {
      void SP4G_SetDTX(kal_bool on);
      kal_uint32 SP4G_PSR_Link_Est( SP4G_Codec default_speech_codec );
      void sp4g_EVS_loopback_SetEVSEncCAPara(void);

      if(temp_RAB_ID == 0)
      {
         SP4G_SetDTX(KAL_TRUE);
         sp4g_EVS_loopback_SetEVSEncCAPara();
         is_fake_4g = 1;
         temp_RAB_ID = SP4G_PSR_Link_Est( SP4G_CODEC_EVS_32K_009_6 );
         kal_prompt_trace(MOD_L1SP, "[l1audio_console_handler] Fake 4G SP4G_CODEC_EVS_32K_009_6");
      }
   }
#endif //#if defined(__EVS_CODEC_SUPPORT__)
   else if(strcmp(string, "7")==0) {
         void SP4G_PSR_Link_Deest(kal_uint32 id);
        
         if(temp_RAB_ID != 0)
         {
            SP4G_PSR_Link_Deest(temp_RAB_ID);
            temp_RAB_ID = 0;
            is_fake_4g = 0;
            kal_prompt_trace(MOD_L1SP, "[l1audio_console_handler] Fake 4G close");
         }
   }
   else if(strcmp(string, "8")==0) {
         void SP4G_PSR_UL_SetFrameType(SP4G_Codec codec);
         //if(temp_RAB_ID != 0)
         {
            SP4G_PSR_UL_SetFrameType(SP4G_CODEC_AMR_6_7);
            kal_prompt_trace(MOD_L1SP, "[l1audio_console_handler] Fake 4G set code to SP4G_CODEC_AMR_6_7");
         }
   }
   else if(strcmp(string, "9")==0) {
         void SP4G_PSR_UL_SetFrameType(SP4G_Codec codec);
         //if(temp_RAB_ID != 0)
         {
            SP4G_PSR_UL_SetFrameType(SP4G_CODEC_AMR_10_2);
            kal_prompt_trace(MOD_L1SP, "[l1audio_console_handler] Fake 4G set code to SP4G_CODEC_AMR_10_2");
         }
   }
   else if(strcmp(string, "10")==0) {
         void SP4G_PSR_UL_SetFrameType(SP4G_Codec codec);
         //if(temp_RAB_ID != 0)
         {
            SP4G_PSR_UL_SetFrameType(SP4G_CODEC_WBAMR_6_6);
            kal_prompt_trace(MOD_L1SP, "[l1audio_console_handler] Fake 4G set code to SP4G_CODEC_WBAMR_6_6");
         }
   }
   else if(strcmp(string, "11")==0) {
         void SP4G_PSR_UL_SetFrameType(SP4G_Codec codec);
         //if(temp_RAB_ID != 0)
         {
            SP4G_PSR_UL_SetFrameType(SP4G_CODEC_WBAMR_18_25);
            kal_prompt_trace(MOD_L1SP, "[l1audio_console_handler] Fake 4G set code to SP4G_CODEC_WBAMR_18_25");
         }
   }
#if defined(__EVS_CODEC_SUPPORT__)
   else if(strcmp(string, "12")==0) {
         void SP4G_PSR_UL_SetFrameType(SP4G_Codec codec);
         //if(temp_RAB_ID != 0)
         {
            SP4G_PSR_UL_SetFrameType(SP4G_CODEC_EVS_32K_013_2);
            kal_prompt_trace(MOD_L1SP, "[l1audio_console_handler] Fake 4G set code to SP4G_CODEC_EVS_32K_013_2");
         }
   }
   else if(strcmp(string, "13")==0) {
         void SP4G_PSR_UL_SetFrameType(SP4G_Codec codec);
         //if(temp_RAB_ID != 0)
         {
            SP4G_PSR_UL_SetFrameType(SP4G_CODEC_EVS_16K_008_0);
            kal_prompt_trace(MOD_L1SP, "[l1audio_console_handler] Fake 4G set code to SP4G_CODEC_EVS_16K_008_0");
         }
   }
   else if(strcmp(string, "14")==0) {
         void SP4G_PSR_UL_SetFrameType(SP4G_Codec codec);
         //if(temp_RAB_ID != 0)
         {
            SP4G_PSR_UL_SetFrameType(SP4G_CODEC_EVS_AWB_23_85);
            kal_prompt_trace(MOD_L1SP, "[l1audio_console_handler] Fake 4G set code to SP4G_CODEC_EVS_AWB_23_85");
         }
   }
#endif //#if defined(__EVS_CODEC_SUPPORT__)
#if defined(__G_CODEC_SUPPORT__)
	 else if(strcmp(string, "15")==0) {
         void SP4G_Set_G711Parameters(kal_int32 law, kal_int32 dec_init_CNG_enable);
         kal_uint32 SP4G_PSR_Link_Est( SP4G_Codec default_speech_codec );

         {
            SP4G_Set_G711Parameters(2, 0); 
        		SP4G_PSR_Link_Est(SP4G_CODEC_G711);
            is_fake_4g = 1;
            kal_prompt_trace(MOD_L1SP, "[l1audio_console_handler] Fake 4G set code to SP4G_CODEC_G711");
         }
   }   
#endif
#endif //#if defined(__VOLTE_SUPPORT__)
   else if(strcmp(string, "TestMode_Start")==0) 
   {
  	    void SP_L4C_SetEvent_Execute(L1SP_L4C_Event event, L1SP_L4C_Event_Mode mode); 
        SP_L4C_SetEvent_Execute(L1SP_L4C_ESPEECH_1, L1SP_L4C_EVENT_CS); 
        void L1SP_Speech_On( uint8 RAT_Mode );
   		L1SP_Speech_On(0);
   }
   else if(strcmp(string, "TestMode_End")==0) {
    	void L1SP_Speech_Off( void );
    	void SP_L4C_SetEvent_Execute(L1SP_L4C_Event event, L1SP_L4C_Event_Mode mode); 
      SP_L4C_SetEvent_Execute(L1SP_L4C_ESPEECH_0, L1SP_L4C_EVENT_CS);   
    	L1SP_Speech_Off();
   }
   else if(strcmp(string, "TestMode_EVS_Start")==0) 
   {
        SAL_TestMode_Config(1, SAL_DSP_TESTMODE_4G_EVS);
	void SP_L4C_SetEvent_Execute(L1SP_L4C_Event event, L1SP_L4C_Event_Mode mode); 
        SP_L4C_SetEvent_Execute(L1SP_L4C_ESPEECH_1, L1SP_L4C_EVENT_CS); 
        void L1SP_Speech_On( uint8 RAT_Mode );
   	L1SP_Speech_On(0);
   }
   else if(strcmp(string, "TestMode_AWB_Start")==0) 
   {
        SAL_TestMode_Config(1, SAL_DSP_TESTMODE_3G_AWB);
	void SP_L4C_SetEvent_Execute(L1SP_L4C_Event event, L1SP_L4C_Event_Mode mode); 
        SP_L4C_SetEvent_Execute(L1SP_L4C_ESPEECH_1, L1SP_L4C_EVENT_CS); 
        void L1SP_Speech_On( uint8 RAT_Mode );
   	L1SP_Speech_On(0);
   }
   else if(strcmp(string, "SPV_AWB_PATTERN")==0) 
   {
        SAL_TestMode_Config(2, SAL_DSP_TESTMODE_3G_AWB);
   }
   else if(strcmp(string, "TestMode_2G_FR")==0) {
        SAL_TestMode_Config(1, SAL_DSP_TESTMODE_2G_FR);
   }
   else if(strcmp(string, "TestMode_2G_HR")==0) {
        SAL_TestMode_Config(1, SAL_DSP_TESTMODE_2G_HR);
   }
   else if(strcmp(string, "TestMode_2G_EFR")==0) {
        SAL_TestMode_Config(1, SAL_DSP_TESTMODE_2G_EFR);
   }
   else if(strcmp(string, "TestMode_2G_AMR")==0) {
        SAL_TestMode_Config(1, SAL_DSP_TESTMODE_2G_AMR);
   }
   else if(strcmp(string, "TestMode_2G_AWB")==0) {
        SAL_TestMode_Config(1, SAL_DSP_TESTMODE_2G_AWB);
   }
   else if(strcmp(string, "TestMode_3G_AMR")==0) {
        SAL_TestMode_Config(1, SAL_DSP_TESTMODE_3G_AMR);
   }
   else if(strcmp(string, "TestMode_3G_AWB")==0) {
        SAL_TestMode_Config(1, SAL_DSP_TESTMODE_3G_AWB);
   }
   else if(strcmp(string, "TestMode_4G_AMR")==0) {
        SAL_TestMode_Config(1, SAL_DSP_TESTMODE_4G_AMR);
   }
   else if(strcmp(string, "TestMode_4G_AWB")==0) {
        SAL_TestMode_Config(1, SAL_DSP_TESTMODE_4G_AWB);
   }
   else if(strcmp(string, "TestMode_4G_EVS")==0) {
        SAL_TestMode_Config(1, SAL_DSP_TESTMODE_4G_EVS);
   }
   else if(strcmp(string, "TestMode_C2K_EVA")==0) {
        SAL_TestMode_Config(1, SAL_DSP_TESTMODE_C2K_EVRCA);
   }
   else if(strcmp(string, "TestMode_C2K_EVB")==0) {
        SAL_TestMode_Config(1, SAL_DSP_TESTMODE_C2K_EVRCB);
   }
   else if(strcmp(string, "PROFILE_SSP_AMR")==0) {
        SAL_TestMode_Config(1, SAL_DSP_TESTMODE_3G_AMR);
   }
   else if(strcmp(string, "PROFILE_SSP_AWB")==0) {
        SAL_TestMode_Config(1, SAL_DSP_TESTMODE_3G_AWB);
   }
   else if(strcmp(string, "PROFILE_SSP_EVB")==0) {
        SAL_TestMode_Config(1, SAL_DSP_TESTMODE_C2K_EVRCB);
   }
   else if(strcmp(string, "DSP_DEBUG_MODE")==0) {        
        void SALI_DebugMode_Config(uint16 DebugMode);
        SALI_DebugMode_Config(SAL_DSP_DBGMODE_SSP_PCM_U2D_AFE);
        kal_prompt_trace(MOD_L1SP, "[AFE_DebugMode] On");
   }
   else if(strcmp(string, "U0D0")==0) {   // UL: 0~5 (6CH), DL: 0~1 (2CH)  
        void SAL_TestMode_AFEDVT_Config(uint16 UL_Ch, uint16 DL_Ch);
        //SAL_TestMode_AFEDVT_Config(SAL_DSP_TESTMODE_AFEDVT_UL_CH0, SAL_DSP_TESTMODE_AFEDVT_DL_CH0);
        SAL_TestMode_AFEDVT_Config(0, 0);
        kal_prompt_trace(MOD_L1SP, "[AFE_DebugMode] UL CH: 0, DL CH: 0");
   }
   else if(strcmp(string, "U1D0")==0) {   // UL: 0~5 (6CH), DL: 0~1 (2CH)  
        void SAL_TestMode_AFEDVT_Config(uint16 UL_Ch, uint16 DL_Ch);        
        SAL_TestMode_AFEDVT_Config(1, 0);
        kal_prompt_trace(MOD_L1SP, "[AFE_DebugMode] UL CH: 1, DL CH: 0");
   }
   else if(strcmp(string, "U2D0")==0) {   // UL: 0~5 (6CH), DL: 0~1 (2CH)  
        void SAL_TestMode_AFEDVT_Config(uint16 UL_Ch, uint16 DL_Ch);        
        SAL_TestMode_AFEDVT_Config(2, 0);
        kal_prompt_trace(MOD_L1SP, "[AFE_DebugMode] UL CH: 2, DL CH: 0");
   }
   else if(strcmp(string, "U3D0")==0) {   // UL: 0~5 (6CH), DL: 0~1 (2CH)  
        void SAL_TestMode_AFEDVT_Config(uint16 UL_Ch, uint16 DL_Ch);        
        SAL_TestMode_AFEDVT_Config(3, 0);
        kal_prompt_trace(MOD_L1SP, "[AFE_DebugMode] UL CH: 3, DL CH: 0");
   }
   else if(strcmp(string, "U4D0")==0) {   // UL: 0~5 (6CH), DL: 0~1 (2CH)  
        void SAL_TestMode_AFEDVT_Config(uint16 UL_Ch, uint16 DL_Ch);        
        SAL_TestMode_AFEDVT_Config(4, 0);
        kal_prompt_trace(MOD_L1SP, "[AFE_DebugMode] UL CH: 4, DL CH: 0");
   }
   else if(strcmp(string, "U5D0")==0) {   // UL: 0~5 (6CH), DL: 0~1 (2CH)  
        void SAL_TestMode_AFEDVT_Config(uint16 UL_Ch, uint16 DL_Ch);        
        SAL_TestMode_AFEDVT_Config(5, 0);
        kal_prompt_trace(MOD_L1SP, "[AFE_DebugMode] UL CH: 5, DL CH: 0");
   }
   else if(strcmp(string, "U0D1")==0) {   // UL: 0~5 (6CH), DL: 0~1 (2CH)  
        void SAL_TestMode_AFEDVT_Config(uint16 UL_Ch, uint16 DL_Ch);        
        SAL_TestMode_AFEDVT_Config(0, 1);
        kal_prompt_trace(MOD_L1SP, "[AFE_DebugMode] UL CH: 0, DL CH: 1");
   }
   else if(strcmp(string, "U1D1")==0) {   // UL: 0~5 (6CH), DL: 0~1 (2CH)  
        void SAL_TestMode_AFEDVT_Config(uint16 UL_Ch, uint16 DL_Ch);        
        SAL_TestMode_AFEDVT_Config(1, 1);
        kal_prompt_trace(MOD_L1SP, "[AFE_DebugMode] UL CH: 1, DL CH: 1");
   }
   else if(strcmp(string, "U2D1")==0) {   // UL: 0~5 (6CH), DL: 0~1 (2CH)  
        void SAL_TestMode_AFEDVT_Config(uint16 UL_Ch, uint16 DL_Ch);        
        SAL_TestMode_AFEDVT_Config(2, 1);
        kal_prompt_trace(MOD_L1SP, "[AFE_DebugMode] UL CH: 2, DL CH: 1");
   }
   else if(strcmp(string, "U3D1")==0) {   // UL: 0~5 (6CH), DL: 0~1 (2CH)  
        void SAL_TestMode_AFEDVT_Config(uint16 UL_Ch, uint16 DL_Ch);        
        SAL_TestMode_AFEDVT_Config(3, 1);
        kal_prompt_trace(MOD_L1SP, "[AFE_DebugMode] UL CH: 3, DL CH: 1");
   }
   else if(strcmp(string, "U4D1")==0) {   // UL: 0~5 (6CH), DL: 0~1 (2CH)  
        void SAL_TestMode_AFEDVT_Config(uint16 UL_Ch, uint16 DL_Ch);        
        SAL_TestMode_AFEDVT_Config(4, 1);
        kal_prompt_trace(MOD_L1SP, "[AFE_DebugMode] UL CH: 4, DL CH: 1");
   }
   else if(strcmp(string, "U5D1")==0) {   // UL: 0~5 (6CH), DL: 0~1 (2CH)  
        void SAL_TestMode_AFEDVT_Config(uint16 UL_Ch, uint16 DL_Ch);        
        SAL_TestMode_AFEDVT_Config(5, 1);
        kal_prompt_trace(MOD_L1SP, "[AFE_DebugMode] UL CH: 5, DL CH: 1");
   }
#ifdef __FAKE_3G_LOOPBACK__
   else if(strcmp(string, "31")==0) {  
    	  //void SP_L4C_SetEvent_Execute(L1SP_L4C_Event event, L1SP_L4C_Event_Mode mode); 
        //SP_L4C_SetEvent_Execute(L1SP_L4C_ESPEECH_1, L1SP_L4C_EVENT_CS);     	 	
   	    SP3G_Rab_Est(0, 0);
   	    is_fake_3g = 1;
   	    kal_prompt_trace(MOD_L1SP, "[l1audio_console_handler] SP3G_Rab_Est");
   }
   else if(strcmp(string, "32")==0) {
   	    SP3G_UL_SetFrameType(0);//0 --> 4.75
   	    kal_prompt_trace(MOD_L1SP, "[l1audio_console_handler] SP3G_UL_SetFrameType");
   }
   else if(strcmp(string, "33")==0) { 
    	  //void SP_L4C_SetEvent_Execute(L1SP_L4C_Event event, L1SP_L4C_Event_Mode mode); 
        //SP_L4C_SetEvent_Execute(L1SP_L4C_ESPEECH_0, L1SP_L4C_EVENT_CS);     	  	    
   	    SP3G_Rab_Deest(); 
   	    is_fake_3g = 0;
   	    kal_prompt_trace(MOD_L1SP, "[l1audio_console_handler] SP3G_Rab_Deest");
   }
   else if(strcmp(string, "41")==0) {
   	    //void L1SP_C2K_Est(int codec);   	    
   	    //L1SP_C2K_Est(SAL_COD_EVRCA); //imply espeech_on in SO_Connect
   	    void SPC2K_ConSSO_Req( uint16 u2SO, uint16 u2MaxEncRate);
   	    SPC2K_ConSSO_Req( IPC_SPCH_SRVC_OPTION3, 0);
   	    kal_prompt_trace(MOD_L1SP, "[l1audio_console_handler] L1SP_C2K_Est");
   }
   else if(strcmp(string, "42")==0) {
   	    void L1SP_C2K_IntraRAT(int codec);
   	    L1SP_C2K_IntraRAT(SAL_COD_EVRCA); 
   	    kal_prompt_trace(MOD_L1SP, "[l1audio_console_handler] L1SP_C2K_IntraRAT");
   }
   else if(strcmp(string, "43")==0) {   	
   	    void SPC2K_DisconSSO_Req( void );
   	    SPC2K_DisconSSO_Req();
   	    //void L1SP_C2K_DeEst( void ); 
   	    //L1SP_C2K_DeEst();//imply espeech_off in SO_DisConnect
   	    kal_prompt_trace(MOD_L1SP, "[l1audio_console_handler] L1SP_C2K_DeEst");
   }
   else if(strcmp(string, "51")==0) {
        void L1SP_TCH_Notify( bool bOn );
        L1SP_TCH_Notify( true );
   	    kal_prompt_trace(MOD_L1SP, "[l1audio_console_handler] L1SP_TCH_Notify( true )");
   }
   else if(strcmp(string, "52")==0) {

   }
   else if(strcmp(string, "53")==0) {   	
        void L1SP_TCH_Notify( bool bOn );
        L1SP_TCH_Notify( false );
   	    kal_prompt_trace(MOD_L1SP, "[l1audio_console_handler] L1SP_TCH_Notify( false )");
   }
   
#endif
   else if(strcmp(string, "60")==0) {
      void  SP4G_PSR_DL_KT_Play(kal_int16 freq1, kal_int16 freq2, kal_int16 duration);
      SP4G_PSR_DL_KT_Play(300, 700, 0x7FFF);
   }
   else if(strcmp(string, "61")==0) {
      void  SP4G_PSR_DL_KT_Stop(void);
      SP4G_PSR_DL_KT_Stop();
   }
   else if(strcmp(string, "62")==0) {
      void  SP4G_PSR_UL_KT_Play(kal_int16 freq1, kal_int16 freq2, kal_int16 duration);
      SP4G_PSR_UL_KT_Play(500, 900, 0x7FFF);
   }
   else if(strcmp(string, "63")==0) {
      void  SP4G_PSR_UL_KT_Stop(void);
      SP4G_PSR_UL_KT_Stop();
   }

/*
   (void)string;
	if(strcmp(string, "speechOn")==0){
		L1SP_Speech_On(0);
	} else if(strcmp(string, "speechOff")==0) {
		L1SP_Speech_Off();
	} else if(strcmp(string, "get2gRF")==0) {
		uint16 L1D_GetRF(uint16 mode);
	   uint16 RF_2G = L1D_GetRF(MML1_RF_2G);
	   ////L1Audio_Msg_L1D_GetRF(RF_2G);
	}
#if defined(__ENABLE_SPEECH_DVT__)
        extern void Speech_DVT_Test_Main(kal_char *string);
        Speech_DVT_Test_Main(string);
#endif // defined(__ENABLE_SPEECH_DVT__)*/
}

/* ----------------------------------------------------------------------------- */
/*  Function ptr prototype [HAL rule]                                            */
/* ----------------------------------------------------------------------------- */
//[MED]
static fp_audio_alloc_aud_mem      audio_alloc_aud_mem = NULL;
static fp_audio_alloc_aud_mem      audio_alloc_aud_mem_cacheable= NULL;
static fp_audio_free_aud_mem       audio_free_aud_mem = NULL;
static fp_send_proc_call_req       send_proc_call_req = NULL;
static fp_send_proc_call_req       send_proc_call_req2 = NULL;
static fp_audio_set_path_volume    audio_set_path_vol = NULL;
static fp_audio_get_active_mode    audio_get_active_mode = NULL;
static fp_get_meta_data_file       audio_get_meta_file = NULL;
static fp_get_meta_data_array      audio_get_meta_array = NULL;

void Audio_MedFuncReg(Media_Func_Reg_Type *func){
      audio_alloc_aud_mem           = (fp_audio_alloc_aud_mem)  func->alloc_mem;
      audio_alloc_aud_mem_cacheable = (fp_audio_alloc_aud_mem)  func->alloc_mem_cacheable;
      audio_free_aud_mem            = (fp_audio_free_aud_mem)   func->free_mem;
      audio_set_path_vol            = (fp_audio_set_path_volume)func->set_path_volume;
      audio_get_active_mode         = (fp_audio_get_active_mode)func->get_active_mode;
      send_proc_call_req            = (fp_send_proc_call_req)   func->send_proc_call;
      send_proc_call_req2           = (fp_send_proc_call_req)   func->send_proc_call2;
      audio_get_meta_file           = (fp_get_meta_data_file)   func->get_meta_file;
      audio_get_meta_array          = (fp_get_meta_data_array)  func->get_meta_array;
}

void *audio_alloc_ext_mem(kal_int32 size, char* file_p, long line_p){
   void *ptr = NULL;
   if (size == 0){
        return NULL;
     }
   ptr = (void*) audio_alloc_aud_mem(size,file_p,line_p);
   if(ptr){
        memset(ptr, 0, size);
   }
   kal_wap_trace(MOD_L1SP, TRACE_INFO, "[AUD][MEM] get buffer from: %s, %d", file_p, line_p);
   return ptr;
}

void *audio_alloc_ext_mem_cacheable(kal_int32 size, char* file_p, long line_p){
   void *ptr = NULL;
   if (size == 0){
        return NULL;
   }
   ptr = (void*) audio_alloc_aud_mem_cacheable(size,file_p,line_p);
   if(ptr){
        memset(ptr, 0, size);
   }
   kal_wap_trace(MOD_L1SP, TRACE_INFO, "[AUD][MEM] get buffer from: %s, %d", file_p, line_p);
   return ptr;
}

void audio_free_ext_mem(void **ptr, char* file_p, long line_p){
   audio_free_aud_mem(ptr,file_p,line_p);
   kal_wap_trace(MOD_L1SP, TRACE_INFO, "[AUD][MEM] free buffer from: %s, %d", file_p, line_p);
}


void L1Audio_InProcCall2(in_proc_call_type func, kal_uint32 func_arg1, void* func_arg2)
{
#ifndef MED_NOT_PRESENT
   send_proc_call_req2(MOD_L1SP, func, func_arg1, func_arg2);
#endif
}

void L1Audio_InProcCall(in_proc_call_type func, kal_uint32 func_arg1, void* func_arg2)
{
//#ifndef MED_NOT_PRESENT
   send_proc_call_req(MOD_L1SP, func, func_arg1, func_arg2);
//#endif
}

void aud_set_volume_internal(kal_uint8 audio_mode){
   audio_set_path_vol(audio_mode);
}

kal_uint8 aud_get_mode_internal(void){
  return audio_get_active_mode();
}



#if defined(__SMART_PHONE_MODEM__)
#include "task_config.h"
#include "ccci.h"

extern void Spc_Init_B4_Scheduling(void);
extern void Spc_Init(void);

extern void SpcIO_Init_B4_Scheduling(void);

extern void SpcIO_A2M_hisr(CCCI_BUFF_T *bufp);
extern void SpcIO_M2A_hisr(CCCI_BUFF_T *bufp);
extern void SpcIO_Init(void);

#endif

/***********************************************************/
/* Export to MED/AUDL task                                 */
/***********************************************************/

kal_bool SP_Drv_Init_Bootup(void)
{
#if defined (__SMART_PHONE_MODEM__)
   kal_int32 ret;
   ret = ccci_owner_init(CCCI_PCM_CHANNEL_ACK, kal_get_task_by_moduleID(MOD_MED), SpcIO_A2M_hisr);
   if (ret != CCCI_SUCCESS) {
       ASSERT(0);
   }
   ret = ccci_owner_init(CCCI_PCM_CHANNEL, kal_get_task_by_moduleID(MOD_MED), SpcIO_M2A_hisr);
   if (ret != CCCI_SUCCESS) {
       ASSERT(0);
   }

   Spc_Init_B4_Scheduling();
   SpcIO_Init_B4_Scheduling();
#endif

   return KAL_TRUE;
}

kal_bool SP_Drv_Init_Task(void)
{
   while( !L1Audio_IsInitialized()){
      kal_sleep_task(AUD_1TICK(1));
   }

#if defined (__SMART_PHONE_MODEM__)
    Spc_Init();
    SpcIO_Init();
#endif
   
   return KAL_TRUE;
}
