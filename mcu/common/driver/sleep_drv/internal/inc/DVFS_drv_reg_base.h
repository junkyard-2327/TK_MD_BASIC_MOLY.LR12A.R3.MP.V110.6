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
 *    DVFS_drv_reg_base.h
 *
 * Project:
 * --------
 *    UMOLYA
 *
 * Description:
 * ------------
 *    DVFS HW register defines.
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
 *
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
 * removed!
 * removed!
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

#ifndef __DVFS_DRV_REG_BASE_H__
#define __DVFS_DRV_REG_BASE_H__

#if defined(DVFS_HVT)
    #include <base/kal/kal_release.h>
    #include <base/mach/basereg.h>
#else
    #include "kal_public_api.h"
    #include "reg_base.h"
#endif

#include "DVFS_con_reg_base.h"

/*
 * Ref: 2016/5/18 MD_PLLMIXED.xls.
 */
#if !defined(BASE_MADDR_MDTOP_PLLMIXED)
#define BASE_MADDR_MDTOP_PLLMIXED 0xA0140000 /* M17 pllmixed base address */
#endif
#define DVFS_DRV_PLL_BASE BASE_MADDR_MDTOP_PLLMIXED

#define DCXO_PLL_SETTLE_CTL     (DVFS_DRV_PLL_BASE + 0x4)
#define DCXO_RDY_WO_ACK         (DVFS_DRV_PLL_BASE + 0x8)
#define DCXO_MODE_CTL           (DVFS_DRV_PLL_BASE + 0xC)
#define PLL_ON_CTL              (DVFS_DRV_PLL_BASE + 0x10)
#define PLL_SW_CTL0             (DVFS_DRV_PLL_BASE + 0x14)
#define PLL_SW_CTL1             (DVFS_DRV_PLL_BASE + 0x18)
#define PLL_DLY_CTL0            (DVFS_DRV_PLL_BASE + 0x30)
#define PLL_DLY_CTL1            (DVFS_DRV_PLL_BASE + 0x34)
#define PLL_DLY_CTL2            (DVFS_DRV_PLL_BASE + 0x38)
#define MDMCUPLL_CTL0           (DVFS_DRV_PLL_BASE + 0x40)
#define MDMCUPLL_CTL1           (DVFS_DRV_PLL_BASE + 0x44)
#define MDVDSPPLL_CTL0          (DVFS_DRV_PLL_BASE + 0x48)
#define MDVDSPPLL_CTL1          (DVFS_DRV_PLL_BASE + 0x4C)
#define MDBRPPLL_CTL0           (DVFS_DRV_PLL_BASE + 0x50)
#define MDBRPPLL_CTL1           (DVFS_DRV_PLL_BASE + 0x54)
#define MDTXPLL_CTL0            (DVFS_DRV_PLL_BASE + 0x58)
#define MDTXPLL_CTL1            (DVFS_DRV_PLL_BASE + 0x5C)
#define MDBPIPLL_CTL0           (DVFS_DRV_PLL_BASE + 0x60)
#define MDBPIPLL_CTL1           (DVFS_DRV_PLL_BASE + 0x64)
#define MDPLL_CTL0              (DVFS_DRV_PLL_BASE + 0x100)
#define MDPLL_CTL1              (DVFS_DRV_PLL_BASE + 0x104)
#define MDPLL_CTL2              (DVFS_DRV_PLL_BASE + 0x108)
#define PLL_RESERVE             (DVFS_DRV_PLL_BASE + 0x10C)
#define PLL_FHCTL_RST           (DVFS_DRV_PLL_BASE + 0x200)
#define CONN_DSNS_INTF          (DVFS_DRV_PLL_BASE + 0x204)
#define PLL_ABNORM_GEARHP_IRQ   (DVFS_DRV_PLL_BASE + 0x300)
#define PLL_ABNORM_GEARHP_MASK  (DVFS_DRV_PLL_BASE + 0x304)
#define PLL_REQ_WO_DCXO_IRQ     (DVFS_DRV_PLL_BASE + 0x308)
#define PLL_REQ_WO_DCXO_MASK    (DVFS_DRV_PLL_BASE + 0x30C)
#define PLL_REQ_ABNORM_STS      (DVFS_DRV_PLL_BASE + 0x310)
#define PLL_HP_RDY_IRQ          (DVFS_DRV_PLL_BASE + 0x314)
#define PLL_HP_RDY_IRQ_MASK     (DVFS_DRV_PLL_BASE + 0x318)
#define MDMCUPLL_FHCTL          (DVFS_DRV_PLL_BASE + 0x400)
#define MDMCUPLL_FRDDS_LMT      (DVFS_DRV_PLL_BASE + 0x404)
#define MDMCUPLL_SW_GEAR        (DVFS_DRV_PLL_BASE + 0x408)
#define MDVDSPPLL_FHCTL         (DVFS_DRV_PLL_BASE + 0x410)
#define MDVDSPPLL_FRDDS_LMT     (DVFS_DRV_PLL_BASE + 0x414)
#define MDVDSPPLL_SW_GEAR       (DVFS_DRV_PLL_BASE + 0x418)
#define MDBRPPLL_FHCTL          (DVFS_DRV_PLL_BASE + 0x430)
#define MDBRPPLL_FRDDS_LMT      (DVFS_DRV_PLL_BASE + 0x434)
#define MDBRPPLL_SW_GEAR        (DVFS_DRV_PLL_BASE + 0x438)
#define MDTXPLL_FHCTL           (DVFS_DRV_PLL_BASE + 0x440)
#define MDTXPLL_FRDDS_LMT       (DVFS_DRV_PLL_BASE + 0x444)
#define MDTXPLL_SW_GEAR         (DVFS_DRV_PLL_BASE + 0x448)
#define MDBPIPLL_FHCTL          (DVFS_DRV_PLL_BASE + 0x450)
#define MDBPIPLL_FRDDS_LMT      (DVFS_DRV_PLL_BASE + 0x454)
#define MDBPIPLL_SW_GEAR        (DVFS_DRV_PLL_BASE + 0x458)
#define MDMCUPLL_GEAR_SET0      (DVFS_DRV_PLL_BASE + 0x500)
#define MDMCUPLL_GEAR_SET1      (DVFS_DRV_PLL_BASE + 0x504)
#define MDMCUPLL_GEAR_SET2      (DVFS_DRV_PLL_BASE + 0x508)
#define MDMCUPLL_GEAR_SET3      (DVFS_DRV_PLL_BASE + 0x50C)
#define MDVDSPPLL_GEAR_SET0     (DVFS_DRV_PLL_BASE + 0x540)
#define MDVDSPPLL_GEAR_SET1     (DVFS_DRV_PLL_BASE + 0x544)
#define MDVDSPPLL_GEAR_SET2     (DVFS_DRV_PLL_BASE + 0x548)
#define MDVDSPPLL_GEAR_SET3     (DVFS_DRV_PLL_BASE + 0x54C)
#define MDBRPPLL_GEAR_SET0      (DVFS_DRV_PLL_BASE + 0x5C0)
#define MDBRPPLL_GEAR_SET1      (DVFS_DRV_PLL_BASE + 0x5C4)
#define MDBRPPLL_GEAR_SET2      (DVFS_DRV_PLL_BASE + 0x5C8)
#define MDBRPPLL_GEAR_SET3      (DVFS_DRV_PLL_BASE + 0x5CC)
#define MDTXPLL_GEAR_SET0       (DVFS_DRV_PLL_BASE + 0x600)
#define MDTXPLL_GEAR_SET1       (DVFS_DRV_PLL_BASE + 0x604)
#define MDTXPLL_GEAR_SET2       (DVFS_DRV_PLL_BASE + 0x608)
#define MDTXPLL_GEAR_SET3       (DVFS_DRV_PLL_BASE + 0x60C)
#define MDMCUPLL_STS            (DVFS_DRV_PLL_BASE + 0xC00)
#define MDVDSPPLL_STS           (DVFS_DRV_PLL_BASE + 0xC04)
#define MDBRPPLL_STS            (DVFS_DRV_PLL_BASE + 0xC08)
#define MDTXPLL_STS             (DVFS_DRV_PLL_BASE + 0xC0C)
#define MDBPIPLL_STS            (DVFS_DRV_PLL_BASE + 0xC10)
#define MDMCUPLL_DA             (DVFS_DRV_PLL_BASE + 0xC14)
#define MDVDSPPLL_DA            (DVFS_DRV_PLL_BASE + 0xC18)
#define MDBRPPLL_DA             (DVFS_DRV_PLL_BASE + 0xC1C)
#define MDTXPLL_DA              (DVFS_DRV_PLL_BASE + 0xC20)
#define MDPLL1_STS              (DVFS_DRV_PLL_BASE + 0xC40)

