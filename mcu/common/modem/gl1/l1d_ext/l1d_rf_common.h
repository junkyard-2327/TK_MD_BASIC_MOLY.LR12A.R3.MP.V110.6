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
 *   l1d_rf_common.h
 *
 * Project:
 * --------
 *   TK6291
 *
 * Description:
 * ------------
 *   CC RF constance defintion
 *
 * Author:
 * -------
 * -------
 *
 *============================================================================
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
 * removed!
 * removed!
 * removed!
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

#ifndef  _L1D_RF_COMMON_H_
#define  _L1D_RF_COMMON_H_
#include "l1d_cid.h"
#include "l1cal.h"
#include "l1d_public.h"
/* ------------------------------------------------------------------------- */
#if IS_TXPC_CL_AUXADC_SUPPORT || IS_TXPC_CL_BSI_SUPPORT
void  L1D_RF_TXPC_CL_GetAllADC( sTXPC_L1CAL *buff, char is_EPSK );
void  L1D_RF_TXPC_CL_GetAllTEMP( sTXPC_L1CAL *buff, char is_EPSK );
#endif


/* To prevent abnormal BAND_SUPPORT upgrade in project make file for partial-source load */
#ifdef __GSM450__
#define  l1d_support_band400    FrequencyBand400
#endif

#ifdef __GSM850__
#define  l1d_support_band850    FrequencyBand850
#endif

#if defined(__PGSM900__)||defined(__EGSM900__)||defined(__RGSM900__)
#define  l1d_support_band900    FrequencyBand900
#endif

#ifdef __DCS1800__
#define  l1d_support_band1800   FrequencyBand1800
#endif

#ifdef __PCS1900__
#define  l1d_support_band1900   FrequencyBand1900
#endif
/* To prevent abnormal BAND_SUPPORT upgrade in project make file for partial-source load */


/* ------------------------------------------------------------------------- */
/*==========================*/  /*========================*/
/* BBRX_GAIN_DOUBLE         */  /* BBTX_CALBIAS           */
/*--------------------------*/  /*------------------------*/
/* 0: mapping range = 2.24V */  /* N= 0..+15 : 1.038^N    */
/* 1: mapping range = 1.12V */  /* N=-1..-16 : 0.918^(-N) */
/*==========================*/  /*========================*/
/*==========================*/  /*========================*/
/* BBTX_COMMON_MODE_VOLTAGE */  /* BBTX_CALRCSEL          */
/*--------------------------*/  /*------------------------*/
/* Set | Volt || Set | Volt */  /* Set | BW  || Set | BW  */
/*-----+------||-----+------*/  /*-----+-----||-----+-----*/
/*  3  | 1.75 || -1  | 1.29 */  /*  3  | 213 || -1  | 394 */
/*  2  | 1.62 || -2  | 1.18 */  /*  2  | 245 || -2  | 450 */
/*  1  | 1.51 || -3  | 1.06 */  /*  1  | 289 || -3  | 520 */
/*  0  | 1.40 || -4  | 0.95 */  /*  0  | 350 || -4  | 620 */
/*==========================*/  /*========================*/
/*==========================*/  /*========================*/
/* BBTX_TRIM_I              */  /* BBTX_OFFSET_I          */
/* BBTX_TRIM_Q              */  /* BBTX_OFFSET_Q          */
/*--------------------------*/  /*------------------------*/
/* N= -8...+7 : 0.16N dB    */  /* N=-32...+31: 2.737N mV */
/*==========================*/  /*========================*/
/*========================================================*/
/* BBTX_GAIN                                              */
/* --+---------+---------------+------------+-------------*/
/* S | FPGA    |               |            |             */
/* e | MT6208  | MT6205B       | MT6218B_EN | MT6218B_FN~ */
/* t | MT6205A | MT6218B_AN~DN | MT6219AV   | MT6219_BV   */
/*   | MT6218A |               |            |             */
/*---+---------+---------------+------------+-------------*/
/* 3 |  2.52V  |     1.48V     |   0.93V    |   1.50V     */
/* 2 |  2.01V  |     1.37V     |   0.87V    |   1.42V     */
/* 1 |  1.62V  |     1.29V     |   0.81V    |   1.36V     */
/* 0 |  1.26V  |     1.15V     |   0.76V    |   1.19V     */
/*-1 |  1.00V  |     1.06V     |   0.71V    |   1.12V     */
/*-2 |  0.81V  |     1.00V     |   0.66V    |   1.05V     */
/*-3 |  0.64V  |     0.92V     |   0.62V    |   1.00V     */
/*-4 |  0.50V  |     0.87V     |   0.58V    |   0.93V     */
/*========================================================*/
/* ------------------------------------------------------------------------- */
//#define  CLK32K_MICRO_SECOND(n)       ((int)(n*32.0/1000))
/* ------------------------------------------------------------------------- */

