#ifndef INCLUDE_DSP_HEADER_ENABLE_INNER_BRP
    #error "Please include CUIF_inner_brp_ALL.h via dsp_header_define_inner_brp.h"
#endif

#ifndef        __CUIF_INNER_BRP_ALL_H__
#define        __CUIF_INNER_BRP_ALL_H__

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
#include "lte/inc/CUIF_LTE_ALL.h"
#include "wcdma/inc/CUIF_WCDMA_ALL.h"
#include "tdscdma/inc/CUIF_TDSCDMA_ALL.h"
#include "c2k/inc/CUIF_C2K_ALL.h"

#define INNER_LTE_ALL_CC_NUM 2

// CUIF composite data structure in USIP0
typedef volatile struct {
    // Reserve space for SS/ST, set as RW
    CUIF_SS_region inner_ss_region;
    
    CUIF_SS_region brp_ss_region;
    
    kal_uint32 ss_region_end;

    // Lite VIC Driver Use
    kal_uint32              inner_lite_vic_counter;
    kal_uint32              brp_lite_vic_counter;
    
    // LTE
    CUIF_LTE_ALL_REGS       LTE_ALL;
    kal_uint32              lte_cuif_region_end; // SS CUIF region check, used in dsp/md32/usip/common/service/cuif_check/src/inner_brp/
    
    // WCDMA_INNER
    CUIF_WCDMA_INNER_ALL_REGS     WCDMA_INNER_ALL[INNER_LTE_ALL_CC_NUM]; // extract cc dimension
    kal_uint32              wcdma_inner_cuif_region_end; // SS CUIF region check, used in dsp/md32/usip/common/service/cuif_check/src/inner_brp/

    // WCDMA_HRXBRP
    CUIF_WCDMA_HRXBRP_ALL_REGS    WCDMA_HRXBRP_ALL; 
    kal_uint32              wcdma_hrxbrp_cuif_region_end; // SS CUIF region check, used in dsp/md32/usip/common/service/cuif_check/src/inner_brp/
    
    // TDSCDMA
    CUIF_TDSCDMA_ALL_REGS   TDSCDMA_ALL;
    kal_uint32              tdscdma_cuif_region_end; // SS CUIF region check, used in dsp/md32/usip/common/service/cuif_check/src/inner_brp/
    
    // C2K
    CUIF_C2K_INNER_ALL_REGS       C2K_INNER_ALL;
    kal_uint32              c2k_cuif_region_end; // SS CUIF region check, used in dsp/md32/usip/common/service/cuif_check/src/inner_brp/
   
    // Add for I cache debug Use
    kal_uint32 i_cache_dbg_handshake;
    kal_uint32 i_cache_dbg_iabtpc;
    
    // CUIF Structure Check 
    SS_CUIFStructPattern cuifstruct_check;
    
} INNER_BRP_CUIF_ALL_REGS;

// CUIF BASE on L1 & DSP
#if !defined(__LTE_L1SIM__) && defined(__CORE_USIP0__)    
    extern volatile INNER_BRP_CUIF_ALL_REGS       cuif_inner_brp;
    #define CUIF_INNER_BRP_BASE                   ((kal_uint32)(&cuif_inner_brp))
#else
    #define CUIF_INNER_BRP_BASE                   ((kal_uint32)(0xA1047000)) // Bank A: L1 normal access.
    #define CUIF_INNER_BRP_BUFFER_BASE            ((kal_uint32)(0xB1047000)) // Bank B: L1 WRITE with write buffer.
    #define CUIF_INNER_BRP_FAST_READ              ((kal_uint32)(0xF1047000)) // Bank F: L1 WRITE with write buffer, and READ without waiting write buffer empty.
#endif


// MACRO for accessing each MODULE and RAT
// For SS use
#define INNER_SS_CUIFCHECK                        ((SS_CUIFStructPattern*)                (CUIF_INNER_BRP_BASE + offsetof(INNER_BRP_CUIF_ALL_REGS, cuifstruct_check))                                  )

#define INNER_SS_BOOTINFO                         ((SS_MD32_BootStatus*)                  (CUIF_INNER_BRP_BASE + offsetof(INNER_BRP_CUIF_ALL_REGS, inner_ss_region.boot))                              )
#define INNER_SS_SLEEPINFO                        ((SS_MD32_SLEEP_REL*)                   (CUIF_INNER_BRP_BASE + offsetof(INNER_BRP_CUIF_ALL_REGS, inner_ss_region.sleep_info))                        )
#define INNER_SS_DDLINFO                          ((SS_MD32_DDLINFO*)                     (CUIF_INNER_BRP_BASE + offsetof(INNER_BRP_CUIF_ALL_REGS, inner_ss_region.DDLInfo))                           )
#define INNER_SS_DBGINFO                          ((SS_DBGInfo*)                          (CUIF_INNER_BRP_BASE + offsetof(INNER_BRP_CUIF_ALL_REGS, inner_ss_region.dbg_reg))                           )
#define INNER_SS_EXLOG                            ((SS_ExceptionAssertLog*)               (CUIF_INNER_BRP_BASE + offsetof(INNER_BRP_CUIF_ALL_REGS, inner_ss_region.ex_log))                            )
#define INNER_SS_ZIINFO                           ((SS_CUIF_ZIInfo_t*)                    (CUIF_INNER_BRP_BASE + offsetof(INNER_BRP_CUIF_ALL_REGS, inner_ss_region.cuif_zi_info))                      )
#define INNER_SS_MDLINFO                          ((CUIF_MDLInfo*)                        (CUIF_INNER_BRP_BASE + offsetof(INNER_BRP_CUIF_ALL_REGS, inner_ss_region.cuif_mdl_used))                     )

