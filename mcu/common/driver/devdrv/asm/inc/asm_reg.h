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
 * asm_reg.h
 *
 * Project:
 * --------
 *   UMOLY_Software
 *
 * Description:
 * ------------
 *   This file defines ASM drivers register
 *
 * Author:
 * -------
 * -------
 *
 *==============================================================================
 *             HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *------------------------------------------------------------------------------

 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

#ifndef __ASM_REG_H__
#define __ASM_REG_H__

#include "kal_general_types.h"
#include "reg_base.h"  
#include "intrCtrl.h"
#include "boot.h"

typedef enum 
{
    ASM_AXI_MAX_BURST_LEN_4 = 0,
    ASM_AXI_MAX_BURST_LEN_8,
    ASM_AXI_MAX_BURST_LEN_16,
    
}ASM_AXI_MAX_OSTD_NUMBER;


typedef enum 
{
    ASM_AXI_MAX_OSTD_NUMBER_0 = 0,
    ASM_AXI_MAX_OSTD_NUMBER_1,
    ASM_AXI_MAX_OSTD_NUMBER_2,
    ASM_AXI_MAX_OSTD_NUMBER_3,
   
}ASM_AXI_MAX_OSTD_LEN;


typedef enum 
{
    ASM_AXI_NON_POST_WRITE_LAST_TRANACTION = 0,
    ASM_AXI_NON_POST_WRITE,
    ASM_AXI_POST_WRITE,
}ASM_AXI_POST_WRITE_CFG;




//////////////////ASM Registers/////////////////////////////
#define BASE_ADDR_ASM_GCR                  (GCR_CUSTOM_ADDR+0x8000)
#define ASM_GCR_BASEADDR                   (BASE_ADDR_ASM_GCR) 
#define ASM_BASEADDR                       (BASE_MADDR_MDMCU_ABM)    


//CORE0 ASM ASM_BASEADDR+0x0000
//CORE1 ASM ASM_BASEADDR+0x1000
//CORE2 ASM ASM_BASEADDR+0x2000
//CORE3 ASM ASM_BASEADDR+0x3000
#define CORE_OFFSET_SHIFT_BIT                     (12)
#define CORE_OFFSET                               (0x1000)


//Register offset
#define ASM_GEN_CONFIG                  (0x0000)
#define ASM_MODE_CONFIG                 (0x0004)
#define ASM_PROFILE_EN                  (0x0008)
#define ASM_AXI_CONFIG                  (0x000C)
#define ASM_SPM_CONFIG                  (0x0010)
#define ASM_VERSION                     (0x0014)
#define ASM_L2ISAR                      (0x0020)
#define ASM_L2IMKR                      (0x0024)
#define ASM_L2IMCR                      (0x0028)
#define ASM_L2IMSR                      (0x002C)
#define ASM_GCR_SWLA_TRIG               (0x0030)
#define ASM_GCR_TC0_CONTEXT_ID          (0x0040)
#define ASM_GCR_TC1_CONTEXT_ID          (0x0044)
#define ASM_GCR_TC2_CONTEXT_ID          (0x0048)
#define ASM_GCR_TC3_CONTEXT_ID          (0x004C)
#define ASM_GCR_TC0_PROFILE_ADDON_INFO0 (0x0050)
#define ASM_GCR_TC0_PROFILE_ADDON_INFO1 (0x0054)
#define ASM_GCR_TC0_PROFILE_ADDON_INFO2 (0x0058)
#define ASM_GCR_TC0_PROFILE_ADDON_INFO3 (0x005C)
#define ASM_GCR_TC1_PROFILE_ADDON_INFO0 (0x0060)
#define ASM_GCR_TC1_PROFILE_ADDON_INFO1 (0x0064)
#define ASM_GCR_TC1_PROFILE_ADDON_INFO2 (0x0068)
#define ASM_GCR_TC1_PROFILE_ADDON_INFO3 (0x006C)
#define ASM_GCR_TC2_PROFILE_ADDON_INFO0 (0x0070)
#define ASM_GCR_TC2_PROFILE_ADDON_INFO1 (0x0074)
#define ASM_GCR_TC2_PROFILE_ADDON_INFO2 (0x0078)
#define ASM_GCR_TC2_PROFILE_ADDON_INFO3 (0x007C)
#define ASM_GCR_TC3_PROFILE_ADDON_INFO0 (0x0080)
#define ASM_GCR_TC3_PROFILE_ADDON_INFO1 (0x0084)
#define ASM_GCR_TC3_PROFILE_ADDON_INFO2 (0x0088)
#define ASM_GCR_TC3_PROFILE_ADDON_INFO3 (0x008C)
#define ASM_TC0_TC_ID                   (0x0090)
#define ASM_TC1_TC_ID                   (0x0094)
#define ASM_TC2_TC_ID                   (0x0098)
#define ASM_TC3_TC_ID                   (0x009C)
#define ASM_CORE_ID                     (0x0100)
#define ASM_MCU_PC                      (0x0104)
#define ASM_TC0_MCU_PMC0                (0x0108)
#define ASM_TC0_MCU_PMC1                (0x010C)
#define ASM_TC1_MCU_PMC0                (0x0110)
#define ASM_TC1_MCU_PMC1                (0x0114)
#define ASM_TC2_MCU_PMC0                (0x0118)
#define ASM_TC2_MCU_PMC1                (0x011C)
#define ASM_TC3_MCU_PMC0                (0x0120)
#define ASM_TC3_MCU_PMC1                (0x0124)
#define ASM_MCU_ELM_CNT0                (0x0128)
#define ASM_MCU_ELM_CNT1                (0x012C)
#define ASM_MCU_ELM_CNT2                (0x0130)
#define ASM_MCU_ELM_CNT3                (0x0134)
#define ASM_TIME_STAMP                  (0x013C)
#define ASM_PDI_HEADER                  (0x0144)
#define ASM_PDI_CNT                     (0x0148)
#define ASM_TRACER_SAMPLE_RATE          (0x014C)
#define ASM_LOG_BUF_BASEADDR            (0x0150)
#define ASM_LOG_BUF_SIZE                (0x0154)
#define ASM_WRAP_CNT                    (0x0158)
#define ASM_BUF_RD_PTR                  (0x015C)
#define ASM_BUF_WR_PTR                  (0x0160)
#define ASM_BUF_ALT_THRESH              (0x0164)
#define ASM_SRAM_STATUS                 (0x0168)
#define ASM_SRAM_MAX_BUF_SIZE           (0x016C)
#define ASM_REM_LOG_BUF_SIZE            (0x0170)
#define ASM_SRAM_DBG                    (0x0174)
#define ASM_SRAM_DBG_ADDR               (0x0178)
#define ASM_SRAM_DBG_DATA               (0x017C)
#define ASM_SELF_TEST_EN                (0x0180)
#define ASM_SEL_TEST_KEY                (0x0184)
#define ASM_DBG1                        (0x0190)
#define ASM_DBG2                        (0x0194)
#define ASM_DBG3                        (0x0198)
#define ASM_DBG4                        (0x019C)
#define ASM_DBG5                        (0x0200)
#define ASM_DBG6                        (0x0204)
#define ASM_DBG7                        (0x0208)
#define ASM_DBG8                        (0x020C)
#define ASM_DBG9                        (0x0210)
#define ASM_DBG10                       (0x0214)
#define ASM_DBG11                       (0x0218)
#define ASM_DBG12                       (0x021C)
#define ASM_DUMMY                       (0x0220)
#define ASM_TOP_INT_STATUS              (0x2000)
#define ASM_TOP_CORE_EN                 (0x2004)