#define FRDDS_OFF_IRQ_MODE      (DVFS_DRV_PLL_BASE + 0xD00)
#define HP_RDY_OFF_IRQ_MODE     (DVFS_DRV_PLL_BASE + 0xD04)
#define PLL_DUMMY               (DVFS_DRV_PLL_BASE + 0xF00)
#define PLL_DUMMY1              (DVFS_DRV_PLL_BASE + 0xF04)
#define PLL_DUMMY2              (DVFS_DRV_PLL_BASE + 0xF08)
#define PLL_STATUS              (DVFS_DRV_PLL_BASE + 0xF0C)

#define MDMCUPLL_HP_RDY_IRQ     (0x1 << 1)
#define MDTXPLL_HP_RDY_IRQ      (0x1 << 5)
#define MDVDSPPLL_HP_RDY_IRQ    (0x1 << 2)
#define MDBRPPLL_HP_RDY_IRQ     (0x1 << 4)

/*
 * Ref: 2016/6/1 MD_GOLBAL_CON.xls.
 */
#if !defined(BASE_MADDR_MDPERI_MD_GLOBAL_CON_DCM)
#define BASE_MADDR_MDPERI_MD_GLOBAL_CON_DCM 0xA0130000
#endif
#define DVFS_DRV_MD_GLOBAL_BASE BASE_MADDR_MDPERI_MD_GLOBAL_CON_DCM

