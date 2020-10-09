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
 * spc_io.c
 *
 * Project:
 * --------
 * MAUI
 *
 * Description:
 * ------------
 * IO interface between AP and MD speech driver
 *
 * Author:
 * -------
 * 
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
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *==============================================================================
 *******************************************************************************/


#include "kal_public_defs.h"
#include "kal_public_api.h"
#include "kal_general_types.h"
#include "kal_trace.h"
#include "event_info_utility.h" // for MODEM_WARNING_MESSAGE

#include "ccci.h"

#include "drv_sap.h"
#include "audio_msgid.h"

//#include "l1aud_common_def.h"
#include "audio_ringbuf.h" // "audio_def.h"
#include "audio_enum.h"
#include "med_trc.h"
#include "l1audio.h"
#include "med_spcio.h"
//#include "spc_drv.h"
#include "us_timer.h"
#include "ccci_if.h"


// #define __CCCI_VIA_SDIO__ i.e. __SDIO_DEVICE_CONNECTIVITY__
extern kal_uint32 SaveAndSetIRQMask( void );
//extern void   RestoreIRQMask( uint32 );
#ifndef TK6291_FAKE_COMPILE
extern kal_uint32 L1I_GetTimeStamp( void );
#endif //#ifndef TK6291_FAKE_COMPILE

#define AUD_1TICK(tick)          (tick * ((KAL_TICKS_10_MSEC) >> 1)) 
void SpcIo_shmDestroy(void);

#if defined(__HIF_CCCI_SUPPORT__)
#define __CCCI_OVER_SDIO_SUPPORT__
#endif

extern void spc_A2M_MsgHandler(kal_uint32 ccciMsg, kal_uint32 ccciResv, SPC_MSG_FROM_T comeFrom);
extern void spc_BgSndClose(void);
extern void spc_CtmClose(void);
extern void spc_bgSnd_requestData(void);
#if defined(__ENABLE_SPEECH_DVT__)
extern void spc_pcmNWay_sendUlData(uint16 bufLen);
extern void spc_pcmNWay_requestDlData(uint16 bufLen);
#else // defined(__ENABLE_SPEECH_DVT__)
extern void spc_pcmNWay_sendUlData(void);
extern void spc_pcmNWay_requestDlData(void);
#endif // defined(__ENABLE_SPEECH_DVT__)
extern void spc_record_sendVmData(void);
extern void spc_ctm_sendDumpDebugData(void);
extern void spc_daca_sendDlData(void);
extern void spc_daca_requestUlData(void);
extern void spc_notify_network_status(kal_uint32 codec);
extern void spc_record_sendRawPcmData(void);
extern void spc_pcmMixer_requestDlData(void);
extern void spc_pcmMixer3_requestUlData(void);
// ----------------------------------------------------------------------------
// Definition using in SPC IO
// ----------------------------------------------------------------------------
//#define __CCCI_OVER_SDIO_SUPPORT__


//#if defined(__SDIO_DEVICE_CONNECTIVITY__) || defined(__CCCI_OVER_SDIO_SUPPORT__)
#define SPCIO_CCCI_STREAM_BUF_RESERVED_SIZE 16 //unit is byte
#define SPCIO_SHARE_BUF_SIZE 16384
//#endif //__SDIO_DEVICE_CONNECTIVITY__

#define SPCIO_CCCI_MSG_QUEUE_SIZE 32
#define SPCIO_SHM_GUARD_PATTERN_SIZE SPEECH_SHM_GUARD_REGION_SIZE // 32

typedef enum {
	SPCIO_QUEUE_STATUS_INIT = 0,
	SPCIO_QUEUE_STATUS_READY,
	
} SPCIO_QUEUE_STATUS_T;

// ----------------------------------------------------------------------------
// Structure using in SPC IO
// ----------------------------------------------------------------------------
typedef struct _SPCIO_MESSAGE_T_
{
	SPC_MSG_ID_T message_id; // messaage using in AUDL
	kal_uint32 message_data; // to put CCCI_data
	kal_uint32 message_dataRev; // to put CCCI_Reserved
	SPC_MSG_FROM_T message_from; // SPC_MSG_FROM_T 
	
	kal_uint32 putTime;
	kal_uint32 getTime;
} SPCIO_MESSAGE_T;

typedef struct _SPCIO_T_
{
	kal_uint32 notifyInitTime;
	kal_uint32 finishInitTime;
		
   RINGBUFFER_T(SPCIO_MESSAGE_T, SPCIO_CCCI_MSG_QUEUE_SIZE)   ccciq;

	//ilm_struct *pIlm; 

	//share buffer related
	kal_uint32 apShareBufSize; // The size of AP share buffer, in size of Byte
   kal_uint32 mdShareBufSize; // The size of MD share buffer, in size of Byte (MD to AP)
   kal_uint32 apShareBufWrite;
	kal_uint32 mdShareBufWrite;
   kal_uint32 apShareBufRead;
	kal_uint32 mdShareBufRead;
	kal_uint8 *pApShareBuf;     // The base of AP share buffer
	kal_uint8 *pMdShareBuf;     // The base of MD share buffer (MD to AP)

	// SPCIO_QUEUE_STATUS_T ccciqStatue; // to keep the queue status, make em_data_request is first process in the queue
	
   // kal_bool isTaskInitialize;

   CCCI_RUNTIME_FEATURE_SUPPORT_T      feature_support;
   CCCI_RUNTIME_SHARE_MEMORY_FORMAT_T  shm;

	sph_shm_t *structShmBuf;
} SPCIO_T;

// ----------------------------------------------------------------------------
// Global varialbe
// ----------------------------------------------------------------------------


SPCIO_T gSpcIo;


#if defined(__SDIO_DEVICE_CONNECTIVITY__) || defined(__CCCI_OVER_SDIO_SUPPORT__)
// [REMIND] Please use gSpcIo pointer intead of following buffer directly.

#ifndef __MTK_TARGET__
kal_uint8 gSpcIo_MdShareBuffer[SPCIO_SHARE_BUF_SIZE];
kal_uint8 gSpcIo_ApShareBuffer[SPCIO_SHARE_BUF_SIZE];
#endif

#ifdef __MTK_TARGET__
__attribute__  ((section ("NONCACHEDZI"))) kal_uint8 gSpcIo_MdShareBuffer[SPCIO_SHARE_BUF_SIZE];
__attribute__  ((section ("NONCACHEDZI"))) kal_uint8 gSpcIo_ApShareBuffer[SPCIO_SHARE_BUF_SIZE];
#endif

#endif //__SDIO_DEVICE_CONNECTIVITY__

extern kal_spinlockid SPCSpinLockID;

// ----------------------------------------------------------------------------
// Logging
// ----------------------------------------------------------------------------

/**
	@prMsg: [input] pointer to structure SPCIO_MESSAGE_T. 
	@state: [input] logging state. 0 for receive, 1 for begin process, 2 for finish process
*/
static void _spcIO_MsgLog(SPCIO_MESSAGE_T *prMsg, kal_uint16 state)
{
	if( prMsg == NULL)
		return;
	
	if(prMsg->message_id == SPC_ID_AUDIO_M2A_CCCI){
		// do nothing
	} else if(prMsg->message_id != SPC_ID_AUDIO_A2M_CCCI) {
	
		// AUDL thread msg logging				
		if(state == 2) {
			if(!kal_if_hisr())
				kal_trace(TRACE_INFO, SPCIO_FINISH_MODEM_INTERNAL, prMsg->message_id, prMsg->message_id, prMsg->message_from);
			else
				kal_dev_trace(TRACE_INFO, SPCIO_FINISH_MODEM_INTERNAL, prMsg->message_id, prMsg->message_id, prMsg->message_from);
		} else if(state == 1) {
			if(!kal_if_hisr())
				kal_trace(TRACE_INFO, SPCIO_PROCESS_MODEM_INTERNAL, prMsg->message_id, prMsg->message_id, prMsg->message_from);
			else
				kal_dev_trace(TRACE_INFO, SPCIO_PROCESS_MODEM_INTERNAL, prMsg->message_id, prMsg->message_id, prMsg->message_from);
		} else if(state == 0) { // reduce log into 
			if(!kal_if_hisr())
				kal_trace(TRACE_INFO, SPCIO_RECEIVE_MODEM_INTERNAL, prMsg->message_id, prMsg->message_id, prMsg->message_from);
			else
				kal_dev_trace(TRACE_INFO, SPCIO_RECEIVE_MODEM_INTERNAL, prMsg->message_id, prMsg->message_id, prMsg->message_from);
		}

	} else 	{ // SPC_ID_AUDIO_A2M_CCCI
		// CCCI message logging	 ========================================
		kal_uint16 cmd = SPCIO_CCCI_MSG_CMD(prMsg->message_data);
		kal_uint16 data16 = SPCIO_CCCI_MSG_DATA16(prMsg->message_data);
	
		if(state == 2)	{
		   if(!kal_if_hisr())
		      kal_trace(TRACE_INFO, SPCIO_FINISH_MSG, prMsg->message_data, prMsg->message_id, prMsg->message_id, cmd, cmd, data16, prMsg->message_dataRev, prMsg->message_from);
		   else
		      kal_dev_trace(TRACE_INFO, SPCIO_FINISH_MSG, prMsg->message_data, prMsg->message_id, prMsg->message_id, cmd, cmd, data16, prMsg->message_dataRev, prMsg->message_from);
		
		} else if(state == 1) {
			if(!kal_if_hisr())
		      kal_trace(TRACE_INFO, SPCIO_PROCESS_MSG, prMsg->message_data, prMsg->message_id, prMsg->message_id, cmd, cmd, data16, prMsg->message_dataRev, prMsg->message_from);
		  else
		      kal_dev_trace(TRACE_INFO, SPCIO_PROCESS_MSG, prMsg->message_data, prMsg->message_id, prMsg->message_id, cmd, cmd, data16, prMsg->message_dataRev, prMsg->message_from);
		} else if(state == 0) {
		   if(!kal_if_hisr())
		      kal_trace(TRACE_INFO, SPCIO_RECEIVE_MSG, prMsg->message_data, prMsg->message_id, prMsg->message_id, cmd, cmd, data16, prMsg->message_dataRev, prMsg->message_from);
		   else
		      kal_dev_trace(TRACE_INFO, SPCIO_RECEIVE_MSG, prMsg->message_data, prMsg->message_id, prMsg->message_id, cmd, cmd, data16, prMsg->message_dataRev, prMsg->message_from);
		}
	}
}

