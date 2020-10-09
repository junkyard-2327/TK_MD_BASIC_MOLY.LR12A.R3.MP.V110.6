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
 *   drv_mdcirq.h
 *
 * Project:
 * --------
 *   TATAKA
 *
 * Description:
 * ------------
 *   Low level interrupt controller driver
 *
 * Author:
 * -------
 * -------
 *
 * ==========================================================================
 * $Log$
 *
 * 12 27 2018 chia-han.wu
 * [MOLY00375169] [Talbot SB call for check-in][MT6768][Gen93][System Service][MDCIRQ] Compile option for TALBOT(MT6768)
 * MT6768(Talbot) option check-in.
 *
 * 01 23 2018 yen-chun.liu
 * [MOLY00303755] [Merlot call for check-in][MT6761][Gen93][System Service][MDCIRQ] Compile option for MERLOT(MT6761)
 * Merlot(MT6761) compile option.
 *
 * 10 24 2017 yen-chun.liu
 * [MOLY00284996] [MT6765][Gen93][System Service][MDCIRQ] Compile option for CERVINO(MT6765)
 * .
 *
 * 08 24 2017 yen-chun.liu
 * [MOLY00273664] [UMOLA][MDCIRQ][MT6771] Slyvia call for check-in
 * MT6771 compile option.
 *
 * 06 29 2017 yen-chun.liu
 * [MOLY00260604] [MTBF_Monkey] Externel (EE),0,0,99,/data/core/,1,modem,Trigger time:[2017-06-23 03:29:16.995163]md1:(MCU_core1.vpe0.tc0(VPE2))[ASSERT] file:mcu/common/driver/devdrv/gpt/src/dcl_gpt.c line:1443p1:0x00000000p2:
 * workaround for readID/IRQ mask concurrency issue.
 *
 * 06 12 2017 yen-chun.liu
 * [MOLY00244660] [MT6739][Gen93][System Service][MDCIRQ] Compile option for ZION(MT6739)
 * compile option for Zion.
 *
 * 05 18 2017 yen-chun.liu
 * [MOLY00248491] [MT6763][Gen93][System Service][MDCIRQ] Debugging code for GPT IRQ not entered issue
 * remove OSIPI IRQ flow.
 *
 * 05 11 2017 yen-chun.liu
 * [MOLY00248491] [MT6763][Gen93][System Service][MDCIRQ] Debugging code for GPT IRQ not entered issue
 * change back to GCR.
 *
 * 05 10 2017 yen-chun.liu
 * [MOLY00248521] [MT6763][Gen93][System Service][MDCIRQ] Fix the register address offset of MDCIRQ
 * .
 *
 * 04 07 2017 yen-chun.liu
 * [MOLY00240097] [MT6763][Gen93][System Service][MDCIRQ] Use APB access instead of GCR access to avoid GCR decode issue
 * .
 *
 * 11 02 2016 i-chun.liu
 * [MOLY00171836] 93 MDCIRQ driver implementation
 * Add IRQ_B/NMI_B API for DCM usage.
 *
 * 10 03 2016 i-chun.liu
 * [MOLY00171836] 93 MDCIRQ driver implementation
 * update MDCIRQ register define.
 *
 * 09 19 2016 i-chun.liu
 * [MOLY00184725] UMOLYA ESL/MASE porting
 * Update for ESL MASE porting.
 *
 * 08 17 2016 i-chun.liu
 * [MOLY00171836] 93 MDCIRQ driver implementation
 * mdcirq driver update.
 *
 * 05 30 2016 i-chun.liu
 * [MOLY00171836] 93 MDCIRQ driver implementation
 * MDCIRQ driver implementation.
 *
 * 03 30 2016 i-chun.liu
 * [MOLY00171836] 93 MDCIRQ driver implementation
 * 93 MDCIRQ related check in .
 *
 * 02 17 2016 i-chun.liu
 * [MOLY00140199] MT6292 MDCIRQ and GIC driver implementation
 * MDCIRQ driver update.
 *
 * 02 17 2016 i-chun.liu
 * [MOLY00140199] MT6292 MDCIRQ and GIC driver implementation
 * Refine MIPSGIC/MDCIRQ driver .
 *
 * 02 02 2016 i-chun.liu
 * [MOLY00140199] MT6292 MDCIRQ and GIC driver implementation
 * ADD ESL modification since there is no MDCIRQ GCR register in 92ESL.
 *
 * 12 22 2015 i-chun.liu
 * [MOLY00140199] MT6292 MDCIRQ and GIC driver implementation
 * update MDCIRQ driver .
 *
 * 10 13 2015 i-chun.liu
 * [MOLY00140199] MT6292 MDCIRQ and GIC driver implementation
 * Update MDCIRQ base.
 *
 * 10 07 2015 i-chun.liu
 * [MOLY00140199] MT6292 MDCIRQ and GIC driver implementation
 * update MDCIRQ registers to 0916 coda definition .
 *
 * 09 30 2015 i-chun.liu
 * [MOLY00135941] UMOLY Trunk merge back for ELBRUS
 * Update MDCIRQ GCR base address reference .
 *
 * 09 30 2015 i-chun.liu
 * [MOLY00135941] UMOLY Trunk merge back for ELBRUS
 * update CIRQ GCR reference address .
 *
 * 09 22 2015 i-chun.liu
 * [MOLY00135941] UMOLY Trunk merge back for ELBRUS
 * UMOLY TRUNK merge back for ELBRUS MDCIRQ.
 *
 * 09 20 2015 i-chun.liu
 * [MOLY00140199] MT6292 MDCIRQ and GIC driver implementation
 * modify CIRQ handshake flow (use APB write for ACK).
 *
 * 09 02 2015 i-chun.liu
 * [MOLY00140199] MT6292 MDCIRQ and GIC driver implementation
 * 	multi vpe cirq support (2VPE).
 *
 * 08 17 2015 i-chun.liu
 * [MOLY00135941] UMOLY Trunk merge back for ELBRUS
 * fix 6291 build error .
 *
 * 08 17 2015 i-chun.liu
 * [MOLY00135941] UMOLY Trunk merge back for ELBRUS
 * add MDCIRQ GCR base in drv_mdcirq_reg.h.
 *
 * 08 06 2015 i-chun.liu
 * [MOLY00135941] UMOLY Trunk merge back for ELBRUS
 * UMOLY trunk call for check in for ELBRUS MDCIRQ.
 *
 * 07 28 2015 i-chun.liu
 * [MOLY00132732] [91+]: CBr merge back dev call for check in
 * CIRQ driver merge back.
 *
 * 04 23 2014 da.wang
 * [MOLY00062016] Fix build error of porting for TK6291
 * Porting TK6291 pcore CIRQ.
 *
 * 05 23 2013 chin-chieh.hung
 * [MOLY00023372] [MT6290][NW-UE SIM] UESIM MOLY Migration - UESIM related changes submission
 * UESIM, cirq support
 *
 * 04 01 2013 chin-chieh.hung
 * [MOLY00011352] [Driver] Update for common devdrv driver
 * add FPGA/ASIC different setting
 *
 * 03 29 2013 chin-chieh.hung
 * [MOLY00011352] [Driver] Update for common devdrv driver
 * mdcirq register definition re-arch
 ****************************************************************************/

#ifndef __DRV_MDCIRQ_REG_H__
#define __DRV_MDCIRQ_REG_H__

#include "reg_base.h"
#include "boot.h"

#if defined(MT6763) || defined(MT6739) || defined(MT6771) || defined(MT6765) || defined(MT6761) || defined(MT6768)
#define MDCIRQ_256_128_4_VERSION 1    //interrupt number/priority/VPEs
#define __MDCIRQ_GCR_SIGNAL_DISABLE__
//#define __MDCIRQ_OSIPI_SPECIAL_FLOW__
#else 
#error
#endif

#if defined(__ESL_ENABLE__) || defined(__ESL_MASE__)
#define __MDCIRQ_GCR_SIGNAL_DISABLE__
#endif

#if MDCIRQ_256_128_4_VERSION

