#include "kal_general_types.h"
#include "kal_public_api.h"
#include "kal_hrt_api.h"
#include "intrCtrl.h"
#include "syscomp_config.h"
#include "kal_public_defs.h"
#include "sync_data.h"

#include "cache_sw.h"   //? ask SS, it ought not be exposed from RCU_MEMORY_SIZE
#include "mmu.h"
#include "l1sp_trc.h"
#include "audio_cc.h"
#include "audio_ringbuf.h"
#include "cc_irq_public.h"
//#include "l1audio_trace_l1core.h"
//#include "common_def.h"
#include "l1aud_common_def.h"
#include "l1audio_trace.h"
#include "us_timer.h"
#include "audio_msgid.h"
#include "drv_sap.h"
#include "sal_def.h"
#include "sal_exp.h"
#include "uas_export_api.h"   
#include "sp_drv.h"


#define AUD_1TICK(tick)          (tick * ((KAL_TICKS_10_MSEC) >> 1))       /* New Tick Transfer   1tick       */
#define AUD_10TICK(tick)         (tick * (KAL_TICKS_50_MSEC))               /* New Tick Transfer  10tick      */

#define true         (kal_bool)(1==1)
#define false        (kal_bool)(1==0)

static struct {
   kal_uint32   retrieved_events_L;
   kal_uint32   events_l1FN_L;
   kal_uint32   P2L_buf_L[CC_BUFFER_SIZE]; 
   kal_uint32   L2P_buf_L[CC_BUFFER_SIZE];      
} l1audio_L;

typedef struct {
   void         (*code_L)(kal_uint32, kal_uint32, kal_uint32, kal_uint32, kal_uint32, kal_uint32, kal_uint32);
   kal_uint32   data1_L;
   kal_uint32   data2_L;
   kal_uint32   data3_L;
   kal_uint32   data4_L;
   kal_uint32   data5_L;
   kal_uint32   data6_L;      
   kal_uint32   data7_L;      
} AM_QFunction_L;

typedef enum {	 
   AM_STATE_IDLE_L,
   AM_STATE_2G_L,
   AM_STATE_3G_L,
   AM_STATE_4G_L,         
   AM_STATE_C2K_L,
   AM_STATE_STANDBY_L,
}AM_STATE_L; 

static struct {
   AM_STATE_L   state_L;  
   RINGBUFFER_T(AM_QFunction_L,8) qfunc_L;
   kal_bool     tch_state_L; // true: TCH on; false: TCH off
   kal_uint32   cntHandover_L;
   kal_uint32   hasHandover_L;

   uint16       ul_speech_mode_L; //behavior is the same as 3/4G
   int8         ul_sub_channel_L; //behavior is the same as 3/4G
   uint16       isVBISetFSM; 
}am_L;

/*
static struct {
   unsigned short DSP_IO_L;
}am_register_backup_L;
*/
static kal_uint32 u32L1Audio_DSP2MCU_Interrupt_L_counter;

//Extern Funtions
//2G
extern unsigned short L1D_Audio_ChkDspInitDone();
extern kal_uint32 L1I_GetTimeStamp( void );
extern unsigned short L1D_Audio_RestartDSP();
extern void L1D_Audio_NoNeedDSP();
extern void L1D_ENABLE_DTIRQ( void );

void cc_irq_lisr_aud(kal_uint32 event_id, kal_uint32 param1, kal_uint32 param2);

//Temp solution, and SS should support us with correct modifications!
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
#else //#if 0
extern kalcc_rcuid aud_P2L_rcu;
extern DEFINE_RCU_DC_ARRAY(kal_uint8, aud_P2L_rcu_mem, RCU_MEMORY_SIZE(CC_BUFFER_SIZE * sizeof(kal_uint32), 2)); // 1024 bytes * 1 blocks

extern kalcc_rcuid aud_L2P_rcu;
extern DEFINE_RCU_DC_ARRAY(kal_uint8, aud_L2P_rcu_mem, RCU_MEMORY_SIZE(CC_BUFFER_SIZE * sizeof(kal_uint32), 2)); // 1024 bytes * 1 blocks

extern cc_eventgrpid AUD_P2L;
extern cc_eventgrpid AUD_L2P;	
#endif //#if 0

kal_uint32 convert_64us_diff_to_ms(kal_uint32 prev, kal_uint32 cur)
{
   kal_uint32 result;
   result = (cur >= prev) ? (cur - prev) : (0xFFFFFFFF - prev + cur);
   result = (result *64) / 1000;
   return(result);
}

void AM_Init_L( void )
{
   RB_INIT( am_L.qfunc_L );  
   am_L.state_L = AM_STATE_IDLE_L;   
   am_L.tch_state_L = false; 
   L1Audio_Msg_AM_HandoverInfo_L(0, am_L.cntHandover_L, am_L.hasHandover_L);   
   am_L.cntHandover_L   = 0;
   am_L.hasHandover_L   = 0;
   am_L.isVBISetFSM = 0;
   L1Audio_Msg_AM_HandoverInfo_L(1, am_L.cntHandover_L, am_L.hasHandover_L);   
   SAL_Dsp_Sph_Init();
}

static void AM_Enqueue_L( void (*code)(kal_uint32, kal_uint32, kal_uint32, kal_uint32, kal_uint32, kal_uint32, kal_uint32), 
                        kal_uint32 data1, kal_uint32 data2, 
                        kal_uint32 data3, kal_uint32 data4, 
                        kal_uint32 data5, kal_uint32 data6,
                        kal_uint32 data7, kal_bool isCritical )
{
   L1Audio_Msg_PutQ_L(0);
   if (isCritical) { // only 2g speech on will go to here 		
      L1Audio_Msg_PutQ_L(1);
      AM_QFunction_L qf;

      
      L1D_ENABLE_DTIRQ();       

      qf.code_L  = code;
      qf.data1_L = data1;
      qf.data2_L = data2; 
      qf.data3_L = data3;
      qf.data4_L = data4; 
      qf.data5_L = data5;
      qf.data6_L = data6; 
      qf.data7_L = data7; 
      L1Audio_Msg_PutQ_L(0);
      RB_PUT( am_L.qfunc_L, qf );
      L1Audio_Msg_PutQ_L(1);
      
   } else {// Direct execute in task	
      L1Audio_Msg_PutQ_L(2);	
      code( data1 , data2, data3 , data4, data5, data6, data7 );
   }
   L1Audio_Msg_PutQ_L(3);
}

kal_bool AM_IsSpeechOn_L( void ){
   return AM_STATE_2G_L == am_L.state_L	|| AM_STATE_3G_L == am_L.state_L || AM_STATE_4G_L == am_L.state_L;
}

void AM_FlushQFunction_L( void )
{
#ifndef  L1D_TEST
   int i = 0;
   while( !RB_EMPTY(am_L.qfunc_L) ){
      kal_sleep_task( AUD_1TICK(1) );
      i++;
      ASSERT( i <= 5 ); // It is possible in the current design the CTIRQ disappears just after putting into the queue.
   }
#endif
}

