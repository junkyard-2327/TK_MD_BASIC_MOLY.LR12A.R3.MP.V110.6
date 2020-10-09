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
 *   dhl_cond_l1_trace.h
 *
 * Project:
 * --------
 *   UMOLYA
 *
 * Description:
 * ------------
 *   Conditional L1 trace interface,
*    NOTE: This header is included in L1Trc.h, please do not include this header alone!!
 *
 * Author:
 * -------
 * -------
 *
 * ==========================================================================
 * $Log$
 *
 * 09 19 2017 yancy.chien
 * [MOLY00257978] conditional trace development
 * Fix build error on XL1SIM.
 *
 * 09 14 2017 kenneth.lin
 * [MOLY00257978] conditional trace development
 * 	
 * 	[DHL] fixed conditional trace build error in xl1sim
 *
 * 09 12 2017 yancy.chien
 * [MOLY00257978] conditional trace development
 * Fix build error on xL1SIM.
 *
 * 09 07 2017 yu-hsiang.peng
 * [MOLY00275876] [Gen93] L1 trace code size silm
 * [UMOLYA.TRUNK] L1 trace redefine
 *
 * 08 02 2017 yancy.chien
 * [MOLY00257978] conditional trace development
 * Add cond only macros.
 *
 * 07 14 2017 yancy.chien
 * [MOLY00257978] conditional trace development
 * 1. Move Conditional buffer to SHM
 * 2. Refine dump flow & avoid infinite loop
 * 3. Print debug log
 *
 * 06 30 2017 yancy.chien
 * [MOLY00257978] conditional trace development
 * Rename HW_COND MACROs & add seperate L1/L2 type for SW_COND.
 *
 * 06 19 2017 yancy.chien
 * [MOLY00257978] conditional trace development
 * 1st phase-in.
 *
 *
 *
 ****************************************************************************/

#ifndef _DHL_COND_L1_TRACE_H
#define _DHL_COND_L1_TRACE_H

#if defined(__MTK_TARGET__)
// Function Declarion
void dhl_l1_cond_send_array(kal_uint8* src, kal_uint32 length);
void dhl_l1_cond_send_n_word(kal_uint32 word_cnt, ...);
void dhl_dump_l1_cond_trace();

#else //Wrapper for xL1sim 

#ifdef TRC_C
// Workaround for XL1sim, TRC_C is defined in L1Trc.c, and since XL1SIM only build L1Trc.c rather than dhl_cond_l1_trace.c, we declare empty body here 
void dhl_l1_cond_send_array(kal_uint8* src, kal_uint32 length) {};
void dhl_l1_cond_send_n_word(kal_uint32 word_cnt, ...) {};
void dhl_dump_l1_cond_trace() {};

#else // other source file, only get prototype

extern void dhl_l1_cond_send_array(kal_uint8* src, kal_uint32 length);
extern void dhl_l1_cond_send_n_word(kal_uint32 word_cnt, ...);
extern void dhl_dump_l1_cond_trace();

#endif // #ifdef TRC_C

#endif // defined(__MTK_TARGET__)


// Conversion for normal COND traces
#if defined(__MTK_TARGET__)
#define TRC_PREPROCESS_DATA_SECTION1_L1_COND   TRC_PREPROCESS_DATA_SECTION1_L1
#define TRC_PREPROCESS_DATA_SECTION2_L1_COND   TRC_PREPROCESS_DATA_SECTION2_L1
#else //Wrapper for xL1sim
#define TRC_PREPROCESS_DATA_L1_COND            TRC_PREPROCESS_DATA_L1
#endif
#define TRC_START_FILTER_CHECK_L1_COND         TRC_START_FILTER_CHECK_L1
#define TRC_END_FILTER_CHECK_L1_COND           TRC_END_FILTER_CHECK_L1
#define TRC_START_FILL_L1_COND                 TRC_START_FILL_L1
#define TRC_END_FILL_L1_COND                   TRC_END_FILL_L1


