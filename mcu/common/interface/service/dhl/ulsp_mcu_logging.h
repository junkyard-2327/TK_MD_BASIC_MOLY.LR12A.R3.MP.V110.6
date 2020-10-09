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
 *   ulsp_mcu_logging.h
 *
 * Project:
 * --------
 *   UMOLYA
 *
 * Description:
 * ------------
 *   ULS+ MCU side HW control level
 *
 * Author:
 * -------
 * -------
 *
 * ==========================================================================
 * $Log$
 *
 * 07 14 2017 yancy.chien
 * [MOLY00257978] conditional trace development
 * 1. Move Conditional buffer to SHM
 * 2. Refine dump flow & avoid infinite loop
 * 3. Print debug log
 *
 * 06 21 2017 yancy.chien
 * [MOLY00258341] [MT6763][Bianco][N1][E2][MD issue][TW] Assert on ulsp_mod_function with PLS mode
 * 1. Enlarge the abort fail assert check period to 30us
 * 2. Record PB debug flag when timeout
 *
 * 06 19 2017 yancy.chien
 * [MOLY00257978] conditional trace development
 * 1st phase-in.
 *
 * 06 01 2017 kenneth.lin
 * [MOLY00253974] [BIANCO][DHL] re-dump dsp log in exception flow
 * .
 * 	add redump dsp log trace
 *
 * 04 27 2017 yancy.chien
 * [MOLY00242548] [DHL] Build warning removal
 * 	     Apply A style.
 *
 * 04 27 2017 yancy.chien
 * [MOLY00242548] [DHL] Build warning removal
 *     Apply A style.
 *
 * 03 14 2017 kenneth.lin
 * [MOLY00235284] [xL1SIM][DHL] support ulsp logging feature in xl1sim
 *
 *  DHL support ulsp logging feature in xl1sim
 *
 *  1. enable __USE_ULSP__
 *  2. implement ulsp macro to send ELT directly
 *
 * 11 29 2016 willie.pan
 * [MOLY00163869] [6293][ULS+][ULS+ Phase In]
 *
 *  . Add BoundarySync SW Encoder API
 *
 * 11 25 2016 willie.pan
 * [MOLY00163869] [6293][ULS+][ULS+ Phase In]
 *
 *  . ULSP SW Encoder: Add IDLE SYNC
 *
 * 09 22 2016 jean.tsao
 * [MOLY00185213] [UMOLYA] DHL 92 SW logging migrate to 93
 * [ULSP] MCU side driver API
 *
 * 09 19 2016 willie.pan
 * [MOLY00163869] [6293][ULS+][ULS+ Phase In] ULS+ SW Encoder Phase-In
 *
 * 09 14 2016 willie.pan
 * [MOLY00163869] [6293][ULS+] ULSP SW Encoder Interface Fix
 *
 * 09 14 2016 willie.pan
 * [MOLY00163869] ULSP SW Encoder Phase-In
 *
 * 09 14 2016 willie.pan
 * [MOLY00163869] [6293][ULS+][ULS+ Phase In]
 *
 *  . ULSP SW Encoder Phase In
 *
 * 08 04 2016 jean.tsao
 * [MOLY00185213] [UMOLYA] DHL 92 SW logging migrate to 93
 * [ULSP] MCU side driver API
 *
 * 07 05 2016 yu-hsiang.peng
 * [MOLY00185213] [MT6293] DHL MT6292 SW logging migrate to MT6293 & MT6293 ULSP logging development
 * [UMOLYA.TRUNK] Edit all description in ULSP-releated file
 *
 *
 ****************************************************************************/

#ifndef _ULSP_MCU_LOGGING_H_
#define _ULSP_MCU_LOGGING_H_

#include "kal_general_types.h"

#if defined(__USE_ULSP__)
#include "boot.h"

/*
 | base addresses
 */
#define ULSP_PB0_BASE_ADDR (GCR_CUSTOM_ADDR+0xC000)
#define ULSP_PB1_BASE_ADDR (GCR_CUSTOM_ADDR+0xC100)

#define ULSP_FRC_ADDR 0xA00D0800
#define ULSP_FRC_DATA 0xF2CC0001

#define ULSP_PB_L1_LOG_BASE_SOURCEID  (1)
#define ULSP_PB_L2_LOG_BASE_SOURCEID  (17)
#define ULSP_PB_DSP_LOG_BASE_SOURCEID (1)
#define ULSP_PB_DSP_INNER_LOG_BASE_SOURCEID (1)
#define ULSP_PB_DSP_BRP_LOG_BASE_SOURCEID (2)
#define ULSP_PB_DSP_FEC_LOG_BASE_SOURCEID (3)
#define ULSP_PB_DSP_SPEECH_LOG_BASE_SOURCEID (4)
#define ULSP_PB_DSP_RAKE_LOG_BASE_SOURCEID (5)
#define ULSP_PB_DSP_SCQ16_0_LOG_BASE_SOURCEID (6)
#define ULSP_PB_DSP_SCQ16_1_LOG_BASE_SOURCEID (7)

#define ULSP_IDLE_SYNC_PATTERN     (0x24823466)
#define ULSP_BOUNDARY_SYNC_PATTERN (0x24546293)

enum ULSP_Registers
{
    /*--------------------------------------------------------
        ULS+ PB0 registers
    --------------------------------------------------------*/

