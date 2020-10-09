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
 *	afe.c
 *
 * Project:
 * --------
 *   MT6208
 *
 * Description:
 * ------------
 *   Audio Manager
 *
 * Author:
 * -------
 * -------
 *
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
 *
 * removed!
 * removed!
 * removed!
 *
 *******************************************************************************/
#ifndef AM_H
#define AM_H

#include "l1aud_common_def.h"
#include "sal_def.h"

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
#endif

typedef enum{
   AM_RECORD_NONE = 0, 
   AM_RECORD_8K,
   AM_RECORD_16K
}AM_RECORD_FORMAT; 

void     AM_Init( void );
void     AM_SetDSP2GReset(bool v);
//bool     AM_AudioManager( bool handover,uint16 speech_mode, int8 sub_channel );
//void     AM_AudioManager_OS_Tick( void );
void     AM_FlushQFunction( void );
void     AM_FillSilencePattern( volatile uint16 *addr, uint16 info, uint16 speech_mode );
void     AM_FillSilencePatternInBuffer( uint16 *buffer, uint16 speech_mode );
uint16   AM_GetSpeechPatternLength( uint8 speech_mode );
bool     AM_CodecMode_IsLegal(uint8 codec_mode);
void     AM_SpeechOn(uint32 rat_mode, uint32 extraInfo);
void     AM_SpeechOff( uint32 info );
bool     AM_IsSpeechOn( void );
void     AM_SetDAIMode ( uint8 mode );
bool     AM_IsDAIMode( void );
void     AM_WriteFirCoeffs( const int16 *in_coeff, const int16 *out_coeff );
void AM_WriteWbFirCoeffs( const int16 wb_in_coeff[90], const int16 wb_out_coeff[90] );
void AM_WriteSWbFirCoeffs( const int16 swb_in_coeff[90], const int16 swb_out_coeff[90] );
void AM_WriteWbIirCoeffs( const int16 wb_in_coeff[42], const int16 wb_out_coeff[42],const int16 wb_Mic1_coeff[20],const int16 wb_Mic2_coeff[20] );
void AM_WriteIirCoeffs( const int16 in_coeff[42], const int16 out_coeff[42],const int16 Mic1_coeff[20],const int16 Mic2_coeff[20] );
void AM_WriteSWbIirCoeffs( const int16 swb_in_coeff[42], const int16 swb_out_coeff[42],const int16 swb_Mic1_coeff[20],const int16 swb_Mic2_coeff[20] );
void     AM_VMRecordOn( void );
void     AM_VMRecordOff( void );

void     AM_KeyToneOn( void );
void     AM_KeyToneOff( void );
void     AM_ToneOn( void );
void     AM_ToneOff( void );
void  Set_Reset_Enh_Status(uint8 status);
uint8 Get_Reset_Enh_Status(void);



#if 0 
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif 
#if 0 
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif
uint32   AM_GetRecordFormat(void);
typedef enum{
   AM_PCM8KREC_APP_TYPE_PCMREC = 0,
   AM_PCM8KREC_APP_TYPE_VMEPL,
}AM_PCM8KREC_APP_TYPE; 

void     AM_PCM8K_RecordOn( AM_PCM8KREC_APP_TYPE appType, uint8 dlPos );
void     AM_PCM8K_RecordOff( bool wait, AM_PCM8KREC_APP_TYPE appType );
void     AM_PCM16K_RecordOn( uint8 dlPos );         /*PCM16K recording support 6219 and latter version*/
void     AM_PCM16K_RecordOff( bool wait );
#if 0 
/* under construction !*/
/* under construction !*/
#endif 
// bool     AM_IsULSpeechMuted( void );
void     AM_Mute_UL_EnhResult_Speech(bool mute);
void     AM_Mute_UL_Source_Speech(bool mute);
void     AM_Mute_UL_Codec_Speech( bool mute );
void     AM_Mute_UL_POS_EN_Speech( bool mute );
void     AM_Mute_DL_8K_Speech( bool mute );
void     AM_Mute_DL_Speech_Traffic( bool mute );

// PCMNWAY function inside AM 
typedef enum {
	AM_PCMEX_TYPE_DEDICATION = 0, // under call
//	AM_PCMEX_TYPE_IDLE_WO_ENH, // without call, voice path, no enhancement
	AM_PCMEX_TYPE_IDLE, // without call, speech quality like, with enhancement
#if 0	
/* under construction !*/
/* under construction !*/
#endif	
	AM_PCMEX_TYPE_DACA_DEDICATION,  // data card under call (speech on)
	AM_PCMEX_TYPE_DACA_IDLE_WO_ENH, // data card without call, voice path, no enhancement 
	AM_PCMEX_TYPE_DACA_IDLE, // data card without call, speech quality like, with enhancement

	AM_PCMEX_TYPE_UNDEF = 0xffff,
} AM_PCMEX_TYPE;

