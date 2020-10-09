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

const UL1_MIPI_EVENT_TABLE_T UMTS_MIPI_RX_EVENT_UMTSBandNone_Set2[UL1_MIPI_RX_EVENT_NUM] = 
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


const UL1_MIPI_EVENT_TABLE_T UMTS_MIPI_RX_EVENT_UMTSBand1_Set2[UL1_MIPI_RX_EVENT_NUM] = 
{
   /* No.     elm type , data idx       , evt_type       , evt_offset     */
   /*                    { start, stop },                  ( us )         */
   { /* 0  */ UL1_MIPI_ASM,      { 0    , 0    }, UL1_MIPI_TRX_ON, US2CHIPCNT(195)     },
   { /* 1  */ UL1_MIPI_ASM_RXD,  { 1    , 1    }, UL1_MIPI_TRX_ON, US2CHIPCNT(195)     },
   { /* 2  */ UL1_MIPI_ASM,      { 2    , 2    }, UL1_MIPI_TRX_OFF,US2CHIPCNT(10)     },
   { /* 3  */ UL1_MIPI_ASM_RXD,  { 3    , 3    }, UL1_MIPI_TRX_OFF,US2CHIPCNT(10)     },
   { /* 4  */ UL1_MIPI_ANT,      { 4    , 4    }, UL1_MIPI_TRX_ON, US2CHIPCNT(200)    },
   { /* 5  */ UL1_MIPI_ANT,      { 5    , 5    }, UL1_MIPI_TRX_OFF,US2CHIPCNT(15)     },
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


const UL1_MIPI_EVENT_TABLE_T UMTS_MIPI_RX_EVENT_UMTSBand2_Set2[UL1_MIPI_RX_EVENT_NUM] = 
{
   /* No.     elm type , data idx       , evt_type       , evt_offset     */
   /*                    { start, stop },                  ( us )         */
   { /* 0  */ UL1_MIPI_ASM,      { 0    , 0    }, UL1_MIPI_TRX_ON, US2CHIPCNT(195)     },
   { /* 1  */ UL1_MIPI_ASM_RXD,  { 1    , 1    }, UL1_MIPI_TRX_ON, US2CHIPCNT(195)     },
   { /* 2  */ UL1_MIPI_ASM,      { 2    , 2    }, UL1_MIPI_TRX_OFF,US2CHIPCNT(10)     },
   { /* 3  */ UL1_MIPI_ASM_RXD,  { 3    , 3    }, UL1_MIPI_TRX_OFF,US2CHIPCNT(10)     },
   { /* 4  */ UL1_MIPI_ANT,      { 4    , 4    }, UL1_MIPI_TRX_ON, US2CHIPCNT(200)    },
   { /* 5  */ UL1_MIPI_ANT,      { 5    , 5    }, UL1_MIPI_TRX_OFF,US2CHIPCNT(15)     },
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

const UL1_MIPI_EVENT_TABLE_T UMTS_MIPI_RX_EVENT_UMTSBand4_Set2[UL1_MIPI_RX_EVENT_NUM] = 
{
   /* No.     elm type , data idx       , evt_type       , evt_offset     */
   /*                    { start, stop },                  ( us )         */
   { /* 0  */ UL1_MIPI_ASM,      { 0    , 0    }, UL1_MIPI_TRX_ON, US2CHIPCNT(195)     },
   { /* 1  */ UL1_MIPI_ASM_RXD,  { 1    , 1    }, UL1_MIPI_TRX_ON, US2CHIPCNT(195)     },
   { /* 2  */ UL1_MIPI_ASM,      { 2    , 2    }, UL1_MIPI_TRX_OFF,US2CHIPCNT(10)     },
   { /* 3  */ UL1_MIPI_ASM_RXD,  { 3    , 3    }, UL1_MIPI_TRX_OFF,US2CHIPCNT(10)     },
   { /* 4  */ UL1_MIPI_ANT,      { 4    , 4    }, UL1_MIPI_TRX_ON, US2CHIPCNT(200)    },
   { /* 5  */ UL1_MIPI_ANT,      { 5    , 5    }, UL1_MIPI_TRX_OFF,US2CHIPCNT(15)     },
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


const UL1_MIPI_EVENT_TABLE_T UMTS_MIPI_RX_EVENT_UMTSBand5_Set2[UL1_MIPI_RX_EVENT_NUM] = 
{
   /* No.     elm type , data idx       , evt_type       , evt_offset     */
   /*                    { start, stop },                  ( us )         */
   { /* 0  */ UL1_MIPI_ASM,      { 0    , 0    }, UL1_MIPI_TRX_ON, US2CHIPCNT(195)     },
   { /* 1  */ UL1_MIPI_ASM_RXD,  { 1    , 1    }, UL1_MIPI_TRX_ON, US2CHIPCNT(195)     },
   { /* 2  */ UL1_MIPI_ASM,      { 2    , 2    }, UL1_MIPI_TRX_OFF,US2CHIPCNT(10)     },
   { /* 3  */ UL1_MIPI_ASM_RXD,  { 3    , 3    }, UL1_MIPI_TRX_OFF,US2CHIPCNT(10)     },
   { /* 4  */ UL1_MIPI_ANT,      { 4    , 4    }, UL1_MIPI_TRX_ON, US2CHIPCNT(200)    },
   { /* 5  */ UL1_MIPI_ANT,      { 5    , 5    }, UL1_MIPI_TRX_OFF,US2CHIPCNT(15)     },
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

const UL1_MIPI_EVENT_TABLE_T UMTS_MIPI_RX_EVENT_UMTSBand8_Set2[UL1_MIPI_RX_EVENT_NUM] = 
{
   /* No.     elm type , data idx       , evt_type       , evt_offset     */
   /*                    { start, stop },                  ( us )         */
   { /* 0  */ UL1_MIPI_ASM,      { 0    , 0    }, UL1_MIPI_TRX_ON, US2CHIPCNT(195)     },
   { /* 1  */ UL1_MIPI_ASM_RXD,  { 1    , 1    }, UL1_MIPI_TRX_ON, US2CHIPCNT(195)     },
   { /* 2  */ UL1_MIPI_ASM,      { 2    , 2    }, UL1_MIPI_TRX_OFF,US2CHIPCNT(10)     },
   { /* 3  */ UL1_MIPI_ASM_RXD,  { 3    , 3    }, UL1_MIPI_TRX_OFF,US2CHIPCNT(10)     },
   { /* 4  */ UL1_MIPI_ANT,      { 4    , 4    }, UL1_MIPI_TRX_ON, US2CHIPCNT(200)    },
   { /* 5  */ UL1_MIPI_ANT,      { 5    , 5    }, UL1_MIPI_TRX_OFF,US2CHIPCNT(15)     },
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

const UL1_MIPI_EVENT_TABLE_T UMTS_MIPI_RX_EVENT_UMTSBand3_Set2[] = {{0}};
const UL1_MIPI_EVENT_TABLE_T UMTS_MIPI_RX_EVENT_UMTSBand6_Set2[] = {{0}};
const UL1_MIPI_EVENT_TABLE_T UMTS_MIPI_RX_EVENT_UMTSBand9_Set2[] = {{0}};
const UL1_MIPI_EVENT_TABLE_T UMTS_MIPI_RX_EVENT_UMTSBand11_Set2[] = {{0}};
const UL1_MIPI_EVENT_TABLE_T UMTS_MIPI_RX_EVENT_UMTSBand19_Set2[] = {{0}};

const UL1_MIPI_EVENT_TABLE_T* const UMTS_MIPI_RX_EVENT_TABLE_Set2[] =
{
   M_UMTS_RX_EVENT(UMTSBandNone, Set2),          /*UMTSBandNone*/          
   M_UMTS_RX_EVENT(RX_BAND_INDICATOR_0_Set2, Set2),   /*UMTS_Route0*/
   M_UMTS_RX_EVENT(RX_BAND_INDICATOR_1_Set2, Set2),   /*UMTS_Route1*/
   M_UMTS_RX_EVENT(RX_BAND_INDICATOR_2_Set2, Set2),   /*UMTS_Route2*/   
   M_UMTS_RX_EVENT(RX_BAND_INDICATOR_3_Set2, Set2),   /*UMTS_Route3*/   
   M_UMTS_RX_EVENT(RX_BAND_INDICATOR_4_Set2, Set2),   /*UMTS_Route4*/
#if IS_3G_RF_NCCA_SUPPORT
   M_UMTS_RX_EVENT(MIPI_RX_ROUTE_IND_5, Set2),   /*UMTS_Route5*/
   M_UMTS_RX_EVENT(MIPI_RX_ROUTE_IND_6, Set2),   /*UMTS_Route6*/
   M_UMTS_RX_EVENT(MIPI_RX_ROUTE_IND_7, Set2),   /*UMTS_Route7*/
   M_UMTS_RX_EVENT(MIPI_RX_ROUTE_IND_8, Set2),   /*UMTS_Route8*/
   M_UMTS_RX_EVENT(MIPI_RX_ROUTE_IND_9, Set2),   /*UMTS_Route9*/
   M_UMTS_RX_EVENT(MIPI_RX_ROUTE_IND_10, Set2),  /*UMTS_Route10*/
   M_UMTS_RX_EVENT(MIPI_RX_ROUTE_IND_11, Set2),  /*UMTS_Route11*/
   M_UMTS_RX_EVENT(MIPI_RX_ROUTE_IND_12, Set2),  /*UMTS_Route12*/
   M_UMTS_RX_EVENT(MIPI_RX_ROUTE_IND_13, Set2),  /*UMTS_Route13*/
   M_UMTS_RX_EVENT(MIPI_RX_ROUTE_IND_14, Set2),  /*UMTS_Route14*/
#endif
};

const UL1_MIPI_DATA_SUBBAND_TABLE_T UMTS_MIPI_RX_DATA_UMTSBandNone_Set2[UL1_MIPI_RX_DATA_NUM] = 
{
   //No.      elm type , port_sel      ,  data_seq  , user id,         { { sub 0 ,addr, data },{ sub 1 ,addr, data },{ sub 2 ,addr, data}, { sub 3, addr, data  }, { sub 4, addr data  } },
   { /* 0  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL , MIPI_USID_INIT0_Set2 , { { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},       { 0x0 ,{0x0, 0x0}}} },
   { /* 1  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL , MIPI_USID_INIT0_Set2 , { { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},       { 0x0 ,{0x0, 0x0}}} },
   { /* 2  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL , MIPI_USID_INIT0_Set2 , { { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},       { 0x0 ,{0x0, 0x0}}} },
   { /* 3  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL , MIPI_USID_INIT0_Set2 , { { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},       { 0x0 ,{0x0, 0x0}}} },
   { /* 4  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL , MIPI_USID_INIT0_Set2 , { { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},       { 0x0 ,{0x0, 0x0}}} },
   { /* 5  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL , MIPI_USID_INIT0_Set2 , { { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},       { 0x0 ,{0x0, 0x0}}} },
   { /* 6  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL , MIPI_USID_INIT0_Set2 , { { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},       { 0x0 ,{0x0, 0x0}}} },
   { /* 7  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL , MIPI_USID_INIT0_Set2 , { { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},       { 0x0 ,{0x0, 0x0}}} },
   { /* 8  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL , MIPI_USID_INIT0_Set2 , { { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},       { 0x0 ,{0x0, 0x0}}} },
   { /* 9  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL , MIPI_USID_INIT0_Set2 , { { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},       { 0x0 ,{0x0, 0x0}}} },
   { /* 10 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL , MIPI_USID_INIT0_Set2 , { { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},       { 0x0 ,{0x0, 0x0}}} },
   { /* 11 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL , MIPI_USID_INIT0_Set2 , { { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},       { 0x0 ,{0x0, 0x0}}} },
   { /* 12 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL , MIPI_USID_INIT0_Set2 , { { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},       { 0x0 ,{0x0, 0x0}}} },
   { /* 13 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL , MIPI_USID_INIT0_Set2 , { { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},       { 0x0 ,{0x0, 0x0}}} },
   { /* 14 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL , MIPI_USID_INIT0_Set2 , { { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},       { 0x0 ,{0x0, 0x0}}} },
   { /* 15 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL , MIPI_USID_INIT0_Set2 , { { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},       { 0x0 ,{0x0, 0x0}}} },
   { /* 16 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL , MIPI_USID_INIT0_Set2 , { { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},       { 0x0 ,{0x0, 0x0}}} },
   { /* 17 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL , MIPI_USID_INIT0_Set2 , { { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},       { 0x0 ,{0x0, 0x0}}} },
   { /* 18 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL , MIPI_USID_INIT0_Set2 , { { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},       { 0x0 ,{0x0, 0x0}}} },
   { /* 19 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL , MIPI_USID_INIT0_Set2 , { { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},       { 0x0 ,{0x0, 0x0}}} },
   { /* 20 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL , MIPI_USID_INIT0_Set2 , { { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},       { 0x0 ,{0x0, 0x0}}} },
   { /* 21 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL , MIPI_USID_INIT0_Set2 , { { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},       { 0x0 ,{0x0, 0x0}}} },
   { /* 22 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL , MIPI_USID_INIT0_Set2 , { { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},       { 0x0 ,{0x0, 0x0}}} },
   { /* 23 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL , MIPI_USID_INIT0_Set2 , { { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},       { 0x0 ,{0x0, 0x0}}} },
   { /* 24 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL , MIPI_USID_INIT0_Set2 , { { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},       { 0x0 ,{0x0, 0x0}}} },
   { /* 25 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL , MIPI_USID_INIT0_Set2 , { { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},       { 0x0 ,{0x0, 0x0}}} },
   { /* 26 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL , MIPI_USID_INIT0_Set2 , { { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},       { 0x0 ,{0x0, 0x0}}} },
   { /* 27 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL , MIPI_USID_INIT0_Set2 , { { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},       { 0x0 ,{0x0, 0x0}}} },
};

const UL1_MIPI_DATA_SUBBAND_TABLE_T UMTS_MIPI_RX_DATA_UMTSBand1_Set2[UL1_MIPI_RX_DATA_NUM] = 
{
   //No.      elm type , port_sel      ,  data_seq  , user id,         { { sub 0 ,addr, data }},{ sub 1 ,addr, data }},{ sub 2 ,addr, data}}, { sub 3, addr, data  }}, { sub 4, addr data  } }},
   { /* 0  */ UL1_MIPI_ASM,      UL1_MIPI_PORT1,  UL1_REG_W     , MIPI_USID_ASM0_Set2, { { 21124 ,{0x00, 0x4E}}, { 21262 ,{0x00, 0x4E}}, { 21400 ,{0x00, 0x4E}}, { 21538  ,{0x00, 0x4E}}, { 21676 ,{0x00, 0x4E}}} },
   { /* 1  */ UL1_MIPI_ASM_RXD,  UL1_MIPI_PORT3,  UL1_REG_W     , MIPI_USID_ASM1_Set2, { { 21124 ,{0x00, 0x09}}, { 21262 ,{0x00, 0x09}}, { 21400 ,{0x00, 0x09}}, { 21538  ,{0x00, 0x09}}, { 21676 ,{0x00, 0x09}}} },
   { /* 2  */ UL1_MIPI_ASM,      UL1_MIPI_PORT1,  UL1_REG_W     , MIPI_USID_ASM0_Set2, { { 21124 ,{0x00, 0x00}}, { 21262 ,{0x00, 0x00}}, { 21400 ,{0x00, 0x00}}, { 21538  ,{0x00, 0x00}}, { 21676 ,{0x00, 0x00}}} },
   { /* 3  */ UL1_MIPI_ASM_RXD,  UL1_MIPI_PORT3,  UL1_REG_W     , MIPI_USID_ASM1_Set2, { { 21124 ,{0x00, 0x00}}, { 21262 ,{0x00, 0x00}}, { 21400 ,{0x00, 0x00}}, { 21538  ,{0x00, 0x00}}, { 21676 ,{0x00, 0x00}}} },
   { /* 4  */ UL1_MIPI_ANT,      UL1_MIPI_PORT2,  UL1_REG_W     , MIPI_USID_ANT0_Set2, { { 21124 ,{0x00, 0x01}}, { 21262 ,{0x00, 0x01}}, { 21400 ,{0x00, 0x01}}, { 21538  ,{0x00, 0x01}}, { 21676 ,{0x00, 0x01}}} },
   { /* 5  */ UL1_MIPI_ANT,      UL1_MIPI_PORT2,  UL1_REG_W     , MIPI_USID_ANT0_Set2, { { 21124 ,{0x00, 0x00}}, { 21262 ,{0x00, 0x00}}, { 21400 ,{0x00, 0x00}}, { 21538  ,{0x00, 0x00}}, { 21676 ,{0x00, 0x00}}} },
   { /* 6  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2,{ { 21124 ,{0x0,  0x0}},  { 21262 ,{0x0,  0x0}},   { 21400 ,{0x0, 0x0}},   { 21538  ,{0x0, 0x0}},   { 21676 ,{0x0,  0x0}}} },
   { /* 7  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2,{ { 21124 ,{0x0,  0x0}},  { 21262 ,{0x0,  0x0}},   { 21400 ,{0x0, 0x0}},   { 21538  ,{0x0, 0x0}},   { 21676 ,{0x0,  0x0}}} },
   { /* 8  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2,{ { 21124 ,{0x0,  0x0}},  { 21262 ,{0x0,  0x0}},   { 21400 ,{0x0, 0x0}},   { 21538  ,{0x0, 0x0}},   { 21676 ,{0x0,  0x0}}} },
   { /* 9  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2,{ { 21124 ,{0x0,  0x0}},  { 21262 ,{0x0,  0x0}},   { 21400 ,{0x0, 0x0}},   { 21538  ,{0x0, 0x0}},   { 21676 ,{0x0,  0x0}}} },
   { /* 10 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2,{ { 21124 ,{0x0,  0x0}},  { 21262 ,{0x0,  0x0}},   { 21400 ,{0x0, 0x0}},   { 21538  ,{0x0, 0x0}},   { 21676 ,{0x0,  0x0}}} },
   { /* 11 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2,{ { 21124 ,{0x0,  0x0}},  { 21262 ,{0x0,  0x0}},   { 21400 ,{0x0, 0x0}},   { 21538  ,{0x0, 0x0}},   { 21676 ,{0x0,  0x0}}} },
   { /* 12 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2,{ { 21124 ,{0x0,  0x0}},  { 21262 ,{0x0,  0x0}},   { 21400 ,{0x0, 0x0}},   { 21538  ,{0x0, 0x0}},   { 21676 ,{0x0,  0x0}}} },
   { /* 13 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2,{ { 21124 ,{0x0,  0x0}},  { 21262 ,{0x0,  0x0}},   { 21400 ,{0x0, 0x0}},   { 21538  ,{0x0, 0x0}},   { 21676 ,{0x0,  0x0}}} },
   { /* 14 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2,{ { 21124 ,{0x0,  0x0}},  { 21262 ,{0x0,  0x0}},   { 21400 ,{0x0, 0x0}},   { 21538  ,{0x0, 0x0}},   { 21676 ,{0x0,  0x0}}} },
   { /* 15 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2,{ { 21124 ,{0x0,  0x0}},  { 21262 ,{0x0,  0x0}},   { 21400 ,{0x0, 0x0}},   { 21538  ,{0x0, 0x0}},   { 21676 ,{0x0,  0x0}}} },
   { /* 16 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2,{ { 21124 ,{0x0,  0x0}},  { 21262 ,{0x0,  0x0}},   { 21400 ,{0x0, 0x0}},   { 21538  ,{0x0, 0x0}},   { 21676 ,{0x0,  0x0}}} },
   { /* 17 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2,{ { 21124 ,{0x0,  0x0}},  { 21262 ,{0x0,  0x0}},   { 21400 ,{0x0, 0x0}},   { 21538  ,{0x0, 0x0}},   { 21676 ,{0x0,  0x0}}} },
   { /* 18 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2,{ { 21124 ,{0x0,  0x0}},  { 21262 ,{0x0,  0x0}},   { 21400 ,{0x0, 0x0}},   { 21538  ,{0x0, 0x0}},   { 21676 ,{0x0,  0x0}}} },
   { /* 19 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2,{ { 21124 ,{0x0,  0x0}},  { 21262 ,{0x0,  0x0}},   { 21400 ,{0x0, 0x0}},   { 21538  ,{0x0, 0x0}},   { 21676 ,{0x0,  0x0}}} },
   { /* 20 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2,{ { 21124 ,{0x0,  0x0}},  { 21262 ,{0x0,  0x0}},   { 21400 ,{0x0, 0x0}},   { 21538  ,{0x0, 0x0}},   { 21676 ,{0x0,  0x0}}} },
   { /* 21 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2,{ { 21124 ,{0x0,  0x0}},  { 21262 ,{0x0,  0x0}},   { 21400 ,{0x0, 0x0}},   { 21538  ,{0x0, 0x0}},   { 21676 ,{0x0,  0x0}}} },
   { /* 22 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2,{ { 21124 ,{0x0,  0x0}},  { 21262 ,{0x0,  0x0}},   { 21400 ,{0x0, 0x0}},   { 21538  ,{0x0, 0x0}},   { 21676 ,{0x0,  0x0}}} },
   { /* 23 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2,{ { 21124 ,{0x0,  0x0}},  { 21262 ,{0x0,  0x0}},   { 21400 ,{0x0, 0x0}},   { 21538  ,{0x0, 0x0}},   { 21676 ,{0x0,  0x0}}} },
   { /* 24 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2,{ { 21124 ,{0x0,  0x0}},  { 21262 ,{0x0,  0x0}},   { 21400 ,{0x0, 0x0}},   { 21538  ,{0x0, 0x0}},   { 21676 ,{0x0,  0x0}}} },
   { /* 25 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2,{ { 21124 ,{0x0,  0x0}},  { 21262 ,{0x0,  0x0}},   { 21400 ,{0x0, 0x0}},   { 21538  ,{0x0, 0x0}},   { 21676 ,{0x0,  0x0}}} },
   { /* 26 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2,{ { 21124 ,{0x0,  0x0}},  { 21262 ,{0x0,  0x0}},   { 21400 ,{0x0, 0x0}},   { 21538  ,{0x0, 0x0}},   { 21676 ,{0x0,  0x0}}} },
   { /* 27 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2,{ { 21124 ,{0x0,  0x0}},  { 21262 ,{0x0,  0x0}},   { 21400 ,{0x0, 0x0}},   { 21538  ,{0x0, 0x0}},   { 21676 ,{0x0,  0x0}}} },

};

const UL1_MIPI_DATA_SUBBAND_TABLE_T UMTS_MIPI_RX_DATA_UMTSBand2_Set2[UL1_MIPI_RX_DATA_NUM] = 
{
   //No.      elm type , port_sel      ,  data_seq  , user id,         { { sub 0 ,addr, data }},{ sub 1 ,addr, data }},{ sub 2 ,addr, data}}, { sub 3, addr, data  }}, { sub 4, addr data  } }},
   { /* 0  */ UL1_MIPI_ASM,      UL1_MIPI_PORT1,  UL1_REG_W     , MIPI_USID_ASM0_Set2,  { { 19324 ,{0x00, 0x2E}}, { 19462 ,{0x00, 0x2E}}, { 19600 ,{0x00, 0x2E}}, { 19738  ,{0x00, 0x2E}}, { 19876 ,{0x00, 0x2E}}} },
   { /* 1  */ UL1_MIPI_ASM_RXD,  UL1_MIPI_PORT3,  UL1_REG_W     , MIPI_USID_ASM1_Set2,  { { 19324 ,{0x00, 0x07}}, { 19462 ,{0x00, 0x07}}, { 19600 ,{0x00, 0x07}}, { 19738  ,{0x00, 0x07}}, { 19876 ,{0x00, 0x07}}} },
   { /* 2  */ UL1_MIPI_ASM,      UL1_MIPI_PORT1,  UL1_REG_W     , MIPI_USID_ASM0_Set2,  { { 19324 ,{0x00, 0x00}}, { 19462 ,{0x00, 0x00}}, { 19600 ,{0x00, 0x00}}, { 19738  ,{0x00, 0x00}}, { 19876 ,{0x00, 0x00}}} },
   { /* 3  */ UL1_MIPI_ASM_RXD,  UL1_MIPI_PORT3,  UL1_REG_W     , MIPI_USID_ASM1_Set2,  { { 19324 ,{0x00, 0x00}}, { 19462 ,{0x00, 0x00}}, { 19600 ,{0x00, 0x00}}, { 19738  ,{0x00, 0x00}}, { 19876 ,{0x00, 0x00}}} },
   { /* 4  */ UL1_MIPI_ANT,      UL1_MIPI_PORT2,  UL1_REG_W     , MIPI_USID_ANT0_Set2,  { { 19324 ,{0x00, 0x01}}, { 19462 ,{0x00, 0x01}}, { 19600 ,{0x00, 0x01}}, { 19738  ,{0x00, 0x01}}, { 19876 ,{0x00, 0x01}}} },
   { /* 5  */ UL1_MIPI_ANT,      UL1_MIPI_PORT2,  UL1_REG_W     , MIPI_USID_ANT0_Set2,  { { 19324 ,{0x00, 0x00}}, { 19462 ,{0x00, 0x00}}, { 19600 ,{0x00, 0x00}}, { 19738  ,{0x00, 0x00}}, { 19876 ,{0x00, 0x00}}} },
   { /* 6  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2, { { 19324 ,{0x0, 0x0}},   { 19462 ,{0x0, 0x0}},   { 19600 ,{0x0, 0x0}},   { 19738  ,{0x0, 0x0}},   { 19876 ,{0x0,  0x0}} } },
   { /* 7  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2, { { 19324 ,{0x0, 0x0}},   { 19462 ,{0x0, 0x0}},   { 19600 ,{0x0, 0x0}},   { 19738  ,{0x0, 0x0}},   { 19876 ,{0x0,  0x0}} } },
   { /* 8  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2, { { 19324 ,{0x0, 0x0}},   { 19462 ,{0x0, 0x0}},   { 19600 ,{0x0, 0x0}},   { 19738  ,{0x0, 0x0}},   { 19876 ,{0x0,  0x0}} } },
   { /* 9  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2, { { 19324 ,{0x0, 0x0}},   { 19462 ,{0x0, 0x0}},   { 19600 ,{0x0, 0x0}},   { 19738  ,{0x0, 0x0}},   { 19876 ,{0x0,  0x0}} } },
   { /* 10 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2, { { 19324 ,{0x0, 0x0}},   { 19462 ,{0x0, 0x0}},   { 19600 ,{0x0, 0x0}},   { 19738  ,{0x0, 0x0}},   { 19876 ,{0x0,  0x0}} } },
   { /* 11 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2, { { 19324 ,{0x0, 0x0}},   { 19462 ,{0x0, 0x0}},   { 19600 ,{0x0, 0x0}},   { 19738  ,{0x0, 0x0}},   { 19876 ,{0x0,  0x0}} } },
   { /* 12 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2, { { 19324 ,{0x0, 0x0}},   { 19462 ,{0x0, 0x0}},   { 19600 ,{0x0, 0x0}},   { 19738  ,{0x0, 0x0}},   { 19876 ,{0x0,  0x0}} } },
   { /* 13 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2, { { 19324 ,{0x0, 0x0}},   { 19462 ,{0x0, 0x0}},   { 19600 ,{0x0, 0x0}},   { 19738  ,{0x0, 0x0}},   { 19876 ,{0x0,  0x0}} } },
   { /* 14 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2, { { 19324 ,{0x0, 0x0}},   { 19462 ,{0x0, 0x0}},   { 19600 ,{0x0, 0x0}},   { 19738  ,{0x0, 0x0}},   { 19876 ,{0x0,  0x0}} } },
   { /* 15 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2, { { 19324 ,{0x0, 0x0}},   { 19462 ,{0x0, 0x0}},   { 19600 ,{0x0, 0x0}},   { 19738  ,{0x0, 0x0}},   { 19876 ,{0x0,  0x0}} } },
   { /* 16 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2, { { 19324 ,{0x0, 0x0}},   { 19462 ,{0x0, 0x0}},   { 19600 ,{0x0, 0x0}},   { 19738  ,{0x0, 0x0}},   { 19876 ,{0x0,  0x0}} } },
   { /* 17 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2, { { 19324 ,{0x0, 0x0}},   { 19462 ,{0x0, 0x0}},   { 19600 ,{0x0, 0x0}},   { 19738  ,{0x0, 0x0}},   { 19876 ,{0x0,  0x0}} } },
   { /* 18 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2, { { 19324 ,{0x0, 0x0}},   { 19462 ,{0x0, 0x0}},   { 19600 ,{0x0, 0x0}},   { 19738  ,{0x0, 0x0}},   { 19876 ,{0x0,  0x0}} } },
   { /* 19 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2, { { 19324 ,{0x0, 0x0}},   { 19462 ,{0x0, 0x0}},   { 19600 ,{0x0, 0x0}},   { 19738  ,{0x0, 0x0}},   { 19876 ,{0x0,  0x0}} } },
   { /* 20 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2, { { 19324 ,{0x0, 0x0}},   { 19462 ,{0x0, 0x0}},   { 19600 ,{0x0, 0x0}},   { 19738  ,{0x0, 0x0}},   { 19876 ,{0x0,  0x0}} } },
   { /* 21 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2, { { 19324 ,{0x0, 0x0}},   { 19462 ,{0x0, 0x0}},   { 19600 ,{0x0, 0x0}},   { 19738  ,{0x0, 0x0}},   { 19876 ,{0x0,  0x0}} } },
   { /* 22 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2, { { 19324 ,{0x0, 0x0}},   { 19462 ,{0x0, 0x0}},   { 19600 ,{0x0, 0x0}},   { 19738  ,{0x0, 0x0}},   { 19876 ,{0x0,  0x0}} } },
   { /* 23 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2, { { 19324 ,{0x0, 0x0}},   { 19462 ,{0x0, 0x0}},   { 19600 ,{0x0, 0x0}},   { 19738  ,{0x0, 0x0}},   { 19876 ,{0x0,  0x0}} } },
   { /* 24 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2, { { 19324 ,{0x0, 0x0}},   { 19462 ,{0x0, 0x0}},   { 19600 ,{0x0, 0x0}},   { 19738  ,{0x0, 0x0}},   { 19876 ,{0x0,  0x0}} } },
   { /* 25 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2, { { 19324 ,{0x0, 0x0}},   { 19462 ,{0x0, 0x0}},   { 19600 ,{0x0, 0x0}},   { 19738  ,{0x0, 0x0}},   { 19876 ,{0x0,  0x0}} } },
   { /* 26 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2, { { 19324 ,{0x0, 0x0}},   { 19462 ,{0x0, 0x0}},   { 19600 ,{0x0, 0x0}},   { 19738  ,{0x0, 0x0}},   { 19876 ,{0x0,  0x0}} } },
   { /* 27 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2, { { 19324 ,{0x0, 0x0}},   { 19462 ,{0x0, 0x0}},   { 19600 ,{0x0, 0x0}},   { 19738  ,{0x0, 0x0}},   { 19876 ,{0x0,  0x0}} } },
};

const UL1_MIPI_DATA_SUBBAND_TABLE_T UMTS_MIPI_RX_DATA_UMTSBand4_Set2[UL1_MIPI_RX_DATA_NUM] = 
{
   //No.      elm type , port_sel      ,  data_seq  , user id,         { { sub 0 ,addr, data }},{ sub 1 ,addr, data }},{ sub 2 ,addr, data}}, { sub 3, addr, data  }}, { sub 4, addr data  } }},
   { /* 0  */ UL1_MIPI_ASM,      UL1_MIPI_PORT1,  UL1_REG_W     , MIPI_USID_ASM0_Set2,  { { 21124 ,{0x00, 0x66}}, { 21227 ,{0x00, 0x66}}, { 21330 ,{0x00, 0x66}}, { 21428  ,{0x00, 0x66}}, { 21526 ,{0x00, 0x66}}} },
   { /* 1  */ UL1_MIPI_ASM_RXD,  UL1_MIPI_PORT3,  UL1_REG_W     , MIPI_USID_ASM1_Set2,  { { 21124 ,{0x00, 0x09}}, { 21227 ,{0x00, 0x09}}, { 21330 ,{0x00, 0x09}}, { 21428  ,{0x00, 0x09}}, { 21526 ,{0x00, 0x09}}} },
   { /* 2  */ UL1_MIPI_ASM,      UL1_MIPI_PORT1,  UL1_REG_W     , MIPI_USID_ASM0_Set2,  { { 21124 ,{0x00, 0x00}}, { 21227 ,{0x00, 0x00}}, { 21330 ,{0x00, 0x00}}, { 21428  ,{0x00, 0x00}}, { 21526 ,{0x00, 0x00}}} },
   { /* 3  */ UL1_MIPI_ASM_RXD,  UL1_MIPI_PORT3,  UL1_REG_W     , MIPI_USID_ASM1_Set2,  { { 21124 ,{0x00, 0x00}}, { 21227 ,{0x00, 0x00}}, { 21330 ,{0x00, 0x00}}, { 21428  ,{0x00, 0x00}}, { 21526 ,{0x00, 0x00}}} },
   { /* 4  */ UL1_MIPI_ANT,      UL1_MIPI_PORT2,  UL1_REG_W     , MIPI_USID_ANT0_Set2,  { { 21124 ,{0x00, 0x01}}, { 21227 ,{0x00, 0x01}}, { 21330 ,{0x00, 0x01}}, { 21428  ,{0x00, 0x01}}, { 21526 ,{0x00, 0x01}}} },
   { /* 5  */ UL1_MIPI_ANT,      UL1_MIPI_PORT2,  UL1_REG_W     , MIPI_USID_ANT0_Set2,  { { 21124 ,{0x00, 0x00}}, { 21227 ,{0x00, 0x00}}, { 21330 ,{0x00, 0x00}}, { 21428  ,{0x00, 0x00}}, { 21526 ,{0x00, 0x00}}} },
   { /* 6  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2, { { 21124 ,{0x0, 0x0}},   { 21227 ,{0x0, 0x0}},   { 21330 ,{0x0, 0x0}},   { 21428  ,{0x0, 0x0}},   { 21526 ,{0x0,   0x0}}} },
   { /* 7  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2, { { 21124 ,{0x0, 0x0}},   { 21227 ,{0x0, 0x0}},   { 21330 ,{0x0, 0x0}},   { 21428  ,{0x0, 0x0}},   { 21526 ,{0x0,   0x0}}} },
   { /* 8  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2, { { 21124 ,{0x0, 0x0}},   { 21227 ,{0x0, 0x0}},   { 21330 ,{0x0, 0x0}},   { 21428  ,{0x0, 0x0}},   { 21526 ,{0x0,   0x0}}} },
   { /* 9  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2, { { 21124 ,{0x0, 0x0}},   { 21227 ,{0x0, 0x0}},   { 21330 ,{0x0, 0x0}},   { 21428  ,{0x0, 0x0}},   { 21526 ,{0x0,   0x0}}} },
   { /* 10 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2, { { 21124 ,{0x0, 0x0}},   { 21227 ,{0x0, 0x0}},   { 21330 ,{0x0, 0x0}},   { 21428  ,{0x0, 0x0}},   { 21526 ,{0x0,   0x0}}} },
   { /* 11 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2, { { 21124 ,{0x0, 0x0}},   { 21227 ,{0x0, 0x0}},   { 21330 ,{0x0, 0x0}},   { 21428  ,{0x0, 0x0}},   { 21526 ,{0x0,   0x0}}} },
   { /* 12 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2, { { 21124 ,{0x0, 0x0}},   { 21227 ,{0x0, 0x0}},   { 21330 ,{0x0, 0x0}},   { 21428  ,{0x0, 0x0}},   { 21526 ,{0x0,   0x0}}} },
   { /* 13 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2, { { 21124 ,{0x0, 0x0}},   { 21227 ,{0x0, 0x0}},   { 21330 ,{0x0, 0x0}},   { 21428  ,{0x0, 0x0}},   { 21526 ,{0x0,   0x0}}} },
   { /* 14 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2, { { 21124 ,{0x0, 0x0}},   { 21227 ,{0x0, 0x0}},   { 21330 ,{0x0, 0x0}},   { 21428  ,{0x0, 0x0}},   { 21526 ,{0x0,   0x0}}} },
   { /* 15 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2, { { 21124 ,{0x0, 0x0}},   { 21227 ,{0x0, 0x0}},   { 21330 ,{0x0, 0x0}},   { 21428  ,{0x0, 0x0}},   { 21526 ,{0x0,   0x0}}} },
   { /* 16 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2, { { 21124 ,{0x0, 0x0}},   { 21227 ,{0x0, 0x0}},   { 21330 ,{0x0, 0x0}},   { 21428  ,{0x0, 0x0}},   { 21526 ,{0x0,   0x0}}} },
   { /* 17 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2, { { 21124 ,{0x0, 0x0}},   { 21227 ,{0x0, 0x0}},   { 21330 ,{0x0, 0x0}},   { 21428  ,{0x0, 0x0}},   { 21526 ,{0x0,   0x0}}} },
   { /* 18 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2, { { 21124 ,{0x0, 0x0}},   { 21227 ,{0x0, 0x0}},   { 21330 ,{0x0, 0x0}},   { 21428  ,{0x0, 0x0}},   { 21526 ,{0x0,   0x0}}} },
   { /* 19 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2, { { 21124 ,{0x0, 0x0}},   { 21227 ,{0x0, 0x0}},   { 21330 ,{0x0, 0x0}},   { 21428  ,{0x0, 0x0}},   { 21526 ,{0x0,   0x0}}} },
   { /* 20 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2, { { 21124 ,{0x0, 0x0}},   { 21227 ,{0x0, 0x0}},   { 21330 ,{0x0, 0x0}},   { 21428  ,{0x0, 0x0}},   { 21526 ,{0x0,   0x0}}} },
   { /* 21 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2, { { 21124 ,{0x0, 0x0}},   { 21227 ,{0x0, 0x0}},   { 21330 ,{0x0, 0x0}},   { 21428  ,{0x0, 0x0}},   { 21526 ,{0x0,   0x0}}} },
   { /* 22 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2, { { 21124 ,{0x0, 0x0}},   { 21227 ,{0x0, 0x0}},   { 21330 ,{0x0, 0x0}},   { 21428  ,{0x0, 0x0}},   { 21526 ,{0x0,   0x0}}} },
   { /* 23 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2, { { 21124 ,{0x0, 0x0}},   { 21227 ,{0x0, 0x0}},   { 21330 ,{0x0, 0x0}},   { 21428  ,{0x0, 0x0}},   { 21526 ,{0x0,   0x0}}} },
   { /* 24 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2, { { 21124 ,{0x0, 0x0}},   { 21227 ,{0x0, 0x0}},   { 21330 ,{0x0, 0x0}},   { 21428  ,{0x0, 0x0}},   { 21526 ,{0x0,   0x0}}} },
   { /* 25 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2, { { 21124 ,{0x0, 0x0}},   { 21227 ,{0x0, 0x0}},   { 21330 ,{0x0, 0x0}},   { 21428  ,{0x0, 0x0}},   { 21526 ,{0x0,   0x0}}} },
   { /* 26 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2, { { 21124 ,{0x0, 0x0}},   { 21227 ,{0x0, 0x0}},   { 21330 ,{0x0, 0x0}},   { 21428  ,{0x0, 0x0}},   { 21526 ,{0x0,   0x0}}} },
   { /* 27 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2, { { 21124 ,{0x0, 0x0}},   { 21227 ,{0x0, 0x0}},   { 21330 ,{0x0, 0x0}},   { 21428  ,{0x0, 0x0}},   { 21526 ,{0x0,   0x0}}} },

};

const UL1_MIPI_DATA_SUBBAND_TABLE_T UMTS_MIPI_RX_DATA_UMTSBand5_Set2[UL1_MIPI_RX_DATA_NUM] = 
{
   //No.      elm type , port_sel      ,  data_seq  , user id,         { { sub 0 ,addr, data }},{ sub 1 ,addr, data }},{ sub 2 ,addr, data}}, { sub 3, addr, data  }}, { sub 4, addr data  } }},
   { /* 0  */ UL1_MIPI_ASM,      UL1_MIPI_PORT1,  UL1_REG_W     , MIPI_USID_ASM0_Set2,  { { 8714 ,{0x00, 0x75}}, { 8764 ,{0x00, 0x75}},   { 8815 ,{0x00, 0x75}},  { 8865  ,{0x00, 0x75}},   { 8916 ,{0x00, 0x75}} }},
   { /* 1  */ UL1_MIPI_ASM_RXD,  UL1_MIPI_PORT3,  UL1_REG_W     , MIPI_USID_ASM1_Set2,  { { 8714 ,{0x00, 0x03}}, { 8764 ,{0x00, 0x03}},   { 8815 ,{0x00, 0x03}},  { 8865  ,{0x00, 0x03}},   { 8916 ,{0x00, 0x03}} }},
   { /* 2  */ UL1_MIPI_ASM,      UL1_MIPI_PORT1,  UL1_REG_W     , MIPI_USID_ASM0_Set2,  { { 8714 ,{0x00, 0x00}}, { 8764 ,{0x00, 0x00}},   { 8815 ,{0x00, 0x00}},  { 8865  ,{0x00, 0x00}},   { 8916 ,{0x00, 0x00}} }},
   { /* 3  */ UL1_MIPI_ASM_RXD,  UL1_MIPI_PORT3,  UL1_REG_W     , MIPI_USID_ASM1_Set2,  { { 8714 ,{0x00, 0x00}}, { 8764 ,{0x00, 0x00}},   { 8815 ,{0x00, 0x00}},  { 8865  ,{0x00, 0x00}},   { 8916 ,{0x00, 0x00}} }},
   { /* 4  */ UL1_MIPI_ANT,      UL1_MIPI_PORT2,  UL1_REG_W     , MIPI_USID_ANT0_Set2,  { { 8714 ,{0x00, 0x02}}, { 8764 ,{0x00, 0x02}},   { 8815 ,{0x00, 0x02}},  { 8865  ,{0x00, 0x02}},   { 8916 ,{0x00, 0x02}} }},
   { /* 5  */ UL1_MIPI_ANT,      UL1_MIPI_PORT2,  UL1_REG_W     , MIPI_USID_ANT0_Set2,  { { 8714 ,{0x00, 0x00}}, { 8764 ,{0x00, 0x00}},   { 8815 ,{0x00, 0x00}},  { 8865  ,{0x00, 0x00}},   { 8916 ,{0x00, 0x00}} }},
   { /* 6  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2, { { 8714 ,{0x0, 0x0}},   { 8764 ,{0x0, 0x0}},     { 8815 ,{0x0, 0x0}},    { 8865  ,{0x0, 0x0}},     { 8916 ,{0x0,   0x0}} }},
   { /* 7  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2, { { 8714 ,{0x0, 0x0}},   { 8764 ,{0x0, 0x0}},     { 8815 ,{0x0, 0x0}},    { 8865  ,{0x0, 0x0}},     { 8916 ,{0x0,   0x0}} }},
   { /* 8  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2, { { 8714 ,{0x0, 0x0}},   { 8764 ,{0x0, 0x0}},     { 8815 ,{0x0, 0x0}},    { 8865  ,{0x0, 0x0}},     { 8916 ,{0x0,   0x0}} }},
   { /* 9  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2, { { 8714 ,{0x0, 0x0}},   { 8764 ,{0x0, 0x0}},     { 8815 ,{0x0, 0x0}},    { 8865  ,{0x0, 0x0}},     { 8916 ,{0x0,   0x0}} }},
   { /* 10 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2, { { 8714 ,{0x0, 0x0}},   { 8764 ,{0x0, 0x0}},     { 8815 ,{0x0, 0x0}},    { 8865  ,{0x0, 0x0}},     { 8916 ,{0x0,   0x0}} }},
   { /* 11 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2, { { 8714 ,{0x0, 0x0}},   { 8764 ,{0x0, 0x0}},     { 8815 ,{0x0, 0x0}},    { 8865  ,{0x0, 0x0}},     { 8916 ,{0x0,   0x0}} }},
   { /* 12 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2, { { 8714 ,{0x0, 0x0}},   { 8764 ,{0x0, 0x0}},     { 8815 ,{0x0, 0x0}},    { 8865  ,{0x0, 0x0}},     { 8916 ,{0x0,   0x0}} }},
   { /* 13 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2, { { 8714 ,{0x0, 0x0}},   { 8764 ,{0x0, 0x0}},     { 8815 ,{0x0, 0x0}},    { 8865  ,{0x0, 0x0}},     { 8916 ,{0x0,   0x0}} }},
   { /* 14 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2, { { 8714 ,{0x0, 0x0}},   { 8764 ,{0x0, 0x0}},     { 8815 ,{0x0, 0x0}},    { 8865  ,{0x0, 0x0}},     { 8916 ,{0x0,   0x0}} }},
   { /* 15 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2, { { 8714 ,{0x0, 0x0}},   { 8764 ,{0x0, 0x0}},     { 8815 ,{0x0, 0x0}},    { 8865  ,{0x0, 0x0}},     { 8916 ,{0x0,   0x0}} }},
   { /* 16 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2, { { 8714 ,{0x0, 0x0}},   { 8764 ,{0x0, 0x0}},     { 8815 ,{0x0, 0x0}},    { 8865  ,{0x0, 0x0}},     { 8916 ,{0x0,   0x0}} }},
   { /* 17 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2, { { 8714 ,{0x0, 0x0}},   { 8764 ,{0x0, 0x0}},     { 8815 ,{0x0, 0x0}},    { 8865  ,{0x0, 0x0}},     { 8916 ,{0x0,   0x0}} }},
   { /* 18 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2, { { 8714 ,{0x0, 0x0}},   { 8764 ,{0x0, 0x0}},     { 8815 ,{0x0, 0x0}},    { 8865  ,{0x0, 0x0}},     { 8916 ,{0x0,   0x0}} }},
   { /* 19 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2, { { 8714 ,{0x0, 0x0}},   { 8764 ,{0x0, 0x0}},     { 8815 ,{0x0, 0x0}},    { 8865  ,{0x0, 0x0}},     { 8916 ,{0x0,   0x0}} }},
   { /* 20 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2, { { 8714 ,{0x0, 0x0}},   { 8764 ,{0x0, 0x0}},     { 8815 ,{0x0, 0x0}},    { 8865  ,{0x0, 0x0}},     { 8916 ,{0x0,   0x0}} }},
   { /* 21 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2, { { 8714 ,{0x0, 0x0}},   { 8764 ,{0x0, 0x0}},     { 8815 ,{0x0, 0x0}},    { 8865  ,{0x0, 0x0}},     { 8916 ,{0x0,   0x0}} }},
   { /* 22 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2, { { 8714 ,{0x0, 0x0}},   { 8764 ,{0x0, 0x0}},     { 8815 ,{0x0, 0x0}},    { 8865  ,{0x0, 0x0}},     { 8916 ,{0x0,   0x0}} }},
   { /* 23 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2, { { 8714 ,{0x0, 0x0}},   { 8764 ,{0x0, 0x0}},     { 8815 ,{0x0, 0x0}},    { 8865  ,{0x0, 0x0}},     { 8916 ,{0x0,   0x0}} }},
   { /* 24 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2, { { 8714 ,{0x0, 0x0}},   { 8764 ,{0x0, 0x0}},     { 8815 ,{0x0, 0x0}},    { 8865  ,{0x0, 0x0}},     { 8916 ,{0x0,   0x0}} }},
   { /* 25 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2, { { 8714 ,{0x0, 0x0}},   { 8764 ,{0x0, 0x0}},     { 8815 ,{0x0, 0x0}},    { 8865  ,{0x0, 0x0}},     { 8916 ,{0x0,   0x0}} }},
   { /* 26 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2, { { 8714 ,{0x0, 0x0}},   { 8764 ,{0x0, 0x0}},     { 8815 ,{0x0, 0x0}},    { 8865  ,{0x0, 0x0}},     { 8916 ,{0x0,   0x0}} }},
   { /* 27 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2, { { 8714 ,{0x0, 0x0}},   { 8764 ,{0x0, 0x0}},     { 8815 ,{0x0, 0x0}},    { 8865  ,{0x0, 0x0}},     { 8916 ,{0x0,   0x0}} }},
};


const UL1_MIPI_DATA_SUBBAND_TABLE_T UMTS_MIPI_RX_DATA_UMTSBand8_Set2[UL1_MIPI_RX_DATA_NUM] = 
{
   //No.      elm type , port_sel      ,  data_seq  , user id,         { { sub 0 ,addr, data }},{ sub 1 ,addr, data }},{ sub 2 ,addr, data}}, { sub 3, addr, data  }}, { sub 4, addr data  } }},
   { /* 0  */ UL1_MIPI_ASM,      UL1_MIPI_PORT1,  UL1_REG_W     , MIPI_USID_ASM0_Set2,  { { 9274 ,{0x00, 0x6D}}, { 9349 ,{0x00, 0x6D}},   { 9425 ,{0x00, 0x6D}},  { 9500  ,{0x00, 0x6D}},   { 9576 ,{0x00, 0x6D}} }},
   { /* 1  */ UL1_MIPI_ASM_RXD,  UL1_MIPI_PORT3,  UL1_REG_W     , MIPI_USID_ASM1_Set2,  { { 9274 ,{0x00, 0x02}}, { 9349 ,{0x00, 0x02}},   { 9425 ,{0x00, 0x02}},  { 9500  ,{0x00, 0x02}},   { 9576 ,{0x00, 0x02}} }},
   { /* 2  */ UL1_MIPI_ASM,      UL1_MIPI_PORT1,  UL1_REG_W     , MIPI_USID_ASM0_Set2,  { { 9274 ,{0x00, 0x00}}, { 9349 ,{0x00, 0x00}},   { 9425 ,{0x00, 0x00}},  { 9500  ,{0x00, 0x00}},   { 9576 ,{0x00, 0x00}} }},
   { /* 3  */ UL1_MIPI_ASM_RXD,  UL1_MIPI_PORT3,  UL1_REG_W     , MIPI_USID_ASM1_Set2,  { { 9274 ,{0x00, 0x00}}, { 9349 ,{0x00, 0x00}},   { 9425 ,{0x00, 0x00}},  { 9500  ,{0x00, 0x00}},   { 9576 ,{0x00, 0x00}} }},
   { /* 4  */ UL1_MIPI_ANT,      UL1_MIPI_PORT2,  UL1_REG_W     , MIPI_USID_ANT0_Set2,  { { 9274 ,{0x00, 0x01}}, { 9349 ,{0x00, 0x01}},   { 9425 ,{0x00, 0x01}},  { 9500  ,{0x00, 0x01}},   { 9576 ,{0x00, 0x01}} }},
   { /* 5  */ UL1_MIPI_ANT,      UL1_MIPI_PORT2,  UL1_REG_W     , MIPI_USID_ANT0_Set2,  { { 9274 ,{0x00, 0x00}}, { 9349 ,{0x00, 0x00}},   { 9425 ,{0x00, 0x00}},  { 9500  ,{0x00, 0x00}},   { 9576 ,{0x00, 0x00}} }},
   { /* 6  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2, { { 9274 ,{0x0, 0x0}},   { 9349 ,{0x0, 0x0}},     { 9425 ,{0x0, 0x0}},    { 9500  ,{0x0, 0x0}},     { 9576 ,{0x0,   0x0}} }},
   { /* 7  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2, { { 9274 ,{0x0, 0x0}},   { 9349 ,{0x0, 0x0}},     { 9425 ,{0x0, 0x0}},    { 9500  ,{0x0, 0x0}},     { 9576 ,{0x0,   0x0}} }},
   { /* 8  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2, { { 9274 ,{0x0, 0x0}},   { 9349 ,{0x0, 0x0}},     { 9425 ,{0x0, 0x0}},    { 9500  ,{0x0, 0x0}},     { 9576 ,{0x0,   0x0}} }},
   { /* 9  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2, { { 9274 ,{0x0, 0x0}},   { 9349 ,{0x0, 0x0}},     { 9425 ,{0x0, 0x0}},    { 9500  ,{0x0, 0x0}},     { 9576 ,{0x0,   0x0}} }},
   { /* 10 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2, { { 9274 ,{0x0, 0x0}},   { 9349 ,{0x0, 0x0}},     { 9425 ,{0x0, 0x0}},    { 9500  ,{0x0, 0x0}},     { 9576 ,{0x0,   0x0}} }},
   { /* 11 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2, { { 9274 ,{0x0, 0x0}},   { 9349 ,{0x0, 0x0}},     { 9425 ,{0x0, 0x0}},    { 9500  ,{0x0, 0x0}},     { 9576 ,{0x0,   0x0}} }},
   { /* 12 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2, { { 9274 ,{0x0, 0x0}},   { 9349 ,{0x0, 0x0}},     { 9425 ,{0x0, 0x0}},    { 9500  ,{0x0, 0x0}},     { 9576 ,{0x0,   0x0}} }},
   { /* 13 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2, { { 9274 ,{0x0, 0x0}},   { 9349 ,{0x0, 0x0}},     { 9425 ,{0x0, 0x0}},    { 9500  ,{0x0, 0x0}},     { 9576 ,{0x0,   0x0}} }},
   { /* 14 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2, { { 9274 ,{0x0, 0x0}},   { 9349 ,{0x0, 0x0}},     { 9425 ,{0x0, 0x0}},    { 9500  ,{0x0, 0x0}},     { 9576 ,{0x0,   0x0}} }},
   { /* 15 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2, { { 9274 ,{0x0, 0x0}},   { 9349 ,{0x0, 0x0}},     { 9425 ,{0x0, 0x0}},    { 9500  ,{0x0, 0x0}},     { 9576 ,{0x0,   0x0}} }},
   { /* 16 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2, { { 9274 ,{0x0, 0x0}},   { 9349 ,{0x0, 0x0}},     { 9425 ,{0x0, 0x0}},    { 9500  ,{0x0, 0x0}},     { 9576 ,{0x0,   0x0}} }},
   { /* 17 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2, { { 9274 ,{0x0, 0x0}},   { 9349 ,{0x0, 0x0}},     { 9425 ,{0x0, 0x0}},    { 9500  ,{0x0, 0x0}},     { 9576 ,{0x0,   0x0}} }},
   { /* 18 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2, { { 9274 ,{0x0, 0x0}},   { 9349 ,{0x0, 0x0}},     { 9425 ,{0x0, 0x0}},    { 9500  ,{0x0, 0x0}},     { 9576 ,{0x0,   0x0}} }},
   { /* 19 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2, { { 9274 ,{0x0, 0x0}},   { 9349 ,{0x0, 0x0}},     { 9425 ,{0x0, 0x0}},    { 9500  ,{0x0, 0x0}},     { 9576 ,{0x0,   0x0}} }},
   { /* 20 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2, { { 9274 ,{0x0, 0x0}},   { 9349 ,{0x0, 0x0}},     { 9425 ,{0x0, 0x0}},    { 9500  ,{0x0, 0x0}},     { 9576 ,{0x0,   0x0}} }},
   { /* 21 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2, { { 9274 ,{0x0, 0x0}},   { 9349 ,{0x0, 0x0}},     { 9425 ,{0x0, 0x0}},    { 9500  ,{0x0, 0x0}},     { 9576 ,{0x0,   0x0}} }},
   { /* 22 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2, { { 9274 ,{0x0, 0x0}},   { 9349 ,{0x0, 0x0}},     { 9425 ,{0x0, 0x0}},    { 9500  ,{0x0, 0x0}},     { 9576 ,{0x0,   0x0}} }},
   { /* 23 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2, { { 9274 ,{0x0, 0x0}},   { 9349 ,{0x0, 0x0}},     { 9425 ,{0x0, 0x0}},    { 9500  ,{0x0, 0x0}},     { 9576 ,{0x0,   0x0}} }},
   { /* 24 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2, { { 9274 ,{0x0, 0x0}},   { 9349 ,{0x0, 0x0}},     { 9425 ,{0x0, 0x0}},    { 9500  ,{0x0, 0x0}},     { 9576 ,{0x0,   0x0}} }},
   { /* 25 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2, { { 9274 ,{0x0, 0x0}},   { 9349 ,{0x0, 0x0}},     { 9425 ,{0x0, 0x0}},    { 9500  ,{0x0, 0x0}},     { 9576 ,{0x0,   0x0}} }},
   { /* 26 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2, { { 9274 ,{0x0, 0x0}},   { 9349 ,{0x0, 0x0}},     { 9425 ,{0x0, 0x0}},    { 9500  ,{0x0, 0x0}},     { 9576 ,{0x0,   0x0}} }},
   { /* 27 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL  , MIPI_USID_INIT0_Set2, { { 9274 ,{0x0, 0x0}},   { 9349 ,{0x0, 0x0}},     { 9425 ,{0x0, 0x0}},    { 9500  ,{0x0, 0x0}},     { 9576 ,{0x0,   0x0}} }},
};

const UL1_MIPI_DATA_SUBBAND_TABLE_T UMTS_MIPI_RX_DATA_UMTSBand3_Set2[] = {{0}};
const UL1_MIPI_DATA_SUBBAND_TABLE_T UMTS_MIPI_RX_DATA_UMTSBand6_Set2[] = {{0}};
const UL1_MIPI_DATA_SUBBAND_TABLE_T UMTS_MIPI_RX_DATA_UMTSBand9_Set2[] = {{0}};
const UL1_MIPI_DATA_SUBBAND_TABLE_T UMTS_MIPI_RX_DATA_UMTSBand11_Set2[] = {{0}};
const UL1_MIPI_DATA_SUBBAND_TABLE_T UMTS_MIPI_RX_DATA_UMTSBand19_Set2[] = {{0}};

const UL1_MIPI_DATA_SUBBAND_TABLE_T* const UMTS_MIPI_RX_DATA_TABLE_Set2[] = 
{
   M_UMTS_RX_DATA(UMTSBandNone,Set2),          /*UMTSBandNone*/          
   M_UMTS_RX_DATA(RX_BAND_INDICATOR_0_Set2,Set2),   /*UMTS_Route0*/
   M_UMTS_RX_DATA(RX_BAND_INDICATOR_1_Set2,Set2),   /*UMTS_Route1*/
   M_UMTS_RX_DATA(RX_BAND_INDICATOR_2_Set2,Set2),   /*UMTS_Route2*/
   M_UMTS_RX_DATA(RX_BAND_INDICATOR_3_Set2,Set2),   /*UMTS_Route3*/ 
   M_UMTS_RX_DATA(RX_BAND_INDICATOR_4_Set2,Set2),   /*UMTS_Route4*/
#if IS_3G_RF_NCCA_SUPPORT
   M_UMTS_RX_DATA(MIPI_RX_ROUTE_IND_5,Set2),   /*UMTS_Route5*/
   M_UMTS_RX_DATA(MIPI_RX_ROUTE_IND_6,Set2),   /*UMTS_Route6*/
   M_UMTS_RX_DATA(MIPI_RX_ROUTE_IND_7,Set2),   /*UMTS_Route7*/
   M_UMTS_RX_DATA(MIPI_RX_ROUTE_IND_8,Set2),   /*UMTS_Route8*/
   M_UMTS_RX_DATA(MIPI_RX_ROUTE_IND_9,Set2),   /*UMTS_Route9*/
   M_UMTS_RX_DATA(MIPI_RX_ROUTE_IND_10,Set2),  /*UMTS_Route10*/
   M_UMTS_RX_DATA(MIPI_RX_ROUTE_IND_11,Set2),  /*UMTS_Route11*/
   M_UMTS_RX_DATA(MIPI_RX_ROUTE_IND_12,Set2),  /*UMTS_Route12*/
   M_UMTS_RX_DATA(MIPI_RX_ROUTE_IND_13,Set2),  /*UMTS_Route13*/
   M_UMTS_RX_DATA(MIPI_RX_ROUTE_IND_14,Set2),  /*UMTS_Route14*/
#endif
};

const UL1_MIPI_EVENT_TABLE_T UMTS_MIPI_TX_EVENT_UMTSBandNone_Set2[UL1_MIPI_TX_EVENT_NUM] = 
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

const UL1_MIPI_EVENT_TABLE_T UMTS_MIPI_TX_EVENT_UMTSBand1_Set2[UL1_MIPI_TX_EVENT_NUM] = 
{
	 /* No.     elm type , data idx       , evt_type       , evt_offset     */
   /*                     { start, stop },                  ( us )         */
   { /* 0  */ UL1_MIPI_PA,   { 0    , 0   }, UL1_MIPI_TRX_ON,     US2CHIPCNT(195) },
   { /* 1  */ UL1_MIPI_PA,   { 1    , 3   }, UL1_MIPI_TRX_OFF,    US2CHIPCNT(10)  },
   { /* 2  */ UL1_MIPI_ASM,  { 4    , 4   }, UL1_MIPI_TRX_ON,     US2CHIPCNT(195) },
   { /* 3  */ UL1_MIPI_ANT,  { 5    , 5   }, UL1_MIPI_TRX_ON,     US2CHIPCNT(200) },
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

const UL1_MIPI_EVENT_TABLE_T UMTS_MIPI_TX_EVENT_UMTSBand2_Set2[UL1_MIPI_TX_EVENT_NUM] = 
{
	 /* No.     elm type , data idx       , evt_type       , evt_offset     */
   /*                     { start, stop },                  ( us )         */
   { /* 0  */ UL1_MIPI_PA,   { 0    , 0    }, UL1_MIPI_TRX_ON,    US2CHIPCNT(195) },
   { /* 1  */ UL1_MIPI_PA,   { 1    , 3    }, UL1_MIPI_TRX_OFF,   US2CHIPCNT(10)  },
   { /* 2  */ UL1_MIPI_ASM,  { 4    , 4    }, UL1_MIPI_TRX_ON,    US2CHIPCNT(195) },
   { /* 3  */ UL1_MIPI_ANT,  { 5    , 5   }, UL1_MIPI_TRX_ON,     US2CHIPCNT(200) },
   { /* 4  */ UL1_MIPI_NULL, { 0	, 0	   }, UL1_MIPI_EVENT_NULL, 0			  },
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

const UL1_MIPI_EVENT_TABLE_T UMTS_MIPI_TX_EVENT_UMTSBand4_Set2[UL1_MIPI_TX_EVENT_NUM] = 
{
	 /* No.     elm type , data idx       , evt_type       , evt_offset     */
   /*                     { start, stop },                  ( us )         */
   { /* 0  */ UL1_MIPI_PA,   { 0    , 0    }, UL1_MIPI_TRX_ON,    US2CHIPCNT(195) },
   { /* 1  */ UL1_MIPI_PA,   { 1    , 3    }, UL1_MIPI_TRX_OFF,   US2CHIPCNT(10)  },
   { /* 2  */ UL1_MIPI_ASM,  { 4    , 4    }, UL1_MIPI_TRX_ON,    US2CHIPCNT(195) },
   { /* 3  */ UL1_MIPI_ANT,  { 5    , 5   }, UL1_MIPI_TRX_ON,     US2CHIPCNT(200) },
   { /* 4  */ UL1_MIPI_NULL, { 0	, 0    }, UL1_MIPI_EVENT_NULL, 0			  },
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


const UL1_MIPI_EVENT_TABLE_T UMTS_MIPI_TX_EVENT_UMTSBand5_Set2[UL1_MIPI_TX_EVENT_NUM] = 
{
	 /* No.     elm type , data idx       , evt_type       , evt_offset     */
   /*                     { start, stop },                  ( us )         */
   { /* 0  */ UL1_MIPI_PA,   { 0    , 0    }, UL1_MIPI_TRX_ON,    US2CHIPCNT(195) },
   { /* 1  */ UL1_MIPI_PA,   { 1    , 3    }, UL1_MIPI_TRX_OFF,   US2CHIPCNT(10)  },
   { /* 2  */ UL1_MIPI_ASM,  { 4    , 4    }, UL1_MIPI_TRX_ON,    US2CHIPCNT(195) },
   { /* 3  */ UL1_MIPI_ANT,  { 5    , 5   }, UL1_MIPI_TRX_ON,     US2CHIPCNT(200) },
   { /* 4  */ UL1_MIPI_NULL, { 0	, 0	   }, UL1_MIPI_EVENT_NULL, 0			  },
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

const UL1_MIPI_EVENT_TABLE_T UMTS_MIPI_TX_EVENT_UMTSBand8_Set2[UL1_MIPI_TX_EVENT_NUM] = 
{
	 /* No.     elm type , data idx       , evt_type       , evt_offset     */
   /*                     { start, stop },                  ( us )         */
   { /* 0  */ UL1_MIPI_PA,   { 0    , 0    }, UL1_MIPI_TRX_ON,    US2CHIPCNT(195) },
   { /* 1  */ UL1_MIPI_PA,   { 1    , 3    }, UL1_MIPI_TRX_OFF,   US2CHIPCNT(10)  },
   { /* 2  */ UL1_MIPI_ASM,  { 4    , 4    }, UL1_MIPI_TRX_ON,    US2CHIPCNT(195) },
   { /* 3  */ UL1_MIPI_ANT,  { 5    , 5   }, UL1_MIPI_TRX_ON,     US2CHIPCNT(200) },
   { /* 4  */ UL1_MIPI_NULL, { 0	, 0	   }, UL1_MIPI_EVENT_NULL, 0			  },
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

const UL1_MIPI_EVENT_TABLE_T UMTS_MIPI_TX_EVENT_UMTSBand3_Set2[]  = {{0}};
const UL1_MIPI_EVENT_TABLE_T UMTS_MIPI_TX_EVENT_UMTSBand6_Set2[]  = {{0}};
const UL1_MIPI_EVENT_TABLE_T UMTS_MIPI_TX_EVENT_UMTSBand9_Set2[]  = {{0}};
const UL1_MIPI_EVENT_TABLE_T UMTS_MIPI_TX_EVENT_UMTSBand11_Set2[] = {{0}};
const UL1_MIPI_EVENT_TABLE_T UMTS_MIPI_TX_EVENT_UMTSBand19_Set2[] = {{0}};

const UL1_MIPI_EVENT_TABLE_T* const UMTS_MIPI_TX_EVENT_TABLE_Set2[] =
{
   M_UMTS_TX_EVENT(UMTSBandNone,Set2),                       /*UMTSUMTSBandNone*/          
   M_UMTS_TX_EVENT(RX_BAND_INDICATOR_0_Set2,Set2),     /*RX_BAND_INDICATOR_0_Set2*/
   M_UMTS_TX_EVENT(RX_BAND_INDICATOR_1_Set2,Set2),     /*RX_BAND_INDICATOR_1_Set2*/
   M_UMTS_TX_EVENT(RX_BAND_INDICATOR_2_Set2,Set2),     /*RX_BAND_INDICATOR_2_Set2*/
   M_UMTS_TX_EVENT(RX_BAND_INDICATOR_3_Set2,Set2),     /*RX_BAND_INDICATOR_3_Set2*/ 
   M_UMTS_TX_EVENT(RX_BAND_INDICATOR_4_Set2,Set2),     /*RX_BAND_INDICATOR_4_Set2*/ 
};

const UL1_MIPI_DATA_SUBBAND_TABLE_T UMTS_MIPI_TX_DATA_UMTSBandNone_Set2[UL1_MIPI_TX_DATA_NUM] = 
{
   //No.      elm type , port_sel      ,  data_seq  , user id,         { { sub 0 ,addr, data }},{ sub 1 ,addr, data }},{ sub 2 ,addr, data}}, { sub 3, addr, data  }}, { sub 4, addr data  } }},
   { /* 0  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL , MIPI_USID_INIT0_Set2 , { { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},       { 0x0 ,{0x0, 0x0}} }},
   { /* 1  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL , MIPI_USID_INIT0_Set2 , { { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},       { 0x0 ,{0x0, 0x0}} }},
   { /* 2  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL , MIPI_USID_INIT0_Set2 , { { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},       { 0x0 ,{0x0, 0x0}} }},
   { /* 3  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL , MIPI_USID_INIT0_Set2 , { { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},       { 0x0 ,{0x0, 0x0}} }},
   { /* 4  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL , MIPI_USID_INIT0_Set2 , { { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},       { 0x0 ,{0x0, 0x0}} }},
   { /* 5  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL , MIPI_USID_INIT0_Set2 , { { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},       { 0x0 ,{0x0, 0x0}} }},
   { /* 6  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL , MIPI_USID_INIT0_Set2 , { { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},       { 0x0 ,{0x0, 0x0}} }},
   { /* 7  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL , MIPI_USID_INIT0_Set2 , { { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},       { 0x0 ,{0x0, 0x0}} }},
   { /* 8  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL , MIPI_USID_INIT0_Set2 , { { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},       { 0x0 ,{0x0, 0x0}} }},
   { /* 9  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL , MIPI_USID_INIT0_Set2 , { { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},       { 0x0 ,{0x0, 0x0}} }},
   { /* 10 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL , MIPI_USID_INIT0_Set2 , { { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},       { 0x0 ,{0x0, 0x0}} }},
   { /* 11 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL , MIPI_USID_INIT0_Set2 , { { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},       { 0x0 ,{0x0, 0x0}} }},
   { /* 12 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL , MIPI_USID_INIT0_Set2 , { { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},       { 0x0 ,{0x0, 0x0}} }},
   { /* 13 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL , MIPI_USID_INIT0_Set2 , { { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},       { 0x0 ,{0x0, 0x0}} }},
   { /* 14 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL , MIPI_USID_INIT0_Set2 , { { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},       { 0x0 ,{0x0, 0x0}} }},
   { /* 15 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL , MIPI_USID_INIT0_Set2 , { { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},       { 0x0 ,{0x0, 0x0}} }},
   { /* 16 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL , MIPI_USID_INIT0_Set2 , { { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},       { 0x0 ,{0x0, 0x0}} }},
   { /* 17 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL , MIPI_USID_INIT0_Set2 , { { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},     { 0x0 ,{0x0, 0x0}},       { 0x0 ,{0x0, 0x0}} }},
};

const UL1_MIPI_DATA_SUBBAND_TABLE_T UMTS_MIPI_TX_DATA_UMTSBand1_Set2[UL1_MIPI_TX_DATA_NUM] = 
{
   //No.      elm type , port_sel      ,  data_seq  , user id,         { { sub 0 ,addr, data }},{ sub 1 ,addr, data }},{ sub 2 ,addr, data}}, { sub 3, addr, data}}, { sub 4, addr data  } }},   
   { /* 0  */ UL1_MIPI_PA  , UL1_MIPI_PORT0, UL1_REG_W  ,    MIPI_USID_PA0_Set2   , { { 19224 ,{0x00, 0x7A}}, { 19362 ,{0x00, 0x7A}}, { 19500 ,{0x00, 0x7A}}, { 19638 ,{0x00, 0x7A}}, { 19776 ,{0x00, 0x7A}}}},
   { /* 1  */ UL1_MIPI_PA  , UL1_MIPI_PORT0, UL1_REG_W  ,    MIPI_USID_PA0_Set2   , { { 19224 ,{0x00, 0x00}}, { 19362 ,{0x00, 0x00}}, { 19500 ,{0x00, 0x00}}, { 19638 ,{0x00, 0x00}}, { 19776 ,{0x00, 0x00}}}},
   { /* 2  */ UL1_MIPI_PA  , UL1_MIPI_PORT0, UL1_REG_W  ,    MIPI_USID_PA0_Set2   , { { 19224 ,{0x00, 0x00}}, { 19362 ,{0x00, 0x00}}, { 19500 ,{0x00, 0x00}}, { 19638 ,{0x00, 0x00}}, { 19776 ,{0x00, 0x00}}}},
   { /* 3  */ UL1_MIPI_PA  , UL1_MIPI_PORT0, UL1_REG_W  ,    MIPI_USID_PA0_Set2   , { { 19224 ,{0x00, 0x00}}, { 19362 ,{0x00, 0x00}}, { 19500 ,{0x00, 0x00}}, { 19638 ,{0x00, 0x00}}, { 19776 ,{0x00, 0x00}}}},
   { /* 4  */ UL1_MIPI_ASM , UL1_MIPI_PORT1, UL1_REG_W  ,    MIPI_USID_ASM0_Set2  , { { 19224 ,{0x00, 0x4E}}, { 19362 ,{0x00, 0x4E}}, { 19500 ,{0x00, 0x4E}}, { 19638 ,{0x00, 0x4E}}, { 19776 ,{0x00, 0x4E}}}},
   { /* 5  */ UL1_MIPI_ANT , UL1_MIPI_PORT2, UL1_REG_W  ,    MIPI_USID_ANT0_Set2  , { { 19224 ,{0x00, 0x01}}, { 19362 ,{0x00, 0x01}}, { 19500 ,{0x00, 0x01}}, { 19638 ,{0x00, 0x01}}, { 19776 ,{0x00, 0x01}}}},
   { /* 6  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL , MIPI_USID_INIT0_Set2 , { { 0x0 ,{0x0, 0x0}}, 	{ 0x0 ,{0x0, 0x0}}, 	{ 0x0 ,{0x0, 0x0}}, 	{ 0x0 ,{0x0, 0x0}}, 	  { 0x0 ,{0x0, 0x0}} }},
   { /* 7  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL,   MIPI_USID_INIT0_Set2 , { { 19224 ,{0x00, 0x00}}, { 19362 ,{0x00, 0x00}}, { 19500 ,{0x00, 0x00}}, { 19638 ,{0x00, 0x00}}, { 19776 ,{0x00, 0x00}}}},
   { /* 8  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL,   MIPI_USID_INIT0_Set2 , { { 19224 ,{0x00, 0x00}}, { 19362 ,{0x00, 0x00}}, { 19500 ,{0x00, 0x00}}, { 19638 ,{0x00, 0x00}}, { 19776 ,{0x00, 0x00}}}},
   { /* 9  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL,   MIPI_USID_INIT0_Set2 , { { 19224 ,{0x00, 0x00}}, { 19362 ,{0x00, 0x00}}, { 19500 ,{0x00, 0x00}}, { 19638 ,{0x00, 0x00}}, { 19776 ,{0x00, 0x00}}}},
   { /* 10 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL,   MIPI_USID_INIT0_Set2 , { { 19224 ,{0x00, 0x00}}, { 19362 ,{0x00, 0x00}}, { 19500 ,{0x00, 0x00}}, { 19638 ,{0x00, 0x00}}, { 19776 ,{0x00, 0x00}}}},
   { /* 11 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL,   MIPI_USID_INIT0_Set2 , { { 19224 ,{0x00, 0x00}}, { 19362 ,{0x00, 0x00}}, { 19500 ,{0x00, 0x00}}, { 19638 ,{0x00, 0x00}}, { 19776 ,{0x00, 0x00}}}},
   { /* 12 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL,   MIPI_USID_INIT0_Set2 , { { 19224 ,{0x00, 0x00}}, { 19362 ,{0x00, 0x00}}, { 19500 ,{0x00, 0x00}}, { 19638 ,{0x00, 0x00}}, { 19776 ,{0x00, 0x00}}}},
   { /* 13 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL,   MIPI_USID_INIT0_Set2 , { { 19224 ,{0x00, 0x00}}, { 19362 ,{0x00, 0x00}}, { 19500 ,{0x00, 0x00}}, { 19638 ,{0x00, 0x00}}, { 19776 ,{0x00, 0x00}}}},
   { /* 14 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL,   MIPI_USID_INIT0_Set2 , { { 19224 ,{0x00, 0x00}}, { 19362 ,{0x00, 0x00}}, { 19500 ,{0x00, 0x00}}, { 19638 ,{0x00, 0x00}}, { 19776 ,{0x00, 0x00}}}},
   { /* 15 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL,   MIPI_USID_INIT0_Set2 , { { 19224 ,{0x00, 0x00}}, { 19362 ,{0x00, 0x00}}, { 19500 ,{0x00, 0x00}}, { 19638 ,{0x00, 0x00}}, { 19776 ,{0x00, 0x00}}}},
   { /* 16 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL,   MIPI_USID_INIT0_Set2 , { { 19224 ,{0x00, 0x00}}, { 19362 ,{0x00, 0x00}}, { 19500 ,{0x00, 0x00}}, { 19638 ,{0x00, 0x00}}, { 19776 ,{0x00, 0x00}}}},
   { /* 17 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL,   MIPI_USID_INIT0_Set2 , { { 19224 ,{0x00, 0x00}}, { 19362 ,{0x00, 0x00}}, { 19500 ,{0x00, 0x00}}, { 19638 ,{0x00, 0x00}}, { 19776 ,{0x00, 0x00}}}},
};


const UL1_MIPI_DATA_SUBBAND_TABLE_T UMTS_MIPI_TX_DATA_UMTSBand2_Set2[UL1_MIPI_TX_DATA_NUM] = 
{
   //No.      elm type , port_sel      ,  data_seq  , user id,         { { sub 0 ,addr, data }},{ sub 1 ,addr, data }},{ sub 2 ,addr, data}}, { sub 3, addr, data}}, { sub 4, addr data  } }},   
   { /* 0  */ UL1_MIPI_PA  , UL1_MIPI_PORT0, UL1_REG_W  ,    MIPI_USID_PA0_Set2    , { { 18524 ,{0x00, 0x7A}}, { 18662 ,{0x00, 0x7A}}, { 18800 ,{0x00, 0x7A}}, { 18938 ,{0x00, 0x7A}}, { 19076 ,{0x00, 0x7A}} }},
   { /* 1  */ UL1_MIPI_PA  , UL1_MIPI_PORT0, UL1_REG_W  ,    MIPI_USID_PA0_Set2    , { { 18524 ,{0x00, 0x00}}, { 18662 ,{0x00, 0x00}}, { 18800 ,{0x00, 0x00}}, { 18938 ,{0x00, 0x00}}, { 19076 ,{0x00, 0x00}} }},
   { /* 2  */ UL1_MIPI_PA  , UL1_MIPI_PORT0, UL1_REG_W  ,    MIPI_USID_PA0_Set2    , { { 18524 ,{0x00, 0x00}}, { 18662 ,{0x00, 0x00}}, { 18800 ,{0x00, 0x00}}, { 18938 ,{0x00, 0x00}}, { 19076 ,{0x00, 0x00}} }},
   { /* 3  */ UL1_MIPI_PA  , UL1_MIPI_PORT0, UL1_REG_W  ,    MIPI_USID_PA0_Set2    , { { 18524 ,{0x00, 0x00}}, { 18662 ,{0x00, 0x00}}, { 18800 ,{0x00, 0x00}}, { 18938 ,{0x00, 0x00}}, { 19076 ,{0x00, 0x00}} }},
   { /* 4  */ UL1_MIPI_ASM , UL1_MIPI_PORT1, UL1_REG_W  ,    MIPI_USID_ASM0_Set2   , { { 18524 ,{0x00, 0x2E}}, { 18662 ,{0x00, 0x2E}}, { 18800 ,{0x00, 0x2E}}, { 18938 ,{0x00, 0x2E}}, { 19076 ,{0x00, 0x2E}} }},
   { /* 5  */ UL1_MIPI_ANT , UL1_MIPI_PORT2, UL1_REG_W  ,    MIPI_USID_ANT0_Set2   , { { 18524 ,{0x00, 0x01}}, { 18662 ,{0x00, 0x01}}, { 18800 ,{0x00, 0x01}}, { 18938 ,{0x00, 0x01}}, { 19076 ,{0x00, 0x01}} }},
   { /* 6  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL , MIPI_USID_INIT0_Set2 , { { 0x0 ,{0x0, 0x0}}, 	{ 0x0 ,{0x0, 0x0}}, 	{ 0x0 ,{0x0, 0x0}}, 	{ 0x0 ,{0x0, 0x0}}, 	  { 0x0 ,{0x0, 0x0}} }},
   { /* 7  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL,   MIPI_USID_INIT0_Set2 , { { 18524 ,{0x00, 0x00}}, { 18662 ,{0x00, 0x00}}, { 18800 ,{0x00, 0x00}}, { 18938 ,{0x00, 0x00}}, { 19076 ,{0x00, 0x00}} }},
   { /* 8  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL,   MIPI_USID_INIT0_Set2 , { { 18524 ,{0x00, 0x00}}, { 18662 ,{0x00, 0x00}}, { 18800 ,{0x00, 0x00}}, { 18938 ,{0x00, 0x00}}, { 19076 ,{0x00, 0x00}} }},
   { /* 9  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL,   MIPI_USID_INIT0_Set2 , { { 18524 ,{0x00, 0x00}}, { 18662 ,{0x00, 0x00}}, { 18800 ,{0x00, 0x00}}, { 18938 ,{0x00, 0x00}}, { 19076 ,{0x00, 0x00}} }},
   { /* 10 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL,   MIPI_USID_INIT0_Set2 , { { 18524 ,{0x00, 0x00}}, { 18662 ,{0x00, 0x00}}, { 18800 ,{0x00, 0x00}}, { 18938 ,{0x00, 0x00}}, { 19076 ,{0x00, 0x00}} }},
   { /* 11 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL,   MIPI_USID_INIT0_Set2 , { { 18524 ,{0x00, 0x00}}, { 18662 ,{0x00, 0x00}}, { 18800 ,{0x00, 0x00}}, { 18938 ,{0x00, 0x00}}, { 19076 ,{0x00, 0x00}} }},
   { /* 12 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL,   MIPI_USID_INIT0_Set2 , { { 18524 ,{0x00, 0x00}}, { 18662 ,{0x00, 0x00}}, { 18800 ,{0x00, 0x00}}, { 18938 ,{0x00, 0x00}}, { 19076 ,{0x00, 0x00}} }},
   { /* 13 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL,   MIPI_USID_INIT0_Set2 , { { 18524 ,{0x00, 0x00}}, { 18662 ,{0x00, 0x00}}, { 18800 ,{0x00, 0x00}}, { 18938 ,{0x00, 0x00}}, { 19076 ,{0x00, 0x00}} }},
   { /* 14 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL,   MIPI_USID_INIT0_Set2 , { { 18524 ,{0x00, 0x00}}, { 18662 ,{0x00, 0x00}}, { 18800 ,{0x00, 0x00}}, { 18938 ,{0x00, 0x00}}, { 19076 ,{0x00, 0x00}} }},
   { /* 15 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL,   MIPI_USID_INIT0_Set2 , { { 18524 ,{0x00, 0x00}}, { 18662 ,{0x00, 0x00}}, { 18800 ,{0x00, 0x00}}, { 18938 ,{0x00, 0x00}}, { 19076 ,{0x00, 0x00}} }},
   { /* 16 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL,   MIPI_USID_INIT0_Set2 , { { 18524 ,{0x00, 0x00}}, { 18662 ,{0x00, 0x00}}, { 18800 ,{0x00, 0x00}}, { 18938 ,{0x00, 0x00}}, { 19076 ,{0x00, 0x00}} }},
   { /* 17 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL,   MIPI_USID_INIT0_Set2 , { { 18524 ,{0x00, 0x00}}, { 18662 ,{0x00, 0x00}}, { 18800 ,{0x00, 0x00}}, { 18938 ,{0x00, 0x00}}, { 19076 ,{0x00, 0x00}} }},
};

const UL1_MIPI_DATA_SUBBAND_TABLE_T UMTS_MIPI_TX_DATA_UMTSBand4_Set2[UL1_MIPI_TX_DATA_NUM] = 
{
   //No.      elm type , port_sel      ,  data_seq  , user id,         { { sub 0 ,addr, data }},{ sub 1 ,addr, data }},{ sub 2 ,addr, data}}, { sub 3, addr, data}}, { sub 4, addr data  } }},   
   { /* 0  */ UL1_MIPI_PA  , UL1_MIPI_PORT0, UL1_REG_W  ,    MIPI_USID_PA0_Set2    , { { 17124 ,{0x00, 0x7A}}, { 17224 ,{0x00, 0x7A}}, { 17324 ,{0x00, 0x7A}}, { 17425 ,{0x00, 0x7A}}, { 17526 ,{0x00, 0x7A}} }},
   { /* 1  */ UL1_MIPI_PA  , UL1_MIPI_PORT0, UL1_REG_W  ,    MIPI_USID_PA0_Set2    , { { 17124 ,{0x00, 0x00}}, { 17224 ,{0x00, 0x00}}, { 17324 ,{0x00, 0x00}}, { 17425 ,{0x00, 0x00}}, { 17526 ,{0x00, 0x00}} }},
   { /* 2  */ UL1_MIPI_PA  , UL1_MIPI_PORT0, UL1_REG_W  ,    MIPI_USID_PA0_Set2    , { { 17124 ,{0x00, 0x00}}, { 17224 ,{0x00, 0x00}}, { 17324 ,{0x00, 0x00}}, { 17425 ,{0x00, 0x00}}, { 17526 ,{0x00, 0x00}} }},
   { /* 3  */ UL1_MIPI_PA  , UL1_MIPI_PORT0, UL1_REG_W  ,    MIPI_USID_PA0_Set2    , { { 17124 ,{0x00, 0x00}}, { 17224 ,{0x00, 0x00}}, { 17324 ,{0x00, 0x00}}, { 17425 ,{0x00, 0x00}}, { 17526 ,{0x00, 0x00}} }},
   { /* 4  */ UL1_MIPI_ASM , UL1_MIPI_PORT1, UL1_REG_W  ,    MIPI_USID_ASM0_Set2   , { { 17124 ,{0x00, 0x66}}, { 17224 ,{0x00, 0x66}}, { 17324 ,{0x00, 0x66}}, { 17425 ,{0x00, 0x66}}, { 17526 ,{0x00, 0x66}} }},
   { /* 5  */ UL1_MIPI_ANT , UL1_MIPI_PORT2, UL1_REG_W  ,    MIPI_USID_ANT0_Set2   , { { 17124 ,{0x00, 0x01}}, { 17224 ,{0x00, 0x01}}, { 17324 ,{0x00, 0x01}}, { 17425 ,{0x00, 0x01}}, { 17526 ,{0x00, 0x01}} }},
   { /* 6  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL , MIPI_USID_INIT0_Set2 , { { 0x0 ,{0x0, 0x0}}, 	{ 0x0 ,{0x0, 0x0}}, 	{ 0x0 ,{0x0, 0x0}}, 	{ 0x0 ,{0x0, 0x0}}, 	  { 0x0 ,{0x0, 0x0}} }},
   { /* 7  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL,   MIPI_USID_INIT0_Set2 , { { 17124 ,{0x00, 0x00}}, { 17224 ,{0x00, 0x00}}, { 17324 ,{0x00, 0x00}}, { 17425 ,{0x00, 0x00}}, { 17526 ,{0x00, 0x00}} }},
   { /* 8  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL,   MIPI_USID_INIT0_Set2 , { { 17124 ,{0x00, 0x00}}, { 17224 ,{0x00, 0x00}}, { 17324 ,{0x00, 0x00}}, { 17425 ,{0x00, 0x00}}, { 17526 ,{0x00, 0x00}} }},
   { /* 9  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL,   MIPI_USID_INIT0_Set2 , { { 17124 ,{0x00, 0x00}}, { 17224 ,{0x00, 0x00}}, { 17324 ,{0x00, 0x00}}, { 17425 ,{0x00, 0x00}}, { 17526 ,{0x00, 0x00}} }},
   { /* 10 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL,   MIPI_USID_INIT0_Set2 , { { 17124 ,{0x00, 0x00}}, { 17224 ,{0x00, 0x00}}, { 17324 ,{0x00, 0x00}}, { 17425 ,{0x00, 0x00}}, { 17526 ,{0x00, 0x00}} }},
   { /* 11 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL,   MIPI_USID_INIT0_Set2 , { { 17124 ,{0x00, 0x00}}, { 17224 ,{0x00, 0x00}}, { 17324 ,{0x00, 0x00}}, { 17425 ,{0x00, 0x00}}, { 17526 ,{0x00, 0x00}} }},
   { /* 12 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL,   MIPI_USID_INIT0_Set2 , { { 17124 ,{0x00, 0x00}}, { 17224 ,{0x00, 0x00}}, { 17324 ,{0x00, 0x00}}, { 17425 ,{0x00, 0x00}}, { 17526 ,{0x00, 0x00}} }},
   { /* 13 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL,   MIPI_USID_INIT0_Set2 , { { 17124 ,{0x00, 0x00}}, { 17224 ,{0x00, 0x00}}, { 17324 ,{0x00, 0x00}}, { 17425 ,{0x00, 0x00}}, { 17526 ,{0x00, 0x00}} }},
   { /* 14 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL,   MIPI_USID_INIT0_Set2 , { { 17124 ,{0x00, 0x00}}, { 17224 ,{0x00, 0x00}}, { 17324 ,{0x00, 0x00}}, { 17425 ,{0x00, 0x00}}, { 17526 ,{0x00, 0x00}} }},
   { /* 15 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL,   MIPI_USID_INIT0_Set2 , { { 17124 ,{0x00, 0x00}}, { 17224 ,{0x00, 0x00}}, { 17324 ,{0x00, 0x00}}, { 17425 ,{0x00, 0x00}}, { 17526 ,{0x00, 0x00}} }},
   { /* 16 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL,   MIPI_USID_INIT0_Set2 , { { 17124 ,{0x00, 0x00}}, { 17224 ,{0x00, 0x00}}, { 17324 ,{0x00, 0x00}}, { 17425 ,{0x00, 0x00}}, { 17526 ,{0x00, 0x00}} }},
   { /* 17 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL,   MIPI_USID_INIT0_Set2 , { { 17124 ,{0x00, 0x00}}, { 17224 ,{0x00, 0x00}}, { 17324 ,{0x00, 0x00}}, { 17425 ,{0x00, 0x00}}, { 17526 ,{0x00, 0x00}} }},
};

const UL1_MIPI_DATA_SUBBAND_TABLE_T UMTS_MIPI_TX_DATA_UMTSBand5_Set2[UL1_MIPI_TX_DATA_NUM] = 
{
   //No.      elm type , port_sel      ,  data_seq  , user id,         { { sub 0 ,addr, data }},{ sub 1 ,addr, data }},{ sub 2 ,addr, data}}, { sub 3, addr, data}}, { sub 4, addr data  } }},   
   { /* 0  */ UL1_MIPI_PA  , UL1_MIPI_PORT0, UL1_REG_W  ,    MIPI_USID_PA0_Set2    , { { 8264 ,{0x00, 0x7A}}, { 8314 ,{0x00, 0x7A}}, { 8365 ,{0x00, 0x7A}}, { 8415 ,{0x00, 0x7A}}, { 8466 ,{0x00, 0x7A}} }},
   { /* 1  */ UL1_MIPI_PA  , UL1_MIPI_PORT0, UL1_REG_W  ,    MIPI_USID_PA0_Set2    , { { 8264 ,{0x00, 0x00}}, { 8314 ,{0x00, 0x00}}, { 8365 ,{0x00, 0x00}}, { 8415 ,{0x00, 0x00}}, { 8466 ,{0x00, 0x00}} }},
   { /* 2  */ UL1_MIPI_PA  , UL1_MIPI_PORT0, UL1_REG_W  ,    MIPI_USID_PA0_Set2    , { { 8264 ,{0x00, 0x00}}, { 8314 ,{0x00, 0x00}}, { 8365 ,{0x00, 0x00}}, { 8415 ,{0x00, 0x00}}, { 8466 ,{0x00, 0x00}} }},
   { /* 3  */ UL1_MIPI_PA  , UL1_MIPI_PORT0, UL1_REG_W  ,    MIPI_USID_PA0_Set2    , { { 8264 ,{0x00, 0x00}}, { 8314 ,{0x00, 0x00}}, { 8365 ,{0x00, 0x00}}, { 8415 ,{0x00, 0x00}}, { 8466 ,{0x00, 0x00}} }},
   { /* 4  */ UL1_MIPI_ASM , UL1_MIPI_PORT1, UL1_REG_W  ,    MIPI_USID_ASM0_Set2   , { { 8264 ,{0x00, 0x75}}, { 8314 ,{0x00, 0x75}}, { 8365 ,{0x00, 0x75}}, { 8415 ,{0x00, 0x75}}, { 8466 ,{0x00, 0x75}} }},
   { /* 5  */ UL1_MIPI_ANT , UL1_MIPI_PORT2, UL1_REG_W  ,    MIPI_USID_ANT0_Set2   , { { 8264 ,{0x00, 0x02}}, { 8314 ,{0x00, 0x02}}, { 8365 ,{0x00, 0x02}}, { 8415 ,{0x00, 0x02}}, { 8466 ,{0x00, 0x02}} }},
   { /* 6  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL , MIPI_USID_INIT0_Set2 , { { 0x0 ,{0x0, 0x0}}, 	{ 0x0 ,{0x0, 0x0}}, 	{ 0x0 ,{0x0, 0x0}}, 	{ 0x0 ,{0x0, 0x0}}, 	  { 0x0 ,{0x0, 0x0}} }},
   { /* 7  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL,   MIPI_USID_INIT0_Set2 , { { 8264 ,{0x00, 0x00}}, { 8314 ,{0x00, 0x00}}, { 8365 ,{0x00, 0x00}}, { 8415 ,{0x00, 0x00}}, { 8466 ,{0x00, 0x00}} }},
   { /* 8  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL,   MIPI_USID_INIT0_Set2 , { { 8264 ,{0x00, 0x00}}, { 8314 ,{0x00, 0x00}}, { 8365 ,{0x00, 0x00}}, { 8415 ,{0x00, 0x00}}, { 8466 ,{0x00, 0x00}} }},
   { /* 9  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL,   MIPI_USID_INIT0_Set2 , { { 8264 ,{0x00, 0x00}}, { 8314 ,{0x00, 0x00}}, { 8365 ,{0x00, 0x00}}, { 8415 ,{0x00, 0x00}}, { 8466 ,{0x00, 0x00}} }},
   { /* 10 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL,   MIPI_USID_INIT0_Set2 , { { 8264 ,{0x00, 0x00}}, { 8314 ,{0x00, 0x00}}, { 8365 ,{0x00, 0x00}}, { 8415 ,{0x00, 0x00}}, { 8466 ,{0x00, 0x00}} }},
   { /* 11 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL,   MIPI_USID_INIT0_Set2 , { { 8264 ,{0x00, 0x00}}, { 8314 ,{0x00, 0x00}}, { 8365 ,{0x00, 0x00}}, { 8415 ,{0x00, 0x00}}, { 8466 ,{0x00, 0x00}} }},
   { /* 12 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL,   MIPI_USID_INIT0_Set2 , { { 8264 ,{0x00, 0x00}}, { 8314 ,{0x00, 0x00}}, { 8365 ,{0x00, 0x00}}, { 8415 ,{0x00, 0x00}}, { 8466 ,{0x00, 0x00}} }},
   { /* 13 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL,   MIPI_USID_INIT0_Set2 , { { 8264 ,{0x00, 0x00}}, { 8314 ,{0x00, 0x00}}, { 8365 ,{0x00, 0x00}}, { 8415 ,{0x00, 0x00}}, { 8466 ,{0x00, 0x00}} }},
   { /* 14 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL,   MIPI_USID_INIT0_Set2 , { { 8264 ,{0x00, 0x00}}, { 8314 ,{0x00, 0x00}}, { 8365 ,{0x00, 0x00}}, { 8415 ,{0x00, 0x00}}, { 8466 ,{0x00, 0x00}} }},
   { /* 15 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL,   MIPI_USID_INIT0_Set2 , { { 8264 ,{0x00, 0x00}}, { 8314 ,{0x00, 0x00}}, { 8365 ,{0x00, 0x00}}, { 8415 ,{0x00, 0x00}}, { 8466 ,{0x00, 0x00}} }},
   { /* 16 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL,   MIPI_USID_INIT0_Set2 , { { 8264 ,{0x00, 0x00}}, { 8314 ,{0x00, 0x00}}, { 8365 ,{0x00, 0x00}}, { 8415 ,{0x00, 0x00}}, { 8466 ,{0x00, 0x00}} }},
   { /* 17 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL,   MIPI_USID_INIT0_Set2 , { { 8264 ,{0x00, 0x00}}, { 8314 ,{0x00, 0x00}}, { 8365 ,{0x00, 0x00}}, { 8415 ,{0x00, 0x00}}, { 8466 ,{0x00, 0x00}} }},
};


const UL1_MIPI_DATA_SUBBAND_TABLE_T UMTS_MIPI_TX_DATA_UMTSBand8_Set2[UL1_MIPI_TX_DATA_NUM] = 
{
   //No.      elm type , port_sel      ,  data_seq  , user id,         { { sub 0 ,addr, data }},{ sub 1 ,addr, data }},{ sub 2 ,addr, data}}, { sub 3, addr, data}}, { sub 4, addr data  } }},   
   { /* 0  */ UL1_MIPI_PA  , UL1_MIPI_PORT0, UL1_REG_W  ,    MIPI_USID_PA0_Set2    , { { 8824 ,{0x00, 0x7A}}, { 8899 ,{0x00, 0x7A}}, { 8975 ,{0x00, 0x7A}}, { 9050 ,{0x00, 0x7A}}, { 9126 ,{0x00, 0x7A}} }},
   { /* 1  */ UL1_MIPI_PA  , UL1_MIPI_PORT0, UL1_REG_W  ,    MIPI_USID_PA0_Set2    , { { 8824 ,{0x00, 0x00}}, { 8899 ,{0x00, 0x00}}, { 8975 ,{0x00, 0x00}}, { 9050 ,{0x00, 0x00}}, { 9126 ,{0x00, 0x00}} }},
   { /* 2  */ UL1_MIPI_PA  , UL1_MIPI_PORT0, UL1_REG_W  ,    MIPI_USID_PA0_Set2    , { { 8824 ,{0x00, 0x00}}, { 8899 ,{0x00, 0x00}}, { 8975 ,{0x00, 0x00}}, { 9050 ,{0x00, 0x00}}, { 9126 ,{0x00, 0x00}} }},
   { /* 3  */ UL1_MIPI_PA  , UL1_MIPI_PORT0, UL1_REG_W  ,    MIPI_USID_PA0_Set2    , { { 8824 ,{0x00, 0x00}}, { 8899 ,{0x00, 0x00}}, { 8975 ,{0x00, 0x00}}, { 9050 ,{0x00, 0x00}}, { 9126 ,{0x00, 0x00}} }},
   { /* 4  */ UL1_MIPI_ASM , UL1_MIPI_PORT1, UL1_REG_W  ,    MIPI_USID_ASM0_Set2   , { { 8824 ,{0x00, 0x6D}}, { 8899 ,{0x00, 0x6D}}, { 8975 ,{0x00, 0x6D}}, { 9050 ,{0x00, 0x6D}}, { 9126 ,{0x00, 0x6D}} }},
   { /* 5  */ UL1_MIPI_ANT , UL1_MIPI_PORT2, UL1_REG_W  ,    MIPI_USID_ANT0_Set2   , { { 8824 ,{0x00, 0x01}}, { 8899 ,{0x00, 0x01}}, { 8975 ,{0x00, 0x01}}, { 9050 ,{0x00, 0x01}}, { 9126 ,{0x00, 0x01}} }},
   { /* 6  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL,  UL1_SEQ_NULL , MIPI_USID_INIT0_Set2 , { { 0x0 ,{0x0, 0x0}}, 	{ 0x0 ,{0x0, 0x0}}, 	{ 0x0 ,{0x0, 0x0}}, 	{ 0x0 ,{0x0, 0x0}}, 	  { 0x0 ,{0x0, 0x0}} }},
   { /* 7  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL,   MIPI_USID_INIT0_Set2 , { { 8824 ,{0x00, 0x00}}, { 8899 ,{0x00, 0x00}}, { 8975 ,{0x00, 0x00}}, { 9050 ,{0x00, 0x00}}, { 9126 ,{0x00, 0x00}} }},
   { /* 8  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL,   MIPI_USID_INIT0_Set2 , { { 8824 ,{0x00, 0x00}}, { 8899 ,{0x00, 0x00}}, { 8975 ,{0x00, 0x00}}, { 9050 ,{0x00, 0x00}}, { 9126 ,{0x00, 0x00}} }},
   { /* 9  */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL,   MIPI_USID_INIT0_Set2 , { { 8824 ,{0x00, 0x00}}, { 8899 ,{0x00, 0x00}}, { 8975 ,{0x00, 0x00}}, { 9050 ,{0x00, 0x00}}, { 9126 ,{0x00, 0x00}} }},
   { /* 10 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL,   MIPI_USID_INIT0_Set2 , { { 8824 ,{0x00, 0x00}}, { 8899 ,{0x00, 0x00}}, { 8975 ,{0x00, 0x00}}, { 9050 ,{0x00, 0x00}}, { 9126 ,{0x00, 0x00}} }},
   { /* 11 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL,   MIPI_USID_INIT0_Set2 , { { 8824 ,{0x00, 0x00}}, { 8899 ,{0x00, 0x00}}, { 8975 ,{0x00, 0x00}}, { 9050 ,{0x00, 0x00}}, { 9126 ,{0x00, 0x00}} }},
   { /* 12 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL,   MIPI_USID_INIT0_Set2 , { { 8824 ,{0x00, 0x00}}, { 8899 ,{0x00, 0x00}}, { 8975 ,{0x00, 0x00}}, { 9050 ,{0x00, 0x00}}, { 9126 ,{0x00, 0x00}} }},
   { /* 13 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL,   MIPI_USID_INIT0_Set2 , { { 8824 ,{0x00, 0x00}}, { 8899 ,{0x00, 0x00}}, { 8975 ,{0x00, 0x00}}, { 9050 ,{0x00, 0x00}}, { 9126 ,{0x00, 0x00}} }},
   { /* 14 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL,   MIPI_USID_INIT0_Set2 , { { 8824 ,{0x00, 0x00}}, { 8899 ,{0x00, 0x00}}, { 8975 ,{0x00, 0x00}}, { 9050 ,{0x00, 0x00}}, { 9126 ,{0x00, 0x00}} }},
   { /* 15 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL,   MIPI_USID_INIT0_Set2 , { { 8824 ,{0x00, 0x00}}, { 8899 ,{0x00, 0x00}}, { 8975 ,{0x00, 0x00}}, { 9050 ,{0x00, 0x00}}, { 9126 ,{0x00, 0x00}} }},
   { /* 16 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL,   MIPI_USID_INIT0_Set2 , { { 8824 ,{0x00, 0x00}}, { 8899 ,{0x00, 0x00}}, { 8975 ,{0x00, 0x00}}, { 9050 ,{0x00, 0x00}}, { 9126 ,{0x00, 0x00}} }},
   { /* 17 */ UL1_MIPI_NULL, UL1_MIPI_DATA_NULL, UL1_SEQ_NULL,   MIPI_USID_INIT0_Set2 , { { 8824 ,{0x00, 0x00}}, { 8899 ,{0x00, 0x00}}, { 8975 ,{0x00, 0x00}}, { 9050 ,{0x00, 0x00}}, { 9126 ,{0x00, 0x00}} }},
};

const UL1_MIPI_DATA_SUBBAND_TABLE_T UMTS_MIPI_TX_DATA_UMTSBand3_Set2[]  = {{0}};
const UL1_MIPI_DATA_SUBBAND_TABLE_T UMTS_MIPI_TX_DATA_UMTSBand6_Set2[]  = {{0}};
const UL1_MIPI_DATA_SUBBAND_TABLE_T UMTS_MIPI_TX_DATA_UMTSBand9_Set2[]  = {{0}};
const UL1_MIPI_DATA_SUBBAND_TABLE_T UMTS_MIPI_TX_DATA_UMTSBand11_Set2[] = {{0}};
const UL1_MIPI_DATA_SUBBAND_TABLE_T UMTS_MIPI_TX_DATA_UMTSBand19_Set2[] = {{0}};

const UL1_MIPI_DATA_SUBBAND_TABLE_T* const UMTS_MIPI_TX_DATA_TABLE_Set2[] = 
{
   M_UMTS_TX_DATA(UMTSBandNone,Set2),                     /*UMTSUMTSBandNone*/
   M_UMTS_TX_DATA(RX_BAND_INDICATOR_0_Set2,Set2),   /*RX_BAND_INDICATOR_0_Set2*/
   M_UMTS_TX_DATA(RX_BAND_INDICATOR_1_Set2,Set2),   /*RX_BAND_INDICATOR_1_Set2*/
   M_UMTS_TX_DATA(RX_BAND_INDICATOR_2_Set2,Set2),   /*RX_BAND_INDICATOR_2_Set2*/
   M_UMTS_TX_DATA(RX_BAND_INDICATOR_3_Set2,Set2),   /*RX_BAND_INDICATOR_3_Set2*/
   M_UMTS_TX_DATA(RX_BAND_INDICATOR_4_Set2,Set2),   /*RX_BAND_INDICATOR_4_Set2*/
};

const UL1_UMTS_MIPI_TPC_T UMTS_MIPI_TPC_UMTSBandNone_Set2 = {{{0}}};

const UL1_UMTS_MIPI_TPC_T UMTS_MIPI_TPC_UMTSBand1_Set2 = 
{
   /* Event */
  {
   /* No.           elm type , data idx       , evt_type       , evt_offset     */
   /*                           { start, stop },                  ( us )         */
    { /* 0, Prf_7  */ UL1_MIPI_PA, { 0    , 2     }, UL1_MIPI_TPC_SET   , US2CHIPCNT(20)  },  /*highest power*/
    { /* 1, Prf_6  */ UL1_MIPI_PA, { 3    , 5     }, UL1_MIPI_TPC_SET   , US2CHIPCNT(20)  },
    { /* 2, Prf_5  */ UL1_MIPI_PA, { 6    , 8     }, UL1_MIPI_TPC_SET   , US2CHIPCNT(20)  },
    { /* 3, Prf_4  */ UL1_MIPI_PA, { 9    , 11    }, UL1_MIPI_TPC_SET   , US2CHIPCNT(20)  },
    { /* 4, Prf_3  */ UL1_MIPI_PA, { 12   , 14    }, UL1_MIPI_TPC_SET   , US2CHIPCNT(20)  },
    { /* 5, Prf_2  */ UL1_MIPI_PA, { 15   , 17    }, UL1_MIPI_TPC_SET   , US2CHIPCNT(20)  },
    { /* 6, Prf_1  */ UL1_MIPI_PA, { 18   , 20    }, UL1_MIPI_TPC_SET   , US2CHIPCNT(20)  },
    { /* 7, Prf_0  */ UL1_MIPI_PA, { 21   , 23    }, UL1_MIPI_TPC_SET   , US2CHIPCNT(20)  },  /*lowest power*/
  },

  /* Data */
  {
   //elm type  , port_sel       , data_seq, user id,         {{sub 0, addr, data}}, {{sub 1, addr, data}}, {{sub 2, addr, data} , {{sub 3, addr, data}}, {{sub 4, addr, data}
    {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{19224, {0x00, 0x40}}, {19362, {0x00, 0x40}}, {19500, {0x00, 0x40}}, {19638, {0x00, 0x40}}, {19776, {0x00, 0x40}}}},  /*L7, TPC IDX 0*/
    {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{19224, {0x01, 0x2F}}, {19362, {0x01, 0x2F}}, {19500, {0x01, 0x2F}}, {19638, {0x01, 0x2F}}, {19776, {0x01, 0x2F}}}},
    {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{19224, {0x03, 0x00}}, {19362, {0x03, 0x00}}, {19500, {0x03, 0x00}}, {19638, {0x03, 0x00}}, {19776, {0x03, 0x00}}}},
    {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{19224, {0x00, 0x40}}, {19362, {0x00, 0x40}}, {19500, {0x00, 0x40}}, {19638, {0x00, 0x40}}, {19776, {0x00, 0x40}}}},  /*L6, TPC IDX 2*/
    {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{19224, {0x01, 0x2B}}, {19362, {0x01, 0x2B}}, {19500, {0x01, 0x2B}}, {19638, {0x01, 0x2B}}, {19776, {0x01, 0x2B}}}}, 
    {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{19224, {0x03, 0x00}}, {19362, {0x03, 0x00}}, {19500, {0x03, 0x00}}, {19638, {0x03, 0x00}}, {19776, {0x03, 0x00}}}},
    {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{19224, {0x00, 0x40}}, {19362, {0x00, 0x40}}, {19500, {0x00, 0x40}}, {19638, {0x00, 0x40}}, {19776, {0x00, 0x40}}}},  /*L5, TPC IDX 4*/
    {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{19224, {0x01, 0x2B}}, {19362, {0x01, 0x2B}}, {19500, {0x01, 0x2B}}, {19638, {0x01, 0x2B}}, {19776, {0x01, 0x2B}}}},
    {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{19224, {0x03, 0x00}}, {19362, {0x03, 0x00}}, {19500, {0x03, 0x00}}, {19638, {0x03, 0x00}}, {19776, {0x03, 0x00}}}}, 
    {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{19224, {0x00, 0x40}}, {19362, {0x00, 0x40}}, {19500, {0x00, 0x40}}, {19638, {0x00, 0x40}}, {19776, {0x00, 0x40}}}},  /*L4, TPC IDX 6*/
    {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{19224, {0x01, 0x47}}, {19362, {0x01, 0x47}}, {19500, {0x01, 0x47}}, {19638, {0x01, 0x47}}, {19776, {0x01, 0x47}}}},
    {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{19224, {0x03, 0x00}}, {19362, {0x03, 0x00}}, {19500, {0x03, 0x00}}, {19638, {0x03, 0x00}}, {19776, {0x03, 0x00}}}},
    {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{19224, {0x00, 0x40}}, {19362, {0x00, 0x40}}, {19500, {0x00, 0x40}}, {19638, {0x00, 0x40}}, {19776, {0x00, 0x40}}}},  /*L3, TPC IDX 9*/
    {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{19224, {0x01, 0x27}}, {19362, {0x01, 0x27}}, {19500, {0x01, 0x27}}, {19638, {0x01, 0x27}}, {19776, {0x01, 0x27}}}},
    {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{19224, {0x03, 0x00}}, {19362, {0x03, 0x00}}, {19500, {0x03, 0x00}}, {19638, {0x03, 0x00}}, {19776, {0x03, 0x00}}}},
    {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{19224, {0x00, 0x40}}, {19362, {0x00, 0x40}}, {19500, {0x00, 0x40}}, {19638, {0x00, 0x40}}, {19776, {0x00, 0x40}}}},  /*L2, TPC IDX 15, Hyst1*/
    {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{19224, {0x01, 0x3F}}, {19362, {0x01, 0x3F}}, {19500, {0x01, 0x3F}}, {19638, {0x01, 0x3F}}, {19776, {0x01, 0x3F}}}},
    {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{19224, {0x03, 0x00}}, {19362, {0x03, 0x00}}, {19500, {0x03, 0x00}}, {19638, {0x03, 0x00}}, {19776, {0x03, 0x00}}}},
    {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{19224, {0x00, 0x40}}, {19362, {0x00, 0x40}}, {19500, {0x00, 0x40}}, {19638, {0x00, 0x40}}, {19776, {0x00, 0x40}}}},  /*L1, TPC IDX 18*/
    {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{19224, {0x01, 0x3F}}, {19362, {0x01, 0x3F}}, {19500, {0x01, 0x3F}}, {19638, {0x01, 0x3F}}, {19776, {0x01, 0x3F}}}},
    {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{19224, {0x03, 0x00}}, {19362, {0x03, 0x00}}, {19500, {0x03, 0x00}}, {19638, {0x03, 0x00}}, {19776, {0x03, 0x00}}}},
    {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{19224, {0x00, 0x42}}, {19362, {0x00, 0x42}}, {19500, {0x00, 0x42}}, {19638, {0x00, 0x42}}, {19776, {0x00, 0x42}}}},  /*L0, TPC IDX 25, Hyst2*/
    {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{19224, {0x01, 0x47}}, {19362, {0x01, 0x47}}, {19500, {0x01, 0x47}}, {19638, {0x01, 0x47}}, {19776, {0x01, 0x47}}}},
    {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{19224, {0x03, 0x00}}, {19362, {0x03, 0x00}}, {19500, {0x03, 0x00}}, {19638, {0x03, 0x00}}, {19776, {0x03, 0x00}}}},
    {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL, MIPI_USID_INIT0_Set2, {{19224, {0x00, 0x00}}, {19362, {0x00, 0x00}}, {19500, {0x00, 0x00}}, {19638, {0x00, 0x00}}, {19776, {0x00, 0x00}}}},
    {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL, MIPI_USID_INIT0_Set2, {{19224, {0x00, 0x00}}, {19362, {0x00, 0x00}}, {19500, {0x00, 0x00}}, {19638, {0x00, 0x00}}, {19776, {0x00, 0x00}}}},
    {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL, MIPI_USID_INIT0_Set2, {{19224, {0x00, 0x00}}, {19362, {0x00, 0x00}}, {19500, {0x00, 0x00}}, {19638, {0x00, 0x00}}, {19776, {0x00, 0x00}}}},
    {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL, MIPI_USID_INIT0_Set2, {{19224, {0x00, 0x00}}, {19362, {0x00, 0x00}}, {19500, {0x00, 0x00}}, {19638, {0x00, 0x00}}, {19776, {0x00, 0x00}}}},
    {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL, MIPI_USID_INIT0_Set2, {{19224, {0x00, 0x00}}, {19362, {0x00, 0x00}}, {19500, {0x00, 0x00}}, {19638, {0x00, 0x00}}, {19776, {0x00, 0x00}}}},
    {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL, MIPI_USID_INIT0_Set2, {{19224, {0x00, 0x00}}, {19362, {0x00, 0x00}}, {19500, {0x00, 0x00}}, {19638, {0x00, 0x00}}, {19776, {0x00, 0x00}}}},
    {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL, MIPI_USID_INIT0_Set2, {{19224, {0x00, 0x00}}, {19362, {0x00, 0x00}}, {19500, {0x00, 0x00}}, {19638, {0x00, 0x00}}, {19776, {0x00, 0x00}}}},
    {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL, MIPI_USID_INIT0_Set2, {{19224, {0x00, 0x00}}, {19362, {0x00, 0x00}}, {19500, {0x00, 0x00}}, {19638, {0x00, 0x00}}, {19776, {0x00, 0x00}}}},
    {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL, MIPI_USID_INIT0_Set2, {{19224, {0x00, 0x00}}, {19362, {0x00, 0x00}}, {19500, {0x00, 0x00}}, {19638, {0x00, 0x00}}, {19776, {0x00, 0x00}}}},
    {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL, MIPI_USID_INIT0_Set2, {{19224, {0x00, 0x00}}, {19362, {0x00, 0x00}}, {19500, {0x00, 0x00}}, {19638, {0x00, 0x00}}, {19776, {0x00, 0x00}}}},
    {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL, MIPI_USID_INIT0_Set2, {{19224, {0x00, 0x00}}, {19362, {0x00, 0x00}}, {19500, {0x00, 0x00}}, {19638, {0x00, 0x00}}, {19776, {0x00, 0x00}}}},
    {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL, MIPI_USID_INIT0_Set2, {{19224, {0x00, 0x00}}, {19362, {0x00, 0x00}}, {19500, {0x00, 0x00}}, {19638, {0x00, 0x00}}, {19776, {0x00, 0x00}}}},
    {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL, MIPI_USID_INIT0_Set2, {{19224, {0x00, 0x00}}, {19362, {0x00, 0x00}}, {19500, {0x00, 0x00}}, {19638, {0x00, 0x00}}, {19776, {0x00, 0x00}}}},
    {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL, MIPI_USID_INIT0_Set2, {{19224, {0x00, 0x00}}, {19362, {0x00, 0x00}}, {19500, {0x00, 0x00}}, {19638, {0x00, 0x00}}, {19776, {0x00, 0x00}}}},
    {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL, MIPI_USID_INIT0_Set2, {{19224, {0x00, 0x00}}, {19362, {0x00, 0x00}}, {19500, {0x00, 0x00}}, {19638, {0x00, 0x00}}, {19776, {0x00, 0x00}}}},
    {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL, MIPI_USID_INIT0_Set2, {{19224, {0x00, 0x00}}, {19362, {0x00, 0x00}}, {19500, {0x00, 0x00}}, {19638, {0x00, 0x00}}, {19776, {0x00, 0x00}}}} 
  }
};


