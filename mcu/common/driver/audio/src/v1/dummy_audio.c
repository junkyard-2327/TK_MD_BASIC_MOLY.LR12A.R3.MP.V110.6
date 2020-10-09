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
 * dummy_audio.c
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description:
 * ------------
 *   Provide APIs when speech functionality is disabled 
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
 *
 * removed!
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *==============================================================================
 *******************************************************************************/

#include "kal_public_api.h"
#include "syscomp_config.h"
#include "l1audio.h"
#include "l1sp_el2_struct.h"
#include "dcl.h"
#include "uas_export_api.h"
#include "cuif_l1core_public.h"
#include "usip_api_public.h"
#include "l1aud_common_def.h"
#include "RM_public.h"
//for MED
//#include "med_struct.h"

/************************************/
/* Tasl Creation (temp solution)    */
/* Should modify task_config.h      */
/************************************/

void L1Audio_HISR( void )
{
}

static void l1audio_main(task_entry_struct * task_entry_ptr);

kal_bool l1sp_create(comptask_handler_struct **handle)
{
   static const comptask_handler_struct l1sp_handler_info =
   {
      l1audio_main,          /* task entry function */
      NULL,          /* task initialization function */
      NULL,          /* task reset handler */
   };

   *handle = (comptask_handler_struct *)&l1sp_handler_info;

   return KAL_TRUE;
}

kal_bool l1audio_sph_srv_create(comptask_handler_struct **handle)
{
   static const comptask_handler_struct l1audio_sph_srv_handler_info =
   {
      NULL,
      NULL,
      NULL,
   };
   *handle = (comptask_handler_struct *)&l1audio_sph_srv_handler_info;

   return KAL_TRUE;
}

kal_bool audl_create(comptask_handler_struct **handle)
{
   static const comptask_handler_struct audl_handler_info =
   {
      NULL,          /* task entry function */
      NULL,          /* task initialization function */
      NULL,          /* task reset handler */
   };

   *handle = (comptask_handler_struct *)&audl_handler_info;
   return KAL_TRUE;
}

/************************************/
/* Audio Manager                    */
/************************************/

#ifndef uint16
typedef kal_uint16   uint16;
typedef kal_int16    int16;
typedef kal_uint32   uint32;
typedef kal_int32    int32;
typedef kal_uint8    uint8;
typedef kal_int8     int8;
typedef kal_bool     bool;
#define true         (kal_bool)(1==1)
#define false        (kal_bool)(1==0)
#endif

bool AM_IsSpeechOn( void )
{
   return false;
}

kal_uint32 AM_Get2GResyncThreshold( void )
{
   return 1083;
}

void AM_SetLoopBackTest(bool enable)
{
   (void) enable;
}

/*bool AM_AudioManager( bool handover, uint16 speech_mode, int8 sub_channel )
{
   (void) handover;
   (void) speech_mode;
   (void) sub_channel;
   
   return false;
}*/

/************************************/
/* Speech                           */
/************************************/

void L1SP_Set_DAI_Mode( uint8 mode )
{
   (void) mode;
}

void L1SP_SetAfeLoopback( bool enable )
{
   (void) enable;
}

void L1Audio_EnterDedicatedMode( void )
{
}

void L1Audio_LeaveDedicatedMode( void )
{
}

void L1SP_D2C_LISR( uint16 itype )
{
   (void) itype;
}

/*void L1SP_TCH_Notify( bool bOn )
{
   (void) bOn;
}
*/

void L1SP_SetOutputVolume( kal_uint8 volume1, kal_int8 digital_gain_index )
{
   (void) volume1;
   (void) digital_gain_index;
}

void L1SP_SetMicrophoneVolume( kal_uint8 mic_volume )
{
   (void) mic_volume;
}

void L1SP_Speech_On( uint8 RAT_Mode )
{
   (void) RAT_Mode;
}

void L1SP_Speech_Off( void )
{
}

void L1SP_SetSidetoneVolume( uint8 sidetone )
{
   (void) sidetone;
}

/************************************/
/* Speech 3G                        */
/************************************/

