/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2016
*
*  BY OPENING THIS FILE, BUYER HEREBY UNEQUIVOCALLY ACKNOWLEDGES AND AGREES
*  THAT THE SOFTWARE/FIRMWARE AND ITS DOCUMENTATIONS ("MEDIATEK SOFTWARE")
*  RECEIVED FROM MEDIATEK AND/OR ITS REPRESENTATIVES ARE PROVIDED TO BUYER ON
*  AN "AS-IS" BASIS ONLY. MEDIATEK EXPRESSLY DISCLAIMS ANY AND ALL WARRANTIES,
*  EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE IMPLIED WARRANTIES OF
*  MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE OR NONINFRINGEMENT.
*  NEITHER DOES MEDIATEK PROVIDE ANY WARRANTY WHATSOEVER WITH RESPECT TO THE
*  SOFTWARE OF ANY THIRD PARTY WHICH MAY BE USED BY, INCORPORATED IN, OR
*  SUPPLIED WITH THE MEDIATEK SOFTWARE, AND BUYER AGREES TO LOOK ONLY TO SUCH
*  THIRD PARTY FOR ANY WARRANTY CLAIM RELATING THERETO. MEDIATEK SHALL ALSO
*  NOT BE RESPONSIBLE FOR ANY MEDIATEK SOFTWARE RELEASES MADE TO BUYER'S
*  SPECIFICATION OR TO CONFORM TO A PARTICULAR STANDARD OR OPEN FORUM.
*
*  BUYER'S SOLE AND EXCLUSIVE REMEDY AND MEDIATEK'S ENTIRE AND CUMULATIVE
*  LIABILITY WITH RESPECT TO THE MEDIATEK SOFTWARE RELEASED HEREUNDER WILL BE,
*  AT MEDIATEK'S OPTION, TO REVISE OR REPLACE THE MEDIATEK SOFTWARE AT ISSUE,
*  OR REFUND ANY SOFTWARE LICENSE FEES OR SERVICE CHARGE PAID BY BUYER TO
*  MEDIATEK FOR SUCH MEDIATEK SOFTWARE AT ISSUE.
*
*  THE TRANSACTION CONTEMPLATED HEREUNDER SHALL BE CONSTRUED IN ACCORDANCE
*  WITH THE LAWS OF THE STATE OF CALIFORNIA, USA, EXCLUDING ITS CONFLICT OF
*  LAWS PRINCIPLES.  ANY DISPUTES, CONTROVERSIES OR CLAIMS ARISING THEREOF AND
*  RELATED THERETO SHALL BE SETTLED BY ARBITRATION IN SAN FRANCISCO, CA, UNDER
*  THE RULES OF THE INTERNATIONAL CHAMBER OF COMMERCE (ICC).
*
*****************************************************************************/

#include "kal_general_types.h"
#include "kal_public_api.h"

#include "drv_comm.h"
#include "sync_data.h"

#include "pdamon_reg.h"
#include "drv_pcmon.h"

/*****************************************************************************
 * Extern Functions
 *****************************************************************************/
/* Exception entry point for PC_MATCH usage */
/* Normal flow */
extern void general_ex_vector(void);
extern void NMI_handler(void);
/* Dormant/Boot flow */
extern void INT_TEMP_general_ex_vector(void);

/*****************************************************************************
 * Internal Options
 *****************************************************************************/

/*****************************************************************************
 * Preprocessor Directives
 *****************************************************************************/

#define __PDAMON_ALIGNED__           __attribute__((aligned(0x10)))
#define __SECTION__(S)               __attribute__((__section__(#S)))
#define __ZI__                       __attribute__((zero_init))
#define __PDAMON_NONCACHED_DATA__    __SECTION__(NONCACHEDRW)

#define PDAMON_ISRAM_TC0_SIDX       (0)
#define PDAMON_ISRAM_TC0_EIDX       (7)
#define PDAMON_ISRAM_TC1_SIDX       (8)
#define PDAMON_ISRAM_TC1_EIDX       (15)
#define PDAMON_ISRAM_TC2_SIDX       (16)
#define PDAMON_ISRAM_TC2_EIDX       (23)
#define PDAMON_ISRAM_TC3_SIDX       (24)
#define PDAMON_ISRAM_TC3_EIDX       (31)

#define PDAMON_DSRAM_TC0_SIDX       (0)
#define PDAMON_DSRAM_TC0_EIDX       (7)
#define PDAMON_DSRAM_TC1_SIDX       (8)
#define PDAMON_DSRAM_TC1_EIDX       (15)
#define PDAMON_DSRAM_TC2_SIDX       (16)
#define PDAMON_DSRAM_TC2_EIDX       (23)
#define PDAMON_DSRAM_TC3_SIDX       (24)
#define PDAMON_DSRAM_TC3_EIDX       (31)

#define PDAMON_DABASE               (0x76543210)
#define PDAMON_DAMASK               (0x76543210)


#define PDAMON_TC_IA_CNT(core,tc)   (g_pdamon_sram_idx.pc[(core)][(tc)].end - g_pdamon_sram_idx.pc[(core)][(tc)].start + 1)
#define PDAMON_TC_DA_CNT(core,tc)   (g_pdamon_sram_idx.da[(core)][(tc)].end - g_pdamon_sram_idx.da[(core)][(tc)].start + 1)

/**
 * IA and DA counts for EX and NEX
 * If we want one TC's SRAM counts is 0, we have to
 *   1. Set PDAMON_{I|D}SRAM_TCx_SIDX = PDAMON_{I|D}SRAM_TCx_EIDX = 32
 *   2. Set PDAMON_{EX|NEX}_TCx_{IA|DA}_MARGIN to 1
 */
#define PDAMON_EX_TC_IA_CNT(tc)     (PDAMON_ISRAM_TC##tc##_EIDX - PDAMON_ISRAM_TC##tc##_SIDX + 1 - PDAMON_EX_TC##tc##_IA_MARGIN)
#define PDAMON_EX_TC_DA_CNT(tc)     (PDAMON_DSRAM_TC##tc##_EIDX - PDAMON_DSRAM_TC##tc##_SIDX + 1 - PDAMON_EX_TC##tc##_DA_MARGIN)
#define PDAMON_NEX_TC_IA_CNT(tc)    (PDAMON_ISRAM_TC##tc##_EIDX - PDAMON_ISRAM_TC##tc##_SIDX + 1 - PDAMON_NEX_TC##tc##_IA_MARGIN)

/*****************************************************************************
 * Macros
 *****************************************************************************/

#define PDAMON_CORE_CHK \
    if (core < PDAMON_CORE_0 || core >= PDAMON_CORE_CNT) { \
        return PDAMON_RET_INVALID_ARGUMENT; \
    }

/*****************************************************************************
 * Type Definition
 *****************************************************************************/

/**
 * A structure to describe CPU information
 */
typedef struct pdamon_cpuinfo {
    kal_uint8 core_id;
    kal_uint8 vpe_id;
    kal_uint8 tc_id;
} pdamon_cpuinfo_st;

/**
 * A structure to describe SRAM information of a TC
 */
typedef struct pdamon_sram_info {
    kal_uint32 start_idx;           ///< SRAM start index
    kal_uint32 end_idx;             ///< SRAM end index
    kal_uint32 pairs;               ///< SRAM total pairs
    kal_uint32 first_idx;           ///< First pair index in SRAM
    kal_bool   is_wrap;             ///< SRAM is wrap
} pdamon_sram_info_st;

/**
 * A structure to describe SRAM index of a TC
 */
typedef struct pdamon_sram_idx {
    kal_uint16 start;               ///< SRAM start index
    kal_uint16 end;                 ///< SRAM end index
} pdamon_sram_idx_st;

/**
 * A structure to describe SRAM index setting
 */
typedef struct pdamon_sram_idx_info {
    kal_uint8 start[13];                                                ///< PDAMON_START
    pdamon_sram_idx_st pc[PDAMON_CORE_NUM][PDAMON_TC_NUM_PER_CORE];     ///< PC SRAM
    pdamon_sram_idx_st da[PDAMON_CORE_NUM][PDAMON_TC_NUM_PER_CORE];     ///< DA SRAM
    kal_bool do_init;                                                   ///< Setup SRAM indices at init stage or not
    kal_uint8 end[13];                                                  ///< PDAMON_END
} pdamon_sram_idx_info_st;

