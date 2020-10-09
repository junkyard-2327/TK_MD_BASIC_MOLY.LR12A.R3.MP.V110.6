
#include "kal_public_api.h"
#include "kal_general_types.h"

#include "kal_trace.h"
#include "l1sp_trc.h"

#include "l1audio.h"
#include "drv_sap.h"
#include "speech_def.h"
#include "bgSnd.h"
//#include "afe_def.h" // for output device setting
//#include "sp_drv.h"



#include "audio_msgid.h"
#include "sp_drv.h"

#define MIN(a, b) ((a) < (b) ? (a) : (b))
   
typedef struct{
   uint32 id;   
   bool   is_used;   
}VOLTE_TONE_T;
VOLTE_TONE_T volte_tone;

extern kal_spinlockid MCUTONESpinLockID;

extern void DTMF_MCU_DataRequestCallback();
extern void DTMF_MCU_GetReadBuffer(kal_int16 **pBuf_16b, kal_uint32 *uDataWord);
extern kal_bool DTMF_MCU_IsPlaying();
extern void DTMF_MCU_ReadDataDone(kal_uint32 uDataWord);
extern void EXT_BGSND_Hisr(BGSND_PROCESS_TYPE type);



uint32 VolteToneGetID()
{
   return(volte_tone.id);
}

void VolteToneSetID(uint32 u32val)
{
   volte_tone.id = u32val;
}

bool VolteToneGetUsed()
{
   return(volte_tone.is_used);
}

void VolteToneSetUsed(bool bval)
{
   volte_tone.is_used = bval;
}

void SP4G_PSR_Tone_init()
{
   
}
//tone
void SP4G_PSR_DL_Tone_Play(const L1SP_Tones *pToneList)
{
   ilm_PSR_DL_TONE_t *local_para;

   kal_trace( TRACE_FUNC,SP4G_PSR_DL_TONE_PLAY_ENTER); 

   //TONE_Play(pToneList, DSP_TONE);
   local_para = (ilm_PSR_DL_TONE_t *) construct_local_para( sizeof(ilm_PSR_DL_TONE_t), TD_CTRL/*TD_RESET*/ );
   local_para->pToneList = (L1SP_Tones *)pToneList;
   msg_send6(MOD_LTECSR, MOD_MED, AUDIO_SAP, MSG_ID_AUDIO_M2M_VOLTE_DL_TONE_PLAY, (local_para_struct *)local_para, NULL);

   kal_trace( TRACE_FUNC,SP4G_PSR_DL_TONE_PLAY_LEAVE); 
}