#define BRP_SS_BOOTINFO                           ((SS_MD32_BootStatus*)                  (CUIF_INNER_BRP_BASE + offsetof(INNER_BRP_CUIF_ALL_REGS, brp_ss_region.boot))                                )
#define BRP_SS_SLEEPINFO                          ((SS_MD32_SLEEP_REL*)                   (CUIF_INNER_BRP_BASE + offsetof(INNER_BRP_CUIF_ALL_REGS, brp_ss_region.sleep_info))                          )
#define BRP_SS_DDLINFO                            ((SS_MD32_DDLINFO*)                     (CUIF_INNER_BRP_BASE + offsetof(INNER_BRP_CUIF_ALL_REGS, brp_ss_region.DDLInfo))                             )
#define BRP_SS_DBGINFO                            ((SS_DBGInfo*)                          (CUIF_INNER_BRP_BASE + offsetof(INNER_BRP_CUIF_ALL_REGS, brp_ss_region.dbg_reg))                             )
#define BRP_SS_EXLOG                              ((SS_ExceptionAssertLog*)               (CUIF_INNER_BRP_BASE + offsetof(INNER_BRP_CUIF_ALL_REGS, brp_ss_region.ex_log))                              )
#define BRP_SS_ZIINFO                             ((SS_CUIF_ZIInfo_t*)                    (CUIF_INNER_BRP_BASE + offsetof(INNER_BRP_CUIF_ALL_REGS, brp_ss_region.cuif_zi_info))                        )
#define BRP_SS_MDLINFO                            ((CUIF_MDLInfo*)                        (CUIF_INNER_BRP_BASE + offsetof(INNER_BRP_CUIF_ALL_REGS, brp_ss_region.cuif_mdl_used))                       )

// Add for I cache debug Use
#define SS_USIP0_ICACHE_DBG_HANDSHAKE             ((kal_uint32*)                          (CUIF_INNER_BRP_BASE + offsetof(INNER_BRP_CUIF_ALL_REGS, i_cache_dbg_handshake))                             )
#define SS_USIP0_ICACHE_DBG_IABTPC                ((kal_uint32*)                          (CUIF_INNER_BRP_BASE + offsetof(INNER_BRP_CUIF_ALL_REGS, i_cache_dbg_iabtpc))                                )

// Lite VIC Use
#define CUIF_INNER_LITE_VIC_COUNTER               ((kal_uint32*)                          (CUIF_INNER_BRP_BASE + offsetof(INNER_BRP_CUIF_ALL_REGS, inner_lite_vic_counter))                            )
#define CUIF_BRP_LITE_VIC_COUNTER                 ((kal_uint32*)                          (CUIF_INNER_BRP_BASE + offsetof(INNER_BRP_CUIF_ALL_REGS, brp_lite_vic_counter))                              )

// IRAT
#define CUIF_IRAT_CTRL                            ((kal_uint32*)                          (CUIF_INNER_BRP_BASE + offsetof(INNER_BRP_CUIF_ALL_REGS, irat_ctrl))                                         )

// LTE (always add three type of base address when you adding new define for LTE)
#define CUIF_LTE_ALL_REGS_BASE                    ((CUIF_LTE_ALL_REGS*)                   (CUIF_INNER_BRP_BASE        + offsetof(INNER_BRP_CUIF_ALL_REGS, LTE_ALL))                                    )
#define CUIF_LTE_ALL_REGS_BASE_BUFFERED           ((CUIF_LTE_ALL_REGS*)                   (CUIF_INNER_BRP_BUFFER_BASE + offsetof(INNER_BRP_CUIF_ALL_REGS, LTE_ALL))                                    )
#define CUIF_LTE_ALL_REGS_BASE_FAST_READ          ((CUIF_LTE_ALL_REGS*)                   (CUIF_INNER_BRP_FAST_READ   + offsetof(INNER_BRP_CUIF_ALL_REGS, LTE_ALL))                                    )