// ----------------------------------------------------------------------------
// Software Queue Related
// ----------------------------------------------------------------------------

extern ilm_struct *allocate_ilm(module_type module_id);

/**
	@prSmpMsg:
	@comeFrom: 0 for trigger from CCCI_HISR, 1 for trigger from AUDL. 2 for trigger from HISR(you can add more in the future)
*/
void SpcIO_MsgQueuePut(SPC_MSG_ID_T msgId, kal_uint32 msgData, kal_uint32 msgDataRev, SPC_MSG_FROM_T callerFrom)
{    
	kal_bool isPassCheck;
	kal_uint32 isEmpty = 1;
	SPCIO_MESSAGE_T queueMsg;

	queueMsg.message_id = msgId;
	queueMsg.message_data = msgData;
	queueMsg.message_dataRev = msgDataRev;
	queueMsg.message_from = callerFrom;
	
	//logging
	_spcIO_MsgLog(&queueMsg, 0);

	// disable inturrupt to prevent race condition, 
	// checking queue status and put data into sw queue
	//u4SavedMask = SaveAndSetIRQMask();
	kal_take_spinlock(SPCSpinLockID, KAL_INFINITE_WAIT);
			// Not Full
	if(gSpcIo.ccciq.write >= gSpcIo.ccciq.read) {
		isPassCheck = ((gSpcIo.ccciq.write - gSpcIo.ccciq.read) < SPCIO_CCCI_MSG_QUEUE_SIZE );
	} else {
		isPassCheck = ( (gSpcIo.ccciq.write + (0xffffffff - gSpcIo.ccciq.read) +1 ) < SPCIO_CCCI_MSG_QUEUE_SIZE );
	}

	if(isPassCheck) {
		isEmpty = RB_EMPTY(gSpcIo.ccciq);	
		gSpcIo.ccciq.queue[gSpcIo.ccciq.write & (SPCIO_CCCI_MSG_QUEUE_SIZE-1)].message_id = msgId;
		gSpcIo.ccciq.queue[gSpcIo.ccciq.write & (SPCIO_CCCI_MSG_QUEUE_SIZE-1)].message_data = msgData;
		gSpcIo.ccciq.queue[gSpcIo.ccciq.write & (SPCIO_CCCI_MSG_QUEUE_SIZE-1)].message_dataRev = msgDataRev;
		gSpcIo.ccciq.queue[gSpcIo.ccciq.write & (SPCIO_CCCI_MSG_QUEUE_SIZE-1)].message_from = callerFrom;
		gSpcIo.ccciq.queue[gSpcIo.ccciq.write & (SPCIO_CCCI_MSG_QUEUE_SIZE-1)].putTime = ust_get_current_time();

		gSpcIo.ccciq.write++;
		kal_give_spinlock(SPCSpinLockID);
	} else {
		kal_uint32 tempW = gSpcIo.ccciq.write;
		kal_uint32 tempR = gSpcIo.ccciq.read;
		
		kal_give_spinlock(SPCSpinLockID);
		
		MODEM_WARNING_MESSAGE ( 0, "not enough space! w=%x, r=%x", tempW, tempR);
	}

	
	//RestoreIRQMask(u4SavedMask);
	

   //prevent Modem side from processing A2M message before L1AudioMain is initialized, 
   //and just put A2M message into queue to wait the initilization of L1AudioMain      
   // if(gSpcIo.isTaskInitialize != KAL_FALSE){
		// sned a taskMsg to AUDL to process when sw queue is empty then begin process. 
	if(isEmpty) {			
		msg_send4(MOD_L1SP, MOD_MED, AUDIO_SAP, MSG_ID_AUDIO_A2M_CCCI);
	}
	//}
    
}

void spcIO_MsgQueueGet(SPCIO_MESSAGE_T * prSmpMsg)
{

	if(gSpcIo.ccciq.read == gSpcIo.ccciq.write) { // empty queue
		return;
	}

	if( prSmpMsg == NULL ) {		
		MODEM_WARNING_MESSAGE(0, "spcIO_MsgQueueGet: user use NULL to get");
		return;
	}

	//u4SavedMask = SaveAndSetIRQMask();
	kal_take_spinlock(SPCSpinLockID, KAL_INFINITE_WAIT);

	prSmpMsg->message_id = gSpcIo.ccciq.queue[gSpcIo.ccciq.read & (SPCIO_CCCI_MSG_QUEUE_SIZE-1)].message_id;
	prSmpMsg->message_data = gSpcIo.ccciq.queue[gSpcIo.ccciq.read & (SPCIO_CCCI_MSG_QUEUE_SIZE-1)].message_data;
	prSmpMsg->message_dataRev = gSpcIo.ccciq.queue[gSpcIo.ccciq.read & (SPCIO_CCCI_MSG_QUEUE_SIZE-1)].message_dataRev;
	prSmpMsg->message_from = gSpcIo.ccciq.queue[gSpcIo.ccciq.read & (SPCIO_CCCI_MSG_QUEUE_SIZE-1)].message_from;
	gSpcIo.ccciq.queue[gSpcIo.ccciq.read & (SPCIO_CCCI_MSG_QUEUE_SIZE-1)].getTime = ust_get_current_time();

	gSpcIo.ccciq.read++;

	//RestoreIRQMask(u4SavedMask);
	kal_give_spinlock(SPCSpinLockID);

	_spcIO_MsgLog(prSmpMsg, 1);  

}

// ----------------------------------------------------------------------------
// Function related to CCCI
// ----------------------------------------------------------------------------

void SpcIO_A2M_hisr(CCCI_BUFF_T *bufp)
{
	kal_uint32 ccciMsg;

#if 0	
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif 

	/* confirm the channel buffer type, and get the mailbox id */
	if (CCCI_IS_MAILBOX(bufp)) {

		ccciMsg = CCCI_MAILBOX_ID(bufp);

		SpcIO_MsgQueuePut(SPC_ID_AUDIO_A2M_CCCI, ccciMsg, (bufp->reserved), SPC_MSG_FROM_CCCI);
		
 	} else {
	
		// if data send via ccci stream, the following checking needs to remove.
#if !(defined(__SDIO_DEVICE_CONNECTIVITY__) || defined(__CCCI_OVER_SDIO_SUPPORT__))
		ASSERT(0);
#else	// CCCI via SDIO
		// process the data then put to internal share buffer. 
		kal_uint32 segment = 0;
		kal_uint32 offset;
		
		kal_uint32 dataLen;
		kal_uint8 *data;

	
		
		data =  (void *)CCCI_STREAM_ADDR(bufp);			
		dataLen = CCCI_STREAM_LEN(bufp);
		kal_trace(TRACE_INFO, SPCIO_A2M_HISR, 1, data, dataLen);

		if(dataLen>16) {
			dataLen = (dataLen-16);
			data = ((kal_uint8 *)bufp)+16;
		} else {
			dataLen = 0;
			data = NULL;
		}
		//do memory copy, and send message to queue
		
		kal_trace(TRACE_INFO, SPCIO_A2M_HISR , 2, data, dataLen);
		
		offset = gSpcIo.apShareBufWrite;
		
		if(dataLen>gSpcIo.apShareBufSize){ // illegle
			MODEM_WARNING_MESSAGE(0, "Oversize data message:0x%x", bufp->reserved);
		} else if(dataLen != 0) {
			segment = gSpcIo.apShareBufSize - offset;
			if(segment>=dataLen){
				segment = dataLen;
				kal_mem_cpy( (gSpcIo.pApShareBuf)+offset, data, segment*sizeof(kal_uint8));
				gSpcIo.apShareBufWrite += segment;

				if(gSpcIo.apShareBufWrite>=gSpcIo.apShareBufSize){
					gSpcIo.apShareBufWrite = 0;
				}
			}else {
				kal_mem_cpy( (gSpcIo.pApShareBuf)+offset, data, segment*sizeof(kal_uint8));
				kal_mem_cpy( gSpcIo.pApShareBuf,  data+segment, (dataLen-segment)*sizeof(kal_uint8));
				gSpcIo.apShareBufWrite = dataLen-segment;
			}
		}
				
		ccciMsg = SPCIO_CCCI_MSG_CONSTRUCT_DATA_CMD_WO_SHIFT(bufp->reserved, dataLen);
		SpcIO_MsgQueuePut(SPC_ID_AUDIO_A2M_CCCI, ccciMsg, offset, SPC_MSG_FROM_CCCI_STREAM);

#endif //__SDIO_DEVICE_CONNECTIVITY__
	}


}
 
