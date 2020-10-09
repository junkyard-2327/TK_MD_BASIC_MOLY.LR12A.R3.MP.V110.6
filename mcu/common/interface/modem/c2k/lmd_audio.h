/*******************************************************************************
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
*******************************************************************************/

/*******************************************************************************
 * Filename:
 * ---------
 *    lmd_audio.h
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
 *    
 *
 ******************************************************************************/
#ifndef _LMD_AUDIO_H_
#define _LMD_AUDIO_H_

#include "kal_general_types.h"

#define MAX_FCH_FRAME_WORD_LEN      17

typedef struct
{
    kal_uint16   SpkrVoiceFwdChPcktRate;    /* forward channel voice packet rate */
    kal_uint16   SpkrVoiceFwdChPcktSize;    /* forward channel voice packet size (in x16 words) */
    kal_uint16   SpkrVoiceFwdChPcktData[MAX_FCH_FRAME_WORD_LEN]; /* forward channel voice packet data */
}IpcDsvSendSpkrVoiceFwdChPcktDataMsgT;

typedef struct
{
   kal_uint16   EbNt;                       /* Eb/Nt for FCH */
}IpcDsvSendAudioChanQltyMsgT;

typedef struct
{
   kal_uint16   AudioSpchSrvcOpt;          /* speech service option connection type */
   kal_uint16   AudioSpchSrvcOptMaxRate;   /* maximum voice encode rate */
} IpcDsvSendAudioSsoConnectMsgT;

/*MSG_ID_IPC_DSV_SEND_SPKR_VOICE_FWD_CH_PCKT_DATA_MSG*/
typedef struct
{
    LOCAL_PARA_HDR
    IpcDsvSendSpkrVoiceFwdChPcktDataMsgT msg;
} ipc_dsv_send_spkr_voice_fwd_ch_pckt_data_msg_struct;

/*MSG_ID_IPC_DSV_SEND_AUDIO_CHAN_QLTY_MSG*/
typedef struct
{
    LOCAL_PARA_HDR
    IpcDsvSendAudioChanQltyMsgT msg;
}ipc_dsv_send_audio_chan_qlty_msg_struct;

/*MSG_ID_IPC_DSV_SEND_AUDIO_SSO_CONNECT_MSG*/
typedef struct
{
    LOCAL_PARA_HDR
    IpcDsvSendAudioSsoConnectMsgT msg;
} ipc_dsv_send_audio_sso_connect_msg_struct;
typedef struct
{
   kal_uint16   RoutingDisabled;           /* KAL_TRUE if speech routing disabled */
} IpcDsvSendAudioSpchRoutingMsgT;

/*MSG_ID_IPC_DSV_SEND_AUDIO_SPCH_ROUTING_MSG*/
typedef struct
{
    LOCAL_PARA_HDR
    IpcDsvSendAudioSpchRoutingMsgT msg;
} ipc_dsv_send_audio_spch_routing_msg_struct;

typedef struct
{
   kal_uint16   AudioSsoCtrlRrmLevel;      /* rate reduced mode bit-field */
   kal_uint16   AudioSsoCtrlM2mMode;       /* mobile-to-mobile mode bit-field */
   kal_uint16   AudioSsoCtrlInitCodecMode; /* initialize codec mode bit-field */
} IpcDsvSendSsoCtrlParamsMsgT;

/*MSG_ID_IPC_DSV_SEND_AUDIO_SSO_CTRL_PARAMS_MSG*/
typedef struct
{
    LOCAL_PARA_HDR
    IpcDsvSendSsoCtrlParamsMsgT msg;
}ipc_dsv_send_audio_sso_ctrl_params_msg_struct;

/*MSG_ID_IPC_DSV_SEND_AUDIO_SSO_DISCONNECT_MSG*/
typedef struct
{
    LOCAL_PARA_HDR
}ipc_dsv_send_audio_sso_disconnect_msg_struct;
typedef struct
{
   kal_uint16   MicVoiceEncMaxRate;     /* maximum voice encode rate for connected SSO */
}  IpcDsvSetMicVoiceEncMaxRateMsgT;


