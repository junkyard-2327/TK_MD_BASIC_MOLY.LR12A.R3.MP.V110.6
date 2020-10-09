#ifndef AUDIO_CC
#define AUDIO_CC

typedef enum {
   IRQ_L2P_TCH_NOTIFY,
   IRQ_L2P_2G_HANDOVER,
   IRQ_L2P_2G_AUDIOMANAGER_INFO,    
   IRQ_L2P_D2M_L2P_NOTIFY,  
   IRQ_L2P_BT_SCO_L2P_NOTIFY,  
   //IRQ_SP3G_LOG_L1_INFO,
   //IRQ_SP4G_EMAC_TIMING_UPDATE,
}AUD_CC_IRQ_T;

typedef enum {	
	AUD_L2P_MESSAGE_BIT          = 1 << 0,	//bit 1 
}AUD_CC_L2P_EG_MASK; //Event Group

typedef enum {		
	AUD_P2L_MESSAGE_BIT          = 1 << 0,	//bit 1 
}AUD_CC_P2L_EG_MASK; //Event Group

#define MSG_P2L_BASE 0x2E00
#define MSG_L2P_BASE 0xAE00
typedef enum {
	//------------------ P2L -----------------------
	MSG_P2L_2G_CALL_ON = MSG_P2L_BASE + 0x00,   
	MSG_P2L_2G_CALL_OFF,
	MSG_P2L_2G_HANDOVER,
	MSG_P2L_3G_CALL_ON,	
	MSG_P2L_3G_CALL_OFF,	
	MSG_P2L_4G_CALL_ON,	
	MSG_P2L_4G_CALL_OFF,
	MSG_P2L_4G_G_Codec_CALL_ON, 
	MSG_P2L_4G_G_Codec_CALL_OFF,
	MSG_P2L_4G_EVS_Codec_CALL_ON,
	MSG_P2L_4G_EVS_Codec_CALL_OFF,
	MSG_P2L_C2K_CALL_ON,	
	MSG_P2L_C2K_CALL_OFF,	
	MSG_P2L_STANDBY_CALL_ON,  
	MSG_P2L_STANDBY_CALL_OFF, 
	MSG_P2L_SET_VBI_FOR_FSM,
	MSG_P2L_AUD_RESTART_DSP,
	MSG_P2L_AUD_NONEEDDSP,
	MSG_P2L_L1D_AUD_CHKDSPINITDONE,
	
	//------------------- L2P ----------------------	
	MSG_L2P_2G_CALL_ON_ACK = MSG_L2P_BASE,
	MSG_L2P_2G_CALL_OFF_ACK,
	MSG_L2P_2G_HANDOVER_ACK,
	MSG_L2P_3G_CALL_ON_ACK,	
	MSG_L2P_3G_CALL_OFF_ACK,	
	MSG_L2P_4G_CALL_ON_ACK,	
	MSG_L2P_4G_CALL_OFF_ACK,
	MSG_L2P_4G_G_Codec_CALL_ON_ACK,
	MSG_L2P_4G_G_Codec_CALL_OFF_ACK,
	MSG_L2P_4G_EVS_Codec_CALL_ON_ACK,
	MSG_L2P_4G_EVS_Codec_CALL_OFF_ACK,
	MSG_L2P_C2K_CALL_ON_ACK,	
	MSG_L2P_C2K_CALL_OFF_ACK,		
	MSG_L2P_STANDBY_CALL_ON_ACK,  
	MSG_L2P_STANDBY_CALL_OFF_ACK, 
	MSG_L2P_SET_VBI_FOR_FSM_ACK,
	MSG_L2P_AUD_RESTART_DSP_ACK,
	MSG_L2P_AUD_NONEEDDSP_ACK,
	MSG_L2P_L1D_AUD_CHKDSPINITDONE_ACK,
	
}AUD_CC_MSG_T;

#define CC_MAX_DATA   (10)
#define CC_BUFFER_SIZE (1 + 1 + CC_MAX_DATA)// msg id + # of 32-bit data + max # of 32-bit data

// format structure
// 32bits: MSG_ID
// 32bits: # of 32-bit data,  # should be less than 10
// 32-bit params
#define CC_DUMMY_PARAM  (0)


//L2P ILM Structure
typedef struct{
   LOCAL_PARA_HDR
   kal_uint8 l1_info[2]; 
}ilm_L2P_SP3G_UPDATE_L1_INFO;

#endif
