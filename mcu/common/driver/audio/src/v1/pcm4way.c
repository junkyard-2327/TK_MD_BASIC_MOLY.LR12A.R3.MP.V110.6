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
 * pcm4way.c
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description:
 * ------------
 *   PCM4WAY/PCM2WAY interface 
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
#include "kal_trace.h"
#include "sync_data.h"
#include "l1sp_trc.h"
// #include "reg_base.h"
#include "l1audio.h"
#include "am.h"

// #include "afe_def.h"
#include "media.h"
#include "pcm4way.h"
#include "sal_def.h"
#include "sal_exp.h"

#include "sp_drv.h"
#include "sp_enhance.h"


#define PCMEX_INTERNAL_BUF_MAX_SIZE 960 // 48 * 20 samples

#if defined(MT6280) || defined(MT6589) || defined(MT6572) || defined(MT6582) || defined(MT6571) || defined(MT6592) || defined(MT6290)
#define PCMEX_CO_BUFFER_WHEN_RW 0
#else //  defined(MT6595) || defined(TK6291)
#define PCMEX_CO_BUFFER_WHEN_RW 1
#endif 

_PCMEX_T pcmEx;

#if PCMEX_CO_BUFFER_WHEN_RW
static uint16 pcmEx_ul1_tempBufDataSize;
static uint16 pcmEx_ul2_tempBufDataSize;
static uint16 pcmEx_ul3_tempBufDataSize;
static uint16 pcmEx_ul4_tempBufDataSize;

static uint16 pcmEx_dl_tempBufDataSize;

static uint16 pcmEx_ul1_tempBuf[PCMEX_INTERNAL_BUF_MAX_SIZE];
static uint16 pcmEx_ul2_tempBuf[PCMEX_INTERNAL_BUF_MAX_SIZE];
static uint16 pcmEx_ul3_tempBuf[PCMEX_INTERNAL_BUF_MAX_SIZE];
static uint16 pcmEx_ul4_tempBuf[PCMEX_INTERNAL_BUF_MAX_SIZE];

static uint16 pcmEx_dl_tempBuf[PCMEX_INTERNAL_BUF_MAX_SIZE];
#endif

void pcmEx_Init()
{
	pcmEx.PCMEXspinLockID = kal_create_spinlock("PCMEX_LOCK");

}

uint16 pcmEx_getDataFromDsp(uint16 *toBuf, Sal_PcmEx_BufId_t bufName, kal_bool isUl)
{
   uint32 I;
   uint16 bufLen = SAL_PcmEx_GetBufLen(bufName); 
	
   // Use address mode to prevent idma being interrupted by other ISR, ie. L1D.
   volatile uint16* ptr = SAL_PcmEx_GetBuf(bufName);
   kal_trace( TRACE_FUNC, P4W_GETDATAFROMDSP , bufName, ptr, bufLen);
   if( SP_IsMicMute() && (KAL_TRUE == isUl) ){
      for( I = bufLen; I > 0; I-- )
         *toBuf++ = 0;
   } else {
      for( I = bufLen; I > 0; I-- )    
          *toBuf++ = *ptr++;
   }

	return bufLen;
}

uint16 pcmEx_writeDataToDsp(const uint16 *fromBuf, Sal_PcmEx_BufId_t bufName)
{
   uint32 I;
   uint16 bufLen = SAL_PcmEx_GetBufLen(bufName);
	
   volatile uint16* ptr = SAL_PcmEx_GetBuf(bufName);
   kal_trace( TRACE_FUNC, P4W_WRITEDATATODSP , bufName, ptr, bufLen);
   for( I = bufLen; I > 0; I-- )
      *ptr++ = *fromBuf++;
   Data_Sync_Barrier();

   return bufLen;
}

uint16 pcmEx_writePatternToDsp(uint16 pattern, Sal_PcmEx_BufId_t bufName)  
{
   uint32 I;
	uint16 bufLen = SAL_PcmEx_GetBufLen(bufName);
	
   volatile uint16* ptr = SAL_PcmEx_GetBuf(bufName);
   for( I = bufLen; I > 0; I-- )
      *ptr++ = pattern;
   Data_Sync_Barrier();

	return bufLen;
}