//MCU ASM APB Register Address
#define ASM_GEN_CONFIG_(CORE)                     (ASM_BASEADDR+(CORE << CORE_OFFSET_SHIFT_BIT)+ASM_GEN_CONFIG )
#define ASM_MODE_CONFIG_(CORE)                    (ASM_BASEADDR+(CORE << CORE_OFFSET_SHIFT_BIT)+ASM_MODE_CONFIG)
#define ASM_PROFILE_EN_(CORE)                     (ASM_BASEADDR+(CORE << CORE_OFFSET_SHIFT_BIT)+ASM_PROFILE_EN )
#define ASM_AXI_CONFIG_(CORE)                     (ASM_BASEADDR+(CORE << CORE_OFFSET_SHIFT_BIT)+ASM_AXI_CONFIG )
#define ASM_SPM_CONFIG_(CORE)                     (ASM_BASEADDR+(CORE << CORE_OFFSET_SHIFT_BIT)+ASM_SPM_CONFIG )
#define ASM_VERSION_(CORE)                        (ASM_BASEADDR+(CORE << CORE_OFFSET_SHIFT_BIT)+ASM_VERSION )
#define ASM_L2ISAR_(CORE)                         (ASM_BASEADDR+(CORE << CORE_OFFSET_SHIFT_BIT)+ASM_L2ISAR )
#define ASM_L2IMKR_(CORE)                         (ASM_BASEADDR+(CORE << CORE_OFFSET_SHIFT_BIT)+ASM_L2IMKR )
#define ASM_L2IMCR_(CORE)                         (ASM_BASEADDR+(CORE << CORE_OFFSET_SHIFT_BIT)+ASM_L2IMCR )
#define ASM_L2IMSR_(CORE)                         (ASM_BASEADDR+(CORE << CORE_OFFSET_SHIFT_BIT)+ASM_L2IMSR )
#define ASM_SWLA_TRIG_(CORE)                      (ASM_BASEADDR+(CORE << CORE_OFFSET_SHIFT_BIT)+ASM_GCR_SWLA_TRIG )
#define ASM_TC0_CONTEXT_ID_(CORE)                 (ASM_BASEADDR+(CORE << CORE_OFFSET_SHIFT_BIT)+ASM_GCR_TC0_CONTEXT_ID )
#define ASM_TC1_CONTEXT_ID_(CORE)                 (ASM_BASEADDR+(CORE << CORE_OFFSET_SHIFT_BIT)+ASM_GCR_TC1_CONTEXT_ID )
#define ASM_TC2_CONTEXT_ID_(CORE)                 (ASM_BASEADDR+(CORE << CORE_OFFSET_SHIFT_BIT)+ASM_GCR_TC2_CONTEXT_ID )
#define ASM_TC3_CONTEXT_ID_(CORE)                 (ASM_BASEADDR+(CORE << CORE_OFFSET_SHIFT_BIT)+ASM_GCR_TC3_CONTEXT_ID )
#define ASM_TC0_PROFILE_ADDON_INFO0_(CORE)        (ASM_BASEADDR+(CORE << CORE_OFFSET_SHIFT_BIT)+ASM_GCR_TC0_PROFILE_ADDON_INFO0 )
#define ASM_TC0_PROFILE_ADDON_INFO1_(CORE)        (ASM_BASEADDR+(CORE << CORE_OFFSET_SHIFT_BIT)+ASM_GCR_TC0_PROFILE_ADDON_INFO1 )
#define ASM_TC0_PROFILE_ADDON_INFO2_(CORE)        (ASM_BASEADDR+(CORE << CORE_OFFSET_SHIFT_BIT)+ASM_GCR_TC0_PROFILE_ADDON_INFO2 )
#define ASM_TC0_PROFILE_ADDON_INFO3_(CORE)        (ASM_BASEADDR+(CORE << CORE_OFFSET_SHIFT_BIT)+ASM_GCR_TC0_PROFILE_ADDON_INFO3 )
#define ASM_TC1_PROFILE_ADDON_INFO0_(CORE)        (ASM_BASEADDR+(CORE << CORE_OFFSET_SHIFT_BIT)+ASM_GCR_TC1_PROFILE_ADDON_INFO0 )
#define ASM_TC1_PROFILE_ADDON_INFO1_(CORE)        (ASM_BASEADDR+(CORE << CORE_OFFSET_SHIFT_BIT)+ASM_GCR_TC1_PROFILE_ADDON_INFO1 )
#define ASM_TC1_PROFILE_ADDON_INFO2_(CORE)        (ASM_BASEADDR+(CORE << CORE_OFFSET_SHIFT_BIT)+ASM_GCR_TC1_PROFILE_ADDON_INFO2 )
#define ASM_TC1_PROFILE_ADDON_INFO3_(CORE)        (ASM_BASEADDR+(CORE << CORE_OFFSET_SHIFT_BIT)+ASM_GCR_TC1_PROFILE_ADDON_INFO3 )
#define ASM_TC2_PROFILE_ADDON_INFO0_(CORE)        (ASM_BASEADDR+(CORE << CORE_OFFSET_SHIFT_BIT)+ASM_GCR_TC2_PROFILE_ADDON_INFO0 )
#define ASM_TC2_PROFILE_ADDON_INFO1_(CORE)        (ASM_BASEADDR+(CORE << CORE_OFFSET_SHIFT_BIT)+ASM_GCR_TC2_PROFILE_ADDON_INFO1 )
#define ASM_TC2_PROFILE_ADDON_INFO2_(CORE)        (ASM_BASEADDR+(CORE << CORE_OFFSET_SHIFT_BIT)+ASM_GCR_TC2_PROFILE_ADDON_INFO2 )
#define ASM_TC2_PROFILE_ADDON_INFO3_(CORE)        (ASM_BASEADDR+(CORE << CORE_OFFSET_SHIFT_BIT)+ASM_GCR_TC2_PROFILE_ADDON_INFO3 )
#define ASM_TC3_PROFILE_ADDON_INFO0_(CORE)        (ASM_BASEADDR+(CORE << CORE_OFFSET_SHIFT_BIT)+ASM_GCR_TC3_PROFILE_ADDON_INFO0 )
#define ASM_TC3_PROFILE_ADDON_INFO1_(CORE)        (ASM_BASEADDR+(CORE << CORE_OFFSET_SHIFT_BIT)+ASM_GCR_TC3_PROFILE_ADDON_INFO1 )
#define ASM_TC3_PROFILE_ADDON_INFO2_(CORE)        (ASM_BASEADDR+(CORE << CORE_OFFSET_SHIFT_BIT)+ASM_GCR_TC3_PROFILE_ADDON_INFO2 )
#define ASM_TC3_PROFILE_ADDON_INFO3_(CORE)        (ASM_BASEADDR+(CORE << CORE_OFFSET_SHIFT_BIT)+ASM_GCR_TC3_PROFILE_ADDON_INFO3 )
#define ASM_TC0_TC_ID_(CORE)                      (ASM_BASEADDR+(CORE << CORE_OFFSET_SHIFT_BIT)+ASM_TC0_TC_ID )
#define ASM_TC1_TC_ID_(CORE)                      (ASM_BASEADDR+(CORE << CORE_OFFSET_SHIFT_BIT)+ASM_TC1_TC_ID )
#define ASM_TC2_TC_ID_(CORE)                      (ASM_BASEADDR+(CORE << CORE_OFFSET_SHIFT_BIT)+ASM_TC2_TC_ID )
#define ASM_TC3_TC_ID_(CORE)                      (ASM_BASEADDR+(CORE << CORE_OFFSET_SHIFT_BIT)+ASM_TC3_TC_ID )
#define ASM_CORE_ID_(CORE)                        (ASM_BASEADDR+(CORE << CORE_OFFSET_SHIFT_BIT)+ASM_CORE_ID )
#define ASM_MCU_PC_(CORE)                         (ASM_BASEADDR+(CORE << CORE_OFFSET_SHIFT_BIT)+ASM_MCU_PC )
#define ASM_TC0_MCU_PMC0_(CORE)                   (ASM_BASEADDR+(CORE << CORE_OFFSET_SHIFT_BIT)+ASM_TC0_MCU_PMC0 )
#define ASM_TC0_MCU_PMC1_(CORE)                   (ASM_BASEADDR+(CORE << CORE_OFFSET_SHIFT_BIT)+ASM_TC0_MCU_PMC1 )
#define ASM_TC1_MCU_PMC0_(CORE)                   (ASM_BASEADDR+(CORE << CORE_OFFSET_SHIFT_BIT)+ASM_TC1_MCU_PMC0 )
#define ASM_TC1_MCU_PMC1_(CORE)                   (ASM_BASEADDR+(CORE << CORE_OFFSET_SHIFT_BIT)+ASM_TC1_MCU_PMC1 )
#define ASM_TC2_MCU_PMC0_(CORE)                   (ASM_BASEADDR+(CORE << CORE_OFFSET_SHIFT_BIT)+ASM_TC2_MCU_PMC0 )
#define ASM_TC2_MCU_PMC1_(CORE)                   (ASM_BASEADDR+(CORE << CORE_OFFSET_SHIFT_BIT)+ASM_TC2_MCU_PMC1 )
#define ASM_TC3_MCU_PMC0_(CORE)                   (ASM_BASEADDR+(CORE << CORE_OFFSET_SHIFT_BIT)+ASM_TC3_MCU_PMC0 )
#define ASM_TC3_MCU_PMC1_(CORE)                   (ASM_BASEADDR+(CORE << CORE_OFFSET_SHIFT_BIT)+ASM_TC3_MCU_PMC1 )
#define ASM_MCU_ELM_CNT0_(CORE)                   (ASM_BASEADDR+(CORE << CORE_OFFSET_SHIFT_BIT)+ASM_MCU_ELM_CNT0 )
#define ASM_MCU_ELM_CNT1_(CORE)                   (ASM_BASEADDR+(CORE << CORE_OFFSET_SHIFT_BIT)+ASM_MCU_ELM_CNT1 )
#define ASM_MCU_ELM_CNT2_(CORE)                   (ASM_BASEADDR+(CORE << CORE_OFFSET_SHIFT_BIT)+ASM_MCU_ELM_CNT2 )
#define ASM_MCU_ELM_CNT3_(CORE)                   (ASM_BASEADDR+(CORE << CORE_OFFSET_SHIFT_BIT)+ASM_MCU_ELM_CNT3 )
#define ASM_TIME_STAMP_(CORE)                     (ASM_BASEADDR+(CORE << CORE_OFFSET_SHIFT_BIT)+ASM_TIME_STAMP )
#define ASM_PDI_HEADER_(CORE)                     (ASM_BASEADDR+(CORE << CORE_OFFSET_SHIFT_BIT)+ASM_PDI_HEADER )
#define ASM_PDI_CNT_(CORE)                        (ASM_BASEADDR+(CORE << CORE_OFFSET_SHIFT_BIT)+ASM_PDI_CNT )
#define ASM_TRACER_SAMPLE_RATE_(CORE)             (ASM_BASEADDR+(CORE << CORE_OFFSET_SHIFT_BIT)+ASM_TRACER_SAMPLE_RATE )
#define ASM_LOG_BUF_BASEADDR_(CORE)               (ASM_BASEADDR+(CORE << CORE_OFFSET_SHIFT_BIT)+ASM_LOG_BUF_BASEADDR )
#define ASM_LOG_BUF_SIZE_(CORE)                   (ASM_BASEADDR+(CORE << CORE_OFFSET_SHIFT_BIT)+ASM_LOG_BUF_SIZE )
#define ASM_WRAP_CNT_(CORE)                       (ASM_BASEADDR+(CORE << CORE_OFFSET_SHIFT_BIT)+ASM_WRAP_CNT )
#define ASM_BUF_RD_PTR_(CORE)                     (ASM_BASEADDR+(CORE << CORE_OFFSET_SHIFT_BIT)+ASM_BUF_RD_PTR )
#define ASM_BUF_WR_PTR_(CORE)                     (ASM_BASEADDR+(CORE << CORE_OFFSET_SHIFT_BIT)+ASM_BUF_WR_PTR )
#define ASM_BUF_ALT_THRESH_(CORE)                 (ASM_BASEADDR+(CORE << CORE_OFFSET_SHIFT_BIT)+ASM_BUF_ALT_THRESH )
#define ASM_SRAM_MAX_BUF_SIZE_(CORE)              (ASM_BASEADDR+(CORE << CORE_OFFSET_SHIFT_BIT)+ASM_SRAM_MAX_BUF_SIZE )
#define ASM_SRAM_STATUS_(CORE)                    (ASM_BASEADDR+(CORE << CORE_OFFSET_SHIFT_BIT)+ASM_SRAM_STATUS )
#define ASM_REM_LOG_BUF_SIZE_(CORE)               (ASM_BASEADDR+(CORE << CORE_OFFSET_SHIFT_BIT)+ASM_REM_LOG_BUF_SIZE )
#define ASM_SRAM_DBG_(CORE)                       (ASM_BASEADDR+(CORE << CORE_OFFSET_SHIFT_BIT)+ASM_SRAM_DBG )
#define ASM_SRAM_DBG_ADDR_(CORE)                  (ASM_BASEADDR+(CORE << CORE_OFFSET_SHIFT_BIT)+ASM_SRAM_DBG_ADDR )
#define ASM_SRAM_DBG_DATA_(CORE)                  (ASM_BASEADDR+(CORE << CORE_OFFSET_SHIFT_BIT)+ASM_SRAM_DBG_DATA )
#define ASM_SELF_TEST_EN_(CORE)                   (ASM_BASEADDR+(CORE << CORE_OFFSET_SHIFT_BIT)+ASM_SELF_TEST_EN )
#define ASM_SEL_TEST_KEY_(CORE)                   (ASM_BASEADDR+(CORE << CORE_OFFSET_SHIFT_BIT)+ASM_SEL_TEST_KEY )
#define ASM_DBG1_(CORE)                           (ASM_BASEADDR+(CORE << CORE_OFFSET_SHIFT_BIT)+ASM_DBG1 )
#define ASM_DBG2_(CORE)                           (ASM_BASEADDR+(CORE << CORE_OFFSET_SHIFT_BIT)+ASM_DBG2 )
#define ASM_DBG3_(CORE)                           (ASM_BASEADDR+(CORE << CORE_OFFSET_SHIFT_BIT)+ASM_DBG3 )
#define ASM_DBG4_(CORE)                           (ASM_BASEADDR+(CORE << CORE_OFFSET_SHIFT_BIT)+ASM_DBG4 )
#define ASM_DBG5_(CORE)                           (ASM_BASEADDR+(CORE << CORE_OFFSET_SHIFT_BIT)+ASM_DBG5 )
#define ASM_DBG6_(CORE)                           (ASM_BASEADDR+(CORE << CORE_OFFSET_SHIFT_BIT)+ASM_DBG6 )
#define ASM_DBG7_(CORE)                           (ASM_BASEADDR+(CORE << CORE_OFFSET_SHIFT_BIT)+ASM_DBG7 )
#define ASM_DBG8_(CORE)                           (ASM_BASEADDR+(CORE << CORE_OFFSET_SHIFT_BIT)+ASM_DBG8 )
#define ASM_DBG9_(CORE)                           (ASM_BASEADDR+(CORE << CORE_OFFSET_SHIFT_BIT)+ASM_DBG9 )
#define ASM_DBG10_(CORE)                          (ASM_BASEADDR+(CORE << CORE_OFFSET_SHIFT_BIT)+ASM_DBG10 )
#define ASM_DBG11_(CORE)                          (ASM_BASEADDR+(CORE << CORE_OFFSET_SHIFT_BIT)+ASM_DBG11 )
#define ASM_DBG12_(CORE)                          (ASM_BASEADDR+(CORE << CORE_OFFSET_SHIFT_BIT)+ASM_DBG12 )
#define ASM_DUMMY_(CORE)                          (ASM_BASEADDR+(CORE << CORE_OFFSET_SHIFT_BIT)+ASM_DUMMY )
#define ASM_TOP_INT_STATUS_TOP                    (ASM_BASEADDR+ASM_TOP_INT_STATUS)
#define ASM_TOP_CORE_EN_TOP                       (ASM_BASEADDR+ASM_TOP_CORE_EN)