#define MDCORE_CK_DFS_CTL (DVFS_DRV_MD_GLOBAL_BASE + 0x200)
#define TXSYS_CK_DFS_CTL  (DVFS_DRV_MD_GLOBAL_BASE + 0x240)
#define VDSP_CK_DFS_CTL   (DVFS_DRV_MD_GLOBAL_BASE + 0x210)
#define BRP_CK_DFS_CTL    (DVFS_DRV_MD_GLOBAL_BASE + 0x220)

/*
 * Ref: 2016/6/8 93_mdpll_init.c
 */
#if !defined(BASE_MADDR_MDTOP_CLKSW)
#define BASE_MADDR_MDTOP_CLKSW 0xA0150000
#endif
#define MDTOP_CLKSW_BASE BASE_MADDR_MDTOP_CLKSW

#define MDTOP_CLKSW_CLKON_CTL           (MDTOP_CLKSW_BASE + 0x20)
#define MDTOP_CLKSW_CLKSEL_CTL          (MDTOP_CLKSW_BASE + 0x24)
#define MDTOP_CLKSW_SDF_CK_CTL          (MDTOP_CLKSW_BASE + 0x28)
#define MDTOP_CLKSW_TXSYS_FLEXCKGEN_SEL (MDTOP_CLKSW_BASE + 0x54)
#define MDTOP_CLKSW_BUS_FLEXCKGEN_STS   (MDTOP_CLKSW_BASE + 0x84)


/*
 * Ref: 2016/7/18 M17_dvfsrc_CODA.xls
 */