void AM_Update_AudioManagerInfo(uint16 speech_mode, int8 sub_channel)
{
   L1Audio_Msg_AM_AudioManagerInfo(speech_mode, sub_channel);   	 
   cc_irq_lisr_aud(IRQ_L2P_2G_AUDIOMANAGER_INFO, (kal_uint32)speech_mode, (kal_uint32)sub_channel);    
   am_L.ul_speech_mode_L = speech_mode;   
   am_L.ul_sub_channel_L = sub_channel;	
}

kal_bool AM_AudioManager( kal_bool handover, kal_uint16 speech_mode, kal_int8 sub_channel )
{
   AM_QFunction_L func;

   L1Audio_Msg_AM_AudioManager_L( handover, speech_mode, sub_channel, L1Audio_Speech_State_L(am_L.state_L));
   L1Audio_Msg_AM_AudioManager2_L( am_L.ul_speech_mode_L, am_L.ul_sub_channel_L);
   #if IS_SPEECH_RESYNC_SUPPORT
      if(L1D_Get_Speech_Re_Sync_Flag())
         L1Audio_Msg_AM_2G_Resync_L( am_L.speech_mode_L, speech_mode);      
   #endif
   if( handover ){
   	  AM_Update_AudioManagerInfo(speech_mode, sub_channel);
   }
   
   if( AM_STATE_2G_L == am_L.state_L && am_L.tch_state_L ){
   	 L1Audio_Msg_AM_HandoverInfo_L(2, am_L.cntHandover_L, am_L.hasHandover_L);
	   if( handover ||  0 == am_L.hasHandover_L){
	   	  L1Audio_Msg_AM_Handover_L(speech_mode, sub_channel);   	  
	      cc_irq_lisr_aud(IRQ_L2P_2G_HANDOVER, (kal_uint32)speech_mode, (kal_uint32)sub_channel); 
	      L1Audio_Msg_AM_HandoverInfo_L(3, am_L.cntHandover_L, am_L.hasHandover_L);
	      am_L.cntHandover_L ++;
	      am_L.hasHandover_L = 1;
	      L1Audio_Msg_AM_HandoverInfo_L(4, am_L.cntHandover_L, am_L.hasHandover_L);
	      AM_Update_AudioManagerInfo(speech_mode, sub_channel);
	   }else if(am_L.ul_speech_mode_L != speech_mode || am_L.ul_sub_channel_L != sub_channel){
        AM_Update_AudioManagerInfo(speech_mode, sub_channel);
     }
   }

#if defined(_MODEM_RESYNC_2G_)  
   if( AM_STATE_2G_L == am_L.state_L && am_L.tch_state_L ){
       int16 time_drift = L1D_Get_Time_Drift(); //us	
       L1Audio_Msg_AM_Resync_L( 0, time_drift);
       if(time_drift > 1000){
       	  L1Audio_Msg_AM_Update_Time_Drift_L( 1 );//Q
       	  L1D_Update_Time_Drift(true);       	  
       	  //notify DSP
       	  SAL_8K_Resync(true, 8, true, 8);
       }else if(time_drift < -1000){
       	  L1Audio_Msg_AM_Update_Time_Drift_L( 0 );//Q
       	  L1D_Update_Time_Drift(false);        	  
       	  //notify DSP
       	  SAL_8K_Resync(true, -8, true, -8);
       }
   }
#endif
   
   if( !RB_EMPTY( am_L.qfunc_L ) ) {
      RB_GET( am_L.qfunc_L, func );
      uint32 func_code_L = (void*)func.code_L - (void*)0;
      L1Audio_Msg_GetQ_L( func_code_L, func.data1_L, func.data2_L, func.data3_L, func.data4_L, func.data5_L, func.data6_L, func.data7_L );
      func.code_L( func.data1_L, func.data2_L, func.data3_L, func.data4_L, func.data5_L, func.data6_L, func.data7_L );
   }

	return false;
}

void cc_DSP_2G_Handover_L( kal_uint32 enc_mod, kal_uint32 dec_mod, kal_uint32 sub_channel, 
                         kal_uint32 dummy1, kal_uint32 dummy2, kal_uint32 dummy3, kal_uint32 dummy4 )
{
    ASSERT( CC_DUMMY_PARAM == dummy1 && CC_DUMMY_PARAM == dummy2 && CC_DUMMY_PARAM == dummy3 && CC_DUMMY_PARAM == dummy4 );

#if defined(_MODEM_RESYNC_2G_) 
     	 L1Audio_Msg_AM_Reset_Time_Drift_L();//Q
      	L1D_Reset_Time_Drift();
#endif  
   L1Audio_Msg_AM_HandoverInfo_L(5, am_L.cntHandover_L, am_L.hasHandover_L);
   ASSERT( am_L.cntHandover_L > 0);
  
   am_L.cntHandover_L--;

   L1Audio_Msg_AM_HandoverInfo_L(6, am_L.cntHandover_L, am_L.hasHandover_L);
   SAL_2G_Handover(enc_mod, dec_mod, sub_channel, am_L.tch_state_L);   
}

		   
void cc_2G_Handover_L(kal_uint32 enc_mod, kal_uint32 dec_mod, kal_uint32 sub_channel)
{
   //ASSERT( AM_STATE_2G == am.state );
   if( AM_STATE_2G_L != am_L.state_L ){
      kal_trace( TRACE_FUNC, AM_L_CC_2G_HANDOVER_SKIP, am_L.tch_state_L, am_L.state_L);
      return;	
   }
   kal_trace( TRACE_FUNC, AM_L_CC_2G_HANDOVER_ENTER, am_L.tch_state_L);
   AM_Enqueue_L( cc_DSP_2G_Handover_L,  enc_mod, dec_mod, sub_channel, 
                                    CC_DUMMY_PARAM, CC_DUMMY_PARAM, CC_DUMMY_PARAM, CC_DUMMY_PARAM, 
                                    am_L.tch_state_L );
   AM_FlushQFunction_L();
   kal_trace( TRACE_FUNC, AM_L_CC_2G_HANDOVER_LEAVE);
}	

void cc_DSP_2G_Call_Open_L(kal_uint32 enc_mod, kal_uint32 dec_mod, kal_uint32 sub_channel, 
                         kal_uint32 dummy1, kal_uint32 dummy2, kal_uint32 dummy3, kal_uint32 dummy4 )
{
    ASSERT( CC_DUMMY_PARAM == dummy1 && CC_DUMMY_PARAM == dummy2 && CC_DUMMY_PARAM == dummy3 && CC_DUMMY_PARAM == dummy4 );

#if defined(_MODEM_RESYNC_2G_)  	  
      L1Audio_Msg_AM_Reset_Time_Drift_L();
	     L1D_Reset_Time_Drift();
#elif defined(_2G_DSP_SMR_SUPPORT_)
      SAL_2G_SMR_Switch(true);
#endif 

   SAL_2G_Call_Open(enc_mod, dec_mod, sub_channel, am_L.tch_state_L);
}	