/**
 * A structure to describe DABASE/DAMASK of a core
 */
typedef struct pdamon_da_base_mask {
    kal_uint32 base;                ///< DA Base
    kal_uint32 mask;                ///< DA Mask
} pdamon_da_base_mask_st;

/**
 * A structure to describe DABASE/DAMASK setting
 */
typedef struct pdamon_da_base_mask_info {
    kal_uint8 start[13];                                                ///< PDAMON_START
    pdamon_da_base_mask_st base_mask[PDAMON_CORE_NUM];                        ///< DA_BASE_MASK
    kal_bool do_init;                                                   ///< Setup SRAM indices at init stage or not
    kal_uint8 end[13];                                                  ///< PDAMON_END
} pdamon_da_base_mask_info_st;

/*****************************************************************************
 * Function Declaration
 *****************************************************************************/

/*****************************************************************************
 * Global Variables
 *****************************************************************************/

__PDAMON_ALIGNED__ PDAMON_RAW_PER_CORE_T g_pdamon_full[PDAMON_CORE_NUM];
#if defined(__DRV_PDAMON_DORMANT_CONFIG__)
__PDAMON_NONCACHED_DATA__ __PDAMON_ALIGNED__ PDAMON_RECORD_STS_V2 g_pdamon_record_sts_dormant_leave[PDAMON_CORE_NUM];
#endif

/**
 * A constant table to describe each TC's SRAM capacity
 * SRAM capacity is configured in drv_pdamon_init()
 */
__attribute__ ((section (".rodatag_pdamon_sram_idx"))) volatile const static pdamon_sram_idx_info_st g_pdamon_sram_idx = {
    {'P','D','A','M','O','N','_','S','R','A','M','_','S'},
    {{{PDAMON_ISRAM_TC0_SIDX, PDAMON_ISRAM_TC0_EIDX}, {PDAMON_ISRAM_TC1_SIDX, PDAMON_ISRAM_TC1_EIDX}, {PDAMON_ISRAM_TC2_SIDX, PDAMON_ISRAM_TC2_EIDX}, {PDAMON_ISRAM_TC3_SIDX, PDAMON_ISRAM_TC3_EIDX}},
     {{PDAMON_ISRAM_TC0_SIDX, PDAMON_ISRAM_TC0_EIDX}, {PDAMON_ISRAM_TC1_SIDX, PDAMON_ISRAM_TC1_EIDX}, {PDAMON_ISRAM_TC2_SIDX, PDAMON_ISRAM_TC2_EIDX}, {PDAMON_ISRAM_TC3_SIDX, PDAMON_ISRAM_TC3_EIDX}}},
    {{{PDAMON_DSRAM_TC0_SIDX, PDAMON_DSRAM_TC0_EIDX}, {PDAMON_DSRAM_TC1_SIDX, PDAMON_DSRAM_TC1_EIDX}, {PDAMON_DSRAM_TC2_SIDX, PDAMON_DSRAM_TC2_EIDX}, {PDAMON_DSRAM_TC3_SIDX, PDAMON_DSRAM_TC3_EIDX}},
     {{PDAMON_DSRAM_TC0_SIDX, PDAMON_DSRAM_TC0_EIDX}, {PDAMON_DSRAM_TC1_SIDX, PDAMON_DSRAM_TC1_EIDX}, {PDAMON_DSRAM_TC2_SIDX, PDAMON_DSRAM_TC2_EIDX}, {PDAMON_DSRAM_TC3_SIDX, PDAMON_DSRAM_TC3_EIDX}}},
    KAL_FALSE,
    {'P','D','A','M','O','N','_','S','R','A','M','_','E'},
};

/**
 * A constant table to describe each TC's DABASE/DAMASK
 * DABASE/DAMASK is configured in drv_pdamon_init()
 */
__attribute__ ((section (".rodatag_pdamon_da_base_mask"))) volatile const static pdamon_da_base_mask_info_st g_pdamon_da_base_mask = {
    {'P','D','A','M','O','N','_','D','A','B','M','_','S'},
    {{PDAMON_DABASE, PDAMON_DAMASK},
     {PDAMON_DABASE, PDAMON_DAMASK}},
    KAL_FALSE,
    {'P','D','A','M','O','N','_','D','A','B','M','_','E'},
};

/**
 * A constant table to describe each TC's PC record in EX.
 */
__attribute__ ((section (".rodatag_pdamon_ex_ia_cnt"))) volatile const static kal_uint32 g_pdamon_ex_ia_cnt[PDAMON_TC_NUM_PER_CORE] = {
    PDAMON_EX_TC_IA_CNT(0), PDAMON_EX_TC_IA_CNT(1), PDAMON_EX_TC_IA_CNT(2), PDAMON_EX_TC_IA_CNT(3),
};

/**
 * A constant table to describe each TC's DA record in EX.
 */
__attribute__ ((section (".rodatag_pdamon_ex_da_cnt"))) volatile const static kal_uint32 g_pdamon_ex_da_cnt[PDAMON_TC_NUM_PER_CORE] = {
    PDAMON_EX_TC_DA_CNT(0), PDAMON_EX_TC_DA_CNT(1), PDAMON_EX_TC_DA_CNT(2), PDAMON_EX_TC_DA_CNT(3),
};

/**
 * A constant table to describe each TC's DA record in NEX.
 */
__attribute__ ((section (".rodatag_pdamon_nex_ia_cnt"))) volatile const static kal_uint32 g_pdamon_nex_ia_cnt[PDAMON_TC_NUM_PER_CORE] = {
    PDAMON_NEX_TC_IA_CNT(0), PDAMON_NEX_TC_IA_CNT(1), PDAMON_NEX_TC_IA_CNT(2), PDAMON_NEX_TC_IA_CNT(3),
};

/*****************************************************************************
 * Tool Functions
 *****************************************************************************/

