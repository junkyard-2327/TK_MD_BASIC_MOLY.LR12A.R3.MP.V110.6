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
 *   l1d_mipi_pcore.h
 *
 * Project:
 * --------
 *   TK6291
 *
 * Description:
 * ------------
 *   MIPI constance defintion
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

#ifndef  _L1D_MIPI_PCORE_H_
#define  _L1D_MIPI_PCORE_H_
/*============================================================================== */

 #if IS_MIPI_SUPPORT

#ifndef  QB_MIPI_RX_ON0
#define  QB_MIPI_RX_ON0                        (-10000)
#endif
#ifndef  QB_MIPI_RX_ON1
#define  QB_MIPI_RX_ON1                        (-10000)
#endif
#ifndef  QB_MIPI_RX_ON2
#define  QB_MIPI_RX_ON2                        (-10000)
#endif
#ifndef  QB_MIPI_RX_ON3
#define  QB_MIPI_RX_ON3                        (-10000)
#endif
#ifndef  QB_MIPI_RX_ON4
#define  QB_MIPI_RX_ON4                        (-10000)
#endif
#ifndef  QB_MIPI_RX_ON5
#define  QB_MIPI_RX_ON5                        (-10000)
#endif
#ifndef  QB_MIPI_RX_ON6
#define  QB_MIPI_RX_ON6                        (-10000)
#endif
#ifndef  QB_MIPI_RX_ON7
#define  QB_MIPI_RX_ON7                        (-10000)
#endif
#ifndef  QB_MIPI_RX_OFF0
#define  QB_MIPI_RX_OFF0                        (10000)
#endif
#ifndef  QB_MIPI_RX_OFF1
#define  QB_MIPI_RX_OFF1                        (10000)
#endif
#ifndef  QB_MIPI_RX_OFF2
#define  QB_MIPI_RX_OFF2                        (10000)
#endif
#ifndef  QB_MIPI_RX_OFF3
#define  QB_MIPI_RX_OFF3                        (10000)
#endif
#ifndef  QB_MIPI_RX_OFF4
#define  QB_MIPI_RX_OFF4                        (10000)
#endif

#ifndef  QB_MIPI_TX_ON0
#define  QB_MIPI_TX_ON0                        (-10000)
#endif
#ifndef  QB_MIPI_TX_ON1
#define  QB_MIPI_TX_ON1                        (-10000)
#endif
#ifndef  QB_MIPI_TX_ON2
#define  QB_MIPI_TX_ON2                        (-10000)
#endif
#ifndef  QB_MIPI_TX_ON3
#define  QB_MIPI_TX_ON3                        (-10000)
#endif
#ifndef  QB_MIPI_TX_ON4
#define  QB_MIPI_TX_ON4                        (-10000)
#endif
#ifndef  QB_MIPI_TX_ON5
#define  QB_MIPI_TX_ON5                        (-10000)
#endif
#ifndef  QB_MIPI_TX_ON6
#define  QB_MIPI_TX_ON6                        (-10000)
#endif
#ifndef  QB_MIPI_TX_ON7
#define  QB_MIPI_TX_ON7                        (-10000)
#endif
#ifndef  QB_MIPI_TX_OFF0
#define  QB_MIPI_TX_OFF0                        (10000)
#endif
#ifndef  QB_MIPI_TX_OFF1
#define  QB_MIPI_TX_OFF1                        (10000)
#endif
#ifndef  QB_MIPI_TX_OFF2
#define  QB_MIPI_TX_OFF2                        (10000)
#endif
#ifndef  QB_MIPI_TX_OFF3
#define  QB_MIPI_TX_OFF3                        (10000)
#endif
#ifndef  QB_MIPI_TX_OFF4
#define  QB_MIPI_TX_OFF4                        (10000)
#endif

#ifndef  QB_MIPI_TXMID0
#define  QB_MIPI_TXMID0                         (-10000)
#endif
#ifndef  QB_MIPI_TXMID1
#define  QB_MIPI_TXMID1                         (-10000)
#endif

#define  TQ_MIPI_RX_ON0                (QB_MIPI_RX_ON0-QB_RON_2_FSYNC)
#define  TQ_MIPI_RX_ON1                (QB_MIPI_RX_ON1-QB_RON_2_FSYNC)
#define  TQ_MIPI_RX_ON2                (QB_MIPI_RX_ON2-QB_RON_2_FSYNC)
#define  TQ_MIPI_RX_ON3                (QB_MIPI_RX_ON3-QB_RON_2_FSYNC)
#define  TQ_MIPI_RX_ON4                (QB_MIPI_RX_ON4-QB_RON_2_FSYNC)
#define  TQ_MIPI_RX_ON5                (QB_MIPI_RX_ON5-QB_RON_2_FSYNC)
#define  TQ_MIPI_RX_ON6                (QB_MIPI_RX_ON6-QB_RON_2_FSYNC)
#define  TQ_MIPI_RX_ON7                (QB_MIPI_RX_ON7-QB_RON_2_FSYNC)

