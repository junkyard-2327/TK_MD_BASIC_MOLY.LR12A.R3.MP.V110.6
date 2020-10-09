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
 * spc_drv.c
 *
 * Project:
 * --------
 * MAUI
 *
 * Description:
 * ------------
 * MD speech control  
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
 *
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
 *
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
 * removed!
 * removed!
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *==============================================================================
 *******************************************************************************/

#include "kal_public_api.h"
#include "kal_general_types.h"
#include "stack_config.h"
#include "reg_base.h"
#include "kal_trace.h"
#include "string.h"
#include "fsal.h"
#include "sp_cc.h"
#include "event_info_utility.h" // for MODEM_WARNING_MESSAGE

#include "audio_enum.h"
#include "am.h"
#include "afe.h"
#include "media.h"
#include "l1sp_trc.h"
#include "audcoeff_default.h"
#include "dcl.h"
#include "extcodec.h"



#include "med_spcio.h"
#include "audio_em_struct.h"
// #include "aud_common_config.h" // for DEFAULT_SPEECH_COMMON_PARA. in customer folder


#include "spc_drv.h" // including "sp_drv.h" 
#include "sp_enhance.h"
#include "sp_daca.h"
#include "pcm4way.h"
// #include "pcmrec.h"
#include "rawpcmrec.h"
#include "bgSnd.h"
#include "pcmRouter.h"
#include "ctm_drv.h"
#include "vm.h"
#include "pcmMixer.h"
#include "pcmMixer3.h"
// #include "mml1_rf_global.h"

#if defined(__CVSD_CODEC_SUPPORT__) 
#include "bt_sco_drv.h"
#endif

#include "sp_dsptone_drv.h"
#include "sal_exp.h"

// ----------------------------------------------------------------------------
void Spc_AcousticLoopback(bool enable, kal_uint8 uParam, kal_uint8 extraParam);
uint16 spc_dynamicParameterParser_dispatcher(const kal_uint16 offset, const kal_uint16 length, SPC_MSG_FROM_T comeFrom,
	kal_uint16 *procLen, kal_uint16 *newOffset);
void Spc_SpeechRouterOn(kal_bool enable);
void Spc_SpeechOnForDaca( kal_uint8 RAT_Mode, kal_bool enable);
void spc_SpeechOnForCallHold(kal_bool isGen);

void spc_gain_UlMuteSet(kal_bool on, kal_bool byPassCheck);
void spc_gain_DlMuteSet(kal_bool on, kal_bool byPassCheck);
void spc_gain_UlEnhResultMuteSet(kal_bool on, kal_bool byPassCheck);
void spc_gain_UlSourceMuteSet(kal_bool on, kal_bool byPassCheck);
void spc_gain_DlMuteCodecSet(kal_bool on, kal_bool byPassCheck);

// ----------------------------------------------------------------------------

extern _PCMEX_T pcmEx;
typedef enum {
	SPC_APP_SPEECH_USAGE = 0,	
	SPC_APP_PCMNWAY_USAGE,
	SPC_APP_OLD_RECORD_USAGE, // either "SPC_APP_RECORD_USAGE" or "SPC_APP_PCM_REC_USAGE & SPC_APP_VM_REC_USAGE" usage, remove from 93md
	SPC_APP_BGSND_USAGE,	
	
	SPC_APP_CTM_USAGE,
	SPC_APP_ACLOOPBACK_USAGE,
	
	SPC_APP_OLD_PCM_REC_USAGE, // 6, add from MT6582 chip, remove from 93md
	SPC_APP_VM_REC_USAGE,
	
	SPC_APP_HOLD_USAGE, // cannot mix with other speech application
	SPC_APP_HOSTED_USAGE,	
	SPC_APP_PCMROUTER_USAGE, 

	//We can't enable all record function, only following selections are acceptable:
	//1. SPC_APP_OLD_RECORD_USAGE
	//2. SPC_APP_OLD_PCM_REC_USAGE
	//3. SPC_APP_OLD_PCM_REC_USAGE     + SPC_APP_VM_REC_USAGE
	//4. SPC_APP_RAW_PCM_REC_USAGE
	//5. SPC_APP_RAW_PCM_REC_USAGE + SPC_APP_VM_REC_USAGE
	SPC_APP_RAW_PCM_REC_USAGE, //11, add from MT6752 chip

	SPC_APP_MERGE_SPH_USAGE, // 12
	SPC_APP_MIXER_USAGE, // 13
	SPC_APP_MIXER3_USAGE, // 14	
	SPC_APP_MAX = 16 // due to spcAppUsage is uint16. so only 16 application can existing.
} MSG_SPC_APP_T;

typedef enum{
	SPC_EM_INIT_COMMON = 0,
	SPC_EM_INIT_NB,
	SPC_EM_INIT_WB,
	SPC_EM_INIT_SWB,
	SPC_EM_INIT_DMNR,
	SPC_EM_INIT_LSPK_DMNR,
	SPC_EM_INIT_IIR,

	SPC_EM_INIT_MAX = 16 // due to spcEmInit is unit16, so only 16 em data message can existing. 
} SPC_EM_INIT_T;

typedef struct _SPC_T_
{
	kal_uint16           spcGetEpofTimes;
	kal_uint16           spcAppUsage; //Please reference MSG_SPC_APP_T for bit definition

	kal_uint16           spcEmInit; 

	// DSP mute 
	kal_bool             spcMuteUl;
	kal_bool             spcMuteDl;

	kal_bool             spcMuteUlEnhResult;
	kal_bool             spcMuteUlSource;
} _SPC_T;




typedef struct spcDynParHeaderStruct 
{
   uint16 SphParserVer; 
   uint16 NumLayer;
   uint16 NumEachLayer;
   uint16 Param_Header_Layer1;
   uint16 Param_Header_Layer2;
   uint16 Param_Header_Layer3;
   uint16 Param_Header_Layer4;
   uint16 SphUnitMagiNum;
} spcDynParHeader;


typedef struct spcDynParNBDataStruct 
{
   unsigned short speech_Mode_para[NUM_MODE_PARAS];
   short speech_NB_FIR_IN_para[NUM_FIR_COEFFS];
   short speech_NB_FIR_OUT_para[NUM_FIR_COEFFS];
} spcDynParNBData;

typedef struct spcDynParNBDataStruct_V10 // need remover later 
{
   unsigned short speech_Mode_para[NUM_MODE_PARAS];
   short speech_NB_FIR_IN_para[45];
   short speech_NB_FIR_OUT_para[45];
} spcDynParNBData_V10;
typedef struct spcDynParNBIIRDataStruct 
{
   short speech_NB_MIC1_IIR_para[NUM_MIC1_IIR_COEFFS];
   short speech_NB_MIC2_IIR_para[NUM_MIC2_IIR_COEFFS];
   short speech_NB_IIR_IN_para[NUM_IIR_COEFFS];
   short speech_NB_IIR_OUT_para[NUM_IIR_COEFFS];
} spcDynParNBIIRData;
typedef struct spcDynParWBDataStruct 
{
   
   unsigned short speech_Mode_para[NUM_MODE_PARAS];
   short speech_WB_FIR_IN_para[NUM_WB_FIR_COEFFS];
   short speech_WB_FIR_OUT_para[NUM_WB_FIR_COEFFS];
} spcDynParWBData;
typedef struct spcDynParWBIIRDataStruct 
{
   short speech_WB_MIC1_IIR_para[NUM_MIC1_IIR_COEFFS];
   short speech_WB_MIC2_IIR_para[NUM_MIC2_IIR_COEFFS];
   short speech_WB_IIR_IN_para[NUM_IIR_COEFFS];
   short speech_WB_IIR_OUT_para[NUM_IIR_COEFFS];

} spcDynParWBIIRData;
typedef struct spcDynParSWBDataStruct 
{
   
   unsigned short speech_Mode_para[NUM_MODE_PARAS];
   short speech_SWB_FIR_IN_para[NUM_SWB_FIR_COEFFS];
   short speech_SWB_FIR_OUT_para[NUM_SWB_FIR_COEFFS];
} spcDynParSWBData;
typedef struct spcDynParSWBIIRDataStruct 
{
   short speech_SWB_MIC1_IIR_para[NUM_MIC1_IIR_COEFFS];
   short speech_SWB_MIC2_IIR_para[NUM_MIC2_IIR_COEFFS];
   short speech_SWB_IIR_IN_para[NUM_IIR_COEFFS];
   short speech_SWB_IIR_OUT_para[NUM_IIR_COEFFS];
} spcDynParSWBIIRData;
typedef struct spcMagiClarityDataStruct 
{   
   short MagiClarity_Para[32];  
} spcMagiClarityData;

typedef struct spcCommonDataStruct 
{   

   unsigned short Common_Para[NUM_COMMON_PARAS];
   unsigned short Debug_info_para[NUM_DEBUG_INFO];
  
} spcCommonData;

typedef struct spcDynParEchoRefForUsbAudioStruct 
{
   
   	bool isEchoRefForUsbAudioOn;
	short chip_delay_with_switch;
	short mic_index; // bit wise definition ordered from main mic to reference mic. Only one bit is set!! bit 0: o17, bit 1: o18, bit 2: o23, bit 3: o24, bit 4: o25, 
	
} spcDynParEchoRefForUsbAudio_T;


short DMNR_NB_REC[NUM_DMNR_PARAM];
short DMNR_NB_LoudSpk[NUM_DMNR_PARAM];
short DMNR_WB_REC[NUM_WB_DMNR_PARAM];
short DMNR_WB_LoudSpk[NUM_WB_DMNR_PARAM];
short DMNR_SWB_REC[NUM_SWB_DMNR_PARAM];
short DMNR_SWB_LoudSpk[NUM_SWB_DMNR_PARAM];
//DMNR header
#define Header_DMNR_NB_REC 0x0011
#define Header_DMNR_NB_LSP 0x0012
#define Header_DMNR_WB_REC 0x0021
#define Header_DMNR_WB_LSP 0x0022
#define Header_DMNR_SWB_REC 0x0031
#define Header_DMNR_SWB_LSP 0x0032


//define data header - voice band 
#define NB_Par 0x10
#define WB_Par 0x20
#define SWB_Par 0x30
//define param header- voice band 
#define VoiceBand_NB (1 << 1) 
#define VoiceBand_WB (1 << 2) 
#define VoiceBand_SWB 0x04
#define VoiceBand_FB 0x08



//define data header -network 

#define GSM_NETWORK 0x01
#define WCDMA_NETWORK 0x02
#define CDMA_NETWORK 0x03
#define VOLTE_NETWORK 0x04
#define C2K_NETWORK 0x05
#define DONT_CARE_NETWORK 0x0F

unsigned short Temp_speech_NB_Mode_para[TOTAL_NETWORK_NUMBER][NUM_MODE_PARAS];
short Temp_speech_NB_FIR_IN_para[TOTAL_NETWORK_NUMBER][NUM_FIR_COEFFS];
short Temp_speech_NB_FIR_OUT_para[TOTAL_NETWORK_NUMBER][NUM_FIR_COEFFS];
short Temp_speech_NB_IIR_IN_para[TOTAL_NETWORK_NUMBER][NUM_IIR_COEFFS];
short Temp_speech_NB_IIR_OUT_para[TOTAL_NETWORK_NUMBER][NUM_IIR_COEFFS];
short Temp_speech_NB_MIC1_IIR_para[TOTAL_NETWORK_NUMBER][NUM_MIC1_IIR_COEFFS];
short Temp_speech_NB_MIC2_IIR_para[TOTAL_NETWORK_NUMBER][NUM_MIC2_IIR_COEFFS];

unsigned short Temp_speech_WB_Mode_para[TOTAL_NETWORK_NUMBER][NUM_MODE_PARAS];
short Temp_speech_WB_FIR_IN_para[TOTAL_NETWORK_NUMBER][NUM_WB_FIR_COEFFS];
short Temp_speech_WB_FIR_OUT_para[TOTAL_NETWORK_NUMBER][NUM_WB_FIR_COEFFS];
short Temp_speech_WB_IIR_IN_para[TOTAL_NETWORK_NUMBER][NUM_IIR_COEFFS];
short Temp_speech_WB_IIR_OUT_para[TOTAL_NETWORK_NUMBER][NUM_IIR_COEFFS];
short Temp_speech_WB_MIC1_IIR_para[TOTAL_NETWORK_NUMBER][NUM_MIC1_IIR_COEFFS];
short Temp_speech_WB_MIC2_IIR_para[TOTAL_NETWORK_NUMBER][NUM_MIC2_IIR_COEFFS];

unsigned short Temp_speech_SWB_Mode_para[TOTAL_NETWORK_NUMBER][NUM_MODE_PARAS];
short Temp_speech_SWB_FIR_IN_para[TOTAL_NETWORK_NUMBER][NUM_SWB_FIR_COEFFS];
short Temp_speech_SWB_FIR_OUT_para[TOTAL_NETWORK_NUMBER][NUM_SWB_FIR_COEFFS];
short Temp_speech_SWB_IIR_IN_para[TOTAL_NETWORK_NUMBER][NUM_IIR_COEFFS];
short Temp_speech_SWB_IIR_OUT_para[TOTAL_NETWORK_NUMBER][NUM_IIR_COEFFS];
short Temp_speech_SWB_MIC1_IIR_para[TOTAL_NETWORK_NUMBER][NUM_MIC1_IIR_COEFFS];
short Temp_speech_SWB_MIC2_IIR_para[TOTAL_NETWORK_NUMBER][NUM_MIC2_IIR_COEFFS];





// ----------------------------------------------------------------------------
// Global Variable
// ----------------------------------------------------------------------------

static _SPC_T gSpc;

__attribute__((aligned (4)))static kal_uint8 emDataBuf[4096];


static uint16 gSpc_networkStatus = 0xFF;

// ----------------------------------------------------------------------------
// Macro function
// ----------------------------------------------------------------------------

#define IS_SPC_APP_USED(app)     ((gSpc.spcAppUsage & (1 << (app))) != 0)
#define SET_SPC_APP_USAGE(app)   (gSpc.spcAppUsage |= (1 << (app)))
#define CLR_SPC_APP_USAGE(app)   (gSpc.spcAppUsage &= (~(1 << (app))))


#define IS_SPC_EM_INIT(emPara)   ((gSpc.spcEmInit& (1 << (emPara))) != 0)
#define SET_SPC_EM_INIT(emPara)    (gSpc.spcEmInit |= (1 << (emPara)))

/*
#if ((defined(MT6280) || defined(MT6290)) && (defined(__SMART_PHONE_MODEM__))) || defined(SPH_CHIP_BACK_PHONECALL_USE)
// for super dongle project on data card chip, MD reset scenario is useless
// So the protection is unnecessary and un-sync with AP side, so the request is always done
#define IS_SPC_ID_SPEECH_CUSTOM_DATA_REQUEST_DONE (true)
#else
#define IS_SPC_ID_SPEECH_CUSTOM_DATA_REQUEST_DONE (IS_SPC_EM_INIT(SPC_EM_INIT_COMMON)) // using comm parameter data notify as EM data request ack
#endif
*/

// ----------------------------------------------------------------------------
// Internal Init Related
// ----------------------------------------------------------------------------

// following constant inside ./custom/driver/common/aud_common.c
extern const unsigned short Speech_Normal_Mode_Para[16];
extern const unsigned short Speech_Earphone_Mode_Para[16];
extern const unsigned short Speech_LoudSpk_Mode_Para[16];
extern const unsigned short Speech_BT_Earphone_Mode_Para[16];
extern const unsigned short Speech_BT_Cordless_Mode_Para[16];
extern const unsigned short Speech_CARKIT_Mode_Para[16];
extern const unsigned short Speech_AUX1_Mode_Para[16];
extern const unsigned short Speech_AUX2_Mode_Para[16];
extern const unsigned short WB_Speech_Normal_Mode_Para[16];
extern const unsigned short WB_Speech_Earphone_Mode_Para[16];
extern const unsigned short WB_Speech_LoudSpk_Mode_Para[16];
extern const unsigned short WB_Speech_BT_Earphone_Mode_Para[16];
extern const unsigned short WB_Speech_BT_Cordless_Mode_Para[16];
extern const unsigned short WB_Speech_CARKIT_Mode_Para[16];
extern const unsigned short WB_Speech_AUX1_Mode_Para[16];
extern const unsigned short WB_Speech_AUX2_Mode_Para[16];


extern const signed short WB_DMNR_Para[76];
extern const signed short LSpk_WB_DMNR_Para[76];
extern const signed short DMNR_Para[44];
extern const signed short LSpk_DMNR_Para[44];



/**

*/
extern const signed short Speech_All_Pass_IIR_Coeff[42] ;
extern const signed short Sph_Mic1_IIR_In[20] ;
extern const signed short Sph_Mic2_IIR_In[20] ;
unsigned short   default_speech_mode_para[TOTAL_NETWORK_NUMBER][NUM_MODE_PARAS];
signed short	 default_Speech_Input_FIR_Coeff[TOTAL_NETWORK_NUMBER][NUM_FIR_COEFFS];
signed short	 default_Speech_Output_FIR_Coeff[TOTAL_NETWORK_NUMBER][NUM_FIR_COEFFS];
signed short	 default_Speech_Input_IIR_Coeff[TOTAL_NETWORK_NUMBER][NUM_IIR_COEFFS];
signed short	 default_Speech_Output_IIR_Coeff[TOTAL_NETWORK_NUMBER][NUM_IIR_COEFFS];
signed short	 default_Speech_MIC1_IIR_Coeff[TOTAL_NETWORK_NUMBER][NUM_MIC1_IIR_COEFFS];
signed short	 default_Speech_MIC2_IIR_Coeff[TOTAL_NETWORK_NUMBER][NUM_MIC2_IIR_COEFFS];
unsigned short   default_WB_speech_mode_para[TOTAL_NETWORK_NUMBER][NUM_MODE_PARAS];
signed short	 default_WB_Speech_Input_FIR_Coeff[TOTAL_NETWORK_NUMBER][NUM_WB_FIR_COEFFS];
signed short	 default_WB_Speech_Output_FIR_Coeff[TOTAL_NETWORK_NUMBER][NUM_WB_FIR_COEFFS];
signed short	 default_WB_Speech_Input_IIR_Coeff[TOTAL_NETWORK_NUMBER][NUM_IIR_COEFFS];
signed short	 default_WB_Speech_Output_IIR_Coeff[TOTAL_NETWORK_NUMBER][NUM_IIR_COEFFS];
signed short	 default_WB_Speech_MIC1_IIR_Coeff[TOTAL_NETWORK_NUMBER][NUM_MIC1_IIR_COEFFS];
signed short	 default_WB_Speech_MIC2_IIR_Coeff[TOTAL_NETWORK_NUMBER][NUM_MIC2_IIR_COEFFS];
unsigned short   default_SWB_speech_mode_para[TOTAL_NETWORK_NUMBER][NUM_MODE_PARAS];
signed short	 default_SWB_Speech_Input_FIR_Coeff[TOTAL_NETWORK_NUMBER][NUM_SWB_FIR_COEFFS];
signed short	 default_SWB_Speech_Output_FIR_Coeff[TOTAL_NETWORK_NUMBER][NUM_SWB_FIR_COEFFS];
signed short	 default_SWB_Speech_Input_IIR_Coeff[TOTAL_NETWORK_NUMBER][NUM_IIR_COEFFS];
signed short	 default_SWB_Speech_Output_IIR_Coeff[TOTAL_NETWORK_NUMBER][NUM_IIR_COEFFS];
signed short	 default_SWB_Speech_MIC1_IIR_Coeff[TOTAL_NETWORK_NUMBER][NUM_MIC1_IIR_COEFFS];
signed short	 default_SWB_Speech_MIC2_IIR_Coeff[TOTAL_NETWORK_NUMBER][NUM_MIC2_IIR_COEFFS];


void spc_EmInit(kal_bool isNeedBasic, kal_bool isNeedNb,kal_bool isNeedWb,kal_bool isNeedSWb, kal_bool isNeedDmnr, kal_bool isNeedLspkDmnr,kal_bool isNeedIIR)
{
	kal_trace(TRACE_INFO, SPC_EM_DEFAULT_INIT, isNeedBasic, isNeedNb,isNeedWb, isNeedSWb,isNeedDmnr, isNeedLspkDmnr,isNeedIIR);
	
	// ====== parameters from EM =======	
	if(isNeedBasic){
		// common parameter
		uint16 commonP[] = DEFAULT_SPEECH_COMMON_PARA;
		L1SP_LoadCommonSpeechPara(commonP);
	
	}
    if(isNeedNb){

		// mode parameter  , default use normal mode,GSM,NB 
		uint8 count;
		for(count=0; count<TOTAL_NETWORK_NUMBER; count++)
		{
			memcpy(default_speech_mode_para[count], Speech_Normal_Mode_Para, 16*sizeof(uint16)) ;
		}
		l1sp_setAllSpeechModePara((kal_uint16 *)default_speech_mode_para, TOTAL_NETWORK_NUMBER * NUM_MODE_PARAS);
	   // SPE_LoadSpeechPara(NULL, gSpe.sph_ModePara[0], NULL, NULL); // l1sp.sph_v_para no one use it.	
	   
	
		// FIR , default use normal mode,GSM,NB 
		for(count=0; count<TOTAL_NETWORK_NUMBER; count++)
		{
			memcpy(default_Speech_Input_FIR_Coeff[count], WB_Speech_Input_FIR_Coeff[0], NUM_FIR_COEFFS*sizeof(int16)) ;
		}
		l1sp_setAllSpeechFirCoeff_InputOnly((int16 *)default_Speech_Input_FIR_Coeff, TOTAL_NETWORK_NUMBER*NUM_FIR_COEFFS);
		for(count=0; count<TOTAL_NETWORK_NUMBER; count++)
		{
			memcpy(default_Speech_Output_FIR_Coeff[count], WB_Speech_Output_FIR_Coeff[0], NUM_FIR_COEFFS*sizeof(int16)) ;
		}
		l1sp_setAllSpeechFirCoeff_OutputOnly((int16 *)default_Speech_Output_FIR_Coeff, TOTAL_NETWORK_NUMBER*NUM_FIR_COEFFS);
		//AM_WriteFirCoeffs( gSpe.sph_InFirCoeff[0], gSpe.sph_OutFirCoeff[0] );

	}
	if(isNeedWb){
		// WB FIR

		// in customer folder's Audcoeff.c
        uint8 count;
		
		
        // WB mode parameter  , default use normal mode,GSM,NB 
		for(count=0; count<TOTAL_NETWORK_NUMBER; count++)
		{
			memcpy(default_WB_speech_mode_para[count], WB_Speech_Normal_Mode_Para, 16*sizeof(uint16)) ;
		}
		l1sp_setAllWbSpeechModePara((kal_uint16* )default_WB_speech_mode_para, TOTAL_NETWORK_NUMBER * NUM_MODE_PARAS);
	    //SPE_LoadSpeechPara(NULL, NULL, NULL,gSpe.sph_WbModePara[0] );

		
		extern const signed short WB_Speech_Input_FIR_Coeff[6][90];
		extern const signed short WB_Speech_Output_FIR_Coeff[6][90];
		
		

		// WB FIR , default use normal mode,GSM,NB 
		for(count=0; count<TOTAL_NETWORK_NUMBER; count++)
		{
			memcpy(default_WB_Speech_Input_FIR_Coeff[count], WB_Speech_Input_FIR_Coeff[0], NUM_WB_FIR_COEFFS*sizeof(int16)) ;
		}
		
		l1sp_setAllWbSpeechFirCoeff_InputOnly((kal_int16 *)default_WB_Speech_Input_FIR_Coeff, TOTAL_NETWORK_NUMBER*NUM_WB_FIR_COEFFS);
		for(count=0; count<TOTAL_NETWORK_NUMBER; count++)
		{
			memcpy(default_WB_Speech_Output_FIR_Coeff[count], WB_Speech_Output_FIR_Coeff[0], NUM_WB_FIR_COEFFS*sizeof(int16)) ;
		}
		l1sp_setAllWbSpeechFirCoeff_OutputOnly((int16 *)default_WB_Speech_Output_FIR_Coeff, TOTAL_NETWORK_NUMBER*NUM_WB_FIR_COEFFS);
		//AM_WriteWbFirCoeffs(gSpe.sph_WbInFirCoeff[0],gSpe.sph_WbOutFirCoeff[0]);	
	}
    if(isNeedSWb){
		// SWB FIR		
        // SWB mode parameter  , default use normal mode,GSM,NB 
		uint8 count;
		for(count=0; count<TOTAL_NETWORK_NUMBER; count++)
		{
			memcpy(default_SWB_speech_mode_para[count], WB_Speech_Normal_Mode_Para, 16*sizeof(uint16)) ;
		}
		l1sp_setAllSWbSpeechModePara((kal_uint16* )default_SWB_speech_mode_para, TOTAL_NETWORK_NUMBER * NUM_MODE_PARAS);
	    //SPE_LoadSpeechPara(NULL, NULL, NULL,gSpe.sph_WbModePara[0] );

		
		extern const signed short WB_Speech_Input_FIR_Coeff[6][90];
		extern const signed short WB_Speech_Output_FIR_Coeff[6][90];
		
		

		// WB FIR , default use normal mode,GSM,NB 
		for(count=0; count<TOTAL_NETWORK_NUMBER; count++)
		{
			memcpy(default_SWB_Speech_Input_FIR_Coeff[count], WB_Speech_Input_FIR_Coeff[0], NUM_SWB_FIR_COEFFS*sizeof(int16)) ;
		}
		l1sp_setAllSWbSpeechFirCoeff_InputOnly((kal_int16 *)default_SWB_Speech_Input_FIR_Coeff, TOTAL_NETWORK_NUMBER*NUM_SWB_FIR_COEFFS);
		for(count=0; count<TOTAL_NETWORK_NUMBER; count++)
		{
			memcpy(default_SWB_Speech_Output_FIR_Coeff[count], WB_Speech_Output_FIR_Coeff[0], NUM_SWB_FIR_COEFFS*sizeof(int16)) ;
		}
		l1sp_setAllSWbSpeechFirCoeff_OutputOnly((int16 *)default_SWB_Speech_Output_FIR_Coeff, TOTAL_NETWORK_NUMBER*NUM_SWB_FIR_COEFFS);
		//AM_WriteWbFirCoeffs(gSpe.sph_WbInFirCoeff[0],gSpe.sph_WbOutFirCoeff[0]);
		

	}
	if(isNeedIIR){
		//IIR 
		uint8 count;
        for(count=0; count<TOTAL_NETWORK_NUMBER; count++)
		{
			memcpy(default_Speech_Input_IIR_Coeff[count], Speech_All_Pass_IIR_Coeff, NUM_IIR_COEFFS*sizeof(int16)) ;
		}
		l1sp_setAllSpeechIirCoeff_InputOnly((int16 *)default_Speech_Input_IIR_Coeff, TOTAL_NETWORK_NUMBER*NUM_IIR_COEFFS);
		for(count=0; count<TOTAL_NETWORK_NUMBER; count++)
		{
			memcpy(default_Speech_Output_IIR_Coeff[count], Speech_All_Pass_IIR_Coeff, NUM_IIR_COEFFS*sizeof(int16)) ;
		}
		l1sp_setAllSpeechIirCoeff_OutputOnly((int16 *)default_Speech_Output_IIR_Coeff, TOTAL_NETWORK_NUMBER*NUM_IIR_COEFFS);
		for(count=0; count<TOTAL_NETWORK_NUMBER; count++)
		{
			memcpy(default_Speech_MIC1_IIR_Coeff[count], Sph_Mic1_IIR_In, NUM_MIC1_IIR_COEFFS*sizeof(int16)) ;
		}
		l1sp_setAllSpeechMic1IirCoeff((int16 *)default_Speech_MIC1_IIR_Coeff, TOTAL_NETWORK_NUMBER*NUM_MIC1_IIR_COEFFS);
		for(count=0; count<TOTAL_NETWORK_NUMBER; count++)
		{
			memcpy(default_Speech_MIC2_IIR_Coeff[count], Sph_Mic2_IIR_In, NUM_MIC2_IIR_COEFFS*sizeof(int16)) ;
		}
		l1sp_setAllSpeechMic2IirCoeff((int16 *)default_Speech_MIC2_IIR_Coeff, TOTAL_NETWORK_NUMBER*NUM_MIC2_IIR_COEFFS);
		
        for(count=0; count<TOTAL_NETWORK_NUMBER; count++)
		{
			memcpy(default_WB_Speech_Input_IIR_Coeff[count], Speech_All_Pass_IIR_Coeff, NUM_IIR_COEFFS*sizeof(int16)) ;
		}
		l1sp_setAllWBSpeechIirCoeff_InputOnly((int16 *)default_WB_Speech_Input_IIR_Coeff, TOTAL_NETWORK_NUMBER*NUM_IIR_COEFFS);
		for(count=0; count<TOTAL_NETWORK_NUMBER; count++)
		{
			memcpy(default_WB_Speech_Output_IIR_Coeff[count], Speech_All_Pass_IIR_Coeff, NUM_IIR_COEFFS*sizeof(int16)) ;
		}
		l1sp_setAllWBSpeechIirCoeff_OutputOnly((int16 *)default_WB_Speech_Output_IIR_Coeff, TOTAL_NETWORK_NUMBER*NUM_IIR_COEFFS);
		for(count=0; count<TOTAL_NETWORK_NUMBER; count++)
		{
			memcpy(default_WB_Speech_MIC1_IIR_Coeff[count], Sph_Mic1_IIR_In, NUM_MIC1_IIR_COEFFS*sizeof(int16)) ;
		}
		l1sp_setAllWBSpeechMic1IirCoeff((int16 *)default_WB_Speech_MIC1_IIR_Coeff, TOTAL_NETWORK_NUMBER*NUM_MIC1_IIR_COEFFS);
		for(count=0; count<TOTAL_NETWORK_NUMBER; count++)
		{
			memcpy(default_WB_Speech_MIC2_IIR_Coeff[count], Sph_Mic2_IIR_In, NUM_MIC2_IIR_COEFFS*sizeof(int16)) ;
		}
		l1sp_setAllWBSpeechMic2IirCoeff((int16 *)default_WB_Speech_MIC2_IIR_Coeff, TOTAL_NETWORK_NUMBER*NUM_MIC2_IIR_COEFFS);
		
        for(count=0; count<TOTAL_NETWORK_NUMBER; count++)
		{
			memcpy(default_SWB_Speech_Input_IIR_Coeff[count], Speech_All_Pass_IIR_Coeff, NUM_IIR_COEFFS*sizeof(int16)) ;
		}
		l1sp_setAllSWBSpeechIirCoeff_InputOnly((int16 *)default_SWB_Speech_Input_IIR_Coeff, TOTAL_NETWORK_NUMBER*NUM_IIR_COEFFS);
		for(count=0; count<TOTAL_NETWORK_NUMBER; count++)
		{
			memcpy(default_SWB_Speech_Output_IIR_Coeff[count], Speech_All_Pass_IIR_Coeff, NUM_IIR_COEFFS*sizeof(int16)) ;
		}
		l1sp_setAllSWBSpeechIirCoeff_OutputOnly((int16 *)default_SWB_Speech_Output_IIR_Coeff, TOTAL_NETWORK_NUMBER*NUM_IIR_COEFFS);
		for(count=0; count<TOTAL_NETWORK_NUMBER; count++)
		{
			memcpy(default_SWB_Speech_MIC1_IIR_Coeff[count], Sph_Mic1_IIR_In, NUM_MIC1_IIR_COEFFS*sizeof(int16)) ;
		}
		l1sp_setAllSWBSpeechMic1IirCoeff((int16 *)default_SWB_Speech_MIC1_IIR_Coeff, TOTAL_NETWORK_NUMBER*NUM_MIC1_IIR_COEFFS);
		for(count=0; count<TOTAL_NETWORK_NUMBER; count++)
		{
			memcpy(default_SWB_Speech_MIC2_IIR_Coeff[count], Sph_Mic2_IIR_In, NUM_MIC2_IIR_COEFFS*sizeof(int16)) ;
		}
		l1sp_setAllSWBSpeechMic2IirCoeff((int16 *)default_SWB_Speech_MIC2_IIR_Coeff, TOTAL_NETWORK_NUMBER*NUM_MIC2_IIR_COEFFS);
		
	}

	if(isNeedDmnr){
		L1SP_SetWbDMNRPara(WB_DMNR_Para);
		L1SP_SetDMNRPara(DMNR_Para);		
	}

	if(isNeedLspkDmnr){ // load param when begin run
		L1SP_SetLSpkWbDMNRPara(LSpk_WB_DMNR_Para);
		L1SP_SetLSpkDMNRPara(LSpk_DMNR_Para);
	}
	
	// loading!!
	// if(isNeedBasic || isNeedWb) {
	// 	L1SP_LoadSpeechPara();	
	// }
}


/**
	@app: app to be enable
	@return: check result, true for pass, false for fail
*/
bool spc_mainAppOnCheck(MSG_SPC_APP_T app) // , bool byPassEmDataCheck)
{
/*
	if((!IS_SPC_ID_SPEECH_CUSTOM_DATA_REQUEST_DONE) && (false == byPassEmDataCheck)){ // prevent speech on before EM data sending
		kal_trace( TRACE_INFO, SPC_ILLEGAL_SPC_APP_BEHAVIOR, app, app, 1);
		return false;
	}
*/
	// other related check
	if(SPC_APP_SPEECH_USAGE != app) {
		if(IS_SPC_APP_USED(SPC_APP_SPEECH_USAGE)) {
			kal_trace( TRACE_INFO, SPC_ILLEGAL_SPC_APP_BEHAVIOR_CHECK, app, SPC_APP_SPEECH_USAGE, SPC_APP_SPEECH_USAGE, gSpc.spcAppUsage);
			
			ASSERT(0);

			return false;
		}
	}

	if(SPC_APP_ACLOOPBACK_USAGE != app) {
		if(IS_SPC_APP_USED(SPC_APP_ACLOOPBACK_USAGE)) {
			kal_trace( TRACE_INFO, SPC_ILLEGAL_SPC_APP_BEHAVIOR_CHECK, app, SPC_APP_ACLOOPBACK_USAGE, SPC_APP_ACLOOPBACK_USAGE, gSpc.spcAppUsage);
			
			ASSERT(0);

			return false;
		}
	}
	
	

	if(SPC_APP_HOLD_USAGE != app) {
		if(IS_SPC_APP_USED(SPC_APP_HOLD_USAGE)) {
			kal_trace( TRACE_INFO, SPC_ILLEGAL_SPC_APP_BEHAVIOR_CHECK, app, SPC_APP_HOLD_USAGE, SPC_APP_HOLD_USAGE, gSpc.spcAppUsage);
			
			ASSERT(0);

			return false;
		}
	}

	if(SPC_APP_HOSTED_USAGE != app) {
		if(IS_SPC_APP_USED(SPC_APP_HOSTED_USAGE)) {
			kal_trace( TRACE_INFO, SPC_ILLEGAL_SPC_APP_BEHAVIOR_CHECK, app, SPC_APP_HOSTED_USAGE, SPC_APP_HOSTED_USAGE, gSpc.spcAppUsage);
			
			ASSERT(0);

			return false;
		}
	}

	if(SPC_APP_PCMROUTER_USAGE != app) {
		if(IS_SPC_APP_USED(SPC_APP_PCMROUTER_USAGE)) {
			kal_trace( TRACE_INFO, SPC_ILLEGAL_SPC_APP_BEHAVIOR_CHECK, app, SPC_APP_PCMROUTER_USAGE, SPC_APP_PCMROUTER_USAGE, gSpc.spcAppUsage);
			
			ASSERT(0);

			return false;
		}
	}

	if(SPC_APP_MERGE_SPH_USAGE != app) {
		if(IS_SPC_APP_USED(SPC_APP_MERGE_SPH_USAGE)) {
			kal_trace( TRACE_INFO, SPC_ILLEGAL_SPC_APP_BEHAVIOR_CHECK, app, SPC_APP_MERGE_SPH_USAGE, SPC_APP_MERGE_SPH_USAGE, gSpc.spcAppUsage);
			
			ASSERT(0);

			return false;
		}
	}

	return true;
}


// ----------------------------------------------------------------------------
// Codec Related
// ----------------------------------------------------------------------------
/*
#define CODEC_INFO_PROP_CODEC "codec="
#define CODEC_INFO_PROP_ISHDV "isHdV="
#define CODEC_INFO_PROP_HDVOP "HDVOp="
#define CODEC_INFO_PROP_SR    "sr="
#define CODEC_INFO_PROP_BR    "br="
#define CODEC_INFO_PROP_FS    "fs="
#define CODEC_INFO_PROP_RR    "rr="
#define CODEC_INFO_PROP_SEPERATER ";"


#define CODEC_INFO_PROP_CODEC_VALUE_FR "FR"
#define CODEC_INFO_PROP_CODEC_VALUE_HR "HR"
#define CODEC_INFO_PROP_CODEC_VALUE_EFR "EFR"
#define CODEC_INFO_PROP_CODEC_VALUE_AMR "AMR"
#define CODEC_INFO_PROP_CODEC_VALUE_AWB "AWB"

#define CODEC_INFO_PROP_ISHDV_VALUE_Y "Y"
#define CODEC_INFO_PROP_ISHDV_VALUE_N "N"
*/

