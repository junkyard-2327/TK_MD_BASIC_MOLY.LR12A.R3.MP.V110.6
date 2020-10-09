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
 * aud_common.c
 *
 * Project:
 * --------
 *   MAUI Project
 *
 * Description:
 * ------------
 *   Common Audio Customization Parameters 
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
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *==============================================================================
 *******************************************************************************/

#include "audcoeff_default.h"
// #include "aud_common_config.h"

/* I2S_INPUT_MODE Sampling rate */
/* Should be 32000, 44100, or 48000 */
// const unsigned short Media_I2S_INPUT_MODE_SR = 32000;

/* I2S INPUT/OUTPUT Mode select*/
/* 0: master mode / 1: slave mode*/
/* currently, only master mode is supported*/
// const char Media_I2S_SLAVE_MODE = 0;

/* SW_SYN_8K | SW_SYN_16K : Maximum Amplitude of MCU Software Synthesizer  */
// const unsigned short Media_Playback_Maximum_Swing = DEFAULT_MEDIA_PLAYBACK_MAXIMUM_SWING;

/* DSP_WT_SYN Melody Compensation Filter  */ 
// const signed short Melody_FIR[25] = DEFAULT_MELODY_FIR;

#if defined(__DUAL_MIC_SUPPORT__) || defined(__SMART_PHONE_MODEM__)

const signed short WB_DMNR_Para[76] = DEFAULT_WB_DMNR_PARAM;
const signed short LSpk_WB_DMNR_Para[76] = DEFAULT_LSPK_WB_DMNR_PARAM; 

const signed short DMNR_Para[44] = DEFAULT_DMNR_PARAM;
const signed short LSpk_DMNR_Para[44] = DEFAULT_LSPK_DMNR_PARAM; 

#endif

/*
 * Speech Enhancement Parameter
 * Refer to audcoeff_default.h
 */
const unsigned short Speech_Normal_Mode_Para[16] = DEFAULT_SPEECH_NORMAL_MODE_PARA;
const unsigned short Speech_Earphone_Mode_Para[16] = DEFAULT_SPEECH_EARPHONE_MODE_PARA;
const unsigned short Speech_LoudSpk_Mode_Para[16] = DEFAULT_SPEECH_LOUDSPK_MODE_PARA;
const unsigned short Speech_BT_Earphone_Mode_Para[16] = DEFAULT_SPEECH_BT_EARPHONE_MODE_PARA;
const unsigned short Speech_BT_Cordless_Mode_Para[16] = DEFAULT_SPEECH_BT_CORDLESS_MODE_PARA;
const unsigned short Speech_CARKIT_Mode_Para[16] = DEFAULT_SPEECH_CARKIT_MODE_PARA;
const unsigned short Speech_AUX1_Mode_Para[16] = DEFAULT_SPEECH_AUX1_MODE_PARA;
const unsigned short Speech_AUX2_Mode_Para[16] = DEFAULT_SPEECH_AUX2_MODE_PARA;


const unsigned short WB_Speech_Normal_Mode_Para[16] = DEFAULT_WB_SPEECH_NORMAL_MODE_PARA;
const unsigned short WB_Speech_Earphone_Mode_Para[16] = DEFAULT_WB_SPEECH_EARPHONE_MODE_PARA;
const unsigned short WB_Speech_LoudSpk_Mode_Para[16] = DEFAULT_WB_SPEECH_LOUDSPK_MODE_PARA;
const unsigned short WB_Speech_BT_Earphone_Mode_Para[16] = DEFAULT_WB_SPEECH_BT_EARPHONE_MODE_PARA;
const unsigned short WB_Speech_BT_Cordless_Mode_Para[16] = DEFAULT_WB_SPEECH_BT_CORDLESS_MODE_PARA;
const unsigned short WB_Speech_CARKIT_Mode_Para[16] = DEFAULT_WB_SPEECH_CARKIT_MODE_PARA;
const unsigned short WB_Speech_AUX1_Mode_Para[16] = DEFAULT_WB_SPEECH_AUX1_MODE_PARA;
const unsigned short WB_Speech_AUX2_Mode_Para[16] = DEFAULT_WB_SPEECH_AUX2_MODE_PARA;


// const unsigned short Speech_Vol_Para[4] = DEFAULT_SPEECH_VOL_PARA;

/*
const unsigned short L1Audio_Debug_Info[16]=
{ 
      0,     0,        0,     0,     0,
      0,     0,        0,     0,     0,
      0,     0,        0,     0,     0,
      0
};
*/