void     AM_PCM_EX_On( AM_PCMEX_TYPE type, uint32 cfg_ptr);
void     AM_PCM_EX_Off( AM_PCMEX_TYPE type, uint32 cfg_ptr);
bool     AM_IsVoIPOn( void );
bool     AM_IsConflictState( void );
bool     AM_IsKeyToneOn( void );
bool     AM_IsToneOn( void );
bool     AM_IsVoiceOn( void );

// PCM router control function
void AM_PcmRouter_On(void);
void AM_PcmRouter_Off(void);

// [Phase out] PCM path control functions, defualt is 16k PCM, so we don't need to open it. 
// void     AM_PCM_Mode_Off(void);
// void     AM_PCM_Mode_On(kal_uint16 data);
// kal_bool AM_IsPcmModeOn( void );

// Bluetooth earphone control functions
void     AM_BluetoothOn( uint8 bt_mode);
void     AM_BluetoothOff( void );
bool     AM_IsBluetoothOn( void );
bool     AM_IsBTCordlessMode( void );

// Sound effect control functions
void     AM_SND_PlaybackOn( void );
void     AM_SND_PlaybackOff( bool wait );

// Functions for modem loopback test 
void     AM_SetLoopBackTest( bool enable );
bool     AM_IsLoopBackTest( void );

// void     AM_EnableToneLoopBackFlag( kal_bool param );

// network information
void     AM_SetSpeechMode( uint16 speech_mode, int8 sub_channel );
uint16   AM_GetSpeechMode(void);
bool     AM_IsSpeechWB( void );
uint32   AM_GetNetworkRate( void );

// InterRAT
void     AM_InterRAT_3G_to_2G( void );
void     AM_InterRAT_4G_to_2G();
void     AM_InterRAT_C2K_to_2G();
void     AM_InterRAT_Standby_to_2G();

void     AM_InterRAT_2G_to_3G( kal_uint32 codec );
void     AM_InterRAT_4G_to_3G(uint32 codec);
void     AM_InterRAT_C2K_to_3G(uint32 codec);
void     AM_3G_INTRARAT(kal_uint32 codec);

void     AM_InterRAT_2G_to_4G(uint32 codec);
void     AM_InterRAT_3G_to_4G(uint32 codec);
void     AM_InterRAT_C2K_to_4G(uint32 codec);
void     AM_4G_INTRARAT(kal_uint32 codec, uint32 is_4G_handover);
kal_bool AM_Is_4G();


void     AM_InterRAT_2G_to_C2K(uint32 codec);
void     AM_InterRAT_3G_to_C2K(uint32 codec);
void     AM_InterRAT_4G_to_C2K(uint32 codec);
void     AM_C2K_IntraRAT(uint32 codec);
//block filter run time switch function, used in sp_enhance.c
// void     AM_SwitchCompFilter( kal_uint16 par );
//block filter turn on/off
// void     AM_TurnOnBlockFilter( void );
// void     AM_TurnOffBlockFilter( void );

bool     AM_IsAmInSpeechState( void );


bool     AM_IsDataCardOn( void );

// sw digital gain related
// void AM_DSP_SetAudioDigitalGain(kal_uint16 digitalVol);
// kal_uint16 AM_DSP_GetAudioDigitalGain(void);
void AM_DSP_SetSpeechDigitalGain(kal_uint16 digitalVol);
kal_uint16 AM_DSP_GetSpeechDigitalGain(void);
void AM_DSP_SetSpeechUplinkSwAgcGain(kal_uint16 digitalVol);
kal_uint16 AM_GetSpeechEnhRefDigitalGain(void);
void AM_DSP_SetSpeechEnhRefDigitalGain(kal_uint16 digitalVol);

// dsp filter/enhancement parameter/coefficient related
void AM_SetNotchFilterParam(int16 *param);
void AM_DSP_WriteNotchFilterParam(void);

int16 AM_IsAudioPlaybackOn( void );
void   AM_SetBlockMED( uint32 RAT, bool b, uint32 pos );
void AM_Set2GCodecInfo(uint16 speech_mode, int8 sub_channel);
#endif


