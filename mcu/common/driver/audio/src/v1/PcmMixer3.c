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
 *   PcmMixer3.c
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
#include "afe_def.h" // for output device setting
#include "sp_drv.h"

#include "pcmMixer3.h"
#include "sal_exp.h"

/************************** Constants ***************************************/
#define PCMMIXER3_BUF_SIZE 640 // using in 16 bit, SWB

typedef enum {
	PCMMIXER3_STATE_IDLE = 0,
	PCMMIXER3_STATE_RUN, 
	PCMMIXER3_STATE_CLOSING,
}PCMMIXER3_STATE_TYPE;

/*********** Structure *******************************************************/

typedef struct{

	PCMMIXER3_STATE_TYPE state;
	kal_spinlockid lockId;
	
	kal_bool ulmix;
	kal_bool dlmix;
	
	void (*hisrHandler)(void);
	
	kal_uint16 aud_id;
	
	kal_uint16 ULGain;
	//kal_uint16 DLGain;
	
}PcmMixer3_T; 

/*********** variable ********************************************************/

static PcmMixer3_T gPcmMixer3;

static kal_uint16 pcmMixer3Buf[PCMMIXER3_BUF_SIZE];
static kal_uint16 pcmMixer3Buf_len;
/*********** internal fucntion  **********************************************/

void pcmMixer3Hisr( void *pram )
{
	volatile uint16* toBuf; 
	uint16 i;
	
	if (KAL_SPINLOCK_NOT_AVAILABLE == kal_take_spinlock(gPcmMixer3.lockId, KAL_NO_WAIT)) {
		kal_trace(TRACE_INFO, VM_HISR_LOCK_NOT_AVALIABLE, 1);
		goto leaveHisr;  
	}
	// handle extra notify and closing state
	if (PCMMIXER3_STATE_RUN != gPcmMixer3.state)
		goto leaveProc;   

    if(!SAL_Mixer3_IsRunning())
    	goto leaveProc;;

    // gain and setting update
	SAL_Mixer3_Config(gPcmMixer3.ULGain, gPcmMixer3.ulmix);
  kal_trace(TRACE_FUNC, MIXER3_INFO, gPcmMixer3.ULGain, gPcmMixer3.ulmix);
    // write data
	toBuf = SAL_Mixer3_GetBuf();
	SAL_Mixer3_SetDataLen(pcmMixer3Buf_len);
	
	
	for(i=0; i<pcmMixer3Buf_len; i++) {
		toBuf[i] = pcmMixer3Buf[i];
	}
	Data_Sync_Barrier();

	
leaveProc: 
	kal_give_spinlock(gPcmMixer3.lockId);
	
	if( gPcmMixer3.hisrHandler != NULL) {
		gPcmMixer3.hisrHandler();
	}
	
leaveHisr: 
	return;
}


/*===========================================================================*/
uint16 PcmMixer3_QueryUlBufLen(void)
{
	return (uint16) (PCMMIXER3_BUF_SIZE);
}

/**
	@srcBuf:
	@len: length of sample
*/
void PcmMixer3_writeUlBuf(uint16 *srcBuf, uint16 len)
{
	if(len <= PCMMIXER3_BUF_SIZE) {
		kal_take_spinlock(gPcmMixer3.lockId, KAL_INFINITE_WAIT);  
		kal_mem_cpy(pcmMixer3Buf, srcBuf, len*sizeof(int16));
		pcmMixer3Buf_len = len;
		kal_trace(TRACE_FUNC, MIXER3_DATA_LENGTH, len);
		kal_give_spinlock(gPcmMixer3.lockId);
	}
}

/**	
	@isMix: Mixer switch for uplink speech, 1 for SPH+Sound, 0 for sound only
	@gain: Sound effect gain for uplink mixer, for 0 to 7
*/
void PcmMixer3_ConfigUl(kal_bool isMix, kal_int8 gain )
{
	kal_trace( TRACE_FUNC, MIXER3_CONFIG_UL, isMix, gain); 

	if(gain<0) {
		gain=0;
	} else if (gain >7) {
		gain=7;
	}
	
	if( gain == 0 )
		gPcmMixer3.ULGain = 0;
	else {
		gPcmMixer3.ULGain = (kal_int16)(32767 >> (7 - gain));
	}
	gPcmMixer3.ulmix= isMix;
}


/**

 The function starts the background sound playback of the media handle.

 @bgSnd_hdlr: handler
*/
void PcmMixer3_Start(void (*mixerHisrHandler)(void))
{
	if(PCMMIXER3_STATE_RUN == gPcmMixer3.state) {
		return; 
	}
	
	kal_trace( TRACE_FUNC, MIXER3_START );
	
	gPcmMixer3.state = PCMMIXER3_STATE_IDLE;
	memset(pcmMixer3Buf, 0, sizeof(kal_uint16)*PCMMIXER3_BUF_SIZE);
	gPcmMixer3.hisrHandler = mixerHisrHandler;

	L1Audio_SetFlag(gPcmMixer3.aud_id);

	// update config to dsp
	SAL_Mixer3_Config(gPcmMixer3.ULGain, gPcmMixer3.ulmix);

	// turn on.
	// AM_SND_PlaybackOn(); TODO:
	SAL_Mixer3_SetInit();
	{
		uint32 I;
		for( I = 0; I < 20; I++ ) {
			if(SAL_Mixer3_IsRunning()) {
				gPcmMixer3.state = PCMMIXER3_STATE_RUN;
				break;
			}
			kal_sleep_task( AUD_1TICK(2) );
		}
		MODEM_WARNING_MESSAGE(I < 20, "PcmMixer3_Start: fail to wait DSP runing");
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
void PcmMixer3_Stop(void)
{	
	uint32 I;
	
	if(PCMMIXER3_STATE_RUN != gPcmMixer3.state) {
		L1Audio_ClearFlag(gPcmMixer3.aud_id);
		return;
	}

	// change the state before start closing
	kal_take_spinlock(gPcmMixer3.lockId, KAL_INFINITE_WAIT);  
	gPcmMixer3.state= PCMMIXER3_STATE_CLOSING; 
	kal_give_spinlock(gPcmMixer3.lockId);
			
	if(SAL_Mixer3_IsRunning())
		SAL_Mixer3_SetFinal();
	for ( I = 0; I < 20; I++ ) {
		if ( SAL_Mixer3_IsIdle())	 /* DSP returns to idle state */
			break;

		kal_sleep_task( AUD_1TICK(2) );
	}
	if(I>=20) {
		DEBUG_ASSERT(0);
		MODEM_WARNING_MESSAGE(0, "PcmMixer3_Stop: fail to stop DSP mixer2 function");
	}

	// TODO:
	// AM_SND_PlaybackOff( true );
	gPcmMixer3.state = PCMMIXER3_STATE_IDLE;

	L1Audio_ClearFlag(gPcmMixer3.aud_id);
}


void PcmMixer3_Init(void)
{
	gPcmMixer3.lockId = kal_create_spinlock("pcmMixerLock");	
	gPcmMixer3.aud_id = L1Audio_GetAudioID(); 
	L1Audio_HookHisrHandler(DP_D2C_MIXER3_UL_ID, pcmMixer3Hisr, 0); 
}

		
