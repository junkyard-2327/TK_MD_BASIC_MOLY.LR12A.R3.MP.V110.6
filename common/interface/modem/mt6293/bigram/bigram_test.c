/* To compile this file in standalone way, use following compile option:
 * gcc -DMT6293 -DBIGRAM_GEN_REPORT -DSTANDALONE_TEST bigram_test.c
 * gcc -DMT6293L17 -DBIGRAM_GEN_REPORT -DSTANDALONE_TEST bigram_test.c
 * 
 * If you encounter problem when compiles, add -m32 to enforce build against 32-bit mode
 */


#include <stdio.h>

#if defined(STANDALONE_TEST)
    #define BIGRAM_PRINT printf
    typedef unsigned char kal_uint8;
    typedef unsigned short kal_uint16;
    typedef unsigned int kal_uint32;
    typedef int kal_int32;
    
#else
    #include "kal_public.h" // for dbg_print()
    
    // bigram_test.c is not compiled against modem.h, which had formal definition BIGRAM_PRINT
    // So I hack here, to direct BIGRAM_PRINT to mdprintf
    #define BIGRAM_PRINT dbg_print
#endif

#include "bigram_lte.h"
#include "bigram_lte_working.h"
#include "bigram_wcdma.h"
#include "bigram_tdscdma.h"
#include "bigram_c2k.h"
#include "bigram_rake.h"



inline void bigram_structure_check(void)
{
    bigram_structure_integrity_check(bigram_grp0_t);
    bigram_structure_integrity_check(bigram_grp1_t);

    // Check whether LTE-TDB/ LTE-FDB0 is continuous
    if((BIGRAM_TDB_LTE_ADDR + BIGRAM_TDB_LTE_SZ) != _BIGRAM_LTE_FDB0_ADDR) {
        BIGRAM_PRINT("TDB_LTE and LTE_FDB0 shall be continuous address\n");
        while(1);
    }

    // Check whether FDB0/ FDB1 is continuous
    if((_BIGRAM_LTE_FDB0_ADDR + BIGRAM_LTE_FDB0_SZ) != BIGRAM_LTE_FDB1_ADDR) {
        BIGRAM_PRINT("LTE_FDB0 and LTE_FDB1 shall be continuous address\n");
        while(1);
    }
    
    // Check whether BIGRAM_LTE_DMEM_ADDR == BIGRAM_LTE_FDB1_ADDR
    if(BIGRAM_LTE_DMEM_ADDR != BIGRAM_LTE_FDB1_ADDR) {
        BIGRAM_PRINT("BIGRAM_LTE_DMEM_ADDR != BIGRAM_LTE_FDB1_ADDR, error\n");
        while(1);
    }
    
#if defined(MT6293) || defined(MT6763) || defined(MT6771) || defined(MT6765) || defined(MT6761) || defined(MT6768)
    // NOMA structure check
    if(BIGRAM_LTE_NOMA_TMIMO_P0_ADDR + BIGRAM_LTE_CC_SZ != BIGRAM_LTE_NOMA_TMIMO_P1_ADDR) {
        BIGRAM_PRINT("BIGRAM_LTE_NOMA_TMIMO_P0 is not followed by BIGRAM_LTE_NOMA_TMIMO_P1_ADDR\n");
        while(1);
    }

    if(BIGRAM_LTE_NOMA_TMIMO_P1_ADDR + BIGRAM_LTE_DMRS_OC_SZ != BIGRAM_LTE_NOMA_TMIMO_P2_ADDR) {
        BIGRAM_PRINT("BIGRAM_LTE_NOMA_TMIMO_P1_ADDR is not followed by BIGRAM_LTE_NOMA_TMIMO_P2_ADDR\n");
        while(1);
    }

#endif

    bigram_structure_integrity_check(bigram_tdb_3g_t);
    bigram_structure_integrity_check(bigram_tdb_lte_t);

    // Check whether grp-1 size is too large
    if(BIGRAM_GRP1_PAD_SZ(_bigram_grp1_lte_t) < GRP0_SZ) {
        BIGRAM_PRINT("LTE Group-1 size exceeds limitation\n");
        while(1);
    }

    if(BIGRAM_GRP1_PAD_SZ(_bigram_grp1_wcdma_t) < GRP0_SZ) {
        BIGRAM_PRINT("WCDMA Group-1 size exceeds limitation\n");
        while(1);
    }
    if(BIGRAM_GRP1_PAD_SZ(_bigram_grp1_tdscdma_t) < GRP0_SZ) {
        BIGRAM_PRINT("TDSCDMA Group-1 size exceeds limitation\n");
        while(1);
    }

    if(BIGRAM_GRP1_PAD_SZ(_bigram_grp1_c2k_t) < GRP0_SZ) {
        BIGRAM_PRINT("C2K Group-1 size exceeds limitation\n");
        while(1);
    }
}