/* Global MDCIRQ Definition  */
#define MDCIRQ_MAX_ISR_NUM                 256
#define MDCIRQ_LOWEST_PRI           (0x7FU)
#define MDCIRQ_HIGHEST_PRI          (0x0U)
#define MDCIRQ_TOTAL_PRI_LEVEL      (128U)   /* Priority Level */
#define MDCIRQ_TOTAL_VPE_NUM        4
#define MDCIRQ_TOTAL_CORE_NUM        2
#define MDCIRQ_TOTAL_VPE_NUM_PER_CORE 2
#define MDCIRQ_YQ_SIGNAL_PER_CORE     4
#define MDCIRQ_TOTAL_IRQ_GROUP_NUM			16
#define MDCIRQ_TOTAL_NMI_GROUP_NUM			2
#define MDCIRQ_TOTAL_STATE_NUM    512
#define MDCIRQ_GROUP_MASK  (0xF)
#define MDCIRQ_PRI_64LEVEL_MASK (0xFFFFFFFFFFFFFFFFULL)

#define MDCIRQ_BASE             (BASE_MADDR_MDCIRQ)
#define MDCIRQ_GCR_BASE         (BASE_ADDR_MDCIRQ_GCR)


//I bit control in GCR 
#define MDCIRQ_GCR_IBIT_CTL_STATUS (GCR_CUSTOM_ADDR+0x108)
#define MDCIRQ_GCR_IBIT_CTL_SET (GCR_CUSTOM_ADDR+0x108)
#define MDCIRQ_GCR_IBIT_CTL_CLR (GCR_CUSTOM_ADDR+0x10C)


/* Start of MDCIRQ APB registers */
#define MDCIRQ_ISAR3100    (MDCIRQ_BASE + 0x0000) //INT status
#define MDCIRQ_ISAR6332    (MDCIRQ_BASE + 0x0004) //INT status
#define MDCIRQ_ISAR9564    (MDCIRQ_BASE + 0x0008) //INT status
#define MDCIRQ_ISAR12796   (MDCIRQ_BASE + 0x000C) //INT status
#define MDCIRQ_ISAR159128    (MDCIRQ_BASE + 0x0010) //INT status
#define MDCIRQ_ISAR191160    (MDCIRQ_BASE + 0x0014) //INT status
#define MDCIRQ_ISAR223192    (MDCIRQ_BASE + 0x0018) //INT status
#define MDCIRQ_ISAR255224   (MDCIRQ_BASE + 0x001C) //INT status

#define MDCIRQ_IMKR3100    (MDCIRQ_BASE + 0x0020) //mask status
#define MDCIRQ_IMKR6332    (MDCIRQ_BASE + 0x0024) //mask status
#define MDCIRQ_IMKR9564    (MDCIRQ_BASE + 0x0028) //mask status
#define MDCIRQ_IMKR12796   (MDCIRQ_BASE + 0x002C) //mask status
#define MDCIRQ_IMKR159128    (MDCIRQ_BASE + 0x0030) //mask status
#define MDCIRQ_IMKR191160    (MDCIRQ_BASE + 0x0034) //mask status
#define MDCIRQ_IMKR223192    (MDCIRQ_BASE + 0x0038) //mask status
#define MDCIRQ_IMKR255224   (MDCIRQ_BASE + 0x003C) //mask status

#define MDCIRQ_IMCR3100    (MDCIRQ_BASE + 0x0040) //mask clr
#define MDCIRQ_IMCR6332    (MDCIRQ_BASE + 0x0044) //mask clr
#define MDCIRQ_IMCR9564    (MDCIRQ_BASE + 0x0048) //mask clr
#define MDCIRQ_IMCR12796   (MDCIRQ_BASE + 0x004C) //mask clr
#define MDCIRQ_IMCR159128    (MDCIRQ_BASE + 0x0050) //mask clr
#define MDCIRQ_IMCR191160    (MDCIRQ_BASE + 0x0054) //mask clr
#define MDCIRQ_IMCR223192    (MDCIRQ_BASE + 0x0058) //mask clr
#define MDCIRQ_IMCR255224   (MDCIRQ_BASE + 0x005C) //mask clr

#define MDCIRQ_IMSR3100    (MDCIRQ_BASE + 0x0060) //mask set
#define MDCIRQ_IMSR6332    (MDCIRQ_BASE + 0x0064) //mask set
#define MDCIRQ_IMSR9564    (MDCIRQ_BASE + 0x0068) //mask set
#define MDCIRQ_IMSR12796   (MDCIRQ_BASE + 0x006C) //mask set
#define MDCIRQ_IMSR159128    (MDCIRQ_BASE + 0x0070) //mask set
#define MDCIRQ_IMSR191160    (MDCIRQ_BASE + 0x0074) //mask set
#define MDCIRQ_IMSR223192    (MDCIRQ_BASE + 0x0078) //mask set
#define MDCIRQ_IMSR255224   (MDCIRQ_BASE + 0x007C) //mask set

#define MDCIRQ_ISTR3100    (MDCIRQ_BASE + 0x0080) //sw trigger
#define MDCIRQ_ISTR6332    (MDCIRQ_BASE + 0x0084) //sw trigger
#define MDCIRQ_ISTR9564    (MDCIRQ_BASE + 0x0088) //sw trigger
#define MDCIRQ_ISTR12796   (MDCIRQ_BASE + 0x008C) //sw trigger
#define MDCIRQ_ISTR159128    (MDCIRQ_BASE + 0x0090) //sw trigger
#define MDCIRQ_ISTR191160    (MDCIRQ_BASE + 0x0094) //sw trigger
#define MDCIRQ_ISTR223192    (MDCIRQ_BASE + 0x0098) //sw trigger
#define MDCIRQ_ISTR255224   (MDCIRQ_BASE + 0x009C) //sw trigger

#define MDCIRQ_ISENR3100   (MDCIRQ_BASE + 0x00A0) //sensitivity 0:pulse, 1:level
#define MDCIRQ_ISENR6332   (MDCIRQ_BASE + 0x00A4) //sensitivity 0:pulse, 1:level
#define MDCIRQ_ISENR9564   (MDCIRQ_BASE + 0x00A8) //sensitivity 0:pulse, 1:level
#define MDCIRQ_ISENR12796  (MDCIRQ_BASE + 0x00AC) //sensitivity 0:pulse, 1:level
#define MDCIRQ_ISENR159128   (MDCIRQ_BASE + 0x00B0) //sensitivity 0:pulse, 1:level
#define MDCIRQ_ISENR191160   (MDCIRQ_BASE + 0x00B4) //sensitivity 0:pulse, 1:level
#define MDCIRQ_ISENR223192   (MDCIRQ_BASE + 0x00B8) //sensitivity 0:pulse, 1:level
#define MDCIRQ_ISENR255224  (MDCIRQ_BASE + 0x00BC) //sensitivity 0:pulse, 1:level

#define MDCIRQ_IBROCAT3100     (MDCIRQ_BASE + 0x00C0) //broadcast 0:dynamic dispatch 1:broadcast
#define MDCIRQ_IBROCAT6332     (MDCIRQ_BASE + 0x00C4) //broadcast 0:dynamic dispatch 1:broadcast
#define MDCIRQ_IBROCAT9564     (MDCIRQ_BASE + 0x00C8) //broadcast 0:dynamic dispatch 1:broadcast
#define MDCIRQ_IBROCAT12796     (MDCIRQ_BASE + 0x00CC) //broadcast 0:dynamic dispatch 1:broadcast
#define MDCIRQ_IBROCAT159128     (MDCIRQ_BASE + 0x00D0) //broadcast 0:dynamic dispatch 1:broadcast
#define MDCIRQ_IBROCAT191160     (MDCIRQ_BASE + 0x00D4) //broadcast 0:dynamic dispatch 1:broadcast
#define MDCIRQ_IBROCAT223192     (MDCIRQ_BASE + 0x00D8) //broadcast 0:dynamic dispatch 1:broadcast
#define MDCIRQ_IBROCAT255224     (MDCIRQ_BASE + 0x00DC) //broadcast 0:dynamic dispatch 1:broadcast

