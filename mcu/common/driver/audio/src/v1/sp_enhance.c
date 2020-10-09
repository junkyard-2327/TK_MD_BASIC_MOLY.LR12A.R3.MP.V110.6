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
 * sp_enhance.c
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description:
 * ------------
 *   speech enhancement functions (moved from am.c)  
 *
 * Author:
 * -------
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
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *==============================================================================
 *******************************************************************************/

#include "kal_public_api.h"
#include "kal_general_types.h"
#include "sync_data.h"

// #include "reg_base.h"

#include "l1audio.h"

#include "kal_trace.h"
#include "l1sp_trc.h"

#include "sp_enhance.h"
#include "sp_drv.h"
#include "am.h"
#include "media.h"
#include "afe.h"


#include "ddload.h"


#include "sal_def.h"
#include "sal_exp.h"


const unsigned short Speech_Common_Para[12] = 
{ 
     0, 55997, 31000, 10752, 32769,     0,     0,     0,     0,     0, 
     0,     0 
};


short Speech_All_Pass_MAG_CLARITY[32] =
   { /* All pass filter */
    32767,     0,     0,     0,     0,
        0,     0,     0,     0,     0,
        0,     0,     0,     0,     0,
        0,     0,     0,     0,     0,
        0,     0,     0,     0,     0,
        0,     0,     0,     0,     0,
        0,     0
 };

#define    Par_Speech_Common  0 //Volume Dependent ,speech unit : ModePar,FIR in,Fir out
#define    Par_GSM_NB_SpeechUnit 1
#define    Par_GSM_WB_SpeechUnit 2
#define    Par_WCDMA_NB_SpeechUnit 3
#define    Par_WCDMA_WB_SpeechUnit 4
#define    Par_CDMA_NB_SpeechUnit 5
#define    Par_CDMA_WB_SpeechUnit 6
#define    Par_VOLTE_NB_SpeechUnit 7
#define    Par_VOLTE_WB_SpeechUnit 8
#define    Par_C2K_NB_SpeechUnit 9
#define    Par_C2K_WB_SpeechUnit 10
#define    Par_VOLTE_SWB_SpeechUnit 11

kal_enhmutexid           spe_enh_mutex;

// #define TOTAL_NUM_SPH_MODE (NUM_SPH_MODE+2) // new 1 for HAC, 1 for USB
// #define TOTAL_NUM_SPH_INPUT_FIR (NUM_SPH_INPUT_FIR+2) // new 1 for HAC, 1 for USB
// #define TOTAL_NUM_SPH_OUTPUT_FIR (NUM_SPH_OUTPUT_FIR+2)  // new 1 for HAC, 1 for USB
typedef struct 
{
	// uint8    sph_mode; 	
	bool	 spe_flag; 
	bool     spe_isFweOn;
	
	uint8    sph_SPE_path; // ul_only=0,dl_only=1,ul+dl=2 	  
	// uint16   spe_state; // record which enhancement is open 
	
    // uint16   spe_usr_sub_mask; // record the usage of enhancement sub feature. Sync with Sal_Enh_Dynamic_t definition.  Ex. phonecall should be turned on DMNR, but users can decide whether turn on or not.please do not update the mask directly, please use function l1sp_updateUsrSubMask() to update 
    uint16   spe_usr_enh_ctrl; // bit0=DMNR,bit1=TDDNC,bit2=magi con
    bool     spe_is_update_enh_ctrl;
	int16 	sph_dmnr_para[NUM_DMNR_PARAM];
	int16 	sph_wb_dmnr_para[NUM_WB_DMNR_PARAM];
	int16 	sph_swb_dmnr_para[NUM_SWB_DMNR_PARAM];
	int16 	sph_lspk_dmnr_para[NUM_DMNR_PARAM];
	int16 	sph_lspk_wb_dmnr_para[NUM_WB_DMNR_PARAM];
	int16 	sph_lspk_swb_dmnr_para[NUM_SWB_DMNR_PARAM];

 	// short sph_magi_clarity_para[NUM_MAGI_CLARITY_PARAM];
	uint16 sph_magicConParam[NUM_MODE_PARAS];
	uint16 sph_magicConWbParam[NUM_MODE_PARAS];

	bool     isMagiConOn;

	bool     isHacModeNeeded; // if AP send Hac paramters and FIRs to MD, the flag will be set. 
	bool isSPE_Enable;	// check SPE already enable or not 
	// uint8 spe_Path;
	// bool isReDDL;
	// --NB--
	uint16	 sph_ModePara[TOTAL_NETWORK_NUMBER][NUM_MODE_PARAS]; 
	int16	 sph_InFirCoeff[TOTAL_NETWORK_NUMBER][NUM_FIR_COEFFS];
	int16	 sph_OutFirCoeff[TOTAL_NETWORK_NUMBER][NUM_FIR_COEFFS];
	int16	 sph_InIirCoeff[TOTAL_NETWORK_NUMBER][NUM_IIR_COEFFS];
	int16	 sph_OutIirCoeff[TOTAL_NETWORK_NUMBER][NUM_IIR_COEFFS];
	int16	 sph_Mic1IirCoeff[TOTAL_NETWORK_NUMBER][NUM_MIC1_IIR_COEFFS];
	int16	 sph_Mic2IirCoeff[TOTAL_NETWORK_NUMBER][NUM_MIC1_IIR_COEFFS];
	// --WB--
	uint16	 sph_WbModePara[TOTAL_NETWORK_NUMBER][NUM_MODE_PARAS];
	int16	 sph_WbInFirCoeff[TOTAL_NETWORK_NUMBER][NUM_WB_FIR_COEFFS];
	int16	 sph_WbOutFirCoeff[TOTAL_NETWORK_NUMBER][NUM_WB_FIR_COEFFS];
	int16	 sph_WbInIirCoeff[TOTAL_NETWORK_NUMBER][NUM_IIR_COEFFS];
	int16	 sph_WbOutIirCoeff[TOTAL_NETWORK_NUMBER][NUM_IIR_COEFFS];
	int16	 sph_WbMic1IirCoeff[TOTAL_NETWORK_NUMBER][NUM_MIC1_IIR_COEFFS];
	int16	 sph_WbMic2IirCoeff[TOTAL_NETWORK_NUMBER][NUM_MIC1_IIR_COEFFS];
	// --SWB--
	uint16	 sph_SWbModePara[TOTAL_NETWORK_NUMBER][NUM_MODE_PARAS];
	int16	 sph_SWbInFirCoeff[TOTAL_NETWORK_NUMBER][NUM_SWB_FIR_COEFFS];
	int16	 sph_SWbOutFirCoeff[TOTAL_NETWORK_NUMBER][NUM_SWB_FIR_COEFFS];
	int16	 sph_SWbInIirCoeff[TOTAL_NETWORK_NUMBER][NUM_IIR_COEFFS];
	int16	 sph_SWbOutIirCoeff[TOTAL_NETWORK_NUMBER][NUM_IIR_COEFFS];
	int16	 sph_SWbMic1IirCoeff[TOTAL_NETWORK_NUMBER][NUM_MIC1_IIR_COEFFS];
	int16	 sph_SWbMic2IirCoeff[TOTAL_NETWORK_NUMBER][NUM_MIC1_IIR_COEFFS];
	bool ctm_spe_status;
	
} _SPE_T;

static _SPE_T gSpe;

void l1sp_setCtmSpeStatus(bool s){
    gSpe.ctm_spe_status = s;
}

bool l1sp_getCtmSpeStatus(){
    return (gSpe.ctm_spe_status);
}


