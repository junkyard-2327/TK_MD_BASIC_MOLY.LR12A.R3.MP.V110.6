#ifndef INCLUDE_DSP_HEADER_ENABLE_INNER_BRP
    #error "Please include CUIF_inner_brp_ALL.h via dsp_header_define_inner_brp.h"
#endif

#ifndef        __EXT_CUIF_INNER_BRP_ALL_H__
#define        __EXT_CUIF_INNER_BRP_ALL_H__

// to avoid including this header file directly
#if defined(INCLUDE_DSP_HEADER_ENABLE_INNER_BRP)

#include "stddef.h"
#if defined(__MIPS_IA__)
#include "kal_general_types.h"
#elif defined(__CORE_USIP0__)
#include "kal_public.h" 
#endif

// include your own structure header file
#include "mt6293/CUIF/CUIF_SS_region.h"
#include "dsp_header_define_cxif_ulsp.h"

// inner brp CUIF composite data structure on EMI

typedef volatile struct {
    // dummy data - 4 bytes
    EXT_CUIF_DUMMY dummy_data;
    
    // SS report use
    kal_uint32 usip_vic_enable_report_inner;
    kal_uint32 usip_vic_enable_report_brp;
    kal_uint32 g_feature_check_pattern;
    
    ulsp_info_t ulsp_data_inner;
    ulsp_info_t ulsp_data_scq16_0;
    ulsp_info_t ulsp_data_scq16_1;
    ulsp_info_t ulsp_data_brp;
} INNER_BRP_EXT_CUIF_ALL_REGS;

// CUIF BASE on L1 & DSP
#if !defined(__LTE_L1SIM__) && defined(__CORE_USIP0__)    
    extern volatile INNER_BRP_EXT_CUIF_ALL_REGS ext_cuif_inner_brp;
    #define EXT_CUIF_INNER_BRP_BASE ((kal_uint32)(&ext_cuif_inner_brp))
#else
    #include "mt6293/CUIF/dsp_memory_layout_custom.h"
#endif // !defined(__LTE_L1SIM__) && defined(__CORE_USIP0__)


// MACRO for accessing each MODULE and RAT

// SS
#define USIP_VIC_ENABLE_REPORT_INNER_PTR    ((volatile kal_uint32*) (EXT_CUIF_INNER_BRP_BASE + offsetof(INNER_BRP_EXT_CUIF_ALL_REGS, usip_vic_enable_report_inner)))
#define USIP_VIC_ENABLE_REPORT_BRP_PTR      ((volatile kal_uint32*) (EXT_CUIF_INNER_BRP_BASE + offsetof(INNER_BRP_EXT_CUIF_ALL_REGS, usip_vic_enable_report_brp)))
#define EXT_CUIF_G_FEATURE_CHECK_PATTERN_USIP0      ((volatile kal_uint32*) (EXT_CUIF_INNER_BRP_BASE + offsetof(INNER_BRP_EXT_CUIF_ALL_REGS, g_feature_check_pattern)))

// INNER
#define ULSP_INFO_ADDR_INNER                ((ulsp_info_t *) (EXT_CUIF_INNER_BRP_BASE + offsetof(INNER_BRP_EXT_CUIF_ALL_REGS, ulsp_data_inner)))
#define ULSP_INFO_ADDR_SCQ16_0              ((ulsp_info_t *) (EXT_CUIF_INNER_BRP_BASE + offsetof(INNER_BRP_EXT_CUIF_ALL_REGS, ulsp_data_scq16_0)))
#define ULSP_INFO_ADDR_SCQ16_1              ((ulsp_info_t *) (EXT_CUIF_INNER_BRP_BASE + offsetof(INNER_BRP_EXT_CUIF_ALL_REGS, ulsp_data_scq16_1)))

// BRP
#define ULSP_INFO_ADDR_BRP                  ((ulsp_info_t *) (EXT_CUIF_INNER_BRP_BASE + offsetof(INNER_BRP_EXT_CUIF_ALL_REGS, ulsp_data_brp)))

#endif //INCLUDE_DSP_HEADER_ENABLE_INNER_BRP
#endif