void SpcIO_M2A_hisr(CCCI_BUFF_T *bufp)
{
 
}

// Mail box
kal_bool spcIO_sendMsgViaCCCI(kal_uint32 msg, kal_uint32 revMsg)
{
	kal_uint32 ret, i = 0;
	
    kal_trace(TRACE_INFO, SPCIO_SEND_M2A_MESSAGE, msg, revMsg);

	SpcIO_MsgQueuePut(SPC_ID_AUDIO_M2A_CCCI, msg, revMsg, SPC_MSG_FROM_MED); 
	
	// ret = ccci_mailbox_write(CCCI_PCM_CHANNEL, msg);   
	ret = ccci_mailbox_write_with_reserved(CCCI_PCM_CHANNEL, msg, revMsg);   

   while( ret != CCCI_SUCCESS ){
      kal_trace(TRACE_INFO, SPCIO_SEND_M2A_MESSAGE_FAIL, msg, ret);

      if(i == 3) {
			kal_trace(TRACE_INFO, SPCIO_SEND_M2A_MESSAGE_FAIL_END, msg, ret);
			break;
      }
      i++;
      kal_sleep_task( AUD_1TICK(1) );
      // ret = ccci_mailbox_write(CCCI_PCM_CHANNEL, msg);
      ret = ccci_mailbox_write_with_reserved(CCCI_PCM_CHANNEL, msg, revMsg);
   }

   return (kal_bool)(ret == CCCI_SUCCESS);
}

// Stream
/**
	@msg: CCCI message what to put in 
*/
kal_bool spcIO_sendDataViaCCCI(kal_uint32 msg, void *buf, kal_uint32 bufLength)
{

	kal_uint32 ret, i = 0;
	
   kal_trace(TRACE_INFO, SPCIO_SEND_M2A_DATA, msg);

	SpcIO_MsgQueuePut(SPC_ID_AUDIO_M2A_CCCI, msg, bufLength, SPC_MSG_FROM_MED); 

	ret = ccci_stream_write_with_reserved(CCCI_PCM_CHANNEL, (kal_uint32)buf, bufLength, msg);
	
   while( ret != CCCI_SUCCESS ){
      kal_trace(TRACE_INFO, SPCIO_SEND_M2A_DATA_FAIL, msg, ret);

      if(i == 3) {
			kal_trace(TRACE_INFO, SPCIO_SEND_M2A_DATA_FAIL_END, msg, ret);
			break;
      }
      i++;
      kal_sleep_task( AUD_1TICK(1) );
      ret = ccci_stream_write_with_reserved(CCCI_PCM_CHANNEL,(kal_uint32)buf, bufLength, msg);
   }

   return (kal_bool)(ret == CCCI_SUCCESS);

}

// ----------------------------------------------------------------------------
// Share Buffer(CCCI over CHIF) / Stream Temp Buffer(CCCI over SDIO) Related
// ----------------------------------------------------------------------------