void cc_2G_Call_Open_L(kal_uint32 enc_mod, kal_uint32 dec_mod, kal_uint32 sub_channel)
{
#if defined(_SWITCH_AFE_CLK_)      
   uint16 L1D_GetRF(uint16 mode);
   uint16 RF_2G = L1D_GetRF(MML1_RF_2G);
   L1Audio_Msg_L1D_GetRF_L(RF_2G);
#endif 	
	 kal_trace( TRACE_FUNC, AM_L_CC_2G_CALLOPEN_ENTER, am_L.tch_state_L);
#if defined(_SWITCH_AFE_CLK_)               
      if( 2 == RF_2G){ //return :   1 -> RF1,  2-> RF2
         *MD2GSYS_AFE_CK_SEL = 0x0;         
      }
#endif  	 
   //ASSERT( 0 == am.cntHandover || 2 == am.cntHandover);
   L1Audio_Msg_AM_HandoverInfo_L(7, am_L.cntHandover_L, am_L.hasHandover_L);
   {
   am_L.hasHandover_L = 0;  
   }
   L1Audio_Msg_AM_HandoverInfo_L(8, am_L.cntHandover_L, am_L.hasHandover_L);

   
   AM_Enqueue_L( cc_DSP_2G_Call_Open_L, enc_mod, dec_mod, sub_channel, 
                                    CC_DUMMY_PARAM, CC_DUMMY_PARAM, CC_DUMMY_PARAM, CC_DUMMY_PARAM,
                                    am_L.tch_state_L  );
   AM_FlushQFunction_L();
   am_L.state_L = AM_STATE_2G_L;     
   kal_trace( TRACE_FUNC, AM_L_CC_2G_CALLOPEN_LEAVE); 
}	

void cc_DSP_2G_Call_Close_L(kal_uint32 dsp_end, 
                          kal_uint32 dummy1, kal_uint32 dummy2, kal_uint32 dummy3, kal_uint32 dummy4, kal_uint32 dummy5, kal_uint32 dummy6 )
{
   ASSERT( CC_DUMMY_PARAM == dummy1 && CC_DUMMY_PARAM == dummy2 && CC_DUMMY_PARAM == dummy3 && CC_DUMMY_PARAM == dummy4 && CC_DUMMY_PARAM == dummy5 && CC_DUMMY_PARAM == dummy6 );
   
#if defined(_2G_DSP_SMR_SUPPORT_)
   SAL_2G_SMR_Switch(false);
#endif     
   SAL_2G_Call_Close(dsp_end);
}

void cc_2G_Call_Close_L(kal_uint32 dsp_end)
{
#if defined(_SWITCH_AFE_CLK_)      
   uint16 L1D_GetRF(uint16 mode);
   uint16 RF_2G = L1D_GetRF(MML1_RF_2G);
   L1Audio_Msg_L1D_GetRF_L(RF_2G);
#endif 		
	 kal_trace( TRACE_FUNC, AM_L_CC_2G_CALLCLOSE_ENTER, am_L.tch_state_L);
#if defined(_SWITCH_AFE_CLK_)         
      if( 2 == RF_2G){ //return :   1 -> RF1,  2-> RF2
         *MD2GSYS_AFE_CK_SEL = 0x1;
      }
#endif  
   AM_Enqueue_L( cc_DSP_2G_Call_Close_L, dsp_end, 
                                     CC_DUMMY_PARAM, CC_DUMMY_PARAM, CC_DUMMY_PARAM, CC_DUMMY_PARAM, CC_DUMMY_PARAM, CC_DUMMY_PARAM,
                                     am_L.tch_state_L );
   AM_FlushQFunction_L();
   am_L.state_L = AM_STATE_IDLE_L;     
   kal_trace( TRACE_FUNC, AM_L_CC_2G_CALLCLOSE_LEAVE);  
}

void cc_DSP_3G_Call_Open_L(kal_uint32 enc_mod, kal_uint32 dec_mod, kal_uint32 dtx, kal_uint32 delR, kal_uint32 delW, kal_uint32 delM, kal_uint32 dummy)
{
   uint16 LinkMode = SAL_3GLINK_MODE_NONE;
      
#if defined( __UMTS_RAT__ )
   switch(L1SP_GetSIMStatus()) {
      case SP_3G_SIM_FDD_ACTIVE:   
           LinkMode = SAL_3GLINK_MODE_WCDMA;
           break;
      case SP_3G_SIM_TDD_ACTIVE:
           LinkMode = SAL_3GLINK_MODE_TDSCDMA;
           break;
      default:
           LinkMode = SAL_3GLINK_MODE_NONE;
   }     
#endif

   SAL_3G_Call_Open(enc_mod, dec_mod, dtx, delR, delW, delM, LinkMode);  
}

void cc_3G_Call_Open_L(kal_uint32 enc_mod, kal_uint32 dec_mod, kal_uint32 dtx, kal_uint32 delR, kal_uint32 delW, kal_uint32 delM, kal_uint32 u32CurTime64us)
{
   kal_uint32 u32CurTime64usLocal, u32delay, u32delaySample;

   kal_trace( TRACE_FUNC, AM_L_CC_3G_CALLOPEN_ENTER, delR, delW);

   u32CurTime64usLocal = fma_get_glb_ts();
   u32delay = convert_64us_diff_to_ms(u32CurTime64us, u32CurTime64usLocal); //ms
   u32delaySample = (u32delay % 20) * 8; //sample
   if( (u32delaySample >= delR || u32delaySample >= delW) && (0 != u32delaySample) )
   {
      delR += 160;
      delW += 160;
   }
   delR -= u32delaySample;
   delW -= u32delaySample;

   AM_Enqueue_L( cc_DSP_3G_Call_Open_L, enc_mod, dec_mod, dtx, delR, delW, delM, CC_DUMMY_PARAM,
                                    false );
   AM_FlushQFunction_L(); 
   am_L.state_L = AM_STATE_3G_L; 
   kal_trace( TRACE_FUNC, AM_L_CC_3G_CALLOPEN_LEAVE, delR, delW, u32delay);
}

void cc_DSP_3G_Call_Close_L(kal_uint32 dsp_end, kal_uint32 dummy1, kal_uint32 dummy2, kal_uint32 dummy3, kal_uint32 dummy4, kal_uint32 dummy5, kal_uint32 dummy6)
{
   ASSERT( CC_DUMMY_PARAM == dummy1 && CC_DUMMY_PARAM == dummy2 && CC_DUMMY_PARAM == dummy3 && CC_DUMMY_PARAM == dummy4 && CC_DUMMY_PARAM == dummy5 && CC_DUMMY_PARAM == dummy6 );   
   SAL_3G_Call_Close(dsp_end);
}

