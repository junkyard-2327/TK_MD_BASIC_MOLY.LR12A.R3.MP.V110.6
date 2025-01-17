/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2012
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
 * Filename:
 * ---------
 *   drv_dcm.h
 *
 * Project:
 * --------
 *   UMOLYA
 *
 * Description:
 * ------------
 *   dcm driver
 *
 * Author:
 * -------
 * -------
 *
 * ==========================================================================
 * $Log$
 *
 * 09 11 2017 jun-ying.huang
 * [MOLY00277127] [MT6293][DCM]Remove hard code from drv_dcm.h
 * .
 *
 * 04 14 2017 jun-ying.huang
 * [MOLY00241010] [MT6763][DCM][PLL]Enable mdsys_bus2x & fesys_bus2x power aware and update PLL driver to apply golden setting
 * .
 *
 * 03 30 2017 jun-ying.huang
 * [MOLY00238575] [MT6293][DCM]Update DCM driver & DCM service
 * .
 *
 * 03 06 2017 jun-ying.huang
 * [MOLY00226321] [6293]DCM & Sleep Flow Integration and Verification
 * 1st version of 6293 DCM.(Function ready but function disable).
 *
 * 12 20 2016 jun-ying.huang
 * [MOLY00210301] [System service][DCM]DCM driver and DCM_Handler() implementation
 * Draft version of 6293 DCM_Service_Handler.(Function ready but function disable)
 *
 * 12 06 2016 jun-ying.huang
 * [MOLY00216862] [MT6293] Sleep Flow Integration
 * Draft version of 6293 DCM_Service_Handler.(Function not ready)
 *
 * 10 28 2016 jun-ying.huang
 * [MOLY00210301] [System service][DCM]DCM driver and DCM_Handler() implementation
 * Draft version of 6293 DCM_Handler.(Function not ready)
 *
 *
 ****************************************************************************/

#ifndef __DCM_REG_H__
#define __DCM_REG_H__

#include <reg_base.h>
#include <intrCtrl.h>


/* DCM */
#define MDGLOBAL_DCM_BASE BASE_MADDR_MDTOP_GLBCON
#define MDPERIMISC_IA_DCM_BASE BASE_MADDR_MDPERIMISC
#define BASE_MADDR_MEMSLP_CONFG BASE_MADDR_MDPERI_MDMEMSLP_CONFIG

/* MD Global DCM definition */
#define REG_MDTOP_GLBCON_CODA_VERSION           (MDGLOBAL_DCM_BASE + 0x0UL)
#define REG_MDTOP_GLBCON_MDCORE_DCM_CTL0        (MDGLOBAL_DCM_BASE + 0x10UL)
#define REG_MDTOP_GLBCON_MDMCU_DCM_CTL1	        (MDGLOBAL_DCM_BASE + 0x14UL)
#define REG_MDTOP_GLBCON_MDSYS_BUS_DCM_CTL0     (MDGLOBAL_DCM_BASE + 0x18UL)
#define REG_MDTOP_GLBCON_MDSYS_BUS_DCM_CTL1     (MDGLOBAL_DCM_BASE + 0x1CUL)
#define REG_MDTOP_GLBCON_VDSP_DCM_CTL0	        (MDGLOBAL_DCM_BASE + 0x20UL)
#define REG_MDTOP_GLBCON_VDSP_DCM_CTL1	        (MDGLOBAL_DCM_BASE + 0x24UL)
#define REG_MDTOP_GLBCON_BRP_DCM_CTL0	        (MDGLOBAL_DCM_BASE + 0x28UL)
#define REG_MDTOP_GLBCON_BRP_DCM_CTL1	        (MDGLOBAL_DCM_BASE + 0x2CUL)
#define REG_MDTOP_GLBCON_RAKE_DCM_CTL0	        (MDGLOBAL_DCM_BASE + 0x30UL)
#define REG_MDTOP_GLBCON_RAKE_DCM_CTL1	        (MDGLOBAL_DCM_BASE + 0x34UL)
#define REG_MDTOP_GLBCON_TXSYS_DCM_CTL0	        (MDGLOBAL_DCM_BASE + 0x38UL)
#define REG_MDTOP_GLBCON_TXSYS_DCM_CTL1	        (MDGLOBAL_DCM_BASE + 0x3CUL)
#define REG_MDTOP_GLBCON_CSSYS_DCM_CTL0	        (MDGLOBAL_DCM_BASE + 0x40UL)
#define REG_MDTOP_GLBCON_CSSYS_DCM_CTL1	        (MDGLOBAL_DCM_BASE + 0x44UL)

