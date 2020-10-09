/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2013
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
 *   busmon_reg.h
 *
 * Project:
 * --------
 *   MOLY
 *
 * Description:
 * ------------
 *   Busmon register definition
 *
 * Author:
 * -------
 * -------
 *
 * ==========================================================================
 * $Log$
 *
 * 12 27 2018 liang.yan
 * [MOLY00375135] [Talbot SB call for check-in]Add Talbot build option MT6768 for busmon driver
 *
 * 01 23 2018 liang.yan
 * [MOLY00303659] [Merlot call for check-in]Add Merlot build option (MT6761) for busmon driver
 *
 * 01 23 2018 liang.yan
 * [MOLY00303659] [Merlot call for check-in]Add Merlot build option (MT6761) for busmon driver
 *
 * 11 15 2017 liang.yan
 * [MOLY00288866] [Gen93][HISR] Enable HISR Init Centralization
 * 	Update busmon part
 *
 * 10 25 2017 liang.yan
 * [MOLY00285147] [MT6765]Update busmon build option for cervino
 *
 * 08 25 2017 liang.yan
 * [MOLY00273772] [Sylvia]Add Sylvia build option for bus monitor driver
 *
 * 06 09 2017 liang.yan
 * [MOLY00244888] [ZION]Bus monitor driver build error call for check in
 * 	
 * 	[UMOLYA]Merge ZION project defining
 *
 * 03 02 2017 liang.yan
 * [MOLY00232074] [Change Feature][BIANCO]Adding busmon monitor MO port Latency feature
 *
 * 08 05 2016 liang.yan
 * [MOLY00195782] [Change Feature]93 busmon driver update
 *
 * 03 30 2016 i-chun.liu
 * [MOLY00171939] 93 Busmon check in
 * busmon check in .
 *
 * 01 29 2016 i-chun.liu
 * [MOLY00163360] Busmon driver update
 * fix code defect for ahb_busmon.
 *
 * 08 17 2015 i-chun.liu
 * [MOLY00135941] UMOLY Trunk merge back for ELBRUS
 * bus monitor update for ELBRUS.
 *
 * 06 09 2015 i-chun.liu
 * [MOLY00119728] JADE bring up call for check in  (MDCIRQ and Bus monitor )
 * JADE PCORE BUSMON.
 *
 * 04 07 2015 i-chun.liu
 * [MOLY00106215] TK6291 bus monitor driver update
 * Pcore bus monitor driver update.
 *
 * 12 17 2014 i-chun.liu
 * [MOLY00087840] Update Moly bus monitor driver for denali1
 * Moly bus monitor driver update.
 *
 * 07 29 2014 brian.chiang
 * [MOLY00070757] busmon drvier update
 * Bus monitor driver enhancement
 *
 * 04 23 2014 brian.chiang
 * [MOLY00063514] 6595 busmon driver
 * 6595 busmon deriver porting
 *
 * 12 06 2013 vend_brian.chiang
 * [MOLY00041938] Fix ATEST linking error
 * Merge MT6595_E1_DEV  into MOLY trunk
 *
 * 03 29 2013 vend_hsientang.lee
 * [MOLY00013013] Add Busmon driver
 *
 ****************************************************************************/

#ifndef __BUSMON_REG_H__
#define __BUSMON_REG_H__
#include <reg_base.h>


//#define    DEBUG_APB

#define BASE_DEBUGAPB_MDMCU_AXIMON0      (BASE_MADDR_DBGSYS_1 + 0x6000)
#define BASE_DEBUGAPB_MDINFRA_AXIMON0    (BASE_MADDR_DBGSYS_1 + 0x8000)
    
#if defined(DEBUG_APB)
#define BASE_ADDR_MDMAXIMON0           BASE_DEBUGAPB_MDMCU_AXIMON0
#define BASE_MADDR_MDMCU_AXIMON        BASE_DEBUGAPB_MDMCU_AXIMON0
#define BASE_MADDR_MDINFRA_AXIMON      BASE_DEBUGAPB_MDINFRA_AXIMON0
#define BASE_ADDR_MDMCUSYS             BASE_DEBUGAPB_MDMCU_AXIMON0
#define BASE_ADDR_MDPERISYS            BASE_DEBUGAPB_MDINFRA_AXIMON0    
#else /* Normal APB */
#define BASE_ADDR_MDMAXIMON0           BASE_MADDR_MDMCU_BUSMON
#define BASE_MADDR_MDMCU_AXIMON        BASE_MADDR_MDMCU_BUSMON
#define BASE_MADDR_MDINFRA_AXIMON      BASE_MADDR_MDINFRABUSMON
#define BASE_ADDR_MDMCUSYS             BASE_MADDR_MDMCU_BUSMON
#define BASE_ADDR_MDPERISYS            BASE_MADDR_MDINFRABUSMON    
#endif

    
/*
 * AXI Bus Monitor
 */