void cc_3G_Call_Close_L(kal_uint32 dsp_end)
{
   kal_trace( TRACE_FUNC, AM_L_CC_3G_CALLCLOSE_ENTER);
   AM_Enqueue_L( cc_DSP_3G_Call_Close_L, dsp_end, 
                                     CC_DUMMY_PARAM, CC_DUMMY_PARAM, CC_DUMMY_PARAM, CC_DUMMY_PARAM, CC_DUMMY_PARAM, CC_DUMMY_PARAM,
                                     false );
   AM_FlushQFunction_L();   
   am_L.state_L = AM_STATE_IDLE_L; 
   kal_trace( TRACE_FUNC, AM_L_CC_3G_CALLCLOSE_LEAVE); 
}

void cc_DSP_4G_Call_Open_temp_L(kal_uint32 enc_mod, kal_uint32 dec_mod, kal_uint32 dtx, kal_uint32 delR, kal_uint32 delW, kal_uint32 delM, kal_uint32 is_4G_handover)
{
   if(is_4G_handover == 1)
   {
      SAL_4G_Call_Handover( enc_mod, dec_mod, dtx, delR, delW, delM);
   }
   else
   {
      SAL_4G_Call_Open_temp( enc_mod, dec_mod, dtx, delR, delW, delM);
   }
}

void cc_4G_Call_Open_temp_L(kal_uint32 enc_mod, kal_uint32 dec_mod, kal_uint32 dtx, kal_uint32 delR, kal_uint32 delW, kal_uint32 delM, kal_uint32 u32CurTime64us, kal_uint32 is_4G_handover)
{
   kal_uint32 u32CurTime64usLocal, u32delay, u32delaySample;

   kal_trace( TRACE_FUNC, AM_L_CC_4G_CALLOPEN_ENTER);

   u32CurTime64usLocal = fma_get_glb_ts();
   u32delay = convert_64us_diff_to_ms(u32CurTime64us, u32CurTime64usLocal); //ms
   u32delaySample = (u32delay % 20) * 8; //sample
   if( (u32delaySample >= delR || u32delaySample >= delW) && (0 != u32delaySample) )
   {
      delR += 160;
      delW += 160;
   }
   delR -= u32delaySample;
   delW -= u32delaySample;

   AM_Enqueue_L( cc_DSP_4G_Call_Open_temp_L, enc_mod, dec_mod, dtx, delR, delW, delM, is_4G_handover,
                                         false );
   AM_FlushQFunction_L(); 
   am_L.state_L = AM_STATE_4G_L; 
   kal_trace( TRACE_FUNC, AM_L_CC_4G_CALLOPEN_LEAVE, delR, delW, u32delay, is_4G_handover);
}

void cc_DSP_4G_Call_Close_temp_L(kal_uint32 dsp_end, kal_uint32 dummy1, kal_uint32 dummy2, kal_uint32 dummy3, kal_uint32 dummy4, kal_uint32 dummy5, kal_uint32 dummy6)
{   
   ASSERT( CC_DUMMY_PARAM == dummy1 && CC_DUMMY_PARAM == dummy2 && CC_DUMMY_PARAM == dummy3 && CC_DUMMY_PARAM == dummy4 && CC_DUMMY_PARAM == dummy5 && CC_DUMMY_PARAM == dummy6 );
   SAL_4G_Call_Close_temp(dsp_end);
}

void cc_4G_Call_Close_temp_L(kal_uint32 dsp_end)
{
   kal_trace( TRACE_FUNC, AM_L_CC_4G_CALLCLOSE_ENTER);
   AM_Enqueue_L( cc_DSP_4G_Call_Close_temp_L, dsp_end, 
                                          CC_DUMMY_PARAM, CC_DUMMY_PARAM, CC_DUMMY_PARAM, CC_DUMMY_PARAM, CC_DUMMY_PARAM, CC_DUMMY_PARAM,
                                          false );
   AM_FlushQFunction_L(); 
   am_L.state_L = AM_STATE_IDLE_L; 
   kal_trace( TRACE_FUNC, AM_L_CC_4G_CALLCLOSE_LEAVE);
}

#if 1
void cc_DSP_4G_G_Codec_Call_Open_temp_L(kal_uint32 band_mod, kal_uint32 delR, kal_uint32 delW, kal_uint32 delM, kal_uint32 dummy4, kal_uint32 dummy5, kal_uint32 dummy6)
{
   ASSERT( CC_DUMMY_PARAM == dummy4 && CC_DUMMY_PARAM == dummy5 && CC_DUMMY_PARAM == dummy6 );
   SAL_4G_ExtCod_Call_Open(band_mod, 0, delR, delW, delM);
}

void cc_4G_G_Codec_Call_Open_temp_L(kal_uint32 band_mod, kal_uint32 delR, kal_uint32 delW, kal_uint32 delM, kal_uint32 u32CurTime64us)
{
   kal_uint32 u32CurTime64usLocal, u32delay, u32delaySample;

   kal_prompt_trace(MOD_L1SPL1, "cc_4G_G_Codec_Call_Open_temp Enter");

   u32CurTime64usLocal = fma_get_glb_ts();
   u32delay = convert_64us_diff_to_ms(u32CurTime64us, u32CurTime64usLocal); //ms
   u32delaySample = (u32delay % 20) * 8; //sample
   if( (u32delaySample >= delR || u32delaySample >= delW) && (0 != u32delaySample) )
   {
      delR += 160;
      delW += 160;
   }
   delR -= u32delaySample;
   delW -= u32delaySample;

   AM_Enqueue_L( cc_DSP_4G_G_Codec_Call_Open_temp_L, band_mod, delR, delW, delM, CC_DUMMY_PARAM, CC_DUMMY_PARAM, CC_DUMMY_PARAM,
                                                 false );
   AM_FlushQFunction_L(); 
   am_L.state_L = AM_STATE_4G_L; 
   kal_prompt_trace(MOD_L1SP, "cc_4G_G_Codec_Call_Open_temp Leave delR=%d delW=%d P_to_L1_delay=%dms", delR, delW, u32delay);
}

void cc_DSP_4G_G_Codec_Call_Close_temp_L(kal_uint32 dsp_end, kal_uint32 dummy1, kal_uint32 dummy2, kal_uint32 dummy3, kal_uint32 dummy4, kal_uint32 dummy5, kal_uint32 dummy6)
{   
   ASSERT( CC_DUMMY_PARAM == dummy1 && CC_DUMMY_PARAM == dummy2 && CC_DUMMY_PARAM == dummy3 && CC_DUMMY_PARAM == dummy4 && CC_DUMMY_PARAM == dummy5 && CC_DUMMY_PARAM == dummy6 );
   SAL_4G_ExtCod_Call_Close(dsp_end);
}