//MCU ASM GCR Register Address
#define ASM_GCR_SWLA_TRIG_(CORE)                  (ASM_GCR_BASEADDR+(CORE << CORE_OFFSET_SHIFT_BIT)+ASM_GCR_SWLA_TRIG)
#define ASM_GCR_TC0_CONTEXT_ID_(CORE)             (ASM_GCR_BASEADDR+(CORE << CORE_OFFSET_SHIFT_BIT)+ASM_GCR_TC0_CONTEXT_ID)
#define ASM_GCR_TC1_CONTEXT_ID_(CORE)             (ASM_GCR_BASEADDR+(CORE << CORE_OFFSET_SHIFT_BIT)+ASM_GCR_TC1_CONTEXT_ID)
#define ASM_GCR_TC2_CONTEXT_ID_(CORE)             (ASM_GCR_BASEADDR+(CORE << CORE_OFFSET_SHIFT_BIT)+ASM_GCR_TC2_CONTEXT_ID)
#define ASM_GCR_TC3_CONTEXT_ID_(CORE)             (ASM_GCR_BASEADDR+(CORE << CORE_OFFSET_SHIFT_BIT)+ASM_GCR_TC3_CONTEXT_ID)
#define ASM_GCR_TC0_PROFILE_ADDON_INFO0_(CORE)    (ASM_GCR_BASEADDR+(CORE << CORE_OFFSET_SHIFT_BIT)+ASM_GCR_TC0_PROFILE_ADDON_INFO0)
#define ASM_GCR_TC0_PROFILE_ADDON_INFO1_(CORE)    (ASM_GCR_BASEADDR+(CORE << CORE_OFFSET_SHIFT_BIT)+ASM_GCR_TC0_PROFILE_ADDON_INFO1)
#define ASM_GCR_TC0_PROFILE_ADDON_INFO2_(CORE)    (ASM_GCR_BASEADDR+(CORE << CORE_OFFSET_SHIFT_BIT)+ASM_GCR_TC0_PROFILE_ADDON_INFO2)
#define ASM_GCR_TC0_PROFILE_ADDON_INFO3_(CORE)    (ASM_GCR_BASEADDR+(CORE << CORE_OFFSET_SHIFT_BIT)+ASM_GCR_TC0_PROFILE_ADDON_INFO3)
#define ASM_GCR_TC1_PROFILE_ADDON_INFO0_(CORE)    (ASM_GCR_BASEADDR+(CORE << CORE_OFFSET_SHIFT_BIT)+ASM_GCR_TC1_PROFILE_ADDON_INFO0)
#define ASM_GCR_TC1_PROFILE_ADDON_INFO1_(CORE)    (ASM_GCR_BASEADDR+(CORE << CORE_OFFSET_SHIFT_BIT)+ASM_GCR_TC1_PROFILE_ADDON_INFO1)
#define ASM_GCR_TC1_PROFILE_ADDON_INFO2_(CORE)    (ASM_GCR_BASEADDR+(CORE << CORE_OFFSET_SHIFT_BIT)+ASM_GCR_TC1_PROFILE_ADDON_INFO2)
#define ASM_GCR_TC1_PROFILE_ADDON_INFO3_(CORE)    (ASM_GCR_BASEADDR+(CORE << CORE_OFFSET_SHIFT_BIT)+ASM_GCR_TC1_PROFILE_ADDON_INFO3)
#define ASM_GCR_TC2_PROFILE_ADDON_INFO0_(CORE)    (ASM_GCR_BASEADDR+(CORE << CORE_OFFSET_SHIFT_BIT)+ASM_GCR_TC2_PROFILE_ADDON_INFO0)
#define ASM_GCR_TC2_PROFILE_ADDON_INFO1_(CORE)    (ASM_GCR_BASEADDR+(CORE << CORE_OFFSET_SHIFT_BIT)+ASM_GCR_TC2_PROFILE_ADDON_INFO1)
#define ASM_GCR_TC2_PROFILE_ADDON_INFO2_(CORE)    (ASM_GCR_BASEADDR+(CORE << CORE_OFFSET_SHIFT_BIT)+ASM_GCR_TC2_PROFILE_ADDON_INFO2)
#define ASM_GCR_TC2_PROFILE_ADDON_INFO3_(CORE)    (ASM_GCR_BASEADDR+(CORE << CORE_OFFSET_SHIFT_BIT)+ASM_GCR_TC2_PROFILE_ADDON_INFO3)
#define ASM_GCR_TC3_PROFILE_ADDON_INFO0_(CORE)    (ASM_GCR_BASEADDR+(CORE << CORE_OFFSET_SHIFT_BIT)+ASM_GCR_TC3_PROFILE_ADDON_INFO0)
#define ASM_GCR_TC3_PROFILE_ADDON_INFO1_(CORE)    (ASM_GCR_BASEADDR+(CORE << CORE_OFFSET_SHIFT_BIT)+ASM_GCR_TC3_PROFILE_ADDON_INFO1)
#define ASM_GCR_TC3_PROFILE_ADDON_INFO2_(CORE)    (ASM_GCR_BASEADDR+(CORE << CORE_OFFSET_SHIFT_BIT)+ASM_GCR_TC3_PROFILE_ADDON_INFO2)
#define ASM_GCR_TC3_PROFILE_ADDON_INFO3_(CORE)    (ASM_GCR_BASEADDR+(CORE << CORE_OFFSET_SHIFT_BIT)+ASM_GCR_TC3_PROFILE_ADDON_INFO3)





