/*******************************************************************************
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
 ******************************************************************************/

/*******************************************************************************
 * Filename:
 * ---------
 *   Pll_gen93m17.h
 *
 * Project:
 * --------
 *   UMOLYA
 *
 * Description:
 * ------------
 *   PLL Related Functions
 *
 * Author:
 * -------
 * -------
 *
 * ============================================================================
 * $Log$
 *
 * 12 25 2018 jun-ying.huang
 * [MOLY00366325] [Talbot SB call for check-in] Add Macro for MT6768
 * .
 *
 * 01 22 2018 jun-ying.huang
 * [MOLY00303289] [Merlot call for check-in][PLL][DCM]Add Macro for MT6761(=Merlot)
 * .
 *
 * 10 25 2017 jun-ying.huang
 * [MOLY00285159] [PLL][DCM]Add Macro for MT6765(=Cervino)
 * .
 *
 * 08 21 2017 jun-ying.huang
 * [MOLY00272509] [Sylvia][PLL]Add MT6771 Macro for PLL due to Sylvia MT6771 Call for check in
 * .
 *
 * 06 09 2017 jun-ying.huang
 * [MOLY00244484] [Zion]Add compile option for ZION in PLL.
 * Add compile option for ZION and Workaround for CIRQ APB sync issue- Let BUS2x clock use MDBPIPLL_0/6 = 101 MHz
 *
 * 12 16 2016 jun-ying.huang
 * [MOLY00218782] [System service][PLL][6293]Add compile option for MT6763
 * .
 *
 * 12 07 2016 jun-ying.huang
 * [MOLY00217275] [System service][PLL][6293]Update PLL init flow and porting driver for user
 * .
 *
 * 11 20 2016 jun-ying.huang
 * [MOLY00214278] [System service][PLL][6293]Update PLL_FrequencyMeter_GetFreq() driver
 * .
 *
 * 11 06 2016 jun-ying.huang
 * [MOLY00211600] [System service][PLL]Add debug info in PLL driver
 * .
 *
 * 10 14 2016 jun-ying.huang
 * [MOLY00207095] [System service][PLL]Update PLL driver for DVFS users.
 * Add PLL function for DVFS
 *
 * 09 19 2016 alan-tl.lin
 * [MOLY00174466] [UMOLYA] PLL porting
 * [PLL] Update register definition
 *
 * 08 02 2016 alan-tl.lin
 * [MOLY00174466] [UMOLYA] PLL porting
 * Fix build error
 *
 ****************************************************************************/

#ifndef __PLL_MT6763_H__
#define __PLL_MT6763_H__

/*******************************************************************************
 * Locally Used Options
 ******************************************************************************/

#define PLL_REG32(addr) *(volatile kal_uint32 *)(addr)
#define PLL_TYPE        (volatile kal_uint32 *)

/*******************************************************************************
 * Register Define
 ******************************************************************************/

///////////////////////////////////////////////////////////////////////////////
/// PLLMIXED (0xA0140000)
///////////////////////////////////////////////////////////////////////////////
/* ==========PLL setting========== */
#define REG_MDTOP_PLLMIXED_CODA_VERSION             (PLL_TYPE(BASE_MADDR_MDTOP_PLLMIXED+0x0))
#define REG_MDTOP_PLLMIXED_DCXO_PLL_SETTLE_CTL      (PLL_TYPE(BASE_MADDR_MDTOP_PLLMIXED+0x4))
#define REG_MDTOP_PLLMIXED_DCXO_RDY_WO_ACK          (PLL_TYPE(BASE_MADDR_MDTOP_PLLMIXED+0x8))
#define REG_MDTOP_PLLMIXED_DCXO_MODE_CTL            (PLL_TYPE(BASE_MADDR_MDTOP_PLLMIXED+0xC))
#define REG_MDTOP_PLLMIXED_PLL_ON_CTL               (PLL_TYPE(BASE_MADDR_MDTOP_PLLMIXED+0x10))
#define REG_MDTOP_PLLMIXED_PLL_SW_CTL0              (PLL_TYPE(BASE_MADDR_MDTOP_PLLMIXED+0x14))
#define REG_MDTOP_PLLMIXED_PLL_SW_CTL1              (PLL_TYPE(BASE_MADDR_MDTOP_PLLMIXED+0x18))
#define REG_MDTOP_PLLMIXED_PLL_DLY_CTL0             (PLL_TYPE(BASE_MADDR_MDTOP_PLLMIXED+0x30))
#define REG_MDTOP_PLLMIXED_PLL_DLY_CTL1             (PLL_TYPE(BASE_MADDR_MDTOP_PLLMIXED+0x34))
#define REG_MDTOP_PLLMIXED_PLL_DLY_CTL2             (PLL_TYPE(BASE_MADDR_MDTOP_PLLMIXED+0x38))