void cc_4G_G_Codec_Call_Close_temp_L(kal_uint32 dsp_end)
{
   kal_prompt_trace(MOD_L1SPL1, "cc_4G_G_Codec_Call_Close_temp Enter");
   AM_Enqueue_L( cc_DSP_4G_G_Codec_Call_Close_temp_L, dsp_end, 
                                          CC_DUMMY_PARAM, CC_DUMMY_PARAM, CC_DUMMY_PARAM, CC_DUMMY_PARAM, CC_DUMMY_PARAM, CC_DUMMY_PARAM,
                                          false );
   AM_FlushQFunction_L(); 
   am_L.state_L = AM_STATE_IDLE_L; 
   kal_prompt_trace(MOD_L1SPL1, "cc_4G_G_Codec_Call_Close_temp Leave");
}
#endif


void cc_DSP_4G_EVS_Codec_Call_Open_temp_L(kal_uint32 codec, kal_uint32 isDTX, kal_uint32 delR, kal_uint32 delW, kal_uint32 delM, kal_uint32 is_4G_handover, kal_uint32 dummy6)
{
#if 1
   ASSERT( CC_DUMMY_PARAM == dummy6 );
   if(is_4G_handover == 1)
   {
      SAL_4G_EVS_Call_Handover(codec, codec, isDTX, delR, delW, delM);
   }
   else
   {
      SAL_4G_EVS_Call_Open(codec, codec, isDTX, delR, delW, delM);
   }
#endif
}


void cc_4G_EVS_Codec_Call_Open_temp_L(kal_uint32 codec, kal_uint32 isDTX, kal_uint32 delR, kal_uint32 delW, kal_uint32 delM, kal_uint32 u32CurTime64us, kal_uint32 is_4G_handover)
{
#if 1
   kal_uint32 u32CurTime64usLocal, u32delay, u32delaySample;

   //kal_prompt_trace(MOD_L1SPL1, "cc_4G_EVS_Codec_Call_Open_temp_L Enter");
   kal_trace( TRACE_FUNC, AM_L_CC_4G_EVSCALLOPEN_ENTER );

   u32CurTime64usLocal = fma_get_glb_ts();
   u32delay = convert_64us_diff_to_ms(u32CurTime64us, u32CurTime64usLocal); //ms
   u32delaySample = (u32delay % 20) * 8; //sample
   if( (u32delaySample >= delR || u32delaySample >= delW) && (0 != u32delaySample) )
   {
      delR += 160;
      delW += 160;
   }
   delR -= u32delaySample;
   delW -= u32delaySample;

   AM_Enqueue_L( cc_DSP_4G_EVS_Codec_Call_Open_temp_L, codec, isDTX, delR, delW, delM, is_4G_handover, CC_DUMMY_PARAM,
                                                 false );
   AM_FlushQFunction_L(); 
   am_L.state_L = AM_STATE_4G_L; 
   //kal_prompt_trace(MOD_L1SP, "cc_4G_EVS_Codec_Call_Open_temp_L Leave delR=%d delW=%d P_to_L1_delay=%dms", delR, delW, u32delay);
   kal_trace( TRACE_FUNC, AM_L_CC_4G_EVSCALLOPEN_LEAVE, delR, delW, u32delay, is_4G_handover );
#endif
}


void cc_DSP_4G_EVS_Codec_Call_Close_temp_L(kal_uint32 dsp_end, kal_uint32 dummy1, kal_uint32 dummy2, kal_uint32 dummy3, kal_uint32 dummy4, kal_uint32 dummy5, kal_uint32 dummy6)
{   
#if 1
   ASSERT( CC_DUMMY_PARAM == dummy1 && CC_DUMMY_PARAM == dummy2 && CC_DUMMY_PARAM == dummy3 && CC_DUMMY_PARAM == dummy4 && CC_DUMMY_PARAM == dummy5 && CC_DUMMY_PARAM == dummy6 );
   SAL_4G_EVS_Call_Close(dsp_end);
#endif
}


void cc_4G_EVS_Codec_Call_Close_temp_L(kal_uint32 dsp_end)
{
#if 1
   //kal_prompt_trace(MOD_L1SPL1, "cc_4G_EVS_Codec_Call_Close_temp_L Enter");
   kal_trace( TRACE_FUNC, AM_L_CC_4G_EVSCALLCLOSE_ENTER );

   AM_Enqueue_L( cc_DSP_4G_EVS_Codec_Call_Close_temp_L, dsp_end, 
                                          CC_DUMMY_PARAM, CC_DUMMY_PARAM, CC_DUMMY_PARAM, CC_DUMMY_PARAM, CC_DUMMY_PARAM, CC_DUMMY_PARAM,
                                          false );
   AM_FlushQFunction_L(); 
   am_L.state_L = AM_STATE_IDLE_L; 

   //kal_prompt_trace(MOD_L1SPL1, "cc_4G_EVS_Codec_Call_Close_temp_L Leave");
   kal_trace( TRACE_FUNC, AM_L_CC_4G_EVSCALLCLOSE_LEAVE );
#endif
}

void cc_DSP_C2K_Call_Open_L(kal_uint32 so, kal_uint32 dtx, kal_uint32 delR, kal_uint32 delW, kal_uint32 delM, kal_uint32 dummy1, kal_uint32 dummy2)
{
   SAL_C2K_Call_Open(so, dtx, delR, delW, delM);  
}

void cc_C2K_Call_Open_L(kal_uint32 so, kal_uint32 dtx, kal_uint32 delR, kal_uint32 delW, kal_uint32 delM)
{   
   kal_trace( TRACE_FUNC, AM_L_CC_C2K_CALLOPEN_ENTER, so, dtx, delR, delW, delM);

   AM_Enqueue_L( cc_DSP_C2K_Call_Open_L, so, dtx, delR, delW, delM,
                                    CC_DUMMY_PARAM, CC_DUMMY_PARAM,
                                    false );
   AM_FlushQFunction_L(); 
   am_L.state_L = AM_STATE_C2K_L; 
   kal_trace( TRACE_FUNC, AM_L_CC_C2K_CALLOPEN_LEAVE, so, dtx, delR, delW, delM);
}

void cc_DSP_C2K_Call_Close_L(kal_uint32 dsp_end, kal_uint32 dummy1, kal_uint32 dummy2, kal_uint32 dummy3, kal_uint32 dummy4, kal_uint32 dummy5, kal_uint32 dummy6)
{
   ASSERT( CC_DUMMY_PARAM == dummy1 && CC_DUMMY_PARAM == dummy2 && CC_DUMMY_PARAM == dummy3 && CC_DUMMY_PARAM == dummy4 && CC_DUMMY_PARAM == dummy5 && CC_DUMMY_PARAM == dummy6 );   
   SAL_C2K_Call_Close(dsp_end);
}

void cc_C2K_Call_Close_L(kal_uint32 dsp_end)
{
   kal_trace( TRACE_FUNC, AM_L_CC_C2K_CALLCLOSE_ENTER);
   AM_Enqueue_L( cc_DSP_C2K_Call_Close_L, dsp_end, 
                                     CC_DUMMY_PARAM, CC_DUMMY_PARAM, CC_DUMMY_PARAM, CC_DUMMY_PARAM, CC_DUMMY_PARAM, CC_DUMMY_PARAM,
                                     false );
   AM_FlushQFunction_L();   
   am_L.state_L = AM_STATE_IDLE_L; 
   kal_trace( TRACE_FUNC, AM_L_CC_C2K_CALLCLOSE_LEAVE); 
}


