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
 *     dcl_pmic6335_hw.h
 *
 * Project:
 * --------
 *     MOLY Software
 *
 * Description:
 * ------------
 *     This file is for PMIC 6335
 *
 * Author:
 * -------
 * -------
 *
 *============================================================================
 * HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
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
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

#ifndef __DCL_PMIC6335_E2_HW_H_STRUCT__
#define __DCL_PMIC6335_E2_HW_H_STRUCT__

#include "dcl_pmic_features.h"

#ifdef PMIC_6335_REG_API

#define MT6335_PMIC_REG_BASE 	(0x0000)
#if defined(DRV_PMIC_WRAP_6799_REG)
#include "dcl_pmic6335_e2_hw.h"
#else
#define MT6335_STRUP_CON0                       (MT6335_PMIC_REG_BASE + 0x0000)
#define MT6335_STRUP_CON1                       (MT6335_PMIC_REG_BASE + 0x0002)
#define MT6335_STRUP_CON2                       (MT6335_PMIC_REG_BASE + 0x0004)
#define MT6335_STRUP_CON3                       (MT6335_PMIC_REG_BASE + 0x0006)
#define MT6335_STRUP_CON4                       (MT6335_PMIC_REG_BASE + 0x0008)
#define MT6335_STRUP_CON5                       (MT6335_PMIC_REG_BASE + 0x000A)
#define MT6335_STRUP_CON6                       (MT6335_PMIC_REG_BASE + 0x000C)
#define MT6335_STRUP_CON7                       (MT6335_PMIC_REG_BASE + 0x000E)
#define MT6335_STRUP_CON8                       (MT6335_PMIC_REG_BASE + 0x0010)
#define MT6335_STRUP_CON9                       (MT6335_PMIC_REG_BASE + 0x0012)
#define MT6335_STRUP_CON10                      (MT6335_PMIC_REG_BASE + 0x0014)
#define MT6335_STRUP_CON11                      (MT6335_PMIC_REG_BASE + 0x0016)
#define MT6335_STRUP_CON12                      (MT6335_PMIC_REG_BASE + 0x0018)
#define MT6335_STRUP_CON13                      (MT6335_PMIC_REG_BASE + 0x001A)
#define MT6335_STRUP_CON14                      (MT6335_PMIC_REG_BASE + 0x001C)
#define MT6335_STRUP_CON15                      (MT6335_PMIC_REG_BASE + 0x001E)
#define MT6335_STRUP_CON16                      (MT6335_PMIC_REG_BASE + 0x0020)
#define MT6335_STRUP_CON17                      (MT6335_PMIC_REG_BASE + 0x0022)
#define MT6335_STRUP_CON18                      (MT6335_PMIC_REG_BASE + 0x0024)
#define MT6335_STRUP_CON19                      (MT6335_PMIC_REG_BASE + 0x0026)
#define MT6335_STRUP_CON20                      (MT6335_PMIC_REG_BASE + 0x0028)
#define MT6335_STRUP_ANA_CON0                   (MT6335_PMIC_REG_BASE + 0x002A)
#define MT6335_STRUP_ANA_CON1                   (MT6335_PMIC_REG_BASE + 0x002C)
#define MT6335_PPCCTL0                          (MT6335_PMIC_REG_BASE + 0x002E)
#define MT6335_PPCCTL1                          (MT6335_PMIC_REG_BASE + 0x0030)
#define MT6335_PPCCTL2                          (MT6335_PMIC_REG_BASE + 0x0032)
#define MT6335_PPCCFG0                          (MT6335_PMIC_REG_BASE + 0x0034)
#define MT6335_PPCTST0                          (MT6335_PMIC_REG_BASE + 0x0036)
#define MT6335_PPCRSV0                          (MT6335_PMIC_REG_BASE + 0x0038)
#define MT6335_BWDTCTL0                         (MT6335_PMIC_REG_BASE + 0x003A)
#define MT6335_CPSWKEY                          (MT6335_PMIC_REG_BASE + 0x003C)
#define MT6335_CPSCFG0                          (MT6335_PMIC_REG_BASE + 0x003E)
#define MT6335_CPSCFG1                          (MT6335_PMIC_REG_BASE + 0x0040)
#define MT6335_CPSPSA0                          (MT6335_PMIC_REG_BASE + 0x0042)
#define MT6335_CPSPSA1                          (MT6335_PMIC_REG_BASE + 0x0044)
#define MT6335_CPSPSA2                          (MT6335_PMIC_REG_BASE + 0x0046)
#define MT6335_CPSPSA3                          (MT6335_PMIC_REG_BASE + 0x0048)
#define MT6335_CPSPSA4                          (MT6335_PMIC_REG_BASE + 0x004A)
#define MT6335_CPSPSA5                          (MT6335_PMIC_REG_BASE + 0x004C)
#define MT6335_CPSPSA6                          (MT6335_PMIC_REG_BASE + 0x004E)
#define MT6335_CPSPSA7                          (MT6335_PMIC_REG_BASE + 0x0050)
#define MT6335_CPSPSA8                          (MT6335_PMIC_REG_BASE + 0x0052)
#define MT6335_CPSPSA9                          (MT6335_PMIC_REG_BASE + 0x0054)
#define MT6335_CPSPSA10                         (MT6335_PMIC_REG_BASE + 0x0056)
#define MT6335_CPSDSA0                          (MT6335_PMIC_REG_BASE + 0x0058)
#define MT6335_CPSDSA1                          (MT6335_PMIC_REG_BASE + 0x005A)
#define MT6335_CPSDSA2                          (MT6335_PMIC_REG_BASE + 0x005C)
#define MT6335_CPSDSA3                          (MT6335_PMIC_REG_BASE + 0x005E)
#define MT6335_CPSDSA4                          (MT6335_PMIC_REG_BASE + 0x0060)
#define MT6335_CPSDSA5                          (MT6335_PMIC_REG_BASE + 0x0062)
#define MT6335_CPSDSA6                          (MT6335_PMIC_REG_BASE + 0x0064)
#define MT6335_CPSDSA7                          (MT6335_PMIC_REG_BASE + 0x0066)
#define MT6335_CPSDSA8                          (MT6335_PMIC_REG_BASE + 0x0068)
#define MT6335_CPSDSA9                          (MT6335_PMIC_REG_BASE + 0x006A)
#define MT6335_CPSDSA10                         (MT6335_PMIC_REG_BASE + 0x006C)
#define MT6335_PORFLAG                          (MT6335_PMIC_REG_BASE + 0x006E)
#define MT6335_PONSTS                           (MT6335_PMIC_REG_BASE + 0x0070)
#define MT6335_POFFSTS                          (MT6335_PMIC_REG_BASE + 0x0072)
#define MT6335_PSTSCTL                          (MT6335_PMIC_REG_BASE + 0x0074)
#define MT6335_HWCID                            (MT6335_PMIC_REG_BASE + 0x0200)
#define MT6335_SWCID                            (MT6335_PMIC_REG_BASE + 0x0202)
#define MT6335_TOP_CON                          (MT6335_PMIC_REG_BASE + 0x0204)
#define MT6335_TEST_OUT                         (MT6335_PMIC_REG_BASE + 0x0206)
#define MT6335_TEST_CON0                        (MT6335_PMIC_REG_BASE + 0x0208)
#define MT6335_TEST_CON1                        (MT6335_PMIC_REG_BASE + 0x020A)
#define MT6335_TESTMODE_SW                      (MT6335_PMIC_REG_BASE + 0x020C)
#define MT6335_PGDEBSTATUS0                     (MT6335_PMIC_REG_BASE + 0x020E)
#define MT6335_PGDEBSTATU1                      (MT6335_PMIC_REG_BASE + 0x0210)
#define MT6335_PGSTATUS0                        (MT6335_PMIC_REG_BASE + 0x0212)
#define MT6335_PGSTATUS1                        (MT6335_PMIC_REG_BASE + 0x0214)
#define MT6335_PSOCSTATUS                       (MT6335_PMIC_REG_BASE + 0x0216)
#define MT6335_THERMALSTATUS                    (MT6335_PMIC_REG_BASE + 0x0218)
#define MT6335_TOPSTATUS                        (MT6335_PMIC_REG_BASE + 0x021A)
#define MT6335_TDSEL_CON                        (MT6335_PMIC_REG_BASE + 0x021C)
#define MT6335_RDSEL_CON                        (MT6335_PMIC_REG_BASE + 0x021E)
#define MT6335_SMT_CON0                         (MT6335_PMIC_REG_BASE + 0x0220)
#define MT6335_SMT_CON1                         (MT6335_PMIC_REG_BASE + 0x0222)
#define MT6335_DRV_CON0                         (MT6335_PMIC_REG_BASE + 0x0224)
#define MT6335_DRV_CON1                         (MT6335_PMIC_REG_BASE + 0x0226)
#define MT6335_DRV_CON2                         (MT6335_PMIC_REG_BASE + 0x0228)
#define MT6335_FILTER_CON0                      (MT6335_PMIC_REG_BASE + 0x022A)
#define MT6335_TOP_STATUS                       (MT6335_PMIC_REG_BASE + 0x022C)
#define MT6335_TOP_STATUS_SET                   (MT6335_PMIC_REG_BASE + 0x022E)
#define MT6335_TOP_STATUS_CLR                   (MT6335_PMIC_REG_BASE + 0x0230)
#define MT6335_TOP_SPI_CON0                     (MT6335_PMIC_REG_BASE + 0x0232)
#define MT6335_TOP_SPI_CON1                     (MT6335_PMIC_REG_BASE + 0x0234)
#define MT6335_TOP_CKPDN_CON0                   (MT6335_PMIC_REG_BASE + 0x0400)
#define MT6335_TOP_CKPDN_CON0_SET               (MT6335_PMIC_REG_BASE + 0x0402)
#define MT6335_TOP_CKPDN_CON0_CLR               (MT6335_PMIC_REG_BASE + 0x0404)
#define MT6335_TOP_CKPDN_CON1                   (MT6335_PMIC_REG_BASE + 0x0406)
#define MT6335_TOP_CKPDN_CON1_SET               (MT6335_PMIC_REG_BASE + 0x0408)
#define MT6335_TOP_CKPDN_CON1_CLR               (MT6335_PMIC_REG_BASE + 0x040A)
#define MT6335_TOP_CKPDN_CON2                   (MT6335_PMIC_REG_BASE + 0x040C)
#define MT6335_TOP_CKPDN_CON2_SET               (MT6335_PMIC_REG_BASE + 0x040E)
#define MT6335_TOP_CKPDN_CON2_CLR               (MT6335_PMIC_REG_BASE + 0x0410)
#define MT6335_TOP_CKPDN_CON3                   (MT6335_PMIC_REG_BASE + 0x0412)
#define MT6335_TOP_CKPDN_CON3_SET               (MT6335_PMIC_REG_BASE + 0x0414)
#define MT6335_TOP_CKPDN_CON3_CLR               (MT6335_PMIC_REG_BASE + 0x0416)
#define MT6335_TOP_CKSEL_CON0                   (MT6335_PMIC_REG_BASE + 0x0418)
#define MT6335_TOP_CKSEL_CON0_SET               (MT6335_PMIC_REG_BASE + 0x041A)
#define MT6335_TOP_CKSEL_CON0_CLR               (MT6335_PMIC_REG_BASE + 0x041C)
#define MT6335_TOP_CKSEL_CON2                   (MT6335_PMIC_REG_BASE + 0x041E)
#define MT6335_TOP_CKSEL_CON2_SET               (MT6335_PMIC_REG_BASE + 0x0420)
#define MT6335_TOP_CKSEL_CON2_CLR               (MT6335_PMIC_REG_BASE + 0x0422)
#define MT6335_TOP_CKDIVSEL_CON0                (MT6335_PMIC_REG_BASE + 0x0424)
#define MT6335_TOP_CKDIVSEL_CON0_SET            (MT6335_PMIC_REG_BASE + 0x0426)
#define MT6335_TOP_CKDIVSEL_CON0_CLR            (MT6335_PMIC_REG_BASE + 0x0428)
#define MT6335_TOP_CKHWEN_CON0                  (MT6335_PMIC_REG_BASE + 0x042A)
#define MT6335_TOP_CKHWEN_CON0_SET              (MT6335_PMIC_REG_BASE + 0x042C)
#define MT6335_TOP_CKHWEN_CON0_CLR              (MT6335_PMIC_REG_BASE + 0x042E)
#define MT6335_TOP_CKHWEN_CON1                  (MT6335_PMIC_REG_BASE + 0x0430)
#define MT6335_TOP_CKHWEN_CON1_SET              (MT6335_PMIC_REG_BASE + 0x0432)
#define MT6335_TOP_CKHWEN_CON1_CLR              (MT6335_PMIC_REG_BASE + 0x0434)
#define MT6335_TOP_BUCK_ANACK_FREQ_SEL_CON0     (MT6335_PMIC_REG_BASE + 0x0436)
#define MT6335_TOP_BUCK_ANACK_FREQ_SEL_CON0_SET (MT6335_PMIC_REG_BASE + 0x0438)
#define MT6335_TOP_BUCK_ANACK_FREQ_SEL_CON0_CLR (MT6335_PMIC_REG_BASE + 0x043A)
#define MT6335_TOP_CKTST_CON0                   (MT6335_PMIC_REG_BASE + 0x043C)
#define MT6335_TOP_CKTST_CON1                   (MT6335_PMIC_REG_BASE + 0x043E)
#define MT6335_TOP_CLKSQ                        (MT6335_PMIC_REG_BASE + 0x0440)
#define MT6335_TOP_CLKSQ_SET                    (MT6335_PMIC_REG_BASE + 0x0442)
#define MT6335_TOP_CLKSQ_CLR                    (MT6335_PMIC_REG_BASE + 0x0444)
#define MT6335_TOP_CLKSQ_RTC                    (MT6335_PMIC_REG_BASE + 0x0446)
#define MT6335_TOP_CLKSQ_RTC_SET                (MT6335_PMIC_REG_BASE + 0x0448)
#define MT6335_TOP_CLKSQ_RTC_CLR                (MT6335_PMIC_REG_BASE + 0x044A)
#define MT6335_TOP_CLK_TRIM                     (MT6335_PMIC_REG_BASE + 0x044C)
#define MT6335_TOP_CLK_CON0                     (MT6335_PMIC_REG_BASE + 0x044E)
#define MT6335_TOP_CLK_CON0_SET                 (MT6335_PMIC_REG_BASE + 0x0450)
#define MT6335_TOP_CLK_CON0_CLR                 (MT6335_PMIC_REG_BASE + 0x0452)
#define MT6335_TOP_CLK_CON1                     (MT6335_PMIC_REG_BASE + 0x0454)
#define MT6335_TOP_CLK_CON1_SET                 (MT6335_PMIC_REG_BASE + 0x0456)
#define MT6335_TOP_CLK_CON1_CLR                 (MT6335_PMIC_REG_BASE + 0x0458)
#define MT6335_TOP_CLK_CON2                     (MT6335_PMIC_REG_BASE + 0x045A)
#define MT6335_TOP_RST_CON0                     (MT6335_PMIC_REG_BASE + 0x0600)
#define MT6335_TOP_RST_CON0_SET                 (MT6335_PMIC_REG_BASE + 0x0602)
#define MT6335_TOP_RST_CON0_CLR                 (MT6335_PMIC_REG_BASE + 0x0604)
#define MT6335_TOP_RST_CON1                     (MT6335_PMIC_REG_BASE + 0x0606)
#define MT6335_TOP_RST_CON1_SET                 (MT6335_PMIC_REG_BASE + 0x0608)
#define MT6335_TOP_RST_CON1_CLR                 (MT6335_PMIC_REG_BASE + 0x060A)
#define MT6335_TOP_RST_CON2                     (MT6335_PMIC_REG_BASE + 0x060C)
#define MT6335_TOP_RST_MISC                     (MT6335_PMIC_REG_BASE + 0x060E)
#define MT6335_TOP_RST_MISC_SET                 (MT6335_PMIC_REG_BASE + 0x0610)
#define MT6335_TOP_RST_MISC_CLR                 (MT6335_PMIC_REG_BASE + 0x0612)
#define MT6335_TOP_RST_STATUS                   (MT6335_PMIC_REG_BASE + 0x0614)
#define MT6335_TOP_RST_STATUS_SET               (MT6335_PMIC_REG_BASE + 0x0616)
#define MT6335_TOP_RST_STATUS_CLR               (MT6335_PMIC_REG_BASE + 0x0618)
#define MT6335_TOP_RST_RSV_CON0                 (MT6335_PMIC_REG_BASE + 0x061A)
#define MT6335_TOP_RST_RSV_CON1                 (MT6335_PMIC_REG_BASE + 0x061C)
#define MT6335_INT_CON0                         (MT6335_PMIC_REG_BASE + 0x0800)
#define MT6335_INT_CON0_SET                     (MT6335_PMIC_REG_BASE + 0x0802)
#define MT6335_INT_CON0_CLR                     (MT6335_PMIC_REG_BASE + 0x0804)
#define MT6335_INT_CON1                         (MT6335_PMIC_REG_BASE + 0x0806)
#define MT6335_INT_CON1_SET                     (MT6335_PMIC_REG_BASE + 0x0808)
#define MT6335_INT_CON1_CLR                     (MT6335_PMIC_REG_BASE + 0x080A)
#define MT6335_INT_CON2                         (MT6335_PMIC_REG_BASE + 0x080C)
#define MT6335_INT_CON2_SET                     (MT6335_PMIC_REG_BASE + 0x080E)
#define MT6335_INT_CON2_CLR                     (MT6335_PMIC_REG_BASE + 0x0810)
#define MT6335_INT_CON3                         (MT6335_PMIC_REG_BASE + 0x0812)
#define MT6335_INT_CON3_SET                     (MT6335_PMIC_REG_BASE + 0x0814)
#define MT6335_INT_CON3_CLR                     (MT6335_PMIC_REG_BASE + 0x0816)
#define MT6335_INT_CON4                         (MT6335_PMIC_REG_BASE + 0x0818)
#define MT6335_INT_CON4_SET                     (MT6335_PMIC_REG_BASE + 0x081A)
#define MT6335_INT_CON4_CLR                     (MT6335_PMIC_REG_BASE + 0x081C)
#define MT6335_INT_CON5                         (MT6335_PMIC_REG_BASE + 0x081E)
#define MT6335_INT_CON5_SET                     (MT6335_PMIC_REG_BASE + 0x0820)
#define MT6335_INT_CON5_CLR                     (MT6335_PMIC_REG_BASE + 0x0822)
#define MT6335_INT_MASK_CON0                    (MT6335_PMIC_REG_BASE + 0x0824)
#define MT6335_INT_MASK_CON0_SET                (MT6335_PMIC_REG_BASE + 0x0826)
#define MT6335_INT_MASK_CON0_CLR                (MT6335_PMIC_REG_BASE + 0x0828)
#define MT6335_INT_MASK_CON1                    (MT6335_PMIC_REG_BASE + 0x082A)
#define MT6335_INT_MASK_CON1_SET                (MT6335_PMIC_REG_BASE + 0x082C)
#define MT6335_INT_MASK_CON1_CLR                (MT6335_PMIC_REG_BASE + 0x082E)
#define MT6335_INT_MASK_CON2                    (MT6335_PMIC_REG_BASE + 0x0830)
#define MT6335_INT_MASK_CON2_SET                (MT6335_PMIC_REG_BASE + 0x0832)
#define MT6335_INT_MASK_CON2_CLR                (MT6335_PMIC_REG_BASE + 0x0834)
#define MT6335_INT_MASK_CON3                    (MT6335_PMIC_REG_BASE + 0x0836)
#define MT6335_INT_MASK_CON3_SET                (MT6335_PMIC_REG_BASE + 0x0838)
#define MT6335_INT_MASK_CON3_CLR                (MT6335_PMIC_REG_BASE + 0x083A)
#define MT6335_INT_MASK_CON4                    (MT6335_PMIC_REG_BASE + 0x083C)
#define MT6335_INT_MASK_CON4_SET                (MT6335_PMIC_REG_BASE + 0x083E)
#define MT6335_INT_MASK_CON4_CLR                (MT6335_PMIC_REG_BASE + 0x0840)
#define MT6335_INT_MASK_CON5                    (MT6335_PMIC_REG_BASE + 0x0842)
#define MT6335_INT_MASK_CON5_SET                (MT6335_PMIC_REG_BASE + 0x0844)
#define MT6335_INT_MASK_CON5_CLR                (MT6335_PMIC_REG_BASE + 0x0846)
#define MT6335_INT_STATUS0                      (MT6335_PMIC_REG_BASE + 0x0848)
#define MT6335_INT_STATUS1                      (MT6335_PMIC_REG_BASE + 0x084A)
#define MT6335_INT_STATUS2                      (MT6335_PMIC_REG_BASE + 0x084C)
#define MT6335_INT_STATUS3                      (MT6335_PMIC_REG_BASE + 0x084E)
#define MT6335_INT_STATUS4                      (MT6335_PMIC_REG_BASE + 0x0850)
#define MT6335_INT_STATUS5                      (MT6335_PMIC_REG_BASE + 0x0852)
#define MT6335_INT_RAW_STATUS0                  (MT6335_PMIC_REG_BASE + 0x0854)
#define MT6335_INT_RAW_STATUS1                  (MT6335_PMIC_REG_BASE + 0x0856)
#define MT6335_INT_RAW_STATUS2                  (MT6335_PMIC_REG_BASE + 0x0858)
#define MT6335_INT_RAW_STATUS3                  (MT6335_PMIC_REG_BASE + 0x085A)
#define MT6335_INT_RAW_STATUS4                  (MT6335_PMIC_REG_BASE + 0x085C)
#define MT6335_INT_RAW_STATUS5                  (MT6335_PMIC_REG_BASE + 0x085E)
#define MT6335_INT_MISC_CON                     (MT6335_PMIC_REG_BASE + 0x0860)
#define MT6335_INT_MISC_CON_SET                 (MT6335_PMIC_REG_BASE + 0x0862)
#define MT6335_INT_MISC_CON_CLR                 (MT6335_PMIC_REG_BASE + 0x0864)
#define MT6335_FQMTR_CON0                       (MT6335_PMIC_REG_BASE + 0x0A00)
#define MT6335_FQMTR_CON1                       (MT6335_PMIC_REG_BASE + 0x0A02)
#define MT6335_FQMTR_CON2                       (MT6335_PMIC_REG_BASE + 0x0A04)
#define MT6335_RG_SPI_CON0                      (MT6335_PMIC_REG_BASE + 0x0C00)
#define MT6335_DEW_DIO_EN                       (MT6335_PMIC_REG_BASE + 0x0C02)
#define MT6335_DEW_READ_TEST                    (MT6335_PMIC_REG_BASE + 0x0C04)
#define MT6335_DEW_WRITE_TEST                   (MT6335_PMIC_REG_BASE + 0x0C06)
#define MT6335_DEW_CRC_SWRST                    (MT6335_PMIC_REG_BASE + 0x0C08)
#define MT6335_DEW_CRC_EN                       (MT6335_PMIC_REG_BASE + 0x0C0A)
#define MT6335_DEW_CRC_VAL                      (MT6335_PMIC_REG_BASE + 0x0C0C)
#define MT6335_DEW_DBG_MON_SEL                  (MT6335_PMIC_REG_BASE + 0x0C0E)
#define MT6335_DEW_CIPHER_KEY_SEL               (MT6335_PMIC_REG_BASE + 0x0C10)
#define MT6335_DEW_CIPHER_IV_SEL                (MT6335_PMIC_REG_BASE + 0x0C12)
#define MT6335_DEW_CIPHER_EN                    (MT6335_PMIC_REG_BASE + 0x0C14)
#define MT6335_DEW_CIPHER_RDY                   (MT6335_PMIC_REG_BASE + 0x0C16)
#define MT6335_DEW_CIPHER_MODE                  (MT6335_PMIC_REG_BASE + 0x0C18)
#define MT6335_DEW_CIPHER_SWRST                 (MT6335_PMIC_REG_BASE + 0x0C1A)
#define MT6335_DEW_RDDMY_NO                     (MT6335_PMIC_REG_BASE + 0x0C1C)
#define MT6335_INT_TYPE_CON0                    (MT6335_PMIC_REG_BASE + 0x0C1E)
#define MT6335_INT_TYPE_CON0_SET                (MT6335_PMIC_REG_BASE + 0x0C20)
#define MT6335_INT_TYPE_CON0_CLR                (MT6335_PMIC_REG_BASE + 0x0C22)
#define MT6335_INT_TYPE_CON1                    (MT6335_PMIC_REG_BASE + 0x0C24)
#define MT6335_INT_TYPE_CON1_SET                (MT6335_PMIC_REG_BASE + 0x0C26)
#define MT6335_INT_TYPE_CON1_CLR                (MT6335_PMIC_REG_BASE + 0x0C28)
#define MT6335_INT_TYPE_CON2                    (MT6335_PMIC_REG_BASE + 0x0C2A)
#define MT6335_INT_TYPE_CON2_SET                (MT6335_PMIC_REG_BASE + 0x0C2C)
#define MT6335_INT_TYPE_CON2_CLR                (MT6335_PMIC_REG_BASE + 0x0C2E)
#define MT6335_INT_TYPE_CON3                    (MT6335_PMIC_REG_BASE + 0x0C30)
#define MT6335_INT_TYPE_CON3_SET                (MT6335_PMIC_REG_BASE + 0x0C32)
#define MT6335_INT_TYPE_CON3_CLR                (MT6335_PMIC_REG_BASE + 0x0C34)
#define MT6335_INT_TYPE_CON4                    (MT6335_PMIC_REG_BASE + 0x0C36)
#define MT6335_INT_TYPE_CON4_SET                (MT6335_PMIC_REG_BASE + 0x0C38)
#define MT6335_INT_TYPE_CON4_CLR                (MT6335_PMIC_REG_BASE + 0x0C3A)
#define MT6335_INT_TYPE_CON5                    (MT6335_PMIC_REG_BASE + 0x0C3C)
#define MT6335_INT_TYPE_CON5_SET                (MT6335_PMIC_REG_BASE + 0x0C3E)
#define MT6335_INT_TYPE_CON5_CLR                (MT6335_PMIC_REG_BASE + 0x0C40)
#define MT6335_INT_STA                          (MT6335_PMIC_REG_BASE + 0x0C42)
#define MT6335_RG_SPI_CON1                      (MT6335_PMIC_REG_BASE + 0x0C44)
#define MT6335_RG_SPI_CON2                      (MT6335_PMIC_REG_BASE + 0x0C46)
#define MT6335_BUCK_ALL_CON0                    (MT6335_PMIC_REG_BASE + 0x0E00)
#define MT6335_BUCK_STB_CON                     (MT6335_PMIC_REG_BASE + 0x0E02)
#define MT6335_BUCK_SLP_CON0                    (MT6335_PMIC_REG_BASE + 0x0E04)
#define MT6335_BUCK_SLP_CON1                    (MT6335_PMIC_REG_BASE + 0x0E06)
#define MT6335_BUCK_SLP_CON2                    (MT6335_PMIC_REG_BASE + 0x0E08)
#define MT6335_BUCK_OC_CON0                     (MT6335_PMIC_REG_BASE + 0x0E0A)
#define MT6335_BUCK_OC_CON1                     (MT6335_PMIC_REG_BASE + 0x0E0C)
#define MT6335_BUCK_K_CON0                      (MT6335_PMIC_REG_BASE + 0x0E0E)
#define MT6335_BUCK_K_CON1                      (MT6335_PMIC_REG_BASE + 0x0E10)
#define MT6335_BUCK_K_CON2                      (MT6335_PMIC_REG_BASE + 0x0E12)
#define MT6335_BUCK_K_CON3                      (MT6335_PMIC_REG_BASE + 0x0E14)
#define MT6335_BUCK_VCORE_SSHUB_CON             (MT6335_PMIC_REG_BASE + 0x0E16)
#define MT6335_BUCK_VCORE_CON0                  (MT6335_PMIC_REG_BASE + 0x0E18)
#define MT6335_BUCK_VCORE_CON1                  (MT6335_PMIC_REG_BASE + 0x0E1A)
#define MT6335_BUCK_VCORE_CON2                  (MT6335_PMIC_REG_BASE + 0x0E1C)
#define MT6335_BUCK_VCORE_CFG0                  (MT6335_PMIC_REG_BASE + 0x0E1E)
#define MT6335_BUCK_VCORE_CFG1                  (MT6335_PMIC_REG_BASE + 0x0E20)
#define MT6335_BUCK_VCORE_OP_EN                 (MT6335_PMIC_REG_BASE + 0x0E22)
#define MT6335_BUCK_VCORE_OP_EN_SET             (MT6335_PMIC_REG_BASE + 0x0E24)
#define MT6335_BUCK_VCORE_OP_EN_CLR             (MT6335_PMIC_REG_BASE + 0x0E26)
#define MT6335_BUCK_VCORE_OP_CFG                (MT6335_PMIC_REG_BASE + 0x0E28)
#define MT6335_BUCK_VCORE_OP_CFG_SET            (MT6335_PMIC_REG_BASE + 0x0E2A)
#define MT6335_BUCK_VCORE_OP_CFG_CLR            (MT6335_PMIC_REG_BASE + 0x0E2C)
#define MT6335_BUCK_VCORE_SP_CON                (MT6335_PMIC_REG_BASE + 0x0E2E)
#define MT6335_BUCK_VCORE_SP_CFG                (MT6335_PMIC_REG_BASE + 0x0E30)
#define MT6335_BUCK_VCORE_OC_CFG                (MT6335_PMIC_REG_BASE + 0x0E32)
#define MT6335_BUCK_VCORE_DBG0                  (MT6335_PMIC_REG_BASE + 0x0E34)
#define MT6335_BUCK_VCORE_DBG1                  (MT6335_PMIC_REG_BASE + 0x0E36)
#define MT6335_BUCK_VCORE_DBG2                  (MT6335_PMIC_REG_BASE + 0x0E38)
#define MT6335_BUCK_VDRAM_CON0                  (MT6335_PMIC_REG_BASE + 0x0E3A)
#define MT6335_BUCK_VDRAM_CON1                  (MT6335_PMIC_REG_BASE + 0x0E3C)
#define MT6335_BUCK_VDRAM_CON2                  (MT6335_PMIC_REG_BASE + 0x0E3E)
#define MT6335_BUCK_VDRAM_CFG0                  (MT6335_PMIC_REG_BASE + 0x0E40)
#define MT6335_BUCK_VDRAM_CFG1                  (MT6335_PMIC_REG_BASE + 0x0E42)
#define MT6335_BUCK_VDRAM_OP_EN                 (MT6335_PMIC_REG_BASE + 0x0E44)
#define MT6335_BUCK_VDRAM_OP_EN_SET             (MT6335_PMIC_REG_BASE + 0x0E46)
#define MT6335_BUCK_VDRAM_OP_EN_CLR             (MT6335_PMIC_REG_BASE + 0x0E48)
#define MT6335_BUCK_VDRAM_OP_CFG                (MT6335_PMIC_REG_BASE + 0x0E4A)
#define MT6335_BUCK_VDRAM_OP_CFG_SET            (MT6335_PMIC_REG_BASE + 0x0E4C)
#define MT6335_BUCK_VDRAM_OP_CFG_CLR            (MT6335_PMIC_REG_BASE + 0x0E4E)
#define MT6335_BUCK_VDRAM_SP_CON                (MT6335_PMIC_REG_BASE + 0x0E50)
#define MT6335_BUCK_VDRAM_SP_CFG                (MT6335_PMIC_REG_BASE + 0x0E52)
#define MT6335_BUCK_VDRAM_OC_CFG                (MT6335_PMIC_REG_BASE + 0x0E54)
#define MT6335_BUCK_VDRAM_DBG0                  (MT6335_PMIC_REG_BASE + 0x0E56)
#define MT6335_BUCK_VDRAM_DBG1                  (MT6335_PMIC_REG_BASE + 0x0E58)
#define MT6335_BUCK_VDRAM_DBG2                  (MT6335_PMIC_REG_BASE + 0x0E5A)
#define MT6335_BUCK_VMD1_CON0                   (MT6335_PMIC_REG_BASE + 0x0E5C)
#define MT6335_BUCK_VMD1_CON1                   (MT6335_PMIC_REG_BASE + 0x0E5E)
#define MT6335_BUCK_VMD1_CON2                   (MT6335_PMIC_REG_BASE + 0x0E60)
#define MT6335_BUCK_VMD1_CFG0                   (MT6335_PMIC_REG_BASE + 0x0E62)
#define MT6335_BUCK_VMD1_CFG1                   (MT6335_PMIC_REG_BASE + 0x0E64)
#define MT6335_BUCK_VMD1_OP_EN                  (MT6335_PMIC_REG_BASE + 0x0E66)
#define MT6335_BUCK_VMD1_OP_EN_SET              (MT6335_PMIC_REG_BASE + 0x0E68)
#define MT6335_BUCK_VMD1_OP_EN_CLR              (MT6335_PMIC_REG_BASE + 0x0E6A)
#define MT6335_BUCK_VMD1_OP_CFG                 (MT6335_PMIC_REG_BASE + 0x0E6C)
#define MT6335_BUCK_VMD1_OP_CFG_SET             (MT6335_PMIC_REG_BASE + 0x0E6E)
#define MT6335_BUCK_VMD1_OP_CFG_CLR             (MT6335_PMIC_REG_BASE + 0x0E70)
#define MT6335_BUCK_VMD1_SP_CON                 (MT6335_PMIC_REG_BASE + 0x0E72)
#define MT6335_BUCK_VMD1_SP_CFG                 (MT6335_PMIC_REG_BASE + 0x0E74)
#define MT6335_BUCK_VMD1_OC_CFG                 (MT6335_PMIC_REG_BASE + 0x0E76)
#define MT6335_BUCK_VMD1_DBG0                   (MT6335_PMIC_REG_BASE + 0x0E78)
#define MT6335_BUCK_VMD1_DBG1                   (MT6335_PMIC_REG_BASE + 0x0E7A)
#define MT6335_BUCK_VMD1_DBG2                   (MT6335_PMIC_REG_BASE + 0x0E7C)
#define MT6335_BUCK_VMODEM_CON0                 (MT6335_PMIC_REG_BASE + 0x0E7E)
#define MT6335_BUCK_VMODEM_CON1                 (MT6335_PMIC_REG_BASE + 0x0E80)
#define MT6335_BUCK_VMODEM_CON2                 (MT6335_PMIC_REG_BASE + 0x0E82)
#define MT6335_BUCK_VMODEM_CFG0                 (MT6335_PMIC_REG_BASE + 0x0E84)
#define MT6335_BUCK_VMODEM_CFG1                 (MT6335_PMIC_REG_BASE + 0x0E86)
#define MT6335_BUCK_VMODEM_OP_EN                (MT6335_PMIC_REG_BASE + 0x0E88)
#define MT6335_BUCK_VMODEM_OP_EN_SET            (MT6335_PMIC_REG_BASE + 0x0E8A)
#define MT6335_BUCK_VMODEM_OP_EN_CLR            (MT6335_PMIC_REG_BASE + 0x0E8C)
#define MT6335_BUCK_VMODEM_OP_CFG               (MT6335_PMIC_REG_BASE + 0x0E8E)
#define MT6335_BUCK_VMODEM_OP_CFG_SET           (MT6335_PMIC_REG_BASE + 0x0E90)
#define MT6335_BUCK_VMODEM_OP_CFG_CLR           (MT6335_PMIC_REG_BASE + 0x0E92)
#define MT6335_BUCK_VMODEM_SP_CON               (MT6335_PMIC_REG_BASE + 0x0E94)
#define MT6335_BUCK_VMODEM_SP_CFG               (MT6335_PMIC_REG_BASE + 0x0E96)
#define MT6335_BUCK_VMODEM_OC_CFG               (MT6335_PMIC_REG_BASE + 0x0E98)
#define MT6335_BUCK_VMODEM_DBG0                 (MT6335_PMIC_REG_BASE + 0x0E9A)
#define MT6335_BUCK_VMODEM_DBG1                 (MT6335_PMIC_REG_BASE + 0x0E9C)
#define MT6335_BUCK_VMODEM_DBG2                 (MT6335_PMIC_REG_BASE + 0x0E9E)
#define MT6335_BUCK_VS1_CON0                    (MT6335_PMIC_REG_BASE + 0x0EA0)
#define MT6335_BUCK_VS1_CON1                    (MT6335_PMIC_REG_BASE + 0x0EA2)
#define MT6335_BUCK_VS1_CON2                    (MT6335_PMIC_REG_BASE + 0x0EA4)
#define MT6335_BUCK_VS1_CFG0                    (MT6335_PMIC_REG_BASE + 0x0EA6)
#define MT6335_BUCK_VS1_CFG1                    (MT6335_PMIC_REG_BASE + 0x0EA8)
#define MT6335_BUCK_VS1_OP_EN                   (MT6335_PMIC_REG_BASE + 0x0EAA)
#define MT6335_BUCK_VS1_OP_EN_SET               (MT6335_PMIC_REG_BASE + 0x0EAC)
#define MT6335_BUCK_VS1_OP_EN_CLR               (MT6335_PMIC_REG_BASE + 0x0EAE)
#define MT6335_BUCK_VS1_OP_CFG                  (MT6335_PMIC_REG_BASE + 0x0EB0)
#define MT6335_BUCK_VS1_OP_CFG_SET              (MT6335_PMIC_REG_BASE + 0x0EB2)
#define MT6335_BUCK_VS1_OP_CFG_CLR              (MT6335_PMIC_REG_BASE + 0x0EB4)
#define MT6335_BUCK_VS1_SP_CON                  (MT6335_PMIC_REG_BASE + 0x0EB6)
#define MT6335_BUCK_VS1_SP_CFG                  (MT6335_PMIC_REG_BASE + 0x0EB8)
#define MT6335_BUCK_VS1_OC_CFG                  (MT6335_PMIC_REG_BASE + 0x0EBA)
#define MT6335_BUCK_VS1_DBG0                    (MT6335_PMIC_REG_BASE + 0x0EBC)
#define MT6335_BUCK_VS1_DBG1                    (MT6335_PMIC_REG_BASE + 0x0EBE)
#define MT6335_BUCK_VS1_DBG2                    (MT6335_PMIC_REG_BASE + 0x0EC0)
#define MT6335_BUCK_VS2_CON0                    (MT6335_PMIC_REG_BASE + 0x0EC2)
#define MT6335_BUCK_VS2_CON1                    (MT6335_PMIC_REG_BASE + 0x0EC4)
#define MT6335_BUCK_VS2_CON2                    (MT6335_PMIC_REG_BASE + 0x0EC6)
#define MT6335_BUCK_VS2_CFG0                    (MT6335_PMIC_REG_BASE + 0x0EC8)
#define MT6335_BUCK_VS2_CFG1                    (MT6335_PMIC_REG_BASE + 0x0ECA)
#define MT6335_BUCK_VS2_OP_EN                   (MT6335_PMIC_REG_BASE + 0x0ECC)
#define MT6335_BUCK_VS2_OP_EN_SET               (MT6335_PMIC_REG_BASE + 0x0ECE)
#define MT6335_BUCK_VS2_OP_EN_CLR               (MT6335_PMIC_REG_BASE + 0x0ED0)
#define MT6335_BUCK_VS2_OP_CFG                  (MT6335_PMIC_REG_BASE + 0x0ED2)
#define MT6335_BUCK_VS2_OP_CFG_SET              (MT6335_PMIC_REG_BASE + 0x0ED4)
#define MT6335_BUCK_VS2_OP_CFG_CLR              (MT6335_PMIC_REG_BASE + 0x0ED6)
#define MT6335_BUCK_VS2_SP_CON                  (MT6335_PMIC_REG_BASE + 0x0ED8)
#define MT6335_BUCK_VS2_SP_CFG                  (MT6335_PMIC_REG_BASE + 0x0EDA)
#define MT6335_BUCK_VS2_OC_CFG                  (MT6335_PMIC_REG_BASE + 0x0EDC)
#define MT6335_BUCK_VS2_DBG0                    (MT6335_PMIC_REG_BASE + 0x0EDE)
#define MT6335_BUCK_VS2_DBG1                    (MT6335_PMIC_REG_BASE + 0x0EE0)
#define MT6335_BUCK_VS2_DBG2                    (MT6335_PMIC_REG_BASE + 0x0EE2)
#define MT6335_BUCK_VPA1_CON0                   (MT6335_PMIC_REG_BASE + 0x0EE4)
#define MT6335_BUCK_VPA1_CON1                   (MT6335_PMIC_REG_BASE + 0x0EE6)
#define MT6335_BUCK_VPA1_CFG0                   (MT6335_PMIC_REG_BASE + 0x0EE8)
#define MT6335_BUCK_VPA1_CFG1                   (MT6335_PMIC_REG_BASE + 0x0EEA)
#define MT6335_BUCK_VPA1_CFG2                   (MT6335_PMIC_REG_BASE + 0x0EEC)
#define MT6335_BUCK_VPA1_OC_CFG                 (MT6335_PMIC_REG_BASE + 0x0EEE)
#define MT6335_BUCK_VPA1_DBG0                   (MT6335_PMIC_REG_BASE + 0x0EF0)
#define MT6335_BUCK_VPA1_DBG1                   (MT6335_PMIC_REG_BASE + 0x0EF2)
#define MT6335_BUCK_VPA1_DBG2                   (MT6335_PMIC_REG_BASE + 0x0EF4)
#define MT6335_BUCK_VPA1_DLC_CON0               (MT6335_PMIC_REG_BASE + 0x0EF6)
#define MT6335_BUCK_VPA1_DLC_CON1               (MT6335_PMIC_REG_BASE + 0x0EF8)
#define MT6335_BUCK_VPA1_DLC_CON2               (MT6335_PMIC_REG_BASE + 0x0EFA)
#define MT6335_BUCK_VPA1_MSFG_CON0              (MT6335_PMIC_REG_BASE + 0x0EFC)
#define MT6335_BUCK_VPA1_MSFG_CON1              (MT6335_PMIC_REG_BASE + 0x0EFE)
#define MT6335_BUCK_VPA1_MSFG_RRATE0            (MT6335_PMIC_REG_BASE + 0x0F00)
#define MT6335_BUCK_VPA1_MSFG_RRATE1            (MT6335_PMIC_REG_BASE + 0x0F02)
#define MT6335_BUCK_VPA1_MSFG_RTHD0             (MT6335_PMIC_REG_BASE + 0x0F04)
#define MT6335_BUCK_VPA1_MSFG_RTHD1             (MT6335_PMIC_REG_BASE + 0x0F06)
#define MT6335_BUCK_VPA1_MSFG_RTHD2             (MT6335_PMIC_REG_BASE + 0x0F08)
#define MT6335_BUCK_VPA1_MSFG_FRATE0            (MT6335_PMIC_REG_BASE + 0x0F0A)
#define MT6335_BUCK_VPA1_MSFG_FRATE1            (MT6335_PMIC_REG_BASE + 0x0F0C)
#define MT6335_BUCK_VPA1_MSFG_FTHD0             (MT6335_PMIC_REG_BASE + 0x0F0E)
#define MT6335_BUCK_VPA1_MSFG_FTHD1             (MT6335_PMIC_REG_BASE + 0x0F10)
#define MT6335_BUCK_VPA1_MSFG_FTHD2             (MT6335_PMIC_REG_BASE + 0x0F12)
#define MT6335_BUCK_VPA2_CON0                   (MT6335_PMIC_REG_BASE + 0x0F14)
#define MT6335_BUCK_VPA2_CON1                   (MT6335_PMIC_REG_BASE + 0x0F16)
#define MT6335_BUCK_VPA2_CFG0                   (MT6335_PMIC_REG_BASE + 0x0F18)
#define MT6335_BUCK_VPA2_CFG1                   (MT6335_PMIC_REG_BASE + 0x0F1A)
#define MT6335_BUCK_VPA2_CFG2                   (MT6335_PMIC_REG_BASE + 0x0F1C)
#define MT6335_BUCK_VPA2_OC_CFG                 (MT6335_PMIC_REG_BASE + 0x0F1E)
#define MT6335_BUCK_VPA2_DBG0                   (MT6335_PMIC_REG_BASE + 0x0F20)
#define MT6335_BUCK_VPA2_DBG1                   (MT6335_PMIC_REG_BASE + 0x0F22)
#define MT6335_BUCK_VPA2_DBG2                   (MT6335_PMIC_REG_BASE + 0x0F24)
#define MT6335_BUCK_VPA2_DLC_CON0               (MT6335_PMIC_REG_BASE + 0x0F26)
#define MT6335_BUCK_VPA2_DLC_CON1               (MT6335_PMIC_REG_BASE + 0x0F28)
#define MT6335_BUCK_VPA2_DLC_CON2               (MT6335_PMIC_REG_BASE + 0x0F2A)
#define MT6335_BUCK_VPA2_MSFG_CON0              (MT6335_PMIC_REG_BASE + 0x0F2C)
#define MT6335_BUCK_VPA2_MSFG_CON1              (MT6335_PMIC_REG_BASE + 0x0F2E)
#define MT6335_BUCK_VPA2_MSFG_RRATE0            (MT6335_PMIC_REG_BASE + 0x0F30)
#define MT6335_BUCK_VPA2_MSFG_RRATE1            (MT6335_PMIC_REG_BASE + 0x0F32)
#define MT6335_BUCK_VPA2_MSFG_RTHD0             (MT6335_PMIC_REG_BASE + 0x0F34)
#define MT6335_BUCK_VPA2_MSFG_RTHD1             (MT6335_PMIC_REG_BASE + 0x0F36)
#define MT6335_BUCK_VPA2_MSFG_RTHD2             (MT6335_PMIC_REG_BASE + 0x0F38)
#define MT6335_BUCK_VPA2_MSFG_FRATE0            (MT6335_PMIC_REG_BASE + 0x0F3A)
#define MT6335_BUCK_VPA2_MSFG_FRATE1            (MT6335_PMIC_REG_BASE + 0x0F3C)
#define MT6335_BUCK_VPA2_MSFG_FTHD0             (MT6335_PMIC_REG_BASE + 0x0F3E)
#define MT6335_BUCK_VPA2_MSFG_FTHD1             (MT6335_PMIC_REG_BASE + 0x0F40)
#define MT6335_BUCK_VPA2_MSFG_FTHD2             (MT6335_PMIC_REG_BASE + 0x0F42)
#define MT6335_SMPS_ANA_CON0                    (MT6335_PMIC_REG_BASE + 0x0F44)
#define MT6335_SMPS_ANA_CON1                    (MT6335_PMIC_REG_BASE + 0x0F46)
#define MT6335_SMPS_ANA_CON2                    (MT6335_PMIC_REG_BASE + 0x0F48)
#define MT6335_SMPS_ANA_CON3                    (MT6335_PMIC_REG_BASE + 0x0F4A)
#define MT6335_SMPS_ANA_CON4                    (MT6335_PMIC_REG_BASE + 0x0F4C)
#define MT6335_SMPS_ANA_CON5                    (MT6335_PMIC_REG_BASE + 0x0F4E)
#define MT6335_SMPS_ANA_CON6                    (MT6335_PMIC_REG_BASE + 0x0F50)
#define MT6335_SMPS_ANA_CON7                    (MT6335_PMIC_REG_BASE + 0x0F52)
#define MT6335_SMPS_ANA_CON8                    (MT6335_PMIC_REG_BASE + 0x0F54)
#define MT6335_SMPS_ANA_CON9                    (MT6335_PMIC_REG_BASE + 0x0F56)
#define MT6335_SMPS_ANA_CON10                   (MT6335_PMIC_REG_BASE + 0x0F58)
#define MT6335_SMPS_ANA_CON11                   (MT6335_PMIC_REG_BASE + 0x0F5A)
#define MT6335_SMPS_ANA_CON12                   (MT6335_PMIC_REG_BASE + 0x0F5C)
#define MT6335_SMPS_ANA_CON13                   (MT6335_PMIC_REG_BASE + 0x0F5E)
#define MT6335_SMPS_ANA_CON14                   (MT6335_PMIC_REG_BASE + 0x0F60)
#define MT6335_SMPS_ANA_CON15                   (MT6335_PMIC_REG_BASE + 0x0F62)
#define MT6335_VCORE_ANA_CON0                   (MT6335_PMIC_REG_BASE + 0x0F64)
#define MT6335_VCORE_ANA_CON1                   (MT6335_PMIC_REG_BASE + 0x0F66)
#define MT6335_VCORE_ANA_CON2                   (MT6335_PMIC_REG_BASE + 0x0F68)
#define MT6335_VCORE_ANA_CON3                   (MT6335_PMIC_REG_BASE + 0x0F6A)
#define MT6335_VCORE_ANA_CON4                   (MT6335_PMIC_REG_BASE + 0x0F6C)
#define MT6335_VCORE_ANA_CON5                   (MT6335_PMIC_REG_BASE + 0x0F6E)
#define MT6335_VCORE_ANA_CON6                   (MT6335_PMIC_REG_BASE + 0x0F70)
#define MT6335_VCORE_ANA_CON7                   (MT6335_PMIC_REG_BASE + 0x0F72)
#define MT6335_VCORE_ANA_CON8                   (MT6335_PMIC_REG_BASE + 0x0F74)
#define MT6335_VCORE_ANA_CON9                   (MT6335_PMIC_REG_BASE + 0x0F76)
#define MT6335_VDRAM_ANA_CON0                   (MT6335_PMIC_REG_BASE + 0x0F78)
#define MT6335_VDRAM_ANA_CON1                   (MT6335_PMIC_REG_BASE + 0x0F7A)
#define MT6335_VDRAM_ANA_CON2                   (MT6335_PMIC_REG_BASE + 0x0F7C)
#define MT6335_VDRAM_ANA_CON3                   (MT6335_PMIC_REG_BASE + 0x0F7E)
#define MT6335_VDRAM_ANA_CON4                   (MT6335_PMIC_REG_BASE + 0x0F80)
#define MT6335_VDRAM_ANA_CON5                   (MT6335_PMIC_REG_BASE + 0x0F82)
#define MT6335_VDRAM_ANA_CON6                   (MT6335_PMIC_REG_BASE + 0x0F84)
#define MT6335_VDRAM_ANA_CON7                   (MT6335_PMIC_REG_BASE + 0x0F86)
#define MT6335_VDRAM_ANA_CON8                   (MT6335_PMIC_REG_BASE + 0x0F88)
#define MT6335_VDRAM_ANA_CON9                   (MT6335_PMIC_REG_BASE + 0x0F8A)
#define MT6335_VMODEM_ANA_CON0                  (MT6335_PMIC_REG_BASE + 0x0F8C)
#define MT6335_VMODEM_ANA_CON1                  (MT6335_PMIC_REG_BASE + 0x0F8E)
#define MT6335_VMODEM_ANA_CON2                  (MT6335_PMIC_REG_BASE + 0x0F90)
#define MT6335_VMODEM_ANA_CON3                  (MT6335_PMIC_REG_BASE + 0x0F92)
#define MT6335_VMODEM_ANA_CON4                  (MT6335_PMIC_REG_BASE + 0x0F94)
#define MT6335_VMODEM_ANA_CON5                  (MT6335_PMIC_REG_BASE + 0x0F96)
#define MT6335_VMODEM_ANA_CON6                  (MT6335_PMIC_REG_BASE + 0x0F98)
#define MT6335_VMODEM_ANA_CON7                  (MT6335_PMIC_REG_BASE + 0x0F9A)
#define MT6335_VMODEM_ANA_CON8                  (MT6335_PMIC_REG_BASE + 0x0F9C)
#define MT6335_VMODEM_ANA_CON9                  (MT6335_PMIC_REG_BASE + 0x0F9E)
#define MT6335_VMD1_ANA_CON0                    (MT6335_PMIC_REG_BASE + 0x0FA0)
#define MT6335_VMD1_ANA_CON1                    (MT6335_PMIC_REG_BASE + 0x0FA2)
#define MT6335_VMD1_ANA_CON2                    (MT6335_PMIC_REG_BASE + 0x0FA4)
#define MT6335_VMD1_ANA_CON3                    (MT6335_PMIC_REG_BASE + 0x0FA6)
#define MT6335_VMD1_ANA_CON4                    (MT6335_PMIC_REG_BASE + 0x0FA8)
#define MT6335_VMD1_ANA_CON5                    (MT6335_PMIC_REG_BASE + 0x0FAA)
#define MT6335_VMD1_ANA_CON6                    (MT6335_PMIC_REG_BASE + 0x0FAC)
#define MT6335_VMD1_ANA_CON7                    (MT6335_PMIC_REG_BASE + 0x0FAE)
#define MT6335_VMD1_ANA_CON8                    (MT6335_PMIC_REG_BASE + 0x0FB0)
#define MT6335_VMD1_ANA_CON9                    (MT6335_PMIC_REG_BASE + 0x0FB2)
#define MT6335_VS1_ANA_CON0                     (MT6335_PMIC_REG_BASE + 0x0FB4)
#define MT6335_VS1_ANA_CON1                     (MT6335_PMIC_REG_BASE + 0x0FB6)
#define MT6335_VS1_ANA_CON2                     (MT6335_PMIC_REG_BASE + 0x0FB8)
#define MT6335_VS1_ANA_CON3                     (MT6335_PMIC_REG_BASE + 0x0FBA)
#define MT6335_VS1_ANA_CON4                     (MT6335_PMIC_REG_BASE + 0x0FBC)
#define MT6335_VS1_ANA_CON5                     (MT6335_PMIC_REG_BASE + 0x0FBE)
#define MT6335_VS1_ANA_CON6                     (MT6335_PMIC_REG_BASE + 0x0FC0)
#define MT6335_VS1_ANA_CON7                     (MT6335_PMIC_REG_BASE + 0x0FC2)
#define MT6335_VS1_ANA_CON8                     (MT6335_PMIC_REG_BASE + 0x0FC4)
#define MT6335_VS1_ANA_CON9                     (MT6335_PMIC_REG_BASE + 0x0FC6)
#define MT6335_VS2_ANA_CON0                     (MT6335_PMIC_REG_BASE + 0x0FC8)
#define MT6335_VS2_ANA_CON1                     (MT6335_PMIC_REG_BASE + 0x0FCA)
#define MT6335_VS2_ANA_CON2                     (MT6335_PMIC_REG_BASE + 0x0FCC)
#define MT6335_VS2_ANA_CON3                     (MT6335_PMIC_REG_BASE + 0x0FCE)
#define MT6335_VS2_ANA_CON4                     (MT6335_PMIC_REG_BASE + 0x0FD0)
#define MT6335_VS2_ANA_CON5                     (MT6335_PMIC_REG_BASE + 0x0FD2)
#define MT6335_VS2_ANA_CON6                     (MT6335_PMIC_REG_BASE + 0x0FD4)
#define MT6335_VS2_ANA_CON7                     (MT6335_PMIC_REG_BASE + 0x0FD6)
#define MT6335_VS2_ANA_CON8                     (MT6335_PMIC_REG_BASE + 0x0FD8)
#define MT6335_VS2_ANA_CON9                     (MT6335_PMIC_REG_BASE + 0x0FDA)
#define MT6335_VPA1_ANA_CON0                    (MT6335_PMIC_REG_BASE + 0x0FDC)
#define MT6335_VPA1_ANA_CON1                    (MT6335_PMIC_REG_BASE + 0x0FDE)
#define MT6335_VPA1_ANA_CON2                    (MT6335_PMIC_REG_BASE + 0x0FE0)
#define MT6335_VPA1_ANA_CON3                    (MT6335_PMIC_REG_BASE + 0x0FE2)
#define MT6335_VPA1_ANA_CON4                    (MT6335_PMIC_REG_BASE + 0x0FE4)
#define MT6335_VPA1_ANA_CON5                    (MT6335_PMIC_REG_BASE + 0x0FE6)
#define MT6335_VPA2_ANA_CON0                    (MT6335_PMIC_REG_BASE + 0x0FE8)
#define MT6335_VPA2_ANA_CON1                    (MT6335_PMIC_REG_BASE + 0x0FEA)
#define MT6335_VPA2_ANA_CON2                    (MT6335_PMIC_REG_BASE + 0x0FEC)
#define MT6335_VPA2_ANA_CON3                    (MT6335_PMIC_REG_BASE + 0x0FEE)
#define MT6335_VPA2_ANA_CON4                    (MT6335_PMIC_REG_BASE + 0x0FF0)
#define MT6335_VPA2_ANA_CON5                    (MT6335_PMIC_REG_BASE + 0x0FF2)
#define MT6335_WDTDBG_CON0                      (MT6335_PMIC_REG_BASE + 0x1000)
#define MT6335_WDTDBG_MON0                      (MT6335_PMIC_REG_BASE + 0x1002)
#define MT6335_WDTDBG_MON1                      (MT6335_PMIC_REG_BASE + 0x1004)
#define MT6335_WDTDBG_MON2                      (MT6335_PMIC_REG_BASE + 0x1006)
#define MT6335_WDTDBG_MON3                      (MT6335_PMIC_REG_BASE + 0x1008)
#define MT6335_WDTDBG_MON4                      (MT6335_PMIC_REG_BASE + 0x100A)
#define MT6335_WDTDBG_MON5                      (MT6335_PMIC_REG_BASE + 0x100C)
#define MT6335_WDTDBG_MON6                      (MT6335_PMIC_REG_BASE + 0x100E)
#define MT6335_ISINKA_ANA_CON_0                 (MT6335_PMIC_REG_BASE + 0x1200)
#define MT6335_ISINKB_ANA_CON_0                 (MT6335_PMIC_REG_BASE + 0x1202)
#define MT6335_ISINK0_CON0                      (MT6335_PMIC_REG_BASE + 0x1204)
#define MT6335_ISINK0_CON1                      (MT6335_PMIC_REG_BASE + 0x1206)
#define MT6335_ISINK0_CON2                      (MT6335_PMIC_REG_BASE + 0x1208)
#define MT6335_ISINK0_CON3                      (MT6335_PMIC_REG_BASE + 0x120A)
#define MT6335_ISINK1_CON0                      (MT6335_PMIC_REG_BASE + 0x120C)
#define MT6335_ISINK1_CON1                      (MT6335_PMIC_REG_BASE + 0x120E)
#define MT6335_ISINK1_CON2                      (MT6335_PMIC_REG_BASE + 0x1210)
#define MT6335_ISINK1_CON3                      (MT6335_PMIC_REG_BASE + 0x1212)
#define MT6335_ISINK2_CON0                      (MT6335_PMIC_REG_BASE + 0x1214)
#define MT6335_ISINK2_CON1                      (MT6335_PMIC_REG_BASE + 0x1216)
#define MT6335_ISINK2_CON2                      (MT6335_PMIC_REG_BASE + 0x1218)
#define MT6335_ISINK2_CON3                      (MT6335_PMIC_REG_BASE + 0x121A)
#define MT6335_ISINK3_CON0                      (MT6335_PMIC_REG_BASE + 0x121C)
#define MT6335_ISINK3_CON1                      (MT6335_PMIC_REG_BASE + 0x121E)
#define MT6335_ISINK3_CON2                      (MT6335_PMIC_REG_BASE + 0x1220)
#define MT6335_ISINK3_CON3                      (MT6335_PMIC_REG_BASE + 0x1222)
#define MT6335_ISINK_ANA1                       (MT6335_PMIC_REG_BASE + 0x1224)
#define MT6335_ISINK_PHASE_DLY                  (MT6335_PMIC_REG_BASE + 0x1226)
#define MT6335_ISINK_SFSTR                      (MT6335_PMIC_REG_BASE + 0x1228)
#define MT6335_ISINK_EN_CTRL                    (MT6335_PMIC_REG_BASE + 0x122A)
#define MT6335_ISINK_MODE_CTRL                  (MT6335_PMIC_REG_BASE + 0x122C)
#define MT6335_ISINK_ANA_CON0                   (MT6335_PMIC_REG_BASE + 0x122E)
#define MT6335_ISINK4_CON1                      (MT6335_PMIC_REG_BASE + 0x1230)
#define MT6335_ISINK5_CON1                      (MT6335_PMIC_REG_BASE + 0x1232)
#define MT6335_ISINK6_CON1                      (MT6335_PMIC_REG_BASE + 0x1234)
#define MT6335_ISINK7_CON1                      (MT6335_PMIC_REG_BASE + 0x1236)
#define MT6335_ISINK_ANA1_SMPL                  (MT6335_PMIC_REG_BASE + 0x1238)
#define MT6335_ISINK_PHASE_DLY_SMPL             (MT6335_PMIC_REG_BASE + 0x123A)
#define MT6335_ISINK_EN_CTRL_SMPL               (MT6335_PMIC_REG_BASE + 0x123C)
#define MT6335_LDO_VIO28_CON0                   (MT6335_PMIC_REG_BASE + 0x1400)
#define MT6335_LDO_VIO28_OP_EN                  (MT6335_PMIC_REG_BASE + 0x1402)
#define MT6335_LDO_VIO28_OP_EN_SET              (MT6335_PMIC_REG_BASE + 0x1404)
#define MT6335_LDO_VIO28_OP_EN_CLR              (MT6335_PMIC_REG_BASE + 0x1406)
#define MT6335_LDO_VIO28_OP_CFG                 (MT6335_PMIC_REG_BASE + 0x1408)
#define MT6335_LDO_VIO28_OP_CFG_SET             (MT6335_PMIC_REG_BASE + 0x140A)
#define MT6335_LDO_VIO28_OP_CFG_CLR             (MT6335_PMIC_REG_BASE + 0x140C)
#define MT6335_LDO_VIO28_CON1                   (MT6335_PMIC_REG_BASE + 0x140E)
#define MT6335_LDO_VIO28_CON2                   (MT6335_PMIC_REG_BASE + 0x1410)
#define MT6335_LDO_VIO28_CON3                   (MT6335_PMIC_REG_BASE + 0x1412)
#define MT6335_LDO_VIO18_CON0                   (MT6335_PMIC_REG_BASE + 0x1414)
#define MT6335_LDO_VIO18_OP_EN                  (MT6335_PMIC_REG_BASE + 0x1416)
#define MT6335_LDO_VIO18_OP_EN_SET              (MT6335_PMIC_REG_BASE + 0x1418)
#define MT6335_LDO_VIO18_OP_EN_CLR              (MT6335_PMIC_REG_BASE + 0x141A)
#define MT6335_LDO_VIO18_OP_CFG                 (MT6335_PMIC_REG_BASE + 0x141C)
#define MT6335_LDO_VIO18_OP_CFG_SET             (MT6335_PMIC_REG_BASE + 0x141E)
#define MT6335_LDO_VIO18_OP_CFG_CLR             (MT6335_PMIC_REG_BASE + 0x1420)
#define MT6335_LDO_VIO18_CON1                   (MT6335_PMIC_REG_BASE + 0x1422)
#define MT6335_LDO_VIO18_CON2                   (MT6335_PMIC_REG_BASE + 0x1424)
#define MT6335_LDO_VIO18_CON3                   (MT6335_PMIC_REG_BASE + 0x1426)
#define MT6335_LDO_VUFS18_CON0                  (MT6335_PMIC_REG_BASE + 0x1428)
#define MT6335_LDO_VUFS18_OP_EN                 (MT6335_PMIC_REG_BASE + 0x142A)
#define MT6335_LDO_VUFS18_OP_EN_SET             (MT6335_PMIC_REG_BASE + 0x142C)
#define MT6335_LDO_VUFS18_OP_EN_CLR             (MT6335_PMIC_REG_BASE + 0x142E)
#define MT6335_LDO_VUFS18_OP_CFG                (MT6335_PMIC_REG_BASE + 0x1430)
#define MT6335_LDO_VUFS18_OP_CFG_SET            (MT6335_PMIC_REG_BASE + 0x1432)
#define MT6335_LDO_VUFS18_OP_CFG_CLR            (MT6335_PMIC_REG_BASE + 0x1434)
#define MT6335_LDO_VUFS18_CON1                  (MT6335_PMIC_REG_BASE + 0x1436)
#define MT6335_LDO_VUFS18_CON2                  (MT6335_PMIC_REG_BASE + 0x1438)
#define MT6335_LDO_VUFS18_CON3                  (MT6335_PMIC_REG_BASE + 0x143A)
#define MT6335_LDO_VA10_CON0                    (MT6335_PMIC_REG_BASE + 0x143C)
#define MT6335_LDO_VA10_OP_EN                   (MT6335_PMIC_REG_BASE + 0x143E)
#define MT6335_LDO_VA10_OP_EN_SET               (MT6335_PMIC_REG_BASE + 0x1440)
#define MT6335_LDO_VA10_OP_EN_CLR               (MT6335_PMIC_REG_BASE + 0x1442)
#define MT6335_LDO_VA10_OP_CFG                  (MT6335_PMIC_REG_BASE + 0x1444)
#define MT6335_LDO_VA10_OP_CFG_SET              (MT6335_PMIC_REG_BASE + 0x1446)
#define MT6335_LDO_VA10_OP_CFG_CLR              (MT6335_PMIC_REG_BASE + 0x1448)
#define MT6335_LDO_VA10_CON1                    (MT6335_PMIC_REG_BASE + 0x144A)
#define MT6335_LDO_VA10_CON2                    (MT6335_PMIC_REG_BASE + 0x144C)
#define MT6335_LDO_VA10_CON3                    (MT6335_PMIC_REG_BASE + 0x144E)
#define MT6335_LDO_VA12_CON0                    (MT6335_PMIC_REG_BASE + 0x1450)
#define MT6335_LDO_VA12_OP_EN                   (MT6335_PMIC_REG_BASE + 0x1452)
#define MT6335_LDO_VA12_OP_EN_SET               (MT6335_PMIC_REG_BASE + 0x1454)
#define MT6335_LDO_VA12_OP_EN_CLR               (MT6335_PMIC_REG_BASE + 0x1456)
#define MT6335_LDO_VA12_OP_CFG                  (MT6335_PMIC_REG_BASE + 0x1458)
#define MT6335_LDO_VA12_OP_CFG_SET              (MT6335_PMIC_REG_BASE + 0x145A)
#define MT6335_LDO_VA12_OP_CFG_CLR              (MT6335_PMIC_REG_BASE + 0x145C)
#define MT6335_LDO_VA12_CON1                    (MT6335_PMIC_REG_BASE + 0x145E)
#define MT6335_LDO_VA12_CON2                    (MT6335_PMIC_REG_BASE + 0x1460)
#define MT6335_LDO_VA12_CON3                    (MT6335_PMIC_REG_BASE + 0x1462)
#define MT6335_LDO_VA18_CON0                    (MT6335_PMIC_REG_BASE + 0x1464)
#define MT6335_LDO_VA18_OP_EN                   (MT6335_PMIC_REG_BASE + 0x1466)
#define MT6335_LDO_VA18_OP_EN_SET               (MT6335_PMIC_REG_BASE + 0x1468)
#define MT6335_LDO_VA18_OP_EN_CLR               (MT6335_PMIC_REG_BASE + 0x146A)
#define MT6335_LDO_VA18_OP_CFG                  (MT6335_PMIC_REG_BASE + 0x146C)
#define MT6335_LDO_VA18_OP_CFG_SET              (MT6335_PMIC_REG_BASE + 0x146E)
#define MT6335_LDO_VA18_OP_CFG_CLR              (MT6335_PMIC_REG_BASE + 0x1470)
#define MT6335_LDO_VA18_CON1                    (MT6335_PMIC_REG_BASE + 0x1472)
#define MT6335_LDO_VA18_CON2                    (MT6335_PMIC_REG_BASE + 0x1474)
#define MT6335_LDO_VUSB33_CON0                  (MT6335_PMIC_REG_BASE + 0x1476)
#define MT6335_LDO_VUSB33_OP_EN                 (MT6335_PMIC_REG_BASE + 0x1478)
#define MT6335_LDO_VUSB33_OP_EN_SET             (MT6335_PMIC_REG_BASE + 0x147A)
#define MT6335_LDO_VUSB33_OP_EN_CLR             (MT6335_PMIC_REG_BASE + 0x147C)
#define MT6335_LDO_VUSB33_OP_CFG                (MT6335_PMIC_REG_BASE + 0x147E)
#define MT6335_LDO_VUSB33_OP_CFG_SET            (MT6335_PMIC_REG_BASE + 0x1480)
#define MT6335_LDO_VUSB33_OP_CFG_CLR            (MT6335_PMIC_REG_BASE + 0x1482)
#define MT6335_LDO_VUSB33_CON1                  (MT6335_PMIC_REG_BASE + 0x1484)
#define MT6335_LDO_VUSB33_CON2                  (MT6335_PMIC_REG_BASE + 0x1486)
#define MT6335_LDO_VEMC_CON0                    (MT6335_PMIC_REG_BASE + 0x1488)
#define MT6335_LDO_VEMC_OP_EN                   (MT6335_PMIC_REG_BASE + 0x148A)
#define MT6335_LDO_VEMC_OP_EN_SET               (MT6335_PMIC_REG_BASE + 0x148C)
#define MT6335_LDO_VEMC_OP_EN_CLR               (MT6335_PMIC_REG_BASE + 0x148E)
#define MT6335_LDO_VEMC_OP_CFG                  (MT6335_PMIC_REG_BASE + 0x1490)
#define MT6335_LDO_VEMC_OP_CFG_SET              (MT6335_PMIC_REG_BASE + 0x1492)
#define MT6335_LDO_VEMC_OP_CFG_CLR              (MT6335_PMIC_REG_BASE + 0x1494)
#define MT6335_LDO_VEMC_CON1                    (MT6335_PMIC_REG_BASE + 0x1496)
#define MT6335_LDO_VEMC_CON2                    (MT6335_PMIC_REG_BASE + 0x1498)
#define MT6335_LDO_VEMC_CON3                    (MT6335_PMIC_REG_BASE + 0x149A)
#define MT6335_LDO_VXO22_CON0                   (MT6335_PMIC_REG_BASE + 0x149C)
#define MT6335_LDO_VXO22_OP_EN                  (MT6335_PMIC_REG_BASE + 0x149E)
#define MT6335_LDO_VXO22_OP_EN_SET              (MT6335_PMIC_REG_BASE + 0x14A0)
#define MT6335_LDO_VXO22_OP_EN_CLR              (MT6335_PMIC_REG_BASE + 0x14A2)
#define MT6335_LDO_VXO22_OP_CFG                 (MT6335_PMIC_REG_BASE + 0x14A4)
#define MT6335_LDO_VXO22_OP_CFG_SET             (MT6335_PMIC_REG_BASE + 0x14A6)
#define MT6335_LDO_VXO22_OP_CFG_CLR             (MT6335_PMIC_REG_BASE + 0x14A8)
#define MT6335_LDO_VXO22_CON1                   (MT6335_PMIC_REG_BASE + 0x14AA)
#define MT6335_LDO_VXO22_CON2                   (MT6335_PMIC_REG_BASE + 0x14AC)
#define MT6335_LDO_VEFUSE_CON0                  (MT6335_PMIC_REG_BASE + 0x14AE)
#define MT6335_LDO_VEFUSE_OP_EN                 (MT6335_PMIC_REG_BASE + 0x14B0)
#define MT6335_LDO_VEFUSE_OP_EN_SET             (MT6335_PMIC_REG_BASE + 0x14B2)
#define MT6335_LDO_VEFUSE_OP_EN_CLR             (MT6335_PMIC_REG_BASE + 0x14B4)
#define MT6335_LDO_VEFUSE_OP_CFG                (MT6335_PMIC_REG_BASE + 0x14B6)
#define MT6335_LDO_VEFUSE_OP_CFG_SET            (MT6335_PMIC_REG_BASE + 0x14B8)
#define MT6335_LDO_VEFUSE_OP_CFG_CLR            (MT6335_PMIC_REG_BASE + 0x14BA)
#define MT6335_LDO_VEFUSE_CON1                  (MT6335_PMIC_REG_BASE + 0x14BC)
#define MT6335_LDO_VEFUSE_CON2                  (MT6335_PMIC_REG_BASE + 0x14BE)
#define MT6335_LDO_VEFUSE_CON3                  (MT6335_PMIC_REG_BASE + 0x14C0)
#define MT6335_LDO_VSIM1_CON0                   (MT6335_PMIC_REG_BASE + 0x14C2)
#define MT6335_LDO_VSIM1_OP_EN                  (MT6335_PMIC_REG_BASE + 0x14C4)
#define MT6335_LDO_VSIM1_OP_EN_SET              (MT6335_PMIC_REG_BASE + 0x14C6)
#define MT6335_LDO_VSIM1_OP_EN_CLR              (MT6335_PMIC_REG_BASE + 0x14C8)
#define MT6335_LDO_VSIM1_OP_CFG                 (MT6335_PMIC_REG_BASE + 0x14CA)
#define MT6335_LDO_VSIM1_OP_CFG_SET             (MT6335_PMIC_REG_BASE + 0x14CC)
#define MT6335_LDO_VSIM1_OP_CFG_CLR             (MT6335_PMIC_REG_BASE + 0x14CE)
#define MT6335_LDO_VSIM1_CON1                   (MT6335_PMIC_REG_BASE + 0x14D0)
#define MT6335_LDO_VSIM1_CON2                   (MT6335_PMIC_REG_BASE + 0x14D2)
#define MT6335_LDO_VSIM1_CON3                   (MT6335_PMIC_REG_BASE + 0x14D4)
#define MT6335_LDO_VSIM2_CON0                   (MT6335_PMIC_REG_BASE + 0x14D6)
#define MT6335_LDO_VSIM2_OP_EN                  (MT6335_PMIC_REG_BASE + 0x14D8)
#define MT6335_LDO_VSIM2_OP_EN_SET              (MT6335_PMIC_REG_BASE + 0x14DA)
#define MT6335_LDO_VSIM2_OP_EN_CLR              (MT6335_PMIC_REG_BASE + 0x14DC)
#define MT6335_LDO_VSIM2_OP_CFG                 (MT6335_PMIC_REG_BASE + 0x14DE)
#define MT6335_LDO_VSIM2_OP_CFG_SET             (MT6335_PMIC_REG_BASE + 0x14E0)
#define MT6335_LDO_VSIM2_OP_CFG_CLR             (MT6335_PMIC_REG_BASE + 0x14E2)
#define MT6335_LDO_VSIM2_CON1                   (MT6335_PMIC_REG_BASE + 0x14E4)
#define MT6335_LDO_VSIM2_CON2                   (MT6335_PMIC_REG_BASE + 0x14E6)
#define MT6335_LDO_VSIM2_CON3                   (MT6335_PMIC_REG_BASE + 0x14E8)
#define MT6335_LDO_VCAMAF_CON0                  (MT6335_PMIC_REG_BASE + 0x14EA)
#define MT6335_LDO_VCAMAF_OP_EN                 (MT6335_PMIC_REG_BASE + 0x14EC)
#define MT6335_LDO_VCAMAF_OP_EN_SET             (MT6335_PMIC_REG_BASE + 0x14EE)
#define MT6335_LDO_VCAMAF_OP_EN_CLR             (MT6335_PMIC_REG_BASE + 0x14F0)
#define MT6335_LDO_VCAMAF_OP_CFG                (MT6335_PMIC_REG_BASE + 0x14F2)
#define MT6335_LDO_VCAMAF_OP_CFG_SET            (MT6335_PMIC_REG_BASE + 0x14F4)
#define MT6335_LDO_VCAMAF_OP_CFG_CLR            (MT6335_PMIC_REG_BASE + 0x14F6)
#define MT6335_LDO_VCAMAF_CON1                  (MT6335_PMIC_REG_BASE + 0x14F8)
#define MT6335_LDO_VCAMAF_CON2                  (MT6335_PMIC_REG_BASE + 0x14FA)
#define MT6335_LDO_VCAMAF_CON3                  (MT6335_PMIC_REG_BASE + 0x14FC)
#define MT6335_LDO_VTOUCH_CON0                  (MT6335_PMIC_REG_BASE + 0x14FE)
#define MT6335_LDO_VTOUCH_OP_EN                 (MT6335_PMIC_REG_BASE + 0x1500)
#define MT6335_LDO_VTOUCH_OP_EN_SET             (MT6335_PMIC_REG_BASE + 0x1502)
#define MT6335_LDO_VTOUCH_OP_EN_CLR             (MT6335_PMIC_REG_BASE + 0x1504)
#define MT6335_LDO_VTOUCH_OP_CFG                (MT6335_PMIC_REG_BASE + 0x1506)
#define MT6335_LDO_VTOUCH_OP_CFG_SET            (MT6335_PMIC_REG_BASE + 0x1508)
#define MT6335_LDO_VTOUCH_OP_CFG_CLR            (MT6335_PMIC_REG_BASE + 0x150A)
#define MT6335_LDO_VTOUCH_CON1                  (MT6335_PMIC_REG_BASE + 0x150C)
#define MT6335_LDO_VTOUCH_CON2                  (MT6335_PMIC_REG_BASE + 0x150E)
#define MT6335_LDO_VTOUCH_CON3                  (MT6335_PMIC_REG_BASE + 0x1510)
#define MT6335_LDO_VCAMD1_CON0                  (MT6335_PMIC_REG_BASE + 0x1512)
#define MT6335_LDO_VCAMD1_OP_EN                 (MT6335_PMIC_REG_BASE + 0x1514)
#define MT6335_LDO_VCAMD1_OP_EN_SET             (MT6335_PMIC_REG_BASE + 0x1516)
#define MT6335_LDO_VCAMD1_OP_EN_CLR             (MT6335_PMIC_REG_BASE + 0x1518)
#define MT6335_LDO_VCAMD1_OP_CFG                (MT6335_PMIC_REG_BASE + 0x151A)
#define MT6335_LDO_VCAMD1_OP_CFG_SET            (MT6335_PMIC_REG_BASE + 0x151C)
#define MT6335_LDO_VCAMD1_OP_CFG_CLR            (MT6335_PMIC_REG_BASE + 0x151E)
#define MT6335_LDO_VCAMD1_CON1                  (MT6335_PMIC_REG_BASE + 0x1520)
#define MT6335_LDO_VCAMD1_CON2                  (MT6335_PMIC_REG_BASE + 0x1522)
#define MT6335_LDO_VCAMD1_CON3                  (MT6335_PMIC_REG_BASE + 0x1524)
#define MT6335_LDO_VCAMD2_CON0                  (MT6335_PMIC_REG_BASE + 0x1526)
#define MT6335_LDO_VCAMD2_OP_EN                 (MT6335_PMIC_REG_BASE + 0x1528)
#define MT6335_LDO_VCAMD2_OP_EN_SET             (MT6335_PMIC_REG_BASE + 0x152A)
#define MT6335_LDO_VCAMD2_OP_EN_CLR             (MT6335_PMIC_REG_BASE + 0x152C)
#define MT6335_LDO_VCAMD2_OP_CFG                (MT6335_PMIC_REG_BASE + 0x152E)
#define MT6335_LDO_VCAMD2_OP_CFG_SET            (MT6335_PMIC_REG_BASE + 0x1530)
#define MT6335_LDO_VCAMD2_OP_CFG_CLR            (MT6335_PMIC_REG_BASE + 0x1532)
#define MT6335_LDO_VCAMD2_CON1                  (MT6335_PMIC_REG_BASE + 0x1534)
#define MT6335_LDO_VCAMD2_CON2                  (MT6335_PMIC_REG_BASE + 0x1536)
#define MT6335_LDO_VCAMD2_CON3                  (MT6335_PMIC_REG_BASE + 0x1538)
#define MT6335_LDO_VCAMIO_CON0                  (MT6335_PMIC_REG_BASE + 0x153A)
#define MT6335_LDO_VCAMIO_OP_EN                 (MT6335_PMIC_REG_BASE + 0x153C)
#define MT6335_LDO_VCAMIO_OP_EN_SET             (MT6335_PMIC_REG_BASE + 0x153E)
#define MT6335_LDO_VCAMIO_OP_EN_CLR             (MT6335_PMIC_REG_BASE + 0x1540)
#define MT6335_LDO_VCAMIO_OP_CFG                (MT6335_PMIC_REG_BASE + 0x1542)
#define MT6335_LDO_VCAMIO_OP_CFG_SET            (MT6335_PMIC_REG_BASE + 0x1544)
#define MT6335_LDO_VCAMIO_OP_CFG_CLR            (MT6335_PMIC_REG_BASE + 0x1546)
#define MT6335_LDO_VCAMIO_CON1                  (MT6335_PMIC_REG_BASE + 0x1548)
#define MT6335_LDO_VCAMIO_CON2                  (MT6335_PMIC_REG_BASE + 0x154A)
#define MT6335_LDO_VCAMIO_CON3                  (MT6335_PMIC_REG_BASE + 0x154C)
#define MT6335_LDO_VMIPI_CON0                   (MT6335_PMIC_REG_BASE + 0x154E)
#define MT6335_LDO_VMIPI_OP_EN                  (MT6335_PMIC_REG_BASE + 0x1550)
#define MT6335_LDO_VMIPI_OP_EN_SET              (MT6335_PMIC_REG_BASE + 0x1552)
#define MT6335_LDO_VMIPI_OP_EN_CLR              (MT6335_PMIC_REG_BASE + 0x1554)
#define MT6335_LDO_VMIPI_OP_CFG                 (MT6335_PMIC_REG_BASE + 0x1556)
#define MT6335_LDO_VMIPI_OP_CFG_SET             (MT6335_PMIC_REG_BASE + 0x1558)
#define MT6335_LDO_VMIPI_OP_CFG_CLR             (MT6335_PMIC_REG_BASE + 0x155A)
#define MT6335_LDO_VMIPI_CON1                   (MT6335_PMIC_REG_BASE + 0x155C)
#define MT6335_LDO_VMIPI_CON2                   (MT6335_PMIC_REG_BASE + 0x155E)
#define MT6335_LDO_VMIPI_CON3                   (MT6335_PMIC_REG_BASE + 0x1560)
#define MT6335_LDO_VGP3_CON0                    (MT6335_PMIC_REG_BASE + 0x1562)
#define MT6335_LDO_VGP3_OP_EN                   (MT6335_PMIC_REG_BASE + 0x1564)
#define MT6335_LDO_VGP3_OP_EN_SET               (MT6335_PMIC_REG_BASE + 0x1566)
#define MT6335_LDO_VGP3_OP_EN_CLR               (MT6335_PMIC_REG_BASE + 0x1568)
#define MT6335_LDO_VGP3_OP_CFG                  (MT6335_PMIC_REG_BASE + 0x156A)
#define MT6335_LDO_VGP3_OP_CFG_SET              (MT6335_PMIC_REG_BASE + 0x156C)
#define MT6335_LDO_VGP3_OP_CFG_CLR              (MT6335_PMIC_REG_BASE + 0x156E)
#define MT6335_LDO_VGP3_CON1                    (MT6335_PMIC_REG_BASE + 0x1570)
#define MT6335_LDO_VGP3_CON2                    (MT6335_PMIC_REG_BASE + 0x1572)
#define MT6335_LDO_VGP3_CON3                    (MT6335_PMIC_REG_BASE + 0x1574)
#define MT6335_LDO_VCN33_CON0_BT                (MT6335_PMIC_REG_BASE + 0x1576)
#define MT6335_LDO_VCN33_OP_EN_BT               (MT6335_PMIC_REG_BASE + 0x1578)
#define MT6335_LDO_VCN33_OP_EN_BT_SET           (MT6335_PMIC_REG_BASE + 0x157A)
#define MT6335_LDO_VCN33_OP_EN_BT_CLR           (MT6335_PMIC_REG_BASE + 0x157C)
#define MT6335_LDO_VCN33_OP_CFG_BT              (MT6335_PMIC_REG_BASE + 0x157E)
#define MT6335_LDO_VCN33_OP_CFG_BT_SET          (MT6335_PMIC_REG_BASE + 0x1580)
#define MT6335_LDO_VCN33_OP_CFG_BT_CLR          (MT6335_PMIC_REG_BASE + 0x1582)
#define MT6335_LDO_VCN33_CON0_WIFI              (MT6335_PMIC_REG_BASE + 0x1584)
#define MT6335_LDO_VCN33_OP_EN_WIFI             (MT6335_PMIC_REG_BASE + 0x1586)
#define MT6335_LDO_VCN33_OP_EN_WIFI_SET         (MT6335_PMIC_REG_BASE + 0x1588)
#define MT6335_LDO_VCN33_OP_EN_WIFI_CLR         (MT6335_PMIC_REG_BASE + 0x158A)
#define MT6335_LDO_VCN33_OP_CFG_WIFI            (MT6335_PMIC_REG_BASE + 0x158C)
#define MT6335_LDO_VCN33_OP_CFG_WIFI_SET        (MT6335_PMIC_REG_BASE + 0x158E)
#define MT6335_LDO_VCN33_OP_CFG_WIFI_CLR        (MT6335_PMIC_REG_BASE + 0x1590)
#define MT6335_LDO_VCN33_CON1                   (MT6335_PMIC_REG_BASE + 0x1592)
#define MT6335_LDO_VCN33_CON2                   (MT6335_PMIC_REG_BASE + 0x1594)
#define MT6335_LDO_VCN33_CON3                   (MT6335_PMIC_REG_BASE + 0x1596)
#define MT6335_LDO_VCN18_CON0_BT                (MT6335_PMIC_REG_BASE + 0x1598)
#define MT6335_LDO_VCN18_OP_EN_BT               (MT6335_PMIC_REG_BASE + 0x159A)
#define MT6335_LDO_VCN18_OP_EN_BT_SET           (MT6335_PMIC_REG_BASE + 0x159C)
#define MT6335_LDO_VCN18_OP_EN_BT_CLR           (MT6335_PMIC_REG_BASE + 0x159E)
#define MT6335_LDO_VCN18_OP_CFG_BT              (MT6335_PMIC_REG_BASE + 0x15A0)
#define MT6335_LDO_VCN18_OP_CFG_BT_SET          (MT6335_PMIC_REG_BASE + 0x15A2)
#define MT6335_LDO_VCN18_OP_CFG_BT_CLR          (MT6335_PMIC_REG_BASE + 0x15A4)
#define MT6335_LDO_VCN18_CON0_WIFI              (MT6335_PMIC_REG_BASE + 0x15A6)
#define MT6335_LDO_VCN18_OP_EN_WIFI             (MT6335_PMIC_REG_BASE + 0x15A8)
#define MT6335_LDO_VCN18_OP_EN_WIFI_SET         (MT6335_PMIC_REG_BASE + 0x15AA)
#define MT6335_LDO_VCN18_OP_EN_WIFI_CLR         (MT6335_PMIC_REG_BASE + 0x15AC)
#define MT6335_LDO_VCN18_OP_CFG_WIFI            (MT6335_PMIC_REG_BASE + 0x15AE)
#define MT6335_LDO_VCN18_OP_CFG_WIFI_SET        (MT6335_PMIC_REG_BASE + 0x15B0)
#define MT6335_LDO_VCN18_OP_CFG_WIFI_CLR        (MT6335_PMIC_REG_BASE + 0x15B2)
#define MT6335_LDO_VCN18_CON1                   (MT6335_PMIC_REG_BASE + 0x15B4)
#define MT6335_LDO_VCN18_CON2                   (MT6335_PMIC_REG_BASE + 0x15B6)
#define MT6335_LDO_VCN18_CON3                   (MT6335_PMIC_REG_BASE + 0x15B8)
#define MT6335_LDO_VCN28_CON0                   (MT6335_PMIC_REG_BASE + 0x15BA)
#define MT6335_LDO_VCN28_OP_EN                  (MT6335_PMIC_REG_BASE + 0x15BC)
#define MT6335_LDO_VCN28_OP_EN_SET              (MT6335_PMIC_REG_BASE + 0x15BE)
#define MT6335_LDO_VCN28_OP_EN_CLR              (MT6335_PMIC_REG_BASE + 0x15C0)
#define MT6335_LDO_VCN28_OP_CFG                 (MT6335_PMIC_REG_BASE + 0x15C2)
#define MT6335_LDO_VCN28_OP_CFG_SET             (MT6335_PMIC_REG_BASE + 0x15C4)
#define MT6335_LDO_VCN28_OP_CFG_CLR             (MT6335_PMIC_REG_BASE + 0x15C6)
#define MT6335_LDO_VCN28_CON1                   (MT6335_PMIC_REG_BASE + 0x15C8)
#define MT6335_LDO_VCN28_CON2                   (MT6335_PMIC_REG_BASE + 0x15CA)
#define MT6335_LDO_VIBR_CON0                    (MT6335_PMIC_REG_BASE + 0x15CC)
#define MT6335_LDO_VIBR_OP_EN                   (MT6335_PMIC_REG_BASE + 0x15CE)
#define MT6335_LDO_VIBR_OP_EN_SET               (MT6335_PMIC_REG_BASE + 0x15D0)
#define MT6335_LDO_VIBR_OP_EN_CLR               (MT6335_PMIC_REG_BASE + 0x15D2)
#define MT6335_LDO_VIBR_OP_CFG                  (MT6335_PMIC_REG_BASE + 0x15D4)
#define MT6335_LDO_VIBR_OP_CFG_SET              (MT6335_PMIC_REG_BASE + 0x15D6)
#define MT6335_LDO_VIBR_OP_CFG_CLR              (MT6335_PMIC_REG_BASE + 0x15D8)
#define MT6335_LDO_VIBR_CON1                    (MT6335_PMIC_REG_BASE + 0x15DA)
#define MT6335_LDO_VIBR_CON2                    (MT6335_PMIC_REG_BASE + 0x15DC)
#define MT6335_LDO_VBIF28_CON0                  (MT6335_PMIC_REG_BASE + 0x15DE)
#define MT6335_LDO_VBIF28_OP_EN                 (MT6335_PMIC_REG_BASE + 0x15E0)
#define MT6335_LDO_VBIF28_OP_EN_SET             (MT6335_PMIC_REG_BASE + 0x15E2)
#define MT6335_LDO_VBIF28_OP_EN_CLR             (MT6335_PMIC_REG_BASE + 0x15E4)
#define MT6335_LDO_VBIF28_OP_CFG                (MT6335_PMIC_REG_BASE + 0x15E6)
#define MT6335_LDO_VBIF28_OP_CFG_SET            (MT6335_PMIC_REG_BASE + 0x15E8)
#define MT6335_LDO_VBIF28_OP_CFG_CLR            (MT6335_PMIC_REG_BASE + 0x15EA)
#define MT6335_LDO_VBIF28_CON1                  (MT6335_PMIC_REG_BASE + 0x15EC)
#define MT6335_LDO_VBIF28_CON2                  (MT6335_PMIC_REG_BASE + 0x15EE)
#define MT6335_LDO_VFE28_CON0                   (MT6335_PMIC_REG_BASE + 0x1600)
#define MT6335_LDO_VFE28_OP_EN                  (MT6335_PMIC_REG_BASE + 0x1602)
#define MT6335_LDO_VFE28_OP_EN_SET              (MT6335_PMIC_REG_BASE + 0x1604)
#define MT6335_LDO_VFE28_OP_EN_CLR              (MT6335_PMIC_REG_BASE + 0x1606)
#define MT6335_LDO_VFE28_OP_CFG                 (MT6335_PMIC_REG_BASE + 0x1608)
#define MT6335_LDO_VFE28_OP_CFG_SET             (MT6335_PMIC_REG_BASE + 0x160A)
#define MT6335_LDO_VFE28_OP_CFG_CLR             (MT6335_PMIC_REG_BASE + 0x160C)
#define MT6335_LDO_VFE28_CON1                   (MT6335_PMIC_REG_BASE + 0x160E)
#define MT6335_LDO_VFE28_CON2                   (MT6335_PMIC_REG_BASE + 0x1610)
#define MT6335_LDO_VMCH_CON0                    (MT6335_PMIC_REG_BASE + 0x1612)
#define MT6335_LDO_VMCH_OP_EN                   (MT6335_PMIC_REG_BASE + 0x1614)
#define MT6335_LDO_VMCH_OP_EN_SET               (MT6335_PMIC_REG_BASE + 0x1616)
#define MT6335_LDO_VMCH_OP_EN_CLR               (MT6335_PMIC_REG_BASE + 0x1618)
#define MT6335_LDO_VMCH_OP_CFG                  (MT6335_PMIC_REG_BASE + 0x161A)
#define MT6335_LDO_VMCH_OP_CFG_SET              (MT6335_PMIC_REG_BASE + 0x161C)
#define MT6335_LDO_VMCH_OP_CFG_CLR              (MT6335_PMIC_REG_BASE + 0x161E)
#define MT6335_LDO_VMCH_CON1                    (MT6335_PMIC_REG_BASE + 0x1620)
#define MT6335_LDO_VMCH_CON2                    (MT6335_PMIC_REG_BASE + 0x1622)
#define MT6335_LDO_VMCH_CON3                    (MT6335_PMIC_REG_BASE + 0x1624)
#define MT6335_LDO_VMC_CON0                     (MT6335_PMIC_REG_BASE + 0x1626)
#define MT6335_LDO_VMC_OP_EN                    (MT6335_PMIC_REG_BASE + 0x1628)
#define MT6335_LDO_VMC_OP_EN_SET                (MT6335_PMIC_REG_BASE + 0x162A)
#define MT6335_LDO_VMC_OP_EN_CLR                (MT6335_PMIC_REG_BASE + 0x162C)
#define MT6335_LDO_VMC_OP_CFG                   (MT6335_PMIC_REG_BASE + 0x162E)
#define MT6335_LDO_VMC_OP_CFG_SET               (MT6335_PMIC_REG_BASE + 0x1630)
#define MT6335_LDO_VMC_OP_CFG_CLR               (MT6335_PMIC_REG_BASE + 0x1632)
#define MT6335_LDO_VMC_CON1                     (MT6335_PMIC_REG_BASE + 0x1634)
#define MT6335_LDO_VMC_CON2                     (MT6335_PMIC_REG_BASE + 0x1636)
#define MT6335_LDO_VMC_CON3                     (MT6335_PMIC_REG_BASE + 0x1638)
#define MT6335_LDO_VRF18_1_CON0                 (MT6335_PMIC_REG_BASE + 0x163A)
#define MT6335_LDO_VRF18_1_OP_EN                (MT6335_PMIC_REG_BASE + 0x163C)
#define MT6335_LDO_VRF18_1_OP_EN_SET            (MT6335_PMIC_REG_BASE + 0x163E)
#define MT6335_LDO_VRF18_1_OP_EN_CLR            (MT6335_PMIC_REG_BASE + 0x1640)
#define MT6335_LDO_VRF18_1_OP_CFG               (MT6335_PMIC_REG_BASE + 0x1642)
#define MT6335_LDO_VRF18_1_OP_CFG_SET           (MT6335_PMIC_REG_BASE + 0x1644)
#define MT6335_LDO_VRF18_1_OP_CFG_CLR           (MT6335_PMIC_REG_BASE + 0x1646)
#define MT6335_LDO_VRF18_1_CON1                 (MT6335_PMIC_REG_BASE + 0x1648)
#define MT6335_LDO_VRF18_1_CON2                 (MT6335_PMIC_REG_BASE + 0x164A)
#define MT6335_LDO_VRF18_1_CON3                 (MT6335_PMIC_REG_BASE + 0x164C)
#define MT6335_LDO_VRF18_2_CON0                 (MT6335_PMIC_REG_BASE + 0x164E)
#define MT6335_LDO_VRF18_2_OP_EN                (MT6335_PMIC_REG_BASE + 0x1650)
#define MT6335_LDO_VRF18_2_OP_EN_SET            (MT6335_PMIC_REG_BASE + 0x1652)
#define MT6335_LDO_VRF18_2_OP_EN_CLR            (MT6335_PMIC_REG_BASE + 0x1654)
#define MT6335_LDO_VRF18_2_OP_CFG               (MT6335_PMIC_REG_BASE + 0x1656)
#define MT6335_LDO_VRF18_2_OP_CFG_SET           (MT6335_PMIC_REG_BASE + 0x1658)
#define MT6335_LDO_VRF18_2_OP_CFG_CLR           (MT6335_PMIC_REG_BASE + 0x165A)
#define MT6335_LDO_VRF18_2_CON1                 (MT6335_PMIC_REG_BASE + 0x165C)
#define MT6335_LDO_VRF18_2_CON2                 (MT6335_PMIC_REG_BASE + 0x165E)
#define MT6335_LDO_VRF18_2_CON3                 (MT6335_PMIC_REG_BASE + 0x1660)
#define MT6335_LDO_VRF12_CON0                   (MT6335_PMIC_REG_BASE + 0x1662)
#define MT6335_LDO_VRF12_OP_EN                  (MT6335_PMIC_REG_BASE + 0x1664)
#define MT6335_LDO_VRF12_OP_EN_SET              (MT6335_PMIC_REG_BASE + 0x1666)
#define MT6335_LDO_VRF12_OP_EN_CLR              (MT6335_PMIC_REG_BASE + 0x1668)
#define MT6335_LDO_VRF12_OP_CFG                 (MT6335_PMIC_REG_BASE + 0x166A)
#define MT6335_LDO_VRF12_OP_CFG_SET             (MT6335_PMIC_REG_BASE + 0x166C)
#define MT6335_LDO_VRF12_OP_CFG_CLR             (MT6335_PMIC_REG_BASE + 0x166E)
#define MT6335_LDO_VRF12_CON1                   (MT6335_PMIC_REG_BASE + 0x1670)
#define MT6335_LDO_VRF12_CON2                   (MT6335_PMIC_REG_BASE + 0x1672)
#define MT6335_LDO_VRF12_CON3                   (MT6335_PMIC_REG_BASE + 0x1674)
#define MT6335_LDO_VCAMA1_CON0                  (MT6335_PMIC_REG_BASE + 0x1676)
#define MT6335_LDO_VCAMA1_OP_EN                 (MT6335_PMIC_REG_BASE + 0x1678)
#define MT6335_LDO_VCAMA1_OP_CFG                (MT6335_PMIC_REG_BASE + 0x167A)
#define MT6335_LDO_VCAMA1_CON1                  (MT6335_PMIC_REG_BASE + 0x167C)
#define MT6335_LDO_VCAMA1_CON2                  (MT6335_PMIC_REG_BASE + 0x167E)
#define MT6335_LDO_VCAMA2_CON0                  (MT6335_PMIC_REG_BASE + 0x1680)
#define MT6335_LDO_VCAMA2_OP_EN                 (MT6335_PMIC_REG_BASE + 0x1682)
#define MT6335_LDO_VCAMA2_OP_CFG                (MT6335_PMIC_REG_BASE + 0x1684)
#define MT6335_LDO_VCAMA2_CON1                  (MT6335_PMIC_REG_BASE + 0x1686)
#define MT6335_LDO_VCAMA2_CON2                  (MT6335_PMIC_REG_BASE + 0x1688)
#define MT6335_LDO_K_CON0                       (MT6335_PMIC_REG_BASE + 0x168A)
#define MT6335_LDO_K_CON1                       (MT6335_PMIC_REG_BASE + 0x168C)
#define MT6335_LDO_K_CON2                       (MT6335_PMIC_REG_BASE + 0x168E)
#define MT6335_LDO_OCFB0                        (MT6335_PMIC_REG_BASE + 0x1690)
#define MT6335_VRTC_CON0                        (MT6335_PMIC_REG_BASE + 0x1692)
#define MT6335_LDO_RSV_CON0                     (MT6335_PMIC_REG_BASE + 0x1694)
#define MT6335_LDO_RSV_CON1                     (MT6335_PMIC_REG_BASE + 0x1696)
#define MT6335_LDO_VSRAM_DVFS1_CON0             (MT6335_PMIC_REG_BASE + 0x1698)
#define MT6335_LDO_VSRAM_DVFS1_CON1             (MT6335_PMIC_REG_BASE + 0x169A)
#define MT6335_LDO_VSRAM_DVFS1_CON2             (MT6335_PMIC_REG_BASE + 0x169C)
#define MT6335_LDO_VSRAM_DVFS1_CFG0             (MT6335_PMIC_REG_BASE + 0x169E)
#define MT6335_LDO_VSRAM_DVFS1_CFG1             (MT6335_PMIC_REG_BASE + 0x16A0)
#define MT6335_LDO_VSRAM_DVFS1_OP_EN            (MT6335_PMIC_REG_BASE + 0x16A2)
#define MT6335_LDO_VSRAM_DVFS1_OP_EN_SET        (MT6335_PMIC_REG_BASE + 0x16A4)
#define MT6335_LDO_VSRAM_DVFS1_OP_EN_CLR        (MT6335_PMIC_REG_BASE + 0x16A6)
#define MT6335_LDO_VSRAM_DVFS1_OP_CFG           (MT6335_PMIC_REG_BASE + 0x16A8)
#define MT6335_LDO_VSRAM_DVFS1_OP_CFG_SET       (MT6335_PMIC_REG_BASE + 0x16AA)
#define MT6335_LDO_VSRAM_DVFS1_OP_CFG_CLR       (MT6335_PMIC_REG_BASE + 0x16AC)
#define MT6335_LDO_VSRAM_DVFS1_CON3             (MT6335_PMIC_REG_BASE + 0x16AE)
#define MT6335_LDO_VSRAM_DVFS1_CON4             (MT6335_PMIC_REG_BASE + 0x16B0)
#define MT6335_LDO_VSRAM_DVFS1_CON5             (MT6335_PMIC_REG_BASE + 0x16B2)
#define MT6335_LDO_VSRAM_DVFS1_DBG0             (MT6335_PMIC_REG_BASE + 0x16B4)
#define MT6335_LDO_VSRAM_DVFS1_DBG1             (MT6335_PMIC_REG_BASE + 0x16B6)
#define MT6335_LDO_VSRAM_DVFS2_CON0             (MT6335_PMIC_REG_BASE + 0x16B8)
#define MT6335_LDO_VSRAM_DVFS2_CON1             (MT6335_PMIC_REG_BASE + 0x16BA)
#define MT6335_LDO_VSRAM_DVFS2_CON2             (MT6335_PMIC_REG_BASE + 0x16BC)
#define MT6335_LDO_VSRAM_DVFS2_CFG0             (MT6335_PMIC_REG_BASE + 0x16BE)
#define MT6335_LDO_VSRAM_DVFS2_CFG1             (MT6335_PMIC_REG_BASE + 0x16C0)
#define MT6335_LDO_VSRAM_DVFS2_OP_EN            (MT6335_PMIC_REG_BASE + 0x16C2)
#define MT6335_LDO_VSRAM_DVFS2_OP_EN_SET        (MT6335_PMIC_REG_BASE + 0x16C4)
#define MT6335_LDO_VSRAM_DVFS2_OP_EN_CLR        (MT6335_PMIC_REG_BASE + 0x16C6)
#define MT6335_LDO_VSRAM_DVFS2_OP_CFG           (MT6335_PMIC_REG_BASE + 0x16C8)
#define MT6335_LDO_VSRAM_DVFS2_OP_CFG_SET       (MT6335_PMIC_REG_BASE + 0x16CA)
#define MT6335_LDO_VSRAM_DVFS2_OP_CFG_CLR       (MT6335_PMIC_REG_BASE + 0x16CC)
#define MT6335_LDO_VSRAM_DVFS2_CON3             (MT6335_PMIC_REG_BASE + 0x16CE)
#define MT6335_LDO_VSRAM_DVFS2_CON4             (MT6335_PMIC_REG_BASE + 0x16D0)
#define MT6335_LDO_VSRAM_DVFS2_CON5             (MT6335_PMIC_REG_BASE + 0x16D2)
#define MT6335_LDO_VSRAM_DVFS2_DBG0             (MT6335_PMIC_REG_BASE + 0x16D4)
#define MT6335_LDO_VSRAM_DVFS2_DBG1             (MT6335_PMIC_REG_BASE + 0x16D6)
#define MT6335_LDO_VSRAM_VCORE_CON0             (MT6335_PMIC_REG_BASE + 0x16D8)
#define MT6335_LDO_VSRAM_VCORE_CON1             (MT6335_PMIC_REG_BASE + 0x16DA)
#define MT6335_LDO_VSRAM_VCORE_CON2             (MT6335_PMIC_REG_BASE + 0x16DC)
#define MT6335_LDO_VSRAM_VCORE_CFG0             (MT6335_PMIC_REG_BASE + 0x16DE)
#define MT6335_LDO_VSRAM_VCORE_CFG1             (MT6335_PMIC_REG_BASE + 0x16E0)
#define MT6335_LDO_VSRAM_VCORE_OP_EN            (MT6335_PMIC_REG_BASE + 0x16E2)
#define MT6335_LDO_VSRAM_VCORE_OP_EN_SET        (MT6335_PMIC_REG_BASE + 0x16E4)
#define MT6335_LDO_VSRAM_VCORE_OP_EN_CLR        (MT6335_PMIC_REG_BASE + 0x16E6)
#define MT6335_LDO_VSRAM_VCORE_OP_CFG           (MT6335_PMIC_REG_BASE + 0x16E8)
#define MT6335_LDO_VSRAM_VCORE_OP_CFG_SET       (MT6335_PMIC_REG_BASE + 0x16EA)
#define MT6335_LDO_VSRAM_VCORE_OP_CFG_CLR       (MT6335_PMIC_REG_BASE + 0x16EC)
#define MT6335_LDO_VSRAM_VCORE_CON3             (MT6335_PMIC_REG_BASE + 0x16EE)
#define MT6335_LDO_VSRAM_VCORE_CON4             (MT6335_PMIC_REG_BASE + 0x16F0)
#define MT6335_LDO_VSRAM_VCORE_CON5             (MT6335_PMIC_REG_BASE + 0x16F2)
#define MT6335_LDO_VSRAM_VCORE_DBG0             (MT6335_PMIC_REG_BASE + 0x16F4)
#define MT6335_LDO_VSRAM_VCORE_DBG1             (MT6335_PMIC_REG_BASE + 0x16F6)
#define MT6335_LDO_VSRAM_VGPU_CON0              (MT6335_PMIC_REG_BASE + 0x16F8)
#define MT6335_LDO_VSRAM_VGPU_CON1              (MT6335_PMIC_REG_BASE + 0x16FA)
#define MT6335_LDO_VSRAM_VGPU_CON2              (MT6335_PMIC_REG_BASE + 0x16FC)
#define MT6335_LDO_VSRAM_VGPU_CFG0              (MT6335_PMIC_REG_BASE + 0x16FE)
#define MT6335_LDO_VSRAM_VGPU_CFG1              (MT6335_PMIC_REG_BASE + 0x1700)
#define MT6335_LDO_VSRAM_VGPU_OP_EN             (MT6335_PMIC_REG_BASE + 0x1702)
#define MT6335_LDO_VSRAM_VGPU_OP_EN_SET         (MT6335_PMIC_REG_BASE + 0x1704)
#define MT6335_LDO_VSRAM_VGPU_OP_EN_CLR         (MT6335_PMIC_REG_BASE + 0x1706)
#define MT6335_LDO_VSRAM_VGPU_OP_CFG            (MT6335_PMIC_REG_BASE + 0x1708)
#define MT6335_LDO_VSRAM_VGPU_OP_CFG_SET        (MT6335_PMIC_REG_BASE + 0x170A)
#define MT6335_LDO_VSRAM_VGPU_OP_CFG_CLR        (MT6335_PMIC_REG_BASE + 0x170C)
#define MT6335_LDO_VSRAM_VGPU_CON3              (MT6335_PMIC_REG_BASE + 0x170E)
#define MT6335_LDO_VSRAM_VGPU_CON4              (MT6335_PMIC_REG_BASE + 0x1710)
#define MT6335_LDO_VSRAM_VGPU_CON5              (MT6335_PMIC_REG_BASE + 0x1712)
#define MT6335_LDO_VSRAM_VGPU_DBG0              (MT6335_PMIC_REG_BASE + 0x1714)
#define MT6335_LDO_VSRAM_VGPU_DBG1              (MT6335_PMIC_REG_BASE + 0x1716)
#define MT6335_LDO_VSRAM_VMD_CON0               (MT6335_PMIC_REG_BASE + 0x1718)
#define MT6335_LDO_VSRAM_VMD_CON1               (MT6335_PMIC_REG_BASE + 0x171A)
#define MT6335_LDO_VSRAM_VMD_CON2               (MT6335_PMIC_REG_BASE + 0x171C)
#define MT6335_LDO_VSRAM_VMD_CFG0               (MT6335_PMIC_REG_BASE + 0x171E)
#define MT6335_LDO_VSRAM_VMD_CFG1               (MT6335_PMIC_REG_BASE + 0x1720)
#define MT6335_LDO_VSRAM_VMD_OP_EN              (MT6335_PMIC_REG_BASE + 0x1722)
#define MT6335_LDO_VSRAM_VMD_OP_EN_SET          (MT6335_PMIC_REG_BASE + 0x1724)
#define MT6335_LDO_VSRAM_VMD_OP_EN_CLR          (MT6335_PMIC_REG_BASE + 0x1726)
#define MT6335_LDO_VSRAM_VMD_OP_CFG             (MT6335_PMIC_REG_BASE + 0x1728)
#define MT6335_LDO_VSRAM_VMD_OP_CFG_SET         (MT6335_PMIC_REG_BASE + 0x172A)
#define MT6335_LDO_VSRAM_VMD_OP_CFG_CLR         (MT6335_PMIC_REG_BASE + 0x172C)
#define MT6335_LDO_VSRAM_VMD_CON3               (MT6335_PMIC_REG_BASE + 0x172E)
#define MT6335_LDO_VSRAM_VMD_CON4               (MT6335_PMIC_REG_BASE + 0x1730)
#define MT6335_LDO_VSRAM_VMD_CON5               (MT6335_PMIC_REG_BASE + 0x1732)
#define MT6335_LDO_VSRAM_VMD_DBG0               (MT6335_PMIC_REG_BASE + 0x1734)
#define MT6335_LDO_VSRAM_VMD_DBG1               (MT6335_PMIC_REG_BASE + 0x1736)
#define MT6335_LDO_TRACKING_CON0                (MT6335_PMIC_REG_BASE + 0x1738)
#define MT6335_LDO_TRACKING_CON1                (MT6335_PMIC_REG_BASE + 0x173A)
#define MT6335_LDO_TRACKING_CON2                (MT6335_PMIC_REG_BASE + 0x173C)
#define MT6335_LDO_TRACKING_CON3                (MT6335_PMIC_REG_BASE + 0x173E)
#define MT6335_LDO_DCM                          (MT6335_PMIC_REG_BASE + 0x1740)
#define MT6335_LDO_VIO28_CG0                    (MT6335_PMIC_REG_BASE + 0x1742)
#define MT6335_LDO_VIO18_CG0                    (MT6335_PMIC_REG_BASE + 0x1744)
#define MT6335_LDO_VUFS18_CG0                   (MT6335_PMIC_REG_BASE + 0x1746)
#define MT6335_LDO_VA10_CG0                     (MT6335_PMIC_REG_BASE + 0x1748)
#define MT6335_LDO_VA12_CG0                     (MT6335_PMIC_REG_BASE + 0x174A)
#define MT6335_LDO_VSRAM_DVFS1_CG0              (MT6335_PMIC_REG_BASE + 0x174C)
#define MT6335_LDO_VSRAM_DVFS2_CG0              (MT6335_PMIC_REG_BASE + 0x174E)
#define MT6335_LDO_VSRAM_VCORE_CG0              (MT6335_PMIC_REG_BASE + 0x1750)
#define MT6335_LDO_VSRAM_VGPU_CG0               (MT6335_PMIC_REG_BASE + 0x1752)
#define MT6335_LDO_VSRAM_VMD_CG0                (MT6335_PMIC_REG_BASE + 0x1754)
#define MT6335_LDO_VA18_CG0                     (MT6335_PMIC_REG_BASE + 0x1756)
#define MT6335_LDO_VUSB33_CG0                   (MT6335_PMIC_REG_BASE + 0x1758)
#define MT6335_LDO_VEMC_CG0                     (MT6335_PMIC_REG_BASE + 0x175A)
#define MT6335_LDO_VXO22_CG0                    (MT6335_PMIC_REG_BASE + 0x175C)
#define MT6335_LDO_VEFUSE_CG0                   (MT6335_PMIC_REG_BASE + 0x175E)
#define MT6335_LDO_VSIM1_CG0                    (MT6335_PMIC_REG_BASE + 0x1760)
#define MT6335_LDO_VSIM2_CG0                    (MT6335_PMIC_REG_BASE + 0x1762)
#define MT6335_LDO_VCAMAF_CG0                   (MT6335_PMIC_REG_BASE + 0x1764)
#define MT6335_LDO_VTOUCH_CG0                   (MT6335_PMIC_REG_BASE + 0x1766)
#define MT6335_LDO_VCAMD1_CG0                   (MT6335_PMIC_REG_BASE + 0x1768)
#define MT6335_LDO_VCAMD2_CG0                   (MT6335_PMIC_REG_BASE + 0x176A)
#define MT6335_LDO_VCAMIO_CG0                   (MT6335_PMIC_REG_BASE + 0x176C)
#define MT6335_LDO_VMIPI_CG0                    (MT6335_PMIC_REG_BASE + 0x176E)
#define MT6335_LDO_VGP3_CG0                     (MT6335_PMIC_REG_BASE + 0x1770)
#define MT6335_LDO_VCN33_CG0                    (MT6335_PMIC_REG_BASE + 0x1772)
#define MT6335_LDO_VCN18_CG0                    (MT6335_PMIC_REG_BASE + 0x1774)
#define MT6335_LDO_VCN28_CG0                    (MT6335_PMIC_REG_BASE + 0x1776)
#define MT6335_LDO_VIBR_CG0                     (MT6335_PMIC_REG_BASE + 0x1778)
#define MT6335_LDO_VBIF28_CG0                   (MT6335_PMIC_REG_BASE + 0x177A)
#define MT6335_LDO_VFE28_CG0                    (MT6335_PMIC_REG_BASE + 0x177C)
#define MT6335_LDO_VMCH_CG0                     (MT6335_PMIC_REG_BASE + 0x177E)
#define MT6335_LDO_VMC_CG0                      (MT6335_PMIC_REG_BASE + 0x1780)
#define MT6335_LDO_VRF18_1_CG0                  (MT6335_PMIC_REG_BASE + 0x1782)
#define MT6335_LDO_VRF18_2_CG0                  (MT6335_PMIC_REG_BASE + 0x1784)
#define MT6335_LDO_VRF12_CG0                    (MT6335_PMIC_REG_BASE + 0x1786)
#define MT6335_LDO_VCAMA1_CG0                   (MT6335_PMIC_REG_BASE + 0x1788)
#define MT6335_LDO_VCAMA2_CG0                   (MT6335_PMIC_REG_BASE + 0x178A)
#define MT6335_LDO_VSRAM_DVFS1_SP               (MT6335_PMIC_REG_BASE + 0x178C)
#define MT6335_LDO_VSRAM_DVFS2_SP               (MT6335_PMIC_REG_BASE + 0x178E)
#define MT6335_LDO_VSRAM_VGPU_SP                (MT6335_PMIC_REG_BASE + 0x1790)
#define MT6335_LDO_VSRAM_VMD_SP                 (MT6335_PMIC_REG_BASE + 0x1792)
#define MT6335_LDO_VSRAM_VCORE_SP               (MT6335_PMIC_REG_BASE + 0x1794)
#define MT6335_LDO_VSRAM_VCORE_SSHUB            (MT6335_PMIC_REG_BASE + 0x1796)
#define MT6335_ALDO_1_ANA_CON0                  (MT6335_PMIC_REG_BASE + 0x1800)
#define MT6335_ALDO_1_ANA_CON1                  (MT6335_PMIC_REG_BASE + 0x1802)
#define MT6335_ALDO_1_ANA_CON2                  (MT6335_PMIC_REG_BASE + 0x1804)
#define MT6335_ALDO_1_ANA_CON3                  (MT6335_PMIC_REG_BASE + 0x1806)
#define MT6335_ALDO_1_ANA_CON4                  (MT6335_PMIC_REG_BASE + 0x1808)
#define MT6335_ALDO_2_ANA_CON0                  (MT6335_PMIC_REG_BASE + 0x180A)
#define MT6335_ALDO_2_ANA_CON1                  (MT6335_PMIC_REG_BASE + 0x180C)
#define MT6335_ALDO_2_ANA_CON2                  (MT6335_PMIC_REG_BASE + 0x180E)
#define MT6335_ALDO_2_ANA_CON3                  (MT6335_PMIC_REG_BASE + 0x1810)
#define MT6335_ALDO_2_ANA_CON4                  (MT6335_PMIC_REG_BASE + 0x1812)
#define MT6335_DLDO_ANA_CON0                    (MT6335_PMIC_REG_BASE + 0x1814)
#define MT6335_DLDO_ANA_CON1                    (MT6335_PMIC_REG_BASE + 0x1816)
#define MT6335_DLDO_ANA_CON2                    (MT6335_PMIC_REG_BASE + 0x1818)
#define MT6335_DLDO_ANA_CON3                    (MT6335_PMIC_REG_BASE + 0x181A)
#define MT6335_DLDO_ANA_CON4                    (MT6335_PMIC_REG_BASE + 0x181C)
#define MT6335_DLDO_ANA_CON5                    (MT6335_PMIC_REG_BASE + 0x181E)
#define MT6335_DLDO_ANA_CON6                    (MT6335_PMIC_REG_BASE + 0x1820)
#define MT6335_DLDO_ANA_CON7                    (MT6335_PMIC_REG_BASE + 0x1822)
#define MT6335_DLDO_ANA_CON8                    (MT6335_PMIC_REG_BASE + 0x1824)
#define MT6335_DLDO_ANA_CON9                    (MT6335_PMIC_REG_BASE + 0x1826)
#define MT6335_DLDO_ANA_CON10                   (MT6335_PMIC_REG_BASE + 0x1828)
#define MT6335_DLDO_ANA_CON11                   (MT6335_PMIC_REG_BASE + 0x182A)
#define MT6335_DLDO_ANA_CON12                   (MT6335_PMIC_REG_BASE + 0x182C)
#define MT6335_DLDO_ANA_CON13                   (MT6335_PMIC_REG_BASE + 0x182E)
#define MT6335_DLDO_ANA_CON14                   (MT6335_PMIC_REG_BASE + 0x1830)
#define MT6335_DLDO_ANA_CON15                   (MT6335_PMIC_REG_BASE + 0x1832)
#define MT6335_DLDO_ANA_CON16                   (MT6335_PMIC_REG_BASE + 0x1834)
#define MT6335_DLDO_ANA_CON17                   (MT6335_PMIC_REG_BASE + 0x1836)
#define MT6335_SLDO14_ANA_CON0                  (MT6335_PMIC_REG_BASE + 0x1838)
#define MT6335_SLDO14_ANA_CON1                  (MT6335_PMIC_REG_BASE + 0x183A)
#define MT6335_SLDO14_ANA_CON2                  (MT6335_PMIC_REG_BASE + 0x183C)
#define MT6335_SLDO14_ANA_CON3                  (MT6335_PMIC_REG_BASE + 0x183E)
#define MT6335_SLDO14_ANA_CON4                  (MT6335_PMIC_REG_BASE + 0x1840)
#define MT6335_SLDO14_ANA_CON5                  (MT6335_PMIC_REG_BASE + 0x1842)
#define MT6335_SLDO14_ANA_CON6                  (MT6335_PMIC_REG_BASE + 0x1844)
#define MT6335_SLDO14_ANA_CON7                  (MT6335_PMIC_REG_BASE + 0x1846)
#define MT6335_SLDO14_ANA_CON8                  (MT6335_PMIC_REG_BASE + 0x1848)
#define MT6335_SLDO14_ANA_CON9                  (MT6335_PMIC_REG_BASE + 0x184A)
#define MT6335_SLDO14_ANA_CON10                 (MT6335_PMIC_REG_BASE + 0x184C)
#define MT6335_SLDO14_ANA_CON11                 (MT6335_PMIC_REG_BASE + 0x184E)
#define MT6335_SLDO14_ANA_CON12                 (MT6335_PMIC_REG_BASE + 0x1850)
#define MT6335_SLDO14_ANA_CON13                 (MT6335_PMIC_REG_BASE + 0x1852)
#define MT6335_SLDO20_ANA_CON0                  (MT6335_PMIC_REG_BASE + 0x1854)
#define MT6335_SLDO20_ANA_CON1                  (MT6335_PMIC_REG_BASE + 0x1856)
#define MT6335_SLDO20_ANA_CON2                  (MT6335_PMIC_REG_BASE + 0x1858)
#define MT6335_SLDO20_ANA_CON3                  (MT6335_PMIC_REG_BASE + 0x185A)
#define MT6335_SLDO20_ANA_CON4                  (MT6335_PMIC_REG_BASE + 0x185C)
#define MT6335_SLDO20_ANA_CON5                  (MT6335_PMIC_REG_BASE + 0x185E)
#define MT6335_SLDO20_ANA_CON6                  (MT6335_PMIC_REG_BASE + 0x1860)
#define MT6335_SLDO20_ANA_CON7                  (MT6335_PMIC_REG_BASE + 0x1862)
#define MT6335_SLDO20_ANA_CON8                  (MT6335_PMIC_REG_BASE + 0x1864)
#define MT6335_SLDO20_ANA_CON9                  (MT6335_PMIC_REG_BASE + 0x1866)
#define MT6335_SLDO20_ANA_CON10                 (MT6335_PMIC_REG_BASE + 0x1868)
#define MT6335_SLDO20_ANA_CON11                 (MT6335_PMIC_REG_BASE + 0x186A)
#define MT6335_SLDO20_ANA_CON12                 (MT6335_PMIC_REG_BASE + 0x186C)
#define MT6335_BIF_CON0                         (MT6335_PMIC_REG_BASE + 0x1A00)
#define MT6335_BIF_CON1                         (MT6335_PMIC_REG_BASE + 0x1A02)
#define MT6335_BIF_CON2                         (MT6335_PMIC_REG_BASE + 0x1A04)
#define MT6335_BIF_CON3                         (MT6335_PMIC_REG_BASE + 0x1A06)
#define MT6335_BIF_CON4                         (MT6335_PMIC_REG_BASE + 0x1A08)
#define MT6335_BIF_CON5                         (MT6335_PMIC_REG_BASE + 0x1A0A)
#define MT6335_BIF_CON6                         (MT6335_PMIC_REG_BASE + 0x1A0C)
#define MT6335_BIF_CON7                         (MT6335_PMIC_REG_BASE + 0x1A0E)
#define MT6335_BIF_CON8                         (MT6335_PMIC_REG_BASE + 0x1A10)
#define MT6335_BIF_CON9                         (MT6335_PMIC_REG_BASE + 0x1A12)
#define MT6335_BIF_CON10                        (MT6335_PMIC_REG_BASE + 0x1A14)
#define MT6335_BIF_CON11                        (MT6335_PMIC_REG_BASE + 0x1A16)
#define MT6335_BIF_CON12                        (MT6335_PMIC_REG_BASE + 0x1A18)
#define MT6335_BIF_CON13                        (MT6335_PMIC_REG_BASE + 0x1A1A)
#define MT6335_BIF_CON14                        (MT6335_PMIC_REG_BASE + 0x1A1C)
#define MT6335_BIF_CON15                        (MT6335_PMIC_REG_BASE + 0x1A1E)
#define MT6335_BIF_CON16                        (MT6335_PMIC_REG_BASE + 0x1A20)
#define MT6335_BIF_CON17                        (MT6335_PMIC_REG_BASE + 0x1A22)
#define MT6335_BIF_CON18                        (MT6335_PMIC_REG_BASE + 0x1A24)
#define MT6335_BIF_CON19                        (MT6335_PMIC_REG_BASE + 0x1A26)
#define MT6335_BIF_CON20                        (MT6335_PMIC_REG_BASE + 0x1A28)
#define MT6335_BIF_CON21                        (MT6335_PMIC_REG_BASE + 0x1A2A)
#define MT6335_BIF_CON22                        (MT6335_PMIC_REG_BASE + 0x1A2C)
#define MT6335_BIF_CON23                        (MT6335_PMIC_REG_BASE + 0x1A2E)
#define MT6335_BIF_CON24                        (MT6335_PMIC_REG_BASE + 0x1A30)
#define MT6335_BIF_CON25                        (MT6335_PMIC_REG_BASE + 0x1A32)
#define MT6335_BIF_CON26                        (MT6335_PMIC_REG_BASE + 0x1A34)
#define MT6335_BIF_CON27                        (MT6335_PMIC_REG_BASE + 0x1A36)
#define MT6335_BIF_CON28                        (MT6335_PMIC_REG_BASE + 0x1A38)
#define MT6335_BIF_CON29                        (MT6335_PMIC_REG_BASE + 0x1A3A)
#define MT6335_BIF_CON30                        (MT6335_PMIC_REG_BASE + 0x1A3C)
#define MT6335_BIF_CON31                        (MT6335_PMIC_REG_BASE + 0x1A3E)
#define MT6335_BIF_CON32                        (MT6335_PMIC_REG_BASE + 0x1A40)
#define MT6335_BIF_CON33                        (MT6335_PMIC_REG_BASE + 0x1A42)
#define MT6335_BIF_CON34                        (MT6335_PMIC_REG_BASE + 0x1A44)
#define MT6335_BIF_CON35                        (MT6335_PMIC_REG_BASE + 0x1A46)
#define MT6335_BIF_CON36                        (MT6335_PMIC_REG_BASE + 0x1A48)
#define MT6335_BIF_CON37                        (MT6335_PMIC_REG_BASE + 0x1A4A)
#define MT6335_BIF_CON38                        (MT6335_PMIC_REG_BASE + 0x1A4C)
#define MT6335_BIF_CON39                        (MT6335_PMIC_REG_BASE + 0x1A4E)
#define MT6335_BIF_BAT_CON0                     (MT6335_PMIC_REG_BASE + 0x1A50)
#define MT6335_BIF_BAT_CON1                     (MT6335_PMIC_REG_BASE + 0x1A52)
#define MT6335_BIF_BAT_CON2                     (MT6335_PMIC_REG_BASE + 0x1A54)
#define MT6335_BIF_BAT_CON3                     (MT6335_PMIC_REG_BASE + 0x1A56)
#define MT6335_BIF_ANA_CON0                     (MT6335_PMIC_REG_BASE + 0x1A58)
#define MT6335_OTP_CON0                         (MT6335_PMIC_REG_BASE + 0x1C00)
#define MT6335_OTP_CON1                         (MT6335_PMIC_REG_BASE + 0x1C02)
#define MT6335_OTP_CON2                         (MT6335_PMIC_REG_BASE + 0x1C04)
#define MT6335_OTP_CON3                         (MT6335_PMIC_REG_BASE + 0x1C06)
#define MT6335_OTP_CON4                         (MT6335_PMIC_REG_BASE + 0x1C08)
#define MT6335_OTP_CON5                         (MT6335_PMIC_REG_BASE + 0x1C0A)
#define MT6335_OTP_CON6                         (MT6335_PMIC_REG_BASE + 0x1C0C)
#define MT6335_OTP_CON7                         (MT6335_PMIC_REG_BASE + 0x1C0E)
#define MT6335_OTP_CON8                         (MT6335_PMIC_REG_BASE + 0x1C10)
#define MT6335_OTP_CON9                         (MT6335_PMIC_REG_BASE + 0x1C12)
#define MT6335_OTP_CON10                        (MT6335_PMIC_REG_BASE + 0x1C14)
#define MT6335_OTP_CON11                        (MT6335_PMIC_REG_BASE + 0x1C16)
#define MT6335_OTP_CON12                        (MT6335_PMIC_REG_BASE + 0x1C18)
#define MT6335_OTP_CON13                        (MT6335_PMIC_REG_BASE + 0x1C1A)
#define MT6335_OTP_CON14                        (MT6335_PMIC_REG_BASE + 0x1C1C)
#define MT6335_OTP_DOUT_0_15                    (MT6335_PMIC_REG_BASE + 0x1C1E)
#define MT6335_OTP_DOUT_16_31                   (MT6335_PMIC_REG_BASE + 0x1C20)
#define MT6335_OTP_DOUT_32_47                   (MT6335_PMIC_REG_BASE + 0x1C22)
#define MT6335_OTP_DOUT_48_63                   (MT6335_PMIC_REG_BASE + 0x1C24)
#define MT6335_OTP_DOUT_64_79                   (MT6335_PMIC_REG_BASE + 0x1C26)
#define MT6335_OTP_DOUT_80_95                   (MT6335_PMIC_REG_BASE + 0x1C28)
#define MT6335_OTP_DOUT_96_111                  (MT6335_PMIC_REG_BASE + 0x1C2A)
#define MT6335_OTP_DOUT_112_127                 (MT6335_PMIC_REG_BASE + 0x1C2C)
#define MT6335_OTP_DOUT_128_143                 (MT6335_PMIC_REG_BASE + 0x1C2E)
#define MT6335_OTP_DOUT_144_159                 (MT6335_PMIC_REG_BASE + 0x1C30)
#define MT6335_OTP_DOUT_160_175                 (MT6335_PMIC_REG_BASE + 0x1C32)
#define MT6335_OTP_DOUT_176_191                 (MT6335_PMIC_REG_BASE + 0x1C34)
#define MT6335_OTP_DOUT_192_207                 (MT6335_PMIC_REG_BASE + 0x1C36)
#define MT6335_OTP_DOUT_208_223                 (MT6335_PMIC_REG_BASE + 0x1C38)
#define MT6335_OTP_DOUT_224_239                 (MT6335_PMIC_REG_BASE + 0x1C3A)
#define MT6335_OTP_DOUT_240_255                 (MT6335_PMIC_REG_BASE + 0x1C3C)
#define MT6335_OTP_DOUT_256_271                 (MT6335_PMIC_REG_BASE + 0x1C3E)
#define MT6335_OTP_DOUT_272_287                 (MT6335_PMIC_REG_BASE + 0x1C40)
#define MT6335_OTP_DOUT_288_303                 (MT6335_PMIC_REG_BASE + 0x1C42)
#define MT6335_OTP_DOUT_304_319                 (MT6335_PMIC_REG_BASE + 0x1C44)
#define MT6335_OTP_DOUT_320_335                 (MT6335_PMIC_REG_BASE + 0x1C46)
#define MT6335_OTP_DOUT_336_351                 (MT6335_PMIC_REG_BASE + 0x1C48)
#define MT6335_OTP_DOUT_352_367                 (MT6335_PMIC_REG_BASE + 0x1C4A)
#define MT6335_OTP_DOUT_368_383                 (MT6335_PMIC_REG_BASE + 0x1C4C)
#define MT6335_OTP_DOUT_384_399                 (MT6335_PMIC_REG_BASE + 0x1C4E)
#define MT6335_OTP_DOUT_400_415                 (MT6335_PMIC_REG_BASE + 0x1C50)
#define MT6335_OTP_DOUT_416_431                 (MT6335_PMIC_REG_BASE + 0x1C52)
#define MT6335_OTP_DOUT_432_447                 (MT6335_PMIC_REG_BASE + 0x1C54)
#define MT6335_OTP_DOUT_448_463                 (MT6335_PMIC_REG_BASE + 0x1C56)
#define MT6335_OTP_DOUT_464_479                 (MT6335_PMIC_REG_BASE + 0x1C58)
#define MT6335_OTP_DOUT_480_495                 (MT6335_PMIC_REG_BASE + 0x1C5A)
#define MT6335_OTP_DOUT_496_511                 (MT6335_PMIC_REG_BASE + 0x1C5C)
#define MT6335_OTP_DOUT_512_527                 (MT6335_PMIC_REG_BASE + 0x1C5E)
#define MT6335_OTP_DOUT_528_543                 (MT6335_PMIC_REG_BASE + 0x1C60)
#define MT6335_OTP_DOUT_544_559                 (MT6335_PMIC_REG_BASE + 0x1C62)
#define MT6335_OTP_DOUT_560_575                 (MT6335_PMIC_REG_BASE + 0x1C64)
#define MT6335_OTP_DOUT_576_591                 (MT6335_PMIC_REG_BASE + 0x1C66)
#define MT6335_OTP_DOUT_592_607                 (MT6335_PMIC_REG_BASE + 0x1C68)
#define MT6335_OTP_DOUT_608_623                 (MT6335_PMIC_REG_BASE + 0x1C6A)
#define MT6335_OTP_DOUT_624_639                 (MT6335_PMIC_REG_BASE + 0x1C6C)
#define MT6335_OTP_DOUT_640_655                 (MT6335_PMIC_REG_BASE + 0x1C6E)
#define MT6335_OTP_DOUT_656_671                 (MT6335_PMIC_REG_BASE + 0x1C70)
#define MT6335_OTP_DOUT_672_687                 (MT6335_PMIC_REG_BASE + 0x1C72)
#define MT6335_OTP_DOUT_688_703                 (MT6335_PMIC_REG_BASE + 0x1C74)
#define MT6335_OTP_DOUT_704_719                 (MT6335_PMIC_REG_BASE + 0x1C76)
#define MT6335_OTP_DOUT_720_735                 (MT6335_PMIC_REG_BASE + 0x1C78)
#define MT6335_OTP_DOUT_736_751                 (MT6335_PMIC_REG_BASE + 0x1C7A)
#define MT6335_OTP_DOUT_752_767                 (MT6335_PMIC_REG_BASE + 0x1C7C)
#define MT6335_OTP_DOUT_768_783                 (MT6335_PMIC_REG_BASE + 0x1C7E)
#define MT6335_OTP_DOUT_784_799                 (MT6335_PMIC_REG_BASE + 0x1C80)
#define MT6335_OTP_DOUT_800_815                 (MT6335_PMIC_REG_BASE + 0x1C82)
#define MT6335_OTP_DOUT_816_831                 (MT6335_PMIC_REG_BASE + 0x1C84)
#define MT6335_OTP_DOUT_832_847                 (MT6335_PMIC_REG_BASE + 0x1C86)
#define MT6335_OTP_DOUT_848_863                 (MT6335_PMIC_REG_BASE + 0x1C88)
#define MT6335_OTP_DOUT_864_879                 (MT6335_PMIC_REG_BASE + 0x1C8A)
#define MT6335_OTP_DOUT_880_895                 (MT6335_PMIC_REG_BASE + 0x1C8C)
#define MT6335_OTP_DOUT_896_911                 (MT6335_PMIC_REG_BASE + 0x1C8E)
#define MT6335_OTP_DOUT_912_927                 (MT6335_PMIC_REG_BASE + 0x1C90)
#define MT6335_OTP_DOUT_928_943                 (MT6335_PMIC_REG_BASE + 0x1C92)
#define MT6335_OTP_DOUT_944_959                 (MT6335_PMIC_REG_BASE + 0x1C94)
#define MT6335_OTP_DOUT_960_975                 (MT6335_PMIC_REG_BASE + 0x1C96)
#define MT6335_OTP_DOUT_976_991                 (MT6335_PMIC_REG_BASE + 0x1C98)
#define MT6335_OTP_DOUT_992_1007                (MT6335_PMIC_REG_BASE + 0x1C9A)
#define MT6335_OTP_DOUT_1008_1023               (MT6335_PMIC_REG_BASE + 0x1C9C)
#define MT6335_OTP_VAL_0_15                     (MT6335_PMIC_REG_BASE + 0x1C9E)
#define MT6335_OTP_VAL_16_31                    (MT6335_PMIC_REG_BASE + 0x1CA0)
#define MT6335_OTP_VAL_32_47                    (MT6335_PMIC_REG_BASE + 0x1CA2)
#define MT6335_OTP_VAL_48_63                    (MT6335_PMIC_REG_BASE + 0x1CA4)
#define MT6335_OTP_VAL_64_79                    (MT6335_PMIC_REG_BASE + 0x1CA6)
#define MT6335_OTP_VAL_80_95                    (MT6335_PMIC_REG_BASE + 0x1CA8)
#define MT6335_OTP_VAL_96_111                   (MT6335_PMIC_REG_BASE + 0x1CAA)
#define MT6335_OTP_VAL_112_127                  (MT6335_PMIC_REG_BASE + 0x1CAC)
#define MT6335_OTP_VAL_128_143                  (MT6335_PMIC_REG_BASE + 0x1CAE)
#define MT6335_OTP_VAL_144_159                  (MT6335_PMIC_REG_BASE + 0x1CB0)
#define MT6335_OTP_VAL_160_175                  (MT6335_PMIC_REG_BASE + 0x1CB2)
#define MT6335_OTP_VAL_176_191                  (MT6335_PMIC_REG_BASE + 0x1CB4)
#define MT6335_OTP_VAL_192_207                  (MT6335_PMIC_REG_BASE + 0x1CB6)
#define MT6335_OTP_VAL_208_223                  (MT6335_PMIC_REG_BASE + 0x1CB8)
#define MT6335_OTP_VAL_224_239                  (MT6335_PMIC_REG_BASE + 0x1CBA)
#define MT6335_OTP_VAL_240_255                  (MT6335_PMIC_REG_BASE + 0x1CBC)
#define MT6335_OTP_VAL_256_271                  (MT6335_PMIC_REG_BASE + 0x1CBE)
#define MT6335_OTP_VAL_272_287                  (MT6335_PMIC_REG_BASE + 0x1CC0)
#define MT6335_OTP_VAL_288_303                  (MT6335_PMIC_REG_BASE + 0x1CC2)
#define MT6335_OTP_VAL_304_319                  (MT6335_PMIC_REG_BASE + 0x1CC4)
#define MT6335_OTP_VAL_320_335                  (MT6335_PMIC_REG_BASE + 0x1CC6)
#define MT6335_OTP_VAL_336_351                  (MT6335_PMIC_REG_BASE + 0x1CC8)
#define MT6335_OTP_VAL_352_367                  (MT6335_PMIC_REG_BASE + 0x1CCA)
#define MT6335_OTP_VAL_368_383                  (MT6335_PMIC_REG_BASE + 0x1CCC)
#define MT6335_OTP_VAL_384_399                  (MT6335_PMIC_REG_BASE + 0x1CCE)
#define MT6335_OTP_VAL_400_415                  (MT6335_PMIC_REG_BASE + 0x1CD0)
#define MT6335_OTP_VAL_416_431                  (MT6335_PMIC_REG_BASE + 0x1CD2)
#define MT6335_OTP_VAL_432_447                  (MT6335_PMIC_REG_BASE + 0x1CD4)
#define MT6335_OTP_VAL_448_463                  (MT6335_PMIC_REG_BASE + 0x1CD6)
#define MT6335_OTP_VAL_464_479                  (MT6335_PMIC_REG_BASE + 0x1CD8)
#define MT6335_OTP_VAL_480_495                  (MT6335_PMIC_REG_BASE + 0x1CDA)
#define MT6335_OTP_VAL_496_511                  (MT6335_PMIC_REG_BASE + 0x1CDC)
#define MT6335_OTP_VAL_512_527                  (MT6335_PMIC_REG_BASE + 0x1CDE)
#define MT6335_OTP_VAL_528_543                  (MT6335_PMIC_REG_BASE + 0x1CE0)
#define MT6335_OTP_VAL_544_559                  (MT6335_PMIC_REG_BASE + 0x1CE2)
#define MT6335_OTP_VAL_560_575                  (MT6335_PMIC_REG_BASE + 0x1CE4)
#define MT6335_OTP_VAL_576_591                  (MT6335_PMIC_REG_BASE + 0x1CE6)
#define MT6335_OTP_VAL_592_607                  (MT6335_PMIC_REG_BASE + 0x1CE8)
#define MT6335_OTP_VAL_608_623                  (MT6335_PMIC_REG_BASE + 0x1CEA)
#define MT6335_OTP_VAL_624_639                  (MT6335_PMIC_REG_BASE + 0x1CEC)
#define MT6335_OTP_VAL_640_655                  (MT6335_PMIC_REG_BASE + 0x1CEE)
#define MT6335_OTP_VAL_656_671                  (MT6335_PMIC_REG_BASE + 0x1CF0)
#define MT6335_OTP_VAL_672_687                  (MT6335_PMIC_REG_BASE + 0x1CF2)
#define MT6335_OTP_VAL_688_703                  (MT6335_PMIC_REG_BASE + 0x1CF4)
#define MT6335_OTP_VAL_704_719                  (MT6335_PMIC_REG_BASE + 0x1CF6)
#define MT6335_OTP_VAL_720_735                  (MT6335_PMIC_REG_BASE + 0x1CF8)
#define MT6335_OTP_VAL_736_751                  (MT6335_PMIC_REG_BASE + 0x1CFA)
#define MT6335_OTP_VAL_752_767                  (MT6335_PMIC_REG_BASE + 0x1CFC)
#define MT6335_OTP_VAL_768_783                  (MT6335_PMIC_REG_BASE + 0x1CFE)
#define MT6335_OTP_VAL_784_799                  (MT6335_PMIC_REG_BASE + 0x1D00)
#define MT6335_OTP_VAL_800_815                  (MT6335_PMIC_REG_BASE + 0x1D02)
#define MT6335_OTP_VAL_816_831                  (MT6335_PMIC_REG_BASE + 0x1D04)
#define MT6335_OTP_VAL_832_847                  (MT6335_PMIC_REG_BASE + 0x1D06)
#define MT6335_OTP_VAL_848_863                  (MT6335_PMIC_REG_BASE + 0x1D08)
#define MT6335_OTP_VAL_864_879                  (MT6335_PMIC_REG_BASE + 0x1D0A)
#define MT6335_OTP_VAL_880_895                  (MT6335_PMIC_REG_BASE + 0x1D0C)
#define MT6335_OTP_VAL_896_911                  (MT6335_PMIC_REG_BASE + 0x1D0E)
#define MT6335_OTP_VAL_912_927                  (MT6335_PMIC_REG_BASE + 0x1D10)
#define MT6335_OTP_VAL_928_943                  (MT6335_PMIC_REG_BASE + 0x1D12)
#define MT6335_OTP_VAL_944_959                  (MT6335_PMIC_REG_BASE + 0x1D14)
#define MT6335_OTP_VAL_960_975                  (MT6335_PMIC_REG_BASE + 0x1D16)
#define MT6335_OTP_VAL_976_991                  (MT6335_PMIC_REG_BASE + 0x1D18)
#define MT6335_OTP_VAL_992_1007                 (MT6335_PMIC_REG_BASE + 0x1D1A)
#define MT6335_OTP_VAL_1008_1023                (MT6335_PMIC_REG_BASE + 0x1D1C)
#define MT6335_RTC_MIX_CON0                     (MT6335_PMIC_REG_BASE + 0x1E00)
#define MT6335_RTC_MIX_CON1                     (MT6335_PMIC_REG_BASE + 0x1E02)
#define MT6335_RTC_MIX_CON2                     (MT6335_PMIC_REG_BASE + 0x1E04)
#define MT6335_FGADC_CON0                       (MT6335_PMIC_REG_BASE + 0x2000)
#define MT6335_FGADC_CON1                       (MT6335_PMIC_REG_BASE + 0x2002)
#define MT6335_FGADC_CON2                       (MT6335_PMIC_REG_BASE + 0x2004)
#define MT6335_FGADC_CON3                       (MT6335_PMIC_REG_BASE + 0x2006)
#define MT6335_FGADC_CON4                       (MT6335_PMIC_REG_BASE + 0x2008)
#define MT6335_FGADC_RST_CON0                   (MT6335_PMIC_REG_BASE + 0x200A)
#define MT6335_FGADC_R_CON0                     (MT6335_PMIC_REG_BASE + 0x200C)
#define MT6335_FGADC_CUR_CON0                   (MT6335_PMIC_REG_BASE + 0x200E)
#define MT6335_FGADC_CUR_CON1                   (MT6335_PMIC_REG_BASE + 0x2010)
#define MT6335_FGADC_CUR_CON2                   (MT6335_PMIC_REG_BASE + 0x2012)
#define MT6335_FGADC_CUR_CON3                   (MT6335_PMIC_REG_BASE + 0x2014)
#define MT6335_FGADC_CAR_CON0                   (MT6335_PMIC_REG_BASE + 0x2016)
#define MT6335_FGADC_CAR_CON1                   (MT6335_PMIC_REG_BASE + 0x2018)
#define MT6335_FGADC_CAR_CON2                   (MT6335_PMIC_REG_BASE + 0x201A)
#define MT6335_FGADC_CAR_CON3                   (MT6335_PMIC_REG_BASE + 0x201C)
#define MT6335_FGADC_CAR_CON4                   (MT6335_PMIC_REG_BASE + 0x201E)
#define MT6335_FGADC_CAR_CON5                   (MT6335_PMIC_REG_BASE + 0x2020)
#define MT6335_FGADC_CAR_CON6                   (MT6335_PMIC_REG_BASE + 0x2022)
#define MT6335_FGADC_CAR_CON7                   (MT6335_PMIC_REG_BASE + 0x2024)
#define MT6335_FGADC_CAR_CON8                   (MT6335_PMIC_REG_BASE + 0x2026)
#define MT6335_FGADC_CAR_CON9                   (MT6335_PMIC_REG_BASE + 0x2028)
#define MT6335_FGADC_NCAR_CON0                  (MT6335_PMIC_REG_BASE + 0x202A)
#define MT6335_FGADC_NCAR_CON1                  (MT6335_PMIC_REG_BASE + 0x202C)
#define MT6335_FGADC_NCAR_CON2                  (MT6335_PMIC_REG_BASE + 0x202E)
#define MT6335_FGADC_NCAR_CON3                  (MT6335_PMIC_REG_BASE + 0x2030)
#define MT6335_FGADC_IAVG_CON0                  (MT6335_PMIC_REG_BASE + 0x2032)
#define MT6335_FGADC_IAVG_CON1                  (MT6335_PMIC_REG_BASE + 0x2034)
#define MT6335_FGADC_IAVG_CON2                  (MT6335_PMIC_REG_BASE + 0x2036)
#define MT6335_FGADC_IAVG_CON3                  (MT6335_PMIC_REG_BASE + 0x2038)
#define MT6335_FGADC_IAVG_CON4                  (MT6335_PMIC_REG_BASE + 0x203A)
#define MT6335_FGADC_IAVG_CON5                  (MT6335_PMIC_REG_BASE + 0x203C)
#define MT6335_FGADC_NTER_CON0                  (MT6335_PMIC_REG_BASE + 0x203E)
#define MT6335_FGADC_NTER_CON1                  (MT6335_PMIC_REG_BASE + 0x2040)
#define MT6335_FGADC_NTER_CON2                  (MT6335_PMIC_REG_BASE + 0x2042)
#define MT6335_FGADC_NTER_CON3                  (MT6335_PMIC_REG_BASE + 0x2044)
#define MT6335_FGADC_OFFSET_CON0                (MT6335_PMIC_REG_BASE + 0x2046)
#define MT6335_FGADC_OFFSET_CON1                (MT6335_PMIC_REG_BASE + 0x2048)
#define MT6335_FGADC_GAIN_CON0                  (MT6335_PMIC_REG_BASE + 0x204A)
#define MT6335_FGADC_SON_CON0                   (MT6335_PMIC_REG_BASE + 0x204C)
#define MT6335_FGADC_SON_CON1                   (MT6335_PMIC_REG_BASE + 0x204E)
#define MT6335_FGADC_SON_CON2                   (MT6335_PMIC_REG_BASE + 0x2050)
#define MT6335_FGADC_SON_CON3                   (MT6335_PMIC_REG_BASE + 0x2052)
#define MT6335_FGADC_SOFF_CON0                  (MT6335_PMIC_REG_BASE + 0x2054)
#define MT6335_FGADC_SOFF_CON1                  (MT6335_PMIC_REG_BASE + 0x2056)
#define MT6335_FGADC_SOFF_CON2                  (MT6335_PMIC_REG_BASE + 0x2058)
#define MT6335_FGADC_SOFF_CON3                  (MT6335_PMIC_REG_BASE + 0x205A)
#define MT6335_FGADC_SOFF_CON4                  (MT6335_PMIC_REG_BASE + 0x205C)
#define MT6335_FGADC_PWR_CON0                   (MT6335_PMIC_REG_BASE + 0x205E)
#define MT6335_FGADC_PWR_CON1                   (MT6335_PMIC_REG_BASE + 0x2060)
#define MT6335_FGADC_ZCV_CON0                   (MT6335_PMIC_REG_BASE + 0x2062)
#define MT6335_FGADC_ZCV_CON1                   (MT6335_PMIC_REG_BASE + 0x2064)
#define MT6335_FGADC_ZCV_CON2                   (MT6335_PMIC_REG_BASE + 0x2066)
#define MT6335_FGADC_ZCV_CON3                   (MT6335_PMIC_REG_BASE + 0x2068)
#define MT6335_FGADC_ZCV_CON4                   (MT6335_PMIC_REG_BASE + 0x206A)
#define MT6335_FGADC_ZCV_CON5                   (MT6335_PMIC_REG_BASE + 0x206C)
#define MT6335_FGADC_ANA_CON0                   (MT6335_PMIC_REG_BASE + 0x206E)
#define MT6335_FGADC_ANA_CON1                   (MT6335_PMIC_REG_BASE + 0x2070)
#define MT6335_FGADC_TEST_CON0                  (MT6335_PMIC_REG_BASE + 0x2072)
#define MT6335_FGADC_RSV_CON0                   (MT6335_PMIC_REG_BASE + 0x2074)
#define MT6335_FGADC_RSV_CON1                   (MT6335_PMIC_REG_BASE + 0x2076)
#define MT6335_FGADC_RSV_CON2                   (MT6335_PMIC_REG_BASE + 0x2078)
#define MT6335_FGADC_RSV_CON3                   (MT6335_PMIC_REG_BASE + 0x207A)
#define MT6335_SYSTEM_INFO_CON0                 (MT6335_PMIC_REG_BASE + 0x207C)
#define MT6335_SYSTEM_INFO_CON1                 (MT6335_PMIC_REG_BASE + 0x207E)
#define MT6335_SYSTEM_INFO_CON2                 (MT6335_PMIC_REG_BASE + 0x2080)
#define MT6335_SYSTEM_INFO_CON3                 (MT6335_PMIC_REG_BASE + 0x2082)
#define MT6335_SYSTEM_INFO_CON4                 (MT6335_PMIC_REG_BASE + 0x2084)
#define MT6335_FGADC_EFUSE_CON0                 (MT6335_PMIC_REG_BASE + 0x2086)
#define MT6335_DCXO_CW00                        (MT6335_PMIC_REG_BASE + 0x2200)
#define MT6335_DCXO_CW00_SET                    (MT6335_PMIC_REG_BASE + 0x2202)
#define MT6335_DCXO_CW00_CLR                    (MT6335_PMIC_REG_BASE + 0x2204)
#define MT6335_DCXO_CW01                        (MT6335_PMIC_REG_BASE + 0x2206)
#define MT6335_DCXO_CW02                        (MT6335_PMIC_REG_BASE + 0x2208)
#define MT6335_DCXO_CW03                        (MT6335_PMIC_REG_BASE + 0x220A)
#define MT6335_DCXO_CW04                        (MT6335_PMIC_REG_BASE + 0x220C)
#define MT6335_DCXO_CW05                        (MT6335_PMIC_REG_BASE + 0x220E)
#define MT6335_DCXO_CW06                        (MT6335_PMIC_REG_BASE + 0x2210)
#define MT6335_DCXO_CW07                        (MT6335_PMIC_REG_BASE + 0x2212)
#define MT6335_DCXO_CW08                        (MT6335_PMIC_REG_BASE + 0x2214)
#define MT6335_DCXO_CW09                        (MT6335_PMIC_REG_BASE + 0x2216)
#define MT6335_DCXO_CW10                        (MT6335_PMIC_REG_BASE + 0x2218)
#define MT6335_DCXO_CW11                        (MT6335_PMIC_REG_BASE + 0x221A)
#define MT6335_DCXO_CW11_SET                    (MT6335_PMIC_REG_BASE + 0x221C)
#define MT6335_DCXO_CW11_CLR                    (MT6335_PMIC_REG_BASE + 0x221E)
#define MT6335_DCXO_CW12                        (MT6335_PMIC_REG_BASE + 0x2220)
#define MT6335_DCXO_CW13                        (MT6335_PMIC_REG_BASE + 0x2222)
#define MT6335_DCXO_CW14                        (MT6335_PMIC_REG_BASE + 0x2224)
#define MT6335_DCXO_CW15                        (MT6335_PMIC_REG_BASE + 0x2226)
#define MT6335_DCXO_CW16                        (MT6335_PMIC_REG_BASE + 0x2228)
#define MT6335_DCXO_CW17                        (MT6335_PMIC_REG_BASE + 0x222A)
#define MT6335_DCXO_CW18                        (MT6335_PMIC_REG_BASE + 0x222C)
#define MT6335_DCXO_CW19                        (MT6335_PMIC_REG_BASE + 0x222E)
#define MT6335_AUXADC_ADC0                      (MT6335_PMIC_REG_BASE + 0x2400)
#define MT6335_AUXADC_ADC1                      (MT6335_PMIC_REG_BASE + 0x2402)
#define MT6335_AUXADC_ADC2                      (MT6335_PMIC_REG_BASE + 0x2404)
#define MT6335_AUXADC_ADC3                      (MT6335_PMIC_REG_BASE + 0x2406)
#define MT6335_AUXADC_ADC4                      (MT6335_PMIC_REG_BASE + 0x2408)
#define MT6335_AUXADC_ADC5                      (MT6335_PMIC_REG_BASE + 0x240A)
#define MT6335_AUXADC_ADC6                      (MT6335_PMIC_REG_BASE + 0x240C)
#define MT6335_AUXADC_ADC7                      (MT6335_PMIC_REG_BASE + 0x240E)
#define MT6335_AUXADC_ADC8                      (MT6335_PMIC_REG_BASE + 0x2410)
#define MT6335_AUXADC_ADC9                      (MT6335_PMIC_REG_BASE + 0x2412)
#define MT6335_AUXADC_ADC10                     (MT6335_PMIC_REG_BASE + 0x2414)
#define MT6335_AUXADC_ADC11                     (MT6335_PMIC_REG_BASE + 0x2416)
#define MT6335_AUXADC_ADC12                     (MT6335_PMIC_REG_BASE + 0x2418)
#define MT6335_AUXADC_ADC13                     (MT6335_PMIC_REG_BASE + 0x241A)
#define MT6335_AUXADC_ADC14                     (MT6335_PMIC_REG_BASE + 0x241C)
#define MT6335_AUXADC_ADC15                     (MT6335_PMIC_REG_BASE + 0x241E)
#define MT6335_AUXADC_ADC16                     (MT6335_PMIC_REG_BASE + 0x2420)
#define MT6335_AUXADC_ADC17                     (MT6335_PMIC_REG_BASE + 0x2422)
#define MT6335_AUXADC_ADC18                     (MT6335_PMIC_REG_BASE + 0x2424)
#define MT6335_AUXADC_ADC19                     (MT6335_PMIC_REG_BASE + 0x2426)
#define MT6335_AUXADC_ADC20                     (MT6335_PMIC_REG_BASE + 0x2428)
#define MT6335_AUXADC_ADC21                     (MT6335_PMIC_REG_BASE + 0x242A)
#define MT6335_AUXADC_ADC22                     (MT6335_PMIC_REG_BASE + 0x242C)
#define MT6335_AUXADC_ADC23                     (MT6335_PMIC_REG_BASE + 0x242E)
#define MT6335_AUXADC_ADC24                     (MT6335_PMIC_REG_BASE + 0x2430)
#define MT6335_AUXADC_ADC25                     (MT6335_PMIC_REG_BASE + 0x2432)
#define MT6335_AUXADC_ADC26                     (MT6335_PMIC_REG_BASE + 0x2434)
#define MT6335_AUXADC_ADC27                     (MT6335_PMIC_REG_BASE + 0x2436)
#define MT6335_AUXADC_ADC28                     (MT6335_PMIC_REG_BASE + 0x2438)
#define MT6335_AUXADC_ADC29                     (MT6335_PMIC_REG_BASE + 0x243A)
#define MT6335_AUXADC_ADC30                     (MT6335_PMIC_REG_BASE + 0x243C)
#define MT6335_AUXADC_ADC31                     (MT6335_PMIC_REG_BASE + 0x243E)
#define MT6335_AUXADC_ADC32                     (MT6335_PMIC_REG_BASE + 0x2440)
#define MT6335_AUXADC_ADC33                     (MT6335_PMIC_REG_BASE + 0x2442)
#define MT6335_AUXADC_ADC34                     (MT6335_PMIC_REG_BASE + 0x2444)
#define MT6335_AUXADC_ADC35                     (MT6335_PMIC_REG_BASE + 0x2446)
#define MT6335_AUXADC_ADC36                     (MT6335_PMIC_REG_BASE + 0x2448)
#define MT6335_AUXADC_ADC37                     (MT6335_PMIC_REG_BASE + 0x244A)
#define MT6335_AUXADC_ADC38                     (MT6335_PMIC_REG_BASE + 0x244C)
#define MT6335_AUXADC_ADC39                     (MT6335_PMIC_REG_BASE + 0x244E)
#define MT6335_AUXADC_ADC40                     (MT6335_PMIC_REG_BASE + 0x2450)
#define MT6335_AUXADC_ADC41                     (MT6335_PMIC_REG_BASE + 0x2452)
#define MT6335_AUXADC_ADC42                     (MT6335_PMIC_REG_BASE + 0x2454)
#define MT6335_AUXADC_BUF0                      (MT6335_PMIC_REG_BASE + 0x2456)
#define MT6335_AUXADC_BUF1                      (MT6335_PMIC_REG_BASE + 0x2458)
#define MT6335_AUXADC_BUF2                      (MT6335_PMIC_REG_BASE + 0x245A)
#define MT6335_AUXADC_BUF3                      (MT6335_PMIC_REG_BASE + 0x245C)
#define MT6335_AUXADC_BUF4                      (MT6335_PMIC_REG_BASE + 0x245E)
#define MT6335_AUXADC_BUF5                      (MT6335_PMIC_REG_BASE + 0x2460)
#define MT6335_AUXADC_BUF6                      (MT6335_PMIC_REG_BASE + 0x2462)
#define MT6335_AUXADC_BUF7                      (MT6335_PMIC_REG_BASE + 0x2464)
#define MT6335_AUXADC_BUF8                      (MT6335_PMIC_REG_BASE + 0x2466)
#define MT6335_AUXADC_BUF9                      (MT6335_PMIC_REG_BASE + 0x2468)
#define MT6335_AUXADC_BUF10                     (MT6335_PMIC_REG_BASE + 0x246A)
#define MT6335_AUXADC_BUF11                     (MT6335_PMIC_REG_BASE + 0x246C)
#define MT6335_AUXADC_BUF12                     (MT6335_PMIC_REG_BASE + 0x246E)
#define MT6335_AUXADC_BUF13                     (MT6335_PMIC_REG_BASE + 0x2470)
#define MT6335_AUXADC_BUF14                     (MT6335_PMIC_REG_BASE + 0x2472)
#define MT6335_AUXADC_BUF15                     (MT6335_PMIC_REG_BASE + 0x2474)
#define MT6335_AUXADC_BUF16                     (MT6335_PMIC_REG_BASE + 0x2476)
#define MT6335_AUXADC_BUF17                     (MT6335_PMIC_REG_BASE + 0x2478)
#define MT6335_AUXADC_BUF18                     (MT6335_PMIC_REG_BASE + 0x247A)
#define MT6335_AUXADC_BUF19                     (MT6335_PMIC_REG_BASE + 0x247C)
#define MT6335_AUXADC_BUF20                     (MT6335_PMIC_REG_BASE + 0x247E)
#define MT6335_AUXADC_BUF21                     (MT6335_PMIC_REG_BASE + 0x2480)
#define MT6335_AUXADC_BUF22                     (MT6335_PMIC_REG_BASE + 0x2482)
#define MT6335_AUXADC_BUF23                     (MT6335_PMIC_REG_BASE + 0x2484)
#define MT6335_AUXADC_BUF24                     (MT6335_PMIC_REG_BASE + 0x2486)
#define MT6335_AUXADC_BUF25                     (MT6335_PMIC_REG_BASE + 0x2488)
#define MT6335_AUXADC_BUF26                     (MT6335_PMIC_REG_BASE + 0x248A)
#define MT6335_AUXADC_BUF27                     (MT6335_PMIC_REG_BASE + 0x248C)
#define MT6335_AUXADC_BUF28                     (MT6335_PMIC_REG_BASE + 0x248E)
#define MT6335_AUXADC_BUF29                     (MT6335_PMIC_REG_BASE + 0x2490)
#define MT6335_AUXADC_BUF30                     (MT6335_PMIC_REG_BASE + 0x2492)
#define MT6335_AUXADC_BUF31                     (MT6335_PMIC_REG_BASE + 0x2494)
#define MT6335_AUXADC_STA0                      (MT6335_PMIC_REG_BASE + 0x2496)
#define MT6335_AUXADC_STA1                      (MT6335_PMIC_REG_BASE + 0x2498)
#define MT6335_AUXADC_STA2                      (MT6335_PMIC_REG_BASE + 0x249A)
#define MT6335_AUXADC_RQST0                     (MT6335_PMIC_REG_BASE + 0x249C)
#define MT6335_AUXADC_RQST0_SET                 (MT6335_PMIC_REG_BASE + 0x249E)
#define MT6335_AUXADC_RQST0_CLR                 (MT6335_PMIC_REG_BASE + 0x24A0)
#define MT6335_AUXADC_RQST1                     (MT6335_PMIC_REG_BASE + 0x24A2)
#define MT6335_AUXADC_RQST1_SET                 (MT6335_PMIC_REG_BASE + 0x24A4)
#define MT6335_AUXADC_RQST1_CLR                 (MT6335_PMIC_REG_BASE + 0x24A6)
#define MT6335_AUXADC_CON0                      (MT6335_PMIC_REG_BASE + 0x24A8)
#define MT6335_AUXADC_CON0_SET                  (MT6335_PMIC_REG_BASE + 0x24AA)
#define MT6335_AUXADC_CON0_CLR                  (MT6335_PMIC_REG_BASE + 0x24AC)
#define MT6335_AUXADC_CON1                      (MT6335_PMIC_REG_BASE + 0x24AE)
#define MT6335_AUXADC_CON2                      (MT6335_PMIC_REG_BASE + 0x24B0)
#define MT6335_AUXADC_CON3                      (MT6335_PMIC_REG_BASE + 0x24B2)
#define MT6335_AUXADC_CON4                      (MT6335_PMIC_REG_BASE + 0x24B4)
#define MT6335_AUXADC_CON5                      (MT6335_PMIC_REG_BASE + 0x24B6)
#define MT6335_AUXADC_CON6                      (MT6335_PMIC_REG_BASE + 0x24B8)
#define MT6335_AUXADC_CON7                      (MT6335_PMIC_REG_BASE + 0x24BA)
#define MT6335_AUXADC_CON8                      (MT6335_PMIC_REG_BASE + 0x24BC)
#define MT6335_AUXADC_CON9                      (MT6335_PMIC_REG_BASE + 0x24BE)
#define MT6335_AUXADC_CON10                     (MT6335_PMIC_REG_BASE + 0x24C0)
#define MT6335_AUXADC_CON11                     (MT6335_PMIC_REG_BASE + 0x24C2)
#define MT6335_AUXADC_CON12                     (MT6335_PMIC_REG_BASE + 0x24C4)
#define MT6335_AUXADC_CON13                     (MT6335_PMIC_REG_BASE + 0x24C6)
#define MT6335_AUXADC_CON14                     (MT6335_PMIC_REG_BASE + 0x24C8)
#define MT6335_AUXADC_CON15                     (MT6335_PMIC_REG_BASE + 0x24CA)
#define MT6335_AUXADC_CON16                     (MT6335_PMIC_REG_BASE + 0x24CC)
#define MT6335_AUXADC_CON17                     (MT6335_PMIC_REG_BASE + 0x24CE)
#define MT6335_AUXADC_CON18                     (MT6335_PMIC_REG_BASE + 0x24D0)
#define MT6335_AUXADC_CON19                     (MT6335_PMIC_REG_BASE + 0x24D2)
#define MT6335_AUXADC_CON20                     (MT6335_PMIC_REG_BASE + 0x24D4)
#define MT6335_AUXADC_CON21                     (MT6335_PMIC_REG_BASE + 0x24D6)
#define MT6335_AUXADC_CON22                     (MT6335_PMIC_REG_BASE + 0x24D8)
#define MT6335_AUXADC_AUTORPT0                  (MT6335_PMIC_REG_BASE + 0x24DA)
#define MT6335_AUXADC_LBAT0                     (MT6335_PMIC_REG_BASE + 0x24DC)
#define MT6335_AUXADC_LBAT1                     (MT6335_PMIC_REG_BASE + 0x24DE)
#define MT6335_AUXADC_LBAT2                     (MT6335_PMIC_REG_BASE + 0x24E0)
#define MT6335_AUXADC_LBAT3                     (MT6335_PMIC_REG_BASE + 0x24E2)
#define MT6335_AUXADC_LBAT4                     (MT6335_PMIC_REG_BASE + 0x24E4)
#define MT6335_AUXADC_LBAT5                     (MT6335_PMIC_REG_BASE + 0x24E6)
#define MT6335_AUXADC_LBAT6                     (MT6335_PMIC_REG_BASE + 0x24E8)
#define MT6335_AUXADC_ACCDET                    (MT6335_PMIC_REG_BASE + 0x24EA)
#define MT6335_AUXADC_THR0                      (MT6335_PMIC_REG_BASE + 0x24EC)
#define MT6335_AUXADC_THR1                      (MT6335_PMIC_REG_BASE + 0x24EE)
#define MT6335_AUXADC_THR2                      (MT6335_PMIC_REG_BASE + 0x24F0)
#define MT6335_AUXADC_THR3                      (MT6335_PMIC_REG_BASE + 0x24F2)
#define MT6335_AUXADC_THR4                      (MT6335_PMIC_REG_BASE + 0x24F4)
#define MT6335_AUXADC_THR5                      (MT6335_PMIC_REG_BASE + 0x24F6)
#define MT6335_AUXADC_THR6                      (MT6335_PMIC_REG_BASE + 0x24F8)
#define MT6335_AUXADC_EFUSE0                    (MT6335_PMIC_REG_BASE + 0x24FA)
#define MT6335_AUXADC_EFUSE1                    (MT6335_PMIC_REG_BASE + 0x24FC)
#define MT6335_AUXADC_EFUSE2                    (MT6335_PMIC_REG_BASE + 0x24FE)
#define MT6335_AUXADC_EFUSE3                    (MT6335_PMIC_REG_BASE + 0x2500)
#define MT6335_AUXADC_EFUSE4                    (MT6335_PMIC_REG_BASE + 0x2502)
#define MT6335_AUXADC_EFUSE5                    (MT6335_PMIC_REG_BASE + 0x2504)
#define MT6335_AUXADC_DBG0                      (MT6335_PMIC_REG_BASE + 0x2506)
#define MT6335_AUXADC_IMP0                      (MT6335_PMIC_REG_BASE + 0x2508)
#define MT6335_AUXADC_IMP1                      (MT6335_PMIC_REG_BASE + 0x250A)
#define MT6335_AUXADC_BAT_TEMP_0                (MT6335_PMIC_REG_BASE + 0x250C)
#define MT6335_AUXADC_BAT_TEMP_1                (MT6335_PMIC_REG_BASE + 0x250E)
#define MT6335_AUXADC_BAT_TEMP_2                (MT6335_PMIC_REG_BASE + 0x2510)
#define MT6335_AUXADC_BAT_TEMP_3                (MT6335_PMIC_REG_BASE + 0x2512)
#define MT6335_AUXADC_BAT_TEMP_4                (MT6335_PMIC_REG_BASE + 0x2514)
#define MT6335_AUXADC_BAT_TEMP_5                (MT6335_PMIC_REG_BASE + 0x2516)
#define MT6335_AUXADC_BAT_TEMP_6                (MT6335_PMIC_REG_BASE + 0x2518)
#define MT6335_AUXADC_BAT_TEMP_7                (MT6335_PMIC_REG_BASE + 0x251A)
#define MT6335_AUXADC_LBAT2_1                   (MT6335_PMIC_REG_BASE + 0x251C)
#define MT6335_AUXADC_LBAT2_2                   (MT6335_PMIC_REG_BASE + 0x251E)
#define MT6335_AUXADC_LBAT2_3                   (MT6335_PMIC_REG_BASE + 0x2520)
#define MT6335_AUXADC_LBAT2_4                   (MT6335_PMIC_REG_BASE + 0x2522)
#define MT6335_AUXADC_LBAT2_5                   (MT6335_PMIC_REG_BASE + 0x2524)
#define MT6335_AUXADC_LBAT2_6                   (MT6335_PMIC_REG_BASE + 0x2526)
#define MT6335_AUXADC_LBAT2_7                   (MT6335_PMIC_REG_BASE + 0x2528)
#define MT6335_AUXADC_MDBG_0                    (MT6335_PMIC_REG_BASE + 0x252A)
#define MT6335_AUXADC_MDBG_1                    (MT6335_PMIC_REG_BASE + 0x252C)
#define MT6335_AUXADC_MDBG_2                    (MT6335_PMIC_REG_BASE + 0x252E)
#define MT6335_AUXADC_MDRT_0                    (MT6335_PMIC_REG_BASE + 0x2530)
#define MT6335_AUXADC_MDRT_1                    (MT6335_PMIC_REG_BASE + 0x2532)
#define MT6335_AUXADC_MDRT_2                    (MT6335_PMIC_REG_BASE + 0x2534)
#define MT6335_AUXADC_MDRT_3                    (MT6335_PMIC_REG_BASE + 0x2536)
#define MT6335_AUXADC_MDRT_4                    (MT6335_PMIC_REG_BASE + 0x2538)
#define MT6335_AUXADC_JEITA_0                   (MT6335_PMIC_REG_BASE + 0x253A)
#define MT6335_AUXADC_JEITA_1                   (MT6335_PMIC_REG_BASE + 0x253C)
#define MT6335_AUXADC_JEITA_2                   (MT6335_PMIC_REG_BASE + 0x253E)
#define MT6335_AUXADC_JEITA_3                   (MT6335_PMIC_REG_BASE + 0x2540)
#define MT6335_AUXADC_JEITA_4                   (MT6335_PMIC_REG_BASE + 0x2542)
#define MT6335_AUXADC_JEITA_5                   (MT6335_PMIC_REG_BASE + 0x2544)
#define MT6335_AUXADC_DCXO_MDRT_0               (MT6335_PMIC_REG_BASE + 0x2546)
#define MT6335_AUXADC_DCXO_MDRT_1               (MT6335_PMIC_REG_BASE + 0x2548)
#define MT6335_AUXADC_DCXO_MDRT_2               (MT6335_PMIC_REG_BASE + 0x254A)
#define MT6335_AUXADC_NAG_0                     (MT6335_PMIC_REG_BASE + 0x254C)
#define MT6335_AUXADC_NAG_1                     (MT6335_PMIC_REG_BASE + 0x254E)
#define MT6335_AUXADC_NAG_2                     (MT6335_PMIC_REG_BASE + 0x2550)
#define MT6335_AUXADC_NAG_3                     (MT6335_PMIC_REG_BASE + 0x2552)
#define MT6335_AUXADC_NAG_4                     (MT6335_PMIC_REG_BASE + 0x2554)
#define MT6335_AUXADC_NAG_5                     (MT6335_PMIC_REG_BASE + 0x2556)
#define MT6335_AUXADC_NAG_6                     (MT6335_PMIC_REG_BASE + 0x2558)
#define MT6335_AUXADC_NAG_7                     (MT6335_PMIC_REG_BASE + 0x255A)
#define MT6335_AUXADC_NAG_8                     (MT6335_PMIC_REG_BASE + 0x255C)
#define MT6335_AUXADC_EFUSE_1                   (MT6335_PMIC_REG_BASE + 0x255E)
#define MT6335_AUXADC_EFUSE_2                   (MT6335_PMIC_REG_BASE + 0x2560)
#define MT6335_AUXADC_EFUSE_3                   (MT6335_PMIC_REG_BASE + 0x2562)
#define MT6335_AUXADC_EFUSE_4                   (MT6335_PMIC_REG_BASE + 0x2564)
#define MT6335_AUXADC_RSV_1                     (MT6335_PMIC_REG_BASE + 0x2566)
#define MT6335_AUXADC_ANA_0                     (MT6335_PMIC_REG_BASE + 0x2568)
#define MT6335_CHR_CON0                         (MT6335_PMIC_REG_BASE + 0x2600)
#define MT6335_CHR_CON1                         (MT6335_PMIC_REG_BASE + 0x2602)
#define MT6335_CHR_CON2                         (MT6335_PMIC_REG_BASE + 0x2604)
#define MT6335_CHR_CON3                         (MT6335_PMIC_REG_BASE + 0x2606)
#define MT6335_CHR_CON4                         (MT6335_PMIC_REG_BASE + 0x2608)
#define MT6335_CHR_CON5                         (MT6335_PMIC_REG_BASE + 0x260A)
#define MT6335_CHR_CON7                         (MT6335_PMIC_REG_BASE + 0x260C)
#define MT6335_CHR_CON10                        (MT6335_PMIC_REG_BASE + 0x260E)
#define MT6335_CHR_CON14                        (MT6335_PMIC_REG_BASE + 0x2610)
#define MT6335_CHR_CON16                        (MT6335_PMIC_REG_BASE + 0x2612)
#define MT6335_CHR_CON17                        (MT6335_PMIC_REG_BASE + 0x2614)
#define MT6335_CHR_CON18                        (MT6335_PMIC_REG_BASE + 0x2616)
#define MT6335_CHR_CON19                        (MT6335_PMIC_REG_BASE + 0x2618)
#define MT6335_BATON_CON0                       (MT6335_PMIC_REG_BASE + 0x261A)
#define MT6335_CHR_CON26                        (MT6335_PMIC_REG_BASE + 0x261C)
#define MT6335_CHR_CON27                        (MT6335_PMIC_REG_BASE + 0x261E)
#define MT6335_CHR_CON29                        (MT6335_PMIC_REG_BASE + 0x2620)
#define MT6335_CHR_CON44                        (MT6335_PMIC_REG_BASE + 0x2622)
#define MT6335_CHR_CON48                        (MT6335_PMIC_REG_BASE + 0x2624)
#define MT6335_EOSC_CALI_CON0                   (MT6335_PMIC_REG_BASE + 0x2800)
#define MT6335_EOSC_CALI_CON1                   (MT6335_PMIC_REG_BASE + 0x2802)
#define MT6335_VRTC_PWM_CON0                    (MT6335_PMIC_REG_BASE + 0x2A00)
#define MT6335_GPIO_DIR0                        (MT6335_PMIC_REG_BASE + 0x2C00)
#define MT6335_GPIO_DIR0_SET                    (MT6335_PMIC_REG_BASE + 0x2C02)
#define MT6335_GPIO_DIR0_CLR                    (MT6335_PMIC_REG_BASE + 0x2C04)
#define MT6335_GPIO_PULLEN0                     (MT6335_PMIC_REG_BASE + 0x2C06)
#define MT6335_GPIO_PULLEN0_SET                 (MT6335_PMIC_REG_BASE + 0x2C08)
#define MT6335_GPIO_PULLEN0_CLR                 (MT6335_PMIC_REG_BASE + 0x2C0A)
#define MT6335_GPIO_PULLSEL0                    (MT6335_PMIC_REG_BASE + 0x2C0C)
#define MT6335_GPIO_PULLSEL0_SET                (MT6335_PMIC_REG_BASE + 0x2C0E)
#define MT6335_GPIO_PULLSEL0_CLR                (MT6335_PMIC_REG_BASE + 0x2C10)
#define MT6335_GPIO_DINV0                       (MT6335_PMIC_REG_BASE + 0x2C12)
#define MT6335_GPIO_DINV0_SET                   (MT6335_PMIC_REG_BASE + 0x2C14)
#define MT6335_GPIO_DINV0_CLR                   (MT6335_PMIC_REG_BASE + 0x2C16)
#define MT6335_GPIO_DOUT0                       (MT6335_PMIC_REG_BASE + 0x2C18)
#define MT6335_GPIO_DOUT0_SET                   (MT6335_PMIC_REG_BASE + 0x2C1A)
#define MT6335_GPIO_DOUT0_CLR                   (MT6335_PMIC_REG_BASE + 0x2C1C)
#define MT6335_GPIO_PI0                         (MT6335_PMIC_REG_BASE + 0x2C1E)
#define MT6335_GPIO_POE0                        (MT6335_PMIC_REG_BASE + 0x2C20)
#define MT6335_GPIO_MODE0                       (MT6335_PMIC_REG_BASE + 0x2C22)
#define MT6335_GPIO_MODE0_SET                   (MT6335_PMIC_REG_BASE + 0x2C24)
#define MT6335_GPIO_MODE0_CLR                   (MT6335_PMIC_REG_BASE + 0x2C26)
#define MT6335_GPIO_MODE1                       (MT6335_PMIC_REG_BASE + 0x2C28)
#define MT6335_GPIO_MODE1_SET                   (MT6335_PMIC_REG_BASE + 0x2C2A)
#define MT6335_GPIO_MODE1_CLR                   (MT6335_PMIC_REG_BASE + 0x2C2C)
#define MT6335_GPIO_RSV                         (MT6335_PMIC_REG_BASE + 0x2C2E)
// mask is HEX;  shift is Integer
#define MT6335_RG_THR_DET_DIS_MASK                       0x1
#define MT6335_RG_THR_DET_DIS_SHIFT                      12
#define MT6335_RG_THR_TEST_MASK                          0x3
#define MT6335_RG_THR_TEST_SHIFT                         13
#define MT6335_RG_STRUP_THER_DEB_RMAX_MASK               0xFFFF
#define MT6335_RG_STRUP_THER_DEB_RMAX_SHIFT              0
#define MT6335_RG_STRUP_THER_DEB_FMAX_MASK               0xFFFF
#define MT6335_RG_STRUP_THER_DEB_FMAX_SHIFT              0
#define MT6335_DDUVLO_DEB_EN_MASK                        0x1
#define MT6335_DDUVLO_DEB_EN_SHIFT                       0
#define MT6335_RG_STRUP_OSC_EN_MASK                      0x1
#define MT6335_RG_STRUP_OSC_EN_SHIFT                     2
#define MT6335_RG_STRUP_OSC_EN_SEL_MASK                  0x1
#define MT6335_RG_STRUP_OSC_EN_SEL_SHIFT                 3
#define MT6335_RG_STRUP_FT_CTRL_MASK                     0x3
#define MT6335_RG_STRUP_FT_CTRL_SHIFT                    4
#define MT6335_RG_STRUP_PWRON_FORCE_MASK                 0x1
#define MT6335_RG_STRUP_PWRON_FORCE_SHIFT                6
#define MT6335_RG_BIASGEN_FORCE_MASK                     0x1
#define MT6335_RG_BIASGEN_FORCE_SHIFT                    7
#define MT6335_RG_STRUP_PWRON_MASK                       0x1
#define MT6335_RG_STRUP_PWRON_SHIFT                      8
#define MT6335_RG_STRUP_PWRON_SEL_MASK                   0x1
#define MT6335_RG_STRUP_PWRON_SEL_SHIFT                  9
#define MT6335_RG_BIASGEN_MASK                           0x1
#define MT6335_RG_BIASGEN_SHIFT                          10
#define MT6335_RG_BIASGEN_SEL_MASK                       0x1
#define MT6335_RG_BIASGEN_SEL_SHIFT                      11
#define MT6335_RG_RTC_XOSC32_ENB_MASK                    0x1
#define MT6335_RG_RTC_XOSC32_ENB_SHIFT                   12
#define MT6335_RG_RTC_XOSC32_ENB_SEL_MASK                0x1
#define MT6335_RG_RTC_XOSC32_ENB_SEL_SHIFT               13
#define MT6335_STRUP_DIG_IO_PG_FORCE_MASK                0x1
#define MT6335_STRUP_DIG_IO_PG_FORCE_SHIFT               15
#define MT6335_CLR_JUST_RST_MASK                         0x1
#define MT6335_CLR_JUST_RST_SHIFT                        4
#define MT6335_UVLO_L2H_DEB_EN_MASK                      0x1
#define MT6335_UVLO_L2H_DEB_EN_SHIFT                     5
#define MT6335_JUST_PWRKEY_RST_MASK                      0x1
#define MT6335_JUST_PWRKEY_RST_SHIFT                     14
#define MT6335_DA_QI_OSC_EN_MASK                         0x1
#define MT6335_DA_QI_OSC_EN_SHIFT                        15
#define MT6335_RG_STRUP_EXT_PMIC_EN_MASK                 0x1
#define MT6335_RG_STRUP_EXT_PMIC_EN_SHIFT                0
#define MT6335_RG_STRUP_EXT_PMIC_SEL_MASK                0x1
#define MT6335_RG_STRUP_EXT_PMIC_SEL_SHIFT               1
#define MT6335_STRUP_CON8_RSV0_MASK                      0x7F
#define MT6335_STRUP_CON8_RSV0_SHIFT                     8
#define MT6335_DA_QI_EXT_PMIC_EN_MASK                    0x1
#define MT6335_DA_QI_EXT_PMIC_EN_SHIFT                   15
#define MT6335_RG_STRUP_AUXADC_START_SW_MASK             0x1
#define MT6335_RG_STRUP_AUXADC_START_SW_SHIFT            0
#define MT6335_RG_STRUP_AUXADC_RSTB_SW_MASK              0x1
#define MT6335_RG_STRUP_AUXADC_RSTB_SW_SHIFT             1
#define MT6335_RG_STRUP_AUXADC_START_SEL_MASK            0x1
#define MT6335_RG_STRUP_AUXADC_START_SEL_SHIFT           2
#define MT6335_RG_STRUP_AUXADC_RSTB_SEL_MASK             0x1
#define MT6335_RG_STRUP_AUXADC_RSTB_SEL_SHIFT            3
#define MT6335_RG_STRUP_AUXADC_RPCNT_MAX_MASK            0x7F
#define MT6335_RG_STRUP_AUXADC_RPCNT_MAX_SHIFT           4
#define MT6335_STRUP_PWROFF_SEQ_EN_MASK                  0x1
#define MT6335_STRUP_PWROFF_SEQ_EN_SHIFT                 0
#define MT6335_STRUP_PWROFF_PREOFF_EN_MASK               0x1
#define MT6335_STRUP_PWROFF_PREOFF_EN_SHIFT              1
#define MT6335_STRUP_DIG0_RSV0_MASK                      0xF
#define MT6335_STRUP_DIG0_RSV0_SHIFT                     2
#define MT6335_STRUP_DIG1_RSV0_MASK                      0x1F
#define MT6335_STRUP_DIG1_RSV0_SHIFT                     6
#define MT6335_RG_RSV_SWREG_MASK                         0xFFFF
#define MT6335_RG_RSV_SWREG_SHIFT                        0
#define MT6335_RG_STRUP_UVLO_U1U2_SEL_MASK               0x1
#define MT6335_RG_STRUP_UVLO_U1U2_SEL_SHIFT              0
#define MT6335_RG_STRUP_UVLO_U1U2_SEL_SWCTRL_MASK        0x1
#define MT6335_RG_STRUP_UVLO_U1U2_SEL_SWCTRL_SHIFT       1
#define MT6335_RG_STRUP_THR_CLR_MASK                     0x1
#define MT6335_RG_STRUP_THR_CLR_SHIFT                    0
#define MT6335_RG_STRUP_LONG_PRESS_EXT_SEL_MASK          0x3
#define MT6335_RG_STRUP_LONG_PRESS_EXT_SEL_SHIFT         0
#define MT6335_RG_STRUP_LONG_PRESS_EXT_TD_MASK           0x3
#define MT6335_RG_STRUP_LONG_PRESS_EXT_TD_SHIFT          2
#define MT6335_RG_STRUP_LONG_PRESS_EXT_EN_MASK           0x1
#define MT6335_RG_STRUP_LONG_PRESS_EXT_EN_SHIFT          4
#define MT6335_RG_STRUP_LONG_PRESS_EXT_CHR_CTRL_MASK     0x1
#define MT6335_RG_STRUP_LONG_PRESS_EXT_CHR_CTRL_SHIFT    5
#define MT6335_RG_STRUP_LONG_PRESS_EXT_PWRKEY_CTRL_MASK  0x1
#define MT6335_RG_STRUP_LONG_PRESS_EXT_PWRKEY_CTRL_SHIFT 6
#define MT6335_RG_STRUP_LONG_PRESS_EXT_SPAR_CTRL_MASK    0x1
#define MT6335_RG_STRUP_LONG_PRESS_EXT_SPAR_CTRL_SHIFT   7
#define MT6335_RG_STRUP_LONG_PRESS_EXT_RTCA_CTRL_MASK    0x1
#define MT6335_RG_STRUP_LONG_PRESS_EXT_RTCA_CTRL_SHIFT   8
#define MT6335_RG_STRUP_ENVTEM_MASK                      0x1
#define MT6335_RG_STRUP_ENVTEM_SHIFT                     14
#define MT6335_RG_STRUP_ENVTEM_CTRL_MASK                 0x1
#define MT6335_RG_STRUP_ENVTEM_CTRL_SHIFT                15
#define MT6335_RG_STRUP_PWRKEY_COUNT_RESET_MASK          0x1
#define MT6335_RG_STRUP_PWRKEY_COUNT_RESET_SHIFT         0
#define MT6335_RG_STRUP_VSRAM_DVFS2_PG_H2L_EN_MASK       0x1
#define MT6335_RG_STRUP_VSRAM_DVFS2_PG_H2L_EN_SHIFT      0
#define MT6335_RG_STRUP_VSRAM_DVFS1_PG_H2L_EN_MASK       0x1
#define MT6335_RG_STRUP_VSRAM_DVFS1_PG_H2L_EN_SHIFT      1
#define MT6335_RG_STRUP_VSRAM_CORE_PG_H2L_EN_MASK        0x1
#define MT6335_RG_STRUP_VSRAM_CORE_PG_H2L_EN_SHIFT       2
#define MT6335_RG_STRUP_VSRAM_GPU_PG_H2L_EN_MASK         0x1
#define MT6335_RG_STRUP_VSRAM_GPU_PG_H2L_EN_SHIFT        3
#define MT6335_RG_STRUP_VSRAM_MD_PG_H2L_EN_MASK          0x1
#define MT6335_RG_STRUP_VSRAM_MD_PG_H2L_EN_SHIFT         4
#define MT6335_RG_STRUP_VUFS18_PG_H2L_EN_MASK            0x1
#define MT6335_RG_STRUP_VUFS18_PG_H2L_EN_SHIFT           5
#define MT6335_RG_STRUP_VEMC_PG_H2L_EN_MASK              0x1
#define MT6335_RG_STRUP_VEMC_PG_H2L_EN_SHIFT             6
#define MT6335_RG_STRUP_VA12_PG_H2L_EN_MASK              0x1
#define MT6335_RG_STRUP_VA12_PG_H2L_EN_SHIFT             7
#define MT6335_RG_STRUP_VA10_PG_H2L_EN_MASK              0x1
#define MT6335_RG_STRUP_VA10_PG_H2L_EN_SHIFT             8
#define MT6335_RG_STRUP_VA18_PG_H2L_EN_MASK              0x1
#define MT6335_RG_STRUP_VA18_PG_H2L_EN_SHIFT             9
#define MT6335_RG_STRUP_VDRAM_PG_H2L_EN_MASK             0x1
#define MT6335_RG_STRUP_VDRAM_PG_H2L_EN_SHIFT            10
#define MT6335_RG_STRUP_VMODEM_PG_H2L_EN_MASK            0x1
#define MT6335_RG_STRUP_VMODEM_PG_H2L_EN_SHIFT           11
#define MT6335_RG_STRUP_VMD1_PG_H2L_EN_MASK              0x1
#define MT6335_RG_STRUP_VMD1_PG_H2L_EN_SHIFT             12
#define MT6335_RG_STRUP_VS2_PG_H2L_EN_MASK               0x1
#define MT6335_RG_STRUP_VS2_PG_H2L_EN_SHIFT              13
#define MT6335_RG_STRUP_VS1_PG_H2L_EN_MASK               0x1
#define MT6335_RG_STRUP_VS1_PG_H2L_EN_SHIFT              14
#define MT6335_RG_STRUP_VCORE_PG_H2L_EN_MASK             0x1
#define MT6335_RG_STRUP_VCORE_PG_H2L_EN_SHIFT            15
#define MT6335_RG_STRUP_EXT_PMIC_PG_H2L_EN_MASK          0x1
#define MT6335_RG_STRUP_EXT_PMIC_PG_H2L_EN_SHIFT         14
#define MT6335_RG_STRUP_VUSB33_PG_H2L_EN_MASK            0x1
#define MT6335_RG_STRUP_VUSB33_PG_H2L_EN_SHIFT           15
#define MT6335_RG_STRUP_VSRAM_DVFS2_PG_ENB_MASK          0x1
#define MT6335_RG_STRUP_VSRAM_DVFS2_PG_ENB_SHIFT         0
#define MT6335_RG_STRUP_VSRAM_DVFS1_PG_ENB_MASK          0x1
#define MT6335_RG_STRUP_VSRAM_DVFS1_PG_ENB_SHIFT         1
#define MT6335_RG_STRUP_VSRAM_CORE_PG_ENB_MASK           0x1
#define MT6335_RG_STRUP_VSRAM_CORE_PG_ENB_SHIFT          2
#define MT6335_RG_STRUP_VSRAM_GPU_PG_ENB_MASK            0x1
#define MT6335_RG_STRUP_VSRAM_GPU_PG_ENB_SHIFT           3
#define MT6335_RG_STRUP_VSRAM_MD_PG_ENB_MASK             0x1
#define MT6335_RG_STRUP_VSRAM_MD_PG_ENB_SHIFT            4
#define MT6335_RG_STRUP_VUFS18_PG_ENB_MASK               0x1
#define MT6335_RG_STRUP_VUFS18_PG_ENB_SHIFT              5
#define MT6335_RG_STRUP_VEMC_PG_ENB_MASK                 0x1
#define MT6335_RG_STRUP_VEMC_PG_ENB_SHIFT                6
#define MT6335_RG_STRUP_VA12_PG_ENB_MASK                 0x1
#define MT6335_RG_STRUP_VA12_PG_ENB_SHIFT                7
#define MT6335_RG_STRUP_VA10_PG_ENB_MASK                 0x1
#define MT6335_RG_STRUP_VA10_PG_ENB_SHIFT                8
#define MT6335_RG_STRUP_VA18_PG_ENB_MASK                 0x1
#define MT6335_RG_STRUP_VA18_PG_ENB_SHIFT                9
#define MT6335_RG_STRUP_VDRAM_PG_ENB_MASK                0x1
#define MT6335_RG_STRUP_VDRAM_PG_ENB_SHIFT               10
#define MT6335_RG_STRUP_VMODEM_PG_ENB_MASK               0x1
#define MT6335_RG_STRUP_VMODEM_PG_ENB_SHIFT              11
#define MT6335_RG_STRUP_VMD1_PG_ENB_MASK                 0x1
#define MT6335_RG_STRUP_VMD1_PG_ENB_SHIFT                12
#define MT6335_RG_STRUP_VS2_PG_ENB_MASK                  0x1
#define MT6335_RG_STRUP_VS2_PG_ENB_SHIFT                 13
#define MT6335_RG_STRUP_VS1_PG_ENB_MASK                  0x1
#define MT6335_RG_STRUP_VS1_PG_ENB_SHIFT                 14
#define MT6335_RG_STRUP_VCORE_PG_ENB_MASK                0x1
#define MT6335_RG_STRUP_VCORE_PG_ENB_SHIFT               15
#define MT6335_RG_STRUP_VXO22_PG_ENB_MASK                0x1
#define MT6335_RG_STRUP_VXO22_PG_ENB_SHIFT               11
#define MT6335_RG_STRUP_VIO28_PG_ENB_MASK                0x1
#define MT6335_RG_STRUP_VIO28_PG_ENB_SHIFT               12
#define MT6335_RG_STRUP_VIO18_PG_ENB_MASK                0x1
#define MT6335_RG_STRUP_VIO18_PG_ENB_SHIFT               13
#define MT6335_RG_STRUP_EXT_PMIC_PG_ENB_MASK             0x1
#define MT6335_RG_STRUP_EXT_PMIC_PG_ENB_SHIFT            14
#define MT6335_RG_STRUP_VUSB33_PG_ENB_MASK               0x1
#define MT6335_RG_STRUP_VUSB33_PG_ENB_SHIFT              15
#define MT6335_RG_STRUP_VDRAM_OC_ENB_MASK                0x1
#define MT6335_RG_STRUP_VDRAM_OC_ENB_SHIFT               10
#define MT6335_RG_STRUP_VMODEM_OC_ENB_MASK               0x1
#define MT6335_RG_STRUP_VMODEM_OC_ENB_SHIFT              11
#define MT6335_RG_STRUP_VMD1_OC_ENB_MASK                 0x1
#define MT6335_RG_STRUP_VMD1_OC_ENB_SHIFT                12
#define MT6335_RG_STRUP_VS2_OC_ENB_MASK                  0x1
#define MT6335_RG_STRUP_VS2_OC_ENB_SHIFT                 13
#define MT6335_RG_STRUP_VS1_OC_ENB_MASK                  0x1
#define MT6335_RG_STRUP_VS1_OC_ENB_SHIFT                 14
#define MT6335_RG_STRUP_VCORE_OC_ENB_MASK                0x1
#define MT6335_RG_STRUP_VCORE_OC_ENB_SHIFT               15
#define MT6335_RG_STRUP_LONG_PRESS_RESET_EXTEND_MASK     0x1
#define MT6335_RG_STRUP_LONG_PRESS_RESET_EXTEND_SHIFT    0
#define MT6335_RG_EXT_PMIC_PG_DEBTD_MASK                 0x1
#define MT6335_RG_EXT_PMIC_PG_DEBTD_SHIFT                0
#define MT6335_RG_RTC_SPAR_DEB_EN_MASK                   0x1
#define MT6335_RG_RTC_SPAR_DEB_EN_SHIFT                  8
#define MT6335_RG_RTC_ALARM_DEB_EN_MASK                  0x1
#define MT6335_RG_RTC_ALARM_DEB_EN_SHIFT                 9
#define MT6335_RGS_ANA_CHIP_ID_MASK                      0x7
#define MT6335_RGS_ANA_CHIP_ID_SHIFT                     7
#define MT6335_RG_PP_EN_DRVSEL_MASK                      0x1
#define MT6335_RG_PP_EN_DRVSEL_SHIFT                     10
#define MT6335_RG_FCHR_PU_EN_MASK                        0x1
#define MT6335_RG_FCHR_PU_EN_SHIFT                       11
#define MT6335_RG_PMU_RSV_MASK                           0xF
#define MT6335_RG_PMU_RSV_SHIFT                          12
#define MT6335_RG_FCHR_KEYDET_EN_MASK                    0x1
#define MT6335_RG_FCHR_KEYDET_EN_SHIFT                   0
#define MT6335_RG_EN_DRVSEL_MASK                         0x1
#define MT6335_RG_EN_DRVSEL_SHIFT                        1
#define MT6335_RG_RST_DRVSEL_MASK                        0x1
#define MT6335_RG_RST_DRVSEL_SHIFT                       2
#define MT6335_RG_STRUP_IREF_TRIM_MASK                   0x3F
#define MT6335_RG_STRUP_IREF_TRIM_SHIFT                  3
#define MT6335_RG_VREF_BG_MASK                           0x7
#define MT6335_RG_VREF_BG_SHIFT                          9
#define MT6335_RG_THR_TMODE_MASK                         0x1
#define MT6335_RG_THR_TMODE_SHIFT                        12
#define MT6335_RG_STRUP_THR_SEL_MASK                     0x3
#define MT6335_RG_STRUP_THR_SEL_SHIFT                    13
#define MT6335_RG_THRDET_SEL_MASK                        0x1
#define MT6335_RG_THRDET_SEL_SHIFT                       15
#define MT6335_RG_PWRHOLD_MASK                           0x1
#define MT6335_RG_PWRHOLD_SHIFT                          0
#define MT6335_RG_CRST_MASK                              0x1
#define MT6335_RG_CRST_SHIFT                             8
#define MT6335_RG_WRST_MASK                              0x1
#define MT6335_RG_WRST_SHIFT                             9
#define MT6335_RG_RSTB_ONINTV_MASK                       0x3
#define MT6335_RG_RSTB_ONINTV_SHIFT                      0
#define MT6335_RG_CRST_INTV_MASK                         0x3
#define MT6335_RG_CRST_INTV_SHIFT                        8
#define MT6335_RG_WRST_INTV_MASK                         0x3
#define MT6335_RG_WRST_INTV_SHIFT                        10
#define MT6335_RG_PSEQ_IVGEN_SEL_MASK                    0x1
#define MT6335_RG_PSEQ_IVGEN_SEL_SHIFT                   0
#define MT6335_RG_PSEQ_FSM_RST_SEL_MASK                  0x1
#define MT6335_RG_PSEQ_FSM_RST_SEL_SHIFT                 4
#define MT6335_RG_PSEQ_PG_CK_SEL_MASK                    0x1
#define MT6335_RG_PSEQ_PG_CK_SEL_SHIFT                   8
#define MT6335_RG_PSEQ_1MS_TK_EXT_MASK                   0x1
#define MT6335_RG_PSEQ_1MS_TK_EXT_SHIFT                  12
#define MT6335_RG_PSEQ_SPAR_XCPT_MASK_MASK               0x1
#define MT6335_RG_PSEQ_SPAR_XCPT_MASK_SHIFT              13
#define MT6335_RG_PSEQ_RTCA_XCPT_MASK_MASK               0x1
#define MT6335_RG_PSEQ_RTCA_XCPT_MASK_SHIFT              14
#define MT6335_RG_WDTRST_EN_MASK                         0x1
#define MT6335_RG_WDTRST_EN_SHIFT                        0
#define MT6335_RG_WDTRST_ACT_MASK                        0x3
#define MT6335_RG_WDTRST_ACT_SHIFT                       4
#define MT6335_RG_PSPG_SHDN_EN_MASK                      0x3
#define MT6335_RG_PSPG_SHDN_EN_SHIFT                     8
#define MT6335_RG_THM_SHDN_EN_MASK                       0x1
#define MT6335_RG_THM_SHDN_EN_SHIFT                      12
#define MT6335_RG_PSEQ_FORCE_ON_MASK                     0x1
#define MT6335_RG_PSEQ_FORCE_ON_SHIFT                    0
#define MT6335_RG_PSEQ_FORCE_ALL_DOFF_MASK               0x1
#define MT6335_RG_PSEQ_FORCE_ALL_DOFF_SHIFT              8
#define MT6335_RG_PSEQ_F75K_FORCE_MASK                   0x1
#define MT6335_RG_PSEQ_F75K_FORCE_SHIFT                  12
#define MT6335_RG_PSEQ_RSV0_MASK                         0xFF
#define MT6335_RG_PSEQ_RSV0_SHIFT                        0
#define MT6335_RG_PSEQ_RSV1_MASK                         0xF
#define MT6335_RG_PSEQ_RSV1_SHIFT                        8
#define MT6335_RG_PSEQ_RSV2_MASK                         0xF
#define MT6335_RG_PSEQ_RSV2_SHIFT                        12
#define MT6335_RG_BWDT_EN_MASK                           0x1
#define MT6335_RG_BWDT_EN_SHIFT                          0
#define MT6335_RG_BWDT_TD_MASK                           0x3
#define MT6335_RG_BWDT_TD_SHIFT                          7
#define MT6335_RG_BWDT_CHRTD_MASK                        0x1
#define MT6335_RG_BWDT_CHRTD_SHIFT                       12
#define MT6335_RG_BWDT_DDLO_TD_MASK                      0x3
#define MT6335_RG_BWDT_DDLO_TD_SHIFT                     13
#define MT6335_RG_BWDT_SRCSEL_MASK                       0x1
#define MT6335_RG_BWDT_SRCSEL_SHIFT                      15
#define MT6335_RG_CPS_W_KEY_MASK                         0xFFFF
#define MT6335_RG_CPS_W_KEY_SHIFT                        0
#define MT6335_RG_SLOT_INTV_UP_MASK                      0x3
#define MT6335_RG_SLOT_INTV_UP_SHIFT                     0
#define MT6335_RG_SEQ_LEN_MASK                           0x1F
#define MT6335_RG_SEQ_LEN_SHIFT                          8
#define MT6335_RG_SLOT_INTV_DOWN_MASK                    0x3
#define MT6335_RG_SLOT_INTV_DOWN_SHIFT                   0
#define MT6335_RG_DSEQ_LEN_MASK                          0x1F
#define MT6335_RG_DSEQ_LEN_SHIFT                         8
#define MT6335_RG_VCORE_USA_MASK                         0x1F
#define MT6335_RG_VCORE_USA_SHIFT                        0
#define MT6335_RG_VS1_USA_MASK                           0x1F
#define MT6335_RG_VS1_USA_SHIFT                          8
#define MT6335_RG_VS2_USA_MASK                           0x1F
#define MT6335_RG_VS2_USA_SHIFT                          0
#define MT6335_RG_VMD1_USA_MASK                          0x1F
#define MT6335_RG_VMD1_USA_SHIFT                         8
#define MT6335_RG_VMODEM_USA_MASK                        0x1F
#define MT6335_RG_VMODEM_USA_SHIFT                       0
#define MT6335_RG_VDRAM_USA_MASK                         0x1F
#define MT6335_RG_VDRAM_USA_SHIFT                        8
#define MT6335_RG_VA10_USA_MASK                          0x1F
#define MT6335_RG_VA10_USA_SHIFT                         0
#define MT6335_RG_VA12_USA_MASK                          0x1F
#define MT6335_RG_VA12_USA_SHIFT                         8
#define MT6335_RG_VEMC_USA_MASK                          0x1F
#define MT6335_RG_VEMC_USA_SHIFT                         0
#define MT6335_RG_VUFS18_USA_MASK                        0x1F
#define MT6335_RG_VUFS18_USA_SHIFT                       8
#define MT6335_RG_VSRAM_MD_USA_MASK                      0x1F
#define MT6335_RG_VSRAM_MD_USA_SHIFT                     0
#define MT6335_RG_VSRAM_GPU_USA_MASK                     0x1F
#define MT6335_RG_VSRAM_GPU_USA_SHIFT                    8
#define MT6335_RG_VSRAM_CORE_USA_MASK                    0x1F
#define MT6335_RG_VSRAM_CORE_USA_SHIFT                   0
#define MT6335_RG_VSRAM_DVFS1_USA_MASK                   0x1F
#define MT6335_RG_VSRAM_DVFS1_USA_SHIFT                  8
#define MT6335_RG_VSRAM_DVFS2_USA_MASK                   0x1F
#define MT6335_RG_VSRAM_DVFS2_USA_SHIFT                  0
#define MT6335_RG_VUSB33_USA_MASK                        0x1F
#define MT6335_RG_VUSB33_USA_SHIFT                       8
#define MT6335_RG_EXTPMIC_USA_MASK                       0x1F
#define MT6335_RG_EXTPMIC_USA_SHIFT                      0
#define MT6335_RG_VIO18_USA_MASK                         0x1F
#define MT6335_RG_VIO18_USA_SHIFT                        8
#define MT6335_RG_VIO28_USA_MASK                         0x1F
#define MT6335_RG_VIO28_USA_SHIFT                        0
#define MT6335_RG_VXO22_USA_MASK                         0x1F
#define MT6335_RG_VXO22_USA_SHIFT                        8
#define MT6335_RG_VRSV0_USA_MASK                         0x1F
#define MT6335_RG_VRSV0_USA_SHIFT                        0
#define MT6335_RG_VRSV1_USA_MASK                         0x1F
#define MT6335_RG_VRSV1_USA_SHIFT                        8
#define MT6335_RG_VCORE_DSA_MASK                         0x1F
#define MT6335_RG_VCORE_DSA_SHIFT                        0
#define MT6335_RG_VS1_DSA_MASK                           0x1F
#define MT6335_RG_VS1_DSA_SHIFT                          8
#define MT6335_RG_VS2_DSA_MASK                           0x1F
#define MT6335_RG_VS2_DSA_SHIFT                          0
#define MT6335_RG_VMD1_DSA_MASK                          0x1F
#define MT6335_RG_VMD1_DSA_SHIFT                         8
#define MT6335_RG_VMODEM_DSA_MASK                        0x1F
#define MT6335_RG_VMODEM_DSA_SHIFT                       0
#define MT6335_RG_VDRAM_DSA_MASK                         0x1F
#define MT6335_RG_VDRAM_DSA_SHIFT                        8
#define MT6335_RG_VA10_DSA_MASK                          0x1F
#define MT6335_RG_VA10_DSA_SHIFT                         0
#define MT6335_RG_VA12_DSA_MASK                          0x1F
#define MT6335_RG_VA12_DSA_SHIFT                         8
#define MT6335_RG_VEMC_DSA_MASK                          0x1F
#define MT6335_RG_VEMC_DSA_SHIFT                         0
#define MT6335_RG_VUFS18_DSA_MASK                        0x1F
#define MT6335_RG_VUFS18_DSA_SHIFT                       8
#define MT6335_RG_VSRAM_MD_DSA_MASK                      0x1F
#define MT6335_RG_VSRAM_MD_DSA_SHIFT                     0
#define MT6335_RG_VSRAM_GPU_DSA_MASK                     0x1F
#define MT6335_RG_VSRAM_GPU_DSA_SHIFT                    8
#define MT6335_RG_VSRAM_CORE_DSA_MASK                    0x1F
#define MT6335_RG_VSRAM_CORE_DSA_SHIFT                   0
#define MT6335_RG_VSRAM_DVFS1_DSA_MASK                   0x1F
#define MT6335_RG_VSRAM_DVFS1_DSA_SHIFT                  8
#define MT6335_RG_VSRAM_DVFS2_DSA_MASK                   0x1F
#define MT6335_RG_VSRAM_DVFS2_DSA_SHIFT                  0
#define MT6335_RG_VUSB33_DSA_MASK                        0x1F
#define MT6335_RG_VUSB33_DSA_SHIFT                       8
#define MT6335_RG_EXTPMIC_DSA_MASK                       0x1F
#define MT6335_RG_EXTPMIC_DSA_SHIFT                      0
#define MT6335_RG_VIO18_DSA_MASK                         0x1F
#define MT6335_RG_VIO18_DSA_SHIFT                        8
#define MT6335_RG_VIO28_DSA_MASK                         0x1F
#define MT6335_RG_VIO28_DSA_SHIFT                        0
#define MT6335_RG_VXO22_DSA_MASK                         0x1F
#define MT6335_RG_VXO22_DSA_SHIFT                        8
#define MT6335_RG_VRSV0_DSA_MASK                         0x1F
#define MT6335_RG_VRSV0_DSA_SHIFT                        0
#define MT6335_RG_VRSV1_DSA_MASK                         0x1F
#define MT6335_RG_VRSV1_DSA_SHIFT                        8
#define MT6335_RG_POR_FLAG_MASK                          0x1
#define MT6335_RG_POR_FLAG_SHIFT                         0
#define MT6335_STS_PWRKEY_MASK                           0x1
#define MT6335_STS_PWRKEY_SHIFT                          0
#define MT6335_STS_RTCA_MASK                             0x1
#define MT6335_STS_RTCA_SHIFT                            1
#define MT6335_STS_CHRIN_MASK                            0x1
#define MT6335_STS_CHRIN_SHIFT                           2
#define MT6335_STS_SPAR_MASK                             0x1
#define MT6335_STS_SPAR_SHIFT                            3
#define MT6335_STS_RBOOT_MASK                            0x1
#define MT6335_STS_RBOOT_SHIFT                           4
#define MT6335_STS_UVLO_MASK                             0x1
#define MT6335_STS_UVLO_SHIFT                            0
#define MT6335_STS_PGFAIL_MASK                           0x1
#define MT6335_STS_PGFAIL_SHIFT                          1
#define MT6335_STS_PSOC_MASK                             0x1
#define MT6335_STS_PSOC_SHIFT                            2
#define MT6335_STS_THRDN_MASK                            0x1
#define MT6335_STS_THRDN_SHIFT                           3
#define MT6335_STS_WRST_MASK                             0x1
#define MT6335_STS_WRST_SHIFT                            4
#define MT6335_STS_CRST_MASK                             0x1
#define MT6335_STS_CRST_SHIFT                            5
#define MT6335_STS_PKEYLP_MASK                           0x1
#define MT6335_STS_PKEYLP_SHIFT                          6
#define MT6335_STS_NORMOFF_MASK                          0x1
#define MT6335_STS_NORMOFF_SHIFT                         7
#define MT6335_STS_BWDT_MASK                             0x1
#define MT6335_STS_BWDT_SHIFT                            8
#define MT6335_STS_DDLO_MASK                             0x1
#define MT6335_STS_DDLO_SHIFT                            9
#define MT6335_STS_WDT_MASK                              0x1
#define MT6335_STS_WDT_SHIFT                             10
#define MT6335_STS_PUPSRC_MASK                           0x1
#define MT6335_STS_PUPSRC_SHIFT                          11
#define MT6335_RG_POFFSTS_CLR_MASK                       0x1
#define MT6335_RG_POFFSTS_CLR_SHIFT                      0
#define MT6335_RG_PONSTS_CLR_MASK                        0x1
#define MT6335_RG_PONSTS_CLR_SHIFT                       8
#define MT6335_HWCID_MASK                                0xFFFF
#define MT6335_HWCID_SHIFT                               0
#define MT6335_SWCID_MASK                                0xFFFF
#define MT6335_SWCID_SHIFT                               0
#define MT6335_RG_SRCLKEN_IN0_EN_MASK                    0x1
#define MT6335_RG_SRCLKEN_IN0_EN_SHIFT                   0
#define MT6335_RG_SRCLKEN_IN1_EN_MASK                    0x1
#define MT6335_RG_SRCLKEN_IN1_EN_SHIFT                   1
#define MT6335_RG_OSC_SEL_MASK                           0x1
#define MT6335_RG_OSC_SEL_SHIFT                          4
#define MT6335_RG_SRCLKEN_IN0_HW_MODE_MASK               0x1
#define MT6335_RG_SRCLKEN_IN0_HW_MODE_SHIFT              5
#define MT6335_RG_SRCLKEN_IN1_HW_MODE_MASK               0x1
#define MT6335_RG_SRCLKEN_IN1_HW_MODE_SHIFT              6
#define MT6335_RG_OSC_SEL_HW_MODE_MASK                   0x1
#define MT6335_RG_OSC_SEL_HW_MODE_SHIFT                  7
#define MT6335_RG_SRCLKEN_IN_SYNC_EN_MASK                0x1
#define MT6335_RG_SRCLKEN_IN_SYNC_EN_SHIFT               8
#define MT6335_RG_OSC_EN_AUTO_OFF_MASK                   0x1
#define MT6335_RG_OSC_EN_AUTO_OFF_SHIFT                  9
#define MT6335_TEST_OUT_MASK                             0xFF
#define MT6335_TEST_OUT_SHIFT                            0
#define MT6335_RG_MON_FLAG_SEL_MASK                      0xFF
#define MT6335_RG_MON_FLAG_SEL_SHIFT                     0
#define MT6335_RG_MON_GRP_SEL_MASK                       0x1F
#define MT6335_RG_MON_GRP_SEL_SHIFT                      8
#define MT6335_RG_NANDTREE_MODE_MASK                     0x1
#define MT6335_RG_NANDTREE_MODE_SHIFT                    0
#define MT6335_RG_TEST_AUXADC_MASK                       0x1
#define MT6335_RG_TEST_AUXADC_SHIFT                      1
#define MT6335_RG_EFUSE_MODE_MASK                        0x1
#define MT6335_RG_EFUSE_MODE_SHIFT                       2
#define MT6335_RG_TEST_STRUP_MASK                        0x1
#define MT6335_RG_TEST_STRUP_SHIFT                       3
#define MT6335_TESTMODE_SW_MASK                          0x1
#define MT6335_TESTMODE_SW_SHIFT                         0
#define MT6335_VSRAM_DVFS2_PG_DEB_MASK                   0x1
#define MT6335_VSRAM_DVFS2_PG_DEB_SHIFT                  0
#define MT6335_VSRAM_DVFS1_PG_DEB_MASK                   0x1
#define MT6335_VSRAM_DVFS1_PG_DEB_SHIFT                  1
#define MT6335_VSRAM_CORE_PG_DEB_MASK                    0x1
#define MT6335_VSRAM_CORE_PG_DEB_SHIFT                   2
#define MT6335_VSRAM_GPU_PG_DEB_MASK                     0x1
#define MT6335_VSRAM_GPU_PG_DEB_SHIFT                    3
#define MT6335_VSRAM_MD_PG_DEB_MASK                      0x1
#define MT6335_VSRAM_MD_PG_DEB_SHIFT                     4
#define MT6335_VUFS18_PG_DEB_MASK                        0x1
#define MT6335_VUFS18_PG_DEB_SHIFT                       5
#define MT6335_VEMC_PG_DEB_MASK                          0x1
#define MT6335_VEMC_PG_DEB_SHIFT                         6
#define MT6335_VA12_PG_DEB_MASK                          0x1
#define MT6335_VA12_PG_DEB_SHIFT                         7
#define MT6335_VA10_PG_DEB_MASK                          0x1
#define MT6335_VA10_PG_DEB_SHIFT                         8
#define MT6335_VA18_PG_DEB_MASK                          0x1
#define MT6335_VA18_PG_DEB_SHIFT                         9
#define MT6335_VDRAM_PG_DEB_MASK                         0x1
#define MT6335_VDRAM_PG_DEB_SHIFT                        10
#define MT6335_VMODEM_PG_DEB_MASK                        0x1
#define MT6335_VMODEM_PG_DEB_SHIFT                       11
#define MT6335_VMD1_PG_DEB_MASK                          0x1
#define MT6335_VMD1_PG_DEB_SHIFT                         12
#define MT6335_VS2_PG_DEB_MASK                           0x1
#define MT6335_VS2_PG_DEB_SHIFT                          13
#define MT6335_VS1_PG_DEB_MASK                           0x1
#define MT6335_VS1_PG_DEB_SHIFT                          14
#define MT6335_VCORE_PG_DEB_MASK                         0x1
#define MT6335_VCORE_PG_DEB_SHIFT                        15
#define MT6335_VXO22_PG_DEB_MASK                         0x1
#define MT6335_VXO22_PG_DEB_SHIFT                        11
#define MT6335_VIO28_PG_DEB_MASK                         0x1
#define MT6335_VIO28_PG_DEB_SHIFT                        12
#define MT6335_VIO18_PG_DEB_MASK                         0x1
#define MT6335_VIO18_PG_DEB_SHIFT                        13
#define MT6335_EXT_PMIC_PG_DEB_MASK                      0x1
#define MT6335_EXT_PMIC_PG_DEB_SHIFT                     14
#define MT6335_VUSB33_PG_DEB_MASK                        0x1
#define MT6335_VUSB33_PG_DEB_SHIFT                       15
#define MT6335_STRUP_VSRAM_DVFS2_PG_STATUS_MASK          0x1
#define MT6335_STRUP_VSRAM_DVFS2_PG_STATUS_SHIFT         0
#define MT6335_STRUP_VSRAM_DVFS1_PG_STATUS_MASK          0x1
#define MT6335_STRUP_VSRAM_DVFS1_PG_STATUS_SHIFT         1
#define MT6335_STRUP_VSRAM_CORE_PG_STATUS_MASK           0x1
#define MT6335_STRUP_VSRAM_CORE_PG_STATUS_SHIFT          2
#define MT6335_STRUP_VSRAM_GPU_PG_STATUS_MASK            0x1
#define MT6335_STRUP_VSRAM_GPU_PG_STATUS_SHIFT           3
#define MT6335_STRUP_VSRAM_MD_PG_STATUS_MASK             0x1
#define MT6335_STRUP_VSRAM_MD_PG_STATUS_SHIFT            4
#define MT6335_STRUP_VUFS18_PG_STATUS_MASK               0x1
#define MT6335_STRUP_VUFS18_PG_STATUS_SHIFT              5
#define MT6335_STRUP_VEMC_PG_STATUS_MASK                 0x1
#define MT6335_STRUP_VEMC_PG_STATUS_SHIFT                6
#define MT6335_STRUP_VA12_PG_STATUS_MASK                 0x1
#define MT6335_STRUP_VA12_PG_STATUS_SHIFT                7
#define MT6335_STRUP_VA10_PG_STATUS_MASK                 0x1
#define MT6335_STRUP_VA10_PG_STATUS_SHIFT                8
#define MT6335_STRUP_VA18_PG_STATUS_MASK                 0x1
#define MT6335_STRUP_VA18_PG_STATUS_SHIFT                9
#define MT6335_STRUP_VDRAM_PG_STATUS_MASK                0x1
#define MT6335_STRUP_VDRAM_PG_STATUS_SHIFT               10
#define MT6335_STRUP_VMODEM_PG_STATUS_MASK               0x1
#define MT6335_STRUP_VMODEM_PG_STATUS_SHIFT              11
#define MT6335_STRUP_VMD1_PG_STATUS_MASK                 0x1
#define MT6335_STRUP_VMD1_PG_STATUS_SHIFT                12
#define MT6335_STRUP_VS2_PG_STATUS_MASK                  0x1
#define MT6335_STRUP_VS2_PG_STATUS_SHIFT                 13
#define MT6335_STRUP_VS1_PG_STATUS_MASK                  0x1
#define MT6335_STRUP_VS1_PG_STATUS_SHIFT                 14
#define MT6335_STRUP_VCORE_PG_STATUS_MASK                0x1
#define MT6335_STRUP_VCORE_PG_STATUS_SHIFT               15
#define MT6335_STRUP_VXO22_PG_STATUS_MASK                0x1
#define MT6335_STRUP_VXO22_PG_STATUS_SHIFT               11
#define MT6335_STRUP_VIO28_PG_STATUS_MASK                0x1
#define MT6335_STRUP_VIO28_PG_STATUS_SHIFT               12
#define MT6335_STRUP_VIO18_PG_STATUS_MASK                0x1
#define MT6335_STRUP_VIO18_PG_STATUS_SHIFT               13
#define MT6335_STRUP_EXT_PMIC_PG_STATUS_MASK             0x1
#define MT6335_STRUP_EXT_PMIC_PG_STATUS_SHIFT            14
#define MT6335_STRUP_VUSB33_PG_STATUS_MASK               0x1
#define MT6335_STRUP_VUSB33_PG_STATUS_SHIFT              15
#define MT6335_STRUP_VDRAM_OC_STATUS_MASK                0x1
#define MT6335_STRUP_VDRAM_OC_STATUS_SHIFT               10
#define MT6335_STRUP_VMODEM_OC_STATUS_MASK               0x1
#define MT6335_STRUP_VMODEM_OC_STATUS_SHIFT              11
#define MT6335_STRUP_VMD1_OC_STATUS_MASK                 0x1
#define MT6335_STRUP_VMD1_OC_STATUS_SHIFT                12
#define MT6335_STRUP_VS2_OC_STATUS_MASK                  0x1
#define MT6335_STRUP_VS2_OC_STATUS_SHIFT                 13
#define MT6335_STRUP_VS1_OC_STATUS_MASK                  0x1
#define MT6335_STRUP_VS1_OC_STATUS_SHIFT                 14
#define MT6335_STRUP_VCORE_OC_STATUS_MASK                0x1
#define MT6335_STRUP_VCORE_OC_STATUS_SHIFT               15
#define MT6335_PMU_THERMAL_DEB_MASK                      0x1
#define MT6335_PMU_THERMAL_DEB_SHIFT                     14
#define MT6335_STRUP_THERMAL_STATUS_MASK                 0x1
#define MT6335_STRUP_THERMAL_STATUS_SHIFT                15
#define MT6335_PMU_TEST_MODE_SCAN_MASK                   0x1
#define MT6335_PMU_TEST_MODE_SCAN_SHIFT                  0
#define MT6335_PWRKEY_DEB_MASK                           0x1
#define MT6335_PWRKEY_DEB_SHIFT                          1
#define MT6335_HOMEKEY_DEB_MASK                          0x1
#define MT6335_HOMEKEY_DEB_SHIFT                         2
#define MT6335_RTC_XTAL_DET_DONE_MASK                    0x1
#define MT6335_RTC_XTAL_DET_DONE_SHIFT                   6
#define MT6335_XOSC32_ENB_DET_MASK                       0x1
#define MT6335_XOSC32_ENB_DET_SHIFT                      7
#define MT6335_RTC_XTAL_DET_RSV_MASK                     0xF
#define MT6335_RTC_XTAL_DET_RSV_SHIFT                    8
#define MT6335_RG_PMU_TDSEL_MASK                         0x1
#define MT6335_RG_PMU_TDSEL_SHIFT                        0
#define MT6335_RG_SPI_TDSEL_MASK                         0x1
#define MT6335_RG_SPI_TDSEL_SHIFT                        1
#define MT6335_RG_AUD_TDSEL_MASK                         0x1
#define MT6335_RG_AUD_TDSEL_SHIFT                        2
#define MT6335_RG_E32CAL_TDSEL_MASK                      0x1
#define MT6335_RG_E32CAL_TDSEL_SHIFT                     3
#define MT6335_RG_PMU_RDSEL_MASK                         0x1
#define MT6335_RG_PMU_RDSEL_SHIFT                        0
#define MT6335_RG_SPI_RDSEL_MASK                         0x1
#define MT6335_RG_SPI_RDSEL_SHIFT                        1
#define MT6335_RG_AUD_RDSEL_MASK                         0x1
#define MT6335_RG_AUD_RDSEL_SHIFT                        2
#define MT6335_RG_E32CAL_RDSEL_MASK                      0x1
#define MT6335_RG_E32CAL_RDSEL_SHIFT                     3
#define MT6335_RG_SMT_WDTRSTB_IN_MASK                    0x1
#define MT6335_RG_SMT_WDTRSTB_IN_SHIFT                   0
#define MT6335_RG_SMT_HOMEKEY_MASK                       0x1
#define MT6335_RG_SMT_HOMEKEY_SHIFT                      1
#define MT6335_RG_SMT_SRCLKEN_IN0_MASK                   0x1
#define MT6335_RG_SMT_SRCLKEN_IN0_SHIFT                  2
#define MT6335_RG_SMT_SRCLKEN_IN1_MASK                   0x1
#define MT6335_RG_SMT_SRCLKEN_IN1_SHIFT                  3
#define MT6335_RG_SMT_RTC_32K1V8_0_MASK                  0x1
#define MT6335_RG_SMT_RTC_32K1V8_0_SHIFT                 4
#define MT6335_RG_SMT_RTC_32K1V8_1_MASK                  0x1
#define MT6335_RG_SMT_RTC_32K1V8_1_SHIFT                 5
#define MT6335_RG_SMT_SCP_VREQ_VAO_MASK                  0x1
#define MT6335_RG_SMT_SCP_VREQ_VAO_SHIFT                 6
#define MT6335_RG_SMT_SPI_CLK_MASK                       0x1
#define MT6335_RG_SMT_SPI_CLK_SHIFT                      0
#define MT6335_RG_SMT_SPI_CSN_MASK                       0x1
#define MT6335_RG_SMT_SPI_CSN_SHIFT                      1
#define MT6335_RG_SMT_SPI_MOSI_MASK                      0x1
#define MT6335_RG_SMT_SPI_MOSI_SHIFT                     2
#define MT6335_RG_SMT_SPI_MISO_MASK                      0x1
#define MT6335_RG_SMT_SPI_MISO_SHIFT                     3
#define MT6335_RG_OCTL_SRCLKEN_IN0_MASK                  0xF
#define MT6335_RG_OCTL_SRCLKEN_IN0_SHIFT                 0
#define MT6335_RG_OCTL_SRCLKEN_IN1_MASK                  0xF
#define MT6335_RG_OCTL_SRCLKEN_IN1_SHIFT                 4
#define MT6335_RG_OCTL_RTC_32K1V8_0_MASK                 0xF
#define MT6335_RG_OCTL_RTC_32K1V8_0_SHIFT                8
#define MT6335_RG_OCTL_RTC_32K1V8_1_MASK                 0xF
#define MT6335_RG_OCTL_RTC_32K1V8_1_SHIFT                12
#define MT6335_RG_OCTL_SPI_CLK_MASK                      0xF
#define MT6335_RG_OCTL_SPI_CLK_SHIFT                     0
#define MT6335_RG_OCTL_SPI_CSN_MASK                      0xF
#define MT6335_RG_OCTL_SPI_CSN_SHIFT                     4
#define MT6335_RG_OCTL_SPI_MOSI_MASK                     0xF
#define MT6335_RG_OCTL_SPI_MOSI_SHIFT                    8
#define MT6335_RG_OCTL_SPI_MISO_MASK                     0xF
#define MT6335_RG_OCTL_SPI_MISO_SHIFT                    12
#define MT6335_RG_OCTL_HOMEKEY_MASK                      0xF
#define MT6335_RG_OCTL_HOMEKEY_SHIFT                     0
#define MT6335_RG_OCTL_SCP_VREQ_VAO_MASK                 0xF
#define MT6335_RG_OCTL_SCP_VREQ_VAO_SHIFT                4
#define MT6335_RG_SPI_CLK_FILTER_EN_MASK                 0x1
#define MT6335_RG_SPI_CLK_FILTER_EN_SHIFT                0
#define MT6335_RG_SPI_CSN_FILTER_EN_MASK                 0x1
#define MT6335_RG_SPI_CSN_FILTER_EN_SHIFT                1
#define MT6335_RG_SPI_MOSI_FILTER_EN_MASK                0x1
#define MT6335_RG_SPI_MOSI_FILTER_EN_SHIFT               2
#define MT6335_RG_SPI_MISO_FILTER_EN_MASK                0x1
#define MT6335_RG_SPI_MISO_FILTER_EN_SHIFT               3
#define MT6335_TOP_STATUS_MASK                           0xF
#define MT6335_TOP_STATUS_SHIFT                          0
#define MT6335_TOP_STATUS_SET_MASK                       0x3
#define MT6335_TOP_STATUS_SET_SHIFT                      0
#define MT6335_TOP_STATUS_CLR_MASK                       0x3
#define MT6335_TOP_STATUS_CLR_SHIFT                      0
#define MT6335_RG_SRCLKEN_IN2_EN_MASK                    0x1
#define MT6335_RG_SRCLKEN_IN2_EN_SHIFT                   0
#define MT6335_RG_SRCLKEN_IN3_EN_MASK                    0x1
#define MT6335_RG_SRCLKEN_IN3_EN_SHIFT                   0
#define MT6335_RG_G_SMPS_CK_PDN_MASK                     0x1
#define MT6335_RG_G_SMPS_CK_PDN_SHIFT                    0
#define MT6335_RG_G_SMPS_TEST_CK_PDN_MASK                0x1
#define MT6335_RG_G_SMPS_TEST_CK_PDN_SHIFT               1
#define MT6335_RG_INTRP_CK_PDN_MASK                      0x1
#define MT6335_RG_INTRP_CK_PDN_SHIFT                     2
#define MT6335_RG_INTRP_PRE_OC_CK_PDN_MASK               0x1
#define MT6335_RG_INTRP_PRE_OC_CK_PDN_SHIFT              3
#define MT6335_RG_G_BIF_1M_CK_PDN_MASK                   0x1
#define MT6335_RG_G_BIF_1M_CK_PDN_SHIFT                  4
#define MT6335_RG_BIF_X1_CK_PDN_MASK                     0x1
#define MT6335_RG_BIF_X1_CK_PDN_SHIFT                    5
#define MT6335_RG_BIF_X4_CK_PDN_MASK                     0x1
#define MT6335_RG_BIF_X4_CK_PDN_SHIFT                    6
#define MT6335_RG_BIF_X72_CK_PDN_MASK                    0x1
#define MT6335_RG_BIF_X72_CK_PDN_SHIFT                   7
#define MT6335_RG_AUXADC_1M_CK_PDN_MASK                  0x1
#define MT6335_RG_AUXADC_1M_CK_PDN_SHIFT                 8
#define MT6335_RG_AUXADC_CK_PDN_MASK                     0x1
#define MT6335_RG_AUXADC_CK_PDN_SHIFT                    9
#define MT6335_RG_AUXADC_RNG_CK_PDN_MASK                 0x1
#define MT6335_RG_AUXADC_RNG_CK_PDN_SHIFT                10
#define MT6335_RG_DRV_32K_CK_PDN_MASK                    0x1
#define MT6335_RG_DRV_32K_CK_PDN_SHIFT                   11
#define MT6335_RG_DRV_ISINK3_CK_PDN_MASK                 0x1
#define MT6335_RG_DRV_ISINK3_CK_PDN_SHIFT                12
#define MT6335_RG_DRV_ISINK2_CK_PDN_MASK                 0x1
#define MT6335_RG_DRV_ISINK2_CK_PDN_SHIFT                13
#define MT6335_RG_DRV_ISINK1_CK_PDN_MASK                 0x1
#define MT6335_RG_DRV_ISINK1_CK_PDN_SHIFT                14
#define MT6335_RG_DRV_ISINK0_CK_PDN_MASK                 0x1
#define MT6335_RG_DRV_ISINK0_CK_PDN_SHIFT                15
#define MT6335_TOP_CKPDN_CON0_SET_MASK                   0xFFFF
#define MT6335_TOP_CKPDN_CON0_SET_SHIFT                  0
#define MT6335_TOP_CKPDN_CON0_CLR_MASK                   0xFFFF
#define MT6335_TOP_CKPDN_CON0_CLR_SHIFT                  0
#define MT6335_RG_BUCK_9M_CK_PDN_MASK                    0x1
#define MT6335_RG_BUCK_9M_CK_PDN_SHIFT                   0
#define MT6335_RG_BUCK_1M_CK_PDN_MASK                    0x1
#define MT6335_RG_BUCK_1M_CK_PDN_SHIFT                   1
#define MT6335_RG_BUCK_18M_CK_PDN_MASK                   0x1
#define MT6335_RG_BUCK_18M_CK_PDN_SHIFT                  2
#define MT6335_RG_BUCK_32K_CK_PDN_MASK                   0x1
#define MT6335_RG_BUCK_32K_CK_PDN_SHIFT                  3
#define MT6335_RG_LDO_9M_CK_PDN_MASK                     0x1
#define MT6335_RG_LDO_9M_CK_PDN_SHIFT                    4
#define MT6335_RG_LDO_1M_CK_PDN_MASK                     0x1
#define MT6335_RG_LDO_1M_CK_PDN_SHIFT                    5
#define MT6335_RG_LDO_CALI_75K_CK_PDN_MASK               0x1
#define MT6335_RG_LDO_CALI_75K_CK_PDN_SHIFT              6
#define MT6335_RG_BUCK_ANA_CLK_PDN_MASK                  0x1
#define MT6335_RG_BUCK_ANA_CLK_PDN_SHIFT                 7
#define MT6335_RG_TRIM_75K_CK_PDN_MASK                   0x1
#define MT6335_RG_TRIM_75K_CK_PDN_SHIFT                  8
#define MT6335_RG_CHDET_75K_CK_PDN_MASK                  0x1
#define MT6335_RG_CHDET_75K_CK_PDN_SHIFT                 9
#define MT6335_RG_SPI_CK_PDN_MASK                        0x1
#define MT6335_RG_SPI_CK_PDN_SHIFT                       10
#define MT6335_RG_REG_CK_PDN_MASK                        0x1
#define MT6335_RG_REG_CK_PDN_SHIFT                       11
#define MT6335_RG_BGR_TEST_CK_PDN_MASK                   0x1
#define MT6335_RG_BGR_TEST_CK_PDN_SHIFT                  12
#define MT6335_RG_FQMTR_32K_CK_PDN_MASK                  0x1
#define MT6335_RG_FQMTR_32K_CK_PDN_SHIFT                 13
#define MT6335_RG_FQMTR_CK_PDN_MASK                      0x1
#define MT6335_RG_FQMTR_CK_PDN_SHIFT                     14
#define MT6335_RG_BUCK_ANA_CK_PDN_MASK                   0x1
#define MT6335_RG_BUCK_ANA_CK_PDN_SHIFT                  15
#define MT6335_TOP_CKPDN_CON1_SET_MASK                   0xFFFF
#define MT6335_TOP_CKPDN_CON1_SET_SHIFT                  0
#define MT6335_TOP_CKPDN_CON1_CLR_MASK                   0xFFFF
#define MT6335_TOP_CKPDN_CON1_CLR_SHIFT                  0
#define MT6335_RG_EOSC_CALI_TEST_CK_PDN_MASK             0x1
#define MT6335_RG_EOSC_CALI_TEST_CK_PDN_SHIFT            0
#define MT6335_RG_RTC_EOSC32_CK_PDN_MASK                 0x1
#define MT6335_RG_RTC_EOSC32_CK_PDN_SHIFT                1
#define MT6335_RG_RTCDET_CK_PDN_MASK                     0x1
#define MT6335_RG_RTCDET_CK_PDN_SHIFT                    2
#define MT6335_RG_RTC_75K_CK_PDN_MASK                    0x1
#define MT6335_RG_RTC_75K_CK_PDN_SHIFT                   3
#define MT6335_RG_RTC_MCLK_PDN_MASK                      0x1
#define MT6335_RG_RTC_MCLK_PDN_SHIFT                     4
#define MT6335_RG_RTC_32K_CK_PDN_MASK                    0x1
#define MT6335_RG_RTC_32K_CK_PDN_SHIFT                   5
#define MT6335_RG_RTC_26M_CK_PDN_MASK                    0x1
#define MT6335_RG_RTC_26M_CK_PDN_SHIFT                   6
#define MT6335_RG_FGADC_FT_CK_PDN_MASK                   0x1
#define MT6335_RG_FGADC_FT_CK_PDN_SHIFT                  7
#define MT6335_RG_FGADC_DIG_CK_PDN_MASK                  0x1
#define MT6335_RG_FGADC_DIG_CK_PDN_SHIFT                 8
#define MT6335_RG_FGADC_ANA_CK_PDN_MASK                  0x1
#define MT6335_RG_FGADC_ANA_CK_PDN_SHIFT                 9
#define MT6335_RG_STRUP_32K_CK_PDN_MASK                  0x1
#define MT6335_RG_STRUP_32K_CK_PDN_SHIFT                 10
#define MT6335_RG_STRUP_75K_CK_PDN_MASK                  0x1
#define MT6335_RG_STRUP_75K_CK_PDN_SHIFT                 11
#define MT6335_RG_RTC32K_1V8_0_O_PDN_MASK                0x1
#define MT6335_RG_RTC32K_1V8_0_O_PDN_SHIFT               12
#define MT6335_RG_RTC32K_1V8_1_O_PDN_MASK                0x1
#define MT6335_RG_RTC32K_1V8_1_O_PDN_SHIFT               13
#define MT6335_RG_RTC_2SEC_OFF_DET_PDN_MASK              0x1
#define MT6335_RG_RTC_2SEC_OFF_DET_PDN_SHIFT             14
#define MT6335_RG_SMPS_CK_DIV_PDN_MASK                   0x1
#define MT6335_RG_SMPS_CK_DIV_PDN_SHIFT                  15
#define MT6335_TOP_CKPDN_CON2_SET_MASK                   0xFFFF
#define MT6335_TOP_CKPDN_CON2_SET_SHIFT                  0
#define MT6335_TOP_CKPDN_CON2_CLR_MASK                   0xFFFF
#define MT6335_TOP_CKPDN_CON2_CLR_SHIFT                  0
#define MT6335_RG_BATON_75K_CK_PDN_MASK                  0x1
#define MT6335_RG_BATON_75K_CK_PDN_SHIFT                 0
#define MT6335_RG_EFUSE_CK_PDN_MASK                      0x1
#define MT6335_RG_EFUSE_CK_PDN_SHIFT                     1
#define MT6335_RG_TOP_CKPDN_CON3_RSV_MASK                0x3FFF
#define MT6335_RG_TOP_CKPDN_CON3_RSV_SHIFT               2
#define MT6335_TOP_CKPDN_CON3_SET_MASK                   0xFFFF
#define MT6335_TOP_CKPDN_CON3_SET_SHIFT                  0
#define MT6335_TOP_CKPDN_CON3_CLR_MASK                   0xFFFF
#define MT6335_TOP_CKPDN_CON3_CLR_SHIFT                  0
#define MT6335_RG_FQMTR_CK_CKSEL_MASK                    0x7
#define MT6335_RG_FQMTR_CK_CKSEL_SHIFT                   0
#define MT6335_RG_75K_32K_SEL_MASK                       0x1
#define MT6335_RG_75K_32K_SEL_SHIFT                      3
#define MT6335_RG_FGADC_ANA_CK_CKSEL_MASK                0x1
#define MT6335_RG_FGADC_ANA_CK_CKSEL_SHIFT               4
#define MT6335_RG_BGR_TEST_CK_CKSEL_MASK                 0x1
#define MT6335_RG_BGR_TEST_CK_CKSEL_SHIFT                5
#define MT6335_RG_TOP_CKSEL_CON0_RSV_MASK                0x3FF
#define MT6335_RG_TOP_CKSEL_CON0_RSV_SHIFT               6
#define MT6335_TOP_CKSEL_CON0_SET_MASK                   0xFFFF
#define MT6335_TOP_CKSEL_CON0_SET_SHIFT                  0
#define MT6335_TOP_CKSEL_CON0_CLR_MASK                   0xFFFF
#define MT6335_TOP_CKSEL_CON0_CLR_SHIFT                  0
#define MT6335_RG_SRCVOLTEN_SW_MASK                      0x1
#define MT6335_RG_SRCVOLTEN_SW_SHIFT                     0
#define MT6335_RG_BUCK_OSC_SEL_SW_MASK                   0x1
#define MT6335_RG_BUCK_OSC_SEL_SW_SHIFT                  2
#define MT6335_RG_VOWEN_SW_MASK                          0x1
#define MT6335_RG_VOWEN_SW_SHIFT                         3
#define MT6335_RG_SRCVOLTEN_MODE_MASK                    0x1
#define MT6335_RG_SRCVOLTEN_MODE_SHIFT                   4
#define MT6335_RG_BUCK_OSC_SEL_MODE_MASK                 0x1
#define MT6335_RG_BUCK_OSC_SEL_MODE_SHIFT                6
#define MT6335_RG_VOWEN_MODE_MASK                        0x1
#define MT6335_RG_VOWEN_MODE_SHIFT                       7
#define MT6335_RG_TOP_CKSEL_CON2_RSV_MASK                0xFF
#define MT6335_RG_TOP_CKSEL_CON2_RSV_SHIFT               8
#define MT6335_TOP_CKSEL_CON2_SET_MASK                   0xFFFF
#define MT6335_TOP_CKSEL_CON2_SET_SHIFT                  0
#define MT6335_TOP_CKSEL_CON2_CLR_MASK                   0xFFFF
#define MT6335_TOP_CKSEL_CON2_CLR_SHIFT                  0
#define MT6335_RG_AUXADC_CK_DIVSEL_MASK                  0x3
#define MT6335_RG_AUXADC_CK_DIVSEL_SHIFT                 0
#define MT6335_RG_LDO_9M_CK_DIVSEL_MASK                  0x1
#define MT6335_RG_LDO_9M_CK_DIVSEL_SHIFT                 2
#define MT6335_RG_BUCK_9M_CK_DIVSEL_MASK                 0x1
#define MT6335_RG_BUCK_9M_CK_DIVSEL_SHIFT                3
#define MT6335_RG_BIF_X4_CK_DIVSEL_MASK                  0x7
#define MT6335_RG_BIF_X4_CK_DIVSEL_SHIFT                 4
#define MT6335_RG_REG_CK_DIVSEL_MASK                     0x3
#define MT6335_RG_REG_CK_DIVSEL_SHIFT                    8
#define MT6335_TOP_CKDIVSEL_CON0_RSV_MASK                0x3F
#define MT6335_TOP_CKDIVSEL_CON0_RSV_SHIFT               10
#define MT6335_TOP_CKDIVSEL_CON0_SET_MASK                0xFFFF
#define MT6335_TOP_CKDIVSEL_CON0_SET_SHIFT               0
#define MT6335_TOP_CKDIVSEL_CON0_CLR_MASK                0xFFFF
#define MT6335_TOP_CKDIVSEL_CON0_CLR_SHIFT               0
#define MT6335_RG_G_SMPS_CK_PDN_HWEN_MASK                0x1
#define MT6335_RG_G_SMPS_CK_PDN_HWEN_SHIFT               0
#define MT6335_RG_SMPS_PD_1M_CK_PDN_HWEN_MASK            0x1
#define MT6335_RG_SMPS_PD_1M_CK_PDN_HWEN_SHIFT           1
#define MT6335_RG_AUXADC_CK_PDN_HWEN_MASK                0x1
#define MT6335_RG_AUXADC_CK_PDN_HWEN_SHIFT               2
#define MT6335_RG_AUXADC_RNG_CK_PDN_HWEN_MASK            0x1
#define MT6335_RG_AUXADC_RNG_CK_PDN_HWEN_SHIFT           3
#define MT6335_RG_BIF_X4_CK_PDN_HWEN_MASK                0x1
#define MT6335_RG_BIF_X4_CK_PDN_HWEN_SHIFT               4
#define MT6335_RG_BIF_X72_CK_PDN_HWEN_MASK               0x1
#define MT6335_RG_BIF_X72_CK_PDN_HWEN_SHIFT              5
#define MT6335_RG_RTC_26M_CK_PDN_HWEN_MASK               0x1
#define MT6335_RG_RTC_26M_CK_PDN_HWEN_SHIFT              6
#define MT6335_RG_REG_CK_PDN_HWEN_MASK                   0x1
#define MT6335_RG_REG_CK_PDN_HWEN_SHIFT                  7
#define MT6335_RG_EFUSE_CK_PDN_HWEN_MASK                 0x1
#define MT6335_RG_EFUSE_CK_PDN_HWEN_SHIFT                10
#define MT6335_TOP_CKHWEN_CON0_RSV_MASK                  0x1F
#define MT6335_TOP_CKHWEN_CON0_RSV_SHIFT                 11
#define MT6335_TOP_CKHWEN_CON0_SET_MASK                  0xFFFF
#define MT6335_TOP_CKHWEN_CON0_SET_SHIFT                 0
#define MT6335_TOP_CKHWEN_CON0_CLR_MASK                  0xFFFF
#define MT6335_TOP_CKHWEN_CON0_CLR_SHIFT                 0
#define MT6335_RG_BUCK_9M_CK_PDN_HWEN_MASK               0x1
#define MT6335_RG_BUCK_9M_CK_PDN_HWEN_SHIFT              0
#define MT6335_RG_BUCK_1M_CK_PDN_HWEN_MASK               0x1
#define MT6335_RG_BUCK_1M_CK_PDN_HWEN_SHIFT              1
#define MT6335_RG_BUCK_18M_CK_PDN_HWEN_MASK              0x1
#define MT6335_RG_BUCK_18M_CK_PDN_HWEN_SHIFT             2
#define MT6335_RG_LDO_1M_CK_PDN_HWEN_MASK                0x1
#define MT6335_RG_LDO_1M_CK_PDN_HWEN_SHIFT               4
#define MT6335_RG_LDO_9M_CK_PDN_HWEN_MASK                0x1
#define MT6335_RG_LDO_9M_CK_PDN_HWEN_SHIFT               5
#define MT6335_RG_BUCK_VMODEM_1M_CK_PDN_HWEN_MASK        0x1
#define MT6335_RG_BUCK_VMODEM_1M_CK_PDN_HWEN_SHIFT       6
#define MT6335_TOP_CKHWEN_RSV_MASK                       0x1FF
#define MT6335_TOP_CKHWEN_RSV_SHIFT                      7
#define MT6335_TOP_CKHWEN_CON1_SET_MASK                  0xFFFF
#define MT6335_TOP_CKHWEN_CON1_SET_SHIFT                 0
#define MT6335_TOP_CKHWEN_CON1_CLR_MASK                  0xFFFF
#define MT6335_TOP_CKHWEN_CON1_CLR_SHIFT                 0
#define MT6335_RG_VCORE_FREQ_SEL_MASK                    0x3
#define MT6335_RG_VCORE_FREQ_SEL_SHIFT                   0
#define MT6335_RG_VDRAM_FREQ_SEL_MASK                    0x3
#define MT6335_RG_VDRAM_FREQ_SEL_SHIFT                   2
#define MT6335_RG_VMODEM_FREQ_SEL_MASK                   0x3
#define MT6335_RG_VMODEM_FREQ_SEL_SHIFT                  4
#define MT6335_RG_VMD1_FREQ_SEL_MASK                     0x3
#define MT6335_RG_VMD1_FREQ_SEL_SHIFT                    6
#define MT6335_TOP_BUCK_ANACK_FREQ_SEL_CON0_RSV_MASK     0xFF
#define MT6335_TOP_BUCK_ANACK_FREQ_SEL_CON0_RSV_SHIFT    8
#define MT6335_TOP_BUCK_ANACK_FREQ_SEL_CON0_SET_MASK     0xFFFF
#define MT6335_TOP_BUCK_ANACK_FREQ_SEL_CON0_SET_SHIFT    0
#define MT6335_TOP_BUCK_ANACK_FREQ_SEL_CON0_CLR_MASK     0xFFFF
#define MT6335_TOP_BUCK_ANACK_FREQ_SEL_CON0_CLR_SHIFT    0
#define MT6335_RG_PMU75K_CK_TST_DIS_MASK                 0x1
#define MT6335_RG_PMU75K_CK_TST_DIS_SHIFT                0
#define MT6335_RG_SMPS_CK_TST_DIS_MASK                   0x1
#define MT6335_RG_SMPS_CK_TST_DIS_SHIFT                  1
#define MT6335_RG_RTC32K_CK_TST_DIS_MASK                 0x1
#define MT6335_RG_RTC32K_CK_TST_DIS_SHIFT                2
#define MT6335_RG_FG_CK_TST_DIS_MASK                     0x1
#define MT6335_RG_FG_CK_TST_DIS_SHIFT                    3
#define MT6335_RG_RTC26M_CK_TST_DIS_MASK                 0x1
#define MT6335_RG_RTC26M_CK_TST_DIS_SHIFT                4
#define MT6335_TOP_CKTST_CON0_RSV_MASK                   0x3FF
#define MT6335_TOP_CKTST_CON0_RSV_SHIFT                  5
#define MT6335_RG_BUCK_ANA_AUTO_OFF_DIS_MASK             0x1
#define MT6335_RG_BUCK_ANA_AUTO_OFF_DIS_SHIFT            15
#define MT6335_RG_AUXADC_CK_TSTSEL_MASK                  0x1
#define MT6335_RG_AUXADC_CK_TSTSEL_SHIFT                 0
#define MT6335_RG_FQMTR_CK_TSTSEL_MASK                   0x1
#define MT6335_RG_FQMTR_CK_TSTSEL_SHIFT                  1
#define MT6335_RG_RTCDET_CK_TSTSEL_MASK                  0x1
#define MT6335_RG_RTCDET_CK_TSTSEL_SHIFT                 2
#define MT6335_RG_RTC_EOSC32_CK_TSTSEL_MASK              0x1
#define MT6335_RG_RTC_EOSC32_CK_TSTSEL_SHIFT             3
#define MT6335_RG_EOSC_CALI_TEST_CK_TSTSEL_MASK          0x1
#define MT6335_RG_EOSC_CALI_TEST_CK_TSTSEL_SHIFT         4
#define MT6335_RG_RTC26M_CK_TSTSEL_MASK                  0x1
#define MT6335_RG_RTC26M_CK_TSTSEL_SHIFT                 5
#define MT6335_RG_RTC32K_CK_TSTSEL_MASK                  0x1
#define MT6335_RG_RTC32K_CK_TSTSEL_SHIFT                 6
#define MT6335_RG_FG_CK_TSTSEL_MASK                      0x1
#define MT6335_RG_FG_CK_TSTSEL_SHIFT                     7
#define MT6335_RG_FGADC_ANA_CK_TSTSEL_MASK               0x1
#define MT6335_RG_FGADC_ANA_CK_TSTSEL_SHIFT              8
#define MT6335_RG_BGR_TEST_CK_TSTSEL_MASK                0x1
#define MT6335_RG_BGR_TEST_CK_TSTSEL_SHIFT               9
#define MT6335_RG_PMU75K_CK_TSTSEL_MASK                  0x1
#define MT6335_RG_PMU75K_CK_TSTSEL_SHIFT                 10
#define MT6335_RG_SMPS_CK_TSTSEL_MASK                    0x1
#define MT6335_RG_SMPS_CK_TSTSEL_SHIFT                   11
#define MT6335_TOP_CKTST_CON1_RSV_MASK                   0xF
#define MT6335_TOP_CKTST_CON1_RSV_SHIFT                  12
#define MT6335_RG_CLKSQ_EN_AUD_MASK                      0x1
#define MT6335_RG_CLKSQ_EN_AUD_SHIFT                     0
#define MT6335_RG_CLKSQ_EN_FQR_MASK                      0x1
#define MT6335_RG_CLKSQ_EN_FQR_SHIFT                     1
#define MT6335_RG_CLKSQ_EN_AUX_AP_MASK                   0x1
#define MT6335_RG_CLKSQ_EN_AUX_AP_SHIFT                  2
#define MT6335_RG_CLKSQ_EN_AUX_MD_MASK                   0x1
#define MT6335_RG_CLKSQ_EN_AUX_MD_SHIFT                  3
#define MT6335_RG_CLKSQ_EN_AUX_GPS_MASK                  0x1
#define MT6335_RG_CLKSQ_EN_AUX_GPS_SHIFT                 4
#define MT6335_RG_CLKSQ_EN_AUX_RSV_MASK                  0x1
#define MT6335_RG_CLKSQ_EN_AUX_RSV_SHIFT                 5
#define MT6335_RG_CLKSQ_EN_AUX_AP_MODE_MASK              0x1
#define MT6335_RG_CLKSQ_EN_AUX_AP_MODE_SHIFT             8
#define MT6335_RG_CLKSQ_EN_AUX_MD_MODE_MASK              0x1
#define MT6335_RG_CLKSQ_EN_AUX_MD_MODE_SHIFT             9
#define MT6335_RG_CLKSQ_IN_SEL_VA18_MASK                 0x1
#define MT6335_RG_CLKSQ_IN_SEL_VA18_SHIFT                10
#define MT6335_RG_CLKSQ_IN_SEL_VA18_SWCTRL_MASK          0x1
#define MT6335_RG_CLKSQ_IN_SEL_VA18_SWCTRL_SHIFT         11
#define MT6335_TOP_CLKSQ_RSV_MASK                        0x7
#define MT6335_TOP_CLKSQ_RSV_SHIFT                       12
#define MT6335_DA_CLKSQ_EN_VA18_MASK                     0x1
#define MT6335_DA_CLKSQ_EN_VA18_SHIFT                    15
#define MT6335_TOP_CLKSQ_SET_MASK                        0xFFFF
#define MT6335_TOP_CLKSQ_SET_SHIFT                       0
#define MT6335_TOP_CLKSQ_CLR_MASK                        0xFFFF
#define MT6335_TOP_CLKSQ_CLR_SHIFT                       0
#define MT6335_RG_CLKSQ_RTC_EN_MASK                      0x1
#define MT6335_RG_CLKSQ_RTC_EN_SHIFT                     0
#define MT6335_RG_CLKSQ_RTC_EN_HW_MODE_MASK              0x1
#define MT6335_RG_CLKSQ_RTC_EN_HW_MODE_SHIFT             1
#define MT6335_TOP_CLKSQ_RTC_RSV0_MASK                   0xF
#define MT6335_TOP_CLKSQ_RTC_RSV0_SHIFT                  2
#define MT6335_RG_ENBB_SEL_MASK                          0x1
#define MT6335_RG_ENBB_SEL_SHIFT                         8
#define MT6335_RG_XOSC_EN_SEL_MASK                       0x1
#define MT6335_RG_XOSC_EN_SEL_SHIFT                      9
#define MT6335_TOP_CLKSQ_RTC_RSV1_MASK                   0x3
#define MT6335_TOP_CLKSQ_RTC_RSV1_SHIFT                  10
#define MT6335_DA_CLKSQ_EN_VDIG18_MASK                   0x1
#define MT6335_DA_CLKSQ_EN_VDIG18_SHIFT                  15
#define MT6335_TOP_CLKSQ_RTC_SET_MASK                    0xFFFF
#define MT6335_TOP_CLKSQ_RTC_SET_SHIFT                   0
#define MT6335_TOP_CLKSQ_RTC_CLR_MASK                    0xFFFF
#define MT6335_TOP_CLKSQ_RTC_CLR_SHIFT                   0
#define MT6335_RG_OSC_75K_TRIM_MASK                      0x3F
#define MT6335_RG_OSC_75K_TRIM_SHIFT                     0
#define MT6335_RG_OSC_75K_TRIM_EN_MASK                   0x1
#define MT6335_RG_OSC_75K_TRIM_EN_SHIFT                  6
#define MT6335_RG_OSC_75K_TRIM_RATE_MASK                 0x3
#define MT6335_RG_OSC_75K_TRIM_RATE_SHIFT                7
#define MT6335_DA_OSC_75K_TRIM_MASK                      0x3F
#define MT6335_DA_OSC_75K_TRIM_SHIFT                     9
#define MT6335_RG_G_SMPS_CK_PDN_SRCLKEN0_EN_MASK         0x1
#define MT6335_RG_G_SMPS_CK_PDN_SRCLKEN0_EN_SHIFT        0
#define MT6335_RG_G_SMPS_CK_PDN_SRCLKEN1_EN_MASK         0x1
#define MT6335_RG_G_SMPS_CK_PDN_SRCLKEN1_EN_SHIFT        1
#define MT6335_RG_G_SMPS_CK_PDN_SRCLKEN2_EN_MASK         0x1
#define MT6335_RG_G_SMPS_CK_PDN_SRCLKEN2_EN_SHIFT        2
#define MT6335_RG_G_SMPS_CK_PDN_BUCK_OSC_SEL_EN_MASK     0x1
#define MT6335_RG_G_SMPS_CK_PDN_BUCK_OSC_SEL_EN_SHIFT    3
#define MT6335_RG_G_SMPS_CK_PDN_VOWEN_EN_MASK            0x1
#define MT6335_RG_G_SMPS_CK_PDN_VOWEN_EN_SHIFT           4
#define MT6335_RG_OSC_SEL_SRCLKEN0_EN_MASK               0x1
#define MT6335_RG_OSC_SEL_SRCLKEN0_EN_SHIFT              5
#define MT6335_RG_OSC_SEL_SRCLKEN1_EN_MASK               0x1
#define MT6335_RG_OSC_SEL_SRCLKEN1_EN_SHIFT              6
#define MT6335_RG_OSC_SEL_SRCLKEN2_EN_MASK               0x1
#define MT6335_RG_OSC_SEL_SRCLKEN2_EN_SHIFT              7
#define MT6335_RG_OSC_SEL_BUCK_LDO_EN_MASK               0x1
#define MT6335_RG_OSC_SEL_BUCK_LDO_EN_SHIFT              8
#define MT6335_RG_OSC_SEL_VOWEN_EN_MASK                  0x1
#define MT6335_RG_OSC_SEL_VOWEN_EN_SHIFT                 9
#define MT6335_RG_OSC_SEL_SPI_EN_MASK                    0x1
#define MT6335_RG_OSC_SEL_SPI_EN_SHIFT                   10
#define MT6335_RG_CLK_RSV_MASK                           0x1F
#define MT6335_RG_CLK_RSV_SHIFT                          11
#define MT6335_TOP_CLK_CON0_SET_MASK                     0xFFFF
#define MT6335_TOP_CLK_CON0_SET_SHIFT                    0
#define MT6335_TOP_CLK_CON0_CLR_MASK                     0xFFFF
#define MT6335_TOP_CLK_CON0_CLR_SHIFT                    0
#define MT6335_RG_CLKCTL_RSV0_MASK                       0xFFFF
#define MT6335_RG_CLKCTL_RSV0_SHIFT                      0
#define MT6335_TOP_CLK_CON1_SET_MASK                     0xFFFF
#define MT6335_TOP_CLK_CON1_SET_SHIFT                    0
#define MT6335_TOP_CLK_CON1_CLR_MASK                     0xFFFF
#define MT6335_TOP_CLK_CON1_CLR_SHIFT                    0
#define MT6335_RG_DCXO_PWRKEY_RSTB_SEL_MASK              0x1
#define MT6335_RG_DCXO_PWRKEY_RSTB_SEL_SHIFT             0
#define MT6335_RG_EFUSE_MAN_RST_MASK                     0x1
#define MT6335_RG_EFUSE_MAN_RST_SHIFT                    0
#define MT6335_RG_AUXADC_RST_MASK                        0x1
#define MT6335_RG_AUXADC_RST_SHIFT                       1
#define MT6335_RG_AUXADC_REG_RST_MASK                    0x1
#define MT6335_RG_AUXADC_REG_RST_SHIFT                   2
#define MT6335_RG_AUDIO_RST_MASK                         0x1
#define MT6335_RG_AUDIO_RST_SHIFT                        3
#define MT6335_RG_ACCDET_RST_MASK                        0x1
#define MT6335_RG_ACCDET_RST_SHIFT                       4
#define MT6335_RG_BIF_RST_MASK                           0x1
#define MT6335_RG_BIF_RST_SHIFT                          5
#define MT6335_RG_DRIVER_RST_MASK                        0x1
#define MT6335_RG_DRIVER_RST_SHIFT                       6
#define MT6335_RG_FGADC_RST_MASK                         0x1
#define MT6335_RG_FGADC_RST_SHIFT                        7
#define MT6335_RG_FQMTR_RST_MASK                         0x1
#define MT6335_RG_FQMTR_RST_SHIFT                        8
#define MT6335_RG_RTC_RST_MASK                           0x1
#define MT6335_RG_RTC_RST_SHIFT                          9
#define MT6335_RG_TYPE_C_CC_RST_MASK                     0x1
#define MT6335_RG_TYPE_C_CC_RST_SHIFT                    10
#define MT6335_RG_CHRWDT_RST_MASK                        0x1
#define MT6335_RG_CHRWDT_RST_SHIFT                       11
#define MT6335_RG_ZCD_RST_MASK                           0x1
#define MT6335_RG_ZCD_RST_SHIFT                          12
#define MT6335_RG_AUDNCP_RST_MASK                        0x1
#define MT6335_RG_AUDNCP_RST_SHIFT                       13
#define MT6335_RG_CLK_TRIM_RST_MASK                      0x1
#define MT6335_RG_CLK_TRIM_RST_SHIFT                     14
#define MT6335_RG_BUCK_SRCLKEN_RST_MASK                  0x1
#define MT6335_RG_BUCK_SRCLKEN_RST_SHIFT                 15
#define MT6335_TOP_RST_CON0_SET_MASK                     0xFFFF
#define MT6335_TOP_RST_CON0_SET_SHIFT                    0
#define MT6335_TOP_RST_CON0_CLR_MASK                     0xFFFF
#define MT6335_TOP_RST_CON0_CLR_SHIFT                    0
#define MT6335_RG_STRUP_LONG_PRESS_RST_MASK              0x1
#define MT6335_RG_STRUP_LONG_PRESS_RST_SHIFT             0
#define MT6335_RG_BUCK_PROT_PMPP_RST_MASK                0x1
#define MT6335_RG_BUCK_PROT_PMPP_RST_SHIFT               1
#define MT6335_RG_SPK_RST_MASK                           0x1
#define MT6335_RG_SPK_RST_SHIFT                          2
#define MT6335_RG_CHRDET_RST_MASK                        0x1
#define MT6335_RG_CHRDET_RST_SHIFT                       3
#define MT6335_RG_BUCK_LDO_FT_TESTMODE_RST_MASK          0x1
#define MT6335_RG_BUCK_LDO_FT_TESTMODE_RST_SHIFT         4
#define MT6335_RG_BATON_RST_MASK                         0x1
#define MT6335_RG_BATON_RST_SHIFT                        5
#define MT6335_RG_FGADC_RST_SRC_SEL_MASK                 0x1
#define MT6335_RG_FGADC_RST_SRC_SEL_SHIFT                6
#define MT6335_RG_LDO_CALI_RST_MASK                      0x1
#define MT6335_RG_LDO_CALI_RST_SHIFT                     7
#define MT6335_TOP_RST_CON1_RSV_MASK                     0x1
#define MT6335_TOP_RST_CON1_RSV_SHIFT                    8
#define MT6335_TOP_RST_CON1_SET_MASK                     0xFFFF
#define MT6335_TOP_RST_CON1_SET_SHIFT                    0
#define MT6335_TOP_RST_CON1_CLR_MASK                     0xFFFF
#define MT6335_TOP_RST_CON1_CLR_SHIFT                    0
#define MT6335_RG_CHR_LDO_DET_MODE_MASK                  0x1
#define MT6335_RG_CHR_LDO_DET_MODE_SHIFT                 0
#define MT6335_RG_CHR_LDO_DET_SW_MASK                    0x1
#define MT6335_RG_CHR_LDO_DET_SW_SHIFT                   1
#define MT6335_RG_CHRWDT_FLAG_MODE_MASK                  0x1
#define MT6335_RG_CHRWDT_FLAG_MODE_SHIFT                 2
#define MT6335_RG_CHRWDT_FLAG_SW_MASK                    0x1
#define MT6335_RG_CHRWDT_FLAG_SW_SHIFT                   3
#define MT6335_TOP_RST_CON2_RSV_MASK                     0xF
#define MT6335_TOP_RST_CON2_RSV_SHIFT                    4
#define MT6335_RG_WDTRSTB_EN_MASK                        0x1
#define MT6335_RG_WDTRSTB_EN_SHIFT                       0
#define MT6335_RG_WDTRSTB_MODE_MASK                      0x1
#define MT6335_RG_WDTRSTB_MODE_SHIFT                     1
#define MT6335_WDTRSTB_STATUS_MASK                       0x1
#define MT6335_WDTRSTB_STATUS_SHIFT                      2
#define MT6335_WDTRSTB_STATUS_CLR_MASK                   0x1
#define MT6335_WDTRSTB_STATUS_CLR_SHIFT                  3
#define MT6335_RG_WDTRSTB_FB_EN_MASK                     0x1
#define MT6335_RG_WDTRSTB_FB_EN_SHIFT                    4
#define MT6335_RG_WDTRSTB_DEB_MASK                       0x1
#define MT6335_RG_WDTRSTB_DEB_SHIFT                      5
#define MT6335_RG_HOMEKEY_RST_EN_MASK                    0x1
#define MT6335_RG_HOMEKEY_RST_EN_SHIFT                   8
#define MT6335_RG_PWRKEY_RST_EN_MASK                     0x1
#define MT6335_RG_PWRKEY_RST_EN_SHIFT                    9
#define MT6335_RG_PWRRST_TMR_DIS_MASK                    0x1
#define MT6335_RG_PWRRST_TMR_DIS_SHIFT                   10
#define MT6335_RG_PWRKEY_RST_TD_MASK                     0x3
#define MT6335_RG_PWRKEY_RST_TD_SHIFT                    12
#define MT6335_TOP_RST_MISC_RSV_MASK                     0x3
#define MT6335_TOP_RST_MISC_RSV_SHIFT                    14
#define MT6335_TOP_RST_MISC_SET_MASK                     0xFFFF
#define MT6335_TOP_RST_MISC_SET_SHIFT                    0
#define MT6335_TOP_RST_MISC_CLR_MASK                     0xFFFF
#define MT6335_TOP_RST_MISC_CLR_SHIFT                    0
#define MT6335_VPWRIN_RSTB_STATUS_MASK                   0x1
#define MT6335_VPWRIN_RSTB_STATUS_SHIFT                  0
#define MT6335_DDLO_RSTB_STATUS_MASK                     0x1
#define MT6335_DDLO_RSTB_STATUS_SHIFT                    1
#define MT6335_UVLO_RSTB_STATUS_MASK                     0x1
#define MT6335_UVLO_RSTB_STATUS_SHIFT                    2
#define MT6335_RTC_DDLO_RSTB_STATUS_MASK                 0x1
#define MT6335_RTC_DDLO_RSTB_STATUS_SHIFT                3
#define MT6335_CHRWDT_REG_RSTB_STATUS_MASK               0x1
#define MT6335_CHRWDT_REG_RSTB_STATUS_SHIFT              4
#define MT6335_CHRDET_REG_RSTB_STATUS_MASK               0x1
#define MT6335_CHRDET_REG_RSTB_STATUS_SHIFT              5
#define MT6335_BWDT_DDLO_RSTB_STATUS_MASK                0x1
#define MT6335_BWDT_DDLO_RSTB_STATUS_SHIFT               6
#define MT6335_TOP_RST_STATUS_RSV_MASK                   0x1
#define MT6335_TOP_RST_STATUS_RSV_SHIFT                  7
#define MT6335_TOP_RST_STATUS_SET_MASK                   0xFFFF
#define MT6335_TOP_RST_STATUS_SET_SHIFT                  0
#define MT6335_TOP_RST_STATUS_CLR_MASK                   0xFFFF
#define MT6335_TOP_RST_STATUS_CLR_SHIFT                  0
#define MT6335_TOP_RST_RSV_CON0_MASK                     0xFFFF
#define MT6335_TOP_RST_RSV_CON0_SHIFT                    0
#define MT6335_TOP_RST_RSV_CON1_MASK                     0xFFFF
#define MT6335_TOP_RST_RSV_CON1_SHIFT                    0
#define MT6335_RG_INT_EN_PWRKEY_MASK                     0x1
#define MT6335_RG_INT_EN_PWRKEY_SHIFT                    0
#define MT6335_RG_INT_EN_HOMEKEY_MASK                    0x1
#define MT6335_RG_INT_EN_HOMEKEY_SHIFT                   1
#define MT6335_RG_INT_EN_PWRKEY_R_MASK                   0x1
#define MT6335_RG_INT_EN_PWRKEY_R_SHIFT                  2
#define MT6335_RG_INT_EN_HOMEKEY_R_MASK                  0x1
#define MT6335_RG_INT_EN_HOMEKEY_R_SHIFT                 3
#define MT6335_RG_INT_EN_NI_LBAT_INT_MASK                0x1
#define MT6335_RG_INT_EN_NI_LBAT_INT_SHIFT               4
#define MT6335_RG_INT_EN_CHRDET_MASK                     0x1
#define MT6335_RG_INT_EN_CHRDET_SHIFT                    5
#define MT6335_RG_INT_EN_CHRDET_EDGE_MASK                0x1
#define MT6335_RG_INT_EN_CHRDET_EDGE_SHIFT               6
#define MT6335_RG_INT_EN_BATON_LV_MASK                   0x1
#define MT6335_RG_INT_EN_BATON_LV_SHIFT                  7
#define MT6335_RG_INT_EN_BATON_HV_MASK                   0x1
#define MT6335_RG_INT_EN_BATON_HV_SHIFT                  8
#define MT6335_RG_INT_EN_BATON_BAT_IN_MASK               0x1
#define MT6335_RG_INT_EN_BATON_BAT_IN_SHIFT              9
#define MT6335_RG_INT_EN_BATON_BAT_OUT_MASK              0x1
#define MT6335_RG_INT_EN_BATON_BAT_OUT_SHIFT             10
#define MT6335_RG_INT_EN_RTC_MASK                        0x1
#define MT6335_RG_INT_EN_RTC_SHIFT                       11
#define MT6335_RG_INT_EN_BIF_MASK                        0x1
#define MT6335_RG_INT_EN_BIF_SHIFT                       12
#define MT6335_RG_INT_EN_VCDT_HV_DET_MASK                0x1
#define MT6335_RG_INT_EN_VCDT_HV_DET_SHIFT               13
#define MT6335_INT_CON0_SET_MASK                         0xFFFF
#define MT6335_INT_CON0_SET_SHIFT                        0
#define MT6335_INT_CON0_CLR_MASK                         0xFFFF
#define MT6335_INT_CON0_CLR_SHIFT                        0
#define MT6335_RG_INT_EN_THR_H_MASK                      0x1
#define MT6335_RG_INT_EN_THR_H_SHIFT                     0
#define MT6335_RG_INT_EN_THR_L_MASK                      0x1
#define MT6335_RG_INT_EN_THR_L_SHIFT                     1
#define MT6335_RG_INT_EN_BAT_H_MASK                      0x1
#define MT6335_RG_INT_EN_BAT_H_SHIFT                     2
#define MT6335_RG_INT_EN_BAT_L_MASK                      0x1
#define MT6335_RG_INT_EN_BAT_L_SHIFT                     3
#define MT6335_RG_INT_EN_BAT2_H_MASK                     0x1
#define MT6335_RG_INT_EN_BAT2_H_SHIFT                    4
#define MT6335_RG_INT_EN_BAT2_L_MASK                     0x1
#define MT6335_RG_INT_EN_BAT2_L_SHIFT                    5
#define MT6335_RG_INT_EN_BAT_TEMP_H_MASK                 0x1
#define MT6335_RG_INT_EN_BAT_TEMP_H_SHIFT                6
#define MT6335_RG_INT_EN_BAT_TEMP_L_MASK                 0x1
#define MT6335_RG_INT_EN_BAT_TEMP_L_SHIFT                7
#define MT6335_RG_INT_EN_AUXADC_IMP_MASK                 0x1
#define MT6335_RG_INT_EN_AUXADC_IMP_SHIFT                8
#define MT6335_RG_INT_EN_NAG_C_DLTV_MASK                 0x1
#define MT6335_RG_INT_EN_NAG_C_DLTV_SHIFT                9
#define MT6335_RG_INT_EN_JEITA_HOT_MASK                  0x1
#define MT6335_RG_INT_EN_JEITA_HOT_SHIFT                 10
#define MT6335_RG_INT_EN_JEITA_WARM_MASK                 0x1
#define MT6335_RG_INT_EN_JEITA_WARM_SHIFT                11
#define MT6335_RG_INT_EN_JEITA_COOL_MASK                 0x1
#define MT6335_RG_INT_EN_JEITA_COOL_SHIFT                12
#define MT6335_RG_INT_EN_JEITA_COLD_MASK                 0x1
#define MT6335_RG_INT_EN_JEITA_COLD_SHIFT                13
#define MT6335_INT_CON1_SET_MASK                         0xFFFF
#define MT6335_INT_CON1_SET_SHIFT                        0
#define MT6335_INT_CON1_CLR_MASK                         0xFFFF
#define MT6335_INT_CON1_CLR_SHIFT                        0
#define MT6335_RG_INT_EN_VCORE_OC_MASK                   0x1
#define MT6335_RG_INT_EN_VCORE_OC_SHIFT                  0
#define MT6335_RG_INT_EN_VMD1_OC_MASK                    0x1
#define MT6335_RG_INT_EN_VMD1_OC_SHIFT                   1
#define MT6335_RG_INT_EN_VMODEM_OC_MASK                  0x1
#define MT6335_RG_INT_EN_VMODEM_OC_SHIFT                 2
#define MT6335_RG_INT_EN_VS1_OC_MASK                     0x1
#define MT6335_RG_INT_EN_VS1_OC_SHIFT                    3
#define MT6335_RG_INT_EN_VS2_OC_MASK                     0x1
#define MT6335_RG_INT_EN_VS2_OC_SHIFT                    4
#define MT6335_RG_INT_EN_VDRAM_OC_MASK                   0x1
#define MT6335_RG_INT_EN_VDRAM_OC_SHIFT                  5
#define MT6335_RG_INT_EN_VPA1_OC_MASK                    0x1
#define MT6335_RG_INT_EN_VPA1_OC_SHIFT                   6
#define MT6335_RG_INT_EN_VPA2_OC_MASK                    0x1
#define MT6335_RG_INT_EN_VPA2_OC_SHIFT                   7
#define MT6335_RG_INT_EN_VCORE_PREOC_MASK                0x1
#define MT6335_RG_INT_EN_VCORE_PREOC_SHIFT               8
#define MT6335_RG_INT_EN_VA10_OC_MASK                    0x1
#define MT6335_RG_INT_EN_VA10_OC_SHIFT                   9
#define MT6335_RG_INT_EN_VA12_OC_MASK                    0x1
#define MT6335_RG_INT_EN_VA12_OC_SHIFT                   10
#define MT6335_RG_INT_EN_VA18_OC_MASK                    0x1
#define MT6335_RG_INT_EN_VA18_OC_SHIFT                   11
#define MT6335_RG_INT_EN_VBIF28_OC_MASK                  0x1
#define MT6335_RG_INT_EN_VBIF28_OC_SHIFT                 12
#define MT6335_RG_INT_EN_VCAMA1_OC_MASK                  0x1
#define MT6335_RG_INT_EN_VCAMA1_OC_SHIFT                 13
#define MT6335_RG_INT_EN_VCAMA2_OC_MASK                  0x1
#define MT6335_RG_INT_EN_VCAMA2_OC_SHIFT                 14
#define MT6335_RG_INT_EN_VCAMAF_OC_MASK                  0x1
#define MT6335_RG_INT_EN_VCAMAF_OC_SHIFT                 15
#define MT6335_INT_CON2_SET_MASK                         0xFFFF
#define MT6335_INT_CON2_SET_SHIFT                        0
#define MT6335_INT_CON2_CLR_MASK                         0xFFFF
#define MT6335_INT_CON2_CLR_SHIFT                        0
#define MT6335_RG_INT_EN_VCAMD1_OC_MASK                  0x1
#define MT6335_RG_INT_EN_VCAMD1_OC_SHIFT                 0
#define MT6335_RG_INT_EN_VCAMD2_OC_MASK                  0x1
#define MT6335_RG_INT_EN_VCAMD2_OC_SHIFT                 1
#define MT6335_RG_INT_EN_VCAMIO_OC_MASK                  0x1
#define MT6335_RG_INT_EN_VCAMIO_OC_SHIFT                 2
#define MT6335_RG_INT_EN_VCN18_OC_MASK                   0x1
#define MT6335_RG_INT_EN_VCN18_OC_SHIFT                  3
#define MT6335_RG_INT_EN_VCN28_OC_MASK                   0x1
#define MT6335_RG_INT_EN_VCN28_OC_SHIFT                  4
#define MT6335_RG_INT_EN_VCN33_OC_MASK                   0x1
#define MT6335_RG_INT_EN_VCN33_OC_SHIFT                  5
#define MT6335_RG_INT_EN_VEFUSE_OC_MASK                  0x1
#define MT6335_RG_INT_EN_VEFUSE_OC_SHIFT                 6
#define MT6335_RG_INT_EN_VEMC_OC_MASK                    0x1
#define MT6335_RG_INT_EN_VEMC_OC_SHIFT                   7
#define MT6335_RG_INT_EN_VFE28_OC_MASK                   0x1
#define MT6335_RG_INT_EN_VFE28_OC_SHIFT                  8
#define MT6335_RG_INT_EN_VGP3_OC_MASK                    0x1
#define MT6335_RG_INT_EN_VGP3_OC_SHIFT                   9
#define MT6335_RG_INT_EN_VIBR_OC_MASK                    0x1
#define MT6335_RG_INT_EN_VIBR_OC_SHIFT                   10
#define MT6335_RG_INT_EN_VIO18_OC_MASK                   0x1
#define MT6335_RG_INT_EN_VIO18_OC_SHIFT                  11
#define MT6335_RG_INT_EN_VIO28_OC_MASK                   0x1
#define MT6335_RG_INT_EN_VIO28_OC_SHIFT                  12
#define MT6335_RG_INT_EN_VMC_OC_MASK                     0x1
#define MT6335_RG_INT_EN_VMC_OC_SHIFT                    13
#define MT6335_RG_INT_EN_VMCH_OC_MASK                    0x1
#define MT6335_RG_INT_EN_VMCH_OC_SHIFT                   14
#define MT6335_RG_INT_EN_VMIPI_OC_MASK                   0x1
#define MT6335_RG_INT_EN_VMIPI_OC_SHIFT                  15
#define MT6335_INT_CON3_SET_MASK                         0xFFFF
#define MT6335_INT_CON3_SET_SHIFT                        0
#define MT6335_INT_CON3_CLR_MASK                         0xFFFF
#define MT6335_INT_CON3_CLR_SHIFT                        0
#define MT6335_RG_INT_EN_VRF12_OC_MASK                   0x1
#define MT6335_RG_INT_EN_VRF12_OC_SHIFT                  0
#define MT6335_RG_INT_EN_VRF18_1_OC_MASK                 0x1
#define MT6335_RG_INT_EN_VRF18_1_OC_SHIFT                1
#define MT6335_RG_INT_EN_VRF18_2_OC_MASK                 0x1
#define MT6335_RG_INT_EN_VRF18_2_OC_SHIFT                2
#define MT6335_RG_INT_EN_VSIM1_OC_MASK                   0x1
#define MT6335_RG_INT_EN_VSIM1_OC_SHIFT                  3
#define MT6335_RG_INT_EN_VSIM2_OC_MASK                   0x1
#define MT6335_RG_INT_EN_VSIM2_OC_SHIFT                  4
#define MT6335_RG_INT_EN_VSRAM_CORE_OC_MASK              0x1
#define MT6335_RG_INT_EN_VSRAM_CORE_OC_SHIFT             5
#define MT6335_RG_INT_EN_VSRAM_DVFS1_OC_MASK             0x1
#define MT6335_RG_INT_EN_VSRAM_DVFS1_OC_SHIFT            6
#define MT6335_RG_INT_EN_VSRAM_DVFS2_OC_MASK             0x1
#define MT6335_RG_INT_EN_VSRAM_DVFS2_OC_SHIFT            7
#define MT6335_RG_INT_EN_VSRAM_GPU_OC_MASK               0x1
#define MT6335_RG_INT_EN_VSRAM_GPU_OC_SHIFT              8
#define MT6335_RG_INT_EN_VSRAM_MD_OC_MASK                0x1
#define MT6335_RG_INT_EN_VSRAM_MD_OC_SHIFT               9
#define MT6335_RG_INT_EN_VUFS18_OC_MASK                  0x1
#define MT6335_RG_INT_EN_VUFS18_OC_SHIFT                 10
#define MT6335_RG_INT_EN_VUSB33_OC_MASK                  0x1
#define MT6335_RG_INT_EN_VUSB33_OC_SHIFT                 11
#define MT6335_RG_INT_EN_VXO22_OC_MASK                   0x1
#define MT6335_RG_INT_EN_VXO22_OC_SHIFT                  12
#define MT6335_RG_INT_EN_CON4_MASK                       0x7
#define MT6335_RG_INT_EN_CON4_SHIFT                      13
#define MT6335_INT_CON4_SET_MASK                         0xFFFF
#define MT6335_INT_CON4_SET_SHIFT                        0
#define MT6335_INT_CON4_CLR_MASK                         0xFFFF
#define MT6335_INT_CON4_CLR_SHIFT                        0
#define MT6335_RG_INT_EN_FG_BAT0_H_MASK                  0x1
#define MT6335_RG_INT_EN_FG_BAT0_H_SHIFT                 0
#define MT6335_RG_INT_EN_FG_BAT0_L_MASK                  0x1
#define MT6335_RG_INT_EN_FG_BAT0_L_SHIFT                 1
#define MT6335_RG_INT_EN_FG_CUR_H_MASK                   0x1
#define MT6335_RG_INT_EN_FG_CUR_H_SHIFT                  2
#define MT6335_RG_INT_EN_FG_CUR_L_MASK                   0x1
#define MT6335_RG_INT_EN_FG_CUR_L_SHIFT                  3
#define MT6335_RG_INT_EN_FG_ZCV_MASK                     0x1
#define MT6335_RG_INT_EN_FG_ZCV_SHIFT                    4
#define MT6335_RG_INT_EN_FG_BAT1_H_MASK                  0x1
#define MT6335_RG_INT_EN_FG_BAT1_H_SHIFT                 5
#define MT6335_RG_INT_EN_FG_BAT1_L_MASK                  0x1
#define MT6335_RG_INT_EN_FG_BAT1_L_SHIFT                 6
#define MT6335_RG_INT_EN_FG_N_CHARGE_L_MASK              0x1
#define MT6335_RG_INT_EN_FG_N_CHARGE_L_SHIFT             7
#define MT6335_RG_INT_EN_FG_IAVG_H_MASK                  0x1
#define MT6335_RG_INT_EN_FG_IAVG_H_SHIFT                 8
#define MT6335_RG_INT_EN_FG_IAVG_L_MASK                  0x1
#define MT6335_RG_INT_EN_FG_IAVG_L_SHIFT                 9
#define MT6335_RG_INT_EN_FG_TIME_H_MASK                  0x1
#define MT6335_RG_INT_EN_FG_TIME_H_SHIFT                 10
#define MT6335_RG_INT_EN_FG_DISCHARGE_MASK               0x1
#define MT6335_RG_INT_EN_FG_DISCHARGE_SHIFT              11
#define MT6335_RG_INT_EN_FG_CHARGE_MASK                  0x1
#define MT6335_RG_INT_EN_FG_CHARGE_SHIFT                 12
#define MT6335_RG_INT_EN_CON5_MASK                       0x7
#define MT6335_RG_INT_EN_CON5_SHIFT                      13
#define MT6335_INT_CON5_SET_MASK                         0xFFFF
#define MT6335_INT_CON5_SET_SHIFT                        0
#define MT6335_INT_CON5_CLR_MASK                         0xFFFF
#define MT6335_INT_CON5_CLR_SHIFT                        0
#define MT6335_RG_INT_MASK_PWRKEY_MASK                   0x1
#define MT6335_RG_INT_MASK_PWRKEY_SHIFT                  0
#define MT6335_RG_INT_MASK_HOMEKEY_MASK                  0x1
#define MT6335_RG_INT_MASK_HOMEKEY_SHIFT                 1
#define MT6335_RG_INT_MASK_PWRKEY_R_MASK                 0x1
#define MT6335_RG_INT_MASK_PWRKEY_R_SHIFT                2
#define MT6335_RG_INT_MASK_HOMEKEY_R_MASK                0x1
#define MT6335_RG_INT_MASK_HOMEKEY_R_SHIFT               3
#define MT6335_RG_INT_MASK_NI_LBAT_INT_MASK              0x1
#define MT6335_RG_INT_MASK_NI_LBAT_INT_SHIFT             4
#define MT6335_RG_INT_MASK_CHRDET_MASK                   0x1
#define MT6335_RG_INT_MASK_CHRDET_SHIFT                  5
#define MT6335_RG_INT_MASK_CHRDET_EDGE_MASK              0x1
#define MT6335_RG_INT_MASK_CHRDET_EDGE_SHIFT             6
#define MT6335_RG_INT_MASK_BATON_LV_MASK                 0x1
#define MT6335_RG_INT_MASK_BATON_LV_SHIFT                7
#define MT6335_RG_INT_MASK_BATON_HV_MASK                 0x1
#define MT6335_RG_INT_MASK_BATON_HV_SHIFT                8
#define MT6335_RG_INT_MASK_BATON_BAT_IN_MASK             0x1
#define MT6335_RG_INT_MASK_BATON_BAT_IN_SHIFT            9
#define MT6335_RG_INT_MASK_BATON_BAT_OUT_MASK            0x1
#define MT6335_RG_INT_MASK_BATON_BAT_OUT_SHIFT           10
#define MT6335_RG_INT_MASK_RTC_MASK                      0x1
#define MT6335_RG_INT_MASK_RTC_SHIFT                     11
#define MT6335_RG_INT_MASK_BIF_MASK                      0x1
#define MT6335_RG_INT_MASK_BIF_SHIFT                     12
#define MT6335_RG_INT_MASK_VCDT_HV_DET_MASK              0x1
#define MT6335_RG_INT_MASK_VCDT_HV_DET_SHIFT             13
#define MT6335_INT_MASK_CON0_SET_MASK                    0xFFFF
#define MT6335_INT_MASK_CON0_SET_SHIFT                   0
#define MT6335_INT_MASK_CON0_CLR_MASK                    0xFFFF
#define MT6335_INT_MASK_CON0_CLR_SHIFT                   0
#define MT6335_RG_INT_MASK_THR_H_MASK                    0x1
#define MT6335_RG_INT_MASK_THR_H_SHIFT                   0
#define MT6335_RG_INT_MASK_THR_L_MASK                    0x1
#define MT6335_RG_INT_MASK_THR_L_SHIFT                   1
#define MT6335_RG_INT_MASK_BAT_H_MASK                    0x1
#define MT6335_RG_INT_MASK_BAT_H_SHIFT                   2
#define MT6335_RG_INT_MASK_BAT_L_MASK                    0x1
#define MT6335_RG_INT_MASK_BAT_L_SHIFT                   3
#define MT6335_RG_INT_MASK_BAT2_H_MASK                   0x1
#define MT6335_RG_INT_MASK_BAT2_H_SHIFT                  4
#define MT6335_RG_INT_MASK_BAT2_L_MASK                   0x1
#define MT6335_RG_INT_MASK_BAT2_L_SHIFT                  5
#define MT6335_RG_INT_MASK_BAT_TEMP_H_MASK               0x1
#define MT6335_RG_INT_MASK_BAT_TEMP_H_SHIFT              6
#define MT6335_RG_INT_MASK_BAT_TEMP_L_MASK               0x1
#define MT6335_RG_INT_MASK_BAT_TEMP_L_SHIFT              7
#define MT6335_RG_INT_MASK_AUXADC_IMP_MASK               0x1
#define MT6335_RG_INT_MASK_AUXADC_IMP_SHIFT              8
#define MT6335_RG_INT_MASK_NAG_C_DLTV_MASK               0x1
#define MT6335_RG_INT_MASK_NAG_C_DLTV_SHIFT              9
#define MT6335_RG_INT_MASK_JEITA_HOT_MASK                0x1
#define MT6335_RG_INT_MASK_JEITA_HOT_SHIFT               10
#define MT6335_RG_INT_MASK_JEITA_WARM_MASK               0x1
#define MT6335_RG_INT_MASK_JEITA_WARM_SHIFT              11
#define MT6335_RG_INT_MASK_JEITA_COOL_MASK               0x1
#define MT6335_RG_INT_MASK_JEITA_COOL_SHIFT              12
#define MT6335_RG_INT_MASK_JEITA_COLD_MASK               0x1
#define MT6335_RG_INT_MASK_JEITA_COLD_SHIFT              13
#define MT6335_INT_MASK_CON1_SET_MASK                    0xFFFF
#define MT6335_INT_MASK_CON1_SET_SHIFT                   0
#define MT6335_INT_MASK_CON1_CLR_MASK                    0xFFFF
#define MT6335_INT_MASK_CON1_CLR_SHIFT                   0
#define MT6335_RG_INT_MASK_VCORE_OC_MASK                 0x1
#define MT6335_RG_INT_MASK_VCORE_OC_SHIFT                0
#define MT6335_RG_INT_MASK_VMD1_OC_MASK                  0x1
#define MT6335_RG_INT_MASK_VMD1_OC_SHIFT                 1
#define MT6335_RG_INT_MASK_VMODEM_OC_MASK                0x1
#define MT6335_RG_INT_MASK_VMODEM_OC_SHIFT               2
#define MT6335_RG_INT_MASK_VS1_OC_MASK                   0x1
#define MT6335_RG_INT_MASK_VS1_OC_SHIFT                  3
#define MT6335_RG_INT_MASK_VS2_OC_MASK                   0x1
#define MT6335_RG_INT_MASK_VS2_OC_SHIFT                  4
#define MT6335_RG_INT_MASK_VDRAM_OC_MASK                 0x1
#define MT6335_RG_INT_MASK_VDRAM_OC_SHIFT                5
#define MT6335_RG_INT_MASK_VPA1_OC_MASK                  0x1
#define MT6335_RG_INT_MASK_VPA1_OC_SHIFT                 6
#define MT6335_RG_INT_MASK_VPA2_OC_MASK                  0x1
#define MT6335_RG_INT_MASK_VPA2_OC_SHIFT                 7
#define MT6335_RG_INT_MASK_VCORE_PREOC_MASK              0x1
#define MT6335_RG_INT_MASK_VCORE_PREOC_SHIFT             8
#define MT6335_RG_INT_MASK_VA10_OC_MASK                  0x1
#define MT6335_RG_INT_MASK_VA10_OC_SHIFT                 9
#define MT6335_RG_INT_MASK_VA12_OC_MASK                  0x1
#define MT6335_RG_INT_MASK_VA12_OC_SHIFT                 10
#define MT6335_RG_INT_MASK_VA18_OC_MASK                  0x1
#define MT6335_RG_INT_MASK_VA18_OC_SHIFT                 11
#define MT6335_RG_INT_MASK_VBIF28_OC_MASK                0x1
#define MT6335_RG_INT_MASK_VBIF28_OC_SHIFT               12
#define MT6335_RG_INT_MASK_VCAMA1_OC_MASK                0x1
#define MT6335_RG_INT_MASK_VCAMA1_OC_SHIFT               13
#define MT6335_RG_INT_MASK_VCAMA2_OC_MASK                0x1
#define MT6335_RG_INT_MASK_VCAMA2_OC_SHIFT               14
#define MT6335_RG_INT_MASK_VCAMAF_OC_MASK                0x1
#define MT6335_RG_INT_MASK_VCAMAF_OC_SHIFT               15
#define MT6335_INT_MASK_CON2_SET_MASK                    0xFFFF
#define MT6335_INT_MASK_CON2_SET_SHIFT                   0
#define MT6335_INT_MASK_CON2_CLR_MASK                    0xFFFF
#define MT6335_INT_MASK_CON2_CLR_SHIFT                   0
#define MT6335_RG_INT_MASK_VCAMD1_OC_MASK                0x1
#define MT6335_RG_INT_MASK_VCAMD1_OC_SHIFT               0
#define MT6335_RG_INT_MASK_VCAMD2_OC_MASK                0x1
#define MT6335_RG_INT_MASK_VCAMD2_OC_SHIFT               1
#define MT6335_RG_INT_MASK_VCAMIO_OC_MASK                0x1
#define MT6335_RG_INT_MASK_VCAMIO_OC_SHIFT               2
#define MT6335_RG_INT_MASK_VCN18_OC_MASK                 0x1
#define MT6335_RG_INT_MASK_VCN18_OC_SHIFT                3
#define MT6335_RG_INT_MASK_VCN28_OC_MASK                 0x1
#define MT6335_RG_INT_MASK_VCN28_OC_SHIFT                4
#define MT6335_RG_INT_MASK_VCN33_OC_MASK                 0x1
#define MT6335_RG_INT_MASK_VCN33_OC_SHIFT                5
#define MT6335_RG_INT_MASK_VEFUSE_OC_MASK                0x1
#define MT6335_RG_INT_MASK_VEFUSE_OC_SHIFT               6
#define MT6335_RG_INT_MASK_VEMC_OC_MASK                  0x1
#define MT6335_RG_INT_MASK_VEMC_OC_SHIFT                 7
#define MT6335_RG_INT_MASK_VFE28_OC_MASK                 0x1
#define MT6335_RG_INT_MASK_VFE28_OC_SHIFT                8
#define MT6335_RG_INT_MASK_VGP3_OC_MASK                  0x1
#define MT6335_RG_INT_MASK_VGP3_OC_SHIFT                 9
#define MT6335_RG_INT_MASK_VIBR_OC_MASK                  0x1
#define MT6335_RG_INT_MASK_VIBR_OC_SHIFT                 10
#define MT6335_RG_INT_MASK_VIO18_OC_MASK                 0x1
#define MT6335_RG_INT_MASK_VIO18_OC_SHIFT                11
#define MT6335_RG_INT_MASK_VIO28_OC_MASK                 0x1
#define MT6335_RG_INT_MASK_VIO28_OC_SHIFT                12
#define MT6335_RG_INT_MASK_VMC_OC_MASK                   0x1
#define MT6335_RG_INT_MASK_VMC_OC_SHIFT                  13
#define MT6335_RG_INT_MASK_VMCH_OC_MASK                  0x1
#define MT6335_RG_INT_MASK_VMCH_OC_SHIFT                 14
#define MT6335_RG_INT_MASK_VMIPI_OC_MASK                 0x1
#define MT6335_RG_INT_MASK_VMIPI_OC_SHIFT                15
#define MT6335_INT_MASK_CON3_SET_MASK                    0xFFFF
#define MT6335_INT_MASK_CON3_SET_SHIFT                   0
#define MT6335_INT_MASK_CON3_CLR_MASK                    0xFFFF
#define MT6335_INT_MASK_CON3_CLR_SHIFT                   0
#define MT6335_RG_INT_MASK_VRF12_OC_MASK                 0x1
#define MT6335_RG_INT_MASK_VRF12_OC_SHIFT                0
#define MT6335_RG_INT_MASK_VRF18_1_OC_MASK               0x1
#define MT6335_RG_INT_MASK_VRF18_1_OC_SHIFT              1
#define MT6335_RG_INT_MASK_VRF18_2_OC_MASK               0x1
#define MT6335_RG_INT_MASK_VRF18_2_OC_SHIFT              2
#define MT6335_RG_INT_MASK_VSIM1_OC_MASK                 0x1
#define MT6335_RG_INT_MASK_VSIM1_OC_SHIFT                3
#define MT6335_RG_INT_MASK_VSIM2_OC_MASK                 0x1
#define MT6335_RG_INT_MASK_VSIM2_OC_SHIFT                4
#define MT6335_RG_INT_MASK_VSRAM_CORE_OC_MASK            0x1
#define MT6335_RG_INT_MASK_VSRAM_CORE_OC_SHIFT           5
#define MT6335_RG_INT_MASK_VSRAM_DVFS1_OC_MASK           0x1
#define MT6335_RG_INT_MASK_VSRAM_DVFS1_OC_SHIFT          6
#define MT6335_RG_INT_MASK_VSRAM_DVFS2_OC_MASK           0x1
#define MT6335_RG_INT_MASK_VSRAM_DVFS2_OC_SHIFT          7
#define MT6335_RG_INT_MASK_VSRAM_GPU_OC_MASK             0x1
#define MT6335_RG_INT_MASK_VSRAM_GPU_OC_SHIFT            8
#define MT6335_RG_INT_MASK_VSRAM_MD_OC_MASK              0x1
#define MT6335_RG_INT_MASK_VSRAM_MD_OC_SHIFT             9
#define MT6335_RG_INT_MASK_VUFS18_OC_MASK                0x1
#define MT6335_RG_INT_MASK_VUFS18_OC_SHIFT               10
#define MT6335_RG_INT_MASK_VUSB33_OC_MASK                0x1
#define MT6335_RG_INT_MASK_VUSB33_OC_SHIFT               11
#define MT6335_RG_INT_MASK_VXO22_OC_MASK                 0x1
#define MT6335_RG_INT_MASK_VXO22_OC_SHIFT                12
#define MT6335_RG_INT_MASK_CON4_MASK                     0x7
#define MT6335_RG_INT_MASK_CON4_SHIFT                    13
#define MT6335_INT_MASK_CON4_SET_MASK                    0xFFFF
#define MT6335_INT_MASK_CON4_SET_SHIFT                   0
#define MT6335_INT_MASK_CON4_CLR_MASK                    0xFFFF
#define MT6335_INT_MASK_CON4_CLR_SHIFT                   0
#define MT6335_RG_INT_MASK_FG_BAT0_H_MASK                0x1
#define MT6335_RG_INT_MASK_FG_BAT0_H_SHIFT               0
#define MT6335_RG_INT_MASK_FG_BAT0_L_MASK                0x1
#define MT6335_RG_INT_MASK_FG_BAT0_L_SHIFT               1
#define MT6335_RG_INT_MASK_FG_CUR_H_MASK                 0x1
#define MT6335_RG_INT_MASK_FG_CUR_H_SHIFT                2
#define MT6335_RG_INT_MASK_FG_CUR_L_MASK                 0x1
#define MT6335_RG_INT_MASK_FG_CUR_L_SHIFT                3
#define MT6335_RG_INT_MASK_FG_ZCV_MASK                   0x1
#define MT6335_RG_INT_MASK_FG_ZCV_SHIFT                  4
#define MT6335_RG_INT_MASK_FG_BAT1_H_MASK                0x1
#define MT6335_RG_INT_MASK_FG_BAT1_H_SHIFT               5
#define MT6335_RG_INT_MASK_FG_BAT1_L_MASK                0x1
#define MT6335_RG_INT_MASK_FG_BAT1_L_SHIFT               6
#define MT6335_RG_INT_MASK_FG_N_CHARGE_L_MASK            0x1
#define MT6335_RG_INT_MASK_FG_N_CHARGE_L_SHIFT           7
#define MT6335_RG_INT_MASK_FG_IAVG_H_MASK                0x1
#define MT6335_RG_INT_MASK_FG_IAVG_H_SHIFT               8
#define MT6335_RG_INT_MASK_FG_IAVG_L_MASK                0x1
#define MT6335_RG_INT_MASK_FG_IAVG_L_SHIFT               9
#define MT6335_RG_INT_MASK_FG_TIME_H_MASK                0x1
#define MT6335_RG_INT_MASK_FG_TIME_H_SHIFT               10
#define MT6335_RG_INT_MASK_FG_DISCHARGE_MASK             0x1
#define MT6335_RG_INT_MASK_FG_DISCHARGE_SHIFT            11
#define MT6335_RG_INT_MASK_FG_CHARGE_MASK                0x1
#define MT6335_RG_INT_MASK_FG_CHARGE_SHIFT               12
#define MT6335_RG_INT_MASK_CON5_MASK                     0x7
#define MT6335_RG_INT_MASK_CON5_SHIFT                    13
#define MT6335_INT_MASK_CON5_SET_MASK                    0xFFFF
#define MT6335_INT_MASK_CON5_SET_SHIFT                   0
#define MT6335_INT_MASK_CON5_CLR_MASK                    0xFFFF
#define MT6335_INT_MASK_CON5_CLR_SHIFT                   0
#define MT6335_RG_INT_STATUS_PWRKEY_MASK                 0x1
#define MT6335_RG_INT_STATUS_PWRKEY_SHIFT                0
#define MT6335_RG_INT_STATUS_HOMEKEY_MASK                0x1
#define MT6335_RG_INT_STATUS_HOMEKEY_SHIFT               1
#define MT6335_RG_INT_STATUS_PWRKEY_R_MASK               0x1
#define MT6335_RG_INT_STATUS_PWRKEY_R_SHIFT              2
#define MT6335_RG_INT_STATUS_HOMEKEY_R_MASK              0x1
#define MT6335_RG_INT_STATUS_HOMEKEY_R_SHIFT             3
#define MT6335_RG_INT_STATUS_NI_LBAT_INT_MASK            0x1
#define MT6335_RG_INT_STATUS_NI_LBAT_INT_SHIFT           4
#define MT6335_RG_INT_STATUS_CHRDET_MASK                 0x1
#define MT6335_RG_INT_STATUS_CHRDET_SHIFT                5
#define MT6335_RG_INT_STATUS_CHRDET_EDGE_MASK            0x1
#define MT6335_RG_INT_STATUS_CHRDET_EDGE_SHIFT           6
#define MT6335_RG_INT_STATUS_BATON_LV_MASK               0x1
#define MT6335_RG_INT_STATUS_BATON_LV_SHIFT              7
#define MT6335_RG_INT_STATUS_BATON_HV_MASK               0x1
#define MT6335_RG_INT_STATUS_BATON_HV_SHIFT              8
#define MT6335_RG_INT_STATUS_BATON_BAT_IN_MASK           0x1
#define MT6335_RG_INT_STATUS_BATON_BAT_IN_SHIFT          9
#define MT6335_RG_INT_STATUS_BATON_BAT_OUT_MASK          0x1
#define MT6335_RG_INT_STATUS_BATON_BAT_OUT_SHIFT         10
#define MT6335_RG_INT_STATUS_RTC_MASK                    0x1
#define MT6335_RG_INT_STATUS_RTC_SHIFT                   11
#define MT6335_RG_INT_STATUS_BIF_MASK                    0x1
#define MT6335_RG_INT_STATUS_BIF_SHIFT                   12
#define MT6335_RG_INT_STATUS_VCDT_HV_DET_MASK            0x1
#define MT6335_RG_INT_STATUS_VCDT_HV_DET_SHIFT           13
#define MT6335_RG_INT_STATUS_THR_H_MASK                  0x1
#define MT6335_RG_INT_STATUS_THR_H_SHIFT                 0
#define MT6335_RG_INT_STATUS_THR_L_MASK                  0x1
#define MT6335_RG_INT_STATUS_THR_L_SHIFT                 1
#define MT6335_RG_INT_STATUS_BAT_H_MASK                  0x1
#define MT6335_RG_INT_STATUS_BAT_H_SHIFT                 2
#define MT6335_RG_INT_STATUS_BAT_L_MASK                  0x1
#define MT6335_RG_INT_STATUS_BAT_L_SHIFT                 3
#define MT6335_RG_INT_STATUS_BAT2_H_MASK                 0x1
#define MT6335_RG_INT_STATUS_BAT2_H_SHIFT                4
#define MT6335_RG_INT_STATUS_BAT2_L_MASK                 0x1
#define MT6335_RG_INT_STATUS_BAT2_L_SHIFT                5
#define MT6335_RG_INT_STATUS_BAT_TEMP_H_MASK             0x1
#define MT6335_RG_INT_STATUS_BAT_TEMP_H_SHIFT            6
#define MT6335_RG_INT_STATUS_BAT_TEMP_L_MASK             0x1
#define MT6335_RG_INT_STATUS_BAT_TEMP_L_SHIFT            7
#define MT6335_RG_INT_STATUS_AUXADC_IMP_MASK             0x1
#define MT6335_RG_INT_STATUS_AUXADC_IMP_SHIFT            8
#define MT6335_RG_INT_STATUS_NAG_C_DLTV_MASK             0x1
#define MT6335_RG_INT_STATUS_NAG_C_DLTV_SHIFT            9
#define MT6335_RG_INT_STATUS_JEITA_HOT_MASK              0x1
#define MT6335_RG_INT_STATUS_JEITA_HOT_SHIFT             10
#define MT6335_RG_INT_STATUS_JEITA_WARM_MASK             0x1
#define MT6335_RG_INT_STATUS_JEITA_WARM_SHIFT            11
#define MT6335_RG_INT_STATUS_JEITA_COOL_MASK             0x1
#define MT6335_RG_INT_STATUS_JEITA_COOL_SHIFT            12
#define MT6335_RG_INT_STATUS_JEITA_COLD_MASK             0x1
#define MT6335_RG_INT_STATUS_JEITA_COLD_SHIFT            13
#define MT6335_RG_INT_STATUS_VCORE_OC_MASK               0x1
#define MT6335_RG_INT_STATUS_VCORE_OC_SHIFT              0
#define MT6335_RG_INT_STATUS_VMD1_OC_MASK                0x1
#define MT6335_RG_INT_STATUS_VMD1_OC_SHIFT               1
#define MT6335_RG_INT_STATUS_VMODEM_OC_MASK              0x1
#define MT6335_RG_INT_STATUS_VMODEM_OC_SHIFT             2
#define MT6335_RG_INT_STATUS_VS1_OC_MASK                 0x1
#define MT6335_RG_INT_STATUS_VS1_OC_SHIFT                3
#define MT6335_RG_INT_STATUS_VS2_OC_MASK                 0x1
#define MT6335_RG_INT_STATUS_VS2_OC_SHIFT                4
#define MT6335_RG_INT_STATUS_VDRAM_OC_MASK               0x1
#define MT6335_RG_INT_STATUS_VDRAM_OC_SHIFT              5
#define MT6335_RG_INT_STATUS_VPA1_OC_MASK                0x1
#define MT6335_RG_INT_STATUS_VPA1_OC_SHIFT               6
#define MT6335_RG_INT_STATUS_VPA2_OC_MASK                0x1
#define MT6335_RG_INT_STATUS_VPA2_OC_SHIFT               7
#define MT6335_RG_INT_STATUS_VCORE_PREOC_MASK            0x1
#define MT6335_RG_INT_STATUS_VCORE_PREOC_SHIFT           8
#define MT6335_RG_INT_STATUS_VA10_OC_MASK                0x1
#define MT6335_RG_INT_STATUS_VA10_OC_SHIFT               9
#define MT6335_RG_INT_STATUS_VA12_OC_MASK                0x1
#define MT6335_RG_INT_STATUS_VA12_OC_SHIFT               10
#define MT6335_RG_INT_STATUS_VA18_OC_MASK                0x1
#define MT6335_RG_INT_STATUS_VA18_OC_SHIFT               11
#define MT6335_RG_INT_STATUS_VBIF28_OC_MASK              0x1
#define MT6335_RG_INT_STATUS_VBIF28_OC_SHIFT             12
#define MT6335_RG_INT_STATUS_VCAMA1_OC_MASK              0x1
#define MT6335_RG_INT_STATUS_VCAMA1_OC_SHIFT             13
#define MT6335_RG_INT_STATUS_VCAMA2_OC_MASK              0x1
#define MT6335_RG_INT_STATUS_VCAMA2_OC_SHIFT             14
#define MT6335_RG_INT_STATUS_VCAMAF_OC_MASK              0x1
#define MT6335_RG_INT_STATUS_VCAMAF_OC_SHIFT             15
#define MT6335_RG_INT_STATUS_VCAMD1_OC_MASK              0x1
#define MT6335_RG_INT_STATUS_VCAMD1_OC_SHIFT             0
#define MT6335_RG_INT_STATUS_VCAMD2_OC_MASK              0x1
#define MT6335_RG_INT_STATUS_VCAMD2_OC_SHIFT             1
#define MT6335_RG_INT_STATUS_VCAMIO_OC_MASK              0x1
#define MT6335_RG_INT_STATUS_VCAMIO_OC_SHIFT             2
#define MT6335_RG_INT_STATUS_VCN18_OC_MASK               0x1
#define MT6335_RG_INT_STATUS_VCN18_OC_SHIFT              3
#define MT6335_RG_INT_STATUS_VCN28_OC_MASK               0x1
#define MT6335_RG_INT_STATUS_VCN28_OC_SHIFT              4
#define MT6335_RG_INT_STATUS_VCN33_OC_MASK               0x1
#define MT6335_RG_INT_STATUS_VCN33_OC_SHIFT              5
#define MT6335_RG_INT_STATUS_VEFUSE_OC_MASK              0x1
#define MT6335_RG_INT_STATUS_VEFUSE_OC_SHIFT             6
#define MT6335_RG_INT_STATUS_VEMC_OC_MASK                0x1
#define MT6335_RG_INT_STATUS_VEMC_OC_SHIFT               7
#define MT6335_RG_INT_STATUS_VFE28_OC_MASK               0x1
#define MT6335_RG_INT_STATUS_VFE28_OC_SHIFT              8
#define MT6335_RG_INT_STATUS_VGP3_OC_MASK                0x1
#define MT6335_RG_INT_STATUS_VGP3_OC_SHIFT               9
#define MT6335_RG_INT_STATUS_VIBR_OC_MASK                0x1
#define MT6335_RG_INT_STATUS_VIBR_OC_SHIFT               10
#define MT6335_RG_INT_STATUS_VIO18_OC_MASK               0x1
#define MT6335_RG_INT_STATUS_VIO18_OC_SHIFT              11
#define MT6335_RG_INT_STATUS_VIO28_OC_MASK               0x1
#define MT6335_RG_INT_STATUS_VIO28_OC_SHIFT              12
#define MT6335_RG_INT_STATUS_VMC_OC_MASK                 0x1
#define MT6335_RG_INT_STATUS_VMC_OC_SHIFT                13
#define MT6335_RG_INT_STATUS_VMCH_OC_MASK                0x1
#define MT6335_RG_INT_STATUS_VMCH_OC_SHIFT               14
#define MT6335_RG_INT_STATUS_VMIPI_OC_MASK               0x1
#define MT6335_RG_INT_STATUS_VMIPI_OC_SHIFT              15
#define MT6335_RG_INT_STATUS_VRF12_OC_MASK               0x1
#define MT6335_RG_INT_STATUS_VRF12_OC_SHIFT              0
#define MT6335_RG_INT_STATUS_VRF18_1_OC_MASK             0x1
#define MT6335_RG_INT_STATUS_VRF18_1_OC_SHIFT            1
#define MT6335_RG_INT_STATUS_VRF18_2_OC_MASK             0x1
#define MT6335_RG_INT_STATUS_VRF18_2_OC_SHIFT            2
#define MT6335_RG_INT_STATUS_VSIM1_OC_MASK               0x1
#define MT6335_RG_INT_STATUS_VSIM1_OC_SHIFT              3
#define MT6335_RG_INT_STATUS_VSIM2_OC_MASK               0x1
#define MT6335_RG_INT_STATUS_VSIM2_OC_SHIFT              4
#define MT6335_RG_INT_STATUS_VSRAM_CORE_OC_MASK          0x1
#define MT6335_RG_INT_STATUS_VSRAM_CORE_OC_SHIFT         5
#define MT6335_RG_INT_STATUS_VSRAM_DVFS1_OC_MASK         0x1
#define MT6335_RG_INT_STATUS_VSRAM_DVFS1_OC_SHIFT        6
#define MT6335_RG_INT_STATUS_VSRAM_DVFS2_OC_MASK         0x1
#define MT6335_RG_INT_STATUS_VSRAM_DVFS2_OC_SHIFT        7
#define MT6335_RG_INT_STATUS_VSRAM_GPU_OC_MASK           0x1
#define MT6335_RG_INT_STATUS_VSRAM_GPU_OC_SHIFT          8
#define MT6335_RG_INT_STATUS_VSRAM_MD_OC_MASK            0x1
#define MT6335_RG_INT_STATUS_VSRAM_MD_OC_SHIFT           9
#define MT6335_RG_INT_STATUS_VUFS18_OC_MASK              0x1
#define MT6335_RG_INT_STATUS_VUFS18_OC_SHIFT             10
#define MT6335_RG_INT_STATUS_VUSB33_OC_MASK              0x1
#define MT6335_RG_INT_STATUS_VUSB33_OC_SHIFT             11
#define MT6335_RG_INT_STATUS_VXO22_OC_MASK               0x1
#define MT6335_RG_INT_STATUS_VXO22_OC_SHIFT              12
#define MT6335_RG_INT_STATUS_CON4_MASK                   0x7
#define MT6335_RG_INT_STATUS_CON4_SHIFT                  13
#define MT6335_RG_INT_STATUS_FG_BAT0_H_MASK              0x1
#define MT6335_RG_INT_STATUS_FG_BAT0_H_SHIFT             0
#define MT6335_RG_INT_STATUS_FG_BAT0_L_MASK              0x1
#define MT6335_RG_INT_STATUS_FG_BAT0_L_SHIFT             1
#define MT6335_RG_INT_STATUS_FG_CUR_H_MASK               0x1
#define MT6335_RG_INT_STATUS_FG_CUR_H_SHIFT              2
#define MT6335_RG_INT_STATUS_FG_CUR_L_MASK               0x1
#define MT6335_RG_INT_STATUS_FG_CUR_L_SHIFT              3
#define MT6335_RG_INT_STATUS_FG_ZCV_MASK                 0x1
#define MT6335_RG_INT_STATUS_FG_ZCV_SHIFT                4
#define MT6335_RG_INT_STATUS_FG_BAT1_H_MASK              0x1
#define MT6335_RG_INT_STATUS_FG_BAT1_H_SHIFT             5
#define MT6335_RG_INT_STATUS_FG_BAT1_L_MASK              0x1
#define MT6335_RG_INT_STATUS_FG_BAT1_L_SHIFT             6
#define MT6335_RG_INT_STATUS_FG_N_CHARGE_L_MASK          0x1
#define MT6335_RG_INT_STATUS_FG_N_CHARGE_L_SHIFT         7
#define MT6335_RG_INT_STATUS_FG_IAVG_H_MASK              0x1
#define MT6335_RG_INT_STATUS_FG_IAVG_H_SHIFT             8
#define MT6335_RG_INT_STATUS_FG_IAVG_L_MASK              0x1
#define MT6335_RG_INT_STATUS_FG_IAVG_L_SHIFT             9
#define MT6335_RG_INT_STATUS_FG_TIME_H_MASK              0x1
#define MT6335_RG_INT_STATUS_FG_TIME_H_SHIFT             10
#define MT6335_RG_INT_STATUS_FG_DISCHARGE_MASK           0x1
#define MT6335_RG_INT_STATUS_FG_DISCHARGE_SHIFT          11
#define MT6335_RG_INT_STATUS_FG_CHARGE_MASK              0x1
#define MT6335_RG_INT_STATUS_FG_CHARGE_SHIFT             12
#define MT6335_RG_INT_STATUS_CON5_MASK                   0x7
#define MT6335_RG_INT_STATUS_CON5_SHIFT                  13
#define MT6335_RG_INT_RAW_STATUS_PWRKEY_MASK             0x1
#define MT6335_RG_INT_RAW_STATUS_PWRKEY_SHIFT            0
#define MT6335_RG_INT_RAW_STATUS_HOMEKEY_MASK            0x1
#define MT6335_RG_INT_RAW_STATUS_HOMEKEY_SHIFT           1
#define MT6335_RG_INT_RAW_STATUS_PWRKEY_R_MASK           0x1
#define MT6335_RG_INT_RAW_STATUS_PWRKEY_R_SHIFT          2
#define MT6335_RG_INT_RAW_STATUS_HOMEKEY_R_MASK          0x1
#define MT6335_RG_INT_RAW_STATUS_HOMEKEY_R_SHIFT         3
#define MT6335_RG_INT_RAW_STATUS_NI_LBAT_INT_MASK        0x1
#define MT6335_RG_INT_RAW_STATUS_NI_LBAT_INT_SHIFT       4
#define MT6335_RG_INT_RAW_STATUS_CHRDET_MASK             0x1
#define MT6335_RG_INT_RAW_STATUS_CHRDET_SHIFT            5
#define MT6335_RG_INT_RAW_STATUS_CHRDET_EDGE_MASK        0x1
#define MT6335_RG_INT_RAW_STATUS_CHRDET_EDGE_SHIFT       6
#define MT6335_RG_INT_RAW_STATUS_BATON_LV_MASK           0x1
#define MT6335_RG_INT_RAW_STATUS_BATON_LV_SHIFT          7
#define MT6335_RG_INT_RAW_STATUS_BATON_HV_MASK           0x1
#define MT6335_RG_INT_RAW_STATUS_BATON_HV_SHIFT          8
#define MT6335_RG_INT_RAW_STATUS_BATON_BAT_IN_MASK       0x1
#define MT6335_RG_INT_RAW_STATUS_BATON_BAT_IN_SHIFT      9
#define MT6335_RG_INT_RAW_STATUS_BATON_BAT_OUT_MASK      0x1
#define MT6335_RG_INT_RAW_STATUS_BATON_BAT_OUT_SHIFT     10
#define MT6335_RG_INT_RAW_STATUS_RTC_MASK                0x1
#define MT6335_RG_INT_RAW_STATUS_RTC_SHIFT               11
#define MT6335_RG_INT_RAW_STATUS_BIF_MASK                0x1
#define MT6335_RG_INT_RAW_STATUS_BIF_SHIFT               12
#define MT6335_RG_INT_RAW_STATUS_VCDT_HV_DET_MASK        0x1
#define MT6335_RG_INT_RAW_STATUS_VCDT_HV_DET_SHIFT       13
#define MT6335_RG_INT_RAW_STATUS_THR_H_MASK              0x1
#define MT6335_RG_INT_RAW_STATUS_THR_H_SHIFT             0
#define MT6335_RG_INT_RAW_STATUS_THR_L_MASK              0x1
#define MT6335_RG_INT_RAW_STATUS_THR_L_SHIFT             1
#define MT6335_RG_INT_RAW_STATUS_BAT_H_MASK              0x1
#define MT6335_RG_INT_RAW_STATUS_BAT_H_SHIFT             2
#define MT6335_RG_INT_RAW_STATUS_BAT_L_MASK              0x1
#define MT6335_RG_INT_RAW_STATUS_BAT_L_SHIFT             3
#define MT6335_RG_INT_RAW_STATUS_BAT2_H_MASK             0x1
#define MT6335_RG_INT_RAW_STATUS_BAT2_H_SHIFT            4
#define MT6335_RG_INT_RAW_STATUS_BAT2_L_MASK             0x1
#define MT6335_RG_INT_RAW_STATUS_BAT2_L_SHIFT            5
#define MT6335_RG_INT_RAW_STATUS_BAT_TEMP_H_MASK         0x1
#define MT6335_RG_INT_RAW_STATUS_BAT_TEMP_H_SHIFT        6
#define MT6335_RG_INT_RAW_STATUS_BAT_TEMP_L_MASK         0x1
#define MT6335_RG_INT_RAW_STATUS_BAT_TEMP_L_SHIFT        7
#define MT6335_RG_INT_RAW_STATUS_AUXADC_IMP_MASK         0x1
#define MT6335_RG_INT_RAW_STATUS_AUXADC_IMP_SHIFT        8
#define MT6335_RG_INT_RAW_STATUS_NAG_C_DLTV_MASK         0x1
#define MT6335_RG_INT_RAW_STATUS_NAG_C_DLTV_SHIFT        9
#define MT6335_RG_INT_RAW_STATUS_JEITA_HOT_MASK          0x1
#define MT6335_RG_INT_RAW_STATUS_JEITA_HOT_SHIFT         10
#define MT6335_RG_INT_RAW_STATUS_JEITA_WARM_MASK         0x1
#define MT6335_RG_INT_RAW_STATUS_JEITA_WARM_SHIFT        11
#define MT6335_RG_INT_RAW_STATUS_JEITA_COOL_MASK         0x1
#define MT6335_RG_INT_RAW_STATUS_JEITA_COOL_SHIFT        12
#define MT6335_RG_INT_RAW_STATUS_JEITA_COLD_MASK         0x1
#define MT6335_RG_INT_RAW_STATUS_JEITA_COLD_SHIFT        13
#define MT6335_RG_INT_RAW_STATUS_VCORE_OC_MASK           0x1
#define MT6335_RG_INT_RAW_STATUS_VCORE_OC_SHIFT          0
#define MT6335_RG_INT_RAW_STATUS_VMD1_OC_MASK            0x1
#define MT6335_RG_INT_RAW_STATUS_VMD1_OC_SHIFT           1
#define MT6335_RG_INT_RAW_STATUS_VMODEM_OC_MASK          0x1
#define MT6335_RG_INT_RAW_STATUS_VMODEM_OC_SHIFT         2
#define MT6335_RG_INT_RAW_STATUS_VS1_OC_MASK             0x1
#define MT6335_RG_INT_RAW_STATUS_VS1_OC_SHIFT            3
#define MT6335_RG_INT_RAW_STATUS_VS2_OC_MASK             0x1
#define MT6335_RG_INT_RAW_STATUS_VS2_OC_SHIFT            4
#define MT6335_RG_INT_RAW_STATUS_VDRAM_OC_MASK           0x1
#define MT6335_RG_INT_RAW_STATUS_VDRAM_OC_SHIFT          5
#define MT6335_RG_INT_RAW_STATUS_VPA1_OC_MASK            0x1
#define MT6335_RG_INT_RAW_STATUS_VPA1_OC_SHIFT           6
#define MT6335_RG_INT_RAW_STATUS_VPA2_OC_MASK            0x1
#define MT6335_RG_INT_RAW_STATUS_VPA2_OC_SHIFT           7
#define MT6335_RG_INT_RAW_STATUS_VCORE_PREOC_MASK        0x1
#define MT6335_RG_INT_RAW_STATUS_VCORE_PREOC_SHIFT       8
#define MT6335_RG_INT_RAW_STATUS_VA10_OC_MASK            0x1
#define MT6335_RG_INT_RAW_STATUS_VA10_OC_SHIFT           9
#define MT6335_RG_INT_RAW_STATUS_VA12_OC_MASK            0x1
#define MT6335_RG_INT_RAW_STATUS_VA12_OC_SHIFT           10
#define MT6335_RG_INT_RAW_STATUS_VA18_OC_MASK            0x1
#define MT6335_RG_INT_RAW_STATUS_VA18_OC_SHIFT           11
#define MT6335_RG_INT_RAW_STATUS_VBIF28_OC_MASK          0x1
#define MT6335_RG_INT_RAW_STATUS_VBIF28_OC_SHIFT         12
#define MT6335_RG_INT_RAW_STATUS_VCAMA1_OC_MASK          0x1
#define MT6335_RG_INT_RAW_STATUS_VCAMA1_OC_SHIFT         13
#define MT6335_RG_INT_RAW_STATUS_VCAMA2_OC_MASK          0x1
#define MT6335_RG_INT_RAW_STATUS_VCAMA2_OC_SHIFT         14
#define MT6335_RG_INT_RAW_STATUS_VCAMAF_OC_MASK          0x1
#define MT6335_RG_INT_RAW_STATUS_VCAMAF_OC_SHIFT         15
#define MT6335_RG_INT_RAW_STATUS_VCAMD1_OC_MASK          0x1
#define MT6335_RG_INT_RAW_STATUS_VCAMD1_OC_SHIFT         0
#define MT6335_RG_INT_RAW_STATUS_VCAMD2_OC_MASK          0x1
#define MT6335_RG_INT_RAW_STATUS_VCAMD2_OC_SHIFT         1
#define MT6335_RG_INT_RAW_STATUS_VCAMIO_OC_MASK          0x1
#define MT6335_RG_INT_RAW_STATUS_VCAMIO_OC_SHIFT         2
#define MT6335_RG_INT_RAW_STATUS_VCN18_OC_MASK           0x1
#define MT6335_RG_INT_RAW_STATUS_VCN18_OC_SHIFT          3
#define MT6335_RG_INT_RAW_STATUS_VCN28_OC_MASK           0x1
#define MT6335_RG_INT_RAW_STATUS_VCN28_OC_SHIFT          4
#define MT6335_RG_INT_RAW_STATUS_VCN33_OC_MASK           0x1
#define MT6335_RG_INT_RAW_STATUS_VCN33_OC_SHIFT          5
#define MT6335_RG_INT_RAW_STATUS_VEFUSE_OC_MASK          0x1
#define MT6335_RG_INT_RAW_STATUS_VEFUSE_OC_SHIFT         6
#define MT6335_RG_INT_RAW_STATUS_VEMC_OC_MASK            0x1
#define MT6335_RG_INT_RAW_STATUS_VEMC_OC_SHIFT           7
#define MT6335_RG_INT_RAW_STATUS_VFE28_OC_MASK           0x1
#define MT6335_RG_INT_RAW_STATUS_VFE28_OC_SHIFT          8
#define MT6335_RG_INT_RAW_STATUS_VGP3_OC_MASK            0x1
#define MT6335_RG_INT_RAW_STATUS_VGP3_OC_SHIFT           9
#define MT6335_RG_INT_RAW_STATUS_VIBR_OC_MASK            0x1
#define MT6335_RG_INT_RAW_STATUS_VIBR_OC_SHIFT           10
#define MT6335_RG_INT_RAW_STATUS_VIO18_OC_MASK           0x1
#define MT6335_RG_INT_RAW_STATUS_VIO18_OC_SHIFT          11
#define MT6335_RG_INT_RAW_STATUS_VIO28_OC_MASK           0x1
#define MT6335_RG_INT_RAW_STATUS_VIO28_OC_SHIFT          12
#define MT6335_RG_INT_RAW_STATUS_VMC_OC_MASK             0x1
#define MT6335_RG_INT_RAW_STATUS_VMC_OC_SHIFT            13
#define MT6335_RG_INT_RAW_STATUS_VMCH_OC_MASK            0x1
#define MT6335_RG_INT_RAW_STATUS_VMCH_OC_SHIFT           14
#define MT6335_RG_INT_RAW_STATUS_VMIPI_OC_MASK           0x1
#define MT6335_RG_INT_RAW_STATUS_VMIPI_OC_SHIFT          15
#define MT6335_RG_INT_RAW_STATUS_VRF12_OC_MASK           0x1
#define MT6335_RG_INT_RAW_STATUS_VRF12_OC_SHIFT          0
#define MT6335_RG_INT_RAW_STATUS_VRF18_1_OC_MASK         0x1
#define MT6335_RG_INT_RAW_STATUS_VRF18_1_OC_SHIFT        1
#define MT6335_RG_INT_RAW_STATUS_VRF18_2_OC_MASK         0x1
#define MT6335_RG_INT_RAW_STATUS_VRF18_2_OC_SHIFT        2
#define MT6335_RG_INT_RAW_STATUS_VSIM1_OC_MASK           0x1
#define MT6335_RG_INT_RAW_STATUS_VSIM1_OC_SHIFT          3
#define MT6335_RG_INT_RAW_STATUS_VSIM2_OC_MASK           0x1
#define MT6335_RG_INT_RAW_STATUS_VSIM2_OC_SHIFT          4
#define MT6335_RG_INT_RAW_STATUS_VSRAM_CORE_OC_MASK      0x1
#define MT6335_RG_INT_RAW_STATUS_VSRAM_CORE_OC_SHIFT     5
#define MT6335_RG_INT_RAW_STATUS_VSRAM_DVFS1_OC_MASK     0x1
#define MT6335_RG_INT_RAW_STATUS_VSRAM_DVFS1_OC_SHIFT    6
#define MT6335_RG_INT_RAW_STATUS_VSRAM_DVFS2_OC_MASK     0x1
#define MT6335_RG_INT_RAW_STATUS_VSRAM_DVFS2_OC_SHIFT    7
#define MT6335_RG_INT_RAW_STATUS_VSRAM_GPU_OC_MASK       0x1
#define MT6335_RG_INT_RAW_STATUS_VSRAM_GPU_OC_SHIFT      8
#define MT6335_RG_INT_RAW_STATUS_VSRAM_MD_OC_MASK        0x1
#define MT6335_RG_INT_RAW_STATUS_VSRAM_MD_OC_SHIFT       9
#define MT6335_RG_INT_RAW_STATUS_VUFS18_OC_MASK          0x1
#define MT6335_RG_INT_RAW_STATUS_VUFS18_OC_SHIFT         10
#define MT6335_RG_INT_RAW_STATUS_VUSB33_OC_MASK          0x1
#define MT6335_RG_INT_RAW_STATUS_VUSB33_OC_SHIFT         11
#define MT6335_RG_INT_RAW_STATUS_VXO22_OC_MASK           0x1
#define MT6335_RG_INT_RAW_STATUS_VXO22_OC_SHIFT          12
#define MT6335_RG_INT_RAW_STATUS_CON4_MASK               0x7
#define MT6335_RG_INT_RAW_STATUS_CON4_SHIFT              13
#define MT6335_RG_INT_RAW_STATUS_FG_BAT0_H_MASK          0x1
#define MT6335_RG_INT_RAW_STATUS_FG_BAT0_H_SHIFT         0
#define MT6335_RG_INT_RAW_STATUS_FG_BAT0_L_MASK          0x1
#define MT6335_RG_INT_RAW_STATUS_FG_BAT0_L_SHIFT         1
#define MT6335_RG_INT_RAW_STATUS_FG_CUR_H_MASK           0x1
#define MT6335_RG_INT_RAW_STATUS_FG_CUR_H_SHIFT          2
#define MT6335_RG_INT_RAW_STATUS_FG_CUR_L_MASK           0x1
#define MT6335_RG_INT_RAW_STATUS_FG_CUR_L_SHIFT          3
#define MT6335_RG_INT_RAW_STATUS_FG_ZCV_MASK             0x1
#define MT6335_RG_INT_RAW_STATUS_FG_ZCV_SHIFT            4
#define MT6335_RG_INT_RAW_STATUS_FG_BAT1_H_MASK          0x1
#define MT6335_RG_INT_RAW_STATUS_FG_BAT1_H_SHIFT         5
#define MT6335_RG_INT_RAW_STATUS_FG_BAT1_L_MASK          0x1
#define MT6335_RG_INT_RAW_STATUS_FG_BAT1_L_SHIFT         6
#define MT6335_RG_INT_RAW_STATUS_FG_N_CHARGE_L_MASK      0x1
#define MT6335_RG_INT_RAW_STATUS_FG_N_CHARGE_L_SHIFT     7
#define MT6335_RG_INT_RAW_STATUS_FG_IAVG_H_MASK          0x1
#define MT6335_RG_INT_RAW_STATUS_FG_IAVG_H_SHIFT         8
#define MT6335_RG_INT_RAW_STATUS_FG_IAVG_L_MASK          0x1
#define MT6335_RG_INT_RAW_STATUS_FG_IAVG_L_SHIFT         9
#define MT6335_RG_INT_RAW_STATUS_FG_TIME_H_MASK          0x1
#define MT6335_RG_INT_RAW_STATUS_FG_TIME_H_SHIFT         10
#define MT6335_RG_INT_RAW_STATUS_FG_DISCHARGE_MASK       0x1
#define MT6335_RG_INT_RAW_STATUS_FG_DISCHARGE_SHIFT      11
#define MT6335_RG_INT_RAW_STATUS_FG_CHARGE_MASK          0x1
#define MT6335_RG_INT_RAW_STATUS_FG_CHARGE_SHIFT         12
#define MT6335_RG_INT_RAW_STATUS_CON5_MASK               0x7
#define MT6335_RG_INT_RAW_STATUS_CON5_SHIFT              13
#define MT6335_POLARITY_MASK                             0x1
#define MT6335_POLARITY_SHIFT                            0
#define MT6335_RG_HOMEKEY_INT_SEL_MASK                   0x1
#define MT6335_RG_HOMEKEY_INT_SEL_SHIFT                  1
#define MT6335_RG_PWRKEY_INT_SEL_MASK                    0x1
#define MT6335_RG_PWRKEY_INT_SEL_SHIFT                   2
#define MT6335_RG_CHRDET_INT_SEL_MASK                    0x1
#define MT6335_RG_CHRDET_INT_SEL_SHIFT                   3
#define MT6335_RG_PCHR_CM_VINC_POLARITY_RSV_MASK         0x1
#define MT6335_RG_PCHR_CM_VINC_POLARITY_RSV_SHIFT        4
#define MT6335_RG_PCHR_CM_VDEC_POLARITY_RSV_MASK         0x1
#define MT6335_RG_PCHR_CM_VDEC_POLARITY_RSV_SHIFT        5
#define MT6335_INT_MISC_CON_SET_MASK                     0xFFFF
#define MT6335_INT_MISC_CON_SET_SHIFT                    0
#define MT6335_INT_MISC_CON_CLR_MASK                     0xFFFF
#define MT6335_INT_MISC_CON_CLR_SHIFT                    0
#define MT6335_FQMTR_TCKSEL_MASK                         0x7
#define MT6335_FQMTR_TCKSEL_SHIFT                        0
#define MT6335_FQMTR_BUSY_MASK                           0x1
#define MT6335_FQMTR_BUSY_SHIFT                          3
#define MT6335_FQMTR_DCXO26M_EN_MASK                     0x1
#define MT6335_FQMTR_DCXO26M_EN_SHIFT                    4
#define MT6335_FQMTR_EN_MASK                             0x1
#define MT6335_FQMTR_EN_SHIFT                            15
#define MT6335_FQMTR_WINSET_MASK                         0xFFFF
#define MT6335_FQMTR_WINSET_SHIFT                        0
#define MT6335_FQMTR_DATA_MASK                           0xFFFF
#define MT6335_FQMTR_DATA_SHIFT                          0
#define MT6335_RG_SLP_RW_EN_MASK                         0x1
#define MT6335_RG_SLP_RW_EN_SHIFT                        0
#define MT6335_RG_SPI_RSV_MASK                           0x7FFF
#define MT6335_RG_SPI_RSV_SHIFT                          1
#define MT6335_DEW_DIO_EN_MASK                           0x1
#define MT6335_DEW_DIO_EN_SHIFT                          0
#define MT6335_DEW_READ_TEST_MASK                        0xFFFF
#define MT6335_DEW_READ_TEST_SHIFT                       0
#define MT6335_DEW_WRITE_TEST_MASK                       0xFFFF
#define MT6335_DEW_WRITE_TEST_SHIFT                      0
#define MT6335_DEW_CRC_SWRST_MASK                        0x1
#define MT6335_DEW_CRC_SWRST_SHIFT                       0
#define MT6335_DEW_CRC_EN_MASK                           0x1
#define MT6335_DEW_CRC_EN_SHIFT                          0
#define MT6335_DEW_CRC_VAL_MASK                          0xFF
#define MT6335_DEW_CRC_VAL_SHIFT                         0
#define MT6335_DEW_DBG_MON_SEL_MASK                      0xF
#define MT6335_DEW_DBG_MON_SEL_SHIFT                     0
#define MT6335_DEW_CIPHER_KEY_SEL_MASK                   0x3
#define MT6335_DEW_CIPHER_KEY_SEL_SHIFT                  0
#define MT6335_DEW_CIPHER_IV_SEL_MASK                    0x3
#define MT6335_DEW_CIPHER_IV_SEL_SHIFT                   0
#define MT6335_DEW_CIPHER_EN_MASK                        0x1
#define MT6335_DEW_CIPHER_EN_SHIFT                       0
#define MT6335_DEW_CIPHER_RDY_MASK                       0x1
#define MT6335_DEW_CIPHER_RDY_SHIFT                      0
#define MT6335_DEW_CIPHER_MODE_MASK                      0x1
#define MT6335_DEW_CIPHER_MODE_SHIFT                     0
#define MT6335_DEW_CIPHER_SWRST_MASK                     0x1
#define MT6335_DEW_CIPHER_SWRST_SHIFT                    0
#define MT6335_DEW_RDDMY_NO_MASK                         0xF
#define MT6335_DEW_RDDMY_NO_SHIFT                        0
#define MT6335_INT_TYPE_CON0_MASK                        0xFFFF
#define MT6335_INT_TYPE_CON0_SHIFT                       0
#define MT6335_INT_TYPE_CON0_SET_MASK                    0xFFFF
#define MT6335_INT_TYPE_CON0_SET_SHIFT                   0
#define MT6335_INT_TYPE_CON0_CLR_MASK                    0xFFFF
#define MT6335_INT_TYPE_CON0_CLR_SHIFT                   0
#define MT6335_INT_TYPE_CON1_MASK                        0xFFFF
#define MT6335_INT_TYPE_CON1_SHIFT                       0
#define MT6335_INT_TYPE_CON1_SET_MASK                    0xFFFF
#define MT6335_INT_TYPE_CON1_SET_SHIFT                   0
#define MT6335_INT_TYPE_CON1_CLR_MASK                    0xFFFF
#define MT6335_INT_TYPE_CON1_CLR_SHIFT                   0
#define MT6335_INT_TYPE_CON2_MASK                        0xFFFF
#define MT6335_INT_TYPE_CON2_SHIFT                       0
#define MT6335_INT_TYPE_CON2_SET_MASK                    0xFFFF
#define MT6335_INT_TYPE_CON2_SET_SHIFT                   0
#define MT6335_INT_TYPE_CON2_CLR_MASK                    0xFFFF
#define MT6335_INT_TYPE_CON2_CLR_SHIFT                   0
#define MT6335_INT_TYPE_CON3_MASK                        0xFFFF
#define MT6335_INT_TYPE_CON3_SHIFT                       0
#define MT6335_INT_TYPE_CON3_SET_MASK                    0xFFFF
#define MT6335_INT_TYPE_CON3_SET_SHIFT                   0
#define MT6335_INT_TYPE_CON3_CLR_MASK                    0xFFFF
#define MT6335_INT_TYPE_CON3_CLR_SHIFT                   0
#define MT6335_INT_TYPE_CON4_MASK                        0xFFFF
#define MT6335_INT_TYPE_CON4_SHIFT                       0
#define MT6335_INT_TYPE_CON4_SET_MASK                    0xFFFF
#define MT6335_INT_TYPE_CON4_SET_SHIFT                   0
#define MT6335_INT_TYPE_CON4_CLR_MASK                    0xFFFF
#define MT6335_INT_TYPE_CON4_CLR_SHIFT                   0
#define MT6335_INT_TYPE_CON5_MASK                        0xFFFF
#define MT6335_INT_TYPE_CON5_SHIFT                       0
#define MT6335_INT_TYPE_CON5_SET_MASK                    0xFFFF
#define MT6335_INT_TYPE_CON5_SET_SHIFT                   0
#define MT6335_INT_TYPE_CON5_CLR_MASK                    0xFFFF
#define MT6335_INT_TYPE_CON5_CLR_SHIFT                   0
#define MT6335_CPU_INT_STA_MASK                          0x1
#define MT6335_CPU_INT_STA_SHIFT                         0
#define MT6335_MD32_INT_STA_MASK                         0x1
#define MT6335_MD32_INT_STA_SHIFT                        1
#define MT6335_RG_SRCLKEN_IN3_SMPS_CLK_MODE_MASK         0x1
#define MT6335_RG_SRCLKEN_IN3_SMPS_CLK_MODE_SHIFT        0
#define MT6335_RG_SRCLKEN_IN3_EN_SMPS_TEST_MASK          0x1
#define MT6335_RG_SRCLKEN_IN3_EN_SMPS_TEST_SHIFT         1
#define MT6335_RG_SRCLKEN_IN2_SMPS_CLK_MODE_MASK         0x1
#define MT6335_RG_SRCLKEN_IN2_SMPS_CLK_MODE_SHIFT        2
#define MT6335_RG_SRCLKEN_IN2_EN_SMPS_TEST_MASK          0x1
#define MT6335_RG_SRCLKEN_IN2_EN_SMPS_TEST_SHIFT         3
#define MT6335_RG_SPI_DLY_SEL_MASK                       0x7
#define MT6335_RG_SPI_DLY_SEL_SHIFT                      0
#define MT6335_RG_BUCK_LDO_FT_EN_MASK                    0x1
#define MT6335_RG_BUCK_LDO_FT_EN_SHIFT                   0
#define MT6335_RG_BUCK_DCM_MODE_MASK                     0x1
#define MT6335_RG_BUCK_DCM_MODE_SHIFT                    1
#define MT6335_RG_BUCK_ALL_CON0_RSV_MASK                 0x3FFF
#define MT6335_RG_BUCK_ALL_CON0_RSV_SHIFT                2
#define MT6335_RG_BUCK_STB_MAX_MASK                      0x1FF
#define MT6335_RG_BUCK_STB_MAX_SHIFT                     0
#define MT6335_RG_BUCK_LP_PROT_DISABLE_MASK              0x1
#define MT6335_RG_BUCK_LP_PROT_DISABLE_SHIFT             9
#define MT6335_RG_BUCK_VSLEEP_SRC0_MASK                  0x1FF
#define MT6335_RG_BUCK_VSLEEP_SRC0_SHIFT                 0
#define MT6335_RG_BUCK_VSLEEP_SRC1_MASK                  0xF
#define MT6335_RG_BUCK_VSLEEP_SRC1_SHIFT                 12
#define MT6335_RG_BUCK_R2R_SRC0_MASK                     0x1FF
#define MT6335_RG_BUCK_R2R_SRC0_SHIFT                    0
#define MT6335_RG_BUCK_R2R_SRC1_MASK                     0xF
#define MT6335_RG_BUCK_R2R_SRC1_SHIFT                    12
#define MT6335_RG_BUCK_LP_SEQ_COUNT_MASK                 0x1FF
#define MT6335_RG_BUCK_LP_SEQ_COUNT_SHIFT                0
#define MT6335_RG_BUCK_ON_SEQ_COUNT_MASK                 0xF
#define MT6335_RG_BUCK_ON_SEQ_COUNT_SHIFT                12
#define MT6335_RG_BUCK_VCORE_OC_SDN_STATUS_MASK          0x1
#define MT6335_RG_BUCK_VCORE_OC_SDN_STATUS_SHIFT         0
#define MT6335_RG_BUCK_VDRAM_OC_SDN_STATUS_MASK          0x1
#define MT6335_RG_BUCK_VDRAM_OC_SDN_STATUS_SHIFT         1
#define MT6335_RG_BUCK_VMODEM_OC_SDN_STATUS_MASK         0x1
#define MT6335_RG_BUCK_VMODEM_OC_SDN_STATUS_SHIFT        2
#define MT6335_RG_BUCK_VMD1_OC_SDN_STATUS_MASK           0x1
#define MT6335_RG_BUCK_VMD1_OC_SDN_STATUS_SHIFT          3
#define MT6335_RG_BUCK_VS1_OC_SDN_STATUS_MASK            0x1
#define MT6335_RG_BUCK_VS1_OC_SDN_STATUS_SHIFT           4
#define MT6335_RG_BUCK_VS2_OC_SDN_STATUS_MASK            0x1
#define MT6335_RG_BUCK_VS2_OC_SDN_STATUS_SHIFT           5
#define MT6335_RG_BUCK_VPA1_OC_SDN_STATUS_MASK           0x1
#define MT6335_RG_BUCK_VPA1_OC_SDN_STATUS_SHIFT          6
#define MT6335_RG_BUCK_VPA2_OC_SDN_STATUS_MASK           0x1
#define MT6335_RG_BUCK_VPA2_OC_SDN_STATUS_SHIFT          7
#define MT6335_RG_BUCK_VCORE_OC_SDN_EN_MASK              0x1
#define MT6335_RG_BUCK_VCORE_OC_SDN_EN_SHIFT             0
#define MT6335_RG_BUCK_VDRAM_OC_SDN_EN_MASK              0x1
#define MT6335_RG_BUCK_VDRAM_OC_SDN_EN_SHIFT             1
#define MT6335_RG_BUCK_VMODEM_OC_SDN_EN_MASK             0x1
#define MT6335_RG_BUCK_VMODEM_OC_SDN_EN_SHIFT            2
#define MT6335_RG_BUCK_VMD1_OC_SDN_EN_MASK               0x1
#define MT6335_RG_BUCK_VMD1_OC_SDN_EN_SHIFT              3
#define MT6335_RG_BUCK_VS1_OC_SDN_EN_MASK                0x1
#define MT6335_RG_BUCK_VS1_OC_SDN_EN_SHIFT               4
#define MT6335_RG_BUCK_VS2_OC_SDN_EN_MASK                0x1
#define MT6335_RG_BUCK_VS2_OC_SDN_EN_SHIFT               5
#define MT6335_RG_BUCK_VPA1_OC_SDN_EN_MASK               0x1
#define MT6335_RG_BUCK_VPA1_OC_SDN_EN_SHIFT              6
#define MT6335_RG_BUCK_VPA2_OC_SDN_EN_MASK               0x1
#define MT6335_RG_BUCK_VPA2_OC_SDN_EN_SHIFT              7
#define MT6335_RG_BUCK_K_RST_DONE_MASK                   0x1
#define MT6335_RG_BUCK_K_RST_DONE_SHIFT                  0
#define MT6335_RG_BUCK_K_MAP_SEL_MASK                    0x1
#define MT6335_RG_BUCK_K_MAP_SEL_SHIFT                   1
#define MT6335_RG_BUCK_K_ONCE_EN_MASK                    0x1
#define MT6335_RG_BUCK_K_ONCE_EN_SHIFT                   2
#define MT6335_RG_BUCK_K_ONCE_MASK                       0x1
#define MT6335_RG_BUCK_K_ONCE_SHIFT                      3
#define MT6335_RG_BUCK_K_START_MANUAL_MASK               0x1
#define MT6335_RG_BUCK_K_START_MANUAL_SHIFT              4
#define MT6335_RG_BUCK_K_SRC_SEL_MASK                    0x1
#define MT6335_RG_BUCK_K_SRC_SEL_SHIFT                   5
#define MT6335_RG_BUCK_K_AUTO_EN_MASK                    0x1
#define MT6335_RG_BUCK_K_AUTO_EN_SHIFT                   6
#define MT6335_RG_BUCK_K_INV_MASK                        0x1
#define MT6335_RG_BUCK_K_INV_SHIFT                       7
#define MT6335_RG_BUCK_K_CK_EN_MASK                      0x1
#define MT6335_RG_BUCK_K_CK_EN_SHIFT                     8
#define MT6335_RG_BUCK_K_CONTROL_SMPS_MASK               0x3F
#define MT6335_RG_BUCK_K_CONTROL_SMPS_SHIFT              8
#define MT6335_BUCK_K_RESULT_MASK                        0x1
#define MT6335_BUCK_K_RESULT_SHIFT                       0
#define MT6335_BUCK_K_DONE_MASK                          0x1
#define MT6335_BUCK_K_DONE_SHIFT                         1
#define MT6335_BUCK_K_CONTROL_MASK                       0x3F
#define MT6335_BUCK_K_CONTROL_SHIFT                      2
#define MT6335_DA_QI_SMPS_OSC_CAL_MASK                   0x3F
#define MT6335_DA_QI_SMPS_OSC_CAL_SHIFT                  8
#define MT6335_RG_BUCK_K_BUCK_CK_CNT_MASK                0x3FF
#define MT6335_RG_BUCK_K_BUCK_CK_CNT_SHIFT               0
#define MT6335_RG_BUCK_VCORE_SSHUB_MODE_MASK             0x1
#define MT6335_RG_BUCK_VCORE_SSHUB_MODE_SHIFT            0
#define MT6335_RG_BUCK_VCORE_SSHUB_ON_MASK               0x1
#define MT6335_RG_BUCK_VCORE_SSHUB_ON_SHIFT              1
#define MT6335_RG_BUCK_VCORE_SSHUB_VOSEL_MASK            0x7F
#define MT6335_RG_BUCK_VCORE_SSHUB_VOSEL_SHIFT           8
#define MT6335_RG_BUCK_VCORE_EN_MASK                     0x1
#define MT6335_RG_BUCK_VCORE_EN_SHIFT                    0
#define MT6335_RG_BUCK_VCORE_LP_MASK                     0x1
#define MT6335_RG_BUCK_VCORE_LP_SHIFT                    1
#define MT6335_RG_BUCK_VCORE_VOSEL_MASK                  0x7F
#define MT6335_RG_BUCK_VCORE_VOSEL_SHIFT                 0
#define MT6335_RG_BUCK_VCORE_VOSEL_SLEEP_MASK            0x7F
#define MT6335_RG_BUCK_VCORE_VOSEL_SLEEP_SHIFT           0
#define MT6335_RG_BUCK_VCORE_SFCHG_FRATE_MASK            0x7F
#define MT6335_RG_BUCK_VCORE_SFCHG_FRATE_SHIFT           0
#define MT6335_RG_BUCK_VCORE_SFCHG_FEN_MASK              0x1
#define MT6335_RG_BUCK_VCORE_SFCHG_FEN_SHIFT             7
#define MT6335_RG_BUCK_VCORE_SFCHG_RRATE_MASK            0x7F
#define MT6335_RG_BUCK_VCORE_SFCHG_RRATE_SHIFT           8
#define MT6335_RG_BUCK_VCORE_SFCHG_REN_MASK              0x1
#define MT6335_RG_BUCK_VCORE_SFCHG_REN_SHIFT             15
#define MT6335_RG_BUCK_VCORE_DVS_TRANS_TD_MASK           0x3
#define MT6335_RG_BUCK_VCORE_DVS_TRANS_TD_SHIFT          0
#define MT6335_RG_BUCK_VCORE_DVS_TRANS_CTRL_MASK         0x3
#define MT6335_RG_BUCK_VCORE_DVS_TRANS_CTRL_SHIFT        4
#define MT6335_RG_BUCK_VCORE_DVS_TRANS_ONCE_MASK         0x1
#define MT6335_RG_BUCK_VCORE_DVS_TRANS_ONCE_SHIFT        6
#define MT6335_RG_BUCK_VCORE_SW_OP_EN_MASK               0x1
#define MT6335_RG_BUCK_VCORE_SW_OP_EN_SHIFT              0
#define MT6335_RG_BUCK_VCORE_HW0_OP_EN_MASK              0x1
#define MT6335_RG_BUCK_VCORE_HW0_OP_EN_SHIFT             1
#define MT6335_RG_BUCK_VCORE_HW1_OP_EN_MASK              0x1
#define MT6335_RG_BUCK_VCORE_HW1_OP_EN_SHIFT             2
#define MT6335_RG_BUCK_VCORE_HW2_OP_EN_MASK              0x1
#define MT6335_RG_BUCK_VCORE_HW2_OP_EN_SHIFT             3
#define MT6335_RG_BUCK_VCORE_OP_EN_SET_MASK              0xFFFF
#define MT6335_RG_BUCK_VCORE_OP_EN_SET_SHIFT             0
#define MT6335_RG_BUCK_VCORE_OP_EN_CLR_MASK              0xFFFF
#define MT6335_RG_BUCK_VCORE_OP_EN_CLR_SHIFT             0
#define MT6335_RG_BUCK_VCORE_HW0_OP_CFG_MASK             0x1
#define MT6335_RG_BUCK_VCORE_HW0_OP_CFG_SHIFT            1
#define MT6335_RG_BUCK_VCORE_HW1_OP_CFG_MASK             0x1
#define MT6335_RG_BUCK_VCORE_HW1_OP_CFG_SHIFT            2
#define MT6335_RG_BUCK_VCORE_HW2_OP_CFG_MASK             0x1
#define MT6335_RG_BUCK_VCORE_HW2_OP_CFG_SHIFT            3
#define MT6335_RG_BUCK_VCORE_ON_OP_MASK                  0x1
#define MT6335_RG_BUCK_VCORE_ON_OP_SHIFT                 8
#define MT6335_RG_BUCK_VCORE_LP_OP_MASK                  0x1
#define MT6335_RG_BUCK_VCORE_LP_OP_SHIFT                 9
#define MT6335_RG_BUCK_VCORE_OP_CFG_SET_MASK             0xFFFF
#define MT6335_RG_BUCK_VCORE_OP_CFG_SET_SHIFT            0
#define MT6335_RG_BUCK_VCORE_OP_CFG_CLR_MASK             0xFFFF
#define MT6335_RG_BUCK_VCORE_OP_CFG_CLR_SHIFT            0
#define MT6335_RG_BUCK_VCORE_SP_SW_VOSEL_MASK            0x7F
#define MT6335_RG_BUCK_VCORE_SP_SW_VOSEL_SHIFT           0
#define MT6335_RG_BUCK_VCORE_SP_SW_VOSEL_EN_MASK         0x1
#define MT6335_RG_BUCK_VCORE_SP_SW_VOSEL_EN_SHIFT        0
#define MT6335_RG_BUCK_VCORE_SP_ON_VOSEL_MUX_SEL_MASK    0x1
#define MT6335_RG_BUCK_VCORE_SP_ON_VOSEL_MUX_SEL_SHIFT   1
#define MT6335_RG_BUCK_VCORE_OC_DEG_EN_MASK              0x1
#define MT6335_RG_BUCK_VCORE_OC_DEG_EN_SHIFT             1
#define MT6335_RG_BUCK_VCORE_OC_WND_MASK                 0x3
#define MT6335_RG_BUCK_VCORE_OC_WND_SHIFT                2
#define MT6335_RG_BUCK_VCORE_OC_THD_MASK                 0x3
#define MT6335_RG_BUCK_VCORE_OC_THD_SHIFT                6
#define MT6335_DA_NI_VCORE_VOSEL_MASK                    0x7F
#define MT6335_DA_NI_VCORE_VOSEL_SHIFT                   0
#define MT6335_DA_NI_VCORE_VOSEL_GRAY_MASK               0x7F
#define MT6335_DA_NI_VCORE_VOSEL_GRAY_SHIFT              8
#define MT6335_DA_QI_VCORE_EN_MASK                       0x1
#define MT6335_DA_QI_VCORE_EN_SHIFT                      0
#define MT6335_DA_VCORE_STB_MASK                         0x1
#define MT6335_DA_VCORE_STB_SHIFT                        1
#define MT6335_DA_NI_VCORE_VSLEEP_SEL_MASK               0x1
#define MT6335_DA_NI_VCORE_VSLEEP_SEL_SHIFT              2
#define MT6335_DA_NI_VCORE_R2R_PDN_MASK                  0x1
#define MT6335_DA_NI_VCORE_R2R_PDN_SHIFT                 3
#define MT6335_DA_QI_VCORE_DVS_EN_MASK                   0x1
#define MT6335_DA_QI_VCORE_DVS_EN_SHIFT                  4
#define MT6335_RG_BUCK_VCORE_LP_AUTO_EN_MASK             0x1
#define MT6335_RG_BUCK_VCORE_LP_AUTO_EN_SHIFT            0
#define MT6335_RG_BUCK_VCORE_LP_DBG_EN_MASK              0x1
#define MT6335_RG_BUCK_VCORE_LP_DBG_EN_SHIFT             1
#define MT6335_RG_BUCK_VCORE_VSLEEP_SEL_DBG_MASK         0x1
#define MT6335_RG_BUCK_VCORE_VSLEEP_SEL_DBG_SHIFT        2
#define MT6335_RG_BUCK_VCORE_R2R_PDN_DBG_MASK            0x1
#define MT6335_RG_BUCK_VCORE_R2R_PDN_DBG_SHIFT           3
#define MT6335_RG_BUCK_VCORE_OC_FLAG_CLR_SEL_MASK        0x1
#define MT6335_RG_BUCK_VCORE_OC_FLAG_CLR_SEL_SHIFT       4
#define MT6335_RG_BUCK_VCORE_OSC_SEL_DIS_MASK            0x1
#define MT6335_RG_BUCK_VCORE_OSC_SEL_DIS_SHIFT           5
#define MT6335_RG_BUCK_VCORE_CK_SW_MODE_MASK             0x1
#define MT6335_RG_BUCK_VCORE_CK_SW_MODE_SHIFT            6
#define MT6335_RG_BUCK_VCORE_CK_SW_EN_MASK               0x1
#define MT6335_RG_BUCK_VCORE_CK_SW_EN_SHIFT              7
#define MT6335_RG_BUCK_VDRAM_EN_MASK                     0x1
#define MT6335_RG_BUCK_VDRAM_EN_SHIFT                    0
#define MT6335_RG_BUCK_VDRAM_LP_MASK                     0x1
#define MT6335_RG_BUCK_VDRAM_LP_SHIFT                    1
#define MT6335_RG_BUCK_VDRAM_VOSEL_MASK                  0x7F
#define MT6335_RG_BUCK_VDRAM_VOSEL_SHIFT                 0
#define MT6335_RG_BUCK_VDRAM_VOSEL_SLEEP_MASK            0x7F
#define MT6335_RG_BUCK_VDRAM_VOSEL_SLEEP_SHIFT           0
#define MT6335_RG_BUCK_VDRAM_SFCHG_FRATE_MASK            0x7F
#define MT6335_RG_BUCK_VDRAM_SFCHG_FRATE_SHIFT           0
#define MT6335_RG_BUCK_VDRAM_SFCHG_FEN_MASK              0x1
#define MT6335_RG_BUCK_VDRAM_SFCHG_FEN_SHIFT             7
#define MT6335_RG_BUCK_VDRAM_SFCHG_RRATE_MASK            0x7F
#define MT6335_RG_BUCK_VDRAM_SFCHG_RRATE_SHIFT           8
#define MT6335_RG_BUCK_VDRAM_SFCHG_REN_MASK              0x1
#define MT6335_RG_BUCK_VDRAM_SFCHG_REN_SHIFT             15
#define MT6335_RG_BUCK_VDRAM_DVS_TRANS_TD_MASK           0x3
#define MT6335_RG_BUCK_VDRAM_DVS_TRANS_TD_SHIFT          0
#define MT6335_RG_BUCK_VDRAM_DVS_TRANS_CTRL_MASK         0x3
#define MT6335_RG_BUCK_VDRAM_DVS_TRANS_CTRL_SHIFT        4
#define MT6335_RG_BUCK_VDRAM_DVS_TRANS_ONCE_MASK         0x1
#define MT6335_RG_BUCK_VDRAM_DVS_TRANS_ONCE_SHIFT        6
#define MT6335_RG_BUCK_VDRAM_SW_OP_EN_MASK               0x1
#define MT6335_RG_BUCK_VDRAM_SW_OP_EN_SHIFT              0
#define MT6335_RG_BUCK_VDRAM_HW0_OP_EN_MASK              0x1
#define MT6335_RG_BUCK_VDRAM_HW0_OP_EN_SHIFT             1
#define MT6335_RG_BUCK_VDRAM_HW1_OP_EN_MASK              0x1
#define MT6335_RG_BUCK_VDRAM_HW1_OP_EN_SHIFT             2
#define MT6335_RG_BUCK_VDRAM_HW2_OP_EN_MASK              0x1
#define MT6335_RG_BUCK_VDRAM_HW2_OP_EN_SHIFT             3
#define MT6335_RG_BUCK_VDRAM_OP_EN_SET_MASK              0xFFFF
#define MT6335_RG_BUCK_VDRAM_OP_EN_SET_SHIFT             0
#define MT6335_RG_BUCK_VDRAM_OP_EN_CLR_MASK              0xFFFF
#define MT6335_RG_BUCK_VDRAM_OP_EN_CLR_SHIFT             0
#define MT6335_RG_BUCK_VDRAM_HW0_OP_CFG_MASK             0x1
#define MT6335_RG_BUCK_VDRAM_HW0_OP_CFG_SHIFT            1
#define MT6335_RG_BUCK_VDRAM_HW1_OP_CFG_MASK             0x1
#define MT6335_RG_BUCK_VDRAM_HW1_OP_CFG_SHIFT            2
#define MT6335_RG_BUCK_VDRAM_HW2_OP_CFG_MASK             0x1
#define MT6335_RG_BUCK_VDRAM_HW2_OP_CFG_SHIFT            3
#define MT6335_RG_BUCK_VDRAM_ON_OP_MASK                  0x1
#define MT6335_RG_BUCK_VDRAM_ON_OP_SHIFT                 8
#define MT6335_RG_BUCK_VDRAM_LP_OP_MASK                  0x1
#define MT6335_RG_BUCK_VDRAM_LP_OP_SHIFT                 9
#define MT6335_RG_BUCK_VDRAM_OP_CFG_SET_MASK             0xFFFF
#define MT6335_RG_BUCK_VDRAM_OP_CFG_SET_SHIFT            0
#define MT6335_RG_BUCK_VDRAM_OP_CFG_CLR_MASK             0xFFFF
#define MT6335_RG_BUCK_VDRAM_OP_CFG_CLR_SHIFT            0
#define MT6335_RG_BUCK_VDRAM_SP_SW_VOSEL_MASK            0x7F
#define MT6335_RG_BUCK_VDRAM_SP_SW_VOSEL_SHIFT           0
#define MT6335_RG_BUCK_VDRAM_SP_SW_VOSEL_EN_MASK         0x1
#define MT6335_RG_BUCK_VDRAM_SP_SW_VOSEL_EN_SHIFT        0
#define MT6335_RG_BUCK_VDRAM_SP_ON_VOSEL_MUX_SEL_MASK    0x1
#define MT6335_RG_BUCK_VDRAM_SP_ON_VOSEL_MUX_SEL_SHIFT   1
#define MT6335_RG_BUCK_VDRAM_OC_DEG_EN_MASK              0x1
#define MT6335_RG_BUCK_VDRAM_OC_DEG_EN_SHIFT             1
#define MT6335_RG_BUCK_VDRAM_OC_WND_MASK                 0x3
#define MT6335_RG_BUCK_VDRAM_OC_WND_SHIFT                2
#define MT6335_RG_BUCK_VDRAM_OC_THD_MASK                 0x3
#define MT6335_RG_BUCK_VDRAM_OC_THD_SHIFT                6
#define MT6335_DA_NI_VDRAM_VOSEL_MASK                    0x7F
#define MT6335_DA_NI_VDRAM_VOSEL_SHIFT                   0
#define MT6335_DA_NI_VDRAM_VOSEL_GRAY_MASK               0x7F
#define MT6335_DA_NI_VDRAM_VOSEL_GRAY_SHIFT              8
#define MT6335_DA_QI_VDRAM_EN_MASK                       0x1
#define MT6335_DA_QI_VDRAM_EN_SHIFT                      0
#define MT6335_DA_VDRAM_STB_MASK                         0x1
#define MT6335_DA_VDRAM_STB_SHIFT                        1
#define MT6335_DA_NI_VDRAM_VSLEEP_SEL_MASK               0x1
#define MT6335_DA_NI_VDRAM_VSLEEP_SEL_SHIFT              2
#define MT6335_DA_NI_VDRAM_R2R_PDN_MASK                  0x1
#define MT6335_DA_NI_VDRAM_R2R_PDN_SHIFT                 3
#define MT6335_DA_QI_VDRAM_DVS_EN_MASK                   0x1
#define MT6335_DA_QI_VDRAM_DVS_EN_SHIFT                  4
#define MT6335_RG_BUCK_VDRAM_LP_AUTO_EN_MASK             0x1
#define MT6335_RG_BUCK_VDRAM_LP_AUTO_EN_SHIFT            0
#define MT6335_RG_BUCK_VDRAM_LP_DBG_EN_MASK              0x1
#define MT6335_RG_BUCK_VDRAM_LP_DBG_EN_SHIFT             1
#define MT6335_RG_BUCK_VDRAM_VSLEEP_SEL_DBG_MASK         0x1
#define MT6335_RG_BUCK_VDRAM_VSLEEP_SEL_DBG_SHIFT        2
#define MT6335_RG_BUCK_VDRAM_R2R_PDN_DBG_MASK            0x1
#define MT6335_RG_BUCK_VDRAM_R2R_PDN_DBG_SHIFT           3
#define MT6335_RG_BUCK_VDRAM_OC_FLAG_CLR_SEL_MASK        0x1
#define MT6335_RG_BUCK_VDRAM_OC_FLAG_CLR_SEL_SHIFT       4
#define MT6335_RG_BUCK_VDRAM_OSC_SEL_DIS_MASK            0x1
#define MT6335_RG_BUCK_VDRAM_OSC_SEL_DIS_SHIFT           5
#define MT6335_RG_BUCK_VDRAM_CK_SW_MODE_MASK             0x1
#define MT6335_RG_BUCK_VDRAM_CK_SW_MODE_SHIFT            6
#define MT6335_RG_BUCK_VDRAM_CK_SW_EN_MASK               0x1
#define MT6335_RG_BUCK_VDRAM_CK_SW_EN_SHIFT              7
#define MT6335_RG_BUCK_VMD1_EN_MASK                      0x1
#define MT6335_RG_BUCK_VMD1_EN_SHIFT                     0
#define MT6335_RG_BUCK_VMD1_LP_MASK                      0x1
#define MT6335_RG_BUCK_VMD1_LP_SHIFT                     1
#define MT6335_RG_BUCK_VMD1_VOSEL_MASK                   0x7F
#define MT6335_RG_BUCK_VMD1_VOSEL_SHIFT                  0
#define MT6335_RG_BUCK_VMD1_VOSEL_SLEEP_MASK             0x7F
#define MT6335_RG_BUCK_VMD1_VOSEL_SLEEP_SHIFT            0
#define MT6335_RG_BUCK_VMD1_SFCHG_FRATE_MASK             0x7F
#define MT6335_RG_BUCK_VMD1_SFCHG_FRATE_SHIFT            0
#define MT6335_RG_BUCK_VMD1_SFCHG_FEN_MASK               0x1
#define MT6335_RG_BUCK_VMD1_SFCHG_FEN_SHIFT              7
#define MT6335_RG_BUCK_VMD1_SFCHG_RRATE_MASK             0x7F
#define MT6335_RG_BUCK_VMD1_SFCHG_RRATE_SHIFT            8
#define MT6335_RG_BUCK_VMD1_SFCHG_REN_MASK               0x1
#define MT6335_RG_BUCK_VMD1_SFCHG_REN_SHIFT              15
#define MT6335_RG_BUCK_VMD1_DVS_TRANS_TD_MASK            0x3
#define MT6335_RG_BUCK_VMD1_DVS_TRANS_TD_SHIFT           0
#define MT6335_RG_BUCK_VMD1_DVS_TRANS_CTRL_MASK          0x3
#define MT6335_RG_BUCK_VMD1_DVS_TRANS_CTRL_SHIFT         4
#define MT6335_RG_BUCK_VMD1_DVS_TRANS_ONCE_MASK          0x1
#define MT6335_RG_BUCK_VMD1_DVS_TRANS_ONCE_SHIFT         6
#define MT6335_RG_BUCK_VMD1_SW_OP_EN_MASK                0x1
#define MT6335_RG_BUCK_VMD1_SW_OP_EN_SHIFT               0
#define MT6335_RG_BUCK_VMD1_HW0_OP_EN_MASK               0x1
#define MT6335_RG_BUCK_VMD1_HW0_OP_EN_SHIFT              1
#define MT6335_RG_BUCK_VMD1_HW1_OP_EN_MASK               0x1
#define MT6335_RG_BUCK_VMD1_HW1_OP_EN_SHIFT              2
#define MT6335_RG_BUCK_VMD1_HW2_OP_EN_MASK               0x1
#define MT6335_RG_BUCK_VMD1_HW2_OP_EN_SHIFT              3
#define MT6335_RG_BUCK_VMD1_OP_EN_SET_MASK               0xFFFF
#define MT6335_RG_BUCK_VMD1_OP_EN_SET_SHIFT              0
#define MT6335_RG_BUCK_VMD1_OP_EN_CLR_MASK               0xFFFF
#define MT6335_RG_BUCK_VMD1_OP_EN_CLR_SHIFT              0
#define MT6335_RG_BUCK_VMD1_HW0_OP_CFG_MASK              0x1
#define MT6335_RG_BUCK_VMD1_HW0_OP_CFG_SHIFT             1
#define MT6335_RG_BUCK_VMD1_HW1_OP_CFG_MASK              0x1
#define MT6335_RG_BUCK_VMD1_HW1_OP_CFG_SHIFT             2
#define MT6335_RG_BUCK_VMD1_HW2_OP_CFG_MASK              0x1
#define MT6335_RG_BUCK_VMD1_HW2_OP_CFG_SHIFT             3
#define MT6335_RG_BUCK_VMD1_ON_OP_MASK                   0x1
#define MT6335_RG_BUCK_VMD1_ON_OP_SHIFT                  8
#define MT6335_RG_BUCK_VMD1_LP_OP_MASK                   0x1
#define MT6335_RG_BUCK_VMD1_LP_OP_SHIFT                  9
#define MT6335_RG_BUCK_VMD1_OP_CFG_SET_MASK              0xFFFF
#define MT6335_RG_BUCK_VMD1_OP_CFG_SET_SHIFT             0
#define MT6335_RG_BUCK_VMD1_OP_CFG_CLR_MASK              0xFFFF
#define MT6335_RG_BUCK_VMD1_OP_CFG_CLR_SHIFT             0
#define MT6335_RG_BUCK_VMD1_SP_SW_VOSEL_MASK             0x7F
#define MT6335_RG_BUCK_VMD1_SP_SW_VOSEL_SHIFT            0
#define MT6335_RG_BUCK_VMD1_SP_SW_VOSEL_EN_MASK          0x1
#define MT6335_RG_BUCK_VMD1_SP_SW_VOSEL_EN_SHIFT         0
#define MT6335_RG_BUCK_VMD1_SP_ON_VOSEL_MUX_SEL_MASK     0x1
#define MT6335_RG_BUCK_VMD1_SP_ON_VOSEL_MUX_SEL_SHIFT    1
#define MT6335_RG_BUCK_VMD1_OC_DEG_EN_MASK               0x1
#define MT6335_RG_BUCK_VMD1_OC_DEG_EN_SHIFT              1
#define MT6335_RG_BUCK_VMD1_OC_WND_MASK                  0x3
#define MT6335_RG_BUCK_VMD1_OC_WND_SHIFT                 2
#define MT6335_RG_BUCK_VMD1_OC_THD_MASK                  0x3
#define MT6335_RG_BUCK_VMD1_OC_THD_SHIFT                 6
#define MT6335_DA_NI_VMD1_VOSEL_MASK                     0x7F
#define MT6335_DA_NI_VMD1_VOSEL_SHIFT                    0
#define MT6335_DA_NI_VMD1_VOSEL_GRAY_MASK                0x7F
#define MT6335_DA_NI_VMD1_VOSEL_GRAY_SHIFT               8
#define MT6335_DA_QI_VMD1_EN_MASK                        0x1
#define MT6335_DA_QI_VMD1_EN_SHIFT                       0
#define MT6335_DA_VMD1_STB_MASK                          0x1
#define MT6335_DA_VMD1_STB_SHIFT                         1
#define MT6335_DA_NI_VMD1_VSLEEP_SEL_MASK                0x1
#define MT6335_DA_NI_VMD1_VSLEEP_SEL_SHIFT               2
#define MT6335_DA_NI_VMD1_R2R_PDN_MASK                   0x1
#define MT6335_DA_NI_VMD1_R2R_PDN_SHIFT                  3
#define MT6335_DA_QI_VMD1_DVS_EN_MASK                    0x1
#define MT6335_DA_QI_VMD1_DVS_EN_SHIFT                   4
#define MT6335_RG_BUCK_VMD1_LP_AUTO_EN_MASK              0x1
#define MT6335_RG_BUCK_VMD1_LP_AUTO_EN_SHIFT             0
#define MT6335_RG_BUCK_VMD1_LP_DBG_EN_MASK               0x1
#define MT6335_RG_BUCK_VMD1_LP_DBG_EN_SHIFT              1
#define MT6335_RG_BUCK_VMD1_VSLEEP_SEL_DBG_MASK          0x1
#define MT6335_RG_BUCK_VMD1_VSLEEP_SEL_DBG_SHIFT         2
#define MT6335_RG_BUCK_VMD1_R2R_PDN_DBG_MASK             0x1
#define MT6335_RG_BUCK_VMD1_R2R_PDN_DBG_SHIFT            3
#define MT6335_RG_BUCK_VMD1_OC_FLAG_CLR_SEL_MASK         0x1
#define MT6335_RG_BUCK_VMD1_OC_FLAG_CLR_SEL_SHIFT        4
#define MT6335_RG_BUCK_VMD1_OSC_SEL_DIS_MASK             0x1
#define MT6335_RG_BUCK_VMD1_OSC_SEL_DIS_SHIFT            5
#define MT6335_RG_BUCK_VMD1_CK_SW_MODE_MASK              0x1
#define MT6335_RG_BUCK_VMD1_CK_SW_MODE_SHIFT             6
#define MT6335_RG_BUCK_VMD1_CK_SW_EN_MASK                0x1
#define MT6335_RG_BUCK_VMD1_CK_SW_EN_SHIFT               7
#define MT6335_RG_BUCK_VMODEM_EN_MASK                    0x1
#define MT6335_RG_BUCK_VMODEM_EN_SHIFT                   0
#define MT6335_RG_BUCK_VMODEM_LP_MASK                    0x1
#define MT6335_RG_BUCK_VMODEM_LP_SHIFT                   1
#define MT6335_RG_BUCK_VMODEM_VOSEL_MASK                 0x7F
#define MT6335_RG_BUCK_VMODEM_VOSEL_SHIFT                0
#define MT6335_RG_BUCK_VMODEM_VOSEL_SLEEP_MASK           0x7F
#define MT6335_RG_BUCK_VMODEM_VOSEL_SLEEP_SHIFT          0
#define MT6335_RG_BUCK_VMODEM_SFCHG_FRATE_MASK           0x7F
#define MT6335_RG_BUCK_VMODEM_SFCHG_FRATE_SHIFT          0
#define MT6335_RG_BUCK_VMODEM_SFCHG_FEN_MASK             0x1
#define MT6335_RG_BUCK_VMODEM_SFCHG_FEN_SHIFT            7
#define MT6335_RG_BUCK_VMODEM_SFCHG_RRATE_MASK           0x7F
#define MT6335_RG_BUCK_VMODEM_SFCHG_RRATE_SHIFT          8
#define MT6335_RG_BUCK_VMODEM_SFCHG_REN_MASK             0x1
#define MT6335_RG_BUCK_VMODEM_SFCHG_REN_SHIFT            15
#define MT6335_RG_BUCK_VMODEM_DVS_TRANS_TD_MASK          0x3
#define MT6335_RG_BUCK_VMODEM_DVS_TRANS_TD_SHIFT         0
#define MT6335_RG_BUCK_VMODEM_DVS_TRANS_CTRL_MASK        0x3
#define MT6335_RG_BUCK_VMODEM_DVS_TRANS_CTRL_SHIFT       4
#define MT6335_RG_BUCK_VMODEM_DVS_TRANS_ONCE_MASK        0x1
#define MT6335_RG_BUCK_VMODEM_DVS_TRANS_ONCE_SHIFT       6
#define MT6335_RG_BUCK_VMODEM_SW_OP_EN_MASK              0x1
#define MT6335_RG_BUCK_VMODEM_SW_OP_EN_SHIFT             0
#define MT6335_RG_BUCK_VMODEM_HW0_OP_EN_MASK             0x1
#define MT6335_RG_BUCK_VMODEM_HW0_OP_EN_SHIFT            1
#define MT6335_RG_BUCK_VMODEM_HW1_OP_EN_MASK             0x1
#define MT6335_RG_BUCK_VMODEM_HW1_OP_EN_SHIFT            2
#define MT6335_RG_BUCK_VMODEM_HW2_OP_EN_MASK             0x1
#define MT6335_RG_BUCK_VMODEM_HW2_OP_EN_SHIFT            3
#define MT6335_RG_BUCK_VMODEM_OP_EN_SET_MASK             0xFFFF
#define MT6335_RG_BUCK_VMODEM_OP_EN_SET_SHIFT            0
#define MT6335_RG_BUCK_VMODEM_OP_EN_CLR_MASK             0xFFFF
#define MT6335_RG_BUCK_VMODEM_OP_EN_CLR_SHIFT            0
#define MT6335_RG_BUCK_VMODEM_HW0_OP_CFG_MASK            0x1
#define MT6335_RG_BUCK_VMODEM_HW0_OP_CFG_SHIFT           1
#define MT6335_RG_BUCK_VMODEM_HW1_OP_CFG_MASK            0x1
#define MT6335_RG_BUCK_VMODEM_HW1_OP_CFG_SHIFT           2
#define MT6335_RG_BUCK_VMODEM_HW2_OP_CFG_MASK            0x1
#define MT6335_RG_BUCK_VMODEM_HW2_OP_CFG_SHIFT           3
#define MT6335_RG_BUCK_VMODEM_ON_OP_MASK                 0x1
#define MT6335_RG_BUCK_VMODEM_ON_OP_SHIFT                8
#define MT6335_RG_BUCK_VMODEM_LP_OP_MASK                 0x1
#define MT6335_RG_BUCK_VMODEM_LP_OP_SHIFT                9
#define MT6335_RG_BUCK_VMODEM_OP_CFG_SET_MASK            0xFFFF
#define MT6335_RG_BUCK_VMODEM_OP_CFG_SET_SHIFT           0
#define MT6335_RG_BUCK_VMODEM_OP_CFG_CLR_MASK            0xFFFF
#define MT6335_RG_BUCK_VMODEM_OP_CFG_CLR_SHIFT           0
#define MT6335_RG_BUCK_VMODEM_SP_SW_VOSEL_MASK           0x7F
#define MT6335_RG_BUCK_VMODEM_SP_SW_VOSEL_SHIFT          0
#define MT6335_RG_BUCK_VMODEM_SP_SW_VOSEL_EN_MASK        0x1
#define MT6335_RG_BUCK_VMODEM_SP_SW_VOSEL_EN_SHIFT       0
#define MT6335_RG_BUCK_VMODEM_SP_ON_VOSEL_MUX_SEL_MASK   0x1
#define MT6335_RG_BUCK_VMODEM_SP_ON_VOSEL_MUX_SEL_SHIFT  1
#define MT6335_RG_BUCK_VMODEM_OC_DEG_EN_MASK             0x1
#define MT6335_RG_BUCK_VMODEM_OC_DEG_EN_SHIFT            1
#define MT6335_RG_BUCK_VMODEM_OC_WND_MASK                0x3
#define MT6335_RG_BUCK_VMODEM_OC_WND_SHIFT               2
#define MT6335_RG_BUCK_VMODEM_OC_THD_MASK                0x3
#define MT6335_RG_BUCK_VMODEM_OC_THD_SHIFT               6
#define MT6335_DA_NI_VMODEM_VOSEL_MASK                   0x7F
#define MT6335_DA_NI_VMODEM_VOSEL_SHIFT                  0
#define MT6335_DA_NI_VMODEM_VOSEL_GRAY_MASK              0x7F
#define MT6335_DA_NI_VMODEM_VOSEL_GRAY_SHIFT             8
#define MT6335_DA_QI_VMODEM_EN_MASK                      0x1
#define MT6335_DA_QI_VMODEM_EN_SHIFT                     0
#define MT6335_DA_VMODEM_STB_MASK                        0x1
#define MT6335_DA_VMODEM_STB_SHIFT                       1
#define MT6335_DA_NI_VMODEM_VSLEEP_SEL_MASK              0x1
#define MT6335_DA_NI_VMODEM_VSLEEP_SEL_SHIFT             2
#define MT6335_DA_NI_VMODEM_R2R_PDN_MASK                 0x1
#define MT6335_DA_NI_VMODEM_R2R_PDN_SHIFT                3
#define MT6335_DA_QI_VMODEM_DVS_EN_MASK                  0x1
#define MT6335_DA_QI_VMODEM_DVS_EN_SHIFT                 4
#define MT6335_RG_BUCK_VMODEM_LP_AUTO_EN_MASK            0x1
#define MT6335_RG_BUCK_VMODEM_LP_AUTO_EN_SHIFT           0
#define MT6335_RG_BUCK_VMODEM_LP_DBG_EN_MASK             0x1
#define MT6335_RG_BUCK_VMODEM_LP_DBG_EN_SHIFT            1
#define MT6335_RG_BUCK_VMODEM_VSLEEP_SEL_DBG_MASK        0x1
#define MT6335_RG_BUCK_VMODEM_VSLEEP_SEL_DBG_SHIFT       2
#define MT6335_RG_BUCK_VMODEM_R2R_PDN_DBG_MASK           0x1
#define MT6335_RG_BUCK_VMODEM_R2R_PDN_DBG_SHIFT          3
#define MT6335_RG_BUCK_VMODEM_OC_FLAG_CLR_SEL_MASK       0x1
#define MT6335_RG_BUCK_VMODEM_OC_FLAG_CLR_SEL_SHIFT      4
#define MT6335_RG_BUCK_VMODEM_OSC_SEL_DIS_MASK           0x1
#define MT6335_RG_BUCK_VMODEM_OSC_SEL_DIS_SHIFT          5
#define MT6335_RG_BUCK_VMODEM_CK_SW_MODE_MASK            0x1
#define MT6335_RG_BUCK_VMODEM_CK_SW_MODE_SHIFT           6
#define MT6335_RG_BUCK_VMODEM_CK_SW_EN_MASK              0x1
#define MT6335_RG_BUCK_VMODEM_CK_SW_EN_SHIFT             7
#define MT6335_RG_BUCK_VS1_EN_MASK                       0x1
#define MT6335_RG_BUCK_VS1_EN_SHIFT                      0
#define MT6335_RG_BUCK_VS1_LP_MASK                       0x1
#define MT6335_RG_BUCK_VS1_LP_SHIFT                      1
#define MT6335_RG_BUCK_VS1_VOSEL_MASK                    0x7F
#define MT6335_RG_BUCK_VS1_VOSEL_SHIFT                   0
#define MT6335_RG_BUCK_VS1_VOSEL_SLEEP_MASK              0x7F
#define MT6335_RG_BUCK_VS1_VOSEL_SLEEP_SHIFT             0
#define MT6335_RG_BUCK_VS1_SFCHG_FRATE_MASK              0x7F
#define MT6335_RG_BUCK_VS1_SFCHG_FRATE_SHIFT             0
#define MT6335_RG_BUCK_VS1_SFCHG_FEN_MASK                0x1
#define MT6335_RG_BUCK_VS1_SFCHG_FEN_SHIFT               7
#define MT6335_RG_BUCK_VS1_SFCHG_RRATE_MASK              0x7F
#define MT6335_RG_BUCK_VS1_SFCHG_RRATE_SHIFT             8
#define MT6335_RG_BUCK_VS1_SFCHG_REN_MASK                0x1
#define MT6335_RG_BUCK_VS1_SFCHG_REN_SHIFT               15
#define MT6335_RG_BUCK_VS1_DVS_TRANS_TD_MASK             0x3
#define MT6335_RG_BUCK_VS1_DVS_TRANS_TD_SHIFT            0
#define MT6335_RG_BUCK_VS1_DVS_TRANS_CTRL_MASK           0x3
#define MT6335_RG_BUCK_VS1_DVS_TRANS_CTRL_SHIFT          4
#define MT6335_RG_BUCK_VS1_DVS_TRANS_ONCE_MASK           0x1
#define MT6335_RG_BUCK_VS1_DVS_TRANS_ONCE_SHIFT          6
#define MT6335_RG_BUCK_VS1_SW_OP_EN_MASK                 0x1
#define MT6335_RG_BUCK_VS1_SW_OP_EN_SHIFT                0
#define MT6335_RG_BUCK_VS1_HW0_OP_EN_MASK                0x1
#define MT6335_RG_BUCK_VS1_HW0_OP_EN_SHIFT               1
#define MT6335_RG_BUCK_VS1_HW1_OP_EN_MASK                0x1
#define MT6335_RG_BUCK_VS1_HW1_OP_EN_SHIFT               2
#define MT6335_RG_BUCK_VS1_HW2_OP_EN_MASK                0x1
#define MT6335_RG_BUCK_VS1_HW2_OP_EN_SHIFT               3
#define MT6335_RG_BUCK_VS1_OP_EN_SET_MASK                0xFFFF
#define MT6335_RG_BUCK_VS1_OP_EN_SET_SHIFT               0
#define MT6335_RG_BUCK_VS1_OP_EN_CLR_MASK                0xFFFF
#define MT6335_RG_BUCK_VS1_OP_EN_CLR_SHIFT               0
#define MT6335_RG_BUCK_VS1_HW0_OP_CFG_MASK               0x1
#define MT6335_RG_BUCK_VS1_HW0_OP_CFG_SHIFT              1
#define MT6335_RG_BUCK_VS1_HW1_OP_CFG_MASK               0x1
#define MT6335_RG_BUCK_VS1_HW1_OP_CFG_SHIFT              2
#define MT6335_RG_BUCK_VS1_HW2_OP_CFG_MASK               0x1
#define MT6335_RG_BUCK_VS1_HW2_OP_CFG_SHIFT              3
#define MT6335_RG_BUCK_VS1_ON_OP_MASK                    0x1
#define MT6335_RG_BUCK_VS1_ON_OP_SHIFT                   8
#define MT6335_RG_BUCK_VS1_LP_OP_MASK                    0x1
#define MT6335_RG_BUCK_VS1_LP_OP_SHIFT                   9
#define MT6335_RG_BUCK_VS1_OP_CFG_SET_MASK               0xFFFF
#define MT6335_RG_BUCK_VS1_OP_CFG_SET_SHIFT              0
#define MT6335_RG_BUCK_VS1_OP_CFG_CLR_MASK               0xFFFF
#define MT6335_RG_BUCK_VS1_OP_CFG_CLR_SHIFT              0
#define MT6335_RG_BUCK_VS1_SP_SW_VOSEL_MASK              0x7F
#define MT6335_RG_BUCK_VS1_SP_SW_VOSEL_SHIFT             0
#define MT6335_RG_BUCK_VS1_SP_SW_VOSEL_EN_MASK           0x1
#define MT6335_RG_BUCK_VS1_SP_SW_VOSEL_EN_SHIFT          0
#define MT6335_RG_BUCK_VS1_SP_ON_VOSEL_MUX_SEL_MASK      0x1
#define MT6335_RG_BUCK_VS1_SP_ON_VOSEL_MUX_SEL_SHIFT     1
#define MT6335_RG_BUCK_VS1_OC_DEG_EN_MASK                0x1
#define MT6335_RG_BUCK_VS1_OC_DEG_EN_SHIFT               1
#define MT6335_RG_BUCK_VS1_OC_WND_MASK                   0x3
#define MT6335_RG_BUCK_VS1_OC_WND_SHIFT                  2
#define MT6335_RG_BUCK_VS1_OC_THD_MASK                   0x3
#define MT6335_RG_BUCK_VS1_OC_THD_SHIFT                  6
#define MT6335_DA_NI_VS1_VOSEL_MASK                      0x7F
#define MT6335_DA_NI_VS1_VOSEL_SHIFT                     0
#define MT6335_DA_NI_VS1_VOSEL_GRAY_MASK                 0x7F
#define MT6335_DA_NI_VS1_VOSEL_GRAY_SHIFT                8
#define MT6335_DA_QI_VS1_EN_MASK                         0x1
#define MT6335_DA_QI_VS1_EN_SHIFT                        0
#define MT6335_DA_VS1_STB_MASK                           0x1
#define MT6335_DA_VS1_STB_SHIFT                          1
#define MT6335_DA_NI_VS1_VSLEEP_SEL_MASK                 0x1
#define MT6335_DA_NI_VS1_VSLEEP_SEL_SHIFT                2
#define MT6335_DA_NI_VS1_R2R_PDN_MASK                    0x1
#define MT6335_DA_NI_VS1_R2R_PDN_SHIFT                   3
#define MT6335_DA_QI_VS1_DVS_EN_MASK                     0x1
#define MT6335_DA_QI_VS1_DVS_EN_SHIFT                    4
#define MT6335_RG_BUCK_VS1_LP_AUTO_EN_MASK               0x1
#define MT6335_RG_BUCK_VS1_LP_AUTO_EN_SHIFT              0
#define MT6335_RG_BUCK_VS1_LP_DBG_EN_MASK                0x1
#define MT6335_RG_BUCK_VS1_LP_DBG_EN_SHIFT               1
#define MT6335_RG_BUCK_VS1_VSLEEP_SEL_DBG_MASK           0x1
#define MT6335_RG_BUCK_VS1_VSLEEP_SEL_DBG_SHIFT          2
#define MT6335_RG_BUCK_VS1_R2R_PDN_DBG_MASK              0x1
#define MT6335_RG_BUCK_VS1_R2R_PDN_DBG_SHIFT             3
#define MT6335_RG_BUCK_VS1_OC_FLAG_CLR_SEL_MASK          0x1
#define MT6335_RG_BUCK_VS1_OC_FLAG_CLR_SEL_SHIFT         4
#define MT6335_RG_BUCK_VS1_OSC_SEL_DIS_MASK              0x1
#define MT6335_RG_BUCK_VS1_OSC_SEL_DIS_SHIFT             5
#define MT6335_RG_BUCK_VS1_CK_SW_MODE_MASK               0x1
#define MT6335_RG_BUCK_VS1_CK_SW_MODE_SHIFT              6
#define MT6335_RG_BUCK_VS1_CK_SW_EN_MASK                 0x1
#define MT6335_RG_BUCK_VS1_CK_SW_EN_SHIFT                7
#define MT6335_RG_BUCK_VS2_EN_MASK                       0x1
#define MT6335_RG_BUCK_VS2_EN_SHIFT                      0
#define MT6335_RG_BUCK_VS2_LP_MASK                       0x1
#define MT6335_RG_BUCK_VS2_LP_SHIFT                      1
#define MT6335_RG_BUCK_VS2_VOSEL_MASK                    0x7F
#define MT6335_RG_BUCK_VS2_VOSEL_SHIFT                   0
#define MT6335_RG_BUCK_VS2_VOSEL_SLEEP_MASK              0x7F
#define MT6335_RG_BUCK_VS2_VOSEL_SLEEP_SHIFT             0
#define MT6335_RG_BUCK_VS2_SFCHG_FRATE_MASK              0x7F
#define MT6335_RG_BUCK_VS2_SFCHG_FRATE_SHIFT             0
#define MT6335_RG_BUCK_VS2_SFCHG_FEN_MASK                0x1
#define MT6335_RG_BUCK_VS2_SFCHG_FEN_SHIFT               7
#define MT6335_RG_BUCK_VS2_SFCHG_RRATE_MASK              0x7F
#define MT6335_RG_BUCK_VS2_SFCHG_RRATE_SHIFT             8
#define MT6335_RG_BUCK_VS2_SFCHG_REN_MASK                0x1
#define MT6335_RG_BUCK_VS2_SFCHG_REN_SHIFT               15
#define MT6335_RG_BUCK_VS2_DVS_TRANS_TD_MASK             0x3
#define MT6335_RG_BUCK_VS2_DVS_TRANS_TD_SHIFT            0
#define MT6335_RG_BUCK_VS2_DVS_TRANS_CTRL_MASK           0x3
#define MT6335_RG_BUCK_VS2_DVS_TRANS_CTRL_SHIFT          4
#define MT6335_RG_BUCK_VS2_DVS_TRANS_ONCE_MASK           0x1
#define MT6335_RG_BUCK_VS2_DVS_TRANS_ONCE_SHIFT          6
#define MT6335_RG_BUCK_VS2_SW_OP_EN_MASK                 0x1
#define MT6335_RG_BUCK_VS2_SW_OP_EN_SHIFT                0
#define MT6335_RG_BUCK_VS2_HW0_OP_EN_MASK                0x1
#define MT6335_RG_BUCK_VS2_HW0_OP_EN_SHIFT               1
#define MT6335_RG_BUCK_VS2_HW1_OP_EN_MASK                0x1
#define MT6335_RG_BUCK_VS2_HW1_OP_EN_SHIFT               2
#define MT6335_RG_BUCK_VS2_HW2_OP_EN_MASK                0x1
#define MT6335_RG_BUCK_VS2_HW2_OP_EN_SHIFT               3
#define MT6335_RG_BUCK_VS2_OP_EN_SET_MASK                0xFFFF
#define MT6335_RG_BUCK_VS2_OP_EN_SET_SHIFT               0
#define MT6335_RG_BUCK_VS2_OP_EN_CLR_MASK                0xFFFF
#define MT6335_RG_BUCK_VS2_OP_EN_CLR_SHIFT               0
#define MT6335_RG_BUCK_VS2_HW0_OP_CFG_MASK               0x1
#define MT6335_RG_BUCK_VS2_HW0_OP_CFG_SHIFT              1
#define MT6335_RG_BUCK_VS2_HW1_OP_CFG_MASK               0x1
#define MT6335_RG_BUCK_VS2_HW1_OP_CFG_SHIFT              2
#define MT6335_RG_BUCK_VS2_HW2_OP_CFG_MASK               0x1
#define MT6335_RG_BUCK_VS2_HW2_OP_CFG_SHIFT              3
#define MT6335_RG_BUCK_VS2_ON_OP_MASK                    0x1
#define MT6335_RG_BUCK_VS2_ON_OP_SHIFT                   8
#define MT6335_RG_BUCK_VS2_LP_OP_MASK                    0x1
#define MT6335_RG_BUCK_VS2_LP_OP_SHIFT                   9
#define MT6335_RG_BUCK_VS2_OP_CFG_SET_MASK               0xFFFF
#define MT6335_RG_BUCK_VS2_OP_CFG_SET_SHIFT              0
#define MT6335_RG_BUCK_VS2_OP_CFG_CLR_MASK               0xFFFF
#define MT6335_RG_BUCK_VS2_OP_CFG_CLR_SHIFT              0
#define MT6335_RG_BUCK_VS2_SP_SW_VOSEL_MASK              0x7F
#define MT6335_RG_BUCK_VS2_SP_SW_VOSEL_SHIFT             0
#define MT6335_RG_BUCK_VS2_SP_SW_VOSEL_EN_MASK           0x1
#define MT6335_RG_BUCK_VS2_SP_SW_VOSEL_EN_SHIFT          0
#define MT6335_RG_BUCK_VS2_SP_ON_VOSEL_MUX_SEL_MASK      0x1
#define MT6335_RG_BUCK_VS2_SP_ON_VOSEL_MUX_SEL_SHIFT     1
#define MT6335_RG_BUCK_VS2_OC_DEG_EN_MASK                0x1
#define MT6335_RG_BUCK_VS2_OC_DEG_EN_SHIFT               1
#define MT6335_RG_BUCK_VS2_OC_WND_MASK                   0x3
#define MT6335_RG_BUCK_VS2_OC_WND_SHIFT                  2
#define MT6335_RG_BUCK_VS2_OC_THD_MASK                   0x3
#define MT6335_RG_BUCK_VS2_OC_THD_SHIFT                  6
#define MT6335_DA_NI_VS2_VOSEL_MASK                      0x7F
#define MT6335_DA_NI_VS2_VOSEL_SHIFT                     0
#define MT6335_DA_NI_VS2_VOSEL_GRAY_MASK                 0x7F
#define MT6335_DA_NI_VS2_VOSEL_GRAY_SHIFT                8
#define MT6335_DA_QI_VS2_EN_MASK                         0x1
#define MT6335_DA_QI_VS2_EN_SHIFT                        0
#define MT6335_DA_VS2_STB_MASK                           0x1
#define MT6335_DA_VS2_STB_SHIFT                          1
#define MT6335_DA_NI_VS2_VSLEEP_SEL_MASK                 0x1
#define MT6335_DA_NI_VS2_VSLEEP_SEL_SHIFT                2
#define MT6335_DA_NI_VS2_R2R_PDN_MASK                    0x1
#define MT6335_DA_NI_VS2_R2R_PDN_SHIFT                   3
#define MT6335_DA_QI_VS2_DVS_EN_MASK                     0x1
#define MT6335_DA_QI_VS2_DVS_EN_SHIFT                    4
#define MT6335_RG_BUCK_VS2_LP_AUTO_EN_MASK               0x1
#define MT6335_RG_BUCK_VS2_LP_AUTO_EN_SHIFT              0
#define MT6335_RG_BUCK_VS2_LP_DBG_EN_MASK                0x1
#define MT6335_RG_BUCK_VS2_LP_DBG_EN_SHIFT               1
#define MT6335_RG_BUCK_VS2_VSLEEP_SEL_DBG_MASK           0x1
#define MT6335_RG_BUCK_VS2_VSLEEP_SEL_DBG_SHIFT          2
#define MT6335_RG_BUCK_VS2_R2R_PDN_DBG_MASK              0x1
#define MT6335_RG_BUCK_VS2_R2R_PDN_DBG_SHIFT             3
#define MT6335_RG_BUCK_VS2_OC_FLAG_CLR_SEL_MASK          0x1
#define MT6335_RG_BUCK_VS2_OC_FLAG_CLR_SEL_SHIFT         4
#define MT6335_RG_BUCK_VS2_OSC_SEL_DIS_MASK              0x1
#define MT6335_RG_BUCK_VS2_OSC_SEL_DIS_SHIFT             5
#define MT6335_RG_BUCK_VS2_CK_SW_MODE_MASK               0x1
#define MT6335_RG_BUCK_VS2_CK_SW_MODE_SHIFT              6
#define MT6335_RG_BUCK_VS2_CK_SW_EN_MASK                 0x1
#define MT6335_RG_BUCK_VS2_CK_SW_EN_SHIFT                7
#define MT6335_RG_BUCK_VPA1_EN_MASK                      0x1
#define MT6335_RG_BUCK_VPA1_EN_SHIFT                     0
#define MT6335_RG_BUCK_VPA1_VOSEL_MASK                   0x3F
#define MT6335_RG_BUCK_VPA1_VOSEL_SHIFT                  0
#define MT6335_RG_BUCK_VPA1_SFCHG_FRATE_MASK             0x7F
#define MT6335_RG_BUCK_VPA1_SFCHG_FRATE_SHIFT            0
#define MT6335_RG_BUCK_VPA1_SFCHG_FEN_MASK               0x1
#define MT6335_RG_BUCK_VPA1_SFCHG_FEN_SHIFT              7
#define MT6335_RG_BUCK_VPA1_SFCHG_RRATE_MASK             0x7F
#define MT6335_RG_BUCK_VPA1_SFCHG_RRATE_SHIFT            8
#define MT6335_RG_BUCK_VPA1_SFCHG_REN_MASK               0x1
#define MT6335_RG_BUCK_VPA1_SFCHG_REN_SHIFT              15
#define MT6335_RG_BUCK_VPA1_DVS_TRANS_TD_MASK            0x3
#define MT6335_RG_BUCK_VPA1_DVS_TRANS_TD_SHIFT           0
#define MT6335_RG_BUCK_VPA1_DVS_TRANS_CTRL_MASK          0x3
#define MT6335_RG_BUCK_VPA1_DVS_TRANS_CTRL_SHIFT         4
#define MT6335_RG_BUCK_VPA1_DVS_TRANS_ONCE_MASK          0x1
#define MT6335_RG_BUCK_VPA1_DVS_TRANS_ONCE_SHIFT         6
#define MT6335_RG_BUCK_VPA1_DVS_BW_TD_MASK               0x3
#define MT6335_RG_BUCK_VPA1_DVS_BW_TD_SHIFT              0
#define MT6335_RG_BUCK_VPA1_DVS_BW_CTRL_MASK             0x3
#define MT6335_RG_BUCK_VPA1_DVS_BW_CTRL_SHIFT            4
#define MT6335_RG_BUCK_VPA1_DVS_BW_ONCE_MASK             0x1
#define MT6335_RG_BUCK_VPA1_DVS_BW_ONCE_SHIFT            6
#define MT6335_RG_BUCK_VPA1_OC_DEG_EN_MASK               0x1
#define MT6335_RG_BUCK_VPA1_OC_DEG_EN_SHIFT              1
#define MT6335_RG_BUCK_VPA1_OC_WND_MASK                  0x3
#define MT6335_RG_BUCK_VPA1_OC_WND_SHIFT                 2
#define MT6335_RG_BUCK_VPA1_OC_THD_MASK                  0x3
#define MT6335_RG_BUCK_VPA1_OC_THD_SHIFT                 6
#define MT6335_DA_NI_VPA1_VOSEL_MASK                     0x3F
#define MT6335_DA_NI_VPA1_VOSEL_SHIFT                    0
#define MT6335_DA_NI_VPA1_VOSEL_GRAY_MASK                0x3F
#define MT6335_DA_NI_VPA1_VOSEL_GRAY_SHIFT               8
#define MT6335_DA_QI_VPA1_EN_MASK                        0x1
#define MT6335_DA_QI_VPA1_EN_SHIFT                       0
#define MT6335_DA_VPA1_STB_MASK                          0x1
#define MT6335_DA_VPA1_STB_SHIFT                         1
#define MT6335_DA_NI_VPA1_DVS_TRANST_MASK                0x1
#define MT6335_DA_NI_VPA1_DVS_TRANST_SHIFT               5
#define MT6335_DA_NI_VPA1_DVS_BW_MASK                    0x1
#define MT6335_DA_NI_VPA1_DVS_BW_SHIFT                   6
#define MT6335_DA_NI_VPA1_DLC_MASK                       0x7
#define MT6335_DA_NI_VPA1_DLC_SHIFT                      12
#define MT6335_RG_BUCK_VPA1_LP_DBG_EN_MASK               0x1
#define MT6335_RG_BUCK_VPA1_LP_DBG_EN_SHIFT              1
#define MT6335_RG_BUCK_VPA1_OC_FLAG_CLR_SEL_MASK         0x1
#define MT6335_RG_BUCK_VPA1_OC_FLAG_CLR_SEL_SHIFT        4
#define MT6335_RG_BUCK_VPA1_OSC_SEL_DIS_MASK             0x1
#define MT6335_RG_BUCK_VPA1_OSC_SEL_DIS_SHIFT            5
#define MT6335_RG_BUCK_VPA1_CK_SW_MODE_MASK              0x1
#define MT6335_RG_BUCK_VPA1_CK_SW_MODE_SHIFT             6
#define MT6335_RG_BUCK_VPA1_CK_SW_EN_MASK                0x1
#define MT6335_RG_BUCK_VPA1_CK_SW_EN_SHIFT               7
#define MT6335_RG_BUCK_VPA1_VOSEL_DLC011_MASK            0x3F
#define MT6335_RG_BUCK_VPA1_VOSEL_DLC011_SHIFT           0
#define MT6335_RG_BUCK_VPA1_VOSEL_DLC111_MASK            0x3F
#define MT6335_RG_BUCK_VPA1_VOSEL_DLC111_SHIFT           8
#define MT6335_RG_BUCK_VPA1_VOSEL_DLC001_MASK            0x3F
#define MT6335_RG_BUCK_VPA1_VOSEL_DLC001_SHIFT           8
#define MT6335_RG_BUCK_VPA1_DLC_MAP_EN_MASK              0x1
#define MT6335_RG_BUCK_VPA1_DLC_MAP_EN_SHIFT             0
#define MT6335_RG_BUCK_VPA1_DLC_MASK                     0x7
#define MT6335_RG_BUCK_VPA1_DLC_SHIFT                    8
#define MT6335_RG_BUCK_VPA1_MSFG_EN_MASK                 0x1
#define MT6335_RG_BUCK_VPA1_MSFG_EN_SHIFT                0
#define MT6335_RG_BUCK_VPA1_MSFG_RDELTA2GO_MASK          0x3F
#define MT6335_RG_BUCK_VPA1_MSFG_RDELTA2GO_SHIFT         0
#define MT6335_RG_BUCK_VPA1_MSFG_FDELTA2GO_MASK          0x3F
#define MT6335_RG_BUCK_VPA1_MSFG_FDELTA2GO_SHIFT         8
#define MT6335_RG_BUCK_VPA1_MSFG_RRATE0_MASK             0xF
#define MT6335_RG_BUCK_VPA1_MSFG_RRATE0_SHIFT            0
#define MT6335_RG_BUCK_VPA1_MSFG_RRATE1_MASK             0xF
#define MT6335_RG_BUCK_VPA1_MSFG_RRATE1_SHIFT            4
#define MT6335_RG_BUCK_VPA1_MSFG_RRATE2_MASK             0xF
#define MT6335_RG_BUCK_VPA1_MSFG_RRATE2_SHIFT            8
#define MT6335_RG_BUCK_VPA1_MSFG_RRATE3_MASK             0xF
#define MT6335_RG_BUCK_VPA1_MSFG_RRATE3_SHIFT            12
#define MT6335_RG_BUCK_VPA1_MSFG_RRATE4_MASK             0xF
#define MT6335_RG_BUCK_VPA1_MSFG_RRATE4_SHIFT            0
#define MT6335_RG_BUCK_VPA1_MSFG_RRATE5_MASK             0xF
#define MT6335_RG_BUCK_VPA1_MSFG_RRATE5_SHIFT            4
#define MT6335_RG_BUCK_VPA1_MSFG_RTHD0_MASK              0x3F
#define MT6335_RG_BUCK_VPA1_MSFG_RTHD0_SHIFT             0
#define MT6335_RG_BUCK_VPA1_MSFG_RTHD1_MASK              0x3F
#define MT6335_RG_BUCK_VPA1_MSFG_RTHD1_SHIFT             8
#define MT6335_RG_BUCK_VPA1_MSFG_RTHD2_MASK              0x3F
#define MT6335_RG_BUCK_VPA1_MSFG_RTHD2_SHIFT             0
#define MT6335_RG_BUCK_VPA1_MSFG_RTHD3_MASK              0x3F
#define MT6335_RG_BUCK_VPA1_MSFG_RTHD3_SHIFT             8
#define MT6335_RG_BUCK_VPA1_MSFG_RTHD4_MASK              0x3F
#define MT6335_RG_BUCK_VPA1_MSFG_RTHD4_SHIFT             0
#define MT6335_RG_BUCK_VPA1_MSFG_FRATE0_MASK             0xF
#define MT6335_RG_BUCK_VPA1_MSFG_FRATE0_SHIFT            0
#define MT6335_RG_BUCK_VPA1_MSFG_FRATE1_MASK             0xF
#define MT6335_RG_BUCK_VPA1_MSFG_FRATE1_SHIFT            4
#define MT6335_RG_BUCK_VPA1_MSFG_FRATE2_MASK             0xF
#define MT6335_RG_BUCK_VPA1_MSFG_FRATE2_SHIFT            8
#define MT6335_RG_BUCK_VPA1_MSFG_FRATE3_MASK             0xF
#define MT6335_RG_BUCK_VPA1_MSFG_FRATE3_SHIFT            12
#define MT6335_RG_BUCK_VPA1_MSFG_FRATE4_MASK             0xF
#define MT6335_RG_BUCK_VPA1_MSFG_FRATE4_SHIFT            0
#define MT6335_RG_BUCK_VPA1_MSFG_FRATE5_MASK             0xF
#define MT6335_RG_BUCK_VPA1_MSFG_FRATE5_SHIFT            4
#define MT6335_RG_BUCK_VPA1_MSFG_FTHD0_MASK              0x3F
#define MT6335_RG_BUCK_VPA1_MSFG_FTHD0_SHIFT             0
#define MT6335_RG_BUCK_VPA1_MSFG_FTHD1_MASK              0x3F
#define MT6335_RG_BUCK_VPA1_MSFG_FTHD1_SHIFT             8
#define MT6335_RG_BUCK_VPA1_MSFG_FTHD2_MASK              0x3F
#define MT6335_RG_BUCK_VPA1_MSFG_FTHD2_SHIFT             0
#define MT6335_RG_BUCK_VPA1_MSFG_FTHD3_MASK              0x3F
#define MT6335_RG_BUCK_VPA1_MSFG_FTHD3_SHIFT             8
#define MT6335_RG_BUCK_VPA1_MSFG_FTHD4_MASK              0x3F
#define MT6335_RG_BUCK_VPA1_MSFG_FTHD4_SHIFT             0
#define MT6335_RG_BUCK_VPA2_EN_MASK                      0x1
#define MT6335_RG_BUCK_VPA2_EN_SHIFT                     0
#define MT6335_RG_BUCK_VPA2_VOSEL_MASK                   0x3F
#define MT6335_RG_BUCK_VPA2_VOSEL_SHIFT                  0
#define MT6335_RG_BUCK_VPA2_SFCHG_FRATE_MASK             0x7F
#define MT6335_RG_BUCK_VPA2_SFCHG_FRATE_SHIFT            0
#define MT6335_RG_BUCK_VPA2_SFCHG_FEN_MASK               0x1
#define MT6335_RG_BUCK_VPA2_SFCHG_FEN_SHIFT              7
#define MT6335_RG_BUCK_VPA2_SFCHG_RRATE_MASK             0x7F
#define MT6335_RG_BUCK_VPA2_SFCHG_RRATE_SHIFT            8
#define MT6335_RG_BUCK_VPA2_SFCHG_REN_MASK               0x1
#define MT6335_RG_BUCK_VPA2_SFCHG_REN_SHIFT              15
#define MT6335_RG_BUCK_VPA2_DVS_TRANS_TD_MASK            0x3
#define MT6335_RG_BUCK_VPA2_DVS_TRANS_TD_SHIFT           0
#define MT6335_RG_BUCK_VPA2_DVS_TRANS_CTRL_MASK          0x3
#define MT6335_RG_BUCK_VPA2_DVS_TRANS_CTRL_SHIFT         4
#define MT6335_RG_BUCK_VPA2_DVS_TRANS_ONCE_MASK          0x1
#define MT6335_RG_BUCK_VPA2_DVS_TRANS_ONCE_SHIFT         6
#define MT6335_RG_BUCK_VPA2_DVS_BW_TD_MASK               0x3
#define MT6335_RG_BUCK_VPA2_DVS_BW_TD_SHIFT              0
#define MT6335_RG_BUCK_VPA2_DVS_BW_CTRL_MASK             0x3
#define MT6335_RG_BUCK_VPA2_DVS_BW_CTRL_SHIFT            4
#define MT6335_RG_BUCK_VPA2_DVS_BW_ONCE_MASK             0x1
#define MT6335_RG_BUCK_VPA2_DVS_BW_ONCE_SHIFT            6
#define MT6335_RG_BUCK_VPA2_OC_DEG_EN_MASK               0x1
#define MT6335_RG_BUCK_VPA2_OC_DEG_EN_SHIFT              1
#define MT6335_RG_BUCK_VPA2_OC_WND_MASK                  0x3
#define MT6335_RG_BUCK_VPA2_OC_WND_SHIFT                 2
#define MT6335_RG_BUCK_VPA2_OC_THD_MASK                  0x3
#define MT6335_RG_BUCK_VPA2_OC_THD_SHIFT                 6
#define MT6335_DA_NI_VPA2_VOSEL_MASK                     0x3F
#define MT6335_DA_NI_VPA2_VOSEL_SHIFT                    0
#define MT6335_DA_NI_VPA2_VOSEL_GRAY_MASK                0x3F
#define MT6335_DA_NI_VPA2_VOSEL_GRAY_SHIFT               8
#define MT6335_DA_QI_VPA2_EN_MASK                        0x1
#define MT6335_DA_QI_VPA2_EN_SHIFT                       0
#define MT6335_DA_VPA2_STB_MASK                          0x1
#define MT6335_DA_VPA2_STB_SHIFT                         1
#define MT6335_DA_NI_VPA2_DVS_TRANST_MASK                0x1
#define MT6335_DA_NI_VPA2_DVS_TRANST_SHIFT               5
#define MT6335_DA_NI_VPA2_DVS_BW_MASK                    0x1
#define MT6335_DA_NI_VPA2_DVS_BW_SHIFT                   6
#define MT6335_DA_NI_VPA2_DLC_MASK                       0x7
#define MT6335_DA_NI_VPA2_DLC_SHIFT                      12
#define MT6335_RG_BUCK_VPA2_LP_DBG_EN_MASK               0x1
#define MT6335_RG_BUCK_VPA2_LP_DBG_EN_SHIFT              1
#define MT6335_RG_BUCK_VPA2_OC_FLAG_CLR_SEL_MASK         0x1
#define MT6335_RG_BUCK_VPA2_OC_FLAG_CLR_SEL_SHIFT        4
#define MT6335_RG_BUCK_VPA2_OSC_SEL_DIS_MASK             0x1
#define MT6335_RG_BUCK_VPA2_OSC_SEL_DIS_SHIFT            5
#define MT6335_RG_BUCK_VPA2_CK_SW_MODE_MASK              0x1
#define MT6335_RG_BUCK_VPA2_CK_SW_MODE_SHIFT             6
#define MT6335_RG_BUCK_VPA2_CK_SW_EN_MASK                0x1
#define MT6335_RG_BUCK_VPA2_CK_SW_EN_SHIFT               7
#define MT6335_RG_BUCK_VPA2_VOSEL_DLC011_MASK            0x3F
#define MT6335_RG_BUCK_VPA2_VOSEL_DLC011_SHIFT           0
#define MT6335_RG_BUCK_VPA2_VOSEL_DLC111_MASK            0x3F
#define MT6335_RG_BUCK_VPA2_VOSEL_DLC111_SHIFT           8
#define MT6335_RG_BUCK_VPA2_VOSEL_DLC001_MASK            0x3F
#define MT6335_RG_BUCK_VPA2_VOSEL_DLC001_SHIFT           8
#define MT6335_RG_BUCK_VPA2_DLC_MAP_EN_MASK              0x1
#define MT6335_RG_BUCK_VPA2_DLC_MAP_EN_SHIFT             0
#define MT6335_RG_BUCK_VPA2_DLC_MASK                     0x7
#define MT6335_RG_BUCK_VPA2_DLC_SHIFT                    8
#define MT6335_RG_BUCK_VPA2_MSFG_EN_MASK                 0x1
#define MT6335_RG_BUCK_VPA2_MSFG_EN_SHIFT                0
#define MT6335_RG_BUCK_VPA2_MSFG_RDELTA2GO_MASK          0x3F
#define MT6335_RG_BUCK_VPA2_MSFG_RDELTA2GO_SHIFT         0
#define MT6335_RG_BUCK_VPA2_MSFG_FDELTA2GO_MASK          0x3F
#define MT6335_RG_BUCK_VPA2_MSFG_FDELTA2GO_SHIFT         8
#define MT6335_RG_BUCK_VPA2_MSFG_RRATE0_MASK             0xF
#define MT6335_RG_BUCK_VPA2_MSFG_RRATE0_SHIFT            0
#define MT6335_RG_BUCK_VPA2_MSFG_RRATE1_MASK             0xF
#define MT6335_RG_BUCK_VPA2_MSFG_RRATE1_SHIFT            4
#define MT6335_RG_BUCK_VPA2_MSFG_RRATE2_MASK             0xF
#define MT6335_RG_BUCK_VPA2_MSFG_RRATE2_SHIFT            8
#define MT6335_RG_BUCK_VPA2_MSFG_RRATE3_MASK             0xF
#define MT6335_RG_BUCK_VPA2_MSFG_RRATE3_SHIFT            12
#define MT6335_RG_BUCK_VPA2_MSFG_RRATE4_MASK             0xF
#define MT6335_RG_BUCK_VPA2_MSFG_RRATE4_SHIFT            0
#define MT6335_RG_BUCK_VPA2_MSFG_RRATE5_MASK             0xF
#define MT6335_RG_BUCK_VPA2_MSFG_RRATE5_SHIFT            4
#define MT6335_RG_BUCK_VPA2_MSFG_RTHD0_MASK              0x3F
#define MT6335_RG_BUCK_VPA2_MSFG_RTHD0_SHIFT             0
#define MT6335_RG_BUCK_VPA2_MSFG_RTHD1_MASK              0x3F
#define MT6335_RG_BUCK_VPA2_MSFG_RTHD1_SHIFT             8
#define MT6335_RG_BUCK_VPA2_MSFG_RTHD2_MASK              0x3F
#define MT6335_RG_BUCK_VPA2_MSFG_RTHD2_SHIFT             0
#define MT6335_RG_BUCK_VPA2_MSFG_RTHD3_MASK              0x3F
#define MT6335_RG_BUCK_VPA2_MSFG_RTHD3_SHIFT             8
#define MT6335_RG_BUCK_VPA2_MSFG_RTHD4_MASK              0x3F
#define MT6335_RG_BUCK_VPA2_MSFG_RTHD4_SHIFT             0
#define MT6335_RG_BUCK_VPA2_MSFG_FRATE0_MASK             0xF
#define MT6335_RG_BUCK_VPA2_MSFG_FRATE0_SHIFT            0
#define MT6335_RG_BUCK_VPA2_MSFG_FRATE1_MASK             0xF
#define MT6335_RG_BUCK_VPA2_MSFG_FRATE1_SHIFT            4
#define MT6335_RG_BUCK_VPA2_MSFG_FRATE2_MASK             0xF
#define MT6335_RG_BUCK_VPA2_MSFG_FRATE2_SHIFT            8
#define MT6335_RG_BUCK_VPA2_MSFG_FRATE3_MASK             0xF
#define MT6335_RG_BUCK_VPA2_MSFG_FRATE3_SHIFT            12
#define MT6335_RG_BUCK_VPA2_MSFG_FRATE4_MASK             0xF
#define MT6335_RG_BUCK_VPA2_MSFG_FRATE4_SHIFT            0
#define MT6335_RG_BUCK_VPA2_MSFG_FRATE5_MASK             0xF
#define MT6335_RG_BUCK_VPA2_MSFG_FRATE5_SHIFT            4
#define MT6335_RG_BUCK_VPA2_MSFG_FTHD0_MASK              0x3F
#define MT6335_RG_BUCK_VPA2_MSFG_FTHD0_SHIFT             0
#define MT6335_RG_BUCK_VPA2_MSFG_FTHD1_MASK              0x3F
#define MT6335_RG_BUCK_VPA2_MSFG_FTHD1_SHIFT             8
#define MT6335_RG_BUCK_VPA2_MSFG_FTHD2_MASK              0x3F
#define MT6335_RG_BUCK_VPA2_MSFG_FTHD2_SHIFT             0
#define MT6335_RG_BUCK_VPA2_MSFG_FTHD3_MASK              0x3F
#define MT6335_RG_BUCK_VPA2_MSFG_FTHD3_SHIFT             8
#define MT6335_RG_BUCK_VPA2_MSFG_FTHD4_MASK              0x3F
#define MT6335_RG_BUCK_VPA2_MSFG_FTHD4_SHIFT             0
#define MT6335_RG_SMPS_TESTMODE_B_MASK                   0xFFF
#define MT6335_RG_SMPS_TESTMODE_B_SHIFT                  0
#define MT6335_RG_VPA1_BURSTH_MASK                       0x3
#define MT6335_RG_VPA1_BURSTH_SHIFT                      12
#define MT6335_RG_VPA1_BURSTL_MASK                       0x3
#define MT6335_RG_VPA1_BURSTL_SHIFT                      14
#define MT6335_RG_VPA1_TRIMH_MASK                        0x1F
#define MT6335_RG_VPA1_TRIMH_SHIFT                       0
#define MT6335_RG_VPA1_TRIML_MASK                        0x1F
#define MT6335_RG_VPA1_TRIML_SHIFT                       5
#define MT6335_RG_VPA1_TRIM_REF_MASK                     0x1F
#define MT6335_RG_VPA1_TRIM_REF_SHIFT                    10
#define MT6335_RG_VPA2_BURSTH_MASK                       0x3
#define MT6335_RG_VPA2_BURSTH_SHIFT                      0
#define MT6335_RG_VPA2_BURSTL_MASK                       0x3
#define MT6335_RG_VPA2_BURSTL_SHIFT                      2
#define MT6335_RG_VPA2_TRIMH_MASK                        0x1F
#define MT6335_RG_VPA2_TRIMH_SHIFT                       4
#define MT6335_RG_VPA2_TRIML_MASK                        0x1F
#define MT6335_RG_VPA2_TRIML_SHIFT                       9
#define MT6335_RG_VPA2_TRIM_REF_MASK                     0x1F
#define MT6335_RG_VPA2_TRIM_REF_SHIFT                    0
#define MT6335_RG_VCORE_TRIMH_MASK                       0x1F
#define MT6335_RG_VCORE_TRIMH_SHIFT                      5
#define MT6335_RG_VCORE_TRIML_MASK                       0x1F
#define MT6335_RG_VCORE_TRIML_SHIFT                      10
#define MT6335_RG_VCORE_VSLEEP_MASK                      0x7
#define MT6335_RG_VCORE_VSLEEP_SHIFT                     0
#define MT6335_RG_VDRAM_TRIMH_MASK                       0x1F
#define MT6335_RG_VDRAM_TRIMH_SHIFT                      3
#define MT6335_RG_VDRAM_TRIML_MASK                       0x1F
#define MT6335_RG_VDRAM_TRIML_SHIFT                      8
#define MT6335_RG_VDRAM_VSLEEP_MASK                      0x7
#define MT6335_RG_VDRAM_VSLEEP_SHIFT                     0
#define MT6335_RG_VMODEM_TRIMH_MASK                      0x1F
#define MT6335_RG_VMODEM_TRIMH_SHIFT                     3
#define MT6335_RG_VMODEM_TRIML_MASK                      0x1F
#define MT6335_RG_VMODEM_TRIML_SHIFT                     8
#define MT6335_RG_VMODEM_VSLEEP_MASK                     0x7
#define MT6335_RG_VMODEM_VSLEEP_SHIFT                    0
#define MT6335_RG_VMD1_TRIMH_MASK                        0x1F
#define MT6335_RG_VMD1_TRIMH_SHIFT                       3
#define MT6335_RG_VMD1_TRIML_MASK                        0x1F
#define MT6335_RG_VMD1_TRIML_SHIFT                       8
#define MT6335_RG_VMD1_VSLEEP_MASK                       0x7
#define MT6335_RG_VMD1_VSLEEP_SHIFT                      13
#define MT6335_RG_VS1_TRIMH_MASK                         0x1F
#define MT6335_RG_VS1_TRIMH_SHIFT                        3
#define MT6335_RG_VS1_TRIML_MASK                         0x1F
#define MT6335_RG_VS1_TRIML_SHIFT                        8
#define MT6335_RG_VS1_VSLEEP_MASK                        0x7
#define MT6335_RG_VS1_VSLEEP_SHIFT                       13
#define MT6335_RG_VS2_TRIML_MASK                         0x1F
#define MT6335_RG_VS2_TRIML_SHIFT                        3
#define MT6335_RG_VS2_VSLEEP_MASK                        0x7
#define MT6335_RG_VS2_VSLEEP_SHIFT                       8
#define MT6335_RG_VSRAM_DVFS1_TRIMH_MASK                 0x1F
#define MT6335_RG_VSRAM_DVFS1_TRIMH_SHIFT                11
#define MT6335_RG_VSRAM_DVFS2_TRIMH_MASK                 0x1F
#define MT6335_RG_VSRAM_DVFS2_TRIMH_SHIFT                0
#define MT6335_RG_VSRAM_VCORE_TRIMH_MASK                 0x1F
#define MT6335_RG_VSRAM_VCORE_TRIMH_SHIFT                6
#define MT6335_RG_VSRAM_VMD_TRIMH_MASK                   0x1F
#define MT6335_RG_VSRAM_VMD_TRIMH_SHIFT                  11
#define MT6335_RG_VSRAM_VGPU_TRIMH_MASK                  0x1F
#define MT6335_RG_VSRAM_VGPU_TRIMH_SHIFT                 0
#define MT6335_RG_VSRAM_DVFS1_TRIML_MASK                 0x1F
#define MT6335_RG_VSRAM_DVFS1_TRIML_SHIFT                5
#define MT6335_RG_VSRAM_DVFS2_TRIML_MASK                 0x1F
#define MT6335_RG_VSRAM_DVFS2_TRIML_SHIFT                10
#define MT6335_RG_VSRAM_VCORE_TRIML_MASK                 0x1F
#define MT6335_RG_VSRAM_VCORE_TRIML_SHIFT                0
#define MT6335_RG_VSRAM_VMD_TRIML_MASK                   0x1F
#define MT6335_RG_VSRAM_VMD_TRIML_SHIFT                  5
#define MT6335_RG_VSRAM_VGPU_TRIML_MASK                  0x1F
#define MT6335_RG_VSRAM_VGPU_TRIML_SHIFT                 10
#define MT6335_RG_VSRAM_DVFS1_VSLEEP_MASK                0x7
#define MT6335_RG_VSRAM_DVFS1_VSLEEP_SHIFT               0
#define MT6335_RG_VSRAM_DVFS2_VSLEEP_MASK                0x7
#define MT6335_RG_VSRAM_DVFS2_VSLEEP_SHIFT               3
#define MT6335_RG_VSRAM_VCORE_VSLEEP_MASK                0x7
#define MT6335_RG_VSRAM_VCORE_VSLEEP_SHIFT               6
#define MT6335_RG_VSRAM_VMD_VSLEEP_MASK                  0x7
#define MT6335_RG_VSRAM_VMD_VSLEEP_SHIFT                 9
#define MT6335_RG_VSRAM_VGPU_VSLEEP_MASK                 0x7
#define MT6335_RG_VSRAM_VGPU_VSLEEP_SHIFT                12
#define MT6335_RG_VCORE_SLEEP_VOLTAGE_MASK               0x3
#define MT6335_RG_VCORE_SLEEP_VOLTAGE_SHIFT              0
#define MT6335_RG_VDRAM_SLEEP_VOLTAGE_MASK               0x1
#define MT6335_RG_VDRAM_SLEEP_VOLTAGE_SHIFT              2
#define MT6335_RG_VMODEM_SLEEP_VOLTAGE_MASK              0x3
#define MT6335_RG_VMODEM_SLEEP_VOLTAGE_SHIFT             3
#define MT6335_RG_VMD1_SLEEP_VOLTAGE_MASK                0x3
#define MT6335_RG_VMD1_SLEEP_VOLTAGE_SHIFT               5
#define MT6335_RG_VS1_SLEEP_VOLTAGE_MASK                 0x3
#define MT6335_RG_VS1_SLEEP_VOLTAGE_SHIFT                7
#define MT6335_RG_VS2_SLEEP_VOLTAGE_MASK                 0x3
#define MT6335_RG_VS2_SLEEP_VOLTAGE_SHIFT                9
#define MT6335_RG_VSRAM_DVFS1_SLEEP_VOLTAGE_MASK         0x7
#define MT6335_RG_VSRAM_DVFS1_SLEEP_VOLTAGE_SHIFT        11
#define MT6335_RG_VSRAM_DVFS2_SLEEP_VOLTAGE_MASK         0x7
#define MT6335_RG_VSRAM_DVFS2_SLEEP_VOLTAGE_SHIFT        0
#define MT6335_RG_VSRAM_VCORE_SLEEP_VOLTAGE_MASK         0x7
#define MT6335_RG_VSRAM_VCORE_SLEEP_VOLTAGE_SHIFT        3
#define MT6335_RG_VSRAM_VMD_SLEEP_VOLTAGE_MASK           0x7
#define MT6335_RG_VSRAM_VMD_SLEEP_VOLTAGE_SHIFT          6
#define MT6335_RG_VSRAM_VGPU_SLEEP_VOLTAGE_MASK          0x7
#define MT6335_RG_VSRAM_VGPU_SLEEP_VOLTAGE_SHIFT         9
#define MT6335_RG_VOUTDET_EN_MASK                        0x1
#define MT6335_RG_VOUTDET_EN_SHIFT                       12
#define MT6335_RG_SMPS_IVGD_DET_MASK                     0x1
#define MT6335_RG_SMPS_IVGD_DET_SHIFT                    13
#define MT6335_RG_VS2_TRIMH_MASK                         0x1F
#define MT6335_RG_VS2_TRIMH_SHIFT                        0
#define MT6335_RG_VCORE_MODESET_MASK                     0x1
#define MT6335_RG_VCORE_MODESET_SHIFT                    1
#define MT6335_RG_VCORE_NDIS_EN_MASK                     0x1
#define MT6335_RG_VCORE_NDIS_EN_SHIFT                    2
#define MT6335_RG_VCORE_VRF18_SSTART_EN_MASK             0x1
#define MT6335_RG_VCORE_VRF18_SSTART_EN_SHIFT            3
#define MT6335_RG_VCORE_AUTO_MODE_MASK                   0x1
#define MT6335_RG_VCORE_AUTO_MODE_SHIFT                  4
#define MT6335_RG_VCORE_RZSEL0_MASK                      0x7
#define MT6335_RG_VCORE_RZSEL0_SHIFT                     0
#define MT6335_RG_VCORE_RZSEL1_MASK                      0xF
#define MT6335_RG_VCORE_RZSEL1_SHIFT                     3
#define MT6335_RG_VCORE_CCSEL0_MASK                      0x3
#define MT6335_RG_VCORE_CCSEL0_SHIFT                     7
#define MT6335_RG_VCORE_CCSEL1_MASK                      0x3
#define MT6335_RG_VCORE_CCSEL1_SHIFT                     9
#define MT6335_RG_VCORE_CSL_MASK                         0xF
#define MT6335_RG_VCORE_CSL_SHIFT                        11
#define MT6335_RG_VCORE_SLP_MASK                         0x7
#define MT6335_RG_VCORE_SLP_SHIFT                        0
#define MT6335_RG_VCORE_ADRC_FEN_MASK                    0x1
#define MT6335_RG_VCORE_ADRC_FEN_SHIFT                   3
#define MT6335_RG_VCORE_VCCAP_CLAMP_FEN_MASK             0x1
#define MT6335_RG_VCORE_VCCAP_CLAMP_FEN_SHIFT            4
#define MT6335_RG_VCORE_VC_CLAMP_FEN_MASK                0x1
#define MT6335_RG_VCORE_VC_CLAMP_FEN_SHIFT               5
#define MT6335_RG_VCORE_PREOC_SEL_MASK                   0x7
#define MT6335_RG_VCORE_PREOC_SEL_SHIFT                  6
#define MT6335_RG_VCORE_PFMOC_MASK                       0x7
#define MT6335_RG_VCORE_PFMOC_SHIFT                      9
#define MT6335_RG_VCORE_CSR_MASK                         0x7
#define MT6335_RG_VCORE_CSR_SHIFT                        12
#define MT6335_RG_VCORE_ZXOS_TRIM_MASK                   0xFF
#define MT6335_RG_VCORE_ZXOS_TRIM_SHIFT                  0
#define MT6335_RG_VCORE_CSM_N_MASK                       0x3F
#define MT6335_RG_VCORE_CSM_N_SHIFT                      8
#define MT6335_RG_VCORE_CSM_P_MASK                       0x3F
#define MT6335_RG_VCORE_CSM_P_SHIFT                      0
#define MT6335_RG_VCORE_PFMSR_EH_MASK                    0x1
#define MT6335_RG_VCORE_PFMSR_EH_SHIFT                   6
#define MT6335_RG_VCORE_NLIM_GATING_MASK                 0x1
#define MT6335_RG_VCORE_NLIM_GATING_SHIFT                7
#define MT6335_RG_VCORE_PWRSR_EH_MASK                    0x1
#define MT6335_RG_VCORE_PWRSR_EH_SHIFT                   8
#define MT6335_RG_VCORE_HS_VTHDET_MASK                   0x1
#define MT6335_RG_VCORE_HS_VTHDET_SHIFT                  9
#define MT6335_RG_VCORE_PG_GATING_MASK                   0x1
#define MT6335_RG_VCORE_PG_GATING_SHIFT                  10
#define MT6335_RG_VCORE_HS_ONSPEED_EH_MASK               0x1
#define MT6335_RG_VCORE_HS_ONSPEED_EH_SHIFT              11
#define MT6335_RG_VCORE_NLIM_TRIMMING_MASK               0xF
#define MT6335_RG_VCORE_NLIM_TRIMMING_SHIFT              12
#define MT6335_RG_VCORE_DLC_MASK                         0x3
#define MT6335_RG_VCORE_DLC_SHIFT                        0
#define MT6335_RG_VCORE_DLC_N_MASK                       0x3
#define MT6335_RG_VCORE_DLC_N_SHIFT                      2
#define MT6335_RG_VCORE_PFM_RIP_MASK                     0x7
#define MT6335_RG_VCORE_PFM_RIP_SHIFT                    4
#define MT6335_RG_VCORE_TRAN_BST_MASK                    0x3F
#define MT6335_RG_VCORE_TRAN_BST_SHIFT                   7
#define MT6335_RG_VCORE_DTS_ENB_MASK                     0x1
#define MT6335_RG_VCORE_DTS_ENB_SHIFT                    13
#define MT6335_RG_VCORE_MIN_OFF_MASK                     0x3
#define MT6335_RG_VCORE_MIN_OFF_SHIFT                    14
#define MT6335_RG_VCORE_1P35UP_SEL_EN_MASK               0x1
#define MT6335_RG_VCORE_1P35UP_SEL_EN_SHIFT              0
#define MT6335_RG_VCORE_DLC_AUTO_MODE_MASK               0x1
#define MT6335_RG_VCORE_DLC_AUTO_MODE_SHIFT              1
#define MT6335_RG_VCORE_DLC_SEL_MASK                     0x7
#define MT6335_RG_VCORE_DLC_SEL_SHIFT                    2
#define MT6335_RG_VCORE_SRC_AUTO_MODE_MASK               0x1
#define MT6335_RG_VCORE_SRC_AUTO_MODE_SHIFT              5
#define MT6335_RG_VCORE_UGP_SR_MASK                      0x3
#define MT6335_RG_VCORE_UGP_SR_SHIFT                     6
#define MT6335_RG_VCORE_LGN_SR_MASK                      0x3
#define MT6335_RG_VCORE_LGN_SR_SHIFT                     8
#define MT6335_RG_VCORE_UGP_SR_PFM_MASK                  0x3
#define MT6335_RG_VCORE_UGP_SR_PFM_SHIFT                 10
#define MT6335_RG_VCORE_LGN_SR_PFM_MASK                  0x3
#define MT6335_RG_VCORE_LGN_SR_PFM_SHIFT                 12
#define MT6335_RG_VCORE_UGD_VTHSEL_MASK                  0x3
#define MT6335_RG_VCORE_UGD_VTHSEL_SHIFT                 14
#define MT6335_RG_VCORE_FNLX_SNS_MASK                    0x1
#define MT6335_RG_VCORE_FNLX_SNS_SHIFT                   0
#define MT6335_RG_VCORE_VDIFF_ENLOWIQ_MASK               0x1
#define MT6335_RG_VCORE_VDIFF_ENLOWIQ_SHIFT              1
#define MT6335_RG_VCORE_PFMOC_FWUPOFF_MASK               0x1
#define MT6335_RG_VCORE_PFMOC_FWUPOFF_SHIFT              2
#define MT6335_RG_VCORE_PWFMOC_FWUPOFF_MASK              0x1
#define MT6335_RG_VCORE_PWFMOC_FWUPOFF_SHIFT             3
#define MT6335_RG_VCORE_CP_FWUPOFF_MASK                  0x1
#define MT6335_RG_VCORE_CP_FWUPOFF_SHIFT                 4
#define MT6335_RG_VCORE_ZX_GATING_MASK                   0x1
#define MT6335_RG_VCORE_ZX_GATING_SHIFT                  5
#define MT6335_RG_VCORE_RSV_MASK                         0xFFFF
#define MT6335_RG_VCORE_RSV_SHIFT                        0
#define MT6335_RG_VCORE_PREOC_TRIMMING_MASK              0x1F
#define MT6335_RG_VCORE_PREOC_TRIMMING_SHIFT             0
#define MT6335_RG_VCORE_AZC_EN_MASK                      0x1
#define MT6335_RG_VCORE_AZC_EN_SHIFT                     5
#define MT6335_RG_VCORE_AZC_DELAY_MASK                   0x3
#define MT6335_RG_VCORE_AZC_DELAY_SHIFT                  6
#define MT6335_RG_VCORE_AZC_HOLD_ENB_MASK                0x1
#define MT6335_RG_VCORE_AZC_HOLD_ENB_SHIFT               8
#define MT6335_RGS_QI_VCORE_OC_STATUS_MASK               0x1
#define MT6335_RGS_QI_VCORE_OC_STATUS_SHIFT              9
#define MT6335_RGS_QI_VCORE_DIG_MON_MASK                 0xF
#define MT6335_RGS_QI_VCORE_DIG_MON_SHIFT                10
#define MT6335_RGS_VCORE_ENPWM_STATUS_MASK               0x1
#define MT6335_RGS_VCORE_ENPWM_STATUS_SHIFT              14
#define MT6335_RGS_QI_VCORE_PREOC_MASK                   0x1
#define MT6335_RGS_QI_VCORE_PREOC_SHIFT                  15
#define MT6335_RG_VDRAM_MODESET_MASK                     0x1
#define MT6335_RG_VDRAM_MODESET_SHIFT                    1
#define MT6335_RG_VDRAM_NDIS_EN_MASK                     0x1
#define MT6335_RG_VDRAM_NDIS_EN_SHIFT                    2
#define MT6335_RG_VDRAM_VRF18_SSTART_EN_MASK             0x1
#define MT6335_RG_VDRAM_VRF18_SSTART_EN_SHIFT            3
#define MT6335_RG_VDRAM_AUTO_MODE_MASK                   0x1
#define MT6335_RG_VDRAM_AUTO_MODE_SHIFT                  4
#define MT6335_RG_VDRAM_RZSEL0_MASK                      0x7
#define MT6335_RG_VDRAM_RZSEL0_SHIFT                     0
#define MT6335_RG_VDRAM_RZSEL1_MASK                      0xF
#define MT6335_RG_VDRAM_RZSEL1_SHIFT                     3
#define MT6335_RG_VDRAM_CCSEL0_MASK                      0x3
#define MT6335_RG_VDRAM_CCSEL0_SHIFT                     7
#define MT6335_RG_VDRAM_CCSEL1_MASK                      0x3
#define MT6335_RG_VDRAM_CCSEL1_SHIFT                     9
#define MT6335_RG_VDRAM_CSL_MASK                         0xF
#define MT6335_RG_VDRAM_CSL_SHIFT                        11
#define MT6335_RG_VDRAM_SLP_MASK                         0x7
#define MT6335_RG_VDRAM_SLP_SHIFT                        0
#define MT6335_RG_VDRAM_ADRC_FEN_MASK                    0x1
#define MT6335_RG_VDRAM_ADRC_FEN_SHIFT                   3
#define MT6335_RG_VDRAM_VCCAP_CLAMP_FEN_MASK             0x1
#define MT6335_RG_VDRAM_VCCAP_CLAMP_FEN_SHIFT            4
#define MT6335_RG_VDRAM_VC_CLAMP_FEN_MASK                0x1
#define MT6335_RG_VDRAM_VC_CLAMP_FEN_SHIFT               5
#define MT6335_RG_VDRAM_PFMOC_MASK                       0x7
#define MT6335_RG_VDRAM_PFMOC_SHIFT                      6
#define MT6335_RG_VDRAM_CSR_MASK                         0x7
#define MT6335_RG_VDRAM_CSR_SHIFT                        9
#define MT6335_RG_VDRAM_ZXOS_TRIM_MASK                   0xFF
#define MT6335_RG_VDRAM_ZXOS_TRIM_SHIFT                  0
#define MT6335_RG_VDRAM_PFMSR_EH_MASK                    0x1
#define MT6335_RG_VDRAM_PFMSR_EH_SHIFT                   0
#define MT6335_RG_VDRAM_NLIM_GATING_MASK                 0x1
#define MT6335_RG_VDRAM_NLIM_GATING_SHIFT                1
#define MT6335_RG_VDRAM_PWRSR_EH_MASK                    0x1
#define MT6335_RG_VDRAM_PWRSR_EH_SHIFT                   2
#define MT6335_RG_VDRAM_HS_VTHDET_MASK                   0x1
#define MT6335_RG_VDRAM_HS_VTHDET_SHIFT                  3
#define MT6335_RG_VDRAM_PG_GATING_MASK                   0x1
#define MT6335_RG_VDRAM_PG_GATING_SHIFT                  4
#define MT6335_RG_VDRAM_HS_ONSPEED_EH_MASK               0x1
#define MT6335_RG_VDRAM_HS_ONSPEED_EH_SHIFT              5
#define MT6335_RG_VDRAM_NLIM_TRIMMING_MASK               0xF
#define MT6335_RG_VDRAM_NLIM_TRIMMING_SHIFT              6
#define MT6335_RG_VDRAM_DLC_MASK                         0x3
#define MT6335_RG_VDRAM_DLC_SHIFT                        0
#define MT6335_RG_VDRAM_DLC_N_MASK                       0x3
#define MT6335_RG_VDRAM_DLC_N_SHIFT                      2
#define MT6335_RG_VDRAM_PFM_RIP_MASK                     0x7
#define MT6335_RG_VDRAM_PFM_RIP_SHIFT                    4
#define MT6335_RG_VDRAM_TRAN_BST_MASK                    0x3F
#define MT6335_RG_VDRAM_TRAN_BST_SHIFT                   7
#define MT6335_RG_VDRAM_DTS_ENB_MASK                     0x1
#define MT6335_RG_VDRAM_DTS_ENB_SHIFT                    13
#define MT6335_RG_VDRAM_MIN_OFF_MASK                     0x3
#define MT6335_RG_VDRAM_MIN_OFF_SHIFT                    14
#define MT6335_RG_VDRAM_1P35UP_SEL_EN_MASK               0x1
#define MT6335_RG_VDRAM_1P35UP_SEL_EN_SHIFT              0
#define MT6335_RG_VDRAM_DLC_AUTO_MODE_MASK               0x1
#define MT6335_RG_VDRAM_DLC_AUTO_MODE_SHIFT              1
#define MT6335_RG_VDRAM_DLC_SEL_MASK                     0x7
#define MT6335_RG_VDRAM_DLC_SEL_SHIFT                    2
#define MT6335_RG_VDRAM_SRC_AUTO_MODE_MASK               0x1
#define MT6335_RG_VDRAM_SRC_AUTO_MODE_SHIFT              5
#define MT6335_RG_VDRAM_UGP_SR_MASK                      0x3
#define MT6335_RG_VDRAM_UGP_SR_SHIFT                     6
#define MT6335_RG_VDRAM_LGN_SR_MASK                      0x3
#define MT6335_RG_VDRAM_LGN_SR_SHIFT                     8
#define MT6335_RG_VDRAM_UGP_SR_PFM_MASK                  0x3
#define MT6335_RG_VDRAM_UGP_SR_PFM_SHIFT                 10
#define MT6335_RG_VDRAM_LGN_SR_PFM_MASK                  0x3
#define MT6335_RG_VDRAM_LGN_SR_PFM_SHIFT                 12
#define MT6335_RG_VDRAM_UGD_VTHSEL_MASK                  0x3
#define MT6335_RG_VDRAM_UGD_VTHSEL_SHIFT                 14
#define MT6335_RG_VDRAM_FNLX_SNS_MASK                    0x1
#define MT6335_RG_VDRAM_FNLX_SNS_SHIFT                   0
#define MT6335_RG_VDRAM_VDIFF_ENLOWIQ_MASK               0x1
#define MT6335_RG_VDRAM_VDIFF_ENLOWIQ_SHIFT              1
#define MT6335_RG_VDRAM_PFMOC_FWUPOFF_MASK               0x1
#define MT6335_RG_VDRAM_PFMOC_FWUPOFF_SHIFT              2
#define MT6335_RG_VDRAM_PWFMOC_FWUPOFF_MASK              0x1
#define MT6335_RG_VDRAM_PWFMOC_FWUPOFF_SHIFT             3
#define MT6335_RG_VDRAM_CP_FWUPOFF_MASK                  0x1
#define MT6335_RG_VDRAM_CP_FWUPOFF_SHIFT                 4
#define MT6335_RG_VDRAM_ZX_GATING_MASK                   0x1
#define MT6335_RG_VDRAM_ZX_GATING_SHIFT                  5
#define MT6335_RG_VDRAM_RSV_MASK                         0xFFFF
#define MT6335_RG_VDRAM_RSV_SHIFT                        0
#define MT6335_RG_VDRAM_AZC_EN_MASK                      0x1
#define MT6335_RG_VDRAM_AZC_EN_SHIFT                     0
#define MT6335_RG_VDRAM_AZC_DELAY_MASK                   0x3
#define MT6335_RG_VDRAM_AZC_DELAY_SHIFT                  1
#define MT6335_RG_VDRAM_AZC_HOLD_ENB_MASK                0x1
#define MT6335_RG_VDRAM_AZC_HOLD_ENB_SHIFT               3
#define MT6335_RGS_QI_VDRAM_OC_STATUS_MASK               0x1
#define MT6335_RGS_QI_VDRAM_OC_STATUS_SHIFT              4
#define MT6335_RGS_QI_VDRAM_DIG_MON_MASK                 0xF
#define MT6335_RGS_QI_VDRAM_DIG_MON_SHIFT                5
#define MT6335_RGS_VDRAM_ENPWM_STATUS_MASK               0x1
#define MT6335_RGS_VDRAM_ENPWM_STATUS_SHIFT              9
#define MT6335_RG_VMODEM_MODESET_MASK                    0x1
#define MT6335_RG_VMODEM_MODESET_SHIFT                   1
#define MT6335_RG_VMODEM_NDIS_EN_MASK                    0x1
#define MT6335_RG_VMODEM_NDIS_EN_SHIFT                   2
#define MT6335_RG_VMODEM_VRF18_SSTART_EN_MASK            0x1
#define MT6335_RG_VMODEM_VRF18_SSTART_EN_SHIFT           3
#define MT6335_RG_VMODEM_AUTO_MODE_MASK                  0x1
#define MT6335_RG_VMODEM_AUTO_MODE_SHIFT                 4
#define MT6335_RG_VMODEM_RZSEL0_MASK                     0x7
#define MT6335_RG_VMODEM_RZSEL0_SHIFT                    0
#define MT6335_RG_VMODEM_RZSEL1_MASK                     0xF
#define MT6335_RG_VMODEM_RZSEL1_SHIFT                    3
#define MT6335_RG_VMODEM_CCSEL0_MASK                     0x3
#define MT6335_RG_VMODEM_CCSEL0_SHIFT                    7
#define MT6335_RG_VMODEM_CCSEL1_MASK                     0x3
#define MT6335_RG_VMODEM_CCSEL1_SHIFT                    9
#define MT6335_RG_VMODEM_CSL_MASK                        0xF
#define MT6335_RG_VMODEM_CSL_SHIFT                       11
#define MT6335_RG_VMODEM_SLP_MASK                        0x7
#define MT6335_RG_VMODEM_SLP_SHIFT                       0
#define MT6335_RG_VMODEM_ADRC_FEN_MASK                   0x1
#define MT6335_RG_VMODEM_ADRC_FEN_SHIFT                  3
#define MT6335_RG_VMODEM_VCCAP_CLAMP_FEN_MASK            0x1
#define MT6335_RG_VMODEM_VCCAP_CLAMP_FEN_SHIFT           4
#define MT6335_RG_VMODEM_VC_CLAMP_FEN_MASK               0x1
#define MT6335_RG_VMODEM_VC_CLAMP_FEN_SHIFT              5
#define MT6335_RG_VMODEM_PFMOC_MASK                      0x7
#define MT6335_RG_VMODEM_PFMOC_SHIFT                     6
#define MT6335_RG_VMODEM_CSR_MASK                        0x7
#define MT6335_RG_VMODEM_CSR_SHIFT                       9
#define MT6335_RG_VMODEM_ZXOS_TRIM_MASK                  0xFF
#define MT6335_RG_VMODEM_ZXOS_TRIM_SHIFT                 0
#define MT6335_RG_VMODEM_PFMSR_EH_MASK                   0x1
#define MT6335_RG_VMODEM_PFMSR_EH_SHIFT                  0
#define MT6335_RG_VMODEM_NLIM_GATING_MASK                0x1
#define MT6335_RG_VMODEM_NLIM_GATING_SHIFT               1
#define MT6335_RG_VMODEM_PWRSR_EH_MASK                   0x1
#define MT6335_RG_VMODEM_PWRSR_EH_SHIFT                  2
#define MT6335_RG_VMODEM_HS_VTHDET_MASK                  0x1
#define MT6335_RG_VMODEM_HS_VTHDET_SHIFT                 3
#define MT6335_RG_VMODEM_PG_GATING_MASK                  0x1
#define MT6335_RG_VMODEM_PG_GATING_SHIFT                 4
#define MT6335_RG_VMODEM_HS_ONSPEED_EH_MASK              0x1
#define MT6335_RG_VMODEM_HS_ONSPEED_EH_SHIFT             5
#define MT6335_RG_VMODEM_NLIM_TRIMMING_MASK              0xF
#define MT6335_RG_VMODEM_NLIM_TRIMMING_SHIFT             6
#define MT6335_RG_VMODEM_DLC_MASK                        0x3
#define MT6335_RG_VMODEM_DLC_SHIFT                       0
#define MT6335_RG_VMODEM_DLC_N_MASK                      0x3
#define MT6335_RG_VMODEM_DLC_N_SHIFT                     2
#define MT6335_RG_VMODEM_PFM_RIP_MASK                    0x7
#define MT6335_RG_VMODEM_PFM_RIP_SHIFT                   4
#define MT6335_RG_VMODEM_TRAN_BST_MASK                   0x3F
#define MT6335_RG_VMODEM_TRAN_BST_SHIFT                  7
#define MT6335_RG_VMODEM_DTS_ENB_MASK                    0x1
#define MT6335_RG_VMODEM_DTS_ENB_SHIFT                   13
#define MT6335_RG_VMODEM_MIN_OFF_MASK                    0x3
#define MT6335_RG_VMODEM_MIN_OFF_SHIFT                   14
#define MT6335_RG_VMODEM_1P35UP_SEL_EN_MASK              0x1
#define MT6335_RG_VMODEM_1P35UP_SEL_EN_SHIFT             0
#define MT6335_RG_VMODEM_DLC_AUTO_MODE_MASK              0x1
#define MT6335_RG_VMODEM_DLC_AUTO_MODE_SHIFT             1
#define MT6335_RG_VMODEM_DLC_SEL_MASK                    0x7
#define MT6335_RG_VMODEM_DLC_SEL_SHIFT                   2
#define MT6335_RG_VMODEM_SRC_AUTO_MODE_MASK              0x1
#define MT6335_RG_VMODEM_SRC_AUTO_MODE_SHIFT             5
#define MT6335_RG_VMODEM_UGP_SR_MASK                     0x3
#define MT6335_RG_VMODEM_UGP_SR_SHIFT                    6
#define MT6335_RG_VMODEM_LGN_SR_MASK                     0x3
#define MT6335_RG_VMODEM_LGN_SR_SHIFT                    8
#define MT6335_RG_VMODEM_UGP_SR_PFM_MASK                 0x3
#define MT6335_RG_VMODEM_UGP_SR_PFM_SHIFT                10
#define MT6335_RG_VMODEM_LGN_SR_PFM_MASK                 0x3
#define MT6335_RG_VMODEM_LGN_SR_PFM_SHIFT                12
#define MT6335_RG_VMODEM_UGD_VTHSEL_MASK                 0x3
#define MT6335_RG_VMODEM_UGD_VTHSEL_SHIFT                14
#define MT6335_RG_VMODEM_FNLX_SNS_MASK                   0x1
#define MT6335_RG_VMODEM_FNLX_SNS_SHIFT                  0
#define MT6335_RG_VMODEM_VDIFF_ENLOWIQ_MASK              0x1
#define MT6335_RG_VMODEM_VDIFF_ENLOWIQ_SHIFT             1
#define MT6335_RG_VMODEM_PFMOC_FWUPOFF_MASK              0x1
#define MT6335_RG_VMODEM_PFMOC_FWUPOFF_SHIFT             2
#define MT6335_RG_VMODEM_PWFMOC_FWUPOFF_MASK             0x1
#define MT6335_RG_VMODEM_PWFMOC_FWUPOFF_SHIFT            3
#define MT6335_RG_VMODEM_CP_FWUPOFF_MASK                 0x1
#define MT6335_RG_VMODEM_CP_FWUPOFF_SHIFT                4
#define MT6335_RG_VMODEM_ZX_GATING_MASK                  0x1
#define MT6335_RG_VMODEM_ZX_GATING_SHIFT                 5
#define MT6335_RG_VMODEM_RSV_MASK                        0xFFFF
#define MT6335_RG_VMODEM_RSV_SHIFT                       0
#define MT6335_RG_VMODEM_AZC_EN_MASK                     0x1
#define MT6335_RG_VMODEM_AZC_EN_SHIFT                    0
#define MT6335_RG_VMODEM_AZC_DELAY_MASK                  0x3
#define MT6335_RG_VMODEM_AZC_DELAY_SHIFT                 1
#define MT6335_RG_VMODEM_AZC_HOLD_ENB_MASK               0x1
#define MT6335_RG_VMODEM_AZC_HOLD_ENB_SHIFT              3
#define MT6335_RGS_QI_VMODEM_OC_STATUS_MASK              0x1
#define MT6335_RGS_QI_VMODEM_OC_STATUS_SHIFT             4
#define MT6335_RGS_QI_VMODEM_DIG_MON_MASK                0xF
#define MT6335_RGS_QI_VMODEM_DIG_MON_SHIFT               5
#define MT6335_RGS_VMODEM_ENPWM_STATUS_MASK              0x1
#define MT6335_RGS_VMODEM_ENPWM_STATUS_SHIFT             9
#define MT6335_RG_VMD1_MODESET_MASK                      0x1
#define MT6335_RG_VMD1_MODESET_SHIFT                     1
#define MT6335_RG_VMD1_NDIS_EN_MASK                      0x1
#define MT6335_RG_VMD1_NDIS_EN_SHIFT                     2
#define MT6335_RG_VMD1_VRF18_SSTART_EN_MASK              0x1
#define MT6335_RG_VMD1_VRF18_SSTART_EN_SHIFT             3
#define MT6335_RG_VMD1_AUTO_MODE_MASK                    0x1
#define MT6335_RG_VMD1_AUTO_MODE_SHIFT                   4
#define MT6335_RG_VMD1_RZSEL0_MASK                       0x7
#define MT6335_RG_VMD1_RZSEL0_SHIFT                      0
#define MT6335_RG_VMD1_RZSEL1_MASK                       0xF
#define MT6335_RG_VMD1_RZSEL1_SHIFT                      3
#define MT6335_RG_VMD1_CCSEL0_MASK                       0x3
#define MT6335_RG_VMD1_CCSEL0_SHIFT                      7
#define MT6335_RG_VMD1_CCSEL1_MASK                       0x3
#define MT6335_RG_VMD1_CCSEL1_SHIFT                      9
#define MT6335_RG_VMD1_CSL_MASK                          0xF
#define MT6335_RG_VMD1_CSL_SHIFT                         11
#define MT6335_RG_VMD1_SLP_MASK                          0x7
#define MT6335_RG_VMD1_SLP_SHIFT                         0
#define MT6335_RG_VMD1_ADRC_FEN_MASK                     0x1
#define MT6335_RG_VMD1_ADRC_FEN_SHIFT                    3
#define MT6335_RG_VMD1_VCCAP_CLAMP_FEN_MASK              0x1
#define MT6335_RG_VMD1_VCCAP_CLAMP_FEN_SHIFT             4
#define MT6335_RG_VMD1_VC_CLAMP_FEN_MASK                 0x1
#define MT6335_RG_VMD1_VC_CLAMP_FEN_SHIFT                5
#define MT6335_RG_VMD1_PFMOC_MASK                        0x7
#define MT6335_RG_VMD1_PFMOC_SHIFT                       6
#define MT6335_RG_VMD1_CSR_MASK                          0x7
#define MT6335_RG_VMD1_CSR_SHIFT                         9
#define MT6335_RG_VMD1_ZXOS_TRIM_MASK                    0xFF
#define MT6335_RG_VMD1_ZXOS_TRIM_SHIFT                   0
#define MT6335_RG_VMD1_PFMSR_EH_MASK                     0x1
#define MT6335_RG_VMD1_PFMSR_EH_SHIFT                    0
#define MT6335_RG_VMD1_NLIM_GATING_MASK                  0x1
#define MT6335_RG_VMD1_NLIM_GATING_SHIFT                 1
#define MT6335_RG_VMD1_PWRSR_EH_MASK                     0x1
#define MT6335_RG_VMD1_PWRSR_EH_SHIFT                    2
#define MT6335_RG_VMD1_HS_VTHDET_MASK                    0x1
#define MT6335_RG_VMD1_HS_VTHDET_SHIFT                   3
#define MT6335_RG_VMD1_PG_GATING_MASK                    0x1
#define MT6335_RG_VMD1_PG_GATING_SHIFT                   4
#define MT6335_RG_VMD1_HS_ONSPEED_EH_MASK                0x1
#define MT6335_RG_VMD1_HS_ONSPEED_EH_SHIFT               5
#define MT6335_RG_VMD1_NLIM_TRIMMING_MASK                0xF
#define MT6335_RG_VMD1_NLIM_TRIMMING_SHIFT               6
#define MT6335_RG_VMD1_DLC_MASK                          0x3
#define MT6335_RG_VMD1_DLC_SHIFT                         0
#define MT6335_RG_VMD1_DLC_N_MASK                        0x3
#define MT6335_RG_VMD1_DLC_N_SHIFT                       2
#define MT6335_RG_VMD1_PFM_RIP_MASK                      0x7
#define MT6335_RG_VMD1_PFM_RIP_SHIFT                     4
#define MT6335_RG_VMD1_TRAN_BST_MASK                     0x3F
#define MT6335_RG_VMD1_TRAN_BST_SHIFT                    7
#define MT6335_RG_VMD1_DTS_ENB_MASK                      0x1
#define MT6335_RG_VMD1_DTS_ENB_SHIFT                     13
#define MT6335_RG_VMD1_MIN_OFF_MASK                      0x3
#define MT6335_RG_VMD1_MIN_OFF_SHIFT                     14
#define MT6335_RG_VMD1_1P35UP_SEL_EN_MASK                0x1
#define MT6335_RG_VMD1_1P35UP_SEL_EN_SHIFT               0
#define MT6335_RG_VMD1_DLC_AUTO_MODE_MASK                0x1
#define MT6335_RG_VMD1_DLC_AUTO_MODE_SHIFT               1
#define MT6335_RG_VMD1_DLC_SEL_MASK                      0x7
#define MT6335_RG_VMD1_DLC_SEL_SHIFT                     2
#define MT6335_RG_VMD1_SRC_AUTO_MODE_MASK                0x1
#define MT6335_RG_VMD1_SRC_AUTO_MODE_SHIFT               5
#define MT6335_RG_VMD1_UGP_SR_MASK                       0x3
#define MT6335_RG_VMD1_UGP_SR_SHIFT                      6
#define MT6335_RG_VMD1_LGN_SR_MASK                       0x3
#define MT6335_RG_VMD1_LGN_SR_SHIFT                      8
#define MT6335_RG_VMD1_UGP_SR_PFM_MASK                   0x3
#define MT6335_RG_VMD1_UGP_SR_PFM_SHIFT                  10
#define MT6335_RG_VMD1_LGN_SR_PFM_MASK                   0x3
#define MT6335_RG_VMD1_LGN_SR_PFM_SHIFT                  12
#define MT6335_RG_VMD1_UGD_VTHSEL_MASK                   0x3
#define MT6335_RG_VMD1_UGD_VTHSEL_SHIFT                  14
#define MT6335_RG_VMD1_FNLX_SNS_MASK                     0x1
#define MT6335_RG_VMD1_FNLX_SNS_SHIFT                    0
#define MT6335_RG_VMD1_VDIFF_ENLOWIQ_MASK                0x1
#define MT6335_RG_VMD1_VDIFF_ENLOWIQ_SHIFT               1
#define MT6335_RG_VMD1_PFMOC_FWUPOFF_MASK                0x1
#define MT6335_RG_VMD1_PFMOC_FWUPOFF_SHIFT               2
#define MT6335_RG_VMD1_PWFMOC_FWUPOFF_MASK               0x1
#define MT6335_RG_VMD1_PWFMOC_FWUPOFF_SHIFT              3
#define MT6335_RG_VMD1_CP_FWUPOFF_MASK                   0x1
#define MT6335_RG_VMD1_CP_FWUPOFF_SHIFT                  4
#define MT6335_RG_VMD1_ZX_GATING_MASK                    0x1
#define MT6335_RG_VMD1_ZX_GATING_SHIFT                   5
#define MT6335_RG_VMD1_RSV_MASK                          0xFFFF
#define MT6335_RG_VMD1_RSV_SHIFT                         0
#define MT6335_RG_VMD1_AZC_EN_MASK                       0x1
#define MT6335_RG_VMD1_AZC_EN_SHIFT                      0
#define MT6335_RG_VMD1_AZC_DELAY_MASK                    0x3
#define MT6335_RG_VMD1_AZC_DELAY_SHIFT                   1
#define MT6335_RG_VMD1_AZC_HOLD_ENB_MASK                 0x1
#define MT6335_RG_VMD1_AZC_HOLD_ENB_SHIFT                3
#define MT6335_RGS_QI_VMD1_OC_STATUS_MASK                0x1
#define MT6335_RGS_QI_VMD1_OC_STATUS_SHIFT               4
#define MT6335_RGS_QI_VMD1_DIG_MON_MASK                  0xF
#define MT6335_RGS_QI_VMD1_DIG_MON_SHIFT                 5
#define MT6335_RGS_VMD1_ENPWM_STATUS_MASK                0x1
#define MT6335_RGS_VMD1_ENPWM_STATUS_SHIFT               9
#define MT6335_RG_VS1_MODESET_MASK                       0x1
#define MT6335_RG_VS1_MODESET_SHIFT                      1
#define MT6335_RG_VS1_NDIS_EN_MASK                       0x1
#define MT6335_RG_VS1_NDIS_EN_SHIFT                      2
#define MT6335_RG_VS1_VRF18_SSTART_EN_MASK               0x1
#define MT6335_RG_VS1_VRF18_SSTART_EN_SHIFT              3
#define MT6335_RG_VS1_AUTO_MODE_MASK                     0x1
#define MT6335_RG_VS1_AUTO_MODE_SHIFT                    4
#define MT6335_RG_VS1_RZSEL0_MASK                        0x7
#define MT6335_RG_VS1_RZSEL0_SHIFT                       0
#define MT6335_RG_VS1_RZSEL1_MASK                        0xF
#define MT6335_RG_VS1_RZSEL1_SHIFT                       3
#define MT6335_RG_VS1_CCSEL0_MASK                        0x3
#define MT6335_RG_VS1_CCSEL0_SHIFT                       7
#define MT6335_RG_VS1_CCSEL1_MASK                        0x3
#define MT6335_RG_VS1_CCSEL1_SHIFT                       9
#define MT6335_RG_VS1_CSL_MASK                           0xF
#define MT6335_RG_VS1_CSL_SHIFT                          11
#define MT6335_RG_VS1_SLP_MASK                           0x7
#define MT6335_RG_VS1_SLP_SHIFT                          0
#define MT6335_RG_VS1_ADRC_FEN_MASK                      0x1
#define MT6335_RG_VS1_ADRC_FEN_SHIFT                     3
#define MT6335_RG_VS1_VCCAP_CLAMP_FEN_MASK               0x1
#define MT6335_RG_VS1_VCCAP_CLAMP_FEN_SHIFT              4
#define MT6335_RG_VS1_VC_CLAMP_FEN_MASK                  0x1
#define MT6335_RG_VS1_VC_CLAMP_FEN_SHIFT                 5
#define MT6335_RG_VS1_PFMOC_MASK                         0x7
#define MT6335_RG_VS1_PFMOC_SHIFT                        6
#define MT6335_RG_VS1_CSR_MASK                           0x7
#define MT6335_RG_VS1_CSR_SHIFT                          9
#define MT6335_RG_VS1_ZXOS_TRIM_MASK                     0xFF
#define MT6335_RG_VS1_ZXOS_TRIM_SHIFT                    0
#define MT6335_RG_VS1_PFMSR_EH_MASK                      0x1
#define MT6335_RG_VS1_PFMSR_EH_SHIFT                     0
#define MT6335_RG_VS1_NLIM_GATING_MASK                   0x1
#define MT6335_RG_VS1_NLIM_GATING_SHIFT                  1
#define MT6335_RG_VS1_PWRSR_EH_MASK                      0x1
#define MT6335_RG_VS1_PWRSR_EH_SHIFT                     2
#define MT6335_RG_VS1_HS_VTHDET_MASK                     0x1
#define MT6335_RG_VS1_HS_VTHDET_SHIFT                    3
#define MT6335_RG_VS1_PG_GATING_MASK                     0x1
#define MT6335_RG_VS1_PG_GATING_SHIFT                    4
#define MT6335_RG_VS1_HS_ONSPEED_EH_MASK                 0x1
#define MT6335_RG_VS1_HS_ONSPEED_EH_SHIFT                5
#define MT6335_RG_VS1_NLIM_TRIMMING_MASK                 0xF
#define MT6335_RG_VS1_NLIM_TRIMMING_SHIFT                6
#define MT6335_RG_VS1_DLC_MASK                           0x3
#define MT6335_RG_VS1_DLC_SHIFT                          0
#define MT6335_RG_VS1_DLC_N_MASK                         0x3
#define MT6335_RG_VS1_DLC_N_SHIFT                        2
#define MT6335_RG_VS1_PFM_RIP_MASK                       0x7
#define MT6335_RG_VS1_PFM_RIP_SHIFT                      4
#define MT6335_RG_VS1_TRAN_BST_MASK                      0x3F
#define MT6335_RG_VS1_TRAN_BST_SHIFT                     7
#define MT6335_RG_VS1_DTS_ENB_MASK                       0x1
#define MT6335_RG_VS1_DTS_ENB_SHIFT                      13
#define MT6335_RG_VS1_MIN_OFF_MASK                       0x3
#define MT6335_RG_VS1_MIN_OFF_SHIFT                      14
#define MT6335_RG_VS1_1P35UP_SEL_EN_MASK                 0x1
#define MT6335_RG_VS1_1P35UP_SEL_EN_SHIFT                0
#define MT6335_RG_VS1_DLC_AUTO_MODE_MASK                 0x1
#define MT6335_RG_VS1_DLC_AUTO_MODE_SHIFT                1
#define MT6335_RG_VS1_DLC_SEL_MASK                       0x7
#define MT6335_RG_VS1_DLC_SEL_SHIFT                      2
#define MT6335_RG_VS1_SRC_AUTO_MODE_MASK                 0x1
#define MT6335_RG_VS1_SRC_AUTO_MODE_SHIFT                5
#define MT6335_RG_VS1_UGP_SR_MASK                        0x3
#define MT6335_RG_VS1_UGP_SR_SHIFT                       6
#define MT6335_RG_VS1_LGN_SR_MASK                        0x3
#define MT6335_RG_VS1_LGN_SR_SHIFT                       8
#define MT6335_RG_VS1_UGP_SR_PFM_MASK                    0x3
#define MT6335_RG_VS1_UGP_SR_PFM_SHIFT                   10
#define MT6335_RG_VS1_LGN_SR_PFM_MASK                    0x3
#define MT6335_RG_VS1_LGN_SR_PFM_SHIFT                   12
#define MT6335_RG_VS1_UGD_VTHSEL_MASK                    0x3
#define MT6335_RG_VS1_UGD_VTHSEL_SHIFT                   14
#define MT6335_RG_VS1_FNLX_SNS_MASK                      0x1
#define MT6335_RG_VS1_FNLX_SNS_SHIFT                     0
#define MT6335_RG_VS1_VDIFF_ENLOWIQ_MASK                 0x1
#define MT6335_RG_VS1_VDIFF_ENLOWIQ_SHIFT                1
#define MT6335_RG_VS1_PFMOC_FWUPOFF_MASK                 0x1
#define MT6335_RG_VS1_PFMOC_FWUPOFF_SHIFT                2
#define MT6335_RG_VS1_PWFMOC_FWUPOFF_MASK                0x1
#define MT6335_RG_VS1_PWFMOC_FWUPOFF_SHIFT               3
#define MT6335_RG_VS1_CP_FWUPOFF_MASK                    0x1
#define MT6335_RG_VS1_CP_FWUPOFF_SHIFT                   4
#define MT6335_RG_VS1_ZX_GATING_MASK                     0x1
#define MT6335_RG_VS1_ZX_GATING_SHIFT                    5
#define MT6335_RG_VS1_RSV_MASK                           0xFFFF
#define MT6335_RG_VS1_RSV_SHIFT                          0
#define MT6335_RG_VS1_AZC_EN_MASK                        0x1
#define MT6335_RG_VS1_AZC_EN_SHIFT                       0
#define MT6335_RG_VS1_AZC_DELAY_MASK                     0x3
#define MT6335_RG_VS1_AZC_DELAY_SHIFT                    1
#define MT6335_RG_VS1_AZC_HOLD_ENB_MASK                  0x1
#define MT6335_RG_VS1_AZC_HOLD_ENB_SHIFT                 3
#define MT6335_RGS_QI_VS1_OC_STATUS_MASK                 0x1
#define MT6335_RGS_QI_VS1_OC_STATUS_SHIFT                4
#define MT6335_RGS_QI_VS1_DIG_MON_MASK                   0xF
#define MT6335_RGS_QI_VS1_DIG_MON_SHIFT                  5
#define MT6335_RGS_VS1_ENPWM_STATUS_MASK                 0x1
#define MT6335_RGS_VS1_ENPWM_STATUS_SHIFT                9
#define MT6335_RG_VS2_MODESET_MASK                       0x1
#define MT6335_RG_VS2_MODESET_SHIFT                      1
#define MT6335_RG_VS2_NDIS_EN_MASK                       0x1
#define MT6335_RG_VS2_NDIS_EN_SHIFT                      2
#define MT6335_RG_VS2_VRF18_SSTART_EN_MASK               0x1
#define MT6335_RG_VS2_VRF18_SSTART_EN_SHIFT              3
#define MT6335_RG_VS2_AUTO_MODE_MASK                     0x1
#define MT6335_RG_VS2_AUTO_MODE_SHIFT                    4
#define MT6335_RG_VS2_RZSEL0_MASK                        0x7
#define MT6335_RG_VS2_RZSEL0_SHIFT                       0
#define MT6335_RG_VS2_RZSEL1_MASK                        0xF
#define MT6335_RG_VS2_RZSEL1_SHIFT                       3
#define MT6335_RG_VS2_CCSEL0_MASK                        0x3
#define MT6335_RG_VS2_CCSEL0_SHIFT                       7
#define MT6335_RG_VS2_CCSEL1_MASK                        0x3
#define MT6335_RG_VS2_CCSEL1_SHIFT                       9
#define MT6335_RG_VS2_CSL_MASK                           0xF
#define MT6335_RG_VS2_CSL_SHIFT                          11
#define MT6335_RG_VS2_SLP_MASK                           0x7
#define MT6335_RG_VS2_SLP_SHIFT                          0
#define MT6335_RG_VS2_ADRC_FEN_MASK                      0x1
#define MT6335_RG_VS2_ADRC_FEN_SHIFT                     3
#define MT6335_RG_VS2_VCCAP_CLAMP_FEN_MASK               0x1
#define MT6335_RG_VS2_VCCAP_CLAMP_FEN_SHIFT              4
#define MT6335_RG_VS2_VC_CLAMP_FEN_MASK                  0x1
#define MT6335_RG_VS2_VC_CLAMP_FEN_SHIFT                 5
#define MT6335_RG_VS2_PFMOC_MASK                         0x7
#define MT6335_RG_VS2_PFMOC_SHIFT                        6
#define MT6335_RG_VS2_CSR_MASK                           0x7
#define MT6335_RG_VS2_CSR_SHIFT                          9
#define MT6335_RG_VS2_ZXOS_TRIM_MASK                     0xFF
#define MT6335_RG_VS2_ZXOS_TRIM_SHIFT                    0
#define MT6335_RG_VS2_PFMSR_EH_MASK                      0x1
#define MT6335_RG_VS2_PFMSR_EH_SHIFT                     0
#define MT6335_RG_VS2_NLIM_GATING_MASK                   0x1
#define MT6335_RG_VS2_NLIM_GATING_SHIFT                  1
#define MT6335_RG_VS2_PWRSR_EH_MASK                      0x1
#define MT6335_RG_VS2_PWRSR_EH_SHIFT                     2
#define MT6335_RG_VS2_HS_VTHDET_MASK                     0x1
#define MT6335_RG_VS2_HS_VTHDET_SHIFT                    3
#define MT6335_RG_VS2_PG_GATING_MASK                     0x1
#define MT6335_RG_VS2_PG_GATING_SHIFT                    4
#define MT6335_RG_VS2_HS_ONSPEED_EH_MASK                 0x1
#define MT6335_RG_VS2_HS_ONSPEED_EH_SHIFT                5
#define MT6335_RG_VS2_NLIM_TRIMMING_MASK                 0xF
#define MT6335_RG_VS2_NLIM_TRIMMING_SHIFT                6
#define MT6335_RG_VS2_DLC_MASK                           0x3
#define MT6335_RG_VS2_DLC_SHIFT                          0
#define MT6335_RG_VS2_DLC_N_MASK                         0x3
#define MT6335_RG_VS2_DLC_N_SHIFT                        2
#define MT6335_RG_VS2_PFM_RIP_MASK                       0x7
#define MT6335_RG_VS2_PFM_RIP_SHIFT                      4
#define MT6335_RG_VS2_TRAN_BST_MASK                      0x3F
#define MT6335_RG_VS2_TRAN_BST_SHIFT                     7
#define MT6335_RG_VS2_DTS_ENB_MASK                       0x1
#define MT6335_RG_VS2_DTS_ENB_SHIFT                      13
#define MT6335_RG_VS2_MIN_OFF_MASK                       0x3
#define MT6335_RG_VS2_MIN_OFF_SHIFT                      14
#define MT6335_RG_VS2_1P35UP_SEL_EN_MASK                 0x1
#define MT6335_RG_VS2_1P35UP_SEL_EN_SHIFT                0
#define MT6335_RG_VS2_DLC_AUTO_MODE_MASK                 0x1
#define MT6335_RG_VS2_DLC_AUTO_MODE_SHIFT                1
#define MT6335_RG_VS2_DLC_SEL_MASK                       0x7
#define MT6335_RG_VS2_DLC_SEL_SHIFT                      2
#define MT6335_RG_VS2_SRC_AUTO_MODE_MASK                 0x1
#define MT6335_RG_VS2_SRC_AUTO_MODE_SHIFT                5
#define MT6335_RG_VS2_UGP_SR_MASK                        0x3
#define MT6335_RG_VS2_UGP_SR_SHIFT                       6
#define MT6335_RG_VS2_LGN_SR_MASK                        0x3
#define MT6335_RG_VS2_LGN_SR_SHIFT                       8
#define MT6335_RG_VS2_UGP_SR_PFM_MASK                    0x3
#define MT6335_RG_VS2_UGP_SR_PFM_SHIFT                   10
#define MT6335_RG_VS2_LGN_SR_PFM_MASK                    0x3
#define MT6335_RG_VS2_LGN_SR_PFM_SHIFT                   12
#define MT6335_RG_VS2_UGD_VTHSEL_MASK                    0x3
#define MT6335_RG_VS2_UGD_VTHSEL_SHIFT                   14
#define MT6335_RG_VS2_FNLX_SNS_MASK                      0x1
#define MT6335_RG_VS2_FNLX_SNS_SHIFT                     0
#define MT6335_RG_VS2_VDIFF_ENLOWIQ_MASK                 0x1
#define MT6335_RG_VS2_VDIFF_ENLOWIQ_SHIFT                1
#define MT6335_RG_VS2_PFMOC_FWUPOFF_MASK                 0x1
#define MT6335_RG_VS2_PFMOC_FWUPOFF_SHIFT                2
#define MT6335_RG_VS2_PWFMOC_FWUPOFF_MASK                0x1
#define MT6335_RG_VS2_PWFMOC_FWUPOFF_SHIFT               3
#define MT6335_RG_VS2_CP_FWUPOFF_MASK                    0x1
#define MT6335_RG_VS2_CP_FWUPOFF_SHIFT                   4
#define MT6335_RG_VS2_ZX_GATING_MASK                     0x1
#define MT6335_RG_VS2_ZX_GATING_SHIFT                    5
#define MT6335_RG_VS2_RSV_MASK                           0xFFFF
#define MT6335_RG_VS2_RSV_SHIFT                          0
#define MT6335_RG_VS2_AZC_EN_MASK                        0x1
#define MT6335_RG_VS2_AZC_EN_SHIFT                       0
#define MT6335_RG_VS2_AZC_DELAY_MASK                     0x3
#define MT6335_RG_VS2_AZC_DELAY_SHIFT                    1
#define MT6335_RG_VS2_AZC_HOLD_ENB_MASK                  0x1
#define MT6335_RG_VS2_AZC_HOLD_ENB_SHIFT                 3
#define MT6335_RGS_QI_VS2_OC_STATUS_MASK                 0x1
#define MT6335_RGS_QI_VS2_OC_STATUS_SHIFT                4
#define MT6335_RGS_QI_VS2_DIG_MON_MASK                   0xF
#define MT6335_RGS_QI_VS2_DIG_MON_SHIFT                  5
#define MT6335_RGS_VS2_ENPWM_STATUS_MASK                 0x1
#define MT6335_RGS_VS2_ENPWM_STATUS_SHIFT                9
#define MT6335_RG_VPA1_NDIS_EN_MASK                      0x1
#define MT6335_RG_VPA1_NDIS_EN_SHIFT                     1
#define MT6335_RG_VPA1_MODESET_MASK                      0x1
#define MT6335_RG_VPA1_MODESET_SHIFT                     3
#define MT6335_RG_VPA1_CC_MASK                           0x3
#define MT6335_RG_VPA1_CC_SHIFT                          0
#define MT6335_RG_VPA1_CSR_MASK                          0x3
#define MT6335_RG_VPA1_CSR_SHIFT                         2
#define MT6335_RG_VPA1_CSMIR_MASK                        0x3
#define MT6335_RG_VPA1_CSMIR_SHIFT                       4
#define MT6335_RG_VPA1_CSL_MASK                          0x3
#define MT6335_RG_VPA1_CSL_SHIFT                         6
#define MT6335_RG_VPA1_SLP_MASK                          0x3
#define MT6335_RG_VPA1_SLP_SHIFT                         8
#define MT6335_RG_VPA1_AZC_EN_MASK                       0x1
#define MT6335_RG_VPA1_AZC_EN_SHIFT                      10
#define MT6335_RG_VPA1_CP_FWUPOFF_MASK                   0x1
#define MT6335_RG_VPA1_CP_FWUPOFF_SHIFT                  11
#define MT6335_RG_VPA1_AZC_DELAY_MASK                    0x3
#define MT6335_RG_VPA1_AZC_DELAY_SHIFT                   12
#define MT6335_RG_VPA1_RZSEL_MASK                        0x3
#define MT6335_RG_VPA1_RZSEL_SHIFT                       14
#define MT6335_RG_VPA1_ZXREF_MASK                        0xFF
#define MT6335_RG_VPA1_ZXREF_SHIFT                       0
#define MT6335_RG_VPA1_NLIM_SEL_MASK                     0xF
#define MT6335_RG_VPA1_NLIM_SEL_SHIFT                    8
#define MT6335_RG_VPA1_HZP_MASK                          0x1
#define MT6335_RG_VPA1_HZP_SHIFT                         12
#define MT6335_RG_VPA1_BWEX_GAT_MASK                     0x1
#define MT6335_RG_VPA1_BWEX_GAT_SHIFT                    13
#define MT6335_RG_VPA1_SLEW_MASK                         0x3
#define MT6335_RG_VPA1_SLEW_SHIFT                        14
#define MT6335_RG_VPA1_SLEW_NMOS_MASK                    0x3
#define MT6335_RG_VPA1_SLEW_NMOS_SHIFT                   0
#define MT6335_RG_VPA1_MIN_ON_MASK                       0x3
#define MT6335_RG_VPA1_MIN_ON_SHIFT                      2
#define MT6335_RG_VPA1_VBAT_DEL_MASK                     0x3
#define MT6335_RG_VPA1_VBAT_DEL_SHIFT                    4
#define MT6335_RGS_VPA1_AZC_VOS_SEL_MASK                 0xFF
#define MT6335_RGS_VPA1_AZC_VOS_SEL_SHIFT                6
#define MT6335_RG_VPA1_MIN_PK_MASK                       0x3
#define MT6335_RG_VPA1_MIN_PK_SHIFT                      14
#define MT6335_RG_VPA1_RSV1_MASK                         0xFF
#define MT6335_RG_VPA1_RSV1_SHIFT                        0
#define MT6335_RG_VPA1_RSV2_MASK                         0xFF
#define MT6335_RG_VPA1_RSV2_SHIFT                        8
#define MT6335_RGS_QI_VPA1_OC_STATUS_MASK                0x1
#define MT6335_RGS_QI_VPA1_OC_STATUS_SHIFT               0
#define MT6335_RGS_NI_VPA1_AZC_ZX_MASK                   0x1
#define MT6335_RGS_NI_VPA1_AZC_ZX_SHIFT                  1
#define MT6335_RG_VPA2_NDIS_EN_MASK                      0x1
#define MT6335_RG_VPA2_NDIS_EN_SHIFT                     1
#define MT6335_RG_VPA2_MODESET_MASK                      0x1
#define MT6335_RG_VPA2_MODESET_SHIFT                     3
#define MT6335_RG_VPA2_CC_MASK                           0x3
#define MT6335_RG_VPA2_CC_SHIFT                          0
#define MT6335_RG_VPA2_CSR_MASK                          0x3
#define MT6335_RG_VPA2_CSR_SHIFT                         2
#define MT6335_RG_VPA2_CSMIR_MASK                        0x3
#define MT6335_RG_VPA2_CSMIR_SHIFT                       4
#define MT6335_RG_VPA2_CSL_MASK                          0x3
#define MT6335_RG_VPA2_CSL_SHIFT                         6
#define MT6335_RG_VPA2_SLP_MASK                          0x3
#define MT6335_RG_VPA2_SLP_SHIFT                         8
#define MT6335_RG_VPA2_AZC_EN_MASK                       0x1
#define MT6335_RG_VPA2_AZC_EN_SHIFT                      10
#define MT6335_RG_VPA2_CP_FWUPOFF_MASK                   0x1
#define MT6335_RG_VPA2_CP_FWUPOFF_SHIFT                  11
#define MT6335_RG_VPA2_AZC_DELAY_MASK                    0x3
#define MT6335_RG_VPA2_AZC_DELAY_SHIFT                   12
#define MT6335_RG_VPA2_RZSEL_MASK                        0x3
#define MT6335_RG_VPA2_RZSEL_SHIFT                       14
#define MT6335_RG_VPA2_ZXREF_MASK                        0xFF
#define MT6335_RG_VPA2_ZXREF_SHIFT                       0
#define MT6335_RG_VPA2_NLIM_SEL_MASK                     0xF
#define MT6335_RG_VPA2_NLIM_SEL_SHIFT                    8
#define MT6335_RG_VPA2_HZP_MASK                          0x1
#define MT6335_RG_VPA2_HZP_SHIFT                         12
#define MT6335_RG_VPA2_BWEX_GAT_MASK                     0x1
#define MT6335_RG_VPA2_BWEX_GAT_SHIFT                    13
#define MT6335_RG_VPA2_SLEW_MASK                         0x3
#define MT6335_RG_VPA2_SLEW_SHIFT                        14
#define MT6335_RG_VPA2_SLEW_NMOS_MASK                    0x3
#define MT6335_RG_VPA2_SLEW_NMOS_SHIFT                   0
#define MT6335_RG_VPA2_MIN_ON_MASK                       0x3
#define MT6335_RG_VPA2_MIN_ON_SHIFT                      2
#define MT6335_RG_VPA2_VBAT_DEL_MASK                     0x3
#define MT6335_RG_VPA2_VBAT_DEL_SHIFT                    4
#define MT6335_RGS_VPA2_AZC_VOS_SEL_MASK                 0xFF
#define MT6335_RGS_VPA2_AZC_VOS_SEL_SHIFT                6
#define MT6335_RG_VPA2_MIN_PK_MASK                       0x3
#define MT6335_RG_VPA2_MIN_PK_SHIFT                      14
#define MT6335_RG_VPA2_RSV1_MASK                         0xFF
#define MT6335_RG_VPA2_RSV1_SHIFT                        0
#define MT6335_RG_VPA2_RSV2_MASK                         0xFF
#define MT6335_RG_VPA2_RSV2_SHIFT                        8
#define MT6335_RGS_QI_VPA2_OC_STATUS_MASK                0x1
#define MT6335_RGS_QI_VPA2_OC_STATUS_SHIFT               0
#define MT6335_RGS_NI_VPA2_AZC_ZX_MASK                   0x1
#define MT6335_RGS_NI_VPA2_AZC_ZX_SHIFT                  1
#define MT6335_WDTDBG_CLR_MASK                           0x1
#define MT6335_WDTDBG_CLR_SHIFT                          0
#define MT6335_WDTDBG_CON0_RSV0_MASK                     0x1
#define MT6335_WDTDBG_CON0_RSV0_SHIFT                    1
#define MT6335_VCORE_VOSEL_WDTDBG_MASK                   0x7F
#define MT6335_VCORE_VOSEL_WDTDBG_SHIFT                  0
#define MT6335_VDRAM_VOSEL_WDTDBG_MASK                   0x7F
#define MT6335_VDRAM_VOSEL_WDTDBG_SHIFT                  8
#define MT6335_VMD1_VOSEL_WDTDBG_MASK                    0x7F
#define MT6335_VMD1_VOSEL_WDTDBG_SHIFT                   0
#define MT6335_VMODEM_VOSEL_WDTDBG_MASK                  0x7F
#define MT6335_VMODEM_VOSEL_WDTDBG_SHIFT                 8
#define MT6335_VS1_VOSEL_WDTDBG_MASK                     0x7F
#define MT6335_VS1_VOSEL_WDTDBG_SHIFT                    0
#define MT6335_VS2_VOSEL_WDTDBG_MASK                     0x7F
#define MT6335_VS2_VOSEL_WDTDBG_SHIFT                    8
#define MT6335_VPA1_VOSEL_WDTDBG_MASK                    0x7F
#define MT6335_VPA1_VOSEL_WDTDBG_SHIFT                   0
#define MT6335_VPA2_VOSEL_WDTDBG_MASK                    0x7F
#define MT6335_VPA2_VOSEL_WDTDBG_SHIFT                   8
#define MT6335_VSRAM_DVFS1_VOSEL_WDTDBG_MASK             0x7F
#define MT6335_VSRAM_DVFS1_VOSEL_WDTDBG_SHIFT            0
#define MT6335_VSRAM_DVFS2_VOSEL_WDTDBG_MASK             0x7F
#define MT6335_VSRAM_DVFS2_VOSEL_WDTDBG_SHIFT            8
#define MT6335_VSRAM_GPU_VOSEL_WDTDBG_MASK               0x7F
#define MT6335_VSRAM_GPU_VOSEL_WDTDBG_SHIFT              0
#define MT6335_VSRAM_MD_VOSEL_WDTDBG_MASK                0x7F
#define MT6335_VSRAM_MD_VOSEL_WDTDBG_SHIFT               8
#define MT6335_VSRAM_CORE_VOSEL_WDTDBG_MASK              0x7F
#define MT6335_VSRAM_CORE_VOSEL_WDTDBG_SHIFT             0
#define MT6335_RG_A_TRIM_EN_MASK                         0x1
#define MT6335_RG_A_TRIM_EN_SHIFT                        0
#define MT6335_RG_A_TRIM_SEL_MASK                        0x7
#define MT6335_RG_A_TRIM_SEL_SHIFT                       1
#define MT6335_RG_A_ISINKS_RSV_MASK                      0xFF
#define MT6335_RG_A_ISINKS_RSV_SHIFT                     4
#define MT6335_RG_B_TRIM_EN_MASK                         0x1
#define MT6335_RG_B_TRIM_EN_SHIFT                        0
#define MT6335_RG_B_TRIM_SEL_MASK                        0x7
#define MT6335_RG_B_TRIM_SEL_SHIFT                       1
#define MT6335_RG_B_ISINKS_RSV_MASK                      0xFF
#define MT6335_RG_B_ISINKS_RSV_SHIFT                     4
#define MT6335_ISINK_DIM0_FSEL_MASK                      0xFFFF
#define MT6335_ISINK_DIM0_FSEL_SHIFT                     0
#define MT6335_ISINK0_RSV1_MASK                          0xF
#define MT6335_ISINK0_RSV1_SHIFT                         0
#define MT6335_ISINK_DIM0_DUTY_MASK                      0xFF
#define MT6335_ISINK_DIM0_DUTY_SHIFT                     4
#define MT6335_ISINK_CH0_STEP_MASK                       0x7
#define MT6335_ISINK_CH0_STEP_SHIFT                      12
#define MT6335_ISINK_BREATH0_TF2_SEL_MASK                0xF
#define MT6335_ISINK_BREATH0_TF2_SEL_SHIFT               0
#define MT6335_ISINK_BREATH0_TF1_SEL_MASK                0xF
#define MT6335_ISINK_BREATH0_TF1_SEL_SHIFT               4
#define MT6335_ISINK_BREATH0_TR2_SEL_MASK                0xF
#define MT6335_ISINK_BREATH0_TR2_SEL_SHIFT               8
#define MT6335_ISINK_BREATH0_TR1_SEL_MASK                0xF
#define MT6335_ISINK_BREATH0_TR1_SEL_SHIFT               12
#define MT6335_ISINK_BREATH0_TOFF_SEL_MASK               0xF
#define MT6335_ISINK_BREATH0_TOFF_SEL_SHIFT              0
#define MT6335_ISINK_BREATH0_TON_SEL_MASK                0xF
#define MT6335_ISINK_BREATH0_TON_SEL_SHIFT               8
#define MT6335_ISINK_DIM1_FSEL_MASK                      0xFFFF
#define MT6335_ISINK_DIM1_FSEL_SHIFT                     0
#define MT6335_ISINK1_RSV1_MASK                          0xF
#define MT6335_ISINK1_RSV1_SHIFT                         0
#define MT6335_ISINK_DIM1_DUTY_MASK                      0xFF
#define MT6335_ISINK_DIM1_DUTY_SHIFT                     4
#define MT6335_ISINK_CH1_STEP_MASK                       0x7
#define MT6335_ISINK_CH1_STEP_SHIFT                      12
#define MT6335_ISINK_BREATH1_TF2_SEL_MASK                0xF
#define MT6335_ISINK_BREATH1_TF2_SEL_SHIFT               0
#define MT6335_ISINK_BREATH1_TF1_SEL_MASK                0xF
#define MT6335_ISINK_BREATH1_TF1_SEL_SHIFT               4
#define MT6335_ISINK_BREATH1_TR2_SEL_MASK                0xF
#define MT6335_ISINK_BREATH1_TR2_SEL_SHIFT               8
#define MT6335_ISINK_BREATH1_TR1_SEL_MASK                0xF
#define MT6335_ISINK_BREATH1_TR1_SEL_SHIFT               12
#define MT6335_ISINK_BREATH1_TOFF_SEL_MASK               0xF
#define MT6335_ISINK_BREATH1_TOFF_SEL_SHIFT              0
#define MT6335_ISINK_BREATH1_TON_SEL_MASK                0xF
#define MT6335_ISINK_BREATH1_TON_SEL_SHIFT               8
#define MT6335_ISINK_DIM2_FSEL_MASK                      0xFFFF
#define MT6335_ISINK_DIM2_FSEL_SHIFT                     0
#define MT6335_ISINK2_RSV1_MASK                          0xF
#define MT6335_ISINK2_RSV1_SHIFT                         0
#define MT6335_ISINK_DIM2_DUTY_MASK                      0xFF
#define MT6335_ISINK_DIM2_DUTY_SHIFT                     4
#define MT6335_ISINK_CH2_STEP_MASK                       0x7
#define MT6335_ISINK_CH2_STEP_SHIFT                      12
#define MT6335_ISINK_BREATH2_TF2_SEL_MASK                0xF
#define MT6335_ISINK_BREATH2_TF2_SEL_SHIFT               0
#define MT6335_ISINK_BREATH2_TF1_SEL_MASK                0xF
#define MT6335_ISINK_BREATH2_TF1_SEL_SHIFT               4
#define MT6335_ISINK_BREATH2_TR2_SEL_MASK                0xF
#define MT6335_ISINK_BREATH2_TR2_SEL_SHIFT               8
#define MT6335_ISINK_BREATH2_TR1_SEL_MASK                0xF
#define MT6335_ISINK_BREATH2_TR1_SEL_SHIFT               12
#define MT6335_ISINK_BREATH2_TOFF_SEL_MASK               0xF
#define MT6335_ISINK_BREATH2_TOFF_SEL_SHIFT              0
#define MT6335_ISINK_BREATH2_TON_SEL_MASK                0xF
#define MT6335_ISINK_BREATH2_TON_SEL_SHIFT               8
#define MT6335_ISINK_DIM3_FSEL_MASK                      0xFFFF
#define MT6335_ISINK_DIM3_FSEL_SHIFT                     0
#define MT6335_ISINK3_RSV1_MASK                          0xF
#define MT6335_ISINK3_RSV1_SHIFT                         0
#define MT6335_ISINK_DIM3_DUTY_MASK                      0xFF
#define MT6335_ISINK_DIM3_DUTY_SHIFT                     4
#define MT6335_ISINK_CH3_STEP_MASK                       0x7
#define MT6335_ISINK_CH3_STEP_SHIFT                      12
#define MT6335_ISINK_BREATH3_TF2_SEL_MASK                0xF
#define MT6335_ISINK_BREATH3_TF2_SEL_SHIFT               0
#define MT6335_ISINK_BREATH3_TF1_SEL_MASK                0xF
#define MT6335_ISINK_BREATH3_TF1_SEL_SHIFT               4
#define MT6335_ISINK_BREATH3_TR2_SEL_MASK                0xF
#define MT6335_ISINK_BREATH3_TR2_SEL_SHIFT               8
#define MT6335_ISINK_BREATH3_TR1_SEL_MASK                0xF
#define MT6335_ISINK_BREATH3_TR1_SEL_SHIFT               12
#define MT6335_ISINK_BREATH3_TOFF_SEL_MASK               0xF
#define MT6335_ISINK_BREATH3_TOFF_SEL_SHIFT              0
#define MT6335_ISINK_BREATH3_TON_SEL_MASK                0xF
#define MT6335_ISINK_BREATH3_TON_SEL_SHIFT               8
#define MT6335_AD_NI_B_ISINK1_STATUS_MASK                0x1
#define MT6335_AD_NI_B_ISINK1_STATUS_SHIFT               0
#define MT6335_AD_NI_B_ISINK0_STATUS_MASK                0x1
#define MT6335_AD_NI_B_ISINK0_STATUS_SHIFT               1
#define MT6335_AD_NI_A_ISINK1_STATUS_MASK                0x1
#define MT6335_AD_NI_A_ISINK1_STATUS_SHIFT               2
#define MT6335_AD_NI_A_ISINK0_STATUS_MASK                0x1
#define MT6335_AD_NI_A_ISINK0_STATUS_SHIFT               3
#define MT6335_ISINK_PHASE0_DLY_EN_MASK                  0x1
#define MT6335_ISINK_PHASE0_DLY_EN_SHIFT                 0
#define MT6335_ISINK_PHASE1_DLY_EN_MASK                  0x1
#define MT6335_ISINK_PHASE1_DLY_EN_SHIFT                 1
#define MT6335_ISINK_PHASE2_DLY_EN_MASK                  0x1
#define MT6335_ISINK_PHASE2_DLY_EN_SHIFT                 2
#define MT6335_ISINK_PHASE3_DLY_EN_MASK                  0x1
#define MT6335_ISINK_PHASE3_DLY_EN_SHIFT                 3
#define MT6335_ISINK_PHASE_DLY_TC_MASK                   0x3
#define MT6335_ISINK_PHASE_DLY_TC_SHIFT                  4
#define MT6335_ISINK_CHOP0_SW_MASK                       0x1
#define MT6335_ISINK_CHOP0_SW_SHIFT                      12
#define MT6335_ISINK_CHOP1_SW_MASK                       0x1
#define MT6335_ISINK_CHOP1_SW_SHIFT                      13
#define MT6335_ISINK_CHOP2_SW_MASK                       0x1
#define MT6335_ISINK_CHOP2_SW_SHIFT                      14
#define MT6335_ISINK_CHOP3_SW_MASK                       0x1
#define MT6335_ISINK_CHOP3_SW_SHIFT                      15
#define MT6335_ISINK_SFSTR3_EN_MASK                      0x1
#define MT6335_ISINK_SFSTR3_EN_SHIFT                     0
#define MT6335_ISINK_SFSTR3_TC_MASK                      0x3
#define MT6335_ISINK_SFSTR3_TC_SHIFT                     1
#define MT6335_ISINK_SFSTR2_EN_MASK                      0x1
#define MT6335_ISINK_SFSTR2_EN_SHIFT                     4
#define MT6335_ISINK_SFSTR2_TC_MASK                      0x3
#define MT6335_ISINK_SFSTR2_TC_SHIFT                     5
#define MT6335_ISINK_SFSTR1_EN_MASK                      0x1
#define MT6335_ISINK_SFSTR1_EN_SHIFT                     8
#define MT6335_ISINK_SFSTR1_TC_MASK                      0x3
#define MT6335_ISINK_SFSTR1_TC_SHIFT                     9
#define MT6335_ISINK_SFSTR0_EN_MASK                      0x1
#define MT6335_ISINK_SFSTR0_EN_SHIFT                     12
#define MT6335_ISINK_SFSTR0_TC_MASK                      0x3
#define MT6335_ISINK_SFSTR0_TC_SHIFT                     13
#define MT6335_ISINK_CH0_EN_MASK                         0x1
#define MT6335_ISINK_CH0_EN_SHIFT                        0
#define MT6335_ISINK_CH1_EN_MASK                         0x1
#define MT6335_ISINK_CH1_EN_SHIFT                        1
#define MT6335_ISINK_CH2_EN_MASK                         0x1
#define MT6335_ISINK_CH2_EN_SHIFT                        2
#define MT6335_ISINK_CH3_EN_MASK                         0x1
#define MT6335_ISINK_CH3_EN_SHIFT                        3
#define MT6335_ISINK_CHOP0_EN_MASK                       0x1
#define MT6335_ISINK_CHOP0_EN_SHIFT                      4
#define MT6335_ISINK_CHOP1_EN_MASK                       0x1
#define MT6335_ISINK_CHOP1_EN_SHIFT                      5
#define MT6335_ISINK_CHOP2_EN_MASK                       0x1
#define MT6335_ISINK_CHOP2_EN_SHIFT                      6
#define MT6335_ISINK_CHOP3_EN_MASK                       0x1
#define MT6335_ISINK_CHOP3_EN_SHIFT                      7
#define MT6335_ISINK_CH0_BIAS_EN_MASK                    0x1
#define MT6335_ISINK_CH0_BIAS_EN_SHIFT                   8
#define MT6335_ISINK_CH1_BIAS_EN_MASK                    0x1
#define MT6335_ISINK_CH1_BIAS_EN_SHIFT                   9
#define MT6335_ISINK_CH2_BIAS_EN_MASK                    0x1
#define MT6335_ISINK_CH2_BIAS_EN_SHIFT                   10
#define MT6335_ISINK_CH3_BIAS_EN_MASK                    0x1
#define MT6335_ISINK_CH3_BIAS_EN_SHIFT                   11
#define MT6335_ISINK_RSV_MASK                            0x1F
#define MT6335_ISINK_RSV_SHIFT                           0
#define MT6335_ISINK_CH3_MODE_MASK                       0x3
#define MT6335_ISINK_CH3_MODE_SHIFT                      8
#define MT6335_ISINK_CH2_MODE_MASK                       0x3
#define MT6335_ISINK_CH2_MODE_SHIFT                      10
#define MT6335_ISINK_CH1_MODE_MASK                       0x3
#define MT6335_ISINK_CH1_MODE_SHIFT                      12
#define MT6335_ISINK_CH0_MODE_MASK                       0x3
#define MT6335_ISINK_CH0_MODE_SHIFT                      14
#define MT6335_DA_QI_A_ISINKS_CH0_STEP_MASK              0x7
#define MT6335_DA_QI_A_ISINKS_CH0_STEP_SHIFT             0
#define MT6335_DA_QI_A_ISINKS_CH1_STEP_MASK              0x7
#define MT6335_DA_QI_A_ISINKS_CH1_STEP_SHIFT             3
#define MT6335_DA_QI_B_ISINKS_CH0_STEP_MASK              0x7
#define MT6335_DA_QI_B_ISINKS_CH0_STEP_SHIFT             6
#define MT6335_DA_QI_B_ISINKS_CH1_STEP_MASK              0x7
#define MT6335_DA_QI_B_ISINKS_CH1_STEP_SHIFT             9
#define MT6335_ISINK4_RSV1_MASK                          0xF
#define MT6335_ISINK4_RSV1_SHIFT                         0
#define MT6335_ISINK4_RSV0_MASK                          0x7
#define MT6335_ISINK4_RSV0_SHIFT                         4
#define MT6335_ISINK_CH4_STEP_MASK                       0x7
#define MT6335_ISINK_CH4_STEP_SHIFT                      12
#define MT6335_ISINK5_RSV1_MASK                          0xF
#define MT6335_ISINK5_RSV1_SHIFT                         0
#define MT6335_ISINK5_RSV0_MASK                          0x7
#define MT6335_ISINK5_RSV0_SHIFT                         4
#define MT6335_ISINK_CH5_STEP_MASK                       0x7
#define MT6335_ISINK_CH5_STEP_SHIFT                      12
#define MT6335_ISINK6_RSV1_MASK                          0xF
#define MT6335_ISINK6_RSV1_SHIFT                         0
#define MT6335_ISINK6_RSV0_MASK                          0x7
#define MT6335_ISINK6_RSV0_SHIFT                         4
#define MT6335_ISINK_CH6_STEP_MASK                       0x7
#define MT6335_ISINK_CH6_STEP_SHIFT                      12
#define MT6335_ISINK7_RSV1_MASK                          0xF
#define MT6335_ISINK7_RSV1_SHIFT                         0
#define MT6335_ISINK7_RSV0_MASK                          0x7
#define MT6335_ISINK7_RSV0_SHIFT                         4
#define MT6335_ISINK_CH7_STEP_MASK                       0x7
#define MT6335_ISINK_CH7_STEP_SHIFT                      12
#define MT6335_AD_NI_B_ISINK3_STATUS_MASK                0x1
#define MT6335_AD_NI_B_ISINK3_STATUS_SHIFT               0
#define MT6335_AD_NI_B_ISINK2_STATUS_MASK                0x1
#define MT6335_AD_NI_B_ISINK2_STATUS_SHIFT               1
#define MT6335_AD_NI_A_ISINK3_STATUS_MASK                0x1
#define MT6335_AD_NI_A_ISINK3_STATUS_SHIFT               2
#define MT6335_AD_NI_A_ISINK2_STATUS_MASK                0x1
#define MT6335_AD_NI_A_ISINK2_STATUS_SHIFT               3
#define MT6335_ISINK_CHOP7_SW_MASK                       0x1
#define MT6335_ISINK_CHOP7_SW_SHIFT                      12
#define MT6335_ISINK_CHOP6_SW_MASK                       0x1
#define MT6335_ISINK_CHOP6_SW_SHIFT                      13
#define MT6335_ISINK_CHOP5_SW_MASK                       0x1
#define MT6335_ISINK_CHOP5_SW_SHIFT                      14
#define MT6335_ISINK_CHOP4_SW_MASK                       0x1
#define MT6335_ISINK_CHOP4_SW_SHIFT                      15
#define MT6335_ISINK_CH7_EN_MASK                         0x1
#define MT6335_ISINK_CH7_EN_SHIFT                        0
#define MT6335_ISINK_CH6_EN_MASK                         0x1
#define MT6335_ISINK_CH6_EN_SHIFT                        1
#define MT6335_ISINK_CH5_EN_MASK                         0x1
#define MT6335_ISINK_CH5_EN_SHIFT                        2
#define MT6335_ISINK_CH4_EN_MASK                         0x1
#define MT6335_ISINK_CH4_EN_SHIFT                        3
#define MT6335_ISINK_CHOP7_EN_MASK                       0x1
#define MT6335_ISINK_CHOP7_EN_SHIFT                      4
#define MT6335_ISINK_CHOP6_EN_MASK                       0x1
#define MT6335_ISINK_CHOP6_EN_SHIFT                      5
#define MT6335_ISINK_CHOP5_EN_MASK                       0x1
#define MT6335_ISINK_CHOP5_EN_SHIFT                      6
#define MT6335_ISINK_CHOP4_EN_MASK                       0x1
#define MT6335_ISINK_CHOP4_EN_SHIFT                      7
#define MT6335_ISINK_CH7_BIAS_EN_MASK                    0x1
#define MT6335_ISINK_CH7_BIAS_EN_SHIFT                   8
#define MT6335_ISINK_CH6_BIAS_EN_MASK                    0x1
#define MT6335_ISINK_CH6_BIAS_EN_SHIFT                   9
#define MT6335_ISINK_CH5_BIAS_EN_MASK                    0x1
#define MT6335_ISINK_CH5_BIAS_EN_SHIFT                   10
#define MT6335_ISINK_CH4_BIAS_EN_MASK                    0x1
#define MT6335_ISINK_CH4_BIAS_EN_SHIFT                   11
#define MT6335_RG_VIO28_SW_EN_MASK                       0x1
#define MT6335_RG_VIO28_SW_EN_SHIFT                      0
#define MT6335_RG_VIO28_SW_LP_MASK                       0x1
#define MT6335_RG_VIO28_SW_LP_SHIFT                      1
#define MT6335_RG_VIO28_SW_OP_EN_MASK                    0x1
#define MT6335_RG_VIO28_SW_OP_EN_SHIFT                   0
#define MT6335_RG_VIO28_HW0_OP_EN_MASK                   0x1
#define MT6335_RG_VIO28_HW0_OP_EN_SHIFT                  1
#define MT6335_RG_VIO28_HW1_OP_EN_MASK                   0x1
#define MT6335_RG_VIO28_HW1_OP_EN_SHIFT                  2
#define MT6335_RG_VIO28_HW2_OP_EN_MASK                   0x1
#define MT6335_RG_VIO28_HW2_OP_EN_SHIFT                  3
#define MT6335_RG_VIO28_OP_EN_SET_MASK                   0xFFFF
#define MT6335_RG_VIO28_OP_EN_SET_SHIFT                  0
#define MT6335_RG_VIO28_OP_EN_CLR_MASK                   0xFFFF
#define MT6335_RG_VIO28_OP_EN_CLR_SHIFT                  0
#define MT6335_RG_VIO28_HW0_OP_CFG_MASK                  0x1
#define MT6335_RG_VIO28_HW0_OP_CFG_SHIFT                 1
#define MT6335_RG_VIO28_HW1_OP_CFG_MASK                  0x1
#define MT6335_RG_VIO28_HW1_OP_CFG_SHIFT                 2
#define MT6335_RG_VIO28_HW2_OP_CFG_MASK                  0x1
#define MT6335_RG_VIO28_HW2_OP_CFG_SHIFT                 3
#define MT6335_RG_VIO28_GO_ON_OP_MASK                    0x1
#define MT6335_RG_VIO28_GO_ON_OP_SHIFT                   8
#define MT6335_RG_VIO28_GO_LP_OP_MASK                    0x1
#define MT6335_RG_VIO28_GO_LP_OP_SHIFT                   9
#define MT6335_RG_VIO28_OP_CFG_SET_MASK                  0xFFFF
#define MT6335_RG_VIO28_OP_CFG_SET_SHIFT                 0
#define MT6335_RG_VIO28_OP_CFG_CLR_MASK                  0xFFFF
#define MT6335_RG_VIO28_OP_CFG_CLR_SHIFT                 0
#define MT6335_DA_QI_VIO28_MODE_MASK                     0x1
#define MT6335_DA_QI_VIO28_MODE_SHIFT                    8
#define MT6335_RG_VIO28_STBTD_MASK                       0x3
#define MT6335_RG_VIO28_STBTD_SHIFT                      9
#define MT6335_DA_QI_VIO28_STB_MASK                      0x1
#define MT6335_DA_QI_VIO28_STB_SHIFT                     14
#define MT6335_DA_QI_VIO28_EN_MASK                       0x1
#define MT6335_DA_QI_VIO28_EN_SHIFT                      15
#define MT6335_RG_VIO28_OCFB_EN_MASK                     0x1
#define MT6335_RG_VIO28_OCFB_EN_SHIFT                    9
#define MT6335_DA_QI_VIO28_OCFB_EN_MASK                  0x1
#define MT6335_DA_QI_VIO28_OCFB_EN_SHIFT                 10
#define MT6335_RG_VIO28_DUMMY_LOAD_MASK                  0x7
#define MT6335_RG_VIO28_DUMMY_LOAD_SHIFT                 4
#define MT6335_DA_QI_VIO28_DUMMY_LOAD_MASK               0x1F
#define MT6335_DA_QI_VIO28_DUMMY_LOAD_SHIFT              11
#define MT6335_RG_VIO18_SW_EN_MASK                       0x1
#define MT6335_RG_VIO18_SW_EN_SHIFT                      0
#define MT6335_RG_VIO18_SW_LP_MASK                       0x1
#define MT6335_RG_VIO18_SW_LP_SHIFT                      1
#define MT6335_RG_VIO18_SW_OP_EN_MASK                    0x1
#define MT6335_RG_VIO18_SW_OP_EN_SHIFT                   0
#define MT6335_RG_VIO18_HW0_OP_EN_MASK                   0x1
#define MT6335_RG_VIO18_HW0_OP_EN_SHIFT                  1
#define MT6335_RG_VIO18_HW1_OP_EN_MASK                   0x1
#define MT6335_RG_VIO18_HW1_OP_EN_SHIFT                  2
#define MT6335_RG_VIO18_HW2_OP_EN_MASK                   0x1
#define MT6335_RG_VIO18_HW2_OP_EN_SHIFT                  3
#define MT6335_RG_VIO18_OP_EN_SET_MASK                   0xFFFF
#define MT6335_RG_VIO18_OP_EN_SET_SHIFT                  0
#define MT6335_RG_VIO18_OP_EN_CLR_MASK                   0xFFFF
#define MT6335_RG_VIO18_OP_EN_CLR_SHIFT                  0
#define MT6335_RG_VIO18_HW0_OP_CFG_MASK                  0x1
#define MT6335_RG_VIO18_HW0_OP_CFG_SHIFT                 1
#define MT6335_RG_VIO18_HW1_OP_CFG_MASK                  0x1
#define MT6335_RG_VIO18_HW1_OP_CFG_SHIFT                 2
#define MT6335_RG_VIO18_HW2_OP_CFG_MASK                  0x1
#define MT6335_RG_VIO18_HW2_OP_CFG_SHIFT                 3
#define MT6335_RG_VIO18_GO_ON_OP_MASK                    0x1
#define MT6335_RG_VIO18_GO_ON_OP_SHIFT                   8
#define MT6335_RG_VIO18_GO_LP_OP_MASK                    0x1
#define MT6335_RG_VIO18_GO_LP_OP_SHIFT                   9
#define MT6335_RG_VIO18_OP_CFG_SET_MASK                  0xFFFF
#define MT6335_RG_VIO18_OP_CFG_SET_SHIFT                 0
#define MT6335_RG_VIO18_OP_CFG_CLR_MASK                  0xFFFF
#define MT6335_RG_VIO18_OP_CFG_CLR_SHIFT                 0
#define MT6335_DA_QI_VIO18_MODE_MASK                     0x1
#define MT6335_DA_QI_VIO18_MODE_SHIFT                    8
#define MT6335_RG_VIO18_STBTD_MASK                       0x3
#define MT6335_RG_VIO18_STBTD_SHIFT                      9
#define MT6335_DA_QI_VIO18_STB_MASK                      0x1
#define MT6335_DA_QI_VIO18_STB_SHIFT                     14
#define MT6335_DA_QI_VIO18_EN_MASK                       0x1
#define MT6335_DA_QI_VIO18_EN_SHIFT                      15
#define MT6335_RG_VIO18_OCFB_EN_MASK                     0x1
#define MT6335_RG_VIO18_OCFB_EN_SHIFT                    9
#define MT6335_DA_QI_VIO18_OCFB_EN_MASK                  0x1
#define MT6335_DA_QI_VIO18_OCFB_EN_SHIFT                 10
#define MT6335_RG_VIO18_DUMMY_LOAD_MASK                  0x7
#define MT6335_RG_VIO18_DUMMY_LOAD_SHIFT                 4
#define MT6335_DA_QI_VIO18_DUMMY_LOAD_MASK               0x1F
#define MT6335_DA_QI_VIO18_DUMMY_LOAD_SHIFT              11
#define MT6335_RG_VUFS18_SW_EN_MASK                      0x1
#define MT6335_RG_VUFS18_SW_EN_SHIFT                     0
#define MT6335_RG_VUFS18_SW_LP_MASK                      0x1
#define MT6335_RG_VUFS18_SW_LP_SHIFT                     1
#define MT6335_RG_VUFS18_SW_OP_EN_MASK                   0x1
#define MT6335_RG_VUFS18_SW_OP_EN_SHIFT                  0
#define MT6335_RG_VUFS18_HW0_OP_EN_MASK                  0x1
#define MT6335_RG_VUFS18_HW0_OP_EN_SHIFT                 1
#define MT6335_RG_VUFS18_HW1_OP_EN_MASK                  0x1
#define MT6335_RG_VUFS18_HW1_OP_EN_SHIFT                 2
#define MT6335_RG_VUFS18_HW2_OP_EN_MASK                  0x1
#define MT6335_RG_VUFS18_HW2_OP_EN_SHIFT                 3
#define MT6335_RG_VUFS18_OP_EN_SET_MASK                  0xFFFF
#define MT6335_RG_VUFS18_OP_EN_SET_SHIFT                 0
#define MT6335_RG_VUFS18_OP_EN_CLR_MASK                  0xFFFF
#define MT6335_RG_VUFS18_OP_EN_CLR_SHIFT                 0
#define MT6335_RG_VUFS18_HW0_OP_CFG_MASK                 0x1
#define MT6335_RG_VUFS18_HW0_OP_CFG_SHIFT                1
#define MT6335_RG_VUFS18_HW1_OP_CFG_MASK                 0x1
#define MT6335_RG_VUFS18_HW1_OP_CFG_SHIFT                2
#define MT6335_RG_VUFS18_HW2_OP_CFG_MASK                 0x1
#define MT6335_RG_VUFS18_HW2_OP_CFG_SHIFT                3
#define MT6335_RG_VUFS18_GO_ON_OP_MASK                   0x1
#define MT6335_RG_VUFS18_GO_ON_OP_SHIFT                  8
#define MT6335_RG_VUFS18_GO_LP_OP_MASK                   0x1
#define MT6335_RG_VUFS18_GO_LP_OP_SHIFT                  9
#define MT6335_RG_VUFS18_OP_CFG_SET_MASK                 0xFFFF
#define MT6335_RG_VUFS18_OP_CFG_SET_SHIFT                0
#define MT6335_RG_VUFS18_OP_CFG_CLR_MASK                 0xFFFF
#define MT6335_RG_VUFS18_OP_CFG_CLR_SHIFT                0
#define MT6335_DA_QI_VUFS18_MODE_MASK                    0x1
#define MT6335_DA_QI_VUFS18_MODE_SHIFT                   8
#define MT6335_RG_VUFS18_STBTD_MASK                      0x3
#define MT6335_RG_VUFS18_STBTD_SHIFT                     9
#define MT6335_DA_QI_VUFS18_STB_MASK                     0x1
#define MT6335_DA_QI_VUFS18_STB_SHIFT                    14
#define MT6335_DA_QI_VUFS18_EN_MASK                      0x1
#define MT6335_DA_QI_VUFS18_EN_SHIFT                     15
#define MT6335_RG_VUFS18_OCFB_EN_MASK                    0x1
#define MT6335_RG_VUFS18_OCFB_EN_SHIFT                   9
#define MT6335_DA_QI_VUFS18_OCFB_EN_MASK                 0x1
#define MT6335_DA_QI_VUFS18_OCFB_EN_SHIFT                10
#define MT6335_RG_VUFS18_DUMMY_LOAD_MASK                 0x7
#define MT6335_RG_VUFS18_DUMMY_LOAD_SHIFT                4
#define MT6335_DA_QI_VUFS18_DUMMY_LOAD_MASK              0x1F
#define MT6335_DA_QI_VUFS18_DUMMY_LOAD_SHIFT             11
#define MT6335_RG_VA10_SW_EN_MASK                        0x1
#define MT6335_RG_VA10_SW_EN_SHIFT                       0
#define MT6335_RG_VA10_SW_LP_MASK                        0x1
#define MT6335_RG_VA10_SW_LP_SHIFT                       1
#define MT6335_RG_VA10_SW_OP_EN_MASK                     0x1
#define MT6335_RG_VA10_SW_OP_EN_SHIFT                    0
#define MT6335_RG_VA10_HW0_OP_EN_MASK                    0x1
#define MT6335_RG_VA10_HW0_OP_EN_SHIFT                   1
#define MT6335_RG_VA10_HW1_OP_EN_MASK                    0x1
#define MT6335_RG_VA10_HW1_OP_EN_SHIFT                   2
#define MT6335_RG_VA10_HW2_OP_EN_MASK                    0x1
#define MT6335_RG_VA10_HW2_OP_EN_SHIFT                   3
#define MT6335_RG_VA10_OP_EN_SET_MASK                    0xFFFF
#define MT6335_RG_VA10_OP_EN_SET_SHIFT                   0
#define MT6335_RG_VA10_OP_EN_CLR_MASK                    0xFFFF
#define MT6335_RG_VA10_OP_EN_CLR_SHIFT                   0
#define MT6335_RG_VA10_HW0_OP_CFG_MASK                   0x1
#define MT6335_RG_VA10_HW0_OP_CFG_SHIFT                  1
#define MT6335_RG_VA10_HW1_OP_CFG_MASK                   0x1
#define MT6335_RG_VA10_HW1_OP_CFG_SHIFT                  2
#define MT6335_RG_VA10_HW2_OP_CFG_MASK                   0x1
#define MT6335_RG_VA10_HW2_OP_CFG_SHIFT                  3
#define MT6335_RG_VA10_GO_ON_OP_MASK                     0x1
#define MT6335_RG_VA10_GO_ON_OP_SHIFT                    8
#define MT6335_RG_VA10_GO_LP_OP_MASK                     0x1
#define MT6335_RG_VA10_GO_LP_OP_SHIFT                    9
#define MT6335_RG_VA10_OP_CFG_SET_MASK                   0xFFFF
#define MT6335_RG_VA10_OP_CFG_SET_SHIFT                  0
#define MT6335_RG_VA10_OP_CFG_CLR_MASK                   0xFFFF
#define MT6335_RG_VA10_OP_CFG_CLR_SHIFT                  0
#define MT6335_DA_QI_VA10_MODE_MASK                      0x1
#define MT6335_DA_QI_VA10_MODE_SHIFT                     8
#define MT6335_RG_VA10_STBTD_MASK                        0x3
#define MT6335_RG_VA10_STBTD_SHIFT                       9
#define MT6335_DA_QI_VA10_STB_MASK                       0x1
#define MT6335_DA_QI_VA10_STB_SHIFT                      14
#define MT6335_DA_QI_VA10_EN_MASK                        0x1
#define MT6335_DA_QI_VA10_EN_SHIFT                       15
#define MT6335_RG_VA10_WK_TD_MASK                        0x1
#define MT6335_RG_VA10_WK_TD_SHIFT                       2
#define MT6335_RG_VA10_SLP_TD_MASK                       0x1
#define MT6335_RG_VA10_SLP_TD_SHIFT                      3
#define MT6335_RG_VA10_OCFB_EN_MASK                      0x1
#define MT6335_RG_VA10_OCFB_EN_SHIFT                     9
#define MT6335_DA_QI_VA10_OCFB_EN_MASK                   0x1
#define MT6335_DA_QI_VA10_OCFB_EN_SHIFT                  10
#define MT6335_RG_VA10_DUMMY_LOAD_MASK                   0x7
#define MT6335_RG_VA10_DUMMY_LOAD_SHIFT                  4
#define MT6335_DA_QI_VA10_DUMMY_LOAD_MASK                0x1F
#define MT6335_DA_QI_VA10_DUMMY_LOAD_SHIFT               11
#define MT6335_RG_VA12_SW_EN_MASK                        0x1
#define MT6335_RG_VA12_SW_EN_SHIFT                       0
#define MT6335_RG_VA12_SW_LP_MASK                        0x1
#define MT6335_RG_VA12_SW_LP_SHIFT                       1
#define MT6335_RG_VA12_SW_OP_EN_MASK                     0x1
#define MT6335_RG_VA12_SW_OP_EN_SHIFT                    0
#define MT6335_RG_VA12_HW0_OP_EN_MASK                    0x1
#define MT6335_RG_VA12_HW0_OP_EN_SHIFT                   1
#define MT6335_RG_VA12_HW1_OP_EN_MASK                    0x1
#define MT6335_RG_VA12_HW1_OP_EN_SHIFT                   2
#define MT6335_RG_VA12_HW2_OP_EN_MASK                    0x1
#define MT6335_RG_VA12_HW2_OP_EN_SHIFT                   3
#define MT6335_RG_VA12_OP_EN_SET_MASK                    0xFFFF
#define MT6335_RG_VA12_OP_EN_SET_SHIFT                   0
#define MT6335_RG_VA12_OP_EN_CLR_MASK                    0xFFFF
#define MT6335_RG_VA12_OP_EN_CLR_SHIFT                   0
#define MT6335_RG_VA12_HW0_OP_CFG_MASK                   0x1
#define MT6335_RG_VA12_HW0_OP_CFG_SHIFT                  1
#define MT6335_RG_VA12_HW1_OP_CFG_MASK                   0x1
#define MT6335_RG_VA12_HW1_OP_CFG_SHIFT                  2
#define MT6335_RG_VA12_HW2_OP_CFG_MASK                   0x1
#define MT6335_RG_VA12_HW2_OP_CFG_SHIFT                  3
#define MT6335_RG_VA12_GO_ON_OP_MASK                     0x1
#define MT6335_RG_VA12_GO_ON_OP_SHIFT                    8
#define MT6335_RG_VA12_GO_LP_OP_MASK                     0x1
#define MT6335_RG_VA12_GO_LP_OP_SHIFT                    9
#define MT6335_RG_VA12_OP_CFG_SET_MASK                   0xFFFF
#define MT6335_RG_VA12_OP_CFG_SET_SHIFT                  0
#define MT6335_RG_VA12_OP_CFG_CLR_MASK                   0xFFFF
#define MT6335_RG_VA12_OP_CFG_CLR_SHIFT                  0
#define MT6335_DA_QI_VA12_MODE_MASK                      0x1
#define MT6335_DA_QI_VA12_MODE_SHIFT                     8
#define MT6335_RG_VA12_STBTD_MASK                        0x3
#define MT6335_RG_VA12_STBTD_SHIFT                       9
#define MT6335_DA_QI_VA12_STB_MASK                       0x1
#define MT6335_DA_QI_VA12_STB_SHIFT                      14
#define MT6335_DA_QI_VA12_EN_MASK                        0x1
#define MT6335_DA_QI_VA12_EN_SHIFT                       15
#define MT6335_RG_VA12_OCFB_EN_MASK                      0x1
#define MT6335_RG_VA12_OCFB_EN_SHIFT                     9
#define MT6335_DA_QI_VA12_OCFB_EN_MASK                   0x1
#define MT6335_DA_QI_VA12_OCFB_EN_SHIFT                  10
#define MT6335_RG_VA12_DUMMY_LOAD_MASK                   0x7
#define MT6335_RG_VA12_DUMMY_LOAD_SHIFT                  4
#define MT6335_DA_QI_VA12_DUMMY_LOAD_MASK                0x1F
#define MT6335_DA_QI_VA12_DUMMY_LOAD_SHIFT               11
#define MT6335_RG_VA18_SW_EN_MASK                        0x1
#define MT6335_RG_VA18_SW_EN_SHIFT                       0
#define MT6335_RG_VA18_SW_LP_MASK                        0x1
#define MT6335_RG_VA18_SW_LP_SHIFT                       1
#define MT6335_RG_VA18_SW_OP_EN_MASK                     0x1
#define MT6335_RG_VA18_SW_OP_EN_SHIFT                    0
#define MT6335_RG_VA18_HW0_OP_EN_MASK                    0x1
#define MT6335_RG_VA18_HW0_OP_EN_SHIFT                   1
#define MT6335_RG_VA18_HW1_OP_EN_MASK                    0x1
#define MT6335_RG_VA18_HW1_OP_EN_SHIFT                   2
#define MT6335_RG_VA18_HW2_OP_EN_MASK                    0x1
#define MT6335_RG_VA18_HW2_OP_EN_SHIFT                   3
#define MT6335_RG_VA18_OP_EN_SET_MASK                    0xFFFF
#define MT6335_RG_VA18_OP_EN_SET_SHIFT                   0
#define MT6335_RG_VA18_OP_EN_CLR_MASK                    0xFFFF
#define MT6335_RG_VA18_OP_EN_CLR_SHIFT                   0
#define MT6335_RG_VA18_HW0_OP_CFG_MASK                   0x1
#define MT6335_RG_VA18_HW0_OP_CFG_SHIFT                  1
#define MT6335_RG_VA18_HW1_OP_CFG_MASK                   0x1
#define MT6335_RG_VA18_HW1_OP_CFG_SHIFT                  2
#define MT6335_RG_VA18_HW2_OP_CFG_MASK                   0x1
#define MT6335_RG_VA18_HW2_OP_CFG_SHIFT                  3
#define MT6335_RG_VA18_GO_ON_OP_MASK                     0x1
#define MT6335_RG_VA18_GO_ON_OP_SHIFT                    8
#define MT6335_RG_VA18_GO_LP_OP_MASK                     0x1
#define MT6335_RG_VA18_GO_LP_OP_SHIFT                    9
#define MT6335_RG_VA18_OP_CFG_SET_MASK                   0xFFFF
#define MT6335_RG_VA18_OP_CFG_SET_SHIFT                  0
#define MT6335_RG_VA18_OP_CFG_CLR_MASK                   0xFFFF
#define MT6335_RG_VA18_OP_CFG_CLR_SHIFT                  0
#define MT6335_DA_QI_VA18_MODE_MASK                      0x1
#define MT6335_DA_QI_VA18_MODE_SHIFT                     8
#define MT6335_RG_VA18_STBTD_MASK                        0x3
#define MT6335_RG_VA18_STBTD_SHIFT                       9
#define MT6335_DA_QI_VA18_STB_MASK                       0x1
#define MT6335_DA_QI_VA18_STB_SHIFT                      14
#define MT6335_DA_QI_VA18_EN_MASK                        0x1
#define MT6335_DA_QI_VA18_EN_SHIFT                       15
#define MT6335_RG_VA18_AUXADC_PWDB_EN_MASK               0x1
#define MT6335_RG_VA18_AUXADC_PWDB_EN_SHIFT              2
#define MT6335_RG_VA18_OCFB_EN_MASK                      0x1
#define MT6335_RG_VA18_OCFB_EN_SHIFT                     9
#define MT6335_DA_QI_VA18_OCFB_EN_MASK                   0x1
#define MT6335_DA_QI_VA18_OCFB_EN_SHIFT                  10
#define MT6335_RG_VUSB33_SW_EN_MASK                      0x1
#define MT6335_RG_VUSB33_SW_EN_SHIFT                     0
#define MT6335_RG_VUSB33_SW_LP_MASK                      0x1
#define MT6335_RG_VUSB33_SW_LP_SHIFT                     1
#define MT6335_RG_VUSB33_SW_OP_EN_MASK                   0x1
#define MT6335_RG_VUSB33_SW_OP_EN_SHIFT                  0
#define MT6335_RG_VUSB33_HW0_OP_EN_MASK                  0x1
#define MT6335_RG_VUSB33_HW0_OP_EN_SHIFT                 1
#define MT6335_RG_VUSB33_HW1_OP_EN_MASK                  0x1
#define MT6335_RG_VUSB33_HW1_OP_EN_SHIFT                 2
#define MT6335_RG_VUSB33_HW2_OP_EN_MASK                  0x1
#define MT6335_RG_VUSB33_HW2_OP_EN_SHIFT                 3
#define MT6335_RG_VUSB33_OP_EN_SET_MASK                  0xFFFF
#define MT6335_RG_VUSB33_OP_EN_SET_SHIFT                 0
#define MT6335_RG_VUSB33_OP_EN_CLR_MASK                  0xFFFF
#define MT6335_RG_VUSB33_OP_EN_CLR_SHIFT                 0
#define MT6335_RG_VUSB33_HW0_OP_CFG_MASK                 0x1
#define MT6335_RG_VUSB33_HW0_OP_CFG_SHIFT                1
#define MT6335_RG_VUSB33_HW1_OP_CFG_MASK                 0x1
#define MT6335_RG_VUSB33_HW1_OP_CFG_SHIFT                2
#define MT6335_RG_VUSB33_HW2_OP_CFG_MASK                 0x1
#define MT6335_RG_VUSB33_HW2_OP_CFG_SHIFT                3
#define MT6335_RG_VUSB33_GO_ON_OP_MASK                   0x1
#define MT6335_RG_VUSB33_GO_ON_OP_SHIFT                  8
#define MT6335_RG_VUSB33_GO_LP_OP_MASK                   0x1
#define MT6335_RG_VUSB33_GO_LP_OP_SHIFT                  9
#define MT6335_RG_VUSB33_OP_CFG_SET_MASK                 0xFFFF
#define MT6335_RG_VUSB33_OP_CFG_SET_SHIFT                0
#define MT6335_RG_VUSB33_OP_CFG_CLR_MASK                 0xFFFF
#define MT6335_RG_VUSB33_OP_CFG_CLR_SHIFT                0
#define MT6335_DA_QI_VUSB33_MODE_MASK                    0x1
#define MT6335_DA_QI_VUSB33_MODE_SHIFT                   8
#define MT6335_RG_VUSB33_STBTD_MASK                      0x3
#define MT6335_RG_VUSB33_STBTD_SHIFT                     9
#define MT6335_DA_QI_VUSB33_STB_MASK                     0x1
#define MT6335_DA_QI_VUSB33_STB_SHIFT                    14
#define MT6335_DA_QI_VUSB33_EN_MASK                      0x1
#define MT6335_DA_QI_VUSB33_EN_SHIFT                     15
#define MT6335_RG_VUSB33_OCFB_EN_MASK                    0x1
#define MT6335_RG_VUSB33_OCFB_EN_SHIFT                   9
#define MT6335_DA_QI_VUSB33_OCFB_EN_MASK                 0x1
#define MT6335_DA_QI_VUSB33_OCFB_EN_SHIFT                10
#define MT6335_RG_VEMC_SW_EN_MASK                        0x1
#define MT6335_RG_VEMC_SW_EN_SHIFT                       0
#define MT6335_RG_VEMC_SW_LP_MASK                        0x1
#define MT6335_RG_VEMC_SW_LP_SHIFT                       1
#define MT6335_RG_VEMC_SW_OP_EN_MASK                     0x1
#define MT6335_RG_VEMC_SW_OP_EN_SHIFT                    0
#define MT6335_RG_VEMC_HW0_OP_EN_MASK                    0x1
#define MT6335_RG_VEMC_HW0_OP_EN_SHIFT                   1
#define MT6335_RG_VEMC_HW1_OP_EN_MASK                    0x1
#define MT6335_RG_VEMC_HW1_OP_EN_SHIFT                   2
#define MT6335_RG_VEMC_HW2_OP_EN_MASK                    0x1
#define MT6335_RG_VEMC_HW2_OP_EN_SHIFT                   3
#define MT6335_RG_VEMC_OP_EN_SET_MASK                    0xFFFF
#define MT6335_RG_VEMC_OP_EN_SET_SHIFT                   0
#define MT6335_RG_VEMC_OP_EN_CLR_MASK                    0xFFFF
#define MT6335_RG_VEMC_OP_EN_CLR_SHIFT                   0
#define MT6335_RG_VEMC_HW0_OP_CFG_MASK                   0x1
#define MT6335_RG_VEMC_HW0_OP_CFG_SHIFT                  1
#define MT6335_RG_VEMC_HW1_OP_CFG_MASK                   0x1
#define MT6335_RG_VEMC_HW1_OP_CFG_SHIFT                  2
#define MT6335_RG_VEMC_HW2_OP_CFG_MASK                   0x1
#define MT6335_RG_VEMC_HW2_OP_CFG_SHIFT                  3
#define MT6335_RG_VEMC_GO_ON_OP_MASK                     0x1
#define MT6335_RG_VEMC_GO_ON_OP_SHIFT                    8
#define MT6335_RG_VEMC_GO_LP_OP_MASK                     0x1
#define MT6335_RG_VEMC_GO_LP_OP_SHIFT                    9
#define MT6335_RG_VEMC_OP_CFG_SET_MASK                   0xFFFF
#define MT6335_RG_VEMC_OP_CFG_SET_SHIFT                  0
#define MT6335_RG_VEMC_OP_CFG_CLR_MASK                   0xFFFF
#define MT6335_RG_VEMC_OP_CFG_CLR_SHIFT                  0
#define MT6335_DA_QI_VEMC_MODE_MASK                      0x1
#define MT6335_DA_QI_VEMC_MODE_SHIFT                     8
#define MT6335_RG_VEMC_STBTD_MASK                        0x3
#define MT6335_RG_VEMC_STBTD_SHIFT                       9
#define MT6335_DA_QI_VEMC_STB_MASK                       0x1
#define MT6335_DA_QI_VEMC_STB_SHIFT                      14
#define MT6335_DA_QI_VEMC_EN_MASK                        0x1
#define MT6335_DA_QI_VEMC_EN_SHIFT                       15
#define MT6335_RG_VEMC_OCFB_EN_MASK                      0x1
#define MT6335_RG_VEMC_OCFB_EN_SHIFT                     9
#define MT6335_DA_QI_VEMC_OCFB_EN_MASK                   0x1
#define MT6335_DA_QI_VEMC_OCFB_EN_SHIFT                  10
#define MT6335_RG_VEMC_DUMMY_LOAD_MASK                   0x7
#define MT6335_RG_VEMC_DUMMY_LOAD_SHIFT                  4
#define MT6335_DA_QI_VEMC_DUMMY_LOAD_MASK                0x1F
#define MT6335_DA_QI_VEMC_DUMMY_LOAD_SHIFT               11
#define MT6335_RG_VXO22_SW_EN_MASK                       0x1
#define MT6335_RG_VXO22_SW_EN_SHIFT                      0
#define MT6335_RG_VXO22_SW_LP_MASK                       0x1
#define MT6335_RG_VXO22_SW_LP_SHIFT                      1
#define MT6335_RG_VXO22_SW_OP_EN_MASK                    0x1
#define MT6335_RG_VXO22_SW_OP_EN_SHIFT                   0
#define MT6335_RG_VXO22_HW0_OP_EN_MASK                   0x1
#define MT6335_RG_VXO22_HW0_OP_EN_SHIFT                  1
#define MT6335_RG_VXO22_HW1_OP_EN_MASK                   0x1
#define MT6335_RG_VXO22_HW1_OP_EN_SHIFT                  2
#define MT6335_RG_VXO22_HW2_OP_EN_MASK                   0x1
#define MT6335_RG_VXO22_HW2_OP_EN_SHIFT                  3
#define MT6335_RG_VXO22_OP_EN_SET_MASK                   0xFFFF
#define MT6335_RG_VXO22_OP_EN_SET_SHIFT                  0
#define MT6335_RG_VXO22_OP_EN_CLR_MASK                   0xFFFF
#define MT6335_RG_VXO22_OP_EN_CLR_SHIFT                  0
#define MT6335_RG_VXO22_HW0_OP_CFG_MASK                  0x1
#define MT6335_RG_VXO22_HW0_OP_CFG_SHIFT                 1
#define MT6335_RG_VXO22_HW1_OP_CFG_MASK                  0x1
#define MT6335_RG_VXO22_HW1_OP_CFG_SHIFT                 2
#define MT6335_RG_VXO22_HW2_OP_CFG_MASK                  0x1
#define MT6335_RG_VXO22_HW2_OP_CFG_SHIFT                 3
#define MT6335_RG_VXO22_GO_ON_OP_MASK                    0x1
#define MT6335_RG_VXO22_GO_ON_OP_SHIFT                   8
#define MT6335_RG_VXO22_GO_LP_OP_MASK                    0x1
#define MT6335_RG_VXO22_GO_LP_OP_SHIFT                   9
#define MT6335_RG_VXO22_OP_CFG_SET_MASK                  0xFFFF
#define MT6335_RG_VXO22_OP_CFG_SET_SHIFT                 0
#define MT6335_RG_VXO22_OP_CFG_CLR_MASK                  0xFFFF
#define MT6335_RG_VXO22_OP_CFG_CLR_SHIFT                 0
#define MT6335_DA_QI_VXO22_MODE_MASK                     0x1
#define MT6335_DA_QI_VXO22_MODE_SHIFT                    8
#define MT6335_RG_VXO22_STBTD_MASK                       0x3
#define MT6335_RG_VXO22_STBTD_SHIFT                      9
#define MT6335_DA_QI_VXO22_STB_MASK                      0x1
#define MT6335_DA_QI_VXO22_STB_SHIFT                     14
#define MT6335_DA_QI_VXO22_EN_MASK                       0x1
#define MT6335_DA_QI_VXO22_EN_SHIFT                      15
#define MT6335_RG_VXO22_OCFB_EN_MASK                     0x1
#define MT6335_RG_VXO22_OCFB_EN_SHIFT                    9
#define MT6335_DA_QI_VXO22_OCFB_EN_MASK                  0x1
#define MT6335_DA_QI_VXO22_OCFB_EN_SHIFT                 10
#define MT6335_RG_VEFUSE_SW_EN_MASK                      0x1
#define MT6335_RG_VEFUSE_SW_EN_SHIFT                     0
#define MT6335_RG_VEFUSE_SW_LP_MASK                      0x1
#define MT6335_RG_VEFUSE_SW_LP_SHIFT                     1
#define MT6335_RG_VEFUSE_SW_OP_EN_MASK                   0x1
#define MT6335_RG_VEFUSE_SW_OP_EN_SHIFT                  0
#define MT6335_RG_VEFUSE_HW0_OP_EN_MASK                  0x1
#define MT6335_RG_VEFUSE_HW0_OP_EN_SHIFT                 1
#define MT6335_RG_VEFUSE_HW1_OP_EN_MASK                  0x1
#define MT6335_RG_VEFUSE_HW1_OP_EN_SHIFT                 2
#define MT6335_RG_VEFUSE_HW2_OP_EN_MASK                  0x1
#define MT6335_RG_VEFUSE_HW2_OP_EN_SHIFT                 3
#define MT6335_RG_VEFUSE_OP_EN_SET_MASK                  0xFFFF
#define MT6335_RG_VEFUSE_OP_EN_SET_SHIFT                 0
#define MT6335_RG_VEFUSE_OP_EN_CLR_MASK                  0xFFFF
#define MT6335_RG_VEFUSE_OP_EN_CLR_SHIFT                 0
#define MT6335_RG_VEFUSE_HW0_OP_CFG_MASK                 0x1
#define MT6335_RG_VEFUSE_HW0_OP_CFG_SHIFT                1
#define MT6335_RG_VEFUSE_HW1_OP_CFG_MASK                 0x1
#define MT6335_RG_VEFUSE_HW1_OP_CFG_SHIFT                2
#define MT6335_RG_VEFUSE_HW2_OP_CFG_MASK                 0x1
#define MT6335_RG_VEFUSE_HW2_OP_CFG_SHIFT                3
#define MT6335_RG_VEFUSE_GO_ON_OP_MASK                   0x1
#define MT6335_RG_VEFUSE_GO_ON_OP_SHIFT                  8
#define MT6335_RG_VEFUSE_GO_LP_OP_MASK                   0x1
#define MT6335_RG_VEFUSE_GO_LP_OP_SHIFT                  9
#define MT6335_RG_VEFUSE_OP_CFG_SET_MASK                 0xFFFF
#define MT6335_RG_VEFUSE_OP_CFG_SET_SHIFT                0
#define MT6335_RG_VEFUSE_OP_CFG_CLR_MASK                 0xFFFF
#define MT6335_RG_VEFUSE_OP_CFG_CLR_SHIFT                0
#define MT6335_DA_QI_VEFUSE_MODE_MASK                    0x1
#define MT6335_DA_QI_VEFUSE_MODE_SHIFT                   8
#define MT6335_RG_VEFUSE_STBTD_MASK                      0x3
#define MT6335_RG_VEFUSE_STBTD_SHIFT                     9
#define MT6335_DA_QI_VEFUSE_STB_MASK                     0x1
#define MT6335_DA_QI_VEFUSE_STB_SHIFT                    14
#define MT6335_DA_QI_VEFUSE_EN_MASK                      0x1
#define MT6335_DA_QI_VEFUSE_EN_SHIFT                     15
#define MT6335_RG_VEFUSE_OCFB_EN_MASK                    0x1
#define MT6335_RG_VEFUSE_OCFB_EN_SHIFT                   9
#define MT6335_DA_QI_VEFUSE_OCFB_EN_MASK                 0x1
#define MT6335_DA_QI_VEFUSE_OCFB_EN_SHIFT                10
#define MT6335_RG_VEFUSE_DUMMY_LOAD_MASK                 0x7
#define MT6335_RG_VEFUSE_DUMMY_LOAD_SHIFT                4
#define MT6335_DA_QI_VEFUSE_DUMMY_LOAD_MASK              0x1F
#define MT6335_DA_QI_VEFUSE_DUMMY_LOAD_SHIFT             11
#define MT6335_RG_VSIM1_SW_EN_MASK                       0x1
#define MT6335_RG_VSIM1_SW_EN_SHIFT                      0
#define MT6335_RG_VSIM1_SW_LP_MASK                       0x1
#define MT6335_RG_VSIM1_SW_LP_SHIFT                      1
#define MT6335_RG_VSIM1_SW_OP_EN_MASK                    0x1
#define MT6335_RG_VSIM1_SW_OP_EN_SHIFT                   0
#define MT6335_RG_VSIM1_HW0_OP_EN_MASK                   0x1
#define MT6335_RG_VSIM1_HW0_OP_EN_SHIFT                  1
#define MT6335_RG_VSIM1_HW1_OP_EN_MASK                   0x1
#define MT6335_RG_VSIM1_HW1_OP_EN_SHIFT                  2
#define MT6335_RG_VSIM1_HW2_OP_EN_MASK                   0x1
#define MT6335_RG_VSIM1_HW2_OP_EN_SHIFT                  3
#define MT6335_RG_VSIM1_OP_EN_SET_MASK                   0xFFFF
#define MT6335_RG_VSIM1_OP_EN_SET_SHIFT                  0
#define MT6335_RG_VSIM1_OP_EN_CLR_MASK                   0xFFFF
#define MT6335_RG_VSIM1_OP_EN_CLR_SHIFT                  0
#define MT6335_RG_VSIM1_HW0_OP_CFG_MASK                  0x1
#define MT6335_RG_VSIM1_HW0_OP_CFG_SHIFT                 1
#define MT6335_RG_VSIM1_HW1_OP_CFG_MASK                  0x1
#define MT6335_RG_VSIM1_HW1_OP_CFG_SHIFT                 2
#define MT6335_RG_VSIM1_HW2_OP_CFG_MASK                  0x1
#define MT6335_RG_VSIM1_HW2_OP_CFG_SHIFT                 3
#define MT6335_RG_VSIM1_GO_ON_OP_MASK                    0x1
#define MT6335_RG_VSIM1_GO_ON_OP_SHIFT                   8
#define MT6335_RG_VSIM1_GO_LP_OP_MASK                    0x1
#define MT6335_RG_VSIM1_GO_LP_OP_SHIFT                   9
#define MT6335_RG_VSIM1_OP_CFG_SET_MASK                  0xFFFF
#define MT6335_RG_VSIM1_OP_CFG_SET_SHIFT                 0
#define MT6335_RG_VSIM1_OP_CFG_CLR_MASK                  0xFFFF
#define MT6335_RG_VSIM1_OP_CFG_CLR_SHIFT                 0
#define MT6335_DA_QI_VSIM1_MODE_MASK                     0x1
#define MT6335_DA_QI_VSIM1_MODE_SHIFT                    8
#define MT6335_RG_VSIM1_STBTD_MASK                       0x3
#define MT6335_RG_VSIM1_STBTD_SHIFT                      9
#define MT6335_DA_QI_VSIM1_STB_MASK                      0x1
#define MT6335_DA_QI_VSIM1_STB_SHIFT                     14
#define MT6335_DA_QI_VSIM1_EN_MASK                       0x1
#define MT6335_DA_QI_VSIM1_EN_SHIFT                      15
#define MT6335_RG_VSIM1_OCFB_EN_MASK                     0x1
#define MT6335_RG_VSIM1_OCFB_EN_SHIFT                    9
#define MT6335_DA_QI_VSIM1_OCFB_EN_MASK                  0x1
#define MT6335_DA_QI_VSIM1_OCFB_EN_SHIFT                 10
#define MT6335_RG_VSIM1_DUMMY_LOAD_MASK                  0x7
#define MT6335_RG_VSIM1_DUMMY_LOAD_SHIFT                 4
#define MT6335_DA_QI_VSIM1_DUMMY_LOAD_MASK               0x1F
#define MT6335_DA_QI_VSIM1_DUMMY_LOAD_SHIFT              11
#define MT6335_RG_VSIM2_SW_EN_MASK                       0x1
#define MT6335_RG_VSIM2_SW_EN_SHIFT                      0
#define MT6335_RG_VSIM2_SW_LP_MASK                       0x1
#define MT6335_RG_VSIM2_SW_LP_SHIFT                      1
#define MT6335_RG_VSIM2_SW_OP_EN_MASK                    0x1
#define MT6335_RG_VSIM2_SW_OP_EN_SHIFT                   0
#define MT6335_RG_VSIM2_HW0_OP_EN_MASK                   0x1
#define MT6335_RG_VSIM2_HW0_OP_EN_SHIFT                  1
#define MT6335_RG_VSIM2_HW1_OP_EN_MASK                   0x1
#define MT6335_RG_VSIM2_HW1_OP_EN_SHIFT                  2
#define MT6335_RG_VSIM2_HW2_OP_EN_MASK                   0x1
#define MT6335_RG_VSIM2_HW2_OP_EN_SHIFT                  3
#define MT6335_RG_VSIM2_OP_EN_SET_MASK                   0xFFFF
#define MT6335_RG_VSIM2_OP_EN_SET_SHIFT                  0
#define MT6335_RG_VSIM2_OP_EN_CLR_MASK                   0xFFFF
#define MT6335_RG_VSIM2_OP_EN_CLR_SHIFT                  0
#define MT6335_RG_VSIM2_HW0_OP_CFG_MASK                  0x1
#define MT6335_RG_VSIM2_HW0_OP_CFG_SHIFT                 1
#define MT6335_RG_VSIM2_HW1_OP_CFG_MASK                  0x1
#define MT6335_RG_VSIM2_HW1_OP_CFG_SHIFT                 2
#define MT6335_RG_VSIM2_HW2_OP_CFG_MASK                  0x1
#define MT6335_RG_VSIM2_HW2_OP_CFG_SHIFT                 3
#define MT6335_RG_VSIM2_GO_ON_OP_MASK                    0x1
#define MT6335_RG_VSIM2_GO_ON_OP_SHIFT                   8
#define MT6335_RG_VSIM2_GO_LP_OP_MASK                    0x1
#define MT6335_RG_VSIM2_GO_LP_OP_SHIFT                   9
#define MT6335_RG_VSIM2_OP_CFG_SET_MASK                  0xFFFF
#define MT6335_RG_VSIM2_OP_CFG_SET_SHIFT                 0
#define MT6335_RG_VSIM2_OP_CFG_CLR_MASK                  0xFFFF
#define MT6335_RG_VSIM2_OP_CFG_CLR_SHIFT                 0
#define MT6335_DA_QI_VSIM2_MODE_MASK                     0x1
#define MT6335_DA_QI_VSIM2_MODE_SHIFT                    8
#define MT6335_RG_VSIM2_STBTD_MASK                       0x3
#define MT6335_RG_VSIM2_STBTD_SHIFT                      9
#define MT6335_DA_QI_VSIM2_STB_MASK                      0x1
#define MT6335_DA_QI_VSIM2_STB_SHIFT                     14
#define MT6335_DA_QI_VSIM2_EN_MASK                       0x1
#define MT6335_DA_QI_VSIM2_EN_SHIFT                      15
#define MT6335_RG_VSIM2_OCFB_EN_MASK                     0x1
#define MT6335_RG_VSIM2_OCFB_EN_SHIFT                    9
#define MT6335_DA_QI_VSIM2_OCFB_EN_MASK                  0x1
#define MT6335_DA_QI_VSIM2_OCFB_EN_SHIFT                 10
#define MT6335_RG_VSIM2_DUMMY_LOAD_MASK                  0x7
#define MT6335_RG_VSIM2_DUMMY_LOAD_SHIFT                 4
#define MT6335_DA_QI_VSIM2_DUMMY_LOAD_MASK               0x1F
#define MT6335_DA_QI_VSIM2_DUMMY_LOAD_SHIFT              11
#define MT6335_RG_VCAMAF_SW_EN_MASK                      0x1
#define MT6335_RG_VCAMAF_SW_EN_SHIFT                     0
#define MT6335_RG_VCAMAF_SW_LP_MASK                      0x1
#define MT6335_RG_VCAMAF_SW_LP_SHIFT                     1
#define MT6335_RG_VCAMAF_SW_OP_EN_MASK                   0x1
#define MT6335_RG_VCAMAF_SW_OP_EN_SHIFT                  0
#define MT6335_RG_VCAMAF_HW0_OP_EN_MASK                  0x1
#define MT6335_RG_VCAMAF_HW0_OP_EN_SHIFT                 1
#define MT6335_RG_VCAMAF_HW1_OP_EN_MASK                  0x1
#define MT6335_RG_VCAMAF_HW1_OP_EN_SHIFT                 2
#define MT6335_RG_VCAMAF_HW2_OP_EN_MASK                  0x1
#define MT6335_RG_VCAMAF_HW2_OP_EN_SHIFT                 3
#define MT6335_RG_VCAMAF_OP_EN_SET_MASK                  0xFFFF
#define MT6335_RG_VCAMAF_OP_EN_SET_SHIFT                 0
#define MT6335_RG_VCAMAF_OP_EN_CLR_MASK                  0xFFFF
#define MT6335_RG_VCAMAF_OP_EN_CLR_SHIFT                 0
#define MT6335_RG_VCAMAF_HW0_OP_CFG_MASK                 0x1
#define MT6335_RG_VCAMAF_HW0_OP_CFG_SHIFT                1
#define MT6335_RG_VCAMAF_HW1_OP_CFG_MASK                 0x1
#define MT6335_RG_VCAMAF_HW1_OP_CFG_SHIFT                2
#define MT6335_RG_VCAMAF_HW2_OP_CFG_MASK                 0x1
#define MT6335_RG_VCAMAF_HW2_OP_CFG_SHIFT                3
#define MT6335_RG_VCAMAF_GO_ON_OP_MASK                   0x1
#define MT6335_RG_VCAMAF_GO_ON_OP_SHIFT                  8
#define MT6335_RG_VCAMAF_GO_LP_OP_MASK                   0x1
#define MT6335_RG_VCAMAF_GO_LP_OP_SHIFT                  9
#define MT6335_RG_VCAMAF_OP_CFG_SET_MASK                 0xFFFF
#define MT6335_RG_VCAMAF_OP_CFG_SET_SHIFT                0
#define MT6335_RG_VCAMAF_OP_CFG_CLR_MASK                 0xFFFF
#define MT6335_RG_VCAMAF_OP_CFG_CLR_SHIFT                0
#define MT6335_DA_QI_VCAMAF_MODE_MASK                    0x1
#define MT6335_DA_QI_VCAMAF_MODE_SHIFT                   8
#define MT6335_RG_VCAMAF_STBTD_MASK                      0x3
#define MT6335_RG_VCAMAF_STBTD_SHIFT                     9
#define MT6335_DA_QI_VCAMAF_STB_MASK                     0x1
#define MT6335_DA_QI_VCAMAF_STB_SHIFT                    14
#define MT6335_DA_QI_VCAMAF_EN_MASK                      0x1
#define MT6335_DA_QI_VCAMAF_EN_SHIFT                     15
#define MT6335_RG_VCAMAF_OCFB_EN_MASK                    0x1
#define MT6335_RG_VCAMAF_OCFB_EN_SHIFT                   9
#define MT6335_DA_QI_VCAMAF_OCFB_EN_MASK                 0x1
#define MT6335_DA_QI_VCAMAF_OCFB_EN_SHIFT                10
#define MT6335_RG_VCAMAF_DUMMY_LOAD_MASK                 0x7
#define MT6335_RG_VCAMAF_DUMMY_LOAD_SHIFT                4
#define MT6335_DA_QI_VCAMAF_DUMMY_LOAD_MASK              0x1F
#define MT6335_DA_QI_VCAMAF_DUMMY_LOAD_SHIFT             11
#define MT6335_RG_VTOUCH_SW_EN_MASK                      0x1
#define MT6335_RG_VTOUCH_SW_EN_SHIFT                     0
#define MT6335_RG_VTOUCH_SW_LP_MASK                      0x1
#define MT6335_RG_VTOUCH_SW_LP_SHIFT                     1
#define MT6335_RG_VTOUCH_SW_OP_EN_MASK                   0x1
#define MT6335_RG_VTOUCH_SW_OP_EN_SHIFT                  0
#define MT6335_RG_VTOUCH_HW0_OP_EN_MASK                  0x1
#define MT6335_RG_VTOUCH_HW0_OP_EN_SHIFT                 1
#define MT6335_RG_VTOUCH_HW1_OP_EN_MASK                  0x1
#define MT6335_RG_VTOUCH_HW1_OP_EN_SHIFT                 2
#define MT6335_RG_VTOUCH_HW2_OP_EN_MASK                  0x1
#define MT6335_RG_VTOUCH_HW2_OP_EN_SHIFT                 3
#define MT6335_RG_VTOUCH_OP_EN_SET_MASK                  0xFFFF
#define MT6335_RG_VTOUCH_OP_EN_SET_SHIFT                 0
#define MT6335_RG_VTOUCH_OP_EN_CLR_MASK                  0xFFFF
#define MT6335_RG_VTOUCH_OP_EN_CLR_SHIFT                 0
#define MT6335_RG_VTOUCH_HW0_OP_CFG_MASK                 0x1
#define MT6335_RG_VTOUCH_HW0_OP_CFG_SHIFT                1
#define MT6335_RG_VTOUCH_HW1_OP_CFG_MASK                 0x1
#define MT6335_RG_VTOUCH_HW1_OP_CFG_SHIFT                2
#define MT6335_RG_VTOUCH_HW2_OP_CFG_MASK                 0x1
#define MT6335_RG_VTOUCH_HW2_OP_CFG_SHIFT                3
#define MT6335_RG_VTOUCH_GO_ON_OP_MASK                   0x1
#define MT6335_RG_VTOUCH_GO_ON_OP_SHIFT                  8
#define MT6335_RG_VTOUCH_GO_LP_OP_MASK                   0x1
#define MT6335_RG_VTOUCH_GO_LP_OP_SHIFT                  9
#define MT6335_RG_VTOUCH_OP_CFG_SET_MASK                 0xFFFF
#define MT6335_RG_VTOUCH_OP_CFG_SET_SHIFT                0
#define MT6335_RG_VTOUCH_OP_CFG_CLR_MASK                 0xFFFF
#define MT6335_RG_VTOUCH_OP_CFG_CLR_SHIFT                0
#define MT6335_DA_QI_VTOUCH_MODE_MASK                    0x1
#define MT6335_DA_QI_VTOUCH_MODE_SHIFT                   8
#define MT6335_RG_VTOUCH_STBTD_MASK                      0x3
#define MT6335_RG_VTOUCH_STBTD_SHIFT                     9
#define MT6335_DA_QI_VTOUCH_STB_MASK                     0x1
#define MT6335_DA_QI_VTOUCH_STB_SHIFT                    14
#define MT6335_DA_QI_VTOUCH_EN_MASK                      0x1
#define MT6335_DA_QI_VTOUCH_EN_SHIFT                     15
#define MT6335_RG_VTOUCH_OCFB_EN_MASK                    0x1
#define MT6335_RG_VTOUCH_OCFB_EN_SHIFT                   9
#define MT6335_DA_QI_VTOUCH_OCFB_EN_MASK                 0x1
#define MT6335_DA_QI_VTOUCH_OCFB_EN_SHIFT                10
#define MT6335_RG_VTOUCH_DUMMY_LOAD_MASK                 0x7
#define MT6335_RG_VTOUCH_DUMMY_LOAD_SHIFT                4
#define MT6335_DA_QI_VTOUCH_DUMMY_LOAD_MASK              0x1F
#define MT6335_DA_QI_VTOUCH_DUMMY_LOAD_SHIFT             11
#define MT6335_RG_VCAMD1_SW_EN_MASK                      0x1
#define MT6335_RG_VCAMD1_SW_EN_SHIFT                     0
#define MT6335_RG_VCAMD1_SW_LP_MASK                      0x1
#define MT6335_RG_VCAMD1_SW_LP_SHIFT                     1
#define MT6335_RG_VCAMD1_SW_OP_EN_MASK                   0x1
#define MT6335_RG_VCAMD1_SW_OP_EN_SHIFT                  0
#define MT6335_RG_VCAMD1_HW0_OP_EN_MASK                  0x1
#define MT6335_RG_VCAMD1_HW0_OP_EN_SHIFT                 1
#define MT6335_RG_VCAMD1_HW1_OP_EN_MASK                  0x1
#define MT6335_RG_VCAMD1_HW1_OP_EN_SHIFT                 2
#define MT6335_RG_VCAMD1_HW2_OP_EN_MASK                  0x1
#define MT6335_RG_VCAMD1_HW2_OP_EN_SHIFT                 3
#define MT6335_RG_VCAMD1_OP_EN_SET_MASK                  0xFFFF
#define MT6335_RG_VCAMD1_OP_EN_SET_SHIFT                 0
#define MT6335_RG_VCAMD1_OP_EN_CLR_MASK                  0xFFFF
#define MT6335_RG_VCAMD1_OP_EN_CLR_SHIFT                 0
#define MT6335_RG_VCAMD1_HW0_OP_CFG_MASK                 0x1
#define MT6335_RG_VCAMD1_HW0_OP_CFG_SHIFT                1
#define MT6335_RG_VCAMD1_HW1_OP_CFG_MASK                 0x1
#define MT6335_RG_VCAMD1_HW1_OP_CFG_SHIFT                2
#define MT6335_RG_VCAMD1_HW2_OP_CFG_MASK                 0x1
#define MT6335_RG_VCAMD1_HW2_OP_CFG_SHIFT                3
#define MT6335_RG_VCAMD1_GO_ON_OP_MASK                   0x1
#define MT6335_RG_VCAMD1_GO_ON_OP_SHIFT                  8
#define MT6335_RG_VCAMD1_GO_LP_OP_MASK                   0x1
#define MT6335_RG_VCAMD1_GO_LP_OP_SHIFT                  9
#define MT6335_RG_VCAMD1_OP_CFG_SET_MASK                 0xFFFF
#define MT6335_RG_VCAMD1_OP_CFG_SET_SHIFT                0
#define MT6335_RG_VCAMD1_OP_CFG_CLR_MASK                 0xFFFF
#define MT6335_RG_VCAMD1_OP_CFG_CLR_SHIFT                0
#define MT6335_DA_QI_VCAMD1_MODE_MASK                    0x1
#define MT6335_DA_QI_VCAMD1_MODE_SHIFT                   8
#define MT6335_RG_VCAMD1_STBTD_MASK                      0x3
#define MT6335_RG_VCAMD1_STBTD_SHIFT                     9
#define MT6335_DA_QI_VCAMD1_STB_MASK                     0x1
#define MT6335_DA_QI_VCAMD1_STB_SHIFT                    14
#define MT6335_DA_QI_VCAMD1_EN_MASK                      0x1
#define MT6335_DA_QI_VCAMD1_EN_SHIFT                     15
#define MT6335_RG_VCAMD1_OCFB_EN_MASK                    0x1
#define MT6335_RG_VCAMD1_OCFB_EN_SHIFT                   9
#define MT6335_DA_QI_VCAMD1_OCFB_EN_MASK                 0x1
#define MT6335_DA_QI_VCAMD1_OCFB_EN_SHIFT                10
#define MT6335_RG_VCAMD1_DUMMY_LOAD_MASK                 0x7
#define MT6335_RG_VCAMD1_DUMMY_LOAD_SHIFT                4
#define MT6335_DA_QI_VCAMD1_DUMMY_LOAD_MASK              0x1F
#define MT6335_DA_QI_VCAMD1_DUMMY_LOAD_SHIFT             11
#define MT6335_RG_VCAMD2_SW_EN_MASK                      0x1
#define MT6335_RG_VCAMD2_SW_EN_SHIFT                     0
#define MT6335_RG_VCAMD2_SW_LP_MASK                      0x1
#define MT6335_RG_VCAMD2_SW_LP_SHIFT                     1
#define MT6335_RG_VCAMD2_SW_OP_EN_MASK                   0x1
#define MT6335_RG_VCAMD2_SW_OP_EN_SHIFT                  0
#define MT6335_RG_VCAMD2_HW0_OP_EN_MASK                  0x1
#define MT6335_RG_VCAMD2_HW0_OP_EN_SHIFT                 1
#define MT6335_RG_VCAMD2_HW1_OP_EN_MASK                  0x1
#define MT6335_RG_VCAMD2_HW1_OP_EN_SHIFT                 2
#define MT6335_RG_VCAMD2_HW2_OP_EN_MASK                  0x1
#define MT6335_RG_VCAMD2_HW2_OP_EN_SHIFT                 3
#define MT6335_RG_VCAMD2_OP_EN_SET_MASK                  0xFFFF
#define MT6335_RG_VCAMD2_OP_EN_SET_SHIFT                 0
#define MT6335_RG_VCAMD2_OP_EN_CLR_MASK                  0xFFFF
#define MT6335_RG_VCAMD2_OP_EN_CLR_SHIFT                 0
#define MT6335_RG_VCAMD2_HW0_OP_CFG_MASK                 0x1
#define MT6335_RG_VCAMD2_HW0_OP_CFG_SHIFT                1
#define MT6335_RG_VCAMD2_HW1_OP_CFG_MASK                 0x1
#define MT6335_RG_VCAMD2_HW1_OP_CFG_SHIFT                2
#define MT6335_RG_VCAMD2_HW2_OP_CFG_MASK                 0x1
#define MT6335_RG_VCAMD2_HW2_OP_CFG_SHIFT                3
#define MT6335_RG_VCAMD2_GO_ON_OP_MASK                   0x1
#define MT6335_RG_VCAMD2_GO_ON_OP_SHIFT                  8
#define MT6335_RG_VCAMD2_GO_LP_OP_MASK                   0x1
#define MT6335_RG_VCAMD2_GO_LP_OP_SHIFT                  9
#define MT6335_RG_VCAMD2_OP_CFG_SET_MASK                 0xFFFF
#define MT6335_RG_VCAMD2_OP_CFG_SET_SHIFT                0
#define MT6335_RG_VCAMD2_OP_CFG_CLR_MASK                 0xFFFF
#define MT6335_RG_VCAMD2_OP_CFG_CLR_SHIFT                0
#define MT6335_DA_QI_VCAMD2_MODE_MASK                    0x1
#define MT6335_DA_QI_VCAMD2_MODE_SHIFT                   8
#define MT6335_RG_VCAMD2_STBTD_MASK                      0x3
#define MT6335_RG_VCAMD2_STBTD_SHIFT                     9
#define MT6335_DA_QI_VCAMD2_STB_MASK                     0x1
#define MT6335_DA_QI_VCAMD2_STB_SHIFT                    14
#define MT6335_DA_QI_VCAMD2_EN_MASK                      0x1
#define MT6335_DA_QI_VCAMD2_EN_SHIFT                     15
#define MT6335_RG_VCAMD2_OCFB_EN_MASK                    0x1
#define MT6335_RG_VCAMD2_OCFB_EN_SHIFT                   9
#define MT6335_DA_QI_VCAMD2_OCFB_EN_MASK                 0x1
#define MT6335_DA_QI_VCAMD2_OCFB_EN_SHIFT                10
#define MT6335_RG_VCAMD2_DUMMY_LOAD_MASK                 0x7
#define MT6335_RG_VCAMD2_DUMMY_LOAD_SHIFT                4
#define MT6335_DA_QI_VCAMD2_DUMMY_LOAD_MASK              0x1F
#define MT6335_DA_QI_VCAMD2_DUMMY_LOAD_SHIFT             11
#define MT6335_RG_VCAMIO_SW_EN_MASK                      0x1
#define MT6335_RG_VCAMIO_SW_EN_SHIFT                     0
#define MT6335_RG_VCAMIO_SW_LP_MASK                      0x1
#define MT6335_RG_VCAMIO_SW_LP_SHIFT                     1
#define MT6335_RG_VCAMIO_SW_OP_EN_MASK                   0x1
#define MT6335_RG_VCAMIO_SW_OP_EN_SHIFT                  0
#define MT6335_RG_VCAMIO_HW0_OP_EN_MASK                  0x1
#define MT6335_RG_VCAMIO_HW0_OP_EN_SHIFT                 1
#define MT6335_RG_VCAMIO_HW1_OP_EN_MASK                  0x1
#define MT6335_RG_VCAMIO_HW1_OP_EN_SHIFT                 2
#define MT6335_RG_VCAMIO_HW2_OP_EN_MASK                  0x1
#define MT6335_RG_VCAMIO_HW2_OP_EN_SHIFT                 3
#define MT6335_RG_VCAMIO_OP_EN_SET_MASK                  0xFFFF
#define MT6335_RG_VCAMIO_OP_EN_SET_SHIFT                 0
#define MT6335_RG_VCAMIO_OP_EN_CLR_MASK                  0xFFFF
#define MT6335_RG_VCAMIO_OP_EN_CLR_SHIFT                 0
#define MT6335_RG_VCAMIO_HW0_OP_CFG_MASK                 0x1
#define MT6335_RG_VCAMIO_HW0_OP_CFG_SHIFT                1
#define MT6335_RG_VCAMIO_HW1_OP_CFG_MASK                 0x1
#define MT6335_RG_VCAMIO_HW1_OP_CFG_SHIFT                2
#define MT6335_RG_VCAMIO_HW2_OP_CFG_MASK                 0x1
#define MT6335_RG_VCAMIO_HW2_OP_CFG_SHIFT                3
#define MT6335_RG_VCAMIO_GO_ON_OP_MASK                   0x1
#define MT6335_RG_VCAMIO_GO_ON_OP_SHIFT                  8
#define MT6335_RG_VCAMIO_GO_LP_OP_MASK                   0x1
#define MT6335_RG_VCAMIO_GO_LP_OP_SHIFT                  9
#define MT6335_RG_VCAMIO_OP_CFG_SET_MASK                 0xFFFF
#define MT6335_RG_VCAMIO_OP_CFG_SET_SHIFT                0
#define MT6335_RG_VCAMIO_OP_CFG_CLR_MASK                 0xFFFF
#define MT6335_RG_VCAMIO_OP_CFG_CLR_SHIFT                0
#define MT6335_DA_QI_VCAMIO_MODE_MASK                    0x1
#define MT6335_DA_QI_VCAMIO_MODE_SHIFT                   8
#define MT6335_RG_VCAMIO_STBTD_MASK                      0x3
#define MT6335_RG_VCAMIO_STBTD_SHIFT                     9
#define MT6335_DA_QI_VCAMIO_STB_MASK                     0x1
#define MT6335_DA_QI_VCAMIO_STB_SHIFT                    14
#define MT6335_DA_QI_VCAMIO_EN_MASK                      0x1
#define MT6335_DA_QI_VCAMIO_EN_SHIFT                     15
#define MT6335_RG_VCAMIO_OCFB_EN_MASK                    0x1
#define MT6335_RG_VCAMIO_OCFB_EN_SHIFT                   9
#define MT6335_DA_QI_VCAMIO_OCFB_EN_MASK                 0x1
#define MT6335_DA_QI_VCAMIO_OCFB_EN_SHIFT                10
#define MT6335_RG_VCAMIO_DUMMY_LOAD_MASK                 0x7
#define MT6335_RG_VCAMIO_DUMMY_LOAD_SHIFT                4
#define MT6335_DA_QI_VCAMIO_DUMMY_LOAD_MASK              0x1F
#define MT6335_DA_QI_VCAMIO_DUMMY_LOAD_SHIFT             11
#define MT6335_RG_VMIPI_SW_EN_MASK                       0x1
#define MT6335_RG_VMIPI_SW_EN_SHIFT                      0
#define MT6335_RG_VMIPI_SW_LP_MASK                       0x1
#define MT6335_RG_VMIPI_SW_LP_SHIFT                      1
#define MT6335_RG_VMIPI_SW_OP_EN_MASK                    0x1
#define MT6335_RG_VMIPI_SW_OP_EN_SHIFT                   0
#define MT6335_RG_VMIPI_HW0_OP_EN_MASK                   0x1
#define MT6335_RG_VMIPI_HW0_OP_EN_SHIFT                  1
#define MT6335_RG_VMIPI_HW1_OP_EN_MASK                   0x1
#define MT6335_RG_VMIPI_HW1_OP_EN_SHIFT                  2
#define MT6335_RG_VMIPI_HW2_OP_EN_MASK                   0x1
#define MT6335_RG_VMIPI_HW2_OP_EN_SHIFT                  3
#define MT6335_RG_VMIPI_OP_EN_SET_MASK                   0xFFFF
#define MT6335_RG_VMIPI_OP_EN_SET_SHIFT                  0
#define MT6335_RG_VMIPI_OP_EN_CLR_MASK                   0xFFFF
#define MT6335_RG_VMIPI_OP_EN_CLR_SHIFT                  0
#define MT6335_RG_VMIPI_HW0_OP_CFG_MASK                  0x1
#define MT6335_RG_VMIPI_HW0_OP_CFG_SHIFT                 1
#define MT6335_RG_VMIPI_HW1_OP_CFG_MASK                  0x1
#define MT6335_RG_VMIPI_HW1_OP_CFG_SHIFT                 2
#define MT6335_RG_VMIPI_HW2_OP_CFG_MASK                  0x1
#define MT6335_RG_VMIPI_HW2_OP_CFG_SHIFT                 3
#define MT6335_RG_VMIPI_GO_ON_OP_MASK                    0x1
#define MT6335_RG_VMIPI_GO_ON_OP_SHIFT                   8
#define MT6335_RG_VMIPI_GO_LP_OP_MASK                    0x1
#define MT6335_RG_VMIPI_GO_LP_OP_SHIFT                   9
#define MT6335_RG_VMIPI_OP_CFG_SET_MASK                  0xFFFF
#define MT6335_RG_VMIPI_OP_CFG_SET_SHIFT                 0
#define MT6335_RG_VMIPI_OP_CFG_CLR_MASK                  0xFFFF
#define MT6335_RG_VMIPI_OP_CFG_CLR_SHIFT                 0
#define MT6335_DA_QI_VMIPI_MODE_MASK                     0x1
#define MT6335_DA_QI_VMIPI_MODE_SHIFT                    8
#define MT6335_RG_VMIPI_STBTD_MASK                       0x3
#define MT6335_RG_VMIPI_STBTD_SHIFT                      9
#define MT6335_DA_QI_VMIPI_STB_MASK                      0x1
#define MT6335_DA_QI_VMIPI_STB_SHIFT                     14
#define MT6335_DA_QI_VMIPI_EN_MASK                       0x1
#define MT6335_DA_QI_VMIPI_EN_SHIFT                      15
#define MT6335_RG_VMIPI_OCFB_EN_MASK                     0x1
#define MT6335_RG_VMIPI_OCFB_EN_SHIFT                    9
#define MT6335_DA_QI_VMIPI_OCFB_EN_MASK                  0x1
#define MT6335_DA_QI_VMIPI_OCFB_EN_SHIFT                 10
#define MT6335_RG_VMIPI_DUMMY_LOAD_MASK                  0x7
#define MT6335_RG_VMIPI_DUMMY_LOAD_SHIFT                 4
#define MT6335_DA_QI_VMIPI_DUMMY_LOAD_MASK               0x1F
#define MT6335_DA_QI_VMIPI_DUMMY_LOAD_SHIFT              11
#define MT6335_RG_VGP3_SW_EN_MASK                        0x1
#define MT6335_RG_VGP3_SW_EN_SHIFT                       0
#define MT6335_RG_VGP3_SW_LP_MASK                        0x1
#define MT6335_RG_VGP3_SW_LP_SHIFT                       1
#define MT6335_RG_VGP3_SW_OP_EN_MASK                     0x1
#define MT6335_RG_VGP3_SW_OP_EN_SHIFT                    0
#define MT6335_RG_VGP3_HW0_OP_EN_MASK                    0x1
#define MT6335_RG_VGP3_HW0_OP_EN_SHIFT                   1
#define MT6335_RG_VGP3_HW1_OP_EN_MASK                    0x1
#define MT6335_RG_VGP3_HW1_OP_EN_SHIFT                   2
#define MT6335_RG_VGP3_HW2_OP_EN_MASK                    0x1
#define MT6335_RG_VGP3_HW2_OP_EN_SHIFT                   3
#define MT6335_RG_VGP3_OP_EN_SET_MASK                    0xFFFF
#define MT6335_RG_VGP3_OP_EN_SET_SHIFT                   0
#define MT6335_RG_VGP3_OP_EN_CLR_MASK                    0xFFFF
#define MT6335_RG_VGP3_OP_EN_CLR_SHIFT                   0
#define MT6335_RG_VGP3_HW0_OP_CFG_MASK                   0x1
#define MT6335_RG_VGP3_HW0_OP_CFG_SHIFT                  1
#define MT6335_RG_VGP3_HW1_OP_CFG_MASK                   0x1
#define MT6335_RG_VGP3_HW1_OP_CFG_SHIFT                  2
#define MT6335_RG_VGP3_HW2_OP_CFG_MASK                   0x1
#define MT6335_RG_VGP3_HW2_OP_CFG_SHIFT                  3
#define MT6335_RG_VGP3_GO_ON_OP_MASK                     0x1
#define MT6335_RG_VGP3_GO_ON_OP_SHIFT                    8
#define MT6335_RG_VGP3_GO_LP_OP_MASK                     0x1
#define MT6335_RG_VGP3_GO_LP_OP_SHIFT                    9
#define MT6335_RG_VGP3_OP_CFG_SET_MASK                   0xFFFF
#define MT6335_RG_VGP3_OP_CFG_SET_SHIFT                  0
#define MT6335_RG_VGP3_OP_CFG_CLR_MASK                   0xFFFF
#define MT6335_RG_VGP3_OP_CFG_CLR_SHIFT                  0
#define MT6335_DA_QI_VGP3_MODE_MASK                      0x1
#define MT6335_DA_QI_VGP3_MODE_SHIFT                     8
#define MT6335_RG_VGP3_STBTD_MASK                        0x3
#define MT6335_RG_VGP3_STBTD_SHIFT                       9
#define MT6335_DA_QI_VGP3_STB_MASK                       0x1
#define MT6335_DA_QI_VGP3_STB_SHIFT                      14
#define MT6335_DA_QI_VGP3_EN_MASK                        0x1
#define MT6335_DA_QI_VGP3_EN_SHIFT                       15
#define MT6335_RG_VGP3_OCFB_EN_MASK                      0x1
#define MT6335_RG_VGP3_OCFB_EN_SHIFT                     9
#define MT6335_DA_QI_VGP3_OCFB_EN_MASK                   0x1
#define MT6335_DA_QI_VGP3_OCFB_EN_SHIFT                  10
#define MT6335_RG_VGP3_DUMMY_LOAD_MASK                   0x7
#define MT6335_RG_VGP3_DUMMY_LOAD_SHIFT                  4
#define MT6335_DA_QI_VGP3_DUMMY_LOAD_MASK                0x1F
#define MT6335_DA_QI_VGP3_DUMMY_LOAD_SHIFT               11
#define MT6335_RG_VCN33_SW_EN_BT_MASK                    0x1
#define MT6335_RG_VCN33_SW_EN_BT_SHIFT                   0
#define MT6335_RG_VCN33_SW_LP_BT_MASK                    0x1
#define MT6335_RG_VCN33_SW_LP_BT_SHIFT                   1
#define MT6335_RG_VCN33_SW_OP_EN_BT_MASK                 0x1
#define MT6335_RG_VCN33_SW_OP_EN_BT_SHIFT                0
#define MT6335_RG_VCN33_HW0_OP_EN_BT_MASK                0x1
#define MT6335_RG_VCN33_HW0_OP_EN_BT_SHIFT               1
#define MT6335_RG_VCN33_HW1_OP_EN_BT_MASK                0x1
#define MT6335_RG_VCN33_HW1_OP_EN_BT_SHIFT               2
#define MT6335_RG_VCN33_HW2_OP_EN_BT_MASK                0x1
#define MT6335_RG_VCN33_HW2_OP_EN_BT_SHIFT               3
#define MT6335_RG_VCN33_OP_EN_BT_SET_MASK                0xFFFF
#define MT6335_RG_VCN33_OP_EN_BT_SET_SHIFT               0
#define MT6335_RG_VCN33_OP_EN_BT_CLR_MASK                0xFFFF
#define MT6335_RG_VCN33_OP_EN_BT_CLR_SHIFT               0
#define MT6335_RG_VCN33_HW0_OP_CFG_BT_MASK               0x1
#define MT6335_RG_VCN33_HW0_OP_CFG_BT_SHIFT              1
#define MT6335_RG_VCN33_HW1_OP_CFG_BT_MASK               0x1
#define MT6335_RG_VCN33_HW1_OP_CFG_BT_SHIFT              2
#define MT6335_RG_VCN33_HW2_OP_CFG_BT_MASK               0x1
#define MT6335_RG_VCN33_HW2_OP_CFG_BT_SHIFT              3
#define MT6335_RG_VCN33_GO_ON_OP_BT_MASK                 0x1
#define MT6335_RG_VCN33_GO_ON_OP_BT_SHIFT                8
#define MT6335_RG_VCN33_GO_LP_OP_BT_MASK                 0x1
#define MT6335_RG_VCN33_GO_LP_OP_BT_SHIFT                9
#define MT6335_RG_VCN33_OP_CFG_BT_SET_MASK               0xFFFF
#define MT6335_RG_VCN33_OP_CFG_BT_SET_SHIFT              0
#define MT6335_RG_VCN33_OP_CFG_BT_CLR_MASK               0xFFFF
#define MT6335_RG_VCN33_OP_CFG_BT_CLR_SHIFT              0
#define MT6335_RG_VCN33_SW_EN_WIFI_MASK                  0x1
#define MT6335_RG_VCN33_SW_EN_WIFI_SHIFT                 0
#define MT6335_RG_VCN33_SW_LP_WIFI_MASK                  0x1
#define MT6335_RG_VCN33_SW_LP_WIFI_SHIFT                 1
#define MT6335_RG_VCN33_SW_OP_EN_WIFI_MASK               0x1
#define MT6335_RG_VCN33_SW_OP_EN_WIFI_SHIFT              0
#define MT6335_RG_VCN33_HW0_OP_EN_WIFI_MASK              0x1
#define MT6335_RG_VCN33_HW0_OP_EN_WIFI_SHIFT             1
#define MT6335_RG_VCN33_HW1_OP_EN_WIFI_MASK              0x1
#define MT6335_RG_VCN33_HW1_OP_EN_WIFI_SHIFT             2
#define MT6335_RG_VCN33_HW2_OP_EN_WIFI_MASK              0x1
#define MT6335_RG_VCN33_HW2_OP_EN_WIFI_SHIFT             3
#define MT6335_RG_VCN33_OP_EN_WIFI_SET_MASK              0xFFFF
#define MT6335_RG_VCN33_OP_EN_WIFI_SET_SHIFT             0
#define MT6335_RG_VCN33_OP_EN_WIFI_CLR_MASK              0xFFFF
#define MT6335_RG_VCN33_OP_EN_WIFI_CLR_SHIFT             0
#define MT6335_RG_VCN33_HW0_OP_CFG_WIFI_MASK             0x1
#define MT6335_RG_VCN33_HW0_OP_CFG_WIFI_SHIFT            1
#define MT6335_RG_VCN33_HW1_OP_CFG_WIFI_MASK             0x1
#define MT6335_RG_VCN33_HW1_OP_CFG_WIFI_SHIFT            2
#define MT6335_RG_VCN33_HW2_OP_CFG_WIFI_MASK             0x1
#define MT6335_RG_VCN33_HW2_OP_CFG_WIFI_SHIFT            3
#define MT6335_RG_VCN33_GO_ON_OP_WIFI_MASK               0x1
#define MT6335_RG_VCN33_GO_ON_OP_WIFI_SHIFT              8
#define MT6335_RG_VCN33_GO_LP_OP_WIFI_MASK               0x1
#define MT6335_RG_VCN33_GO_LP_OP_WIFI_SHIFT              9
#define MT6335_RG_VCN33_OP_CFG_WIFI_SET_MASK             0xFFFF
#define MT6335_RG_VCN33_OP_CFG_WIFI_SET_SHIFT            0
#define MT6335_RG_VCN33_OP_CFG_WIFI_CLR_MASK             0xFFFF
#define MT6335_RG_VCN33_OP_CFG_WIFI_CLR_SHIFT            0
#define MT6335_DA_QI_VCN33_MODE_MASK                     0x1
#define MT6335_DA_QI_VCN33_MODE_SHIFT                    8
#define MT6335_RG_VCN33_STBTD_MASK                       0x3
#define MT6335_RG_VCN33_STBTD_SHIFT                      9
#define MT6335_DA_QI_VCN33_STB_MASK                      0x1
#define MT6335_DA_QI_VCN33_STB_SHIFT                     14
#define MT6335_DA_QI_VCN33_EN_MASK                       0x1
#define MT6335_DA_QI_VCN33_EN_SHIFT                      15
#define MT6335_RG_VCN33_OCFB_EN_MASK                     0x1
#define MT6335_RG_VCN33_OCFB_EN_SHIFT                    9
#define MT6335_DA_QI_VCN33_OCFB_EN_MASK                  0x1
#define MT6335_DA_QI_VCN33_OCFB_EN_SHIFT                 10
#define MT6335_RG_VCN33_DUMMY_LOAD_MASK                  0x7
#define MT6335_RG_VCN33_DUMMY_LOAD_SHIFT                 4
#define MT6335_DA_QI_VCN33_DUMMY_LOAD_MASK               0x1F
#define MT6335_DA_QI_VCN33_DUMMY_LOAD_SHIFT              11
#define MT6335_RG_VCN18_SW_EN_BT_MASK                    0x1
#define MT6335_RG_VCN18_SW_EN_BT_SHIFT                   0
#define MT6335_RG_VCN18_SW_LP_BT_MASK                    0x1
#define MT6335_RG_VCN18_SW_LP_BT_SHIFT                   1
#define MT6335_RG_VCN18_SW_OP_EN_BT_MASK                 0x1
#define MT6335_RG_VCN18_SW_OP_EN_BT_SHIFT                0
#define MT6335_RG_VCN18_HW0_OP_EN_BT_MASK                0x1
#define MT6335_RG_VCN18_HW0_OP_EN_BT_SHIFT               1
#define MT6335_RG_VCN18_HW1_OP_EN_BT_MASK                0x1
#define MT6335_RG_VCN18_HW1_OP_EN_BT_SHIFT               2
#define MT6335_RG_VCN18_HW2_OP_EN_BT_MASK                0x1
#define MT6335_RG_VCN18_HW2_OP_EN_BT_SHIFT               3
#define MT6335_RG_VCN18_OP_EN_BT_SET_MASK                0xFFFF
#define MT6335_RG_VCN18_OP_EN_BT_SET_SHIFT               0
#define MT6335_RG_VCN18_OP_EN_BT_CLR_MASK                0xFFFF
#define MT6335_RG_VCN18_OP_EN_BT_CLR_SHIFT               0
#define MT6335_RG_VCN18_HW0_OP_CFG_BT_MASK               0x1
#define MT6335_RG_VCN18_HW0_OP_CFG_BT_SHIFT              1
#define MT6335_RG_VCN18_HW1_OP_CFG_BT_MASK               0x1
#define MT6335_RG_VCN18_HW1_OP_CFG_BT_SHIFT              2
#define MT6335_RG_VCN18_HW2_OP_CFG_BT_MASK               0x1
#define MT6335_RG_VCN18_HW2_OP_CFG_BT_SHIFT              3
#define MT6335_RG_VCN18_GO_ON_OP_BT_MASK                 0x1
#define MT6335_RG_VCN18_GO_ON_OP_BT_SHIFT                8
#define MT6335_RG_VCN18_GO_LP_OP_BT_MASK                 0x1
#define MT6335_RG_VCN18_GO_LP_OP_BT_SHIFT                9
#define MT6335_RG_VCN18_OP_CFG_BT_SET_MASK               0xFFFF
#define MT6335_RG_VCN18_OP_CFG_BT_SET_SHIFT              0
#define MT6335_RG_VCN18_OP_CFG_BT_CLR_MASK               0xFFFF
#define MT6335_RG_VCN18_OP_CFG_BT_CLR_SHIFT              0
#define MT6335_RG_VCN18_SW_EN_WIFI_MASK                  0x1
#define MT6335_RG_VCN18_SW_EN_WIFI_SHIFT                 0
#define MT6335_RG_VCN18_SW_LP_WIFI_MASK                  0x1
#define MT6335_RG_VCN18_SW_LP_WIFI_SHIFT                 1
#define MT6335_RG_VCN18_SW_OP_EN_WIFI_MASK               0x1
#define MT6335_RG_VCN18_SW_OP_EN_WIFI_SHIFT              0
#define MT6335_RG_VCN18_HW0_OP_EN_WIFI_MASK              0x1
#define MT6335_RG_VCN18_HW0_OP_EN_WIFI_SHIFT             1
#define MT6335_RG_VCN18_HW1_OP_EN_WIFI_MASK              0x1
#define MT6335_RG_VCN18_HW1_OP_EN_WIFI_SHIFT             2
#define MT6335_RG_VCN18_HW2_OP_EN_WIFI_MASK              0x1
#define MT6335_RG_VCN18_HW2_OP_EN_WIFI_SHIFT             3
#define MT6335_RG_VCN18_OP_EN_WIFI_SET_MASK              0xFFFF
#define MT6335_RG_VCN18_OP_EN_WIFI_SET_SHIFT             0
#define MT6335_RG_VCN18_OP_EN_WIFI_CLR_MASK              0xFFFF
#define MT6335_RG_VCN18_OP_EN_WIFI_CLR_SHIFT             0
#define MT6335_RG_VCN18_HW0_OP_CFG_WIFI_MASK             0x1
#define MT6335_RG_VCN18_HW0_OP_CFG_WIFI_SHIFT            1
#define MT6335_RG_VCN18_HW1_OP_CFG_WIFI_MASK             0x1
#define MT6335_RG_VCN18_HW1_OP_CFG_WIFI_SHIFT            2
#define MT6335_RG_VCN18_HW2_OP_CFG_WIFI_MASK             0x1
#define MT6335_RG_VCN18_HW2_OP_CFG_WIFI_SHIFT            3
#define MT6335_RG_VCN18_GO_ON_OP_WIFI_MASK               0x1
#define MT6335_RG_VCN18_GO_ON_OP_WIFI_SHIFT              8
#define MT6335_RG_VCN18_GO_LP_OP_WIFI_MASK               0x1
#define MT6335_RG_VCN18_GO_LP_OP_WIFI_SHIFT              9
#define MT6335_RG_VCN18_OP_CFG_WIFI_SET_MASK             0xFFFF
#define MT6335_RG_VCN18_OP_CFG_WIFI_SET_SHIFT            0
#define MT6335_RG_VCN18_OP_CFG_WIFI_CLR_MASK             0xFFFF
#define MT6335_RG_VCN18_OP_CFG_WIFI_CLR_SHIFT            0
#define MT6335_DA_QI_VCN18_MODE_MASK                     0x1
#define MT6335_DA_QI_VCN18_MODE_SHIFT                    8
#define MT6335_RG_VCN18_STBTD_MASK                       0x3
#define MT6335_RG_VCN18_STBTD_SHIFT                      9
#define MT6335_DA_QI_VCN18_STB_MASK                      0x1
#define MT6335_DA_QI_VCN18_STB_SHIFT                     14
#define MT6335_DA_QI_VCN18_EN_MASK                       0x1
#define MT6335_DA_QI_VCN18_EN_SHIFT                      15
#define MT6335_RG_VCN18_OCFB_EN_MASK                     0x1
#define MT6335_RG_VCN18_OCFB_EN_SHIFT                    9
#define MT6335_DA_QI_VCN18_OCFB_EN_MASK                  0x1
#define MT6335_DA_QI_VCN18_OCFB_EN_SHIFT                 10
#define MT6335_RG_VCN18_DUMMY_LOAD_MASK                  0x7
#define MT6335_RG_VCN18_DUMMY_LOAD_SHIFT                 4
#define MT6335_DA_QI_VCN18_DUMMY_LOAD_MASK               0x1F
#define MT6335_DA_QI_VCN18_DUMMY_LOAD_SHIFT              11
#define MT6335_RG_VCN28_SW_EN_MASK                       0x1
#define MT6335_RG_VCN28_SW_EN_SHIFT                      0
#define MT6335_RG_VCN28_SW_LP_MASK                       0x1
#define MT6335_RG_VCN28_SW_LP_SHIFT                      1
#define MT6335_RG_VCN28_SW_OP_EN_MASK                    0x1
#define MT6335_RG_VCN28_SW_OP_EN_SHIFT                   0
#define MT6335_RG_VCN28_HW0_OP_EN_MASK                   0x1
#define MT6335_RG_VCN28_HW0_OP_EN_SHIFT                  1
#define MT6335_RG_VCN28_HW1_OP_EN_MASK                   0x1
#define MT6335_RG_VCN28_HW1_OP_EN_SHIFT                  2
#define MT6335_RG_VCN28_HW2_OP_EN_MASK                   0x1
#define MT6335_RG_VCN28_HW2_OP_EN_SHIFT                  3
#define MT6335_RG_VCN28_HW3_OP_EN_MASK                   0x1
#define MT6335_RG_VCN28_HW3_OP_EN_SHIFT                  4
#define MT6335_RG_VCN28_OP_EN_SET_MASK                   0xFFFF
#define MT6335_RG_VCN28_OP_EN_SET_SHIFT                  0
#define MT6335_RG_VCN28_OP_EN_CLR_MASK                   0xFFFF
#define MT6335_RG_VCN28_OP_EN_CLR_SHIFT                  0
#define MT6335_RG_VCN28_HW0_OP_CFG_MASK                  0x1
#define MT6335_RG_VCN28_HW0_OP_CFG_SHIFT                 1
#define MT6335_RG_VCN28_HW1_OP_CFG_MASK                  0x1
#define MT6335_RG_VCN28_HW1_OP_CFG_SHIFT                 2
#define MT6335_RG_VCN28_HW2_OP_CFG_MASK                  0x1
#define MT6335_RG_VCN28_HW2_OP_CFG_SHIFT                 3
#define MT6335_RG_VCN28_HW3_OP_CFG_MASK                  0x1
#define MT6335_RG_VCN28_HW3_OP_CFG_SHIFT                 4
#define MT6335_RG_VCN28_GO_ON_OP_MASK                    0x1
#define MT6335_RG_VCN28_GO_ON_OP_SHIFT                   8
#define MT6335_RG_VCN28_GO_LP_OP_MASK                    0x1
#define MT6335_RG_VCN28_GO_LP_OP_SHIFT                   9
#define MT6335_RG_VCN28_OP_CFG_SET_MASK                  0xFFFF
#define MT6335_RG_VCN28_OP_CFG_SET_SHIFT                 0
#define MT6335_RG_VCN28_OP_CFG_CLR_MASK                  0xFFFF
#define MT6335_RG_VCN28_OP_CFG_CLR_SHIFT                 0
#define MT6335_DA_QI_VCN28_MODE_MASK                     0x1
#define MT6335_DA_QI_VCN28_MODE_SHIFT                    8
#define MT6335_RG_VCN28_STBTD_MASK                       0x3
#define MT6335_RG_VCN28_STBTD_SHIFT                      9
#define MT6335_DA_QI_VCN28_STB_MASK                      0x1
#define MT6335_DA_QI_VCN28_STB_SHIFT                     14
#define MT6335_DA_QI_VCN28_EN_MASK                       0x1
#define MT6335_DA_QI_VCN28_EN_SHIFT                      15
#define MT6335_RG_VCN28_OCFB_EN_MASK                     0x1
#define MT6335_RG_VCN28_OCFB_EN_SHIFT                    9
#define MT6335_DA_QI_VCN28_OCFB_EN_MASK                  0x1
#define MT6335_DA_QI_VCN28_OCFB_EN_SHIFT                 10
#define MT6335_RG_VIBR_SW_EN_MASK                        0x1
#define MT6335_RG_VIBR_SW_EN_SHIFT                       0
#define MT6335_RG_VIBR_SW_LP_MASK                        0x1
#define MT6335_RG_VIBR_SW_LP_SHIFT                       1
#define MT6335_RG_VIBR_SW_OP_EN_MASK                     0x1
#define MT6335_RG_VIBR_SW_OP_EN_SHIFT                    0
#define MT6335_RG_VIBR_HW0_OP_EN_MASK                    0x1
#define MT6335_RG_VIBR_HW0_OP_EN_SHIFT                   1
#define MT6335_RG_VIBR_HW1_OP_EN_MASK                    0x1
#define MT6335_RG_VIBR_HW1_OP_EN_SHIFT                   2
#define MT6335_RG_VIBR_HW2_OP_EN_MASK                    0x1
#define MT6335_RG_VIBR_HW2_OP_EN_SHIFT                   3
#define MT6335_RG_VIBR_OP_EN_SET_MASK                    0xFFFF
#define MT6335_RG_VIBR_OP_EN_SET_SHIFT                   0
#define MT6335_RG_VIBR_OP_EN_CLR_MASK                    0xFFFF
#define MT6335_RG_VIBR_OP_EN_CLR_SHIFT                   0
#define MT6335_RG_VIBR_HW0_OP_CFG_MASK                   0x1
#define MT6335_RG_VIBR_HW0_OP_CFG_SHIFT                  1
#define MT6335_RG_VIBR_HW1_OP_CFG_MASK                   0x1
#define MT6335_RG_VIBR_HW1_OP_CFG_SHIFT                  2
#define MT6335_RG_VIBR_HW2_OP_CFG_MASK                   0x1
#define MT6335_RG_VIBR_HW2_OP_CFG_SHIFT                  3
#define MT6335_RG_VIBR_GO_ON_OP_MASK                     0x1
#define MT6335_RG_VIBR_GO_ON_OP_SHIFT                    8
#define MT6335_RG_VIBR_GO_LP_OP_MASK                     0x1
#define MT6335_RG_VIBR_GO_LP_OP_SHIFT                    9
#define MT6335_RG_VIBR_OP_CFG_SET_MASK                   0xFFFF
#define MT6335_RG_VIBR_OP_CFG_SET_SHIFT                  0
#define MT6335_RG_VIBR_OP_CFG_CLR_MASK                   0xFFFF
#define MT6335_RG_VIBR_OP_CFG_CLR_SHIFT                  0
#define MT6335_DA_QI_VIBR_MODE_MASK                      0x1
#define MT6335_DA_QI_VIBR_MODE_SHIFT                     8
#define MT6335_RG_VIBR_STBTD_MASK                        0x3
#define MT6335_RG_VIBR_STBTD_SHIFT                       9
#define MT6335_DA_QI_VIBR_STB_MASK                       0x1
#define MT6335_DA_QI_VIBR_STB_SHIFT                      14
#define MT6335_DA_QI_VIBR_EN_MASK                        0x1
#define MT6335_DA_QI_VIBR_EN_SHIFT                       15
#define MT6335_RG_VIBR_THER_SDN_EN_MASK                  0x1
#define MT6335_RG_VIBR_THER_SDN_EN_SHIFT                 4
#define MT6335_RG_VIBR_OCFB_EN_MASK                      0x1
#define MT6335_RG_VIBR_OCFB_EN_SHIFT                     9
#define MT6335_DA_QI_VIBR_OCFB_EN_MASK                   0x1
#define MT6335_DA_QI_VIBR_OCFB_EN_SHIFT                  10
#define MT6335_RG_VBIF28_SW_EN_MASK                      0x1
#define MT6335_RG_VBIF28_SW_EN_SHIFT                     0
#define MT6335_RG_VBIF28_SW_LP_MASK                      0x1
#define MT6335_RG_VBIF28_SW_LP_SHIFT                     1
#define MT6335_RG_VBIF28_SW_OP_EN_MASK                   0x1
#define MT6335_RG_VBIF28_SW_OP_EN_SHIFT                  0
#define MT6335_RG_VBIF28_HW0_OP_EN_MASK                  0x1
#define MT6335_RG_VBIF28_HW0_OP_EN_SHIFT                 1
#define MT6335_RG_VBIF28_HW1_OP_EN_MASK                  0x1
#define MT6335_RG_VBIF28_HW1_OP_EN_SHIFT                 2
#define MT6335_RG_VBIF28_HW2_OP_EN_MASK                  0x1
#define MT6335_RG_VBIF28_HW2_OP_EN_SHIFT                 3
#define MT6335_RG_VBIF28_OP_EN_SET_MASK                  0xFFFF
#define MT6335_RG_VBIF28_OP_EN_SET_SHIFT                 0
#define MT6335_RG_VBIF28_OP_EN_CLR_MASK                  0xFFFF
#define MT6335_RG_VBIF28_OP_EN_CLR_SHIFT                 0
#define MT6335_RG_VBIF28_HW0_OP_CFG_MASK                 0x1
#define MT6335_RG_VBIF28_HW0_OP_CFG_SHIFT                1
#define MT6335_RG_VBIF28_HW1_OP_CFG_MASK                 0x1
#define MT6335_RG_VBIF28_HW1_OP_CFG_SHIFT                2
#define MT6335_RG_VBIF28_HW2_OP_CFG_MASK                 0x1
#define MT6335_RG_VBIF28_HW2_OP_CFG_SHIFT                3
#define MT6335_RG_VBIF28_GO_ON_OP_MASK                   0x1
#define MT6335_RG_VBIF28_GO_ON_OP_SHIFT                  8
#define MT6335_RG_VBIF28_GO_LP_OP_MASK                   0x1
#define MT6335_RG_VBIF28_GO_LP_OP_SHIFT                  9
#define MT6335_RG_VBIF28_OP_CFG_SET_MASK                 0xFFFF
#define MT6335_RG_VBIF28_OP_CFG_SET_SHIFT                0
#define MT6335_RG_VBIF28_OP_CFG_CLR_MASK                 0xFFFF
#define MT6335_RG_VBIF28_OP_CFG_CLR_SHIFT                0
#define MT6335_DA_QI_VBIF28_MODE_MASK                    0x1
#define MT6335_DA_QI_VBIF28_MODE_SHIFT                   8
#define MT6335_RG_VBIF28_STBTD_MASK                      0x3
#define MT6335_RG_VBIF28_STBTD_SHIFT                     9
#define MT6335_DA_QI_VBIF28_STB_MASK                     0x1
#define MT6335_DA_QI_VBIF28_STB_SHIFT                    14
#define MT6335_DA_QI_VBIF28_EN_MASK                      0x1
#define MT6335_DA_QI_VBIF28_EN_SHIFT                     15
#define MT6335_RG_VBIF28_OCFB_EN_MASK                    0x1
#define MT6335_RG_VBIF28_OCFB_EN_SHIFT                   9
#define MT6335_DA_QI_VBIF28_OCFB_EN_MASK                 0x1
#define MT6335_DA_QI_VBIF28_OCFB_EN_SHIFT                10
#define MT6335_RG_VFE28_SW_EN_MASK                       0x1
#define MT6335_RG_VFE28_SW_EN_SHIFT                      0
#define MT6335_RG_VFE28_SW_LP_MASK                       0x1
#define MT6335_RG_VFE28_SW_LP_SHIFT                      1
#define MT6335_RG_VFE28_SW_OP_EN_MASK                    0x1
#define MT6335_RG_VFE28_SW_OP_EN_SHIFT                   0
#define MT6335_RG_VFE28_HW0_OP_EN_MASK                   0x1
#define MT6335_RG_VFE28_HW0_OP_EN_SHIFT                  1
#define MT6335_RG_VFE28_HW1_OP_EN_MASK                   0x1
#define MT6335_RG_VFE28_HW1_OP_EN_SHIFT                  2
#define MT6335_RG_VFE28_HW2_OP_EN_MASK                   0x1
#define MT6335_RG_VFE28_HW2_OP_EN_SHIFT                  3
#define MT6335_RG_VFE28_OP_EN_SET_MASK                   0xFFFF
#define MT6335_RG_VFE28_OP_EN_SET_SHIFT                  0
#define MT6335_RG_VFE28_OP_EN_CLR_MASK                   0xFFFF
#define MT6335_RG_VFE28_OP_EN_CLR_SHIFT                  0
#define MT6335_RG_VFE28_HW0_OP_CFG_MASK                  0x1
#define MT6335_RG_VFE28_HW0_OP_CFG_SHIFT                 1
#define MT6335_RG_VFE28_HW1_OP_CFG_MASK                  0x1
#define MT6335_RG_VFE28_HW1_OP_CFG_SHIFT                 2
#define MT6335_RG_VFE28_HW2_OP_CFG_MASK                  0x1
#define MT6335_RG_VFE28_HW2_OP_CFG_SHIFT                 3
#define MT6335_RG_VFE28_GO_ON_OP_MASK                    0x1
#define MT6335_RG_VFE28_GO_ON_OP_SHIFT                   8
#define MT6335_RG_VFE28_GO_LP_OP_MASK                    0x1
#define MT6335_RG_VFE28_GO_LP_OP_SHIFT                   9
#define MT6335_RG_VFE28_OP_CFG_SET_MASK                  0xFFFF
#define MT6335_RG_VFE28_OP_CFG_SET_SHIFT                 0
#define MT6335_RG_VFE28_OP_CFG_CLR_MASK                  0xFFFF
#define MT6335_RG_VFE28_OP_CFG_CLR_SHIFT                 0
#define MT6335_DA_QI_VFE28_MODE_MASK                     0x1
#define MT6335_DA_QI_VFE28_MODE_SHIFT                    8
#define MT6335_RG_VFE28_STBTD_MASK                       0x3
#define MT6335_RG_VFE28_STBTD_SHIFT                      9
#define MT6335_DA_QI_VFE28_STB_MASK                      0x1
#define MT6335_DA_QI_VFE28_STB_SHIFT                     14
#define MT6335_DA_QI_VFE28_EN_MASK                       0x1
#define MT6335_DA_QI_VFE28_EN_SHIFT                      15
#define MT6335_RG_VFE28_OCFB_EN_MASK                     0x1
#define MT6335_RG_VFE28_OCFB_EN_SHIFT                    9
#define MT6335_DA_QI_VFE28_OCFB_EN_MASK                  0x1
#define MT6335_DA_QI_VFE28_OCFB_EN_SHIFT                 10
#define MT6335_RG_VMCH_SW_EN_MASK                        0x1
#define MT6335_RG_VMCH_SW_EN_SHIFT                       0
#define MT6335_RG_VMCH_SW_LP_MASK                        0x1
#define MT6335_RG_VMCH_SW_LP_SHIFT                       1
#define MT6335_RG_VMCH_SW_OP_EN_MASK                     0x1
#define MT6335_RG_VMCH_SW_OP_EN_SHIFT                    0
#define MT6335_RG_VMCH_HW0_OP_EN_MASK                    0x1
#define MT6335_RG_VMCH_HW0_OP_EN_SHIFT                   1
#define MT6335_RG_VMCH_HW1_OP_EN_MASK                    0x1
#define MT6335_RG_VMCH_HW1_OP_EN_SHIFT                   2
#define MT6335_RG_VMCH_HW2_OP_EN_MASK                    0x1
#define MT6335_RG_VMCH_HW2_OP_EN_SHIFT                   3
#define MT6335_RG_VMCH_OP_EN_SET_MASK                    0xFFFF
#define MT6335_RG_VMCH_OP_EN_SET_SHIFT                   0
#define MT6335_RG_VMCH_OP_EN_CLR_MASK                    0xFFFF
#define MT6335_RG_VMCH_OP_EN_CLR_SHIFT                   0
#define MT6335_RG_VMCH_HW0_OP_CFG_MASK                   0x1
#define MT6335_RG_VMCH_HW0_OP_CFG_SHIFT                  1
#define MT6335_RG_VMCH_HW1_OP_CFG_MASK                   0x1
#define MT6335_RG_VMCH_HW1_OP_CFG_SHIFT                  2
#define MT6335_RG_VMCH_HW2_OP_CFG_MASK                   0x1
#define MT6335_RG_VMCH_HW2_OP_CFG_SHIFT                  3
#define MT6335_RG_VMCH_GO_ON_OP_MASK                     0x1
#define MT6335_RG_VMCH_GO_ON_OP_SHIFT                    8
#define MT6335_RG_VMCH_GO_LP_OP_MASK                     0x1
#define MT6335_RG_VMCH_GO_LP_OP_SHIFT                    9
#define MT6335_RG_VMCH_OP_CFG_SET_MASK                   0xFFFF
#define MT6335_RG_VMCH_OP_CFG_SET_SHIFT                  0
#define MT6335_RG_VMCH_OP_CFG_CLR_MASK                   0xFFFF
#define MT6335_RG_VMCH_OP_CFG_CLR_SHIFT                  0
#define MT6335_DA_QI_VMCH_MODE_MASK                      0x1
#define MT6335_DA_QI_VMCH_MODE_SHIFT                     8
#define MT6335_RG_VMCH_STBTD_MASK                        0x3
#define MT6335_RG_VMCH_STBTD_SHIFT                       9
#define MT6335_DA_QI_VMCH_STB_MASK                       0x1
#define MT6335_DA_QI_VMCH_STB_SHIFT                      14
#define MT6335_DA_QI_VMCH_EN_MASK                        0x1
#define MT6335_DA_QI_VMCH_EN_SHIFT                       15
#define MT6335_RG_VMCH_OCFB_EN_MASK                      0x1
#define MT6335_RG_VMCH_OCFB_EN_SHIFT                     9
#define MT6335_DA_QI_VMCH_OCFB_EN_MASK                   0x1
#define MT6335_DA_QI_VMCH_OCFB_EN_SHIFT                  10
#define MT6335_RG_VMCH_DUMMY_LOAD_MASK                   0x7
#define MT6335_RG_VMCH_DUMMY_LOAD_SHIFT                  4
#define MT6335_DA_QI_VMCH_DUMMY_LOAD_MASK                0x1F
#define MT6335_DA_QI_VMCH_DUMMY_LOAD_SHIFT               11
#define MT6335_RG_VMC_SW_EN_MASK                         0x1
#define MT6335_RG_VMC_SW_EN_SHIFT                        0
#define MT6335_RG_VMC_SW_LP_MASK                         0x1
#define MT6335_RG_VMC_SW_LP_SHIFT                        1
#define MT6335_RG_VMC_SW_OP_EN_MASK                      0x1
#define MT6335_RG_VMC_SW_OP_EN_SHIFT                     0
#define MT6335_RG_VMC_HW0_OP_EN_MASK                     0x1
#define MT6335_RG_VMC_HW0_OP_EN_SHIFT                    1
#define MT6335_RG_VMC_HW1_OP_EN_MASK                     0x1
#define MT6335_RG_VMC_HW1_OP_EN_SHIFT                    2
#define MT6335_RG_VMC_HW2_OP_EN_MASK                     0x1
#define MT6335_RG_VMC_HW2_OP_EN_SHIFT                    3
#define MT6335_RG_VMC_OP_EN_SET_MASK                     0xFFFF
#define MT6335_RG_VMC_OP_EN_SET_SHIFT                    0
#define MT6335_RG_VMC_OP_EN_CLR_MASK                     0xFFFF
#define MT6335_RG_VMC_OP_EN_CLR_SHIFT                    0
#define MT6335_RG_VMC_HW0_OP_CFG_MASK                    0x1
#define MT6335_RG_VMC_HW0_OP_CFG_SHIFT                   1
#define MT6335_RG_VMC_HW1_OP_CFG_MASK                    0x1
#define MT6335_RG_VMC_HW1_OP_CFG_SHIFT                   2
#define MT6335_RG_VMC_HW2_OP_CFG_MASK                    0x1
#define MT6335_RG_VMC_HW2_OP_CFG_SHIFT                   3
#define MT6335_RG_VMC_GO_ON_OP_MASK                      0x1
#define MT6335_RG_VMC_GO_ON_OP_SHIFT                     8
#define MT6335_RG_VMC_GO_LP_OP_MASK                      0x1
#define MT6335_RG_VMC_GO_LP_OP_SHIFT                     9
#define MT6335_RG_VMC_OP_CFG_SET_MASK                    0xFFFF
#define MT6335_RG_VMC_OP_CFG_SET_SHIFT                   0
#define MT6335_RG_VMC_OP_CFG_CLR_MASK                    0xFFFF
#define MT6335_RG_VMC_OP_CFG_CLR_SHIFT                   0
#define MT6335_DA_QI_VMC_MODE_MASK                       0x1
#define MT6335_DA_QI_VMC_MODE_SHIFT                      8
#define MT6335_RG_VMC_STBTD_MASK                         0x3
#define MT6335_RG_VMC_STBTD_SHIFT                        9
#define MT6335_DA_QI_VMC_STB_MASK                        0x1
#define MT6335_DA_QI_VMC_STB_SHIFT                       14
#define MT6335_DA_QI_VMC_EN_MASK                         0x1
#define MT6335_DA_QI_VMC_EN_SHIFT                        15
#define MT6335_RG_VMC_OCFB_EN_MASK                       0x1
#define MT6335_RG_VMC_OCFB_EN_SHIFT                      9
#define MT6335_DA_QI_VMC_OCFB_EN_MASK                    0x1
#define MT6335_DA_QI_VMC_OCFB_EN_SHIFT                   10
#define MT6335_RG_VMC_DUMMY_LOAD_MASK                    0x7
#define MT6335_RG_VMC_DUMMY_LOAD_SHIFT                   4
#define MT6335_DA_QI_VMC_DUMMY_LOAD_MASK                 0x1F
#define MT6335_DA_QI_VMC_DUMMY_LOAD_SHIFT                11
#define MT6335_RG_VRF18_1_SW_EN_MASK                     0x1
#define MT6335_RG_VRF18_1_SW_EN_SHIFT                    0
#define MT6335_RG_VRF18_1_SW_LP_MASK                     0x1
#define MT6335_RG_VRF18_1_SW_LP_SHIFT                    1
#define MT6335_RG_VRF18_1_SW_OP_EN_MASK                  0x1
#define MT6335_RG_VRF18_1_SW_OP_EN_SHIFT                 0
#define MT6335_RG_VRF18_1_HW0_OP_EN_MASK                 0x1
#define MT6335_RG_VRF18_1_HW0_OP_EN_SHIFT                1
#define MT6335_RG_VRF18_1_HW1_OP_EN_MASK                 0x1
#define MT6335_RG_VRF18_1_HW1_OP_EN_SHIFT                2
#define MT6335_RG_VRF18_1_HW2_OP_EN_MASK                 0x1
#define MT6335_RG_VRF18_1_HW2_OP_EN_SHIFT                3
#define MT6335_RG_VRF18_1_OP_EN_SET_MASK                 0xFFFF
#define MT6335_RG_VRF18_1_OP_EN_SET_SHIFT                0
#define MT6335_RG_VRF18_1_OP_EN_CLR_MASK                 0xFFFF
#define MT6335_RG_VRF18_1_OP_EN_CLR_SHIFT                0
#define MT6335_RG_VRF18_1_HW0_OP_CFG_MASK                0x1
#define MT6335_RG_VRF18_1_HW0_OP_CFG_SHIFT               1
#define MT6335_RG_VRF18_1_HW1_OP_CFG_MASK                0x1
#define MT6335_RG_VRF18_1_HW1_OP_CFG_SHIFT               2
#define MT6335_RG_VRF18_1_HW2_OP_CFG_MASK                0x1
#define MT6335_RG_VRF18_1_HW2_OP_CFG_SHIFT               3
#define MT6335_RG_VRF18_1_GO_ON_OP_MASK                  0x1
#define MT6335_RG_VRF18_1_GO_ON_OP_SHIFT                 8
#define MT6335_RG_VRF18_1_GO_LP_OP_MASK                  0x1
#define MT6335_RG_VRF18_1_GO_LP_OP_SHIFT                 9
#define MT6335_RG_VRF18_1_OP_CFG_SET_MASK                0xFFFF
#define MT6335_RG_VRF18_1_OP_CFG_SET_SHIFT               0
#define MT6335_RG_VRF18_1_OP_CFG_CLR_MASK                0xFFFF
#define MT6335_RG_VRF18_1_OP_CFG_CLR_SHIFT               0
#define MT6335_DA_QI_VRF18_1_MODE_MASK                   0x1
#define MT6335_DA_QI_VRF18_1_MODE_SHIFT                  8
#define MT6335_RG_VRF18_1_STBTD_MASK                     0x3
#define MT6335_RG_VRF18_1_STBTD_SHIFT                    9
#define MT6335_DA_QI_VRF18_1_STB_MASK                    0x1
#define MT6335_DA_QI_VRF18_1_STB_SHIFT                   14
#define MT6335_DA_QI_VRF18_1_EN_MASK                     0x1
#define MT6335_DA_QI_VRF18_1_EN_SHIFT                    15
#define MT6335_RG_VRF18_1_OCFB_EN_MASK                   0x1
#define MT6335_RG_VRF18_1_OCFB_EN_SHIFT                  9
#define MT6335_DA_QI_VRF18_1_OCFB_EN_MASK                0x1
#define MT6335_DA_QI_VRF18_1_OCFB_EN_SHIFT               10
#define MT6335_RG_VRF18_1_DUMMY_LOAD_MASK                0x7
#define MT6335_RG_VRF18_1_DUMMY_LOAD_SHIFT               4
#define MT6335_DA_QI_VRF18_1_DUMMY_LOAD_MASK             0x1F
#define MT6335_DA_QI_VRF18_1_DUMMY_LOAD_SHIFT            11
#define MT6335_RG_VRF18_2_SW_EN_MASK                     0x1
#define MT6335_RG_VRF18_2_SW_EN_SHIFT                    0
#define MT6335_RG_VRF18_2_SW_LP_MASK                     0x1
#define MT6335_RG_VRF18_2_SW_LP_SHIFT                    1
#define MT6335_RG_VRF18_2_SW_OP_EN_MASK                  0x1
#define MT6335_RG_VRF18_2_SW_OP_EN_SHIFT                 0
#define MT6335_RG_VRF18_2_HW0_OP_EN_MASK                 0x1
#define MT6335_RG_VRF18_2_HW0_OP_EN_SHIFT                1
#define MT6335_RG_VRF18_2_HW1_OP_EN_MASK                 0x1
#define MT6335_RG_VRF18_2_HW1_OP_EN_SHIFT                2
#define MT6335_RG_VRF18_2_HW2_OP_EN_MASK                 0x1
#define MT6335_RG_VRF18_2_HW2_OP_EN_SHIFT                3
#define MT6335_RG_VRF18_2_OP_EN_SET_MASK                 0xFFFF
#define MT6335_RG_VRF18_2_OP_EN_SET_SHIFT                0
#define MT6335_RG_VRF18_2_OP_EN_CLR_MASK                 0xFFFF
#define MT6335_RG_VRF18_2_OP_EN_CLR_SHIFT                0
#define MT6335_RG_VRF18_2_HW0_OP_CFG_MASK                0x1
#define MT6335_RG_VRF18_2_HW0_OP_CFG_SHIFT               1
#define MT6335_RG_VRF18_2_HW1_OP_CFG_MASK                0x1
#define MT6335_RG_VRF18_2_HW1_OP_CFG_SHIFT               2
#define MT6335_RG_VRF18_2_HW2_OP_CFG_MASK                0x1
#define MT6335_RG_VRF18_2_HW2_OP_CFG_SHIFT               3
#define MT6335_RG_VRF18_2_GO_ON_OP_MASK                  0x1
#define MT6335_RG_VRF18_2_GO_ON_OP_SHIFT                 8
#define MT6335_RG_VRF18_2_GO_LP_OP_MASK                  0x1
#define MT6335_RG_VRF18_2_GO_LP_OP_SHIFT                 9
#define MT6335_RG_VRF18_2_OP_CFG_SET_MASK                0xFFFF
#define MT6335_RG_VRF18_2_OP_CFG_SET_SHIFT               0
#define MT6335_RG_VRF18_2_OP_CFG_CLR_MASK                0xFFFF
#define MT6335_RG_VRF18_2_OP_CFG_CLR_SHIFT               0
#define MT6335_DA_QI_VRF18_2_MODE_MASK                   0x1
#define MT6335_DA_QI_VRF18_2_MODE_SHIFT                  8
#define MT6335_RG_VRF18_2_STBTD_MASK                     0x3
#define MT6335_RG_VRF18_2_STBTD_SHIFT                    9
#define MT6335_DA_QI_VRF18_2_STB_MASK                    0x1
#define MT6335_DA_QI_VRF18_2_STB_SHIFT                   14
#define MT6335_DA_QI_VRF18_2_EN_MASK                     0x1
#define MT6335_DA_QI_VRF18_2_EN_SHIFT                    15
#define MT6335_RG_VRF18_2_OCFB_EN_MASK                   0x1
#define MT6335_RG_VRF18_2_OCFB_EN_SHIFT                  9
#define MT6335_DA_QI_VRF18_2_OCFB_EN_MASK                0x1
#define MT6335_DA_QI_VRF18_2_OCFB_EN_SHIFT               10
#define MT6335_RG_VRF18_2_DUMMY_LOAD_MASK                0x7
#define MT6335_RG_VRF18_2_DUMMY_LOAD_SHIFT               4
#define MT6335_DA_QI_VRF18_2_DUMMY_LOAD_MASK             0x1F
#define MT6335_DA_QI_VRF18_2_DUMMY_LOAD_SHIFT            11
#define MT6335_RG_VRF12_SW_EN_MASK                       0x1
#define MT6335_RG_VRF12_SW_EN_SHIFT                      0
#define MT6335_RG_VRF12_SW_LP_MASK                       0x1
#define MT6335_RG_VRF12_SW_LP_SHIFT                      1
#define MT6335_RG_VRF12_SW_OP_EN_MASK                    0x1
#define MT6335_RG_VRF12_SW_OP_EN_SHIFT                   0
#define MT6335_RG_VRF12_HW0_OP_EN_MASK                   0x1
#define MT6335_RG_VRF12_HW0_OP_EN_SHIFT                  1
#define MT6335_RG_VRF12_HW1_OP_EN_MASK                   0x1
#define MT6335_RG_VRF12_HW1_OP_EN_SHIFT                  2
#define MT6335_RG_VRF12_HW2_OP_EN_MASK                   0x1
#define MT6335_RG_VRF12_HW2_OP_EN_SHIFT                  3
#define MT6335_RG_VRF12_OP_EN_SET_MASK                   0xFFFF
#define MT6335_RG_VRF12_OP_EN_SET_SHIFT                  0
#define MT6335_RG_VRF12_OP_EN_CLR_MASK                   0xFFFF
#define MT6335_RG_VRF12_OP_EN_CLR_SHIFT                  0
#define MT6335_RG_VRF12_HW0_OP_CFG_MASK                  0x1
#define MT6335_RG_VRF12_HW0_OP_CFG_SHIFT                 1
#define MT6335_RG_VRF12_HW1_OP_CFG_MASK                  0x1
#define MT6335_RG_VRF12_HW1_OP_CFG_SHIFT                 2
#define MT6335_RG_VRF12_HW2_OP_CFG_MASK                  0x1
#define MT6335_RG_VRF12_HW2_OP_CFG_SHIFT                 3
#define MT6335_RG_VRF12_GO_ON_OP_MASK                    0x1
#define MT6335_RG_VRF12_GO_ON_OP_SHIFT                   8
#define MT6335_RG_VRF12_GO_LP_OP_MASK                    0x1
#define MT6335_RG_VRF12_GO_LP_OP_SHIFT                   9
#define MT6335_RG_VRF12_OP_CFG_SET_MASK                  0xFFFF
#define MT6335_RG_VRF12_OP_CFG_SET_SHIFT                 0
#define MT6335_RG_VRF12_OP_CFG_CLR_MASK                  0xFFFF
#define MT6335_RG_VRF12_OP_CFG_CLR_SHIFT                 0
#define MT6335_DA_QI_VRF12_MODE_MASK                     0x1
#define MT6335_DA_QI_VRF12_MODE_SHIFT                    8
#define MT6335_RG_VRF12_STBTD_MASK                       0x3
#define MT6335_RG_VRF12_STBTD_SHIFT                      9
#define MT6335_DA_QI_VRF12_STB_MASK                      0x1
#define MT6335_DA_QI_VRF12_STB_SHIFT                     14
#define MT6335_DA_QI_VRF12_EN_MASK                       0x1
#define MT6335_DA_QI_VRF12_EN_SHIFT                      15
#define MT6335_RG_VRF12_OCFB_EN_MASK                     0x1
#define MT6335_RG_VRF12_OCFB_EN_SHIFT                    9
#define MT6335_DA_QI_VRF12_OCFB_EN_MASK                  0x1
#define MT6335_DA_QI_VRF12_OCFB_EN_SHIFT                 10
#define MT6335_RG_VRF12_DUMMY_LOAD_MASK                  0x7
#define MT6335_RG_VRF12_DUMMY_LOAD_SHIFT                 4
#define MT6335_DA_QI_VRF12_DUMMY_LOAD_MASK               0x1F
#define MT6335_DA_QI_VRF12_DUMMY_LOAD_SHIFT              11
#define MT6335_RG_VCAMA1_SW_EN_MASK                      0x1
#define MT6335_RG_VCAMA1_SW_EN_SHIFT                     0
#define MT6335_RG_VCAMA1_SW_LP_MASK                      0x1
#define MT6335_RG_VCAMA1_SW_LP_SHIFT                     1
#define MT6335_RG_VCAMA1_SW_OP_EN_MASK                   0x1
#define MT6335_RG_VCAMA1_SW_OP_EN_SHIFT                  0
#define MT6335_RG_VCAMA1_GO_ON_OP_MASK                   0x1
#define MT6335_RG_VCAMA1_GO_ON_OP_SHIFT                  8
#define MT6335_RG_VCAMA1_GO_LP_OP_MASK                   0x1
#define MT6335_RG_VCAMA1_GO_LP_OP_SHIFT                  9
#define MT6335_DA_QI_VCAMA1_MODE_MASK                    0x1
#define MT6335_DA_QI_VCAMA1_MODE_SHIFT                   8
#define MT6335_RG_VCAMA1_STBTD_MASK                      0x3
#define MT6335_RG_VCAMA1_STBTD_SHIFT                     9
#define MT6335_DA_QI_VCAMA1_STB_MASK                     0x1
#define MT6335_DA_QI_VCAMA1_STB_SHIFT                    14
#define MT6335_DA_QI_VCAMA1_EN_MASK                      0x1
#define MT6335_DA_QI_VCAMA1_EN_SHIFT                     15
#define MT6335_RG_VCAMA1_OCFB_EN_MASK                    0x1
#define MT6335_RG_VCAMA1_OCFB_EN_SHIFT                   9
#define MT6335_DA_QI_VCAMA1_OCFB_EN_MASK                 0x1
#define MT6335_DA_QI_VCAMA1_OCFB_EN_SHIFT                10
#define MT6335_RG_VCAMA2_SW_EN_MASK                      0x1
#define MT6335_RG_VCAMA2_SW_EN_SHIFT                     0
#define MT6335_RG_VCAMA2_SW_LP_MASK                      0x1
#define MT6335_RG_VCAMA2_SW_LP_SHIFT                     1
#define MT6335_RG_VCAMA2_SW_OP_EN_MASK                   0x1
#define MT6335_RG_VCAMA2_SW_OP_EN_SHIFT                  0
#define MT6335_RG_VCAMA2_GO_ON_OP_MASK                   0x1
#define MT6335_RG_VCAMA2_GO_ON_OP_SHIFT                  8
#define MT6335_RG_VCAMA2_GO_LP_OP_MASK                   0x1
#define MT6335_RG_VCAMA2_GO_LP_OP_SHIFT                  9
#define MT6335_DA_QI_VCAMA2_MODE_MASK                    0x1
#define MT6335_DA_QI_VCAMA2_MODE_SHIFT                   8
#define MT6335_RG_VCAMA2_STBTD_MASK                      0x3
#define MT6335_RG_VCAMA2_STBTD_SHIFT                     9
#define MT6335_DA_QI_VCAMA2_STB_MASK                     0x1
#define MT6335_DA_QI_VCAMA2_STB_SHIFT                    14
#define MT6335_DA_QI_VCAMA2_EN_MASK                      0x1
#define MT6335_DA_QI_VCAMA2_EN_SHIFT                     15
#define MT6335_RG_VCAMA2_OCFB_EN_MASK                    0x1
#define MT6335_RG_VCAMA2_OCFB_EN_SHIFT                   9
#define MT6335_DA_QI_VCAMA2_OCFB_EN_MASK                 0x1
#define MT6335_DA_QI_VCAMA2_OCFB_EN_SHIFT                10
#define MT6335_RG_LDO_MANUAL_OFS_SEL_MASK                0x1F
#define MT6335_RG_LDO_MANUAL_OFS_SEL_SHIFT               0
#define MT6335_RG_LDO_MANUAL_OFS_EN_MASK                 0x1
#define MT6335_RG_LDO_MANUAL_OFS_EN_SHIFT                7
#define MT6335_RG_LDO_CALI_RSV_MASK                      0x1F
#define MT6335_RG_LDO_CALI_RSV_SHIFT                     8
#define MT6335_RG_LDO_CALI_MODE_SEL_MASK                 0x1
#define MT6335_RG_LDO_CALI_MODE_SEL_SHIFT                13
#define MT6335_RG_LDO_MANUAL_MODE_MASK                   0x1
#define MT6335_RG_LDO_MANUAL_MODE_SHIFT                  14
#define MT6335_RG_LDO_AUTO_START_MASK                    0x1
#define MT6335_RG_LDO_AUTO_START_SHIFT                   15
#define MT6335_RG_LDO_CALI_CLR_MASK                      0x1
#define MT6335_RG_LDO_CALI_CLR_SHIFT                     0
#define MT6335_LDO_CALI_INC_COUNT_MASK                   0x3
#define MT6335_LDO_CALI_INC_COUNT_SHIFT                  1
#define MT6335_LDO_K_START_MASK                          0x1
#define MT6335_LDO_K_START_SHIFT                         3
#define MT6335_LDO_CALI_DONE_MASK                        0x1
#define MT6335_LDO_CALI_DONE_SHIFT                       4
#define MT6335_LDO_CALI_CNT_MASK                         0x7
#define MT6335_LDO_CALI_CNT_SHIFT                        5
#define MT6335_LDO_CALI_EFUSE_EN_MASK                    0x1
#define MT6335_LDO_CALI_EFUSE_EN_SHIFT                   8
#define MT6335_DA_QI_VIO18_OFS_CAL_EN_MASK               0x1
#define MT6335_DA_QI_VIO18_OFS_CAL_EN_SHIFT              0
#define MT6335_AD_QI_VIO18_CAL_INDI_MASK                 0x1
#define MT6335_AD_QI_VIO18_CAL_INDI_SHIFT                1
#define MT6335_DA_QI_VIO18_OFS_SEL_MASK                  0x1F
#define MT6335_DA_QI_VIO18_OFS_SEL_SHIFT                 11
#define MT6335_LDO_DEGTD_SEL_MASK                        0x3
#define MT6335_LDO_DEGTD_SEL_SHIFT                       14
#define MT6335_RG_VRTC_EN_MASK                           0x1
#define MT6335_RG_VRTC_EN_SHIFT                          1
#define MT6335_DA_QI_VRTC_EN_MASK                        0x1
#define MT6335_DA_QI_VRTC_EN_SHIFT                       15
#define MT6335_RG_LDO_RSV1_MASK                          0x3FF
#define MT6335_RG_LDO_RSV1_SHIFT                         0
#define MT6335_RG_LDO_RSV0_MASK                          0x3F
#define MT6335_RG_LDO_RSV0_SHIFT                         10
#define MT6335_RG_LDO_RSV2_MASK                          0xFFFF
#define MT6335_RG_LDO_RSV2_SHIFT                         0
#define MT6335_RG_VSRAM_DVFS1_SW_EN_MASK                 0x1
#define MT6335_RG_VSRAM_DVFS1_SW_EN_SHIFT                0
#define MT6335_RG_VSRAM_DVFS1_SW_LP_MASK                 0x1
#define MT6335_RG_VSRAM_DVFS1_SW_LP_SHIFT                1
#define MT6335_RG_VSRAM_DVFS1_VOSEL_MASK                 0x7F
#define MT6335_RG_VSRAM_DVFS1_VOSEL_SHIFT                0
#define MT6335_RG_VSRAM_DVFS1_VOSEL_SLEEP_MASK           0x7F
#define MT6335_RG_VSRAM_DVFS1_VOSEL_SLEEP_SHIFT          0
#define MT6335_RG_VSRAM_DVFS1_SFCHG_FRATE_MASK           0x7F
#define MT6335_RG_VSRAM_DVFS1_SFCHG_FRATE_SHIFT          0
#define MT6335_RG_VSRAM_DVFS1_SFCHG_FEN_MASK             0x1
#define MT6335_RG_VSRAM_DVFS1_SFCHG_FEN_SHIFT            7
#define MT6335_RG_VSRAM_DVFS1_SFCHG_RRATE_MASK           0x7F
#define MT6335_RG_VSRAM_DVFS1_SFCHG_RRATE_SHIFT          8
#define MT6335_RG_VSRAM_DVFS1_SFCHG_REN_MASK             0x1
#define MT6335_RG_VSRAM_DVFS1_SFCHG_REN_SHIFT            15
#define MT6335_RG_VSRAM_DVFS1_DVS_TRANS_TD_MASK          0x3
#define MT6335_RG_VSRAM_DVFS1_DVS_TRANS_TD_SHIFT         0
#define MT6335_RG_VSRAM_DVFS1_DVS_TRANS_CTRL_MASK        0x3
#define MT6335_RG_VSRAM_DVFS1_DVS_TRANS_CTRL_SHIFT       4
#define MT6335_RG_VSRAM_DVFS1_DVS_TRANS_ONCE_MASK        0x1
#define MT6335_RG_VSRAM_DVFS1_DVS_TRANS_ONCE_SHIFT       6
#define MT6335_RG_VSRAM_DVFS1_SW_OP_EN_MASK              0x1
#define MT6335_RG_VSRAM_DVFS1_SW_OP_EN_SHIFT             0
#define MT6335_RG_VSRAM_DVFS1_HW0_OP_EN_MASK             0x1
#define MT6335_RG_VSRAM_DVFS1_HW0_OP_EN_SHIFT            1
#define MT6335_RG_VSRAM_DVFS1_HW1_OP_EN_MASK             0x1
#define MT6335_RG_VSRAM_DVFS1_HW1_OP_EN_SHIFT            2
#define MT6335_RG_VSRAM_DVFS1_HW2_OP_EN_MASK             0x1
#define MT6335_RG_VSRAM_DVFS1_HW2_OP_EN_SHIFT            3
#define MT6335_RG_VSRAM_DVFS1_OP_EN_SET_MASK             0xFFFF
#define MT6335_RG_VSRAM_DVFS1_OP_EN_SET_SHIFT            0
#define MT6335_RG_VSRAM_DVFS1_OP_EN_CLR_MASK             0xFFFF
#define MT6335_RG_VSRAM_DVFS1_OP_EN_CLR_SHIFT            0
#define MT6335_RG_VSRAM_DVFS1_HW0_OP_CFG_MASK            0x1
#define MT6335_RG_VSRAM_DVFS1_HW0_OP_CFG_SHIFT           1
#define MT6335_RG_VSRAM_DVFS1_HW1_OP_CFG_MASK            0x1
#define MT6335_RG_VSRAM_DVFS1_HW1_OP_CFG_SHIFT           2
#define MT6335_RG_VSRAM_DVFS1_HW2_OP_CFG_MASK            0x1
#define MT6335_RG_VSRAM_DVFS1_HW2_OP_CFG_SHIFT           3
#define MT6335_RG_VSRAM_DVFS1_GO_ON_OP_MASK              0x1
#define MT6335_RG_VSRAM_DVFS1_GO_ON_OP_SHIFT             8
#define MT6335_RG_VSRAM_DVFS1_GO_LP_OP_MASK              0x1
#define MT6335_RG_VSRAM_DVFS1_GO_LP_OP_SHIFT             9
#define MT6335_RG_VSRAM_DVFS1_OP_CFG_SET_MASK            0xFFFF
#define MT6335_RG_VSRAM_DVFS1_OP_CFG_SET_SHIFT           0
#define MT6335_RG_VSRAM_DVFS1_OP_CFG_CLR_MASK            0xFFFF
#define MT6335_RG_VSRAM_DVFS1_OP_CFG_CLR_SHIFT           0
#define MT6335_DA_QI_VSRAM_DVFS1_MODE_MASK               0x1
#define MT6335_DA_QI_VSRAM_DVFS1_MODE_SHIFT              8
#define MT6335_RG_VSRAM_DVFS1_STBTD_MASK                 0x3
#define MT6335_RG_VSRAM_DVFS1_STBTD_SHIFT                9
#define MT6335_RG_VSRAM_DVFS1_OCFB_EN_MASK               0x1
#define MT6335_RG_VSRAM_DVFS1_OCFB_EN_SHIFT              9
#define MT6335_DA_QI_VSRAM_DVFS1_OCFB_EN_MASK            0x1
#define MT6335_DA_QI_VSRAM_DVFS1_OCFB_EN_SHIFT           10
#define MT6335_RG_VSRAM_DVFS1_DUMMY_LOAD_MASK            0x7
#define MT6335_RG_VSRAM_DVFS1_DUMMY_LOAD_SHIFT           4
#define MT6335_DA_QI_VSRAM_DVFS1_DUMMY_LOAD_MASK         0x1F
#define MT6335_DA_QI_VSRAM_DVFS1_DUMMY_LOAD_SHIFT        11
#define MT6335_DA_NI_VSRAM_DVFS1_VOSEL_GRAY_MASK         0x7F
#define MT6335_DA_NI_VSRAM_DVFS1_VOSEL_GRAY_SHIFT        0
#define MT6335_DA_NI_VSRAM_DVFS1_VOSEL_MASK              0x7F
#define MT6335_DA_NI_VSRAM_DVFS1_VOSEL_SHIFT             8
#define MT6335_DA_QI_VSRAM_DVFS1_EN_MASK                 0x1
#define MT6335_DA_QI_VSRAM_DVFS1_EN_SHIFT                0
#define MT6335_DA_QI_VSRAM_DVFS1_STB_MASK                0x1
#define MT6335_DA_QI_VSRAM_DVFS1_STB_SHIFT               1
#define MT6335_DA_NI_VSRAM_DVFS1_VSLEEP_SEL_MASK         0x1
#define MT6335_DA_NI_VSRAM_DVFS1_VSLEEP_SEL_SHIFT        2
#define MT6335_DA_NI_VSRAM_DVFS1_R2R_PDN_MASK            0x1
#define MT6335_DA_NI_VSRAM_DVFS1_R2R_PDN_SHIFT           3
#define MT6335_DA_NI_VSRAM_DVFS1_TRACK_NDIS_EN_MASK      0x1
#define MT6335_DA_NI_VSRAM_DVFS1_TRACK_NDIS_EN_SHIFT     4
#define MT6335_RG_VSRAM_DVFS2_SW_EN_MASK                 0x1
#define MT6335_RG_VSRAM_DVFS2_SW_EN_SHIFT                0
#define MT6335_RG_VSRAM_DVFS2_SW_LP_MASK                 0x1
#define MT6335_RG_VSRAM_DVFS2_SW_LP_SHIFT                1
#define MT6335_RG_VSRAM_DVFS2_VOSEL_MASK                 0x7F
#define MT6335_RG_VSRAM_DVFS2_VOSEL_SHIFT                0
#define MT6335_RG_VSRAM_DVFS2_VOSEL_SLEEP_MASK           0x7F
#define MT6335_RG_VSRAM_DVFS2_VOSEL_SLEEP_SHIFT          0
#define MT6335_RG_VSRAM_DVFS2_SFCHG_FRATE_MASK           0x7F
#define MT6335_RG_VSRAM_DVFS2_SFCHG_FRATE_SHIFT          0
#define MT6335_RG_VSRAM_DVFS2_SFCHG_FEN_MASK             0x1
#define MT6335_RG_VSRAM_DVFS2_SFCHG_FEN_SHIFT            7
#define MT6335_RG_VSRAM_DVFS2_SFCHG_RRATE_MASK           0x7F
#define MT6335_RG_VSRAM_DVFS2_SFCHG_RRATE_SHIFT          8
#define MT6335_RG_VSRAM_DVFS2_SFCHG_REN_MASK             0x1
#define MT6335_RG_VSRAM_DVFS2_SFCHG_REN_SHIFT            15
#define MT6335_RG_VSRAM_DVFS2_DVS_TRANS_TD_MASK          0x3
#define MT6335_RG_VSRAM_DVFS2_DVS_TRANS_TD_SHIFT         0
#define MT6335_RG_VSRAM_DVFS2_DVS_TRANS_CTRL_MASK        0x3
#define MT6335_RG_VSRAM_DVFS2_DVS_TRANS_CTRL_SHIFT       4
#define MT6335_RG_VSRAM_DVFS2_DVS_TRANS_ONCE_MASK        0x1
#define MT6335_RG_VSRAM_DVFS2_DVS_TRANS_ONCE_SHIFT       6
#define MT6335_RG_VSRAM_DVFS2_SW_OP_EN_MASK              0x1
#define MT6335_RG_VSRAM_DVFS2_SW_OP_EN_SHIFT             0
#define MT6335_RG_VSRAM_DVFS2_HW0_OP_EN_MASK             0x1
#define MT6335_RG_VSRAM_DVFS2_HW0_OP_EN_SHIFT            1
#define MT6335_RG_VSRAM_DVFS2_HW1_OP_EN_MASK             0x1
#define MT6335_RG_VSRAM_DVFS2_HW1_OP_EN_SHIFT            2
#define MT6335_RG_VSRAM_DVFS2_HW2_OP_EN_MASK             0x1
#define MT6335_RG_VSRAM_DVFS2_HW2_OP_EN_SHIFT            3
#define MT6335_RG_VSRAM_DVFS2_OP_EN_SET_MASK             0xFFFF
#define MT6335_RG_VSRAM_DVFS2_OP_EN_SET_SHIFT            0
#define MT6335_RG_VSRAM_DVFS2_OP_EN_CLR_MASK             0xFFFF
#define MT6335_RG_VSRAM_DVFS2_OP_EN_CLR_SHIFT            0
#define MT6335_RG_VSRAM_DVFS2_HW0_OP_CFG_MASK            0x1
#define MT6335_RG_VSRAM_DVFS2_HW0_OP_CFG_SHIFT           1
#define MT6335_RG_VSRAM_DVFS2_HW1_OP_CFG_MASK            0x1
#define MT6335_RG_VSRAM_DVFS2_HW1_OP_CFG_SHIFT           2
#define MT6335_RG_VSRAM_DVFS2_HW2_OP_CFG_MASK            0x1
#define MT6335_RG_VSRAM_DVFS2_HW2_OP_CFG_SHIFT           3
#define MT6335_RG_VSRAM_DVFS2_GO_ON_OP_MASK              0x1
#define MT6335_RG_VSRAM_DVFS2_GO_ON_OP_SHIFT             8
#define MT6335_RG_VSRAM_DVFS2_GO_LP_OP_MASK              0x1
#define MT6335_RG_VSRAM_DVFS2_GO_LP_OP_SHIFT             9
#define MT6335_RG_VSRAM_DVFS2_OP_CFG_SET_MASK            0xFFFF
#define MT6335_RG_VSRAM_DVFS2_OP_CFG_SET_SHIFT           0
#define MT6335_RG_VSRAM_DVFS2_OP_CFG_CLR_MASK            0xFFFF
#define MT6335_RG_VSRAM_DVFS2_OP_CFG_CLR_SHIFT           0
#define MT6335_DA_QI_VSRAM_DVFS2_MODE_MASK               0x1
#define MT6335_DA_QI_VSRAM_DVFS2_MODE_SHIFT              8
#define MT6335_RG_VSRAM_DVFS2_STBTD_MASK                 0x3
#define MT6335_RG_VSRAM_DVFS2_STBTD_SHIFT                9
#define MT6335_RG_VSRAM_DVFS2_OCFB_EN_MASK               0x1
#define MT6335_RG_VSRAM_DVFS2_OCFB_EN_SHIFT              9
#define MT6335_DA_QI_VSRAM_DVFS2_OCFB_EN_MASK            0x1
#define MT6335_DA_QI_VSRAM_DVFS2_OCFB_EN_SHIFT           10
#define MT6335_RG_VSRAM_DVFS2_DUMMY_LOAD_MASK            0x7
#define MT6335_RG_VSRAM_DVFS2_DUMMY_LOAD_SHIFT           4
#define MT6335_DA_QI_VSRAM_DVFS2_DUMMY_LOAD_MASK         0x1F
#define MT6335_DA_QI_VSRAM_DVFS2_DUMMY_LOAD_SHIFT        11
#define MT6335_DA_NI_VSRAM_DVFS2_VOSEL_GRAY_MASK         0x7F
#define MT6335_DA_NI_VSRAM_DVFS2_VOSEL_GRAY_SHIFT        0
#define MT6335_DA_NI_VSRAM_DVFS2_VOSEL_MASK              0x7F
#define MT6335_DA_NI_VSRAM_DVFS2_VOSEL_SHIFT             8
#define MT6335_DA_QI_VSRAM_DVFS2_EN_MASK                 0x1
#define MT6335_DA_QI_VSRAM_DVFS2_EN_SHIFT                0
#define MT6335_DA_QI_VSRAM_DVFS2_STB_MASK                0x1
#define MT6335_DA_QI_VSRAM_DVFS2_STB_SHIFT               1
#define MT6335_DA_NI_VSRAM_DVFS2_VSLEEP_SEL_MASK         0x1
#define MT6335_DA_NI_VSRAM_DVFS2_VSLEEP_SEL_SHIFT        2
#define MT6335_DA_NI_VSRAM_DVFS2_R2R_PDN_MASK            0x1
#define MT6335_DA_NI_VSRAM_DVFS2_R2R_PDN_SHIFT           3
#define MT6335_DA_NI_VSRAM_DVFS2_TRACK_NDIS_EN_MASK      0x1
#define MT6335_DA_NI_VSRAM_DVFS2_TRACK_NDIS_EN_SHIFT     4
#define MT6335_RG_VSRAM_VCORE_SW_EN_MASK                 0x1
#define MT6335_RG_VSRAM_VCORE_SW_EN_SHIFT                0
#define MT6335_RG_VSRAM_VCORE_SW_LP_MASK                 0x1
#define MT6335_RG_VSRAM_VCORE_SW_LP_SHIFT                1
#define MT6335_RG_VSRAM_VCORE_VOSEL_MASK                 0x7F
#define MT6335_RG_VSRAM_VCORE_VOSEL_SHIFT                0
#define MT6335_RG_VSRAM_VCORE_VOSEL_SLEEP_MASK           0x7F
#define MT6335_RG_VSRAM_VCORE_VOSEL_SLEEP_SHIFT          0
#define MT6335_RG_VSRAM_VCORE_SFCHG_FRATE_MASK           0x7F
#define MT6335_RG_VSRAM_VCORE_SFCHG_FRATE_SHIFT          0
#define MT6335_RG_VSRAM_VCORE_SFCHG_FEN_MASK             0x1
#define MT6335_RG_VSRAM_VCORE_SFCHG_FEN_SHIFT            7
#define MT6335_RG_VSRAM_VCORE_SFCHG_RRATE_MASK           0x7F
#define MT6335_RG_VSRAM_VCORE_SFCHG_RRATE_SHIFT          8
#define MT6335_RG_VSRAM_VCORE_SFCHG_REN_MASK             0x1
#define MT6335_RG_VSRAM_VCORE_SFCHG_REN_SHIFT            15
#define MT6335_RG_VSRAM_VCORE_DVS_TRANS_TD_MASK          0x3
#define MT6335_RG_VSRAM_VCORE_DVS_TRANS_TD_SHIFT         0
#define MT6335_RG_VSRAM_VCORE_DVS_TRANS_CTRL_MASK        0x3
#define MT6335_RG_VSRAM_VCORE_DVS_TRANS_CTRL_SHIFT       4
#define MT6335_RG_VSRAM_VCORE_DVS_TRANS_ONCE_MASK        0x1
#define MT6335_RG_VSRAM_VCORE_DVS_TRANS_ONCE_SHIFT       6
#define MT6335_RG_VSRAM_VCORE_SW_OP_EN_MASK              0x1
#define MT6335_RG_VSRAM_VCORE_SW_OP_EN_SHIFT             0
#define MT6335_RG_VSRAM_VCORE_HW0_OP_EN_MASK             0x1
#define MT6335_RG_VSRAM_VCORE_HW0_OP_EN_SHIFT            1
#define MT6335_RG_VSRAM_VCORE_HW1_OP_EN_MASK             0x1
#define MT6335_RG_VSRAM_VCORE_HW1_OP_EN_SHIFT            2
#define MT6335_RG_VSRAM_VCORE_HW2_OP_EN_MASK             0x1
#define MT6335_RG_VSRAM_VCORE_HW2_OP_EN_SHIFT            3
#define MT6335_RG_VSRAM_VCORE_OP_EN_SET_MASK             0xFFFF
#define MT6335_RG_VSRAM_VCORE_OP_EN_SET_SHIFT            0
#define MT6335_RG_VSRAM_VCORE_OP_EN_CLR_MASK             0xFFFF
#define MT6335_RG_VSRAM_VCORE_OP_EN_CLR_SHIFT            0
#define MT6335_RG_VSRAM_VCORE_HW0_OP_CFG_MASK            0x1
#define MT6335_RG_VSRAM_VCORE_HW0_OP_CFG_SHIFT           1
#define MT6335_RG_VSRAM_VCORE_HW1_OP_CFG_MASK            0x1
#define MT6335_RG_VSRAM_VCORE_HW1_OP_CFG_SHIFT           2
#define MT6335_RG_VSRAM_VCORE_HW2_OP_CFG_MASK            0x1
#define MT6335_RG_VSRAM_VCORE_HW2_OP_CFG_SHIFT           3
#define MT6335_RG_VSRAM_VCORE_GO_ON_OP_MASK              0x1
#define MT6335_RG_VSRAM_VCORE_GO_ON_OP_SHIFT             8
#define MT6335_RG_VSRAM_VCORE_GO_LP_OP_MASK              0x1
#define MT6335_RG_VSRAM_VCORE_GO_LP_OP_SHIFT             9
#define MT6335_RG_VSRAM_VCORE_OP_CFG_SET_MASK            0xFFFF
#define MT6335_RG_VSRAM_VCORE_OP_CFG_SET_SHIFT           0
#define MT6335_RG_VSRAM_VCORE_OP_CFG_CLR_MASK            0xFFFF
#define MT6335_RG_VSRAM_VCORE_OP_CFG_CLR_SHIFT           0
#define MT6335_DA_QI_VSRAM_VCORE_MODE_MASK               0x1
#define MT6335_DA_QI_VSRAM_VCORE_MODE_SHIFT              8
#define MT6335_RG_VSRAM_VCORE_STBTD_MASK                 0x3
#define MT6335_RG_VSRAM_VCORE_STBTD_SHIFT                9
#define MT6335_RG_VSRAM_VCORE_OCFB_EN_MASK               0x1
#define MT6335_RG_VSRAM_VCORE_OCFB_EN_SHIFT              9
#define MT6335_DA_QI_VSRAM_VCORE_OCFB_EN_MASK            0x1
#define MT6335_DA_QI_VSRAM_VCORE_OCFB_EN_SHIFT           10
#define MT6335_RG_VSRAM_VCORE_DUMMY_LOAD_MASK            0x7
#define MT6335_RG_VSRAM_VCORE_DUMMY_LOAD_SHIFT           4
#define MT6335_DA_QI_VSRAM_VCORE_DUMMY_LOAD_MASK         0x1F
#define MT6335_DA_QI_VSRAM_VCORE_DUMMY_LOAD_SHIFT        11
#define MT6335_DA_NI_VSRAM_VCORE_VOSEL_GRAY_MASK         0x7F
#define MT6335_DA_NI_VSRAM_VCORE_VOSEL_GRAY_SHIFT        0
#define MT6335_DA_NI_VSRAM_VCORE_VOSEL_MASK              0x7F
#define MT6335_DA_NI_VSRAM_VCORE_VOSEL_SHIFT             8
#define MT6335_DA_QI_VSRAM_VCORE_EN_MASK                 0x1
#define MT6335_DA_QI_VSRAM_VCORE_EN_SHIFT                0
#define MT6335_DA_QI_VSRAM_VCORE_STB_MASK                0x1
#define MT6335_DA_QI_VSRAM_VCORE_STB_SHIFT               1
#define MT6335_DA_NI_VSRAM_VCORE_VSLEEP_SEL_MASK         0x1
#define MT6335_DA_NI_VSRAM_VCORE_VSLEEP_SEL_SHIFT        2
#define MT6335_DA_NI_VSRAM_VCORE_R2R_PDN_MASK            0x1
#define MT6335_DA_NI_VSRAM_VCORE_R2R_PDN_SHIFT           3
#define MT6335_DA_NI_VSRAM_VCORE_TRACK_NDIS_EN_MASK      0x1
#define MT6335_DA_NI_VSRAM_VCORE_TRACK_NDIS_EN_SHIFT     4
#define MT6335_RG_VSRAM_VGPU_SW_EN_MASK                  0x1
#define MT6335_RG_VSRAM_VGPU_SW_EN_SHIFT                 0
#define MT6335_RG_VSRAM_VGPU_SW_LP_MASK                  0x1
#define MT6335_RG_VSRAM_VGPU_SW_LP_SHIFT                 1
#define MT6335_RG_VSRAM_VGPU_VOSEL_MASK                  0x7F
#define MT6335_RG_VSRAM_VGPU_VOSEL_SHIFT                 0
#define MT6335_RG_VSRAM_VGPU_VOSEL_SLEEP_MASK            0x7F
#define MT6335_RG_VSRAM_VGPU_VOSEL_SLEEP_SHIFT           0
#define MT6335_RG_VSRAM_VGPU_SFCHG_FRATE_MASK            0x7F
#define MT6335_RG_VSRAM_VGPU_SFCHG_FRATE_SHIFT           0
#define MT6335_RG_VSRAM_VGPU_SFCHG_FEN_MASK              0x1
#define MT6335_RG_VSRAM_VGPU_SFCHG_FEN_SHIFT             7
#define MT6335_RG_VSRAM_VGPU_SFCHG_RRATE_MASK            0x7F
#define MT6335_RG_VSRAM_VGPU_SFCHG_RRATE_SHIFT           8
#define MT6335_RG_VSRAM_VGPU_SFCHG_REN_MASK              0x1
#define MT6335_RG_VSRAM_VGPU_SFCHG_REN_SHIFT             15
#define MT6335_RG_VSRAM_VGPU_DVS_TRANS_TD_MASK           0x3
#define MT6335_RG_VSRAM_VGPU_DVS_TRANS_TD_SHIFT          0
#define MT6335_RG_VSRAM_VGPU_DVS_TRANS_CTRL_MASK         0x3
#define MT6335_RG_VSRAM_VGPU_DVS_TRANS_CTRL_SHIFT        4
#define MT6335_RG_VSRAM_VGPU_DVS_TRANS_ONCE_MASK         0x1
#define MT6335_RG_VSRAM_VGPU_DVS_TRANS_ONCE_SHIFT        6
#define MT6335_RG_VSRAM_VGPU_SW_OP_EN_MASK               0x1
#define MT6335_RG_VSRAM_VGPU_SW_OP_EN_SHIFT              0
#define MT6335_RG_VSRAM_VGPU_HW0_OP_EN_MASK              0x1
#define MT6335_RG_VSRAM_VGPU_HW0_OP_EN_SHIFT             1
#define MT6335_RG_VSRAM_VGPU_HW1_OP_EN_MASK              0x1
#define MT6335_RG_VSRAM_VGPU_HW1_OP_EN_SHIFT             2
#define MT6335_RG_VSRAM_VGPU_HW2_OP_EN_MASK              0x1
#define MT6335_RG_VSRAM_VGPU_HW2_OP_EN_SHIFT             3
#define MT6335_RG_VSRAM_VGPU_OP_EN_SET_MASK              0xFFFF
#define MT6335_RG_VSRAM_VGPU_OP_EN_SET_SHIFT             0
#define MT6335_RG_VSRAM_VGPU_OP_EN_CLR_MASK              0xFFFF
#define MT6335_RG_VSRAM_VGPU_OP_EN_CLR_SHIFT             0
#define MT6335_RG_VSRAM_VGPU_HW0_OP_CFG_MASK             0x1
#define MT6335_RG_VSRAM_VGPU_HW0_OP_CFG_SHIFT            1
#define MT6335_RG_VSRAM_VGPU_HW1_OP_CFG_MASK             0x1
#define MT6335_RG_VSRAM_VGPU_HW1_OP_CFG_SHIFT            2
#define MT6335_RG_VSRAM_VGPU_HW2_OP_CFG_MASK             0x1
#define MT6335_RG_VSRAM_VGPU_HW2_OP_CFG_SHIFT            3
#define MT6335_RG_VSRAM_VGPU_GO_ON_OP_MASK               0x1
#define MT6335_RG_VSRAM_VGPU_GO_ON_OP_SHIFT              8
#define MT6335_RG_VSRAM_VGPU_GO_LP_OP_MASK               0x1
#define MT6335_RG_VSRAM_VGPU_GO_LP_OP_SHIFT              9
#define MT6335_RG_VSRAM_VGPU_OP_CFG_SET_MASK             0xFFFF
#define MT6335_RG_VSRAM_VGPU_OP_CFG_SET_SHIFT            0
#define MT6335_RG_VSRAM_VGPU_OP_CFG_CLR_MASK             0xFFFF
#define MT6335_RG_VSRAM_VGPU_OP_CFG_CLR_SHIFT            0
#define MT6335_DA_QI_VSRAM_VGPU_MODE_MASK                0x1
#define MT6335_DA_QI_VSRAM_VGPU_MODE_SHIFT               8
#define MT6335_RG_VSRAM_VGPU_STBTD_MASK                  0x3
#define MT6335_RG_VSRAM_VGPU_STBTD_SHIFT                 9
#define MT6335_RG_VSRAM_VGPU_OCFB_EN_MASK                0x1
#define MT6335_RG_VSRAM_VGPU_OCFB_EN_SHIFT               9
#define MT6335_DA_QI_VSRAM_VGPU_OCFB_EN_MASK             0x1
#define MT6335_DA_QI_VSRAM_VGPU_OCFB_EN_SHIFT            10
#define MT6335_RG_VSRAM_VGPU_DUMMY_LOAD_MASK             0x7
#define MT6335_RG_VSRAM_VGPU_DUMMY_LOAD_SHIFT            4
#define MT6335_DA_QI_VSRAM_VGPU_DUMMY_LOAD_MASK          0x1F
#define MT6335_DA_QI_VSRAM_VGPU_DUMMY_LOAD_SHIFT         11
#define MT6335_DA_NI_VSRAM_VGPU_VOSEL_GRAY_MASK          0x7F
#define MT6335_DA_NI_VSRAM_VGPU_VOSEL_GRAY_SHIFT         0
#define MT6335_DA_NI_VSRAM_VGPU_VOSEL_MASK               0x7F
#define MT6335_DA_NI_VSRAM_VGPU_VOSEL_SHIFT              8
#define MT6335_DA_QI_VSRAM_VGPU_EN_MASK                  0x1
#define MT6335_DA_QI_VSRAM_VGPU_EN_SHIFT                 0
#define MT6335_DA_QI_VSRAM_VGPU_STB_MASK                 0x1
#define MT6335_DA_QI_VSRAM_VGPU_STB_SHIFT                1
#define MT6335_DA_NI_VSRAM_VGPU_VSLEEP_SEL_MASK          0x1
#define MT6335_DA_NI_VSRAM_VGPU_VSLEEP_SEL_SHIFT         2
#define MT6335_DA_NI_VSRAM_VGPU_R2R_PDN_MASK             0x1
#define MT6335_DA_NI_VSRAM_VGPU_R2R_PDN_SHIFT            3
#define MT6335_DA_NI_VSRAM_VGPU_TRACK_NDIS_EN_MASK       0x1
#define MT6335_DA_NI_VSRAM_VGPU_TRACK_NDIS_EN_SHIFT      4
#define MT6335_RG_VSRAM_VMD_SW_EN_MASK                   0x1
#define MT6335_RG_VSRAM_VMD_SW_EN_SHIFT                  0
#define MT6335_RG_VSRAM_VMD_SW_LP_MASK                   0x1
#define MT6335_RG_VSRAM_VMD_SW_LP_SHIFT                  1
#define MT6335_RG_VSRAM_VMD_VOSEL_MASK                   0x7F
#define MT6335_RG_VSRAM_VMD_VOSEL_SHIFT                  0
#define MT6335_RG_VSRAM_VMD_VOSEL_SLEEP_MASK             0x7F
#define MT6335_RG_VSRAM_VMD_VOSEL_SLEEP_SHIFT            0
#define MT6335_RG_VSRAM_VMD_SFCHG_FRATE_MASK             0x7F
#define MT6335_RG_VSRAM_VMD_SFCHG_FRATE_SHIFT            0
#define MT6335_RG_VSRAM_VMD_SFCHG_FEN_MASK               0x1
#define MT6335_RG_VSRAM_VMD_SFCHG_FEN_SHIFT              7
#define MT6335_RG_VSRAM_VMD_SFCHG_RRATE_MASK             0x7F
#define MT6335_RG_VSRAM_VMD_SFCHG_RRATE_SHIFT            8
#define MT6335_RG_VSRAM_VMD_SFCHG_REN_MASK               0x1
#define MT6335_RG_VSRAM_VMD_SFCHG_REN_SHIFT              15
#define MT6335_RG_VSRAM_VMD_DVS_TRANS_TD_MASK            0x3
#define MT6335_RG_VSRAM_VMD_DVS_TRANS_TD_SHIFT           0
#define MT6335_RG_VSRAM_VMD_DVS_TRANS_CTRL_MASK          0x3
#define MT6335_RG_VSRAM_VMD_DVS_TRANS_CTRL_SHIFT         4
#define MT6335_RG_VSRAM_VMD_DVS_TRANS_ONCE_MASK          0x1
#define MT6335_RG_VSRAM_VMD_DVS_TRANS_ONCE_SHIFT         6
#define MT6335_RG_VSRAM_VMD_SW_OP_EN_MASK                0x1
#define MT6335_RG_VSRAM_VMD_SW_OP_EN_SHIFT               0
#define MT6335_RG_VSRAM_VMD_HW0_OP_EN_MASK               0x1
#define MT6335_RG_VSRAM_VMD_HW0_OP_EN_SHIFT              1
#define MT6335_RG_VSRAM_VMD_HW1_OP_EN_MASK               0x1
#define MT6335_RG_VSRAM_VMD_HW1_OP_EN_SHIFT              2
#define MT6335_RG_VSRAM_VMD_HW2_OP_EN_MASK               0x1
#define MT6335_RG_VSRAM_VMD_HW2_OP_EN_SHIFT              3
#define MT6335_RG_VSRAM_VMD_OP_EN_SET_MASK               0xFFFF
#define MT6335_RG_VSRAM_VMD_OP_EN_SET_SHIFT              0
#define MT6335_RG_VSRAM_VMD_OP_EN_CLR_MASK               0xFFFF
#define MT6335_RG_VSRAM_VMD_OP_EN_CLR_SHIFT              0
#define MT6335_RG_VSRAM_VMD_HW0_OP_CFG_MASK              0x1
#define MT6335_RG_VSRAM_VMD_HW0_OP_CFG_SHIFT             1
#define MT6335_RG_VSRAM_VMD_HW1_OP_CFG_MASK              0x1
#define MT6335_RG_VSRAM_VMD_HW1_OP_CFG_SHIFT             2
#define MT6335_RG_VSRAM_VMD_HW2_OP_CFG_MASK              0x1
#define MT6335_RG_VSRAM_VMD_HW2_OP_CFG_SHIFT             3
#define MT6335_RG_VSRAM_VMD_GO_ON_OP_MASK                0x1
#define MT6335_RG_VSRAM_VMD_GO_ON_OP_SHIFT               8
#define MT6335_RG_VSRAM_VMD_GO_LP_OP_MASK                0x1
#define MT6335_RG_VSRAM_VMD_GO_LP_OP_SHIFT               9
#define MT6335_RG_VSRAM_VMD_OP_CFG_SET_MASK              0xFFFF
#define MT6335_RG_VSRAM_VMD_OP_CFG_SET_SHIFT             0
#define MT6335_RG_VSRAM_VMD_OP_CFG_CLR_MASK              0xFFFF
#define MT6335_RG_VSRAM_VMD_OP_CFG_CLR_SHIFT             0
#define MT6335_DA_QI_VSRAM_VMD_MODE_MASK                 0x1
#define MT6335_DA_QI_VSRAM_VMD_MODE_SHIFT                8
#define MT6335_RG_VSRAM_VMD_STBTD_MASK                   0x3
#define MT6335_RG_VSRAM_VMD_STBTD_SHIFT                  9
#define MT6335_RG_VSRAM_VMD_OCFB_EN_MASK                 0x1
#define MT6335_RG_VSRAM_VMD_OCFB_EN_SHIFT                9
#define MT6335_DA_QI_VSRAM_VMD_OCFB_EN_MASK              0x1
#define MT6335_DA_QI_VSRAM_VMD_OCFB_EN_SHIFT             10
#define MT6335_RG_VSRAM_VMD_DUMMY_LOAD_MASK              0x7
#define MT6335_RG_VSRAM_VMD_DUMMY_LOAD_SHIFT             4
#define MT6335_DA_QI_VSRAM_VMD_DUMMY_LOAD_MASK           0x1F
#define MT6335_DA_QI_VSRAM_VMD_DUMMY_LOAD_SHIFT          11
#define MT6335_DA_NI_VSRAM_VMD_VOSEL_GRAY_MASK           0x7F
#define MT6335_DA_NI_VSRAM_VMD_VOSEL_GRAY_SHIFT          0
#define MT6335_DA_NI_VSRAM_VMD_VOSEL_MASK                0x7F
#define MT6335_DA_NI_VSRAM_VMD_VOSEL_SHIFT               8
#define MT6335_DA_QI_VSRAM_VMD_EN_MASK                   0x1
#define MT6335_DA_QI_VSRAM_VMD_EN_SHIFT                  0
#define MT6335_DA_QI_VSRAM_VMD_STB_MASK                  0x1
#define MT6335_DA_QI_VSRAM_VMD_STB_SHIFT                 1
#define MT6335_DA_NI_VSRAM_VMD_VSLEEP_SEL_MASK           0x1
#define MT6335_DA_NI_VSRAM_VMD_VSLEEP_SEL_SHIFT          2
#define MT6335_DA_NI_VSRAM_VMD_R2R_PDN_MASK              0x1
#define MT6335_DA_NI_VSRAM_VMD_R2R_PDN_SHIFT             3
#define MT6335_DA_NI_VSRAM_VMD_TRACK_NDIS_EN_MASK        0x1
#define MT6335_DA_NI_VSRAM_VMD_TRACK_NDIS_EN_SHIFT       4
#define MT6335_RG_VSRAM_VCORE_TRACK_SLEEP_CTRL_MASK      0x1
#define MT6335_RG_VSRAM_VCORE_TRACK_SLEEP_CTRL_SHIFT     0
#define MT6335_RG_VSRAM_VCORE_TRACK_ON_CTRL_MASK         0x1
#define MT6335_RG_VSRAM_VCORE_TRACK_ON_CTRL_SHIFT        1
#define MT6335_RG_VSRAM_VCORE_TRACK_VBUCK_ON_CTRL_MASK   0x1
#define MT6335_RG_VSRAM_VCORE_TRACK_VBUCK_ON_CTRL_SHIFT  2
#define MT6335_RG_VSRAM_VCORE_VOSEL_DELTA_MASK           0x7F
#define MT6335_RG_VSRAM_VCORE_VOSEL_DELTA_SHIFT          0
#define MT6335_RG_VSRAM_VCORE_VOSEL_OFFSET_MASK          0x7F
#define MT6335_RG_VSRAM_VCORE_VOSEL_OFFSET_SHIFT         8
#define MT6335_RG_VSRAM_VCORE_VOSEL_ON_LB_MASK           0x7F
#define MT6335_RG_VSRAM_VCORE_VOSEL_ON_LB_SHIFT          0
#define MT6335_RG_VSRAM_VCORE_VOSEL_ON_HB_MASK           0x7F
#define MT6335_RG_VSRAM_VCORE_VOSEL_ON_HB_SHIFT          8
#define MT6335_RG_VSRAM_VCORE_VOSEL_SLEEP_LB_MASK        0x7F
#define MT6335_RG_VSRAM_VCORE_VOSEL_SLEEP_LB_SHIFT       0
#define MT6335_RG_DCM_MODE_MASK                          0x1
#define MT6335_RG_DCM_MODE_SHIFT                         0
#define MT6335_RG_VIO28_CK_SW_MODE_MASK                  0x1
#define MT6335_RG_VIO28_CK_SW_MODE_SHIFT                 0
#define MT6335_RG_VIO28_CK_SW_EN_MASK                    0x1
#define MT6335_RG_VIO28_CK_SW_EN_SHIFT                   1
#define MT6335_RG_VIO28_OSC_SEL_DIS_MASK                 0x1
#define MT6335_RG_VIO28_OSC_SEL_DIS_SHIFT                2
#define MT6335_RG_VIO18_CK_SW_MODE_MASK                  0x1
#define MT6335_RG_VIO18_CK_SW_MODE_SHIFT                 0
#define MT6335_RG_VIO18_CK_SW_EN_MASK                    0x1
#define MT6335_RG_VIO18_CK_SW_EN_SHIFT                   1
#define MT6335_RG_VIO18_OSC_SEL_DIS_MASK                 0x1
#define MT6335_RG_VIO18_OSC_SEL_DIS_SHIFT                2
#define MT6335_RG_VUFS18_CK_SW_MODE_MASK                 0x1
#define MT6335_RG_VUFS18_CK_SW_MODE_SHIFT                0
#define MT6335_RG_VUFS18_CK_SW_EN_MASK                   0x1
#define MT6335_RG_VUFS18_CK_SW_EN_SHIFT                  1
#define MT6335_RG_VUFS18_OSC_SEL_DIS_MASK                0x1
#define MT6335_RG_VUFS18_OSC_SEL_DIS_SHIFT               2
#define MT6335_RG_VA10_CK_SW_MODE_MASK                   0x1
#define MT6335_RG_VA10_CK_SW_MODE_SHIFT                  0
#define MT6335_RG_VA10_CK_SW_EN_MASK                     0x1
#define MT6335_RG_VA10_CK_SW_EN_SHIFT                    1
#define MT6335_RG_VA10_OSC_SEL_DIS_MASK                  0x1
#define MT6335_RG_VA10_OSC_SEL_DIS_SHIFT                 2
#define MT6335_RG_VA12_CK_SW_MODE_MASK                   0x1
#define MT6335_RG_VA12_CK_SW_MODE_SHIFT                  0
#define MT6335_RG_VA12_CK_SW_EN_MASK                     0x1
#define MT6335_RG_VA12_CK_SW_EN_SHIFT                    1
#define MT6335_RG_VA12_OSC_SEL_DIS_MASK                  0x1
#define MT6335_RG_VA12_OSC_SEL_DIS_SHIFT                 2
#define MT6335_RG_VSRAM_DVFS1_CK_SW_MODE_MASK            0x1
#define MT6335_RG_VSRAM_DVFS1_CK_SW_MODE_SHIFT           0
#define MT6335_RG_VSRAM_DVFS1_CK_SW_EN_MASK              0x1
#define MT6335_RG_VSRAM_DVFS1_CK_SW_EN_SHIFT             1
#define MT6335_RG_VSRAM_DVFS1_OSC_SEL_DIS_MASK           0x1
#define MT6335_RG_VSRAM_DVFS1_OSC_SEL_DIS_SHIFT          2
#define MT6335_RG_VSRAM_DVFS2_CK_SW_MODE_MASK            0x1
#define MT6335_RG_VSRAM_DVFS2_CK_SW_MODE_SHIFT           0
#define MT6335_RG_VSRAM_DVFS2_CK_SW_EN_MASK              0x1
#define MT6335_RG_VSRAM_DVFS2_CK_SW_EN_SHIFT             1
#define MT6335_RG_VSRAM_DVFS2_OSC_SEL_DIS_MASK           0x1
#define MT6335_RG_VSRAM_DVFS2_OSC_SEL_DIS_SHIFT          2
#define MT6335_RG_VSRAM_VCORE_CK_SW_MODE_MASK            0x1
#define MT6335_RG_VSRAM_VCORE_CK_SW_MODE_SHIFT           0
#define MT6335_RG_VSRAM_VCORE_CK_SW_EN_MASK              0x1
#define MT6335_RG_VSRAM_VCORE_CK_SW_EN_SHIFT             1
#define MT6335_RG_VSRAM_VCORE_OSC_SEL_DIS_MASK           0x1
#define MT6335_RG_VSRAM_VCORE_OSC_SEL_DIS_SHIFT          2
#define MT6335_RG_VSRAM_VGPU_CK_SW_MODE_MASK             0x1
#define MT6335_RG_VSRAM_VGPU_CK_SW_MODE_SHIFT            0
#define MT6335_RG_VSRAM_VGPU_CK_SW_EN_MASK               0x1
#define MT6335_RG_VSRAM_VGPU_CK_SW_EN_SHIFT              1
#define MT6335_RG_VSRAM_VGPU_OSC_SEL_DIS_MASK            0x1
#define MT6335_RG_VSRAM_VGPU_OSC_SEL_DIS_SHIFT           2
#define MT6335_RG_VSRAM_VMD_CK_SW_MODE_MASK              0x1
#define MT6335_RG_VSRAM_VMD_CK_SW_MODE_SHIFT             0
#define MT6335_RG_VSRAM_VMD_CK_SW_EN_MASK                0x1
#define MT6335_RG_VSRAM_VMD_CK_SW_EN_SHIFT               1
#define MT6335_RG_VSRAM_VMD_OSC_SEL_DIS_MASK             0x1
#define MT6335_RG_VSRAM_VMD_OSC_SEL_DIS_SHIFT            2
#define MT6335_RG_VA18_CK_SW_MODE_MASK                   0x1
#define MT6335_RG_VA18_CK_SW_MODE_SHIFT                  0
#define MT6335_RG_VA18_CK_SW_EN_MASK                     0x1
#define MT6335_RG_VA18_CK_SW_EN_SHIFT                    1
#define MT6335_RG_VA18_OSC_SEL_DIS_MASK                  0x1
#define MT6335_RG_VA18_OSC_SEL_DIS_SHIFT                 2
#define MT6335_RG_VUSB33_CK_SW_MODE_MASK                 0x1
#define MT6335_RG_VUSB33_CK_SW_MODE_SHIFT                0
#define MT6335_RG_VUSB33_CK_SW_EN_MASK                   0x1
#define MT6335_RG_VUSB33_CK_SW_EN_SHIFT                  1
#define MT6335_RG_VUSB33_OSC_SEL_DIS_MASK                0x1
#define MT6335_RG_VUSB33_OSC_SEL_DIS_SHIFT               2
#define MT6335_RG_VEMC_CK_SW_MODE_MASK                   0x1
#define MT6335_RG_VEMC_CK_SW_MODE_SHIFT                  0
#define MT6335_RG_VEMC_CK_SW_EN_MASK                     0x1
#define MT6335_RG_VEMC_CK_SW_EN_SHIFT                    1
#define MT6335_RG_VEMC_OSC_SEL_DIS_MASK                  0x1
#define MT6335_RG_VEMC_OSC_SEL_DIS_SHIFT                 2
#define MT6335_RG_VXO22_CK_SW_MODE_MASK                  0x1
#define MT6335_RG_VXO22_CK_SW_MODE_SHIFT                 0
#define MT6335_RG_VXO22_CK_SW_EN_MASK                    0x1
#define MT6335_RG_VXO22_CK_SW_EN_SHIFT                   1
#define MT6335_RG_VXO22_OSC_SEL_DIS_MASK                 0x1
#define MT6335_RG_VXO22_OSC_SEL_DIS_SHIFT                2
#define MT6335_RG_VEFUSE_CK_SW_MODE_MASK                 0x1
#define MT6335_RG_VEFUSE_CK_SW_MODE_SHIFT                0
#define MT6335_RG_VEFUSE_CK_SW_EN_MASK                   0x1
#define MT6335_RG_VEFUSE_CK_SW_EN_SHIFT                  1
#define MT6335_RG_VEFUSE_OSC_SEL_DIS_MASK                0x1
#define MT6335_RG_VEFUSE_OSC_SEL_DIS_SHIFT               2
#define MT6335_RG_VSIM1_CK_SW_MODE_MASK                  0x1
#define MT6335_RG_VSIM1_CK_SW_MODE_SHIFT                 0
#define MT6335_RG_VSIM1_CK_SW_EN_MASK                    0x1
#define MT6335_RG_VSIM1_CK_SW_EN_SHIFT                   1
#define MT6335_RG_VSIM1_OSC_SEL_DIS_MASK                 0x1
#define MT6335_RG_VSIM1_OSC_SEL_DIS_SHIFT                2
#define MT6335_RG_VSIM2_CK_SW_MODE_MASK                  0x1
#define MT6335_RG_VSIM2_CK_SW_MODE_SHIFT                 0
#define MT6335_RG_VSIM2_CK_SW_EN_MASK                    0x1
#define MT6335_RG_VSIM2_CK_SW_EN_SHIFT                   1
#define MT6335_RG_VSIM2_OSC_SEL_DIS_MASK                 0x1
#define MT6335_RG_VSIM2_OSC_SEL_DIS_SHIFT                2
#define MT6335_RG_VCAMAF_CK_SW_MODE_MASK                 0x1
#define MT6335_RG_VCAMAF_CK_SW_MODE_SHIFT                0
#define MT6335_RG_VCAMAF_CK_SW_EN_MASK                   0x1
#define MT6335_RG_VCAMAF_CK_SW_EN_SHIFT                  1
#define MT6335_RG_VCAMAF_OSC_SEL_DIS_MASK                0x1
#define MT6335_RG_VCAMAF_OSC_SEL_DIS_SHIFT               2
#define MT6335_RG_VTOUCH_CK_SW_MODE_MASK                 0x1
#define MT6335_RG_VTOUCH_CK_SW_MODE_SHIFT                0
#define MT6335_RG_VTOUCH_CK_SW_EN_MASK                   0x1
#define MT6335_RG_VTOUCH_CK_SW_EN_SHIFT                  1
#define MT6335_RG_VTOUCH_OSC_SEL_DIS_MASK                0x1
#define MT6335_RG_VTOUCH_OSC_SEL_DIS_SHIFT               2
#define MT6335_RG_VCAMD1_CK_SW_MODE_MASK                 0x1
#define MT6335_RG_VCAMD1_CK_SW_MODE_SHIFT                0
#define MT6335_RG_VCAMD1_CK_SW_EN_MASK                   0x1
#define MT6335_RG_VCAMD1_CK_SW_EN_SHIFT                  1
#define MT6335_RG_VCAMD1_OSC_SEL_DIS_MASK                0x1
#define MT6335_RG_VCAMD1_OSC_SEL_DIS_SHIFT               2
#define MT6335_RG_VCAMD2_CK_SW_MODE_MASK                 0x1
#define MT6335_RG_VCAMD2_CK_SW_MODE_SHIFT                0
#define MT6335_RG_VCAMD2_CK_SW_EN_MASK                   0x1
#define MT6335_RG_VCAMD2_CK_SW_EN_SHIFT                  1
#define MT6335_RG_VCAMD2_OSC_SEL_DIS_MASK                0x1
#define MT6335_RG_VCAMD2_OSC_SEL_DIS_SHIFT               2
#define MT6335_RG_VCAMIO_CK_SW_MODE_MASK                 0x1
#define MT6335_RG_VCAMIO_CK_SW_MODE_SHIFT                0
#define MT6335_RG_VCAMIO_CK_SW_EN_MASK                   0x1
#define MT6335_RG_VCAMIO_CK_SW_EN_SHIFT                  1
#define MT6335_RG_VCAMIO_OSC_SEL_DIS_MASK                0x1
#define MT6335_RG_VCAMIO_OSC_SEL_DIS_SHIFT               2
#define MT6335_RG_VMIPI_CK_SW_MODE_MASK                  0x1
#define MT6335_RG_VMIPI_CK_SW_MODE_SHIFT                 0
#define MT6335_RG_VMIPI_CK_SW_EN_MASK                    0x1
#define MT6335_RG_VMIPI_CK_SW_EN_SHIFT                   1
#define MT6335_RG_VMIPI_OSC_SEL_DIS_MASK                 0x1
#define MT6335_RG_VMIPI_OSC_SEL_DIS_SHIFT                2
#define MT6335_RG_VGP3_CK_SW_MODE_MASK                   0x1
#define MT6335_RG_VGP3_CK_SW_MODE_SHIFT                  0
#define MT6335_RG_VGP3_CK_SW_EN_MASK                     0x1
#define MT6335_RG_VGP3_CK_SW_EN_SHIFT                    1
#define MT6335_RG_VGP3_OSC_SEL_DIS_MASK                  0x1
#define MT6335_RG_VGP3_OSC_SEL_DIS_SHIFT                 2
#define MT6335_RG_VCN33_CK_SW_MODE_MASK                  0x1
#define MT6335_RG_VCN33_CK_SW_MODE_SHIFT                 0
#define MT6335_RG_VCN33_CK_SW_EN_MASK                    0x1
#define MT6335_RG_VCN33_CK_SW_EN_SHIFT                   1
#define MT6335_RG_VCN33_OSC_SEL_DIS_MASK                 0x1
#define MT6335_RG_VCN33_OSC_SEL_DIS_SHIFT                2
#define MT6335_RG_VCN18_CK_SW_MODE_MASK                  0x1
#define MT6335_RG_VCN18_CK_SW_MODE_SHIFT                 0
#define MT6335_RG_VCN18_CK_SW_EN_MASK                    0x1
#define MT6335_RG_VCN18_CK_SW_EN_SHIFT                   1
#define MT6335_RG_VCN18_OSC_SEL_DIS_MASK                 0x1
#define MT6335_RG_VCN18_OSC_SEL_DIS_SHIFT                2
#define MT6335_RG_VCN28_CK_SW_MODE_MASK                  0x1
#define MT6335_RG_VCN28_CK_SW_MODE_SHIFT                 0
#define MT6335_RG_VCN28_CK_SW_EN_MASK                    0x1
#define MT6335_RG_VCN28_CK_SW_EN_SHIFT                   1
#define MT6335_RG_VCN28_OSC_SEL_DIS_MASK                 0x1
#define MT6335_RG_VCN28_OSC_SEL_DIS_SHIFT                2
#define MT6335_RG_VIBR_CK_SW_MODE_MASK                   0x1
#define MT6335_RG_VIBR_CK_SW_MODE_SHIFT                  0
#define MT6335_RG_VIBR_CK_SW_EN_MASK                     0x1
#define MT6335_RG_VIBR_CK_SW_EN_SHIFT                    1
#define MT6335_RG_VIBR_OSC_SEL_DIS_MASK                  0x1
#define MT6335_RG_VIBR_OSC_SEL_DIS_SHIFT                 2
#define MT6335_RG_VBIF28_CK_SW_MODE_MASK                 0x1
#define MT6335_RG_VBIF28_CK_SW_MODE_SHIFT                0
#define MT6335_RG_VBIF28_CK_SW_EN_MASK                   0x1
#define MT6335_RG_VBIF28_CK_SW_EN_SHIFT                  1
#define MT6335_RG_VBIF28_OSC_SEL_DIS_MASK                0x1
#define MT6335_RG_VBIF28_OSC_SEL_DIS_SHIFT               2
#define MT6335_RG_VFE28_CK_SW_MODE_MASK                  0x1
#define MT6335_RG_VFE28_CK_SW_MODE_SHIFT                 0
#define MT6335_RG_VFE28_CK_SW_EN_MASK                    0x1
#define MT6335_RG_VFE28_CK_SW_EN_SHIFT                   1
#define MT6335_RG_VFE28_OSC_SEL_DIS_MASK                 0x1
#define MT6335_RG_VFE28_OSC_SEL_DIS_SHIFT                2
#define MT6335_RG_VMCH_CK_SW_MODE_MASK                   0x1
#define MT6335_RG_VMCH_CK_SW_MODE_SHIFT                  0
#define MT6335_RG_VMCH_CK_SW_EN_MASK                     0x1
#define MT6335_RG_VMCH_CK_SW_EN_SHIFT                    1
#define MT6335_RG_VMCH_OSC_SEL_DIS_MASK                  0x1
#define MT6335_RG_VMCH_OSC_SEL_DIS_SHIFT                 2
#define MT6335_RG_VMC_CK_SW_MODE_MASK                    0x1
#define MT6335_RG_VMC_CK_SW_MODE_SHIFT                   0
#define MT6335_RG_VMC_CK_SW_EN_MASK                      0x1
#define MT6335_RG_VMC_CK_SW_EN_SHIFT                     1
#define MT6335_RG_VMC_OSC_SEL_DIS_MASK                   0x1
#define MT6335_RG_VMC_OSC_SEL_DIS_SHIFT                  2
#define MT6335_RG_VRF18_1_CK_SW_MODE_MASK                0x1
#define MT6335_RG_VRF18_1_CK_SW_MODE_SHIFT               0
#define MT6335_RG_VRF18_1_CK_SW_EN_MASK                  0x1
#define MT6335_RG_VRF18_1_CK_SW_EN_SHIFT                 1
#define MT6335_RG_VRF18_1_OSC_SEL_DIS_MASK               0x1
#define MT6335_RG_VRF18_1_OSC_SEL_DIS_SHIFT              2
#define MT6335_RG_VRF18_2_CK_SW_MODE_MASK                0x1
#define MT6335_RG_VRF18_2_CK_SW_MODE_SHIFT               0
#define MT6335_RG_VRF18_2_CK_SW_EN_MASK                  0x1
#define MT6335_RG_VRF18_2_CK_SW_EN_SHIFT                 1
#define MT6335_RG_VRF18_2_OSC_SEL_DIS_MASK               0x1
#define MT6335_RG_VRF18_2_OSC_SEL_DIS_SHIFT              2
#define MT6335_RG_VRF12_CK_SW_MODE_MASK                  0x1
#define MT6335_RG_VRF12_CK_SW_MODE_SHIFT                 0
#define MT6335_RG_VRF12_CK_SW_EN_MASK                    0x1
#define MT6335_RG_VRF12_CK_SW_EN_SHIFT                   1
#define MT6335_RG_VRF12_OSC_SEL_DIS_MASK                 0x1
#define MT6335_RG_VRF12_OSC_SEL_DIS_SHIFT                2
#define MT6335_RG_VCAMA1_CK_SW_MODE_MASK                 0x1
#define MT6335_RG_VCAMA1_CK_SW_MODE_SHIFT                0
#define MT6335_RG_VCAMA1_CK_SW_EN_MASK                   0x1
#define MT6335_RG_VCAMA1_CK_SW_EN_SHIFT                  1
#define MT6335_RG_VCAMA1_OSC_SEL_DIS_MASK                0x1
#define MT6335_RG_VCAMA1_OSC_SEL_DIS_SHIFT               2
#define MT6335_RG_VCAMA2_CK_SW_MODE_MASK                 0x1
#define MT6335_RG_VCAMA2_CK_SW_MODE_SHIFT                0
#define MT6335_RG_VCAMA2_CK_SW_EN_MASK                   0x1
#define MT6335_RG_VCAMA2_CK_SW_EN_SHIFT                  1
#define MT6335_RG_VCAMA2_OSC_SEL_DIS_MASK                0x1
#define MT6335_RG_VCAMA2_OSC_SEL_DIS_SHIFT               2
#define MT6335_RG_VSRAM_DVFS1_SP_SW_VOSEL_EN_MASK        0x1
#define MT6335_RG_VSRAM_DVFS1_SP_SW_VOSEL_EN_SHIFT       0
#define MT6335_RG_VSRAM_DVFS1_SP_SW_VOSEL_MASK           0x7F
#define MT6335_RG_VSRAM_DVFS1_SP_SW_VOSEL_SHIFT          1
#define MT6335_RG_VSRAM_DVFS2_SP_SW_VOSEL_EN_MASK        0x1
#define MT6335_RG_VSRAM_DVFS2_SP_SW_VOSEL_EN_SHIFT       0
#define MT6335_RG_VSRAM_DVFS2_SP_SW_VOSEL_MASK           0x7F
#define MT6335_RG_VSRAM_DVFS2_SP_SW_VOSEL_SHIFT          1
#define MT6335_RG_VSRAM_VGPU_SP_SW_VOSEL_EN_MASK         0x1
#define MT6335_RG_VSRAM_VGPU_SP_SW_VOSEL_EN_SHIFT        0
#define MT6335_RG_VSRAM_VGPU_SP_SW_VOSEL_MASK            0x7F
#define MT6335_RG_VSRAM_VGPU_SP_SW_VOSEL_SHIFT           1
#define MT6335_RG_VSRAM_VMD_SP_SW_VOSEL_EN_MASK          0x1
#define MT6335_RG_VSRAM_VMD_SP_SW_VOSEL_EN_SHIFT         0
#define MT6335_RG_VSRAM_VMD_SP_SW_VOSEL_MASK             0x7F
#define MT6335_RG_VSRAM_VMD_SP_SW_VOSEL_SHIFT            1
#define MT6335_RG_VSRAM_VCORE_SP_SW_VOSEL_EN_MASK        0x1
#define MT6335_RG_VSRAM_VCORE_SP_SW_VOSEL_EN_SHIFT       0
#define MT6335_RG_VSRAM_VCORE_SP_SW_VOSEL_MASK           0x7F
#define MT6335_RG_VSRAM_VCORE_SP_SW_VOSEL_SHIFT          1
#define MT6335_RG_VSRAM_VCORE_SSHUB_ON_MASK              0x1
#define MT6335_RG_VSRAM_VCORE_SSHUB_ON_SHIFT             0
#define MT6335_RG_VSRAM_VCORE_SSHUB_MODE_MASK            0x1
#define MT6335_RG_VSRAM_VCORE_SSHUB_MODE_SHIFT           1
#define MT6335_RG_VSRAM_VCORE_SSHUB_VOSEL_MASK           0x7F
#define MT6335_RG_VSRAM_VCORE_SSHUB_VOSEL_SHIFT          2
#define MT6335_RG_ALDO_1_RESEV_MASK                      0x7F
#define MT6335_RG_ALDO_1_RESEV_SHIFT                     0
#define MT6335_RG_VFE28_CAL_MASK                         0xF
#define MT6335_RG_VFE28_CAL_SHIFT                        8
#define MT6335_RG_VFE28_VOSEL_MASK                       0x3
#define MT6335_RG_VFE28_VOSEL_SHIFT                      0
#define MT6335_RG_VFE28_NDIS_EN_MASK                     0x1
#define MT6335_RG_VFE28_NDIS_EN_SHIFT                    3
#define MT6335_RG_VBIF28_CAL_MASK                        0xF
#define MT6335_RG_VBIF28_CAL_SHIFT                       4
#define MT6335_RG_VBIF28_VOSEL_MASK                      0x3
#define MT6335_RG_VBIF28_VOSEL_SHIFT                     12
#define MT6335_RG_VBIF28_NDIS_EN_MASK                    0x1
#define MT6335_RG_VBIF28_NDIS_EN_SHIFT                   15
#define MT6335_RG_VCN28_CAL_MASK                         0xF
#define MT6335_RG_VCN28_CAL_SHIFT                        0
#define MT6335_RG_VCN28_VOSEL_MASK                       0x3
#define MT6335_RG_VCN28_VOSEL_SHIFT                      8
#define MT6335_RG_VCN28_NDIS_EN_MASK                     0x1
#define MT6335_RG_VCN28_NDIS_EN_SHIFT                    11
#define MT6335_RG_VXO22_CAL_MASK                         0xF
#define MT6335_RG_VXO22_CAL_SHIFT                        12
#define MT6335_RG_VXO22_VOSEL_MASK                       0x3
#define MT6335_RG_VXO22_VOSEL_SHIFT                      4
#define MT6335_RG_VXO22_NDIS_EN_MASK                     0x1
#define MT6335_RG_VXO22_NDIS_EN_SHIFT                    7
#define MT6335_RG_VA18_CAL_MASK                          0xF
#define MT6335_RG_VA18_CAL_SHIFT                         8
#define MT6335_RG_VA18_VOSEL_MASK                        0x3
#define MT6335_RG_VA18_VOSEL_SHIFT                       0
#define MT6335_RG_VA18_NDIS_EN_MASK                      0x1
#define MT6335_RG_VA18_NDIS_EN_SHIFT                     3
#define MT6335_RG_ALDO_2_RESEV_MASK                      0x7F
#define MT6335_RG_ALDO_2_RESEV_SHIFT                     0
#define MT6335_RG_VCAMAF_CAL_MASK                        0x1F
#define MT6335_RG_VCAMAF_CAL_SHIFT                       8
#define MT6335_RG_VCAMAF_NDIS_EN_MASK                    0x1
#define MT6335_RG_VCAMAF_NDIS_EN_SHIFT                   8
#define MT6335_RG_VCAMAF_OC_TRIM_MASK                    0x3F
#define MT6335_RG_VCAMAF_OC_TRIM_SHIFT                   9
#define MT6335_RG_VCAMAF_N2LP_EHC_V18_MASK               0x1
#define MT6335_RG_VCAMAF_N2LP_EHC_V18_SHIFT              15
#define MT6335_RG_VCAMA1_CAL_MASK                        0xF
#define MT6335_RG_VCAMA1_CAL_SHIFT                       0
#define MT6335_RG_VCAMA1_VOSEL_MASK                      0x7
#define MT6335_RG_VCAMA1_VOSEL_SHIFT                     8
#define MT6335_RG_VCAMA1_NDIS_EN_MASK                    0x1
#define MT6335_RG_VCAMA1_NDIS_EN_SHIFT                   5
#define MT6335_RG_VCAMA1_FBSEL_MASK                      0x3
#define MT6335_RG_VCAMA1_FBSEL_SHIFT                     6
#define MT6335_RG_VCAMA2_CAL_MASK                        0xF
#define MT6335_RG_VCAMA2_CAL_SHIFT                       8
#define MT6335_RG_VCAMA2_VOSEL_MASK                      0x7
#define MT6335_RG_VCAMA2_VOSEL_SHIFT                     0
#define MT6335_RG_VCAMA2_NDIS_EN_MASK                    0x1
#define MT6335_RG_VCAMA2_NDIS_EN_SHIFT                   13
#define MT6335_RG_VCAMA2_FBSEL_MASK                      0x3
#define MT6335_RG_VCAMA2_FBSEL_SHIFT                     14
#define MT6335_RG_DLDO_RESEV_MASK                        0xFF
#define MT6335_RG_DLDO_RESEV_SHIFT                       0
#define MT6335_RG_VMC_CAL_MASK                           0x1F
#define MT6335_RG_VMC_CAL_SHIFT                          8
#define MT6335_RG_VMC_VOSEL_MASK                         0x7
#define MT6335_RG_VMC_VOSEL_SHIFT                        0
#define MT6335_RG_VMC_NDIS_EN_MASK                       0x1
#define MT6335_RG_VMC_NDIS_EN_SHIFT                      8
#define MT6335_RG_VMC_OC_TRIM_MASK                       0x3F
#define MT6335_RG_VMC_OC_TRIM_SHIFT                      9
#define MT6335_RG_VMC_N2LP_EHC_V18_MASK                  0x1
#define MT6335_RG_VMC_N2LP_EHC_V18_SHIFT                 15
#define MT6335_RG_VCN33_CAL_MASK                         0x1F
#define MT6335_RG_VCN33_CAL_SHIFT                        0
#define MT6335_RG_VCN33_VOSEL_MASK                       0x3
#define MT6335_RG_VCN33_VOSEL_SHIFT                      9
#define MT6335_RG_VCN33_NDIS_EN_MASK                     0x1
#define MT6335_RG_VCN33_NDIS_EN_SHIFT                    6
#define MT6335_RG_VCN33_N2LP_EHC_V18_MASK                0x1
#define MT6335_RG_VCN33_N2LP_EHC_V18_SHIFT               7
#define MT6335_RG_VSIM1_CAL_MASK                         0xF
#define MT6335_RG_VSIM1_CAL_SHIFT                        8
#define MT6335_RG_VSIM1_VOSEL_MASK                       0xF
#define MT6335_RG_VSIM1_VOSEL_SHIFT                      0
#define MT6335_RG_VSIM1_NDIS_EN_MASK                     0x1
#define MT6335_RG_VSIM1_NDIS_EN_SHIFT                    13
#define MT6335_RG_VSIM1_STB_CAL_MASK                     0x3
#define MT6335_RG_VSIM1_STB_CAL_SHIFT                    14
#define MT6335_RG_VSIM1_STB_SEL_MASK                     0x1
#define MT6335_RG_VSIM1_STB_SEL_SHIFT                    0
#define MT6335_RG_VSIM1_OC_TRIM_MASK                     0xF
#define MT6335_RG_VSIM1_OC_TRIM_SHIFT                    1
#define MT6335_RG_VSIM1_NDIS_EN_INT_MASK                 0x1
#define MT6335_RG_VSIM1_NDIS_EN_INT_SHIFT                5
#define MT6335_RG_VSIM1_LP_HIGH_SPEED_ENB_MASK           0x1
#define MT6335_RG_VSIM1_LP_HIGH_SPEED_ENB_SHIFT          7
#define MT6335_RG_VEMC_CAL_MASK                          0x1F
#define MT6335_RG_VEMC_CAL_SHIFT                         8
#define MT6335_RG_VEMC_VOSEL_MASK                        0x7
#define MT6335_RG_VEMC_VOSEL_SHIFT                       0
#define MT6335_RG_VEMC_NDIS_EN_MASK                      0x1
#define MT6335_RG_VEMC_NDIS_EN_SHIFT                     8
#define MT6335_RG_VEMC_OC_TRIM_MASK                      0x3F
#define MT6335_RG_VEMC_OC_TRIM_SHIFT                     9
#define MT6335_RG_VEMC_N2LP_EHC_V18_MASK                 0x1
#define MT6335_RG_VEMC_N2LP_EHC_V18_SHIFT                15
#define MT6335_RG_VUSB33_CAL_MASK                        0xF
#define MT6335_RG_VUSB33_CAL_SHIFT                       0
#define MT6335_RG_VUSB33_NDIS_EN_MASK                    0x1
#define MT6335_RG_VUSB33_NDIS_EN_SHIFT                   9
#define MT6335_RG_VUSB33_OC_TRIM_MASK                    0x3F
#define MT6335_RG_VUSB33_OC_TRIM_SHIFT                   10
#define MT6335_RG_VIBR_CAL_MASK                          0xF
#define MT6335_RG_VIBR_CAL_SHIFT                         0
#define MT6335_RG_VIBR_VOSEL_MASK                        0x7
#define MT6335_RG_VIBR_VOSEL_SHIFT                       8
#define MT6335_RG_VIBR_NDIS_EN_MASK                      0x1
#define MT6335_RG_VIBR_NDIS_EN_SHIFT                     6
#define MT6335_RG_VIBR_LP_HIGH_SPEED_ENB_MASK            0x1
#define MT6335_RG_VIBR_LP_HIGH_SPEED_ENB_SHIFT           7
#define MT6335_RG_VTOUCH_CAL_MASK                        0x1F
#define MT6335_RG_VTOUCH_CAL_SHIFT                       8
#define MT6335_RG_VTOUCH_NDIS_EN_MASK                    0x1
#define MT6335_RG_VTOUCH_NDIS_EN_SHIFT                   8
#define MT6335_RG_VTOUCH_OC_TRIM_MASK                    0x3F
#define MT6335_RG_VTOUCH_OC_TRIM_SHIFT                   9
#define MT6335_RG_VTOUCH_N2LP_EHC_V18_MASK               0x1
#define MT6335_RG_VTOUCH_N2LP_EHC_V18_SHIFT              15
#define MT6335_RG_VEFUSE_CAL_MASK                        0xF
#define MT6335_RG_VEFUSE_CAL_SHIFT                       0
#define MT6335_RG_VEFUSE_VOSEL_MASK                      0xF
#define MT6335_RG_VEFUSE_VOSEL_SHIFT                     8
#define MT6335_RG_VEFUSE_NDIS_EN_MASK                    0x1
#define MT6335_RG_VEFUSE_NDIS_EN_SHIFT                   1
#define MT6335_RG_VEFUSE_STB_CAL_MASK                    0x3
#define MT6335_RG_VEFUSE_STB_CAL_SHIFT                   6
#define MT6335_RG_VEFUSE_STB_SEL_MASK                    0x1
#define MT6335_RG_VEFUSE_STB_SEL_SHIFT                   8
#define MT6335_RG_VEFUSE_OC_TRIM_MASK                    0xF
#define MT6335_RG_VEFUSE_OC_TRIM_SHIFT                   9
#define MT6335_RG_VEFUSE_NDIS_EN_INT_MASK                0x1
#define MT6335_RG_VEFUSE_NDIS_EN_INT_SHIFT               13
#define MT6335_RG_VEFUSE_LP_HIGH_SPEED_ENB_MASK          0x1
#define MT6335_RG_VEFUSE_LP_HIGH_SPEED_ENB_SHIFT         15
#define MT6335_RG_VIO28_CAL_MASK                         0xF
#define MT6335_RG_VIO28_CAL_SHIFT                        0
#define MT6335_RG_VIO28_VOSEL_MASK                       0x7
#define MT6335_RG_VIO28_VOSEL_SHIFT                      8
#define MT6335_RG_VIO28_NDIS_EN_MASK                     0x1
#define MT6335_RG_VIO28_NDIS_EN_SHIFT                    6
#define MT6335_RG_VIO28_LP_HIGH_SPEED_ENB_MASK           0x1
#define MT6335_RG_VIO28_LP_HIGH_SPEED_ENB_SHIFT          7
#define MT6335_RG_VMCH_CAL_MASK                          0x1F
#define MT6335_RG_VMCH_CAL_SHIFT                         8
#define MT6335_RG_VMCH_VOSEL_MASK                        0x7
#define MT6335_RG_VMCH_VOSEL_SHIFT                       0
#define MT6335_RG_VMCH_NDIS_EN_MASK                      0x1
#define MT6335_RG_VMCH_NDIS_EN_SHIFT                     8
#define MT6335_RG_VMCH_OC_TRIM_MASK                      0x3F
#define MT6335_RG_VMCH_OC_TRIM_SHIFT                     9
#define MT6335_RG_VMCH_N2LP_EHC_V18_MASK                 0x1
#define MT6335_RG_VMCH_N2LP_EHC_V18_SHIFT                15
#define MT6335_RG_VSIM2_CAL_MASK                         0xF
#define MT6335_RG_VSIM2_CAL_SHIFT                        0
#define MT6335_RG_VSIM2_VOSEL_MASK                       0xF
#define MT6335_RG_VSIM2_VOSEL_SHIFT                      8
#define MT6335_RG_VSIM2_NDIS_EN_MASK                     0x1
#define MT6335_RG_VSIM2_NDIS_EN_SHIFT                    5
#define MT6335_RG_VSIM2_STB_CAL_MASK                     0x3
#define MT6335_RG_VSIM2_STB_CAL_SHIFT                    6
#define MT6335_RG_VSIM2_STB_SEL_MASK                     0x1
#define MT6335_RG_VSIM2_STB_SEL_SHIFT                    8
#define MT6335_RG_VSIM2_OC_TRIM_MASK                     0xF
#define MT6335_RG_VSIM2_OC_TRIM_SHIFT                    9
#define MT6335_RG_VSIM2_NDIS_EN_INT_MASK                 0x1
#define MT6335_RG_VSIM2_NDIS_EN_INT_SHIFT                13
#define MT6335_RG_VSIM2_LP_HIGH_SPEED_ENB_MASK           0x1
#define MT6335_RG_VSIM2_LP_HIGH_SPEED_ENB_SHIFT          15
#define MT6335_RG_SLDO14_RESEV_MASK                      0xFF
#define MT6335_RG_SLDO14_RESEV_SHIFT                     0
#define MT6335_RG_VSRAM_DVFS1_NDIS_EN_MASK               0x1
#define MT6335_RG_VSRAM_DVFS1_NDIS_EN_SHIFT              3
#define MT6335_RG_VSRAM_DVFS1_NDIS_PLCUR_MASK            0x3
#define MT6335_RG_VSRAM_DVFS1_NDIS_PLCUR_SHIFT           4
#define MT6335_RG_VSRAM_DVFS1_STB_SEL_MASK               0x1
#define MT6335_RG_VSRAM_DVFS1_STB_SEL_SHIFT              6
#define MT6335_RG_VSRAM_DVFS1_PLCUR_EN_MASK              0x1
#define MT6335_RG_VSRAM_DVFS1_PLCUR_EN_SHIFT             7
#define MT6335_RG_VSRAM_DVFS2_NDIS_EN_MASK               0x1
#define MT6335_RG_VSRAM_DVFS2_NDIS_EN_SHIFT              3
#define MT6335_RG_VSRAM_DVFS2_NDIS_PLCUR_MASK            0x3
#define MT6335_RG_VSRAM_DVFS2_NDIS_PLCUR_SHIFT           4
#define MT6335_RG_VSRAM_DVFS2_STB_SEL_MASK               0x1
#define MT6335_RG_VSRAM_DVFS2_STB_SEL_SHIFT              6
#define MT6335_RG_VSRAM_DVFS2_PLCUR_EN_MASK              0x1
#define MT6335_RG_VSRAM_DVFS2_PLCUR_EN_SHIFT             7
#define MT6335_RG_VSRAM_VCORE_NDIS_EN_MASK               0x1
#define MT6335_RG_VSRAM_VCORE_NDIS_EN_SHIFT              3
#define MT6335_RG_VSRAM_VCORE_NDIS_PLCUR_MASK            0x3
#define MT6335_RG_VSRAM_VCORE_NDIS_PLCUR_SHIFT           4
#define MT6335_RG_VSRAM_VCORE_STB_SEL_MASK               0x1
#define MT6335_RG_VSRAM_VCORE_STB_SEL_SHIFT              6
#define MT6335_RG_VSRAM_VCORE_PLCUR_EN_MASK              0x1
#define MT6335_RG_VSRAM_VCORE_PLCUR_EN_SHIFT             7
#define MT6335_RG_VSRAM_VGPU_NDIS_EN_MASK                0x1
#define MT6335_RG_VSRAM_VGPU_NDIS_EN_SHIFT               3
#define MT6335_RG_VSRAM_VGPU_NDIS_PLCUR_MASK             0x3
#define MT6335_RG_VSRAM_VGPU_NDIS_PLCUR_SHIFT            4
#define MT6335_RG_VSRAM_VGPU_STB_SEL_MASK                0x1
#define MT6335_RG_VSRAM_VGPU_STB_SEL_SHIFT               6
#define MT6335_RG_VSRAM_VGPU_PLCUR_EN_MASK               0x1
#define MT6335_RG_VSRAM_VGPU_PLCUR_EN_SHIFT              7
#define MT6335_RG_VSRAM_VMD_NDIS_EN_MASK                 0x1
#define MT6335_RG_VSRAM_VMD_NDIS_EN_SHIFT                3
#define MT6335_RG_VSRAM_VMD_NDIS_PLCUR_MASK              0x3
#define MT6335_RG_VSRAM_VMD_NDIS_PLCUR_SHIFT             4
#define MT6335_RG_VSRAM_VMD_STB_SEL_MASK                 0x1
#define MT6335_RG_VSRAM_VMD_STB_SEL_SHIFT                6
#define MT6335_RG_VSRAM_VMD_PLCUR_EN_MASK                0x1
#define MT6335_RG_VSRAM_VMD_PLCUR_EN_SHIFT               7
#define MT6335_RG_VA12_CAL_MASK                          0xF
#define MT6335_RG_VA12_CAL_SHIFT                         8
#define MT6335_RG_VA12_VOSEL_MASK                        0x7
#define MT6335_RG_VA12_VOSEL_SHIFT                       0
#define MT6335_RG_VA12_NDIS_EN_MASK                      0x1
#define MT6335_RG_VA12_NDIS_EN_SHIFT                     6
#define MT6335_RG_VA12_STB_SEL_MASK                      0x1
#define MT6335_RG_VA12_STB_SEL_SHIFT                     7
#define MT6335_RG_VCAMD1_CAL_MASK                        0x1F
#define MT6335_RG_VCAMD1_CAL_SHIFT                       8
#define MT6335_RG_VCAMD1_VOSEL_MASK                      0x7
#define MT6335_RG_VCAMD1_VOSEL_SHIFT                     0
#define MT6335_RG_VCAMD1_NDIS_EN_MASK                    0x1
#define MT6335_RG_VCAMD1_NDIS_EN_SHIFT                   7
#define MT6335_RG_VCAMD1_RSV_MASK                        0xFF
#define MT6335_RG_VCAMD1_RSV_SHIFT                       8
#define MT6335_RG_VCAMD1_OC_TRIM_MASK                    0xF
#define MT6335_RG_VCAMD1_OC_TRIM_SHIFT                   4
#define MT6335_RG_VA10_CAL_MASK                          0xF
#define MT6335_RG_VA10_CAL_SHIFT                         8
#define MT6335_RG_VA10_VOSEL_MASK                        0x7
#define MT6335_RG_VA10_VOSEL_SHIFT                       0
#define MT6335_RG_VA10_NDIS_EN_MASK                      0x1
#define MT6335_RG_VA10_NDIS_EN_SHIFT                     12
#define MT6335_RG_VA10_STB_SEL_MASK                      0x1
#define MT6335_RG_VA10_STB_SEL_SHIFT                     13
#define MT6335_RG_VA10_LP_VSEL_MASK                      0x1
#define MT6335_RG_VA10_LP_VSEL_SHIFT                     14
#define MT6335_RG_VA10_LP_VSEL_OPTION_MASK               0x1
#define MT6335_RG_VA10_LP_VSEL_OPTION_SHIFT              15
#define MT6335_RG_VRF12_CAL_MASK                         0xF
#define MT6335_RG_VRF12_CAL_SHIFT                        0
#define MT6335_RG_VRF12_VOSEL_MASK                       0x7
#define MT6335_RG_VRF12_VOSEL_SHIFT                      8
#define MT6335_RG_VRF12_NDIS_EN_MASK                     0x1
#define MT6335_RG_VRF12_NDIS_EN_SHIFT                    4
#define MT6335_RG_VRF12_FT_DNMC_EN_MASK                  0x1
#define MT6335_RG_VRF12_FT_DNMC_EN_SHIFT                 7
#define MT6335_RG_VCAMD2_CAL_MASK                        0x1F
#define MT6335_RG_VCAMD2_CAL_SHIFT                       8
#define MT6335_RG_VCAMD2_VOSEL_MASK                      0x7
#define MT6335_RG_VCAMD2_VOSEL_SHIFT                     0
#define MT6335_RG_VCAMD2_NDIS_EN_MASK                    0x1
#define MT6335_RG_VCAMD2_NDIS_EN_SHIFT                   7
#define MT6335_RG_VCAMD2_RSV_MASK                        0xFF
#define MT6335_RG_VCAMD2_RSV_SHIFT                       8
#define MT6335_RG_VCAMD2_OC_TRIM_MASK                    0xF
#define MT6335_RG_VCAMD2_OC_TRIM_SHIFT                   4
#define MT6335_RG_SLDO20_RESEV_MASK                      0x3F
#define MT6335_RG_SLDO20_RESEV_SHIFT                     0
#define MT6335_RG_VRF18_1_CAL_MASK                       0xF
#define MT6335_RG_VRF18_1_CAL_SHIFT                      8
#define MT6335_RG_VRF18_1_VOSEL_MASK                     0x7
#define MT6335_RG_VRF18_1_VOSEL_SHIFT                    0
#define MT6335_RG_VRF18_1_NDIS_EN_MASK                   0x1
#define MT6335_RG_VRF18_1_NDIS_EN_SHIFT                  14
#define MT6335_RG_VRF18_1_FT_DNMC_EN_MASK                0x1
#define MT6335_RG_VRF18_1_FT_DNMC_EN_SHIFT               15
#define MT6335_RG_VRF18_2_CAL_MASK                       0xF
#define MT6335_RG_VRF18_2_CAL_SHIFT                      0
#define MT6335_RG_VRF18_2_VOSEL_MASK                     0x7
#define MT6335_RG_VRF18_2_VOSEL_SHIFT                    8
#define MT6335_RG_VRF18_2_NDIS_EN_MASK                   0x1
#define MT6335_RG_VRF18_2_NDIS_EN_SHIFT                  0
#define MT6335_RG_VRF18_2_FT_DNMC_EN_MASK                0x1
#define MT6335_RG_VRF18_2_FT_DNMC_EN_SHIFT               7
#define MT6335_RG_VCN18_CAL_MASK                         0xF
#define MT6335_RG_VCN18_CAL_SHIFT                        8
#define MT6335_RG_VCN18_VOSEL_MASK                       0x7
#define MT6335_RG_VCN18_VOSEL_SHIFT                      0
#define MT6335_RG_VCN18_NDIS_EN_MASK                     0x1
#define MT6335_RG_VCN18_NDIS_EN_SHIFT                    14
#define MT6335_RG_VCN18_STB_SEL_MASK                     0x1
#define MT6335_RG_VCN18_STB_SEL_SHIFT                    15
#define MT6335_RG_VMIPI_CAL_MASK                         0xF
#define MT6335_RG_VMIPI_CAL_SHIFT                        0
#define MT6335_RG_VMIPI_VOSEL_MASK                       0x7
#define MT6335_RG_VMIPI_VOSEL_SHIFT                      8
#define MT6335_RG_VMIPI_NDIS_EN_MASK                     0x1
#define MT6335_RG_VMIPI_NDIS_EN_SHIFT                    6
#define MT6335_RG_VMIPI_STB_SEL_MASK                     0x1
#define MT6335_RG_VMIPI_STB_SEL_SHIFT                    7
#define MT6335_RG_VIO18_CAL_MASK                         0xF
#define MT6335_RG_VIO18_CAL_SHIFT                        8
#define MT6335_RG_VIO18_NDIS_EN_MASK                     0x1
#define MT6335_RG_VIO18_NDIS_EN_SHIFT                    14
#define MT6335_RG_VIO18_FT_DNMC_EN_MASK                  0x1
#define MT6335_RG_VIO18_FT_DNMC_EN_SHIFT                 15
#define MT6335_RG_VCAMIO_CAL_MASK                        0xF
#define MT6335_RG_VCAMIO_CAL_SHIFT                       0
#define MT6335_RG_VCAMIO_VOSEL_MASK                      0x7
#define MT6335_RG_VCAMIO_VOSEL_SHIFT                     8
#define MT6335_RG_VCAMIO_NDIS_EN_MASK                    0x1
#define MT6335_RG_VCAMIO_NDIS_EN_SHIFT                   6
#define MT6335_RG_VCAMIO_STB_SEL_MASK                    0x1
#define MT6335_RG_VCAMIO_STB_SEL_SHIFT                   7
#define MT6335_RG_VUFS18_CAL_MASK                        0xF
#define MT6335_RG_VUFS18_CAL_SHIFT                       8
#define MT6335_RG_VUFS18_NDIS_EN_MASK                    0x1
#define MT6335_RG_VUFS18_NDIS_EN_SHIFT                   14
#define MT6335_RG_VUFS18_FT_DNMC_EN_MASK                 0x1
#define MT6335_RG_VUFS18_FT_DNMC_EN_SHIFT                15
#define MT6335_RG_VGP3_CAL_MASK                          0xF
#define MT6335_RG_VGP3_CAL_SHIFT                         0
#define MT6335_RG_VGP3_VOSEL_MASK                        0x7
#define MT6335_RG_VGP3_VOSEL_SHIFT                       8
#define MT6335_RG_VGP3_NDIS_EN_MASK                      0x1
#define MT6335_RG_VGP3_NDIS_EN_SHIFT                     6
#define MT6335_RG_VGP3_FT_DNMC_EN_MASK                   0x1
#define MT6335_RG_VGP3_FT_DNMC_EN_SHIFT                  7
#define MT6335_BIF_COMMAND_0_MASK                        0x7FF
#define MT6335_BIF_COMMAND_0_SHIFT                       0
#define MT6335_BIF_COMMAND_1_MASK                        0x7FF
#define MT6335_BIF_COMMAND_1_SHIFT                       0
#define MT6335_BIF_COMMAND_2_MASK                        0x7FF
#define MT6335_BIF_COMMAND_2_SHIFT                       0
#define MT6335_BIF_COMMAND_3_MASK                        0x7FF
#define MT6335_BIF_COMMAND_3_SHIFT                       0
#define MT6335_BIF_COMMAND_4_MASK                        0x7FF
#define MT6335_BIF_COMMAND_4_SHIFT                       0
#define MT6335_BIF_COMMAND_5_MASK                        0x7FF
#define MT6335_BIF_COMMAND_5_SHIFT                       0
#define MT6335_BIF_COMMAND_6_MASK                        0x7FF
#define MT6335_BIF_COMMAND_6_SHIFT                       0
#define MT6335_BIF_COMMAND_7_MASK                        0x7FF
#define MT6335_BIF_COMMAND_7_SHIFT                       0
#define MT6335_BIF_COMMAND_8_MASK                        0x7FF
#define MT6335_BIF_COMMAND_8_SHIFT                       0
#define MT6335_BIF_COMMAND_9_MASK                        0x7FF
#define MT6335_BIF_COMMAND_9_SHIFT                       0
#define MT6335_BIF_COMMAND_10_MASK                       0x7FF
#define MT6335_BIF_COMMAND_10_SHIFT                      0
#define MT6335_BIF_COMMAND_11_MASK                       0x7FF
#define MT6335_BIF_COMMAND_11_SHIFT                      0
#define MT6335_BIF_COMMAND_12_MASK                       0x7FF
#define MT6335_BIF_COMMAND_12_SHIFT                      0
#define MT6335_BIF_COMMAND_13_MASK                       0x7FF
#define MT6335_BIF_COMMAND_13_SHIFT                      0
#define MT6335_BIF_COMMAND_14_MASK                       0x7FF
#define MT6335_BIF_COMMAND_14_SHIFT                      0
#define MT6335_BIF_RSV_MASK                              0x7F
#define MT6335_BIF_RSV_SHIFT                             0
#define MT6335_BIF_COMMAND_TYPE_MASK                     0x3
#define MT6335_BIF_COMMAND_TYPE_SHIFT                    8
#define MT6335_BIF_TRASFER_NUM_MASK                      0xF
#define MT6335_BIF_TRASFER_NUM_SHIFT                     12
#define MT6335_BIF_LOGIC_0_SET_MASK                      0xF
#define MT6335_BIF_LOGIC_0_SET_SHIFT                     0
#define MT6335_BIF_LOGIC_1_SET_MASK                      0x1F
#define MT6335_BIF_LOGIC_1_SET_SHIFT                     4
#define MT6335_BIF_STOP_SET_MASK                         0x3F
#define MT6335_BIF_STOP_SET_SHIFT                        10
#define MT6335_BIF_DEBOUNCE_EN_MASK                      0x1
#define MT6335_BIF_DEBOUNCE_EN_SHIFT                     4
#define MT6335_BIF_READ_EXPECT_NUM_MASK                  0xF
#define MT6335_BIF_READ_EXPECT_NUM_SHIFT                 12
#define MT6335_BIF_TRASACT_TRIGGER_MASK                  0x1
#define MT6335_BIF_TRASACT_TRIGGER_SHIFT                 0
#define MT6335_BIF_DATA_NUM_MASK                         0xF
#define MT6335_BIF_DATA_NUM_SHIFT                        0
#define MT6335_BIF_RESPONSE_MASK                         0x1
#define MT6335_BIF_RESPONSE_SHIFT                        12
#define MT6335_BIF_DATA_0_MASK                           0xFF
#define MT6335_BIF_DATA_0_SHIFT                          0
#define MT6335_BIF_ACK_0_MASK                            0x1
#define MT6335_BIF_ACK_0_SHIFT                           8
#define MT6335_BIF_ERROR_0_MASK                          0x1
#define MT6335_BIF_ERROR_0_SHIFT                         15
#define MT6335_BIF_DATA_1_MASK                           0xFF
#define MT6335_BIF_DATA_1_SHIFT                          0
#define MT6335_BIF_ACK_1_MASK                            0x1
#define MT6335_BIF_ACK_1_SHIFT                           8
#define MT6335_BIF_ERROR_1_MASK                          0x1
#define MT6335_BIF_ERROR_1_SHIFT                         15
#define MT6335_BIF_DATA_2_MASK                           0xFF
#define MT6335_BIF_DATA_2_SHIFT                          0
#define MT6335_BIF_ACK_2_MASK                            0x1
#define MT6335_BIF_ACK_2_SHIFT                           8
#define MT6335_BIF_ERROR_2_MASK                          0x1
#define MT6335_BIF_ERROR_2_SHIFT                         15
#define MT6335_BIF_DATA_3_MASK                           0xFF
#define MT6335_BIF_DATA_3_SHIFT                          0
#define MT6335_BIF_ACK_3_MASK                            0x1
#define MT6335_BIF_ACK_3_SHIFT                           8
#define MT6335_BIF_ERROR_3_MASK                          0x1
#define MT6335_BIF_ERROR_3_SHIFT                         15
#define MT6335_BIF_DATA_4_MASK                           0xFF
#define MT6335_BIF_DATA_4_SHIFT                          0
#define MT6335_BIF_ACK_4_MASK                            0x1
#define MT6335_BIF_ACK_4_SHIFT                           8
#define MT6335_BIF_ERROR_4_MASK                          0x1
#define MT6335_BIF_ERROR_4_SHIFT                         15
#define MT6335_BIF_DATA_5_MASK                           0xFF
#define MT6335_BIF_DATA_5_SHIFT                          0
#define MT6335_BIF_ACK_5_MASK                            0x1
#define MT6335_BIF_ACK_5_SHIFT                           8
#define MT6335_BIF_ERROR_5_MASK                          0x1
#define MT6335_BIF_ERROR_5_SHIFT                         15
#define MT6335_BIF_DATA_6_MASK                           0xFF
#define MT6335_BIF_DATA_6_SHIFT                          0
#define MT6335_BIF_ACK_6_MASK                            0x1
#define MT6335_BIF_ACK_6_SHIFT                           8
#define MT6335_BIF_ERROR_6_MASK                          0x1
#define MT6335_BIF_ERROR_6_SHIFT                         15
#define MT6335_BIF_DATA_7_MASK                           0xFF
#define MT6335_BIF_DATA_7_SHIFT                          0
#define MT6335_BIF_ACK_7_MASK                            0x1
#define MT6335_BIF_ACK_7_SHIFT                           8
#define MT6335_BIF_ERROR_7_MASK                          0x1
#define MT6335_BIF_ERROR_7_SHIFT                         15
#define MT6335_BIF_DATA_8_MASK                           0xFF
#define MT6335_BIF_DATA_8_SHIFT                          0
#define MT6335_BIF_ACK_8_MASK                            0x1
#define MT6335_BIF_ACK_8_SHIFT                           8
#define MT6335_BIF_ERROR_8_MASK                          0x1
#define MT6335_BIF_ERROR_8_SHIFT                         15
#define MT6335_BIF_DATA_9_MASK                           0xFF
#define MT6335_BIF_DATA_9_SHIFT                          0
#define MT6335_BIF_ACK_9_MASK                            0x1
#define MT6335_BIF_ACK_9_SHIFT                           8
#define MT6335_BIF_ERROR_9_MASK                          0x1
#define MT6335_BIF_ERROR_9_SHIFT                         15
#define MT6335_BIF_TEST_MODE0_MASK                       0x1
#define MT6335_BIF_TEST_MODE0_SHIFT                      0
#define MT6335_BIF_TEST_MODE1_MASK                       0x1
#define MT6335_BIF_TEST_MODE1_SHIFT                      1
#define MT6335_BIF_TEST_MODE2_MASK                       0x1
#define MT6335_BIF_TEST_MODE2_SHIFT                      2
#define MT6335_BIF_TEST_MODE3_MASK                       0x1
#define MT6335_BIF_TEST_MODE3_SHIFT                      3
#define MT6335_BIF_TEST_MODE4_MASK                       0x1
#define MT6335_BIF_TEST_MODE4_SHIFT                      4
#define MT6335_BIF_TEST_MODE5_MASK                       0x1
#define MT6335_BIF_TEST_MODE5_SHIFT                      5
#define MT6335_BIF_TEST_MODE6_MASK                       0x1
#define MT6335_BIF_TEST_MODE6_SHIFT                      6
#define MT6335_BIF_TEST_MODE7_MASK                       0x1
#define MT6335_BIF_TEST_MODE7_SHIFT                      7
#define MT6335_BIF_TEST_MODE8_MASK                       0x1
#define MT6335_BIF_TEST_MODE8_SHIFT                      8
#define MT6335_BIF_BAT_LOST_SW_MASK                      0x1
#define MT6335_BIF_BAT_LOST_SW_SHIFT                     11
#define MT6335_BIF_RX_DATA_SW_MASK                       0x1
#define MT6335_BIF_RX_DATA_SW_SHIFT                      12
#define MT6335_BIF_TX_DATA_SW_MASK                       0x1
#define MT6335_BIF_TX_DATA_SW_SHIFT                      13
#define MT6335_BIF_RX_EN_SW_MASK                         0x1
#define MT6335_BIF_RX_EN_SW_SHIFT                        14
#define MT6335_BIF_TX_EN_SW_MASK                         0x1
#define MT6335_BIF_TX_EN_SW_SHIFT                        15
#define MT6335_BIF_BACK_NORMAL_MASK                      0x1
#define MT6335_BIF_BACK_NORMAL_SHIFT                     0
#define MT6335_BIF_IRQ_CLR_MASK                          0x1
#define MT6335_BIF_IRQ_CLR_SHIFT                         1
#define MT6335_BIF_IRQ_MASK                              0x1
#define MT6335_BIF_IRQ_SHIFT                             11
#define MT6335_BIF_TIMEOUT_MASK                          0x1
#define MT6335_BIF_TIMEOUT_SHIFT                         12
#define MT6335_BIF_BAT_UNDET_MASK                        0x1
#define MT6335_BIF_BAT_UNDET_SHIFT                       13
#define MT6335_BIF_TOTAL_VALID_MASK                      0x1
#define MT6335_BIF_TOTAL_VALID_SHIFT                     14
#define MT6335_BIF_BUS_STATUS_MASK                       0x1
#define MT6335_BIF_BUS_STATUS_SHIFT                      15
#define MT6335_BIF_POWER_UP_COUNT_MASK                   0x1F
#define MT6335_BIF_POWER_UP_COUNT_SHIFT                  0
#define MT6335_BIF_POWER_UP_MASK                         0x1
#define MT6335_BIF_POWER_UP_SHIFT                        15
#define MT6335_BIF_RX_ERROR_UNKNOW_MASK                  0x1
#define MT6335_BIF_RX_ERROR_UNKNOW_SHIFT                 2
#define MT6335_BIF_RX_ERROR_INSUFF_MASK                  0x1
#define MT6335_BIF_RX_ERROR_INSUFF_SHIFT                 3
#define MT6335_BIF_RX_ERROR_LOWPHASE_MASK                0x1
#define MT6335_BIF_RX_ERROR_LOWPHASE_SHIFT               4
#define MT6335_BIF_RX_STATE_MASK                         0x7
#define MT6335_BIF_RX_STATE_SHIFT                        5
#define MT6335_BIF_FLOW_CTL_STATE_MASK                   0x3
#define MT6335_BIF_FLOW_CTL_STATE_SHIFT                  8
#define MT6335_BIF_TX_STATE_MASK                         0x3
#define MT6335_BIF_TX_STATE_SHIFT                        10
#define MT6335_AD_QI_BIF_RX_DATA_MASK                    0x1
#define MT6335_AD_QI_BIF_RX_DATA_SHIFT                   12
#define MT6335_DA_QI_BIF_RX_EN_MASK                      0x1
#define MT6335_DA_QI_BIF_RX_EN_SHIFT                     13
#define MT6335_DA_QI_BIF_TX_DATA_MASK                    0x1
#define MT6335_DA_QI_BIF_TX_DATA_SHIFT                   14
#define MT6335_DA_QI_BIF_TX_EN_MASK                      0x1
#define MT6335_DA_QI_BIF_TX_EN_SHIFT                     15
#define MT6335_BIF_TX_DATA_FIANL_MASK                    0xFFFF
#define MT6335_BIF_TX_DATA_FIANL_SHIFT                   0
#define MT6335_BIF_RX_DATA_SAMPLING_MASK                 0xFFFF
#define MT6335_BIF_RX_DATA_SAMPLING_SHIFT                0
#define MT6335_BIF_RX_DATA_RECOVERY_MASK                 0x3FFF
#define MT6335_BIF_RX_DATA_RECOVERY_SHIFT                0
#define MT6335_RG_BATON_HT_EN_MASK                       0x1
#define MT6335_RG_BATON_HT_EN_SHIFT                      14
#define MT6335_RG_BATON_HT_EN_DLY_TIME_MASK              0x1
#define MT6335_RG_BATON_HT_EN_DLY_TIME_SHIFT             15
#define MT6335_BIF_TIMEOUT_SET_MASK                      0xFFFF
#define MT6335_BIF_TIMEOUT_SET_SHIFT                     0
#define MT6335_BIF_RX_DEG_WND_MASK                       0x3FF
#define MT6335_BIF_RX_DEG_WND_SHIFT                      0
#define MT6335_BIF_RX_DEG_EN_MASK                        0x1
#define MT6335_BIF_RX_DEG_EN_SHIFT                       15
#define MT6335_BIF_RSV1_MASK                             0xFF
#define MT6335_BIF_RSV1_SHIFT                            0
#define MT6335_BIF_RSV0_MASK                             0xFF
#define MT6335_BIF_RSV0_SHIFT                            8
#define MT6335_DA_QI_BATON_HT_EN_MASK                    0x1
#define MT6335_DA_QI_BATON_HT_EN_SHIFT                   5
#define MT6335_RG_BATON_DEBOUNCE_WND_MASK                0x3
#define MT6335_RG_BATON_DEBOUNCE_WND_SHIFT               0
#define MT6335_RG_BATON_DEBOUNCE_THD_MASK                0x3
#define MT6335_RG_BATON_DEBOUNCE_THD_SHIFT               2
#define MT6335_RG_BATON_VBIF_STB_MASK                    0x1
#define MT6335_RG_BATON_VBIF_STB_SHIFT                   4
#define MT6335_RG_BATON_CHRDET_TEST_MODE_MASK            0x1
#define MT6335_RG_BATON_CHRDET_TEST_MODE_SHIFT           0
#define MT6335_RG_BATON_UNDET_TEST_MODE_MASK             0x1
#define MT6335_RG_BATON_UNDET_TEST_MODE_SHIFT            1
#define MT6335_RG_BATON_AUXADC_TEST_MODE_MASK            0x1
#define MT6335_RG_BATON_AUXADC_TEST_MODE_SHIFT           2
#define MT6335_RG_BATON_FGADC_TEST_MODE_MASK             0x1
#define MT6335_RG_BATON_FGADC_TEST_MODE_SHIFT            3
#define MT6335_RG_BATON_RTC_TEST_MODE_MASK               0x1
#define MT6335_RG_BATON_RTC_TEST_MODE_SHIFT              4
#define MT6335_RG_BATON_BIF_TEST_MODE_MASK               0x1
#define MT6335_RG_BATON_BIF_TEST_MODE_SHIFT              5
#define MT6335_RG_BATON_RSV_MASK                         0x3
#define MT6335_RG_BATON_RSV_SHIFT                        6
#define MT6335_RG_BATON_CHRDET_SW_MASK                   0x1
#define MT6335_RG_BATON_CHRDET_SW_SHIFT                  8
#define MT6335_RG_BATON_UNDET_SW_MASK                    0x1
#define MT6335_RG_BATON_UNDET_SW_SHIFT                   9
#define MT6335_RG_BATON_AUXADC_SW_MASK                   0x1
#define MT6335_RG_BATON_AUXADC_SW_SHIFT                  10
#define MT6335_RG_BATON_FGADC_SW_MASK                    0x1
#define MT6335_RG_BATON_FGADC_SW_SHIFT                   11
#define MT6335_RG_BATON_RTC_SW_MASK                      0x1
#define MT6335_RG_BATON_RTC_SW_SHIFT                     12
#define MT6335_RG_BATON_BIF_SW_MASK                      0x1
#define MT6335_RG_BATON_BIF_SW_SHIFT                     13
#define MT6335_RG_BATON_RSV_SW_MASK                      0x3
#define MT6335_RG_BATON_RSV_SW_SHIFT                     14
#define MT6335_BATON_STATUS_MASK                         0x1
#define MT6335_BATON_STATUS_SHIFT                        0
#define MT6335_BATON_AUXADC_SET_MASK                     0x1
#define MT6335_BATON_AUXADC_SET_SHIFT                    1
#define MT6335_BATON_DEB_VALID_MASK                      0x1
#define MT6335_BATON_DEB_VALID_SHIFT                     2
#define MT6335_BATON_BIF_STATUS_MASK                     0x1
#define MT6335_BATON_BIF_STATUS_SHIFT                    3
#define MT6335_BATON_RTC_STATUS_MASK                     0x1
#define MT6335_BATON_RTC_STATUS_SHIFT                    4
#define MT6335_BATON_FGADC_STATUS_MASK                   0x1
#define MT6335_BATON_FGADC_STATUS_SHIFT                  5
#define MT6335_BATON_AUXADC_TRIG_MASK                    0x1
#define MT6335_BATON_AUXADC_TRIG_SHIFT                   6
#define MT6335_BATON_CHRDET_DEB_MASK                     0x1
#define MT6335_BATON_CHRDET_DEB_SHIFT                    7
#define MT6335_BATON_IVGEN_ENB_MASK                      0x1
#define MT6335_BATON_IVGEN_ENB_SHIFT                     8
#define MT6335_BATON_VBIF28_STB_MASK                     0x1
#define MT6335_BATON_VBIF28_STB_SHIFT                    9
#define MT6335_BATON_VBIF28_EN_MASK                      0x1
#define MT6335_BATON_VBIF28_EN_SHIFT                     10
#define MT6335_BATON_RSV_0_MASK                          0x1F
#define MT6335_BATON_RSV_0_SHIFT                         11
#define MT6335_RG_BIF_BATID_SW_EN_MASK                   0x1
#define MT6335_RG_BIF_BATID_SW_EN_SHIFT                  0
#define MT6335_RG_OTP_PA_MASK                            0x3F
#define MT6335_RG_OTP_PA_SHIFT                           0
#define MT6335_RG_OTP_PDIN_MASK                          0xFF
#define MT6335_RG_OTP_PDIN_SHIFT                         0
#define MT6335_RG_OTP_PTM_MASK                           0x3
#define MT6335_RG_OTP_PTM_SHIFT                          0
#define MT6335_RG_OTP_PWE_MASK                           0x3
#define MT6335_RG_OTP_PWE_SHIFT                          0
#define MT6335_RG_OTP_PPROG_MASK                         0x1
#define MT6335_RG_OTP_PPROG_SHIFT                        0
#define MT6335_RG_OTP_PWE_SRC_MASK                       0x1
#define MT6335_RG_OTP_PWE_SRC_SHIFT                      0
#define MT6335_RG_OTP_PROG_PKEY_MASK                     0xFFFF
#define MT6335_RG_OTP_PROG_PKEY_SHIFT                    0
#define MT6335_RG_OTP_RD_PKEY_MASK                       0xFFFF
#define MT6335_RG_OTP_RD_PKEY_SHIFT                      0
#define MT6335_RG_OTP_RD_TRIG_MASK                       0x1
#define MT6335_RG_OTP_RD_TRIG_SHIFT                      0
#define MT6335_RG_RD_RDY_BYPASS_MASK                     0x1
#define MT6335_RG_RD_RDY_BYPASS_SHIFT                    0
#define MT6335_RG_SKIP_OTP_OUT_MASK                      0x1
#define MT6335_RG_SKIP_OTP_OUT_SHIFT                     0
#define MT6335_RG_OTP_RD_SW_MASK                         0x1
#define MT6335_RG_OTP_RD_SW_SHIFT                        0
#define MT6335_RG_OTP_DOUT_SW_MASK                       0xFFFF
#define MT6335_RG_OTP_DOUT_SW_SHIFT                      0
#define MT6335_RG_OTP_RD_BUSY_MASK                       0x1
#define MT6335_RG_OTP_RD_BUSY_SHIFT                      0
#define MT6335_RG_OTP_RD_ACK_MASK                        0x1
#define MT6335_RG_OTP_RD_ACK_SHIFT                       2
#define MT6335_RG_OTP_PA_SW_MASK                         0x1F
#define MT6335_RG_OTP_PA_SW_SHIFT                        0
#define MT6335_RG_OTP_DOUT_0_15_MASK                     0xFFFF
#define MT6335_RG_OTP_DOUT_0_15_SHIFT                    0
#define MT6335_RG_OTP_DOUT_16_31_MASK                    0xFFFF
#define MT6335_RG_OTP_DOUT_16_31_SHIFT                   0
#define MT6335_RG_OTP_DOUT_32_47_MASK                    0xFFFF
#define MT6335_RG_OTP_DOUT_32_47_SHIFT                   0
#define MT6335_RG_OTP_DOUT_48_63_MASK                    0xFFFF
#define MT6335_RG_OTP_DOUT_48_63_SHIFT                   0
#define MT6335_RG_OTP_DOUT_64_79_MASK                    0xFFFF
#define MT6335_RG_OTP_DOUT_64_79_SHIFT                   0
#define MT6335_RG_OTP_DOUT_80_95_MASK                    0xFFFF
#define MT6335_RG_OTP_DOUT_80_95_SHIFT                   0
#define MT6335_RG_OTP_DOUT_96_111_MASK                   0xFFFF
#define MT6335_RG_OTP_DOUT_96_111_SHIFT                  0
#define MT6335_RG_OTP_DOUT_112_127_MASK                  0xFFFF
#define MT6335_RG_OTP_DOUT_112_127_SHIFT                 0
#define MT6335_RG_OTP_DOUT_128_143_MASK                  0xFFFF
#define MT6335_RG_OTP_DOUT_128_143_SHIFT                 0
#define MT6335_RG_OTP_DOUT_144_159_MASK                  0xFFFF
#define MT6335_RG_OTP_DOUT_144_159_SHIFT                 0
#define MT6335_RG_OTP_DOUT_160_175_MASK                  0xFFFF
#define MT6335_RG_OTP_DOUT_160_175_SHIFT                 0
#define MT6335_RG_OTP_DOUT_176_191_MASK                  0xFFFF
#define MT6335_RG_OTP_DOUT_176_191_SHIFT                 0
#define MT6335_RG_OTP_DOUT_192_207_MASK                  0xFFFF
#define MT6335_RG_OTP_DOUT_192_207_SHIFT                 0
#define MT6335_RG_OTP_DOUT_208_223_MASK                  0xFFFF
#define MT6335_RG_OTP_DOUT_208_223_SHIFT                 0
#define MT6335_RG_OTP_DOUT_224_239_MASK                  0xFFFF
#define MT6335_RG_OTP_DOUT_224_239_SHIFT                 0
#define MT6335_RG_OTP_DOUT_240_255_MASK                  0xFFFF
#define MT6335_RG_OTP_DOUT_240_255_SHIFT                 0
#define MT6335_RG_OTP_DOUT_256_271_MASK                  0xFFFF
#define MT6335_RG_OTP_DOUT_256_271_SHIFT                 0
#define MT6335_RG_OTP_DOUT_272_287_MASK                  0xFFFF
#define MT6335_RG_OTP_DOUT_272_287_SHIFT                 0
#define MT6335_RG_OTP_DOUT_288_303_MASK                  0xFFFF
#define MT6335_RG_OTP_DOUT_288_303_SHIFT                 0
#define MT6335_RG_OTP_DOUT_304_319_MASK                  0xFFFF
#define MT6335_RG_OTP_DOUT_304_319_SHIFT                 0
#define MT6335_RG_OTP_DOUT_320_335_MASK                  0xFFFF
#define MT6335_RG_OTP_DOUT_320_335_SHIFT                 0
#define MT6335_RG_OTP_DOUT_336_351_MASK                  0xFFFF
#define MT6335_RG_OTP_DOUT_336_351_SHIFT                 0
#define MT6335_RG_OTP_DOUT_352_367_MASK                  0xFFFF
#define MT6335_RG_OTP_DOUT_352_367_SHIFT                 0
#define MT6335_RG_OTP_DOUT_368_383_MASK                  0xFFFF
#define MT6335_RG_OTP_DOUT_368_383_SHIFT                 0
#define MT6335_RG_OTP_DOUT_384_399_MASK                  0xFFFF
#define MT6335_RG_OTP_DOUT_384_399_SHIFT                 0
#define MT6335_RG_OTP_DOUT_400_415_MASK                  0xFFFF
#define MT6335_RG_OTP_DOUT_400_415_SHIFT                 0
#define MT6335_RG_OTP_DOUT_416_431_MASK                  0xFFFF
#define MT6335_RG_OTP_DOUT_416_431_SHIFT                 0
#define MT6335_RG_OTP_DOUT_432_447_MASK                  0xFFFF
#define MT6335_RG_OTP_DOUT_432_447_SHIFT                 0
#define MT6335_RG_OTP_DOUT_448_463_MASK                  0xFFFF
#define MT6335_RG_OTP_DOUT_448_463_SHIFT                 0
#define MT6335_RG_OTP_DOUT_464_479_MASK                  0xFFFF
#define MT6335_RG_OTP_DOUT_464_479_SHIFT                 0
#define MT6335_RG_OTP_DOUT_480_495_MASK                  0xFFFF
#define MT6335_RG_OTP_DOUT_480_495_SHIFT                 0
#define MT6335_RG_OTP_DOUT_496_511_MASK                  0xFFFF
#define MT6335_RG_OTP_DOUT_496_511_SHIFT                 0
#define MT6335_RG_OTP_DOUT_512_527_MASK                  0xFFFF
#define MT6335_RG_OTP_DOUT_512_527_SHIFT                 0
#define MT6335_RG_OTP_DOUT_528_543_MASK                  0xFFFF
#define MT6335_RG_OTP_DOUT_528_543_SHIFT                 0
#define MT6335_RG_OTP_DOUT_544_559_MASK                  0xFFFF
#define MT6335_RG_OTP_DOUT_544_559_SHIFT                 0
#define MT6335_RG_OTP_DOUT_560_575_MASK                  0xFFFF
#define MT6335_RG_OTP_DOUT_560_575_SHIFT                 0
#define MT6335_RG_OTP_DOUT_576_591_MASK                  0xFFFF
#define MT6335_RG_OTP_DOUT_576_591_SHIFT                 0
#define MT6335_RG_OTP_DOUT_592_607_MASK                  0xFFFF
#define MT6335_RG_OTP_DOUT_592_607_SHIFT                 0
#define MT6335_RG_OTP_DOUT_608_623_MASK                  0xFFFF
#define MT6335_RG_OTP_DOUT_608_623_SHIFT                 0
#define MT6335_RG_OTP_DOUT_624_639_MASK                  0xFFFF
#define MT6335_RG_OTP_DOUT_624_639_SHIFT                 0
#define MT6335_RG_OTP_DOUT_640_655_MASK                  0xFFFF
#define MT6335_RG_OTP_DOUT_640_655_SHIFT                 0
#define MT6335_RG_OTP_DOUT_656_671_MASK                  0xFFFF
#define MT6335_RG_OTP_DOUT_656_671_SHIFT                 0
#define MT6335_RG_OTP_DOUT_672_687_MASK                  0xFFFF
#define MT6335_RG_OTP_DOUT_672_687_SHIFT                 0
#define MT6335_RG_OTP_DOUT_688_703_MASK                  0xFFFF
#define MT6335_RG_OTP_DOUT_688_703_SHIFT                 0
#define MT6335_RG_OTP_DOUT_704_719_MASK                  0xFFFF
#define MT6335_RG_OTP_DOUT_704_719_SHIFT                 0
#define MT6335_RG_OTP_DOUT_720_735_MASK                  0xFFFF
#define MT6335_RG_OTP_DOUT_720_735_SHIFT                 0
#define MT6335_RG_OTP_DOUT_736_751_MASK                  0xFFFF
#define MT6335_RG_OTP_DOUT_736_751_SHIFT                 0
#define MT6335_RG_OTP_DOUT_752_767_MASK                  0xFFFF
#define MT6335_RG_OTP_DOUT_752_767_SHIFT                 0
#define MT6335_RG_OTP_DOUT_768_783_MASK                  0xFFFF
#define MT6335_RG_OTP_DOUT_768_783_SHIFT                 0
#define MT6335_RG_OTP_DOUT_784_799_MASK                  0xFFFF
#define MT6335_RG_OTP_DOUT_784_799_SHIFT                 0
#define MT6335_RG_OTP_DOUT_800_815_MASK                  0xFFFF
#define MT6335_RG_OTP_DOUT_800_815_SHIFT                 0
#define MT6335_RG_OTP_DOUT_816_831_MASK                  0xFFFF
#define MT6335_RG_OTP_DOUT_816_831_SHIFT                 0
#define MT6335_RG_OTP_DOUT_832_847_MASK                  0xFFFF
#define MT6335_RG_OTP_DOUT_832_847_SHIFT                 0
#define MT6335_RG_OTP_DOUT_848_863_MASK                  0xFFFF
#define MT6335_RG_OTP_DOUT_848_863_SHIFT                 0
#define MT6335_RG_OTP_DOUT_864_879_MASK                  0xFFFF
#define MT6335_RG_OTP_DOUT_864_879_SHIFT                 0
#define MT6335_RG_OTP_DOUT_880_895_MASK                  0xFFFF
#define MT6335_RG_OTP_DOUT_880_895_SHIFT                 0
#define MT6335_RG_OTP_DOUT_896_911_MASK                  0xFFFF
#define MT6335_RG_OTP_DOUT_896_911_SHIFT                 0
#define MT6335_RG_OTP_DOUT_912_927_MASK                  0xFFFF
#define MT6335_RG_OTP_DOUT_912_927_SHIFT                 0
#define MT6335_RG_OTP_DOUT_928_943_MASK                  0xFFFF
#define MT6335_RG_OTP_DOUT_928_943_SHIFT                 0
#define MT6335_RG_OTP_DOUT_944_959_MASK                  0xFFFF
#define MT6335_RG_OTP_DOUT_944_959_SHIFT                 0
#define MT6335_RG_OTP_DOUT_960_975_MASK                  0xFFFF
#define MT6335_RG_OTP_DOUT_960_975_SHIFT                 0
#define MT6335_RG_OTP_DOUT_976_991_MASK                  0xFFFF
#define MT6335_RG_OTP_DOUT_976_991_SHIFT                 0
#define MT6335_RG_OTP_DOUT_992_1007_MASK                 0xFFFF
#define MT6335_RG_OTP_DOUT_992_1007_SHIFT                0
#define MT6335_RG_OTP_DOUT_1008_1023_MASK                0xFFFF
#define MT6335_RG_OTP_DOUT_1008_1023_SHIFT               0
#define MT6335_RG_OTP_VAL_0_15_MASK                      0xFFFF
#define MT6335_RG_OTP_VAL_0_15_SHIFT                     0
#define MT6335_RG_OTP_VAL_16_31_MASK                     0xFFFF
#define MT6335_RG_OTP_VAL_16_31_SHIFT                    0
#define MT6335_RG_OTP_VAL_32_47_MASK                     0xFFFF
#define MT6335_RG_OTP_VAL_32_47_SHIFT                    0
#define MT6335_RG_OTP_VAL_48_63_MASK                     0xFFFF
#define MT6335_RG_OTP_VAL_48_63_SHIFT                    0
#define MT6335_RG_OTP_VAL_64_79_MASK                     0xFFFF
#define MT6335_RG_OTP_VAL_64_79_SHIFT                    0
#define MT6335_RG_OTP_VAL_80_95_MASK                     0xFFFF
#define MT6335_RG_OTP_VAL_80_95_SHIFT                    0
#define MT6335_RG_OTP_VAL_96_111_MASK                    0xFFFF
#define MT6335_RG_OTP_VAL_96_111_SHIFT                   0
#define MT6335_RG_OTP_VAL_112_127_MASK                   0xFFFF
#define MT6335_RG_OTP_VAL_112_127_SHIFT                  0
#define MT6335_RG_OTP_VAL_128_143_MASK                   0xFFFF
#define MT6335_RG_OTP_VAL_128_143_SHIFT                  0
#define MT6335_RG_OTP_VAL_144_159_MASK                   0xFFFF
#define MT6335_RG_OTP_VAL_144_159_SHIFT                  0
#define MT6335_RG_OTP_VAL_160_175_MASK                   0xFFFF
#define MT6335_RG_OTP_VAL_160_175_SHIFT                  0
#define MT6335_RG_OTP_VAL_176_191_MASK                   0xFFFF
#define MT6335_RG_OTP_VAL_176_191_SHIFT                  0
#define MT6335_RG_OTP_VAL_192_207_MASK                   0xFFFF
#define MT6335_RG_OTP_VAL_192_207_SHIFT                  0
#define MT6335_RG_OTP_VAL_208_223_MASK                   0xFFFF
#define MT6335_RG_OTP_VAL_208_223_SHIFT                  0
#define MT6335_RG_OTP_VAL_224_239_MASK                   0xFFFF
#define MT6335_RG_OTP_VAL_224_239_SHIFT                  0
#define MT6335_RG_OTP_VAL_240_255_MASK                   0xFFFF
#define MT6335_RG_OTP_VAL_240_255_SHIFT                  0
#define MT6335_RG_OTP_VAL_256_271_MASK                   0xFFFF
#define MT6335_RG_OTP_VAL_256_271_SHIFT                  0
#define MT6335_RG_OTP_VAL_272_287_MASK                   0xFFFF
#define MT6335_RG_OTP_VAL_272_287_SHIFT                  0
#define MT6335_RG_OTP_VAL_288_303_MASK                   0xFFFF
#define MT6335_RG_OTP_VAL_288_303_SHIFT                  0
#define MT6335_RG_OTP_VAL_304_319_MASK                   0xFFFF
#define MT6335_RG_OTP_VAL_304_319_SHIFT                  0
#define MT6335_RG_OTP_VAL_320_335_MASK                   0xFFFF
#define MT6335_RG_OTP_VAL_320_335_SHIFT                  0
#define MT6335_RG_OTP_VAL_336_351_MASK                   0xFFFF
#define MT6335_RG_OTP_VAL_336_351_SHIFT                  0
#define MT6335_RG_OTP_VAL_352_367_MASK                   0xFFFF
#define MT6335_RG_OTP_VAL_352_367_SHIFT                  0
#define MT6335_RG_OTP_VAL_368_383_MASK                   0xFFFF
#define MT6335_RG_OTP_VAL_368_383_SHIFT                  0
#define MT6335_RG_OTP_VAL_384_399_MASK                   0xFFFF
#define MT6335_RG_OTP_VAL_384_399_SHIFT                  0
#define MT6335_RG_OTP_VAL_400_415_MASK                   0xFFFF
#define MT6335_RG_OTP_VAL_400_415_SHIFT                  0
#define MT6335_RG_OTP_VAL_416_431_MASK                   0xFFFF
#define MT6335_RG_OTP_VAL_416_431_SHIFT                  0
#define MT6335_RG_OTP_VAL_432_447_MASK                   0xFFFF
#define MT6335_RG_OTP_VAL_432_447_SHIFT                  0
#define MT6335_RG_OTP_VAL_448_463_MASK                   0xFFFF
#define MT6335_RG_OTP_VAL_448_463_SHIFT                  0
#define MT6335_RG_OTP_VAL_464_479_MASK                   0xFFFF
#define MT6335_RG_OTP_VAL_464_479_SHIFT                  0
#define MT6335_RG_OTP_VAL_480_495_MASK                   0xFFFF
#define MT6335_RG_OTP_VAL_480_495_SHIFT                  0
#define MT6335_RG_OTP_VAL_496_511_MASK                   0xFFFF
#define MT6335_RG_OTP_VAL_496_511_SHIFT                  0
#define MT6335_RG_OTP_VAL_512_527_MASK                   0xFFFF
#define MT6335_RG_OTP_VAL_512_527_SHIFT                  0
#define MT6335_RG_OTP_VAL_528_543_MASK                   0xFFFF
#define MT6335_RG_OTP_VAL_528_543_SHIFT                  0
#define MT6335_RG_OTP_VAL_544_559_MASK                   0xFFFF
#define MT6335_RG_OTP_VAL_544_559_SHIFT                  0
#define MT6335_RG_OTP_VAL_560_575_MASK                   0xFFFF
#define MT6335_RG_OTP_VAL_560_575_SHIFT                  0
#define MT6335_RG_OTP_VAL_576_591_MASK                   0xFFFF
#define MT6335_RG_OTP_VAL_576_591_SHIFT                  0
#define MT6335_RG_OTP_VAL_592_607_MASK                   0xFFFF
#define MT6335_RG_OTP_VAL_592_607_SHIFT                  0
#define MT6335_RG_OTP_VAL_608_623_MASK                   0xFFFF
#define MT6335_RG_OTP_VAL_608_623_SHIFT                  0
#define MT6335_RG_OTP_VAL_624_639_MASK                   0xFFFF
#define MT6335_RG_OTP_VAL_624_639_SHIFT                  0
#define MT6335_RG_OTP_VAL_640_655_MASK                   0xFFFF
#define MT6335_RG_OTP_VAL_640_655_SHIFT                  0
#define MT6335_RG_OTP_VAL_656_671_MASK                   0xFFFF
#define MT6335_RG_OTP_VAL_656_671_SHIFT                  0
#define MT6335_RG_OTP_VAL_672_687_MASK                   0xFFFF
#define MT6335_RG_OTP_VAL_672_687_SHIFT                  0
#define MT6335_RG_OTP_VAL_688_703_MASK                   0xFFFF
#define MT6335_RG_OTP_VAL_688_703_SHIFT                  0
#define MT6335_RG_OTP_VAL_704_719_MASK                   0xFFFF
#define MT6335_RG_OTP_VAL_704_719_SHIFT                  0
#define MT6335_RG_OTP_VAL_720_735_MASK                   0xFFFF
#define MT6335_RG_OTP_VAL_720_735_SHIFT                  0
#define MT6335_RG_OTP_VAL_736_751_MASK                   0xFFFF
#define MT6335_RG_OTP_VAL_736_751_SHIFT                  0
#define MT6335_RG_OTP_VAL_752_767_MASK                   0xFFFF
#define MT6335_RG_OTP_VAL_752_767_SHIFT                  0
#define MT6335_RG_OTP_VAL_768_783_MASK                   0xFFFF
#define MT6335_RG_OTP_VAL_768_783_SHIFT                  0
#define MT6335_RG_OTP_VAL_784_799_MASK                   0xFFFF
#define MT6335_RG_OTP_VAL_784_799_SHIFT                  0
#define MT6335_RG_OTP_VAL_800_815_MASK                   0xFFFF
#define MT6335_RG_OTP_VAL_800_815_SHIFT                  0
#define MT6335_RG_OTP_VAL_816_831_MASK                   0xFFFF
#define MT6335_RG_OTP_VAL_816_831_SHIFT                  0
#define MT6335_RG_OTP_VAL_832_847_MASK                   0xFFFF
#define MT6335_RG_OTP_VAL_832_847_SHIFT                  0
#define MT6335_RG_OTP_VAL_848_863_MASK                   0xFFFF
#define MT6335_RG_OTP_VAL_848_863_SHIFT                  0
#define MT6335_RG_OTP_VAL_864_879_MASK                   0xFFFF
#define MT6335_RG_OTP_VAL_864_879_SHIFT                  0
#define MT6335_RG_OTP_VAL_880_895_MASK                   0xFFFF
#define MT6335_RG_OTP_VAL_880_895_SHIFT                  0
#define MT6335_RG_OTP_VAL_896_911_MASK                   0xFFFF
#define MT6335_RG_OTP_VAL_896_911_SHIFT                  0
#define MT6335_RG_OTP_VAL_912_927_MASK                   0xFFFF
#define MT6335_RG_OTP_VAL_912_927_SHIFT                  0
#define MT6335_RG_OTP_VAL_928_943_MASK                   0xFFFF
#define MT6335_RG_OTP_VAL_928_943_SHIFT                  0
#define MT6335_RG_OTP_VAL_944_959_MASK                   0xFFFF
#define MT6335_RG_OTP_VAL_944_959_SHIFT                  0
#define MT6335_RG_OTP_VAL_960_975_MASK                   0xFFFF
#define MT6335_RG_OTP_VAL_960_975_SHIFT                  0
#define MT6335_RG_OTP_VAL_976_991_MASK                   0xFFFF
#define MT6335_RG_OTP_VAL_976_991_SHIFT                  0
#define MT6335_RG_OTP_VAL_992_1007_MASK                  0xFFFF
#define MT6335_RG_OTP_VAL_992_1007_SHIFT                 0
#define MT6335_RG_OTP_VAL_1008_1023_MASK                 0xFFFF
#define MT6335_RG_OTP_VAL_1008_1023_SHIFT                0
#define MT6335_MIX_EOSC32_STP_LPDTB_MASK                 0x1
#define MT6335_MIX_EOSC32_STP_LPDTB_SHIFT                1
#define MT6335_MIX_EOSC32_STP_LPDEN_MASK                 0x1
#define MT6335_MIX_EOSC32_STP_LPDEN_SHIFT                2
#define MT6335_MIX_XOSC32_STP_PWDB_MASK                  0x1
#define MT6335_MIX_XOSC32_STP_PWDB_SHIFT                 3
#define MT6335_MIX_XOSC32_STP_LPDTB_MASK                 0x1
#define MT6335_MIX_XOSC32_STP_LPDTB_SHIFT                4
#define MT6335_MIX_XOSC32_STP_LPDEN_MASK                 0x1
#define MT6335_MIX_XOSC32_STP_LPDEN_SHIFT                5
#define MT6335_MIX_XOSC32_STP_LPDRST_MASK                0x1
#define MT6335_MIX_XOSC32_STP_LPDRST_SHIFT               6
#define MT6335_MIX_XOSC32_STP_CALI_MASK                  0x1F
#define MT6335_MIX_XOSC32_STP_CALI_SHIFT                 7
#define MT6335_STMP_MODE_MASK                            0x1
#define MT6335_STMP_MODE_SHIFT                           12
#define MT6335_MIX_EOSC32_STP_CHOP_EN_MASK               0x1
#define MT6335_MIX_EOSC32_STP_CHOP_EN_SHIFT              0
#define MT6335_MIX_DCXO_STP_LVSH_EN_MASK                 0x1
#define MT6335_MIX_DCXO_STP_LVSH_EN_SHIFT                1
#define MT6335_MIX_PMU_STP_DDLO_VRTC_MASK                0x1
#define MT6335_MIX_PMU_STP_DDLO_VRTC_SHIFT               2
#define MT6335_MIX_PMU_STP_DDLO_VRTC_EN_MASK             0x1
#define MT6335_MIX_PMU_STP_DDLO_VRTC_EN_SHIFT            3
#define MT6335_MIX_RTC_STP_XOSC32_ENB_MASK               0x1
#define MT6335_MIX_RTC_STP_XOSC32_ENB_SHIFT              4
#define MT6335_MIX_DCXO_STP_TEST_DEGLITCH_MODE_MASK      0x1
#define MT6335_MIX_DCXO_STP_TEST_DEGLITCH_MODE_SHIFT     5
#define MT6335_MIX_EOSC32_STP_RSV_MASK                   0x3
#define MT6335_MIX_EOSC32_STP_RSV_SHIFT                  6
#define MT6335_MIX_EOSC32_VCT_EN_MASK                    0x1
#define MT6335_MIX_EOSC32_VCT_EN_SHIFT                   8
#define MT6335_MIX_EOSC32_OPT_MASK                       0x3
#define MT6335_MIX_EOSC32_OPT_SHIFT                      9
#define MT6335_MIX_DCXO_STP_LVSH_EN_INT_MASK             0x1
#define MT6335_MIX_DCXO_STP_LVSH_EN_INT_SHIFT            11
#define MT6335_MIX_RTC_GPIO_COREDETB_MASK                0x1
#define MT6335_MIX_RTC_GPIO_COREDETB_SHIFT               12
#define MT6335_MIX_RTC_GPIO_F32KOB_MASK                  0x1
#define MT6335_MIX_RTC_GPIO_F32KOB_SHIFT                 13
#define MT6335_MIX_RTC_GPIO_GPO_MASK                     0x1
#define MT6335_MIX_RTC_GPIO_GPO_SHIFT                    14
#define MT6335_MIX_RTC_GPIO_OE_MASK                      0x1
#define MT6335_MIX_RTC_GPIO_OE_SHIFT                     15
#define MT6335_MIX_RTC_STP_DEBUG_OUT_MASK                0x3
#define MT6335_MIX_RTC_STP_DEBUG_OUT_SHIFT               0
#define MT6335_MIX_RTC_STP_DEBUG_SEL_MASK                0x3
#define MT6335_MIX_RTC_STP_DEBUG_SEL_SHIFT               4
#define MT6335_MIX_RTC_STP_K_EOSC32_EN_MASK              0x1
#define MT6335_MIX_RTC_STP_K_EOSC32_EN_SHIFT             7
#define MT6335_MIX_RTC_STP_EMBCK_SEL_MASK                0x1
#define MT6335_MIX_RTC_STP_EMBCK_SEL_SHIFT               8
#define MT6335_MIX_STP_BBWAKEUP_MASK                     0x1
#define MT6335_MIX_STP_BBWAKEUP_SHIFT                    9
#define MT6335_MIX_STP_RTC_DDLO_MASK                     0x1
#define MT6335_MIX_STP_RTC_DDLO_SHIFT                    10
#define MT6335_MIX_RTC_XOSC32_ENB_MASK                   0x1
#define MT6335_MIX_RTC_XOSC32_ENB_SHIFT                  11
#define MT6335_MIX_EFUSE_XOSC32_ENB_OPT_MASK             0x1
#define MT6335_MIX_EFUSE_XOSC32_ENB_OPT_SHIFT            12
#define MT6335_FG_ON_MASK                                0x1
#define MT6335_FG_ON_SHIFT                               0
#define MT6335_FG_CAL_MASK                               0x3
#define MT6335_FG_CAL_SHIFT                              2
#define MT6335_FG_AUTOCALRATE_MASK                       0x7
#define MT6335_FG_AUTOCALRATE_SHIFT                      4
#define MT6335_FG_SON_SLP_EN_MASK                        0x1
#define MT6335_FG_SON_SLP_EN_SHIFT                       8
#define MT6335_FG_SOFF_SLP_EN_MASK                       0x1
#define MT6335_FG_SOFF_SLP_EN_SHIFT                      9
#define MT6335_FG_ZCV_DET_EN_MASK                        0x1
#define MT6335_FG_ZCV_DET_EN_SHIFT                       10
#define MT6335_FG_AUXADC_R_MASK                          0x1
#define MT6335_FG_AUXADC_R_SHIFT                         11
#define MT6335_FG_IAVG_MODE_MASK                         0xF
#define MT6335_FG_IAVG_MODE_SHIFT                        12
#define MT6335_FG_SW_READ_PRE_MASK                       0x1
#define MT6335_FG_SW_READ_PRE_SHIFT                      0
#define MT6335_FG_SW_RSTCLR_MASK                         0x1
#define MT6335_FG_SW_RSTCLR_SHIFT                        1
#define MT6335_FG_SW_CR_MASK                             0x1
#define MT6335_FG_SW_CR_SHIFT                            2
#define MT6335_FG_SW_CLEAR_MASK                          0x1
#define MT6335_FG_SW_CLEAR_SHIFT                         3
#define MT6335_FG_OFFSET_RST_MASK                        0x1
#define MT6335_FG_OFFSET_RST_SHIFT                       8
#define MT6335_FG_TIME_RST_MASK                          0x1
#define MT6335_FG_TIME_RST_SHIFT                         9
#define MT6335_FG_CHARGE_RST_MASK                        0x1
#define MT6335_FG_CHARGE_RST_SHIFT                       10
#define MT6335_FG_N_CHARGE_RST_MASK                      0x1
#define MT6335_FG_N_CHARGE_RST_SHIFT                     11
#define MT6335_FG_SOFF_RST_MASK                          0x1
#define MT6335_FG_SOFF_RST_SHIFT                         12
#define MT6335_FG_LATCHDATA_ST_MASK                      0x1
#define MT6335_FG_LATCHDATA_ST_SHIFT                     15
#define MT6335_EVENT_FG_BAT0_L_MASK                      0x1
#define MT6335_EVENT_FG_BAT0_L_SHIFT                     0
#define MT6335_EVENT_FG_BAT0_H_MASK                      0x1
#define MT6335_EVENT_FG_BAT0_H_SHIFT                     1
#define MT6335_EVENT_FG_BAT1_L_MASK                      0x1
#define MT6335_EVENT_FG_BAT1_L_SHIFT                     2
#define MT6335_EVENT_FG_BAT1_H_MASK                      0x1
#define MT6335_EVENT_FG_BAT1_H_SHIFT                     3
#define MT6335_EVENT_FG_CUR_L_MASK                       0x1
#define MT6335_EVENT_FG_CUR_L_SHIFT                      4
#define MT6335_EVENT_FG_CUR_H_MASK                       0x1
#define MT6335_EVENT_FG_CUR_H_SHIFT                      5
#define MT6335_EVENT_FG_IAVG_L_MASK                      0x1
#define MT6335_EVENT_FG_IAVG_L_SHIFT                     6
#define MT6335_EVENT_FG_IAVG_H_MASK                      0x1
#define MT6335_EVENT_FG_IAVG_H_SHIFT                     7
#define MT6335_EVENT_FG_N_CHARGE_L_MASK                  0x1
#define MT6335_EVENT_FG_N_CHARGE_L_SHIFT                 8
#define MT6335_EVENT_FG_TIME_H_MASK                      0x1
#define MT6335_EVENT_FG_TIME_H_SHIFT                     11
#define MT6335_EVENT_FG_DISCHARGE_MASK                   0x1
#define MT6335_EVENT_FG_DISCHARGE_SHIFT                  12
#define MT6335_EVENT_FG_CHARGE_MASK                      0x1
#define MT6335_EVENT_FG_CHARGE_SHIFT                     13
#define MT6335_EVENT_FG_ZCV_MASK                         0x1
#define MT6335_EVENT_FG_ZCV_SHIFT                        14
#define MT6335_FG_OSR1_MASK                              0xF
#define MT6335_FG_OSR1_SHIFT                             0
#define MT6335_FG_OSR2_MASK                              0x3
#define MT6335_FG_OSR2_SHIFT                             8
#define MT6335_FG_FIR1BYPASS_MASK                        0x1
#define MT6335_FG_FIR1BYPASS_SHIFT                       0
#define MT6335_FG_FIR2BYPASS_MASK                        0x1
#define MT6335_FG_FIR2BYPASS_SHIFT                       1
#define MT6335_FG_ADJ_OFFSET_EN_MASK                     0x1
#define MT6335_FG_ADJ_OFFSET_EN_SHIFT                    2
#define MT6335_FG_ADC_AUTORST_MASK                       0x1
#define MT6335_FG_ADC_AUTORST_SHIFT                      3
#define MT6335_FG_ADC_RSTDETECT_MASK                     0x1
#define MT6335_FG_ADC_RSTDETECT_SHIFT                    4
#define MT6335_FG_VA18_AON_MASK                          0x1
#define MT6335_FG_VA18_AON_SHIFT                         5
#define MT6335_FG_VA18_AOFF_MASK                         0x1
#define MT6335_FG_VA18_AOFF_SHIFT                        6
#define MT6335_FG_SON_SW_MASK                            0x1
#define MT6335_FG_SON_SW_SHIFT                           7
#define MT6335_FG_SON_SW_MODE_MASK                       0x1
#define MT6335_FG_SON_SW_MODE_SHIFT                      8
#define MT6335_FGADC_CON4_RSV_MASK                       0x7F
#define MT6335_FGADC_CON4_RSV_SHIFT                      9
#define MT6335_FG_RSTB_STATUS_MASK                       0x1
#define MT6335_FG_RSTB_STATUS_SHIFT                      0
#define MT6335_FG_R_CURR_MASK                            0xFFFF
#define MT6335_FG_R_CURR_SHIFT                           0
#define MT6335_FG_CURRENT_OUT_MASK                       0xFFFF
#define MT6335_FG_CURRENT_OUT_SHIFT                      0
#define MT6335_FG_CUR_LTH_MASK                           0xFFFF
#define MT6335_FG_CUR_LTH_SHIFT                          0
#define MT6335_FG_CUR_HTH_MASK                           0xFFFF
#define MT6335_FG_CUR_HTH_SHIFT                          0
#define MT6335_FG_CIC2_MASK                              0xFFFF
#define MT6335_FG_CIC2_SHIFT                             0
#define MT6335_FG_CAR_31_16_MASK                         0xFFFF
#define MT6335_FG_CAR_31_16_SHIFT                        0
#define MT6335_FG_CAR_15_00_MASK                         0xFFFF
#define MT6335_FG_CAR_15_00_SHIFT                        0
#define MT6335_FG_BAT0_LTH_31_16_MASK                    0xFFFF
#define MT6335_FG_BAT0_LTH_31_16_SHIFT                   0
#define MT6335_FG_BAT0_LTH_15_14_MASK                    0x3
#define MT6335_FG_BAT0_LTH_15_14_SHIFT                   14
#define MT6335_FG_BAT0_HTH_31_16_MASK                    0xFFFF
#define MT6335_FG_BAT0_HTH_31_16_SHIFT                   0
#define MT6335_FG_BAT0_HTH_15_14_MASK                    0x3
#define MT6335_FG_BAT0_HTH_15_14_SHIFT                   14
#define MT6335_FG_BAT1_LTH_31_16_MASK                    0xFFFF
#define MT6335_FG_BAT1_LTH_31_16_SHIFT                   0
#define MT6335_FG_BAT1_LTH_15_14_MASK                    0x3
#define MT6335_FG_BAT1_LTH_15_14_SHIFT                   14
#define MT6335_FG_BAT1_HTH_31_16_MASK                    0xFFFF
#define MT6335_FG_BAT1_HTH_31_16_SHIFT                   0
#define MT6335_FG_BAT1_HTH_15_14_MASK                    0x3
#define MT6335_FG_BAT1_HTH_15_14_SHIFT                   14
#define MT6335_FG_NCAR_31_16_MASK                        0xFFFF
#define MT6335_FG_NCAR_31_16_SHIFT                       0
#define MT6335_FG_NCAR_15_00_MASK                        0xFFFF
#define MT6335_FG_NCAR_15_00_SHIFT                       0
#define MT6335_FG_N_CHARGE_LTH_31_16_MASK                0xFFFF
#define MT6335_FG_N_CHARGE_LTH_31_16_SHIFT               0
#define MT6335_FG_N_CHARGE_LTH_15_14_MASK                0x3
#define MT6335_FG_N_CHARGE_LTH_15_14_SHIFT               14
#define MT6335_FG_IAVG_27_16_MASK                        0xFFF
#define MT6335_FG_IAVG_27_16_SHIFT                       0
#define MT6335_FG_IAVG_VLD_MASK                          0x1
#define MT6335_FG_IAVG_VLD_SHIFT                         15
#define MT6335_FG_IAVG_15_00_MASK                        0xFFFF
#define MT6335_FG_IAVG_15_00_SHIFT                       0
#define MT6335_FG_IAVG_LTH_28_16_MASK                    0x1FFF
#define MT6335_FG_IAVG_LTH_28_16_SHIFT                   0
#define MT6335_FG_IAVG_LTH_15_00_MASK                    0xFFFF
#define MT6335_FG_IAVG_LTH_15_00_SHIFT                   0
#define MT6335_FG_IAVG_HTH_28_16_MASK                    0x1FFF
#define MT6335_FG_IAVG_HTH_28_16_SHIFT                   0
#define MT6335_FG_IAVG_HTH_15_00_MASK                    0xFFFF
#define MT6335_FG_IAVG_HTH_15_00_SHIFT                   0
#define MT6335_FG_NTER_29_16_MASK                        0x3FFF
#define MT6335_FG_NTER_29_16_SHIFT                       0
#define MT6335_FG_NTER_15_00_MASK                        0xFFFF
#define MT6335_FG_NTER_15_00_SHIFT                       0
#define MT6335_FG_TIME_HTH_29_16_MASK                    0x3FFF
#define MT6335_FG_TIME_HTH_29_16_SHIFT                   0
#define MT6335_FG_TIME_HTH_15_00_MASK                    0xFFFF
#define MT6335_FG_TIME_HTH_15_00_SHIFT                   0
#define MT6335_FG_OFFSET_MASK                            0xFFFF
#define MT6335_FG_OFFSET_SHIFT                           0
#define MT6335_FG_ADJUST_OFFSET_VALUE_MASK               0xFFFF
#define MT6335_FG_ADJUST_OFFSET_VALUE_SHIFT              0
#define MT6335_FG_GAIN_MASK                              0x1FFF
#define MT6335_FG_GAIN_SHIFT                             0
#define MT6335_FG_SON_SLP_CUR_TH_MASK                    0xFFFF
#define MT6335_FG_SON_SLP_CUR_TH_SHIFT                   0
#define MT6335_FG_SON_SLP_TIME_MASK                      0x3FF
#define MT6335_FG_SON_SLP_TIME_SHIFT                     0
#define MT6335_FG_SON_DET_TIME_MASK                      0x3FF
#define MT6335_FG_SON_DET_TIME_SHIFT                     0
#define MT6335_FG_FP_FTIME_MASK                          0xFF
#define MT6335_FG_FP_FTIME_SHIFT                         0
#define MT6335_FG_SOFF_SLP_CUR_TH_MASK                   0xFFFF
#define MT6335_FG_SOFF_SLP_CUR_TH_SHIFT                  0
#define MT6335_FG_SOFF_SLP_TIME_MASK                     0x3FF
#define MT6335_FG_SOFF_SLP_TIME_SHIFT                    0
#define MT6335_FG_SOFF_DET_TIME_MASK                     0x3FF
#define MT6335_FG_SOFF_DET_TIME_SHIFT                    0
#define MT6335_FG_SOFF_TIME_29_16_MASK                   0x3FFF
#define MT6335_FG_SOFF_TIME_29_16_SHIFT                  0
#define MT6335_FG_SOFF_MASK                              0x1
#define MT6335_FG_SOFF_SHIFT                             15
#define MT6335_FG_SOFF_TIME_15_00_MASK                   0xFFFF
#define MT6335_FG_SOFF_TIME_15_00_SHIFT                  0
#define MT6335_FG_PWR_TIME0_MASK                         0xFF
#define MT6335_FG_PWR_TIME0_SHIFT                        0
#define MT6335_FG_PWR_TIME1_MASK                         0xFF
#define MT6335_FG_PWR_TIME1_SHIFT                        8
#define MT6335_FG_PWR_TIME2_MASK                         0xFF
#define MT6335_FG_PWR_TIME2_SHIFT                        0
#define MT6335_FG_ZCV_DET_IV_MASK                        0xF
#define MT6335_FG_ZCV_DET_IV_SHIFT                       0
#define MT6335_FG_ZCV_CAR_TH_30_16_MASK                  0x7FFF
#define MT6335_FG_ZCV_CAR_TH_30_16_SHIFT                 0
#define MT6335_FG_ZCV_CAR_TH_15_00_MASK                  0xFFFF
#define MT6335_FG_ZCV_CAR_TH_15_00_SHIFT                 0
#define MT6335_FG_ZCV_CAR_31_16_MASK                     0xFFFF
#define MT6335_FG_ZCV_CAR_31_16_SHIFT                    0
#define MT6335_FG_ZCV_CAR_15_00_MASK                     0xFFFF
#define MT6335_FG_ZCV_CAR_15_00_SHIFT                    0
#define MT6335_FG_ZCV_CURR_MASK                          0xFFFF
#define MT6335_FG_ZCV_CURR_SHIFT                         0
#define MT6335_DA_FGADC_EN_MASK                          0x1
#define MT6335_DA_FGADC_EN_SHIFT                         0
#define MT6335_DA_FGCAL_EN_MASK                          0x1
#define MT6335_DA_FGCAL_EN_SHIFT                         1
#define MT6335_DA_FG_RST_MASK                            0x1
#define MT6335_DA_FG_RST_SHIFT                           2
#define MT6335_RG_FGANALOGTEST_MASK                      0xF
#define MT6335_RG_FGANALOGTEST_SHIFT                     0
#define MT6335_RG_FGRINTMODE_MASK                        0x1
#define MT6335_RG_FGRINTMODE_SHIFT                       4
#define MT6335_RG_FG_WIDECM_ENB_MASK                     0x1
#define MT6335_RG_FG_WIDECM_ENB_SHIFT                    5
#define MT6335_RG_SPARE_MASK                             0xFF
#define MT6335_RG_SPARE_SHIFT                            8
#define MT6335_FG_MODE_MASK                              0x1
#define MT6335_FG_MODE_SHIFT                             0
#define MT6335_FG_RST_SW_MASK                            0x1
#define MT6335_FG_RST_SW_SHIFT                           1
#define MT6335_FG_FGCAL_EN_SW_MASK                       0x1
#define MT6335_FG_FGCAL_EN_SW_SHIFT                      2
#define MT6335_FG_FGADC_EN_SW_MASK                       0x1
#define MT6335_FG_FGADC_EN_SW_SHIFT                      3
#define MT6335_FG_RSV1_MASK                              0xF
#define MT6335_FG_RSV1_SHIFT                             4
#define MT6335_FG_TEST_MODE0_MASK                        0x1
#define MT6335_FG_TEST_MODE0_SHIFT                       14
#define MT6335_FG_TEST_MODE1_MASK                        0x1
#define MT6335_FG_TEST_MODE1_SHIFT                       15
#define MT6335_FG_SOFF_RD_MASK                           0x1
#define MT6335_FG_SOFF_RD_SHIFT                          0
#define MT6335_FG_RSV_CON0_RSV_MASK                      0x7FFF
#define MT6335_FG_RSV_CON0_RSV_SHIFT                     1
#define MT6335_FG_RSV_CON1_RSV_MASK                      0xFFFF
#define MT6335_FG_RSV_CON1_RSV_SHIFT                     0
#define MT6335_FG_RSV_CON2_RSV_MASK                      0xFFFF
#define MT6335_FG_RSV_CON2_RSV_SHIFT                     0
#define MT6335_FG_RSV_CON3_RSV_MASK                      0xFFFF
#define MT6335_FG_RSV_CON3_RSV_SHIFT                     0
#define MT6335_SYSTEM_INFO_CON0_MASK                     0xFFFF
#define MT6335_SYSTEM_INFO_CON0_SHIFT                    0
#define MT6335_SYSTEM_INFO_CON1_MASK                     0xFFFF
#define MT6335_SYSTEM_INFO_CON1_SHIFT                    0
#define MT6335_SYSTEM_INFO_CON2_MASK                     0xFFFF
#define MT6335_SYSTEM_INFO_CON2_SHIFT                    0
#define MT6335_SYSTEM_INFO_CON3_MASK                     0xFFFF
#define MT6335_SYSTEM_INFO_CON3_SHIFT                    0
#define MT6335_SYSTEM_INFO_CON4_MASK                     0xFFFF
#define MT6335_SYSTEM_INFO_CON4_SHIFT                    0
#define MT6335_RG_FGADC_GAINERROR_CAL_MASK               0x1FFF
#define MT6335_RG_FGADC_GAINERROR_CAL_SHIFT              0
#define MT6335_XO_EXTBUF1_MODE_MASK                      0x3
#define MT6335_XO_EXTBUF1_MODE_SHIFT                     0
#define MT6335_XO_EXTBUF1_EN_M_MASK                      0x1
#define MT6335_XO_EXTBUF1_EN_M_SHIFT                     2
#define MT6335_XO_EXTBUF2_MODE_MASK                      0x3
#define MT6335_XO_EXTBUF2_MODE_SHIFT                     3
#define MT6335_XO_EXTBUF2_EN_M_MASK                      0x1
#define MT6335_XO_EXTBUF2_EN_M_SHIFT                     5
#define MT6335_XO_EXTBUF3_MODE_MASK                      0x3
#define MT6335_XO_EXTBUF3_MODE_SHIFT                     6
#define MT6335_XO_EXTBUF3_EN_M_MASK                      0x1
#define MT6335_XO_EXTBUF3_EN_M_SHIFT                     8
#define MT6335_XO_EXTBUF4_MODE_MASK                      0x3
#define MT6335_XO_EXTBUF4_MODE_SHIFT                     9
#define MT6335_XO_EXTBUF4_EN_M_MASK                      0x1
#define MT6335_XO_EXTBUF4_EN_M_SHIFT                     11
#define MT6335_XO_BB_LPM_EN_MASK                         0x1
#define MT6335_XO_BB_LPM_EN_SHIFT                        12
#define MT6335_XO_ENBB_MAN_MASK                          0x1
#define MT6335_XO_ENBB_MAN_SHIFT                         13
#define MT6335_XO_ENBB_EN_M_MASK                         0x1
#define MT6335_XO_ENBB_EN_M_SHIFT                        14
#define MT6335_XO_CLKSEL_MAN_MASK                        0x1
#define MT6335_XO_CLKSEL_MAN_SHIFT                       15
#define MT6335_DCXO_CW00_SET_MASK                        0xFFFF
#define MT6335_DCXO_CW00_SET_SHIFT                       0
#define MT6335_DCXO_CW00_CLR_MASK                        0xFFFF
#define MT6335_DCXO_CW00_CLR_SHIFT                       0
#define MT6335_XO_CLKSEL_EN_M_MASK                       0x1
#define MT6335_XO_CLKSEL_EN_M_SHIFT                      0
#define MT6335_XO_EXTBUF1_CKG_MAN_MASK                   0x1
#define MT6335_XO_EXTBUF1_CKG_MAN_SHIFT                  1
#define MT6335_XO_EXTBUF1_CKG_EN_M_MASK                  0x1
#define MT6335_XO_EXTBUF1_CKG_EN_M_SHIFT                 2
#define MT6335_XO_EXTBUF2_CKG_MAN_MASK                   0x1
#define MT6335_XO_EXTBUF2_CKG_MAN_SHIFT                  3
#define MT6335_XO_EXTBUF2_CKG_EN_M_MASK                  0x1
#define MT6335_XO_EXTBUF2_CKG_EN_M_SHIFT                 4
#define MT6335_XO_EXTBUF3_CKG_MAN_MASK                   0x1
#define MT6335_XO_EXTBUF3_CKG_MAN_SHIFT                  5
#define MT6335_XO_EXTBUF3_CKG_EN_M_MASK                  0x1
#define MT6335_XO_EXTBUF3_CKG_EN_M_SHIFT                 6
#define MT6335_XO_EXTBUF4_CKG_MAN_MASK                   0x1
#define MT6335_XO_EXTBUF4_CKG_MAN_SHIFT                  7
#define MT6335_XO_EXTBUF4_CKG_EN_M_MASK                  0x1
#define MT6335_XO_EXTBUF4_CKG_EN_M_SHIFT                 8
#define MT6335_XO_INTBUF_MAN_MASK                        0x1
#define MT6335_XO_INTBUF_MAN_SHIFT                       9
#define MT6335_XO_PBUF_EN_M_MASK                         0x1
#define MT6335_XO_PBUF_EN_M_SHIFT                        10
#define MT6335_XO_IBUF_EN_M_MASK                         0x1
#define MT6335_XO_IBUF_EN_M_SHIFT                        11
#define MT6335_XO_LPMBUF_MAN_MASK                        0x1
#define MT6335_XO_LPMBUF_MAN_SHIFT                       12
#define MT6335_XO_LPM_PREBUF_EN_M_MASK                   0x1
#define MT6335_XO_LPM_PREBUF_EN_M_SHIFT                  13
#define MT6335_XO_LPBUF_EN_M_MASK                        0x1
#define MT6335_XO_LPBUF_EN_M_SHIFT                       14
#define MT6335_XO_BBLPM_CKSEL_M_MASK                     0x1
#define MT6335_XO_BBLPM_CKSEL_M_SHIFT                    15
#define MT6335_XO_EN32K_MAN_MASK                         0x1
#define MT6335_XO_EN32K_MAN_SHIFT                        0
#define MT6335_XO_EN32K_M_MASK                           0x1
#define MT6335_XO_EN32K_M_SHIFT                          1
#define MT6335_XO_XMODE_MAN_MASK                         0x1
#define MT6335_XO_XMODE_MAN_SHIFT                        2
#define MT6335_XO_XMODE_M_MASK                           0x1
#define MT6335_XO_XMODE_M_SHIFT                          3
#define MT6335_XO_STRUP_MODE_MASK                        0x1
#define MT6335_XO_STRUP_MODE_SHIFT                       4
#define MT6335_XO_AAC_FPM_TIME_MASK                      0x3
#define MT6335_XO_AAC_FPM_TIME_SHIFT                     5
#define MT6335_XO_AAC_MODE_LPM_MASK                      0x3
#define MT6335_XO_AAC_MODE_LPM_SHIFT                     7
#define MT6335_XO_AAC_MODE_FPM_MASK                      0x3
#define MT6335_XO_AAC_MODE_FPM_SHIFT                     9
#define MT6335_XO_EN26M_OFFSQ_EN_MASK                    0x1
#define MT6335_XO_EN26M_OFFSQ_EN_SHIFT                   11
#define MT6335_XO_LDOCAL_EN_MASK                         0x1
#define MT6335_XO_LDOCAL_EN_SHIFT                        12
#define MT6335_XO_CBANK_SYNC_DYN_MASK                    0x1
#define MT6335_XO_CBANK_SYNC_DYN_SHIFT                   13
#define MT6335_XO_26MLP_MAN_EN_MASK                      0x1
#define MT6335_XO_26MLP_MAN_EN_SHIFT                     14
#define MT6335_XO_BUFLDOK_EN_MASK                        0x1
#define MT6335_XO_BUFLDOK_EN_SHIFT                       15
#define MT6335_XO_EXTBUF5_CKG_MAN_MASK                   0x1
#define MT6335_XO_EXTBUF5_CKG_MAN_SHIFT                  0
#define MT6335_XO_EXTBUF5_CKG_EN_M_MASK                  0x1
#define MT6335_XO_EXTBUF5_CKG_EN_M_SHIFT                 1
#define MT6335_XO_EXTBUF6_CKG_MAN_MASK                   0x1
#define MT6335_XO_EXTBUF6_CKG_MAN_SHIFT                  2
#define MT6335_XO_EXTBUF6_CKG_EN_M_MASK                  0x1
#define MT6335_XO_EXTBUF6_CKG_EN_M_SHIFT                 3
#define MT6335_XO_EXTBUF7_CKG_MAN_MASK                   0x1
#define MT6335_XO_EXTBUF7_CKG_MAN_SHIFT                  4
#define MT6335_XO_EXTBUF7_CKG_EN_M_MASK                  0x1
#define MT6335_XO_EXTBUF7_CKG_EN_M_SHIFT                 5
#define MT6335_XO_LPM_ISEL_MAN_MASK                      0x1F
#define MT6335_XO_LPM_ISEL_MAN_SHIFT                     6
#define MT6335_XO_FPM_ISEL_MAN_MASK                      0x1F
#define MT6335_XO_FPM_ISEL_MAN_SHIFT                     11
#define MT6335_XO_CDAC_FPM_MASK                          0xFF
#define MT6335_XO_CDAC_FPM_SHIFT                         0
#define MT6335_XO_CDAC_LPM_MASK                          0xFF
#define MT6335_XO_CDAC_LPM_SHIFT                         8
#define MT6335_XO_32KDIV_NFRAC_FPM_MASK                  0x3FFF
#define MT6335_XO_32KDIV_NFRAC_FPM_SHIFT                 0
#define MT6335_XO_COFST_FPM_MASK                         0x3
#define MT6335_XO_COFST_FPM_SHIFT                        14
#define MT6335_XO_32KDIV_NFRAC_LPM_MASK                  0x3FFF
#define MT6335_XO_32KDIV_NFRAC_LPM_SHIFT                 0
#define MT6335_XO_COFST_LPM_MASK                         0x3
#define MT6335_XO_COFST_LPM_SHIFT                        14
#define MT6335_XO_CORE_MAN_MASK                          0x1
#define MT6335_XO_CORE_MAN_SHIFT                         0
#define MT6335_XO_CORE_EN_M_MASK                         0x1
#define MT6335_XO_CORE_EN_M_SHIFT                        1
#define MT6335_XO_CORE_TURBO_EN_M_MASK                   0x1
#define MT6335_XO_CORE_TURBO_EN_M_SHIFT                  2
#define MT6335_XO_CORE_AAC_EN_M_MASK                     0x1
#define MT6335_XO_CORE_AAC_EN_M_SHIFT                    3
#define MT6335_XO_STARTUP_EN_M_MASK                      0x1
#define MT6335_XO_STARTUP_EN_M_SHIFT                     4
#define MT6335_XO_CORE_VBFPM_EN_M_MASK                   0x1
#define MT6335_XO_CORE_VBFPM_EN_M_SHIFT                  5
#define MT6335_XO_CORE_VBLPM_EN_M_MASK                   0x1
#define MT6335_XO_CORE_VBLPM_EN_M_SHIFT                  6
#define MT6335_XO_LPMBIAS_EN_M_MASK                      0x1
#define MT6335_XO_LPMBIAS_EN_M_SHIFT                     7
#define MT6335_XO_VTCGEN_EN_M_MASK                       0x1
#define MT6335_XO_VTCGEN_EN_M_SHIFT                      8
#define MT6335_XO_IAAC_COMP_EN_M_MASK                    0x1
#define MT6335_XO_IAAC_COMP_EN_M_SHIFT                   9
#define MT6335_XO_IFPM_COMP_EN_M_MASK                    0x1
#define MT6335_XO_IFPM_COMP_EN_M_SHIFT                   10
#define MT6335_XO_ILPM_COMP_EN_M_MASK                    0x1
#define MT6335_XO_ILPM_COMP_EN_M_SHIFT                   11
#define MT6335_XO_CORE_BYPCAS_FPM_MASK                   0x1
#define MT6335_XO_CORE_BYPCAS_FPM_SHIFT                  12
#define MT6335_XO_CORE_GMX2_FPM_MASK                     0x1
#define MT6335_XO_CORE_GMX2_FPM_SHIFT                    13
#define MT6335_XO_CORE_IDAC_FPM_MASK                     0x3
#define MT6335_XO_CORE_IDAC_FPM_SHIFT                    14
#define MT6335_XO_AAC_COMP_MAN_MASK                      0x1
#define MT6335_XO_AAC_COMP_MAN_SHIFT                     0
#define MT6335_XO_AAC_EN_M_MASK                          0x1
#define MT6335_XO_AAC_EN_M_SHIFT                         1
#define MT6335_XO_AAC_MONEN_M_MASK                       0x1
#define MT6335_XO_AAC_MONEN_M_SHIFT                      2
#define MT6335_XO_COMP_EN_M_MASK                         0x1
#define MT6335_XO_COMP_EN_M_SHIFT                        3
#define MT6335_XO_COMP_TSTEN_M_MASK                      0x1
#define MT6335_XO_COMP_TSTEN_M_SHIFT                     4
#define MT6335_XO_AAC_HV_FPM_MASK                        0x1
#define MT6335_XO_AAC_HV_FPM_SHIFT                       5
#define MT6335_XO_AAC_IBIAS_FPM_MASK                     0x3
#define MT6335_XO_AAC_IBIAS_FPM_SHIFT                    6
#define MT6335_XO_AAC_VOFST_FPM_MASK                     0x3
#define MT6335_XO_AAC_VOFST_FPM_SHIFT                    8
#define MT6335_XO_AAC_COMP_HV_FPM_MASK                   0x1
#define MT6335_XO_AAC_COMP_HV_FPM_SHIFT                  10
#define MT6335_XO_AAC_VSEL_FPM_MASK                      0xF
#define MT6335_XO_AAC_VSEL_FPM_SHIFT                     11
#define MT6335_XO_AAC_COMP_POL_MASK                      0x1
#define MT6335_XO_AAC_COMP_POL_SHIFT                     15
#define MT6335_XO_CORE_BYPCAS_LPM_MASK                   0x1
#define MT6335_XO_CORE_BYPCAS_LPM_SHIFT                  0
#define MT6335_XO_CORE_GMX2_LPM_MASK                     0x1
#define MT6335_XO_CORE_GMX2_LPM_SHIFT                    1
#define MT6335_XO_CORE_IDAC_LPM_MASK                     0x3
#define MT6335_XO_CORE_IDAC_LPM_SHIFT                    2
#define MT6335_XO_AAC_COMP_HV_LPM_MASK                   0x1
#define MT6335_XO_AAC_COMP_HV_LPM_SHIFT                  4
#define MT6335_XO_AAC_VSEL_LPM_MASK                      0xF
#define MT6335_XO_AAC_VSEL_LPM_SHIFT                     5
#define MT6335_XO_AAC_HV_LPM_MASK                        0x1
#define MT6335_XO_AAC_HV_LPM_SHIFT                       9
#define MT6335_XO_AAC_IBIAS_LPM_MASK                     0x3
#define MT6335_XO_AAC_IBIAS_LPM_SHIFT                    10
#define MT6335_XO_AAC_VOFST_LPM_MASK                     0x3
#define MT6335_XO_AAC_VOFST_LPM_SHIFT                    12
#define MT6335_XO_AAC_FPM_SWEN_MASK                      0x1
#define MT6335_XO_AAC_FPM_SWEN_SHIFT                     14
#define MT6335_XO_SWRST_MASK                             0x1
#define MT6335_XO_SWRST_SHIFT                            15
#define MT6335_XO_32KDIV_SWRST_MASK                      0x1
#define MT6335_XO_32KDIV_SWRST_SHIFT                     0
#define MT6335_XO_32KDIV_RATIO_MAN_MASK                  0x1
#define MT6335_XO_32KDIV_RATIO_MAN_SHIFT                 1
#define MT6335_XO_32KDIV_TEST_EN_MASK                    0x1
#define MT6335_XO_32KDIV_TEST_EN_SHIFT                   2
#define MT6335_XO_CBANK_SYNC_MAN_MASK                    0x1
#define MT6335_XO_CBANK_SYNC_MAN_SHIFT                   3
#define MT6335_XO_CBANK_SYNC_EN_M_MASK                   0x1
#define MT6335_XO_CBANK_SYNC_EN_M_SHIFT                  4
#define MT6335_XO_CTL_SYNC_MAN_MASK                      0x1
#define MT6335_XO_CTL_SYNC_MAN_SHIFT                     5
#define MT6335_XO_CTL_SYNC_EN_M_MASK                     0x1
#define MT6335_XO_CTL_SYNC_EN_M_SHIFT                    6
#define MT6335_XO_LDO_MAN_MASK                           0x1
#define MT6335_XO_LDO_MAN_SHIFT                          7
#define MT6335_XO_LDOPBUF_EN_M_MASK                      0x1
#define MT6335_XO_LDOPBUF_EN_M_SHIFT                     8
#define MT6335_XO_LDOPBUF_VSET_M_MASK                    0xF
#define MT6335_XO_LDOPBUF_VSET_M_SHIFT                   9
#define MT6335_XO_LDOVTST_EN_M_MASK                      0x1
#define MT6335_XO_LDOVTST_EN_M_SHIFT                     13
#define MT6335_XO_TEST_VCAL_EN_M_MASK                    0x1
#define MT6335_XO_TEST_VCAL_EN_M_SHIFT                   14
#define MT6335_XO_VBIST_EN_M_MASK                        0x1
#define MT6335_XO_VBIST_EN_M_SHIFT                       15
#define MT6335_XO_VTEST_SEL_MUX_MASK                     0x1F
#define MT6335_XO_VTEST_SEL_MUX_SHIFT                    0
#define MT6335_XO_EXTBUF5_MODE_MASK                      0x3
#define MT6335_XO_EXTBUF5_MODE_SHIFT                     5
#define MT6335_XO_EXTBUF5_EN_M_MASK                      0x1
#define MT6335_XO_EXTBUF5_EN_M_SHIFT                     7
#define MT6335_XO_EXTBUF6_MODE_MASK                      0x3
#define MT6335_XO_EXTBUF6_MODE_SHIFT                     8
#define MT6335_XO_EXTBUF6_EN_M_MASK                      0x1
#define MT6335_XO_EXTBUF6_EN_M_SHIFT                     10
#define MT6335_XO_EXTBUF7_MODE_MASK                      0x3
#define MT6335_XO_EXTBUF7_MODE_SHIFT                     11
#define MT6335_XO_EXTBUF7_EN_M_MASK                      0x1
#define MT6335_XO_EXTBUF7_EN_M_SHIFT                     13
#define MT6335_XO_BUFLDOK_MAN_MASK                       0x1
#define MT6335_XO_BUFLDOK_MAN_SHIFT                      14
#define MT6335_XO_BUF1LDO_CAL_M_MASK                     0x1
#define MT6335_XO_BUF1LDO_CAL_M_SHIFT                    15
#define MT6335_DCXO_CW11_SET_MASK                        0xFFFF
#define MT6335_DCXO_CW11_SET_SHIFT                       0
#define MT6335_DCXO_CW11_CLR_MASK                        0xFFFF
#define MT6335_DCXO_CW11_CLR_SHIFT                       0
#define MT6335_XO_BUFLDO_CAL_M_MASK                      0x1
#define MT6335_XO_BUFLDO_CAL_M_SHIFT                     0
#define MT6335_XO_EXTBUF4_CLKSEL_MAN_MASK                0x1
#define MT6335_XO_EXTBUF4_CLKSEL_MAN_SHIFT               1
#define MT6335_XO_VIO18PG_BUFEN_MASK                     0x1
#define MT6335_XO_VIO18PG_BUFEN_SHIFT                    2
#define MT6335_XO_CAL_EN_MAN_MASK                        0x1
#define MT6335_XO_CAL_EN_MAN_SHIFT                       3
#define MT6335_XO_CAL_EN_M_MASK                          0x1
#define MT6335_XO_CAL_EN_M_SHIFT                         4
#define MT6335_RG_XO_CORE_OSCTD_MASK                     0x3
#define MT6335_RG_XO_CORE_OSCTD_SHIFT                    5
#define MT6335_RG_XO_THADC_EN_MASK                       0x1
#define MT6335_RG_XO_THADC_EN_SHIFT                      7
#define MT6335_RG_XO_SYNC_CKPOL_MASK                     0x1
#define MT6335_RG_XO_SYNC_CKPOL_SHIFT                    8
#define MT6335_RG_XO_CBANK_POL_MASK                      0x1
#define MT6335_RG_XO_CBANK_POL_SHIFT                     9
#define MT6335_RG_XO_CBANK_SYNC_BYP_MASK                 0x1
#define MT6335_RG_XO_CBANK_SYNC_BYP_SHIFT                10
#define MT6335_RG_XO_CTL_POL_MASK                        0x1
#define MT6335_RG_XO_CTL_POL_SHIFT                       11
#define MT6335_RG_XO_CTL_SYNC_BYP_MASK                   0x1
#define MT6335_RG_XO_CTL_SYNC_BYP_SHIFT                  12
#define MT6335_RG_XO_LPBUF_INV_MASK                      0x1
#define MT6335_RG_XO_LPBUF_INV_SHIFT                     13
#define MT6335_RG_XO_LDOPBUF_BYP_MASK                    0x1
#define MT6335_RG_XO_LDOPBUF_BYP_SHIFT                   14
#define MT6335_RG_XO_LDOPBUF_ENCL_MASK                   0x1
#define MT6335_RG_XO_LDOPBUF_ENCL_SHIFT                  15
#define MT6335_RG_XO_VGBIAS_VSET_MASK                    0x3
#define MT6335_RG_XO_VGBIAS_VSET_SHIFT                   0
#define MT6335_RG_XO_PBUF_ISET_MASK                      0x3
#define MT6335_RG_XO_PBUF_ISET_SHIFT                     2
#define MT6335_RG_XO_IBUF_ISET_MASK                      0x3
#define MT6335_RG_XO_IBUF_ISET_SHIFT                     4
#define MT6335_RG_XO_BUFLDO1_ENCL_MASK                   0x1
#define MT6335_RG_XO_BUFLDO1_ENCL_SHIFT                  6
#define MT6335_RG_XO_BUFLDO1_IBX2_MASK                   0x1
#define MT6335_RG_XO_BUFLDO1_IBX2_SHIFT                  7
#define MT6335_RG_XO_BUFLDO1_IX2_MASK                    0x1
#define MT6335_RG_XO_BUFLDO1_IX2_SHIFT                   8
#define MT6335_RG_XO_BUFLDO1_VSET_MASK                   0x3
#define MT6335_RG_XO_BUFLDO1_VSET_SHIFT                  9
#define MT6335_RG_XO_BUFLDO24_ENCL_MASK                  0x1
#define MT6335_RG_XO_BUFLDO24_ENCL_SHIFT                 11
#define MT6335_RG_XO_BUFLDO24_IBX2_MASK                  0x1
#define MT6335_RG_XO_BUFLDO24_IBX2_SHIFT                 12
#define MT6335_RG_XO_BUFLDO24_VSET_MASK                  0x7
#define MT6335_RG_XO_BUFLDO24_VSET_SHIFT                 13
#define MT6335_RG_XO_BUFLDO35_ENCL_MASK                  0x1
#define MT6335_RG_XO_BUFLDO35_ENCL_SHIFT                 0
#define MT6335_RG_XO_BUFLDO35_IBX2_MASK                  0x1
#define MT6335_RG_XO_BUFLDO35_IBX2_SHIFT                 1
#define MT6335_RG_XO_BUFLDO35_IX2_MASK                   0x1
#define MT6335_RG_XO_BUFLDO35_IX2_SHIFT                  2
#define MT6335_RG_XO_BUFLDO35_VSET_MASK                  0x3
#define MT6335_RG_XO_BUFLDO35_VSET_SHIFT                 3
#define MT6335_RG_XO_BUFLDO67_ENCL_MASK                  0x1
#define MT6335_RG_XO_BUFLDO67_ENCL_SHIFT                 5
#define MT6335_RG_XO_BUFLDO67_IBX2_MASK                  0x1
#define MT6335_RG_XO_BUFLDO67_IBX2_SHIFT                 6
#define MT6335_RG_XO_BUFLDO67_IX2_MASK                   0x1
#define MT6335_RG_XO_BUFLDO67_IX2_SHIFT                  7
#define MT6335_RG_XO_BUFLDO67_VSET_MASK                  0x3
#define MT6335_RG_XO_BUFLDO67_VSET_SHIFT                 8
#define MT6335_RG_XO_EXTBUF_INV_MASK                     0x1
#define MT6335_RG_XO_EXTBUF_INV_SHIFT                    10
#define MT6335_RG_XO_RESERVED0_MASK                      0x7
#define MT6335_RG_XO_RESERVED0_SHIFT                     11
#define MT6335_RG_XO_AUDIO_ATTEN_MASK                    0x3
#define MT6335_RG_XO_AUDIO_ATTEN_SHIFT                   14
#define MT6335_RG_XO_AUDIO_ISET_MASK                     0x3
#define MT6335_RG_XO_AUDIO_ISET_SHIFT                    0
#define MT6335_RG_XO_EXTBUF1_HD_MASK                     0x3
#define MT6335_RG_XO_EXTBUF1_HD_SHIFT                    2
#define MT6335_RG_XO_EXTBUF2_HD_MASK                     0x3
#define MT6335_RG_XO_EXTBUF2_HD_SHIFT                    4
#define MT6335_RG_XO_EXTBUF3_HD_MASK                     0x3
#define MT6335_RG_XO_EXTBUF3_HD_SHIFT                    6
#define MT6335_RG_XO_EXTBUF4_HD_MASK                     0x3
#define MT6335_RG_XO_EXTBUF4_HD_SHIFT                    8
#define MT6335_RG_XO_EXTBUF5_HD_MASK                     0x3
#define MT6335_RG_XO_EXTBUF5_HD_SHIFT                    10
#define MT6335_RG_XO_EXTBUF6_HD_MASK                     0x3
#define MT6335_RG_XO_EXTBUF6_HD_SHIFT                    12
#define MT6335_RG_XO_EXTBUF7_HD_MASK                     0x3
#define MT6335_RG_XO_EXTBUF7_HD_SHIFT                    14
#define MT6335_XO_EXTBUF1_ISET_M_MASK                    0x3
#define MT6335_XO_EXTBUF1_ISET_M_SHIFT                   0
#define MT6335_XO_EXTBUF2_ISET_M_MASK                    0x3
#define MT6335_XO_EXTBUF2_ISET_M_SHIFT                   2
#define MT6335_XO_EXTBUF3_ISET_M_MASK                    0x3
#define MT6335_XO_EXTBUF3_ISET_M_SHIFT                   4
#define MT6335_XO_EXTBUF4_ISET_M_MASK                    0x3
#define MT6335_XO_EXTBUF4_ISET_M_SHIFT                   6
#define MT6335_XO_EXTBUF5_ISET_M_MASK                    0x3
#define MT6335_XO_EXTBUF5_ISET_M_SHIFT                   8
#define MT6335_XO_EXTBUF6_ISET_M_MASK                    0x3
#define MT6335_XO_EXTBUF6_ISET_M_SHIFT                   10
#define MT6335_XO_EXTBUF7_ISET_M_MASK                    0x3
#define MT6335_XO_EXTBUF7_ISET_M_SHIFT                   12
#define MT6335_RG_XO_LPM_PREBUF_ISET_MASK                0x3
#define MT6335_RG_XO_LPM_PREBUF_ISET_SHIFT               14
#define MT6335_RG_XO_RESERVED1_MASK                      0x7
#define MT6335_RG_XO_RESERVED1_SHIFT                     0
#define MT6335_XO_STATIC_AUXOUT_SEL_MASK                 0x3F
#define MT6335_XO_STATIC_AUXOUT_SEL_SHIFT                0
#define MT6335_XO_AUXOUT_SEL_MASK                        0x3FF
#define MT6335_XO_AUXOUT_SEL_SHIFT                       6
#define MT6335_XO_STATIC_AUXOUT_MASK                     0xFFFF
#define MT6335_XO_STATIC_AUXOUT_SHIFT                    0
#define MT6335_AUXADC_ADC_OUT_CH0_MASK                   0x7FFF
#define MT6335_AUXADC_ADC_OUT_CH0_SHIFT                  0
#define MT6335_AUXADC_ADC_RDY_CH0_MASK                   0x1
#define MT6335_AUXADC_ADC_RDY_CH0_SHIFT                  15
#define MT6335_AUXADC_ADC_OUT_CH1_MASK                   0x7FFF
#define MT6335_AUXADC_ADC_OUT_CH1_SHIFT                  0
#define MT6335_AUXADC_ADC_RDY_CH1_MASK                   0x1
#define MT6335_AUXADC_ADC_RDY_CH1_SHIFT                  15
#define MT6335_AUXADC_ADC_OUT_CH2_MASK                   0xFFF
#define MT6335_AUXADC_ADC_OUT_CH2_SHIFT                  0
#define MT6335_AUXADC_ADC_RDY_CH2_MASK                   0x1
#define MT6335_AUXADC_ADC_RDY_CH2_SHIFT                  15
#define MT6335_AUXADC_ADC_OUT_CH3_MASK                   0xFFF
#define MT6335_AUXADC_ADC_OUT_CH3_SHIFT                  0
#define MT6335_AUXADC_ADC_RDY_CH3_MASK                   0x1
#define MT6335_AUXADC_ADC_RDY_CH3_SHIFT                  15
#define MT6335_AUXADC_ADC_OUT_CH4_MASK                   0xFFF
#define MT6335_AUXADC_ADC_OUT_CH4_SHIFT                  0
#define MT6335_AUXADC_ADC_RDY_CH4_MASK                   0x1
#define MT6335_AUXADC_ADC_RDY_CH4_SHIFT                  15
#define MT6335_AUXADC_ADC_OUT_CH5_MASK                   0xFFF
#define MT6335_AUXADC_ADC_OUT_CH5_SHIFT                  0
#define MT6335_AUXADC_ADC_RDY_CH5_MASK                   0x1
#define MT6335_AUXADC_ADC_RDY_CH5_SHIFT                  15
#define MT6335_AUXADC_ADC_OUT_CH6_MASK                   0xFFF
#define MT6335_AUXADC_ADC_OUT_CH6_SHIFT                  0
#define MT6335_AUXADC_ADC_RDY_CH6_MASK                   0x1
#define MT6335_AUXADC_ADC_RDY_CH6_SHIFT                  15
#define MT6335_AUXADC_ADC_OUT_CH7_MASK                   0x7FFF
#define MT6335_AUXADC_ADC_OUT_CH7_SHIFT                  0
#define MT6335_AUXADC_ADC_RDY_CH7_MASK                   0x1
#define MT6335_AUXADC_ADC_RDY_CH7_SHIFT                  15
#define MT6335_AUXADC_ADC_OUT_CH8_MASK                   0xFFF
#define MT6335_AUXADC_ADC_OUT_CH8_SHIFT                  0
#define MT6335_AUXADC_ADC_RDY_CH8_MASK                   0x1
#define MT6335_AUXADC_ADC_RDY_CH8_SHIFT                  15
#define MT6335_AUXADC_ADC_OUT_CH9_MASK                   0xFFF
#define MT6335_AUXADC_ADC_OUT_CH9_SHIFT                  0
#define MT6335_AUXADC_ADC_RDY_CH9_MASK                   0x1
#define MT6335_AUXADC_ADC_RDY_CH9_SHIFT                  15
#define MT6335_AUXADC_ADC_OUT_CH10_MASK                  0xFFF
#define MT6335_AUXADC_ADC_OUT_CH10_SHIFT                 0
#define MT6335_AUXADC_ADC_RDY_CH10_MASK                  0x1
#define MT6335_AUXADC_ADC_RDY_CH10_SHIFT                 15
#define MT6335_AUXADC_ADC_OUT_CH11_MASK                  0xFFF
#define MT6335_AUXADC_ADC_OUT_CH11_SHIFT                 0
#define MT6335_AUXADC_ADC_RDY_CH11_MASK                  0x1
#define MT6335_AUXADC_ADC_RDY_CH11_SHIFT                 15
#define MT6335_AUXADC_ADC_OUT_CH12_15_MASK               0xFFF
#define MT6335_AUXADC_ADC_OUT_CH12_15_SHIFT              0
#define MT6335_AUXADC_ADC_RDY_CH12_15_MASK               0x1
#define MT6335_AUXADC_ADC_RDY_CH12_15_SHIFT              15
#define MT6335_AUXADC_ADC_OUT_THR_HW_MASK                0xFFF
#define MT6335_AUXADC_ADC_OUT_THR_HW_SHIFT               0
#define MT6335_AUXADC_ADC_RDY_THR_HW_MASK                0x1
#define MT6335_AUXADC_ADC_RDY_THR_HW_SHIFT               15
#define MT6335_AUXADC_ADC_OUT_LBAT_MASK                  0xFFF
#define MT6335_AUXADC_ADC_OUT_LBAT_SHIFT                 0
#define MT6335_AUXADC_ADC_RDY_LBAT_MASK                  0x1
#define MT6335_AUXADC_ADC_RDY_LBAT_SHIFT                 15
#define MT6335_AUXADC_ADC_OUT_LBAT2_MASK                 0xFFF
#define MT6335_AUXADC_ADC_OUT_LBAT2_SHIFT                0
#define MT6335_AUXADC_ADC_RDY_LBAT2_MASK                 0x1
#define MT6335_AUXADC_ADC_RDY_LBAT2_SHIFT                15
#define MT6335_AUXADC_ADC_OUT_CH7_BY_GPS_MASK            0x7FFF
#define MT6335_AUXADC_ADC_OUT_CH7_BY_GPS_SHIFT           0
#define MT6335_AUXADC_ADC_RDY_CH7_BY_GPS_MASK            0x1
#define MT6335_AUXADC_ADC_RDY_CH7_BY_GPS_SHIFT           15
#define MT6335_AUXADC_ADC_OUT_CH7_BY_MD_MASK             0x7FFF
#define MT6335_AUXADC_ADC_OUT_CH7_BY_MD_SHIFT            0
#define MT6335_AUXADC_ADC_RDY_CH7_BY_MD_MASK             0x1
#define MT6335_AUXADC_ADC_RDY_CH7_BY_MD_SHIFT            15
#define MT6335_AUXADC_ADC_OUT_CH7_BY_AP_MASK             0x7FFF
#define MT6335_AUXADC_ADC_OUT_CH7_BY_AP_SHIFT            0
#define MT6335_AUXADC_ADC_RDY_CH7_BY_AP_MASK             0x1
#define MT6335_AUXADC_ADC_RDY_CH7_BY_AP_SHIFT            15
#define MT6335_AUXADC_ADC_OUT_CH4_BY_MD_MASK             0xFFF
#define MT6335_AUXADC_ADC_OUT_CH4_BY_MD_SHIFT            0
#define MT6335_AUXADC_ADC_RDY_CH4_BY_MD_MASK             0x1
#define MT6335_AUXADC_ADC_RDY_CH4_BY_MD_SHIFT            15
#define MT6335_AUXADC_ADC_OUT_WAKEUP_PCHR_MASK           0x7FFF
#define MT6335_AUXADC_ADC_OUT_WAKEUP_PCHR_SHIFT          0
#define MT6335_AUXADC_ADC_RDY_WAKEUP_PCHR_MASK           0x1
#define MT6335_AUXADC_ADC_RDY_WAKEUP_PCHR_SHIFT          15
#define MT6335_AUXADC_ADC_OUT_WAKEUP_SWCHR_MASK          0x7FFF
#define MT6335_AUXADC_ADC_OUT_WAKEUP_SWCHR_SHIFT         0
#define MT6335_AUXADC_ADC_RDY_WAKEUP_SWCHR_MASK          0x1
#define MT6335_AUXADC_ADC_RDY_WAKEUP_SWCHR_SHIFT         15
#define MT6335_AUXADC_ADC_OUT_CH0_BY_MD_MASK             0x7FFF
#define MT6335_AUXADC_ADC_OUT_CH0_BY_MD_SHIFT            0
#define MT6335_AUXADC_ADC_RDY_CH0_BY_MD_MASK             0x1
#define MT6335_AUXADC_ADC_RDY_CH0_BY_MD_SHIFT            15
#define MT6335_AUXADC_ADC_OUT_CH0_BY_AP_MASK             0x7FFF
#define MT6335_AUXADC_ADC_OUT_CH0_BY_AP_SHIFT            0
#define MT6335_AUXADC_ADC_RDY_CH0_BY_AP_MASK             0x1
#define MT6335_AUXADC_ADC_RDY_CH0_BY_AP_SHIFT            15
#define MT6335_AUXADC_ADC_OUT_CH1_BY_MD_MASK             0x7FFF
#define MT6335_AUXADC_ADC_OUT_CH1_BY_MD_SHIFT            0
#define MT6335_AUXADC_ADC_RDY_CH1_BY_MD_MASK             0x1
#define MT6335_AUXADC_ADC_RDY_CH1_BY_MD_SHIFT            15
#define MT6335_AUXADC_ADC_OUT_CH1_BY_AP_MASK             0x7FFF
#define MT6335_AUXADC_ADC_OUT_CH1_BY_AP_SHIFT            0
#define MT6335_AUXADC_ADC_RDY_CH1_BY_AP_MASK             0x1
#define MT6335_AUXADC_ADC_RDY_CH1_BY_AP_SHIFT            15
#define MT6335_AUXADC_ADC_OUT_BAT_TEMP_MASK              0xFFF
#define MT6335_AUXADC_ADC_OUT_BAT_TEMP_SHIFT             0
#define MT6335_AUXADC_ADC_RDY_BAT_TEMP_MASK              0x1
#define MT6335_AUXADC_ADC_RDY_BAT_TEMP_SHIFT             15
#define MT6335_AUXADC_ADC_OUT_FGADC1_MASK                0x7FFF
#define MT6335_AUXADC_ADC_OUT_FGADC1_SHIFT               0
#define MT6335_AUXADC_ADC_RDY_FGADC1_MASK                0x1
#define MT6335_AUXADC_ADC_RDY_FGADC1_SHIFT               15
#define MT6335_AUXADC_ADC_OUT_FGADC2_MASK                0x7FFF
#define MT6335_AUXADC_ADC_OUT_FGADC2_SHIFT               0
#define MT6335_AUXADC_ADC_RDY_FGADC2_MASK                0x1
#define MT6335_AUXADC_ADC_RDY_FGADC2_SHIFT               15
#define MT6335_AUXADC_ADC_OUT_BAT_PLUGIN1_MASK           0x7FFF
#define MT6335_AUXADC_ADC_OUT_BAT_PLUGIN1_SHIFT          0
#define MT6335_AUXADC_ADC_RDY_BAT_PLUGIN1_MASK           0x1
#define MT6335_AUXADC_ADC_RDY_BAT_PLUGIN1_SHIFT          15
#define MT6335_AUXADC_ADC_OUT_BAT_PLUGIN2_MASK           0x7FFF
#define MT6335_AUXADC_ADC_OUT_BAT_PLUGIN2_SHIFT          0
#define MT6335_AUXADC_ADC_RDY_BAT_PLUGIN2_MASK           0x1
#define MT6335_AUXADC_ADC_RDY_BAT_PLUGIN2_SHIFT          15
#define MT6335_AUXADC_ADC_OUT_IMP_MASK                   0x7FFF
#define MT6335_AUXADC_ADC_OUT_IMP_SHIFT                  0
#define MT6335_AUXADC_ADC_RDY_IMP_MASK                   0x1
#define MT6335_AUXADC_ADC_RDY_IMP_SHIFT                  15
#define MT6335_AUXADC_ADC_OUT_IMP_AVG_MASK               0x7FFF
#define MT6335_AUXADC_ADC_OUT_IMP_AVG_SHIFT              0
#define MT6335_AUXADC_ADC_RDY_IMP_AVG_MASK               0x1
#define MT6335_AUXADC_ADC_RDY_IMP_AVG_SHIFT              15
#define MT6335_AUXADC_ADC_OUT_RAW_MASK                   0x7FFF
#define MT6335_AUXADC_ADC_OUT_RAW_SHIFT                  0
#define MT6335_AUXADC_ADC_OUT_MDRT_MASK                  0x7FFF
#define MT6335_AUXADC_ADC_OUT_MDRT_SHIFT                 0
#define MT6335_AUXADC_ADC_RDY_MDRT_MASK                  0x1
#define MT6335_AUXADC_ADC_RDY_MDRT_SHIFT                 15
#define MT6335_AUXADC_ADC_OUT_MDBG_MASK                  0x7FFF
#define MT6335_AUXADC_ADC_OUT_MDBG_SHIFT                 0
#define MT6335_AUXADC_ADC_RDY_MDBG_MASK                  0x1
#define MT6335_AUXADC_ADC_RDY_MDBG_SHIFT                 15
#define MT6335_AUXADC_ADC_OUT_JEITA_MASK                 0xFFF
#define MT6335_AUXADC_ADC_OUT_JEITA_SHIFT                0
#define MT6335_AUXADC_ADC_RDY_JEITA_MASK                 0x1
#define MT6335_AUXADC_ADC_RDY_JEITA_SHIFT                15
#define MT6335_AUXADC_ADC_OUT_DCXO_BY_GPS_MASK           0xFFF
#define MT6335_AUXADC_ADC_OUT_DCXO_BY_GPS_SHIFT          0
#define MT6335_AUXADC_ADC_RDY_DCXO_BY_GPS_MASK           0x1
#define MT6335_AUXADC_ADC_RDY_DCXO_BY_GPS_SHIFT          15
#define MT6335_AUXADC_ADC_OUT_DCXO_BY_MD_MASK            0xFFF
#define MT6335_AUXADC_ADC_OUT_DCXO_BY_MD_SHIFT           0
#define MT6335_AUXADC_ADC_RDY_DCXO_BY_MD_MASK            0x1
#define MT6335_AUXADC_ADC_RDY_DCXO_BY_MD_SHIFT           15
#define MT6335_AUXADC_ADC_OUT_DCXO_BY_AP_MASK            0xFFF
#define MT6335_AUXADC_ADC_OUT_DCXO_BY_AP_SHIFT           0
#define MT6335_AUXADC_ADC_RDY_DCXO_BY_AP_MASK            0x1
#define MT6335_AUXADC_ADC_RDY_DCXO_BY_AP_SHIFT           15
#define MT6335_AUXADC_ADC_OUT_DCXO_MDRT_MASK             0xFFF
#define MT6335_AUXADC_ADC_OUT_DCXO_MDRT_SHIFT            0
#define MT6335_AUXADC_ADC_RDY_DCXO_MDRT_MASK             0x1
#define MT6335_AUXADC_ADC_RDY_DCXO_MDRT_SHIFT            15
#define MT6335_AUXADC_ADC_OUT_NAG_MASK                   0x7FFF
#define MT6335_AUXADC_ADC_OUT_NAG_SHIFT                  0
#define MT6335_AUXADC_ADC_RDY_NAG_MASK                   0x1
#define MT6335_AUXADC_ADC_RDY_NAG_SHIFT                  15
#define MT6335_AUXADC_ADC_OUT_BATID_MASK                 0xFFF
#define MT6335_AUXADC_ADC_OUT_BATID_SHIFT                0
#define MT6335_AUXADC_ADC_RDY_BATID_MASK                 0x1
#define MT6335_AUXADC_ADC_RDY_BATID_SHIFT                15
#define MT6335_AUXADC_BUF_OUT_00_MASK                    0x7FFF
#define MT6335_AUXADC_BUF_OUT_00_SHIFT                   0
#define MT6335_AUXADC_BUF_RDY_00_MASK                    0x1
#define MT6335_AUXADC_BUF_RDY_00_SHIFT                   15
#define MT6335_AUXADC_BUF_OUT_01_MASK                    0x7FFF
#define MT6335_AUXADC_BUF_OUT_01_SHIFT                   0
#define MT6335_AUXADC_BUF_RDY_01_MASK                    0x1
#define MT6335_AUXADC_BUF_RDY_01_SHIFT                   15
#define MT6335_AUXADC_BUF_OUT_02_MASK                    0x7FFF
#define MT6335_AUXADC_BUF_OUT_02_SHIFT                   0
#define MT6335_AUXADC_BUF_RDY_02_MASK                    0x1
#define MT6335_AUXADC_BUF_RDY_02_SHIFT                   15
#define MT6335_AUXADC_BUF_OUT_03_MASK                    0x7FFF
#define MT6335_AUXADC_BUF_OUT_03_SHIFT                   0
#define MT6335_AUXADC_BUF_RDY_03_MASK                    0x1
#define MT6335_AUXADC_BUF_RDY_03_SHIFT                   15
#define MT6335_AUXADC_BUF_OUT_04_MASK                    0x7FFF
#define MT6335_AUXADC_BUF_OUT_04_SHIFT                   0
#define MT6335_AUXADC_BUF_RDY_04_MASK                    0x1
#define MT6335_AUXADC_BUF_RDY_04_SHIFT                   15
#define MT6335_AUXADC_BUF_OUT_05_MASK                    0x7FFF
#define MT6335_AUXADC_BUF_OUT_05_SHIFT                   0
#define MT6335_AUXADC_BUF_RDY_05_MASK                    0x1
#define MT6335_AUXADC_BUF_RDY_05_SHIFT                   15
#define MT6335_AUXADC_BUF_OUT_06_MASK                    0x7FFF
#define MT6335_AUXADC_BUF_OUT_06_SHIFT                   0
#define MT6335_AUXADC_BUF_RDY_06_MASK                    0x1
#define MT6335_AUXADC_BUF_RDY_06_SHIFT                   15
#define MT6335_AUXADC_BUF_OUT_07_MASK                    0x7FFF
#define MT6335_AUXADC_BUF_OUT_07_SHIFT                   0
#define MT6335_AUXADC_BUF_RDY_07_MASK                    0x1
#define MT6335_AUXADC_BUF_RDY_07_SHIFT                   15
#define MT6335_AUXADC_BUF_OUT_08_MASK                    0x7FFF
#define MT6335_AUXADC_BUF_OUT_08_SHIFT                   0
#define MT6335_AUXADC_BUF_RDY_08_MASK                    0x1
#define MT6335_AUXADC_BUF_RDY_08_SHIFT                   15
#define MT6335_AUXADC_BUF_OUT_09_MASK                    0x7FFF
#define MT6335_AUXADC_BUF_OUT_09_SHIFT                   0
#define MT6335_AUXADC_BUF_RDY_09_MASK                    0x1
#define MT6335_AUXADC_BUF_RDY_09_SHIFT                   15
#define MT6335_AUXADC_BUF_OUT_10_MASK                    0x7FFF
#define MT6335_AUXADC_BUF_OUT_10_SHIFT                   0
#define MT6335_AUXADC_BUF_RDY_10_MASK                    0x1
#define MT6335_AUXADC_BUF_RDY_10_SHIFT                   15
#define MT6335_AUXADC_BUF_OUT_11_MASK                    0x7FFF
#define MT6335_AUXADC_BUF_OUT_11_SHIFT                   0
#define MT6335_AUXADC_BUF_RDY_11_MASK                    0x1
#define MT6335_AUXADC_BUF_RDY_11_SHIFT                   15
#define MT6335_AUXADC_BUF_OUT_12_MASK                    0x7FFF
#define MT6335_AUXADC_BUF_OUT_12_SHIFT                   0
#define MT6335_AUXADC_BUF_RDY_12_MASK                    0x1
#define MT6335_AUXADC_BUF_RDY_12_SHIFT                   15
#define MT6335_AUXADC_BUF_OUT_13_MASK                    0x7FFF
#define MT6335_AUXADC_BUF_OUT_13_SHIFT                   0
#define MT6335_AUXADC_BUF_RDY_13_MASK                    0x1
#define MT6335_AUXADC_BUF_RDY_13_SHIFT                   15
#define MT6335_AUXADC_BUF_OUT_14_MASK                    0x7FFF
#define MT6335_AUXADC_BUF_OUT_14_SHIFT                   0
#define MT6335_AUXADC_BUF_RDY_14_MASK                    0x1
#define MT6335_AUXADC_BUF_RDY_14_SHIFT                   15
#define MT6335_AUXADC_BUF_OUT_15_MASK                    0x7FFF
#define MT6335_AUXADC_BUF_OUT_15_SHIFT                   0
#define MT6335_AUXADC_BUF_RDY_15_MASK                    0x1
#define MT6335_AUXADC_BUF_RDY_15_SHIFT                   15
#define MT6335_AUXADC_BUF_OUT_16_MASK                    0x7FFF
#define MT6335_AUXADC_BUF_OUT_16_SHIFT                   0
#define MT6335_AUXADC_BUF_RDY_16_MASK                    0x1
#define MT6335_AUXADC_BUF_RDY_16_SHIFT                   15
#define MT6335_AUXADC_BUF_OUT_17_MASK                    0x7FFF
#define MT6335_AUXADC_BUF_OUT_17_SHIFT                   0
#define MT6335_AUXADC_BUF_RDY_17_MASK                    0x1
#define MT6335_AUXADC_BUF_RDY_17_SHIFT                   15
#define MT6335_AUXADC_BUF_OUT_18_MASK                    0x7FFF
#define MT6335_AUXADC_BUF_OUT_18_SHIFT                   0
#define MT6335_AUXADC_BUF_RDY_18_MASK                    0x1
#define MT6335_AUXADC_BUF_RDY_18_SHIFT                   15
#define MT6335_AUXADC_BUF_OUT_19_MASK                    0x7FFF
#define MT6335_AUXADC_BUF_OUT_19_SHIFT                   0
#define MT6335_AUXADC_BUF_RDY_19_MASK                    0x1
#define MT6335_AUXADC_BUF_RDY_19_SHIFT                   15
#define MT6335_AUXADC_BUF_OUT_20_MASK                    0x7FFF
#define MT6335_AUXADC_BUF_OUT_20_SHIFT                   0
#define MT6335_AUXADC_BUF_RDY_20_MASK                    0x1
#define MT6335_AUXADC_BUF_RDY_20_SHIFT                   15
#define MT6335_AUXADC_BUF_OUT_21_MASK                    0x7FFF
#define MT6335_AUXADC_BUF_OUT_21_SHIFT                   0
#define MT6335_AUXADC_BUF_RDY_21_MASK                    0x1
#define MT6335_AUXADC_BUF_RDY_21_SHIFT                   15
#define MT6335_AUXADC_BUF_OUT_22_MASK                    0x7FFF
#define MT6335_AUXADC_BUF_OUT_22_SHIFT                   0
#define MT6335_AUXADC_BUF_RDY_22_MASK                    0x1
#define MT6335_AUXADC_BUF_RDY_22_SHIFT                   15
#define MT6335_AUXADC_BUF_OUT_23_MASK                    0x7FFF
#define MT6335_AUXADC_BUF_OUT_23_SHIFT                   0
#define MT6335_AUXADC_BUF_RDY_23_MASK                    0x1
#define MT6335_AUXADC_BUF_RDY_23_SHIFT                   15
#define MT6335_AUXADC_BUF_OUT_24_MASK                    0x7FFF
#define MT6335_AUXADC_BUF_OUT_24_SHIFT                   0
#define MT6335_AUXADC_BUF_RDY_24_MASK                    0x1
#define MT6335_AUXADC_BUF_RDY_24_SHIFT                   15
#define MT6335_AUXADC_BUF_OUT_25_MASK                    0x7FFF
#define MT6335_AUXADC_BUF_OUT_25_SHIFT                   0
#define MT6335_AUXADC_BUF_RDY_25_MASK                    0x1
#define MT6335_AUXADC_BUF_RDY_25_SHIFT                   15
#define MT6335_AUXADC_BUF_OUT_26_MASK                    0x7FFF
#define MT6335_AUXADC_BUF_OUT_26_SHIFT                   0
#define MT6335_AUXADC_BUF_RDY_26_MASK                    0x1
#define MT6335_AUXADC_BUF_RDY_26_SHIFT                   15
#define MT6335_AUXADC_BUF_OUT_27_MASK                    0x7FFF
#define MT6335_AUXADC_BUF_OUT_27_SHIFT                   0
#define MT6335_AUXADC_BUF_RDY_27_MASK                    0x1
#define MT6335_AUXADC_BUF_RDY_27_SHIFT                   15
#define MT6335_AUXADC_BUF_OUT_28_MASK                    0x7FFF
#define MT6335_AUXADC_BUF_OUT_28_SHIFT                   0
#define MT6335_AUXADC_BUF_RDY_28_MASK                    0x1
#define MT6335_AUXADC_BUF_RDY_28_SHIFT                   15
#define MT6335_AUXADC_BUF_OUT_29_MASK                    0x7FFF
#define MT6335_AUXADC_BUF_OUT_29_SHIFT                   0
#define MT6335_AUXADC_BUF_RDY_29_MASK                    0x1
#define MT6335_AUXADC_BUF_RDY_29_SHIFT                   15
#define MT6335_AUXADC_BUF_OUT_30_MASK                    0x7FFF
#define MT6335_AUXADC_BUF_OUT_30_SHIFT                   0
#define MT6335_AUXADC_BUF_RDY_30_MASK                    0x1
#define MT6335_AUXADC_BUF_RDY_30_SHIFT                   15
#define MT6335_AUXADC_BUF_OUT_31_MASK                    0x7FFF
#define MT6335_AUXADC_BUF_OUT_31_SHIFT                   0
#define MT6335_AUXADC_BUF_RDY_31_MASK                    0x1
#define MT6335_AUXADC_BUF_RDY_31_SHIFT                   15
#define MT6335_AUXADC_ADC_BUSY_IN_MASK                   0xFFF
#define MT6335_AUXADC_ADC_BUSY_IN_SHIFT                  0
#define MT6335_AUXADC_ADC_BUSY_IN_LBAT_MASK              0x1
#define MT6335_AUXADC_ADC_BUSY_IN_LBAT_SHIFT             12
#define MT6335_AUXADC_ADC_BUSY_IN_LBAT2_MASK             0x1
#define MT6335_AUXADC_ADC_BUSY_IN_LBAT2_SHIFT            13
#define MT6335_AUXADC_ADC_BUSY_IN_BAT_TEMP_MASK          0x1
#define MT6335_AUXADC_ADC_BUSY_IN_BAT_TEMP_SHIFT         14
#define MT6335_AUXADC_ADC_BUSY_IN_WAKEUP_MASK            0x1
#define MT6335_AUXADC_ADC_BUSY_IN_WAKEUP_SHIFT           15
#define MT6335_AUXADC_ADC_BUSY_IN_DCXO_MDRT_MASK         0x1
#define MT6335_AUXADC_ADC_BUSY_IN_DCXO_MDRT_SHIFT        0
#define MT6335_AUXADC_ADC_BUSY_IN_DCXO_GPS_AP_MASK       0x1
#define MT6335_AUXADC_ADC_BUSY_IN_DCXO_GPS_AP_SHIFT      1
#define MT6335_AUXADC_ADC_BUSY_IN_DCXO_GPS_MD_MASK       0x1
#define MT6335_AUXADC_ADC_BUSY_IN_DCXO_GPS_MD_SHIFT      2
#define MT6335_AUXADC_ADC_BUSY_IN_DCXO_GPS_MASK          0x1
#define MT6335_AUXADC_ADC_BUSY_IN_DCXO_GPS_SHIFT         3
#define MT6335_AUXADC_ADC_BUSY_IN_JEITA_MASK             0x1
#define MT6335_AUXADC_ADC_BUSY_IN_JEITA_SHIFT            4
#define MT6335_AUXADC_ADC_BUSY_IN_MDRT_MASK              0x1
#define MT6335_AUXADC_ADC_BUSY_IN_MDRT_SHIFT             5
#define MT6335_AUXADC_ADC_BUSY_IN_MDBG_MASK              0x1
#define MT6335_AUXADC_ADC_BUSY_IN_MDBG_SHIFT             6
#define MT6335_AUXADC_ADC_BUSY_IN_SHARE_MASK             0x1
#define MT6335_AUXADC_ADC_BUSY_IN_SHARE_SHIFT            7
#define MT6335_AUXADC_ADC_BUSY_IN_IMP_MASK               0x1
#define MT6335_AUXADC_ADC_BUSY_IN_IMP_SHIFT              8
#define MT6335_AUXADC_ADC_BUSY_IN_FGADC1_MASK            0x1
#define MT6335_AUXADC_ADC_BUSY_IN_FGADC1_SHIFT           9
#define MT6335_AUXADC_ADC_BUSY_IN_FGADC2_MASK            0x1
#define MT6335_AUXADC_ADC_BUSY_IN_FGADC2_SHIFT           10
#define MT6335_AUXADC_ADC_BUSY_IN_GPS_AP_MASK            0x1
#define MT6335_AUXADC_ADC_BUSY_IN_GPS_AP_SHIFT           11
#define MT6335_AUXADC_ADC_BUSY_IN_GPS_MD_MASK            0x1
#define MT6335_AUXADC_ADC_BUSY_IN_GPS_MD_SHIFT           12
#define MT6335_AUXADC_ADC_BUSY_IN_GPS_MASK               0x1
#define MT6335_AUXADC_ADC_BUSY_IN_GPS_SHIFT              13
#define MT6335_AUXADC_ADC_BUSY_IN_THR_HW_MASK            0x1
#define MT6335_AUXADC_ADC_BUSY_IN_THR_HW_SHIFT           14
#define MT6335_AUXADC_ADC_BUSY_IN_THR_MD_MASK            0x1
#define MT6335_AUXADC_ADC_BUSY_IN_THR_MD_SHIFT           15
#define MT6335_AUXADC_ADC_BUSY_IN_BAT_PLUGIN1_MASK       0x1
#define MT6335_AUXADC_ADC_BUSY_IN_BAT_PLUGIN1_SHIFT      0
#define MT6335_AUXADC_ADC_BUSY_IN_BAT_PLUGIN2_MASK       0x1
#define MT6335_AUXADC_ADC_BUSY_IN_BAT_PLUGIN2_SHIFT      1
#define MT6335_AUXADC_ADC_BUSY_IN_BATID_MASK             0x1
#define MT6335_AUXADC_ADC_BUSY_IN_BATID_SHIFT            2
#define MT6335_AUXADC_ADC_BUSY_IN_NAG_MASK               0x1
#define MT6335_AUXADC_ADC_BUSY_IN_NAG_SHIFT              15
#define MT6335_AUXADC_RQST_CH0_MASK                      0x1
#define MT6335_AUXADC_RQST_CH0_SHIFT                     0
#define MT6335_AUXADC_RQST_CH1_MASK                      0x1
#define MT6335_AUXADC_RQST_CH1_SHIFT                     1
#define MT6335_AUXADC_RQST_CH2_MASK                      0x1
#define MT6335_AUXADC_RQST_CH2_SHIFT                     2
#define MT6335_AUXADC_RQST_CH3_MASK                      0x1
#define MT6335_AUXADC_RQST_CH3_SHIFT                     3
#define MT6335_AUXADC_RQST_CH4_MASK                      0x1
#define MT6335_AUXADC_RQST_CH4_SHIFT                     4
#define MT6335_AUXADC_RQST_CH5_MASK                      0x1
#define MT6335_AUXADC_RQST_CH5_SHIFT                     5
#define MT6335_AUXADC_RQST_CH6_MASK                      0x1
#define MT6335_AUXADC_RQST_CH6_SHIFT                     6
#define MT6335_AUXADC_RQST_CH7_MASK                      0x1
#define MT6335_AUXADC_RQST_CH7_SHIFT                     7
#define MT6335_AUXADC_RQST_CH8_MASK                      0x1
#define MT6335_AUXADC_RQST_CH8_SHIFT                     8
#define MT6335_AUXADC_RQST_CH9_MASK                      0x1
#define MT6335_AUXADC_RQST_CH9_SHIFT                     9
#define MT6335_AUXADC_RQST_CH10_MASK                     0x1
#define MT6335_AUXADC_RQST_CH10_SHIFT                    10
#define MT6335_AUXADC_RQST_CH11_MASK                     0x1
#define MT6335_AUXADC_RQST_CH11_SHIFT                    11
#define MT6335_AUXADC_RQST_CH12_MASK                     0x1
#define MT6335_AUXADC_RQST_CH12_SHIFT                    12
#define MT6335_AUXADC_RQST_CH13_MASK                     0x1
#define MT6335_AUXADC_RQST_CH13_SHIFT                    13
#define MT6335_AUXADC_RQST_CH14_MASK                     0x1
#define MT6335_AUXADC_RQST_CH14_SHIFT                    14
#define MT6335_AUXADC_RQST_CH15_MASK                     0x1
#define MT6335_AUXADC_RQST_CH15_SHIFT                    15
#define MT6335_AUXADC_RQST0_SET_MASK                     0xFFFF
#define MT6335_AUXADC_RQST0_SET_SHIFT                    0
#define MT6335_AUXADC_RQST0_CLR_MASK                     0xFFFF
#define MT6335_AUXADC_RQST0_CLR_SHIFT                    0
#define MT6335_AUXADC_RQST_CH0_BY_MD_MASK                0x1
#define MT6335_AUXADC_RQST_CH0_BY_MD_SHIFT               0
#define MT6335_AUXADC_RQST_CH1_BY_MD_MASK                0x1
#define MT6335_AUXADC_RQST_CH1_BY_MD_SHIFT               1
#define MT6335_AUXADC_RQST_RSV0_MASK                     0x1
#define MT6335_AUXADC_RQST_RSV0_SHIFT                    2
#define MT6335_AUXADC_RQST_BATID_MASK                    0x1
#define MT6335_AUXADC_RQST_BATID_SHIFT                   3
#define MT6335_AUXADC_RQST_CH4_BY_MD_MASK                0x1
#define MT6335_AUXADC_RQST_CH4_BY_MD_SHIFT               4
#define MT6335_AUXADC_RQST_CH7_BY_MD_MASK                0x1
#define MT6335_AUXADC_RQST_CH7_BY_MD_SHIFT               7
#define MT6335_AUXADC_RQST_CH7_BY_GPS_MASK               0x1
#define MT6335_AUXADC_RQST_CH7_BY_GPS_SHIFT              8
#define MT6335_AUXADC_RQST_DCXO_BY_MD_MASK               0x1
#define MT6335_AUXADC_RQST_DCXO_BY_MD_SHIFT              9
#define MT6335_AUXADC_RQST_DCXO_BY_GPS_MASK              0x1
#define MT6335_AUXADC_RQST_DCXO_BY_GPS_SHIFT             10
#define MT6335_AUXADC_RQST_RSV1_MASK                     0x1F
#define MT6335_AUXADC_RQST_RSV1_SHIFT                    11
#define MT6335_AUXADC_RQST1_SET_MASK                     0xFFFF
#define MT6335_AUXADC_RQST1_SET_SHIFT                    0
#define MT6335_AUXADC_RQST1_CLR_MASK                     0xFFFF
#define MT6335_AUXADC_RQST1_CLR_SHIFT                    0
#define MT6335_AUXADC_CK_ON_EXTD_MASK                    0x3F
#define MT6335_AUXADC_CK_ON_EXTD_SHIFT                   0
#define MT6335_AUXADC_SRCLKEN_SRC_SEL_MASK               0x3
#define MT6335_AUXADC_SRCLKEN_SRC_SEL_SHIFT              6
#define MT6335_AUXADC_ADC_PWDB_MASK                      0x1
#define MT6335_AUXADC_ADC_PWDB_SHIFT                     8
#define MT6335_AUXADC_ADC_PWDB_SWCTRL_MASK               0x1
#define MT6335_AUXADC_ADC_PWDB_SWCTRL_SHIFT              9
#define MT6335_AUXADC_STRUP_CK_ON_ENB_MASK               0x1
#define MT6335_AUXADC_STRUP_CK_ON_ENB_SHIFT              10
#define MT6335_AUXADC_SRCLKEN_CK_EN_MASK                 0x1
#define MT6335_AUXADC_SRCLKEN_CK_EN_SHIFT                12
#define MT6335_AUXADC_CK_AON_GPS_MASK                    0x1
#define MT6335_AUXADC_CK_AON_GPS_SHIFT                   13
#define MT6335_AUXADC_CK_AON_MD_MASK                     0x1
#define MT6335_AUXADC_CK_AON_MD_SHIFT                    14
#define MT6335_AUXADC_CK_AON_MASK                        0x1
#define MT6335_AUXADC_CK_AON_SHIFT                       15
#define MT6335_AUXADC_CON0_SET_MASK                      0xFFFF
#define MT6335_AUXADC_CON0_SET_SHIFT                     0
#define MT6335_AUXADC_CON0_CLR_MASK                      0xFFFF
#define MT6335_AUXADC_CON0_CLR_SHIFT                     0
#define MT6335_AUXADC_AVG_NUM_SMALL_MASK                 0x7
#define MT6335_AUXADC_AVG_NUM_SMALL_SHIFT                0
#define MT6335_AUXADC_AVG_NUM_LARGE_MASK                 0x7
#define MT6335_AUXADC_AVG_NUM_LARGE_SHIFT                3
#define MT6335_AUXADC_SPL_NUM_MASK                       0x3FF
#define MT6335_AUXADC_SPL_NUM_SHIFT                      6
#define MT6335_AUXADC_AVG_NUM_SEL_MASK                   0xFFF
#define MT6335_AUXADC_AVG_NUM_SEL_SHIFT                  0
#define MT6335_AUXADC_AVG_NUM_SEL_SHARE_MASK             0x1
#define MT6335_AUXADC_AVG_NUM_SEL_SHARE_SHIFT            12
#define MT6335_AUXADC_AVG_NUM_SEL_LBAT_MASK              0x1
#define MT6335_AUXADC_AVG_NUM_SEL_LBAT_SHIFT             13
#define MT6335_AUXADC_AVG_NUM_SEL_BAT_TEMP_MASK          0x1
#define MT6335_AUXADC_AVG_NUM_SEL_BAT_TEMP_SHIFT         14
#define MT6335_AUXADC_AVG_NUM_SEL_WAKEUP_MASK            0x1
#define MT6335_AUXADC_AVG_NUM_SEL_WAKEUP_SHIFT           15
#define MT6335_AUXADC_SPL_NUM_LARGE_MASK                 0x3FF
#define MT6335_AUXADC_SPL_NUM_LARGE_SHIFT                0
#define MT6335_AUXADC_SPL_NUM_SLEEP_MASK                 0x3FF
#define MT6335_AUXADC_SPL_NUM_SLEEP_SHIFT                0
#define MT6335_AUXADC_SPL_NUM_SLEEP_SEL_MASK             0x1
#define MT6335_AUXADC_SPL_NUM_SLEEP_SEL_SHIFT            15
#define MT6335_AUXADC_SPL_NUM_SEL_MASK                   0xFFF
#define MT6335_AUXADC_SPL_NUM_SEL_SHIFT                  0
#define MT6335_AUXADC_SPL_NUM_SEL_SHARE_MASK             0x1
#define MT6335_AUXADC_SPL_NUM_SEL_SHARE_SHIFT            12
#define MT6335_AUXADC_SPL_NUM_SEL_LBAT_MASK              0x1
#define MT6335_AUXADC_SPL_NUM_SEL_LBAT_SHIFT             13
#define MT6335_AUXADC_SPL_NUM_SEL_BAT_TEMP_MASK          0x1
#define MT6335_AUXADC_SPL_NUM_SEL_BAT_TEMP_SHIFT         14
#define MT6335_AUXADC_SPL_NUM_SEL_WAKEUP_MASK            0x1
#define MT6335_AUXADC_SPL_NUM_SEL_WAKEUP_SHIFT           15
#define MT6335_AUXADC_SPL_NUM_CH0_MASK                   0x3FF
#define MT6335_AUXADC_SPL_NUM_CH0_SHIFT                  0
#define MT6335_AUXADC_SPL_NUM_CH3_MASK                   0x3FF
#define MT6335_AUXADC_SPL_NUM_CH3_SHIFT                  0
#define MT6335_AUXADC_SPL_NUM_CH7_MASK                   0x3FF
#define MT6335_AUXADC_SPL_NUM_CH7_SHIFT                  0
#define MT6335_AUXADC_AVG_NUM_LBAT_MASK                  0x7
#define MT6335_AUXADC_AVG_NUM_LBAT_SHIFT                 0
#define MT6335_AUXADC_AVG_NUM_CH7_MASK                   0x7
#define MT6335_AUXADC_AVG_NUM_CH7_SHIFT                  4
#define MT6335_AUXADC_AVG_NUM_CH3_MASK                   0x7
#define MT6335_AUXADC_AVG_NUM_CH3_SHIFT                  8
#define MT6335_AUXADC_AVG_NUM_CH0_MASK                   0x7
#define MT6335_AUXADC_AVG_NUM_CH0_SHIFT                  12
#define MT6335_AUXADC_TRIM_CH0_SEL_MASK                  0x3
#define MT6335_AUXADC_TRIM_CH0_SEL_SHIFT                 0
#define MT6335_AUXADC_TRIM_CH1_SEL_MASK                  0x3
#define MT6335_AUXADC_TRIM_CH1_SEL_SHIFT                 2
#define MT6335_AUXADC_TRIM_CH2_SEL_MASK                  0x3
#define MT6335_AUXADC_TRIM_CH2_SEL_SHIFT                 4
#define MT6335_AUXADC_TRIM_CH3_SEL_MASK                  0x3
#define MT6335_AUXADC_TRIM_CH3_SEL_SHIFT                 6
#define MT6335_AUXADC_TRIM_CH4_SEL_MASK                  0x3
#define MT6335_AUXADC_TRIM_CH4_SEL_SHIFT                 8
#define MT6335_AUXADC_TRIM_CH5_SEL_MASK                  0x3
#define MT6335_AUXADC_TRIM_CH5_SEL_SHIFT                 10
#define MT6335_AUXADC_TRIM_CH6_SEL_MASK                  0x3
#define MT6335_AUXADC_TRIM_CH6_SEL_SHIFT                 12
#define MT6335_AUXADC_TRIM_CH7_SEL_MASK                  0x3
#define MT6335_AUXADC_TRIM_CH7_SEL_SHIFT                 14
#define MT6335_AUXADC_TRIM_CH8_SEL_MASK                  0x3
#define MT6335_AUXADC_TRIM_CH8_SEL_SHIFT                 0
#define MT6335_AUXADC_TRIM_CH9_SEL_MASK                  0x3
#define MT6335_AUXADC_TRIM_CH9_SEL_SHIFT                 2
#define MT6335_AUXADC_TRIM_CH10_SEL_MASK                 0x3
#define MT6335_AUXADC_TRIM_CH10_SEL_SHIFT                4
#define MT6335_AUXADC_TRIM_CH11_SEL_MASK                 0x3
#define MT6335_AUXADC_TRIM_CH11_SEL_SHIFT                6
#define MT6335_AUXADC_ADC_2S_COMP_ENB_MASK               0x1
#define MT6335_AUXADC_ADC_2S_COMP_ENB_SHIFT              14
#define MT6335_AUXADC_ADC_TRIM_COMP_MASK                 0x1
#define MT6335_AUXADC_ADC_TRIM_COMP_SHIFT                15
#define MT6335_AUXADC_SW_GAIN_TRIM_MASK                  0x7FFF
#define MT6335_AUXADC_SW_GAIN_TRIM_SHIFT                 0
#define MT6335_AUXADC_SW_OFFSET_TRIM_MASK                0x7FFF
#define MT6335_AUXADC_SW_OFFSET_TRIM_SHIFT               0
#define MT6335_AUXADC_RNG_EN_MASK                        0x1
#define MT6335_AUXADC_RNG_EN_SHIFT                       0
#define MT6335_AUXADC_TEST_MODE_MASK                     0x1
#define MT6335_AUXADC_TEST_MODE_SHIFT                    3
#define MT6335_AUXADC_BIT_SEL_MASK                       0x1
#define MT6335_AUXADC_BIT_SEL_SHIFT                      4
#define MT6335_AUXADC_START_SW_MASK                      0x1
#define MT6335_AUXADC_START_SW_SHIFT                     5
#define MT6335_AUXADC_START_SWCTRL_MASK                  0x1
#define MT6335_AUXADC_START_SWCTRL_SHIFT                 6
#define MT6335_AUXADC_TS_VBE_SEL_MASK                    0x1
#define MT6335_AUXADC_TS_VBE_SEL_SHIFT                   7
#define MT6335_AUXADC_TS_VBE_SEL_SWCTRL_MASK             0x1
#define MT6335_AUXADC_TS_VBE_SEL_SWCTRL_SHIFT            8
#define MT6335_AUXADC_VBUF_EN_MASK                       0x1
#define MT6335_AUXADC_VBUF_EN_SHIFT                      9
#define MT6335_AUXADC_VBUF_EN_SWCTRL_MASK                0x1
#define MT6335_AUXADC_VBUF_EN_SWCTRL_SHIFT               10
#define MT6335_AUXADC_OUT_SEL_MASK                       0x1
#define MT6335_AUXADC_OUT_SEL_SHIFT                      11
#define MT6335_AUXADC_DA_DAC_MASK                        0xFFF
#define MT6335_AUXADC_DA_DAC_SHIFT                       0
#define MT6335_AUXADC_DA_DAC_SWCTRL_MASK                 0x1
#define MT6335_AUXADC_DA_DAC_SWCTRL_SHIFT                12
#define MT6335_AD_AUXADC_COMP_MASK                       0x1
#define MT6335_AD_AUXADC_COMP_SHIFT                      15
#define MT6335_RG_VBUF_EXTEN_MASK                        0x1
#define MT6335_RG_VBUF_EXTEN_SHIFT                       0
#define MT6335_RG_VBUF_CALEN_MASK                        0x1
#define MT6335_RG_VBUF_CALEN_SHIFT                       1
#define MT6335_RG_VBUF_BYP_MASK                          0x1
#define MT6335_RG_VBUF_BYP_SHIFT                         2
#define MT6335_RG_AUX_RSV_MASK                           0xF
#define MT6335_RG_AUX_RSV_SHIFT                          3
#define MT6335_RG_AUXADC_CALI_MASK                       0xF
#define MT6335_RG_AUXADC_CALI_SHIFT                      7
#define MT6335_AUXADC_ADCIN_VSEN_EN_MASK                 0x1
#define MT6335_AUXADC_ADCIN_VSEN_EN_SHIFT                0
#define MT6335_AUXADC_ADCIN_VBAT_EN_MASK                 0x1
#define MT6335_AUXADC_ADCIN_VBAT_EN_SHIFT                1
#define MT6335_AUXADC_ADCIN_VSEN_MUX_EN_MASK             0x1
#define MT6335_AUXADC_ADCIN_VSEN_MUX_EN_SHIFT            2
#define MT6335_AUXADC_ADCIN_VSEN_EXT_BATON_EN_MASK       0x1
#define MT6335_AUXADC_ADCIN_VSEN_EXT_BATON_EN_SHIFT      3
#define MT6335_AUXADC_ADCIN_CHR_EN_MASK                  0x1
#define MT6335_AUXADC_ADCIN_CHR_EN_SHIFT                 4
#define MT6335_AUXADC_ADCIN_BATON_TDET_EN_MASK           0x1
#define MT6335_AUXADC_ADCIN_BATON_TDET_EN_SHIFT          5
#define MT6335_AUXADC_ACCDET_ANASWCTRL_EN_MASK           0x1
#define MT6335_AUXADC_ACCDET_ANASWCTRL_EN_SHIFT          6
#define MT6335_AUXADC_XO_THADC_EN_MASK                   0x1
#define MT6335_AUXADC_XO_THADC_EN_SHIFT                  7
#define MT6335_AUXADC_ADCIN_BATID_SW_EN_MASK             0x1
#define MT6335_AUXADC_ADCIN_BATID_SW_EN_SHIFT            8
#define MT6335_AUXADC_DIG0_RSV0_MASK                     0x3
#define MT6335_AUXADC_DIG0_RSV0_SHIFT                    9
#define MT6335_AUXADC_CHSEL_MASK                         0xF
#define MT6335_AUXADC_CHSEL_SHIFT                        11
#define MT6335_AUXADC_SWCTRL_EN_MASK                     0x1
#define MT6335_AUXADC_SWCTRL_EN_SHIFT                    15
#define MT6335_AUXADC_SOURCE_LBAT_SEL_MASK               0x1
#define MT6335_AUXADC_SOURCE_LBAT_SEL_SHIFT              0
#define MT6335_AUXADC_SOURCE_LBAT2_SEL_MASK              0x1
#define MT6335_AUXADC_SOURCE_LBAT2_SEL_SHIFT             1
#define MT6335_AUXADC_START_EXTD_MASK                    0x7F
#define MT6335_AUXADC_START_EXTD_SHIFT                   2
#define MT6335_AUXADC_DAC_EXTD_MASK                      0xF
#define MT6335_AUXADC_DAC_EXTD_SHIFT                     11
#define MT6335_AUXADC_DAC_EXTD_EN_MASK                   0x1
#define MT6335_AUXADC_DAC_EXTD_EN_SHIFT                  15
#define MT6335_AUXADC_PMU_THR_PDN_SW_MASK                0x1
#define MT6335_AUXADC_PMU_THR_PDN_SW_SHIFT               10
#define MT6335_AUXADC_PMU_THR_PDN_SEL_MASK               0x1
#define MT6335_AUXADC_PMU_THR_PDN_SEL_SHIFT              11
#define MT6335_AUXADC_PMU_THR_PDN_STATUS_MASK            0x1
#define MT6335_AUXADC_PMU_THR_PDN_STATUS_SHIFT           12
#define MT6335_AUXADC_DIG0_RSV1_MASK                     0x7
#define MT6335_AUXADC_DIG0_RSV1_SHIFT                    13
#define MT6335_AUXADC_START_SHADE_NUM_MASK               0x3FF
#define MT6335_AUXADC_START_SHADE_NUM_SHIFT              0
#define MT6335_AUXADC_START_SHADE_EN_MASK                0x1
#define MT6335_AUXADC_START_SHADE_EN_SHIFT               14
#define MT6335_AUXADC_START_SHADE_SEL_MASK               0x1
#define MT6335_AUXADC_START_SHADE_SEL_SHIFT              15
#define MT6335_AUXADC_ADC_RDY_WAKEUP_CLR_MASK            0x1
#define MT6335_AUXADC_ADC_RDY_WAKEUP_CLR_SHIFT           0
#define MT6335_AUXADC_ADC_RDY_FGADC_CLR_MASK             0x1
#define MT6335_AUXADC_ADC_RDY_FGADC_CLR_SHIFT            1
#define MT6335_AUXADC_ADC_RDY_BAT_PLUGIN_CLR_MASK        0x1
#define MT6335_AUXADC_ADC_RDY_BAT_PLUGIN_CLR_SHIFT       2
#define MT6335_AUXADC_DATA_REUSE_SEL_MASK                0x3
#define MT6335_AUXADC_DATA_REUSE_SEL_SHIFT               0
#define MT6335_AUXADC_CH0_DATA_REUSE_SEL_MASK            0x3
#define MT6335_AUXADC_CH0_DATA_REUSE_SEL_SHIFT           2
#define MT6335_AUXADC_CH1_DATA_REUSE_SEL_MASK            0x3
#define MT6335_AUXADC_CH1_DATA_REUSE_SEL_SHIFT           4
#define MT6335_AUXADC_DCXO_DATA_REUSE_SEL_MASK           0x3
#define MT6335_AUXADC_DCXO_DATA_REUSE_SEL_SHIFT          6
#define MT6335_AUXADC_DATA_REUSE_EN_MASK                 0x1
#define MT6335_AUXADC_DATA_REUSE_EN_SHIFT                8
#define MT6335_AUXADC_CH0_DATA_REUSE_EN_MASK             0x1
#define MT6335_AUXADC_CH0_DATA_REUSE_EN_SHIFT            9
#define MT6335_AUXADC_CH1_DATA_REUSE_EN_MASK             0x1
#define MT6335_AUXADC_CH1_DATA_REUSE_EN_SHIFT            10
#define MT6335_AUXADC_DCXO_DATA_REUSE_EN_MASK            0x1
#define MT6335_AUXADC_DCXO_DATA_REUSE_EN_SHIFT           11
#define MT6335_AUXADC_AUTORPT_PRD_MASK                   0x3FF
#define MT6335_AUXADC_AUTORPT_PRD_SHIFT                  0
#define MT6335_AUXADC_AUTORPT_EN_MASK                    0x1
#define MT6335_AUXADC_AUTORPT_EN_SHIFT                   15
#define MT6335_AUXADC_LBAT_DEBT_MAX_MASK                 0xFF
#define MT6335_AUXADC_LBAT_DEBT_MAX_SHIFT                0
#define MT6335_AUXADC_LBAT_DEBT_MIN_MASK                 0xFF
#define MT6335_AUXADC_LBAT_DEBT_MIN_SHIFT                8
#define MT6335_AUXADC_LBAT_DET_PRD_15_0_MASK             0xFFFF
#define MT6335_AUXADC_LBAT_DET_PRD_15_0_SHIFT            0
#define MT6335_AUXADC_LBAT_DET_PRD_19_16_MASK            0xF
#define MT6335_AUXADC_LBAT_DET_PRD_19_16_SHIFT           0
#define MT6335_AUXADC_LBAT_VOLT_MAX_MASK                 0xFFF
#define MT6335_AUXADC_LBAT_VOLT_MAX_SHIFT                0
#define MT6335_AUXADC_LBAT_IRQ_EN_MAX_MASK               0x1
#define MT6335_AUXADC_LBAT_IRQ_EN_MAX_SHIFT              12
#define MT6335_AUXADC_LBAT_EN_MAX_MASK                   0x1
#define MT6335_AUXADC_LBAT_EN_MAX_SHIFT                  13
#define MT6335_AUXADC_LBAT_MAX_IRQ_B_MASK                0x1
#define MT6335_AUXADC_LBAT_MAX_IRQ_B_SHIFT               15
#define MT6335_AUXADC_LBAT_VOLT_MIN_MASK                 0xFFF
#define MT6335_AUXADC_LBAT_VOLT_MIN_SHIFT                0
#define MT6335_AUXADC_LBAT_IRQ_EN_MIN_MASK               0x1
#define MT6335_AUXADC_LBAT_IRQ_EN_MIN_SHIFT              12
#define MT6335_AUXADC_LBAT_EN_MIN_MASK                   0x1
#define MT6335_AUXADC_LBAT_EN_MIN_SHIFT                  13
#define MT6335_AUXADC_LBAT_MIN_IRQ_B_MASK                0x1
#define MT6335_AUXADC_LBAT_MIN_IRQ_B_SHIFT               15
#define MT6335_AUXADC_LBAT_DEBOUNCE_COUNT_MAX_MASK       0x1FF
#define MT6335_AUXADC_LBAT_DEBOUNCE_COUNT_MAX_SHIFT      0
#define MT6335_AUXADC_LBAT_DEBOUNCE_COUNT_MIN_MASK       0x1FF
#define MT6335_AUXADC_LBAT_DEBOUNCE_COUNT_MIN_SHIFT      0
#define MT6335_AUXADC_ACCDET_AUTO_SPL_MASK               0x1
#define MT6335_AUXADC_ACCDET_AUTO_SPL_SHIFT              0
#define MT6335_AUXADC_ACCDET_AUTO_RQST_CLR_MASK          0x1
#define MT6335_AUXADC_ACCDET_AUTO_RQST_CLR_SHIFT         1
#define MT6335_AUXADC_ACCDET_DIG1_RSV0_MASK              0x3F
#define MT6335_AUXADC_ACCDET_DIG1_RSV0_SHIFT             2
#define MT6335_AUXADC_ACCDET_DIG0_RSV0_MASK              0xFF
#define MT6335_AUXADC_ACCDET_DIG0_RSV0_SHIFT             8
#define MT6335_AUXADC_THR_DEBT_MAX_MASK                  0xFF
#define MT6335_AUXADC_THR_DEBT_MAX_SHIFT                 0
#define MT6335_AUXADC_THR_DEBT_MIN_MASK                  0xFF
#define MT6335_AUXADC_THR_DEBT_MIN_SHIFT                 8
#define MT6335_AUXADC_THR_DET_PRD_15_0_MASK              0xFFFF
#define MT6335_AUXADC_THR_DET_PRD_15_0_SHIFT             0
#define MT6335_AUXADC_THR_DET_PRD_19_16_MASK             0xF
#define MT6335_AUXADC_THR_DET_PRD_19_16_SHIFT            0
#define MT6335_AUXADC_THR_VOLT_MAX_MASK                  0xFFF
#define MT6335_AUXADC_THR_VOLT_MAX_SHIFT                 0
#define MT6335_AUXADC_THR_IRQ_EN_MAX_MASK                0x1
#define MT6335_AUXADC_THR_IRQ_EN_MAX_SHIFT               12
#define MT6335_AUXADC_THR_EN_MAX_MASK                    0x1
#define MT6335_AUXADC_THR_EN_MAX_SHIFT                   13
#define MT6335_AUXADC_THR_MAX_IRQ_B_MASK                 0x1
#define MT6335_AUXADC_THR_MAX_IRQ_B_SHIFT                15
#define MT6335_AUXADC_THR_VOLT_MIN_MASK                  0xFFF
#define MT6335_AUXADC_THR_VOLT_MIN_SHIFT                 0
#define MT6335_AUXADC_THR_IRQ_EN_MIN_MASK                0x1
#define MT6335_AUXADC_THR_IRQ_EN_MIN_SHIFT               12
#define MT6335_AUXADC_THR_EN_MIN_MASK                    0x1
#define MT6335_AUXADC_THR_EN_MIN_SHIFT                   13
#define MT6335_AUXADC_THR_MIN_IRQ_B_MASK                 0x1
#define MT6335_AUXADC_THR_MIN_IRQ_B_SHIFT                15
#define MT6335_AUXADC_THR_DEBOUNCE_COUNT_MAX_MASK        0x1FF
#define MT6335_AUXADC_THR_DEBOUNCE_COUNT_MAX_SHIFT       0
#define MT6335_AUXADC_THR_DEBOUNCE_COUNT_MIN_MASK        0x1FF
#define MT6335_AUXADC_THR_DEBOUNCE_COUNT_MIN_SHIFT       0
#define MT6335_EFUSE_GAIN_CH4_TRIM_MASK                  0xFFF
#define MT6335_EFUSE_GAIN_CH4_TRIM_SHIFT                 0
#define MT6335_EFUSE_OFFSET_CH4_TRIM_MASK                0x7FF
#define MT6335_EFUSE_OFFSET_CH4_TRIM_SHIFT               0
#define MT6335_EFUSE_GAIN_CH0_TRIM_MASK                  0xFFF
#define MT6335_EFUSE_GAIN_CH0_TRIM_SHIFT                 0
#define MT6335_EFUSE_OFFSET_CH0_TRIM_MASK                0x7FF
#define MT6335_EFUSE_OFFSET_CH0_TRIM_SHIFT               0
#define MT6335_EFUSE_GAIN_CH7_TRIM_MASK                  0xFFF
#define MT6335_EFUSE_GAIN_CH7_TRIM_SHIFT                 0
#define MT6335_EFUSE_OFFSET_CH7_TRIM_MASK                0x7FF
#define MT6335_EFUSE_OFFSET_CH7_TRIM_SHIFT               0
#define MT6335_AUXADC_FGADC_START_SW_MASK                0x1
#define MT6335_AUXADC_FGADC_START_SW_SHIFT               0
#define MT6335_AUXADC_FGADC_START_SEL_MASK               0x1
#define MT6335_AUXADC_FGADC_START_SEL_SHIFT              1
#define MT6335_AUXADC_FGADC_R_SW_MASK                    0x1
#define MT6335_AUXADC_FGADC_R_SW_SHIFT                   2
#define MT6335_AUXADC_FGADC_R_SEL_MASK                   0x1
#define MT6335_AUXADC_FGADC_R_SEL_SHIFT                  3
#define MT6335_AUXADC_BAT_PLUGIN_START_SW_MASK           0x1
#define MT6335_AUXADC_BAT_PLUGIN_START_SW_SHIFT          4
#define MT6335_AUXADC_BAT_PLUGIN_START_SEL_MASK          0x1
#define MT6335_AUXADC_BAT_PLUGIN_START_SEL_SHIFT         5
#define MT6335_AUXADC_DBG_DIG0_RSV2_MASK                 0xF
#define MT6335_AUXADC_DBG_DIG0_RSV2_SHIFT                6
#define MT6335_AUXADC_DBG_DIG1_RSV2_MASK                 0x3F
#define MT6335_AUXADC_DBG_DIG1_RSV2_SHIFT                10
#define MT6335_AUXADC_IMPEDANCE_CNT_MASK                 0x3F
#define MT6335_AUXADC_IMPEDANCE_CNT_SHIFT                0
#define MT6335_AUXADC_IMPEDANCE_CHSEL_MASK               0x1
#define MT6335_AUXADC_IMPEDANCE_CHSEL_SHIFT              6
#define MT6335_AUXADC_IMPEDANCE_IRQ_CLR_MASK             0x1
#define MT6335_AUXADC_IMPEDANCE_IRQ_CLR_SHIFT            7
#define MT6335_AUXADC_IMPEDANCE_IRQ_STATUS_MASK          0x1
#define MT6335_AUXADC_IMPEDANCE_IRQ_STATUS_SHIFT         8
#define MT6335_AUXADC_CLR_IMP_CNT_STOP_MASK              0x1
#define MT6335_AUXADC_CLR_IMP_CNT_STOP_SHIFT             14
#define MT6335_AUXADC_IMPEDANCE_MODE_MASK                0x1
#define MT6335_AUXADC_IMPEDANCE_MODE_SHIFT               15
#define MT6335_AUXADC_IMP_AUTORPT_PRD_MASK               0x3FF
#define MT6335_AUXADC_IMP_AUTORPT_PRD_SHIFT              0
#define MT6335_AUXADC_IMP_AUTORPT_EN_MASK                0x1
#define MT6335_AUXADC_IMP_AUTORPT_EN_SHIFT               15
#define MT6335_AUXADC_BAT_TEMP_FROZE_EN_MASK             0x1
#define MT6335_AUXADC_BAT_TEMP_FROZE_EN_SHIFT            0
#define MT6335_AUXADC_BAT_TEMP_DEBT_MAX_MASK             0xFF
#define MT6335_AUXADC_BAT_TEMP_DEBT_MAX_SHIFT            0
#define MT6335_AUXADC_BAT_TEMP_DEBT_MIN_MASK             0xFF
#define MT6335_AUXADC_BAT_TEMP_DEBT_MIN_SHIFT            8
#define MT6335_AUXADC_BAT_TEMP_DET_PRD_15_0_MASK         0xFFFF
#define MT6335_AUXADC_BAT_TEMP_DET_PRD_15_0_SHIFT        0
#define MT6335_AUXADC_BAT_TEMP_DET_PRD_19_16_MASK        0xF
#define MT6335_AUXADC_BAT_TEMP_DET_PRD_19_16_SHIFT       0
#define MT6335_AUXADC_BAT_TEMP_VOLT_MAX_MASK             0xFFF
#define MT6335_AUXADC_BAT_TEMP_VOLT_MAX_SHIFT            0
#define MT6335_AUXADC_BAT_TEMP_IRQ_EN_MAX_MASK           0x1
#define MT6335_AUXADC_BAT_TEMP_IRQ_EN_MAX_SHIFT          12
#define MT6335_AUXADC_BAT_TEMP_EN_MAX_MASK               0x1
#define MT6335_AUXADC_BAT_TEMP_EN_MAX_SHIFT              13
#define MT6335_AUXADC_BAT_TEMP_MAX_IRQ_B_MASK            0x1
#define MT6335_AUXADC_BAT_TEMP_MAX_IRQ_B_SHIFT           15
#define MT6335_AUXADC_BAT_TEMP_VOLT_MIN_MASK             0xFFF
#define MT6335_AUXADC_BAT_TEMP_VOLT_MIN_SHIFT            0
#define MT6335_AUXADC_BAT_TEMP_IRQ_EN_MIN_MASK           0x1
#define MT6335_AUXADC_BAT_TEMP_IRQ_EN_MIN_SHIFT          12
#define MT6335_AUXADC_BAT_TEMP_EN_MIN_MASK               0x1
#define MT6335_AUXADC_BAT_TEMP_EN_MIN_SHIFT              13
#define MT6335_AUXADC_BAT_TEMP_MIN_IRQ_B_MASK            0x1
#define MT6335_AUXADC_BAT_TEMP_MIN_IRQ_B_SHIFT           15
#define MT6335_AUXADC_BAT_TEMP_DEBOUNCE_COUNT_MAX_MASK   0x1FF
#define MT6335_AUXADC_BAT_TEMP_DEBOUNCE_COUNT_MAX_SHIFT  0
#define MT6335_AUXADC_BAT_TEMP_DEBOUNCE_COUNT_MIN_MASK   0x1FF
#define MT6335_AUXADC_BAT_TEMP_DEBOUNCE_COUNT_MIN_SHIFT  0
#define MT6335_AUXADC_LBAT2_DEBT_MAX_MASK                0xFF
#define MT6335_AUXADC_LBAT2_DEBT_MAX_SHIFT               0
#define MT6335_AUXADC_LBAT2_DEBT_MIN_MASK                0xFF
#define MT6335_AUXADC_LBAT2_DEBT_MIN_SHIFT               8
#define MT6335_AUXADC_LBAT2_DET_PRD_15_0_MASK            0xFFFF
#define MT6335_AUXADC_LBAT2_DET_PRD_15_0_SHIFT           0
#define MT6335_AUXADC_LBAT2_DET_PRD_19_16_MASK           0xF
#define MT6335_AUXADC_LBAT2_DET_PRD_19_16_SHIFT          0
#define MT6335_AUXADC_LBAT2_VOLT_MAX_MASK                0xFFF
#define MT6335_AUXADC_LBAT2_VOLT_MAX_SHIFT               0
#define MT6335_AUXADC_LBAT2_IRQ_EN_MAX_MASK              0x1
#define MT6335_AUXADC_LBAT2_IRQ_EN_MAX_SHIFT             12
#define MT6335_AUXADC_LBAT2_EN_MAX_MASK                  0x1
#define MT6335_AUXADC_LBAT2_EN_MAX_SHIFT                 13
#define MT6335_AUXADC_LBAT2_MAX_IRQ_B_MASK               0x1
#define MT6335_AUXADC_LBAT2_MAX_IRQ_B_SHIFT              15
#define MT6335_AUXADC_LBAT2_VOLT_MIN_MASK                0xFFF
#define MT6335_AUXADC_LBAT2_VOLT_MIN_SHIFT               0
#define MT6335_AUXADC_LBAT2_IRQ_EN_MIN_MASK              0x1
#define MT6335_AUXADC_LBAT2_IRQ_EN_MIN_SHIFT             12
#define MT6335_AUXADC_LBAT2_EN_MIN_MASK                  0x1
#define MT6335_AUXADC_LBAT2_EN_MIN_SHIFT                 13
#define MT6335_AUXADC_LBAT2_MIN_IRQ_B_MASK               0x1
#define MT6335_AUXADC_LBAT2_MIN_IRQ_B_SHIFT              15
#define MT6335_AUXADC_LBAT2_DEBOUNCE_COUNT_MAX_MASK      0x1FF
#define MT6335_AUXADC_LBAT2_DEBOUNCE_COUNT_MAX_SHIFT     0
#define MT6335_AUXADC_LBAT2_DEBOUNCE_COUNT_MIN_MASK      0x1FF
#define MT6335_AUXADC_LBAT2_DEBOUNCE_COUNT_MIN_SHIFT     0
#define MT6335_AUXADC_MDBG_DET_PRD_MASK                  0x3FF
#define MT6335_AUXADC_MDBG_DET_PRD_SHIFT                 0
#define MT6335_AUXADC_MDBG_DET_EN_MASK                   0x1
#define MT6335_AUXADC_MDBG_DET_EN_SHIFT                  15
#define MT6335_AUXADC_MDBG_R_PTR_MASK                    0x3F
#define MT6335_AUXADC_MDBG_R_PTR_SHIFT                   0
#define MT6335_AUXADC_MDBG_W_PTR_MASK                    0x3F
#define MT6335_AUXADC_MDBG_W_PTR_SHIFT                   8
#define MT6335_AUXADC_MDBG_BUF_LENGTH_MASK               0x3F
#define MT6335_AUXADC_MDBG_BUF_LENGTH_SHIFT              0
#define MT6335_AUXADC_MDRT_DET_PRD_MASK                  0x3FF
#define MT6335_AUXADC_MDRT_DET_PRD_SHIFT                 0
#define MT6335_AUXADC_MDRT_DET_EN_MASK                   0x1
#define MT6335_AUXADC_MDRT_DET_EN_SHIFT                  15
#define MT6335_AUXADC_MDRT_DET_WKUP_START_CNT_MASK       0xFFF
#define MT6335_AUXADC_MDRT_DET_WKUP_START_CNT_SHIFT      0
#define MT6335_AUXADC_MDRT_DET_WKUP_START_CLR_MASK       0x1
#define MT6335_AUXADC_MDRT_DET_WKUP_START_CLR_SHIFT      15
#define MT6335_AUXADC_MDRT_DET_WKUP_START_MASK           0x1
#define MT6335_AUXADC_MDRT_DET_WKUP_START_SHIFT          0
#define MT6335_AUXADC_MDRT_DET_WKUP_START_SEL_MASK       0x1
#define MT6335_AUXADC_MDRT_DET_WKUP_START_SEL_SHIFT      1
#define MT6335_AUXADC_MDRT_DET_WKUP_EN_MASK              0x1
#define MT6335_AUXADC_MDRT_DET_WKUP_EN_SHIFT             2
#define MT6335_AUXADC_MDRT_DET_SRCLKEN_IND_MASK          0x1
#define MT6335_AUXADC_MDRT_DET_SRCLKEN_IND_SHIFT         3
#define MT6335_AUXADC_MDRT_DET_RDY_ST_PRD_MASK           0x3FF
#define MT6335_AUXADC_MDRT_DET_RDY_ST_PRD_SHIFT          0
#define MT6335_AUXADC_MDRT_DET_RDY_ST_EN_MASK            0x1
#define MT6335_AUXADC_MDRT_DET_RDY_ST_EN_SHIFT           15
#define MT6335_AUXADC_MDRT_DET_START_SEL_MASK            0x1
#define MT6335_AUXADC_MDRT_DET_START_SEL_SHIFT           0
#define MT6335_AUXADC_JEITA_IRQ_EN_MASK                  0x1
#define MT6335_AUXADC_JEITA_IRQ_EN_SHIFT                 0
#define MT6335_AUXADC_JEITA_EN_MASK                      0x1
#define MT6335_AUXADC_JEITA_EN_SHIFT                     1
#define MT6335_AUXADC_JEITA_DET_PRD_MASK                 0xF
#define MT6335_AUXADC_JEITA_DET_PRD_SHIFT                2
#define MT6335_AUXADC_JEITA_DEBT_MASK                    0xF
#define MT6335_AUXADC_JEITA_DEBT_SHIFT                   6
#define MT6335_AUXADC_JEITA_MIPI_DIS_MASK                0x1
#define MT6335_AUXADC_JEITA_MIPI_DIS_SHIFT               10
#define MT6335_AUXADC_JEITA_FROZE_EN_MASK                0x1
#define MT6335_AUXADC_JEITA_FROZE_EN_SHIFT               11
#define MT6335_AUXADC_JEITA_VOLT_HOT_MASK                0xFFF
#define MT6335_AUXADC_JEITA_VOLT_HOT_SHIFT               0
#define MT6335_AUXADC_JEITA_HOT_IRQ_MASK                 0x1
#define MT6335_AUXADC_JEITA_HOT_IRQ_SHIFT                15
#define MT6335_AUXADC_JEITA_VOLT_WARM_MASK               0xFFF
#define MT6335_AUXADC_JEITA_VOLT_WARM_SHIFT              0
#define MT6335_AUXADC_JEITA_WARM_IRQ_MASK                0x1
#define MT6335_AUXADC_JEITA_WARM_IRQ_SHIFT               15
#define MT6335_AUXADC_JEITA_VOLT_COOL_MASK               0xFFF
#define MT6335_AUXADC_JEITA_VOLT_COOL_SHIFT              0
#define MT6335_AUXADC_JEITA_COOL_IRQ_MASK                0x1
#define MT6335_AUXADC_JEITA_COOL_IRQ_SHIFT               15
#define MT6335_AUXADC_JEITA_VOLT_COLD_MASK               0xFFF
#define MT6335_AUXADC_JEITA_VOLT_COLD_SHIFT              0
#define MT6335_AUXADC_JEITA_COLD_IRQ_MASK                0x1
#define MT6335_AUXADC_JEITA_COLD_IRQ_SHIFT               15
#define MT6335_AUXADC_JEITA_DEBOUNCE_COUNT_COLD_MASK     0xF
#define MT6335_AUXADC_JEITA_DEBOUNCE_COUNT_COLD_SHIFT    0
#define MT6335_AUXADC_JEITA_DEBOUNCE_COUNT_COOL_MASK     0xF
#define MT6335_AUXADC_JEITA_DEBOUNCE_COUNT_COOL_SHIFT    4
#define MT6335_AUXADC_JEITA_DEBOUNCE_COUNT_WARM_MASK     0xF
#define MT6335_AUXADC_JEITA_DEBOUNCE_COUNT_WARM_SHIFT    8
#define MT6335_AUXADC_JEITA_DEBOUNCE_COUNT_HOT_MASK      0xF
#define MT6335_AUXADC_JEITA_DEBOUNCE_COUNT_HOT_SHIFT     12
#define MT6335_AUXADC_DCXO_MDRT_DET_PRD_MASK             0x3FF
#define MT6335_AUXADC_DCXO_MDRT_DET_PRD_SHIFT            0
#define MT6335_AUXADC_DCXO_MDRT_DET_EN_MASK              0x1
#define MT6335_AUXADC_DCXO_MDRT_DET_EN_SHIFT             15
#define MT6335_AUXADC_DCXO_MDRT_DET_WKUP_START_CNT_MASK  0xFFF
#define MT6335_AUXADC_DCXO_MDRT_DET_WKUP_START_CNT_SHIFT 0
#define MT6335_AUXADC_DCXO_MDRT_DET_WKUP_START_CLR_MASK  0x1
#define MT6335_AUXADC_DCXO_MDRT_DET_WKUP_START_CLR_SHIFT 15
#define MT6335_AUXADC_DCXO_MDRT_DET_WKUP_EN_MASK         0x1
#define MT6335_AUXADC_DCXO_MDRT_DET_WKUP_EN_SHIFT        0
#define MT6335_AUXADC_DCXO_MDRT_DET_WKUP_START_SEL_MASK  0x1
#define MT6335_AUXADC_DCXO_MDRT_DET_WKUP_START_SEL_SHIFT 1
#define MT6335_AUXADC_DCXO_MDRT_DET_WKUP_START_MASK      0x1
#define MT6335_AUXADC_DCXO_MDRT_DET_WKUP_START_SHIFT     2
#define MT6335_AUXADC_DCXO_MDRT_DET_SRCLKEN_IND_MASK     0x1
#define MT6335_AUXADC_DCXO_MDRT_DET_SRCLKEN_IND_SHIFT    3
#define MT6335_AUXADC_DCXO_CH4_MUX_AP_SEL_MASK           0x1
#define MT6335_AUXADC_DCXO_CH4_MUX_AP_SEL_SHIFT          4
#define MT6335_AUXADC_NAG_EN_MASK                        0x1
#define MT6335_AUXADC_NAG_EN_SHIFT                       0
#define MT6335_AUXADC_NAG_CLR_MASK                       0x1
#define MT6335_AUXADC_NAG_CLR_SHIFT                      1
#define MT6335_AUXADC_NAG_VBAT1_SEL_MASK                 0x1
#define MT6335_AUXADC_NAG_VBAT1_SEL_SHIFT                2
#define MT6335_AUXADC_NAG_PRD_MASK                       0x7F
#define MT6335_AUXADC_NAG_PRD_SHIFT                      3
#define MT6335_AUXADC_NAG_IRQ_EN_MASK                    0x1
#define MT6335_AUXADC_NAG_IRQ_EN_SHIFT                   10
#define MT6335_AUXADC_NAG_C_DLTV_IRQ_MASK                0x1
#define MT6335_AUXADC_NAG_C_DLTV_IRQ_SHIFT               15
#define MT6335_AUXADC_NAG_ZCV_MASK                       0x7FFF
#define MT6335_AUXADC_NAG_ZCV_SHIFT                      0
#define MT6335_AUXADC_NAG_C_DLTV_TH_15_0_MASK            0xFFFF
#define MT6335_AUXADC_NAG_C_DLTV_TH_15_0_SHIFT           0
#define MT6335_AUXADC_NAG_C_DLTV_TH_26_16_MASK           0x7FF
#define MT6335_AUXADC_NAG_C_DLTV_TH_26_16_SHIFT          0
#define MT6335_AUXADC_NAG_CNT_15_0_MASK                  0xFFFF
#define MT6335_AUXADC_NAG_CNT_15_0_SHIFT                 0
#define MT6335_AUXADC_NAG_CNT_25_16_MASK                 0x3FF
#define MT6335_AUXADC_NAG_CNT_25_16_SHIFT                0
#define MT6335_AUXADC_NAG_DLTV_MASK                      0xFFFF
#define MT6335_AUXADC_NAG_DLTV_SHIFT                     0
#define MT6335_AUXADC_NAG_C_DLTV_15_0_MASK               0xFFFF
#define MT6335_AUXADC_NAG_C_DLTV_15_0_SHIFT              0
#define MT6335_AUXADC_NAG_C_DLTV_26_16_MASK              0x7FF
#define MT6335_AUXADC_NAG_C_DLTV_26_16_SHIFT             0
#define MT6335_AUXADC_EFUSE_DEGC_CALI_MASK               0x3F
#define MT6335_AUXADC_EFUSE_DEGC_CALI_SHIFT              0
#define MT6335_AUXADC_EFUSE_ADC_CALI_EN_MASK             0x1
#define MT6335_AUXADC_EFUSE_ADC_CALI_EN_SHIFT            8
#define MT6335_AUXADC_EFUSE_1RSV0_MASK                   0x7F
#define MT6335_AUXADC_EFUSE_1RSV0_SHIFT                  9
#define MT6335_AUXADC_EFUSE_O_VTS_MASK                   0x1FFF
#define MT6335_AUXADC_EFUSE_O_VTS_SHIFT                  0
#define MT6335_AUXADC_EFUSE_2RSV0_MASK                   0x7
#define MT6335_AUXADC_EFUSE_2RSV0_SHIFT                  13
#define MT6335_AUXADC_EFUSE_O_SLOPE_MASK                 0x3F
#define MT6335_AUXADC_EFUSE_O_SLOPE_SHIFT                0
#define MT6335_AUXADC_EFUSE_O_SLOPE_SIGN_MASK            0x1
#define MT6335_AUXADC_EFUSE_O_SLOPE_SIGN_SHIFT           8
#define MT6335_AUXADC_EFUSE_3RSV0_MASK                   0x7F
#define MT6335_AUXADC_EFUSE_3RSV0_SHIFT                  9
#define MT6335_AUXADC_EFUSE_AUXADC_RSV_MASK              0xF
#define MT6335_AUXADC_EFUSE_AUXADC_RSV_SHIFT             0
#define MT6335_AUXADC_EFUSE_ID_MASK                      0x1
#define MT6335_AUXADC_EFUSE_ID_SHIFT                     4
#define MT6335_AUXADC_EFUSE_4RSV0_MASK                   0x7FF
#define MT6335_AUXADC_EFUSE_4RSV0_SHIFT                  5
#define MT6335_AUXADC_RSV_1RSV0_MASK                     0xFFFF
#define MT6335_AUXADC_RSV_1RSV0_SHIFT                    0
#define MT6335_DA_ADCIN_VBAT_EN_MASK                     0x1
#define MT6335_DA_ADCIN_VBAT_EN_SHIFT                    0
#define MT6335_DA_AUXADC_VBAT_EN_MASK                    0x1
#define MT6335_DA_AUXADC_VBAT_EN_SHIFT                   1
#define MT6335_DA_ADCIN_VSEN_MUX_EN_MASK                 0x1
#define MT6335_DA_ADCIN_VSEN_MUX_EN_SHIFT                2
#define MT6335_DA_ADCIN_VSEN_EN_MASK                     0x1
#define MT6335_DA_ADCIN_VSEN_EN_SHIFT                    3
#define MT6335_DA_ADCIN_CHR_EN_MASK                      0x1
#define MT6335_DA_ADCIN_CHR_EN_SHIFT                     4
#define MT6335_DA_BATON_TDET_EN_MASK                     0x1
#define MT6335_DA_BATON_TDET_EN_SHIFT                    5
#define MT6335_DA_ADCIN_BATID_SW_EN_MASK                 0x1
#define MT6335_DA_ADCIN_BATID_SW_EN_SHIFT                6
#define MT6335_RG_VCDT_HV_EN_MASK                        0x1
#define MT6335_RG_VCDT_HV_EN_SHIFT                       0
#define MT6335_RGS_CHR_LDO_DET_MASK                      0x1
#define MT6335_RGS_CHR_LDO_DET_SHIFT                     1
#define MT6335_RG_VCDT_DEB_SEL_MASK                      0x1
#define MT6335_RG_VCDT_DEB_SEL_SHIFT                     2
#define MT6335_RG_PCHR_FT_CTRL_MASK                      0x1
#define MT6335_RG_PCHR_FT_CTRL_SHIFT                     4
#define MT6335_RGS_CHRDET_MASK                           0x1
#define MT6335_RGS_CHRDET_SHIFT                          5
#define MT6335_RGS_VCDT_LV_DET_MASK                      0x1
#define MT6335_RGS_VCDT_LV_DET_SHIFT                     6
#define MT6335_RGS_VCDT_HV_DET_MASK                      0x1
#define MT6335_RGS_VCDT_HV_DET_SHIFT                     7
#define MT6335_RG_VCDT_LV_VTH_MASK                       0xF
#define MT6335_RG_VCDT_LV_VTH_SHIFT                      0
#define MT6335_RG_VCDT_HV_VTH_MASK                       0xF
#define MT6335_RG_VCDT_HV_VTH_SHIFT                      4
#define MT6335_RGS_PCHR_FLAG_OUT_MASK                    0xF
#define MT6335_RGS_PCHR_FLAG_OUT_SHIFT                   0
#define MT6335_RG_PCHR_FLAG_EN_MASK                      0x1
#define MT6335_RG_PCHR_FLAG_EN_SHIFT                     4
#define MT6335_RG_PCHR_FLAG_SEL_MASK                     0xF
#define MT6335_RG_PCHR_FLAG_SEL_SHIFT                    0
#define MT6335_RG_PCHR_RSV_MASK                          0xFF
#define MT6335_RG_PCHR_RSV_SHIFT                         0
#define MT6335_RG_ENVTEM_D_MASK                          0x1
#define MT6335_RG_ENVTEM_D_SHIFT                         0
#define MT6335_RG_ENVTEM_EN_MASK                         0x1
#define MT6335_RG_ENVTEM_EN_SHIFT                        1
#define MT6335_RG_BATON_EN_MASK                          0x1
#define MT6335_RG_BATON_EN_SHIFT                         0
#define MT6335_RG_BATON_HT_EN_RSV0_MASK                  0x1
#define MT6335_RG_BATON_HT_EN_RSV0_SHIFT                 1
#define MT6335_BATON_TDET_EN_MASK                        0x1
#define MT6335_BATON_TDET_EN_SHIFT                       2
#define MT6335_RG_BATON_HT_TRIM_MASK                     0x7
#define MT6335_RG_BATON_HT_TRIM_SHIFT                    4
#define MT6335_RG_BATON_HT_TRIM_SET_MASK                 0x1
#define MT6335_RG_BATON_HT_TRIM_SET_SHIFT                7
#define MT6335_RG_BATON_TDET_EN_MASK                     0x1
#define MT6335_RG_BATON_TDET_EN_SHIFT                    8
#define MT6335_RG_OTG_BVALID_EN_MASK                     0x1
#define MT6335_RG_OTG_BVALID_EN_SHIFT                    5
#define MT6335_RGS_OTG_BVALID_DET_MASK                   0x1
#define MT6335_RGS_OTG_BVALID_DET_SHIFT                  6
#define MT6335_RG_PCHR_RV_MASK                           0xF
#define MT6335_RG_PCHR_RV_SHIFT                          0
#define MT6335_RG_USBDL_RST_MASK                         0x1
#define MT6335_RG_USBDL_RST_SHIFT                        2
#define MT6335_RG_USBDL_SET_MASK                         0x1
#define MT6335_RG_USBDL_SET_SHIFT                        3
#define MT6335_RG_ADCIN_VSEN_MUX_EN_MASK                 0x1
#define MT6335_RG_ADCIN_VSEN_MUX_EN_SHIFT                8
#define MT6335_RG_ADCIN_VSEN_EXT_BATON_EN_MASK           0x1
#define MT6335_RG_ADCIN_VSEN_EXT_BATON_EN_SHIFT          9
#define MT6335_RG_ADCIN_VBAT_EN_MASK                     0x1
#define MT6335_RG_ADCIN_VBAT_EN_SHIFT                    10
#define MT6335_RG_ADCIN_VSEN_EN_MASK                     0x1
#define MT6335_RG_ADCIN_VSEN_EN_SHIFT                    11
#define MT6335_RG_ADCIN_CHR_EN_MASK                      0x1
#define MT6335_RG_ADCIN_CHR_EN_SHIFT                     12
#define MT6335_RG_UVLO_VTHL_MASK                         0x1F
#define MT6335_RG_UVLO_VTHL_SHIFT                        0
#define MT6335_RG_UVLO_VH_LAT_MASK                       0x1
#define MT6335_RG_UVLO_VH_LAT_SHIFT                      7
#define MT6335_RG_LBAT_INT_VTH_MASK                      0x1F
#define MT6335_RG_LBAT_INT_VTH_SHIFT                     0
#define MT6335_RG_BGR_RSEL_MASK                          0x7
#define MT6335_RG_BGR_RSEL_SHIFT                         0
#define MT6335_RG_BGR_UNCHOP_PH_MASK                     0x1
#define MT6335_RG_BGR_UNCHOP_PH_SHIFT                    4
#define MT6335_RG_BGR_UNCHOP_MASK                        0x1
#define MT6335_RG_BGR_UNCHOP_SHIFT                       5
#define MT6335_RGS_BATON_HV_MASK                         0x1
#define MT6335_RGS_BATON_HV_SHIFT                        6
#define MT6335_RG_HW_VTH_CTRL_MASK                       0x1
#define MT6335_RG_HW_VTH_CTRL_SHIFT                      11
#define MT6335_RG_HW_VTH2_MASK                           0x3
#define MT6335_RG_HW_VTH2_SHIFT                          12
#define MT6335_RG_HW_VTH1_MASK                           0x3
#define MT6335_RG_HW_VTH1_SHIFT                          14
#define MT6335_RG_BGR_TRIM_EN_MASK                       0x1
#define MT6335_RG_BGR_TRIM_EN_SHIFT                      0
#define MT6335_RG_ICHRG_TRIM_MASK                        0xF
#define MT6335_RG_ICHRG_TRIM_SHIFT                       4
#define MT6335_RG_BGR_TRIM_MASK                          0x1F
#define MT6335_RG_BGR_TRIM_SHIFT                         0
#define MT6335_RG_CHR_OSC_TRIM_MASK                      0x1F
#define MT6335_RG_CHR_OSC_TRIM_SHIFT                     0
#define MT6335_DA_QI_BGR_EXT_BUF_EN_MASK                 0x1
#define MT6335_DA_QI_BGR_EXT_BUF_EN_SHIFT                5
#define MT6335_RG_BGR_TEST_EN_MASK                       0x1
#define MT6335_RG_BGR_TEST_EN_SHIFT                      6
#define MT6335_RG_BGR_TEST_RSTB_MASK                     0x1
#define MT6335_RG_BGR_TEST_RSTB_SHIFT                    7
#define MT6335_RG_QI_BATON_LT_EN_MASK                    0x1
#define MT6335_RG_QI_BATON_LT_EN_SHIFT                   0
#define MT6335_RGS_BATON_UNDET_MASK                      0x1
#define MT6335_RGS_BATON_UNDET_SHIFT                     1
#define MT6335_RG_VCDT_TRIM_MASK                         0xF
#define MT6335_RG_VCDT_TRIM_SHIFT                        0
#define MT6335_RG_INDICATOR_TRIM_MASK                    0x7
#define MT6335_RG_INDICATOR_TRIM_SHIFT                   10
#define MT6335_EOSC_CALI_START_MASK                      0x1
#define MT6335_EOSC_CALI_START_SHIFT                     0
#define MT6335_EOSC_CALI_TD_MASK                         0x7
#define MT6335_EOSC_CALI_TD_SHIFT                        5
#define MT6335_EOSC_CALI_TEST_MASK                       0xF
#define MT6335_EOSC_CALI_TEST_SHIFT                      9
#define MT6335_EOSC_CALI_DCXO_RDY_TD_MASK                0x7
#define MT6335_EOSC_CALI_DCXO_RDY_TD_SHIFT               0
#define MT6335_FRC_VTCXO0_ON_MASK                        0x1
#define MT6335_FRC_VTCXO0_ON_SHIFT                       8
#define MT6335_EOSC_CALI_RSV_MASK                        0xF
#define MT6335_EOSC_CALI_RSV_SHIFT                       11
#define MT6335_VRTC_PWM_MODE_MASK                        0x1
#define MT6335_VRTC_PWM_MODE_SHIFT                       0
#define MT6335_VRTC_PWM_RSV_MASK                         0x7
#define MT6335_VRTC_PWM_RSV_SHIFT                        1
#define MT6335_VRTC_PWM_L_DUTY_MASK                      0xF
#define MT6335_VRTC_PWM_L_DUTY_SHIFT                     4
#define MT6335_VRTC_PWM_H_DUTY_MASK                      0xF
#define MT6335_VRTC_PWM_H_DUTY_SHIFT                     8
#define MT6335_VRTC_CAP_SEL_MASK                         0x1
#define MT6335_VRTC_CAP_SEL_SHIFT                        12
#define MT6335_GPIO_DIR0_MASK                            0x3FF
#define MT6335_GPIO_DIR0_SHIFT                           0
#define MT6335_GPIO_DIR0_SET_MASK                        0xFFFF
#define MT6335_GPIO_DIR0_SET_SHIFT                       0
#define MT6335_GPIO_DIR0_CLR_MASK                        0xFFFF
#define MT6335_GPIO_DIR0_CLR_SHIFT                       0
#define MT6335_GPIO_PULLEN0_MASK                         0x3FF
#define MT6335_GPIO_PULLEN0_SHIFT                        0
#define MT6335_GPIO_PULLEN0_SET_MASK                     0xFFFF
#define MT6335_GPIO_PULLEN0_SET_SHIFT                    0
#define MT6335_GPIO_PULLEN0_CLR_MASK                     0xFFFF
#define MT6335_GPIO_PULLEN0_CLR_SHIFT                    0
#define MT6335_GPIO_PULLSEL0_MASK                        0x3FF
#define MT6335_GPIO_PULLSEL0_SHIFT                       0
#define MT6335_GPIO_PULLSEL0_SET_MASK                    0xFFFF
#define MT6335_GPIO_PULLSEL0_SET_SHIFT                   0
#define MT6335_GPIO_PULLSEL0_CLR_MASK                    0xFFFF
#define MT6335_GPIO_PULLSEL0_CLR_SHIFT                   0
#define MT6335_GPIO_DINV0_MASK                           0x3FF
#define MT6335_GPIO_DINV0_SHIFT                          0
#define MT6335_GPIO_DINV0_SET_MASK                       0xFFFF
#define MT6335_GPIO_DINV0_SET_SHIFT                      0
#define MT6335_GPIO_DINV0_CLR_MASK                       0xFFFF
#define MT6335_GPIO_DINV0_CLR_SHIFT                      0
#define MT6335_GPIO_DOUT0_MASK                           0x3FF
#define MT6335_GPIO_DOUT0_SHIFT                          0
#define MT6335_GPIO_DOUT0_SET_MASK                       0xFFFF
#define MT6335_GPIO_DOUT0_SET_SHIFT                      0
#define MT6335_GPIO_DOUT0_CLR_MASK                       0xFFFF
#define MT6335_GPIO_DOUT0_CLR_SHIFT                      0
#define MT6335_GPIO_PI0_MASK                             0x3FF
#define MT6335_GPIO_PI0_SHIFT                            0
#define MT6335_GPIO_POE0_MASK                            0x3FF
#define MT6335_GPIO_POE0_SHIFT                           0
#define MT6335_GPIO0_MODE_MASK                           0x7
#define MT6335_GPIO0_MODE_SHIFT                          0
#define MT6335_GPIO1_MODE_MASK                           0x7
#define MT6335_GPIO1_MODE_SHIFT                          3
#define MT6335_GPIO2_MODE_MASK                           0x7
#define MT6335_GPIO2_MODE_SHIFT                          6
#define MT6335_GPIO3_MODE_MASK                           0x7
#define MT6335_GPIO3_MODE_SHIFT                          9
#define MT6335_GPIO4_MODE_MASK                           0x7
#define MT6335_GPIO4_MODE_SHIFT                          12
#define MT6335_GPIO_MODE0_SET_MASK                       0xFFFF
#define MT6335_GPIO_MODE0_SET_SHIFT                      0
#define MT6335_GPIO_MODE0_CLR_MASK                       0xFFFF
#define MT6335_GPIO_MODE0_CLR_SHIFT                      0
#define MT6335_GPIO5_MODE_MASK                           0x7
#define MT6335_GPIO5_MODE_SHIFT                          0
#define MT6335_GPIO6_MODE_MASK                           0x7
#define MT6335_GPIO6_MODE_SHIFT                          3
#define MT6335_GPIO7_MODE_MASK                           0x7
#define MT6335_GPIO7_MODE_SHIFT                          6
#define MT6335_GPIO8_MODE_MASK                           0x7
#define MT6335_GPIO8_MODE_SHIFT                          9
#define MT6335_GPIO9_MODE_MASK                           0x7
#define MT6335_GPIO9_MODE_SHIFT                          12
#define MT6335_GPIO_MODE1_SET_MASK                       0xFFFF
#define MT6335_GPIO_MODE1_SET_SHIFT                      0
#define MT6335_GPIO_MODE1_CLR_MASK                       0xFFFF
#define MT6335_GPIO_MODE1_CLR_SHIFT                      0
#define MT6335_GPIO_RSV_MASK                             0xFFFF
#define MT6335_GPIO_RSV_SHIFT                            0


#define STRUP_CON0           				MT6335_STRUP_CON0
#define STRUP_CON1           				MT6335_STRUP_CON1
#define STRUP_CON2           				MT6335_STRUP_CON2
#define STRUP_CON3           				MT6335_STRUP_CON3
#define STRUP_CON4           				MT6335_STRUP_CON4
#define STRUP_CON5           				MT6335_STRUP_CON5
#define STRUP_CON6           				MT6335_STRUP_CON6
#define STRUP_CON7           				MT6335_STRUP_CON7
#define STRUP_CON8           				MT6335_STRUP_CON8
#define STRUP_CON9           				MT6335_STRUP_CON9
#define STRUP_CON10          				MT6335_STRUP_CON10
#define STRUP_CON11          				MT6335_STRUP_CON11
#define STRUP_CON12          				MT6335_STRUP_CON12
#define STRUP_CON13          				MT6335_STRUP_CON13
#define STRUP_CON14          				MT6335_STRUP_CON14
#define STRUP_CON15          				MT6335_STRUP_CON15
#define STRUP_CON16          				MT6335_STRUP_CON16
#define STRUP_CON17          				MT6335_STRUP_CON17
#define STRUP_CON18          				MT6335_STRUP_CON18
#define STRUP_CON19          				MT6335_STRUP_CON19
#define STRUP_CON20          				MT6335_STRUP_CON20
#define STRUP_ANA_CON0       				MT6335_STRUP_ANA_CON0
#define STRUP_ANA_CON1       				MT6335_STRUP_ANA_CON1
#define PPCCTL0              				MT6335_PPCCTL0
#define PPCCTL1              				MT6335_PPCCTL1
#define PPCCTL2              				MT6335_PPCCTL2
#define PPCCFG0              				MT6335_PPCCFG0
#define PPCTST0              				MT6335_PPCTST0
#define PPCRSV0              				MT6335_PPCRSV0
#define BWDTCTL0             				MT6335_BWDTCTL0
#define CPSWKEY              				MT6335_CPSWKEY
#define CPSCFG0              				MT6335_CPSCFG0
#define CPSCFG1              				MT6335_CPSCFG1
#define CPSPSA0              				MT6335_CPSPSA0
#define CPSPSA1              				MT6335_CPSPSA1
#define CPSPSA2              				MT6335_CPSPSA2
#define CPSPSA3              				MT6335_CPSPSA3
#define CPSPSA4              				MT6335_CPSPSA4
#define CPSPSA5              				MT6335_CPSPSA5
#define CPSPSA6              				MT6335_CPSPSA6
#define CPSPSA7              				MT6335_CPSPSA7
#define CPSPSA8              				MT6335_CPSPSA8
#define CPSPSA9              				MT6335_CPSPSA9
#define CPSPSA10             				MT6335_CPSPSA10
#define CPSDSA0              				MT6335_CPSDSA0
#define CPSDSA1              				MT6335_CPSDSA1
#define CPSDSA2              				MT6335_CPSDSA2
#define CPSDSA3              				MT6335_CPSDSA3
#define CPSDSA4              				MT6335_CPSDSA4
#define CPSDSA5              				MT6335_CPSDSA5
#define CPSDSA6              				MT6335_CPSDSA6
#define CPSDSA7              				MT6335_CPSDSA7
#define CPSDSA8              				MT6335_CPSDSA8
#define CPSDSA9              				MT6335_CPSDSA9
#define CPSDSA10             				MT6335_CPSDSA10
#define PORFLAG              				MT6335_PORFLAG
#define PONSTS               				MT6335_PONSTS
#define POFFSTS              				MT6335_POFFSTS
#define PSTSCTL              				MT6335_PSTSCTL
#define HWCID                				MT6335_HWCID
#define SWCID                				MT6335_SWCID
#define TOP_CON              				MT6335_TOP_CON
#define TEST_OUT             				MT6335_TEST_OUT
#define TEST_CON0            				MT6335_TEST_CON0
#define TEST_CON1            				MT6335_TEST_CON1
#define TESTMODE_SW          				MT6335_TESTMODE_SW
#define PGDEBSTATUS0         				MT6335_PGDEBSTATUS0
#define PGDEBSTATU1          				MT6335_PGDEBSTATU1
#define PGSTATUS0            				MT6335_PGSTATUS0
#define PGSTATUS1            				MT6335_PGSTATUS1
#define PSOCSTATUS           				MT6335_PSOCSTATUS
#define THERMALSTATUS        				MT6335_THERMALSTATUS
#define TOPSTATUS            				MT6335_TOPSTATUS
#define TDSEL_CON            				MT6335_TDSEL_CON
#define RDSEL_CON            				MT6335_RDSEL_CON
#define SMT_CON0             				MT6335_SMT_CON0
#define SMT_CON1             				MT6335_SMT_CON1
#define DRV_CON0             				MT6335_DRV_CON0
#define DRV_CON1             				MT6335_DRV_CON1
#define DRV_CON2             				MT6335_DRV_CON2
#define FILTER_CON0          				MT6335_FILTER_CON0
#define TOP_STATUS           				MT6335_TOP_STATUS
#define TOP_STATUS_SET       				MT6335_TOP_STATUS_SET
#define TOP_STATUS_CLR       				MT6335_TOP_STATUS_CLR
#define TOP_SPI_CON0         				MT6335_TOP_SPI_CON0
#define TOP_SPI_CON1         				MT6335_TOP_SPI_CON1
#define TOP_CKPDN_CON0       				MT6335_TOP_CKPDN_CON0
#define TOP_CKPDN_CON0_SET   				MT6335_TOP_CKPDN_CON0_SET
#define TOP_CKPDN_CON0_CLR   				MT6335_TOP_CKPDN_CON0_CLR
#define TOP_CKPDN_CON1       				MT6335_TOP_CKPDN_CON1
#define TOP_CKPDN_CON1_SET   				MT6335_TOP_CKPDN_CON1_SET
#define TOP_CKPDN_CON1_CLR   				MT6335_TOP_CKPDN_CON1_CLR
#define TOP_CKPDN_CON2       				MT6335_TOP_CKPDN_CON2
#define TOP_CKPDN_CON2_SET   				MT6335_TOP_CKPDN_CON2_SET
#define TOP_CKPDN_CON2_CLR   				MT6335_TOP_CKPDN_CON2_CLR
#define TOP_CKPDN_CON3       				MT6335_TOP_CKPDN_CON3
#define TOP_CKPDN_CON3_SET   				MT6335_TOP_CKPDN_CON3_SET
#define TOP_CKPDN_CON3_CLR   				MT6335_TOP_CKPDN_CON3_CLR
#define TOP_CKSEL_CON0       				MT6335_TOP_CKSEL_CON0
#define TOP_CKSEL_CON0_SET   				MT6335_TOP_CKSEL_CON0_SET
#define TOP_CKSEL_CON0_CLR   				MT6335_TOP_CKSEL_CON0_CLR
#define TOP_CKSEL_CON2       				MT6335_TOP_CKSEL_CON2
#define TOP_CKSEL_CON2_SET   				MT6335_TOP_CKSEL_CON2_SET
#define TOP_CKSEL_CON2_CLR   				MT6335_TOP_CKSEL_CON2_CLR
#define TOP_CKDIVSEL_CON0    				MT6335_TOP_CKDIVSEL_CON0
#define TOP_CKDIVSEL_CON0_SET				MT6335_TOP_CKDIVSEL_CON0_SET
#define TOP_CKDIVSEL_CON0_CLR				MT6335_TOP_CKDIVSEL_CON0_CLR
#define TOP_CKHWEN_CON0      				MT6335_TOP_CKHWEN_CON0
#define TOP_CKHWEN_CON0_SET  				MT6335_TOP_CKHWEN_CON0_SET
#define TOP_CKHWEN_CON0_CLR  				MT6335_TOP_CKHWEN_CON0_CLR
#define TOP_CKHWEN_CON1      				MT6335_TOP_CKHWEN_CON1
#define TOP_CKHWEN_CON1_SET  				MT6335_TOP_CKHWEN_CON1_SET
#define TOP_CKHWEN_CON1_CLR  				MT6335_TOP_CKHWEN_CON1_CLR
#define TOP_BUCK_ANACK_FREQ_SEL_CON0		MT6335_TOP_BUCK_ANACK_FREQ_SEL_CON0
#define TOP_BUCK_ANACK_FREQ_SEL_CON0_SET 	MT6335_TOP_BUCK_ANACK_FREQ_SEL_CON0_SET
#define TOP_BUCK_ANACK_FREQ_SEL_CON0_CLR 	MT6335_TOP_BUCK_ANACK_FREQ_SEL_CON0_CLR
#define TOP_CKTST_CON0       				MT6335_TOP_CKTST_CON0
#define TOP_CKTST_CON1       				MT6335_TOP_CKTST_CON1
#define TOP_CLKSQ            				MT6335_TOP_CLKSQ
#define TOP_CLKSQ_SET        				MT6335_TOP_CLKSQ_SET
#define TOP_CLKSQ_CLR        				MT6335_TOP_CLKSQ_CLR
#define TOP_CLKSQ_RTC        				MT6335_TOP_CLKSQ_RTC
#define TOP_CLKSQ_RTC_SET    				MT6335_TOP_CLKSQ_RTC_SET
#define TOP_CLKSQ_RTC_CLR    				MT6335_TOP_CLKSQ_RTC_CLR
#define TOP_CLK_TRIM         				MT6335_TOP_CLK_TRIM
#define TOP_CLK_CON0         				MT6335_TOP_CLK_CON0
#define TOP_CLK_CON0_SET     				MT6335_TOP_CLK_CON0_SET
#define TOP_CLK_CON0_CLR     				MT6335_TOP_CLK_CON0_CLR
#define TOP_CLK_CON1         				MT6335_TOP_CLK_CON1
#define TOP_CLK_CON1_SET     				MT6335_TOP_CLK_CON1_SET
#define TOP_CLK_CON1_CLR     				MT6335_TOP_CLK_CON1_CLR
#define TOP_CLK_CON2         				MT6335_TOP_CLK_CON2
#define TOP_RST_CON0         				MT6335_TOP_RST_CON0
#define TOP_RST_CON0_SET     				MT6335_TOP_RST_CON0_SET
#define TOP_RST_CON0_CLR     				MT6335_TOP_RST_CON0_CLR
#define TOP_RST_CON1         				MT6335_TOP_RST_CON1
#define TOP_RST_CON1_SET     				MT6335_TOP_RST_CON1_SET
#define TOP_RST_CON1_CLR     				MT6335_TOP_RST_CON1_CLR
#define TOP_RST_CON2         				MT6335_TOP_RST_CON2
#define TOP_RST_MISC         				MT6335_TOP_RST_MISC
#define TOP_RST_MISC_SET     				MT6335_TOP_RST_MISC_SET
#define TOP_RST_MISC_CLR     				MT6335_TOP_RST_MISC_CLR
#define TOP_RST_STATUS       				MT6335_TOP_RST_STATUS
#define TOP_RST_STATUS_SET   				MT6335_TOP_RST_STATUS_SET
#define TOP_RST_STATUS_CLR   				MT6335_TOP_RST_STATUS_CLR
#define TOP_RST_RSV_CON0     				MT6335_TOP_RST_RSV_CON0
#define TOP_RST_RSV_CON1     				MT6335_TOP_RST_RSV_CON1
#define INT_CON0             				MT6335_INT_CON0
#define INT_CON0_SET         				MT6335_INT_CON0_SET
#define INT_CON0_CLR         				MT6335_INT_CON0_CLR
#define INT_CON1             				MT6335_INT_CON1
#define INT_CON1_SET         				MT6335_INT_CON1_SET
#define INT_CON1_CLR         				MT6335_INT_CON1_CLR
#define INT_CON2             				MT6335_INT_CON2
#define INT_CON2_SET         				MT6335_INT_CON2_SET
#define INT_CON2_CLR         				MT6335_INT_CON2_CLR
#define INT_CON3             				MT6335_INT_CON3
#define INT_CON3_SET         				MT6335_INT_CON3_SET
#define INT_CON3_CLR         				MT6335_INT_CON3_CLR
#define INT_CON4             				MT6335_INT_CON4
#define INT_CON4_SET         				MT6335_INT_CON4_SET
#define INT_CON4_CLR         				MT6335_INT_CON4_CLR
#define INT_CON5             				MT6335_INT_CON5
#define INT_CON5_SET         				MT6335_INT_CON5_SET
#define INT_CON5_CLR         				MT6335_INT_CON5_CLR
#define INT_MASK_CON0        				MT6335_INT_MASK_CON0
#define INT_MASK_CON0_SET    				MT6335_INT_MASK_CON0_SET
#define INT_MASK_CON0_CLR    				MT6335_INT_MASK_CON0_CLR
#define INT_MASK_CON1        				MT6335_INT_MASK_CON1
#define INT_MASK_CON1_SET    				MT6335_INT_MASK_CON1_SET
#define INT_MASK_CON1_CLR    				MT6335_INT_MASK_CON1_CLR
#define INT_MASK_CON2        				MT6335_INT_MASK_CON2
#define INT_MASK_CON2_SET    				MT6335_INT_MASK_CON2_SET
#define INT_MASK_CON2_CLR    				MT6335_INT_MASK_CON2_CLR
#define INT_MASK_CON3        				MT6335_INT_MASK_CON3
#define INT_MASK_CON3_SET    				MT6335_INT_MASK_CON3_SET
#define INT_MASK_CON3_CLR    				MT6335_INT_MASK_CON3_CLR
#define INT_MASK_CON4        				MT6335_INT_MASK_CON4
#define INT_MASK_CON4_SET    				MT6335_INT_MASK_CON4_SET
#define INT_MASK_CON4_CLR    				MT6335_INT_MASK_CON4_CLR
#define INT_MASK_CON5        				MT6335_INT_MASK_CON5
#define INT_MASK_CON5_SET    				MT6335_INT_MASK_CON5_SET
#define INT_MASK_CON5_CLR    				MT6335_INT_MASK_CON5_CLR
#define INT_STATUS0          				MT6335_INT_STATUS0
#define INT_STATUS1          				MT6335_INT_STATUS1
#define INT_STATUS2          				MT6335_INT_STATUS2
#define INT_STATUS3          				MT6335_INT_STATUS3
#define INT_STATUS4          				MT6335_INT_STATUS4
#define INT_STATUS5          				MT6335_INT_STATUS5
#define INT_RAW_STATUS0      				MT6335_INT_RAW_STATUS0
#define INT_RAW_STATUS1      				MT6335_INT_RAW_STATUS1
#define INT_RAW_STATUS2      				MT6335_INT_RAW_STATUS2
#define INT_RAW_STATUS3      				MT6335_INT_RAW_STATUS3
#define INT_RAW_STATUS4      				MT6335_INT_RAW_STATUS4
#define INT_RAW_STATUS5      				MT6335_INT_RAW_STATUS5
#define INT_MISC_CON         				MT6335_INT_MISC_CON
#define INT_MISC_CON_SET     				MT6335_INT_MISC_CON_SET
#define INT_MISC_CON_CLR     				MT6335_INT_MISC_CON_CLR
#define FQMTR_CON0           				MT6335_FQMTR_CON0
#define FQMTR_CON1           				MT6335_FQMTR_CON1
#define FQMTR_CON2           				MT6335_FQMTR_CON2
#define RG_SPI_CON0          				MT6335_RG_SPI_CON0
#define DEW_DIO_EN           				MT6335_DEW_DIO_EN
#define DEW_READ_TEST        				MT6335_DEW_READ_TEST
#define DEW_WRITE_TEST       				MT6335_DEW_WRITE_TEST
#define DEW_CRC_SWRST        				MT6335_DEW_CRC_SWRST
#define DEW_CRC_EN           				MT6335_DEW_CRC_EN
#define DEW_CRC_VAL          				MT6335_DEW_CRC_VAL
#define DEW_DBG_MON_SEL      				MT6335_DEW_DBG_MON_SEL
#define DEW_CIPHER_KEY_SEL   				MT6335_DEW_CIPHER_KEY_SEL
#define DEW_CIPHER_IV_SEL    				MT6335_DEW_CIPHER_IV_SEL
#define DEW_CIPHER_EN        				MT6335_DEW_CIPHER_EN
#define DEW_CIPHER_RDY       				MT6335_DEW_CIPHER_RDY
#define DEW_CIPHER_MODE      				MT6335_DEW_CIPHER_MODE
#define DEW_CIPHER_SWRST     				MT6335_DEW_CIPHER_SWRST
#define DEW_RDDMY_NO         				MT6335_DEW_RDDMY_NO
#define INT_TYPE_CON0        				MT6335_INT_TYPE_CON0
#define INT_TYPE_CON0_SET    				MT6335_INT_TYPE_CON0_SET
#define INT_TYPE_CON0_CLR    				MT6335_INT_TYPE_CON0_CLR
#define INT_TYPE_CON1        				MT6335_INT_TYPE_CON1
#define INT_TYPE_CON1_SET    				MT6335_INT_TYPE_CON1_SET
#define INT_TYPE_CON1_CLR    				MT6335_INT_TYPE_CON1_CLR
#define INT_TYPE_CON2        				MT6335_INT_TYPE_CON2
#define INT_TYPE_CON2_SET    				MT6335_INT_TYPE_CON2_SET
#define INT_TYPE_CON2_CLR    				MT6335_INT_TYPE_CON2_CLR
#define INT_TYPE_CON3        				MT6335_INT_TYPE_CON3
#define INT_TYPE_CON3_SET    				MT6335_INT_TYPE_CON3_SET
#define INT_TYPE_CON3_CLR    				MT6335_INT_TYPE_CON3_CLR
#define INT_TYPE_CON4        				MT6335_INT_TYPE_CON4
#define INT_TYPE_CON4_SET    				MT6335_INT_TYPE_CON4_SET
#define INT_TYPE_CON4_CLR    				MT6335_INT_TYPE_CON4_CLR
#define INT_TYPE_CON5        				MT6335_INT_TYPE_CON5
#define INT_TYPE_CON5_SET    				MT6335_INT_TYPE_CON5_SET
#define INT_TYPE_CON5_CLR    				MT6335_INT_TYPE_CON5_CLR
#define INT_STA              				MT6335_INT_STA
#define RG_SPI_CON1          				MT6335_RG_SPI_CON1
#define RG_SPI_CON2          				MT6335_RG_SPI_CON2
#define BUCK_ALL_CON0        				MT6335_BUCK_ALL_CON0
#define BUCK_STB_CON         				MT6335_BUCK_STB_CON
#define BUCK_SLP_CON0        				MT6335_BUCK_SLP_CON0
#define BUCK_SLP_CON1        				MT6335_BUCK_SLP_CON1
#define BUCK_SLP_CON2        				MT6335_BUCK_SLP_CON2
#define BUCK_OC_CON0         				MT6335_BUCK_OC_CON0
#define BUCK_OC_CON1         				MT6335_BUCK_OC_CON1
#define BUCK_K_CON0          				MT6335_BUCK_K_CON0
#define BUCK_K_CON1          				MT6335_BUCK_K_CON1
#define BUCK_K_CON2          				MT6335_BUCK_K_CON2
#define BUCK_K_CON3          				MT6335_BUCK_K_CON3
#define BUCK_VCORE_SSHUB_CON 				MT6335_BUCK_VCORE_SSHUB_CON
#define BUCK_VCORE_CON0      				MT6335_BUCK_VCORE_CON0
#define BUCK_VCORE_CON1      				MT6335_BUCK_VCORE_CON1
#define BUCK_VCORE_CON2      				MT6335_BUCK_VCORE_CON2
#define BUCK_VCORE_CFG0      				MT6335_BUCK_VCORE_CFG0
#define BUCK_VCORE_CFG1      				MT6335_BUCK_VCORE_CFG1
#define BUCK_VCORE_OP_EN     				MT6335_BUCK_VCORE_OP_EN
#define BUCK_VCORE_OP_EN_SET 				MT6335_BUCK_VCORE_OP_EN_SET
#define BUCK_VCORE_OP_EN_CLR 				MT6335_BUCK_VCORE_OP_EN_CLR
#define BUCK_VCORE_OP_CFG    				MT6335_BUCK_VCORE_OP_CFG
#define BUCK_VCORE_OP_CFG_SET				MT6335_BUCK_VCORE_OP_CFG_SET
#define BUCK_VCORE_OP_CFG_CLR				MT6335_BUCK_VCORE_OP_CFG_CLR
#define BUCK_VCORE_SP_CON    				MT6335_BUCK_VCORE_SP_CON
#define BUCK_VCORE_SP_CFG    				MT6335_BUCK_VCORE_SP_CFG
#define BUCK_VCORE_OC_CFG    				MT6335_BUCK_VCORE_OC_CFG
#define BUCK_VCORE_DBG0      				MT6335_BUCK_VCORE_DBG0
#define BUCK_VCORE_DBG1      				MT6335_BUCK_VCORE_DBG1
#define BUCK_VCORE_DBG2      				MT6335_BUCK_VCORE_DBG2
#define BUCK_VDRAM_CON0      				MT6335_BUCK_VDRAM_CON0
#define BUCK_VDRAM_CON1      				MT6335_BUCK_VDRAM_CON1
#define BUCK_VDRAM_CON2      				MT6335_BUCK_VDRAM_CON2
#define BUCK_VDRAM_CFG0      				MT6335_BUCK_VDRAM_CFG0
#define BUCK_VDRAM_CFG1      				MT6335_BUCK_VDRAM_CFG1
#define BUCK_VDRAM_OP_EN     				MT6335_BUCK_VDRAM_OP_EN
#define BUCK_VDRAM_OP_EN_SET 				MT6335_BUCK_VDRAM_OP_EN_SET
#define BUCK_VDRAM_OP_EN_CLR 				MT6335_BUCK_VDRAM_OP_EN_CLR
#define BUCK_VDRAM_OP_CFG    				MT6335_BUCK_VDRAM_OP_CFG
#define BUCK_VDRAM_OP_CFG_SET				MT6335_BUCK_VDRAM_OP_CFG_SET
#define BUCK_VDRAM_OP_CFG_CLR				MT6335_BUCK_VDRAM_OP_CFG_CLR
#define BUCK_VDRAM_SP_CON    				MT6335_BUCK_VDRAM_SP_CON
#define BUCK_VDRAM_SP_CFG    				MT6335_BUCK_VDRAM_SP_CFG
#define BUCK_VDRAM_OC_CFG    				MT6335_BUCK_VDRAM_OC_CFG
#define BUCK_VDRAM_DBG0      				MT6335_BUCK_VDRAM_DBG0
#define BUCK_VDRAM_DBG1      				MT6335_BUCK_VDRAM_DBG1
#define BUCK_VDRAM_DBG2      				MT6335_BUCK_VDRAM_DBG2
#define BUCK_VMD1_CON0       				MT6335_BUCK_VMD1_CON0
#define BUCK_VMD1_CON1       				MT6335_BUCK_VMD1_CON1
#define BUCK_VMD1_CON2       				MT6335_BUCK_VMD1_CON2
#define BUCK_VMD1_CFG0       				MT6335_BUCK_VMD1_CFG0
#define BUCK_VMD1_CFG1       				MT6335_BUCK_VMD1_CFG1
#define BUCK_VMD1_OP_EN      				MT6335_BUCK_VMD1_OP_EN
#define BUCK_VMD1_OP_EN_SET  				MT6335_BUCK_VMD1_OP_EN_SET
#define BUCK_VMD1_OP_EN_CLR  				MT6335_BUCK_VMD1_OP_EN_CLR
#define BUCK_VMD1_OP_CFG     				MT6335_BUCK_VMD1_OP_CFG
#define BUCK_VMD1_OP_CFG_SET 				MT6335_BUCK_VMD1_OP_CFG_SET
#define BUCK_VMD1_OP_CFG_CLR 				MT6335_BUCK_VMD1_OP_CFG_CLR
#define BUCK_VMD1_SP_CON     				MT6335_BUCK_VMD1_SP_CON
#define BUCK_VMD1_SP_CFG     				MT6335_BUCK_VMD1_SP_CFG
#define BUCK_VMD1_OC_CFG     				MT6335_BUCK_VMD1_OC_CFG
#define BUCK_VMD1_DBG0       				MT6335_BUCK_VMD1_DBG0
#define BUCK_VMD1_DBG1       				MT6335_BUCK_VMD1_DBG1
#define BUCK_VMD1_DBG2       				MT6335_BUCK_VMD1_DBG2
#define BUCK_VMODEM_CON0     				MT6335_BUCK_VMODEM_CON0
#define BUCK_VMODEM_CON1     				MT6335_BUCK_VMODEM_CON1
#define BUCK_VMODEM_CON2     				MT6335_BUCK_VMODEM_CON2
#define BUCK_VMODEM_CFG0     				MT6335_BUCK_VMODEM_CFG0
#define BUCK_VMODEM_CFG1     				MT6335_BUCK_VMODEM_CFG1
#define BUCK_VMODEM_OP_EN    				MT6335_BUCK_VMODEM_OP_EN
#define BUCK_VMODEM_OP_EN_SET 				MT6335_BUCK_VMODEM_OP_EN_SET
#define BUCK_VMODEM_OP_EN_CLR 				MT6335_BUCK_VMODEM_OP_EN_CLR
#define BUCK_VMODEM_OP_CFG   				MT6335_BUCK_VMODEM_OP_CFG
#define BUCK_VMODEM_OP_CFG_SET				MT6335_BUCK_VMODEM_OP_CFG_SET
#define BUCK_VMODEM_OP_CFG_CLR				MT6335_BUCK_VMODEM_OP_CFG_CLR
#define BUCK_VMODEM_SP_CON   				MT6335_BUCK_VMODEM_SP_CON
#define BUCK_VMODEM_SP_CFG   				MT6335_BUCK_VMODEM_SP_CFG
#define BUCK_VMODEM_OC_CFG   				MT6335_BUCK_VMODEM_OC_CFG
#define BUCK_VMODEM_DBG0     				MT6335_BUCK_VMODEM_DBG0
#define BUCK_VMODEM_DBG1     				MT6335_BUCK_VMODEM_DBG1
#define BUCK_VMODEM_DBG2     				MT6335_BUCK_VMODEM_DBG2
#define BUCK_VS1_CON0        				MT6335_BUCK_VS1_CON0
#define BUCK_VS1_CON1        				MT6335_BUCK_VS1_CON1
#define BUCK_VS1_CON2        				MT6335_BUCK_VS1_CON2
#define BUCK_VS1_CFG0        				MT6335_BUCK_VS1_CFG0
#define BUCK_VS1_CFG1        				MT6335_BUCK_VS1_CFG1
#define BUCK_VS1_OP_EN       				MT6335_BUCK_VS1_OP_EN
#define BUCK_VS1_OP_EN_SET   				MT6335_BUCK_VS1_OP_EN_SET
#define BUCK_VS1_OP_EN_CLR   				MT6335_BUCK_VS1_OP_EN_CLR
#define BUCK_VS1_OP_CFG      				MT6335_BUCK_VS1_OP_CFG
#define BUCK_VS1_OP_CFG_SET  				MT6335_BUCK_VS1_OP_CFG_SET
#define BUCK_VS1_OP_CFG_CLR  				MT6335_BUCK_VS1_OP_CFG_CLR
#define BUCK_VS1_SP_CON      				MT6335_BUCK_VS1_SP_CON
#define BUCK_VS1_SP_CFG      				MT6335_BUCK_VS1_SP_CFG
#define BUCK_VS1_OC_CFG      				MT6335_BUCK_VS1_OC_CFG
#define BUCK_VS1_DBG0        				MT6335_BUCK_VS1_DBG0
#define BUCK_VS1_DBG1        				MT6335_BUCK_VS1_DBG1
#define BUCK_VS1_DBG2        				MT6335_BUCK_VS1_DBG2
#define BUCK_VS2_CON0        				MT6335_BUCK_VS2_CON0
#define BUCK_VS2_CON1        				MT6335_BUCK_VS2_CON1
#define BUCK_VS2_CON2        				MT6335_BUCK_VS2_CON2
#define BUCK_VS2_CFG0        				MT6335_BUCK_VS2_CFG0
#define BUCK_VS2_CFG1        				MT6335_BUCK_VS2_CFG1
#define BUCK_VS2_OP_EN       				MT6335_BUCK_VS2_OP_EN
#define BUCK_VS2_OP_EN_SET   				MT6335_BUCK_VS2_OP_EN_SET
#define BUCK_VS2_OP_EN_CLR   				MT6335_BUCK_VS2_OP_EN_CLR
#define BUCK_VS2_OP_CFG      				MT6335_BUCK_VS2_OP_CFG
#define BUCK_VS2_OP_CFG_SET  				MT6335_BUCK_VS2_OP_CFG_SET
#define BUCK_VS2_OP_CFG_CLR  				MT6335_BUCK_VS2_OP_CFG_CLR
#define BUCK_VS2_SP_CON      				MT6335_BUCK_VS2_SP_CON
#define BUCK_VS2_SP_CFG      				MT6335_BUCK_VS2_SP_CFG
#define BUCK_VS2_OC_CFG      				MT6335_BUCK_VS2_OC_CFG
#define BUCK_VS2_DBG0        				MT6335_BUCK_VS2_DBG0
#define BUCK_VS2_DBG1        				MT6335_BUCK_VS2_DBG1
#define BUCK_VS2_DBG2        				MT6335_BUCK_VS2_DBG2
#define BUCK_VPA1_CON0       				MT6335_BUCK_VPA1_CON0
#define BUCK_VPA1_CON1       				MT6335_BUCK_VPA1_CON1
#define BUCK_VPA1_CFG0       				MT6335_BUCK_VPA1_CFG0
#define BUCK_VPA1_CFG1       				MT6335_BUCK_VPA1_CFG1
#define BUCK_VPA1_CFG2       				MT6335_BUCK_VPA1_CFG2
#define BUCK_VPA1_OC_CFG     				MT6335_BUCK_VPA1_OC_CFG
#define BUCK_VPA1_DBG0       				MT6335_BUCK_VPA1_DBG0
#define BUCK_VPA1_DBG1       				MT6335_BUCK_VPA1_DBG1
#define BUCK_VPA1_DBG2       				MT6335_BUCK_VPA1_DBG2
#define BUCK_VPA1_DLC_CON0   				MT6335_BUCK_VPA1_DLC_CON0
#define BUCK_VPA1_DLC_CON1   				MT6335_BUCK_VPA1_DLC_CON1
#define BUCK_VPA1_DLC_CON2   				MT6335_BUCK_VPA1_DLC_CON2
#define BUCK_VPA1_MSFG_CON0  				MT6335_BUCK_VPA1_MSFG_CON0
#define BUCK_VPA1_MSFG_CON1  				MT6335_BUCK_VPA1_MSFG_CON1
#define BUCK_VPA1_MSFG_RRATE0				MT6335_BUCK_VPA1_MSFG_RRATE0
#define BUCK_VPA1_MSFG_RRATE1				MT6335_BUCK_VPA1_MSFG_RRATE1
#define BUCK_VPA1_MSFG_RTHD0 				MT6335_BUCK_VPA1_MSFG_RTHD0
#define BUCK_VPA1_MSFG_RTHD1 				MT6335_BUCK_VPA1_MSFG_RTHD1
#define BUCK_VPA1_MSFG_RTHD2 				MT6335_BUCK_VPA1_MSFG_RTHD2
#define BUCK_VPA1_MSFG_FRATE0				MT6335_BUCK_VPA1_MSFG_FRATE0
#define BUCK_VPA1_MSFG_FRATE1				MT6335_BUCK_VPA1_MSFG_FRATE1
#define BUCK_VPA1_MSFG_FTHD0 				MT6335_BUCK_VPA1_MSFG_FTHD0
#define BUCK_VPA1_MSFG_FTHD1 				MT6335_BUCK_VPA1_MSFG_FTHD1
#define BUCK_VPA1_MSFG_FTHD2 				MT6335_BUCK_VPA1_MSFG_FTHD2
#define BUCK_VPA2_CON0       				MT6335_BUCK_VPA2_CON0
#define BUCK_VPA2_CON1       				MT6335_BUCK_VPA2_CON1
#define BUCK_VPA2_CFG0       				MT6335_BUCK_VPA2_CFG0
#define BUCK_VPA2_CFG1       				MT6335_BUCK_VPA2_CFG1
#define BUCK_VPA2_CFG2       				MT6335_BUCK_VPA2_CFG2
#define BUCK_VPA2_OC_CFG     				MT6335_BUCK_VPA2_OC_CFG
#define BUCK_VPA2_DBG0       				MT6335_BUCK_VPA2_DBG0
#define BUCK_VPA2_DBG1       				MT6335_BUCK_VPA2_DBG1
#define BUCK_VPA2_DBG2       				MT6335_BUCK_VPA2_DBG2
#define BUCK_VPA2_DLC_CON0   				MT6335_BUCK_VPA2_DLC_CON0
#define BUCK_VPA2_DLC_CON1   				MT6335_BUCK_VPA2_DLC_CON1
#define BUCK_VPA2_DLC_CON2   				MT6335_BUCK_VPA2_DLC_CON2
#define BUCK_VPA2_MSFG_CON0  				MT6335_BUCK_VPA2_MSFG_CON0
#define BUCK_VPA2_MSFG_CON1  				MT6335_BUCK_VPA2_MSFG_CON1
#define BUCK_VPA2_MSFG_RRATE0				MT6335_BUCK_VPA2_MSFG_RRATE0
#define BUCK_VPA2_MSFG_RRATE1				MT6335_BUCK_VPA2_MSFG_RRATE1
#define BUCK_VPA2_MSFG_RTHD0 				MT6335_BUCK_VPA2_MSFG_RTHD0
#define BUCK_VPA2_MSFG_RTHD1 				MT6335_BUCK_VPA2_MSFG_RTHD1
#define BUCK_VPA2_MSFG_RTHD2 				MT6335_BUCK_VPA2_MSFG_RTHD2
#define BUCK_VPA2_MSFG_FRATE0				MT6335_BUCK_VPA2_MSFG_FRATE0
#define BUCK_VPA2_MSFG_FRATE1				MT6335_BUCK_VPA2_MSFG_FRATE1
#define BUCK_VPA2_MSFG_FTHD0 				MT6335_BUCK_VPA2_MSFG_FTHD0
#define BUCK_VPA2_MSFG_FTHD1 				MT6335_BUCK_VPA2_MSFG_FTHD1
#define BUCK_VPA2_MSFG_FTHD2 				MT6335_BUCK_VPA2_MSFG_FTHD2
#define SMPS_ANA_CON0        				MT6335_SMPS_ANA_CON0
#define SMPS_ANA_CON1        				MT6335_SMPS_ANA_CON1
#define SMPS_ANA_CON2        				MT6335_SMPS_ANA_CON2
#define SMPS_ANA_CON3        				MT6335_SMPS_ANA_CON3
#define SMPS_ANA_CON4        				MT6335_SMPS_ANA_CON4
#define SMPS_ANA_CON5        				MT6335_SMPS_ANA_CON5
#define SMPS_ANA_CON6        				MT6335_SMPS_ANA_CON6
#define SMPS_ANA_CON7        				MT6335_SMPS_ANA_CON7
#define SMPS_ANA_CON8        				MT6335_SMPS_ANA_CON8
#define SMPS_ANA_CON9        				MT6335_SMPS_ANA_CON9
#define SMPS_ANA_CON10       				MT6335_SMPS_ANA_CON10
#define SMPS_ANA_CON11       				MT6335_SMPS_ANA_CON11
#define SMPS_ANA_CON12       				MT6335_SMPS_ANA_CON12
#define SMPS_ANA_CON13       				MT6335_SMPS_ANA_CON13
#define SMPS_ANA_CON14       				MT6335_SMPS_ANA_CON14
#define SMPS_ANA_CON15       				MT6335_SMPS_ANA_CON15
#define VCORE_ANA_CON0       				MT6335_VCORE_ANA_CON0
#define VCORE_ANA_CON1       				MT6335_VCORE_ANA_CON1
#define VCORE_ANA_CON2       				MT6335_VCORE_ANA_CON2
#define VCORE_ANA_CON3       				MT6335_VCORE_ANA_CON3
#define VCORE_ANA_CON4       				MT6335_VCORE_ANA_CON4
#define VCORE_ANA_CON5       				MT6335_VCORE_ANA_CON5
#define VCORE_ANA_CON6       				MT6335_VCORE_ANA_CON6
#define VCORE_ANA_CON7       				MT6335_VCORE_ANA_CON7
#define VCORE_ANA_CON8       				MT6335_VCORE_ANA_CON8
#define VCORE_ANA_CON9       				MT6335_VCORE_ANA_CON9
#define VDRAM_ANA_CON0       				MT6335_VDRAM_ANA_CON0
#define VDRAM_ANA_CON1       				MT6335_VDRAM_ANA_CON1
#define VDRAM_ANA_CON2       				MT6335_VDRAM_ANA_CON2
#define VDRAM_ANA_CON3       				MT6335_VDRAM_ANA_CON3
#define VDRAM_ANA_CON4       				MT6335_VDRAM_ANA_CON4
#define VDRAM_ANA_CON5       				MT6335_VDRAM_ANA_CON5
#define VDRAM_ANA_CON6       				MT6335_VDRAM_ANA_CON6
#define VDRAM_ANA_CON7       				MT6335_VDRAM_ANA_CON7
#define VDRAM_ANA_CON8       				MT6335_VDRAM_ANA_CON8
#define VDRAM_ANA_CON9       				MT6335_VDRAM_ANA_CON9
#define VMODEM_ANA_CON0      				MT6335_VMODEM_ANA_CON0
#define VMODEM_ANA_CON1      				MT6335_VMODEM_ANA_CON1
#define VMODEM_ANA_CON2      				MT6335_VMODEM_ANA_CON2
#define VMODEM_ANA_CON3      				MT6335_VMODEM_ANA_CON3
#define VMODEM_ANA_CON4      				MT6335_VMODEM_ANA_CON4
#define VMODEM_ANA_CON5      				MT6335_VMODEM_ANA_CON5
#define VMODEM_ANA_CON6      				MT6335_VMODEM_ANA_CON6
#define VMODEM_ANA_CON7      				MT6335_VMODEM_ANA_CON7
#define VMODEM_ANA_CON8      				MT6335_VMODEM_ANA_CON8
#define VMODEM_ANA_CON9      				MT6335_VMODEM_ANA_CON9
#define VMD1_ANA_CON0        				MT6335_VMD1_ANA_CON0
#define VMD1_ANA_CON1        				MT6335_VMD1_ANA_CON1
#define VMD1_ANA_CON2        				MT6335_VMD1_ANA_CON2
#define VMD1_ANA_CON3        				MT6335_VMD1_ANA_CON3
#define VMD1_ANA_CON4        				MT6335_VMD1_ANA_CON4
#define VMD1_ANA_CON5        				MT6335_VMD1_ANA_CON5
#define VMD1_ANA_CON6        				MT6335_VMD1_ANA_CON6
#define VMD1_ANA_CON7        				MT6335_VMD1_ANA_CON7
#define VMD1_ANA_CON8        				MT6335_VMD1_ANA_CON8
#define VMD1_ANA_CON9        				MT6335_VMD1_ANA_CON9
#define VS1_ANA_CON0         				MT6335_VS1_ANA_CON0
#define VS1_ANA_CON1         				MT6335_VS1_ANA_CON1
#define VS1_ANA_CON2         				MT6335_VS1_ANA_CON2
#define VS1_ANA_CON3         				MT6335_VS1_ANA_CON3
#define VS1_ANA_CON4         				MT6335_VS1_ANA_CON4
#define VS1_ANA_CON5         				MT6335_VS1_ANA_CON5
#define VS1_ANA_CON6         				MT6335_VS1_ANA_CON6
#define VS1_ANA_CON7         				MT6335_VS1_ANA_CON7
#define VS1_ANA_CON8         				MT6335_VS1_ANA_CON8
#define VS1_ANA_CON9         				MT6335_VS1_ANA_CON9
#define VS2_ANA_CON0         				MT6335_VS2_ANA_CON0
#define VS2_ANA_CON1         				MT6335_VS2_ANA_CON1
#define VS2_ANA_CON2         				MT6335_VS2_ANA_CON2
#define VS2_ANA_CON3         				MT6335_VS2_ANA_CON3
#define VS2_ANA_CON4         				MT6335_VS2_ANA_CON4
#define VS2_ANA_CON5         				MT6335_VS2_ANA_CON5
#define VS2_ANA_CON6         				MT6335_VS2_ANA_CON6
#define VS2_ANA_CON7         				MT6335_VS2_ANA_CON7
#define VS2_ANA_CON8         				MT6335_VS2_ANA_CON8
#define VS2_ANA_CON9         				MT6335_VS2_ANA_CON9
#define VPA1_ANA_CON0        				MT6335_VPA1_ANA_CON0
#define VPA1_ANA_CON1        				MT6335_VPA1_ANA_CON1
#define VPA1_ANA_CON2        				MT6335_VPA1_ANA_CON2
#define VPA1_ANA_CON3        				MT6335_VPA1_ANA_CON3
#define VPA1_ANA_CON4        				MT6335_VPA1_ANA_CON4
#define VPA1_ANA_CON5        				MT6335_VPA1_ANA_CON5
#define VPA2_ANA_CON0        				MT6335_VPA2_ANA_CON0
#define VPA2_ANA_CON1        				MT6335_VPA2_ANA_CON1
#define VPA2_ANA_CON2        				MT6335_VPA2_ANA_CON2
#define VPA2_ANA_CON3        				MT6335_VPA2_ANA_CON3
#define VPA2_ANA_CON4        				MT6335_VPA2_ANA_CON4
#define VPA2_ANA_CON5        				MT6335_VPA2_ANA_CON5
#define WDTDBG_CON0          				MT6335_WDTDBG_CON0
#define WDTDBG_MON0          				MT6335_WDTDBG_MON0
#define WDTDBG_MON1          				MT6335_WDTDBG_MON1
#define WDTDBG_MON2          				MT6335_WDTDBG_MON2
#define WDTDBG_MON3          				MT6335_WDTDBG_MON3
#define WDTDBG_MON4          				MT6335_WDTDBG_MON4
#define WDTDBG_MON5          				MT6335_WDTDBG_MON5
#define WDTDBG_MON6          				MT6335_WDTDBG_MON6
#define ISINKA_ANA_CON_0     				MT6335_ISINKA_ANA_CON_0
#define ISINKB_ANA_CON_0     				MT6335_ISINKB_ANA_CON_0
#define ISINK0_CON0          				MT6335_ISINK0_CON0
#define ISINK0_CON1          				MT6335_ISINK0_CON1
#define ISINK0_CON2          				MT6335_ISINK0_CON2
#define ISINK0_CON3          				MT6335_ISINK0_CON3
#define ISINK1_CON0          				MT6335_ISINK1_CON0
#define ISINK1_CON1          				MT6335_ISINK1_CON1
#define ISINK1_CON2          				MT6335_ISINK1_CON2
#define ISINK1_CON3          				MT6335_ISINK1_CON3
#define ISINK2_CON0          				MT6335_ISINK2_CON0
#define ISINK2_CON1          				MT6335_ISINK2_CON1
#define ISINK2_CON2          				MT6335_ISINK2_CON2
#define ISINK2_CON3          				MT6335_ISINK2_CON3
#define ISINK3_CON0          				MT6335_ISINK3_CON0
#define ISINK3_CON1          				MT6335_ISINK3_CON1
#define ISINK3_CON2          				MT6335_ISINK3_CON2
#define ISINK3_CON3          				MT6335_ISINK3_CON3
#define ISINK_ANA1           				MT6335_ISINK_ANA1
#define ISINK_PHASE_DLY      				MT6335_ISINK_PHASE_DLY
#define ISINK_SFSTR          				MT6335_ISINK_SFSTR
#define ISINK_EN_CTRL        				MT6335_ISINK_EN_CTRL
#define ISINK_MODE_CTRL      				MT6335_ISINK_MODE_CTRL
#define ISINK_ANA_CON0       				MT6335_ISINK_ANA_CON0
#define ISINK4_CON1          				MT6335_ISINK4_CON1
#define ISINK5_CON1          				MT6335_ISINK5_CON1
#define ISINK6_CON1          				MT6335_ISINK6_CON1
#define ISINK7_CON1          				MT6335_ISINK7_CON1
#define ISINK_ANA1_SMPL      				MT6335_ISINK_ANA1_SMPL
#define ISINK_PHASE_DLY_SMPL 				MT6335_ISINK_PHASE_DLY_SMPL
#define ISINK_EN_CTRL_SMPL   				MT6335_ISINK_EN_CTRL_SMPL
#define LDO_VIO28_CON0       				MT6335_LDO_VIO28_CON0
#define LDO_VIO28_OP_EN      				MT6335_LDO_VIO28_OP_EN
#define LDO_VIO28_OP_EN_SET  				MT6335_LDO_VIO28_OP_EN_SET
#define LDO_VIO28_OP_EN_CLR  				MT6335_LDO_VIO28_OP_EN_CLR
#define LDO_VIO28_OP_CFG     				MT6335_LDO_VIO28_OP_CFG
#define LDO_VIO28_OP_CFG_SET 				MT6335_LDO_VIO28_OP_CFG_SET
#define LDO_VIO28_OP_CFG_CLR 				MT6335_LDO_VIO28_OP_CFG_CLR
#define LDO_VIO28_CON1       				MT6335_LDO_VIO28_CON1
#define LDO_VIO28_CON2       				MT6335_LDO_VIO28_CON2
#define LDO_VIO28_CON3       				MT6335_LDO_VIO28_CON3
#define LDO_VIO18_CON0       				MT6335_LDO_VIO18_CON0
#define LDO_VIO18_OP_EN      				MT6335_LDO_VIO18_OP_EN
#define LDO_VIO18_OP_EN_SET  				MT6335_LDO_VIO18_OP_EN_SET
#define LDO_VIO18_OP_EN_CLR  				MT6335_LDO_VIO18_OP_EN_CLR
#define LDO_VIO18_OP_CFG     				MT6335_LDO_VIO18_OP_CFG
#define LDO_VIO18_OP_CFG_SET 				MT6335_LDO_VIO18_OP_CFG_SET
#define LDO_VIO18_OP_CFG_CLR 				MT6335_LDO_VIO18_OP_CFG_CLR
#define LDO_VIO18_CON1       				MT6335_LDO_VIO18_CON1
#define LDO_VIO18_CON2       				MT6335_LDO_VIO18_CON2
#define LDO_VIO18_CON3       				MT6335_LDO_VIO18_CON3
#define LDO_VUFS18_CON0      				MT6335_LDO_VUFS18_CON0
#define LDO_VUFS18_OP_EN     				MT6335_LDO_VUFS18_OP_EN
#define LDO_VUFS18_OP_EN_SET 				MT6335_LDO_VUFS18_OP_EN_SET
#define LDO_VUFS18_OP_EN_CLR 				MT6335_LDO_VUFS18_OP_EN_CLR
#define LDO_VUFS18_OP_CFG    				MT6335_LDO_VUFS18_OP_CFG
#define LDO_VUFS18_OP_CFG_SET				MT6335_LDO_VUFS18_OP_CFG_SET
#define LDO_VUFS18_OP_CFG_CLR				MT6335_LDO_VUFS18_OP_CFG_CLR
#define LDO_VUFS18_CON1      				MT6335_LDO_VUFS18_CON1
#define LDO_VUFS18_CON2      				MT6335_LDO_VUFS18_CON2
#define LDO_VUFS18_CON3      				MT6335_LDO_VUFS18_CON3
#define LDO_VA10_CON0        				MT6335_LDO_VA10_CON0
#define LDO_VA10_OP_EN       				MT6335_LDO_VA10_OP_EN
#define LDO_VA10_OP_EN_SET   				MT6335_LDO_VA10_OP_EN_SET
#define LDO_VA10_OP_EN_CLR   				MT6335_LDO_VA10_OP_EN_CLR
#define LDO_VA10_OP_CFG      				MT6335_LDO_VA10_OP_CFG
#define LDO_VA10_OP_CFG_SET  				MT6335_LDO_VA10_OP_CFG_SET
#define LDO_VA10_OP_CFG_CLR  				MT6335_LDO_VA10_OP_CFG_CLR
#define LDO_VA10_CON1        				MT6335_LDO_VA10_CON1
#define LDO_VA10_CON2        				MT6335_LDO_VA10_CON2
#define LDO_VA10_CON3        				MT6335_LDO_VA10_CON3
#define LDO_VA12_CON0        				MT6335_LDO_VA12_CON0
#define LDO_VA12_OP_EN       				MT6335_LDO_VA12_OP_EN
#define LDO_VA12_OP_EN_SET   				MT6335_LDO_VA12_OP_EN_SET
#define LDO_VA12_OP_EN_CLR   				MT6335_LDO_VA12_OP_EN_CLR
#define LDO_VA12_OP_CFG      				MT6335_LDO_VA12_OP_CFG
#define LDO_VA12_OP_CFG_SET  				MT6335_LDO_VA12_OP_CFG_SET
#define LDO_VA12_OP_CFG_CLR  				MT6335_LDO_VA12_OP_CFG_CLR
#define LDO_VA12_CON1        				MT6335_LDO_VA12_CON1
#define LDO_VA12_CON2        				MT6335_LDO_VA12_CON2
#define LDO_VA12_CON3        				MT6335_LDO_VA12_CON3
#define LDO_VA18_CON0        				MT6335_LDO_VA18_CON0
#define LDO_VA18_OP_EN       				MT6335_LDO_VA18_OP_EN
#define LDO_VA18_OP_EN_SET   				MT6335_LDO_VA18_OP_EN_SET
#define LDO_VA18_OP_EN_CLR   				MT6335_LDO_VA18_OP_EN_CLR
#define LDO_VA18_OP_CFG      				MT6335_LDO_VA18_OP_CFG
#define LDO_VA18_OP_CFG_SET  				MT6335_LDO_VA18_OP_CFG_SET
#define LDO_VA18_OP_CFG_CLR  				MT6335_LDO_VA18_OP_CFG_CLR
#define LDO_VA18_CON1        				MT6335_LDO_VA18_CON1
#define LDO_VA18_CON2        				MT6335_LDO_VA18_CON2
#define LDO_VUSB33_CON0      				MT6335_LDO_VUSB33_CON0
#define LDO_VUSB33_OP_EN     				MT6335_LDO_VUSB33_OP_EN
#define LDO_VUSB33_OP_EN_SET 				MT6335_LDO_VUSB33_OP_EN_SET
#define LDO_VUSB33_OP_EN_CLR 				MT6335_LDO_VUSB33_OP_EN_CLR
#define LDO_VUSB33_OP_CFG    				MT6335_LDO_VUSB33_OP_CFG
#define LDO_VUSB33_OP_CFG_SET				MT6335_LDO_VUSB33_OP_CFG_SET
#define LDO_VUSB33_OP_CFG_CLR				MT6335_LDO_VUSB33_OP_CFG_CLR
#define LDO_VUSB33_CON1      				MT6335_LDO_VUSB33_CON1
#define LDO_VUSB33_CON2      				MT6335_LDO_VUSB33_CON2
#define LDO_VEMC_CON0        				MT6335_LDO_VEMC_CON0
#define LDO_VEMC_OP_EN       				MT6335_LDO_VEMC_OP_EN
#define LDO_VEMC_OP_EN_SET   				MT6335_LDO_VEMC_OP_EN_SET
#define LDO_VEMC_OP_EN_CLR   				MT6335_LDO_VEMC_OP_EN_CLR
#define LDO_VEMC_OP_CFG      				MT6335_LDO_VEMC_OP_CFG
#define LDO_VEMC_OP_CFG_SET  				MT6335_LDO_VEMC_OP_CFG_SET
#define LDO_VEMC_OP_CFG_CLR  				MT6335_LDO_VEMC_OP_CFG_CLR
#define LDO_VEMC_CON1        				MT6335_LDO_VEMC_CON1
#define LDO_VEMC_CON2        				MT6335_LDO_VEMC_CON2
#define LDO_VEMC_CON3        				MT6335_LDO_VEMC_CON3
#define LDO_VXO22_CON0       				MT6335_LDO_VXO22_CON0
#define LDO_VXO22_OP_EN      				MT6335_LDO_VXO22_OP_EN
#define LDO_VXO22_OP_EN_SET  				MT6335_LDO_VXO22_OP_EN_SET
#define LDO_VXO22_OP_EN_CLR  				MT6335_LDO_VXO22_OP_EN_CLR
#define LDO_VXO22_OP_CFG     				MT6335_LDO_VXO22_OP_CFG
#define LDO_VXO22_OP_CFG_SET 				MT6335_LDO_VXO22_OP_CFG_SET
#define LDO_VXO22_OP_CFG_CLR 				MT6335_LDO_VXO22_OP_CFG_CLR
#define LDO_VXO22_CON1       				MT6335_LDO_VXO22_CON1
#define LDO_VXO22_CON2       				MT6335_LDO_VXO22_CON2
#define LDO_VEFUSE_CON0      				MT6335_LDO_VEFUSE_CON0
#define LDO_VEFUSE_OP_EN     				MT6335_LDO_VEFUSE_OP_EN
#define LDO_VEFUSE_OP_EN_SET 				MT6335_LDO_VEFUSE_OP_EN_SET
#define LDO_VEFUSE_OP_EN_CLR 				MT6335_LDO_VEFUSE_OP_EN_CLR
#define LDO_VEFUSE_OP_CFG    				MT6335_LDO_VEFUSE_OP_CFG
#define LDO_VEFUSE_OP_CFG_SET				MT6335_LDO_VEFUSE_OP_CFG_SET
#define LDO_VEFUSE_OP_CFG_CLR				MT6335_LDO_VEFUSE_OP_CFG_CLR
#define LDO_VEFUSE_CON1      				MT6335_LDO_VEFUSE_CON1
#define LDO_VEFUSE_CON2      				MT6335_LDO_VEFUSE_CON2
#define LDO_VEFUSE_CON3      				MT6335_LDO_VEFUSE_CON3
#define LDO_VSIM1_CON0       				MT6335_LDO_VSIM1_CON0
#define LDO_VSIM1_OP_EN      				MT6335_LDO_VSIM1_OP_EN
#define LDO_VSIM1_OP_EN_SET  				MT6335_LDO_VSIM1_OP_EN_SET
#define LDO_VSIM1_OP_EN_CLR  				MT6335_LDO_VSIM1_OP_EN_CLR
#define LDO_VSIM1_OP_CFG     				MT6335_LDO_VSIM1_OP_CFG
#define LDO_VSIM1_OP_CFG_SET 				MT6335_LDO_VSIM1_OP_CFG_SET
#define LDO_VSIM1_OP_CFG_CLR 				MT6335_LDO_VSIM1_OP_CFG_CLR
#define LDO_VSIM1_CON1       				MT6335_LDO_VSIM1_CON1
#define LDO_VSIM1_CON2       				MT6335_LDO_VSIM1_CON2
#define LDO_VSIM1_CON3       				MT6335_LDO_VSIM1_CON3
#define LDO_VSIM2_CON0       				MT6335_LDO_VSIM2_CON0
#define LDO_VSIM2_OP_EN      				MT6335_LDO_VSIM2_OP_EN
#define LDO_VSIM2_OP_EN_SET  				MT6335_LDO_VSIM2_OP_EN_SET
#define LDO_VSIM2_OP_EN_CLR  				MT6335_LDO_VSIM2_OP_EN_CLR
#define LDO_VSIM2_OP_CFG     				MT6335_LDO_VSIM2_OP_CFG
#define LDO_VSIM2_OP_CFG_SET 				MT6335_LDO_VSIM2_OP_CFG_SET
#define LDO_VSIM2_OP_CFG_CLR 				MT6335_LDO_VSIM2_OP_CFG_CLR
#define LDO_VSIM2_CON1       				MT6335_LDO_VSIM2_CON1
#define LDO_VSIM2_CON2       				MT6335_LDO_VSIM2_CON2
#define LDO_VSIM2_CON3       				MT6335_LDO_VSIM2_CON3
#define LDO_VCAMAF_CON0      				MT6335_LDO_VCAMAF_CON0
#define LDO_VCAMAF_OP_EN     				MT6335_LDO_VCAMAF_OP_EN
#define LDO_VCAMAF_OP_EN_SET 				MT6335_LDO_VCAMAF_OP_EN_SET
#define LDO_VCAMAF_OP_EN_CLR 				MT6335_LDO_VCAMAF_OP_EN_CLR
#define LDO_VCAMAF_OP_CFG    				MT6335_LDO_VCAMAF_OP_CFG
#define LDO_VCAMAF_OP_CFG_SET				MT6335_LDO_VCAMAF_OP_CFG_SET
#define LDO_VCAMAF_OP_CFG_CLR				MT6335_LDO_VCAMAF_OP_CFG_CLR
#define LDO_VCAMAF_CON1      				MT6335_LDO_VCAMAF_CON1
#define LDO_VCAMAF_CON2      				MT6335_LDO_VCAMAF_CON2
#define LDO_VCAMAF_CON3      				MT6335_LDO_VCAMAF_CON3
#define LDO_VTOUCH_CON0      				MT6335_LDO_VTOUCH_CON0
#define LDO_VTOUCH_OP_EN     				MT6335_LDO_VTOUCH_OP_EN
#define LDO_VTOUCH_OP_EN_SET 				MT6335_LDO_VTOUCH_OP_EN_SET
#define LDO_VTOUCH_OP_EN_CLR 				MT6335_LDO_VTOUCH_OP_EN_CLR
#define LDO_VTOUCH_OP_CFG    				MT6335_LDO_VTOUCH_OP_CFG
#define LDO_VTOUCH_OP_CFG_SET				MT6335_LDO_VTOUCH_OP_CFG_SET
#define LDO_VTOUCH_OP_CFG_CLR				MT6335_LDO_VTOUCH_OP_CFG_CLR
#define LDO_VTOUCH_CON1      				MT6335_LDO_VTOUCH_CON1
#define LDO_VTOUCH_CON2      				MT6335_LDO_VTOUCH_CON2
#define LDO_VTOUCH_CON3      				MT6335_LDO_VTOUCH_CON3
#define LDO_VCAMD1_CON0      				MT6335_LDO_VCAMD1_CON0
#define LDO_VCAMD1_OP_EN     				MT6335_LDO_VCAMD1_OP_EN
#define LDO_VCAMD1_OP_EN_SET 				MT6335_LDO_VCAMD1_OP_EN_SET
#define LDO_VCAMD1_OP_EN_CLR 				MT6335_LDO_VCAMD1_OP_EN_CLR
#define LDO_VCAMD1_OP_CFG    				MT6335_LDO_VCAMD1_OP_CFG
#define LDO_VCAMD1_OP_CFG_SET				MT6335_LDO_VCAMD1_OP_CFG_SET
#define LDO_VCAMD1_OP_CFG_CLR				MT6335_LDO_VCAMD1_OP_CFG_CLR
#define LDO_VCAMD1_CON1      				MT6335_LDO_VCAMD1_CON1
#define LDO_VCAMD1_CON2      				MT6335_LDO_VCAMD1_CON2
#define LDO_VCAMD1_CON3      				MT6335_LDO_VCAMD1_CON3
#define LDO_VCAMD2_CON0      				MT6335_LDO_VCAMD2_CON0
#define LDO_VCAMD2_OP_EN     				MT6335_LDO_VCAMD2_OP_EN
#define LDO_VCAMD2_OP_EN_SET 				MT6335_LDO_VCAMD2_OP_EN_SET
#define LDO_VCAMD2_OP_EN_CLR 				MT6335_LDO_VCAMD2_OP_EN_CLR
#define LDO_VCAMD2_OP_CFG    				MT6335_LDO_VCAMD2_OP_CFG
#define LDO_VCAMD2_OP_CFG_SET				MT6335_LDO_VCAMD2_OP_CFG_SET
#define LDO_VCAMD2_OP_CFG_CLR				MT6335_LDO_VCAMD2_OP_CFG_CLR
#define LDO_VCAMD2_CON1      				MT6335_LDO_VCAMD2_CON1
#define LDO_VCAMD2_CON2      				MT6335_LDO_VCAMD2_CON2
#define LDO_VCAMD2_CON3      				MT6335_LDO_VCAMD2_CON3
#define LDO_VCAMIO_CON0      				MT6335_LDO_VCAMIO_CON0
#define LDO_VCAMIO_OP_EN     				MT6335_LDO_VCAMIO_OP_EN
#define LDO_VCAMIO_OP_EN_SET 				MT6335_LDO_VCAMIO_OP_EN_SET
#define LDO_VCAMIO_OP_EN_CLR 				MT6335_LDO_VCAMIO_OP_EN_CLR
#define LDO_VCAMIO_OP_CFG    				MT6335_LDO_VCAMIO_OP_CFG
#define LDO_VCAMIO_OP_CFG_SET				MT6335_LDO_VCAMIO_OP_CFG_SET
#define LDO_VCAMIO_OP_CFG_CLR				MT6335_LDO_VCAMIO_OP_CFG_CLR
#define LDO_VCAMIO_CON1      				MT6335_LDO_VCAMIO_CON1
#define LDO_VCAMIO_CON2      				MT6335_LDO_VCAMIO_CON2
#define LDO_VCAMIO_CON3      				MT6335_LDO_VCAMIO_CON3
#define LDO_VMIPI_CON0       				MT6335_LDO_VMIPI_CON0
#define LDO_VMIPI_OP_EN      				MT6335_LDO_VMIPI_OP_EN
#define LDO_VMIPI_OP_EN_SET  				MT6335_LDO_VMIPI_OP_EN_SET
#define LDO_VMIPI_OP_EN_CLR  				MT6335_LDO_VMIPI_OP_EN_CLR
#define LDO_VMIPI_OP_CFG     				MT6335_LDO_VMIPI_OP_CFG
#define LDO_VMIPI_OP_CFG_SET 				MT6335_LDO_VMIPI_OP_CFG_SET
#define LDO_VMIPI_OP_CFG_CLR 				MT6335_LDO_VMIPI_OP_CFG_CLR
#define LDO_VMIPI_CON1       				MT6335_LDO_VMIPI_CON1
#define LDO_VMIPI_CON2       				MT6335_LDO_VMIPI_CON2
#define LDO_VMIPI_CON3       				MT6335_LDO_VMIPI_CON3
#define LDO_VGP3_CON0        				MT6335_LDO_VGP3_CON0
#define LDO_VGP3_OP_EN       				MT6335_LDO_VGP3_OP_EN
#define LDO_VGP3_OP_EN_SET   				MT6335_LDO_VGP3_OP_EN_SET
#define LDO_VGP3_OP_EN_CLR   				MT6335_LDO_VGP3_OP_EN_CLR
#define LDO_VGP3_OP_CFG      				MT6335_LDO_VGP3_OP_CFG
#define LDO_VGP3_OP_CFG_SET  				MT6335_LDO_VGP3_OP_CFG_SET
#define LDO_VGP3_OP_CFG_CLR  				MT6335_LDO_VGP3_OP_CFG_CLR
#define LDO_VGP3_CON1        				MT6335_LDO_VGP3_CON1
#define LDO_VGP3_CON2        				MT6335_LDO_VGP3_CON2
#define LDO_VGP3_CON3        				MT6335_LDO_VGP3_CON3
#define LDO_VCN33_CON0_BT    				MT6335_LDO_VCN33_CON0_BT
#define LDO_VCN33_OP_EN_BT   				MT6335_LDO_VCN33_OP_EN_BT
#define LDO_VCN33_OP_EN_BT_SET				MT6335_LDO_VCN33_OP_EN_BT_SET
#define LDO_VCN33_OP_EN_BT_CLR				MT6335_LDO_VCN33_OP_EN_BT_CLR
#define LDO_VCN33_OP_CFG_BT  				MT6335_LDO_VCN33_OP_CFG_BT
#define LDO_VCN33_OP_CFG_BT_SET				MT6335_LDO_VCN33_OP_CFG_BT_SET
#define LDO_VCN33_OP_CFG_BT_CLR				MT6335_LDO_VCN33_OP_CFG_BT_CLR
#define LDO_VCN33_CON0_WIFI  				MT6335_LDO_VCN33_CON0_WIFI
#define LDO_VCN33_OP_EN_WIFI 				MT6335_LDO_VCN33_OP_EN_WIFI
#define LDO_VCN33_OP_EN_WIFI_SET 			MT6335_LDO_VCN33_OP_EN_WIFI_SET
#define LDO_VCN33_OP_EN_WIFI_CLR 			MT6335_LDO_VCN33_OP_EN_WIFI_CLR
#define LDO_VCN33_OP_CFG_WIFI 				MT6335_LDO_VCN33_OP_CFG_WIFI
#define LDO_VCN33_OP_CFG_WIFI_SET			MT6335_LDO_VCN33_OP_CFG_WIFI_SET
#define LDO_VCN33_OP_CFG_WIFI_CLR			MT6335_LDO_VCN33_OP_CFG_WIFI_CLR
#define LDO_VCN33_CON1       				MT6335_LDO_VCN33_CON1
#define LDO_VCN33_CON2       				MT6335_LDO_VCN33_CON2
#define LDO_VCN33_CON3       				MT6335_LDO_VCN33_CON3
#define LDO_VCN18_CON0_BT    				MT6335_LDO_VCN18_CON0_BT
#define LDO_VCN18_OP_EN_BT   				MT6335_LDO_VCN18_OP_EN_BT
#define LDO_VCN18_OP_EN_BT_SET 				MT6335_LDO_VCN18_OP_EN_BT_SET
#define LDO_VCN18_OP_EN_BT_CLR 				MT6335_LDO_VCN18_OP_EN_BT_CLR
#define LDO_VCN18_OP_CFG_BT  				MT6335_LDO_VCN18_OP_CFG_BT
#define LDO_VCN18_OP_CFG_BT_SET				MT6335_LDO_VCN18_OP_CFG_BT_SET
#define LDO_VCN18_OP_CFG_BT_CLR				MT6335_LDO_VCN18_OP_CFG_BT_CLR
#define LDO_VCN18_CON0_WIFI  				MT6335_LDO_VCN18_CON0_WIFI
#define LDO_VCN18_OP_EN_WIFI 				MT6335_LDO_VCN18_OP_EN_WIFI
#define LDO_VCN18_OP_EN_WIFI_SET 			MT6335_LDO_VCN18_OP_EN_WIFI_SET
#define LDO_VCN18_OP_EN_WIFI_CLR 			MT6335_LDO_VCN18_OP_EN_WIFI_CLR
#define LDO_VCN18_OP_CFG_WIFI 				MT6335_LDO_VCN18_OP_CFG_WIFI
#define LDO_VCN18_OP_CFG_WIFI_SET 			MT6335_LDO_VCN18_OP_CFG_WIFI_SET
#define LDO_VCN18_OP_CFG_WIFI_CLR 			MT6335_LDO_VCN18_OP_CFG_WIFI_CLR
#define LDO_VCN18_CON1       				MT6335_LDO_VCN18_CON1
#define LDO_VCN18_CON2       				MT6335_LDO_VCN18_CON2
#define LDO_VCN18_CON3       				MT6335_LDO_VCN18_CON3
#define LDO_VCN28_CON0       				MT6335_LDO_VCN28_CON0
#define LDO_VCN28_OP_EN      				MT6335_LDO_VCN28_OP_EN
#define LDO_VCN28_OP_EN_SET  				MT6335_LDO_VCN28_OP_EN_SET
#define LDO_VCN28_OP_EN_CLR  				MT6335_LDO_VCN28_OP_EN_CLR
#define LDO_VCN28_OP_CFG     				MT6335_LDO_VCN28_OP_CFG
#define LDO_VCN28_OP_CFG_SET 				MT6335_LDO_VCN28_OP_CFG_SET
#define LDO_VCN28_OP_CFG_CLR 				MT6335_LDO_VCN28_OP_CFG_CLR
#define LDO_VCN28_CON1       				MT6335_LDO_VCN28_CON1
#define LDO_VCN28_CON2       				MT6335_LDO_VCN28_CON2
#define LDO_VIBR_CON0        				MT6335_LDO_VIBR_CON0
#define LDO_VIBR_OP_EN       				MT6335_LDO_VIBR_OP_EN
#define LDO_VIBR_OP_EN_SET   				MT6335_LDO_VIBR_OP_EN_SET
#define LDO_VIBR_OP_EN_CLR   				MT6335_LDO_VIBR_OP_EN_CLR
#define LDO_VIBR_OP_CFG      				MT6335_LDO_VIBR_OP_CFG
#define LDO_VIBR_OP_CFG_SET  				MT6335_LDO_VIBR_OP_CFG_SET
#define LDO_VIBR_OP_CFG_CLR  				MT6335_LDO_VIBR_OP_CFG_CLR
#define LDO_VIBR_CON1        				MT6335_LDO_VIBR_CON1
#define LDO_VIBR_CON2        				MT6335_LDO_VIBR_CON2
#define LDO_VBIF28_CON0      				MT6335_LDO_VBIF28_CON0
#define LDO_VBIF28_OP_EN     				MT6335_LDO_VBIF28_OP_EN
#define LDO_VBIF28_OP_EN_SET 				MT6335_LDO_VBIF28_OP_EN_SET
#define LDO_VBIF28_OP_EN_CLR 				MT6335_LDO_VBIF28_OP_EN_CLR
#define LDO_VBIF28_OP_CFG    				MT6335_LDO_VBIF28_OP_CFG
#define LDO_VBIF28_OP_CFG_SET				MT6335_LDO_VBIF28_OP_CFG_SET
#define LDO_VBIF28_OP_CFG_CLR				MT6335_LDO_VBIF28_OP_CFG_CLR
#define LDO_VBIF28_CON1      				MT6335_LDO_VBIF28_CON1
#define LDO_VBIF28_CON2      				MT6335_LDO_VBIF28_CON2
#define LDO_VFE28_CON0       				MT6335_LDO_VFE28_CON0
#define LDO_VFE28_OP_EN      				MT6335_LDO_VFE28_OP_EN
#define LDO_VFE28_OP_EN_SET  				MT6335_LDO_VFE28_OP_EN_SET
#define LDO_VFE28_OP_EN_CLR  				MT6335_LDO_VFE28_OP_EN_CLR
#define LDO_VFE28_OP_CFG     				MT6335_LDO_VFE28_OP_CFG
#define LDO_VFE28_OP_CFG_SET 				MT6335_LDO_VFE28_OP_CFG_SET
#define LDO_VFE28_OP_CFG_CLR 				MT6335_LDO_VFE28_OP_CFG_CLR
#define LDO_VFE28_CON1       				MT6335_LDO_VFE28_CON1
#define LDO_VFE28_CON2       				MT6335_LDO_VFE28_CON2
#define LDO_VMCH_CON0        				MT6335_LDO_VMCH_CON0
#define LDO_VMCH_OP_EN       				MT6335_LDO_VMCH_OP_EN
#define LDO_VMCH_OP_EN_SET   				MT6335_LDO_VMCH_OP_EN_SET
#define LDO_VMCH_OP_EN_CLR   				MT6335_LDO_VMCH_OP_EN_CLR
#define LDO_VMCH_OP_CFG      				MT6335_LDO_VMCH_OP_CFG
#define LDO_VMCH_OP_CFG_SET  				MT6335_LDO_VMCH_OP_CFG_SET
#define LDO_VMCH_OP_CFG_CLR  				MT6335_LDO_VMCH_OP_CFG_CLR
#define LDO_VMCH_CON1        				MT6335_LDO_VMCH_CON1
#define LDO_VMCH_CON2        				MT6335_LDO_VMCH_CON2
#define LDO_VMCH_CON3        				MT6335_LDO_VMCH_CON3
#define LDO_VMC_CON0         				MT6335_LDO_VMC_CON0
#define LDO_VMC_OP_EN        				MT6335_LDO_VMC_OP_EN
#define LDO_VMC_OP_EN_SET    				MT6335_LDO_VMC_OP_EN_SET
#define LDO_VMC_OP_EN_CLR    				MT6335_LDO_VMC_OP_EN_CLR
#define LDO_VMC_OP_CFG       				MT6335_LDO_VMC_OP_CFG
#define LDO_VMC_OP_CFG_SET   				MT6335_LDO_VMC_OP_CFG_SET
#define LDO_VMC_OP_CFG_CLR   				MT6335_LDO_VMC_OP_CFG_CLR
#define LDO_VMC_CON1         				MT6335_LDO_VMC_CON1
#define LDO_VMC_CON2         				MT6335_LDO_VMC_CON2
#define LDO_VMC_CON3         				MT6335_LDO_VMC_CON3
#define LDO_VRF18_1_CON0     				MT6335_LDO_VRF18_1_CON0
#define LDO_VRF18_1_OP_EN    				MT6335_LDO_VRF18_1_OP_EN
#define LDO_VRF18_1_OP_EN_SET 				MT6335_LDO_VRF18_1_OP_EN_SET
#define LDO_VRF18_1_OP_EN_CLR 				MT6335_LDO_VRF18_1_OP_EN_CLR
#define LDO_VRF18_1_OP_CFG   				MT6335_LDO_VRF18_1_OP_CFG
#define LDO_VRF18_1_OP_CFG_SET				MT6335_LDO_VRF18_1_OP_CFG_SET
#define LDO_VRF18_1_OP_CFG_CLR				MT6335_LDO_VRF18_1_OP_CFG_CLR
#define LDO_VRF18_1_CON1     				MT6335_LDO_VRF18_1_CON1
#define LDO_VRF18_1_CON2     				MT6335_LDO_VRF18_1_CON2
#define LDO_VRF18_1_CON3     				MT6335_LDO_VRF18_1_CON3
#define LDO_VRF18_2_CON0     				MT6335_LDO_VRF18_2_CON0
#define LDO_VRF18_2_OP_EN    				MT6335_LDO_VRF18_2_OP_EN
#define LDO_VRF18_2_OP_EN_SET 				MT6335_LDO_VRF18_2_OP_EN_SET
#define LDO_VRF18_2_OP_EN_CLR 				MT6335_LDO_VRF18_2_OP_EN_CLR
#define LDO_VRF18_2_OP_CFG   				MT6335_LDO_VRF18_2_OP_CFG
#define LDO_VRF18_2_OP_CFG_SET				MT6335_LDO_VRF18_2_OP_CFG_SET
#define LDO_VRF18_2_OP_CFG_CLR				MT6335_LDO_VRF18_2_OP_CFG_CLR
#define LDO_VRF18_2_CON1     				MT6335_LDO_VRF18_2_CON1
#define LDO_VRF18_2_CON2     				MT6335_LDO_VRF18_2_CON2
#define LDO_VRF18_2_CON3     				MT6335_LDO_VRF18_2_CON3
#define LDO_VRF12_CON0       				MT6335_LDO_VRF12_CON0
#define LDO_VRF12_OP_EN      				MT6335_LDO_VRF12_OP_EN
#define LDO_VRF12_OP_EN_SET  				MT6335_LDO_VRF12_OP_EN_SET
#define LDO_VRF12_OP_EN_CLR  				MT6335_LDO_VRF12_OP_EN_CLR
#define LDO_VRF12_OP_CFG     				MT6335_LDO_VRF12_OP_CFG
#define LDO_VRF12_OP_CFG_SET 				MT6335_LDO_VRF12_OP_CFG_SET
#define LDO_VRF12_OP_CFG_CLR 				MT6335_LDO_VRF12_OP_CFG_CLR
#define LDO_VRF12_CON1       				MT6335_LDO_VRF12_CON1
#define LDO_VRF12_CON2       				MT6335_LDO_VRF12_CON2
#define LDO_VRF12_CON3       				MT6335_LDO_VRF12_CON3
#define LDO_VCAMA1_CON0      				MT6335_LDO_VCAMA1_CON0
#define LDO_VCAMA1_OP_EN     				MT6335_LDO_VCAMA1_OP_EN
#define LDO_VCAMA1_OP_CFG    				MT6335_LDO_VCAMA1_OP_CFG
#define LDO_VCAMA1_CON1      				MT6335_LDO_VCAMA1_CON1
#define LDO_VCAMA1_CON2      				MT6335_LDO_VCAMA1_CON2
#define LDO_VCAMA2_CON0      				MT6335_LDO_VCAMA2_CON0
#define LDO_VCAMA2_OP_EN     				MT6335_LDO_VCAMA2_OP_EN
#define LDO_VCAMA2_OP_CFG    				MT6335_LDO_VCAMA2_OP_CFG
#define LDO_VCAMA2_CON1      				MT6335_LDO_VCAMA2_CON1
#define LDO_VCAMA2_CON2      				MT6335_LDO_VCAMA2_CON2
#define LDO_K_CON0           				MT6335_LDO_K_CON0
#define LDO_K_CON1           				MT6335_LDO_K_CON1
#define LDO_K_CON2           				MT6335_LDO_K_CON2
#define LDO_OCFB0            				MT6335_LDO_OCFB0
#define VRTC_CON0            				MT6335_VRTC_CON0
#define LDO_RSV_CON0         				MT6335_LDO_RSV_CON0
#define LDO_RSV_CON1         				MT6335_LDO_RSV_CON1
#define LDO_VSRAM_DVFS1_CON0 				MT6335_LDO_VSRAM_DVFS1_CON0
#define LDO_VSRAM_DVFS1_CON1 				MT6335_LDO_VSRAM_DVFS1_CON1
#define LDO_VSRAM_DVFS1_CON2 				MT6335_LDO_VSRAM_DVFS1_CON2
#define LDO_VSRAM_DVFS1_CFG0 				MT6335_LDO_VSRAM_DVFS1_CFG0
#define LDO_VSRAM_DVFS1_CFG1 				MT6335_LDO_VSRAM_DVFS1_CFG1
#define LDO_VSRAM_DVFS1_OP_EN 				MT6335_LDO_VSRAM_DVFS1_OP_EN
#define LDO_VSRAM_DVFS1_OP_EN_SET 			MT6335_LDO_VSRAM_DVFS1_OP_EN_SET
#define LDO_VSRAM_DVFS1_OP_EN_CLR 			MT6335_LDO_VSRAM_DVFS1_OP_EN_CLR
#define LDO_VSRAM_DVFS1_OP_CFG 				MT6335_LDO_VSRAM_DVFS1_OP_CFG
#define LDO_VSRAM_DVFS1_OP_CFG_SET			MT6335_LDO_VSRAM_DVFS1_OP_CFG_SET
#define LDO_VSRAM_DVFS1_OP_CFG_CLR			MT6335_LDO_VSRAM_DVFS1_OP_CFG_CLR
#define LDO_VSRAM_DVFS1_CON3 				MT6335_LDO_VSRAM_DVFS1_CON3
#define LDO_VSRAM_DVFS1_CON4 				MT6335_LDO_VSRAM_DVFS1_CON4
#define LDO_VSRAM_DVFS1_CON5 				MT6335_LDO_VSRAM_DVFS1_CON5
#define LDO_VSRAM_DVFS1_DBG0 				MT6335_LDO_VSRAM_DVFS1_DBG0
#define LDO_VSRAM_DVFS1_DBG1 				MT6335_LDO_VSRAM_DVFS1_DBG1
#define LDO_VSRAM_DVFS2_CON0 				MT6335_LDO_VSRAM_DVFS2_CON0
#define LDO_VSRAM_DVFS2_CON1 				MT6335_LDO_VSRAM_DVFS2_CON1
#define LDO_VSRAM_DVFS2_CON2 				MT6335_LDO_VSRAM_DVFS2_CON2
#define LDO_VSRAM_DVFS2_CFG0 				MT6335_LDO_VSRAM_DVFS2_CFG0
#define LDO_VSRAM_DVFS2_CFG1 				MT6335_LDO_VSRAM_DVFS2_CFG1
#define LDO_VSRAM_DVFS2_OP_EN				MT6335_LDO_VSRAM_DVFS2_OP_EN
#define LDO_VSRAM_DVFS2_OP_EN_SET 			MT6335_LDO_VSRAM_DVFS2_OP_EN_SET
#define LDO_VSRAM_DVFS2_OP_EN_CLR 			MT6335_LDO_VSRAM_DVFS2_OP_EN_CLR
#define LDO_VSRAM_DVFS2_OP_CFG 				MT6335_LDO_VSRAM_DVFS2_OP_CFG
#define LDO_VSRAM_DVFS2_OP_CFG_SET			MT6335_LDO_VSRAM_DVFS2_OP_CFG_SET
#define LDO_VSRAM_DVFS2_OP_CFG_CLR			MT6335_LDO_VSRAM_DVFS2_OP_CFG_CLR
#define LDO_VSRAM_DVFS2_CON3 				MT6335_LDO_VSRAM_DVFS2_CON3
#define LDO_VSRAM_DVFS2_CON4 				MT6335_LDO_VSRAM_DVFS2_CON4
#define LDO_VSRAM_DVFS2_CON5 				MT6335_LDO_VSRAM_DVFS2_CON5
#define LDO_VSRAM_DVFS2_DBG0 				MT6335_LDO_VSRAM_DVFS2_DBG0
#define LDO_VSRAM_DVFS2_DBG1 				MT6335_LDO_VSRAM_DVFS2_DBG1
#define LDO_VSRAM_VCORE_CON0 				MT6335_LDO_VSRAM_VCORE_CON0
#define LDO_VSRAM_VCORE_CON1 				MT6335_LDO_VSRAM_VCORE_CON1
#define LDO_VSRAM_VCORE_CON2 				MT6335_LDO_VSRAM_VCORE_CON2
#define LDO_VSRAM_VCORE_CFG0 				MT6335_LDO_VSRAM_VCORE_CFG0
#define LDO_VSRAM_VCORE_CFG1 				MT6335_LDO_VSRAM_VCORE_CFG1
#define LDO_VSRAM_VCORE_OP_EN 				MT6335_LDO_VSRAM_VCORE_OP_EN
#define LDO_VSRAM_VCORE_OP_EN_SET 			MT6335_LDO_VSRAM_VCORE_OP_EN_SET
#define LDO_VSRAM_VCORE_OP_EN_CLR 			MT6335_LDO_VSRAM_VCORE_OP_EN_CLR
#define LDO_VSRAM_VCORE_OP_CFG				MT6335_LDO_VSRAM_VCORE_OP_CFG
#define LDO_VSRAM_VCORE_OP_CFG_SET			MT6335_LDO_VSRAM_VCORE_OP_CFG_SET
#define LDO_VSRAM_VCORE_OP_CFG_CLR			MT6335_LDO_VSRAM_VCORE_OP_CFG_CLR
#define LDO_VSRAM_VCORE_CON3 				MT6335_LDO_VSRAM_VCORE_CON3
#define LDO_VSRAM_VCORE_CON4 				MT6335_LDO_VSRAM_VCORE_CON4
#define LDO_VSRAM_VCORE_CON5 				MT6335_LDO_VSRAM_VCORE_CON5
#define LDO_VSRAM_VCORE_DBG0 				MT6335_LDO_VSRAM_VCORE_DBG0
#define LDO_VSRAM_VCORE_DBG1 				MT6335_LDO_VSRAM_VCORE_DBG1
#define LDO_VSRAM_VGPU_CON0  				MT6335_LDO_VSRAM_VGPU_CON0
#define LDO_VSRAM_VGPU_CON1  				MT6335_LDO_VSRAM_VGPU_CON1
#define LDO_VSRAM_VGPU_CON2  				MT6335_LDO_VSRAM_VGPU_CON2
#define LDO_VSRAM_VGPU_CFG0  				MT6335_LDO_VSRAM_VGPU_CFG0
#define LDO_VSRAM_VGPU_CFG1  				MT6335_LDO_VSRAM_VGPU_CFG1
#define LDO_VSRAM_VGPU_OP_EN 				MT6335_LDO_VSRAM_VGPU_OP_EN
#define LDO_VSRAM_VGPU_OP_EN_SET 			MT6335_LDO_VSRAM_VGPU_OP_EN_SET
#define LDO_VSRAM_VGPU_OP_EN_CLR 			MT6335_LDO_VSRAM_VGPU_OP_EN_CLR
#define LDO_VSRAM_VGPU_OP_CFG 				MT6335_LDO_VSRAM_VGPU_OP_CFG
#define LDO_VSRAM_VGPU_OP_CFG_SET 			MT6335_LDO_VSRAM_VGPU_OP_CFG_SET
#define LDO_VSRAM_VGPU_OP_CFG_CLR 			MT6335_LDO_VSRAM_VGPU_OP_CFG_CLR
#define LDO_VSRAM_VGPU_CON3  				MT6335_LDO_VSRAM_VGPU_CON3
#define LDO_VSRAM_VGPU_CON4  				MT6335_LDO_VSRAM_VGPU_CON4
#define LDO_VSRAM_VGPU_CON5  				MT6335_LDO_VSRAM_VGPU_CON5
#define LDO_VSRAM_VGPU_DBG0  				MT6335_LDO_VSRAM_VGPU_DBG0
#define LDO_VSRAM_VGPU_DBG1  				MT6335_LDO_VSRAM_VGPU_DBG1
#define LDO_VSRAM_VMD_CON0   				MT6335_LDO_VSRAM_VMD_CON0
#define LDO_VSRAM_VMD_CON1   				MT6335_LDO_VSRAM_VMD_CON1
#define LDO_VSRAM_VMD_CON2   				MT6335_LDO_VSRAM_VMD_CON2
#define LDO_VSRAM_VMD_CFG0   				MT6335_LDO_VSRAM_VMD_CFG0
#define LDO_VSRAM_VMD_CFG1   				MT6335_LDO_VSRAM_VMD_CFG1
#define LDO_VSRAM_VMD_OP_EN  				MT6335_LDO_VSRAM_VMD_OP_EN
#define LDO_VSRAM_VMD_OP_EN_SET 			MT6335_LDO_VSRAM_VMD_OP_EN_SET
#define LDO_VSRAM_VMD_OP_EN_CLR 			MT6335_LDO_VSRAM_VMD_OP_EN_CLR
#define LDO_VSRAM_VMD_OP_CFG				MT6335_LDO_VSRAM_VMD_OP_CFG
#define LDO_VSRAM_VMD_OP_CFG_SET			MT6335_LDO_VSRAM_VMD_OP_CFG_SET
#define LDO_VSRAM_VMD_OP_CFG_CLR			MT6335_LDO_VSRAM_VMD_OP_CFG_CLR
#define LDO_VSRAM_VMD_CON3   				MT6335_LDO_VSRAM_VMD_CON3
#define LDO_VSRAM_VMD_CON4   				MT6335_LDO_VSRAM_VMD_CON4
#define LDO_VSRAM_VMD_CON5   				MT6335_LDO_VSRAM_VMD_CON5
#define LDO_VSRAM_VMD_DBG0   				MT6335_LDO_VSRAM_VMD_DBG0
#define LDO_VSRAM_VMD_DBG1   				MT6335_LDO_VSRAM_VMD_DBG1
#define LDO_TRACKING_CON0    				MT6335_LDO_TRACKING_CON0
#define LDO_TRACKING_CON1    				MT6335_LDO_TRACKING_CON1
#define LDO_TRACKING_CON2    				MT6335_LDO_TRACKING_CON2
#define LDO_TRACKING_CON3    				MT6335_LDO_TRACKING_CON3
#define LDO_DCM              				MT6335_LDO_DCM
#define LDO_VIO28_CG0        				MT6335_LDO_VIO28_CG0
#define LDO_VIO18_CG0        				MT6335_LDO_VIO18_CG0
#define LDO_VUFS18_CG0       				MT6335_LDO_VUFS18_CG0
#define LDO_VA10_CG0         				MT6335_LDO_VA10_CG0
#define LDO_VA12_CG0         				MT6335_LDO_VA12_CG0
#define LDO_VSRAM_DVFS1_CG0  				MT6335_LDO_VSRAM_DVFS1_CG0
#define LDO_VSRAM_DVFS2_CG0  				MT6335_LDO_VSRAM_DVFS2_CG0
#define LDO_VSRAM_VCORE_CG0  				MT6335_LDO_VSRAM_VCORE_CG0
#define LDO_VSRAM_VGPU_CG0   				MT6335_LDO_VSRAM_VGPU_CG0
#define LDO_VSRAM_VMD_CG0    				MT6335_LDO_VSRAM_VMD_CG0
#define LDO_VA18_CG0         				MT6335_LDO_VA18_CG0
#define LDO_VUSB33_CG0       				MT6335_LDO_VUSB33_CG0
#define LDO_VEMC_CG0         				MT6335_LDO_VEMC_CG0
#define LDO_VXO22_CG0        				MT6335_LDO_VXO22_CG0
#define LDO_VEFUSE_CG0       				MT6335_LDO_VEFUSE_CG0
#define LDO_VSIM1_CG0        				MT6335_LDO_VSIM1_CG0
#define LDO_VSIM2_CG0        				MT6335_LDO_VSIM2_CG0
#define LDO_VCAMAF_CG0       				MT6335_LDO_VCAMAF_CG0
#define LDO_VTOUCH_CG0       				MT6335_LDO_VTOUCH_CG0
#define LDO_VCAMD1_CG0       				MT6335_LDO_VCAMD1_CG0
#define LDO_VCAMD2_CG0       				MT6335_LDO_VCAMD2_CG0
#define LDO_VCAMIO_CG0       				MT6335_LDO_VCAMIO_CG0
#define LDO_VMIPI_CG0        				MT6335_LDO_VMIPI_CG0
#define LDO_VGP3_CG0         				MT6335_LDO_VGP3_CG0
#define LDO_VCN33_CG0        				MT6335_LDO_VCN33_CG0
#define LDO_VCN18_CG0        				MT6335_LDO_VCN18_CG0
#define LDO_VCN28_CG0        				MT6335_LDO_VCN28_CG0
#define LDO_VIBR_CG0         				MT6335_LDO_VIBR_CG0
#define LDO_VBIF28_CG0       				MT6335_LDO_VBIF28_CG0
#define LDO_VFE28_CG0        				MT6335_LDO_VFE28_CG0
#define LDO_VMCH_CG0         				MT6335_LDO_VMCH_CG0
#define LDO_VMC_CG0          				MT6335_LDO_VMC_CG0
#define LDO_VRF18_1_CG0      				MT6335_LDO_VRF18_1_CG0
#define LDO_VRF18_2_CG0      				MT6335_LDO_VRF18_2_CG0
#define LDO_VRF12_CG0        				MT6335_LDO_VRF12_CG0
#define LDO_VCAMA1_CG0       				MT6335_LDO_VCAMA1_CG0
#define LDO_VCAMA2_CG0       				MT6335_LDO_VCAMA2_CG0
#define LDO_VSRAM_DVFS1_SP   				MT6335_LDO_VSRAM_DVFS1_SP
#define LDO_VSRAM_DVFS2_SP   				MT6335_LDO_VSRAM_DVFS2_SP
#define LDO_VSRAM_VGPU_SP    				MT6335_LDO_VSRAM_VGPU_SP
#define LDO_VSRAM_VMD_SP     				MT6335_LDO_VSRAM_VMD_SP
#define LDO_VSRAM_VCORE_SP   				MT6335_LDO_VSRAM_VCORE_SP
#define LDO_VSRAM_VCORE_SSHUB				MT6335_LDO_VSRAM_VCORE_SSHUB
#define ALDO_1_ANA_CON0      				MT6335_ALDO_1_ANA_CON0
#define ALDO_1_ANA_CON1      				MT6335_ALDO_1_ANA_CON1
#define ALDO_1_ANA_CON2      				MT6335_ALDO_1_ANA_CON2
#define ALDO_1_ANA_CON3      				MT6335_ALDO_1_ANA_CON3
#define ALDO_1_ANA_CON4      				MT6335_ALDO_1_ANA_CON4
#define ALDO_2_ANA_CON0      				MT6335_ALDO_2_ANA_CON0
#define ALDO_2_ANA_CON1      				MT6335_ALDO_2_ANA_CON1
#define ALDO_2_ANA_CON2      				MT6335_ALDO_2_ANA_CON2
#define ALDO_2_ANA_CON3      				MT6335_ALDO_2_ANA_CON3
#define ALDO_2_ANA_CON4      				MT6335_ALDO_2_ANA_CON4
#define DLDO_ANA_CON0        				MT6335_DLDO_ANA_CON0
#define DLDO_ANA_CON1        				MT6335_DLDO_ANA_CON1
#define DLDO_ANA_CON2        				MT6335_DLDO_ANA_CON2
#define DLDO_ANA_CON3        				MT6335_DLDO_ANA_CON3
#define DLDO_ANA_CON4        				MT6335_DLDO_ANA_CON4
#define DLDO_ANA_CON5        				MT6335_DLDO_ANA_CON5
#define DLDO_ANA_CON6        				MT6335_DLDO_ANA_CON6
#define DLDO_ANA_CON7        				MT6335_DLDO_ANA_CON7
#define DLDO_ANA_CON8        				MT6335_DLDO_ANA_CON8
#define DLDO_ANA_CON9        				MT6335_DLDO_ANA_CON9
#define DLDO_ANA_CON10       				MT6335_DLDO_ANA_CON10
#define DLDO_ANA_CON11       				MT6335_DLDO_ANA_CON11
#define DLDO_ANA_CON12       				MT6335_DLDO_ANA_CON12
#define DLDO_ANA_CON13       				MT6335_DLDO_ANA_CON13
#define DLDO_ANA_CON14       				MT6335_DLDO_ANA_CON14
#define DLDO_ANA_CON15       				MT6335_DLDO_ANA_CON15
#define DLDO_ANA_CON16       				MT6335_DLDO_ANA_CON16
#define DLDO_ANA_CON17       				MT6335_DLDO_ANA_CON17
#define SLDO14_ANA_CON0      				MT6335_SLDO14_ANA_CON0
#define SLDO14_ANA_CON1      				MT6335_SLDO14_ANA_CON1
#define SLDO14_ANA_CON2      				MT6335_SLDO14_ANA_CON2
#define SLDO14_ANA_CON3      				MT6335_SLDO14_ANA_CON3
#define SLDO14_ANA_CON4      				MT6335_SLDO14_ANA_CON4
#define SLDO14_ANA_CON5      				MT6335_SLDO14_ANA_CON5
#define SLDO14_ANA_CON6      				MT6335_SLDO14_ANA_CON6
#define SLDO14_ANA_CON7      				MT6335_SLDO14_ANA_CON7
#define SLDO14_ANA_CON8      				MT6335_SLDO14_ANA_CON8
#define SLDO14_ANA_CON9      				MT6335_SLDO14_ANA_CON9
#define SLDO14_ANA_CON10     				MT6335_SLDO14_ANA_CON10
#define SLDO14_ANA_CON11     				MT6335_SLDO14_ANA_CON11
#define SLDO14_ANA_CON12     				MT6335_SLDO14_ANA_CON12
#define SLDO14_ANA_CON13     				MT6335_SLDO14_ANA_CON13
#define SLDO20_ANA_CON0      				MT6335_SLDO20_ANA_CON0
#define SLDO20_ANA_CON1      				MT6335_SLDO20_ANA_CON1
#define SLDO20_ANA_CON2      				MT6335_SLDO20_ANA_CON2
#define SLDO20_ANA_CON3      				MT6335_SLDO20_ANA_CON3
#define SLDO20_ANA_CON4      				MT6335_SLDO20_ANA_CON4
#define SLDO20_ANA_CON5      				MT6335_SLDO20_ANA_CON5
#define SLDO20_ANA_CON6      				MT6335_SLDO20_ANA_CON6
#define SLDO20_ANA_CON7      				MT6335_SLDO20_ANA_CON7
#define SLDO20_ANA_CON8      				MT6335_SLDO20_ANA_CON8
#define SLDO20_ANA_CON9      				MT6335_SLDO20_ANA_CON9
#define SLDO20_ANA_CON10     				MT6335_SLDO20_ANA_CON10
#define SLDO20_ANA_CON11     				MT6335_SLDO20_ANA_CON11
#define SLDO20_ANA_CON12     				MT6335_SLDO20_ANA_CON12
#define BIF_CON0             				MT6335_BIF_CON0
#define BIF_CON1             				MT6335_BIF_CON1
#define BIF_CON2             				MT6335_BIF_CON2
#define BIF_CON3             				MT6335_BIF_CON3
#define BIF_CON4             				MT6335_BIF_CON4
#define BIF_CON5             				MT6335_BIF_CON5
#define BIF_CON6             				MT6335_BIF_CON6
#define BIF_CON7             				MT6335_BIF_CON7
#define BIF_CON8             				MT6335_BIF_CON8
#define BIF_CON9             				MT6335_BIF_CON9
#define BIF_CON10            				MT6335_BIF_CON10
#define BIF_CON11            				MT6335_BIF_CON11
#define BIF_CON12            				MT6335_BIF_CON12
#define BIF_CON13            				MT6335_BIF_CON13
#define BIF_CON14            				MT6335_BIF_CON14
#define BIF_CON15            				MT6335_BIF_CON15
#define BIF_CON16            				MT6335_BIF_CON16
#define BIF_CON17            				MT6335_BIF_CON17
#define BIF_CON18            				MT6335_BIF_CON18
#define BIF_CON19            				MT6335_BIF_CON19
#define BIF_CON20            				MT6335_BIF_CON20
#define BIF_CON21            				MT6335_BIF_CON21
#define BIF_CON22            				MT6335_BIF_CON22
#define BIF_CON23            				MT6335_BIF_CON23
#define BIF_CON24            				MT6335_BIF_CON24
#define BIF_CON25            				MT6335_BIF_CON25
#define BIF_CON26            				MT6335_BIF_CON26
#define BIF_CON27            				MT6335_BIF_CON27
#define BIF_CON28            				MT6335_BIF_CON28
#define BIF_CON29            				MT6335_BIF_CON29
#define BIF_CON30            				MT6335_BIF_CON30
#define BIF_CON31            				MT6335_BIF_CON31
#define BIF_CON32            				MT6335_BIF_CON32
#define BIF_CON33            				MT6335_BIF_CON33
#define BIF_CON34            				MT6335_BIF_CON34
#define BIF_CON35            				MT6335_BIF_CON35
#define BIF_CON36            				MT6335_BIF_CON36
#define BIF_CON37            				MT6335_BIF_CON37
#define BIF_CON38            				MT6335_BIF_CON38
#define BIF_CON39            				MT6335_BIF_CON39
#define BIF_BAT_CON0         				MT6335_BIF_BAT_CON0
#define BIF_BAT_CON1         				MT6335_BIF_BAT_CON1
#define BIF_BAT_CON2         				MT6335_BIF_BAT_CON2
#define BIF_BAT_CON3         				MT6335_BIF_BAT_CON3
#define BIF_ANA_CON0         				MT6335_BIF_ANA_CON0
#define OTP_CON0             				MT6335_OTP_CON0
#define OTP_CON1             				MT6335_OTP_CON1
#define OTP_CON2             				MT6335_OTP_CON2
#define OTP_CON3             				MT6335_OTP_CON3
#define OTP_CON4             				MT6335_OTP_CON4
#define OTP_CON5             				MT6335_OTP_CON5
#define OTP_CON6             				MT6335_OTP_CON6
#define OTP_CON7             				MT6335_OTP_CON7
#define OTP_CON8             				MT6335_OTP_CON8
#define OTP_CON9             				MT6335_OTP_CON9
#define OTP_CON10            				MT6335_OTP_CON10
#define OTP_CON11            				MT6335_OTP_CON11
#define OTP_CON12            				MT6335_OTP_CON12
#define OTP_CON13            				MT6335_OTP_CON13
#define OTP_CON14            				MT6335_OTP_CON14
#define OTP_DOUT_0_15        				MT6335_OTP_DOUT_0_15
#define OTP_DOUT_16_31       				MT6335_OTP_DOUT_16_31
#define OTP_DOUT_32_47       				MT6335_OTP_DOUT_32_47
#define OTP_DOUT_48_63       				MT6335_OTP_DOUT_48_63
#define OTP_DOUT_64_79       				MT6335_OTP_DOUT_64_79
#define OTP_DOUT_80_95       				MT6335_OTP_DOUT_80_95
#define OTP_DOUT_96_111      				MT6335_OTP_DOUT_96_111
#define OTP_DOUT_112_127     				MT6335_OTP_DOUT_112_127
#define OTP_DOUT_128_143     				MT6335_OTP_DOUT_128_143
#define OTP_DOUT_144_159     				MT6335_OTP_DOUT_144_159
#define OTP_DOUT_160_175     				MT6335_OTP_DOUT_160_175
#define OTP_DOUT_176_191     				MT6335_OTP_DOUT_176_191
#define OTP_DOUT_192_207     				MT6335_OTP_DOUT_192_207
#define OTP_DOUT_208_223     				MT6335_OTP_DOUT_208_223
#define OTP_DOUT_224_239     				MT6335_OTP_DOUT_224_239
#define OTP_DOUT_240_255     				MT6335_OTP_DOUT_240_255
#define OTP_DOUT_256_271     				MT6335_OTP_DOUT_256_271
#define OTP_DOUT_272_287     				MT6335_OTP_DOUT_272_287
#define OTP_DOUT_288_303     				MT6335_OTP_DOUT_288_303
#define OTP_DOUT_304_319     				MT6335_OTP_DOUT_304_319
#define OTP_DOUT_320_335     				MT6335_OTP_DOUT_320_335
#define OTP_DOUT_336_351     				MT6335_OTP_DOUT_336_351
#define OTP_DOUT_352_367     				MT6335_OTP_DOUT_352_367
#define OTP_DOUT_368_383     				MT6335_OTP_DOUT_368_383
#define OTP_DOUT_384_399     				MT6335_OTP_DOUT_384_399
#define OTP_DOUT_400_415     				MT6335_OTP_DOUT_400_415
#define OTP_DOUT_416_431     				MT6335_OTP_DOUT_416_431
#define OTP_DOUT_432_447     				MT6335_OTP_DOUT_432_447
#define OTP_DOUT_448_463     				MT6335_OTP_DOUT_448_463
#define OTP_DOUT_464_479     				MT6335_OTP_DOUT_464_479
#define OTP_DOUT_480_495     				MT6335_OTP_DOUT_480_495
#define OTP_DOUT_496_511     				MT6335_OTP_DOUT_496_511
#define OTP_DOUT_512_527     				MT6335_OTP_DOUT_512_527
#define OTP_DOUT_528_543     				MT6335_OTP_DOUT_528_543
#define OTP_DOUT_544_559     				MT6335_OTP_DOUT_544_559
#define OTP_DOUT_560_575     				MT6335_OTP_DOUT_560_575
#define OTP_DOUT_576_591     				MT6335_OTP_DOUT_576_591
#define OTP_DOUT_592_607     				MT6335_OTP_DOUT_592_607
#define OTP_DOUT_608_623     				MT6335_OTP_DOUT_608_623
#define OTP_DOUT_624_639     				MT6335_OTP_DOUT_624_639
#define OTP_DOUT_640_655     				MT6335_OTP_DOUT_640_655
#define OTP_DOUT_656_671     				MT6335_OTP_DOUT_656_671
#define OTP_DOUT_672_687     				MT6335_OTP_DOUT_672_687
#define OTP_DOUT_688_703     				MT6335_OTP_DOUT_688_703
#define OTP_DOUT_704_719     				MT6335_OTP_DOUT_704_719
#define OTP_DOUT_720_735     				MT6335_OTP_DOUT_720_735
#define OTP_DOUT_736_751     				MT6335_OTP_DOUT_736_751
#define OTP_DOUT_752_767     				MT6335_OTP_DOUT_752_767
#define OTP_DOUT_768_783     				MT6335_OTP_DOUT_768_783
#define OTP_DOUT_784_799     				MT6335_OTP_DOUT_784_799
#define OTP_DOUT_800_815     				MT6335_OTP_DOUT_800_815
#define OTP_DOUT_816_831     				MT6335_OTP_DOUT_816_831
#define OTP_DOUT_832_847     				MT6335_OTP_DOUT_832_847
#define OTP_DOUT_848_863     				MT6335_OTP_DOUT_848_863
#define OTP_DOUT_864_879     				MT6335_OTP_DOUT_864_879
#define OTP_DOUT_880_895     				MT6335_OTP_DOUT_880_895
#define OTP_DOUT_896_911     				MT6335_OTP_DOUT_896_911
#define OTP_DOUT_912_927     				MT6335_OTP_DOUT_912_927
#define OTP_DOUT_928_943     				MT6335_OTP_DOUT_928_943
#define OTP_DOUT_944_959     				MT6335_OTP_DOUT_944_959
#define OTP_DOUT_960_975     				MT6335_OTP_DOUT_960_975
#define OTP_DOUT_976_991     				MT6335_OTP_DOUT_976_991
#define OTP_DOUT_992_1007    				MT6335_OTP_DOUT_992_1007
#define OTP_DOUT_1008_1023   				MT6335_OTP_DOUT_1008_1023
#define OTP_VAL_0_15         				MT6335_OTP_VAL_0_15
#define OTP_VAL_16_31        				MT6335_OTP_VAL_16_31
#define OTP_VAL_32_47        				MT6335_OTP_VAL_32_47
#define OTP_VAL_48_63        				MT6335_OTP_VAL_48_63
#define OTP_VAL_64_79        				MT6335_OTP_VAL_64_79
#define OTP_VAL_80_95        				MT6335_OTP_VAL_80_95
#define OTP_VAL_96_111       				MT6335_OTP_VAL_96_111
#define OTP_VAL_112_127      				MT6335_OTP_VAL_112_127
#define OTP_VAL_128_143      				MT6335_OTP_VAL_128_143
#define OTP_VAL_144_159      				MT6335_OTP_VAL_144_159
#define OTP_VAL_160_175      				MT6335_OTP_VAL_160_175
#define OTP_VAL_176_191      				MT6335_OTP_VAL_176_191
#define OTP_VAL_192_207      				MT6335_OTP_VAL_192_207
#define OTP_VAL_208_223      				MT6335_OTP_VAL_208_223
#define OTP_VAL_224_239      				MT6335_OTP_VAL_224_239
#define OTP_VAL_240_255      				MT6335_OTP_VAL_240_255
#define OTP_VAL_256_271      				MT6335_OTP_VAL_256_271
#define OTP_VAL_272_287      				MT6335_OTP_VAL_272_287
#define OTP_VAL_288_303      				MT6335_OTP_VAL_288_303
#define OTP_VAL_304_319      				MT6335_OTP_VAL_304_319
#define OTP_VAL_320_335      				MT6335_OTP_VAL_320_335
#define OTP_VAL_336_351      				MT6335_OTP_VAL_336_351
#define OTP_VAL_352_367      				MT6335_OTP_VAL_352_367
#define OTP_VAL_368_383      				MT6335_OTP_VAL_368_383
#define OTP_VAL_384_399      				MT6335_OTP_VAL_384_399
#define OTP_VAL_400_415      				MT6335_OTP_VAL_400_415
#define OTP_VAL_416_431      				MT6335_OTP_VAL_416_431
#define OTP_VAL_432_447      				MT6335_OTP_VAL_432_447
#define OTP_VAL_448_463      				MT6335_OTP_VAL_448_463
#define OTP_VAL_464_479      				MT6335_OTP_VAL_464_479
#define OTP_VAL_480_495      				MT6335_OTP_VAL_480_495
#define OTP_VAL_496_511      				MT6335_OTP_VAL_496_511
#define OTP_VAL_512_527      				MT6335_OTP_VAL_512_527
#define OTP_VAL_528_543      				MT6335_OTP_VAL_528_543
#define OTP_VAL_544_559      				MT6335_OTP_VAL_544_559
#define OTP_VAL_560_575      				MT6335_OTP_VAL_560_575
#define OTP_VAL_576_591      				MT6335_OTP_VAL_576_591
#define OTP_VAL_592_607      				MT6335_OTP_VAL_592_607
#define OTP_VAL_608_623      				MT6335_OTP_VAL_608_623
#define OTP_VAL_624_639      				MT6335_OTP_VAL_624_639
#define OTP_VAL_640_655      				MT6335_OTP_VAL_640_655
#define OTP_VAL_656_671      				MT6335_OTP_VAL_656_671
#define OTP_VAL_672_687      				MT6335_OTP_VAL_672_687
#define OTP_VAL_688_703      				MT6335_OTP_VAL_688_703
#define OTP_VAL_704_719      				MT6335_OTP_VAL_704_719
#define OTP_VAL_720_735      				MT6335_OTP_VAL_720_735
#define OTP_VAL_736_751      				MT6335_OTP_VAL_736_751
#define OTP_VAL_752_767      				MT6335_OTP_VAL_752_767
#define OTP_VAL_768_783      				MT6335_OTP_VAL_768_783
#define OTP_VAL_784_799      				MT6335_OTP_VAL_784_799
#define OTP_VAL_800_815      				MT6335_OTP_VAL_800_815
#define OTP_VAL_816_831      				MT6335_OTP_VAL_816_831
#define OTP_VAL_832_847      				MT6335_OTP_VAL_832_847
#define OTP_VAL_848_863      				MT6335_OTP_VAL_848_863
#define OTP_VAL_864_879      				MT6335_OTP_VAL_864_879
#define OTP_VAL_880_895      				MT6335_OTP_VAL_880_895
#define OTP_VAL_896_911      				MT6335_OTP_VAL_896_911
#define OTP_VAL_912_927      				MT6335_OTP_VAL_912_927
#define OTP_VAL_928_943      				MT6335_OTP_VAL_928_943
#define OTP_VAL_944_959      				MT6335_OTP_VAL_944_959
#define OTP_VAL_960_975      				MT6335_OTP_VAL_960_975
#define OTP_VAL_976_991      				MT6335_OTP_VAL_976_991
#define OTP_VAL_992_1007     				MT6335_OTP_VAL_992_1007
#define OTP_VAL_1008_1023    				MT6335_OTP_VAL_1008_1023
#define RTC_MIX_CON0         				MT6335_RTC_MIX_CON0
#define RTC_MIX_CON1         				MT6335_RTC_MIX_CON1
#define RTC_MIX_CON2         				MT6335_RTC_MIX_CON2
#define FGADC_CON0           				MT6335_FGADC_CON0
#define FGADC_CON1           				MT6335_FGADC_CON1
#define FGADC_CON2           				MT6335_FGADC_CON2
#define FGADC_CON3           				MT6335_FGADC_CON3
#define FGADC_CON4           				MT6335_FGADC_CON4
#define FGADC_RST_CON0       				MT6335_FGADC_RST_CON0
#define FGADC_R_CON0         				MT6335_FGADC_R_CON0
#define FGADC_CUR_CON0       				MT6335_FGADC_CUR_CON0
#define FGADC_CUR_CON1       				MT6335_FGADC_CUR_CON1
#define FGADC_CUR_CON2       				MT6335_FGADC_CUR_CON2
#define FGADC_CUR_CON3       				MT6335_FGADC_CUR_CON3
#define FGADC_CAR_CON0       				MT6335_FGADC_CAR_CON0
#define FGADC_CAR_CON1       				MT6335_FGADC_CAR_CON1
#define FGADC_CAR_CON2       				MT6335_FGADC_CAR_CON2
#define FGADC_CAR_CON3       				MT6335_FGADC_CAR_CON3
#define FGADC_CAR_CON4       				MT6335_FGADC_CAR_CON4
#define FGADC_CAR_CON5       				MT6335_FGADC_CAR_CON5
#define FGADC_CAR_CON6       				MT6335_FGADC_CAR_CON6
#define FGADC_CAR_CON7       				MT6335_FGADC_CAR_CON7
#define FGADC_CAR_CON8       				MT6335_FGADC_CAR_CON8
#define FGADC_CAR_CON9       				MT6335_FGADC_CAR_CON9
#define FGADC_NCAR_CON0      				MT6335_FGADC_NCAR_CON0
#define FGADC_NCAR_CON1      				MT6335_FGADC_NCAR_CON1
#define FGADC_NCAR_CON2      				MT6335_FGADC_NCAR_CON2
#define FGADC_NCAR_CON3      				MT6335_FGADC_NCAR_CON3
#define FGADC_IAVG_CON0      				MT6335_FGADC_IAVG_CON0
#define FGADC_IAVG_CON1      				MT6335_FGADC_IAVG_CON1
#define FGADC_IAVG_CON2      				MT6335_FGADC_IAVG_CON2
#define FGADC_IAVG_CON3      				MT6335_FGADC_IAVG_CON3
#define FGADC_IAVG_CON4      				MT6335_FGADC_IAVG_CON4
#define FGADC_IAVG_CON5      				MT6335_FGADC_IAVG_CON5
#define FGADC_NTER_CON0      				MT6335_FGADC_NTER_CON0
#define FGADC_NTER_CON1      				MT6335_FGADC_NTER_CON1
#define FGADC_NTER_CON2      				MT6335_FGADC_NTER_CON2
#define FGADC_NTER_CON3      				MT6335_FGADC_NTER_CON3
#define FGADC_OFFSET_CON0    				MT6335_FGADC_OFFSET_CON0
#define FGADC_OFFSET_CON1    				MT6335_FGADC_OFFSET_CON1
#define FGADC_GAIN_CON0      				MT6335_FGADC_GAIN_CON0
#define FGADC_SON_CON0       				MT6335_FGADC_SON_CON0
#define FGADC_SON_CON1       				MT6335_FGADC_SON_CON1
#define FGADC_SON_CON2       				MT6335_FGADC_SON_CON2
#define FGADC_SON_CON3       				MT6335_FGADC_SON_CON3
#define FGADC_SOFF_CON0      				MT6335_FGADC_SOFF_CON0
#define FGADC_SOFF_CON1      				MT6335_FGADC_SOFF_CON1
#define FGADC_SOFF_CON2      				MT6335_FGADC_SOFF_CON2
#define FGADC_SOFF_CON3      				MT6335_FGADC_SOFF_CON3
#define FGADC_SOFF_CON4      				MT6335_FGADC_SOFF_CON4
#define FGADC_PWR_CON0       				MT6335_FGADC_PWR_CON0
#define FGADC_PWR_CON1       				MT6335_FGADC_PWR_CON1
#define FGADC_ZCV_CON0       				MT6335_FGADC_ZCV_CON0
#define FGADC_ZCV_CON1       				MT6335_FGADC_ZCV_CON1
#define FGADC_ZCV_CON2       				MT6335_FGADC_ZCV_CON2
#define FGADC_ZCV_CON3       				MT6335_FGADC_ZCV_CON3
#define FGADC_ZCV_CON4       				MT6335_FGADC_ZCV_CON4
#define FGADC_ZCV_CON5       				MT6335_FGADC_ZCV_CON5
#define FGADC_ANA_CON0       				MT6335_FGADC_ANA_CON0
#define FGADC_ANA_CON1       				MT6335_FGADC_ANA_CON1
#define FGADC_TEST_CON0      				MT6335_FGADC_TEST_CON0
#define FGADC_RSV_CON0       				MT6335_FGADC_RSV_CON0
#define FGADC_RSV_CON1       				MT6335_FGADC_RSV_CON1
#define FGADC_RSV_CON2       				MT6335_FGADC_RSV_CON2
#define FGADC_RSV_CON3       				MT6335_FGADC_RSV_CON3
#define SYSTEM_INFO_CON0     				MT6335_SYSTEM_INFO_CON0
#define SYSTEM_INFO_CON1     				MT6335_SYSTEM_INFO_CON1
#define SYSTEM_INFO_CON2     				MT6335_SYSTEM_INFO_CON2
#define SYSTEM_INFO_CON3     				MT6335_SYSTEM_INFO_CON3
#define SYSTEM_INFO_CON4     				MT6335_SYSTEM_INFO_CON4
#define FGADC_EFUSE_CON0     				MT6335_FGADC_EFUSE_CON0
#define DCXO_CW00            				MT6335_DCXO_CW00
#define DCXO_CW00_SET        				MT6335_DCXO_CW00_SET
#define DCXO_CW00_CLR        				MT6335_DCXO_CW00_CLR
#define DCXO_CW01            				MT6335_DCXO_CW01
#define DCXO_CW02            				MT6335_DCXO_CW02
#define DCXO_CW03            				MT6335_DCXO_CW03
#define DCXO_CW04            				MT6335_DCXO_CW04
#define DCXO_CW05            				MT6335_DCXO_CW05
#define DCXO_CW06            				MT6335_DCXO_CW06
#define DCXO_CW07            				MT6335_DCXO_CW07
#define DCXO_CW08            				MT6335_DCXO_CW08
#define DCXO_CW09            				MT6335_DCXO_CW09
#define DCXO_CW10            				MT6335_DCXO_CW10
#define DCXO_CW11            				MT6335_DCXO_CW11
#define DCXO_CW11_SET        				MT6335_DCXO_CW11_SET
#define DCXO_CW11_CLR        				MT6335_DCXO_CW11_CLR
#define DCXO_CW12            				MT6335_DCXO_CW12
#define DCXO_CW13            				MT6335_DCXO_CW13
#define DCXO_CW14            				MT6335_DCXO_CW14
#define DCXO_CW15            				MT6335_DCXO_CW15
#define DCXO_CW16            				MT6335_DCXO_CW16
#define DCXO_CW17            				MT6335_DCXO_CW17
#define DCXO_CW18            				MT6335_DCXO_CW18
#define DCXO_CW19            				MT6335_DCXO_CW19
#define AUXADC_ADC0          				MT6335_AUXADC_ADC0
#define AUXADC_ADC1          				MT6335_AUXADC_ADC1
#define AUXADC_ADC2          				MT6335_AUXADC_ADC2
#define AUXADC_ADC3          				MT6335_AUXADC_ADC3
#define AUXADC_ADC4          				MT6335_AUXADC_ADC4
#define AUXADC_ADC5          				MT6335_AUXADC_ADC5
#define AUXADC_ADC6          				MT6335_AUXADC_ADC6
#define AUXADC_ADC7          				MT6335_AUXADC_ADC7
#define AUXADC_ADC8          				MT6335_AUXADC_ADC8
#define AUXADC_ADC9          				MT6335_AUXADC_ADC9
#define AUXADC_ADC10         				MT6335_AUXADC_ADC10
#define AUXADC_ADC11         				MT6335_AUXADC_ADC11
#define AUXADC_ADC12         				MT6335_AUXADC_ADC12
#define AUXADC_ADC13         				MT6335_AUXADC_ADC13
#define AUXADC_ADC14         				MT6335_AUXADC_ADC14
#define AUXADC_ADC15         				MT6335_AUXADC_ADC15
#define AUXADC_ADC16         				MT6335_AUXADC_ADC16
#define AUXADC_ADC17         				MT6335_AUXADC_ADC17
#define AUXADC_ADC18         				MT6335_AUXADC_ADC18
#define AUXADC_ADC19         				MT6335_AUXADC_ADC19
#define AUXADC_ADC20         				MT6335_AUXADC_ADC20
#define AUXADC_ADC21         				MT6335_AUXADC_ADC21
#define AUXADC_ADC22         				MT6335_AUXADC_ADC22
#define AUXADC_ADC23         				MT6335_AUXADC_ADC23
#define AUXADC_ADC24         				MT6335_AUXADC_ADC24
#define AUXADC_ADC25         				MT6335_AUXADC_ADC25
#define AUXADC_ADC26         				MT6335_AUXADC_ADC26
#define AUXADC_ADC27         				MT6335_AUXADC_ADC27
#define AUXADC_ADC28         				MT6335_AUXADC_ADC28
#define AUXADC_ADC29         				MT6335_AUXADC_ADC29
#define AUXADC_ADC30         				MT6335_AUXADC_ADC30
#define AUXADC_ADC31         				MT6335_AUXADC_ADC31
#define AUXADC_ADC32         				MT6335_AUXADC_ADC32
#define AUXADC_ADC33         				MT6335_AUXADC_ADC33
#define AUXADC_ADC34         				MT6335_AUXADC_ADC34
#define AUXADC_ADC35         				MT6335_AUXADC_ADC35
#define AUXADC_ADC36         				MT6335_AUXADC_ADC36
#define AUXADC_ADC37         				MT6335_AUXADC_ADC37
#define AUXADC_ADC38         				MT6335_AUXADC_ADC38
#define AUXADC_ADC39         				MT6335_AUXADC_ADC39
#define AUXADC_ADC40         				MT6335_AUXADC_ADC40
#define AUXADC_ADC41         				MT6335_AUXADC_ADC41
#define AUXADC_ADC42         				MT6335_AUXADC_ADC42
#define AUXADC_BUF0          				MT6335_AUXADC_BUF0
#define AUXADC_BUF1          				MT6335_AUXADC_BUF1
#define AUXADC_BUF2          				MT6335_AUXADC_BUF2
#define AUXADC_BUF3          				MT6335_AUXADC_BUF3
#define AUXADC_BUF4          				MT6335_AUXADC_BUF4
#define AUXADC_BUF5          				MT6335_AUXADC_BUF5
#define AUXADC_BUF6          				MT6335_AUXADC_BUF6
#define AUXADC_BUF7          				MT6335_AUXADC_BUF7
#define AUXADC_BUF8          				MT6335_AUXADC_BUF8
#define AUXADC_BUF9          				MT6335_AUXADC_BUF9
#define AUXADC_BUF10         				MT6335_AUXADC_BUF10
#define AUXADC_BUF11         				MT6335_AUXADC_BUF11
#define AUXADC_BUF12         				MT6335_AUXADC_BUF12
#define AUXADC_BUF13         				MT6335_AUXADC_BUF13
#define AUXADC_BUF14         				MT6335_AUXADC_BUF14
#define AUXADC_BUF15         				MT6335_AUXADC_BUF15
#define AUXADC_BUF16         				MT6335_AUXADC_BUF16
#define AUXADC_BUF17         				MT6335_AUXADC_BUF17
#define AUXADC_BUF18         				MT6335_AUXADC_BUF18
#define AUXADC_BUF19         				MT6335_AUXADC_BUF19
#define AUXADC_BUF20         				MT6335_AUXADC_BUF20
#define AUXADC_BUF21         				MT6335_AUXADC_BUF21
#define AUXADC_BUF22         				MT6335_AUXADC_BUF22
#define AUXADC_BUF23         				MT6335_AUXADC_BUF23
#define AUXADC_BUF24         				MT6335_AUXADC_BUF24
#define AUXADC_BUF25         				MT6335_AUXADC_BUF25
#define AUXADC_BUF26         				MT6335_AUXADC_BUF26
#define AUXADC_BUF27         				MT6335_AUXADC_BUF27
#define AUXADC_BUF28         				MT6335_AUXADC_BUF28
#define AUXADC_BUF29         				MT6335_AUXADC_BUF29
#define AUXADC_BUF30         				MT6335_AUXADC_BUF30
#define AUXADC_BUF31         				MT6335_AUXADC_BUF31
#define AUXADC_STA0          				MT6335_AUXADC_STA0
#define AUXADC_STA1          				MT6335_AUXADC_STA1
#define AUXADC_STA2          				MT6335_AUXADC_STA2
#define AUXADC_RQST0         				MT6335_AUXADC_RQST0
#define AUXADC_RQST0_SET     				MT6335_AUXADC_RQST0_SET
#define AUXADC_RQST0_CLR     				MT6335_AUXADC_RQST0_CLR
#define AUXADC_RQST1         				MT6335_AUXADC_RQST1
#define AUXADC_RQST1_SET     				MT6335_AUXADC_RQST1_SET
#define AUXADC_RQST1_CLR     				MT6335_AUXADC_RQST1_CLR
#define AUXADC_CON0          				MT6335_AUXADC_CON0
#define AUXADC_CON0_SET      				MT6335_AUXADC_CON0_SET
#define AUXADC_CON0_CLR      				MT6335_AUXADC_CON0_CLR
#define AUXADC_CON1          				MT6335_AUXADC_CON1
#define AUXADC_CON2          				MT6335_AUXADC_CON2
#define AUXADC_CON3          				MT6335_AUXADC_CON3
#define AUXADC_CON4          				MT6335_AUXADC_CON4
#define AUXADC_CON5          				MT6335_AUXADC_CON5
#define AUXADC_CON6          				MT6335_AUXADC_CON6
#define AUXADC_CON7          				MT6335_AUXADC_CON7
#define AUXADC_CON8          				MT6335_AUXADC_CON8
#define AUXADC_CON9          				MT6335_AUXADC_CON9
#define AUXADC_CON10         				MT6335_AUXADC_CON10
#define AUXADC_CON11         				MT6335_AUXADC_CON11
#define AUXADC_CON12         				MT6335_AUXADC_CON12
#define AUXADC_CON13         				MT6335_AUXADC_CON13
#define AUXADC_CON14         				MT6335_AUXADC_CON14
#define AUXADC_CON15         				MT6335_AUXADC_CON15
#define AUXADC_CON16         				MT6335_AUXADC_CON16
#define AUXADC_CON17         				MT6335_AUXADC_CON17
#define AUXADC_CON18         				MT6335_AUXADC_CON18
#define AUXADC_CON19         				MT6335_AUXADC_CON19
#define AUXADC_CON20         				MT6335_AUXADC_CON20
#define AUXADC_CON21         				MT6335_AUXADC_CON21
#define AUXADC_CON22         				MT6335_AUXADC_CON22
#define AUXADC_AUTORPT0      				MT6335_AUXADC_AUTORPT0
#define AUXADC_LBAT0         				MT6335_AUXADC_LBAT0
#define AUXADC_LBAT1         				MT6335_AUXADC_LBAT1
#define AUXADC_LBAT2         				MT6335_AUXADC_LBAT2
#define AUXADC_LBAT3         				MT6335_AUXADC_LBAT3
#define AUXADC_LBAT4         				MT6335_AUXADC_LBAT4
#define AUXADC_LBAT5         				MT6335_AUXADC_LBAT5
#define AUXADC_LBAT6         				MT6335_AUXADC_LBAT6
#define AUXADC_ACCDET        				MT6335_AUXADC_ACCDET
#define AUXADC_THR0          				MT6335_AUXADC_THR0
#define AUXADC_THR1          				MT6335_AUXADC_THR1
#define AUXADC_THR2          				MT6335_AUXADC_THR2
#define AUXADC_THR3          				MT6335_AUXADC_THR3
#define AUXADC_THR4          				MT6335_AUXADC_THR4
#define AUXADC_THR5          				MT6335_AUXADC_THR5
#define AUXADC_THR6          				MT6335_AUXADC_THR6
#define AUXADC_EFUSE0        				MT6335_AUXADC_EFUSE0
#define AUXADC_EFUSE1        				MT6335_AUXADC_EFUSE1
#define AUXADC_EFUSE2        				MT6335_AUXADC_EFUSE2
#define AUXADC_EFUSE3        				MT6335_AUXADC_EFUSE3
#define AUXADC_EFUSE4        				MT6335_AUXADC_EFUSE4
#define AUXADC_EFUSE5        				MT6335_AUXADC_EFUSE5
#define AUXADC_DBG0          				MT6335_AUXADC_DBG0
#define AUXADC_IMP0          				MT6335_AUXADC_IMP0
#define AUXADC_IMP1          				MT6335_AUXADC_IMP1
#define AUXADC_BAT_TEMP_0    				MT6335_AUXADC_BAT_TEMP_0
#define AUXADC_BAT_TEMP_1    				MT6335_AUXADC_BAT_TEMP_1
#define AUXADC_BAT_TEMP_2    				MT6335_AUXADC_BAT_TEMP_2
#define AUXADC_BAT_TEMP_3    				MT6335_AUXADC_BAT_TEMP_3
#define AUXADC_BAT_TEMP_4    				MT6335_AUXADC_BAT_TEMP_4
#define AUXADC_BAT_TEMP_5    				MT6335_AUXADC_BAT_TEMP_5
#define AUXADC_BAT_TEMP_6    				MT6335_AUXADC_BAT_TEMP_6
#define AUXADC_BAT_TEMP_7    				MT6335_AUXADC_BAT_TEMP_7
#define AUXADC_LBAT2_1       				MT6335_AUXADC_LBAT2_1
#define AUXADC_LBAT2_2       				MT6335_AUXADC_LBAT2_2
#define AUXADC_LBAT2_3       				MT6335_AUXADC_LBAT2_3
#define AUXADC_LBAT2_4       				MT6335_AUXADC_LBAT2_4
#define AUXADC_LBAT2_5       				MT6335_AUXADC_LBAT2_5
#define AUXADC_LBAT2_6       				MT6335_AUXADC_LBAT2_6
#define AUXADC_LBAT2_7       				MT6335_AUXADC_LBAT2_7
#define AUXADC_MDBG_0        				MT6335_AUXADC_MDBG_0
#define AUXADC_MDBG_1        				MT6335_AUXADC_MDBG_1
#define AUXADC_MDBG_2        				MT6335_AUXADC_MDBG_2
#define AUXADC_MDRT_0        				MT6335_AUXADC_MDRT_0
#define AUXADC_MDRT_1        				MT6335_AUXADC_MDRT_1
#define AUXADC_MDRT_2        				MT6335_AUXADC_MDRT_2
#define AUXADC_MDRT_3        				MT6335_AUXADC_MDRT_3
#define AUXADC_MDRT_4        				MT6335_AUXADC_MDRT_4
#define AUXADC_JEITA_0       				MT6335_AUXADC_JEITA_0
#define AUXADC_JEITA_1       				MT6335_AUXADC_JEITA_1
#define AUXADC_JEITA_2       				MT6335_AUXADC_JEITA_2
#define AUXADC_JEITA_3       				MT6335_AUXADC_JEITA_3
#define AUXADC_JEITA_4       				MT6335_AUXADC_JEITA_4
#define AUXADC_JEITA_5       				MT6335_AUXADC_JEITA_5
#define AUXADC_DCXO_MDRT_0   				MT6335_AUXADC_DCXO_MDRT_0
#define AUXADC_DCXO_MDRT_1   				MT6335_AUXADC_DCXO_MDRT_1
#define AUXADC_DCXO_MDRT_2   				MT6335_AUXADC_DCXO_MDRT_2
#define AUXADC_NAG_0         				MT6335_AUXADC_NAG_0
#define AUXADC_NAG_1         				MT6335_AUXADC_NAG_1
#define AUXADC_NAG_2         				MT6335_AUXADC_NAG_2
#define AUXADC_NAG_3         				MT6335_AUXADC_NAG_3
#define AUXADC_NAG_4         				MT6335_AUXADC_NAG_4
#define AUXADC_NAG_5         				MT6335_AUXADC_NAG_5
#define AUXADC_NAG_6         				MT6335_AUXADC_NAG_6
#define AUXADC_NAG_7         				MT6335_AUXADC_NAG_7
#define AUXADC_NAG_8         				MT6335_AUXADC_NAG_8
#define AUXADC_EFUSE_1       				MT6335_AUXADC_EFUSE_1
#define AUXADC_EFUSE_2       				MT6335_AUXADC_EFUSE_2
#define AUXADC_EFUSE_3       				MT6335_AUXADC_EFUSE_3
#define AUXADC_EFUSE_4       				MT6335_AUXADC_EFUSE_4
#define AUXADC_RSV_1         				MT6335_AUXADC_RSV_1
#define AUXADC_ANA_0         				MT6335_AUXADC_ANA_0
#define CHR_CON0             				MT6335_CHR_CON0
#define CHR_CON1             				MT6335_CHR_CON1
#define CHR_CON2             				MT6335_CHR_CON2
#define CHR_CON3             				MT6335_CHR_CON3
#define CHR_CON4             				MT6335_CHR_CON4
#define CHR_CON5             				MT6335_CHR_CON5
#define CHR_CON7             				MT6335_CHR_CON7
#define CHR_CON10            				MT6335_CHR_CON10
#define CHR_CON14            				MT6335_CHR_CON14
#define CHR_CON16            				MT6335_CHR_CON16
#define CHR_CON17            				MT6335_CHR_CON17
#define CHR_CON18            				MT6335_CHR_CON18
#define CHR_CON19            				MT6335_CHR_CON19
#define BATON_CON0           				MT6335_BATON_CON0
#define CHR_CON26            				MT6335_CHR_CON26
#define CHR_CON27            				MT6335_CHR_CON27
#define CHR_CON29            				MT6335_CHR_CON29
#define CHR_CON44            				MT6335_CHR_CON44
#define CHR_CON48            				MT6335_CHR_CON48
#define EOSC_CALI_CON0       				MT6335_EOSC_CALI_CON0
#define EOSC_CALI_CON1       				MT6335_EOSC_CALI_CON1
#define VRTC_PWM_CON0        				MT6335_VRTC_PWM_CON0
#define GPIO_DIR0            				MT6335_GPIO_DIR0
#define GPIO_DIR0_SET        				MT6335_GPIO_DIR0_SET
#define GPIO_DIR0_CLR        				MT6335_GPIO_DIR0_CLR
#define GPIO_PULLEN0         				MT6335_GPIO_PULLEN0
#define GPIO_PULLEN0_SET     				MT6335_GPIO_PULLEN0_SET
#define GPIO_PULLEN0_CLR     				MT6335_GPIO_PULLEN0_CLR
#define GPIO_PULLSEL0        				MT6335_GPIO_PULLSEL0
#define GPIO_PULLSEL0_SET    				MT6335_GPIO_PULLSEL0_SET
#define GPIO_PULLSEL0_CLR    				MT6335_GPIO_PULLSEL0_CLR
#define GPIO_DINV0           				MT6335_GPIO_DINV0
#define GPIO_DINV0_SET       				MT6335_GPIO_DINV0_SET
#define GPIO_DINV0_CLR       				MT6335_GPIO_DINV0_CLR
#define GPIO_DOUT0           				MT6335_GPIO_DOUT0
#define GPIO_DOUT0_SET       				MT6335_GPIO_DOUT0_SET
#define GPIO_DOUT0_CLR       				MT6335_GPIO_DOUT0_CLR
#define GPIO_PI0             				MT6335_GPIO_PI0
#define GPIO_POE0            				MT6335_GPIO_POE0
#define GPIO_MODE0           				MT6335_GPIO_MODE0
#define GPIO_MODE0_SET       				MT6335_GPIO_MODE0_SET
#define GPIO_MODE0_CLR       				MT6335_GPIO_MODE0_CLR
#define GPIO_MODE1           				MT6335_GPIO_MODE1
#define GPIO_MODE1_SET       				MT6335_GPIO_MODE1_SET
#define GPIO_MODE1_CLR       				MT6335_GPIO_MODE1_CLR
#define GPIO_RSV             				MT6335_GPIO_RSV

#endif
#endif // #ifdef PMIC_6335_REG_API
#endif // #ifndef __DCL_PMIC6335_E2_HW_H_STRUCT__

