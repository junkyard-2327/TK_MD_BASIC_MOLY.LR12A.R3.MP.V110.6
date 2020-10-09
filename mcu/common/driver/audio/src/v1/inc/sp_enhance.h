
#ifndef _SP_ENHANCE_H
#define _SP_ENHANCE_H

#include "l1aud_common_def.h"
#include "sal_def.h"


void L1SP_EnableSpeechEnhancement( bool enable );
bool spe_isSpeFweOn(void);


void SPE_LoadSpeechPara( uint16 c_para[NUM_COMMON_PARAS], uint16 m_para[NUM_MODE_PARAS],
	uint16 m_paraWb[NUM_MODE_PARAS],uint16 m_paraSWb[NUM_MODE_PARAS]);

void spe_setHacModeNeeded(bool isNeed);
// void SPE_MagiClarityData(short MagiClarityData[32]);

// ----------------------------------------------------------------------------
// DSP filter/function related parameter/coefficient setting
// ----------------------------------------------------------------------------
void spe_setMagiCon(void);
void spe_DisableMagiCon(void);
void spe_setNotchFilterParam(int16 *param, bool is2In1Spk);
void L1SP_EnhancementCtrlSupport( uint16 value );

// void SPE_SetActiveEchoRefInfo(uint16 sphMode);
// void SPE_SetEchoRefInfo(bool isEchoRefOn, uint16 echoRefMicIndex, uint16 delayAndSwitch4Dsp, uint16 sphMode);

void SetSpeechEnhancement(bool ec);
void SPE_WaitSPEDynReady(void) ;
void l1sp_setCtmSpeStatus(bool s);
bool l1sp_getCtmSpeStatus();

typedef enum{
	SpeechEnh_All = 0, //default path : UL+DL
	SpeechEnh_UL, 
	SpeechEnh_DL, 
}SpeechEnh_path; 
void SetSPEnhancePath(uint8 path);


#endif
