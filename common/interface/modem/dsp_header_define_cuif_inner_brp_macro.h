#ifndef __DSP_HEADER_DEFINE_CUIF_INNER_BRP_MACRO_H__
#define __DSP_HEADER_DEFINE_CUIF_INNER_BRP_MACRO_H__


#if defined(__DSP_CODEBASE_MT6295__)
    // Users should use dsp_header_define.h to use XXIF header files rather than directly using them
    #define INCLUDE_DSP_HEADER_MACRO_INNER_BRP
    
    #include "mt6295/xxif_checksum.h"
    #if defined(__CORE_USIP0__) || defined(__CORE_SCQ16__)
        #include "mt6295/CUIF/inner_brp/CUIF_inner_brp_macro.h"
    #endif
    
    #if defined(__CR4__) || defined(__MIPS_IA__)
        #include "mt6295/CUIF/inner_brp/CUIF_inner_brp_macro.h"
    #endif
    
    #undef INCLUDE_DSP_HEADER_MACRO_INNER_BRP



#elif defined(__DSP_CODEBASE_MT6293__)
    // Users should use dsp_header_define.h to use XXIF header files rather than directly using them
    #define INCLUDE_DSP_HEADER_MACRO_INNER_BRP
    
    #include "mt6293/xxif_checksum.h"
    #if defined(__CORE_USIP0__) || defined(__CORE_SCQ16__)
        #include "mt6293/CUIF/inner_brp/CUIF_inner_brp_macro.h"
    #endif
    
    #if defined(__CR4__) || defined(__MIPS_IA__)
        #include "mt6293/CUIF/inner_brp/CUIF_inner_brp_macro.h"
    #endif
    
    #undef INCLUDE_DSP_HEADER_MACRO_INNER_BRP
#endif // __DSP_CODEBASE_MT6293__


#endif // __DSP_HEADER_DEFINE_CUIF_INNER_BRP_MACRO_H__