void cc_DSP_Standby_Call_Open_L(kal_uint32 enc_mod, kal_uint32 dec_mod, kal_uint32 dtx, kal_uint32 delR, kal_uint32 delW, kal_uint32 delM, kal_uint32 dummy)
{
   //SAL_Standby_Call_Open(uint32 enc_mod, uint32 dec_mod, uint32 dtx, uint32 delR, uint32 delW, uint32 delM)
   SAL_Standby_Call_Open(       enc_mod,      enc_mod,        0,     31*8,      26*8, 0x20+(16<<10)+(2<<8) );  
}

void cc_set_VBI_for_FSM_L(kal_uint32 op)  
{
   switch (op ){
   	case 1:
   	  ASSERT(0==am_L.isVBISetFSM);   	  
      SAL_SetCallCloseWithFSM();	
      am_L.isVBISetFSM = 1;
      break;
    case 2:
   	  ASSERT(1==am_L.isVBISetFSM);
   	  while(!SAL_IsCallCloseDone()){
   	    	;
   	  }
   	  am_L.isVBISetFSM = 0;
   	  break;
   	default:
   		ASSERT(0);  
   }	
}

void cc_Standby_Call_Open_L(kal_uint32 enc_mod)
{
   kal_trace( TRACE_FUNC, AM_L_CC_STANDBY_CALLOPEN_ENTER, enc_mod);

   AM_Enqueue_L( cc_DSP_Standby_Call_Open_L, enc_mod, enc_mod, 0, 31*8, 26*8, 0x20+(16<<10)+(2<<8), CC_DUMMY_PARAM , false);
   AM_FlushQFunction_L(); 
   am_L.state_L = AM_STATE_STANDBY_L;
   kal_trace( TRACE_FUNC, AM_L_CC_STANDBY_CALLOPEN_LEAVE);
}

void cc_DSP_Standby_Call_Close_L(kal_uint32 dsp_end, kal_uint32 dummy1, kal_uint32 dummy2, kal_uint32 dummy3, kal_uint32 dummy4, kal_uint32 dummy5, kal_uint32 dummy6)
{
   ASSERT( CC_DUMMY_PARAM == dummy1 && CC_DUMMY_PARAM == dummy2 && CC_DUMMY_PARAM == dummy3 && CC_DUMMY_PARAM == dummy4 && CC_DUMMY_PARAM == dummy5 && CC_DUMMY_PARAM == dummy6 );   
   SAL_Standby_Call_Close(dsp_end);
}

void cc_Standby_Call_Close_L(kal_uint32 dsp_end)
{
   kal_trace( TRACE_FUNC, AM_L_CC_STANDBY_CALLCLOSE_ENTER);
   AM_Enqueue_L( cc_DSP_Standby_Call_Close_L, dsp_end, 
                                              CC_DUMMY_PARAM, CC_DUMMY_PARAM, CC_DUMMY_PARAM, CC_DUMMY_PARAM, CC_DUMMY_PARAM, CC_DUMMY_PARAM,
                                              false );
   AM_FlushQFunction_L();   
   am_L.state_L = AM_STATE_IDLE_L;
   kal_trace( TRACE_FUNC, AM_L_CC_STANDBY_CALLCLOSE_LEAVE); 
}


void cc_L1D_Audio_ChkDspInitDone_L()
{
   while( 0 == L1D_Audio_ChkDspInitDone()){
		   kal_sleep_task(AUD_1TICK(1));
	 }	
}



void L1Audio_Task_L(unsigned argc, void *argv)
{
   void L1Aud_Handler_L( kal_uint32 P2LBuf[CC_BUFFER_SIZE], kal_uint32 L2PBuf[CC_BUFFER_SIZE] );
   kal_uint32 retrieved_events;
   int i;
   kal_uint32 P2LBuf[CC_BUFFER_SIZE]; 
   kal_uint32 L2PBuf[CC_BUFFER_SIZE];   
   kal_uint32 *P2L_rcu_buf;
   kal_uint32 *L2P_rcu_buf;	  

   while( 1 ) {
      // clear internal buffer
      for( i = 0; i < CC_BUFFER_SIZE ; i++){
         P2LBuf[i] = L2PBuf[i] = 0 ;
      }   
      kal_trace( TRACE_FUNC, AM_L_L1AUD_TASK_CLRBUF);
      // P->L receives PCore's Messages
      kalcc_retrieve_eg_events(SHARED_pVAR(AUD_P2L), 1 << AUD_P2L_MESSAGE_BIT, KAL_OR_CONSUME, &retrieved_events, KAL_SUSPEND);
         
      l1audio_L.retrieved_events_L = retrieved_events;
      l1audio_L.events_l1FN_L = L1I_GetTimeStamp();
      
      kal_trace( TRACE_FUNC, AM_L_L1AUD_TASK_P2L);
   
      //Retrieve Params
      P2L_rcu_buf = rcu_get_read_lock(SHARED_VAR(aud_P2L_rcu));
      //dynamic_switch_cacheable_region(&P2L_rcu_buf, ALIGNTOCACHELINE(CC_BUFFER_SIZE * sizeof(kal_uint32)), PAGE_CACHEABLE);
      
      for(i=0; i<CC_BUFFER_SIZE; i++){
         P2LBuf[i] = P2L_rcu_buf[i];
         kal_trace( TRACE_FUNC, AM_L_L1AUD_TASK_P2L_DATA, i, P2LBuf[i]);
      }      
      //dynamic_switch_cacheable_region(&P2L_rcu_buf, ALIGNTOCACHELINE(CC_BUFFER_SIZE * sizeof(kal_uint32)), PAGE_NO_CACHE);
      ASSERT( KAL_SUCCESS == rcu_free_read_lock(P2L_rcu_buf));
       
      ASSERT(P2LBuf[1] <= CC_MAX_DATA);     
      
      L1Aud_Handler_L( P2LBuf, L2PBuf );
      
      ASSERT(L2PBuf[1] <= CC_MAX_DATA);
   
      // L -> P sends returns
      //Prepare Params
      L2P_rcu_buf = rcu_get_free_buff(SHARED_VAR(aud_L2P_rcu));
      //dynamic_switch_cacheable_region(&L2P_rcu_buf, ALIGNTOCACHELINE(CC_BUFFER_SIZE * sizeof(kal_uint32)), PAGE_CACHEABLE);
      
      for(i=0; i<CC_BUFFER_SIZE; i++){
         kal_trace( TRACE_FUNC, AM_L_L1AUD_TASK_L2P_DATA, i, L2PBuf[i]);
         L2P_rcu_buf[i] = L2PBuf[i];
      }      
      //dynamic_switch_cacheable_region(&L2P_rcu_buf, ALIGNTOCACHELINE(CC_BUFFER_SIZE * sizeof(kal_uint32)), PAGE_NO_CACHE);
      ASSERT(KAL_SUCCESS == rcu_commit_data(L2P_rcu_buf));
      
      //Send A CrossCore Message
      kalcc_set_eg_events(SHARED_pVAR(AUD_L2P), 0xFF, KAL_OR);         
      kal_trace( TRACE_FUNC, AM_L_L1AUD_TASK_L2P);
      
      ASSERT( ( P2LBuf[0] | 0x8000 ) == L2PBuf[0] );  
   }//end of while
   
}