#if IS_RF_MT6280RF
/*MT6280RF*/ /*--------------------------------------------------------*/
/*MT6280RF*/ /*   BFE Legacy Setting (no use)                          */
/*MT6280RF*/ /*--------------------------------------------------------*/
/*MT6280RF*/ #define  BBRX_GAIN_DOUBLE             0
/*MT6280RF*/ #define  BBTX_IQ_SWAP                 0
/*MT6280RF*/ #define  BBTX_CALBIAS                 0
/*MT6280RF*/ #define  BBTX_CALRCSEL                0
/*MT6280RF*/ #define  BBTX_CALRCSEL_H              0
/*MT6280RF*/ #define  BBTX_COMMON_MODE_VOLTAGE     0 //COMMON MODE VOLTAGE: 1.5v
/*MT6280RF*/ #define  BBTX_COMMON_MODE_VOLTAGE_H   0 //COMMON MODE VOLTAGE: 1.5v
/*MT6280RF*/ #define  BBTX_TRIM_I                  0 // wait calibration
/*MT6280RF*/ #define  BBTX_TRIM_I_H                0 // wait calibration
/*MT6280RF*/ #define  BBTX_TRIM_Q                  0 // wait calibration
/*MT6280RF*/ #define  BBTX_TRIM_Q_H                0 // wait calibration
/*MT6280RF*/ #define  BBTX_OFFSET_I                0 // wait calibration
/*MT6280RF*/ #define  BBTX_OFFSET_I_H              0 // wait calibration
/*MT6280RF*/ #define  BBTX_OFFSET_Q                0 // wait calibration
/*MT6280RF*/ #define  BBTX_OFFSET_Q_H              0 // wait calibration
/*MT6280RF*/ #define  BBTX_PHSEL                   0 // wait calibration
/*MT6280RF*/ #define  BBTX_PHSEL_H                 0 // wait calibration
/*MT6280RF*/ #define  BBTX_COARSGAIN               0
/*MT6280RF*/ #define  BBTX_GAIN                    0 // get from experiment
/*MT6280RF*/ #define  BBTX_GAIN_H                  0 // get from experiment
/*MT6280RF*/ #define  BBTX_GAIN_SWING              900  /* mV */
/*MT6280RF*/
/*MT6280RF*/ /*--------------------------------------------------------*/
/*MT6280RF*/ /*   Define band mode mapped receiver type                */
/*MT6280RF*/ /*   DO NOT MODIFY the definitions here.                  */
/*MT6280RF*/ /*--------------------------------------------------------*/
/*MT6280RF*/ #define  RX_MAIN_PATH_OFF            0x0
/*MT6280RF*/ #define  LNA_1                       0x1
/*MT6280RF*/ #define  LNA_2                       0x2
/*MT6280RF*/ #define  LNA_3                       0x3
/*MT6280RF*/ #define  LNA_4                       0x4
/*MT6280RF*/ #define  LNA_5                       0x5
#endif

/*============================================================================== */

#if IS_RF_MT6169
/*MT6169*/ /*--------------------------------------------------------*/
/*MT6169*/ /*   BFE Legacy Setting (no use)                          */
/*MT6169*/ /*--------------------------------------------------------*/
/*MT6169*/ #define  BBRX_GAIN_DOUBLE             0
/*MT6169*/ #define  BBTX_IQ_SWAP                 0
/*MT6169*/ #define  BBTX_CALBIAS                 0
/*MT6169*/ #define  BBTX_CALRCSEL                0
/*MT6169*/ #define  BBTX_CALRCSEL_H              0
/*MT6169*/ #define  BBTX_COMMON_MODE_VOLTAGE     0 //COMMON MODE VOLTAGE: 1.5v
/*MT6169*/ #define  BBTX_COMMON_MODE_VOLTAGE_H   0 //COMMON MODE VOLTAGE: 1.5v
/*MT6169*/ #define  BBTX_TRIM_I                  0 // wait calibration
/*MT6169*/ #define  BBTX_TRIM_I_H                0 // wait calibration
/*MT6169*/ #define  BBTX_TRIM_Q                  0 // wait calibration
/*MT6169*/ #define  BBTX_TRIM_Q_H                0 // wait calibration
/*MT6169*/ #define  BBTX_OFFSET_I                0 // wait calibration
/*MT6169*/ #define  BBTX_OFFSET_I_H              0 // wait calibration
/*MT6169*/ #define  BBTX_OFFSET_Q                0 // wait calibration
/*MT6169*/ #define  BBTX_OFFSET_Q_H              0 // wait calibration
/*MT6169*/ #define  BBTX_PHSEL                   0 // wait calibration
/*MT6169*/ #define  BBTX_PHSEL_H                 0 // wait calibration
/*MT6169*/ #define  BBTX_COARSGAIN               0
/*MT6169*/ #define  BBTX_GAIN                    0 // get from experiment
/*MT6169*/ #define  BBTX_GAIN_H                  0 // get from experiment
/*MT6169*/ #define  BBTX_GAIN_SWING              900  /* mV */
/*MT6169*/
/*MT6169*/ /*--------------------------------------------------------*/
/*MT6169*/ /*   Define band mode mapped receiver type                */
/*MT6169*/ /*   DO NOT MODIFY the definitions here.                  */
/*MT6169*/ /*--------------------------------------------------------*/
/*MT6169*/ #define  IORX_HB1                     0x0
/*MT6169*/ #define  IORX_HB2                     0x1
/*MT6169*/ #define  IORX_HB3                     0x2
/*MT6169*/ #define  IORX_MB1                     0x3
/*MT6169*/ #define  IORX_MB2                     0x4
/*MT6169*/ #define  IORX_LB1                     0x5
/*MT6169*/ #define  IORX_LB2                     0x6
/*MT6169*/ #define  IORX_LB3                     0x7
/*MT6169*/
/*MT6169*/ /*--------------------------------------------------------*/
/*MT6169*/ /*   Define band mode mapped receiver type                */
/*MT6169*/ /*   DO NOT MODIFY the definitions here.                  */
/*MT6169*/ /*--------------------------------------------------------*/
/*MT6169*/ #define  IOTX_HB1                     0x0
/*MT6169*/ #define  IOTX_HB2                     0x1
/*MT6169*/ #define  IOTX_MB1                     0x2
/*MT6169*/ #define  IOTX_MB2                     0x3
/*MT6169*/ #define  IOTX_LB1                     0x4
/*MT6169*/ #define  IOTX_LB2                     0x5
/*MT6169*/ #define  IOTX_LB3                     0x6
/*MT6169*/ #define  IOTX_LB4                     0x7
/*MT6169*/
#endif