#define CUIF_LTE_CSI_SF_CMD                       ((CUIF_LTE_CSI_SF_CMD_REGS*)            (CUIF_INNER_BRP_BASE        + offsetof(INNER_BRP_CUIF_ALL_REGS, LTE_ALL.LTE_DSP_RO.LTE_CSI_SF_CMD))          )
#define CUIF_LTE_CSI_SF_CMD_BUFFERED              ((CUIF_LTE_CSI_SF_CMD_REGS*)            (CUIF_INNER_BRP_BUFFER_BASE + offsetof(INNER_BRP_CUIF_ALL_REGS, LTE_ALL.LTE_DSP_RO.LTE_CSI_SF_CMD))          )
#define CUIF_LTE_CSI_SF_CMD_FAST_READ             ((CUIF_LTE_CSI_SF_CMD_REGS*)            (CUIF_INNER_BRP_FAST_READ   + offsetof(INNER_BRP_CUIF_ALL_REGS, LTE_ALL.LTE_DSP_RO.LTE_CSI_SF_CMD))          )

#define CUIF_LTE_RX_SF_CMD                        ((CUIF_LTE_RX_SF_CMD_REGS*)             (CUIF_INNER_BRP_BASE        + offsetof(INNER_BRP_CUIF_ALL_REGS, LTE_ALL.LTE_DSP_RO.LTE_RX_SF_CMD))           )
#define CUIF_LTE_RX_SF_CMD_BUFFERED               ((CUIF_LTE_RX_SF_CMD_REGS*)             (CUIF_INNER_BRP_BUFFER_BASE + offsetof(INNER_BRP_CUIF_ALL_REGS, LTE_ALL.LTE_DSP_RO.LTE_RX_SF_CMD))           )
#define CUIF_LTE_RX_SF_CMD_FAST_READ              ((CUIF_LTE_RX_SF_CMD_REGS*)             (CUIF_INNER_BRP_FAST_READ   + offsetof(INNER_BRP_CUIF_ALL_REGS, LTE_ALL.LTE_DSP_RO.LTE_RX_SF_CMD))           )

#define CUIF_LTE_RX_STATIC_CMD                    ((CUIF_LTE_RX_STATIC_CMD_REGS*)         (CUIF_INNER_BRP_BASE        + offsetof(INNER_BRP_CUIF_ALL_REGS, LTE_ALL.LTE_DSP_RO.LTE_RX_STATIC_CMD))       )
#define CUIF_LTE_RX_STATIC_CMD_BUFFERED           ((CUIF_LTE_RX_STATIC_CMD_REGS*)         (CUIF_INNER_BRP_BUFFER_BASE + offsetof(INNER_BRP_CUIF_ALL_REGS, LTE_ALL.LTE_DSP_RO.LTE_RX_STATIC_CMD))       )
#define CUIF_LTE_RX_STATIC_CMD_FAST_READ          ((CUIF_LTE_RX_STATIC_CMD_REGS*)         (CUIF_INNER_BRP_FAST_READ   + offsetof(INNER_BRP_CUIF_ALL_REGS, LTE_ALL.LTE_DSP_RO.LTE_RX_STATIC_CMD))       )

#define CUIF_LTE_RSSI_CMD                         ((CUIF_LTE_RSSI_CMD_REGS*)              (CUIF_INNER_BRP_BASE        + offsetof(INNER_BRP_CUIF_ALL_REGS, LTE_ALL.LTE_DSP_RO.LTE_RSSI_CMD))            )
#define CUIF_LTE_RSSI_CMD_BUFFERED                ((CUIF_LTE_RSSI_CMD_REGS*)              (CUIF_INNER_BRP_BUFFER_BASE + offsetof(INNER_BRP_CUIF_ALL_REGS, LTE_ALL.LTE_DSP_RO.LTE_RSSI_CMD))            )
#define CUIF_LTE_RSSI_CMD_FAST_READ               ((CUIF_LTE_RSSI_CMD_REGS*)              (CUIF_INNER_BRP_FAST_READ   + offsetof(INNER_BRP_CUIF_ALL_REGS, LTE_ALL.LTE_DSP_RO.LTE_RSSI_CMD))            )

#define CUIF_LTE_NCM_FDB_INFO                     ((CUIF_LTE_NCM_FDB_INFO_REGS*)          (CUIF_INNER_BRP_BASE        + offsetof(INNER_BRP_CUIF_ALL_REGS, LTE_ALL.LTE_DSP_RO.LTE_NCM_FDB_INFO))         )
#define CUIF_LTE_NCM_FDB_INFO_BUFFERED            ((CUIF_LTE_NCM_FDB_INFO_REGS*)          (CUIF_INNER_BRP_BUFFER_BASE + offsetof(INNER_BRP_CUIF_ALL_REGS, LTE_ALL.LTE_DSP_RO.LTE_NCM_FDB_INFO))         )
#define CUIF_LTE_NCM_FDB_INFO_FAST_READ           ((CUIF_LTE_NCM_FDB_INFO_REGS*)          (CUIF_INNER_BRP_FAST_READ   + offsetof(INNER_BRP_CUIF_ALL_REGS, LTE_ALL.LTE_DSP_RO.LTE_NCM_FDB_INFO))         )