inline void bigram_coef_structure_check(void)
{
#if defined(BIGRAM_GEN_REPORT)
    BIGRAM_PRINT("---- BIGRAM_COEF ----\n");
    bigram_report_header();
#endif

    bigram_structure_integrity_check(bigram_coef_lte_crsne_t);
    bigram_structure_integrity_check(bigram_coef_lte_md_t);
    bigram_structure_integrity_check(bigram_coef_lte_ncm_t);
    bigram_structure_integrity_check(bigram_coef_lte_ulcce_t);
    bigram_structure_integrity_check(bigram_coef_lte_dmrsce_t);
    bigram_structure_integrity_check(bigram_coef_lte_csi_t);
    bigram_structure_integrity_check(bigram_coef_wcdma_t);
    bigram_structure_integrity_check(bigram_coef_tdscdma_t);
    bigram_structure_integrity_check(bigram_coef_c2k_coef_t);
    bigram_structure_integrity_check(bigram_coef_t);
}

inline void bigram_lte_structure_check(void)
{
    // BIGRAM_LTE_NON_OVERLAY_ADDR
#if defined(BIGRAM_GEN_REPORT)
    BIGRAM_PRINT("---- BIGRAM_LTE_NON_OVERLAY_ADDR ----\n");
    bigram_report_header();
#endif
    bigram_structure_integrity_check(bigram_lte_pos_t);
    bigram_structure_integrity_check(bigram_lte_csi_t);
    bigram_structure_integrity_check(bigram_lte_rtp_tde_t);
    bigram_structure_integrity_check(bigram_lte_non_overlay_t);

    // BIGRAM_LTE_NO_CC_ADDR
#if defined(BIGRAM_GEN_REPORT)
    BIGRAM_PRINT("---- BIGRAM_LTE_NO_CC_ADDR ----\n");
    bigram_report_header();
#endif
    bigram_structure_integrity_check(bigram_lte_ulcce_no_cc_t);
    bigram_structure_integrity_check(bigram_lte_ipd_t);
    bigram_structure_integrity_check(bigram_lte_agc_afc_t);
    bigram_structure_integrity_check(bigram_lte_crsdet_t);
    bigram_structure_integrity_check(bigram_lte_fwssd_oc_t);
    bigram_structure_integrity_check(bigram_lte_cmimo_t);
    bigram_structure_integrity_check(bigram_lte_no_cc_t);

    // BIGRAM_LTE_CC_ADDR
#if defined(BIGRAM_GEN_REPORT)
    BIGRAM_PRINT("---- BIGRAM_LTE_CC_ADDR ----\n");
    bigram_report_header();
#endif
    bigram_structure_integrity_check(bigram_lte_crsne_t);
    bigram_structure_integrity_check(bigram_lte_fwssd_cc_t);
    bigram_structure_integrity_check(bigram_lte_md_t);
    bigram_structure_integrity_check(bigram_lte_pirc_t);
    bigram_structure_integrity_check(bigram_lte_dmrsce_t);
    bigram_structure_integrity_check(bigram_lte_ulcce_t);
    bigram_structure_integrity_check(bigram_lte_pbchic_t);
    bigram_structure_integrity_check(bigram_lte_nbi_t);
    bigram_structure_integrity_check(bigram_lte_csi_cc_t);
    bigram_structure_integrity_check(bigram_lte_cc_t);

    // BIGRAM_LTE_VMEM_ADDR
#if defined(BIGRAM_GEN_REPORT)
    BIGRAM_PRINT("---- BIGRAM_LTE_VMEM_ADDR ----\n");
    bigram_report_header();
#endif
    bigram_structure_integrity_check(bigram_lte_vmem_t);

    // BIGRAM_LTE_RMEM_ADDR
#if defined(BIGRAM_GEN_REPORT)
    BIGRAM_PRINT("---- BIGRAM_LTE_RMEM_ADDR ----\n");
    bigram_report_header();
#endif
    bigram_structure_integrity_check(bigram_lte_rmem_t);
    
    // BIGRAM working buffer check
#if defined(BIGRAM_GEN_REPORT)
    BIGRAM_PRINT("---- BIGRAM_LTE_WBUF ----\n");
    bigram_report_header();
#endif
    bigram_structure_integrity_check(working_lte_crsce_self_with_ic);
    bigram_structure_integrity_check(working_lte_crsce_mmse);
    bigram_structure_integrity_check(working_lte_dmrsce);
    
}