/*============================================================================== */

#if IS_RF_MT6166
/*MT6166*/ /*--------------------------------------------------------*/
/*MT6166*/ /*   BFE Legacy Setting (no use)                          */
/*MT6166*/ /*--------------------------------------------------------*/
/*MT6166*/ #define  BBRX_GAIN_DOUBLE             0
/*MT6166*/ #define  BBTX_IQ_SWAP                 0
/*MT6166*/ #define  BBTX_CALBIAS                 0
/*MT6166*/ #define  BBTX_CALRCSEL                0
/*MT6166*/ #define  BBTX_CALRCSEL_H              0
/*MT6166*/ #define  BBTX_COMMON_MODE_VOLTAGE     0 //COMMON MODE VOLTAGE: 1.5v
/*MT6166*/ #define  BBTX_COMMON_MODE_VOLTAGE_H   0 //COMMON MODE VOLTAGE: 1.5v
/*MT6166*/ #define  BBTX_TRIM_I                  0 // wait calibration
/*MT6166*/ #define  BBTX_TRIM_I_H                0 // wait calibration
/*MT6166*/ #define  BBTX_TRIM_Q                  0 // wait calibration
/*MT6166*/ #define  BBTX_TRIM_Q_H                0 // wait calibration
/*MT6166*/ #define  BBTX_OFFSET_I                0 // wait calibration
/*MT6166*/ #define  BBTX_OFFSET_I_H              0 // wait calibration
/*MT6166*/ #define  BBTX_OFFSET_Q                0 // wait calibration
/*MT6166*/ #define  BBTX_OFFSET_Q_H              0 // wait calibration
/*MT6166*/ #define  BBTX_PHSEL                   0 // wait calibration
/*MT6166*/ #define  BBTX_PHSEL_H                 0 // wait calibration
/*MT6166*/ #define  BBTX_COARSGAIN               0
/*MT6166*/ #define  BBTX_GAIN                    0 // get from experiment
/*MT6166*/ #define  BBTX_GAIN_H                  0 // get from experiment
/*MT6166*/ #define  BBTX_GAIN_SWING              900  /* mV */
/*MT6166*/
/*MT6166*/ /*--------------------------------------------------------*/
/*MT6166*/ /*   Define band mode mapped receiver type                */
/*MT6166*/ /*   DO NOT MODIFY the definitions here.                  */
/*MT6166*/ /*--------------------------------------------------------*/
/*MT6166*/ #define  RX_MAIN_PATH_OFF            0x0
/*MT6166*/ #define  LNA_1                       0x1
/*MT6166*/ #define  LNA_2                       0x2
/*MT6166*/ #define  LNA_3                       0x3
/*MT6166*/ #define  LNA_4                       0x4
/*MT6166*/ #define  LNA_5                       0x5
/*MT6166*/ #define  LNA_6                       0x6
/*MT6166*/ #define  LNA_7                       0x7
/*MT6166*/
#endif

/*============================================================================== */