//ASM MCU CORE register
#define ASM_TC_CONTEXT_ID_(CORE,TC)               (ASM_TC0_CONTEXT_ID_(CORE)+(TC*4))
#define ASM_GCR_TC_CONTEXT_ID_(CORE,TC)           (ASM_GCR_TC0_CONTEXT_ID_(CORE)+(TC*4))

#define ASM_TC_ADDON_OFFSET                       (ASM_GCR_TC1_PROFILE_ADDON_INFO0-ASM_GCR_TC0_PROFILE_ADDON_INFO0)
#define ASM_TC_PROFILE_ADDON_INFO_(CORE)          (ASM_TC0_PROFILE_ADDON_INFO0_(CORE))
#define ASM_PROFILE_ADDON_INFO_(CORE,TC)          (ASM_TC0_PROFILE_ADDON_INFO0_(CORE)+(TC*ASM_TC_ADDON_OFFSET))
#define ASM_GCR_TC_PROFILE_ADDON_INFO_(CORE)      (ASM_GCR_TC0_PROFILE_ADDON_INFO0_(CORE))
#define ASM_GCR_PROFILE_ADDON_INFO_(CORE,TC)      (ASM_GCR_TC0_PROFILE_ADDON_INFO0_(CORE)+(TC*ASM_TC_ADDON_OFFSET))


#define ASM_TC_ID_(CORE,TC)                       (ASM_TC0_TC_ID_(CORE)+(TC*4)) 
#define ASM_TC_MCU_PMC0_(CORE,TC)                 (ASM_TC0_MCU_PMC0_(CORE)+(TC*8)) 
#define ASM_TC_MCU_PMC1_(CORE,TC)                 (ASM_TC0_MCU_PMC1_(CORE)+(TC*8)) 
#define ASM_MCU_ELM_CNT_(CORE,CNT)                (ASM_MCU_ELM_CNT0_(CORE)+(CNT*4))
#define ASM_DBG_(CORE,NUM)                        (ASM_DBG1_(CORE)+(NUM*4))



//////////////////ASM Definition/////////////////////////////


#define IRQ_ASM_CORE	                          MD_IRQID_ADOE

//#define ASM_NUM	                                  (6)
#define ASM_TC_NUM	                              (4)
#define ASM_PMC_NUM                               (2)
#define ASM_MCU_ELM_NUM                           (4)
#define ASM_ADDON_NUM	                          (4)

#define WORDS_PER_1KB	                          (1024 >> 2)
#define ASM_VERSION_VAL                           (0x20160221)


//ASM_GEN_CONFIG
#define ASM_ENABLE_BIT	                          (0)
#define ASM_RESET_BIT	                          (2)
#define ASM_PDI_BIT		                          (3)
#define ASM_MCU_ELM_EN_BIT                        (4)
#define ASM_PMC_REF_VALID_BIT		              (12)

#define ASM_ENABLE_MASK	                          (1 << ASM_ENABLE_BIT)
#define ASM_RESET_MASK	                          (1 << ASM_RESET_BIT)
#define ASM_PDI_MASK		                      (1 << ASM_PDI_BIT)
#define ASM_MCU_ELM_EN_MASK                       (1 << ASM_MCU_ELM_EN_BIT)
#define ASM_PMC_REF_VALID_MASK		              (1 << ASM_PMC_REF_VALID_BIT)

#define ASM_TC_ID_CORE_ID_OPTION_MASK             (1 << ASM_TC_ID_CORE_ID_EN)
#define ASM_PC_OPTION_MASK	                      (1 << ASM_PC_EN)
#define ASM_PMC_OPTION_MASK	                      ((1 << ASM_MCU_PMC0_EN)|(1 << ASM_MCU_PMC1_EN))
#define ASM_MCU_ELM_OPTION_MASK	                  ((1 << ASM_MCU_ELM_CNT0_EN)|(1 << ASM_MCU_ELM_CNT1_EN)|(1 << ASM_MCU_ELM_CNT2_EN)|\
                                                   (1 << ASM_MCU_ELM_CNT3_EN))


#define ASM_ADDON_OPTION_MASK                     (0x00FF0000)

#define ASM_OPTION_MASK                           ((1 << ASM_PROFILE_END)-1)

//ASM_MODE_CONFIG
#define ASM_MCG_BIT                               (0)
#define ASM_TRACER_MODE_BIT                       (1)
#define ASM_WRAP_MODE_EN_BIT                      (2)
#define APB_WR_GCR_BIT                            (3)
#define ABM_WORK_TC_REF_VALID_BIT                 (5)
#define ABM_TRANS_IDLE_EN_BIT                     (7)


#define ASM_MCG_EN                                (0 << ASM_MCG_BIT)
#define ASM_SWLA_MODE_EN                          (0 << ASM_TRACER_MODE_BIT)
#define ASM_TRACER_MODE_EN                        (1 << ASM_TRACER_MODE_BIT)
#define ASM_WRAP_MODE_EN                          (1 << ASM_WRAP_MODE_EN_BIT)
#define APB_WR_GCR_BIT_EN                         (1 << APB_WR_GCR_BIT)
#define ABM_WORK_TC_REF_VALID_EN                  (1 << ABM_WORK_TC_REF_VALID_BIT)
#define ABM_TRANS_IDLE_EN                         (1 << ABM_TRANS_IDLE_EN_BIT)

#define ASM_HW_SWLA_STRAM_MODE_CONFIG_VAL         (ASM_SWLA_MODE_EN|ASM_MCG_EN|ABM_TRANS_IDLE_EN)
#define ASM_HW_SWLA_WRAP_MODE_CONFIG_VAL   	      (ASM_SWLA_MODE_EN|ASM_WRAP_MODE_EN|ASM_MCG_EN|ABM_TRANS_IDLE_EN)
#define ASM_HW_SWTR_STRAM_MODE_CONFIG_VAL	      (ASM_TRACER_MODE_EN|ASM_MCG_EN|ABM_TRANS_IDLE_EN)
#define ASM_HW_SWTR_WRAP_MODE_CONFIG_VAL	      (ASM_TRACER_MODE_EN|ASM_WRAP_MODE_EN|ASM_MCG_EN|ABM_TRANS_IDLE_EN)

//ASM_SPM_CONFIG
#define ASM_SPM_REQ_BIT		                      (0)
#define ASM_SPM_GRANT_BIT	                      (1)
#define ASM_CTRL_IDLE_BIT		                  (2)
#define ASM_AXI_MST_SPM_GRANT_BIT                 (3)
#define ASM_AXI_MST_IDLE_BIT                      (4)
#define ASM_IDLE_BIT                              (8)