/* ==========PLL frequency control==> PCW & POSDIV========== */
#define REG_MDTOP_PLLMIXED_MDMCUPLL_CTL0            (PLL_TYPE(BASE_MADDR_MDTOP_PLLMIXED+0x40))
#define REG_MDTOP_PLLMIXED_MDMCUPLL_CTL1            (PLL_TYPE(BASE_MADDR_MDTOP_PLLMIXED+0x44))
#define REG_MDTOP_PLLMIXED_MDVDSPPLL_CTL0           (PLL_TYPE(BASE_MADDR_MDTOP_PLLMIXED+0x48))
#define REG_MDTOP_PLLMIXED_MDVDSPPLL_CTL1           (PLL_TYPE(BASE_MADDR_MDTOP_PLLMIXED+0x4C))
#define REG_MDTOP_PLLMIXED_MDBRPPLL_CTL0            (PLL_TYPE(BASE_MADDR_MDTOP_PLLMIXED+0x50))
#define REG_MDTOP_PLLMIXED_MDBRPPLL_CTL1            (PLL_TYPE(BASE_MADDR_MDTOP_PLLMIXED+0x54))
#define REG_MDTOP_PLLMIXED_MDTXPLL_CTL0             (PLL_TYPE(BASE_MADDR_MDTOP_PLLMIXED+0x58))
#define REG_MDTOP_PLLMIXED_MDTXPLL_CTL1             (PLL_TYPE(BASE_MADDR_MDTOP_PLLMIXED+0x5C))
#define REG_MDTOP_PLLMIXED_MDBPIPLL_CTL0            (PLL_TYPE(BASE_MADDR_MDTOP_PLLMIXED+0x60))
#define REG_MDTOP_PLLMIXED_MDBPIPLL_CTL1            (PLL_TYPE(BASE_MADDR_MDTOP_PLLMIXED+0x64))
#define REG_MDTOP_PLLMIXED_MDPLL_CTL0               (PLL_TYPE(BASE_MADDR_MDTOP_PLLMIXED+0x100))
#define REG_MDTOP_PLLMIXED_MDPLL_CTL1               (PLL_TYPE(BASE_MADDR_MDTOP_PLLMIXED+0x104))
#define REG_MDTOP_PLLMIXED_MDPLL_CTL2               (PLL_TYPE(BASE_MADDR_MDTOP_PLLMIXED+0x108))

#define REG_MDTOP_PLLMIXED_PLL_RESERVE              (PLL_TYPE(BASE_MADDR_MDTOP_PLLMIXED+0x10C))
#define REG_MDTOP_PLLMIXED_PLL_RESERVE2             (PLL_TYPE(BASE_MADDR_MDTOP_PLLMIXED+0x110))
#define REG_MDTOP_PLLMIXED_PLL_DIV_RSTB             (PLL_TYPE(BASE_MADDR_MDTOP_PLLMIXED+0x114))
#define REG_MDTOP_PLLMIXED_PLL_FHCTL_RST            (PLL_TYPE(BASE_MADDR_MDTOP_PLLMIXED+0x200))
#define REG_MDTOP_PLLMIXED_CONN_DSNS_INTF           (PLL_TYPE(BASE_MADDR_MDTOP_PLLMIXED+0x204))

/* ==========PLL IRQ related========== */
#define REG_MDTOP_PLLMIXED_PLL_ABNORM_GEARHP_IRQ    (PLL_TYPE(BASE_MADDR_MDTOP_PLLMIXED+0x300))
#define REG_MDTOP_PLLMIXED_PLL_ABNORM_GEARHP_MASK   (PLL_TYPE(BASE_MADDR_MDTOP_PLLMIXED+0x304))
#define REG_MDTOP_PLLMIXED_PLL_REQ_WO_DCXO_IRQ      (PLL_TYPE(BASE_MADDR_MDTOP_PLLMIXED+0x308))
#define REG_MDTOP_PLLMIXED_PLL_REQ_WO_DCXO_MASK     (PLL_TYPE(BASE_MADDR_MDTOP_PLLMIXED+0x30C))
#define REG_MDTOP_PLLMIXED_PLL_REQ_ABNORM_STS       (PLL_TYPE(BASE_MADDR_MDTOP_PLLMIXED+0x310))
#define REG_MDTOP_PLLMIXED_PLL_HP_RDY_IRQ           (PLL_TYPE(BASE_MADDR_MDTOP_PLLMIXED+0x314))
    #define  PLLMIXED_MDMCUPLL_HP_RDY_IRQ_OFFSET   (1)
    #define  PLLMIXED_MDVDSPPLL_HP_RDY_IRQ_OFFSET  (2)
    #define  PLLMIXED_MDBRPPLL_HP_RDY_IRQ_OFFSET   (4)
    #define  PLLMIXED_MDTXPLL_HP_RDY_IRQ_OFFSET    (5)
