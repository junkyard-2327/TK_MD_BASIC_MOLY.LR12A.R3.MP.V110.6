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
 * Pivate (SS Internal) header for some MIPS utils
 *****************************************************************************/

#ifndef __MIPS_IA_UTILS_H__
#if !defined(GEN_FOR_PC) && defined(__MTK_TARGET__)
#define __MIPS_IA_UTILS_H__
#include "mips_ia_utils_public.h"
#include "boot.h"

#ifndef __ASSEMBLER__
# include "kal_iram_section_defs.h"
# include "kal_public_defs.h"
/* [TC] workaround to include order */
# define __MIU_STATIC_INLINE__                  \
    __attribute__((always_inline)) static inline
#endif /* __ASSEMBLER__ */

#if defined(CONFIG_MIPS_IA_MR2)
# include "mips_ia_mr2_utils.h"
#elif defined(CONFIG_MIPS_IA_MR3)
# include "mips_ia_mr3_utils.h"
#else  /* MR1 (Gen-92) */
# include "mips_ia_mr1_utils.h"
#endif /* CONFIG_MIPS_IA_MR2 */

#define miu_c0_tcschedule_throt_val(                                    \
    __t1_stp__, __t1_grp__, __t1_th__, __t1_qe__,                       \
    __t0_stp__, __t0_grp__, __t0_th__, __t0_qe__)                       \
    (                                                                   \
        miu_reg_bitfd_mskoff_val(MIU_C0_TCSCHEDULE_T1_STP, __t1_stp__) |\
        miu_reg_bitfd_mskoff_val(MIU_C0_TCSCHEDULE_T1_GRP, __t1_grp__) |\
        miu_reg_bitfd_mskoff_val(MIU_C0_TCSCHEDULE_T1_TH,  __t1_th__ ) |\
        miu_reg_bitfd_mskoff_val(MIU_C0_TCSCHEDULE_T1_QE,  __t1_qe__ ) |\
        miu_reg_bitfd_mskoff_val(MIU_C0_TCSCHEDULE_T0_STP, __t0_stp__) |\
        miu_reg_bitfd_mskoff_val(MIU_C0_TCSCHEDULE_T0_GRP, __t0_grp__) |\
        miu_reg_bitfd_mskoff_val(MIU_C0_TCSCHEDULE_T0_TH,  __t0_th__ ) |\
        miu_reg_bitfd_mskoff_val(MIU_C0_TCSCHEDULE_T0_QE,  __t0_qe__ )  \
    )

#define miu_c0_tcschedule_val_raw(                                      \
    __t1_stp__, __t1_grp__, __t1_th__, __t1_qe__,                       \
    __t0_stp__, __t0_grp__, __t0_th__, __t0_qe__,                       \
    __stp__, __grp__)                                                   \
    (                                                                   \
        miu_c0_tcschedule_throt_val(                                    \
            __t1_stp__, __t1_grp__, __t1_th__, __t1_qe__,               \
            __t0_stp__, __t0_grp__, __t0_th__, __t0_qe__)              |\
        miu_reg_bitfd_mskoff_val(MIU_C0_TCSCHEDULE_STP, __stp__,  )    |\
        miu_reg_bitfd_mskoff_val(MIU_C0_TCSCHEDULE_GRP, __grp__,  )     \
    )

#define miu_c0_tcschedule_val3(                                         \
    __throt_cfg__, __stp__, __grp__)                                    \
    (                                                                   \
        __throt_cfg__                                                  |\
        miu_reg_bitfd_mskoff_val(MIU_C0_TCSCHEDULE_STP, __stp__)       |\
        miu_reg_bitfd_mskoff_val(MIU_C0_TCSCHEDULE_GRP, __grp__)        \
    )

#define miu_c0_tcschedule_val2(__throt_cfg__, __grp__)                  \
    miu_c0_tcschedule_val3(__throt_cfg__, 0, __grp__)

#define miu_set_c0_tcschedule2(__throt_cfg__, __grp__)                  \
    miu_mtc0(MIU_C0_TCSCHEDULE,                                         \
        miu_c0_tcschedule_val2(__throt_cfg__, __grp__))

#define miu_save_and_set_c0_tcschedule_grp(__grp__)                     \
    __extension__ ({                                                    \
        register miu_reg32_t __r;                                       \
        __r = miu_mfc0(MIU_C0_TCSCHEDULE);                              \
        miu_mtc0(MIU_C0_TCSCHEDULE,                                     \
            miu_update_reg_bitfd(                                       \
                MIU_C0_TCSCHEDULE_GRP, __r, __grp__)                    \
        );                                                              \
        miu_get_reg_bitfd_val(MIU_C0_TCSCHEDULE_GRP, __r);              \
    })

// TODO: assume Gen-92/Gen-93 use the same setting
#define MIU_DEF_NORMAL_DOM_THROT_VAL        \
    miu_c0_tcschedule_throt_val(            \
        1, 0, 1, MIU_C0_TCSCHEDULE_QE_LDQ,  \
        1, 0, 1, MIU_C0_TCSCHEDULE_QE_WBB   \
    )

#define MIU_DEF_HRT_DOM_THROT_VAL           \
    miu_c0_tcschedule_throt_val(            \
        0, 0, 0, MIU_C0_TCSCHEDULE_QE_NOT,  \
        0, 0, 0, MIU_C0_TCSCHEDULE_QE_NOT   \
    )

#ifndef __ASSEMBLER__

# if defined(__MIPS16__)
#  if defined(__GNUC__)
#   define MIU_M32_FUNC __attribute__((nomips16))
#  endif
# endif /* __MIPS16__ */

# ifndef MIU_M32_FUNC
#  define MIU_M32_FUNC
# endif /* MIU_M32_FUNC */

MIU_M32_FUNC extern
void miu_vpe1_cross_config_vpe0_rps(const unsigned int disable);
MIU_M32_FUNC extern void miu_wait(void);

extern void mips_ia_misc_init_by_core(void);
extern void mips_ia_misc_init(void);
extern void mips_ia_misc_enter_dormant(void);
extern void mips_ia_misc_leave_dormant(void);
extern const kal_int32 mips_ia_lv3_dcm_enable(const kal_uint32 en);

#endif /* __ASSEMBLER__ */

#endif /* !defined(GEN_FOR_PC) && defined(__MTK_TARGET__) */
#endif /* __MIPS_IA_UTILS_H__ */
