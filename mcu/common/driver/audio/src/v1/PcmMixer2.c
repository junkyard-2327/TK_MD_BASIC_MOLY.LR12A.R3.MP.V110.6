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
 *   PcmMixer2.c
 *
 * Project:
 * --------
 *   
 *
 * Description:
 * ------------
 *   
 *
 * Author:
 * -------
 * -------
 *============================================================================
 *             HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
 * removed!
 * removed!
 * removed!
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

#include "kal_public_api.h"
#include "kal_general_types.h"
#include "sync_data.h"

#include "kal_trace.h"
#include "l1sp_trc.h"
#include "event_info_utility.h" // for MODEM_WARNING_MESSAGE


#include "am.h"
//#include "speech_def.h"
#include "afe_def.h" // for output device setting
#include "sp_drv.h"

#include "pcmMixer.h"
#include "sal_exp.h"

/************************** Constants ***************************************/
#define PCMMIXER_BUF_SIZE 960 // using in 16 bit, FB

typedef enum {
	PCMMIXER_STATE_IDLE = 0,
	PCMMIXER_STATE_RUN, 
	PCMMIXER_STATE_CLOSING,
}PCMMIXER_STATE_TYPE;

/*********** Structure *******************************************************/

typedef struct{

	PCMMIXER_STATE_TYPE state;
	kal_spinlockid lockId;
	
	kal_bool ulmix;
	kal_bool dlmix;
	
	void (*hisrHandler)(void);
	
	kal_uint16 aud_id;
	
	kal_uint16 ULGain;
	kal_uint16 DLGain;
	
}PcmMixer_T; 

/*********** variable ********************************************************/

static PcmMixer_T gPcmMixer;

static kal_uint16 pcmMixerBuf[PCMMIXER_BUF_SIZE];

/*********** internal fucntion  **********************************************/



void pcmMixerHisr( void *pram )
{
	volatile uint16* toBuf;
	uint32 toBufLen; 
	uint16 i;
	
	if (KAL_SPINLOCK_NOT_AVAILABLE == kal_take_spinlock(gPcmMixer.lockId, KAL_NO_WAIT)) {
		kal_trace(TRACE_INFO, VM_HISR_LOCK_NOT_AVALIABLE, 1);
		goto leaveHisr;  
	}
	// handle extra notify and closing state
	if (PCMMIXER_STATE_RUN != gPcmMixer.state)
		goto leaveProc;   

    if(!SAL_Mixer2_IsRunning())
    	goto leaveProc;;

    // gain and setting update
	SAL_Mixer2_Config(gPcmMixer.ULGain, gPcmMixer.DLGain, gPcmMixer.ulmix, gPcmMixer.dlmix);

    // write data
	toBuf = SAL_Mixer2_GetBuf_DL();
	toBufLen = SAL_Mixer2_GetDataLen_DL();
	for(i=0; i<toBufLen; i++) {
		toBuf[i] = pcmMixerBuf[i];
	}
	Data_Sync_Barrier();

	
leaveProc: 
	kal_give_spinlock(gPcmMixer.lockId);
	
	if( gPcmMixer.hisrHandler != NULL) {
		gPcmMixer.hisrHandler();
	}
	
leaveHisr: 
	return;
}


/*===========================================================================*/
uint16 PcmMixer_QueryDlBufLen(void)
{
	return (uint16) (SAL_Mixer2_GetDataLen_DL());
}

/**
	@srcBuf:
	@len: length of sample
*/
void PcmMixer_writeDlBuf(uint16 *srcBuf, uint16 len)
{
	if(len <= PCMMIXER_BUF_SIZE) {
		kal_take_spinlock(gPcmMixer.lockId, KAL_INFINITE_WAIT);  
		kal_mem_cpy(pcmMixerBuf, srcBuf, len*sizeof(int16));
		kal_give_spinlock(gPcmMixer.lockId);
	}
}

/**	
	@isMix: Mixer switch for uplink speech, 1 for SPH+Sound, 0 for sound only
	@gain: Sound effect gain for uplink mixer, for 0 to 7
*/
void PcmMixer_ConfigUl(kal_bool isMix, kal_int8 gain )
{
	kal_trace( TRACE_FUNC, MIXER2_CONFIG_UL, isMix, gain); 

	if(gain<0) {
		gain=0;
	} else if (gain >7) {
		gain=7;
	}
	
	if( gain == 0 )
		gPcmMixer.ULGain = 0;
	else {
		gPcmMixer.ULGain = (kal_int16)(32767 >> (7 - gain));
	}
	gPcmMixer.ulmix= isMix;
}