void pcmEx_hisrDlHdlr(void *param) 
{  
	kal_take_spinlock(pcmEx.PCMEXspinLockID, KAL_INFINITE_WAIT);
	if(pcmEx.running == 0){
		kal_give_spinlock(pcmEx.PCMEXspinLockID);
        return;
	}

#if PCMEX_CO_BUFFER_WHEN_RW

	// get SD buf data to temp buffer
	pcmEx_dl_tempBufDataSize = pcmEx_getDataFromDsp(pcmEx_dl_tempBuf, SAL_PCMEX_PNW_BUF_D2M_DL1, KAL_FALSE);

#endif 

	// handler callback 
	 kal_give_spinlock(pcmEx.PCMEXspinLockID);
   if(pcmEx.pnw_dl_hdlr)
   {
      pcmEx.pnw_dl_hdlr();
   }
   
}

void pcmEx_hisrUlHdlr(void *param) 
{
	kal_take_spinlock(pcmEx.PCMEXspinLockID, KAL_INFINITE_WAIT);
	if(pcmEx.running == 0){
		kal_give_spinlock(pcmEx.PCMEXspinLockID);
        return;
	}
  kal_give_spinlock(pcmEx.PCMEXspinLockID);
#if PCMEX_CO_BUFFER_WHEN_RW

	// mics' data to temp buffer	
	if(pcmEx.cfgUL1) {
		pcmEx_ul1_tempBufDataSize = pcmEx_getDataFromDsp(pcmEx_ul1_tempBuf, SAL_PCMEX_PNW_BUF_D2M_UL1, KAL_TRUE);
	}
	
	kal_take_spinlock(pcmEx.PCMEXspinLockID, KAL_INFINITE_WAIT);
	if(pcmEx.running == 0){
		kal_give_spinlock(pcmEx.PCMEXspinLockID);
        return;
	}
	
  kal_give_spinlock(pcmEx.PCMEXspinLockID);
	if(pcmEx.cfgUL2) {
		pcmEx_ul2_tempBufDataSize = pcmEx_getDataFromDsp(pcmEx_ul2_tempBuf, SAL_PCMEX_PNW_BUF_D2M_UL2, KAL_TRUE);
	}
	
	kal_take_spinlock(pcmEx.PCMEXspinLockID, KAL_INFINITE_WAIT);
	if(pcmEx.running == 0){
		kal_give_spinlock(pcmEx.PCMEXspinLockID);
        return;
	}
	
  kal_give_spinlock(pcmEx.PCMEXspinLockID);
	if(pcmEx.cfgUL3) {
		pcmEx_ul3_tempBufDataSize = pcmEx_getDataFromDsp(pcmEx_ul3_tempBuf, SAL_PCMEX_PNW_BUF_D2M_UL3, KAL_TRUE);
	}
	
	kal_take_spinlock(pcmEx.PCMEXspinLockID, KAL_INFINITE_WAIT);
	if(pcmEx.running == 0){
		kal_give_spinlock(pcmEx.PCMEXspinLockID);
        return;
	}
  kal_give_spinlock(pcmEx.PCMEXspinLockID);
	if(pcmEx.cfgUL4) {
		pcmEx_ul4_tempBufDataSize = pcmEx_getDataFromDsp(pcmEx_ul4_tempBuf, SAL_PCMEX_PNW_BUF_D2M_UL4, KAL_TRUE);	
	}
	
#endif 
   
	// handler callback 	
   if(pcmEx.pnw_ul_hdlr)
   {
      pcmEx.pnw_ul_hdlr();   
   }
}