/* ========================================================================= */
void l1sp_setAllSpeechModePara(kal_uint16 * speech_mode_para, kal_int16 length)
{
	ASSERT((TOTAL_NETWORK_NUMBER*NUM_MODE_PARAS) == length);
	memcpy(gSpe.sph_ModePara, speech_mode_para, 
		TOTAL_NETWORK_NUMBER*NUM_MODE_PARAS*sizeof(uint16));
}





void l1sp_setAllSpeechFirCoeff_InputOnly(kal_int16 *speech_input_FIR_coeffs, kal_int16 length)
{
	ASSERT((TOTAL_NETWORK_NUMBER*NUM_FIR_COEFFS) == length);
	memcpy(gSpe.sph_InFirCoeff, speech_input_FIR_coeffs, 
		TOTAL_NETWORK_NUMBER*NUM_FIR_COEFFS*sizeof(int16));

}




void l1sp_setAllSpeechFirCoeff_OutputOnly(kal_int16 *speech_output_FIR_coeffs, kal_int16 length)
{
	ASSERT((TOTAL_NETWORK_NUMBER*NUM_FIR_COEFFS) == length);
	memcpy(gSpe.sph_OutFirCoeff, speech_output_FIR_coeffs,
		TOTAL_NETWORK_NUMBER*NUM_FIR_COEFFS*sizeof(int16));
}
//IIR
void l1sp_setAllSpeechIirCoeff_InputOnly(kal_int16 *speech_input_IIR_coeffs, kal_int16 length)
{
	ASSERT((TOTAL_NETWORK_NUMBER*NUM_IIR_COEFFS) == length);
	memcpy(gSpe.sph_InIirCoeff, speech_input_IIR_coeffs, 
		TOTAL_NETWORK_NUMBER*NUM_IIR_COEFFS*sizeof(int16));

}


void l1sp_setAllSpeechIirCoeff_OutputOnly(kal_int16 *speech_output_IIR_coeffs, kal_int16 length)
{
	ASSERT((TOTAL_NETWORK_NUMBER*NUM_IIR_COEFFS) == length);
	memcpy(gSpe.sph_OutIirCoeff, speech_output_IIR_coeffs,
		TOTAL_NETWORK_NUMBER*NUM_IIR_COEFFS*sizeof(int16));
}

void l1sp_setAllSpeechMic1IirCoeff(kal_int16 *speech_output_Mic1_IIR_coeffs, kal_int16 length)
{
	ASSERT((TOTAL_NETWORK_NUMBER*NUM_MIC1_IIR_COEFFS) == length);
	memcpy(gSpe.sph_Mic1IirCoeff, speech_output_Mic1_IIR_coeffs,
		TOTAL_NETWORK_NUMBER*NUM_MIC1_IIR_COEFFS*sizeof(int16));
}
void l1sp_setAllSpeechMic2IirCoeff(kal_int16 *speech_output_Mic2_IIR_coeffs, kal_int16 length)
{
	ASSERT((TOTAL_NETWORK_NUMBER*NUM_MIC2_IIR_COEFFS) == length);
	memcpy(gSpe.sph_Mic2IirCoeff, speech_output_Mic2_IIR_coeffs,
		TOTAL_NETWORK_NUMBER*NUM_MIC2_IIR_COEFFS*sizeof(int16));
}
//--------------- WB ----------------
void l1sp_setAllWbSpeechModePara(kal_uint16 * speech_mode_para, kal_int16 length)
{
	ASSERT((TOTAL_NETWORK_NUMBER*NUM_MODE_PARAS) == length);
	
	memcpy(gSpe.sph_WbModePara, speech_mode_para, 
		TOTAL_NETWORK_NUMBER*NUM_MODE_PARAS*sizeof(uint16));
}
void l1sp_setAllSWbSpeechModePara(kal_uint16 * speech_mode_para,kal_int16 length)
{
	ASSERT((TOTAL_NETWORK_NUMBER*NUM_MODE_PARAS) == length);
	
	memcpy(gSpe.sph_SWbModePara, speech_mode_para, 
		TOTAL_NETWORK_NUMBER*NUM_MODE_PARAS*sizeof(uint16));
	
}
void spe_setMagiCon(void)
{

	gSpe.isMagiConOn = true;
	gSpe.spe_isFweOn = true;
}

void spe_DisableMagiCon(void)
{
	gSpe.isMagiConOn = false;
	gSpe.spe_isFweOn = false;
}


void l1sp_setAllWbSpeechFirCoeff_InputOnly(
		kal_int16 *speech_input_FIR_coeffs, kal_int16 length)
{
	ASSERT((TOTAL_NETWORK_NUMBER*NUM_WB_FIR_COEFFS) == length);
	memcpy(gSpe.sph_WbInFirCoeff, speech_input_FIR_coeffs, 
		length*sizeof(int16));
}

void l1sp_setAllSWbSpeechFirCoeff_InputOnly(
		kal_int16 *speech_input_FIR_coeffs, kal_int16 length)
{
	ASSERT((TOTAL_NETWORK_NUMBER*NUM_SWB_FIR_COEFFS) == length);
	memcpy(gSpe.sph_SWbInFirCoeff, speech_input_FIR_coeffs, 
		length*sizeof(int16));
	
}


void l1sp_setAllWbSpeechFirCoeff_OutputOnly(
		kal_int16 *speech_output_FIR_coeffs, kal_int16 length)
{
	ASSERT((TOTAL_NETWORK_NUMBER*NUM_WB_FIR_COEFFS) == length);
	memcpy(gSpe.sph_WbOutFirCoeff, speech_output_FIR_coeffs,
		length*sizeof(int16));
}

void l1sp_setAllSWbSpeechFirCoeff_OutputOnly(
		kal_int16 *speech_output_FIR_coeffs, kal_int16 length)
{
	ASSERT((TOTAL_NETWORK_NUMBER*NUM_SWB_FIR_COEFFS) == length);
	memcpy(gSpe.sph_SWbOutFirCoeff, speech_output_FIR_coeffs,
		length*sizeof(int16));
}