#define CUIF_LTE_NCM_OCC_CFG                      ((CUIF_LTE_NCM_OCC_CFG_REGS*)           (CUIF_INNER_BRP_BASE        + offsetof(INNER_BRP_CUIF_ALL_REGS, LTE_ALL.LTE_DSP_RO.LTE_NCM_OCC_CFG))         )
#define CUIF_LTE_NCM_OCC_CFG_BUFFERED             ((CUIF_LTE_NCM_OCC_CFG_REGS*)           (CUIF_INNER_BRP_BUFFER_BASE + offsetof(INNER_BRP_CUIF_ALL_REGS, LTE_ALL.LTE_DSP_RO.LTE_NCM_OCC_CFG))         )
#define CUIF_LTE_NCM_OCC_CFG_FAST_READ            ((CUIF_LTE_NCM_OCC_CFG_REGS*)           (CUIF_INNER_BRP_FAST_READ   + offsetof(INNER_BRP_CUIF_ALL_REGS, LTE_ALL.LTE_DSP_RO.LTE_NCM_OCC_CFG))         )

#define CUIF_LTE_NCM_1MS_CFG                      ((CUIF_LTE_NCM_1MS_CFG_REGS*)           (CUIF_INNER_BRP_BASE        + offsetof(INNER_BRP_CUIF_ALL_REGS, LTE_ALL.LTE_DSP_RO.LTE_NCM_1MS_CFG))         )
#define CUIF_LTE_NCM_1MS_CFG_BUFFERED             ((CUIF_LTE_NCM_1MS_CFG_REGS*)           (CUIF_INNER_BRP_BUFFER_BASE + offsetof(INNER_BRP_CUIF_ALL_REGS, LTE_ALL.LTE_DSP_RO.LTE_NCM_1MS_CFG))         )
#define CUIF_LTE_NCM_1MS_CFG_FAST_READ            ((CUIF_LTE_NCM_1MS_CFG_REGS*)           (CUIF_INNER_BRP_FAST_READ   + offsetof(INNER_BRP_CUIF_ALL_REGS, LTE_ALL.LTE_DSP_RO.LTE_NCM_1MS_CFG))         )

#define CUIF_LTE_CSI_RPT                          ((CUIF_LTE_CSI_RPT_REGS*)               (CUIF_INNER_BRP_BASE        + offsetof(INNER_BRP_CUIF_ALL_REGS, LTE_ALL.LTE_DSP_WO.LTE_CSI_RPT))             )
#define CUIF_LTE_CSI_RPT_BUFFERED                 ((CUIF_LTE_CSI_RPT_REGS*)               (CUIF_INNER_BRP_BUFFER_BASE + offsetof(INNER_BRP_CUIF_ALL_REGS, LTE_ALL.LTE_DSP_WO.LTE_CSI_RPT))             )
#define CUIF_LTE_CSI_RPT_FAST_READ                ((CUIF_LTE_CSI_RPT_REGS*)               (CUIF_INNER_BRP_FAST_READ   + offsetof(INNER_BRP_CUIF_ALL_REGS, LTE_ALL.LTE_DSP_WO.LTE_CSI_RPT))             )

#define CUIF_LTE_RX_RPT                           ((CUIF_LTE_RX_RPT_REGS*)                (CUIF_INNER_BRP_BASE        + offsetof(INNER_BRP_CUIF_ALL_REGS, LTE_ALL.LTE_DSP_WO.LTE_RX_RPT))              )
#define CUIF_LTE_RX_RPT_BUFFERED                  ((CUIF_LTE_RX_RPT_REGS*)                (CUIF_INNER_BRP_BUFFER_BASE + offsetof(INNER_BRP_CUIF_ALL_REGS, LTE_ALL.LTE_DSP_WO.LTE_RX_RPT))              )
#define CUIF_LTE_RX_RPT_FAST_READ                 ((CUIF_LTE_RX_RPT_REGS*)                (CUIF_INNER_BRP_FAST_READ   + offsetof(INNER_BRP_CUIF_ALL_REGS, LTE_ALL.LTE_DSP_WO.LTE_RX_RPT))              )

#define CUIF_LTE_RX_BRP_STATIC_COMM_RPT           ((CUIF_LTE_RX_BRP_STATIC_COMM_RPT_REGS*)(CUIF_INNER_BRP_BASE        + offsetof(INNER_BRP_CUIF_ALL_REGS, LTE_ALL.LTE_RW_ZI.LTE_BRP_STATIC_COMM_RPT)) )
#define CUIF_LTE_RX_BRP_STATIC_COMM_RPT_BUFFERED  ((CUIF_LTE_RX_BRP_STATIC_COMM_RPT_REGS*)(CUIF_INNER_BRP_BUFFER_BASE + offsetof(INNER_BRP_CUIF_ALL_REGS, LTE_ALL.LTE_RW_ZI.LTE_BRP_STATIC_COMM_RPT)) )
#define CUIF_LTE_RX_BRP_STATIC_COMM_RPT_FAST_READ ((CUIF_LTE_RX_BRP_STATIC_COMM_RPT_REGS*)(CUIF_INNER_BRP_FAST_READ   + offsetof(INNER_BRP_CUIF_ALL_REGS, LTE_ALL.LTE_RW_ZI.LTE_BRP_STATIC_COMM_RPT)) )