#define SPC_PROP_CODEC_LEN 92 

typedef struct {
	char codecInfo[SPC_PROP_CODEC_LEN];
	char codecOp[SPC_PROP_CODEC_LEN];
} SPC_CODEC_INFO_STRUCT;

static struct {
	uint32 curSpeechMode;
	uint16 curRateInSoCodec;
	SPC_CODEC_INFO_STRUCT info;
} gSpc_codec_info;

void spc_codecInfoInit(void)
{
	gSpc_codec_info.curSpeechMode = 0xffffffff;
	gSpc_codec_info.curRateInSoCodec = 0xffff;
	memset(&(gSpc_codec_info.info), '\0', sizeof(SPC_CODEC_INFO_STRUCT));
}

void spc_sendCodecInfoNotify(void)
{
	spcBufInfo info;

	info.syncWord = 0x1234;
	info.type = AUD_CCCI_STRMBUF_TYPE_NW_CODEC_INFO;
	info.length = sizeof(SPC_CODEC_INFO_STRUCT); // currently, fix the buffer size in WB 

	SpcIO_WriteDataToAp(&info, sizeof(spcBufInfo), 
			 &(gSpc_codec_info.info), sizeof(SPC_CODEC_INFO_STRUCT), NULL, 0,
			 SPCIO_MSG_FROM_SPC_NW_CODEC_INFO_NOTIFY);
	kal_trace(TRACE_INFO, SPC_CODEC_NOTIFY_TO_AP, gSpc_codec_info.info.codecInfo, gSpc_codec_info.info.codecOp);
}

void spc_codecInfoNotify(uint32 codec)
{

	kal_trace(TRACE_INFO, SPC_CODEC_NOTIFY_IN, gSpc_codec_info.curSpeechMode, codec);
	
	if(false == IS_SPC_APP_USED(SPC_APP_SPEECH_USAGE)){
		// just leave log and return			
		kal_trace( TRACE_INFO, SPC_APP_DATA_SEND_FAIL, SPC_APP_SPEECH_USAGE, SPC_APP_SPEECH_USAGE, 1);
		return; 
	} 
	
	// if codec&rate did not change, just return
	if(codec== gSpc_codec_info.curSpeechMode) {
		return; 
	}

	// prepare codec sending
	memset(&(gSpc_codec_info.info), 0, sizeof(SPC_CODEC_INFO_STRUCT));

	if(0 == codec) { // FR,		
		
		strcpy(gSpc_codec_info.info.codecInfo, "codec=FR;sr=8k;");
		
		strcpy(gSpc_codec_info.info.codecOp, "OM=N;");
	} else if (1 == codec) {
		strcpy(gSpc_codec_info.info.codecInfo, "codec=HR;sr=8k;");

		strcpy(gSpc_codec_info.info.codecOp, "OM=N;");
	} else if (2 == codec) {
		strcpy(gSpc_codec_info.info.codecInfo, "codec=EFR;sr=8k;");

		strcpy(gSpc_codec_info.info.codecOp, "OM=N;");
	} else if ((codec >= 0x20 && codec<=0x28) ||(codec >= 0xD0 && codec <= 0xDF)) { // AWB, EVS-AWB
		uint8 bitRate = (codec&0xF);
		if(codec >= 0x20 && codec<=0x28) { // AWB
			strcpy(gSpc_codec_info.info.codecInfo, "codec=AWB;sr=16k;");
		} else { //EVS-AWB
			strcpy(gSpc_codec_info.info.codecInfo, "codec=EVSAWB;sr=16k;");
		}

		// bit rate
		if ( 0x0 == bitRate) { // 6.60
			strcat(gSpc_codec_info.info.codecInfo, "br=6.60;"); 
		} else if ( 0x1 == bitRate) { // 8.85
			strcat(gSpc_codec_info.info.codecInfo, "br=8.85;"); 
		} else if ( 0x2 == bitRate) { // 12.65
			strcat(gSpc_codec_info.info.codecInfo, "br=12.65;"); 
		} else if ( 0x3 == bitRate) { // 14.25
			strcat(gSpc_codec_info.info.codecInfo, "br=14.25;"); 
		} else if ( 0x4 == bitRate) { // 15.85
			strcat(gSpc_codec_info.info.codecInfo, "br=15.85;"); 
		} else if ( 0x5 == bitRate) { // 18.25
			strcat(gSpc_codec_info.info.codecInfo, "br=18.25;"); 
		} else if ( 0x6 == bitRate) { // 19.85
			strcat(gSpc_codec_info.info.codecInfo, "br=19.85;"); 
		} else if ( 0x7 == bitRate) { // 23.05
			strcat(gSpc_codec_info.info.codecInfo, "br=23.05;"); 
		} else if ( 0x8 == bitRate) { // 23.85
			strcat(gSpc_codec_info.info.codecInfo, "br=23.85;"); 
		} else { // unkonw codec 
			kal_trace(TRACE_WARNING, SPC_CODEC_NOTIFY_UNKNOW, codec, 0xffff, 1);
		}

		strcpy(gSpc_codec_info.info.codecOp, "OM=Y;");
	} else if(codec >=3 && codec <= 0xA) { // from 3~0x1f, AMR 
		strcpy(gSpc_codec_info.info.codecInfo, "codec=AMR;sr=8k;");

		// bit rate
		if (3 == codec) { // 12.2k
			strcat(gSpc_codec_info.info.codecInfo, "br=12.20;"); 
		} else if (4 == codec) { // 10.2K
			strcat(gSpc_codec_info.info.codecInfo, "br=10.20;");
		} else if (5 == codec) { // 7.95K
			strcat(gSpc_codec_info.info.codecInfo, "br=7.95;");
		} else if (6 == codec) { // 7.4K
			strcat(gSpc_codec_info.info.codecInfo, "br=7.40;");
		} else if (7 == codec) { // 6.7K
			strcat(gSpc_codec_info.info.codecInfo, "br=6.70;");
		} else if (8 == codec) { // 5.9K
			strcat(gSpc_codec_info.info.codecInfo, "br=5.90;");
		} else if (9 == codec) { // 5.15K 
			strcat(gSpc_codec_info.info.codecInfo, "br=5.15;");
		} else if (0xA == codec) { // 4.75K
			strcat(gSpc_codec_info.info.codecInfo, "br=4.75;");
		} else { // unkonw codec 
			kal_trace(TRACE_WARNING, SPC_CODEC_NOTIFY_UNKNOW, codec, 0xffff, 2);
		}
		strcpy(gSpc_codec_info.info.codecOp, "OM=N;");
	}else if(codec >= 0x80 && codec <= 0xBF) { // EVS
		uint8 bitRate = (codec&0xF);
		
		if ( codec < 0x90 ) {
			strcpy(gSpc_codec_info.info.codecInfo, "codec=EVS;sr=8k;");
			strcpy(gSpc_codec_info.info.codecOp, "OM=N;");
		} else if ( codec < 0xA0 ) {
			strcpy(gSpc_codec_info.info.codecInfo, "codec=EVS;sr=16k;");
			strcpy(gSpc_codec_info.info.codecOp, "OM=Y;");
		} else if ( codec < 0xB0 ) {
	 		strcpy(gSpc_codec_info.info.codecInfo, "codec=EVS;sr=32k;");
			strcpy(gSpc_codec_info.info.codecOp, "OM=Y;");
		} else {
			strcpy(gSpc_codec_info.info.codecInfo, "codec=EVS;sr=48k;");
			strcpy(gSpc_codec_info.info.codecOp, "OM=Y;");
		}

		// bit rate
		if ( 0x0 == bitRate) { // 2.80
			strcat(gSpc_codec_info.info.codecInfo, "br=2.80;"); 
		} else if ( 0x1 == bitRate) { // 7.20
			strcat(gSpc_codec_info.info.codecInfo, "br=7.20;"); 
		} else if ( 0x2 == bitRate) { // 8.00
			strcat(gSpc_codec_info.info.codecInfo, "br=8.00;"); 
		} else if ( 0x3 == bitRate) { // 9.60
			strcat(gSpc_codec_info.info.codecInfo, "br=9.60"); 
		} else if ( 0x4 == bitRate) { // 13.20
			strcat(gSpc_codec_info.info.codecInfo, "br=13.20;"); 
		} else if ( 0x5 == bitRate) { // 16.40
			strcat(gSpc_codec_info.info.codecInfo, "br=16.40;"); 
		} else if ( 0x6 == bitRate) { // 24.40
			strcat(gSpc_codec_info.info.codecInfo, "br=24.40;"); 
		} else if ( 0x7 == bitRate) { // 32.00
			strcat(gSpc_codec_info.info.codecInfo, "br=32.00;"); 
		} else if ( 0x8 == bitRate) { // 48.00
			strcat(gSpc_codec_info.info.codecInfo, "br=48.00;"); 
		} else if ( 0x9 == bitRate) { // 64.00
			strcat(gSpc_codec_info.info.codecInfo, "br=64.00;"); 
		} else if ( 0xA == bitRate) { // 96.00
			strcat(gSpc_codec_info.info.codecInfo, "br=96.00;"); 
		} else if ( 0xB == bitRate) { // 128.00
			strcat(gSpc_codec_info.info.codecInfo, "br=128.00;"); 
		} else { // unkonw codec 
			kal_trace(TRACE_WARNING, SPC_CODEC_NOTIFY_UNKNOW, codec, 0xffff, 3);
		}
		
	} else if ( 0x60 == codec ) { // g711
		strcpy(gSpc_codec_info.info.codecInfo, "codec=G711;sr=8k;");
		strcpy(gSpc_codec_info.info.codecOp, "OM=N;");
	} else if ( 0x61 == codec ) { // 722
		strcpy(gSpc_codec_info.info.codecInfo, "codec=G722;sr=16k;");
		strcpy(gSpc_codec_info.info.codecOp, "OM=Y;");
	} else if ( 0x62 == codec ) { // g732.1		
		strcpy(gSpc_codec_info.info.codecInfo, "codec=G723_1;sr=8k;");
		strcpy(gSpc_codec_info.info.codecOp, "OM=N;");
	} else if ( 0x63 == codec ) { // g726
		strcpy(gSpc_codec_info.info.codecInfo, "codec=G726;sr=8k;");
		strcpy(gSpc_codec_info.info.codecOp, "OM=N;");
	} else if ( 0x64 == codec ) { // g729,		
		strcpy(gSpc_codec_info.info.codecInfo, "codec=G729;sr=8k;");
		strcpy(gSpc_codec_info.info.codecOp, "OM=N;");
	} else if (codec >= 0x30 && codec <= 0x35) {

		if( 0x30 == codec ) {  // SAL_C2K_COD_QCELP8K
			stpcpy(gSpc_codec_info.info.codecInfo, "codec=S01;");
			stpcpy(gSpc_codec_info.info.codecOp, "OM=N;");
		} else if ( 0x31 == codec ) {  // SAL_C2K_COD_QCELP13K
			stpcpy(gSpc_codec_info.info.codecInfo, "codec=S017;");
			stpcpy(gSpc_codec_info.info.codecOp, "OM=N;");
		} else if ( 0x32 == codec ) {  // SAL_C2K_COD_EVRCA
			stpcpy(gSpc_codec_info.info.codecInfo, "codec=S03;");
			stpcpy(gSpc_codec_info.info.codecOp, "OM=N;");
		} else if ( 0x33 == codec ) {  // SAL_C2K_COD_EVRCB
			stpcpy(gSpc_codec_info.info.codecInfo, "codec=S068;");
			stpcpy(gSpc_codec_info.info.codecOp, "OM=N;");
		} else if ( 0x34 == codec ) {  // SAL_C2K_COD_EVRCNW_NB
			stpcpy(gSpc_codec_info.info.codecInfo, "codec=S073;");
			stpcpy(gSpc_codec_info.info.codecOp, "OM=N;");
		} else if ( 0x35 == codec ) {  // SAL_C2K_COD_EVRCNW_WB
			stpcpy(gSpc_codec_info.info.codecInfo, "codec=S073;");
			stpcpy(gSpc_codec_info.info.codecOp, "OM=Y;");
		}

		gSpc_codec_info.curRateInSoCodec = 0xffff; // reset only when SO codec change. 
	
	}
	else {
		kal_trace(TRACE_WARNING, SPC_CODEC_NOTIFY_UNKNOW, codec, 0xffff, 4);
	}

	// send to AP
	spc_sendCodecInfoNotify();
	
	// update codec
	gSpc_codec_info.curSpeechMode = codec;
	
}

void spc_codecInfoNotify_soRateUpdate(uint16 newRate)
{
	if (gSpc_codec_info.curSpeechMode >= 0x30 && gSpc_codec_info.curSpeechMode <= 0x35) {

		// if codec&rate did not change, just return
		if(newRate == gSpc_codec_info.curRateInSoCodec) {
			return; 
		}
		
		switch(newRate){
			case 0:	strcat(gSpc_codec_info.info.codecInfo, "rr=0;"); break;
			case 1:	strcat(gSpc_codec_info.info.codecInfo, "rr=1;"); break;
			case 2:	strcat(gSpc_codec_info.info.codecInfo, "rr=2;"); break;
			case 3:	strcat(gSpc_codec_info.info.codecInfo, "rr=3;"); break;
			case 4:	strcat(gSpc_codec_info.info.codecInfo, "rr=4;"); break;
			case 5:	strcat(gSpc_codec_info.info.codecInfo, "rr=5;"); break;
			case 6:	strcat(gSpc_codec_info.info.codecInfo, "rr=6;"); break;
			case 7:	strcat(gSpc_codec_info.info.codecInfo, "rr=7;"); break;
			default: break;
		}
		
		gSpc_codec_info.curRateInSoCodec = newRate; 

		// send to AP
		spc_sendCodecInfoNotify();
	} else {
		kal_trace(TRACE_WARNING, SPC_CODEC_NOTIFY_UNKNOW, gSpc_codec_info.curSpeechMode, newRate, 5);
	}
}


// ----------------------------------------------------------------------------
// Phone Call Related
// ----------------------------------------------------------------------------
typedef enum {
    SPH_ON_APPLICATION_NORMAL = 0,
    SPH_ON_APPLICATION_VT_CALL,
    SPH_ON_APPLICATION_LOOPBACK,
    SPH_ON_APPLICATION_ROUTER,
    SPH_ON_APPLICATION_DACA,
    SPH_ON_APPLICATION_HOLD_CALL,
    SPH_ON_APPLICATION_ENCRYPTION,
}spc_sph_on_application_t;

typedef enum {
    SPH_ON_BTINFO_BT_OFF,
    SPH_ON_BTINFO_BT_PCM,         /* via Modem PCM hardware */
    SPH_ON_BTINFO_BT_CVSD_MSBC,    /* via software BT codec */
    SPH_ON_BTINFO_BT_CVSD,
    SPH_ON_BTINFO_BT_MSBC
}spc_sph_on_bt_info_t;

typedef enum {
    SPH_ON_SAMPLE_RATE_08K = 0,
    SPH_ON_SAMPLE_RATE_16K,
    SPH_ON_SAMPLE_RATE_32K,
    SPH_ON_SAMPLE_RATE_48K,
    SPH_ON_SAMPLE_RATE_MAX
}spc_sph_on_sample_rate_t;

typedef enum {
    SPH_ON_PARAM_VIA_PAYLOAD = 0,  /* speech param is written in payload */
    SPH_ON_PARAM_VIA_SHM       /* speech param is written in share memory */
}spc_sph_on_param_path_t;

typedef enum {
    SPH_ON_EXT_DEV_INFO_DEFULAT = 0,  
    SPH_ON_EXT_DEV_INFO_VIBRATION_RECEIVER, // vibration receiver (3-in-1)
    SPH_ON_EXT_DEV_INFO_VIBRATION_SPEAKER, // speaker (2-in-1 or 3-in-1)
    SPH_ON_EXT_DEV_INFO_SMARTPA_SPEAKER, // speaker with smart-PA which need echo reference path
    SPH_ON_EXT_DEV_INFO_SMARTPA_VIBRATION_SPEAKER, // vibration speaker with smart-PA which need echo reference path
    SPH_ON_EXT_DEV_INFO_USB_AUDIO, // usb audio device, which needs echo reference path
    SPH_ON_EXT_DEV_INFO_EARPHONE, // earphone audio device
}spc_sph_on_ext_dev_info_t;

typedef enum {
    SPH_ON_LOOPBACK_INFO_FLAG_DISABLE_BT_CODEC     = (1<<0),  //  1'b == BT Loopback with BT codec / 0'b == BT Loopback without BT Codec, only support when SPH_ON_BTINFO_BT_CVSD_MSBC 
	SPH_ON_LOOPBACK_INFO_FLAG_DELAY_SETTING  = (1<<1),  // delay setting for normal loopback, i.e. speech mode is not BT cases. 0==Use modem default delay value/ 1== use AP gives delay value in loopback_delay
}spc_sph_on_loopback_info_flag;

typedef struct {
	kal_uint8 loopback_flag; 
	kal_uint8 loopback_delay;      /* spc_sph_on_loopback_info_flag */
}spc_sph_on_loopback_info_t;

typedef enum {
    SPH_ON_MUTE_BIT_UL = (1<<0),
    SPH_ON_MUTE_BIT_DL = (1<<1),
    SPH_ON_MUTE_BIT_UL_ENH_RESULT = (1<<2),
    SPH_ON_MUTE_BIT_UL_SOURCE = (1<<3),
    SPH_ON_MUTE_BIT_DL_CODEC = (1<<4),
}spc_sph_on_mute_bit;

typedef struct {
    kal_uint8  application;        /* spc_sph_on_application_t */
    kal_uint8  bt_info;            /* spc_sph_on_bt_info_t */
    kal_uint8  sample_rate_enum;   /* spc_sph_on_sample_rate_t */
    kal_uint8  opendsp_flag;       /* bit[0]: 0: internal SPE, 1: OpenDSP, 
                                      bit[6]: enh ul skip. 1: skip enh, 0: normal process
                                      bit[7]: enh dl skip. 1: skip enh, 0: normal process */

    kal_uint8  param_path;         /* spc_sph_on_param_path_t */
    kal_uint8  param_shm_valid;    /* SPH_ON_PARAM_VIA_SHM only. 0: invalid, 1: valid */
    kal_uint16 param_size;         /* Max 65535 bytes */

	kal_uint16 param_idx;
	kal_uint16 ext_dev_info;       /* spc_sph_on_ext_dev_info_t */
	
	kal_uint8  loopback_flag; 
	kal_uint8  loopback_delay;     /* spc_sph_on_loopback_info_flag */	
	kal_uint16 echo_ref_delay_ms;  /* echo reference data delay, unit is ms */

	kal_uint8 mic_delay_ms;        /* UL0 data delay, unit is ms */ 
	kal_uint8 mute_mask;            /* bit-wise define in spc_sph_on_mute_bit. 0: unmute, 1: mute */
	kal_uint16 enh_crtl_support; 
	
    kal_uint8 reserve_at_32byte[12];       
	
    kal_uint8 reserve_at_48byte[16];       
    kal_uint8 reserve_at_64byte[16];       
    
} spc_sph_on_info_t; /* 64 bytes */

static spc_sph_on_info_t gSpc_sphOnInfo;

#define SPC_CUST_ENH 0
#if SPC_CUST_ENH
#define PROCESS_BLK_SIZE 320
static uint16 gSpc_DV_PCM_UL1_BUF[PROCESS_BLK_SIZE];
static uint16 gSpc_DV_PCM_UL2_BUF[PROCESS_BLK_SIZE];
static uint16 gSpc_DV_PCM_IN_BUF[PROCESS_BLK_SIZE];
static uint16 gSpc_DV_PCM_DL_BUF[PROCESS_BLK_SIZE];
static uint16 gSpc_DV_PCM_OUT_BUF[PROCESS_BLK_SIZE];
static uint16 DV_dl_audioid; 
static uint16 DV_ul_audioid;

void DV_init(void)
{
	// Do DV initialize
    return;
}

void DV_Release(void)
{
    // Do DV destroy
}

void DV_UL_process()
{
	// do speech enahncment for uplink
	// gSpc_DV_PCM_IN_BUF = ulProcess(gSpc_DV_PCM_UL1_BUF, gSpc_DV_PCM_UL2_BUF); 
}

void DV_DL_process()
{
	// do speech enahncment for downlink
	// gSpc_DV_PCM_OUT_BUF = dlProcess(gSpc_DV_PCM_DL_BUF); 
	memcpy(gSpc_DV_PCM_OUT_BUF, gSpc_DV_PCM_DL_BUF, 640);

	spc_customDump(320, gSpc_DV_PCM_OUT_BUF);
}

void DV_PCM4WAY_DL_HisrHdl()
{

    PCM4WAY_GetFromSD(gSpc_DV_PCM_DL_BUF);

    PCM4WAY_PutToSpk(gSpc_DV_PCM_OUT_BUF);  

	L1Audio_SetEvent(DV_dl_audioid, NULL);
	
}

void DV_PCM4WAY_UL_HisrHdl()
{

	
    PcmEx_GetFromMic1(gSpc_DV_PCM_UL1_BUF);
    PcmEx_GetFromMic2(gSpc_DV_PCM_UL2_BUF);

	
    
    PCM4WAY_PutToSE(gSpc_DV_PCM_IN_BUF); 
	
	L1Audio_SetEvent(DV_ul_audioid, NULL);
}
#endif // SPC_CUST_ENH

void Spc_SpeechOn( kal_uint8 RAT_Mode )
{

	if(false == spc_mainAppOnCheck(SPC_APP_SPEECH_USAGE))
		return;
	
	ASSERT(RAT_Mode <= RAT_3G324M_MODE);


	// checking speech useage parameter. if Not, use the default value. 
	spc_EmInit(!IS_SPC_EM_INIT(SPC_EM_INIT_COMMON),!IS_SPC_EM_INIT(SPC_EM_INIT_NB), 
		!IS_SPC_EM_INIT(SPC_EM_INIT_WB),!IS_SPC_EM_INIT(SPC_EM_INIT_SWB),
		!IS_SPC_EM_INIT(SPC_EM_INIT_DMNR),
		!IS_SPC_EM_INIT(SPC_EM_INIT_LSPK_DMNR),
		!IS_SPC_EM_INIT(SPC_EM_INIT_IIR));

	// rate setting
#if defined(__UMTS_RAT__)
	if( RAT_Mode != RAT_3G324M_MODE )
		RAT_Mode = RAT_3G_MODE; // Force initial 3G
#else
		RAT_Mode = RAT_2G_MODE;
#endif
	
    kal_trace( TRACE_INFO, SPC_SPEECH_ON, RAT_Mode);

	
	// reset codec before speechOn.
	spc_codecInfoInit();
	gSpc_networkStatus = 0xFF;
  
	L1SP_Speech_On( RAT_Mode );

	SET_SPC_APP_USAGE(SPC_APP_SPEECH_USAGE);


#if SPC_CUST_ENH	
    DV_init();
    Del_PcmEx_Start(DV_PCM4WAY_DL_HisrHdl, NULL, //DV_PCM4WAY_UL_HisrHdl, 
			NULL, //USE_D2M_PATH + USE_M2D_PATH,
			NULL, //USE_D2M_PATH + USE_M2D_PATH,
			NULL, //USE_D2M_PATH + USE_M2D_PATH,
			NULL, //USE_D2M_PATH + USE_M2D_PATH,
			USE_D2M_PATH + USE_M2D_PATH + DATA_SELECT_AFTER_ENH);
#endif	
}

kal_uint16 Spc_SpeechOn_withData(kal_uint16 offset, kal_uint16 length, const SPC_MSG_FROM_T comeFrom)
{
	spcBufInfo header;
	spc_sph_on_info_t info;
	kal_uint16 totalProcLen = 0;

	kal_uint8 before;
	kal_uint8 after;
	
	memset(&info, 0, sizeof(spc_sph_on_info_t));
	if(length == (sizeof(spcBufInfo) + sizeof(spc_sph_on_info_t))) {		
		SpcIO_GetDataFromAp_inOneTime(offset, length, sizeof(spcBufInfo), &header, &info, comeFrom);
	} else if ((length < (sizeof(spcBufInfo) + sizeof(spc_sph_on_info_t))) && (length > sizeof(spcBufInfo))) {		
		SpcIO_GetDataFromAp_inOneTime(offset, length, sizeof(spcBufInfo), &header, &info, comeFrom);
		kal_trace( TRACE_ERROR, SPC_SPH_ON_MISMATCH_PAYLOAD_SIZE, length, sizeof(spcBufInfo), sizeof(spc_sph_on_info_t));
	} else if (length > (sizeof(spcBufInfo) + sizeof(spc_sph_on_info_t))) {		 
		SpcIO_GetDataFromAp_inOneTime(offset, (sizeof(spcBufInfo) + sizeof(spc_sph_on_info_t)), sizeof(spcBufInfo), &header, &info, comeFrom);
		kal_trace( TRACE_ERROR, SPC_SPH_ON_MISMATCH_PAYLOAD_SIZE, length, sizeof(spcBufInfo), sizeof(spc_sph_on_info_t));
	}else {
		kal_trace( TRACE_INFO, SPC_ILLEGAL_SPC_APP_BEHAVIOR, SPC_APP_MERGE_SPH_USAGE, SPC_APP_MERGE_SPH_USAGE, 2);
		return totalProcLen; 
	}

	// MODEM_WARNING_MESSAGE(0, "Spc_SpeechOn_withData: in-correct header.syncWord(0x%x)", 0xA2A2);
	ASSERT(header.syncWord == 0xA2A2);
	// ASSERT(header.type == AUD_CCCI_STRMBUF_TYPE_SPH_INFO);
	if (header.type != AUD_CCCI_STRMBUF_TYPE_SPH_INFO) 
		kal_prompt_trace(MOD_L1SP, "Temp solution to change the enum");
	ASSERT(header.length == (length - sizeof(spcBufInfo)));

	kal_trace(TRACE_INFO, SPC_SPEECH_ON_PAYLOAD, 
			info.application, info.bt_info, info.sample_rate_enum, info.opendsp_flag, gSpc_sphOnInfo.opendsp_flag,
			info.param_path, info.param_shm_valid, info.param_size, info.param_idx, info.ext_dev_info,
			info.mute_mask);

	if(false == spc_mainAppOnCheck(SPC_APP_MERGE_SPH_USAGE)) {
		return info.param_size; 
	} 

	if(IS_SPC_APP_USED(SPC_APP_MERGE_SPH_USAGE)) {
		kal_trace( TRACE_INFO, SPC_ILLEGAL_SPC_APP_BEHAVIOR, SPC_APP_MERGE_SPH_USAGE, SPC_APP_MERGE_SPH_USAGE, 1);
		return info.param_size;
	}
	
	// set device
	SP_SetDevicePath(info.bt_info, info.sample_rate_enum);
	SP_SetExtraDevInfo(info.bt_info, info.ext_dev_info, info.echo_ref_delay_ms, info.mic_delay_ms);
    // Set Enh
    L1SP_EnhancementCtrlSupport(info.enh_crtl_support);

	if(SPH_ON_PARAM_VIA_SHM == info.param_path) {
		if(1 == info.param_shm_valid) {
			kal_uint16 procLen = 0;
			kal_uint16 curOffset = info.param_idx; 

			while (totalProcLen < info.param_size ) {
				kal_uint16 newOffset;
				spc_dynamicParameterParser_dispatcher(curOffset, info.param_size-totalProcLen, 
					SPC_MSG_FROM_CCCI_STREAM_AND_SHM, &procLen, &newOffset);
				
				totalProcLen += procLen; 
				curOffset = newOffset;
			}
		}
	} else {
		// Via stream. Not implement yet 
		kal_prompt_trace(MOD_L1SP, "SphO. param data from payload!!");
	}

	before = ((gSpc_sphOnInfo.opendsp_flag >> 6) & 0x3);
	after = ((info.opendsp_flag >> 6) & 0x3);

	if(before != after) {
		if (0x3 == after) { // dl & ul both skip
			L1SP_EnableSpeechEnhancement(false);
		} else if (0x2 == after) { // skip dl
			SetSPEnhancePath(SpeechEnh_UL);
		} else if(0x1 == after) { // skip ul
			SetSPEnhancePath(SpeechEnh_DL);
		} else {
			SetSPEnhancePath(SpeechEnh_All);
		}

		if (0x3 == before) {
			L1SP_EnableSpeechEnhancement(true);
		}
	}
	gSpc_sphOnInfo.opendsp_flag = info.opendsp_flag;

	// mute position apply
	spc_gain_UlMuteSet((info.mute_mask&SPH_ON_MUTE_BIT_UL)!=0, KAL_TRUE);
	spc_gain_DlMuteSet((info.mute_mask&SPH_ON_MUTE_BIT_DL)!=0, KAL_TRUE);
	spc_gain_UlEnhResultMuteSet((info.mute_mask&SPH_ON_MUTE_BIT_UL_ENH_RESULT)!=0, KAL_TRUE);
	spc_gain_UlSourceMuteSet((info.mute_mask&SPH_ON_MUTE_BIT_UL_SOURCE)!=0, KAL_TRUE);
	spc_gain_DlMuteCodecSet((info.mute_mask&SPH_ON_MUTE_BIT_DL_CODEC)!=0, KAL_TRUE);

	memcpy(&gSpc_sphOnInfo, &info, sizeof(spc_sph_on_info_t));
	
	if(SPH_ON_APPLICATION_NORMAL == info.application) {		
		Spc_SpeechOn(RAT_3G_MODE);
	} else if (SPH_ON_APPLICATION_VT_CALL == info.application) {
		Spc_SpeechOn(RAT_3G324M_MODE);
	} else if (SPH_ON_APPLICATION_LOOPBACK == info.application) {
		Spc_AcousticLoopback(true, info.loopback_flag, info.loopback_delay);
	} else if (SPH_ON_APPLICATION_ROUTER == info.application) {
		Spc_SpeechRouterOn(true);
	} else if (SPH_ON_APPLICATION_DACA == info.application) {
		Spc_SpeechOnForDaca(0, true);
	} else if (SPH_ON_APPLICATION_HOLD_CALL == info.application) {
	    spc_SpeechOnForCallHold(true);
	}

	SET_SPC_APP_USAGE(SPC_APP_MERGE_SPH_USAGE);
	return totalProcLen;
}

void Spc_SpeechOff( void )
{   
	kal_trace( TRACE_INFO, SPC_SPEECH_OFF);

	ASSERT(0==IS_SPC_APP_USED(SPC_APP_PCMNWAY_USAGE));
	// ASSERT(0==IS_SPC_APP_USED(SPC_APP_RECORD_USAGE)); removed from 93md
	// ASSERT(0==IS_SPC_APP_USED(SPC_APP_PCM_REC_USAGE)); removed from 93md
	ASSERT(0==IS_SPC_APP_USED(SPC_APP_VM_REC_USAGE));
	ASSERT(0==IS_SPC_APP_USED(SPC_APP_BGSND_USAGE));
	ASSERT(0==IS_SPC_APP_USED(SPC_APP_RAW_PCM_REC_USAGE));

	if(!IS_SPC_APP_USED(SPC_APP_SPEECH_USAGE)){
		// just leave log and return
		kal_trace( TRACE_INFO, SPC_ILLEGAL_SPC_APP_BEHAVIOR, SPC_APP_SPEECH_USAGE, SPC_APP_SPEECH_USAGE, 0);
		return; 
	} 
	
#if SPC_CUST_ENH	
    PcmEx_Stop();
    DV_Release();
#endif 



	// close speech 
	L1SP_Speech_Off();

	CLR_SPC_APP_USAGE(SPC_APP_SPEECH_USAGE);

}

void Spc_SpeechOff_Merge( void)
{
	if(IS_SPC_APP_USED(SPC_APP_MERGE_SPH_USAGE)) {
		if(SPH_ON_APPLICATION_NORMAL == gSpc_sphOnInfo.application) {		
			Spc_SpeechOff();
		} else if (SPH_ON_APPLICATION_VT_CALL == gSpc_sphOnInfo.application) {
			Spc_SpeechOff();
		} else if (SPH_ON_APPLICATION_LOOPBACK == gSpc_sphOnInfo.application) {
			Spc_AcousticLoopback(false,0,0);
		} else if (SPH_ON_APPLICATION_ROUTER == gSpc_sphOnInfo.application) {
			Spc_SpeechRouterOn(false);
		} else if (SPH_ON_APPLICATION_DACA == gSpc_sphOnInfo.application) {
			Spc_SpeechOnForDaca(0, false);
		} else if (SPH_ON_APPLICATION_HOLD_CALL == gSpc_sphOnInfo.application) {
			spc_SpeechOnForCallHold(false);
		}	
		
		CLR_SPC_APP_USAGE(SPC_APP_MERGE_SPH_USAGE);
	} else {
		Spc_SpeechOff();
	}
	
}

/*
void Spc_SetSpeechEnhMode_Adaptation( uint8 mode )
{
   int16 totalModeNum;

	kal_trace( TRACE_INFO, SPC_SET_SPEECHMODE_ADAPT, mode);

	//[REMIND] For MT6589, idle recording function are implement in AP side, 
	// so record mode information is not existing in MD side
   totalModeNum = (SPH_MODE_UNDEFINED-1); // + l1sp_getNumOfRecordMode();
   if (mode >= totalModeNum) {
      ASSERT(0);
   }

   // [REMIND] Because Smart phone only has 8+1 speech mode, which is different from l1audio.h's definition. 
   //As the result, we need to mapping the mode into the correct one. 
   L1SP_SetSpeechEnhanceAndFir(mode, SPH_ENH_AND_FIR_UPDATE_TYPE_ALL);

}
*/

// MSG_A2M_SPH_DEV_CHANGE
kal_uint16 Spc_SpeechDeviceChange(kal_uint16 offset, kal_uint16 length, const SPC_MSG_FROM_T comeFrom)
{
	spcBufInfo header;
	spc_sph_on_info_t info;	
	kal_uint16 totalProcLen = 0;

	uint8 before;
	uint8 after;

	memset(&info, 0, sizeof(spc_sph_on_info_t));
	if(length == (sizeof(spcBufInfo) + sizeof(spc_sph_on_info_t))) {		
		SpcIO_GetDataFromAp_inOneTime(offset, length, sizeof(spcBufInfo), &header, &info, comeFrom);
	} else if ((length < (sizeof(spcBufInfo) + sizeof(spc_sph_on_info_t))) && (length > sizeof(spcBufInfo))) {		
		SpcIO_GetDataFromAp_inOneTime(offset, length, sizeof(spcBufInfo), &header, &info, comeFrom);
		kal_trace( TRACE_ERROR, SPC_SPH_ON_MISMATCH_PAYLOAD_SIZE, length, sizeof(spcBufInfo), sizeof(spc_sph_on_info_t));
	} else if (length > (sizeof(spcBufInfo) + sizeof(spc_sph_on_info_t))) {		 
		SpcIO_GetDataFromAp_inOneTime(offset, (sizeof(spcBufInfo) + sizeof(spc_sph_on_info_t)), sizeof(spcBufInfo), &header, &info, comeFrom);
		kal_trace( TRACE_ERROR, SPC_SPH_ON_MISMATCH_PAYLOAD_SIZE, length, sizeof(spcBufInfo), sizeof(spc_sph_on_info_t));
	}else {	
		kal_trace( TRACE_INFO, SPC_ILLEGAL_SPC_APP_BEHAVIOR, SPC_APP_MERGE_SPH_USAGE, SPC_APP_MERGE_SPH_USAGE, 3);
		return totalProcLen; 
	}

	ASSERT(header.syncWord == 0xA2A2);
	// ASSERT(header.type == AUD_CCCI_STRMBUF_TYPE_SPH_INFO);	
	if (header.type != AUD_CCCI_STRMBUF_TYPE_SPH_INFO) 
		kal_prompt_trace(MOD_L1SP, "Temp solution to change the enum");
	ASSERT(header.length == (length - sizeof(spcBufInfo)));

	kal_trace(TRACE_INFO, SPC_SPEECH_ON_PAYLOAD, 
			info.application, info.bt_info, info.sample_rate_enum, info.opendsp_flag, gSpc_sphOnInfo.opendsp_flag,
			info.param_path, info.param_shm_valid, info.param_size, info.param_idx, info.ext_dev_info,
			info.mute_mask);
	
	// set device
	SP_SetDevicePath(info.bt_info, info.sample_rate_enum);
	SP_SetExtraDevInfo(info.bt_info, info.ext_dev_info, info.echo_ref_delay_ms, info.mic_delay_ms);
	gSpc_sphOnInfo.sample_rate_enum = info.sample_rate_enum;
	gSpc_sphOnInfo.bt_info = info.bt_info;
	gSpc_sphOnInfo.ext_dev_info = info.ext_dev_info;
	gSpc_sphOnInfo.echo_ref_delay_ms = info.echo_ref_delay_ms;
	gSpc_sphOnInfo.mic_delay_ms = info.mic_delay_ms;

	// apply the parameter
	if(SPH_ON_PARAM_VIA_SHM == info.param_path) {
		if(1 == info.param_shm_valid) {
			kal_uint16 procLen = 0;
			kal_uint16 curOffset = info.param_idx; 
			
			while (totalProcLen < info.param_size ) {
				kal_uint16 newOffset;
				spc_dynamicParameterParser_dispatcher(curOffset, info.param_size-totalProcLen, 
					SPC_MSG_FROM_CCCI_STREAM_AND_SHM, &procLen, &newOffset);
				
				totalProcLen += procLen; 
				curOffset = newOffset;
			}
		}
	} else {
		// Via stream. Not implement yet 
		kal_prompt_trace(MOD_L1SP, "DEV change. param data from payload!!");
	}

	before = ((gSpc_sphOnInfo.opendsp_flag >> 6) & 0x3);
	after = ((info.opendsp_flag >> 6) & 0x3);

	if(before != after) {
		if (0x3 == after) { // dl & ul both skip
			L1SP_EnableSpeechEnhancement(false);
		} else if (0x2 == after) { // skip dl
			SetSPEnhancePath(SpeechEnh_UL);
		} else if(0x1 == after) { // skip ul
			SetSPEnhancePath(SpeechEnh_DL);
		} else {
			SetSPEnhancePath(SpeechEnh_All);
		}

		if (0x3 == before) {
			L1SP_EnableSpeechEnhancement(true);
		}
	}
	gSpc_sphOnInfo.opendsp_flag = info.opendsp_flag;
	
	return totalProcLen; 
}


