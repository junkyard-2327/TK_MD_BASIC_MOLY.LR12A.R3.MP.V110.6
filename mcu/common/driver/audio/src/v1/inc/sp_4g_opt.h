#ifndef __SP_4G_OPT__
#define __SP_4G_OPT__


#define __SP_4G_OPT_TONE_DETECTION__


uint16 sp4gToneDeteGetAudID(void);
void sp4gToneDeteInit(void);
void sp4gToneDeteClose(void);
void sp4gToneDeteTaskInit(void);
void sp4gToneDeteExec();
int32 sp4gToneDeteGetResult(void);


#endif //__SP_4G_OPT__
