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

/*******************************************************************************
 *
 * Filename:
 * ---------
 *    DVFS_drv_common.h
 *
 * Project:
 * --------
 *    UMOLYA
 *
 * Description:
 * ------------
 *    DVFS driver common defines and utilities.
 *
 * Author:
 * -------
 * -------
 *
 *============================================================================
 *             HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 *
 * removed!
 * removed!
 *
 * removed!
 * removed!
 *
 * removed!
 *
 * removed!
 * removed!
 *
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 *
 * removed!
 *
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 *
 * removed!
 *
 * removed!
 * removed!
 *
 * removed!
 * removed!
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

#ifndef __DVFS_DRV_COMMON_H__
#define __DVFS_DRV_COMMON_H__

#if defined(DVFS_HVT)
    #include <base/kal/kal_release.h>
    #include <base/ut/ut_common.h>
#else
    #include "kal_public_api.h"
    #include "drv_comm.h"

    #if defined(L1_SIM) && !defined(DVFS_UE_SIMULATOR)
        #include "simul_public.h"
    #else
        #include "us_timer.h"            /* for ust_get_current_time, ust_us_duration */
    #endif
#endif

#include "DVFS_drv_public.h" /* for DVFS_FLOW_ONLY define */
#include "DVFS_drv_error.h"

#define DVFS_ARCH_GEN93_M17 1
#define DVFS_ARCH_GEN93_L17 2

#if defined(MT6763) || defined(MT6771) || defined(MT6765) || defined(MT6761) || defined(MT6768)
    #define DVFS_SCEN_ARCH DVFS_ARCH_GEN93_M17
#elif defined(MT6739)
    #define DVFS_SCEN_ARCH DVFS_ARCH_GEN93_L17
#endif

#if defined(MT6771)
    #define DVFS_DUMP_MORE_AP_REG_INFO 1
#else
    #define DVFS_DUMP_MORE_AP_REG_INFO 0
#endif

#define DVFS_PLL_COUNT          4 /* Total DFS PLL count. */
#define DVFS_BUCK_COUNT         3 /* Total power buck count */
#define DVFS_GEAR_COUNT         8 /* Number of DVFS gears */

#define DVFS_INIT_EVENT        13 /* Initial event */

#define DVFS_VMD_BUCK           0 /* VMD mapping index */
#define DVFS_VMODEM_BUCK        1 /* VMODEM mapping index */
#define DVFS_VSRAM_BUCK         2 /* VSRAM mapping index */

#define DVFS_MCU_PLL            0 /* MD_MCU PLL mapping index */
#define DVFS_TX_PLL             1 /* MD_TX PLL mapping index */
#define DVFS_VDSP_PLL           2 /* MD_VDSP PLL mapping index */
#define DVFS_BRP_PLL            3 /* MD_BRP PLL mapping index */

#define DVFS_MD_REC_CNT         8 /* MD record number in dvfs_rc */
#define DVFS_AP_REC_CNT         8 /* AP record number in dvfs_rc */

#if defined(MT6763) || defined(MT6739) || defined(MT6771)
#define DVFS_WORD_PER_AP_REC 2
#elif defined(MT6765) || defined(MT6761) || defined(MT6768)
#define DVFS_WORD_PER_AP_REC 3
#endif

#if defined(MT6771)
#define DVFS_UNUSED_AP_REC_WORD 1
#else
#define DVFS_UNUSED_AP_REC_WORD 0
#endif

#define DVFS_PLL_SETTLE_TIME   30 /* PLL settle time, in us. */
#define DVFS_BUK_SETTLE_TIME  254 /* Buck settle time, in us. Ref: 2017/7/7, MD DVS+AP LP stress test w/ 50+ us TX/ZQ semaphore locked time. */

#define DVFS_AP_BUCK_MODEL_VER  0x4776621 /* legacy AP_BUCK_MODEL for verification: 20160615_mt6293_4776621_16061400 */
#define DVFS_RC_VER             0x4903858 /* DVFS_RC is available from this version */

#if defined(MT6763)
#define DVFS_VMD_MIN_GEAR          0 /* VMD minimal gear index */
#define DVFS_VMD_MAX_GEAR          2 /* VMD maximal gear index */
#define DVFS_VMODEM_MIN_GEAR       0 /* VMODEM minimal gear index. */
#define DVFS_VMODEM_MAX_GEAR       2 /* VMODEM maximal gear index without considering parking state for PTP */
#define DVFS_VMODEM_PTP_PARK_GEAR  2 /* VMODEM maximal gear index for PTP parking */
#define DVFS_VSRAM_MIN_GEAR        0 /* VSRAM minimal gear index */
#define DVFS_VSRAM_MAX_GEAR        0 /* VSRAM maximal gear index */

#define DVFS_MDMCUPLL_MIN_GEAR  0 /* MCU PLL minimal gear index */
#define DVFS_MDMCUPLL_MAX_GEAR  7 /* MCU PLL maximal gear index */
#define DVFS_MDVDSPPLL_MIN_GEAR 0 /* VDSP PLL minimal gear index */
#define DVFS_MDVDSPPLL_MAX_GEAR 7 /* VDSP PLL maximal gear index */
#define DVFS_MDBRPPLL_MIN_GEAR  0 /* BRP PLL minimal gear index */
#define DVFS_MDBRPPLL_MAX_GEAR  7 /* BRP PLL maximal gear index */
#define DVFS_MDTXPLL_MIN_GEAR   0 /* TX PLL minimal gear index */
#define DVFS_MDTXPLL_MAX_GEAR   7 /* TX PLL maximal gear index */
#elif defined(MT6739)
#define DVFS_VMD_MIN_GEAR          0 /* VMD minimal gear index */
#define DVFS_VMD_MAX_GEAR          0 /* VMD maximal gear index */
#define DVFS_VMODEM_MIN_GEAR       0 /* VMODEM minimal gear index. */
#define DVFS_VMODEM_MAX_GEAR       0 /* VMODEM maximal gear index without considering parking state for PTP */
#define DVFS_VMODEM_PTP_PARK_GEAR  0 /* VMODEM maximal gear index for PTP parking */
#define DVFS_VSRAM_MIN_GEAR        0 /* VSRAM minimal gear index */
#define DVFS_VSRAM_MAX_GEAR        0 /* VSRAM maximal gear index */