void L1SP_TCH_Notify_L( kal_bool bOn )
{
   cc_irq_lisr_aud(IRQ_L2P_TCH_NOTIFY, (kal_uint32)bOn, 0);
   am_L.tch_state_L = bOn;
   L1Audio_Msg_TCH_NOTIFY_L(L1AUDIO_Str_onoff(bOn), L1Audio_Speech_State_L(am_L.state_L));
}



//void SP4G_emac_timing_update(l1sp_emac_volte_timing_info_struct* p_timing_info){
//   
//}


void L1Aud_Handler_L( kal_uint32 P2LBuf[CC_BUFFER_SIZE], kal_uint32 L2PBuf[CC_BUFFER_SIZE] )
{
   switch(P2LBuf[0]){
   case MSG_P2L_2G_CALL_ON:
      ASSERT( 3 == P2LBuf[1]);
      cc_2G_Call_Open_L(P2LBuf[2], P2LBuf[3], P2LBuf[4]);  
      
      L2PBuf[0] = MSG_L2P_2G_CALL_ON_ACK;
      L2PBuf[1] = 0;
      break;
   case MSG_P2L_2G_CALL_OFF:
      ASSERT( 1 == P2LBuf[1]);
      cc_2G_Call_Close_L(P2LBuf[2]);    
      
      L2PBuf[0] = MSG_L2P_2G_CALL_OFF_ACK;
      L2PBuf[1] = 0;        
      break;   
   case MSG_P2L_2G_HANDOVER:
      ASSERT( 3 == P2LBuf[1]);
      cc_2G_Handover_L(P2LBuf[2], P2LBuf[3], P2LBuf[4]);

      L2PBuf[0] = MSG_L2P_2G_HANDOVER_ACK;
      L2PBuf[1] = 0;              
      break;
   case MSG_P2L_3G_CALL_ON:
      ASSERT( 7 == P2LBuf[1]);
      cc_3G_Call_Open_L(P2LBuf[2], P2LBuf[3], P2LBuf[4], P2LBuf[5], P2LBuf[6], P2LBuf[7], P2LBuf[8]);      
      
      L2PBuf[0] = MSG_L2P_3G_CALL_ON_ACK;
      L2PBuf[1] = 0;              
      break;
   case MSG_P2L_3G_CALL_OFF:
      ASSERT( 1 == P2LBuf[1]);
      cc_3G_Call_Close_L(P2LBuf[2]);
      
      L2PBuf[0] = MSG_L2P_3G_CALL_OFF_ACK;
      L2PBuf[1] = 0;              
      break;
   case MSG_P2L_4G_CALL_ON:
      ASSERT( 8 == P2LBuf[1]);
      cc_4G_Call_Open_temp_L(P2LBuf[2], P2LBuf[3], P2LBuf[4], P2LBuf[5], P2LBuf[6], P2LBuf[7], P2LBuf[8], P2LBuf[9]);
      
      L2PBuf[0] = MSG_L2P_4G_CALL_ON_ACK;
      L2PBuf[1] = 0;              
      break;   
   case MSG_P2L_4G_CALL_OFF:
      ASSERT( 1 == P2LBuf[1]);
      cc_4G_Call_Close_temp_L(P2LBuf[2]);        

      L2PBuf[0] = MSG_L2P_4G_CALL_OFF_ACK;
      L2PBuf[1] = 0;              
      break;   
   case MSG_P2L_4G_G_Codec_CALL_ON:
      ASSERT( 5 == P2LBuf[1]);
      cc_4G_G_Codec_Call_Open_temp_L(P2LBuf[2], P2LBuf[3], P2LBuf[4], P2LBuf[5], P2LBuf[6]);


      L2PBuf[0] = MSG_L2P_4G_G_Codec_CALL_ON_ACK;
      L2PBuf[1] = 0;
      break;
   case MSG_P2L_4G_G_Codec_CALL_OFF:
      ASSERT( 1 == P2LBuf[1]);
      cc_4G_G_Codec_Call_Close_temp_L(P2LBuf[2]);

      L2PBuf[0] = MSG_L2P_4G_G_Codec_CALL_OFF_ACK;
      L2PBuf[1] = 0;
      break;
   case MSG_P2L_4G_EVS_Codec_CALL_ON:
      ASSERT( 7 == P2LBuf[1]);
      cc_4G_EVS_Codec_Call_Open_temp_L(P2LBuf[2], P2LBuf[3], P2LBuf[4], P2LBuf[5], P2LBuf[6], P2LBuf[7], P2LBuf[8]);

      L2PBuf[0] = MSG_L2P_4G_EVS_Codec_CALL_ON_ACK;
      L2PBuf[1] = 0;
      break;
   case MSG_P2L_4G_EVS_Codec_CALL_OFF:
      ASSERT( 1 == P2LBuf[1]);
      cc_4G_EVS_Codec_Call_Close_temp_L(P2LBuf[2]);

      L2PBuf[0] = MSG_L2P_4G_EVS_Codec_CALL_OFF_ACK;
      L2PBuf[1] = 0;
      break;
   case MSG_P2L_C2K_CALL_ON:
      ASSERT( 5 == P2LBuf[1]);
      cc_C2K_Call_Open_L(P2LBuf[2], P2LBuf[3], P2LBuf[4], P2LBuf[5], P2LBuf[6]);
      
      L2PBuf[0] = MSG_L2P_C2K_CALL_ON_ACK;
      L2PBuf[1] = 0;              
      break;   
   case MSG_P2L_C2K_CALL_OFF:
      ASSERT( 1 == P2LBuf[1]);
      cc_C2K_Call_Close_L(P2LBuf[2]);        

      L2PBuf[0] = MSG_L2P_C2K_CALL_OFF_ACK;
      L2PBuf[1] = 0;              
      break;         
   case MSG_P2L_SET_VBI_FOR_FSM:
      ASSERT( 1 == P2LBuf[1]);
      cc_set_VBI_for_FSM_L(P2LBuf[2]);

      L2PBuf[0] = MSG_L2P_SET_VBI_FOR_FSM_ACK;
      L2PBuf[1] = 0;
      break;        
   case MSG_P2L_STANDBY_CALL_ON:
      ASSERT( 1 == P2LBuf[1]);
      cc_Standby_Call_Open_L(P2LBuf[2]);

      L2PBuf[0] = MSG_L2P_STANDBY_CALL_ON_ACK;
      L2PBuf[1] = 0;
      break;   
   case MSG_P2L_STANDBY_CALL_OFF:
      ASSERT( 1 == P2LBuf[1]);
      cc_Standby_Call_Close_L(P2LBuf[2]);

      L2PBuf[0] = MSG_L2P_STANDBY_CALL_OFF_ACK;
      L2PBuf[1] = 0;
      break;   
   case MSG_P2L_AUD_RESTART_DSP:
      {
         unsigned short DSP_status;     
         ASSERT( 0 == P2LBuf[1]);
         kal_prompt_trace(MOD_L1SP, "[DBG]MSG_P2L_AUD_RESTART_DSP 1");
         DSP_status = L1D_Audio_RestartDSP();
         kal_prompt_trace(MOD_L1SP, "[DBG]MSG_P2L_AUD_RESTART_DSP 2");
         L2PBuf[0] = MSG_L2P_AUD_RESTART_DSP_ACK;
         L2PBuf[1] = 1;  
         L2PBuf[2] = DSP_status;                
      }
      break;   
   case MSG_P2L_AUD_NONEEDDSP:     
      {         
         ASSERT( 0 == P2LBuf[1]);
         kal_prompt_trace(MOD_L1SP, "[DBG]L1D_Audio_NoNeedDSP 1");
         L1D_Audio_NoNeedDSP();
         kal_prompt_trace(MOD_L1SP, "[DBG]L1D_Audio_NoNeedDSP 2");
         L2PBuf[0] = MSG_L2P_AUD_NONEEDDSP_ACK;
         L2PBuf[1] = 0;                 
      }  
      break;  
   case MSG_P2L_L1D_AUD_CHKDSPINITDONE:
      {         
         ASSERT( 0 == P2LBuf[1]);
         cc_L1D_Audio_ChkDspInitDone_L();
         
         L2PBuf[0] = MSG_L2P_L1D_AUD_CHKDSPINITDONE_ACK;
         L2PBuf[1] = 0;                
      }    	
   	  break;     
   default:
      ASSERT(0);
      break;   
   }
}


