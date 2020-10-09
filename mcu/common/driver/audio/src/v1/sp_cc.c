#include "kal_public_defs.h"
#include "kal_general_types.h"
#include "kal_public_api.h"
#include "kal_trace.h"
#include "sp_cc.h"
#include "l1audio_trace.h"
#include "l1sp_trc.h"
#include "media.h"


//DEFINE_C_SHARED_VAR(kalcc_rcuid, aud_P2L_rcu);
kalcc_rcuid aud_P2L_rcu;
DEFINE_RCU_DC_ARRAY(kal_uint8, aud_P2L_rcu_mem, RCU_MEMORY_SIZE(CC_BUFFER_SIZE * sizeof(kal_uint32), 2)); // 1024 bytes * 1 blocks

//DEFINE_C_SHARED_VAR(kalcc_rcuid, aud_L2P_rcu);
kalcc_rcuid aud_L2P_rcu;
DEFINE_RCU_DC_ARRAY(kal_uint8, aud_L2P_rcu_mem, RCU_MEMORY_SIZE(CC_BUFFER_SIZE * sizeof(kal_uint32), 2)); // 1024 bytes * 1 blocks

//DECLARE_SHARED_VAR(cc_eventgrpid, AUD_P2L);
//DEFINE_C_SHARED_VAR(cc_eventgrpid, AUD_P2L);
cc_eventgrpid AUD_P2L;

//DECLARE_SHARED_VAR(cc_eventgrpid, AUD_L2P);	
//DEFINE_C_SHARED_VAR(cc_eventgrpid, AUD_L2P);
cc_eventgrpid AUD_L2P;

typedef struct {
  kal_uint32 event_id;
  kal_uint32 event_param1;
  kal_uint32 event_param2;
} SP_CC_EVENT_PARAM;

RINGBUFFER_T(SP_CC_EVENT_PARAM,32) qsp_cc_event_param;
extern kal_enhmutexid sp_handover_mutex;


static kal_uint32 u32BT_SCO_LISR_L2P_counter;

extern void L1Audio_DSP2MCU_Interrupt();
#if defined(__CVSD_CODEC_SUPPORT__) 
extern void BT_SCO_LISR(void);
#endif //#if defined(__CVSD_CODEC_SUPPORT__) 


extern kal_enhmutexid sp_cc_mutex;

void SP_CC_Event_Handler()
{
   //send a message to MED
   SP_CC_EVENT_PARAM sp_cc_event_param_local;

   while( !RB_EMPTY(qsp_cc_event_param) ){
      ilm_SP_CHANGERATE_EVENT_t *local_para;
      RB_GET( qsp_cc_event_param, sp_cc_event_param_local );
      kal_trace( TRACE_FUNC, SP_CC_EVENT_HANDLER_ENTER, sp_cc_event_param_local.event_id, sp_cc_event_param_local.event_param1, sp_cc_event_param_local.event_param2);
      local_para = (ilm_SP_CHANGERATE_EVENT_t *) construct_local_para( sizeof(ilm_SP_CHANGERATE_EVENT_t), TD_CTRL );

      switch(sp_cc_event_param_local.event_id){
         case IRQ_L2P_TCH_NOTIFY:
            local_para->event = SP_2G_TCH;
            break;
         case IRQ_L2P_2G_HANDOVER:
            local_para->event = SP_2G_HANDOVER;
            break;
         case IRQ_L2P_2G_AUDIOMANAGER_INFO:
            local_para->event = SP_2G_AUDIOMANAGER_INFO;
            break;            
         default:
            ASSERT(0);
            break;
      }
      local_para->param[0]  = sp_cc_event_param_local.event_param1;
      local_para->param[1]  = sp_cc_event_param_local.event_param2;
      msg_send6(MOD_L1SP, MOD_MED, AUDIO_SAP, MSG_ID_AUDIO_M2M_CHANGERATE_EVENT, (local_para_struct *)local_para, NULL);
      kal_trace( TRACE_FUNC, SP_CC_EVENT_HANDLER_LEAVE);
   }
}

