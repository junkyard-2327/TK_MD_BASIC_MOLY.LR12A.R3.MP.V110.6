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
 * media.h
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description:
 * ------------
 *   Media file recording/playback
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
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *==============================================================================
 *******************************************************************************/

#ifndef __MEDIA_H
#define __MEDIA_H

#include "fs_type.h"
#include "fsal.h"

#include "l1audio.h"
#include "l1aud_common_def.h"


/*****************************************************************************
* Function Declaration
*****************************************************************************/
// void  mediaHisr( uint16 flag );


/* L1Audio_IDMA*/
//void IDMA_WriteToDSP(volatile kal_uint16 *dst, kal_uint16 *src, kal_uint32 length);
//void IDMA_FillToDSP(volatile kal_uint16 *dst, kal_uint16 value, kal_uint32 length);
//void IDMA_ReadFromDSP(kal_uint16 *dst, volatile kal_uint16 *src, kal_uint32 length);
//void IDMA_ReadFromDSP_Skip_1(kal_uint16 *dst, volatile kal_uint16 *src, kal_uint32 length);
//void IDMA_WriteToDSP_Duplicate(volatile kal_uint16 *dst, kal_uint16 *src, kal_uint32 length);
void EMI_ReadFromDSP(kal_uint16 *dst, volatile kal_uint16 *src, kal_uint32 length);
void EMI_WriteToDSP(volatile kal_uint16 *dst, kal_uint16 *src, kal_uint32 length);

/* For Ring Buffer Access */
// void  rb_ClearRB( void );
// int32 rb_GetByteCount( void );
// int32 rb_GetFreeSpace( void );
// bool  rb_GetByte( uint8* data_8 );
// bool  rb_GetWord( uint16* data_16 );
// bool  rb_GetDWord( uint32* data_32 );
// bool  rb_PeekByte( uint8* data_8 );
// bool  rb_PeekWord( uint16* data_16 );
// bool  rb_PeekDWord( uint32* data_32 );
// bool  rb_PutByte( uint8 data_8 );
// bool  rb_PutWord( uint16 data_16 );
// bool  rb_PutDWord( uint32 data_32 );
// uint32 rb_SkipNByte( uint32 skip_count );
// uint32 rb_SkipNWord( uint32 skip_count );
// uint32 rb_GetWriteIndex( void );
// uint32 rb_GetReadIndex( void );
// uint32 rb_GetSize( void );
// uint16 rb_GetOBFlag( void );
// uint16 rb_GetOddByte( void );
//int rb_PutNByte( const uint8 *buffer, int len );
// nint rb_GetNByte( uint8 *buffer, int len );
/* For Ring Buffer Access */


void  ktInit( uint16 aud_id, uint16 id_num );
void  ktLock( void );
void  ktUnlock( void );
void  toneInit( uint16 aud_id, uint16 id_num );

#define VERIFY_DATA_TO_DSP 0

/* L1CTM interface */ 
void l1ctm_init( void );

int32        rbGetDataCount( AUD_RB_INFO *rb );
//kal_uint8    rbGetByte(AUD_RB_INFO *srcRB);
void         rbGetWriteBuffer( AUD_RB_INFO *rb, kal_uint8 **buffer, kal_uint32 *buf_len );// in bytes
void         rbGetReadBuffer( AUD_RB_INFO *rb, kal_uint8 **buffer, kal_uint32 *buf_len );// in bytes
void         rbWriteDataDone( AUD_RB_INFO *rb, kal_uint32 len ); // in bytes
void         rbReadDataDone( AUD_RB_INFO *rb, kal_uint32 len ); // in bytes
int32        rbGetFreeSpace( AUD_RB_INFO *rb );


// speech enhancement control functions
// #define SPE_ES_FLAG     (1 << 0) 
//#define SPE_AEC_FLAG    (1 << 1) 
// #define SPE_EES_FLAG    (1 << 2) 
//#define SPE_UL_NR_FLAG  (1 << 3) 
//#define SPE_DL_NR_FLAG  (1 << 4) 
//#define SPE_TDDNC_FLAG  (1 << 5)
//#define SPE_DMNR_FLAG   (1 << 6)
//#define SPE_AGC_FLAG    (1 << 7)
#define NUM_OF_SPH_FLAG 8 // if you add new SPE, please remind to revind the table define from uint8 to uint 16

//speech enhancement mask for l1sp.spe_mask usage
// #define SPH_ENH_MASK_ES    SPE_ES_FLAG
//#define SPH_ENH_MASK_AEC   SPE_AEC_FLAG
// #define SPH_ENH_MASK_EES   SPE_EES_FLAG
//#define SPH_ENH_MASK_ULNR  SPE_UL_NR_FLAG
//#define SPH_ENH_MASK_DLNR  SPE_DL_NR_FLAG
//#define SPH_ENH_MASK_TDDNC SPE_TDDNC_FLAG
//#define SPH_ENH_MASK_DMNR  SPE_DMNR_FLAG
//#define SPH_ENH_MASK_AGC  SPE_AGC_FLAG
// #define SPH_ENH_MASK_SIDETONE (1 << NUM_OF_SPH_FLAG) removed
//#define SPH_ENH_MASK_NOTCH_FILTER (1 << (NUM_OF_SPH_FLAG+1))
//#define SPH_ENH_MASK_ECHO_REF (1 << (NUM_OF_SPH_FLAG+2))

#define SPE_DMNR_SUPPORT     (1 << 0) 
#define SPE_TDNC_SUPPORT    (1 << 1) 
#define SPE_MAGI_CON_SUPPORT (2 << 1) 



