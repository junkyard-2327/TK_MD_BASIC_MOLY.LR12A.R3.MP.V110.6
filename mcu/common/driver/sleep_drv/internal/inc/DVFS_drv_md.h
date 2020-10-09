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

/*****************************************************************************
 *
 * Filename:
 * ---------
 *   DVFS_drv_md.h
 *
 * Project:
 * --------
 *   UMOLYA
 *
 * Description:
 * ------------
 *   This file defines md DVFS internal use information.
 *
 * Author:
 * -------
 * -------
 *
 *============================================================================
 *             HISTORY
 * Below this line, this part is controlled by ClearCase. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
 * $Log$
 *
 * 05 10 2017 jim.chou
 * [MOLY00247565] DVFS ATCMD Bug Fix
 * Rewrite ATCMD lock/unlock and PTP lock/unlock functions
 *
 * 04 19 2017 ying.hsu
 * [MOLY00243350] [MT6763][DVFS] enable full modem DVFS
 * 	
 * 	.
 *
 * 03 22 2017 ying.hsu
 * [MOLY00236869] [MT6763][DVFS] patch DVFS DVT done code back to OF branch
 * 	
 * 	.
 *
 * 03 15 2017 pei-fei.wu
 * Vmd & Vmodem driver change.
 *
 * 12 08 2016 ying.hsu
 * [MOLY00196193] 93 DVFS driver development
 * 1. Support DVFS_md_MIPS_setTrace()
 * 2. Add PTP lock, unlock, and checking lock API
 * 3. Change PLL DFS gear settings for PLL initialized at highest frequency
 *
 * 11 10 2016 ying.hsu
 * [MOLY00196193] 93 DVFS driver development
 * 1. Allocate dedicate SW event for C2K
 * 2. DVFSRC initial flow changes for ECO
 * 3. EL2 unit test cases
 * 4. PMIC and PLL ATCMD
 * 5. EL1 ESL platform support
 * 6. Audio driver EVS-SW use 600MHz gear
 *
 * 10 28 2016 ying.hsu
 * [MOLY00196193] 93 DVFS driver development
 * fix build error caused by MD DVFS unit test
 *
 * 10 28 2016 ying.hsu
 * [MOLY00196193] 93 DVFS driver development
 * 1. Allocate a dedicate event DVFS_SW_EL2_EVT for C2K
 * 2. Replace DVFS_MD_MIPS_SCENARIO_URRFDD_CHANNEL_EMPTY with DVFS_MD_MIPS_SCENARIO_DEFAULT
 * 3. Allocate dedicate SW event for Audio driver and change EVS_WB clock requirement to 600 MHz as EL1C will cover 2CC case
 * 4. Allocate dedicate SW events for EL1C and EL2 respectively
 * 5. Use CTRL event for to lock Vmd and Vmodem at their highest gear
 * 6. Add MO_Sync() for SMP consideration
 *
 * 10 11 2016 hsiao-hsien.chen
 * [MOLY00189008] [Bianco] Modify sleep driver for 93.
 * DVFS init code arrange.
 *
 * 09 29 2016 ying.hsu
 * [MOLY00196193] 93 DVFS driver development
 * 1. initialization flow review
 * 2. update MCUPLL gear to Vmd mapping table settings
 * 3. PS gear software abrbitration
 *
 * 09 28 2016 ying.hsu
 * [MOLY00196193] 93 DVFS driver development
 * 1. AT command to dump frequency table and lock state
 * 2. Remove C2K_CHANNEL_EMPTY scenario
 *
 * 09 26 2016 ying.hsu
 * [MOLY00196193] 93 DVFS driver development	
 * 1. MD DVFS drver sw flow integration.
 * 2. Add DVFS_drv_md_ut.[ch] unit tests on MoDIS and FPGA platforms.
 *
 * 09 05 2016 ying.hsu
 * [MOLY00196193] 93 DVFS driver development
 * 	
 * 	Support 93 DVFS driver init flow on MoDIS and XL1SIM
 *
 * 08 08 2016 ying.hsu
 * [MOLY00196193] 93 DVFS driver development
 * 	1. 93 DVFS public interface initial version
 * 	2. Sync 92 DVFS AT commands
 *
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by ClearCase. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

#ifndef __DVFS_DRV_MD_H__
#define __DVFS_DRV_MD_H__

#include "kal_general_types.h"
#include "DVFS_drv_md_public.h"

#ifdef DVFS_ENABLE 
/*------------------------------------------------------------------------------
 * Helper uttilities
 *----------------------------------------------------------------------------*/