kal_bool pdamon_find_first_idx(kal_bool pc, pdamon_cpuinfo_st *cpu, pdamon_sram_info_st *info)
{
    kal_uint32 i = 0;
    kal_uint32 idx_value = 0;
    kal_uint32 idx_first_diff = 0;
    kal_uint32 start_idx = 0, end_idx = 0;
    kal_bool ret = KAL_TRUE;

    info->is_wrap = KAL_FALSE;
    /*
     * Find first index pair of IA
     */
    if (pc == KAL_TRUE) {
        start_idx = PDAMON_PC_SRAM_START_IDX(cpu->core_id, cpu->tc_id);
        end_idx = PDAMON_PC_SRAM_END_IDX(cpu->core_id, cpu->tc_id);
        /* Check SRAM wrap */
        if (PDAMON_PC_SRAM_IS_WRAP(cpu->core_id, cpu->tc_id) > 0)
            info->is_wrap = KAL_TRUE;
        /*
         * Search from SRAM start index
         */
        for (i = start_idx; i <= end_idx; i++) {
            //PDAMON_MSG("%s - (%d) PDAMON_BREG_PCPAIR_TAG(%d, %d) = 0x%08X = %d\r\n", __FUNCTION__,
            //    i, cpu->core_id, cpu->tc_id, PDAMON_BREG_PCPAIR_TAG(cpu->core_id, i), PDAMON_PCPAIR_IDX_VALUE(DRV_Reg32(PDAMON_BREG_PCPAIR_TAG(cpu->core_id, i))));
            /* Record the first idx value */
            if (i == start_idx) {
                idx_value = PDAMON_PCPAIR_IDX_VALUE(DRV_Reg32(PDAMON_BREG_PCPAIR_TAG(cpu->core_id, i)));
            } else {
                /* If idx value is different, this index is the oldest pair */
                if (PDAMON_PCPAIR_IDX_VALUE(DRV_Reg32(PDAMON_BREG_PCPAIR_TAG(cpu->core_id, i))) != idx_value) {
                    idx_first_diff = i;
                    break;
                }
            }
        }
    /*
     * Find first index pair of DA
     */
    } else {
        start_idx = PDAMON_DA_SRAM_START_IDX(cpu->core_id, cpu->tc_id);
        end_idx = PDAMON_DA_SRAM_END_IDX(cpu->core_id, cpu->tc_id);
        /* Check SRAM wrap */
        if (PDAMON_DA_SRAM_IS_WRAP(cpu->core_id, cpu->tc_id) > 0)
            info->is_wrap = KAL_TRUE;
        /*
         * Search from SRAM start index
         */
        for (i = start_idx; i <= end_idx; i++) {
            //PDAMON_MSG("%s - (%d) PDAMON_BREG_DAPAIR_TAG(%d, %d) = 0x%08X = %d\r\n",
            //__FUNCTION__, i, cpu->core_id, cpu->tc_id,
            //PDAMON_BREG_DAPAIR_TAG(cpu->core_id, i), PDAMON_DAPAIR_IDX_VALUE(DRV_Reg32(PDAMON_BREG_DAPAIR_TAG(cpu->core_id, i))));
            /* Record the first idx value */
            if (i == start_idx) {
                idx_value = PDAMON_DAPAIR_IDX_VALUE(DRV_Reg32(PDAMON_BREG_DAPAIR_TAG(cpu->core_id, i)));
            } else {
                /* If idx value is different, this index is the oldest pair */
                if (PDAMON_DAPAIR_IDX_VALUE(DRV_Reg32(PDAMON_BREG_DAPAIR_TAG(cpu->core_id, i))) != idx_value) {
                    idx_first_diff = i;
                    break;
                }
            }
        }
    }

    if (info->is_wrap == KAL_FALSE) {
        info->start_idx= start_idx;
        info->end_idx= end_idx;
        info->first_idx = start_idx;
        if (pc == KAL_TRUE)
            info->pairs = PDAMON_PC_SRAM_NONWRAP_COUNT(cpu->core_id, cpu->tc_id);
        else
            info->pairs = PDAMON_DA_SRAM_NONWRAP_COUNT(cpu->core_id, cpu->tc_id);
    } else {
        /*
         * Oldest pair is at start index
         */
        if ((i > end_idx) && (idx_first_diff == 0)) {
            info->start_idx= start_idx;
            info->end_idx= end_idx;
            info->first_idx = start_idx;
            info->pairs = end_idx - start_idx + 1;
        /*
         * Oldest pair is between start index and end index
         */
        } else if ((i <= end_idx) && (idx_first_diff != 0)) {
            info->start_idx = start_idx;
            info->end_idx = end_idx;
            info->first_idx = idx_first_diff;
            info->pairs = end_idx - start_idx + 1;
        /* Should never comes here */
        } else {
            ret = KAL_FALSE;
            ASSERT(0);
        }
    }

    return ret;
}

kal_bool pdamon_get_pc_raw_by_tc(PDAMON_PC_PAIR_RAW_V2_T *raw, kal_uint32 cnt, pdamon_cpuinfo_st *cpu, pdamon_sram_info_st *info)
{
    kal_uint32 i = 0;
    kal_uint32 sram_idx = info->first_idx;

    if (raw == 0)
        return KAL_FALSE;

    for (i = 0; i < cnt; i++, sram_idx++) {
        /* Index wrap handling */
        if (sram_idx > info->end_idx) { sram_idx = info->start_idx; }
        kal_mem_cpy((void*)&raw[i], (void*)PDAMON_BREG_PCPAIR_SRC(cpu->core_id, sram_idx), sizeof(PDAMON_PC_PAIR_RAW_V2_T));
    }

    return KAL_TRUE;
}

kal_bool pdamon_get_da_raw_by_tc(PDAMON_DA_PAIR_RAW_T *raw, kal_uint32 cnt, pdamon_cpuinfo_st *cpu, pdamon_sram_info_st *info)
{
    kal_uint32 i = 0;
    kal_uint32 sram_idx = info->first_idx;

    if (raw == 0)
        return KAL_FALSE;;

    for (i = 0; i < cnt; i++, sram_idx++) {
        /* Index wrap handling */
        if (sram_idx > info->end_idx) { sram_idx = info->start_idx; }
        kal_mem_cpy((void*)&raw[i], (void*)PDAMON_BREG_DAPAIR_DA(cpu->core_id, sram_idx), sizeof(PDAMON_DA_PAIR_RAW_T));
    }

    return KAL_TRUE;
}

kal_bool pdamon_ex_get_pc_raw_by_tc(PDAMON_PC_PAIR_RAW_V2_T *raw, kal_uint32 ex_cnt, pdamon_cpuinfo_st *cpu, pdamon_sram_info_st *info)
{
    kal_uint32 i = 0;
    kal_uint32 sram_idx = info->first_idx;

    if (raw == 0)
        return KAL_FALSE;

    if ((cpu->tc_id == PDAMON_TC_0) && (g_pdamon_ex_ia_cnt[0] < info->pairs))
        sram_idx = sram_idx + (info->pairs - g_pdamon_ex_ia_cnt[0]);
    else if ((cpu->tc_id == PDAMON_TC_1) &&  (g_pdamon_ex_ia_cnt[1] < info->pairs))
        sram_idx = sram_idx + (info->pairs - g_pdamon_ex_ia_cnt[1]);
    else if ((cpu->tc_id == PDAMON_TC_2) && (g_pdamon_ex_ia_cnt[2] < info->pairs))
        sram_idx = sram_idx + (info->pairs - g_pdamon_ex_ia_cnt[2]);
    else if ((cpu->tc_id == PDAMON_TC_3) && (g_pdamon_ex_ia_cnt[3] < info->pairs))
        sram_idx = sram_idx + (info->pairs - g_pdamon_ex_ia_cnt[3]);

    for (i = 0; i < ex_cnt; i++, sram_idx++) {
        /* Index wrap handling */
        if (sram_idx > info->end_idx) { sram_idx = info->start_idx; }
        kal_mem_cpy((void*)&raw[i], (void*)PDAMON_BREG_PCPAIR_SRC(cpu->core_id, sram_idx), sizeof(PDAMON_PC_PAIR_RAW_V2_T));
    }

    return KAL_TRUE;
}

kal_bool pdamon_ex_get_da_raw_by_tc(PDAMON_DA_PAIR_RAW_T *raw, kal_uint32 ex_cnt, pdamon_cpuinfo_st *cpu, pdamon_sram_info_st *info)
{
    kal_uint32 i = 0;
    kal_uint32 sram_idx = info->first_idx;

    if (raw == 0)
        return KAL_FALSE;;

    if ((cpu->tc_id == PDAMON_TC_0) && (g_pdamon_ex_da_cnt[0] < info->pairs))
        sram_idx = sram_idx + (info->pairs - g_pdamon_ex_da_cnt[0]);
    else if ((cpu->tc_id == PDAMON_TC_1) && (g_pdamon_ex_da_cnt[1] < info->pairs))
        sram_idx = sram_idx + (info->pairs - g_pdamon_ex_da_cnt[1]);
    else if ((cpu->tc_id == PDAMON_TC_2) && (g_pdamon_ex_da_cnt[2] < info->pairs))
        sram_idx = sram_idx + (info->pairs - g_pdamon_ex_da_cnt[2]);
    else if ((cpu->tc_id == PDAMON_TC_3) && (g_pdamon_ex_da_cnt[3] < info->pairs))
        sram_idx = sram_idx + (info->pairs - g_pdamon_ex_da_cnt[3]);

    for (i = 0; i < ex_cnt; i++, sram_idx++) {
        /* Index wrap handling */
        if (sram_idx > info->end_idx) { sram_idx = info->start_idx; }
        kal_mem_cpy((void*)&raw[i], (void*)PDAMON_BREG_DAPAIR_DA(cpu->core_id, sram_idx), sizeof(PDAMON_DA_PAIR_RAW_T));
    }

    return KAL_TRUE;
}

/*****************************************************************************
 * Implementation
 *****************************************************************************/