#define CUIF_LTE_BRP_RPT                          ((CUIF_LTE_BRP_RPT_REGS*)               (CUIF_INNER_BRP_BASE        + offsetof(INNER_BRP_CUIF_ALL_REGS, LTE_ALL.LTE_RW_ZI.LTE_BRP_RPT))             )
#define CUIF_LTE_BRP_RPT_BUFFERED                 ((CUIF_LTE_BRP_RPT_REGS*)               (CUIF_INNER_BRP_BUFFER_BASE + offsetof(INNER_BRP_CUIF_ALL_REGS, LTE_ALL.LTE_RW_ZI.LTE_BRP_RPT))             )
#define CUIF_LTE_BRP_RPT_FAST_READ                ((CUIF_LTE_BRP_RPT_REGS*)               (CUIF_INNER_BRP_FAST_READ   + offsetof(INNER_BRP_CUIF_ALL_REGS, LTE_ALL.LTE_RW_ZI.LTE_BRP_RPT))             )

#define CUIF_LTE_NCM_RPT                          ((CUIF_LTE_NCM_RPT_REGS*)               (CUIF_INNER_BRP_BASE        + offsetof(INNER_BRP_CUIF_ALL_REGS, LTE_ALL.LTE_DSP_WO.LTE_NCM_RPT))             )
#define CUIF_LTE_NCM_RPT_BUFFERED                 ((CUIF_LTE_NCM_RPT_REGS*)               (CUIF_INNER_BRP_BUFFER_BASE + offsetof(INNER_BRP_CUIF_ALL_REGS, LTE_ALL.LTE_DSP_WO.LTE_NCM_RPT))             )
#define CUIF_LTE_NCM_RPT_FAST_READ                ((CUIF_LTE_NCM_RPT_REGS*)               (CUIF_INNER_BRP_FAST_READ   + offsetof(INNER_BRP_CUIF_ALL_REGS, LTE_ALL.LTE_DSP_WO.LTE_NCM_RPT))             )

#define CUIF_LTE_RX_CTRL                          ((CUIF_LTE_RX_CTRL_REGS*)               (CUIF_INNER_BRP_BASE        + offsetof(INNER_BRP_CUIF_ALL_REGS, LTE_ALL.LTE_RW_ZI.LTE_RX_CTRL))              )
#define CUIF_LTE_RX_CTRL_BUFFERED                 ((CUIF_LTE_RX_CTRL_REGS*)               (CUIF_INNER_BRP_BUFFER_BASE + offsetof(INNER_BRP_CUIF_ALL_REGS, LTE_ALL.LTE_RW_ZI.LTE_RX_CTRL))              )
#define CUIF_LTE_RX_CTRL_FAST_READ                ((CUIF_LTE_RX_CTRL_REGS*)               (CUIF_INNER_BRP_FAST_READ   + offsetof(INNER_BRP_CUIF_ALL_REGS, LTE_ALL.LTE_RW_ZI.LTE_RX_CTRL))              )

#define CUIF_LTE_NCM_CTRL                         ((CUIF_LTE_NCM_CTRL_REGS*)              (CUIF_INNER_BRP_BASE        + offsetof(INNER_BRP_CUIF_ALL_REGS, LTE_ALL.LTE_RW_ZI.LTE_NCM_CTRL))             )
#define CUIF_LTE_NCM_CTRL_BUFFERED                ((CUIF_LTE_NCM_CTRL_REGS*)              (CUIF_INNER_BRP_BUFFER_BASE + offsetof(INNER_BRP_CUIF_ALL_REGS, LTE_ALL.LTE_RW_ZI.LTE_NCM_CTRL))             )
#define CUIF_LTE_NCM_CTRL_FAST_READ               ((CUIF_LTE_NCM_CTRL_REGS*)              (CUIF_INNER_BRP_FAST_READ   + offsetof(INNER_BRP_CUIF_ALL_REGS, LTE_ALL.LTE_RW_ZI.LTE_NCM_CTRL))             )

