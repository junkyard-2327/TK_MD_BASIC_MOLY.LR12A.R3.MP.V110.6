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
 *   drv_busmon.h
 *
 * Project:
 * --------
 *   MOLY
 *
 * Description:
 * ------------
 *   Header file for Bus monitor control
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
 * 11 30 2017 liang.yan
 * [MOLY00293301] [Change Feature][BUSMON]Modify APB latency limition to 5us
 *
 * 11 15 2017 liang.yan
 * [MOLY00288866] [Gen93][HISR] Enable HISR Init Centralization
 * 	Update busmon part
 *
 * 10 25 2017 liang.yan
 * [MOLY00285147] [MT6765]Update busmon build option for cervino
 *
 * 09 15 2017 liang.yan
 * [MOLY00277630] [Gen93]Update MDMCU Busmon APB access latency monitor policy
 * 	
 * 	[UMOLYA/TRUNK]busmon
 *
 * 08 25 2017 liang.yan
 * [MOLY00273772] [Sylvia]Add Sylvia build option for bus monitor driver
 *
 * 06 09 2017 liang.yan
 * [MOLY00244888] [ZION]Bus monitor driver build error call for check in
 * 	
 * 	[UMOLYA]Merge ZION project defining
 *
 * 06 07 2017 liang.yan
 * [MOLY00248491] [MT6763][Gen93][System Service][MDCIRQ] Debugging code for GPT IRQ not entered issue
 * 	[UMOLYA]Revert busmon layer id to PWB in initial stage
 *
 * 06 06 2017 liang.yan
 * [MOLY00248491] [MT6763][Gen93][System Service][MDCIRQ] Debugging code for GPT IRQ not entered issue
 * 	
 * 	[UMOLYA]Rollback the bus monitor configuration for MDCIRQ issue
 *
 * 05 15 2017 yen-chun.liu
 * [MOLY00248491] [MT6763][Gen93][System Service][MDCIRQ] Debugging code for GPT IRQ not entered issue
 * busmon debug code for MDCIRQ.
 *
 * 05 10 2017 liang.yan
 * [MOLY00242841] [SE2 Internal CR][Bianco][N1] Kernel API Dump,0,0,99,/data/core/,1,,EMI MPU,Fri Apr 14 23:02:16 CST 2017 @ 2017-04-14 23:02:16.77644,1,2372648
 * 	Remove busmon debug code for MPU violation in TRUNK
 *
 * 05 05 2017 liang.yan
 * [MOLY00242841] [SE2 Internal CR][Bianco][N1] Kernel API Dump,0,0,99,/data/core/,1,,EMI MPU,Fri Apr 14 23:02:16 CST 2017 @ 2017-04-14 23:02:16.77644,1,2372648
 * 	[TRUNK]Add MDINFRA busmon debug for mpu violation
 *
 * 05 03 2017 liang.yan
 * [MOLY00242841] [SE2 Internal CR][Bianco][N1] Kernel API Dump,0,0,99,/data/core/,1,,EMI MPU,Fri Apr 14 23:02:16 CST 2017 @ 2017-04-14 23:02:16.77644,1,2372648
 * 	[TRUNK]bus monitor mo debug for MPU violation
 *
 * 05 02 2017 liang.yan
 * [MOLY00244750] [System Service][MDGDMA][MT6763] Update GDMA debug log for DDL fail.
 * 	Change MDMCU/MDINFRA busmon parking layer to default point
 *
 * 04 25 2017 liang.yan
 * [MOLY00245013] [BIANCO][MT6763][RDIT][PHONE][Overnight][HQ][MTBF][Lab][Ericsson]Externel (EE) [Others] MD long time no response
 * 	[TRUNK]Change MDMCU busmon parking layer to MCU2EMI
 *
 * 04 14 2017 liang.yan
 * [MOLY00241937] [VTF_SMT][MT6293][SMT][Bianco][MT6763]Externel (EE),0,0,99,/data/core/,1,modem,md1:(USIP0_USIP0),[ASSERT] file:md32/usip/common/service/loader/src/loader.c line:1086 when overnight cal(1/601times)
 * 	[UMOLYA]Change mdinfra busmon parking layer after MI
 *
 * 03 30 2017 liang.yan
 * [MOLY00238383] [Change Feature][BUSMON]Change MDMCU busmon parking to PWB
 *
 * 03 15 2017 liang.yan
 * [MOLY00235447] [Change Feature][SS][BUSMON]Add busmon profiling API for user
 *
 * 03 02 2017 liang.yan
 * [MOLY00232074] [Change Feature][BIANCO]Adding busmon monitor MO port Latency feature
 *
 * 02 13 2017 i-chun.liu
 * [MOLY00228094] [Bianco][Bringup] DEV patch back
 * merge back busmon MO port setting.
 *
 * 02 03 2017 i-chun.liu
 * [MOLY00227643] [Bianco Bring-up][Gen93/INIT/BUSMON] Change MDMCU BUSMON to MO port at init stage.
 * Change MDMCU BUSMON to MO port at init stage.
 *
 * 08 05 2016 liang.yan
 * [MOLY00195782] [Change Feature]93 busmon driver update
 *
 * 05 30 2016 i-chun.liu
 * [MOLY00171836] 93 MDCIRQ driver implementation
 * workaround for CIRQ driver.
 *
 * 03 30 2016 i-chun.liu
 * [MOLY00171939] 93 Busmon check in
 * busmon check in .
 *
 * 10 07 2015 i-chun.liu
 * [MOLY00140199] MT6292 MDCIRQ and GIC driver implementation
 * Update bus monitor IRQ code for ELBRUS.
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
 * pcore busmonitor driver update to prevent modis build fail.
 *
 * 04 07 2015 i-chun.liu
 * [MOLY00106215] TK6291 bus monitor driver update
 * Pcore bus monitor driver update.
 *
 * 07 29 2014 brian.chiang
 * [MOLY00070757] busmon drvier update
 * Bus monitor driver enhancement
 *
 * 04 23 2014 brian.chiang
 * [MOLY00063514] 6595 busmon driver
 * 6595 busmon deriver porting
 *
 * 02 21 2014 i-chun.liu
 * [MOLY00057041] Solve MT6290 bus monitor driver API bug
 * bus monitor bug
 *
 * 05 31 2013 vend_hsientang.lee
 * [MOLY00024631] Update busmon driver
 * Use non-post-write to get accurate counter
 *
 * 03 29 2013 vend_hsientang.lee
 * [MOLY00013013] Add Busmon driver
 *
 ****************************************************************************/


