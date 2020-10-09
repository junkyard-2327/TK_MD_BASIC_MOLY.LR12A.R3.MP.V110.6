#ifndef INCLUDE_DSP_HEADER_ENABLE_SPEECH
    #error "Please include CUIF_speech_ALL.h via dsp_header_define_speech.h"
#endif

#ifndef    __EXT_CUIF_SPEECH_ALL_H__
#define    __EXT_CUIF_SPEECH_ALL_H__

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
#include "EXT_CUIF_speech_region.h"
#include "dsp_header_define_cxif_ulsp.h"

// speech CUIF composite data structure on EMI
typedef volatile struct {
    // dummy data - 4 bytes
    EXT_CUIF_DUMMY dummy_data;
    
    // SS report use
    kal_uint32 usip_vic_enable_report;
    
    EXT_CUIF_Speech_Region_t ext_speech_region;
    ulsp_info_t ulsp_data_speech;
} SPEECH_EXT_CUIF_ALL_REGS;

// CUIF BASE on L1 & DSP
#if !defined(__LTE_L1SIM__) && defined(__CORE_USIP1__)
    extern volatile SPEECH_EXT_CUIF_ALL_REGS ext_cuif_speech;
    #define EXT_CUIF_SPEECH_BASE ((kal_uint32)(&ext_cuif_speech))
#else
    #include "mt6293/CUIF/dsp_memory_layout_custom.h"
#endif // !defined(__LTE_L1SIM__) && defined(__CORE_USIP1__)

// MACRO for accessing each MODULE and RAT

// SS
#define USIP_VIC_ENABLE_REPORT_SPEECH_PTR   ((volatile kal_uint32*)	    (EXT_CUIF_SPEECH_BASE + offsetof(SPEECH_EXT_CUIF_ALL_REGS, usip_vic_enable_report)))

// For Speech use
#define SPEECH_EXT_CUIF_REGION              ((EXT_CUIF_Speech_Region_t*)    (EXT_CUIF_SPEECH_BASE + offsetof(SPEECH_EXT_CUIF_ALL_REGS, ext_speech_region)))
#define ULSP_INFO_ADDR_SPEECH               ((ulsp_info_t *)                (EXT_CUIF_SPEECH_BASE + offsetof(SPEECH_EXT_CUIF_ALL_REGS, ulsp_data_speech)))

#endif //INCLUDE_DSP_HEADER_ENABLE_SPEECH
#endif