typedef struct
{
   kal_uint8 RSSI;
   kal_uint8 RSCP;
   kal_uint8 ECIO;
   kal_uint8 HHO_SHO;

   /* Used by UMAC */ 
   /* Modified CRC = CRC |(S value decision) 
        S value decision=1 => S value < S Threshold. this frame is not reliable
        S value decision =0 => S value > S Threshold. This frame is reliable

        Modified CRC =0, speech good, CRC=0, S value decision =0 
        Modified CRC=1, CRC =1 or S value decision=1

        crc_result value meaning : 
        0 : Modified CRC =  0
        1 : Modified CRC = 1, CRC = 0
        2 : Modified CRC = 1, CRC = 1
        */
   kal_uint8 crc_result[3]; /* For Class A/B/C */
   kal_uint32 s_value[3];  /* For Class A/B/C */

   kal_int16      tpc_SIR_lta;            // For recording into speech VM
   kal_int16      dpdch_SIR_lta;          // For recording into speech VM
   kal_int16      TFCI_max_corr;          // For recording into speech VM                                              
}L1_info_struct;

kal_bool CS_NeedSpeechExtraLog( void )
{
   return KAL_FALSE;
}

/*void SP3G_UpdateL1AInFo( kal_uint8 bitmap, kal_uint8 value )
{
   (void) bitmap;
   (void) value;
}
*/

void SP3G_Log_L1_Info(uint32 CFN, L1_info_struct *p_L1_Info)
{
   (void) CFN;
   (void) p_L1_Info;
}

void SP3G_Closed_Confirm( void )
{
}

uint32 l1sp_rab_id;
fp_CSR_SP3G_Callback CSR_SP3G_Callback;
void SP3G_Rab_Est( uint32 rab_id, kal_uint8 default_speech_codec )
{
	
   (void) default_speech_codec;
   CSR_SP3G_Callback = csr_get_fp_CSR_SP3G_Callback();
   l1sp_rab_id = rab_id;
   CSR_SP3G_Callback(SP3G_CODEC_READY, (void*)l1sp_rab_id );
}

void SP3G_Rab_Deest( void )
{
	CSR_SP3G_Callback = csr_get_fp_CSR_SP3G_Callback();
	CSR_SP3G_Callback(SP3G_CODEC_CLOSED, (void*)l1sp_rab_id );
}

void SP3GHSPA_DL_SetMaxCsDelay(kal_uint8 max_cs_delay)
{
   (void) max_cs_delay;
}

void SP3GHSPA_DL_PutSpeechFrame(kal_uint32 CFN, kal_uint8 frame_type, kal_bool crc_status, kal_uint8 *subflow)
{
   (void) CFN;
   (void) frame_type;
   (void) crc_status;
   (void) subflow;
}

void SP3GHSPA_UL_GetSpeechFrame(kal_uint8 *frame_type, kal_uint8 *rab_byte_array, kal_uint8 *len)
{
   (void) frame_type;
   (void) rab_byte_array;
   (void) len;
}

void SP3G_DL_PutSpeechFrame(uint32 CFN, uint8 sub_flow_id, uint8 frame_type, bool crc_status, uint8 *subflow)
{
   (void) CFN;
   (void) sub_flow_id;
   (void) frame_type;
   (void) crc_status;
   (void) subflow;
}

void SP3G_UL_SetFrameType(uint8 amr_frame_type)
{
   (void) amr_frame_type;
}

void SP3G_UL_GetSpeechFrame(kal_uint16*frame_index, kal_uint8 *frame_type, kal_uint8 *rab_byte_array, kal_uint8 *len)
{
   (void) frame_index;
   (void) frame_type;
   (void) rab_byte_array;
   (void) len;
}

/************************************/
/* Misc.                            */
/************************************/

void TONE_SetOutputVolume( uint8 volume1, int8 digital_gain_index )
{
   (void) volume1;
   (void) digital_gain_index;
}

void KT_SetOutputVolume( uint8 volume1, int8 digital_gain_index )
{
   (void) volume1;
   (void) digital_gain_index;
}

void Media_SetOutputVolume( uint8 volume1, int8 digital_gain_index )
{
   (void) volume1;
   (void) digital_gain_index;
}

void L1Audio_ResetDevice(void)
{
}

// Temp solution here.
// Formal solution: modify TrcMod.c
unsigned char L1Audio_Trace_Filter[5] = { 0x1, 0x3, 0x0, 0x0, 0x0 };

void Set_L1Audio_Filter(unsigned char *setting)
{
   int i;

   for(i=0; i<5; i++)
      L1Audio_Trace_Filter[i] = setting[i];
}


void SP_L4C_SetEvent(L1SP_L4C_Event event, L1SP_L4C_Event_Mode mode)
{
}


#ifdef __SPEECH_OVER_USB__
UART_PORT   SPEECH_PORT = NULL;//uart_port_null;
#endif   