#define REG_MDTOP_PLLMIXED_PLL_HP_RDY_IRQ_MASK      (PLL_TYPE(BASE_MADDR_MDTOP_PLLMIXED+0x318))

/* PLL IRQ related macro */
#define  PLLMIXED_PLL_HP_RDY_IRQ_MASK              (0x1)/* mask bit numbers for each IRQ */

/* ==========PLL FHCTL========== */
#define REG_MDTOP_PLLMIXED_MDMCUPLL_FHCTL           (PLL_TYPE(BASE_MADDR_MDTOP_PLLMIXED+0x400))
#define REG_MDTOP_PLLMIXED_MDMCUPLL_FRDDS_LMT       (PLL_TYPE(BASE_MADDR_MDTOP_PLLMIXED+0x404))
#define REG_MDTOP_PLLMIXED_MDMCUPLL_SW_GEAR         (PLL_TYPE(BASE_MADDR_MDTOP_PLLMIXED+0x408))
#define REG_MDTOP_PLLMIXED_MDVDSPPLL_FHCTL          (PLL_TYPE(BASE_MADDR_MDTOP_PLLMIXED+0x410))
#define REG_MDTOP_PLLMIXED_MDVDSPPLL_FRDDS_LMT      (PLL_TYPE(BASE_MADDR_MDTOP_PLLMIXED+0x414))
#define REG_MDTOP_PLLMIXED_MDVDSPPLL_SW_GEAR        (PLL_TYPE(BASE_MADDR_MDTOP_PLLMIXED+0x418))
#define REG_MDTOP_PLLMIXED_MDBRPPLL_FHCTL           (PLL_TYPE(BASE_MADDR_MDTOP_PLLMIXED+0x430))
#define REG_MDTOP_PLLMIXED_MDBRPPLL_FRDDS_LMT       (PLL_TYPE(BASE_MADDR_MDTOP_PLLMIXED+0x434))
#define REG_MDTOP_PLLMIXED_MDBRPPLL_SW_GEAR         (PLL_TYPE(BASE_MADDR_MDTOP_PLLMIXED+0x438))
#define REG_MDTOP_PLLMIXED_MDTXPLL_FHCTL            (PLL_TYPE(BASE_MADDR_MDTOP_PLLMIXED+0x440))
#define REG_MDTOP_PLLMIXED_MDTXPLL_FRDDS_LMT        (PLL_TYPE(BASE_MADDR_MDTOP_PLLMIXED+0x444))
#define REG_MDTOP_PLLMIXED_MDTXPLL_SW_GEAR          (PLL_TYPE(BASE_MADDR_MDTOP_PLLMIXED+0x448))
#define REG_MDTOP_PLLMIXED_MDBPIPLL_FHCTL           (PLL_TYPE(BASE_MADDR_MDTOP_PLLMIXED+0x450))
#define REG_MDTOP_PLLMIXED_MDBPIPLL_FRDDS_LMT       (PLL_TYPE(BASE_MADDR_MDTOP_PLLMIXED+0x454))
#define REG_MDTOP_PLLMIXED_MDBPIPLL_SW_GEAR         (PLL_TYPE(BASE_MADDR_MDTOP_PLLMIXED+0x458))