#if defined(__FPGA__)
#define DVFS_DRV_DVFSRC_BASE 0xC14E0000
#else
#define DVFS_DRV_DVFSRC_BASE 0xC0012000
#endif
#if defined(MT6763) || defined(MT6739)
#define DVFSRC_BASIC_CONTROL     (DVFS_DRV_DVFSRC_BASE + 0x00)
#define DVFSRC_EMI_REQUEST       (DVFS_DRV_DVFSRC_BASE + 0x04)
#define DVFSRC_VCORE_REQUEST     (DVFS_DRV_DVFSRC_BASE + 0x18)
#define DVFSRC_MD_REQUEST        (DVFS_DRV_DVFSRC_BASE + 0x28)
#define DVFSRC_MD_SW_CONTROL     (DVFS_DRV_DVFSRC_BASE + 0x2C)
#define DVFSRC_MD_VMODEM_REMAP   (DVFS_DRV_DVFSRC_BASE + 0x30)
#define DVFSRC_MD_VMD_REMAP      (DVFS_DRV_DVFSRC_BASE + 0x34)
#define DVFSRC_MD_VSRAM_REMAP    (DVFS_DRV_DVFSRC_BASE + 0x38)
#define DVFSRC_INT               (DVFS_DRV_DVFSRC_BASE + 0x40)
#define DVFSRC_HALT_SW_CONTROL   (DVFS_DRV_DVFSRC_BASE + 0x3C)
#define DVFSRC_TIMEOUT_NEXTREQ   (DVFS_DRV_DVFSRC_BASE + 0x4C)
#define DVFSRC_LEVEL             (DVFS_DRV_DVFSRC_BASE + 0x50)
#define DVFSRC_LEVEL_LABEL_0_1   (DVFS_DRV_DVFSRC_BASE + 0x60)
#define DVFSRC_LEVEL_LABEL_2_3   (DVFS_DRV_DVFSRC_BASE + 0x64)
#define DVFSRC_LEVEL_LABEL_4_5   (DVFS_DRV_DVFSRC_BASE + 0x68)
#define DVFSRC_LEVEL_LABEL_6_7   (DVFS_DRV_DVFSRC_BASE + 0x6C)
#define DVFSRC_LEVEL_LABEL_8_9   (DVFS_DRV_DVFSRC_BASE + 0x70)
#define DVFSRC_LEVEL_LABEL_10_11 (DVFS_DRV_DVFSRC_BASE + 0x74)
#define DVFSRC_LEVEL_LABEL_12_13 (DVFS_DRV_DVFSRC_BASE + 0x78)
#define DVFSRC_LEVEL_LABEL_14_15 (DVFS_DRV_DVFSRC_BASE + 0x7C)
#define DVFSRC_FORCE             (DVFS_DRV_DVFSRC_BASE + 0x80)
#define DVFSRC_LAST              (DVFS_DRV_DVFSRC_BASE + 0x88)
#define DVFSRC_RECORD_0_0        (DVFS_DRV_DVFSRC_BASE + 0x100)
#define DVFSRC_RECORD_0_1        (DVFS_DRV_DVFSRC_BASE + 0x104)
#define DVFSRC_RECORD_1_0        (DVFS_DRV_DVFSRC_BASE + 0x108)
#define DVFSRC_RECORD_1_1        (DVFS_DRV_DVFSRC_BASE + 0x10C)
#define DVFSRC_RECORD_2_0        (DVFS_DRV_DVFSRC_BASE + 0x110)
#define DVFSRC_RECORD_2_1        (DVFS_DRV_DVFSRC_BASE + 0x114)
#define DVFSRC_RECORD_3_0        (DVFS_DRV_DVFSRC_BASE + 0x118)
#define DVFSRC_RECORD_3_1        (DVFS_DRV_DVFSRC_BASE + 0x11C)
#define DVFSRC_RECORD_4_0        (DVFS_DRV_DVFSRC_BASE + 0x120)
#define DVFSRC_RECORD_4_1        (DVFS_DRV_DVFSRC_BASE + 0x124)
#define DVFSRC_RECORD_5_0        (DVFS_DRV_DVFSRC_BASE + 0x128)
#define DVFSRC_RECORD_5_1        (DVFS_DRV_DVFSRC_BASE + 0x12C)
#define DVFSRC_RECORD_6_0        (DVFS_DRV_DVFSRC_BASE + 0x130)
#define DVFSRC_RECORD_6_1        (DVFS_DRV_DVFSRC_BASE + 0x134)
#define DVFSRC_RECORD_7_0        (DVFS_DRV_DVFSRC_BASE + 0x138)
#define DVFSRC_RECORD_7_1        (DVFS_DRV_DVFSRC_BASE + 0x13C)
#define DVFSRC_RECORD_0_L_0      (DVFS_DRV_DVFSRC_BASE + 0x140)
#define DVFSRC_RECORD_0_L_1      (DVFS_DRV_DVFSRC_BASE + 0x144)
#define DVFSRC_RECORD_1_L_0      (DVFS_DRV_DVFSRC_BASE + 0x148)
#define DVFSRC_RECORD_1_L_1      (DVFS_DRV_DVFSRC_BASE + 0x14C)
#define DVFSRC_RECORD_2_L_0      (DVFS_DRV_DVFSRC_BASE + 0x150)
#define DVFSRC_RECORD_2_L_1      (DVFS_DRV_DVFSRC_BASE + 0x154)
#define DVFSRC_RECORD_3_L_0      (DVFS_DRV_DVFSRC_BASE + 0x158)
#define DVFSRC_RECORD_3_L_1      (DVFS_DRV_DVFSRC_BASE + 0x15C)
#define DVFSRC_RECORD_4_L_0      (DVFS_DRV_DVFSRC_BASE + 0x160)
#define DVFSRC_RECORD_4_L_1      (DVFS_DRV_DVFSRC_BASE + 0x164)
#define DVFSRC_RECORD_5_L_0      (DVFS_DRV_DVFSRC_BASE + 0x168)
#define DVFSRC_RECORD_5_L_1      (DVFS_DRV_DVFSRC_BASE + 0x16C)
#define DVFSRC_RECORD_6_L_0      (DVFS_DRV_DVFSRC_BASE + 0x170)
#define DVFSRC_RECORD_6_L_1      (DVFS_DRV_DVFSRC_BASE + 0x174)
#define DVFSRC_RECORD_7_L_0      (DVFS_DRV_DVFSRC_BASE + 0x178)
#define DVFSRC_RECORD_7_L_1      (DVFS_DRV_DVFSRC_BASE + 0x17C)
#define DVFSRC_RECORD_MD_0       (DVFS_DRV_DVFSRC_BASE + 0x180)
#define DVFSRC_RECORD_MD_1       (DVFS_DRV_DVFSRC_BASE + 0x184)
#define DVFSRC_RECORD_MD_2       (DVFS_DRV_DVFSRC_BASE + 0x188)
#define DVFSRC_RECORD_MD_3       (DVFS_DRV_DVFSRC_BASE + 0x18C)
#define DVFSRC_RECORD_MD_4       (DVFS_DRV_DVFSRC_BASE + 0x190)
#define DVFSRC_RECORD_MD_5       (DVFS_DRV_DVFSRC_BASE + 0x194)
#define DVFSRC_RECORD_MD_6       (DVFS_DRV_DVFSRC_BASE + 0x198)
#define DVFSRC_RECORD_MD_7       (DVFS_DRV_DVFSRC_BASE + 0x19C)
#define DVFSRC_RECORD_COUNT      (DVFS_DRV_DVFSRC_BASE + 0x200)
#define DVFSRC_RSRV_1            (DVFS_DRV_DVFSRC_BASE + 0x304)
#elif defined(MT6771) || defined(MT6765) || defined(MT6761) || defined(MT6768)
#define DVFSRC_BASIC_CONTROL     (DVFS_DRV_DVFSRC_BASE + 0x00)
#define DVFSRC_SW_REQ            (DVFS_DRV_DVFSRC_BASE + 0x04)
#define DVFSRC_SW_REQ2           (DVFS_DRV_DVFSRC_BASE + 0x08)
#define DVFSRC_EMI_REQUEST       (DVFS_DRV_DVFSRC_BASE + 0x0C)
#define DVFSRC_VCORE_REQUEST     (DVFS_DRV_DVFSRC_BASE + 0x48)
#define DVFSRC_MD_REQUEST        (DVFS_DRV_DVFSRC_BASE + 0x80)
#define DVFSRC_MD_SW_CONTROL     (DVFS_DRV_DVFSRC_BASE + 0x84)
#define DVFSRC_MD_VMODEM_REMAP   (DVFS_DRV_DVFSRC_BASE + 0x88)
#define DVFSRC_MD_VMD_REMAP      (DVFS_DRV_DVFSRC_BASE + 0x8C)
#define DVFSRC_MD_VSRAM_REMAP    (DVFS_DRV_DVFSRC_BASE + 0x90)
#define DVFSRC_HALT_SW_CONTROL   (DVFS_DRV_DVFSRC_BASE + 0x94)
#define DVFSRC_INT               (DVFS_DRV_DVFSRC_BASE + 0x98)
#define DVFSRC_TIMEOUT_NEXTREQ   (DVFS_DRV_DVFSRC_BASE + 0xD8)
#define DVFSRC_LEVEL             (DVFS_DRV_DVFSRC_BASE + 0xDC)
#define DVFSRC_LEVEL_LABEL_0_1   (DVFS_DRV_DVFSRC_BASE + 0xE0)
#define DVFSRC_LEVEL_LABEL_2_3   (DVFS_DRV_DVFSRC_BASE + 0xE4)
#define DVFSRC_LEVEL_LABEL_4_5   (DVFS_DRV_DVFSRC_BASE + 0xE8)
#define DVFSRC_LEVEL_LABEL_6_7   (DVFS_DRV_DVFSRC_BASE + 0xEC)
#define DVFSRC_LEVEL_LABEL_8_9   (DVFS_DRV_DVFSRC_BASE + 0xF0)
#define DVFSRC_LEVEL_LABEL_10_11 (DVFS_DRV_DVFSRC_BASE + 0xF4)
#define DVFSRC_LEVEL_LABEL_12_13 (DVFS_DRV_DVFSRC_BASE + 0xF8)
#define DVFSRC_LEVEL_LABEL_14_15 (DVFS_DRV_DVFSRC_BASE + 0xFC)
#define DVFSRC_FORCE             (DVFS_DRV_DVFSRC_BASE + 0x300)
#define DVFSRC_LAST              (DVFS_DRV_DVFSRC_BASE + 0x308)
#define DVFSRC_RECORD_0_0        (DVFS_DRV_DVFSRC_BASE + 0x400)
#define DVFSRC_RECORD_0_1        (DVFS_DRV_DVFSRC_BASE + 0x404)
#define DVFSRC_RECORD_0_2        (DVFS_DRV_DVFSRC_BASE + 0x408)
#define DVFSRC_RECORD_1_0        (DVFS_DRV_DVFSRC_BASE + 0x40C)
#define DVFSRC_RECORD_1_1        (DVFS_DRV_DVFSRC_BASE + 0x410)
#define DVFSRC_RECORD_1_2        (DVFS_DRV_DVFSRC_BASE + 0x414)
#define DVFSRC_RECORD_2_0        (DVFS_DRV_DVFSRC_BASE + 0x418)
#define DVFSRC_RECORD_2_1        (DVFS_DRV_DVFSRC_BASE + 0x41C)
#define DVFSRC_RECORD_2_2        (DVFS_DRV_DVFSRC_BASE + 0x420)
#define DVFSRC_RECORD_3_0        (DVFS_DRV_DVFSRC_BASE + 0x424)
#define DVFSRC_RECORD_3_1        (DVFS_DRV_DVFSRC_BASE + 0x428)
#define DVFSRC_RECORD_3_2        (DVFS_DRV_DVFSRC_BASE + 0x42C)
#define DVFSRC_RECORD_4_0        (DVFS_DRV_DVFSRC_BASE + 0x430)
#define DVFSRC_RECORD_4_1        (DVFS_DRV_DVFSRC_BASE + 0x434)
#define DVFSRC_RECORD_4_2        (DVFS_DRV_DVFSRC_BASE + 0x438)
#define DVFSRC_RECORD_5_0        (DVFS_DRV_DVFSRC_BASE + 0x43C)
#define DVFSRC_RECORD_5_1        (DVFS_DRV_DVFSRC_BASE + 0x440)
#define DVFSRC_RECORD_5_2        (DVFS_DRV_DVFSRC_BASE + 0x444)
#define DVFSRC_RECORD_6_0        (DVFS_DRV_DVFSRC_BASE + 0x448)
#define DVFSRC_RECORD_6_1        (DVFS_DRV_DVFSRC_BASE + 0x44C)
#define DVFSRC_RECORD_6_2        (DVFS_DRV_DVFSRC_BASE + 0x450)
#define DVFSRC_RECORD_7_0        (DVFS_DRV_DVFSRC_BASE + 0x454)
#define DVFSRC_RECORD_7_1        (DVFS_DRV_DVFSRC_BASE + 0x458)
#define DVFSRC_RECORD_7_2        (DVFS_DRV_DVFSRC_BASE + 0x45C)
#define DVFSRC_RECORD_0_L_0      (DVFS_DRV_DVFSRC_BASE + 0x460)
#define DVFSRC_RECORD_0_L_1      (DVFS_DRV_DVFSRC_BASE + 0x464)
#define DVFSRC_RECORD_0_L_2      (DVFS_DRV_DVFSRC_BASE + 0x468)
#define DVFSRC_RECORD_1_L_0      (DVFS_DRV_DVFSRC_BASE + 0x46C)
#define DVFSRC_RECORD_1_L_1      (DVFS_DRV_DVFSRC_BASE + 0x470)
#define DVFSRC_RECORD_1_L_2      (DVFS_DRV_DVFSRC_BASE + 0x474)
#define DVFSRC_RECORD_2_L_0      (DVFS_DRV_DVFSRC_BASE + 0x478)
#define DVFSRC_RECORD_2_L_1      (DVFS_DRV_DVFSRC_BASE + 0x47C)
#define DVFSRC_RECORD_2_L_2      (DVFS_DRV_DVFSRC_BASE + 0x480)
#define DVFSRC_RECORD_3_L_0      (DVFS_DRV_DVFSRC_BASE + 0x484)
#define DVFSRC_RECORD_3_L_1      (DVFS_DRV_DVFSRC_BASE + 0x488)
#define DVFSRC_RECORD_3_L_2      (DVFS_DRV_DVFSRC_BASE + 0x48C)
#define DVFSRC_RECORD_4_L_0      (DVFS_DRV_DVFSRC_BASE + 0x490)
#define DVFSRC_RECORD_4_L_1      (DVFS_DRV_DVFSRC_BASE + 0x494)
#define DVFSRC_RECORD_4_L_2      (DVFS_DRV_DVFSRC_BASE + 0x498)
#define DVFSRC_RECORD_5_L_0      (DVFS_DRV_DVFSRC_BASE + 0x49C)
#define DVFSRC_RECORD_5_L_1      (DVFS_DRV_DVFSRC_BASE + 0x4A0)
#define DVFSRC_RECORD_5_L_2      (DVFS_DRV_DVFSRC_BASE + 0x4A4)
#define DVFSRC_RECORD_6_L_0      (DVFS_DRV_DVFSRC_BASE + 0x4A8)
#define DVFSRC_RECORD_6_L_1      (DVFS_DRV_DVFSRC_BASE + 0x4AC)
#define DVFSRC_RECORD_6_L_2      (DVFS_DRV_DVFSRC_BASE + 0x4B0)
#define DVFSRC_RECORD_7_L_0      (DVFS_DRV_DVFSRC_BASE + 0x4B4)
#define DVFSRC_RECORD_7_L_1      (DVFS_DRV_DVFSRC_BASE + 0x4B8)
#define DVFSRC_RECORD_7_L_2      (DVFS_DRV_DVFSRC_BASE + 0x4BC)
#define DVFSRC_RECORD_MD_0       (DVFS_DRV_DVFSRC_BASE + 0x4C0)
#define DVFSRC_RECORD_MD_1       (DVFS_DRV_DVFSRC_BASE + 0x4C4)
#define DVFSRC_RECORD_MD_2       (DVFS_DRV_DVFSRC_BASE + 0x4C8)
#define DVFSRC_RECORD_MD_3       (DVFS_DRV_DVFSRC_BASE + 0x4CC)
#define DVFSRC_RECORD_MD_4       (DVFS_DRV_DVFSRC_BASE + 0x4D0)
#define DVFSRC_RECORD_MD_5       (DVFS_DRV_DVFSRC_BASE + 0x4D4)
#define DVFSRC_RECORD_MD_6       (DVFS_DRV_DVFSRC_BASE + 0x4D8)
#define DVFSRC_RECORD_MD_7       (DVFS_DRV_DVFSRC_BASE + 0x4DC)
#define DVFSRC_RECORD_COUNT      (DVFS_DRV_DVFSRC_BASE + 0x4F0)
#define DVFSRC_RSRV_1            (DVFS_DRV_DVFSRC_BASE + 0x604)
#endif