    REG_ULSP_PB0_DATA_F_8       = ULSP_PB0_BASE_ADDR + 0x00,
    REG_ULSP_PB0_DATA_F_16      = ULSP_PB0_BASE_ADDR + 0x04,
    REG_ULSP_PB0_DATA_F_24      = ULSP_PB0_BASE_ADDR + 0x08,
    REG_ULSP_PB0_DATA_F_32      = ULSP_PB0_BASE_ADDR + 0x0c,
    REG_ULSP_PB0_DATA_M_8       = ULSP_PB0_BASE_ADDR + 0x10,
    REG_ULSP_PB0_DATA_M_16      = ULSP_PB0_BASE_ADDR + 0x14,
    REG_ULSP_PB0_DATA_M_24      = ULSP_PB0_BASE_ADDR + 0x18,
    REG_ULSP_PB0_DATA_M_32      = ULSP_PB0_BASE_ADDR + 0x1c,
    REG_ULSP_PB0_DATA_L_8       = ULSP_PB0_BASE_ADDR + 0x20,
    REG_ULSP_PB0_DATA_L_16      = ULSP_PB0_BASE_ADDR + 0x24,
    REG_ULSP_PB0_DATA_L_24      = ULSP_PB0_BASE_ADDR + 0x28,
    REG_ULSP_PB0_DATA_L_32      = ULSP_PB0_BASE_ADDR + 0x2c,
    REG_ULSP_PB0_DATA_S_8       = ULSP_PB0_BASE_ADDR + 0x30,
    REG_ULSP_PB0_DATA_S_16      = ULSP_PB0_BASE_ADDR + 0x34,
    REG_ULSP_PB0_DATA_S_24      = ULSP_PB0_BASE_ADDR + 0x38,
    REG_ULSP_PB0_DATA_S_32      = ULSP_PB0_BASE_ADDR + 0x3c,
    REG_ULSP_PB0_DATA_F_TS_8    = ULSP_PB0_BASE_ADDR + 0x40,
    REG_ULSP_PB0_DATA_F_TS_16   = ULSP_PB0_BASE_ADDR + 0x44,
    REG_ULSP_PB0_DATA_F_TS_24   = ULSP_PB0_BASE_ADDR + 0x48,
    REG_ULSP_PB0_DATA_F_TS_32   = ULSP_PB0_BASE_ADDR + 0x4c,
    REG_ULSP_PB0_DATA_S_TS_8    = ULSP_PB0_BASE_ADDR + 0x50,
    REG_ULSP_PB0_DATA_S_TS_16   = ULSP_PB0_BASE_ADDR + 0x54,
    REG_ULSP_PB0_DATA_S_TS_24   = ULSP_PB0_BASE_ADDR + 0x58,
    REG_ULSP_PB0_DATA_S_TS_32   = ULSP_PB0_BASE_ADDR + 0x5c,
    REG_ULSP_PB0_SYNC           = ULSP_PB0_BASE_ADDR + 0x60,
    REG_ULSP_PB0_FRC            = ULSP_PB0_BASE_ADDR + 0x64,

    REG_ULSP_PB0_CON_LOCK_MARKER    = ULSP_PB0_BASE_ADDR + 0x70,
    REG_ULSP_PB0_CON_BEFORE_START   = ULSP_PB0_BASE_ADDR + 0x74,
    REG_ULSP_PB0_RUN_TIME_MANAGE    = ULSP_PB0_BASE_ADDR + 0x78,
    REG_ULSP_PB0_STATUS             = ULSP_PB0_BASE_ADDR + 0x7c,
    REG_ULSP_PB0_OVERFLOW_STA       = ULSP_PB0_BASE_ADDR + 0x80,
    REG_ULSP_PB0_OVERFLOW_STA_CLR   = ULSP_PB0_BASE_ADDR + 0x84,
    REG_ULSP_PB0_BUF_DBG_READ_PTR   = ULSP_PB0_BASE_ADDR + 0x88,
    REG_ULSP_PB0_BUF_DBG_READ_DATA  = ULSP_PB0_BASE_ADDR + 0x8c,
    REG_ULSP_PB0_BUF_DATA_WRITE_PTR = ULSP_PB0_BASE_ADDR + 0x90,
    REG_ULSP_PB0_DBG_INFO           = ULSP_PB0_BASE_ADDR + 0x94,
    REG_ULSP_PB0_READ_FRC_EN        = ULSP_PB0_BASE_ADDR + 0xa0,
    REG_ULSP_PB0_READ_FRC_READY     = ULSP_PB0_BASE_ADDR + 0xa4,
    REG_ULSP_PB0_READ_FRC_VAL_MSB32 = ULSP_PB0_BASE_ADDR + 0xa8,
    REG_ULSP_PB0_READ_FRC_VAL_LSB32 = ULSP_PB0_BASE_ADDR + 0xac,
    REG_ULSP_PB0_STALL_CORE_EN      = ULSP_PB0_BASE_ADDR + 0xb0,
    REG_ULSP_PB0_CORE_SOURCE_ID_BASE        = ULSP_PB0_BASE_ADDR + 0xd0,

    /*--------------------------------------------------------
        ULS+ PB1 registers
    --------------------------------------------------------*/