const UL1_UMTS_MIPI_TPC_T UMTS_MIPI_TPC_UMTSBand2_Set2 = 
{
   /* Event */
   {
    /* No.           elm type , data idx       , evt_type       , evt_offset     */
    /*                           { start, stop },                  ( us )         */
     { /* 0, Prf_7  */ UL1_MIPI_PA, { 0    , 2     }, UL1_MIPI_TPC_SET   , US2CHIPCNT(20)  },  /*highest power*/
     { /* 1, Prf_6  */ UL1_MIPI_PA, { 3    , 5     }, UL1_MIPI_TPC_SET   , US2CHIPCNT(20)  },
     { /* 2, Prf_5  */ UL1_MIPI_PA, { 6    , 8     }, UL1_MIPI_TPC_SET   , US2CHIPCNT(20)  },
     { /* 3, Prf_4  */ UL1_MIPI_PA, { 9    , 11    }, UL1_MIPI_TPC_SET   , US2CHIPCNT(20)  },
     { /* 4, Prf_3  */ UL1_MIPI_PA, { 12   , 14    }, UL1_MIPI_TPC_SET   , US2CHIPCNT(20)  },
     { /* 5, Prf_2  */ UL1_MIPI_PA, { 15   , 17    }, UL1_MIPI_TPC_SET   , US2CHIPCNT(20)  },
     { /* 6, Prf_1  */ UL1_MIPI_PA, { 18   , 20    }, UL1_MIPI_TPC_SET   , US2CHIPCNT(20)  },
     { /* 7, Prf_0  */ UL1_MIPI_PA, { 21   , 23    }, UL1_MIPI_TPC_SET   , US2CHIPCNT(20)  },  /*lowest power*/
   },
   
   /* Data */
   {
      //elm type  , port_sel     , data_seq, user id,         {{sub 0, addr, data}}, {{sub 1, addr, data}}, {{sub 2, addr, data} , {{sub 3, addr, data}}, {{sub 4, addr, data}     
     {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{18524, {0x00, 0x30}}, {18662, {0x00, 0x30}}, {18800, {0x00, 0x30}}, {18938, {0x00, 0x30}}, {19076, {0x00, 0x30}} }},  /*L7, TPC IDX 0*/        
     {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{18524, {0x01, 0x2F}}, {18662, {0x01, 0x2F}}, {18800, {0x01, 0x2F}}, {18938, {0x01, 0x2F}}, {19076, {0x01, 0x2F}} }},                           
     {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{18524, {0x03, 0x00}}, {18662, {0x03, 0x00}}, {18800, {0x03, 0x00}}, {18938, {0x03, 0x00}}, {19076, {0x03, 0x00}} }},                           
     {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{18524, {0x00, 0x30}}, {18662, {0x00, 0x30}}, {18800, {0x00, 0x30}}, {18938, {0x00, 0x30}}, {19076, {0x00, 0x30}} }},  /*L6, TPC IDX 2*/        
     {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{18524, {0x01, 0x2F}}, {18662, {0x01, 0x2F}}, {18800, {0x01, 0x2F}}, {18938, {0x01, 0x2F}}, {19076, {0x01, 0x2F}} }},                           
     {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{18524, {0x03, 0x00}}, {18662, {0x03, 0x00}}, {18800, {0x03, 0x00}}, {18938, {0x03, 0x00}}, {19076, {0x03, 0x00}} }},                           
     {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{18524, {0x00, 0x30}}, {18662, {0x00, 0x30}}, {18800, {0x00, 0x30}}, {18938, {0x00, 0x30}}, {19076, {0x00, 0x30}} }},  /*L5, TPC IDX 4*/        
     {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{18524, {0x01, 0x2B}}, {18662, {0x01, 0x2B}}, {18800, {0x01, 0x2B}}, {18938, {0x01, 0x2B}}, {19076, {0x01, 0x2B}} }},                           
     {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{18524, {0x03, 0x00}}, {18662, {0x03, 0x00}}, {18800, {0x03, 0x00}}, {18938, {0x03, 0x00}}, {19076, {0x03, 0x00}} }},                           
     {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{18524, {0x00, 0x30}}, {18662, {0x00, 0x30}}, {18800, {0x00, 0x30}}, {18938, {0x00, 0x30}}, {19076, {0x00, 0x30}} }},  /*L4, TPC IDX 6*/        
     {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{18524, {0x01, 0x2B}}, {18662, {0x01, 0x2B}}, {18800, {0x01, 0x2B}}, {18938, {0x01, 0x2B}}, {19076, {0x01, 0x2B}} }},                           
     {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{18524, {0x03, 0x00}}, {18662, {0x03, 0x00}}, {18800, {0x03, 0x00}}, {18938, {0x03, 0x00}}, {19076, {0x03, 0x00}} }},                           
     {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{18524, {0x00, 0x30}}, {18662, {0x00, 0x30}}, {18800, {0x00, 0x30}}, {18938, {0x00, 0x30}}, {19076, {0x00, 0x30}} }},  /*L3, TPC IDX 9*/        
     {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{18524, {0x01, 0x2B}}, {18662, {0x01, 0x2B}}, {18800, {0x01, 0x2B}}, {18938, {0x01, 0x2B}}, {19076, {0x01, 0x2B}} }},                           
     {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{18524, {0x03, 0x00}}, {18662, {0x03, 0x00}}, {18800, {0x03, 0x00}}, {18938, {0x03, 0x00}}, {19076, {0x03, 0x00}} }},                           
     {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{18524, {0x00, 0x30}}, {18662, {0x00, 0x30}}, {18800, {0x00, 0x30}}, {18938, {0x00, 0x30}}, {19076, {0x00, 0x30}} }},  /*L2, TPC IDX 15, Hyst1*/
     {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{18524, {0x01, 0x3F}}, {18662, {0x01, 0x3F}}, {18800, {0x01, 0x3F}}, {18938, {0x01, 0x3F}}, {19076, {0x01, 0x3F}} }},                           
     {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{18524, {0x03, 0x00}}, {18662, {0x03, 0x00}}, {18800, {0x03, 0x00}}, {18938, {0x03, 0x00}}, {19076, {0x03, 0x00}} }},                           
     {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{18524, {0x00, 0x30}}, {18662, {0x00, 0x30}}, {18800, {0x00, 0x30}}, {18938, {0x00, 0x30}}, {19076, {0x00, 0x30}} }},  /*L1, TPC IDX 18*/       
     {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{18524, {0x01, 0x2F}}, {18662, {0x01, 0x2F}}, {18800, {0x01, 0x2F}}, {18938, {0x01, 0x2F}}, {19076, {0x01, 0x2F}} }},                           
     {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{18524, {0x03, 0x00}}, {18662, {0x03, 0x00}}, {18800, {0x03, 0x00}}, {18938, {0x03, 0x00}}, {19076, {0x03, 0x00}} }},                           
     {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{18524, {0x00, 0x32}}, {18662, {0x00, 0x32}}, {18800, {0x00, 0x32}}, {18938, {0x00, 0x32}}, {19076, {0x00, 0x32}} }},  /*L0, TPC IDX 25, Hyst2*/
     {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{18524, {0x01, 0x2F}}, {18662, {0x01, 0x2F}}, {18800, {0x01, 0x2F}}, {18938, {0x01, 0x2F}}, {19076, {0x01, 0x2F}} }},                           
     {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{18524, {0x03, 0x00}}, {18662, {0x03, 0x00}}, {18800, {0x03, 0x00}}, {18938, {0x03, 0x00}}, {19076, {0x03, 0x00}} }},   
     {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL, MIPI_USID_INIT0_Set2, {{18524, {0x00, 0x00}}, {18662, {0x00, 0x00}}, {18800, {0x00, 0x00}}, {18938, {0x00, 0x00}}, {19076, {0x00, 0x00}} }},
     {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL, MIPI_USID_INIT0_Set2, {{18524, {0x00, 0x00}}, {18662, {0x00, 0x00}}, {18800, {0x00, 0x00}}, {18938, {0x00, 0x00}}, {19076, {0x00, 0x00}} }},
     {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL, MIPI_USID_INIT0_Set2, {{18524, {0x00, 0x00}}, {18662, {0x00, 0x00}}, {18800, {0x00, 0x00}}, {18938, {0x00, 0x00}}, {19076, {0x00, 0x00}} }},
     {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL, MIPI_USID_INIT0_Set2, {{18524, {0x00, 0x00}}, {18662, {0x00, 0x00}}, {18800, {0x00, 0x00}}, {18938, {0x00, 0x00}}, {19076, {0x00, 0x00}} }},
     {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL, MIPI_USID_INIT0_Set2, {{18524, {0x00, 0x00}}, {18662, {0x00, 0x00}}, {18800, {0x00, 0x00}}, {18938, {0x00, 0x00}}, {19076, {0x00, 0x00}} }},
     {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL, MIPI_USID_INIT0_Set2, {{18524, {0x00, 0x00}}, {18662, {0x00, 0x00}}, {18800, {0x00, 0x00}}, {18938, {0x00, 0x00}}, {19076, {0x00, 0x00}} }},
     {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL, MIPI_USID_INIT0_Set2, {{18524, {0x00, 0x00}}, {18662, {0x00, 0x00}}, {18800, {0x00, 0x00}}, {18938, {0x00, 0x00}}, {19076, {0x00, 0x00}} }},
     {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL, MIPI_USID_INIT0_Set2, {{18524, {0x00, 0x00}}, {18662, {0x00, 0x00}}, {18800, {0x00, 0x00}}, {18938, {0x00, 0x00}}, {19076, {0x00, 0x00}} }},
     {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL, MIPI_USID_INIT0_Set2, {{18524, {0x00, 0x00}}, {18662, {0x00, 0x00}}, {18800, {0x00, 0x00}}, {18938, {0x00, 0x00}}, {19076, {0x00, 0x00}} }},
     {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL, MIPI_USID_INIT0_Set2, {{18524, {0x00, 0x00}}, {18662, {0x00, 0x00}}, {18800, {0x00, 0x00}}, {18938, {0x00, 0x00}}, {19076, {0x00, 0x00}} }},
     {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL, MIPI_USID_INIT0_Set2, {{18524, {0x00, 0x00}}, {18662, {0x00, 0x00}}, {18800, {0x00, 0x00}}, {18938, {0x00, 0x00}}, {19076, {0x00, 0x00}} }},
     {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL, MIPI_USID_INIT0_Set2, {{18524, {0x00, 0x00}}, {18662, {0x00, 0x00}}, {18800, {0x00, 0x00}}, {18938, {0x00, 0x00}}, {19076, {0x00, 0x00}} }},
     {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL, MIPI_USID_INIT0_Set2, {{18524, {0x00, 0x00}}, {18662, {0x00, 0x00}}, {18800, {0x00, 0x00}}, {18938, {0x00, 0x00}}, {19076, {0x00, 0x00}} }},
     {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL, MIPI_USID_INIT0_Set2, {{18524, {0x00, 0x00}}, {18662, {0x00, 0x00}}, {18800, {0x00, 0x00}}, {18938, {0x00, 0x00}}, {19076, {0x00, 0x00}} }},
     {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL, MIPI_USID_INIT0_Set2, {{18524, {0x00, 0x00}}, {18662, {0x00, 0x00}}, {18800, {0x00, 0x00}}, {18938, {0x00, 0x00}}, {19076, {0x00, 0x00}} }},
     {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL, MIPI_USID_INIT0_Set2, {{18524, {0x00, 0x00}}, {18662, {0x00, 0x00}}, {18800, {0x00, 0x00}}, {18938, {0x00, 0x00}}, {19076, {0x00, 0x00}} }}
   }
};