#ifndef __DRV_BUSMON_H__
#define __DRV_BUSMON_H__

#if defined(__ASSEMBLER__)

.macro BUSMON_PRE_CONFIG
.set push
.set nomips16
    lui   t1, 0xA031
    addiu t1, t1, 0x10
    sw    zero, 0(t1)
    sync  0x3
    lui   t0, 0xA1FF
    lw    t1,0(t0)
    sw    t1,0(t0)
    lui   t1, 0xA006
    addiu t1, t1, 0x504
    addiu t0, zero, 0x4
    sw	  t0, 0(t1)
    sync  0x3
    lui   t0, 0xA1FF
    lw	  t1,0(t0)
    sw	  t1,0(t0)
    lui   t1, 0xA031
    addiu t1, t1, 0x10
    addiu t0, zero, 0x1
    sw	  t0, 0(t1)
    sync  0x3
    lui   t0, 0xA1FF
    lw	  t1,0(t0)
    sw	  t1,0(t0)
.set pop
.endm BUSMON_PRE_CONFIG
#else

#include "kal_public_defs.h"
#include "irqid.h"
#include "busmon_reg.h"


/*******************************************************************************
 * Define Chip-dependet settings.
 *******************************************************************************/
typedef enum {
   MDMCUSYS_BUSMON_IRQID = MD_IRQID_MDMCU_BUSMON_MATCH_STS,
   MDPERISYS_BUSMON_IRQID = MD_IRQID_MDINFRA_BUSMON_MATCH_STS,
   MD_BUSMON_IRQID_NUM = 2,
} drv_busmon_irqid_t;	


/*******************************************************************************
 * Define constants.
 *******************************************************************************/
/* MD AXI BusMon */
typedef enum {
   MONID_MDMCU_AXIMON = 0,  /* MD_AXImon_1 */
   MONID_MDINFRA_AXIMON,    /* MD_AXImon_2 */

   MONID_MDAXI_MAX
} drv_aximon_monid_md_t;


typedef drv_aximon_monid_md_t drv_aximon_monid_t;
#define MAX_AXIMON_NUM      MONID_MDAXI_MAX

