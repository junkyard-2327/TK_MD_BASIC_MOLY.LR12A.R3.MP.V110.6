#ifndef INCLUDE_DSP_HEADER_ENABLE_SPEECH
    #error "Please include CUIF_speech_ALL.h via dsp_header_define_speech.h"
#endif

#ifndef    __CUIF_SPEECH_ALL_H__
#define    __CUIF_SPEECH_ALL_H__

// to avoid including this header file directly
#if defined(INCLUDE_DSP_HEADER_ENABLE_SPEECH)

#include "stddef.h"
#if defined(__MIPS_IA__)
#include "kal_general_types.h"
#elif defined(__CORE_USIP1__)
#include "kal_public.h"
#endif

// include your own structure header file
#include "mt6293/CUIF/CUIF_SS_region.h"
#include "CUIF_speech_region.h"

// CUIF composite data structure in USIP0
typedef volatile struct {
    // Reserve space for SS/ST, set as RW
    CUIF_SS_region ss_region;
    kal_uint32 ss_region_end;
 
    CUIF_Speech_Region_t speech_region;
    kal_uint32 speech_region_end;
    // RAT0
    
    // RAT1
   
    // CUIF Structure Check 
    SS_CUIFStructPattern cuifstruct_check;
    
} SPEECH_CUIF_ALL_REGS;

// CUIF BASE on L1 & DSP
#if !defined(__LTE_L1SIM__) && defined(__CORE_USIP1__)
    extern volatile SPEECH_CUIF_ALL_REGS cuif_speech;
    #define CUIF_SPEECH_BASE ((kal_uint32)(&cuif_speech))
#else
    #define CUIF_SPEECH_BASE ((kal_uint32)(0xA1149000))
#endif

// MACRO for accessing each MODULE and RAT
// For SS use
#define SPEECH_SS_BOOTINFO          ((SS_MD32_BootStatus*)      (CUIF_SPEECH_BASE + offsetof(SPEECH_CUIF_ALL_REGS, ss_region.boot)))
#define SPEECH_SS_SLEEPINFO         ((SS_MD32_SLEEP_REL*)       (CUIF_SPEECH_BASE + offsetof(SPEECH_CUIF_ALL_REGS, ss_region.sleep_info)))
#define SPEECH_SS_DBGINFO           ((SS_DBGInfo*)              (CUIF_SPEECH_BASE + offsetof(SPEECH_CUIF_ALL_REGS, ss_region.dbg_reg)))
#define SPEECH_SS_EXLOG             ((SS_ExceptionAssertLog*)   (CUIF_SPEECH_BASE + offsetof(SPEECH_CUIF_ALL_REGS, ss_region.ex_log)))
#define SPEECH_SS_ZIINFO            ((SS_CUIF_ZIInfo_t*)        (CUIF_SPEECH_BASE + offsetof(SPEECH_CUIF_ALL_REGS, ss_region.cuif_zi_info)))
#define SPEECH_SS_MDLINFO           ((CUIF_MDLInfo*)            (CUIF_SPEECH_BASE + offsetof(SPEECH_CUIF_ALL_REGS, ss_region.cuif_mdl_used)))
#define SPEECH_SS_CUIFCHECK         ((SS_CUIFStructPattern*)    (CUIF_SPEECH_BASE + offsetof(SPEECH_CUIF_ALL_REGS, cuifstruct_check)))

// For Speech use
#define SPEECH_CUIF_REGION          ((CUIF_Speech_Region_t*)    (CUIF_SPEECH_BASE + offsetof(SPEECH_CUIF_ALL_REGS, speech_region)))


#include "CUIF_check_macro_speech.h"

#endif //INCLUDE_DSP_HEADER_ENABLE_SPEECH
#endif
