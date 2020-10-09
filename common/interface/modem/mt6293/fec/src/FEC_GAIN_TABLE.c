/******************************************************************************
*  Modification Notice:
*  --------------------------
*  This software is modified by MediaTek Inc. and the information contained
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
*******************************************************************************/

/******************************************************************************
 *
 * Filename:
 * ---------
 *   FEC_GAIN_TABLE.c
 *
 * Project:
 * --------
 *   TK6291 Project
 *
  * Description:
 * ------------
 *   TK6291 RX CodeWord gain table
 *
 * Author:
 * -------
 * -------
 *
 *==============================================================================
 *             HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
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
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
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
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
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
 *
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
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
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
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
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
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 *******************************************************************************/

/*******************************************************************************
*  Include 
*******************************************************************************/

#include "FEC_GAIN_TABLE.h"
#include "malloc.h"

/*******************************************************************************
*  Defines
*******************************************************************************/
#define FEC_AGC_HB_THRESHOLD                       (18000)
#define FEC_AGC_AGG_BW_NUM                         (10)

#define RXAGC_TARGET_MAX_SUPPORT_BAND_NUM          (35)
#define RXAGC_DC_COMP_ROUTE_MAX                    (2)

#define FEC_AGC_ROUTE_INDEX_START_NCCA             (96)
#define FEC_AGC_ROUTE_NCCA_CHK(route_idx)          ((route_idx >= FEC_AGC_ROUTE_INDEX_START_NCCA)? 1: 0)

#define FEC_AGC_GAIN_CW_LNA_MASK                   (0x7)
#define FEC_AGC_GAIN_CW_PGA_MASK                   (0x3F8)
#define FEC_AGC_GAIN_CW_COMBINE(pga_cw, lna_cw)    ((pga_cw & FEC_AGC_GAIN_CW_PGA_MASK) | \
                                                    (lna_cw & FEC_AGC_GAIN_CW_LNA_MASK) | \
                                                    (lna_cw & pga_cw))

/*******************************************************************************
*  Enums
*******************************************************************************/

/*******************************************************************************
*  Structures
*******************************************************************************/

/****************************************/
/*********** 6293 FEC CW Table ************/
/****************************************/

#if defined(__FEC_MT6177M_RF__) || defined(MT6177M_LTE_RF)
/******** RF Gain CW Part **********/
/* LNA CW: ( IIP2 | bit[2]~bit[0]) */
UINT32 Fec_lna_gain_cw[FEC_AGC_LNA_NUM] = { 0x1, 0x2, 0x3, 0x4, 0x5, 0x406 };

/* LNA CW table for HWAGC */
UINT32 LNA_CW_TABLE_no_eLNA[FEC_AGC_LNA_HW_TABLE_INDEX_NUM] = {1, 2, 3, 4, 5, 0x1C06, 0x1C06};
UINT32 LNA_CW_TABLE_eLNA_always_on_WI_2nd_SAW[FEC_AGC_LNA_HW_TABLE_INDEX_NUM] = {1, 2, 3, 4, 5, 0x1C06, 0x1C06};
UINT32 LNA_CW_TABLE_eLNA_always_on_WO_2nd_SAW[FEC_AGC_LNA_HW_TABLE_INDEX_NUM] = {1, 2, 3, 4, 5, 5, 5};
UINT32 LNA_CW_TABLE_eLNA_bypass_WI_2nd_SAW[FEC_AGC_LNA_HW_TABLE_INDEX_NUM] = {1, 2, 3, 4, 5, 4, 0x1C06};
UINT32 LNA_CW_TABLE_eLNA_bypass_WO_2nd_SAW[FEC_AGC_LNA_HW_TABLE_INDEX_NUM] = {1, 2, 3, 4, 5, 4, 5};

/* LNA GAIN table for HWAGC */
UINT32 LNA_GAIN_TABLE_no_eLNA[FEC_AGC_LNA_HW_TABLE_INDEX_NUM] = {0, 0x40, 0x80, 0xC0, 0x100, 0x140, 0x140};
UINT32 LNA_GAIN_TABLE_eLNA_always_on_WI_2nd_SAW[FEC_AGC_LNA_HW_TABLE_INDEX_NUM] = {0x80, 0xC0, 0x100, 0x140, 0x180, 0x1C0, 0x1C0};
UINT32 LNA_GAIN_TABLE_eLNA_always_on_WO_2nd_SAW[FEC_AGC_LNA_HW_TABLE_INDEX_NUM] = {0x80, 0xC0, 0x100, 0x140, 0x180, 0x180, 0x180};
UINT32 LNA_GAIN_TABLE_eLNA_bypass_WI_2nd_SAW[FEC_AGC_LNA_HW_TABLE_INDEX_NUM] = {0xFFFFFFE0, 0x20, 0x60, 0xa0, 0xE0, 0x140, 0x1C0};
UINT32 LNA_GAIN_TABLE_eLNA_bypass_WO_2nd_SAW[FEC_AGC_LNA_HW_TABLE_INDEX_NUM] = {0xFFFFFFE0, 0x20, 0x60, 0xa0, 0xE0, 0x140, 0x180};


/* PGA CW: ( IIP2 | (IF(bit[9]~bit[6]) | TIA(bit[5]~bit[3])  ) << FEC_PGA_GAIN_CW_LSB) */
UINT32 Fec_hpm_pga_gain_cw[FEC_AGC_HPM_PGA_NUM] = 
{
   0x88  /* 0 0010 001 << FEC_PGA_GAIN_CW_LSB */ , \
   0xC8  /* 0 0011 001 << FEC_PGA_GAIN_CW_LSB */ , \
   0x108 /* 0 0100 001 << FEC_PGA_GAIN_CW_LSB */ , \
   0x148 /* 0 0101 001 << FEC_PGA_GAIN_CW_LSB */ , \
   0x188 /* 0 0110 001 << FEC_PGA_GAIN_CW_LSB */ , \
   0x1C8 /* 0 0111 001 << FEC_PGA_GAIN_CW_LSB */ , \
   0x608 /* 1 1000 001 << FEC_PGA_GAIN_CW_LSB */ , \
   0x5C0 /* 0 0111 000 << FEC_PGA_GAIN_CW_LSB */ , \
   0x600 /* 1 1000 000 << FEC_PGA_GAIN_CW_LSB */   \
};

UINT32 Fec_lpm_pga_gain_cw[FEC_AGC_LPM_PGA_NUM] =
{
   0x80  /* 0 0010 000 << FEC_PGA_GAIN_CW_LSB */ , \
   0xC0  /* 0 0011 000 << FEC_PGA_GAIN_CW_LSB */ , \
   0x100 /* 0 0100 000 << FEC_PGA_GAIN_CW_LSB */ , \
   0x140 /* 0 0101 000 << FEC_PGA_GAIN_CW_LSB */ , \
   0x180 /* 0 0110 000 << FEC_PGA_GAIN_CW_LSB */ , \
   0x1C0 /* 0 0110 000 << FEC_PGA_GAIN_CW_LSB */ , \
};
#else
/******** RF Gain CW Part **********/
/* LNA CW: ( IIP2 | bit[2]~bit[0]) */
UINT32 Fec_lna_gain_cw[FEC_AGC_LNA_NUM] = { 0x1, 0x2, 0x3, 0x4, 0x5, 0x406 };

/* LNA CW table for HWAGC */
UINT32 LNA_CW_TABLE_no_eLNA[FEC_AGC_LNA_HW_TABLE_INDEX_NUM] = {1, 2, 3, 4, 5, 0x1C06, 0x1C06};
UINT32 LNA_CW_TABLE_eLNA_always_on_WI_2nd_SAW[FEC_AGC_LNA_HW_TABLE_INDEX_NUM] = {1, 2, 3, 4, 5, 0x1C06, 0x1C06};
UINT32 LNA_CW_TABLE_eLNA_always_on_WO_2nd_SAW[FEC_AGC_LNA_HW_TABLE_INDEX_NUM] = {1, 2, 3, 4, 5, 5, 5};
UINT32 LNA_CW_TABLE_eLNA_bypass_WI_2nd_SAW[FEC_AGC_LNA_HW_TABLE_INDEX_NUM] = {1, 2, 3, 4, 5, 4, 0x1C06};
UINT32 LNA_CW_TABLE_eLNA_bypass_WO_2nd_SAW[FEC_AGC_LNA_HW_TABLE_INDEX_NUM] = {1, 2, 3, 4, 5, 4, 5};

/* LNA GAIN table for HWAGC */
UINT32 LNA_GAIN_TABLE_no_eLNA[FEC_AGC_LNA_HW_TABLE_INDEX_NUM] = {0, 0x40, 0x80, 0xC0, 0x100, 0x160, 0x160};
UINT32 LNA_GAIN_TABLE_eLNA_always_on_WI_2nd_SAW[FEC_AGC_LNA_HW_TABLE_INDEX_NUM] = {0x80, 0xC0, 0x100, 0x140, 0x180, 0x1E0, 0x1E0};
UINT32 LNA_GAIN_TABLE_eLNA_always_on_WO_2nd_SAW[FEC_AGC_LNA_HW_TABLE_INDEX_NUM] = {0x80, 0xC0, 0x100, 0x140, 0x180, 0x180, 0x180};
UINT32 LNA_GAIN_TABLE_eLNA_bypass_WI_2nd_SAW[FEC_AGC_LNA_HW_TABLE_INDEX_NUM] = {0xFFFFFFE0, 0x20, 0x60, 0xa0, 0xE0, 0x140, 0x1E0};
UINT32 LNA_GAIN_TABLE_eLNA_bypass_WO_2nd_SAW[FEC_AGC_LNA_HW_TABLE_INDEX_NUM] = {0xFFFFFFE0, 0x20, 0x60, 0xa0, 0xE0, 0x140, 0x180};


/* PGA CW: ( IIP2 | (IF(bit[9]~bit[6]) | TIA(bit[5]~bit[3])  ) << FEC_PGA_GAIN_CW_LSB) */
UINT32 Fec_hpm_pga_gain_cw[FEC_AGC_HPM_PGA_NUM] = 
{
   0x88  /* 0 0010 001 << FEC_PGA_GAIN_CW_LSB */ , \
   0xC8  /* 0 0011 001 << FEC_PGA_GAIN_CW_LSB */ , \
   0x108 /* 0 0100 001 << FEC_PGA_GAIN_CW_LSB */ , \
   0x148 /* 0 0101 001 << FEC_PGA_GAIN_CW_LSB */ , \
   0x188 /* 0 0110 001 << FEC_PGA_GAIN_CW_LSB */ , \
   0x1C8 /* 0 0111 001 << FEC_PGA_GAIN_CW_LSB */ , \
   0x608 /* 1 1000 001 << FEC_PGA_GAIN_CW_LSB */ , \
   0x5C0 /* 0 0111 000 << FEC_PGA_GAIN_CW_LSB */ , \
   0x600 /* 1 1000 000 << FEC_PGA_GAIN_CW_LSB */   \
};

UINT32 Fec_lpm_pga_gain_cw[FEC_AGC_LPM_PGA_NUM] =
{
   0x80  /* 0 0010 000 << FEC_PGA_GAIN_CW_LSB */ , \
   0xC0  /* 0 0011 000 << FEC_PGA_GAIN_CW_LSB */ , \
   0x100 /* 0 0100 000 << FEC_PGA_GAIN_CW_LSB */ , \
   0x140 /* 0 0101 000 << FEC_PGA_GAIN_CW_LSB */ , \
   0x180 /* 0 0110 000 << FEC_PGA_GAIN_CW_LSB */ , \
   0x1C0 /* 0 0110 000 << FEC_PGA_GAIN_CW_LSB */ , \
};
#endif

UINT32 Fec_gain_cw_mask = 0x3FF; // LNA 0x7 | PGA 0x3F8

UINT32 Fec_high_low_freq_cw[2] = {0x1800 /* High */, 0x0 /* Low */};

/* RF gain CW Addr: P0A0, P0A1, P1A0, P1A1*/
UINT32 Fec_rf_gain_cw_addr[FEC_AGC_CW_ADDR_NUM] =
{
   0x14E00000 /* CW334 */ , \
   0x15000000 /* CW336 */ , \
   0x15400000 /* CW340 */ , \
   0x15600000 /* CW342 */   \
};

#if defined(__FEC_MT6177M_RF__)
/* PGA TIA IF mapping table for HWAGC*/
UINT32 PGA_TIA_IF_H_table[FEC_AGC_PGA_TIA_IF_INDEX_NUM] =
{
    0x00000000  /* PGA = 0, tia = 0, BQ = 0 */ ,
    0x00010001  /* PGA = 1, tia = 0, BQ = 1 */ ,
    0x00020002  /* PGA = 2, tia = 0, BQ = 2 */ ,
    0x00030003  /* PGA = 3, tia = 0, BQ = 3 */ ,
    0x00040004  /* PGA = 4, tia = 0, BQ = 4 */ ,
    0x00050005  /* PGA = 5, tia = 0, BQ = 5 */ ,
    0x00060006  /* PGA = 6, tia = 0, BQ = 6 */ ,
    0x00060006  /* PGA = 6, tia = 0, BQ = 6 */ ,
    0x00060006  /* PGA = 6, tia = 0, BQ = 6 */ ,
    0x00060006  /* PGA = 6, tia = 0, BQ = 6 */ ,
    0x00060006  /* PGA = 6, tia = 0, BQ = 6 */ ,
    0x00060006  /* PGA = 6, tia = 0, BQ = 6 */ ,
    0x00060006  /* PGA = 6, tia = 0, BQ = 6 */ ,
    0x00060006  /* PGA = 6, tia = 0, BQ = 6 */ ,
    0x00060006  /* PGA = 6, tia = 0, BQ = 6 */ ,
    0x00060006  /* PGA = 6, tia = 0, BQ = 6 */   
};

UINT32 PGA_TIA_IF_L_table[FEC_AGC_PGA_TIA_IF_INDEX_NUM] =
{
    0x00000100  /* PGA = 0, tia = 1, BQ = 0 */ ,
    0x00000100  /* PGA = 1, tia = 1, BQ = 1 */ ,
    0x00000100  /* PGA = 2, tia = 1, BQ = 2 */ ,
    0x00000100  /* PGA = 3, tia = 1, BQ = 3 */ ,
    0x00000100  /* PGA = 4, tia = 1, BQ = 4 */ ,
    0x00000100  /* PGA = 5, tia = 1, BQ = 5 */ ,
    0x00000100  /* PGA = 5, tia = 1, BQ = 5 */ ,
    0x00000100  /* PGA = 5, tia = 1, BQ = 5 */ ,
    0x00000100  /* PGA = 5, tia = 1, BQ = 5 */ ,
    0x00000100  /* PGA = 5, tia = 1, BQ = 5 */ ,
    0x00000100  /* PGA = 5, tia = 1, BQ = 5 */ ,
    0x00000100  /* PGA = 5, tia = 1, BQ = 5 */ ,
    0x00000100  /* PGA = 5, tia = 1, BQ = 5 */ ,
    0x00000100  /* PGA = 5, tia = 1, BQ = 5 */ ,
    0x00000100  /* PGA = 5, tia = 1, BQ = 5 */ ,
    0x00000100  /* PGA = 5, tia = 1, BQ = 5 */
};

UINT32 PGA_TIA_IF_H_T1_table[FEC_AGC_PGA_TIA_IF_INDEX_NUM] =
{
    0x00000000  /* PGA = 0, tia = 0, BQ = 0 */ ,
    0x00010001  /* PGA = 1, tia = 0, BQ = 1 */ ,
    0x00020002  /* PGA = 2, tia = 0, BQ = 2 */ ,
    0x00030003  /* PGA = 3, tia = 0, BQ = 3 */ ,
    0x00040004  /* PGA = 4, tia = 0, BQ = 4 */ ,
    0x00050005  /* PGA = 5, tia = 0, BQ = 5 */ ,
    0x00060006  /* PGA = 6, tia = 0, BQ = 6 */ ,
    0x00070105  /* PGA = 7, tia = 1, BQ = 5 */ ,
    0x00080106  /* PGA = 8, tia = 1, BQ = 6 */ ,
    0x00080106  /* PGA = 8, tia = 1, BQ = 6 */ ,
    0x00080106  /* PGA = 8, tia = 1, BQ = 6 */ ,
    0x00080106  /* PGA = 8, tia = 1, BQ = 6 */ ,
    0x00080106  /* PGA = 8, tia = 1, BQ = 6 */ ,
    0x00080106  /* PGA = 8, tia = 1, BQ = 6 */ ,
    0x00080106  /* PGA = 8, tia = 1, BQ = 6 */ ,
    0x00080106  /* PGA = 8, tia = 1, BQ = 6 */  
};

UINT32 PGA_TIA_IF_BQ_limit_table[FEC_AGC_PGA_TIA_IF_INDEX_NUM] =
{
    0x00000000  /* PGA = 0, tia = 0, BQ = 0 */ ,
    0x00010001  /* PGA = 1, tia = 0, BQ = 1 */ ,
    0x00020002  /* PGA = 2, tia = 0, BQ = 2 */ ,
    0x00030003  /* PGA = 3, tia = 0, BQ = 3 */ ,
    0x00040004  /* PGA = 4, tia = 0, BQ = 4 */ ,
    0x00040004  /* PGA = 4, tia = 0, BQ = 4 */ ,
    0x00040004  /* PGA = 4, tia = 0, BQ = 4 */ ,
    0x00040004  /* PGA = 4, tia = 0, BQ = 4 */ ,
    0x00040004  /* PGA = 4, tia = 0, BQ = 4 */ ,
    0x00040004  /* PGA = 4, tia = 0, BQ = 4 */ ,
    0x00040004  /* PGA = 4, tia = 0, BQ = 4 */ ,
    0x00040004  /* PGA = 4, tia = 0, BQ = 4 */ ,
    0x00040004  /* PGA = 4, tia = 0, BQ = 4 */ ,
    0x00040004  /* PGA = 4, tia = 0, BQ = 4 */ ,
    0x00040004  /* PGA = 4, tia = 0, BQ = 4 */ ,
    0x00040004  /* PGA = 4, tia = 0, BQ = 4 */  
};
#else
/* PGA TIA IF mapping table for HWAGC*/
UINT32 PGA_TIA_IF_H_table[FEC_AGC_PGA_TIA_IF_INDEX_NUM] =
{
    0x00000000  /* PGA = 0, tia = 0, BQ = 0 */ ,
    0x00010001  /* PGA = 1, tia = 0, BQ = 1 */ ,
    0x00020002  /* PGA = 2, tia = 0, BQ = 2 */ ,
    0x00030003  /* PGA = 3, tia = 0, BQ = 3 */ ,
    0x00040004  /* PGA = 4, tia = 0, BQ = 4 */ ,
    0x00050005  /* PGA = 5, tia = 0, BQ = 5 */ ,
    0x00060006  /* PGA = 6, tia = 0, BQ = 6 */ ,
    0x00060006  /* PGA = 6, tia = 0, BQ = 6 */ ,
    0x00060006  /* PGA = 6, tia = 0, BQ = 6 */ ,
    0x00060006  /* PGA = 6, tia = 0, BQ = 6 */ ,
    0x00060006  /* PGA = 6, tia = 0, BQ = 6 */ ,
    0x00060006  /* PGA = 6, tia = 0, BQ = 6 */ ,
    0x00060006  /* PGA = 6, tia = 0, BQ = 6 */ ,
    0x00060006  /* PGA = 6, tia = 0, BQ = 6 */ ,
    0x00060006  /* PGA = 6, tia = 0, BQ = 6 */ ,
    0x00060006  /* PGA = 6, tia = 0, BQ = 6 */   
};

