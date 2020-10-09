/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2017
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
 * sp_gain.c
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description:
 * ------------
 *  
 *
 * Author:
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
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *==============================================================================
 *******************************************************************************/

#include "kal_public_api.h"
#include "kal_general_types.h"
#include "kal_trace.h"

#include "l1sp_trc.h"

#include "l1audio.h"
#include "am.h"

static struct {

	kal_int16 digitOnly_digital_gain;
	kal_int16 digitOnly_sphEnhRef_digital_gain;
	kal_int16 digitOnly_mic_volume;
	
}spGain;
		

const kal_uint16 digitOnly_quater_dB_tableForSpeech[296] = 
{
	10289, 9997, 9713, 9438, /* 8  ~ 7.25 dB*/
	9170, 8910, 8657, 8411, /* 7   ~ 6.25 dB*/
	8173, 7941, 7715, 7497, /* 6   ~ 5.25 dB*/
	7284, 7077, 6876, 6681, /* 5   ~ 4.25 dB*/
	6492, 6308, 6129, 5955, /* 4   ~ 3.25 dB*/
	5786, 5622, 5462, 5307, /* 3   ~ 2.25 dB*/
	5120, 5010, 4868, 4730, /* 2   ~ 1.25 dB*/    // uplink begin (2 db == 5120 == 0x1400)
	4596, 4465, 4339, 4216, /* 1   ~ 0.25 dB*/
	4096, 3980, 3867, 3757, /* 0   ~ -0.75   dB*/ //  downlink begin (0 db == 4096 == 0x1000) ==> chip newer then MT6572
	3645, 3547, 3446, 3349, /* -1  ~ -1.75   dB*/ // downlink begin (-1db == 3645 == 0xE3D) ==> Old chip MT6280 & MT6589 
	3254, 3161, 3072, 2984, /* -2  ~ -2.75   dB*/
	2900, 2817, 2738, 2660, /* -3  ~ -3.75   dB*/
	2584, 2511, 2440, 2371, /* -4  ~ -4.75   dB*/
	2303, 2238, 2175, 2113, /* -5  ~ -5.75   dB*/
	2053, 1995, 1938, 1883, /* -6  ~ -6.75   dB*/
	1830, 1778, 1727, 1678, /* -7  ~ -7.75   dB*/
	1631, 1584, 1539, 1496, /* -8  ~ -8.75   dB*/
	1453, 1412, 1372, 1333, /* -9  ~ -9.75   dB*/
	1295, 1259, 1223, 1188, /* -10 ~ -10.75  dB*/
	1154, 1122, 1090, 1059, /* -11 ~ -11.75  dB*/
	1029, 1000, 971 , 944 , /* -12 ~ -12.75  dB*/
	917 , 891 , 866 , 841 , /* -13 ~ -13.75  dB*/
	817 , 794 , 772 , 750 , /* -14 ~ -14.75  dB*/
	728 , 708 , 688 , 668 , /* -15 ~ -15.75  dB*/
	649 , 631 , 613 , 595 , /* -16 ~ -16.75  dB*/
	579 , 562 , 546 , 531 , /* -17 ~ -17.75  dB*/
	516 , 501 , 487 , 473 , /* -18 ~ -18.75  dB*/
	460 , 447 , 434 , 422 , /* -19 ~ -19.75  dB*/
	410 , 398 , 387 , 376 , /* -20 ~ -20.75  dB*/
	365 , 355 , 345 , 335 , /* -21 ~ -21.75  dB*/
	325 , 316 , 307 , 298 , /* -22 ~ -22.75  dB*/
	290 , 282 , 274 , 266 , /* -23 ~ -23.75  dB*/
	258 , 251 , 244 , 237 , /* -24 ~ -24.75  dB*/
	230 , 224 , 217 , 211 , /* -25 ~ -25.75  dB*/
	205 , 199 , 194 , 188 , /* -26 ~ -26.75  dB*/
	183 , 178 , 173 , 168 , /* -27 ~ -27.75  dB*/
	163 , 158 , 154 , 150 , /* -28 ~ -28.75  dB*/
	145 , 141 , 137 , 133 , /* -29 ~ -29.75  dB*/
	130 , 126 , 122 , 119 , /* -30 ~ -30.75  dB*/
	115 , 112 , 109 , 106 , /* -31 ~ -31.75  dB*/
	103 , 100 , 97  , 94  , /* -32 ~ -32.75  dB*/
	92  , 89  , 87  , 84  , /* -33 ~ -33.75  dB*/
	82  , 79  , 77  , 75  , /* -34 ~ -34.75  dB*/
	73  , 71  , 69  , 67  , /* -35 ~ -35.75  dB*/
	65  , 63  , 61  , 60  , /* -36 ~ -36.75  dB*/
	58  , 56  , 55  , 53  , /* -37 ~ -37.75  dB*/
	52  , 50  , 49  , 47  , /* -38 ~ -38.75  dB*/
	46  , 45  , 43  , 42  , /* -39 ~ -39.75  dB*/
	41  , 40  , 39  , 38  , /* -40 ~ -40.75  dB*/
	37  , 35  , 34  , 33  , /* -41 ~ -41.75  dB*/
	33  , 32  , 31  , 30  , /* -42 ~ -42.75  dB*/
	29  , 28  , 27  , 27  , /* -43 ~ -43.75  dB*/
	26  , 25  , 24  , 24  , /* -44 ~ -44.75  dB*/
	23  , 22  , 22  , 21  , /* -45 ~ -45.75  dB*/
	21  , 20  , 19  , 19  , /* -46 ~ -46.75  dB*/
	18  , 18  , 17  , 17  , /* -47 ~ -47.75  dB*/
	16  , 16  , 15  , 15  , /* -48 ~ -48.75  dB*/
	15  , 14  , 14  , 13  , /* -49 ~ -49.75  dB*/
	13  , 13  , 12  , 12  , /* -50 ~ -50.75  dB*/
	12  , 11  , 11  , 11  , /* -51 ~ -51.75  dB*/
	10  , 10  , 10  , 9   , /* -52 ~ -52.75  dB*/
	9   , 9   , 9   , 8   , /* -53 ~ -53.75  dB*/
	8   , 8   , 8   , 7   , /* -54 ~ -54.75  dB*/
	7   , 7   , 7   , 7   , /* -55 ~ -55.75  dB*/
	6   , 6   , 6   , 6   , /* -56 ~ -56.75  dB*/
	6   , 6   , 5   , 5   , /* -57 ~ -57.75  dB*/
	5   , 5   , 5   , 5   , /* -58 ~ -58.75  dB*/
	5   , 4   , 4   , 4   , /* -59 ~ -59.75  dB*/
	4   , 4   , 4   , 4   , /* -60 ~ -60.75  dB*/
	4   , 4   , 3   , 3   , /* -61 ~ -61.75  dB*/
	3   , 3   , 3   , 3   , /* -62 ~ -62.75  dB*/
	3   , 3   , 3   , 3   , /* -63 ~ -63.75  dB*/
	3   , 3   , 2   , 2   , /* -64 ~ -64.75  dB*/
	2   , 2   , 2   , 2   , /* -65 ~ -65.75  dB*/
};