#define AXIMON_BASE                             (0)

#define AXIMON_COD_VERSION                      (AXIMON_BASE + 0x0000)
#define AXIMON_DMY_REG                          (AXIMON_BASE + 0x0004)
#define AXIMON_CTL                              (AXIMON_BASE + 0x0010)
#define AXIMON_TST                              (AXIMON_BASE + 0x0014)
#define AXIMON_STS                              (AXIMON_BASE + 0x0018)
#define AXIMON_INT                              (AXIMON_BASE + 0x0020)
#define AXIMON_INT_MSK                          (AXIMON_BASE + 0x0024)

#define AXIMON_IP0_TG                           (AXIMON_BASE + 0x0030)
#define AXIMON_IP0_TMR                          (AXIMON_BASE + 0x0034)
#define AXIMON_IP0_ID_CTL                       (AXIMON_BASE + 0x0040)
#define AXIMON_IP0_VPE                          (AXIMON_BASE + 0x0044)
#define AXIMON_IP0_ADDR                         (AXIMON_BASE + 0x0048)
#define AXIMON_IP0_ADDRMSK                      (AXIMON_BASE + 0x004C)
#define AXIMON_IP0_DATA                         (AXIMON_BASE + 0x0050)
#define AXIMON_IP0_DATAMSK                      (AXIMON_BASE + 0x0060)

#define AXIMON_IP_TG_OFFSET                           (0x0030)
#define AXIMON_IP_TMR_OFFSET                          (0x0034)
#define AXIMON_IP_ID_CTL_OFFSET                       (0x0040)
#define AXIMON_IP_VPE_OFFSET                          (0x0044)
#define AXIMON_IP_ADDR_OFFSET                         (0x0048)
#define AXIMON_IP_ADDRMSK_OFFSET                      (0x004C)
#define AXIMON_IP_DATA_OFFSET                         (0x0050)
#define AXIMON_IP_DATAMSK_OFFSET                      (0x0060)


#define AXIMON_IP1_TG                           (AXIMON_BASE + 0x0070)
#define AXIMON_IP1_TMR                          (AXIMON_BASE + 0x0074)
#define AXIMON_IP1_ID_CTL                       (AXIMON_BASE + 0x0080)
#define AXIMON_IP1_VPE                          (AXIMON_BASE + 0x0084)
#define AXIMON_IP1_ADDR                         (AXIMON_BASE + 0x0088)
#define AXIMON_IP1_ADDRMSK                      (AXIMON_BASE + 0x008C)
#define AXIMON_IP1_DATA                         (AXIMON_BASE + 0x0090)
#define AXIMON_IP1_DATAMSK                      (AXIMON_BASE + 0x00A0)


#define AXIMON_TOT_BUS_CYC                      (AXIMON_BASE + 0x0100)

#define AXIMON_IP0_NON_OV_TRANS_NUM             (AXIMON_BASE + 0x0200)
#define AXIMON_IP0_OV_TRANS_NUM                 (AXIMON_BASE + 0x0204)
#define AXIMON_IP0_NON_WGT_TRANS_CYC            (AXIMON_BASE + 0x0208)
#define AXIMON_IP0_WGT_TRANS_CYC                (AXIMON_BASE + 0x020C)
#define AXIMON_IP0_MAX_TRANS_CYC                (AXIMON_BASE + 0x0210)
#define AXIMON_IP0_MAX_OST_TRANS_NUM            (AXIMON_BASE + 0x0214)

#define AXIMON_IP0_SNAP_INFO0                   (AXIMON_BASE + 0x0300)
#define AXIMON_IP0_SNAP_INFO1                   (AXIMON_BASE + 0x0304) 
#define AXIMON_IP0_SNAP_INFO2                   (AXIMON_BASE + 0x0308)
#define AXIMON_IP0_SNAP_INFO3                   (AXIMON_BASE + 0x030C)
#define AXIMON_IP0_SNAP_INFO4                   (AXIMON_BASE + 0x0310)
#define AXIMON_IP0_SNAP_INFO5                   (AXIMON_BASE + 0x0314)
#define AXIMON_IP0_SNAP_INFO6                   (AXIMON_BASE + 0x0318)
#define AXIMON_IP0_SNAP_INFO7                   (AXIMON_BASE + 0x031C)
#define AXIMON_IP0_SNAP_INFO8                   (AXIMON_BASE + 0x0320)
#define AXIMON_IP0_SNAP_INFO9                   (AXIMON_BASE + 0x0324)
#define AXIMON_IP0_SNAP_INFO10                  (AXIMON_BASE + 0x0328)
#define AXIMON_IP0_SNAP_INFO11                  (AXIMON_BASE + 0x032C)

