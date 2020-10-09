/******************************************************************************
 *  Copyright Statement:
 *  --------------------
 *  This software is protected by Copyright and the information contained
 *  herein is confidential. The software may not be copied and the information
 *  contained herein may not be used or disclosed except with the written
 *  permission of MediaTek Inc. (C) 2016
 *
 *****************************************************************************/

/******************************************************************************
 * Public header for some MIPS iA utils
 *****************************************************************************/

#ifndef __MIPS_IA_UTILS_PUBLIC_H__
#define __MIPS_IA_UTILS_PUBLIC_H__

/* First undefine all config option, them config by project */
#undef CONFIG_MIPS_IA_MR2
#undef CONFIG_MIPS_IA_VPE1_DISABLE_VPE0_RPS
#undef CONFIG_EHB_FOR_DMT_DVPE_HAZARD
#undef CONFIG_MIPS_IA_DISABLE_BUSSLP

#if defined(MT6763) || defined(MT6739) || defined(MT6771) || defined(MT6765) || defined(MT6761) || defined(MT6768)
# define CONFIG_MIPS_IA_MR2
#if !defined(__RPS_DISABLE__)
# define CONFIG_MIPS_IA_VPE1_DISABLE_VPE0_RPS
#endif 
# define CONFIG_EHB_FOR_DMT_DVPE_HAZARD
# define CONFIG_MIPS_IA_DISABLE_BUSSLP
#elif defined(MT6295M)
# define CONFIG_MIPS_IA_MR3
# define CONFIG_MIPS_IA_VPE1_DISABLE_VPE0_RPS
# define CONFIG_EHB_FOR_DMT_DVPE_HAZARD
//# define CONFIG_MIPS_IA_DISABLE_BUSSLP
#endif

/*
 * C0 register definition from MD00904, Rev 01.04
 * MIPS32 Coprocessor 0 register "$numbers,select"
 */
