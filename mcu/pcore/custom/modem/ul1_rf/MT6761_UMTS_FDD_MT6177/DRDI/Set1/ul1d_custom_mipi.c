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
 * u1ld_custom_mipi.c
 *
 * Project:
 * --------
 * TK6291
 *
 * Description:
 * ------------
 *
 *
 * Author:
 * -------
 * -------
 *

===============================================================================*/

#include "kal_general_types.h"
#include "ul1d_custom_mipi.h"
#include "ul1d_custom_rf.h"
#include "mml1_custom_mipi.h"
#include "ul1d_mipi_public.h"
#include "mml1_drdi.h"

#if defined(L1_SIM)
#include "SymWrap.h"
#endif
/*===============================================================================*/

//#define MIPI_INITIAL_CW_NUM 0
#if (IS_3G_MIPI_SUPPORT)

const UL1_MIPI_EVENT_TABLE_T UMTS_MIPI_RX_EVENT_UMTSBandNone_Set1[UL1_MIPI_RX_EVENT_NUM] = 
{
	 /* No.     elm type , data idx       , evt_type       , evt_offset     */
   /*                    { start, stop },                  ( us )         */
   { /* 0  */ UL1_MIPI_NULL ,{ 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 1  */ UL1_MIPI_NULL ,{ 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 2  */ UL1_MIPI_NULL ,{ 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 3  */ UL1_MIPI_NULL ,{ 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 4  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 5  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 6  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 7  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 8  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 9  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 10 */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 11 */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 12 */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 13 */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 14 */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 15 */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 16 */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 17 */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 18 */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 19 */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 20 */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 21 */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 22 */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 23 */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
};


const UL1_MIPI_EVENT_TABLE_T UMTS_MIPI_RX_EVENT_UMTSBand1_Set1[UL1_MIPI_RX_EVENT_NUM] = 
{
   /* No.     elm type , data idx       , evt_type       , evt_offset     */
   /*                    { start, stop },                  ( us )         */
   { /* 0  */ UL1_MIPI_ASM,      { 0    , 0    }, UL1_MIPI_TRX_ON, US2CHIPCNT(200)     },
   { /* 1  */ UL1_MIPI_ASM_RXD,  { 1    , 1    }, UL1_MIPI_TRX_ON, US2CHIPCNT(200)     },
   { /* 2  */ UL1_MIPI_ASM,      { 2    , 3    }, UL1_MIPI_TRX_OFF,US2CHIPCNT(10)     },
   { /* 3  */ UL1_MIPI_ASM_RXD,  { 4    , 4    }, UL1_MIPI_TRX_OFF,US2CHIPCNT(10)     },
   { /* 4  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 5  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 6  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 7  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 8  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 9  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 10 */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 11 */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 12 */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 13 */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 14 */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 15 */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 16 */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 17 */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 18 */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 19 */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 20 */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 21 */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 22 */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 23 */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
};


const UL1_MIPI_EVENT_TABLE_T UMTS_MIPI_RX_EVENT_UMTSBand2_Set1[UL1_MIPI_RX_EVENT_NUM] = 
{
   /* No.     elm type , data idx       , evt_type       , evt_offset     */
   /*                    { start, stop },                  ( us )         */
   { /* 0  */ UL1_MIPI_ASM,      { 0    , 0    }, UL1_MIPI_TRX_ON, US2CHIPCNT(200)     },
   { /* 1  */ UL1_MIPI_ASM_RXD,  { 1    , 1    }, UL1_MIPI_TRX_ON, US2CHIPCNT(200)     },
   { /* 2  */ UL1_MIPI_ASM,      { 2    , 3    }, UL1_MIPI_TRX_OFF,US2CHIPCNT(10)     },
   { /* 3  */ UL1_MIPI_ASM_RXD,  { 4    , 4    }, UL1_MIPI_TRX_OFF,US2CHIPCNT(10)     },
   { /* 4  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 5  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 6  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 7  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 8  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 9  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 10 */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 11 */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 12 */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 13 */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 14 */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 15 */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 16 */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 17 */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 18 */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 19 */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 20 */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 21 */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 22 */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 23 */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
};

const UL1_MIPI_EVENT_TABLE_T UMTS_MIPI_RX_EVENT_UMTSBand4_Set1[UL1_MIPI_RX_EVENT_NUM] = 
{
   /* No.     elm type , data idx       , evt_type       , evt_offset     */
   /*                    { start, stop },                  ( us )         */
   { /* 0  */ UL1_MIPI_ASM,      { 0    , 0    }, UL1_MIPI_TRX_ON, US2CHIPCNT(200)     },
   { /* 1  */ UL1_MIPI_ASM_RXD,  { 1    , 1    }, UL1_MIPI_TRX_ON, US2CHIPCNT(200)     },
   { /* 2  */ UL1_MIPI_ASM,      { 2    , 3    }, UL1_MIPI_TRX_OFF,US2CHIPCNT(10)     },
   { /* 3  */ UL1_MIPI_ASM_RXD,  { 4    , 4    }, UL1_MIPI_TRX_OFF,US2CHIPCNT(10)     },
   { /* 4  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 5  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 6  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 7  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 8  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 9  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 10 */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 11 */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 12 */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 13 */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 14 */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 15 */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 16 */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 17 */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 18 */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 19 */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 20 */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 21 */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 22 */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 23 */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
};


const UL1_MIPI_EVENT_TABLE_T UMTS_MIPI_RX_EVENT_UMTSBand5_Set1[UL1_MIPI_RX_EVENT_NUM] = 
{
   /* No.     elm type , data idx       , evt_type       , evt_offset     */
   /*                    { start, stop },                  ( us )         */
   { /* 0  */ UL1_MIPI_ASM,      { 0    , 0    }, UL1_MIPI_TRX_ON, US2CHIPCNT(200)     },
   { /* 1  */ UL1_MIPI_ASM_RXD,  { 1    , 1    }, UL1_MIPI_TRX_ON, US2CHIPCNT(200)     },
   { /* 2  */ UL1_MIPI_ASM,      { 2    , 3    }, UL1_MIPI_TRX_OFF,US2CHIPCNT(10)     },
   { /* 3  */ UL1_MIPI_ASM_RXD,  { 4    , 4    }, UL1_MIPI_TRX_OFF,US2CHIPCNT(10)     },
   { /* 4  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 5  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 6  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 7  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 8  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 9  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 10 */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 11 */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 12 */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 13 */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 14 */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 15 */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 16 */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 17 */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 18 */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 19 */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 20 */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 21 */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 22 */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 23 */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
};

const UL1_MIPI_EVENT_TABLE_T UMTS_MIPI_RX_EVENT_UMTSBand8_Set1[UL1_MIPI_RX_EVENT_NUM] = 
{
   /* No.     elm type , data idx       , evt_type       , evt_offset     */
   /*                    { start, stop },                  ( us )         */
   { /* 0  */ UL1_MIPI_ASM,      { 0    , 0    }, UL1_MIPI_TRX_ON, US2CHIPCNT(200)     },
   { /* 1  */ UL1_MIPI_ASM_RXD,  { 1    , 1    }, UL1_MIPI_TRX_ON, US2CHIPCNT(200)     },
   { /* 2  */ UL1_MIPI_ASM,      { 2    , 3    }, UL1_MIPI_TRX_OFF,US2CHIPCNT(10)     },
   { /* 3  */ UL1_MIPI_ASM_RXD,  { 4    , 4    }, UL1_MIPI_TRX_OFF,US2CHIPCNT(10)     },
   { /* 4  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 5  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 6  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 7  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 8  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 9  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 10 */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 11 */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 12 */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 13 */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 14 */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 15 */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 16 */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 17 */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 18 */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 19 */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 20 */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 21 */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 22 */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 23 */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
};

const UL1_MIPI_EVENT_TABLE_T UMTS_MIPI_RX_EVENT_UMTSBand3_Set1[] = {{0}};
const UL1_MIPI_EVENT_TABLE_T UMTS_MIPI_RX_EVENT_UMTSBand6_Set1[] = {{0}};
const UL1_MIPI_EVENT_TABLE_T UMTS_MIPI_RX_EVENT_UMTSBand9_Set1[] = {{0}};
const UL1_MIPI_EVENT_TABLE_T UMTS_MIPI_RX_EVENT_UMTSBand11_Set1[] = {{0}};
const UL1_MIPI_EVENT_TABLE_T UMTS_MIPI_RX_EVENT_UMTSBand19_Set1[] = {{0}};

const UL1_MIPI_EVENT_TABLE_T* const UMTS_MIPI_RX_EVENT_TABLE_Set1[] =
{
   M_UMTS_RX_EVENT(UMTSBandNone, Set1),          /*UMTSBandNone*/          
   M_UMTS_RX_EVENT(RX_BAND_INDICATOR_0_Set1, Set1),   /*UMTS_Route0*/
   M_UMTS_RX_EVENT(RX_BAND_INDICATOR_1_Set1, Set1),   /*UMTS_Route1*/
   M_UMTS_RX_EVENT(RX_BAND_INDICATOR_2_Set1, Set1),   /*UMTS_Route2*/   
   M_UMTS_RX_EVENT(RX_BAND_INDICATOR_3_Set1, Set1),   /*UMTS_Route3*/   
   M_UMTS_RX_EVENT(RX_BAND_INDICATOR_4_Set1, Set1),   /*UMTS_Route4*/
#if IS_3G_RF_NCCA_SUPPORT
   M_UMTS_RX_EVENT(MIPI_RX_ROUTE_IND_5, Set1),   /*UMTS_Route5*/
   M_UMTS_RX_EVENT(MIPI_RX_ROUTE_IND_6, Set1),   /*UMTS_Route6*/
   M_UMTS_RX_EVENT(MIPI_RX_ROUTE_IND_7, Set1),   /*UMTS_Route7*/
   M_UMTS_RX_EVENT(MIPI_RX_ROUTE_IND_8, Set1),   /*UMTS_Route8*/
   M_UMTS_RX_EVENT(MIPI_RX_ROUTE_IND_9, Set1),   /*UMTS_Route9*/
   M_UMTS_RX_EVENT(MIPI_RX_ROUTE_IND_10, Set1),  /*UMTS_Route10*/
   M_UMTS_RX_EVENT(MIPI_RX_ROUTE_IND_11, Set1),  /*UMTS_Route11*/
   M_UMTS_RX_EVENT(MIPI_RX_ROUTE_IND_12, Set1),  /*UMTS_Route12*/
   M_UMTS_RX_EVENT(MIPI_RX_ROUTE_IND_13, Set1),  /*UMTS_Route13*/
   M_UMTS_RX_EVENT(MIPI_RX_ROUTE_IND_14, Set1),  /*UMTS_Route14*/
#endif
};

const UL1_MIPI_DATA_SUBBAND_TABLE_T UMTS_MIPI_RX_DATA_UMTSBandNone_Set1[UL1_MIPI_RX_DATA_NUM] = 
{
   //No.      elm type , port_sel      ,  data_seq  , user id,         { { sub 0 ,addr, data },{ sub 1 ,addr, data },{ sub 2 ,addr, data}, { sub 3, addr, data  }, { sub 4, addr data  } },
   { /* 0  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL , MIPI_USID_INIT0_Set1 , { { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},       { 0x0 ,{0x0, 0x0}}} },
   { /* 1  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL , MIPI_USID_INIT0_Set1 , { { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},       { 0x0 ,{0x0, 0x0}}} },
   { /* 2  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL , MIPI_USID_INIT0_Set1 , { { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},       { 0x0 ,{0x0, 0x0}}} },
   { /* 3  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL , MIPI_USID_INIT0_Set1 , { { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},       { 0x0 ,{0x0, 0x0}}} },
   { /* 4  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL , MIPI_USID_INIT0_Set1 , { { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},       { 0x0 ,{0x0, 0x0}}} },
   { /* 5  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL , MIPI_USID_INIT0_Set1 , { { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},       { 0x0 ,{0x0, 0x0}}} },
   { /* 6  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL , MIPI_USID_INIT0_Set1 , { { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},       { 0x0 ,{0x0, 0x0}}} },
   { /* 7  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL , MIPI_USID_INIT0_Set1 , { { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},       { 0x0 ,{0x0, 0x0}}} },
   { /* 8  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL , MIPI_USID_INIT0_Set1 , { { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},       { 0x0 ,{0x0, 0x0}}} },
   { /* 9  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL , MIPI_USID_INIT0_Set1 , { { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},       { 0x0 ,{0x0, 0x0}}} },
   { /* 10 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL , MIPI_USID_INIT0_Set1 , { { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},       { 0x0 ,{0x0, 0x0}}} },
   { /* 11 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL , MIPI_USID_INIT0_Set1 , { { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},       { 0x0 ,{0x0, 0x0}}} },
   { /* 12 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL , MIPI_USID_INIT0_Set1 , { { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},       { 0x0 ,{0x0, 0x0}}} },
   { /* 13 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL , MIPI_USID_INIT0_Set1 , { { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},       { 0x0 ,{0x0, 0x0}}} },
   { /* 14 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL , MIPI_USID_INIT0_Set1 , { { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},       { 0x0 ,{0x0, 0x0}}} },
   { /* 15 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL , MIPI_USID_INIT0_Set1 , { { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},       { 0x0 ,{0x0, 0x0}}} },
   { /* 16 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL , MIPI_USID_INIT0_Set1 , { { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},       { 0x0 ,{0x0, 0x0}}} },
   { /* 17 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL , MIPI_USID_INIT0_Set1 , { { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},       { 0x0 ,{0x0, 0x0}}} },
   { /* 18 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL , MIPI_USID_INIT0_Set1 , { { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},       { 0x0 ,{0x0, 0x0}}} },
   { /* 19 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL , MIPI_USID_INIT0_Set1 , { { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},       { 0x0 ,{0x0, 0x0}}} },
   { /* 20 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL , MIPI_USID_INIT0_Set1 , { { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},       { 0x0 ,{0x0, 0x0}}} },
   { /* 21 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL , MIPI_USID_INIT0_Set1 , { { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},       { 0x0 ,{0x0, 0x0}}} },
   { /* 22 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL , MIPI_USID_INIT0_Set1 , { { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},       { 0x0 ,{0x0, 0x0}}} },
   { /* 23 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL , MIPI_USID_INIT0_Set1 , { { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},       { 0x0 ,{0x0, 0x0}}} },
   { /* 24 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL , MIPI_USID_INIT0_Set1 , { { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},       { 0x0 ,{0x0, 0x0}}} },
   { /* 25 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL , MIPI_USID_INIT0_Set1 , { { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},       { 0x0 ,{0x0, 0x0}}} },
   { /* 26 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL , MIPI_USID_INIT0_Set1 , { { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},       { 0x0 ,{0x0, 0x0}}} },
   { /* 27 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL , MIPI_USID_INIT0_Set1 , { { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},       { 0x0 ,{0x0, 0x0}}} },
};

const UL1_MIPI_DATA_SUBBAND_TABLE_T UMTS_MIPI_RX_DATA_UMTSBand1_Set1[UL1_MIPI_RX_DATA_NUM] = 
{
   //No.      elm type , port_sel      ,  data_seq  , user id,         { { sub 0 ,addr, data }},{ sub 1 ,addr, data }},{ sub 2 ,addr, data}}, { sub 3, addr, data  }}, { sub 4, addr data  } }},
   { /* 0  */ UL1_MIPI_ASM,      UL1_MIPI_PORT0,  UL1_REG_W     , MIPI_USID_ASM0_Set1, { { 21124 ,{0x05, 0x05}}, { 21262 ,{0x05, 0x05}}, { 21400 ,{0x05, 0x05}}, { 21538  ,{0x05, 0x05}}, { 21676 ,{0x05, 0x05}}} },
   { /* 1  */ UL1_MIPI_ASM_RXD,  UL1_MIPI_PORT2,  UL1_REG_W     , MIPI_USID_ASM1_Set1, { { 21124 ,{0x00, 0x04}}, { 21262 ,{0x00, 0x04}}, { 21400 ,{0x00, 0x04}}, { 21538  ,{0x00, 0x04}}, { 21676 ,{0x00, 0x04}}} },
   { /* 2  */ UL1_MIPI_ASM,      UL1_MIPI_PORT0,  UL1_REG_W     , MIPI_USID_ASM0_Set1, { { 21124 ,{0x05, 0x00}}, { 21262 ,{0x05, 0x00}}, { 21400 ,{0x05, 0x00}}, { 21538  ,{0x05, 0x00}}, { 21676 ,{0x05, 0x00}}} },
   { /* 3  */ UL1_MIPI_ASM,      UL1_MIPI_PORT0,  UL1_REG_W     , MIPI_USID_ASM0_Set1, { { 21124 ,{0x04, 0x00}}, { 21262 ,{0x04, 0x00}}, { 21400 ,{0x04, 0x00}}, { 21538  ,{0x04, 0x00}}, { 21676 ,{0x04, 0x00}}} },
   { /* 4  */ UL1_MIPI_ASM_RXD,  UL1_MIPI_PORT2,  UL1_REG_W     , MIPI_USID_ASM1_Set1, { { 21124 ,{0x00, 0x00}}, { 21262 ,{0x00, 0x00}}, { 21400 ,{0x00, 0x00}}, { 21538  ,{0x00, 0x00}}, { 21676 ,{0x00, 0x00}}} },
   { /* 5  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set1,{ { 21124 ,{0x0,  0x0}},  { 21262 ,{0x0,  0x0}},   { 21400 ,{0x0, 0x0}},   { 21538  ,{0x0, 0x0}},   { 21676 ,{0x0,  0x0}}} },
   { /* 6  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set1,{ { 21124 ,{0x0,  0x0}},  { 21262 ,{0x0,  0x0}},   { 21400 ,{0x0, 0x0}},   { 21538  ,{0x0, 0x0}},   { 21676 ,{0x0,  0x0}}} },
   { /* 7  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set1,{ { 21124 ,{0x0,  0x0}},  { 21262 ,{0x0,  0x0}},   { 21400 ,{0x0, 0x0}},   { 21538  ,{0x0, 0x0}},   { 21676 ,{0x0,  0x0}}} },
   { /* 8  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set1,{ { 21124 ,{0x0,  0x0}},  { 21262 ,{0x0,  0x0}},   { 21400 ,{0x0, 0x0}},   { 21538  ,{0x0, 0x0}},   { 21676 ,{0x0,  0x0}}} },
   { /* 9  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set1,{ { 21124 ,{0x0,  0x0}},  { 21262 ,{0x0,  0x0}},   { 21400 ,{0x0, 0x0}},   { 21538  ,{0x0, 0x0}},   { 21676 ,{0x0,  0x0}}} },
   { /* 10 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set1,{ { 21124 ,{0x0,  0x0}},  { 21262 ,{0x0,  0x0}},   { 21400 ,{0x0, 0x0}},   { 21538  ,{0x0, 0x0}},   { 21676 ,{0x0,  0x0}}} },
   { /* 11 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set1,{ { 21124 ,{0x0,  0x0}},  { 21262 ,{0x0,  0x0}},   { 21400 ,{0x0, 0x0}},   { 21538  ,{0x0, 0x0}},   { 21676 ,{0x0,  0x0}}} },
   { /* 12 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set1,{ { 21124 ,{0x0,  0x0}},  { 21262 ,{0x0,  0x0}},   { 21400 ,{0x0, 0x0}},   { 21538  ,{0x0, 0x0}},   { 21676 ,{0x0,  0x0}}} },
   { /* 13 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set1,{ { 21124 ,{0x0,  0x0}},  { 21262 ,{0x0,  0x0}},   { 21400 ,{0x0, 0x0}},   { 21538  ,{0x0, 0x0}},   { 21676 ,{0x0,  0x0}}} },
   { /* 14 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set1,{ { 21124 ,{0x0,  0x0}},  { 21262 ,{0x0,  0x0}},   { 21400 ,{0x0, 0x0}},   { 21538  ,{0x0, 0x0}},   { 21676 ,{0x0,  0x0}}} },
   { /* 15 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set1,{ { 21124 ,{0x0,  0x0}},  { 21262 ,{0x0,  0x0}},   { 21400 ,{0x0, 0x0}},   { 21538  ,{0x0, 0x0}},   { 21676 ,{0x0,  0x0}}} },
   { /* 16 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set1,{ { 21124 ,{0x0,  0x0}},  { 21262 ,{0x0,  0x0}},   { 21400 ,{0x0, 0x0}},   { 21538  ,{0x0, 0x0}},   { 21676 ,{0x0,  0x0}}} },
   { /* 17 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set1,{ { 21124 ,{0x0,  0x0}},  { 21262 ,{0x0,  0x0}},   { 21400 ,{0x0, 0x0}},   { 21538  ,{0x0, 0x0}},   { 21676 ,{0x0,  0x0}}} },
   { /* 18 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set1,{ { 21124 ,{0x0,  0x0}},  { 21262 ,{0x0,  0x0}},   { 21400 ,{0x0, 0x0}},   { 21538  ,{0x0, 0x0}},   { 21676 ,{0x0,  0x0}}} },
   { /* 19 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set1,{ { 21124 ,{0x0,  0x0}},  { 21262 ,{0x0,  0x0}},   { 21400 ,{0x0, 0x0}},   { 21538  ,{0x0, 0x0}},   { 21676 ,{0x0,  0x0}}} },
   { /* 20 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set1,{ { 21124 ,{0x0,  0x0}},  { 21262 ,{0x0,  0x0}},   { 21400 ,{0x0, 0x0}},   { 21538  ,{0x0, 0x0}},   { 21676 ,{0x0,  0x0}}} },
   { /* 21 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set1,{ { 21124 ,{0x0,  0x0}},  { 21262 ,{0x0,  0x0}},   { 21400 ,{0x0, 0x0}},   { 21538  ,{0x0, 0x0}},   { 21676 ,{0x0,  0x0}}} },
   { /* 22 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set1,{ { 21124 ,{0x0,  0x0}},  { 21262 ,{0x0,  0x0}},   { 21400 ,{0x0, 0x0}},   { 21538  ,{0x0, 0x0}},   { 21676 ,{0x0,  0x0}}} },
   { /* 23 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set1,{ { 21124 ,{0x0,  0x0}},  { 21262 ,{0x0,  0x0}},   { 21400 ,{0x0, 0x0}},   { 21538  ,{0x0, 0x0}},   { 21676 ,{0x0,  0x0}}} },
   { /* 24 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set1,{ { 21124 ,{0x0,  0x0}},  { 21262 ,{0x0,  0x0}},   { 21400 ,{0x0, 0x0}},   { 21538  ,{0x0, 0x0}},   { 21676 ,{0x0,  0x0}}} },
   { /* 25 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set1,{ { 21124 ,{0x0,  0x0}},  { 21262 ,{0x0,  0x0}},   { 21400 ,{0x0, 0x0}},   { 21538  ,{0x0, 0x0}},   { 21676 ,{0x0,  0x0}}} },
   { /* 26 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set1,{ { 21124 ,{0x0,  0x0}},  { 21262 ,{0x0,  0x0}},   { 21400 ,{0x0, 0x0}},   { 21538  ,{0x0, 0x0}},   { 21676 ,{0x0,  0x0}}} },
   { /* 27 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set1,{ { 21124 ,{0x0,  0x0}},  { 21262 ,{0x0,  0x0}},   { 21400 ,{0x0, 0x0}},   { 21538  ,{0x0, 0x0}},   { 21676 ,{0x0,  0x0}}} },

};

const UL1_MIPI_DATA_SUBBAND_TABLE_T UMTS_MIPI_RX_DATA_UMTSBand2_Set1[UL1_MIPI_RX_DATA_NUM] = 
{
   //No.      elm type , port_sel      ,  data_seq  , user id,         { { sub 0 ,addr, data }},{ sub 1 ,addr, data }},{ sub 2 ,addr, data}}, { sub 3, addr, data  }}, { sub 4, addr data  } }},
   { /* 0  */ UL1_MIPI_ASM,      UL1_MIPI_PORT0,  UL1_REG_W     , MIPI_USID_ASM0_Set1,  { { 19324 ,{0x05, 0x03}}, { 19462 ,{0x05, 0x03}}, { 19600 ,{0x05, 0x03}}, { 19738  ,{0x05, 0x03}}, { 19876 ,{0x05, 0x03}}} },
   { /* 1  */ UL1_MIPI_ASM_RXD,  UL1_MIPI_PORT2,  UL1_REG_W     , MIPI_USID_ASM1_Set1,  { { 19324 ,{0x00, 0x05}}, { 19462 ,{0x00, 0x05}}, { 19600 ,{0x00, 0x05}}, { 19738  ,{0x00, 0x05}}, { 19876 ,{0x00, 0x05}}} },
   { /* 2  */ UL1_MIPI_ASM,      UL1_MIPI_PORT0,  UL1_REG_W     , MIPI_USID_ASM0_Set1,  { { 19324 ,{0x05, 0x00}}, { 19462 ,{0x05, 0x00}}, { 19600 ,{0x05, 0x00}}, { 19738  ,{0x05, 0x00}}, { 19876 ,{0x05, 0x00}}} },
   { /* 3  */ UL1_MIPI_ASM,      UL1_MIPI_PORT0,  UL1_REG_W     , MIPI_USID_ASM0_Set1,  { { 19324 ,{0x04, 0x00}}, { 19462 ,{0x04, 0x00}}, { 19600 ,{0x04, 0x00}}, { 19738  ,{0x04, 0x00}}, { 19876 ,{0x04, 0x00}}} },
   { /* 4  */ UL1_MIPI_ASM_RXD,  UL1_MIPI_PORT2,  UL1_REG_W     , MIPI_USID_ASM1_Set1,  { { 19324 ,{0x00, 0x00}}, { 19462 ,{0x00, 0x00}}, { 19600 ,{0x00, 0x00}}, { 19738  ,{0x00, 0x00}}, { 19876 ,{0x00, 0x00}}} },
   { /* 5  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set1, { { 19324 ,{0x0, 0x0}},   { 19462 ,{0x0, 0x0}},   { 19600 ,{0x0, 0x0}},   { 19738  ,{0x0, 0x0}},   { 19876 ,{0x0,  0x0}} } },
   { /* 6  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set1, { { 19324 ,{0x0, 0x0}},   { 19462 ,{0x0, 0x0}},   { 19600 ,{0x0, 0x0}},   { 19738  ,{0x0, 0x0}},   { 19876 ,{0x0,  0x0}} } },
   { /* 7  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set1, { { 19324 ,{0x0, 0x0}},   { 19462 ,{0x0, 0x0}},   { 19600 ,{0x0, 0x0}},   { 19738  ,{0x0, 0x0}},   { 19876 ,{0x0,  0x0}} } },
   { /* 8  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set1, { { 19324 ,{0x0, 0x0}},   { 19462 ,{0x0, 0x0}},   { 19600 ,{0x0, 0x0}},   { 19738  ,{0x0, 0x0}},   { 19876 ,{0x0,  0x0}} } },
   { /* 9  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set1, { { 19324 ,{0x0, 0x0}},   { 19462 ,{0x0, 0x0}},   { 19600 ,{0x0, 0x0}},   { 19738  ,{0x0, 0x0}},   { 19876 ,{0x0,  0x0}} } },
   { /* 10 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set1, { { 19324 ,{0x0, 0x0}},   { 19462 ,{0x0, 0x0}},   { 19600 ,{0x0, 0x0}},   { 19738  ,{0x0, 0x0}},   { 19876 ,{0x0,  0x0}} } },
   { /* 11 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set1, { { 19324 ,{0x0, 0x0}},   { 19462 ,{0x0, 0x0}},   { 19600 ,{0x0, 0x0}},   { 19738  ,{0x0, 0x0}},   { 19876 ,{0x0,  0x0}} } },
   { /* 12 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set1, { { 19324 ,{0x0, 0x0}},   { 19462 ,{0x0, 0x0}},   { 19600 ,{0x0, 0x0}},   { 19738  ,{0x0, 0x0}},   { 19876 ,{0x0,  0x0}} } },
   { /* 13 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set1, { { 19324 ,{0x0, 0x0}},   { 19462 ,{0x0, 0x0}},   { 19600 ,{0x0, 0x0}},   { 19738  ,{0x0, 0x0}},   { 19876 ,{0x0,  0x0}} } },
   { /* 14 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set1, { { 19324 ,{0x0, 0x0}},   { 19462 ,{0x0, 0x0}},   { 19600 ,{0x0, 0x0}},   { 19738  ,{0x0, 0x0}},   { 19876 ,{0x0,  0x0}} } },
   { /* 15 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set1, { { 19324 ,{0x0, 0x0}},   { 19462 ,{0x0, 0x0}},   { 19600 ,{0x0, 0x0}},   { 19738  ,{0x0, 0x0}},   { 19876 ,{0x0,  0x0}} } },
   { /* 16 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set1, { { 19324 ,{0x0, 0x0}},   { 19462 ,{0x0, 0x0}},   { 19600 ,{0x0, 0x0}},   { 19738  ,{0x0, 0x0}},   { 19876 ,{0x0,  0x0}} } },
   { /* 17 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set1, { { 19324 ,{0x0, 0x0}},   { 19462 ,{0x0, 0x0}},   { 19600 ,{0x0, 0x0}},   { 19738  ,{0x0, 0x0}},   { 19876 ,{0x0,  0x0}} } },
   { /* 18 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set1, { { 19324 ,{0x0, 0x0}},   { 19462 ,{0x0, 0x0}},   { 19600 ,{0x0, 0x0}},   { 19738  ,{0x0, 0x0}},   { 19876 ,{0x0,  0x0}} } },
   { /* 19 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set1, { { 19324 ,{0x0, 0x0}},   { 19462 ,{0x0, 0x0}},   { 19600 ,{0x0, 0x0}},   { 19738  ,{0x0, 0x0}},   { 19876 ,{0x0,  0x0}} } },
   { /* 20 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set1, { { 19324 ,{0x0, 0x0}},   { 19462 ,{0x0, 0x0}},   { 19600 ,{0x0, 0x0}},   { 19738  ,{0x0, 0x0}},   { 19876 ,{0x0,  0x0}} } },
   { /* 21 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set1, { { 19324 ,{0x0, 0x0}},   { 19462 ,{0x0, 0x0}},   { 19600 ,{0x0, 0x0}},   { 19738  ,{0x0, 0x0}},   { 19876 ,{0x0,  0x0}} } },
   { /* 22 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set1, { { 19324 ,{0x0, 0x0}},   { 19462 ,{0x0, 0x0}},   { 19600 ,{0x0, 0x0}},   { 19738  ,{0x0, 0x0}},   { 19876 ,{0x0,  0x0}} } },
   { /* 23 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set1, { { 19324 ,{0x0, 0x0}},   { 19462 ,{0x0, 0x0}},   { 19600 ,{0x0, 0x0}},   { 19738  ,{0x0, 0x0}},   { 19876 ,{0x0,  0x0}} } },
   { /* 24 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set1, { { 19324 ,{0x0, 0x0}},   { 19462 ,{0x0, 0x0}},   { 19600 ,{0x0, 0x0}},   { 19738  ,{0x0, 0x0}},   { 19876 ,{0x0,  0x0}} } },
   { /* 25 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set1, { { 19324 ,{0x0, 0x0}},   { 19462 ,{0x0, 0x0}},   { 19600 ,{0x0, 0x0}},   { 19738  ,{0x0, 0x0}},   { 19876 ,{0x0,  0x0}} } },
   { /* 26 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set1, { { 19324 ,{0x0, 0x0}},   { 19462 ,{0x0, 0x0}},   { 19600 ,{0x0, 0x0}},   { 19738  ,{0x0, 0x0}},   { 19876 ,{0x0,  0x0}} } },
   { /* 27 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set1, { { 19324 ,{0x0, 0x0}},   { 19462 ,{0x0, 0x0}},   { 19600 ,{0x0, 0x0}},   { 19738  ,{0x0, 0x0}},   { 19876 ,{0x0,  0x0}} } },
};

const UL1_MIPI_DATA_SUBBAND_TABLE_T UMTS_MIPI_RX_DATA_UMTSBand4_Set1[UL1_MIPI_RX_DATA_NUM] = 
{
   //No.      elm type , port_sel      ,  data_seq  , user id,         { { sub 0 ,addr, data }},{ sub 1 ,addr, data }},{ sub 2 ,addr, data}}, { sub 3, addr, data  }}, { sub 4, addr data  } }},
   { /* 0  */ UL1_MIPI_ASM,      UL1_MIPI_PORT0,  UL1_REG_W     , MIPI_USID_ASM0_Set1,  { { 21124 ,{0x05, 0x05}}, { 21227 ,{0x05, 0x05}}, { 21330 ,{0x05, 0x05}}, { 21428  ,{0x05, 0x05}}, { 21526 ,{0x05, 0x05}}} },
   { /* 1  */ UL1_MIPI_ASM_RXD,  UL1_MIPI_PORT2,  UL1_REG_W     , MIPI_USID_ASM1_Set1,  { { 21124 ,{0x00, 0x04}}, { 21227 ,{0x00, 0x04}}, { 21330 ,{0x00, 0x04}}, { 21428  ,{0x00, 0x04}}, { 21526 ,{0x00, 0x04}}} },
   { /* 2  */ UL1_MIPI_ASM,      UL1_MIPI_PORT0,  UL1_REG_W     , MIPI_USID_ASM0_Set1,  { { 21124 ,{0x05, 0x00}}, { 21227 ,{0x05, 0x00}}, { 21330 ,{0x05, 0x00}}, { 21428  ,{0x05, 0x00}}, { 21526 ,{0x05, 0x00}}} },
   { /* 3  */ UL1_MIPI_ASM,      UL1_MIPI_PORT0,  UL1_REG_W     , MIPI_USID_ASM0_Set1,  { { 21124 ,{0x04, 0x00}}, { 21227 ,{0x04, 0x00}}, { 21330 ,{0x04, 0x00}}, { 21428  ,{0x04, 0x00}}, { 21526 ,{0x04, 0x00}}} },
   { /* 4  */ UL1_MIPI_ASM_RXD,  UL1_MIPI_PORT2,  UL1_REG_W     , MIPI_USID_ASM1_Set1,  { { 21124 ,{0x00, 0x00}}, { 21227 ,{0x00, 0x00}}, { 21330 ,{0x00, 0x00}}, { 21428  ,{0x00, 0x00}}, { 21526 ,{0x00, 0x00}}} },
   { /* 5  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set1, { { 21124 ,{0x0, 0x0}},   { 21227 ,{0x0, 0x0}},   { 21330 ,{0x0, 0x0}},   { 21428  ,{0x0, 0x0}},   { 21526 ,{0x0,   0x0}}} },
   { /* 6  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set1, { { 21124 ,{0x0, 0x0}},   { 21227 ,{0x0, 0x0}},   { 21330 ,{0x0, 0x0}},   { 21428  ,{0x0, 0x0}},   { 21526 ,{0x0,   0x0}}} },
   { /* 7  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set1, { { 21124 ,{0x0, 0x0}},   { 21227 ,{0x0, 0x0}},   { 21330 ,{0x0, 0x0}},   { 21428  ,{0x0, 0x0}},   { 21526 ,{0x0,   0x0}}} },
   { /* 8  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set1, { { 21124 ,{0x0, 0x0}},   { 21227 ,{0x0, 0x0}},   { 21330 ,{0x0, 0x0}},   { 21428  ,{0x0, 0x0}},   { 21526 ,{0x0,   0x0}}} },
   { /* 9  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set1, { { 21124 ,{0x0, 0x0}},   { 21227 ,{0x0, 0x0}},   { 21330 ,{0x0, 0x0}},   { 21428  ,{0x0, 0x0}},   { 21526 ,{0x0,   0x0}}} },
   { /* 10 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set1, { { 21124 ,{0x0, 0x0}},   { 21227 ,{0x0, 0x0}},   { 21330 ,{0x0, 0x0}},   { 21428  ,{0x0, 0x0}},   { 21526 ,{0x0,   0x0}}} },
   { /* 11 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set1, { { 21124 ,{0x0, 0x0}},   { 21227 ,{0x0, 0x0}},   { 21330 ,{0x0, 0x0}},   { 21428  ,{0x0, 0x0}},   { 21526 ,{0x0,   0x0}}} },
   { /* 12 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set1, { { 21124 ,{0x0, 0x0}},   { 21227 ,{0x0, 0x0}},   { 21330 ,{0x0, 0x0}},   { 21428  ,{0x0, 0x0}},   { 21526 ,{0x0,   0x0}}} },
   { /* 13 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set1, { { 21124 ,{0x0, 0x0}},   { 21227 ,{0x0, 0x0}},   { 21330 ,{0x0, 0x0}},   { 21428  ,{0x0, 0x0}},   { 21526 ,{0x0,   0x0}}} },
   { /* 14 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set1, { { 21124 ,{0x0, 0x0}},   { 21227 ,{0x0, 0x0}},   { 21330 ,{0x0, 0x0}},   { 21428  ,{0x0, 0x0}},   { 21526 ,{0x0,   0x0}}} },
   { /* 15 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set1, { { 21124 ,{0x0, 0x0}},   { 21227 ,{0x0, 0x0}},   { 21330 ,{0x0, 0x0}},   { 21428  ,{0x0, 0x0}},   { 21526 ,{0x0,   0x0}}} },
   { /* 16 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set1, { { 21124 ,{0x0, 0x0}},   { 21227 ,{0x0, 0x0}},   { 21330 ,{0x0, 0x0}},   { 21428  ,{0x0, 0x0}},   { 21526 ,{0x0,   0x0}}} },
   { /* 17 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set1, { { 21124 ,{0x0, 0x0}},   { 21227 ,{0x0, 0x0}},   { 21330 ,{0x0, 0x0}},   { 21428  ,{0x0, 0x0}},   { 21526 ,{0x0,   0x0}}} },
   { /* 18 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set1, { { 21124 ,{0x0, 0x0}},   { 21227 ,{0x0, 0x0}},   { 21330 ,{0x0, 0x0}},   { 21428  ,{0x0, 0x0}},   { 21526 ,{0x0,   0x0}}} },
   { /* 19 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set1, { { 21124 ,{0x0, 0x0}},   { 21227 ,{0x0, 0x0}},   { 21330 ,{0x0, 0x0}},   { 21428  ,{0x0, 0x0}},   { 21526 ,{0x0,   0x0}}} },
   { /* 20 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set1, { { 21124 ,{0x0, 0x0}},   { 21227 ,{0x0, 0x0}},   { 21330 ,{0x0, 0x0}},   { 21428  ,{0x0, 0x0}},   { 21526 ,{0x0,   0x0}}} },
   { /* 21 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set1, { { 21124 ,{0x0, 0x0}},   { 21227 ,{0x0, 0x0}},   { 21330 ,{0x0, 0x0}},   { 21428  ,{0x0, 0x0}},   { 21526 ,{0x0,   0x0}}} },
   { /* 22 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set1, { { 21124 ,{0x0, 0x0}},   { 21227 ,{0x0, 0x0}},   { 21330 ,{0x0, 0x0}},   { 21428  ,{0x0, 0x0}},   { 21526 ,{0x0,   0x0}}} },
   { /* 23 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set1, { { 21124 ,{0x0, 0x0}},   { 21227 ,{0x0, 0x0}},   { 21330 ,{0x0, 0x0}},   { 21428  ,{0x0, 0x0}},   { 21526 ,{0x0,   0x0}}} },
   { /* 24 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set1, { { 21124 ,{0x0, 0x0}},   { 21227 ,{0x0, 0x0}},   { 21330 ,{0x0, 0x0}},   { 21428  ,{0x0, 0x0}},   { 21526 ,{0x0,   0x0}}} },
   { /* 25 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set1, { { 21124 ,{0x0, 0x0}},   { 21227 ,{0x0, 0x0}},   { 21330 ,{0x0, 0x0}},   { 21428  ,{0x0, 0x0}},   { 21526 ,{0x0,   0x0}}} },
   { /* 26 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set1, { { 21124 ,{0x0, 0x0}},   { 21227 ,{0x0, 0x0}},   { 21330 ,{0x0, 0x0}},   { 21428  ,{0x0, 0x0}},   { 21526 ,{0x0,   0x0}}} },
   { /* 27 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set1, { { 21124 ,{0x0, 0x0}},   { 21227 ,{0x0, 0x0}},   { 21330 ,{0x0, 0x0}},   { 21428  ,{0x0, 0x0}},   { 21526 ,{0x0,   0x0}}} },

};

const UL1_MIPI_DATA_SUBBAND_TABLE_T UMTS_MIPI_RX_DATA_UMTSBand5_Set1[UL1_MIPI_RX_DATA_NUM] = 
{
   //No.      elm type , port_sel      ,  data_seq  , user id,         { { sub 0 ,addr, data }},{ sub 1 ,addr, data }},{ sub 2 ,addr, data}}, { sub 3, addr, data  }}, { sub 4, addr data  } }},
   { /* 0  */ UL1_MIPI_ASM,      UL1_MIPI_PORT0,  UL1_REG_W     , MIPI_USID_ASM0_Set1,  { { 8714 ,{0x02, 0x06}}, { 8764 ,{0x02, 0x06}},   { 8815 ,{0x02, 0x06}},  { 8865  ,{0x02, 0x06}},   { 8916 ,{0x02, 0x06}} }},
   { /* 1  */ UL1_MIPI_ASM_RXD,  UL1_MIPI_PORT2,  UL1_REG_W     , MIPI_USID_ASM1_Set1,  { { 8714 ,{0x01, 0x03}}, { 8764 ,{0x01, 0x03}},   { 8815 ,{0x01, 0x03}},  { 8865  ,{0x01, 0x03}},   { 8916 ,{0x01, 0x03}} }},
   { /* 2  */ UL1_MIPI_ASM,      UL1_MIPI_PORT0,  UL1_REG_W     , MIPI_USID_ASM0_Set1,  { { 8714 ,{0x02, 0x00}}, { 8764 ,{0x02, 0x00}},   { 8815 ,{0x02, 0x00}},  { 8865  ,{0x02, 0x00}},   { 8916 ,{0x02, 0x00}}} },
   { /* 3  */ UL1_MIPI_ASM,      UL1_MIPI_PORT0,  UL1_REG_W     , MIPI_USID_ASM0_Set1,  { { 8714 ,{0x04, 0x00}}, { 8764 ,{0x04, 0x00}},   { 8815 ,{0x04, 0x00}},  { 8865  ,{0x04, 0x00}},   { 8916 ,{0x04, 0x00}}} },
   { /* 4  */ UL1_MIPI_ASM_RXD,  UL1_MIPI_PORT2,  UL1_REG_W     , MIPI_USID_ASM1_Set1,  { { 8714 ,{0x01, 0x00}}, { 8764 ,{0x01, 0x00}},   { 8815 ,{0x01, 0x00}},  { 8865  ,{0x01, 0x00}},   { 8916 ,{0x01, 0x00}}} },
   { /* 5  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set1, { { 8714 ,{0x0, 0x0}},   { 8764 ,{0x0, 0x0}},     { 8815 ,{0x0, 0x0}},    { 8865  ,{0x0, 0x0}},     { 8916 ,{0x0,   0x0}} }},
   { /* 6  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set1, { { 8714 ,{0x0, 0x0}},   { 8764 ,{0x0, 0x0}},     { 8815 ,{0x0, 0x0}},    { 8865  ,{0x0, 0x0}},     { 8916 ,{0x0,   0x0}} }},
   { /* 7  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set1, { { 8714 ,{0x0, 0x0}},   { 8764 ,{0x0, 0x0}},     { 8815 ,{0x0, 0x0}},    { 8865  ,{0x0, 0x0}},     { 8916 ,{0x0,   0x0}} }},
   { /* 8  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set1, { { 8714 ,{0x0, 0x0}},   { 8764 ,{0x0, 0x0}},     { 8815 ,{0x0, 0x0}},    { 8865  ,{0x0, 0x0}},     { 8916 ,{0x0,   0x0}} }},
   { /* 9  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set1, { { 8714 ,{0x0, 0x0}},   { 8764 ,{0x0, 0x0}},     { 8815 ,{0x0, 0x0}},    { 8865  ,{0x0, 0x0}},     { 8916 ,{0x0,   0x0}} }},
   { /* 10 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set1, { { 8714 ,{0x0, 0x0}},   { 8764 ,{0x0, 0x0}},     { 8815 ,{0x0, 0x0}},    { 8865  ,{0x0, 0x0}},     { 8916 ,{0x0,   0x0}} }},
   { /* 11 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set1, { { 8714 ,{0x0, 0x0}},   { 8764 ,{0x0, 0x0}},     { 8815 ,{0x0, 0x0}},    { 8865  ,{0x0, 0x0}},     { 8916 ,{0x0,   0x0}} }},
   { /* 12 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set1, { { 8714 ,{0x0, 0x0}},   { 8764 ,{0x0, 0x0}},     { 8815 ,{0x0, 0x0}},    { 8865  ,{0x0, 0x0}},     { 8916 ,{0x0,   0x0}} }},
   { /* 13 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set1, { { 8714 ,{0x0, 0x0}},   { 8764 ,{0x0, 0x0}},     { 8815 ,{0x0, 0x0}},    { 8865  ,{0x0, 0x0}},     { 8916 ,{0x0,   0x0}} }},
   { /* 14 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set1, { { 8714 ,{0x0, 0x0}},   { 8764 ,{0x0, 0x0}},     { 8815 ,{0x0, 0x0}},    { 8865  ,{0x0, 0x0}},     { 8916 ,{0x0,   0x0}} }},
   { /* 15 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set1, { { 8714 ,{0x0, 0x0}},   { 8764 ,{0x0, 0x0}},     { 8815 ,{0x0, 0x0}},    { 8865  ,{0x0, 0x0}},     { 8916 ,{0x0,   0x0}} }},
   { /* 16 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set1, { { 8714 ,{0x0, 0x0}},   { 8764 ,{0x0, 0x0}},     { 8815 ,{0x0, 0x0}},    { 8865  ,{0x0, 0x0}},     { 8916 ,{0x0,   0x0}} }},
   { /* 17 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set1, { { 8714 ,{0x0, 0x0}},   { 8764 ,{0x0, 0x0}},     { 8815 ,{0x0, 0x0}},    { 8865  ,{0x0, 0x0}},     { 8916 ,{0x0,   0x0}} }},
   { /* 18 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set1, { { 8714 ,{0x0, 0x0}},   { 8764 ,{0x0, 0x0}},     { 8815 ,{0x0, 0x0}},    { 8865  ,{0x0, 0x0}},     { 8916 ,{0x0,   0x0}} }},
   { /* 19 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set1, { { 8714 ,{0x0, 0x0}},   { 8764 ,{0x0, 0x0}},     { 8815 ,{0x0, 0x0}},    { 8865  ,{0x0, 0x0}},     { 8916 ,{0x0,   0x0}} }},
   { /* 20 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set1, { { 8714 ,{0x0, 0x0}},   { 8764 ,{0x0, 0x0}},     { 8815 ,{0x0, 0x0}},    { 8865  ,{0x0, 0x0}},     { 8916 ,{0x0,   0x0}} }},
   { /* 21 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set1, { { 8714 ,{0x0, 0x0}},   { 8764 ,{0x0, 0x0}},     { 8815 ,{0x0, 0x0}},    { 8865  ,{0x0, 0x0}},     { 8916 ,{0x0,   0x0}} }},
   { /* 22 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set1, { { 8714 ,{0x0, 0x0}},   { 8764 ,{0x0, 0x0}},     { 8815 ,{0x0, 0x0}},    { 8865  ,{0x0, 0x0}},     { 8916 ,{0x0,   0x0}} }},
   { /* 23 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set1, { { 8714 ,{0x0, 0x0}},   { 8764 ,{0x0, 0x0}},     { 8815 ,{0x0, 0x0}},    { 8865  ,{0x0, 0x0}},     { 8916 ,{0x0,   0x0}} }},
   { /* 24 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set1, { { 8714 ,{0x0, 0x0}},   { 8764 ,{0x0, 0x0}},     { 8815 ,{0x0, 0x0}},    { 8865  ,{0x0, 0x0}},     { 8916 ,{0x0,   0x0}} }},
   { /* 25 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set1, { { 8714 ,{0x0, 0x0}},   { 8764 ,{0x0, 0x0}},     { 8815 ,{0x0, 0x0}},    { 8865  ,{0x0, 0x0}},     { 8916 ,{0x0,   0x0}} }},
   { /* 26 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set1, { { 8714 ,{0x0, 0x0}},   { 8764 ,{0x0, 0x0}},     { 8815 ,{0x0, 0x0}},    { 8865  ,{0x0, 0x0}},     { 8916 ,{0x0,   0x0}} }},
   { /* 27 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set1, { { 8714 ,{0x0, 0x0}},   { 8764 ,{0x0, 0x0}},     { 8815 ,{0x0, 0x0}},    { 8865  ,{0x0, 0x0}},     { 8916 ,{0x0,   0x0}} }},
};


const UL1_MIPI_DATA_SUBBAND_TABLE_T UMTS_MIPI_RX_DATA_UMTSBand8_Set1[UL1_MIPI_RX_DATA_NUM] = 
{
   //No.      elm type , port_sel      ,  data_seq  , user id,         { { sub 0 ,addr, data }},{ sub 1 ,addr, data }},{ sub 2 ,addr, data}}, { sub 3, addr, data  }}, { sub 4, addr data  } }},
   { /* 0  */ UL1_MIPI_ASM,      UL1_MIPI_PORT0,  UL1_REG_W     , MIPI_USID_ASM0_Set1,  { { 9274 ,{0x02, 0x02}}, { 9349 ,{0x02, 0x02}},   { 9425 ,{0x02, 0x02}},  { 9500  ,{0x02, 0x02}},   { 9576 ,{0x02, 0x02}} }},
   { /* 1  */ UL1_MIPI_ASM_RXD,  UL1_MIPI_PORT2,  UL1_REG_W     , MIPI_USID_ASM1_Set1,  { { 9274 ,{0x01, 0x02}}, { 9349 ,{0x01, 0x02}},   { 9425 ,{0x01, 0x02}},  { 9500  ,{0x01, 0x02}},   { 9576 ,{0x01, 0x02}} }},
   { /* 2  */ UL1_MIPI_ASM,      UL1_MIPI_PORT0,  UL1_REG_W     , MIPI_USID_ASM0_Set1,  { { 9274 ,{0x02, 0x00}}, { 9349 ,{0x02, 0x00}},   { 9425 ,{0x02, 0x00}},  { 9500  ,{0x02, 0x00}},   { 9576 ,{0x02, 0x00}}} },
   { /* 3  */ UL1_MIPI_ASM,      UL1_MIPI_PORT0,  UL1_REG_W     , MIPI_USID_ASM0_Set1,  { { 9274 ,{0x04, 0x00}}, { 9349 ,{0x04, 0x00}},   { 9425 ,{0x04, 0x00}},  { 9500  ,{0x04, 0x00}},   { 9576 ,{0x04, 0x00}}} },
   { /* 4  */ UL1_MIPI_ASM_RXD,  UL1_MIPI_PORT2,  UL1_REG_W     , MIPI_USID_ASM1_Set1,  { { 9274 ,{0x01, 0x00}}, { 9349 ,{0x01, 0x00}},   { 9425 ,{0x01, 0x00}},  { 9500  ,{0x01, 0x00}},   { 9576 ,{0x01, 0x00}}} },
   { /* 5  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set1, { { 9274 ,{0x0, 0x0}},   { 9349 ,{0x0, 0x0}},     { 9425 ,{0x0, 0x0}},    { 9500  ,{0x0, 0x0}},     { 9576 ,{0x0,   0x0}} }},
   { /* 6  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set1, { { 9274 ,{0x0, 0x0}},   { 9349 ,{0x0, 0x0}},     { 9425 ,{0x0, 0x0}},    { 9500  ,{0x0, 0x0}},     { 9576 ,{0x0,   0x0}} }},
   { /* 7  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set1, { { 9274 ,{0x0, 0x0}},   { 9349 ,{0x0, 0x0}},     { 9425 ,{0x0, 0x0}},    { 9500  ,{0x0, 0x0}},     { 9576 ,{0x0,   0x0}} }},
   { /* 8  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set1, { { 9274 ,{0x0, 0x0}},   { 9349 ,{0x0, 0x0}},     { 9425 ,{0x0, 0x0}},    { 9500  ,{0x0, 0x0}},     { 9576 ,{0x0,   0x0}} }},
   { /* 9  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set1, { { 9274 ,{0x0, 0x0}},   { 9349 ,{0x0, 0x0}},     { 9425 ,{0x0, 0x0}},    { 9500  ,{0x0, 0x0}},     { 9576 ,{0x0,   0x0}} }},
   { /* 10 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set1, { { 9274 ,{0x0, 0x0}},   { 9349 ,{0x0, 0x0}},     { 9425 ,{0x0, 0x0}},    { 9500  ,{0x0, 0x0}},     { 9576 ,{0x0,   0x0}} }},
   { /* 11 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set1, { { 9274 ,{0x0, 0x0}},   { 9349 ,{0x0, 0x0}},     { 9425 ,{0x0, 0x0}},    { 9500  ,{0x0, 0x0}},     { 9576 ,{0x0,   0x0}} }},
   { /* 12 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set1, { { 9274 ,{0x0, 0x0}},   { 9349 ,{0x0, 0x0}},     { 9425 ,{0x0, 0x0}},    { 9500  ,{0x0, 0x0}},     { 9576 ,{0x0,   0x0}} }},
   { /* 13 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set1, { { 9274 ,{0x0, 0x0}},   { 9349 ,{0x0, 0x0}},     { 9425 ,{0x0, 0x0}},    { 9500  ,{0x0, 0x0}},     { 9576 ,{0x0,   0x0}} }},
   { /* 14 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set1, { { 9274 ,{0x0, 0x0}},   { 9349 ,{0x0, 0x0}},     { 9425 ,{0x0, 0x0}},    { 9500  ,{0x0, 0x0}},     { 9576 ,{0x0,   0x0}} }},
   { /* 15 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set1, { { 9274 ,{0x0, 0x0}},   { 9349 ,{0x0, 0x0}},     { 9425 ,{0x0, 0x0}},    { 9500  ,{0x0, 0x0}},     { 9576 ,{0x0,   0x0}} }},
   { /* 16 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set1, { { 9274 ,{0x0, 0x0}},   { 9349 ,{0x0, 0x0}},     { 9425 ,{0x0, 0x0}},    { 9500  ,{0x0, 0x0}},     { 9576 ,{0x0,   0x0}} }},
   { /* 17 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set1, { { 9274 ,{0x0, 0x0}},   { 9349 ,{0x0, 0x0}},     { 9425 ,{0x0, 0x0}},    { 9500  ,{0x0, 0x0}},     { 9576 ,{0x0,   0x0}} }},
   { /* 18 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set1, { { 9274 ,{0x0, 0x0}},   { 9349 ,{0x0, 0x0}},     { 9425 ,{0x0, 0x0}},    { 9500  ,{0x0, 0x0}},     { 9576 ,{0x0,   0x0}} }},
   { /* 19 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set1, { { 9274 ,{0x0, 0x0}},   { 9349 ,{0x0, 0x0}},     { 9425 ,{0x0, 0x0}},    { 9500  ,{0x0, 0x0}},     { 9576 ,{0x0,   0x0}} }},
   { /* 20 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set1, { { 9274 ,{0x0, 0x0}},   { 9349 ,{0x0, 0x0}},     { 9425 ,{0x0, 0x0}},    { 9500  ,{0x0, 0x0}},     { 9576 ,{0x0,   0x0}} }},
   { /* 21 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set1, { { 9274 ,{0x0, 0x0}},   { 9349 ,{0x0, 0x0}},     { 9425 ,{0x0, 0x0}},    { 9500  ,{0x0, 0x0}},     { 9576 ,{0x0,   0x0}} }},
   { /* 22 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set1, { { 9274 ,{0x0, 0x0}},   { 9349 ,{0x0, 0x0}},     { 9425 ,{0x0, 0x0}},    { 9500  ,{0x0, 0x0}},     { 9576 ,{0x0,   0x0}} }},
   { /* 23 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set1, { { 9274 ,{0x0, 0x0}},   { 9349 ,{0x0, 0x0}},     { 9425 ,{0x0, 0x0}},    { 9500  ,{0x0, 0x0}},     { 9576 ,{0x0,   0x0}} }},
   { /* 24 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set1, { { 9274 ,{0x0, 0x0}},   { 9349 ,{0x0, 0x0}},     { 9425 ,{0x0, 0x0}},    { 9500  ,{0x0, 0x0}},     { 9576 ,{0x0,   0x0}} }},
   { /* 25 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set1, { { 9274 ,{0x0, 0x0}},   { 9349 ,{0x0, 0x0}},     { 9425 ,{0x0, 0x0}},    { 9500  ,{0x0, 0x0}},     { 9576 ,{0x0,   0x0}} }},
   { /* 26 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set1, { { 9274 ,{0x0, 0x0}},   { 9349 ,{0x0, 0x0}},     { 9425 ,{0x0, 0x0}},    { 9500  ,{0x0, 0x0}},     { 9576 ,{0x0,   0x0}} }},
   { /* 27 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set1, { { 9274 ,{0x0, 0x0}},   { 9349 ,{0x0, 0x0}},     { 9425 ,{0x0, 0x0}},    { 9500  ,{0x0, 0x0}},     { 9576 ,{0x0,   0x0}} }},
};

const UL1_MIPI_DATA_SUBBAND_TABLE_T UMTS_MIPI_RX_DATA_UMTSBand3_Set1[] = {{0}};
const UL1_MIPI_DATA_SUBBAND_TABLE_T UMTS_MIPI_RX_DATA_UMTSBand6_Set1[] = {{0}};
const UL1_MIPI_DATA_SUBBAND_TABLE_T UMTS_MIPI_RX_DATA_UMTSBand9_Set1[] = {{0}};
const UL1_MIPI_DATA_SUBBAND_TABLE_T UMTS_MIPI_RX_DATA_UMTSBand11_Set1[] = {{0}};
const UL1_MIPI_DATA_SUBBAND_TABLE_T UMTS_MIPI_RX_DATA_UMTSBand19_Set1[] = {{0}};

const UL1_MIPI_DATA_SUBBAND_TABLE_T* const UMTS_MIPI_RX_DATA_TABLE_Set1[] = 
{
   M_UMTS_RX_DATA(UMTSBandNone,Set1),          /*UMTSBandNone*/          
   M_UMTS_RX_DATA(RX_BAND_INDICATOR_0_Set1,Set1),   /*UMTS_Route0*/
   M_UMTS_RX_DATA(RX_BAND_INDICATOR_1_Set1,Set1),   /*UMTS_Route1*/
   M_UMTS_RX_DATA(RX_BAND_INDICATOR_2_Set1,Set1),   /*UMTS_Route2*/
   M_UMTS_RX_DATA(RX_BAND_INDICATOR_3_Set1,Set1),   /*UMTS_Route3*/ 
   M_UMTS_RX_DATA(RX_BAND_INDICATOR_4_Set1,Set1),   /*UMTS_Route4*/
#if IS_3G_RF_NCCA_SUPPORT
   M_UMTS_RX_DATA(MIPI_RX_ROUTE_IND_5,Set1),   /*UMTS_Route5*/
   M_UMTS_RX_DATA(MIPI_RX_ROUTE_IND_6,Set1),   /*UMTS_Route6*/
   M_UMTS_RX_DATA(MIPI_RX_ROUTE_IND_7,Set1),   /*UMTS_Route7*/
   M_UMTS_RX_DATA(MIPI_RX_ROUTE_IND_8,Set1),   /*UMTS_Route8*/
   M_UMTS_RX_DATA(MIPI_RX_ROUTE_IND_9,Set1),   /*UMTS_Route9*/
   M_UMTS_RX_DATA(MIPI_RX_ROUTE_IND_10,Set1),  /*UMTS_Route10*/
   M_UMTS_RX_DATA(MIPI_RX_ROUTE_IND_11,Set1),  /*UMTS_Route11*/
   M_UMTS_RX_DATA(MIPI_RX_ROUTE_IND_12,Set1),  /*UMTS_Route12*/
   M_UMTS_RX_DATA(MIPI_RX_ROUTE_IND_13,Set1),  /*UMTS_Route13*/
   M_UMTS_RX_DATA(MIPI_RX_ROUTE_IND_14,Set1),  /*UMTS_Route14*/
#endif
};

const UL1_MIPI_EVENT_TABLE_T UMTS_MIPI_TX_EVENT_UMTSBandNone_Set1[UL1_MIPI_TX_EVENT_NUM] = 
{
   /* No.     elm type , data idx       , evt_type       , evt_offset     */
   /*                     { start, stop },                  ( us )         */
   { /* 0  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 1  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 2  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 3  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 4  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 5  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 6  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 7  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 8  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 9  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 10 */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 11 */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 12 */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 13 */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 14 */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 15 */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
};

const UL1_MIPI_EVENT_TABLE_T UMTS_MIPI_TX_EVENT_UMTSBand1_Set1[UL1_MIPI_TX_EVENT_NUM] = 
{
	 /* No.     elm type , data idx       , evt_type       , evt_offset     */
   /*                     { start, stop },                  ( us )         */
   { /* 0  */ UL1_MIPI_PA,   { 0    , 3    }, UL1_MIPI_TRX_OFF,    US2CHIPCNT(10)  },
   { /* 1  */ UL1_MIPI_ASM,  { 4    , 8    }, UL1_MIPI_TRX_ON,     US2CHIPCNT(200) },
   { /* 2  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 3  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 4  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 5  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 6  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 7  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 8  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 9  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 10 */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 11 */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 12 */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 13 */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 14 */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 15 */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
};

const UL1_MIPI_EVENT_TABLE_T UMTS_MIPI_TX_EVENT_UMTSBand2_Set1[UL1_MIPI_TX_EVENT_NUM] = 
{
	 /* No.     elm type , data idx       , evt_type       , evt_offset     */
   /*                     { start, stop },                  ( us )         */
   { /* 0  */ UL1_MIPI_PA,   { 0    , 3    }, UL1_MIPI_TRX_OFF,    US2CHIPCNT(10)  },
   { /* 1  */ UL1_MIPI_ASM,  { 4    , 8    }, UL1_MIPI_TRX_ON,     US2CHIPCNT(200) },
   { /* 2  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 3  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 4  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 5  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 6  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 7  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 8  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 9  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 10 */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 11 */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 12 */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 13 */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 14 */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 15 */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
};

const UL1_MIPI_EVENT_TABLE_T UMTS_MIPI_TX_EVENT_UMTSBand4_Set1[UL1_MIPI_TX_EVENT_NUM] = 
{
	 /* No.     elm type , data idx       , evt_type       , evt_offset     */
   /*                     { start, stop },                  ( us )         */
   { /* 0  */ UL1_MIPI_PA,   { 0    , 3    }, UL1_MIPI_TRX_OFF,    US2CHIPCNT(10)  },
   { /* 1  */ UL1_MIPI_ASM,  { 4    , 8    }, UL1_MIPI_TRX_ON,     US2CHIPCNT(200) },
   { /* 2  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 3  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 4  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 5  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 6  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 7  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 8  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 9  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 10 */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 11 */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 12 */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 13 */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 14 */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 15 */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
};


const UL1_MIPI_EVENT_TABLE_T UMTS_MIPI_TX_EVENT_UMTSBand5_Set1[UL1_MIPI_TX_EVENT_NUM] = 
{
	 /* No.     elm type , data idx       , evt_type       , evt_offset     */
   /*                     { start, stop },                  ( us )         */
   { /* 0  */ UL1_MIPI_PA,   { 0    , 3    }, UL1_MIPI_TRX_OFF,    US2CHIPCNT(10)  },
   { /* 1  */ UL1_MIPI_ASM,  { 4    , 8    }, UL1_MIPI_TRX_ON,     US2CHIPCNT(200) },
   { /* 2  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 3  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 4  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 5  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 6  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 7  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 8  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 9  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 10 */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 11 */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 12 */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 13 */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 14 */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 15 */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
};

const UL1_MIPI_EVENT_TABLE_T UMTS_MIPI_TX_EVENT_UMTSBand8_Set1[UL1_MIPI_TX_EVENT_NUM] = 
{
	 /* No.     elm type , data idx       , evt_type       , evt_offset     */
   /*                     { start, stop },                  ( us )         */
   { /* 0  */ UL1_MIPI_PA,   { 0    , 3    }, UL1_MIPI_TRX_OFF,    US2CHIPCNT(10)  },
   { /* 1  */ UL1_MIPI_ASM,  { 4    , 8    }, UL1_MIPI_TRX_ON,     US2CHIPCNT(200) },
   { /* 2  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 3  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 4  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 5  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 6  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 7  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 8  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 9  */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 10 */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 11 */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 12 */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 13 */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 14 */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
   { /* 15 */ UL1_MIPI_NULL, { 0    , 0    }, UL1_MIPI_EVENT_NULL, 0              },
};

const UL1_MIPI_EVENT_TABLE_T UMTS_MIPI_TX_EVENT_UMTSBand3_Set1[]  = {{0}};
const UL1_MIPI_EVENT_TABLE_T UMTS_MIPI_TX_EVENT_UMTSBand6_Set1[]  = {{0}};
const UL1_MIPI_EVENT_TABLE_T UMTS_MIPI_TX_EVENT_UMTSBand9_Set1[]  = {{0}};
const UL1_MIPI_EVENT_TABLE_T UMTS_MIPI_TX_EVENT_UMTSBand11_Set1[] = {{0}};
const UL1_MIPI_EVENT_TABLE_T UMTS_MIPI_TX_EVENT_UMTSBand19_Set1[] = {{0}};

const UL1_MIPI_EVENT_TABLE_T* const UMTS_MIPI_TX_EVENT_TABLE_Set1[] =
{
   M_UMTS_TX_EVENT(UMTSBandNone,Set1),                       /*UMTSUMTSBandNone*/          
   M_UMTS_TX_EVENT(RX_BAND_INDICATOR_0_Set1,Set1),     /*RX_BAND_INDICATOR_0_Set1*/
   M_UMTS_TX_EVENT(RX_BAND_INDICATOR_1_Set1,Set1),     /*RX_BAND_INDICATOR_1_Set1*/
   M_UMTS_TX_EVENT(RX_BAND_INDICATOR_2_Set1,Set1),     /*RX_BAND_INDICATOR_2_Set1*/
   M_UMTS_TX_EVENT(RX_BAND_INDICATOR_3_Set1,Set1),     /*RX_BAND_INDICATOR_3_Set1*/ 
   M_UMTS_TX_EVENT(RX_BAND_INDICATOR_4_Set1,Set1),     /*RX_BAND_INDICATOR_4_Set1*/ 
};

const UL1_MIPI_DATA_SUBBAND_TABLE_T UMTS_MIPI_TX_DATA_UMTSBandNone_Set1[UL1_MIPI_TX_DATA_NUM] = 
{
   //No.      elm type , port_sel      ,  data_seq  , user id,         { { sub 0 ,addr, data }},{ sub 1 ,addr, data }},{ sub 2 ,addr, data}}, { sub 3, addr, data  }}, { sub 4, addr data  } }},
   { /* 0  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL , MIPI_USID_INIT0_Set1 , { { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},       { 0x0 ,{0x0, 0x0}} }},
   { /* 1  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL , MIPI_USID_INIT0_Set1 , { { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},       { 0x0 ,{0x0, 0x0}} }},
   { /* 2  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL , MIPI_USID_INIT0_Set1 , { { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},       { 0x0 ,{0x0, 0x0}} }},
   { /* 3  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL , MIPI_USID_INIT0_Set1 , { { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},       { 0x0 ,{0x0, 0x0}} }},
   { /* 4  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL , MIPI_USID_INIT0_Set1 , { { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},       { 0x0 ,{0x0, 0x0}} }},
   { /* 5  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL , MIPI_USID_INIT0_Set1 , { { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},       { 0x0 ,{0x0, 0x0}} }},
   { /* 6  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL , MIPI_USID_INIT0_Set1 , { { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},       { 0x0 ,{0x0, 0x0}} }},
   { /* 7  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL , MIPI_USID_INIT0_Set1 , { { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},       { 0x0 ,{0x0, 0x0}} }},
   { /* 8  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL , MIPI_USID_INIT0_Set1 , { { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},       { 0x0 ,{0x0, 0x0}} }},
   { /* 9  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL , MIPI_USID_INIT0_Set1 , { { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},       { 0x0 ,{0x0, 0x0}} }},
   { /* 10 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL , MIPI_USID_INIT0_Set1 , { { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},       { 0x0 ,{0x0, 0x0}} }},
   { /* 11 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL , MIPI_USID_INIT0_Set1 , { { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},       { 0x0 ,{0x0, 0x0}} }},
   { /* 12 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL , MIPI_USID_INIT0_Set1 , { { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},       { 0x0 ,{0x0, 0x0}} }},
   { /* 13 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL , MIPI_USID_INIT0_Set1 , { { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},       { 0x0 ,{0x0, 0x0}} }},
   { /* 14 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL , MIPI_USID_INIT0_Set1 , { { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},       { 0x0 ,{0x0, 0x0}} }},
   { /* 15 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL , MIPI_USID_INIT0_Set1 , { { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},       { 0x0 ,{0x0, 0x0}} }},
   { /* 16 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL , MIPI_USID_INIT0_Set1 , { { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},       { 0x0 ,{0x0, 0x0}} }},
   { /* 17 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL , MIPI_USID_INIT0_Set1 , { { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},       { 0x0 ,{0x0, 0x0}} }},
};

const UL1_MIPI_DATA_SUBBAND_TABLE_T UMTS_MIPI_TX_DATA_UMTSBand1_Set1[UL1_MIPI_TX_DATA_NUM] = 
{
   //No.      elm type , port_sel      ,  data_seq  , user id,         { { sub 0 ,addr, data }},{ sub 1 ,addr, data }},{ sub 2 ,addr, data}}, { sub 3, addr, data}}, { sub 4, addr data  } }},   
   { /* 0  */ UL1_MIPI_PA  , UL1_MIPI_PORT1, UL1_REG_W  ,    MIPI_USID_PA0_Set1   , { { 19224 ,{0x00, 0x00}}, { 19362 ,{0x00, 0x00}}, { 19500 ,{0x00, 0x00}}, { 19638 ,{0x00, 0x00}}, { 19776 ,{0x00, 0x00}}}},
   { /* 1  */ UL1_MIPI_PA  , UL1_MIPI_PORT1, UL1_REG_W  ,    MIPI_USID_PA0_Set1   , { { 19224 ,{0x01, 0x00}}, { 19362 ,{0x01, 0x00}}, { 19500 ,{0x01, 0x00}}, { 19638 ,{0x01, 0x00}}, { 19776 ,{0x01, 0x00}}}},
   { /* 2  */ UL1_MIPI_PA  , UL1_MIPI_PORT1, UL1_REG_W  ,    MIPI_USID_PA0_Set1   , { { 19224 ,{0x02, 0x00}}, { 19362 ,{0x02, 0x00}}, { 19500 ,{0x02, 0x00}}, { 19638 ,{0x02, 0x00}}, { 19776 ,{0x02, 0x00}}}},
   { /* 3  */ UL1_MIPI_PA  , UL1_MIPI_PORT1, UL1_REG_W  ,    MIPI_USID_PA0_Set1   , { { 19224 ,{0x03, 0x00}}, { 19362 ,{0x03, 0x00}}, { 19500 ,{0x03, 0x00}}, { 19638 ,{0x03, 0x00}}, { 19776 ,{0x03, 0x00}}}},
   { /* 4  */ UL1_MIPI_ASM , UL1_MIPI_PORT0, UL1_REG_W  ,    MIPI_USID_ASM0_Set1   , { { 19224 ,{0x00, 0x80}}, { 19362 ,{0x00, 0x80}}, { 19500 ,{0x00, 0x80}}, { 19638 ,{0x00, 0x80}}, { 19776 ,{0x00, 0x80}}}},
   { /* 5  */ UL1_MIPI_ASM , UL1_MIPI_PORT0, UL1_REG_W  ,    MIPI_USID_ASM0_Set1   , { { 19224 ,{0x02, 0x00}}, { 19362 ,{0x02, 0x00}}, { 19500 ,{0x02, 0x00}}, { 19638 ,{0x02, 0x00}}, { 19776 ,{0x02, 0x00}}}},
   { /* 6  */ UL1_MIPI_ASM , UL1_MIPI_PORT0, UL1_REG_W  ,    MIPI_USID_ASM0_Set1   , { { 19224 ,{0x03, 0x00}}, { 19362 ,{0x03, 0x00}}, { 19500 ,{0x03, 0x00}}, { 19638 ,{0x03, 0x00}}, { 19776 ,{0x03, 0x00}}}}, 
   { /* 7  */ UL1_MIPI_ASM , UL1_MIPI_PORT0, UL1_REG_W  ,    MIPI_USID_ASM0_Set1   , { { 19224 ,{0x05, 0x05}}, { 19362 ,{0x05, 0x05}}, { 19500 ,{0x05, 0x05}}, { 19638 ,{0x05, 0x05}}, { 19776 ,{0x05, 0x05}}}},
   { /* 8  */ UL1_MIPI_ASM , UL1_MIPI_PORT0, UL1_REG_W  ,    MIPI_USID_ASM0_Set1   , { { 19224 ,{0x04, 0x10}}, { 19362 ,{0x04, 0x10}}, { 19500 ,{0x04, 0x10}}, { 19638 ,{0x04, 0x10}}, { 19776 ,{0x04, 0x10}}}},
   { /* 9  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL,   MIPI_USID_INIT0_Set1 , { { 19224 ,{0x00, 0x00}}, { 19362 ,{0x00, 0x00}}, { 19500 ,{0x00, 0x00}}, { 19638 ,{0x00, 0x00}}, { 19776 ,{0x00, 0x00}}}},
   { /* 10 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL,   MIPI_USID_INIT0_Set1 , { { 19224 ,{0x00, 0x00}}, { 19362 ,{0x00, 0x00}}, { 19500 ,{0x00, 0x00}}, { 19638 ,{0x00, 0x00}}, { 19776 ,{0x00, 0x00}}}},
   { /* 11 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL,   MIPI_USID_INIT0_Set1 , { { 19224 ,{0x00, 0x00}}, { 19362 ,{0x00, 0x00}}, { 19500 ,{0x00, 0x00}}, { 19638 ,{0x00, 0x00}}, { 19776 ,{0x00, 0x00}}}},
   { /* 12 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL,   MIPI_USID_INIT0_Set1 , { { 19224 ,{0x00, 0x00}}, { 19362 ,{0x00, 0x00}}, { 19500 ,{0x00, 0x00}}, { 19638 ,{0x00, 0x00}}, { 19776 ,{0x00, 0x00}}}},
   { /* 13 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL,   MIPI_USID_INIT0_Set1 , { { 19224 ,{0x00, 0x00}}, { 19362 ,{0x00, 0x00}}, { 19500 ,{0x00, 0x00}}, { 19638 ,{0x00, 0x00}}, { 19776 ,{0x00, 0x00}}}},
   { /* 14 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL,   MIPI_USID_INIT0_Set1 , { { 19224 ,{0x00, 0x00}}, { 19362 ,{0x00, 0x00}}, { 19500 ,{0x00, 0x00}}, { 19638 ,{0x00, 0x00}}, { 19776 ,{0x00, 0x00}}}},
   { /* 15 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL,   MIPI_USID_INIT0_Set1 , { { 19224 ,{0x00, 0x00}}, { 19362 ,{0x00, 0x00}}, { 19500 ,{0x00, 0x00}}, { 19638 ,{0x00, 0x00}}, { 19776 ,{0x00, 0x00}}}},
   { /* 16 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL,   MIPI_USID_INIT0_Set1 , { { 19224 ,{0x00, 0x00}}, { 19362 ,{0x00, 0x00}}, { 19500 ,{0x00, 0x00}}, { 19638 ,{0x00, 0x00}}, { 19776 ,{0x00, 0x00}}}},
   { /* 17 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL,   MIPI_USID_INIT0_Set1 , { { 19224 ,{0x00, 0x00}}, { 19362 ,{0x00, 0x00}}, { 19500 ,{0x00, 0x00}}, { 19638 ,{0x00, 0x00}}, { 19776 ,{0x00, 0x00}}}},
};


const UL1_MIPI_DATA_SUBBAND_TABLE_T UMTS_MIPI_TX_DATA_UMTSBand2_Set1[UL1_MIPI_TX_DATA_NUM] = 
{
   //No.      elm type , port_sel      ,  data_seq  , user id,         { { sub 0 ,addr, data }},{ sub 1 ,addr, data }},{ sub 2 ,addr, data}}, { sub 3, addr, data}}, { sub 4, addr data  } }},   
   { /* 0  */ UL1_MIPI_PA  , UL1_MIPI_PORT1, UL1_REG_W  ,    MIPI_USID_PA0_Set1   , { { 18524 ,{0x00, 0x00}}, { 18662 ,{0x00, 0x00}}, { 18800 ,{0x00, 0x00}}, { 18938 ,{0x00, 0x00}}, { 19076 ,{0x00, 0x00}} }},
   { /* 1  */ UL1_MIPI_PA  , UL1_MIPI_PORT1, UL1_REG_W  ,    MIPI_USID_PA0_Set1   , { { 18524 ,{0x01, 0x00}}, { 18662 ,{0x01, 0x00}}, { 18800 ,{0x01, 0x00}}, { 18938 ,{0x01, 0x00}}, { 19076 ,{0x01, 0x00}} }},
   { /* 2  */ UL1_MIPI_PA  , UL1_MIPI_PORT1, UL1_REG_W  ,    MIPI_USID_PA0_Set1   , { { 18524 ,{0x02, 0x00}}, { 18662 ,{0x02, 0x00}}, { 18800 ,{0x02, 0x00}}, { 18938 ,{0x02, 0x00}}, { 19076 ,{0x02, 0x00}} }},
   { /* 3  */ UL1_MIPI_PA  , UL1_MIPI_PORT1, UL1_REG_W  ,    MIPI_USID_PA0_Set1   , { { 18524 ,{0x03, 0x00}}, { 18662 ,{0x03, 0x00}}, { 18800 ,{0x03, 0x00}}, { 18938 ,{0x03, 0x00}}, { 19076 ,{0x03, 0x00}} }},
   { /* 4  */ UL1_MIPI_ASM , UL1_MIPI_PORT0, UL1_REG_W  ,    MIPI_USID_ASM0_Set1   , { { 18524 ,{0x00, 0x80}}, { 18662 ,{0x00, 0x80}}, { 18800 ,{0x00, 0x80}}, { 18938 ,{0x00, 0x80}}, { 19076 ,{0x00, 0x80}} }},
   { /* 5  */ UL1_MIPI_ASM , UL1_MIPI_PORT0, UL1_REG_W  ,    MIPI_USID_ASM0_Set1   , { { 18524 ,{0x02, 0x00}}, { 18662 ,{0x02, 0x00}}, { 18800 ,{0x02, 0x00}}, { 18938 ,{0x02, 0x00}}, { 19076 ,{0x02, 0x00}} }},
   { /* 6  */ UL1_MIPI_ASM , UL1_MIPI_PORT0, UL1_REG_W  ,    MIPI_USID_ASM0_Set1   , { { 18524 ,{0x03, 0x00}}, { 18662 ,{0x03, 0x00}}, { 18800 ,{0x03, 0x00}}, { 18938 ,{0x03, 0x00}}, { 19076 ,{0x03, 0x00}} }},
   { /* 7  */ UL1_MIPI_ASM , UL1_MIPI_PORT0, UL1_REG_W  ,    MIPI_USID_ASM0_Set1   , { { 18524 ,{0x05, 0x03}}, { 18662 ,{0x05, 0x03}}, { 18800 ,{0x05, 0x03}}, { 18938 ,{0x05, 0x03}}, { 19076 ,{0x05, 0x03}} }},
   { /* 8  */ UL1_MIPI_ASM , UL1_MIPI_PORT0, UL1_REG_W  ,    MIPI_USID_ASM0_Set1   , { { 18524 ,{0x04, 0x10}}, { 18662 ,{0x04, 0x10}}, { 18800 ,{0x04, 0x10}}, { 18938 ,{0x04, 0x10}}, { 19076 ,{0x04, 0x10}} }},
   { /* 9  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL,   MIPI_USID_INIT0_Set1 , { { 18524 ,{0x00, 0x00}}, { 18662 ,{0x00, 0x00}}, { 18800 ,{0x00, 0x00}}, { 18938 ,{0x00, 0x00}}, { 19076 ,{0x00, 0x00}} }},
   { /* 10 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL,   MIPI_USID_INIT0_Set1 , { { 18524 ,{0x00, 0x00}}, { 18662 ,{0x00, 0x00}}, { 18800 ,{0x00, 0x00}}, { 18938 ,{0x00, 0x00}}, { 19076 ,{0x00, 0x00}} }},
   { /* 11 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL,   MIPI_USID_INIT0_Set1 , { { 18524 ,{0x00, 0x00}}, { 18662 ,{0x00, 0x00}}, { 18800 ,{0x00, 0x00}}, { 18938 ,{0x00, 0x00}}, { 19076 ,{0x00, 0x00}} }},
   { /* 12 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL,   MIPI_USID_INIT0_Set1 , { { 18524 ,{0x00, 0x00}}, { 18662 ,{0x00, 0x00}}, { 18800 ,{0x00, 0x00}}, { 18938 ,{0x00, 0x00}}, { 19076 ,{0x00, 0x00}} }},
   { /* 13 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL,   MIPI_USID_INIT0_Set1 , { { 18524 ,{0x00, 0x00}}, { 18662 ,{0x00, 0x00}}, { 18800 ,{0x00, 0x00}}, { 18938 ,{0x00, 0x00}}, { 19076 ,{0x00, 0x00}} }},
   { /* 14 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL,   MIPI_USID_INIT0_Set1 , { { 18524 ,{0x00, 0x00}}, { 18662 ,{0x00, 0x00}}, { 18800 ,{0x00, 0x00}}, { 18938 ,{0x00, 0x00}}, { 19076 ,{0x00, 0x00}} }},
   { /* 15 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL,   MIPI_USID_INIT0_Set1 , { { 18524 ,{0x00, 0x00}}, { 18662 ,{0x00, 0x00}}, { 18800 ,{0x00, 0x00}}, { 18938 ,{0x00, 0x00}}, { 19076 ,{0x00, 0x00}} }},
   { /* 16 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL,   MIPI_USID_INIT0_Set1 , { { 18524 ,{0x00, 0x00}}, { 18662 ,{0x00, 0x00}}, { 18800 ,{0x00, 0x00}}, { 18938 ,{0x00, 0x00}}, { 19076 ,{0x00, 0x00}} }},
   { /* 17 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL,   MIPI_USID_INIT0_Set1 , { { 18524 ,{0x00, 0x00}}, { 18662 ,{0x00, 0x00}}, { 18800 ,{0x00, 0x00}}, { 18938 ,{0x00, 0x00}}, { 19076 ,{0x00, 0x00}} }},
};

const UL1_MIPI_DATA_SUBBAND_TABLE_T UMTS_MIPI_TX_DATA_UMTSBand4_Set1[UL1_MIPI_TX_DATA_NUM] = 
{
   //No.      elm type , port_sel      ,  data_seq  , user id,         { { sub 0 ,addr, data }},{ sub 1 ,addr, data }},{ sub 2 ,addr, data}}, { sub 3, addr, data}}, { sub 4, addr data  } }},   
   { /* 0  */ UL1_MIPI_PA  , UL1_MIPI_PORT1, UL1_REG_W  ,    MIPI_USID_PA0_Set1   , { { 17124 ,{0x00, 0x00}}, { 17224 ,{0x00, 0x00}}, { 17324 ,{0x00, 0x00}}, { 17425 ,{0x00, 0x00}}, { 17526 ,{0x00, 0x00}} }},
   { /* 1  */ UL1_MIPI_PA  , UL1_MIPI_PORT1, UL1_REG_W  ,    MIPI_USID_PA0_Set1   , { { 17124 ,{0x01, 0x00}}, { 17224 ,{0x01, 0x00}}, { 17324 ,{0x01, 0x00}}, { 17425 ,{0x01, 0x00}}, { 17526 ,{0x01, 0x00}} }},
   { /* 2  */ UL1_MIPI_PA  , UL1_MIPI_PORT1, UL1_REG_W  ,    MIPI_USID_PA0_Set1   , { { 17124 ,{0x02, 0x00}}, { 17224 ,{0x02, 0x00}}, { 17324 ,{0x02, 0x00}}, { 17425 ,{0x02, 0x00}}, { 17526 ,{0x02, 0x00}} }},
   { /* 3  */ UL1_MIPI_PA  , UL1_MIPI_PORT1, UL1_REG_W  ,    MIPI_USID_PA0_Set1   , { { 17124 ,{0x03, 0x00}}, { 17224 ,{0x03, 0x00}}, { 17324 ,{0x03, 0x00}}, { 17425 ,{0x03, 0x00}}, { 17526 ,{0x03, 0x00}} }},
   { /* 4  */ UL1_MIPI_ASM , UL1_MIPI_PORT0, UL1_REG_W  ,    MIPI_USID_ASM0_Set1   , { { 17124 ,{0x00, 0x80}}, { 17224 ,{0x00, 0x80}}, { 17324 ,{0x00, 0x80}}, { 17425 ,{0x00, 0x80}}, { 17526 ,{0x00, 0x80}} }},
   { /* 5  */ UL1_MIPI_ASM , UL1_MIPI_PORT0, UL1_REG_W  ,    MIPI_USID_ASM0_Set1   , { { 17124 ,{0x02, 0x00}}, { 17224 ,{0x02, 0x00}}, { 17324 ,{0x02, 0x00}}, { 17425 ,{0x02, 0x00}}, { 17526 ,{0x02, 0x00}} }},
   { /* 6  */ UL1_MIPI_ASM , UL1_MIPI_PORT0, UL1_REG_W  ,    MIPI_USID_ASM0_Set1   , { { 17124 ,{0x03, 0x00}}, { 17224 ,{0x03, 0x00}}, { 17324 ,{0x03, 0x00}}, { 17425 ,{0x03, 0x00}}, { 17526 ,{0x03, 0x00}} }},
   { /* 7  */ UL1_MIPI_ASM , UL1_MIPI_PORT0, UL1_REG_W  ,    MIPI_USID_ASM0_Set1   , { { 17124 ,{0x05, 0x05}}, { 17224 ,{0x05, 0x05}}, { 17324 ,{0x05, 0x05}}, { 17425 ,{0x05, 0x05}}, { 17526 ,{0x05, 0x05}} }},
   { /* 8  */ UL1_MIPI_ASM , UL1_MIPI_PORT0, UL1_REG_W  ,    MIPI_USID_ASM0_Set1   , { { 17124 ,{0x04, 0x10}}, { 17224 ,{0x04, 0x10}}, { 17324 ,{0x04, 0x10}}, { 17425 ,{0x04, 0x10}}, { 17526 ,{0x04, 0x10}} }},
   { /* 9  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL,   MIPI_USID_INIT0_Set1 , { { 17124 ,{0x00, 0x00}}, { 17224 ,{0x00, 0x00}}, { 17324 ,{0x00, 0x00}}, { 17425 ,{0x00, 0x00}}, { 17526 ,{0x00, 0x00}} }},
   { /* 10 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL,   MIPI_USID_INIT0_Set1 , { { 17124 ,{0x00, 0x00}}, { 17224 ,{0x00, 0x00}}, { 17324 ,{0x00, 0x00}}, { 17425 ,{0x00, 0x00}}, { 17526 ,{0x00, 0x00}} }},
   { /* 11 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL,   MIPI_USID_INIT0_Set1 , { { 17124 ,{0x00, 0x00}}, { 17224 ,{0x00, 0x00}}, { 17324 ,{0x00, 0x00}}, { 17425 ,{0x00, 0x00}}, { 17526 ,{0x00, 0x00}} }},
   { /* 12 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL,   MIPI_USID_INIT0_Set1 , { { 17124 ,{0x00, 0x00}}, { 17224 ,{0x00, 0x00}}, { 17324 ,{0x00, 0x00}}, { 17425 ,{0x00, 0x00}}, { 17526 ,{0x00, 0x00}} }},
   { /* 13 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL,   MIPI_USID_INIT0_Set1 , { { 17124 ,{0x00, 0x00}}, { 17224 ,{0x00, 0x00}}, { 17324 ,{0x00, 0x00}}, { 17425 ,{0x00, 0x00}}, { 17526 ,{0x00, 0x00}} }},
   { /* 14 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL,   MIPI_USID_INIT0_Set1 , { { 17124 ,{0x00, 0x00}}, { 17224 ,{0x00, 0x00}}, { 17324 ,{0x00, 0x00}}, { 17425 ,{0x00, 0x00}}, { 17526 ,{0x00, 0x00}} }},
   { /* 15 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL,   MIPI_USID_INIT0_Set1 , { { 17124 ,{0x00, 0x00}}, { 17224 ,{0x00, 0x00}}, { 17324 ,{0x00, 0x00}}, { 17425 ,{0x00, 0x00}}, { 17526 ,{0x00, 0x00}} }},
   { /* 16 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL,   MIPI_USID_INIT0_Set1 , { { 17124 ,{0x00, 0x00}}, { 17224 ,{0x00, 0x00}}, { 17324 ,{0x00, 0x00}}, { 17425 ,{0x00, 0x00}}, { 17526 ,{0x00, 0x00}} }},
   { /* 17 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL,   MIPI_USID_INIT0_Set1 , { { 17124 ,{0x00, 0x00}}, { 17224 ,{0x00, 0x00}}, { 17324 ,{0x00, 0x00}}, { 17425 ,{0x00, 0x00}}, { 17526 ,{0x00, 0x00}} }},
};

const UL1_MIPI_DATA_SUBBAND_TABLE_T UMTS_MIPI_TX_DATA_UMTSBand5_Set1[UL1_MIPI_TX_DATA_NUM] = 
{
   //No.      elm type , port_sel      ,  data_seq  , user id,         { { sub 0 ,addr, data }},{ sub 1 ,addr, data }},{ sub 2 ,addr, data}}, { sub 3, addr, data}}, { sub 4, addr data  } }},   
   { /* 0  */ UL1_MIPI_PA  , UL1_MIPI_PORT1, UL1_REG_W  ,    MIPI_USID_PA1_Set1   , { { 8264 ,{0x00, 0x00}}, { 8314 ,{0x00, 0x00}}, { 8365 ,{0x00, 0x00}}, { 8415 ,{0x00, 0x00}}, { 8466 ,{0x00, 0x00}} }},
   { /* 1  */ UL1_MIPI_PA  , UL1_MIPI_PORT1, UL1_REG_W  ,    MIPI_USID_PA1_Set1   , { { 8264 ,{0x01, 0x00}}, { 8314 ,{0x01, 0x00}}, { 8365 ,{0x01, 0x00}}, { 8415 ,{0x01, 0x00}}, { 8466 ,{0x01, 0x00}} }},
   { /* 2  */ UL1_MIPI_PA  , UL1_MIPI_PORT1, UL1_REG_W  ,    MIPI_USID_PA1_Set1   , { { 8264 ,{0x02, 0x00}}, { 8314 ,{0x02, 0x00}}, { 8365 ,{0x02, 0x00}}, { 8415 ,{0x02, 0x00}}, { 8466 ,{0x02, 0x00}} }},
   { /* 3  */ UL1_MIPI_PA  , UL1_MIPI_PORT1, UL1_REG_W  ,    MIPI_USID_PA1_Set1   , { { 8264 ,{0x03, 0x00}}, { 8314 ,{0x03, 0x00}}, { 8365 ,{0x03, 0x00}}, { 8415 ,{0x03, 0x00}}, { 8466 ,{0x03, 0x00}} }},
   { /* 4  */ UL1_MIPI_ASM  , UL1_MIPI_PORT0, UL1_REG_W  ,    MIPI_USID_ASM0_Set1    , { { 8264 ,{0x00, 0x80}}, { 8314 ,{0x00, 0x80}}, { 8365 ,{0x00, 0x80}}, { 8415 ,{0x00, 0x80}}, { 8466 ,{0x00, 0x80}} }},
   { /* 5  */ UL1_MIPI_ASM  , UL1_MIPI_PORT0, UL1_REG_W  ,    MIPI_USID_ASM0_Set1    , { { 8264 ,{0x03, 0x00}}, { 8314 ,{0x03, 0x00}}, { 8365 ,{0x03, 0x00}}, { 8415 ,{0x03, 0x00}}, { 8466 ,{0x03, 0x00}} }},
   { /* 6  */ UL1_MIPI_ASM  , UL1_MIPI_PORT0, UL1_REG_W  ,    MIPI_USID_ASM0_Set1    , { { 8264 ,{0x05, 0x00}}, { 8314 ,{0x05, 0x00}}, { 8365 ,{0x05, 0x00}}, { 8415 ,{0x05, 0x00}}, { 8466 ,{0x05, 0x00}} }},
   { /* 7  */ UL1_MIPI_ASM  , UL1_MIPI_PORT0, UL1_REG_W  ,    MIPI_USID_ASM0_Set1    , { { 8264 ,{0x02, 0x06}}, { 8314 ,{0x02, 0x06}}, { 8365 ,{0x02, 0x06}}, { 8415 ,{0x02, 0x06}}, { 8466 ,{0x02, 0x06}} }},
   { /* 8  */ UL1_MIPI_ASM  , UL1_MIPI_PORT0, UL1_REG_W  ,    MIPI_USID_ASM0_Set1    , { { 8264 ,{0x04, 0x08}}, { 8314 ,{0x04, 0x08}}, { 8365 ,{0x04, 0x08}}, { 8415 ,{0x04, 0x08}}, { 8466 ,{0x04, 0x08}} }},
   { /* 9  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL,   MIPI_USID_INIT0_Set1 , { { 8264 ,{0x00, 0x00}}, { 8314 ,{0x00, 0x00}}, { 8365 ,{0x00, 0x00}}, { 8415 ,{0x00, 0x00}}, { 8466 ,{0x00, 0x00}} }},
   { /* 10 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL,   MIPI_USID_INIT0_Set1 , { { 8264 ,{0x00, 0x00}}, { 8314 ,{0x00, 0x00}}, { 8365 ,{0x00, 0x00}}, { 8415 ,{0x00, 0x00}}, { 8466 ,{0x00, 0x00}} }},
   { /* 11 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL,   MIPI_USID_INIT0_Set1 , { { 8264 ,{0x00, 0x00}}, { 8314 ,{0x00, 0x00}}, { 8365 ,{0x00, 0x00}}, { 8415 ,{0x00, 0x00}}, { 8466 ,{0x00, 0x00}} }},
   { /* 12 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL,   MIPI_USID_INIT0_Set1 , { { 8264 ,{0x00, 0x00}}, { 8314 ,{0x00, 0x00}}, { 8365 ,{0x00, 0x00}}, { 8415 ,{0x00, 0x00}}, { 8466 ,{0x00, 0x00}} }},
   { /* 13 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL,   MIPI_USID_INIT0_Set1 , { { 8264 ,{0x00, 0x00}}, { 8314 ,{0x00, 0x00}}, { 8365 ,{0x00, 0x00}}, { 8415 ,{0x00, 0x00}}, { 8466 ,{0x00, 0x00}} }},
   { /* 14 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL,   MIPI_USID_INIT0_Set1 , { { 8264 ,{0x00, 0x00}}, { 8314 ,{0x00, 0x00}}, { 8365 ,{0x00, 0x00}}, { 8415 ,{0x00, 0x00}}, { 8466 ,{0x00, 0x00}} }},
   { /* 15 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL,   MIPI_USID_INIT0_Set1 , { { 8264 ,{0x00, 0x00}}, { 8314 ,{0x00, 0x00}}, { 8365 ,{0x00, 0x00}}, { 8415 ,{0x00, 0x00}}, { 8466 ,{0x00, 0x00}} }},
   { /* 16 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL,   MIPI_USID_INIT0_Set1 , { { 8264 ,{0x00, 0x00}}, { 8314 ,{0x00, 0x00}}, { 8365 ,{0x00, 0x00}}, { 8415 ,{0x00, 0x00}}, { 8466 ,{0x00, 0x00}} }},
   { /* 17 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL,   MIPI_USID_INIT0_Set1 , { { 8264 ,{0x00, 0x00}}, { 8314 ,{0x00, 0x00}}, { 8365 ,{0x00, 0x00}}, { 8415 ,{0x00, 0x00}}, { 8466 ,{0x00, 0x00}} }},
};


const UL1_MIPI_DATA_SUBBAND_TABLE_T UMTS_MIPI_TX_DATA_UMTSBand8_Set1[UL1_MIPI_TX_DATA_NUM] = 
{
   //No.      elm type , port_sel      ,  data_seq  , user id,         { { sub 0 ,addr, data }},{ sub 1 ,addr, data }},{ sub 2 ,addr, data}}, { sub 3, addr, data}}, { sub 4, addr data  } }},   
   { /* 0  */ UL1_MIPI_PA  , UL1_MIPI_PORT1, UL1_REG_W  ,    MIPI_USID_PA1_Set1   , { { 8824 ,{0x00, 0x00}}, { 8899 ,{0x00, 0x00}}, { 8975 ,{0x00, 0x00}}, { 9050 ,{0x00, 0x00}}, { 9126 ,{0x00, 0x00}} }},
   { /* 1  */ UL1_MIPI_PA  , UL1_MIPI_PORT1, UL1_REG_W  ,    MIPI_USID_PA1_Set1   , { { 8824 ,{0x01, 0x00}}, { 8899 ,{0x01, 0x00}}, { 8975 ,{0x01, 0x00}}, { 9050 ,{0x01, 0x00}}, { 9126 ,{0x01, 0x00}} }},
   { /* 2  */ UL1_MIPI_PA  , UL1_MIPI_PORT1, UL1_REG_W  ,    MIPI_USID_PA1_Set1   , { { 8824 ,{0x02, 0x00}}, { 8899 ,{0x02, 0x00}}, { 8975 ,{0x02, 0x00}}, { 9050 ,{0x02, 0x00}}, { 9126 ,{0x02, 0x00}} }},
   { /* 3  */ UL1_MIPI_PA  , UL1_MIPI_PORT1, UL1_REG_W  ,    MIPI_USID_PA1_Set1   , { { 8824 ,{0x03, 0x00}}, { 8899 ,{0x03, 0x00}}, { 8975 ,{0x03, 0x00}}, { 9050 ,{0x03, 0x00}}, { 9126 ,{0x03, 0x00}} }},
   { /* 4  */ UL1_MIPI_ASM , UL1_MIPI_PORT0, UL1_REG_W  ,    MIPI_USID_ASM0_Set1    , { { 8824 ,{0x00, 0x80}}, { 8899 ,{0x00, 0x80}}, { 8975 ,{0x00, 0x80}}, { 9050 ,{0x00, 0x80}}, { 9126 ,{0x00, 0x80}} }},
   { /* 5  */ UL1_MIPI_ASM , UL1_MIPI_PORT0, UL1_REG_W  ,    MIPI_USID_ASM0_Set1    , { { 8824 ,{0x03, 0x00}}, { 8899 ,{0x03, 0x00}}, { 8975 ,{0x03, 0x00}}, { 9050 ,{0x03, 0x00}}, { 9126 ,{0x03, 0x00}} }},
   { /* 6  */ UL1_MIPI_ASM , UL1_MIPI_PORT0, UL1_REG_W  ,    MIPI_USID_ASM0_Set1    , { { 8824 ,{0x05, 0x00}}, { 8899 ,{0x05, 0x00}}, { 8975 ,{0x05, 0x00}}, { 9050 ,{0x05, 0x00}}, { 9126 ,{0x05, 0x00}} }},
   { /* 7  */ UL1_MIPI_ASM , UL1_MIPI_PORT0, UL1_REG_W  ,    MIPI_USID_ASM0_Set1    , { { 8824 ,{0x02, 0x02}}, { 8899 ,{0x02, 0x02}}, { 8975 ,{0x02, 0x02}}, { 9050 ,{0x02, 0x02}}, { 9126 ,{0x02, 0x02}} }},
   { /* 8  */ UL1_MIPI_ASM , UL1_MIPI_PORT0, UL1_REG_W  ,    MIPI_USID_ASM0_Set1    , { { 8824 ,{0x04, 0x08}}, { 8899 ,{0x04, 0x08}}, { 8975 ,{0x04, 0x08}}, { 9050 ,{0x04, 0x08}}, { 9126 ,{0x04, 0x08}} }},
   { /* 9  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL,   MIPI_USID_INIT0_Set1 , { { 8824 ,{0x00, 0x00}}, { 8899 ,{0x00, 0x00}}, { 8975 ,{0x00, 0x00}}, { 9050 ,{0x00, 0x00}}, { 9126 ,{0x00, 0x00}} }},
   { /* 10 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL,   MIPI_USID_INIT0_Set1 , { { 8824 ,{0x00, 0x00}}, { 8899 ,{0x00, 0x00}}, { 8975 ,{0x00, 0x00}}, { 9050 ,{0x00, 0x00}}, { 9126 ,{0x00, 0x00}} }},
   { /* 11 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL,   MIPI_USID_INIT0_Set1 , { { 8824 ,{0x00, 0x00}}, { 8899 ,{0x00, 0x00}}, { 8975 ,{0x00, 0x00}}, { 9050 ,{0x00, 0x00}}, { 9126 ,{0x00, 0x00}} }},
   { /* 12 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL,   MIPI_USID_INIT0_Set1 , { { 8824 ,{0x00, 0x00}}, { 8899 ,{0x00, 0x00}}, { 8975 ,{0x00, 0x00}}, { 9050 ,{0x00, 0x00}}, { 9126 ,{0x00, 0x00}} }},
   { /* 13 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL,   MIPI_USID_INIT0_Set1 , { { 8824 ,{0x00, 0x00}}, { 8899 ,{0x00, 0x00}}, { 8975 ,{0x00, 0x00}}, { 9050 ,{0x00, 0x00}}, { 9126 ,{0x00, 0x00}} }},
   { /* 14 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL,   MIPI_USID_INIT0_Set1 , { { 8824 ,{0x00, 0x00}}, { 8899 ,{0x00, 0x00}}, { 8975 ,{0x00, 0x00}}, { 9050 ,{0x00, 0x00}}, { 9126 ,{0x00, 0x00}} }},
   { /* 15 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL,   MIPI_USID_INIT0_Set1 , { { 8824 ,{0x00, 0x00}}, { 8899 ,{0x00, 0x00}}, { 8975 ,{0x00, 0x00}}, { 9050 ,{0x00, 0x00}}, { 9126 ,{0x00, 0x00}} }},
   { /* 16 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL,   MIPI_USID_INIT0_Set1 , { { 8824 ,{0x00, 0x00}}, { 8899 ,{0x00, 0x00}}, { 8975 ,{0x00, 0x00}}, { 9050 ,{0x00, 0x00}}, { 9126 ,{0x00, 0x00}} }},
   { /* 17 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL,   MIPI_USID_INIT0_Set1 , { { 8824 ,{0x00, 0x00}}, { 8899 ,{0x00, 0x00}}, { 8975 ,{0x00, 0x00}}, { 9050 ,{0x00, 0x00}}, { 9126 ,{0x00, 0x00}} }},
};

const UL1_MIPI_DATA_SUBBAND_TABLE_T UMTS_MIPI_TX_DATA_UMTSBand3_Set1[]  = {{0}};
const UL1_MIPI_DATA_SUBBAND_TABLE_T UMTS_MIPI_TX_DATA_UMTSBand6_Set1[]  = {{0}};
const UL1_MIPI_DATA_SUBBAND_TABLE_T UMTS_MIPI_TX_DATA_UMTSBand9_Set1[]  = {{0}};
const UL1_MIPI_DATA_SUBBAND_TABLE_T UMTS_MIPI_TX_DATA_UMTSBand11_Set1[] = {{0}};
const UL1_MIPI_DATA_SUBBAND_TABLE_T UMTS_MIPI_TX_DATA_UMTSBand19_Set1[] = {{0}};

const UL1_MIPI_DATA_SUBBAND_TABLE_T* const UMTS_MIPI_TX_DATA_TABLE_Set1[] = 
{
   M_UMTS_TX_DATA(UMTSBandNone,Set1),                     /*UMTSUMTSBandNone*/
   M_UMTS_TX_DATA(RX_BAND_INDICATOR_0_Set1,Set1),   /*RX_BAND_INDICATOR_0_Set1*/
   M_UMTS_TX_DATA(RX_BAND_INDICATOR_1_Set1,Set1),   /*RX_BAND_INDICATOR_1_Set1*/
   M_UMTS_TX_DATA(RX_BAND_INDICATOR_2_Set1,Set1),   /*RX_BAND_INDICATOR_2_Set1*/
   M_UMTS_TX_DATA(RX_BAND_INDICATOR_3_Set1,Set1),   /*RX_BAND_INDICATOR_3_Set1*/
   M_UMTS_TX_DATA(RX_BAND_INDICATOR_4_Set1,Set1),   /*RX_BAND_INDICATOR_4_Set1*/
};

const UL1_UMTS_MIPI_TPC_T UMTS_MIPI_TPC_UMTSBandNone_Set1 = {{{0}}};

const UL1_UMTS_MIPI_TPC_T UMTS_MIPI_TPC_UMTSBand1_Set1 = 
{
   /* Event */
  {
   /* No.           elm type , data idx       , evt_type       , evt_offset     */
   /*                           { start, stop },                  ( us )         */
    { /* 0, Prf_7  */ UL1_MIPI_PA, { 0    , 3     }, UL1_MIPI_TPC_SET   , US2CHIPCNT(20)  },  /*highest power*/
    { /* 1, Prf_6  */ UL1_MIPI_PA, { 4    , 7     }, UL1_MIPI_TPC_SET   , US2CHIPCNT(20)  },
    { /* 2, Prf_5  */ UL1_MIPI_PA, { 8    , 11    }, UL1_MIPI_TPC_SET   , US2CHIPCNT(20)  },
    { /* 3, Prf_4  */ UL1_MIPI_PA, { 12   , 15    }, UL1_MIPI_TPC_SET   , US2CHIPCNT(20)  },
    { /* 4, Prf_3  */ UL1_MIPI_PA, { 16   , 19    }, UL1_MIPI_TPC_SET   , US2CHIPCNT(20)  },
    { /* 5, Prf_2  */ UL1_MIPI_PA, { 20   , 23    }, UL1_MIPI_TPC_SET   , US2CHIPCNT(20)  },
    { /* 6, Prf_1  */ UL1_MIPI_PA, { 24   , 27    }, UL1_MIPI_TPC_SET   , US2CHIPCNT(20)  },
    { /* 7, Prf_0  */ UL1_MIPI_PA, { 28   , 31    }, UL1_MIPI_TPC_SET   , US2CHIPCNT(20)  },  /*lowest power*/
  },

  /* Data */
  {
   //elm type  , port_sel       , data_seq, user id,         {{sub 0, addr, data}}, {{sub 1, addr, data}}, {{sub 2, addr, data} , {{sub 3, addr, data}}, {{sub 4, addr, data}
    {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA0_Set1,   {{19224, {0x00, 0x1C}}, {19362, {0x00, 0x1C}}, {19500, {0x00, 0x1C}}, {19638, {0x00, 0x1C}}, {19776, {0x00, 0x1C}}}},  /*L7, TPC IDX 0*/
    {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA0_Set1,   {{19224, {0x01, 0xCA}}, {19362, {0x01, 0xCB}}, {19500, {0x01, 0xCB}}, {19638, {0x01, 0xCC}}, {19776, {0x01, 0xCC}}}},
    {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA0_Set1,   {{19224, {0x02, 0x20}}, {19362, {0x02, 0x20}}, {19500, {0x02, 0x20}}, {19638, {0x02, 0x20}}, {19776, {0x02, 0x20}}}},
    {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA0_Set1,   {{19224, {0x03, 0x8B}}, {19362, {0x03, 0x8B}}, {19500, {0x03, 0x8B}}, {19638, {0x03, 0x8B}}, {19776, {0x03, 0x8B}}}},
    {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA0_Set1,   {{19224, {0x00, 0x1C}}, {19362, {0x00, 0x1C}}, {19500, {0x00, 0x1C}}, {19638, {0x00, 0x1C}}, {19776, {0x00, 0x1C}}}},  /*L6, TPC IDX 2*/
    {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA0_Set1,   {{19224, {0x01, 0x47}}, {19362, {0x01, 0x47}}, {19500, {0x01, 0x47}}, {19638, {0x01, 0x47}}, {19776, {0x01, 0x47}}}},
    {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA0_Set1,   {{19224, {0x02, 0x20}}, {19362, {0x02, 0x20}}, {19500, {0x02, 0x20}}, {19638, {0x02, 0x20}}, {19776, {0x02, 0x20}}}},
    {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA0_Set1,   {{19224, {0x03, 0x86}}, {19362, {0x03, 0x86}}, {19500, {0x03, 0x86}}, {19638, {0x03, 0x86}}, {19776, {0x03, 0x86}}}},
    {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA0_Set1,   {{19224, {0x00, 0x1C}}, {19362, {0x00, 0x1C}}, {19500, {0x00, 0x1C}}, {19638, {0x00, 0x1C}}, {19776, {0x00, 0x1C}}}},  /*L5, TPC IDX 4*/
    {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA0_Set1,   {{19224, {0x01, 0x46}}, {19362, {0x01, 0x46}}, {19500, {0x01, 0x46}}, {19638, {0x01, 0x46}}, {19776, {0x01, 0x46}}}},
    {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA0_Set1,   {{19224, {0x02, 0x20}}, {19362, {0x02, 0x20}}, {19500, {0x02, 0x20}}, {19638, {0x02, 0x20}}, {19776, {0x02, 0x20}}}},
    {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA0_Set1,   {{19224, {0x03, 0x86}}, {19362, {0x03, 0x86}}, {19500, {0x03, 0x86}}, {19638, {0x03, 0x86}}, {19776, {0x03, 0x86}}}},
    {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA0_Set1,   {{19224, {0x00, 0x1C}}, {19362, {0x00, 0x1C}}, {19500, {0x00, 0x1C}}, {19638, {0x00, 0x1C}}, {19776, {0x00, 0x1C}}}},  /*L4, TPC IDX 6*/
    {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA0_Set1,   {{19224, {0x01, 0x36}}, {19362, {0x01, 0x36}}, {19500, {0x01, 0x36}}, {19638, {0x01, 0x36}}, {19776, {0x01, 0x36}}}},
    {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA0_Set1,   {{19224, {0x02, 0x20}}, {19362, {0x02, 0x20}}, {19500, {0x02, 0x20}}, {19638, {0x02, 0x20}}, {19776, {0x02, 0x20}}}},
    {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA0_Set1,   {{19224, {0x03, 0x86}}, {19362, {0x03, 0x86}}, {19500, {0x03, 0x86}}, {19638, {0x03, 0x86}}, {19776, {0x03, 0x86}}}},
    {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA0_Set1,   {{19224, {0x00, 0x1C}}, {19362, {0x00, 0x1C}}, {19500, {0x00, 0x1C}}, {19638, {0x00, 0x1C}}, {19776, {0x00, 0x1C}}}},  /*L3, TPC IDX 9*/
    {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA0_Set1,   {{19224, {0x01, 0x35}}, {19362, {0x01, 0x35}}, {19500, {0x01, 0x35}}, {19638, {0x01, 0x35}}, {19776, {0x01, 0x35}}}},
    {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA0_Set1,   {{19224, {0x02, 0x20}}, {19362, {0x02, 0x20}}, {19500, {0x02, 0x20}}, {19638, {0x02, 0x20}}, {19776, {0x02, 0x20}}}},
    {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA0_Set1,   {{19224, {0x03, 0x86}}, {19362, {0x03, 0x86}}, {19500, {0x03, 0x86}}, {19638, {0x03, 0x86}}, {19776, {0x03, 0x86}}}},
    {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA0_Set1,   {{19224, {0x00, 0x1C}}, {19362, {0x00, 0x1C}}, {19500, {0x00, 0x1C}}, {19638, {0x00, 0x1C}}, {19776, {0x00, 0x1C}}}},  /*L2, TPC IDX 15, Hyst1*/
    {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA0_Set1,   {{19224, {0x01, 0x25}}, {19362, {0x01, 0x25}}, {19500, {0x01, 0x25}}, {19638, {0x01, 0x25}}, {19776, {0x01, 0x25}}}},
    {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA0_Set1,   {{19224, {0x02, 0x20}}, {19362, {0x02, 0x20}}, {19500, {0x02, 0x20}}, {19638, {0x02, 0x20}}, {19776, {0x02, 0x20}}}},
    {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA0_Set1,   {{19224, {0x03, 0x86}}, {19362, {0x03, 0x86}}, {19500, {0x03, 0x86}}, {19638, {0x03, 0x86}}, {19776, {0x03, 0x86}}}},
    {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA0_Set1,   {{19224, {0x00, 0x1C}}, {19362, {0x00, 0x1C}}, {19500, {0x00, 0x1C}}, {19638, {0x00, 0x1C}}, {19776, {0x00, 0x1C}}}},  /*L1, TPC IDX 18*/
    {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA0_Set1,   {{19224, {0x01, 0x16}}, {19362, {0x01, 0x16}}, {19500, {0x01, 0x16}}, {19638, {0x01, 0x16}}, {19776, {0x01, 0x16}}}},
    {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA0_Set1,   {{19224, {0x02, 0x20}}, {19362, {0x02, 0x20}}, {19500, {0x02, 0x20}}, {19638, {0x02, 0x20}}, {19776, {0x02, 0x20}}}},
    {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA0_Set1,   {{19224, {0x03, 0x86}}, {19362, {0x03, 0x86}}, {19500, {0x03, 0x86}}, {19638, {0x03, 0x86}}, {19776, {0x03, 0x86}}}},
    {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA0_Set1,   {{19224, {0x00, 0x1C}}, {19362, {0x00, 0x1C}}, {19500, {0x00, 0x1C}}, {19638, {0x00, 0x1C}}, {19776, {0x00, 0x1C}}}},  /*L0, TPC IDX 25, Hyst2*/
    {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA0_Set1,   {{19224, {0x01, 0x15}}, {19362, {0x01, 0x15}}, {19500, {0x01, 0x15}}, {19638, {0x01, 0x15}}, {19776, {0x01, 0x15}}}},
    {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA0_Set1,   {{19224, {0x02, 0x20}}, {19362, {0x02, 0x20}}, {19500, {0x02, 0x20}}, {19638, {0x02, 0x20}}, {19776, {0x02, 0x20}}}},
    {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA0_Set1,   {{19224, {0x03, 0x86}}, {19362, {0x03, 0x86}}, {19500, {0x03, 0x86}}, {19638, {0x03, 0x86}}, {19776, {0x03, 0x86}}}},
    {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL, MIPI_USID_INIT0_Set1, {{19224, {0x00, 0x00}}, {19362, {0x00, 0x00}}, {19500, {0x00, 0x00}}, {19638, {0x00, 0x00}}, {19776, {0x00, 0x00}}}},
    {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL, MIPI_USID_INIT0_Set1, {{19224, {0x00, 0x00}}, {19362, {0x00, 0x00}}, {19500, {0x00, 0x00}}, {19638, {0x00, 0x00}}, {19776, {0x00, 0x00}}}},
    {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL, MIPI_USID_INIT0_Set1, {{19224, {0x00, 0x00}}, {19362, {0x00, 0x00}}, {19500, {0x00, 0x00}}, {19638, {0x00, 0x00}}, {19776, {0x00, 0x00}}}},
    {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL, MIPI_USID_INIT0_Set1, {{19224, {0x00, 0x00}}, {19362, {0x00, 0x00}}, {19500, {0x00, 0x00}}, {19638, {0x00, 0x00}}, {19776, {0x00, 0x00}}}},
    {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL, MIPI_USID_INIT0_Set1, {{19224, {0x00, 0x00}}, {19362, {0x00, 0x00}}, {19500, {0x00, 0x00}}, {19638, {0x00, 0x00}}, {19776, {0x00, 0x00}}}},
    {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL, MIPI_USID_INIT0_Set1, {{19224, {0x00, 0x00}}, {19362, {0x00, 0x00}}, {19500, {0x00, 0x00}}, {19638, {0x00, 0x00}}, {19776, {0x00, 0x00}}}},
    {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL, MIPI_USID_INIT0_Set1, {{19224, {0x00, 0x00}}, {19362, {0x00, 0x00}}, {19500, {0x00, 0x00}}, {19638, {0x00, 0x00}}, {19776, {0x00, 0x00}}}},
    {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL, MIPI_USID_INIT0_Set1, {{19224, {0x00, 0x00}}, {19362, {0x00, 0x00}}, {19500, {0x00, 0x00}}, {19638, {0x00, 0x00}}, {19776, {0x00, 0x00}}}} 
  }
};


const UL1_UMTS_MIPI_TPC_T UMTS_MIPI_TPC_UMTSBand2_Set1 = 
{
   /* Event */
   {
    /* No.           elm type , data idx       , evt_type       , evt_offset     */
    /*                           { start, stop },                  ( us )         */
     { /* 0, Prf_7  */ UL1_MIPI_PA, { 0    , 3     }, UL1_MIPI_TPC_SET   , US2CHIPCNT(20)  },  /*highest power*/
     { /* 1, Prf_6  */ UL1_MIPI_PA, { 4    , 7     }, UL1_MIPI_TPC_SET   , US2CHIPCNT(20)  },
     { /* 2, Prf_5  */ UL1_MIPI_PA, { 8    , 11    }, UL1_MIPI_TPC_SET   , US2CHIPCNT(20)  },
     { /* 3, Prf_4  */ UL1_MIPI_PA, { 12   , 15    }, UL1_MIPI_TPC_SET   , US2CHIPCNT(20)  },
     { /* 4, Prf_3  */ UL1_MIPI_PA, { 16   , 19    }, UL1_MIPI_TPC_SET   , US2CHIPCNT(20)  },
     { /* 5, Prf_2  */ UL1_MIPI_PA, { 20   , 23    }, UL1_MIPI_TPC_SET   , US2CHIPCNT(20)  },
     { /* 6, Prf_1  */ UL1_MIPI_PA, { 24   , 27    }, UL1_MIPI_TPC_SET   , US2CHIPCNT(20)  },
     { /* 7, Prf_0  */ UL1_MIPI_PA, { 28   , 31    }, UL1_MIPI_TPC_SET   , US2CHIPCNT(20)  },  /*lowest power*/
   },
   
   /* Data */
   {
      //elm type  , port_sel     , data_seq, user id,         {{sub 0, addr, data}}, {{sub 1, addr, data}}, {{sub 2, addr, data} , {{sub 3, addr, data}}, {{sub 4, addr, data}     
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA0_Set1,   {{18524, {0x00, 0x2C}}, {18662, {0x00, 0x2C}}, {18800, {0x00, 0x2C}}, {18938, {0x00, 0x2C}}, {19076, {0x00, 0x2C}} }},  /*L7, TPC IDX 0*/
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA0_Set1,   {{18524, {0x01, 0xCA}}, {18662, {0x01, 0xCA}}, {18800, {0x01, 0xCA}}, {18938, {0x01, 0xCA}}, {19076, {0x01, 0xCA}} }},
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA0_Set1,   {{18524, {0x02, 0x30}}, {18662, {0x02, 0x30}}, {18800, {0x02, 0x30}}, {18938, {0x02, 0x30}}, {19076, {0x02, 0x30}} }},
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA0_Set1,   {{18524, {0x03, 0x8B}}, {18662, {0x03, 0x8B}}, {18800, {0x03, 0x8B}}, {18938, {0x03, 0x8B}}, {19076, {0x03, 0x8B}} }},
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA0_Set1,   {{18524, {0x00, 0x2C}}, {18662, {0x00, 0x2C}}, {18800, {0x00, 0x2C}}, {18938, {0x00, 0x2C}}, {19076, {0x00, 0x2C}} }},  /*L6, TPC IDX 2*/
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA0_Set1,   {{18524, {0x01, 0x77}}, {18662, {0x01, 0x77}}, {18800, {0x01, 0x77}}, {18938, {0x01, 0x77}}, {19076, {0x01, 0x77}} }},
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA0_Set1,   {{18524, {0x02, 0x30}}, {18662, {0x02, 0x30}}, {18800, {0x02, 0x30}}, {18938, {0x02, 0x30}}, {19076, {0x02, 0x30}} }},
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA0_Set1,   {{18524, {0x03, 0x86}}, {18662, {0x03, 0x86}}, {18800, {0x03, 0x86}}, {18938, {0x03, 0x86}}, {19076, {0x03, 0x86}} }},
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA0_Set1,   {{18524, {0x00, 0x2C}}, {18662, {0x00, 0x2C}}, {18800, {0x00, 0x2C}}, {18938, {0x00, 0x2C}}, {19076, {0x00, 0x2C}} }},  /*L5, TPC IDX 4*/
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA0_Set1,   {{18524, {0x01, 0x77}}, {18662, {0x01, 0x77}}, {18800, {0x01, 0x77}}, {18938, {0x01, 0x77}}, {19076, {0x01, 0x77}} }},
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA0_Set1,   {{18524, {0x02, 0x30}}, {18662, {0x02, 0x30}}, {18800, {0x02, 0x30}}, {18938, {0x02, 0x30}}, {19076, {0x02, 0x30}} }},
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA0_Set1,   {{18524, {0x03, 0x86}}, {18662, {0x03, 0x86}}, {18800, {0x03, 0x86}}, {18938, {0x03, 0x86}}, {19076, {0x03, 0x86}} }},
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA0_Set1,   {{18524, {0x00, 0x2C}}, {18662, {0x00, 0x2C}}, {18800, {0x00, 0x2C}}, {18938, {0x00, 0x2C}}, {19076, {0x00, 0x2C}} }},  /*L4, TPC IDX 6*/
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA0_Set1,   {{18524, {0x01, 0x77}}, {18662, {0x01, 0x77}}, {18800, {0x01, 0x77}}, {18938, {0x01, 0x77}}, {19076, {0x01, 0x77}} }},
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA0_Set1,   {{18524, {0x02, 0x30}}, {18662, {0x02, 0x30}}, {18800, {0x02, 0x30}}, {18938, {0x02, 0x30}}, {19076, {0x02, 0x30}} }},
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA0_Set1,   {{18524, {0x03, 0x86}}, {18662, {0x03, 0x86}}, {18800, {0x03, 0x86}}, {18938, {0x03, 0x86}}, {19076, {0x03, 0x86}} }},
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA0_Set1,   {{18524, {0x00, 0x2C}}, {18662, {0x00, 0x2C}}, {18800, {0x00, 0x2C}}, {18938, {0x00, 0x2C}}, {19076, {0x00, 0x2C}} }},  /*L3, TPC IDX 9*/
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA0_Set1,   {{18524, {0x01, 0x54}}, {18662, {0x01, 0x54}}, {18800, {0x01, 0x54}}, {18938, {0x01, 0x54}}, {19076, {0x01, 0x54}} }},
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA0_Set1,   {{18524, {0x02, 0x30}}, {18662, {0x02, 0x30}}, {18800, {0x02, 0x30}}, {18938, {0x02, 0x30}}, {19076, {0x02, 0x30}} }},
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA0_Set1,   {{18524, {0x03, 0x86}}, {18662, {0x03, 0x86}}, {18800, {0x03, 0x86}}, {18938, {0x03, 0x86}}, {19076, {0x03, 0x86}} }},
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA0_Set1,   {{18524, {0x00, 0x2C}}, {18662, {0x00, 0x2C}}, {18800, {0x00, 0x2C}}, {18938, {0x00, 0x2C}}, {19076, {0x00, 0x2C}} }},  /*L2, TPC IDX 15, Hyst1*/
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA0_Set1,   {{18524, {0x01, 0x54}}, {18662, {0x01, 0x54}}, {18800, {0x01, 0x54}}, {18938, {0x01, 0x54}}, {19076, {0x01, 0x54}} }},
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA0_Set1,   {{18524, {0x02, 0x30}}, {18662, {0x02, 0x30}}, {18800, {0x02, 0x30}}, {18938, {0x02, 0x30}}, {19076, {0x02, 0x30}} }},
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA0_Set1,   {{18524, {0x03, 0x86}}, {18662, {0x03, 0x86}}, {18800, {0x03, 0x86}}, {18938, {0x03, 0x86}}, {19076, {0x03, 0x86}} }},
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA0_Set1,   {{18524, {0x00, 0x2C}}, {18662, {0x00, 0x2C}}, {18800, {0x00, 0x2C}}, {18938, {0x00, 0x2C}}, {19076, {0x00, 0x2C}} }},  /*L1, TPC IDX 18*/
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA0_Set1,   {{18524, {0x01, 0x34}}, {18662, {0x01, 0x34}}, {18800, {0x01, 0x34}}, {18938, {0x01, 0x34}}, {19076, {0x01, 0x34}} }},
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA0_Set1,   {{18524, {0x02, 0x30}}, {18662, {0x02, 0x30}}, {18800, {0x02, 0x30}}, {18938, {0x02, 0x30}}, {19076, {0x02, 0x30}} }},
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA0_Set1,   {{18524, {0x03, 0x86}}, {18662, {0x03, 0x86}}, {18800, {0x03, 0x86}}, {18938, {0x03, 0x86}}, {19076, {0x03, 0x86}} }},
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA0_Set1,   {{18524, {0x00, 0x2C}}, {18662, {0x00, 0x2C}}, {18800, {0x00, 0x2C}}, {18938, {0x00, 0x2C}}, {19076, {0x00, 0x2C}} }},  /*L0, TPC IDX 25, Hyst2*/
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA0_Set1,   {{18524, {0x01, 0x23}}, {18662, {0x01, 0x23}}, {18800, {0x01, 0x23}}, {18938, {0x01, 0x23}}, {19076, {0x01, 0x23}} }},
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA0_Set1,   {{18524, {0x02, 0x30}}, {18662, {0x02, 0x30}}, {18800, {0x02, 0x30}}, {18938, {0x02, 0x30}}, {19076, {0x02, 0x30}} }},
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA0_Set1,   {{18524, {0x03, 0x86}}, {18662, {0x03, 0x86}}, {18800, {0x03, 0x86}}, {18938, {0x03, 0x86}}, {19076, {0x03, 0x86}} }},
     {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL, MIPI_USID_INIT0_Set1, {{18524, {0x00, 0x00}}, {18662, {0x00, 0x00}}, {18800, {0x00, 0x00}}, {18938, {0x00, 0x00}}, {19076, {0x00, 0x00}} }},
     {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL, MIPI_USID_INIT0_Set1, {{18524, {0x00, 0x00}}, {18662, {0x00, 0x00}}, {18800, {0x00, 0x00}}, {18938, {0x00, 0x00}}, {19076, {0x00, 0x00}} }},
     {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL, MIPI_USID_INIT0_Set1, {{18524, {0x00, 0x00}}, {18662, {0x00, 0x00}}, {18800, {0x00, 0x00}}, {18938, {0x00, 0x00}}, {19076, {0x00, 0x00}} }},
     {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL, MIPI_USID_INIT0_Set1, {{18524, {0x00, 0x00}}, {18662, {0x00, 0x00}}, {18800, {0x00, 0x00}}, {18938, {0x00, 0x00}}, {19076, {0x00, 0x00}} }},
     {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL, MIPI_USID_INIT0_Set1, {{18524, {0x00, 0x00}}, {18662, {0x00, 0x00}}, {18800, {0x00, 0x00}}, {18938, {0x00, 0x00}}, {19076, {0x00, 0x00}} }},
     {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL, MIPI_USID_INIT0_Set1, {{18524, {0x00, 0x00}}, {18662, {0x00, 0x00}}, {18800, {0x00, 0x00}}, {18938, {0x00, 0x00}}, {19076, {0x00, 0x00}} }},
     {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL, MIPI_USID_INIT0_Set1, {{18524, {0x00, 0x00}}, {18662, {0x00, 0x00}}, {18800, {0x00, 0x00}}, {18938, {0x00, 0x00}}, {19076, {0x00, 0x00}} }},
     {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL, MIPI_USID_INIT0_Set1, {{18524, {0x00, 0x00}}, {18662, {0x00, 0x00}}, {18800, {0x00, 0x00}}, {18938, {0x00, 0x00}}, {19076, {0x00, 0x00}} }}
   }
};