kal_bool SP_Drv_Init_Bootup(void)
{
   return( KAL_TRUE );
}

void l1audio_console_handler(kal_char *string)
{
}

void SP_Strm_Audl_Handler( ilm_struct *ilm_ptr )
{
}

kal_bool SP_Drv_Init_Task(void)
{   
   return KAL_TRUE;
}

void Audio_MedFuncReg(Media_Func_Reg_Type *func){
      /*audio_alloc_aud_mem           = (fp_audio_alloc_aud_mem)  func->alloc_mem;
      audio_alloc_aud_mem_cacheable = (fp_audio_alloc_aud_mem)  func->alloc_mem_cacheable;
      audio_free_aud_mem            = (fp_audio_free_aud_mem)   func->free_mem;
      audio_set_path_vol            = (fp_audio_set_path_volume)func->set_path_volume;
      audio_get_active_mode         = (fp_audio_get_active_mode)func->get_active_mode;
      send_proc_call_req            = (fp_send_proc_call_req)   func->send_proc_call;
      send_proc_call_req2           = (fp_send_proc_call_req)   func->send_proc_call2;
      audio_get_meta_file           = (fp_get_meta_data_file)   func->get_meta_file;
      audio_get_meta_array          = (fp_get_meta_data_array)  func->get_meta_array;*/
}

void SpcIO_Msg_Handler_inAudL(ilm_struct *ilm_ptr){   
}

void L1SP_SetNvramInfoByIndex(L1SP_NVRAM_INFO_INDEX index, uint8* buffer, uint16 len){}
void L1SP_GetNvramInfoByIndex(L1SP_NVRAM_INFO_INDEX index, void *buffer, uint16 len){}
void L1SP_LoadCommonSpeechPara( uint16 c_para[NUM_COMMON_PARAS] ){}
void L1SP_SetOutputDevice( uint8 device ){}
void L1SP_SetSpeechVolumeLevelByIndex(kal_uint8 level, kal_uint8 v_paraIndex){}
void L1SP_SetInputSource( uint8 src ){}
void L1SP_SetSpeechEnhanceAndFir(uint32 scene, uint32 updatedCoeff){}
bool L1SP_IsMicrophoneMuted( void ){ return( false ); }
void L1SP_MuteMicrophone( bool mute ){}
void Media_SetMelodyFilter( uint16 len, const int16 *filter ){}
// void Media_MuteSpeaker( bool mute ){}
void KT_SetOutputDevice( uint8 device ){}
void KT_SetFIR( bool enable ){}
void KT_Play( uint16 freq1, uint16 freq2, uint16 duration, TONE_TYPE type ){}
void KT_Stop( TONE_TYPE type ){}
void TONE_SetOutputDevice( uint8 device ){}
void TONE_SetFIR( bool enable ){}
void TONE_Play( const L1SP_Tones *tonelist, TONE_TYPE type ){}
void TONE_Stop( TONE_TYPE type ){}

void SP4G_emac_timing_update(l1sp_emac_volte_timing_info_struct* p_timing_info){
}
void SP3G_SetDTX(kal_bool on){}
void SP_M2M_Handler(ilm_struct *ilm_ptr){}
void Spc_ForceEndAllApp(void){}