/*-----------------------------------------------------------------------
 * FUNCTION
 *   drv_pdamon_init
 *
 * DESCRIPTION
 *   This function is to initialize SW PCMON module.
 *
 * PARAMETERS
 *   none
 *
 * RETURNS
 *   none
 *
 *------------------------------------------------------------------------*/
PDAMON_RET drv_pdamon_init(void)
{
    kal_uint32 i = 0, j = 0;
    kal_uint32 value = 0;

    if (g_pdamon_sram_idx.do_init == KAL_TRUE) {
        /*
         * Set SRAM index
         */
        drv_pdamon_stop_capture(PDAMON_CORE_ALL);
        if (drv_pdamon_is_stopped(PDAMON_CORE_ALL) == KAL_TRUE) {
            /* PC SRAM start index */
            value = 0;
            for (i = 0; i < PDAMON_CORE_NUM; i++) {
                for (j = 0; j < PDAMON_TC_NUM_PER_CORE; j++) {
                    value |= PDAMON_SRAM_IDX_SET(j, g_pdamon_sram_idx.pc[i][j].start);
                }
                DRV_WriteReg32(PDAMON_BREG_PC_SRAM_IDX_START(i), value);
            }
            /* PC SRAM end index */
            value = 0;
            for (i = 0; i < PDAMON_CORE_NUM; i++) {
                for (j = 0; j < PDAMON_TC_NUM_PER_CORE; j++) {
                    value |= PDAMON_SRAM_IDX_SET(j, g_pdamon_sram_idx.pc[i][j].end);
                }
                DRV_WriteReg32(PDAMON_BREG_PC_SRAM_IDX_END(i), value);
            }
            /* DA SRAM start index */
            value = 0;
            for (i = 0; i < PDAMON_CORE_NUM; i++) {
                for (j = 0; j < PDAMON_TC_NUM_PER_CORE; j++) {
                    value |= PDAMON_SRAM_IDX_SET(j, g_pdamon_sram_idx.da[i][j].start);
                }
                DRV_WriteReg32(PDAMON_BREG_DA_SRAM_IDX_START(i), value);
            }
            /* DA SRAM end index */
            value = 0;
            for (i = 0; i < PDAMON_CORE_NUM; i++) {
                for (j = 0; j < PDAMON_TC_NUM_PER_CORE; j++) {
                    value |= PDAMON_SRAM_IDX_SET(j, g_pdamon_sram_idx.da[i][j].end);
                }
                DRV_WriteReg32(PDAMON_BREG_DA_SRAM_IDX_END(i), value);
            }
            MO_Sync();
            drv_pdamon_start_capture(PDAMON_CORE_ALL);
        } else {
            ASSERT(0);
        }
    }

    if (g_pdamon_da_base_mask.do_init == KAL_TRUE) {
        /* Configure DABASE/DAMASK register */
        for (i = 0; i < PDAMON_CORE_NUM; i++) {
            DRV_WriteReg32(PDAMON_BREG_CORE_DABASE(i), g_pdamon_da_base_mask.base_mask[i].base);
            DRV_WriteReg32(PDAMON_BREG_CORE_DAMASK(i), g_pdamon_da_base_mask.base_mask[i].mask);
        }
    }

    drv_pdamon_set_pc_match(0, (kal_uint32)(&general_ex_vector), KAL_TRUE);
    drv_pdamon_set_pc_match(1, (kal_uint32)(&NMI_handler), KAL_TRUE);
    drv_pdamon_set_pc_match(2, (kal_uint32)(&INT_TEMP_general_ex_vector), KAL_TRUE);

#if 1 //defined(__PRODUCTION_RELEASE__)
#if !defined(__BUSMON_ASSERT_MODE_FOR_ADDRESS_DEBUG__)
    DRV_WriteReg32(PDAMON_NBREG_EVENT_MASK, DRV_Reg32(PDAMON_BREG_EVENT_MASK) | PDAMON_EVT_MASK_BUSMON_MDMCU);
#endif
    DRV_WriteReg32(PDAMON_NBREG_EVENT_MASK, DRV_Reg32(PDAMON_BREG_EVENT_MASK) | PDAMON_EVT_MASK_BUS_MPU);
    MO_Sync();
#endif

    return PDAMON_RET_OK;
}

/*-----------------------------------------------------------------------
 * FUNCTION
 *   drv_pdamon_configure_dormant_leave
 *
 * DESCRIPTION
 *   This function is to configure PCMON module when leave dormant.
 *
 * PARAMETERS
 *   none
 *
 * RETURNS
 *   none
 *
 *------------------------------------------------------------------------*/
#if defined(__DRV_PDAMON_DORMANT_CONFIG__)
__PDAMON_NONCACHED_DATA__ volatile kal_uint32 g_pdamon_dormant_debug_trace_1 = PDAMON_DORMANT_TRACE_MAGIC;
__PDAMON_NONCACHED_DATA__ volatile kal_uint32 g_pdamon_dormant_debug_trace_2 = PDAMON_DORMANT_TRACE_MAGIC;
#endif /* defined(__DRV_PDAMON_DORMANT_CONFIG__) */

PDAMON_RET drv_pdamon_configure_dormant_leave(void)
{
#if defined(__DRV_PDAMON_DORMANT_CONFIG__)
    kal_uint32 i = 0;
    kal_uint32 status = 0;
    kal_uint32 vpe_id;
    kal_bool   restart_flag = KAL_TRUE; 
    
    vpe_id = kal_get_current_vpe_id();
    /* Only VPE0 to do following configure */
    if( vpe_id == 0 ) {
        /* First, Check record_sts, whether SPRAM DECERR bit is asserted or not */
        if (drv_pdamon_is_stopped(PDAMON_CORE_ALL) == KAL_TRUE) {
            g_pdamon_dormant_debug_trace_1 = PDAMON_DORMANT_ALREADY_STOPPED;
            for (i = 0; i < PDAMON_CORE_NUM; i++) {
                status = DRV_Reg32(PDAMON_BREG_CORE_RECORD_STS(i));
                g_pdamon_record_sts_dormant_leave[i].Raw = status;
                /* If others stop source is asserted, don't care about defualt mask, do not restart PDAMON to keep content */
                if ((((~PDAMON_EVT_DEFAULT_MASK) & PDAMON_EVT_RECORD_STS_ALL) & status) > 0) {
                    /* break and do nothing */
                    g_pdamon_dormant_debug_trace_2 = PDAMON_DORMANT_STOPPED_BY_OTHERS;
                    restart_flag = KAL_FALSE;
                    break;
                }
                /* If default mask is asserted, restarted PDAMON later */
                if ((PDAMON_EVT_DEFAULT_MASK & status) > 0) {
                    g_pdamon_dormant_debug_trace_2 = PDAMON_DORMANT_STOPPED_BY_MAIN;
                    DRV_WriteReg32(PDAMON_NBREG_EVENT_MASK, PDAMON_EVT_DEFAULT_MASK);
                    MO_Sync();
                }
            }
        }
        else {
            DRV_WriteReg32(PDAMON_NBREG_EVENT_MASK, PDAMON_EVT_DEFAULT_MASK);
            MO_Sync();
            g_pdamon_dormant_debug_trace_1 = PDAMON_DORMANT_NON_STOPPED;
            /* Check again for safety */
            if (drv_pdamon_is_stopped(PDAMON_CORE_ALL) == KAL_TRUE) {
                for (i = 0; i < PDAMON_CORE_NUM; i++) {
                    status = DRV_Reg32(PDAMON_BREG_CORE_RECORD_STS(i));
                    g_pdamon_record_sts_dormant_leave[i].Raw = status;
                    /* If others stop source is asserted, don't care about defualt mask, do not restart PDAMON to keep content */
                    if ((((~PDAMON_EVT_DEFAULT_MASK) & PDAMON_EVT_RECORD_STS_ALL) & status) > 0) {
                        /* break and do nothing */
                        g_pdamon_dormant_debug_trace_2 = PDAMON_DORMANT_STOPPED_BY_OTHERS;
                        restart_flag = KAL_FALSE;
                        break;
                    }
                    /* If default mask is asserted, restarted PDAMON later */
                    if ((PDAMON_EVT_DEFAULT_MASK & status) > 0) {
                        g_pdamon_dormant_debug_trace_2 = PDAMON_DORMANT_STOPPED_BY_MAIN;
                    }
                }
            }
        }
        /* Second, if restart_flag == KAL_TRUE, restart PDAMON */
        if (restart_flag == KAL_TRUE) {
            drv_pdamon_start_capture(PDAMON_CORE_ALL);
            /* Normal PDAMON init */
            drv_pdamon_init();
        }
    }
#endif  /* defined(__DRV_PDAMON_DORMANT_CONFIG__) */
    return PDAMON_RET_OK;
}