#define DVFS_MDMCUPLL_MIN_GEAR  0 /* MCU PLL minimal gear index */
#define DVFS_MDMCUPLL_MAX_GEAR  0 /* MCU PLL maximal gear index */
#define DVFS_MDVDSPPLL_MIN_GEAR 0 /* VDSP PLL minimal gear index */
#define DVFS_MDVDSPPLL_MAX_GEAR 7 /* VDSP PLL maximal gear index */
#define DVFS_MDBRPPLL_MIN_GEAR  0 /* BRP PLL minimal gear index */
#define DVFS_MDBRPPLL_MAX_GEAR  7 /* BRP PLL maximal gear index */
#define DVFS_MDTXPLL_MIN_GEAR   0 /* TX PLL minimal gear index */
#define DVFS_MDTXPLL_MAX_GEAR   7 /* TX PLL maximal gear index */
#elif defined(MT6771)
#define DVFS_VMD_MIN_GEAR          0 /* VMD minimal gear index */
#define DVFS_VMD_MAX_GEAR          1 /* VMD maximal gear index */
#define DVFS_VMODEM_MIN_GEAR       0 /* VMODEM minimal gear index. */
#define DVFS_VMODEM_MAX_GEAR       2 /* VMODEM maximal gear index without considering parking state for PTP */
#define DVFS_VMODEM_PTP_PARK_GEAR  2 /* VMODEM maximal gear index for PTP parking */
#define DVFS_VSRAM_MIN_GEAR        0 /* VSRAM minimal gear index */
#define DVFS_VSRAM_MAX_GEAR        0 /* VSRAM maximal gear index */

#define DVFS_MDMCUPLL_MIN_GEAR  0 /* MCU PLL minimal gear index */
#define DVFS_MDMCUPLL_MAX_GEAR  7 /* MCU PLL maximal gear index */
#define DVFS_MDVDSPPLL_MIN_GEAR 0 /* VDSP PLL minimal gear index */
#define DVFS_MDVDSPPLL_MAX_GEAR 7 /* VDSP PLL maximal gear index */
#define DVFS_MDBRPPLL_MIN_GEAR  0 /* BRP PLL minimal gear index */
#define DVFS_MDBRPPLL_MAX_GEAR  7 /* BRP PLL maximal gear index */
#define DVFS_MDTXPLL_MIN_GEAR   0 /* TX PLL minimal gear index */
#define DVFS_MDTXPLL_MAX_GEAR   7 /* TX PLL maximal gear index */
#elif defined(MT6765)
#define DVFS_VMD_MIN_GEAR          1 /* VMD minimal gear index */
#define DVFS_VMD_MAX_GEAR          3 /* VMD maximal gear index */
#define DVFS_VMODEM_MIN_GEAR       0 /* VMODEM minimal gear index. */
#define DVFS_VMODEM_MAX_GEAR       2 /* VMODEM maximal gear index without considering parking state for PTP */
#define DVFS_VMODEM_PTP_PARK_GEAR  2 /* VMODEM maximal gear index for PTP parking */
#define DVFS_VSRAM_MIN_GEAR        0 /* VSRAM minimal gear index */
#define DVFS_VSRAM_MAX_GEAR        0 /* VSRAM maximal gear index */

#define DVFS_MDMCUPLL_MIN_GEAR  0 /* MCU PLL minimal gear index */
#define DVFS_MDMCUPLL_MAX_GEAR  7 /* MCU PLL maximal gear index */
#define DVFS_MDVDSPPLL_MIN_GEAR 0 /* VDSP PLL minimal gear index */
#define DVFS_MDVDSPPLL_MAX_GEAR 7 /* VDSP PLL maximal gear index */
#define DVFS_MDBRPPLL_MIN_GEAR  0 /* BRP PLL minimal gear index */
#define DVFS_MDBRPPLL_MAX_GEAR  7 /* BRP PLL maximal gear index */
#define DVFS_MDTXPLL_MIN_GEAR   0 /* TX PLL minimal gear index */
#define DVFS_MDTXPLL_MAX_GEAR   7 /* TX PLL maximal gear index */
#elif defined(MT6761)
#define DVFS_VMD_MIN_GEAR          1 /* VMD minimal gear index */
#define DVFS_VMD_MAX_GEAR          3 /* VMD maximal gear index */
#define DVFS_VMODEM_MIN_GEAR       0 /* VMODEM minimal gear index. */
#define DVFS_VMODEM_MAX_GEAR       2 /* VMODEM maximal gear index without considering parking state for PTP */
#define DVFS_VMODEM_PTP_PARK_GEAR  2 /* VMODEM maximal gear index for PTP parking */
#define DVFS_VSRAM_MIN_GEAR        0 /* VSRAM minimal gear index */
#define DVFS_VSRAM_MAX_GEAR        0 /* VSRAM maximal gear index */

#define DVFS_MDMCUPLL_MIN_GEAR  0 /* MCU PLL minimal gear index */
#define DVFS_MDMCUPLL_MAX_GEAR  7 /* MCU PLL maximal gear index */
#define DVFS_MDVDSPPLL_MIN_GEAR 0 /* VDSP PLL minimal gear index */
#define DVFS_MDVDSPPLL_MAX_GEAR 7 /* VDSP PLL maximal gear index */
#define DVFS_MDBRPPLL_MIN_GEAR  0 /* BRP PLL minimal gear index */
#define DVFS_MDBRPPLL_MAX_GEAR  7 /* BRP PLL maximal gear index */
#define DVFS_MDTXPLL_MIN_GEAR   0 /* TX PLL minimal gear index */
#define DVFS_MDTXPLL_MAX_GEAR   7 /* TX PLL maximal gear index */
#elif defined(MT6768)
#define DVFS_VMD_MIN_GEAR          1 /* VMD minimal gear index */
#define DVFS_VMD_MAX_GEAR          3 /* VMD maximal gear index */
#define DVFS_VMODEM_MIN_GEAR       0 /* VMODEM minimal gear index. */
#define DVFS_VMODEM_MAX_GEAR       2 /* VMODEM maximal gear index without considering parking state for PTP */
#define DVFS_VMODEM_PTP_PARK_GEAR  2 /* VMODEM maximal gear index for PTP parking */
#define DVFS_VSRAM_MIN_GEAR        0 /* VSRAM minimal gear index */
#define DVFS_VSRAM_MAX_GEAR        0 /* VSRAM maximal gear index */