//IIR
void l1sp_setAllWBSpeechIirCoeff_InputOnly(kal_int16 *speech_input_IIR_coeffs, kal_int16 length)
{
	ASSERT((TOTAL_NETWORK_NUMBER*NUM_IIR_COEFFS) == length);
	memcpy(gSpe.sph_WbInIirCoeff, speech_input_IIR_coeffs, 
		TOTAL_NETWORK_NUMBER*NUM_IIR_COEFFS*sizeof(int16));

}
void l1sp_setAllWBSpeechIirCoeff_OutputOnly(kal_int16 *speech_output_IIR_coeffs, kal_int16 length)
{
	ASSERT((TOTAL_NETWORK_NUMBER*NUM_IIR_COEFFS) == length);
	memcpy(gSpe.sph_WbOutIirCoeff, speech_output_IIR_coeffs,
		TOTAL_NETWORK_NUMBER*NUM_IIR_COEFFS*sizeof(int16));
}
void l1sp_setAllWBSpeechMic1IirCoeff(kal_int16 *speech_output_Mic1_IIR_coeffs, kal_int16 length)
{
	
	ASSERT((TOTAL_NETWORK_NUMBER*NUM_MIC1_IIR_COEFFS) == length);
	memcpy(gSpe.sph_WbMic1IirCoeff, speech_output_Mic1_IIR_coeffs,
		TOTAL_NETWORK_NUMBER*NUM_MIC1_IIR_COEFFS*sizeof(int16));
	
}
void l1sp_setAllWBSpeechMic2IirCoeff(kal_int16 *speech_output_Mic2_IIR_coeffs, kal_int16 length)
{
	ASSERT((TOTAL_NETWORK_NUMBER*NUM_MIC2_IIR_COEFFS) == length);
	memcpy(gSpe.sph_WbMic2IirCoeff, speech_output_Mic2_IIR_coeffs,
		TOTAL_NETWORK_NUMBER*NUM_MIC2_IIR_COEFFS*sizeof(int16));
	
}
void l1sp_setAllSWBSpeechIirCoeff_InputOnly(kal_int16 *speech_input_IIR_coeffs, kal_int16 length)
{
	ASSERT((TOTAL_NETWORK_NUMBER*NUM_IIR_COEFFS) == length);
	memcpy(gSpe.sph_SWbInIirCoeff, speech_input_IIR_coeffs, 
		TOTAL_NETWORK_NUMBER*NUM_IIR_COEFFS*sizeof(int16));

}
void l1sp_setAllSWBSpeechIirCoeff_OutputOnly(kal_int16 *speech_output_IIR_coeffs, kal_int16 length)
{
	ASSERT((TOTAL_NETWORK_NUMBER*NUM_IIR_COEFFS) == length);
	memcpy(gSpe.sph_SWbOutIirCoeff, speech_output_IIR_coeffs,
		TOTAL_NETWORK_NUMBER*NUM_IIR_COEFFS*sizeof(int16));
}
void l1sp_setAllSWBSpeechMic1IirCoeff(kal_int16 *speech_output_Mic1_IIR_coeffs, kal_int16 length)
{
	ASSERT((TOTAL_NETWORK_NUMBER*NUM_MIC1_IIR_COEFFS) == length);
	memcpy(gSpe.sph_SWbMic1IirCoeff, speech_output_Mic1_IIR_coeffs,
		TOTAL_NETWORK_NUMBER*NUM_MIC1_IIR_COEFFS*sizeof(int16));
}
void l1sp_setAllSWBSpeechMic2IirCoeff(kal_int16 *speech_output_Mic2_IIR_coeffs, kal_int16 length)
{
	ASSERT((TOTAL_NETWORK_NUMBER*NUM_MIC2_IIR_COEFFS) == length);
	memcpy(gSpe.sph_SWbMic2IirCoeff, speech_output_Mic2_IIR_coeffs,
		TOTAL_NETWORK_NUMBER*NUM_MIC2_IIR_COEFFS*sizeof(int16));
}
//--------------- DMNR ----------------


/**
	Not support parameter rewirte under application begin runnning
*/
void L1SP_SetDMNRPara( const kal_int16 DMNR_para[NUM_DMNR_PARAM] )
{
	
	memcpy(&gSpe.sph_dmnr_para, DMNR_para, NUM_DMNR_PARAM*sizeof(uint16));
}

/**
	Not support parameter rewirte under application begin runnning
*/
void L1SP_SetWbDMNRPara( const kal_int16 WB_DMNR_para[NUM_WB_DMNR_PARAM] )
{
	memcpy(&gSpe.sph_wb_dmnr_para, WB_DMNR_para, NUM_WB_DMNR_PARAM*sizeof(uint16));
}
void L1SP_SetSWbDMNRPara( const kal_int16 SWB_DMNR_para[NUM_SWB_DMNR_PARAM] )
{
	memcpy(&gSpe.sph_swb_dmnr_para, SWB_DMNR_para, NUM_SWB_DMNR_PARAM*sizeof(uint16));
}

/**
	Not support parameter rewirte under application begin runnning
*/
void L1SP_SetLSpkDMNRPara( const kal_int16 LSpk_DMNR_para[NUM_DMNR_PARAM] )
{	
	memcpy(&gSpe.sph_lspk_dmnr_para, LSpk_DMNR_para, NUM_DMNR_PARAM*sizeof(uint16));
}


/**
	Not support parameter rewirte under application begin runnning
*/
void L1SP_SetLSpkWbDMNRPara( const kal_int16 LSpk_Wb_DMNR_para[NUM_WB_DMNR_PARAM] )
{
	memcpy(&gSpe.sph_lspk_wb_dmnr_para, LSpk_Wb_DMNR_para, NUM_WB_DMNR_PARAM*sizeof(uint16));
}
void L1SP_SetLSpkSWbDMNRPara( const kal_int16 LSpk_SWb_DMNR_para[NUM_SWB_DMNR_PARAM] )
{
	memcpy(&gSpe.sph_lspk_swb_dmnr_para, LSpk_SWb_DMNR_para, NUM_SWB_DMNR_PARAM*sizeof(uint16));
}


//--------------- MagiCon (Loudspeaker mode)  ---------------------

bool spe_isSpeFweOn(void)
{
	return gSpe.spe_isFweOn;
}


//--------------- New Modes ---------------------

void spe_setHacModeNeeded(bool isNeed)
{
	gSpe.isHacModeNeeded = isNeed;
}

//--------------- viberation speaker ----------------

void spe_setNotchFilterParam(int16 *param, bool is2In1Spk)
{
	AM_SetNotchFilterParam(param);
}


/* ========================================================================= */
/*
void L1SP_MagiClarityData(const short MAGI_CLARITY_PAR[NUM_MAGI_CLARITY_PARAM])
{
	memcpy(&gSpe.sph_magi_clarity_para, MAGI_CLARITY_PAR, NUM_MAGI_CLARITY_PARAM*sizeof(short));
}
*/
/*
void L1SP_Reload_MagiClarity_Para( void )
{
	SPE_MagiClarityData(gSpe.sph_magi_clarity_para);  
}
*/
/**
	Use currect information inside gSpe to decide the mode paramters. 
	@m_para: nb para result
	@m_para_wb: wb para result
*/



void spe_setSpeechMode( uint8 afterSalDevMode, uint8 after_sph_mode)
{   
	// kal_bool preIsLSP;
	// kal_bool afterIsLsp;
	
	// uint8 prev_sph_mode = gSpe.sph_mode;
	
#if ( defined( __CENTRALIZED_SLEEP_MANAGER__ )&& defined( MTK_SLEEP_ENABLE ))
   // kal_uint16 aud_id = L1SP_GetAudID();
   kal_uint16 aud_id = L1Audio_GetAudioID();
   L1Audio_SetFlag( aud_id );
#endif   


	//------------------------------------------------------
	// Changing
	//------------------------------------------------------
	// gSpe.sph_mode = after_sph_mode;		
	
	//------------------------------------------------------
	// Turn on
	//------------------------------------------------------


   SetSpeechEnhancement( true );

	//------------------------------------------------------
#if ( defined( __CENTRALIZED_SLEEP_MANAGER__ )&& defined( MTK_SLEEP_ENABLE ))
   L1Audio_ClearFlag( aud_id );
   L1Audio_FreeAudioID( aud_id );
#endif   	

}


