
#ifndef __PCMMIXER3_H__
#define __PCMMIXER3_H__

#define BGSND_RB_DEFAULT_THRESHOLD    1024

uint16 PcmMixer3_QueryUlBufLen(void);
void PcmMixer3_writeUlBuf(uint16 *srcBuf, uint16 len);

/**	
	@isMix: Mixer switch for uplink speech, 1 for SPH+Sound, 0 for sound only
	@gain: Sound effect gain for uplink mixer, for 0 to 7
*/
void PcmMixer3_ConfigUl(kal_bool isMix, kal_int8 gain );

/**	
	@isMix: Mixer switch for uplink speech, 1 for SPH+Sound, 0 for sound only
	@gain: Sound effect gain for uplink mixer, for 0 to 7
*/
//void PcmMixer3_ConfigDl(kal_bool isMix, kal_int8 gain );

/**
 @mixerHisrHandler: handler
*/
void PcmMixer3_Start(void (*mixerHisrHandler)(void));
void PcmMixer3_Stop(void);

void PcmMixer3_Init(void);

#endif //__PCMMIXER3_H__