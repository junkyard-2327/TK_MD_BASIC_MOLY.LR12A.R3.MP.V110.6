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
 *   EXTCODEC interface 
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

#include "media.h"
#include "extcodec.h"
#include "sal_def.h"
#include "sal_exp.h"

#include "sp_drv.h"
#include "sp_enhance.h"


#define ACLOOPBACK_FRAME_BUF_NO (64) // REMIND: should be pow of 2 
#define ACLOOPBACK_NB_FRAME_SIZE   (160)
//static uint16 gSpc_acLoopback_PCM_UL_BUF[ACLOOPBACK_NB_FRAME_SIZE];
#if defined (__SMART_PHONE_MODEM__)	
static uint16 gSpc_acLoopback_PCM_DL_BUF[ACLOOPBACK_FRAME_BUF_NO][ACLOOPBACK_NB_FRAME_SIZE];
#endif // defined (__SMART_PHONE_MODEM__) 

typedef struct _EXTCODEC_T_
{
	kal_uint8    pnwBufInfo; //ref to SPC_PNW_MSG_BUFFER_x
	kal_uint8    pnwBand; //0: for narrow band, 1: for wide band
	kal_uint32   micBufSize; // unit is byte (8bit)
	kal_uint32   spkBufSize; // unit is byte (8bit)
	kal_uint32   DL_tmp_w;
	kal_uint32   DL_tmp_r;
	kal_uint32   delay;
	kal_uint32   running;
	kal_spinlockid  extcodecspinLockID;
}_EXTCODEC_T_;

_EXTCODEC_T_ extcodec;

void  Extcodec_Set_Delay(kal_uint32 delay)
{
   extcodec.delay = delay;
}

void  Extcodec_Call_Open()
{
#if defined (__SMART_PHONE_MODEM__)	
	 int I;
   kal_take_spinlock(extcodec.extcodecspinLockID, KAL_INFINITE_WAIT);
   extcodec.running = 1;
   kal_give_spinlock(extcodec.extcodecspinLockID);
	 extcodec.DL_tmp_w = 0;
	 extcodec.DL_tmp_r = 0;	 
	 //extcodec.pnwBufInfo = (param & 0xf); // i.e.  param & (SPC_PNW_MSG_BUFFER_SE|SPC_PNW_MSG_BUFFER_SPK|SPC_PNW_MSG_BUFFER_MIC|SPC_PNW_MSG_BUFFER_SD)
	 //ASSERT(extcodec.pnwBufInfo != 0);
   
	 extcodec.micBufSize = 0;
	 extcodec.spkBufSize = 0;
   
   ASSERT(SAL_PcmEx_CheckStateUL(SAL_PCMEX_TYPE_EXT_COD, SAL_PCMEX_OFF) && SAL_PcmEx_CheckStateDL(SAL_PCMEX_TYPE_EXT_COD, SAL_PCMEX_OFF));	 
   SAL_PcmEx_SetStateUL(SAL_PCMEX_TYPE_EXT_COD, SAL_PCMEX_ON);
   SAL_PcmEx_SetStateDL(SAL_PCMEX_TYPE_EXT_COD, SAL_PCMEX_ON);
   for(I = 0; ;I ++){
      kal_bool is_ready = true;
      int test_return_DL, test_return_UL;
	    test_return_DL = SAL_PcmEx_CheckStateDL(SAL_PCMEX_TYPE_EXT_COD, SAL_PCMEX_RDY);
	    test_return_UL = SAL_PcmEx_CheckStateUL(SAL_PCMEX_TYPE_EXT_COD, SAL_PCMEX_RDY);
	    kal_prompt_trace(MOD_L1SP,"extcodec check status");
      if( !test_return_DL){
         is_ready &= false;
      }
      
      if( !test_return_UL){
         is_ready &= false;
      }
      
      if(is_ready){
         break;
      }
      ASSERT(I < 40);  // wait 400ms
      kal_sleep_task( AUD_1TICK(2) );
   }
#endif // defined (__SMART_PHONE_MODEM__)  
}

void  Extcodec_Call_Close()
{
#if defined (__SMART_PHONE_MODEM__)		
   Sal_PCMEx_Config_t cfg;
   kal_take_spinlock(extcodec.extcodecspinLockID, KAL_INFINITE_WAIT);
   extcodec.running = 0;
   kal_give_spinlock(extcodec.extcodecspinLockID);
   memset(&cfg, 0, sizeof(Sal_PCMEx_Config_t));
   /* the begining of configure the SAL */ 
   ASSERT(SAL_PcmEx_CheckStateUL(SAL_PCMEX_TYPE_EXT_COD, SAL_PCMEX_OFF) || SAL_PcmEx_CheckStateUL(SAL_PCMEX_TYPE_EXT_COD, SAL_PCMEX_RDY));
   ASSERT(SAL_PcmEx_CheckStateDL(SAL_PCMEX_TYPE_EXT_COD, SAL_PCMEX_OFF) || SAL_PcmEx_CheckStateDL(SAL_PCMEX_TYPE_EXT_COD, SAL_PCMEX_RDY));             
   SAL_PcmEx_SetStateUL(SAL_PCMEX_TYPE_EXT_COD, SAL_PCMEX_OFF);
   SAL_PcmEx_SetStateDL(SAL_PCMEX_TYPE_EXT_COD, SAL_PCMEX_OFF);
   cfg.swi = SAL_PCMEX_SWITCH_OFF;
   cfg.type = SAL_PCMEX_TYPE_EXT_COD;
   cfg.band = SAL_PCM_NARROWBAND;   
   SAL_PcmEx_Config(&cfg);
   
   // clear buffer
   extcodec.pnwBufInfo = 0;
   extcodec.micBufSize = 0;
   extcodec.spkBufSize = 0;
#endif // defined (__SMART_PHONE_MODEM__)  
}