/*
*  Define 15us which is the max latency time from mcu to apb read access
*  bus clk is 432MHz in BIANCO(MT6763) & SYLVIA(MT6771) & Cervino(MT6765), so the limit bus cycle count is 0x1950 in BIANCO & SYLVIA
*  bus clk is 300MHz(fixed) in ZION(MT6739), so the limit bus cycle count is 0x1194 in ZION
*/
#if defined(MT6763)||defined(MT6771)||defined(MT6765)||defined(MT6295M)||defined(MT6761)||defined(MT6768)
#define MCU2REG_LIMITED_LATENCY_CNT   0x870   //0x1B0 1us, 0x1950 15us, 0x870 5us
#endif

#if defined(MT6739)
#define MCU2REG_LIMITED_LATENCY_CNT   0x5DC   //0x1194 15us, 0x5DC 5us
#endif

#define MO_LATENCY_RECORD_NUM     20

/*
 * Busmon layer select id
 */
typedef enum {
   /* MD_AXImon_1 */
   BUSMON_BUSID_MDMCUSYS_START = 0UL,   
   BUSMON_BUSID_MDMCU_EMI=BUSMON_BUSID_MDMCUSYS_START,   
   BUSMON_BUSID_IA_MM=1,
   BUSMON_BUSID_IA_MO=2,
   BUSMON_BUSID_uSIP_APB=3,
   BUSMON_BUSID_IA_MO_PWB=4,  
   BUSMON_BUSID_MDMCUSYS_END=5,   
   /* busmon on MD INFRA */
   BUSMON_BUSID_MDINFRA_START = 0,   
   BUSMON_BUSID_MDINFRA_EMI = BUSMON_BUSID_MDINFRA_START,
   BUSMON_BUSID_MDINFRA_IOCU = 1,
   BUSMON_BUSID_MDINFRA_END = 2,  
  
} busmon_busid_t;  

typedef enum {
   BUSMON_MON_DISABLE,
   BUSMON_MON_ENABLE
} drv_busmon_active_t;

typedef enum {
   BUSMON_MON_STATE_INACTIVE,
   BUSMON_MON_STATE_ACTIVE
} drv_busmon_mon_state_t;

/* Busmon internal IP */
typedef enum {
   BUSMON_IP0,
   BUSMON_IP1,

   BUSMON_IP_MAX
} drv_busmon_ip_t;

/* Busmon IP status */
typedef enum {
   IP_IDLE = 0,
   IP_REAL_ENABLE = 1,
   IP_STOP = 2,
} busmon_ip_status_t;

/* AXImon Read/Write Selection */
typedef enum {
   AXIMON_RWSEL_WRITE=0,
   AXIMON_RWSEL_READ=1,

   AXIMON_RWSEL_MAX
} drv_aximon_rwsel_t;

typedef enum {
   START_ORDER_IP0_IP1=0,
   STOP_ORDER_IP0_IP1=1,
   ORDER_IP0_IP1_MAX=2   
} drv_busmon_mon_seq_check_mode_t;

/*
 * Busmon Target Monitor Mode
 */
typedef enum {
   BUSMON_TG_MON_MODE_SNAP,
   BUSMON_TG_MON_MODE_MONITOR,

   BUSMON_TG_MON_MODE_MAX
} drv_busmon_tg_mon_mode_t;

/* Busmon Trigger Mode */
typedef enum {
   BUSMON_TRG_ADDRDATA,                 /* Address & Data Trigger */
   BUSMON_TRG_CYCLE,                    /* Cycle Trigger */

   BUSMON_TRG_MAX
} drv_busmon_trg_mode_t;

typedef enum {
   MON_VPE_0 = 0,     /*93 only include 2 cores, core0 and core1*/
   MON_VPE_1 = 4,
   MON_VPE_2 = 1,
   MON_VPE_3 = 5,   
} busmon_vpe_id_t;

/*
 * Busmon target selection - master id
 * For AXI, master id is to select transaction ID
 * Here only list MDMCU layer0,1,2 master id, we don't care master id from uSIP(layer3)
 */