UINT32 PGA_TIA_IF_L_table[FEC_AGC_PGA_TIA_IF_INDEX_NUM] =
{
    0x00000100  /* PGA = 0, tia = 1, BQ = 0 */ ,
    0x00010101  /* PGA = 1, tia = 1, BQ = 1 */ ,
    0x00020102  /* PGA = 2, tia = 1, BQ = 2 */ ,
    0x00030103  /* PGA = 3, tia = 1, BQ = 3 */ ,
    0x00040104  /* PGA = 4, tia = 1, BQ = 4 */ ,
    0x00050105  /* PGA = 5, tia = 1, BQ = 5 */ ,
    0x00050105  /* PGA = 5, tia = 1, BQ = 5 */ ,
    0x00050105  /* PGA = 5, tia = 1, BQ = 5 */ ,
    0x00050105  /* PGA = 5, tia = 1, BQ = 5 */ ,
    0x00050105  /* PGA = 5, tia = 1, BQ = 5 */ ,
    0x00050105  /* PGA = 5, tia = 1, BQ = 5 */ ,
    0x00050105  /* PGA = 5, tia = 1, BQ = 5 */ ,
    0x00050105  /* PGA = 5, tia = 1, BQ = 5 */ ,
    0x00050105  /* PGA = 5, tia = 1, BQ = 5 */ ,
    0x00050105  /* PGA = 5, tia = 1, BQ = 5 */ ,
    0x00050105  /* PGA = 5, tia = 1, BQ = 5 */
};

UINT32 PGA_TIA_IF_H_T1_table[FEC_AGC_PGA_TIA_IF_INDEX_NUM] =
{
    0x00000000  /* PGA = 0, tia = 0, BQ = 0 */ ,
    0x00010001  /* PGA = 1, tia = 0, BQ = 1 */ ,
    0x00020002  /* PGA = 2, tia = 0, BQ = 2 */ ,
    0x00030003  /* PGA = 3, tia = 0, BQ = 3 */ ,
    0x00040004  /* PGA = 4, tia = 0, BQ = 4 */ ,
    0x00050005  /* PGA = 5, tia = 0, BQ = 5 */ ,
    0x00060006  /* PGA = 6, tia = 0, BQ = 6 */ ,
    0x00070105  /* PGA = 7, tia = 1, BQ = 5 */ ,
    0x00080106  /* PGA = 8, tia = 1, BQ = 6 */ ,
    0x00080106  /* PGA = 8, tia = 1, BQ = 6 */ ,
    0x00080106  /* PGA = 8, tia = 1, BQ = 6 */ ,
    0x00080106  /* PGA = 8, tia = 1, BQ = 6 */ ,
    0x00080106  /* PGA = 8, tia = 1, BQ = 6 */ ,
    0x00080106  /* PGA = 8, tia = 1, BQ = 6 */ ,
    0x00080106  /* PGA = 8, tia = 1, BQ = 6 */ ,
    0x00080106  /* PGA = 8, tia = 1, BQ = 6 */  
};

UINT32 PGA_TIA_IF_BQ_limit_table[FEC_AGC_PGA_TIA_IF_INDEX_NUM] =
{
    0x00000000  /* PGA = 0, tia = 0, BQ = 0 */ ,
    0x00010001  /* PGA = 1, tia = 0, BQ = 1 */ ,
    0x00020002  /* PGA = 2, tia = 0, BQ = 2 */ ,
    0x00030003  /* PGA = 3, tia = 0, BQ = 3 */ ,
    0x00040004  /* PGA = 4, tia = 0, BQ = 4 */ ,
    0x00040004  /* PGA = 4, tia = 0, BQ = 4 */ ,
    0x00040004  /* PGA = 4, tia = 0, BQ = 4 */ ,
    0x00040004  /* PGA = 4, tia = 0, BQ = 4 */ ,
    0x00040004  /* PGA = 4, tia = 0, BQ = 4 */ ,
    0x00040004  /* PGA = 4, tia = 0, BQ = 4 */ ,
    0x00040004  /* PGA = 4, tia = 0, BQ = 4 */ ,
    0x00040004  /* PGA = 4, tia = 0, BQ = 4 */ ,
    0x00040004  /* PGA = 4, tia = 0, BQ = 4 */ ,
    0x00040004  /* PGA = 4, tia = 0, BQ = 4 */ ,
    0x00040004  /* PGA = 4, tia = 0, BQ = 4 */ ,
    0x00040004  /* PGA = 4, tia = 0, BQ = 4 */  
};
#endif

#if defined(__FEC_MT6177M_RF__) || defined(MT6177M_LTE_RF)
UINT32 Fec_lpm_setting_cw[FEC_AGC_LPM_CW_NUM] =
{
   0x7F8   /* HPM */ , \
   0x188E  /* LTE 1.4/3/5/10MHz_LPM, WCDMA 5/10MHz_LPM */ , \
   0x190E  /* LTE 15/20MHz_LPM */ , \
   0x1F8E  /* LTEA 30/35/40/50/60_LPM */ , \
   0x7F8   /* QDL_HPM */ , \
   0x108E  /* WCDMA_Voice_Mode */
};
#else
/******** LPM setting CW Part **********/
UINT32 Fec_lpm_setting_cw[FEC_AGC_LPM_CW_NUM] =
{
   0x2FF8 /* HPM */ , \
   0x88E  /* LTE 1.4/3/5/10MHz_LPM, WCDMA 5/10MHz_LPM */ , \
   0x90E  /* LTE 15/20MHz_LPM */ , \
   0xF8E  /* LTEA 30/35/40/50/60_LPM */ , \
   0x2FF0 /* QDL_HPM */ , \
   0x400E /* WCDMA_Voice_Mode */
};
#endif

UINT32 Fec_lpm_setting_cw_addr[FEC_AGC_CW_ADDR_NUM] =
{
   0x19D00000 /* CW413 */ , \
   0x19E00000 /* CW414 */ , \
   0x19F00000 /* CW415 */ , \
   0x1A000000 /* CW416 */   \
};

/******** ARX CW Part **********/
UINT32 Fec_arx_cw[FEC_AGC_ARX_CW_NUM] = 
{
   0x54860 /* HPM */ , \
   0x54460 /* LTE 1.4/3/5/10MHz_LPM, WCDMA 5/10MHz_LPM */ , \
   0x54460 /* LTE 15/20MHz_LPM */ , \
   0x54860 /* LTEA 30/35/40/50/60_LPM */ , \
   0x54860 /* QDL_HPM */ , \
   0x52460 /* WCDMA_Voice_Mode */ \
};

UINT32 Fec_arx_cw_addr[FEC_AGC_CW_ADDR_NUM] =
{
   0x1C000000 /* CW448 */, \
   0x1C800000 /* CW456 */, \
   0x1C400000 /* CW452 */, \
   0x1CC00000 /* CW460 */  \
};

UINT32 Fec_latch_cw[FEC_AGC_PATH_NUM] = {0x40000 /*P0*/, 0x80000 /*P1*/};
UINT32 Fec_latch_cw_addr = 0x15200000;  /*CW338*/

UINT32 Fec_delay_cw[FEC_AGC_PATH_NUM]= {0,0};
UINT32 Fec_delay_cw_addr[FEC_AGC_PATH_NUM] = {0x15300000 /*CW339*/, 0x15900000 /*CW345*/};

UINT32 Fec_dc_i_cw[FEC_AGC_DC_CW_NUM] =
{
   0x7E00, 0x7C00, 0x7A00, 0x7800, 0x7600, 0x7400, 0x7200, 0x7000, \
   0x6E00, 0x6C00, 0x6A00, 0x6800, 0x6600, 0x6400, 0x6200, 0x6000, \
   0x5E00, 0x5C00, 0x5A00, 0x5800, 0x5600, 0x5400, 0x5200, 0x5000, \
   0x4E00, 0x4C00, 0x4A00, 0x4800, 0x4600, 0x4400, 0x4200, 0x4000, \
   0x3E00, 0x3C00, 0x3A00, 0x3800, 0x3600, 0x3400, 0x3200, 0x3000, \
   0x2E00, 0x2C00, 0x2A00, 0x2800, 0x2600, 0x2400, 0x2200, 0x2000, \
   0x1E00, 0x1C00, 0x1A00, 0x1800, 0x1600, 0x1400, 0x1200, 0x1000, \
   0x0E00, 0x0C00, 0x0A00, 0x0800, 0x0600, 0x0400, 0x0200, 0x0000, \
};

UINT32 Fec_dc_q_cw[FEC_AGC_DC_CW_NUM] =
{
   0x01F8, 0x01F0, 0x01E8, 0x01E0, 0x01D8, 0x01D0, 0x01C8, 0x01C0, \
   0x01B8, 0x01B0, 0x01A8, 0x01A0, 0x0198, 0x0190, 0x0188, 0x0180, \
   0x0178, 0x0170, 0x0168, 0x0160, 0x0158, 0x0150, 0x0148, 0x0140, \
   0x0138, 0x0130, 0x0128, 0x0120, 0x0118, 0x0110, 0x0108, 0x0100, \
   0x00F8, 0x00F0, 0x00E8, 0x00E0, 0x00D8, 0x00D0, 0x00C8, 0x00C0, \
   0x00B8, 0x00B0, 0x00A8, 0x00A0, 0x0098, 0x0090, 0x0088, 0x0080, \
   0x0078, 0x0070, 0x0068, 0x0060, 0x0058, 0x0050, 0x0048, 0x0040, \
   0x0038, 0x0030, 0x0028, 0x0020, 0x0018, 0x0010, 0x0008, 0x0000, \
};

UINT32 Fec_dc_fix_cw = 0x4;

UINT32 Fec_dc_cw_addr[FEC_AGC_CW_ADDR_NUM] =
{
   0x14F00000 /* CW335 */, \
   0x15100000 /* CW337 */, \
   0x15500000 /* CW341 */, \
   0x15700000 /* CW343 */  \
};


#if !defined(__CORE_USIP1__) || defined(__LTE_L1SIM__)
Fec_Gain_Table_T fec_gain_table_cw = 
{
	// LNA CW
	{1 , 2 , 3 , 4 , 5 , 6} ,
	// LTE PGA CW
	{{0x13 , 0x1B , 0x23 , 0x2B , 0x33 , 0x29 , 0x31 , 0x39 , 0x41 , 0x38 , 0x40 , 0x10 , 0x18 , 0x20},
	// WCDMA PGA CW
	{0x13 , 0x1B , 0x11 , 0x19 , 0x21 , 0x29 , 0x31 , 0x39 , 0x41 , 0x38 , 0x40 , 0x10 , 0x18 , 0x20}},

    /****** W RF GAIN CW (eLNA all off)*********/
    /*gain tableA (normal) HPM*/ /*gain tableC (eLNA + 2ndsaw on ) HPM*/ /*K eLNA off+off HPM*/
	// 0       1         2        3        4       5       6       7        8
	{{0x0 , 0x0 , 0x89 , 0xc9 , 0x109 , 0xCA , 0x10A , 0xCB , 0x10b,  
	// 9       10     11      12      13HL   14    15L     16      17H     18  
	0xcc , 0x10C , 0xCD , 0x10d , 0x14D , 0x10e , 0x14E , 0x18e , 0x1CE , 0x20e},         
    /*K LPM*/ 
    	// 0    1     2     3     4     5     6     7     8     9    10     11     12      13     14    15      16   17     18
	{0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0,  0x0 , 0x0 , 0x344 , 0x0 , 0x345 , 0x0 , 0x346 , 0x0 , 0x0 , 0x0}},
    /*K eLNA on+on , on+off(on )HPM*/
    // 0    1     2     3     4     5     6     7     8     9    10     11     12      13     14    15      16   
    {{0x0 , 0x0 , 0x89 , 0x0 , 0x0 , 0xCA , 0x0 , 0xCB , 0x0,  0xCC , 0x0 , 0xCD , 0x0 , 0x0 , 0x0 , 0x14E , 0x0 },
    /*K LPM*/ 
    // 0    1     2     3     4     5     6     7     8     9    10     11     12      13     14    15      16   
    {0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0,  0x0 , 0x304, 0x0 ,0x305 , 0x0 ,0x306 , 0x0 , 0x0 }},
    
    /*K eLNA on+off (off) HPM*/
    // 0    1     2     3     4     5     6     7     8     9    10     11     12      13     14    15      16   17     18
    {0x0 , 0x0 , 0x0 , 0x0 , 0x109 , 0x0 , 0x0 , 0x14A , 0x0,  0x14B , 0x0 , 0x14C , 0x0 , 0x0 , 0x18D , 0x0 , 0x0 , 0x1CE , 0x0},

    /*gain tableB (eLNA) HPM*/
    // 0    1     2     3     4     5     6     7     8
    {  0,   0, 0x89, 0xC9, 0x109, 0xCA, 0x10A, 0xCB, 0x10B , 
    // 9   10    11     12     13     14     15     16   
    0xCC, 0x10C, 0xCD, 0x10D, 0x14D, 0x18D, 0x1CD, 0x20D } ,

    /*gain tableD eLNA off + tier1m on HPM*/
	// 0       1         2        3        4       5       6       7        8
	{0x0 , 0x0 , 0x89 , 0xc9 , 0x109 , 0xCA , 0x10A , 0xCB , 0x10b,  
	// 9       10     11      12      13HL   14    15L     16      17H     18    19    20
	0xcc , 0x10C , 0xCD , 0x10d , 0x14D , 0x10e , 0x14E , 0x18e , 0x1CE , 0x20e, 0x1C6, 0x206}, 

	// L RF GAIN CW
	// 0       1         2       3       4       5       6      7         8
	/*0x99  , 0xD9   , 0x119 , 0x159 , 0x199 , 0x15A , 0x19A , 0x1DA , 0x11C , */
	{0x1C9 , 0x1C9 , 0x1C9 , 0x1C9 , 0x1C9 , 0x1DA , 0x1DA , 0x1DA , 0x11C , 
	// 9      10       11      12     13       14      15     16       17     18
	0x15C , 0x19C  , 0x15D , 0x19D , 0x15E , 0x10E , 0x14E , 0x18E , 0x1CE , 0x20E},
    
    //lna idx table L2H
    {0,0,0,0,0,1,1,2,2,3,3,4,4,5,5,5,5,5,5}
};
#endif /* #if !defined(__CORE_USIP1__) */


#if !defined(__CORE_USIP1__) || defined(__LTE_L1SIM__)


#if defined(MT6177M_LTE_RF)
/*AGTD API use*/
FEC_AGC_RF_GAIN_CW_TBL_T fec_lna_gain_idx_tbl =
{
   //HPM WI ELNA ALWAYS ON
   {0 ,0, 0, 1, 1, 2, 2, 3, 3, 4, 4, 5, 5, 5, 5, 5, 5},
   //HPM WI ELNA BYPASS ON WO SAW
   {3, 3, 3, 4, 4, 4, 4, 4, 4},
   //HPM WI ELNA BYPASS ON WI SAW
   {3, 3, 3, 3, 3, 5, 5, 5, 5, 5, 5},
   //HPM WO ELNA
   {0, 0, 0, 1, 1, 2, 2, 3, 3, 4, 4, 5, 5, 5, 5, 5, 5},
   //HPM WI ELNA BYPASS WO SAW
   {0, 0, 0, 1, 1, 2, 2, 3, 3, 4, 4},
   //HPM WI ELNA BYPASS WI SAW
   {0, 0, 0, 1, 1, 2, 2, 3, 3, 4, 4},
   //LPM WI ELNA ALWAYS ON
   {0, 0, 1, 1, 2, 2, 3, 3, 4, 4, 5},
   //LPM WI ELNA BYPASS ON WO SAW
   {3, 3, 4},
   //LPM WI ELNA BYPASS ON WI SAW
   {3, 3, 5, 5, 5},
   //LPM WO ELNA
   {0, 0, 1, 1, 2, 2, 3, 3, 4, 4, 5},
   //LPM WI ELNA BYPASS WO SAW
   {0, 0, 1, 1, 2, 2, 3, 3, 4},
   //LPM WI ELNA BYPASS WI SAW
   {0, 0, 1, 1, 2, 2, 3, 3, 4}
};