void SetSpeechEnhancement( bool ec )
{

	// For hosted dongle, speech enhancment is not existing by default. 
	// For RNDIS, speech is useless, so don't care.
	// For super dongle, speech is useful. 
	// As the result, condition is: (chip list) && (data card case without spe enable)
#if (defined(MT6280) || defined(MT6290)) && (defined(__DATA_CARD_SPEECH__) && !defined(DACA_SPE_ENABLE_INTERNAL))
   return; 
#endif // (defined(MT6280)) && (defined(__DATA_CARD_SPEECH__) && !defined(DACA_SPE_ENABLE_INTERNAL))

#if defined(SPH_CHIP_BACK_PHONECALL_USE)
	return;
#endif // SPH_CHIP_BACK_PHONECALL_USE

	 kal_prompt_trace(MOD_L1SP, "[CTM][SPE] l1sp_getCtmSpeStatus() = %d",l1sp_getCtmSpeStatus());
	// speech is not working. 
	 if ((!AM_IsAmInSpeechState()) || (!gSpe.spe_flag) || (!l1sp_getCtmSpeStatus()))
      return;

   // kal_trace( TRACE_INFO, L1SP_APPLY_MODE, (ec)?1:0, gSpe.sph_mode, -1, 0 ); 
   if( ec ) {
		  
   		//====================================
   		
		kal_trace( TRACE_FUNC,SPE_SETDYNAMIC_SM, 0);
		kal_trace( TRACE_INFO, L1SP_SPE_CTRL_UPDATE,gSpe.spe_usr_enh_ctrl, gSpe.sph_SPE_path, AM_GetNetworkRate());

		SAL_ENH_SetULPath(gSpe.sph_SPE_path!=SpeechEnh_DL);
		SAL_ENH_SetDLPath(gSpe.sph_SPE_path!=SpeechEnh_UL);

		kal_take_enh_mutex (spe_enh_mutex);
		
		while(1){
			MD1_DSP_kal_cc_take_spinlock(kal_cc_md1_dsp_spinlock, KAL_INFINITE_WAIT);
			if(SAL_ENH_IsParMemAvailable()){
			   SAL_ENH_OccupyParMem();
			   MD1_DSP_kal_cc_give_spinlock(kal_cc_md1_dsp_spinlock);
			   break;
			}
			MD1_DSP_kal_cc_give_spinlock(kal_cc_md1_dsp_spinlock);
		}
		kal_give_enh_mutex  (spe_enh_mutex);
		kal_trace( TRACE_FUNC,SPE_SETDYNAMIC_SM, 1);
		if(gSpe.spe_is_update_enh_ctrl)
		{
			SPE_ENHCtrlSwitch(gSpe.spe_usr_enh_ctrl);
		}
        
    	//==========write the parameters to DSP==========================
		
		
		uint16 *c_param ;
		uint16 *m_param ;		 
		uint16 *m_param_wb ;	
		c_param = Sp_GetCommonSpeechPara();
		m_param = Sp_GetSpeechPara();
		m_param_wb = Sp_GetWbSpeechPara();
			
        //1. set Common par.
		if(gSpe.isSPE_Enable == false)
		{
		  	SPE_LoadSpeechPara(c_param, NULL, NULL, NULL); 
		}
		//MD1_DSP_kal_cc_give_spinlock(kal_cc_md1_dsp_spinlock);
		//2. Set Mode par.FIR par.IIR par.
        	if(AM_GetNetworkRate() == RAT_2G_MODE)
      		{
      		     Set2GDynPar();
	  		}
			else if(AM_GetNetworkRate()== RAT_3G_MODE || AM_GetNetworkRate()==RAT_3G324M_MODE )
			{
			    Set3GDynPar();
			}
			else if(AM_GetNetworkRate()== RAT_4G_MODE )
			{
				Set4GDynPar();
		}
		else if(AM_GetNetworkRate()== RAT_C2K_MODE)
		{
			SetC2KDynPar();
		}
			else
			{
				Set2GDynPar();  
			}
			
		  	
		//MD1_DSP_kal_cc_take_spinlock(kal_cc_md1_dsp_spinlock, KAL_INFINITE_WAIT);
        //3. set echo ref info ==> move to scheduler
		// SPE_SetActiveEchoRefInfo(gSpe.sph_mode); 
		//4. set magiclarity par. (Remove)
		// SPE_MagiClarityData(gSpe.sph_magi_clarity_para);
		//5. set DMNR par .		
			
		if(((gSpe.spe_usr_enh_ctrl & SPE_DMNR_SUPPORT)!=0))
		{		
			SPE_LoadDmnrLspCoeffs(gSpe.sph_lspk_dmnr_para);
			SPE_LoadWbDmnrLspCoeffs(gSpe.sph_lspk_wb_dmnr_para);
			SPE_LoadSWbLspDmnrCoeffs(gSpe.sph_lspk_swb_dmnr_para);			
			SPE_LoadDmnrCoeffs(gSpe.sph_dmnr_para); 
			SPE_LoadWbDmnrCoeffs(gSpe.sph_wb_dmnr_para);
			SPE_LoadSWbDmnrCoeffs(gSpe.sph_swb_dmnr_para);		
		}			
				
		kal_trace( TRACE_FUNC,SPE_SETDYNAMIC_SM, 3);		
        SPE_SetDynamicStatemachine();
		if(gSpe.isSPE_Enable == false)
		{
            SPE_Enable_DLL_Entry();
		}
		//SPE_WaitSPEDynReady();
		//MD1_DSP_kal_cc_give_spinlock(kal_cc_md1_dsp_spinlock);
		SAL_ENH_ReleaseParMem();
		kal_trace( TRACE_FUNC,SPE_SETDYNAMIC_SM, 4);
		kal_trace( TRACE_INFO, L1SP_SPEECH_ENHANCEMENT,  *m_param, *(m_param+1), *c_param, *(c_param+11));
		kal_trace( TRACE_FUNC,SPE_SETSPEECHENHANCEMENT_C_PARAM);
		kal_trace(TRACE_INFO, L1SP_MODE_VALUE, c_param[0], c_param[1], c_param[2], c_param[3], c_param[4], c_param[5], c_param[6], c_param[7], c_param[8], c_param[9], c_param[10], c_param[11], c_param[12], c_param[13], c_param[14], c_param[15]);	
		kal_trace( TRACE_FUNC,SPE_SETSPEECHENHANCEMENT_M_PARAM);
		kal_trace(TRACE_INFO, L1SP_MODE_VALUE, m_param[0], m_param[1], m_param[2], m_param[3], m_param[4], m_param[5], m_param[6], m_param[7], m_param[8], m_param[9], m_param[10], m_param[11], m_param[12], m_param[13], m_param[14], m_param[15]);
		kal_trace(TRACE_INFO, L1SP_MODE_VALUE, m_param[16], m_param[17], m_param[18], m_param[19], m_param[20], m_param[21], m_param[22], m_param[23], m_param[24], m_param[25], m_param[26], m_param[27], m_param[28], m_param[29], m_param[30], m_param[31]);
		kal_trace(TRACE_INFO, L1SP_MODE_VALUE, m_param[32], m_param[33], m_param[34], m_param[35], m_param[36], m_param[37], m_param[38], m_param[39], m_param[40], m_param[41], m_param[42], m_param[43], m_param[44], m_param[45], m_param[46], m_param[47]);
		kal_trace( TRACE_FUNC,SPE_SETSPEECHENHANCEMENT_M_PARAM_WB);
		kal_trace(TRACE_INFO, L1SP_MODE_VALUE, m_param_wb[0], m_param_wb[1], m_param_wb[2], m_param_wb[3], m_param_wb[4], m_param_wb[5], m_param_wb[6], m_param_wb[7], m_param_wb[8], m_param_wb[9], m_param_wb[10], m_param_wb[11], m_param_wb[12], m_param_wb[13], m_param_wb[14], m_param_wb[15]);
		kal_trace(TRACE_INFO, L1SP_MODE_VALUE, m_param_wb[16], m_param_wb[17], m_param_wb[18], m_param_wb[19], m_param_wb[20], m_param_wb[21], m_param_wb[22], m_param_wb[23], m_param_wb[24], m_param_wb[25], m_param_wb[26], m_param_wb[27], m_param_wb[28], m_param_wb[29], m_param_wb[30], m_param_wb[31]);
		kal_trace(TRACE_INFO, L1SP_MODE_VALUE, m_param_wb[32], m_param_wb[33], m_param_wb[34], m_param_wb[35], m_param_wb[36], m_param_wb[37], m_param_wb[38], m_param_wb[39], m_param_wb[40], m_param_wb[41], m_param_wb[42], m_param_wb[43], m_param_wb[44], m_param_wb[45], m_param_wb[46], m_param_wb[47]);
		gSpe.isSPE_Enable = true;	
		gSpe.spe_is_update_enh_ctrl = false;	    
   }
   else {

  	
	  kal_take_enh_mutex (spe_enh_mutex);
	  MD1_DSP_kal_cc_take_spinlock(kal_cc_md1_dsp_spinlock, KAL_INFINITE_WAIT);
	  SPE_ENHCtrlSwitch(0);
	  SPE_Clear_DLL_Entry();
	  MD1_DSP_kal_cc_give_spinlock(kal_cc_md1_dsp_spinlock);
	  kal_give_enh_mutex  (spe_enh_mutex);
	  gSpe.isSPE_Enable = false;			
      // gSpe.spe_state = 0;
	  gSpe.spe_is_update_enh_ctrl = true;
      

#if defined(__TC01_VOICE_ENGINE__)
      VC_Stop();
      VS_Stop();
#endif
   }

}