typedef enum {
   /*MDMCU master id*/
   BUSMON_TGID_IA_MM_NONCACHE_RW_CORE0_VPE0=16,   //0x10  MM port layer1 (BUSMON_BUSID_IA_MM)
   BUSMON_TGID_IA_MM_NONCACHE_RW_CORE1_VPE0=17,   //0x11  MM port layer1
   BUSMON_TGID_IA_MM_NONCACHE_RW_IOCU=20,         //0x14  MM port layer1
   BUSMON_TGID_IA_MM_NONCACHE_RW_CORE0_VPE1=24,   //0x18  MM port layer1
   BUSMON_TGID_IA_MM_NONCACHE_RW_CORE1_VPE1=25,   //0x19  MM port layer1

   BUSMON_TGID_IA_MM_CACHE_W=7,                   //0x7  MM port layer1 outstanding capability is 8, master id always 7
   BUSMON_TGID_IA_MM_CACHE_R=0,                   // Note: may be 0x0~0x6, 0x8~0xF, outstanding capability is 16

   BUSMON_TGID_IA_MO_NONBUF_RW_CORE0=0,           //0x0 MO port layer2 (BUSMON_BUSID_IA_MO)
   BUSMON_TGID_IA_MO_NONBUF_RW_CORE1=1,           //0x1 MO port layer2

   BUSMON_TGID_IA_MO_BUF_W=15,                    //0xF MO port layer2 outstanding capability is 8, master id always 15

   BUSMON_TGID_IA_MM_NONCACHE_RW_CORE0_VPE0_EMI=40,   //0b1000000  MM port layer0 (BUSMON_BUSID_MDMCU_EMI) (MM->EMI )
   BUSMON_TGID_IA_MM_NONCACHE_RW_CORE1_VPE0_EMI=44,   //0b1000100  MM port layer0 (MM->EMI )
   BUSMON_TGID_IA_MM_NONCACHE_RW_IOCU_EMI=50,         //0b1010000  MM port layer0 (MM->EMI )
   BUSMON_TGID_IA_MM_NONCACHE_RW_CORE0_VPE1_EMI=60,   //0b1100000  MM port layer0 (MM->EMI )
   BUSMON_TGID_IA_MM_NONCACHE_RW_CORE1_VPE1_EMI=64,   //0b1100100  MM port layer0 (MM->EMI )

   BUSMON_TGID_IA_MM_CACHE_W_EMI=28,                  //0b11100  MM port layer0 (MM->EMI )
   BUSMON_TGID_IA_MM_CACHE_R_EMI=0,                   // Note: may be 0x0~0x6, 0x8~0xF(need append 2'b00 at the LSB of the original id)
                                                                       
   BUSMON_TGID_IA_MM_NONCACHE_RW_CORE0_VPE0_MML2_EMI=41,   //0b1000001  MM port layer0 (BUSMON_BUSID_MDMCU_EMI) (MM->MML2_MMU->EMI )
   BUSMON_TGID_IA_MM_NONCACHE_RW_CORE1_VPE0_MML2_EMI=45,   //0b1000101  MM port layer0 (MM->MML2_MMU->EMI )
   BUSMON_TGID_IA_MM_NONCACHE_RW_IOCU_MML2_EMI=51,         //0b1010001  MM port layer0 (MM->MML2_MMU->EMI )
   BUSMON_TGID_IA_MM_NONCACHE_RW_CORE0_VPE1_MML2_EMI=61,   //0b1100001  MM port layer0 (MM->MML2_MMU->EMI )
   BUSMON_TGID_IA_MM_NONCACHE_RW_CORE1_VPE1_MML2_EMI=65,   //0b1100101  MM port layer0 (MM->MML2_MMU->EMI )

   BUSMON_TGID_IA_MM_CACHE_W_MML2_EMI=29,                  //0b11101  MM port layer0 (MM->MML2_MMU->EMI )
   BUSMON_TGID_IA_MM_CACHE_R_MML2_EMI=1,                   // Note: may be 0x0~0x6, 0x8~0xF(need append 2'b01 at the LSB of the original id)

   /*MDINFRA master id*/
   BUSMON_TGID_INFRA_ABM_EMI=0,                  //12'0b0000_00xx_0000  MDINFRA layer0 (BUSMON_BUSID_MDINFRA_EMI, master -> emi)
   BUSMON_TGID_INFRA_PPPHA_EMI=1,                //12'0b0000_000x_0001  MDINFRA layer0
   BUSMON_TGID_INFRA_LOGTOPMCU_EMI=2,            //12'0b0000_000x_0010  MDINFRA layer0
   BUSMON_TGID_INFRA_LOGTOPDSP_EMI=3,            //12'0b0000_000x_0011  MDINFRA layer0
   BUSMON_TGID_INFRA_TRACETOP_EMI=4,             //12'0b0000_000x_0100  MDINFRA layer0
   BUSMON_TGID_INFRA_IPSEC_EMI=5,                //12'0b0000_000x_0101  MDINFRA layer0
   BUSMON_TGID_INFRA_DBGSYS_EMI=23,              //12'0b0000_0xx1_0111  MDINFRA layer0
   BUSMON_TGID_INFRA_GDMA_EMI=7,                 //12'0b000x_xxx0_0111  MDINFRA layer0
   BUSMON_TGID_INFRA_FE_MAS_EMI=8,               //12'0b00xx_xxxx_1000  MDINFRA layer0
   BUSMON_TGID_INFRA_BIGRAM_MAS_EMI=1024,        //12'0b0100_0000_0xxx  MDINFRA layer0
   BUSMON_TGID_INFRA_BRP_MAS_EMI=2048,           //12'0b1000_000x_xxxx  MDINFRA layer0
   BUSMON_TGID_INFRA_MML2_MAS_EMI=3072,          //12'0b1100_0000_0xxx  MDINFRA layer0

   BUSMON_TGID_INFRA_AP2MD=0,                    //10'0b00_0000_x000  MDINFRA layer1 (BUSMON_BUSID_MDINFRA_IOCU, master -> mdmcu bus)
   BUSMON_TGID_INFRA_BIGRAM_MAS=17,		         //10'0b00_xxx1_0001   MDINFRA layer1
   BUSMON_TGID_INFRA_BRP_MAS=9,			         //10'0bxx_xxx0_x1001  MDINFRA layer1
   BUSMON_TGID_INFRA_MML2_MAS=1, 		         //10'0b00_xxx0_0001   MDINFRA layer1
   BUSMON_TGID_INFRA_FE_MAS=2,                   //10'0b0x_xxxx_x010    MDINFRA layer1
   BUSMON_TGID_INFRA_DBGSYS=11,                  //10'0b00_00xx_1011   MDINFRA layer1
   BUSMON_TGID_INFRA_GDMA=3,                     //10'0b00_xxxx_0011   MDINFRA layer1
   BUSMON_TGID_INFRA_IPSEC=5,                    //10'0b00_0000_x101  MDINFRA layer1
} busmon_tg_id_t;