#define MDCIRQ_IVCTR3100   (MDCIRQ_BASE + 0x00E0) //valid interrupt status, consider IRQ mask
#define MDCIRQ_IVCTR6332   (MDCIRQ_BASE + 0x00E4) //valid interrupt status, consider IRQ mask
#define MDCIRQ_IVCTR9564   (MDCIRQ_BASE + 0x00E8) //valid interrupt status, consider IRQ mask
#define MDCIRQ_IVCTR12796  (MDCIRQ_BASE + 0x00EC) //valid interrupt status, consider IRQ mask
#define MDCIRQ_IVCTR159128   (MDCIRQ_BASE + 0x00F0) //valid interrupt status, consider IRQ mask
#define MDCIRQ_IVCTR191160   (MDCIRQ_BASE + 0x00F4) //valid interrupt status, consider IRQ mask
#define MDCIRQ_IVCTR223192   (MDCIRQ_BASE + 0x00F8) //valid interrupt status, consider IRQ mask
#define MDCIRQ_IVCTR255224  (MDCIRQ_BASE + 0x00FC) //valid interrupt status, consider IRQ mask

#define MDCIRQ_INTTYPE3100    (MDCIRQ_BASE + 0x0100) //interrupt type selection (IRQ or NMI)
#define MDCIRQ_INTTYPE6332    (MDCIRQ_BASE + 0x0104) //interrupt type selection (IRQ or NMI)
#define MDCIRQ_INTTYPE9564    (MDCIRQ_BASE + 0x0108) //interrupt type selection (IRQ or NMI)
#define MDCIRQ_INTTYPE12796    (MDCIRQ_BASE + 0x010C) //interrupt type selection (IRQ or NMI)
#define MDCIRQ_INTTYPE159128    (MDCIRQ_BASE + 0x0110) //interrupt type selection (IRQ or NMI)
#define MDCIRQ_INTTYPE191160    (MDCIRQ_BASE + 0x0114) //interrupt type selection (IRQ or NMI)
#define MDCIRQ_INTTYPE223192    (MDCIRQ_BASE + 0x0118) //interrupt type selection (IRQ or NMI)
#define MDCIRQ_INTTYPE255224    (MDCIRQ_BASE + 0x011C) //interrupt type selection (IRQ or NMI)

#define MDCIRQ_ISTR_CLEAR3100    (MDCIRQ_BASE + 0x0120) //sw trigger clear
#define MDCIRQ_ISTR_CLEAR6332    (MDCIRQ_BASE + 0x0124) //sw trigger clear
#define MDCIRQ_ISTR_CLEAR9564    (MDCIRQ_BASE + 0x0128) //sw trigger clear
#define MDCIRQ_ISTR_CLEAR12796   (MDCIRQ_BASE + 0x012C) //sw trigger clear
#define MDCIRQ_ISTR_CLEAR159128    (MDCIRQ_BASE + 0x0130) //sw trigger clear
#define MDCIRQ_ISTR_CLEAR191160    (MDCIRQ_BASE + 0x0134) //sw trigger clear
#define MDCIRQ_ISTR_CLEAR223192    (MDCIRQ_BASE + 0x0138) //sw trigger clear
#define MDCIRQ_ISTR_CLEAR255224   (MDCIRQ_BASE + 0x013C) //sw trigger clear

#define MDCIRQ_ISTR_SET3100    (MDCIRQ_BASE + 0x0140) //sw trigger set
#define MDCIRQ_ISTR_SET6332    (MDCIRQ_BASE + 0x0144) //sw trigger set
#define MDCIRQ_ISTR_SET9564    (MDCIRQ_BASE + 0x0148) //sw trigger set
#define MDCIRQ_ISTR_SET12796   (MDCIRQ_BASE + 0x014C) //sw trigger set
#define MDCIRQ_ISTR_SET159128    (MDCIRQ_BASE + 0x0150) //sw trigger set
#define MDCIRQ_ISTR_SET191160    (MDCIRQ_BASE + 0x0154) //sw trigger set
#define MDCIRQ_ISTR_SET223192    (MDCIRQ_BASE + 0x0158) //sw trigger set
#define MDCIRQ_ISTR_SET255224   (MDCIRQ_BASE + 0x015C) //sw trigger set

#define MDCIRQ_ISENR_CLEAR3100   (MDCIRQ_BASE + 0x0160) //sensitivity clear
#define MDCIRQ_ISENR_CLEAR6332   (MDCIRQ_BASE + 0x0164) //sensitivity clear 
#define MDCIRQ_ISENR_CLEAR9564   (MDCIRQ_BASE + 0x0168) //sensitivity clear
#define MDCIRQ_ISENR_CLEAR12796  (MDCIRQ_BASE + 0x016C) //sensitivity clear 
#define MDCIRQ_ISENR_CLEAR159128   (MDCIRQ_BASE + 0x0170) //sensitivity clear 
#define MDCIRQ_ISENR_CLEAR191160   (MDCIRQ_BASE + 0x0174) //sensitivity clear 
#define MDCIRQ_ISENR_CLEAR223192   (MDCIRQ_BASE + 0x0178) //sensitivity clear 
#define MDCIRQ_ISENR_CLEAR255224   (MDCIRQ_BASE + 0x017C) //sensitivity clear

#define MDCIRQ_ISENR_SET3100   (MDCIRQ_BASE + 0x0180) //sensitivity set
#define MDCIRQ_ISENR_SET6332   (MDCIRQ_BASE + 0x0184) //sensitivity set 
#define MDCIRQ_ISENR_SET9564   (MDCIRQ_BASE + 0x0188) //sensitivity set
#define MDCIRQ_ISENR_SET12796  (MDCIRQ_BASE + 0x018C) //sensitivity set 
#define MDCIRQ_ISENR_SET159128   (MDCIRQ_BASE + 0x0190) //sensitivity set 
#define MDCIRQ_ISENR_SET191160   (MDCIRQ_BASE + 0x0194) //sensitivity set 
#define MDCIRQ_ISENR_SET223192   (MDCIRQ_BASE + 0x0198) //sensitivity set 
#define MDCIRQ_ISENR_SET255224   (MDCIRQ_BASE + 0x019C) //sensitivity set


#define MDCIRQ_WAIT_MODE   (MDCIRQ_BASE + 0x01A0) //interrupt dispatch wait mode
#define MDCIRQ_CIRQ_ACK_MASK  (MDCIRQ_BASE + 0x01A4) //interrupt ack mask register
#define MDCIRQ_CIRQ_GCR_MASK  (MDCIRQ_BASE + 0x01A8) //mask gcr signals to MDCIRQ

#define MDCIRQ_VPE_INTMASK    (MDCIRQ_BASE + 0x01B0)
#define MDCIRQ_VPE_INTMASK_SET    (MDCIRQ_BASE + 0x01B4)
#define MDCIRQ_VPE_INTMASK_CLR    (MDCIRQ_BASE + 0x01B8)

#define MDCIRQ_ULTRA_SEL    (MDCIRQ_BASE + 0x01C0)
#define MDCIRQ_ULTRA_SET    (MDCIRQ_BASE + 0x01C4)
#define MDCIRQ_ULTRA_CLR    (MDCIRQ_BASE + 0x01C8)

#define MDCIRQ_VPE0_INTID_CURR   (MDCIRQ_BASE + 0x0200) //VPE0 current INT ID
#define MDCIRQ_VPE1_INTID_CURR   (MDCIRQ_BASE + 0x0204) //VPE1 current INT ID
#define MDCIRQ_VPE2_INTID_CURR   (MDCIRQ_BASE + 0x0208) //VPE2 current INT ID
#define MDCIRQ_VPE3_INTID_CURR   (MDCIRQ_BASE + 0x020C) //VPE3 current INT ID

#define MDCIRQ_VPE0_PRLV_CURR   (MDCIRQ_BASE + 0x0220) //VPE0 current priority level
#define MDCIRQ_VPE1_PRLV_CURR   (MDCIRQ_BASE + 0x0224) //VPE1 current priority level
#define MDCIRQ_VPE2_PRLV_CURR   (MDCIRQ_BASE + 0x0228) //VPE2 current priority level
#define MDCIRQ_VPE3_PRLV_CURR   (MDCIRQ_BASE + 0x022C) //VPE3 current priority level