const UL1_UMTS_MIPI_TPC_T UMTS_MIPI_TPC_UMTSBand4_Set2 = 
{
   /* Event */
   {
    /* No.           elm type , data idx       , evt_type       , evt_offset     */
    /*                           { start, stop },                  ( us )         */
     { /* 0, Prf_7  */ UL1_MIPI_PA, { 0    , 2     }, UL1_MIPI_TPC_SET   , US2CHIPCNT(20)  },  /*highest power*/
     { /* 1, Prf_6  */ UL1_MIPI_PA, { 3    , 5     }, UL1_MIPI_TPC_SET   , US2CHIPCNT(20)  },
     { /* 2, Prf_5  */ UL1_MIPI_PA, { 6    , 8     }, UL1_MIPI_TPC_SET   , US2CHIPCNT(20)  },
     { /* 3, Prf_4  */ UL1_MIPI_PA, { 9    , 11    }, UL1_MIPI_TPC_SET   , US2CHIPCNT(20)  },
     { /* 4, Prf_3  */ UL1_MIPI_PA, { 12   , 14    }, UL1_MIPI_TPC_SET   , US2CHIPCNT(20)  },
     { /* 5, Prf_2  */ UL1_MIPI_PA, { 15   , 17    }, UL1_MIPI_TPC_SET   , US2CHIPCNT(20)  },
     { /* 6, Prf_1  */ UL1_MIPI_PA, { 18   , 20    }, UL1_MIPI_TPC_SET   , US2CHIPCNT(20)  },
     { /* 7, Prf_0  */ UL1_MIPI_PA, { 21   , 23    }, UL1_MIPI_TPC_SET   , US2CHIPCNT(20)  },  /*lowest power*/
   },
   
   /* Data */
   {                                                                                                                                                                               
      //elm type  , port_sel     , data_seq, user id,         {{sub 0, addr, data}}, {{sub 1, addr, data}}, {{sub 2, addr, data} , {{sub 3, addr, data}}, {{sub 4, addr, data}     
     {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{17124, {0x00, 0x48}}, {17224, {0x00, 0x48}}, {17324, {0x00, 0x48}}, {17425, {0x00, 0x48}}, {17526, {0x00, 0x48}} }},  /*L7, TPC IDX 0*/        
     {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{17124, {0x01, 0x4F}}, {17224, {0x01, 0x4F}}, {17324, {0x01, 0x4F}}, {17425, {0x01, 0x4F}}, {17526, {0x01, 0x4F}} }},                           
     {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{17124, {0x03, 0x00}}, {17224, {0x03, 0x00}}, {17324, {0x03, 0x00}}, {17425, {0x03, 0x00}}, {17526, {0x03, 0x00}} }},                           
     {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{17124, {0x00, 0x48}}, {17224, {0x00, 0x48}}, {17324, {0x00, 0x48}}, {17425, {0x00, 0x48}}, {17526, {0x00, 0x48}} }},  /*L6, TPC IDX 2*/        
     {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{17124, {0x01, 0x4F}}, {17224, {0x01, 0x4F}}, {17324, {0x01, 0x4F}}, {17425, {0x01, 0x4F}}, {17526, {0x01, 0x4F}} }},                           
     {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{17124, {0x03, 0x00}}, {17224, {0x03, 0x00}}, {17324, {0x03, 0x00}}, {17425, {0x03, 0x00}}, {17526, {0x03, 0x00}} }},                           
     {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{17124, {0x00, 0x48}}, {17224, {0x00, 0x48}}, {17324, {0x00, 0x48}}, {17425, {0x00, 0x48}}, {17526, {0x00, 0x48}} }},  /*L5, TPC IDX 4*/        
     {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{17124, {0x01, 0x4F}}, {17224, {0x01, 0x4F}}, {17324, {0x01, 0x4F}}, {17425, {0x01, 0x4F}}, {17526, {0x01, 0x4F}} }},                           
     {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{17124, {0x03, 0x00}}, {17224, {0x03, 0x00}}, {17324, {0x03, 0x00}}, {17425, {0x03, 0x00}}, {17526, {0x03, 0x00}} }},                           
     {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{17124, {0x00, 0x48}}, {17224, {0x00, 0x48}}, {17324, {0x00, 0x48}}, {17425, {0x00, 0x48}}, {17526, {0x00, 0x48}} }},  /*L4, TPC IDX 6*/        
     {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{17124, {0x01, 0x4B}}, {17224, {0x01, 0x4B}}, {17324, {0x01, 0x4B}}, {17425, {0x01, 0x4B}}, {17526, {0x01, 0x4B}} }},                           
     {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{17124, {0x03, 0x00}}, {17224, {0x03, 0x00}}, {17324, {0x03, 0x00}}, {17425, {0x03, 0x00}}, {17526, {0x03, 0x00}} }},                           
     {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{17124, {0x00, 0x48}}, {17224, {0x00, 0x48}}, {17324, {0x00, 0x48}}, {17425, {0x00, 0x48}}, {17526, {0x00, 0x48}} }},  /*L3, TPC IDX 9*/        
     {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{17124, {0x01, 0x4B}}, {17224, {0x01, 0x4B}}, {17324, {0x01, 0x4B}}, {17425, {0x01, 0x4B}}, {17526, {0x01, 0x4B}} }},                           
     {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{17124, {0x03, 0x00}}, {17224, {0x03, 0x00}}, {17324, {0x03, 0x00}}, {17425, {0x03, 0x00}}, {17526, {0x03, 0x00}} }},                           
     {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{17124, {0x00, 0x48}}, {17224, {0x00, 0x48}}, {17324, {0x00, 0x48}}, {17425, {0x00, 0x48}}, {17526, {0x00, 0x48}} }},  /*L2, TPC IDX 15, Hyst1*/
     {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{17124, {0x01, 0x4B}}, {17224, {0x01, 0x4B}}, {17324, {0x01, 0x4B}}, {17425, {0x01, 0x4B}}, {17526, {0x01, 0x4B}} }},                           
     {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{17124, {0x03, 0x00}}, {17224, {0x03, 0x00}}, {17324, {0x03, 0x00}}, {17425, {0x03, 0x00}}, {17526, {0x03, 0x00}} }},                           
     {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{17124, {0x00, 0x48}}, {17224, {0x00, 0x48}}, {17324, {0x00, 0x48}}, {17425, {0x00, 0x48}}, {17526, {0x00, 0x48}} }},  /*L1, TPC IDX 18*/       
     {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{17124, {0x01, 0x6B}}, {17224, {0x01, 0x6B}}, {17324, {0x01, 0x6B}}, {17425, {0x01, 0x6B}}, {17526, {0x01, 0x6B}} }},                           
     {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{17124, {0x03, 0x00}}, {17224, {0x03, 0x00}}, {17324, {0x03, 0x00}}, {17425, {0x03, 0x00}}, {17526, {0x03, 0x00}} }},                           
     {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{17124, {0x00, 0x4A}}, {17224, {0x00, 0x4A}}, {17324, {0x00, 0x4A}}, {17425, {0x00, 0x4A}}, {17526, {0x00, 0x4A}} }},  /*L0, TPC IDX 25, Hyst2*/
     {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{17124, {0x01, 0x2F}}, {17224, {0x01, 0x2F}}, {17324, {0x01, 0x2F}}, {17425, {0x01, 0x2F}}, {17526, {0x01, 0x2F}} }},                           
     {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{17124, {0x03, 0x00}}, {17224, {0x03, 0x00}}, {17324, {0x03, 0x00}}, {17425, {0x03, 0x00}}, {17526, {0x03, 0x00}} }},                           
     {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL ,MIPI_USID_INIT0_Set2, {{17124, {0x00, 0x00}}, {17224, {0x00, 0x00}}, {17324, {0x00, 0x00}}, {17425, {0x00, 0x00}}, {17526, {0x00, 0x00}} }},   
     {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL ,MIPI_USID_INIT0_Set2, {{17124, {0x00, 0x00}}, {17224, {0x00, 0x00}}, {17324, {0x00, 0x00}}, {17425, {0x00, 0x00}}, {17526, {0x00, 0x00}} }},                           
     {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL ,MIPI_USID_INIT0_Set2, {{17124, {0x00, 0x00}}, {17224, {0x00, 0x00}}, {17324, {0x00, 0x00}}, {17425, {0x00, 0x00}}, {17526, {0x00, 0x00}} }},
     {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL ,MIPI_USID_INIT0_Set2, {{17124, {0x00, 0x00}}, {17224, {0x00, 0x00}}, {17324, {0x00, 0x00}}, {17425, {0x00, 0x00}}, {17526, {0x00, 0x00}} }},                           
     {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL ,MIPI_USID_INIT0_Set2, {{17124, {0x00, 0x00}}, {17224, {0x00, 0x00}}, {17324, {0x00, 0x00}}, {17425, {0x00, 0x00}}, {17526, {0x00, 0x00}} }},
     {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL ,MIPI_USID_INIT0_Set2, {{17124, {0x00, 0x00}}, {17224, {0x00, 0x00}}, {17324, {0x00, 0x00}}, {17425, {0x00, 0x00}}, {17526, {0x00, 0x00}} }},                           
     {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL ,MIPI_USID_INIT0_Set2, {{17124, {0x00, 0x00}}, {17224, {0x00, 0x00}}, {17324, {0x00, 0x00}}, {17425, {0x00, 0x00}}, {17526, {0x00, 0x00}} }},
     {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL ,MIPI_USID_INIT0_Set2, {{17124, {0x00, 0x00}}, {17224, {0x00, 0x00}}, {17324, {0x00, 0x00}}, {17425, {0x00, 0x00}}, {17526, {0x00, 0x00}} }},                           
     {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL ,MIPI_USID_INIT0_Set2, {{17124, {0x00, 0x00}}, {17224, {0x00, 0x00}}, {17324, {0x00, 0x00}}, {17425, {0x00, 0x00}}, {17526, {0x00, 0x00}} }},                           
     {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL ,MIPI_USID_INIT0_Set2, {{17124, {0x00, 0x00}}, {17224, {0x00, 0x00}}, {17324, {0x00, 0x00}}, {17425, {0x00, 0x00}}, {17526, {0x00, 0x00}} }},                           
     {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL ,MIPI_USID_INIT0_Set2, {{17124, {0x00, 0x00}}, {17224, {0x00, 0x00}}, {17324, {0x00, 0x00}}, {17425, {0x00, 0x00}}, {17526, {0x00, 0x00}} }},                           
     {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL ,MIPI_USID_INIT0_Set2, {{17124, {0x00, 0x00}}, {17224, {0x00, 0x00}}, {17324, {0x00, 0x00}}, {17425, {0x00, 0x00}}, {17526, {0x00, 0x00}} }},                           
     {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL ,MIPI_USID_INIT0_Set2, {{17124, {0x00, 0x00}}, {17224, {0x00, 0x00}}, {17324, {0x00, 0x00}}, {17425, {0x00, 0x00}}, {17526, {0x00, 0x00}} }},                           
     {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL ,MIPI_USID_INIT0_Set2, {{17124, {0x00, 0x00}}, {17224, {0x00, 0x00}}, {17324, {0x00, 0x00}}, {17425, {0x00, 0x00}}, {17526, {0x00, 0x00}} }},                           
     {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL ,MIPI_USID_INIT0_Set2, {{17124, {0x00, 0x00}}, {17224, {0x00, 0x00}}, {17324, {0x00, 0x00}}, {17425, {0x00, 0x00}}, {17526, {0x00, 0x00}} }},                           
     {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL ,MIPI_USID_INIT0_Set2, {{17124, {0x00, 0x00}}, {17224, {0x00, 0x00}}, {17324, {0x00, 0x00}}, {17425, {0x00, 0x00}}, {17526, {0x00, 0x00}} }}                            
   }                                                                            
};


