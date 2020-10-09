/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2015
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

#include "l1aud_common_def.h"
#include "lmd_audio.h"
#include "sp_c2k.h"
#include "sal_def.h"
#include "sal_exp.h"
#include "am.h"
#include "audio_dsp_d2c_def.h"
#include "l1sp_trc.h"
#include "media.h"
#include "lmd_msgid.h"


static void CodReady( void );
static void CodClose( void );
static void CodHBLenGet( uint16 u2RS, IpcSpchSrvcOptRateT u2Rate, uint16 *p2HBLen );
static void CodParse( IpcSpchSrvcOptT SO );
static void DLFrameProc(IpcDsvSendSpkrVoiceFwdChPcktDataMsgT *MsgFLDataP);
SPC2K_Struct spc2k;

    IpcCpSpchDataRevChPacketMsgT MsgLbkUL;
    IpcDsvSendSpkrVoiceFwdChPcktDataMsgT MsgLbkDL;

uint16 au2ToneTab1K[C2K_COD_RS_1_FULL_LEN_WORD16] = {0x6eac, 0xe370, 0x4862, 0xf8f0, 0x0444, 0x7c16, 0x5e3a, 0x688f, 0x8ca0, 0xc171, 0x4a00};

static void CodParse( IpcSpchSrvcOptT SO)
{
    switch (SO)
    {
        case IPC_SPCH_SRVC_OPTION3:
            spc2k.u2RS = C2K_COD_RS_1;
            spc2k.u2Cod = C2K_COD_EVRCA;
        break;
            
        case IPC_SPCH_SRVC_OPTION68:
            spc2k.u2RS = C2K_COD_RS_1;
            spc2k.u2Cod = C2K_COD_EVRCB;
        break;
        
        case IPC_SPCH_SRVC_OPTION73:
            spc2k.u2RS = C2K_COD_RS_1;
            spc2k.u2Cod = C2K_COD_EVRCNW_NB;
        break;
        
        case IPC_SPCH_SRVC_OPTION73WB:
            spc2k.u2RS = C2K_COD_RS_1;
            spc2k.u2Cod = C2K_COD_EVRCNW_WB;
        break;
        
        case IPC_SPCH_SRVC_OPTION17:
            spc2k.u2RS = C2K_COD_RS_2;
            spc2k.u2Cod = C2K_COD_QCELP13K;
        break;

        default:
        break;
    }
    //kal_prompt_trace(MOD_L1SP, "[C2K][SPH] RS=%d, Cod=%d", spc2k.u2RS, spc2k.u2Cod);
    kal_trace( TRACE_FUNC, C2K_SPH_RS_COD_PARSE, spc2k.u2RS, spc2k.u2Cod);
    //MonTrace (MON_CP_SPH_LINK_PARSE, 2, spc2k.u2RS, spc2k.u2Cod);
}

static void CodHBLenGet( uint16 u2RS, IpcSpchSrvcOptRateT u2Rate, uint16 *p2HBLen )
{
    if (C2K_COD_RS_1 == u2RS)
    {
        switch (u2Rate)
        {
            case IPC_SPCH_BLANK:
                *p2HBLen = C2K_COD_RS_1_BLANK_LEN_WORD16;
                break;
            case IPC_SPCH_EIGHTH:
                *p2HBLen = C2K_COD_RS_1_EIGHTH_LEN_WORD16;
                break;
            case IPC_SPCH_QUARTER:
                *p2HBLen = C2K_COD_RS_1_QUARTER_LEN_WORD16;
                break;
            case IPC_SPCH_HALF:
                *p2HBLen = C2K_COD_RS_1_HALF_LEN_WORD16;
                break;
            case IPC_SPCH_FULL:
                *p2HBLen = C2K_COD_RS_1_FULL_LEN_WORD16;
                break;
            case IPC_SPCH_ERASURE:
                *p2HBLen = C2K_COD_RS_1_ERASURE_LEN_WORD16;
                break;
            case IPC_SPCH_FULL_LIKELY:
                *p2HBLen = C2K_COD_RS_1_FULL_LIKELY_LEN_WORD16;
                break;
            default:
                break;
        }
    }
    else if(C2K_COD_RS_2 == u2RS)
    {
        switch (u2Rate)
        {
            case IPC_SPCH_BLANK:
                *p2HBLen = C2K_COD_RS_2_BLANK_LEN_WORD16;
                break;
            case IPC_SPCH_EIGHTH:
                *p2HBLen = C2K_COD_RS_2_EIGHTH_LEN_WORD16;
                break;
            case IPC_SPCH_QUARTER:
                *p2HBLen = C2K_COD_RS_2_QUARTER_LEN_WORD16;
                break;
            case IPC_SPCH_HALF:
                *p2HBLen = C2K_COD_RS_2_HALF_LEN_WORD16;
                break;
            case IPC_SPCH_FULL:
                *p2HBLen = C2K_COD_RS_2_FULL_LEN_WORD16;
                break;
            case IPC_SPCH_ERASURE:
                *p2HBLen = C2K_COD_RS_2_ERASURE_LEN_WORD16;
                break;
            default:
                break;
        }
    }	 
}

