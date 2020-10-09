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
 * sp_drv.h
 *
 * Project:
 * --------
 * MAUI
 *
 * Description:
 * ------------
 * MD speech control interfaces 
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
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *==============================================================================
 *******************************************************************************/
 
#ifndef _SP_DRV_H
#define _SP_DRV_H

#include "l1aud_common_def.h"
#include "l1audio.h"
#include "l1sp_el2_struct.h"

// ----------------------------------------------------------------------------
// defines
// ----------------------------------------------------------------------------

// #if defined(MT6575) || defined(MT6577) || defined(MT6589) || defined(MT6572) || defined(MT6582) || defined(MT6290) || defined(MT6592) || defined(MT6571) || defined(MT6595) || defined(TK6291) || defined(MT6755) || defined(ELBRUS) || defined(MT6763) || defined(MT6739) || defined(MT6771)
#define DEFAULT_SPEECH_COMMON_PARA \
{ \
     0, 55997, 31000, 10752,     32769,     0,     0,     0,     0,     0, \
     0,     0 \
}
// #else
// #error The new chip should define common parameter
// #endif

// ----------------------------------------------------------------------------
// mute related
// ----------------------------------------------------------------------------

kal_bool SP_IsSpeakerMute(void);

void SP_MuteUlEnhResult(kal_bool mute);
void SP_MuteUlSource(kal_bool mute);

typedef enum { // saving inside l1sp.isUlMute, bit wise record
	SP_MIC_MUTE_POS_FROM_SPC = 0x1,	
	SP_MIC_MUTE_POS_FROM_MED = 0x2,

	SP_MIC_MUTE_POS_FROM_ALL = 0xFFFF,
	
}SP_MIC_MUTE_POS;
void SP_MuteUlFromDiffPos(bool mute, SP_MIC_MUTE_POS pos);
bool SP_IsMicMute(void);
void L1SP_SetCodecMuteByAp( bool mute );

// ----------------------------------------------------------------------------
// codec/network information related
// ----------------------------------------------------------------------------
#include "em_audio_public_struct.h"
void SP_updateEmCodecEvent(void);
void emCodecTimerOn(void);
void emCodecTimerOff(void);


void l1sp_NetworkStatusNotification(void);
void l1sp_send_codec_status_notify(uint32 codec); //to L4C
// ----------------------------------------------------------------------------

void L1SP_SpeechLoopBackEnable(kal_bool fgEnable);

// void sp_setBtOn(bool on);
// bool sp_getIsBtOn(void);

typedef enum {
    SPH_DEVINFO_NORMAL,
    SPH_DEVINFO_BT_PCM,         /* via Modem PCM hardware */
    SPH_DEVINFO_BT_CVSD_MSBC,    /* via software BT codec */
    SPH_DEVINFO_BT_CVSD,
    SPH_DEVINFO_BT_MSBC
}sp_device_info_t; // same as spc_sph_on_bt_info_t 

uint8 SP_GetDevSamplingRate(void);
sp_device_info_t SP_GetDevInfo(void);
void SP_SetDevicePath(sp_device_info_t newDev, kal_uint8 voice8kMode);

typedef enum {
    SPH_EXTDEVINFO_DEFULAT = 0,  
    SPH_EXTDEVINFO_VIBRATION_RECEIVER, // vibration receiver (3-in-1)
    SPH_EXTDEVINFO_VIBRATION_SPEAKER, // speaker (2-in-1 or 3-in-1)
    SPH_EXTDEVINFO_SMARTPA_SPEAKER, // speaker with smart-PA which need echo reference path
    SPH_EXTDEVINFO_SMARTPA_VIBRATION_SPEAKER, // vibration speaker with smart-PA which need echo reference path
    SPH_EXTDEVINFO_USB_AUDIO, // usb audio device, which needs echo reference path
    SPH_EXTDEVINFO_EARPHONE, // earphone audio device
}sp_ext_dev_info_t;

void SP_SetExtraDevInfo(sp_device_info_t dev, sp_ext_dev_info_t extDevInfo, uint16 echoRefDelay, uint8 micDelay);
sp_ext_dev_info_t SP_GetExtDevInfo(void);