#define CUIF_LTE_NCM_ACTIVE_RAT_INFO              ((CUIF_LTE_NCM_ACTIVE_RAT_INFO_REGS*)   (CUIF_INNER_BRP_BASE        + offsetof(INNER_BRP_CUIF_ALL_REGS, LTE_ALL.LTE_RW_ZI.LTE_NCM_ACTIVE_RAT_INFO))  )
#define CUIF_LTE_NCM_ACTIVE_RAT_INFO_BUFFERED     ((CUIF_LTE_NCM_ACTIVE_RAT_INFO_REGS*)   (CUIF_INNER_BRP_BUFFER_BASE + offsetof(INNER_BRP_CUIF_ALL_REGS, LTE_ALL.LTE_RW_ZI.LTE_NCM_ACTIVE_RAT_INFO))  )
#define CUIF_LTE_NCM_ACTIVE_RAT_INFO_FAST_READ    ((CUIF_LTE_NCM_ACTIVE_RAT_INFO_REGS*)   (CUIF_INNER_BRP_FAST_READ   + offsetof(INNER_BRP_CUIF_ALL_REGS, LTE_ALL.LTE_RW_ZI.LTE_NCM_ACTIVE_RAT_INFO))  )

#define CUIF_LTE_NCM_AGC_INFO                     ((CUIF_LTE_NCM_AGC_INFO_REGS*)          (CUIF_INNER_BRP_BASE        + offsetof(INNER_BRP_CUIF_ALL_REGS, LTE_ALL.LTE_RW_ZI.LTE_NCM_AGC_INFO))         )
#define CUIF_LTE_NCM_AGC_INFO_BUFFERED            ((CUIF_LTE_NCM_AGC_INFO_REGS*)          (CUIF_INNER_BRP_BUFFER_BASE + offsetof(INNER_BRP_CUIF_ALL_REGS, LTE_ALL.LTE_RW_ZI.LTE_NCM_AGC_INFO))         )
#define CUIF_LTE_NCM_AGC_INFO_FAST_READ           ((CUIF_LTE_NCM_AGC_INFO_REGS*)          (CUIF_INNER_BRP_FAST_READ   + offsetof(INNER_BRP_CUIF_ALL_REGS, LTE_ALL.LTE_RW_ZI.LTE_NCM_AGC_INFO))         )

#define CUIF_LTE_DSP_RO                           ((CUIF_LTE_DSP_RO_REGS*)                (CUIF_INNER_BRP_BASE        + offsetof(INNER_BRP_CUIF_ALL_REGS, LTE_ALL.LTE_DSP_RO))                         )
#define CUIF_LTE_DSP_RO_BUFFERED                  ((CUIF_LTE_DSP_RO_REGS*)                (CUIF_INNER_BRP_BUFFER_BASE + offsetof(INNER_BRP_CUIF_ALL_REGS, LTE_ALL.LTE_DSP_RO))                         )
#define CUIF_LTE_DSP_RO_FAST_READ                 ((CUIF_LTE_DSP_RO_REGS*)                (CUIF_INNER_BRP_FAST_READ   + offsetof(INNER_BRP_CUIF_ALL_REGS, LTE_ALL.LTE_DSP_RO))                         )

#define CUIF_LTE_DSP_WO                           ((CUIF_LTE_DSP_WO_REGS*)                (CUIF_INNER_BRP_BASE        + offsetof(INNER_BRP_CUIF_ALL_REGS, LTE_ALL.LTE_DSP_WO))                         )
#define CUIF_LTE_DSP_WO_BUFFERED                  ((CUIF_LTE_DSP_WO_REGS*)                (CUIF_INNER_BRP_BUFFER_BASE + offsetof(INNER_BRP_CUIF_ALL_REGS, LTE_ALL.LTE_DSP_WO))                         )
#define CUIF_LTE_DSP_WO_FAST_READ                 ((CUIF_LTE_DSP_WO_REGS*)                (CUIF_INNER_BRP_FAST_READ   + offsetof(INNER_BRP_CUIF_ALL_REGS, LTE_ALL.LTE_DSP_WO))                         )

#define CUIF_LTE_RW_ZI                            ((CUIF_LTE_RW_ZI_REGS*)                 (CUIF_INNER_BRP_BASE        + offsetof(INNER_BRP_CUIF_ALL_REGS, LTE_ALL.LTE_RW_ZI))                          )
#define CUIF_LTE_RW_ZI_BUFFERED                   ((CUIF_LTE_RW_ZI_REGS*)                 (CUIF_INNER_BRP_BUFFER_BASE + offsetof(INNER_BRP_CUIF_ALL_REGS, LTE_ALL.LTE_RW_ZI))                          )
#define CUIF_LTE_RW_ZI_FAST_READ                  ((CUIF_LTE_RW_ZI_REGS*)                 (CUIF_INNER_BRP_FAST_READ   + offsetof(INNER_BRP_CUIF_ALL_REGS, LTE_ALL.LTE_RW_ZI))                          )