AUD_CCCI_MSG_T spcIO_msgMapper(SPCIO_MSG_FROM_SPC spcIoMsg)
{
	AUD_CCCI_MSG_T ccciMsgCmd = 0; 
	switch(spcIoMsg){

		// case SPCIO_MSG_FROM_SPC_SPH_DL_DIGIT_VOLUME_ACK: ccciMsgCmd = MSG_M2A_SPH_DL_DIGIT_VOLUME_ACK; break;
		// case SPCIO_MSG_FROM_SPC_SPH_UL_DIGIT_VOLUME_ACK: ccciMsgCmd = MSG_M2A_SPH_UL_DIGIT_VOLUME_ACK; break;
		case SPCIO_MSG_FROM_SPC_MUTE_SPH_UL_ACK: ccciMsgCmd = MSG_M2A_MUTE_SPH_UL_ACK; break;
		case SPCIO_MSG_FROM_SPC_MUTE_SPH_DL_ACK: ccciMsgCmd = MSG_M2A_MUTE_SPH_DL_ACK; break;
		// case SPCIO_MSG_FROM_SPC_SIDETONE_VOLUME_ACK: ccciMsgCmd = MSG_M2A_SIDETONE_VOLUME_ACK; break;
		// case SPCIO_MSG_FROM_SPC_SPH_DL_ENH_REF_DIGIT_VOLUME_ACK: ccciMsgCmd = MSG_M2A_SPH_DL_ENH_REF_DIGIT_VOLUME_ACK; break;
		// case SPCIO_MSG_FROM_SPC_SIDETONE_CONFIG_ACK: ccciMsgCmd = MSG_M2A_SIDETONE_CONFIG_ACK; break;
		case SPCIO_MSG_FROM_SPC_MUTE_SPH_UL_ENH_RESULT_ACK: ccciMsgCmd = MSG_M2A_MUTE_SPH_UL_ENH_RESULT_ACK; break;
		case SPCIO_MSG_FROM_SPC_MUTE_SPH_UL_SOURCE_ACK: ccciMsgCmd = MSG_M2A_MUTE_SPH_UL_SOURCE_ACK; break;

		case SPCIO_MSG_FROM_SPC_SPH_ON_ACK: ccciMsgCmd = MSG_M2A_SPH_ON_ACK; break; 
		case SPCIO_MSG_FROM_SPC_SPH_OFF_ACK: ccciMsgCmd = MSG_M2A_SPH_OFF_ACK; break; 
		case SPCIO_MSG_FROM_SPC_SET_SPH_MODE_ACK: ccciMsgCmd = MSG_M2A_SET_SPH_MODE_ACK; break;
		case SPCIO_MSG_FROM_SPC_CTRL_SPH_ENH_ACK: ccciMsgCmd = MSG_M2A_CTRL_SPH_ENH_ACK; break;
		case SPCIO_MSG_FROM_SPC_CONFIG_SPH_ENH_ACK: ccciMsgCmd = MSG_M2A_CONFIG_SPH_ENH_ACK; break;		
		case SPCIO_MSG_FROM_SPC_SET_ACOUSTIC_LOOPBACK_ACK: ccciMsgCmd = MSG_M2A_SET_ACOUSTIC_LOOPBACK_ACK; break;
		/*
		// phase out from MT6589
		case SPCIO_MSG_FROM_SPC_QUERY_MD_CAPABILITY_ACK: ccciMsgCmd = MSG_M2A_QUERY_MD_CAPABILITY_ACK; break; 
		case SPCIO_MSG_FROM_SPC_SET_MD_CAPABILITY_ACK: ccciMsgCmd = MSG_M2A_SET_MD_CAPABILITY_ACK; break; 
		*/
		case SPCIO_MSG_FROM_SPC_PRINT_SPH_COEFF_ACK: ccciMsgCmd = MSG_M2A_PRINT_SPH_COEFF_ACK; break;
		case SPCIO_MSG_FROM_SPC_SPH_ON_FOR_HOLD_CALL_ACK: ccciMsgCmd = MSG_M2A_SPH_ON_FOR_HOLD_CALL_ACK; break;
		case SPCIO_MSG_FROM_SPC_SPH_ON_FOR_DACA_ACK: ccciMsgCmd = MSG_M2A_SPH_ON_FOR_DACA_ACK; break;
		case SPCIO_MSG_FROM_SPC_SPH_ROUTER_ON_ACK: ccciMsgCmd = MSG_M2A_SPH_ROUTER_ON_ACK; break;
		case SPCIO_MSG_FROM_SPC_SET_VOICE_ENCRYPTION_ACK: ccciMsgCmd = MSG_M2A_SET_VOICE_ENCRYPTION_ACK; break;
		case SPCIO_MSG_FROM_SPC_SPH_DEV_CHANGE_ACK: ccciMsgCmd = MSG_M2A_SPH_DEV_CHANGE_ACK; break;
		
			
		case SPCIO_MSG_FROM_SPC_PNW_ON_ACK: ccciMsgCmd = MSG_M2A_PNW_ON_ACK; break;
		case SPCIO_MSG_FROM_SPC_PNW_OFF_ACK: ccciMsgCmd = MSG_M2A_PNW_OFF_ACK; break;
		// case SPCIO_MSG_FROM_SPC_RECORD_ON_ACK: ccciMsgCmd = MSG_M2A_RECORD_ON_ACK; break; // removed from 93md
		// case SPCIO_MSG_FROM_SPC_RECORD_OFF_ACK: ccciMsgCmd = MSG_M2A_RECORD_OFF_ACK; break; // removed from 93md
		// case SPCIO_MSG_FROM_SPC_DMNR_RECPLAY_ON_ACK: ccciMsgCmd = MSG_M2A_DMNR_RECPLAY_ON_ACK; break; // removed from 93md
		// case SPCIO_MSG_FROM_SPC_DMNR_RECPLAY_OFF_ACK: ccciMsgCmd = MSG_M2A_DMNR_RECPLAY_OFF_ACK; break; // removed from 93md
		// case SPCIO_MSG_FROM_SPC_DMNR_REC_ONLY_ON_ACK: ccciMsgCmd = MSG_M2A_DMNR_REC_ONLY_ON_ACK; break; // removed from 93md
		// case SPCIO_MSG_FROM_SPC_DMNR_REC_ONLY_OFF_ACK: ccciMsgCmd = MSG_M2A_DMNR_REC_ONLY_OFF_ACK; break; // removed from 93md
		// case SPCIO_MSG_FROM_SPC_PCM_REC_ON_ACK: ccciMsgCmd = MSG_M2A_PCM_REC_ON_ACK; break; // removed from 93md
		// case SPCIO_MSG_FROM_SPC_PCM_REC_OFF_ACK: ccciMsgCmd = MSG_M2A_PCM_REC_OFF_ACK; break; // removed from 93md
		case SPCIO_MSG_FROM_SPC_VM_REC_ON_ACK: ccciMsgCmd = MSG_M2A_VM_REC_ON_ACK; break;
		case SPCIO_MSG_FROM_SPC_VM_REC_OFF_ACK: ccciMsgCmd = MSG_M2A_VM_REC_OFF_ACK; break;
        case SPCIO_MSG_FROM_SPC_RECORD_RAW_PCM_ON_ACK: ccciMsgCmd = MSG_M2A_RECORD_RAW_PCM_ON_ACK; break;
        case SPCIO_MSG_FROM_SPC_RECORD_RAW_PCM_OFF_ACK: ccciMsgCmd = MSG_M2A_RECORD_RAW_PCM_OFF_ACK; break;
		case SPCIO_MSG_FROM_SPC_PCMMIXER_ON_ACK: ccciMsgCmd = MSG_M2A_PCMMIXER_ON_ACK; break;
		case SPCIO_MSG_FROM_SPC_PCMMIXER_OFF_ACK: ccciMsgCmd = MSG_M2A_PCMMIXER_OFF_ACK; break;
		case SPCIO_MSG_FROM_SPC_PCMMIXER3_ON_ACK: ccciMsgCmd = MSG_M2A_TELEPHONY_TX_ON_ACK; break;
		case SPCIO_MSG_FROM_SPC_PCMMIXER3_OFF_ACK: ccciMsgCmd = MSG_M2A_TELEPHONY_TX_OFF_ACK; break;

		case SPCIO_MSG_FROM_SPC_CTM_ON_ACK: ccciMsgCmd = MSG_M2A_CTM_ON_ACK; break;
		case SPCIO_MSG_FROM_SPC_CTM_OFF_ACK: ccciMsgCmd = MSG_M2A_CTM_OFF_ACK; break;
		case SPCIO_MSG_FROM_SPC_CTM_DUMP_DEBUG_FILE_ACK: ccciMsgCmd = MSG_M2A_CTM_DUMP_DEBUG_FILE_ACK; break;
		case SPCIO_MSG_FROM_SPC_BGSND_ON_ACK: ccciMsgCmd = MSG_M2A_BGSND_ON_ACK; break;
		case SPCIO_MSG_FROM_SPC_BGSND_OFF_ACK: ccciMsgCmd = MSG_M2A_BGSND_OFF_ACK; break;
		case SPCIO_MSG_FROM_SPC_BGSND_CONFIG_ACK: ccciMsgCmd = MSG_M2A_BGSND_CONFIG_ACK; break;


		case SPCIO_MSG_FROM_SPC_PNW_DLDATA_REQUEST: ccciMsgCmd = MSG_M2A_PNW_DL_DATA_REQUEST; break;
		case SPCIO_MSG_FROM_SPC_BGS_DATA_REQUEST: ccciMsgCmd = MSG_M2A_BGSND_DATA_REQUEST; break;
		case SPCIO_MSG_FROM_SPC_CTM_DATA_REQUEST: ccciMsgCmd = MSG_M2A_CTM_DATA_REQUEST; break;
		case SPCIO_MSG_FROM_SPC_DACA_ULDATA_REQUEST: ccciMsgCmd = MSG_M2A_DACA_UL_DATA_REQUEST; break;
		case SPCIO_MSG_FROM_SPC_ECALL_MSD_NOTIFY: ccciMsgCmd = MSG_M2A_ECALL_MSD_NOTIFY; break;
		case SPCIO_MSG_FROM_SPC_SPC_UL_ENC_NOTIFY: ccciMsgCmd = MSG_M2A_SPC_UL_ENC_NOTIFY; break;
		case SPCIO_MSG_FROM_SPC_SPC_DL_DEC_REQUEST: ccciMsgCmd = MSG_M2A_SPC_DL_DEC_REQUEST; break;
		case SPCIO_MSG_FROM_SPC_PCMMIXER_DL_DATA_REQUEST: ccciMsgCmd = MSG_M2A_PCMMIXER_DL_DATA_REQUEST; break;
		case SPCIO_MSG_FROM_SPC_PCMMIXER_UL_DATA_REQUEST: ccciMsgCmd = MSG_M2A_PCMMIXER_UL_DATA_REQUEST; break;
		case SPCIO_MSG_FROM_SPC_PCMMIXER3_UL_DATA_REQUEST: ccciMsgCmd = MSG_M2A_TELEPHONY_TX_UL_DATA_REQUEST; break;

		case SPCIO_MSG_FROM_SPC_PNW_ULDATA_NOTIFY: ccciMsgCmd = MSG_M2A_PNW_UL_DATA_NOTIFY; break;
		// case SPCIO_MSG_FROM_SPC_REC_DATA_NOTIFY: ccciMsgCmd = MSG_M2A_REC_DATA_NOTIFY; break; // removed from 93md
		case SPCIO_MSG_FROM_SPC_CTM_DEBUG_DATA_NOTIFY: ccciMsgCmd = MSG_M2A_CTM_DEBUG_DATA_NOTIFY; break;
		// case SPCIO_MSG_FROM_SPC_PCM_REC_DATA_NOTIFY: ccciMsgCmd = MSG_M2A_PCM_REC_DATA_NOTIFY; break; // removed from 93md
		case SPCIO_MSG_FROM_SPC_VM_REC_DATA_NOTIFY: ccciMsgCmd = MSG_M2A_VM_REC_DATA_NOTIFY; break;
		case SPCIO_MSG_FROM_SPC_DACA_DLDATA_NOTIFY: ccciMsgCmd = MSG_A2M_DACA_DL_DATA_NOTIFY; break;
		case SPCIO_MSG_FROM_SPC_RAW_PCM_REC_DATA_NOTIFY: ccciMsgCmd = MSG_M2A_RAW_PCM_REC_DATA_NOTIFY; break;
		case SPCIO_MSG_FROM_SPC_CUST_DUMP_NOTIFY: ccciMsgCmd = MSG_M2A_CUST_DUMP_NOTIFY; break;


		case SPCIO_MSG_FROM_SPC_EM_DATA_REQUEST: ccciMsgCmd = MSG_M2A_EM_DATA_REQUEST; break;
		// case SPCIO_MSG_FROM_SPC_EM_INCALL_ACK: ccciMsgCmd = MSG_M2A_EM_INCALL_ACK; break; // removed from 93md
		// case SPCIO_MSG_FROM_SPC_EM_DMNR_ACK: ccciMsgCmd = MSG_M2A_EM_DMNR_ACK; break; // removed from 93md
		// case SPCIO_MSG_FROM_SPC_EM_WB_ACK: ccciMsgCmd = MSG_M2A_EM_WB_ACK; break; // removed from 93md
		// case SPCIO_MSG_FROM_SPC_EM_MAGICON_ACK: ccciMsgCmd = MSG_M2A_EM_MAGICON_ACK; break; // removed from 93md
		// case SPCIO_MSG_FROM_SPC_EM_HAC_ACK: ccciMsgCmd = MSG_M2A_EM_HAC_ACK; break;	// removed from 93md
		case SPCIO_MSG_FROM_SPC_NETWORK_STATUS_NOTIFY:  ccciMsgCmd = MSG_M2A_NETWORK_STATUS_NOTIFY; break;
		case SPCIO_MSG_FROM_SPC_RF_INFO_NOTIFY:  ccciMsgCmd = MSG_M2A_RF_INFO_NOTIFY; break;
		case SPCIO_MSG_FROM_SPC_EPOF_NOTIFY:  ccciMsgCmd = MSG_M2A_EPOF_NOTIFY; break;
		case SPCIO_MSG_FROM_SPC_DYNAMIC_PAR_ACK: ccciMsgCmd = MSG_M2A_DYNAMIC_PAR; break;
		case SPCIO_MSG_FROM_SPC_SPH_ENH_CORE_ACK: ccciMsgCmd = MSG_M2A_SPH_ENH_CORE_ACK; break;
		case SPCIO_MSG_FROM_SPC_DYNAMIC_PAR_IN_STRUCT_SHM_ACK: ccciMsgCmd = MSG_M2A_DYNAMIC_PAR_IN_STRUCT_SHM_ACK; break;

		case SPCIO_MSG_FROM_SPC_VIBSPK_PARAMETER_ACK: ccciMsgCmd = MSG_M2A_VIBSPK_PARAMETER_ACK; break;
		case SPCIO_MSG_FROM_SPC_NXP_SMARTPA_PARAMETER_ACK: ccciMsgCmd = MSG_M2A_NXP_SMARTPA_PARAMETER_ACK; break;

		case SPCIO_MSG_FROM_SPC_NW_CODEC_INFO_NOTIFY: ccciMsgCmd = MSG_M2A_NW_CODEC_INFO_NOTIFY; break;

		case SPCIO_MSG_FROM_AUD_ALIVE_NOTIFY: ccciMsgCmd = MSG_M2A_AUD_ALIVE_NOTIFY; break;
	default:
			kal_trace(TRACE_ERROR, SPCIO_UNKNOW_M2A_COMMAND, spcIoMsg);

	}
	return ccciMsgCmd;
}
kal_uint16 spcIo_GetDataFromAp_viaIntBuf(const kal_uint16 offset, const kal_uint16 length, void *buf)
{
	kal_uint16 procLen;
	kal_uint16 curOffset;
	
	curOffset = offset;
	procLen = length;
	if((curOffset + procLen) > gSpcIo.apShareBufSize) {
		kal_uint32 segment = gSpcIo.apShareBufSize - curOffset;
		kal_uint8 *pCurrent = buf;
		kal_mem_cpy(pCurrent, gSpcIo.pApShareBuf+curOffset, sizeof(kal_uint8)*segment);
		pCurrent += segment;
		
		segment = procLen - segment;
		kal_mem_cpy(pCurrent, gSpcIo.pApShareBuf, sizeof(kal_uint8)*segment);

		// move offset pointer
		curOffset = segment;
	} else {
		kal_mem_cpy(buf, gSpcIo.pApShareBuf+curOffset, sizeof(kal_uint8)*procLen);

		// move offset pointer
		curOffset = offset + procLen ;
		if(curOffset == gSpcIo.apShareBufSize) {
			curOffset = 0; // return to begin
		}
	}

	// move read pointer
	//gSpcIo.apShareBufRead = curOffset;

	// provide current position
	return curOffset;
}