/* ==========PLL Gear Set========== */
#define REG_MDTOP_PLLMIXED_MDMCUPLL_GEAR_SET0       (PLL_TYPE(BASE_MADDR_MDTOP_PLLMIXED+0x500))
#define REG_MDTOP_PLLMIXED_MDMCUPLL_GEAR_SET1       (PLL_TYPE(BASE_MADDR_MDTOP_PLLMIXED+0x504))
#define REG_MDTOP_PLLMIXED_MDMCUPLL_GEAR_SET2       (PLL_TYPE(BASE_MADDR_MDTOP_PLLMIXED+0x508))
#define REG_MDTOP_PLLMIXED_MDMCUPLL_GEAR_SET3       (PLL_TYPE(BASE_MADDR_MDTOP_PLLMIXED+0x50C))
#define REG_MDTOP_PLLMIXED_MDVDSPPLL_GEAR_SET0      (PLL_TYPE(BASE_MADDR_MDTOP_PLLMIXED+0x540))
#define REG_MDTOP_PLLMIXED_MDVDSPPLL_GEAR_SET1      (PLL_TYPE(BASE_MADDR_MDTOP_PLLMIXED+0x544))
#define REG_MDTOP_PLLMIXED_MDVDSPPLL_GEAR_SET2      (PLL_TYPE(BASE_MADDR_MDTOP_PLLMIXED+0x548))
#define REG_MDTOP_PLLMIXED_MDVDSPPLL_GEAR_SET3      (PLL_TYPE(BASE_MADDR_MDTOP_PLLMIXED+0x54C))
#define REG_MDTOP_PLLMIXED_MDBRPPLL_GEAR_SET0       (PLL_TYPE(BASE_MADDR_MDTOP_PLLMIXED+0x5C0))
#define REG_MDTOP_PLLMIXED_MDBRPPLL_GEAR_SET1       (PLL_TYPE(BASE_MADDR_MDTOP_PLLMIXED+0x5C4))
#define REG_MDTOP_PLLMIXED_MDBRPPLL_GEAR_SET2       (PLL_TYPE(BASE_MADDR_MDTOP_PLLMIXED+0x5C8))
#define REG_MDTOP_PLLMIXED_MDBRPPLL_GEAR_SET3       (PLL_TYPE(BASE_MADDR_MDTOP_PLLMIXED+0x5CC))
#define REG_MDTOP_PLLMIXED_MDTXPLL_GEAR_SET0        (PLL_TYPE(BASE_MADDR_MDTOP_PLLMIXED+0x600))
#define REG_MDTOP_PLLMIXED_MDTXPLL_GEAR_SET1        (PLL_TYPE(BASE_MADDR_MDTOP_PLLMIXED+0x604))
#define REG_MDTOP_PLLMIXED_MDTXPLL_GEAR_SET2        (PLL_TYPE(BASE_MADDR_MDTOP_PLLMIXED+0x608))
#define REG_MDTOP_PLLMIXED_MDTXPLL_GEAR_SET3        (PLL_TYPE(BASE_MADDR_MDTOP_PLLMIXED+0x60C))

/* ==========PLL Status========== */
#define REG_MDTOP_PLLMIXED_MDMCUPLL_STS             (PLL_TYPE(BASE_MADDR_MDTOP_PLLMIXED+0xC00))
#define REG_MDTOP_PLLMIXED_MDVDSPPLL_STS            (PLL_TYPE(BASE_MADDR_MDTOP_PLLMIXED+0xC04))
#define REG_MDTOP_PLLMIXED_MDBRPPLL_STS             (PLL_TYPE(BASE_MADDR_MDTOP_PLLMIXED+0xC08))
#define REG_MDTOP_PLLMIXED_MDTXPLL_STS              (PLL_TYPE(BASE_MADDR_MDTOP_PLLMIXED+0xC0C))
#define REG_MDTOP_PLLMIXED_MDBPIBPLL_STS            (PLL_TYPE(BASE_MADDR_MDTOP_PLLMIXED+0xC10))
#define REG_MDTOP_PLLMIXED_MDPLL1_STS               (PLL_TYPE(BASE_MADDR_MDTOP_PLLMIXED+0xC40))
#define REG_MDTOP_PLLMIXED_PLL_DUMMY                (PLL_TYPE(BASE_MADDR_MDTOP_PLLMIXED+0xF00))
#define REG_MDTOP_PLLMIXED_PLL_DUMMY1               (PLL_TYPE(BASE_MADDR_MDTOP_PLLMIXED+0xF04))
#define REG_MDTOP_PLLMIXED_PLL_DUMMY2               (PLL_TYPE(BASE_MADDR_MDTOP_PLLMIXED+0xF08))
#define REG_MDTOP_PLLMIXED_PLL_STATUS               (PLL_TYPE(BASE_MADDR_MDTOP_PLLMIXED+0xF0C))

/* PLL Status related macro */
#define PLLMIXED_PLL_SFSTR_PRD_OFFSET           (14)
#define PLLMIXED_PLL_SFSTR_PRD_MASK             (0x1)/* mask bit numbers for each SFSTR_PRD */
#define PLLMIXED_PLL_SDM_PCW_OFFSET             (16)
#define PLLMIXED_PLL_SDM_PCW_MASK               (0x7FFF)/* mask bit numbers([30:16] = 14bits) for each SDM_PCW */