/*-----------------------------------------------------------------------*
 * FUNCTION
 *   drv_pdamon_set_config
 *
 * DESCRIPTION
 *   This function is to configure the pcmon .
 *
 * PARAMETERS
 *   cfg : PDAMON config parameters
 *
 * RETURNS
 *   None
 *
 *------------------------------------------------------------------------*/
PDAMON_RET drv_pdamon_set_config(PDAMON_CFG_T *cfg, PDAMON_CORE_SEL core)
{
    kal_uint32 cfg_value = 0;
    kal_uint32 tmp = 0;

    PDAMON_CORE_CHK;

    /* Stop PDAMON first */
    if (drv_pdamon_stop_capture(PDAMON_CORE_ALL) == PDAMON_RET_OK) {
        /* Non-PC_MATCH source */
        if ((tmp = cfg->stop_src_mask & PDAMON_EVT_MASK_ALL) > 0) {
            // Event source mask
            cfg_value |= (tmp << PDAMON_EVT_MASK_SHIFT);
            // Set configuration
            DRV_WriteReg32_NPW(PDAMON_BREG_EVENT_MASK, cfg_value);
        }
        /* PC_MATCH source */
        if ((tmp = (cfg->stop_src_mask & (~PDAMON_EVT_MASK_ALL))) > 0) {
            if ((tmp & PDAMON_SRC_PC0_MATCH) > 0)
                DRV_WriteReg32_NPW(PDAMON_NBREG_PC_MATCH_STOP(0), 1);
            if ((tmp & PDAMON_SRC_PC1_MATCH) > 0)
                DRV_WriteReg32_NPW(PDAMON_NBREG_PC_MATCH_STOP(1), 1);
            if ((tmp & PDAMON_SRC_PC2_MATCH) > 0)
                DRV_WriteReg32_NPW(PDAMON_NBREG_PC_MATCH_STOP(2), 1);
            if ((tmp & PDAMON_SRC_PC3_MATCH) > 0)
                DRV_WriteReg32_NPW(PDAMON_NBREG_PC_MATCH_STOP(3), 1);
            if ((tmp & PDAMON_SRC_PC4_MATCH) > 0)
                DRV_WriteReg32_NPW(PDAMON_NBREG_PC_MATCH_STOP(4), 1);
            if ((tmp & PDAMON_SRC_PC5_MATCH) > 0)
                DRV_WriteReg32_NPW(PDAMON_NBREG_PC_MATCH_STOP(5), 1);
        }
        return PDAMON_RET_OK;
    }
    return PDAMON_RET_FAIL;
}

PDAMON_RET drv_pdamon_set_pc_match(kal_uint32 index, kal_uint32 addr, kal_bool enabled)
{
    if (index >= 0 && index < PDAMON_PC_MATCH_CNT) {
        /*
         * Disable PC match
         */
        if (enabled == KAL_FALSE) {
            DRV_WriteReg32_NPW(PDAMON_NBREG_PC_MATCH_STOP(index), 0x1);
        /*
         * Enable PC match
         */
        } else {
            DRV_WriteReg32_NPW(PDAMON_NBREG_PC_MATCH_STOP(index), addr);
        }
        return PDAMON_RET_OK;
    }

    return PDAMON_RET_INVALID_ARGUMENT;
}

PDAMON_RET drv_pdamon_start_capture(PDAMON_CORE_SEL core)
{
#if 0
/* under construction !*/
/* under construction !*/
#endif
    /* Start one core */
    if (core >= PDAMON_CORE_0 && core < PDAMON_CORE_CNT) {
        DRV_WriteReg32_NPW(PDAMON_NBREG_SW_TRIG, PDAMON_SW_RESTART_CORE(core));
        return PDAMON_RET_OK;
    /* Start all cores */
    } else if (core == PDAMON_CORE_ALL) {
        DRV_WriteReg32_NPW(PDAMON_NBREG_SW_TRIG, PDAMON_SW_RESTART_CORE_ALL);
        return PDAMON_RET_OK;
    }
    return PDAMON_RET_INVALID_ARGUMENT;
}

PDAMON_RET drv_pdamon_stop_capture(PDAMON_CORE_SEL core)
{
    /* Stop one core */
    if (core >= PDAMON_CORE_0 && core < PDAMON_CORE_CNT) {
        DRV_WriteReg32_NPW(PDAMON_NBREG_SW_TRIG, PDAMON_SW_STOP_CORE(core));
        return PDAMON_RET_OK;
    /* Stop all cores */
    } else if (core == PDAMON_CORE_ALL) {
        DRV_WriteReg32_NPW(PDAMON_NBREG_SW_TRIG, PDAMON_SW_STOP_CORE_ALL);
        return PDAMON_RET_OK;
    }
    return PDAMON_RET_INVALID_ARGUMENT;
}

PDAMON_RET drv_pdamon_gcr_stop_capture(PDAMON_CORE_SEL core)
{
    kal_uint32 gcr = 0;

    /* Stop one core */
    if (core >= PDAMON_CORE_0 && core < PDAMON_CORE_CNT) {
        DRV_WriteReg32(PDAMON_GCR_BASE, PDAMON_GCR_STOP_CORE(core));
        gcr = DRV_Reg32(PDAMON_GCR_BASE);
        gcr = gcr & ~(PDAMON_GCR_STOP_CORE(core));
        DRV_WriteReg32(PDAMON_GCR_BASE, gcr);
        gcr = DRV_Reg32(PDAMON_GCR_BASE);
        return PDAMON_RET_OK;
    /* Stop all cores */
    } else if (core == PDAMON_CORE_ALL) {
        DRV_WriteReg32(PDAMON_GCR_BASE, PDAMON_GCR_STOP_CORE_ALL);
        gcr = DRV_Reg32(PDAMON_GCR_BASE);
        DRV_WriteReg32(PDAMON_GCR_BASE, 0);
        return PDAMON_RET_OK;
    }
    return PDAMON_RET_INVALID_ARGUMENT;
}

/*-----------------------------------------------------------------------*
 * FUNCTION
 *   drv_pdamon_core_select
 *
 * DESCRIPTION
 *
 * PARAMETERS
 *   num: Pair number
 *
 * RETURNS
 *   None
 *
 *------------------------------------------------------------------------*/
PDAMON_RET drv_pdamon_core_select(PDAMON_CORE_SEL core)
{
    return PDAMON_RET_UNSUPPORTED;
}

/*-----------------------------------------------------------------------*
 * FUNCTION
 *   drv_pdamon_is_stopped
 *
 * DESCRIPTION
 *
 * PARAMETERS
 *
 * RETURNS
 *   None
 *
 *------------------------------------------------------------------------*/
kal_bool drv_pdamon_is_stopped(PDAMON_CORE_SEL core)
{
    kal_bool ret = KAL_FALSE;
    kal_uint32 status = 0, check = PDAMON_IS_STOP;

    /* One core is stopped */
    if (core >= PDAMON_CORE_0 && core < PDAMON_CORE_CNT) {
        status = DRV_Reg32(PDAMON_BREG_CORE_RECORD_STS(core));
        if ((status & check) == check)
            ret = KAL_TRUE;
    /* All cores are stopped */
    } else if (core == PDAMON_CORE_ALL) {
        if (((DRV_Reg32(PDAMON_BREG_CORE_RECORD_STS(0)) & check) == check) &&
            ((DRV_Reg32(PDAMON_BREG_CORE_RECORD_STS(1)) & check) == check))
            ret =  KAL_TRUE;
    }

    return ret;
}