#define MIU_C0_INDEX            "$0,0"
#define MIU_C0_MVPCONTROL       "$0,1"
#define MIU_C0_MVPCONF0         "$0,2"
#define MIU_C0_MVPCONF1         "$0,3"
#define MIU_C0_RANDOM           "$1,0"
#define MIU_C0_VPECONTROL       "$1,1"
#define MIU_C0_VPECONF0         "$1,2"
#define MIU_C0_VPECONF1         "$1,3"
#define MIU_C0_YQMASK           "$1,4"
#define MIU_C0_VPESCHEDULE      "$1,5"
#define MIU_C0_VPESCHEFBACK     "$1,6"
#define MIU_C0_VPEOPT           "$1,7"
#define MIU_C0_ENTRYLO0         "$2,0"
#define MIU_C0_TCSTATUS         "$2,1"
#define MIU_C0_TCBIND           "$2,2"
#define MIU_C0_TCRESTART        "$2,3"
#define MIU_C0_TCHALT           "$2,4"
#define MIU_C0_TCCONTEXT        "$2,5"
#define MIU_C0_TCSCHEDULE       "$2,6"
#define MIU_C0_TCSCHEFBACK      "$2,7"
#define MIU_C0_ENTRYLO1         "$3,0"
#define MIU_C0_TCOPT            "$3,7"
#define MIU_C0_CONTEXT          "$4,0"
#define MIU_C0_CONTEXTCONFIG    "$4,1"
#define MIU_C0_USERLOCAL        "$4,2"
#define MIU_C0_PAGEMASK         "$5,0"
#define MIU_C0_PAGEGRAIN        "$5,1"
#define MIU_C0_SEGCTL0          "$5,2"
#define MIU_C0_SEGCTL1          "$5,3"
#define MIU_C0_SEGCTL2          "$5,4"
#define MIU_C0_WIRED            "$6,0"
#define MIU_C0_SRSCONF0         "$6,1"
#define MIU_C0_SRSCONF1         "$6,2"
#define MIU_C0_SRSCONF2         "$6,3"
#define MIU_C0_SRSCONF3         "$6,4"
#define MIU_C0_SRSCONF4         "$6,5"
#define MIU_C0_HWRENA           "$7,0"
#define MIU_C0_BADVADDR         "$8,0"
#define MIU_C0_COUNT            "$9,0"
#define MIU_C0_ENTRYHI          "$10,0"
#define MIU_C0_COMPARE          "$11,0"
#define MIU_C0_STATUS           "$12,0"
#define MIU_C0_INTCTL           "$12,1"
#define MIU_C0_SRSCTL           "$12,2"
#define MIU_C0_SRSMAP           "$12,3"
#define MIU_C0_CAUSE            "$13,0"
#define MIU_C0_EPC              "$14,0"
#define MIU_C0_PRID             "$15,0"
#define MIU_C0_EBASE            "$15,1"
#define MIU_C0_CDMMBASE         "$15,2"
#define MIU_C0_CMGCR            "$15,3"
#define MIU_C0_CONFIG           "$16,0"
#define MIU_C0_CONFIG1          "$16,1"
#define MIU_C0_CONFIG2          "$16,2"
#define MIU_C0_CONFIG3          "$16,3"
#define MIU_C0_CONFIG4          "$16,4"
#define MIU_C0_CONFIG5          "$16,5"
#define MIU_C0_CONFIG7          "$16,7"
#define MIU_C0_LLADDR           "$17,0"
#define MIU_C0_WATCHLO0         "$18,0"
#define MIU_C0_WATCHLO1         "$18,1"
#define MIU_C0_WATCHLO2         "$18,2"
#define MIU_C0_WATCHLO3         "$18,3"
#define MIU_C0_WATCHHI0         "$19,0"
#define MIU_C0_WATCHHI1         "$19,1"
#define MIU_C0_WATCHHI2         "$19,2"
#define MIU_C0_WATCHHI3         "$19,3"
#define MIU_C0_DEBUG            "$23,0"
#define MIU_C0_TRACECONTROL     "$23,1"
#define MIU_C0_TRACECONTROL2    "$23,2"
#define MIU_C0_USERTRACEDATA1   "$23,3"
#define MIU_C0_TRACEIBPC        "$23,4"
#define MIU_C0_TRACEDBPC        "$23,5"
#define MIU_C0_DEPC             "$24,0"
#define MIU_C0_TRACECONTROL3    "$24,2"
#define MIU_C0_USERTRACEDATA2   "$24,3"
#define MIU_C0_PERFCTL0         "$25,0"
#define MIU_C0_PERFCNT0         "$25,1"
#define MIU_C0_PERFCTL1         "$25,2"
#define MIU_C0_PERFCNT1         "$25,3"
#define MIU_C0_ERRCTL           "$26,0"
#define MIU_C0_CACHEERR         "$27,0"
#define MIU_C0_ITAGLO           "$28,0"
#define MIU_C0_IDATALO          "$28,1"
#define MIU_C0_DTAGLO           "$28,2"
#define MIU_C0_DDATALO          "$28,3"
#define MIU_C0_L23TAGLO         "$28,4"
#define MIU_C0_L23DATALO        "$28,5"
#define MIU_C0_IDATAHI          "$29,1"
#define MIU_C0_DTAGHI           "$29,2"
#define MIU_C0_L23DATAHI        "$29,5"
#define MIU_C0_ERROREPC         "$30,0"
#define MIU_C0_DESAVE           "$31,0"
#define MIU_C0_KSCRATCH1        "$31,2"
#define MIU_C0_KSCRATCH2        "$31,3"
#define MIU_C0_KSCRATCH3        "$31,4"

#define MIU_RDHWR_CPUNUM        "$0"

/* MIPS32 PerfCnt Register (CP0 Register 25) */
/* TODO: clean it up */
#define MIU_PERFCNT_M                   0x80000000
#define MIU_PERFCNT_EVENT_MASK          0x000007e0
#define MIU_PERFCNT_EVENTMASK           0x000007e0
#define MIU_PERFCNT_EVENT_SHIFT         5
#define MIU_PERFCNT_EVENTSHIFT          5
#define MIU_PERFCNT_EVENT_BITS          6
#define MIU_PERFCNT_IE                  0x00000010
#define MIU_PERFCNT_U                   0x00000008
#define MIU_PERFCNT_S                   0x00000004
#define MIU_PERFCNT_K                   0x00000002
#define MIU_PERFCNT_EXL                 0x00000001