static void spe_getFirMappingByScene(const uint32 scene, 
	uint8 *devMode, uint8 *enhMode,
	uint8 *inFir, uint8 *outFir)
{
	uint8 tempDevMode = 0xff; 
	uint8 tempEnhMode = 0xff;
	uint8 tempInFir = 0xff; 
	uint8 tempOutFir = 0xff;
	
	switch(scene) {
	case SPH_ENH_AND_FIR_SCENE_NORMAL:
		tempDevMode = SAL_DEV_NORMAL; // SPH_MODE_NORMAL;
		tempEnhMode = SPH_MODE_NORMAL;
		tempInFir = SPH_FIR_COEFF_NORMAL;
		tempOutFir = SPH_FIR_COEFF_NORMAL;
		
		break;
	case SPH_ENH_AND_FIR_SCENE_EARPHONE:
	case SPH_ENH_AND_FIR_SCENE_LOUDSPK:
		tempDevMode = scene; // SAL_DEV_EARPHONE or SAL_DEV_LOUDSPK
		tempEnhMode = scene;
		tempInFir = scene;
		tempOutFir = scene;
		break;	
// #if defined(__BT_SUPPORT__)		
	case SPH_ENH_AND_FIR_SCENE_BT_EARPHONE:	
	case SPH_ENH_AND_FIR_SCENE_BT_CARKIT:
		tempDevMode = SAL_DEV_BT_EARPHONE_NB; //scene;
		tempEnhMode = scene;
		tempInFir = SPH_FIR_COEFF_BT; 
		tempOutFir = SPH_FIR_COEFF_BT;
		break;

	case SPH_ENH_AND_FIR_SCENE_BT_CORDLESS:		
		tempDevMode = SAL_DEV_BT_CORDLESS; //scene;
		tempEnhMode = scene;
		tempInFir = SPH_FIR_COEFF_BT; 
		tempOutFir = SPH_FIR_COEFF_BT;
		break;
//#endif
	case SPH_ENH_AND_FIR_SCENE_AUX1: // AUX is use to  loud speaker mode
		tempDevMode = SAL_DEV_LOUDSPK; //scene
		tempEnhMode = SPH_MODE_AUX1; //scene
		tempInFir = SPH_FIR_COEFF_HANDFREE;
		tempOutFir = SPH_FIR_COEFF_HANDFREE;
		break;
	case SPH_ENH_AND_FIR_SCENE_AUX2:
		tempDevMode = SPH_MODE_NORMAL;
		tempEnhMode = SPH_MODE_AUX2;
		tempInFir = SPH_FIR_COEFF_NORMAL;
		tempOutFir = SPH_FIR_COEFF_NORMAL;
		break;
		
	case SPH_ENH_AND_FIR_SCENE_HAC:
		ASSERT(true == gSpe.isHacModeNeeded); // is AP did not set the mode parameter. assert it directly! 
		
		tempDevMode = SPH_MODE_NORMAL;
		tempEnhMode = SPH_MODE_HAC;
		tempInFir = SPH_FIR_COEFF_HAC;
		tempOutFir = SPH_FIR_COEFF_HAC;
		break;
	case SPH_ENH_AND_FIR_SCENE_USB: // similar to earphone
		tempDevMode = SPH_MODE_EARPHONE;
		tempEnhMode = SPH_MODE_USB;
		tempInFir = SPH_FIR_COEFF_USB;
		tempOutFir = SPH_FIR_COEFF_USB;
		break;
	default:
		{
			ASSERT(0);
		}

	}
	
	*devMode = tempDevMode;
	*enhMode = tempEnhMode;
	*inFir = tempInFir;
	*outFir = tempOutFir;
	
}

/**
	new interface to replace L1SP_SetSpeechMode(), L1SP_Write_Audio_Coefficients(), 
	L1SP_Write_WB_Audio_Coefficients() in the same time. 

	if you want to use personal configuration, you can use original interfaces. 

	@scene: [Input] scenario for different enhancement and fir combination. 
*/
void L1SP_SetSpeechEnhanceAndFir(uint32 scene, uint32 updatedCoeff)

{
	uint8 modeIndex = 0;
	uint8 inFirIndex = 0;
	uint8 outFirIndex = 0;
	uint8 devModeIndex = 0; 


	//speech mode
//----------------- original scenario ---------------
	if(scene <SPH_MODE_UNDEFINED)
	{ //keeping the original scenario

		spe_getFirMappingByScene(scene, &devModeIndex, &modeIndex, 
			&inFirIndex, &outFirIndex);

		if((updatedCoeff == 0) 
			|| (updatedCoeff&SPH_ENH_AND_FIR_UPDATE_TYPE_NB_ENH_MODE)!=0
			|| (updatedCoeff&SPH_ENH_AND_FIR_UPDATE_TYPE_WB_ENH_MODE)!=0)
			spe_setSpeechMode(devModeIndex, modeIndex); 
	

	}
//---------------------- undefined cases --------------------
	else { // undefined cases. 
		kal_trace ( TRACE_INFO, L1SP_USELESS_SET, scene, 0, 0);
	}
	
	//kal_trace( TRACE_INFO, L1SP_SET_ENH_FIR, scene, modeIndex, inFirIndex, outFirIndex, l1sp.spe_usr_mask, l1sp.spe_app_mask);
	kal_trace( TRACE_INFO, L1SP_SET_ENH_FIR, scene, modeIndex, inFirIndex, outFirIndex, 0,0);
	
}

// ----------------------------------------------------------------------------
// speech parameter loading
// ----------------------------------------------------------------------------
extern kal_bool setCommonPara;
extern uint16 commonPara_0;

void SPE_LoadSpeechPara( uint16 c_para[NUM_COMMON_PARAS], uint16 m_para[NUM_MODE_PARAS], 
	uint16 m_paraWb[NUM_MODE_PARAS],uint16 m_paraSWb[NUM_MODE_PARAS])
{
   uint16 *para;
   volatile uint16* dsp_ptr;
   int I;

   if(c_para)
   {
      para = c_para;      
      dsp_ptr = SAL_CommonPar_GetBuf();
      for(I = SAL_PARAMETERLEN_COMMON; --I >= 0 ; )
         *dsp_ptr++ = *para++;
   }

   if(setCommonPara)
   {
      dsp_ptr = SAL_CommonPar_GetBuf();
      *dsp_ptr = commonPara_0;
   } 

   if(m_para)
   {
      para = m_para;      
      dsp_ptr = SAL_ModePar_GetBuf_NB();       
      for(I = NUM_MODE_PARAS; --I >= 0 ; ) // remind to change SAL_PARAMETERLEN_MODE_NB
      {
         *dsp_ptr++ = *para++;
      } 
   }
	
   if(m_paraWb)
   {
      para = m_paraWb;      
      dsp_ptr = SAL_ModePar_GetBuf_WB();       
      for(I = NUM_MODE_PARAS; --I >= 0 ; )
         *dsp_ptr++ = *para++; 
   }
   
   if(m_paraSWb)
   {
      para = m_paraSWb;	
	  dsp_ptr = SAL_ModePar_GetBuf_SWB();		 
	  for(I = NUM_MODE_PARAS; --I >= 0 ; )
	  {
         *dsp_ptr++ = *para++;
      } 
   }

   Data_Sync_Barrier();
}