#define MDCIRQ_VPE0_INTID_SPUR   (MDCIRQ_BASE + 0x0240) //VPE0 spurious INT ID
#define MDCIRQ_VPE1_INTID_SPUR   (MDCIRQ_BASE + 0x0244) //VPE1 spurious INT ID
#define MDCIRQ_VPE2_INTID_SPUR   (MDCIRQ_BASE + 0x0248) //VPE2 spurious INT ID
#define MDCIRQ_VPE3_INTID_SPUR   (MDCIRQ_BASE + 0x024C) //VPE3 spurious INT ID

#define MDCIRQ_VPEINT_STATUS   (MDCIRQ_BASE + 0x0250)

#define MDCIRQ_VPE0_MIN_PRLV   (MDCIRQ_BASE + 0x0260) //VPE0 minimal priority level
#define MDCIRQ_VPE1_MIN_PRLV   (MDCIRQ_BASE + 0x0264) //VPE1 minimal priority level
#define MDCIRQ_VPE2_MIN_PRLV   (MDCIRQ_BASE + 0x0268) //VPE2 minimal priority level
#define MDCIRQ_VPE3_MIN_PRLV   (MDCIRQ_BASE + 0x026C) //VPE3 minimal priority level

#define MDCIRQ_VPE0_NMIID_CURR   (MDCIRQ_BASE + 0x0280) //VPE0 current NMI ID
#define MDCIRQ_VPE1_NMIID_CURR   (MDCIRQ_BASE + 0x0284) //VPE1 current NMI ID
#define MDCIRQ_VPE2_NMIID_CURR   (MDCIRQ_BASE + 0x0288) //VPE2 current NMI ID
#define MDCIRQ_VPE3_NMIID_CURR   (MDCIRQ_BASE + 0x028C) //VPE3 current NMI ID

#define MDCIRQ_VPE0_NMIID_SPUR   (MDCIRQ_BASE + 0x02A0) //VPE0 spurious NMI ID
#define MDCIRQ_VPE1_NMIID_SPUR   (MDCIRQ_BASE + 0x02A4) //VPE1 spurious NMI ID
#define MDCIRQ_VPE2_NMIID_SPUR   (MDCIRQ_BASE + 0x02A8) //VPE2 spurious NMI ID
#define MDCIRQ_VPE3_NMIID_SPUR   (MDCIRQ_BASE + 0x02AC) //VPE3 spurious NMI ID

#define MDCIRQ_VPE0_ULTRA_PRLV    (MDCIRQ_BASE + 0x02B0)
#define MDCIRQ_VPE1_ULTRA_PRLV    (MDCIRQ_BASE + 0x02B4)
#define MDCIRQ_VPE2_ULTRA_PRLV    (MDCIRQ_BASE + 0x02B8)
#define MDCIRQ_VPE3_ULTRA_PRLV    (MDCIRQ_BASE + 0x02BC)

#define MDCIRQ_VPE0_PREULTRA_PRLV    (MDCIRQ_BASE + 0x02C0)
#define MDCIRQ_VPE1_PREULTRA_PRLV    (MDCIRQ_BASE + 0x02C4)
#define MDCIRQ_VPE2_PREULTRA_PRLV    (MDCIRQ_BASE + 0x02C8)
#define MDCIRQ_VPE3_PREULTRA_PRLV    (MDCIRQ_BASE + 0x02CC)

#define MDCIRQ_PRLV_BASE   (MDCIRQ_BASE + 0x0300) //IRQ priority base
#define MDCIRQ_PRLV(n)   (MDCIRQ_PRLV_BASE + ((n>>2)<<2)) // each IRQ priority

//#define MDCIRQ_VPE_IRQ_BIT   		(MDCIRQ_BASE + 0x0500) //VPE ibit mask GIC output to IRQ

#define MDCIRQ_VPE0_IRQ_STATE   (MDCIRQ_BASE + 0x0400) //VPE0 interrupt status
#define MDCIRQ_VPE1_IRQ_STATE   (MDCIRQ_BASE + 0x0404) //VPE1 interrupt status
#define MDCIRQ_VPE2_IRQ_STATE   (MDCIRQ_BASE + 0x0408) //VPE2 interrupt status
#define MDCIRQ_VPE3_IRQ_STATE   (MDCIRQ_BASE + 0x040C) //VPE3 interrupt status

#define MDCIRQ_IRQ_GROUP_CFG_BASE   (MDCIRQ_BASE + 0x0500) //IRQ group base
#define MDCIRQ_IRQ_GROUP_CFG(n)   (MDCIRQ_IRQ_GROUP_CFG_BASE + ((n>>2)<<2)) // each IRQ group register 

#define MDCIRQ_GROUP_M2V_CFG_BASE   (MDCIRQ_BASE + 0x0600) //group mape to VPE base
#define MDCIRQ_GROUP_M2V_CFG(n)   (MDCIRQ_GROUP_M2V_CFG_BASE + (n<<2)) // each group register 

#define MDCIRQ_GROUPNMI_M2V_CFG_BASE   (MDCIRQ_BASE + 0x0640) //NMI group mape to VPE base
#define MDCIRQ_GROUPNMI_M2V_CFG(n)   (MDCIRQ_GROUPNMI_M2V_CFG_BASE + (n<<2)) // each NMI group register 

#define MDCIRQ_IE_CHECK_MODE       (MDCIRQ_BASE + 0x0700) //IE bit timing duration check mode select
#define MDCIRQ_IE_CHECK_MODE_SET   (MDCIRQ_BASE + 0x0704) //IE_CHECK_MODE set register
#define MDCIRQ_IE_CHECK_MODE_CLR   (MDCIRQ_BASE + 0x0708) //IE_CHECK_MODE clear register

#define MDCIRQ_VPE0_TIMECHECK_THRESHOLD   (MDCIRQ_BASE + 0x0720) //VPE0 interrupt disable duration threshold
#define MDCIRQ_VPE1_TIMECHECK_THRESHOLD   (MDCIRQ_BASE + 0x0724) //VPE1 interrupt disable duration threshold
#define MDCIRQ_VPE2_TIMECHECK_THRESHOLD   (MDCIRQ_BASE + 0x0728) //VPE2 interrupt disable duration threshold
#define MDCIRQ_VPE3_TIMECHECK_THRESHOLD   (MDCIRQ_BASE + 0x072C) //VPE3 interrupt disable duration threshold

#define MDCIRQ_VPE0_TIMECHECK_FRC_COUNTER_MASK   (MDCIRQ_BASE + 0x0750) //VPE0 interrupt disable time
#define MDCIRQ_VPE1_TIMECHECK_FRC_COUNTER_MASK   (MDCIRQ_BASE + 0x0754) //VPE1 interrupt disable time
#define MDCIRQ_VPE2_TIMECHECK_FRC_COUNTER_MASK   (MDCIRQ_BASE + 0x0758) //VPE2 interrupt disable time
#define MDCIRQ_VPE3_TIMECHECK_FRC_COUNTER_MASK   (MDCIRQ_BASE + 0x075C) //VPE3 interrupt disable time
/*
#define MDCIRQ_VPE0_TIMECHECK_FRC_COUNTER_UNMASK   (MDCIRQ_BASE + 0x0780) //VPE0 interrupt enable time
#define MDCIRQ_VPE1_TIMECHECK_FRC_COUNTER_UNMASK   (MDCIRQ_BASE + 0x0784) //VPE1 interrupt enable time
#define MDCIRQ_VPE2_TIMECHECK_FRC_COUNTER_UNMASK   (MDCIRQ_BASE + 0x0788) //VPE2 interrupt enable time
#define MDCIRQ_VPE3_TIMECHECK_FRC_COUNTER_UNMASK   (MDCIRQ_BASE + 0x078C) //VPE3 interrupt enable time
*/
#define MDCIRQ_VPE0_IE_TIMING_CHK_TIMING_SLOT   (MDCIRQ_BASE + 0x07B0) //VPE's  timing slot when sw EI  
#define MDCIRQ_VPE1_IE_TIMING_CHK_TIMING_SLOT   (MDCIRQ_BASE + 0x07B4) //VPE's  timing slot when sw EI   
#define MDCIRQ_VPE2_IE_TIMING_CHK_TIMING_SLOT   (MDCIRQ_BASE + 0x07B8) //VPE's  timing slot when sw EI  
#define MDCIRQ_VPE3_IE_TIMING_CHK_TIMING_SLOT   (MDCIRQ_BASE + 0x07BC) //VPE's  timing slot when sw EI 