#define DVFS_MDMCUPLL_MIN_GEAR  0 /* MCU PLL minimal gear index */
#define DVFS_MDMCUPLL_MAX_GEAR  7 /* MCU PLL maximal gear index */
#define DVFS_MDVDSPPLL_MIN_GEAR 0 /* VDSP PLL minimal gear index */
#define DVFS_MDVDSPPLL_MAX_GEAR 7 /* VDSP PLL maximal gear index */
#define DVFS_MDBRPPLL_MIN_GEAR  0 /* BRP PLL minimal gear index */
#define DVFS_MDBRPPLL_MAX_GEAR  7 /* BRP PLL maximal gear index */
#define DVFS_MDTXPLL_MIN_GEAR   0 /* TX PLL minimal gear index */
#define DVFS_MDTXPLL_MAX_GEAR   7 /* TX PLL maximal gear index */

#endif

#if DVFS_SCEN_ARCH == DVFS_ARCH_GEN93_M17
#define DVFS_MCU_GEAR0_BUK_GEAR_MAP DVFS_VMD_MIN_GEAR
#define DVFS_MCU_GEAR1_BUK_GEAR_MAP DVFS_VMD_MAX_GEAR
#define DVFS_MCU_GEAR2_BUK_GEAR_MAP DVFS_VMD_MAX_GEAR
#define DVFS_MCU_GEAR3_BUK_GEAR_MAP DVFS_VMD_MAX_GEAR
#define DVFS_MCU_GEAR4_BUK_GEAR_MAP DVFS_VMD_MAX_GEAR
#define DVFS_MCU_GEAR5_BUK_GEAR_MAP DVFS_VMD_MAX_GEAR
#define DVFS_MCU_GEAR6_BUK_GEAR_MAP DVFS_VMD_MAX_GEAR
#define DVFS_MCU_GEAR7_BUK_GEAR_MAP DVFS_VMD_MAX_GEAR

#define DVFS_TX_GEAR0_BUK_GEAR_MAP (0 << 4)
#define DVFS_TX_GEAR1_BUK_GEAR_MAP (0 << 4)
#define DVFS_TX_GEAR2_BUK_GEAR_MAP (0 << 4)
#define DVFS_TX_GEAR3_BUK_GEAR_MAP (0 << 4)
#define DVFS_TX_GEAR4_BUK_GEAR_MAP (0 << 4)
#define DVFS_TX_GEAR5_BUK_GEAR_MAP (0 << 4)
#define DVFS_TX_GEAR6_BUK_GEAR_MAP (0 << 4)
#define DVFS_TX_GEAR7_BUK_GEAR_MAP (0 << 4)

#define DVFS_VDSP_GEAR0_BUK_GEAR_MAP (0 << 4)
#define DVFS_VDSP_GEAR1_BUK_GEAR_MAP (0 << 4)
#define DVFS_VDSP_GEAR2_BUK_GEAR_MAP (1 << 4)
#define DVFS_VDSP_GEAR3_BUK_GEAR_MAP (1 << 4)
#define DVFS_VDSP_GEAR4_BUK_GEAR_MAP (1 << 4)
#define DVFS_VDSP_GEAR5_BUK_GEAR_MAP (2 << 4)
#define DVFS_VDSP_GEAR6_BUK_GEAR_MAP (2 << 4)
#define DVFS_VDSP_GEAR7_BUK_GEAR_MAP (2 << 4)

#define DVFS_BRP_GEAR0_BUK_GEAR_MAP (0 << 4)
#define DVFS_BRP_GEAR1_BUK_GEAR_MAP (0 << 4)
#define DVFS_BRP_GEAR2_BUK_GEAR_MAP (0 << 4)
#define DVFS_BRP_GEAR3_BUK_GEAR_MAP (0 << 4)
#define DVFS_BRP_GEAR4_BUK_GEAR_MAP (1 << 4)
#define DVFS_BRP_GEAR5_BUK_GEAR_MAP (1 << 4)
#define DVFS_BRP_GEAR6_BUK_GEAR_MAP (2 << 4)
#define DVFS_BRP_GEAR7_BUK_GEAR_MAP (2 << 4)
#elif DVFS_SCEN_ARCH == DVFS_ARCH_GEN93_L17
#define DVFS_MCU_GEAR0_BUK_GEAR_MAP DVFS_VMD_MAX_GEAR
#define DVFS_MCU_GEAR1_BUK_GEAR_MAP DVFS_VMD_MAX_GEAR
#define DVFS_MCU_GEAR2_BUK_GEAR_MAP DVFS_VMD_MAX_GEAR
#define DVFS_MCU_GEAR3_BUK_GEAR_MAP DVFS_VMD_MAX_GEAR
#define DVFS_MCU_GEAR4_BUK_GEAR_MAP DVFS_VMD_MAX_GEAR
#define DVFS_MCU_GEAR5_BUK_GEAR_MAP DVFS_VMD_MAX_GEAR
#define DVFS_MCU_GEAR6_BUK_GEAR_MAP DVFS_VMD_MAX_GEAR
#define DVFS_MCU_GEAR7_BUK_GEAR_MAP DVFS_VMD_MAX_GEAR

#define DVFS_TX_GEAR0_BUK_GEAR_MAP (0 << 4)
#define DVFS_TX_GEAR1_BUK_GEAR_MAP (0 << 4)
#define DVFS_TX_GEAR2_BUK_GEAR_MAP (1 << 4)
#define DVFS_TX_GEAR3_BUK_GEAR_MAP (1 << 4)
#define DVFS_TX_GEAR4_BUK_GEAR_MAP (1 << 4)
#define DVFS_TX_GEAR5_BUK_GEAR_MAP (1 << 4)
#define DVFS_TX_GEAR6_BUK_GEAR_MAP (1 << 4)
#define DVFS_TX_GEAR7_BUK_GEAR_MAP (1 << 4)