/*
void SPE_MagiClarityData(short MagiClarityData[32])
{
 
	int i;
	volatile uint16* dsp_ptr;
	dsp_ptr = SAL_FS_GetFltCoefAddr();
	for( i = 0; i<32; i++) {
		*dsp_ptr++ = MagiClarityData[i];
	}

 
}
*/

void SPE_LoadDmnrCoeffs(kal_int16 dmnr_para[NUM_DMNR_PARAM])
{

	int i;
	volatile uint16* dsp_ptr;

	dsp_ptr = SAL_DMNR_GetFltCoefAddr_NB();


	for( i = 0; i<SAL_FLTCOEFLEN_DMNR_NB; i++) {
		*dsp_ptr++ = dmnr_para[i];
	}

   Data_Sync_Barrier();
}
void SPE_LoadDmnrLspCoeffs(kal_int16 dmnr_para[NUM_DMNR_PARAM])
{
	int i;
	volatile uint16* dsp_ptr;

	dsp_ptr = SAL_DMNR_GetFltCoefAddr_LSPK_NB();
              

	for( i = 0; i<SAL_FLTCOEFLEN_DMNR_NB; i++) {
		*dsp_ptr++ = dmnr_para[i];
	}

   Data_Sync_Barrier();
}
void SPE_LoadWbDmnrCoeffs(kal_int16 wb_dmnr_para[NUM_WB_DMNR_PARAM])
{

	int i;
	volatile uint16* dsp_ptr;
		
	dsp_ptr = SAL_DMNR_GetFltCoefAddr_WB();
	
	for( i = 0; i<SAL_FLTCOEFLEN_DMNR_WB; i++) {
		*dsp_ptr++ = wb_dmnr_para[i];
	}

	Data_Sync_Barrier();
}
void SPE_LoadWbDmnrLspCoeffs(kal_int16 wb_dmnr_para[NUM_WB_DMNR_PARAM])
{
	int i;
	volatile uint16* dsp_ptr;
		
	dsp_ptr = SAL_DMNR_GetFltCoefAddr_LSPK_WB();
	
	for( i = 0; i<SAL_FLTCOEFLEN_DMNR_WB; i++) {
		*dsp_ptr++ = wb_dmnr_para[i];
	}

	Data_Sync_Barrier();
}
void SPE_LoadSWbDmnrCoeffs(kal_int16 swb_dmnr_para[NUM_SWB_DMNR_PARAM])
{
	 int i;
	 volatile uint16* dsp_ptr;
		 
	 dsp_ptr = SAL_DMNR_GetFltCoefAddr_SWB();
	 
	 for( i = 0; i<SAL_FLTCOEFLEN_DMNR_SWB; i++) {
		 *dsp_ptr++ = swb_dmnr_para[i];
	 }
	 Data_Sync_Barrier();
}
void SPE_LoadSWbLspDmnrCoeffs(kal_int16 swb_dmnr_para[NUM_SWB_DMNR_PARAM])
{
 
	  int i;
	  volatile uint16* dsp_ptr;
		  
	  dsp_ptr = SAL_DMNR_GetFltCoefAddr_LSPK_SWB();
	  
	  for( i = 0; i<SAL_FLTCOEFLEN_DMNR_SWB; i++) {
		  *dsp_ptr++ = swb_dmnr_para[i];
	  }
	  Data_Sync_Barrier();
}


void L1SP_EnableSpeechEnhancement( bool enable )
{
   if(enable)
   {
      gSpe.spe_flag = true;
      SetSpeechEnhancement(true);
   }
   else 
   {
      SetSpeechEnhancement(false);
      gSpe.spe_flag = false;
   }    
}

void L1SP_EnhancementCtrlSupport( uint16 value )
{

	gSpe.spe_usr_enh_ctrl = value;
	SetSpeechEnhancement(true);
}

/* ========================================================================= */
extern const unsigned short Speech_Normal_Mode_Para[16];
extern const unsigned short WB_Speech_Normal_Mode_Para[16];

// extern const unsigned short Speech_Vol_Para[4];

void SPE_Init( void )
{

	gSpe.spe_flag = true;
	gSpe.isSPE_Enable = false;	
	// gSpe.isReDDL = false;
    gSpe.sph_SPE_path=SpeechEnh_All;

	gSpe.spe_isFweOn = false;


	//default set the DMNR on
   // gSpe.spe_usr_sub_mask = 0x023E; // default value to turn on , [bit6]HF DMNR is default off. [bit7] DRC2.0 is default off. sync with Sal_Enh_Dynamic_t bit wise definition
   gSpe.spe_usr_enh_ctrl = 0x0003; // bit0=DMNR,bit1=TDDNC,bit2=magi con
   gSpe.spe_is_update_enh_ctrl = true;
   // gSpe.isNotchFitOn = false;

   memset(gSpe.sph_ModePara, 0, TOTAL_NETWORK_NUMBER*NUM_MODE_PARAS*sizeof(uint16));
   memset(gSpe.sph_InFirCoeff, 0, TOTAL_NETWORK_NUMBER*NUM_FIR_COEFFS*sizeof(int16));
   memset(gSpe.sph_OutFirCoeff, 0, TOTAL_NETWORK_NUMBER*NUM_FIR_COEFFS*sizeof(int16));
   memset(gSpe.sph_InIirCoeff, 0, TOTAL_NETWORK_NUMBER*NUM_IIR_COEFFS*sizeof(int16));
   memset(gSpe.sph_OutIirCoeff, 0, TOTAL_NETWORK_NUMBER*NUM_IIR_COEFFS*sizeof(int16));
   memset(gSpe.sph_Mic1IirCoeff, 0, TOTAL_NETWORK_NUMBER*NUM_MIC1_IIR_COEFFS*sizeof(int16));
   memset(gSpe.sph_Mic2IirCoeff, 0, TOTAL_NETWORK_NUMBER*NUM_MIC2_IIR_COEFFS*sizeof(int16));
   
   memset(gSpe.sph_WbModePara, 0, TOTAL_NETWORK_NUMBER*NUM_MODE_PARAS*sizeof(uint16));
   memset(gSpe.sph_WbInFirCoeff, 0, TOTAL_NETWORK_NUMBER*NUM_WB_FIR_COEFFS*sizeof(int16));
   memset(gSpe.sph_WbOutFirCoeff, 0, TOTAL_NETWORK_NUMBER*NUM_WB_FIR_COEFFS*sizeof(int16));
   memset(gSpe.sph_WbInIirCoeff, 0, TOTAL_NETWORK_NUMBER*NUM_IIR_COEFFS*sizeof(int16));
   memset(gSpe.sph_WbOutIirCoeff, 0, TOTAL_NETWORK_NUMBER*NUM_IIR_COEFFS*sizeof(int16));
   memset(gSpe.sph_WbMic1IirCoeff, 0, TOTAL_NETWORK_NUMBER*NUM_MIC1_IIR_COEFFS*sizeof(int16));
   memset(gSpe.sph_WbMic2IirCoeff, 0, TOTAL_NETWORK_NUMBER*NUM_MIC2_IIR_COEFFS*sizeof(int16));
   memset(gSpe.sph_SWbModePara, 0, TOTAL_NETWORK_NUMBER*NUM_MODE_PARAS*sizeof(uint16));
   memset(gSpe.sph_SWbInFirCoeff, 0, TOTAL_NETWORK_NUMBER*NUM_SWB_FIR_COEFFS*sizeof(int16));
   memset(gSpe.sph_SWbOutFirCoeff, 0, TOTAL_NETWORK_NUMBER*NUM_SWB_FIR_COEFFS*sizeof(int16));
   memset(gSpe.sph_SWbInIirCoeff, 0, TOTAL_NETWORK_NUMBER*NUM_IIR_COEFFS*sizeof(int16));
   memset(gSpe.sph_SWbOutIirCoeff, 0, TOTAL_NETWORK_NUMBER*NUM_IIR_COEFFS*sizeof(int16));
   memset(gSpe.sph_SWbMic1IirCoeff, 0, TOTAL_NETWORK_NUMBER*NUM_MIC1_IIR_COEFFS*sizeof(int16));
   memset(gSpe.sph_SWbMic2IirCoeff, 0, TOTAL_NETWORK_NUMBER*NUM_MIC2_IIR_COEFFS*sizeof(int16));
   // SPE_MagiClarityData(Speech_All_Pass_MAG_CLARITY);

	memset(&gSpe.sph_dmnr_para, 0, NUM_DMNR_PARAM*sizeof(uint16));
	memset(&gSpe.sph_lspk_dmnr_para, 0, NUM_DMNR_PARAM*sizeof(uint16));
	memset(&gSpe.sph_wb_dmnr_para, 0, NUM_WB_DMNR_PARAM*sizeof(uint16));
	memset(&gSpe.sph_lspk_wb_dmnr_para, 0, NUM_WB_DMNR_PARAM*sizeof(uint16));


	gSpe.isMagiConOn = false;
	memset(gSpe.sph_magicConParam, 0, NUM_MODE_PARAS*sizeof(uint16));
	memset(gSpe.sph_magicConWbParam, 0, NUM_MODE_PARAS*sizeof(uint16));


	// init the AGC as off in every channal
	// _write_enh_internalPar_(SPE_INTERNALPAR_INDEX_AGC, 0)	

	SPE_LoadSpeechPara((uint16 *)Speech_Common_Para, (uint16 *)Speech_Normal_Mode_Para, (uint16 *)WB_Speech_Normal_Mode_Para,(uint16 *)WB_Speech_Normal_Mode_Para  );
	if (! spe_enh_mutex)
	{
		spe_enh_mutex = kal_create_enh_mutex("spe_enh_mutex");
	}
	gSpe.ctm_spe_status = true;
}


