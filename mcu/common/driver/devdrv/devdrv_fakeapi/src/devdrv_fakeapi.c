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
 *   devdrv_fakeapi.c
 *
 * Project:
 * --------
 *   TATAKA
 *
 * Description:
 * ------------
 *   For missing functions in new chip, fast porting
 *
 * Author:
 * -------
 * -------
 *
 * ==========================================================================
 * $Log$
 *
 * 05 14 2014 brian.chiang
 * [MOLY00065548] driver test environment
 * 6291 driver test porting
 *
 * 09 24 2013 da.li
 * [MOLY00038872] [MOLY] Add AUXADC driver for smart phone project
 * Add AUXADC driver for immediate temperature sampling in SP project.
 *
 * 09 24 2013 gang.lei
 * [MOLY00038762] add PW and Chr_Det module for MT6290 projects
 * add pw and chr_det module in devdrv, remove them from devdrv_fakeapi.c
 *
 * 08 27 2013 yaohua.liu
 * [MOLY00035328] [MT6290] Remove dummy API
 * move dma_recover_all() to drv_gdma.c
 *
 * 08 26 2013 chin-chieh.hung
 * [MOLY00011352] [Driver] Update for common devdrv driver
 * remove unused fake_api
 *
 * 07 02 2013 chin-chieh.hung
 * [MOLY00011352] [Driver] Update for common devdrv driver
 * remove unnecessary HISR functions
 *
 * 05 13 2013 chin-chieh.hung
 * [MOLY00013348] [MT6290 Bring-up] Basic Platform Support
 * MT6290E1_FristCall Branch sync back to MOLY Trunk
 *
 * 04 28 2013 chin-chieh.hung
 * [MOLY00013021] [MT6290 PO admit] Move the LISR context to HISR context
 * LISR 2 HISR support, driver part
 *
 * 04 23 2013 chin-chieh.hung
 * [MOLY00013021] [MT6290 PO admit] Move the LISR context to HISR context
 * MOLY LISR2HISR, Driver part
 *
 * 04 19 2013 barry.hong
 * [MOLY00013745] [MT6290 Bring-up]Add dummy API
 * .add AUXADC dummy function
 *
 * 03 29 2013 gang.lei
 * [MOLY00013094] fix PWM related link error of multimode
 * provide PWM fake API to solve link error of multimode
 *
 * 03 28 2013 barry.hong
 * [MOLY00012981] Add fakeapi for MT6290 MOLY MULTI MODE build
 * .add fake API DclSADC_Open/DclSADC_Control/DclSADC_Close
 *
 * 03 28 2013 barry.hong
 * [MOLY00012680] 6290 DCM driver for sleep mode porting
 * .Sync DCM function to MOLY 6290 for sleep flow
 *
 * 03 27 2013 yaohua.liu
 * [MOLY00012498] MT6290 MOLY_NAND Integrate to Trunk
 * Merging //MOLY_CBr/yaohua.liu/MOLY_NAND/... to TRUNK
 *
 * 03 26 2013 gh.huang
 * [MOLY00012450] Replace sys_drv/pll with devdrv/pll
 *
 * 03 26 2013 barry.hong
 * [MOLY00012680] 6290 DCM driver for sleep mode porting
 * .add DCM fakeapi temporarily before porting finish
 *
 * 03 14 2013 vend_brandon-hy.lin
 * [MOLY00010058] Remove Driver FakeAPI
 * Remove PWM and Keyboard fake api
 *
 * 03 11 2013 yaohua.liu
 * [MOLY00011705] MT6290 MOLY fake API remove
 * remove NFI_Reset() from fakeapi, and add NAND_SUPPORT macro in init.c
 *
 * 03 11 2013 walt.huang
 * [MOLY00007474] Develop EMI Bus Monitor APIs for Logging Usage
 * *: Remove EMI fake API
 *
 * 03 11 2013 walt.huang
 * [MOLY00007474] Develop EMI Bus Monitor APIs for Logging Usage
 * *: Remove EMI fake API
 *
 * 03 08 2013 walt.huang
 * [MOLY00007474] Develop EMI Bus Monitor APIs for Logging Usage
 * *: Remove EMI fake API
 *
 * 03 08 2013 walt.huang
 * [MOLY00007474] Develop EMI Bus Monitor APIs for Logging Usage
 * .
 *
 * 03 08 2013 barry.hong
 * [MOLY00011608] MT6290 MOLY fake API remove
 * .reverse WDT_SET_RETN_FLAG/WDT_CLR_RETN_FLAG wait for cindy modify
 *
 * 03 08 2013 barry.hong
 * [MOLY00011608] MT6290 MOLY fake API remove
 * .remove fakeAPI
 *
 * 03 08 2013 guo-huei.chang
 * [MOLY00011607] update custom_EMI function and cfggen EMI part
 * update custom_EMI function into custom_EMI_MT6290.c and remove it in devdrv_fakeapi.c
 * update cfgGen_EMI.pl for MT6290
 *
 * 03 07 2013 shenghui.shi
 * [MOLY00010058] Remove Driver FakeAPI
 * [MOLY00011352] [Driver] Update for common devdrv driver
 * mask the "DclSI2C_Initialize" in  devdrv_common.c
 * mask the "DclSI2C_Initialize" in devdrv_fakeapi.c
 * DRV_I2C_6276_SERIES -> DRV_I2C_6290_SERIES in drv_features_6290.h
 *
 * 03 06 2013 wei-de.chen
 * [MOLY00010058] Remove Driver FakeAPI
 * Remove fake APIs at fakeapi.c & implement it at SF MTD driver
 *
 * 03 06 2013 chin-chieh.hung
 * [MOLY00011352] [Driver] Update for common devdrv driver
 * Remove PreInit_Seriport function call in MT6290
 *
 * 03 05 2013 chin-chieh.hung
 * [MOLY00011352] [Driver] Update for common devdrv driver
 * Remove Fake API
 *
 * 03 05 2013 chin-chieh.hung
 * [MOLY00011352] [Driver] Update for common devdrv driver
 * Remove unused fake_api
 *
 * 03 01 2013 cindy.tu
 * [MOLY00011219] Sync MPU RW region setting with WR8
 * <saved by Perforce>
 *
 * 02 27 2013 chi-yen.yu
 * [MOLY00010897] PMIC 6339 driver design
 * add PMIC 6339 driver API
 *
 * 02 22 2013 da.wang
 * [MOLY00010058] Remove Driver FakeAPI
 * .Remove GPIO fakeapi
 *
 * 02 22 2013 peiwen.qing
 * [MOLY00010733] [RTC] Remove RTC fake API
 * [RTC] Remove RTC fake API.
 *
 * 02 05 2013 vend_hsientang.lee
 * [MOLY00009962] [SystemService] Enable Prefetch Buffer
 * Enable Prefetch Buffer and remove it from fake api.
 *
 * 02 04 2013 chin-chieh.hung
 * [MOLY00009725] MT7208 rename to MT6290 - basic platform module
 * chip rename:MT7208 to MT6290
 *
 * 11 13 2012 chin-chieh.hung
 * [MOLY00005322] TATAKA merge to MOLY
 * add EMI_reg_dump_init dummy function
 ****************************************************************************/

#include <kal_public_api.h>
#include <dcl.h>
#include <init.h>
#include <drv_comm.h>
#include <reg_base.h>
#include <fs_gprot.h>
#include <pll.h>
//#include "mtd_dal_spi.h"

#define FAKEAPI_ENABLE_DRIVER 1

#if FAKEAPI_ENABLE_DRIVER
/************** Driver Related Fake APIs/Variables - Start  *******************/
#define PDN_TOPSM
#define CMD_MAGIC_VALUE
#define PLL1_SETTLE
#define PLL2_SETTLE
#define TRIG_SETTLE
#define PDN_OSTIMER
#define PDN_TOPSM
#define MD_IRQID_OST
#define MD_IRQID_MD_TOPSM


/************** Driver Related Fake APIs/Variables - End    *******************/
#endif /* end of FAKEAPI_ENABLE_DRIVER */