///////////////////////////////////////////////////////////////////////////////
/// CLKSW (0xA0150000)
///////////////////////////////////////////////////////////////////////////////
#define REG_MDTOP_CLKSW_CODA_VERSION	            (PLL_TYPE(BASE_MADDR_MDTOP_CLKSW+0x0))
#define REG_MDTOP_CLKSW_MD_SLEEP_CNT	            (PLL_TYPE(BASE_MADDR_MDTOP_CLKSW+0x4))
#define REG_MDTOP_CLKSW_MDTOPSM_SW_CTL	            (PLL_TYPE(BASE_MADDR_MDTOP_CLKSW+0x10))
#define REG_MDTOP_CLKSW_L1TOPSM_SW_CTL	            (PLL_TYPE(BASE_MADDR_MDTOP_CLKSW+0x14))
#define REG_MDTOP_CLKSW_CKOFF_CTL                   (PLL_TYPE(BASE_MADDR_MDTOP_CLKSW+0x1C))
#define REG_MDTOP_CLKSW_CLKON_CTL                   (PLL_TYPE(BASE_MADDR_MDTOP_CLKSW+0x20))
#define REG_MDTOP_CLKSW_CLKSEL_CTL                  (PLL_TYPE(BASE_MADDR_MDTOP_CLKSW+0x24))

/* ==========SDF clock control related========== */
#define REG_MDTOP_CLKSW_SDF_CK_CTL                  (PLL_TYPE(BASE_MADDR_MDTOP_CLKSW+0x28))
#define REG_MDTOP_CLKSW_ATB_LOG_SDF_SW_CTL          (PLL_TYPE(BASE_MADDR_MDTOP_CLKSW+0x2C))
#define REG_MDTOP_CLKSW_LOG_ATB_CK_CTL0             (PLL_TYPE(BASE_MADDR_MDTOP_CLKSW+0x30))
#define REG_MDTOP_CLKSW_LOG_ATB_CK_CTL1             (PLL_TYPE(BASE_MADDR_MDTOP_CLKSW+0x34))

/* ==========FLEXCKGEN_SEL========== */
#define REG_MDTOP_CLKSW_MDCORE_FLEXCKGEN_SEL        (PLL_TYPE(BASE_MADDR_MDTOP_CLKSW+0x40))
#define REG_MDTOP_CLKSW_MDSYS_BUS_FLEXCKGEN_SEL     (PLL_TYPE(BASE_MADDR_MDTOP_CLKSW+0x44))
#define REG_MDTOP_CLKSW_VDSP_FLEXCKGEN_SEL          (PLL_TYPE(BASE_MADDR_MDTOP_CLKSW+0x48))
#define REG_MDTOP_CLKSW_BRP_FLEXCKGEN_SEL           (PLL_TYPE(BASE_MADDR_MDTOP_CLKSW+0x4C))
#define REG_MDTOP_CLKSW_RAKE_FLEXCKGEN_SEL          (PLL_TYPE(BASE_MADDR_MDTOP_CLKSW+0x50))
#define REG_MDTOP_CLKSW_TXSYS_FLEXCKGEN_SEL         (PLL_TYPE(BASE_MADDR_MDTOP_CLKSW+0x54))
#define REG_MDTOP_CLKSW_CSSYS_FLEXCKGEN_SEL         (PLL_TYPE(BASE_MADDR_MDTOP_CLKSW+0x58))
#define REG_MDTOP_CLKSW_MD2G_FLEXCKGEN_SEL          (PLL_TYPE(BASE_MADDR_MDTOP_CLKSW+0x5C))
#define REG_MDTOP_CLKSW_BSI_FLEXCKGEN_SEL           (PLL_TYPE(BASE_MADDR_MDTOP_CLKSW+0x60))
#define REG_MDTOP_CLKSW_DBG_FLEXCKGEN_SEL           (PLL_TYPE(BASE_MADDR_MDTOP_CLKSW+0x64))
#define REG_MDTOP_CLKSW_LOG_ATB_FLEXCKGEN_SEL       (PLL_TYPE(BASE_MADDR_MDTOP_CLKSW+0x68))