/**	
	@isMix: Mixer switch for uplink speech, 1 for SPH+Sound, 0 for sound only
	@gain: Sound effect gain for uplink mixer, for 0 to 7
*/
void PcmMixer_ConfigDl(kal_bool isMix, kal_int8 gain )
{
	kal_trace( TRACE_FUNC, MIXER2_CONFIG_DL, isMix, gain); 

	if(gain<0) {
		gain=0;
	} else if (gain >7) {
		gain=7;
	}
	
	if( gain == 0 )
		gPcmMixer.DLGain = 0;
	else {
		gPcmMixer.DLGain = (kal_int16)(32767 >> (7 - gain));
	}
	gPcmMixer.dlmix= isMix;
}


/**

 The function starts the background sound playback of the media handle.

 @bgSnd_hdlr: handler
*/
void PcmMixer_Start(void (*mixerHisrHandler)(void))
{
	if(PCMMIXER_STATE_RUN == gPcmMixer.state) {
		return; 
	}
	
	kal_trace( TRACE_FUNC, MIXER2_START );
	
	gPcmMixer.state = PCMMIXER_STATE_IDLE;
	memset(pcmMixerBuf, 0, sizeof(kal_uint16)*PCMMIXER_BUF_SIZE);
	gPcmMixer.hisrHandler = mixerHisrHandler;

	L1Audio_SetFlag(gPcmMixer.aud_id);

	// update config to dsp
	SAL_Mixer2_Config(gPcmMixer.ULGain, gPcmMixer.DLGain, gPcmMixer.ulmix, gPcmMixer.dlmix);

	// turn on.
	// AM_SND_PlaybackOn(); TODO:
	SAL_Mixer2_SetInit();
	{
		uint32 I;
		for( I = 0; I < 20; I++ ) {
			if(SAL_Mixer2_IsRunning()) {
				gPcmMixer.state = PCMMIXER_STATE_RUN;
				break;
			}
			kal_sleep_task( AUD_1TICK(2) );
		}
		MODEM_WARNING_MESSAGE(I < 20, "PcmMixer_Start: fail to wait DSP runing");
	}

	
}

/*
 * Description
 * ---------
 *   The function stops the background sound playback of the media handle.
 *
 * Syntax
 * ---------
 *   void PcmMixerStop();
 *
 * where
 *   hdl   The media handle
 *
 * Return Value
 * ---------
 *   None
 */
void PcmMixer_Stop(void)
{	
	uint32 I;
	
	if(PCMMIXER_STATE_RUN != gPcmMixer.state) {
		L1Audio_ClearFlag(gPcmMixer.aud_id);
		return;
	}

	// change the state before start closing
	kal_take_spinlock(gPcmMixer.lockId, KAL_INFINITE_WAIT);  
	gPcmMixer.state= PCMMIXER_STATE_CLOSING; 
	kal_give_spinlock(gPcmMixer.lockId);
			
	if(SAL_Mixer2_IsRunning())
		SAL_Mixer2_SetFinal();
	for ( I = 0; I < 20; I++ ) {
		if ( SAL_Mixer2_IsIdle())	 /* DSP returns to idle state */
			break;

		kal_sleep_task( AUD_1TICK(2) );
	}
	if(I>=20) {
		DEBUG_ASSERT(0);
		MODEM_WARNING_MESSAGE(0, "PcmMixer_Stop: fail to stop DSP mixer2 function");
	}

	// TODO:
	// AM_SND_PlaybackOff( true );
	gPcmMixer.state = PCMMIXER_STATE_IDLE;

	L1Audio_ClearFlag(gPcmMixer.aud_id);
}


void PcmMixer_Init(void)
{
	gPcmMixer.lockId = kal_create_spinlock("pcmMixerLock");	
	gPcmMixer.aud_id = L1Audio_GetAudioID(); 
	L1Audio_HookHisrHandler(DP_D2C_MIXER2_DL_ID, pcmMixerHisr, 0); 
}

		