/**

@pcmNway_dl_hdlr
@pcmNway_ul_hdlr: 
*/
void Idle_PcmEx_Start(void (*pcmNway_dl_hdlr)(void), void (*pcmNway_ul_hdlr)(void), 
	uint32 cfgUL1, uint32 cfgUL2, uint32 cfgUL3, uint32 cfgUL4, uint32 cfgDL,
	PCMEX_BAND band, PCMEX_IDLE_ENH_SETTING enhSetting)
{
   uint32 I;
   //kal_bool flag;

	// prevent re-entry!! 
 	ASSERT(PNW_STATE_IDLE == pcmEx.state); 
 
   pcmEx.aud_id = L1Audio_GetAudioID();
   L1Audio_SetFlag( pcmEx.aud_id );      /*Be careful.Before Locking SleepMode, to access DSP sherrif tasks much time. So access DSP must be after SetFlag*/

	// band and am type setting
	pcmEx.bandInfo = band;	
	switch(band){
		case PCMEX_BAND_NB:
		{
			ASSERT(enhSetting != PCMEX_IDLE_ENH_SETTING_NONE);
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
#endif 			
				pcmEx.am_type = AM_PCMEX_TYPE_IDLE;
// 			}
		}
			break;
		case PCMEX_BAND_WB:
		{
			ASSERT(enhSetting != PCMEX_IDLE_ENH_SETTING_NONE);
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
#endif			

				pcmEx.am_type = AM_PCMEX_TYPE_IDLE;
//			}
		}
			break;
		default: // include PCMEX_BAND_DYNAMIC and PCMEX_BAND_UNSET cases
			ASSERT(0);
	}
 	pcmEx.cfgUL1 = cfgUL1;
	pcmEx.cfgUL2 = cfgUL2;
	pcmEx.cfgUL3 = cfgUL3;
	pcmEx.cfgUL4 = cfgUL4;
	pcmEx.cfgDL = cfgDL; 
	
	pcmEx.pnw_dl_hdlr = pcmNway_dl_hdlr; 
	pcmEx.pnw_ul_hdlr = pcmNway_ul_hdlr; 
	
   L1Audio_HookHisrHandler(DP_D2C_PCM_EX_DL,(L1Audio_EventHandler)pcmEx_hisrDlHdlr, 0);
   L1Audio_HookHisrHandler(DP_D2C_PCM_EX_UL,(L1Audio_EventHandler)pcmEx_hisrUlHdlr, 0);

	// check DSP state and turn on 
   ASSERT(SAL_PcmEx_CheckStateUL(SAL_PCMEX_TYPE_PNW, SAL_PCMEX_OFF) && SAL_PcmEx_CheckStateDL(SAL_PCMEX_TYPE_PNW, SAL_PCMEX_OFF));
   AM_PCM_EX_On(pcmEx.am_type, (uint32)(&pcmEx));//to config pnw

   SAL_PcmEx_SetStateUL(SAL_PCMEX_TYPE_PNW, SAL_PCMEX_ON);
   SAL_PcmEx_SetStateDL(SAL_PCMEX_TYPE_PNW, SAL_PCMEX_ON);  

	// wait for ready
   for(I = 0; ;I ++){
      kal_bool is_ready = true;

      if( (pcmEx.cfgDL & (USE_D2M_PATH+USE_M2D_PATH)) && (!SAL_PcmEx_CheckStateDL(SAL_PCMEX_TYPE_PNW, SAL_PCMEX_RDY)))
         is_ready &= false;
      if( (pcmEx.cfgUL1 & (USE_D2M_PATH+USE_M2D_PATH)) && (!SAL_PcmEx_CheckStateUL(SAL_PCMEX_TYPE_PNW, SAL_PCMEX_RDY)))
         is_ready &= false;    
		
      if(is_ready)
         break;
#ifndef L1D_TEST
      ASSERT(I < 22);  // wait 200ms  
      kal_sleep_task( AUD_1TICK(2) );
#endif
   }      
	
   pcmEx.state = PNW_STATE_RUN;

	if(PCMEX_IDLE_ENH_SETTING_WITH == enhSetting) {
		pcmEx.isEnhOn = true;
		SetSpeechEnhancement(true);
	}
	kal_take_spinlock(pcmEx.PCMEXspinLockID, KAL_INFINITE_WAIT);
	pcmEx.running = 1;
	kal_give_spinlock(pcmEx.PCMEXspinLockID);
     
   /* the end of configure the SAL */             
}  
   