#define ASM_SPM_REQ_MASK		                  (1 << ASM_SPM_REQ_BIT)
#define ASM_SPM_GRANT_MASK	                      (1 << ASM_SPM_GRANT_BIT)
#define ASM_CTRL_IDLE_MASK		                  (1 << ASM_CTRL_IDLE_BIT)
#define ASM_AXI_MST_SPM_GRANT_MASK                (1 << ASM_AXI_MST_SPM_GRANT_BIT)
#define ASM_AXI_MST_IDLE_MASK                     (1 << ASM_AXI_MST_IDLE_BIT)
#define ASM_IDLE_MASK                             (1 << ASM_IDLE_BIT)


//ASM_HEADER
#define ASM_PDI_HEADER_VAL 		                 (0x4C4F5354)
#define ASM_HW_SWTR_HEADER_VAL    	             (0x53575452)
#define ID_HEAD  (0x4449 << 16)
#define ASM_HEADER_SIZE                          (2)
#define ASM_CORE_START_BIT                       (0)
#define ASM_TC_START_BIT                         (8)
#define ASM_QOS_START_BIT                        (16)
#define ASM_QOS_BITS_PER_VPE                     (2)
#define ASM_QOS_CLR_MASK                         (0x03)


#define ASM_MAX_BUF_BIT_LEN                      (32)
#define ASM_BUF_ALT_TH_VAL                       (4)

/*SRAM*/
#define ASM_SRAM_FULL_STATUS_BIT                 (28)
#define ASM_SRAM_EMPTY_STATUS_BIT                (27)
#define ASM_SRAM_DBG_MODE_BIT                    (0)
#define ASM_SRAM_DBG_MODE_RDY_BIT                (1)
#define ASM_SRAM_WR_BIT                          (0)
#define ASM_SRAM_RD_BIT                          (8)
#define ASM_SRAM_MAX_WATER_BIT                   (16)


#define ASM_SRAM_WR_MASK                         (0x000000FF)
#define ASM_SRAM_RD_MASK                         (0x0000FF00)
#define ASM_SRAM_MAX_WATER_MASK                  (0x01FF0000)
#define ASM_SRAM_FULL_STATUS_MASK                (1 << ASM_SRAM_FULL_STATUS_BIT)
#define ASM_SRAM_EMPTY_STATUS_MASK               (1 << ASM_SRAM_EMPTY_STATUS_BIT)
#define ASM_SRAM_DBG_MODE_MASK                   (1 << ASM_SRAM_DBG_MODE_BIT)
#define ASM_SRAM_DBG_MODE_RDY_MASK               (1 << ASM_SRAM_DBG_MODE_RDY_BIT)
#define ASM_SRAM_DBG_ADDR_MASK                   (0x000000FF)


#define ASM_TOP_INT_STATUS_BIT                   (0)
#define ASM_TOP_ERROR_INT_STATUS_BIT             (8)
#define ASM_TOP_IDLE_STATUS_BIT                  (16)
#define ASM_TOP_INT_MASK_STATUS_BIT              (24)
#define ASM_TOP_INT_STATUS_MASK                  (0x03)
#define ASM_TOP_ERROR_INT_STATUS_MASK            (0x0300)
#define ASM_TOP_IDLE_STATUS_MASK                 (0x030000)
#define ASM_TOP_INT_MASK_STATUS_MASK             (0x03000000)

#define ASM_AXI_MAX_BURST_LEN_BIT                (0)
#define ASM_AXI_MAX_OSTD_NUMBER_BIT              (4)
#define ASM_AXI_POST_WRITE_CFG_BIT               (8)
#define ASM_AXI_AWPROT_BIT                       (12)
#define ASM_AXI_AWLOCK_BIT                       (16)
#define ASM_AXI_WID_BIT                          (20)
#define ASM_AXI_ULTRA_BIT                        (24)
#define ASM_AXI_FLUSH_BIT                        (28)
#define ASM_AXI_CONFIG_DEFAULT_VAL               (0x00000002)
#define ASM_SPM_CONFIG_DEFAULT_VAL               (0x00000114)


#define ASM_AXI_MAX_BURST_LEN_MASK               (0x00000003)
#define ASM_AXI_MAX_OSTD_NUMBER_MASK             (0x00000030)
#define ASM_AXI_POST_WRITE_CFG_MASK              (0x00000300)
#define ASM_AXI_AWPROT_MASK                      (0x00007000)
#define ASM_AXI_AWLOCK_MASK                      (0x00030000)
#define ASM_AXI_WID_MASK                         (0x00100000)
#define ASM_AXI_ULTRA_MASK                       (0x03000000)
#define ASM_AXI_FLUSH_MASK                       (0x30000000)

// Interrupter ack

#define ASM_THRESHOLD_INT_ACK                    (1 << ASM_THRESHOLD_INT)
#define ASM_AGGRESSIVE_TRIG_INT_ACK              (1 << ASM_AGGRESSIVE_TRIG_INT)
#define ASM_APB_WR_GCR_ILLEGAL_INT_ACK           (1 << ASM_APB_WR_GCR_ILLEGAL_INT)
#define ASM_ILLEGAL_DISABLE_INT_ACK              (1 << ASM_ILLEGAL_DISABLE_INT)
#define ASM_PDI_INT_ACK                          (1 << ASM_PDI_INT)


//////////////////ASM Data structure/////////////////////////////

typedef struct _ASM_STRUCT {
    kal_uint32   asm_mode;
//    kal_uint32   gen_config;
    kal_uint32   mode_config;
    kal_uint32   swtr_header;
    
    kal_uint32   buf_base_address;
    kal_uint32   buf_size;
    kal_uint32   buf_read_ptr;
    kal_uint32   buf_write_ptr;
    kal_uint32   thresh_value;
    kal_uint32   buf_remain_size;
    
    kal_uint32   sram_status;
    kal_uint32   sram_max_buf_size;
    kal_uint32   water_level;
    
    kal_uint32   profile_en;
    kal_uint32   addon[ASM_TC_NUM][ASM_ADDON_NUM];
//    kal_uint32   context_id[ASM_TC_NUM];
    
    kal_uint32   sample_rate;
    kal_uint32   wrap_cnt;
    kal_uint32   pdi_cnt;
    kal_uint32   axi_config;
//    kal_uint32   trigger_cnt;

    kal_uint32   int_en;
    kal_uint32   int_status;
    kal_uint32   asm_is_enabled;
    kal_uint32   spm_set;
    kal_uint32   start_time;
    kal_uint32   stop_time;
    
} ASM_STRUCT;

extern kal_uint32 ASM_Dummy_Read;
extern kal_uint32 PC_Val;

//////////////////ASM Macro/////////////////////////////

/*Mode and Config*/
#define ASM_GET_GEN_CONFIG(CORE,VAL) do{VAL = (*(volatile kal_uint32*)(ASM_GEN_CONFIG_(CORE)));}while(0)

#define ASM_SET_GEN_CONFIG(CORE,VAL) do{*((volatile kal_uint32*)(ASM_GEN_CONFIG_(CORE))) = (VAL);\
    ASM_Dummy_Read = (*(volatile kal_uint32*)(ASM_GEN_CONFIG_(CORE)));}while(0)

#define ASM_GET_MODE_CONFIG(CORE,VAL) do{VAL = (*(volatile kal_uint32*)(ASM_MODE_CONFIG_(CORE)));}while(0)

#define ASM_SET_MODE_CONFIG(CORE,VAL) do{*((volatile kal_uint32*)(ASM_MODE_CONFIG_(CORE))) = (VAL);\
    ASM_Dummy_Read = (*(volatile kal_uint32*)(ASM_MODE_CONFIG_(CORE)));}while(0)


/*Interrupter*/
#define ASM_GET_L2ISAR(CORE,VAL) do{VAL = (*(volatile kal_uint32*)(ASM_L2ISAR_(CORE)));}while(0)

#define ASM_SET_L2ISAR(CORE,VAL) do{*((volatile kal_uint32*)(ASM_L2ISAR_(CORE))) = (VAL);\
    ASM_Dummy_Read = (*(volatile kal_uint32*)(ASM_L2ISAR_(CORE)));}while(0)

#define ASM_GET_L2IMKR(CORE,VAL) do{VAL = (*(volatile kal_uint32*)(ASM_L2IMKR_(CORE)));}while(0)

#define ASM_GET_L2IMCR(CORE,VAL) do{VAL = (*(volatile kal_uint32*)(ASM_L2IMCR_(CORE)));}while(0)

#define ASM_SET_L2IMCR(CORE,VAL) do{*((volatile kal_uint32*)(ASM_L2IMCR_(CORE))) = (VAL);\
    ASM_Dummy_Read = (*(volatile kal_uint32*)(ASM_L2IMCR_(CORE)));}while(0)

#define ASM_GET_L2IMSR(CORE,VAL) do{VAL = (*(volatile kal_uint32*)(ASM_L2IMSR_(CORE)));}while(0)