/*MSG_ID_IPC_DSV_SET_MIC_VOICE_ENC_MAX_RATE_MSG*/
typedef struct
{
    LOCAL_PARA_HDR
    IpcDsvSetMicVoiceEncMaxRateMsgT msg;
} ipc_dsv_set_mic_voice_enc_max_rate_msg_struct;

/*MSG_ID_LMD_AUDIO_SSO_CONNECT_RSP_MSG*/
typedef struct
{
    LOCAL_PARA_HDR
} lmd_audio_sso_connect_rsp_msg_struct;

/*MSG_ID_LMD_AUDIO_SSO_DISCONN_RSP_MSG*/
typedef struct
{
    LOCAL_PARA_HDR
} lmd_audio_sso_disconn_rsp_msg_struct;
typedef struct
{
   kal_uint16 MppSpchRate;                 /* Encoder rate decision indicator */
   kal_uint16 NumMppSpchData;              /* Number of Tx Speech Data */
   kal_uint16 MppSpchData[MAX_FCH_FRAME_WORD_LEN];              /* Starting address of Tx Speech Data */
} IpcCpSpchDataRevChPacketMsgT;

/*MSG_ID_LMD_TX_SPCH_MSG*/
typedef struct
{
    LOCAL_PARA_HDR
	IpcCpSpchDataRevChPacketMsgT msg;
} lmd_tx_spch_msg_struct;
/*MSG_ID_LMD_SPCH_DATA_ENC_AGC_MSG*/
typedef struct
{
    LOCAL_PARA_HDR
}lmd_spch_data_enc_agc_msg_struct;

/*MSG_ID_LMD_SPCH_DATA_ENC_HFREE_MSG*/
typedef struct
{
    LOCAL_PARA_HDR
}lmd_spch_data_enc_hfree_msg_struct;

/*MSG_ID_LMD_SPCH_DATA_DEC_HFREE_MSG*/
typedef struct
{
    LOCAL_PARA_HDR
}lmd_spch_data_dec_hfree_msg_struct;

/* 
** LMD_SPEECH_LOOPBACK_MODE_MSG, start or stop speech loopback mode
*/
typedef struct
{
    kal_bool            start;
    kal_uint16          ServiceOption;  /* associated service option    */
} LmdSpeechLoopBackMsgT;

/*MSG_ID_LMD_SPEECH_LOOPBACK_MODE_MSG*/
typedef struct
{
    LOCAL_PARA_HDR
    LmdSpeechLoopBackMsgT msg;
}lmd_speech_loopback_mode_msg_struct;

typedef enum 
{
   IPC_SPCH_BLANK       = 0x0,
   IPC_SPCH_EIGHTH      = 0x1,
   IPC_SPCH_QUARTER     = 0x2,   /* not used for SSO 3 */
   IPC_SPCH_HALF        = 0x3,
   IPC_SPCH_FULL        = 0x4,   
#ifdef MTK_CBP_ENCRYPT_VOICE
   IPC_SPCH_ENCRYPT_BLK	= 0x5,	 /*used only for SO32944*/
   IPC_SPCH_ENCRYPT_FULL = 0X6,	/*used only for SO32944*/
#endif
   IPC_SPCH_NON_CRITICAL= 0xC,/*change to 0xc since there's a definition in other Branches which already used 0X5*/
   IPC_SPCH_ERASURE     = 0xE,
   IPC_SPCH_FULL_LIKELY = 0xF    /* used only for SSO's 1&3 */
} IpcSpchSrvcOptRateT;