/* C0_MVPCONTROL */
#define MIU_C0_MVPCONTROL_EVP_BITFIELD_BEG      (0 )
#define MIU_C0_MVPCONTROL_EVP_BITFIELD_END      (0 )
#define MIU_C0_MVPCONTROL_VPC_BITFIELD_BEG      (1 )
#define MIU_C0_MVPCONTROL_VPC_BITFIELD_END      (1 )
#define MIU_C0_MVPCONTROL_STLB_BITFIELD_BEG     (2 )
#define MIU_C0_MVPCONTROL_STLB_BITFIELD_END     (2 )
#define MIU_C0_MVPCONTROL_CPA_BITFIELD_BEG      (3 )
#define MIU_C0_MVPCONTROL_CPA_BITFIELD_END      (3 )

/* C0_VPECONTROL */
#define MIU_C0_VPECONTROL_TARGTC_BITFIELD_BEG   (0 )
#define MIU_C0_VPECONTROL_TARGTC_BITFIELD_END   (7 )
#define MIU_C0_VPECONTROL_TE_BITFIELD_BEG       (15)
#define MIU_C0_VPECONTROL_TE_BITFIELD_END       (15)
#define MIU_C0_VPECONTROL_EXCPT_BITFIELD_BEG    (16)
#define MIU_C0_VPECONTROL_EXCPT_BITFIELD_END    (18)
#define MIU_C0_VPECONTROL_GSI_BITFIELD_BEG      (20)
#define MIU_C0_VPECONTROL_GSI_BITFIELD_END      (20)
#define MIU_C0_VPECONTROL_YSI_BITFIELD_BEG      (21)
#define MIU_C0_VPECONTROL_YSI_BITFIELD_END      (21)

/* C0_TCBIND */
#define MIU_C0_TCBIND_CURVPE_BITFIELD_BEG       (0 )
#define MIU_C0_TCBIND_CURVPE_BITFIELD_END       (3 )
#define MIU_C0_TCBIND_TBE_BITFIELD_BEG          (17)
#define MIU_C0_TCBIND_TBE_BITFIELD_END          (17)
#define MIU_C0_TCBIND_CURTC_BITFIELD_BEG        (21)
#define MIU_C0_TCBIND_CURTC_BITFIELD_END        (28)

/* C0_PERFCTL */
#define MIU_C0_PERFCTL_EXL_BITFIELD_BEG         (0 )
#define MIU_C0_PERFCTL_EXL_BITFIELD_END         (0 )
#define MIU_C0_PERFCTL_K_BITFIELD_BEG           (1 )
#define MIU_C0_PERFCTL_K_BITFIELD_END           (1 )
#define MIU_C0_PERFCTL_S_BITFIELD_BEG           (2 )
#define MIU_C0_PERFCTL_S_BITFIELD_END           (2 )
#define MIU_C0_PERFCTL_U_BITFIELD_BEG           (3 )
#define MIU_C0_PERFCTL_U_BITFIELD_END           (3 )
#define MIU_C0_PERFCTL_IE_BITFIELD_BEG          (4 )
#define MIU_C0_PERFCTL_IE_BITFIELD_END          (4 )
#define MIU_C0_PERFCTL_EVENT_BITFIELD_BEG       (5 )
#define MIU_C0_PERFCTL_EVENT_BITFIELD_END       (11)
#define MIU_C0_PERFCTL_PCTD_BITFIELD_BEG        (15)
#define MIU_C0_PERFCTL_PCTD_BITFIELD_END        (15)
#define MIU_C0_PERFCTL_VPEID_BITFIELD_BEG       (16)
#define MIU_C0_PERFCTL_VPEID_BITFIELD_END       (19)
#define MIU_C0_PERFCTL_MT_EN_BITFIELD_BEG       (20)
#define MIU_C0_PERFCTL_MT_EN_BITFIELD_END       (21)
#define MIU_C0_PERFCTL_TCID_BITFIELD_BEG        (22)
#define MIU_C0_PERFCTL_TCID_BITFIELD_END        (29)
#define MIU_C0_PERFCTL_M_BITFIELD_BEG           (31)
#define MIU_C0_PERFCTL_M_BITFIELD_END           (31)

#define MIU_C0_PERFCTL_MT_EN_ALL                (0 )
#define MIU_C0_PERFCTL_MT_EN_CUR_VPE            (1 )
#define MIU_C0_PERFCTL_MT_EN_CUR_TC             (2 )

