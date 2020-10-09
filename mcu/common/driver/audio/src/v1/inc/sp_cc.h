#ifndef SP_CC
#define SP_CC
#include "kal_public_defs.h"
#include "kal_public_api.h"
#include "kal_general_types.h"
#include "cache_sw.h"   //? ask SS, it ought not be exposed from RCU_MEMORY_SIZE
#include "mmu.h"
#include "audio_cc.h"
#include "audio_ringbuf.h"
#include "cc_irq_public.h"
#include "sp_drv.h"
#include "audio_msgid.h"
#include "drv_sap.h"
void SP_CC_Init();
void SP_CC_Event_Handler();

void cc_set_VBI_for_FSM(kal_uint32 state);
void cc_Standby_Call_Open(kal_uint32 enc_mod);
void cc_Standby_Call_Close(kal_uint32 dsp_end);
void cc_2G_Call_Open(kal_uint32 enc_mod, kal_uint32 dec_mod, kal_uint32 sub_channel);
void cc_2G_Call_Close(kal_uint32 dsp_end);
void cc_3G_Call_Open(kal_uint32 enc_mod, kal_uint32 dec_mod, kal_uint32 dtx, kal_uint32 delR, kal_uint32 delW, kal_uint32 delM, kal_uint32 u32CurTime64us);
void cc_3G_Call_Close(kal_uint32 dsp_end);
void cc_4G_Call_Open_temp(kal_uint32 enc_mod, kal_uint32 dec_mod, kal_uint32 dtx, kal_uint32 delR, kal_uint32 delW, kal_uint32 delM, kal_uint32 u32CurTime64us, uint32 is_4G_handover);
void cc_4G_Call_Close_temp(kal_uint32 dsp_end);
void cc_4G_G_Codec_Call_Open(kal_uint32 band_mod, kal_uint32 delR, kal_uint32 delW, kal_uint32 delM, kal_uint32 u32CurTime64us);
void cc_4G_G_Codec_Call_Close(kal_uint32 dsp_end);
void cc_4G_EVS_Codec_Call_Open(kal_uint32 codec, uint32 isDTX, kal_uint32 delR, kal_uint32 delW, kal_uint32 delM, kal_uint32 u32CurTime64us, uint32 is_4G_handover);
void cc_4G_EVS_Codec_Call_Close(kal_uint32 dsp_end);
void cc_C2K_Call_Open(kal_uint32 so, kal_uint32 dtx, kal_uint32 delR, kal_uint32 delW, kal_uint32 delM);
void cc_C2K_Call_Close(kal_uint32 dsp_end);
void           cc_L1D_Audio_ChkDspInitDone();
kal_uint16     cc_L1D_Audio_RestartDSP();
void           cc_L1D_Audio_NoNeedDSP();




#endif