const UL1_UMTS_MIPI_TPC_T UMTS_MIPI_TPC_UMTSBand5_Set2 = 
{
   /* Event */
   {
    /* No.           elm type , data idx       , evt_type       , evt_offset     */
    /*                           { start, stop },                  ( us )         */
     { /* 0, Prf_7  */ UL1_MIPI_PA, { 0    , 2     }, UL1_MIPI_TPC_SET   , US2CHIPCNT(20)  },  /*highest power*/
     { /* 1, Prf_6  */ UL1_MIPI_PA, { 3    , 5     }, UL1_MIPI_TPC_SET   , US2CHIPCNT(20)  },
     { /* 2, Prf_5  */ UL1_MIPI_PA, { 6    , 8     }, UL1_MIPI_TPC_SET   , US2CHIPCNT(20)  },
     { /* 3, Prf_4  */ UL1_MIPI_PA, { 9    , 11    }, UL1_MIPI_TPC_SET   , US2CHIPCNT(20)  },
     { /* 4, Prf_3  */ UL1_MIPI_PA, { 12   , 14    }, UL1_MIPI_TPC_SET   , US2CHIPCNT(20)  },
     { /* 5, Prf_2  */ UL1_MIPI_PA, { 15   , 17    }, UL1_MIPI_TPC_SET   , US2CHIPCNT(20)  },
     { /* 6, Prf_1  */ UL1_MIPI_PA, { 18   , 20    }, UL1_MIPI_TPC_SET   , US2CHIPCNT(20)  },
     { /* 7, Prf_0  */ UL1_MIPI_PA, { 21   , 23    }, UL1_MIPI_TPC_SET   , US2CHIPCNT(20)  },  /*lowest power*/
   },
   
   /* Data */
   {                                                                                                                                                                               
      //elm type  , port_sel     , data_seq, user id,         {{sub 0, addr, data}}, {{sub 1, addr, data}}, {{sub 2, addr, data} , {{sub 3, addr, data}}, {{sub 4, addr, data}     
     {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{8264, {0x00, 0x28}}, {8314, {0x00, 0x28}}, {8365, {0x00, 0x28}}, {8415, {0x00, 0x28}}, {8466, {0x00, 0x28}} }},  /*L7, TPC IDX 0*/        
     {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{8264, {0x01, 0x6B}}, {8314, {0x01, 0x6B}}, {8365, {0x01, 0x6B}}, {8415, {0x01, 0x6B}}, {8466, {0x01, 0x6B}} }},                           
     {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{8264, {0x03, 0x00}}, {8314, {0x03, 0x00}}, {8365, {0x03, 0x00}}, {8415, {0x03, 0x00}}, {8466, {0x03, 0x00}} }},                           
     {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{8264, {0x00, 0x28}}, {8314, {0x00, 0x28}}, {8365, {0x00, 0x28}}, {8415, {0x00, 0x28}}, {8466, {0x00, 0x28}} }},  /*L6, TPC IDX 2*/        
     {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{8264, {0x01, 0x6B}}, {8314, {0x01, 0x6B}}, {8365, {0x01, 0x6B}}, {8415, {0x01, 0x6B}}, {8466, {0x01, 0x6B}} }},                           
     {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{8264, {0x03, 0x00}}, {8314, {0x03, 0x00}}, {8365, {0x03, 0x00}}, {8415, {0x03, 0x00}}, {8466, {0x03, 0x00}} }},                           
     {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{8264, {0x00, 0x28}}, {8314, {0x00, 0x28}}, {8365, {0x00, 0x28}}, {8415, {0x00, 0x28}}, {8466, {0x00, 0x28}} }},  /*L5, TPC IDX 4*/        
     {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{8264, {0x01, 0x67}}, {8314, {0x01, 0x67}}, {8365, {0x01, 0x67}}, {8415, {0x01, 0x67}}, {8466, {0x01, 0x67}} }},                           
     {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{8264, {0x03, 0x00}}, {8314, {0x03, 0x00}}, {8365, {0x03, 0x00}}, {8415, {0x03, 0x00}}, {8466, {0x03, 0x00}} }},                           
     {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{8264, {0x00, 0x28}}, {8314, {0x00, 0x28}}, {8365, {0x00, 0x28}}, {8415, {0x00, 0x28}}, {8466, {0x00, 0x28}} }},  /*L4, TPC IDX 6*/        
     {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{8264, {0x01, 0x67}}, {8314, {0x01, 0x67}}, {8365, {0x01, 0x67}}, {8415, {0x01, 0x67}}, {8466, {0x01, 0x67}} }},                           
     {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{8264, {0x03, 0x00}}, {8314, {0x03, 0x00}}, {8365, {0x03, 0x00}}, {8415, {0x03, 0x00}}, {8466, {0x03, 0x00}} }},                           
     {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{8264, {0x00, 0x28}}, {8314, {0x00, 0x28}}, {8365, {0x00, 0x28}}, {8415, {0x00, 0x28}}, {8466, {0x00, 0x28}} }},  /*L3, TPC IDX 9*/        
     {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{8264, {0x01, 0x67}}, {8314, {0x01, 0x67}}, {8365, {0x01, 0x67}}, {8415, {0x01, 0x67}}, {8466, {0x01, 0x67}} }},                           
     {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{8264, {0x03, 0x00}}, {8314, {0x03, 0x00}}, {8365, {0x03, 0x00}}, {8415, {0x03, 0x00}}, {8466, {0x03, 0x00}} }},                           
     {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{8264, {0x00, 0x28}}, {8314, {0x00, 0x28}}, {8365, {0x00, 0x28}}, {8415, {0x00, 0x28}}, {8466, {0x00, 0x28}} }},  /*L2, TPC IDX 15, Hyst1*/
     {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{8264, {0x01, 0x67}}, {8314, {0x01, 0x67}}, {8365, {0x01, 0x67}}, {8415, {0x01, 0x67}}, {8466, {0x01, 0x67}} }},                           
     {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{8264, {0x03, 0x00}}, {8314, {0x03, 0x00}}, {8365, {0x03, 0x00}}, {8415, {0x03, 0x00}}, {8466, {0x03, 0x00}} }},                           
     {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{8264, {0x00, 0x28}}, {8314, {0x00, 0x28}}, {8365, {0x00, 0x28}}, {8415, {0x00, 0x28}}, {8466, {0x00, 0x28}} }},  /*L1, TPC IDX 18*/       
     {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{8264, {0x01, 0xEB}}, {8314, {0x01, 0xEB}}, {8365, {0x01, 0xEB}}, {8415, {0x01, 0xEB}}, {8466, {0x01, 0xEB}} }},                           
     {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{8264, {0x03, 0x00}}, {8314, {0x03, 0x00}}, {8365, {0x03, 0x00}}, {8415, {0x03, 0x00}}, {8466, {0x03, 0x00}} }},                           
     {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{8264, {0x00, 0x2A}}, {8314, {0x00, 0x2A}}, {8365, {0x00, 0x2A}}, {8415, {0x00, 0x2A}}, {8466, {0x00, 0x2A}} }},  /*L0, TPC IDX 25, Hyst2*/
     {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{8264, {0x01, 0xAF}}, {8314, {0x01, 0xAF}}, {8365, {0x01, 0xAF}}, {8415, {0x01, 0xAF}}, {8466, {0x01, 0xAF}} }},                           
     {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{8264, {0x03, 0x00}}, {8314, {0x03, 0x00}}, {8365, {0x03, 0x00}}, {8415, {0x03, 0x00}}, {8466, {0x03, 0x00}} }},                            
     {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL, MIPI_USID_INIT0_Set2, {{8264, {0x00, 0x00}}, {8314, {0x00, 0x00}}, {8365, {0x00, 0x00}}, {8415, {0x00, 0x00}}, {8466, {0x00, 0x00}} }},      
     {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL, MIPI_USID_INIT0_Set2, {{8264, {0x00, 0x00}}, {8314, {0x00, 0x00}}, {8365, {0x00, 0x00}}, {8415, {0x00, 0x00}}, {8466, {0x00, 0x00}} }},                           
     {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL, MIPI_USID_INIT0_Set2, {{8264, {0x00, 0x00}}, {8314, {0x00, 0x00}}, {8365, {0x00, 0x00}}, {8415, {0x00, 0x00}}, {8466, {0x00, 0x00}} }},                           
     {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL, MIPI_USID_INIT0_Set2, {{8264, {0x00, 0x00}}, {8314, {0x00, 0x00}}, {8365, {0x00, 0x00}}, {8415, {0x00, 0x00}}, {8466, {0x00, 0x00}} }},                           
     {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL, MIPI_USID_INIT0_Set2, {{8264, {0x00, 0x00}}, {8314, {0x00, 0x00}}, {8365, {0x00, 0x00}}, {8415, {0x00, 0x00}}, {8466, {0x00, 0x00}} }},
     {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL, MIPI_USID_INIT0_Set2, {{8264, {0x00, 0x00}}, {8314, {0x00, 0x00}}, {8365, {0x00, 0x00}}, {8415, {0x00, 0x00}}, {8466, {0x00, 0x00}} }},                           
     {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL, MIPI_USID_INIT0_Set2, {{8264, {0x00, 0x00}}, {8314, {0x00, 0x00}}, {8365, {0x00, 0x00}}, {8415, {0x00, 0x00}}, {8466, {0x00, 0x00}} }},                           
     {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL, MIPI_USID_INIT0_Set2, {{8264, {0x00, 0x00}}, {8314, {0x00, 0x00}}, {8365, {0x00, 0x00}}, {8415, {0x00, 0x00}}, {8466, {0x00, 0x00}} }},                           
     {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL, MIPI_USID_INIT0_Set2, {{8264, {0x00, 0x00}}, {8314, {0x00, 0x00}}, {8365, {0x00, 0x00}}, {8415, {0x00, 0x00}}, {8466, {0x00, 0x00}} }},                           
     {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL, MIPI_USID_INIT0_Set2, {{8264, {0x00, 0x00}}, {8314, {0x00, 0x00}}, {8365, {0x00, 0x00}}, {8415, {0x00, 0x00}}, {8466, {0x00, 0x00}} }},                           
     {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL, MIPI_USID_INIT0_Set2, {{8264, {0x00, 0x00}}, {8314, {0x00, 0x00}}, {8365, {0x00, 0x00}}, {8415, {0x00, 0x00}}, {8466, {0x00, 0x00}} }},                           
     {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL, MIPI_USID_INIT0_Set2, {{8264, {0x00, 0x00}}, {8314, {0x00, 0x00}}, {8365, {0x00, 0x00}}, {8415, {0x00, 0x00}}, {8466, {0x00, 0x00}} }},                           
     {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL, MIPI_USID_INIT0_Set2, {{8264, {0x00, 0x00}}, {8314, {0x00, 0x00}}, {8365, {0x00, 0x00}}, {8415, {0x00, 0x00}}, {8466, {0x00, 0x00}} }},                           
     {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL, MIPI_USID_INIT0_Set2, {{8264, {0x00, 0x00}}, {8314, {0x00, 0x00}}, {8365, {0x00, 0x00}}, {8415, {0x00, 0x00}}, {8466, {0x00, 0x00}} }},                           
     {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL, MIPI_USID_INIT0_Set2, {{8264, {0x00, 0x00}}, {8314, {0x00, 0x00}}, {8365, {0x00, 0x00}}, {8415, {0x00, 0x00}}, {8466, {0x00, 0x00}} }},                           
     {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL, MIPI_USID_INIT0_Set2, {{8264, {0x00, 0x00}}, {8314, {0x00, 0x00}}, {8365, {0x00, 0x00}}, {8415, {0x00, 0x00}}, {8466, {0x00, 0x00}} }}                            
   }                                                                            
};