// ----------------------------------------------------------------------------
// ENHANCEMENT MODE PARAMETERS
// ----------------------------------------------------------------------------
void l1sp_SetWbSpeechPara( kal_uint16 m_para[NUM_MODE_PARAS] );
// void l1sp_SetSpeechMode( uint8 devMode, uint8 mode, uint16 m_para[NUM_MODE_PARAS] );
// void l1sp_SetSpeechMode( uint8 devMode, uint8 mode);


void l1sp_setAllSpeechModePara(kal_uint16 * speech_mode_para, kal_int16 length);
void l1sp_setAllSpeechFirCoeff_InputOnly(kal_int16 *speech_input_FIR_coeffs, kal_int16 length);
void l1sp_setAllSpeechFirCoeff_OutputOnly(kal_int16 *speech_output_FIR_coeffs, kal_int16 length);
void l1sp_setAllSpeechIirCoeff_InputOnly(kal_int16 *speech_input_IIR_coeffs, kal_int16 length);
void l1sp_setAllSpeechIirCoeff_OutputOnly(kal_int16 *speech_output_IIR_coeffs, kal_int16 length);
void l1sp_setAllSpeechMic1IirCoeff(kal_int16 *speech_output_Mic1_IIR_coeffs, kal_int16 length);
void l1sp_setAllSpeechMic2IirCoeff(kal_int16 *speech_output_Mic2_IIR_coeffs, kal_int16 length);
void l1sp_setAllWBSpeechIirCoeff_InputOnly(kal_int16 *speech_input_IIR_coeffs, kal_int16 length);
void l1sp_setAllWBSpeechIirCoeff_OutputOnly(kal_int16 *speech_output_IIR_coeffs, kal_int16 length);
void l1sp_setAllWBSpeechMic1IirCoeff(kal_int16 *speech_output_Mic1_IIR_coeffs, kal_int16 length);
void l1sp_setAllWBSpeechMic2IirCoeff(kal_int16 *speech_output_Mic2_IIR_coeffs, kal_int16 length);
void l1sp_setAllSWBSpeechIirCoeff_InputOnly(kal_int16 *speech_input_IIR_coeffs, kal_int16 length);
void l1sp_setAllSWBSpeechIirCoeff_OutputOnly(kal_int16 *speech_output_IIR_coeffs, kal_int16 length);
void l1sp_setAllSWBSpeechMic1IirCoeff(kal_int16 *speech_output_Mic1_IIR_coeffs, kal_int16 length);
void l1sp_setAllSWBSpeechMic2IirCoeff(kal_int16 *speech_output_Mic2_IIR_coeffs, kal_int16 length);

void l1sp_setAllWbSpeechModePara(kal_uint16 * speech_mode_para, kal_int16 length);
void l1sp_setAllWbSpeechFirCoeff_InputOnly(kal_int16 *speech_input_FIR_coeffs, kal_int16 length);
void l1sp_setAllSWbSpeechFirCoeff_InputOnly(kal_int16 *speech_input_FIR_coeffs, kal_int16 length);
void l1sp_setAllWbSpeechFirCoeff_OutputOnly(kal_int16 *speech_output_FIR_coeffs, kal_int16 length);
void l1sp_setAllSWbSpeechFirCoeff_OutputOnly(kal_int16 *speech_output_FIR_coeffs, kal_int16 length);

void l1sp_setAllSWbSpeechModePara(kal_uint16 * speech_mode_para, kal_int16 length);
void SP_SetSpeechPara( uint16 sph_m_para[NUM_MODE_PARAS] );
void SP_SetWbSpeechPara( kal_uint16 m_para[NUM_MODE_PARAS] );
void SP_SetSWbSpeechPara( kal_uint16 m_para[NUM_MODE_PARAS] );

kal_uint16 *Sp_GetCommonSpeechPara(void);
kal_uint16 *Sp_GetSpeechPara(void);
kal_uint16 *Sp_GetWbSpeechPara(void);


// ----------------------------------------------------------------------------
// DSP volume related
// ----------------------------------------------------------------------------
void spGain_SetDigitalGain(kal_int16 digitalGainQdB, kal_bool isForceSet);
void spGain_SetEnhRefDigitalGain(kal_int16 refDigitalGainQdB, kal_bool isForceSet);
void spGain_SetMicrophoneVolume( kal_int16 mic_volume, kal_bool isForceSet );
void spGain_Refresh2DSP(void);
void spGain_Init(void);


// ----------------------------------------------------------------------------
kal_uint16 L1SP_GetAudID(void);
void L1SP_FreeAudID(kal_uint16 aud_id);
// ----------------------------------------------------------------------------