/*
 * Post-silicon Dummy AP load, DVFS SW flags. Ref: 2017/1/11.
 */
#define SPM_PCM_CON1            (BASE_MADDR_SPM_PCM + 0x01C)
#define SPM_PCM_REG_DATA_INI    (BASE_MADDR_SPM_PCM + 0x028)
#define SPM_PCM_PWR_IO_EN       (BASE_MADDR_SPM_PCM + 0x02C)
#define SPM_PCM_REG6_DATA       (BASE_MADDR_SPM_PCM + 0x118)

#define SPM_VCORE_DVS_DISABLE   (1 << 3)
#if defined(MT6763) || defined(MT6771) || defined(MT6765) || defined(MT6761) || defined(MT6768)
#define SPM_VMODEM_DVS_DISABLE  (1 << 18)
#elif defined(MT6739)
#define SPM_VMODEM_DVS_DISABLE  (1 << 24)
#endif

#if defined(MT6763) || defined(MT6739)
#define DVFSRC_VCORE_SW_REQ       DVFSRC_VCORE_REQUEST
#define DVFSRC_EMI_SW_REQ         DVFSRC_EMI_REQUEST
#define DVFSRC_VCORE_FORCE_OFFSET (24)
#define DVFSRC_EMI_FORCE_OFFSET   (20)
#define DVFSRC_INT_OFFSET         (2)
#elif defined(MT6771) || defined(MT6765) || defined(MT6761) || defined(MT6768)
#define DVFSRC_VCORE_SW_REQ       DVFSRC_SW_REQ2
#define DVFSRC_EMI_SW_REQ         DVFSRC_SW_REQ2
#define DVFSRC_VCORE_FORCE_OFFSET (2)
#define DVFSRC_EMI_FORCE_OFFSET   (0)
#define DVFSRC_INT_OFFSET         (1)
#endif