#define REG_MDTOP_GLBCON_MDCORE_DCM_IDLE_MASK	(MDGLOBAL_DCM_BASE + 0x50UL)
#define REG_MDTOP_GLBCON_MDCORE_DCM_ENABLE_MASK	(MDGLOBAL_DCM_BASE + 0x54UL)
#define REG_MDTOP_GLBCON_MDSYS_BUS_DCM_MASK     (MDGLOBAL_DCM_BASE + 0x58UL)
#define REG_MDTOP_GLBCON_VDSP_DCM_MASK	        (MDGLOBAL_DCM_BASE + 0x5CUL)
#define REG_MDTOP_GLBCON_BRP_DCM_MASK	        (MDGLOBAL_DCM_BASE + 0x60UL)
#define REG_MDTOP_GLBCON_RAKE_DCM_MASK	        (MDGLOBAL_DCM_BASE + 0x64UL)
#define REG_MDTOP_GLBCON_TXSYS_DCM_MASK	        (MDGLOBAL_DCM_BASE + 0x68UL)
#define REG_MDTOP_GLBCON_CSSYS_DCM_MASK	        (MDGLOBAL_DCM_BASE + 0x6CUL)

/* L1 LPM: Low Power Monitor for SM/DCM */
#define REG_MDTOP_GLBCON_L1DCM_LPM_CTRL         (MDGLOBAL_DCM_BASE + 0x80UL)
#define REG_MDTOP_GLBCON_L1DCM_LPM_STS0         (MDGLOBAL_DCM_BASE + 0x88UL)
#define REG_MDTOP_GLBCON_L1DCM_LPM_STS1         (MDGLOBAL_DCM_BASE + 0x8CUL)
#define REG_MDTOP_GLBCON_L1DCM_LPM_STS2         (MDGLOBAL_DCM_BASE + 0x90UL)
#define REG_MDTOP_GLBCON_L1DCM_LPM_STS3         (MDGLOBAL_DCM_BASE + 0x94UL)
#define REG_MDTOP_GLBCON_L1DCM_LPM_STS4         (MDGLOBAL_DCM_BASE + 0x98UL)
#define REG_MDTOP_GLBCON_L1DCM_LPM_STS5         (MDGLOBAL_DCM_BASE + 0x9CUL)

/* LPM: Read status via register */
#define REG_MDTOP_GLBCON_DCM_STS0               (MDGLOBAL_DCM_BASE + 0x100UL)
#define REG_MDTOP_GLBCON_DCM_STS1               (MDGLOBAL_DCM_BASE + 0x104UL)
#define REG_MDTOP_GLBCON_DCM_STS2               (MDGLOBAL_DCM_BASE + 0x108UL)
#define REG_MDTOP_GLBCON_DCM_STS3               (MDGLOBAL_DCM_BASE + 0x10CUL)

/* CHIP Config, for AP status check, TK6291 Only */
#define REG_MDTOP_GLBCON_DCM_CHIP_CONFIG0       (MDGLOBAL_DCM_BASE + 0x800UL)
#define REG_MDTOP_GLBCON_DCM_CHIP_CONFIG1       (MDGLOBAL_DCM_BASE + 0x804UL)

/* OTHERS */
#define REG_MDTOP_GLBCON_DCM_MDTOP_DUMMY        (MDGLOBAL_DCM_BASE + 0xF00UL)
#define REG_MDTOP_GLBCON_DCM_MDTOP_STATUS       (MDGLOBAL_DCM_BASE + 0xF04UL)


/* mdperisys_ao_misc_reg, 0xA0060000 */
#define REG_MDPERISYS_AO_MISC_MDMCU_CLK_EN                (MDPERIMISC_IA_DCM_BASE + 0x80)
#define REG_MDPERISYS_AO_MISC_WFI_CK_CTRL_CONFG	          (MDPERIMISC_IA_DCM_BASE + 0x1100)
#define REG_MDPERISYS_AO_MISC_WFI_CK_CTRL_WAKEUP_MASK     (MDPERIMISC_IA_DCM_BASE + 0x1104)

/* MEMSLP_CONFG, 0xA01D6000 */
#define REG_MEMSLP_CONFG_MEMSLP_GRP_ENA	                  (BASE_MADDR_MEMSLP_CONFG + 0x4)

/*
 * MDPERI_CLKCTL (0xA01C0000)
 */
#define REG_MD_PERI_DCM_MASK_SET                    ((BASE_MADDR_CLK_CTRL+0x120))
#define REG_MD_PERI_DCM_MASK_CLR                    ((BASE_MADDR_CLK_CTRL+0x124))
#define REG_MD_PERI_DCM_MASK                        ((BASE_MADDR_CLK_CTRL+0x128)) 

/*
 * MODEML1_AO_CONFIG (0xA6020000)
 */
#define REG_MDL1AO_CON6                              ((L1_BASE_MADDR_AO_CONFG+0x18)) 

#endif /* end of __PCM_REG_H__ */