    REG_ULSP_PB1_DATA_F_8       = ULSP_PB1_BASE_ADDR + 0x00,
    REG_ULSP_PB1_DATA_F_16      = ULSP_PB1_BASE_ADDR + 0x04,
    REG_ULSP_PB1_DATA_F_24      = ULSP_PB1_BASE_ADDR + 0x08,
    REG_ULSP_PB1_DATA_F_32      = ULSP_PB1_BASE_ADDR + 0x0c,
    REG_ULSP_PB1_DATA_M_8       = ULSP_PB1_BASE_ADDR + 0x10,
    REG_ULSP_PB1_DATA_M_16      = ULSP_PB1_BASE_ADDR + 0x14,
    REG_ULSP_PB1_DATA_M_24      = ULSP_PB1_BASE_ADDR + 0x18,
    REG_ULSP_PB1_DATA_M_32      = ULSP_PB1_BASE_ADDR + 0x1c,
    REG_ULSP_PB1_DATA_L_8       = ULSP_PB1_BASE_ADDR + 0x20,
    REG_ULSP_PB1_DATA_L_16      = ULSP_PB1_BASE_ADDR + 0x24,
    REG_ULSP_PB1_DATA_L_24      = ULSP_PB1_BASE_ADDR + 0x28,
    REG_ULSP_PB1_DATA_L_32      = ULSP_PB1_BASE_ADDR + 0x2c,
    REG_ULSP_PB1_DATA_S_8       = ULSP_PB1_BASE_ADDR + 0x30,
    REG_ULSP_PB1_DATA_S_16      = ULSP_PB1_BASE_ADDR + 0x34,
    REG_ULSP_PB1_DATA_S_24      = ULSP_PB1_BASE_ADDR + 0x38,
    REG_ULSP_PB1_DATA_S_32      = ULSP_PB1_BASE_ADDR + 0x3c,
    REG_ULSP_PB1_DATA_F_TS_8    = ULSP_PB1_BASE_ADDR + 0x40,
    REG_ULSP_PB1_DATA_F_TS_16   = ULSP_PB1_BASE_ADDR + 0x44,
    REG_ULSP_PB1_DATA_F_TS_24   = ULSP_PB1_BASE_ADDR + 0x48,
    REG_ULSP_PB1_DATA_F_TS_32   = ULSP_PB1_BASE_ADDR + 0x4c,
    REG_ULSP_PB1_DATA_S_TS_8    = ULSP_PB1_BASE_ADDR + 0x50,
    REG_ULSP_PB1_DATA_S_TS_16   = ULSP_PB1_BASE_ADDR + 0x54,
    REG_ULSP_PB1_DATA_S_TS_24   = ULSP_PB1_BASE_ADDR + 0x58,
    REG_ULSP_PB1_DATA_S_TS_32   = ULSP_PB1_BASE_ADDR + 0x5c,
    REG_ULSP_PB1_SYNC           = ULSP_PB1_BASE_ADDR + 0x60,
    REG_ULSP_PB1_FRC            = ULSP_PB1_BASE_ADDR + 0x64,

    REG_ULSP_PB1_CON_LOCK_MARKER    = ULSP_PB1_BASE_ADDR + 0x70,
    REG_ULSP_PB1_CON_BEFORE_START   = ULSP_PB1_BASE_ADDR + 0x74,
    REG_ULSP_PB1_RUN_TIME_MANAGE    = ULSP_PB1_BASE_ADDR + 0x78,
    REG_ULSP_PB1_STATUS             = ULSP_PB1_BASE_ADDR + 0x7c,
    REG_ULSP_PB1_OVERFLOW_STA       = ULSP_PB1_BASE_ADDR + 0x80,
    REG_ULSP_PB1_OVERFLOW_STA_CLR   = ULSP_PB1_BASE_ADDR + 0x84,
    REG_ULSP_PB1_BUF_DBG_READ_PTR   = ULSP_PB1_BASE_ADDR + 0x88,
    REG_ULSP_PB1_BUF_DBG_READ_DATA  = ULSP_PB1_BASE_ADDR + 0x8c,
    REG_ULSP_PB1_BUF_DATA_WRITE_PTR = ULSP_PB1_BASE_ADDR + 0x90,
    REG_ULSP_PB1_DBG_INFO           = ULSP_PB1_BASE_ADDR + 0x94,
    REG_ULSP_PB1_READ_FRC_EN        = ULSP_PB1_BASE_ADDR + 0xa0,
    REG_ULSP_PB1_READ_FRC_READY     = ULSP_PB1_BASE_ADDR + 0xa4,
    REG_ULSP_PB1_READ_FRC_VAL_MSB32 = ULSP_PB1_BASE_ADDR + 0xa8,
    REG_ULSP_PB1_READ_FRC_VAL_LSB32 = ULSP_PB1_BASE_ADDR + 0xac,
    REG_ULSP_PB1_STALL_CORE_EN      = ULSP_PB1_BASE_ADDR + 0xb0,
    REG_ULSP_PB1_CORE_SOURCE_ID_BASE        = ULSP_PB1_BASE_ADDR + 0xd0,

    /*--------------------------------------------------------
        ULS+ L1 registers
    --------------------------------------------------------*/
    REG_ULSP_L1_DEBUG_FLAG          = ULSP_PB0_BASE_ADDR + 0xc0,
    REG_ULSP_L1_DEBUG_FLAG_SEL      = ULSP_PB0_BASE_ADDR + 0xc4

};

#define ULSP_CON_LOCK_MARKER (0xACCE)

/*---------------------------------------------------------------------------
 | @macro ULSP_READ
 | @brief Read the contents of a ULS register.
 |
 | @param[in] ulsp_reg - name of ULS Register to read.
 |
 | @return kal_uint32 data read from the specified ULS register.
 |
 ---------------------------------------------------------------------------*/
#define ULSP_READ(ulsp_reg)           (*(volatile kal_uint32 *)(ulsp_reg))

/*---------------------------------------------------------------------------
 | @macro ULSP_WRITE
 | @brief Write a 32bit data to the specified ULS register.
 |
 | @param[in] ulsp_reg - Name of the ULS Register to be updated.
 | @param[in] data    - 32 bit data word.
 |
 ---------------------------------------------------------------------------*/