#define AXIMON_IP1_NON_OV_TRANS_NUM             (AXIMON_BASE + 0x0400)
#define AXIMON_IP1_OV_TRANS_NUM                 (AXIMON_BASE + 0x0404)
#define AXIMON_IP1_NON_WGT_TRANS_CYC            (AXIMON_BASE + 0x0408)
#define AXIMON_IP1_WGT_TRANS_CYC                (AXIMON_BASE + 0x040C)
#define AXIMON_IP1_MAX_TRANS_CYC                (AXIMON_BASE + 0x0410)
#define AXIMON_IP1_MAX_OST_TRANS_NUM            (AXIMON_BASE + 0x0414)

#define AXIMON_IP1_SNAP_INFO0                   (AXIMON_BASE + 0x0500)
#define AXIMON_IP1_SNAP_INFO1                   (AXIMON_BASE + 0x0504) 
#define AXIMON_IP1_SNAP_INFO2                   (AXIMON_BASE + 0x0508)
#define AXIMON_IP1_SNAP_INFO3                   (AXIMON_BASE + 0x050C)
#define AXIMON_IP1_SNAP_INFO4                   (AXIMON_BASE + 0x0510)
#define AXIMON_IP1_SNAP_INFO5                   (AXIMON_BASE + 0x0514)
#define AXIMON_IP1_SNAP_INFO6                   (AXIMON_BASE + 0x0518)
#define AXIMON_IP1_SNAP_INFO7                   (AXIMON_BASE + 0x051C)
#define AXIMON_IP1_SNAP_INFO8                   (AXIMON_BASE + 0x0520)
#define AXIMON_IP1_SNAP_INFO9                   (AXIMON_BASE + 0x0524)
#define AXIMON_IP1_SNAP_INFO10                  (AXIMON_BASE + 0x0528)
#define AXIMON_IP1_SNAP_INFO11                  (AXIMON_BASE + 0x052C)

#define AXIMON_CFG_OFFSET                       (0x40)
#define AXIMON_INFO_OFFSET                      (0x200)

#define AXIMON_IP_NON_OV_TRANS_NUM_OFFSET             (0x0200)
#define AXIMON_IP_OV_TRANS_NUM_OFFSET                 (0x0204)
#define AXIMON_IP_NON_WGT_TRANS_CYC_OFFSET            (0x0208)
#define AXIMON_IP_WGT_TRANS_CYC_OFFSET                (0x020C)
#define AXIMON_IP_MAX_TRANS_CYC_OFFSET                (0x0210)
#define AXIMON_IP_MAX_OST_TRANS_NUM_OFFSET            (0x0214)

#define AXIMON_IP_SNAP_INFO0_OFFSET                   (0x0300)
#define AXIMON_IP_SNAP_INFO1_OFFSET                   (0x0304) 
#define AXIMON_IP_SNAP_INFO2_OFFSET                   (0x0308)
#define AXIMON_IP_SNAP_INFO3_OFFSET                   (0x030C)
#define AXIMON_IP_SNAP_INFO4_OFFSET                   (0x0310)
#define AXIMON_IP_SNAP_INFO5_OFFSET                   (0x0314)
#define AXIMON_IP_SNAP_INFO6_OFFSET                   (0x0318)
#define AXIMON_IP_SNAP_INFO7_OFFSET                   (0x031C)
#define AXIMON_IP_SNAP_INFO8_OFFSET                   (0x0320)
#define AXIMON_IP_SNAP_INFO9_OFFSET                   (0x0324)
#define AXIMON_IP_SNAP_INFO10_OFFSET                  (0x0328)
#define AXIMON_IP_SNAP_INFO11_OFFSET                  (0x032C)

/* Default Vaule */
#define AXIMON_COD_VERSION_DEFAULT              (0x20160608)
#define AXIMON_TST_DEFAULT                      (0x0000000A)


/* Bit Field & Mask */
#define AXIMON_CODA_VERSION_MASK                (0xFFFFFFFF)   /* [31:0] */
#define AXIMON_CODA_VERSION_SHIFT               (0)            /* [31:0] */

#define AXIMON_CTL_START_MASK                   (0x1)          /* [0] */
#define AXIMON_CTL_START_SHIFT                  (0)            /* [0] */