void SPC2K_init( void )
{
   spc2k.u4HBFrmCountUL1 = 0;
   spc2k.u4HBFrmCountUL2 = 0;
   spc2k.u4HBFrmCountDL1 = 0;
   spc2k.u4HBFrmCountDL2 = 0;
   spc2k.bCodRdy = false;   
   spc2k.bSta     = false;
   spc2k.bFstDLFrm = false;
   spc2k.bAppSta = false;
   spc2k.bLMDLbk = false;
   spc2k.bCAALLbk = false;
   spc2k.u2Cod = C2K_COD_UNDEF;
   spc2k.u2RS = C2K_COD_RS_UNDEF;
#ifdef __FAKE_C2K_LOOPBACK__
   spc2k.u2Dbg = C2K_DBG_BIT_U2D_LOOPBACK | C2K_DBG_BIT_NO_MODEM;
#else   
   spc2k.u2Dbg = C2K_DBG_BIT_INIT;
#endif   
#ifndef C2K_SDRV_DISABLE
   L1Audio_HookHisrHandler(DP_D2C_C2K_DONE_UL,(L1Audio_EventHandler)SPC2K_UL_GetSpeechFrame, 0);
   L1Audio_HookHisrHandler(DP_D2C_C2K_DONE_DL,(L1Audio_EventHandler)SPC2K_DL_PutSpeechFrame, 0);
#endif
}

void SPC2K_ConSSO_Req( uint16 u2SO, uint16 u2MaxEncRate)
{
    //MonTrace (MON_CP_SPH_LINK_CON_SSO_REQ, 2, u2SO, u2MaxEncRate); 
    //kal_prompt_trace(MOD_L1SP, "[C2K][SPH] Link connect SSO req, SO=%d, MaxRate=%d", u2SO, u2MaxEncRate);
    kal_trace( TRACE_FUNC, C2K_SPH_LINK_CON_SSO_REQ, u2SO, u2MaxEncRate);
    if(true == spc2k.bSta)
    {
        //MonTrace (MON_CP_SPH_LINK_WARN_SSO_REQ_REPEAT, 0);
        //kal_prompt_trace(MOD_L1SP, "[C2K][SPH] Link SSO req repeat");
        kal_trace( TRACE_FUNC, C2K_SPH_LINK_CON_SSO_REQ_REPEAT);
        return;
    }
    spc2k.bSta = true;
    CodParse( u2SO );
    
#ifndef C2K_SDRV_DISABLE
    L1SP_C2K_Est(spc2k.u2Cod);
#else
    SPC2K_ConSSO_Done();
#endif
}

void SPC2K_ConSSO_Done( void )
{
    //MonTrace (MON_CP_SPH_LINK_CON_SSO_DONE, 0);
    //kal_prompt_trace(MOD_L1SP, "[C2K][SPH] Link connect SSO done");
    kal_trace( TRACE_FUNC, C2K_SPH_LINK_CON_SSO_DONE);
    if(!(spc2k.u2Dbg & C2K_DBG_BIT_NO_MODEM))
    {
        msg_send5(MOD_L1SP ,MOD_SPCH ,0x0 ,MSG_ID_SDRV_SSO_CONN_DONE_MSG, NULL);
        //ExeMsgSend (EXE_IPC_ID, IPC_MAILBOX_DSPV_ASYN, SDRV_SSO_CONN_DONE, NULL, 0);    
    }
    else
    {
        SPC2K_ConSSO_Done_Rsp();
    }
}