// Conversion for NON_SMP COND trace, should be removed
#if defined(__MTK_TARGET__)
#define TRC_PREPROCESS_DATA_SECTION1_L1_NON_SMP_COND    TRC_PREPROCESS_DATA_SECTION1_L1
#define TRC_PREPROCESS_DATA_SECTION2_L1_NON_SMP_COND    TRC_PREPROCESS_DATA_SECTION2_L1
#else //Wrapper for xL1sim
#define TRC_PREPROCESS_DATA_L1_NON_SMP_COND             TRC_PREPROCESS_DATA_L1
#endif
#define TRC_START_FILTER_CHECK_L1_NON_SMP_COND          TRC_START_FILTER_CHECK_L1_COND
#define TRC_END_FILTER_CHECK_L1_NON_SMP_COND            TRC_END_FILTER_CHECK_L1_COND
#define TRC_START_FILL_L1_NON_SMP_COND                  TRC_START_FILL_L1_COND
#define TRC_END_FILL_L1_NON_SMP_COND                    TRC_END_FILL_L1_COND

#define TRC_SEND_N_DATA_L1_COND(word_cnt, ...) do \
{   \
    dhl_l1_cond_send_n_word(word_cnt, __VA_ARGS__); \
} while(0)

#define TRC_SEND_N_DATA_L2_COND(word_cnt, ...) do \
{   \
    dhl_l1_cond_send_n_word(word_cnt, __VA_ARGS__); \
} while(0)


// Conversion for HW_COND traces
#define TRC_PREPROCESS_DATA_SECTION1_L1_HW_COND     TRC_PREPROCESS_DATA_SECTION1_L1
#define TRC_PREPROCESS_DATA_SECTION2_L1_HW_COND     TRC_PREPROCESS_DATA_SECTION2_L1
#define TRC_START_FILTER_CHECK_L1_HW_COND           TRC_START_FILTER_CHECK_L1_COND
#define TRC_END_FILTER_CHECK_L1_HW_COND             TRC_END_FILTER_CHECK_L1_COND

// Note: create local buffer may increase stack size!!
#define TRC_START_FILL_L1_HW_COND() kal_uint8 hw_cond_tmp_buf[128]; \
                                    kal_uint8 tmp_idx = 0;

#define TRC_END_FILL_L1_HW_COND() do { \
    dhl_l1_cond_send_array(&hw_cond_tmp_buf[0], tmp_idx); \
} while(0)

// implemenation for HW_COND trace macro

#define DHL_HW_COND_L1_FILL_TMP_BUF_8(val) do{ \
    hw_cond_tmp_buf[tmp_idx] = (val); \
    tmp_idx++; \
} while(0)


#define DHL_HW_COND_L1_FILL_TMP_BUF_16(val) do{ \
    *((kal_uint16*) &hw_cond_tmp_buf[tmp_idx]) = (val); \
    tmp_idx += 2; \
} while(0)

#define DHL_HW_COND_L1_FILL_TMP_BUF_24(val) do{ \
    DHL_HW_COND_L1_FILL_TMP_BUF_16((val) & 0x00FFFF); \
    DHL_HW_COND_L1_FILL_TMP_BUF_8(((val) & 0x00FF0000) >> 16); \
} while(0)

#define DHL_HW_COND_L1_FILL_TMP_BUF_32(val) do{ \
    *((kal_uint32*) &hw_cond_tmp_buf[tmp_idx]) = (val); \
    tmp_idx += 4; \
} while(0)