#define ULSP_WRITE(ulsp_reg, data) \
    {ULSP_READ(ulsp_reg) = data;\
        do { \
            kal_uint32 lock = ULSP_READ(ulsp_reg); \
            if(lock != (data)){lock = ULSP_READ(ulsp_reg);} \
        } while(0);}

#define ULSP_WRITE_DATA(ulsp_reg, data)   ULSP_READ(ulsp_reg) = ((kal_uint32)(data))


//Macros to read and write 1 bit and set of bits in a register
//TODO check BIT_MASK() on Target
#define BIT_MASK_LSHIFT_COUNT(bit_from, bit_to) (32 - (bit_to - bit_from + 1))

// BIT_MASK() 1. 32 bit 1s, 2. left shift, 3. right shift
#define BIT_MASK(bit_from, bit_to) (((size_t)0xFFFFFFFFFFFFFFFF << BIT_MASK_LSHIFT_COUNT(bit_from, bit_to)) >> (BIT_MASK_LSHIFT_COUNT(bit_from, bit_to) - bit_from))

#define CLEAR_BIT(val, bit)                         (val & ~(1 << bit))
#define CLEAR_BITS(val, bit_from, bit_to)           (val & ~BIT_MASK(bit_from, bit_to))

#define ULSP_READ_BIT(reg, bit)                     ((ULSP_READ(reg) & (1 << bit)) >> bit)
#define ULSP_READ_BITS(reg, bit_from, bit_to)       ((ULSP_READ(reg) & BIT_MASK(bit_from, bit_to)) >> bit_from)

#define ULSP_WRITE_BIT(reg, bit, val)               (ULSP_WRITE(reg, CLEAR_BIT(ULSP_READ(reg), bit) | ((val & 1) << bit)))

// ULSP_WRITE_BITS() 1. read reg, 2. clear bits, 3. shift-left val, 4. mask bits with (3), 5. bit-or with (2) 6. write reg
#define ULSP_WRITE_BITS(reg, bit_from, bit_to, val) (ULSP_WRITE(reg, CLEAR_BITS(ULSP_READ(reg), bit_from, bit_to) | ((val << bit_from) & BIT_MASK(bit_from, bit_to)) ))

/*---------------------------------------------------------------------------
    PB0_CON_BEFORE_START register fields
---------------------------------------------------------------------------*/

#define ULSP_READ_PB0_CLK_DIS()                 (ULSP_READ_BIT(REG_ULSP_PB0_CON_BEFORE_START, 0))
#define ULSP_READ_PB0_START()                   (ULSP_READ_BIT(REG_ULSP_PB0_CON_BEFORE_START, 1))
#define ULSP_READ_PB0_RESET()                   (ULSP_READ_BIT(REG_ULSP_PB0_CON_BEFORE_START, 2))
#define ULSP_READ_PB0_AUTO_TEST_EN()            (ULSP_READ_BIT(REG_ULSP_PB0_CON_BEFORE_START, 3))
#define ULSP_READ_PB0_INCR_TEST_EN()            (ULSP_READ_BIT(REG_ULSP_PB0_CON_BEFORE_START, 4))
#define ULSP_READ_PB0_PRIORITY()                (ULSP_READ_BITS(REG_ULSP_PB0_CON_BEFORE_START, 8, 10))
#define ULSP_READ_PB0_ULTRA_HIGH_PRIORITY()     (ULSP_READ_BIT(REG_ULSP_PB0_CON_BEFORE_START, 12))
#define ULSP_READ_PB0_SOURCE_ID()               (ULSP_READ_BITS(REG_ULSP_PB0_CON_BEFORE_START, 16, 20))
#define ULSP_READ_PB0_BUF_UNLOCK_THS()          (ULSP_READ_BITS(REG_ULSP_PB0_CON_BEFORE_START, 24, 25))

#define ULSP_WRITE_PB0_CLK_DIS(val)             (ULSP_WRITE_BIT(REG_ULSP_PB0_CON_BEFORE_START, 0, (val)))
#define ULSP_WRITE_PB0_START(val)               (ULSP_WRITE_BIT(REG_ULSP_PB0_CON_BEFORE_START, 1, (val)))
#define ULSP_WRITE_PB0_RESET(val)               (ULSP_WRITE_BIT(REG_ULSP_PB0_CON_BEFORE_START, 2, (val)))
#define ULSP_WRITE_PB0_AUTO_TEST_EN(val)        (ULSP_WRITE_BIT(REG_ULSP_PB0_CON_BEFORE_START, 3, (val)))
#define ULSP_WRITE_PB0_INCR_TEST_EN(val)        (ULSP_WRITE_BIT(REG_ULSP_PB0_CON_BEFORE_START, 4, (val)))
#define ULSP_WRITE_PB0_PRIORITY(val)            (ULSP_WRITE_BITS(REG_ULSP_PB0_CON_BEFORE_START, 8, 10, (val)))
#define ULSP_WRITE_PB0_ULTRA_HIGH_PRIORITY(val) (ULSP_WRITE_BIT(REG_ULSP_PB0_CON_BEFORE_START, 12, (val)))
#define ULSP_WRITE_PB0_SOURCE_ID(val)           (ULSP_WRITE_BITS(REG_ULSP_PB0_CON_BEFORE_START, 16, 20, (val)))
#define ULSP_WRITE_PB0_BUF_UNLOCK_THS(val)      (ULSP_WRITE_BITS(REG_ULSP_PB0_CON_BEFORE_START, 24, 25, (val)))