/**
	get get data in ap_data_region
*/
kal_uint16 SpcIo_GetDataFromAp_StructShmBuf(const kal_uint16 offset, const kal_uint16 length, void *buf)
{
	kal_uint16 curOffset;
	kal_uint32 size; 
	// kal_uint32 write_idx;
	kal_uint8 *pApBuf;


	size = gSpcIo.structShmBuf->region.ap_data_region.size; 
	// write_idx = gSpcIo.structShmBuf->region.ap_data_region.write_idx;

	// check the buffer is enough or not
	/*
	if(gSpcIo.structShmBuf->region.ap_data_region.read_idx <= write_idx) {
		if((write_idx - gSpcIo.structShmBuf->region.ap_data_region.read_idx) < length ) {
			kal_prompt_trace(MOD_L1SP, "data not enough in AP_shm_buf"); 
			gSpcIo.structShmBuf->region.ap_data_region.read_idx = write_idx;

			return write_idx; 
		}
	} else { // two segmenet 
		if (( size + write_idx -  gSpcIo.structShmBuf->region.ap_data_region.read_idx ) < length) {
			kal_prompt_trace(MOD_L1SP, "data not enough in AP_shm_buf"); 
			gSpcIo.structShmBuf->region.ap_data_region.read_idx = write_idx;

			return write_idx; 
		}
	}
	*/

	// data copy
	pApBuf = (kal_uint8 *)(gSpcIo.shm.addr + gSpcIo.structShmBuf->region.ap_data_region.offset);	
	curOffset = offset;
		
	if((curOffset + length) > size) {
		kal_uint32 segment = size - curOffset;
		kal_uint8 *pCurrent = buf;
		kal_mem_cpy(pCurrent, pApBuf+curOffset, sizeof(kal_uint8)*segment);
		pCurrent += segment;
		
		segment = length - segment;
		kal_mem_cpy(pCurrent, pApBuf, sizeof(kal_uint8)*segment);

		// move offset pointer
		curOffset = segment;
	} else {
		kal_mem_cpy(buf, pApBuf+curOffset, sizeof(kal_uint8)*length);

		// move offset pointer
		curOffset = offset + length ;
		if(curOffset == size) {
			curOffset = 0; // return to begin
		}
	}

	// move read pointer
	gSpcIo.structShmBuf->region.ap_data_region.read_idx= curOffset;

	// provide current position
	return curOffset;
}

// using in 92 md
kal_uint16 SpcIo_GetDataFromAp_Shm(const kal_uint16 offset, const kal_uint16 length, void *buf) 
{ 
    
    kal_uint16 procLen;
	kal_uint16 curOffset = 0;

	kal_prompt_trace(MOD_L1SP, "[SpcIo_GetDataFromAp_Shm] offset = %x, length = %x", offset, length);

	if (gSpcIo.feature_support.support_mask == CCCI_RUNTIME_FEATURE_MUST_SUPPORT){
        curOffset = offset;
        procLen = length;
        
        if((curOffset + procLen) > (gSpcIo.shm.size - SPCIO_SHM_GUARD_PATTERN_SIZE)) {
            kal_uint32 segment = (gSpcIo.shm.size - SPCIO_SHM_GUARD_PATTERN_SIZE) - curOffset;
            kal_uint8 *pCurrent = buf;
            kal_mem_cpy(pCurrent, (kal_uint8 *)(gSpcIo.shm.addr) + curOffset, sizeof(kal_uint8)*segment);
            pCurrent += segment;

            segment = procLen - segment;
            kal_mem_cpy(pCurrent, (kal_uint8 *)(gSpcIo.shm.addr) + SPCIO_SHM_GUARD_PATTERN_SIZE, sizeof(kal_uint8)*segment);

            // move offset pointer
            curOffset = segment + SPCIO_SHM_GUARD_PATTERN_SIZE;
        } 
        else {
            kal_mem_cpy(buf, (kal_uint8 *)(gSpcIo.shm.addr) + curOffset, sizeof(kal_uint8)*procLen);

            // move offset pointer
            curOffset = offset + procLen ;
			if(curOffset == (gSpcIo.shm.size - SPCIO_SHM_GUARD_PATTERN_SIZE)) {
				curOffset = SPCIO_SHM_GUARD_PATTERN_SIZE; // return to begin
			}
        }
    }
    else{
        // not support, should not assert
    }
   
	return curOffset;
		
}

kal_uint16 SpcIo_GetDatafromAP_paramRegion(const kal_uint16 offset, const kal_uint16 length, void *buf)
{
	// kal_uint8 *pData;
	kal_uint8 *pApBuf;
	kal_uint32 size; 
	kal_uint16 curOffset;
	
	// check flag
	if(NULL == gSpcIo.structShmBuf) {		
		kal_trace(TRACE_ERROR, SPCIO_GET_PARAM_ERROR, 1);
		return offset; 
	} else {
		if((gSpcIo.structShmBuf->ap_flag) & SPH_SHM_AP_FLAG_SPH_PARAM_WRITE) {
			kal_trace(TRACE_ERROR, SPCIO_GET_PARAM_ERROR, 2);
			return offset; 
		} 
	}

	// data copy
	gSpcIo.structShmBuf->md_flag |= SPH_SHM_MD_FLAG_SPH_PARAM_READ;

	size = gSpcIo.structShmBuf->region.sph_param_region.size; 
	pApBuf = (kal_uint8 *)(gSpcIo.shm.addr + gSpcIo.structShmBuf->region.sph_param_region.offset);	
	curOffset = offset;
		
	if((curOffset + length) > size) {
		kal_uint32 segment = size - curOffset;
		kal_uint8 *pCurrent = buf;
		kal_mem_cpy(pCurrent, pApBuf+curOffset, sizeof(kal_uint8)*segment);
		pCurrent += segment;
		
		segment = length - segment;
		kal_mem_cpy(pCurrent, pApBuf, sizeof(kal_uint8)*segment);

		// move offset pointer
		curOffset = segment;
	} else {
		kal_mem_cpy(buf, pApBuf+curOffset, sizeof(kal_uint8)*length);

		// move offset pointer
		curOffset = offset + length;
		if(curOffset == size) {
			curOffset = 0; // return to begin
		}
	}
	gSpcIo.structShmBuf->region.sph_param_region.read_idx= curOffset;

	gSpcIo.structShmBuf->md_flag &= ~SPH_SHM_MD_FLAG_SPH_PARAM_READ;

	return curOffset;
}