#define MDCIRQ_VPE0_RA_MASK   (MDCIRQ_BASE + 0x07C0) //VPE0 return address when DI(interrupt disable)
#define MDCIRQ_VPE1_RA_MASK   (MDCIRQ_BASE + 0x07C4) //VPE1 return address when DI(interrupt disable)
#define MDCIRQ_VPE2_RA_MASK   (MDCIRQ_BASE + 0x07C8) //VPE2 return address when DI(interrupt disable)
#define MDCIRQ_VPE3_RA_MASK   (MDCIRQ_BASE + 0x07CC) //VPE3 return address when DI(interrupt disable)

#define MDCIRQ_VPE0_RA_UNMASK   (MDCIRQ_BASE + 0x07D0) //VPE0 return address when EI(interrupt enable)
#define MDCIRQ_VPE1_RA_UNMASK   (MDCIRQ_BASE + 0x07D4) //VPE1 return address when EI(interrupt enable)
#define MDCIRQ_VPE2_RA_UNMASK   (MDCIRQ_BASE + 0x07D8) //VPE2 return address when EI(interrupt enable)
#define MDCIRQ_VPE3_RA_UNMASK   (MDCIRQ_BASE + 0x07DC) //VPE3 return address when EI(interrupt enable)

#define MDCIRQ_VPE0_TIMECHECK_FRC_COUNTER_CLEAR   (MDCIRQ_BASE + 0x07E0) //VPE0 interrupt enable/disable time clear register
#define MDCIRQ_VPE1_TIMECHECK_FRC_COUNTER_CLEAR   (MDCIRQ_BASE + 0x07E4) //VPE1 interrupt enable/disable time clear register
#define MDCIRQ_VPE2_TIMECHECK_FRC_COUNTER_CLEAR   (MDCIRQ_BASE + 0x07E8) //VPE2 interrupt enable/disable time clear register
#define MDCIRQ_VPE3_TIMECHECK_FRC_COUNTER_CLEAR   (MDCIRQ_BASE + 0x07EC) //VPE3 interrupt enable/disable time clear register

#define MDCIRQ_TIMECHECK_INTERRUPT_STATUS   (MDCIRQ_BASE + 0x07F0) //Timing duration check interrupt status

#define MDCIRQ_IE_STATUS   (MDCIRQ_BASE + 0x07F4) //VPE's IE bit status


#define MDCIRQ_CORE0_WDT_INIT   (MDCIRQ_BASE + 0x0800) 
#define MDCIRQ_CORE1_WDT_INIT   (MDCIRQ_BASE + 0x0804) 

#define MDCIRQ_CORE0_WDT_CNT   (MDCIRQ_BASE + 0x0808) 
#define MDCIRQ_CORE1_WDT_CNT   (MDCIRQ_BASE + 0x080C) 

#define MDCIRQ_CORE0_WDT_START   (MDCIRQ_BASE + 0x0810) 
#define MDCIRQ_CORE1_WDT_START   (MDCIRQ_BASE + 0x0814) 

#define MDCIRQ_CORE0_WDT_PAUSE   (MDCIRQ_BASE + 0x0818) 
#define MDCIRQ_CORE1_WDT_PAUSE   (MDCIRQ_BASE + 0x081C) 

#define MDCIRQ_YQ0_WDT_MASK   (MDCIRQ_BASE + 0x0820) 
#define MDCIRQ_YQ1_WDT_MASK   (MDCIRQ_BASE + 0x0824) 
#define MDCIRQ_YQ2_WDT_MASK   (MDCIRQ_BASE + 0x0828) 
#define MDCIRQ_YQ3_WDT_MASK   (MDCIRQ_BASE + 0x082C) 

#define MDCIRQ_YQ0_WDT_MASK_SET   (MDCIRQ_BASE + 0x0830) 
#define MDCIRQ_YQ1_WDT_MASK_SET   (MDCIRQ_BASE + 0x0834) 
#define MDCIRQ_YQ2_WDT_MASK_SET   (MDCIRQ_BASE + 0x0838) 
#define MDCIRQ_YQ3_WDT_MASK_SET   (MDCIRQ_BASE + 0x083C) 

#define MDCIRQ_YQ0_WDT_MASK_CLEAR   (MDCIRQ_BASE + 0x0840) 
#define MDCIRQ_YQ1_WDT_MASK_CLEAR   (MDCIRQ_BASE + 0x0844) 
#define MDCIRQ_YQ2_WDT_MASK_CLEAR   (MDCIRQ_BASE + 0x0848) 
#define MDCIRQ_YQ3_WDT_MASK_CLEAR   (MDCIRQ_BASE + 0x084C) 

#define MDCIRQ_WDT_INTERRUPT_STATUS   (MDCIRQ_BASE + 0x0850) 

#define MDCIRQ_CORE0_WDT_INTERRUPT_CLEAR   (MDCIRQ_BASE + 0x0854) 
#define MDCIRQ_CORE1_WDT_INTERRUPT_CLEAR   (MDCIRQ_BASE + 0x0858) 

#define MDCIRQ_YQ0_SET_REG   (MDCIRQ_BASE + 0x0B10) //YQ_0 set register
#define MDCIRQ_YQ1_SET_REG   (MDCIRQ_BASE + 0x0B14) //YQ_1 set register
#define MDCIRQ_YQ2_SET_REG   (MDCIRQ_BASE + 0x0B18) //YQ_2 set register
#define MDCIRQ_YQ3_SET_REG   (MDCIRQ_BASE + 0x0B1C) //YQ_3 set register

#define MDCIRQ_YQ0_CLEAR_REG   (MDCIRQ_BASE + 0x0B20) //YQ_0 clear register
#define MDCIRQ_YQ1_CLEAR_REG   (MDCIRQ_BASE + 0x0B24) //YQ_1 clear register
#define MDCIRQ_YQ2_CLEAR_REG   (MDCIRQ_BASE + 0x0B28) //YQ_2 clear register
#define MDCIRQ_YQ3_CLEAR_REG   (MDCIRQ_BASE + 0x0B2C) //YQ_3 clear register

#define MDCIRQ_YQ0_MASK_REG   (MDCIRQ_BASE + 0x0B30) //YQ_0 mask register
#define MDCIRQ_YQ1_MASK_REG   (MDCIRQ_BASE + 0x0B34) //YQ_1 mask register
#define MDCIRQ_YQ2_MASK_REG   (MDCIRQ_BASE + 0x0B38) //YQ_2 mask register
#define MDCIRQ_YQ3_MASK_REG   (MDCIRQ_BASE + 0x0B3C) //YQ_3 mask register

#define MDCIRQ_YQ0_VECTOR_REG   (MDCIRQ_BASE + 0x0B40) //YQ_0 VECTOR register
#define MDCIRQ_YQ1_VECTOR_REG   (MDCIRQ_BASE + 0x0B44) //YQ_1 VECTOR register
#define MDCIRQ_YQ2_VECTOR_REG   (MDCIRQ_BASE + 0x0B48) //YQ_2 VECTOR register
#define MDCIRQ_YQ3_VECTOR_REG   (MDCIRQ_BASE + 0x0B4C) //YQ_3 VECTOR register

#define MDCIRQ_YQ0_MASK_CLEAR_REG   (MDCIRQ_BASE + 0x0B50)
#define MDCIRQ_YQ1_MASK_CLEAR_REG   (MDCIRQ_BASE + 0x0B54)
#define MDCIRQ_YQ2_MASK_CLEAR_REG   (MDCIRQ_BASE + 0x0B58)
#define MDCIRQ_YQ3_MASK_CLEAR_REG   (MDCIRQ_BASE + 0x0B5C)