const UL1_UMTS_MIPI_TPC_T UMTS_MIPI_TPC_UMTSBand8_Set2 = 
{
   /* Event */
   {
    /* No.           elm type , data idx       , evt_type       , evt_offset     */
    /*                           { start, stop },                  ( us )         */
     { /* 0, Prf_7  */ UL1_MIPI_PA, { 0    , 2     }, UL1_MIPI_TPC_SET   , US2CHIPCNT(20)  },  /*highest power*/
     { /* 1, Prf_6  */ UL1_MIPI_PA, { 3    , 5     }, UL1_MIPI_TPC_SET   , US2CHIPCNT(20)  },
     { /* 2, Prf_5  */ UL1_MIPI_PA, { 6    , 8     }, UL1_MIPI_TPC_SET   , US2CHIPCNT(20)  },
     { /* 3, Prf_4  */ UL1_MIPI_PA, { 9    , 11    }, UL1_MIPI_TPC_SET   , US2CHIPCNT(20)  },
     { /* 4, Prf_3  */ UL1_MIPI_PA, { 12   , 14    }, UL1_MIPI_TPC_SET   , US2CHIPCNT(20)  },
     { /* 5, Prf_2  */ UL1_MIPI_PA, { 15   , 17    }, UL1_MIPI_TPC_SET   , US2CHIPCNT(20)  },
     { /* 6, Prf_1  */ UL1_MIPI_PA, { 18   , 20    }, UL1_MIPI_TPC_SET   , US2CHIPCNT(20)  },
     { /* 7, Prf_0  */ UL1_MIPI_PA, { 21   , 23    }, UL1_MIPI_TPC_SET   , US2CHIPCNT(20)  },  /*lowest power*/
   },
   
   /* Data */
   {                                                                                                                                                                               
      //elm type  , port_sel     , data_seq, user id,         {{sub 0, addr, data}}, {{sub 1, addr, data}}, {{sub 2, addr, data} , {{sub 3, addr, data}}, {{sub 4, addr, data}     
     {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{8824, {0x00, 0x28}}, {8899, {0x00, 0x28}}, {8975, {0x00, 0x28}}, {9050, {0x00, 0x28}}, {9126, {0x00, 0x28}} }},  /*L7, TPC IDX 0*/        
     {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{8824, {0x01, 0xEB}}, {8899, {0x01, 0xEB}}, {8975, {0x01, 0xEB}}, {9050, {0x01, 0xEB}}, {9126, {0x01, 0xEB}} }},                           
     {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{8824, {0x03, 0x00}}, {8899, {0x03, 0x00}}, {8975, {0x03, 0x00}}, {9050, {0x03, 0x00}}, {9126, {0x03, 0x00}} }},                           
     {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{8824, {0x00, 0x28}}, {8899, {0x00, 0x28}}, {8975, {0x00, 0x28}}, {9050, {0x00, 0x28}}, {9126, {0x00, 0x28}} }},  /*L6, TPC IDX 2*/        
     {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{8824, {0x01, 0xEB}}, {8899, {0x01, 0xEB}}, {8975, {0x01, 0xEB}}, {9050, {0x01, 0xEB}}, {9126, {0x01, 0xEB}} }},                           
     {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{8824, {0x03, 0x00}}, {8899, {0x03, 0x00}}, {8975, {0x03, 0x00}}, {9050, {0x03, 0x00}}, {9126, {0x03, 0x00}} }},                           
     {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{8824, {0x00, 0x28}}, {8899, {0x00, 0x28}}, {8975, {0x00, 0x28}}, {9050, {0x00, 0x28}}, {9126, {0x00, 0x28}} }},  /*L5, TPC IDX 4*/        
     {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{8824, {0x01, 0xCB}}, {8899, {0x01, 0xCB}}, {8975, {0x01, 0xCB}}, {9050, {0x01, 0xCB}}, {9126, {0x01, 0xCB}} }},                           
     {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{8824, {0x03, 0x00}}, {8899, {0x03, 0x00}}, {8975, {0x03, 0x00}}, {9050, {0x03, 0x00}}, {9126, {0x03, 0x00}} }},                           
     {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{8824, {0x00, 0x28}}, {8899, {0x00, 0x28}}, {8975, {0x00, 0x28}}, {9050, {0x00, 0x28}}, {9126, {0x00, 0x28}} }},  /*L4, TPC IDX 6*/        
     {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{8824, {0x01, 0xCB}}, {8899, {0x01, 0xCB}}, {8975, {0x01, 0xCB}}, {9050, {0x01, 0xCB}}, {9126, {0x01, 0xCB}} }},                           
     {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{8824, {0x03, 0x00}}, {8899, {0x03, 0x00}}, {8975, {0x03, 0x00}}, {9050, {0x03, 0x00}}, {9126, {0x03, 0x00}} }},                           
     {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{8824, {0x00, 0x28}}, {8899, {0x00, 0x28}}, {8975, {0x00, 0x28}}, {9050, {0x00, 0x28}}, {9126, {0x00, 0x28}} }},  /*L3, TPC IDX 9*/        
     {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{8824, {0x01, 0xCB}}, {8899, {0x01, 0xCB}}, {8975, {0x01, 0xCB}}, {9050, {0x01, 0xCB}}, {9126, {0x01, 0xCB}} }},                           
     {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{8824, {0x03, 0x00}}, {8899, {0x03, 0x00}}, {8975, {0x03, 0x00}}, {9050, {0x03, 0x00}}, {9126, {0x03, 0x00}} }},                           
     {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{8824, {0x00, 0x28}}, {8899, {0x00, 0x28}}, {8975, {0x00, 0x28}}, {9050, {0x00, 0x28}}, {9126, {0x00, 0x28}} }},  /*L2, TPC IDX 15, Hyst1*/
     {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{8824, {0x01, 0x8B}}, {8899, {0x01, 0x8B}}, {8975, {0x01, 0x8B}}, {9050, {0x01, 0x8B}}, {9126, {0x01, 0x8B}} }},                           
     {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{8824, {0x03, 0x00}}, {8899, {0x03, 0x00}}, {8975, {0x03, 0x00}}, {9050, {0x03, 0x00}}, {9126, {0x03, 0x00}} }},                           
     {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{8824, {0x00, 0x28}}, {8899, {0x00, 0x28}}, {8975, {0x00, 0x28}}, {9050, {0x00, 0x28}}, {9126, {0x00, 0x28}} }},  /*L1, TPC IDX 18*/       
     {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{8824, {0x01, 0xCB}}, {8899, {0x01, 0xCB}}, {8975, {0x01, 0xCB}}, {9050, {0x01, 0xCB}}, {9126, {0x01, 0xCB}} }},                           
     {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{8824, {0x03, 0x00}}, {8899, {0x03, 0x00}}, {8975, {0x03, 0x00}}, {9050, {0x03, 0x00}}, {9126, {0x03, 0x00}} }},                           
     {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{8824, {0x00, 0x2A}}, {8899, {0x00, 0x2A}}, {8975, {0x00, 0x2A}}, {9050, {0x00, 0x2A}}, {9126, {0x00, 0x2A}} }},  /*L0, TPC IDX 25, Hyst2*/
     {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{8824, {0x01, 0xD7}}, {8899, {0x01, 0xD7}}, {8975, {0x01, 0xD7}}, {9050, {0x01, 0xD7}}, {9126, {0x01, 0xD7}} }},                           
     {UL1_MIPI_PA   , UL1_MIPI_PORT0 , UL1_REG_W ,   MIPI_USID_PA0_Set2,   {{8824, {0x03, 0x00}}, {8899, {0x03, 0x00}}, {8975, {0x03, 0x00}}, {9050, {0x03, 0x00}}, {9126, {0x03, 0x00}} }},                            
     {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL, MIPI_USID_INIT0_Set2, {{8824, {0x00, 0x00}}, {8899, {0x00, 0x00}}, {8975, {0x00, 0x00}}, {9050, {0x00, 0x00}}, {9126, {0x00, 0x00}} }},     
     {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL, MIPI_USID_INIT0_Set2, {{8824, {0x00, 0x00}}, {8899, {0x00, 0x00}}, {8975, {0x00, 0x00}}, {9050, {0x00, 0x00}}, {9126, {0x00, 0x00}} }},                           
     {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL, MIPI_USID_INIT0_Set2, {{8824, {0x00, 0x00}}, {8899, {0x00, 0x00}}, {8975, {0x00, 0x00}}, {9050, {0x00, 0x00}}, {9126, {0x00, 0x00}} }},                           
     {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL, MIPI_USID_INIT0_Set2, {{8824, {0x00, 0x00}}, {8899, {0x00, 0x00}}, {8975, {0x00, 0x00}}, {9050, {0x00, 0x00}}, {9126, {0x00, 0x00}} }},                           
     {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL, MIPI_USID_INIT0_Set2, {{8824, {0x00, 0x00}}, {8899, {0x00, 0x00}}, {8975, {0x00, 0x00}}, {9050, {0x00, 0x00}}, {9126, {0x00, 0x00}} }},
     {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL, MIPI_USID_INIT0_Set2, {{8824, {0x00, 0x00}}, {8899, {0x00, 0x00}}, {8975, {0x00, 0x00}}, {9050, {0x00, 0x00}}, {9126, {0x00, 0x00}} }},                           
     {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL, MIPI_USID_INIT0_Set2, {{8824, {0x00, 0x00}}, {8899, {0x00, 0x00}}, {8975, {0x00, 0x00}}, {9050, {0x00, 0x00}}, {9126, {0x00, 0x00}} }},                           
     {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL, MIPI_USID_INIT0_Set2, {{8824, {0x00, 0x00}}, {8899, {0x00, 0x00}}, {8975, {0x00, 0x00}}, {9050, {0x00, 0x00}}, {9126, {0x00, 0x00}} }},                           
     {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL, MIPI_USID_INIT0_Set2, {{8824, {0x00, 0x00}}, {8899, {0x00, 0x00}}, {8975, {0x00, 0x00}}, {9050, {0x00, 0x00}}, {9126, {0x00, 0x00}} }},                           
     {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL, MIPI_USID_INIT0_Set2, {{8824, {0x00, 0x00}}, {8899, {0x00, 0x00}}, {8975, {0x00, 0x00}}, {9050, {0x00, 0x00}}, {9126, {0x00, 0x00}} }},                           
     {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL, MIPI_USID_INIT0_Set2, {{8824, {0x00, 0x00}}, {8899, {0x00, 0x00}}, {8975, {0x00, 0x00}}, {9050, {0x00, 0x00}}, {9126, {0x00, 0x00}} }},                           
     {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL, MIPI_USID_INIT0_Set2, {{8824, {0x00, 0x00}}, {8899, {0x00, 0x00}}, {8975, {0x00, 0x00}}, {9050, {0x00, 0x00}}, {9126, {0x00, 0x00}} }},                           
     {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL, MIPI_USID_INIT0_Set2, {{8824, {0x00, 0x00}}, {8899, {0x00, 0x00}}, {8975, {0x00, 0x00}}, {9050, {0x00, 0x00}}, {9126, {0x00, 0x00}} }},                           
     {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL, MIPI_USID_INIT0_Set2, {{8824, {0x00, 0x00}}, {8899, {0x00, 0x00}}, {8975, {0x00, 0x00}}, {9050, {0x00, 0x00}}, {9126, {0x00, 0x00}} }},                           
     {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL, MIPI_USID_INIT0_Set2, {{8824, {0x00, 0x00}}, {8899, {0x00, 0x00}}, {8975, {0x00, 0x00}}, {9050, {0x00, 0x00}}, {9126, {0x00, 0x00}} }},                           
     {UL1_MIPI_NULL , UL1_MIPI_DATA_NULL , UL1_SEQ_NULL, MIPI_USID_INIT0_Set2, {{8824, {0x00, 0x00}}, {8899, {0x00, 0x00}}, {8975, {0x00, 0x00}}, {9050, {0x00, 0x00}}, {9126, {0x00, 0x00}} }}                            
   }                                                                          
};

