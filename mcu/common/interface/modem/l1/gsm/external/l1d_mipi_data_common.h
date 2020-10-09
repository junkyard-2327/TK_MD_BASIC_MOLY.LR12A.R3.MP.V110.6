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

/*******************************************************************************
 *
 * Filename:
 * ---------
 *   l1d_mipi_data_common.h
 *
 * Project:
 * --------
 *   TK6291
 *
 * Description:
 * ------------
 *   Definition of global data & tables used in L1D
 *
 * Author:
 * -------
 * -------
 *
 *------------------------------------------------------------------------------
 * $Revision:
 * $Modtime:
 * $Log:
 *
 *******************************************************************************/

#ifndef  _L1D_MIPI_DATA_COMMON_H_
#define  _L1D_MIPI_DATA_COMMON_H_

#include "l1d_cid.h"
/*---------------------------------------------------------------------------*/

#if IS_MIPI_SUPPORT
/* --------------------------------------- */
/* For 1st MIPI Architecture REsource Plan */
/* Should not modify this field            */
/* --------------------------------------- */
/*  moved from l1d_mipi_data.h */

#define GGE_MIPI_RTX_EVENT_NUM           13
#define GGE_MIPI_RTX_DATA_NUM            30
#define GGE_MIPI_TXMID_EVENT_NUM          2
#define GGE_MIPI_TXMID_DATA_NUM           3
#define GGE_MIPI_RTX_EVENT_COUNT          5
#define GGE_MIPI_TXMID_EVENT_COUNT        4
#define GGE_MIPI_R2E_EVENT_COUNT          6

#define GGE_MIPI_SUBBAND_NUM              5
#define GGE_MIPI_SUBBAND_PA_DATA_NUM      3
#define GGE_MIPI_TXMID_TYPE_NUM           4

/* MIPI Event Type */
#define GGE_MIPI_EVENT_NULL            0x00
#define GGE_MIPI_TRX_ON                0x01
#define GGE_MIPI_TRX_OFF               0x02
#define GGE_MIPI_TXMID                 0x03
/* MIPI Port Select         */
#if IS_CHIP_MT6293
#define GGE_MIPI_PORT0                 0x00
#define GGE_MIPI_PORT1                 0x01
#define GGE_MIPI_PORT2                 0x02
#define GGE_MIPI_PORT3                 0x03
#define GGE_MIPI_PORT4                 0x04
#define GGE_MIPI_DATA_NULL             0x05
#elif IS_CHIP_MT6755 || IS_CHIP_MT6292 
#define GGE_MIPI_PORT0                 0x00
#define GGE_MIPI_PORT1                 0x01
#define GGE_MIPI_PORT2                 0x02
#define GGE_MIPI_PORT3                 0x03
#define GGE_MIPI_DATA_NULL             0x04
#elif IS_CHIP_TK6291
/* 0x00 : Device 0 for RFIC */
/* 0x01 : Device 1 for PMIC */
#define GGE_MIPI_PORT0                 0x02
#define GGE_MIPI_PORT1                 0x03
#define GGE_MIPI_DATA_NULL             0x04
#else
#error "please define the mipi port"
#endif

/* MIPI Data Sequence Format */
#define GGE_MIPI_REG_W_NULL            0x00
#define GGE_MIPI_REG_0_W               0x01
#define GGE_MIPI_REG_W                 0x02
#define GGE_MIPI_REG_W_EXT_1ST         0x03
#define GGE_MIPI_REG_W_EXT_BYTE        0x04
#define GGE_MIPI_WAIT                  0x05

/* MIPI Component Type */
#define GGE_MIPI_NULL                  0x00
#define GGE_MIPI_ASM                   0x01
#define GGE_MIPI_ANT                   0x02
#define GGE_MIPI_PA                    0x03
#define GGE_MIPI_ET                    0x04
#if 1//IS_2G_RXD_SUPPORT
#define GGE_MIPI_ASM_RXD               0x05
#endif
/* MIPI PA G/8 Data */
#define GGE_MIPI_PA_G8                 0x30000000

#define GGE_NULL_ARFCN                 (-1)
#define GGE_NULL_PA_DATA               (-1)
//max +ve value of signed short to make it valid for all the ARFCN
#define GGE_TAS_NO_SPLIT_BAND          (32767)


#endif /* IS_MIPI_SUPPORT */

/*---------------------------------------------------------------------------*/
#endif /*End of "#ifndef _L1D_MIPI_DATA_H_" */