FEC_AGC_RF_GAIN_CW_TBL_T fec_pga_gain_idx_tbl =
{
   //HPM WI ELNA ALWAYS ON
   {0, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 3, 4, 5, 6},
   //HPM WI ELNA BYPASS ON WO SAW
   {0, 1, 2, 1, 2, 3, 4, 5, 6},
   //HPM WI ELNA BYPASS ON WI SAW
   {0, 1, 2, 3, 4, 1, 2, 3, 4, 5, 6},
   //HPM WO ELNA
   {0, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 3, 4, 5, 6},
   //HPM WI ELNA BYPASS WO SAW
   {0, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2},
   //HPM WI ELNA BYPASS WI SAW
   {0, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2},
   //LPM WI ELNA ALWAYS ON
   {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
   //LPM WI ELNA BYPASS ON WO SAW
   {0, 0, 0},
   //LPM WI ELNA BYPASS ON WI SAW
   {0, 0, 0, 0, 0},
   //LPM WO ELNA
   {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
   //LPM WI ELNA BYPASS WO SAW
   {0, 0, 0, 0, 0, 0, 0, 0, 0},
   //LPM WI ELNA BYPASS WI SAW
   {0, 0, 0, 0, 0, 0, 0, 0, 0}
};

const FEC_RXCAL_GAIN_TABLE_RANGE_AND_DL_RANGE_HPM HPM_withuot_eLNA = 
{
   //max DL pwr
   {-416,-640,-832,-1024,-1216,-1408,-1408},
   //{-392,-633,-821,-998,-1188,-1468,-1468},
   //min DL pwr
   {-1664,-1856,-2048,-2240,-2464,-2656,-2656},
   //{-1668,-1857,-2045,-2232,-2510,-2666,-2666},
   //max rf gain
   {467,659,851,1043,1235,1811,1811},
   //min rf gain
   {275,563,755,947,1139,1331,1331},
   //DL to rf gain factor
   -781
};

const FEC_RXCAL_GAIN_TABLE_RANGE_AND_DL_RANGE_HPM HPM_with_eLNA_always_on = 
{
   //max DL pwr
   {-832,-1024,-1216,-1408,-1600,-1792,-1792},
   //min DL pwr
   {-2048,-2240,-2432,-2560,-2656,-2688,-2688},
   //max rf gain
   {851,1043,1235,1427,1619,2195,2195},
   //min rf gain
   {659,947,1139,1331,1523,1715,1715},
   //DL to rf gain factor
   -781
};

const FEC_RXCAL_GAIN_TABLE_RANGE_AND_DL_RANGE_HPM HPM_with_eLNA_bypass = 
{
   //max DL pwr
   {-192,-544,-736,-928,-1120,-1344,-1600},
   //min DL pwr
   {-1568,-1760,-1952,-2144,-2304,-2592,-2656},
   //max rf gain
   {371,563,755,947,1139,1427,2003},
   //min rf gain
   {179,467,659,851,1043,1235,1523},
   //DL to rf gain factor
   -781
};

const FEC_RXCAL_GAIN_TABLE_RANGE_AND_DL_RANGE_HPM HPM_with_eLNA_bypass_SAW = 
{
   //max DL pwr
   {-352,-544,-736,-928,-1120,-1344,-1792},
   //min DL pwr
   {-1632,-1760,-1952,-2144,-2304,-2626,-2688},
   //max rf gain
   {371,563,755,947,1139,1619,2195},
   //min rf gain
   {179,467,659,851,1043,1235,1715},
   //DL to rf gain factor
   -781
};


const FEC_RXCAL_GAIN_TABLE_RANGE_AND_DL_RANGE_HPM LPM_withuot_eLNA = 
{
   //max DL pwr
   {-480,-672,-864,-1056,-1248,-1440,-1440},
   //{-653,-845,-1037,-1245,-1514,-1706,-1706},
   //min DL pwr
   {-1696,-1888,-2048,-2240,-2400,-2560,-2560},
   //{-1817,-2003,-2182,-2400,-2537,-2652,-2652},
   //max rf gain
   {403,595,787,979,1171,1363,1363},
   //min rf gain
   {403,595,787,979,1171,1363,1363},
   //DL to rf gain factor
   -653
};

const FEC_RXCAL_GAIN_TABLE_RANGE_AND_DL_RANGE_HPM LPM_with_eLNA_always_on = 
{
   //max DL pwr
   {-896,-1056,-1248,-1440,-1632,-1824,-1824},
   //min DL pwr
   {-2080,-2272,-2432,-2560,-2624,-2656,-2656},
   //max rf gain
   {787,979,1171,1363,1555,1747,1747},
   //min rf gain
   {787,979,1171,1363,1555,1744,1744},
   //DL to rf gain factor
   -653
};

const FEC_RXCAL_GAIN_TABLE_RANGE_AND_DL_RANGE_HPM LPM_with_eLNA_bypass = 
{
   //max DL pwr
   {-384,-576,-768,-960,-1152,-1440,-1632},
   //min DL pwr
   {-1600,-1792,-1952,-2144,-2304,-2560,-2624},
   //max rf gain
   {307,499,691,883,1075,1363,1555},
   //min rf gain
   {307,499,691,883,1075,1363,1555},
   //DL to rf gain factor
   -653
};

const FEC_RXCAL_GAIN_TABLE_RANGE_AND_DL_RANGE_HPM LPM_with_eLNA_bypass_SAW = 
{
   //max DL pwr
   {-384,-576,-768,-960,-1152,-1440,-1824},
   //min DL pwr
   {-1600,-1792,-1952,-2144,-2304,-2560,-2656},
   //max rf gain
   {307,499,691,883,1075,1363,1747},
   //min rf gain
   {307,499,691,883,1075,1363,1747},
   //DL to rf gain factor
   -653
};




FEC_RXCAL_DEFAULT_DL_PWR_SUMMARY_TYPE_I default_DL_pwr_setting_type_I =
{
   {
      //HPM without eLNA
      {-960,-1088,-1280,-1472,-1664,-1856,0},
      //HPM with eLNA always on
      {-1280,-1472,-1664,-1856,-2048,-2240,0},
      //HPM with eLNA bypass w/o SAW
      {-960,-992,-1184,-1376,-1568,-1856,-2048},
      //HPM with eLNA bypass w/i SAW
      {-960,-992,-1184,-1376,-1568,-1760,-2080},
      //HPM without eLNA + HPM with eLNA always on
      {-1024,-1152,-1344,-1504,-1696,-1888,0},
      //HPM without eLNA + HPM with eLNA bypass w/o SAW
      {-960,-960,-1056,-1248,-1440,-1632,-1888},
      //HPM with eLNA always on + HPM with eLNA bypass w/o SAW
      {-992,-1024,-1152,-1344,-1536,-1824,-1920},
      //HPM without eLNA + HPM with eLNA bypass w/i SAW
      {-960,-960,-1056,-1248,-1440,-1632,-1888},
      //HPM with eLNA always on + HPM with eLNA bypass w/i SAW
      {-960,-1024,-1152,-1344,-1536,-1856,-1952},
      //HPM with eLNA bypass w/o SAW + HPM with eLNA bypass w/i SAW
      {-960,-960,-1152,-1344,-1536,-1824,-1920},
      //LPM without eLNA
      {-992,-1184,-1376,-1568,-1760,-1952,0},
      //LPM with eLNA always on
      {-1280,-1472,-1664,-1856,-2048,-2272,0},
      //LPM with eLNA bypass w/o SAW
      {-960,-992,-1184,-1376,-1664,-1856,-2048},
      //LPM with eLNA bypass w/i SAW
      {-960,-992,-1184,-1376,-1664,-1920,-2176},
      //LPM without eLNA + LPM with eLNA always on
      {-992,-1184,-1344,-1536,-1728,-1920,0},
      //LPM without eLNA + LPM with eLNA bypass w/o SAW
      {-960,-960,-992,-1184,-1376,-1568,-1760},
      //LPM with eLNA always on + LPM with eLNA bypass w/o SAW
      {-960,-992,-1184,-1344,-1536,-1728,-1920},
      //LPM without eLNA + LPM with eLNA bypass w/i SAW
      {-960,-960,-991,-1184,-1376,-1568,-1760},
      //LPM with eLNA always on + LPM with eLNA bypass w/i SAW
      {-960,-992,-1184,-1344,-1536,-1728,-1920},
      //LPM with eLNA bypass w/o SAW + LPM with eLNA bypass w/i SAW
      {-960,-960,-1088,-1280,-1472,-1760,-1920}
   }
};

FEC_RXCAL_DEFAULT_DL_PWR_SUMMARY_TYPE_II default_DL_pwr_setting_type_II = 
{
   {
      //HPM without eLNA
      {-960,-1056,-1056,-1056,-1056,-1248,-1248,-1248,-1344,-1344,-1344,-1344,-1344,-1568,-1568,-1568,-1568,-1568},
      //HPM with eLNA always on
      {-1344,-1440,-1440,-1440,-1440,-1632,-1632,-1632,-1728,-1728,-1728,-1728,-1728,-1952,-1952,-1952,-1952,-1952},
      //HPM with eLNA bypass w/o SAW
      {-960,-960,-960,-960,-960,-1152,-1152,-1152,-1248,-1248,-1248,-1248,-1248,-1632,-1952},
      //HPM with eLNA bypass w/i SAW
      {-960,-960,-960,-960,-960,-1152,-1152,-1152,-1248,-1248,-1248,-1248,-1248,-1632,-2144}
   }
};



INT32 gain_table_seq_base[8] = {659/*20.6*/,1235/*38.6*/,275/*8.6*/,179/*5.6*/,1363/*42.6*/,1363/*42.6*/,979/*30.6*/,883/*27.6*/};
INT32 gain_table_seq_base_no_LPM_constrain[8] = {659/*20.6*/,1235/*38.6*/,275/*8.6*/,179/*5.6*/,787/*24.6*/,1363/*42.6*/,403/*12.6*/,307/*9.6*/};
#else
/*AGTD API use*/
FEC_AGC_RF_GAIN_CW_TBL_T fec_lna_gain_idx_tbl =
{
   //HPM WI ELNA ALWAYS ON
   {0, 0, 0, 1, 1, 2, 2, 3, 3, 4, 4, 4, 5, 5, 5, 5, 5, 5},
   //HPM WI ELNA BYPASS ON WO SAW
   {3, 3, 3, 4, 4, 4, 4, 4, 4},
   //HPM WI ELNA BYPASS ON WI SAW
   {3, 3, 3, 3, 3, 5, 5, 5, 5, 5, 5, 5},
   //HPM WO ELNA
   {0, 0, 0, 1, 1, 2, 2, 3, 3, 4, 4, 4, 5, 5, 5, 5, 5, 5},
   //HPM WI ELNA BYPASS WO SAW
   {0, 0, 0, 1, 1, 2, 2, 3, 3, 4, 4},
   //HPM WI ELNA BYPASS WI SAW
   {0, 0, 0, 1, 1, 2, 2, 3, 3, 4, 4},
   //LPM WI ELNA ALWAYS ON
   {0, 0, 0, 0, 1, 1, 2, 2, 3, 3, 4, 4, 4, 5, 5, 5, 5},
   //LPM WI ELNA BYPASS ON WO SAW
   {3, 3, 3, 3, 3, 4, 4, 4},
   //LPM WI ELNA BYPASS ON WI SAW
   {3, 3, 3, 3, 3, 5, 5, 5, 5, 5, 5},
   //LPM WO ELNA
   {0, 0, 0, 0, 1, 1, 2, 2, 3, 3, 3, 4, 4, 5, 5, 5, 5},
   //LPM WI ELNA BYPASS WO SAW
   {0, 0, 0, 1, 1, 2, 2, 3, 3, 4, 4},
   //LPM WI ELNA BYPASS WI SAW
   {0, 0, 0, 1, 1, 2, 2, 3, 3, 4, 4}
};

FEC_AGC_RF_GAIN_CW_TBL_T fec_pga_gain_idx_tbl =
{
   //HPM WI ELNA ALWAYS ON
   {0, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 3, 1, 2, 3, 4, 5, 6},
   //HPM WI ELNA BYPASS ON WO SAW
   {0, 1, 2, 1, 2, 3, 4, 5, 6},
   //HPM WI ELNA BYPASS ON WI SAW
   {0, 1, 2, 3, 4, 0, 1, 2, 3, 4, 5, 6},
   //HPM WO ELNA
   {0, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 3, 1, 2, 3, 4, 5, 6},
   //HPM WI ELNA BYPASS WO SAW
   {0, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2},
   //HPM WI ELNA BYPASS WI SAW
   {0, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2},
   //LPM WI ELNA ALWAYS ON
   {0, 1, 2, 3, 2, 3, 2, 3, 2, 3, 2, 3, 4, 2, 3, 4, 5},
   //LPM WI ELNA BYPASS ON WO SAW
   {0, 1, 2, 3, 4, 3, 4, 5},
   //LPM WI ELNA BYPASS ON WI SAW
   {0, 1, 2, 3, 4, 0, 1, 2, 3, 4, 5},
   //LPM WO ELNA
   {0, 1, 2, 3, 2, 3, 2, 3, 2, 3, 4, 3, 4, 2, 3, 4, 5},
   //LPM WI ELNA BYPASS WO SAW
   {0, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2},
   //LPM WI ELNA BYPASS WI SAW
   {0, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2}
};

const FEC_RXCAL_GAIN_TABLE_RANGE_AND_DL_RANGE_HPM HPM_withuot_eLNA = 
{
   //max DL pwr
   {-416,-640,-832,-1024,-1216,-1536,-1536},
   //{-392,-633,-821,-998,-1188,-1468,-1468},
   //min DL pwr
   {-1664,-1856,-2016,-2208,-2496,-2624,-2624},
   //{-1668,-1857,-2045,-2232,-2510,-2666,-2666},
   //max rf gain
   {467,659,851,1043,1331,1907,1907},
   //min rf gain
   {275,563,755,947,1139,1427,1427},
   //DL to rf gain factor
   -461
};

const FEC_RXCAL_GAIN_TABLE_RANGE_AND_DL_RANGE_HPM HPM_with_eLNA_always_on = 
{
   //max DL pwr
   {-768,-1024,-1216,-1376,-1568,-1952,-1952},
   //min DL pwr
   {-2048,-2240,-2400,-2528,-2688,-2688,-2688},
   //max rf gain
   {851,1043,1235,1427,1715,2291,2291},
   //min rf gain
   {659,947,1139,1331,1523,1811,1811},
   //DL to rf gain factor
   -461
};

const FEC_RXCAL_GAIN_TABLE_RANGE_AND_DL_RANGE_HPM HPM_with_eLNA_bypass = 
{
   //max DL pwr
   {-384,-576,-800,-960,-1152,-1376,-1696},
   //min DL pwr
   {-1504,-1664,-1856,-2048,-2240,-2560,-2656},
   //max rf gain
   {371,563,755,947,1139,1427,2003},
   //min rf gain
   {179,467,659,851,1043,1235,1523},
   //DL to rf gain factor
   -461
};

const FEC_RXCAL_GAIN_TABLE_RANGE_AND_DL_RANGE_HPM HPM_with_eLNA_bypass_SAW = 
{
   //max DL pwr
   {-384,-576,-800,-960,-1152,-1376,-1888},
   //min DL pwr
   {-1504,-1664,-1856,-2048,-2240,-2624,-2656},
   //max rf gain
   {371,563,755,947,1139,1619,2291},
   //min rf gain
   {179,467,659,851,1043,1235,1715},
   //DL to rf gain factor
   -461
};


const FEC_RXCAL_GAIN_TABLE_RANGE_AND_DL_RANGE_HPM LPM_withuot_eLNA = 
{
   //max DL pwr
   {-672,-864,-1056,-1312,-1536,-1856,-1856},
   //{-653,-845,-1037,-1245,-1514,-1706,-1706},
   //min DL pwr
   {-1792,-1984,-2176,-2240,-2432,-2624,-2624},
   //{-1817,-2003,-2182,-2400,-2537,-2652,-2652},
   //max rf gain
   {691,883,1075,1363,1555,1939,1939},
   //min rf gain
   {403,787,979,1171,1459,1651,1651},
   //DL to rf gain factor
   -461
};

const FEC_RXCAL_GAIN_TABLE_RANGE_AND_DL_RANGE_HPM LPM_with_eLNA_always_on = 
{
   //max DL pwr
   {-1056,-1248,-1440,-1632,-1920,-2144,-2144},
   //min DL pwr
   {-2176,-2368,-2496,-2624,-2656,-2688,-2688},
   //max rf gain
   {1075,1267,1459,1651,1939,2323,2323},
   //min rf gain
   {787,1171,1363,1555,1747,2035,2035},
   //DL to rf gain factor
   -461
};

const FEC_RXCAL_GAIN_TABLE_RANGE_AND_DL_RANGE_HPM LPM_with_eLNA_bypass = 
{
   //max DL pwr
   {-608,-800,-960,-1088,-1280,-1504,-1952},
   //min DL pwr
   {-1536,-1728,-1920,-2112,-2272,-2624,-2656},
   //max rf gain
   {499,691,883,1075,1267,1747,2035},
   //min rf gain
   {307,595,787,979,1171,1363,1843},
   //DL to rf gain factor
   -461
};

const FEC_RXCAL_GAIN_TABLE_RANGE_AND_DL_RANGE_HPM LPM_with_eLNA_bypass_SAW = 
{
   //max DL pwr
   {-608,-800,-960,-1088,-1280,-1536,-1952},
   //min DL pwr
   {-1536,-1728,-1920,-2112,-2272,-2624,-2656},
   //max rf gain
   {499,691,883,1075,1267,1747,2323},
   //min rf gain
   {307,595,787,979,1171,1363,1843},
   //DL to rf gain factor
   -461
};




FEC_RXCAL_DEFAULT_DL_PWR_SUMMARY_TYPE_I default_DL_pwr_setting_type_I =
{
   {
      //HPM without eLNA
      {-960,-1056,-1248,-1440,-1632,-1824,0},
      //HPM with eLNA always on
      {-1216,-1408,-1600,-1792,-1984,-2176,0},
      //HPM with eLNA bypass w/o SAW
      {-960,-960,-1152,-1312,-1504,-1792,-1984},
      //HPM with eLNA bypass w/i SAW
      {-960,-960,-1152,-1312,-1504,-1696,-2080},
      //HPM without eLNA + HPM with eLNA always on
      {-1024,-1216,-1408,-1600,-1792,-2112,0},
      //HPM without eLNA + HPM with eLNA bypass w/o SAW
      {-960,-960,-1152,-1344,-1536,-1856,-1984},
      //HPM with eLNA always on + HPM with eLNA bypass w/o SAW
      {-960,-1152,-1344,-1536,-1728,-2080,-2112},
      //HPM without eLNA + HPM with eLNA bypass w/i SAW
      {-960,-960,-1152,-1344,-1536,-1888,-2080},
      //HPM with eLNA always on + HPM with eLNA bypass w/i SAW
      {-960,-1152,-1344,-1536,-1728,-2112,-2112},
      //HPM with eLNA bypass w/o SAW + HPM with eLNA bypass w/i SAW
      {-960,-960,-1152,-1344,-1536,-1728,-2048},
      //LPM without eLNA
      {-960,-1024,-1472,-1600,-1792,-2048,0},
      //LPM with eLNA always on
      {-1344,-1536,-1728,-1920,-2112,-2272,0},
      //LPM with eLNA bypass w/o SAW
      {-960,-960,-1152,-1440,-1632,-1920,-2080},
      //LPM with eLNA bypass w/i SAW
      {-960,-960,0-1152,-1440,-1632,-1920,-2112},
      //LPM without eLNA + LPM with eLNA always on
      {-1152,-1376,-1568,-1760,-2048,-2272,0},
      //LPM without eLNA + LPM with eLNA bypass w/o SAW
      {-960,-1024,-1216,-1472,-1696,-2016,-2112},
      //LPM with eLNA always on + LPM with eLNA bypass w/o SAW
      {-1152,-1376,-1568,-1760,-2048,-2272,-2272},
      //LPM without eLNA + LPM with eLNA bypass w/i SAW
      {-960,-1024,-1216,-1472,-1696,-2016,-2112},
      //LPM with eLNA always on + LPM with eLNA bypass w/i SAW
      {-960,-1376,0-1568,-1760,-2048,-2272,-2272},
      //LPM with eLNA bypass w/o SAW + LPM with eLNA bypass w/i SAW
      {-960,-960,-1152,-1344,-1536,-1792,-2112}
   }
};

FEC_RXCAL_DEFAULT_DL_PWR_SUMMARY_TYPE_II default_DL_pwr_setting_type_II = 
{
   {
      //HPM without eLNA
      {-960,-1056,-1056,-1056,-1056,-1248,-1248,-1248,-1344,-1344,-1344,-1344,-1344,-1568,-1568,-1568,-1568,-1568},
      //HPM with eLNA always on
      {-1344,-1440,-1440,-1440,-1440,-1632,-1632,-1632,-1728,-1728,-1728,-1728,-1728,-1952,-1952,-1952,-1952,-1952},
      //HPM with eLNA bypass w/o SAW
      {-960,-960,-960,-960,-960,-1152,-1152,-1152,-1248,-1248,-1248,-1248,-1248,-1632,-1952},
      //HPM with eLNA bypass w/i SAW
      {-960,-960,-960,-960,-960,-1152,-1152,-1152,-1248,-1248,-1248,-1248,-1248,-1632,-2144}
   }
};



INT32 gain_table_seq_base[8] = {659/*20.6*/,1235/*38.6*/,275/*8.6*/,179/*5.6*/,1555/*48.6*/,1363/*42.6*/,1171/*36.6*/,979/*30.6*/};
INT32 gain_table_seq_base_no_LPM_constrain[8] = {659/*20.6*/,1235/*38.6*/,275/*8.6*/,179/*5.6*/,787/*24.6*/,1363/*42.6*/,403/*12.6*/,307/*9.6*/};



#endif

const FEC_RXCAL_NCCA_LNA_MODE_COMBINE_MAPPING NCCA_seq_mapping_lna=
{
   {
      //p0
      {0,1,2,2,0,3,3,1,4,4,4,2,0,5,5,5,3,1},
      //p1
      {0,1,0,2,2,1,3,3,0,2,4,4,4,1,3,5,5,5}
   }
};

const FEC_RXCAL_NCCA_LNA_MODE_COMBINE_MAPPING NCCA_seq_mapping_lna_group=
{
   {
      //p0
      {0,1,2,2,2,3,3,3,4,4,4,4,4,5,5,5,5,5},
      //p1
      {0,1,0,0,0,1,1,1,0,0,0,0,0,1,1,1,1,1}
   }
};

const FEC_RXCAL_NCCA_LNA_MODE_COMBINE_MAPPING NCCA_seq_mapping_lna_group_bypass=
{
   {
      //p0
      {0,1,2,2,2,3,3,3,4,4,4,4,4,5,6,7,7,7},
      //p1
      {0,1,0,0,0,1,1,1,0,0,0,0,0,5,6,7,7,7}
   }
};

FEC_RXCAL_NCCA_LNA_GROUP_MAPPING NCCA_gain_mode_mapping_lna_group=
{
   {
      //p0
      {0,1,2,3,4,5},
      //p1
      {0,1,0,1,0,1}
   }
};


UINT8 NCCA_use_total_seq_num[4] = {18,15,3,4};
UINT8 NCCA_SRX_switch_seq_mapping[18] = {0,1,4,3,2,7,6,5,12,11,10,9,8,17,16,15,14,13};
#endif


/*******************************************************************************
*  Proto types
*******************************************************************************/

/*******************************************************************************
*  Constant
*******************************************************************************/


/*******************************************************************************
*  Local Variables 
*******************************************************************************/
#if !defined(__CORE_USIP1__) || defined(__LTE_L1SIM__)
const unsigned int fec_lna_ph_comp_table[FEC_AGC_LNA_NUM] = {0, 0, 0, 0, 0, 0};
const FEC_RXCAL_GAIN_TABLE_RANGE_AND_DL_RANGE_HPM* AGTD_use_calib_info[FEC_AGC_ANT_NUM];

/* Bandwidth index table */
const UINT32 agg_bw_table[FEC_AGC_AGG_BW_NUM] = {1400, 3000, 5000, 10000, 15000, 20000, 30000, 35000, 40000, 60000};
#endif



/*******************************************************************************
*  Local Functions 
*******************************************************************************/
#if !defined(__CORE_USIP1__) || defined(__LTE_L1SIM__)
void Fec_Rxcal_AGTD_Wanted_Gain_to_Used_And_Idx(INT16 wanted_gain, BOOL LPM_flag, BOOL eLNA_enable, FEC_AGC_ELNA_E Elna_mode, UINT16* seq_idx, INT16* used_gain);
void Fec_Rxcal_AGTD_Wanted_Gain_to_Used_And_Idx_no_LPM_constrain(INT16 wanted_gain, BOOL LPM_flag, BOOL eLNA_enable, FEC_AGC_ELNA_E Elna_mode, UINT16* seq_idx, INT16* used_gain);
void Fec_Rxcal_AGTD_Database_switch(BOOL LPM_flag, FEC_AGC_ELNA_E Elna_mode, UINT8 ant_idx);
UINT8 Fec_Rxcal_AGTD_DL_PWR_switch(FEC_AGC_ELNA_E Elna_mode_a0, FEC_AGC_ELNA_E Elna_mode_a1);
UINT8 Fec_Rxcal_AGTD_NCCA_HPM_seq_idx_switch(UINT8 gain_mode_P0, UINT8 gain_mode_P1);


#endif


/*******************************************************************************
*  Global Functions 
*******************************************************************************/


#if !defined(__CORE_USIP1__) || defined(__LTE_L1SIM__)
void EL1D_RXAGC_Gain_Cw_Query(const unsigned char lna_gain_idx[FEC_AGC_ANT_NUM],const unsigned char pga_gain_idx[FEC_AGC_ANT_NUM], unsigned int *query_gain_cw)
{
   unsigned int pga_cw,lna_cw;
   unsigned int i;
   
   for(i=0 ; i<FEC_AGC_ANT_NUM ; i++)
   {
      pga_cw = fec_gain_table_cw.PGA_CW[FEC_AGC_LTE_MODE][pga_gain_idx[i]];
      lna_cw = fec_gain_table_cw.LNA_CW[lna_gain_idx[i]];
      query_gain_cw[i] = (((pga_cw << 3) & 0x3F8) | \
                         ((lna_cw << 0) & 0x7));
   }
}

#if 1//defined(__L1_EXTERNAL_LNA_SUPPORT__) 
/*******************************************************************************
*  UL1D_RF_CellPowerMaptoRXGainValue()
*  This function is created for tool team to config the cell power before NSFT start
*  the rx gain value would be update to ul1_meta.total_gain for ini RXFEC gain and DC
*******************************************************************************/
unsigned int UL1D_RF_CellPowerMaptoRXGainValue(int query_cell/*qdbm*/,unsigned char elna_setting)//elna_en
{
    unsigned int desired_rx_gain = 51;
    unsigned int search_idx = 0; 
    int query_cell_dbm = -85;
    
    int cell_power[FEC_RXCAL_GAIN_TABLE_SEARCH_IDX]={                     -85,-82,-79,-76,-73,-70,-67,-64,-61,-58,-55,-52,-49,-46,-43,-40,-37,-34,-31,-28,-25};//low to high
    unsigned int rx_rf_gain_normal[FEC_RXCAL_GAIN_TABLE_SEARCH_IDX]={      54, 54, 54, 54, 54, 51, 48, 45, 42, 39, 36, 33, 30, 27, 24, 21, 18, 15, 12,  9,  6};
    unsigned int rx_rf_gain_elna_wo2saw[FEC_RXCAL_GAIN_TABLE_SEARCH_IDX]={ 48, 48, 48, 45, 42, 39, 36, 33, 30, 27, 24, 21, 18, 15, 12,  9,  6,  6,  6,  6,  6};
    unsigned int rx_rf_gain_elna[FEC_RXCAL_GAIN_TABLE_SEARCH_IDX]={        54, 51, 48, 45, 42, 39, 36, 33, 30, 27, 24, 21, 18, 15, 12,  9,  6,  6,  6,  6,  6};
    unsigned int rx_rf_gain_tier1m[FEC_RXCAL_GAIN_TABLE_SEARCH_IDX]={      60, 60, 60, 57, 54, 51, 48, 45, 42, 39, 36, 33, 30, 27, 24, 21, 18, 15, 12,  9,  6};
    /*rx_rf_gain_normal[21]={      54, 54, 54, 54, 54, 51, 48, 45, 42, 39, 36, 33, 30, 27, 24, 21, 18, 15, 12,  9,  6};
    rx_rf_gain_elna_wo2saw[21]={ 48, 48, 48, 45, 42, 39, 36, 33, 30, 27, 24, 21, 18, 15, 12,  9,  6,  6,  6,  6,  6};
    rx_rf_gain_elna[21]={        54, 51, 48, 45, 42, 39, 36, 33, 30, 27, 24, 21, 18, 15, 12,  9,  6,  6,  6,  6,  6};
    rx_rf_gain_tier1m[21]={      60, 60, 60, 57, 54, 51, 48, 45, 42, 39, 36, 33, 30, 27, 24, 21, 18, 15, 12,  9,  6};*/
    

        query_cell_dbm = query_cell>>2;

        if((query_cell_dbm) <= cell_power[0])
        {
            search_idx = 0;
        }else
        {
            while(((query_cell_dbm)>cell_power[search_idx])&&(search_idx < (FEC_RXCAL_GAIN_TABLE_SEARCH_IDX-1)))
            {
                search_idx++;                
            }
        }           


        switch (elna_setting)
        {
          case 0:     
             desired_rx_gain = rx_rf_gain_normal[search_idx];           

             break;
             
          case 1:     
             desired_rx_gain = rx_rf_gain_elna_wo2saw[search_idx];           

             break; 
             
          case 3:     
             desired_rx_gain = rx_rf_gain_elna[search_idx]; 

             break;
             
          case 4:     
             desired_rx_gain = rx_rf_gain_tier1m[search_idx];

             break;

          default:                  
             break;
        }

#ifndef __LTE_L1SIM__
      UL1D_RF_FOR_FEC_DEBUG(1, (int)query_cell_dbm, (int)desired_rx_gain,0,0,0,0);
#endif
        return desired_rx_gain;
 
}


void UL1D_RF_GetGainCW(unsigned short int rf_gain_cw[FEC_AGC_ANT_NUM], Fec_Use_Rf_Gain_CW_Input_T* rf_gain_info )
{
   unsigned int pga_cw,lna_cw;   
   unsigned int a_idx,table_idx[FEC_AGC_ANT_NUM]={0};
   unsigned char elna_en[FEC_AGC_ANT_NUM];
   
   if(rf_gain_info->ctrl_mode == 1)
   {   
       for(a_idx=0;a_idx<FEC_AGC_ANT_NUM;a_idx++)
       {
          pga_cw = fec_gain_table_cw.PGA_CW[FEC_AGC_WCDMA_MODE][rf_gain_info->pga_gain_idx[a_idx]];
          lna_cw = fec_gain_table_cw.LNA_CW[rf_gain_info->lna_gain_idx[a_idx]];
          //return ((unsigned short int)(((pga_cw << 3) & 0x3F8) | ((lna_cw << 0) & 0x7)));
          rf_gain_cw[a_idx]= (unsigned short int)(((pga_cw << 3) & 0x3F8) | ((lna_cw << 0) & 0x7));
       }
   }
   else//ctrl_mode =0 
   {

       elna_en[ANT_MAIN] = rf_gain_info->elna_setting[ANT_MAIN] & 0x01;
       elna_en[ANT_DIV] = rf_gain_info->elna_setting[ANT_DIV] & 0x01;

  
       /*choose table*/
       for(a_idx=0;a_idx<FEC_AGC_ANT_NUM;a_idx++)
       {
           if(rf_gain_info->is_cal == 0)
           {
               switch (rf_gain_info->elna_setting[a_idx])
               {
                 case 0:     
                    table_idx[a_idx] = 1;//all off
                    break;
                    
                 case 1:     
                    table_idx[a_idx] = 4;//eLNA on wo2ndsaw
                    break; 
                    
                 case 3:     
                    table_idx[a_idx] = 1;//eLNA on wi2ndsaw
                    break;
                    
                 case 4:     
                    table_idx[a_idx] = 5;//tier1
                    break;
               
                 default:                  
                    break;
               }

           }
       }
       
       if(rf_gain_info->is_cal == 1)        
       {
           if(elna_en[ANT_MAIN] == 0)
           {
               if((elna_en[ANT_DIV] == 0)||(rf_gain_info->is_rxd == 0))
               {
                   table_idx[ANT_MAIN] = 1; 
                   table_idx[ANT_DIV] = 1; 
               }
               if((elna_en[ANT_DIV] == 1)&&(rf_gain_info->is_rxd == 1))
               {
                   table_idx[ANT_MAIN] = 3; 
                   table_idx[ANT_DIV] = 2; 
               }                
           }else//MAIN eLNA en
           {           
               table_idx[ANT_MAIN] = 2; 
               
               if((elna_en[ANT_DIV] == 1)&&(rf_gain_info->is_rxd == 1))
                   table_idx[ANT_DIV] = 2;                
               if((elna_en[ANT_DIV] == 0)&&(rf_gain_info->is_rxd == 1))
                   table_idx[ANT_DIV] = 3;  
               if(rf_gain_info->is_rxd == 0)
                   table_idx[ANT_DIV] = 1;               
           }

       }


       /*rf gain mapping by table*/
      for(a_idx=0;a_idx<FEC_AGC_ANT_NUM;a_idx++)
      {
          switch (table_idx[a_idx])
          {
             case 1:  //gain tableA normal , gain tableC eLNA+2ndsaw, eLNA on+off on calibration        
                if(rf_gain_info->rf_gain_idx[a_idx] > (FEC_RXCAL_RF_GAIN_INDEX_NUM-1))
                   rf_gain_info->rf_gain_idx[a_idx] = FEC_RXCAL_RF_GAIN_INDEX_NUM-1;
             
                rf_gain_cw[a_idx] = (unsigned short int)(fec_gain_table_cw.W_RF_GAIN_CW[rf_gain_info->is_lpm][rf_gain_info->rf_gain_idx[a_idx]]);
          
                break;
                
             case 2:  // eLNA on+on calibration              
                if(rf_gain_info->rf_gain_idx[a_idx] > (FEC_RXCAL_RF_ELNA_GAIN_INDEX_NUM-1))
                   rf_gain_info->rf_gain_idx[a_idx] = FEC_RXCAL_RF_ELNA_GAIN_INDEX_NUM-1;
                        
                rf_gain_cw[a_idx] = (unsigned short int)(fec_gain_table_cw.W_ELNA_ON_RF_GAIN_CW[rf_gain_info->is_lpm][rf_gain_info->rf_gain_idx[a_idx]]);

                break;
                
             case 3:  //eLNA on+ off off calibration                 
                if(rf_gain_info->rf_gain_idx[a_idx] > (FEC_RXCAL_RF_GAIN_INDEX_NUM-1))
                   rf_gain_info->rf_gain_idx[a_idx] = FEC_RXCAL_RF_GAIN_INDEX_NUM-1;
             
                rf_gain_cw[a_idx] = (unsigned short int)(fec_gain_table_cw.W_ELNA_ONE_OFF_RF_GAIN_CW[rf_gain_info->rf_gain_idx[a_idx]]);

                if (rf_gain_info->is_lpm == 1)//on+off (off)
                {
                    rf_gain_cw[a_idx] = (unsigned short int)(fec_gain_table_cw.W_ELNA_ON_RF_GAIN_CW[rf_gain_info->is_lpm][rf_gain_info->rf_gain_idx[a_idx]]);
                }

                break;
                
             case 4:  //gain tableB eLNA                 
                if(rf_gain_info->rf_gain_idx[a_idx] > (FEC_RXCAL_RF_ELNA_GAIN_INDEX_NUM-1))
                      rf_gain_info->rf_gain_idx[a_idx] = FEC_RXCAL_RF_ELNA_GAIN_INDEX_NUM-1;
                
                rf_gain_cw[a_idx] = (unsigned short int)(fec_gain_table_cw.W_RF_ELNA_GAIN_CW[rf_gain_info->rf_gain_idx[a_idx]]);
                
                break;
                
             case 5:  //gain tableD tier1m                
                if(rf_gain_info->rf_gain_idx[a_idx] > (FEC_RXCAL_RF_TIER1_GAIN_INDEX_NUM-1))
                      rf_gain_info->rf_gain_idx[a_idx] = FEC_RXCAL_RF_TIER1_GAIN_INDEX_NUM-1;
                
                rf_gain_cw[a_idx] = (unsigned short int)(fec_gain_table_cw.W_RF_TIER1_MODE_GAIN_CW[rf_gain_info->rf_gain_idx[a_idx]]);
                
                break;
                
             default:
                
                break;
          }
      }

#ifndef __LTE_L1SIM__
      UL1D_RF_FOR_FEC_DEBUG(2, rf_gain_info->rf_gain_idx[ANT_MAIN], (int)table_idx[ANT_MAIN], 0, (int)rf_gain_cw[ANT_MAIN],0,0);//A0
      UL1D_RF_FOR_FEC_DEBUG(3, rf_gain_info->rf_gain_idx[ANT_DIV], (int)table_idx[ANT_DIV], 0,(int)rf_gain_cw[ANT_DIV],0,0);//A1
#endif

   #if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
      #endif
   }
}
#else
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif

void PGA_B_update(signed short int *PGA_B, signed short int *PGA_B_UPA, signed short int PGA_AB)
{
   signed short int i, offset;
   offset = PGA_AB ;
   for(i=0;i<17;i++)
   {
      PGA_B[i] = PGA_B_UPA[i] - offset;
   }
}



//reference by lrfcmncontrol.c RFD API
void Fec_Rxcal_GetCW(int *CW, int *used, int wanted, unsigned char is_lpm, int *tia_idx, int *if_idx)
{
   int codeword, tia_temp, if_temp;
   int rf_gain_idx, temp, lna_idx;
   int  abs_gain_comp = 0x53;
   if(is_lpm)
   {
      temp = (wanted >> 5);
      lna_idx = ((temp - 12) / 6);
      if(lna_idx == 2)
         lna_idx = 1;
      else if(lna_idx >5)
         lna_idx = 5;
         
      *CW = (lna_idx + 1);                      // PGA CW = 0x00
      *used = (((lna_idx*6 + 10) << 5) + abs_gain_comp);
      *tia_idx = 0;
      *if_idx  = 0;
   }
   else
   {
         if(wanted >= 33)                                          // ex : 2.6dB +-1.5dB range is the gain index 0 range
            wanted = wanted - 33;                                // lower bound to 0dB2
        else
           wanted = 0;
            
      rf_gain_idx = ((wanted >> 5) / 3);
      if(rf_gain_idx > 17)                                    // upper bound to 17dB2
         rf_gain_idx = 17;
         
      codeword = fec_gain_table_cw.L_RF_GAIN_CW[(unsigned int)rf_gain_idx];
      *CW = codeword;
      tia_temp = (codeword & 0x10) >> 4;
      *tia_idx = tia_temp ^ 1;
      if_temp = (codeword & 0x3C0) >> 6;
      *if_idx = (if_temp - 2);
      if(rf_gain_idx< 7)                                        // force use gain index 7 for gain index smaller than 7
         rf_gain_idx = 7;
      *used = (((rf_gain_idx * 3) <<5 ) + abs_gain_comp);
   }
}


/**********************************************
*********** MT6293 MM Calibration API ************
**********************************************/
UINT8 Fec_Get_Gain_Tbl_Idx(BOOL lpm_flag, FEC_ELNA_INFO_T elna_info)
{
   FEC_AGC_ELNA_E elna_mode = elna_info.elna_mode;
   BOOL elna_bypass = elna_info.elna_bypass;

   UINT8 lpm_bit = (lpm_flag == 1)? 1 : 0;
   UINT8 elna_bypass_mode = ((elna_mode == FEC_AGC_ELNA_BYPASS) || (elna_mode == FEC_AGC_ELNA_BYPASS_2ND_SAW) )? 1 : 0;
   UINT8 elna_bypass_saw = (elna_mode == FEC_AGC_ELNA_BYPASS_2ND_SAW)? 1 : 0;
   UINT8 tbl_idx;

   if((elna_mode == FEC_AGC_ELNA_OFF) || (((elna_mode == FEC_AGC_ELNA_BYPASS)||(elna_mode == FEC_AGC_ELNA_BYPASS_2ND_SAW)) && elna_bypass))
   {
      elna_bypass = 1;
   }
   else
   {
      elna_bypass = 0;
   }

   tbl_idx = (lpm_bit << 3) | (elna_bypass << 2) | (elna_bypass_mode<<1) | elna_bypass_saw;

   return tbl_idx;
}


UINT32 Fec_Set_Gain_Cw_By_Tbl_Idx(UINT8 gain_tbl_idx, UINT16 gain_seq_idx)
{
   UINT32 rf_gain_cw = 0x0;
   UINT8 pga_idx;
   UINT8 lna_idx;

   switch(gain_tbl_idx)
   {
      case FEC_AGC_GAIN_TBL_HPM_ELNA_ALWAYS_ON:
      {
         pga_idx = fec_pga_gain_idx_tbl.RF_GAIN_CW_HPM_ELNA_ALWAYS_ON[gain_seq_idx];
         lna_idx = fec_lna_gain_idx_tbl.RF_GAIN_CW_HPM_ELNA_ALWAYS_ON[gain_seq_idx];
         rf_gain_cw |= FEC_AGC_GAIN_CW_COMBINE(Fec_hpm_pga_gain_cw[pga_idx], Fec_lna_gain_cw[lna_idx]);
         break;
      }
      case FEC_AGC_GAIN_TBL_HPM_ELNA_BYPASS_ON_WO_SAW:
      {
         pga_idx = fec_pga_gain_idx_tbl.RF_GAIN_CW_HPM_ELNA_BYPASS_ON_WO_SAW[gain_seq_idx];
         lna_idx = fec_lna_gain_idx_tbl.RF_GAIN_CW_HPM_ELNA_BYPASS_ON_WO_SAW[gain_seq_idx];
         rf_gain_cw |= FEC_AGC_GAIN_CW_COMBINE(Fec_hpm_pga_gain_cw[pga_idx], Fec_lna_gain_cw[lna_idx]);
         break;
      }
      case FEC_AGC_GAIN_TBL_HPM_ELNA_BYPASS_ON_WI_SAW:
      {
         pga_idx = fec_pga_gain_idx_tbl.RF_GAIN_CW_HPM_ELNA_BYPASS_ON_WI_SAW[gain_seq_idx];
         lna_idx = fec_lna_gain_idx_tbl.RF_GAIN_CW_HPM_ELNA_BYPASS_ON_WI_SAW[gain_seq_idx];
         rf_gain_cw |= FEC_AGC_GAIN_CW_COMBINE(Fec_hpm_pga_gain_cw[pga_idx], Fec_lna_gain_cw[lna_idx]);
         break;
      }
      case FEC_AGC_GAIN_TBL_HPM_ELNA_OFF:
      {
         pga_idx = fec_pga_gain_idx_tbl.RF_GAIN_CW_HPM_ELNA_OFF[gain_seq_idx];
         lna_idx = fec_lna_gain_idx_tbl.RF_GAIN_CW_HPM_ELNA_OFF[gain_seq_idx];
         rf_gain_cw |= FEC_AGC_GAIN_CW_COMBINE(Fec_hpm_pga_gain_cw[pga_idx], Fec_lna_gain_cw[lna_idx]);
         break;
      }
      case FEC_AGC_GAIN_TBL_HPM_ELNA_BYPASS_WO_SAW:
      {
         pga_idx = fec_pga_gain_idx_tbl.RF_GAIN_CW_HPM_ELNA_BYPASS_WO_SAW[gain_seq_idx];
         lna_idx = fec_lna_gain_idx_tbl.RF_GAIN_CW_HPM_ELNA_BYPASS_WO_SAW[gain_seq_idx];
         rf_gain_cw |= FEC_AGC_GAIN_CW_COMBINE(Fec_hpm_pga_gain_cw[pga_idx], Fec_lna_gain_cw[lna_idx]);
         break;
      }
      case FEC_AGC_GAIN_TBL_HPM_ELNA_BYPASS_WI_SAW:
      {
         pga_idx = fec_pga_gain_idx_tbl.RF_GAIN_CW_HPM_ELNA_BYPASS_WI_SAW[gain_seq_idx];
         lna_idx = fec_lna_gain_idx_tbl.RF_GAIN_CW_HPM_ELNA_BYPASS_WI_SAW[gain_seq_idx];
         rf_gain_cw |= FEC_AGC_GAIN_CW_COMBINE(Fec_hpm_pga_gain_cw[pga_idx], Fec_lna_gain_cw[lna_idx]);
         break;
      }
      case FEC_AGC_GAIN_TBL_LPM_ELNA_ALWAYS_ON:
      {
         pga_idx = fec_pga_gain_idx_tbl.RF_GAIN_CW_LPM_ELNA_ALWAYS_ON[gain_seq_idx];
         lna_idx = fec_lna_gain_idx_tbl.RF_GAIN_CW_LPM_ELNA_ALWAYS_ON[gain_seq_idx];
         rf_gain_cw |= FEC_AGC_GAIN_CW_COMBINE(Fec_lpm_pga_gain_cw[pga_idx], Fec_lna_gain_cw[lna_idx]);
         break;
      }
      case FEC_AGC_GAIN_TBL_LPM_ELNA_BYPASS_ON_WO_SAW:
      {
         pga_idx = fec_pga_gain_idx_tbl.RF_GAIN_CW_LPM_ELNA_BYPASS_ON_WO_SAW[gain_seq_idx];
         lna_idx = fec_lna_gain_idx_tbl.RF_GAIN_CW_LPM_ELNA_BYPASS_ON_WO_SAW[gain_seq_idx];
         rf_gain_cw |= FEC_AGC_GAIN_CW_COMBINE(Fec_lpm_pga_gain_cw[pga_idx], Fec_lna_gain_cw[lna_idx]);
         break;
      }
      case FEC_AGC_GAIN_TBL_LPM_ELNA_BYPASS_ON_WI_SAW:
      {
         pga_idx = fec_pga_gain_idx_tbl.RF_GAIN_CW_LPM_ELNA_BYPASS_ON_WI_SAW[gain_seq_idx];
         lna_idx = fec_lna_gain_idx_tbl.RF_GAIN_CW_LPM_ELNA_BYPASS_ON_WI_SAW[gain_seq_idx];
         rf_gain_cw |= FEC_AGC_GAIN_CW_COMBINE(Fec_lpm_pga_gain_cw[pga_idx], Fec_lna_gain_cw[lna_idx]);
         break;
      }
      case FEC_AGC_GAIN_TBL_LPM_ELNA_OFF:
      {
         pga_idx = fec_pga_gain_idx_tbl.RF_GAIN_CW_LPM_ELNA_OFF[gain_seq_idx];
         lna_idx = fec_lna_gain_idx_tbl.RF_GAIN_CW_LPM_ELNA_OFF[gain_seq_idx];
         rf_gain_cw |= FEC_AGC_GAIN_CW_COMBINE(Fec_lpm_pga_gain_cw[pga_idx], Fec_lna_gain_cw[lna_idx]);
         break;
      }
      case FEC_AGC_GAIN_TBL_LPM_ELNA_BYPASS_WO_SAW:
      {
         pga_idx = fec_pga_gain_idx_tbl.RF_GAIN_CW_LPM_ELNA_BYPASS_WO_SAW[gain_seq_idx];
         lna_idx = fec_lna_gain_idx_tbl.RF_GAIN_CW_LPM_ELNA_BYPASS_WO_SAW[gain_seq_idx];
         rf_gain_cw |= FEC_AGC_GAIN_CW_COMBINE(Fec_lpm_pga_gain_cw[pga_idx], Fec_lna_gain_cw[lna_idx]);
         break;
      }
      case FEC_AGC_GAIN_TBL_LPM_ELNA_BYPASS_WI_SAW:
      {
         pga_idx = fec_pga_gain_idx_tbl.RF_GAIN_CW_LPM_ELNA_BYPASS_WI_SAW[gain_seq_idx];
         lna_idx = fec_lna_gain_idx_tbl.RF_GAIN_CW_LPM_ELNA_BYPASS_WI_SAW[gain_seq_idx];
         rf_gain_cw |= FEC_AGC_GAIN_CW_COMBINE(Fec_lpm_pga_gain_cw[pga_idx], Fec_lna_gain_cw[lna_idx]);
         break;
      }
      default:
      {
         rf_gain_cw |= FEC_AGC_GAIN_CW_COMBINE(Fec_lpm_pga_gain_cw[0], Fec_lna_gain_cw[0]);
         break;
      }
   }

   return rf_gain_cw;
}

void Fec_Rxcal_Set_Gain_Into_Range(UINT8 gain_tbl_idx, INT16 *wanted_gain)
{
   INT16 min_gain=0, max_gain=0;

   switch(gain_tbl_idx)
   {
      case FEC_AGC_GAIN_TBL_HPM_ELNA_ALWAYS_ON:
      {
         min_gain = HPM_with_eLNA_always_on.min_gain_dB[0];
         max_gain = HPM_with_eLNA_always_on.max_gain_dB[5];
         break;
      }
      case FEC_AGC_GAIN_TBL_HPM_ELNA_BYPASS_ON_WO_SAW:
      {
         min_gain = HPM_with_eLNA_bypass.min_gain_dB[5];
         max_gain = HPM_with_eLNA_bypass.max_gain_dB[6];
         break;
      }
      case FEC_AGC_GAIN_TBL_HPM_ELNA_BYPASS_ON_WI_SAW:
      {
         min_gain = HPM_with_eLNA_bypass_SAW.min_gain_dB[5];
         max_gain = HPM_with_eLNA_bypass_SAW.max_gain_dB[6];
         break;
      }
      case FEC_AGC_GAIN_TBL_HPM_ELNA_OFF:
      {
         min_gain = HPM_withuot_eLNA.min_gain_dB[0];
         max_gain = HPM_withuot_eLNA.max_gain_dB[5];
         break;
      }
      case FEC_AGC_GAIN_TBL_HPM_ELNA_BYPASS_WO_SAW:
      {
         min_gain = HPM_with_eLNA_bypass.min_gain_dB[0];
         max_gain = HPM_with_eLNA_bypass.max_gain_dB[4];
         break;
      }
      case FEC_AGC_GAIN_TBL_HPM_ELNA_BYPASS_WI_SAW:
      {
         min_gain = HPM_with_eLNA_bypass_SAW.min_gain_dB[0];
         max_gain = HPM_with_eLNA_bypass_SAW.max_gain_dB[4];
         break;
      }
      case FEC_AGC_GAIN_TBL_LPM_ELNA_ALWAYS_ON:
      {
         min_gain = LPM_with_eLNA_always_on.min_gain_dB[0];
         max_gain = LPM_with_eLNA_always_on.max_gain_dB[5];
         break;
      }
      case FEC_AGC_GAIN_TBL_LPM_ELNA_BYPASS_ON_WO_SAW:
      {
         min_gain = LPM_with_eLNA_bypass.min_gain_dB[5];
         max_gain = LPM_with_eLNA_bypass.max_gain_dB[6];
         break;
      }
      case FEC_AGC_GAIN_TBL_LPM_ELNA_BYPASS_ON_WI_SAW:
      {
         min_gain = LPM_with_eLNA_bypass_SAW.min_gain_dB[5];
         max_gain = LPM_with_eLNA_bypass_SAW.max_gain_dB[6];
         break;
      }
      case FEC_AGC_GAIN_TBL_LPM_ELNA_OFF:
      {
         min_gain = LPM_withuot_eLNA.min_gain_dB[0];
         max_gain = LPM_withuot_eLNA.max_gain_dB[5];
         break;
      }
      case FEC_AGC_GAIN_TBL_LPM_ELNA_BYPASS_WO_SAW:
      {
         min_gain = LPM_with_eLNA_bypass.min_gain_dB[0];
         max_gain = LPM_with_eLNA_bypass.max_gain_dB[4];
         break;
      }
      case FEC_AGC_GAIN_TBL_LPM_ELNA_BYPASS_WI_SAW:
      {
         min_gain = LPM_with_eLNA_bypass_SAW.min_gain_dB[0];
         max_gain = LPM_with_eLNA_bypass_SAW.max_gain_dB[4];
         break;
      }
      default:
         break;
   }

   if(*wanted_gain > max_gain)
      *wanted_gain = max_gain;
   else if(*wanted_gain < min_gain)
      *wanted_gain = min_gain;

}


UINT32 Fec_Set_Gain_Cw(UINT8 gain_tbl_idx, UINT16 gain_seq_idx, UINT8 path, UINT8 ant, UINT16 freq)
{
   UINT32 rf_gain_cw = 0x0;
   UINT8 addr_idx = path*FEC_AGC_PATH_NUM + ant;
   BOOL high_low_freq = (freq < FEC_AGC_HB_THRESHOLD)? 1 : 0;
   UINT8 lna_idx;

   rf_gain_cw |= Fec_rf_gain_cw_addr[addr_idx];
   rf_gain_cw |= Fec_Set_Gain_Cw_By_Tbl_Idx(gain_tbl_idx, gain_seq_idx);
   lna_idx = (rf_gain_cw & 0x7) - 1 ; 

   //bit[11]~bit[12]
   if((freq >= FEC_AGC_HB_THRESHOLD) && (lna_idx == 5))
   {
      rf_gain_cw |= Fec_high_low_freq_cw[high_low_freq];
   }

   return rf_gain_cw;
}

UINT8 Fec_Get_Agg_Bw_Idx(UINT32 agg_bw)
{
   UINT8 bw_idx = 0;

   while((agg_bw>agg_bw_table[bw_idx]) && (bw_idx<FEC_AGC_AGG_BW_NUM))
   {
      bw_idx++;
   }
   return bw_idx;
}

UINT32 Fec_Set_Lpm_Setting_Cw(BOOL lpm_flag, UINT8 path, UINT8 ant, UINT32 agg_bw, BOOL qdl_flag)
{
   UINT32 lpm_setting_cw = 0x0;
   UINT8 addr_idx = path*FEC_AGC_PATH_NUM + ant;
   UINT8 agg_bw_idx = Fec_Get_Agg_Bw_Idx(agg_bw);
   UINT8 lpm_cw_idx;

   lpm_setting_cw |= Fec_lpm_setting_cw_addr[addr_idx];  

   if(!lpm_flag)
   {
      if(qdl_flag)
         lpm_cw_idx = 4;
      else
         lpm_cw_idx = 0;
   }
   else if(lpm_flag)
   {
      if(agg_bw_idx >= 0 && agg_bw_idx <= 3) lpm_cw_idx = 1;
      else if(agg_bw_idx >= 4 && agg_bw_idx <= 5) lpm_cw_idx = 2;
      else if(agg_bw_idx >= 6 && agg_bw_idx <= 9) lpm_cw_idx = 3;
      else lpm_cw_idx = 5;
   }
   lpm_setting_cw |= Fec_lpm_setting_cw[lpm_cw_idx];

   return lpm_setting_cw;
}

UINT32 Fec_Set_Arx_Cw(BOOL lpm_flag, UINT8 path, UINT8 ant, UINT32 agg_bw)
{
   UINT32 arx_cw = 0x0;
   UINT8 addr_idx = path*FEC_AGC_PATH_NUM + ant;
   UINT8 agg_bw_idx = Fec_Get_Agg_Bw_Idx(agg_bw);
   UINT8 arx_cw_idx;

   arx_cw |= Fec_arx_cw_addr[addr_idx];

   if(!lpm_flag)
   {
      arx_cw_idx = 0;
   }
   else if(lpm_flag)
   {
      if(agg_bw_idx >= 0 && agg_bw_idx <= 5) arx_cw_idx = 1;
      else if(agg_bw_idx >= 6 && agg_bw_idx <= 9) arx_cw_idx = 2;
      else arx_cw_idx = 3;
   }
   arx_cw |= Fec_arx_cw[arx_cw_idx];
  
   return arx_cw;
}

UINT32 Fec_Set_Gain_Latch_Cw(UINT8 path)
{
   //CW338 bit19: path1, bit18: path0
   if(path == 0)       return 0x15240000;    
   else if(path == 1)  return 0x15280000;    
   else                return 0x15240000;  //default path0
}

UINT32 Fec_Set_Gain_Delay_Cw(UINT8 path)
{
   //Delay Cw = 0
   if(path == 0)       return 0x15300000;       //CW339
   else if(path == 1)  return 0x15900000;       //CW345  
   else                return 0x15300000;       //default path0
}


/***************************************************************************//**
 * @brief         TST get LNA gain mode
 * @details       
 * @return        - LNA mode
 * @date          - 2016/09/29
*******************************************************************************/
void Fec_Rxcal_GetLNAMode(INT16 wanted_rf_gain, BOOL lpm_flag, FEC_ELNA_INFO_T elna_info, UINT8 *return_lna_mode)
{
   UINT8 gain_tbl_idx;
   UINT16 gain_seq_idx = 0;
   UINT32 gain_cw;
   INT16 used_rf_gain = 0;

   gain_tbl_idx = Fec_Get_Gain_Tbl_Idx(lpm_flag, elna_info);
   Fec_Rxcal_Set_Gain_Into_Range(gain_tbl_idx, &wanted_rf_gain);
   Fec_Rxcal_AGTD_Wanted_Gain_to_Used_And_Idx_no_LPM_constrain(wanted_rf_gain, lpm_flag, elna_info.elna_bypass, elna_info.elna_mode, &gain_seq_idx, &used_rf_gain);
   gain_cw =  Fec_Set_Gain_Cw_By_Tbl_Idx(gain_tbl_idx, gain_seq_idx);

   *return_lna_mode = (UINT8)(gain_cw & 0x7) - 1;
}

/***************************************************************************//**
 * @brief         TST get Used Gain & CW
 * @details       
 * @return        - Used Gain, RF Gain CW, LPM CW, ARX CW, LATCH CW, DELAY CW
 * @date          - 2016/09/06
*******************************************************************************/
void Fec_Rxcal_Get_RF_Gain_CW(BOOL partial_on, FEC_RXCAL_INFO_T *rxcal_info, FEC_RXCAL_GAIN_CW_U *return_gain_cw_data)
{
   UINT16 comp_route = rxcal_info->comp_route;
   FEC_RXCAL_COMMON_INFO_T *cal_common_info = NULL;
   FEC_RXCAL_GAIN_CW_DATA_T *gain_cw_data = NULL;
   UINT32 cc_num = 0;
   INT16 wanted_rf_gain ;
   UINT16 freq;
   UINT8 srx_path;
   BOOL lpm_flag;
   BOOL qdl_info;
   FEC_ELNA_INFO_T elna_info;
   UINT32 agg_bw;
   UINT8 gain_tbl_idx;
   UINT16 gain_seq_idx = 0;
   UINT8 lna_mode = 0;
   INT16 used_rf_gain = 0;
   UINT32 cc, ant;

   if((!FEC_AGC_ROUTE_NCCA_CHK(comp_route)) || partial_on)
   {
      cal_common_info = &(rxcal_info->cal_info.sc_info);
      gain_cw_data = &(return_gain_cw_data->sc_cw);
      cc_num = 1;
   }
   else
   {
      cc_num = 2;  //2cc 
   }

   /* set RF CW & RF gain*/
   for(cc=0; cc<cc_num; cc++)
   {
      if(FEC_AGC_ROUTE_NCCA_CHK(comp_route) && !partial_on)
      {
         cal_common_info = &(rxcal_info->cal_info.gbg_info[cc]);
         gain_cw_data = &(return_gain_cw_data->gbg_cw[cc]);
      }
      for(ant=0; ant<FEC_AGC_ANT_NUM; ant++)
      {
         wanted_rf_gain = cal_common_info->wanted_rf_gain[ant];
         lpm_flag = cal_common_info->lpm_flag;
         freq = cal_common_info->freq;
         qdl_info = cal_common_info->qdl_info;
         elna_info = cal_common_info->elna_info[ant];
         srx_path = cal_common_info->srx_path;
         agg_bw = cal_common_info->agg_bw;
         EL1D_RXAGC_DBG_TRACE8(wanted_rf_gain, lpm_flag, freq, qdl_info, elna_info.elna_bypass, elna_info.elna_mode, srx_path, agg_bw);

         gain_tbl_idx = Fec_Get_Gain_Tbl_Idx(lpm_flag, elna_info);
         Fec_Rxcal_Set_Gain_Into_Range(gain_tbl_idx, &wanted_rf_gain);
         Fec_Rxcal_AGTD_Wanted_Gain_to_Used_And_Idx_no_LPM_constrain(wanted_rf_gain, lpm_flag, elna_info.elna_bypass, elna_info.elna_mode, &gain_seq_idx, &used_rf_gain);
         EL1D_RXAGC_DBG_TRACE3(gain_tbl_idx, used_rf_gain, gain_seq_idx);

         gain_cw_data->used_rf_gain_db[ant] = used_rf_gain;
         gain_cw_data->rf_gain_cw[ant] = Fec_Set_Gain_Cw(gain_tbl_idx, gain_seq_idx, srx_path, ant, freq);
         gain_cw_data->lpm_setting_cw[ant] = Fec_Set_Lpm_Setting_Cw(lpm_flag, srx_path, ant, agg_bw, qdl_info);
         gain_cw_data->arx_cw[ant] = Fec_Set_Arx_Cw(lpm_flag, srx_path, ant, agg_bw);
         gain_cw_data->latch_cw[ant] = Fec_Set_Gain_Latch_Cw(srx_path);
         gain_cw_data->delay_cw[ant] = Fec_Set_Gain_Delay_Cw(srx_path);
         EL1D_RXAGC_DBG_TRACE7(ant, gain_cw_data->used_rf_gain_db[ant], gain_cw_data->rf_gain_cw[ant], \
                               gain_cw_data->lpm_setting_cw[ant], gain_cw_data->arx_cw[ant], \
                               gain_cw_data->latch_cw[ant], gain_cw_data->delay_cw[ant]);

         /* get lna_mode for 3G*/
         Fec_Rxcal_GetLNAMode(wanted_rf_gain, lpm_flag, elna_info, &lna_mode);
         gain_cw_data->lna_mode[ant] = lna_mode;
      }
   }
}


UINT8 Fec_Rxcal_AGTD_Type_I(BOOL LPM_flag, FEC_AGC_ELNA_E Elna_mode[FEC_AGC_ANT_NUM], FEC_RXCAL_CALIB_INFO_TYPE_I Calib_info[MAX_SEQUENCE_NUM_TYPE_I])
{
   UINT8 idx,ini_cnt, total_seq_num, ant_idx;
   FEC_AGC_ELNA_E Elna_mode_local[FEC_AGC_ANT_NUM];
   INT16 default_DL_pwr_local;
   INT16 max_DL_pwr_final, min_DL_pwr_final;
   FEC_RXCAL_CALIB_INFO_DLGetGain_TYPE_I Calib_Gain_info; /* = (FEC_RXCAL_CALIB_INFO_DLGetGain_TYPE_I*)malloc(sizeof(FEC_RXCAL_CALIB_INFO_DLGetGain_TYPE_I)*1);*/
   UINT8 DL_pwr_search_idx;
   /* initial seq num*/
   if(LPM_flag)
      total_seq_num = 3;
   else
      total_seq_num = 6;
   /*eLNA mode  mapping  &  choose total seq num */
   for(idx = 0 ; idx < FEC_AGC_ANT_NUM ; idx++)
   {
      /*mapping eLNA mode  to  local use (5->3) */
      if( (Elna_mode[idx] == FEC_AGC_ELNA_BYPASS))
      {
         Elna_mode_local[idx] = FEC_AGC_ELNA_BYPASS; //    w/i eLNA bypass  w/o SAW
         DL_pwr_search_idx = 2;
      }
      else if( (Elna_mode[idx] == FEC_AGC_ELNA_BYPASS_2ND_SAW))
      {
         Elna_mode_local[idx] = FEC_AGC_ELNA_BYPASS_2ND_SAW; //    w/i eLNA bypass  w/i SAW
         DL_pwr_search_idx = 3;
      }
      else if( (Elna_mode[idx] == FEC_AGC_ELNA_ALWAYS_ON) || (Elna_mode[idx] == FEC_AGC_ELNA_ALWAYS_ON_2ND_SAW))
      {
         Elna_mode_local[idx] = FEC_AGC_ELNA_ALWAYS_ON; //    w/i eLNA  always on
         DL_pwr_search_idx = 1;
      }
      else
      {
         Elna_mode_local[idx] = FEC_AGC_ELNA_OFF; //    w/o eLNA  
         DL_pwr_search_idx = 0;
      }

      /*decide  total seq num*/
      if(LPM_flag)
      {
         if((Elna_mode_local[idx] == FEC_AGC_ELNA_BYPASS) || (Elna_mode_local[idx] == FEC_AGC_ELNA_BYPASS_2ND_SAW))
            total_seq_num = 4;
      }
      else
      {
         if((Elna_mode_local[idx] == FEC_AGC_ELNA_BYPASS) || (Elna_mode_local[idx] == FEC_AGC_ELNA_BYPASS_2ND_SAW))
            total_seq_num = 7;
      }
      /*choose database*/
      Fec_Rxcal_AGTD_Database_switch(LPM_flag, Elna_mode_local[idx], idx);
   }


   /*decide default DL power mapping idx*/
   if(Elna_mode_local[0] != Elna_mode_local[1])
   {
      DL_pwr_search_idx = Fec_Rxcal_AGTD_DL_PWR_switch(Elna_mode_local[0],Elna_mode_local[1]);
   }


   
   /**/
   if(LPM_flag)
      ini_cnt = 3;
   else
      ini_cnt = 0;

   for(idx = 0 ; idx < total_seq_num ; idx++) // idx -> seq idx
   {
      /*initial max/min DL pwr */
      max_DL_pwr_final = 0;
      min_DL_pwr_final = -3200;
      /*cal max/min/default DL pwr */
      for(ant_idx = 0 ; ant_idx < FEC_AGC_ANT_NUM ; ant_idx++)
      {
         if( (AGTD_use_calib_info[ant_idx]->max_dl_pwr[idx + ini_cnt]) < max_DL_pwr_final)
            max_DL_pwr_final = AGTD_use_calib_info[ant_idx]->max_dl_pwr[idx + ini_cnt];
         if( (AGTD_use_calib_info[ant_idx]->min_dl_pwr[idx + ini_cnt]) > min_DL_pwr_final)
            min_DL_pwr_final = AGTD_use_calib_info[ant_idx]->min_dl_pwr[idx + ini_cnt];
      }
      //default_DL_pwr_local = 6*32+((max_DL_pwr_final + min_DL_pwr_final)>>6)*32 ;
      if(LPM_flag)
         default_DL_pwr_local = default_DL_pwr_setting_type_I.default_DL_pwr[DL_pwr_search_idx + 10][idx + ini_cnt];
     else
        default_DL_pwr_local = default_DL_pwr_setting_type_I.default_DL_pwr[DL_pwr_search_idx][idx + ini_cnt];
      /*assign max/min/default DL pwer*/
      Calib_info[idx].max_dl_power     = max_DL_pwr_final;
      Calib_info[idx].min_dl_power     = min_DL_pwr_final;
      Calib_info[idx].default_dl_power = default_DL_pwr_local;
      /*cal max DL to min gain (and suitable dig gain)*/
      Fec_Rxcal_AGTD_DLPWRGetGain_Type_I(max_DL_pwr_final, idx, LPM_flag, Elna_mode_local, &Calib_Gain_info);
      Calib_info[idx].min_gain_dB[ANT_MAIN] = Calib_Gain_info.rf_gain_dB[ANT_MAIN];
      Calib_info[idx].min_gain_dB[ANT_DIV]  = Calib_Gain_info.rf_gain_dB[ANT_DIV];
      /*cal min DL to max gain (and suitable dig gain)*/
      Fec_Rxcal_AGTD_DLPWRGetGain_Type_I(min_DL_pwr_final, idx, LPM_flag, Elna_mode_local, &Calib_Gain_info);
      Calib_info[idx].max_gain_dB[ANT_MAIN] = Calib_Gain_info.rf_gain_dB[ANT_MAIN];
      Calib_info[idx].max_gain_dB[ANT_DIV]  = Calib_Gain_info.rf_gain_dB[ANT_DIV];
      /*cal default DL to default gain (and suitable dig gain)*/
      Fec_Rxcal_AGTD_DLPWRGetGain_Type_I(default_DL_pwr_local, idx, LPM_flag, Elna_mode_local, &Calib_Gain_info);
      Calib_info[idx].default_gain_dB[ANT_MAIN] = Calib_Gain_info.rf_gain_dB[ANT_MAIN];
      Calib_info[idx].default_gain_dB[ANT_DIV]  = Calib_Gain_info.rf_gain_dB[ANT_DIV];
      /*other info  follow default rf gain setting*/
      Calib_info[idx].dig_gain_dB    [ANT_MAIN] = Calib_Gain_info.dig_gain_dB    [ANT_MAIN];
      Calib_info[idx].dig_gain_dB    [ANT_DIV]  = Calib_Gain_info.dig_gain_dB    [ANT_DIV];
      //Calib_info[idx].dig_gain_exp[ANT_MAIN] = Calib_Gain_info.dig_gain_exp[ANT_MAIN];
      //Calib_info[idx].dig_gain_exp[ANT_DIV]  = Calib_Gain_info.dig_gain_exp[ANT_DIV];
      //Calib_info[idx].dig_gain_man[ANT_MAIN] = Calib_Gain_info.dig_gain_man[ANT_MAIN];
      //Calib_info[idx].dig_gain_man[ANT_DIV]  = Calib_Gain_info.dig_gain_man[ANT_DIV];
      Calib_info[idx].elna_bypass [ANT_MAIN] = Calib_Gain_info.elna_bypass [ANT_MAIN];
      Calib_info[idx].elna_bypass [ANT_DIV]  = Calib_Gain_info.elna_bypass [ANT_DIV];
      Calib_info[idx].lna_mode    [ANT_MAIN] = Calib_Gain_info.lna_mode    [ANT_MAIN];
      Calib_info[idx].lna_mode    [ANT_DIV]  = Calib_Gain_info.lna_mode    [ANT_DIV];

      Calib_info[idx].location_idx[ANT_MAIN] = idx + ini_cnt;
      Calib_info[idx].location_idx[ANT_DIV]  = idx + ini_cnt;
   }

   return total_seq_num;

}

UINT8 Fec_Rxcal_AGTD_Type_II_NCCA(BOOL LPM_flag, FEC_AGC_ELNA_E Elna_mode, FEC_RXCAL_CALIB_INFO_TYPE_II_NCCA Calib_info[MAX_SEQUENCE_NUM_TYPE_II])
{

   UINT8 idx,ini_cnt, total_seq_num, seq_num_check_idx;
   FEC_AGC_ELNA_E Elna_mode_local[FEC_AGC_ANT_NUM];
   INT16 default_DL_pwr_local;
   INT16 max_DL_pwr_final, min_DL_pwr_final;
   UINT8 seq_idx_to_lna_p0, seq_idx_to_lna_p1;
   FEC_RXCAL_CALIB_INFO_DLGetGain_TYPE_II_NCCA Calib_Gain_info_NCCA;
   UINT8 DL_pwr_search_idx; // 0 : w/o eLNA ; 1: always on ;2: bypass w/o SAW ; 3:bypass w/i SAW

   /*eLNA mode  mapping  &  choose total seq num */

   /*mapping eLNA mode  to  local use (5->3) */
   if( (Elna_mode == FEC_AGC_ELNA_BYPASS))
   {
      Elna_mode_local[0] = FEC_AGC_ELNA_BYPASS; //     w/i eLNA bypass  w/o SAW
      DL_pwr_search_idx = 2;
   }
   else if( (Elna_mode == FEC_AGC_ELNA_BYPASS_2ND_SAW))
   {
      Elna_mode_local[0] = FEC_AGC_ELNA_BYPASS_2ND_SAW; //     w/i eLNA bypass  w/i SAW
      DL_pwr_search_idx = 3;
   }
   else if( (Elna_mode == FEC_AGC_ELNA_ALWAYS_ON) || (Elna_mode == FEC_AGC_ELNA_ALWAYS_ON_2ND_SAW))
   {
      Elna_mode_local[0] = FEC_AGC_ELNA_ALWAYS_ON; //    w/i eLNA  always on
      DL_pwr_search_idx = 1;
   }
   else
   {
      Elna_mode_local[0] = FEC_AGC_ELNA_OFF; //    w/o eLNA
      DL_pwr_search_idx = 0;
   }

   /*decide  total seq num*/
   if((Elna_mode_local[0] == FEC_AGC_ELNA_BYPASS) || (Elna_mode_local[0] == FEC_AGC_ELNA_BYPASS_2ND_SAW))
      seq_num_check_idx = 1;
   else
      seq_num_check_idx = 0;

   seq_num_check_idx = ((LPM_flag << 1) | seq_num_check_idx);
   total_seq_num = NCCA_use_total_seq_num[seq_num_check_idx];

   /*choose database*/
   Fec_Rxcal_AGTD_Database_switch(LPM_flag, Elna_mode_local[0], 0); // one ant ->default =0

   if(LPM_flag)
      ini_cnt = 3;
   else
      ini_cnt = 0;

   for(idx = 0 ; idx < total_seq_num ; idx++) // idx -> seq idx
   {
      /*initial max/min DL pwr */
      max_DL_pwr_final = 0;
      min_DL_pwr_final = -3200;
      if(LPM_flag)
      {
         if( (AGTD_use_calib_info[0]->max_dl_pwr[idx+ini_cnt]) < max_DL_pwr_final)
            max_DL_pwr_final = AGTD_use_calib_info[0]->max_dl_pwr[idx+ini_cnt];
         if( (AGTD_use_calib_info[0]->min_dl_pwr[idx+ini_cnt]) > min_DL_pwr_final)
            min_DL_pwr_final = AGTD_use_calib_info[0]->min_dl_pwr[idx+ini_cnt];
      }
      else
      {
         /*mapping NCCA use LNA combine*/
         if((Elna_mode_local[0] == FEC_AGC_ELNA_BYPASS) || (Elna_mode_local[0] == FEC_AGC_ELNA_BYPASS_2ND_SAW))
         {
            seq_idx_to_lna_p0 = NCCA_seq_mapping_lna_group_bypass.seq_idx_to_lna_mode[0][idx];
            seq_idx_to_lna_p1 = NCCA_seq_mapping_lna_group_bypass.seq_idx_to_lna_mode[1][idx];
         }
         else
         {
            seq_idx_to_lna_p0 = NCCA_seq_mapping_lna_group.seq_idx_to_lna_mode[0][idx];
            seq_idx_to_lna_p1 = NCCA_seq_mapping_lna_group.seq_idx_to_lna_mode[1][idx];
         }

         /*cal max/min/default DL pwr */
         if((AGTD_use_calib_info[0]->max_dl_pwr[seq_idx_to_lna_p0]) < (AGTD_use_calib_info[0]->max_dl_pwr[seq_idx_to_lna_p1]))
            max_DL_pwr_final = AGTD_use_calib_info[0]->max_dl_pwr[seq_idx_to_lna_p0];
         else
            max_DL_pwr_final = AGTD_use_calib_info[0]->max_dl_pwr[seq_idx_to_lna_p1];

         if((AGTD_use_calib_info[0]->min_dl_pwr[seq_idx_to_lna_p0]) > (AGTD_use_calib_info[0]->min_dl_pwr[seq_idx_to_lna_p1]))
            min_DL_pwr_final = AGTD_use_calib_info[0]->min_dl_pwr[seq_idx_to_lna_p0];
         else
            min_DL_pwr_final = AGTD_use_calib_info[0]->min_dl_pwr[seq_idx_to_lna_p1];
      }

      //default_DL_pwr_local = 6*32+((max_DL_pwr_final + min_DL_pwr_final)>>6)*32 ;
      if(LPM_flag)
         default_DL_pwr_local = default_DL_pwr_setting_type_I.default_DL_pwr[DL_pwr_search_idx + 10][idx + ini_cnt];
     else
        default_DL_pwr_local = default_DL_pwr_setting_type_II.default_DL_pwr[DL_pwr_search_idx][idx + ini_cnt];
      /*assign max/min/default DL pwer*/
      Calib_info[idx].max_dl_power     = max_DL_pwr_final;
      Calib_info[idx].min_dl_power     = min_DL_pwr_final;
      Calib_info[idx].default_dl_power = default_DL_pwr_local;
      /*cal max DL to min gain (and suitable dig gain)*/
      Fec_Rxcal_AGTD_DLPWRGetGain_Type_II_NCCA(max_DL_pwr_final, idx, LPM_flag, Elna_mode_local[0], &Calib_Gain_info_NCCA);
      Calib_info[idx].min_gain_dB[0] = Calib_Gain_info_NCCA.rf_gain_dB[0];
      Calib_info[idx].min_gain_dB[1]  = Calib_Gain_info_NCCA.rf_gain_dB[1];
      /*cal min DL to max gain (and suitable dig gain)*/
      Fec_Rxcal_AGTD_DLPWRGetGain_Type_II_NCCA(min_DL_pwr_final, idx, LPM_flag, Elna_mode_local[0], &Calib_Gain_info_NCCA);
      Calib_info[idx].max_gain_dB[0] = Calib_Gain_info_NCCA.rf_gain_dB[0];
      Calib_info[idx].max_gain_dB[1]  = Calib_Gain_info_NCCA.rf_gain_dB[1];
      /*cal default DL to default gain (and suitable dig gain)*/
      Fec_Rxcal_AGTD_DLPWRGetGain_Type_II_NCCA(default_DL_pwr_local, idx, LPM_flag, Elna_mode_local[0], &Calib_Gain_info_NCCA);
      Calib_info[idx].default_gain_dB[0] = Calib_Gain_info_NCCA.rf_gain_dB[0];
      Calib_info[idx].default_gain_dB[1]  = Calib_Gain_info_NCCA.rf_gain_dB[1];
      /*other info  follow default rf gain setting*/
      Calib_info[idx].dig_gain_dB    [0]  = Calib_Gain_info_NCCA.dig_gain_dB    [0];
      Calib_info[idx].dig_gain_dB    [1]  = Calib_Gain_info_NCCA.dig_gain_dB    [1];
      //Calib_info[idx].dig_gain_exp[0]  = Calib_Gain_info_NCCA.dig_gain_exp[0];
      //Calib_info[idx].dig_gain_exp[1]  = Calib_Gain_info_NCCA.dig_gain_exp[1];
      //Calib_info[idx].dig_gain_man[0]  = Calib_Gain_info_NCCA.dig_gain_man[0];
      //Calib_info[idx].dig_gain_man[1]  = Calib_Gain_info_NCCA.dig_gain_man[1];
      Calib_info[idx].elna_bypass [0]  = Calib_Gain_info_NCCA.elna_bypass [0];
      Calib_info[idx].elna_bypass [1]  = Calib_Gain_info_NCCA.elna_bypass [1];
      Calib_info[idx].lna_mode    [0]  = Calib_Gain_info_NCCA.lna_mode    [0];
      Calib_info[idx].lna_mode    [1]  = Calib_Gain_info_NCCA.lna_mode    [1];
      if(LPM_flag)
      {
         Calib_info[idx].location_idx[0] = idx + ini_cnt;
         Calib_info[idx].location_idx[1] = idx + ini_cnt;
      }
      else
      {
         if(((Elna_mode_local[0] == FEC_AGC_ELNA_BYPASS)||(Elna_mode_local[0] == FEC_AGC_ELNA_BYPASS_2ND_SAW)) && (idx > 12))
         {
            Calib_info[idx].location_idx[0] = idx - 8;
            Calib_info[idx].location_idx[1] = idx - 8;
         }
         else
         {
            Calib_info[idx].location_idx[0] = NCCA_seq_mapping_lna.seq_idx_to_lna_mode[0][idx];
            Calib_info[idx].location_idx[1] = NCCA_seq_mapping_lna.seq_idx_to_lna_mode[1][idx];
         }
      }
   }

   return total_seq_num;
}


UINT8 Fec_Rxcal_AGTD_Type_II_SRX_seq_idx_switch(BOOL LPM_flag, FEC_AGC_ELNA_E Elna_mode, BOOL SRX_switch, UINT8 old_seq_idx)
{
   /*SRX_switch = 0 => (CC0,CC1) = (SRX0,SRX1)
      SRX_switch = 1 => (CC0,CC1) = (SRX1,SRX0)
      if seq idx >17 ,return 100 */
   if( (LPM_flag) || (!SRX_switch) || (((Elna_mode == FEC_AGC_ELNA_BYPASS) || (Elna_mode == FEC_AGC_ELNA_BYPASS_2ND_SAW)) && (old_seq_idx >12)))
      return old_seq_idx;
   else if(old_seq_idx >= MAX_SEQUENCE_NUM_TYPE_II)
      return seq_idx_assert_num;
   else
      return NCCA_SRX_switch_seq_mapping[old_seq_idx];
}





void Fec_Rxcal_AGTD_DLPWRGetGain_Type_I(INT16 used_DL_PWR, UINT8 seq_num, BOOL LPM_flag, FEC_AGC_ELNA_E Elna_mode[FEC_AGC_ANT_NUM], FEC_RXCAL_CALIB_INFO_DLGetGain_TYPE_I* Calib_info)
{
   UINT8 ant_idx, lna_mode_local;
   INT16 wanted_gain_local;
   INT16 wanted_gain_local_save;
   BOOL  eLNA_bypass_local;
   UINT16 seq_idx_sub_table;
   INT16 used_gain_local, dig_exp_local;
   INT16 min_used_gain, max_used_gain;
   INT16 wanted_sp;
   #if defined(MT6177M_LTE_RF)
   // choose SP value 
   if(LPM_flag)
      wanted_sp = -653;
   else
      wanted_sp = -781;
   #else
      wanted_sp = -461;
   #endif
   // wanted rf gain = DL to gain factor  -  DL pwr
   wanted_gain_local_save = wanted_sp - used_DL_PWR; 

   for(ant_idx = 0 ; ant_idx < FEC_AGC_ANT_NUM ; ant_idx++)
   {
      wanted_gain_local = wanted_gain_local_save;
      /*decide eLNA enable  & decide LNA mode & decide max/min used gain*/
      if(LPM_flag)
      {
         if(Elna_mode[ant_idx] == FEC_AGC_ELNA_OFF)
         {
            eLNA_bypass_local = 1;
            if(seq_num > 1)
               lna_mode_local = 5;
            else
               lna_mode_local = seq_num + 3;

            max_used_gain = LPM_withuot_eLNA.max_gain_dB[seq_num+3];
            min_used_gain = LPM_withuot_eLNA.min_gain_dB[seq_num+3];
         }
         else if((Elna_mode[ant_idx] == FEC_AGC_ELNA_ALWAYS_ON) || (Elna_mode[ant_idx] == FEC_AGC_ELNA_ALWAYS_ON_2ND_SAW))
         {
            eLNA_bypass_local = 0;
            if(seq_num > 1)
               lna_mode_local = 5;
            else
               lna_mode_local = seq_num + 3;

            max_used_gain = LPM_with_eLNA_always_on.max_gain_dB[seq_num+3];
            min_used_gain = LPM_with_eLNA_always_on.min_gain_dB[seq_num+3];
         }
         else
         {
            if(seq_num > 1)
            {
               eLNA_bypass_local = 0;
               lna_mode_local = seq_num + 1;
            }
            else
            {
               eLNA_bypass_local = 1;
               lna_mode_local = seq_num + 3;
            }

            if(Elna_mode[ant_idx] == FEC_AGC_ELNA_BYPASS_2ND_SAW)
            {
               max_used_gain = LPM_with_eLNA_bypass_SAW.max_gain_dB[seq_num+3];
               min_used_gain = LPM_with_eLNA_bypass_SAW.min_gain_dB[seq_num+3];
               if(seq_num == 3)
                  lna_mode_local = seq_num + 2;
            }
            else
            {
               max_used_gain = LPM_with_eLNA_bypass.max_gain_dB[seq_num+3];
               min_used_gain = LPM_with_eLNA_bypass.min_gain_dB[seq_num+3];
            }
         }
      }
      else
      {
         if(Elna_mode[ant_idx] == FEC_AGC_ELNA_OFF)
         {
            eLNA_bypass_local = 1;
            if(seq_num > 4)
               lna_mode_local = 5;
            else
               lna_mode_local = seq_num ;

            max_used_gain = HPM_withuot_eLNA.max_gain_dB[seq_num];
            min_used_gain = HPM_withuot_eLNA.min_gain_dB[seq_num];
         }
         else if((Elna_mode[ant_idx] == FEC_AGC_ELNA_ALWAYS_ON) || (Elna_mode[ant_idx] == FEC_AGC_ELNA_ALWAYS_ON_2ND_SAW))
         {
            eLNA_bypass_local = 0;
            if(seq_num > 4)
               lna_mode_local = 5;
            else
               lna_mode_local = seq_num ;

            max_used_gain = HPM_with_eLNA_always_on.max_gain_dB[seq_num];
            min_used_gain = HPM_with_eLNA_always_on.min_gain_dB[seq_num];
         }
         else
         {
            if(seq_num > 4)
            {
               eLNA_bypass_local = 0;
               lna_mode_local = seq_num - 2;
               if((Elna_mode[ant_idx] == FEC_AGC_ELNA_BYPASS_2ND_SAW) && (seq_num == 6))
               {
                  lna_mode_local = seq_num - 1;
               }
            }
            else
            {
               eLNA_bypass_local = 1;
               lna_mode_local = seq_num ;
            }
            if(Elna_mode[ant_idx] == FEC_AGC_ELNA_BYPASS_2ND_SAW)
            {
               max_used_gain = HPM_with_eLNA_bypass_SAW.max_gain_dB[seq_num];
               min_used_gain = HPM_with_eLNA_bypass_SAW.min_gain_dB[seq_num];
            }
            else
            {
               max_used_gain = HPM_with_eLNA_bypass.max_gain_dB[seq_num];
               min_used_gain = HPM_with_eLNA_bypass.min_gain_dB[seq_num];
            }
         }
      }

      Calib_info->elna_bypass[ant_idx] = eLNA_bypass_local;
      Calib_info->lna_mode[ant_idx] = lna_mode_local;
      /*rf gain */

      //constrain wanted_gain_local in each LNA mode
      if(wanted_gain_local > max_used_gain)
         wanted_gain_local = max_used_gain;
      if(wanted_gain_local < min_used_gain)
         wanted_gain_local = min_used_gain;
      // (wanted rf gain) to (used rf gain & table seq idx)
      Fec_Rxcal_AGTD_Wanted_Gain_to_Used_And_Idx(wanted_gain_local, LPM_flag, eLNA_bypass_local, Elna_mode[ant_idx], &seq_idx_sub_table, &used_gain_local);

      Calib_info->rf_gain_dB[ant_idx] = used_gain_local;
      /*dig gain (default gain)*/ 
      dig_exp_local = (129 - (used_DL_PWR + used_gain_local))/192;  // 129 = 33 + 96 ; 33: factor of DL to dig gain , 96 round term      
      Calib_info->dig_gain_dB[ant_idx] = dig_exp_local*192;

   }
}

void Fec_Rxcal_AGTD_DLPWRGetGain_Type_II_NCCA(INT16 used_DL_PWR, UINT8 seq_num, BOOL LPM_flag, FEC_AGC_ELNA_E Elna_mode, FEC_RXCAL_CALIB_INFO_DLGetGain_TYPE_II_NCCA* Calib_info)
{
   UINT8 path_idx, lna_mode_local;
   INT16 wanted_gain_local;
   INT16 wanted_gain_local_save;
   BOOL  eLNA_bypass_local;
   UINT16 seq_idx_sub_table;
   INT16 used_gain_local, dig_exp_local;
   INT16 min_used_gain, max_used_gain;
   INT16 wanted_sp;
   
   #if defined(MT6177M_LTE_RF)
   // choose SP value 
   if(LPM_flag)
      wanted_sp = -653;
   else
      wanted_sp = -781;
   #else
      wanted_sp = -461;
   #endif

   // wanted rf gain = DL to gain factor  -  DL pwr
   //wanted_gain_local = (-461) - used_DL_PWR; 
   wanted_gain_local_save = wanted_sp - used_DL_PWR; 

   for(path_idx = 0 ; path_idx < FEC_AGC_PATH_NUM ; path_idx++)
   {
      wanted_gain_local = wanted_gain_local_save;
      /*decide eLNA enable  & decide LNA mode & decide max/min used gain*/
      if(LPM_flag)
      {
         if(Elna_mode == FEC_AGC_ELNA_OFF)
         {
            eLNA_bypass_local = 1;
            lna_mode_local = seq_num + 3;

            max_used_gain = LPM_withuot_eLNA.max_gain_dB[seq_num+3];
            min_used_gain = LPM_withuot_eLNA.min_gain_dB[seq_num+3];
         }
         else if((Elna_mode == FEC_AGC_ELNA_ALWAYS_ON) || (Elna_mode == FEC_AGC_ELNA_ALWAYS_ON_2ND_SAW))
         {
            eLNA_bypass_local = 0;
            lna_mode_local = seq_num + 3;

            max_used_gain = LPM_with_eLNA_always_on.max_gain_dB[seq_num+3];
            min_used_gain = LPM_with_eLNA_always_on.min_gain_dB[seq_num+3];
         }
         else
         {
            if(seq_num > 1)
            {
               eLNA_bypass_local = 0;
               lna_mode_local = seq_num + 1;
            }
            else
            {
               eLNA_bypass_local = 1;
               lna_mode_local = seq_num + 3;
            }
            if(Elna_mode == FEC_AGC_ELNA_BYPASS_2ND_SAW)
            {
               max_used_gain = LPM_with_eLNA_bypass_SAW.max_gain_dB[seq_num+3];
               min_used_gain = LPM_with_eLNA_bypass_SAW.min_gain_dB[seq_num+3];
               if(seq_num == 3)
                  lna_mode_local = seq_num + 2;
            }
            else
            {
               max_used_gain = LPM_with_eLNA_bypass.max_gain_dB[seq_num+3];
               min_used_gain = LPM_with_eLNA_bypass.min_gain_dB[seq_num+3];
            }
         }
      }
      else
      {
         if(Elna_mode == FEC_AGC_ELNA_OFF)
         {
            eLNA_bypass_local = 1;
            lna_mode_local = NCCA_seq_mapping_lna.seq_idx_to_lna_mode[path_idx][seq_num];

            max_used_gain = HPM_withuot_eLNA.max_gain_dB[lna_mode_local];
            min_used_gain = HPM_withuot_eLNA.min_gain_dB[lna_mode_local];
         }
         else if((Elna_mode == FEC_AGC_ELNA_ALWAYS_ON) || (Elna_mode == FEC_AGC_ELNA_ALWAYS_ON_2ND_SAW))
         {
            eLNA_bypass_local = 0;
            lna_mode_local = NCCA_seq_mapping_lna.seq_idx_to_lna_mode[path_idx][seq_num];

            max_used_gain = HPM_with_eLNA_always_on.max_gain_dB[lna_mode_local];
            min_used_gain = HPM_with_eLNA_always_on.min_gain_dB[lna_mode_local];
         }
         else
         {
            if(seq_num > 12)
            {
               eLNA_bypass_local = 0;
               lna_mode_local = seq_num - 10;

               if(Elna_mode == FEC_AGC_ELNA_BYPASS_2ND_SAW)
               {
                  max_used_gain = HPM_with_eLNA_bypass_SAW.max_gain_dB[lna_mode_local + 2];
                  min_used_gain = HPM_with_eLNA_bypass_SAW.min_gain_dB[lna_mode_local + 2];
                  if(seq_num == 14)
                     lna_mode_local = seq_num - 9;
               }
               else
               {
                  max_used_gain = HPM_with_eLNA_bypass.max_gain_dB[lna_mode_local + 2];
                  min_used_gain = HPM_with_eLNA_bypass.min_gain_dB[lna_mode_local + 2];
               }
            }
            else
            {
                  eLNA_bypass_local = 1;
                  lna_mode_local = NCCA_seq_mapping_lna.seq_idx_to_lna_mode[path_idx][seq_num];
                  if(Elna_mode == FEC_AGC_ELNA_BYPASS_2ND_SAW)
               {
                  max_used_gain = HPM_with_eLNA_bypass_SAW.max_gain_dB[lna_mode_local];
                  min_used_gain = HPM_with_eLNA_bypass_SAW.min_gain_dB[lna_mode_local];
               }
               else
               {
                  max_used_gain = HPM_with_eLNA_bypass.max_gain_dB[lna_mode_local];
                  min_used_gain = HPM_with_eLNA_bypass.min_gain_dB[lna_mode_local];
               }
            }
         }
      }
      
      Calib_info->elna_bypass[path_idx] = eLNA_bypass_local;
      Calib_info->lna_mode[path_idx] = lna_mode_local;
      /*rf gain */
      //constrain wanted_gain_local in each LNA mode
      if(wanted_gain_local > max_used_gain)
         wanted_gain_local = max_used_gain;
      if(wanted_gain_local < min_used_gain)
         wanted_gain_local = min_used_gain;
      // (wanted rf gain) to (used rf gain & table seq idx)
      Fec_Rxcal_AGTD_Wanted_Gain_to_Used_And_Idx(wanted_gain_local, LPM_flag, eLNA_bypass_local, Elna_mode, &seq_idx_sub_table, &used_gain_local);

      Calib_info->rf_gain_dB[path_idx] = used_gain_local;
      /*dig gain (default gain)*/    
      dig_exp_local = (129 - (used_DL_PWR + used_gain_local))/192;  // 129 = 33 + 96 ; 33: factor of DL to dig gain , 96 round term
      Calib_info->dig_gain_dB[path_idx] = dig_exp_local*192;

   }

}

BOOL Fec_Rxcal_AGTD_GAINmode_to_DLPWR_AND_GAIN_Type_I(FEC_RXCAL_GAINMODEtoGAIN_INFO_TYPE_I *Calib_info , FEC_RXCAL_GAINMODEtoGAIN_OUTPUT_TYPE_I *Calib_output)
{
   BOOL DL_overlap_check;
   BOOL elNA_bypass_local[FEC_AGC_ANT_NUM];
   UINT8 idx, gain_mode_local[FEC_AGC_ANT_NUM],gain_mode_local_idx[FEC_AGC_ANT_NUM],gain_mode_DL_use;
   FEC_AGC_ELNA_E Elna_mode_local[FEC_AGC_ANT_NUM];
   INT16 default_DL_pwr_local;
   INT16 max_DL_pwr_final, min_DL_pwr_final;
   INT16 wanted_gain_local_save, wanted_gain_local,dig_exp_local;
   INT16 min_used_gain, max_used_gain, used_gain_local;
   UINT16 seq_idx_sub_table;
   UINT8 DL_pwr_search_idx;
   INT16 wanted_sp;

   /*get info no dimen*/
   BOOL LPM_flag = Calib_info->lpm_flag;

   #if defined(MT6177M_LTE_RF)
   // choose SP value 
   if(LPM_flag)
      wanted_sp = -653;
   else
      wanted_sp = -781;
   #else
      wanted_sp = -461;
   #endif

   /*eLNA mode  mapping*/
   for(idx = 0 ; idx < FEC_AGC_ANT_NUM ; idx++)
   {
      /*get info with dimen Ant idx*/
      elNA_bypass_local[idx] = Calib_info->elna_bypass[idx];
      gain_mode_local[idx]   = Calib_info->gain_mode[idx];
      /*mapping eLNA mode  to  local use (5->3) */
      if( (Calib_info->elna_mode[idx] == FEC_AGC_ELNA_BYPASS))
      {
         Elna_mode_local[idx] = FEC_AGC_ELNA_BYPASS; //    eLNA bypass 
         DL_pwr_search_idx = 2;
      }
      else if((Calib_info->elna_mode[idx] == FEC_AGC_ELNA_BYPASS_2ND_SAW))
      {
         Elna_mode_local[idx] = FEC_AGC_ELNA_BYPASS_2ND_SAW; //    eLNA bypass SAW
         DL_pwr_search_idx = 3;
      }
      else if( (Calib_info->elna_mode[idx] == FEC_AGC_ELNA_ALWAYS_ON) || (Calib_info->elna_mode[idx] == FEC_AGC_ELNA_ALWAYS_ON_2ND_SAW))
      {
        Elna_mode_local[idx] = FEC_AGC_ELNA_ALWAYS_ON; //    w/i eLNA  always on
        DL_pwr_search_idx = 1;
      }
      else
      {
         Elna_mode_local[idx] = FEC_AGC_ELNA_OFF; //    w/o eLNA
         DL_pwr_search_idx = 0;
      }

      /*choose database*/
      Fec_Rxcal_AGTD_Database_switch(LPM_flag, Elna_mode_local[idx], idx);
      /*mapping gain mode for eLNA bypass mode use*/
      if((Elna_mode_local[idx] == FEC_AGC_ELNA_BYPASS) && (elNA_bypass_local[idx] == 0))
         gain_mode_local_idx[idx] = gain_mode_local[idx] + 2;
      else if((Elna_mode_local[idx] == FEC_AGC_ELNA_BYPASS_2ND_SAW) && (elNA_bypass_local[idx] == 0))
      {
         if(gain_mode_local[idx] == 3)
            gain_mode_local_idx[idx] = gain_mode_local[idx] + 2;
         else
            gain_mode_local_idx[idx] = gain_mode_local[idx] + 1;
      }
      else
         gain_mode_local_idx[idx] = gain_mode_local[idx];
   }

   /*decide default DL power mapping idx*/
   if(Elna_mode_local[0] != Elna_mode_local[1])
   {
      DL_pwr_search_idx = Fec_Rxcal_AGTD_DL_PWR_switch(Elna_mode_local[0],Elna_mode_local[1]);

      if(gain_mode_local_idx[0] > gain_mode_local_idx[1])
         gain_mode_DL_use = gain_mode_local_idx[0];
      else
         gain_mode_DL_use = gain_mode_local_idx[1];
   }
   else
      gain_mode_DL_use = gain_mode_local_idx[0];

   /*initial max/min DL pwr */
   max_DL_pwr_final = 0;
   min_DL_pwr_final = -3200;
   /*cal max/min/default DL pwr */
   for(idx = 0 ; idx < FEC_AGC_ANT_NUM ; idx++)
   {
      if( (AGTD_use_calib_info[idx]->max_dl_pwr[gain_mode_local_idx[idx]]) < max_DL_pwr_final)
         max_DL_pwr_final = AGTD_use_calib_info[idx]->max_dl_pwr[gain_mode_local_idx[idx]];
      if( (AGTD_use_calib_info[idx]->min_dl_pwr[gain_mode_local_idx[idx]]) > min_DL_pwr_final)
         min_DL_pwr_final = AGTD_use_calib_info[idx]->min_dl_pwr[gain_mode_local_idx[idx]];
   }
   /*DL overlap check*/
   if(max_DL_pwr_final < min_DL_pwr_final) // break???
      DL_overlap_check = 0;
   else
      DL_overlap_check = 1;
   /*cal default DL PWER*/
   //default_DL_pwr_local = 6*32+((max_DL_pwr_final + min_DL_pwr_final)>>6)*32 ;
   if(LPM_flag)  // predict A0/A1 use the same gain mode
      default_DL_pwr_local = default_DL_pwr_setting_type_I.default_DL_pwr[DL_pwr_search_idx + 10][gain_mode_DL_use];
   else
      default_DL_pwr_local = default_DL_pwr_setting_type_I.default_DL_pwr[DL_pwr_search_idx][gain_mode_DL_use];


   Calib_output->used_DL_pwr = default_DL_pwr_local;
   // wanted rf gain = DL to gain factor  -  DL pwr
   wanted_gain_local_save = wanted_sp - default_DL_pwr_local; 
   /*constrain in max,min rf gain  &  cal used rf gain*/
   for(idx = 0 ; idx < FEC_AGC_ANT_NUM ; idx++)
   {
      wanted_gain_local = wanted_gain_local_save;
      /*constrain in max,min rf gain*/
      max_used_gain = AGTD_use_calib_info[idx]->max_gain_dB[gain_mode_local_idx[idx]];
      min_used_gain = AGTD_use_calib_info[idx]->min_gain_dB[gain_mode_local_idx[idx]];
      if(wanted_gain_local > max_used_gain)
         wanted_gain_local = max_used_gain;
      if(wanted_gain_local < min_used_gain)
         wanted_gain_local = min_used_gain;
      /*cal used rf gain*/
      Fec_Rxcal_AGTD_Wanted_Gain_to_Used_And_Idx_no_LPM_constrain(wanted_gain_local, LPM_flag, elNA_bypass_local[idx], Elna_mode_local[idx], &seq_idx_sub_table, &used_gain_local);
      Calib_output->rf_gain_dB[idx] = used_gain_local;
      /*dig gain (default gain)*/ 
      dig_exp_local = (129 - (default_DL_pwr_local + used_gain_local))/192;  // 129 = 33 + 96 ; 33: factor of DL to dig gain , 96 round term      
      Calib_output->dig_gain_dB[idx] = dig_exp_local*192;
   }

   return DL_overlap_check;
}
BOOL Fec_Rxcal_AGTD_GAINmode_to_DLPWR_AND_GAIN_Type_II(FEC_RXCAL_GAINMODEtoGAIN_INFO_TYPE_II *Calib_info , FEC_RXCAL_GAINMODEtoGAIN_OUTPUT_TYPE_II *Calib_output)
{
   BOOL DL_overlap_check;
   BOOL elNA_bypass_local[FEC_AGC_PATH_NUM];
   UINT8 idx, gain_mode_local[FEC_AGC_PATH_NUM],gain_mode_local_idx[FEC_AGC_PATH_NUM],gain_mode_local_idx_DL[FEC_AGC_PATH_NUM];
   UINT8 max_gain_mode;
   FEC_AGC_ELNA_E Elna_mode_local;
   INT16 default_DL_pwr_local;
   INT16 max_DL_pwr_final, min_DL_pwr_final;
   INT16 wanted_gain_local_save, wanted_gain_local,dig_exp_local;
   INT16 min_used_gain, max_used_gain, used_gain_local;
   UINT16 seq_idx_sub_table;
   UINT8 DL_pwr_search_idx;
   UINT8 NCCA_HPM_default_DL_idx=0;
   INT16 wanted_sp;



   /*get info no dimen*/
   BOOL LPM_flag = Calib_info->lpm_flag;


   #if defined(MT6177M_LTE_RF)
   // choose SP value 
   if(LPM_flag)
      wanted_sp = -653;
   else
      wanted_sp = -781;
   #else
      wanted_sp = -461;
   #endif

   /*get info with dimen path idx*/
   for(idx = 0 ; idx < FEC_AGC_PATH_NUM ; idx++)
   {
      elNA_bypass_local[idx] = Calib_info->elna_bypass[idx];
      gain_mode_local[idx]   = Calib_info->gain_mode[idx];
   }
   /*mapping eLNA mode  to  local use (5->3) */
   if( (Calib_info->elna_mode == FEC_AGC_ELNA_BYPASS))
   {
      Elna_mode_local = FEC_AGC_ELNA_BYPASS; //     eLNA bypass
      DL_pwr_search_idx = 2;
   }
   else if((Calib_info->elna_mode == FEC_AGC_ELNA_BYPASS_2ND_SAW))
   {
      Elna_mode_local = FEC_AGC_ELNA_BYPASS_2ND_SAW; //    eLNA bypass SAW
      DL_pwr_search_idx = 3;
   }
   else if( (Calib_info->elna_mode == FEC_AGC_ELNA_ALWAYS_ON) || (Calib_info->elna_mode == FEC_AGC_ELNA_ALWAYS_ON_2ND_SAW))
   {
      Elna_mode_local = FEC_AGC_ELNA_ALWAYS_ON; //    w/i eLNA  always on
      DL_pwr_search_idx = 1;
   }
   else
   {
      Elna_mode_local = FEC_AGC_ELNA_OFF; //    w/o eLNA
      DL_pwr_search_idx = 0;
   }
   /*choose database*/
   Fec_Rxcal_AGTD_Database_switch(LPM_flag, Elna_mode_local, 0);
   /*handle NCCA group for choose Dl PWR*/
   for(idx = 0 ; idx < FEC_AGC_PATH_NUM ; idx++)
   {
      if((Elna_mode_local == FEC_AGC_ELNA_BYPASS) && (elNA_bypass_local[idx] == 0))
      {
         gain_mode_local_idx[idx]    = gain_mode_local[idx] + 2;
         gain_mode_local_idx_DL[idx] = gain_mode_local[idx] + 2;
      }
      else if((Elna_mode_local == FEC_AGC_ELNA_BYPASS_2ND_SAW) && (elNA_bypass_local[idx] == 0))
      {
         if(gain_mode_local[idx] == 3)
         {
            gain_mode_local_idx[idx]   = gain_mode_local[idx] + 2;
            gain_mode_local_idx_DL[idx] = gain_mode_local[idx] + 2;
         }
         else
         {
            gain_mode_local_idx[idx]   = gain_mode_local[idx] + 1;
            gain_mode_local_idx_DL[idx] = gain_mode_local[idx] + 1;
         }
      }
      else
      {
         gain_mode_local_idx[idx]    = gain_mode_local[idx];
         gain_mode_local_idx_DL[idx] = gain_mode_local[idx];
      }
   }

   if(LPM_flag == 0)
   {
      if(!(((Elna_mode_local == FEC_AGC_ELNA_BYPASS) || (Elna_mode_local == FEC_AGC_ELNA_BYPASS_2ND_SAW)) && ((elNA_bypass_local[0] == 0) || (elNA_bypass_local[1] == 0))))
      {
         if(gain_mode_local[0] > gain_mode_local[1])
            max_gain_mode = gain_mode_local[0];
         else
            max_gain_mode = gain_mode_local[1];
         gain_mode_local_idx_DL[0] = NCCA_gain_mode_mapping_lna_group.lna_mode_to_lna_group[0][max_gain_mode];
         gain_mode_local_idx_DL[1] = NCCA_gain_mode_mapping_lna_group.lna_mode_to_lna_group[1][max_gain_mode];

       /*NCCA HPM use gain_mode[0] & gain_mode[1] to re mapping seq idx*/
       NCCA_HPM_default_DL_idx = Fec_Rxcal_AGTD_NCCA_HPM_seq_idx_switch(gain_mode_local[0],gain_mode_local[1]);
      }
     else
     {
        if(gain_mode_local[0] == 3)
          NCCA_HPM_default_DL_idx = 13;
       else
          NCCA_HPM_default_DL_idx = 14;
     }
   }
   /*initial max/min DL pwr */
   max_DL_pwr_final = 0;
   min_DL_pwr_final = -3200;
   /*cal max/min/default DL pwr */
   for(idx = 0 ; idx < FEC_AGC_PATH_NUM ; idx++)
   {
      if( (AGTD_use_calib_info[0]->max_dl_pwr[gain_mode_local_idx_DL[idx]]) < max_DL_pwr_final)
         max_DL_pwr_final = AGTD_use_calib_info[0]->max_dl_pwr[gain_mode_local_idx_DL[idx]];
      if( (AGTD_use_calib_info[0]->min_dl_pwr[gain_mode_local_idx_DL[idx]]) > min_DL_pwr_final)
         min_DL_pwr_final = AGTD_use_calib_info[0]->min_dl_pwr[gain_mode_local_idx_DL[idx]];
   }

   /*DL overlap check*/
   if(max_DL_pwr_final < min_DL_pwr_final) // break???
      DL_overlap_check = 0;
   else
      DL_overlap_check = 1;
   /*cal default DL PWER*/
   //default_DL_pwr_local = 6*32+((max_DL_pwr_final + min_DL_pwr_final)>>6)*32 ;
   if(LPM_flag)  // predict A0/A1 use the same gain mode
      default_DL_pwr_local = default_DL_pwr_setting_type_I.default_DL_pwr[DL_pwr_search_idx + 10][gain_mode_local_idx[0]];
   else //NCCA HPM need switch to seq idx [0,17]
      default_DL_pwr_local = default_DL_pwr_setting_type_II.default_DL_pwr[DL_pwr_search_idx][NCCA_HPM_default_DL_idx];
   //Calib_output->dig_gain_dB[0] = max_DL_pwr_final;
   //Calib_output->dig_gain_dB[1] = min_DL_pwr_final;
   Calib_output->used_DL_pwr = default_DL_pwr_local;
   // wanted rf gain = DL to gain factor  -  DL pwr
   wanted_gain_local_save = wanted_sp - default_DL_pwr_local; 
   /*constrain in max,min rf gain  &  cal used rf gain*/
   for(idx = 0 ; idx < FEC_AGC_PATH_NUM ; idx++)
   {
      wanted_gain_local = wanted_gain_local_save;
      /*constrain in max,min rf gain*/
      max_used_gain = AGTD_use_calib_info[0]->max_gain_dB[gain_mode_local_idx[idx]];
      min_used_gain = AGTD_use_calib_info[0]->min_gain_dB[gain_mode_local_idx[idx]];
      if(wanted_gain_local > max_used_gain)
         wanted_gain_local = max_used_gain;
      if(wanted_gain_local < min_used_gain)
         wanted_gain_local = min_used_gain;
      /*cal used rf gain*/
      Fec_Rxcal_AGTD_Wanted_Gain_to_Used_And_Idx_no_LPM_constrain(wanted_gain_local, LPM_flag, elNA_bypass_local[idx], Elna_mode_local, &seq_idx_sub_table, &used_gain_local);
      Calib_output->rf_gain_dB[idx] = used_gain_local;
      /*dig gain (default gain)*/ 
      dig_exp_local = (129 - (default_DL_pwr_local + used_gain_local))/192;  // 129 = 33 + 96 ; 33: factor of DL to dig gain , 96 round term      
      Calib_output->dig_gain_dB[idx] = dig_exp_local*192;
   }

   return DL_overlap_check;
}



void Fec_Rxcal_AGTD_Wanted_Gain_to_Used_And_Idx(INT16 wanted_gain, BOOL LPM_flag, BOOL eLNA_bypass, FEC_AGC_ELNA_E Elna_mode, UINT16* seq_idx, INT16* used_gain)
{
   INT16 rf_gain_base;
   UINT16 raw_gain_idx;
   UINT8 base_bitmap_idx;

   if((Elna_mode == FEC_AGC_ELNA_BYPASS) ||  (Elna_mode == FEC_AGC_ELNA_BYPASS_2ND_SAW))
      base_bitmap_idx = 1;
   else
      base_bitmap_idx = 0;

   base_bitmap_idx = ((LPM_flag<<2) | (eLNA_bypass<<1) | base_bitmap_idx);

   rf_gain_base = gain_table_seq_base[base_bitmap_idx];

   #if defined(MT6177M_LTE_RF)
   raw_gain_idx = (UINT16)(((wanted_gain - rf_gain_base)/3 + 16)>>5); 
   if(LPM_flag)
   {
      if((raw_gain_idx & 1))
	     raw_gain_idx = raw_gain_idx -1;

	  if((Elna_mode == 4) && (raw_gain_idx == 2) && (eLNA_bypass == 0))
	  	 raw_gain_idx = raw_gain_idx - 2;
	  
   }
   #else
   raw_gain_idx = (UINT16)(((wanted_gain - rf_gain_base)/3 + 16)>>5);
   #endif

   
   *seq_idx = raw_gain_idx;
   *used_gain = rf_gain_base + 96*raw_gain_idx;
}

void Fec_Rxcal_AGTD_Wanted_Gain_to_Used_And_Idx_no_LPM_constrain(INT16 wanted_gain, BOOL LPM_flag, BOOL eLNA_bypass, FEC_AGC_ELNA_E Elna_mode, UINT16* seq_idx, INT16* used_gain)
{
   INT16 rf_gain_base;
   UINT16 raw_gain_idx;
   UINT8 base_bitmap_idx;

   if((Elna_mode == FEC_AGC_ELNA_BYPASS) ||  (Elna_mode == FEC_AGC_ELNA_BYPASS_2ND_SAW))
      base_bitmap_idx = 1;
   else
      base_bitmap_idx = 0;

   base_bitmap_idx = ((LPM_flag<<2) | (eLNA_bypass<<1) | base_bitmap_idx);

   rf_gain_base = gain_table_seq_base_no_LPM_constrain[base_bitmap_idx];

   #if defined(MT6177M_LTE_RF)
   raw_gain_idx = (UINT16)(((wanted_gain - rf_gain_base)/3 + 16)>>5); 
   if(LPM_flag)
   {
      if((raw_gain_idx & 1))
	     raw_gain_idx = raw_gain_idx -1;

	  if((Elna_mode == 4) && (raw_gain_idx == 2) && (eLNA_bypass == 0))
	  	 raw_gain_idx = raw_gain_idx - 2;
   }
   #else
   raw_gain_idx = (UINT16)(((wanted_gain - rf_gain_base)/3 + 16)>>5);
   #endif

   
   *seq_idx = raw_gain_idx;
   *used_gain = rf_gain_base + 96*raw_gain_idx;
}

void Fec_Rxcal_AGTD_Database_switch(BOOL LPM_flag, FEC_AGC_ELNA_E Elna_mode, UINT8 ant_idx)
{
   switch ((LPM_flag<<3) | Elna_mode)
   {
      case 0: 
         AGTD_use_calib_info[ant_idx] = &HPM_withuot_eLNA;
         break; 
      case 1:
         AGTD_use_calib_info[ant_idx] = &HPM_with_eLNA_always_on;
         break; 
      case 3:
         AGTD_use_calib_info[ant_idx] = &HPM_with_eLNA_bypass;
         break;
      case 4:
         AGTD_use_calib_info[ant_idx] = &HPM_with_eLNA_bypass_SAW;
         break; 
      case 8: 
         AGTD_use_calib_info[ant_idx] = &LPM_withuot_eLNA;
         break;
      case 9:  
         AGTD_use_calib_info[ant_idx] = &LPM_with_eLNA_always_on;
         break;
      case 11: 
         AGTD_use_calib_info[ant_idx] = &LPM_with_eLNA_bypass;
         break;
      case 12:
         AGTD_use_calib_info[ant_idx] = &LPM_with_eLNA_bypass_SAW;
         break;
      default:
         break;
   }
}

UINT8 Fec_Rxcal_AGTD_DL_PWR_switch(FEC_AGC_ELNA_E Elna_mode_a0, FEC_AGC_ELNA_E Elna_mode_a1)
{
   switch ((Elna_mode_a1<<3) | Elna_mode_a0)
   {
      case 1:
         return 4;
         break;
      case 8:
         return 4;
         break;
      case 24:
         return 5;
         break; 
      case 3:
         return 5;
         break;
      case 25:
         return 6;
         break;
      case 11:
         return 6;
         break;
      case 4:
         return 7;
         break; 
      case 32:
         return 7;
         break; 
      case 12:
         return 8;
         break;
      case 33:
         return 8;
         break;
      case 35:
         return 9;
         break;
      case 28:
         return 9;
         break;
      default:
         return 0;
         break;
   }
}

UINT8 Fec_Rxcal_AGTD_NCCA_HPM_seq_idx_switch(UINT8 gain_mode_P0, UINT8 gain_mode_P1)
{
   switch ((gain_mode_P1<<3) | gain_mode_P0)
   {
      case 0: 
         return 0;
         break; 
      case 9: 
         return 1;
         break; 
      case 2:
         return 2;
         break; 
      case 18:
         return 3;
         break; 
      case 16:
         return 4;
         break;
      case 11:
         return 5;
         break;
      case 27:
         return 6;
         break; 
      case 25:
         return 7;
         break; 
      case 4:
         return 8;
         break;
      case 20:
         return 9;
         break;
      case 36:
         return 10;
         break;
      case 34:
         return 11;
         break;
      case 32:
         return 12;
         break;
      case 13:
         return 13;
         break;
      case 29:
         return 14;
         break;
      case 45:
         return 15;
         break;
      case 43:
         return 16;
         break;
      case 41:
         return 17;
         break;
      default:
         return 0;
         break;
   }
}


void FEC_Rxcal_AGTD_dig_gain_dB_to_man_exp_for_calib_use(INT16 dig_gain_dB, INT16* dig_gain_exp, INT16* dig_gain_man) // no use in normal mode
{
   *dig_gain_exp = dig_gain_dB/192;
   *dig_gain_man = 64;
}

#endif