void cc_irq_lisr_aud(kal_uint32 event_id, kal_uint32 param1, kal_uint32 param2)
{  
   SP_CC_EVENT_PARAM sp_cc_event_param_local;
   void L1Audio_CCSetEvent( void );

 	 sp_cc_event_param_local.event_id = event_id;
	 sp_cc_event_param_local.event_param1 = param1;
	 sp_cc_event_param_local.event_param2 = param2;
	 RB_PUT( qsp_cc_event_param, sp_cc_event_param_local );
	 L1Audio_CCSetEvent();
}

//ToDO move Task Init      
void SP_CC_Init()
{
   RB_INIT( qsp_cc_event_param );
   
   u32BT_SCO_LISR_L2P_counter = 0;

   ASSERT( KAL_SUCCESS == kalcc_create_event_group( SHARED_pVAR(AUD_L2P), "receive_AUD_L2P_eg" ) );
   
   SHARED_VAR(aud_P2L_rcu) =	rcu_create((void *)SHARED_ARRAY(aud_P2L_rcu_mem), RCU_MEMORY_SIZE(CC_BUFFER_SIZE * sizeof(kal_uint32), 2), CC_BUFFER_SIZE * sizeof(kal_uint32), 0);
  
}

//audio_service.c
void cc_InvokeLCoreFunction(kal_uint32 P2L_Buf[CC_BUFFER_SIZE], kal_uint32 L2P_Buf[CC_BUFFER_SIZE])
{
   int i;
   kal_uint32 *P2L_rcu_buf;
   kal_uint32 *L2P_rcu_buf;
   kal_uint32 retrieved_events;
      
   kal_take_enh_mutex( sp_cc_mutex );
      
   ASSERT(P2L_Buf[1] <= CC_MAX_DATA);

   // P -> L  invoke a LCore side's function
   //Prepare Params
   kal_trace( TRACE_FUNC, SP_CC_INVOKELCORE, 1);
   P2L_rcu_buf = rcu_get_free_buff(SHARED_VAR(aud_P2L_rcu));
   //dynamic_switch_cacheable_region(&P2L_rcu_buf, ALIGNTOCACHELINE(CC_BUFFER_SIZE * sizeof(kal_uint32)), PAGE_CACHEABLE);
   
   kal_trace( TRACE_FUNC, SP_CC_INVOKELCORE, 2);
   for(i=0; i<CC_BUFFER_SIZE; i++){
      P2L_rcu_buf[i] = P2L_Buf[i];
      kal_trace( TRACE_FUNC, SP_CC_INVOKELCORE_INFO, 3, i, P2L_Buf[i]);
   }      
   //dynamic_switch_cacheable_region(&P2L_rcu_buf, ALIGNTOCACHELINE(CC_BUFFER_SIZE * sizeof(kal_uint32)), PAGE_NO_CACHE);
   ASSERT(KAL_SUCCESS == rcu_commit_data(P2L_rcu_buf));
   
   kal_trace( TRACE_FUNC, SP_CC_INVOKELCORE, 4);
   //Send A CrossCore Message
   kalcc_set_eg_events(SHARED_pVAR(AUD_P2L), 0xFF, KAL_OR);
      
   // L -> P Get return values
   //Wait for the response
   kal_trace( TRACE_FUNC, SP_CC_INVOKELCORE, 5);
   kalcc_retrieve_eg_events(SHARED_pVAR(AUD_L2P), 0xFF, KAL_OR_CONSUME, &retrieved_events, KAL_SUSPEND);      
   
   //Retrieve returns
   kal_trace( TRACE_FUNC, SP_CC_INVOKELCORE, 6);   
   L2P_rcu_buf = rcu_get_read_lock(SHARED_VAR(aud_L2P_rcu));
   //dynamic_switch_cacheable_region(&L2P_rcu_buf, ALIGNTOCACHELINE(CC_BUFFER_SIZE * sizeof(kal_uint32)), PAGE_CACHEABLE);
   
   for(i=0; i<CC_BUFFER_SIZE; i++){
      L2P_Buf[i] = L2P_rcu_buf[i];
      kal_trace( TRACE_FUNC, SP_CC_INVOKELCORE_INFO, 7, i, L2P_Buf[i]);
   }      
   //dynamic_switch_cacheable_region(&L2P_rcu_buf, ALIGNTOCACHELINE(CC_BUFFER_SIZE * sizeof(kal_uint32)), PAGE_NO_CACHE);
   ASSERT( KAL_SUCCESS == rcu_free_read_lock(L2P_rcu_buf));
   
   ASSERT( ( P2L_Buf[0] | 0x8000 ) == L2P_Buf[0] );  

   kal_give_enh_mutex( sp_cc_mutex );
}