/**
	@return: write pointer offset position
*/
kal_uint16 SpcIo_GetDataFromAp(const kal_uint16 offset, const kal_uint16 length, void *buf, SPC_MSG_FROM_T comeFrom) 
{
	if(SPC_MSG_FROM_CCCI_STREAM == comeFrom) {
		
		return spcIo_GetDataFromAp_viaIntBuf(offset, length, buf); // from ccci -> md buffer		
		
	} else if (SPC_MSG_FROM_CCCI_STREAM_AND_SHM == comeFrom) {
	
		return SpcIo_GetDatafromAP_paramRegion(offset, length, buf);
		
	} else if(SPC_MSG_FROM_CCCI == comeFrom) {		
	
		if( NULL != gSpcIo.structShmBuf ) {
			if( gSpcIo.structShmBuf->struct_checksum != (sizeof(sph_shm_t)-sizeof(kal_uint32)) ) { // check fail 
				return SpcIo_GetDataFromAp_Shm(offset, length, buf);
			} else {
				return SpcIo_GetDataFromAp_StructShmBuf(offset, length, buf);
			}
		} else {
			kal_trace(TRACE_WARNING, SPCIO_UNKNOWN_GET_DATA_SOURCE, comeFrom); 
		}
		
	} else {
	
		kal_trace(TRACE_WARNING, SPCIO_UNKNOWN_GET_DATA_SOURCE, comeFrom); 
		
	}
	
	return offset;
}

/**
	@offset: [Input] 
	@length: [Input] unit int byte
	@headerLen: [Input] unit int byte

	@header: [Output]
	@buf: [Output]
	
*/
void SpcIO_GetDataFromAp_inOneTime(kal_uint16 offset, kal_uint16 length, kal_int16 headerLen,
	void *header, void *buf, SPC_MSG_FROM_T comeFrom)
{
	kal_int16 procLen;
	kal_uint16 curOffset;

	// length checking: total processing length should be longer then header
	kal_trace(TRACE_INFO, SPCIO_GETDATAFROMAP_INONETIME_1, length, headerLen);	
	if(length < headerLen) {
		MODEM_WARNING_MESSAGE(0, "SpcIO_GetDataFromAp_inOneTime: len(%d) too short", length);
		return;
	}	
	
	//header
	curOffset = SpcIo_GetDataFromAp(offset, headerLen, header, comeFrom);

	kal_trace(TRACE_INFO, SPCIO_GETDATAFROMAP_INONETIME_2, *((kal_uint16 *)header), *((kal_uint16 *)header+1), *((kal_uint16 *)header+2));
		
	//data
	procLen = length - headerLen;
	if(procLen >0) { // prevent empty data
		SpcIo_GetDataFromAp(curOffset, procLen, buf, comeFrom);
	} else {
		buf = NULL;
	}
}

void spcIO_copyDataToMdShareBuf(const kal_uint8 *pSrc, const kal_int16 srcLen)
{
	kal_uint8 *pSrcCur; 
	kal_uint16 curOffset = gSpcIo.mdShareBufWrite;
	
	pSrcCur = (kal_uint8 *)pSrc;
	
	if((curOffset + srcLen) > gSpcIo.mdShareBufSize) {
		// cut to segment 
		kal_int16 segment = gSpcIo.mdShareBufSize -  curOffset;

		kal_mem_cpy( (kal_uint8 *)(gSpcIo.pMdShareBuf + curOffset), pSrcCur, sizeof(kal_uint8)*segment);
		pSrcCur = pSrcCur + segment; 

		segment = srcLen - segment;
		kal_mem_cpy(gSpcIo.pMdShareBuf, pSrcCur, sizeof(kal_uint8)*segment);

		// move offset pointer
		curOffset = segment;
	} else {
		kal_mem_cpy((kal_uint8 *)(gSpcIo.pMdShareBuf+curOffset), pSrcCur, sizeof(kal_uint8)*srcLen);

		// move offset pointer
		curOffset = curOffset + srcLen ;
	}

	gSpcIo.mdShareBufWrite = curOffset;

}

kal_bool spcIo_isMdShareBufAvailable_StructShmBuf(const kal_int16 srcLen)
{
	kal_bool result = KAL_FALSE; 
	kal_uint32 curOffset; // write ptr
	kal_uint32 readPtr;

	// check AP is init or not
	if( 0 == (gSpcIo.structShmBuf->ap_flag & SPH_SHM_AP_FLAG_READY )) {
		return result; 
	}
	
	// check the structure is avaliable 
	if( gSpcIo.structShmBuf->struct_checksum != (sizeof(sph_shm_t)-sizeof(kal_uint32)) ) {
		return result; 
	}

	// check availiable memory 
	curOffset = gSpcIo.structShmBuf->region.md_data_region.write_idx; //gSpcIo.mdShareBufWrite;
	readPtr =  gSpcIo.structShmBuf->region.md_data_region.read_idx;
	if(curOffset > readPtr) {
		if(srcLen >= gSpcIo.structShmBuf->region.md_data_region.size-curOffset+readPtr) {
			return result;
		}			
	} else if(curOffset < readPtr){
		if(srcLen >= readPtr-curOffset) {
			return result; 
		}
	}

	result = KAL_TRUE;
	return result;
}

kal_int32 spcIO_copyDataToMdShareBuf_StructShmBuf(const kal_uint8 *pSrc, const kal_int16 srcLen)
{
	kal_uint8 *pSrcCur; 
	kal_uint32 curOffset; // write ptr
	kal_uint32 startOffset; 
	kal_uint32 bufSize; 
	
	curOffset = gSpcIo.structShmBuf->region.md_data_region.write_idx;
	bufSize = gSpcIo.structShmBuf->region.md_data_region.size; 
	
	startOffset = curOffset;

	// copy data 
	pSrcCur = (kal_uint8 *)pSrc;
	
	if((curOffset + srcLen) >= bufSize) {
		// cut to segment 
		kal_int16 segment = bufSize - curOffset;
		kal_uint32 pBufBase = gSpcIo.structShmBuf->region.md_data_region.offset + gSpcIo.shm.addr;

		kal_mem_cpy( (kal_uint8 *)(pBufBase + curOffset), pSrcCur, sizeof(kal_uint8)*segment);
		pSrcCur = pSrcCur + segment; 

		segment = srcLen - segment;
		if(segment>0) {
			kal_mem_cpy((kal_uint8 *)(pBufBase), pSrcCur, sizeof(kal_uint8)*segment);
		}

		// move offset pointer
		curOffset = segment;
	} else {
		kal_uint32 pBufBase = gSpcIo.structShmBuf->region.md_data_region.offset + gSpcIo.shm.addr;
		kal_mem_cpy((kal_uint8 *)(pBufBase + curOffset), pSrcCur, sizeof(kal_uint8)*srcLen);

		// move offset pointer
		curOffset = curOffset + srcLen ;
	}

	// update write pointer
	gSpcIo.structShmBuf->region.md_data_region.write_idx = curOffset;

	return startOffset;
}

/**
	if the result is fail, log will leave inside
	@headerBuf: 
	@headerLen:
	@srcBuf:
	@srcLen:
	@msg:

	@return: successful send or not! 
*/


#define MAX_CCCI_BUFFER      (3000)

#define MAX_CCCI_AVAILABLE_BUF (MAX_CCCI_BUFFER - sizeof(med_spcExtendedBufInfo) - SPCIO_CCCI_STREAM_BUF_RESERVED_SIZE)