/*-----------------------------------------------------------------------*
 * FUNCTION
 *   drv_pdamon_is_stopped_by_src
 *
 * DESCRIPTION
 *
 * PARAMETERS
 *
 * RETURNS
 *   None
 *
 *------------------------------------------------------------------------*/
kal_bool drv_pdamon_is_stopped_by_source(PDAMON_CORE_SEL core, PDAMON_STOP_SOURCE source)
{
    kal_uint32 status = 0, check = PDAMON_IS_STOP | source;

    /* One core is stopped */
    if (core >= PDAMON_CORE_0 && core < PDAMON_CORE_CNT) {
        status = DRV_Reg32(PDAMON_BREG_CORE_RECORD_STS(core));
        if ((status & check) == check)
            return KAL_TRUE;
        else
            return KAL_FALSE;
    /* All cores are stopped */
    } else if (core == PDAMON_CORE_ALL) {
        if (((DRV_Reg32(PDAMON_BREG_CORE_RECORD_STS(0)) & check) == check) &&
            ((DRV_Reg32(PDAMON_BREG_CORE_RECORD_STS(1)) & check) == check))
            return KAL_TRUE;
        else
            return KAL_FALSE;
    }
    return KAL_FALSE;
}

kal_uint32 drv_pdamon_get_pc_count(PDAMON_CORE_SEL core)
{
    return 0;
}

kal_uint32 drv_pdamon_get_pc_count_by_tc(PDAMON_CORE_SEL core, PDAMON_TC_SEL tc)
{
    kal_uint32 reg_value = 0;

    // If PDAMON IA record is not wrap, get record count from register
    reg_value = DRV_Reg32(PDAMON_BREG_PC_SRAM_WRAP_STS(core));
    if ((reg_value & PDAMON_SRAM_IS_WRAP(tc)) == 0) {
        return ((reg_value & (PDAMON_SRAM_NONWRAP_COUNT_MASK << PDAMON_SRAM_NONWRAP_COUNT_SHIFT(tc))) >> PDAMON_SRAM_NONWRAP_COUNT_SHIFT(tc));
    } else {
        // TODO :
        return PDAMON_IA_RAW_CAPACITY;
    }
}

kal_uint32 drv_pdamon_get_da_count(PDAMON_CORE_SEL core)
{
    return 0;
}

kal_uint32 drv_pdamon_get_da_count_by_tc(PDAMON_CORE_SEL core, PDAMON_TC_SEL tc)
{
    kal_uint32 reg_value = 0;

    // If PDAMON IA record is not wrap, get record count from register
    reg_value = DRV_Reg32(PDAMON_BREG_DA_SRAM_WRAP_STS(core));
    if ((reg_value & PDAMON_SRAM_IS_WRAP(tc)) == 0) {
        return ((reg_value & (PDAMON_SRAM_NONWRAP_COUNT_MASK << PDAMON_SRAM_NONWRAP_COUNT_SHIFT(tc))) >> PDAMON_SRAM_NONWRAP_COUNT_SHIFT(tc));
    } else {
        // TODO :
        return PDAMON_DA_RAW_CAPACITY;
    }
}

PDAMON_RET drv_pdamon_get_status(PDAMON_CORE_SEL core, kal_uint32 *status)
{
    /* Check parameters */
    if (status == NULL)
        return PDAMON_RET_INVALID_ARGUMENT;
    /* Read status */
    *status = DRV_Reg32(PDAMON_BREG_CORE_RECORD_STS(core));

    return PDAMON_RET_OK;
}

PDAMON_RET drv_pdamon_get_raw(PDAMON_CORE_SEL core, PDAMON_RAW_PER_CORE_T *raw)
{
    kal_uint32 i = 0, j = 0, idx = 0, cnt = 0;
    pdamon_cpuinfo_st cpu = {0};
    pdamon_sram_info_st info = {0};

    if (raw == NULL)
        return PDAMON_RET_INVALID_ARGUMENT;
    cpu.core_id = core;

    raw->last_tc_id = DRV_Reg32(PDAMON_BREG_LAST_TC_ID(cpu.core_id));
    /* PC wrap status */
    raw->pc_wrap.Raw = DRV_Reg32(PDAMON_BREG_PC_SRAM_WRAP_STS(core));
    /* PC - TC0 */
    cpu.tc_id = 0;
    idx = 0;
    if (pdamon_find_first_idx(KAL_TRUE, &cpu, &info) ==  KAL_TRUE) {
        cnt = (info.pairs > PDAMON_TC_IA_CNT(core, 0)) ? PDAMON_TC_IA_CNT(core, 0) : info.pairs;
        pdamon_get_pc_raw_by_tc(&raw->pc[idx], cnt, &cpu, &info);
    } else {
        ASSERT(0);
    }
    /* PC - TC1 */
    cpu.tc_id = 1;
    idx += PDAMON_TC_IA_CNT(core, 0);
    if (pdamon_find_first_idx(KAL_TRUE, &cpu, &info) ==  KAL_TRUE) {
        cnt = (info.pairs > PDAMON_TC_IA_CNT(core, 1)) ? PDAMON_TC_IA_CNT(core, 1) : info.pairs;
        pdamon_get_pc_raw_by_tc(&raw->pc[idx], cnt, &cpu, &info);
    } else {
        ASSERT(0);
    }
    /* PC - TC2 */
    cpu.tc_id = 2;
    idx += PDAMON_TC_IA_CNT(core, 1);
    if (pdamon_find_first_idx(KAL_TRUE, &cpu, &info) ==  KAL_TRUE) {
        cnt = (info.pairs > PDAMON_TC_IA_CNT(core, 2)) ? PDAMON_TC_IA_CNT(core, 2) : info.pairs;
        pdamon_get_pc_raw_by_tc(&raw->pc[idx], cnt, &cpu, &info);
    } else {
        ASSERT(0);
    }
    /* PC - TC3 */
    cpu.tc_id = 3;
    idx += PDAMON_TC_IA_CNT(core, 2);
    if (pdamon_find_first_idx(KAL_TRUE, &cpu, &info) ==  KAL_TRUE) {
        cnt = (info.pairs > PDAMON_TC_IA_CNT(core, 3)) ? PDAMON_TC_IA_CNT(core, 3) : info.pairs;
        pdamon_get_pc_raw_by_tc(&raw->pc[idx], cnt, &cpu, &info);
    } else {
        ASSERT(0);
    }
    /* Pipe PC */
    for (i = 0; i < PDAMON_TC_NUM_PER_CORE; i++) {
        for (j = 0; j < PDAMON_IA_PIPED_CNT; j++) {
            raw->piped_pc[i][j].pc = DRV_Reg32(PDAMON_BREG_IA_PC_PIPE(core, i, j));
            raw->piped_pc[i][j].tc = i;
            raw->piped_pc[i][j].frc = DRV_Reg32(PDAMON_BREG_IA_FRC_PIPE(core, i));
        }
    }
    /* DA wrap status */
    raw->da_wrap.Raw = DRV_Reg32(PDAMON_BREG_DA_SRAM_WRAP_STS(core));
    /* DA - TC0 */
    cpu.tc_id = 0;
    idx = 0;
    if (pdamon_find_first_idx(KAL_FALSE, &cpu, &info) ==  KAL_TRUE) {
        cnt = (info.pairs > PDAMON_TC_DA_CNT(core, 0)) ? PDAMON_TC_DA_CNT(core, 0) : info.pairs;
        pdamon_get_da_raw_by_tc(&raw->da[idx], cnt, &cpu, &info);
    } else {
        ASSERT(0);
    }
    /* DA - TC1 */
    cpu.tc_id = 1;
    idx += PDAMON_TC_DA_CNT(core, 0);
    if (pdamon_find_first_idx(KAL_FALSE, &cpu, &info) ==  KAL_TRUE) {
        cnt = (info.pairs > PDAMON_TC_DA_CNT(core, 1)) ? PDAMON_TC_DA_CNT(core, 1) : info.pairs;
        pdamon_get_da_raw_by_tc(&raw->da[idx], cnt, &cpu, &info);
    } else {
        ASSERT(0);
    }
    /* DA - TC2 */
    cpu.tc_id = 2;
    idx += PDAMON_TC_DA_CNT(core, 1);
    if (pdamon_find_first_idx(KAL_FALSE, &cpu, &info) ==  KAL_TRUE) {
        cnt = (info.pairs > PDAMON_TC_DA_CNT(core, 2)) ? PDAMON_TC_DA_CNT(core, 2) : info.pairs;
        pdamon_get_da_raw_by_tc(&raw->da[idx], cnt, &cpu, &info);
    } else {
        ASSERT(0);
    }
    /* DA - TC3 */
    cpu.tc_id = 3;
    idx += PDAMON_TC_DA_CNT(core, 2);
    if (pdamon_find_first_idx(KAL_FALSE, &cpu, &info) ==  KAL_TRUE) {
        cnt = (info.pairs > PDAMON_TC_DA_CNT(core, 3)) ? PDAMON_TC_DA_CNT(core, 3) : info.pairs;
        pdamon_get_da_raw_by_tc(&raw->da[idx], cnt, &cpu, &info);
    } else {
        ASSERT(0);
    }
    /* Pipe DA */
    raw->piped_da[0].pc = DRV_Reg32(PDAMON_BREG_DA_PC_PIPE(core));
    raw->piped_da[0].da = DRV_Reg32(PDAMON_BREG_DA_DA_PIPE(core));
    raw->piped_da[0].frc = DRV_Reg32(PDAMON_BREG_DA_FRC_PIPE(core));
    raw->piped_da[0].tc = 0xDEADBEEF;
    raw->record_sts.Raw = DRV_Reg32(PDAMON_BREG_CORE_RECORD_STS(core));
    raw->sw_trig = DRV_Reg32(PDAMON_BREG_SW_TRIG);
    raw->flag = KAL_TRUE;

    return PDAMON_RET_OK;
}