/* ========================================================================= */
/* ========================================================================= */
/*   EC/AEC/EES control Functions                                            */
/* ========================================================================= */
#define  FLAG_EC_SUPP         1
#define  FLAG_DDL_UL_ENTRY    2
#define  FLAG_DDL_DL_ENTRY    4

#define  SPE_IDLE_STATE       0  /* MCU: 0 -> 1 */ 
#define  SPE_READY_STATE      1  /* DSP: 1 -> 2 */    
#define  SPE_WORKING_STATE    2  /* MCU: 2 -> 3 */ 
#define  SPE_STOP_STATE       3  /* DSP: 3 -> 0 */  


#define _wait_for_ready_( enh_mod )  \
{  \
   uint32 I;  \
   for( I = 0; ; I++ ) {  \
      if( SAL_ENH_IsReady(enh_mod))  \
         break;  \
      ASSERT_REBOOT( I < 20 );  \
      kal_sleep_task( AUD_1TICK(2) );  \
   }  \
}

#define _wait_for_idle_( enh_mod )  \
{  \
   uint32 I;  \
   for( I = 0; ; I++ ) {  \
      if( SAL_ENH_IsIdle(enh_mod))  \
         break;  \
      ASSERT_REBOOT( I < 20 );  \
      kal_sleep_task( AUD_1TICK(2) );  \
   }  \
}


void SPE_ENHCtrlSwitch(uint16 state)
{

	SAL_ENH_SetDMNR(((state & SPE_DMNR_SUPPORT)!=0));
	SAL_ENH_SetTDNC(((state & SPE_TDNC_SUPPORT)!=0));
	SAL_ENH_SetMagicConference(((state & SPE_MAGI_CON_SUPPORT)!=0));
}



void SPE_Clear_DLL_Entry()
{
    SAL_ENH_SetMainSwitch(false);
}


void SPE_Enable_DLL_Entry(void)
{ 
	SAL_ENH_SetMainSwitch(true);
}

void SPE_SetDynamicStatemachine(void)
{
	
	SAL_ENH_ParUpdState_SetUpd();
	kal_trace( TRACE_FUNC,SPE_SETDYNAMIC_SM, 0);
	
	
}


void SPE_WaitSPEDynReady(void)  
{  

   uint32 I;  
   for( I = 0; ; I++ ) {  
      if( SAL_ENH_ParUpdPState_IsIdle())  
         break;  
      //ASSERT_REBOOT( I < 20 );
	  if(I>20)
	  {
		ASSERT(0);
	  }
       kal_sleep_task(AUD_1TICK(2)); //kal_sleep_task( 2 );  

   }  
   kal_trace( TRACE_FUNC,SPE_SETDYNAMIC_SM, 1);
}