void Del_PcmEx_Start(void (*pcmNway_dl_hdlr)(void), void (*pcmNway_ul_hdlr)(void), 
	uint32 cfgUL1, uint32 cfgUL2, uint32 cfgUL3, uint32 cfgUL4, uint32 cfgDL)
{
   uint32 I;
   //kal_bool flag;

	// prevent re-entry!! 
 	ASSERT(PNW_STATE_IDLE == pcmEx.state);
 
   pcmEx.aud_id = L1Audio_GetAudioID();
   L1Audio_SetFlag( pcmEx.aud_id );      /*Be careful.Before Locking SleepMode, to access DSP sherrif tasks much time. So access DSP must be after SetFlag*/

	// band and am type setting
	pcmEx.bandInfo = PCMEX_BAND_DYNAMIC;	
	pcmEx.am_type = AM_PCMEX_TYPE_DEDICATION;
	
	// pcmEx.dspPcmExMicLen = 0;
	// pcmEx.dspPcmExSpkLen = 0;
	
 	pcmEx.cfgUL1 = cfgUL1;
	pcmEx.cfgUL2 = cfgUL2;
	pcmEx.cfgUL3 = cfgUL3;
	pcmEx.cfgUL4 = cfgUL4;
	
	pcmEx.cfgDL = cfgDL; 
	
	pcmEx.pnw_dl_hdlr = pcmNway_dl_hdlr; 
	pcmEx.pnw_ul_hdlr = pcmNway_ul_hdlr; 
	
   L1Audio_HookHisrHandler(DP_D2C_PCM_EX_DL,(L1Audio_EventHandler)pcmEx_hisrDlHdlr, 0);
   L1Audio_HookHisrHandler(DP_D2C_PCM_EX_UL,(L1Audio_EventHandler)pcmEx_hisrUlHdlr, 0);

	// check DSP state and turn on 
   ASSERT(SAL_PcmEx_CheckStateUL(SAL_PCMEX_TYPE_PNW, SAL_PCMEX_OFF) && SAL_PcmEx_CheckStateDL(SAL_PCMEX_TYPE_PNW, SAL_PCMEX_OFF));
   AM_PCM_EX_On(pcmEx.am_type, (uint32)(&pcmEx));//to config pnw

   SAL_PcmEx_SetStateUL(SAL_PCMEX_TYPE_PNW, SAL_PCMEX_ON);
   SAL_PcmEx_SetStateDL(SAL_PCMEX_TYPE_PNW, SAL_PCMEX_ON);  

	// wait for ready
   for(I = 0; ;I ++){
      kal_bool is_ready = true;

      if( (pcmEx.cfgDL & (USE_D2M_PATH+USE_M2D_PATH)) && (!SAL_PcmEx_CheckStateDL(SAL_PCMEX_TYPE_PNW, SAL_PCMEX_RDY)))
         is_ready &= false;
      if( (pcmEx.cfgUL1 & (USE_D2M_PATH+USE_M2D_PATH)) && (!SAL_PcmEx_CheckStateUL(SAL_PCMEX_TYPE_PNW, SAL_PCMEX_RDY)))
         is_ready &= false;    
		
      if(is_ready)
         break;
#ifndef L1D_TEST
      ASSERT(I < 22);  // wait 200ms  
      kal_sleep_task( AUD_1TICK(2) );
#endif
   }      
	
   pcmEx.state = PNW_STATE_RUN;
   	kal_take_spinlock(pcmEx.PCMEXspinLockID, KAL_INFINITE_WAIT);
	pcmEx.running = 1;
	kal_give_spinlock(pcmEx.PCMEXspinLockID);
   /* the end of configure the SAL */             
}  

void PcmEx_Stop(void)
{
	
	ASSERT( PNW_STATE_RUN == pcmEx.state); 
    kal_take_spinlock(pcmEx.PCMEXspinLockID, KAL_INFINITE_WAIT);
	pcmEx.running = 0;
	kal_give_spinlock(pcmEx.PCMEXspinLockID);
	if(true == pcmEx.isEnhOn) {
		SetSpeechEnhancement(false);
	}

   /* the begining of configure the SAL */ 
	ASSERT(SAL_PcmEx_CheckStateUL(SAL_PCMEX_TYPE_PNW, SAL_PCMEX_OFF) || SAL_PcmEx_CheckStateUL(SAL_PCMEX_TYPE_PNW, SAL_PCMEX_RDY));
	ASSERT(SAL_PcmEx_CheckStateDL(SAL_PCMEX_TYPE_PNW, SAL_PCMEX_OFF) || SAL_PcmEx_CheckStateDL(SAL_PCMEX_TYPE_PNW, SAL_PCMEX_RDY));
               
   SAL_PcmEx_SetStateUL(SAL_PCMEX_TYPE_PNW, SAL_PCMEX_OFF);
   SAL_PcmEx_SetStateDL(SAL_PCMEX_TYPE_PNW, SAL_PCMEX_OFF);

   AM_PCM_EX_Off(pcmEx.am_type, (uint32)(&pcmEx));
   
   L1Audio_UnhookHisrHandler(DP_D2C_PCM_EX_DL); 
   L1Audio_UnhookHisrHandler(DP_D2C_PCM_EX_UL); 
	
   L1Audio_ClearFlag( pcmEx.aud_id );
   L1Audio_FreeAudioID( pcmEx.aud_id );   

	// set to default. 
   pcmEx.pnw_dl_hdlr = pcmEx.pnw_ul_hdlr = NULL;
	pcmEx.cfgUL1 = 0;
	pcmEx.cfgUL2 = 0;
	pcmEx.cfgUL3 = 0;
	pcmEx.cfgUL4 = 0;
	pcmEx.cfgDL = 0;

	// pcmEx.dspPcmExMicLen = 0; 
	// pcmEx.dspPcmExSpkLen = 0;

   pcmEx.bandInfo = PCMEX_BAND_UNSET;	
   pcmEx.am_type  = AM_PCMEX_TYPE_UNDEF;   
				
   pcmEx.state = PNW_STATE_IDLE;        
   
   
}


