/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2016
*
*  BY OPENING THIS FILE, BUYER HEREBY UNEQUIVOCALLY ACKNOWLEDGES AND AGREES
*  THAT THE SOFTWARE/FIRMWARE AND ITS DOCUMENTATIONS (""MEDIATEK SOFTWARE"")
*  RECEIVED FROM MEDIATEK AND/OR ITS REPRESENTATIVES ARE PROVIDED TO BUYER ON
*  AN ""AS-IS"" BASIS ONLY. MEDIATEK EXPRESSLY DISCLAIMS ANY AND ALL WARRANTIES,
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
/*************************************************************
*
* This Software is the property of VIA Telecom, Inc. and may only be used pursuant to a license from VIA Telecom, Inc.  
* 
* Any unauthorized use inconsistent with the terms of such license is strictly prohibited.
* 
* Copyright (c) 2006-2010 VIA Telecom, Inc.  All rights reserved.
*
*************************************************************/
/*****************************************************************************
* 
* FILE NAME   : do_rfcapi.h
*
* DESCRIPTION : API definition for RFC (Radio Frequecy Control) component of
*               the RMC software unit.
*
* HISTORY     :
*****************************************************************************/
#ifndef _DO_RFCAPI_H_
#define _DO_RFCAPI_H_

/*----------------------------------------------------------------------------
 Include Files
----------------------------------------------------------------------------*/
#include "do_rmcapi.h"


/*----------------------------------------------------------------------------
 Global Defines and Macros
----------------------------------------------------------------------------*/

/* Define fractional Q-values used by RFC algorithms */
#define RMC_AFC_PPM_Q  10
#define RMC_AFC_PPM_Q_ADJ  5   /* To get enough resolution for PpmPerHz[] table*/

/*--------------------------------------------------------*/
/* Define Outer-Loop ISR System Time default match values */
#define RMC_SLOT_ISR_ST_MATCH     (2048 - 300)  /* Slot ISR occurs 300 chips prior to slot boundary */
#define RMC_HALFSLOT_ISR_ST_MATCH (1024 - 300)  /* HalfSlot ISR occurs 300 chips prior to half-slot boundary */

/*---------------------------------------- ------*/
/* Define default RMC Rf Control settling values */
#define DEFAULT_SLOW_RX_AGC_SETTLE_TIME_US (1670 * 8) /* Worst Case settle time = Max # of GainSt8 * slow GainSt8 transition rate */ 
#define DEFAULT_FAST_RX_AGC_SETTLE_TIME_US (835 * 4)  /* Worst Case settle time = Max # of GainSt8 * fast GainSt8 transition rate */ 

/*----------------------------------------------------------------------------
 Global typedefs
----------------------------------------------------------------------------*/

/*------------------------------------*/
/* Define RMC Settling Time structure */
typedef struct
{
   kal_uint16 RxAgcSettleSlowUsec;    /* Settle time for DO RMC AGC Settling with running with
                                  ** outer-loop ISR rate once per slot (i.e., every 2048 chips)
                                  ** - units in microseconds */
   kal_uint16 RxAgcSettleFastUsec;    /* Settle time for DO RMC AGC Settling with running with
                                  ** outer-loop ISR rate once per half slot (i.e., every 1024 
                                  ** chips) - units in microseconds */
#if defined (MTK_DEV_C2K_IRAT) && defined (MTK_DEV_C2K_SRLTE_L1)
   kal_uint16 RxAgcSettle1Slot;      /**Used for 6ms meas for LTE conn gap*/
#endif
                              
} RmcRfcSettleTimesT;

/*----------------------------------------------------------------------------
     Message Formats structure
----------------------------------------------------------------------------*/

typedef struct
{
   kal_uint32    attribute;           /* Timer attribute*/ 

} RfcTimerTimeoutMsgT;    /* typedef for the message */


/*****************************************************************************
* End of File
*****************************************************************************/
#endif