void cc_L1D_Audio_ChkDspInitDone()
{
	  int i;
    kal_uint32 P2L_Buf[CC_BUFFER_SIZE]; 
    kal_uint32 L2P_Buf[CC_BUFFER_SIZE];
    // clear internal buffer
    for( i = 0; i < CC_BUFFER_SIZE ; i++){
       P2L_Buf[i] = L2P_Buf[i] = 0 ;
    }
           
    P2L_Buf[0] = MSG_P2L_L1D_AUD_CHKDSPINITDONE;
    P2L_Buf[1] = 0;
    cc_InvokeLCoreFunction(P2L_Buf, L2P_Buf);
    ASSERT( 0 == L2P_Buf[1]);
}

kal_uint16 cc_L1D_Audio_RestartDSP()
{
	  int i;	
    kal_uint32 P2L_Buf[CC_BUFFER_SIZE]; 
    kal_uint32 L2P_Buf[CC_BUFFER_SIZE];
    // clear internal buffer
    for( i = 0; i < CC_BUFFER_SIZE ; i++){
       P2L_Buf[i] = L2P_Buf[i] = 0 ;
    }
           
    P2L_Buf[0] = MSG_P2L_AUD_RESTART_DSP;
    P2L_Buf[1] = 0;
    cc_InvokeLCoreFunction(P2L_Buf, L2P_Buf);
    ASSERT( 1 == L2P_Buf[1]);
    return L2P_Buf[2];
}

void cc_L1D_Audio_NoNeedDSP()
{
	  int i;	
    kal_uint32 P2L_Buf[CC_BUFFER_SIZE]; 
    kal_uint32 L2P_Buf[CC_BUFFER_SIZE];
    // clear internal buffer
    for( i = 0; i < CC_BUFFER_SIZE ; i++){
       P2L_Buf[i] = L2P_Buf[i] = 0 ;
    }
           
    P2L_Buf[0] = MSG_P2L_AUD_NONEEDDSP;
    P2L_Buf[1] = 0;
    cc_InvokeLCoreFunction(P2L_Buf, L2P_Buf);
    ASSERT( 0 == L2P_Buf[1]);	
}

void cc_set_VBI_for_FSM(kal_uint32 state)
{
   int i; 
   kal_uint32 P2L_Buf[CC_BUFFER_SIZE]; 
   kal_uint32 L2P_Buf[CC_BUFFER_SIZE];
   // clear internal buffer
   for( i = 0; i < CC_BUFFER_SIZE ; i++){
      P2L_Buf[i] = L2P_Buf[i] = 0 ;
   }
          
   P2L_Buf[0] = MSG_P2L_SET_VBI_FOR_FSM;
   P2L_Buf[1] = 1;
   P2L_Buf[2] = state;
   cc_InvokeLCoreFunction(P2L_Buf, L2P_Buf);
   ASSERT( 0 == L2P_Buf[1]);
}