#define CUIF_LTE_POS_TD2FD_CMD                    ((CUIF_LTE_POS_T2F_CMD_REGS*)           (CUIF_INNER_BRP_BASE        + offsetof(INNER_BRP_CUIF_ALL_REGS, LTE_ALL.LTE_DSP_RO.LTE_POS_T2F_CMD))         )
#define CUIF_LTE_POS_TD2FD_CMD_BUFFERED           ((CUIF_LTE_POS_T2F_CMD_REGS*)           (CUIF_INNER_BRP_BUFFER_BASE + offsetof(INNER_BRP_CUIF_ALL_REGS, LTE_ALL.LTE_DSP_RO.LTE_POS_T2F_CMD))         )
#define CUIF_LTE_POS_TD2FD_CMD_FAST_READ          ((CUIF_LTE_POS_T2F_CMD_REGS*)           (CUIF_INNER_BRP_FAST_READ   + offsetof(INNER_BRP_CUIF_ALL_REGS, LTE_ALL.LTE_DSP_RO.LTE_POS_T2F_CMD))         )

#define CUIF_LTE_POS_CELL_CMD(i)                  ((CUIF_LTE_POS_CELL_CMD_REGS*)          (CUIF_INNER_BRP_BASE        + offsetof(INNER_BRP_CUIF_ALL_REGS, LTE_ALL.LTE_DSP_RO.LTE_POS_CELL_CMD[i]))     ) 
#define CUIF_LTE_POS_CELL_CMD_BUFFERED(i)         ((CUIF_LTE_POS_CELL_CMD_REGS*)          (CUIF_INNER_BRP_BUFFER_BASE + offsetof(INNER_BRP_CUIF_ALL_REGS, LTE_ALL.LTE_DSP_RO.LTE_POS_CELL_CMD[i]))     ) 
#define CUIF_LTE_POS_CELL_CMD_FAST_READ(i)        ((CUIF_LTE_POS_CELL_CMD_REGS*)          (CUIF_INNER_BRP_FAST_READ   + offsetof(INNER_BRP_CUIF_ALL_REGS, LTE_ALL.LTE_DSP_RO.LTE_POS_CELL_CMD[i]))     ) 

#define CUIF_LTE_POS_RPT(i)                       ((CUIF_LTE_POS_RPT_REGS*)               (CUIF_INNER_BRP_BASE        + offsetof(INNER_BRP_CUIF_ALL_REGS, LTE_ALL.LTE_RW_ZI.LTE_POS_RPT[i]))          )
#define CUIF_LTE_POS_RPT_BUFFERED(i)              ((CUIF_LTE_POS_RPT_REGS*)               (CUIF_INNER_BRP_BUFFER_BASE + offsetof(INNER_BRP_CUIF_ALL_REGS, LTE_ALL.LTE_RW_ZI.LTE_POS_RPT[i]))          )
#define CUIF_LTE_POS_RPT_FAST_READ(i)             ((CUIF_LTE_POS_RPT_REGS*)               (CUIF_INNER_BRP_FAST_READ   + offsetof(INNER_BRP_CUIF_ALL_REGS, LTE_ALL.LTE_RW_ZI.LTE_POS_RPT[i]))          )

// WCDMA
#define CUIF_WCDMA_INNER_ALL_PTR_FOR_ZI           ((CUIF_WCDMA_INNER_ALL_REGS**)          (CUIF_INNER_BRP_BASE + offsetof(INNER_BRP_CUIF_ALL_REGS, WCDMA_INNER_ALL))                                   )

//#define CUIF_WCDMA_ALL_REGS(x)                  ((CUIF_WCDMA_HSCTRL_CC##x##_REGS*)      (CUIF_INNER_BRP_BASE + offsetof(INNER_BRP_CUIF_ALL_REGS, WCDMA_ALL.WCDMA_HSCTRL.WCDMA_HSCTRL_CC##x))         )
#define CUIF_WCDMA_HSCE(x)                        ((CUIF_WCDMA_HSCE_REGS*)                (CUIF_INNER_BRP_BASE + offsetof(INNER_BRP_CUIF_ALL_REGS, WCDMA_INNER_ALL[x].WCDMA_HSCE))                     )
#define CUIF_WCDMA_HSCTRL(x)                      ((CUIF_WCDMA_HSCTRL_REGS*)              (CUIF_INNER_BRP_BASE + offsetof(INNER_BRP_CUIF_ALL_REGS, WCDMA_INNER_ALL[x].WCDMA_HSCTRL))                   )
//#define CUIF_WCDMA_HSEQ_CC(x)                   ((CUIF_WCDMA_HSEQ_CC##x##_REGS*)        (CUIF_INNER_BRP_BASE + offsetof(INNER_BRP_CUIF_ALL_REGS, WCDMA_ALL.WCDMA_HSEQ.WCDMA_HSEQ_CC##x))             )
#define CUIF_WCDMA_HSEQ(x)                        ((CUIF_WCDMA_HSEQ_REGS*)                (CUIF_INNER_BRP_BASE + offsetof(INNER_BRP_CUIF_ALL_REGS, WCDMA_INNER_ALL[x].WCDMA_HSEQ))                     )
#define CUIF_WCDMA_HSRP(x)                        ((CUIF_WCDMA_HSRP_REGS*)                (CUIF_INNER_BRP_BASE + offsetof(INNER_BRP_CUIF_ALL_REGS, WCDMA_INNER_ALL[x].WCDMA_HSRP))                     )
#define CUIF_WCDMA_HRXBRP                         ((CUIF_WCDMA_HRXBRP_REGS*)              (CUIF_INNER_BRP_BASE + offsetof(INNER_BRP_CUIF_ALL_REGS, WCDMA_HRXBRP_ALL.WCDMA_HRXBRP))                     )