kal_bool SpcIo_WriteDataToAp_viaCcciStream(void *headerBuf, kal_int16 headerLen, 
	void *srcBuf1, kal_int16 srcLen1, void *srcBuf2, kal_int16 srcLen2, 
	SPCIO_MSG_FROM_SPC spcIoMsg)
{		
	
	kal_bool sendResult = KAL_FALSE;
	kal_uint8 *sendData, *buf1, *buf2;
	kal_uint16 ccciStreamSize; 
	kal_uint16 capacity, t1, t2;	
	kal_int16 r_srcLen1 = srcLen1, r_srcLen2 = srcLen2; //remaining
	med_spcExtendedBufInfo einfo;
	
	kal_trace(TRACE_INFO, SPCIO_SDIO_WRITE2AP_ENTER);
	if(0 < headerLen){
		einfo.syncWord = 0x1234;
		einfo.type     = ((med_spcBufInfo *)headerBuf)->type;//info.type;
		einfo.length   = 0;
	
		einfo.curIdx   = 0;	
		einfo.totalIdx = (srcLen1 + srcLen2+(MAX_CCCI_AVAILABLE_BUF-1))/MAX_CCCI_AVAILABLE_BUF;

		headerLen     = sizeof(med_spcExtendedBufInfo);	  
		
		kal_trace(TRACE_INFO, SPCIO_SDIO_DEBUG1, 1, einfo.totalIdx, srcLen1, srcLen2);
	}else{ // without padding any header, just to check size < MAX_CCCI_AVAILABLE_BUF, which means curIdx equals 1.

		einfo.curIdx   = 0;	
		einfo.totalIdx = 1;
		kal_trace(TRACE_INFO, SPCIO_SDIO_DEBUG1, 2, einfo.totalIdx, srcLen1, srcLen2);
    }	

	sendData = gSpcIo.pMdShareBuf;
	

	while(0 < r_srcLen1 + r_srcLen2){
		kal_uint16 length;
		kal_trace(TRACE_INFO, SPCIO_SDIO_WRITE2AP_INFO1, r_srcLen1, r_srcLen2, einfo.curIdx);
		
		buf1 = (kal_uint8 *)srcBuf1+(srcLen1-r_srcLen1);
		buf2 = (kal_uint8 *)srcBuf2+(srcLen2-r_srcLen2); 
		capacity = MAX_CCCI_AVAILABLE_BUF;	   
	  
		t1 = r_srcLen1;
		if(r_srcLen1 > capacity){
			t1 = capacity;
		}	   
		//copy buf1 with t1 size, then consume capacity with t1 size	   
		r_srcLen1  -= t1;
		capacity -= t1;

		t2 = r_srcLen2;
		if(r_srcLen2 > capacity){
			t2 = capacity;
		}	   
		//copy buf1 with t2 size, then consume capacity with t2 size	   
		r_srcLen2  -= t2;
		capacity   -= t2;

		//assemble the content of buffer

		if(0 < headerLen){
			einfo.curIdx++; 	   
			einfo.length = t1 + t2; 	
			kal_mem_cpy((kal_uint8 *)(sendData + SPCIO_CCCI_STREAM_BUF_RESERVED_SIZE ), &einfo, headerLen);
		}else{
			einfo.curIdx++; 
			ASSERT(einfo.curIdx==1); //Data with no header happens only when PCM4WAY debug log in CTM, which is expected not to exceed the throughput limitation of CCCI over SDIO
		}
	  
		kal_mem_cpy((kal_uint8 *)(sendData + SPCIO_CCCI_STREAM_BUF_RESERVED_SIZE + headerLen)	   , buf1, t1);
		kal_mem_cpy((kal_uint8 *)(sendData + SPCIO_CCCI_STREAM_BUF_RESERVED_SIZE + headerLen + t1) , buf2, t2); 	 

		length = headerLen + t1 + t2;	
		kal_trace(TRACE_INFO, SPCIO_SDIO_WRITE2AP_INFO2, headerLen, t1, t2, length);

		ccciStreamSize = length + SPCIO_CCCI_STREAM_BUF_RESERVED_SIZE;		
		if(ccciStreamSize > MAX_CCCI_BUFFER) {
			// DEBUG_ASSERT(ccciStreamSize <= MAX_CCCI_BUFFER);
			MODEM_WARNING_MESSAGE(0, "SpcIo_WriteDataToAp_viaCcciStream: data size(%d) too big", ccciStreamSize);
		}

		// mapper 
		//msg = spcIO_msgMapper(spcIoMsg);
		
		//send via CCCI stream
		sendResult = spcIO_sendDataViaCCCI(SPCIO_CCCI_MSG_CONSTRCUT_DATA_CMD((spcIO_msgMapper(spcIoMsg)), length), sendData, ccciStreamSize);

	}
	kal_trace(TRACE_INFO, SPCIO_SDIO_WRITE2AP_LEAVE);

	return sendResult;
}

kal_bool SpcIO_WriteDataToAp(void *headerBuf, kal_int16 headerLen, 
	void *srcBuf1, kal_int16 srcLen1, void *srcBuf2, kal_int16 srcLen2, 
	SPCIO_MSG_FROM_SPC spcIoMsg)
{
	kal_uint16 length;
	
	kal_bool sendResult = KAL_FALSE;
	AUD_CCCI_MSG_T msg;



#if defined(__SDIO_DEVICE_CONNECTIVITY__)	
	kal_uint8 *sendData;
	kal_uint16 ccciStreamSize; 

	sendData = gSpcIo.pMdShareBuf;
	length = headerLen + srcLen1 + srcLen2;	
	ccciStreamSize = length + SPCIO_CCCI_STREAM_BUF_RESERVED_SIZE;
	
	kal_mem_cpy((kal_uint8 *)(sendData+ SPCIO_CCCI_STREAM_BUF_RESERVED_SIZE) , headerBuf, headerLen);
	kal_mem_cpy((kal_uint8 *)(sendData+ headerLen+SPCIO_CCCI_STREAM_BUF_RESERVED_SIZE), srcBuf1, srcLen1);
	if(0 != srcLen2) {
		kal_mem_cpy((kal_uint8 *)(sendData+ srcLen1+ headerLen+SPCIO_CCCI_STREAM_BUF_RESERVED_SIZE), srcBuf2, srcLen2);
	}
	
	
	// mapper 
	msg = spcIO_msgMapper(spcIoMsg);
		
	//send via CCCI stream

	{	
		sendResult = spcIO_sendDataViaCCCI(SPCIO_CCCI_MSG_CONSTRCUT_DATA_CMD(msg, length), 
			sendData, ccciStreamSize);
	}
	
#elif defined(__CCCI_OVER_SDIO_SUPPORT__) // CCCI over SDIO has the limitation of maximun 5k throughput. Oversized data are sent consecutively by multiple times. By the modified data header, AP can indicate which consecutively data belong to data which should be carried by one time.

	length = sizeof(med_spcExtendedBufInfo) + srcLen1 + srcLen2;	

	if (spcIo_isMdShareBufAvailable_StructShmBuf(length)) { 
		kal_uint16 offset;
	med_spcExtendedBufInfo einfo;

		if(0 < headerLen){
			einfo.syncWord = 0x1234;
	  einfo.type     = ((med_spcBufInfo *)headerBuf)->type;//info.type;
			einfo.length   = ((med_spcBufInfo *)headerBuf)->length;

	  headerLen     = sizeof(med_spcExtendedBufInfo);	  
		}
		einfo.curIdx = 1; // one shot to finish data transfer
		einfo.totalIdx = 1;  
		
		offset = spcIO_copyDataToMdShareBuf_StructShmBuf((kal_uint8 *)(&einfo), headerLen);
		spcIO_copyDataToMdShareBuf_StructShmBuf(srcBuf1, srcLen1);	
		if(0 != srcLen2) {
			spcIO_copyDataToMdShareBuf_StructShmBuf(srcBuf2, srcLen2);	
		}
		msg = spcIO_msgMapper(spcIoMsg);
		sendResult = spcIO_sendMsgViaCCCI(SPCIO_CCCI_MSG_CONSTRCUT_DATA_CMD(msg, length), offset);		
	} else {		
		
		sendResult = SpcIo_WriteDataToAp_viaCcciStream(headerBuf, headerLen, 
			srcBuf1, srcLen1, srcBuf2, srcLen2, spcIoMsg);
   
	}
#else //via CHIF
	kal_uint16 offset;
	//keep starting address before put data into share buffer
	length = headerLen + srcLen1 + srcLen2;
	offset = gSpcIo.mdShareBufWrite;
	
	// put to share buffer
	if((0 != headerLen) && (NULL != headerBuf)) {
		spcIO_copyDataToMdShareBuf(headerBuf, headerLen);
	}
	spcIO_copyDataToMdShareBuf(srcBuf1, srcLen1);	
	if(0 != srcLen2) {
		spcIO_copyDataToMdShareBuf(srcBuf2, srcLen2);	
	}
	
	// mapper 
	msg = spcIO_msgMapper(spcIoMsg);
		
	// send data notification message

	{
		sendResult = spcIO_sendMsgViaCCCI(SPCIO_CCCI_MSG_CONSTRCUT_DATA_CMD(msg, length), offset);
	}

#endif // __SDIO_DEVICE_CONNECTIVITY__

	return sendResult;

}

kal_bool SpcIO_unknownMsgAckToAp(kal_uint16 apMsg, kal_uint32 data1, kal_uint32 reserve)
{
	kal_uint32 msgContent = SPCIO_CCCI_MSG_CONSTRCUT_CMD((apMsg|0x8000), data1);
	
	return spcIO_sendMsgViaCCCI(msgContent, reserve);
}

kal_bool SpcIO_SendMsgToAp(SPCIO_MSG_FROM_SPC spcIoMsg, kal_uint32 data1, kal_uint32 reserve)
{
	kal_uint32 msgContent;
	AUD_CCCI_MSG_T ccciMsgCmd; 

	// mapper 
	ccciMsgCmd = spcIO_msgMapper(spcIoMsg);

	msgContent = SPCIO_CCCI_MSG_CONSTRCUT_CMD(ccciMsgCmd, data1);
	return spcIO_sendMsgViaCCCI(msgContent, reserve);


}

// ----------------------------------------------------------------------------
// AUDL running functions Related
// ----------------------------------------------------------------------------