#define ASM_SET_L2IMSR(CORE,VAL) do{*((volatile kal_uint32*)(ASM_L2IMSR_(CORE))) = (VAL);\
    ASM_Dummy_Read = (*(volatile kal_uint32*)(ASM_L2IMSR_(CORE)));}while(0)


/*Trigger*/
#define ASM_GET_SWLA_TRIG(CORE,VAL) do{VAL = (*(volatile kal_uint32*)(ASM_SWLA_TRIG_(CORE)));}while(0)

#define ASM_SET_SWLA_TRIG(CORE,TC) do{*((volatile kal_uint32*)(ASM_SWLA_TRIG_(CORE))) = (1 << TC);\
    ASM_Dummy_Read = (*(volatile kal_uint32*)(ASM_SWLA_TRIG_(CORE)));}while(0)

#define ASM_GET_GCR_SWLA_TRIG(CORE,VAL) do{VAL = (*(volatile kal_uint32*)(ASM_GCR_SWLA_TRIG_(CORE)));}while(0)

#define ASM_SET_GCR_SWLA_TRIG(CORE,TC) do{*((volatile kal_uint32*)(ASM_GCR_SWLA_TRIG_(CORE))) = (1 << TC);\
    ASM_Dummy_Read = (*(volatile kal_uint32*)(ASM_GCR_SWLA_TRIG_(CORE))); }while(0)


/*TC_CONTEXT_ID*/
#define ASM_GET_TC_CONTEXT_ID(CORE,TC,VAL) do{VAL = (*(volatile kal_uint32*)(ASM_TC_CONTEXT_ID_(CORE,TC)));}while(0)

#define ASM_SET_TC_CONTEXT_ID(CORE,TC,VAL) do{*((volatile kal_uint32*)(ASM_TC_CONTEXT_ID_(CORE,TC))) = (VAL);\
    ASM_Dummy_Read = (*(volatile kal_uint32*)(ASM_TC_CONTEXT_ID_(CORE,TC)));}while(0)

#define ASM_GET_GCR_TC_CONTEXT_ID(CORE,TC,VAL) do{VAL = (*(volatile kal_uint32*)(ASM_GCR_TC_CONTEXT_ID_(CORE,TC)));}while(0)

#define ASM_SET_GCR_TC_CONTEXT_ID(CORE,TC,VAL) do{*((volatile kal_uint32*)(ASM_GCR_TC_CONTEXT_ID_(CORE,TC))) = (VAL);\
    ASM_Dummy_Read = (*(volatile kal_uint32*)(ASM_GCR_TC_CONTEXT_ID_(CORE,TC)));}while(0)


/*CORE/TC ID*/
#define ASM_GET_CORE_ID(CORE,VAL) do{VAL = (*(volatile kal_uint32*)(ASM_CORE_ID_(CORE)));}while(0)

#define ASM_SET_CORE_ID(CORE,VAL) do{*((volatile kal_uint32*)(ASM_CORE_ID_(CORE))) = (VAL);\
    ASM_Dummy_Read = (*(volatile kal_uint32*)(ASM_CORE_ID_(CORE)));}while(0)

#define ASM_GET_TC_ID(CORE,TC,VAL) do{VAL = (*(volatile kal_uint32*)(ASM_TC_ID_(CORE,TC)));}while(0)

#define ASM_SET_TC_ID(CORE,TC,VAL) do{*((volatile kal_uint32*)(ASM_TC_ID_(CORE,TC))) = (VAL);\
    ASM_Dummy_Read = (*(volatile kal_uint32*)(ASM_TC_ID_(CORE,TC)));}while(0)



/*Option*/
#define ASM_GET_PROFILE_EN(CORE,VAL) do{VAL = (*(volatile kal_uint32*)(ASM_PROFILE_EN_(CORE)));}while(0)

#define ASM_SET_PROFILE_EN(CORE,VAL) do{*((volatile kal_uint32*)(ASM_PROFILE_EN_(CORE))) = (VAL);\
    ASM_Dummy_Read = (*(volatile kal_uint32*)(ASM_PROFILE_EN_(CORE)));}while(0)

#define ASM_GET_MCU_PC(CORE,VAL) do{VAL = (*(volatile kal_uint32*)(ASM_MCU_PC_(CORE)));}while(0)

#define ASM_GET_TC_MCU_PMC0(CORE,TC,VAL) do{VAL = (*(volatile kal_uint32*)(ASM_TC_MCU_PMC0_(CORE,TC)));}while(0)

#define ASM_GET_TC_MCU_PMC1(CORE,TC,VAL) do{VAL = (*(volatile kal_uint32*)(ASM_TC_MCU_PMC1_(CORE,TC)));}while(0)

#define ASM_GET_MCU_ELM_CNT(CORE,CNT,VAL) do{VAL = (*(volatile kal_uint32*)(ASM_MCU_ELM_CNT_(CORE,CNT)));}while(0)

#define ASM_GET_IOCU_ELM_CNT(CORE,CNT,VAL) do{VAL = (*(volatile kal_uint32*)(ASM_IOCU_ELM_CNT_(CORE,CNT)));}while(0)


#define ASM_GET_TIME_STAMP(CORE,VAL) do{VAL = (*(volatile kal_uint32*)(ASM_TIME_STAMP_(CORE)));}while(0)

#define ASM_GET_VERSION(CORE,VAL) do{VAL = (*(volatile kal_uint32*)(ASM_VERSION_(CORE)));}while(0)

#define ASM_GET_TR_HEAD(CORE,VAL) do{VAL = (*(volatile kal_uint32*)(ASM_TR_HEAD_(CORE)));}while(0)

#define ASM_SET_TR_HEAD(CORE,VAL) do{*(volatile kal_uint32*)(ASM_TR_HEAD_(CORE)) = (VAL);\
    ASM_Dummy_Read = (*(volatile kal_uint32*)(ASM_TR_HEAD_(CORE)));}while(0)

#define ASM_GET_TRACER_SAMPLE_RATE(CORE,VAL) do{VAL = (*(volatile kal_uint32*)(ASM_TRACER_SAMPLE_RATE_(CORE)));}while(0)

#define ASM_SET_TRACER_SAMPLE_RATE(CORE,VAL) do{*(volatile kal_uint32*)(ASM_TRACER_SAMPLE_RATE_(CORE)) = (VAL);\
    ASM_Dummy_Read = (*(volatile kal_uint32*)(ASM_TRACER_SAMPLE_RATE_(CORE)));}while(0)

#define ASM_GET_PDI_HEADER(CORE,VAL) do{VAL = (*(volatile kal_uint32*)(ASM_PDI_HEADER_(CORE)));}while(0)

#define ASM_SET_PDI_HEADER(CORE,VAL) do{*(volatile kal_uint32*)(ASM_PDI_HEADER_(CORE)) = (VAL);\
    ASM_Dummy_Read = (*(volatile kal_uint32*)(ASM_PDI_HEADER_(CORE)));}while(0)

#define ASM_GET_PDI_CNT(CORE,VAL) do{VAL = (*(volatile kal_uint32*)(ASM_PDI_CNT_(CORE)));}while(0)

#define ASM_SET_PDI_CNT(CORE,VAL) do{*(volatile kal_uint32*)(ASM_PDI_CNT_(CORE)) = (VAL);\
    ASM_Dummy_Read = (*(volatile kal_uint32*)(ASM_PDI_CNT_(CORE)));}while(0)

#define ASM_GET_WRAP_CNT(CORE,VAL) do{VAL = (*(volatile kal_uint32*)(ASM_WRAP_CNT_(CORE)));}while(0)

#define ASM_SET_WRAP_CNT(CORE,VAL) do{*(volatile kal_uint32*)(ASM_WRAP_CNT_(CORE)) = (VAL);\
    ASM_Dummy_Read = (*(volatile kal_uint32*)(ASM_WRAP_CNT_(CORE)));}while(0)

#define ASM_GET_SPM_CONFIG(CORE,VAL) do{VAL = (*(volatile kal_uint32*)(ASM_SPM_CONFIG_(CORE)));}while(0)

#define ASM_SET_SPM_CONFIG(CORE,VAL) do{*(volatile kal_uint32*)(ASM_SPM_CONFIG_(CORE)) = (VAL);\
    ASM_Dummy_Read = (*(volatile kal_uint32*)(ASM_SPM_CONFIG_(CORE)));}while(0)

#define ASM_SET_SPM_REQ(CORE,VAL) do{*(volatile kal_uint32*)(ASM_SPM_CONFIG_(CORE)) = (VAL)&ASM_SPM_REQ_MASK;\
    ASM_Dummy_Read = (*(volatile kal_uint32*)(ASM_SPM_CONFIG_(CORE)));}while(0)

#define ASM_GET_SPM_REQ(CORE,VAL) do{\
    VAL = (((*(volatile kal_uint32*)(ASM_SPM_CONFIG_(CORE)))&ASM_SPM_REQ_MASK) >> ASM_SPM_REQ_BIT);\
    }while(0)