const UL1_UMTS_MIPI_TPC_T UMTS_MIPI_TPC_UMTSBand4_Set1 = 
{
   /* Event */
   {
    /* No.           elm type , data idx       , evt_type       , evt_offset     */
    /*                           { start, stop },                  ( us )         */
     { /* 0, Prf_7  */ UL1_MIPI_PA, { 0    , 3     }, UL1_MIPI_TPC_SET   , US2CHIPCNT(20)  },  /*highest power*/
     { /* 1, Prf_6  */ UL1_MIPI_PA, { 4    , 7     }, UL1_MIPI_TPC_SET   , US2CHIPCNT(20)  },
     { /* 2, Prf_5  */ UL1_MIPI_PA, { 8    , 11    }, UL1_MIPI_TPC_SET   , US2CHIPCNT(20)  },
     { /* 3, Prf_4  */ UL1_MIPI_PA, { 12   , 15    }, UL1_MIPI_TPC_SET   , US2CHIPCNT(20)  },
     { /* 4, Prf_3  */ UL1_MIPI_PA, { 16   , 19    }, UL1_MIPI_TPC_SET   , US2CHIPCNT(20)  },
     { /* 5, Prf_2  */ UL1_MIPI_PA, { 20   , 23    }, UL1_MIPI_TPC_SET   , US2CHIPCNT(20)  },
     { /* 6, Prf_1  */ UL1_MIPI_PA, { 24   , 27    }, UL1_MIPI_TPC_SET   , US2CHIPCNT(20)  },
     { /* 7, Prf_0  */ UL1_MIPI_PA, { 28   , 31    }, UL1_MIPI_TPC_SET   , US2CHIPCNT(20)  },  /*lowest power*/
   },
   
   /* Data */
   {                                                                                                                                                                               
      //elm type  , port_sel     , data_seq, user id,         {{sub 0, addr, data}}, {{sub 1, addr, data}}, {{sub 2, addr, data} , {{sub 3, addr, data}}, {{sub 4, addr, data}     
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA0_Set1,   {{17124, {0x00, 0x14}}, {17224, {0x00, 0x14}}, {17324, {0x00, 0x14}}, {17425, {0x00, 0x14}}, {17526, {0x00, 0x14}} }},  /*L7, TPC IDX 0*/        
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA0_Set1,   {{17124, {0x01, 0xC8}}, {17224, {0x01, 0xC8}}, {17324, {0x01, 0xC8}}, {17425, {0x01, 0xC8}}, {17526, {0x01, 0xC8}} }},                           
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA0_Set1,   {{17124, {0x02, 0x40}}, {17224, {0x02, 0x40}}, {17324, {0x02, 0x40}}, {17425, {0x02, 0x40}}, {17526, {0x02, 0x40}} }},                           
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA0_Set1,   {{17124, {0x03, 0x8A}}, {17224, {0x03, 0x8A}}, {17324, {0x03, 0x8A}}, {17425, {0x03, 0x8A}}, {17526, {0x03, 0x8A}} }},                           
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA0_Set1,   {{17124, {0x00, 0x14}}, {17224, {0x00, 0x14}}, {17324, {0x00, 0x14}}, {17425, {0x00, 0x14}}, {17526, {0x00, 0x14}} }},  /*L6, TPC IDX 2*/        
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA0_Set1,   {{17124, {0x01, 0x95}}, {17224, {0x01, 0x95}}, {17324, {0x01, 0x95}}, {17425, {0x01, 0x95}}, {17526, {0x01, 0x95}} }},                           
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA0_Set1,   {{17124, {0x02, 0x40}}, {17224, {0x02, 0x40}}, {17324, {0x02, 0x40}}, {17425, {0x02, 0x40}}, {17526, {0x02, 0x40}} }},
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA0_Set1,   {{17124, {0x03, 0x86}}, {17224, {0x03, 0x86}}, {17324, {0x03, 0x86}}, {17425, {0x03, 0x86}}, {17526, {0x03, 0x86}} }},                           
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA0_Set1,   {{17124, {0x00, 0x14}}, {17224, {0x00, 0x14}}, {17324, {0x00, 0x14}}, {17425, {0x00, 0x14}}, {17526, {0x00, 0x14}} }},  /*L5, TPC IDX 4*/        
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA0_Set1,   {{17124, {0x01, 0x75}}, {17224, {0x01, 0x75}}, {17324, {0x01, 0x75}}, {17425, {0x01, 0x75}}, {17526, {0x01, 0x75}} }},                           
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA0_Set1,   {{17124, {0x02, 0x40}}, {17224, {0x02, 0x40}}, {17324, {0x02, 0x40}}, {17425, {0x02, 0x40}}, {17526, {0x02, 0x40}} }},
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA0_Set1,   {{17124, {0x03, 0x86}}, {17224, {0x03, 0x86}}, {17324, {0x03, 0x86}}, {17425, {0x03, 0x86}}, {17526, {0x03, 0x86}} }},                           
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA0_Set1,   {{17124, {0x00, 0x14}}, {17224, {0x00, 0x14}}, {17324, {0x00, 0x14}}, {17425, {0x00, 0x14}}, {17526, {0x00, 0x14}} }},  /*L4, TPC IDX 6*/        
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA0_Set1,   {{17124, {0x01, 0x75}}, {17224, {0x01, 0x75}}, {17324, {0x01, 0x75}}, {17425, {0x01, 0x75}}, {17526, {0x01, 0x75}} }},                           
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA0_Set1,   {{17124, {0x02, 0x40}}, {17224, {0x02, 0x40}}, {17324, {0x02, 0x40}}, {17425, {0x02, 0x40}}, {17526, {0x02, 0x40}} }},
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA0_Set1,   {{17124, {0x03, 0x86}}, {17224, {0x03, 0x86}}, {17324, {0x03, 0x86}}, {17425, {0x03, 0x86}}, {17526, {0x03, 0x86}} }},                           
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA0_Set1,   {{17124, {0x00, 0x14}}, {17224, {0x00, 0x14}}, {17324, {0x00, 0x14}}, {17425, {0x00, 0x14}}, {17526, {0x00, 0x14}} }},  /*L3, TPC IDX 9*/        
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA0_Set1,   {{17124, {0x01, 0x44}}, {17224, {0x01, 0x44}}, {17324, {0x01, 0x44}}, {17425, {0x01, 0x44}}, {17526, {0x01, 0x44}} }},                           
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA0_Set1,   {{17124, {0x02, 0x40}}, {17224, {0x02, 0x40}}, {17324, {0x02, 0x40}}, {17425, {0x02, 0x40}}, {17526, {0x02, 0x40}} }},
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA0_Set1,   {{17124, {0x03, 0x86}}, {17224, {0x03, 0x86}}, {17324, {0x03, 0x86}}, {17425, {0x03, 0x86}}, {17526, {0x03, 0x86}} }},                           
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA0_Set1,   {{17124, {0x00, 0x14}}, {17224, {0x00, 0x14}}, {17324, {0x00, 0x14}}, {17425, {0x00, 0x14}}, {17526, {0x00, 0x14}} }},  /*L2, TPC IDX 15, Hyst1*/
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA0_Set1,   {{17124, {0x01, 0x44}}, {17224, {0x01, 0x44}}, {17324, {0x01, 0x44}}, {17425, {0x01, 0x44}}, {17526, {0x01, 0x44}} }},                           
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA0_Set1,   {{17124, {0x02, 0x40}}, {17224, {0x02, 0x40}}, {17324, {0x02, 0x40}}, {17425, {0x02, 0x40}}, {17526, {0x02, 0x40}} }},
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA0_Set1,   {{17124, {0x03, 0x86}}, {17224, {0x03, 0x86}}, {17324, {0x03, 0x86}}, {17425, {0x03, 0x86}}, {17526, {0x03, 0x86}} }},                           
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA0_Set1,   {{17124, {0x00, 0x14}}, {17224, {0x00, 0x14}}, {17324, {0x00, 0x14}}, {17425, {0x00, 0x14}}, {17526, {0x00, 0x14}} }},  /*L1, TPC IDX 18*/       
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA0_Set1,   {{17124, {0x01, 0x26}}, {17224, {0x01, 0x26}}, {17324, {0x01, 0x26}}, {17425, {0x01, 0x26}}, {17526, {0x01, 0x26}} }},                           
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA0_Set1,   {{17124, {0x02, 0x40}}, {17224, {0x02, 0x40}}, {17324, {0x02, 0x40}}, {17425, {0x02, 0x40}}, {17526, {0x02, 0x40}} }},
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA0_Set1,   {{17124, {0x03, 0x86}}, {17224, {0x03, 0x86}}, {17324, {0x03, 0x86}}, {17425, {0x03, 0x86}}, {17526, {0x03, 0x86}} }},                           
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA0_Set1,   {{17124, {0x00, 0x14}}, {17224, {0x00, 0x14}}, {17324, {0x00, 0x14}}, {17425, {0x00, 0x14}}, {17526, {0x00, 0x14}} }},  /*L0, TPC IDX 25, Hyst2*/
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA0_Set1,   {{17124, {0x01, 0x23}}, {17224, {0x01, 0x23}}, {17324, {0x01, 0x23}}, {17425, {0x01, 0x23}}, {17526, {0x01, 0x23}} }},                           
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA0_Set1,   {{17124, {0x02, 0x40}}, {17224, {0x02, 0x40}}, {17324, {0x02, 0x40}}, {17425, {0x02, 0x40}}, {17526, {0x02, 0x40}} }},
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA0_Set1,   {{17124, {0x03, 0x86}}, {17224, {0x03, 0x86}}, {17324, {0x03, 0x86}}, {17425, {0x03, 0x86}}, {17526, {0x03, 0x86}} }},                           
     {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL ,MIPI_USID_INIT0_Set1, {{17124, {0x00, 0x00}}, {17224, {0x00, 0x00}}, {17324, {0x00, 0x00}}, {17425, {0x00, 0x00}}, {17526, {0x00, 0x00}} }},                           
     {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL ,MIPI_USID_INIT0_Set1, {{17124, {0x00, 0x00}}, {17224, {0x00, 0x00}}, {17324, {0x00, 0x00}}, {17425, {0x00, 0x00}}, {17526, {0x00, 0x00}} }},                           
     {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL ,MIPI_USID_INIT0_Set1, {{17124, {0x00, 0x00}}, {17224, {0x00, 0x00}}, {17324, {0x00, 0x00}}, {17425, {0x00, 0x00}}, {17526, {0x00, 0x00}} }},                           
     {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL ,MIPI_USID_INIT0_Set1, {{17124, {0x00, 0x00}}, {17224, {0x00, 0x00}}, {17324, {0x00, 0x00}}, {17425, {0x00, 0x00}}, {17526, {0x00, 0x00}} }},                           
     {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL ,MIPI_USID_INIT0_Set1, {{17124, {0x00, 0x00}}, {17224, {0x00, 0x00}}, {17324, {0x00, 0x00}}, {17425, {0x00, 0x00}}, {17526, {0x00, 0x00}} }},                           
     {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL ,MIPI_USID_INIT0_Set1, {{17124, {0x00, 0x00}}, {17224, {0x00, 0x00}}, {17324, {0x00, 0x00}}, {17425, {0x00, 0x00}}, {17526, {0x00, 0x00}} }},                           
     {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL ,MIPI_USID_INIT0_Set1, {{17124, {0x00, 0x00}}, {17224, {0x00, 0x00}}, {17324, {0x00, 0x00}}, {17425, {0x00, 0x00}}, {17526, {0x00, 0x00}} }},                           
     {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL ,MIPI_USID_INIT0_Set1, {{17124, {0x00, 0x00}}, {17224, {0x00, 0x00}}, {17324, {0x00, 0x00}}, {17425, {0x00, 0x00}}, {17526, {0x00, 0x00}} }}                            
   }                                                                            
};