#define AXIMON_TST_SEQ_TRG_MODE_MASK            (0x1)          /* [0] */
#define AXIMON_TST_SEQ_TRG_MODE_SHIFT           (0)            /* [0] */
#define AXIMON_TST_SEQ_CHECK_MODE_MASK          (0x1)          /* [1] */
#define AXIMON_TST_SEQ_CHECK_MODE_SHIFT         (1)            /* [1] */
#define AXIMON_TST_DISABLE_CG_MASK              (0x1)          /* [2] */
#define AXIMON_TST_DISABLE_CG_SHIFT             (2)            /* [2] */
#define AXIMON_TST_CLEAR_AT_BUSIDLE_MASK        (0x1)          /* [3] */
#define AXIMON_TST_CLEAR_AT_BUSIDLE_SHIFT       (3)            /* [3] */
#define AXIMON_TST_SPEED_SIM_MASK               (0x1)          /* [8] */
#define AXIMON_TST_SPEED_SIM_SHIFT              (8)            /* [8] */
#define AXIMON_TST_LYR_AXI_SEL_MASK             (0xF)          /* [19:16] */
#define AXIMON_TST_LYR_AXI_SEL_SHIFT            (16)           /* [19:16] */


#define AXIMON_STS_STAT0_MASK                   (0x3)          /* [1:0] */
#define AXIMON_STS_STAT0_SHIFT                  (0)            /* [1:0] */
#define AXIMON_STS_STAT1_MASK                   (0x3)          /* [5:4] */
#define AXIMON_STS_STAT1_SHIFT                  (4)            /* [5:4] */
#define AXIMON_STS_IP0_CUR_OVERFLOW_MASK        (0x1)          /* [8] */
#define AXIMON_STS_IP0_CUR_OVERFLOW_SHIFT       (8)            /* [8] */
#define AXIMON_STS_IP0_CUR_UNDERFLOW_MASK       (0x1)          /* [9] */
#define AXIMON_STS_IP0_CUR_UNDERFLOW_SHIFT      (9)            /* [9] */
#define AXIMON_STS_IP1_CUR_OVERFLOW_MASK        (0x1)          /* [10] */
#define AXIMON_STS_IP1_CUR_OVERFLOW_SHIFT       (10)           /* [10] */
#define AXIMON_STS_IP1_CUR_UNDERFLOW_MASK       (0x1)          /* [11] */
#define AXIMON_STS_IP1_CUR_UNDERFLOW_SHIFT      (11)           /* [11] */
#define AXIMON_STS_IP0_HIS_OVERFLOW_MASK        (0x1)          /* [12] */
#define AXIMON_STS_IP0_HIS_OVERFLOW_SHIFT       (12)           /* [12] */
#define AXIMON_STS_IP0_HIS_UNDERFLOW_MASK       (0x1)          /* [13] */
#define AXIMON_STS_IP0_HIS_UNDERFLOW_SHIFT      (13)           /* [13] */
#define AXIMON_STS_IP1_HIS_OVERFLOW_MASK        (0x1)          /* [14] */
#define AXIMON_STS_IP1_HIS_OVERFLOW_SHIFT       (14)           /* [14] */
#define AXIMON_STS_IP1_HIS_UNDERFLOW_MASK       (0x1)          /* [15] */
#define AXIMON_STS_IP1_HIS_UNDERFLOW_SHIFT      (15)           /* [15] */
#define AXIMON_STS_IP0_CUR_ID_MISS_MASK         (0x1)          /* [16] */
#define AXIMON_STS_IP0_CUR_ID_MISS_SHIFT        (16)           /* [16] */
#define AXIMON_STS_IP1_CUR_ID_MISS_MASK         (0x1)          /* [17] */
#define AXIMON_STS_IP1_CUR_ID_MISS_SHIFT        (17)           /* [17] */
#define AXIMON_STS_IP0_HIS_ID_MISS_MASK         (0x1)          /* [18] */
#define AXIMON_STS_IP0_HIS_ID_MISS_SHIFT        (18)           /* [18] */
#define AXIMON_STS_IP1_HIS_ID_MISS_MASK         (0x1)          /* [19] */
#define AXIMON_STS_IP1_HIS_ID_MISS_SHIFT        (19)           /* [19] */
#define AXIMON_STS_IP_TRG_INT_MASK              (0x1)          /* [20] */
#define AXIMON_STS_IP_TRG_INT_SHIFT             (20)           /* [20] */
#define AXIMON_STS_MON_REALENABLE_MASK          (0x1)          /* [31] */
#define AXIMON_STS_MON_REALENABLE_SHIFT         (31)           /* [31] */