typedef enum
{
   IPC_SPCH_SRVC_OPTION_NULL   = 0,       /* Invalid service option  */
   IPC_SPCH_SRVC_OPTION1       = 1,       /* SO1.   QCELP8. not supported  */
   IPC_SPCH_SRVC_OPTION3       = 3,       /* SO3.   EVRC-A */
   IPC_SPCH_SRVC_OPTION17      = 17,      /* SO17.  QCELP13 */
   IPC_SPCH_SRVC_OPTION68      = 68,      /* SO68.  EVRC-B */
   IPC_SPCH_SRVC_OPTION73      = 73,      /* SO73.  EVRC-NB */
   IPC_SPCH_SRVC_OPTION73WB    = 173,     /* SO73.  EVRC-WB */
   IPC_SPCH_SRVC_OPTION_AMR    = 100,     /* WCDMA. AMR */
   IPC_SPCH_SRVC_OPTION_AMRWB  = 101,     /* WCDMA. AMR-WB */
   IPC_SPCH_SRVC_OPTION_GSMFR  = 256,     /* GSM.   GSMFR */
   IPC_SPCH_SRVC_OPTION_GSMEFR = 257,     /* GSM    GSMEFR */
   IPC_SPCH_SRVC_OPTION_GSMHR  = 258      /* GSM.   GSMHR */
#ifdef MTK_CBP_ENCRYPT_VOICE
	, 
   IPC_SPCH_SRVC_OPTION32944  =32944 	/*SO0x80b0 Voice Encryption*/
#endif
} IpcSpchSrvcOptT;

typedef struct
{
    kal_uint32 u4HBFrmCountUL1, u4HBFrmCountUL2;
    kal_uint32 u4HBFrmCountDL1, u4HBFrmCountDL2;
    kal_bool bSta;
    kal_bool bCodRdy;
    kal_bool bFstDLFrm;
    kal_bool bAppSta;
    kal_bool bLMDLbk;
    kal_bool bCAALLbk;
    kal_uint16 u2Cod;
    kal_uint16 u2RS;
    kal_uint16 u2Dbg;
    
}SPC2K_Struct;


typedef struct
{
    kal_uint16        u2Mode;
    kal_uint16        u2SO;
    kal_bool          bStart;
        
}HwdSphLbkMsgT;

//enum CAALMsgId
//{
//    MSG_ID_CAAL_SSO_CONN_RSP_MSG = 0,
//    MSG_ID_CAAL_SSO_DISCONN_RSP_MSG,
//    MSG_ID_CAAL_SPH_DATA_UL_MSG
//};

//enum SphEtsMsgId
//{
//    SPH_ETS_READ_DSP_MEM = IPC_CP_FROM_SPH_ETS_MIN_MSG,
//    SPH_ETS_LBK,
//    SPH_ETS_FRC_TONE
//};

void SPC2K_init( void );
void SPC2K_ConSSO_Req( kal_uint16 u2SrvOpt, kal_uint16 u2MaxEncRate);
void SPC2K_DisconSSO_Req( void );
void SPC2K_ConSSO_Done( void );
void SPC2K_DisconSSO_Done( void );
void SPC2K_ConSSO_Done_Rsp( void );
void SPC2K_DisconSSO_Done_Rsp( void );
kal_bool SPC2K_State( void );
void SPC2K_UL_GetSpeechFrame( void );
void SPC2K_DL_PutSpeechFrame(IpcDsvSendSpkrVoiceFwdChPcktDataMsgT *MsgFLDataP);
void SPC2K_DL_PutSpeechFrame_Do(IpcDsvSendSpkrVoiceFwdChPcktDataMsgT *MsgFLDataP);
void SPC2K_SOCM_Set(IpcDsvSendSsoCtrlParamsMsgT *pMsg);
void SPC2K_EncMaxRate_Set(IpcDsvSetMicVoiceEncMaxRateMsgT *pMsg);
void SPC2K_GetSyncDelayRW( kal_uint16 *u2DelR, kal_uint16 *u2DelW, kal_uint16 *u2DelM);
void SPC2K_Debug_Info(IpcDsvSendAudioChanQltyMsgT * pMsg);
void SPC2K_Link_Lbk(HwdSphLbkMsgT *pMsg);

extern SPC2K_Struct spc2k;


#endif 