void SPC2K_ConSSO_Done_Rsp( void )
{
    #ifndef CAAL_DISABLE 
    //enum CAALMsgId MsgId;
    #endif
    
    CodReady();
    spc2k.bFstDLFrm = true;
    spc2k.u4HBFrmCountUL1 = 0;
    spc2k.u4HBFrmCountUL2 = 0;
    spc2k.u4HBFrmCountDL1 = 0;
    spc2k.u4HBFrmCountDL2 = 0;
   #ifndef CAAL_DISABLE
   if(false == spc2k.bCAALLbk)
   {    
       //MsgId = MSG_ID_CAAL_SSO_CONN_RSP_MSG;
       if(!(spc2k.u2Dbg & C2K_DBG_BIT_NO_MODEM))
       {
           msg_send5(MOD_L1SP ,MOD_SPCH ,0x0 ,MSG_ID_CAAL_SSO_CONN_RSP_MSG, NULL);
           //CAAL_ReadMsgsFromDsp(MsgId, NULL);
       }
   }
   #endif
}

void SPC2K_DisconSSO_Req( void )
{
    //MonTrace (MON_CP_SPH_LINK_DISCON_SSO_REQ, 0);
    //kal_prompt_trace(MOD_L1SP, "[C2K][SPH] Link disconnect SSO req");
    kal_trace( TRACE_FUNC, C2K_SPH_LINK_DISCON_SSO_REQ);
    if(false == spc2k.bSta)
    {
        //MonTrace (MON_CP_SPH_LINK_WARN_DISCON_SSO_REQ_REPEAT, 0);
        //kal_prompt_trace(MOD_L1SP, "[C2K][SPH] Link disconnect SSO req repeat");
        kal_trace( TRACE_FUNC, C2K_SPH_LINK_DISCON_SSO_REQ_REPEAT);
        return;
    } 
#ifndef C2K_SDRV_DISABLE
    L1SP_C2K_DeEst();
#else
    SPC2K_DisconSSO_Done();
#endif
}

void SPC2K_DisconSSO_Done( void )
{
    //MonTrace (MON_CP_SPH_LINK_DISCON_SSO_DONE, 0);
    //kal_prompt_trace(MOD_L1SP, "[C2K][SPH] Link disconnect SSO done");
    kal_trace( TRACE_FUNC, C2K_SPH_LINK_DISCON_SSO_DONE);
    if(!(spc2k.u2Dbg & C2K_DBG_BIT_NO_MODEM))
    {
        msg_send5(MOD_L1SP ,MOD_SPCH ,0x0 ,MSG_ID_SDRV_SSO_DISCONN_DONE_MSG, NULL);
        //ExeMsgSend (EXE_IPC_ID, IPC_MAILBOX_DSPV_ASYN, SDRV_SSO_DISCONN_DONE, NULL, 0);
    }
    else
    {
        SPC2K_DisconSSO_Done_Rsp();
    }
}

void SPC2K_DisconSSO_Done_Rsp( void )
{
    #ifndef CAAL_DISABLE
    //enum CAALMsgId MsgId;
    #endif
    
    spc2k.bSta = false;
    CodClose();
    #ifndef CAAL_DISABLE
    if(false == spc2k.bCAALLbk)
    {
        if(!(spc2k.u2Dbg & C2K_DBG_BIT_NO_MODEM))
        {
            //MsgId = MSG_ID_CAAL_SSO_DISCONN_RSP_MSG;
            msg_send5(MOD_L1SP ,MOD_SPCH ,0x0 ,MSG_ID_CAAL_SSO_DISCONN_RSP_MSG, NULL);
            //CAAL_ReadMsgsFromDsp(MsgId, NULL);
        }
    }
    #endif
}


bool SPC2K_State( void )
{
   return spc2k.bSta;
}

static void CodReady( void )
{
    //MonTrace (MON_CP_SPH_LINK_COD_RDY, 1, spc2k.bCodRdy);
    //kal_prompt_trace(MOD_L1SP, "[C2K][SPH] Link cod ready, CodRdy=%d", spc2k.bCodRdy);
    kal_trace( TRACE_FUNC, C2K_SPH_LINK_COD_RDY, spc2k.bCodRdy); 
    if(!spc2k.bCodRdy)
   	{
        spc2k.bCodRdy = true;
    }
}

static void CodClose( void )
{
    //MonTrace (MON_CP_SPH_LINK_COD_CLOSE, 1, spc2k.bCodRdy);
    //kal_prompt_trace(MOD_L1SP, "[C2K][SPH] Link cod close, CodRdy=%d", spc2k.bCodRdy);
    kal_trace( TRACE_FUNC, C2K_SPH_LINK_COD_CLOSE, spc2k.bCodRdy); 
    if(spc2k.bCodRdy)
   	{ 
        spc2k.bCodRdy = false;      
    }
}