/* ==========FLEXCKGEN_STS========== */
#define REG_MDTOP_CLKSW_MDCORE_FLEXCKGEN_STS        (PLL_TYPE(BASE_MADDR_MDTOP_CLKSW+0x80))
#define REG_MDTOP_CLKSW_MDSYS_BUS_FLEXCKGEN_STS     (PLL_TYPE(BASE_MADDR_MDTOP_CLKSW+0x84))
#define REG_MDTOP_CLKSW_VDSP_FLEXCKGEN_STS          (PLL_TYPE(BASE_MADDR_MDTOP_CLKSW+0x88))
#define REG_MDTOP_CLKSW_BRP_FLEXCKGEN_STS           (PLL_TYPE(BASE_MADDR_MDTOP_CLKSW+0x8C))
#define REG_MDTOP_CLKSW_RAKE_FLEXCKGEN_STS          (PLL_TYPE(BASE_MADDR_MDTOP_CLKSW+0x90))
#define REG_MDTOP_CLKSW_TXSYS_FLEXCKGEN_STS         (PLL_TYPE(BASE_MADDR_MDTOP_CLKSW+0x94))
#define REG_MDTOP_CLKSW_CSSYS_FLEXCKGEN_STS         (PLL_TYPE(BASE_MADDR_MDTOP_CLKSW+0x98))
#define REG_MDTOP_CLKSW_MD2G_FLEXCKGEN_STS          (PLL_TYPE(BASE_MADDR_MDTOP_CLKSW+0x9C))
#define REG_MDTOP_CLKSW_BSI_FLEXCKGEN_STS           (PLL_TYPE(BASE_MADDR_MDTOP_CLKSW+0xA0))
#define REG_MDTOP_CLKSW_DBG_FLEXCKGEN_STS           (PLL_TYPE(BASE_MADDR_MDTOP_CLKSW+0xA4))
#define REG_MDTOP_CLKSW_LOG_ATB_FLEXCKGEN_STS       (PLL_TYPE(BASE_MADDR_MDTOP_CLKSW+0xA8))

#define REG_MDTOP_CLKSW_CKMUX_STS                   (PLL_TYPE(BASE_MADDR_MDTOP_CLKSW+0xC0))
#define REG_MDTOP_CLKSW_PLL_STS	                    (PLL_TYPE(BASE_MADDR_MDTOP_CLKSW+0xD0))

/* ==========Frequency Meter========== */
#define REG_MDTOP_CLKSW_CKMON_CTL                   (PLL_TYPE(BASE_MADDR_MDTOP_CLKSW+0x100))
#define REG_MDTOP_CLKSW_FREQ_METER_CTL              (PLL_TYPE(BASE_MADDR_MDTOP_CLKSW+0x104))
#define REG_MDTOP_CLKSW_FREQ_METER_XTAL_CNT         (PLL_TYPE(BASE_MADDR_MDTOP_CLKSW+0x108))
#define REG_MDTOP_CLKSW_FREQ_METER_CKMON_CNT        (PLL_TYPE(BASE_MADDR_MDTOP_CLKSW+0x10C))
#define REG_MDTOP_CLKSW_FREQ_METER_H                (PLL_TYPE(BASE_MADDR_MDTOP_CLKSW+0x110))
#define REG_MDTOP_CLKSW_FREQ_METER_L                (PLL_TYPE(BASE_MADDR_MDTOP_CLKSW+0x114))

/* ==========DUMMY & STATUS========== */
#define REG_MDTOP_CLKSW_CLK_DUMMY                   (PLL_TYPE(BASE_MADDR_MDTOP_CLKSW+0xF00))
#define REG_MDTOP_CLKSW_CLK_STATUS                  (PLL_TYPE(BASE_MADDR_MDTOP_CLKSW+0xF04))


/*******************************************************************************
 * Define Macro
 ******************************************************************************/
#define MD_PLL_MAGIC_NUM 0x62930000

/**
 * PLL divider definition
 */
#if defined(MT6763) || defined(MT6771) || defined(MT6765) || defined(MT6761) || defined(MT6768)/* BIANCO or SYLVIA or CERVINO or MERLOT or TALBOT */
//    #define MDBPIPLL_DIVIDER      /4 /9 /7
    #define MDTXPLL_DIVIDER      (8)
    #define MDBRPPLL_DIVIDER     (9)
    #define MDVDSPPLL_DIVIDER    (5)
    #define MDMCUPLL_DIVIDER     (4)    
#elif defined(MT6739)/* ZION */ 
    #define MDTXPLL_DIVIDER      (4)
    #define MDBRPPLL_DIVIDER     (6)
    #define MDVDSPPLL_DIVIDER    (4)
    #define MDMCUPLL_DIVIDER     (2)
#else
    #error "Unsupported Chip Target in PLL Module"