int L1SP_GetC2KSO_Codec( void );
// ----------------------------------------------------------------------------
// Mute Control
// ----------------------------------------------------------------------------
typedef enum{ //bit mask   
   L1SP_FORCEDUNMUTE_ALL = 0xFFFF,
   L1SP_FORCEDUNMUTE_PCMROUTER = 0x01,
   L1SP_FORCEDUNMUTE_PCMRECORD = 0x02,
   L1SP_FORCEDUNMUTE_ACOUSTICLOOPBACK = 0x04,
   L1SP_FORCEDUNMUTE_RAWPCMRECORD = 0x08,
}L1SP_FORCEDUNMUTE_BITMASK; 

kal_bool SP_is_codec_mute(void);
void SP_SetForcedUnMuteController(L1SP_FORCEDUNMUTE_BITMASK mask, bool b);
void sp4g_hisr_ul_g(void *data);



// ----------------------------------------------------------------------------
// Else
// ----------------------------------------------------------------------------

#if defined(MT6295M) || defined(__MD95__) ||  defined(__MODEM_ONLY__)
#define SPH_CHIP_BACK_PHONECALL_USE
#endif

#if defined(MT6295M) || defined(__MD95__) || defined(__MODEM_ONLY__)
#define SPH_CHIP_BACK_MODE_FIX_TO_NORMAL
#endif

#if defined(__VOLTE_SUPPORT__)  
typedef struct{
   //raw information from eMAC
   uint32 RX_period;   //ms
   uint32 TX_period;   //ms
   uint32 time2nextRX; //ms
   uint32 time2nextTX; //ms
   uint32 issueTime;   //ms
}resync_info_t;

typedef struct{
   LOCAL_PARA_HDR
   //raw information from eMAC
   uint32 RX_period;   //ms
   uint32 TX_period;   //ms
   uint32 time2nextRX; //ms
   uint32 time2nextTX; //ms
   uint32 issueTime;   //ms
}ilm_resync_info_t;

void       sub_SP4G_emac_timing_update(l1sp_emac_resync_info_struct* p_timing_info);
kal_bool   SP4G_IsGCodecMode(void);

#endif //#if defined(__VOLTE_SUPPORT__)

typedef struct{
   LOCAL_PARA_HDR
   kal_int16 freq1;
   kal_int16 freq2;
   kal_int16 duration;
}ilm_PSR_DL_KT_t;

typedef struct {
   LOCAL_PARA_HDR
   L1SP_Tones *pToneList;
}ilm_PSR_DL_TONE_t;

#if defined(__EVS_CODEC_SUPPORT__) && defined(__VOLTE_SUPPORT__)
kal_bool SP4G_IsEVSCodecMode();
#endif //#if defined(__EVS_CODEC_SUPPORT__) && defined(__VOLTE_SUPPORT__)

typedef struct {
	LOCAL_PARA_HDR
	uint16 rate;
}ilm_SP_C2K_RATE_NOTI_t;

typedef struct {
   LOCAL_PARA_HDR
   L1SP_C2K_Event event;
   int            param;
}ilm_SP_C2K_EVENT_t;

typedef struct {
   LOCAL_PARA_HDR
   L1SP_L4C_Event event;
   L1SP_L4C_Event_Mode mode;
}ilm_SP_L4C_SET_EVENT_t;

typedef enum {
   SP_2G_HANDOVER,
   SP_2G_TCH,  
   SP_3G_RAB,
   SP_4G_RAB,
   SP_2G_AUDIOMANAGER_INFO
}SP_CHANGERAT_EVENT;

typedef struct {
   LOCAL_PARA_HDR
   SP_CHANGERAT_EVENT event;  // information from L1Core : mapping AUD_CC_IRQ_T to SP_CHANGERAT_EVENT; information from PCORE : use straightly
   kal_uint32 param[2];
}ilm_SP_CHANGERATE_EVENT_t;

typedef enum {
   SP_3G_SIM_FDD_ACTIVE,
   SP_3G_SIM_TDD_ACTIVE,
   SP_3G_SIM_IDLE,
}SP_3G_SIM;

SP_3G_SIM L1SP_GetSIMStatus();

typedef struct {
   LOCAL_PARA_HDR
   uint8 text;
}ilm_SP_L4C_SET_EGTT_t;


#endif //_SP_DRV_H