#define AXIID_IA_ID_MASK_ALL             0xFFFF
#define AXIID_IA_ID_MASK_NONE            0x0000


#define AXI_VPE_ID_MASK_ALL    0x7
#define AXI_VPE_ID_MASK_NONE   0x0

#define AXI_ULTRA_MASK_ALL     0x3
#define AXI_ULTRA_MASK_NONE    0x0

//--------------------------
// below for Bus Recorder
//-------------------------
#define BUSREC_RECORD_CNT_MAX     63
#define BUSREC_SUPPORT_RECORD_CNT 32
#define BUSREC_SUPPORT_RECORD_CNT_R   BUSREC_SUPPORT_RECORD_CNT
#define BUSREC_SUPPORT_RECORD_CNT_W   BUSREC_SUPPORT_RECORD_CNT

typedef enum {
    BUSREC_MODE_NORMAL = 0,
    BUSREC_MODE_TEST = 1,
} BUSREC_MODE;

typedef enum {
    BUSREC_GATE_NONE,
    BUSREC_GATE_RESP,
    BUSREC_GATE_CMD,
    BUSREC_GATE_ALL,
} BUSREC_GATE;

typedef enum {
    BUSREC_TYPE_WR,
    BUSREC_TYPE_RD,
    BUSREC_TYPE_MAX,
} BUSREC_REC_TYPE;

typedef enum {
    BUSREC_RET_OK = 0,
    BUSREC_RET_FAIL = -1,
    BUSREC_RET_NOT_SUPPORTED = -2,
    BUSREC_RET_INVALID_PARAMETER = -3,
    BUSREC_RET_STARTED = -4,
} BUSREC_RET;
//--------------------------
// Above for Bus Recorder
//-------------------------


/*******************************************************************************
 * Define data structures.
 *******************************************************************************/
/* AXImon IP configuration of Monitor mode */
typedef struct {
   drv_aximon_rwsel_t rwsel;
   busmon_tg_id_t master_id;          /* specific transaction ID */
   kal_uint32 master_id_mask;
   kal_uint32 vpe_id;             /* specific VPE ID */
   kal_uint32 vpe_id_mask;  
   kal_uint32 ultra;              /* specific ULTRA */
   kal_uint32 ultra_mask;    
   kal_bool all_master_enable;    /* any transaction ID */
   kal_uint32 addr;               /* address */
   kal_uint32 addr_mask;          /* address mask, 0: check, 1: ignore */
   kal_bool   data_enable;        /* data target check at counting snap count */    
   kal_uint32 data;               /* data 0 32-bit of bus width */
   kal_uint32 data_mask;          /* data 0 mask 0: check, 1: ignore */   
} drv_aximon_mon_config_t;