static void DLFrameProc(IpcDsvSendSpkrVoiceFwdChPcktDataMsgT *MsgFLDataP)
{
#ifndef C2K_SAL_DISABLE 
    volatile uint16 *pu2Addr;
#endif
    uint16 u2HBLen;
    uint16 i;
    
    //check rate
    if((MsgFLDataP->SpkrVoiceFwdChPcktRate != IPC_SPCH_BLANK) && (MsgFLDataP->SpkrVoiceFwdChPcktRate != IPC_SPCH_EIGHTH) && 
    	 (MsgFLDataP->SpkrVoiceFwdChPcktRate != IPC_SPCH_QUARTER) && (MsgFLDataP->SpkrVoiceFwdChPcktRate != IPC_SPCH_HALF) && 
    	 (MsgFLDataP->SpkrVoiceFwdChPcktRate != IPC_SPCH_FULL) && (MsgFLDataP->SpkrVoiceFwdChPcktRate != IPC_SPCH_ERASURE) && 
    	 (MsgFLDataP->SpkrVoiceFwdChPcktRate != IPC_SPCH_FULL_LIKELY))
    {
       // MonFault (MON_IPC_FAULT_UNIT, C2K_LINK_DL_RATE_ERR, MsgFLDataP->SpkrVoiceFwdChPcktRate, MON_HALT);
    }       
    CodHBLenGet(spc2k.u2RS, MsgFLDataP->SpkrVoiceFwdChPcktRate, &u2HBLen);
    //check size
    if(MsgFLDataP->SpkrVoiceFwdChPcktSize != u2HBLen)
    {
        //MonFault (MON_IPC_FAULT_UNIT, C2K_LINK_DL_HB_SIZE_ERR, MsgFLDataP->SpkrVoiceFwdChPcktSize, MON_HALT);
    }
    //LBK
    //MsgLbk.MppSpchRate = MsgFLDataP->SpkrVoiceFwdChPcktRate;
    //MsgLbk.NumMppSpchData = u2HBLen;
    //for(i = 0; i < u2HBLen; i++)
    //{
    //    MsgLbk.MppSpchData[i] = MsgFLDataP->SpkrVoiceFwdChPcktData[i];
    //}
    //kal_prompt_trace(MOD_L1SP, "[C2K][SPH] Link lbk DL, Rate=%d, len=%d", MsgLbk.MppSpchRate, MsgLbk.NumMppSpchData);
    //kal_trace( TRACE_FUNC, C2K_SPH_LINK_LBK_DL, MsgLbk.MppSpchRate, MsgLbk.NumMppSpchData);
    //
    //SPC2K_UL_GetSpeechFrame();

#ifndef C2K_SAL_DISABLE 
    SAL_C2K_SetValue(SAL_C2K_DL_RATE, MsgFLDataP->SpkrVoiceFwdChPcktRate);
    pu2Addr = SAL_C2K_GetAddr(SAL_C2K_ADDR_RXHB);
    for(i = 0; i < u2HBLen; i++)
    {
        *pu2Addr = MsgFLDataP->SpkrVoiceFwdChPcktData[i];
        pu2Addr++;
    }       
    SAL_C2K_SetDLReady();
#endif
}