#if IS_RF_MT6165
/*MT6165*/ /*--------------------------------------------------------*/
/*MT6165*/ /*   BFE Legacy Setting (no use)                          */
/*MT6165*/ /*--------------------------------------------------------*/
/*MT6165*/ #define  BBRX_GAIN_DOUBLE             0
/*MT6165*/ #define  BBTX_IQ_SWAP                 0
/*MT6165*/ #define  BBTX_CALBIAS                 0
/*MT6165*/ #define  BBTX_CALRCSEL                0
/*MT6165*/ #define  BBTX_CALRCSEL_H              0
/*MT6165*/ #define  BBTX_COMMON_MODE_VOLTAGE     0 //COMMON MODE VOLTAGE: 1.5v
/*MT6165*/ #define  BBTX_COMMON_MODE_VOLTAGE_H   0 //COMMON MODE VOLTAGE: 1.5v
/*MT6165*/ #define  BBTX_TRIM_I                  0 // wait calibration
/*MT6165*/ #define  BBTX_TRIM_I_H                0 // wait calibration
/*MT6165*/ #define  BBTX_TRIM_Q                  0 // wait calibration
/*MT6165*/ #define  BBTX_TRIM_Q_H                0 // wait calibration
/*MT6165*/ #define  BBTX_OFFSET_I                0 // wait calibration
/*MT6165*/ #define  BBTX_OFFSET_I_H              0 // wait calibration
/*MT6165*/ #define  BBTX_OFFSET_Q                0 // wait calibration
/*MT6165*/ #define  BBTX_OFFSET_Q_H              0 // wait calibration
/*MT6165*/ #define  BBTX_PHSEL                   0 // wait calibration
/*MT6165*/ #define  BBTX_PHSEL_H                 0 // wait calibration
/*MT6165*/ #define  BBTX_COARSGAIN               0
/*MT6165*/ #define  BBTX_GAIN                    0 // get from experiment
/*MT6165*/ #define  BBTX_GAIN_H                  0 // get from experiment
/*MT6165*/ #define  BBTX_GAIN_SWING              900  /* mV */
/*MT6165*/
/*MT6165*/ /*--------------------------------------------------------*/
/*MT6165*/ /*   Define band mode mapped receiver type                */
/*MT6165*/ /*   DO NOT MODIFY the definitions here.                  */
/*MT6165*/ /*--------------------------------------------------------*/
/*MT6165*/ #define  LNA_0                       0x0
/*MT6165*/ #define  LNA_1                       0x1
/*MT6165*/ #define  LNA_2                       0x2
/*MT6165*/ #define  LNA_3                       0x3
/*MT6165*/ #define  LNA_4                       0x4
/*MT6165*/ #define  LNA_5                       0x5
/*MT6165*/ #define  LNA_6                       0x6
/*MT6165*/
#endif

/*============================================================================== */

#if IS_RF_MT6176
/*MT6176*/ /*--------------------------------------------------------*/
/*MT6176*/ /*   BFE Legacy Setting (no use)                          */
/*MT6176*/ /*--------------------------------------------------------*/
/*MT6176*/ #define  BBRX_GAIN_DOUBLE             0
/*MT6176*/ #define  BBTX_IQ_SWAP                 0
/*MT6176*/ #define  BBTX_CALBIAS                 0
/*MT6176*/ #define  BBTX_CALRCSEL                0
/*MT6176*/ #define  BBTX_CALRCSEL_H              0
/*MT6176*/ #define  BBTX_COMMON_MODE_VOLTAGE     0 //COMMON MODE VOLTAGE: 1.5v
/*MT6176*/ #define  BBTX_COMMON_MODE_VOLTAGE_H   0 //COMMON MODE VOLTAGE: 1.5v
/*MT6176*/ #define  BBTX_TRIM_I                  0 // wait calibration
/*MT6176*/ #define  BBTX_TRIM_I_H                0 // wait calibration
/*MT6176*/ #define  BBTX_TRIM_Q                  0 // wait calibration
/*MT6176*/ #define  BBTX_TRIM_Q_H                0 // wait calibration
/*MT6176*/ #define  BBTX_OFFSET_I                0 // wait calibration
/*MT6176*/ #define  BBTX_OFFSET_I_H              0 // wait calibration
/*MT6176*/ #define  BBTX_OFFSET_Q                0 // wait calibration
/*MT6176*/ #define  BBTX_OFFSET_Q_H              0 // wait calibration
/*MT6176*/ #define  BBTX_PHSEL                   0 // wait calibration
/*MT6176*/ #define  BBTX_PHSEL_H                 0 // wait calibration
/*MT6176*/ #define  BBTX_COARSGAIN               0
/*MT6176*/ #define  BBTX_GAIN                    0 // get from experiment
/*MT6176*/ #define  BBTX_GAIN_H                  0 // get from experiment
/*MT6176*/ #define  BBTX_GAIN_SWING              900  /* mV */
/*MT6176*/
#endif