#define AXIMON_STS_IP0_CUR_OVERFLOW           (1U << AXIMON_STS_IP0_CUR_OVERFLOW_SHIFT)
#define AXIMON_STS_IP0_CUR_UNDERFLOW          (1U << AXIMON_STS_IP0_CUR_UNDERFLOW_SHIFT)
#define AXIMON_STS_IP1_CUR_OVERFLOW           (1U << AXIMON_STS_IP1_CUR_OVERFLOW_SHIFT)
#define AXIMON_STS_IP1_CUR_UNDERFLOW          (1U << AXIMON_STS_IP1_CUR_UNDERFLOW_SHIFT)
#define AXIMON_STS_IP0_CUR_ID_MISS            (1U << AXIMON_STS_IP0_CUR_ID_MISS_SHIFT)
#define AXIMON_STS_IP1_CUR_ID_MISS            (1U << AXIMON_STS_IP1_CUR_ID_MISS_SHIFT)
#define AXIMON_STS_IP0_HIS_OVERFLOW           (1U << AXIMON_STS_IP0_HIS_OVERFLOW_SHIFT)
#define AXIMON_STS_IP0_HIS_UNDERFLOW          (1U << AXIMON_STS_IP0_HIS_UNDERFLOW_SHIFT)
#define AXIMON_STS_IP1_HIS_OVERFLOW           (1U << AXIMON_STS_IP1_HIS_OVERFLOW_SHIFT)
#define AXIMON_STS_IP1_HIS_UNDERFLOW          (1U << AXIMON_STS_IP1_HIS_UNDERFLOW_SHIFT)	
#define AXIMON_STS_IP0_HIS_ID_MISS            (1U << AXIMON_STS_IP0_HIS_ID_MISS_SHIFT)
#define AXIMON_STS_IP1_HIS_ID_MISS            (1U << AXIMON_STS_IP1_HIS_ID_MISS_SHIFT)	
#define AXIMON_STS_MON_REALENABLE             (1U << AXIMON_STS_MON_REALENABLE_SHIFT)

#define AXIMON_INT_MASK                         (0x1)          /* [0] */
#define AXIMON_INT_SHIFT                        (0)            /* [0] */

#define AXIMON_INT_MSK_MASK                     (0x1)          /* [0] */
#define AXIMON_INT_MSK_SHIFT                    (0)            /* [0] */

#define AXIMON_TG_MON_RWSEL_MASK                (0x1)          /* [8] */
#define AXIMON_TG_MON_RWSEL_SHIFT               (8)            /* [8] */
#define AXIMON_TG_MON_MODE_MASK                 (0x1)          /* [9] */
#define AXIMON_TG_MON_MODE_SHIFT                (9)            /* [9] */
#define AXIMON_TG_MON_ENABLE_MASK               (0x1)          /* [10] */
#define AXIMON_TG_MON_ENABLE_SHIFT              (10)           /* [10] */
#define AXIMON_TG_TRG_MODE_MASK                 (0x1)          /* [11] */
#define AXIMON_TG_TRG_MODE_SHIFT                (11)           /* [11] */
#define AXIMON_TG_MON_ALL_MST_MASK              (0x1)          /* [12] */
#define AXIMON_TG_MON_ALL_MST_SHIFT             (12)            /* [12] */
#define AXIMON_TG_SNAP_DATA_ENABLE_MASK         (0x1)          /* [13] */
#define AXIMON_TG_SNAP_DATA_ENABLE_SHIFT        (13)            /* [13] */
#define AXIMON_TG_MON_CNT_MASK                  (0xFFFF)       /* [31:16] */
#define AXIMON_TG_MON_CNT_SHIFT                 (16)           /* [31:16] */

#define AXIMON_TMR_MON_TRG_CYC_MASK             (0xFFFF)       /* [15:0] */ /* R_IPx_AXIMON_TMR */
#define AXIMON_TMR_MON_TRG_CYC_SHIFT            (0)            /* [15:0] */

/* R_IPx_AXIMON_ID */
#define AXIMON_ID_MON_MASTER_MASK               (0xFFFF)       /* [15:0] */ 
#define AXIMON_ID_MON_MASTER_SHIFT              (0)            /* [15:0] */
#define AXIMON_ID_MON_MASTER_MSK_MASK           (0xFFFF)       /* [31:16] */ 
#define AXIMON_ID_MON_MASTER_MSK_SHIFT          (16)            /* [31:16] */

/* R_IPx_AXIMON_VPE */
#define AXIMON_VPE_MON_VPE_MASK                 (0x7)           /* [2:0] */ 
#define AXIMON_VPE_MON_VPE_SHIFT                (0)             /* [2:0] */
#define AXIMON_VPE_MON_VPE_MSK_MASK             (0x7)           /* [6:4] */ 
#define AXIMON_VPE_MON_VPE_MSK_SHIFT            (4)             /* [6:4] */
#define AXIMON_VPE_MON_ULTRA_MASK               (0x3)           /* [9:8] */ 
#define AXIMON_VPE_MON_ULTRA_SHIFT              (8)             /* [9:8] */
#define AXIMON_VPE_MON_ULTRA_MSK_MASK           (0x3)           /* [13:12] */ 
#define AXIMON_VPE_MON_ULTRA_MSK_SHIFT          (12)            /* [13:12] */