/**
	Only use when MODEM do not have analog device, ie. ANALOG_AFE_PATH_EXIST is NOT defined

	@digitalGainQDb: input digital gain value in dB. 4 step/1db. 
	  for example: digitalGainDb=1  --> 0.25 dB; digitalGainDb=FFF4(-12) --> -3dB
	@isDL: true for downlink, false for uplink
	@return: value set to dsp
	  
*/
kal_uint16 _digitOnly_convert_digital_gain_forSpeech(kal_int16 digitalGainQDb, kal_bool isDl)
{
	kal_int16 idx = (-digitalGainQDb);

	if(isDl){
#if 0 
/* under construction !*/
/* under construction !*/
#else // data card chip should begin from 0
		idx += 32; // begin from 0 db 
#endif
	} else {
		// for UL. useless now
	}
	
	return digitOnly_quater_dB_tableForSpeech[idx];
	
}

//=============================================================================
/**
	@digitalGainQdB: input digital gain value in quarter dB, i.e. 4 step/1db. 
	  for example: digitalGainDb=1  --> 0.25 dB; digitalGainDb=FFF4(-12) --> -3dB
*/
// void AFE_DigitalOnly_SetDigitalGain(kal_uint8 aud_func, kal_int16 digitalGainQdB, kal_bool isForceSet)
void spGain_SetDigitalGain(kal_int16 digitalGainQdB, kal_bool isForceSet)
{	
	kal_trace(TRACE_STATE, AFE_SET_GIDI_GAIN, digitalGainQdB, isForceSet);
	ASSERT((digitalGainQdB)<=0 && (digitalGainQdB>=-256)); // value frome -64 db to 0 db
	
	spGain.digitOnly_digital_gain = _digitOnly_convert_digital_gain_forSpeech(digitalGainQdB, true);
	
	if(AM_IsAmInSpeechState()) {
		AM_DSP_SetSpeechDigitalGain(spGain.digitOnly_digital_gain );
	} else if (isForceSet) {
		uint16 aid = L1Audio_GetAudioID();
		L1Audio_SetFlag( aid );

		AM_DSP_SetSpeechDigitalGain(spGain.digitOnly_digital_gain );
	
		L1Audio_ClearFlag( aid );
		L1Audio_FreeAudioID( aid );		
	}
}