#define MDCIRQ_YQ0_MASK_SET_REG   (MDCIRQ_BASE + 0x0B60)
#define MDCIRQ_YQ1_MASK_SET_REG   (MDCIRQ_BASE + 0x0B64)
#define MDCIRQ_YQ2_MASK_SET_REG   (MDCIRQ_BASE + 0x0B68)
#define MDCIRQ_YQ3_MASK_SET_REG   (MDCIRQ_BASE + 0x0B6C)

#define MDCIRQ_YQ0_STATUS_REG   (MDCIRQ_BASE + 0x0B70) //YQ_0 status register
#define MDCIRQ_YQ1_STATUS_REG   (MDCIRQ_BASE + 0x0B74) //YQ_1 status register
#define MDCIRQ_YQ2_STATUS_REG   (MDCIRQ_BASE + 0x0B78) //YQ_2 status register
#define MDCIRQ_YQ3_STATUS_REG   (MDCIRQ_BASE + 0x0B7C) //YQ_3 status register

#define MDCIRQ_VPE0_IRQ_ACK     (MDCIRQ_BASE + 0x0C00)
#define MDCIRQ_VPE1_IRQ_ACK     (MDCIRQ_BASE + 0x0C04)
#define MDCIRQ_VPE2_IRQ_ACK     (MDCIRQ_BASE + 0x0C08)
#define MDCIRQ_VPE3_IRQ_ACK     (MDCIRQ_BASE + 0x0C0C)

#define MDCIRQ_VPE0_IRQ_ID     (MDCIRQ_BASE + 0x0C20)
#define MDCIRQ_VPE1_IRQ_ID     (MDCIRQ_BASE + 0x0C24)
#define MDCIRQ_VPE2_IRQ_ID     (MDCIRQ_BASE + 0x0C28)
#define MDCIRQ_VPE3_IRQ_ID     (MDCIRQ_BASE + 0x0C2C)

#define MDCIRQ_VPE0_IRQ_ID_LOAD     (MDCIRQ_BASE + 0x0C30)
#define MDCIRQ_VPE1_IRQ_ID_LOAD     (MDCIRQ_BASE + 0x0C34)
#define MDCIRQ_VPE2_IRQ_ID_LOAD     (MDCIRQ_BASE + 0x0C38)
#define MDCIRQ_VPE3_IRQ_ID_LOAD     (MDCIRQ_BASE + 0x0C3C)

#define MDCIRQ_VPE0_IRQ_PRLV_ACK    (MDCIRQ_BASE + 0x0C60)
#define MDCIRQ_VPE1_IRQ_PRLV_ACK    (MDCIRQ_BASE + 0x0C64)
#define MDCIRQ_VPE2_IRQ_PRLV_ACK    (MDCIRQ_BASE + 0x0C68)
#define MDCIRQ_VPE3_IRQ_PRLV_ACK    (MDCIRQ_BASE + 0x0C6C)

#define MDCIRQ_VPE0_IRQ_ID_RETURN    (MDCIRQ_BASE + 0x0C70)
#define MDCIRQ_VPE1_IRQ_ID_RETURN    (MDCIRQ_BASE + 0x0C74)
#define MDCIRQ_VPE2_IRQ_ID_RETURN    (MDCIRQ_BASE + 0x0C78)
#define MDCIRQ_VPE3_IRQ_ID_RETURN    (MDCIRQ_BASE + 0x0C7C)

#define MDCIRQ_VPE0_NMI_ACK    (MDCIRQ_BASE + 0x0C80)
#define MDCIRQ_VPE1_NMI_ACK    (MDCIRQ_BASE + 0x0C84)
#define MDCIRQ_VPE2_NMI_ACK    (MDCIRQ_BASE + 0x0C88)
#define MDCIRQ_VPE3_NMI_ACK    (MDCIRQ_BASE + 0x0C8C)

#define MDCIRQ_VPE0_NMI_ID    (MDCIRQ_BASE + 0x0CA0)
#define MDCIRQ_VPE1_NMI_ID    (MDCIRQ_BASE + 0x0CA4)
#define MDCIRQ_VPE2_NMI_ID    (MDCIRQ_BASE + 0x0CA8)
#define MDCIRQ_VPE3_NMI_ID    (MDCIRQ_BASE + 0x0CAC)

#define MDCIRQ_VPE0_NMI_ID_LOAD    (MDCIRQ_BASE + 0x0CB0)
#define MDCIRQ_VPE1_NMI_ID_LOAD    (MDCIRQ_BASE + 0x0CB4)
#define MDCIRQ_VPE2_NMI_ID_LOAD    (MDCIRQ_BASE + 0x0CB8)
#define MDCIRQ_VPE3_NMI_ID_LOAD    (MDCIRQ_BASE + 0x0CBC)

#define MDCIRQ_VPE0_NMI_PRLV_ACK    (MDCIRQ_BASE + 0x0CE0)
#define MDCIRQ_VPE1_NMI_PRLV_ACK    (MDCIRQ_BASE + 0x0CE4)
#define MDCIRQ_VPE2_NMI_PRLV_ACK    (MDCIRQ_BASE + 0x0CE8)
#define MDCIRQ_VPE3_NMI_PRLV_ACK    (MDCIRQ_BASE + 0x0CEC)

/*
#define MDCIRQ_VPE0_TIMING_CHK    (MDCIRQ_BASE + 0x0D00)
#define MDCIRQ_VPE1_TIMING_CHK    (MDCIRQ_BASE + 0x0D04)
#define MDCIRQ_VPE2_TIMING_CHK    (MDCIRQ_BASE + 0x0D08)
#define MDCIRQ_VPE3_TIMING_CHK    (MDCIRQ_BASE + 0x0D0C)
*/

#define MDCIRQ_VPE0_ISAR_3100      (MDCIRQ_BASE + 0x0D30)
#define MDCIRQ_VPE1_ISAR_3100      (MDCIRQ_BASE + 0x0D50)
#define MDCIRQ_VPE2_ISAR_3100      (MDCIRQ_BASE + 0x0D70)
#define MDCIRQ_VPE3_ISAR_3100      (MDCIRQ_BASE + 0x0D90)

#define MDCIRQ_HW_IRQ_MASK_3100    (MDCIRQ_BASE + 0x0E30)

#define MDCIRQ_DUMMY   (MDCIRQ_BASE + 0x0E98) //reserved dummy register 

#if !defined(__MDCIRQ_GCR_SIGNAL_DISABLE__)

/* Start of MDCIRQ GCR registers */
#define MDCIRQ_GCR_VPE0_IRQ_ACK     (MDCIRQ_GCR_BASE + 0x0)  //VPE0 IRQ ack
#define MDCIRQ_GCR_VPE1_IRQ_ACK     (MDCIRQ_GCR_BASE + 0x4)  //VPE1 IRQ ack
#define MDCIRQ_GCR_VPE2_IRQ_ACK     (MDCIRQ_GCR_BASE + 0x8)  //VPE2 IRQ ack
#define MDCIRQ_GCR_VPE3_IRQ_ACK     (MDCIRQ_GCR_BASE + 0xC)  //VPE3 IRQ ack

#define MDCIRQ_GCR_VPE0_IRQ_ID     (MDCIRQ_GCR_BASE + 0x20)  //VPE0 IRQ ID
#define MDCIRQ_GCR_VPE1_IRQ_ID     (MDCIRQ_GCR_BASE + 0x24)  //VPE1 IRQ ID
#define MDCIRQ_GCR_VPE2_IRQ_ID     (MDCIRQ_GCR_BASE + 0x28)  //VPE2 IRQ ID
#define MDCIRQ_GCR_VPE3_IRQ_ID     (MDCIRQ_GCR_BASE + 0x2C)  //VPE3 IRQ ID

