#if !defined(INCLUDE_DSP_HEADER_ENABLE_USIF)
    #error "Please include USIF_ALL.h from dsp_header_define_usif.h"
#endif

#ifndef __USIF_ALL_H__
#define __USIF_ALL_H__

#include "stddef.h"
#if !defined(__MIPS_IA__) && !defined(__USIP__)
    #include "kal_public.h"
#else
    #include "reg_base.h"
#endif /* __MIPS_IA__ */

// include sub-structure here
#include "USIF_SS_region.h"

// USIF structure define here
typedef volatile struct{
    SS_USIF_STRUCT   ss_scq16_usif;
} USIF_STRUCT;

// define uSIP view and SCq16 view base
#if defined(__MIPS_IA__)
    #define USIF_SCQ16_0_BASE   BASE_MADDR_BRAM_SCQ0_LOCAL_DM
    #define USIF_SCQ16_1_BASE   BASE_MADDR_BRAM_SCQ1_LOCAL_DM
#elif defined(__CORE_USIP__)
    #define USIF_SCQ16_0_BASE   PRIVATE_DM0_base
    #define USIF_SCQ16_1_BASE   PRIVATE_DM1_base
#elif defined(__CORE_SCQ16__)
    extern USIF_STRUCT usif;
    #define USIF_SCQ16_0_BASE   &usif
#endif

// Macro define for access
// SS use
// for uSIP access SCq16_0 and SCq16_0/SCq16_1 core use
#define USIF_SCQ16_0_SS_BOOTINFO        ((SS_SCq16_BOOTINFO*)   (USIF_SCQ16_0_BASE + offsetof(USIF_STRUCT, ss_scq16_usif.scq16_bootinfo))       )
#define USIF_SCQ16_0_SS_EXINFO          ((SS_SCq16_EXINFO*)     (USIF_SCQ16_0_BASE + offsetof(USIF_STRUCT, ss_scq16_usif.scq16_exinfo))         )

#if defined(__USIP__) || defined(__MIPS_IA__)
// for uSIP access SCq16_1
#define USIF_SCQ16_1_SS_BOOTINFO        ((SS_SCq16_BOOTINFO*)   (USIF_SCQ16_1_BASE + offsetof(USIF_STRUCT, ss_scq16_usif.scq16_bootinfo))       )
#define USIF_SCQ16_1_SS_EXINFO          ((SS_SCq16_EXINFO*)     (USIF_SCQ16_1_BASE + offsetof(USIF_STRUCT, ss_scq16_usif.scq16_exinfo))         )
#endif /*__USIP__*/

#endif /* __USIF_ALL_H__ */