#define ASM_GET_SPM_GRANT(CORE,VAL) do{\
    VAL = (((*(volatile kal_uint32*)(ASM_SPM_CONFIG_(CORE)))&ASM_SPM_GRANT_MASK) >> ASM_SPM_GRANT_BIT);\
    }while(0)

#define ASM_GET_SPM_CTRL_IDLE(CORE,VAL) do{\
    VAL = (((*(volatile kal_uint32*)(ASM_SPM_CONFIG_(CORE)))&ASM_CTRL_IDLE_MASK) >> ASM_CTRL_IDLE_BIT);\
    }while(0)

#define ASM_GET_SPM_AXI_MST_SPM_GRANT(CORE,VAL) do{\
    VAL = (((*(volatile kal_uint32*)(ASM_SPM_CONFIG_(CORE)))&ASM_AXI_MST_SPM_GRANT_MASK) >> ASM_AXI_MST_SPM_GRANT_BIT);\
    }while(0)

#define ASM_GET_SPM_AXI_MST_IDLE(CORE,VAL) do{\
    VAL = (((*(volatile kal_uint32*)(ASM_SPM_CONFIG_(CORE)))&ASM_AXI_MST_IDLE_MASK) >> ASM_AXI_MST_IDLE_BIT);\
    }while(0)

#define ASM_GET_IDLE(CORE,VAL) do{\
    VAL = (((*(volatile kal_uint32*)(ASM_SPM_CONFIG_(CORE)))&ASM_IDLE_MASK) >> ASM_IDLE_BIT);\
    }while(0)

#define ASM_GET_TOP_INT_STATUS(VAL) do{\
    VAL = (((*(volatile kal_uint32*)(ASM_TOP_INT_STATUS_TOP))&ASM_TOP_INT_STATUS_MASK) >> ASM_TOP_INT_STATUS_BIT);\
    }while(0)

#define ASM_GET_TOP_ERROR_INT_STATUS(VAL) do{\
    VAL = (((*(volatile kal_uint32*)(ASM_TOP_INT_STATUS_TOP))&ASM_TOP_ERROR_INT_STATUS_MASK) >> ASM_TOP_ERROR_INT_STATUS_BIT);\
    }while(0)

#define ASM_GET_TOP_IDLE_STATUS(VAL) do{\
    VAL = (((*(volatile kal_uint32*)(ASM_TOP_INT_STATUS_TOP))&ASM_TOP_IDLE_STATUS_MASK) >> ASM_TOP_IDLE_STATUS_BIT);\
    }while(0)
    
#define ASM_GET_TOP_INT_MASK_STATUS(VAL) do{\
    VAL = (((*(volatile kal_uint32*)(ASM_TOP_INT_STATUS))&ASM_TOP_INT_MASK_STATUS_MASK) >> ASM_TOP_INT_MASK_STATUS_BIT);\
    }while(0)

#define ASM_GET_TOP_STATUS(VAL) do{VAL = (*(volatile kal_uint32*)(ASM_TOP_INT_STATUS_TOP));}while(0)

#define ASM_GET_DUMMY(CORE,VAL) do{VAL = (*(volatile kal_uint32*)(ASM_DUMMY_(CORE)));}while(0)

#define ASM_SET_DUMMY(CORE,VAL) do{*(volatile kal_uint32*)(ASM_DUMMY_(CORE)) = (VAL);}while(0)


/*BUFFER*/
#define ASM_GET_LOG_BUF_BASEADDR(CORE,VAL) do{VAL = (*(volatile kal_uint32*)(ASM_LOG_BUF_BASEADDR_(CORE)));}while(0)

#define ASM_SET_LOG_BUF_BASEADDR(CORE,VAL) do{*(volatile kal_uint32*)(ASM_LOG_BUF_BASEADDR_(CORE)) = (VAL);\
    ASM_Dummy_Read = (*(volatile kal_uint32*)(ASM_LOG_BUF_BASEADDR_(CORE)));}while(0)

#define ASM_GET_LOG_BUF_SIZE(CORE,VAL) do{VAL = (*(volatile kal_uint32*)(ASM_LOG_BUF_SIZE_(CORE)));}while(0)

#define ASM_SET_LOG_BUF_SIZE(CORE,VAL) do{*(volatile kal_uint32*)(ASM_LOG_BUF_SIZE_(CORE)) = (VAL);\
    ASM_Dummy_Read = (*(volatile kal_uint32*)(ASM_LOG_BUF_SIZE_(CORE)));}while(0)

#define ASM_GET_BUF_RD_PTR(CORE,VAL) do{VAL = (*(volatile kal_uint32*)(ASM_BUF_RD_PTR_(CORE)));}while(0)

#define ASM_SET_BUF_RD_PTR(CORE,VAL) do{*(volatile kal_uint32*)(ASM_BUF_RD_PTR_(CORE)) = (VAL);\
    ASM_Dummy_Read = (*(volatile kal_uint32*)(ASM_BUF_RD_PTR_(CORE)));}while(0)

#define ASM_GET_BUF_WR_PTR(CORE,VAL) do{VAL = (*(volatile kal_uint32*)(ASM_BUF_WR_PTR_(CORE)));}while(0)

#define ASM_SET_BUF_WR_PTR(CORE,VAL) do{*(volatile kal_uint32*)(ASM_BUF_WR_PTR_(CORE)) = (VAL);\
    ASM_Dummy_Read = (*(volatile kal_uint32*)(ASM_BUF_WR_PTR_(CORE)));}while(0)

#define ASM_GET_BUF_ALT_THRESH(CORE,VAL) do{VAL = (*(volatile kal_uint32*)(ASM_BUF_ALT_THRESH_(CORE)));}while(0)

#define ASM_SET_BUF_ALT_THRESH(CORE,VAL) do{*(volatile kal_uint32*)(ASM_BUF_ALT_THRESH_(CORE)) = (VAL);\
    ASM_Dummy_Read = (*(volatile kal_uint32*)(ASM_BUF_ALT_THRESH_(CORE)));}while(0)

#define ASM_GET_REM_LOG_BUF_SIZE(CORE,VAL) do{VAL = (*(volatile kal_uint32*)(ASM_REM_LOG_BUF_SIZE_(CORE)));}while(0)


/*SRAM*/
#define ASM_GET_SRAM_MAX_BUF_SIZE(CORE,VAL) do{VAL = (*(volatile kal_uint32*)(ASM_SRAM_MAX_BUF_SIZE_(CORE)));}while(0)

#define ASM_SET_SRAM_MAX_BUF_SIZE(CORE,VAL) do{*(volatile kal_uint32*)(ASM_SRAM_MAX_BUF_SIZE_(CORE)) = (VAL);\
    ASM_Dummy_Read = (*(volatile kal_uint32*)(ASM_SRAM_MAX_BUF_SIZE_(CORE)));}while(0)

#define ASM_GET_SRAM_STATUS(CORE,VAL) do{VAL = (*(volatile kal_uint32*)(ASM_SRAM_STATUS_(CORE)));}while(0)

#define ASM_SET_SRAM_STATUS(CORE,VAL) do{*(volatile kal_uint32*)(ASM_SRAM_STATUS_(CORE)) = (VAL);\
    ASM_Dummy_Read = (*(volatile kal_uint32*)(ASM_SRAM_STATUS_(CORE)));}while(0)

#define ASM_GET_SRAM_WR_PTR(CORE,VAL) do{VAL = (*(volatile kal_uint32*)(ASM_SRAM_STATUS_(CORE)))&ASM_SRAM_WR_MASK;}while(0)

#define ASM_GET_SRAM_RD_PTR(CORE,VAL) do{VAL = ((*(volatile kal_uint32*)(ASM_SRAM_STATUS_(CORE)))&ASM_SRAM_RD_MASK)>>ASM_SRAM_RD_BIT;}while(0)

#define ASM_GET_SRAM_MAX_WATER(CORE,VAL) do{VAL = ((*(volatile kal_uint32*)(ASM_SRAM_STATUS_(CORE)))&ASM_SRAM_MAX_WATER_MASK)>>ASM_SRAM_MAX_WATER_BIT;}while(0)

#define ASM_GET_SRAM_FULL_STATUS(CORE,VAL) do{\
    VAL = (*(volatile kal_uint32*)(ASM_SRAM_STATUS_(CORE)))&ASM_SRAM_FULL_STATUS_MASK;}while(0)

#define ASM_GET_SRAM_EMPTY_STATUS(CORE,VAL) do{\
    VAL = (*(volatile kal_uint32*)(ASM_SRAM_STATUS_(CORE)))&ASM_SRAM_EMPTY_STATUS_MASK;}while(0)

#define ASM_GET_SRAM_DBG_MODE(CORE,VAL) do{VAL = (*(volatile kal_uint32*)(ASM_SRAM_DBG_(CORE)))&ASM_SRAM_DBG_MODE_MASK;}while(0)

