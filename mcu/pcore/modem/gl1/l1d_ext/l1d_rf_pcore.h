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
 *   l1d_rf_pcore.h
 *
 * Project:
 * --------
 *   TK6291
 *
 * Description:
 * ------------
 *   RF constance defintion
 *
 * Author:
 * -------
 * -------
 *
 *------------------------------------------------------------------------------
 *------------------------------------------------------------------------------
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 *
 * removed!
 * removed!
 *
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
 *
 *******************************************************************************/

#ifndef  _L1D_RF_PCORE_H_
#define  _L1D_RF_PCORE_H_
/* ------------------------------------------------------------------------- */

#if IS_RF_MT6176 || IS_RF_MT6179 || IS_RF_MT6177L || IS_RF_MT6177M
/*--------------------------------------------------------*/
/*   BFE Setting                                          */
/*--------------------------------------------------------*/
   #if IS_DYNAMIC_G_E_TXWIN_POSITION_SUPPORT
#define  TQ_EPSK_TX_DELAY             8
   #endif
#endif


#ifndef  QB_TX_SAMPLE_OFFSET_GMSK
#define  QB_TX_SAMPLE_OFFSET_GMSK      0
#endif

#ifndef  QB_TX_SAMPLE_OFFSET_EPSK
#define  QB_TX_SAMPLE_OFFSET_EPSK      0
#endif


#ifndef  IS_EGSM900_DISABLE
#define  IS_EGSM900_DISABLE            0
#endif

#if IS_2G_RXD_SUPPORT
#define RXD_MODE                    L1D_RAS_MODE
#define C1_P_THD_HIGH_RXLEV        -32768
#define C1_THD_HIGH_RXLEV          -110
#ifdef __2G_RXD_RAS_IMPROVE_FOR_GCF_TEST__
#define C1_THD_LOW_RXLEV           -108
#else
#define C1_THD_LOW_RXLEV           -105
#endif

#define C1_P_D_THD_RXLEV_DIFF      32
#define C2_THD_RXLEV               -80
#define C2_THD_TSCSNR              32767
#define C2_THD_PRESNR              256
#define C3_THD_OBB_DEDICATED       4
#define C3_THD_OBB_IDLE            0
   #if IS_2G_RAS_CROSS_MODE_SUPPORT
#define RXD_THD_RXLEV_DIFF         3
   #else
#define RXD_THD_RXLEV_DIFF         32767
   #endif
#define PERIOD_IDLE                816
#define PERIOD_DEDICATED           208
   #if IS_2G_RXD_ENHANCEMENT_SUPPORT
#define OBB_PERIOD_DEDICATED       26
   #endif
#endif

#endif