uint16 PcmEx_GetFromMic1(uint16 *ul_buf)
{
#if PCMEX_CO_BUFFER_WHEN_RW

	memcpy(ul_buf, pcmEx_ul1_tempBuf, pcmEx_ul1_tempBufDataSize*sizeof(uint16));
	return pcmEx_ul1_tempBufDataSize;

#else

	return pcmEx_getDataFromDsp(ul_buf, SAL_PCMEX_PNW_BUF_D2M_UL1, KAL_TRUE);

#endif
}

uint16 PcmEx_GetFromMic2(uint16 *ul_buf)
{
#if PCMEX_CO_BUFFER_WHEN_RW

	memcpy(ul_buf, pcmEx_ul2_tempBuf, pcmEx_ul2_tempBufDataSize*sizeof(uint16));
	return pcmEx_ul2_tempBufDataSize;

#else

	return pcmEx_getDataFromDsp(ul_buf, SAL_PCMEX_PNW_BUF_D2M_UL2, KAL_TRUE);

#endif
}

uint16 PcmEx_GetFromMic3(uint16 *ul_buf)
{
#if PCMEX_CO_BUFFER_WHEN_RW

	memcpy(ul_buf, pcmEx_ul3_tempBuf, pcmEx_ul3_tempBufDataSize*sizeof(uint16));
	return pcmEx_ul3_tempBufDataSize;
	
#else

	return 0;

#endif
}

uint16 PcmEx_GetFromMic4(uint16 *ul_buf)
{
#if PCMEX_CO_BUFFER_WHEN_RW

	memcpy(ul_buf, pcmEx_ul4_tempBuf, pcmEx_ul4_tempBufDataSize*sizeof(uint16));
	return pcmEx_ul4_tempBufDataSize;

#else 

	return 0 ;

#endif
}

uint16 PcmEx_PutToSE1(const uint16 *ul_data)  
{
#if PCMEX_CO_BUFFER_WHEN_RW
	return pcmEx_writeDataToDsp(ul_data, SAL_PCMEX_PNW_BUF_M2D_UL1);
#else
	return pcmEx_writeDataToDsp(ul_data, SAL_PCMEX_PNW_BUF_M2D_UL2);
#endif
}

uint16 PcmEx_FillSE1(uint16 value)  
{
#if PCMEX_CO_BUFFER_WHEN_RW	
		return pcmEx_writePatternToDsp(value, SAL_PCMEX_PNW_BUF_M2D_UL1);	
#else	
		return pcmEx_writePatternToDsp(value, SAL_PCMEX_PNW_BUF_M2D_UL2);	
#endif
}

uint16 PcmEx_PutToSE2(const uint16 *ul_data)  
{
#if PCMEX_CO_BUFFER_WHEN_RW
	return pcmEx_writeDataToDsp(ul_data, SAL_PCMEX_PNW_BUF_M2D_UL2);
#else
	return 0; 
#endif
}

uint16 PcmEx_FillSE2(uint16 value)  
{
#if PCMEX_CO_BUFFER_WHEN_RW	
		return pcmEx_writePatternToDsp(value, SAL_PCMEX_PNW_BUF_M2D_UL2);	
#else	
		return 0;
#endif
}

uint16 PcmEx_PutToSE3(const uint16 *ul_data)  
{
#if PCMEX_CO_BUFFER_WHEN_RW
	return pcmEx_writeDataToDsp(ul_data, SAL_PCMEX_PNW_BUF_M2D_UL3);
#else
	return 0; 
#endif
}