/* Configuration of Snapshot Mode */
typedef struct {
   drv_aximon_rwsel_t rwsel;
   busmon_tg_id_t master_id;          /* specific transaction ID */
   kal_uint32 master_id_mask;
   kal_uint32 vpe_id;             /* specific VPE ID */
   kal_uint32 vpe_id_mask;   
   kal_uint32 ultra;              /* specific ULTRA */
   kal_uint32 ultra_mask;   
   kal_bool all_master_enable;    /* ALL Master should only use in Monitor mode */
   drv_busmon_trg_mode_t trg_mode;  /* trigger mode */
   kal_uint32 addr;               /* address */
   kal_uint32 addr_mask;          /* address mask, 0: check, 1: ignore */
   kal_bool   data_enable;        /* data target check at counting snap count */   
   kal_uint32 data;               /* data 0 32-bit of bus width */
   kal_uint32 data_mask;          /* data 0 mask 0: check, 1: ignore */
   kal_uint32 mon_cnt;            /* count select */ 
   kal_uint32 cycle_cnt;          /* max cycle */    
} drv_aximon_snp_config_t;

/* Configuration of Trigger Mode */
typedef struct {
   kal_bool enable_seq_trg;       /* TRUE==> sequencial mode, FALSE==> Concurrent mode */
   drv_busmon_ip_t trigger_ip;    /* Only use in Concurrent mode, determine which IP would trigger interrupt */   
   drv_busmon_mon_seq_check_mode_t seq_check_mode; /* START_ORDER_IP0_IP1/STOP_ORDER_IP0_IP1 */   
   drv_aximon_snp_config_t ip[BUSMON_IP_MAX];
} drv_aximon_trg_config_t;

/* Monitor Mode: Read-related informatin */
typedef struct {
   kal_uint32 QID;
   kal_uint32 tot_bus_cyc;          /* total bus cycle */
   kal_uint32 non_ov_trans_num;     /* total transaction number */
   kal_uint32 ov_trans_num;
   kal_uint32 non_wgt_trans_cyc;    /* total transaction cycle */
   kal_uint32 wgt_trans_cyc;
   kal_uint32 max_trans_cyc;        /* max transaction cycle */
   kal_uint32 max_ost_trans_num;

   kal_uint32 bus_util;             /* bus utilization */
   kal_uint32 avg_data_rate;        /* average data rate ,not used in Elbrus*/
   kal_uint32 avg_xac_cyc;          /* average transaction cycle */
} drv_aximon_mon_transaction_info_t;

/* Snapshot Mode */
typedef struct {
   kal_uint32 info0;                /*current AXI bus signal (burst, lock, cache, size...), VPE*/
   kal_uint32 info1;                /*current target id (QID),target match count*/
   kal_uint32 info2;                /*snap target address*/
   kal_uint32 info3;                /*data0&data1 strobe*/
   kal_uint32 info4;                /*last data[31:0]*/
   kal_uint32 info5;                /*last data[63:32]*/
   kal_uint32 info6;                /*last data[95:64]*/
   kal_uint32 info7;                /*last data[127:96]*/
   kal_uint32 info8;                /*last second data[31:0]*/
   kal_uint32 info9;                /*last second data[63:32]*/
   kal_uint32 info10;               /*last second data[95:64]*/
   kal_uint32 info11;               /*last second data[127:96]*/
} drv_aximon_snp_info_t;

/* Sequential Mode: */
typedef struct {
   drv_aximon_snp_info_t ip[BUSMON_IP_MAX];
} drv_aximon_trg_info_t;

typedef void (*busmon_intr_cb)(void);

typedef struct {
   kal_uint32 mo_index;
   kal_uint32 mo_frc_count[MO_LATENCY_RECORD_NUM];
   kal_uint32 mo_latency[MO_LATENCY_RECORD_NUM];
   kal_uint32 mo_address[MO_LATENCY_RECORD_NUM];
   kal_uint32 mo_vpe_id[MO_LATENCY_RECORD_NUM];      /*snap_info0 bit[2:0]*/
   kal_uint32 mo_master_id[MO_LATENCY_RECORD_NUM];   /*snap_info1 bit[15:0]*/
} aximon_mo_latency_info_t;
//--------------------------
// Below for Bus Recorder
//-------------------------
typedef struct {
   kal_bool IP_enable[BUSMON_IP_MAX];	/* IP 0 and IP1 enable or not when BUS recorder testing */
   drv_aximon_rwsel_t rwsel[BUSMON_IP_MAX];            /* Note: In IPx_AXIMON_TG, BUS Recorder only take care RWSEL & IPx_MON_ENABLE */
} UT_BUSREC_IP_CFG;
//--------------------------
// Above for Bus Recorder
//-------------------------