#define  TQ_MIPI_RX_OFF0               (QB_MIPI_RX_OFF0-QB_FSYNC_2_ROFF)
#define  TQ_MIPI_RX_OFF1               (QB_MIPI_RX_OFF1-QB_FSYNC_2_ROFF)
#define  TQ_MIPI_RX_OFF2               (QB_MIPI_RX_OFF2-QB_FSYNC_2_ROFF)
#define  TQ_MIPI_RX_OFF3               (QB_MIPI_RX_OFF3-QB_FSYNC_2_ROFF)
#define  TQ_MIPI_RX_OFF4               (QB_MIPI_RX_OFF4-QB_FSYNC_2_ROFF)

#define  TQ_MIPI_TX_ON0                (QB_MIPI_TX_ON0-QB_TON_2_FSYNC)
#define  TQ_MIPI_TX_ON1                (QB_MIPI_TX_ON1-QB_TON_2_FSYNC)
#define  TQ_MIPI_TX_ON2                (QB_MIPI_TX_ON2-QB_TON_2_FSYNC)
#define  TQ_MIPI_TX_ON3                (QB_MIPI_TX_ON3-QB_TON_2_FSYNC)
#define  TQ_MIPI_TX_ON4                (QB_MIPI_TX_ON4-QB_TON_2_FSYNC)
#define  TQ_MIPI_TX_ON5                (QB_MIPI_TX_ON5-QB_TON_2_FSYNC)
#define  TQ_MIPI_TX_ON6                (QB_MIPI_TX_ON6-QB_TON_2_FSYNC)
#define  TQ_MIPI_TX_ON7                (QB_MIPI_TX_ON7-QB_TON_2_FSYNC)

#define  TQ_MIPI_TX_OFF0               (QB_MIPI_TX_OFF0-QB_FSYNC_2_TOFF)
#define  TQ_MIPI_TX_OFF1               (QB_MIPI_TX_OFF1-QB_FSYNC_2_TOFF)
#define  TQ_MIPI_TX_OFF2               (QB_MIPI_TX_OFF2-QB_FSYNC_2_TOFF)
#define  TQ_MIPI_TX_OFF3               (QB_MIPI_TX_OFF3-QB_FSYNC_2_TOFF)
#define  TQ_MIPI_TX_OFF4               (QB_MIPI_TX_OFF4-QB_FSYNC_2_TOFF)

#if 0
   #if    !defined(QB_PR3) || !defined(QB_SR3)
/* under construction !*/
   #elif  IS_EDGE_CHIP_MT6229_AND_LATTER_VERSION
      #if   TQ_PR3A>TQ_SR3 && TQ_PR3A>TQ_PR3 && TQ_PR3A>TQ_MIPI_RX_OFF0 && TQ_PR3A>TQ_MIPI_RX_OFF1 && \
            TQ_PR3A>TQ_MIPI_RX_OFF2 && TQ_PR3A>TQ_MIPI_RX_OFF3 && TQ_PR3A>TQ_MIPI_RX_OFF4
/* under construction !*/
/* under construction !*/
      #elif TQ_PR3 >TQ_SR3 && TQ_PR3>TQ_PR3A && TQ_PR3>TQ_MIPI_RX_OFF0 && TQ_PR3>TQ_MIPI_RX_OFF1 && \
            TQ_PR3>TQ_MIPI_RX_OFF2 && TQ_PR3>TQ_MIPI_RX_OFF3 && TQ_PR3>TQ_MIPI_RX_OFF4
/* under construction !*/
/* under construction !*/
      #elif TQ_SR3 >TQ_PR3 && TQ_SR3>TQ_PR3A && TQ_SR3>TQ_MIPI_RX_OFF0 && TQ_SR3>TQ_MIPI_RX_OFF1 && \
            TQ_SR3>TQ_MIPI_RX_OFF2 && TQ_SR3>TQ_MIPI_RX_OFF3 && TQ_SR3>TQ_MIPI_RX_OFF4
/* under construction !*/
/* under construction !*/
      #elif TQ_MIPI_RX_OFF0>TQ_PR3 && TQ_MIPI_RX_OFF0>TQ_PR3A && TQ_MIPI_RX_OFF0>TQ_SR3 && TQ_MIPI_RX_OFF0>TQ_MIPI_RX_OFF1 && \
            TQ_MIPI_RX_OFF0>TQ_MIPI_RX_OFF2 && TQ_MIPI_RX_OFF0>TQ_MIPI_RX_OFF3 && TQ_MIPI_RX_OFF0>TQ_MIPI_RX_OFF4
/* under construction !*/
/* under construction !*/
      #elif TQ_MIPI_RX_OFF1>TQ_PR3 && TQ_MIPI_RX_OFF1>TQ_PR3A && TQ_MIPI_RX_OFF1>TQ_SR3 && TQ_MIPI_RX_OFF1>TQ_MIPI_RX_OFF0 && \
            TQ_MIPI_RX_OFF1>TQ_MIPI_RX_OFF2 && TQ_MIPI_RX_OFF1>TQ_MIPI_RX_OFF3 && TQ_MIPI_RX_OFF1>TQ_MIPI_RX_OFF4