#define MDCIRQ_GCR_VPE0_IRQ_PRLV_ACK     (MDCIRQ_GCR_BASE + 0x60)  //VPE0 priack, write 1 to ack ISR
#define MDCIRQ_GCR_VPE1_IRQ_PRLV_ACK     (MDCIRQ_GCR_BASE + 0x64)  //VPE1 priack, write 1 to ack ISR
#define MDCIRQ_GCR_VPE2_IRQ_PRLV_ACK     (MDCIRQ_GCR_BASE + 0x68)  //VPE2 priack, write 1 to ack ISR
#define MDCIRQ_GCR_VPE3_IRQ_PRLV_ACK     (MDCIRQ_GCR_BASE + 0x6C)  //VPE3 priack, write 1 to ack ISR

#define MDCIRQ_GCR_VPE0_MIN_PRLV     (MDCIRQ_GCR_BASE + 0x80)  //VPE0 minimum priority level 
#define MDCIRQ_GCR_VPE1_MIN_PRLV     (MDCIRQ_GCR_BASE + 0x84)  //VPE1 minimum priority level 
#define MDCIRQ_GCR_VPE2_MIN_PRLV     (MDCIRQ_GCR_BASE + 0x88)  //VPE2 minimum priority level 
#define MDCIRQ_GCR_VPE3_MIN_PRLV     (MDCIRQ_GCR_BASE + 0x8C)  //VPE3 minimum priority level 

#define MDCIRQ_GCR_VPE0_MIN_PRLV_VALID     (MDCIRQ_GCR_BASE + 0xA0)  //VPE0 minimum priority level valid (RO)
#define MDCIRQ_GCR_VPE1_MIN_PRLV_VALID     (MDCIRQ_GCR_BASE + 0xA4)  //VPE1 minimum priority level valid (RO)
#define MDCIRQ_GCR_VPE2_MIN_PRLV_VALID     (MDCIRQ_GCR_BASE + 0xA8)  //VPE2 minimum priority level valid (RO)
#define MDCIRQ_GCR_VPE3_MIN_PRLV_VALID     (MDCIRQ_GCR_BASE + 0xAC)  //VPE3 minimum priority level valid (RO)

#define MDCIRQ_GCR_VPE0_IRQ_STATE    (MDCIRQ_GCR_BASE + 0xE0)  //VPE0 interrupt status bit
#define MDCIRQ_GCR_VPE1_IRQ_STATE    (MDCIRQ_GCR_BASE + 0xE4)  //VPE1 interrupt status bit
#define MDCIRQ_GCR_VPE2_IRQ_STATE    (MDCIRQ_GCR_BASE + 0xE8)  //VPE2 interrupt status bit
#define MDCIRQ_GCR_VPE3_IRQ_STATE    (MDCIRQ_GCR_BASE + 0xEC)  //VPE3 interrupt status bit

#define MDCIRQ_GCR_VPE0_IRQ_STATE_VALID    (MDCIRQ_GCR_BASE + 0x100)  //VPE0 interrupt status valid (RO)
#define MDCIRQ_GCR_VPE1_IRQ_STATE_VALID    (MDCIRQ_GCR_BASE + 0x104)  //VPE1 interrupt status valid (RO)
#define MDCIRQ_GCR_VPE2_IRQ_STATE_VALID    (MDCIRQ_GCR_BASE + 0x108)  //VPE2 interrupt status valid (RO)
#define MDCIRQ_GCR_VPE3_IRQ_STATE_VALID    (MDCIRQ_GCR_BASE + 0x10C)  //VPE3 interrupt status valid (RO)

#define MDCIRQ_GCR_VPE0_NMI_ID    (MDCIRQ_GCR_BASE + 0x120)  //VPE0 NMI ID
#define MDCIRQ_GCR_VPE1_NMI_ID    (MDCIRQ_GCR_BASE + 0x124)  //VPE1 NMI ID
#define MDCIRQ_GCR_VPE2_NMI_ID    (MDCIRQ_GCR_BASE + 0x128)  //VPE2 NMI ID
#define MDCIRQ_GCR_VPE3_NMI_ID    (MDCIRQ_GCR_BASE + 0x12C)  //VPE3 NMI ID

#define MDCIRQ_GCR_VPE0_NMI_ACK    (MDCIRQ_GCR_BASE + 0x160)  //VPE0 NMI ID ack 
#define MDCIRQ_GCR_VPE1_NMI_ACK    (MDCIRQ_GCR_BASE + 0x164)  //VPE1 NMI ID ack 
#define MDCIRQ_GCR_VPE2_NMI_ACK    (MDCIRQ_GCR_BASE + 0x168)  //VPE2 NMI ID ack 
#define MDCIRQ_GCR_VPE3_NMI_ACK    (MDCIRQ_GCR_BASE + 0x16C)  //VPE3 NMI ID ack 

#define MDCIRQ_GCR_VPE0_NMI_PRLV_ACK    (MDCIRQ_GCR_BASE + 0x180)  //VPE0 NMI priack
#define MDCIRQ_GCR_VPE1_NMI_PRLV_ACK    (MDCIRQ_GCR_BASE + 0x184)  //VPE1 NMI priack
#define MDCIRQ_GCR_VPE2_NMI_PRLV_ACK    (MDCIRQ_GCR_BASE + 0x188)  //VPE2 NMI priack
#define MDCIRQ_GCR_VPE3_NMI_PRLV_ACK    (MDCIRQ_GCR_BASE + 0x18C)  //VPE3 NMI priack

#define MDCIRQ_GCR_VPE0_IRQ_ID_RETURN    (MDCIRQ_GCR_BASE + 0x200)  
#define MDCIRQ_GCR_VPE1_IRQ_ID_RETURN    (MDCIRQ_GCR_BASE + 0x204)  
#define MDCIRQ_GCR_VPE2_IRQ_ID_RETURN    (MDCIRQ_GCR_BASE + 0x208)  
#define MDCIRQ_GCR_VPE3_IRQ_ID_RETURN    (MDCIRQ_GCR_BASE + 0x20C)  

#define MDCIRQ_GCR_VPE0_IRQ_ID_LOAD    (MDCIRQ_GCR_BASE + 0x220)  
#define MDCIRQ_GCR_VPE1_IRQ_ID_LOAD    (MDCIRQ_GCR_BASE + 0x224)  
#define MDCIRQ_GCR_VPE2_IRQ_ID_LOAD    (MDCIRQ_GCR_BASE + 0x228)  
#define MDCIRQ_GCR_VPE3_IRQ_ID_LOAD    (MDCIRQ_GCR_BASE + 0x22C) 

#define MDCIRQ_GCR_VPE0_NMI_ID_LOAD    (MDCIRQ_GCR_BASE + 0x240)  
#define MDCIRQ_GCR_VPE1_NMI_ID_LOAD    (MDCIRQ_GCR_BASE + 0x244)  
#define MDCIRQ_GCR_VPE2_NMI_ID_LOAD    (MDCIRQ_GCR_BASE + 0x248)  
#define MDCIRQ_GCR_VPE3_NMI_ID_LOAD    (MDCIRQ_GCR_BASE + 0x24C) 

#endif /* end of __MDCIRQ_GCR_SIGNAL_DISABLE__ */
#endif /* end of MDCIRQ_256_128_8_VERSION */


#define MDCIRQ_SEN_PULSE            (KAL_TRUE)
#define MDCIRQ_SEN_LEVEL            (KAL_FALSE)

