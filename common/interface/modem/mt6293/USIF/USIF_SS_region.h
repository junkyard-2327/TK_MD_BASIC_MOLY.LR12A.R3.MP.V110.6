#ifndef __USIF_SS_REGION_H__
#define __USIF_SS_REGION_H__

#define Scq16_ExceptionFinishFillPattern 0xFD32FD32
#define SCQ16_DORMANT_CTRL                  0xDC93DC93
#define SCQ16_ABORT_CTRL                    0xAC93AC93
typedef enum{
    SCq16_uSIPLoadDone  = 0x6293BF00,
    SCq16_ssassmDone    = 0x6293BF01,
    SCq16_hwinitDone    = 0x6293BF02,
    SCq16_BackUpDone    = 0x6293BDBD,
    SCq16_AbortFlow     = 0x6293AFAF,
    SCq16_BootUpDone    = 0x6293FBFB
} BootUpProgress;

typedef volatile struct{
    kal_uint32 scq16_bootupready;
} SS_SCq16_BOOTINFO;

typedef volatile struct{
    kal_uint32 ex_finish_fill;
    kal_uint32 ex_log_ptr;
    kal_uint32 ex_sync[2];
} SS_SCq16_EXINFO;

typedef volatile struct{
    SS_SCq16_BOOTINFO   scq16_bootinfo;
    SS_SCq16_EXINFO     scq16_exinfo;
} SS_USIF_STRUCT;

#endif /*__USIF_SS_REGION_H__*/
