
#include "kal_public_api.h"
#include "kal_general_types.h"

#include "kal_trace.h"
#include "l1sp_trc.h"
#include "l1audio_trace.h"
#include "l1audio_sph_trc.h"
#include "event_info_utility.h" // for MODEM_WARNING_MESSAGE

#include "l1audio.h"
#include "l1aud_common_def.h"
#include "am.h"
#include "sp_drv.h"
#include "vm.h"
#include "sp_enhance.h"
#include "sal_def.h"
#include "sal_exp.h"

#include "afe.h"
#if defined(__CVSD_CODEC_SUPPORT__) 
#include "bt_sco_drv.h"
#endif

typedef struct {
	bool isEnable;
	bool isVocOn;
	
	uint16 aud_id;

	
} PCM_ROUTER_T;


static PCM_ROUTER_T g_PcmRouter; 

// ============================================================================

void PcmRouterStart(void)
{	

	kal_uint32 module_id = MOD_L1AUDIO_SPH_SRV;
   kal_uint32 voc_ptn = TVCI_CREATE_FILE;

	//call cpd and lock sleep mode
   g_PcmRouter.aud_id = L1Audio_GetAudioID();
   L1Audio_SetFlag( g_PcmRouter.aud_id );

	// force unmute to decople PS module
	// turn on
	AM_PcmRouter_On();	

	// voc
   if(!tst_trace_check_ps_filter_off(TRACE_GROUP_VM, &module_id, 0x2))
   {
      tst_vc_response(TVCI_VM_LOGGING, (const kal_uint8*)&voc_ptn, 4);
      VMREC_Start(NULL, true);
      g_PcmRouter.isVocOn = true;
   }
	
	// turn on speech enhancement
	SetSpeechEnhancement( true );

	//always unmute DSP uplink when speech on (This is to keep the mute definition)
	// SP_MuteUlFromDiffPos(false, SP_MIC_MUTE_POS_FROM_ALL);
	// L1SP_MuteSpeaker(false);

#if 0 // defined(__ECALL_SUPPORT__)
/* under construction !*/
/* under construction !*/
#endif

#if defined(__CVSD_CODEC_SUPPORT__) 
   if(SP_GetDevInfo() == SPH_DEVINFO_BT_CVSD_MSBC
   	|| SP_GetDevInfo() == SPH_DEVINFO_BT_CVSD
   	|| SP_GetDevInfo() == SPH_DEVINFO_BT_MSBC)
   {
      kal_uint8 voice8kMode = SP_GetDevSamplingRate();

      if( (voice8kMode==0) || (voice8kMode==1) ) {
         BT_SCO_SPEECH_ON(voice8kMode==1);
      } else {
         MODEM_WARNING_MESSAGE((voice8kMode==0), "PcmRouterStart(bt): incorrect Voice8kMode, %d", voice8kMode);
         MODEM_WARNING_MESSAGE((voice8kMode==1), "PcmRouterStart(bt): incorrect Voice8kMode, %d", voice8kMode);      
      }
      
   }
#endif

	g_PcmRouter.isEnable = true;
}

void PcmRouterStop(void)
{
   kal_uint32 voc_ptn = TVCI_CLOSE_FILE;

	// due to AP will close DL directly before speech off, so md can mute dl directly without ramping
	// This will prevent sound pushes to hardware buffer then cause noise
	kal_trace(TRACE_INFO, L1SP_MUTE_DSP_DL_8K_CONTROL, KAL_TRUE);
	SAL_Mute_Ctrl(SAL_MUTE_DL_8K, KAL_TRUE); // to replace 	L1SP_MuteSpeaker(true);


#if defined(__CVSD_CODEC_SUPPORT__) 
	if(BT_SCO_IS_SPEECH_ON())
	{
		BT_SCO_SPEECH_OFF();
	}
#endif
	
#if 0 // defined(__ECALL_SUPPORT__)
/* under construction !*/
/* under construction !*/
#endif

	
	SetSpeechEnhancement( false );

	// voc
	if(g_PcmRouter.isVocOn)
	{
		tst_vc_response(TVCI_VM_LOGGING, (const kal_uint8*)(&voc_ptn), 4);
		VMREC_Stop(true);
		g_PcmRouter.isVocOn = false;
	}

	// turn off
	AM_PcmRouter_Off();

	//always unmute DSP uplink after speech off to keep the mute definition
	SP_MuteUlEnhResult(false);
	SP_MuteUlFromDiffPos(false, SP_MIC_MUTE_POS_FROM_ALL); 
	SAL_Mute_Ctrl(SAL_MUTE_DL_8K, KAL_FALSE); // to replace L1SP_MuteSpeaker(false);
	
	// leave the mute control to PS module	

	//unlock sleep mode and release CPD
	L1Audio_ClearFlag( g_PcmRouter.aud_id );
    L1Audio_FreeAudioID( g_PcmRouter.aud_id );
	g_PcmRouter.aud_id = 0xffff;
	
	g_PcmRouter.isEnable = false;
}