#ifdef MAX
#undef MAX
#endif
#define MAX(_u1, _u2) ((_u1) >= (_u2) ? (_u1) : (_u2))

/*------------------------------------------------------------------------------
 * Definitions
 *----------------------------------------------------------------------------*/
/*
 * MD DVFS control event user ID.
 */
typedef enum
{
    DVFS_MD_CTRL_USER_INVALID        = 0,
    DVFS_MD_CTRL_USER_BUK_ONLY_START = 1,
    DVFS_MD_CTRL_USER_INIT_LOCK_BUK  = 1,
    DVFS_MD_CTRL_USER_PTP            = 2,
    DVFS_MD_CTRL_USER_LOCK_VMD       = 3,
    DVFS_MD_CTRL_USER_LOCK_VMODEM    = 4,
    DVFS_MD_CTRL_USER_BUK_ONLY_END   = 4,
    DVFS_MD_CTRL_USER_INIT_LOCK_PLL  = 5,
    DVFS_MD_CTRL_USER_LOCK_VDSP      = 6,
    DVFS_MD_CTRL_USER_LOCK_BRP       = 7,
    DVFS_MD_CTRL_USER_NUM            = 8,

    DVFS_MD_CTRL_USER_DUMMY          = 0xffffffff /* for 4-byte enum */
} DVFS_MD_CTRL_EVT_USER_E;

/*
 * MD DVFS driver user context information.
 */
typedef struct _dvfs_md_user_t {
    kal_uint32              id;
    kal_uint32              scenario_range;
    DVFS_EVENT_E            event;
    DVFS_MD_MIPS_SCENARIO_E curr_scenario;
    kal_uint32              curr_gear;
} dvfs_md_user_t;

typedef struct _dvfs_md_ctrl_user_t {
    DVFS_MD_CTRL_EVT_USER_E id;
    kal_uint32              buk_gear;
    kal_uint32              pll_gear;
} dvfs_md_ctrl_user_t;

/*
 * MD DVFS driver global context.
 */
typedef struct {
    kal_uint32           lock;
    dvfs_md_user_t      *user_map[DVFS_MD_MIPS_USER_NUM];
    kal_uint32           ps_gear;   /* PS event sw gear */
    kal_uint32           c2k_gear;  /* C2K event sw gear */
    kal_uint32           el2_gear;  /* EL2 event sw gear */
    dvfs_md_ctrl_user_t *ctrl_user_map[DVFS_MD_CTRL_USER_NUM];

    kal_uint32           lock_cnt;
    kal_uint32           unlock_cnt;
    kal_bool             updating_sg_map;
    kal_bool             set_data_enabled;
} DVFS_MD_globals;

/*
 * MD DVFS scenario to gear.
 */
typedef struct _dvfs_md_mips_scenario_gear {
    kal_uint8 gear;
    kal_uint8 scenario;
    kal_uint8 reserved0;
    kal_uint8 reserved1;
} dvfs_md_mips_scenario_gear;

/*------------------------------------------------------------------------------
 * Driver internal functions.
 *----------------------------------------------------------------------------*/

/*
 * DVFS md driver specific initialization to be done before DVFS HW initialization common flow.
 */
void DVFS_md_pre_init(void);

/*
 * DVFS md driver specific initialization to be done after DVFS HW initialization common flow.
 */
void DVFS_md_post_init(void);

void DVFS_md_ptpupdate(kal_bool init_mode);
void DVFS_md_errorHandler(kal_uint32 debugArray[9]);
void DVFS_md_lock(kal_uint32 lock);
 
#endif /* end of DVFS_ENABLE */
#endif /* end of __DVFS_DRV_MD_H__ */