//for VoLTE Tone and KeyTone
void  SP4G_PSR_DL_KT_Play(kal_int16 freq1, kal_int16 freq2, kal_int16 duration){}
void  SP4G_PSR_DL_KT_Stop( void ){}
void  SP4G_PSR_UL_KT_Play(kal_int16 freq1, kal_int16 freq2, kal_int16 duration){}
void  SP4G_PSR_UL_KT_Stop( void ){}
void  SP4G_PSR_UL_Tone_Play(const L1SP_Tones *pToneList ){}
void  SP4G_PSR_UL_Tone_Stop( void ){}
void  SP4G_PSR_DL_Tone_Play(const L1SP_Tones *pToneList ){}
void  SP4G_PSR_DL_Tone_Stop( void ){}
//for VoLTE Link
void SP4G_PSR_UL_SetFrameType(SP4G_Codec codec){}
kal_uint32 SP4G_PSR_Link_Est( SP4G_Codec default_speech_codec ){ return( 0 ); }
void SP4G_PSR_Link_Deest(kal_uint32 id){}
void SP4G_UL_SetFrameType(uint8 amr_frame_type){ (void) amr_frame_type; }
kal_uint32 SP4G_JBM_GetDLVADFlag(){ return( 0 ); }
//for VoLTE AMR codec
void SP4G_PSR_UL_AMR_GetSpeechFrame(SP4G_Codec *frame_type, kal_uint8 *encodebits, kal_uint8 *bitlen){}
void SP4G_PSR_DL_AMR_PutSpeechFrame(kal_uint32 CFN, SP4G_PSR_Codec codec, SP4G_Codec frame_type, kal_bool crc_status, kal_uint8 *encodebits){}
void SP4G_PSR_SetDTX(kal_bool on){}
void SP4G_SetDTX(kal_bool on){}
kal_uint16 SP4G_PSR_GetCodecBitLength(SP4G_Codec codec){ return( 0 ); }
//for VoLTE G serial codec
void SP4G_PSR_UL_GSeries_GetSpeechFrame(SP4G_Codec *codec, kal_uint8 *encodebits, kal_uint8 *bitlen){}
void SP4G_PSR_DL_GSeries_PutSpeechFrame(SP4G_Codec codec, kal_uint8 *encodebits, kal_uint8 *bitlen){}
int SP4G_PSR_UL_GSeries_IsMoreData(void){ return( 0 ); }
void SP4G_Set_G711Parameters(kal_int32 law, kal_int32 dec_init_CNG_enable){}
//for VoLTE EVS codec
//#if defined(__EVS_SUPPORT__)
void SP4G_PSR_SetEVSEncCAPara(EVS_ENC_CA_PARAMETER *pEVS_CA_Par){}
void SP4G_PSR_UL_EVS_GetSpeechFrame(SP4G_Codec *frame_type, kal_uint8 *encodebits, kal_uint32 *bitlen){}
void SP4G_PSR_DL_EVS_PutSpeechFrame(kal_uint32 CFN, SP4G_Codec frame_type, kal_uint8 *encodebits, EVS_DEC_CA_PARAMETER *pEVS_Dec_CA_Par, kal_bool crc_status/*, kal_int32 bitlen*/){}
kal_bool convert_EVSHeaderFullCMR_to_SP4GCodecEnum(kal_uint8 CMR_value, SP4G_Codec *pSP4G_Codec, EVS_ENC_CA_PARAMETER *pEVS_ENC_CA_PARAMETER){return KAL_TRUE;}
kal_bool convert_EVSHeaderFullTOC_to_SP4GCodecEnum(kal_uint8 TOC_value, kal_uint8 EVS_band, SP4G_Codec *pSP4G_Codec){return KAL_TRUE;}
kal_bool convert_EVSCompactFormatCMR_to_SP4GCodecEnum(kal_uint8 CMR_value, SP4G_Codec *pSP4G_Codec){return KAL_TRUE;}
//#endif //#if defined(__EVS_SUPPORT__)
//for sp_4g_opt
kal_int32 SP4G_PSR_getToneDeteResult(void) { return( 0 ); }
kal_int32 SP4G_PSR_getEarPhone(void) { return( 0 ); }
//for fake VoLTE loopback
void sp4g_fake_loopback(void){}


//for MED
//void aud_util_in_proc_call_req_hdlr(ilm_struct *ilm_ptr){}
//typedef void (*media_in_proc_call_type) (kal_uint32 arg1, void *arg2);
//void aud_send_in_proc_call_req( module_type src_mod_id,  media_in_proc_call_type func, kal_uint32 func_arg1, void *func_arg2){}
kal_uint16 get_spcGetEpofTimes(enum_EPOF_event EPOF_event){ return( 0 ); }
void set_spcGetEpofTimes(enum_EPOF_event EPOF_event, int on){}
void spc_sendCustomDump(void *ilm){}

void SP_setEmCodecNotifyOff(bool isOff){}

void SP_L2P_Handler(ilm_struct *ilm_ptr){}
//for 4G TTY
kal_bool TTY_LTE_PSR_UL_isEmpty(void){return KAL_TRUE;}
kal_uint8 TTY_LTE_PSR_UL_Get(void){return 0;}
kal_uint16 TTY_LTE_PSR_UL_Queue_Size(void){return 0;}

kal_bool TTY_LTE_PSR_DL_isFull(void){return KAL_TRUE;}
void TTY_LTE_PSR_DL_Put(kal_uint8 tty_char){}
kal_uint16 TTY_LTE_PSR_DL_Queue_Size(void){return 0;}
void TTY_LTE_PSR_UL_Queue_Init(){};
void TTY_LTE_PSR_DL_Queue_Init(){};



void *CUIF_U2C_ULTail_ISR(CUIF_Mask_t* mask){ return NULL; }