const UL1_UMTS_MIPI_TPC_T UMTS_MIPI_TPC_UMTSBand5_Set1 = 
{
   /* Event */
   {
    /* No.           elm type , data idx       , evt_type       , evt_offset     */
    /*                           { start, stop },                  ( us )         */
     { /* 0, Prf_7  */ UL1_MIPI_PA, { 0    , 3     }, UL1_MIPI_TPC_SET   , US2CHIPCNT(20)  },  /*highest power*/
     { /* 1, Prf_6  */ UL1_MIPI_PA, { 4    , 7     }, UL1_MIPI_TPC_SET   , US2CHIPCNT(20)  },
     { /* 2, Prf_5  */ UL1_MIPI_PA, { 8    , 11    }, UL1_MIPI_TPC_SET   , US2CHIPCNT(20)  },
     { /* 3, Prf_4  */ UL1_MIPI_PA, { 12   , 15    }, UL1_MIPI_TPC_SET   , US2CHIPCNT(20)  },
     { /* 4, Prf_3  */ UL1_MIPI_PA, { 16   , 19    }, UL1_MIPI_TPC_SET   , US2CHIPCNT(20)  },
     { /* 5, Prf_2  */ UL1_MIPI_PA, { 20   , 23    }, UL1_MIPI_TPC_SET   , US2CHIPCNT(20)  },
     { /* 6, Prf_1  */ UL1_MIPI_PA, { 24   , 27    }, UL1_MIPI_TPC_SET   , US2CHIPCNT(20)  },
     { /* 7, Prf_0  */ UL1_MIPI_PA, { 28   , 31    }, UL1_MIPI_TPC_SET   , US2CHIPCNT(20)  },  /*lowest power*/
   },
   
   /* Data */
   {                                                                                                                                                                               
      //elm type  , port_sel     , data_seq, user id,         {{sub 0, addr, data}}, {{sub 1, addr, data}}, {{sub 2, addr, data} , {{sub 3, addr, data}}, {{sub 4, addr, data}     
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA1_Set1,   {{8264, {0x00, 0x0C}}, {8314, {0x00, 0x0C}}, {8365, {0x00, 0x0C}}, {8415, {0x00, 0x0C}}, {8466, {0x00, 0x0C}} }},  /*L7, TPC IDX 0*/        
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA1_Set1,   {{8264, {0x01, 0x76}}, {8314, {0x01, 0x76}}, {8365, {0x01, 0x76}}, {8415, {0x01, 0x76}}, {8466, {0x01, 0x77}} }},                           
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA1_Set1,   {{8264, {0x02, 0x00}}, {8314, {0x02, 0x00}}, {8365, {0x02, 0x00}}, {8415, {0x02, 0x00}}, {8466, {0x02, 0x00}} }},                           
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA1_Set1,   {{8264, {0x03, 0x89}}, {8314, {0x03, 0x89}}, {8365, {0x03, 0x89}}, {8415, {0x03, 0x89}}, {8466, {0x03, 0x87}} }},                           
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA1_Set1,   {{8264, {0x00, 0x0C}}, {8314, {0x00, 0x0C}}, {8365, {0x00, 0x0C}}, {8415, {0x00, 0x0C}}, {8466, {0x00, 0x0C}} }},  /*L6, TPC IDX 2*/        
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA1_Set1,   {{8264, {0x01, 0x66}}, {8314, {0x01, 0x66}}, {8365, {0x01, 0x66}}, {8415, {0x01, 0x66}}, {8466, {0x01, 0x66}} }},                           
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA1_Set1,   {{8264, {0x02, 0x00}}, {8314, {0x02, 0x00}}, {8365, {0x02, 0x00}}, {8415, {0x02, 0x00}}, {8466, {0x02, 0x00}} }},                           
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA1_Set1,   {{8264, {0x03, 0x89}}, {8314, {0x03, 0x89}}, {8365, {0x03, 0x89}}, {8415, {0x03, 0x89}}, {8466, {0x03, 0x89}} }},                           
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA1_Set1,   {{8264, {0x00, 0x0C}}, {8314, {0x00, 0x0C}}, {8365, {0x00, 0x0C}}, {8415, {0x00, 0x0C}}, {8466, {0x00, 0x0C}} }},  /*L5, TPC IDX 4*/        
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA1_Set1,   {{8264, {0x01, 0x55}}, {8314, {0x01, 0x55}}, {8365, {0x01, 0x55}}, {8415, {0x01, 0x55}}, {8466, {0x01, 0x55}} }},                           
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA1_Set1,   {{8264, {0x02, 0x00}}, {8314, {0x02, 0x00}}, {8365, {0x02, 0x00}}, {8415, {0x02, 0x00}}, {8466, {0x02, 0x00}} }},                           
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA1_Set1,   {{8264, {0x03, 0x89}}, {8314, {0x03, 0x89}}, {8365, {0x03, 0x89}}, {8415, {0x03, 0x89}}, {8466, {0x03, 0x89}} }},                           
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA1_Set1,   {{8264, {0x00, 0x0C}}, {8314, {0x00, 0x0C}}, {8365, {0x00, 0x0C}}, {8415, {0x00, 0x0C}}, {8466, {0x00, 0x0C}} }},  /*L4, TPC IDX 6*/        
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA1_Set1,   {{8264, {0x01, 0x44}}, {8314, {0x01, 0x44}}, {8365, {0x01, 0x44}}, {8415, {0x01, 0x44}}, {8466, {0x01, 0x44}} }},                           
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA1_Set1,   {{8264, {0x02, 0x00}}, {8314, {0x02, 0x00}}, {8365, {0x02, 0x00}}, {8415, {0x02, 0x00}}, {8466, {0x02, 0x00}} }},                           
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA1_Set1,   {{8264, {0x03, 0x80}}, {8314, {0x03, 0x80}}, {8365, {0x03, 0x80}}, {8415, {0x03, 0x80}}, {8466, {0x03, 0x80}} }},                           
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA1_Set1,   {{8264, {0x00, 0x0C}}, {8314, {0x00, 0x0C}}, {8365, {0x00, 0x0C}}, {8415, {0x00, 0x0C}}, {8466, {0x00, 0x0C}} }},  /*L3, TPC IDX 9*/        
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA1_Set1,   {{8264, {0x01, 0x34}}, {8314, {0x01, 0x34}}, {8365, {0x01, 0x34}}, {8415, {0x01, 0x34}}, {8466, {0x01, 0x34}} }},                           
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA1_Set1,   {{8264, {0x02, 0x00}}, {8314, {0x02, 0x00}}, {8365, {0x02, 0x00}}, {8415, {0x02, 0x00}}, {8466, {0x02, 0x00}} }},                           
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA1_Set1,   {{8264, {0x03, 0x80}}, {8314, {0x03, 0x80}}, {8365, {0x03, 0x80}}, {8415, {0x03, 0x80}}, {8466, {0x03, 0x80}} }},                           
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA1_Set1,   {{8264, {0x00, 0x0C}}, {8314, {0x00, 0x0C}}, {8365, {0x00, 0x0C}}, {8415, {0x00, 0x0C}}, {8466, {0x00, 0x0C}} }},  /*L2, TPC IDX 15, Hyst1*/
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA1_Set1,   {{8264, {0x01, 0x24}}, {8314, {0x01, 0x24}}, {8365, {0x01, 0x24}}, {8415, {0x01, 0x24}}, {8466, {0x01, 0x24}} }},                           
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA1_Set1,   {{8264, {0x02, 0x00}}, {8314, {0x02, 0x00}}, {8365, {0x02, 0x00}}, {8415, {0x02, 0x00}}, {8466, {0x02, 0x00}} }},                           
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA1_Set1,   {{8264, {0x03, 0x80}}, {8314, {0x03, 0x80}}, {8365, {0x03, 0x80}}, {8415, {0x03, 0x80}}, {8466, {0x03, 0x80}} }},                           
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA1_Set1,   {{8264, {0x00, 0x0C}}, {8314, {0x00, 0x0C}}, {8365, {0x00, 0x0C}}, {8415, {0x00, 0x0C}}, {8466, {0x00, 0x0C}} }},  /*L1, TPC IDX 18*/       
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA1_Set1,   {{8264, {0x01, 0x23}}, {8314, {0x01, 0x23}}, {8365, {0x01, 0x23}}, {8415, {0x01, 0x23}}, {8466, {0x01, 0x23}} }},                           
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA1_Set1,   {{8264, {0x02, 0x00}}, {8314, {0x02, 0x00}}, {8365, {0x02, 0x00}}, {8415, {0x02, 0x00}}, {8466, {0x02, 0x00}} }},                           
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA1_Set1,   {{8264, {0x03, 0x80}}, {8314, {0x03, 0x80}}, {8365, {0x03, 0x80}}, {8415, {0x03, 0x80}}, {8466, {0x03, 0x80}} }},                           
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA1_Set1,   {{8264, {0x00, 0x0C}}, {8314, {0x00, 0x0C}}, {8365, {0x00, 0x0C}}, {8415, {0x00, 0x0C}}, {8466, {0x00, 0x0C}} }},  /*L0, TPC IDX 25, Hyst2*/
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA1_Set1,   {{8264, {0x01, 0x22}}, {8314, {0x01, 0x22}}, {8365, {0x01, 0x22}}, {8415, {0x01, 0x22}}, {8466, {0x01, 0x22}} }},                           
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA1_Set1,   {{8264, {0x02, 0x00}}, {8314, {0x02, 0x00}}, {8365, {0x02, 0x00}}, {8415, {0x02, 0x00}}, {8466, {0x02, 0x00}} }},                           
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA1_Set1,   {{8264, {0x03, 0x80}}, {8314, {0x03, 0x80}}, {8365, {0x03, 0x80}}, {8415, {0x03, 0x80}}, {8466, {0x03, 0x80}} }},                           
     {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL, MIPI_USID_INIT0_Set1, {{8264, {0x00, 0x00}}, {8314, {0x00, 0x00}}, {8365, {0x00, 0x00}}, {8415, {0x00, 0x00}}, {8466, {0x00, 0x00}} }},                           
     {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL, MIPI_USID_INIT0_Set1, {{8264, {0x00, 0x00}}, {8314, {0x00, 0x00}}, {8365, {0x00, 0x00}}, {8415, {0x00, 0x00}}, {8466, {0x00, 0x00}} }},                           
     {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL, MIPI_USID_INIT0_Set1, {{8264, {0x00, 0x00}}, {8314, {0x00, 0x00}}, {8365, {0x00, 0x00}}, {8415, {0x00, 0x00}}, {8466, {0x00, 0x00}} }},                           
     {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL, MIPI_USID_INIT0_Set1, {{8264, {0x00, 0x00}}, {8314, {0x00, 0x00}}, {8365, {0x00, 0x00}}, {8415, {0x00, 0x00}}, {8466, {0x00, 0x00}} }},                           
     {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL, MIPI_USID_INIT0_Set1, {{8264, {0x00, 0x00}}, {8314, {0x00, 0x00}}, {8365, {0x00, 0x00}}, {8415, {0x00, 0x00}}, {8466, {0x00, 0x00}} }},                           
     {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL, MIPI_USID_INIT0_Set1, {{8264, {0x00, 0x00}}, {8314, {0x00, 0x00}}, {8365, {0x00, 0x00}}, {8415, {0x00, 0x00}}, {8466, {0x00, 0x00}} }},                           
     {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL, MIPI_USID_INIT0_Set1, {{8264, {0x00, 0x00}}, {8314, {0x00, 0x00}}, {8365, {0x00, 0x00}}, {8415, {0x00, 0x00}}, {8466, {0x00, 0x00}} }},                           
     {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL, MIPI_USID_INIT0_Set1, {{8264, {0x00, 0x00}}, {8314, {0x00, 0x00}}, {8365, {0x00, 0x00}}, {8415, {0x00, 0x00}}, {8466, {0x00, 0x00}} }}                            
   }                                                                            
};