void SPC2K_DL_PutSpeechFrame_Do(IpcDsvSendSpkrVoiceFwdChPcktDataMsgT *MsgFLDataP)
{
    spc2k.u4HBFrmCountDL1++;
    spc2k.u4HBFrmCountDL2++;
    if(!spc2k.bCodRdy)
    {
        //MonTrace (MON_CP_SPH_LINK_WARN_COD_DL_UNRDY, 0);
        //kal_prompt_trace(MOD_L1SP, "[C2K][SPH] Link cod DL unready");
        kal_trace( TRACE_FUNC, C2K_SPH_LINK_COD_DL_UNRDY ); 
        
        return;
    }

#ifdef C2K_DTS_DISABLE
    if(!(spc2k.u2Dbg & C2K_DBG_BIT_U2D_LOOPBACK))
    {
        if(spc2k.bFstDLFrm)
        {
            //MonTrace (MON_CP_SPH_LINK_COD_1ST_FRAME, 0);
            spc2k.bFstDLFrm = false;
        #ifndef C2K_SDRV_DISABLE 
            L1SP_C2K_IntraRAT(spc2k.u2Cod);
        #endif
        }
        else
        {
            DLFrameProc(MsgFLDataP);
        }
    }
    else
    {
    	DLFrameProc(MsgFLDataP);
    }
#else
    DLFrameProc(MsgFLDataP);
#endif //C2K_DTS_DISABLE

    kal_trace( TRACE_FUNC, C2K_SPH_LINK_RATE_DL, MsgFLDataP->SpkrVoiceFwdChPcktRate);
    kal_trace( TRACE_FUNC, C2K_SPH_LINK_COD_DL, spc2k.u2Cod);
    kal_trace( TRACE_FUNC, C2K_SPH_LINK_HB_DL, MsgFLDataP->SpkrVoiceFwdChPcktData[0], MsgFLDataP->SpkrVoiceFwdChPcktData[1], MsgFLDataP->SpkrVoiceFwdChPcktData[2], MsgFLDataP->SpkrVoiceFwdChPcktData[3],
               MsgFLDataP->SpkrVoiceFwdChPcktData[4], MsgFLDataP->SpkrVoiceFwdChPcktData[5], MsgFLDataP->SpkrVoiceFwdChPcktData[6], MsgFLDataP->SpkrVoiceFwdChPcktData[7], MsgFLDataP->SpkrVoiceFwdChPcktData[8],
               MsgFLDataP->SpkrVoiceFwdChPcktData[9], MsgFLDataP->SpkrVoiceFwdChPcktData[10]);
               
    //MonTrace (MON_CP_SPH_LINK_HB_DL1, 10, MsgFLDataP->SpkrVoiceFwdChPcktRate, spc2k.u2RS, spc2k.u4HBFrmCountDL1, MsgFLDataP->SpkrVoiceFwdChPcktData[0], MsgFLDataP->SpkrVoiceFwdChPcktData[1], 
    //          MsgFLDataP->SpkrVoiceFwdChPcktData[2], MsgFLDataP->SpkrVoiceFwdChPcktData[3], MsgFLDataP->SpkrVoiceFwdChPcktData[4], MsgFLDataP->SpkrVoiceFwdChPcktData[5], 
    //          MsgFLDataP->SpkrVoiceFwdChPcktData[6]);
    //MonTrace (MON_CP_SPH_LINK_HB_DL2, 5, spc2k.u4HBFrmCountDL2, MsgFLDataP->SpkrVoiceFwdChPcktData[7], MsgFLDataP->SpkrVoiceFwdChPcktData[8], MsgFLDataP->SpkrVoiceFwdChPcktData[9], MsgFLDataP->SpkrVoiceFwdChPcktData[10]);    
}

void SPC2K_SOCM_Set(IpcDsvSendSsoCtrlParamsMsgT *pMsg)
{
#ifndef C2K_SAL_DISABLE
    uint16 u2SOCM;
    uint16 u2ValId;
//    uint16 *pu2RateReduc;
    
    //MonTrace (MON_CP_SPH_LINK_SOCM, 3, pMsg->AudioSsoCtrlRrmLevel, pMsg->AudioSsoCtrlM2mMode, pMsg->AudioSsoCtrlInitCodecMode); 
    u2SOCM = (pMsg->AudioSsoCtrlRrmLevel << C2K_SOCM_RATE_REDUC_SHIFT) || (pMsg->AudioSsoCtrlM2mMode << C2K_SOCM_MOBILE_TO_MOBILE_SHIFT) || pMsg->AudioSsoCtrlInitCodecMode;

    switch(spc2k.u2Cod)
    {
        case SAL_C2K_COD_QCELP13K:
            u2ValId = SAL_C2K_SOCM_QCELP13K;
            SAL_C2K_SetValue(u2ValId, u2SOCM);
        break;
        
        case SAL_C2K_COD_EVRCA:
            u2ValId = SAL_C2K_SOCM_EVRCA;
            SAL_C2K_SetValue(u2ValId, u2SOCM);
        break;
        
        case SAL_C2K_COD_EVRCB:
            u2ValId = SAL_C2K_SOCM_EVRCB;
            SAL_C2K_SetValue(u2ValId, u2SOCM);
        break;
        
        case SAL_C2K_COD_EVRCNW_NB:
            u2ValId = SAL_C2K_SOCM_EVRCNW_NB;
            SAL_C2K_SetValue(u2ValId, u2SOCM);
        break;
        
        case SAL_C2K_COD_EVRCNW_WB:
            u2ValId = SAL_C2K_SOCM_EVRCNW_WB;
            SAL_C2K_SetValue(u2ValId, u2SOCM);
        break;
        
        default:
            
        break;
    }
    
    //Ask Sheila to check
    //pu2RateReduc = (uint16 *)ExeMsgBufferGet(sizeof(uint16));
    //*pu2RateReduc = pMsg->AudioSsoCtrlRrmLevel;
    
    //ExeMsgSend (EXE_VAL_ID, VAL_MAILBOX , VAL_SPH_RATE_REDUCE_NOTIFY_MSG, (void *)pu2RateReduc, sizeof(uint16));
    
#endif
}