/*---------------------------------------------------------------------------
    PB0_RUN_TIME_MANAGE register fields
---------------------------------------------------------------------------*/

#define ULSP_READ_PB0_RESUME_AFTER_ABORT()      (ULSP_READ_BIT(REG_ULSP_PB0_RUN_TIME_MANAGE, 0))
#define ULSP_READ_PB0_RESUME_AFTER_FLUSH()      (ULSP_READ_BIT(REG_ULSP_PB0_RUN_TIME_MANAGE, 1))
#define ULSP_READ_PB0_ABORT()                   (ULSP_READ_BIT(REG_ULSP_PB0_RUN_TIME_MANAGE, 2))
#define ULSP_READ_PB0_FLUSH()                   (ULSP_READ_BIT(REG_ULSP_PB0_RUN_TIME_MANAGE, 3))
#define ULSP_READ_PB0_DISABLE_OUTPUT()          (ULSP_READ_BIT(REG_ULSP_PB0_RUN_TIME_MANAGE, 4))
#define ULSP_READ_PB0_DISABLE_INPUT()           (ULSP_READ_BIT(REG_ULSP_PB0_RUN_TIME_MANAGE, 5))

#define ULSP_WRITE_PB0_RESUME_AFTER_ABORT(val)  (ULSP_WRITE_BIT(REG_ULSP_PB0_RUN_TIME_MANAGE, 0, (val)))
#define ULSP_WRITE_PB0_RESUME_AFTER_FLUSH(val)  (ULSP_WRITE_BIT(REG_ULSP_PB0_RUN_TIME_MANAGE, 1, (val)))
#define ULSP_WRITE_PB0_ABORT(val)               (ULSP_WRITE_BIT(REG_ULSP_PB0_RUN_TIME_MANAGE, 2, (val)))
#define ULSP_WRITE_PB0_FLUSH(val)               (ULSP_WRITE_BIT(REG_ULSP_PB0_RUN_TIME_MANAGE, 3, (val)))
#define ULSP_WRITE_PB0_DISABLE_OUTPUT(val)      (ULSP_WRITE_BIT(REG_ULSP_PB0_RUN_TIME_MANAGE, 4, (val)))
#define ULSP_WRITE_PB0_DISABLE_INPUT(val)       (ULSP_WRITE_BIT(REG_ULSP_PB0_RUN_TIME_MANAGE, 5, (val)))

/*---------------------------------------------------------------------------
    PB0_STATUS register fields
---------------------------------------------------------------------------*/

#define ULSP_READ_PB0_ABORT_DONE()              (ULSP_READ_BIT(REG_ULSP_PB0_STATUS, 0))
#define ULSP_READ_PB0_FLUSH_DONE()              (ULSP_READ_BIT(REG_ULSP_PB0_STATUS, 1))
#define ULSP_READ_PB0_BUF_FULL()                (ULSP_READ_BIT(REG_ULSP_PB0_STATUS, 2))
#define ULSP_READ_PB0_BUF_LOCK()                (ULSP_READ_BIT(REG_ULSP_PB0_STATUS, 3))
#define ULSP_READ_PB0_BUF_SIZE()                (ULSP_READ_BITS(REG_ULSP_PB0_STATUS, 8, 9))
#define ULSP_READ_PB0_BUF_USED_SPACE()          (ULSP_READ_BITS(REG_ULSP_PB0_STATUS, 24, 30))

/*---------------------------------------------------------------------------
    PB0_OVERFLOW_STA register fields
---------------------------------------------------------------------------*/

#define ULSP_READ_PB0_OVF_DATA_NUM()            (ULSP_READ_BITS(REG_ULSP_PB0_OVERFLOW_STA, 0, 11))
#define ULSP_READ_PB0_OVF_PACKET_NUM()          (ULSP_READ_BITS(REG_ULSP_PB0_OVERFLOW_STA, 12, 19))

/*---------------------------------------------------------------------------
    PB0_OVERFLOW_STA_CLR register fields
---------------------------------------------------------------------------*/

#define ULSP_READ_PB0_OVF_DATA_NUM_CLEAR()      (ULSP_READ_BIT(REG_ULSP_PB0_OVERFLOW_STA_CLR, 0))
#define ULSP_READ_PB0_OVF_PACKET_NUM_CLEAR()    (ULSP_READ_BIT(REG_ULSP_PB0_OVERFLOW_STA_CLR, 1))

#define ULSP_WRITE_PB0_OVF_DATA_NUM_CLEAR(val)      (ULSP_WRITE_BIT(REG_ULSP_PB0_OVERFLOW_STA_CLR, 0, (val)))
#define ULSP_WRITE_PB0_OVF_PACKET_NUM_CLEAR(val)    (ULSP_WRITE_BIT(REG_ULSP_PB0_OVERFLOW_STA_CLR, 1, (val)))

/*---------------------------------------------------------------------------
    PB1_CON_BEFORE_START register fields
---------------------------------------------------------------------------*/