/* CIRQ APB BASE */
#define MDCIRQ_ISAR_BASE  MDCIRQ_ISAR3100
#define MDCIRQ_IMKR_BASE  MDCIRQ_IMKR3100
#define MDCIRQ_IMCR_BASE  MDCIRQ_IMCR3100
#define MDCIRQ_IMSR_BASE  MDCIRQ_IMSR3100
#define MDCIRQ_ISTR_BASE  MDCIRQ_ISTR3100
#define MDCIRQ_ISTR_SET_BASE  MDCIRQ_ISTR_SET3100
#define MDCIRQ_ISTR_CLEAR_BASE  MDCIRQ_ISTR_CLEAR3100
#define MDCIRQ_ISENR_BASE MDCIRQ_ISENR3100
#define MDCIRQ_ISENR_CLEAR_BASE MDCIRQ_ISENR_CLEAR3100
#define MDCIRQ_ISENR_SET_BASE MDCIRQ_ISENR_SET3100
#define MDCIRQ_IBROCAT_BASE     MDCIRQ_IBROCAT3100
#define MDCIRQ_IVCTR_BASE       MDCIRQ_IVCTR3100
#define MDCIRQ_INTTYPE_BASE     MDCIRQ_INTTYPE3100
#define MDCIRQ_VPE_INTID_CURR_BASE  MDCIRQ_VPE0_INTID_CURR
#define MDCIRQ_VPE_PRLV_CURR_BASE   MDCIRQ_VPE0_PRLV_CURR
#define MDCIRQ_VPE_INTID_SPUR_BASE  MDCIRQ_VPE0_INTID_SPUR
#define MDCIRQ_VPE_MIN_PRLV_BASE    MDCIRQ_VPE0_MIN_PRLV
#define MDCIRQ_VPE_NMIID_CURR_BASE    MDCIRQ_VPE0_NMIID_CURR
#define MDCIRQ_VPE_NMIID_SPUR_BASE    MDCIRQ_VPE0_NMIID_SPUR
#define MDCIRQ_VPE_ULTRA_PRLV_BASE    MDCIRQ_VPE0_ULTRA_PRLV
#define MDCIRQ_VPE_PREULTRA_PRLV_BASE    MDCIRQ_VPE0_PREULTRA_PRLV
#define MDCIRQ_VPE_IRQ_STATE_BASE             MDCIRQ_VPE0_IRQ_STATE
#define MDCIRQ_VPE_TIMECHECK_THRESHOLD_BASE      MDCIRQ_VPE0_TIMECHECK_THRESHOLD
#define MDCIRQ_VPE_TIMECHECK_FRC_COUNTER_MASK_BASE    MDCIRQ_VPE0_TIMECHECK_FRC_COUNTER_MASK
#define MDCIRQ_VPE_IE_TIMING_CHK_TIMING_SLOT_BASE MDCIRQ_VPE0_IE_TIMING_CHK_TIMING_SLOT
#define MDCIRQ_VPE_TIMECHECK_FRC_COUNTER_CLEAR_BASE    MDCIRQ_VPE0_TIMECHECK_FRC_COUNTER_CLEAR
#define MDCIRQ_VPE_RA_MASK_BASE MDCIRQ_VPE0_RA_MASK
#define MDCIRQ_VPE_RA_UNMASK_BASE MDCIRQ_VPE0_RA_UNMASK
#define MDCIRQ_CORE_WDT_INIT_BASE MDCIRQ_CORE0_WDT_INIT
#define MDCIRQ_CORE_WDT_CNT_BASE MDCIRQ_CORE0_WDT_CNT
#define MDCIRQ_CORE_WDT_START_BASE MDCIRQ_CORE0_WDT_START
#define MDCIRQ_CORE_WDT_PAUSE_BASE MDCIRQ_CORE0_WDT_PAUSE
#define MDCIRQ_YQ_WDT_MASK_BASE MDCIRQ_YQ0_WDT_MASK
#define MDCIRQ_YQ_WDT_MASK_SET_BASE MDCIRQ_YQ0_WDT_MASK_SET
#define MDCIRQ_YQ_WDT_MASK_CLEAR_BASE MDCIRQ_YQ0_WDT_MASK_CLEAR
#define MDCIRQ_CORE_WDT_INTERRUPT_CLEAR_BASE MDCIRQ_CORE0_WDT_INTERRUPT_CLEAR
#define MDCIRQ_YQ_SET_REG_BASE    MDCIRQ_YQ0_SET_REG
#define MDCIRQ_YQ_CLEAR_REG_BASE     MDCIRQ_YQ0_CLEAR_REG
#define MDCIRQ_YQ_MASK_REG_BASE     MDCIRQ_YQ0_MASK_REG
#define MDCIRQ_YQ_VECTOR_REG_BASE    MDCIRQ_YQ0_VECTOR_REG
#define MDCIRQ_YQ_STATUS_REG_BASE    MDCIRQ_YQ0_STATUS_REG
#define MDCIRQ_YQ_MASK_CLEAR_REG_BASE    MDCIRQ_YQ0_MASK_CLEAR_REG
#define MDCIRQ_YQ_MASK_SET_REG_BASE    MDCIRQ_YQ0_MASK_SET_REG
#define MDCIRQ_VPE_IRQ_ACK_BASE    MDCIRQ_VPE0_IRQ_ACK
#define MDCIRQ_VPE_IRQ_ID_BASE    MDCIRQ_VPE0_IRQ_ID
#define MDCIRQ_VPE_IRQ_ID_LOAD_BASE    MDCIRQ_VPE0_IRQ_ID_LOAD
#define MDCIRQ_VPE_IRQ_PRLV_ACK_BASE    MDCIRQ_VPE0_IRQ_PRLV_ACK
#define MDCIRQ_VPE_IRQ_ID_RETURN_BASE MDCIRQ_VPE0_IRQ_ID_RETURN
#define MDCIRQ_VPE_NMI_ACK_BASE    MDCIRQ_VPE0_NMI_ACK
#define MDCIRQ_VPE_NMI_ID_BASE    MDCIRQ_VPE0_NMI_ID
#define MDCIRQ_VPE_NMI_ID_LOAD_BASE    MDCIRQ_VPE0_NMI_ID_LOAD
#define MDCIRQ_VPE_NMI_PRLV_ACK_BASE    MDCIRQ_VPE0_NMI_PRLV_ACK
#define MDCIRQ_VPE_ISAR_BASE    MDCIRQ_VPE0_ISAR_3100
#define MDCIRQ_HW_IRQ_MASK_BASE    MDCIRQ_HW_IRQ_MASK_3100

#if !defined(__MDCIRQ_GCR_SIGNAL_DISABLE__)
/* CIRQ GCR BASE */
#define MDCIRQ_GCR_VPE_IRQ_ACK_BASE    MDCIRQ_GCR_VPE0_IRQ_ACK
#define MDCIRQ_GCR_VPE_IRQ_ID_BASE    MDCIRQ_GCR_VPE0_IRQ_ID
#define MDCIRQ_GCR_VPE_IRQ_PRLV_ACK_BASE     MDCIRQ_GCR_VPE0_IRQ_PRLV_ACK
#define MDCIRQ_GCR_VPE_MIN_PRLV_BASE    MDCIRQ_GCR_VPE0_MIN_PRLV
#define MDCIRQ_GCR_VPE_MIN_PRLV_VALID_BASE    MDCIRQ_GCR_VPE0_MIN_PRLV_VALID
#define MDCIRQ_GCR_VPE_IRQ_STATE_BASE    MDCIRQ_GCR_VPE0_IRQ_STATE
#define MDCIRQ_GCR_VPE_IRQ_STATE_VALID_BASE     MDCIRQ_GCR_VPE0_IRQ_STATE_VALID
#define MDCIRQ_GCR_VPE_NMI_ID_BASE    MDCIRQ_GCR_VPE0_NMI_ID
#define MDCIRQ_GCR_VPE_NMI_ACK_BASE    MDCIRQ_GCR_VPE0_NMI_ACK
#define MDCIRQ_GCR_VPE_NMI_PRLV_ACK_BASE     MDCIRQ_GCR_VPE0_NMI_PRLV_ACK
#define MDCIRQ_GCR_VPE_IRQ_ID_RETURN_BASE MDCIRQ_GCR_VPE0_IRQ_ID_RETURN
#define MDCIRQ_GCR_VPE_IRQ_ID_LOAD_BASE MDCIRQ_GCR_VPE0_IRQ_ID_LOAD
#define MDCIRQ_GCR_VPE_NMI_ID_LOAD_BASE MDCIRQ_GCR_VPE0_NMI_ID_LOAD
#endif /* end of __MDCIRQ_GCR_SIGNAL_DISABLE__ */

#endif /* end of __DRV_MDCIRQ_REG_H__ */

