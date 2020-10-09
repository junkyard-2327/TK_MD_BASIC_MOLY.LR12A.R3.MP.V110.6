
#ifndef __PCMMIXER_H__
#define __PCMMIXER_H__

#define BGSND_RB_DEFAULT_THRESHOLD    1024

uint16 PcmMixer_QueryDlBufLen(void);
void PcmMixer_writeDlBuf(uint16 *srcBuf, uint16 len);

/**	
	@isMix: Mixer switch for uplink speech, 1 for SPH+Sound, 0 for sound only
	@gain: Sound effect gain for uplink mixer, for 0 to 7
*/
void PcmMixer_ConfigUl(kal_bool isMix, kal_int8 gain );

/**	
	@isMix: Mixer switch for uplink speech, 1 for SPH+Sound, 0 for sound only
	@gain: Sound effect gain for uplink mixer, for 0 to 7
*/
void PcmMixer_ConfigDl(kal_bool isMix, kal_int8 gain );

/**
 @mixerHisrHandler: handler
*/
void PcmMixer_Start(void (*mixerHisrHandler)(void));
void PcmMixer_Stop(void);

void PcmMixer_Init(void);

#endif //__PCMMIXER_H__