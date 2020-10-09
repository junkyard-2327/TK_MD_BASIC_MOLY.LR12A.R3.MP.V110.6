#ifndef __DSP_HEADER_DEFINE_USIF_H__
#define __DSP_HEADER_DEFINE_USIF_H__

#if defined(__USIP__) || defined(__CORE_SCQ16__) || defined(__MIPS_IA__)

    #define INCLUDE_DSP_HEADER_ENABLE_USIF
    #include "USIF/USIF_ALL.h"
    #undef INCLUDE_DSP_HEADER_ENABLE_USIF

#else
    #error "Please do not use this structure"
#endif

#endif /*__DSP_HEADER_DEFINE_USIF_H__*/