#define DVFS_VDSP_GEAR0_BUK_GEAR_MAP (0 << 4)
#define DVFS_VDSP_GEAR1_BUK_GEAR_MAP (0 << 4)
#define DVFS_VDSP_GEAR2_BUK_GEAR_MAP (0 << 4)
#define DVFS_VDSP_GEAR3_BUK_GEAR_MAP (1 << 4)
#define DVFS_VDSP_GEAR4_BUK_GEAR_MAP (1 << 4)
#define DVFS_VDSP_GEAR5_BUK_GEAR_MAP (1 << 4)
#define DVFS_VDSP_GEAR6_BUK_GEAR_MAP (1 << 4)
#define DVFS_VDSP_GEAR7_BUK_GEAR_MAP (1 << 4)

#define DVFS_BRP_GEAR0_BUK_GEAR_MAP (0 << 4)
#define DVFS_BRP_GEAR1_BUK_GEAR_MAP (0 << 4)
#define DVFS_BRP_GEAR2_BUK_GEAR_MAP (0 << 4)
#define DVFS_BRP_GEAR3_BUK_GEAR_MAP (0 << 4)
#define DVFS_BRP_GEAR4_BUK_GEAR_MAP (0 << 4)
#define DVFS_BRP_GEAR5_BUK_GEAR_MAP (1 << 4)
#define DVFS_BRP_GEAR6_BUK_GEAR_MAP (1 << 4)
#define DVFS_BRP_GEAR7_BUK_GEAR_MAP (1 << 4)
#endif

/*
 * PMIC VOUT Selection code.
 */
#define DVFS_BUK_600_MV     0x10
#define DVFS_BUK_625_MV     0x14
#define DVFS_BUK_650_MV     0x18
#define DVFS_BUK_675_MV     0x1C
#define DVFS_BUK_700_MV     0x20
#define DVFS_BUK_725_MV     0x24
#define DVFS_BUK_750_MV     0x28
#define DVFS_BUK_775_MV     0x2C
#define DVFS_BUK_793_MV     0x2f
#define DVFS_BUK_800_MV     0x30

/*
 * MIPS IA PLL DVFS gears.
 */

#define DVFS_MIPS_TURBO_GEAR_FOR_LOW_VMD 3

#define DVFS_MIPS_600_MHZ 0
#define DVFS_MIPS_630_MHZ 1
#define DVFS_MIPS_670_MHZ 2
#if defined(MT6761)
#define DVFS_MIPS_680_MHZ 3
#elif defined(MT6768)
#define DVFS_MIPS_720_MHZ 3
#else
#define DVFS_MIPS_710_MHZ 3
#endif
#define DVFS_MIPS_750_MHZ 4
#define DVFS_MIPS_780_MHZ 5
#define DVFS_MIPS_820_MHZ 6
#define DVFS_MIPS_864_MHZ 7

/*
 * TX PLL DVFS gears.
 */
#define DVFS_TX_260_MHZ 0
#define DVFS_TX_265_MHZ 1
#define DVFS_TX_271_MHZ 2
#define DVFS_TX_277_MHZ 3
#define DVFS_TX_282_MHZ 4
#define DVFS_TX_288_MHZ 5
#define DVFS_TX_294_MHZ 6
#define DVFS_TX_300_MHZ 7

#if DVFS_SCEN_ARCH == DVFS_ARCH_GEN93_M17
    /*
     * VDSP PLL DVFS gears.
     */
    #define DVFS_VDSP_300_MHZ 0
    #define DVFS_VDSP_336_MHZ 1
    #define DVFS_VDSP_400_MHZ 2
    #define DVFS_VDSP_450_MHZ 3
    #define DVFS_VDSP_500_MHZ 4
    #define DVFS_VDSP_606_MHZ 5
    #define DVFS_VDSP_652_MHZ 6
    #define DVFS_VDSP_672_MHZ 7

    /*
     * BRP PLL DVFS gears.
     */
    #define DVFS_BRP_167_MHZ 0
    #define DVFS_BRP_200_MHZ 1
    #define DVFS_BRP_210_MHZ 2
    #define DVFS_BRP_240_MHZ 3
    #define DVFS_BRP_250_MHZ 4
    #define DVFS_BRP_300_MHZ 5
    #define DVFS_BRP_350_MHZ 6
    #define DVFS_BRP_400_MHZ 7
#elif DVFS_SCEN_ARCH == DVFS_ARCH_GEN93_L17
    /*
     * VDSP PLL DVFS gears.
     */
    #define DVFS_VDSP_250_MHZ 0
    #define DVFS_VDSP_300_MHZ 1
    #define DVFS_VDSP_336_MHZ 2
    #define DVFS_VDSP_375_MHZ 3
    #define DVFS_VDSP_400_MHZ 4
    #define DVFS_VDSP_422_MHZ 5
    #define DVFS_VDSP_435_MHZ 6
    #define DVFS_VDSP_450_MHZ 7

    /*
     * BRP PLL DVFS gears.
     */
    #define DVFS_BRP_150_MHZ 0
    #define DVFS_BRP_180_MHZ 1
    #define DVFS_BRP_210_MHZ 2
    #define DVFS_BRP_225_MHZ 3
    #define DVFS_BRP_240_MHZ 4
    #define DVFS_BRP_255_MHZ 5
    #define DVFS_BRP_270_MHZ 6
    #define DVFS_BRP_300_MHZ 7
#endif