//Fix build error with mcu\l1core\modem\tl1\tl1sim\tl1sim_dummy.c
#if !((!defined(__MT6291PLUS_FIX__ERROR_)) && defined(__L1_STANDALONE__))
void SP3G_UpdateL1AInFo( kal_uint8 bitmap, kal_uint8 value )
{
   ilm_struct current_ilm;
   ilm_L2P_SP3G_UPDATE_L1_INFO *local_para;
	 
   kal_dev_trace(TRACE_INFO,  SP3G_L1A_UPDATE_INFO_L,  bitmap, value);  
    
   current_ilm.src_mod_id   = MOD_L1SPL1;
   current_ilm.dest_mod_id  = MOD_MED;
   current_ilm.sap_id       = AUDIO_SAP;
   current_ilm.msg_id       = MSG_ID_AUDIO_L2P_SP3G_UPDATE_L1_INFO;
   current_ilm.peer_buff_ptr  = NULL;
   //current_ilm.local_para_ptr = construct_cc_non_cached_local_para(sizeof(ilm_L2P_SP3G_UPDATE_L1_INFO),TD_RESET);
   current_ilm.local_para_ptr = construct_local_para(sizeof(ilm_L2P_SP3G_UPDATE_L1_INFO),TD_RESET);
   local_para = (ilm_L2P_SP3G_UPDATE_L1_INFO *)current_ilm.local_para_ptr;
   local_para->l1_info[0] = bitmap;
   local_para->l1_info[1] = value;

   msg_send_cc(&current_ilm);
	 /*
   ilm_L2P_SP3G_UPDATE_L1_INFO *local_para;
   kal_prompt_trace(MOD_L1SP, "[SP3G_UpdateL1AInFo] Enter");
   local_para = (ilm_L2P_SP3G_UPDATE_L1_INFO *) construct_local_para( sizeof(ilm_L2P_SP3G_UPDATE_L1_INFO), TD_CTRL );
   local_para->l1_info[0] = bitmap;
   local_para->l1_info[1] = value;
   msg_send6(MOD_L1SP, MOD_MED, AUDIO_SAP, MSG_ID_AUDIO_L2P_SP3G_UPDATE_L1_INFO, (local_para_struct *)local_para, NULL);
   kal_prompt_trace(MOD_L1SP, "[SP3G_UpdateL1AInFo] Leave");	 */
}
#endif //#if !((!defined(__MT6291PLUS_FIX__ERROR_)) && defined(__L1_STANDALONE__))


static void l1audio_main_L(task_entry_struct * task_entry_ptr)
{
   kal_set_active_module_id(MOD_L1SPL1);
   
   L1Audio_Task_L( 0, 0 );
}

static kal_bool l1audio_init_L(void)
{ 
   kal_status ret;

   u32L1Audio_DSP2MCU_Interrupt_L_counter = 0;
   
   ret = kalcc_create_event_group( SHARED_pVAR(AUD_P2L), "receive_AUD_P2L_eg" );
   ASSERT(KAL_SUCCESS == ret);   	
   
   SHARED_VAR(aud_L2P_rcu) = rcu_create((void *)SHARED_ARRAY(aud_L2P_rcu_mem), 			
                                                RCU_MEMORY_SIZE(CC_BUFFER_SIZE * sizeof(kal_uint32), 2), 
                                                CC_BUFFER_SIZE * sizeof(kal_uint32), 0);
   AM_Init_L();
   return KAL_TRUE;
}
kal_bool l1spl1_create(comptask_handler_struct **handle)
{
   static const comptask_handler_struct l1spl1_handler_info =
   {
      l1audio_main_L,          /* task entry function */
      l1audio_init_L,          /* task initialization function */
      NULL,          /* task configuration function */

   };

   *handle = (comptask_handler_struct *)&l1spl1_handler_info;

   return KAL_TRUE;
}

void l1sp_register_backup()
{
	 //L1Audio_Msg_AM_L1D_Backup_L(0, *SHARE2_D2MCON);
	 //am_register_backup_L.DSP_IO_L = *SHARE2_D2MCON;
}

void l1sp_register_backup_notify()
{
	 //L1Audio_Msg_AM_L1D_Backup_L(0, *SHARE2_D2MCON);
	 //am_register_backup_L.DSP_IO_L = *SHARE2_D2MCON;
}

void l1sp_register_restore()
{
	//L1Audio_Msg_AM_L1D_Backup_L(1, am_register_backup_L.DSP_IO_L);
	
	//*SHARE2_D2MCON = am_register_backup_L.DSP_IO_L;
	//Data_Sync_Barrier();
	//L1Audio_Msg_AM_L1D_Backup_L(2, *SHARE2_D2MCON);
}

void L1AL_Timer_L_HISR( void )
{
   kal_trace( TRACE_FUNC, AM_L_SP3G_UPDATEL1DSYNC_TIMER, 0);

}
