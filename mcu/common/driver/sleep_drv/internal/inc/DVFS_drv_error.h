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
 *    DVFS_drv_error.h
 *
 * Project:
 * --------
 *    UMOLYA
 *
 * Description:
 * ------------
 *    DVFS driver error code defines.
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
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

#ifndef __DVFS_DRV_ERROR_H__
#define __DVFS_DRV_ERROR_H__

/*
 * Error code format:
 *  +---------------------------------------+
 *  | 31-16: parameter  | 15-0: reason      |
 *  +---------------------------------------+
 */
#define DVFS_ERR_REASON_OFST    0
#define DVFS_ERR_REASON_MASK    0x0000ffff
#define DVFS_ERR_PARAM_OFST     16
#define DVFS_ERR_PARAM_MASK     0xffff0000

#define DVFS_MAKE_ERROR(_reason, _param) \
            (( (_reason) & DVFS_ERR_REASON_MASK ) | \
             ( (((_param) << DVFS_ERR_PARAM_OFST) & DVFS_ERR_PARAM_MASK) ))

/*
 * Reasons.
 */
#define DVFS_ERR_SUCCESS                     0x0000 /* No error */
#define DVFS_ERR_PLL_BAD_DFS_PTR             0x0001 /* PLL DFS table pointer is broken */
#define DVFS_ERR_PLL_BAD_REG_PTR             0x0002 /* PLL register table pointer is broken */
#define DVFS_ERR_PLL_ID_MISMATCHED           0x0003 /* PLL id mismatched */
#define DVFS_ERR_PLL_GEAR_FREQ               0x0004 /* PLL frequency settings error */
#define DVFS_ERR_PLL_GEAR_PCW                0x0005 /* PLL PCW settings error */
#define DVFS_ERR_PLL_REG_ADDR                0x0006 /* PLL register address is wrong */
#define DVFS_ERR_PLL_MCU_INIT_NG             0x0007 /* Failed to initialize MCU PLL with PCW path */
#define DVFS_ERR_PLL_TX_INIT_NG              0x0008 /* Failed to initialize TX PLL with PCW path */
#define DVFS_ERR_PLL_VDSP_INIT_NG            0x0009 /* Failed to initialize VDSP PLL with PCW path */
#define DVFS_ERR_PLL_BRP_INIT_NG             0x000a /* Failed to initialize BRP PLL with PCW path */
#define DVFS_ERR_PLL_BPI_INIT_NG             0x000b /* Failed to initialize BPI PLL with PCW path */
#define DVFS_ERR_PLL_SW_DFS_SYNC_GEAR        0x000c /* Failed to sync PLL gear with SW DFS path */
#define DVFS_ERR_PLL_SW_DFS_INIT_GEAR        0x000d /* Failed to initialize PLL gear with SW DFS path */
#define DVFS_ERR_RC_NOT_READY                0x0010 /* DVFS_RC is not ready yet */
#define DVFS_ERR_CON_NOT_IDLE                0x0100 /* md_dvfs_con is not at idle state as expected */
#define DVFS_ERR_CON_ERROR_FLAG              0x0101 /* md_dvfs_con error flag is raised */
#define DVFS_ERR_CON_BUK_GEAR                0x0102 /* md_dvfs_con has unexpected buck gears */
#define DVFS_ERR_CON_PLL_GEAR                0x0103 /* md_dvfs_con has unexpected buck gears */
 
#endif /* __DVFS_DRV_ERROR_H__ */