void Extcodec_Init()
{
   extcodec.extcodecspinLockID = kal_create_spinlock("EXTCODEC_LOCK");
}
uint16 Extcodec_GetFromMic(uint16 *toBuf)
{
   uint32 I;
	 uint16 bufLen = SAL_PcmEx_GetBufLen(SAL_PCMEX_EXTCOD_BUF_UL);
   volatile uint16* ptr = SAL_PcmEx_GetBuf(SAL_PCMEX_EXTCOD_BUF_UL);
   if( SP_IsMicMute() ){
      for( I = bufLen; I > 0; I-- ){
         *toBuf++ = 0;
      }
   } else {
      for( I = bufLen; I > 0; I-- ){
          *toBuf++ = *ptr++;
      }
   }
	 return bufLen;
}

uint16 Extcodec_PutToSpk(const uint16 *fromBuf)
{
   uint32 I;
	 uint16 bufLen = SAL_PcmEx_GetBufLen(SAL_PCMEX_EXTCOD_BUF_DL);
   volatile uint16* ptr = SAL_PcmEx_GetBuf(SAL_PCMEX_EXTCOD_BUF_DL);
   for( I = bufLen; I > 0; I-- ){
      *ptr++ = *fromBuf++;
   }
	 return bufLen;
}

void Extcodec_hisr_dl_loopback(void *data)
{  	
#if defined (__SMART_PHONE_MODEM__)
     kal_prompt_trace(MOD_L1SP,"Extcodec_hisr_dl_loopback"); 
   //if (extcodec.pnwBufInfo & SPC_PNW_MSG_BUFFER_SPK) {
   	  	 if( extcodec.DL_tmp_w > extcodec.DL_tmp_r  &&(extcodec.DL_tmp_w - extcodec.DL_tmp_r) >= extcodec.delay){
   	  	 	   extcodec.spkBufSize = Extcodec_PutToSpk(gSpc_acLoopback_PCM_DL_BUF[extcodec.DL_tmp_r & (ACLOOPBACK_FRAME_BUF_NO - 1)]);  
             (extcodec.DL_tmp_r)++;
              kal_dev_trace( TRACE_INFO, SPC_AC_LOOPBACK_TO_SPK, 
							       gSpc_acLoopback_PCM_DL_BUF[extcodec.DL_tmp_r & (ACLOOPBACK_FRAME_BUF_NO - 1)][0],
							       gSpc_acLoopback_PCM_DL_BUF[extcodec.DL_tmp_r & (ACLOOPBACK_FRAME_BUF_NO - 1)][1],
							       gSpc_acLoopback_PCM_DL_BUF[extcodec.DL_tmp_r & (ACLOOPBACK_FRAME_BUF_NO - 1)][2],
							       gSpc_acLoopback_PCM_DL_BUF[extcodec.DL_tmp_r & (ACLOOPBACK_FRAME_BUF_NO - 1)][3]);	           
         }
   //}
#endif // defined (__SMART_PHONE_MODEM__)   
}

void Extcodec_hisr_ul_loopback(void *data)
{
#if defined (__SMART_PHONE_MODEM__)
   kal_prompt_trace(MOD_L1SP,"Extcodec_hisr_ul_loopback"); 
   kal_take_spinlock(extcodec.extcodecspinLockID, KAL_INFINITE_WAIT);
   if(extcodec.running == 0)
   {
	    kal_prompt_trace(MOD_L1SP,"Extcodec stop hisr skip");
	    kal_give_spinlock(extcodec.extcodecspinLockID);
	    return;
   }   
   //if (extcodec.pnwBufInfo & SPC_PNW_MSG_BUFFER_MIC) {
   	  if( (extcodec.DL_tmp_w - extcodec.DL_tmp_r) <= extcodec.delay ){
         extcodec.micBufSize = Extcodec_GetFromMic((uint16*)gSpc_acLoopback_PCM_DL_BUF[extcodec.DL_tmp_w & (ACLOOPBACK_FRAME_BUF_NO - 1)]);
         (extcodec.DL_tmp_w)++;
          kal_dev_trace( TRACE_INFO, SPC_AC_LOOPBACK_FROM_SD, 
                  gSpc_acLoopback_PCM_DL_BUF[extcodec.DL_tmp_w & (ACLOOPBACK_FRAME_BUF_NO - 1)][0],
                  gSpc_acLoopback_PCM_DL_BUF[extcodec.DL_tmp_w & (ACLOOPBACK_FRAME_BUF_NO - 1)][1],
                  gSpc_acLoopback_PCM_DL_BUF[extcodec.DL_tmp_w & (ACLOOPBACK_FRAME_BUF_NO - 1)][2],
                  gSpc_acLoopback_PCM_DL_BUF[extcodec.DL_tmp_w & (ACLOOPBACK_FRAME_BUF_NO - 1)][3]);
      }
   //}
   Extcodec_hisr_dl_loopback(0);
   kal_give_spinlock(extcodec.extcodecspinLockID);
#endif // defined (__SMART_PHONE_MODEM__)
}