// Conversion for HW_COND fill data macros
//First
#define TRC_OUTPUT_16_FIRST_WRAPPER_L1_HW_COND(value,dummy)     DHL_HW_COND_L1_FILL_TMP_BUF_16(value);
//Middle
#define TRC_OUTPUT_32_MID_WRAPPER_L1_HW_COND(value,dummy)       DHL_HW_COND_L1_FILL_TMP_BUF_32(value);
#define TRC_OUTPUT_24_MID_WRAPPER_L1_HW_COND(value,dummy)       DHL_HW_COND_L1_FILL_TMP_BUF_24(value);
#define TRC_OUTPUT_16_MID_WRAPPER_L1_HW_COND(value,dummy)       DHL_HW_COND_L1_FILL_TMP_BUF_16(value);
#define TRC_OUTPUT_8_MID_WRAPPER_L1_HW_COND(value,dummy)        DHL_HW_COND_L1_FILL_TMP_BUF_8(value);
//Last
#define TRC_OUTPUT_32_LAST_WRAPPER_L1_HW_COND(value,dummy)      DHL_HW_COND_L1_FILL_TMP_BUF_32(value);
#define TRC_OUTPUT_24_LAST_WRAPPER_L1_HW_COND(value,dummy)      DHL_HW_COND_L1_FILL_TMP_BUF_24(value);
#define TRC_OUTPUT_16_LAST_WRAPPER_L1_HW_COND(value,dummy)      DHL_HW_COND_L1_FILL_TMP_BUF_16(value);
#define TRC_OUTPUT_8_LAST_WRAPPER_L1_HW_COND(value,dummy)       DHL_HW_COND_L1_FILL_TMP_BUF_8(value);
//Single
#define TRC_OUTPUT_32_SINGLE_WRAPPER_L1_HW_COND(value,dummy)    DHL_HW_COND_L1_FILL_TMP_BUF_32(value);
#define TRC_OUTPUT_24_SINGLE_WRAPPER_L1_HW_COND(value,dummy)    DHL_HW_COND_L1_FILL_TMP_BUF_24(value);
#define TRC_OUTPUT_16_SINGLE_WRAPPER_L1_HW_COND(value,dummy)    DHL_HW_COND_L1_FILL_TMP_BUF_16(value);
#define TRC_OUTPUT_8_SINGLE_WRAPPER_L1_HW_COND(value,dummy)     DHL_HW_COND_L1_FILL_TMP_BUF_8(value);

//First
#define TRC_OUTPUT_16_FIRST_WRAPPER_L2_HW_COND(value,dummy)     DHL_HW_COND_L1_FILL_TMP_BUF_16(value);
//Middle
#define TRC_OUTPUT_32_MID_WRAPPER_L2_HW_COND(value,dummy)       DHL_HW_COND_L1_FILL_TMP_BUF_32(value);
#define TRC_OUTPUT_24_MID_WRAPPER_L2_HW_COND(value,dummy)       DHL_HW_COND_L1_FILL_TMP_BUF_24(value);
#define TRC_OUTPUT_16_MID_WRAPPER_L2_HW_COND(value,dummy)       DHL_HW_COND_L1_FILL_TMP_BUF_16(value);
#define TRC_OUTPUT_8_MID_WRAPPER_L2_HW_COND(value,dummy)        DHL_HW_COND_L1_FILL_TMP_BUF_8(value);
//Last
#define TRC_OUTPUT_32_LAST_WRAPPER_L2_HW_COND(value,dummy)      DHL_HW_COND_L1_FILL_TMP_BUF_32(value);
#define TRC_OUTPUT_24_LAST_WRAPPER_L2_HW_COND(value,dummy)      DHL_HW_COND_L1_FILL_TMP_BUF_24(value);
#define TRC_OUTPUT_16_LAST_WRAPPER_L2_HW_COND(value,dummy)      DHL_HW_COND_L1_FILL_TMP_BUF_16(value);
#define TRC_OUTPUT_8_LAST_WRAPPER_L2_HW_COND(value,dummy)       DHL_HW_COND_L1_FILL_TMP_BUF_8(value);
//Single
#define TRC_OUTPUT_32_SINGLE_WRAPPER_L2_HW_COND(value,dummy)    DHL_HW_COND_L1_FILL_TMP_BUF_32(value);
#define TRC_OUTPUT_24_SINGLE_WRAPPER_L2_HW_COND(value,dummy)    DHL_HW_COND_L1_FILL_TMP_BUF_24(value);
#define TRC_OUTPUT_16_SINGLE_WRAPPER_L2_HW_COND(value,dummy)    DHL_HW_COND_L1_FILL_TMP_BUF_16(value);
#define TRC_OUTPUT_8_SINGLE_WRAPPER_L2_HW_COND(value,dummy)     DHL_HW_COND_L1_FILL_TMP_BUF_8(value);

#endif

