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
 *   l1d_data_pcore.c
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
 *------------------------------------------------------------------------------
 * $Revision: $
 * $Modtime:  $
 * $Log:      $
 *
 * 03 10 2016 dou.ju
 * [MOLY00168285] [GL1D RF]DRDI feature
 * 	
 * 	.
 *
 * 01 28 2016 sherman.chung
 * [MOLY00145750] [TAS][GL1D]Remove TAS Internal Nvram
 * .
 *
 * 08 28 2015 sherman.chung
 * [MOLY00135628] [L1D] Modify TAS LIB parameters location
 * .
 *
 * 08 05 2015 yi-ying.lin
 * [MOLY00125231] [L1D][Modify] Fix MT6291PLUS.PRE_SB.W1517.DEV build error
 * 	.
 *
 *
 * 06 17 2015 sherman.chung
 * [MOLY00121994] [UMOLY][L1D] 2G L1D TAS Porting
 * .
 *
 * 05 29 2015 sherman.chung
 * [MOLY00116464] [UMOLY] 2G L1 TAS Check in
 * .
 *
 * 03 04 2015 yi-ying.lin
 * [MOLY00097724] [L1D][Modify] Fix CC nvram and custom data error.
 *
 *
 *******************************************************************************/

#include  "l1d_public.h"
#include  "l1d_rf_common.h"
#include  "l1cal.h"
#include  "l1d_custom_rf.h"
#include  "l1d_rf_pcore.h"
#include  "l1d_data_pcore.h"
/*----------------------------------------*/
/* data for BBTX setting                  */
/*----------------------------------------*/
#ifdef GSM850_IN_GSM900_PATH
#define  GSM850_GSM900_SWAP    GSM850_IN_GSM900_PATH
#endif
#ifndef  GSM850_GSM900_SWAP
#define  GSM850_GSM900_SWAP    0
#endif
#ifndef  DCS1800_PCS1900_SWAP
#define  DCS1800_PCS1900_SWAP  0
#endif

sBBTXParameters BBTXParameters =
{
   (0x07& BBTX_COMMON_MODE_VOLTAGE),
   (0x07& BBTX_GAIN),
   (0x07& BBTX_CALRCSEL),
   (0x0F& BBTX_TRIM_I),
   (0x0F& BBTX_TRIM_Q),
   (0x03& BBTX_DCCOARSE_I),
   (0x03& BBTX_DCCOARSE_Q),
   (0x3F& BBTX_OFFSET_I),
   (0x3F& BBTX_OFFSET_Q),
   0,   /* bbtx_isCalibrated */
   BAT_LOW_VOLTAGE_SetDefault,
   BAT_HIGH_VOLTAGE_SetDefault,
   BAT_LOW_TEMPERATURE_SetDefault,
   BAT_HIGH_TEMPERATURE_SetDefault,
   AP_UPDATE_VOLTINFO_PERIOD_SetDefault,
   (0x07& BBTX_COMMON_MODE_VOLTAGE_H),
   (0x07& BBTX_GAIN_H),
   (0x07& BBTX_CALRCSEL_H),
   (0x0F& BBTX_TRIM_I_H),
   (0x0F& BBTX_TRIM_Q_H),
   (0x03& BBTX_DCCOARSE_I_H),
   (0x03& BBTX_DCCOARSE_Q_H),
   (0x3F& BBTX_OFFSET_I_H),
   (0x3F& BBTX_OFFSET_Q_H),
#if IS_BBTXRX_CHIP_DESIGN_VER_2 || IS_BBTXRX_CHIP_DESIGN_VER_3
   (0x3F& BBTX_PHSEL),
   (0x3F& BBTX_PHSEL_H),
#elif IS_EDGE_SAIC_CHIP_MT6238_AND_LATTER_VERSION
   (0x0F& BBTX_PHSEL),
   (0x0F& BBTX_PHSEL_H),
#else
   (0x07& BBTX_PHSEL),
   (0x07& BBTX_PHSEL_H),
#endif
   (0x01& GSM850_GSM900_SWAP),
   (0x01& DCS1800_PCS1900_SWAP),
};

/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

/* TX power control */
#if IS_TX_POWER_CONTROL_SUPPORT
char  is_txpc_calibrated    = 0;
short ref_temperature       = TEMP_VALUE_DEFAULT;
#endif

/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