#if DVFS_SCEN_ARCH == DVFS_ARCH_GEN93_M17
    /*
     * MCU PLL DFS info
     */
    #define DVFS_MCU_DIV 4
    #define DVFS_MCU_FREQ_GEAR0 600
    #define DVFS_MCU_FREQ_GEAR1 630
    #define DVFS_MCU_FREQ_GEAR2 670
    #if defined(MT6761)
    #define DVFS_MCU_FREQ_GEAR3 680
    #elif defined(MT6768)
    #define DVFS_MCU_FREQ_GEAR3 720
    #else
    #define DVFS_MCU_FREQ_GEAR3 710
    #endif
    #define DVFS_MCU_FREQ_GEAR4 750
    #define DVFS_MCU_FREQ_GEAR5 780
    #define DVFS_MCU_FREQ_GEAR6 820
    #define DVFS_MCU_FREQ_GEAR7 864

    #define DVFS_MCU_PCW13_GEAR0 0xB8A
    #define DVFS_MCU_PCW13_GEAR1 0xC1E
    #define DVFS_MCU_PCW13_GEAR2 0xCE2
    #if defined(MT6761)
    #define DVFS_MCU_PCW13_GEAR3 0xD14
    #elif defined(MT6768)
    #define DVFS_MCU_PCW13_GEAR3 0xDD9
    #else
    #define DVFS_MCU_PCW13_GEAR3 0xDA7
    #endif
    #define DVFS_MCU_PCW13_GEAR4 0xE6C
    #define DVFS_MCU_PCW13_GEAR5 0xF00
    #define DVFS_MCU_PCW13_GEAR6 0xFC5
    #define DVFS_MCU_PCW13_GEAR7 0x109E

    /*
     * TX PLL DFS info
     */
    #define DVFS_TX_DIV 8
    #define DVFS_TX_FREQ_GEAR0 260
    #define DVFS_TX_FREQ_GEAR1 265
    #define DVFS_TX_FREQ_GEAR2 271
    #define DVFS_TX_FREQ_GEAR3 277
    #define DVFS_TX_FREQ_GEAR4 282
    #define DVFS_TX_FREQ_GEAR5 288
    #define DVFS_TX_FREQ_GEAR6 294
    #define DVFS_TX_FREQ_GEAR7 300

    #define DVFS_TX_PCW13_GEAR0 0xA00
    #define DVFS_TX_PCW13_GEAR1 0xA31
    #define DVFS_TX_PCW13_GEAR2 0xA6C
    #define DVFS_TX_PCW13_GEAR3 0xAA7
    #define DVFS_TX_PCW13_GEAR4 0xAD9
    #define DVFS_TX_PCW13_GEAR5 0xB14
    #define DVFS_TX_PCW13_GEAR6 0xB4F
    #define DVFS_TX_PCW13_GEAR7 0xB8A

    /*
     * VDSP PLL DFS info
     */
    #define DVFS_VDSP_DIV 5
    #define DVFS_VDSP_FREQ_GEAR0 300
    #define DVFS_VDSP_FREQ_GEAR1 336
    #define DVFS_VDSP_FREQ_GEAR2 400
    #define DVFS_VDSP_FREQ_GEAR3 450
    #define DVFS_VDSP_FREQ_GEAR4 500
    #define DVFS_VDSP_FREQ_GEAR5 606
    #define DVFS_VDSP_FREQ_GEAR6 652
    #define DVFS_VDSP_FREQ_GEAR7 672

    #define DVFS_VDSP_PCW13_GEAR0 0x736
    #define DVFS_VDSP_PCW13_GEAR1 0x814
    #define DVFS_VDSP_PCW13_GEAR2 0x99E
    #define DVFS_VDSP_PCW13_GEAR3 0xAD1
    #define DVFS_VDSP_PCW13_GEAR4 0xC05
    #define DVFS_VDSP_PCW13_GEAR5 0xE91
    #define DVFS_VDSP_PCW13_GEAR6 0xFAC
    #define DVFS_VDSP_PCW13_GEAR7 0x1027

    /*
     * BRP PLL DFS info
     */
    #define DVFS_BRP_DIV 9
    #define DVFS_BRP_FREQ_GEAR0 167
    #define DVFS_BRP_FREQ_GEAR1 200
    #define DVFS_BRP_FREQ_GEAR2 210
    #define DVFS_BRP_FREQ_GEAR3 240
    #define DVFS_BRP_FREQ_GEAR4 250
    #define DVFS_BRP_FREQ_GEAR5 300
    #define DVFS_BRP_FREQ_GEAR6 350
    #define DVFS_BRP_FREQ_GEAR7 400

    #define DVFS_BRP_PCW13_GEAR0 0x73A
    #define DVFS_BRP_PCW13_GEAR1 0x8A7
    #define DVFS_BRP_PCW13_GEAR2 0x916
    #define DVFS_BRP_PCW13_GEAR3 0xA62
    #define DVFS_BRP_PCW13_GEAR4 0xAD1
    #define DVFS_BRP_PCW13_GEAR5 0xCFB
    #define DVFS_BRP_PCW13_GEAR6 0xF25
    #define DVFS_BRP_PCW13_GEAR7 0x114F

    /*
     * BPI PLL PCW22 used in init phase
     */
    #define DVFS_BPI_PCW22_INIT 0x001713B1