void SP4G_PSR_DL_Tone_Stop( void )
{
   kal_trace( TRACE_FUNC,SP4G_PSR_DL_TONE_STOP_ENTER);    
   //TONE_Stop(DSP_TONE);
   msg_send6(MOD_LTECSR, MOD_MED, AUDIO_SAP, MSG_ID_AUDIO_M2M_VOLTE_DL_TONE_STOP, NULL, NULL);
   kal_trace( TRACE_FUNC,SP4G_PSR_DL_TONE_STOP_LEAVE);    
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
#endif


#if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif


void volte_Tone_bgSnd_closeHandler(void);//BGSND HISR to MED  ToDO
void volte_BGSND_ULHdr(void);
//TONE
void SP4G_PSR_UL_Tone_Play(const L1SP_Tones *pToneList )
{ 
   ilm_PSR_DL_TONE_t *local_para;

   kal_trace( TRACE_FUNC,SP4G_PSR_UL_TONE_PLAY_ENTER); 
   /*if( !volte_tone.is_used ){    
      TONE_Play(pToneList, MCU_TONE);
      volte_tone.id = EXT_BGSND_Start(volte_Tone_bgSnd_closeHandler, NULL, volte_BGSND_ULHdr, 7, 7);
      volte_tone.is_used = true;      
   }else{
      kal_trace( TRACE_FUNC,SP4G_PSR_UL_TONE_PLAY_SKIP);       
   }*/
   local_para = (ilm_PSR_DL_TONE_t *) construct_local_para( sizeof(ilm_PSR_DL_TONE_t), TD_CTRL/*TD_RESET*/ );
   local_para->pToneList = (L1SP_Tones *)pToneList;
   msg_send6(MOD_LTECSR, MOD_MED, AUDIO_SAP, MSG_ID_AUDIO_M2M_VOLTE_UL_TONE_PLAY, (local_para_struct *)local_para, NULL);

   kal_trace( TRACE_FUNC,SP4G_PSR_UL_TONE_PLAY_LEAVE);     
}

void SP4G_PSR_UL_Tone_Stop( void )
{   
   kal_trace( TRACE_FUNC,SP4G_PSR_UL_TONE_STOP_ENTER);   
   /*if( volte_tone.is_used ){  
      EXT_BGSND_Flush(volte_tone.id); 
      TONE_Stop(MCU_TONE);      
   }else{
      kal_trace( TRACE_FUNC,SP4G_PSR_UL_TONE_STOP_SKIP);        
   }*/
   msg_send6(MOD_LTECSR, MOD_MED, AUDIO_SAP, MSG_ID_AUDIO_M2M_VOLTE_UL_TONE_STOP, NULL, NULL);
   kal_trace( TRACE_FUNC,SP4G_PSR_UL_TONE_STOP_LEAVE);       
}

void volte_Tone_bgSnd_closeHandler(void)//BGSND HISR to MED  ToDO
{
   kal_trace( TRACE_FUNC,VOLTE_BGSND_CLOSEHANDLER_ENTER);    
   ASSERT( volte_tone.is_used );
	msg_send4(MOD_L1SP, MOD_MED, AUDIO_SAP, MSG_ID_AUDIO_M2M_VOLTE_TONE_BGSND_CLOSE);
   kal_trace( TRACE_FUNC,VOLTE_BGSND_CLOSEHANDLER_LEAVE);  	
}

void volte_Tone_BgSndClose(void)//trigger by MED
{
   kal_trace( TRACE_FUNC,VOLTE_BGSNDCLOSE_LEAVE);    
   ASSERT( volte_tone.is_used );
	EXT_BGSND_Close(volte_tone.id);	
	volte_tone.is_used = false;
   kal_trace( TRACE_FUNC,VOLTE_BGSNDCLOSE_LEAVE); 	
}

//#############################################
//KT
void volte_KT_bgSnd_closeHandler(void);//BGSND HISR to MED  ToDO


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
#endif


void volte_KT_bgSnd_closeHandler(void)//BGSND HISR to MED  ToDO
{
   kal_trace( TRACE_FUNC,VOLTE_BGSND_CLOSEHANDLER_ENTER);    
   ASSERT( volte_tone.is_used );
	msg_send4(MOD_L1SP, MOD_MED, AUDIO_SAP, MSG_ID_AUDIO_M2M_VOLTE_KT_BGSND_CLOSE);
   kal_trace( TRACE_FUNC,VOLTE_BGSND_CLOSEHANDLER_LEAVE);  	
}

void volte_KT_BgSndClose(void)//trigger by MED
{
   kal_trace( TRACE_FUNC,VOLTE_BGSNDCLOSE_ENTER);    
   ASSERT( volte_tone.is_used );
	EXT_BGSND_Close(volte_tone.id);
	volte_tone.is_used = false;
   kal_trace( TRACE_FUNC,VOLTE_BGSNDCLOSE_LEAVE); 	
}



void volte_BGSND_ULHdr(void)
{
   int KK = 0;
	kal_uint32 uToneCnt/*, I*/;
   kal_int16 *pTone;
   kal_uint32 uRemains = 320*2;
   
   kal_trace( TRACE_FUNC,VOLTE_BGSND_ULHDR_ENTER);  
   
//   if(!DTMF_MCU_IsPlaying()){
//      EXT_BGSND_Flush(volte_tone.id); 
//      //return;
//   }
   kal_take_spinlock(MCUTONESpinLockID, KAL_INFINITE_WAIT);
   
   if(DTMF_MCU_IsPlaying()){
         
      do
      {
         KK++;
         DTMF_MCU_GetReadBuffer(&pTone, &uToneCnt);
         
         uRemains = EXT_BGSND_GetFreeSpace(volte_tone.id, BGSND_UL_PROCESS);
         
         kal_trace( TRACE_FUNC,VOLTE_BGSND_ULHDR_TONECNT_REMAINS, uToneCnt, uRemains);
         if(uToneCnt > uRemains)
         {
            uToneCnt = uRemains;
         }
         
         if(uToneCnt){
            EXT_BGSND_WriteSrcBuffer(volte_tone.id, (kal_uint8 *)pTone, (kal_int32) (uToneCnt<<1), BGSND_UL_PROCESS);         
            //EXT_BGSND_WriteSrcBuffer(volte_tone.id, pTone, (kal_int32) uToneCnt, BGSND_DL_PROCESS);//Temp, To DO
         }
        
         DTMF_MCU_ReadDataDone(uToneCnt);
         uRemains -= uToneCnt;
         if(KK >= 2)
            break;
      }while(uRemains);//due to no place to do this , so put it here	
      kal_trace( TRACE_FUNC,VOLTE_BGSND_ULHDR_NEED_SAMPLES, uRemains);
            
      //every HISR, add data into a big pipe.
      kal_trace( TRACE_FUNC,VOLTE_BGSND_ULHDR_EXT_BGSND_WRITEEXTBUFFER);
      EXT_BGSND_WriteExtBuffer(volte_tone.id, 1, BGSND_UL_PROCESS);
      //EXT_BGSND_WriteExtBuffer(volte_tone.id, 1, BGSND_DL_PROCESS); //Temp, To DO
   }else{
      if(volte_tone.is_used){
         kal_trace( TRACE_FUNC,VOLTE_BGSND_ULHDR_NO_EXT_BGSND_WRITEEXTBUFFER);
         if(EXT_BGSND_GetDataCount(volte_tone.id, BGSND_UL_PROCESS) > 0)
         {
            kal_trace( TRACE_FUNC,VOLTE_BGSND_ULHDR_EXT_BGSND_WRITEEXTBUFFER_LAST_DATA);
            EXT_BGSND_WriteExtBuffer(volte_tone.id, 1, BGSND_UL_PROCESS);
         }
         EXT_BGSND_Flush(volte_tone.id); 
      }else{
         ASSERT(0);
      }
   }
   
   {
	   //int bLen = MIN( EXT_BGSND_GetFreeSpace(volte_tone.id, BGSND_DL_PROCESS), EXT_BGSND_GetFreeSpace(volte_tone.id, BGSND_UL_PROCESS));
	   int bLen = EXT_BGSND_GetFreeSpace(volte_tone.id, BGSND_UL_PROCESS);
		if( bLen >= 1000 ) {
			kal_give_spinlock(MCUTONESpinLockID);
			//release spinlock before call kal setsevent
			DTMF_MCU_DataRequestCallback();
		}
		else{
            kal_give_spinlock(MCUTONESpinLockID);
		}
   }   
   
   kal_trace( TRACE_FUNC,VOLTE_BGSND_ULHDR_LEAVE);  	
}