const UL1_UMTS_MIPI_TPC_T UMTS_MIPI_TPC_UMTSBand3_Set2  = {{{0}}};
const UL1_UMTS_MIPI_TPC_T UMTS_MIPI_TPC_UMTSBand6_Set2  = {{{0}}};
const UL1_UMTS_MIPI_TPC_T UMTS_MIPI_TPC_UMTSBand9_Set2  = {{{0}}};
const UL1_UMTS_MIPI_TPC_T UMTS_MIPI_TPC_UMTSBand11_Set2 = {{{0}}};
const UL1_UMTS_MIPI_TPC_T UMTS_MIPI_TPC_UMTSBand19_Set2 = {{{0}}};

const UL1_UMTS_MIPI_TPC_T* const UMTS_MIPI_TPC_TABLE_Set2[] =
{
   M_UMTS_TPC(UMTSBandNone,Set2),                     /*UMTSUMTSBandNone*/          
   M_UMTS_TPC(RX_BAND_INDICATOR_0_Set2,Set2),   /*RX_BAND_INDICATOR_0_Set2*/
   M_UMTS_TPC(RX_BAND_INDICATOR_1_Set2,Set2),   /*RX_BAND_INDICATOR_1_Set2*/
   M_UMTS_TPC(RX_BAND_INDICATOR_2_Set2,Set2),   /*RX_BAND_INDICATOR_2_Set2*/
   M_UMTS_TPC(RX_BAND_INDICATOR_3_Set2,Set2),   /*RX_BAND_INDICATOR_3_Set2 */ 
   M_UMTS_TPC(RX_BAND_INDICATOR_4_Set2,Set2),   /*RX_BAND_INDICATOR_4_Set2 */ 
};