#elif DVFS_SCEN_ARCH == DVFS_ARCH_GEN93_L17
    /*
     * MCU PLL DFS info
     */
    #define DVFS_MCU_DIV 2
    #define DVFS_MCU_FREQ_GEAR0 600
    #define DVFS_MCU_FREQ_GEAR1 600
    #define DVFS_MCU_FREQ_GEAR2 600
    #define DVFS_MCU_FREQ_GEAR3 600
    #define DVFS_MCU_FREQ_GEAR4 600
    #define DVFS_MCU_FREQ_GEAR5 600
    #define DVFS_MCU_FREQ_GEAR6 600
    #define DVFS_MCU_FREQ_GEAR7 600

    #define DVFS_MCU_PCW13_GEAR0 0x5C5
    #define DVFS_MCU_PCW13_GEAR1 0x5C5
    #define DVFS_MCU_PCW13_GEAR2 0x5C5
    #define DVFS_MCU_PCW13_GEAR3 0x5C5
    #define DVFS_MCU_PCW13_GEAR4 0x5C5
    #define DVFS_MCU_PCW13_GEAR5 0x5C5
    #define DVFS_MCU_PCW13_GEAR6 0x5C5
    #define DVFS_MCU_PCW13_GEAR7 0x5C5

    /*
     * TX PLL DFS info
     */
    #define DVFS_TX_DIV 4
    #define DVFS_TX_FREQ_GEAR0 260
    #define DVFS_TX_FREQ_GEAR1 265
    #define DVFS_TX_FREQ_GEAR2 271
    #define DVFS_TX_FREQ_GEAR3 277
    #define DVFS_TX_FREQ_GEAR4 282
    #define DVFS_TX_FREQ_GEAR5 288
    #define DVFS_TX_FREQ_GEAR6 294
    #define DVFS_TX_FREQ_GEAR7 300

    #define DVFS_TX_PCW13_GEAR0 0x500
    #define DVFS_TX_PCW13_GEAR1 0x519
    #define DVFS_TX_PCW13_GEAR2 0x536
    #define DVFS_TX_PCW13_GEAR3 0x554
    #define DVFS_TX_PCW13_GEAR4 0x56C
    #define DVFS_TX_PCW13_GEAR5 0x58A
    #define DVFS_TX_PCW13_GEAR6 0x5A7
    #define DVFS_TX_PCW13_GEAR7 0x5C5

    /*
     * VDSP PLL DFS info
     */
    #define DVFS_VDSP_DIV 4
    #define DVFS_VDSP_FREQ_GEAR0 250
    #define DVFS_VDSP_FREQ_GEAR1 300
    #define DVFS_VDSP_FREQ_GEAR2 336
    #define DVFS_VDSP_FREQ_GEAR3 375
    #define DVFS_VDSP_FREQ_GEAR4 400
    #define DVFS_VDSP_FREQ_GEAR5 422
    #define DVFS_VDSP_FREQ_GEAR6 435
    #define DVFS_VDSP_FREQ_GEAR7 450

    #define DVFS_VDSP_PCW13_GEAR0 0x4CF
    #define DVFS_VDSP_PCW13_GEAR1 0x5C5
    #define DVFS_VDSP_PCW13_GEAR2 0x676
    #define DVFS_VDSP_PCW13_GEAR3 0x736
    #define DVFS_VDSP_PCW13_GEAR4 0x7B1
    #define DVFS_VDSP_PCW13_GEAR5 0x81E
    #define DVFS_VDSP_PCW13_GEAR6 0x85E
    #define DVFS_VDSP_PCW13_GEAR7 0x8A7

    /*
     * BRP PLL DFS info
     */
    #define DVFS_BRP_DIV 6
    #define DVFS_BRP_FREQ_GEAR0 150
    #define DVFS_BRP_FREQ_GEAR1 180
    #define DVFS_BRP_FREQ_GEAR2 210
    #define DVFS_BRP_FREQ_GEAR3 225
    #define DVFS_BRP_FREQ_GEAR4 240
    #define DVFS_BRP_FREQ_GEAR5 255
    #define DVFS_BRP_FREQ_GEAR6 270
    #define DVFS_BRP_FREQ_GEAR7 300

    #define DVFS_BRP_PCW13_GEAR0 0x454
    #define DVFS_BRP_PCW13_GEAR1 0x531
    #define DVFS_BRP_PCW13_GEAR2 0x60F
    #define DVFS_BRP_PCW13_GEAR3 0x67E
    #define DVFS_BRP_PCW13_GEAR4 0x6EC
    #define DVFS_BRP_PCW13_GEAR5 0x75B
    #define DVFS_BRP_PCW13_GEAR6 0x7CA
    #define DVFS_BRP_PCW13_GEAR7 0x8A7

    /*
     * BPI PLL PCW22 used in init phase
     */
    #define DVFS_BPI_PCW22_INIT 0x00118000
#endif

#define DVFS_MCU_PCW22_INIT (DVFS_MCU_PCW13_GEAR7 << 9)
#define DVFS_TX_PCW22_INIT (DVFS_TX_PCW13_GEAR7 << 9)
#define DVFS_VDSP_PCW22_INIT (DVFS_VDSP_PCW13_GEAR7 << 9)
#define DVFS_BRP_PCW22_INIT (DVFS_BRP_PCW13_GEAR7 << 9)

#define DVFS_MIPS_LOWEST  DVFS_MDMCUPLL_MIN_GEAR
#define DVFS_MIPS_HIGHEST DVFS_MDMCUPLL_MAX_GEAR
#define DVFS_TX_LOWEST  DVFS_MDTXPLL_MIN_GEAR
#define DVFS_TX_HIGHEST DVFS_MDTXPLL_MAX_GEAR
#define DVFS_VDSP_LOWEST  DVFS_MDVDSPPLL_MIN_GEAR
#define DVFS_VDSP_HIGHEST DVFS_MDVDSPPLL_MAX_GEAR
#define DVFS_BRP_LOWEST  DVFS_MDBRPPLL_MIN_GEAR
#define DVFS_BRP_HIGHEST DVFS_MDBRPPLL_MAX_GEAR

#define DVFS_MDMCUPLL_MASK      0x000F
#define DVFS_MDVDSPPLL_MASK     0x0F00
#define DVFS_MDBRPPLL_MASK      0xF000
#define DVFS_MDTXPLL_MASK       0x00F0

/*
 * L1 trace adaptor switch.
 */
#define DVFS_TRACE_ENABLED 1

/*
 * Type of lock specified in AT-CMD.
 */
#define DVFS_LOCK_MIPS_BIT           0
#define DVFS_LOCK_VMD_BIT            2
#define DVFS_LOCK_VMODEM_BIT         3
#define DVFS_LOCK_PTP_MONITOR_BIT    4
#define DVFS_LOCK_VDSP_BIT           6
#define DVFS_LOCK_BRP_BIT            7
#define DVFS_UNLOCK_MIPS_BIT        16
#define DVFS_UNLOCK_VMD_BIT         18
#define DVFS_UNLOCK_VMODEM_BIT      19
#define DVFS_UNLOCK_PTP_MONITOR_BIT 20
#define DVFS_UNLOCK_VDSP_BIT        22
#define DVFS_UNLOCK_BRP_BIT         23

/*------------------------------------------------------------------------------
 * Cross-platform helper macros.
 *----------------------------------------------------------------------------*/
#if defined(__MTK_INTERNAL__)
    #define DVFS_ASSERT_Bypass( st )                    if (!(st)) ASSERT(0)
    #define DVFS_ASSERT_Reboot( st )                    if (!(st)) ASSERT(0)
    #define DVFS_EXT_ASSERT_Bypass( st, d1, d2, d3 )    if (!(st)) EXT_ASSERT( 0, d1, d2, d3 )
    #define DVFS_EXT_ASSERT_Reboot( st, d1, d2, d3 )    if (!(st)) EXT_ASSERT( 0, d1, d2, d3 )