/* C0_TCSCHEDULE */
#define MIU_C0_TCSCHEDULE_GRP_BITFIELD_BEG      (0 )
#define MIU_C0_TCSCHEDULE_GRP_BITFIELD_END      (1 )
#define MIU_C0_TCSCHEDULE_STP_BITFIELD_BEG      (3 )
#define MIU_C0_TCSCHEDULE_STP_BITFIELD_END      (3 )
#define MIU_C0_TCSCHEDULE_T0_QE_BITFIELD_BEG    (4 )
#define MIU_C0_TCSCHEDULE_T0_QE_BITFIELD_END    (7 )
#define MIU_C0_TCSCHEDULE_T0_TH_BITFIELD_BEG    (8 )
#define MIU_C0_TCSCHEDULE_T0_TH_BITFIELD_END    (10)
#define MIU_C0_TCSCHEDULE_T0_GRP_BITFIELD_BEG   (11)
#define MIU_C0_TCSCHEDULE_T0_GRP_BITFIELD_END   (12)
#define MIU_C0_TCSCHEDULE_T0_STP_BITFIELD_BEG   (13)
#define MIU_C0_TCSCHEDULE_T0_STP_BITFIELD_END   (13)
#define MIU_C0_TCSCHEDULE_T1_QE_BITFIELD_BEG    (14)
#define MIU_C0_TCSCHEDULE_T1_QE_BITFIELD_END    (17)
#define MIU_C0_TCSCHEDULE_T1_TH_BITFIELD_BEG    (18)
#define MIU_C0_TCSCHEDULE_T1_TH_BITFIELD_END    (20)
#define MIU_C0_TCSCHEDULE_T1_GRP_BITFIELD_BEG   (21)
#define MIU_C0_TCSCHEDULE_T1_GRP_BITFIELD_END   (22)
#define MIU_C0_TCSCHEDULE_T1_STP_BITFIELD_BEG   (23)
#define MIU_C0_TCSCHEDULE_T1_STP_BITFIELD_END   (23)

#define MIU_C0_TCSCHEDULE_QE_NOT                (0 )
#define MIU_C0_TCSCHEDULE_QE_WBB                (1 )
#define MIU_C0_TCSCHEDULE_QE_LDQ                (2 )
#define MIU_C0_TCSCHEDULE_QE_FSB                (4 )
#define MIU_C0_TCSCHEDULE_QE_SYS                (8 )

/* C0_EBASE */
/* [TC] EBase use bit 0:9 in definition, 
 * but we only need 4 bit (max to 8 vpe/4 core, bit 0:3) */
#define MIU_C0_EBASE_CPUNUM_BITFIELD_BEG        (0 )
#define MIU_C0_EBASE_CPUNUM_BITFIELD_END        (3 )
#define MIU_C0_EBASE_WG_BITFIELD_BEG            (11)
#define MIU_C0_EBASE_WG_BITFIELD_END            (11)
#define MIU_C0_EBASE_EXCBASE_BITFIELD_BEG       (12)
#define MIU_C0_EBASE_EXCBASE_BITFIELD_END       (31)