#define ULSP_READ_PB1_CLK_DIS()                 (ULSP_READ_BIT(REG_ULSP_PB1_CON_BEFORE_START, 0))
#define ULSP_READ_PB1_START()                   (ULSP_READ_BIT(REG_ULSP_PB1_CON_BEFORE_START, 1))
#define ULSP_READ_PB1_RESET()                   (ULSP_READ_BIT(REG_ULSP_PB1_CON_BEFORE_START, 2))
#define ULSP_READ_PB1_AUTO_TEST_EN()            (ULSP_READ_BIT(REG_ULSP_PB1_CON_BEFORE_START, 3))
#define ULSP_READ_PB1_INCR_TEST_EN()            (ULSP_READ_BIT(REG_ULSP_PB1_CON_BEFORE_START, 4))
#define ULSP_READ_PB1_PRIORITY()                (ULSP_READ_BITS(REG_ULSP_PB1_CON_BEFORE_START, 8, 10))
#define ULSP_READ_PB1_ULTRA_HIGH_PRIORITY()     (ULSP_READ_BIT(REG_ULSP_PB1_CON_BEFORE_START, 12))
#define ULSP_READ_PB1_SOURCE_ID()               (ULSP_READ_BITS(REG_ULSP_PB1_CON_BEFORE_START, 16, 20))
#define ULSP_READ_PB1_BUF_UNLOCK_THS()          (ULSP_READ_BITS(REG_ULSP_PB1_CON_BEFORE_START, 24, 25))

#define ULSP_WRITE_PB1_CLK_DIS(val)             (ULSP_WRITE_BIT(REG_ULSP_PB1_CON_BEFORE_START, 0, (val)))
#define ULSP_WRITE_PB1_START(val)               (ULSP_WRITE_BIT(REG_ULSP_PB1_CON_BEFORE_START, 1, (val)))
#define ULSP_WRITE_PB1_RESET(val)               (ULSP_WRITE_BIT(REG_ULSP_PB1_CON_BEFORE_START, 2, (val)))
#define ULSP_WRITE_PB1_AUTO_TEST_EN(val)        (ULSP_WRITE_BIT(REG_ULSP_PB1_CON_BEFORE_START, 3, (val)))
#define ULSP_WRITE_PB1_INCR_TEST_EN(val)        (ULSP_WRITE_BIT(REG_ULSP_PB1_CON_BEFORE_START, 4, (val)))
#define ULSP_WRITE_PB1_PRIORITY(val)            (ULSP_WRITE_BITS(REG_ULSP_PB1_CON_BEFORE_START, 8, 10, (val)))
#define ULSP_WRITE_PB1_ULTRA_HIGH_PRIORITY(val) (ULSP_WRITE_BIT(REG_ULSP_PB1_CON_BEFORE_START, 12, (val)))
#define ULSP_WRITE_PB1_SOURCE_ID(val)           (ULSP_WRITE_BITS(REG_ULSP_PB1_CON_BEFORE_START, 16, 20, (val)))
#define ULSP_WRITE_PB1_BUF_UNLOCK_THS(val)      (ULSP_WRITE_BITS(REG_ULSP_PB1_CON_BEFORE_START, 24, 25, (val)))

/*---------------------------------------------------------------------------
    PB1_RUN_TIME_MANAGE register fields
---------------------------------------------------------------------------*/

#define ULSP_READ_PB1_RESUME_AFTER_ABORT()      (ULSP_READ_BIT(REG_ULSP_PB1_RUN_TIME_MANAGE, 0))
#define ULSP_READ_PB1_RESUME_AFTER_FLUSH()      (ULSP_READ_BIT(REG_ULSP_PB1_RUN_TIME_MANAGE, 1))
#define ULSP_READ_PB1_ABORT()                   (ULSP_READ_BIT(REG_ULSP_PB1_RUN_TIME_MANAGE, 2))
#define ULSP_READ_PB1_FLUSH()                   (ULSP_READ_BIT(REG_ULSP_PB1_RUN_TIME_MANAGE, 3))
#define ULSP_READ_PB1_DISABLE_OUTPUT()          (ULSP_READ_BIT(REG_ULSP_PB1_RUN_TIME_MANAGE, 4))
#define ULSP_READ_PB1_DISABLE_INPUT()           (ULSP_READ_BIT(REG_ULSP_PB1_RUN_TIME_MANAGE, 5))

#define ULSP_WRITE_PB1_RESUME_AFTER_ABORT(val)  (ULSP_WRITE_BIT(REG_ULSP_PB1_RUN_TIME_MANAGE, 0, (val)))
#define ULSP_WRITE_PB1_RESUME_AFTER_FLUSH(val)  (ULSP_WRITE_BIT(REG_ULSP_PB1_RUN_TIME_MANAGE, 1, (val)))
#define ULSP_WRITE_PB1_ABORT(val)               (ULSP_WRITE_BIT(REG_ULSP_PB1_RUN_TIME_MANAGE, 2, (val)))
#define ULSP_WRITE_PB1_FLUSH(val)               (ULSP_WRITE_BIT(REG_ULSP_PB1_RUN_TIME_MANAGE, 3, (val)))
#define ULSP_WRITE_PB1_DISABLE_OUTPUT(val)      (ULSP_WRITE_BIT(REG_ULSP_PB1_RUN_TIME_MANAGE, 4, (val)))
#define ULSP_WRITE_PB1_DISABLE_INPUT(val)       (ULSP_WRITE_BIT(REG_ULSP_PB1_RUN_TIME_MANAGE, 5, (val)))

/*---------------------------------------------------------------------------
    PB1_STATUS register fields
---------------------------------------------------------------------------*/

#define ULSP_READ_PB1_ABORT_DONE()              (ULSP_READ_BIT(REG_ULSP_PB1_STATUS, 0))
#define ULSP_READ_PB1_FLUSH_DONE()              (ULSP_READ_BIT(REG_ULSP_PB1_STATUS, 1))
#define ULSP_READ_PB1_BUF_FULL()                (ULSP_READ_BIT(REG_ULSP_PB1_STATUS, 2))
#define ULSP_READ_PB1_BUF_LOCK()                (ULSP_READ_BIT(REG_ULSP_PB1_STATUS, 3))
#define ULSP_READ_PB1_BUF_SIZE()                (ULSP_READ_BITS(REG_ULSP_PB1_STATUS, 8, 9))
#define ULSP_READ_PB1_BUF_USED_SPACE()          (ULSP_READ_BITS(REG_ULSP_PB1_STATUS, 24, 30))