uint16 PcmEx_FillSE3(uint16 value)  
{
#if PCMEX_CO_BUFFER_WHEN_RW	
		return pcmEx_writePatternToDsp(value, SAL_PCMEX_PNW_BUF_M2D_UL3);	
#else	
		return 0;
#endif
}

uint16 PcmEx_PutToSE4(const uint16 *ul_data)  
{
#if PCMEX_CO_BUFFER_WHEN_RW
	return pcmEx_writeDataToDsp(ul_data, SAL_PCMEX_PNW_BUF_M2D_UL4);
#else
	return 0; 
#endif
}

uint16 PcmEx_FillSE4(uint16 value)  
{
#if PCMEX_CO_BUFFER_WHEN_RW	
		return pcmEx_writePatternToDsp(value, SAL_PCMEX_PNW_BUF_M2D_UL4);	
#else	
		return 0;
#endif
}

// --------------------------

uint16 PcmEx_GetFromSD(uint16 *dl_buf)
{
#if PCMEX_CO_BUFFER_WHEN_RW

	memcpy(dl_buf, pcmEx_dl_tempBuf, pcmEx_dl_tempBufDataSize*sizeof(uint16));
	return pcmEx_dl_tempBufDataSize;

#else 
	return pcmEx_getDataFromDsp(dl_buf,SAL_PCMEX_PNW_BUF_D2M_DL1 , KAL_FALSE);
#endif
}

uint16 PcmEx_PutToSpk(const uint16 *dl_data)
{
#if PCMEX_CO_BUFFER_WHEN_RW
	return pcmEx_writeDataToDsp(dl_data, SAL_PCMEX_PNW_BUF_M2D_DL1);
#else
	return pcmEx_writeDataToDsp(dl_data, SAL_PCMEX_PNW_BUF_M2D_DL1);
#endif

}

uint16 PcmEx_FillSpk(uint16 value)
{
#if PCMEX_CO_BUFFER_WHEN_RW	
	return pcmEx_writePatternToDsp(value, SAL_PCMEX_PNW_BUF_M2D_DL1);	
#else	
	return pcmEx_writePatternToDsp(value, SAL_PCMEX_PNW_BUF_M2D_DL1);	
#endif

}


//************** PCM 4-WAY ****************************************************

void PCM4WAY_Start(void (*pcm4way_hdlr)(void), uint32 type)
{
	switch(type) {
		case P4W_APP_CTM: 
			Del_PcmEx_Start(pcm4way_hdlr, NULL,
				USE_D2M_PATH + USE_M2D_PATH + DATA_SELECT_AFTER_ENH, // ul1
				USE_D2M_PATH + USE_M2D_PATH + DATA_SELECT_AFTER_ENH, // ul2
				USE_D2M_PATH + USE_M2D_PATH + DATA_SELECT_AFTER_ENH, // ul3
				USE_D2M_PATH + USE_M2D_PATH + DATA_SELECT_AFTER_ENH, // ul4
				USE_D2M_PATH + USE_M2D_PATH );
			break;
		case P4W_APP_TYPE_UNDER_CALL: 
			Del_PcmEx_Start(pcm4way_hdlr, NULL,
				USE_D2M_PATH + USE_M2D_PATH + DATA_SELECT_AFTER_ENH, // ul1
				USE_D2M_PATH + USE_M2D_PATH + DATA_SELECT_AFTER_ENH, // ul2
				USE_D2M_PATH + USE_M2D_PATH + DATA_SELECT_AFTER_ENH, // ul3
				USE_D2M_PATH + USE_M2D_PATH + DATA_SELECT_AFTER_ENH, // ul4
				USE_D2M_PATH + USE_M2D_PATH);
			break;
		case P4W_APP_TYPE_WITHOUT_CALL:
			Idle_PcmEx_Start(pcm4way_hdlr, NULL, 
				USE_D2M_PATH + USE_M2D_PATH + DATA_SELECT_AFTER_ENH, // ul1
				USE_D2M_PATH + USE_M2D_PATH + DATA_SELECT_AFTER_ENH, // ul2
				USE_D2M_PATH + USE_M2D_PATH + DATA_SELECT_AFTER_ENH, // ul3
				USE_D2M_PATH + USE_M2D_PATH + DATA_SELECT_AFTER_ENH, // ul4
				USE_D2M_PATH + USE_M2D_PATH,
				PCMEX_BAND_NB, PCMEX_IDLE_ENH_SETTING_WITH); // nb 
			break;
		case P4W_APP_TYPE_WITHOUT_CALL_WB:
			Idle_PcmEx_Start(pcm4way_hdlr, NULL, 
				USE_D2M_PATH + USE_M2D_PATH + DATA_SELECT_AFTER_ENH, // ul1
				USE_D2M_PATH + USE_M2D_PATH + DATA_SELECT_AFTER_ENH, // ul2
				USE_D2M_PATH + USE_M2D_PATH + DATA_SELECT_AFTER_ENH, // ul3
				USE_D2M_PATH + USE_M2D_PATH + DATA_SELECT_AFTER_ENH, // ul4
				USE_D2M_PATH + USE_M2D_PATH,
				PCMEX_BAND_WB, PCMEX_IDLE_ENH_SETTING_WITH);
			break;
		default:
			ASSERT(0);
	}


}