#define SPM_REGWR_CFG_KEY       (0xB16 << 16)
#define SPM_PCM_TIMER_EN_LSB    (0x1 << 5)

/*
 * Post-silicon SPM register dump for exception. Ref: 2017/5/10.
 */
#define PCM_REG0_DATA             (BASE_MADDR_SPM_PCM + 0x100)
#define PCM_REG1_DATA             (BASE_MADDR_SPM_PCM + 0x104)
#define PCM_REG2_DATA             (BASE_MADDR_SPM_PCM + 0x108)
#define PCM_REG3_DATA             (BASE_MADDR_SPM_PCM + 0x10C)
#define PCM_REG4_DATA             (BASE_MADDR_SPM_PCM + 0x110)
#define PCM_REG5_DATA             (BASE_MADDR_SPM_PCM + 0x114)
#define PCM_REG6_DATA             (BASE_MADDR_SPM_PCM + 0x118)
#define PCM_REG7_DATA             (BASE_MADDR_SPM_PCM + 0x11C)
#define PCM_REG8_DATA             (BASE_MADDR_SPM_PCM + 0x120)
#define PCM_REG9_DATA             (BASE_MADDR_SPM_PCM + 0x124)
#define PCM_REG10_DATA            (BASE_MADDR_SPM_PCM + 0x128)
#define PCM_REG11_DATA            (BASE_MADDR_SPM_PCM + 0x12C)
#define PCM_REG12_DATA            (BASE_MADDR_SPM_PCM + 0x130)
#define PCM_REG13_DATA            (BASE_MADDR_SPM_PCM + 0x134)
#define PCM_REG14_DATA            (BASE_MADDR_SPM_PCM + 0x138)
#define PCM_REG15_DATA            (BASE_MADDR_SPM_PCM + 0x13C)