void cc_Standby_Call_Open(kal_uint32 enc_mod)
{
   int i; 
   kal_uint32 P2L_Buf[CC_BUFFER_SIZE]; 
   kal_uint32 L2P_Buf[CC_BUFFER_SIZE];
   // clear internal buffer
   for( i = 0; i < CC_BUFFER_SIZE ; i++){
      P2L_Buf[i] = L2P_Buf[i] = 0 ;
   }
          
   P2L_Buf[0] = MSG_P2L_STANDBY_CALL_ON;
   P2L_Buf[1] = 1;
   P2L_Buf[2] = enc_mod;
   cc_InvokeLCoreFunction(P2L_Buf, L2P_Buf);
   ASSERT( 0 == L2P_Buf[1]);
   L1SP_Set_isStandByMode(true);
}


void cc_Standby_Call_Close(kal_uint32 dsp_end)
{
   int i; 
   kal_uint32 P2L_Buf[CC_BUFFER_SIZE]; 
   kal_uint32 L2P_Buf[CC_BUFFER_SIZE];
   
   // clear internal buffer
   for( i = 0; i < CC_BUFFER_SIZE ; i++){
      P2L_Buf[i] = L2P_Buf[i] = 0 ;
   }
   
   P2L_Buf[0] = MSG_P2L_STANDBY_CALL_OFF;
   P2L_Buf[1] = 1;
   P2L_Buf[2] = dsp_end;
   cc_InvokeLCoreFunction(P2L_Buf, L2P_Buf);
   ASSERT( 0 == L2P_Buf[1]);  
   L1SP_Set_isStandByMode(false);
}


//am.c
void cc_2G_Call_Open(kal_uint32 enc_mod, kal_uint32 dec_mod, kal_uint32 sub_channel)
{
	  int i;	
    kal_uint32 P2L_Buf[CC_BUFFER_SIZE]; 
    kal_uint32 L2P_Buf[CC_BUFFER_SIZE];
    // clear internal buffer
    for( i = 0; i < CC_BUFFER_SIZE ; i++){
       P2L_Buf[i] = L2P_Buf[i] = 0 ;
    }
           
    P2L_Buf[0] = MSG_P2L_2G_CALL_ON;
    P2L_Buf[1] = 3;
    P2L_Buf[2] = enc_mod; P2L_Buf[3] = dec_mod; P2L_Buf[4] = sub_channel;
    cc_InvokeLCoreFunction(P2L_Buf, L2P_Buf);
    ASSERT( 0 == L2P_Buf[1]);
}	

void cc_2G_Call_Close(kal_uint32 dsp_end)
{
    int i;	
    kal_uint32 P2L_Buf[CC_BUFFER_SIZE]; 
    kal_uint32 L2P_Buf[CC_BUFFER_SIZE];

    if( L1SP_Get_isStandByMode() ) {
        cc_Standby_Call_Close(true);
    }
    else {
        // clear internal buffer
        for( i = 0; i < CC_BUFFER_SIZE ; i++){
           P2L_Buf[i] = L2P_Buf[i] = 0 ;
        }

        P2L_Buf[0] = MSG_P2L_2G_CALL_OFF;
        P2L_Buf[1] = 1;
        P2L_Buf[2] = dsp_end;
        cc_InvokeLCoreFunction(P2L_Buf, L2P_Buf);
        ASSERT( 0 == L2P_Buf[1]);
    }
}