/**

	@digitalGainQdB: input digital gain value in quarter dB, i.e. 4 step/1db. 
	  for example: digitalGainDb=1  --> 0.25 dB; digitalGainDb=FFF4(-12) --> -3dB
*/
void spGain_SetEnhRefDigitalGain(kal_int16 refDigitalGainQdB, kal_bool isForceSet)
{
	kal_trace(TRACE_STATE, AFE_SET_SPH_REF_GIDI_GAIN, refDigitalGainQdB);
	ASSERT((refDigitalGainQdB)<=0 && (refDigitalGainQdB>=-28)); // value from -7 db to 0 db
	
	spGain.digitOnly_sphEnhRef_digital_gain = _digitOnly_convert_digital_gain_forSpeech(refDigitalGainQdB, true);
	
	if(AM_IsAmInSpeechState()) {
		AM_DSP_SetSpeechEnhRefDigitalGain(spGain.digitOnly_sphEnhRef_digital_gain);
	} else if (isForceSet) {
		uint16 aid = L1Audio_GetAudioID();
		L1Audio_SetFlag( aid );

		AM_DSP_SetSpeechEnhRefDigitalGain(spGain.digitOnly_sphEnhRef_digital_gain );
	
		L1Audio_ClearFlag( aid );
		L1Audio_FreeAudioID( aid );		
	}
}

void spGain_SetMicrophoneVolume( kal_int16 mic_volume, kal_bool isForceSet )
{
	kal_brief_trace(TRACE_STATE, AFE_SET_MIC_VOLUME, mic_volume);
	ASSERT((mic_volume)>=0 && (mic_volume<=120)); // range is 0~ 30 dB

	spGain.digitOnly_mic_volume = (mic_volume>>2); // 4 is 1 db 
	if(AM_IsAmInSpeechState()) {
		AM_DSP_SetSpeechUplinkSwAgcGain(spGain.digitOnly_mic_volume);
	} else if (isForceSet) {
		uint16 aid = L1Audio_GetAudioID();
		L1Audio_SetFlag( aid );

		AM_DSP_SetSpeechUplinkSwAgcGain(spGain.digitOnly_mic_volume);
	
		L1Audio_ClearFlag( aid );
		L1Audio_FreeAudioID( aid );	
	}
}


// ============================================================================
void spGain_Refresh2DSP(void)
{
	uint16 aid = L1Audio_GetAudioID();
	L1Audio_SetFlag( aid );

	AM_DSP_SetSpeechDigitalGain(spGain.digitOnly_digital_gain );
	AM_DSP_SetSpeechEnhRefDigitalGain(spGain.digitOnly_sphEnhRef_digital_gain );
	AM_DSP_SetSpeechUplinkSwAgcGain(spGain.digitOnly_mic_volume);
	
	L1Audio_ClearFlag( aid );
	L1Audio_FreeAudioID( aid );	
}

void spGain_Init(void)
{
	spGain.digitOnly_digital_gain = 0x1000; // 0 dB in DSP
	spGain.digitOnly_sphEnhRef_digital_gain = 0x1000; // 0 dB in DSP
	spGain.digitOnly_mic_volume = 0;

	spGain_Refresh2DSP();	
}