/*******************************************************************************
 * Define Macros.
 *******************************************************************************/
/* Register field manipulation macro */
#define EXTRACT_REG_FIELD_VAL(field_val, field_name) (((field_val) >> (field_name##_SHIFT)) & (field_name##_MASK))
#define EXPAND_REG_FIELD_VAL(field_val, field_name) (((field_val) & (field_name##_MASK)) << (field_name##_SHIFT))
#define CLEAR_REG_FIELD(reg_val, field_name) ((reg_val) & (~((field_name##_MASK) << (field_name##_SHIFT))))
#define SET_REG_FIELD_VAL(reg_val, field_val, field_name) (CLEAR_REG_FIELD(reg_val, field_name) | EXPAND_REG_FIELD_VAL(field_val, field_name))


/**************************************************
AXIMon External Fucntion Declearation
***************************************************/
kal_uint32 aximon_read_base_addr(drv_aximon_monid_t axi_mon_id);
void drv_busmon_set_trg_cb(busmon_intr_cb callback, drv_busmon_irqid_t irq_type);

/**
 * @brief  Set bus id to the layer select
 * @param  bus_id
 * @return
 * @retval
 * @retval
 *
 *  The BusMon shall be disabled before changing the bus id.
 */
kal_int32 aximon_set_busid(drv_aximon_monid_t axi_mon_id, busmon_busid_t bus_id);

/**
 * @brief Enable/Disable Speed Sim
 * @param axi_mon_id
 * @param enabled
 * @retval
 * @retval
 */
void aximon_set_speedsim(drv_aximon_monid_t axi_mon_id, kal_bool enabled);

void aximon_set_clear_at_bus_idle(drv_aximon_monid_t axi_mon_id, kal_bool enabled);

void aximon_polling_IP_Real_Enable(drv_aximon_monid_md_t axi_mon_id, drv_busmon_ip_t mon_ip);

/**
 * @brief  Configure parameters used in Monitor Mode
 * @param  axi_mon_id
 * @param  mon_ip
 * @param  config
 * @return The configuration result
 * @retval 0 if the configuration applied
 * @retval -1 if the configuration rejected
 *
 *  The BusMon shall stop before changing the configuration.
 */
kal_int32 aximon_set_monitor(drv_aximon_monid_t axi_mon_id, drv_busmon_ip_t mon_ip, drv_aximon_mon_config_t *config);

/**
 * @brief  Configure parametes used in Snapshot Mode
 * @param  axi_mon_id
 * @param  config
 * @param  mon_ip
 * @return The configuration result
 * @retval 0 if the configuration succeeds
 * @retval -1 if the configuration fails
 *
 *  The BusMon shall stop before changing the configuration.
 */
kal_int32 aximon_set_snap(drv_aximon_monid_t axi_mon_id, drv_busmon_ip_t mon_ip, drv_aximon_snp_config_t *config);

/**
 * @brief  Configure parameters in Sequential Trigger Mode
 * @param  axi_mon_id
 * @param  config
 * @return The configuration result
 * @retval 0 if the configuration applied
 * @retval -1 if the configuration rejected
 *
 *  The BusMon shall be disabled before changing the
 *  configuration.
 */
kal_int32 aximon_set_sq_trg(drv_aximon_monid_t axi_mon_id, drv_aximon_trg_config_t *config);

/**
 * @brief  Start recording
 * @param  axi_mon_id
 * @return
 * @retval
 *
 *  BusMon clears the counts first.
 *  BusMon always waits for the on-going transaction finished
 *  before starting to update the counts.
 */
void aximon_start(drv_aximon_monid_t axi_mon_id);

/**
 * @brief  Stop recording
 * @param
 * @return
 * @retval
 *
 *  BusMon always waits for the on-going transaction finished
 *  before pausing to update the counts.
 *  Some counts stop to update once paused received Some counts
 *  continues to update until all transactions fishished.
 */
void aximon_stop(drv_aximon_monid_t axi_mon_id);

/**
 * @brief  Enable interrupt
 * @param  axi_mon_id
 * @return
 * @retval
 */
void aximon_enable_interrupt(drv_aximon_monid_md_t axi_mon_id);