/**
	No User, phase out
	@return: result of existing compile option related to speech function
		bit 0: __DUAL_MIC_SUPPORT__
		bit 1: support wb or not (__AMRWB_LINK_SUPPORT__)
		bit 2 ~ 15: reserve for future use
*/
/*
kal_uint16 spc_QueryMdCapability(void)
{
	kal_uint16 result = 0;

	// bit 0
	result |= (1<<0);

	// bit 1 , support wb or not
	result |= (1<<1);

	// bit 2 (for future use)
	//
	
	return result;
}
*/

void spc_DebugPrint(void)
{
	uint16 *m_para; 
	
	m_para = Sp_GetCommonSpeechPara(); // size NUM_COMMON_PARAS
	kal_trace(TRACE_INFO, L1SP_COMMON_PARAM_VALUE, m_para[0], m_para[1], m_para[2], m_para[3], m_para[4], m_para[5], m_para[6], m_para[7], m_para[8], m_para[9], m_para[10], m_para[11]);
	
	m_para = Sp_GetSpeechPara(); // size NUM_MODE_PARAS
	kal_trace(TRACE_INFO, L1SP_MODE_VALUE, m_para[0], m_para[1], m_para[2], m_para[3], m_para[4], m_para[5], m_para[6], m_para[7], m_para[8], m_para[9], m_para[10], m_para[11], m_para[12], m_para[13], m_para[14], m_para[15]);
	
	m_para = Sp_GetWbSpeechPara(); // size NUM_MODE_PARAS
	kal_trace(TRACE_INFO, L1SP_MODE_VALUE, m_para[0], m_para[1], m_para[2], m_para[3], m_para[4], m_para[5], m_para[6], m_para[7], m_para[8], m_para[9], m_para[10], m_para[11], m_para[12], m_para[13], m_para[14], m_para[15]);
	
}


/** 
	MED(AUDL) task
	codec: em_speech_info_SpeechCodecType. in "em_public_struct.h" 
*/
void spc_notify_network_status(uint32 codec)
{
	uint16 tmp;
	uint8 band = 0;  // default 8k
	uint32 RAT = AM_GetNetworkRate();
	uint8 Network = 0xF;

	if(	(0x61 == codec ) || ((codec >= 0x20) && (codec <= 0x28)) 
		|| ((codec >= 0x90) && (codec <= 0x9F))
		|| ((codec >= 0xD0) && (codec <= 0xDF)) ){ // 16k 
		band = 1; 
		                                   
	} else if((codec >= 0xA0) && (codec <= 0xAF)) { // 32k 
		band = 2; 	
	} else if((codec >= 0xB0) && (codec <= 0xBF)) { // 48k 
		band = 3;	
	}
	
	if(RAT == RAT_4G_MODE)
	{
		Network = NETWORK_VOLTE;
	}
	else if(RAT == RAT_3G_MODE)
	{
		Network = NETWORK_WCDMA_FDD;
#if defined( __UMTS_RAT__ ) 
    		switch(L1SP_GetSIMStatus()){
       		case SP_3G_SIM_FDD_ACTIVE:	
     	   		Network = NETWORK_WCDMA_FDD;
       	  	 break;
      		 case SP_3G_SIM_TDD_ACTIVE:
    	   		Network = NETWORK_WCDMA_TDD;
       	  	 break;
      		 default:
       	  		 Network = NETWORK_WCDMA_FDD;
		 break;
    		}	    
#endif			
	}
	else if(RAT == RAT_2G_MODE)
   	{
    		Network = NETWORK_GSM;
    	}	
	else if(RAT == RAT_C2K_MODE)
   	{
    		Network = NETWORK_C2K;
    }
	
	tmp = (kal_uint16)((band) << 4 | (Network & 0xF) | ( 0x1 << 15 ));
	// tmp = (kal_uint16)( (band << 3) | (RAT & 0x7));
	
	if(gSpc_networkStatus != tmp){
	     kal_trace(TRACE_INFO, SPC_NOTIFY_NETWORK_STATUS_INFO, tmp, band, RAT);
		 SpcIO_SendMsgToAp(SPCIO_MSG_FROM_SPC_NETWORK_STATUS_NOTIFY, (kal_uint16)tmp, 0);
		 kal_trace( TRACE_FUNC,SPC_NOTIFY_NETWORK_STATUS,  gSpc_networkStatus, tmp);
		 gSpc_networkStatus = tmp;
	}else{
		kal_trace( TRACE_FUNC,SPC_NOTIFY_NETWORK_STATUS_SKIP,  tmp);  	
	}
	
	spc_codecInfoNotify(codec);
}

//AUDIO task
#include "em_audio_public_struct.h"
void spc_send_network_status_notify(em_speech_info_SpeechCodecType codec)
{
	SpcIO_MsgQueuePut(SPC_ID_NETWORK_STATUS_NOTIFY, codec, 0, SPC_MSG_FROM_AUDHISR);
}

void spc_ReceiveNwCodecInfoReadDone(void)
{
	l1sp_send_codec_status_notify(AM_GetSpeechMode());
}
/**
	@isGen: true for trun on, false for turn off
*/
void spc_SpeechOnForCallHold(kal_bool isGen)
{

	
	if(isGen){ // turn on
	
		if(false == spc_mainAppOnCheck(SPC_APP_HOLD_USAGE))
			return;

		// turn on speech and mute
		
		L1SP_Speech_On(RAT_3G_MODE);
		SP_MuteUlFromDiffPos(true, SP_MIC_MUTE_POS_FROM_SPC);

		SET_SPC_APP_USAGE(SPC_APP_HOLD_USAGE);
	} else { // turn off
	
		if(!IS_SPC_APP_USED(SPC_APP_HOLD_USAGE)) { // sid generation not in use
			// just leave the log and return
			kal_trace( TRACE_INFO, SPC_ILLEGAL_SPC_APP_BEHAVIOR, SPC_APP_HOLD_USAGE, SPC_APP_HOLD_USAGE, 0);			
			return;
		}

		// turn off 
		SP_MuteUlFromDiffPos(false, SP_MIC_MUTE_POS_FROM_SPC); 
		L1SP_Speech_Off();
		CLR_SPC_APP_USAGE(SPC_APP_HOLD_USAGE);
	}
	
}

// ----------------------------------------------------------------------------
// Loopback
// ----------------------------------------------------------------------------
#define ACLOOPBACK_USING_P2W 1

#define ACLOOPBACK_FRAME_BUF_NO (64) // REMIND: should be pow of 2 
#define ACLOOPBACK_NB_FRAME_SIZE   (160)
#define ACLOOPBACK_DELAY 12 // unit is 20ms 

#if ACLOOPBACK_USING_P2W
static uint16 gSpc_acLoopback_PCM_BUF[ACLOOPBACK_FRAME_BUF_NO][ACLOOPBACK_NB_FRAME_SIZE];
#else
// static uint16 gSpc_acLoopback_PCM_UL_BUF[ACLOOPBACK_FRAME_BUF_NO][ACLOOPBACK_NB_FRAME_SIZE];
static uint16 gSpc_acLoopback_PCM_UL_BUF[ACLOOPBACK_NB_FRAME_SIZE];
static uint16 gSpc_acLoopback_PCM_DL_BUF[ACLOOPBACK_FRAME_BUF_NO][ACLOOPBACK_NB_FRAME_SIZE];
#endif 

typedef struct 
{
	uint32 delay;
  uint8 isLoopback;

#if ACLOOPBACK_USING_P2W	
	uint32 tmp_w;
	uint32 tmp_r;
#else	
	// uint32 UL_tmp_w;
	// uint32 UL_tmp_r;
	uint32 DL_tmp_w;
	uint32 DL_tmp_r;
#endif

} _SPC_ACOUSTIC_LOOPBACK_T;

static _SPC_ACOUSTIC_LOOPBACK_T gSpc_acLoopback;
void spc_setAcLoopbackState(bool b)
{
	gSpc_acLoopback.isLoopback = b;
}

bool spc_isAcLoopback()
{
	return gSpc_acLoopback.isLoopback;
}


#if ACLOOPBACK_USING_P2W
void AcousticLoopback_PCM2WAY_UL_HisrHdl()
#else
void AcousticLoopback_PCM4WAY_UL_HisrHdl()
#endif
{
   kal_take_spinlock(pcmEx.PCMEXspinLockID, KAL_INFINITE_WAIT);
#if ACLOOPBACK_USING_P2W

	/*	P2W */
   if( (gSpc_acLoopback.tmp_w - gSpc_acLoopback.tmp_r) < ACLOOPBACK_FRAME_BUF_NO ){        
      PCM2WAY_GetFromMic((uint16*)gSpc_acLoopback_PCM_BUF[gSpc_acLoopback.tmp_w & (ACLOOPBACK_FRAME_BUF_NO - 1)]);
      kal_dev_trace( TRACE_INFO,SPC_AC_LOOPBACK_FROM_MIC, 
                       gSpc_acLoopback_PCM_BUF[gSpc_acLoopback.tmp_w & (ACLOOPBACK_FRAME_BUF_NO - 1)][0],
                       gSpc_acLoopback_PCM_BUF[gSpc_acLoopback.tmp_w & (ACLOOPBACK_FRAME_BUF_NO - 1)][1],
                       gSpc_acLoopback_PCM_BUF[gSpc_acLoopback.tmp_w & (ACLOOPBACK_FRAME_BUF_NO - 1)][2],
                       gSpc_acLoopback_PCM_BUF[gSpc_acLoopback.tmp_w & (ACLOOPBACK_FRAME_BUF_NO - 1)][3]);         
      (gSpc_acLoopback.tmp_w)++;            
   }else{
      kal_dev_trace( TRACE_INFO, SPC_AC_LOOPBACK_SKIP_MIC); 
   }
	
#else
	/* P4W UL with delay
	if( (gSpc_acLoopback.UL_tmp_w - gSpc_acLoopback.UL_tmp_r) < ACLOOPBACK_FRAME_BUF_NO ){        
      PCM4WAY_GetFromMic((uint16*)gSpc_acLoopback_PCM_UL_BUF[gSpc_acLoopback.UL_tmp_w & (ACLOOPBACK_FRAME_BUF_NO - 1)]);
      kal_dev_trace( TRACE_INFO,SPC_AC_LOOPBACK_FROM_MIC, 
                       gSpc_acLoopback_PCM_UL_BUF[gSpc_acLoopback.UL_tmp_w & (ACLOOPBACK_FRAME_BUF_NO - 1)][0],
                       gSpc_acLoopback_PCM_UL_BUF[gSpc_acLoopback.UL_tmp_w & (ACLOOPBACK_FRAME_BUF_NO - 1)][1],
                       gSpc_acLoopback_PCM_UL_BUF[gSpc_acLoopback.UL_tmp_w & (ACLOOPBACK_FRAME_BUF_NO - 1)][2],
                       gSpc_acLoopback_PCM_UL_BUF[gSpc_acLoopback.UL_tmp_w & (ACLOOPBACK_FRAME_BUF_NO - 1)][3]);         
      (gSpc_acLoopback.UL_tmp_w)++;            
   }else{
      kal_dev_trace( TRACE_INFO, SPC_AC_LOOPBACK_SKIP_MIC); 
   }

   if( (gSpc_acLoopback.UL_tmp_w - gSpc_acLoopback.UL_tmp_r) >= gSpc_acLoopback.delay ){
      PCM4WAY_PutToSE(gSpc_acLoopback_PCM_UL_BUF[gSpc_acLoopback.UL_tmp_r & (ACLOOPBACK_FRAME_BUF_NO - 1)]);   
      kal_dev_trace( TRACE_INFO, SPC_AC_LOOPBACK_TO_SE, 
                       gSpc_acLoopback_PCM_UL_BUF[gSpc_acLoopback.UL_tmp_r & (ACLOOPBACK_FRAME_BUF_NO - 1)][0],
                       gSpc_acLoopback_PCM_UL_BUF[gSpc_acLoopback.UL_tmp_r & (ACLOOPBACK_FRAME_BUF_NO - 1)][1],
                       gSpc_acLoopback_PCM_UL_BUF[gSpc_acLoopback.UL_tmp_r & (ACLOOPBACK_FRAME_BUF_NO - 1)][2],
                       gSpc_acLoopback_PCM_UL_BUF[gSpc_acLoopback.UL_tmp_r & (ACLOOPBACK_FRAME_BUF_NO - 1)][3]);               
      (gSpc_acLoopback.UL_tmp_r)++;
   }else{
      kal_dev_trace( TRACE_INFO, SPC_AC_LOOPBACK_FILL_SE); 
      PCM4WAY_FillSE(0);
   }
   */

	// P4W UL without delay	
	PCM4WAY_GetFromMic(gSpc_acLoopback_PCM_UL_BUF);
   kal_dev_trace( TRACE_INFO,SPC_AC_LOOPBACK_FROM_MIC, 
                    gSpc_acLoopback_PCM_UL_BUF[0],
                    gSpc_acLoopback_PCM_UL_BUF[1],
                    gSpc_acLoopback_PCM_UL_BUF[2],
                    gSpc_acLoopback_PCM_UL_BUF[3]); 
	
	PCM4WAY_PutToSE(gSpc_acLoopback_PCM_UL_BUF); 
	kal_dev_trace( TRACE_INFO, SPC_AC_LOOPBACK_TO_SE, 
                    gSpc_acLoopback_PCM_UL_BUF[0],
                    gSpc_acLoopback_PCM_UL_BUF[1],
                    gSpc_acLoopback_PCM_UL_BUF[2],
                    gSpc_acLoopback_PCM_UL_BUF[3]);  
   
#endif
   kal_give_spinlock(pcmEx.PCMEXspinLockID);
}

#if ACLOOPBACK_USING_P2W
void AcousticLoopback_PCM2WAY_DL_HisrHdl()
#else
void AcousticLoopback_PCM4WAY_DL_HisrHdl()
#endif
{
   kal_take_spinlock(pcmEx.PCMEXspinLockID, KAL_INFINITE_WAIT);	
#if ACLOOPBACK_USING_P2W
	/* P2W */
	if( (gSpc_acLoopback.tmp_w - gSpc_acLoopback.tmp_r) >= gSpc_acLoopback.delay){		
      PCM2WAY_PutToSpk(gSpc_acLoopback_PCM_BUF[gSpc_acLoopback.tmp_r & (ACLOOPBACK_FRAME_BUF_NO - 1)]);  
      kal_dev_trace( TRACE_INFO, SPC_AC_LOOPBACK_TO_SPK, 
                       gSpc_acLoopback_PCM_BUF[gSpc_acLoopback.tmp_r & (ACLOOPBACK_FRAME_BUF_NO - 1)][0],
                       gSpc_acLoopback_PCM_BUF[gSpc_acLoopback.tmp_r & (ACLOOPBACK_FRAME_BUF_NO - 1)][1],
                       gSpc_acLoopback_PCM_BUF[gSpc_acLoopback.tmp_r & (ACLOOPBACK_FRAME_BUF_NO - 1)][2],
                       gSpc_acLoopback_PCM_BUF[gSpc_acLoopback.tmp_r & (ACLOOPBACK_FRAME_BUF_NO - 1)][3]);         
      (gSpc_acLoopback.tmp_r)++;   
	}else{
      kal_dev_trace( TRACE_INFO, SPC_AC_LOOPBACK_FILL_SPK); 
      PCM2WAY_FillSpk(0);   
   }
	
	kal_dev_trace( TRACE_INFO, SPC_AC_LOOPBACK_UL_DL_INDEX, 
		gSpc_acLoopback.tmp_w, gSpc_acLoopback.tmp_r, 0, 0);
#else


   if( (gSpc_acLoopback.DL_tmp_w - gSpc_acLoopback.DL_tmp_r) < ACLOOPBACK_FRAME_BUF_NO ){        
      PCM4WAY_GetFromSD((uint16*)gSpc_acLoopback_PCM_DL_BUF[gSpc_acLoopback.DL_tmp_w & (ACLOOPBACK_FRAME_BUF_NO - 1)]);
      kal_dev_trace( TRACE_INFO, SPC_AC_LOOPBACK_FROM_SD, 
                       gSpc_acLoopback_PCM_DL_BUF[gSpc_acLoopback.DL_tmp_w & (ACLOOPBACK_FRAME_BUF_NO - 1)][0],
                       gSpc_acLoopback_PCM_DL_BUF[gSpc_acLoopback.DL_tmp_w & (ACLOOPBACK_FRAME_BUF_NO - 1)][1],
                       gSpc_acLoopback_PCM_DL_BUF[gSpc_acLoopback.DL_tmp_w & (ACLOOPBACK_FRAME_BUF_NO - 1)][2],
                       gSpc_acLoopback_PCM_DL_BUF[gSpc_acLoopback.DL_tmp_w & (ACLOOPBACK_FRAME_BUF_NO - 1)][3]);
      (gSpc_acLoopback.DL_tmp_w)++;            
   }else{
      kal_dev_trace( TRACE_INFO, SPC_AC_LOOPBACK_SKIP_SD); 
   }
   


	if( (gSpc_acLoopback.DL_tmp_w - gSpc_acLoopback.DL_tmp_r) >= gSpc_acLoopback.delay){	  			  
		  PCM4WAY_PutToSpk(gSpc_acLoopback_PCM_DL_BUF[gSpc_acLoopback.DL_tmp_r & (ACLOOPBACK_FRAME_BUF_NO - 1)]);  
		  
		  kal_dev_trace( TRACE_INFO, SPC_AC_LOOPBACK_TO_SPK, 
								 gSpc_acLoopback_PCM_DL_BUF[gSpc_acLoopback.DL_tmp_r & (ACLOOPBACK_FRAME_BUF_NO - 1)][0],
								 gSpc_acLoopback_PCM_DL_BUF[gSpc_acLoopback.DL_tmp_r & (ACLOOPBACK_FRAME_BUF_NO - 1)][1],
								 gSpc_acLoopback_PCM_DL_BUF[gSpc_acLoopback.DL_tmp_r & (ACLOOPBACK_FRAME_BUF_NO - 1)][2],
								 gSpc_acLoopback_PCM_DL_BUF[gSpc_acLoopback.DL_tmp_r & (ACLOOPBACK_FRAME_BUF_NO - 1)][3]);			
		  (gSpc_acLoopback.DL_tmp_r)++;	  
		  
	}else{
		  kal_dev_trace( TRACE_INFO, SPC_AC_LOOPBACK_FILL_SPK); 
	
		  PCM4WAY_FillSpk(0);
	  }  


	kal_dev_trace( TRACE_INFO, SPC_AC_LOOPBACK_UL_DL_INDEX, 		
		// gSpc_acLoopback.DL_tmp_w, gSpc_acLoopback.DL_tmp_r, gSpc_acLoopback.UL_tmp_w, gSpc_acLoopback.UL_tmp_r);
		gSpc_acLoopback.DL_tmp_w, gSpc_acLoopback.DL_tmp_r, 0, 0);
	
#endif
   kal_give_spinlock(pcmEx.PCMEXspinLockID);
	
}

/**
	@uParam: reference spc_sph_on_loopback_info_flag 
		Bit 0: Pre-condiftion is speech mode equals to SPH_MODE_BT_EARPHONE(3) or SPH_MODE_BT_CCARITE(5). 1== BT Loopback without BT codec / 0 == BT Loopback with BT Codec. Only support CVSD&MSBC
		Bit 1: delay setting for normal loopback, i.e. speech mode is not BT cases. 0==Use modem default delay value/ 1== use AP gives delay value in msgId32 bit[0:7] 
	@extraParam:
		Bit[7:0]: Delay time in uint8. Unit is 20ms. Take effect when msgId16 bit[2] == 1. For example: when bit[7:0] = 0xf, then the delay time is 15*20 == 300 ms.
*/
void Spc_AcousticLoopback(bool enable, kal_uint8 uParam, kal_uint8 extraParam)
{
    // kal_bool enable = uParam & 0x1; // bit(0): on/off   bit(1): disable/enable BT SW codec 

	kal_trace(TRACE_INFO, SPC_AC_LOOPBACK_INFO, enable, uParam, extraParam);

	if(enable){

		if(false == spc_mainAppOnCheck(SPC_APP_ACLOOPBACK_USAGE)) // remind to skip EM check if necessary
			return;

		if(IS_SPC_APP_USED(SPC_APP_PCMNWAY_USAGE)){
			// just leave log and return
			kal_trace( TRACE_INFO, SPC_ILLEGAL_SPC_APP_BEHAVIOR_CHECK, SPC_APP_ACLOOPBACK_USAGE, SPC_APP_PCMNWAY_USAGE, SPC_APP_PCMNWAY_USAGE, gSpc.spcAppUsage);
			return; 
		}

		// special case for BT loopback 
#if defined(__CVSD_CODEC_SUPPORT__) 
		
		if( SP_GetDevInfo() == SPH_DEVINFO_BT_CVSD_MSBC
			|| SP_GetDevInfo() == SPH_DEVINFO_BT_CVSD
			|| SP_GetDevInfo() == SPH_DEVINFO_BT_MSBC)
		{  // for SW BT platform, BT loopback does not related to speech and DSP.

			kal_uint8 voice8kMode = SP_GetDevSamplingRate();			
			if( (voice8kMode==0) || (voice8kMode==1) ) {

				SET_SPC_APP_USAGE(SPC_APP_ACLOOPBACK_USAGE);
				BT_SCO_Loopback_ON( (uParam&SPH_ON_LOOPBACK_INFO_FLAG_DISABLE_BT_CODEC) ,(voice8kMode == 1));
				return; // REMIND!!!
				
			} else {
				MODEM_WARNING_MESSAGE((voice8kMode==0), "Spc_AcousticLoopback(bt): incorrect Voice8kMode, %d", voice8kMode);
				MODEM_WARNING_MESSAGE((voice8kMode==1), "Spc_AcousticLoopback(bt): incorrect Voice8kMode, %d", voice8kMode);
				return;
			}
		}
#endif

		// setup 
		gSpc_acLoopback.delay = ACLOOPBACK_DELAY;
		if((uParam & SPH_ON_LOOPBACK_INFO_FLAG_DELAY_SETTING) !=0) { // using bit[1] for check delay
			kal_uint8 givenDelay = 	(extraParam & 0xFF); //use msg32  bit [7:0] for delay setting
			ASSERT(givenDelay<= ACLOOPBACK_FRAME_BUF_NO);
			gSpc_acLoopback.delay = givenDelay;
		}
#if ACLOOPBACK_USING_P2W		
      gSpc_acLoopback.tmp_w = 0;
		gSpc_acLoopback.tmp_r = 0;
#else		
		// gSpc_acLoopback.UL_tmp_w = 0;
		// gSpc_acLoopback.UL_tmp_r = 0;
		gSpc_acLoopback.DL_tmp_w = 0;
		gSpc_acLoopback.DL_tmp_r = 0;
#endif

		//clean memory
#if ACLOOPBACK_USING_P2W		
      memset(gSpc_acLoopback_PCM_BUF, 0, sizeof(uint16)*ACLOOPBACK_FRAME_BUF_NO*ACLOOPBACK_NB_FRAME_SIZE);
#else
      // memset(gSpc_acLoopback_PCM_UL_BUF, 0, sizeof(uint16)*ACLOOPBACK_FRAME_BUF_NO*ACLOOPBACK_NB_FRAME_SIZE);
      memset(gSpc_acLoopback_PCM_UL_BUF, 0, sizeof(uint16)*ACLOOPBACK_NB_FRAME_SIZE);
      memset(gSpc_acLoopback_PCM_DL_BUF, 0, sizeof(uint16)*ACLOOPBACK_FRAME_BUF_NO*ACLOOPBACK_NB_FRAME_SIZE);
#endif
    spc_setAcLoopbackState(1); 
#if ACLOOPBACK_USING_P2W		
		/* P2W */
		Idle_PcmEx_Start(AcousticLoopback_PCM2WAY_DL_HisrHdl, AcousticLoopback_PCM2WAY_UL_HisrHdl, 
				USE_D2M_PATH + DATA_SELECT_AFTER_ENH, // ul1
				USE_D2M_PATH + DATA_SELECT_AFTER_ENH, // ul2
				USE_D2M_PATH + DATA_SELECT_AFTER_ENH, // ul3
				USE_D2M_PATH + DATA_SELECT_AFTER_ENH, // ul4
				USE_M2D_PATH,
				PCMEX_BAND_NB, PCMEX_IDLE_ENH_SETTING_WITH);
#else
		// enable	  
		L1SP_Speech_On(RAT_2G_MODE);
		
#if ACLOOPBACK_USING_ExtCodec
    Extcodec_Set_Delay(gSpc_acLoopback.delay);
    Extcodec_Call_Open();

#else
    L1SP_SpeechLoopBackEnable(KAL_TRUE); //dsp codec loopback

		Del_PcmEx_Start(AcousticLoopback_PCM4WAY_DL_HisrHdl, AcousticLoopback_PCM4WAY_UL_HisrHdl, 
				USE_D2M_PATH + USE_M2D_PATH + DATA_SELECT_AFTER_ENH,
				USE_D2M_PATH + USE_M2D_PATH + DATA_SELECT_AFTER_ENH,
				USE_D2M_PATH + USE_M2D_PATH + DATA_SELECT_AFTER_ENH,
				USE_D2M_PATH + USE_M2D_PATH + DATA_SELECT_AFTER_ENH,
				USE_D2M_PATH + USE_M2D_PATH);
#endif//ACLOOPBACK_USING_ExtCodec		
#endif//ACLOOPBACK_USING_P2W

		
		SET_SPC_APP_USAGE(SPC_APP_ACLOOPBACK_USAGE);

   } else {

		if(!IS_SPC_APP_USED(SPC_APP_ACLOOPBACK_USAGE)){
			// just leave log and return
			kal_trace( TRACE_INFO, SPC_ILLEGAL_SPC_APP_BEHAVIOR, SPC_APP_ACLOOPBACK_USAGE, SPC_APP_ACLOOPBACK_USAGE, 0);
			return; 
		}

#if defined(__CVSD_CODEC_SUPPORT__) 
		if( BT_SCO_IS_SPEECH_ON() )
		{  // for SW BT platform, BT loopback does not related to speech and DSP.
		   BT_SCO_Loopback_OFF();
		   CLR_SPC_APP_USAGE(SPC_APP_ACLOOPBACK_USAGE);
		   return;
		}
#endif

		
#if ACLOOPBACK_USING_P2W	
		/* P2W */ 
		// SetSpeechEnhancement(false);
		PcmEx_Stop();
		/*mute after loopback*/

		SP_MuteUlFromDiffPos(false, SP_MIC_MUTE_POS_FROM_ALL); 
  	    L1SP_MuteSpeaker(false);
#else
	
      // Extended_PCM4WAY_Stop(P4W_APP_TYPE_UNDER_CALL);
#if ACLOOPBACK_USING_ExtCodec
		  Extcodec_Call_Close();
#else		  
		  PcmEx_Stop();
#endif//ACLOOPBACK_USING_ExtCodec		  	  


      L1SP_SpeechLoopBackEnable(KAL_FALSE);     
      L1SP_Speech_Off();
      spc_setAcLoopbackState(0); 	  	      
          	
		
#endif//ACLOOPBACK_USING_P2W
		
		CLR_SPC_APP_USAGE(SPC_APP_ACLOOPBACK_USAGE);
      
   }
	
	return; 
}

// ----------------------------------------------------------------------------
// Speech on for Hosted Dongle
// ----------------------------------------------------------------------------
#define SPC_DACA_SIZE 320 // 16*20 words, currently fix 16k 
#define SPC_DACA_SIZE_IN_BYTE 640

typedef struct _SPC_DACA_T_{

	kal_bool     dacaIsMicBufWaiting;
	kal_bool     dacaIsSpkBufWaiting;
	
}_SPC_DACA_T;

static _SPC_DACA_T gSpc_Daca;
static kal_uint16 gSpc_Daca_spkBuf[SPC_DACA_SIZE]; 
static kal_uint16 gSpc_Daca_micBuf[SPC_DACA_SIZE]; 

/**
	MD -> AP, Run under AUDL/MED
*/
void spc_daca_sendDlData(void)
{
	kal_bool sendResult = KAL_TRUE;
	spcBufInfo info;

	if(!IS_SPC_APP_USED(SPC_APP_HOSTED_USAGE)){ // prevent data sending after DACA  is off
		kal_trace( TRACE_INFO, SPC_ILLEGAL_SPC_APP_BEHAVIOR, SPC_APP_HOSTED_USAGE, SPC_APP_HOSTED_USAGE, 3);
		return;
	}
	
	info.syncWord = 0x2A2A;
	info.type = AUD_CCCI_STRMBUF_TYPE_DACA_GetSpk;
	info.length = SPC_DACA_SIZE_IN_BYTE; // currently, fix the buffer size in WB 

	sendResult = (SpcIO_WriteDataToAp(&info, sizeof(spcBufInfo), 
				gSpc_Daca_spkBuf, SPC_DACA_SIZE_IN_BYTE,  NULL, 0,
				SPCIO_MSG_FROM_SPC_DACA_DLDATA_NOTIFY));
	
	if(KAL_TRUE !=  sendResult) {
		//clean up the read waiting flag when send fail to prevent blocking. 
		gSpc_Daca.dacaIsSpkBufWaiting = KAL_FALSE;
		kal_trace( TRACE_INFO, SPC_APP_DATA_SEND_FAIL, SPC_APP_HOSTED_USAGE, SPC_APP_HOSTED_USAGE, 0);
	}
}

void spc_daca_sendDlDataDone(void)
{
	
	if(!IS_SPC_APP_USED(SPC_APP_HOSTED_USAGE)){		
		kal_trace( TRACE_INFO, SPC_ILLEGAL_SPC_APP_BEHAVIOR, SPC_APP_HOSTED_USAGE, SPC_APP_HOSTED_USAGE, 4);
		return;
	}
	gSpc_Daca.dacaIsSpkBufWaiting = KAL_FALSE;
}	


/**
	MD -> AP, Run under AUDL/MED
*/
void spc_daca_requestUlData(void)
{
	kal_int32 sendResult;

	if(!IS_SPC_APP_USED(SPC_APP_HOSTED_USAGE)){ // prevent data sending after DACA is off
		kal_trace( TRACE_INFO, SPC_ILLEGAL_SPC_APP_BEHAVIOR, SPC_APP_HOSTED_USAGE, SPC_APP_HOSTED_USAGE, 5);
		return;
	}
	
	sendResult = SpcIO_SendMsgToAp(SPCIO_MSG_FROM_SPC_DACA_ULDATA_REQUEST, SPC_DACA_SIZE, 0);

	if(sendResult<0){ //clean waiting flag of speaker to prevent message blocking
		gSpc_Daca.dacaIsMicBufWaiting = KAL_FALSE;
		kal_trace( TRACE_INFO, SPC_APP_DATA_SEND_FAIL, SPC_APP_HOSTED_USAGE, SPC_APP_HOSTED_USAGE, 1);
	}
}

void spc_daca_writeUlDataDone(kal_uint16 offset, kal_int16 length, SPC_MSG_FROM_T comeFrom)
{

	spcBufInfo info;	
	kal_uint16 curOffSet;

	if(!IS_SPC_APP_USED(SPC_APP_HOSTED_USAGE)){		
		kal_trace( TRACE_INFO, SPC_ILLEGAL_SPC_APP_BEHAVIOR, SPC_APP_HOSTED_USAGE, SPC_APP_HOSTED_USAGE, 6);
		return;
	}

	ASSERT(length>=sizeof(spcBufInfo));
	curOffSet = SpcIo_GetDataFromAp(offset, sizeof(spcBufInfo), &info, comeFrom);


	//header checking
   ASSERT(info.syncWord == 0xA2A2);
   ASSERT(info.type == AUD_CCCI_STRMBUF_TYPE_DACA_FillMic);
   ASSERT(info.length == (length - sizeof(spcBufInfo)));
   
	if(info.length >0){
		ASSERT(info.length == SPC_DACA_SIZE_IN_BYTE);
		SpcIo_GetDataFromAp(curOffSet, SPC_DACA_SIZE_IN_BYTE, gSpc_Daca_micBuf, comeFrom);
	}
	
	gSpc_Daca.dacaIsMicBufWaiting = KAL_FALSE;
}

void spc_dacaDl_handler(void)
{
	if( gSpc_Daca.dacaIsSpkBufWaiting == KAL_TRUE){
		kal_dev_trace( TRACE_INFO, SPC_M2A_DROP, SPC_APP_HOSTED_USAGE, SPC_APP_HOSTED_USAGE, 0);
		return;
	}		

   // speaker buffer comes from SD
	DACA_GetFromSD((uint16 *)gSpc_Daca_spkBuf);

   // Transfer to AUDL
   // Send notification
	SpcIO_MsgQueuePut(SPC_ID_AUDIO_STRM_DACA_DL_DATA_NOTIFY, 0, 0, SPC_MSG_FROM_AUDHISR); 
	
   gSpc_Daca.dacaIsSpkBufWaiting = KAL_TRUE;

}

void spc_dacaUl_handler(void)
{
	if( gSpc_Daca.dacaIsMicBufWaiting == KAL_TRUE){
		kal_dev_trace( TRACE_INFO, SPC_M2A_DROP, SPC_APP_HOSTED_USAGE, SPC_APP_HOSTED_USAGE, 1);
		return;
	}		

   // mic buffer put to SE. 
   DACA_PutToSE((const uint16 *)gSpc_Daca_micBuf);


   // Transfer to AUDL
   // Send notification
	SpcIO_MsgQueuePut(SPC_ID_AUDIO_STRM_DACA_UL_DATA_REQUEST, 0, 0, SPC_MSG_FROM_AUDHISR);
	
   gSpc_Daca.dacaIsMicBufWaiting = KAL_TRUE;
}

/**
	@RAT_Mode: 0 for 2G, 1 for 3G, 2 for 3G324
	@enable: true for daca speech on, false for daca speech off
*/
void Spc_SpeechOnForDaca( kal_uint8 RAT_Mode, kal_bool enable)
{
	if(true == enable){ // speech on with DACA 
	
		// status checking
		/*
		if(IS_SPC_APP_USED(SPC_APP_SPEECH_USAGE)) {
			kal_trace( TRACE_INFO, SPC_ILLEGAL_SPC_APP_BEHAVIOR, SPC_APP_HOSTED_USAGE, SPC_APP_HOSTED_USAGE, 1);

			ASSERT(0);

			return;
		} else if (IS_SPC_APP_USED(SPC_APP_HOLD_USAGE)){
			kal_trace( TRACE_INFO, SPC_ILLEGAL_SPC_APP_BEHAVIOR, SPC_APP_HOSTED_USAGE, SPC_APP_HOSTED_USAGE, 2);

			ASSERT(0);

			return;
		}
		*/
		if(false == spc_mainAppOnCheck(SPC_APP_HOSTED_USAGE))	{
			return;
		}
			

		// disable speech enhancment, due to path is too long, enhancment is meaningless
		L1SP_EnableSpeechEnhancement(false); 

		// clean up setting 
		gSpc_Daca.dacaIsSpkBufWaiting = KAL_FALSE;
		gSpc_Daca.dacaIsMicBufWaiting = KAL_FALSE;
		
		// turn on 
#if defined(__UMTS_RAT__) // rate setting
	if( RAT_Mode != RAT_3G324M_MODE )
		RAT_Mode = RAT_3G_MODE; // Force initial 3G
#else
		RAT_Mode = RAT_2G_MODE;
#endif
		kal_trace( TRACE_INFO, SPC_SPEECH_ON, RAT_Mode);
		L1SP_Speech_On(RAT_Mode);
		DACA_Start(spc_dacaDl_handler, spc_dacaUl_handler, DACA_APP_TYPE_ACTIVE_UL_DL_WB); // fix wb due to USB protocal

		SET_SPC_APP_USAGE(SPC_APP_HOSTED_USAGE);
		
	} else { // speech off with DACA

		// status checking
		if(!IS_SPC_APP_USED(SPC_APP_HOSTED_USAGE)){
			// just leave log and return
			kal_trace( TRACE_INFO, SPC_ILLEGAL_SPC_APP_BEHAVIOR, SPC_APP_HOSTED_USAGE, SPC_APP_HOSTED_USAGE, 1);
			return; 
		}
	
		// turn off
		DACA_Stop(DACA_APP_TYPE_ACTIVE_UL_DL_WB);
		L1SP_Speech_Off();

		// speech enhancment back to normal 
		L1SP_EnableSpeechEnhancement(false); 

		CLR_SPC_APP_USAGE(SPC_APP_HOSTED_USAGE);
	}
}
// ----------------------------------------------------------------------------
// DSP PCM ROUTER
// ----------------------------------------------------------------------------
void Spc_SpeechRouterOn(kal_bool enable)
{
	if(enable) {

		// status check 
		if(false == spc_mainAppOnCheck(SPC_APP_PCMROUTER_USAGE)){
			return;
		}

		//set solution ver before application start.
		
		// application enable
		PcmRouterStart();				
		SET_SPC_APP_USAGE(SPC_APP_PCMROUTER_USAGE);
		
	} else {

		// status checking
		if(!IS_SPC_APP_USED(SPC_APP_PCMROUTER_USAGE)) {
			kal_trace( TRACE_INFO, SPC_ILLEGAL_SPC_APP_BEHAVIOR, SPC_APP_PCMROUTER_USAGE, SPC_APP_PCMROUTER_USAGE, 1);
			
			return;
		}


		// application disable		
		PcmRouterStop();
		CLR_SPC_APP_USAGE(SPC_APP_PCMROUTER_USAGE);
	
	}
}