/* C0_CONFIG7 */
#define MIU_C0_CONFIG7_SL_BITFIELD_BEG          (0 )
#define MIU_C0_CONFIG7_SL_BITFIELD_END          (0 )
#define MIU_C0_CONFIG7_BHT_BITFIELD_BEG         (1 )
#define MIU_C0_CONFIG7_BHT_BITFIELD_END         (1 )
#define MIU_C0_CONFIG7_RPS_BITFIELD_BEG         (2 )
#define MIU_C0_CONFIG7_RPS_BITFIELD_END         (2 )
#define MIU_C0_CONFIG7_BP_BITFIELD_BEG          (3 )
#define MIU_C0_CONFIG7_BP_BITFIELD_END          (3 )
#define MIU_C0_CONFIG7_ULB_BITFIELD_BEG         (4 )
#define MIU_C0_CONFIG7_ULB_BITFIELD_END         (4 )
#define MIU_C0_CONFIG7_NBLSU_BITFIELD_BEG       (5 )
#define MIU_C0_CONFIG7_NBLSU_BITFIELD_END       (5 )
#define MIU_C0_CONFIG7_CPOOO_BITFIELD_BEG       (6 )
#define MIU_C0_CONFIG7_CPOOO_BITFIELD_END       (6 )
#define MIU_C0_CONFIG7_BTLM_BITFIELD_BEG        (7 )
#define MIU_C0_CONFIG7_BTLM_BITFIELD_END        (7 )
#define MIU_C0_CONFIG7_ES_BITFIELD_BEG          (8 )
#define MIU_C0_CONFIG7_ES_BITFIELD_END          (8 )
#define MIU_C0_CONFIG7_IVAD_BITFIELD_BEG        (9 )
#define MIU_C0_CONFIG7_IVAD_BITFIELD_END        (9 )
#define MIU_C0_CONFIG7_IAR_BITFIELD_BEG         (10)
#define MIU_C0_CONFIG7_IAR_BITFIELD_END         (10)
#define MIU_C0_CONFIG7_BUSSLP_BITFIELD_BEG      (11)
#define MIU_C0_CONFIG7_BUSSLP_BITFIELD_END      (11)
#define MIU_C0_CONFIG7_ICWP_BITFIELD_BEG        (12)
#define MIU_C0_CONFIG7_ICWP_BITFIELD_END        (12)
#define MIU_C0_CONFIG7_AR_BITFIELD_BEG          (16)
#define MIU_C0_CONFIG7_AR_BITFIELD_END          (16)
#define MIU_C0_CONFIG7_FPR_BITFIELD_BEG         (17)
#define MIU_C0_CONFIG7_FPR_BITFIELD_END         (17)
#define MIU_C0_CONFIG7_HCI_BITFIELD_BEG         (18)
#define MIU_C0_CONFIG7_HCI_BITFIELD_END         (18)
#define MIU_C0_CONFIG7_PCT_BITFIELD_BEG         (19)
#define MIU_C0_CONFIG7_PCT_BITFIELD_END         (19)
#define MIU_C0_CONFIG7_NCWB_BITFIELD_BEG        (20)
#define MIU_C0_CONFIG7_NCWB_BITFIELD_END        (20)
#define MIU_C0_CONFIG7_RAMSLP_BITFIELD_BEG      (21)
#define MIU_C0_CONFIG7_RAMSLP_BITFIELD_END      (21)
#define MIU_C0_CONFIG7_CP_BITFIELD_BEG          (22)
#define MIU_C0_CONFIG7_CP_BITFIELD_END          (22)
#define MIU_C0_CONFIG7_MCRO_BITFIELD_BEG        (23)
#define MIU_C0_CONFIG7_MCRO_BITFIELD_END        (23)
#define MIU_C0_CONFIG7_WII_BITFIELD_BEG         (31)
#define MIU_C0_CONFIG7_WII_BITFIELD_END         (31)

#define miu_glue(x,y)                   x##y
#define miu_xglue(x,y)                  miu_glue(x,y)
#define miu_str(x)                      #x
#define miu_xstr(x)                     miu_str(x)

#define miu_build_bug_on_not_zero(__e__)                        \
    (sizeof(                                                    \
            struct {                                            \
                int:-!!(!(__e__));                              \
            }                                                   \
    ))
#define miu_build_bug_on_assert(__e__)                          \
    miu_build_bug_on_not_zero(__e__)

#define miu_reg_bitfd_msk(__reg_name__)                         \
    (                                                           \
        (                                                       \
            1 << (                                              \
                miu_glue(__reg_name__, _BITFIELD_END)           \
                - miu_glue(__reg_name__, _BITFIELD_BEG)         \
                + 1                                             \
            )                                                   \
        ) - 1                                                   \
    )

#define miu_reg_bitfd_off(__reg_name__)                         \
    (miu_glue(__reg_name__, _BITFIELD_BEG))

#define miu_reg_bitfd_mskoff_val(__reg_name__, __val__)         \
    (                                                           \
        ((__val__) & miu_reg_bitfd_msk(__reg_name__))           \
            << miu_reg_bitfd_off(__reg_name__)                  \
    )

#define miu_reg_bitfd_mskoff(__reg_name__)                      \
    (                                                           \
        miu_reg_bitfd_msk(__reg_name__)                         \
            << miu_reg_bitfd_off(__reg_name__)                  \
    )

#define miu_reg_bitfd_rmskoff(__reg_name__)                     \
    (~miu_reg_bitfd_mskoff(__reg_name__))