void cc_2G_Call_Handover(kal_uint32 speech_mode, kal_uint32 sub_channel)
{
	  int i;	
    kal_uint32 P2L_Buf[CC_BUFFER_SIZE]; 
    kal_uint32 L2P_Buf[CC_BUFFER_SIZE];
    // clear internal buffer
    for( i = 0; i < CC_BUFFER_SIZE ; i++){
       P2L_Buf[i] = L2P_Buf[i] = 0 ;
    }
           
    P2L_Buf[0] = MSG_P2L_2G_HANDOVER;
    P2L_Buf[1] = 3;
    P2L_Buf[2] = speech_mode;
    P2L_Buf[3] = speech_mode;
    P2L_Buf[4] = sub_channel;    
    cc_InvokeLCoreFunction(P2L_Buf, L2P_Buf);
    ASSERT( 0 == L2P_Buf[1]);
}

void cc_3G_Call_Open(kal_uint32 enc_mod, kal_uint32 dec_mod, kal_uint32 dtx, kal_uint32 delR, kal_uint32 delW, kal_uint32 delM, kal_uint32 u32CurTime64us)
{
	  int i;	
    kal_uint32 P2L_Buf[CC_BUFFER_SIZE]; 
    kal_uint32 L2P_Buf[CC_BUFFER_SIZE];
    // clear internal buffer
    for( i = 0; i < CC_BUFFER_SIZE ; i++){
       P2L_Buf[i] = L2P_Buf[i] = 0 ;
    }
           
    P2L_Buf[0] = MSG_P2L_3G_CALL_ON;
    P2L_Buf[1] = 7;
    P2L_Buf[2] = enc_mod; P2L_Buf[3] = dec_mod; P2L_Buf[4] = dtx;
    P2L_Buf[5] = delR;    P2L_Buf[6] = delW;    P2L_Buf[7] = delM;
    P2L_Buf[8] = u32CurTime64us;
    cc_InvokeLCoreFunction(P2L_Buf, L2P_Buf);
    ASSERT( 0 == L2P_Buf[1]);
}

void cc_3G_Call_Close(kal_uint32 dsp_end)
{
	  int i;	
    kal_uint32 P2L_Buf[CC_BUFFER_SIZE]; 
    kal_uint32 L2P_Buf[CC_BUFFER_SIZE];

    if( L1SP_Get_isStandByMode() ) {
        cc_Standby_Call_Close(true);
    }
    else {
        // clear internal buffer
        for( i = 0; i < CC_BUFFER_SIZE ; i++){
           P2L_Buf[i] = L2P_Buf[i] = 0 ;
        }

        P2L_Buf[0] = MSG_P2L_3G_CALL_OFF;
        P2L_Buf[1] = 1;
        P2L_Buf[2] = dsp_end;
        cc_InvokeLCoreFunction(P2L_Buf, L2P_Buf);
        ASSERT( 0 == L2P_Buf[1]);  
    }
}

void cc_4G_Call_Open_temp(kal_uint32 enc_mod, kal_uint32 dec_mod, kal_uint32 dtx, kal_uint32 delR, kal_uint32 delW, kal_uint32 delM, kal_uint32 u32CurTime64us, kal_uint32 is_4G_handover)
{
	  int i;	
    kal_uint32 P2L_Buf[CC_BUFFER_SIZE]; 
    kal_uint32 L2P_Buf[CC_BUFFER_SIZE];
    // clear internal buffer
    for( i = 0; i < CC_BUFFER_SIZE ; i++){
       P2L_Buf[i] = L2P_Buf[i] = 0 ;
    }
           
    P2L_Buf[0] = MSG_P2L_4G_CALL_ON;
    P2L_Buf[1] = 8;
    P2L_Buf[2] = enc_mod; P2L_Buf[3] = dec_mod; P2L_Buf[4] = dtx;
    P2L_Buf[5] = delR;    P2L_Buf[6] = delW;    P2L_Buf[7] = delM;
    P2L_Buf[8] = u32CurTime64us;
    P2L_Buf[9] = is_4G_handover;
    cc_InvokeLCoreFunction(P2L_Buf, L2P_Buf);
    ASSERT( 0 == L2P_Buf[1]);
}