inline void bigram_tdscdma_structure_check(void)
{
#if defined(BIGRAM_GEN_REPORT)
    BIGRAM_PRINT("---- BIGRAM_TDSCDMA structure check ----\n");
    bigram_report_header();
#endif
    bigram_structure_integrity_check(bigram_grp0_tdscdma_tdb_t);
    bigram_structure_integrity_check(bigram_grp1_tdscdma_static_buf_t);
    bigram_structure_integrity_check(bigram_grp1_tdscdma_cm_buf_t);
    bigram_structure_integrity_check(bigram_tdscdma_wbuf_ce_t);
    bigram_structure_integrity_check(bigram_tdscdma_wbuf_jd_t); 
    bigram_structure_integrity_check(bigram_tdscdma_wbuf_ttu_t);        
}


void bigram_c2k_structure_check(void)
{
#if defined(BIGRAM_GEN_REPORT)
    BIGRAM_PRINT("---- BIGRAM_C2K structure check ----\n");
    bigram_report_header();
#endif
    bigram_structure_integrity_check(bigram_grp1_c2k_eq_t);
    bigram_structure_integrity_check(bigram_grp1_c2k_ce_t);
    bigram_structure_integrity_check(bigram_grp1_c2k_wbuf_eq_t);
    bigram_structure_integrity_check(bigram_grp1_c2k_wbuf_ce_t);
}

inline void bigram_wcdma_structure_check(void)
{
#if defined(BIGRAM_GEN_REPORT)
    BIGRAM_PRINT("---- BIGRAM_WCDMA structure check ----\n");
    bigram_report_header();
#endif
    bigram_structure_integrity_check(bigram_grp1_wcdma_cc_hsce_t);
    bigram_structure_integrity_check(bigram_grp1_wcdma_cc_hseq_fd_t);
    bigram_structure_integrity_check(bigram_grp1_wcdma_cc_hseq_td_t);
    bigram_structure_integrity_check(bigram_grp1_wcdma_cc_hssrp_t);
    bigram_structure_integrity_check(bigram_grp1_wcdma_wbuf_t);
    bigram_structure_integrity_check(bigram_grp1_wcdma_cc_hseq_td2brp_t);
}


inline void bigram_rake_structure_check()
{
    #if defined(BIGRAM_GEN_REPORT)
        BIGRAM_PRINT("---- BIGRAM_RAKE_BRP_ADDR ---- \n");
        bigram_report_header();
    #endif
    bigram_structure_integrity_check(bigram_rake_brp_t);
    

    #if defined(BIGRAM_GEN_REPORT)
        BIGRAM_PRINT("---- BIGRAM_TDB_WCDMA_ADDR ---- \n");
        bigram_report_header();
    #endif
    bigram_structure_integrity_check(bigram_rake_tdb_t);
}