/**
 * @brief  Disable interrupt
 * @param  axi_mon_id
 * @return
 * @retval
 */
void aximon_disable_interrupt(drv_aximon_monid_md_t axi_mon_id);

void aximon_clear_interrupt(drv_aximon_monid_md_t axi_mon_id);


/**
 * @brief Get triggered information in Snapshot mode
 * @param axi_mon_id
 * @param mon_ip
 * @param info
 * @retval
 * @retval
 */
void aximon_get_snap_info(drv_aximon_monid_md_t axi_mon_id, drv_busmon_ip_t mon_ip, drv_aximon_snp_info_t *info);

/**
 * @brief Read-related Information in Monitor mode
 * @param axi_mon_id
 * @param mon_ip
 * @param info
 * @retval
 * @retval
 */
void aximon_get_ip_transaction_info(drv_aximon_monid_md_t axi_mon_id, drv_busmon_ip_t mon_ip, drv_aximon_mon_transaction_info_t *info);

/**
 * @brief Get information in Triggered Mode
 * @param axi_mon_id
 * @param info
 * @retval
 * @retval
 */
void aximon_get_trigger_info(drv_aximon_monid_md_t axi_mon_id, drv_aximon_trg_info_t *info);

/**
 * @brief Polling the triggered status
 * @param axi_mon_id
 * @param max_count
 * @return
 * @retval 0 if the interrupt triggered and in inactive state
 * @retval -1 if no interrupt triggered or in active state
 */
kal_int32 aximon_poll_trigged(drv_aximon_monid_md_t axi_mon_id, kal_uint32 max_count, drv_busmon_mon_state_t *ip0_state, drv_busmon_mon_state_t *ip1_state);

void busmon_init(void);
void busmon_dormant_init(void);
void busmon_snap_mo_init(void);
void busmon_monitor_mo_init(void);
void busmon_get_avg_latency_and_xac_count(drv_aximon_mon_transaction_info_t *mon_info0, drv_aximon_mon_transaction_info_t *mon_info1);
void busmon_monitor_mdinfra_init(void);
void busmon_mpu_vio_debug(void);
void mdinfra_busmon_mpu_vio_debug(void);
void mdinfra_busmon_snap_init(void);

//--------------------------
// Below for Bus Recorder
//-------------------------
kal_int32 drv_busrec_start(BUSREC_GATE gate, drv_aximon_monid_t axi_mon_id);
kal_int32 drv_busrec_stop(drv_aximon_monid_t axi_mon_id);
kal_bool  drv_busrec_is_started(drv_aximon_monid_t axi_mon_id);
kal_int32 drv_busrec_get_count(drv_aximon_monid_t axi_mon_id, drv_busmon_ip_t mon_ip);
busmon_ip_status_t drv_busrec_get_ip_status(drv_aximon_monid_t axi_mon_id, drv_busmon_ip_t mon_ip);
kal_int32 drv_busrec_get_ip_record(drv_aximon_monid_md_t axi_mon_id, drv_busmon_ip_t mon_ip, kal_uint32 index, kal_uint32 *id, kal_uint32 *addr);
kal_int32 drv_busrec_get_ip_curr(drv_aximon_monid_md_t axi_mon_id, drv_busmon_ip_t mon_ip, kal_uint32 *id, kal_uint32 *addr, kal_uint32 *ctrl_sts);
kal_bool  drv_busrec_is_overflow(drv_aximon_monid_t axi_mon_id, drv_busmon_ip_t mon_ip);
kal_bool  drv_busrec_is_underflow(drv_aximon_monid_t axi_mon_id, drv_busmon_ip_t mon_ip);
kal_bool drv_busrec_is_id_miss(drv_aximon_monid_t axi_mon_id, drv_busmon_ip_t mon_ip);
kal_bool drv_busrec_history_is_overflow(drv_aximon_monid_t axi_mon_id, drv_busmon_ip_t mon_ip);
kal_bool drv_busrec_history_is_underflow(drv_aximon_monid_t axi_mon_id, drv_busmon_ip_t mon_ip);
kal_bool drv_busrec_history_is_id_miss(drv_aximon_monid_t axi_mon_id, drv_busmon_ip_t mon_ip);
kal_int32 drv_busrec_set_mode(BUSREC_MODE mode, drv_aximon_monid_t axi_mon_id, UT_BUSREC_IP_CFG *ip_cfg);

//--------------------------
// Above for Bus Recorder
//-------------------------


#endif /* end of __ASSEMBLER__ */

#endif /* end of __DRV_BUSMON_H__ */