#endif

 /*------------------------------------------------------------------------
 * Purpose:     Transfer PCW in xxxPLL_STS to Mhz. This macro is porting from md_dvfs_pll_freq_get(const PLL_SOURCE pll).
 * Parameters:
 *    Input:    pcw:    The PCW value in xxxPLL_STS.
 *              divier: The divier for this PLL(EX: ICCPLL_DIVIDER, IMCPLL_DIVIDER...).
 *    Output:   None.
 * returns :    Mhz. 
 * Note    :    This macr is only used to transfer pcw in xxxPLL_STS to Mhz. 
 *              You should not used this macro to transfer pcw in xxxPLL_CTL0 to Mhz due to the meaning is different.
 *              (PCW in xxxPLL_STS is bit [21:7] of xxxPLL_CTL0.)
 *------------------------------------------------------------------------
 */
#define PLLMIXED_PLL_STS_SDM_PCW_TO_MHZ(pcw, divier)   ((((pcw) * 26) / (1 << 7)) / divier)

/*******************************************************************************
 * ENUM
 ******************************************************************************/
// frequency meter index list (debug only)
typedef enum {
    PLL_FM_SOURCE_START            = 0xA,
    PLL_FM_TRACE_MON_CLOCK         = 0xA,
    PLL_FM_MDSYS_208M_CLOCK        = 0xB,
    PLL_FM_MDRXSYS_RAKE_CLOCK      = 0xC,
    PLL_FM_MDRXSYS_BRP_CLOCK       = 0xD,
    PLL_FM_MDRXSYS_VDSP_CLOCK      = 0xE,
    PLL_FM_MDTOP_LOG_GTB_CLOCK     = 0xF,
    PLL_FM_FESYS_CSYS_CLOCK        = 0x10,
    PLL_FM_FESYS_TXSYS_CLOCK       = 0x11,
    PLL_FM_FESYS_BSI_CLOCK         = 0x12, 
    PLL_FM_MDSYS_MDCORE_CLOCK      = 0x13, 
    PLL_FM_MDSYS_BUS2X_NODCM_CLOCK = 0x14, 
    PLL_FM_MDSYS_BUS2X_CLOCK       = 0x15,
    PLL_FM_MDTOP_DBG_CLOCK         = 0x16,
    PLL_FM_MDTOP_F32K_CLOCK        = 0x17,
    PLL_FM_MDBPI_PLL_0_DIV2        = 0x18,
    PLL_FM_MDBPI_PLL_2             = 0x19,
    PLL_FM_MDBPI_PLL_1             = 0x1A,
    PLL_FM_MDBPI_PLL_0             = 0x1B,
    PLL_FM_MDTX_PLL                = 0x1C,
    PLL_FM_MDBRP_PLL               = 0x1D,
    PLL_FM_MDVDSP_PLL              = 0x1E,
    PLL_FM_MDMCU_PLL               = 0x1F,
    PLL_FM_SOURCE_END              = 0x1F    
} PLL_FM_SOURCE;

typedef enum {
    PLL_MDPLL1    = 0,
    PLL_MDMCU     = 1,   
    PLL_MDVDSP    = 2,  
    PLL_MDBRP     = 3,   
    PLL_MDTX      = 4,    
    PLL_MDBPI     = 5,
    PLL_END,
} PLL_SOURCE;

typedef enum {
    CLKSW_FLEXCKGEN_START    = 0,
    MDCORE_FLEXCKGEN    = 0,
    MDSYS_BUS_FLEXCKGEN = 1,
    VDSP_FLEXCKGEN      = 2,
    BRP_FLEXCKGEN       = 3,
    RAKE_FLEXCKGEN      = 4,    
    TXSYS_FLEXCKGEN     = 5,
    CSSYS_FLEXCKGEN     = 6,
    MD2G_FLEXCKGEN      = 7,   
    BSI_FLEXCKGEN       = 8,
    DBG_FLEXCKGEN       = 9,
    LOG_ATB_FLEXCKGEN  = 10,
    CLKSW_FLEXCKGEN_END    
} PLL_CLKSW_FLEXCKGEN;

typedef enum {
    CLKSW_FLEXCKGEN_DIV_1    = 0,
    CLKSW_FLEXCKGEN_DIV_2    = 1,
    CLKSW_FLEXCKGEN_DIV_3    = 2,
    CLKSW_FLEXCKGEN_DIV_4    = 3,
    CLKSW_FLEXCKGEN_DIV_5    = 4,    
    CLKSW_FLEXCKGEN_DIV_6    = 5,
    CLKSW_FLEXCKGEN_DIV_7    = 6,
    CLKSW_FLEXCKGEN_DIV_8    = 7   
} PLL_CLKSW_FLEXCKGEN_DIV;

typedef enum {
    CLKSW_FLEXCKGEN_PLL_SRC_0    = 0,
    CLKSW_FLEXCKGEN_PLL_SRC_1    = 1,
    CLKSW_FLEXCKGEN_PLL_SRC_2    = 2,
    CLKSW_FLEXCKGEN_PLL_SRC_3    = 3  
} PLL_CLKSW_FLEXCKGEN_PLL_SRC;