const UL1_UMTS_MIPI_TPC_T UMTS_MIPI_TPC_UMTSBand8_Set1 = 
{
   /* Event */
   {
    /* No.           elm type , data idx       , evt_type       , evt_offset     */
    /*                           { start, stop },                  ( us )         */
     { /* 0, Prf_7  */ UL1_MIPI_PA, { 0    , 3     }, UL1_MIPI_TPC_SET   , US2CHIPCNT(20)  },  /*highest power*/
     { /* 1, Prf_6  */ UL1_MIPI_PA, { 4    , 7     }, UL1_MIPI_TPC_SET   , US2CHIPCNT(20)  },
     { /* 2, Prf_5  */ UL1_MIPI_PA, { 8    , 11    }, UL1_MIPI_TPC_SET   , US2CHIPCNT(20)  },
     { /* 3, Prf_4  */ UL1_MIPI_PA, { 12   , 15    }, UL1_MIPI_TPC_SET   , US2CHIPCNT(20)  },
     { /* 4, Prf_3  */ UL1_MIPI_PA, { 16   , 19    }, UL1_MIPI_TPC_SET   , US2CHIPCNT(20)  },
     { /* 5, Prf_2  */ UL1_MIPI_PA, { 20   , 23    }, UL1_MIPI_TPC_SET   , US2CHIPCNT(20)  },
     { /* 6, Prf_1  */ UL1_MIPI_PA, { 24   , 27    }, UL1_MIPI_TPC_SET   , US2CHIPCNT(20)  },
     { /* 7, Prf_0  */ UL1_MIPI_PA, { 28   , 31    }, UL1_MIPI_TPC_SET   , US2CHIPCNT(20)  },  /*lowest power*/
   },
   
   /* Data */
   {                                                                                                                                                                               
      //elm type  , port_sel     , data_seq, user id,         {{sub 0, addr, data}}, {{sub 1, addr, data}}, {{sub 2, addr, data} , {{sub 3, addr, data}}, {{sub 4, addr, data}     
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA1_Set1,   {{8824, {0x00, 0x1C}}, {8899, {0x00, 0x1C}}, {8975, {0x00, 0x1C}}, {9050, {0x00, 0x1C}}, {9126, {0x00, 0x1C}} }},  /*L7, TPC IDX 0*/        
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA1_Set1,   {{8824, {0x01, 0x68}}, {8899, {0x01, 0x68}}, {8975, {0x01, 0x68}}, {9050, {0x01, 0x68}}, {9126, {0x01, 0x68}} }},                           
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA1_Set1,   {{8824, {0x02, 0x00}}, {8899, {0x02, 0x00}}, {8975, {0x02, 0x00}}, {9050, {0x02, 0x00}}, {9126, {0x02, 0x00}} }},                           
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA1_Set1,   {{8824, {0x03, 0x86}}, {8899, {0x03, 0x86}}, {8975, {0x03, 0x86}}, {9050, {0x03, 0x86}}, {9126, {0x03, 0x87}} }},                           
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA1_Set1,   {{8824, {0x00, 0x1C}}, {8899, {0x00, 0x1C}}, {8975, {0x00, 0x1C}}, {9050, {0x00, 0x1C}}, {9126, {0x00, 0x1C}} }},  /*L6, TPC IDX 2*/        
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA1_Set1,   {{8824, {0x01, 0x57}}, {8899, {0x01, 0x57}}, {8975, {0x01, 0x57}}, {9050, {0x01, 0x57}}, {9126, {0x01, 0x57}} }},                           
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA1_Set1,   {{8824, {0x02, 0x00}}, {8899, {0x02, 0x00}}, {8975, {0x02, 0x00}}, {9050, {0x02, 0x00}}, {9126, {0x02, 0x00}} }},                           
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA1_Set1,   {{8824, {0x03, 0x89}}, {8899, {0x03, 0x89}}, {8975, {0x03, 0x89}}, {9050, {0x03, 0x89}}, {9126, {0x03, 0x89}} }},                           
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA1_Set1,   {{8824, {0x00, 0x1C}}, {8899, {0x00, 0x1C}}, {8975, {0x00, 0x1C}}, {9050, {0x00, 0x1C}}, {9126, {0x00, 0x1C}} }},  /*L5, TPC IDX 4*/        
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA1_Set1,   {{8824, {0x01, 0x56}}, {8899, {0x01, 0x56}}, {8975, {0x01, 0x56}}, {9050, {0x01, 0x56}}, {9126, {0x01, 0x56}} }},                           
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA1_Set1,   {{8824, {0x02, 0x00}}, {8899, {0x02, 0x00}}, {8975, {0x02, 0x00}}, {9050, {0x02, 0x00}}, {9126, {0x02, 0x00}} }},                           
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA1_Set1,   {{8824, {0x03, 0x89}}, {8899, {0x03, 0x89}}, {8975, {0x03, 0x89}}, {9050, {0x03, 0x89}}, {9126, {0x03, 0x89}} }},                           
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA1_Set1,   {{8824, {0x00, 0x1C}}, {8899, {0x00, 0x1C}}, {8975, {0x00, 0x1C}}, {9050, {0x00, 0x1C}}, {9126, {0x00, 0x1C}} }},  /*L4, TPC IDX 6*/        
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA1_Set1,   {{8824, {0x01, 0x35}}, {8899, {0x01, 0x35}}, {8975, {0x01, 0x35}}, {9050, {0x01, 0x35}}, {9126, {0x01, 0x35}} }},                           
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA1_Set1,   {{8824, {0x02, 0x00}}, {8899, {0x02, 0x00}}, {8975, {0x02, 0x00}}, {9050, {0x02, 0x00}}, {9126, {0x02, 0x00}} }},                           
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA1_Set1,   {{8824, {0x03, 0x80}}, {8899, {0x03, 0x80}}, {8975, {0x03, 0x80}}, {9050, {0x03, 0x80}}, {9126, {0x03, 0x80}} }},                           
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA1_Set1,   {{8824, {0x00, 0x1C}}, {8899, {0x00, 0x1C}}, {8975, {0x00, 0x1C}}, {9050, {0x00, 0x1C}}, {9126, {0x00, 0x1C}} }},  /*L3, TPC IDX 9*/        
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA1_Set1,   {{8824, {0x01, 0x35}}, {8899, {0x01, 0x35}}, {8975, {0x01, 0x35}}, {9050, {0x01, 0x35}}, {9126, {0x01, 0x35}} }},                           
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA1_Set1,   {{8824, {0x02, 0x00}}, {8899, {0x02, 0x00}}, {8975, {0x02, 0x00}}, {9050, {0x02, 0x00}}, {9126, {0x02, 0x00}} }},                           
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA1_Set1,   {{8824, {0x03, 0x80}}, {8899, {0x03, 0x80}}, {8975, {0x03, 0x80}}, {9050, {0x03, 0x80}}, {9126, {0x03, 0x80}} }},                           
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA1_Set1,   {{8824, {0x00, 0x1C}}, {8899, {0x00, 0x1C}}, {8975, {0x00, 0x1C}}, {9050, {0x00, 0x1C}}, {9126, {0x00, 0x1C}} }},  /*L2, TPC IDX 15, Hyst1*/
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA1_Set1,   {{8824, {0x01, 0x25}}, {8899, {0x01, 0x25}}, {8975, {0x01, 0x25}}, {9050, {0x01, 0x25}}, {9126, {0x01, 0x25}} }},                           
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA1_Set1,   {{8824, {0x02, 0x00}}, {8899, {0x02, 0x00}}, {8975, {0x02, 0x00}}, {9050, {0x02, 0x00}}, {9126, {0x02, 0x00}} }},                           
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA1_Set1,   {{8824, {0x03, 0x80}}, {8899, {0x03, 0x80}}, {8975, {0x03, 0x80}}, {9050, {0x03, 0x80}}, {9126, {0x03, 0x80}} }},                           
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA1_Set1,   {{8824, {0x00, 0x1C}}, {8899, {0x00, 0x1C}}, {8975, {0x00, 0x1C}}, {9050, {0x00, 0x1C}}, {9126, {0x00, 0x1C}} }},  /*L1, TPC IDX 18*/       
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA1_Set1,   {{8824, {0x01, 0x33}}, {8899, {0x01, 0x33}}, {8975, {0x01, 0x33}}, {9050, {0x01, 0x33}}, {9126, {0x01, 0x33}} }},                           
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA1_Set1,   {{8824, {0x02, 0x00}}, {8899, {0x02, 0x00}}, {8975, {0x02, 0x00}}, {9050, {0x02, 0x00}}, {9126, {0x02, 0x00}} }},                           
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA1_Set1,   {{8824, {0x03, 0x80}}, {8899, {0x03, 0x80}}, {8975, {0x03, 0x80}}, {9050, {0x03, 0x80}}, {9126, {0x03, 0x80}} }},                           
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA1_Set1,   {{8824, {0x00, 0x1C}}, {8899, {0x00, 0x1C}}, {8975, {0x00, 0x1C}}, {9050, {0x00, 0x1C}}, {9126, {0x00, 0x1C}} }},  /*L0, TPC IDX 25, Hyst2*/
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA1_Set1,   {{8824, {0x01, 0x13}}, {8899, {0x01, 0x13}}, {8975, {0x01, 0x13}}, {9050, {0x01, 0x13}}, {9126, {0x01, 0x13}} }},                           
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA1_Set1,   {{8824, {0x02, 0x00}}, {8899, {0x02, 0x00}}, {8975, {0x02, 0x00}}, {9050, {0x02, 0x00}}, {9126, {0x02, 0x00}} }},                           
     {UL1_MIPI_PA   , UL1_MIPI_PORT1 , UL1_REG_W ,   MIPI_USID_PA1_Set1,   {{8824, {0x03, 0x80}}, {8899, {0x03, 0x80}}, {8975, {0x03, 0x80}}, {9050, {0x03, 0x80}}, {9126, {0x03, 0x80}} }},                           
     {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL, MIPI_USID_INIT0_Set1, {{8824, {0x00, 0x00}}, {8899, {0x00, 0x00}}, {8975, {0x00, 0x00}}, {9050, {0x00, 0x00}}, {9126, {0x00, 0x00}} }},                           
     {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL, MIPI_USID_INIT0_Set1, {{8824, {0x00, 0x00}}, {8899, {0x00, 0x00}}, {8975, {0x00, 0x00}}, {9050, {0x00, 0x00}}, {9126, {0x00, 0x00}} }},                           
     {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL, MIPI_USID_INIT0_Set1, {{8824, {0x00, 0x00}}, {8899, {0x00, 0x00}}, {8975, {0x00, 0x00}}, {9050, {0x00, 0x00}}, {9126, {0x00, 0x00}} }},                           
     {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL, MIPI_USID_INIT0_Set1, {{8824, {0x00, 0x00}}, {8899, {0x00, 0x00}}, {8975, {0x00, 0x00}}, {9050, {0x00, 0x00}}, {9126, {0x00, 0x00}} }},                           
     {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL, MIPI_USID_INIT0_Set1, {{8824, {0x00, 0x00}}, {8899, {0x00, 0x00}}, {8975, {0x00, 0x00}}, {9050, {0x00, 0x00}}, {9126, {0x00, 0x00}} }},                           
     {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL, MIPI_USID_INIT0_Set1, {{8824, {0x00, 0x00}}, {8899, {0x00, 0x00}}, {8975, {0x00, 0x00}}, {9050, {0x00, 0x00}}, {9126, {0x00, 0x00}} }},                           
     {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL, MIPI_USID_INIT0_Set1, {{8824, {0x00, 0x00}}, {8899, {0x00, 0x00}}, {8975, {0x00, 0x00}}, {9050, {0x00, 0x00}}, {9126, {0x00, 0x00}} }},                           
     {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL, MIPI_USID_INIT0_Set1, {{8824, {0x00, 0x00}}, {8899, {0x00, 0x00}}, {8975, {0x00, 0x00}}, {9050, {0x00, 0x00}}, {9126, {0x00, 0x00}} }}                            
   }                                                                          
};