void cc_4G_Call_Close_temp(kal_uint32 dsp_end)
{
	  int i;	
    kal_uint32 P2L_Buf[CC_BUFFER_SIZE]; 
    kal_uint32 L2P_Buf[CC_BUFFER_SIZE];

    if( L1SP_Get_isStandByMode() ) {
        cc_Standby_Call_Close(true);
    }
    else {
        // clear internal buffer
        for( i = 0; i < CC_BUFFER_SIZE ; i++){
           P2L_Buf[i] = L2P_Buf[i] = 0 ;
        }
       
        P2L_Buf[0] = MSG_P2L_4G_CALL_OFF;
        P2L_Buf[1] = 1;
        P2L_Buf[2] = dsp_end;
        cc_InvokeLCoreFunction(P2L_Buf, L2P_Buf);
        ASSERT( 0 == L2P_Buf[1]);
    }
}

void cc_4G_G_Codec_Call_Open(kal_uint32 band_mod, kal_uint32 delR, kal_uint32 delW, kal_uint32 delM, kal_uint32 u32CurTime64us)
{
    int i;	
//    ASSERT(false);
    #if 1
    kal_uint32 P2L_Buf[CC_BUFFER_SIZE]; 
    kal_uint32 L2P_Buf[CC_BUFFER_SIZE];
    // clear internal buffer
    for( i = 0; i < CC_BUFFER_SIZE ; i++){
        P2L_Buf[i] = L2P_Buf[i] = 0 ;
    }

    P2L_Buf[0] = MSG_P2L_4G_G_Codec_CALL_ON;
    P2L_Buf[1] = 5;
    P2L_Buf[2] = band_mod; P2L_Buf[3] = delR; P2L_Buf[4] = delW;
    P2L_Buf[5] = delM;     P2L_Buf[6] = u32CurTime64us;
    cc_InvokeLCoreFunction(P2L_Buf, L2P_Buf);
    ASSERT( 0 == L2P_Buf[1]);
    #endif
}

void cc_4G_G_Codec_Call_Close(kal_uint32 dsp_end)
{
    int i;	
//    ASSERT(false);
    #if 1
    kal_uint32 P2L_Buf[CC_BUFFER_SIZE]; 
    kal_uint32 L2P_Buf[CC_BUFFER_SIZE];

    if( L1SP_Get_isStandByMode() ) {
        cc_Standby_Call_Close(true);
    }
    else {
        // clear internal buffer
        for( i = 0; i < CC_BUFFER_SIZE ; i++){
           P2L_Buf[i] = L2P_Buf[i] = 0 ;
        }

        P2L_Buf[0] = MSG_P2L_4G_G_Codec_CALL_OFF;
        P2L_Buf[1] = 1;
        P2L_Buf[2] = dsp_end;
        cc_InvokeLCoreFunction(P2L_Buf, L2P_Buf);
        ASSERT( 0 == L2P_Buf[1]);
    }
    #endif    
}


void cc_4G_EVS_Codec_Call_Open(kal_uint32 codec, uint32 isDTX, kal_uint32 delR, kal_uint32 delW, kal_uint32 delM, kal_uint32 u32CurTime64us, kal_uint32 is_4G_handover)
{
    int i;	
    kal_uint32 P2L_Buf[CC_BUFFER_SIZE]; 
    kal_uint32 L2P_Buf[CC_BUFFER_SIZE];
    // clear internal buffer
    for( i = 0; i < CC_BUFFER_SIZE ; i++){
        P2L_Buf[i] = L2P_Buf[i] = 0 ;
    }

    P2L_Buf[0] = MSG_P2L_4G_EVS_Codec_CALL_ON;
    P2L_Buf[1] = 7;
    P2L_Buf[2] = codec; P2L_Buf[3] = isDTX; P2L_Buf[4] = delR;
    P2L_Buf[5] = delW;  P2L_Buf[6] = delM;  P2L_Buf[7] = u32CurTime64us;
    P2L_Buf[8] = is_4G_handover;
    cc_InvokeLCoreFunction(P2L_Buf, L2P_Buf);
    ASSERT( 0 == L2P_Buf[1]);
}