#define miu_get_reg_bitfd_val(__reg_name__, __val__)            \
    (                                                           \
        ((__val__) & miu_reg_bitfd_mskoff(__reg_name__))        \
            >> miu_reg_bitfd_off(__reg_name__)                  \
    )

#define miu_update_reg_bitfd(__reg_name__, __oval__, __nval__)  \
    __extension__ ({                                            \
        (                                                       \
            (                                                   \
                (__oval__) &                                    \
                    miu_reg_bitfd_rmskoff(__reg_name__)         \
            ) |                                                 \
            miu_reg_bitfd_mskoff_val(__reg_name__, __nval__)    \
        );                                                      \
    })

/* Make it work on both MIPS32/16
 * - "d" would choose correct register number based on MIPS16/32, "r" would
 *   choose registers available on MIPS32
 * - "J" (Integer zero) may choose zero register ($0), which is not available
 *   on MIPS16 (Ticket: 105306)
 */
#if   defined(CONFIG_MIPS_IA_MR3) // MR3 would use MIPS16 & MIPS32
# define __GCC_ASM_REG_CONSTRAINTS__ "d"
#elif defined(CONFIG_MIPS_IA_MR2) // MR2 would use MIPS16 & MIPS32
# define __GCC_ASM_REG_CONSTRAINTS__ "d"
#else // if not MR2/MR3, assume it's MR1. MR1 only use MIPS32
# define __GCC_ASM_REG_CONSTRAINTS__ "dJ"
#endif /* !defined(CONFIG_MIPS_IA_MR2) */

/*
 * mfc0/mtc0 macro modified from m32c0.h
 * Define macros for accessing the MIPS32 coprocessor 0 registers.
 * Take cp0 register "$numbers,select" defined above as parameter.
 */
#define miu_mfc0(reg_sel)               \
    __extension__ ({                    \
        register miu_reg32_t __r;       \
         __asm__ __volatile__ (         \
            "mfc0 %0," reg_sel ";\n"    \
            : "=d" (__r)                \
        );                              \
        __r;                            \
    })

#define miu_mtc0(reg_sel, val)          \
    do {                                \
        __asm__ __volatile__ (          \
            ".set push              \n" \
            ".set noreorder         \n" \
            "mtc0 %z0," reg_sel ";  \n" \
            "ehb                    \n" \
            ".set pop"                  \
            :                           \
            :__GCC_ASM_REG_CONSTRAINTS__\
                ((miu_reg32_t)(val))    \
            : "memory"                  \
        );                              \
    } while (0)

#define miu_mftc0(reg_sel)              \
    __extension__ ({                    \
        register miu_reg32_t __r;       \
        __asm__ __volatile__(           \
            "mftc0 %0," reg_sel ";\n"   \
            : "=d" (__r)                \
        );                              \
        __r;                            \
    })

#define miu_mttc0(reg_sel,val)          \
    do {                                \
        __asm__ __volatile__ (          \
        "%(mttc0\t %z0," reg_sel        \
            "; ehb%)"                   \
        : : __GCC_ASM_REG_CONSTRAINTS__ \
            ((miu_reg32_t)(val)));      \
    } while (0)

#define miu_jr_hb()                     \
    do {                                \
        register miu_reg32_t __tmp__;   \
        __asm__ __volatile__ (          \
            "   la     %0, 1f  \n"      \
            "   jr.hb  %0      \n"      \
            "1:                \n"      \
            :"=&d"(__tmp__)             \
        );                              \
    } while(0)

#define miu_ehb()                       \
    do {                                \
        __asm__ __volatile__ (          \
            "ehb;\n"                    \
        );                              \
    } while(0)

#define miu_rdhwr(__rd__)                           \
    __extension__ ({                                \
        register miu_reg32_t __r;                   \
         __asm__ __volatile__ (                     \
            "rdhwr %0," __rd__ ";\n"                \
            : "=d" (__r)                            \
        );                                          \
        __r;                                        \
    })

#define miu_mt_gettarget()                          \
    __extension__ ({                                \
        register miu_reg32_t __r;                   \
        __r = miu_mfc0(MIU_C0_VPECONTROL);          \
        miu_get_reg_bitfd_val(                      \
            MIU_C0_VPECONTROL_TARGTC, __r);         \
    })