const UL1_UMTS_MIPI_TPC_T UMTS_MIPI_TPC_UMTSBand3_Set1  = {{{0}}};
const UL1_UMTS_MIPI_TPC_T UMTS_MIPI_TPC_UMTSBand6_Set1  = {{{0}}};
const UL1_UMTS_MIPI_TPC_T UMTS_MIPI_TPC_UMTSBand9_Set1  = {{{0}}};
const UL1_UMTS_MIPI_TPC_T UMTS_MIPI_TPC_UMTSBand11_Set1 = {{{0}}};
const UL1_UMTS_MIPI_TPC_T UMTS_MIPI_TPC_UMTSBand19_Set1 = {{{0}}};

const UL1_UMTS_MIPI_TPC_T* const UMTS_MIPI_TPC_TABLE_Set1[] =
{
   M_UMTS_TPC(UMTSBandNone,Set1),                     /*UMTSUMTSBandNone*/          
   M_UMTS_TPC(RX_BAND_INDICATOR_0_Set1,Set1),   /*RX_BAND_INDICATOR_0_Set1*/
   M_UMTS_TPC(RX_BAND_INDICATOR_1_Set1,Set1),   /*RX_BAND_INDICATOR_1_Set1*/
   M_UMTS_TPC(RX_BAND_INDICATOR_2_Set1,Set1),   /*RX_BAND_INDICATOR_2_Set1*/
   M_UMTS_TPC(RX_BAND_INDICATOR_3_Set1,Set1),   /*RX_BAND_INDICATOR_3_Set1 */ 
   M_UMTS_TPC(RX_BAND_INDICATOR_4_Set1,Set1),   /*RX_BAND_INDICATOR_4_Set1 */ 
};