/*============================================================================== */

#if IS_RF_MT6179
/*MT6179*/ /*--------------------------------------------------------*/
/*MT6179*/ /*   BFE Legacy Setting (no use)                          */
/*MT6179*/ /*--------------------------------------------------------*/
/*MT6179*/ #define  BBRX_GAIN_DOUBLE             0
/*MT6179*/ #define  BBTX_IQ_SWAP                 0
/*MT6179*/ #define  BBTX_CALBIAS                 0
/*MT6179*/ #define  BBTX_CALRCSEL                0
/*MT6179*/ #define  BBTX_CALRCSEL_H              0
/*MT6179*/ #define  BBTX_COMMON_MODE_VOLTAGE     0 //COMMON MODE VOLTAGE: 1.5v
/*MT6179*/ #define  BBTX_COMMON_MODE_VOLTAGE_H   0 //COMMON MODE VOLTAGE: 1.5v
/*MT6179*/ #define  BBTX_TRIM_I                  0 // wait calibration
/*MT6179*/ #define  BBTX_TRIM_I_H                0 // wait calibration
/*MT6179*/ #define  BBTX_TRIM_Q                  0 // wait calibration
/*MT6179*/ #define  BBTX_TRIM_Q_H                0 // wait calibration
/*MT6179*/ #define  BBTX_OFFSET_I                0 // wait calibration
/*MT6179*/ #define  BBTX_OFFSET_I_H              0 // wait calibration
/*MT6179*/ #define  BBTX_OFFSET_Q                0 // wait calibration
/*MT6179*/ #define  BBTX_OFFSET_Q_H              0 // wait calibration
/*MT6179*/ #define  BBTX_PHSEL                   0 // wait calibration
/*MT6179*/ #define  BBTX_PHSEL_H                 0 // wait calibration
/*MT6179*/ #define  BBTX_COARSGAIN               0
/*MT6179*/ #define  BBTX_GAIN                    0 // get from experiment
/*MT6179*/ #define  BBTX_GAIN_H                  0 // get from experiment
/*MT6179*/ #define  BBTX_GAIN_SWING              900  /* mV */
/*MT6179*/
#endif

/*============================================================================== */

#if IS_RF_MT6177L
/*MT6177L*/ /*--------------------------------------------------------*/
/*MT6177L*/ /*   BFE Legacy Setting (no use)                          */
/*MT6177L*/ /*--------------------------------------------------------*/
/*MT6177L*/ #define  BBRX_GAIN_DOUBLE             0
/*MT6177L*/ #define  BBTX_IQ_SWAP                 0
/*MT6177L*/ #define  BBTX_CALBIAS                 0
/*MT6177L*/ #define  BBTX_CALRCSEL                0
/*MT6177L*/ #define  BBTX_CALRCSEL_H              0
/*MT6177L*/ #define  BBTX_COMMON_MODE_VOLTAGE     0 //COMMON MODE VOLTAGE: 1.5v
/*MT6177L*/ #define  BBTX_COMMON_MODE_VOLTAGE_H   0 //COMMON MODE VOLTAGE: 1.5v
/*MT6177L*/ #define  BBTX_TRIM_I                  0 // wait calibration
/*MT6177L*/ #define  BBTX_TRIM_I_H                0 // wait calibration
/*MT6177L*/ #define  BBTX_TRIM_Q                  0 // wait calibration
/*MT6177L*/ #define  BBTX_TRIM_Q_H                0 // wait calibration
/*MT6177L*/ #define  BBTX_OFFSET_I                0 // wait calibration
/*MT6177L*/ #define  BBTX_OFFSET_I_H              0 // wait calibration
/*MT6177L*/ #define  BBTX_OFFSET_Q                0 // wait calibration
/*MT6177L*/ #define  BBTX_OFFSET_Q_H              0 // wait calibration
/*MT6177L*/ #define  BBTX_PHSEL                   0 // wait calibration
/*MT6177L*/ #define  BBTX_PHSEL_H                 0 // wait calibration
/*MT6177L*/ #define  BBTX_COARSGAIN               0
/*MT6177L*/ #define  BBTX_GAIN                    0 // get from experiment
/*MT6177L*/ #define  BBTX_GAIN_H                  0 // get from experiment
/*MT6177L*/ #define  BBTX_GAIN_SWING              900  /* mV */
/*MT6177L*/
#endif

/*============================================================================== */