#define miu_mt_settarget(tc)                        \
    __extension__ ({                                \
        register miu_reg32_t __old;                 \
        __old = miu_mfc0(MIU_C0_VPECONTROL);        \
        miu_mtc0(MIU_C0_VPECONTROL,                 \
            miu_update_reg_bitfd(                   \
                MIU_C0_VPECONTROL_TARGTC, __old, tc)\
        );                                          \
        miu_get_reg_bitfd_val(                      \
            MIU_C0_VPECONTROL_TARGTC, __old);       \
    })

#ifdef CONFIG_EHB_FOR_DMT_DVPE_HAZARD
# define __miu_dmt_dvpe_hazard()    miu_ehb()
#else
# define __miu_dmt_dvpe_hazard()    miu_jr_hb()
#endif

#define miu_mt_dmt()                    \
    __extension__ ({                    \
        register miu_reg32_t __r;       \
        __asm__ __volatile__ (          \
            ".set push; \n"             \
            ".set mt;   \n"             \
            "dmt    %0; \n"             \
            ".set pop;  \n"             \
            : "=d" (__r)                \
        );                              \
        __miu_dmt_dvpe_hazard();        \
        miu_get_reg_bitfd_val(          \
            MIU_C0_VPECONTROL_TE, __r); \
    })

#define miu_mt_emt()                    \
    __extension__ ({                    \
        register miu_reg32_t __r;       \
        __asm__ __volatile__ (          \
            ".set push; \n"             \
            ".set mt;   \n"             \
            "emt    %0; \n"             \
            "ehb;       \n"             \
            ".set pop;  \n"             \
            : "=d" (__r)                \
        );                              \
        miu_get_reg_bitfd_val(          \
            MIU_C0_VPECONTROL_TE, __r); \
    })

#define miu_mt_dvpe()                   \
    __extension__ ({                    \
        register miu_reg32_t __r;       \
        __asm__ __volatile__ (          \
            ".set push; \n"             \
            ".set mt;   \n"             \
            "dvpe   %0; \n"             \
            ".set pop;  \n"             \
            : "=d" (__r)                \
        );                              \
        __miu_dmt_dvpe_hazard();        \
        miu_get_reg_bitfd_val(          \
            MIU_C0_MVPCONTROL_EVP, __r);\
    })

#define miu_mt_evpe()                   \
    __extension__ ({                    \
        register miu_reg32_t __r;       \
        __asm__ __volatile__ (          \
            ".set push; \n"             \
            ".set mt;   \n"             \
            "evpe   %0; \n"             \
            "ehb;       \n"             \
            ".set pop;  \n"             \
            : "=d" (__r)                \
        );                              \
        miu_get_reg_bitfd_val(          \
            MIU_C0_MVPCONTROL_EVP, __r);\
    })

#define miu_syncn(n)                    \
    do {                                \
        __asm__ __volatile__ (          \
            "sync %0\n"                 \
            : : "JK" (n)                \
            : "memory"                  \
        );                              \
    } while(0)

#define miu_c0_count_get()              \
    miu_mfc0(MIU_C0_COUNT)

#define miu_cycle_counter_read()        \
    (miu_c0_count_get() << 1)

#define miu_get_curr_vpe_id_by_rdhwr()  \
    miu_rdhwr(MIU_RDHWR_CPUNUM)

#define miu_get_curr_vpe_id_by_ebase()  \
    __extension__ ({                    \
        register miu_reg32_t __r;       \
        __r = miu_mfc0(MIU_C0_EBASE);   \
        miu_get_reg_bitfd_val(          \
            MIU_C0_EBASE_CPUNUM, __r);  \
    })

/* Use RDHWR on MR1/MR2, since we will not use M16 on MR1 */
#define miu_get_current_vpe_id()        \
    miu_get_curr_vpe_id_by_rdhwr()

#define miu_get_current_core_id()       \
    (miu_get_current_vpe_id() >> 1)

#define miu_get_current_tc_id()         \
    __extension__ ({                    \
        register miu_reg32_t __r;       \
        __r = miu_mfc0(MIU_C0_TCBIND);  \
        miu_get_reg_bitfd_val(          \
            MIU_C0_TCBIND_CURTC, __r);  \
    })

#ifndef __ASSEMBLER__
typedef unsigned int miu_reg32_t;
#endif /* __ASSEMBLER__ */

#endif /* __MIPS_IA_UTILS_PUBLIC_H__ */
