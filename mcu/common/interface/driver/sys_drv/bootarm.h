/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2005
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
*   bootarm.inc
*
* Project:
* --------
*   Maui_Software
*
* Description:
* ------------
*   This Module defines the platform dependent setting for boot sequence of asm level.
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
 * removed!
*
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
 * removed!
 *
 *****************************************************************************/

#ifndef __BOOTARM_H__
#define __BOOTARM_H__


#define PC_INITIALIZE_VAL               0xE59FF018
#define DUMMY_END_VAL                   0x454E4400


/* Define init boot-up trace label before HS1 */
#define INIT_MAGIC                      0x30305F49  //I_00
#define LABEL_POLLING_BUS_READY         0x0000
#define LABEL_PREINIT_PDAMON            0x0001
#define LABEL_PREINIT_BUSMON            0x0002
#define LABEL_PREINIT_FRC               0x0003
#define LABEL_START_INIT                0x0004
#define LABEL_START_P1                  0x0005
#define LABEL_RESTART_WDT               0x0006
#define LABEL_SAVE_RASP                 0x0007
#define LABEL_SET_C0_COFIG5_K           0x0008
#define LABEL_CLR_C0_STATUS_BEV_ERL     0x0009
#define LABEL_INTERRUPT_PREINIT         0x000A
#define LABEL_CM_L2_INIT                0x000B
#define LABEL_CM_INIT                   0x000C
#define LABEL_PLL_INIT                  0x000D
#define LABEL_L1_CACHE_INIT             0x000E
#define LABEL_L2_CACHE_INIT             0x000F
#define LABEL_SET_CM_WT                 0x0010
#define LABEL_INIT_OTHER_CORES          0x0011
#define LABEL_SET_BOOTSLAVE             0x0012
#define LABEL_JOIN_CH_DOMAIN            0x0013
#define LABEL_ABN_RST_CHECK             0x0014
#define LABEL_MPU_INIT                  0x0015
#define LABEL_START_P2                  0x0016
#define LABEL_REGION_INIT               0x0017
#define LABEL_REGION_INIT_DONE          0x0018
#define LABEL_INIT_GPR                  0x0019
#define LABEL_INIT_EX_STACK             0x001A
#define LABEL_SET_C0_EBASE              0x001B
#define LABEL_DISPATCH_SP               0x001C
#define LABEL_STACK_INIT                0x001D
#define LABEL_INIT_VPE1                 0x001E

#define LABEL_CLIB_BASE_INIT            0x0101
#define LABEL_DUMMY_REF                 0x0102
#define LABEL_WDT_VAR_INIT              0x0103
#define LABEL_CCCI_HW_INIT              0x0104
#define LABEL_CCCI_HS1                  0x0105
#define LABEL_EMM_INIT                  0x0106

#define LABEL_CCCI_START                0x0200
#define LABEL_CCCI_LIMIT                0x02FF

/*
#define LABEL_APP_INIT                  0x0100
#define LABEL_PCM_START                 0x0101
#define LABEL_SYSSTACK_PROT             0x0102
#define LABEL_CLIB_BASE_INIT            0x0103
#define LABEL_WDT_VAR_INIT              0x0104
#define LABEL_BOOT_MODE_POLLING         0x0105
#define LABEL_SHARE_MEM_MPU             0x0106
#define LABEL_EMM_INIT                  0x0108
*/
#endif /* __BOOTARM_H__ */