#define AXIMON_ADDR_MASK                        (0xFFFFFFFF)   /* [31:0] */
#define AXIMON_ADDR_SHIFT                       (0)            /* [31:0] */

#define AXIMON_ADDRMSK_MASK                     (0xFFFFFFFF)   /* [31:0] */
#define AXIMON_ADDRMSK_SHIFT                    (0)            /* [31:0] */

/* For IPx_AXIMON_DATA */
#define AXIMON_DATA_MASK                       (0xFFFFFFFF)   /* [31:0] */
#define AXIMON_DATA_SHIFT                      (0)            /* [31:0] */

/* For IPx_AXIMON_DATAMSK */
#define AXIMON_DATAMSK_MASK                    (0xFFFFFFFF)   /* [31:0] */
#define AXIMON_DATAMSK_SHIFT                   (0)            /* [31:0] */

#define AXIMON_TOT_BUS_CYC_MASK                 (0xFFFFFF)   /* [23:0] */
#define AXIMON_TOT_BUS_CYC_SHIFT                (0)            /* [23:0] */

#define AXIMON_NON_OV_TRANS_NUM_MASK            (0xFFFFFF)    /* [23:0] */
#define AXIMON_NON_OV_TRANS_NUM_SHIFT           (0)            /* [23:0] */

#define AXIMON_OV_TRANS_NUM_MASK                (0xFFFFFF)    /* [23:0] */
#define AXIMON_OV_TRANS_NUM_SHIFT               (0)            /* [23:0] */

#define AXIMON_NON_WGT_TRANS_CYC_MASK           (0xFFFFFFF)  /* [27:0] */
#define AXIMON_NON_WGT_TRANS_CYC_SHIFT          (0)            /* [27:0] */

#define AXIMON_WGT_TRANS_CYC_MASK               (0xFFFFFFFF)  /* [31:0] */
#define AXIMON_WGT_TRANS_CYC_SHIFT              (0)            /* [31:0] */

#define AXIMON_MAX_TRANS_CYC_MASK               (0xFFFFFF)    /* [23:0] */
#define AXIMON_MAX_TRANS_CYC_SHIFT              (0)            /* [23:0] */

#define AXIMON_MAX_OST_TRANS_NUM_MASK           (0x3F)         /* [5:0] */
#define AXIMON_MAX_OST_TRANS_NUM_SHIFT          (0)            /* [5:0] */

#define AXIMON_SNAP_INFO0_VPE_MASK              (0x7)          /* [2:0] */
#define AXIMON_SNAP_INFO0_VPE_SHIFT             (0)             /* [2:0] */
#define AXIMON_SNAP_INFO0_LEN_MASK              (0xF)           /* [7:4] */
#define AXIMON_SNAP_INFO0_LEN_SHIFT             (4)             /* [7:4] */
#define AXIMON_SNAP_INFO0_SIZE_MASK             (0x7)           /* [10:8] */
#define AXIMON_SNAP_INFO0_SIZE_SHIFT            (8)             /* [10:8] */
#define AXIMON_SNAP_INFO0_ULTRA_MASK            (0x3)           /* [13:12] */
#define AXIMON_SNAP_INFO0_ULTRA_SHIFT           (12)            /* [13:12] */
#define AXIMON_SNAP_INFO0_BURST_MASK            (0x3)           /* [17:16] */
#define AXIMON_SNAP_INFO0_BURST_SHIFT           (16)            /* [17:16] */
#define AXIMON_SNAP_INFO0_LOCK_MASK             (0x3)           /* [19:18] */
#define AXIMON_SNAP_INFO0_LOCK_SHIFT            (18)            /* [19:18] */
#define AXIMON_SNAP_INFO0_CACHE_MASK            (0xF)           /* [23:20] */
#define AXIMON_SNAP_INFO0_CACHE_SHIFT           (20)            /* [23:20] */
#define AXIMON_SNAP_INFO0_PROT_MASK             (0x7)           /* [26:24] */
#define AXIMON_SNAP_INFO0_PROT_SHIFT            (24)            /* [26:24] */
#define AXIMON_SNAP_INFO0_RESP_MASK             (0x3)           /* [29:28] */
#define AXIMON_SNAP_INFO0_RESP_SHIFT            (28)            /* [29:28] */