// TDSCDMA
#define TDSCDMA_TOP_CUIF_CFG                      ((TDSCDMA_TOP_CUIF_CFG_REGS*)           (CUIF_INNER_BRP_BASE + offsetof(INNER_BRP_CUIF_ALL_REGS, TDSCDMA_ALL.TDSCDMA_TOP_CFG))                       )
#define TDSCDMA_CROSS_CUIF_CFG                    ((TDSCDMA_CROSS_CUIF_CFG_REGS*)         (CUIF_INNER_BRP_BASE + offsetof(INNER_BRP_CUIF_ALL_REGS, TDSCDMA_ALL.TDSCDMA_CROSS_CFG))                     )
#define TDSCDMA_CE_CUIF_CFG                       ((TDSCDMA_CE_CUIF_CFG_REGS*)            (CUIF_INNER_BRP_BASE + offsetof(INNER_BRP_CUIF_ALL_REGS, TDSCDMA_ALL.TDSCDMA_CE_CFG))                        )
#define TDSCDMA_TTU_CUIF_CFG                      ((TDSCDMA_TTU_CUIF_CFG_REGS*)           (CUIF_INNER_BRP_BASE + offsetof(INNER_BRP_CUIF_ALL_REGS, TDSCDMA_ALL.TDSCDMA_TTU_CFG))                       )
#define TDSCDMA_JD_CUIF_CFG                       ((TDSCDMA_JD_CUIF_CFG_REGS*)            (CUIF_INNER_BRP_BASE + offsetof(INNER_BRP_CUIF_ALL_REGS, TDSCDMA_ALL.TDSCDMA_JD_CFG))                        )
#define TDSCDMA_SRP_CUIF_CFG                      ((TDSCDMA_SRP_CUIF_CFG_REGS*)           (CUIF_INNER_BRP_BASE + offsetof(INNER_BRP_CUIF_ALL_REGS, TDSCDMA_ALL.TDSCDMA_SRP_CFG))                       )
#define TDSCDMA_MXC_CUIF_CFG                      ((TDSCDMA_MXC_CUIF_CFG_REGS*)           (CUIF_INNER_BRP_BASE + offsetof(INNER_BRP_CUIF_ALL_REGS, TDSCDMA_ALL.TDSCDMA_MXC_CFG))                       )
#define TDSCDMA_TOP_CUIF_RPRT                     ((TDSCDMA_TOP_CUIF_RPRT_REGS*)          (CUIF_INNER_BRP_BASE + offsetof(INNER_BRP_CUIF_ALL_REGS, TDSCDMA_ALL.TDSCDMA_TOP_RPRT))                      )
#define TDSCDMA_CE_CUIF_RPRT                      ((TDSCDMA_CE_CUIF_RPRT_REGS*)           (CUIF_INNER_BRP_BASE + offsetof(INNER_BRP_CUIF_ALL_REGS, TDSCDMA_ALL.TDSCDMA_CE_RPRT))                       )
#define TDSCDMA_TTU_CUIF_RPRT                     ((TDSCDMA_TTU_CUIF_RPRT_REGS*)          (CUIF_INNER_BRP_BASE + offsetof(INNER_BRP_CUIF_ALL_REGS, TDSCDMA_ALL.TDSCDMA_TTU_RPRT))                      )
#define TDSCDMA_SRP_CUIF_RPRT                     ((TDSCDMA_SRP_CUIF_RPRT_REGS*)          (CUIF_INNER_BRP_BASE + offsetof(INNER_BRP_CUIF_ALL_REGS, TDSCDMA_ALL.TDSCDMA_SRP_RPRT))                      )
#define TDSCDMA_MXC_CUIF_RPRT                     ((TDSCDMA_MXC_CUIF_RPRT_REGS*)          (CUIF_INNER_BRP_BASE + offsetof(INNER_BRP_CUIF_ALL_REGS, TDSCDMA_ALL.TDSCDMA_MXC_RPRT))                      )

// C2K
#define CUIF_C2K_EVDO                             ((CUIF_C2K_EVDO_REGS*)                  (CUIF_INNER_BRP_BASE + offsetof(INNER_BRP_CUIF_ALL_REGS, C2K_INNER_ALL.C2K_EVDO))                            )

// CUIF sub-region end
#include "CUIF_check_macro_inner_brp.h"

#endif //INCLUDE_DSP_HEADER_ENABLE_INNER_BRP
#endif