/*---------------------------------------------------------------------------
    PB1_OVERFLOW_STA register fields
---------------------------------------------------------------------------*/

#define ULSP_READ_PB1_OVF_DATA_NUM()            (ULSP_READ_BITS(REG_ULSP_PB1_OVERFLOW_STA, 0, 11))
#define ULSP_READ_PB1_OVF_PACKET_NUM()          (ULSP_READ_BITS(REG_ULSP_PB1_OVERFLOW_STA, 12, 19))

/*---------------------------------------------------------------------------
    PB1_OVERFLOW_STA_CLR register fields
---------------------------------------------------------------------------*/

#define ULSP_READ_PB1_OVF_DATA_NUM_CLEAR()      (ULSP_READ_BIT(REG_ULSP_PB1_OVERFLOW_STA_CLR, 0))
#define ULSP_READ_PB1_OVF_PACKET_NUM_CLEAR()    (ULSP_READ_BIT(REG_ULSP_PB1_OVERFLOW_STA_CLR, 1))

#define ULSP_WRITE_PB1_OVF_DATA_NUM_CLEAR(val)      (ULSP_WRITE_BIT(REG_ULSP_PB1_OVERFLOW_STA_CLR, 0, (val)))
#define ULSP_WRITE_PB1_OVF_PACKET_NUM_CLEAR(val)    (ULSP_WRITE_BIT(REG_ULSP_PB1_OVERFLOW_STA_CLR, 1, (val)))


/*---------------------------------------------------------------------------
    ULSP SW Encoder
---------------------------------------------------------------------------*/
typedef enum
{
    ULSP_ENC_FIRST,
    ULSP_ENC_MIDDLE,
    ULSP_ENC_LAST,
    ULSP_ENC_SINGLE
} ULSP_Encoder_Message_Type;

typedef enum
{
    ULSP_ENC_L1_LOG,
    ULSP_ENC_L2_LOG,
    ULSP_ENC_DSP_INNER_LOG,
    ULSP_ENC_DSP_BRP_LOG,
    ULSP_ENC_DSP_FEC_LOG,
    ULSP_ENC_DSP_SPEECH_LOG,
    ULSP_ENC_DSP_RAKE_LOG,
    ULSP_ENC_DSP_SCQ16_0_LOG,
    ULSP_ENC_DSP_SCQ16_1_LOG,
    ULSP_ENC_DSP_LOG
} ULSP_Encoder_Log_Type;

typedef enum
{
    ULSP_ENC_MSG_SIZE_8 = 1,
    ULSP_ENC_MSG_SIZE_16 = 2,
    ULSP_ENC_MSG_SIZE_24 = 3,
    ULSP_ENC_MSG_SIZE_32 = 4
} ULSP_Encoder_Log_Size;

typedef enum
{
    ULSP_ENC_PACKET_TYPE_DROP = 0,
    ULSP_ENC_PACKET_TYPE_COMPLETE_PKT,
    ULSP_ENC_PACKET_TYPE_INCOMPLETE_PKT_F,
    ULSP_ENC_PACKET_TYPE_INCOMPLETE_PKT_M_ONLY,
    ULSP_ENC_PACKET_TYPE_INCOMPLETE_PKT_L,
    ULSP_ENC_PACKET_TYPE_SYNC,
    ULSP_ENC_PACKET_TYPE_GLOBAL_TS
} ULSP_Encoder_Packet_Type;

typedef struct
{
    kal_uint8 packet_type: 3;
    kal_uint8 source_id: 5;
} ulsp_header1;

typedef struct
{
    kal_uint8 packet_length: 7;
    kal_uint8 timestamp: 1;
} ulsp_header2;


extern unsigned int g_ulsp_encoder_curr_len;
extern char g_ulsp_encoder_error;

void ulsp_encode_header(ULSP_Encoder_Log_Type log_type, kal_uint8 *buf, kal_uint32 length);

void UlspEncodeMessage(kal_uint8 *buf, kal_uint32 max_length,
                       ULSP_Encoder_Message_Type msg_type,
                       ULSP_Encoder_Log_Size msg_size,
                       ULSP_Encoder_Log_Type log_type,
                       kal_uint32 value);

void UlspEncodeIdleSync(kal_uint8 *buf, kal_uint32 max_length,
                        ULSP_Encoder_Log_Type log_type);

void UlspEncodeBoundarySync(kal_uint8 *buf, kal_uint32 max_length, ULSP_Encoder_Log_Type log_type);

void UlspEncodeSync(kal_uint8 *buf, kal_uint32 max_length,
                    ULSP_Encoder_Log_Type log_type, kal_uint32 value);

int UlspEncoderGetCurrentPacketSize();
int UlspEncoderSourceIdHelper(ULSP_Encoder_Log_Type log_type);

/*---------------------------------------------------------------------------
    End of ULSP SW Encoder
---------------------------------------------------------------------------*/
void set_up_PB0_before_conf_reg();
void set_up_PB0_after_conf_reg();
void set_up_PB1_before_conf_reg();
void set_up_PB1_after_conf_reg();

void UlspMcuLoggingInit();

void send_boundary_SYNC();
void send_idle_SYNC();


void flush_sync_in_l1_channel();


/*---------------------------------------------------------------------------
 * Separate a wrapper layer between ULS+ and DHL
 ---------------------------------------------------------------------------*/