#if IS_RF_MT6177M
/*MT6173*/ /*--------------------------------------------------------*/
/*MT6173*/ /*   BFE Legacy Setting (no use)                          */
/*MT6173*/ /*--------------------------------------------------------*/
/*MT6173*/ #define  BBRX_GAIN_DOUBLE             0
/*MT6173*/ #define  BBTX_IQ_SWAP                 0
/*MT6173*/ #define  BBTX_CALBIAS                 0
/*MT6173*/ #define  BBTX_CALRCSEL                0
/*MT6173*/ #define  BBTX_CALRCSEL_H              0
/*MT6173*/ #define  BBTX_COMMON_MODE_VOLTAGE     0 //COMMON MODE VOLTAGE: 1.5v
/*MT6173*/ #define  BBTX_COMMON_MODE_VOLTAGE_H   0 //COMMON MODE VOLTAGE: 1.5v
/*MT6173*/ #define  BBTX_TRIM_I                  0 // wait calibration
/*MT6173*/ #define  BBTX_TRIM_I_H                0 // wait calibration
/*MT6173*/ #define  BBTX_TRIM_Q                  0 // wait calibration
/*MT6173*/ #define  BBTX_TRIM_Q_H                0 // wait calibration
/*MT6173*/ #define  BBTX_OFFSET_I                0 // wait calibration
/*MT6173*/ #define  BBTX_OFFSET_I_H              0 // wait calibration
/*MT6173*/ #define  BBTX_OFFSET_Q                0 // wait calibration
/*MT6173*/ #define  BBTX_OFFSET_Q_H              0 // wait calibration
/*MT6173*/ #define  BBTX_PHSEL                   0 // wait calibration
/*MT6173*/ #define  BBTX_PHSEL_H                 0 // wait calibration
/*MT6173*/ #define  BBTX_COARSGAIN               0
/*MT6173*/ #define  BBTX_GAIN                    0 // get from experiment
/*MT6173*/ #define  BBTX_GAIN_H                  0 // get from experiment
/*MT6173*/ #define  BBTX_GAIN_SWING              900  /* mV */
/*MT6173*/
#endif

/*============================================================================== */

#ifndef  BBTX_IQSWAP_ONFLY
#define  BBTX_IQSWAP_ONFLY             0
#endif

//BBTX_PHSEL
#ifndef  BBTX_PHSEL
#define  BBTX_PHSEL                    0
#endif
//BBTX_RPSEL
#ifndef  BBTX_RPSEL
#define  BBTX_RPSEL                    0
#endif
//BBTX_INTEN
#ifndef  BBTX_INTEN
#define  BBTX_INTEN                    0
#endif
//BBTX_SW_QBCNT
#ifndef  BBTX_SW_QBCNT
#define  BBTX_SW_QBCNT                 0
#endif
//BBTX_RPSEL
#ifndef  BBTX_RPSEL
#define  BBTX_RPSEL                    0
#endif
//BBTX_INTEN
#ifndef  BBTX_INTEN
#define  BBTX_INTEN                    0
#endif
//BBTX_SW_QBCNT
#ifndef  BBTX_SW_QBCNT
#define  BBTX_SW_QBCNT                 0
#endif
//BBTX_PHSEL
#ifndef  BBTX_PHSEL
#define  BBTX_PHSEL                    0
#endif

#ifndef  BBTX_CALRCSEL_H
#define  BBTX_CALRCSEL_H               0
#endif
#ifndef  BBTX_COMMON_MODE_VOLTAGE_H
#define  BBTX_COMMON_MODE_VOLTAGE_H    0
#endif
#ifndef  BBTX_TRIM_I_H
#define  BBTX_TRIM_I_H                 0
#endif
#ifndef  BBTX_TRIM_Q_H
#define  BBTX_TRIM_Q_H                 0
#endif
#ifndef  BBTX_DCCOARSE_I
#define  BBTX_DCCOARSE_I               0
#endif
#ifndef  BBTX_DCCOARSE_Q
#define  BBTX_DCCOARSE_Q               0
#endif
#ifndef  BBTX_DCCOARSE_I_H
#define  BBTX_DCCOARSE_I_H             0
#endif
#ifndef  BBTX_DCCOARSE_Q_H
#define  BBTX_DCCOARSE_Q_H             0
#endif
#ifndef  BBTX_OFFSET_I_H
#define  BBTX_OFFSET_I_H               0
#endif
#ifndef  BBTX_OFFSET_Q_H
#define  BBTX_OFFSET_Q_H               0
#endif
#ifndef  BBTX_GAIN_H
#define  BBTX_GAIN_H                   0
#endif
#ifndef  BBTX_PHSEL_H
#define  BBTX_PHSEL_H                  0
#endif
#ifndef  BBTX_GAIN_COMP
#define  BBTX_GAIN_COMP                0
#endif
#ifndef  BBTX_IQGAIN_SEL
#define  BBTX_IQGAIN_SEL               0
#endif
#ifndef  BBTX_GAIN_COMP_H
#define  BBTX_GAIN_COMP_H              0
#endif
#ifndef  BBTX_IQGAIN_SEL_H
#define  BBTX_IQGAIN_SEL_H             0
#endif
#ifndef  BBTX_PHSEL_I
#define  BBTX_PHSEL_I                  0
#endif
#ifndef  BBTX_PHSEL_Q
#define  BBTX_PHSEL_Q                  0
#endif
#ifndef  BBTX_PHSEL_I_H
#define  BBTX_PHSEL_I_H                0
#endif
#ifndef  BBTX_PHSEL_Q_H
#define  BBTX_PHSEL_Q_H                0
#endif
#ifndef  BBTX_EPSK_DTAP_SYM
#define  BBTX_EPSK_DTAP_SYM            0
#endif
/* ------------------------------------------------------------------------- */