void SpcIO_Msg_Handler_inAudL(ilm_struct *ilm_ptr)
{

	//process internal queue
	while (!RB_EMPTY(gSpcIo.ccciq)) 
	{
		SPCIO_MESSAGE_T msg; 
	
		spcIO_MsgQueueGet(&msg);

#if defined( __SMART_PHONE_MODEM__ )
		if(0 != get_spcGetEpofTimes(ENUM_EPOF_DO_FORCEENDALLAPP))
		{
			if(SPC_ID_AUDIO_A2M_CCCI == msg.message_id)
			{
				kal_uint16 cmd = SPCIO_CCCI_MSG_CMD(msg.message_data);
				if(MSG_A2M_EPOF_ACK == cmd)
				{
					SpcIo_shmDestroy();
					set_spcGetEpofTimes(ENUM_EPOF_AP_ACK_NOTIFY, 1);
					if(get_spcGetEpofTimes(ENUM_EPOF_MD1_L4C_NOTIFY))
					{
						//Notify L4C: speech driver enter EPOF done
						msg_send6(MOD_MED, MOD_L4C, AUDIO_SAP, MSG_ID_AUDIO_L4C_EPOF_ACK, (local_para_struct *)NULL, NULL);
						kal_trace( TRACE_FUNC,SPCIO_EPOF_MSG_HANDLER_INAUDL_NOTIFY_L4C_DONE);
					}
					_spcIO_MsgLog(&msg, 2);
					continue;
				}
				else
				{
					//When enter EPOF, ignore all command
					kal_trace( TRACE_FUNC,SPCIO_EPOF_MSG_HANDLER_INAUDL_DROP_SPC_ID_AUDIO_A2M_CCCI, cmd);
					continue;
				}
			}
			else
			{
				//When enter EPOF, ignore all command
				kal_trace( TRACE_FUNC,SPCIO_EPOF_MSG_HANDLER_INAUDL_DROP_MESSAGE, msg.message_id);
				continue;
			}
		}
#endif //#if defined( __SMART_PHONE_MODEM__ )

		switch (msg.message_id)
		{
			case SPC_ID_AUDIO_A2M_CCCI:
				// if(SPCIO_QUEUE_STATUS_READY == gSpcIo.ccciqStatue) {
					spc_A2M_MsgHandler(msg.message_data, msg.message_dataRev, msg.message_from);
				// } else {
					// leave a log
				//	kal_trace(TRACE_INFO, SPCIO_INVALID_MSG_BEFORE_QUEUE_READY, msg.message_id, msg.message_data, msg.message_dataRev);
				// }
				break;				
		
			case SPC_ID_AUDIO_M2A_CCCI:
				//directly send when call spcIO_sendMsgViaCCCI() or spcIO_sendDataViaCCCI()
				break;
				
			case SPC_ID_AUDIO_STRM_PNW_UL_DATA_NOTIFY: 
				//handle the data to pcmNway data to AP					
#if defined(__ENABLE_SPEECH_DVT__)
				spc_pcmNWay_sendUlData(msg.message_data);					
#else // defined(__ENABLE_SPEECH_DVT__)
				spc_pcmNWay_sendUlData();					
#endif // defined(__ENABLE_SPEECH_DVT__)
				break;

			case SPC_ID_AUDIO_STRM_PNW_DL_DATA_REQUEST:
#if defined(__ENABLE_SPEECH_DVT__)
				spc_pcmNWay_requestDlData(msg.message_data);
#else // defined(__ENABLE_SPEECH_DVT__)
				spc_pcmNWay_requestDlData();
#endif // defined(__ENABLE_SPEECH_DVT__)
				break;
	
			case SPC_ID_AUDIO_STRM_BGSND_DATA_REQUEST:
				spc_bgSnd_requestData();
				break;
				
		   case SPC_ID_SPEECH_CUSTOM_DATA_REQUEST:
				// Boot UP to request EM data					
				SpcIO_SendMsgToAp(SPCIO_MSG_FROM_SPC_EM_DATA_REQUEST, 0, 0);
				// gSpcIo.ccciqStatue = SPCIO_QUEUE_STATUS_READY;
				break;

			case SPC_ID_AUDIO_STRM_VMREC_DATA_NOTIFY: // vm record
				spc_record_sendVmData();
				break;
				
#ifdef __CTM_SUPPORT__	
			case SPC_ID_AUDIO_STRM_CTM_DUMP_DATA_NOTIFY:
				spc_ctm_sendDumpDebugData();
				break;
#endif

			case SPC_ID_AUDIO_STRM_DACA_DL_DATA_NOTIFY:
				spc_daca_sendDlData();
				break;

			case SPC_ID_AUDIO_STRM_DACA_UL_DATA_REQUEST:
				spc_daca_requestUlData();					
				break;
				
			case SPC_ID_AUDIO_CONTROL_BGSND_CLOSE: // close background sound and send back the message
				spc_BgSndClose();
				break;
				
			case SPC_ID_NETWORK_STATUS_NOTIFY: 
				spc_notify_network_status(msg.message_data);
				break;						

			case SPC_ID_AUDIO_STRM_RAWPCMREC_DATA_NOTIFY: 
				spc_record_sendRawPcmData();
				break;                      
			case SPC_ID_AUDIO_CONTROL_CTM_CLOSE:
				spc_CtmClose();
				break;
			case SPC_ID_AUDIO_PCMMIXER_UL_DATA_REQUEST:
				break;
			case SPC_ID_AUDIO_PCMMIXER_DL_DATA_REQUEST:
				spc_pcmMixer_requestDlData();
				break;
			case SPC_ID_AUDIO_PCMMIXER3_UL_DATA_REQUEST:
				spc_pcmMixer3_requestUlData();
				break;
			default:
         	kal_trace(TRACE_INFO, MEDSPCIO_INVALID_MSG, msg.message_id, msg.message_data, msg.message_dataRev);
		}
		
		_spcIO_MsgLog(&msg, 2); 
	}
	
}

// ============================================================================
void SpcIo_shmDestroy(void) 
{
	if (NULL != gSpcIo.structShmBuf) {
		if( gSpcIo.structShmBuf->struct_checksum == (sizeof(sph_shm_t)-sizeof(kal_uint32)) ) {
			gSpcIo.structShmBuf->md_flag &= ~SPH_SHM_MD_FLAG_ALIVE; 			
		}
	}
}

void SpcIO_Init_B4_Scheduling(void)
{
	// do initail when AUDL first running. 
	// gSpcIo.pIlm = allocate_ilm(MOD_L1SP);

	gSpcIo.mdShareBufWrite = 0;
	gSpcIo.apShareBufWrite = 0;

	// gSpcIo.ccciqStatue = SPCIO_QUEUE_STATUS_INIT;
	
#if defined(__SDIO_DEVICE_CONNECTIVITY__) || defined(__CCCI_OVER_SDIO_SUPPORT__)
	gSpcIo.pApShareBuf = gSpcIo_ApShareBuffer;
	gSpcIo.apShareBufSize = SPCIO_SHARE_BUF_SIZE;

	gSpcIo.pMdShareBuf = gSpcIo_MdShareBuffer;
	gSpcIo.mdShareBufSize = SPCIO_SHARE_BUF_SIZE;
#endif	
}

void SpcIO_shmInit(void) // run under audio task
{
	gSpcIo.notifyInitTime = ust_get_current_time();
	
	gSpcIo.feature_support = ccci_runtime_data_query(AP_CCCI_AUDIO_RAW_MEMORY, &gSpcIo.shm, sizeof(CCCI_RUNTIME_SHARE_MEMORY_FORMAT_T ));
	if (gSpcIo.feature_support.support_mask == CCCI_RUNTIME_FEATURE_MUST_SUPPORT){
		gSpcIo.structShmBuf = (sph_shm_t *)(gSpcIo.shm.addr);

		// clean and set alive flag
		gSpcIo.structShmBuf->md_flag = SPH_SHM_MD_FLAG_ALIVE; 
	}

	SpcIO_SendMsgToAp(SPCIO_MSG_FROM_AUD_ALIVE_NOTIFY, 0, 0);		
}

void SpcIO_Init(void) {

	// run after audio task init done
	
#if 1 // defined(__SDIO_DEVICE_CONNECTIVITY__) || defined(__CCCI_OVER_SDIO_SUPPORT__)
	
#else	
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif // __SDIO_DEVICE_CONNECTIVITY__ || defined(__CCCI_OVER_SDIO_SUPPORT__)
	

#if 0
#ifdef SPH_CHIP_BACK_PHONECALL_USE
/* under construction !*/
/* under construction !*/
#else 
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif // SPH_CHIP_BACK_PHONECALL_USE
#endif

	// final step
	// gSpcIo.isTaskInitialize = KAL_TRUE;
	// always try to process queue 
	msg_send4(MOD_L1SP, MOD_MED, AUDIO_SAP, MSG_ID_AUDIO_A2M_CCCI);

    SpcIO_SendMsgToAp(SPCIO_MSG_FROM_SPC_EM_DATA_REQUEST, 0, 0);	

	gSpcIo.finishInitTime = ust_get_current_time();

	kal_trace(TRACE_INFO, SPCIO_INIT_PERIOD, gSpcIo.notifyInitTime, gSpcIo.finishInitTime);

	if(NULL != gSpcIo.structShmBuf) {
		kal_trace(TRACE_INFO, SPCIO_STRUCT_SHM_INFO, gSpcIo.shm.addr, gSpcIo.shm.size, gSpcIo.structShmBuf,
			gSpcIo.structShmBuf->guard_region_pre[0], gSpcIo.structShmBuf->ap_flag, gSpcIo.structShmBuf->md_flag,
			gSpcIo.structShmBuf->region.md_data_region.offset, gSpcIo.structShmBuf->region.md_data_region.size);
	}
	
}