typedef enum {
    CLKSW_MDTOPSM_DBG_CK = 3,
} PLL_CLKSW_MDTOPSM_SW_CTL_SRC;

typedef enum {
    CLKSW_SDF_SRC_BPIPLL_DIV8 = 0,
    CLKSW_SDF_SRC_BPIPLL_DIV4 = 1,        
    CLKSW_SDF_SRC_BPIPLL      = 2,  
    CLKSW_SDF_SRC_BPIPLL_DIV2 = 3, 
    /*CLKSW_SDF_SRC_USB_PhyLink = 4,*/ /* HW didn't support. */ 
    CLKSW_SDF_SRC_26M,    
    CLKSW_SDF_SRC_END    
} PLL_CLKSW_SDF_SRC;

/* Below for debugging */

#define PLL_FM_NUM 30   /* Note: This number should also sync to EE owner. */
typedef struct {
    kal_uint32 clock_trace_mon;         /* 0 */
    kal_uint32 clock_mdsys_208m;
    kal_uint32 clock_mdrxsys_rake;
    kal_uint32 clock_mdrxsys_brp;
    kal_uint32 clock_mdrxsys_vdsp;
    kal_uint32 clock_mdtop_log_gtb;     /* 5 */
    kal_uint32 clock_fesys_csys;
    kal_uint32 clock_fesys_txsys;
    kal_uint32 clock_fesys_bsi;
    kal_uint32 clock_mdsys_mdcore;
    kal_uint32 clock_mdsys_bus2x_nodcm; /* 10 */
    kal_uint32 clock_mdsys_bus2x;
    kal_uint32 clock_mdtop_dbg;
    kal_uint32 clock_mdtop_f32k;
    kal_uint32 pll_MDBPI0_div2;    
    kal_uint32 pll_MDBPI2;              /* 15 */
    kal_uint32 pll_MDBPI1;
    kal_uint32 pll_MDBPI0;
    kal_uint32 pll_MDTX;
    kal_uint32 pll_MDBRP;
    kal_uint32 pll_MDVDSP;              /* 20 */
    kal_uint32 pll_MDMCU;
/* below no use */     
    kal_uint32 NULL_22;
    kal_uint32 NULL_23;
    kal_uint32 NULL_24;   
    kal_uint32 NULL_25;
    kal_uint32 NULL_26;    
    kal_uint32 NULL_27;
    kal_uint32 NULL_28; 
    kal_uint32 NULL_29;    
} PLL_CLK_INFO;

extern PLL_CLK_INFO g_pll_info;
extern const char PLL_FM_clock[PLL_FM_NUM][32];

/* Above for debugging */

/*******************************************************************************
 * Include header files
 ******************************************************************************/
extern void PLL_exception_dump(void);

extern kal_uint32 PLL_FrequencyMeter_GetFreq(PLL_FM_SOURCE index);

extern kal_bool PLL_PLLMIXED_PLL_ON_CTL(PLL_SOURCE pll, kal_bool force_on);

extern void PLL_CLKSW_FLEXCKGEN_SEL_PLLSEL_Set(PLL_CLKSW_FLEXCKGEN module, PLL_CLKSW_FLEXCKGEN_PLL_SRC pll_sel);		
extern void PLL_CLKSW_FLEXCKGEN_SEL_DIVSEL_Set(PLL_CLKSW_FLEXCKGEN module, PLL_CLKSW_FLEXCKGEN_DIV div_sel);
extern void PLL_CLKSW_FLEXCKGEN_SEL_Get(PLL_CLKSW_FLEXCKGEN module, kal_uint32 *pll_sel, kal_uint32 *div_sel);
extern void PLL_CLKSW_FLEXCKGEN_STS_Get(PLL_CLKSW_FLEXCKGEN module, kal_uint32 *ck_rdy, kal_uint32 *ckgen_state, kal_uint32 *pll_req);
extern kal_bool PLL_CLKSW_MDTOPSM_SW_CTL(PLL_CLKSW_MDTOPSM_SW_CTL_SRC module, kal_bool force_on);

extern kal_uint32 PLL_CLKSW_SDF_SRC_CKSEL_Get();
extern kal_bool PLL_CLKSW_SDF_SRC_CKSEL_Set(PLL_CLKSW_SDF_SRC src_ck);
extern void PLL_CLKSW_SDF_CK_Req(kal_bool clk_req);

#endif  /* !__PLL_MT6763_H__ */