void bigram_common_print()
{
    BIGRAM_PRINT("\n---- GRP0 common region ----\n");
    BIGRAM_PRINT("BIGRAM_TDB_WCDMA_ADDR = %d\n",        BIGRAM_TDB_WCDMA_ADDR/1024);
    BIGRAM_PRINT("BIGRAM_TDB_TDSCDMA_ADDR = %d\n",      BIGRAM_TDB_TDSCDMA_ADDR/1024);
    BIGRAM_PRINT("BIGRAM_TDB_TDSCDMA_WBUF_ADDR = %d\n", BIGRAM_TDB_TDSCDMA_WBUF_ADDR/1024);
    BIGRAM_PRINT("BIGRAM_TDB_C2K_ADDR = %d\n",          BIGRAM_TDB_C2K_ADDR/1024);
    BIGRAM_PRINT("BIGRAM_TDB_C2K_EVDO_ADDR = %d\n",     BIGRAM_TDB_C2K_EVDO_ADDR/1024);
    BIGRAM_PRINT("BIGRAM_TDB_LTE_ADDR = %d\n",          BIGRAM_TDB_LTE_ADDR/1024);
    BIGRAM_PRINT("_BIGRAM_LTE_FDB0_ADDR = %d\n",        _BIGRAM_LTE_FDB0_ADDR/1024);
    BIGRAM_PRINT("BIGRAM_LTE_FDB0_ADDR = %d\n",        BIGRAM_LTE_FDB0_ADDR/1024);
    
    BIGRAM_PRINT("\n---- GRP1 common region ----\n");
    BIGRAM_PRINT("BIGRAM_LTE_NON_OVERLAY_ADDR = %d\n", BIGRAM_LTE_NON_OVERLAY_ADDR/1024);
    BIGRAM_PRINT("BIGRAM_TDD_CM_BUF_ADDR = %d\n", BIGRAM_TDD_CM_BUF_ADDR/1024);
    BIGRAM_PRINT("BIGRAM_RAKE_BRP_ADDR = %d\n", BIGRAM_RAKE_BRP_ADDR/1024);
    BIGRAM_PRINT("BIGRAM_MISC_ADDR = %d\n", BIGRAM_MISC_ADDR/1024);
    BIGRAM_PRINT("BIGRAM_COEF_ADDR = %d\n", BIGRAM_COEF_ADDR/1024);
    BIGRAM_PRINT("BIGRAM_WBUF_ADDR(0) = %d\n", BIGRAM_WBUF_ADDR(0)/1024);
    BIGRAM_PRINT("BIGRAM_WBUF_ADDR(1) = %d\n", BIGRAM_WBUF_ADDR(1)/1024);
}

void bigram_lte_print()
{
    BIGRAM_PRINT("\n---- LTE ----\n");
    BIGRAM_PRINT("LTE-grp0\n");
    BIGRAM_PRINT("BIGRAM_LTE_DMEM_ADDR = %d\n", BIGRAM_LTE_DMEM_ADDR/1024);
    BIGRAM_PRINT("BIGRAM_LTE_FDB1_ADDR = %d\n", BIGRAM_LTE_FDB1_ADDR/1024);
    BIGRAM_PRINT("BIGRAM_LTE_VMEM_ADDR = %d\n", BIGRAM_LTE_VMEM_ADDR/1024);
    
    BIGRAM_PRINT("LTE-grp1\n");
    BIGRAM_PRINT("BIGRAM_LTE_CC_ADDR(0) = %d\n", BIGRAM_LTE_CC_ADDR(0)/1024);
    BIGRAM_PRINT("BIGRAM_LTE_CC_ADDR(1) = %d\n", BIGRAM_LTE_CC_ADDR(1)/1024);
#if defined(MT6293) || defined(MT6763) || defined(MT6771) || defined(MT6765) || defined(MT6761) || defined(MT6768)
    BIGRAM_PRINT("BIGRAM_LTE_DMRS_OC_ADDR = %d\n", BIGRAM_LTE_DMRS_OC_ADDR/1024);
#endif
    BIGRAM_PRINT("BIGRAM_LTE_RMEM_ADDR = %d\n", BIGRAM_LTE_RMEM_ADDR/1024);
    BIGRAM_PRINT("BIGRAM_LTE_NO_CC_ADDR = %d\n", BIGRAM_LTE_NO_CC_ADDR/1024);
}


