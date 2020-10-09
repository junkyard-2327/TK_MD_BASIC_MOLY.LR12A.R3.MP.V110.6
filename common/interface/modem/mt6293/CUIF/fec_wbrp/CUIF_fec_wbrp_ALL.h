#ifndef INCLUDE_DSP_HEADER_ENABLE_FEC_WBRP
    #error "Please include CUIF_fec_wbrp_ALL.h via dsp_header_define_fec_wbrp.h"
#endif

#ifndef    __CUIF_FEC_WBRP_ALL_H__
#define    __CUIF_FEC_WBRP_ALL_H__

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
#include "fec/inc/CUIF_FEC_region.h"
#include "wbrp/inc/CUIF_WBRP.h"

// CUIF composite data structure in USIP0
typedef volatile struct {
    // RAT0
    CUIF_FEC_region fec_region;
    // RAT1
    CUIF_WBRP_region wbrp_region;
    kal_uint32 wbrp_region_end;
    // Reserve space for SS/ST, set as RW
    CUIF_SS_region ss_region;
    
    // Add for I cache debug Use
    kal_uint32 i_cache_dbg_handshake;
    kal_uint32 i_cache_dbg_iabtpc;
    
    kal_uint32 ss_region_end;

    // CUIF Structure Check 
    SS_CUIFStructPattern cuifstruct_check;
    
} FEC_WBRP_CUIF_ALL_REGS;

// CUIF BASE on L1 & DSP
#if !defined(__LTE_L1SIM__) && defined(__CORE_USIP1__)
    extern volatile FEC_WBRP_CUIF_ALL_REGS cuif_fec_wbrp;
    #define CUIF_FEC_WBRP_BASE ((kal_uint32)(&cuif_fec_wbrp))
#else
    #define CUIF_FEC_WBRP_BASE              ((kal_uint32)(0xA1145000)) // Bank A: L1 normal access.
    #define CUIF_FEC_WBRP_BUFFER_BASE       ((kal_uint32)(0xB1145000)) // Bank B: L1 WRITE with write buffer.
    #define CUIF_FEC_WBRP_FAST_READ         ((kal_uint32)(0xF1145000)) // Bank F: L1 WRITE with write buffer, and READ without waiting write buffer empty.
#endif

// MACRO for accessing each MODULE and RAT
// For SS use
#define FEC_WBRP_SS_BOOTINFO                ((SS_MD32_BootStatus*)       (CUIF_FEC_WBRP_BASE + offsetof(FEC_WBRP_CUIF_ALL_REGS, ss_region.boot)))
#define FEC_WBRP_SS_SLEEPINFO               ((SS_MD32_SLEEP_REL*)        (CUIF_FEC_WBRP_BASE + offsetof(FEC_WBRP_CUIF_ALL_REGS, ss_region.sleep_info)))
#define FEC_WBRP_SS_DDLINFO                 ((SS_MD32_DDLINFO*)          (CUIF_FEC_WBRP_BASE + offsetof(FEC_WBRP_CUIF_ALL_REGS, ss_region.DDLInfo)))
#define FEC_WBRP_SS_DBGINFO                 ((SS_DBGInfo*)               (CUIF_FEC_WBRP_BASE + offsetof(FEC_WBRP_CUIF_ALL_REGS, ss_region.dbg_reg)))
#define FEC_WBRP_SS_EXLOG                   ((SS_ExceptionAssertLog*)    (CUIF_FEC_WBRP_BASE + offsetof(FEC_WBRP_CUIF_ALL_REGS, ss_region.ex_log)))
#define FEC_WBRP_SS_ZIINFO                  ((SS_CUIF_ZIInfo_t*)         (CUIF_FEC_WBRP_BASE + offsetof(FEC_WBRP_CUIF_ALL_REGS, ss_region.cuif_zi_info)))
#define FEC_WBRP_SS_MDLINFO                 ((CUIF_MDLInfo*)             (CUIF_FEC_WBRP_BASE + offsetof(FEC_WBRP_CUIF_ALL_REGS, ss_region.cuif_mdl_used)))
#define FEC_WBRP_SS_CUIFCHECK               ((SS_CUIFStructPattern*)     (CUIF_FEC_WBRP_BASE + offsetof(FEC_WBRP_CUIF_ALL_REGS, cuifstruct_check)))