/*special handle for T/Rx calibration, we should force ASM to isolation mode */
/*Users just need to provide the ASM isolation CW, DSP may use immediate mode*/
/*to control the MIPI ASM                                                    */
const UL1_MIPI_DATA_TABLE_T UMTS_MIPI_ASM_ISOLATION_DATA_UMTSBandNone_Set1[MIPI_MAX_ASM_ISOLATION_IMM_BSI_CW_NUM] = {{0}};
const UL1_MIPI_DATA_TABLE_T UMTS_MIPI_ASM_ISOLATION_DATA_UMTSBand1_Set1[MIPI_MAX_ASM_ISOLATION_IMM_BSI_CW_NUM] = {{0}};
const UL1_MIPI_DATA_TABLE_T UMTS_MIPI_ASM_ISOLATION_DATA_UMTSBand2_Set1[MIPI_MAX_ASM_ISOLATION_IMM_BSI_CW_NUM] = {{0}};
const UL1_MIPI_DATA_TABLE_T UMTS_MIPI_ASM_ISOLATION_DATA_UMTSBand4_Set1[MIPI_MAX_ASM_ISOLATION_IMM_BSI_CW_NUM] = {{0}};
const UL1_MIPI_DATA_TABLE_T UMTS_MIPI_ASM_ISOLATION_DATA_UMTSBand5_Set1[MIPI_MAX_ASM_ISOLATION_IMM_BSI_CW_NUM] = {{0}};
const UL1_MIPI_DATA_TABLE_T UMTS_MIPI_ASM_ISOLATION_DATA_UMTSBand8_Set1[MIPI_MAX_ASM_ISOLATION_IMM_BSI_CW_NUM] = {{0}};
const UL1_MIPI_DATA_TABLE_T UMTS_MIPI_ASM_ISOLATION_DATA_UMTSBand3_Set1[MIPI_MAX_ASM_ISOLATION_IMM_BSI_CW_NUM] = {{0}};
const UL1_MIPI_DATA_TABLE_T UMTS_MIPI_ASM_ISOLATION_DATA_UMTSBand6_Set1[MIPI_MAX_ASM_ISOLATION_IMM_BSI_CW_NUM] = {{0}};
const UL1_MIPI_DATA_TABLE_T UMTS_MIPI_ASM_ISOLATION_DATA_UMTSBand9_Set1[MIPI_MAX_ASM_ISOLATION_IMM_BSI_CW_NUM] = {{0}};
const UL1_MIPI_DATA_TABLE_T UMTS_MIPI_ASM_ISOLATION_DATA_UMTSBand11_Set1[MIPI_MAX_ASM_ISOLATION_IMM_BSI_CW_NUM] = {{0}};
const UL1_MIPI_DATA_TABLE_T UMTS_MIPI_ASM_ISOLATION_DATA_UMTSBand19_Set1[MIPI_MAX_ASM_ISOLATION_IMM_BSI_CW_NUM] = {{0}};

const UL1_MIPI_DATA_TABLE_T* const UMTS_MIPI_ASM_ISOLATION_DATA_TABLE_Set1[] = 
{
   M_UMTS_ASM_ISO(UMTSBandNone,Set1),                        /*UMTSUMTSBandNone*/          
   M_UMTS_ASM_ISO(RX_BAND_INDICATOR_0_Set1,Set1),      /*RX_BAND_INDICATOR_0_Set1*/  
   M_UMTS_ASM_ISO(RX_BAND_INDICATOR_1_Set1,Set1),      /*RX_BAND_INDICATOR_1_Set1*/  
   M_UMTS_ASM_ISO(RX_BAND_INDICATOR_2_Set1,Set1),      /*RX_BAND_INDICATOR_2_Set1*/  
   M_UMTS_ASM_ISO(RX_BAND_INDICATOR_3_Set1,Set1),      /*RX_BAND_INDICATOR_3_Set1*/   
   M_UMTS_ASM_ISO(RX_BAND_INDICATOR_4_Set1,Set1),      /*RX_BAND_INDICATOR_4_Set1*/   
};

/////////////////////////////////////////////

#endif