#define AXIMON_SNAP_INFO1_QID_MASK              (0xFFFF)        /* [15:0] */
#define AXIMON_SNAP_INFO1_QID_SHIFT             (0)             /* [15:0] */
#define AXIMON_SNAP_INFO1_CNT_MASK              (0xFFFF)       /* [31:16] */
#define AXIMON_SNAP_INFO1_CNT_SHIFT             (16)            /* [31:16] */

#define AXIMON_SNAP_INFO2_ADDRESS_MASK          (0xFFFFFFFF)   /* [31:0] */
#define AXIMON_SNAP_INFO2_ADDRESS_SHIFT         (0)             /* [31:0] */

#define AXIMON_SNAP_INFO3_STRB0_MASK            (0xFFFF)        /* [15:0] */
#define AXIMON_SNAP_INFO3_STRB0_SHIFT           (0)             /* [15:0] */
#define AXIMON_SNAP_INFO3_STRB1_MASK            (0xFFFF)        /* [31:16] */
#define AXIMON_SNAP_INFO3_STRB1_SHIFT           (16)            /* [31:16] */

#define AXIMON_SNAP_INFO4_DATA00_MASK           (0xFFFFFFFF)    /* [31:0] */
#define AXIMON_SNAP_INFO4_DATA00_SHIFT          (0)             /* [31:0] */
#define AXIMON_SNAP_INFO5_DATA01_MASK           (0xFFFFFFFF)    /* [31:0] */
#define AXIMON_SNAP_INFO5_DATA01_SHIFT          (0)             /* [31:0] */
#define AXIMON_SNAP_INFO6_DATA02_MASK           (0xFFFFFFFF)    /* [31:0] */
#define AXIMON_SNAP_INFO6_DATA02_SHIFT          (0)             /* [31:0] */
#define AXIMON_SNAP_INFO7_DATA03_MASK           (0xFFFFFFFF)    /* [31:0] */
#define AXIMON_SNAP_INFO7_DATA03_SHIFT          (0)             /* [31:0] */

#define AXIMON_SNAP_INFO8_DATA10_MASK           (0xFFFFFFFF)    /* [31:0] */
#define AXIMON_SNAP_INFO8_DATA10_SHIFT          (0)             /* [31:0] */
#define AXIMON_SNAP_INFO9_DATA11_MASK           (0xFFFFFFFF)    /* [31:0] */
#define AXIMON_SNAP_INFO9_DATA11_SHIFT          (0)             /* [31:0] */
#define AXIMON_SNAP_INFO10_DATA12_MASK          (0xFFFFFFFF)    /* [31:0] */
#define AXIMON_SNAP_INFO10_DATA12_SHIFT         (0)             /* [31:0] */
#define AXIMON_SNAP_INFO11_DATA13_MASK          (0xFFFFFFFF)    /* [31:0] */
#define AXIMON_SNAP_INFO11_DATA13_SHIFT         (0)             /* [31:0] */

#define AXIMON_SNAP_DATA_NUMBER                 (8)

#define AXIMON_MATCH_NONE                       (0xFFFFFFFF)
#define AXIMON_MATCH_ALL                        (0)

#define AXIMON_MDMCU_LAYER_SELECT               (BASE_MADDR_MDPERIMISC + 0x504)
#define AXIMON_MDINFRA_LAYER_SELECT             (BASE_MADDR_MDPERIMISC + 0x500)

/* ************************************************************************************************
Below is for Bus recorder 
************************************************************************************************ */
#define BUSREC_REG_RECORDER_CTL       (AXIMON_BASE + 0x700U)
#define BUSREC_REG_RECORDER_TEST      (AXIMON_BASE + 0x704U)

#define BUSREC_REG_IP0_BUFF_CNT       (AXIMON_BASE + 0x800U)
#define BUSREC_REG_IP0_GRP1_ID_STS    (AXIMON_BASE + 0x900U) /* there 1~32 ID STS*/
#define BUSREC_REG_IP0_GRP1_ADDR_STS  (AXIMON_BASE + 0x904U) /* there 1~32 ADDR STS*/
#define BUSREC_REG_IP0_GRP1_ID_STS_(n)            (AXIMON_BASE + 0x900U + (n) * 0x8)
#define BUSREC_REG_IP0_GRP1_ADDR_STS_(n)          (AXIMON_BASE + 0x904U + (n) * 0x8)