PDAMON_RET drv_pdamon_ex_get_raw(PDAMON_CORE_SEL core, PDAMON_EX_RAW_T *raw)
{
    kal_uint32 i = 0, j = 0, ex_idx = 0, ex_cnt = 0;
    pdamon_cpuinfo_st cpu = {0};
    pdamon_sram_info_st info = {0};

    if (raw == NULL)
        return PDAMON_RET_INVALID_ARGUMENT;
    cpu.core_id = core;

    raw->last_tc_id = DRV_Reg32(PDAMON_BREG_LAST_TC_ID(cpu.core_id));
    /* PC wrap status */
    raw->pc_wrap.Raw = DRV_Reg32(PDAMON_BREG_PC_SRAM_WRAP_STS(core));
    /* Pipe PC */
    for (i = 0; i < PDAMON_TC_NUM_PER_CORE; i++) {
        for (j = 0; j < PDAMON_IA_PIPED_CNT; j++) {
            raw->piped_pc[i][j] = DRV_Reg32(PDAMON_BREG_IA_PC_PIPE(core, i, j));
        }
    }
    /* Pipe PC FRC */
    for (i = 0; i < PDAMON_EX_PIPED_FRC_CNT_V2; i++) {
        raw->piped_pc_frc[i] = DRV_Reg32(PDAMON_BREG_IA_FRC_PIPE(core, i));
    }
    /* PC - TC0 */
    cpu.tc_id = 0;
    ex_idx = 0;
    if (pdamon_find_first_idx(KAL_TRUE, &cpu, &info) ==  KAL_TRUE) {
        ex_cnt = (info.pairs > g_pdamon_ex_ia_cnt[0]) ? g_pdamon_ex_ia_cnt[0] : info.pairs;
        pdamon_ex_get_pc_raw_by_tc(&raw->pc[ex_idx], ex_cnt, &cpu, &info);
    } else {
        ASSERT(0);
    }
    /* PC - TC1 */
    cpu.tc_id = 1;
    ex_idx += g_pdamon_ex_ia_cnt[0];
    if (pdamon_find_first_idx(KAL_TRUE, &cpu, &info) ==  KAL_TRUE) {
        ex_cnt = (info.pairs > g_pdamon_ex_ia_cnt[1]) ? g_pdamon_ex_ia_cnt[1] : info.pairs;
        pdamon_ex_get_pc_raw_by_tc(&raw->pc[ex_idx], ex_cnt, &cpu, &info);
    } else {
        ASSERT(0);
    }
    /* PC - TC2 */
    cpu.tc_id = 2;
    ex_idx += g_pdamon_ex_ia_cnt[1];
    if (pdamon_find_first_idx(KAL_TRUE, &cpu, &info) ==  KAL_TRUE) {
        ex_cnt = (info.pairs > g_pdamon_ex_ia_cnt[2]) ? g_pdamon_ex_ia_cnt[2] : info.pairs;
        pdamon_ex_get_pc_raw_by_tc(&raw->pc[ex_idx], ex_cnt, &cpu, &info);
    } else {
        ASSERT(0);
    }
    /* PC - TC3 */
    cpu.tc_id = 3;
    ex_idx += g_pdamon_ex_ia_cnt[2];
    if (pdamon_find_first_idx(KAL_TRUE, &cpu, &info) ==  KAL_TRUE) {
        ex_cnt = (info.pairs > g_pdamon_ex_ia_cnt[3]) ? g_pdamon_ex_ia_cnt[3] : info.pairs;
        pdamon_ex_get_pc_raw_by_tc(&raw->pc[ex_idx], ex_cnt, &cpu, &info);
    } else {
        ASSERT(0);
    }
    /* DA wrap status */
    raw->da_wrap.Raw = DRV_Reg32(PDAMON_BREG_DA_SRAM_WRAP_STS(core));
    /* Pipe DA */
    raw->piped_da[0].pc = DRV_Reg32(PDAMON_BREG_DA_PC_PIPE(core));
    raw->piped_da[0].da = DRV_Reg32(PDAMON_BREG_DA_DA_PIPE(core));
    raw->piped_da[0].frc = DRV_Reg32(PDAMON_BREG_DA_FRC_PIPE(core));
    raw->piped_da[0].tc = 0xDEADBEEF;
    /* DA - TC0 */
    cpu.tc_id = 0;
    ex_idx = 0;
    if (pdamon_find_first_idx(KAL_FALSE, &cpu, &info) ==  KAL_TRUE) {
        ex_cnt = (info.pairs > g_pdamon_ex_da_cnt[0]) ? g_pdamon_ex_da_cnt[0] : info.pairs;
        pdamon_ex_get_da_raw_by_tc(&raw->da[ex_idx], ex_cnt, &cpu, &info);
    } else {
        ASSERT(0);
    }
    /* DA - TC1 */
    cpu.tc_id = 1;
    ex_idx += g_pdamon_ex_da_cnt[0];
    if (pdamon_find_first_idx(KAL_FALSE, &cpu, &info) ==  KAL_TRUE) {
        ex_cnt = (info.pairs > g_pdamon_ex_da_cnt[1]) ? g_pdamon_ex_da_cnt[1] : info.pairs;
        pdamon_ex_get_da_raw_by_tc(&raw->da[ex_idx], ex_cnt, &cpu, &info);
    } else {
        ASSERT(0);
    }
    /* DA - TC2 */
    cpu.tc_id = 2;
    ex_idx += g_pdamon_ex_da_cnt[1];
    if (pdamon_find_first_idx(KAL_FALSE, &cpu, &info) ==  KAL_TRUE) {
        ex_cnt = (info.pairs > g_pdamon_ex_da_cnt[2]) ? g_pdamon_ex_da_cnt[2] : info.pairs;
        pdamon_ex_get_da_raw_by_tc(&raw->da[ex_idx], ex_cnt, &cpu, &info);
    } else {
        ASSERT(0);
    }
    /* DA - TC3 */
    cpu.tc_id = 3;
    ex_idx += g_pdamon_ex_da_cnt[2];
    if (pdamon_find_first_idx(KAL_FALSE, &cpu, &info) ==  KAL_TRUE) {
        ex_cnt = (info.pairs > g_pdamon_ex_da_cnt[3]) ? g_pdamon_ex_da_cnt[3] : info.pairs;
        pdamon_ex_get_da_raw_by_tc(&raw->da[ex_idx], ex_cnt, &cpu, &info);
    } else {
        ASSERT(0);
    }
    /* Status */
    raw->record_sts.Raw = DRV_Reg32(PDAMON_BREG_CORE_RECORD_STS(core));
    raw->sw_trig = DRV_Reg32(PDAMON_BREG_SW_TRIG);

    return PDAMON_RET_OK;
}