#if IS_CHIP_MT6583_MD1
/* for MT6167 */
#define  QB_RX_FENA_2_FSYNC            48   /* this value shall be 4N+0 */
#define  QB_RX_FSYNC_2_FENA            0
#define  QB_TX_FENA_2_FSYNC            20
#define  QB_TX_FSYNC_2_FENA            30
#endif

#if IS_CHIP_MT6583_MD2
/* for MT6168 */
#undef   QB_RX_FENA_2_FSYNC
#undef   QB_RX_FSYNC_2_FENA
#undef   QB_TX_FENA_2_FSYNC
#undef   QB_TX_FSYNC_2_FENA
#define  QB_RX_FENA_2_FSYNC            48   /* this value shall be 4N+0 */
#define  QB_RX_FSYNC_2_FENA            0
#define  QB_TX_FENA_2_FSYNC            20
#define  QB_TX_FSYNC_2_FENA            26
#endif

#if IS_CHIP_MT6292 || IS_CHIP_MT6293
#define  QB_RX_FENA_2_FSYNC            48   /* this value shall be 4N+0 */ /* the same as MT6291 */
#define  QB_RX_FSYNC_2_FENA            0                                   /* the same as MT6291 */
#define  QB_TX_FENA_2_FSYNC            20                                  /* the same as MT6291 */
#define  QB_TX_FSYNC_2_FENA            36                                  /* change for more ramp down profile usage */
#elif IS_CHIP_TK6291 || IS_CHIP_MT6755
#define  QB_RX_FENA_2_FSYNC            48   /* this value shall be 4N+0 */ /* the same as MT6290 */
#define  QB_RX_FSYNC_2_FENA            0                                   /* the same as MT6290 */
#define  QB_TX_FENA_2_FSYNC            20                                  /* the same as MT6589 MD2 */
#define  QB_TX_FSYNC_2_FENA            26                                  /* the same as MT6589 MD2 */
#elif IS_CHIP_MT6572 || IS_CHIP_MT6290 || IS_CHIP_MT6595 || IS_CHIP_MT6752_MD1 || IS_CHIP_MT6752_MD2 
/* for MT6166 and MT6169 */
#define  QB_RX_FENA_2_FSYNC            48   /* this value shall be 4N+0 */
#define  QB_RX_FSYNC_2_FENA            0
#define  QB_TX_FENA_2_FSYNC            20
#define  QB_TX_FSYNC_2_FENA            30
#endif

#define  QB_RON_2_FSYNC                0
#define  QB_FSYNC_2_ROFF               0
#define  QB_TON_2_FSYNC                16
#define  QB_FSYNC_2_TOFF               16

#if IS_TDMA_AD_DA_WINDOW_SUPPORT
   #if IS_CHIP_TK6291 || IS_CHIP_MT6755 || IS_CHIP_MT6292 || IS_CHIP_MT6293
#define  QB_RX_ADEN_2_FENA             115 /* the same as MT6290 */
#define  QB_RX_FENA_2_ADEN             0   /* the same as MT6290 */
#define  QB_TX_DAEN_2_FENA             25  /* the same as MT6589 MD2 */
#define  QB_TX_FENA_2_DAEN             0   /* the same as MT6589 MD2 */
   #elif IS_CHIP_MT6290 || IS_CHIP_MT6595 || IS_CHIP_MT6752_MD1 || IS_CHIP_MT6752_MD2
#define  QB_RX_ADEN_2_FENA             115 /* >100us for MT6290 */
#define  QB_RX_FENA_2_ADEN             0
#define  QB_TX_DAEN_2_FENA             25  /* > 20us for MT6290 */
#define  QB_TX_FENA_2_DAEN             0   
   #elif IS_CHIP_MT6572
#define  QB_RX_ADEN_2_FENA             72  /* > 66us for MT6572 */
#define  QB_RX_FENA_2_ADEN             0
#define  QB_TX_DAEN_2_FENA             13  /* > 12us for MT6572 */
#define  QB_TX_FENA_2_DAEN             0
   #elif IS_CHIP_MT6583_MD1 || IS_CHIP_MT6583_MD2