#define BUSREC_REG_IP1_BUFF_CNT       (AXIMON_BASE + 0xA00U)
#define BUSREC_REG_IP1_GRP1_ID_STS    (AXIMON_BASE + 0xB00U) /* there 1~32 ID STS*/
#define BUSREC_REG_IP1_GRP1_ADDR_STS  (AXIMON_BASE + 0xB04U) /* there 1~32 ADDR STS*/
#define BUSREC_REG_IP1_GRP1_ID_STS_(n)            (AXIMON_BASE + 0xB00U + (n) * 0x8)
#define BUSREC_REG_IP1_GRP1_ADDR_STS_(n)          (AXIMON_BASE + 0xB04U + (n) * 0x8)

#define BUSREC_STS_OFFSET             (0x8)

#define BUSREC_REG_CURR_IP0_ID_STS   (AXIMON_BASE + 0xC00U)
#define BUSREC_REG_CURR_IP0_ADDR_STS (AXIMON_BASE + 0xC04U)
#define BUSREC_REG_CURR_IP0_CTRL_STS (AXIMON_BASE + 0xC08U)

#define BUSREC_REG_CURR_IP1_ID_STS   (AXIMON_BASE + 0xC10U)
#define BUSREC_REG_CURR_IP1_ADDR_STS (AXIMON_BASE + 0xC14U)
#define BUSREC_REG_CURR_IP1_CTRL_STS (AXIMON_BASE + 0xC18U)

/* REG_RECORDER_CTL */
#define BUSREC_CTL_TEST_MODE_MASK                   (0x1)          /* [2] */
#define BUSREC_CTL_TEST_MODE_SHIFT                  (2)            /* [2] */
#define BUSREC_CTL_GATE_AR_MASK                     (0x1)          /* [4] */
#define BUSREC_CTL_GATE_AR_SHIFT                    (4)            /* [4] */
#define BUSREC_CTL_GATE_AW_MASK                     (0x1)          /* [5] */
#define BUSREC_CTL_GATE_AW_SHIFT                    (5)            /* [5] */
#define BUSREC_CTL_GATE_R_RESP_MASK                 (0x1)          /* [6] */
#define BUSREC_CTL_GATE_R_RESP_SHIFT                (6)            /* [6] */
#define BUSREC_CTL_GATE_B_RESP_MASK                 (0x1)          /* [7] */
#define BUSREC_CTL_GATE_B_RESP_SHIFT                (7)            /* [7] */
#define BUSREC_CTL_GATE_W_RESP_MASK                 (0x1)          /* [8] */
#define BUSREC_CTL_GATE_W_RESP_SHIFT                (8)            /* [8] */

/* REG_RECORDER_CTL */
#define BUSREC_TEST_MODE            (1U << 2)
#define BUSREC_GATE_AR_BIT          (4)
#define BUSREC_GATE_AW_BIT          (5)
#define BUSREC_GATE_R_RESP_BIT      (6)
#define BUSREC_GATE_B_RESP_BIT      (7)	
#define BUSREC_GATE_W_RESP_BIT      (8)	
#define BUSREC_GATE_AR              (1U<<BUSREC_GATE_AR_BIT)
#define BUSREC_GATE_AW              (1U<<BUSREC_GATE_AW_BIT)
#define BUSREC_GATE_R_RESP          (1U<<BUSREC_GATE_R_RESP_BIT)
#define BUSREC_GATE_B_RESP          (1U<<BUSREC_GATE_B_RESP_BIT)	
#define BUSREC_GATE_W_RESP          (1U<<BUSREC_GATE_W_RESP_BIT)    

/* REG_RECORDER_TEST */
#define BUSREC_TEST_TRANS_ADD_MASK                   (0x1)          /* [0] */
#define BUSREC_TEST_TRANS_ADD_SHIFT                  (0)            /* [0] */
#define BUSREC_TEST_TRANS_ADD_ID_MASK                (0xFF)         /* [15:8] */
#define BUSREC_TEST_TRANS_ADD_ID_SHIFT               (8)            /* [15:8] */
#define BUSREC_TEST_TRANS_SUB_MASK                   (0x1)          /* [16] */
#define BUSREC_TEST_TRANS_SUB_SHIFT                  (16)            /* [16] */
#define BUSREC_TEST_TRANS_SUB_ID_MASK                (0xFF)         /* [31:24] */
#define BUSREC_TEST_TRANS_SUB_ID_SHIFT               (24)            /* [31:24] */

/* REG_RECORDER_TEST */
#define BUSREC_TRANS_ADD            (1U << 0)
#define BUSREC_ADD_ID_SHIFT         (8)
#define BUSREC_ADD_ID_MASK          (0xFF)
#define BUSREC_TRANS_SUB            (1U << 16)
#define BUSREC_SUB_ID_SHIFT         (24)
#define BUSREC_SUB_ID_MASK          (0xFF)

/* ************************************************************************************************ 
Above is for Bus recorder 
************************************************************************************************ */

#endif /* end of __BUSMON_REG_H__ */