PDAMON_RET drv_pdamon_nex_get_raw(PDAMON_CORE_SEL core, PDAMON_NEX_RAW_T *raw)
{
    kal_uint32 i = 0, j = 0, nex_idx = 0, nex_cnt = 0;
    pdamon_cpuinfo_st cpu = {0};
    pdamon_sram_info_st info = {0};

    if (raw == NULL)
        return PDAMON_RET_INVALID_ARGUMENT;
    cpu.core_id = core;

    /* Status */
    raw->record_sts.Raw = DRV_Reg32(PDAMON_BREG_CORE_RECORD_STS(core));
    raw->sw_trig = DRV_Reg32(PDAMON_BREG_SW_TRIG);
    /* PC wrap status */
    raw->pc_wrap.Raw = DRV_Reg32(PDAMON_BREG_PC_SRAM_WRAP_STS(core));
    /* Pipe PC */
    for (i = 0; i < PDAMON_TC_NUM_PER_CORE; i++) {
        for (j = 0; j < PDAMON_IA_PIPED_CNT; j++) {
            raw->piped_pc[i][j] = DRV_Reg32(PDAMON_BREG_IA_PC_PIPE(core, i, j));
        }
    }
    /* Pipe PC FRC */
    for (i = 0; i < PDAMON_NEX_PIPED_FRC_CNT_V2; i++) {
        raw->piped_pc_frc[i] = DRV_Reg32(PDAMON_BREG_IA_FRC_PIPE(core, i));
    }
    /* PC - TC0 */
    cpu.tc_id = 0;
    nex_idx = 0;
    if (pdamon_find_first_idx(KAL_TRUE, &cpu, &info) ==  KAL_TRUE) {
        nex_cnt = (info.pairs > g_pdamon_nex_ia_cnt[0]) ? g_pdamon_nex_ia_cnt[0] : info.pairs;
        pdamon_ex_get_pc_raw_by_tc(&raw->pc[nex_idx], nex_cnt, &cpu, &info);
    } else {
        ASSERT(0);
    }
    /* PC - TC1 */
    cpu.tc_id = 1;
    nex_idx += g_pdamon_nex_ia_cnt[0];
    if (pdamon_find_first_idx(KAL_TRUE, &cpu, &info) ==  KAL_TRUE) {
        nex_cnt = (info.pairs > g_pdamon_nex_ia_cnt[1]) ? g_pdamon_nex_ia_cnt[1] : info.pairs;
        pdamon_ex_get_pc_raw_by_tc(&raw->pc[nex_idx], nex_cnt, &cpu, &info);
    } else {
        ASSERT(0);
    }
    /* PC - TC2 */
    cpu.tc_id = 2;
    nex_idx += g_pdamon_nex_ia_cnt[1];
    if (pdamon_find_first_idx(KAL_TRUE, &cpu, &info) ==  KAL_TRUE) {
        nex_cnt = (info.pairs > g_pdamon_nex_ia_cnt[2]) ? g_pdamon_nex_ia_cnt[2] : info.pairs;
        pdamon_ex_get_pc_raw_by_tc(&raw->pc[nex_idx], nex_cnt, &cpu, &info);
    } else {
        ASSERT(0);
    }
    /* PC - TC3 */
    cpu.tc_id = 3;
    nex_idx += g_pdamon_nex_ia_cnt[2];
    if (pdamon_find_first_idx(KAL_TRUE, &cpu, &info) ==  KAL_TRUE) {
        nex_cnt = (info.pairs > g_pdamon_nex_ia_cnt[3]) ? g_pdamon_nex_ia_cnt[3] : info.pairs;
        pdamon_ex_get_pc_raw_by_tc(&raw->pc[nex_idx], nex_cnt, &cpu, &info);
    } else {
        ASSERT(0);
    }

    return PDAMON_RET_OK;
}

PDAMON_RET drv_pdamon_ex_get_all_raw()
{
    PDAMON_CORE_SEL i = PDAMON_CORE_0;

    kal_mem_set(g_pdamon_full, 0, sizeof(PDAMON_RAW_PER_CORE_T) * PDAMON_CORE_NUM);
    for (i = PDAMON_CORE_0; i < PDAMON_CORE_CNT; i++) {
        /* Get raw data of per core */
        drv_pdamon_get_raw(i, &g_pdamon_full[i]);
        g_pdamon_full[i].flag = KAL_TRUE;
    }

    return PDAMON_RET_OK;
}

PDAMON_RET drv_pdamon_mask_stop_sources(PDAMON_CORE_SEL core, PDAMON_STOP_SOURCE sources, kal_bool mask)
{
    kal_uint32 mask_ctrl = 0;

    if (sources == PDAMON_SRC_NONE) {
        return PDAMON_RET_OK;
    }

    if ((sources & PDAMON_SRC_PC0_MATCH) ||
        (sources & PDAMON_SRC_PC1_MATCH) ||
        (sources & PDAMON_SRC_PC2_MATCH) ||
        (sources & PDAMON_SRC_PC3_MATCH) ||
        (sources & PDAMON_SRC_PC4_MATCH) ||
        (sources & PDAMON_SRC_PC5_MATCH)) {
        return PDAMON_RET_INVALID_ARGUMENT;
    }

    if (sources & PDAMON_SRC_MDMCU_BUSMON)
        mask_ctrl |= PDAMON_EVT_MASK_BUSMON_MDMCU;
    if (sources & PDAMON_SRC_MDINFRA_BUSMON)
        mask_ctrl |= PDAMON_EVT_MASK_BUSMON_MDINFRA;
    if (sources & PDAMON_SRC_MD_BUSERR)
        mask_ctrl |= PDAMON_EVT_MASK_BUS_MD;
    if (sources & PDAMON_SRC_RGU)
        mask_ctrl |= PDAMON_EVT_MASK_RGU;
    if (sources & PDAMON_SRC_RMPU)
        mask_ctrl |= PDAMON_EVT_MASK_RMPU;
    if (sources & PDAMON_SRC_CTI)
        mask_ctrl |= PDAMON_EVT_MASK_CTI;
    if (sources & PDAMON_SRC_CMERR)
        mask_ctrl |= PDAMON_EVT_MASK_CM_DECERR;
    if (sources & PDAMON_SRC_SPRAM_DECERR)
        mask_ctrl |= PDAMON_EVT_MASK_SPRAM_DECERR;
    if (sources & PDAMON_SRC_MDMCU_DECERR)
        mask_ctrl |= PDAMON_EVT_MASK_MDMCU_DECERR;
    if (sources & PDAMON_SRC_GCR)
        mask_ctrl |= PDAMON_EVT_MASK_GCR;
    if (sources & PDAMON_SRC_SW)
        mask_ctrl |= PDAMON_EVT_MASK_SW;

    /*
     * Mask/Unmask RMPU source
     */
    if (mask == KAL_TRUE) {
        DRV_WriteReg32(PDAMON_NBREG_EVENT_MASK, DRV_Reg32(PDAMON_NBREG_EVENT_MASK) | mask_ctrl);
    } else {
        DRV_WriteReg32(PDAMON_NBREG_EVENT_MASK, DRV_Reg32(PDAMON_NBREG_EVENT_MASK) & (~(mask_ctrl)));
    }
    MO_Sync();

    return PDAMON_RET_OK;
}