void SPE_Init( void );
void SPE_ENHCtrlSwitch(uint16 state);


void SPE_Clear_DLL_Entry();
//void SPE_SetULNR( bool ec );
void SPE_LoadLimiterPara(uint16 para);
void SPE_LoadDmnrCoeffs(kal_int16 dmnr_para[NUM_DMNR_PARAM]); //enable only when "defined(__DUAL_MIC_SUPPORT__)"
void SPE_LoadWbDmnrCoeffs(kal_int16 wb_dmnr_para[NUM_WB_DMNR_PARAM]); //enable only when "defined(__DUAL_MIC_SUPPORT__) && defined(__AMRWB_LINK_SUPPORT__)" 
void SPE_LoadDmnrLspCoeffs(kal_int16 dmnr_para[NUM_DMNR_PARAM]);
void SPE_LoadWbDmnrLspCoeffs(kal_int16 wb_dmnr_para[NUM_WB_DMNR_PARAM]);
void SPE_LoadSWbLspDmnrCoeffs(kal_int16 swb_dmnr_para[NUM_SWB_DMNR_PARAM]);
void SPE_LoadSWbDmnrCoeffs(kal_int16 swb_dmnr_para[NUM_SWB_DMNR_PARAM]);




/* L1SP interface */ 
void L1SP_Init( void );
void L1SP_LoadSpeechPara( void );
void SPE_Enable_DLL_Entry(void);
void SPE_SetDynamicStatemachine(void);
void SetDynamicParToDSP(uint32 IDnumber);
bool isSPEEnable(void);
void Set2GDynPar(void);
void Set3GDynPar(void);
void Set4GDynPar(void);
void SetC2KDynPar(void);




void L1SP_SetState(kal_uint8 state);
kal_uint8 L1SP_GetState( void );
void L1SP_Set_isStandByMode(bool RAB_status);
bool L1SP_Get_isStandByMode( void );
void L1SP_Reload_SPE_Para( void );
// void L1SP_Reload_MagiClarity_Para( void );
// void L1SP_Reload_DMNR_Para( void ); //enable only when "defined(__DUAL_MIC_SUPPORT__)"
void L1SP_Register_Pcm4WayService(void (*onHandler)(void *), void (*offHandler)(void *));
void L1SP_UnRegister_Pcm4Way_Service( void );
bool L1SP_isC2KSO_Connected();

kal_bool L1SP_TCH_State( void );

enum{ // RIMIND: please keep following same as em_speech_info_SpeechNetworkType in audio_enum.h
   L1SP_STATE_IDLE = 0, 
   L1SP_STATE_2G_SPEECH_ON,
   L1SP_STATE_3G_SPEECH_ON,
   L1SP_STATE_3G324M_SPEECH_ON,
   L1SP_STATE_3G_SPEECH_CLOSING,    
   L1SP_STATE_4G_SPEECH_ON,
   L1SP_STATE_4G_SPEECH_CLOSING,   
   L1SP_STATE_C2K_SPEECH_ON,
   L1SP_STATE_C2K_SPEECH_CLOSING,      
   //L1SP_STATE_3G_SPEECH_CLOSED 
}; 

void sp3g_speech_init( uint8 RAT_Mode );
void sp3g_speech_close( bool IsInterRAT );
void sp3g_init( void );//boot up init
kal_bool   SP3G_Rab_State( void );
kal_uint32 SP3G_Rab_Id( void );
void       SP3G_Reset( void );
void       SP3G_SetRxTypeToNoData( void );
kal_bool   SP3G_IsDTXOn( void );
void       SP3G_GetSyncDelayRW( kal_uint16 *u16DelayR, kal_uint16 *u16DelayW, kal_uint32 *u32CurTime64us);
void       SP3G_UpdateL1AInFo_P( kal_uint8 bitmap, kal_uint8 value );
kal_uint32 SP3G_GetCodecMode(void);

void sp4g_speech_init( uint8 RAT_Mode );
void sp4g_speech_close( void );
void sp4g_init( void );//boot up init
kal_bool   SP4G_Rab_State( void );
kal_uint32 SP4G_Rab_Id( void );
void       SP4G_Reset( void );
void       SP4G_SetRxTypeToNoData( void );
kal_bool   SP4G_IsDTXOn( void );
void       SP4G_GetSyncDelayRW( kal_uint16 *u16DelayR, kal_uint16 *u16DelayW, kal_uint32 *u32CurTime64us);

void      SPC2K_GetSyncDelayRW( uint16 *u2DelR, uint16 *u2DelW, uint16 *u2DelM);
void      SPC2K_ConSSO_Done( void );
void      SPC2K_DisconSSO_Done( void );

void      L1SP_C2K_Est(int codec);
void      L1SP_C2K_DeEst( void );
void      L1SP_C2K_IntraRAT(int codec);

kal_uint32 L1Audio_GetEventGroup( void );
void L1Audio_ExeEventHandler( kal_uint32 event );
void L1Audio_ActivateHisrHandler(kal_uint16 magic_no, void *userData);


// For In Process Call
void L1Audio_InProcCall(in_proc_call_type func, kal_uint32 func_arg1, void* func_arg2);
void L1Audio_InProcCall2(in_proc_call_type func, kal_uint32 func_arg1, void* func_arg2);



// uint32 PCM2Way_GetBandInfo(void);

// Speech related
void SP_Strm_Init(void);

#endif /* __MEDIA_H */