#else
    #define DVFS_ASSERT_Bypass( st )                    (void)(st)
    #define DVFS_ASSERT_Reboot( st )                    if (!(st)) ASSERT(0)
    #define DVFS_EXT_ASSERT_Bypass( st, d1, d2, d3 )    (void)(st); (void)(d1); (void)(d2); (void)(d3)
    #define DVFS_EXT_ASSERT_Reboot( st, d1, d2, d3 )    if (!(st)) EXT_ASSERT( 0, d1, d2, d3 )
#endif

#define DVFS_US_DELAY(us_delay)                                      \
    do {                                                             \
        kal_uint32 us_start, us_current;                             \
        us_start = ust_get_current_time();                           \
        do {                                                         \
            us_current = ust_get_current_time();                     \
        } while (ust_us_duration(us_start, us_current) <= us_delay); \
    } while (0)


#define DVFS_US_GET_CURRENT_TIME ust_get_current_time

#define DVFS_IS_LATER_THAN_OR_EQUAL_TO(_t1, _t2) \
        ((kal_int32)(_t1) - (kal_int32)(_t2) >= 0)

#define DVFS_IS_LATER_THAN(_t1, _t2) \
        ((kal_int32)(_t1) - (kal_int32)(_t2) > 0)

#define DVFS_IS_NOT_EXPIRED(_now, _from, _dur) \
        DVFS_IS_LATER_THAN_OR_EQUAL_TO(_now, _from) && DVFS_IS_LATER_THAN((_from) + (_dur), _now)

#define DVFS_PRINT(...) \
            do {} while (0)

#if DVFS_TRACE_ENABLED
    #define DVFS_TRACE_ARG_LIST(_TRC_NAME, _ARG_LIST) \
                _TRC_NAME  _ARG_LIST

    #define DVFS_TRACE(_TRC_NAME, ...)                           \
                DVFS_TRACE_ARG_LIST( _TRC_NAME, (__VA_ARGS__) )
#else
    #define DVFS_TRACE(TRC_NAME, ...) \
                do {} while (0)
#endif

#define DVFS_HW_WRITE(addr,data)    ((*(volatile kal_uint32 *)(addr)) = (kal_uint32)(data))
#define DVFS_HW_READ(addr)          (*(volatile kal_uint32 *)(addr))
#define DVFS_SU_WRITE(addr,data)    ((*(volatile kal_uint32 *)(addr)) = (kal_uint32)(data))
#define DVFS_SU_READ(addr)          (*(volatile kal_uint32 *)(addr))

#define DVFS_BIT(_bit)              (0x1 << (_bit))
#define DVFS_TEST_BIT(_val, _bit)   (((_val) & DVFS_BIT(_bit)) != 0)
#define DVFS_SET_BIT(_val, _bit)    (_val) |= DVFS_BIT(_bit)
#define DVFS_CLEAR_BIT(_val, _bit)  (_val) &= ~DVFS_BIT(_bit)

#if !defined(ARRAY_SIZE)
    #define ARRAY_SIZE(_array)      (sizeof(_array) / sizeof((_array)[0]))
#endif

#define FOR_EACH_PLL(_pll_id) \
         for ((_pll_id) = 0; (_pll_id) < DVFS_PLL_COUNT; (_pll_id)++)

#define FOR_EACH_BUCK(_buk_id) \
         for ((_buk_id) = 0; (_buk_id) < DVFS_BUCK_COUNT; (_buk_id)++)