/*special handle for T/Rx calibration, we should force ASM to isolation mode */
/*Users just need to provide the ASM isolation CW, DSP may use immediate mode*/
/*to control the MIPI ASM                                                    */
const UL1_MIPI_DATA_TABLE_T UMTS_MIPI_ASM_ISOLATION_DATA_UMTSBandNone_Set2[MIPI_MAX_ASM_ISOLATION_IMM_BSI_CW_NUM] = {{0}};
const UL1_MIPI_DATA_TABLE_T UMTS_MIPI_ASM_ISOLATION_DATA_UMTSBand1_Set2[MIPI_MAX_ASM_ISOLATION_IMM_BSI_CW_NUM] = {{0}};
const UL1_MIPI_DATA_TABLE_T UMTS_MIPI_ASM_ISOLATION_DATA_UMTSBand2_Set2[MIPI_MAX_ASM_ISOLATION_IMM_BSI_CW_NUM] = {{0}};
const UL1_MIPI_DATA_TABLE_T UMTS_MIPI_ASM_ISOLATION_DATA_UMTSBand4_Set2[MIPI_MAX_ASM_ISOLATION_IMM_BSI_CW_NUM] = {{0}};
const UL1_MIPI_DATA_TABLE_T UMTS_MIPI_ASM_ISOLATION_DATA_UMTSBand5_Set2[MIPI_MAX_ASM_ISOLATION_IMM_BSI_CW_NUM] = {{0}};
const UL1_MIPI_DATA_TABLE_T UMTS_MIPI_ASM_ISOLATION_DATA_UMTSBand8_Set2[MIPI_MAX_ASM_ISOLATION_IMM_BSI_CW_NUM] = {{0}};
const UL1_MIPI_DATA_TABLE_T UMTS_MIPI_ASM_ISOLATION_DATA_UMTSBand3_Set2[MIPI_MAX_ASM_ISOLATION_IMM_BSI_CW_NUM] = {{0}};
const UL1_MIPI_DATA_TABLE_T UMTS_MIPI_ASM_ISOLATION_DATA_UMTSBand6_Set2[MIPI_MAX_ASM_ISOLATION_IMM_BSI_CW_NUM] = {{0}};
const UL1_MIPI_DATA_TABLE_T UMTS_MIPI_ASM_ISOLATION_DATA_UMTSBand9_Set2[MIPI_MAX_ASM_ISOLATION_IMM_BSI_CW_NUM] = {{0}};
const UL1_MIPI_DATA_TABLE_T UMTS_MIPI_ASM_ISOLATION_DATA_UMTSBand11_Set2[MIPI_MAX_ASM_ISOLATION_IMM_BSI_CW_NUM] = {{0}};
const UL1_MIPI_DATA_TABLE_T UMTS_MIPI_ASM_ISOLATION_DATA_UMTSBand19_Set2[MIPI_MAX_ASM_ISOLATION_IMM_BSI_CW_NUM] = {{0}};

const UL1_MIPI_DATA_TABLE_T* const UMTS_MIPI_ASM_ISOLATION_DATA_TABLE_Set2[] = 
{
   M_UMTS_ASM_ISO(UMTSBandNone,Set2),                        /*UMTSUMTSBandNone*/          
   M_UMTS_ASM_ISO(RX_BAND_INDICATOR_0_Set2,Set2),      /*RX_BAND_INDICATOR_0_Set2*/  
   M_UMTS_ASM_ISO(RX_BAND_INDICATOR_1_Set2,Set2),      /*RX_BAND_INDICATOR_1_Set2*/  
   M_UMTS_ASM_ISO(RX_BAND_INDICATOR_2_Set2,Set2),      /*RX_BAND_INDICATOR_2_Set2*/  
   M_UMTS_ASM_ISO(RX_BAND_INDICATOR_3_Set2,Set2),      /*RX_BAND_INDICATOR_3_Set2*/   
   M_UMTS_ASM_ISO(RX_BAND_INDICATOR_4_Set2,Set2),      /*RX_BAND_INDICATOR_4_Set2*/   
};

/////////////////////////////////////////////

#endif