#define PCM_REG12_MASK_B_STA      (BASE_MADDR_SPM_PCM + 0x140)
#define PCM_REG12_EXT_DATA        (BASE_MADDR_SPM_PCM + 0x144)
#define PCM_REG12_EXT_MASK_B_DATA (BASE_MADDR_SPM_PCM + 0x148)

#define SPM_AP_SEMA               (BASE_MADDR_SPM_PCM + 0x428)
#define SPM_DFS_SEMA              (BASE_MADDR_SPM_PCM + 0x42C)

#define SPM_SW_RSV_3              (BASE_MADDR_SPM_PCM + 0x614)
#define SPM_SW_RSV_5              (BASE_MADDR_SPM_PCM + 0x61C)
#define SPM_SW_RSV_9              (BASE_MADDR_SPM_PCM + 0x658)
#define SPM_DVFS_EVENT_STA        (BASE_MADDR_SPM_PCM + 0x69C)
#define SPM_DFS_LEVEL             (BASE_MADDR_SPM_PCM + 0x6B0)
#define SPM_DVS_LEVEL             (BASE_MADDR_SPM_PCM + 0x6B4)

#define SPM_PC_TRACE_G0           (BASE_MADDR_SPM_PCM + 0x8C4)
#define SPM_PC_TRACE_G1           (BASE_MADDR_SPM_PCM + 0x8C8)
#define SPM_PC_TRACE_G2           (BASE_MADDR_SPM_PCM + 0x8CC)
#define SPM_PC_TRACE_G3           (BASE_MADDR_SPM_PCM + 0x8D0)
#define SPM_PC_TRACE_G4           (BASE_MADDR_SPM_PCM + 0x8D4)
#define SPM_PC_TRACE_G5           (BASE_MADDR_SPM_PCM + 0x8D8)
#define SPM_PC_TRACE_G6           (BASE_MADDR_SPM_PCM + 0x8DC)
#define SPM_PC_TRACE_G7           (BASE_MADDR_SPM_PCM + 0x8E0)