#define ASM_SET_SRAM_DBG_MODE(CORE,VAL) do{*(volatile kal_uint32*)(ASM_SRAM_DBG_(CORE)) = (VAL)&ASM_SRAM_DBG_MODE_MASK;\
    ASM_Dummy_Read = (*(volatile kal_uint32*)(ASM_SRAM_DBG_(CORE)));}while(0)

#define ASM_GET_SRAM_DBG_MODE_RDY(CORE,VAL) do{\
    VAL = (*(volatile kal_uint32*)(ASM_SRAM_DBG_(CORE)))&ASM_SRAM_DBG_MODE_RDY_MASK;}while(0)

#define ASM_SET_SRAM_DBG_ADDR(CORE,VAL) do{\
    *(volatile kal_uint32*)(ASM_SRAM_DBG_ADDR_(CORE)) = (VAL)&ASM_SRAM_DBG_ADDR_MASK;\
    ASM_Dummy_Read = (*(volatile kal_uint32*)(ASM_SRAM_DBG_ADDR_(CORE)));}while(0)

#define ASM_GET_SRAM_DBG_ADDR(CORE,VAL) do{\
    VAL = (*(volatile kal_uint32*)(ASM_SRAM_DBG_ADDR_(CORE)))&ASM_SRAM_DBG_ADDR_MASK;\
    }while(0)

#define ASM_GET_SRAM_DBG_DATA(CORE,VAL) do{(VAL) = *(volatile kal_uint32*)(ASM_SRAM_DBG_DATA_(CORE));\
    }while(0)


/*DEBUG REGISTER*/
#define ASM_GET_DBG(CORE,NUM,VAL) do{VAL = (*(volatile kal_uint32*)(ASM_DBG_(CORE,NUM)));}while(0)


/*AXI_CONFIG*/
#define ASM_SET_AXI_CONFIG(CORE,VAL) do{*(volatile kal_uint32*)(ASM_AXI_CONFIG_(CORE)) = (VAL);\
    ASM_Dummy_Read = *(volatile kal_uint32*)(ASM_AXI_CONFIG_(CORE));}while(0)


#define ASM_GET_AXI_MAX_BURST_LEN(CORE,VAL) do{\
    VAL = ((*(volatile kal_uint32*)(ASM_AXI_CONFIG_(CORE)))&ASM_AXI_MAX_BURST_LEN_MASK) >> ASM_AXI_MAX_BURST_LEN_BIT;\
    }while(0)

#define ASM_SET_AXI_MAX_BURST_LEN(CORE,VAL) do{\
    *(volatile kal_uint32*)(ASM_AXI_CONFIG_(CORE)) = (((*(volatile kal_uint32*)(ASM_AXI_CONFIG_(CORE)))&~(ASM_AXI_MAX_BURST_LEN_MASK))\
    |((VAL << ASM_AXI_MAX_BURST_LEN_BIT)&(ASM_AXI_MAX_BURST_LEN_MASK)));\
    ASM_Dummy_Read = *(volatile kal_uint32*)(ASM_AXI_CONFIG_(CORE));}while(0)

#define ASM_GET_AXI_MAX_OSTD_NUMBER(CORE,VAL) do{\
    VAL = ((*(volatile kal_uint32*)(ASM_AXI_CONFIG_(CORE)))&ASM_AXI_MAX_OSTD_NUMBER_MASK) >> ASM_AXI_MAX_OSTD_NUMBER_BIT;}while(0)

#define ASM_SET_AXI_MAX_OSTD_NUMBER(CORE,VAL) do{\
    *(volatile kal_uint32*)(ASM_AXI_CONFIG_(CORE)) = (((*(volatile kal_uint32*)(ASM_AXI_CONFIG_(CORE)))&~(ASM_AXI_MAX_OSTD_NUMBER_MASK))\
    |((VAL << ASM_AXI_MAX_OSTD_NUMBER_BIT)&(ASM_AXI_MAX_OSTD_NUMBER_MASK)));\
    ASM_Dummy_Read = *(volatile kal_uint32*)(ASM_AXI_CONFIG_(CORE));}while(0)

#define ASM_GET_AXI_POST_WRITE_CF(CORE,VAL) do{\
    VAL = ((*(volatile kal_uint32*)(ASM_AXI_CONFIG_(CORE)))&ASM_AXI_POST_WRITE_CFG_MASK) >> ASM_AXI_POST_WRITE_CFG_BIT;\
    }while(0)

#define ASM_SET_AXI_POST_WRITE_CF(CORE,VAL) do{\
    *(volatile kal_uint32*)(ASM_AXI_CONFIG_(CORE)) = (((*(volatile kal_uint32*)(ASM_AXI_CONFIG_(CORE)))&~(ASM_AXI_POST_WRITE_CFG_MASK))\
    |((VAL << ASM_AXI_POST_WRITE_CFG_BIT)&(ASM_AXI_POST_WRITE_CFG_MASK)));\
    ASM_Dummy_Read = *(volatile kal_uint32*)(ASM_AXI_CONFIG_(CORE));}while(0)

#define ASM_GET_AXI_AXI_AWPROT(CORE,VAL) do{\
    VAL = ((*(volatile kal_uint32*)(ASM_AXI_CONFIG_(CORE)))&ASM_AXI_AWPROT_MASK) >> ASM_AXI_AWPROT_BIT;}while(0)

#define ASM_SET_AXI_AWPROT(CORE,VAL) do{\
    *(volatile kal_uint32*)(ASM_AXI_CONFIG_(CORE)) = (((*(volatile kal_uint32*)(ASM_AXI_CONFIG_(CORE)))&~(ASM_AXI_AWPROT_MASK))\
    |((VAL << ASM_AXI_AWPROT_BIT)&(ASM_AXI_AWPROT_MASK)));\
    ASM_Dummy_Read = *(volatile kal_uint32*)(ASM_AXI_CONFIG_(CORE));}while(0)

#define ASM_GET_AXI_AWLOCK(CORE,VAL) do{\
    VAL = ((*(volatile kal_uint32*)(ASM_AXI_CONFIG_(CORE)))&ASM_AXI_AWLOCK_MASK) >> ASM_AXI_AWLOCK_BIT;}while(0)

#define ASM_SET_AXI_AWLOCK(CORE,VAL) do{\
    *(volatile kal_uint32*)(ASM_AXI_CONFIG_(CORE)) = (((*(volatile kal_uint32*)(ASM_AXI_CONFIG_(CORE)))&~(ASM_AXI_AWLOCK_MASK))\
    |((VAL << ASM_AXI_AWLOCK_BIT)&(ASM_AXI_AWLOCK_MASK)));\
    ASM_Dummy_Read = *(volatile kal_uint32*)(ASM_AXI_CONFIG_(CORE));}while(0)

#define ASM_GET_AXI_WID(CORE,VAL) do{\
    VAL = ((*(volatile kal_uint32*)(ASM_AXI_CONFIG_(CORE)))&ASM_AXI_WID_MASK) >> ASM_AXI_WID_BIT;\
    }while(0)

#define ASM_SET_AXI_WID(CORE,VAL) do{\
    *(volatile kal_uint32*)(ASM_AXI_CONFIG_(CORE)) = (((*(volatile kal_uint32*)(ASM_AXI_CONFIG_(CORE)))&~(ASM_AXI_WID_MASK))\
    |((VAL << ASM_AXI_WID_BIT)&(ASM_AXI_WID_MASK)));\

#define ASM_GET_AXI_ULTRA(CORE,VAL) do{\
    VAL = ((*(volatile kal_uint32*)(ASM_AXI_CONFIG_(CORE)))&ASM_AXI_ULTRA_MASK) >> ASM_AXI_ULTRA_BIT;\
    }while(0)

#define ASM_SET_AXI_ULTRA(CORE,VAL) do{\
    *(volatile kal_uint32*)(ASM_AXI_CONFIG_(CORE)) = (((*(volatile kal_uint32*)(ASM_AXI_CONFIG_(CORE)))&~(ASM_AXI_ULTRA_MASK))\
    |((VAL << ASM_AXI_ULTRA_BIT)&(ASM_AXI_ULTRA_MASK)));\
    ASM_Dummy_Read = *(volatile kal_uint32*)(ASM_AXI_CONFIG_(CORE));}while(0)
    
#define ASM_GET_AXI_FLUSH(CORE,VAL) do{\
    VAL = ((*(volatile kal_uint32*)(ASM_AXI_CONFIG_(CORE)))&ASM_AXI_FLUSH_MASK) >> ASM_AXI_FLUSH_BIT;\
    }while(0)

#define ASM_SET_AXI_FLUSH(CORE,VAL) do{\
    *(volatile kal_uint32*)(ASM_AXI_CONFIG_(CORE)) = (((*(volatile kal_uint32*)(ASM_AXI_CONFIG_(CORE)))&~(ASM_AXI_FLUSH_MASK))\
    |((VAL << ASM_AXI_FLUSH_BIT)&(ASM_AXI_FLUSH_MASK)));\
    ASM_Dummy_Read = *(volatile kal_uint32*)(ASM_AXI_CONFIG_(CORE));}while(0)


#endif  //__ASM_REG_H__