void cc_4G_EVS_Codec_Call_Close(kal_uint32 dsp_end)
{
    int i;	
    kal_uint32 P2L_Buf[CC_BUFFER_SIZE];
    kal_uint32 L2P_Buf[CC_BUFFER_SIZE];

    if( L1SP_Get_isStandByMode() ) {
        cc_Standby_Call_Close(true);
    }
    else {
        // clear internal buffer
        for( i = 0; i < CC_BUFFER_SIZE ; i++){
           P2L_Buf[i] = L2P_Buf[i] = 0 ;
        }

        P2L_Buf[0] = MSG_P2L_4G_EVS_Codec_CALL_OFF;
        P2L_Buf[1] = 1;
        P2L_Buf[2] = dsp_end;
        cc_InvokeLCoreFunction(P2L_Buf, L2P_Buf);
        ASSERT( 0 == L2P_Buf[1]);
    }
}


void cc_C2K_Call_Open(kal_uint32 so, kal_uint32 dtx, kal_uint32 delR, kal_uint32 delW, kal_uint32 delM)
{
	  int i;	
    kal_uint32 P2L_Buf[CC_BUFFER_SIZE]; 
    kal_uint32 L2P_Buf[CC_BUFFER_SIZE];
    // clear internal buffer
    for( i = 0; i < CC_BUFFER_SIZE ; i++){
       P2L_Buf[i] = L2P_Buf[i] = 0 ;
    }
           
    P2L_Buf[0] = MSG_P2L_C2K_CALL_ON;
    P2L_Buf[1] = 5;
    P2L_Buf[2] = so; 
    P2L_Buf[3] = dtx;
    P2L_Buf[4] = delR;
    P2L_Buf[5] = delW;
    P2L_Buf[6] = delM;
    cc_InvokeLCoreFunction(P2L_Buf, L2P_Buf);
    ASSERT( 0 == L2P_Buf[1]);
}

void cc_C2K_Call_Close(kal_uint32 dsp_end)
{
	  int i;	
    kal_uint32 P2L_Buf[CC_BUFFER_SIZE]; 
    kal_uint32 L2P_Buf[CC_BUFFER_SIZE];

    if( L1SP_Get_isStandByMode() ) {
        cc_Standby_Call_Close(true);
    }
    else {
        // clear internal buffer
        for( i = 0; i < CC_BUFFER_SIZE ; i++){
           P2L_Buf[i] = L2P_Buf[i] = 0 ;
        }

        P2L_Buf[0] = MSG_P2L_C2K_CALL_OFF;
        P2L_Buf[1] = 1;
        P2L_Buf[2] = dsp_end;
        cc_InvokeLCoreFunction(P2L_Buf, L2P_Buf);
        ASSERT( 0 == L2P_Buf[1]);  
    }
}

void SP_L2P_Handler(ilm_struct *ilm_ptr)
{
   switch (ilm_ptr->msg_id) {
   	  case MSG_ID_AUDIO_L2P_SP3G_UPDATE_L1_INFO:
   	  {
	  	   ilm_L2P_SP3G_UPDATE_L1_INFO *local_para = (ilm_L2P_SP3G_UPDATE_L1_INFO *)(ilm_ptr->local_para_ptr);
   	  	 kal_trace( TRACE_INFO, SP_CC_L2P_Hdler,  0, local_para->l1_info[0], local_para->l1_info[1]);
         SP3G_UpdateL1AInFo_P(local_para->l1_info[0], local_para->l1_info[1]); 
   	  }
   	  break;	
      default:
      {
         kal_trace( TRACE_INFO, SP_CC_L2P_Hdler_Err, ilm_ptr->msg_id);
         break;
      }
   }
}