void PCM4WAY_Stop(uint32 type)
{
   PcmEx_Stop();
}

uint16 PCM4WAY_GetFromMic(uint16 *ul_buf)
{
	return PcmEx_GetFromMic1(ul_buf);
}
uint16 PCM4WAY_GetFromMic2(uint16 *ul_buf)
{
    return PcmEx_GetFromMic2(ul_buf);
}
  
uint16 PCM4WAY_PutToSE(const uint16 *ul_data)  
{
	return PcmEx_PutToSE1(ul_data);
}

uint16 PCM4WAY_PutToSE2(const uint16 *ul_data)  
{
    return PcmEx_PutToSE2(ul_data);
}

uint16 PCM4WAY_FillSE(uint16 value)  
{
	return PcmEx_FillSE1(value);
}

uint16 PCM4WAY_FillSE2(uint16 value)  
{
	return PcmEx_FillSE2(value);
}

uint16 PCM4WAY_GetFromSD(uint16 *dl_buf)
{
	return PcmEx_GetFromSD(dl_buf);

}

uint16 PCM4WAY_PutToSpk(const uint16 *dl_data)
{
	return PcmEx_PutToSpk(dl_data);
}

uint16 PCM4WAY_FillSpk(uint16 value)
{
	return PcmEx_FillSpk(value);

}

//************** PCM 2-WAY ****************************************************

void PCM2WAY_Start(void (*pcm2way_hdlr)(void), uint32 type)
{
	switch(type) {
		case P2W_APP_TYPE_UNDER_CALL: 
			Del_PcmEx_Start(pcm2way_hdlr, NULL,
				USE_D2M_PATH + DATA_SELECT_AFTER_ENH, // ul1
				USE_D2M_PATH + DATA_SELECT_AFTER_ENH, // ul2
				USE_D2M_PATH + DATA_SELECT_AFTER_ENH, // ul3
				USE_D2M_PATH + DATA_SELECT_AFTER_ENH, // ul4
				USE_M2D_PATH);
			break;
		case P2W_APP_TYPE_VOIP:
		case P2W_APP_TYPE_WITHOUT_CALL:
			Idle_PcmEx_Start(pcm2way_hdlr, NULL, 
				USE_D2M_PATH + DATA_SELECT_AFTER_ENH, // ul1
				USE_D2M_PATH + DATA_SELECT_AFTER_ENH, // ul2
				USE_D2M_PATH + DATA_SELECT_AFTER_ENH, // ul3
				USE_D2M_PATH + DATA_SELECT_AFTER_ENH, // ul4
				USE_M2D_PATH,
				PCMEX_BAND_NB, PCMEX_IDLE_ENH_SETTING_WITH); // nb 
			break;		
		default:
			ASSERT(0);
	}
}

void PCM2WAY_Stop(uint32 type)
{
   PcmEx_Stop();
}



uint16 PCM2WAY_GetFromMic(uint16 *ul_buf)
{
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
#endif	
		return PcmEx_GetFromMic1(ul_buf);
//	}
} 

uint16 PCM2WAY_PutToSpk(const uint16 *dl_data)
{
	return PcmEx_PutToSpk(dl_data);
}


uint16 PCM2WAY_FillSpk(uint16 value)
{
	return PcmEx_FillSpk(value);
}