/************************************ PB0 ************************************/

#define ULSP_WRITE_PB0_F_32(value)  ULSP_WRITE_DATA(REG_ULSP_PB0_DATA_F_32, value)
#define ULSP_WRITE_PB0_F_24(value)  ULSP_WRITE_DATA(REG_ULSP_PB0_DATA_F_24, value)
#define ULSP_WRITE_PB0_F_16(value)  ULSP_WRITE_DATA(REG_ULSP_PB0_DATA_F_16, value)
#define ULSP_WRITE_PB0_F_8(value)   ULSP_WRITE_DATA(REG_ULSP_PB0_DATA_F_8, value)

#define ULSP_WRITE_PB0_M_32(value)  ULSP_WRITE_DATA(REG_ULSP_PB0_DATA_M_32, value)
#define ULSP_WRITE_PB0_M_24(value)  ULSP_WRITE_DATA(REG_ULSP_PB0_DATA_M_24, value)
#define ULSP_WRITE_PB0_M_16(value)  ULSP_WRITE_DATA(REG_ULSP_PB0_DATA_M_16, value)
#define ULSP_WRITE_PB0_M_8(value)   ULSP_WRITE_DATA(REG_ULSP_PB0_DATA_M_8, value)

#define ULSP_WRITE_PB0_L_32(value)  ULSP_WRITE_DATA(REG_ULSP_PB0_DATA_L_32, value)
#define ULSP_WRITE_PB0_L_24(value)  ULSP_WRITE_DATA(REG_ULSP_PB0_DATA_L_24, value)
#define ULSP_WRITE_PB0_L_16(value)  ULSP_WRITE_DATA(REG_ULSP_PB0_DATA_L_16, value)
#define ULSP_WRITE_PB0_L_8(value)   ULSP_WRITE_DATA(REG_ULSP_PB0_DATA_L_8, value)

#define ULSP_WRITE_PB0_S_32(value)  ULSP_WRITE_DATA(REG_ULSP_PB0_DATA_S_32, value)
#define ULSP_WRITE_PB0_S_24(value)  ULSP_WRITE_DATA(REG_ULSP_PB0_DATA_S_24, value)
#define ULSP_WRITE_PB0_S_16(value)  ULSP_WRITE_DATA(REG_ULSP_PB0_DATA_S_16, value)
#define ULSP_WRITE_PB0_S_8(value)   ULSP_WRITE_DATA(REG_ULSP_PB0_DATA_S_8, value)

#define ULSP_WRITE_PB0_SYNC(value)  ULSP_WRITE_DATA(REG_ULSP_PB0_SYNC, value)
#define ULSP_WRITE_PB0_FRC(value)   ULSP_WRITE_DATA(REG_ULSP_PB0_FRC, value)


/************************************ PB1 ************************************/

#define ULSP_WRITE_PB1_F_32(value)  ULSP_WRITE_DATA(REG_ULSP_PB1_DATA_F_32, value)
#define ULSP_WRITE_PB1_F_24(value)  ULSP_WRITE_DATA(REG_ULSP_PB1_DATA_F_24, value)
#define ULSP_WRITE_PB1_F_16(value)  ULSP_WRITE_DATA(REG_ULSP_PB1_DATA_F_16, value)
#define ULSP_WRITE_PB1_F_8(value)   ULSP_WRITE_DATA(REG_ULSP_PB1_DATA_F_8, value)

#define ULSP_WRITE_PB1_M_32(value)  ULSP_WRITE_DATA(REG_ULSP_PB1_DATA_M_32, value)
#define ULSP_WRITE_PB1_M_24(value)  ULSP_WRITE_DATA(REG_ULSP_PB1_DATA_M_24, value)
#define ULSP_WRITE_PB1_M_16(value)  ULSP_WRITE_DATA(REG_ULSP_PB1_DATA_M_16, value)
#define ULSP_WRITE_PB1_M_8(value)   ULSP_WRITE_DATA(REG_ULSP_PB1_DATA_M_8, value)

#define ULSP_WRITE_PB1_L_32(value)  ULSP_WRITE_DATA(REG_ULSP_PB1_DATA_L_32, value)
#define ULSP_WRITE_PB1_L_24(value)  ULSP_WRITE_DATA(REG_ULSP_PB1_DATA_L_24, value)
#define ULSP_WRITE_PB1_L_16(value)  ULSP_WRITE_DATA(REG_ULSP_PB1_DATA_L_16, value)
#define ULSP_WRITE_PB1_L_8(value)   ULSP_WRITE_DATA(REG_ULSP_PB1_DATA_L_8, value)

#define ULSP_WRITE_PB1_S_32(value)  ULSP_WRITE_DATA(REG_ULSP_PB1_DATA_S_32, value)
#define ULSP_WRITE_PB1_S_24(value)  ULSP_WRITE_DATA(REG_ULSP_PB1_DATA_S_24, value)
#define ULSP_WRITE_PB1_S_16(value)  ULSP_WRITE_DATA(REG_ULSP_PB1_DATA_S_16, value)
#define ULSP_WRITE_PB1_S_8(value)   ULSP_WRITE_DATA(REG_ULSP_PB1_DATA_S_8, value)

#define ULSP_WRITE_PB1_SYNC(value)  ULSP_WRITE_DATA(REG_ULSP_PB1_SYNC, value)
#define ULSP_WRITE_PB1_FRC(value)   ULSP_WRITE_DATA(REG_ULSP_PB1_FRC, value)




#endif // #if defined(__USE_ULSP__)



#endif //_ULSP_MCU_LOGGING_H_


