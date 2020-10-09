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
 *   lte_custom_rf_ant.h
 *
 * Project:
 * --------
 *   MT6293
 *
 * Description:
 * ------------
 *   MT6177L FDD/TDD RF ANT TUNER SETTING
 *
 * Author:
 * -------
 * -------
 *
 *   Tool Version : LTE Parsing Tool Gen93_v0.7_171208
 *   Excel Version : Gen93_6177L_1748_v1.0
 *
 *******************************************************************************/


#ifndef  _LTE_CUSTOM_RF_ANT_Set3_H_
#define  _LTE_CUSTOM_RF_ANT_Set3_H_
/* ------------------------------------------------------------------------- */

#include "el1d_rf_custom_data.h"




#define  IS_OLAT_ENABLE_Set3   SW_CAPABILITY_SUPPORT
//* ------------- PDATA_LTE_ANT_STATUS -----------------*/
#define  PDATA_LTE_ANT_STATUS_1_Set3         0x00000000
#define  PDATA_LTE_ANT_STATUS_2_Set3         0x00005000
#define  PDATA_LTE_ANT_STATUS_3_Set3         0x00002800
#define  PDATA_LTE_ANT_STATUS_4_Set3         0x00007800
#define  PDATA_LTE_ANT_STATUS_5_Set3         0x00000000
#define  PDATA_LTE_ANT_STATUS_6_Set3         0x00000000
#define  PDATA_LTE_ANT_STATUS_7_Set3         0x00000000
#define  PDATA_LTE_ANT_STATUS_8_Set3         0x00000000
#define  PDATA_LTE_ANT_STATUS_9_Set3         0x00000000
#define  PDATA_LTE_ANT_STATUS_10_Set3        0x00000000
#define  PDATA_LTE_ANT_STATUS_11_Set3        0x00000000
#define  PDATA_LTE_ANT_STATUS_12_Set3        0x00000000
#define  PDATA_LTE_ANT_STATUS_13_Set3        0x00000000
#define  PDATA_LTE_ANT_STATUS_14_Set3        0x00000000
#define  PDATA_LTE_ANT_STATUS_15_Set3        0x00000000
#define  PDATA_LTE_ANT_STATUS_16_Set3        0x00000000
//* ------------- ANT TUNNER PDATA_LTE_Band1 Start --------------------*/
#define  PDATA_LTE_Band1_PRANT_Set3   PDATA_LTE_ANT_STATUS_1_Set3
#define  PDATA_LTE_Band1_PTANT_Set3   PDATA_LTE_ANT_STATUS_1_Set3
//* ------------- ANT TUNNER PDATA_LTE_Band2 Start --------------------*/
#define  PDATA_LTE_Band2_PRANT_Set3   PDATA_LTE_ANT_STATUS_1_Set3
#define  PDATA_LTE_Band2_PTANT_Set3   PDATA_LTE_ANT_STATUS_1_Set3
//* ------------- ANT TUNNER PDATA_LTE_Band3 Start --------------------*/
#define  PDATA_LTE_Band3_PRANT_Set3   PDATA_LTE_ANT_STATUS_1_Set3
#define  PDATA_LTE_Band3_PTANT_Set3   PDATA_LTE_ANT_STATUS_1_Set3
//* ------------- ANT TUNNER PDATA_LTE_Band4 Start --------------------*/
#define  PDATA_LTE_Band4_PRANT_Set3   PDATA_LTE_ANT_STATUS_1_Set3
#define  PDATA_LTE_Band4_PTANT_Set3   PDATA_LTE_ANT_STATUS_1_Set3
//* ------------- ANT TUNNER PDATA_LTE_Band5 Start --------------------*/
#define  PDATA_LTE_Band5_PRANT_Set3   PDATA_LTE_ANT_STATUS_2_Set3
#define  PDATA_LTE_Band5_PTANT_Set3   PDATA_LTE_ANT_STATUS_2_Set3
//* ------------- ANT TUNNER PDATA_LTE_Band7 Start --------------------*/
#define  PDATA_LTE_Band7_PRANT_Set3   PDATA_LTE_ANT_STATUS_1_Set3
#define  PDATA_LTE_Band7_PTANT_Set3   PDATA_LTE_ANT_STATUS_1_Set3
//* ------------- ANT TUNNER PDATA_LTE_Band8 Start --------------------*/
#define  PDATA_LTE_Band8_PRANT_Set3   PDATA_LTE_ANT_STATUS_1_Set3
#define  PDATA_LTE_Band8_PTANT_Set3   PDATA_LTE_ANT_STATUS_1_Set3
//* ------------- ANT TUNNER PDATA_LTE_Band12 Start --------------------*/
#define  PDATA_LTE_Band12_PRANT_Set3   PDATA_LTE_ANT_STATUS_3_Set3
#define  PDATA_LTE_Band12_PTANT_Set3   PDATA_LTE_ANT_STATUS_3_Set3
//* ------------- ANT TUNNER PDATA_LTE_Band13 Start --------------------*/
#define  PDATA_LTE_Band13_PRANT_Set3   PDATA_LTE_ANT_STATUS_3_Set3
#define  PDATA_LTE_Band13_PTANT_Set3   PDATA_LTE_ANT_STATUS_3_Set3
//* ------------- ANT TUNNER PDATA_LTE_Band14 Start --------------------*/
#define  PDATA_LTE_Band14_PRANT_Set3   PDATA_LTE_ANT_STATUS_3_Set3
#define  PDATA_LTE_Band14_PTANT_Set3   PDATA_LTE_ANT_STATUS_3_Set3
//* ------------- ANT TUNNER PDATA_LTE_Band17 Start --------------------*/
#define  PDATA_LTE_Band17_PRANT_Set3   PDATA_LTE_ANT_STATUS_3_Set3
#define  PDATA_LTE_Band17_PTANT_Set3   PDATA_LTE_ANT_STATUS_3_Set3
//* ------------- ANT TUNNER PDATA_LTE_Band20 Start --------------------*/
#define  PDATA_LTE_Band20_PRANT_Set3   PDATA_LTE_ANT_STATUS_2_Set3
#define  PDATA_LTE_Band20_PTANT_Set3   PDATA_LTE_ANT_STATUS_2_Set3
//* ------------- ANT TUNNER PDATA_LTE_Band25 Start --------------------*/
#define  PDATA_LTE_Band25_PRANT_Set3   PDATA_LTE_ANT_STATUS_1_Set3
#define  PDATA_LTE_Band25_PTANT_Set3   PDATA_LTE_ANT_STATUS_1_Set3
//* ------------- ANT TUNNER PDATA_LTE_Band26 Start --------------------*/
#define  PDATA_LTE_Band26_PRANT_Set3   PDATA_LTE_ANT_STATUS_2_Set3
#define  PDATA_LTE_Band26_PTANT_Set3   PDATA_LTE_ANT_STATUS_2_Set3
//* ------------- ANT TUNNER PDATA_LTE_Band29 Start --------------------*/
#define  PDATA_LTE_Band29_PRANT_Set3   PDATA_LTE_ANT_STATUS_3_Set3
#define  PDATA_LTE_Band29_PTANT_Set3   PDATA_LTE_ANT_STATUS_3_Set3
//* ------------- ANT TUNNER PDATA_LTE_Band30 Start --------------------*/
#define  PDATA_LTE_Band30_PRANT_Set3   PDATA_LTE_ANT_STATUS_3_Set3
#define  PDATA_LTE_Band30_PTANT_Set3   PDATA_LTE_ANT_STATUS_3_Set3
//* ------------- ANT TUNNER PDATA_LTE_Band34 Start --------------------*/
#define  PDATA_LTE_Band34_PRANT_Set3   PDATA_LTE_ANT_STATUS_1_Set3
#define  PDATA_LTE_Band34_PTANT_Set3   PDATA_LTE_ANT_STATUS_1_Set3
//* ------------- ANT TUNNER PDATA_LTE_Band38 Start --------------------*/
#define  PDATA_LTE_Band38_PRANT_Set3   PDATA_LTE_ANT_STATUS_1_Set3
#define  PDATA_LTE_Band38_PTANT_Set3   PDATA_LTE_ANT_STATUS_1_Set3
//* ------------- ANT TUNNER PDATA_LTE_Band39 Start --------------------*/
#define  PDATA_LTE_Band39_PRANT_Set3   PDATA_LTE_ANT_STATUS_1_Set3
#define  PDATA_LTE_Band39_PTANT_Set3   PDATA_LTE_ANT_STATUS_1_Set3
//* ------------- ANT TUNNER PDATA_LTE_Band40 Start --------------------*/
#define  PDATA_LTE_Band40_PRANT_Set3   PDATA_LTE_ANT_STATUS_1_Set3
#define  PDATA_LTE_Band40_PTANT_Set3   PDATA_LTE_ANT_STATUS_1_Set3
//* ------------- ANT TUNNER PDATA_LTE_Band41 Start --------------------*/
#define  PDATA_LTE_Band41_PRANT_Set3   PDATA_LTE_ANT_STATUS_1_Set3
#define  PDATA_LTE_Band41_PTANT_Set3   PDATA_LTE_ANT_STATUS_1_Set3
//* ------------- ANT TUNNER PDATA_LTE_Band66 Start --------------------*/
#define  PDATA_LTE_Band66_PRANT_Set3   PDATA_LTE_ANT_STATUS_1_Set3
#define  PDATA_LTE_Band66_PTANT_Set3   PDATA_LTE_ANT_STATUS_1_Set3
//* ------------- ANT TUNNER PDATA_LTE_Band71 Start --------------------*/
#define  PDATA_LTE_Band71_PRANT_Set3   PDATA_LTE_ANT_STATUS_4_Set3
#define  PDATA_LTE_Band71_PTANT_Set3   PDATA_LTE_ANT_STATUS_4_Set3










/* ------------------------------------------------------------------------- */
#endif