#define DVFS_CHECK_LOCK_BIT(_lock, _name) \
            DVFS_TEST_BIT(_lock, DVFS_ ## _name ## _BIT)

#define DVFS_SET_LOCK_BIT(_lock, _name) \
            DVFS_SET_BIT(_lock, DVFS_ ## _name ## _BIT)

#define DVFS_IS_MIPS_LOCKED(_lock)           DVFS_CHECK_LOCK_BIT(_lock, LOCK_MIPS)
#define DVFS_IS_VMD_LOCKED(_lock)            DVFS_CHECK_LOCK_BIT(_lock, LOCK_VMD)
#define DVFS_IS_VMODEM_LOCKED(_lock)         DVFS_CHECK_LOCK_BIT(_lock, LOCK_VMODEM)
#define DVFS_IS_PTP_MONITOR_LOCKED(_lock)    DVFS_CHECK_LOCK_BIT(_lock, LOCK_PTP_MONITOR)
#define DVFS_IS_VDSP_LOCKED(_lock)           DVFS_CHECK_LOCK_BIT(_lock, LOCK_VDSP)
#define DVFS_IS_BRP_LOCKED(_lock)            DVFS_CHECK_LOCK_BIT(_lock, LOCK_BRP)
#define DVFS_IS_MIPS_UNLOCKED(_lock)         DVFS_CHECK_LOCK_BIT(_lock, UNLOCK_MIPS)
#define DVFS_IS_VMD_UNLOCKED(_lock)          DVFS_CHECK_LOCK_BIT(_lock, UNLOCK_VMD)
#define DVFS_IS_VMODEM_UNLOCKED(_lock)       DVFS_CHECK_LOCK_BIT(_lock, UNLOCK_VMODEM)
#define DVFS_IS_PTP_MONITOR_UNLOCKED(_lock)  DVFS_CHECK_LOCK_BIT(_lock, UNLOCK_PTP_MONITOR)
#define DVFS_IS_VDSP_UNLOCKED(_lock)         DVFS_CHECK_LOCK_BIT(_lock, UNLOCK_VDSP)
#define DVFS_IS_BRP_UNLOCKED(_lock)          DVFS_CHECK_LOCK_BIT(_lock, UNLOCK_BRP)

#define DVFS_SET_MIPS_LOCKED(_lock)          DVFS_SET_LOCK_BIT(_lock, LOCK_MIPS)
#define DVFS_SET_VMD_LOCKED(_lock)           DVFS_SET_LOCK_BIT(_lock, LOCK_VMD)
#define DVFS_SET_VMODEM_LOCKED(_lock)        DVFS_SET_LOCK_BIT(_lock, LOCK_VMODEM)
#define DVFS_SET_PTP_MONITOR_LOCKED(_lock)   DVFS_SET_LOCK_BIT(_lock, LOCK_PTP_MONITOR)
#define DVFS_SET_VDSP_LOCKED(_lock)          DVFS_SET_LOCK_BIT(_lock, LOCK_VDSP)
#define DVFS_SET_BRP_LOCKED(_lock)           DVFS_SET_LOCK_BIT(_lock, LOCK_BRP)
#define DVFS_SET_MIPS_UNLOCKED(_lock)        DVFS_SET_LOCK_BIT(_lock, UNLOCK_MIPS)
#define DVFS_SET_VMD_UNLOCKED(_lock)         DVFS_SET_LOCK_BIT(_lock, UNLOCK_VMD)
#define DVFS_SET_VMODEM_UNLOCKED(_lock)      DVFS_SET_LOCK_BIT(_lock, UNLOCK_VMODEM)
#define DVFS_SET_PTP_MONITOR_UNLOCKED(_lock) DVFS_SET_LOCK_BIT(_lock, UNLOCK_PTP_MONITOR)
#define DVFS_SET_VDSP_UNLOCKED(_lock)        DVFS_SET_LOCK_BIT(_lock, UNLOCK_VDSP)
#define DVFS_SET_BRP_UNLOCKED(_lock)         DVFS_SET_LOCK_BIT(_lock, UNLOCK_BRP)

/*------------------------------------------------------------------------------
 * L1_SIM platform patch.
 *----------------------------------------------------------------------------*/
#if defined(L1_SIM) && !defined(DVFS_UE_SIMULATOR)
    #undef  DVFS_ASSERT_Bypass
    #undef  DVFS_EXT_ASSERT_Bypass
    #define DVFS_ASSERT_Bypass( st )                    if(!(st)) ASSERT( 0 )
    #define DVFS_EXT_ASSERT_Bypass( st, d1, d2, d3 )    if(!(st)) EXT_ASSERT( 0, d1, d2, d3 )

    extern void RegSimSimulateWrite( int adr, int data, int size, const char* file, int line );
    extern int  RegSimSimulateRead( int adr, int size, const char* file, int line, int cosim_flag );
    #undef DVFS_HW_WRITE
    #undef DVFS_HW_READ
    #define DVFS_HW_WRITE(addr,data) RegSimSimulateWrite( (int)(addr), (data), sizeof(unsigned int), __FILE__, __LINE__ )
    #define DVFS_HW_READ(addr)       RegSimSimulateRead( (int)(addr), sizeof(unsigned int), __FILE__, __LINE__, 0 )

    #undef  DVFS_US_DELAY
    #define DVFS_US_DELAY(us) PROCSIM_CONSUME_PROCTIME_US(us)

    #undef DVFS_US_GET_CURRENT_TIME
    #define DVFS_US_GET_CURRENT_TIME() (0)
#endif

/*------------------------------------------------------------------------------
 * MoDIS platform patch.
 *----------------------------------------------------------------------------*/
#if !defined(__MTK_TARGET__) && !defined(L1_SIM) /* MoDIS */
    #undef DVFS_PRINT
    #define DVFS_PRINT printf

    #undef DVFS_HW_WRITE
    #undef DVFS_HW_READ
    #define DVFS_HW_WRITE(_addr, _val) \
                DVFS_PRINT("DVFS_HW_WRITE: 0x%08X <- 0x%08X\n", (_addr), (_val))
    #define DVFS_HW_READ(_addr) \
                (DVFS_PRINT("DVFS_HW_READ:  0x%08X -> 0\n", (_addr)), 0)

    #undef  DVFS_US_DELAY
    #define DVFS_US_DELAY(us) (void)(us)
#endif

/*------------------------------------------------------------------------------
 * UESIM platform patch.
 *----------------------------------------------------------------------------*/
#if !defined(__MTK_TARGET__) && defined(DVFS_UE_SIMULATOR) /* UESIM */
    #undef DVFS_HW_WRITE
    #undef DVFS_HW_READ
    #define DVFS_HW_WRITE(addr,data) (void)(addr); (void)(data)
    #define DVFS_HW_READ(addr)       (0)
#endif

/*------------------------------------------------------------------------------
 * HVT platform patch.
 *----------------------------------------------------------------------------*/
#ifdef DVFS_HVT
    #undef DVFS_US_DELAY
    #define DVFS_US_DELAY UT_UDELAY

    #undef DVFS_HW_WRITE
    #undef DVFS_HW_READ
    #define DVFS_HW_WRITE DRV_WriteReg32
    #define DVFS_HW_READ DRV_Reg32
#endif

/*------------------------------------------------------------------------------
 * Basic and UDVT load patch.
 *----------------------------------------------------------------------------*/
#if (defined(__MAUI_BASIC__) || defined(__UDVT__)) && defined(__GNUC__)
    #undef DVFS_PRINT
    #if 0
/* under construction !*/
/* under construction !*/
    #else
    void dvfs_dummy_print(char *fmt, ...);
    #define DVFS_PRINT dvfs_dummy_print
    #endif

    #undef DVFS_TRACE
    #define DVFS_TRACE(_TRC_NAME, ...) \
                DVFS_PRINT( #_TRC_NAME "\n" )
#endif

/*------------------------------------------------------------------------------
 * Flow only patch.
 *----------------------------------------------------------------------------*/
#if defined(DVFS_FLOW_ONLY)
    #undef DVFS_HW_WRITE
    #undef DVFS_HW_READ
    #define DVFS_HW_WRITE(addr,data) (void)(addr); (void)(data)
    #define DVFS_HW_READ(addr)       (0)
#endif

/*------------------------------------------------------------------------------
 * ESL patch.
 *----------------------------------------------------------------------------*/
#if defined(__EL1_ESL__)
    #define DVFS_FLOW_ONLY 1

    #if defined(__MTK_TARGET__)
        /*
         * SS ESL platform
         */
        #undef DVFS_HW_READ
        #define DVFS_HW_READ(addr) ((*(volatile kal_uint32 *)(addr)), 0)
    #elif defined(L1_SIM) && !defined(DVFS_UE_SIMULATOR)
        /*
         * xL1SIM PAE platform
         */
        #undef DVFS_HW_READ
        #define DVFS_HW_READ(addr) \
            (RegSimSimulateRead((int)(addr), sizeof(unsigned int), __FILE__, __LINE__, 0 ), 0)
    #endif
#endif

#endif /* __DVFS_DRV_COMMON_H__ */