// ----------------------------------------------------------------------------
// RECORD
// ----------------------------------------------------------------------------
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
/* under construction !*/
/* under construction !*/
#endif 

typedef struct 
{
	bool     isRecordDataWaiting;
	
} _SPC_VM_RECORD_T;

typedef struct 
{
	bool     isRecordDataWaiting;
} _SPC_RAW_PCM_RECORD_T;

// static _SPC_PCM_RECORD_T gSpc_PcmRecord;
static _SPC_VM_RECORD_T gSpc_VmRecord;
static _SPC_RAW_PCM_RECORD_T gSpc_RawPcmRecord;
// static SPC_REC_FORMAT gSpc_Record_format; // only use under record command containing vm/pcm
/*
static kal_uint8 tempMicDataCnt = 0;
static kal_uint16 tempMicData[320]
	// = { 0x4808,0x85, 0x156,0, 0x4,0, 0x146,0x9000, 
	= { 
	0xfff4,0x5a7a, 0x7fff, 0x5a8a, 0x000d, 0xa587, 0x8001, 0xa575, 0xfff4, 0x5a79, 
	0x7fff, 0x5a8a, 0x000d, 0xa587, 0x8001, 0xa575, 0xfff4, 0x5a7a, 0x7fff, 0x5a8a, 
	0x000d, 0xa587, 0x8001, 0xa575, 0xfff4, 0x5a79, 0x7fff, 0x5a8a, 0x000d, 0xa587, 
	0x8001, 0xa575, 0xfff4, 0x5a7a, 0x7fff, 0x5a8a, 0x000d, 0xa587, 0x8001, 0xa575, 
	0xfff4, 0x5a79, 0x7fff, 0x5a8a, 0x000d, 0xa587, 0x8001, 0xa575, 0xfff4, 0x5a78, 
	0x7fff, 0x5a8a, 0x000d, 0xa587, 0x8001, 0xa576, 0xfff3, 0x5a79, 0x7fff, 0x5a8b, 
   0x000d, 0xa587, 0x8001, 0xa575, 0xfff4, 0x5a79, 0x7fff, 0x5a8a, 0x000c, 0xa588, 
   0x8001, 0xa576, 0xfff4, 0x5a79, 0x7fff, 0x5a8b, 0x000d, 0xa587, 0x8001, 0xa575, 	

	0xfff4,0x5a7a, 0x7fff, 0x5a8a, 0x000d, 0xa587, 0x8001, 0xa575, 0xfff4, 0x5a79, 
	0x7fff, 0x5a8a, 0x000d, 0xa587, 0x8001, 0xa575, 0xfff4, 0x5a7a, 0x7fff, 0x5a8a, 
	0x000d, 0xa587, 0x8001, 0xa575, 0xfff4, 0x5a79, 0x7fff, 0x5a8a, 0x000d, 0xa587, 
	0x8001, 0xa575, 0xfff4, 0x5a7a, 0x7fff, 0x5a8a, 0x000d, 0xa587, 0x8001, 0xa575, 
	0xfff4, 0x5a79, 0x7fff, 0x5a8a, 0x000d, 0xa587, 0x8001, 0xa575, 0xfff4, 0x5a78, 
	0x7fff, 0x5a8a, 0x000d, 0xa587, 0x8001, 0xa576, 0xfff3, 0x5a79, 0x7fff, 0x5a8b, 
   0x000d, 0xa587, 0x8001, 0xa575, 0xfff4, 0x5a79, 0x7fff, 0x5a8a, 0x000c, 0xa588, 
   0x8001, 0xa576, 0xfff4, 0x5a79, 0x7fff, 0x5a8b, 0x000d, 0xa587, 0x8001, 0xa575, 

	0xfff4,0x5a7a, 0x7fff, 0x5a8a, 0x000d, 0xa587, 0x8001, 0xa575, 0xfff4, 0x5a79, 
	0x7fff, 0x5a8a, 0x000d, 0xa587, 0x8001, 0xa575, 0xfff4, 0x5a7a, 0x7fff, 0x5a8a, 
	0x000d, 0xa587, 0x8001, 0xa575, 0xfff4, 0x5a79, 0x7fff, 0x5a8a, 0x000d, 0xa587, 
	0x8001, 0xa575, 0xfff4, 0x5a7a, 0x7fff, 0x5a8a, 0x000d, 0xa587, 0x8001, 0xa575, 
	0xfff4, 0x5a79, 0x7fff, 0x5a8a, 0x000d, 0xa587, 0x8001, 0xa575, 0xfff4, 0x5a78, 
	0x7fff, 0x5a8a, 0x000d, 0xa587, 0x8001, 0xa576, 0xfff3, 0x5a79, 0x7fff, 0x5a8b, 
   0x000d, 0xa587, 0x8001, 0xa575, 0xfff4, 0x5a79, 0x7fff, 0x5a8a, 0x000c, 0xa588, 
   0x8001, 0xa576, 0xfff4, 0x5a79, 0x7fff, 0x5a8b, 0x000d, 0xa587, 0x8001, 0xa575, 
   
	0xfff4,0x5a7a, 0x7fff, 0x5a8a, 0x000d, 0xa587, 0x8001, 0xa575, 0xfff4, 0x5a79, 
	0x7fff, 0x5a8a, 0x000d, 0xa587, 0x8001, 0xa575, 0xfff4, 0x5a7a, 0x7fff, 0x5a8a, 
	0x000d, 0xa587, 0x8001, 0xa575, 0xfff4, 0x5a79, 0x7fff, 0x5a8a, 0x000d, 0xa587, 
	0x8001, 0xa575, 0xfff4, 0x5a7a, 0x7fff, 0x5a8a, 0x000d, 0xa587, 0x8001, 0xa575, 
	0xfff4, 0x5a79, 0x7fff, 0x5a8a, 0x000d, 0xa587, 0x8001, 0xa575, 0xfff4, 0x5a78, 
	0x7fff, 0x5a8a, 0x000d, 0xa587, 0x8001, 0xa576, 0xfff3, 0x5a79, 0x7fff, 0x5a8b, 
   0x000d, 0xa587, 0x8001, 0xa575, 0xfff4, 0x5a79, 0x7fff, 0x5a8a, 0x000c, 0xa588, 
   0x8001, 0xa576, 0xfff4, 0x5a79, 0x7fff, 0x5a8b, 0x000d, 0xa587, 0x8001, 0xa575 	

};
*/


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
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif

void spc_RawPcmRec_sendDataDone(void)
{
	if(!IS_SPC_APP_USED(SPC_APP_RAW_PCM_REC_USAGE)){		
		kal_trace( TRACE_INFO, SPC_ILLEGAL_SPC_APP_BEHAVIOR, SPC_APP_RAW_PCM_REC_USAGE, SPC_APP_RAW_PCM_REC_USAGE, 1);
		return;
	}

	gSpc_RawPcmRecord.isRecordDataWaiting = false;
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

/**
	run under AUDL/MED, when process message "SPC_ID_AUDIO_STRM_RAWPCMREC_DATA_NOTIFY"
*/
void spc_record_sendRawPcmData(void)
{
	kal_uint32 add1, add2;
	kal_uint16 len1, len2; 
	spcBufInfo info;
	bool sendResult = true; 

	if( (!IS_SPC_APP_USED(SPC_APP_RAW_PCM_REC_USAGE)) ){ // prevent pcm data sending to AP after record off
		kal_trace( TRACE_INFO, SPC_ILLEGAL_SPC_APP_BEHAVIOR, SPC_APP_RAW_PCM_REC_USAGE, SPC_APP_RAW_PCM_REC_USAGE, 4);
		return;
	}

	RawPcmRec_GetMicDataBufs(&add1, &len1, &add2, &len2);

	kal_trace(TRACE_INFO, RAWPCMREC_GET_DATA_BUFS, add1, len1, add2, len2);
	
	// change the len to unit of byte 
	len1 <<=1; 
	len2 <<=1; 
	
	if(len1 == 0){
		gSpc_RawPcmRecord.isRecordDataWaiting = false;
		kal_trace(TRACE_INFO, RAWPCMREC_GET_EMPTY_DATA);
	} else {
		info.syncWord = 0x2A2A;
		info.type = AUD_CCCI_STRMBUF_TYPE_RAW_PCM_TYPE; 
		info.length = len1 + len2;

        sendResult = SpcIO_WriteDataToAp(&info, sizeof(spcBufInfo), 
             (void *)add1, len1, (void *)add2, len2,
             SPCIO_MSG_FROM_SPC_RAW_PCM_REC_DATA_NOTIFY);
		
		if(sendResult == false) {
            gSpc_RawPcmRecord.isRecordDataWaiting = false;
			kal_trace( TRACE_INFO, SPC_APP_DATA_SEND_FAIL, SPC_APP_RAW_PCM_REC_USAGE, SPC_APP_RAW_PCM_REC_USAGE, 0);
		}
	}
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
/* under construction !*/
/* under construction !*/
#endif


/**
	Send notification to AUDL/MED, prepare to get the recording data
*/
void spc_RawPcmRec_handler(void)
{
	if( gSpc_RawPcmRecord.isRecordDataWaiting == true){
		kal_dev_trace( TRACE_INFO, SPC_M2A_DROP, SPC_APP_RAW_PCM_REC_USAGE, SPC_APP_RAW_PCM_REC_USAGE, 0);
		return;
	}
	
	gSpc_RawPcmRecord.isRecordDataWaiting = true;
	// Send notification to AUDL to begin data transfer
	SpcIO_MsgQueuePut(SPC_ID_AUDIO_STRM_RAWPCMREC_DATA_NOTIFY, 0, 0, SPC_MSG_FROM_AUDHISR);
	
	
	return;
}

void spc_RawPcmRec_On(kal_uint8 dlPosition)
{
	// RAW PCM Record  
	gSpc_RawPcmRecord.isRecordDataWaiting = false;

	RAWPCMREC_Start(spc_RawPcmRec_handler, dlPosition);	
}

void spc_RawPcmRec_Off(void)
{
	RAWPCMREC_Stop();	
}

bool spc_RawPcmRec_getDataWaiting(void)
{
    return(gSpc_RawPcmRecord.isRecordDataWaiting);
}


void spc_vmRec_sendMicDataDone(void)
{
	if(!IS_SPC_APP_USED(SPC_APP_VM_REC_USAGE)){		
		kal_trace( TRACE_INFO, SPC_ILLEGAL_SPC_APP_BEHAVIOR, SPC_APP_VM_REC_USAGE, SPC_APP_VM_REC_USAGE, 1);
		return;
	}

	gSpc_VmRecord.isRecordDataWaiting = false;
}


/**
	run under AUDL/MED, when process message "SPC_ID_AUDIO_STRM_VMREC_DATA_NOTIFY"
*/
void spc_record_sendVmData(void)
{
	
	kal_uint32 add1, add2;
	kal_uint16 len1, len2; 
	kal_uint16 totalLenInWord;
	spcBufInfo info;
	bool sendResult = true; 

	if(!IS_SPC_APP_USED(SPC_APP_VM_REC_USAGE)){ // prevent sening vm data to AP after record off
		kal_trace( TRACE_INFO, SPC_ILLEGAL_SPC_APP_BEHAVIOR, SPC_APP_VM_REC_USAGE, SPC_APP_VM_REC_USAGE, 5);
		return;
	}
	
	// get data, length is word!!
	VmRec_GetReadBufs(&add1, &len1, &add2, &len2);
	totalLenInWord = len1+len2;

	kal_trace(TRACE_INFO, VM_SENDVMDATA_INFO, add1, len1, add2, len2);

	// change the len to unit of byte 
	len1 <<= 1;
	len2 <<= 1;
	
	if(len1 == 0){
		gSpc_VmRecord.isRecordDataWaiting = false;
		kal_trace( TRACE_INFO, SPC_APP_DATA_SEND_FAIL, SPC_APP_VM_REC_USAGE, SPC_APP_VM_REC_USAGE, 1);
		
	} else {
		info.syncWord = 0x2A2A;
		info.type = AUD_CCCI_STRMBUF_TYPE_VM_TYPE; 
		info.length = len1 + len2; 

#if 0
/* under construction !*/
#endif			
		sendResult = SpcIO_WriteDataToAp(&info, sizeof(spcBufInfo), 
			(void *)add1, len1, (void *)add2, len2,
			SPCIO_MSG_FROM_SPC_VM_REC_DATA_NOTIFY);
#if 0		
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif

		VmRec_ReadDataDone(totalLenInWord);
		
		if(sendResult == false) {
			gSpc_VmRecord.isRecordDataWaiting = false;
			kal_trace( TRACE_INFO, SPC_APP_DATA_SEND_FAIL, SPC_APP_VM_REC_USAGE, SPC_APP_VM_REC_USAGE, 2);;
		}
	}
}

void spc_vmRec_handler(void)
{
	if( gSpc_VmRecord.isRecordDataWaiting == true){
		kal_dev_trace( TRACE_INFO, SPC_M2A_DROP, SPC_APP_VM_REC_USAGE, SPC_APP_VM_REC_USAGE, 1);
		return;
	}
	
	gSpc_VmRecord.isRecordDataWaiting = true;
   
	SpcIO_MsgQueuePut(SPC_ID_AUDIO_STRM_VMREC_DATA_NOTIFY, 0, 0, SPC_MSG_FROM_AUDHISR);
	
	return;
}

void spc_vmRec_On(void)
{
	VMREC_Start(spc_vmRec_handler, false);
	
	gSpc_VmRecord.isRecordDataWaiting = false;
}

void spc_vmRec_Off(void)
{
	gSpc_VmRecord.isRecordDataWaiting = true;
	
	VMREC_Stop(false);
}

// ---- Entry Points and Checking -----

/**
	@return: true for pass checking, flase for fail checking
*/
bool spc_recordStartCheck(MSG_SPC_APP_T app)
{
/*
	if(!IS_SPC_ID_SPEECH_CUSTOM_DATA_REQUEST_DONE){ // prevent record on before EM data sending
		kal_trace( TRACE_INFO, SPC_ILLEGAL_SPC_APP_BEHAVIOR, app, app, 0);
		return false;
	}
*/
	if(IS_SPC_APP_USED(SPC_APP_HOLD_USAGE)){ // under SID generation state, record function is not provided
		kal_trace( TRACE_INFO, SPC_ILLEGAL_SPC_APP_BEHAVIOR_CHECK, app, SPC_APP_HOLD_USAGE, SPC_APP_HOLD_USAGE, gSpc.spcAppUsage);		

		ASSERT(0);
		
		return false;
	}

	// system is under idle state, we do not provide record function. 
	if((!IS_SPC_APP_USED(SPC_APP_SPEECH_USAGE)) 
		&& (!IS_SPC_APP_USED(SPC_APP_ACLOOPBACK_USAGE))
		&& (!IS_SPC_APP_USED(SPC_APP_CTM_USAGE))
		&& (!IS_SPC_APP_USED(SPC_APP_HOSTED_USAGE))
		&& (!IS_SPC_APP_USED(SPC_APP_PCMROUTER_USAGE))
		){ 
		kal_trace( TRACE_INFO, SPC_ILLEGAL_SPC_APP_BEHAVIOR, app, app, 3);		

		// REMOVE
		// ASSERT(0);
		
		return false;
	}

	// defualt
	return true;
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


/**
	Open vm logging to AP side. This can concurrency with PCM record (spc_PcmRecordStart)
*/
void spc_VmRecordStart(void)
{
	if(true!= spc_recordStartCheck(SPC_APP_VM_REC_USAGE)){
		return;
	}

	// prevent re-entry
	if(IS_SPC_APP_USED(SPC_APP_VM_REC_USAGE)){ 
		kal_trace( TRACE_INFO, SPC_ILLEGAL_SPC_APP_BEHAVIOR, SPC_APP_VM_REC_USAGE, SPC_APP_VM_REC_USAGE, 2);
		return;
	}

	// It is illegle to use different formats to open record, so force assert.
#if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif 	
	
	spc_vmRec_On();

	SET_SPC_APP_USAGE(SPC_APP_VM_REC_USAGE);
}

/**
	Pair with spc_VmRecordStart(), to close vm logging.
*/
void spc_VmRecordStop(void)
{
	if(!IS_SPC_APP_USED(SPC_APP_VM_REC_USAGE)){
		// just leave log and return
		kal_trace( TRACE_INFO, SPC_ILLEGAL_SPC_APP_BEHAVIOR, SPC_APP_VM_REC_USAGE, SPC_APP_VM_REC_USAGE, 1);
		return; 
	} 
	
	spc_vmRec_Off();
	CLR_SPC_APP_USAGE(SPC_APP_VM_REC_USAGE);
}


/**
	Open RAW PCM record. This can concurrency with VM record (spc_VmRecordStart)
	Only support speech on record!! (Speech on for daca is NOT support)
*/
void spc_RawPcmRecordStart(kal_uint8 dlPosition)
{
	if(true != spc_recordStartCheck(SPC_APP_RAW_PCM_REC_USAGE)){
		return;
	}

	if(IS_SPC_APP_USED(SPC_APP_HOSTED_USAGE)) // PCM record is not allow on DACA
	{
		kal_trace( TRACE_INFO, SPC_ILLEGAL_SPC_APP_BEHAVIOR, SPC_APP_RAW_PCM_REC_USAGE, SPC_APP_RAW_PCM_REC_USAGE, 4);
		ASSERT(0);
		return;
	}

	// prevent re-entry
	if(IS_SPC_APP_USED(SPC_APP_RAW_PCM_REC_USAGE)){ 
		kal_trace( TRACE_INFO, SPC_ILLEGAL_SPC_APP_BEHAVIOR, SPC_APP_RAW_PCM_REC_USAGE, SPC_APP_RAW_PCM_REC_USAGE, 2);
		return;
	}

#if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif

	spc_RawPcmRec_On(dlPosition);
	SET_SPC_APP_USAGE(SPC_APP_RAW_PCM_REC_USAGE);
}


void spc_RawPcmRecordStop(void)
{
	if(!IS_SPC_APP_USED(SPC_APP_RAW_PCM_REC_USAGE)){
		// just leave log and return
		kal_trace( TRACE_INFO, SPC_ILLEGAL_SPC_APP_BEHAVIOR, SPC_APP_RAW_PCM_REC_USAGE, SPC_APP_RAW_PCM_REC_USAGE, 0);
		return; 
	}
	
	spc_RawPcmRec_Off();
	CLR_SPC_APP_USAGE(SPC_APP_RAW_PCM_REC_USAGE);
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
#ifdef CONNECT_WM8904
/* under construction !*/
#endif  
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

// ----------------------------------------------------------------------------
// PCMNWAY
// ----------------------------------------------------------------------------
#define SPC_PCMNWAY_MAX_SIZE_OF_SE_BUF  960  // unit is 16bit(word)
#define SPC_PCMNWAY_MAX_SIZE_OF_SPK_BUF 960  // unit is 16bit(word), max = 48*20 = 960
#define SPC_PCMNWAY_MAX_SIZE_OF_MIC_BUF 1922 // unit is 16bit(word), max = 960*2 +2(agc use)
#define SPC_PCMNWAY_MAX_SIZE_OF_SD_BUF  960  // unit is 16bit(word)


#define SPC_PNW_MSG_BUFFER_SE  1 // Bit 0
#define SPC_PNW_MSG_BUFFER_SPK 2 // Bit 1
#define SPC_PNW_MSG_BUFFER_MIC 4 // Bit 2
#define SPC_PNW_MSG_BUFFER_SD  8 // Bit 3

#define SPC_PNW_MSG_BIT_BAND   4

typedef enum
{

	SPC_PCMNWAY_APP_TYPE_NONE = 0,
#if 0		
/* under construction !*/
/* under construction !*/
#endif
	
	SPC_PCMNWAY_APP_TYPE_UNSET = 0xffff,	
} SPC_PCMNWAY_APP_TYPE_T;

typedef enum {
  SPC_PCMNWAY_FORMAT_P2W_NORMAL = 0,
  SPC_PCMNWAY_FORMAT_P2W_VOIP,
  SPC_PCMNWAY_FORMAT_P2W_CAL,          //calibration 
  SPC_PCMNWAY_FORMAT_P2W_WB_CAL,       //wb calibration
  SPC_PCMNWAY_FORMAT_P2W_WB_NORMAL,     //normal usage for WB p2w

  SPC_PCMNWAY_FORMAT_UNSET = 0xffff,
}SPC_PCMNWAY_Format;


typedef struct _SPC_PCMNWAY_T_
{
	kal_uint8    pnwBufInfo; //ref to SPC_PNW_MSG_BUFFER_x
	kal_uint8    pnwBand; //0: for narrow band, 1: for wide band
	// kal_uint16   pnwAppType;

	kal_bool     pnwIsMicBufWaiting;
	kal_bool     pnwIsSpkBufWaiting;
	
	kal_uint32   micBufSize; // unit is byte (8bit)
	kal_uint32   spkBufSize; // unit is byte (8bit)
	kal_uint32   seBufSize;
	kal_uint32   sdBufSize;

	
}_SPC_PCMNWAY_T;

static _SPC_PCMNWAY_T gSpc_Pcmnway;
static kal_uint16 gSpc_Pcmnway_seBuf[SPC_PCMNWAY_MAX_SIZE_OF_SE_BUF];
static kal_uint16 gSpc_Pcmnway_spkBuf[SPC_PCMNWAY_MAX_SIZE_OF_SPK_BUF]; 
static kal_uint16 gSpc_Pcmnway_micBuf[SPC_PCMNWAY_MAX_SIZE_OF_MIC_BUF]; 
static kal_uint16 gSpc_Pcmnway_sdBuf[SPC_PCMNWAY_MAX_SIZE_OF_SD_BUF];

/*
__attribute__  ((section ("NONCACHEDZI"))) static kal_uint16 tempUlData[179]
	// = { 0x4808,0x85, 0x156,0, 0x4,0, 0x146,0x9000, 
	= { 0,0, 0,0, 0,0, 0,0, 
	1, 2, 3, 4, 5, 6, 7, 8,
	0x2A2A, 0x2, 0x140, 
	0xfff4,0x5a7a, 0x7fff, 0x5a8a, 0x000d, 0xa587, 0x8001, 0xa575, 0xfff4, 0x5a79, 
	0x7fff, 0x5a8a, 0x000d, 0xa587, 0x8001, 0xa575, 0xfff4, 0x5a7a, 0x7fff, 0x5a8a, 
	0x000d, 0xa587, 0x8001, 0xa575, 0xfff4, 0x5a79, 0x7fff, 0x5a8a, 0x000d, 0xa587, 
	0x8001, 0xa575, 0xfff4, 0x5a7a, 0x7fff, 0x5a8a, 0x000d, 0xa587, 0x8001, 0xa575, 
	0xfff4, 0x5a79, 0x7fff, 0x5a8a, 0x000d, 0xa587, 0x8001, 0xa575, 0xfff4, 0x5a78, 
	0x7fff, 0x5a8a, 0x000d, 0xa587, 0x8001, 0xa576, 0xfff3, 0x5a79, 0x7fff, 0x5a8b, 
   0x000d, 0xa587, 0x8001, 0xa575, 0xfff4, 0x5a79, 0x7fff, 0x5a8a, 0x000c, 0xa588, 
   0x8001, 0xa576, 0xfff4, 0x5a79, 0x7fff, 0x5a8b, 0x000d, 0xa587, 0x8001, 0xa575, 	

	0xfff4,0x5a7a, 0x7fff, 0x5a8a, 0x000d, 0xa587, 0x8001, 0xa575, 0xfff4, 0x5a79, 
	0x7fff, 0x5a8a, 0x000d, 0xa587, 0x8001, 0xa575, 0xfff4, 0x5a7a, 0x7fff, 0x5a8a, 
	0x000d, 0xa587, 0x8001, 0xa575, 0xfff4, 0x5a79, 0x7fff, 0x5a8a, 0x000d, 0xa587, 
	0x8001, 0xa575, 0xfff4, 0x5a7a, 0x7fff, 0x5a8a, 0x000d, 0xa587, 0x8001, 0xa575, 
	0xfff4, 0x5a79, 0x7fff, 0x5a8a, 0x000d, 0xa587, 0x8001, 0xa575, 0xfff4, 0x5a78, 
	0x7fff, 0x5a8a, 0x000d, 0xa587, 0x8001, 0xa576, 0xfff3, 0x5a79, 0x7fff, 0x5a8b, 
   0x000d, 0xa587, 0x8001, 0xa575, 0xfff4, 0x5a79, 0x7fff, 0x5a8a, 0x000c, 0xa588, 
   0x8001, 0xa576, 0xfff4, 0x5a79, 0x7fff, 0x5a8b, 0x000d, 0xa587, 0x8001, 0xa575 	
};
*/

/**
	MD -> AP, Run under AUDL/MED
*/
void spc_pcmNWay_sendUlData(void)
{
	kal_bool sendResultMic = KAL_TRUE;
	kal_bool sendResultSd = KAL_TRUE;
	spcBufInfo info;

	if(!IS_SPC_APP_USED(SPC_APP_PCMNWAY_USAGE)){ // prevent data sending after PCMNWAY is off
		kal_trace( TRACE_INFO, SPC_ILLEGAL_SPC_APP_BEHAVIOR, SPC_APP_PCMNWAY_USAGE, SPC_APP_PCMNWAY_USAGE, 4);
		return;
	}
	
	if (gSpc_Pcmnway.pnwBufInfo & SPC_PNW_MSG_BUFFER_MIC) {
		info.syncWord = 0x2A2A;
		info.type = AUD_CCCI_STRMBUF_TYPE_PCM_GetFromMic; 
#if 0 //defined(__ENABLE_SPEECH_DVT__)
/* under construction !*/
#else // defined(__ENABLE_SPEECH_DVT__)
		info.length = gSpc_Pcmnway.micBufSize;
#endif // defined(__ENABLE_SPEECH_DVT__)

		// for debug	
		/*
		sendResultMic = spcIO_sendDataViaCCCI(
			SPCIO_CCCI_MSG_CONSTRCUT_DATA_CMD(MSG_M2A_DATA_NOTIFY_PNW_ULREAD, 326), 
			&(tempUlData[8]), 342);
		*/

#if 0 //defined(__ENABLE_SPEECH_DVT__)
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif // defined(__ENABLE_SPEECH_DVT__)
		{
            sendResultMic = (SpcIO_WriteDataToAp(&info, sizeof(spcBufInfo), 
                gSpc_Pcmnway_micBuf, gSpc_Pcmnway.micBufSize,  NULL, 0,
                SPCIO_MSG_FROM_SPC_PNW_ULDATA_NOTIFY));
        }

	}
	
	if (gSpc_Pcmnway.pnwBufInfo & SPC_PNW_MSG_BUFFER_SD) {
		info.syncWord = 0x2A2A;
		info.type = AUD_CCCI_STRMBUF_TYPE_PCM_GetfromSD; 
		info.length = gSpc_Pcmnway.sdBufSize;

		sendResultSd = (SpcIO_WriteDataToAp(&info, sizeof(spcBufInfo), 
				gSpc_Pcmnway_sdBuf, gSpc_Pcmnway.sdBufSize, NULL, 0,
				SPCIO_MSG_FROM_SPC_PNW_ULDATA_NOTIFY));		
	}
	
	if((KAL_TRUE !=  sendResultMic) || (KAL_TRUE !=  sendResultSd)) {
			//clean up the read waiting flag when send fail to prevent blocking. 
			gSpc_Pcmnway.pnwIsMicBufWaiting = KAL_FALSE;
			kal_trace( TRACE_INFO, SPC_APP_DATA_SEND_FAIL, SPC_APP_PCMNWAY_USAGE, SPC_APP_PCMNWAY_USAGE, 0);
	}	
}

void spc_pcmNWay_sendUlDataDone(void)
{
	
	if(!IS_SPC_APP_USED(SPC_APP_PCMNWAY_USAGE)){		
		kal_trace( TRACE_INFO, SPC_ILLEGAL_SPC_APP_BEHAVIOR, SPC_APP_PCMNWAY_USAGE, SPC_APP_PCMNWAY_USAGE, 1);
		return;
	}
	gSpc_Pcmnway.pnwIsMicBufWaiting = KAL_FALSE;

}	

/**
	MD -> AP
*/
// void spc_pcmNWay_requestDlData(uint16 bufLength)
void spc_pcmNWay_requestDlData(void)
{
	kal_int32 sendResult;

	if(!IS_SPC_APP_USED(SPC_APP_PCMNWAY_USAGE)){ // prevent data sending after PCMNWAY is off
		kal_trace( TRACE_INFO, SPC_ILLEGAL_SPC_APP_BEHAVIOR, SPC_APP_PCMNWAY_USAGE, SPC_APP_PCMNWAY_USAGE, 5);
		return;
	}

#if 0 // defined(__ENABLE_SPEECH_DVT__)
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif // defined(__ENABLE_SPEECH_DVT__)
	{
	    sendResult = SpcIO_SendMsgToAp(SPCIO_MSG_FROM_SPC_PNW_DLDATA_REQUEST, gSpc_Pcmnway.spkBufSize, 0);
	}
	// SPCIO_CCCI_MSG_ORG_CONSTRCUT_CMD(MSG_M2A_DATA_REQUEST_PNW_DLDATA, gSpc_Pcmnway.spkBufSize));

	if(sendResult<0){ //clean waiting flag of speaker to prevent message blocking
		gSpc_Pcmnway.pnwIsSpkBufWaiting = KAL_FALSE;
		kal_trace( TRACE_INFO, SPC_APP_DATA_SEND_FAIL, SPC_APP_PCMNWAY_USAGE, SPC_APP_PCMNWAY_USAGE, 1);
	}
}

void spc_pcmNWay_writeDlDataDone(kal_uint16 offset, kal_int16 length, SPC_MSG_FROM_T comeFrom)
{

	spcBufInfo info;	
	kal_uint16 curOffSet;

	if(!IS_SPC_APP_USED(SPC_APP_PCMNWAY_USAGE)){		
		kal_trace( TRACE_INFO, SPC_M2A_DROP, SPC_APP_PCMNWAY_USAGE, SPC_APP_PCMNWAY_USAGE, 5);
		return;
	}

	ASSERT(length>=sizeof(spcBufInfo));
	curOffSet = SpcIo_GetDataFromAp(offset, sizeof(spcBufInfo), &info, comeFrom);


	//header checking
   ASSERT(info.syncWord == 0xA2A2);
   ASSERT( (info.type == AUD_CCCI_STRMBUF_TYPE_PCM_FillSE) || (info.type == AUD_CCCI_STRMBUF_TYPE_PCM_FillSpk) );
   ASSERT(info.length == (length - sizeof(spcBufInfo)));
   
	if(info.length >0){
		if (info.type == AUD_CCCI_STRMBUF_TYPE_PCM_FillSE) { //SE
			ASSERT(info.length == gSpc_Pcmnway.seBufSize);
			SpcIo_GetDataFromAp(curOffSet, gSpc_Pcmnway.seBufSize, gSpc_Pcmnway_seBuf, comeFrom);
		} else { //SPK
#if 0 //defined(__ENABLE_SPEECH_DVT__)
/* under construction !*/
/* under construction !*/
#else // defined(__ENABLE_SPEECH_DVT__)
			ASSERT(info.length == gSpc_Pcmnway.spkBufSize);
			SpcIo_GetDataFromAp(curOffSet, gSpc_Pcmnway.spkBufSize, gSpc_Pcmnway_spkBuf, comeFrom);
#endif // defined(__ENABLE_SPEECH_DVT__)
		}
	}
	
	gSpc_Pcmnway.pnwIsSpkBufWaiting = KAL_FALSE;
}


void spc_pcm4way_handler( void )
{
	// spc_pcm4wayDl_handler();
	kal_take_spinlock(pcmEx.PCMEXspinLockID, KAL_INFINITE_WAIT);
	if(pcmEx.running == 0){
		kal_give_spinlock(pcmEx.PCMEXspinLockID);
        return;
	}	
	if( gSpc_Pcmnway.pnwIsSpkBufWaiting == KAL_TRUE){
		kal_dev_trace( TRACE_INFO, SPC_M2A_DROP, SPC_APP_PCMNWAY_USAGE, SPC_APP_PCMNWAY_USAGE, 4);
		kal_give_spinlock(pcmEx.PCMEXspinLockID);
		return;
	}		

	// SE buffer
	if (gSpc_Pcmnway.pnwBufInfo & SPC_PNW_MSG_BUFFER_SE) {
      gSpc_Pcmnway.seBufSize = ((PCM4WAY_PutToSE((const uint16*)gSpc_Pcmnway_seBuf)) << 1);
   }
	
   // Speaker buffer
   if (gSpc_Pcmnway.pnwBufInfo & SPC_PNW_MSG_BUFFER_SPK) {
      gSpc_Pcmnway.spkBufSize = ((PCM4WAY_PutToSpk((const uint16*)gSpc_Pcmnway_spkBuf)) << 1);
   }
   kal_give_spinlock(pcmEx.PCMEXspinLockID);
   // Transfer to AUDL
   // Send notification
	SpcIO_MsgQueuePut(SPC_ID_AUDIO_STRM_PNW_DL_DATA_REQUEST, 0, 0, SPC_MSG_FROM_AUDHISR);
	kal_take_spinlock(pcmEx.PCMEXspinLockID, KAL_INFINITE_WAIT);
	if(pcmEx.running == 0){
		kal_give_spinlock(pcmEx.PCMEXspinLockID);
        return;
	}	
   gSpc_Pcmnway.pnwIsSpkBufWaiting = KAL_TRUE;

	// --------------------------------------------------------------
	// spc_pcm4wayUl_handler();
		if( gSpc_Pcmnway.pnwIsMicBufWaiting == KAL_TRUE){
		kal_dev_trace( TRACE_INFO, SPC_M2A_DROP, SPC_APP_PCMNWAY_USAGE, SPC_APP_PCMNWAY_USAGE, 3);
		kal_give_spinlock(pcmEx.PCMEXspinLockID);
		return;
	}		

	
   // Microphone buffer
   if (gSpc_Pcmnway.pnwBufInfo & SPC_PNW_MSG_BUFFER_MIC) {
      gSpc_Pcmnway.micBufSize = ((PCM4WAY_GetFromMic((uint16*)gSpc_Pcmnway_micBuf))<<1);
   }

	// SD buffer
	if (gSpc_Pcmnway.pnwBufInfo & SPC_PNW_MSG_BUFFER_SD) {
      gSpc_Pcmnway.sdBufSize = ((PCM4WAY_GetFromSD((uint16*)gSpc_Pcmnway_sdBuf))<<1);
   }
	
   // Transfer to AUDL
   // Send notification
  gSpc_Pcmnway.pnwIsMicBufWaiting = KAL_TRUE; 
  kal_give_spinlock(pcmEx.PCMEXspinLockID);
	SpcIO_MsgQueuePut(SPC_ID_AUDIO_STRM_PNW_UL_DATA_NOTIFY, 0, 0, SPC_MSG_FROM_AUDHISR);
	
   
}

void spc_pcm2wayUl_handler( void )
{
	kal_take_spinlock(pcmEx.PCMEXspinLockID, KAL_INFINITE_WAIT);
	if(pcmEx.running == 0){
		kal_give_spinlock(pcmEx.PCMEXspinLockID);
        return;
	}	
#if defined(__ENABLE_SPEECH_DVT__)
	kal_uint16 bufLen; 
#endif // defined(__ENABLE_SPEECH_DVT__)

	if( gSpc_Pcmnway.pnwIsMicBufWaiting == KAL_TRUE){
		kal_dev_trace( TRACE_INFO, SPC_M2A_DROP, SPC_APP_PCMNWAY_USAGE, SPC_APP_PCMNWAY_USAGE, 1);
		kal_give_spinlock(pcmEx.PCMEXspinLockID);
		return;
	}		

   // Microphone buffer
   if (gSpc_Pcmnway.pnwBufInfo & SPC_PNW_MSG_BUFFER_MIC) {
#if 0 //defined(__ENABLE_SPEECH_DVT__)
/* under construction !*/
#else // defined(__ENABLE_SPEECH_DVT__)
      gSpc_Pcmnway.micBufSize = ((PCM2WAY_GetFromMic((uint16*)gSpc_Pcmnway_micBuf))<<1);
#endif // defined(__ENABLE_SPEECH_DVT__)
   }
   gSpc_Pcmnway.pnwIsMicBufWaiting = KAL_TRUE;
   kal_give_spinlock(pcmEx.PCMEXspinLockID);
   // Transfer to AUDL
   // Send notification
#if 0 // defined(__ENABLE_SPEECH_DVT__)
/* under construction !*/
#else // defined(__ENABLE_SPEECH_DVT__)
	SpcIO_MsgQueuePut(SPC_ID_AUDIO_STRM_PNW_UL_DATA_NOTIFY, 0, 0, SPC_MSG_FROM_AUDHISR);
#endif // defined(__ENABLE_SPEECH_DVT__)
	
   
}

void spc_pcm2wayDl_handler( void )
{
  kal_take_spinlock(pcmEx.PCMEXspinLockID, KAL_INFINITE_WAIT);
	if(pcmEx.running == 0){
		kal_give_spinlock(pcmEx.PCMEXspinLockID);
        return;
	}  
#if 0 //defined(__ENABLE_SPEECH_DVT__)
/* under construction !*/
#endif // defined(__ENABLE_SPEECH_DVT__)

	if( gSpc_Pcmnway.pnwIsSpkBufWaiting == KAL_TRUE){
		kal_dev_trace( TRACE_INFO, SPC_M2A_DROP, SPC_APP_PCMNWAY_USAGE, SPC_APP_PCMNWAY_USAGE, 2);
		kal_give_spinlock(pcmEx.PCMEXspinLockID);
		return;
	}		

   // Speaker buffer
   if (gSpc_Pcmnway.pnwBufInfo & SPC_PNW_MSG_BUFFER_SPK) {
#if 0 //defined(__ENABLE_SPEECH_DVT__)
/* under construction !*/
#else // defined(__ENABLE_SPEECH_DVT__)
      gSpc_Pcmnway.spkBufSize = ((PCM2WAY_PutToSpk((const uint16*)gSpc_Pcmnway_spkBuf))<<1);
#endif // defined(__ENABLE_SPEECH_DVT__)
   }
   gSpc_Pcmnway.pnwIsSpkBufWaiting = KAL_TRUE;
   kal_give_spinlock(pcmEx.PCMEXspinLockID);
   // Transfer to AUDL
   // Send notification
#if 0 // defined(__ENABLE_SPEECH_DVT__)
/* under construction !*/
#else // defined(__ENABLE_SPEECH_DVT__)
	SpcIO_MsgQueuePut(SPC_ID_AUDIO_STRM_PNW_DL_DATA_REQUEST, 0, 0, SPC_MSG_FROM_AUDHISR);
#endif // defined(__ENABLE_SPEECH_DVT__)
	
   
}


void spc_pcm2way_handler( void )
{
	spc_pcm2wayDl_handler();
	spc_pcm2wayUl_handler();
}


/**
	@param: 
		[0:3] pcmnway buffer infor, please ref  SPC_PNW_MSG_BUFFER_x
		[4]: band information: 0 narrow band, 1 wide band, 
	@format: please reference SPC_PCMNWAY_Format. If its value is 0xFFFF(undefine), we decide it by band information. 
	@appType: application type using in PCMNWAY.  If its value is 0xFFFF(undefine), we will choose by ourself
*/
void spc_PcmNWayStart(kal_uint32 param, SPC_PCMNWAY_Format format) // , SPC_PCMNWAY_APP_TYPE_T appType)
{
	uint32 cfgUL1 , cfgUL2, cfgUL3, cfgUL4, cfgDL;
	
	if(IS_SPC_APP_USED(SPC_APP_HOLD_USAGE) || IS_SPC_APP_USED(SPC_APP_HOSTED_USAGE)){
		kal_trace( TRACE_INFO, SPC_ILLEGAL_SPC_APP_BEHAVIOR, SPC_APP_PCMNWAY_USAGE, SPC_APP_PCMNWAY_USAGE, 3);		
		
		ASSERT(0);

		return;
	}


	gSpc_Pcmnway.pnwBufInfo = (param & 0xf); // i.e.  param & (SPC_PNW_MSG_BUFFER_SE|SPC_PNW_MSG_BUFFER_SPK|SPC_PNW_MSG_BUFFER_MIC|SPC_PNW_MSG_BUFFER_SD)
	gSpc_Pcmnway.pnwBand = ((param >> SPC_PNW_MSG_BIT_BAND) & 0x1);

	ASSERT(gSpc_Pcmnway.pnwBufInfo != 0);

	
	// buffer rest			 			 
	memset( (kal_uint8 *)gSpc_Pcmnway_seBuf, 0, SPC_PCMNWAY_MAX_SIZE_OF_SE_BUF*sizeof(uint16) );
	memset( (kal_uint8 *)gSpc_Pcmnway_spkBuf, 0, SPC_PCMNWAY_MAX_SIZE_OF_SPK_BUF*sizeof(uint16) );
	memset( (kal_uint8 *)gSpc_Pcmnway_micBuf, 0, SPC_PCMNWAY_MAX_SIZE_OF_MIC_BUF*sizeof(uint16) );
	memset( (kal_uint8 *)gSpc_Pcmnway_sdBuf, 0, SPC_PCMNWAY_MAX_SIZE_OF_SD_BUF*sizeof(uint16) );
	gSpc_Pcmnway.micBufSize = 0;
	gSpc_Pcmnway.spkBufSize = 0;
	gSpc_Pcmnway.seBufSize = 0;
	gSpc_Pcmnway.sdBufSize = 0;
			 
	// reset wating 
	gSpc_Pcmnway.pnwIsMicBufWaiting = KAL_FALSE;
	gSpc_Pcmnway.pnwIsSpkBufWaiting = KAL_FALSE;


	// UL1 path
	cfgUL1 =DATA_SELECT_AFTER_ENH;
	if(SPC_PNW_MSG_BUFFER_MIC & gSpc_Pcmnway.pnwBufInfo ) {
		cfgUL1 |= USE_D2M_PATH;
	}
	if(SPC_PNW_MSG_BUFFER_SE & gSpc_Pcmnway.pnwBufInfo ) {
		cfgUL1 |= USE_M2D_PATH;
	}

	//UL2 path
	cfgUL2=DATA_SELECT_AFTER_ENH;
	//UL3 path
	cfgUL3=DATA_SELECT_AFTER_ENH;
	//UL4 path
	cfgUL4=DATA_SELECT_AFTER_ENH;
	
	// DL path
	cfgDL = 0;
	if(SPC_PNW_MSG_BUFFER_SD & gSpc_Pcmnway.pnwBufInfo ) {
		cfgDL |= USE_D2M_PATH;
	}
	if(SPC_PNW_MSG_BUFFER_SPK & gSpc_Pcmnway.pnwBufInfo ) {
		cfgDL |= USE_M2D_PATH;
	}
	
	if (IS_SPC_APP_USED(SPC_APP_SPEECH_USAGE)) { // in call
		if( (SPC_PNW_MSG_BUFFER_SPK|SPC_PNW_MSG_BUFFER_MIC) == gSpc_Pcmnway.pnwBufInfo)  { // 2way
			Del_PcmEx_Start(spc_pcm2wayDl_handler, spc_pcm2wayUl_handler, 
				cfgUL1, cfgUL2, cfgUL3, cfgUL4, cfgDL);
		} else {
			Del_PcmEx_Start(spc_pcm4way_handler, NULL, 
				cfgUL1, cfgUL2, cfgUL3, cfgUL4, cfgDL);
		}
		
		
	} else {	// idle
	
		PCMEX_BAND band = PCMEX_BAND_UNSET;
		PCMEX_IDLE_ENH_SETTING enhSetting = PCMEX_IDLE_ENH_SETTING_WITH; // default with

		band = ((gSpc_Pcmnway.pnwBufInfo == 0)? PCMEX_BAND_NB : PCMEX_BAND_WB);
#if 0		
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif		
		if( (SPC_PNW_MSG_BUFFER_SPK|SPC_PNW_MSG_BUFFER_MIC) == gSpc_Pcmnway.pnwBufInfo)  { // 2way
			Idle_PcmEx_Start(spc_pcm2wayDl_handler, spc_pcm2wayUl_handler, 
				cfgUL1, cfgUL2, cfgUL3, cfgUL4, cfgDL, 
				band, enhSetting);
		} else {
			Idle_PcmEx_Start(spc_pcm4way_handler, NULL, 
				cfgUL1, cfgUL2, cfgUL3, cfgUL4, cfgDL,
				band, enhSetting);
		}		

	}


	// record the spc application usage status
	SET_SPC_APP_USAGE(SPC_APP_PCMNWAY_USAGE);
				
}

void spc_PcmNWayStop()
{
	
	if(!IS_SPC_APP_USED(SPC_APP_PCMNWAY_USAGE)){
		// just leave log and return
		kal_trace( TRACE_INFO, SPC_ILLEGAL_SPC_APP_BEHAVIOR, SPC_APP_PCMNWAY_USAGE, SPC_APP_PCMNWAY_USAGE, 0);
		return; 
	} 

	PcmEx_Stop();
	
	// clear buffer
	gSpc_Pcmnway.pnwBufInfo = 0;
	gSpc_Pcmnway.pnwBand = 0;
	gSpc_Pcmnway.micBufSize = 0;
	gSpc_Pcmnway.spkBufSize = 0;
	gSpc_Pcmnway.seBufSize = 0;
	gSpc_Pcmnway.sdBufSize = 0;

	CLR_SPC_APP_USAGE(SPC_APP_PCMNWAY_USAGE);

}

// ----------------------------------------------------------------------------
// PCMMIXER
// ----------------------------------------------------------------------------
typedef struct _SPC_PCMMIXER_T_
{
	kal_bool     isUlBufWaiting;
	kal_bool     isDlBufWaiting;
}_SPC_PCMMIXER_T;

static _SPC_PCMMIXER_T gSpc_PCMMixer;

void spc_PCMMixer_UL_handler( void )
{
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
#endif
	   
	// Send notification
	SpcIO_MsgQueuePut(SPC_ID_AUDIO_PCMMIXER_UL_DATA_REQUEST, 0, 0, SPC_MSG_FROM_AUDHISR);
}

void spc_PCMMixer_DL_handler( void )
{	
	if(gSpc_PCMMixer.isDlBufWaiting){
		kal_trace( TRACE_INFO, SPC_M2A_DROP, SPC_APP_MIXER_USAGE, SPC_APP_MIXER_USAGE, 0);
		return;
	}
	gSpc_PCMMixer.isDlBufWaiting = KAL_TRUE;
	// Send notification
	SpcIO_MsgQueuePut(SPC_ID_AUDIO_PCMMIXER_DL_DATA_REQUEST, 0, 0, SPC_MSG_FROM_AUDHISR);	
}


void spc_PCMMixerConfig(kal_bool isUlMix, kal_bool isDlMix, uint8 ulGainLevel, uint8 dlGainLevel)
{
	PcmMixer_ConfigUl(isUlMix, ulGainLevel);
	PcmMixer_ConfigDl(isDlMix, dlGainLevel);	
}

void spc_PCMMixerStart(kal_bool isUlMix, kal_bool isDlMix, uint8 ulGainLevel, uint8 dlGainLevel)
{
	if(IS_SPC_APP_USED(SPC_APP_MIXER_USAGE)){ // application re-entry
		kal_trace( TRACE_INFO, SPC_ILLEGAL_SPC_APP_BEHAVIOR, SPC_APP_MIXER_USAGE, SPC_APP_MIXER_USAGE, 5);				
		return;
	}
	
	if((!IS_SPC_APP_USED(SPC_APP_SPEECH_USAGE)) && (!IS_SPC_APP_USED(SPC_APP_HOSTED_USAGE)) && (!IS_SPC_APP_USED(SPC_APP_PCMROUTER_USAGE))){ // bg sound on without any speech
		kal_trace( TRACE_INFO, SPC_ILLEGAL_SPC_APP_BEHAVIOR, SPC_APP_MIXER_USAGE, SPC_APP_MIXER_USAGE, 3);		
		return;
	}
	
	gSpc_PCMMixer.isDlBufWaiting = KAL_FALSE;
	PcmMixer_ConfigUl(isUlMix, ulGainLevel);
	PcmMixer_ConfigDl(isDlMix, dlGainLevel);
	
	PcmMixer_Start(spc_PCMMixer_DL_handler);
	SET_SPC_APP_USAGE(SPC_APP_MIXER_USAGE);
}

void spc_PCMMixerStop()
{
	if(!IS_SPC_APP_USED(SPC_APP_MIXER_USAGE)){ // application re-entry
		kal_trace( TRACE_INFO, SPC_ILLEGAL_SPC_APP_BEHAVIOR, SPC_APP_MIXER_USAGE, SPC_APP_PCMNWAY_USAGE, 0);
		return;
	}

	gSpc_PCMMixer.isDlBufWaiting = KAL_TRUE;
	PcmMixer_Stop();

	CLR_SPC_APP_USAGE(SPC_APP_MIXER_USAGE);
}

void spc_pcmMixer_requestDlData(void)
{
	kal_bool sendResult;
	if(!IS_SPC_APP_USED(SPC_APP_MIXER_USAGE)){ // prevent data sending after mixer is off
		kal_trace( TRACE_INFO, SPC_ILLEGAL_SPC_APP_BEHAVIOR, SPC_APP_MIXER_USAGE, SPC_APP_MIXER_USAGE, 1);
		return;
	}

	sendResult = SpcIO_SendMsgToAp(SPCIO_MSG_FROM_SPC_PCMMIXER_DL_DATA_REQUEST, ((PcmMixer_QueryDlBufLen())<<1) , 0);				
	if(KAL_FALSE == sendResult){ //clean waiting flag of speaker to prevent message blocking
		gSpc_PCMMixer.isDlBufWaiting = KAL_FALSE;
		kal_trace( TRACE_INFO, SPC_APP_DATA_SEND_FAIL, SPC_APP_MIXER_USAGE, SPC_APP_MIXER_USAGE, 1);
	}
		
}


void spc_PCMMixer_writeDlDataDone(kal_uint16 offset, kal_int16 length, SPC_MSG_FROM_T comeFrom)
{
	spcBufInfo info;
	kal_bool check;
	
	if(!IS_SPC_APP_USED(SPC_APP_MIXER_USAGE)){		
		kal_trace( TRACE_INFO, SPC_M2A_DROP, SPC_APP_MIXER_USAGE, SPC_APP_MIXER_USAGE, 5);
		return;
	}
	
	ASSERT(length>=sizeof(spcBufInfo));
	
	SpcIO_GetDataFromAp_inOneTime(offset, length, sizeof(spcBufInfo), &info, emDataBuf, comeFrom);
	
	
	//header checking
	check = (info.syncWord == 0xA2A2);
	MODEM_WARNING_MESSAGE(check, "PcmMixer: unknow syncWord");
	if(!check)
		goto leave;
	check = (info.type == AUD_CCCI_STRMBUF_TYPE_PCM_MIXER_DL);
	MODEM_WARNING_MESSAGE(check, "PcmMixer: unknow type");
	if(!check)
		goto leave;
	check = (info.length == (length - sizeof(spcBufInfo)));
	MODEM_WARNING_MESSAGE(check, "PcmMixer: incorrect length");
	if(!check)
		goto leave;

	PcmMixer_writeDlBuf((uint16 *)emDataBuf, info.length>>1);
	
leave:
	gSpc_PCMMixer.isDlBufWaiting = false;
}



// ----------------------------------------------------------------------------
// ----------------------------------------------------------------------------
// PCMMIXER3
// ----------------------------------------------------------------------------
typedef struct _SPC_PCMMIXER3_T_
{
	kal_bool     isUlBufWaiting;
}_SPC_PCMMIXER3_T;

static _SPC_PCMMIXER3_T gSpc_PCMMixer3;

void spc_PCMMixer3_UL_handler( void )
{	
	if(gSpc_PCMMixer3.isUlBufWaiting){
		kal_trace( TRACE_INFO, SPC_M2A_DROP, SPC_APP_MIXER3_USAGE, SPC_APP_MIXER3_USAGE, 0);
		return;
	}
	gSpc_PCMMixer3.isUlBufWaiting = KAL_TRUE;
	// Send notification
	SpcIO_MsgQueuePut(SPC_ID_AUDIO_PCMMIXER3_UL_DATA_REQUEST, 0, 0, SPC_MSG_FROM_AUDHISR);	
}


void spc_PCMMixer3Config(kal_bool isUlMix, uint8 ulGainLevel)
{
	PcmMixer3_ConfigUl(isUlMix, ulGainLevel);
}

void spc_PCMMixer3Start(kal_bool isUlMix, uint8 ulGainLevel)
{
	if(IS_SPC_APP_USED(SPC_APP_MIXER3_USAGE)){ // application re-entry
		kal_trace( TRACE_INFO, SPC_ILLEGAL_SPC_APP_BEHAVIOR, SPC_APP_MIXER3_USAGE, SPC_APP_MIXER3_USAGE, 5);				
		return;
	}
	
	if((!IS_SPC_APP_USED(SPC_APP_SPEECH_USAGE)) && (!IS_SPC_APP_USED(SPC_APP_HOSTED_USAGE)) && (!IS_SPC_APP_USED(SPC_APP_PCMROUTER_USAGE))){ // bg sound on without any speech
		kal_trace( TRACE_INFO, SPC_ILLEGAL_SPC_APP_BEHAVIOR, SPC_APP_MIXER_USAGE, SPC_APP_MIXER_USAGE, 3);		
		return;
	}
	
	gSpc_PCMMixer3.isUlBufWaiting = KAL_FALSE;
	PcmMixer3_ConfigUl(isUlMix, ulGainLevel);
	//PcmMixer3_ConfigDl(isDlMix, dlGainLevel);
	
	PcmMixer3_Start(spc_PCMMixer3_UL_handler);
	SET_SPC_APP_USAGE(SPC_APP_MIXER3_USAGE);
}

void spc_PCMMixer3Stop()
{
	if(!IS_SPC_APP_USED(SPC_APP_MIXER3_USAGE)){ // application re-entry
		kal_trace( TRACE_INFO, SPC_ILLEGAL_SPC_APP_BEHAVIOR, SPC_APP_MIXER3_USAGE, SPC_APP_PCMNWAY_USAGE, 0);
		return;
	}

	gSpc_PCMMixer3.isUlBufWaiting = KAL_TRUE;
	PcmMixer3_Stop();

	CLR_SPC_APP_USAGE(SPC_APP_MIXER3_USAGE);
}

void spc_pcmMixer3_requestUlData(void)
{
	kal_bool sendResult;
	if(!IS_SPC_APP_USED(SPC_APP_MIXER3_USAGE)){ // prevent data sending after mixer is off
		kal_trace( TRACE_INFO, SPC_ILLEGAL_SPC_APP_BEHAVIOR, SPC_APP_MIXER3_USAGE, SPC_APP_MIXER3_USAGE, 1);
		return;
	}

	sendResult = SpcIO_SendMsgToAp(SPCIO_MSG_FROM_SPC_PCMMIXER3_UL_DATA_REQUEST, ((PcmMixer3_QueryUlBufLen())<<1) , 0);				
	if(KAL_FALSE == sendResult){ //clean waiting flag of speaker to prevent message blocking
		gSpc_PCMMixer3.isUlBufWaiting = KAL_FALSE;
		kal_trace( TRACE_INFO, SPC_APP_DATA_SEND_FAIL, SPC_APP_MIXER3_USAGE, SPC_APP_MIXER3_USAGE, 1);
	}
		
}


void spc_PCMMixer3_writeUlDataDone(kal_uint16 offset, kal_int16 length, SPC_MSG_FROM_T comeFrom)
{
	spcBufInfo info;
	kal_bool check;
	
	if(!IS_SPC_APP_USED(SPC_APP_MIXER3_USAGE)){		
		kal_trace( TRACE_INFO, SPC_M2A_DROP, SPC_APP_MIXER3_USAGE, SPC_APP_MIXER3_USAGE, 5);
		return;
	}
	
	ASSERT(length>=sizeof(spcBufInfo));
	
	SpcIO_GetDataFromAp_inOneTime(offset, length, sizeof(spcBufInfo), &info, emDataBuf, comeFrom);
	
	
	//header checking
	check = (info.syncWord == 0xA2A2);
	MODEM_WARNING_MESSAGE(check, "PcmMixer: unknow syncWord");
	if(!check)
		goto leave;
	check = (info.type == AUD_CCCI_STRMBUF_TYPE_TELEPHONYTX_UL);
	MODEM_WARNING_MESSAGE(check, "PcmMixer: unknow type");
	if(!check)
		goto leave;
	check = (info.length == (length - sizeof(spcBufInfo)));
	MODEM_WARNING_MESSAGE(check, "PcmMixer: incorrect length");
	if(!check)
		goto leave;

	PcmMixer3_writeUlBuf((uint16 *)emDataBuf, info.length>>1);
	
leave:
	gSpc_PCMMixer3.isUlBufWaiting = false;
}



// ----------------------------------------------------------------------------
// Background Sound
// ----------------------------------------------------------------------------
typedef struct _SPC_BGSND_T_
{
	kal_uint8 ulGainLevel;
	kal_uint8 dlGainLevel;

	kal_bool isDataWaiting;
	kal_uint32 id;
}_SPC_BGSND_T;

static _SPC_BGSND_T gSpc_bgSnd;

/**
	Run under MED/AUDL Thread
*/
void spc_bgSnd_writeDataDone(kal_uint16 offset, kal_uint16 length, SPC_MSG_FROM_T comeFrom)
{
	spcBufInfo info;

	if(!IS_SPC_APP_USED(SPC_APP_BGSND_USAGE)){ // prevent data sending after background sound is off
		kal_trace( TRACE_INFO, SPC_M2A_DROP, SPC_APP_BGSND_USAGE, SPC_APP_BGSND_USAGE, 1);
		return;
    }

	kal_trace(TRACE_INFO, SPC_BGSND_WRITEDATADONE_ENTER);
	
	if(length < sizeof(spcBufInfo)) {
		gSpc_bgSnd.isDataWaiting = KAL_FALSE;
		return;
	}
	
	SpcIO_GetDataFromAp_inOneTime(offset, length, sizeof(spcBufInfo), &info, emDataBuf, comeFrom);

	//header check
	ASSERT(info.syncWord == 0xA2A2);
    ASSERT(info.type == AUD_CCCI_STRMBUF_TYPE_BGS_TYPE);
    ASSERT(info.length == (length-6));

	if(info.length>0){
		EXT_BGSND_WriteSrcBuffer(gSpc_bgSnd.id, emDataBuf, (kal_int32) info.length, BGSND_DL_PROCESS);
		EXT_BGSND_WriteSrcBuffer(gSpc_bgSnd.id, emDataBuf, (kal_int32) info.length, BGSND_UL_PROCESS);
	}
	
	gSpc_bgSnd.isDataWaiting = KAL_FALSE;
	
   kal_trace(TRACE_INFO, SPC_BGSND_WRITEDATADONE_LEAVE); 
}

/**
	Run under MED/AUDL Thread
*/
#define MIN(a, b) ((a) < (b) ? (a) : (b))
void spc_bgSnd_requestData(void)
{
	int32 bLen;
   kal_trace(TRACE_INFO, SPC_BGSND_REQUESTDATA_ENTER);          
   if(!IS_SPC_APP_USED(SPC_APP_BGSND_USAGE)){ // prevent data sending after background sound is off
		kal_trace( TRACE_INFO, SPC_ILLEGAL_SPC_APP_BEHAVIOR, SPC_APP_BGSND_USAGE, SPC_APP_BGSND_USAGE, 1);
		return;
   }
   
	if(gSpc_bgSnd.isDataWaiting){
		kal_trace( TRACE_INFO, SPC_M2A_DROP, SPC_APP_BGSND_USAGE, SPC_APP_BGSND_USAGE, 0);
		return;
	}
   bLen = MIN( EXT_BGSND_GetFreeSpace(gSpc_bgSnd.id, BGSND_UL_PROCESS), EXT_BGSND_GetFreeSpace(gSpc_bgSnd.id, BGSND_DL_PROCESS));
	//bLen = BGSND_GetFreeSpace(); //unit is 16bit in BGSND_GetFreeSpace() return
   // bLen &= ~0x1; 
   kal_trace(TRACE_INFO, SPC_BGSND_REQUESTDATA_INFO, bLen, BGSND_RB_DEFAULT_THRESHOLD); 
   
	if( bLen >= BGSND_RB_DEFAULT_THRESHOLD ) {

		// send data request to AP
		SpcIO_SendMsgToAp(SPCIO_MSG_FROM_SPC_BGS_DATA_REQUEST, (bLen<<1) , 0);
		gSpc_bgSnd.isDataWaiting = KAL_TRUE;
		
	}				
	kal_trace(TRACE_INFO, SPC_BGSND_REQUESTDATA_LEAVE); 
	
}

/**
	Call back handler from HISR
*/
void spc_BGSND_DLHdr(void)
{
   kal_trace(TRACE_INFO, SPC_BGSND_DLHDR_ENTER); 
   EXT_BGSND_WriteExtBuffer(gSpc_bgSnd.id, 1, BGSND_DL_PROCESS);
   EXT_BGSND_WriteExtBuffer(gSpc_bgSnd.id, 1, BGSND_UL_PROCESS);
   
	if(KAL_FALSE == gSpc_bgSnd.isDataWaiting) {
	   int bLen = MIN( EXT_BGSND_GetFreeSpace(gSpc_bgSnd.id, BGSND_DL_PROCESS), EXT_BGSND_GetFreeSpace(gSpc_bgSnd.id, BGSND_DL_PROCESS));
		if( (bLen >= BGSND_RB_DEFAULT_THRESHOLD) && (EXT_BGSND_GetStatus(gSpc_bgSnd.id, BGSND_DL_PROCESS) == EXT_SRC_STATE_RUN) ) {
			SpcIO_MsgQueuePut(SPC_ID_AUDIO_STRM_BGSND_DATA_REQUEST, 0, 0, SPC_MSG_FROM_AUDHISR);
		}
	}
	kal_trace(TRACE_INFO, SPC_BGSND_DLHDR_LEAVE); 
}

/**
	Call back handler from AUDIO task when bgSnd is off
*/
void spc_bgSnd_closeHandler(void)
{

	SpcIO_MsgQueuePut(SPC_ID_AUDIO_CONTROL_BGSND_CLOSE, 0, 0, SPC_MSG_FROM_AUDHISR);
}

void spc_BgSndStart(void)
{   
#ifdef SPH_CHIP_BACK_PHONECALL_USE
	return;
#endif


	if(IS_SPC_APP_USED(SPC_APP_BGSND_USAGE)){ // application re-entry
		kal_trace( TRACE_INFO, SPC_ILLEGAL_SPC_APP_BEHAVIOR, SPC_APP_BGSND_USAGE, SPC_APP_BGSND_USAGE, 5);				
		return;
	}

/*
	if(!IS_SPC_ID_SPEECH_CUSTOM_DATA_REQUEST_DONE){ // prevent background sound on before EM data sending
		kal_trace( TRACE_INFO, SPC_ILLEGAL_SPC_APP_BEHAVIOR, SPC_APP_BGSND_USAGE, SPC_APP_BGSND_USAGE, 4);
		return;
	}
*/
	if((!IS_SPC_APP_USED(SPC_APP_SPEECH_USAGE)) && (!IS_SPC_APP_USED(SPC_APP_HOSTED_USAGE)) && (!IS_SPC_APP_USED(SPC_APP_PCMROUTER_USAGE))){ // bg sound on without any speech
		kal_trace( TRACE_INFO, SPC_ILLEGAL_SPC_APP_BEHAVIOR, SPC_APP_BGSND_USAGE, SPC_APP_BGSND_USAGE, 3);		
		return;
	}

	if(IS_SPC_APP_USED(SPC_APP_HOLD_USAGE)){
		kal_trace( TRACE_INFO, SPC_ILLEGAL_SPC_APP_BEHAVIOR, SPC_APP_BGSND_USAGE, SPC_APP_BGSND_USAGE, 2);		

		ASSERT(0);
		
		return;
	}
   kal_trace(TRACE_INFO, SPC_BGSNDSTART_ENTER); 
	gSpc_bgSnd.isDataWaiting = KAL_FALSE;
	gSpc_bgSnd.id = EXT_BGSND_Start(spc_bgSnd_closeHandler, spc_BGSND_DLHdr, NULL, gSpc_bgSnd.dlGainLevel, gSpc_bgSnd.ulGainLevel);
	SET_SPC_APP_USAGE(SPC_APP_BGSND_USAGE);
	kal_trace(TRACE_INFO, SPC_BGSNDSTART_LEAVE); 
}

void spc_BgSndStop(void)
{
	
	if(!IS_SPC_APP_USED(SPC_APP_BGSND_USAGE)){
		// just leave log and return, 
		kal_trace( TRACE_INFO, SPC_ILLEGAL_SPC_APP_BEHAVIOR, SPC_APP_BGSND_USAGE, SPC_APP_BGSND_USAGE, 0);
		
		SpcIO_SendMsgToAp( SPCIO_MSG_FROM_SPC_BGSND_OFF_ACK, 0, 0);
		return; 
	} 

	// to avoid to many data request 
	gSpc_bgSnd.isDataWaiting = KAL_TRUE; 	
   kal_trace(TRACE_INFO, SPC_BGSNDSTOP_ENTER); 	
	EXT_BGSND_Flush(gSpc_bgSnd.id);
	kal_trace(TRACE_INFO, SPC_BGSNDSTOP_LEAVE); 	
}

void spc_BgSndForceClose(void)
{
	if(!IS_SPC_APP_USED(SPC_APP_BGSND_USAGE)){ // due to AP close process may interrupt by EPOF command, so the checked is need	
		// just leave log and return, 
		kal_trace( TRACE_INFO, SPC_ILLEGAL_SPC_APP_BEHAVIOR, SPC_APP_BGSND_USAGE, SPC_APP_BGSND_USAGE, 6);
			
		SpcIO_SendMsgToAp( SPCIO_MSG_FROM_SPC_BGSND_OFF_ACK, 0, 0);
		return; 
	}

	EXT_BGSND_Close(gSpc_bgSnd.id);
	CLR_SPC_APP_USAGE(SPC_APP_BGSND_USAGE);
}

void spc_BgSndClose(void)
{
	spc_BgSndForceClose();
	SpcIO_SendMsgToAp( SPCIO_MSG_FROM_SPC_BGSND_OFF_ACK, 0, 0);
}


/**
	@ulGainLevel: 0~7 levels, mapping to 0~32767 
	@dlGainLevel: 0~7 levels, mapping to 0~32767
*/
void spc_BgSndConfig(kal_uint8 ulGainLevel, kal_uint8 dlGainLevel)
{
   kal_trace(TRACE_INFO, SPC_BGSNDCONFIG_ENTER); 
	gSpc_bgSnd.ulGainLevel = ulGainLevel;
	gSpc_bgSnd.dlGainLevel = dlGainLevel;

	// when application is running, update hte gain directly
	if(IS_SPC_APP_USED(SPC_APP_BGSND_USAGE)){
		EXT_BGSND_ConfigMixer(gSpc_bgSnd.id, KAL_TRUE,  gSpc_bgSnd.dlGainLevel, BGSND_DL_PROCESS);
		EXT_BGSND_ConfigMixer(gSpc_bgSnd.id, KAL_TRUE,  gSpc_bgSnd.ulGainLevel, BGSND_UL_PROCESS);		
	}
	kal_trace(TRACE_INFO, SPC_BGSNDCONFIG_LEAVE); 
}
// ----------------------------------------------------------------------------
// CTM
// ----------------------------------------------------------------------------

#ifdef __CTM_SUPPORT__

#if defined(__CCCI_OVER_SDIO_SUPPORT__)	
#define SPC_CTM_DUMP_DEBUG_BUF_SIZE (165 *4 )
#else
#define SPC_CTM_DUMP_DEBUG_BUF_SIZE (163 *4 )
#endif

typedef struct _SPC_CTM_T_
{
	kal_bool isDumpDebugFile;
	kal_bool isDumpDataWaiting;
	kal_uint16 dumpDebugBuf[SPC_CTM_DUMP_DEBUG_BUF_SIZE]; 
	kal_uint16 dumpDebugBufPtr;
	kal_uint16 mode;
	kal_bool isPCM;
}_SPC_CTM_T;


#define SPC_CTM_BUFFER_SIZE 44600 // 44596
__attribute__((aligned (4)))static kal_uint8 gSpc_Ctm_buf[SPC_CTM_BUFFER_SIZE];

static _SPC_CTM_T gSpc_ctm;


void spc_ctm_sendDumpDebugData(void)
{
	kal_bool sendResult;

	if(!IS_SPC_APP_USED(SPC_APP_CTM_USAGE)){ // prevent data sending after CTM is off
		kal_trace( TRACE_INFO, SPC_ILLEGAL_SPC_APP_BEHAVIOR, SPC_APP_CTM_USAGE, SPC_APP_CTM_USAGE, 1);
		return;
	}
	
	
#if defined(__CCCI_OVER_SDIO_SUPPORT__)	
   {
      uint8 *ptr = (uint8 *)gSpc_ctm.dumpDebugBuf;
      spcExtendedBufInfo *pinfo;
      int i, len;
		
		sendResult=true;
      for(i=1; i<=4; i++){			   
         pinfo = (spcExtendedBufInfo *)ptr;
         ASSERT(pinfo->syncWord == 0x1234);
         // ASSERT(pinfo->curIdx   == i);
         // ASSERT(pinfo->totalIdx == 4);        
         
         len = sizeof(spcExtendedBufInfo)+ pinfo->length;
	      sendResult &= SpcIO_WriteDataToAp(NULL, 0, ptr, (len), NULL, 0, SPCIO_MSG_FROM_SPC_CTM_DEBUG_DATA_NOTIFY);     
         
         ptr += len;
      }

   	if(KAL_TRUE !=  sendResult) {
   			gSpc_ctm.dumpDebugBufPtr = 0;
   			gSpc_ctm.isDumpDataWaiting = KAL_FALSE;
   			
   	}	     
   }
#else
	sendResult = (SpcIO_WriteDataToAp(NULL, 0, 
				gSpc_ctm.dumpDebugBuf, ((gSpc_ctm.dumpDebugBufPtr)<<1), NULL, 0, 
				SPCIO_MSG_FROM_SPC_CTM_DEBUG_DATA_NOTIFY));		
	
	if(KAL_TRUE !=  sendResult) {
			//clean up the read waiting flag when send fail to prevent blocking. 
			gSpc_ctm.dumpDebugBufPtr = 0;
			gSpc_ctm.isDumpDataWaiting = KAL_FALSE;
			
	}	
#endif
}

void spc_ctm_sendDumpDebugDataDone(void)
{
	if(!IS_SPC_APP_USED(SPC_APP_CTM_USAGE)){		
		kal_trace( TRACE_INFO, SPC_ILLEGAL_SPC_APP_BEHAVIOR, SPC_APP_CTM_USAGE, SPC_APP_CTM_USAGE, 2);
		return;
	}
	gSpc_ctm.dumpDebugBufPtr = 0;
	gSpc_ctm.isDumpDataWaiting = false;
}
	
static void spc_ctm_handler(L1Ctm_Event event, void *param)
{

}

/**
	This function is running under L1audioTask, as a callback function
	@length: length of buffer unit in 16bit. 
*/
void spc_Ctm_DebugCallback(uint16 pos, uint16 *buffer, uint16 length, bool isDone)
{

	if(gSpc_ctm.isDumpDebugFile == false)
	{
		return; 
	}


	if(true == isDone ){
		
		if( KAL_TRUE == gSpc_ctm.isDumpDataWaiting){
			kal_trace( TRACE_INFO, SPC_M2A_DROP, SPC_APP_CTM_USAGE, SPC_APP_CTM_USAGE, 1);
			return;
		}
		
		// send request to MED
		SpcIO_MsgQueuePut(SPC_ID_AUDIO_STRM_CTM_DUMP_DATA_NOTIFY, 0, 0, SPC_MSG_FROM_AUDHISR);	
	   gSpc_ctm.isDumpDataWaiting = KAL_TRUE;
		
	} else {
#if defined(__CCCI_OVER_SDIO_SUPPORT__)	   
		spcExtendedBufInfo info; 
#else
      spcBufInfo info;
#endif		
		if( KAL_TRUE == gSpc_ctm.isDumpDataWaiting){
			kal_trace( TRACE_INFO, SPC_M2A_DROP, SPC_APP_CTM_USAGE, SPC_APP_CTM_USAGE, 0);
			return;
		}
#if defined(__CCCI_OVER_SDIO_SUPPORT__)	
      info.syncWord = 0x1234;
#else
		info.syncWord = 0x2A2A;
#endif		
		info.length = length*sizeof(uint16);
		
		switch(pos){		
			case UL_IN_WRITE_FILE_REQUEST: // 1
				info.type = AUD_CCCI_STRMBUF_TYPE_CTM_UL_IN;
				break;
			case DL_IN_WRITE_FILE_REQUEST: // 2
				info.type = AUD_CCCI_STRMBUF_TYPE_CTM_DL_IN;
				break;
			case UL_OUT_WRITE_FILE_REQUEST: // 3
				info.type = AUD_CCCI_STRMBUF_TYPE_CTM_UL_OUT;
				break;
			case DL_OUT_WRITE_FILE_REQUEST: // 4
				info.type = AUD_CCCI_STRMBUF_TYPE_CTM_DL_OUT;
				break;
			default:
				ASSERT(0);
		}
      
#if defined(__CCCI_OVER_SDIO_SUPPORT__)	
	  info.curIdx = 1;
      info.totalIdx = 1;	
      memcpy((uint8 *)(&(gSpc_ctm.dumpDebugBuf[gSpc_ctm.dumpDebugBufPtr])), &info, sizeof(spcExtendedBufInfo));
      
      gSpc_ctm.dumpDebugBufPtr += 5; // header= sizeof(spcBufInfo)
#else
      memcpy((uint8 *)(&(gSpc_ctm.dumpDebugBuf[gSpc_ctm.dumpDebugBufPtr])), &info, sizeof(spcBufInfo));
      gSpc_ctm.dumpDebugBufPtr += 3; // header= sizeof(spcBufInfo)
#endif		
		
		memcpy((uint8 *)(&(gSpc_ctm.dumpDebugBuf[gSpc_ctm.dumpDebugBufPtr])), buffer, length*sizeof(uint16));
		gSpc_ctm.dumpDebugBufPtr +=length; 

		ASSERT(gSpc_ctm.dumpDebugBufPtr <= SPC_CTM_DUMP_DEBUG_BUF_SIZE); // overflow protection
	}
}

/**
	@mode: 0: DIRECT_MODE, 1: BAUDOT_MODE
*/
void spc_NormalCtmStart(kal_uint16 mode){
    if (L1Ctm_GetMemReq() > SPC_CTM_BUFFER_SIZE)
		ASSERT(0);

	gSpc_ctm.isDumpDataWaiting = false;
	memset(gSpc_ctm.dumpDebugBuf, 0, sizeof(uint16)*SPC_CTM_DUMP_DEBUG_BUF_SIZE);
	gSpc_ctm.dumpDebugBufPtr=0;
	
    L1Ctm_Open( mode, spc_ctm_handler, gSpc_Ctm_buf, SPC_CTM_BUFFER_SIZE, spc_Ctm_DebugCallback);
	SET_SPC_APP_USAGE(SPC_APP_CTM_USAGE);
}
void spc_C2KCtmStart(kal_uint16 mode){
     if(FULL_MODE == mode){
            SAL_C2K_SetTTYStatus(true, true);
            l1sp_setCtmSpeStatus(1);   
            kal_prompt_trace(MOD_L1SP, "%s() SetSpeechEnhancement = false", __FUNCTION__);
            SetSpeechEnhancement(false); 
            l1sp_setCtmSpeStatus(0);
        }
        else if(VCO_MODE == mode){
            SAL_C2K_SetTTYStatus(false, true);
            l1sp_setCtmSpeStatus(1);   
            kal_prompt_trace(MOD_L1SP, "%s() SetSpeechEnhancement = false", __FUNCTION__);
            SetSPEnhancePath(SpeechEnh_UL);
        }
        else if(HCO_MODE == mode){
            SAL_C2K_SetTTYStatus(true, false);
            l1sp_setCtmSpeStatus(1);  
            kal_prompt_trace(MOD_L1SP, "%s() SetSpeechEnhancement = false", __FUNCTION__);        
            SetSPEnhancePath(SpeechEnh_DL);
        }
        gSpc_ctm.isPCM = false;
}
kal_uint16 spc_getCtmMode(){
    return gSpc_ctm.mode;
}

kal_bool spc_isPCM(){
    kal_prompt_trace(MOD_L1SP, "spc_isPCM = %d",gSpc_ctm.isPCM);
    return gSpc_ctm.isPCM;
}

void spc_CtmStart(kal_uint16 mode)
{
    gSpc_ctm.mode = mode;
    if(L1SP_STATE_C2K_SPEECH_ON == L1SP_GetState()){
       spc_C2KCtmStart(mode);
    }
    else{
        spc_NormalCtmStart(mode);
        gSpc_ctm.isPCM = true;
    }
}

void spc_NormalCtmStop(void){
    
    if(!IS_SPC_APP_USED(SPC_APP_CTM_USAGE)){
		// just leave log and return
		kal_trace( TRACE_INFO, SPC_ILLEGAL_SPC_APP_BEHAVIOR, SPC_APP_CTM_USAGE, SPC_APP_CTM_USAGE, 0);
		return; 
	} 
    	
	L1Ctm_Stop();

	CLR_SPC_APP_USAGE(SPC_APP_CTM_USAGE);
}
void spc_CtmStop(void)
{
	 l1sp_setCtmSpeStatus(1);   
   SetSpeechEnhancement(true); 
   SAL_C2K_SetTTYStatus(false, false);

	  if(!gSpc_ctm.isPCM){
        SpcIO_SendMsgToAp(SPCIO_MSG_FROM_SPC_CTM_OFF_ACK, 0, 0);
    }
    else{
        spc_NormalCtmStop();
    }

    gSpc_ctm.isPCM = false;
    gSpc_ctm.mode = 0;
}

void spc_CtmClose(void)
{
    kal_prompt_trace(MOD_L1SP, "[spc_CtmClose] Enter");
	L1Ctm_Close();
	SpcIO_SendMsgToAp(SPCIO_MSG_FROM_SPC_CTM_OFF_ACK, 0, 0);
	kal_prompt_trace(MOD_L1SP, "[spc_CtmClose] Leave");
}

void spc_RttConfig(uint16 type){
	
    kal_prompt_trace(MOD_L1SP, "[spc_RttConfig] %d", type);
	if(type==1)
		L1Ctm_RTTOpen(); 
	else
		L1Ctm_RTTClose();
}


/*
[REMIND] This function "L1Ctm_StartNegotiation" is not called from AP side. 
The actual user is L1D in modem. So phase it out. 

void spc_CtmNegotiation(void)
{
	L1Ctm_StartNegotiation();
}
*/

void spc_CtmDebugConfig(kal_bool turnOn)
{
	gSpc_ctm.isDumpDebugFile = turnOn;
}

#endif // __CTM_SUPPORT__

// ----------------------------------------------------------------------------
// Parameter Setting like EM
// ----------------------------------------------------------------------------

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


void spc_ReceiveViberationSpkParameter(const kal_uint16 offset, const kal_uint16 length, SPC_MSG_FROM_T comeFrom)
{
	spcBufInfo info;
	AUDIO_VIBSPK_PARAMETER_STRUCT *vibSpkParam; //buffer reuse
	
	vibSpkParam = (AUDIO_VIBSPK_PARAMETER_STRUCT *)(&emDataBuf); //buffer reuse

	//get data
	SpcIO_GetDataFromAp_inOneTime(offset, length, sizeof(spcBufInfo), &info, vibSpkParam, comeFrom);
	
	//header checking
	ASSERT(info.syncWord == 0xA2A2);
	ASSERT(info.type== AUD_CCCI_STRMBUF_TYPE_VIBSPK_PARAM); //just use the bit[0:3] to inidicate the type. 
	ASSERT(info.length == (length-6));
	

	// copy coefficient
	spe_setNotchFilterParam(vibSpkParam->notch_filter_para, vibSpkParam->is2In1Spk);

	
}

void spc_ReceiveNxpSmartPaParameter(const kal_uint16 offset, const kal_uint16 length, SPC_MSG_FROM_T comeFrom)
{
	spcBufInfo info;
	AUDIO_NXP_SMARTPA_PARAMETER_STRUCT *nxpPaParam; //buffer reuse
	
	nxpPaParam = (AUDIO_NXP_SMARTPA_PARAMETER_STRUCT *)(&emDataBuf); //buffer reuse

	//get data
	SpcIO_GetDataFromAp_inOneTime(offset, length, sizeof(spcBufInfo), &info, nxpPaParam, comeFrom);
	
	//[REMOVE] header checking
	// ASSERT(info.syncWord == 0xA2A2);
	// ASSERT(info.type== AUD_CCCI_STRMBUF_TYPE_NXP_SMARTPA_PARAM); //just use the bit[0:3] to inidicate the type. 
	// ASSERT(info.length == (length-6));
	
	// SPE_SetEchoRefInfo(nxpPaParam->isNxpFeatureOptOn, nxpPaParam->mic_index, nxpPaParam->chip_delay_with_switch, SPH_MODE_LOUDSPK);
	
}	

kal_uint16 spc_ReceiveDynamicParameter_viaStructShm(const kal_uint16 offset,const kal_uint16 length,SPC_MSG_FROM_T comeFrom)
{
	// spcBufInfo header;
	// spc_sph_on_info_t info;
	kal_uint16 totalProcLen = 0;
	kal_uint16 curOffset = offset;
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
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif

	while(totalProcLen < length) {
		kal_uint16 procLen = 0;
		kal_uint16 newOffset; 
		spc_dynamicParameterParser_dispatcher(curOffset, length, SPC_MSG_FROM_CCCI_STREAM_AND_SHM, &procLen, &newOffset);
		totalProcLen += procLen; 
		curOffset = newOffset; 
	}
	return totalProcLen;
	
}



// ----------------------------------------------------------------------------
// Volume Setting 
// ----------------------------------------------------------------------------
/**
	@digiGain: unit is 0.25 dB
*/
void spc_gain_DlDigiGainSet(kal_uint16 digiGain)
{
	spGain_SetDigitalGain( (kal_int16)digiGain, false );
	// l1sp_digiOnly_SetOutputVolume((kal_int16)digiGain);
}

/**
	@refDigiGain: unit is 0.25 dB
*/
void spc_gain_DlEnhRefDigiGainSet(kal_uint16 refDigiGain)
{
	spGain_SetEnhRefDigitalGain((kal_int16)refDigiGain, false);
	//l1sp_digiOnly_SetEnhRefOutputVolume((kal_int16)refDigiGain);
}

/**
	@digiGain: unit is 0.25 dB, but for DSP, only 1 db step range. mean while if you send 1.25 dB and 1.5 dB, they are the same
*/
void spc_gain_UlDigiGainSet(kal_uint16 digiGain)
{
	spGain_SetMicrophoneVolume((kal_int16)digiGain, false);
	// l1sp_digiOnly_SetMicrophoneVolume((kal_int16)digiGain);
}

/**
	@on: 1 for turn on mute, 0 for turn off mute
	@byPassCheck: 1 for by pass check, 0 for normal check
*/
void spc_gain_UlMuteSet(kal_bool on, kal_bool byPassCheck)
{
	if((IS_SPC_APP_USED(SPC_APP_SPEECH_USAGE) || IS_SPC_APP_USED(SPC_APP_PCMROUTER_USAGE)
		|| KAL_TRUE == byPassCheck)) {
		gSpc.spcMuteUl = on;
		SP_MuteUlFromDiffPos(on, SP_MIC_MUTE_POS_FROM_SPC); // L1SP_MuteMicrophone(on);
	} else {
		kal_trace(TRACE_STATE, SPC_SET_DROP_UL_MUTE);
	}
}

void spc_gain_DlMuteSet(kal_bool on, kal_bool byPassCheck)
{
	if((IS_SPC_APP_USED(SPC_APP_SPEECH_USAGE) || IS_SPC_APP_USED(SPC_APP_PCMROUTER_USAGE))
		|| KAL_TRUE == byPassCheck){
		gSpc.spcMuteDl = on;
		L1SP_MuteSpeaker(on);		
	} else {
		kal_trace(TRACE_STATE, SPC_SET_DROP_DL_MUTE);
	}
}

void spc_gain_UlEnhResultMuteSet(kal_bool on, kal_bool byPassCheck)
{
	if(IS_SPC_APP_USED(SPC_APP_SPEECH_USAGE) || KAL_TRUE == byPassCheck) {
		gSpc.spcMuteUlEnhResult = on;
		SP_MuteUlEnhResult(on);	
	} else {
		kal_trace(TRACE_STATE, SPC_SET_DROP_UL_ENH_RESULT_MUTE);
	}
}

void spc_gain_UlSourceMuteSet(kal_bool on, kal_bool byPassCheck)
{
	if(IS_SPC_APP_USED(SPC_APP_SPEECH_USAGE) || KAL_TRUE == byPassCheck) {
		gSpc.spcMuteUlSource = on;
		SP_MuteUlSource(on);	
	} else {
		kal_trace(TRACE_STATE, SPC_SET_DROP_UL_SOURCE_MUTE);
	}
}
void spc_gain_DlMuteCodecSet(kal_bool on, kal_bool byPassCheck)
{
	if((IS_SPC_APP_USED(SPC_APP_SPEECH_USAGE) || IS_SPC_APP_USED(SPC_APP_PCMROUTER_USAGE))
		|| KAL_TRUE == byPassCheck) {
		L1SP_SetCodecMuteByAp(on);       
	} else {
	kal_trace(TRACE_STATE, SPC_SET_DROP_DL_CODEC_MUTE);
	}
}

// ----------------------------------------------------------------------------
// Device Related Setting 
// ----------------------------------------------------------------------------

void spc_dev_SamplingRateSet(kal_uint16 sampleRate)
{
	switch(sampleRate){
		case 0:
			AFE_SetVoice8KMode(2);   //default 32000, case 0: reset
			break;
		case 8000:
			AFE_SetVoice8KMode(0);
			break;
		case 16000:
			AFE_SetVoice8KMode(1);
			break;
		case 32000:
			AFE_SetVoice8KMode(2);
			break;
		case 48000:
			AFE_SetVoice8KMode(3);
			break;
		default:			
			ASSERT(0);
	} 
}

// ----------------------------------------------------------------------------
// AUDL running functions Related
// ----------------------------------------------------------------------------

void spc_A2M_MsgHandler(kal_uint32 ccciMsg, kal_uint32 ccciResv, SPC_MSG_FROM_T comeFrom)
{
	kal_uint16 cmd, msgData16;
	kal_uint16 msgData32; 
	uint16 type16 = 0;

	cmd = SPCIO_CCCI_MSG_CMD(ccciMsg);
	msgData16 = SPCIO_CCCI_MSG_DATA16(ccciMsg);
	msgData32 = ccciResv;

	switch(cmd){		
		case MSG_A2M_SPH_DL_DIGIT_VOLUME: 
			spc_gain_DlDigiGainSet(msgData16);
			break;
		case MSG_A2M_SPH_UL_DIGIT_VOLUME: 
			spc_gain_UlDigiGainSet(msgData16);
			break;
		case MSG_A2M_MUTE_SPH_UL: 
			spc_gain_UlMuteSet( (kal_bool)(msgData16&1), KAL_FALSE);
			SpcIO_SendMsgToAp( SPCIO_MSG_FROM_SPC_MUTE_SPH_UL_ACK, 0, 0);
			break;
		case MSG_A2M_MUTE_SPH_DL: 
			spc_gain_DlMuteSet( (kal_bool)(msgData16&1), KAL_FALSE);
			SpcIO_SendMsgToAp( SPCIO_MSG_FROM_SPC_MUTE_SPH_DL_ACK, 0, 0);
			break;
		// case MSG_A2M_SIDETONE_VOLUME: break;	
		case MSG_A2M_SPH_DL_ENH_REF_DIGIT_VOLUME:
			spc_gain_DlEnhRefDigiGainSet(msgData16);
			break;
		// case MSG_A2M_SIDETONE_CONFIG: break;	
		case MSG_A2M_MUTE_SPH_UL_ENH_RESULT:
			spc_gain_UlEnhResultMuteSet((kal_bool)(msgData16&1), KAL_FALSE);
			SpcIO_SendMsgToAp( SPCIO_MSG_FROM_SPC_MUTE_SPH_UL_ENH_RESULT_ACK, 0, 0);
			break;
		case MSG_A2M_MUTE_SPH_UL_SOURCE:
			spc_gain_UlSourceMuteSet((kal_bool)(msgData16&1), KAL_FALSE);
			SpcIO_SendMsgToAp( SPCIO_MSG_FROM_SPC_MUTE_SPH_UL_SOURCE_ACK, 0, 0);
			break;
		case MSG_A2M_MUTE_SPH_DL_CODEC:
			spc_gain_DlMuteCodecSet((kal_bool)(msgData16&1), KAL_FALSE);
			break;
			
		// --------- [0x10] device related -----------
		case MSG_A2M_SET_SAMPLE_RATE: 
			spc_dev_SamplingRateSet(msgData16);
			break;
		// case MSG_A2M_SET_DUAL_MIC: break;
		case MSG_A2M_SET_LPBK_POINT_DVT:
			spc_dev_LoopbackPoint_DVT(msgData16);
			break;

		// --------- [0x20] speech control -----------
		case MSG_A2M_SPH_ON: 
		{
			if(SPC_MSG_FROM_CCCI_STREAM == comeFrom) {
				type16 = Spc_SpeechOn_withData((kal_uint16)msgData32, msgData16, comeFrom);
			} else {
				Spc_SpeechOn((kal_uint8) msgData16);
			}
	        SpcIO_SendMsgToAp( SPCIO_MSG_FROM_SPC_SPH_ON_ACK, type16, 0);
		}
			break;
		case MSG_A2M_SPH_OFF: 
		{
			// Spc_SpeechOff();
			Spc_SpeechOff_Merge();
			SpcIO_SendMsgToAp( SPCIO_MSG_FROM_SPC_SPH_OFF_ACK, 0, 0);
		}
			break;
		case MSG_A2M_SET_SPH_MODE: 
		{
			// Spc_SetSpeechEnhMode_Adaptation( (kal_uint8) msgData16 );
			SpcIO_SendMsgToAp( SPCIO_MSG_FROM_SPC_SET_SPH_MODE_ACK, msgData16, 0);
		}
			break;
		case MSG_A2M_CTRL_SPH_ENH: 
		{
			// add condition checking when turn speech enhancment on/off
			if(IS_SPC_APP_USED(SPC_APP_HOSTED_USAGE)) {
				kal_trace(TRACE_INFO, SPC_DROP_SET, ccciMsg, cmd, cmd, msgData16, msgData32);
			} else {
				L1SP_EnableSpeechEnhancement((msgData16!=0));
			}
			SpcIO_SendMsgToAp( SPCIO_MSG_FROM_SPC_CTRL_SPH_ENH_ACK, msgData16, 0);
		}		
			break; 
		case MSG_A2M_CONFIG_SPH_ENH: 
		{
			SpcIO_SendMsgToAp( SPCIO_MSG_FROM_SPC_CONFIG_SPH_ENH_ACK, msgData16, 0);
		}
			break; 
		case MSG_A2M_SET_ACOUSTIC_LOOPBACK: 
		{
#if defined(__ENABLE_SPEECH_DVT__)
            Spc_PCMNWay_DVT_Test((kal_uint8) msgData16 );
#else // defined(__ENABLE_SPEECH_DVT__)
			Spc_AcousticLoopback((msgData16&1), (kal_uint8)(msgData16>>1), (kal_uint8)(msgData32&0xff));
#endif // defined(__ENABLE_SPEECH_DVT__)
         SpcIO_SendMsgToAp( SPCIO_MSG_FROM_SPC_SET_ACOUSTIC_LOOPBACK_ACK, msgData16, msgData32);
      } 
			break;			
		case MSG_A2M_PRINT_SPH_COEFF: 
		{
			spc_DebugPrint();
			// ack is: SPCIO_MSG_FROM_SPC_PRINT_SPH_COEFF_ACK --> MSG_M2A_PRINT_SPH_COEFF_ACK
		}	
			break;
		case MSG_A2M_SPH_ON_FOR_HOLD_CALL: 
		{
			// [REMIND] No application can be on under this application
			spc_SpeechOnForCallHold((msgData16 == 1)); // bit 0, 0 for off, 1 for on
			SpcIO_SendMsgToAp( SPCIO_MSG_FROM_SPC_SPH_ON_FOR_HOLD_CALL_ACK, 0, 0);
		}
			break;
		case MSG_A2M_SPH_ON_FOR_DACA:
		{
			Spc_SpeechOnForDaca((kal_uint8) msgData16, (kal_bool)(msgData16 >> 8));
			SpcIO_SendMsgToAp( SPCIO_MSG_FROM_SPC_SPH_ON_FOR_DACA_ACK, msgData16, 0);				
		}
			break;

		case MSG_A2M_SPH_ROUTER_ON:
		{
			Spc_SpeechRouterOn((msgData16&1)==1);
			SpcIO_SendMsgToAp( SPCIO_MSG_FROM_SPC_SPH_ROUTER_ON_ACK, msgData16, 0);
		}
			break;
		case MSG_A2M_SET_VOICE_ENCRYPTION: 
		{
			SpcIO_SendMsgToAp( SPCIO_MSG_FROM_SPC_SET_VOICE_ENCRYPTION_ACK, msgData16, 0);
		}
			break;			
		case MSG_A2M_SPH_DEV_CHANGE:
		{
			type16 = Spc_SpeechDeviceChange((kal_uint16)msgData32, msgData16, comeFrom);
			SpcIO_SendMsgToAp( SPCIO_MSG_FROM_SPC_SPH_DEV_CHANGE_ACK, type16, 0);
		}
			break;			
		case MSG_A2M_ENH_CTRL_SUPPORT:
		{
			L1SP_EnhancementCtrlSupport(msgData16);
			SpcIO_SendMsgToAp( SPCIO_MSG_FROM_SPC_ENH_CTRL_SUPPORT_ACK, type16, 0);
		}
			break;	
		// --------- [0x30] speech control -----------
		case MSG_A2M_PNW_ON:  // normal use always narrow band/decided by network
		{
			spc_PcmNWayStart(msgData16, SPC_PCMNWAY_FORMAT_UNSET) ; // , SPC_PCMNWAY_APP_TYPE_UNSET);
			SpcIO_SendMsgToAp(SPCIO_MSG_FROM_SPC_PNW_ON_ACK, msgData16, 0);
				// SPCIO_CCCI_MSG_CONSTRCUT_CMD(MSG_M2A_PNW_ON_ACK, msgData16));
		}
			break;
		case MSG_A2M_PNW_OFF: 
		{
			spc_PcmNWayStop();
			SpcIO_SendMsgToAp(SPCIO_MSG_FROM_SPC_PNW_OFF_ACK, msgData16, 0);
				// SPCIO_CCCI_MSG_CONSTRCUT_CMD(MSG_M2A_PNW_OFF_ACK, msgData16));				
		}
			break;
/*
		case MSG_A2M_RECORD_ON: // spc_RecordStart
			break;
		case MSG_A2M_RECORD_OFF: // spc_RecordStop				
			break;
		case MSG_A2M_DMNR_RECPLAY_ON: 
			break;
		case MSG_A2M_DMNR_RECPLAY_OFF: 
			break;
		case MSG_A2M_DMNR_REC_ONLY_ON: 
			break;
		case MSG_A2M_DMNR_REC_ONLY_OFF: 
			break;
		case MSG_A2M_PCM_REC_ON: // spc_PcmRecordStart
			break;
		case MSG_A2M_PCM_REC_OFF: // spc_PcmRecordStop
			break;
*/
		case MSG_A2M_VM_REC_ON:
		{
			spc_VmRecordStart();
			SpcIO_SendMsgToAp(SPCIO_MSG_FROM_SPC_VM_REC_ON_ACK, msgData16, 0);
		}
			break;			
		case MSG_A2M_VM_REC_OFF:
		{
			spc_VmRecordStop();
			SpcIO_SendMsgToAp(SPCIO_MSG_FROM_SPC_VM_REC_OFF_ACK, msgData16, 0);
		}
			break;
        case MSG_A2M_RECORD_RAW_PCM_ON:
		{
			// data16 bit[0:3] is position info
			spc_RawPcmRecordStart((kal_uint8)(msgData16&0xF));
			SpcIO_SendMsgToAp(SPCIO_MSG_FROM_SPC_RECORD_RAW_PCM_ON_ACK, msgData16, 0);
		}
		break;
        case MSG_A2M_RECORD_RAW_PCM_OFF:
		{
			spc_RawPcmRecordStop();
			SpcIO_SendMsgToAp(SPCIO_MSG_FROM_SPC_RECORD_RAW_PCM_OFF_ACK, msgData16, 0);
		}
		break;
		case MSG_A2M_PCMMIXER_ON:
		{
			//bit 0: isDlMix: 0 is replace, 1 is mix
			//bit 2: isUlMix: 0 is replace, 1 is mix
			spc_PCMMixerStart((msgData16&4)==4, (msgData16&1)==1, 0, 7);
			SpcIO_SendMsgToAp(SPCIO_MSG_FROM_SPC_PCMMIXER_ON_ACK, msgData16, 0);
		}
		break;
        case MSG_A2M_PCMMIXER_OFF:
		{
			spc_PCMMixerStop();
			SpcIO_SendMsgToAp(SPCIO_MSG_FROM_SPC_PCMMIXER_OFF_ACK, msgData16, 0);
		}
		break;
		case MSG_A2M_TELEPHONY_TX_ON:
		{
			//bit 0: isUlMix: 0 is replace, 1 is mix
			spc_PCMMixer3Start(msgData16&1, 7);
			SpcIO_SendMsgToAp(SPCIO_MSG_FROM_SPC_PCMMIXER3_ON_ACK, msgData16, 0);
		}
		break;
    case MSG_A2M_TELEPHONY_TX_OFF:
		{
			spc_PCMMixer3Stop();
			SpcIO_SendMsgToAp(SPCIO_MSG_FROM_SPC_PCMMIXER3_OFF_ACK, msgData16, 0);
		}
		break;
		// --------- [0x40] other control function -----------
#ifdef __CTM_SUPPORT__			
		case MSG_A2M_CTM_ON: 
			spc_CtmStart(msgData16);
			SpcIO_SendMsgToAp( SPCIO_MSG_FROM_SPC_CTM_ON_ACK, msgData16, 0);
			break;
		case MSG_A2M_CTM_OFF: 
			spc_CtmStop();
			//SpcIO_SendMsgToAp( SPCIO_MSG_FROM_SPC_CTM_OFF_ACK, msgData16, 0);
			break;
		case MSG_A2M_CTM_DUMP_DEBUG_FILE: 
			spc_CtmDebugConfig(msgData16!=0);
			SpcIO_SendMsgToAp( SPCIO_MSG_FROM_SPC_CTM_DUMP_DEBUG_FILE_ACK, msgData16, 0);
			break; 
#endif // __CTM_SUPPORT__					

		case MSG_A2M_BGSND_ON:
			spc_BgSndStart();
			SpcIO_SendMsgToAp( SPCIO_MSG_FROM_SPC_BGSND_ON_ACK, msgData16, 0);
			break;
		case MSG_A2M_BGSND_OFF: 
			spc_BgSndStop();
			// SpcIO_SendMsgToAp( SPCIO_MSG_FROM_SPC_BGSND_OFF_ACK, msgData16, 0); 
			break;
		case MSG_A2M_BGSND_CONFIG: 
			// msgData16, [15:8] ulGainLevel from 0 ~ 255, [7:0] dlGainLevel from 0 ~ 255
			// we mapping the value into 0~7 levels. so right shift 5 
			// spc_BgSndConfig((msgData16>>8)>>5, (msgData16&0xff)>>5);
			spc_BgSndConfig((msgData16>>13), ((msgData16&0xff)>>5));
			break; // SPCIO_MSG_FROM_SPC_BGSND_CONFIG_ACK-- > MSG_M2A_BGSND_CONFIG_ACK
		case MSG_A2M_RTT_CONFIG:
			spc_RttConfig(msgData16);
			break;
		case MSG_A2M_PCMMIXER_CONFIG:
			//bit 0: isDlMix: 0 is replace, 1 is mix
			//bit 2: isUlMix: 0 is replace, 1 is mix
			spc_PCMMixerConfig((msgData16&4)==4,(msgData16&1)==1,0,7); 
			break;
		case MSG_A2M_TELEPHONY_TX_CONFIG:
			//bit 0: isDlMix: 0 is replace, 1 is mix
			spc_PCMMixer3Config((msgData16&1)==1,7); 
			break;
		// --------- [0x50] Recevie DATA notify  -----------
		case MSG_A2M_PNW_DLDATA_NOTIFY: 
			spc_pcmNWay_writeDlDataDone((kal_uint16)msgData32, msgData16, comeFrom);
			break;
		case MSG_A2M_BGSND_DATA_NOTIFY: 
			spc_bgSnd_writeDataDone( (kal_uint16)msgData32, msgData16, comeFrom);
			break;
		case MSG_A2M_CTM_DATA_NOTIFY: break;
		case MSG_A2M_DACA_UL_DATA_NOTIFY:
			spc_daca_writeUlDataDone((kal_uint16)msgData32, msgData16, comeFrom);
			break;
		// MSG_A2M_ECALL_MSD, 
		// MSG_A2M_SPC_UL_ENC, 
		// MSG_A2M_SPC_DL_DEC,
		case MSG_A2M_PCMMIXER_DLDATA_NOTIFY:
			spc_PCMMixer_writeDlDataDone((kal_uint16)msgData32, msgData16, comeFrom);
			break;
		case MSG_A2M_PCMMIXER_ULDATA_NOTIFY:
			break;
		case MSG_A2M_TELEPHONY_TX_ULDATA_NOTIFY:
			spc_PCMMixer3_writeUlDataDone((kal_uint16)msgData32, msgData16, comeFrom);
			break;
		// --------- [0x60] Send DATA Ack  ---------------
		case MSG_A2M_PNW_ULDATA_READ_ACK: 
			spc_pcmNWay_sendUlDataDone();
			break;
		case MSG_A2M_REC_DATA_READ_ACK:  // removed from 93md
			// spc_record_sendMicDataDone();
			break;
#ifdef __CTM_SUPPORT__				
		case MSG_A2M_CTM_DEBUG_DATA_READ_ACK:
			spc_ctm_sendDumpDebugDataDone();
			break;
#endif			
		case MSG_A2M_PCM_REC_DATA_READ_ACK: // removed from 93md
			// spc_pcmRec_sendMicDataDone();
			break;
		case MSG_A2M_VM_REC_DATA_READ_ACK:
			spc_vmRec_sendMicDataDone();
			break;
		case MSG_A2M_DACA_DL_DATA_READ_ACK:
			spc_daca_sendDlDataDone();
			break;
		case MSG_A2M_RAW_PCM_REC_DATA_READ_ACK:
            spc_RawPcmRec_sendDataDone();
            break;

		// --------- [0x70] EM related --------------------
		// case MSG_A2M_EM_INCALL: break;
		// case MSG_A2M_EM_DMNR: break;
		// case MSG_A2M_EM_WB: break;
		// case MSG_A2M_EM_MAGICON: break;
		case MSG_A2M_NETWORK_STATUS_ACK:        
			break;		
/*
		case MSG_A2M_QUERY_RF_INFO:
			// spc_notify_rf_info();
			break;
		case MSG_A2M_EM_HAC: 
			break;
*/
		case MSG_A2M_DYNAMIC_PAR:		
			type16 = spc_ReceiveDynamicParameter((kal_uint16)msgData32, msgData16, comeFrom);
			SpcIO_SendMsgToAp(SPCIO_MSG_FROM_SPC_DYNAMIC_PAR_ACK, type16, 0 );
			break;
		case MSG_A2M_SPH_ENH_CORE:
			// use for OPEN DSP??
			break;
		case MSG_A2M_DYNAMIC_PAR_IN_STRUCT_SHM:
			type16 = spc_ReceiveDynamicParameter_viaStructShm((kal_uint16)msgData32, msgData16, comeFrom);
			SpcIO_SendMsgToAp(SPCIO_MSG_FROM_SPC_DYNAMIC_PAR_IN_STRUCT_SHM_ACK, type16, 0 );
			break;
		// --------- [0x80] New feature data related --------------------
		case MSG_A2M_VIBSPK_PARAMETER:
			spc_ReceiveViberationSpkParameter((kal_uint16)msgData32, msgData16, comeFrom);
			SpcIO_SendMsgToAp(SPCIO_MSG_FROM_SPC_VIBSPK_PARAMETER_ACK, 0, 0 );
			break;

		case MSG_A2M_NXP_SMARTPA_PARAMETER: 
			spc_ReceiveNxpSmartPaParameter((kal_uint16)msgData32, msgData16, comeFrom);
			SpcIO_SendMsgToAp(SPCIO_MSG_FROM_SPC_NXP_SMARTPA_PARAMETER_ACK, 0, 0 );
			break;

		// --------- [0x90] New feature data related --------------------
		case MSG_A2M_NW_CODEC_INFO_READ_ACK: 
			spc_ReceiveNwCodecInfoReadDone();
			break;

		// --------- [0xA0] Alive related --------------------
		case MSG_A2M_AUD_ALIVE_READ_ACK:
			break;
			
		default: 
			if(SPC_MSG_FROM_CCCI == comeFrom)
				SpcIO_unknownMsgAckToAp(cmd, 0, 0);
			kal_trace(TRACE_INFO, SPCIO_INVALID_MSG, SPC_ID_AUDIO_A2M_CCCI, ccciMsg, ccciResv);
		
	}
}


// ----------------------------------------------------------------------------
// Init Related
// ----------------------------------------------------------------------------

#ifndef TK6291_FAKE_COMPILE
extern unsigned short L1D_Audio_ChkDspInitDone();
#endif //#ifndef TK6291_FAKE_COMPILE
/**
	Function owner is EL1. 
	@return: true all rat init done, else is false
*/
/*
#ifndef TK6291_FAKE_COMPILE
extern kal_bool MML1_RF_CHECK_RF_INIT_STATUS(void);
#endif //#ifndef TK6291_FAKE_COMPILE
*/

void Spc_Init_B4_Scheduling(void)
{	
	// all data inside gSpc are 0 when boot up 
	gSpc.spcGetEpofTimes = 0;

	// ====== Initial needed by other application =======
	//background sound
	gSpc_bgSnd.ulGainLevel = 5;
	gSpc_bgSnd.dlGainLevel = 5;
} 

void Spc_Init(void) {
	
	/*
	// for MT6752 MD1, due to RF K needs 1.5 second, please wait for it. 
#if (defined(MT6752) && defined (__MD1__)) || defined(MT6595) || defined(MT6735)
  #ifndef TK6291_FAKE_COMPILE
	while( false == MML1_RF_CHECK_RF_INIT_STATUS()) {
		kal_trace( TRACE_FUNC,SPC_AUDIOTASK_WAIT_EL1_RF_INIT, tick);
		kal_sleep_task( AUD_1TICK(1) );
		tick++;
	}
  #endif //#ifndef TK6291_FAKE_COMPILE
#endif	
	*/
	gSpc_acLoopback.isLoopback = 0; // set loopback state = 0
	// ----------------------
#if SPC_CUST_ENH	
	// add IDs for DV process
	DV_dl_audioid = L1Audio_GetAudioID();
	L1Audio_SetEventHandler(DV_dl_audioid, (L1Audio_EventHandler)DV_DL_process);  
	DV_ul_audioid = L1Audio_GetAudioID();
	L1Audio_SetEventHandler(DV_ul_audioid, (L1Audio_EventHandler)DV_UL_process);  
#endif 	
}


void Spc_ForceEndAllApp(void) // AP send ETOF to MD L4C. L4C will send ILM to MED and invoke this function
{
	boot_mode_type is_factory_mode = kal_query_boot_mode();
	gSpc.spcGetEpofTimes |= ENUM_EPOF_DO_FORCEENDALLAPP;
	
	kal_trace(TRACE_INFO, SPC_EPOF_NOTIFY, gSpc.spcAppUsage);

	// internal tone stop
	SP_DSPTone_ForceEnd();
	
	if(IS_SPC_APP_USED(SPC_APP_PCMNWAY_USAGE)) {
		spc_PcmNWayStop();
	}

#if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif

	if(IS_SPC_APP_USED(SPC_APP_BGSND_USAGE)) {
		if(EXT_SRC_STATE_RUN == EXT_BGSND_GetStatus(gSpc_bgSnd.id, BGSND_DL_PROCESS) ){
			// force close without ack
			spc_BgSndForceClose(); 
			
		} else if (EXT_SRC_STATE_FLUSHING == EXT_BGSND_GetStatus(gSpc_bgSnd.id, BGSND_DL_PROCESS)
			|| EXT_SRC_STATE_FLUSHING_OVER == EXT_BGSND_GetStatus(gSpc_bgSnd.id, BGSND_DL_PROCESS)) {
			// AP has send close request, as the result we need to send ack to AP  
			spc_BgSndClose();  
		} // else is idle
	}


	if(IS_SPC_APP_USED(SPC_APP_CTM_USAGE)) {
#ifdef __CTM_SUPPORT__			
		spc_CtmStop();
#endif
	}

#if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif 
	
	if(IS_SPC_APP_USED(SPC_APP_VM_REC_USAGE)) {
		spc_VmRecordStop();
	}

	if(IS_SPC_APP_USED(SPC_APP_RAW_PCM_REC_USAGE)) {
		spc_RawPcmRecordStop();
	}


	// main app 
	if(IS_SPC_APP_USED(SPC_APP_SPEECH_USAGE)) {
		// Spc_SpeechOff();
		Spc_SpeechOff_Merge();
	}

	if(IS_SPC_APP_USED(SPC_APP_PCMROUTER_USAGE)) {
		Spc_SpeechRouterOn(false);
	}
#if defined( __SMART_PHONE_MODEM__ )
	if(is_factory_mode != FACTORY_BOOT)
	{
		SpcIO_SendMsgToAp(SPCIO_MSG_FROM_SPC_EPOF_NOTIFY, (kal_uint16)0, 0);
		kal_trace( TRACE_FUNC,SPC_EPOF_SPC_FORCEENDALLAPP_NOTIFY_AP);
	}
#endif //#if defined( __SMART_PHONE_MODEM__ )
	if(is_factory_mode == FACTORY_BOOT)
	{
		//Notify L4C: speech driver enter EPOF done
		msg_send6(MOD_MED, MOD_L4C, AUDIO_SAP, MSG_ID_AUDIO_L4C_EPOF_ACK, (local_para_struct *)NULL, NULL);
		kal_prompt_trace(MOD_L1SP, "[EPOF]Spc_ForceEndAllApp notify L4C done at factory mode");
	}

}

spcDynParNBData NBParData;
spcDynParNBData_V10 NBParData_v10; //need remove later
spcDynParWBData WBParData;
spcDynParSWBData SWBParData; 
spcDynParNBIIRData NBIIRParData;
spcDynParWBIIRData WBIIRParData;
spcDynParSWBIIRData SWBIIRParData;

kal_uint16 spc_dynamicParameterParser_volInUnit(AUD_SPC_DYNAMIC_PARAM_MAGICNUM_T unit,
	const kal_uint16 offset, const kal_uint16 length, SPC_MSG_FROM_T comeFrom,
	kal_uint16 *procLen)
{
	kal_uint16 curOffset; 
	kal_uint16 Data_Header;
	
	kal_uint16 tempProclen = 0; 
	
	kal_trace( TRACE_FUNC,SPC_SPE_RECEIVEDYNAMICPARAMETER, unit, length, comeFrom);	

	kal_prompt_trace(MOD_L1SP, "where am I? %x", offset); 
	curOffset = SpcIo_GetDataFromAp(offset, sizeof(Data_Header), &Data_Header, comeFrom);	
	tempProclen += sizeof(Data_Header);

	kal_prompt_trace(MOD_L1SP, "where am I?? %x", curOffset); 
	
	if((Data_Header&0x0F) == 0xF)
	{
		switch(unit) {
			case Vol_in_general_unit: 
			{
				spcCommonData *CommonParData;				
				uint16 *m_para; // debug print
				
				CommonParData = (spcCommonData *)emDataBuf;
				// reuse the emDataBuf to get data
				curOffset =  SpcIo_GetDataFromAp(curOffset, sizeof(spcCommonData), CommonParData, comeFrom); 
				tempProclen +=  sizeof(spcCommonData);

				L1SP_LoadCommonSpeechPara(CommonParData->Common_Para);

				// debug Print
				m_para = CommonParData->Common_Para; // size NUM_COMMON_PARAS
				kal_trace(TRACE_INFO, L1SP_COMMON_PARAM_VALUE, m_para[0], m_para[1], m_para[2], m_para[3], m_para[4], m_para[5], m_para[6], m_para[7], m_para[8], m_para[9], m_para[10], m_para[11]);
	
				L1Audio_SetDebugInfo(CommonParData->Debug_info_para);				
				VMREC_ConfigEpl();
				spc_dev_LoopbackPoint_DVT(CommonParData->Debug_info_para[15]);

				// debug Print
				m_para = CommonParData->Debug_info_para;
				kal_trace(TRACE_INFO, L1SP_MODE_VALUE, m_para[0], m_para[1], m_para[2], m_para[3], m_para[4], m_para[5], m_para[6], m_para[7], m_para[8], m_para[9], m_para[10], m_para[11], m_para[12], m_para[13], m_para[14], m_para[15]);
	
				SET_SPC_EM_INIT(SPC_EM_INIT_COMMON);
			}
				break; 
			case Vol_in_MagiClarity:
			{
				spcMagiClarityData *MagiClarityData;
				MagiClarityData = (spcMagiClarityData *)emDataBuf;
				
				curOffset =  SpcIo_GetDataFromAp(curOffset, sizeof(spcMagiClarityData), MagiClarityData, comeFrom);			
				tempProclen +=  sizeof(spcMagiClarityData);
				
				// L1SP_MagiClarityData(MagiClarityData->MagiClarity_Para); 
			
			}
				break;
			case Vol_in_echoRefforUsbAudio:
			{
				spcDynParEchoRefForUsbAudio_T *usbAudioParam; 
				usbAudioParam = (spcDynParEchoRefForUsbAudio_T *)(&emDataBuf); //buffer reuse
				
				curOffset =  SpcIo_GetDataFromAp(curOffset, sizeof(spcDynParEchoRefForUsbAudio_T), usbAudioParam, comeFrom);
				tempProclen += sizeof(spcDynParEchoRefForUsbAudio_T);

				// [remove]
				// SPE_SetEchoRefInfo(usbAudioParam->isEchoRefForUsbAudioOn, usbAudioParam->mic_index, usbAudioParam->chip_delay_with_switch, SPH_MODE_USB);
			}
				break;
			default:
				break;
		}
		
		
	}
	else
	{
		kal_trace( TRACE_FUNC,SPC_SPE_ASSERT_CHECK,Data_Header,unit,0);
		ASSERT(0); // Not support the Header
	}

	*procLen = tempProclen; 
	return curOffset; 

}

kal_uint16 spc_dynamicParameterParser_dmnrUnit(spcDynParHeader *Header, 
	const kal_uint16 offset, const kal_uint16 length, SPC_MSG_FROM_T comeFrom,
	kal_uint16 *procLen)
{
	kal_uint16 DynamicParCount;
	kal_uint16 i; 
	kal_uint16 Data_Header;
	kal_uint16 curOffset = offset; 
	kal_uint16 tempProclen = 0; 

	int16 *m_para; // debug print

	// kal_trace( TRACE_FUNC,SPC_SPE_RECEIVEDYNAMICPARAMETER4);	
	kal_trace( TRACE_FUNC,SPC_SPE_RECEIVEDYNAMICPARAMETER, Vol_in_DMNR, length, comeFrom);	
	DynamicParCount = (((Header->NumEachLayer)&0xF0)>>4) * ((Header->NumEachLayer)&0x0F);
		

	for(i=0;i<DynamicParCount;i++)
	{
		curOffset = SpcIo_GetDataFromAp(curOffset, sizeof(Data_Header), &Data_Header, comeFrom);
		tempProclen += sizeof(Data_Header);
		kal_trace( TRACE_FUNC,SPC_SPE_DMNR_HEADER, Data_Header);
		if(Data_Header==Header_DMNR_NB_REC)
		{
		    curOffset = SpcIo_GetDataFromAp(curOffset, sizeof(DMNR_NB_REC), &DMNR_NB_REC, comeFrom);	
			tempProclen += sizeof(DMNR_NB_REC);
			L1SP_SetDMNRPara(DMNR_NB_REC);
            SET_SPC_EM_INIT(SPC_EM_INIT_DMNR);

			m_para = DMNR_NB_REC; 
			kal_trace(TRACE_INFO, L1SP_MODE_VALUE, m_para[0], m_para[1], m_para[2], m_para[3], m_para[4], m_para[5], m_para[6], m_para[7], m_para[8], m_para[9], m_para[10], m_para[11], m_para[12], m_para[13], m_para[14], m_para[15]);
			m_para = &(DMNR_NB_REC[16]); 
			kal_trace(TRACE_INFO, L1SP_MODE_VALUE, m_para[0], m_para[1], m_para[2], m_para[3], m_para[4], m_para[5], m_para[6], m_para[7], m_para[8], m_para[9], m_para[10], m_para[11], m_para[12], m_para[13], m_para[14], m_para[15]);
			m_para = &(DMNR_NB_REC[32]); 
			kal_trace(TRACE_INFO, L1SP_MODE_VALUE, m_para[0], m_para[1], m_para[2], m_para[3], m_para[4], m_para[5], m_para[6], m_para[7], m_para[8], m_para[9], m_para[10], m_para[11], 0,0,0,0);
	
		}
		else if(Data_Header == Header_DMNR_WB_REC)
		{
		    curOffset = SpcIo_GetDataFromAp(curOffset, sizeof(DMNR_WB_REC), &DMNR_WB_REC, comeFrom);	
			tempProclen += sizeof(DMNR_WB_REC);
			L1SP_SetWbDMNRPara(DMNR_WB_REC);
            SET_SPC_EM_INIT(SPC_EM_INIT_DMNR);

			m_para = DMNR_WB_REC; 
			kal_trace(TRACE_INFO, L1SP_MODE_VALUE, m_para[0], m_para[1], m_para[2], m_para[3], m_para[4], m_para[5], m_para[6], m_para[7], m_para[8], m_para[9], m_para[10], m_para[11], m_para[12], m_para[13], m_para[14], m_para[15]);
			m_para = &(DMNR_WB_REC[16]); 
			kal_trace(TRACE_INFO, L1SP_MODE_VALUE, m_para[0], m_para[1], m_para[2], m_para[3], m_para[4], m_para[5], m_para[6], m_para[7], m_para[8], m_para[9], m_para[10], m_para[11], m_para[12], m_para[13], m_para[14], m_para[15]);
			m_para = &(DMNR_WB_REC[32]); 
			kal_trace(TRACE_INFO, L1SP_MODE_VALUE, m_para[0], m_para[1], m_para[2], m_para[3], m_para[4], m_para[5], m_para[6], m_para[7], m_para[8], m_para[9], m_para[10], m_para[11], m_para[12], m_para[13], m_para[14], m_para[15]);
			m_para = &(DMNR_WB_REC[48]); 
			kal_trace(TRACE_INFO, L1SP_MODE_VALUE, m_para[0], m_para[1], m_para[2], m_para[3], m_para[4], m_para[5], m_para[6], m_para[7], m_para[8], m_para[9], m_para[10], m_para[11], m_para[12], m_para[13], m_para[14], m_para[15]);
			m_para = &(DMNR_WB_REC[64]); 
			kal_trace(TRACE_INFO, L1SP_MODE_VALUE, m_para[0], m_para[1], m_para[2], m_para[3], m_para[4], m_para[5], m_para[6], m_para[7], m_para[8], m_para[9], m_para[10], m_para[11], 0,0,0,0);	
		}				
		else if(Data_Header == Header_DMNR_NB_LSP)
		{
		    curOffset = SpcIo_GetDataFromAp(curOffset, sizeof(DMNR_NB_LoudSpk), &DMNR_NB_LoudSpk, comeFrom);
			tempProclen += sizeof(DMNR_NB_LoudSpk);
			L1SP_SetLSpkDMNRPara(DMNR_NB_LoudSpk);
            SET_SPC_EM_INIT(SPC_EM_INIT_LSPK_DMNR);

			m_para = DMNR_NB_LoudSpk; 
			kal_trace(TRACE_INFO, L1SP_MODE_VALUE, m_para[0], m_para[1], m_para[2], m_para[3], m_para[4], m_para[5], m_para[6], m_para[7], m_para[8], m_para[9], m_para[10], m_para[11], m_para[12], m_para[13], m_para[14], m_para[15]);
			m_para = &(DMNR_NB_LoudSpk[16]); 
			kal_trace(TRACE_INFO, L1SP_MODE_VALUE, m_para[0], m_para[1], m_para[2], m_para[3], m_para[4], m_para[5], m_para[6], m_para[7], m_para[8], m_para[9], m_para[10], m_para[11], m_para[12], m_para[13], m_para[14], m_para[15]);
			m_para = &(DMNR_NB_LoudSpk[32]); 
			kal_trace(TRACE_INFO, L1SP_MODE_VALUE, m_para[0], m_para[1], m_para[2], m_para[3], m_para[4], m_para[5], m_para[6], m_para[7], m_para[8], m_para[9], m_para[10], m_para[11], 0,0,0,0);
	
		}							

		else if(Data_Header == Header_DMNR_WB_LSP)
		{			
		    curOffset = SpcIo_GetDataFromAp(curOffset, sizeof(DMNR_WB_LoudSpk), &DMNR_WB_LoudSpk, comeFrom);	
			tempProclen += sizeof(DMNR_WB_LoudSpk);
			L1SP_SetLSpkWbDMNRPara(DMNR_WB_LoudSpk);
			SET_SPC_EM_INIT(SPC_EM_INIT_LSPK_DMNR);

			m_para = DMNR_WB_LoudSpk; 
			kal_trace(TRACE_INFO, L1SP_MODE_VALUE, m_para[0], m_para[1], m_para[2], m_para[3], m_para[4], m_para[5], m_para[6], m_para[7], m_para[8], m_para[9], m_para[10], m_para[11], m_para[12], m_para[13], m_para[14], m_para[15]);
			m_para = &(DMNR_WB_LoudSpk[16]); 
			kal_trace(TRACE_INFO, L1SP_MODE_VALUE, m_para[0], m_para[1], m_para[2], m_para[3], m_para[4], m_para[5], m_para[6], m_para[7], m_para[8], m_para[9], m_para[10], m_para[11], m_para[12], m_para[13], m_para[14], m_para[15]);
			m_para = &(DMNR_WB_LoudSpk[32]); 
			kal_trace(TRACE_INFO, L1SP_MODE_VALUE, m_para[0], m_para[1], m_para[2], m_para[3], m_para[4], m_para[5], m_para[6], m_para[7], m_para[8], m_para[9], m_para[10], m_para[11], m_para[12], m_para[13], m_para[14], m_para[15]);
			m_para = &(DMNR_WB_LoudSpk[48]); 
			kal_trace(TRACE_INFO, L1SP_MODE_VALUE, m_para[0], m_para[1], m_para[2], m_para[3], m_para[4], m_para[5], m_para[6], m_para[7], m_para[8], m_para[9], m_para[10], m_para[11], m_para[12], m_para[13], m_para[14], m_para[15]);
			m_para = &(DMNR_WB_LoudSpk[64]); 
			kal_trace(TRACE_INFO, L1SP_MODE_VALUE, m_para[0], m_para[1], m_para[2], m_para[3], m_para[4], m_para[5], m_para[6], m_para[7], m_para[8], m_para[9], m_para[10], m_para[11], 0,0,0,0);	
		}
		else if((Data_Header == Header_DMNR_SWB_REC) )
		{
			curOffset = SpcIo_GetDataFromAp(curOffset, sizeof(DMNR_SWB_REC), &DMNR_SWB_REC, comeFrom);
			tempProclen += sizeof(DMNR_SWB_REC);
			L1SP_SetSWbDMNRPara(DMNR_SWB_REC);
			SET_SPC_EM_INIT(SPC_EM_INIT_DMNR);
			m_para = DMNR_SWB_REC; 
			kal_trace(TRACE_INFO, L1SP_MODE_VALUE, m_para[0], m_para[1], m_para[2], m_para[3], m_para[4], m_para[5], m_para[6], m_para[7], m_para[8], m_para[9], m_para[10], m_para[11], m_para[12], m_para[13], m_para[14], m_para[15]);
			m_para = &(DMNR_SWB_REC[16]); 
			kal_trace(TRACE_INFO, L1SP_MODE_VALUE, m_para[0], m_para[1], m_para[2], m_para[3], m_para[4], m_para[5], m_para[6], m_para[7], m_para[8], m_para[9], m_para[10], m_para[11], m_para[12], m_para[13], m_para[14], m_para[15]);
			m_para = &(DMNR_SWB_REC[32]); 
			kal_trace(TRACE_INFO, L1SP_MODE_VALUE, m_para[0], m_para[1], m_para[2], m_para[3], m_para[4], m_para[5], m_para[6], m_para[7], m_para[8], m_para[9], m_para[10], m_para[11], m_para[12], m_para[13], m_para[14], m_para[15]);
			m_para = &(DMNR_SWB_REC[48]); 
			kal_trace(TRACE_INFO, L1SP_MODE_VALUE, m_para[0], m_para[1], m_para[2], m_para[3], m_para[4], m_para[5], m_para[6], m_para[7], m_para[8], m_para[9], m_para[10], m_para[11], m_para[12], m_para[13], m_para[14], m_para[15]);
			m_para = &(DMNR_SWB_REC[64]); 
			kal_trace(TRACE_INFO, L1SP_MODE_VALUE, m_para[0], m_para[1], m_para[2], m_para[3], m_para[4], m_para[5], m_para[6], m_para[7], m_para[8], m_para[9], m_para[10], m_para[11], m_para[12], m_para[13], m_para[14], m_para[15]);	
			m_para = &(DMNR_SWB_REC[80]); 	
			kal_trace(TRACE_INFO, L1SP_MODE_VALUE, m_para[0], m_para[1], m_para[2], m_para[3], m_para[4], m_para[5], m_para[6], m_para[7], m_para[8], m_para[9], m_para[10], m_para[11], m_para[12], m_para[13], m_para[14], m_para[15]);	
			m_para = &(DMNR_SWB_REC[96]); 	
			kal_trace(TRACE_INFO, L1SP_MODE_VALUE, m_para[0], m_para[1], m_para[2], m_para[3], m_para[4], m_para[5], m_para[6], m_para[7], m_para[8], m_para[9], m_para[10], m_para[11], m_para[12], m_para[13], m_para[14], m_para[15]);	
			m_para = &(DMNR_SWB_REC[112]);	
			kal_trace(TRACE_INFO, L1SP_MODE_VALUE, m_para[0], m_para[1], m_para[2], m_para[3], m_para[4], m_para[5], m_para[6], m_para[7], m_para[8], 0, 0,0,0, 0, 0, 0);		
		}
		else if((Data_Header == Header_DMNR_SWB_LSP) )
		{	
			curOffset = SpcIo_GetDataFromAp(curOffset, sizeof(DMNR_SWB_LoudSpk), &DMNR_SWB_LoudSpk, comeFrom);	
			tempProclen += sizeof(DMNR_SWB_LoudSpk);
			L1SP_SetLSpkSWbDMNRPara(DMNR_SWB_LoudSpk);
			SET_SPC_EM_INIT(SPC_EM_INIT_LSPK_DMNR);
			m_para = DMNR_SWB_LoudSpk; 
			kal_trace(TRACE_INFO, L1SP_MODE_VALUE, m_para[0], m_para[1], m_para[2], m_para[3], m_para[4], m_para[5], m_para[6], m_para[7], m_para[8], m_para[9], m_para[10], m_para[11], m_para[12], m_para[13], m_para[14], m_para[15]);
			m_para = &(DMNR_SWB_LoudSpk[16]); 
			kal_trace(TRACE_INFO, L1SP_MODE_VALUE, m_para[0], m_para[1], m_para[2], m_para[3], m_para[4], m_para[5], m_para[6], m_para[7], m_para[8], m_para[9], m_para[10], m_para[11], m_para[12], m_para[13], m_para[14], m_para[15]);
			m_para = &(DMNR_SWB_LoudSpk[32]); 
			kal_trace(TRACE_INFO, L1SP_MODE_VALUE, m_para[0], m_para[1], m_para[2], m_para[3], m_para[4], m_para[5], m_para[6], m_para[7], m_para[8], m_para[9], m_para[10], m_para[11], m_para[12], m_para[13], m_para[14], m_para[15]);
			m_para = &(DMNR_SWB_LoudSpk[48]); 
			kal_trace(TRACE_INFO, L1SP_MODE_VALUE, m_para[0], m_para[1], m_para[2], m_para[3], m_para[4], m_para[5], m_para[6], m_para[7], m_para[8], m_para[9], m_para[10], m_para[11], m_para[12], m_para[13], m_para[14], m_para[15]);
			m_para = &(DMNR_SWB_LoudSpk[64]); 
			kal_trace(TRACE_INFO, L1SP_MODE_VALUE, m_para[0], m_para[1], m_para[2], m_para[3], m_para[4], m_para[5], m_para[6], m_para[7], m_para[8], m_para[9], m_para[10], m_para[11], m_para[12], m_para[13], m_para[14], m_para[15]);	
			m_para = &(DMNR_SWB_LoudSpk[80]); 	
			kal_trace(TRACE_INFO, L1SP_MODE_VALUE, m_para[0], m_para[1], m_para[2], m_para[3], m_para[4], m_para[5], m_para[6], m_para[7], m_para[8], m_para[9], m_para[10], m_para[11], m_para[12], m_para[13], m_para[14], m_para[15]);	
			m_para = &(DMNR_SWB_LoudSpk[96]); 	
			kal_trace(TRACE_INFO, L1SP_MODE_VALUE, m_para[0], m_para[1], m_para[2], m_para[3], m_para[4], m_para[5], m_para[6], m_para[7], m_para[8], m_para[9], m_para[10], m_para[11], m_para[12], m_para[13], m_para[14], m_para[15]);	
			m_para = &(DMNR_SWB_LoudSpk[112]);	
			kal_trace(TRACE_INFO, L1SP_MODE_VALUE, m_para[0], m_para[1], m_para[2], m_para[3], m_para[4], m_para[5], m_para[6], m_para[7], m_para[8], 0, 0,0,0, 0, 0, 0);		
		}
		else
		{
		    kal_trace( TRACE_FUNC,SPC_SPE_ASSERT_CHECK,Data_Header,Vol_in_DMNR,0);
		    ASSERT(0);//not support the dataheader
		}
		// SetSpeechEnhancement(false);
		// SetSpeechEnhancement(true);	
	}		
	

	*procLen = tempProclen; 
	return curOffset;
}


kal_uint16 spc_dynamicParameterParser_volDeUnit_ver10(kal_uint16 DynamicParCount,
	const kal_uint16 offset, const kal_uint16 length, SPC_MSG_FROM_T comeFrom,
	kal_uint16 *procLen)
{
	kal_uint16 Data_Header;
	kal_uint16 tempProclen = 0; 
	kal_uint16 curOffset = offset; 

	kal_uint16 i,Network,k;

	for(i = 0 ; i < DynamicParCount ; i ++)
	{
		curOffset = SpcIo_GetDataFromAp(curOffset, sizeof(Data_Header), &Data_Header, comeFrom);	
		tempProclen += sizeof(Data_Header);
		
		if(((Data_Header&0xF000)>>8)==NB_Par)
		{
		
			curOffset =  SpcIo_GetDataFromAp(curOffset, sizeof(spcDynParNBData_V10), &NBParData_v10, comeFrom);
			tempProclen += sizeof(spcDynParNBData_V10);
			
			Network = (Data_Header&0x0FFF); // [bit0~bit11] bit0:GSM bit1:WCDMA bit2:CDMA bit3:VOLTE bit4:C2K
			kal_trace( TRACE_FUNC,SPC_SPE_CHECK_SPEECH_PAR_HEADER_FORMAT,Data_Header,Network);
			if((Network>>12)==DONT_CARE_NETWORK)
			{
				for(k = 0; k < TOTAL_NETWORK_NUMBER; k++)
				{
					memcpy(Temp_speech_NB_Mode_para[k], NBParData_v10.speech_Mode_para, NUM_MODE_PARAS*sizeof(uint16)) ;	
					memcpy(Temp_speech_NB_FIR_IN_para[k], NBParData_v10.speech_NB_FIR_IN_para, 45*sizeof(uint16)) ; 
					memcpy(Temp_speech_NB_FIR_OUT_para[k], NBParData_v10.speech_NB_FIR_OUT_para, 45*sizeof(uint16)) ;	
				}
			}					
			else 
			{
				for(k = 0; k < TOTAL_NETWORK_NUMBER; k++)
				{
					if(((Network>>k)&0x1))
					{
					memcpy(Temp_speech_NB_Mode_para[k], NBParData_v10.speech_Mode_para, NUM_MODE_PARAS*sizeof(uint16)) ;					
					memcpy(Temp_speech_NB_FIR_IN_para[k], NBParData_v10.speech_NB_FIR_IN_para, 45*sizeof(uint16)) ;
					memcpy(Temp_speech_NB_FIR_OUT_para[k], NBParData_v10.speech_NB_FIR_OUT_para, 45*sizeof(uint16)) ;										  
					}
				}
			}
						
			SET_SPC_EM_INIT(SPC_EM_INIT_NB);
		}
		else if((((Data_Header&0xF000)>>8)==WB_Par))
		{
			curOffset =  SpcIo_GetDataFromAp(curOffset, sizeof(spcDynParWBData), &WBParData, comeFrom);
			tempProclen += sizeof(spcDynParWBData);
			
			Network = (Data_Header&0x0FFF); // [bit0~bit11] bit0:GSM bit1:WCDMA bit2:CDMA bit3:VOLTE bit4:C2K
			kal_trace(TRACE_FUNC,SPC_SPE_CHECK_SPEECH_PAR_HEADER_FORMAT,Data_Header,Network);
			if((Network>>12)==DONT_CARE_NETWORK)
			{
				for(k = 0; k < TOTAL_NETWORK_NUMBER; k++)
				{
					memcpy(Temp_speech_WB_Mode_para[k], WBParData.speech_Mode_para, NUM_MODE_PARAS*sizeof(uint16)) ;	
					memcpy(Temp_speech_WB_FIR_IN_para[k], WBParData.speech_WB_FIR_IN_para, NUM_WB_FIR_COEFFS*sizeof(uint16)) ;	
					memcpy(Temp_speech_WB_FIR_OUT_para[k], WBParData.speech_WB_FIR_OUT_para, NUM_WB_FIR_COEFFS*sizeof(uint16)) ;	
				}
			}
			else 
			{
				for(k = 0; k < TOTAL_NETWORK_NUMBER; k++)
				{
					if(((Network>>k)&0x1))
					{
						memcpy(Temp_speech_WB_Mode_para[k], WBParData.speech_Mode_para, NUM_MODE_PARAS*sizeof(uint16)) ;	
						memcpy(Temp_speech_WB_FIR_IN_para[k], WBParData.speech_WB_FIR_IN_para, NUM_WB_FIR_COEFFS*sizeof(uint16)) ;
						memcpy(Temp_speech_WB_FIR_OUT_para[k], WBParData.speech_WB_FIR_OUT_para, NUM_WB_FIR_COEFFS*sizeof(uint16)) ;	
					}
				}
			}	
			SET_SPC_EM_INIT(SPC_EM_INIT_WB);
		}
		else if((((Data_Header&0xF000)>>8)==SWB_Par))
		{
			curOffset =  SpcIo_GetDataFromAp(curOffset, sizeof(spcDynParSWBData), &SWBParData, comeFrom);
			tempProclen += sizeof(spcDynParSWBData);
			
			Network = (Data_Header&0x0FFF); // [bit0~bit11] bit0:GSM bit1:WCDMA bit2:CDMA bit3:VOLTE bit4:C2K
			kal_trace(TRACE_FUNC,SPC_SPE_CHECK_SPEECH_PAR_HEADER_FORMAT,Data_Header,Network);
			if((Network>>12)==DONT_CARE_NETWORK)
			{
				for(k = 0; k < TOTAL_NETWORK_NUMBER; k++)
				{
					memcpy(Temp_speech_SWB_Mode_para[k], SWBParData.speech_Mode_para, NUM_MODE_PARAS*sizeof(uint16)) ;	
					memcpy(Temp_speech_SWB_FIR_IN_para[k], SWBParData.speech_SWB_FIR_IN_para, NUM_SWB_FIR_COEFFS*sizeof(uint16)) ;	
					memcpy(Temp_speech_SWB_FIR_OUT_para[k], SWBParData.speech_SWB_FIR_OUT_para, NUM_SWB_FIR_COEFFS*sizeof(uint16)) ;	
				}
			}
			else 
			{
				for(k = 0; k < TOTAL_NETWORK_NUMBER; k++)
				{
					if(((Network>>k)&0x1))
					{
						memcpy(Temp_speech_SWB_Mode_para[k], SWBParData.speech_Mode_para, NUM_MODE_PARAS*sizeof(uint16)) ;	
						memcpy(Temp_speech_SWB_FIR_IN_para[k], SWBParData.speech_SWB_FIR_IN_para, NUM_SWB_FIR_COEFFS*sizeof(uint16)) ;
						memcpy(Temp_speech_SWB_FIR_OUT_para[k], SWBParData.speech_SWB_FIR_OUT_para, NUM_SWB_FIR_COEFFS*sizeof(uint16)) ;	
					}
				}
			}	
			SET_SPC_EM_INIT(SPC_EM_INIT_SWB);
		}
		else
		{
			//Not suppot bandover
			kal_trace( TRACE_FUNC,SPC_SPE_ASSERT_CHECK,Data_Header,0,0);
			ASSERT(0);
		}
	}

	*procLen = tempProclen; 
	return curOffset;
}

kal_uint16 spc_dynamicParameterParser_volDeUnit_ver20(kal_uint16 DynamicParCount,
	const kal_uint16 offset, const kal_uint16 length, SPC_MSG_FROM_T comeFrom,
	kal_uint16 *procLen)
{
	kal_uint16 Data_Header;
	kal_uint16 tempProclen = 0; 
	kal_uint16 curOffset = offset; 

	kal_uint16 i,Network,k;

	for(i = 0 ; i < DynamicParCount ; i ++)
	{
		curOffset = SpcIo_GetDataFromAp(curOffset, sizeof(Data_Header), &Data_Header, comeFrom);	
		tempProclen += sizeof(Data_Header);
		
		if(((Data_Header&0xF000)>>8)==NB_Par)
		{
		
			curOffset =  SpcIo_GetDataFromAp(curOffset, sizeof(spcDynParNBData), &NBParData, comeFrom);
			tempProclen += sizeof(spcDynParNBData);
			curOffset =  SpcIo_GetDataFromAp(curOffset, sizeof(spcDynParNBIIRData), &NBIIRParData, comeFrom);
			tempProclen += sizeof(spcDynParNBIIRData);
			
			Network = (Data_Header&0x0FFF); // [bit0~bit11] bit0:GSM bit1:WCDMA bit2:CDMA bit3:VOLTE bit4:C2K
			kal_trace( TRACE_FUNC,SPC_SPE_CHECK_SPEECH_PAR_HEADER_FORMAT,Data_Header,Network);
			if(Network==0x0FFF) // all network use same par. 
			{
				for(k = 0; k < TOTAL_NETWORK_NUMBER; k++)
				{
					memcpy(Temp_speech_NB_Mode_para[k], NBParData.speech_Mode_para, NUM_MODE_PARAS*sizeof(uint16)) ;	
					memcpy(Temp_speech_NB_FIR_IN_para[k], NBParData.speech_NB_FIR_IN_para, NUM_FIR_COEFFS*sizeof(uint16)) ; 
					memcpy(Temp_speech_NB_FIR_OUT_para[k], NBParData.speech_NB_FIR_OUT_para, NUM_FIR_COEFFS*sizeof(uint16)) ;	
					memcpy(Temp_speech_NB_IIR_IN_para[k], NBIIRParData.speech_NB_IIR_IN_para, NUM_IIR_COEFFS*sizeof(uint16));	
					memcpy(Temp_speech_NB_IIR_OUT_para[k], NBIIRParData.speech_NB_IIR_OUT_para, NUM_IIR_COEFFS*sizeof(uint16));	
					memcpy(Temp_speech_NB_MIC1_IIR_para[k], NBIIRParData.speech_NB_MIC1_IIR_para, NUM_MIC1_IIR_COEFFS*sizeof(uint16));
				    memcpy(Temp_speech_NB_MIC2_IIR_para[k], NBIIRParData.speech_NB_MIC2_IIR_para, NUM_MIC2_IIR_COEFFS*sizeof(uint16));
				}
			}					
			else 
			{
				for(k = 0; k < TOTAL_NETWORK_NUMBER; k++)
				{
					if(((Network>>k)&0x1))
					{
					memcpy(Temp_speech_NB_Mode_para[k], NBParData.speech_Mode_para, NUM_MODE_PARAS*sizeof(uint16)) ;					
					memcpy(Temp_speech_NB_FIR_IN_para[k], NBParData.speech_NB_FIR_IN_para, NUM_FIR_COEFFS*sizeof(uint16)) ;
					memcpy(Temp_speech_NB_FIR_OUT_para[k], NBParData.speech_NB_FIR_OUT_para, NUM_FIR_COEFFS*sizeof(uint16)) ;
					memcpy(Temp_speech_NB_IIR_IN_para[k], NBIIRParData.speech_NB_IIR_IN_para, NUM_IIR_COEFFS*sizeof(uint16));	
					memcpy(Temp_speech_NB_IIR_OUT_para[k], NBIIRParData.speech_NB_IIR_OUT_para, NUM_IIR_COEFFS*sizeof(uint16));	
					memcpy(Temp_speech_NB_MIC1_IIR_para[k], NBIIRParData.speech_NB_MIC1_IIR_para, NUM_MIC1_IIR_COEFFS*sizeof(uint16));
					memcpy(Temp_speech_NB_MIC2_IIR_para[k], NBIIRParData.speech_NB_MIC2_IIR_para, NUM_MIC2_IIR_COEFFS*sizeof(uint16));
					}
				}
			}
						
			SET_SPC_EM_INIT(SPC_EM_INIT_NB);
		}
		else if((((Data_Header&0xF000)>>8)==WB_Par))
		{
			curOffset =  SpcIo_GetDataFromAp(curOffset, sizeof(spcDynParWBData), &WBParData, comeFrom);
			tempProclen += sizeof(spcDynParWBData);
			curOffset =  SpcIo_GetDataFromAp(curOffset, sizeof(spcDynParWBIIRData), &WBIIRParData, comeFrom);
			tempProclen += sizeof(spcDynParWBIIRData);
			
			Network = (Data_Header&0x0FFF); // [bit0~bit11] bit0:GSM bit1:WCDMA bit2:CDMA bit3:VOLTE bit4:C2K
			kal_trace(TRACE_FUNC,SPC_SPE_CHECK_SPEECH_PAR_HEADER_FORMAT,Data_Header,Network);
			if(Network==0x0FFF) // all network use same par. 
			{
				for(k = 0; k < TOTAL_NETWORK_NUMBER; k++)
				{
					memcpy(Temp_speech_WB_Mode_para[k], WBParData.speech_Mode_para, NUM_MODE_PARAS*sizeof(uint16)) ;	
					memcpy(Temp_speech_WB_FIR_IN_para[k], WBParData.speech_WB_FIR_IN_para, NUM_WB_FIR_COEFFS*sizeof(uint16)) ;	
					memcpy(Temp_speech_WB_FIR_OUT_para[k], WBParData.speech_WB_FIR_OUT_para, NUM_WB_FIR_COEFFS*sizeof(uint16)) ;
					memcpy(Temp_speech_WB_IIR_IN_para[k], WBIIRParData.speech_WB_IIR_IN_para, NUM_IIR_COEFFS*sizeof(uint16));	
					memcpy(Temp_speech_WB_IIR_OUT_para[k], WBIIRParData.speech_WB_IIR_OUT_para, NUM_IIR_COEFFS*sizeof(uint16));	
					memcpy(Temp_speech_WB_MIC1_IIR_para[k], WBIIRParData.speech_WB_MIC1_IIR_para, NUM_MIC1_IIR_COEFFS*sizeof(uint16));
					memcpy(Temp_speech_WB_MIC2_IIR_para[k], WBIIRParData.speech_WB_MIC2_IIR_para, NUM_MIC2_IIR_COEFFS*sizeof(uint16));
				}
			}
			else 
			{
				for(k = 0; k < TOTAL_NETWORK_NUMBER; k++)
				{
					if(((Network>>k)&0x1))
					{
						memcpy(Temp_speech_WB_Mode_para[k], WBParData.speech_Mode_para, NUM_MODE_PARAS*sizeof(uint16)) ;	
						memcpy(Temp_speech_WB_FIR_IN_para[k], WBParData.speech_WB_FIR_IN_para, NUM_WB_FIR_COEFFS*sizeof(uint16)) ;
						memcpy(Temp_speech_WB_FIR_OUT_para[k], WBParData.speech_WB_FIR_OUT_para, NUM_WB_FIR_COEFFS*sizeof(uint16)) ;
						memcpy(Temp_speech_WB_IIR_IN_para[k], WBIIRParData.speech_WB_IIR_IN_para, NUM_IIR_COEFFS*sizeof(uint16));	
					   	memcpy(Temp_speech_WB_IIR_OUT_para[k], WBIIRParData.speech_WB_IIR_OUT_para, NUM_IIR_COEFFS*sizeof(uint16));	
						memcpy(Temp_speech_WB_MIC1_IIR_para[k], WBIIRParData.speech_WB_MIC1_IIR_para, NUM_MIC1_IIR_COEFFS*sizeof(uint16));
						memcpy(Temp_speech_WB_MIC2_IIR_para[k], WBIIRParData.speech_WB_MIC2_IIR_para, NUM_MIC2_IIR_COEFFS*sizeof(uint16));
					}
				}
			}	
			SET_SPC_EM_INIT(SPC_EM_INIT_WB);
		}
		else if((((Data_Header&0xF000)>>8)==SWB_Par))
		{
			curOffset =  SpcIo_GetDataFromAp(curOffset, sizeof(spcDynParSWBData), &SWBParData, comeFrom);
			tempProclen += sizeof(spcDynParSWBData);
			curOffset =  SpcIo_GetDataFromAp(curOffset, sizeof(spcDynParSWBIIRData), &SWBIIRParData, comeFrom);
			tempProclen += sizeof(spcDynParSWBIIRData);
			
			Network = (Data_Header&0x0FFF); // [bit0~bit11] bit0:GSM bit1:WCDMA bit2:CDMA bit3:VOLTE bit4:C2K
			kal_trace(TRACE_FUNC,SPC_SPE_CHECK_SPEECH_PAR_HEADER_FORMAT,Data_Header,Network);
			if(Network==0x0FFF) // all network use same par. 
			{
				for(k = 0; k < TOTAL_NETWORK_NUMBER; k++)
				{
					memcpy(Temp_speech_SWB_Mode_para[k], SWBParData.speech_Mode_para, NUM_MODE_PARAS*sizeof(uint16)) ;	
					memcpy(Temp_speech_SWB_FIR_IN_para[k], SWBParData.speech_SWB_FIR_IN_para, NUM_SWB_FIR_COEFFS*sizeof(uint16)) ;	
					memcpy(Temp_speech_SWB_FIR_OUT_para[k], SWBParData.speech_SWB_FIR_OUT_para, NUM_SWB_FIR_COEFFS*sizeof(uint16)) ;	
					memcpy(Temp_speech_SWB_IIR_IN_para[k], SWBIIRParData.speech_SWB_IIR_IN_para, NUM_IIR_COEFFS*sizeof(uint16));	
					memcpy(Temp_speech_SWB_IIR_OUT_para[k], SWBIIRParData.speech_SWB_IIR_OUT_para, NUM_IIR_COEFFS*sizeof(uint16));	
					memcpy(Temp_speech_SWB_MIC1_IIR_para[k], SWBIIRParData.speech_SWB_MIC1_IIR_para, NUM_MIC1_IIR_COEFFS*sizeof(uint16));
					memcpy(Temp_speech_SWB_MIC2_IIR_para[k], SWBIIRParData.speech_SWB_MIC2_IIR_para, NUM_MIC2_IIR_COEFFS*sizeof(uint16));
				}
			}
			else 
			{
				for(k = 0; k < TOTAL_NETWORK_NUMBER; k++)
				{
					if(((Network>>k)&0x1))
					{
						memcpy(Temp_speech_SWB_Mode_para[k], SWBParData.speech_Mode_para, NUM_MODE_PARAS*sizeof(uint16)) ;	
						memcpy(Temp_speech_SWB_FIR_IN_para[k], SWBParData.speech_SWB_FIR_IN_para, NUM_SWB_FIR_COEFFS*sizeof(uint16)) ;
						memcpy(Temp_speech_SWB_FIR_OUT_para[k], SWBParData.speech_SWB_FIR_OUT_para, NUM_SWB_FIR_COEFFS*sizeof(uint16)) ;
						memcpy(Temp_speech_SWB_IIR_IN_para[k], SWBIIRParData.speech_SWB_IIR_IN_para, NUM_IIR_COEFFS*sizeof(uint16));	
					    memcpy(Temp_speech_SWB_IIR_OUT_para[k], SWBIIRParData.speech_SWB_IIR_OUT_para, NUM_IIR_COEFFS*sizeof(uint16));	
						memcpy(Temp_speech_SWB_MIC1_IIR_para[k], SWBIIRParData.speech_SWB_MIC1_IIR_para, NUM_MIC1_IIR_COEFFS*sizeof(uint16));
						memcpy(Temp_speech_SWB_MIC2_IIR_para[k], SWBIIRParData.speech_SWB_MIC2_IIR_para, NUM_MIC2_IIR_COEFFS*sizeof(uint16));
					}
				}
			}	
			SET_SPC_EM_INIT(SPC_EM_INIT_SWB);
		}
		else
		{
			//Not suppot bandover
			kal_trace( TRACE_FUNC,SPC_SPE_ASSERT_CHECK,Data_Header,0,0);
			ASSERT(0);
		}
	}
    SET_SPC_EM_INIT(SPC_EM_INIT_IIR);
	*procLen = tempProclen; 
	return curOffset;
}

kal_uint16 spc_dynamicParameterParser_volDeUnit_ver00(kal_uint16 DynamicParCount,
	const kal_uint16 offset, const kal_uint16 length, SPC_MSG_FROM_T comeFrom,
	kal_uint16 *procLen)
{
	kal_uint16 Data_Header;
	kal_uint16 tempProclen = 0; 
	kal_uint16 curOffset = offset; 

	kal_uint16 i,Network,k;

	for(i = 0 ; i < DynamicParCount ; i ++)
	{
		curOffset = SpcIo_GetDataFromAp(curOffset, sizeof(Data_Header), &Data_Header, comeFrom);	
		tempProclen = tempProclen + sizeof(Data_Header);
		
		if(((Data_Header&0xF0)==NB_Par))
		{	
			curOffset =  SpcIo_GetDataFromAp(curOffset, sizeof(spcDynParNBData), &NBParData, comeFrom);
			tempProclen = tempProclen + sizeof(spcDynParNBData);
			
			Network = (Data_Header&0x0F);
			if(Network == GSM_NETWORK||Network == WCDMA_NETWORK||Network == CDMA_NETWORK||Network == VOLTE_NETWORK||Network == C2K_NETWORK)
			{
	    		memcpy(Temp_speech_NB_Mode_para[Network-1], NBParData.speech_Mode_para, NUM_MODE_PARAS*sizeof(uint16)) ;					
        		memcpy(Temp_speech_NB_FIR_IN_para[Network-1], NBParData.speech_NB_FIR_IN_para, NUM_FIR_COEFFS*sizeof(uint16)) ;
				memcpy(Temp_speech_NB_FIR_OUT_para[Network-1], NBParData.speech_NB_FIR_OUT_para, NUM_FIR_COEFFS*sizeof(uint16)) ;			
			}
			else if(Network==DONT_CARE_NETWORK)
			{
				for(k = 0; k < TOTAL_NETWORK_NUMBER; k++)
				{
		   			memcpy(Temp_speech_NB_Mode_para[k], NBParData.speech_Mode_para, NUM_MODE_PARAS*sizeof(uint16)) ;	
		   			memcpy(Temp_speech_NB_FIR_IN_para[k], NBParData.speech_NB_FIR_IN_para, NUM_FIR_COEFFS*sizeof(uint16)) ;	
		   			memcpy(Temp_speech_NB_FIR_OUT_para[k], NBParData.speech_NB_FIR_OUT_para, NUM_FIR_COEFFS*sizeof(uint16)) ;	
				}
			}
			else
			{
		    // not support the network info
		     kal_trace( TRACE_FUNC,SPC_SPE_ASSERT_CHECK,Network,0,0);
		   	 ASSERT(0);

			}
	    	SET_SPC_EM_INIT(SPC_EM_INIT_NB);
		}
		else if(((Data_Header&0xF0)==WB_Par))
		{
			curOffset =  SpcIo_GetDataFromAp(curOffset, sizeof(spcDynParWBData), &WBParData, comeFrom); 
			tempProclen = tempProclen + sizeof(spcDynParWBData);
			
			Network = (Data_Header&0x0F);
		    if(Network == GSM_NETWORK||Network == WCDMA_NETWORK||Network == CDMA_NETWORK||Network == VOLTE_NETWORK||Network == C2K_NETWORK)
			{
				memcpy(Temp_speech_WB_Mode_para[Network-1], WBParData.speech_Mode_para, NUM_MODE_PARAS*sizeof(uint16)) ;	
        		memcpy(Temp_speech_WB_FIR_IN_para[Network-1], WBParData.speech_WB_FIR_IN_para, NUM_WB_FIR_COEFFS*sizeof(uint16)) ;
				memcpy(Temp_speech_WB_FIR_OUT_para[Network-1], WBParData.speech_WB_FIR_OUT_para, NUM_WB_FIR_COEFFS*sizeof(uint16)) ;	
			}
			else if(Network==DONT_CARE_NETWORK)
			{
				for(k = 0; k < TOTAL_NETWORK_NUMBER; k++)
				{
		   			memcpy(Temp_speech_WB_Mode_para[k], WBParData.speech_Mode_para, NUM_MODE_PARAS*sizeof(uint16)) ;	
		   			memcpy(Temp_speech_WB_FIR_IN_para[k], WBParData.speech_WB_FIR_IN_para, NUM_WB_FIR_COEFFS*sizeof(uint16)) ;	
		   			memcpy(Temp_speech_WB_FIR_OUT_para[k], WBParData.speech_WB_FIR_OUT_para, NUM_WB_FIR_COEFFS*sizeof(uint16)) ;	
				}
			}
			else
			{
	    		// not support the network info
	    		kal_trace( TRACE_FUNC,SPC_SPE_ASSERT_CHECK,Network,0,0);
		    	ASSERT(0);
			}	
			SET_SPC_EM_INIT(SPC_EM_INIT_WB);
		}
		else if(((Data_Header&0xF0)==SWB_Par))
		{
			curOffset =  SpcIo_GetDataFromAp(curOffset, sizeof(spcDynParSWBData), &SWBParData, comeFrom); 
			tempProclen = tempProclen + sizeof(spcDynParSWBData);
			
			Network = (Data_Header&0x0F);
		    if(Network == GSM_NETWORK||Network == WCDMA_NETWORK||Network == CDMA_NETWORK||Network == VOLTE_NETWORK||Network == C2K_NETWORK)
			{
				memcpy(Temp_speech_SWB_Mode_para[Network-1], SWBParData.speech_Mode_para, NUM_MODE_PARAS*sizeof(uint16)) ;	
        		memcpy(Temp_speech_SWB_FIR_IN_para[Network-1], SWBParData.speech_SWB_FIR_IN_para, NUM_SWB_FIR_COEFFS*sizeof(uint16)) ;
				memcpy(Temp_speech_SWB_FIR_OUT_para[Network-1], SWBParData.speech_SWB_FIR_OUT_para, NUM_SWB_FIR_COEFFS*sizeof(uint16)) ;	
			}
			else if(Network==DONT_CARE_NETWORK)
			{
				for(k = 0; k < TOTAL_NETWORK_NUMBER; k++)
				{
		   			memcpy(Temp_speech_SWB_Mode_para[k], SWBParData.speech_Mode_para, NUM_MODE_PARAS*sizeof(uint16)) ;	
		   			memcpy(Temp_speech_SWB_FIR_IN_para[k], SWBParData.speech_SWB_FIR_IN_para, NUM_SWB_FIR_COEFFS*sizeof(uint16)) ;	
		   			memcpy(Temp_speech_SWB_FIR_OUT_para[k], SWBParData.speech_SWB_FIR_OUT_para, NUM_SWB_FIR_COEFFS*sizeof(uint16)) ;	
				}
			}
			else
			{
	    		// not support the network info
	    		kal_trace( TRACE_FUNC,SPC_SPE_ASSERT_CHECK,Network,0,0);
		    	ASSERT(0);
			}	
			SET_SPC_EM_INIT(SPC_EM_INIT_SWB);
		}
		else
		{
    	    //Not suppot bandover
    	    kal_trace( TRACE_FUNC,SPC_SPE_ASSERT_CHECK,Data_Header,0,0);
			ASSERT(0);
		}
 	}

	*procLen = tempProclen; 
	return curOffset;
}



/**
	@return: magic
	@procLen: [OUTPUT] process length
*/

uint16 spc_dynamicParameterParser_dispatcher(const kal_uint16 offset, const kal_uint16 length, SPC_MSG_FROM_T comeFrom,
	kal_uint16 *procLen, kal_uint16 *newOffset)
{
	spcDynParHeader Header;
	kal_uint16 curOffset;
	uint16 unProcLen = length; 		

	memset(&Header, 0, sizeof(spcDynParHeader));
	curOffset = SpcIo_GetDataFromAp(offset, sizeof(spcDynParHeader), &Header, comeFrom);
	unProcLen = unProcLen - sizeof(spcDynParHeader);

	kal_prompt_trace(MOD_L1SP, "where am I dispatcher: %x, %x, %x, %d", offset, curOffset, length, comeFrom);

	
	switch(Header.SphUnitMagiNum){
		case 0:
		{
			// when curOffset == offset, it also means cannot get data from AP param_shm
			// cannot get data from AP
			unProcLen = 0;
	
		}
			break;
		case Vol_de_speech_unit:
		{
			kal_uint16 DynamicParCount = 0; //initialize			
			kal_uint16 SpeechIndex; // bit1: Volume index, bit0: Mode 
			// kal_uint16 Data_Header;
			kal_uint16 Mode;
			kal_uint16 count;

			//Param_Header_Layer1; Network
      //Param_Header_Layer2; VoiceBand
		  // kal_trace( TRACE_FUNC,SPC_SPE_RECEIVEDYNAMICPARAMETER1);
			kal_trace( TRACE_FUNC,SPC_SPE_RECEIVEDYNAMICPARAMETER, Vol_de_speech_unit, length, comeFrom);	
			if(Header.NumLayer == 0x2)
			{
				DynamicParCount = (((Header.NumEachLayer)&0x00F0)>>4) * ((Header.NumEachLayer)&0x000F);
			}
			else if(Header.NumLayer == 0x1)
			{
				DynamicParCount = ((Header.NumEachLayer)&0x000F);
			}
			else
			{			
         //Not suppot over 2 Layer
         kal_trace( TRACE_FUNC,SPC_SPE_ASSERT_CHECK,Header.NumLayer,0,0);
				 ASSERT(0);
			}			
		  curOffset = SpcIo_GetDataFromAp(curOffset, sizeof(SpeechIndex), &SpeechIndex, comeFrom);
			unProcLen = unProcLen - sizeof(SpeechIndex);
			
			Mode = (SpeechIndex&0x0F);
			SpeechIndex = (((SpeechIndex)&0xF0)>>4);
			kal_trace( TRACE_FUNC,SPC_SPE_RECEIVEDYNAMICPARAMETER2,Mode,SpeechIndex,Header.Param_Header_Layer3);
   
            if(Header.Param_Header_Layer3== 0x10) // Version 1.0.
            {
            	kal_uint16 procLen=0;
            	curOffset = spc_dynamicParameterParser_volDeUnit_ver10(DynamicParCount, curOffset, unProcLen, comeFrom, &procLen);
				unProcLen = unProcLen - procLen;
            }
			else if(Header.Param_Header_Layer3== 0x20) // Version 2.0.
			{
				kal_uint16 procLen=0;
            	curOffset = spc_dynamicParameterParser_volDeUnit_ver20(DynamicParCount, curOffset, unProcLen, comeFrom, &procLen);
				unProcLen = unProcLen - procLen;

			}
			else //Version 0.0
			{
				 kal_uint16 procLen=0;
         curOffset = spc_dynamicParameterParser_volDeUnit_ver00(DynamicParCount, curOffset, unProcLen, comeFrom, &procLen);
				 unProcLen = unProcLen - procLen;
			}
			l1sp_setAllSpeechModePara((kal_uint16 *) Temp_speech_NB_Mode_para, TOTAL_NETWORK_NUMBER * NUM_MODE_PARAS);
	 		l1sp_setAllSpeechFirCoeff_InputOnly((kal_int16 *)Temp_speech_NB_FIR_IN_para, TOTAL_NETWORK_NUMBER * NUM_FIR_COEFFS);
	 		l1sp_setAllSpeechFirCoeff_OutputOnly((kal_int16 *)Temp_speech_NB_FIR_OUT_para, TOTAL_NETWORK_NUMBER * NUM_FIR_COEFFS);	
	 		l1sp_setAllWbSpeechModePara((kal_uint16 *)Temp_speech_WB_Mode_para, TOTAL_NETWORK_NUMBER * NUM_MODE_PARAS);
	 		l1sp_setAllWbSpeechFirCoeff_InputOnly((kal_int16 *)Temp_speech_WB_FIR_IN_para, TOTAL_NETWORK_NUMBER * NUM_WB_FIR_COEFFS);
			l1sp_setAllWbSpeechFirCoeff_OutputOnly((kal_int16 *)Temp_speech_WB_FIR_OUT_para, TOTAL_NETWORK_NUMBER * NUM_WB_FIR_COEFFS);	
			l1sp_setAllSWbSpeechModePara((kal_uint16 *)Temp_speech_SWB_Mode_para, TOTAL_NETWORK_NUMBER * NUM_MODE_PARAS);  
			l1sp_setAllSWbSpeechFirCoeff_InputOnly((kal_int16 *)Temp_speech_SWB_FIR_IN_para, TOTAL_NETWORK_NUMBER * NUM_SWB_FIR_COEFFS);
			l1sp_setAllSWbSpeechFirCoeff_OutputOnly((kal_int16 *)Temp_speech_SWB_FIR_OUT_para, TOTAL_NETWORK_NUMBER * NUM_SWB_FIR_COEFFS);

	 		for(count=0;count<TOTAL_NETWORK_NUMBER;count++)
	  		{
				kal_trace( TRACE_FUNC,SPC_SPE_CHECK_NB_MODE_PAR,count,Temp_speech_NB_Mode_para[count][0],Temp_speech_NB_Mode_para[count][1],Temp_speech_NB_Mode_para[count][2],Temp_speech_NB_Mode_para[count][3],Temp_speech_NB_Mode_para[count][4]);
		  		kal_trace( TRACE_FUNC,SPC_SPE_CHECK_NB_FIR_IN_PAR,count,Temp_speech_NB_FIR_IN_para[count][0],Temp_speech_NB_FIR_IN_para[count][1],Temp_speech_NB_FIR_IN_para[count][2],Temp_speech_NB_FIR_IN_para[count][3],Temp_speech_NB_FIR_IN_para[count][4]);
		  		kal_trace( TRACE_FUNC,SPC_SPE_CHECK_NB_FIR_OUT_PAR,count,Temp_speech_NB_FIR_OUT_para[count][0],Temp_speech_NB_FIR_OUT_para[count][1],Temp_speech_NB_FIR_OUT_para[count][2],Temp_speech_NB_FIR_OUT_para[count][3],Temp_speech_NB_FIR_OUT_para[count][4]);
				kal_trace( TRACE_FUNC,SPC_SPE_CHECK_WB_MODE_PAR,count,Temp_speech_WB_Mode_para[count][0],Temp_speech_WB_Mode_para[count][1],Temp_speech_WB_Mode_para[count][2],Temp_speech_WB_Mode_para[count][3],Temp_speech_WB_Mode_para[count][4]);
		  		kal_trace( TRACE_FUNC,SPC_SPE_CHECK_WB_FIR_IN_PAR,count,Temp_speech_WB_FIR_IN_para[count][0],Temp_speech_WB_FIR_IN_para[count][1],Temp_speech_WB_FIR_IN_para[count][2],Temp_speech_WB_FIR_IN_para[count][3],Temp_speech_WB_FIR_IN_para[count][4]);
		  		kal_trace( TRACE_FUNC,SPC_SPE_CHECK_WB_FIR_OUT_PAR,count,Temp_speech_WB_FIR_OUT_para[count][0],Temp_speech_WB_FIR_OUT_para[count][1],Temp_speech_WB_FIR_OUT_para[count][2],Temp_speech_WB_FIR_OUT_para[count][3],Temp_speech_WB_FIR_OUT_para[count][4]);
				kal_trace( TRACE_FUNC,SPC_SPE_CHECK_SWB_MODE_PAR,count,Temp_speech_SWB_Mode_para[count][0],Temp_speech_SWB_Mode_para[count][1],Temp_speech_SWB_Mode_para[count][2],Temp_speech_SWB_Mode_para[count][3],Temp_speech_SWB_Mode_para[count][4]);
		  		kal_trace( TRACE_FUNC,SPC_SPE_CHECK_SWB_FIR_IN_PAR,count,Temp_speech_SWB_FIR_IN_para[count][0],Temp_speech_SWB_FIR_IN_para[count][1],Temp_speech_SWB_FIR_IN_para[count][2],Temp_speech_SWB_FIR_IN_para[count][3],Temp_speech_SWB_FIR_IN_para[count][4]);
		  		kal_trace( TRACE_FUNC,SPC_SPE_CHECK_SWB_FIR_OUT_PAR,count,Temp_speech_SWB_FIR_OUT_para[count][0],Temp_speech_SWB_FIR_OUT_para[count][1],Temp_speech_SWB_FIR_OUT_para[count][2],Temp_speech_SWB_FIR_OUT_para[count][3],Temp_speech_SWB_FIR_OUT_para[count][4]);
		    }
		
		    if(Header.Param_Header_Layer3== 0x20) // Version 2.0.
		    {
                l1sp_setAllSpeechIirCoeff_InputOnly((kal_int16 *)Temp_speech_NB_IIR_IN_para, TOTAL_NETWORK_NUMBER * NUM_IIR_COEFFS);
	 			l1sp_setAllSpeechIirCoeff_OutputOnly((kal_int16 *)Temp_speech_NB_IIR_OUT_para, TOTAL_NETWORK_NUMBER * NUM_IIR_COEFFS);	
				l1sp_setAllSpeechMic1IirCoeff((kal_int16 *)Temp_speech_NB_MIC1_IIR_para, TOTAL_NETWORK_NUMBER * NUM_MIC1_IIR_COEFFS);	
				l1sp_setAllSpeechMic2IirCoeff((kal_int16 *)Temp_speech_NB_MIC2_IIR_para, TOTAL_NETWORK_NUMBER * NUM_MIC2_IIR_COEFFS);
				l1sp_setAllWBSpeechIirCoeff_InputOnly((kal_int16 *)Temp_speech_WB_IIR_IN_para, TOTAL_NETWORK_NUMBER * NUM_IIR_COEFFS);
				l1sp_setAllWBSpeechIirCoeff_OutputOnly((kal_int16 *)Temp_speech_WB_IIR_OUT_para, TOTAL_NETWORK_NUMBER * NUM_IIR_COEFFS);	
				l1sp_setAllWBSpeechMic1IirCoeff((kal_int16 *)Temp_speech_WB_MIC1_IIR_para, TOTAL_NETWORK_NUMBER * NUM_MIC1_IIR_COEFFS);	
				l1sp_setAllWBSpeechMic2IirCoeff((kal_int16 *)Temp_speech_WB_MIC2_IIR_para, TOTAL_NETWORK_NUMBER * NUM_MIC2_IIR_COEFFS);
				l1sp_setAllSWBSpeechIirCoeff_InputOnly((kal_int16 *)Temp_speech_SWB_IIR_IN_para, TOTAL_NETWORK_NUMBER * NUM_IIR_COEFFS);
				l1sp_setAllSWBSpeechIirCoeff_OutputOnly((kal_int16 *)Temp_speech_SWB_IIR_OUT_para, TOTAL_NETWORK_NUMBER * NUM_IIR_COEFFS);	
				l1sp_setAllSWBSpeechMic1IirCoeff((kal_int16 *)Temp_speech_SWB_MIC1_IIR_para, TOTAL_NETWORK_NUMBER * NUM_MIC1_IIR_COEFFS);	
				l1sp_setAllSWBSpeechMic2IirCoeff((kal_int16 *)Temp_speech_SWB_MIC2_IIR_para, TOTAL_NETWORK_NUMBER * NUM_MIC2_IIR_COEFFS);
                  // l1sp_set par
            	for(count=0;count<TOTAL_NETWORK_NUMBER;count++)
	  	   		{
	  				kal_trace( TRACE_FUNC,SPC_SPE_CHECK_NB_IIR_IN_PAR,count,Temp_speech_NB_IIR_IN_para[count][0],Temp_speech_NB_IIR_IN_para[count][1],Temp_speech_NB_IIR_IN_para[count][2],Temp_speech_NB_IIR_IN_para[count][3],Temp_speech_NB_IIR_IN_para[count][4]);
		  			kal_trace( TRACE_FUNC,SPC_SPE_CHECK_NB_IIR_OUT_PAR,count,Temp_speech_NB_IIR_OUT_para[count][0],Temp_speech_NB_IIR_OUT_para[count][1],Temp_speech_NB_IIR_OUT_para[count][2],Temp_speech_NB_IIR_OUT_para[count][3],Temp_speech_NB_IIR_OUT_para[count][4]); 
					kal_trace( TRACE_FUNC,SPC_SPE_CHECK_NB_MIC1_IIR_PAR,count,Temp_speech_NB_MIC1_IIR_para[count][0],Temp_speech_NB_MIC1_IIR_para[count][1],Temp_speech_NB_MIC1_IIR_para[count][2],Temp_speech_NB_MIC1_IIR_para[count][3],Temp_speech_NB_MIC1_IIR_para[count][4]); 
					kal_trace( TRACE_FUNC,SPC_SPE_CHECK_NB_MIC2_IIR_PAR,count,Temp_speech_NB_MIC2_IIR_para[count][0],Temp_speech_NB_MIC2_IIR_para[count][1],Temp_speech_NB_MIC2_IIR_para[count][2],Temp_speech_NB_MIC2_IIR_para[count][3],Temp_speech_NB_MIC2_IIR_para[count][4]); 
					kal_trace( TRACE_FUNC,SPC_SPE_CHECK_WB_IIR_IN_PAR,count,Temp_speech_WB_IIR_IN_para[count][0],Temp_speech_WB_IIR_IN_para[count][1],Temp_speech_WB_IIR_IN_para[count][2],Temp_speech_WB_IIR_IN_para[count][3],Temp_speech_WB_IIR_IN_para[count][4]);
		  			kal_trace( TRACE_FUNC,SPC_SPE_CHECK_WB_IIR_OUT_PAR,count,Temp_speech_WB_IIR_OUT_para[count][0],Temp_speech_WB_IIR_OUT_para[count][1],Temp_speech_WB_IIR_OUT_para[count][2],Temp_speech_WB_IIR_OUT_para[count][3],Temp_speech_WB_IIR_OUT_para[count][4]); 
					kal_trace( TRACE_FUNC,SPC_SPE_CHECK_WB_MIC1_IIR_PAR,count,Temp_speech_WB_MIC1_IIR_para[count][0],Temp_speech_WB_MIC1_IIR_para[count][1],Temp_speech_WB_MIC1_IIR_para[count][2],Temp_speech_WB_MIC1_IIR_para[count][3],Temp_speech_WB_MIC1_IIR_para[count][4]); 
					kal_trace( TRACE_FUNC,SPC_SPE_CHECK_WB_MIC2_IIR_PAR,count,Temp_speech_WB_MIC2_IIR_para[count][0],Temp_speech_WB_MIC2_IIR_para[count][1],Temp_speech_WB_MIC2_IIR_para[count][2],Temp_speech_WB_MIC2_IIR_para[count][3],Temp_speech_WB_MIC2_IIR_para[count][4]);  
					kal_trace( TRACE_FUNC,SPC_SPE_CHECK_SWB_IIR_IN_PAR,count,Temp_speech_SWB_IIR_IN_para[count][0],Temp_speech_SWB_IIR_IN_para[count][1],Temp_speech_SWB_IIR_IN_para[count][2],Temp_speech_SWB_IIR_IN_para[count][3],Temp_speech_SWB_IIR_IN_para[count][4]);
		  			kal_trace( TRACE_FUNC,SPC_SPE_CHECK_SWB_IIR_OUT_PAR,count,Temp_speech_SWB_IIR_OUT_para[count][0],Temp_speech_SWB_IIR_OUT_para[count][1],Temp_speech_SWB_IIR_OUT_para[count][2],Temp_speech_SWB_IIR_OUT_para[count][3],Temp_speech_SWB_IIR_OUT_para[count][4]); 
					kal_trace( TRACE_FUNC,SPC_SPE_CHECK_SWB_MIC1_IIR_PAR,count,Temp_speech_SWB_MIC1_IIR_para[count][0],Temp_speech_SWB_MIC1_IIR_para[count][1],Temp_speech_SWB_MIC1_IIR_para[count][2],Temp_speech_SWB_MIC1_IIR_para[count][3],Temp_speech_SWB_MIC1_IIR_para[count][4]); 
					kal_trace( TRACE_FUNC,SPC_SPE_CHECK_SWB_MIC2_IIR_PAR,count,Temp_speech_SWB_MIC2_IIR_para[count][0],Temp_speech_SWB_MIC2_IIR_para[count][1],Temp_speech_SWB_MIC2_IIR_para[count][2],Temp_speech_SWB_MIC2_IIR_para[count][3],Temp_speech_SWB_MIC2_IIR_para[count][4]);
	  			  
                }
                  
			}

#if defined(__SPEECH_WW_OPERATOR_SCORE_ENHANCE__) 
			spe_setMagiCon();	
			if(Mode!=0xF) 
			{		
				if(Mode == SPH_MODE_HAC)
				{	
					spe_setHacModeNeeded(true);
				}
				else if(Mode == SPH_MODE_AUX1) //Magi con
				{
					Mode = SPH_MODE_LOUDSPK;				
				}
				// Spc_SetSpeechEnhMode_Adaptation( (kal_uint8) Mode );
				L1SP_SetSpeechEnhanceAndFir(Mode, SPH_ENH_AND_FIR_UPDATE_TYPE_ALL);
			}
			else
			{	
			
				SetSpeechEnhancement(true);

			}
      
#else
			spe_DisableMagiCon();
			if(Mode!=0xF) 
			{
				
				if(Mode == SPH_MODE_HAC)
				{	
					spe_setHacModeNeeded(true);
				}
				else if(Mode == SPH_MODE_EARPHONE)
				{
					spe_setMagiCon();				
				}
				else if(Mode == SPH_MODE_AUX1) //Magi con
				{
					Mode = SPH_MODE_LOUDSPK;
					spe_setMagiCon();

				}
				// Spc_SetSpeechEnhMode_Adaptation( (kal_uint8) Mode );
				L1SP_SetSpeechEnhanceAndFir(Mode, SPH_ENH_AND_FIR_UPDATE_TYPE_ALL);
			}
			else
			{	
			
				SetSpeechEnhancement(true);

			}
#endif		
		}

		break;

		case Vol_in_general_unit: 
		{
			kal_uint16 procLen=0;
			curOffset = spc_dynamicParameterParser_volInUnit(Vol_in_general_unit, curOffset, unProcLen, comeFrom, &procLen);
			unProcLen = unProcLen - procLen;
			SetSpeechEnhancement(false);
			SetSpeechEnhancement(true);
		}
		break;

		case Vol_in_DMNR: 
		{
			kal_uint16 procLen=0;
			curOffset = spc_dynamicParameterParser_dmnrUnit(&Header, curOffset, unProcLen, comeFrom, &procLen);
			unProcLen = unProcLen - procLen;
			
			SetSpeechEnhancement(false);
			SetSpeechEnhancement(true);
		}
		break;
		case Vol_in_MagiClarity:
		{			
			kal_uint16 procLen=0;
			curOffset = spc_dynamicParameterParser_volInUnit(Vol_in_MagiClarity, curOffset, unProcLen, comeFrom, &procLen);			
			unProcLen = unProcLen - procLen;			
		}
		break;
		case Vol_in_echoRefforUsbAudio: 
		{
			kal_uint16 procLen=0;
			curOffset = spc_dynamicParameterParser_volInUnit(Vol_in_echoRefforUsbAudio, curOffset, unProcLen, comeFrom, &procLen);
			unProcLen = unProcLen - procLen;
		}
		break; 
		default:
			
			kal_trace( TRACE_FUNC,SPC_SPE_ASSERT_CHECK,Header.SphUnitMagiNum,0,0);
			ASSERT(0); //NOT SUPPORT THE MAGIC NUM
			break;
		}

	kal_prompt_trace(MOD_L1SP, "unProclen=%d with SphUnitMagiNum=%x", unProcLen, Header.SphUnitMagiNum);

	if(NULL!=newOffset) {
		*newOffset = curOffset;
	}
	if(NULL!=procLen) {
		*procLen = (length - unProcLen);
	}
    return Header.SphUnitMagiNum;	

}

uint16 spc_ReceiveDynamicParameter(const kal_uint16 offset, const kal_uint16 length, SPC_MSG_FROM_T comeFrom)
{
	kal_uint16 curOffset;

	
	// Header Check 
    spcBufInfo info;
    curOffset = SpcIo_GetDataFromAp(offset, sizeof(spcBufInfo), &info, comeFrom);

	
	ASSERT(info.syncWord == 0xA2A2);
    ASSERT((info.type) == AUD_CCCI_STRMBUF_TYPE_DYNAMCI_PAR_TYPE); //just use the bit[0:3] to inidicate the type. 
    ASSERT(info.length == (length-6));

	return spc_dynamicParameterParser_dispatcher(curOffset, length-sizeof(spcBufInfo), comeFrom, NULL, NULL);
}


kal_uint16 get_spcGetEpofTimes(enum_EPOF_event EPOF_event)
{
	return( (gSpc.spcGetEpofTimes) & EPOF_event );
}

void set_spcGetEpofTimes(enum_EPOF_event EPOF_event, int on)
{
	if(on)
		gSpc.spcGetEpofTimes |= EPOF_event;
    else
        gSpc.spcGetEpofTimes &= (~EPOF_event);
}


// ============================================================================
#define ILM_SPC_CUST_DUMP_BUF_LEN 2560
typedef struct{
   LOCAL_PARA_HDR
   //raw information from eMAC
   uint16 dumpLen;
   uint16 dumpBuf[ILM_SPC_CUST_DUMP_BUF_LEN];
}ilm_spc_cust_dump_t;

void spc_customDump(uint16 bufLen, uint16 *dumpBuf)
{

	ilm_spc_cust_dump_t *ilm;
	uint16 len = bufLen; 
	uint16 idx = 0;

	// static int32 i=0; 
	
	if ( 0 == bufLen) 
		return;
	
	while(len > ILM_SPC_CUST_DUMP_BUF_LEN) {
		ilm = (ilm_spc_cust_dump_t *)construct_local_para( sizeof(ilm_spc_cust_dump_t), TD_CTRL);
		ilm->dumpLen = ILM_SPC_CUST_DUMP_BUF_LEN; 
		memcpy((ilm->dumpBuf), &(dumpBuf[idx]), sizeof(uint16)*ILM_SPC_CUST_DUMP_BUF_LEN); 
		msg_send6(MOD_L1SP, MOD_MED, AUDIO_SAP, MSG_ID_AUDIO_CUST_DUMP_REQ, (local_para_struct *)ilm, NULL);

		idx = idx + ILM_SPC_CUST_DUMP_BUF_LEN; 
		len = len - ILM_SPC_CUST_DUMP_BUF_LEN;

		// i++;
	}

	
	ilm = (ilm_spc_cust_dump_t *)construct_local_para( sizeof(ilm_spc_cust_dump_t), TD_CTRL);
	ilm->dumpLen = len; 
	memcpy((ilm->dumpBuf), &(dumpBuf[idx]), sizeof(uint16)*len); 
	msg_send6(MOD_L1SP, MOD_MED, AUDIO_SAP, MSG_ID_AUDIO_CUST_DUMP_REQ, (local_para_struct *)ilm, NULL);

	// i++;

	// kal_prompt_trace(MOD_L1SP, "spc_customDump' i=%d", i);
}

void spc_sendCustomDump(void *ilm)
{
	uint16 bufLen; 
	uint16 *dumpBuf;
	uint16 lenInByte;
	spcBufInfo info;
	bool sendResult = true; 

	// static int32 j=0; 

	bufLen = ((ilm_spc_cust_dump_t *)(ilm))->dumpLen;
	dumpBuf =  ((ilm_spc_cust_dump_t *)(ilm))->dumpBuf;

	if(NULL == dumpBuf || 0 == bufLen)
		return;

	lenInByte = (bufLen <<1);

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


	info.syncWord = 0x2A2A;
	info.type = AUD_CCCI_STRMBUF_TYPE_CUST_DUMP; 
	info.length = lenInByte;

    sendResult = SpcIO_WriteDataToAp(&info, sizeof(spcBufInfo), 
             (void *)(dumpBuf), lenInByte, NULL, 0,
             SPCIO_MSG_FROM_SPC_CUST_DUMP_NOTIFY);

	if(false == sendResult) {
		// leave log here
		kal_trace(TRACE_WARNING, SPC_CUST_DUMP_DROP);
	}
	
}

// Remind: DebugInfo[15] also control this. loopback point
void spc_dev_LoopbackPoint_DVT(kal_uint16 point){
    	switch(point){

		case 0:
			AFE_SetConn0(0x54321076);  //default value, case 0 : reset
			break;
		case 1:
			AFE_SetConn0(0x54321010);  // O17, O18
			break;
		case 2:
			AFE_SetConn0(0x54321032);  // O23, O24
			break;
		case 3:
			AFE_SetConn0(0x54321054);  // O25
			break;
        case 4:
			AFE_SetConn0(0x54321045);  // O25_swap
			break;
        case 5:
			AFE_SetConn0(0x54327676);  // DL -> UL
			break;
		default:		
            kal_prompt_trace(MOD_L1SP, "[LPBK_DVT] invalid value, set 0x54321076");
			AFE_SetConn0(0x54321076);
	} 
}