/* under construction !*/
/* under construction !*/
      #elif TQ_MIPI_RX_OFF2>TQ_PR3 && TQ_MIPI_RX_OFF2>TQ_PR3A && TQ_MIPI_RX_OFF2>TQ_SR3 && TQ_MIPI_RX_OFF2>TQ_MIPI_RX_OFF0 && \
            TQ_MIPI_RX_OFF2>TQ_MIPI_RX_OFF1 && TQ_MIPI_RX_OFF2>TQ_MIPI_RX_OFF3 && TQ_MIPI_RX_OFF2>TQ_MIPI_RX_OFF4
/* under construction !*/
/* under construction !*/
      #elif TQ_MIPI_RX_OFF3>TQ_PR3 && TQ_MIPI_RX_OFF3>TQ_PR3A && TQ_MIPI_RX_OFF3>TQ_SR3 && TQ_MIPI_RX_OFF3>TQ_MIPI_RX_OFF0 && \
            TQ_MIPI_RX_OFF3>TQ_MIPI_RX_OFF1 && TQ_MIPI_RX_OFF3>TQ_MIPI_RX_OFF2 && TQ_MIPI_RX_OFF3>TQ_MIPI_RX_OFF4
/* under construction !*/
/* under construction !*/
      #else
/* under construction !*/
/* under construction !*/
      #endif
   #else
      #if   TQ_PR3 >TQ_SR3 && TQ_PR3>TQ_MIPI_RX_OFF0 && TQ_PR3>TQ_MIPI_RX_OFF1 && \
            TQ_PR3>TQ_MIPI_RX_OFF2 && TQ_PR3>TQ_MIPI_RX_OFF3 && TQ_PR3>TQ_MIPI_RX_OFF4
/* under construction !*/
/* under construction !*/
      #elif TQ_SR3 >TQ_PR3 && TQ_SR3>TQ_MIPI_RX_OFF0 && TQ_SR3>TQ_MIPI_RX_OFF1 && \
            TQ_SR3>TQ_MIPI_RX_OFF2 && TQ_SR3>TQ_MIPI_RX_OFF3 && TQ_SR3>TQ_MIPI_RX_OFF4
/* under construction !*/
/* under construction !*/
      #elif TQ_MIPI_RX_OFF0>TQ_PR3 && TQ_MIPI_RX_OFF0>TQ_SR3 && TQ_MIPI_RX_OFF0>TQ_MIPI_RX_OFF1 && \
            TQ_MIPI_RX_OFF0>TQ_MIPI_RX_OFF2 && TQ_MIPI_RX_OFF0>TQ_MIPI_RX_OFF3 && TQ_MIPI_RX_OFF0>TQ_MIPI_RX_OFF4
/* under construction !*/
/* under construction !*/
      #elif TQ_MIPI_RX_OFF1>TQ_PR3 && TQ_MIPI_RX_OFF1>TQ_SR3 && TQ_MIPI_RX_OFF1>TQ_MIPI_RX_OFF0 && \
            TQ_MIPI_RX_OFF1>TQ_MIPI_RX_OFF2 && TQ_MIPI_RX_OFF1>TQ_MIPI_RX_OFF3 && TQ_MIPI_RX_OFF1>TQ_MIPI_RX_OFF4
/* under construction !*/
/* under construction !*/
      #elif TQ_MIPI_RX_OFF2>TQ_PR3 && TQ_MIPI_RX_OFF2>TQ_SR3 && TQ_MIPI_RX_OFF2>TQ_MIPI_RX_OFF0 && \
            TQ_MIPI_RX_OFF2>TQ_MIPI_RX_OFF1 && TQ_MIPI_RX_OFF2>TQ_MIPI_RX_OFF3 && TQ_MIPI_RX_OFF2>TQ_MIPI_RX_OFF4
/* under construction !*/
/* under construction !*/
      #elif TQ_MIPI_RX_OFF3>TQ_PR3 && TQ_MIPI_RX_OFF3>TQ_SR3 && TQ_MIPI_RX_OFF3>TQ_MIPI_RX_OFF0 && \
            TQ_MIPI_RX_OFF3>TQ_MIPI_RX_OFF1 && TQ_MIPI_RX_OFF3>TQ_MIPI_RX_OFF2 && TQ_MIPI_RX_OFF3>TQ_MIPI_RX_OFF4
/* under construction !*/
/* under construction !*/
      #else
/* under construction !*/
/* under construction !*/
      #endif
   #endif
#endif
/*============================================================================== */

#ifdef L1_SIM
#undef   QB_MIPI_RX_OFF0
#define  QB_MIPI_RX_OFF0      6 /* MIPI OFF timing reduncing timing in Simulation only */
#endif

#endif /*IS_MIPI_SUPPORT*/

#endif /*End of "#ifndef _L1D_MIPI_PCORE_H_" */