#if defined(MT6763) || defined(MT6739) || defined(MT6771)
#define SPM_LAST_SERVED_LEVEL   SPM_SW_RSV_5
#elif defined(MT6765) || defined(MT6761) || defined(MT6768)
#define SPM_LAST_SERVED_LEVEL   SPM_SW_RSV_9
#endif

/*
 * PMIC registers address
 */
#define BASE_ADDR_PMIC 0x0
#if defined(MT6763) /* PMIC: MT6356 */
    #define PMIC_BUCK_VCORE_VOSEL  (BASE_ADDR_PMIC + 0xBE8)
    #define PMIC_BUCK_VMODEM_VOSEL (BASE_ADDR_PMIC + 0xC30)
#elif defined(MT6739) || defined(MT6765) || defined(MT6761) /* PMIC: MT6357 */
    #define PMIC_BUCK_VCORE_VOSEL  (BASE_ADDR_PMIC + 0x152A)
    #define PMIC_BUCK_VMODEM_VOSEL (BASE_ADDR_PMIC + 0x15AA)
#elif defined(MT6771) || defined(MT6768) /* PMIC: MT6358 */
    #define PMIC_BUCK_VCORE_VOSEL  (BASE_ADDR_PMIC + 0x14AA)
    #define PMIC_BUCK_VMODEM_VOSEL (BASE_ADDR_PMIC + 0x15A6)
#endif

/*
 * Efuse register address for Merlot/Talbot MCU turbo feature
 */
#if defined(MT6761)
#define BASE_ADDR_EFUSE 0xC1C50000
#define EFUSE_PTPOD6 (BASE_ADDR_EFUSE + 0x598)
#define EFUSE_MCU_TURBO EFUSE_PTPOD6
#define MCU_TURBO_SHIFT 20
#define MCU_TURBO_MASK 0x3 
#define MCU_TURBO_BIT_NEG 1
#elif defined(MT6768)
#define BASE_ADDR_EFUSE 0xC1CE0000
#define EFUSE_PTPOD14 (BASE_ADDR_EFUSE + 0x5B8)
#define EFUSE_MCU_TURBO EFUSE_PTPOD14
#define MCU_TURBO_SHIFT 15
#define MCU_TURBO_MASK 0x3
#define MCU_TURBO_BIT_NEG 0
#endif

/*
 * FPGA related
 */
#if defined(__FPGA__) && defined(__MTK_TARGET__) /* FPGA */
    #define MDL1AO_CON0     0xA6020400
    #define MDL1AO_CON20    0xA6020450
    #define MDL1AO_PDN_SET  0xA6020454
    #define MDL1AO_PDN_CLR  0xA6020458

    #define DVFS_HW_VER DVFS_HW_READ(0xA000001C)

    /*
     * ap_buck_model. Ref: 2016/6/2.
     */
    #define BUCK_MODEL_BASE                  0xC14E0000
    #define BUCK_MODEL_REG_SETTLE            (BUCK_MODEL_BASE + 0x0000)
    #define BUCK_MODEL_REG_F_STATE           (BUCK_MODEL_BASE + 0x0004)
    #define BUCK_MODEL_REG_EVT_REQ_EN        (BUCK_MODEL_BASE + 0x0010)
    #define BUCK_MODEL_REG_EVT_SW_EVT        (BUCK_MODEL_BASE + 0x0014)
    #define BUCK_MODEL_REG_EVT_BUK_VAL       (BUCK_MODEL_BASE + 0x0018)
    #define BUCK_MODEL_CUR_BUK_GEAR_VAL      (BUCK_MODEL_BASE + 0x0020)
    #define BUCK_MODEL_LAT_CUR_BUK_GEAR_VAL  (BUCK_MODEL_BASE + 0x0024)
#else
    #define DVFS_HW_VER 0xFFFFFFFF
#endif

#endif