void bigram_wcdma_print()
{
    BIGRAM_PRINT("\n---- WCDMA SIZE ----\n");
    BIGRAM_PRINT("BIGRAM_WCDMA_CE_SZ = %d\n",    BIGRAM_WCDMA_CE_SZ  /1024  );
    BIGRAM_PRINT("BIGRAM_WCDMA_EQFD_SZ = %d\n",  BIGRAM_WCDMA_EQFD_SZ/1024  );
    BIGRAM_PRINT("BIGRAM_WCDMA_EQTD_SZ = %d\n",  BIGRAM_WCDMA_EQTD_SZ/1024  );
    BIGRAM_PRINT("BIGRAM_WCDMA_SRP_SZ = %d\n",   BIGRAM_WCDMA_SRP_SZ /1024  );
    BIGRAM_PRINT("BIGRAM_WCDMA_2BRP_SZ = %d\n",  BIGRAM_WCDMA_2BRP_SZ/1024  );

    BIGRAM_PRINT("\n---- WCDMA ADDR ----\n");

#if defined(MT6293) || defined(MT6763) || defined(MT6771) || defined(MT6765) || defined(MT6761) || defined(MT6768)
    BIGRAM_PRINT("BIGRAM_WCDMA_CE_ADDR(0)   = %d, BIGRAM_WCDMA_CE_ADDR(1)   = %d\n", BIGRAM_WCDMA_CC_HSCE_ADDR(0)/1024, BIGRAM_WCDMA_CC_HSCE_ADDR(1)/1024);
    BIGRAM_PRINT("BIGRAM_WCDMA_EQFD_ADDR(0) = %d, BIGRAM_WCDMA_EQFD_ADDR(1) = %d\n", BIGRAM_WCDMA_CC_HSEQ_FD_ADDR(0)/1024, BIGRAM_WCDMA_CC_HSEQ_FD_ADDR(1)/1024);
    BIGRAM_PRINT("BIGRAM_WCDMA_EQTD_ADDR(0) = %d, BIGRAM_WCDMA_EQTD_ADDR(1) = %d\n", BIGRAM_WCDMA_CC_HSEQ_TD_ADDR(0)/1024, BIGRAM_WCDMA_CC_HSEQ_TD_ADDR(1)/1024);
    BIGRAM_PRINT("BIGRAM_WCDMA_SRP_ADDR(0)  = %d, BIGRAM_WCDMA_SRP_ADDR(1)  = %d\n", BIGRAM_WCDMA_CC_HSSRP_ADDR(0)/1024, BIGRAM_WCDMA_CC_HSSRP_ADDR(1)/1024);
    BIGRAM_PRINT("BIGRAM_WCDMA_2BRP_ADDR(0) = %d, BIGRAM_WCDMA_2BRP_ADDR(1) = %d\n", BIGRAM_WCDMA_CC_HSEQ_TD2BRP_ADDR(0)/1024, BIGRAM_WCDMA_CC_HSEQ_TD2BRP_ADDR(1)/1024);
#endif    
#if defined(MT6293L17)
    BIGRAM_PRINT("BIGRAM_WCDMA_CE_ADDR(0)   = %d\n", BIGRAM_WCDMA_CC_HSCE_ADDR(0)/1024);
    BIGRAM_PRINT("BIGRAM_WCDMA_EQFD_ADDR(0) = %d\n", BIGRAM_WCDMA_CC_HSEQ_FD_ADDR(0)/1024);
    BIGRAM_PRINT("BIGRAM_WCDMA_EQTD_ADDR(0) = %d\n", BIGRAM_WCDMA_CC_HSEQ_TD_ADDR(0)/1024);
    BIGRAM_PRINT("BIGRAM_WCDMA_SRP_ADDR(0)  = %d\n", BIGRAM_WCDMA_CC_HSSRP_ADDR(0)/1024);
    BIGRAM_PRINT("BIGRAM_WCDMA_2BRP_ADDR(0) = %d\n", BIGRAM_WCDMA_CC_HSEQ_TD2BRP_ADDR(0)/1024);
#endif    
    BIGRAM_PRINT("\n---- WCDMA ----\n");
}

void bigram_tdscdma_print()
{
    BIGRAM_PRINT("\n---- TDSCDMA ----\n");
    BIGRAM_PRINT("BIGRAM_TDSCDMA_STATIC_BUF_ADDR = %d\n", BIGRAM_TDSCDMA_STATIC_BUF_ADDR/1024);
}

void bigram_c2k_print()
{
    BIGRAM_PRINT("\n---- C2K ----\n");
    BIGRAM_PRINT("BIGRAM_C2K_EQ_DATA_ADDR = %d\n", BIGRAM_C2K_EQ_DATA_ADDR/1024);
    BIGRAM_PRINT("BIGRAM_C2K_CE_ADDR = %d\n", BIGRAM_C2K_CE_ADDR/1024);
    BIGRAM_PRINT("BIGRAM_C2K_EVDO_BRP_ADDR = %d\n", BIGRAM_C2K_EVDO_BRP_ADDR/1024);
}


// This function is invoked by inner-thread IRAT start, which includes all tests
void bigram_check(void)
{
    bigram_structure_check();
    bigram_coef_structure_check();
    bigram_lte_structure_check();
    bigram_wcdma_structure_check();
    bigram_tdscdma_structure_check();
    bigram_rake_structure_check();
}

#if defined(STANDALONE_TEST)
int main()
{
    bigram_check();

    // Print debug information
    bigram_common_print();
    bigram_lte_print();
    bigram_wcdma_print();
    bigram_tdscdma_print();
    bigram_c2k_print();

    return 0;
}
#endif