// Add for I cache debug Use
#define SS_USIP1_ICACHE_DBG_HANDSHAKE       ((kal_uint32*)               (CUIF_FEC_WBRP_BASE + offsetof(FEC_WBRP_CUIF_ALL_REGS, i_cache_dbg_handshake)))
#define SS_USIP1_ICACHE_DBG_IABTPC          ((kal_uint32*)               (CUIF_FEC_WBRP_BASE + offsetof(FEC_WBRP_CUIF_ALL_REGS, i_cache_dbg_iabtpc)))

// FEC
#define FEC_WBRP_FEC_REGION_BASE            ((CUIF_FEC_region*)          (CUIF_FEC_WBRP_BASE + offsetof(FEC_WBRP_CUIF_ALL_REGS, fec_region)))

#define FEC_WBRP_FEC_W_TX_INFO              ((FEC_W_TX_INFO_t*)          (CUIF_FEC_WBRP_BASE + offsetof(FEC_WBRP_CUIF_ALL_REGS, fec_region.fec_w_tx_cuif)))
#define FEC_WBRP_FEC_W_RX_INFO              ((FEC_W_RX_INFO_t*)          (CUIF_FEC_WBRP_BASE + offsetof(FEC_WBRP_CUIF_ALL_REGS, fec_region.fec_w_rx_cuif)))
#define FEC_WBRP_FEC_L_TX_INFO              ((FEC_L_TX_INFO_t*)          (CUIF_FEC_WBRP_BASE + offsetof(FEC_WBRP_CUIF_ALL_REGS, fec_region.fec_l_tx_cuif)))
#define FEC_WBRP_FEC_L_RX_INFO              ((FEC_L_RX_INFO_t*)          (CUIF_FEC_WBRP_BASE + offsetof(FEC_WBRP_CUIF_ALL_REGS, fec_region.fec_l_rx_cuif)))
#define FEC_WBRP_FEC_M_TX_INFO              ((FEC_M_TX_INFO_t*)          (CUIF_FEC_WBRP_BASE + offsetof(FEC_WBRP_CUIF_ALL_REGS, fec_region.fec_m_tx_cuif)))
#define FEC_WBRP_FEC_C_TX_INFO	           ((FEC_C_TX_INFO_t*)		     (CUIF_FEC_WBRP_BASE + offsetof(FEC_WBRP_CUIF_ALL_REGS, fec_region.fec_c_tx_cuif)))
#define FEC_WBRP_FEC_C_RX_INFO	           ((FEC_C_RX_INFO_t*)		     (CUIF_FEC_WBRP_BASE + offsetof(FEC_WBRP_CUIF_ALL_REGS, fec_region.fec_c_rx_cuif)))

//Bank B & F just for IA
#define FEC_WBRP_FEC_M_TX_INFO_BUFFERED     ((FEC_M_TX_INFO_t*)          (CUIF_FEC_WBRP_BUFFER_BASE + offsetof(FEC_WBRP_CUIF_ALL_REGS, fec_region.fec_m_tx_cuif)))
#define FEC_WBRP_FEC_L_TX_INFO_BUFFERED     ((FEC_L_TX_INFO_t*)          (CUIF_FEC_WBRP_BUFFER_BASE + offsetof(FEC_WBRP_CUIF_ALL_REGS, fec_region.fec_l_tx_cuif)))
#define FEC_WBRP_FEC_L_RX_INFO_BUFFERED     ((FEC_L_RX_INFO_t*)          (CUIF_FEC_WBRP_BUFFER_BASE + offsetof(FEC_WBRP_CUIF_ALL_REGS, fec_region.fec_l_rx_cuif)))
#define FEC_WBRP_FEC_L_RX_INFO_FAST_READ    ((FEC_L_RX_INFO_t*)          (CUIF_FEC_WBRP_FAST_READ   + offsetof(FEC_WBRP_CUIF_ALL_REGS, fec_region.fec_l_rx_cuif)))


//WBRP
#define FEC_WBRP_WR99_CUIF                  ((WR99_CUIF_REGS*)           (CUIF_FEC_WBRP_BASE + offsetof(FEC_WBRP_CUIF_ALL_REGS, wbrp_region.wbrp_cuif)))


// CUIF sub-region end
#include "CUIF_check_macro_fec_wbrp.h"

#endif //INCLUDE_DSP_HEADER_ENABLE_FEC_WBRP
#endif
