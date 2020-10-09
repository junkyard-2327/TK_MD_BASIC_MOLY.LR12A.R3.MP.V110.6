#ifndef INCLUDE_DSP_HEADER_ENABLE_FEC_WBRP
    #error "Please include CUIF_fec_wbrp_ALL.h via dsp_header_define_fec_wbrp.h"
#endif

#ifndef    __EXT_CUIF_FEC_WBRP_ALL_H__
#define    __EXT_CUIF_FEC_WBRP_ALL_H__

// to avoid including this header file directly
#if defined(INCLUDE_DSP_HEADER_ENABLE_FEC_WBRP)

#include "stddef.h"
#if defined(__MIPS_IA__)
#include "kal_general_types.h"
#elif defined(__CORE_USIP1__)
#include "kal_public.h"
#endif

// include your own structure header file
#include "mt6293/CUIF/CUIF_SS_region.h"
#include "fec/inc/EXT_CUIF_FEC_region.h"
#include "dsp_header_define_cxif_ulsp.h"

// fec wbrp external CUIF composite data structure on EMI
typedef volatile struct {
    // dummy data - 4 bytes
    EXT_CUIF_DUMMY dummy_data;
    
    // SS report use
    kal_uint32 usip_vic_enable_report;
    kal_uint32 g_feature_check_pattern; 
    
    EXT_CUIF_FEC_region ext_fec_region;
    ulsp_info_t ulsp_data_fec;

} FEC_WBRP_EXT_CUIF_ALL_REGS;

// CUIF BASE on L1 & DSP
#if !defined(__LTE_L1SIM__) && defined(__CORE_USIP1__)
    extern volatile FEC_WBRP_EXT_CUIF_ALL_REGS ext_cuif_fec_wbrp;
    #define EXT_CUIF_FEC_WBRP_BASE ((kal_uint32)(&ext_cuif_fec_wbrp))
#else
    #include "mt6293/CUIF/dsp_memory_layout_custom.h"
#endif // !defined(__LTE_L1SIM__) && defined(__CORE_USIP1__)

// MACRO for accessing each MODULE and RAT
#define  DUMMY_MACRO                   ((EXT_CUIF_DUMMY *)           (EXT_CUIF_FEC_WBRP_BASE + offsetof(FEC_WBRP_EXT_CUIF_ALL_REGS, dummy_data)))

// SS
#define USIP_VIC_ENABLE_REPORT_FEC_PTR ((volatile kal_uint32*) (EXT_CUIF_FEC_WBRP_BASE + offsetof(FEC_WBRP_EXT_CUIF_ALL_REGS, usip_vic_enable_report)))
#define EXT_CUIF_G_FEATURE_CHECK_PATTERN_USIP1 ((volatile kal_uint32*) (EXT_CUIF_FEC_WBRP_BASE + offsetof(FEC_WBRP_EXT_CUIF_ALL_REGS, g_feature_check_pattern)))

#define  EXT_FEC_WBRP_FEC_L_TX_INFO    ((EXT_CUIF_FEC_l_tx_t *)      (EXT_CUIF_FEC_WBRP_BASE + offsetof(FEC_WBRP_EXT_CUIF_ALL_REGS, ext_fec_region.ext_cuif_fec_l_tx)))
// FEC
#define  EXT_CUIF_FEC_CTX_INFO         ((EXT_CUIF_FEC_CTX_INFO_t*)   (EXT_CUIF_FEC_WBRP_BASE + offsetof(FEC_WBRP_EXT_CUIF_ALL_REGS, ext_fec_region.ext_cuif_fec_ctx)))
#define  EXT_CUIF_FEC_CRX_INFO         ((EXT_CUIF_FEC_CRX_INFO_t*)   (EXT_CUIF_FEC_WBRP_BASE + offsetof(FEC_WBRP_EXT_CUIF_ALL_REGS, ext_fec_region.ext_cuif_fec_crx)))
#define  ULSP_INFO_ADDR_FEC            ((ulsp_info_t *)              (EXT_CUIF_FEC_WBRP_BASE + offsetof(FEC_WBRP_EXT_CUIF_ALL_REGS, ulsp_data_fec)))

// WBRP

#endif //INCLUDE_DSP_HEADER_ENABLE_FEC_WBRP
#endif
