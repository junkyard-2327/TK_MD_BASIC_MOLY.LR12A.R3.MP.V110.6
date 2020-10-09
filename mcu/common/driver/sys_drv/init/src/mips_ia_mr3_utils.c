/******************************************************************************
 *  Copyright Statement:
 *  --------------------
 *  This software is protected by Copyright and the information contained
 *  herein is confidential. The software may not be copied and the information
 *  contained herein may not be used or disclosed except with the written
 *  permission of MediaTek Inc. (C) 2017
 *
 *****************************************************************************/

#if !defined(GEN_FOR_PC) && defined(__MTK_TARGET__)
#include "mips_ia_utils.h"
#include "kal_iram_section_defs.h"
#include "kal_public_defs.h"
#include "boot.h"
#include "mips_ia_pmu_montr.h"
#include "drv_mdcirq_reg.h"
#include "dcm_sw.h"

const kal_int32 mips_ia_mr3_lv3_dcm_enable(const kal_uint32 en)
{
    return 0;
}

void mips_ia_mr3_gcr_init(void)
{
}

#endif /* !defined(GEN_FOR_PC) && defined(__MTK_TARGET__) */