void SPC2K_EncMaxRate_Set(IpcDsvSetMicVoiceEncMaxRateMsgT *pMsg)
{
    //MonTrace (MON_CP_SPH_LINK_ENC_MAX_RATE, 1, pMsg->MicVoiceEncMaxRate); 
    //Check ENC_MAX_RATE val
    if((pMsg->MicVoiceEncMaxRate != IPC_SPCH_BLANK) && (pMsg->MicVoiceEncMaxRate != IPC_SPCH_EIGHTH) && (pMsg->MicVoiceEncMaxRate != IPC_SPCH_QUARTER) && (pMsg->MicVoiceEncMaxRate != IPC_SPCH_HALF) && (pMsg->MicVoiceEncMaxRate != IPC_SPCH_FULL))
    {
        //MonFault (MON_IPC_FAULT_UNIT, C2K_LINK_ENC_MAX_RATE_VAL_ERR, pMsg->MicVoiceEncMaxRate, MON_HALT);
    }
#ifndef C2K_SAL_DISABLE
    SAL_C2K_SetValue(SAL_C2K_ENC_MAX_RATE, pMsg->MicVoiceEncMaxRate);
#endif
}

void SPC2K_UL_GetSpeechFrame( void )
{   
    uint16 u2SO;
    uint16 u2HBLen;
    uint16 i;
#ifndef C2K_SAL_DISABLE
    volatile uint16 *pu2Addr;
    //volatile uint16 *pu2LbkDLAddr;  
#endif
    
    lmd_tx_spch_msg_struct* MsgRevPktP;
    //IpcCpSpchDataRevChPacketMsgT MsgRevPkt;
    spc2k.u4HBFrmCountUL1++;
    spc2k.u4HBFrmCountUL2++;
    if(!spc2k.bCodRdy)
    {
        //MonTrace (MON_CP_SPH_LINK_WARN_COD_UL_UNRDY, 0);
        //kal_prompt_trace(MOD_L1SP, "[C2K][SPH] Link cod UL unready");
        kal_trace( TRACE_FUNC, C2K_SPH_LINK_COD_UL_UNRDY ); 
        return;
    }

#ifndef C2K_SAL_DISABLE 
    if (false == SAL_C2K_IsULReady())
    {
        //MonTrace (MON_CP_SPH_LINK_WARN_UL_UNSYNC, 0);
        //kal_prompt_trace(MOD_L1SP, "[C2K][SPH] Link UL unsync");
        kal_trace( TRACE_FUNC, C2K_SPH_LINK_UL_UNSYNC );
        SAL_C2K_SetULUnsync();
        return;
    }
#endif

#ifndef C2K_SAL_DISABLE     
    u2SO = SAL_C2K_GetValue(SAL_C2K_VALUE_SO);
    //check SO
    if((u2SO != SAL_C2K_COD_QCELP8K) && (u2SO != SAL_C2K_COD_QCELP13K) && (u2SO != SAL_C2K_COD_EVRCA) && (u2SO != SAL_C2K_COD_EVRCB) && (u2SO != SAL_C2K_COD_EVRCNW_NB) && (u2SO != SAL_C2K_COD_EVRCNW_WB))
    {
        //MonFault (MON_IPC_FAULT_UNIT, C2K_LINK_SO_ERR, u2SO, MON_HALT);
    }
    //check DSP & CAAL SO conflict
    if(u2SO != spc2k.u2Cod)
    {
        //MonTrace (MON_CP_SPH_LINK_WARN_SO_CONFLICT, 0);
        return;
    }
#endif

if(!(spc2k.u2Dbg & C2K_DBG_BIT_NO_MODEM))
{
    MsgRevPktP = (lmd_tx_spch_msg_struct *)construct_local_para(sizeof(lmd_tx_spch_msg_struct),TD_RESET);
    #ifndef C2K_SAL_DISABLE 
    MsgRevPktP->msg.MppSpchRate = SAL_C2K_GetValue(SAL_C2K_VALUE_UL_RATE);
    #endif

    //check rate
    if((MsgRevPktP->msg.MppSpchRate != IPC_SPCH_BLANK) && (MsgRevPktP->msg.MppSpchRate != IPC_SPCH_EIGHTH) && 
    	 (MsgRevPktP->msg.MppSpchRate != IPC_SPCH_QUARTER) && (MsgRevPktP->msg.MppSpchRate != IPC_SPCH_HALF) && 
    	 (MsgRevPktP->msg.MppSpchRate != IPC_SPCH_FULL) && (MsgRevPktP->msg.MppSpchRate != IPC_SPCH_ERASURE) && 
    	 (MsgRevPktP->msg.MppSpchRate != IPC_SPCH_FULL_LIKELY))
    {
        //MonFault (MON_IPC_FAULT_UNIT, C2K_LINK_UL_RATE_ERR, MsgRevPktP->MppSpchRate, MON_HALT);
    }
    CodHBLenGet(spc2k.u2RS, MsgRevPktP->msg.MppSpchRate, &u2HBLen);
    MsgRevPktP->msg.NumMppSpchData = u2HBLen; 
    #ifndef C2K_SAL_DISABLE 
    pu2Addr = SAL_C2K_GetAddr(SAL_C2K_ADDR_TXHB);
    for(i = 0; i < u2HBLen; i++)
    {
        MsgRevPktP->msg.MppSpchData[i] = *pu2Addr;
        pu2Addr++;
    }     
    #endif
    msg_send5(MOD_L1SP ,MOD_SPCH ,0x0 ,MSG_ID_CAAL_SPH_DATA_UL_MSG, (local_para_struct *) MsgRevPktP);
    kal_trace( TRACE_FUNC, C2K_SPH_LINK_HB_UL, MsgRevPktP->msg.MppSpchData[0], MsgRevPktP->msg.MppSpchData[1], MsgRevPktP->msg.MppSpchData[2], MsgRevPktP->msg.MppSpchData[3],
               MsgRevPktP->msg.MppSpchData[4], MsgRevPktP->msg.MppSpchData[5], MsgRevPktP->msg.MppSpchData[6], MsgRevPktP->msg.MppSpchData[7], MsgRevPktP->msg.MppSpchData[8],
               MsgRevPktP->msg.MppSpchData[9], MsgRevPktP->msg.MppSpchData[10]);
    kal_trace( TRACE_FUNC, C2K_SPH_LINK_RATE_UL, MsgRevPktP->msg.MppSpchRate);
}

if(spc2k.u2Dbg & C2K_DBG_BIT_U2D_LOOPBACK)
{
    MsgLbkDL.SpkrVoiceFwdChPcktRate = SAL_C2K_GetValue(SAL_C2K_VALUE_UL_RATE);
    //check rate
    if((MsgLbkDL.SpkrVoiceFwdChPcktRate != IPC_SPCH_BLANK) && (MsgLbkDL.SpkrVoiceFwdChPcktRate != IPC_SPCH_EIGHTH) && 
    	 (MsgLbkDL.SpkrVoiceFwdChPcktRate != IPC_SPCH_QUARTER) && (MsgLbkDL.SpkrVoiceFwdChPcktRate != IPC_SPCH_HALF) && 
    	 (MsgLbkDL.SpkrVoiceFwdChPcktRate != IPC_SPCH_FULL) && (MsgLbkDL.SpkrVoiceFwdChPcktRate != IPC_SPCH_ERASURE) && 
    	 (MsgLbkDL.SpkrVoiceFwdChPcktRate != IPC_SPCH_FULL_LIKELY))
    {
        //MonFault (MON_IPC_FAULT_UNIT, C2K_LINK_UL_RATE_ERR, MsgRevPktP->MppSpchRate, MON_HALT);
    }
    CodHBLenGet(spc2k.u2RS, MsgLbkDL.SpkrVoiceFwdChPcktRate, &u2HBLen);
    MsgLbkDL.SpkrVoiceFwdChPcktSize = u2HBLen; 
    #ifndef C2K_SAL_DISABLE 
    pu2Addr = SAL_C2K_GetAddr(SAL_C2K_ADDR_TXHB);
    for(i = 0; i < u2HBLen; i++)
    {
        MsgLbkDL.SpkrVoiceFwdChPcktData[i] = *pu2Addr;
        pu2Addr++;
    }     
    #endif
    kal_trace( TRACE_FUNC, C2K_SPH_LINK_LBK_UL, MsgLbkDL.SpkrVoiceFwdChPcktRate, MsgLbkDL.SpkrVoiceFwdChPcktSize);
    SPC2K_DL_PutSpeechFrame_Do(&MsgLbkDL);
}
    SAL_C2K_SetULEmpty();
    
    kal_trace( TRACE_FUNC, C2K_SPH_LINK_COD_UL, spc2k.u2Cod);
    
//    MonTrace (MON_CP_SPH_LINK_HB_UL1, 10, MsgRevPktP->MppSpchRate, spc2k.u2RS, spc2k.u4HBFrmCountUL1, MsgRevPktP->MppSpchData[0], MsgRevPktP->MppSpchData[1], 
//              MsgRevPktP->MppSpchData[2], MsgRevPktP->MppSpchData[3], MsgRevPktP->MppSpchData[4], MsgRevPktP->MppSpchData[5], 
//              MsgRevPktP->MppSpchData[6]);
//    MonTrace (MON_CP_SPH_LINK_HB_UL2, 5, spc2k.u4HBFrmCountUL2, MsgRevPktP->MppSpchData[7], MsgRevPktP->MppSpchData[8], MsgRevPktP->MppSpchData[9], MsgRevPktP->MppSpchData[10]);

#ifndef CAAL_DISABLE
    //if(true == spc2k.bCAALLbk)
    //{
    //    SAL_C2K_SetValue(SAL_C2K_DL_RATE, MsgRevPktP->msg.MppSpchRate);
    //    pu2LbkDLAddr = SAL_C2K_GetAddr(SAL_C2K_ADDR_RXHB);        
    //    for(i = 0; i < u2HBLen; i++)
    //    {
    //        *pu2LbkDLAddr = MsgRevPktP->msg.MppSpchData[i];
    //        pu2LbkDLAddr++;
    //    }
    //    //ExeMsgBufferFree(MsgRevPktP);
    //    //MsgRevPktP = NULL;
    //}
    //else
    //{
    //    MsgId = MSG_ID_CAAL_SPH_DATA_UL_MSG;        
    //    msg_send5(MOD_L1SP ,MOD_SPCH ,0x0 ,MSG_ID_CAAL_SPH_DATA_UL_MSG, (local_para_struct *) MsgRevPktP);  
    //    //CAAL_ReadMsgsFromDsp(MsgId, (void *)MsgRevPktP);
    //}
#endif
}