#define  QB_RX_ADEN_2_FENA             135 /* >120us for MT6583 */
#define  QB_RX_FENA_2_ADEN             0
#define  QB_TX_DAEN_2_FENA             25  /* > 20us for MT6583 */
#define  QB_TX_FENA_2_DAEN             0
   #else
#error "please check the AD/DA window settings"
   #endif
#else
#define  QB_RX_ADEN_2_FENA             0
#define  QB_RX_FENA_2_ADEN             0
#define  QB_TX_DAEN_2_FENA             0
#define  QB_TX_FENA_2_DAEN             0
#endif
/* ------------------------------------------------------------------------- */
#if IS_COSIM_ON_L1SIM_SUPPORT
#undef   QB_RX_ADEN_2_FENA
#undef   QB_RX_FENA_2_ADEN
#undef   QB_TX_DAEN_2_FENA
#undef   QB_TX_FENA_2_DAEN
#define  QB_RX_ADEN_2_FENA             1
#define  QB_RX_FENA_2_ADEN             0
#define  QB_TX_DAEN_2_FENA             1
#define  QB_TX_FENA_2_DAEN             0

#undef   QB_RX_FSYNC_2_FENA
#define  QB_RX_FSYNC_2_FENA            3
#endif

#ifdef L1D_TEST
#undef   QB_RX_FENA_2_FSYNC
   #if IS_CHIP_MT6225_AND_LATTER_VERSION || IS_EDGE_CHIP_MT6229_AND_LATTER_VERSION
#define  QB_RX_FENA_2_FSYNC            32
#undef   QB_TX_FENA_2_FSYNC
#define  QB_TX_FENA_2_FSYNC            152
   #else
#define  QB_RX_FENA_2_FSYNC            33   /* this value shall be 4N+1 */
   #endif
   #if IS_EDGE_SAIC_CHIP_MT6256_AND_LATTER_VERSION
#undef   QB_TX_FSYNC_2_FENA
#define  QB_TX_FSYNC_2_FENA            38   /* BFE additional loopback reset delay, tx_off only */
   #endif

#undef   BBTX_IQ_SWAP
#undef   BBRX_IQ_SWAP
#define  BBTX_IQ_SWAP                  0
#define  BBRX_IQ_SWAP                  0
#endif
/* ------------------------------------------------------------------------- */
#if IS_BBTXRX_CHIP_DESIGN_VER_2 || IS_BBTXRX_CHIP_DESIGN_VER_3
#define QB_BFE_TXCOMP_HYS              1 // BFE TX compensation hysteresis
#else
#define QB_BFE_TXCOMP_HYS              0
#endif
/* ------------------------------------------------------------------------- */
#if IS_TX_POWER_CONTROL_SUPPORT
#define TEMP_VALUE_DEFAULT       20    /* Default temperature: 20 oC */
#endif
/* ------------------------------------------------------------------------- */
/* For Gain Setting */
#if IS_RF_MT6176 || IS_RF_MT6179 || IS_RF_MT6177L || IS_RF_MT6177M
#define GAIN_PA                 800 /*     25(dB)  * 32, S10.5 */
#endif
/* ------------------------------------------------------------------------- */

/* Parameter read from Flash or EEPROM */

/*  Bit width of AFC DAC:                           */
/*                     Default     Option           */
/*  1)MT6208,FPGA      10-bit      13-bit           */
/*  2)MT6205           13-bit        X              */

//#define AFC_13bit     /* used to turn on 13-bit AFC DAC for MT6208 or FPGA */
//#define RX_ADC_14bit
#ifdef __MTK_TARGET__
   #if  (!defined(FPGA))&&(!defined(MT6208))
/*MT6205~*/ #ifndef  AFC_13bit
/*MT6205~*/ #define  AFC_13bit
/*MT6205~*/ #endif
   #endif
#endif

#ifdef AFC_13bit
/* Due to 13bits DAC */
   #if  IS_RF_MT6176 || IS_RF_MT6179 || IS_RF_MT6177L || IS_RF_MT6177M
#define  PSI_EE               (4096)            /* DAC initial value, sync with all RAT for Fix AFC */
   #else
#define  PSI_EE               (4100)            /* DAC initial value */
   #endif
#else
/* Due to 10bits DAC */
#define  PSI_EE               (517)             /* DAC initial value */
#endif
/* ------------------------------------------------------------------------- */

#if IS_RF_MT6176 || IS_RF_MT6179 || IS_RF_MT6177L || IS_RF_MT6177M
/*MT6176*/ #ifdef AFC_13bit
/*MT6176*/ #define  C_PSI_STA    (1266)   /* C_PSI_STA= sta^(-1)  * (2^12), sta=8.64   */
/*MT6176*/ #else
/*MT6176*/ #define  C_PSI_STA     (146)   /* C_PSI_STA= sta^(-1)  * (2^12), sta=28.05  */
/*MT6176*/ #endif
#endif

/* ------------------------------------------------------------------------- */
#endif