void *CUIF_U2C_DLTail_ISR(CUIF_Mask_t* mask){ return NULL; }

void *CUIF_U2C_ULHead_ISR(CUIF_Mask_t* mask){ return NULL; }

void *CUIF_U2C_DLHead_ISR(CUIF_Mask_t* mask){ return NULL; }

void SetFlag()
{
   //turn on power/clock API 
   MD_TOPSM_PWR_SW_Control(USIP0_PWR, KAL_TRUE);   
   
	 dsp_uSIP_speech_activate(DSP_CTRL_USIP_SPEECH);
	
   while( uSIP_ACTIVEDONE != dsp_uSIP_speech_active_done_check(DSP_CTRL_USIP_SPEECH)){
	    kal_sleep_task( AUD_1TICK(1) );
	 }	
}

void ClearFlag()
{
   //turn off power/clock API 
   MD_TOPSM_PWR_SW_Control(USIP0_PWR, KAL_FALSE);   
      
	 dsp_uSIP_speech_activate(DSP_CTRL_USIP_SPEECH);
	
   while( uSIP_ACTIVEDONE != dsp_uSIP_speech_active_done_check(DSP_CTRL_USIP_SPEECH)){
	    kal_sleep_task( AUD_1TICK(1) );
	 }	
}

void L1Audio_BootDSPSpeech()
{
	  //bool is_default_user;
	  //turn on power/clock API
	  MD_TOPSM_PWR_SW_Control(USIP0_PWR, KAL_TRUE);
	  
	  firstboot_activate(DSP_CONTROL_USIP1_SPEECH, DSP_CTRL_USIP_SPEECH);

    //is_default_user = is_myself_duty_rat(DSP_CTRL_USIP_SPEECH_SS1_INIT, DSP_CTRL_USIP_SPEECH);

    while( uSIP_ACTIVEDONE != dsp_uSIP_speech_active_done_check(DSP_CTRL_USIP_SPEECH)){
	    ;
	  }	  
}

void L1Audio_UnBootDSPSpeech()
{
	  //turn off power/clock API 
	  dsp_uSIP_speech_deactivate(DSP_CTRL_USIP_SPEECH);
	  while( uSIP_DEACTIVEDONE != dsp_uSIP_speech_deactive_done_check(DSP_CTRL_USIP_SPEECH)){
		   ;
		}		  
		MD_TOPSM_PWR_SW_Control(USIP0_PWR, KAL_FALSE);
}

void L1Audio_UseDSPSpeech()
{
	  //bool is_default_user;
	  //turn on power/clock API
	  MD_TOPSM_PWR_SW_Control(USIP0_PWR, KAL_TRUE);	  
	  
    dsp_uSIP_speech_activate(DSP_CTRL_USIP_SPEECH);
    //is_default_user = is_myself_duty_rat(DSP_CTRL_USIP_SPEECH_SS1_INIT, DSP_CTRL_USIP_SPEECH);

    while( uSIP_ACTIVEDONE != dsp_uSIP_speech_active_done_check(DSP_CTRL_USIP_SPEECH)){
	    ;
	  }	  
}

void L1Audio_NotUseDSPSpeech()
{
	  //turn off power/clock API 
	  dsp_uSIP_speech_deactivate(DSP_CTRL_USIP_SPEECH);
	  while( uSIP_DEACTIVEDONE != dsp_uSIP_speech_deactive_done_check(DSP_CTRL_USIP_SPEECH)){
		   ;
		}		  
		MD_TOPSM_PWR_SW_Control(USIP0_PWR, KAL_FALSE);
}



void L1Audio_Task(unsigned argc, void *argv)
{      
#ifdef __AUDIO_TASK_DISABLE__
   return;
#endif	
	 L1Audio_BootDSPSpeech();
	 L1Audio_UnBootDSPSpeech();
	 	
   while(uSIP_BOOTDONE != uSIP_SPEECH_BootDoneCheck(uSIP_SPEECH_API_USE_NUM)){
      kal_sleep_task(AUD_1TICK(1));
   } 
   
	 L1Audio_UseDSPSpeech();
	 //read/write DSP
	 L1Audio_NotUseDSPSpeech();
}

static void l1audio_main(task_entry_struct * task_entry_ptr)
{
   kal_set_active_module_id(MOD_L1SP);
   L1Audio_Task( 0, 0 );
}

void SP_L4C_SetERTTSTR(uint8 call_id, uint8 string[256], uint16 length){}
void SP_L4C_SendERTTSTR(){}