void SetDynamicParToDSP(uint32 IDnumber)
{
#if ( defined( __CENTRALIZED_SLEEP_MANAGER__ )&& defined( MTK_SLEEP_ENABLE ))
	   kal_uint16 aud_id = L1SP_GetAudID();
#endif    

	kal_take_enh_mutex (spe_enh_mutex);
	 MD1_DSP_kal_cc_take_spinlock(kal_cc_md1_dsp_spinlock, KAL_INFINITE_WAIT);
		switch (IDnumber) {
      	
		case Par_GSM_NB_SpeechUnit:
      	{	 			
			SP_SetSpeechPara(gSpe.sph_ModePara[0]);
			SPE_LoadSpeechPara(NULL, gSpe.sph_ModePara[0], NULL, NULL);
			AM_WriteFirCoeffs( gSpe.sph_InFirCoeff[0], gSpe.sph_OutFirCoeff[0] );
			AM_WriteIirCoeffs( gSpe.sph_InIirCoeff[0], gSpe.sph_OutIirCoeff[0],gSpe.sph_Mic1IirCoeff[0],gSpe.sph_Mic2IirCoeff[0]);		
				
		}
      	break;  		
		case Par_GSM_WB_SpeechUnit:
		{
			SP_SetWbSpeechPara(gSpe.sph_WbModePara[0]);
			SPE_LoadSpeechPara(NULL, NULL, gSpe.sph_WbModePara[0], NULL ); 
			AM_WriteWbFirCoeffs(gSpe.sph_WbInFirCoeff[0],gSpe.sph_WbOutFirCoeff[0]);
			AM_WriteWbIirCoeffs(gSpe.sph_WbInIirCoeff[0],gSpe.sph_WbOutIirCoeff[0],gSpe.sph_WbMic1IirCoeff[0],gSpe.sph_WbMic2IirCoeff[0]);
			
		}
		break;
		
#if !defined( __UMTS_TDD128_MODE__ ) 
		case Par_WCDMA_NB_SpeechUnit:
      	{	  
			SP_SetSpeechPara(gSpe.sph_ModePara[1]);
			SPE_LoadSpeechPara(NULL, gSpe.sph_ModePara[1], NULL, NULL);
			AM_WriteFirCoeffs( gSpe.sph_InFirCoeff[1], gSpe.sph_OutFirCoeff[1] );
			AM_WriteIirCoeffs( gSpe.sph_InIirCoeff[1], gSpe.sph_OutIirCoeff[1],gSpe.sph_Mic1IirCoeff[1],gSpe.sph_Mic2IirCoeff[1]);
			
			//set speech nb mode flag,  fir nb in flag,fir out nb flag 	
		}
      	break; 
		case Par_WCDMA_WB_SpeechUnit:
		{
			SP_SetWbSpeechPara(gSpe.sph_WbModePara[1]);
			SPE_LoadSpeechPara(NULL, NULL, gSpe.sph_WbModePara[1], NULL ); 
			AM_WriteWbFirCoeffs(gSpe.sph_WbInFirCoeff[1],gSpe.sph_WbOutFirCoeff[1]);
			AM_WriteWbIirCoeffs(gSpe.sph_WbInIirCoeff[1],gSpe.sph_WbOutIirCoeff[1],gSpe.sph_WbMic1IirCoeff[1],gSpe.sph_WbMic2IirCoeff[1]);
			
		}
		break;
#else //CDMA 
		case Par_CDMA_NB_SpeechUnit:
      	{	  			
			SP_SetSpeechPara(gSpe.sph_ModePara[2]);
			SPE_LoadSpeechPara(NULL, gSpe.sph_ModePara[2], NULL, NULL);
			AM_WriteFirCoeffs( gSpe.sph_InFirCoeff[2], gSpe.sph_OutFirCoeff[2] );
			AM_WriteIirCoeffs( gSpe.sph_InIirCoeff[2], gSpe.sph_OutIirCoeff[2],gSpe.sph_Mic1IirCoeff[2],gSpe.sph_Mic2IirCoeff[2]);
		}
      	break; 
		case Par_CDMA_WB_SpeechUnit:
		{
			SP_SetWbSpeechPara((kal_uint16*)gSpe.sph_WbModePara[2]);
			SPE_LoadSpeechPara(NULL, NULL, gSpe.sph_WbModePara[2], NULL );
			AM_WriteWbFirCoeffs(gSpe.sph_WbInFirCoeff[2],gSpe.sph_WbOutFirCoeff[2]);
			AM_WriteWbIirCoeffs(gSpe.sph_WbInIirCoeff[2],gSpe.sph_WbOutIirCoeff[2],gSpe.sph_WbMic1IirCoeff[2],gSpe.sph_WbMic2IirCoeff[2]);
			
		}
		break;
		
#endif
		case Par_VOLTE_NB_SpeechUnit:
      	{	  	

			SP_SetSpeechPara(gSpe.sph_ModePara[3]);
			SPE_LoadSpeechPara(NULL, gSpe.sph_ModePara[3], NULL, NULL);
			AM_WriteFirCoeffs( gSpe.sph_InFirCoeff[3], gSpe.sph_OutFirCoeff[3] );
			AM_WriteIirCoeffs( gSpe.sph_InIirCoeff[3], gSpe.sph_OutIirCoeff[3],gSpe.sph_Mic1IirCoeff[3],gSpe.sph_Mic2IirCoeff[3]);

		}
      	break; 
		case Par_VOLTE_WB_SpeechUnit:
		{

			SP_SetWbSpeechPara(gSpe.sph_WbModePara[3]);
			SPE_LoadSpeechPara(NULL, NULL, gSpe.sph_WbModePara[3], NULL);
			AM_WriteWbFirCoeffs(gSpe.sph_WbInFirCoeff[3],gSpe.sph_WbOutFirCoeff[3]);
			AM_WriteWbIirCoeffs(gSpe.sph_WbInIirCoeff[3],gSpe.sph_WbOutIirCoeff[3],gSpe.sph_WbMic1IirCoeff[3],gSpe.sph_WbMic2IirCoeff[3]);
		}
		break;
		case Par_VOLTE_SWB_SpeechUnit:
		{
			SP_SetSWbSpeechPara(gSpe.sph_SWbModePara[3]);
			SPE_LoadSpeechPara(NULL, NULL, NULL,gSpe.sph_SWbModePara[3] );
			AM_WriteSWbFirCoeffs(gSpe.sph_SWbInFirCoeff[3],gSpe.sph_SWbOutFirCoeff[3]);
			AM_WriteSWbIirCoeffs(gSpe.sph_SWbInIirCoeff[3],gSpe.sph_SWbOutIirCoeff[3],gSpe.sph_SWbMic1IirCoeff[3],gSpe.sph_SWbMic2IirCoeff[3]);
			
		}
		break;
		case Par_C2K_NB_SpeechUnit:
      	{	  	

			SP_SetSpeechPara(gSpe.sph_ModePara[4]);
			SPE_LoadSpeechPara(NULL, gSpe.sph_ModePara[4], NULL, NULL); // l1sp.sph_v_para no one use it.	
			AM_WriteFirCoeffs( gSpe.sph_InFirCoeff[4], gSpe.sph_OutFirCoeff[4] );
			AM_WriteIirCoeffs( gSpe.sph_InIirCoeff[4], gSpe.sph_OutIirCoeff[4],gSpe.sph_Mic1IirCoeff[4],gSpe.sph_Mic2IirCoeff[4]);

			
		}
      	break; 
		case Par_C2K_WB_SpeechUnit:
		{

			SP_SetWbSpeechPara(gSpe.sph_WbModePara[4]);
			SPE_LoadSpeechPara(NULL, NULL, NULL,gSpe.sph_WbModePara[4] ); // l1sp.sph_v_para no one use it. 
			AM_WriteWbFirCoeffs(gSpe.sph_WbInFirCoeff[4],gSpe.sph_WbOutFirCoeff[4]);
			AM_WriteWbIirCoeffs(gSpe.sph_WbInIirCoeff[4],gSpe.sph_WbOutIirCoeff[4],gSpe.sph_WbMic1IirCoeff[4],gSpe.sph_WbMic2IirCoeff[4]);

		}
		break;
		
	  
	  
	  	default:
      	{
        	kal_trace( TRACE_FUNC,SPE_SETDYNAMICPARTOMD_NOT_FIND, IDnumber);
         	break;
      	}
	}
	MD1_DSP_kal_cc_give_spinlock(kal_cc_md1_dsp_spinlock);
	 kal_give_enh_mutex  (spe_enh_mutex);
#if ( defined( __CENTRALIZED_SLEEP_MANAGER__ )&& defined( MTK_SLEEP_ENABLE ))
   L1SP_FreeAudID(aud_id);
#endif	  

}
void Set2GDynPar(void)
{
	SetDynamicParToDSP(Par_GSM_NB_SpeechUnit);
	SetDynamicParToDSP(Par_GSM_WB_SpeechUnit);

}

void Set3GDynPar(void)
{
#if !defined( __UMTS_TDD128_MODE__ ) 

	SetDynamicParToDSP(Par_WCDMA_NB_SpeechUnit);
	SetDynamicParToDSP(Par_WCDMA_WB_SpeechUnit);
#else
	SetDynamicParToDSP(Par_CDMA_NB_SpeechUnit);
	SetDynamicParToDSP(Par_CDMA_WB_SpeechUnit);

#endif

}

void Set4GDynPar(void)
{
	SetDynamicParToDSP(Par_VOLTE_NB_SpeechUnit);
	SetDynamicParToDSP(Par_VOLTE_WB_SpeechUnit);
	SetDynamicParToDSP(Par_VOLTE_SWB_SpeechUnit);

}

void SetC2KDynPar(void)
{
	SetDynamicParToDSP(Par_C2K_NB_SpeechUnit);
	SetDynamicParToDSP(Par_C2K_WB_SpeechUnit);

}



void SetSPEnhancePath(uint8 path)
{
	if(path == SpeechEnh_All)
	{
		gSpe.sph_SPE_path=SpeechEnh_All;
	}
	else if(path == SpeechEnh_UL)
	{
		gSpe.sph_SPE_path=SpeechEnh_UL;
	}
	else if(path == SpeechEnh_DL)
	{
		gSpe.sph_SPE_path=SpeechEnh_DL;
	}
	else
	{
		ASSERT(0);
	}
	
	SetSpeechEnhancement(true);

}