void SPC2K_DL_PutSpeechFrame(IpcDsvSendSpkrVoiceFwdChPcktDataMsgT *MsgFLDataP)
{
    if(true == spc2k.bCAALLbk)
    {
        SPC2K_DL_PutSpeechFrame_Do(MsgFLDataP);
    }
}

void SPC2K_GetSyncDelayRW( uint16 *u2DelR, uint16 *u2DelW, uint16 *u2DelM)
{
    *u2DelR = C2K_DELR * 8;
    *u2DelW = C2K_DELW * 8;
    *u2DelM = C2K_DELM * 8;
    //MonTrace (MON_CP_SPH_LINK_DELRWM, 3, *u2DelR, *u2DelW, *u2DelM);
}

void SPC2K_Link_Lbk(HwdSphLbkMsgT *pMsg)
{   	  
    //MonTrace (MON_CP_SPH_LINK_LBK, 3, pMsg->u2Mode, pMsg->u2SO, pMsg->bStart);
    //#ifndef CAAL_DISABLE
    //if(C2K_LMD_LBK == pMsg->u2Mode)
    //{
    //    CAAL_Loopback_LMD(pMsg->u2SO, pMsg->bStart);
    //}
    //else if(C2K_CAAL_LBK == pMsg->u2Mode)
    //{
    //    CAAL_Loopback_CAAL(pMsg->u2SO, pMsg->bStart);
    //}
    //#endif
}

void SPC2K_Debug_Info(IpcDsvSendAudioChanQltyMsgT * pMsg)
{
#ifndef C2K_SAL_DISABLE 
    SAL_C2K_SetValue(SAL_C2K_EBNT, pMsg->EbNt);
#endif
}
