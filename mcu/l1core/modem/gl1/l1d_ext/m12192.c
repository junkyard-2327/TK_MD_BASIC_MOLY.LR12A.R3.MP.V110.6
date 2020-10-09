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
 *   m12192.c
 *
 * Project:
 * --------
 *   MT6208
 *
 * Description:
 * ------------
 *   Setup Gain
 *
 * Author:
 * -------
 * -------
 *
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
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 *
 *******************************************************************************/


/*===============================================================================*/
/*                                                                               */
/* int L1D_RF_GetGainSetting( int rf_band, int arfcn, int request_gain,          */
/*                            long *gain_setting )                               */
/*                                                                               */
/*===============================================================================*/
/*                                                                               */
/* rf_band      : RF Band. the value is 0 (GSM) or 1 (DCS)                       */
/* arfcn        : ARFCN number                                                   */
/* request_gain : Request Gain. the unit is 0.125 dBm                            */
/* *gain_setting: the Setting Value for tranceiver gain.                         */
/* return       : returned Actually Setting Gain. the unit is 0.125 dBm.         */
/*                                                                               */
/* ----------------------------------------------------------------------------- */
/*                                                                               */
/* This program evaluates the AGC setting value by the request gain for Bright2. */
/* If the AGC component is changed, this file shall be modified by vendor        */
/*                                                                               */
/* ----------------------------------------------------------------------------- */

#include "l1d_cid.h"
#include "l1d_loc_def.h"
#include "m12190_l1core.h"
#include "l1d_public.h"

/*================================================================================================*/

#define  ROUNDINT( n )                    ((int)(((n)>=0)?((n)+0.5):((n)-0.5)))
#define  GC_B                             ((GAIN_STEP)*(PWRRES))
#define  GC_A( bitno, gain  )             (short)ROUNDINT(((1+2*(bitno))*GC_B/2-(gain)*(PWRRES)))
#define  GBOUND( gain1, gain2 )           (short)ROUNDINT((((gain1)+(gain2))/2.0*(PWRRES)))
#define  BIT_NO( reqgain, A, B )          (((reqgain)+(A))/(B))
#define  REAL_GAIN( bitno, A, B )         ((bitno)*(B)-(A)+(B)/2)

/*================================================================================================*/

#if IS_RF_BRIGHT2
/*BRIGHT2*/
/*BRIGHT2*/ #define  GAIN_STEP               2
/*BRIGHT2*/
/*BRIGHT2*/ #define  RF_GSM_MAXGAIN         ((114.0-37.6)*(PWRRES))
/*BRIGHT2*/ #define  RF_GSM_MINGAIN         (( 14.0-37.6)*(PWRRES))
/*BRIGHT2*/ #define  RF_DCS_MAXGAIN         ((114.0-36.6)*(PWRRES))
/*BRIGHT2*/ #define  RF_DCS_MINGAIN         (( 14.0-36.6)*(PWRRES))
/*BRIGHT2*/ #define  RF_PCS_MAXGAIN         ((114.0-36.6)*(PWRRES))
/*BRIGHT2*/ #define  RF_PCS_MINGAIN         (( 14.0-36.6)*(PWRRES))
/*BRIGHT2*/
/*BRIGHT2*/ /* GSM900....................................................................*/
/*BRIGHT2*/
/*BRIGHT2*/ const  sL1DAGCDATA  AGC_TABLE_GSM900[3] =
/*BRIGHT2*/ {  {  GBOUND( 20.4, 18.4 ), GC_A( 20, 20.4 ), 0x00 },
/*BRIGHT2*/    {  GBOUND(  8.4,  6.4 ), GC_A( 20,  8.4 ), 0x80 },
/*BRIGHT2*/    {  GBOUND(-23.6,-23.6 ), GC_A( 12,-23.6 ), 0xC0 },
/*BRIGHT2*/ };
/*BRIGHT2*/
/*BRIGHT2*/ /* DCS1800...................................................................*/
/*BRIGHT2*/
/*BRIGHT2*/ const  sL1DAGCDATA  AGC_TABLE_DCS1800[3] =
/*BRIGHT2*/ {  {  GBOUND( 21.4, 19.4 ), GC_A( 21, 21.4 ), 0x00 },
/*BRIGHT2*/    {  GBOUND(  9.4,  7.4 ), GC_A( 21,  9.4 ), 0x80 },
/*BRIGHT2*/    {  GBOUND(-22.6,-22.6 ), GC_A( 13,-22.6 ), 0xC0 },
/*BRIGHT2*/ };
/*BRIGHT2*/
/*BRIGHT2*/ /* PCS1900...................................................................*/
/*BRIGHT2*/
/*BRIGHT2*/ const  sL1DAGCDATA  AGC_TABLE_PCS1900[3] =
/*BRIGHT2*/ {  {  GBOUND( 21.4, 19.4 ), GC_A( 21, 21.4 ), 0x00 },
/*BRIGHT2*/    {  GBOUND(  9.4,  7.4 ), GC_A( 21,  9.4 ), 0x80 },
/*BRIGHT2*/    {  GBOUND(-22.6,-22.6 ), GC_A( 13,-22.6 ), 0xC0 },
/*BRIGHT2*/ };
/*BRIGHT2*/
/*BRIGHT2*/ /*...........................................................................*/
/*BRIGHT2*/
/*BRIGHT2*/ const  sL1DGAINRANGE GAIN_RANGE_TABLE[] =
/*BRIGHT2*/ {  {                   0,                   0 },   /*#FrequencyBand400  */
/*BRIGHT2*/    {                   0,                   0 },   /*#FrequencyBand850  */
/*BRIGHT2*/    { (int)RF_GSM_MAXGAIN, (int)RF_GSM_MINGAIN },   /* FrequencyBand900  */
/*BRIGHT2*/    { (int)RF_DCS_MAXGAIN, (int)RF_DCS_MINGAIN },   /* FrequencyBand1800 */
/*BRIGHT2*/    { (int)RF_PCS_MAXGAIN, (int)RF_PCS_MINGAIN },   /* FrequencyBand1900 */
/*BRIGHT2*/ };
/*BRIGHT2*/
/*BRIGHT2*/ const  sL1DAGCDATA *const  AGC_TABLE[] =
/*BRIGHT2*/ {  0,                                              /*#FrequencyBand400  */
/*BRIGHT2*/    0,                                              /*#FrequencyBand850  */
/*BRIGHT2*/    AGC_TABLE_GSM900,                               /* FrequencyBand900  */
/*BRIGHT2*/    AGC_TABLE_DCS1800,                              /* FrequencyBand1800 */
/*BRIGHT2*/    AGC_TABLE_PCS1900,                              /* FrequencyBand1900 */
/*BRIGHT2*/ };
/*BRIGHT2*/
/*BRIGHT2*/ /*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
/*BRIGHT2*/
/*BRIGHT2*/ int   L1D_RF_GetGainSetting( int rf_band, int arfcn, int request_gain, long *gain_setting )
/*BRIGHT2*/ {  int   max_gain, min_gain, real_gain;
/*BRIGHT2*/    const int*    d32ptr;
/*BRIGHT2*/    const sL1DAGCDATA*  agcptr;
/*BRIGHT2*/    long  setting;
/*BRIGHT2*/    int   bit_no;
/*BRIGHT2*/
/*BRIGHT2*/    /* evaluate the range of available gain */
/*BRIGHT2*/    d32ptr  = (int*)&(GAIN_RANGE_TABLE[rf_band]);
/*BRIGHT2*/    max_gain = *d32ptr++;
/*BRIGHT2*/    min_gain = *d32ptr;
/*BRIGHT2*/
/*BRIGHT2*/    /* clipping the request gain to the avialable gain */
/*BRIGHT2*/    if( request_gain>=max_gain )
/*BRIGHT2*/    {  request_gain = max_gain;  }
/*BRIGHT2*/    else  if( request_gain<=min_gain )
/*BRIGHT2*/    {  request_gain = min_gain;  }
/*BRIGHT2*/
/*BRIGHT2*/    /* evaluate the real gain setting */
/*BRIGHT2*/    agcptr = AGC_TABLE[rf_band];
/*BRIGHT2*/    if( request_gain <= agcptr->pos_gain )
/*BRIGHT2*/    {  agcptr++;
/*BRIGHT2*/       if( request_gain <= agcptr->pos_gain )
/*BRIGHT2*/       {  agcptr++;  }
/*BRIGHT2*/    }
/*BRIGHT2*/    {  bit_no    = BIT_NO( request_gain, (agcptr->A-1), GC_B );
/*BRIGHT2*/       real_gain = REAL_GAIN( bit_no, agcptr->A, GC_B );
/*BRIGHT2*/       setting   = agcptr->setting + bit_no;
/*BRIGHT2*/    }
/*BRIGHT2*/
/*BRIGHT2*/    *gain_setting = setting;
/*BRIGHT2*/    return( real_gain );
/*BRIGHT2*/ }
/*BRIGHT2*/
#endif

#if IS_RF_BRIGHT4
/*BRIGHT4*/
/*BRIGHT4*/ #define  GAIN_STEP               2
/*BRIGHT4*/
/*BRIGHT4*/ #define  RF_GSM_MAXGAIN         (( 58.5)*(PWRRES))
/*BRIGHT4*/ #define  RF_GSM_MINGAIN         ((-39.0)*(PWRRES))
/*BRIGHT4*/ #define  RF_DCS_MAXGAIN         (( 53.5)*(PWRRES))
/*BRIGHT4*/ #define  RF_DCS_MINGAIN         ((-43.0)*(PWRRES))
/*BRIGHT4*/ #define  RF_PCS_MAXGAIN         (( 53.5)*(PWRRES))
/*BRIGHT4*/ #define  RF_PCS_MINGAIN         ((-43.0)*(PWRRES))
/*BRIGHT4*/
/*BRIGHT4*/ /* GSM900....................................................................*/
/*BRIGHT4*/
/*BRIGHT4*/ const  sL1DAGCDATA  AGC_TABLE_GSM900[2] =
/*BRIGHT4*/ {  {  GBOUND(-11.5,-13.0 ), GC_A( 10,-11.5 ), 0x2002 },
/*BRIGHT4*/    {  GBOUND(-39.0,-39.0 ), GC_A( 13,-39.0 ), 0x2202 },
/*BRIGHT4*/ };
/*BRIGHT4*/
/*BRIGHT4*/ /* DCS1800...................................................................*/
/*BRIGHT4*/
/*BRIGHT4*/ const  sL1DAGCDATA  AGC_TABLE_DCS1800[2] =
/*BRIGHT4*/ {  {  GBOUND(-16.5,-17.0 ), GC_A( 10,-16.5 ), 0x2002 },
/*BRIGHT4*/    {  GBOUND(-43.0,-43.0 ), GC_A(  9,-43.0 ), 0x2202 },
/*BRIGHT4*/ };
/*BRIGHT4*/
/*BRIGHT4*/ /* PCS1900...................................................................*/
/*BRIGHT4*/
/*BRIGHT4*/ const  sL1DAGCDATA  AGC_TABLE_PCS1900[2] =
/*BRIGHT4*/ {  {  GBOUND(-16.5,-17.0 ), GC_A( 10,-16.5 ), 0x2002 },
/*BRIGHT4*/    {  GBOUND(-43.0,-43.0 ), GC_A(  9,-43.0 ), 0x2202 },
/*BRIGHT4*/ };
/*BRIGHT4*/
/*BRIGHT4*/ /*...........................................................................*/
/*BRIGHT4*/
/*BRIGHT4*/ const  sL1DGAINRANGE GAIN_RANGE_TABLE[] =
/*BRIGHT4*/ {  {                   0,                   0 },   /*#FrequencyBand400  */
/*BRIGHT4*/    {                   0,                   0 },   /*#FrequencyBand850  */
/*BRIGHT4*/    { (int)RF_GSM_MAXGAIN, (int)RF_GSM_MINGAIN },   /* FrequencyBand900  */
/*BRIGHT4*/    { (int)RF_DCS_MAXGAIN, (int)RF_DCS_MINGAIN },   /* FrequencyBand1800 */
/*BRIGHT4*/    { (int)RF_PCS_MAXGAIN, (int)RF_PCS_MINGAIN },   /* FrequencyBand1900 */
/*BRIGHT4*/ };
/*BRIGHT4*/
/*BRIGHT4*/ const  sL1DAGCDATA *const  AGC_TABLE[] =
/*BRIGHT4*/ {  0,                                              /*#FrequencyBand400  */
/*BRIGHT4*/    0,                                              /*#FrequencyBand850  */
/*BRIGHT4*/    AGC_TABLE_GSM900,                               /* FrequencyBand900  */
/*BRIGHT4*/    AGC_TABLE_DCS1800,                              /* FrequencyBand1800 */
/*BRIGHT4*/    AGC_TABLE_PCS1900,                              /* FrequencyBand1900 */
/*BRIGHT4*/ };
/*BRIGHT4*/
/*BRIGHT4*/ /*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
/*BRIGHT4*/
/*BRIGHT4*/ int   L1D_RF_GetGainSetting( int rf_band, int arfcn, int request_gain, long *gain_setting )
/*BRIGHT4*/ {  int   max_gain, min_gain, real_gain;
/*BRIGHT4*/    const int*    d32ptr;
/*BRIGHT4*/    const sL1DAGCDATA*  agcptr;
/*BRIGHT4*/    long  setting;
/*BRIGHT4*/    int   bit_no;
/*BRIGHT4*/
/*BRIGHT4*/    /* evaluate the range of available gain */
/*BRIGHT4*/    d32ptr  = (int*)&(GAIN_RANGE_TABLE[rf_band]);
/*BRIGHT4*/    max_gain = *d32ptr++;
/*BRIGHT4*/    min_gain = *d32ptr;
/*BRIGHT4*/
/*BRIGHT4*/    /* clipping the request gain to the avialable gain */
/*BRIGHT4*/    if( request_gain>=max_gain )
/*BRIGHT4*/    {  request_gain = max_gain;  }
/*BRIGHT4*/    else  if( request_gain<=min_gain )
/*BRIGHT4*/    {  request_gain = min_gain;  }
/*BRIGHT4*/
/*BRIGHT4*/    /* evaluate the real gain setting */
/*BRIGHT4*/    agcptr = AGC_TABLE[rf_band];
/*BRIGHT4*/    if( request_gain < agcptr->pos_gain )
/*BRIGHT4*/    {  agcptr++;
/*BRIGHT4*/    }
/*BRIGHT4*/    {  bit_no    = BIT_NO( request_gain, agcptr->A, GC_B );
/*BRIGHT4*/       real_gain = REAL_GAIN( bit_no, agcptr->A, GC_B );
/*BRIGHT4*/       setting   = agcptr->setting + (bit_no<<3);
/*BRIGHT4*/    }
/*BRIGHT4*/
/*BRIGHT4*/    *gain_setting = setting;
/*BRIGHT4*/    return( real_gain );
/*BRIGHT4*/ }
/*BRIGHT4*/
#endif

#if IS_RF_BRIGHT5P
/*BRIGHT5P*/
/*BRIGHT5P*/ #define  GAIN_STEP               2
/*BRIGHT5P*/
/*BRIGHT5P*/ #define  RF_GSM850_MAXGAIN         (( 64.5)*(PWRRES))
/*BRIGHT5P*/ #define  RF_GSM850_MINGAIN         ((-11.5)*(PWRRES))
/*BRIGHT5P*/ #define  RF_GSM_MAXGAIN            (( 64.5)*(PWRRES))
/*BRIGHT5P*/ #define  RF_GSM_MINGAIN            ((-11.5)*(PWRRES))
/*BRIGHT5P*/ #define  RF_DCS_MAXGAIN            (( 63.5)*(PWRRES))
/*BRIGHT5P*/ #define  RF_DCS_MINGAIN            ((-12.5)*(PWRRES))
/*BRIGHT5P*/ #define  RF_PCS_MAXGAIN            (( 63.5)*(PWRRES))
/*BRIGHT5P*/ #define  RF_PCS_MINGAIN            ((-12.5)*(PWRRES))
/*BRIGHT5P*/
/*BRIGHT5P*/ /* GSM850....................................................................*/
/*BRIGHT5P*/
/*BRIGHT5P*/ const  sL1DAGCDATA  AGC_TABLE_GSM850[1] =
/*BRIGHT5P*/ {  {  GBOUND(-11.5,-11.5 ), GC_A( 7,-11.5 ), 0x0002 },
/*BRIGHT5P*/ };
/*BRIGHT5P*/
/*BRIGHT5P*/ /* GSM900....................................................................*/
/*BRIGHT5P*/
/*BRIGHT5P*/ const  sL1DAGCDATA  AGC_TABLE_GSM900[1] =
/*BRIGHT5P*/ {  {  GBOUND(-11.5,-11.5 ), GC_A( 7,-11.5 ), 0x0002 },
/*BRIGHT5P*/ };
/*BRIGHT5P*/
/*BRIGHT5P*/ /* DCS1800...................................................................*/
/*BRIGHT5P*/
/*BRIGHT5P*/ const  sL1DAGCDATA  AGC_TABLE_DCS1800[1] =
/*BRIGHT5P*/ {  {  GBOUND(-12.5,-12.5 ), GC_A( 7,-12.5 ), 0x0002 },
/*BRIGHT5P*/ };
/*BRIGHT5P*/
/*BRIGHT5P*/ /* PCS1900...................................................................*/
/*BRIGHT5P*/
/*BRIGHT5P*/ const  sL1DAGCDATA  AGC_TABLE_PCS1900[2] =
/*BRIGHT5P*/ {  {  GBOUND(-12.5,-12.5 ), GC_A( 7,-12.5 ), 0x0002 },
/*BRIGHT5P*/ };
/*BRIGHT5P*/
/*BRIGHT5P*/ /*...........................................................................*/
/*BRIGHT5P*/
/*BRIGHT5P*/ const  sL1DGAINRANGE GAIN_RANGE_TABLE[] =
/*BRIGHT5P*/ {  {                      0,                   0    },   /*#FrequencyBand400  */
/*BRIGHT5P*/    { (int)RF_GSM850_MAXGAIN, (int)RF_GSM850_MINGAIN },   /* FrequencyBand850  */
/*BRIGHT5P*/    { (int)RF_GSM_MAXGAIN   , (int)RF_GSM_MINGAIN    },   /* FrequencyBand900  */
/*BRIGHT5P*/    { (int)RF_DCS_MAXGAIN   , (int)RF_DCS_MINGAIN    },   /* FrequencyBand1800 */
/*BRIGHT5P*/    { (int)RF_PCS_MAXGAIN   , (int)RF_PCS_MINGAIN    },   /* FrequencyBand1900 */
/*BRIGHT5P*/ };
/*BRIGHT5P*/
/*BRIGHT5P*/ const  sL1DAGCDATA *const  AGC_TABLE[] =
/*BRIGHT5P*/ {  0,                                              /*#FrequencyBand400  */
/*BRIGHT5P*/    AGC_TABLE_GSM850,                               /* FrequencyBand850  */
/*BRIGHT5P*/    AGC_TABLE_GSM900,                               /* FrequencyBand900  */
/*BRIGHT5P*/    AGC_TABLE_DCS1800,                              /* FrequencyBand1800 */
/*BRIGHT5P*/    AGC_TABLE_PCS1900,                              /* FrequencyBand1900 */
/*BRIGHT5P*/ };
/*BRIGHT5P*/
/*BRIGHT5P*/ /*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
/*BRIGHT5P*/
/*BRIGHT5P*/ int   L1D_RF_GetGainSetting( int rf_band, int arfcn, int request_gain, long *gain_setting )
/*BRIGHT5P*/ {  int   max_gain, min_gain, real_gain;
/*BRIGHT5P*/    const int*    d32ptr;
/*BRIGHT5P*/    const sL1DAGCDATA*  agcptr;
/*BRIGHT5P*/    long  setting;
/*BRIGHT5P*/    int   bit_no;
/*BRIGHT5P*/
/*BRIGHT5P*/    /* evaluate the range of available gain */
/*BRIGHT5P*/    d32ptr  = (int*)&(GAIN_RANGE_TABLE[rf_band]);
/*BRIGHT5P*/    max_gain = *d32ptr++;
/*BRIGHT5P*/    min_gain = *d32ptr;
/*BRIGHT5P*/
/*BRIGHT5P*/    /* clipping the request gain to the avialable gain */
/*BRIGHT5P*/    if( request_gain>=max_gain )
/*BRIGHT5P*/    {  request_gain = max_gain;  }
/*BRIGHT5P*/    else  if( request_gain<=min_gain )
/*BRIGHT5P*/    {  request_gain = min_gain;  }
/*BRIGHT5P*/
/*BRIGHT5P*/    /* evaluate the real gain setting */
/*BRIGHT5P*/    agcptr = AGC_TABLE[rf_band];
/*BRIGHT5P*/
/*BRIGHT5P*/    {  bit_no    = BIT_NO( request_gain, agcptr->A, GC_B );
/*BRIGHT5P*/       real_gain = REAL_GAIN( bit_no, agcptr->A, GC_B );
/*BRIGHT5P*/       setting   = agcptr->setting + (bit_no<<3);
/*BRIGHT5P*/    }
/*BRIGHT5P*/
/*BRIGHT5P*/    *gain_setting = setting;
/*BRIGHT5P*/    return( real_gain );
/*BRIGHT5P*/ }
/*BRIGHT5P*/
#endif

#if IS_RF_AERO
/*AERO*/
/*AERO*/ #define  GAIN_STEP               1
/*AERO*/
/*AERO*/ #if IS_GPRS
/*AERO*/ #define  RF_GSM_MAXGAIN         (( 56+13)*(PWRRES))
/*AERO*/ #define  RF_GSM_MINGAIN         ((-23+13)*(PWRRES))
/*AERO*/ #define  RF_DCS_MAXGAIN         (( 56+13)*(PWRRES))
/*AERO*/ #define  RF_DCS_MINGAIN         ((-23+13)*(PWRRES))
/*AERO*/ #define  RF_PCS_MAXGAIN         (( 56+13)*(PWRRES))
/*AERO*/ #define  RF_PCS_MINGAIN         ((-23+13)*(PWRRES))
/*AERO*/ #else
/*AERO*/ #define  RF_GSM_MAXGAIN         (( 56+13)*(PWRRES))
/*AERO*/ #define  RF_GSM_MINGAIN         ((-38+13)*(PWRRES))
/*AERO*/ #define  RF_DCS_MAXGAIN         (( 56+13)*(PWRRES))
/*AERO*/ #define  RF_DCS_MINGAIN         ((-38+13)*(PWRRES))
/*AERO*/ #define  RF_PCS_MAXGAIN         (( 56+13)*(PWRRES))
/*AERO*/ #define  RF_PCS_MINGAIN         ((-38+13)*(PWRRES))
/*AERO*/ #endif
/*AERO*/
/*AERO*/ #if IS_GPRS
/*AERO*/ /* GSM900....................................................................*/
/*AERO*/
/*AERO*/ const  sL1DAGCDATA  AGC_TABLE_GSM900[6] =
/*AERO*/ {
/*AERO*/    {  GBOUND( 56.0+13.0,  -7.0+13.0)-(2*PWRRES), GC_A(43,  36+13.0), 0x758021 },
/*AERO*/    {  GBOUND( 52.0+13.0, -11.0+13.0)-(2*PWRRES), GC_A(43,  32+13.0), 0x756021 },
/*AERO*/    {  GBOUND( 48.0+13.0, -15.0+13.0)-(2*PWRRES), GC_A(43,  28+13.0), 0x754021 },
/*AERO*/    {  GBOUND( 44.0+13.0, -19.0+13.0)-(2*PWRRES), GC_A(43,  24+13.0), 0x752021 },
/*AERO*/    {  GBOUND( 40.0+13.0, -23.0+13.0)-(2*PWRRES), GC_A( 0, -23+13.0), 0x750021 },
/*AERO*/ };
/*AERO*/
/*AERO*/ /* DCS1800...................................................................*/
/*AERO*/
/*AERO*/ const  sL1DAGCDATA  AGC_TABLE_DCS1800[6] =
/*AERO*/ {
/*AERO*/    {  GBOUND( 56.0+8.0,  -7.0+13.0)-(2*PWRRES), GC_A(43,  36+13.0), 0x358021 },
/*AERO*/    {  GBOUND( 52.0+8.0, -11.0+13.0)-(2*PWRRES), GC_A(43,  32+13.0), 0x356021 },
/*AERO*/    {  GBOUND( 48.0+8.0, -15.0+13.0)-(2*PWRRES), GC_A(43,  28+13.0), 0x354021 },
/*AERO*/    {  GBOUND( 44.0+8.0, -19.0+13.0)-(2*PWRRES), GC_A(43,  24+13.0), 0x352021 },
/*AERO*/    {  GBOUND( 40.0+8.0, -23.0+13.0)-(2*PWRRES), GC_A( 0, -23+13.0), 0x350021 },
/*AERO*/ };
/*AERO*/
/*AERO*/ /* PCS1900...................................................................*/
/*AERO*/
/*AERO*/ const  sL1DAGCDATA  AGC_TABLE_PCS1900[6] =
/*AERO*/ {
/*AERO*/    {  GBOUND( 56.0,  -7.0)-(2*PWRRES), GC_A(43,  36), 0x358021 },
/*AERO*/    {  GBOUND( 52.0, -11.0)-(2*PWRRES), GC_A(43,  32), 0x356021 },
/*AERO*/    {  GBOUND( 48.0, -15.0)-(2*PWRRES), GC_A(43,  28), 0x354021 },
/*AERO*/    {  GBOUND( 44.0, -19.0)-(2*PWRRES), GC_A(43,  24), 0x352021 },
/*AERO*/    {  GBOUND( 40.0, -23.0)-(2*PWRRES), GC_A( 0, -23), 0x350021 },
/*AERO*/ };
/*AERO*/
/*AERO*/ #else
/*AERO*/ /* GSM900....................................................................*/
/*AERO*/
/*AERO*/ const  sL1DAGCDATA  AGC_TABLE_GSM900[6] =
/*AERO*/ {
/*AERO*/    {  GBOUND( 36.0+13.0,  35.0+13.0), GC_A(43,  36+13.0), 0x758021 },
/*AERO*/    {  GBOUND( 32.0+13.0,  31.0+13.0), GC_A(43,  32+13.0), 0x756021 },
/*AERO*/    {  GBOUND( 28.0+13.0,  27.0+13.0), GC_A(43,  28+13.0), 0x754021 },
/*AERO*/    {  GBOUND( 24.0+13.0,  23.0+13.0), GC_A(43,  24+13.0), 0x752021 },
/*AERO*/    {  GBOUND(-23.0+13.0, -24.0+13.0), GC_A( 0, -23+13.0), 0x750021 },
/*AERO*/    {  GBOUND(-38.0+13.0, -38.0+13.0), GC_A( 0, -38+13.0), 0x700021 },
/*AERO*/ };
/*AERO*/
/*AERO*/ /* DCS1800...................................................................*/
/*AERO*/
/*AERO*/ const  sL1DAGCDATA  AGC_TABLE_DCS1800[6] =
/*AERO*/ {
/*AERO*/    {  GBOUND( 36.0+13.0,  35.0+13.0), GC_A(43,  36+13.0), 0x358021 },
/*AERO*/    {  GBOUND( 32.0+13.0,  31.0+13.0), GC_A(43,  32+13.0), 0x356021 },
/*AERO*/    {  GBOUND( 28.0+13.0,  27.0+13.0), GC_A(43,  28+13.0), 0x354021 },
/*AERO*/    {  GBOUND( 24.0+13.0,  23.0+13.0), GC_A(43,  24+13.0), 0x352021 },
/*AERO*/    {  GBOUND(-23.0+13.0, -24.0+13.0), GC_A( 0, -23+13.0), 0x350021 },
/*AERO*/    {  GBOUND(-38.0+13.0, -38.0+13.0), GC_A( 0, -38+13.0), 0x300021 },
/*AERO*/ };
/*AERO*/
/*AERO*/ /* PCS1900...................................................................*/
/*AERO*/
/*AERO*/ const  sL1DAGCDATA  AGC_TABLE_PCS1900[6] =
/*AERO*/ {
/*AERO*/    {  GBOUND( 36.0+13.0,  35.0+13.0), GC_A(43,  36+13.0), 0x358021 },
/*AERO*/    {  GBOUND( 32.0+13.0,  31.0+13.0), GC_A(43,  32+13.0), 0x356021 },
/*AERO*/    {  GBOUND( 28.0+13.0,  27.0+13.0), GC_A(43,  28+13.0), 0x354021 },
/*AERO*/    {  GBOUND( 24.0+13.0,  23.0+13.0), GC_A(43,  24+13.0), 0x352021 },
/*AERO*/    {  GBOUND(-23.0+13.0, -24.0+13.0), GC_A( 0, -23+13.0), 0x350021 },
/*AERO*/    {  GBOUND(-38.0+13.0, -38.0+13.0), GC_A( 0, -38+13.0), 0x300021 },
/*AERO*/ };
/*AERO*/
/*AERO*/ #endif
/*AERO*/ //*...........................................................................*/
/*AERO*/
/*AERO*/ const  sL1DGAINRANGE GAIN_RANGE_TABLE[] =
/*AERO*/ {  {                   0,                   0 },   /*#FrequencyBand400  */
/*AERO*/    {                   0,                   0 },   /*#FrequencyBand850  */
/*AERO*/    { (int)RF_GSM_MAXGAIN, (int)RF_GSM_MINGAIN },   /* FrequencyBand900  */
/*AERO*/    { (int)RF_DCS_MAXGAIN, (int)RF_DCS_MINGAIN },   /* FrequencyBand1800 */
/*AERO*/    { (int)RF_PCS_MAXGAIN, (int)RF_PCS_MINGAIN },   /* FrequencyBand1900 */
/*AERO*/ };
/*AERO*/
/*AERO*/ const  sL1DAGCDATA *const  AGC_TABLE[] =
/*AERO*/ {  0,                                              /*#FrequencyBand400  */
/*AERO*/    0,                                              /*#FrequencyBand850  */
/*AERO*/    AGC_TABLE_GSM900,                               /* FrequencyBand900  */
/*AERO*/    AGC_TABLE_DCS1800,                              /* FrequencyBand1800 */
/*AERO*/    AGC_TABLE_PCS1900,                              /* FrequencyBand1900 */
/*AERO*/ };
/*AERO*/
/*AERO*/ /*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
/*AERO*/
/*AERO*/ int   L1D_RF_GetGainSetting( int rf_band, int arfcn, int request_gain, long *gain_setting )
/*AERO*/ {  int   max_gain, min_gain, real_gain;
/*AERO*/    const int*    d32ptr;
/*AERO*/    const sL1DAGCDATA*  agcptr;
/*AERO*/    long  setting;
/*AERO*/    int   bit_no;
/*AERO*/
/*AERO*/ #if IS_GPRS
/*AERO*/    const static sL1DAGCDATA*  last_agcptr;
/*AERO*/ #endif
/*AERO*/
/*AERO*/    /* evaluate the range of available gain */
/*AERO*/    d32ptr  = (int*)&(GAIN_RANGE_TABLE[rf_band]);
/*AERO*/    max_gain = *d32ptr++;
/*AERO*/    min_gain = *d32ptr;
/*AERO*/
/*AERO*/    /* clipping the request gain to the avialable gain */
/*AERO*/    if( request_gain>=max_gain )
/*AERO*/    {  request_gain = max_gain;  }
/*AERO*/    else  if( request_gain<=min_gain )
/*AERO*/    {  request_gain = min_gain;  }
/*AERO*/ #if IS_GPRS
/*AERO*/    if(!IS_CONTINUOUS_RX_SLOT()) /*false: evaluate the real gain setting */
/*AERO*/    {
/*AERO*/ #endif
/*AERO*/       agcptr = AGC_TABLE[rf_band];
/*AERO*/       agcptr += 2;
/*AERO*/       if( request_gain >= agcptr->pos_gain )
/*AERO*/       {  agcptr -= 2;
/*AERO*/          if( request_gain < agcptr->pos_gain )
/*AERO*/          {  agcptr += 1;
/*AERO*/             if(request_gain < agcptr->pos_gain )
/*AERO*/             {  agcptr += 1;
/*AERO*/             }
/*AERO*/          }
/*AERO*/       }
/*AERO*/       else
/*AERO*/       {  agcptr += 1;
/*AERO*/          if( request_gain < agcptr->pos_gain )
/*AERO*/          {  agcptr += 1;
/*AERO*/ #if IS_GSM
/*AERO*/             if(request_gain < agcptr->pos_gain )
/*AERO*/             {  agcptr += 1;
/*AERO*/             }
/*AERO*/ #endif
/*AERO*/          }
/*AERO*/       }
/*AERO*/       {  bit_no    = BIT_NO( request_gain, agcptr->A, GC_B );
/*AERO*/          real_gain = REAL_GAIN( bit_no, agcptr->A, GC_B );
/*AERO*/          setting   = agcptr->setting + (bit_no<<6);
/*AERO*/       }
/*AERO*/ #if IS_GPRS
/*AERO*/       last_agcptr = agcptr;
/*AERO*/    }
/*AERO*/    else /* is_continuous_slot */
/*AERO*/    {  bit_no    = BIT_NO( request_gain, last_agcptr->A, GC_B );
/*AERO*/       real_gain = REAL_GAIN( bit_no, last_agcptr->A, GC_B );
/*AERO*/       setting   = (bit_no<<6)|0x22;
/*AERO*/    }
/*AERO*/ #endif
/*AERO*/    *gain_setting = setting;
/*AERO*/    return( real_gain );
/*AERO*/ }
/*AERO*/
#endif

#if IS_RF_AERO1PLUS
/*AERO1+*/
/*AERO1+*/ #define  GAIN_STEP               1
/*AERO1+*/ #define  PVOFS                   (-25.0)
/*AERO1+*/
/*AERO1+*/ #if IS_GPRS
/*AERO1+*/ #define  RF_GSM_MAXGAIN         (( 85)*(PWRRES))
/*AERO1+*/ #define  RF_GSM_MINGAIN         (( -2)*(PWRRES))
/*AERO1+*/ #define  RF_DCS_MAXGAIN         (( 83)*(PWRRES))
/*AERO1+*/ #define  RF_DCS_MINGAIN         ((  5)*(PWRRES))
/*AERO1+*/ #define  RF_PCS_MAXGAIN         (( 83)*(PWRRES))
/*AERO1+*/ #define  RF_PCS_MINGAIN         ((  5)*(PWRRES))
/*AERO1+*/ #else
/*AERO1+*/ #define  RF_GSM_MAXGAIN         (( 85)*(PWRRES))
/*AERO1+*/ #define  RF_GSM_MINGAIN         (( -2)*(PWRRES))
/*AERO1+*/ #define  RF_DCS_MAXGAIN         (( 83)*(PWRRES))
/*AERO1+*/ #define  RF_DCS_MINGAIN         ((  5)*(PWRRES))
/*AERO1+*/ #define  RF_PCS_MAXGAIN         (( 83)*(PWRRES))
/*AERO1+*/ #define  RF_PCS_MINGAIN         ((  5)*(PWRRES))
/*AERO1+*/ #endif
/*AERO1+*/
/*AERO1+*/ #if IS_GPRS
/*AERO1+*/ /* GSM900....................................................................*/
/*AERO1+*/
/*AERO1+*/ const  sL1DAGCDATA  AGC_TABLE_GSM900[6] =
/*AERO1+*/ {
/*AERO1+*/    {  GBOUND( 93.0+PVOFS, 30.0+PVOFS)-(2*PWRRES), GC_A(37,  67.0+PVOFS), 0x758021 },
/*AERO1+*/    {  GBOUND( 89.0+PVOFS, 26.0+PVOFS)-(2*PWRRES), GC_A(37,  63.0+PVOFS), 0x756021 },
/*AERO1+*/    {  GBOUND( 85.0+PVOFS, 22.0+PVOFS)-(2*PWRRES), GC_A(37,  59.0+PVOFS), 0x754021 },
/*AERO1+*/    {  GBOUND( 81.0+PVOFS, 18.0+PVOFS)-(2*PWRRES), GC_A(37,  55.0+PVOFS), 0x752021 },
/*AERO1+*/    {  GBOUND( 77.0+PVOFS, 14.0+PVOFS)-(2*PWRRES), GC_A( 0,  14.0+PVOFS), 0x750021 },
/*AERO1+*/ };
/*AERO1+*/
/*AERO1+*/ /* DCS1800...................................................................*/
/*AERO1+*/
/*AERO1+*/ const  sL1DAGCDATA  AGC_TABLE_DCS1800[6] =
/*AERO1+*/ {
/*AERO1+*/    {  GBOUND( 91.0+PVOFS, 28.0+PVOFS)-(2*PWRRES), GC_A(37,  65.0+PVOFS), 0x358021 },
/*AERO1+*/    {  GBOUND( 87.0+PVOFS, 24.0+PVOFS)-(2*PWRRES), GC_A(37,  61.0+PVOFS), 0x356021 },
/*AERO1+*/    {  GBOUND( 83.0+PVOFS, 20.0+PVOFS)-(2*PWRRES), GC_A(37,  57.0+PVOFS), 0x354021 },
/*AERO1+*/    {  GBOUND( 79.0+PVOFS, 16.0+PVOFS)-(2*PWRRES), GC_A(37,  53.0+PVOFS), 0x352021 },
/*AERO1+*/    {  GBOUND( 75.0+PVOFS, 12.0+PVOFS)-(2*PWRRES), GC_A( 0,  12.0+PVOFS), 0x350021 },
/*AERO1+*/ };
/*AERO1+*/
/*AERO1+*/ /* PCS1900...................................................................*/
/*AERO1+*/
/*AERO1+*/ const  sL1DAGCDATA  AGC_TABLE_PCS1900[6] =
/*AERO1+*/ {
/*AERO1+*/    {  GBOUND( 91.0+PVOFS, 28.0+PVOFS)-(2*PWRRES), GC_A(37,  65.0+PVOFS), 0x358021 },
/*AERO1+*/    {  GBOUND( 87.0+PVOFS, 24.0+PVOFS)-(2*PWRRES), GC_A(37,  61.0+PVOFS), 0x356021 },
/*AERO1+*/    {  GBOUND( 83.0+PVOFS, 20.0+PVOFS)-(2*PWRRES), GC_A(37,  57.0+PVOFS), 0x354021 },
/*AERO1+*/    {  GBOUND( 79.0+PVOFS, 16.0+PVOFS)-(2*PWRRES), GC_A(37,  53.0+PVOFS), 0x352021 },
/*AERO1+*/    {  GBOUND( 75.0+PVOFS, 12.0+PVOFS)-(2*PWRRES), GC_A( 0,  12.0+PVOFS), 0x350021 },
/*AERO1+*/ };
/*AERO1+*/
/*AERO1+*/ #else
/*AERO1+*/ /* GSM900....................................................................*/
/*AERO1+*/
/*AERO1+*/ const  sL1DAGCDATA  AGC_TABLE_GSM900[6] =
/*AERO1+*/ {
/*AERO1+*/    {  GBOUND( 67.0+PVOFS,  66.0+PVOFS), GC_A(37,  67.0+PVOFS), 0x758021 },
/*AERO1+*/    {  GBOUND( 63.0+PVOFS,  62.0+PVOFS), GC_A(37,  63.0+PVOFS), 0x756021 },
/*AERO1+*/    {  GBOUND( 59.0+PVOFS,  58.0+PVOFS), GC_A(37,  59.0+PVOFS), 0x754021 },
/*AERO1+*/    {  GBOUND( 55.0+PVOFS,  54.0+PVOFS), GC_A(37,  55.0+PVOFS), 0x752021 },
/*AERO1+*/    {  GBOUND( 14.0+PVOFS,  13.0+PVOFS), GC_A( 0,  14.0+PVOFS), 0x750021 },
/*AERO1+*/    {  GBOUND( -2.0+PVOFS,  -2.0+PVOFS), GC_A( 0,  -2.0+PVOFS), 0x700021 },
/*AERO1+*/ };
/*AERO1+*/
/*AERO1+*/ /* DCS1800...................................................................*/
/*AERO1+*/
/*AERO1+*/ const  sL1DAGCDATA  AGC_TABLE_DCS1800[6] =
/*AERO1+*/ {
/*AERO1+*/    {  GBOUND( 65.0+PVOFS,  64.0+PVOFS), GC_A(37,  65.0+PVOFS), 0x358021 },
/*AERO1+*/    {  GBOUND( 61.0+PVOFS,  60.0+PVOFS), GC_A(37,  61.0+PVOFS), 0x356021 },
/*AERO1+*/    {  GBOUND( 57.0+PVOFS,  56.0+PVOFS), GC_A(37,  57.0+PVOFS), 0x354021 },
/*AERO1+*/    {  GBOUND( 53.0+PVOFS,  52.0+PVOFS), GC_A(37,  53.0+PVOFS), 0x352021 },
/*AERO1+*/    {  GBOUND( 12.0+PVOFS,  11.0+PVOFS), GC_A( 0,  12.0+PVOFS), 0x350021 },
/*AERO1+*/    {  GBOUND(  5.0+PVOFS,   5.0+PVOFS), GC_A( 0,   5.0+PVOFS), 0x300021 },
/*AERO1+*/ };
/*AERO1+*/
/*AERO1+*/ /* PCS1900...................................................................*/
/*AERO1+*/
/*AERO1+*/ const  sL1DAGCDATA  AGC_TABLE_PCS1900[6] =
/*AERO1+*/ {
/*AERO1+*/    {  GBOUND( 65.0+PVOFS,  64.0+PVOFS), GC_A(37,  65.0+PVOFS), 0x358021 },
/*AERO1+*/    {  GBOUND( 61.0+PVOFS,  60.0+PVOFS), GC_A(37,  61.0+PVOFS), 0x356021 },
/*AERO1+*/    {  GBOUND( 57.0+PVOFS,  56.0+PVOFS), GC_A(37,  57.0+PVOFS), 0x354021 },
/*AERO1+*/    {  GBOUND( 53.0+PVOFS,  52.0+PVOFS), GC_A(37,  53.0+PVOFS), 0x352021 },
/*AERO1+*/    {  GBOUND( 12.0+PVOFS,  11.0+PVOFS), GC_A( 0,  12.0+PVOFS), 0x350021 },
/*AERO1+*/    {  GBOUND(  5.0+PVOFS,   5.0+PVOFS), GC_A( 0,   5.0+PVOFS), 0x300021 },
/*AERO1+*/ };
/*AERO1+*/
/*AERO1+*/ #endif
/*AERO1+*/ //*...........................................................................*/
/*AERO1+*/
/*AERO1+*/ const  sL1DGAINRANGE GAIN_RANGE_TABLE[] =
/*AERO1+*/ {  {                   0,                   0 },   /*#FrequencyBand400  */
/*AERO1+*/    {                   0,                   0 },   /*#FrequencyBand850  */
/*AERO1+*/    { (int)RF_GSM_MAXGAIN, (int)RF_GSM_MINGAIN },   /* FrequencyBand900  */
/*AERO1+*/    { (int)RF_DCS_MAXGAIN, (int)RF_DCS_MINGAIN },   /* FrequencyBand1800 */
/*AERO1+*/    { (int)RF_PCS_MAXGAIN, (int)RF_PCS_MINGAIN },   /* FrequencyBand1900 */
/*AERO1+*/ };
/*AERO1+*/
/*AERO1+*/ const  sL1DAGCDATA *const  AGC_TABLE[] =
/*AERO1+*/ {  0,                                              /*#FrequencyBand400  */
/*AERO1+*/    0,                                              /*#FrequencyBand850  */
/*AERO1+*/    AGC_TABLE_GSM900,                               /* FrequencyBand900  */
/*AERO1+*/    AGC_TABLE_DCS1800,                              /* FrequencyBand1800 */
/*AERO1+*/    AGC_TABLE_PCS1900,                              /* FrequencyBand1900 */
/*AERO1+*/ };
/*AERO1+*/
/*AERO1+*/ /*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
/*AERO1+*/
/*AERO1+*/ int   L1D_RF_GetGainSetting( int rf_band, int arfcn, int request_gain, long *gain_setting )
/*AERO1+*/ {  int   max_gain, min_gain, real_gain;
/*AERO1+*/    const int*    d32ptr;
/*AERO1+*/    const sL1DAGCDATA*  agcptr;
/*AERO1+*/    long  setting;
/*AERO1+*/    int   bit_no;
/*AERO1+*/
/*AERO1+*/ #if IS_GPRS
/*AERO1+*/    const static sL1DAGCDATA*  last_agcptr;
/*AERO1+*/ #endif
/*AERO1+*/
/*AERO1+*/    /* evaluate the range of available gain */
/*AERO1+*/    d32ptr  = (int*)&(GAIN_RANGE_TABLE[rf_band]);
/*AERO1+*/    max_gain = *d32ptr++;
/*AERO1+*/    min_gain = *d32ptr;
/*AERO1+*/
/*AERO1+*/    /* clipping the request gain to the avialable gain */
/*AERO1+*/    if( request_gain>=max_gain )
/*AERO1+*/    {  request_gain = max_gain;  }
/*AERO1+*/    else  if( request_gain<=min_gain )
/*AERO1+*/    {  request_gain = min_gain;  }
/*AERO1+*/ #if IS_GPRS
/*AERO1+*/    if(!IS_CONTINUOUS_RX_SLOT()) /*false: evaluate the real gain setting */
/*AERO1+*/    {
/*AERO1+*/ #endif
/*AERO1+*/       agcptr = AGC_TABLE[rf_band];
/*AERO1+*/       agcptr += 2;
/*AERO1+*/       if( request_gain >= agcptr->pos_gain )
/*AERO1+*/       {  agcptr -= 2;
/*AERO1+*/          if( request_gain < agcptr->pos_gain )
/*AERO1+*/          {  agcptr += 1;
/*AERO1+*/             if(request_gain < agcptr->pos_gain )
/*AERO1+*/             {  agcptr += 1;
/*AERO1+*/             }
/*AERO1+*/          }
/*AERO1+*/       }
/*AERO1+*/       else
/*AERO1+*/       {  agcptr += 1;
/*AERO1+*/          if( request_gain < agcptr->pos_gain )
/*AERO1+*/          {  agcptr += 1;
/*AERO1+*/ #if IS_GSM
/*AERO1+*/             if(request_gain < agcptr->pos_gain )
/*AERO1+*/             {  agcptr += 1;
/*AERO1+*/             }
/*AERO1+*/ #endif
/*AERO1+*/          }
/*AERO1+*/       }
/*AERO1+*/       {  bit_no    = BIT_NO( request_gain, agcptr->A, GC_B );
/*AERO1+*/          real_gain = REAL_GAIN( bit_no, agcptr->A, GC_B );
/*AERO1+*/          setting   = agcptr->setting + (bit_no<<6);
/*AERO1+*/       }
/*AERO1+*/ #if IS_GPRS
/*AERO1+*/       last_agcptr = agcptr;
/*AERO1+*/    }
/*AERO1+*/    else /* is_continuous_slot */
/*AERO1+*/    {  bit_no    = BIT_NO( request_gain, last_agcptr->A, GC_B );
/*AERO1+*/       real_gain = REAL_GAIN( bit_no, last_agcptr->A, GC_B );
/*AERO1+*/       setting   = (bit_no<<6)|0x22;
/*AERO1+*/    }
/*AERO1+*/ #endif
/*AERO1+*/    *gain_setting = setting;
/*AERO1+*/    return( real_gain );
/*AERO1+*/ }
/*AERO1+*/
#endif

#if IS_RF_POLARIS1
/*RFMD*/
/*RFMD*/ typedef  struct
/*RFMD*/ {
/*RFMD*/    short pos_gain;
/*RFMD*/    short setting;
/*RFMD*/    short A;
/*RFMD*/    short base;
/*RFMD*/ } sL1DAGCDATA_RFMD;
/*RFMD*/
/*RFMD*/ #define  GAIN_STEP              1 // no used
/*RFMD*/
/*RFMD*/ #define  RF_GSM_MAXGAIN         ( 110.4*(PWRRES))
/*RFMD*/ #define  RF_GSM_MINGAIN         (    -3*(PWRRES))
/*RFMD*/ #define  RF_DCS_MAXGAIN         RF_GSM_MAXGAIN
/*RFMD*/ #define  RF_DCS_MINGAIN         RF_GSM_MINGAIN
/*RFMD*/ #define  RF_PCS_MAXGAIN         RF_GSM_MAXGAIN
/*RFMD*/ #define  RF_PCS_MINGAIN         RF_GSM_MINGAIN
/*RFMD*/
/*RFMD*/
/*RFMD*/ /* GSM900....................................................................*/
/*RFMD*/ const  sL1DAGCDATA_RFMD  AGC_TABLE_GSM900[25] =
/*RFMD*/ {
/*RFMD*/    {  GBOUND( 107.375, 106.375 ), (short)0x17AB, -107.375*8, 107.375*8 },
/*RFMD*/    {  GBOUND( 101.375, 100.375 ), (short)0x17AA, -101.375*8, 101.375*8 },
/*RFMD*/    {  GBOUND(  94.375,  93.375 ), (short)0x07A9,  -94.375*8,  94.375*8 },
/*RFMD*/    {  GBOUND(  88.375,  87.375 ), (short)0x07A8,  -88.375*8,  88.375*8 },
/*RFMD*/    {  GBOUND(  82.375,  81.375 ), (short)0x07A7,  -82.375*8,  82.375*8 },
/*RFMD*/    {  GBOUND(  76.375,  75.375 ), (short)0x07A6,  -76.375*8,  76.375*8 },
/*RFMD*/    {  589                       , (short)0x47A5,  -74.400*8,  74.400*8 },
/*RFMD*/    {  587                       , (short)0x25e5,  -73.500*8,  72.875*8 },
/*RFMD*/    {  GBOUND(  70.875,  69.875 ), (short)0x05e5,  -70.875*8,  70.875*8 },
/*RFMD*/    {  GBOUND(  64.875,  63.875 ), (short)0x05e4,  -64.875*8,  64.875*8 },
/*RFMD*/    {  475                       , (short)0x15e3,  -59.875*8,  59.875*8 },
/*RFMD*/    {  GBOUND(  57.000,  56.000 ), (short)0x0564,  -57.000*8,  57.000*8 },
/*RFMD*/    {  403                       , (short)0x0563,  -51.000*8,  51.000*8 },
/*RFMD*/    {  GBOUND(  48.875,  47.875 ), (short)0xe563,  -48.875*8,  48.875*8 },
/*RFMD*/    {  338                       , (short)0x0463,  -42.875*8,  42.875*8 },
/*RFMD*/    {  292                       , (short)0xa463,  -36.750*8,  36.750*8 },
/*RFMD*/    {  278                       , (short)0x0063,  -35.375*8,  35.375*8 },
/*RFMD*/    {  231                       , (short)0xa063,  -29.250*8,  29.250*8 },
/*RFMD*/    {  208                       , (short)0x0473,  -26.625*8,  26.625*8 },
/*RFMD*/    {  GBOUND(  20.500,  19.500 ), (short)0xa473,  -20.500*8,  20.500*8 },
/*RFMD*/    {  110                       , (short)0xa472,  -14.500*8,  14.500*8 },
/*RFMD*/    {  100                       , (short)0x0072, -107.000*8,  13.125*8 },
/*RFMD*/    {  GBOUND(   7.000,   6.000 ), (short)0xa072,   -7.000*8,   7.000*8 },
/*RFMD*/    {  GBOUND(   1.000,   0.000 ), (short)0xa071,   -1.000*8,   1.000*8 },
/*RFMD*/    {  -25                       , (short)0xc070,    3.000*8,  -3.000*8 },
/*RFMD*/ };
/*RFMD*/
/*RFMD*/ /*...........................................................................*/
/*RFMD*/
/*RFMD*/ const  sL1DGAINRANGE GAIN_RANGE_TABLE[] =
/*RFMD*/ {  {                   0,                   0          },   /*#FrequencyBand400  */
/*RFMD*/    {                   0,                   0         },   /*#FrequencyBand850  */
/*RFMD*/    { (int)RF_GSM_MAXGAIN, (int)RF_GSM_MINGAIN         },   /* FrequencyBand900  */
/*RFMD*/    { (int)RF_GSM_MAXGAIN, (int)RF_GSM_MINGAIN         },   /* FrequencyBand1800 */
/*RFMD*/    { (int)RF_GSM_MAXGAIN, (int)RF_GSM_MINGAIN         },   /* FrequencyBand1900 */
/*RFMD*/ };
/*RFMD*/
/*RFMD*/ /*...........................................................................*/
/*RFMD*/
/*RFMD*/ const  sL1DAGCDATA_RFMD *const  AGC_TABLE[] =
/*RFMD*/ {  0,                                          /*#FrequencyBand400  */
/*RFMD*/    0,                                          /*#FrequencyBand850  */
/*RFMD*/    AGC_TABLE_GSM900,                           /* FrequencyBand900  */
/*RFMD*/    AGC_TABLE_GSM900,                           /* FrequencyBand1800 */
/*RFMD*/    AGC_TABLE_GSM900,                           /* FrequencyBand1900 */
/*RFMD*/ };
/*RFMD*/ /*...........................................................................*/
/*RFMD*/
/*RFMD*/ int L1D_RF_GetGainSetting( int rf_band, int arfcn, int request_gain, long *gain_setting )
/*RFMD*/ {  int   max_gain, min_gain, real_gain;
/*RFMD*/    const int*    d32ptr;
/*RFMD*/    const sL1DAGCDATA_RFMD*  agcptr;
/*RFMD*/    short  setting;
/*RFMD*/    int   bit_no;
/*RFMD*/    int left, right, middle;
/*RFMD*/
/*RFMD*/   /*transfer power gain to voltage gain*/
/*RFMD*/   request_gain = request_gain + 37*8;
/*RFMD*/
/*RFMD*/    /* evaluate the range of available gain */
/*RFMD*/    d32ptr  = (int*)&(GAIN_RANGE_TABLE[rf_band]);
/*RFMD*/    max_gain = *d32ptr++;
/*RFMD*/    min_gain = *d32ptr;
/*RFMD*/
/*RFMD*/    /* clipping the request gain to the avialable gain */
/*RFMD*/    if( request_gain>=max_gain )
/*RFMD*/    {  request_gain = max_gain;  }
/*RFMD*/    else  if( request_gain<=min_gain )
/*RFMD*/    {  request_gain = min_gain;  }
/*RFMD*/
/*RFMD*/    /* evaluate the real gain setting */
/*RFMD*/    agcptr = AGC_TABLE[rf_band];
/*RFMD*/
/*RFMD*/    /*binary search*/
/*RFMD*/    left = 0; right = 24;
/*RFMD*/    while (left <= right)
/*RFMD*/    {
/*RFMD*/       middle = (left + right)/2;
/*RFMD*/       if ( request_gain > (agcptr+middle)->pos_gain )
/*RFMD*/          right = middle - 1;
/*RFMD*/       else if ( request_gain <= (agcptr+middle)->pos_gain )
/*RFMD*/          left = middle + 1;
/*RFMD*/    }
/*RFMD*/    agcptr = (agcptr+left);
/*RFMD*/
/*RFMD*/    {
/*RFMD*/       bit_no = (request_gain + 3 + agcptr->A)/8;
/*RFMD*/       real_gain = agcptr->base + (bit_no*8);
/*RFMD*/       /*transfer voltage gain to power gain*/
/*RFMD*/       real_gain = real_gain - 37*8;
/*RFMD*/
/*RFMD*/       bit_no = 0x0f & ( ((agcptr->setting)>>12) + bit_no);
/*RFMD*/       setting = ((agcptr->setting) & 0x07ff) + (bit_no<<11);
/*RFMD*/    }
/*RFMD*/
/*RFMD*/    *gain_setting = setting;
/*RFMD*/    return( real_gain );
/*RFMD*/ }
/*RFMD*/
#endif

#if  0 /* AMR use */
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
/*SKY74117*/ #if IS_GPRS
/* under construction !*/
/* under construction !*/
/* under construction !*/
/*SKY74117*/ #endif
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif

#if IS_RF_SKY74117 /* GPRS use */
/*SKY74117*/
/*SKY74117*/ #define  LOFS    (4.000)
/*SKY74117*/ #define  HOFS    (4.000)
/*SKY74117*/
/*SKY74117*/ #define  GAIN_STEP               2
/*SKY74117*/
/*SKY74117*/ #define  RF_GSM850_MAXGAIN      (( 57+LOFS)*(PWRRES))
/*SKY74117*/ #define  RF_GSM850_MINGAIN      ((-33+LOFS)*(PWRRES))
/*SKY74117*/ #define  RF_GSM_MAXGAIN         (( 57+LOFS)*(PWRRES))
/*SKY74117*/ #define  RF_GSM_MINGAIN         ((-33+LOFS)*(PWRRES))
/*SKY74117*/ #define  RF_DCS_MAXGAIN         (( 51+HOFS)*(PWRRES))
/*SKY74117*/ #define  RF_DCS_MINGAIN         ((-33+HOFS)*(PWRRES))
/*SKY74117*/ #define  RF_PCS_MAXGAIN         (( 53+HOFS)*(PWRRES))
/*SKY74117*/ #define  RF_PCS_MINGAIN         ((-33+HOFS)*(PWRRES))
/*SKY74117*/ /* GSM850....................................................................*/
/*SKY74117*/
/*SKY74117*/ const  sL1DAGCDATA  AGC_TABLE_GSM850[13] =
/*SKY74117*/ {
/*SKY74117*/    {  GBOUND( 45.0+LOFS,  43.0+LOFS), GC_A( 0,  45.0+LOFS), 0x043C24 },
/*SKY74117*/    {  GBOUND( 33.0+LOFS,  31.0+LOFS), GC_A( 0,  33.0+LOFS), 0x043824 },
/*SKY74117*/    {  GBOUND( 27.0+LOFS,  25.0+LOFS), GC_A( 0,  27.0+LOFS), 0x043424 },
/*SKY74117*/    {  GBOUND( 25.0+LOFS,  23.0+LOFS), GC_A( 5,  25.0+LOFS), 0x043024 },
/*SKY74117*/    {  GBOUND( 21.0+LOFS,  19.0+LOFS), GC_A( 3,  21.0+LOFS), 0x042824 },
/*SKY74117*/    {  GBOUND( 17.0+LOFS,  15.0+LOFS), GC_A( 4,  17.0+LOFS), 0x042424 },
/*SKY74117*/    {  GBOUND( 15.0+LOFS,  13.0+LOFS), GC_A( 0,  15.0+LOFS), 0x042824 },
/*SKY74117*/    {  GBOUND(  9.0+LOFS,   7.0+LOFS), GC_A( 0,   9.0+LOFS), 0x042424 },
/*SKY74117*/    {  GBOUND(  5.0+LOFS,   3.0+LOFS), GC_A( 4,   5.0+LOFS), 0x042024 },
/*SKY74117*/    {  GBOUND( -9.0+LOFS, -11.0+LOFS), GC_A( 0,  -9.0+LOFS), 0x040814 },
/*SKY74117*/    {  GBOUND(-15.0+LOFS, -17.0+LOFS), GC_A( 0, -15.0+LOFS), 0x040414 },
/*SKY74117*/    {  GBOUND(-27.0+LOFS, -29.0+LOFS), GC_A( 0, -27.0+LOFS), 0x040014 },
/*SKY74117*/    {  GBOUND(-33.0+LOFS, -33.0+LOFS), GC_A( 0, -33.0+LOFS), 0x040004 },
/*SKY74117*/ };
/*SKY74117*/
/*SKY74117*/ /* GSM900....................................................................*/
/*SKY74117*/
/*SKY74117*/ const  sL1DAGCDATA  AGC_TABLE_GSM900[13] =
/*SKY74117*/ {
/*SKY74117*/    {  GBOUND( 45.0+LOFS,  43.0+LOFS), GC_A( 0,  45.0+LOFS), 0x053C24 },
/*SKY74117*/    {  GBOUND( 33.0+LOFS,  31.0+LOFS), GC_A( 0,  33.0+LOFS), 0x053824 },
/*SKY74117*/    {  GBOUND( 27.0+LOFS,  25.0+LOFS), GC_A( 0,  27.0+LOFS), 0x053424 },
/*SKY74117*/    {  GBOUND( 25.0+LOFS,  23.0+LOFS), GC_A( 5,  25.0+LOFS), 0x053024 },
/*SKY74117*/    {  GBOUND( 21.0+LOFS,  19.0+LOFS), GC_A( 3,  21.0+LOFS), 0x052824 },
/*SKY74117*/    {  GBOUND( 17.0+LOFS,  15.0+LOFS), GC_A( 4,  17.0+LOFS), 0x052424 },
/*SKY74117*/    {  GBOUND( 15.0+LOFS,  13.0+LOFS), GC_A( 0,  15.0+LOFS), 0x052824 },
/*SKY74117*/    {  GBOUND(  9.0+LOFS,   7.0+LOFS), GC_A( 0,   9.0+LOFS), 0x052424 },
/*SKY74117*/    {  GBOUND(  5.0+LOFS,   3.0+LOFS), GC_A( 4,   5.0+LOFS), 0x052024 },
/*SKY74117*/    {  GBOUND( -9.0+LOFS, -11.0+LOFS), GC_A( 0,  -9.0+LOFS), 0x050814 },
/*SKY74117*/    {  GBOUND(-15.0+LOFS, -17.0+LOFS), GC_A( 0, -15.0+LOFS), 0x050414 },
/*SKY74117*/    {  GBOUND(-27.0+LOFS, -29.0+LOFS), GC_A( 0, -27.0+LOFS), 0x050014 },
/*SKY74117*/    {  GBOUND(-33.0+LOFS, -33.0+LOFS), GC_A( 0, -33.0+LOFS), 0x050004 },
/*SKY74117*/ };
/*SKY74117*/
/*SKY74117*/ /* DCS1800...................................................................*/
/*SKY74117*/
/*SKY74117*/ const  sL1DAGCDATA  AGC_TABLE_DCS1800[13] =
/*SKY74117*/ {
/*SKY74117*/    {  GBOUND( 33.0+HOFS,  31.0+HOFS), GC_A( 0,  33.0+HOFS), 0x063824 },
/*SKY74117*/    {  GBOUND( 27.0+HOFS,  25.0+HOFS), GC_A( 0,  27.0+HOFS), 0x063424 },
/*SKY74117*/    {  GBOUND( 25.0+HOFS,  23.0+HOFS), GC_A( 5,  25.0+HOFS), 0x063024 },
/*SKY74117*/    {  GBOUND(  9.0+HOFS,   7.0+HOFS), GC_A( 0,   9.0+HOFS), 0x062424 },
/*SKY74117*/    {  GBOUND(  7.0+HOFS,   5.0+HOFS), GC_A( 5,   7.0+HOFS), 0x062024 },
/*SKY74117*/    {  GBOUND( -3.0+HOFS,  -5.0+HOFS), GC_A( 0,  -3.0+HOFS), 0x060824 },
/*SKY74117*/    {  GBOUND( -7.0+HOFS,  -9.0+HOFS), GC_A( 1,  -7.0+HOFS), 0x060424 },
/*SKY74117*/    {  GBOUND( -9.0+HOFS, -11.0+HOFS), GC_A( 0,  -9.0+HOFS), 0x060814 },
/*SKY74117*/    {  GBOUND(-27.0+HOFS, -29.0+HOFS), GC_A( 0, -27.0+HOFS), 0x060014 },
/*SKY74117*/    {  GBOUND(-33.0+HOFS, -33.0+HOFS), GC_A( 0, -33.0+HOFS), 0x060004 },
/*SKY74117*/    {  GBOUND(-33.0+HOFS, -33.0+HOFS), GC_A( 0, -33.0+HOFS), 0x060004 },
/*SKY74117*/    {  GBOUND(-33.0+HOFS, -33.0+HOFS), GC_A( 0, -33.0+HOFS), 0x060004 },
/*SKY74117*/    {  GBOUND(-33.0+HOFS, -33.0+HOFS), GC_A( 0, -33.0+HOFS), 0x060004 },
/*SKY74117*/ };
/*SKY74117*/
/*SKY74117*/ /* PCS1900...................................................................*/
/*SKY74117*/
/*SKY74117*/ const  sL1DAGCDATA  AGC_TABLE_PCS1900[13] =
/*SKY74117*/ {
/*SKY74117*/    {  GBOUND( 33.0+HOFS,  31.0+HOFS), GC_A( 0,  33.0+HOFS), 0x073824 },
/*SKY74117*/    {  GBOUND( 27.0+HOFS,  25.0+HOFS), GC_A( 0,  27.0+HOFS), 0x073424 },
/*SKY74117*/    {  GBOUND( 25.0+HOFS,  23.0+HOFS), GC_A( 5,  25.0+HOFS), 0x073024 },
/*SKY74117*/    {  GBOUND( 17.0+HOFS,  15.0+HOFS), GC_A( 1,  17.0+HOFS), 0x072824 },
/*SKY74117*/    {  GBOUND(  9.0+HOFS,   7.0+HOFS), GC_A( 0,   9.0+HOFS), 0x072424 },
/*SKY74117*/    {  GBOUND(  7.0+HOFS,   5.0+HOFS), GC_A( 5,   7.0+HOFS), 0x072024 },
/*SKY74117*/    {  GBOUND( -3.0+HOFS,  -5.0+HOFS), GC_A( 0,  -3.0+HOFS), 0x070824 },
/*SKY74117*/    {  GBOUND( -5.0+HOFS,  -7.0+HOFS), GC_A( 2,  -5.0+HOFS), 0x070424 },
/*SKY74117*/    {  GBOUND( -9.0+HOFS, -11.0+HOFS), GC_A( 0,  -9.0+HOFS), 0x070814 },
/*SKY74117*/    {  GBOUND(-27.0+HOFS, -29.0+HOFS), GC_A( 0, -27.0+HOFS), 0x070014 },
/*SKY74117*/    {  GBOUND(-33.0+HOFS, -33.0+HOFS), GC_A( 0, -33.0+HOFS), 0x070004 },
/*SKY74117*/    {  GBOUND(-33.0+HOFS, -33.0+HOFS), GC_A( 0, -33.0+HOFS), 0x070004 },
/*SKY74117*/    {  GBOUND(-33.0+HOFS, -33.0+HOFS), GC_A( 0, -33.0+HOFS), 0x070004 },
/*SKY74117*/ };
/*SKY74117*/
/*SKY74117*/ //*...........................................................................*/
/*SKY74117*/
/*SKY74117*/ const  sL1DGAINRANGE GAIN_RANGE_TABLE[] =
/*SKY74117*/ {  { 0                     , 0                         },   /*#FrequencyBand400  */
/*SKY74117*/    { (int)RF_GSM850_MAXGAIN, (int)RF_GSM850_MINGAIN    },   /* FrequencyBand850  */
/*SKY74117*/    { (int)RF_GSM_MAXGAIN   , (int)RF_GSM_MINGAIN       },   /* FrequencyBand900  */
/*SKY74117*/    { (int)RF_DCS_MAXGAIN   , (int)RF_DCS_MINGAIN       },   /* FrequencyBand1800 */
/*SKY74117*/    { (int)RF_PCS_MAXGAIN   , (int)RF_PCS_MINGAIN       },   /* FrequencyBand1900 */
/*SKY74117*/ };
/*SKY74117*/
/*SKY74117*/ const  sL1DAGCDATA *const  AGC_TABLE[] =
/*SKY74117*/ {  0,                                              /*#FrequencyBand400  */
/*SKY74117*/    AGC_TABLE_GSM850,                               /* FrequencyBand850  */
/*SKY74117*/    AGC_TABLE_GSM900,                               /* FrequencyBand900  */
/*SKY74117*/    AGC_TABLE_DCS1800,                              /* FrequencyBand1800 */
/*SKY74117*/    AGC_TABLE_PCS1900,                              /* FrequencyBand1900 */
/*SKY74117*/ };
/*SKY74117*/
/*SKY74117*/ /*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
/*SKY74117*/
/*SKY74117*/ int   L1D_RF_GetGainSetting( int rf_band, int arfcn, int request_gain, long *gain_setting )
/*SKY74117*/ {  int   max_gain, min_gain, real_gain;
/*SKY74117*/    const int*    d32ptr;
/*SKY74117*/    const sL1DAGCDATA*  agcptr;
/*SKY74117*/    long  setting;
/*SKY74117*/    int   bit_no;
/*SKY74117*/    int left, right, middle;
/*SKY74117*/
/*SKY74117*/    /* evaluate the range of available gain */
/*SKY74117*/    d32ptr  = (int*)&(GAIN_RANGE_TABLE[rf_band]);
/*SKY74117*/    max_gain = *d32ptr++;
/*SKY74117*/    min_gain = *d32ptr;
/*SKY74117*/
/*SKY74117*/    /* clipping the request gain to the avialable gain */
/*SKY74117*/    if( request_gain>=max_gain )
/*SKY74117*/    {  request_gain = max_gain;  }
/*SKY74117*/    else  if( request_gain<=min_gain )
/*SKY74117*/    {  request_gain = min_gain;  }
/*SKY74117*/
/*SKY74117*/    /*binary search*/
/*SKY74117*/    agcptr = AGC_TABLE[rf_band];
/*SKY74117*/    left = 0; right = 12;
/*SKY74117*/    while (left <= right)
/*SKY74117*/    {  middle = (left + right)/2;
/*SKY74117*/       if ( request_gain >= (agcptr+middle)->pos_gain )
/*SKY74117*/          right = middle - 1;
/*SKY74117*/       else if ( request_gain < (agcptr+middle)->pos_gain )
/*SKY74117*/          left = middle + 1;
/*SKY74117*/    }
/*SKY74117*/    agcptr = (agcptr+left);
/*SKY74117*/    {  bit_no    = BIT_NO( request_gain, agcptr->A, GC_B );
/*SKY74117*/       real_gain = REAL_GAIN( bit_no, agcptr->A, GC_B );
/*SKY74117*/       setting   = agcptr->setting + (bit_no<<6);
/*SKY74117*/    }
/*SKY74117*/
/*SKY74117*/ #if IS_GPRS
/*SKY74117*/    if(IS_CONTINUOUS_RX_SLOT())
/*SKY74117*/    {  setting |= 0x000008L;
/*SKY74117*/    }
/*SKY74117*/ #endif
/*SKY74117*/    *gain_setting = setting;
/*SKY74117*/    return( real_gain );
/*SKY74117*/ }
#endif

#if IS_RF_SKY74400
/*SKY74400*/
/*SKY74400*/ #define  LOFS                   (-10.000)
/*SKY74400*/ #define  HOFS                   (-10.000)
/*SKY74400*/
/*SKY74400*/ #define  GAIN_STEP              2
/*SKY74400*/
/*SKY74400*/ #define  RF_GSM850_MAXGAIN      (( 66+LOFS)*(PWRRES))
/*SKY74400*/ #define  RF_GSM850_MINGAIN      ((-24+LOFS)*(PWRRES))
/*SKY74400*/ #define  RF_GSM_MAXGAIN         (( 66+LOFS)*(PWRRES))
/*SKY74400*/ #define  RF_GSM_MINGAIN         ((-24+LOFS)*(PWRRES))
/*SKY74400*/ #define  RF_DCS_MAXGAIN         (( 64+HOFS)*(PWRRES))
/*SKY74400*/ #define  RF_DCS_MINGAIN         ((-26+HOFS)*(PWRRES))
/*SKY74400*/ #define  RF_PCS_MAXGAIN         (( 64+HOFS)*(PWRRES))
/*SKY74400*/ #define  RF_PCS_MINGAIN         ((-26+HOFS)*(PWRRES))
/*SKY74400*/ /* GSM850....................................................................*/
/*SKY74400*/
/*SKY74400*/ const  sL1DAGCDATA  AGC_TABLE_GSM850[13] =
/*SKY74400*/ {
/*SKY74400*/    {  GBOUND( 54.0+LOFS,  52.0+LOFS), GC_A( 0,  54.0+LOFS), 0x043C24 },
/*SKY74400*/    {  GBOUND( 42.0+LOFS,  40.0+LOFS), GC_A( 0,  42.0+LOFS), 0x043824 },
/*SKY74400*/    {  GBOUND( 36.0+LOFS,  34.0+LOFS), GC_A( 0,  36.0+LOFS), 0x043424 },
/*SKY74400*/    {  GBOUND( 34.0+LOFS,  32.0+LOFS), GC_A( 5,  34.0+LOFS), 0x043024 },
/*SKY74400*/    {  GBOUND( 30.0+LOFS,  28.0+LOFS), GC_A( 3,  30.0+LOFS), 0x042824 },
/*SKY74400*/    {  GBOUND( 26.0+LOFS,  24.0+LOFS), GC_A( 4,  26.0+LOFS), 0x042424 },
/*SKY74400*/    {  GBOUND( 24.0+LOFS,  22.0+LOFS), GC_A( 0,  24.0+LOFS), 0x042824 },
/*SKY74400*/    {  GBOUND( 18.0+LOFS,  16.0+LOFS), GC_A( 0,  18.0+LOFS), 0x042424 },
/*SKY74400*/    {  GBOUND( 14.0+LOFS,  12.0+LOFS), GC_A( 4,  14.0+LOFS), 0x042024 },
/*SKY74400*/    {  GBOUND(  0.0+LOFS,  -2.0+LOFS), GC_A( 0,   0.0+LOFS), 0x040814 },
/*SKY74400*/    {  GBOUND( -6.0+LOFS,  -8.0+LOFS), GC_A( 0,  -6.0+LOFS), 0x040414 },
/*SKY74400*/    {  GBOUND(-18.0+LOFS, -20.0+LOFS), GC_A( 0, -18.0+LOFS), 0x040014 },
/*SKY74400*/    {  GBOUND(-24.0+LOFS, -24.0+LOFS), GC_A( 0, -24.0+LOFS), 0x040004 },
/*SKY74400*/ };
/*SKY74400*/
/*SKY74400*/ /* GSM900....................................................................*/
/*SKY74400*/
/*SKY74400*/ const  sL1DAGCDATA  AGC_TABLE_GSM900[13] =
/*SKY74400*/ {
/*SKY74400*/    {  GBOUND( 54.0+LOFS,  52.0+LOFS), GC_A( 0,  54.0+LOFS), 0x053C24 },
/*SKY74400*/    {  GBOUND( 42.0+LOFS,  40.0+LOFS), GC_A( 0,  42.0+LOFS), 0x053824 },
/*SKY74400*/    {  GBOUND( 36.0+LOFS,  34.0+LOFS), GC_A( 0,  36.0+LOFS), 0x053424 },
/*SKY74400*/    {  GBOUND( 34.0+LOFS,  32.0+LOFS), GC_A( 5,  34.0+LOFS), 0x053024 },
/*SKY74400*/    {  GBOUND( 30.0+LOFS,  28.0+LOFS), GC_A( 3,  30.0+LOFS), 0x052824 },
/*SKY74400*/    {  GBOUND( 26.0+LOFS,  24.0+LOFS), GC_A( 4,  26.0+LOFS), 0x052424 },
/*SKY74400*/    {  GBOUND( 24.0+LOFS,  22.0+LOFS), GC_A( 0,  24.0+LOFS), 0x052824 },
/*SKY74400*/    {  GBOUND( 18.0+LOFS,  16.0+LOFS), GC_A( 0,  18.0+LOFS), 0x052424 },
/*SKY74400*/    {  GBOUND( 14.0+LOFS,  12.0+LOFS), GC_A( 4,  14.0+LOFS), 0x052024 },
/*SKY74400*/    {  GBOUND(  0.0+LOFS,  -2.0+LOFS), GC_A( 0,   0.0+LOFS), 0x050814 },
/*SKY74400*/    {  GBOUND( -6.0+LOFS,  -8.0+LOFS), GC_A( 0,  -6.0+LOFS), 0x050414 },
/*SKY74400*/    {  GBOUND(-18.0+LOFS, -20.0+LOFS), GC_A( 0, -18.0+LOFS), 0x050014 },
/*SKY74400*/    {  GBOUND(-24.0+LOFS, -24.0+LOFS), GC_A( 0, -24.0+LOFS), 0x050004 },
/*SKY74400*/ };
/*SKY74400*/
/*SKY74400*/ /* DCS1800...................................................................*/
/*SKY74400*/
/*SKY74400*/ const  sL1DAGCDATA  AGC_TABLE_DCS1800[13] =
/*SKY74400*/ {
/*SKY74400*/    {  GBOUND( 42.0+HOFS,  40.0+HOFS), GC_A( 0,  42.0+HOFS), 0x063824 },
/*SKY74400*/    {  GBOUND( 36.0+HOFS,  34.0+HOFS), GC_A( 0,  36.0+HOFS), 0x063424 },
/*SKY74400*/    {  GBOUND( 34.0+HOFS,  32.0+HOFS), GC_A( 5,  34.0+HOFS), 0x063024 },
/*SKY74400*/    {  GBOUND( 18.0+HOFS,  16.0+HOFS), GC_A( 0,  18.0+HOFS), 0x062424 },
/*SKY74400*/    {  GBOUND( 16.0+HOFS,  14.0+HOFS), GC_A( 5,  16.0+HOFS), 0x062024 },
/*SKY74400*/    {  GBOUND(  6.0+HOFS,   4.0+HOFS), GC_A( 0,   6.0+HOFS), 0x060824 },
/*SKY74400*/    {  GBOUND(  2.0+HOFS,   0.0+HOFS), GC_A( 1,   2.0+HOFS), 0x060424 },
/*SKY74400*/    {  GBOUND(  0.0+HOFS,  -2.0+HOFS), GC_A( 0,   0.0+HOFS), 0x060814 },
/*SKY74400*/    {  GBOUND(-18.0+HOFS, -20.0+HOFS), GC_A( 0, -18.0+HOFS), 0x060014 },
/*SKY74400*/    {  GBOUND(-24.0+HOFS, -24.0+HOFS), GC_A( 0, -24.0+HOFS), 0x060004 },
/*SKY74400*/    {  GBOUND(-24.0+HOFS, -24.0+HOFS), GC_A( 0, -24.0+HOFS), 0x060004 },
/*SKY74400*/    {  GBOUND(-24.0+HOFS, -24.0+HOFS), GC_A( 0, -24.0+HOFS), 0x060004 },
/*SKY74400*/    {  GBOUND(-24.0+HOFS, -24.0+HOFS), GC_A( 0, -24.0+HOFS), 0x060004 },
/*SKY74400*/ };
/*SKY74400*/
/*SKY74400*/ /* PCS1900...................................................................*/
/*SKY74400*/
/*SKY74400*/ const  sL1DAGCDATA  AGC_TABLE_PCS1900[13] =
/*SKY74400*/ {
/*SKY74400*/    {  GBOUND( 42.0+HOFS,  40.0+HOFS), GC_A( 0,  42.0+HOFS), 0x073824 },
/*SKY74400*/    {  GBOUND( 36.0+HOFS,  34.0+HOFS), GC_A( 0,  36.0+HOFS), 0x073424 },
/*SKY74400*/    {  GBOUND( 34.0+HOFS,  32.0+HOFS), GC_A( 5,  34.0+HOFS), 0x073024 },
/*SKY74400*/    {  GBOUND( 18.0+HOFS,  16.0+HOFS), GC_A( 1,  18.0+HOFS), 0x072424 },
/*SKY74400*/    {  GBOUND( 16.0+HOFS,  14.0+HOFS), GC_A( 0,  16.0+HOFS), 0x072024 },
/*SKY74400*/    {  GBOUND(  6.0+HOFS,   4.0+HOFS), GC_A( 5,   6.0+HOFS), 0x070824 },
/*SKY74400*/    {  GBOUND(  2.0+HOFS,   0.0+HOFS), GC_A( 0,   2.0+HOFS), 0x070424 },
/*SKY74400*/    {  GBOUND(  0.0+HOFS,  -2.0+HOFS), GC_A( 2,   0.0+HOFS), 0x070814 },
/*SKY74400*/    {  GBOUND(-18.0+HOFS, -20.0+HOFS), GC_A( 0, -18.0+HOFS), 0x070014 },
/*SKY74400*/    {  GBOUND(-24.0+HOFS, -24.0+HOFS), GC_A( 0, -24.0+HOFS), 0x070004 },
/*SKY74400*/    {  GBOUND(-24.0+HOFS, -24.0+HOFS), GC_A( 0, -24.0+HOFS), 0x070004 },
/*SKY74400*/    {  GBOUND(-24.0+HOFS, -24.0+HOFS), GC_A( 0, -24.0+HOFS), 0x070004 },
/*SKY74400*/    {  GBOUND(-24.0+HOFS, -24.0+HOFS), GC_A( 0, -24.0+HOFS), 0x070004 },
/*SKY74400*/ };
/*SKY74400*/
/*SKY74400*/ //*...........................................................................*/
/*SKY74400*/
/*SKY74400*/ const  sL1DGAINRANGE GAIN_RANGE_TABLE[] =
/*SKY74400*/ {  { 0                     , 0                         },   /*#FrequencyBand400  */
/*SKY74400*/    { (int)RF_GSM850_MAXGAIN, (int)RF_GSM850_MINGAIN    },   /* FrequencyBand850  */
/*SKY74400*/    { (int)RF_GSM_MAXGAIN   , (int)RF_GSM_MINGAIN       },   /* FrequencyBand900  */
/*SKY74400*/    { (int)RF_DCS_MAXGAIN   , (int)RF_DCS_MINGAIN       },   /* FrequencyBand1800 */
/*SKY74400*/    { (int)RF_PCS_MAXGAIN   , (int)RF_PCS_MINGAIN       },   /* FrequencyBand1900 */
/*SKY74400*/ };
/*SKY74400*/
/*SKY74400*/ const  sL1DAGCDATA *const  AGC_TABLE[] =
/*SKY74400*/ {  0,                                              /*#FrequencyBand400  */
/*SKY74400*/    AGC_TABLE_GSM850,                               /* FrequencyBand850  */
/*SKY74400*/    AGC_TABLE_GSM900,                               /* FrequencyBand900  */
/*SKY74400*/    AGC_TABLE_DCS1800,                              /* FrequencyBand1800 */
/*SKY74400*/    AGC_TABLE_PCS1900,                              /* FrequencyBand1900 */
/*SKY74400*/ };
/*SKY74400*/
/*SKY74400*/ /*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
/*SKY74400*/
/*SKY74400*/ int   L1D_RF_GetGainSetting( int rf_band, int arfcn, int request_gain, long *gain_setting )
/*SKY74400*/ {  int   max_gain, min_gain, real_gain;
/*SKY74400*/    const int*    d32ptr;
/*SKY74400*/    const sL1DAGCDATA*  agcptr;
/*SKY74400*/    long  setting;
/*SKY74400*/    int   bit_no;
/*SKY74400*/    int left, right, middle;
/*SKY74400*/
/*SKY74400*/    /* evaluate the range of available gain */
/*SKY74400*/    d32ptr  = (int*)&(GAIN_RANGE_TABLE[rf_band]);
/*SKY74400*/    max_gain = *d32ptr++;
/*SKY74400*/    min_gain = *d32ptr;
/*SKY74400*/
/*SKY74400*/    /* clipping the request gain to the avialable gain */
/*SKY74400*/    if( request_gain>=max_gain )
/*SKY74400*/    {  request_gain = max_gain;  }
/*SKY74400*/    else  if( request_gain<=min_gain )
/*SKY74400*/    {  request_gain = min_gain;  }
/*SKY74400*/
/*SKY74400*/    /*binary search*/
/*SKY74400*/    agcptr = AGC_TABLE[rf_band];
/*SKY74400*/    left = 0; right = 12;
/*SKY74400*/    while (left <= right)
/*SKY74400*/    {  middle = (left + right)/2;
/*SKY74400*/       if ( request_gain >= (agcptr+middle)->pos_gain )
/*SKY74400*/          right = middle - 1;
/*SKY74400*/       else if ( request_gain < (agcptr+middle)->pos_gain )
/*SKY74400*/          left = middle + 1;
/*SKY74400*/    }
/*SKY74400*/    agcptr = (agcptr+left);
/*SKY74400*/    {  bit_no    = BIT_NO( request_gain, agcptr->A, GC_B );
/*SKY74400*/       real_gain = REAL_GAIN( bit_no, agcptr->A, GC_B );
/*SKY74400*/       setting   = agcptr->setting + (bit_no<<6);
/*SKY74400*/    }
/*SKY74400*/
/*SKY74400*/ #if IS_GPRS
/*SKY74400*/    if(IS_CONTINUOUS_RX_SLOT())
/*SKY74400*/    {  setting |= 0x000008L;
/*SKY74400*/    }
/*SKY74400*/ #endif
/*SKY74400*/    *gain_setting = setting;
/*SKY74400*/    return( real_gain );
/*SKY74400*/ }
#endif

#if IS_RF_MT6119
/*MT6119*/
/*MT6119*/ #define  GAIN_STEP               2
/*MT6119*/
/*MT6119*/ #define  RF_GSM_MAXGAIN         (  68.0*(PWRRES))
/*MT6119*/ #define  RF_GSM_MINGAIN         ( -30.0*(PWRRES))
/*MT6119*/ #define  RF_DCS_MAXGAIN         (  68.0*(PWRRES))
/*MT6119*/ #define  RF_DCS_MINGAIN         ( -30.0*(PWRRES))
/*MT6119*/ #define  RF_PCS_MAXGAIN         (  68.0*(PWRRES))
/*MT6119*/ #define  RF_PCS_MINGAIN         ( -30.0*(PWRRES))
/*MT6119*/
/*MT6119*/ /* GSM900....................................................................*/
/*MT6119*/
/*MT6119*/ const  sL1DAGCDATA  AGC_TABLE_GSM900[2] =
/*MT6119*/ {  {  GBOUND(-10.0,-12.0 ), GC_A(  0,-10.0 ), 0x0681A },
/*MT6119*/    {  GBOUND(-30.0,-30.0 ), GC_A(  9,-30.0 ), 0x06812 },
/*MT6119*/ };
/*MT6119*/
/*MT6119*/ /* DCS1800...................................................................*/
/*MT6119*/
/*MT6119*/ const  sL1DAGCDATA  AGC_TABLE_DCS1800[2] =
/*MT6119*/ {  {  GBOUND(-10.0,-12.0 ), GC_A(  0,-10.0 ), 0x0701A },
/*MT6119*/    {  GBOUND(-30.0,-30.0 ), GC_A(  9,-30.0 ), 0x07012 },
/*MT6119*/ };
/*MT6119*/
/*MT6119*/ /* PCS1900...................................................................*/
/*MT6119*/
/*MT6119*/ const  sL1DAGCDATA  AGC_TABLE_PCS1900[2] =
/*MT6119*/ {  {  GBOUND(-10.0,-12.0 ), GC_A(  0,-10.0 ), 0x0781A },
/*MT6119*/    {  GBOUND(-30.0,-30.0 ), GC_A(  9,-30.0 ), 0x07812 },
/*MT6119*/ };
/*MT6119*/
/*MT6119*/ /*...........................................................................*/
/*MT6119*/
/*MT6119*/ const  sL1DGAINRANGE GAIN_RANGE_TABLE[] =
/*MT6119*/ {  {                   0,                   0 },   /*#FrequencyBand400  */
/*MT6119*/    {                   0,                   0 },   /*#FrequencyBand850  */
/*MT6119*/    { (int)RF_GSM_MAXGAIN, (int)RF_GSM_MINGAIN },   /* FrequencyBand900  */
/*MT6119*/    { (int)RF_DCS_MAXGAIN, (int)RF_DCS_MINGAIN },   /* FrequencyBand1800 */
/*MT6119*/    { (int)RF_PCS_MAXGAIN, (int)RF_PCS_MINGAIN },   /* FrequencyBand1900 */
/*MT6119*/ };
/*MT6119*/
/*MT6119*/ const  sL1DAGCDATA *const  AGC_TABLE[] =
/*MT6119*/ {  0,                                              /*#FrequencyBand400  */
/*MT6119*/    0,                                              /*#FrequencyBand850  */
/*MT6119*/    AGC_TABLE_GSM900,                               /* FrequencyBand900  */
/*MT6119*/    AGC_TABLE_DCS1800,                              /* FrequencyBand1800 */
/*MT6119*/    AGC_TABLE_PCS1900,                              /* FrequencyBand1900 */
/*MT6119*/ };
/*MT6119*/
/*MT6119*/ /*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
/*MT6119*/
/*MT6119*/ int   L1D_RF_GetGainSetting( int rf_band, int arfcn, int request_gain, long *gain_setting )
/*MT6119*/ {  int   max_gain, min_gain, real_gain;
/*MT6119*/    const int*    d32ptr;
/*MT6119*/    const sL1DAGCDATA*  agcptr;
/*MT6119*/    long  setting;
/*MT6119*/    int   bit_no;
/*MT6119*/
/*MT6119*/    /* evaluate the range of available gain */
/*MT6119*/    d32ptr  = (int*)&(GAIN_RANGE_TABLE[rf_band]);
/*MT6119*/    max_gain = *d32ptr++;
/*MT6119*/    min_gain = *d32ptr;
/*MT6119*/
/*MT6119*/    /* clipping the request gain to the avialable gain */
/*MT6119*/    if( request_gain>=max_gain )
/*MT6119*/    {  request_gain = max_gain;  }
/*MT6119*/    else  if( request_gain<=min_gain )
/*MT6119*/    {  request_gain = min_gain;  }
/*MT6119*/
/*MT6119*/    /* evaluate the real gain setting */
/*MT6119*/    agcptr = AGC_TABLE[rf_band];
/*MT6119*/    if( request_gain < agcptr->pos_gain )
/*MT6119*/    {  agcptr++;
/*MT6119*/    }
/*MT6119*/    {  bit_no    = BIT_NO( request_gain, agcptr->A, GC_B );
/*MT6119*/       real_gain = REAL_GAIN( bit_no, agcptr->A, GC_B );
/*MT6119*/       setting   = agcptr->setting + (bit_no<<5);
/*MT6119*/    }
/*MT6119*/
/*MT6119*/    *gain_setting = setting;
/*MT6119*/    return( real_gain );
/*MT6119*/ }
/*MT6119*/
#endif

#if IS_RF_MT6119C
/*MT6119C*/
/*MT6119C*/ #define  GAIN_STEP               2
/*MT6119C*/
/*MT6119C*/ #define  RF_GSM_MAXGAIN         (  72.0*(PWRRES))
/*MT6119C*/ #define  RF_GSM_MINGAIN         ( -26.0*(PWRRES))
/*MT6119C*/ #define  RF_DCS_MAXGAIN         (  70.0*(PWRRES))
/*MT6119C*/ #define  RF_DCS_MINGAIN         ( -28.0*(PWRRES))
/*MT6119C*/ #define  RF_PCS_MAXGAIN         (  70.0*(PWRRES))
/*MT6119C*/ #define  RF_PCS_MINGAIN         ( -28.0*(PWRRES))
/*MT6119C*/
/*MT6119C*/ /* GSM900....................................................................*/
/*MT6119C*/
/*MT6119C*/ const  sL1DAGCDATA  AGC_TABLE_GSM900[3] =
/*MT6119C*/ {  {  GBOUND( 34.0, 32.0 ), GC_A( 11, 34.0 ), 0x12681A },
/*MT6119C*/    {  GBOUND( -6.0, -8.0 ), GC_A( 32, -6.0 ), 0x00681A },
/*MT6119C*/    {  GBOUND(-26.0,-26.0 ), GC_A(  0,-26.0 ), 0x006812 },
/*MT6119C*/ };
/*MT6119C*/
/*MT6119C*/ /* DCS1800...................................................................*/
/*MT6119C*/
/*MT6119C*/ const  sL1DAGCDATA  AGC_TABLE_DCS1800[3] =
/*MT6119C*/ {  {  GBOUND( 32.0, 30.0 ), GC_A( 11, 32.0 ), 0x12701A },
/*MT6119C*/    {  GBOUND( -8.0,-10.0 ), GC_A( 32, -8.0 ), 0x00701A },
/*MT6119C*/    {  GBOUND(-28.0,-28.0 ), GC_A(  0,-28.0 ), 0x007012 },
/*MT6119C*/ };
/*MT6119C*/
/*MT6119C*/ /* PCS1900...................................................................*/
/*MT6119C*/
/*MT6119C*/ const  sL1DAGCDATA  AGC_TABLE_PCS1900[3] =
/*MT6119C*/ {  {  GBOUND( 32.0, 30.0 ), GC_A( 11, 32.0 ), 0x12781A },
/*MT6119C*/    {  GBOUND( -8.0,-10.0 ), GC_A( 32, -8.0 ), 0x00781A },
/*MT6119C*/    {  GBOUND(-28.0,-28.0 ), GC_A(  0,-28.0 ), 0x007812 },
/*MT6119C*/ };
/*MT6119C*/
/*MT6119C*/ /*...........................................................................*/
/*MT6119C*/
/*MT6119C*/ const  sL1DGAINRANGE GAIN_RANGE_TABLE[] =
/*MT6119C*/ {  {                   0,                   0 },   /*#FrequencyBand400  */
/*MT6119C*/    {                   0,                   0 },   /*#FrequencyBand850  */
/*MT6119C*/    { (int)RF_GSM_MAXGAIN, (int)RF_GSM_MINGAIN },   /* FrequencyBand900  */
/*MT6119C*/    { (int)RF_DCS_MAXGAIN, (int)RF_DCS_MINGAIN },   /* FrequencyBand1800 */
/*MT6119C*/    { (int)RF_PCS_MAXGAIN, (int)RF_PCS_MINGAIN },   /* FrequencyBand1900 */
/*MT6119C*/ };
/*MT6119C*/
/*MT6119C*/ const  sL1DAGCDATA *const  AGC_TABLE[] =
/*MT6119C*/ {  0,                                              /*#FrequencyBand400  */
/*MT6119C*/    0,                                              /*#FrequencyBand850  */
/*MT6119C*/    AGC_TABLE_GSM900,                               /* FrequencyBand900  */
/*MT6119C*/    AGC_TABLE_DCS1800,                              /* FrequencyBand1800 */
/*MT6119C*/    AGC_TABLE_PCS1900,                              /* FrequencyBand1900 */
/*MT6119C*/ };
/*MT6119C*/
/*MT6119C*/ /*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
/*MT6119C*/
/*MT6119C*/ int   L1D_RF_GetGainSetting( int rf_band, int arfcn, int request_gain, long *gain_setting )
/*MT6119C*/ {  int   max_gain, min_gain, real_gain;
/*MT6119C*/    const int*    d32ptr;
/*MT6119C*/    const sL1DAGCDATA*  agcptr;
/*MT6119C*/    long  setting;
/*MT6119C*/    int   bit_no;
/*MT6119C*/
/*MT6119C*/    /* evaluate the range of available gain */
/*MT6119C*/    d32ptr  = (int*)&(GAIN_RANGE_TABLE[rf_band]);
/*MT6119C*/    max_gain = *d32ptr++;
/*MT6119C*/    min_gain = *d32ptr;
/*MT6119C*/
/*MT6119C*/    /* clipping the request gain to the avialable gain */
/*MT6119C*/    if( request_gain>=max_gain )
/*MT6119C*/    {  request_gain = max_gain;  }
/*MT6119C*/    else  if( request_gain<=min_gain )
/*MT6119C*/    {  request_gain = min_gain;  }
/*MT6119C*/
/*MT6119C*/    /* evaluate the real gain setting */
/*MT6119C*/    agcptr = AGC_TABLE[rf_band];
/*MT6119C*/    if( request_gain < agcptr->pos_gain )
/*MT6119C*/    {  agcptr++;
/*MT6119C*/       if( request_gain < agcptr->pos_gain )
/*MT6119C*/       {  agcptr++;  }
/*MT6119C*/    }
/*MT6119C*/    {  bit_no    = BIT_NO( request_gain, agcptr->A, GC_B );
/*MT6119C*/       real_gain = REAL_GAIN( bit_no, agcptr->A, GC_B );
/*MT6119C*/       setting   = agcptr->setting + (bit_no<<5);
/*MT6119C*/    }
/*MT6119C*/
/*MT6119C*/    *gain_setting = setting;
/*MT6119C*/    return( real_gain );
/*MT6119C*/ }
/*MT6119C*/
#endif

#if IS_RF_MT6129A
/*MT6129A*/
/*MT6129A*/ #define  GAIN_STEP               2
/*MT6129A*/
/*MT6129A*/ #define  RF_GSM_MAXGAIN         (  72.0*(PWRRES))
/*MT6129A*/ #define  RF_GSM_MINGAIN         ( -26.0*(PWRRES))
/*MT6129A*/ #define  RF_DCS_MAXGAIN         (  70.0*(PWRRES))
/*MT6129A*/ #define  RF_DCS_MINGAIN         ( -28.0*(PWRRES))
/*MT6129A*/ #define  RF_PCS_MAXGAIN         (  70.0*(PWRRES))
/*MT6129A*/ #define  RF_PCS_MINGAIN         ( -28.0*(PWRRES))
/*MT6129A*/
/*MT6129A*/ /* GSM900....................................................................*/
/*MT6129A*/
/*MT6129A*/ const  sL1DAGCDATA  AGC_TABLE_GSM900[3] =
/*MT6129A*/ {  {  GBOUND( 18.0, 16.0 ), GC_A(  3, 18.0 ), 0x126812 },
/*MT6129A*/    {  GBOUND( -6.0, -8.0 ), GC_A(  32,-6.0 ), 0x006812 },
/*MT6129A*/    {  GBOUND(-26.0,-26.0 ), GC_A(  0,-26.0 ), 0x006802 },
/*MT6129A*/ };
/*MT6129A*/
/*MT6129A*/ /* DCS1800...................................................................*/
/*MT6129A*/
/*MT6129A*/ const  sL1DAGCDATA  AGC_TABLE_DCS1800[3] =
/*MT6129A*/ {  {  GBOUND( 16.0, 14.0 ), GC_A(  3, 16.0 ), 0x127012 },
/*MT6129A*/    {  GBOUND( -8.0,-10.0 ), GC_A(  32,-8.0 ), 0x007012 },
/*MT6129A*/    {  GBOUND(-28.0,-28.0 ), GC_A(  0,-28.0 ), 0x007002 },
/*MT6129A*/ };
/*MT6129A*/
/*MT6129A*/ /* PCS1900...................................................................*/
/*MT6129A*/
/*MT6129A*/ const  sL1DAGCDATA  AGC_TABLE_PCS1900[3] =
/*MT6129A*/ {  {  GBOUND( 16.0, 14.0 ), GC_A(  3, 16.0 ), 0x127812 },
/*MT6129A*/    {  GBOUND( -8.0,-10.0 ), GC_A(  32,-8.0 ), 0x007812 },
/*MT6129A*/    {  GBOUND(-28.0,-28.0 ), GC_A(  0,-28.0 ), 0x007802 },
/*MT6129A*/ };
/*MT6129A*/
/*MT6129A*/ /*...........................................................................*/
/*MT6129A*/
/*MT6129A*/ const  sL1DGAINRANGE GAIN_RANGE_TABLE[] =
/*MT6129A*/ {  {                   0,                   0 },   /*#FrequencyBand400  */
/*MT6129A*/    {                   0,                   0 },   /*#FrequencyBand850  */
/*MT6129A*/    { (int)RF_GSM_MAXGAIN, (int)RF_GSM_MINGAIN },   /* FrequencyBand900  */
/*MT6129A*/    { (int)RF_DCS_MAXGAIN, (int)RF_DCS_MINGAIN },   /* FrequencyBand1800 */
/*MT6129A*/    { (int)RF_PCS_MAXGAIN, (int)RF_PCS_MINGAIN },   /* FrequencyBand1900 */
/*MT6129A*/ };
/*MT6129A*/
/*MT6129A*/ const  sL1DAGCDATA *const  AGC_TABLE[] =
/*MT6129A*/ {  0,                                              /*#FrequencyBand400  */
/*MT6129A*/    0,                                              /*#FrequencyBand850  */
/*MT6129A*/    AGC_TABLE_GSM900,                               /* FrequencyBand900  */
/*MT6129A*/    AGC_TABLE_DCS1800,                              /* FrequencyBand1800 */
/*MT6129A*/    AGC_TABLE_PCS1900,                              /* FrequencyBand1900 */
/*MT6129A*/ };
/*MT6129A*/
/*MT6129A*/ /*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
/*MT6129A*/
/*MT6129A*/ int   L1D_RF_GetGainSetting( int rf_band, int arfcn, int request_gain, long *gain_setting )
/*MT6129A*/ {  int   max_gain, min_gain, real_gain;
/*MT6129A*/    const int*    d32ptr;
/*MT6129A*/    const sL1DAGCDATA*  agcptr;
/*MT6129A*/    long  setting;
/*MT6129A*/    int   bit_no;
/*MT6129A*/
/*MT6129A*/    /* evaluate the range of available gain */
/*MT6129A*/    d32ptr  = (int*)&(GAIN_RANGE_TABLE[rf_band]);
/*MT6129A*/    max_gain = *d32ptr++;
/*MT6129A*/    min_gain = *d32ptr;
/*MT6129A*/
/*MT6129A*/    /* clipping the request gain to the avialable gain */
/*MT6129A*/    if( request_gain>=max_gain )
/*MT6129A*/    {  request_gain = max_gain;  }
/*MT6129A*/    else  if( request_gain<=min_gain )
/*MT6129A*/    {  request_gain = min_gain;  }
/*MT6129A*/
/*MT6129A*/    /* evaluate the real gain setting */
/*MT6129A*/    agcptr = AGC_TABLE[rf_band];
/*MT6129A*/    if( request_gain < agcptr->pos_gain )
/*MT6129A*/    {  agcptr++;
/*MT6129A*/       if( request_gain < agcptr->pos_gain )
/*MT6129A*/       {  agcptr++;  }
/*MT6129A*/    }
/*MT6129A*/    {  bit_no    = BIT_NO( request_gain, agcptr->A, GC_B );
/*MT6129A*/       real_gain = REAL_GAIN( bit_no, agcptr->A, GC_B );
/*MT6129A*/       setting   = agcptr->setting + (bit_no<<5);
/*MT6129A*/    }
/*MT6129A*/
/*MT6129A*/    *gain_setting = setting;
/*MT6129A*/    return( real_gain );
/*MT6129A*/ }
/*MT6129A*/
#endif

#if IS_RF_MT6129B
/*MT6129B*/
/*MT6129B*/ #define  GAIN_STEP               2
/*MT6129B*/
/*MT6129B*/ #define  RF_GSM850_MAXGAIN      (  72.0*(PWRRES))
/*MT6129B*/ #define  RF_GSM850_MINGAIN      ( -26.0*(PWRRES))
/*MT6129B*/ #define  RF_GSM_MAXGAIN         (  72.0*(PWRRES))
/*MT6129B*/ #define  RF_GSM_MINGAIN         ( -26.0*(PWRRES))
/*MT6129B*/ #define  RF_DCS_MAXGAIN         (  70.0*(PWRRES))
/*MT6129B*/ #define  RF_DCS_MINGAIN         ( -28.0*(PWRRES))
/*MT6129B*/ #define  RF_PCS_MAXGAIN         (  70.0*(PWRRES))
/*MT6129B*/ #define  RF_PCS_MINGAIN         ( -28.0*(PWRRES))
/*MT6129B*/
/*MT6129B*/ /* GSM850....................................................................*/
/*MT6129B*/
/*MT6129B*/ const  sL1DAGCDATA  AGC_TABLE_GSM850[3] =
/*MT6129B*/ {  {  GBOUND( 48.0, 46.0 ), GC_A( 18, 48.0 ), 0x126012 },
/*MT6129B*/    {  GBOUND( -6.0, -8.0 ), GC_A( 32, -6.0 ), 0x006012 },
/*MT6129B*/    {  GBOUND(-26.0,-26.0 ), GC_A(  0,-26.0 ), 0x006002 },
/*MT6129B*/ };
/*MT6129B*/
/*MT6129B*/ /* GSM900....................................................................*/
/*MT6129B*/
/*MT6129B*/ const  sL1DAGCDATA  AGC_TABLE_GSM900[3] =
/*MT6129B*/ {  {  GBOUND( 48.0, 46.0 ), GC_A( 18, 48.0 ), 0x126812 },
/*MT6129B*/    {  GBOUND( -6.0, -8.0 ), GC_A( 32, -6.0 ), 0x006812 },
/*MT6129B*/    {  GBOUND(-26.0,-26.0 ), GC_A(  0,-26.0 ), 0x006802 },
/*MT6129B*/ };
/*MT6129B*/
/*MT6129B*/ /* DCS1800...................................................................*/
/*MT6129B*/
/*MT6129B*/ const  sL1DAGCDATA  AGC_TABLE_DCS1800[3] =
/*MT6129B*/ {  {  GBOUND( 46.0, 44.0 ), GC_A( 18, 46.0 ), 0x127012 },
/*MT6129B*/    {  GBOUND( -8.0,-10.0 ), GC_A( 32, -8.0 ), 0x007012 },
/*MT6129B*/    {  GBOUND(-28.0,-28.0 ), GC_A(  0,-28.0 ), 0x007002 },
/*MT6129B*/ };
/*MT6129B*/
/*MT6129B*/ /* PCS1900...................................................................*/
/*MT6129B*/
/*MT6129B*/ const  sL1DAGCDATA  AGC_TABLE_PCS1900[3] =
/*MT6129B*/ {  {  GBOUND( 46.0, 44.0 ), GC_A( 18, 46.0 ), 0x127812 },
/*MT6129B*/    {  GBOUND( -8.0,-10.0 ), GC_A( 32, -8.0 ), 0x007812 },
/*MT6129B*/    {  GBOUND(-28.0,-28.0 ), GC_A(  0,-28.0 ), 0x007802 },
/*MT6129B*/ };
/*MT6129B*/
/*MT6129B*/ /*...........................................................................*/
/*MT6129B*/
/*MT6129B*/ const  sL1DGAINRANGE GAIN_RANGE_TABLE[] =
/*MT6129B*/ {  {                   0,                      0    }, /*#FrequencyBand400  */
/*MT6129B*/    { (int)RF_GSM850_MAXGAIN, (int)RF_GSM850_MINGAIN }, /* FrequencyBand850  */
/*MT6129B*/    { (int)RF_GSM_MAXGAIN,    (int)RF_GSM_MINGAIN    }, /* FrequencyBand900  */
/*MT6129B*/    { (int)RF_DCS_MAXGAIN,    (int)RF_DCS_MINGAIN    }, /* FrequencyBand1800 */
/*MT6129B*/    { (int)RF_PCS_MAXGAIN,    (int)RF_PCS_MINGAIN    }, /* FrequencyBand1900 */
/*MT6129B*/ };
/*MT6129B*/
/*MT6129B*/ const  sL1DAGCDATA *const  AGC_TABLE[] =
/*MT6129B*/ {  0,                                              /*#FrequencyBand400  */
/*MT6129B*/    AGC_TABLE_GSM850,                               /* FrequencyBand850  */
/*MT6129B*/    AGC_TABLE_GSM900,                               /* FrequencyBand900  */
/*MT6129B*/    AGC_TABLE_DCS1800,                              /* FrequencyBand1800 */
/*MT6129B*/    AGC_TABLE_PCS1900,                              /* FrequencyBand1900 */
/*MT6129B*/ };
/*MT6129B*/
/*MT6129B*/ /*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
/*MT6129B*/
/*MT6129B*/ int   L1D_RF_GetGainSetting( int rf_band, int arfcn, int request_gain, long *gain_setting )
/*MT6129B*/ {  int   max_gain, min_gain, real_gain;
/*MT6129B*/    const int*    d32ptr;
/*MT6129B*/    const sL1DAGCDATA*  agcptr;
/*MT6129B*/    long  setting;
/*MT6129B*/    int   bit_no;
/*MT6129B*/
/*MT6129B*/    /* evaluate the range of available gain */
/*MT6129B*/    d32ptr  = (int*)&(GAIN_RANGE_TABLE[rf_band]);
/*MT6129B*/    max_gain = *d32ptr++;
/*MT6129B*/    min_gain = *d32ptr;
/*MT6129B*/
/*MT6129B*/    /* clipping the request gain to the avialable gain */
/*MT6129B*/    if( request_gain>=max_gain )
/*MT6129B*/    {  request_gain = max_gain;  }
/*MT6129B*/    else  if( request_gain<=min_gain )
/*MT6129B*/    {  request_gain = min_gain;  }
/*MT6129B*/
/*MT6129B*/    /* evaluate the real gain setting */
/*MT6129B*/    agcptr = AGC_TABLE[rf_band];
/*MT6129B*/    if( request_gain < agcptr->pos_gain )
/*MT6129B*/    {  agcptr++;
/*MT6129B*/       if( request_gain < agcptr->pos_gain )
/*MT6129B*/       {  agcptr++;  }
/*MT6129B*/    }
/*MT6129B*/    {  bit_no    = BIT_NO( request_gain, agcptr->A, GC_B );
/*MT6129B*/       real_gain = REAL_GAIN( bit_no, agcptr->A, GC_B );
/*MT6129B*/       setting   = agcptr->setting + (bit_no<<5);
/*MT6129B*/    }
/*MT6129B*/
/*MT6129B*/    *gain_setting = setting;
/*MT6129B*/    return( real_gain );
/*MT6129B*/ }
/*MT6129B*/
#endif

#if  (IS_RF_MT6129C)||(IS_RF_MT6129D)
/*MT6129C,D*/
/*MT6129C,D*/ #define  GAIN_STEP               2
/*MT6129C,D*/
/*MT6129C,D*/ #define  RF_GSM850_MAXGAIN      (  72.0*(PWRRES))
/*MT6129C,D*/ #define  RF_GSM850_MINGAIN      ( -26.0*(PWRRES))
/*MT6129C,D*/ #define  RF_GSM_MAXGAIN         (  72.0*(PWRRES))
/*MT6129C,D*/ #define  RF_GSM_MINGAIN         ( -26.0*(PWRRES))
/*MT6129C,D*/ #define  RF_DCS_MAXGAIN         (  70.0*(PWRRES))
/*MT6129C,D*/ #define  RF_DCS_MINGAIN         ( -28.0*(PWRRES))
/*MT6129C,D*/ #define  RF_PCS_MAXGAIN         (  70.0*(PWRRES))
/*MT6129C,D*/ #define  RF_PCS_MINGAIN         ( -28.0*(PWRRES))
/*MT6129C,D*/
/*MT6129C,D*/ /* GSM850....................................................................*/

/*MT6129C,D*/ const  sL1DAGCDATA  AGC_TABLE_GSM850[3] =
/*MT6129C,D*/ {  {  GBOUND( 34.0, 32.0 ), GC_A( 11, 34.0 ), 0x126012 },
/*MT6129C,D*/    {  GBOUND( -6.0, -8.0 ), GC_A( 32, -6.0 ), 0x006012 },
/*MT6129C,D*/    {  GBOUND(-26.0,-26.0 ), GC_A(  0,-26.0 ), 0x006002 },
/*MT6129C,D*/ };

/*MT6129C,D*/ /* GSM900....................................................................*/
/*MT6129C,D*/
/*MT6129C,D*/ const  sL1DAGCDATA  AGC_TABLE_GSM900[3] =
/*MT6129C,D*/ {  {  GBOUND( 34.0, 32.0 ), GC_A( 11, 34.0 ), 0x126812 },
/*MT6129C,D*/    {  GBOUND( -6.0, -8.0 ), GC_A( 32, -6.0 ), 0x006812 },
/*MT6129C,D*/    {  GBOUND(-26.0,-26.0 ), GC_A(  0,-26.0 ), 0x006802 },
/*MT6129C,D*/ };
/*MT6129C,D*/
/*MT6129C,D*/ /* DCS1800...................................................................*/
/*MT6129C,D*/
/*MT6129C,D*/ const  sL1DAGCDATA  AGC_TABLE_DCS1800[3] =
/*MT6129C,D*/ {  {  GBOUND( 32.0, 30.0 ), GC_A( 11, 32.0 ), 0x127012 },
/*MT6129C,D*/    {  GBOUND( -8.0,-10.0 ), GC_A( 32, -8.0 ), 0x007012 },
/*MT6129C,D*/    {  GBOUND(-28.0,-28.0 ), GC_A(  0,-28.0 ), 0x007002 },
/*MT6129C,D*/ };
/*MT6129C,D*/
/*MT6129C,D*/ /* PCS1900...................................................................*/
/*MT6129C,D*/
/*MT6129C,D*/ const  sL1DAGCDATA  AGC_TABLE_PCS1900[3] =
/*MT6129C,D*/ {  {  GBOUND( 32.0, 30.0 ), GC_A( 11, 32.0 ), 0x127812 },
/*MT6129C,D*/    {  GBOUND( -8.0,-10.0 ), GC_A( 32, -8.0 ), 0x007812 },
/*MT6129C,D*/    {  GBOUND(-28.0,-28.0 ), GC_A(  0,-28.0 ), 0x007802 },
/*MT6129C,D*/ };
/*MT6129C,D*/
/*MT6129C,D*/ /*...........................................................................*/
/*MT6129C,D*/
/*MT6129C,D*/ const  sL1DGAINRANGE GAIN_RANGE_TABLE[] =
/*MT6129C,D*/ {  {                   0,                      0    }, /*#FrequencyBand400  */
/*MT6129C,D*/    { (int)RF_GSM850_MAXGAIN, (int)RF_GSM850_MINGAIN }, /* FrequencyBand850  */
/*MT6129C,D*/    { (int)RF_GSM_MAXGAIN,    (int)RF_GSM_MINGAIN    }, /* FrequencyBand900  */
/*MT6129C,D*/    { (int)RF_DCS_MAXGAIN,    (int)RF_DCS_MINGAIN    }, /* FrequencyBand1800 */
/*MT6129C,D*/    { (int)RF_PCS_MAXGAIN,    (int)RF_PCS_MINGAIN    }, /* FrequencyBand1900 */
/*MT6129C,D*/ };
/*MT6129C,D*/
/*MT6129C,D*/ const  sL1DAGCDATA *const  AGC_TABLE[] =
/*MT6129C,D*/ {  0,                                              /*#FrequencyBand400  */
/*MT6129C,D*/    AGC_TABLE_GSM850,                               /* FrequencyBand850  */
/*MT6129C,D*/    AGC_TABLE_GSM900,                               /* FrequencyBand900  */
/*MT6129C,D*/    AGC_TABLE_DCS1800,                              /* FrequencyBand1800 */
/*MT6129C,D*/    AGC_TABLE_PCS1900,                              /* FrequencyBand1900 */
/*MT6129C,D*/ };
/*MT6129C,D*/
/*MT6129C,D*/ const  sL1DAGCDATA *const  AGC_TABLE_GSM800in900PATH[] =
/*MT6129C,D*/ {  0,                                              /*#FrequencyBand400 (not support)  */
/*MT6129C,D*/    AGC_TABLE_GSM900,                               /* FrequencyBand900 (Get GSM850 signal from GSM900 input pins) */
/*MT6129C,D*/    AGC_TABLE_GSM850,                               /* FrequencyBand850 (Get GSM900 signal from GSM850 input pins, just avoid to camp on GSM900 network, not swap*/
/*MT6129C,D*/    AGC_TABLE_DCS1800,                              /* FrequencyBand1800               */
/*MT6129C,D*/    AGC_TABLE_PCS1900,                              /* FrequencyBand1900               */
/*MT6129C,D*/ };
/*MT6129C,D*/
/*MT6129C,D*/ /*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
/*MT6129C,D*/
/*MT6129C,D*/ int   L1D_RF_GetGainSetting( int rf_band, int arfcn, int request_gain, long *gain_setting )
/*MT6129C,D*/ {  int   max_gain, min_gain, real_gain;
/*MT6129C,D*/    const int*    d32ptr;
/*MT6129C,D*/    const sL1DAGCDATA*  agcptr;
/*MT6129C,D*/    long  setting;
/*MT6129C,D*/    int   bit_no;
/*MT6129C,D*/
/*MT6129C,D*/    /* evaluate the range of available gain */
/*MT6129C,D*/    d32ptr  = (int*)&(GAIN_RANGE_TABLE[rf_band]);
/*MT6129C,D*/    max_gain = *d32ptr++;
/*MT6129C,D*/    min_gain = *d32ptr;
/*MT6129C,D*/
/*MT6129C,D*/    /* clipping the request gain to the avialable gain */
/*MT6129C,D*/    if( request_gain>=max_gain )
/*MT6129C,D*/    {  request_gain = max_gain;  }
/*MT6129C,D*/    else  if( request_gain<=min_gain )
/*MT6129C,D*/    {  request_gain = min_gain;  }
/*MT6129C,D*/
/*MT6129C,D*/    /* evaluate the real gain setting */
/*MT6129C,D*/    if(  BBTXParameters.bbrx_gsm850_gsm900_swap )
/*MT6129C,D*/    {   agcptr = AGC_TABLE_GSM800in900PATH[rf_band];  }
/*MT6129C,D*/    else
/*MT6129C,D*/    {   agcptr = AGC_TABLE[rf_band];           }
/*MT6129C,D*/
/*MT6129C,D*/    if( request_gain < agcptr->pos_gain )
/*MT6129C,D*/    {  agcptr++;
/*MT6129C,D*/       if( request_gain < agcptr->pos_gain )
/*MT6129C,D*/       {  agcptr++;  }
/*MT6129C,D*/    }
/*MT6129C,D*/    {  bit_no    = BIT_NO( request_gain, agcptr->A, GC_B );
/*MT6129C,D*/       real_gain = REAL_GAIN( bit_no, agcptr->A, GC_B );
/*MT6129C,D*/       setting   = agcptr->setting + (bit_no<<5);
/*MT6129C,D*/    }
/*MT6129C,D*/
/*MT6129C,D*/    *gain_setting = setting;
/*MT6129C,D*/    return( real_gain );
/*MT6129C,D*/ }
/*MT6129C,D*/
#endif

#if IS_RF_MT6139B
/*MT6139B*/
/*MT6139B*/ #define  GAIN_STEP               2
/*MT6139B*/
/*MT6139B*/ #define  RF_GSM850_MAXGAIN      (  56.0*(PWRRES))
/*MT6139B*/ #define  RF_GSM850_MINGAIN      ( -32.0*(PWRRES))
/*MT6139B*/ #define  RF_GSM_MAXGAIN         (  56.0*(PWRRES))
/*MT6139B*/ #define  RF_GSM_MINGAIN         ( -32.0*(PWRRES))
/*MT6139B*/ #define  RF_DCS_MAXGAIN         (  56.0*(PWRRES))
/*MT6139B*/ #define  RF_DCS_MINGAIN         ( -32.0*(PWRRES))
/*MT6139B*/ #define  RF_PCS_MAXGAIN         (  56.0*(PWRRES))
/*MT6139B*/ #define  RF_PCS_MINGAIN         ( -32.0*(PWRRES))
/*MT6139B*/
/*MT6139B*/ /* GSM850....................................................................*/
/*MT6139B*/
/*MT6139B*/ const  sL1DAGCDATA  AGC_TABLE_GSM850[2] =
/*MT6139B*/ {  {  GBOUND( -4.0, -6.0 ), GC_A( 32, -4.0 ), 0x000C02 },
/*MT6139B*/    {  GBOUND(-44.0,-44.0 ), GC_A(  0,-44.0 ), 0x000C02 },
/*MT6139B*/ };
/*MT6139B*/
/*MT6139B*/ /* GSM900....................................................................*/
/*MT6139B*/
/*MT6139B*/ const  sL1DAGCDATA  AGC_TABLE_GSM900[2] =
/*MT6139B*/ {  {  GBOUND( -4.0, -6.0 ), GC_A( 32, -4.0 ), 0x000C02 },
/*MT6139B*/    {  GBOUND(-44.0,-44.0 ), GC_A(  0,-44.0 ), 0x000C02 },
/*MT6139B*/ };
/*MT6139B*/
/*MT6139B*/ /* DCS1800...................................................................*/
/*MT6139B*/
/*MT6139B*/ const  sL1DAGCDATA  AGC_TABLE_DCS1800[2] =
/*MT6139B*/ {  {  GBOUND( -4.0, -6.0 ), GC_A( 32, -4.0 ), 0x000C02 },
/*MT6139B*/    {  GBOUND(-44.0,-44.0 ), GC_A(  0,-44.0 ), 0x000C02 },
/*MT6139B*/ };
/*MT6139B*/
/*MT6139B*/ /* PCS1900...................................................................*/
/*MT6139B*/
/*MT6139B*/ const  sL1DAGCDATA  AGC_TABLE_PCS1900[2] =
/*MT6139B*/ {  {  GBOUND( -4.0, -6.0 ), GC_A( 32, -4.0 ), 0x000C02 },
/*MT6139B*/    {  GBOUND(-44.0,-44.0 ), GC_A(  0,-44.0 ), 0x000C02 },
/*MT6139B*/ };
/*MT6139B*/
/*MT6139B*/ /*...........................................................................*/
/*MT6139B*/
/*MT6139B*/ const  sL1DGAINRANGE GAIN_RANGE_TABLE[] =
/*MT6139B*/ {  {                   0,                      0    }, /*#FrequencyBand400  */
/*MT6139B*/    { (int)RF_GSM850_MAXGAIN, (int)RF_GSM850_MINGAIN }, /* FrequencyBand850  */
/*MT6139B*/    { (int)RF_GSM_MAXGAIN,    (int)RF_GSM_MINGAIN    }, /* FrequencyBand900  */
/*MT6139B*/    { (int)RF_DCS_MAXGAIN,    (int)RF_DCS_MINGAIN    }, /* FrequencyBand1800 */
/*MT6139B*/    { (int)RF_PCS_MAXGAIN,    (int)RF_PCS_MINGAIN    }, /* FrequencyBand1900 */
/*MT6139B*/ };
/*MT6139B*/
/*MT6139B*/ const  sL1DAGCDATA *const  AGC_TABLE[] =
/*MT6139B*/ {  0,                                              /*#FrequencyBand400  */
/*MT6139B*/    AGC_TABLE_GSM850,                               /* FrequencyBand850  */
/*MT6139B*/    AGC_TABLE_GSM900,                               /* FrequencyBand900  */
/*MT6139B*/    AGC_TABLE_DCS1800,                              /* FrequencyBand1800 */
/*MT6139B*/    AGC_TABLE_PCS1900,                              /* FrequencyBand1900 */
/*MT6139B*/ };
/*MT6139B*/
/*MT6139B*/ /*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
/*MT6139B*/
/*MT6139B*/ int   L1D_RF_GetGainSetting( int rf_band, int arfcn, int request_gain, long *gain_setting )
/*MT6139B*/ {  int   max_gain, min_gain, real_gain;
/*MT6139B*/    const int*    d32ptr;
/*MT6139B*/    const sL1DAGCDATA*  agcptr;
/*MT6139B*/    long  setting;
/*MT6139B*/    int   bit_no;
/*MT6139B*/
/*MT6139B*/    /* evaluate the range of available gain */
/*MT6139B*/    d32ptr  = (int*)&(GAIN_RANGE_TABLE[rf_band]);
/*MT6139B*/    max_gain = *d32ptr++;
/*MT6139B*/    min_gain = *d32ptr;
/*MT6139B*/
/*MT6139B*/    /* clipping the request gain to the avialable gain */
/*MT6139B*/    if( request_gain>=max_gain )
/*MT6139B*/    {  request_gain = max_gain;  }
/*MT6139B*/    else  if( request_gain<=min_gain )
/*MT6139B*/    {  request_gain = min_gain;  }
/*MT6139B*/
/*MT6139B*/    /* evaluate the real gain setting */
/*MT6139B*/    agcptr = AGC_TABLE[rf_band];
/*MT6139B*/    if( request_gain < agcptr->pos_gain )
/*MT6139B*/    {  agcptr++;
/*MT6139B*/    }
/*MT6139B*/    {  bit_no    = BIT_NO( request_gain, agcptr->A, GC_B );
/*MT6139B*/       real_gain = REAL_GAIN( bit_no, agcptr->A, GC_B );
/*MT6139B*/       setting   = agcptr->setting + (bit_no<<4);
/*MT6139B*/    }
/*MT6139B*/
/*MT6139B*/    *gain_setting = setting;
/*MT6139B*/    return( real_gain );
/*MT6139B*/ }
/*MT6139B*/
#endif

#if IS_RF_MT6139C
/*MT6139C*/
/*MT6139C*/ #define  GAIN_STEP               2
/*MT6139C*/
/*MT6139C*/ #define  RF_GSM850_MAXGAIN      (  56.0*(PWRRES))
/*MT6139C*/ #define  RF_GSM850_MINGAIN      ( -32.0*(PWRRES))
/*MT6139C*/ #define  RF_GSM_MAXGAIN         (  56.0*(PWRRES))
/*MT6139C*/ #define  RF_GSM_MINGAIN         ( -32.0*(PWRRES))
/*MT6139C*/ #define  RF_DCS_MAXGAIN         (  56.0*(PWRRES))
/*MT6139C*/ #define  RF_DCS_MINGAIN         ( -32.0*(PWRRES))
/*MT6139C*/ #define  RF_PCS_MAXGAIN         (  56.0*(PWRRES))
/*MT6139C*/ #define  RF_PCS_MINGAIN         ( -32.0*(PWRRES))
/*MT6139C*/
/*MT6139C*/ /* GSM850....................................................................*/
/*MT6139C*/
/*MT6139C*/ const  sL1DAGCDATA  AGC_TABLE_GSM850[2] =
/*MT6139C*/ {  {  GBOUND( -4.0, -6.0 ), GC_A( 32, -4.0 ), 0x000C02 },
/*MT6139C*/    {  GBOUND(-44.0,-44.0 ), GC_A(  0,-44.0 ), 0x000C02 },
/*MT6139C*/ };
/*MT6139C*/
/*MT6139C*/ /* GSM900....................................................................*/
/*MT6139C*/
/*MT6139C*/ const  sL1DAGCDATA  AGC_TABLE_GSM900[2] =
/*MT6139C*/ {  {  GBOUND( -4.0, -6.0 ), GC_A( 32, -4.0 ), 0x000C02 },
/*MT6139C*/    {  GBOUND(-44.0,-44.0 ), GC_A(  0,-44.0 ), 0x000C02 },
/*MT6139C*/ };
/*MT6139C*/
/*MT6139C*/ /* DCS1800...................................................................*/
/*MT6139C*/
/*MT6139C*/ const  sL1DAGCDATA  AGC_TABLE_DCS1800[2] =
/*MT6139C*/ {  {  GBOUND( -4.0, -6.0 ), GC_A( 32, -4.0 ), 0x000C02 },
/*MT6139C*/    {  GBOUND(-44.0,-44.0 ), GC_A(  0,-44.0 ), 0x000C02 },
/*MT6139C*/ };
/*MT6139C*/
/*MT6139C*/ /* PCS1900...................................................................*/
/*MT6139C*/
/*MT6139C*/ const  sL1DAGCDATA  AGC_TABLE_PCS1900[2] =
/*MT6139C*/ {  {  GBOUND( -4.0, -6.0 ), GC_A( 32, -4.0 ), 0x000C02 },
/*MT6139C*/    {  GBOUND(-44.0,-44.0 ), GC_A(  0,-44.0 ), 0x000C02 },
/*MT6139C*/ };
/*MT6139C*/
/*MT6139C*/ /*...........................................................................*/
/*MT6139C*/
/*MT6139C*/ const  sL1DGAINRANGE GAIN_RANGE_TABLE[] =
/*MT6139C*/ {  {                   0,                      0    }, /*#FrequencyBand400  */
/*MT6139C*/    { (int)RF_GSM850_MAXGAIN, (int)RF_GSM850_MINGAIN }, /* FrequencyBand850  */
/*MT6139C*/    { (int)RF_GSM_MAXGAIN,    (int)RF_GSM_MINGAIN    }, /* FrequencyBand900  */
/*MT6139C*/    { (int)RF_DCS_MAXGAIN,    (int)RF_DCS_MINGAIN    }, /* FrequencyBand1800 */
/*MT6139C*/    { (int)RF_PCS_MAXGAIN,    (int)RF_PCS_MINGAIN    }, /* FrequencyBand1900 */
/*MT6139C*/ };
/*MT6139C*/
/*MT6139C*/ const  sL1DAGCDATA *const  AGC_TABLE[] =
/*MT6139C*/ {  0,                                              /*#FrequencyBand400  */
/*MT6139C*/    AGC_TABLE_GSM850,                               /* FrequencyBand850  */
/*MT6139C*/    AGC_TABLE_GSM900,                               /* FrequencyBand900  */
/*MT6139C*/    AGC_TABLE_DCS1800,                              /* FrequencyBand1800 */
/*MT6139C*/    AGC_TABLE_PCS1900,                              /* FrequencyBand1900 */
/*MT6139C*/ };
/*MT6139C*/
/*MT6139C*/ /*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
/*MT6139C*/
/*MT6139C*/ int   L1D_RF_GetGainSetting( int rf_band, int arfcn, int request_gain, long *gain_setting )
/*MT6139C*/ {  int   max_gain, min_gain, real_gain;
/*MT6139C*/    const int*    d32ptr;
/*MT6139C*/    const sL1DAGCDATA*  agcptr;
/*MT6139C*/    long  setting;
/*MT6139C*/    int   bit_no;
/*MT6139C*/
/*MT6139C*/    /* evaluate the range of available gain */
/*MT6139C*/    d32ptr  = (int*)&(GAIN_RANGE_TABLE[rf_band]);
/*MT6139C*/    max_gain = *d32ptr++;
/*MT6139C*/    min_gain = *d32ptr;
/*MT6139C*/
/*MT6139C*/    /* clipping the request gain to the avialable gain */
/*MT6139C*/    if( request_gain>=max_gain )
/*MT6139C*/    {  request_gain = max_gain;  }
/*MT6139C*/    else  if( request_gain<=min_gain )
/*MT6139C*/    {  request_gain = min_gain;  }
/*MT6139C*/
/*MT6139C*/    /* evaluate the real gain setting */
/*MT6139C*/    agcptr = AGC_TABLE[rf_band];
/*MT6139C*/    if( request_gain < agcptr->pos_gain )
/*MT6139C*/    {  agcptr++;
/*MT6139C*/    }
/*MT6139C*/    {  bit_no    = BIT_NO( request_gain, agcptr->A, GC_B );
/*MT6139C*/       real_gain = REAL_GAIN( bit_no, agcptr->A, GC_B );
/*MT6139C*/       setting   = agcptr->setting + (bit_no<<4);
/*MT6139C*/    }
/*MT6139C*/
/*MT6139C*/    *gain_setting = setting;
/*MT6139C*/    return( real_gain );
/*MT6139C*/ }
/*MT6139C*/
#endif

#if IS_RF_MT6139E
/*MT6139E*/
/*MT6139E*/ #define  GAIN_STEP               2
/*MT6139E*/
/*MT6139E*/ #define  RF_GSM850_MAXGAIN      (  56.0*(PWRRES))
/*MT6139E*/ #define  RF_GSM850_MINGAIN      ( -28.0*(PWRRES))
/*MT6139E*/ #define  RF_GSM_MAXGAIN         (  56.0*(PWRRES))
/*MT6139E*/ #define  RF_GSM_MINGAIN         ( -28.0*(PWRRES))
/*MT6139E*/ #define  RF_DCS_MAXGAIN         (  56.0*(PWRRES))
/*MT6139E*/ #define  RF_DCS_MINGAIN         ( -28.0*(PWRRES))
/*MT6139E*/ #define  RF_PCS_MAXGAIN         (  56.0*(PWRRES))
/*MT6139E*/ #define  RF_PCS_MINGAIN         ( -28.0*(PWRRES))
/*MT6139E*/
/*MT6139E*/ /* GSM850....................................................................*/
/*MT6139E*/
/*MT6139E*/ const  sL1DAGCDATA  AGC_TABLE_GSM850[2] =
/*MT6139E*/ {  {  GBOUND( -4.0, -6.0 ), GC_A(  0, -4.0 ), 0x000E02 },
/*MT6139E*/    {  GBOUND(-32.0,-32.0 ), GC_A(  4,-32.0 ), 0x000C02 },
/*MT6139E*/ };
/*MT6139E*/
/*MT6139E*/ /* GSM900....................................................................*/
/*MT6139E*/
/*MT6139E*/ const  sL1DAGCDATA  AGC_TABLE_GSM900[2] =
/*MT6139E*/ {  {  GBOUND( -4.0, -6.0 ), GC_A(  0, -4.0 ), 0x000E02 },
/*MT6139E*/    {  GBOUND(-32.0,-32.0 ), GC_A(  4,-32.0 ), 0x000C02 },
/*MT6139E*/ };
/*MT6139E*/
/*MT6139E*/ /* DCS1800...................................................................*/
/*MT6139E*/
/*MT6139E*/ const  sL1DAGCDATA  AGC_TABLE_DCS1800[2] =
/*MT6139E*/ {  {  GBOUND( -4.0, -6.0 ), GC_A(  0, -4.0 ), 0x000E02 },
/*MT6139E*/    {  GBOUND(-32.0,-32.0 ), GC_A(  4,-32.0 ), 0x000C02 },
/*MT6139E*/ };
/*MT6139E*/
/*MT6139E*/ /* PCS1900...................................................................*/
/*MT6139E*/
/*MT6139E*/ const  sL1DAGCDATA  AGC_TABLE_PCS1900[2] =
/*MT6139E*/ {  {  GBOUND( -4.0, -6.0 ), GC_A(  0, -4.0 ), 0x000E02 },
/*MT6139E*/    {  GBOUND(-32.0,-32.0 ), GC_A(  4,-32.0 ), 0x000C02 },
/*MT6139E*/ };
/*MT6139E*/
/*MT6139E*/ /*...........................................................................*/
/*MT6139E*/
/*MT6139E*/ const  sL1DGAINRANGE GAIN_RANGE_TABLE[] =
/*MT6139E*/ {  {                   0,                      0    }, /*#FrequencyBand400  */
/*MT6139E*/    { (int)RF_GSM850_MAXGAIN, (int)RF_GSM850_MINGAIN }, /* FrequencyBand850  */
/*MT6139E*/    { (int)RF_GSM_MAXGAIN,    (int)RF_GSM_MINGAIN    }, /* FrequencyBand900  */
/*MT6139E*/    { (int)RF_DCS_MAXGAIN,    (int)RF_DCS_MINGAIN    }, /* FrequencyBand1800 */
/*MT6139E*/    { (int)RF_PCS_MAXGAIN,    (int)RF_PCS_MINGAIN    }, /* FrequencyBand1900 */
/*MT6139E*/ };
/*MT6139E*/
/*MT6139E*/ const  sL1DAGCDATA *const  AGC_TABLE[] =
/*MT6139E*/ {  0,                                              /*#FrequencyBand400  */
/*MT6139E*/    AGC_TABLE_GSM850,                               /* FrequencyBand850  */
/*MT6139E*/    AGC_TABLE_GSM900,                               /* FrequencyBand900  */
/*MT6139E*/    AGC_TABLE_DCS1800,                              /* FrequencyBand1800 */
/*MT6139E*/    AGC_TABLE_PCS1900,                              /* FrequencyBand1900 */
/*MT6139E*/ };
/*MT6139E*/
/*MT6139E*/ /*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
/*MT6139E*/
/*MT6139E*/ int   L1D_RF_GetGainSetting( int rf_band, int arfcn, int request_gain, long *gain_setting )
/*MT6139E*/ {  int   max_gain, min_gain, real_gain;
/*MT6139E*/    const int*    d32ptr;
/*MT6139E*/    const sL1DAGCDATA*  agcptr;
/*MT6139E*/    long  setting;
/*MT6139E*/    int   bit_no;
/*MT6139E*/
/*MT6139E*/    /* evaluate the range of available gain */
/*MT6139E*/    d32ptr  = (int*)&(GAIN_RANGE_TABLE[rf_band]);
/*MT6139E*/    max_gain = *d32ptr++;
/*MT6139E*/    min_gain = *d32ptr;
/*MT6139E*/
/*MT6139E*/    /* clipping the request gain to the avialable gain */
/*MT6139E*/    if( request_gain>=max_gain )
/*MT6139E*/    {  request_gain = max_gain;  }
/*MT6139E*/    else  if( request_gain<=min_gain )
/*MT6139E*/    {  request_gain = min_gain;  }
/*MT6139E*/
/*MT6139E*/    /* evaluate the real gain setting */
/*MT6139E*/    agcptr = AGC_TABLE[rf_band];
/*MT6139E*/    if( request_gain < agcptr->pos_gain )
/*MT6139E*/    {  agcptr++;
/*MT6139E*/    }
/*MT6139E*/    {  bit_no    = BIT_NO( request_gain, agcptr->A, GC_B );
/*MT6139E*/       real_gain = REAL_GAIN( bit_no, agcptr->A, GC_B );
/*MT6139E*/       setting   = agcptr->setting + (bit_no<<4);
/*MT6139E*/    }
/*MT6139E*/
/*MT6139E*/    *gain_setting = setting;
/*MT6139E*/    return( real_gain );
/*MT6139E*/ }
/*MT6139E*/
#endif

#if IS_RF_MT6140A
/*MT6140A*/
/*MT6140A*/ #define  GAIN_STEP               2
/*MT6140A*/
/*MT6140A*/ #define  RF_GSM850_MAXGAIN      (  56.0*(PWRRES))
/*MT6140A*/ #define  RF_GSM850_MINGAIN      ( -32.0*(PWRRES))
/*MT6140A*/ #define  RF_GSM_MAXGAIN         (  56.0*(PWRRES))
/*MT6140A*/ #define  RF_GSM_MINGAIN         ( -32.0*(PWRRES))
/*MT6140A*/ #define  RF_DCS_MAXGAIN         (  56.0*(PWRRES))
/*MT6140A*/ #define  RF_DCS_MINGAIN         ( -32.0*(PWRRES))
/*MT6140A*/ #define  RF_PCS_MAXGAIN         (  56.0*(PWRRES))
/*MT6140A*/ #define  RF_PCS_MINGAIN         ( -32.0*(PWRRES))
/*MT6140A*/
/*MT6140A*/ /* GSM850....................................................................*/
/*MT6140A*/
/*MT6140A*/ const  sL1DAGCDATA  AGC_TABLE_GSM850[2] =
/*MT6140A*/ {  {  GBOUND( -4.0, -6.0 ), GC_A( 32, -4.0 ), 0x000C02 },
/*MT6140A*/    {  GBOUND(-44.0,-44.0 ), GC_A(  0,-44.0 ), 0x000C02 },
/*MT6140A*/ };
/*MT6140A*/
/*MT6140A*/ /* GSM900....................................................................*/
/*MT6140A*/
/*MT6140A*/ const  sL1DAGCDATA  AGC_TABLE_GSM900[2] =
/*MT6140A*/ {  {  GBOUND( -4.0, -6.0 ), GC_A( 32, -4.0 ), 0x000C02 },
/*MT6140A*/    {  GBOUND(-44.0,-44.0 ), GC_A(  0,-44.0 ), 0x000C02 },
/*MT6140A*/ };
/*MT6140A*/
/*MT6140A*/ /* DCS1800...................................................................*/
/*MT6140A*/
/*MT6140A*/ const  sL1DAGCDATA  AGC_TABLE_DCS1800[2] =
/*MT6140A*/ {  {  GBOUND( -4.0, -6.0 ), GC_A( 32, -4.0 ), 0x000C02 },
/*MT6140A*/    {  GBOUND(-44.0,-44.0 ), GC_A(  0,-44.0 ), 0x000C02 },
/*MT6140A*/ };
/*MT6140A*/
/*MT6140A*/ /* PCS1900...................................................................*/
/*MT6140A*/
/*MT6140A*/ const  sL1DAGCDATA  AGC_TABLE_PCS1900[2] =
/*MT6140A*/ {  {  GBOUND( -4.0, -6.0 ), GC_A( 32, -4.0 ), 0x000C02 },
/*MT6140A*/    {  GBOUND(-44.0,-44.0 ), GC_A(  0,-44.0 ), 0x000C02 },
/*MT6140A*/ };
/*MT6140A*/
/*MT6140A*/ /*...........................................................................*/
/*MT6140A*/
/*MT6140A*/ const  sL1DGAINRANGE GAIN_RANGE_TABLE[] =
/*MT6140A*/ {  {                   0,                      0    }, /*#FrequencyBand400  */
/*MT6140A*/    { (int)RF_GSM850_MAXGAIN, (int)RF_GSM850_MINGAIN }, /* FrequencyBand850  */
/*MT6140A*/    { (int)RF_GSM_MAXGAIN,    (int)RF_GSM_MINGAIN    }, /* FrequencyBand900  */
/*MT6140A*/    { (int)RF_DCS_MAXGAIN,    (int)RF_DCS_MINGAIN    }, /* FrequencyBand1800 */
/*MT6140A*/    { (int)RF_PCS_MAXGAIN,    (int)RF_PCS_MINGAIN    }, /* FrequencyBand1900 */
/*MT6140A*/ };
/*MT6140A*/
/*MT6140A*/ const  sL1DAGCDATA *const  AGC_TABLE[] =
/*MT6140A*/ {  0,                                              /*#FrequencyBand400  */
/*MT6140A*/    AGC_TABLE_GSM850,                               /* FrequencyBand850  */
/*MT6140A*/    AGC_TABLE_GSM900,                               /* FrequencyBand900  */
/*MT6140A*/    AGC_TABLE_DCS1800,                              /* FrequencyBand1800 */
/*MT6140A*/    AGC_TABLE_PCS1900,                              /* FrequencyBand1900 */
/*MT6140A*/ };
/*MT6140A*/
/*MT6140A*/ /*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
/*MT6140A*/
/*MT6140A*/ int   L1D_RF_GetGainSetting( int rf_band, int arfcn, int request_gain, long *gain_setting )
/*MT6140A*/ {  int   max_gain, min_gain, real_gain;
/*MT6140A*/    const int*    d32ptr;
/*MT6140A*/    const sL1DAGCDATA*  agcptr;
/*MT6140A*/    long  setting;
/*MT6140A*/    int   bit_no;
/*MT6140A*/
/*MT6140A*/    /* evaluate the range of available gain */
/*MT6140A*/    d32ptr  = (int*)&(GAIN_RANGE_TABLE[rf_band]);
/*MT6140A*/    max_gain = *d32ptr++;
/*MT6140A*/    min_gain = *d32ptr;
/*MT6140A*/
/*MT6140A*/    /* clipping the request gain to the avialable gain */
/*MT6140A*/    if( request_gain>=max_gain )
/*MT6140A*/    {  request_gain = max_gain;  }
/*MT6140A*/    else  if( request_gain<=min_gain )
/*MT6140A*/    {  request_gain = min_gain;  }
/*MT6140A*/
/*MT6140A*/    /* evaluate the real gain setting */
/*MT6140A*/    agcptr = AGC_TABLE[rf_band];
/*MT6140A*/    if( request_gain < agcptr->pos_gain )
/*MT6140A*/    {  agcptr++;
/*MT6140A*/    }
/*MT6140A*/    {  bit_no    = BIT_NO( request_gain, agcptr->A, GC_B );
/*MT6140A*/       real_gain = REAL_GAIN( bit_no, agcptr->A, GC_B );
/*MT6140A*/       setting   = agcptr->setting + (bit_no<<4);
/*MT6140A*/    }
/*MT6140A*/
/*MT6140A*/    *gain_setting = setting;
/*MT6140A*/    return( real_gain );
/*MT6140A*/ }
/*MT6140A*/
#endif

#if IS_RF_MT6140B
/*MT6140B*/
/*MT6140B*/ #define  GAIN_STEP               2
/*MT6140B*/
/*MT6140B*/ #define  RF_GSM850_MAXGAIN      (  56.0*(PWRRES))
/*MT6140B*/ #define  RF_GSM850_MINGAIN      ( -30.0*(PWRRES))
/*MT6140B*/ #define  RF_GSM_MAXGAIN         (  56.0*(PWRRES))
/*MT6140B*/ #define  RF_GSM_MINGAIN         ( -30.0*(PWRRES))
/*MT6140B*/ #define  RF_DCS_MAXGAIN         (  56.0*(PWRRES))
/*MT6140B*/ #define  RF_DCS_MINGAIN         ( -30.0*(PWRRES))
/*MT6140B*/ #define  RF_PCS_MAXGAIN         (  56.0*(PWRRES))
/*MT6140B*/ #define  RF_PCS_MINGAIN         ( -30.0*(PWRRES))
/*MT6140B*/
/*MT6140B*/ /* GSM850....................................................................*/
/*MT6140B*/
/*MT6140B*/ const  sL1DAGCDATA  AGC_TABLE_GSM850[2] =
/*MT6140B*/ {  {  GBOUND( -4.0, -6.0 ), GC_A(  0, -4.0 ), 0x000202 },
/*MT6140B*/    {  GBOUND(-30.0,-30.0 ), GC_A(  6,-30.0 ), 0x000002 },
/*MT6140B*/ };
/*MT6140B*/
/*MT6140B*/ /* GSM900....................................................................*/
/*MT6140B*/
/*MT6140B*/ const  sL1DAGCDATA  AGC_TABLE_GSM900[2] =
/*MT6140B*/ {  {  GBOUND( -4.0, -6.0 ), GC_A(  0, -4.0 ), 0x000202 },
/*MT6140B*/    {  GBOUND(-30.0,-30.0 ), GC_A(  6,-30.0 ), 0x000002 },
/*MT6140B*/ };
/*MT6140B*/
/*MT6140B*/ /* DCS1800...................................................................*/
/*MT6140B*/
/*MT6140B*/ const  sL1DAGCDATA  AGC_TABLE_DCS1800[2] =
/*MT6140B*/ {  {  GBOUND( -4.0, -6.0 ), GC_A(  0, -4.0 ), 0x000202 },
/*MT6140B*/    {  GBOUND(-30.0,-30.0 ), GC_A(  6,-30.0 ), 0x000002 },
/*MT6140B*/ };
/*MT6140B*/
/*MT6140B*/ /* PCS1900...................................................................*/
/*MT6140B*/
/*MT6140B*/ const  sL1DAGCDATA  AGC_TABLE_PCS1900[2] =
/*MT6140B*/ {  {  GBOUND( -4.0, -6.0 ), GC_A(  0, -4.0 ), 0x000202 },
/*MT6140B*/    {  GBOUND(-30.0,-30.0 ), GC_A(  6,-30.0 ), 0x000002 },
/*MT6140B*/ };
/*MT6140B*/
/*MT6140B*/ /*...........................................................................*/
/*MT6140B*/
/*MT6140B*/ const  sL1DGAINRANGE GAIN_RANGE_TABLE[] =
/*MT6140B*/ {  {                   0,                      0    }, /*#FrequencyBand400  */
/*MT6140B*/    { (int)RF_GSM850_MAXGAIN, (int)RF_GSM850_MINGAIN }, /* FrequencyBand850  */
/*MT6140B*/    { (int)RF_GSM_MAXGAIN,    (int)RF_GSM_MINGAIN    }, /* FrequencyBand900  */
/*MT6140B*/    { (int)RF_DCS_MAXGAIN,    (int)RF_DCS_MINGAIN    }, /* FrequencyBand1800 */
/*MT6140B*/    { (int)RF_PCS_MAXGAIN,    (int)RF_PCS_MINGAIN    }, /* FrequencyBand1900 */
/*MT6140B*/ };
/*MT6140B*/
/*MT6140B*/ const  sL1DAGCDATA *const  AGC_TABLE[] =
/*MT6140B*/ {  0,                                              /*#FrequencyBand400  */
/*MT6140B*/    AGC_TABLE_GSM850,                               /* FrequencyBand850  */
/*MT6140B*/    AGC_TABLE_GSM900,                               /* FrequencyBand900  */
/*MT6140B*/    AGC_TABLE_DCS1800,                              /* FrequencyBand1800 */
/*MT6140B*/    AGC_TABLE_PCS1900,                              /* FrequencyBand1900 */
/*MT6140B*/ };
/*MT6140B*/
/*MT6140B*/ /*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
/*MT6140B*/
/*MT6140B*/ int   L1D_RF_GetGainSetting( int rf_band, int arfcn, int request_gain, long *gain_setting )
/*MT6140B*/ {  int   max_gain, min_gain, real_gain;
/*MT6140B*/    const int*    d32ptr;
/*MT6140B*/    const sL1DAGCDATA*  agcptr;
/*MT6140B*/    long  setting;
/*MT6140B*/    int   bit_no;
/*MT6140B*/
/*MT6140B*/    /* evaluate the range of available gain */
/*MT6140B*/    d32ptr  = (int*)&(GAIN_RANGE_TABLE[rf_band]);
/*MT6140B*/    max_gain = *d32ptr++;
/*MT6140B*/    min_gain = *d32ptr;
/*MT6140B*/
/*MT6140B*/    /* clipping the request gain to the avialable gain */
/*MT6140B*/    if( request_gain>=max_gain )
/*MT6140B*/    {  request_gain = max_gain;  }
/*MT6140B*/    else  if( request_gain<=min_gain )
/*MT6140B*/    {  request_gain = min_gain;  }
/*MT6140B*/
/*MT6140B*/    /* evaluate the real gain setting */
/*MT6140B*/    agcptr = AGC_TABLE[rf_band];
/*MT6140B*/    if( request_gain < agcptr->pos_gain )
/*MT6140B*/    {  agcptr++;
/*MT6140B*/    }
/*MT6140B*/    {  bit_no    = BIT_NO( request_gain, agcptr->A, GC_B );
/*MT6140B*/       real_gain = REAL_GAIN( bit_no, agcptr->A, GC_B );
/*MT6140B*/       setting   = agcptr->setting + (bit_no<<4);
/*MT6140B*/    }
/*MT6140B*/
/*MT6140B*/    *gain_setting = setting;
/*MT6140B*/    return( real_gain );
/*MT6140B*/ }
/*MT6140B*/
#endif

#if IS_RF_MT6140C
/*MT6140C*/
/*MT6140C*/ #define  GAIN_STEP               2
/*MT6140C*/
/*MT6140C*/ #define  RF_GSM850_MAXGAIN      (  54.0*(PWRRES))
/*MT6140C*/ #define  RF_GSM850_MINGAIN      ( -30.0*(PWRRES))
/*MT6140C*/ #define  RF_GSM_MAXGAIN         (  54.0*(PWRRES))
/*MT6140C*/ #define  RF_GSM_MINGAIN         ( -30.0*(PWRRES))
/*MT6140C*/ #define  RF_DCS_MAXGAIN         (  54.0*(PWRRES))
/*MT6140C*/ #define  RF_DCS_MINGAIN         ( -32.0*(PWRRES))
/*MT6140C*/ #define  RF_PCS_MAXGAIN         (  54.0*(PWRRES))
/*MT6140C*/ #define  RF_PCS_MINGAIN         ( -32.0*(PWRRES))
/*MT6140C*/
/*MT6140C*/ /* GSM850....................................................................*/
/*MT6140C*/
/*MT6140C*/ const  sL1DAGCDATA  AGC_TABLE_GSM850[2] =
/*MT6140C*/ {  {  GBOUND( -6.0, -8.0 ), GC_A(  0, -6.0 ), 0x000202 },
/*MT6140C*/    {  GBOUND(-30.0,-30.0 ), GC_A(  6,-30.0 ), 0x000002 },
/*MT6140C*/ };
/*MT6140C*/
/*MT6140C*/ /* GSM900....................................................................*/
/*MT6140C*/
/*MT6140C*/ const  sL1DAGCDATA  AGC_TABLE_GSM900[2] =
/*MT6140C*/ {  {  GBOUND( -6.0, -8.0 ), GC_A(  0, -6.0 ), 0x000202 },
/*MT6140C*/    {  GBOUND(-30.0,-30.0 ), GC_A(  6,-30.0 ), 0x000002 },
/*MT6140C*/ };
/*MT6140C*/
/*MT6140C*/ /* DCS1800...................................................................*/
/*MT6140C*/
/*MT6140C*/ const  sL1DAGCDATA  AGC_TABLE_DCS1800[2] =
/*MT6140C*/ {  {  GBOUND( -6.0, -8.0 ), GC_A(  0, -6.0 ), 0x000202 },
/*MT6140C*/    {  GBOUND(-30.0,-30.0 ), GC_A(  6,-30.0 ), 0x000002 },
/*MT6140C*/ };
/*MT6140C*/
/*MT6140C*/ /* PCS1900...................................................................*/
/*MT6140C*/
/*MT6140C*/ const  sL1DAGCDATA  AGC_TABLE_PCS1900[2] =
/*MT6140C*/ {  {  GBOUND( -6.0, -8.0 ), GC_A(  0, -6.0 ), 0x000202 },
/*MT6140C*/    {  GBOUND(-30.0,-30.0 ), GC_A(  6,-30.0 ), 0x000002 },
/*MT6140C*/ };
/*MT6140C*/
/*MT6140C*/ /*...........................................................................*/
/*MT6140C*/
/*MT6140C*/ const  sL1DGAINRANGE GAIN_RANGE_TABLE[] =
/*MT6140C*/ {  {                   0,                      0    }, /*#FrequencyBand400  */
/*MT6140C*/    { (int)RF_GSM850_MAXGAIN, (int)RF_GSM850_MINGAIN }, /* FrequencyBand850  */
/*MT6140C*/    { (int)RF_GSM_MAXGAIN,    (int)RF_GSM_MINGAIN    }, /* FrequencyBand900  */
/*MT6140C*/    { (int)RF_DCS_MAXGAIN,    (int)RF_DCS_MINGAIN    }, /* FrequencyBand1800 */
/*MT6140C*/    { (int)RF_PCS_MAXGAIN,    (int)RF_PCS_MINGAIN    }, /* FrequencyBand1900 */
/*MT6140C*/ };
/*MT6140C*/
/*MT6140C*/ const  sL1DAGCDATA *const  AGC_TABLE[] =
/*MT6140C*/ {  0,                                              /*#FrequencyBand400  */
/*MT6140C*/    AGC_TABLE_GSM850,                               /* FrequencyBand850  */
/*MT6140C*/    AGC_TABLE_GSM900,                               /* FrequencyBand900  */
/*MT6140C*/    AGC_TABLE_DCS1800,                              /* FrequencyBand1800 */
/*MT6140C*/    AGC_TABLE_PCS1900,                              /* FrequencyBand1900 */
/*MT6140C*/ };
/*MT6140C*/
/*MT6140C*/ /*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
/*MT6140C*/
/*MT6140C*/ int   L1D_RF_GetGainSetting( int rf_band, int arfcn, int request_gain, long *gain_setting )
/*MT6140C*/ {  int   max_gain, min_gain, real_gain;
/*MT6140C*/    const int*    d32ptr;
/*MT6140C*/    const sL1DAGCDATA*  agcptr;
/*MT6140C*/    long  setting;
/*MT6140C*/    int   bit_no;
/*MT6140C*/
/*MT6140C*/    /* evaluate the range of available gain */
/*MT6140C*/    d32ptr  = (int*)&(GAIN_RANGE_TABLE[rf_band]);
/*MT6140C*/    max_gain = *d32ptr++;
/*MT6140C*/    min_gain = *d32ptr;
/*MT6140C*/
/*MT6140C*/    /* clipping the request gain to the avialable gain */
/*MT6140C*/    if( request_gain>=max_gain )
/*MT6140C*/    {  request_gain = max_gain;  }
/*MT6140C*/    else  if( request_gain<=min_gain )
/*MT6140C*/    {  request_gain = min_gain;  }
/*MT6140C*/
/*MT6140C*/    /* evaluate the real gain setting */
/*MT6140C*/    agcptr = AGC_TABLE[rf_band];
/*MT6140C*/    if( request_gain < agcptr->pos_gain )
/*MT6140C*/    {  agcptr++;
/*MT6140C*/    }
/*MT6140C*/    {  bit_no    = BIT_NO( request_gain, agcptr->A, GC_B );
/*MT6140C*/       real_gain = REAL_GAIN( bit_no, agcptr->A, GC_B );
/*MT6140C*/       setting   = agcptr->setting + (bit_no<<4);
/*MT6140C*/    }
/*MT6140C*/
/*MT6140C*/    *gain_setting = setting;
/*MT6140C*/    return( real_gain );
/*MT6140C*/ }
/*MT6140C*/
#endif

#if IS_RF_MT6140D
/*MT6140D*/
/*MT6140D*/ #define  GAIN_STEP               2
/*MT6140D*/ #define  PVOFSL                 34
/*MT6140D*/ #define  PVOFSH                 34
/*MT6140D*/ #define  RF_GSM850_MAXGAIN      (( 90-PVOFSL )*(PWRRES))
/*MT6140D*/ #define  RF_GSM850_MINGAIN      ((  6-PVOFSL )*(PWRRES))
/*MT6140D*/ #define  RF_GSM_MAXGAIN         (( 90-PVOFSL )*(PWRRES))
/*MT6140D*/ #define  RF_GSM_MINGAIN         ((  6-PVOFSL )*(PWRRES))
/*MT6140D*/ #define  RF_DCS_MAXGAIN         (( 88-PVOFSH )*(PWRRES))
/*MT6140D*/ #define  RF_DCS_MINGAIN         ((  2-PVOFSH )*(PWRRES))
/*MT6140D*/ #define  RF_PCS_MAXGAIN         (( 88-PVOFSH )*(PWRRES))
/*MT6140D*/ #define  RF_PCS_MINGAIN         ((  2-PVOFSH )*(PWRRES))
/*MT6140D*/
/*MT6140D*/ /* GSM850....................................................................*/
/*MT6140D*/
/*MT6140D*/ const  sL1DAGCDATA  AGC_TABLE_GSM850[2] =
/*MT6140D*/ {  {  GBOUND(( 30-PVOFSL ),( 28-PVOFSL ) ), GC_A( 0,( 30-PVOFSL ) ), 0x000202 },
/*MT6140D*/    {  GBOUND((  4-PVOFSL ),(  4-PVOFSL ) ), GC_A( 5,(  4-PVOFSL ) ), 0x000002 },
/*MT6140D*/ };
/*MT6140D*/
/*MT6140D*/ /* GSM900....................................................................*/
/*MT6140D*/
/*MT6140D*/ const  sL1DAGCDATA  AGC_TABLE_GSM900[2] =
/*MT6140D*/ {  {  GBOUND(( 30-PVOFSL ),( 28-PVOFSL ) ), GC_A( 0,( 30-PVOFSL ) ), 0x000202 },
/*MT6140D*/    {  GBOUND((  4-PVOFSL ),(  4-PVOFSL ) ), GC_A( 5,(  4-PVOFSL ) ), 0x000002 },
/*MT6140D*/ };
/*MT6140D*/
/*MT6140D*/ /* DCS1800...................................................................*/
/*MT6140D*/
/*MT6140D*/ const  sL1DAGCDATA  AGC_TABLE_DCS1800[2] =
/*MT6140D*/ {  {  GBOUND(( 28-PVOFSH ),( 26-PVOFSH ) ), GC_A( 0,( 28-PVOFSH ) ), 0x000202 },
/*MT6140D*/    {  GBOUND((  2-PVOFSH ),(  2-PVOFSH ) ), GC_A( 6,(  2-PVOFSH ) ), 0x000002 },
/*MT6140D*/ };
/*MT6140D*/
/*MT6140D*/ /* PCS1900...................................................................*/
/*MT6140D*/
/*MT6140D*/ const  sL1DAGCDATA  AGC_TABLE_PCS1900[2] =
/*MT6140D*/ {  {  GBOUND(( 28-PVOFSH ),( 26-PVOFSH ) ), GC_A( 0,( 28-PVOFSH ) ), 0x000202 },
/*MT6140D*/    {  GBOUND((  2-PVOFSH ),(  2-PVOFSH ) ), GC_A( 6,(  2-PVOFSH ) ), 0x000002 },
/*MT6140D*/ };
/*MT6140D*/
/*MT6140D*/ /*...........................................................................*/
/*MT6140D*/
/*MT6140D*/ const  sL1DGAINRANGE GAIN_RANGE_TABLE[] =
/*MT6140D*/ {  {                   0,                      0    }, /*#FrequencyBand400  */
/*MT6140D*/    { (int)RF_GSM850_MAXGAIN, (int)RF_GSM850_MINGAIN }, /* FrequencyBand850  */
/*MT6140D*/    { (int)RF_GSM_MAXGAIN,    (int)RF_GSM_MINGAIN    }, /* FrequencyBand900  */
/*MT6140D*/    { (int)RF_DCS_MAXGAIN,    (int)RF_DCS_MINGAIN    }, /* FrequencyBand1800 */
/*MT6140D*/    { (int)RF_PCS_MAXGAIN,    (int)RF_PCS_MINGAIN    }, /* FrequencyBand1900 */
/*MT6140D*/ };
/*MT6140D*/
/*MT6140D*/ const  sL1DAGCDATA *const  AGC_TABLE[] =
/*MT6140D*/ {  0,                                              /*#FrequencyBand400  */
/*MT6140D*/    AGC_TABLE_GSM850,                               /* FrequencyBand850  */
/*MT6140D*/    AGC_TABLE_GSM900,                               /* FrequencyBand900  */
/*MT6140D*/    AGC_TABLE_DCS1800,                              /* FrequencyBand1800 */
/*MT6140D*/    AGC_TABLE_PCS1900,                              /* FrequencyBand1900 */
/*MT6140D*/ };
/*MT6140D*/
/*MT6140D*/ /*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
/*MT6140D*/
/*MT6140D*/ int   L1D_RF_GetGainSetting( int rf_band, int arfcn, int request_gain, long *gain_setting )
/*MT6140D*/ {  int   max_gain, min_gain, real_gain;
/*MT6140D*/    const int*    d32ptr;
/*MT6140D*/    const sL1DAGCDATA*  agcptr;
/*MT6140D*/    long  setting;
/*MT6140D*/    int   bit_no;
/*MT6140D*/
/*MT6140D*/    /* evaluate the range of available gain */
/*MT6140D*/    d32ptr  = (int*)&(GAIN_RANGE_TABLE[rf_band]);
/*MT6140D*/    max_gain = *d32ptr++;
/*MT6140D*/    min_gain = *d32ptr;
/*MT6140D*/
/*MT6140D*/    /* clipping the request gain to the avialable gain */
/*MT6140D*/    if( request_gain>=max_gain )
/*MT6140D*/    {  request_gain = max_gain;  }
/*MT6140D*/    else  if( request_gain<=min_gain )
/*MT6140D*/    {  request_gain = min_gain;  }
/*MT6140D*/
/*MT6140D*/    /* evaluate the real gain setting */
/*MT6140D*/    agcptr = AGC_TABLE[rf_band];
/*MT6140D*/    if( request_gain < agcptr->pos_gain )
/*MT6140D*/    {  agcptr++;
/*MT6140D*/    }
/*MT6140D*/    {  bit_no    = BIT_NO( request_gain, agcptr->A, GC_B );
/*MT6140D*/       real_gain = REAL_GAIN( bit_no, agcptr->A, GC_B );
/*MT6140D*/       setting   = agcptr->setting + (bit_no<<4);
/*MT6140D*/    }
/*MT6140D*/
/*MT6140D*/    *gain_setting = setting;
/*MT6140D*/    return( real_gain );
/*MT6140D*/ }
/*MT6140D*/
#endif

#if IS_RF_CMOSEDGE
/*CMOSEDGE*/
/*CMOSEDGE*/ #define  GAIN_STEP               2
/*CMOSEDGE*/ #define  PVOFSL                 38
/*CMOSEDGE*/ #define  PVOFSH                 38
/*CMOSEDGE*/ #define  RF_GSM850_MAXGAIN      (( 96-PVOFSL )*(PWRRES))
/*CMOSEDGE*/ #define  RF_GSM850_MINGAIN      (( 10-PVOFSL )*(PWRRES))
/*CMOSEDGE*/ #define  RF_GSM_MAXGAIN         (( 96-PVOFSL )*(PWRRES))
/*CMOSEDGE*/ #define  RF_GSM_MINGAIN         (( 10-PVOFSL )*(PWRRES))
/*CMOSEDGE*/ #define  RF_DCS_MAXGAIN         (( 96-PVOFSH )*(PWRRES))
/*CMOSEDGE*/ #define  RF_DCS_MINGAIN         (( 10-PVOFSH )*(PWRRES))
/*CMOSEDGE*/ #define  RF_PCS_MAXGAIN         (( 96-PVOFSH )*(PWRRES))
/*CMOSEDGE*/ #define  RF_PCS_MINGAIN         (( 10-PVOFSH )*(PWRRES))
/*CMOSEDGE*/
/*CMOSEDGE*/ /* GSM850....................................................................*/
/*CMOSEDGE*/
/*CMOSEDGE*/ const  sL1DAGCDATA  AGC_TABLE_GSM850[2] =
/*CMOSEDGE*/ {  {  GBOUND(( 36-PVOFSL ),( 34-PVOFSL ) ), GC_A( 0,( 36-PVOFSL ) ), 0x0400020 },
/*CMOSEDGE*/    {  GBOUND(( 10-PVOFSL ),( 10-PVOFSL ) ), GC_A( 0,( 10-PVOFSL ) ), 0x0400000 },
/*CMOSEDGE*/ };
/*CMOSEDGE*/
/*CMOSEDGE*/ /* GSM900....................................................................*/
/*CMOSEDGE*/
/*CMOSEDGE*/ const  sL1DAGCDATA  AGC_TABLE_GSM900[2] =
/*CMOSEDGE*/ {  {  GBOUND(( 36-PVOFSL ),( 34-PVOFSL ) ), GC_A( 0,( 36-PVOFSL ) ), 0x0400020 },
/*CMOSEDGE*/    {  GBOUND(( 10-PVOFSL ),( 10-PVOFSL ) ), GC_A( 0,( 10-PVOFSL ) ), 0x0400000 },
/*CMOSEDGE*/ };
/*CMOSEDGE*/
/*CMOSEDGE*/ /* DCS1800...................................................................*/
/*CMOSEDGE*/
/*CMOSEDGE*/ const  sL1DAGCDATA  AGC_TABLE_DCS1800[2] =
/*CMOSEDGE*/ {  {  GBOUND(( 36-PVOFSL ),( 34-PVOFSL ) ), GC_A( 0,( 36-PVOFSL ) ), 0x0400020 },
/*CMOSEDGE*/    {  GBOUND(( 10-PVOFSL ),( 10-PVOFSL ) ), GC_A( 0,( 10-PVOFSL ) ), 0x0400000 },
/*CMOSEDGE*/ };
/*CMOSEDGE*/
/*CMOSEDGE*/ /* PCS1900...................................................................*/
/*CMOSEDGE*/
/*CMOSEDGE*/ const  sL1DAGCDATA  AGC_TABLE_PCS1900[2] =
/*CMOSEDGE*/ {  {  GBOUND(( 36-PVOFSL ),( 34-PVOFSL ) ), GC_A( 0,( 36-PVOFSL ) ), 0x0400020 },
/*CMOSEDGE*/    {  GBOUND(( 10-PVOFSL ),( 10-PVOFSL ) ), GC_A( 0,( 10-PVOFSL ) ), 0x0400000 },
/*CMOSEDGE*/ };
/*CMOSEDGE*/
/*CMOSEDGE*/ /*...........................................................................*/
/*CMOSEDGE*/
/*CMOSEDGE*/ const  sL1DGAINRANGE GAIN_RANGE_TABLE[] =
/*CMOSEDGE*/ {  {                   0,                      0    }, /*#FrequencyBand400  */
/*CMOSEDGE*/    { (int)RF_GSM850_MAXGAIN, (int)RF_GSM850_MINGAIN }, /* FrequencyBand850  */
/*CMOSEDGE*/    { (int)RF_GSM_MAXGAIN,    (int)RF_GSM_MINGAIN    }, /* FrequencyBand900  */
/*CMOSEDGE*/    { (int)RF_DCS_MAXGAIN,    (int)RF_DCS_MINGAIN    }, /* FrequencyBand1800 */
/*CMOSEDGE*/    { (int)RF_PCS_MAXGAIN,    (int)RF_PCS_MINGAIN    }, /* FrequencyBand1900 */
/*CMOSEDGE*/ };
/*CMOSEDGE*/
/*CMOSEDGE*/ const  sL1DAGCDATA *const  AGC_TABLE[] =
/*CMOSEDGE*/ {  0,                                              /*#FrequencyBand400  */
/*CMOSEDGE*/    AGC_TABLE_GSM850,                               /* FrequencyBand850  */
/*CMOSEDGE*/    AGC_TABLE_GSM900,                               /* FrequencyBand900  */
/*CMOSEDGE*/    AGC_TABLE_DCS1800,                              /* FrequencyBand1800 */
/*CMOSEDGE*/    AGC_TABLE_PCS1900,                              /* FrequencyBand1900 */
/*CMOSEDGE*/ };
/*CMOSEDGE*/
/*CMOSEDGE*/ /*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
/*CMOSEDGE*/
/*CMOSEDGE*/ int   L1D_RF_GetGainSetting( int rf_band, int arfcn, int request_gain, long *gain_setting )
/*CMOSEDGE*/ {  int   max_gain, min_gain, real_gain;
/*CMOSEDGE*/    const int*    d32ptr;
/*CMOSEDGE*/    const sL1DAGCDATA*  agcptr;
/*CMOSEDGE*/    long  setting;
/*CMOSEDGE*/    int   bit_no;
/*CMOSEDGE*/
/*CMOSEDGE*/    /* evaluate the range of available gain */
/*CMOSEDGE*/    d32ptr  = (int*)&(GAIN_RANGE_TABLE[rf_band]);
/*CMOSEDGE*/    max_gain = *d32ptr++;
/*CMOSEDGE*/    min_gain = *d32ptr;
/*CMOSEDGE*/
/*CMOSEDGE*/    /* clipping the request gain to the avialable gain */
/*CMOSEDGE*/    if( request_gain>=max_gain )
/*CMOSEDGE*/    {  request_gain = max_gain;  }
/*CMOSEDGE*/    else  if( request_gain<=min_gain )
/*CMOSEDGE*/    {  request_gain = min_gain;  }
/*CMOSEDGE*/
/*CMOSEDGE*/    /* evaluate the real gain setting */
/*CMOSEDGE*/    agcptr = AGC_TABLE[rf_band];
/*CMOSEDGE*/    if( request_gain < agcptr->pos_gain )
/*CMOSEDGE*/    {  agcptr++;
/*CMOSEDGE*/    }
/*CMOSEDGE*/    {  bit_no    = BIT_NO( request_gain, agcptr->A, GC_B );
/*CMOSEDGE*/       real_gain = REAL_GAIN( bit_no, agcptr->A, GC_B );
/*CMOSEDGE*/       setting   = agcptr->setting + bit_no;
/*CMOSEDGE*/    }
/*CMOSEDGE*/
/*CMOSEDGE*/    *gain_setting = setting;
/*CMOSEDGE*/    return( real_gain );
/*CMOSEDGE*/ }
/*CMOSEDGE*/
#endif

#if IS_RF_MTKSOC1T
/*MTKSOC1T*/
/*MTKSOC1T*/ #define  GAIN_STEP               2
/*MTKSOC1T*/ #define  PVOFSL                  39
/*MTKSOC1T*/ #define  PVOFSH                  39
/*MTKSOC1T*/ #define  RF_GSM850_MAXGAIN      (( 98-PVOFSL )*(PWRRES))
/*MTKSOC1T*/ #define  RF_GSM850_MINGAIN      (( 12-PVOFSL )*(PWRRES))
/*MTKSOC1T*/ #define  RF_GSM_MAXGAIN         (( 98-PVOFSL )*(PWRRES))
/*MTKSOC1T*/ #define  RF_GSM_MINGAIN         (( 12-PVOFSL )*(PWRRES))
/*MTKSOC1T*/ #define  RF_DCS_MAXGAIN         (( 98-PVOFSH )*(PWRRES))
/*MTKSOC1T*/ #define  RF_DCS_MINGAIN         (( 12-PVOFSH )*(PWRRES))
/*MTKSOC1T*/ #define  RF_PCS_MAXGAIN         (( 98-PVOFSH )*(PWRRES))
/*MTKSOC1T*/ #define  RF_PCS_MINGAIN         (( 12-PVOFSH )*(PWRRES))
/*MTKSOC1T*/
/*MTKSOC1T*/ /* GSM850....................................................................*/
/*MTKSOC1T*/
/*MTKSOC1T*/ const  sL1DAGCDATA  AGC_TABLE_GSM850[2] =
/*MTKSOC1T*/ {  {  GBOUND(( 38-PVOFSL ),( 36-PVOFSL ) ), GC_A( 0,( 38-PVOFSL ) ), 0x0400020 },
/*MTKSOC1T*/    {  GBOUND(( 12-PVOFSL ),( 12-PVOFSL ) ), GC_A( 0,( 12-PVOFSL ) ), 0x0400000 },
/*MTKSOC1T*/ };
/*MTKSOC1T*/
/*MTKSOC1T*/ /* GSM900....................................................................*/
/*MTKSOC1T*/
/*MTKSOC1T*/ const  sL1DAGCDATA  AGC_TABLE_GSM900[2] =
/*MTKSOC1T*/ {  {  GBOUND(( 38-PVOFSL ),( 36-PVOFSL ) ), GC_A( 0,( 38-PVOFSL ) ), 0x0400020 },
/*MTKSOC1T*/    {  GBOUND(( 12-PVOFSL ),( 12-PVOFSL ) ), GC_A( 0,( 12-PVOFSL ) ), 0x0400000 },
/*MTKSOC1T*/ };
/*MTKSOC1T*/
/*MTKSOC1T*/ /* DCS1800...................................................................*/
/*MTKSOC1T*/
/*MTKSOC1T*/ const  sL1DAGCDATA  AGC_TABLE_DCS1800[2] =
/*MTKSOC1T*/ {  {  GBOUND(( 38-PVOFSL ),( 36-PVOFSL ) ), GC_A( 0,( 38-PVOFSL ) ), 0x0400020 },
/*MTKSOC1T*/    {  GBOUND(( 12-PVOFSL ),( 12-PVOFSL ) ), GC_A( 0,( 12-PVOFSL ) ), 0x0400000 },
/*MTKSOC1T*/ };
/*MTKSOC1T*/
/*MTKSOC1T*/ /* PCS1900...................................................................*/
/*MTKSOC1T*/
/*MTKSOC1T*/ const  sL1DAGCDATA  AGC_TABLE_PCS1900[2] =
/*MTKSOC1T*/ {  {  GBOUND(( 38-PVOFSL ),( 36-PVOFSL ) ), GC_A( 0,( 38-PVOFSL ) ), 0x0400020 },
/*MTKSOC1T*/    {  GBOUND(( 12-PVOFSL ),( 12-PVOFSL ) ), GC_A( 0,( 12-PVOFSL ) ), 0x0400000 },
/*MTKSOC1T*/ };
/*MTKSOC1T*/
/*MTKSOC1T*/ /*...........................................................................*/
/*MTKSOC1T*/
/*MTKSOC1T*/ const  sL1DGAINRANGE GAIN_RANGE_TABLE[] =
/*MTKSOC1T*/ {  {                   0,                      0    }, /*#FrequencyBand400  */
/*MTKSOC1T*/    { (int)RF_GSM850_MAXGAIN, (int)RF_GSM850_MINGAIN }, /* FrequencyBand850  */
/*MTKSOC1T*/    { (int)RF_GSM_MAXGAIN,    (int)RF_GSM_MINGAIN    }, /* FrequencyBand900  */
/*MTKSOC1T*/    { (int)RF_DCS_MAXGAIN,    (int)RF_DCS_MINGAIN    }, /* FrequencyBand1800 */
/*MTKSOC1T*/    { (int)RF_PCS_MAXGAIN,    (int)RF_PCS_MINGAIN    }, /* FrequencyBand1900 */
/*MTKSOC1T*/ };
/*MTKSOC1T*/
/*MTKSOC1T*/ const  sL1DAGCDATA *const  AGC_TABLE[] =
/*MTKSOC1T*/ {  0,                                              /*#FrequencyBand400  */
/*MTKSOC1T*/    AGC_TABLE_GSM850,                               /* FrequencyBand850  */
/*MTKSOC1T*/    AGC_TABLE_GSM900,                               /* FrequencyBand900  */
/*MTKSOC1T*/    AGC_TABLE_DCS1800,                              /* FrequencyBand1800 */
/*MTKSOC1T*/    AGC_TABLE_PCS1900,                              /* FrequencyBand1900 */
/*MTKSOC1T*/ };
/*MTKSOC1T*/
/*MTKSOC1T*/ /*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
/*MTKSOC1T*/
/*MTKSOC1T*/ int   L1D_RF_GetGainSetting( int rf_band, int arfcn, int request_gain, long *gain_setting )
/*MTKSOC1T*/ {  int   max_gain, min_gain, real_gain;
/*MTKSOC1T*/    const int*    d32ptr;
/*MTKSOC1T*/    const sL1DAGCDATA*  agcptr;
/*MTKSOC1T*/    long  setting;
/*MTKSOC1T*/    int   bit_no;
/*MTKSOC1T*/
/*MTKSOC1T*/    /* evaluate the range of available gain */
/*MTKSOC1T*/    d32ptr  = (int*)&(GAIN_RANGE_TABLE[rf_band]);
/*MTKSOC1T*/    max_gain = *d32ptr++;
/*MTKSOC1T*/    min_gain = *d32ptr;
/*MTKSOC1T*/
/*MTKSOC1T*/    /* clipping the request gain to the avialable gain */
/*MTKSOC1T*/    if( request_gain>=max_gain )
/*MTKSOC1T*/    {  request_gain = max_gain;  }
/*MTKSOC1T*/    else  if( request_gain<=min_gain )
/*MTKSOC1T*/    {  request_gain = min_gain;  }
/*MTKSOC1T*/
/*MTKSOC1T*/    /* evaluate the real gain setting */
/*MTKSOC1T*/    agcptr = AGC_TABLE[rf_band];
/*MTKSOC1T*/    if( request_gain < agcptr->pos_gain )
/*MTKSOC1T*/    {  agcptr++;
/*MTKSOC1T*/    }
/*MTKSOC1T*/    {  bit_no    = BIT_NO( request_gain, agcptr->A, GC_B );
/*MTKSOC1T*/       real_gain = REAL_GAIN( bit_no, agcptr->A, GC_B );
/*MTKSOC1T*/       setting   = agcptr->setting + bit_no;
/*MTKSOC1T*/    }
/*MTKSOC1T*/
/*MTKSOC1T*/    *gain_setting = setting;
/*MTKSOC1T*/    return( real_gain );
/*MTKSOC1T*/ }
/*MTKSOC1T*/
#endif

#if IS_RF_MTKSOC1
/*MTKSOC1*/
/*MTKSOC1*/ #define  GAIN_STEP               2
/*MTKSOC1*/ #define  PVOFSL                  39
/*MTKSOC1*/ #define  PVOFSH                  39
/*MTKSOC1*/ #define  RF_GSM850_MAXGAIN      (( 94-PVOFSL )*(PWRRES))
/*MTKSOC1*/ #define  RF_GSM850_MINGAIN      (( 14-PVOFSL )*(PWRRES))
/*MTKSOC1*/ #define  RF_GSM_MAXGAIN         (( 94-PVOFSL )*(PWRRES))
/*MTKSOC1*/ #define  RF_GSM_MINGAIN         (( 14-PVOFSL )*(PWRRES))
/*MTKSOC1*/ #define  RF_DCS_MAXGAIN         (( 94-PVOFSH )*(PWRRES))
/*MTKSOC1*/ #define  RF_DCS_MINGAIN         (( 14-PVOFSH )*(PWRRES))
/*MTKSOC1*/ #define  RF_PCS_MAXGAIN         (( 94-PVOFSH )*(PWRRES))
/*MTKSOC1*/ #define  RF_PCS_MINGAIN         (( 14-PVOFSH )*(PWRRES))
/*MTKSOC1*/
/*MTKSOC1*/ /* GSM850....................................................................*/
/*MTKSOC1*/
/*MTKSOC1*/ const  sL1DAGCDATA  AGC_TABLE_GSM850[2] =
/*MTKSOC1*/ {  {  GBOUND(( 40-PVOFSL ),( 38-PVOFSL ) ), GC_A(  0,( 40-PVOFSL ) ), 0x0400020 },
/*MTKSOC1*/    {  GBOUND(( 14-PVOFSL ),( 14-PVOFSL ) ), GC_A(  0,( 14-PVOFSL ) ), 0x0400000 },
/*MTKSOC1*/ };
/*MTKSOC1*/
/*MTKSOC1*/ /* GSM900....................................................................*/
/*MTKSOC1*/
/*MTKSOC1*/ const  sL1DAGCDATA  AGC_TABLE_GSM900[2] =
/*MTKSOC1*/ {  {  GBOUND(( 40-PVOFSL ),( 38-PVOFSL ) ), GC_A(  0,( 40-PVOFSL ) ), 0x0400020 },
/*MTKSOC1*/    {  GBOUND(( 14-PVOFSL ),( 14-PVOFSL ) ), GC_A(  0,( 14-PVOFSL ) ), 0x0400000 },
/*MTKSOC1*/ };
/*MTKSOC1*/
/*MTKSOC1*/ /* DCS1800...................................................................*/
/*MTKSOC1*/
/*MTKSOC1*/ const  sL1DAGCDATA  AGC_TABLE_DCS1800[2] =
/*MTKSOC1*/ {  {  GBOUND(( 40-PVOFSL ),( 38-PVOFSL ) ), GC_A(  0,( 40-PVOFSL ) ), 0x0400020 },
/*MTKSOC1*/    {  GBOUND(( 14-PVOFSL ),( 14-PVOFSL ) ), GC_A(  0,( 14-PVOFSL ) ), 0x0400000 },
/*MTKSOC1*/ };
/*MTKSOC1*/
/*MTKSOC1*/ /* PCS1900...................................................................*/
/*MTKSOC1*/
/*MTKSOC1*/ const  sL1DAGCDATA  AGC_TABLE_PCS1900[2] =
/*MTKSOC1*/ {  {  GBOUND(( 40-PVOFSL ),( 38-PVOFSL ) ), GC_A(  0,( 40-PVOFSL ) ), 0x0400020 },
/*MTKSOC1*/    {  GBOUND(( 14-PVOFSL ),( 14-PVOFSL ) ), GC_A(  0,( 14-PVOFSL ) ), 0x0400000 },
/*MTKSOC1*/ };
/*MTKSOC1*/
/*MTKSOC1*/ /*...........................................................................*/
/*MTKSOC1*/
/*MTKSOC1*/ const  sL1DGAINRANGE GAIN_RANGE_TABLE[] =
/*MTKSOC1*/ {  {                   0,                      0    }, /*#FrequencyBand400  */
/*MTKSOC1*/    { (int)RF_GSM850_MAXGAIN, (int)RF_GSM850_MINGAIN }, /* FrequencyBand850  */
/*MTKSOC1*/    { (int)RF_GSM_MAXGAIN,    (int)RF_GSM_MINGAIN    }, /* FrequencyBand900  */
/*MTKSOC1*/    { (int)RF_DCS_MAXGAIN,    (int)RF_DCS_MINGAIN    }, /* FrequencyBand1800 */
/*MTKSOC1*/    { (int)RF_PCS_MAXGAIN,    (int)RF_PCS_MINGAIN    }, /* FrequencyBand1900 */
/*MTKSOC1*/ };
/*MTKSOC1*/
/*MTKSOC1*/ const  sL1DAGCDATA *const  AGC_TABLE[] =
/*MTKSOC1*/ {  0,                                              /*#FrequencyBand400  */
/*MTKSOC1*/    AGC_TABLE_GSM850,                               /* FrequencyBand850  */
/*MTKSOC1*/    AGC_TABLE_GSM900,                               /* FrequencyBand900  */
/*MTKSOC1*/    AGC_TABLE_DCS1800,                              /* FrequencyBand1800 */
/*MTKSOC1*/    AGC_TABLE_PCS1900,                              /* FrequencyBand1900 */
/*MTKSOC1*/ };
/*MTKSOC1*/
/*MTKSOC1*/ /*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
/*MTKSOC1*/
/*MTKSOC1*/ int   L1D_RF_GetGainSetting( int rf_band, int arfcn, int request_gain, long *gain_setting )
/*MTKSOC1*/ {  int   max_gain, min_gain, real_gain;
/*MTKSOC1*/    const int*    d32ptr;
/*MTKSOC1*/    const sL1DAGCDATA*  agcptr;
/*MTKSOC1*/    long  setting;
/*MTKSOC1*/    int   bit_no;
/*MTKSOC1*/
/*MTKSOC1*/    /* evaluate the range of available gain */
/*MTKSOC1*/    d32ptr  = (int*)&(GAIN_RANGE_TABLE[rf_band]);
/*MTKSOC1*/    max_gain = *d32ptr++;
/*MTKSOC1*/    min_gain = *d32ptr;
/*MTKSOC1*/
/*MTKSOC1*/    /* clipping the request gain to the avialable gain */
/*MTKSOC1*/    if( request_gain>=max_gain )
/*MTKSOC1*/    {  request_gain = max_gain;  }
/*MTKSOC1*/    else  if( request_gain<=min_gain )
/*MTKSOC1*/    {  request_gain = min_gain;  }
/*MTKSOC1*/
/*MTKSOC1*/    /* evaluate the real gain setting */
/*MTKSOC1*/    agcptr = AGC_TABLE[rf_band];
/*MTKSOC1*/    if( request_gain < agcptr->pos_gain )
/*MTKSOC1*/    {  agcptr++;
/*MTKSOC1*/    }
/*MTKSOC1*/    {  bit_no    = BIT_NO( request_gain, agcptr->A, GC_B );
/*MTKSOC1*/       real_gain = REAL_GAIN( bit_no, agcptr->A, GC_B );
/*MTKSOC1*/       setting   = agcptr->setting + bit_no;
/*MTKSOC1*/    }
/*MTKSOC1*/
/*MTKSOC1*/    *gain_setting = setting;
/*MTKSOC1*/    return( real_gain );
/*MTKSOC1*/ }
/*MTKSOC1*/
#endif

#if IS_RF_MT6252RF
/*MT6252RF*/
/*MT6252RF*/ #define  GAIN_STEP               2
/*MT6252RF*/ #define  PVOFSL                  39
/*MT6252RF*/ #define  PVOFSH                  39
/*MT6252RF*/ #define  RF_GSM850_MAXGAIN      (( 96-PVOFSL )*(PWRRES))
/*MT6252RF*/ #define  RF_GSM850_MINGAIN      (( 16-PVOFSL )*(PWRRES))
/*MT6252RF*/ #define  RF_GSM_MAXGAIN         (( 96-PVOFSL )*(PWRRES))
/*MT6252RF*/ #define  RF_GSM_MINGAIN         (( 16-PVOFSL )*(PWRRES))
/*MT6252RF*/ #define  RF_DCS_MAXGAIN         (( 96-PVOFSH )*(PWRRES))
/*MT6252RF*/ #define  RF_DCS_MINGAIN         (( 16-PVOFSH )*(PWRRES))
/*MT6252RF*/ #define  RF_PCS_MAXGAIN         (( 96-PVOFSH )*(PWRRES))
/*MT6252RF*/ #define  RF_PCS_MINGAIN         (( 16-PVOFSH )*(PWRRES))
/*MT6252RF*/
/*MT6252RF*/ /* GSM850....................................................................*/
/*MT6252RF*/
/*MT6252RF*/ const  sL1DAGCDATA  AGC_TABLE_GSM850[2] =
/*MT6252RF*/ {  {  GBOUND(( 42-PVOFSL ),( 40-PVOFSL ) ), GC_A( 0, ( 42-PVOFSL ) ), 0x6000020 },
/*MT6252RF*/    {  GBOUND(( 16-PVOFSL ),( 16-PVOFSL ) ), GC_A( 0, ( 16-PVOFSL ) ), 0x6000000 },
/*MT6252RF*/ };
/*MT6252RF*/
/*MT6252RF*/ /* GSM900....................................................................*/
/*MT6252RF*/
/*MT6252RF*/ const  sL1DAGCDATA  AGC_TABLE_GSM900[2] =
/*MT6252RF*/ {  {  GBOUND(( 42-PVOFSL ),( 40-PVOFSL ) ), GC_A( 0, ( 42-PVOFSL ) ), 0x6000020 },
/*MT6252RF*/    {  GBOUND(( 16-PVOFSL ),( 16-PVOFSL ) ), GC_A( 0, ( 16-PVOFSL ) ), 0x6000000 },
/*MT6252RF*/ };
/*MT6252RF*/
/*MT6252RF*/ /* DCS1800...................................................................*/
/*MT6252RF*/
/*MT6252RF*/ const  sL1DAGCDATA  AGC_TABLE_DCS1800[2] =
/*MT6252RF*/ {  {  GBOUND(( 42-PVOFSL ),( 40-PVOFSL ) ), GC_A( 0, ( 42-PVOFSL ) ), 0x6000020 },
/*MT6252RF*/    {  GBOUND(( 16-PVOFSL ),( 16-PVOFSL ) ), GC_A( 0, ( 16-PVOFSL ) ), 0x6000000 },
/*MT6252RF*/ };
/*MT6252RF*/
/*MT6252RF*/ /* PCS1900...................................................................*/
/*MT6252RF*/
/*MT6252RF*/ const  sL1DAGCDATA  AGC_TABLE_PCS1900[2] =
/*MT6252RF*/ {  {  GBOUND(( 42-PVOFSL ),( 40-PVOFSL ) ), GC_A( 0, ( 42-PVOFSL ) ), 0x6000020 },
/*MT6252RF*/    {  GBOUND(( 16-PVOFSL ),( 16-PVOFSL ) ), GC_A( 0, ( 16-PVOFSL ) ), 0x6000000 },
/*MT6252RF*/ };
/*MT6252RF*/
/*MT6252RF*/ /*...........................................................................*/
/*MT6252RF*/
/*MT6252RF*/ const  sL1DGAINRANGE GAIN_RANGE_TABLE[] =
/*MT6252RF*/ {  {                   0,                      0    }, /* FrequencyBand400  */
/*MT6252RF*/    { (int)RF_GSM850_MAXGAIN, (int)RF_GSM850_MINGAIN }, /* FrequencyBand850  */
/*MT6252RF*/    { (int)RF_GSM_MAXGAIN,    (int)RF_GSM_MINGAIN    }, /* FrequencyBand900  */
/*MT6252RF*/    { (int)RF_DCS_MAXGAIN,    (int)RF_DCS_MINGAIN    }, /* FrequencyBand1800 */
/*MT6252RF*/    { (int)RF_PCS_MAXGAIN,    (int)RF_PCS_MINGAIN    }, /* FrequencyBand1900 */
/*MT6252RF*/ };
/*MT6252RF*/
/*MT6252RF*/ const  sL1DAGCDATA *const  AGC_TABLE[] =
/*MT6252RF*/ {  0,                                                  /* FrequencyBand400  */
/*MT6252RF*/    AGC_TABLE_GSM850,                                   /* FrequencyBand850  */
/*MT6252RF*/    AGC_TABLE_GSM900,                                   /* FrequencyBand900  */
/*MT6252RF*/    AGC_TABLE_DCS1800,                                  /* FrequencyBand1800 */
/*MT6252RF*/    AGC_TABLE_PCS1900,                                  /* FrequencyBand1900 */
/*MT6252RF*/ };
/*MT6252RF*/
/*MT6252RF*/ /*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
/*MT6252RF*/
/*MT6252RF*/ int   L1D_RF_GetGainSetting( int rf_band, int arfcn, int request_gain, long *gain_setting )
/*MT6252RF*/ {  int   max_gain, min_gain, real_gain;
/*MT6252RF*/    const int*    d32ptr;
/*MT6252RF*/    const sL1DAGCDATA*  agcptr;
/*MT6252RF*/    long  setting;
/*MT6252RF*/    int   bit_no;
/*MT6252RF*/
/*MT6252RF*/    /* evaluate the range of available gain */
/*MT6252RF*/    d32ptr  = (int*)&(GAIN_RANGE_TABLE[rf_band]);
/*MT6252RF*/    max_gain = *d32ptr++;
/*MT6252RF*/    min_gain = *d32ptr;
/*MT6252RF*/
/*MT6252RF*/    /* clipping the request gain to the avialable gain */
/*MT6252RF*/    if( request_gain>=max_gain )
/*MT6252RF*/    {  request_gain = max_gain;  }
/*MT6252RF*/    else  if( request_gain<=min_gain )
/*MT6252RF*/    {  request_gain = min_gain;  }
/*MT6252RF*/
/*MT6252RF*/    /* evaluate the real gain setting */
/*MT6252RF*/    agcptr = AGC_TABLE[rf_band];
/*MT6252RF*/    if( request_gain < agcptr->pos_gain )
/*MT6252RF*/    {  agcptr++;
/*MT6252RF*/    }
/*MT6252RF*/    {  bit_no    = BIT_NO( request_gain, agcptr->A, GC_B );
/*MT6252RF*/       real_gain = REAL_GAIN( bit_no, agcptr->A, GC_B );
/*MT6252RF*/       setting   = agcptr->setting + bit_no;
/*MT6252RF*/    }
/*MT6252RF*/
/*MT6252RF*/    *gain_setting = setting;
/*MT6252RF*/    return( real_gain );
/*MT6252RF*/ }
/*MT6252RF*/
#endif

#if IS_RF_MT6256RF
/*MT6256RF*/
/*MT6256RF*/ #define  GAIN_STEP               6
/*MT6256RF*/ #define  PVOFSL                  34
/*MT6256RF*/ #define  PVOFSH                  34
/*MT6256RF*/ #define  INSERTION_LOSS         (3*(PWRRES))  //Insertion loss is 3dB
/*MT6256RF*/ #define  RF_GSM850_MAXGAIN      (( 62-PVOFSL )*(PWRRES))
/*MT6256RF*/ #define  RF_GSM850_MINGAIN      ((  2-PVOFSL )*(PWRRES))
/*MT6256RF*/ #define  RF_GSM_MAXGAIN         (( 62-PVOFSL )*(PWRRES))
/*MT6256RF*/ #define  RF_GSM_MINGAIN         ((  2-PVOFSL )*(PWRRES))
/*MT6256RF*/ #define  RF_DCS_MAXGAIN         (( 62-PVOFSH )*(PWRRES))
/*MT6256RF*/ #define  RF_DCS_MINGAIN         ((  0-PVOFSH )*(PWRRES))
/*MT6256RF*/ #define  RF_PCS_MAXGAIN         (( 62-PVOFSH )*(PWRRES))
/*MT6256RF*/ #define  RF_PCS_MINGAIN         ((  0-PVOFSH )*(PWRRES))
/*MT6256RF*/
/*MT6256RF*/ /* GSM850....................................................................*/
/*MT6256RF*/
/*MT6256RF*/ const  sL1DAGCDATA  AGC_TABLE_GSM850[2] =
/*MT6256RF*/ {  {  GBOUND(( 32-PVOFSL ),( 26-PVOFSL ) ), GC_A( 0,( 32-PVOFSL ) ), BSI_CW(0x60, 0x40) },
/*MT6256RF*/    {  GBOUND((  0-PVOFSL ),(  0-PVOFSL ) ), GC_A( 0,(  2-PVOFSL ) ), BSI_CW(0x60, 0x00) },
/*MT6256RF*/ };
/*MT6256RF*/
/*MT6256RF*/ /* GSM900....................................................................*/
/*MT6256RF*/
/*MT6256RF*/ const  sL1DAGCDATA  AGC_TABLE_GSM900[2] =
/*MT6256RF*/ {  {  GBOUND(( 32-PVOFSL ),( 26-PVOFSL ) ), GC_A( 0,( 32-PVOFSL ) ), BSI_CW(0x60, 0x40) },
/*MT6256RF*/    {  GBOUND((  0-PVOFSL ),(  0-PVOFSL ) ), GC_A( 0,(  2-PVOFSL ) ), BSI_CW(0x60, 0x00) },
/*MT6256RF*/ };
/*MT6256RF*/
/*MT6256RF*/ /* DCS1800...................................................................*/
/*MT6256RF*/
/*MT6256RF*/ const  sL1DAGCDATA  AGC_TABLE_DCS1800[2] =
/*MT6256RF*/ {  {  GBOUND(( 32-PVOFSL ),( 22-PVOFSL ) ), GC_A( 0,( 32-PVOFSL ) ), BSI_CW(0x60, 0x40) },
/*MT6256RF*/    {  GBOUND((  0-PVOFSL ),(  0-PVOFSL ) ), GC_A( 0,(  0-PVOFSL ) ), BSI_CW(0x60, 0x00) },
/*MT6256RF*/ };
/*MT6256RF*/
/*MT6256RF*/ /* PCS1900...................................................................*/
/*MT6256RF*/
/*MT6256RF*/ const  sL1DAGCDATA  AGC_TABLE_PCS1900[2] =
/*MT6256RF*/ {  {  GBOUND(( 32-PVOFSL ),( 22-PVOFSL ) ), GC_A( 0,( 32-PVOFSL ) ), BSI_CW(0x60, 0x40) },
/*MT6256RF*/    {  GBOUND((  0-PVOFSL ),(  0-PVOFSL ) ), GC_A( 0,(  0-PVOFSL ) ), BSI_CW(0x60, 0x00) },
/*MT6256RF*/ };
/*MT6256RF*/
/*MT6256RF*/ /*...........................................................................*/
/*MT6256RF*/
/*MT6256RF*/ const  sL1DGAINRANGE GAIN_RANGE_TABLE[] =
/*MT6256RF*/ {  {                   0,                      0    }, /*#FrequencyBand400  */
/*MT6256RF*/    { (int)RF_GSM850_MAXGAIN, (int)RF_GSM850_MINGAIN }, /* FrequencyBand850  */
/*MT6256RF*/    { (int)RF_GSM_MAXGAIN,    (int)RF_GSM_MINGAIN    }, /* FrequencyBand900  */
/*MT6256RF*/    { (int)RF_DCS_MAXGAIN,    (int)RF_DCS_MINGAIN    }, /* FrequencyBand1800 */
/*MT6256RF*/    { (int)RF_PCS_MAXGAIN,    (int)RF_PCS_MINGAIN    }, /* FrequencyBand1900 */
/*MT6256RF*/ };
/*MT6256RF*/
/*MT6256RF*/ const  sL1DAGCDATA *const  AGC_TABLE[] =
/*MT6256RF*/ {  0,                                              /*#FrequencyBand400  */
/*MT6256RF*/    AGC_TABLE_GSM850,                               /* FrequencyBand850  */
/*MT6256RF*/    AGC_TABLE_GSM900,                               /* FrequencyBand900  */
/*MT6256RF*/    AGC_TABLE_DCS1800,                              /* FrequencyBand1800 */
/*MT6256RF*/    AGC_TABLE_PCS1900,                              /* FrequencyBand1900 */
/*MT6256RF*/ };
/*MT6256RF*/
/*MT6256RF*/ const  int  GAIN_STEP_TABLE[] =
/*MT6256RF*/ { 10, 18, 26, 34, 42, 45, 53 };   /* gain step for high/low LNA gain                */
/*MT6256RF*/                                   /* Low LNA gain  : { 10, 18, 26, 34, 42         } */
/*MT6256RF*/                                   /* High LNA gain : {     18, 26, 34, 42, 45, 53 } */
/*MT6256RF*/
/*MT6256RF*/ /*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
/*MT6256RF*/
/*MT6256RF*/ int   L1D_RF_GetGainSetting( int rf_band, int arfcn, int request_gain, long *gain_setting )
/*MT6256RF*/ {  int   max_gain, min_gain, real_gain;
/*MT6256RF*/    const int*    d32ptr;
/*MT6256RF*/    const sL1DAGCDATA*  agcptr;
/*MT6256RF*/    long  setting;
/*MT6256RF*/    int   bit_no, gain_step, idx_shift_value;
/*MT6256RF*/
/*MT6256RF*/    /* evaluate the range of available gain */
/*MT6256RF*/    d32ptr  = (int*)&(GAIN_RANGE_TABLE[rf_band]);
/*MT6256RF*/    max_gain = *d32ptr++;
/*MT6256RF*/    min_gain = *d32ptr;
/*MT6256RF*/
/*MT6256RF*/    /* clipping the request gain to the avialable gain */
/*MT6256RF*/    if( request_gain>=max_gain )
/*MT6256RF*/    {  request_gain = max_gain;  }
/*MT6256RF*/    else  if( request_gain<=min_gain )
/*MT6256RF*/    {  request_gain = min_gain;  }
/*MT6256RF*/
/*MT6256RF*/    /* evaluate the real gain setting */
/*MT6256RF*/    agcptr = AGC_TABLE[rf_band];
/*MT6256RF*/    idx_shift_value = 1;  //Since the lowest gain step of high LNA gain case is 18
/*MT6256RF*/    if( request_gain < agcptr->pos_gain )
/*MT6256RF*/    {  agcptr++;
/*MT6256RF*/       idx_shift_value = 0;
/*MT6256RF*/    }
/*MT6256RF*/    {
/*MT6256RF*/       bit_no = BIT_NO( request_gain, agcptr->A, GC_B );
/*MT6256RF*/       gain_step = GAIN_STEP_TABLE[bit_no+idx_shift_value];  //Use bit_no to choose gain step
/*MT6256RF*/       real_gain = REAL_GAIN( bit_no, agcptr->A, GC_B ) - INSERTION_LOSS;
/*MT6256RF*/       setting   = agcptr->setting + gain_step;
/*MT6256RF*/    }
/*MT6256RF*/
/*MT6256RF*/    *gain_setting = setting;
/*MT6256RF*/    return( real_gain );
/*MT6256RF*/ }
/*MT6256RF*/
   #if IS_W_CANCELLATION_SUPPORT
/*MT6256RF*/ unsigned short   L1D_RF_FindGainStep( unsigned long gain_setting, FrequencyBand rf_band )
/*MT6256RF*/ {
/*MT6256RF*/    int bit_value, shift_value;
/*MT6256RF*/    unsigned short left_idx, right_idx, mid_idx, idx;
/*MT6256RF*/
/*MT6256RF*/    shift_value = (gain_setting>>6) & 0x1;
/*MT6256RF*/    bit_value = gain_setting & 0x3F;
/*MT6256RF*/    left_idx = 0;
/*MT6256RF*/    right_idx = sizeof(GAIN_STEP_TABLE)/sizeof(int)-1;
/*MT6256RF*/
/*MT6256RF*/    while( left_idx < right_idx )
/*MT6256RF*/    {
/*MT6256RF*/       mid_idx = (left_idx + right_idx) >> 1;
/*MT6256RF*/
/*MT6256RF*/       if( bit_value <= GAIN_STEP_TABLE[mid_idx])
/*MT6256RF*/          right_idx = mid_idx;
/*MT6256RF*/       else
/*MT6256RF*/          left_idx = mid_idx + 1;
/*MT6256RF*/    }
/*MT6256RF*/
/*MT6256RF*/    idx = right_idx;
/*MT6256RF*/
/*MT6256RF*/    if( shift_value == 1 )
/*MT6256RF*/       return (idx + 4);
/*MT6256RF*/    else
/*MT6256RF*/       return (idx);
/*MT6256RF*/ }
/*MT6256RF*/
   #endif
#endif

#if IS_RF_MT6251RF || IS_RF_MT6255RF
/*MT6251RF*/
/*MT6251RF*/ #define  GAIN_STEP               6
/*MT6251RF*/ #define  PVOFSL                  34
/*MT6251RF*/ #define  PVOFSH                  34
   #if IS_RF_MT6255RF
/*MT6251RF*/ #define  INSERTION_LOSS         (2*(PWRRES))  //Insertion loss is 2dB
   #else
/*MT6251RF*/ #define  INSERTION_LOSS         (0*(PWRRES))  //Insertion loss is 0dB
   #endif
/*MT6251RF*/ #define  RF_GSM850_MAXGAIN      (( 62-PVOFSL )*(PWRRES))
/*MT6251RF*/ #define  RF_GSM850_MINGAIN      ((  0-PVOFSL )*(PWRRES))
/*MT6251RF*/ #define  RF_GSM_MAXGAIN         (( 62-PVOFSL )*(PWRRES))
/*MT6251RF*/ #define  RF_GSM_MINGAIN         ((  0-PVOFSL )*(PWRRES))
/*MT6251RF*/ #define  RF_DCS_MAXGAIN         (( 62-PVOFSH )*(PWRRES))
/*MT6251RF*/ #define  RF_DCS_MINGAIN         ((  0-PVOFSH )*(PWRRES))
/*MT6251RF*/ #define  RF_PCS_MAXGAIN         (( 62-PVOFSH )*(PWRRES))
/*MT6251RF*/ #define  RF_PCS_MINGAIN         ((  0-PVOFSH )*(PWRRES))
/*MT6251RF*/
/*MT6251RF*/ /* GSM850....................................................................*/
/*MT6251RF*/
/*MT6251RF*/ const  sL1DAGCDATA  AGC_TABLE_GSM850[2] =
/*MT6251RF*/ {  {  GBOUND(( 32-PVOFSL ),( 22-PVOFSL ) ), GC_A( 0,( 32-PVOFSL ) ), 0x6000040 },
/*MT6251RF*/    {  GBOUND((  0-PVOFSL ),(  0-PVOFSL ) ), GC_A( 0,(  0-PVOFSL ) ), 0x6000000 },
/*MT6251RF*/ };
/*MT6251RF*/
/*MT6251RF*/ /* GSM900....................................................................*/
/*MT6251RF*/
/*MT6251RF*/ const  sL1DAGCDATA  AGC_TABLE_GSM900[2] =
/*MT6251RF*/ {  {  GBOUND(( 32-PVOFSL ),( 22-PVOFSL ) ), GC_A( 0,( 32-PVOFSL ) ), 0x6000040 },
/*MT6251RF*/    {  GBOUND((  0-PVOFSL ),(  0-PVOFSL ) ), GC_A( 0,(  0-PVOFSL ) ), 0x6000000 },
/*MT6251RF*/ };
/*MT6251RF*/
/*MT6251RF*/ /* DCS1800...................................................................*/
/*MT6251RF*/
/*MT6251RF*/ const  sL1DAGCDATA  AGC_TABLE_DCS1800[2] =
/*MT6251RF*/ {  {  GBOUND(( 32-PVOFSL ),( 22-PVOFSL ) ), GC_A( 0,( 32-PVOFSL ) ), 0x6000040 },
/*MT6251RF*/    {  GBOUND((  0-PVOFSL ),(  0-PVOFSL ) ), GC_A( 0,(  0-PVOFSL ) ), 0x6000000 },
/*MT6251RF*/ };
/*MT6251RF*/
/*MT6251RF*/ /* PCS1900...................................................................*/
/*MT6251RF*/
/*MT6251RF*/ const  sL1DAGCDATA  AGC_TABLE_PCS1900[2] =
/*MT6251RF*/ {  {  GBOUND(( 32-PVOFSL ),( 22-PVOFSL ) ), GC_A( 0,( 32-PVOFSL ) ), 0x6000040 },
/*MT6251RF*/    {  GBOUND((  0-PVOFSL ),(  0-PVOFSL ) ), GC_A( 0,(  0-PVOFSL ) ), 0x6000000 },
/*MT6251RF*/ };
/*MT6251RF*/
/*MT6251RF*/ /*...........................................................................*/
/*MT6251RF*/
/*MT6251RF*/ const  sL1DGAINRANGE GAIN_RANGE_TABLE[] =
/*MT6251RF*/ {  {                   0,                      0    }, /*#FrequencyBand400  */
/*MT6251RF*/    { (int)RF_GSM850_MAXGAIN, (int)RF_GSM850_MINGAIN }, /* FrequencyBand850  */
/*MT6251RF*/    { (int)RF_GSM_MAXGAIN,    (int)RF_GSM_MINGAIN    }, /* FrequencyBand900  */
/*MT6251RF*/    { (int)RF_DCS_MAXGAIN,    (int)RF_DCS_MINGAIN    }, /* FrequencyBand1800 */
/*MT6251RF*/    { (int)RF_PCS_MAXGAIN,    (int)RF_PCS_MINGAIN    }, /* FrequencyBand1900 */
/*MT6251RF*/ };
/*MT6251RF*/
/*MT6251RF*/ const  sL1DAGCDATA *const  AGC_TABLE[] =
/*MT6251RF*/ {  0,                                              /*#FrequencyBand400  */
/*MT6251RF*/    AGC_TABLE_GSM850,                               /* FrequencyBand850  */
/*MT6251RF*/    AGC_TABLE_GSM900,                               /* FrequencyBand900  */
/*MT6251RF*/    AGC_TABLE_DCS1800,                              /* FrequencyBand1800 */
/*MT6251RF*/    AGC_TABLE_PCS1900,                              /* FrequencyBand1900 */
/*MT6251RF*/ };
/*MT6251RF*/
/*MT6251RF*/ const  int  GAIN_STEP_TABLE[] =
/*MT6251RF*/ { 10, 18, 26, 34, 42, 45, 53 };   //gain step for high/low LNA gain
/*MT6251RF*/                                   //Low LNA gain  : { 10, 18, 26, 34, 42         }
/*MT6251RF*/                                   //High LNA gain : {     18, 26, 34, 42, 45, 53 }
/*MT6251RF*/
/*MT6251RF*/ /*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
/*MT6251RF*/
/*MT6251RF*/ int   L1D_RF_GetGainSetting( int rf_band, int arfcn, int request_gain, long *gain_setting )
/*MT6251RF*/ {  int   max_gain, min_gain, real_gain;
/*MT6251RF*/    const int*    d32ptr;
/*MT6251RF*/    const sL1DAGCDATA*  agcptr;
/*MT6251RF*/    long  setting;
/*MT6251RF*/    int   bit_no, gain_step, idx_shift_value;
/*MT6251RF*/
/*MT6251RF*/    /* evaluate the range of available gain */
/*MT6251RF*/    d32ptr  = (int*)&(GAIN_RANGE_TABLE[rf_band]);
/*MT6251RF*/    max_gain = *d32ptr++;
/*MT6251RF*/    min_gain = *d32ptr;
/*MT6251RF*/
/*MT6251RF*/    /* clipping the request gain to the avialable gain */
/*MT6251RF*/    if( request_gain>=max_gain )
/*MT6251RF*/    {  request_gain = max_gain;  }
/*MT6251RF*/    else  if( request_gain<=min_gain )
/*MT6251RF*/    {  request_gain = min_gain;  }
/*MT6251RF*/
/*MT6251RF*/    /* evaluate the real gain setting */
/*MT6251RF*/    agcptr = AGC_TABLE[rf_band];
/*MT6251RF*/    idx_shift_value = 1;  //the lowest gain step of high LNA gain case is 18
/*MT6251RF*/    if( request_gain < agcptr->pos_gain )
/*MT6251RF*/    {  agcptr++;
/*MT6251RF*/       idx_shift_value = 0;
/*MT6251RF*/    }
/*MT6251RF*/    {
/*MT6251RF*/       bit_no = BIT_NO( request_gain, agcptr->A, GC_B );
/*MT6251RF*/       gain_step = GAIN_STEP_TABLE[bit_no+idx_shift_value];  //Use bit_no to choose gain step
/*MT6251RF*/       real_gain = REAL_GAIN( bit_no, agcptr->A, GC_B ) - INSERTION_LOSS;
/*MT6251RF*/       setting   = agcptr->setting + gain_step;
/*MT6251RF*/       if( gain_step == 10 )
/*MT6251RF*/       {
/*MT6251RF*/          setting += 128;              // The LNA setting of the lowest gain is 10, not 00
/*MT6251RF*/          real_gain = -259;            // The real gain of lowest gain has 1.6dB offset, (-34+1.6)*8=-259
/*MT6251RF*/       }
/*MT6251RF*/    }
/*MT6251RF*/
/*MT6251RF*/    *gain_setting = setting;
/*MT6251RF*/    return( real_gain );
/*MT6251RF*/ }
/*MT6251RF*/
   #if IS_W_CANCELLATION_SUPPORT
/*MT6251RF*/ unsigned short   L1D_RF_FindGainStep( unsigned long gain_setting, FrequencyBand rf_band )
/*MT6251RF*/ {
/*MT6251RF*/    int bit_value, shift_value;
/*MT6251RF*/    unsigned short left_idx, right_idx, mid_idx, idx;
/*MT6251RF*/
/*MT6251RF*/    shift_value = (gain_setting>>6) & 0x1;
/*MT6251RF*/    bit_value = gain_setting & 0x3F;
/*MT6251RF*/    left_idx = 0;
/*MT6251RF*/    right_idx = sizeof(GAIN_STEP_TABLE)/sizeof(int)-1;
/*MT6251RF*/
/*MT6251RF*/    while( left_idx < right_idx )
/*MT6251RF*/    {
/*MT6251RF*/       mid_idx = (left_idx + right_idx) >> 1;
/*MT6251RF*/
/*MT6251RF*/       if( bit_value <= GAIN_STEP_TABLE[mid_idx])
/*MT6251RF*/          right_idx = mid_idx;
/*MT6251RF*/       else
/*MT6251RF*/          left_idx = mid_idx + 1;
/*MT6251RF*/    }
/*MT6251RF*/
/*MT6251RF*/    idx = right_idx;
/*MT6251RF*/
/*MT6251RF*/    if( shift_value == 1 )
/*MT6251RF*/       return (idx + 4);
/*MT6251RF*/    else
/*MT6251RF*/       return (idx);
/*MT6251RF*/ }
/*MT6251RF*/
   #endif
#endif

#if IS_RF_SKY74045
/*SKY74045*/
/*SKY74045*/ #define  GAIN_STEP              2 // no used
/*SKY74045*/
/*SKY74045*/ #define  RF_GSM850_MAXGAIN      ( (100.8)*(PWRRES))
/*SKY74045*/ #define  RF_GSM850_MINGAIN      ( ( 10.8)*(PWRRES))
/*SKY74045*/ #define  RF_GSM_MAXGAIN         ( (100.8)*(PWRRES))
/*SKY74045*/ #define  RF_GSM_MINGAIN         ( ( 10.8)*(PWRRES))
/*SKY74045*/ #define  RF_DCS_MAXGAIN         ( (101.8)*(PWRRES))
/*SKY74045*/ #define  RF_DCS_MINGAIN         ( (  7.8)*(PWRRES))
/*SKY74045*/ #define  RF_PCS_MAXGAIN         ( (100.6)*(PWRRES))
/*SKY74045*/ #define  RF_PCS_MINGAIN         ( (  8.6)*(PWRRES))
/*SKY74045*/
/*SKY74045*/
/*SKY74045*/ /* GSM850....................................................................*/
/*SKY74045*/ const  sL1DAGCDATA  AGC_TABLE_GSM850[7] =
/*SKY74045*/ {  {  GBOUND( 78.8, 76.8 ), GC_A( 0, 78.8 )-1, 0x00405F },
/*SKY74045*/    {  GBOUND( 66.8, 64.8 ), GC_A( 0, 66.8 )-1, 0x00404F },
/*SKY74045*/    {  GBOUND( 60.8, 58.8 ), GC_A( 0, 60.8 )-1, 0x004057 },
/*SKY74045*/    {  GBOUND( 48.8, 46.8 ), GC_A( 0, 48.8 )-1, 0x004047 },
/*SKY74045*/    {  GBOUND( 40.8, 38.8 ), GC_A( 0, 40.8 )-1, 0x004053 },
/*SKY74045*/    {  GBOUND( 28.8, 26.8 ), GC_A( 0, 28.8 )-1, 0x004043 },
/*SKY74045*/    {  GBOUND( 10.8, 10.8 ), GC_A( 0, 10.8 )-1, 0x004003 },
/*SKY74045*/ };
/*SKY74045*/
/*SKY74045*/ /* GSM900....................................................................*/
/*SKY74045*/ const  sL1DAGCDATA  AGC_TABLE_GSM900[7] =
/*SKY74045*/ {  {  GBOUND( 78.8, 76.8 ), GC_A( 0, 78.8 )-1, 0x00405F },
/*SKY74045*/    {  GBOUND( 66.8, 64.8 ), GC_A( 0, 66.8 )-1, 0x00404F },
/*SKY74045*/    {  GBOUND( 60.8, 58.8 ), GC_A( 0, 60.8 )-1, 0x004057 },
/*SKY74045*/    {  GBOUND( 48.8, 46.8 ), GC_A( 0, 48.8 )-1, 0x004047 },
/*SKY74045*/    {  GBOUND( 40.8, 38.8 ), GC_A( 0, 40.8 )-1, 0x004053 },
/*SKY74045*/    {  GBOUND( 28.8, 26.8 ), GC_A( 0, 28.8 )-1, 0x004043 },
/*SKY74045*/    {  GBOUND( 10.8, 10.8 ), GC_A( 0, 10.8 )-1, 0x004003 },
/*SKY74045*/ };
/*SKY74045*/
/*SKY74045*/ /*DCS1800...................................................................*/
/*SKY74045*/
/*SKY74045*/ const  sL1DAGCDATA  AGC_TABLE_DCS1800[7] =
/*SKY74045*/ {  {  GBOUND( 77.8, 75.8 ), GC_A( 0, 77.8 )-1, 0x00805F },
/*SKY74045*/    {  GBOUND( 65.8, 63.8 ), GC_A( 0, 65.8 )-1, 0x00804F },
/*SKY74045*/    {  GBOUND( 59.8, 57.8 ), GC_A( 0, 59.8 )-1, 0x008057 },
/*SKY74045*/    {  GBOUND( 47.8, 45.8 ), GC_A( 0, 47.8 )-1, 0x008047 },
/*SKY74045*/    {  GBOUND( 37.8, 35.8 ), GC_A( 0, 37.8 )-1, 0x008053 },
/*SKY74045*/    {  GBOUND( 25.8, 23.8 ), GC_A( 0, 25.8 )-1, 0x008043 },
/*SKY74045*/    {  GBOUND(  7.8,  7.8 ), GC_A( 0,  7.8 )-1, 0x008003 },
/*SKY74045*/ };
/*SKY74045*/
/*SKY74045*/ /* PCS1900...................................................................*/
/*SKY74045*/
/*SKY74045*/ const  sL1DAGCDATA  AGC_TABLE_PCS1900[7] =
/*SKY74045*/ {  {  GBOUND( 76.6, 74.6 ), GC_A( 0, 76.6 ),   0x00C05F },
/*SKY74045*/    {  GBOUND( 64.6, 62.6 ), GC_A( 0, 64.6 ),   0x00C04F },
/*SKY74045*/    {  GBOUND( 58.6, 56.6 ), GC_A( 0, 58.6 ),   0x00C057 },
/*SKY74045*/    {  GBOUND( 46.6, 44.6 ), GC_A( 0, 46.6 ),   0x00C047 },
/*SKY74045*/    {  GBOUND( 38.6, 36.6 ), GC_A( 0, 38.6 ),   0x00C053 },
/*SKY74045*/    {  GBOUND( 26.6, 24.6 ), GC_A( 0, 26.6 ),   0x00C043 },
/*SKY74045*/    {  GBOUND(  8.6,  8.6 ), GC_A( 0,  8.6 ),   0x00C003 },
/*SKY74045*/ };
/*SKY74045*/
/*SKY74045*/ /*...........................................................................*/
/*SKY74045*/
/*SKY74045*/ const  sL1DGAINRANGE GAIN_RANGE_TABLE[] =
/*SKY74045*/ {  {                   0,                      0      },   /*#FrequencyBand400  */
/*SKY74045*/    { (int)RF_GSM850_MAXGAIN, (int)RF_GSM850_MINGAIN   },   /*#FrequencyBand850  */
/*SKY74045*/    { (int)RF_GSM_MAXGAIN,    (int)RF_GSM_MINGAIN      },   /* FrequencyBand900  */
/*SKY74045*/    { (int)RF_DCS_MAXGAIN,    (int)RF_DCS_MINGAIN      },   /* FrequencyBand1800 */
/*SKY74045*/    { (int)RF_PCS_MAXGAIN,    (int)RF_PCS_MINGAIN      },   /* FrequencyBand1900 */
/*SKY74045*/ };
/*SKY74045*/
/*SKY74045*/ /*...........................................................................*/
/*SKY74045*/
/*SKY74045*/ const  sL1DAGCDATA*  AGC_TABLE[] =
/*SKY74045*/ {  0,                                          /*#FrequencyBand400  */
/*SKY74045*/    AGC_TABLE_GSM850,                           /*#FrequencyBand850  */
/*SKY74045*/    AGC_TABLE_GSM900,                           /* FrequencyBand900  */
/*SKY74045*/    AGC_TABLE_DCS1800,                          /* FrequencyBand1800 */
/*SKY74045*/    AGC_TABLE_PCS1900,                          /* FrequencyBand1900 */
/*SKY74045*/ };
/*SKY74045*/ /*...........................................................................*/
/*SKY74045*/
/*SKY74045*/ int L1D_RF_GetGainSetting( int rf_band, int arfcn, int request_gain, long *gain_setting )
/*SKY74045*/ {  int   max_gain, min_gain, real_gain;
/*SKY74045*/    const int*    d32ptr;
/*SKY74045*/    const sL1DAGCDATA*  agcptr;
/*SKY74045*/    long  setting;
/*SKY74045*/    int   bit_no;
/*SKY74045*/    int   left, right, middle;
/*SKY74045*/
/*SKY74045*/    /* transfer power gain to voltage gain */
/*SKY74045*/    request_gain = request_gain + 34*8;
/*SKY74045*/
/*SKY74045*/    /* evaluate the range of available gain */
/*SKY74045*/    d32ptr  = (int*)&(GAIN_RANGE_TABLE[rf_band]);
/*SKY74045*/    max_gain = *d32ptr++;
/*SKY74045*/    min_gain = *d32ptr;
/*SKY74045*/
/*SKY74045*/    /* clipping the request gain to the avialable gain */
/*SKY74045*/    if( request_gain>=max_gain )
/*SKY74045*/    {  request_gain = max_gain;  }
/*SKY74045*/    else  if( request_gain<=min_gain )
/*SKY74045*/    {  request_gain = min_gain;  }
/*SKY74045*/
/*SKY74045*/    /* evaluate the real gain setting */
/*SKY74045*/    agcptr = AGC_TABLE[rf_band];
/*SKY74045*/
/*SKY74045*/    /* binary search */
/*SKY74045*/    left = 0; right = 6;
/*SKY74045*/    while (left <= right)
/*SKY74045*/    {
/*SKY74045*/       middle = (left + right)/2;
/*SKY74045*/       if ( request_gain > (agcptr+middle)->pos_gain )
/*SKY74045*/          right = middle - 1;
/*SKY74045*/       else if ( request_gain < (agcptr+middle)->pos_gain )
/*SKY74045*/          left = middle + 1;
/*SKY74045*/       else
/*SKY74045*/       {
/*SKY74045*/          left = middle;
/*SKY74045*/          break;
/*SKY74045*/       }
/*SKY74045*/    }
/*SKY74045*/    if (left > 6)
/*SKY74045*/       left--;
/*SKY74045*/
/*SKY74045*/    agcptr = (agcptr+left);
/*SKY74045*/
/*SKY74045*/    {  bit_no    = BIT_NO( request_gain, agcptr->A, GC_B );
/*SKY74045*/       real_gain = REAL_GAIN( bit_no, agcptr->A, GC_B );
/*SKY74045*/       /* transfer voltage gain to power gain */
/*SKY74045*/       real_gain = real_gain - 34*8;
/*SKY74045*/
/*SKY74045*/       if (left != 6)  //if not last region
/*SKY74045*/       {  bit_no = bit_no + (int)(bit_no/3);
/*SKY74045*/          setting   = agcptr->setting | ((bit_no&0x1)<<13) | ((bit_no&0x2)<<11) | ((bit_no&0x4)<<9) | ((bit_no&0x8)<<7) | ((bit_no&0x10)<<5);
/*SKY74045*/       }
/*SKY74045*/       else if (left == 6)  //else if last region
/*SKY74045*/       {  bit_no = bit_no + (int)(bit_no/3) + 8;
/*SKY74045*/          setting   = agcptr->setting | ((bit_no&0x1)<<13) | ((bit_no&0x2)<<11) | (((~bit_no)&0x1c)<<3);
/*SKY74045*/       }
/*SKY74045*/    }
/*SKY74045*/
/*SKY74045*/    *gain_setting = setting;
/*SKY74045*/    return( real_gain );
/*SKY74045*/ }
/*SKY74045*/
#endif

#if IS_RF_AERO2
/*AERO2*/
/*AERO2*/ #define  GAIN_STEP               1
/*AERO2*/ #define  PVOFSL                  (-25.0)
/*AERO2*/ #define  PVOFSH                  (-25.0)
/*AERO2*/ #define  RF_GSM850_MAXGAIN      (( 94.0 + PVOFSL )*(PWRRES))
/*AERO2*/ #define  RF_GSM850_MINGAIN      ((  8.0 + PVOFSL )*(PWRRES))
/*AERO2*/ #define  RF_GSM_MAXGAIN         (( 94.0 + PVOFSL )*(PWRRES))
/*AERO2*/ #define  RF_GSM_MINGAIN         ((  8.0 + PVOFSL )*(PWRRES))
/*AERO2*/ #define  RF_DCS_MAXGAIN         (( 94.0 + PVOFSH )*(PWRRES))
/*AERO2*/ #define  RF_DCS_MINGAIN         ((  8.0 + PVOFSH )*(PWRRES))
/*AERO2*/ #define  RF_PCS_MAXGAIN         (( 94.0 + PVOFSH )*(PWRRES))
/*AERO2*/ #define  RF_PCS_MINGAIN         ((  8.0 + PVOFSH )*(PWRRES))
/*AERO2*/
/*AERO2*/ /* GSM850....................................................................*/
/*AERO2*/
/*AERO2*/ const  sL1DAGCDATA  AGC_TABLE_GSM850[6] =
/*AERO2*/ {  {  GBOUND( ( 76.0 + PVOFSL ),( 77.0 + PVOFSL ) ), GC_A( 46, ( 77.0 + PVOFSL ) ), 0x00C020 },
/*AERO2*/    {  GBOUND( ( 72.0 + PVOFSL ),( 73.0 + PVOFSL ) ), GC_A( 46, ( 73.0 + PVOFSL ) ), 0x00B020 },
/*AERO2*/    {  GBOUND( ( 68.0 + PVOFSL ),( 69.0 + PVOFSL ) ), GC_A( 46, ( 69.0 + PVOFSL ) ), 0x00A020 },
/*AERO2*/    {  GBOUND( ( 64.0 + PVOFSL ),( 65.0 + PVOFSL ) ), GC_A( 46, ( 65.0 + PVOFSL ) ), 0x009020 },
/*AERO2*/    {  GBOUND( ( 14.0 + PVOFSL ),( 15.0 + PVOFSL ) ), GC_A(  0, ( 15.0 + PVOFSL ) ), 0x008020 },
/*AERO2*/    {  GBOUND( (  8.0 + PVOFSL ),(  8.0 + PVOFSL ) ), GC_A(  8, (  8.0 + PVOFSL ) ), 0x000020 },
/*AERO2*/ };
/*AERO2*/
/*AERO2*/ /* GSM900....................................................................*/
/*AERO2*/
/*AERO2*/ const  sL1DAGCDATA  AGC_TABLE_GSM900[6] =
/*AERO2*/ {  {  GBOUND( ( 76.0 + PVOFSL ),( 77.0 + PVOFSL ) ), GC_A( 46, ( 77.0 + PVOFSL ) ), 0x00C020 },
/*AERO2*/    {  GBOUND( ( 72.0 + PVOFSL ),( 73.0 + PVOFSL ) ), GC_A( 46, ( 73.0 + PVOFSL ) ), 0x00B020 },
/*AERO2*/    {  GBOUND( ( 68.0 + PVOFSL ),( 69.0 + PVOFSL ) ), GC_A( 46, ( 69.0 + PVOFSL ) ), 0x00A020 },
/*AERO2*/    {  GBOUND( ( 64.0 + PVOFSL ),( 65.0 + PVOFSL ) ), GC_A( 46, ( 65.0 + PVOFSL ) ), 0x009020 },
/*AERO2*/    {  GBOUND( ( 14.0 + PVOFSL ),( 15.0 + PVOFSL ) ), GC_A(  0, ( 15.0 + PVOFSL ) ), 0x008020 },
/*AERO2*/    {  GBOUND( (  8.0 + PVOFSL ),(  8.0 + PVOFSL ) ), GC_A(  8, (  8.0 + PVOFSL ) ), 0x000020 },
/*AERO2*/ };
/*AERO2*/
/*AERO2*/ /* DCS1800...................................................................*/
/*AERO2*/
/*AERO2*/ const  sL1DAGCDATA  AGC_TABLE_DCS1800[6] =
/*AERO2*/ {  {  GBOUND( ( 76.0 + PVOFSH ),( 77.0 + PVOFSH ) ), GC_A( 46, ( 77.0 + PVOFSH ) ), 0x00C020 },
/*AERO2*/    {  GBOUND( ( 72.0 + PVOFSH ),( 73.0 + PVOFSH ) ), GC_A( 46, ( 73.0 + PVOFSH ) ), 0x00B020 },
/*AERO2*/    {  GBOUND( ( 68.0 + PVOFSH ),( 69.0 + PVOFSH ) ), GC_A( 46, ( 69.0 + PVOFSH ) ), 0x00A020 },
/*AERO2*/    {  GBOUND( ( 64.0 + PVOFSH ),( 65.0 + PVOFSH ) ), GC_A( 46, ( 65.0 + PVOFSH ) ), 0x009020 },
/*AERO2*/    {  GBOUND( ( 14.0 + PVOFSH ),( 15.0 + PVOFSH ) ), GC_A(  0, ( 15.0 + PVOFSH ) ), 0x008020 },
/*AERO2*/    {  GBOUND( (  8.0 + PVOFSH ),(  8.0 + PVOFSH ) ), GC_A(  0, (  8.0 + PVOFSH ) ), 0x000020 },
/*AERO2*/ };
/*AERO2*/
/*AERO2*/ /* PCS1900...................................................................*/
/*AERO2*/
/*AERO2*/ const  sL1DAGCDATA  AGC_TABLE_PCS1900[6] =
/*AERO2*/ {  {  GBOUND( ( 76.0 + PVOFSH ),( 77.0 + PVOFSH ) ), GC_A( 46, ( 77.0 + PVOFSH ) ), 0x00C020 },
/*AERO2*/    {  GBOUND( ( 72.0 + PVOFSH ),( 73.0 + PVOFSH ) ), GC_A( 46, ( 73.0 + PVOFSH ) ), 0x00B020 },
/*AERO2*/    {  GBOUND( ( 68.0 + PVOFSH ),( 69.0 + PVOFSH ) ), GC_A( 46, ( 69.0 + PVOFSH ) ), 0x00A020 },
/*AERO2*/    {  GBOUND( ( 64.0 + PVOFSH ),( 65.0 + PVOFSH ) ), GC_A( 46, ( 65.0 + PVOFSH ) ), 0x009020 },
/*AERO2*/    {  GBOUND( ( 14.0 + PVOFSH ),( 15.0 + PVOFSH ) ), GC_A(  0, ( 15.0 + PVOFSH ) ), 0x008020 },
/*AERO2*/    {  GBOUND( (  8.0 + PVOFSH ),(  8.0 + PVOFSH ) ), GC_A(  0, (  8.0 + PVOFSH ) ), 0x000020 },
/*AERO2*/ };
/*AERO2*/
/*AERO2*/ /*...........................................................................*/
/*AERO2*/
/*AERO2*/ const  sL1DGAINRANGE GAIN_RANGE_TABLE[] =
/*AERO2*/ {  {                   0,                      0    }, /*#FrequencyBand400  */
/*AERO2*/    { (int)RF_GSM850_MAXGAIN, (int)RF_GSM850_MINGAIN }, /* FrequencyBand850  */
/*AERO2*/    { (int)RF_GSM_MAXGAIN,    (int)RF_GSM_MINGAIN    }, /* FrequencyBand900  */
/*AERO2*/    { (int)RF_DCS_MAXGAIN,    (int)RF_DCS_MINGAIN    }, /* FrequencyBand1800 */
/*AERO2*/    { (int)RF_PCS_MAXGAIN,    (int)RF_PCS_MINGAIN    }, /* FrequencyBand1900 */
/*AERO2*/ };
/*AERO2*/
/*AERO2*/ const  sL1DAGCDATA *const  AGC_TABLE[] =
/*AERO2*/ {  0,                                              /*#FrequencyBand400  */
/*AERO2*/    AGC_TABLE_GSM850,                               /* FrequencyBand850  */
/*AERO2*/    AGC_TABLE_GSM900,                               /* FrequencyBand900  */
/*AERO2*/    AGC_TABLE_DCS1800,                              /* FrequencyBand1800 */
/*AERO2*/    AGC_TABLE_PCS1900,                              /* FrequencyBand1900 */
/*AERO2*/ };
/*AERO2*/
/*AERO2*/ /*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
/*AERO2*/
/*AERO2*/ int  L1D_RF_GetGainSetting( int rf_band, int arfcn, int request_gain, long *gain_setting )
/*AERO2*/ {  int   max_gain, min_gain, real_gain;
/*AERO2*/    const int*    d32ptr;
/*AERO2*/    const sL1DAGCDATA*  agcptr;
/*AERO2*/    long  setting;
/*AERO2*/    int   bit_no;
/*AERO2*/
/*AERO2*/    /* evaluate the range of available gain */
/*AERO2*/    d32ptr  = (int*)&(GAIN_RANGE_TABLE[rf_band]);
/*AERO2*/    max_gain = *d32ptr++;
/*AERO2*/    min_gain = *d32ptr;
/*AERO2*/
/*AERO2*/    /* clipping the request gain to the avialable gain */
/*AERO2*/    if( request_gain>=max_gain )
/*AERO2*/    {  request_gain = max_gain;  }
/*AERO2*/    else  if( request_gain<=min_gain )
/*AERO2*/    {  request_gain = min_gain;  }
/*AERO2*/
/*AERO2*/    /* evaluate the real gain setting */
/*AERO2*/    agcptr = AGC_TABLE[rf_band];
/*AERO2*/    agcptr += 2;
/*AERO2*/    if( request_gain >= agcptr->pos_gain )
/*AERO2*/    {  agcptr -= 2;                            //#1
/*AERO2*/       if( request_gain < agcptr->pos_gain )
/*AERO2*/       {  agcptr += 1;                         //#2
/*AERO2*/          if(request_gain < agcptr->pos_gain )
/*AERO2*/          {  agcptr += 1;                      //#3
/*AERO2*/          }
/*AERO2*/       }
/*AERO2*/    }
/*AERO2*/    else
/*AERO2*/    {  agcptr += 1;                            //#4
/*AERO2*/       if( request_gain < agcptr->pos_gain )
/*AERO2*/       {  agcptr += 1;                         //#5
/*AERO2*/          if(request_gain < agcptr->pos_gain )
/*AERO2*/          {  agcptr += 1;                      //#6
/*AERO2*/          }
/*AERO2*/       }
/*AERO2*/    }
/*AERO2*/    {  bit_no    = BIT_NO( request_gain, agcptr->A, GC_B );
/*AERO2*/       real_gain = REAL_GAIN( bit_no, agcptr->A, GC_B );
/*AERO2*/       setting   = agcptr->setting + (bit_no<<6);
/*AERO2*/    }
/*AERO2*/
/*AERO2*/    *gain_setting = setting;
/*AERO2*/    return( real_gain );
/*AERO2*/ }
/*AERO2*/
#endif

#if IS_RF_SKY74137
/*SKY74137*/
/*SKY74137*/ #define  GAIN_STEP              2 // no used
/*SKY74137*/
/*SKY74137*/ #define  RF_GSM850_MAXGAIN      ( (95+2)*(PWRRES))
/*SKY74137*/ #define  RF_GSM850_MINGAIN      ( ( 3+2)*(PWRRES))
/*SKY74137*/ #define  RF_GSM_MAXGAIN         RF_GSM850_MAXGAIN
/*SKY74137*/ #define  RF_GSM_MINGAIN         RF_GSM850_MINGAIN
/*SKY74137*/ #define  RF_DCS_MAXGAIN         RF_GSM850_MAXGAIN
/*SKY74137*/ #define  RF_DCS_MINGAIN         RF_GSM850_MINGAIN
/*SKY74137*/ #define  RF_PCS_MAXGAIN         RF_GSM850_MAXGAIN
/*SKY74137*/ #define  RF_PCS_MINGAIN         RF_GSM850_MINGAIN
/*SKY74137*/
/*SKY74137*/
/*SKY74137*/ /* GSM850....................................................................*/
/*SKY74137*/ const  sL1DAGCDATA  AGC_TABLE_GSM850[12] =
/*SKY74137*/ {  {  GBOUND( 83+2, 81+2 ), GC_A( 0, 83+2 ),   0xA23C24 },
/*SKY74137*/    {  GBOUND( 71+2, 69+2 ), GC_A( 0, 71+2 ),   0xA23824 },
/*SKY74137*/    {  GBOUND( 65+2, 63+2 ), GC_A( 0, 65+2 ),   0xA23424 },
/*SKY74137*/    {  GBOUND( 59+2, 57+2 ), GC_A( 0, 59+2 ),   0xA22824 },
/*SKY74137*/    {  GBOUND( 55+2, 53+2 ), GC_A( 0, 55+2 ),   0xA22464 },
/*SKY74137*/    {  GBOUND( 47+2, 45+2 ), GC_A( 0, 47+2 ),   0xA02824 },
/*SKY74137*/    {  GBOUND( 39+2, 37+2 ), GC_A( 0, 39+2 ),   0xA20824 },
/*SKY74137*/    {  GBOUND( 33+2, 31+2 ), GC_A( 0, 33+2 ),   0xA20424 },
/*SKY74137*/    {  GBOUND( 27+2, 25+2 ), GC_A( 0, 27+2 ),   0xA00824 },
/*SKY74137*/    {  GBOUND( 21+2, 19+2 ), GC_A( 0, 21+2 ),   0xA00424 },
/*SKY74137*/    {  GBOUND( 15+2, 13+2 ), GC_A( 0, 15+2 ),   0xA00414 },
/*SKY74137*/    {  GBOUND(  3+2,  3+2 ), GC_A( 0,  3+2 ),   0xA00014 },
/*SKY74137*/ };
/*SKY74137*/
/*SKY74137*/ /* GSM900....................................................................*/
/*SKY74137*/ const  sL1DAGCDATA  AGC_TABLE_GSM900[7] =
/*SKY74137*/ {  {  GBOUND( 78.8, 76.8 ), GC_A( 0, 78.8 )-1, 0x00405F },
/*SKY74137*/    {  GBOUND( 66.8, 64.8 ), GC_A( 0, 66.8 )-1, 0x00404F },
/*SKY74137*/    {  GBOUND( 60.8, 58.8 ), GC_A( 0, 60.8 )-1, 0x004057 },
/*SKY74137*/    {  GBOUND( 48.8, 46.8 ), GC_A( 0, 48.8 )-1, 0x004047 },
/*SKY74137*/    {  GBOUND( 40.8, 38.8 ), GC_A( 0, 40.8 )-1, 0x004053 },
/*SKY74137*/    {  GBOUND( 28.8, 26.8 ), GC_A( 0, 28.8 )-1, 0x004043 },
/*SKY74137*/    {  GBOUND( 10.8, 10.8 ), GC_A( 0, 10.8 )-1, 0x004003 },
/*SKY74137*/ };
/*SKY74137*/
/*SKY74137*/ /*DCS1800...................................................................*/
/*SKY74137*/
/*SKY74137*/ const  sL1DAGCDATA  AGC_TABLE_DCS1800[7] =
/*SKY74137*/ {  {  GBOUND( 77.8, 75.8 ), GC_A( 0, 77.8 )-1, 0x00805F },
/*SKY74137*/    {  GBOUND( 65.8, 63.8 ), GC_A( 0, 65.8 )-1, 0x00804F },
/*SKY74137*/    {  GBOUND( 59.8, 57.8 ), GC_A( 0, 59.8 )-1, 0x008057 },
/*SKY74137*/    {  GBOUND( 47.8, 45.8 ), GC_A( 0, 47.8 )-1, 0x008047 },
/*SKY74137*/    {  GBOUND( 37.8, 35.8 ), GC_A( 0, 37.8 )-1, 0x008053 },
/*SKY74137*/    {  GBOUND( 25.8, 23.8 ), GC_A( 0, 25.8 )-1, 0x008043 },
/*SKY74137*/    {  GBOUND(  7.8,  7.8 ), GC_A( 0,  7.8 )-1, 0x008003 },
/*SKY74137*/ };
/*SKY74137*/
/*SKY74137*/ /* PCS1900...................................................................*/
/*SKY74137*/
/*SKY74137*/ const  sL1DAGCDATA  AGC_TABLE_PCS1900[7] =
/*SKY74137*/ {  {  GBOUND( 76.6, 74.6 ), GC_A( 0, 76.6 ),   0x00C05F },
/*SKY74137*/    {  GBOUND( 64.6, 62.6 ), GC_A( 0, 64.6 ),   0x00C04F },
/*SKY74137*/    {  GBOUND( 58.6, 56.6 ), GC_A( 0, 58.6 ),   0x00C057 },
/*SKY74137*/    {  GBOUND( 46.6, 44.6 ), GC_A( 0, 46.6 ),   0x00C047 },
/*SKY74137*/    {  GBOUND( 38.6, 36.6 ), GC_A( 0, 38.6 ),   0x00C053 },
/*SKY74137*/    {  GBOUND( 26.6, 24.6 ), GC_A( 0, 26.6 ),   0x00C043 },
/*SKY74137*/    {  GBOUND(  8.6,  8.6 ), GC_A( 0,  8.6 ),   0x00C003 },
/*SKY74137*/ };
/*SKY74137*/
/*SKY74137*/ /*...........................................................................*/
/*SKY74137*/
/*SKY74137*/ const  sL1DGAINRANGE GAIN_RANGE_TABLE[] =
/*SKY74137*/ {  {                   0,                   0         },   /*#FrequencyBand400  */
/*SKY74137*/    { (int)RF_GSM850_MAXGAIN, (int)RF_GSM850_MINGAIN   },   /* FrequencyBand850  */
/*SKY74137*/    { (int)RF_GSM_MAXGAIN, (int)RF_GSM_MINGAIN         },   /* FrequencyBand900  */
/*SKY74137*/    { (int)RF_DCS_MAXGAIN, (int)RF_DCS_MINGAIN         },   /* FrequencyBand1800 */
/*SKY74137*/    { (int)RF_PCS_MAXGAIN, (int)RF_PCS_MINGAIN         },   /* FrequencyBand1900 */
/*SKY74137*/ };
/*SKY74137*/
/*SKY74137*/ /*...........................................................................*/
/*SKY74137*/
/*SKY74137*/ const  sL1DAGCDATA*  AGC_TABLE[] =
/*SKY74137*/ {  0,                                          /*#FrequencyBand400  */
/*SKY74137*/    AGC_TABLE_GSM850,                           /* FrequencyBand850  */
/*SKY74137*/    AGC_TABLE_GSM850,                           /* FrequencyBand900  */
/*SKY74137*/    AGC_TABLE_GSM850,                           /* FrequencyBand1800 */
/*SKY74137*/    AGC_TABLE_GSM850,                           /* FrequencyBand1900 */
/*SKY74137*/ };
/*SKY74137*/ /*...........................................................................*/
/*SKY74137*/
/*SKY74117*/ const  short AGC_TABLE_SIZE[] =
/*SKY74117*/ {  0,                                              /*#FrequencyBand400  */
/*SKY74117*/    sizeof(AGC_TABLE_GSM850)/sizeof(sL1DAGCDATA),   /* FrequencyBand850  */
/*SKY74117*/    sizeof(AGC_TABLE_GSM850)/sizeof(sL1DAGCDATA),   /* FrequencyBand900  */
/*SKY74117*/    sizeof(AGC_TABLE_GSM850)/sizeof(sL1DAGCDATA),   /* FrequencyBand1800 */
/*SKY74117*/    sizeof(AGC_TABLE_GSM850)/sizeof(sL1DAGCDATA),   /* FrequencyBand1900 */
/*SKY74117*/ };
/*SKY74137*/ /*...........................................................................*/
/*SKY74137*/
/*SKY74137*/ int L1D_RF_GetGainSetting( int rf_band, int arfcn, int request_gain, long *gain_setting )
/*SKY74137*/ {  int   max_gain, min_gain, real_gain;
/*SKY74137*/    const int*    d32ptr;
/*SKY74137*/    const sL1DAGCDATA*  agcptr;
/*SKY74137*/    long  setting;
/*SKY74137*/    int   bit_no;
/*SKY74137*/    int   left, right, middle;
/*SKY74137*/
/*SKY74137*/    /* transfer power gain to voltage gain */
/*SKY74137*/    request_gain = request_gain + 34*8;
/*SKY74137*/
/*SKY74137*/    /* evaluate the range of available gain */
/*SKY74137*/    d32ptr  = (int*)&(GAIN_RANGE_TABLE[rf_band]);
/*SKY74137*/    max_gain = *d32ptr++;
/*SKY74137*/    min_gain = *d32ptr;
/*SKY74137*/
/*SKY74137*/    /* clipping the request gain to the avialable gain */
/*SKY74137*/    if( request_gain>=max_gain )
/*SKY74137*/    {  request_gain = max_gain;  }
/*SKY74137*/    else  if( request_gain<=min_gain )
/*SKY74137*/    {  request_gain = min_gain;  }
/*SKY74137*/
/*SKY74137*/    /* evaluate the real gain setting */
/*SKY74137*/    agcptr = AGC_TABLE[rf_band];
/*SKY74137*/
/*SKY74137*/    /* binary search */
/*SKY74137*/    left = 0; right = AGC_TABLE_SIZE[rf_band]-1;
/*SKY74137*/    while (left <= right)
/*SKY74137*/    {
/*SKY74137*/       middle = (left + right)/2;
/*SKY74137*/       if ( request_gain > (agcptr+middle)->pos_gain )
/*SKY74137*/          right = middle - 1;
/*SKY74137*/       else if ( request_gain < (agcptr+middle)->pos_gain )
/*SKY74137*/          left = middle + 1;
/*SKY74137*/       else
/*SKY74137*/       {
/*SKY74137*/          left = middle;
/*SKY74137*/          break;
/*SKY74137*/       }
/*SKY74137*/    }
/*SKY74137*/
/*SKY74137*/    agcptr = (agcptr+left);
/*SKY74137*/
/*SKY74137*/    {  bit_no    = BIT_NO( request_gain, agcptr->A, GC_B );
/*SKY74137*/       real_gain = REAL_GAIN( bit_no, agcptr->A, GC_B );
/*SKY74137*/       /* transfer voltage gain to power gain */
/*SKY74137*/       real_gain = real_gain - 34*8;
/*SKY74137*/       setting   = agcptr->setting + (bit_no<<6);
/*SKY74137*/    }
/*SKY74137*/
/*SKY74137*/    *gain_setting = setting;
/*SKY74137*/    return( real_gain );
/*SKY74137*/ }
/*SKY74137*/
#endif

#if IS_RF_GRF6201
/*GRF6201*/
/*GRF6201*/ typedef  struct
/*GRF6201*/ {
/*GRF6201*/    short pos_gain;
/*GRF6201*/    long  setting;
/*GRF6201*/    short A;
/*GRF6201*/    short pos_bitno;
/*GRF6201*/ } sL1DAGCDATA_GCT;
/*GRF6201*/
/*GRF6201*/ #define  GAIN_STEP               2
/*GRF6201*/
/*GRF6201*/ #define  RF_GSM850_MAXGAIN      ( ( 68.0)*(PWRRES))
/*GRF6201*/ #define  RF_GSM850_MINGAIN      ( (-44.0)*(PWRRES))
/*GRF6201*/ #define  RF_GSM_MAXGAIN         ( ( 68.0)*(PWRRES))
/*GRF6201*/ #define  RF_GSM_MINGAIN         ( (-44.0)*(PWRRES))
/*GRF6201*/ #define  RF_DCS_MAXGAIN         ( ( 70.0)*(PWRRES))
/*GRF6201*/ #define  RF_DCS_MINGAIN         ( (-38.0)*(PWRRES))
/*GRF6201*/ #define  RF_PCS_MAXGAIN         ( ( 70.0)*(PWRRES))
/*GRF6201*/ #define  RF_PCS_MINGAIN         ( (-36.0)*(PWRRES))
/*GRF6201*/
/*GRF6201*/ /* GSM850....................................................................*/
/*GRF6201*/
/*GRF6201*/ const  sL1DAGCDATA_GCT  AGC_TABLE_GSM850[8] =   //Table060714
/*GRF6201*/ {  {  GBOUND( 44.0, 42.0 ),  (1L<<23)|(8L<<19)|(16L<<14)|(9L<<6)|2L,  GC_A(  0, 44.0 ),  10 },
/*GRF6201*/    {  GBOUND( 22.0, 20.0 ),  (1L<<23)|(7L<<19)|( 1L<<10)|(9L<<6)|2L,  GC_A(  5, 22.0 ),  14 },
/*GRF6201*/    {  GBOUND(  6.0,  4.0 ),  (1L<<23)|(4L<<14)|( 3L<<10)|(5L<<6)|2L,  GC_A(  2,  6.0 ),  19 },
/*GRF6201*/    {  GBOUND(  0.0, -4.0 ),  (1L<<23)|(1L<<19)|( 4L<<14)|(5L<<6)|2L,  GC_A(  1,  0.0 ),  10 },
/*GRF6201*/    {  GBOUND(-10.0,-16.0 ),  (1L<<23)|(1L<<19)|( 1L<<10)|(4L<<6)|2L,  GC_A(  0,-10.0 ),  14 },
/*GRF6201*/    {  GBOUND(-22.0,-24.0 ),  (0L<<23)|(4L<<14)|( 7L<<10)|(3L<<6)|2L,  GC_A(  0,-22.0 ),  19 },
/*GRF6201*/    {  GBOUND(-30.0,-32.0 ),  (0L<<23)|(0L<<19)|( 7L<<10)|(3L<<6)|2L,  GC_A(  0,-30.0 ),  14 },
/*GRF6201*/    {  GBOUND(-44.0,-44.0 ),  (0L<<23)|(0L<<19)|( 0L<<14)|(3L<<6)|2L,  GC_A(  0,-44.0 ),  10 },
/*GRF6201*/ };
/*GRF6201*/
/*GRF6201*/ const  sL1DAGCDATA_GCT  AGC_TABLE_GSM900[8] =   //Table060714
/*GRF6201*/ {  {  GBOUND( 44.0, 42.0 ),  (1L<<23)|(8L<<19)|(16L<<14)|(9L<<6)|2L,  GC_A(  0, 44.0 ),  10 },
/*GRF6201*/    {  GBOUND( 22.0, 20.0 ),  (1L<<23)|(7L<<19)|( 1L<<10)|(9L<<6)|2L,  GC_A(  5, 22.0 ),  14 },
/*GRF6201*/    {  GBOUND(  6.0,  4.0 ),  (1L<<23)|(4L<<14)|( 3L<<10)|(5L<<6)|2L,  GC_A(  2,  6.0 ),  19 },
/*GRF6201*/    {  GBOUND(  0.0, -4.0 ),  (1L<<23)|(1L<<19)|( 4L<<14)|(5L<<6)|2L,  GC_A(  1,  0.0 ),  10 },
/*GRF6201*/    {  GBOUND(-10.0,-16.0 ),  (1L<<23)|(1L<<19)|( 1L<<10)|(4L<<6)|2L,  GC_A(  0,-10.0 ),  14 },
/*GRF6201*/    {  GBOUND(-22.0,-24.0 ),  (0L<<23)|(4L<<14)|( 7L<<10)|(3L<<6)|2L,  GC_A(  0,-22.0 ),  19 },
/*GRF6201*/    {  GBOUND(-30.0,-32.0 ),  (0L<<23)|(0L<<19)|( 7L<<10)|(3L<<6)|2L,  GC_A(  0,-30.0 ),  14 },
/*GRF6201*/    {  GBOUND(-44.0,-44.0 ),  (0L<<23)|(0L<<19)|( 0L<<14)|(3L<<6)|2L,  GC_A(  0,-44.0 ),  10 },
/*GRF6201*/ };
/*GRF6201*/
/*GRF6201*/ const  sL1DAGCDATA_GCT  AGC_TABLE_DCS1800[8] =  //Table060714
/*GRF6201*/ {  {  GBOUND( 46.0, 44.0 ),  (1L<<23)|(8L<<19)|(16L<<14)|(8L<<6)|2L,  GC_A(  0, 46.0 ),  10 },
/*GRF6201*/    {  GBOUND( 24.0, 22.0 ),  (1L<<23)|(7L<<19)|( 1L<<10)|(8L<<6)|2L,  GC_A(  5, 24.0 ),  14 },
/*GRF6201*/    {  GBOUND(  8.0,  6.0 ),  (1L<<23)|(4L<<14)|( 3L<<10)|(4L<<6)|2L,  GC_A(  2,  8.0 ),  19 },
/*GRF6201*/    {  GBOUND(  4.0,  0.0 ),  (1L<<23)|(1L<<19)|( 4L<<14)|(4L<<6)|2L,  GC_A(  2,  4.0 ),  10 },
/*GRF6201*/    {  GBOUND( -8.0,-10.0 ),  (1L<<23)|(1L<<19)|( 1L<<10)|(3L<<6)|2L,  GC_A(  0, -8.0 ),  14 },
/*GRF6201*/    {  GBOUND(-16.0,-18.0 ),  (0L<<23)|(4L<<14)|( 7L<<10)|(3L<<6)|2L,  GC_A(  0,-16.0 ),  19 },
/*GRF6201*/    {  GBOUND(-24.0,-26.0 ),  (0L<<23)|(0L<<19)|( 7L<<10)|(3L<<6)|2L,  GC_A(  0,-24.0 ),  14 },
/*GRF6201*/    {  GBOUND(-38.0,-38.0 ),  (0L<<23)|(0L<<19)|( 0L<<14)|(3L<<6)|2L,  GC_A(  0,-38.0 ),  10 },
/*GRF6201*/ };
/*GRF6201*/
/*GRF6201*/ const  sL1DAGCDATA_GCT  AGC_TABLE_PCS1900[10] = //Table060714
/*GRF6201*/ {  {  GBOUND( 46.0, 44.0 ),  (1L<<23)|(8L<<19)|(16L<<14)|(7L<<6)|2L,  GC_A(  0, 46.0 ),  10 },
/*GRF6201*/    {  GBOUND( 40.0, 36.0 ),  (1L<<23)|(7L<<19)|( 1L<<10)|(7L<<6)|2L,  GC_A( 13, 40.0 ),  14 },
/*GRF6201*/    {  GBOUND( 22.0, 20.0 ),  (1L<<23)|(7L<<19)|( 1L<<10)|(6L<<6)|2L,  GC_A(  5, 22.0 ),  14 },
/*GRF6201*/    {  GBOUND( 20.0, 18.0 ),  (1L<<23)|(8L<<19)|( 4L<<14)|(5L<<6)|2L,  GC_A(  1, 20.0 ),  10 },
/*GRF6201*/    {  GBOUND(  4.0,  2.0 ),  (1L<<23)|(4L<<14)|( 2L<<10)|(3L<<6)|2L,  GC_A(  1,  4.0 ),  19 },
/*GRF6201*/    {  GBOUND(  0.0, -2.0 ),  (1L<<23)|(1L<<19)|( 4L<<14)|(3L<<6)|2L,  GC_A(  0,  0.0 ),  10 },
/*GRF6201*/    {  GBOUND( -8.0,-10.0 ),  (1L<<23)|(1L<<19)|( 0L<<10)|(3L<<6)|2L,  GC_A(  0, -8.0 ),  14 },
/*GRF6201*/    {  GBOUND(-16.0,-18.0 ),  (0L<<23)|(4L<<14)|( 6L<<10)|(3L<<6)|2L,  GC_A(  0,-16.0 ),  19 },
/*GRF6201*/    {  GBOUND(-24.0,-26.0 ),  (0L<<23)|(0L<<19)|( 6L<<10)|(3L<<6)|2L,  GC_A(  0,-24.0 ),  14 },
/*GRF6201*/    {  GBOUND(-36.0,-36.0 ),  (0L<<23)|(0L<<19)|( 0L<<14)|(3L<<6)|2L,  GC_A(  0,-36.0 ),  10 },
/*GRF6201*/ };
/*GRF6201*/
/*GRF6201*/ /*...........................................................................*/
/*GRF6201*/
/*GRF6201*/ const  sL1DGAINRANGE GAIN_RANGE_TABLE[] =
/*GRF6201*/ {  {                   0,                      0    }, /*#FrequencyBand400  */
/*GRF6201*/    { (int)RF_GSM850_MAXGAIN, (int)RF_GSM850_MINGAIN }, /* FrequencyBand850  */
/*GRF6201*/    { (int)RF_GSM_MAXGAIN,    (int)RF_GSM_MINGAIN    }, /* FrequencyBand900  */
/*GRF6201*/    { (int)RF_DCS_MAXGAIN,    (int)RF_DCS_MINGAIN    }, /* FrequencyBand1800 */
/*GRF6201*/    { (int)RF_PCS_MAXGAIN,    (int)RF_PCS_MINGAIN    }, /* FrequencyBand1900 */
/*GRF6201*/ };
/*GRF6201*/
/*GRF6201*/ const  sL1DAGCDATA_GCT *const  AGC_TABLE[] =
/*GRF6201*/ {  0,                                                  /*#FrequencyBand400  */
/*GRF6201*/    AGC_TABLE_GSM850,                                   /* FrequencyBand850  */
/*GRF6201*/    AGC_TABLE_GSM900,                                   /* FrequencyBand900  */
/*GRF6201*/    AGC_TABLE_DCS1800,                                  /* FrequencyBand1800 */
/*GRF6201*/    AGC_TABLE_PCS1900,                                  /* FrequencyBand1900 */
/*GRF6201*/ };
/*GRF6201*/
/*GRF6201*/ /*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
/*GRF6201*/
/*GRF6201*/ int   L1D_RF_GetGainSetting( int rf_band, int arfcn, int request_gain, long *gain_setting )
/*GRF6201*/ {  int   max_gain, min_gain, real_gain;
/*GRF6201*/    const int*    d32ptr;
/*GRF6201*/    const sL1DAGCDATA_GCT*  agcptr;
/*GRF6201*/    long  setting;
/*GRF6201*/    int   bit_no;
/*GRF6201*/    int   left, right, middle;
/*GRF6201*/
/*GRF6201*/    /* evaluate the range of available gain */
/*GRF6201*/    d32ptr  = (int*)&(GAIN_RANGE_TABLE[rf_band]);
/*GRF6201*/    max_gain = *d32ptr++;
/*GRF6201*/    min_gain = *d32ptr;
/*GRF6201*/
/*GRF6201*/    /* clipping the request gain to the avialable gain */
/*GRF6201*/    if( request_gain>=max_gain )
/*GRF6201*/    {  request_gain = max_gain;  }
/*GRF6201*/    else  if( request_gain<=min_gain )
/*GRF6201*/    {  request_gain = min_gain;  }
/*GRF6201*/
/*GRF6201*/    /*binary search*/
/*GRF6201*/    agcptr = AGC_TABLE[rf_band];
/*GRF6201*/    left = 0;
/*GRF6201*/    if ( rf_band == FrequencyBand1900 )
/*GRF6201*/       right = 9;
/*GRF6201*/    else
/*GRF6201*/       right = 7;
/*GRF6201*/
/*GRF6201*/    while (left <= right)
/*GRF6201*/    {  middle = (left + right)/2;
/*GRF6201*/       if ( request_gain >= (agcptr+middle)->pos_gain )
/*GRF6201*/          right = middle - 1;
/*GRF6201*/       else if ( request_gain < (agcptr+middle)->pos_gain )
/*GRF6201*/          left = middle + 1;
/*GRF6201*/    }
/*GRF6201*/    agcptr = (agcptr+left);
/*GRF6201*/    {  bit_no    = BIT_NO( request_gain, agcptr->A, GC_B );
/*GRF6201*/       real_gain = REAL_GAIN( bit_no, agcptr->A, GC_B );
/*GRF6201*/       setting   = (agcptr->setting) | ( bit_no<<(agcptr->pos_bitno) );
/*GRF6201*/    }
/*GRF6201*/
/*GRF6201*/    *gain_setting = setting;
/*GRF6201*/    return( real_gain );
/*GRF6201*/ }
/*GRF6201*/
#endif

#if IS_RF_IRFS3001
/*IRFS3001*/ #define  GAIN_STEP               1
/*IRFS3001*/
/*IRFS3001*/ #define  RF_GSM850_MAXGAIN      (  72.0*(PWRRES) )
/*IRFS3001*/ #define  RF_GSM850_MINGAIN      ( -22.0*(PWRRES) )
/*IRFS3001*/ #define  RF_GSM_MAXGAIN         RF_GSM850_MAXGAIN
/*IRFS3001*/ #define  RF_GSM_MINGAIN         RF_GSM850_MINGAIN
/*IRFS3001*/ #define  RF_DCS_MAXGAIN         (  69.0*(PWRRES) )
/*IRFS3001*/ #define  RF_DCS_MINGAIN         ( -14.0*(PWRRES) )
/*IRFS3001*/ #define  RF_PCS_MAXGAIN         RF_DCS_MAXGAIN
/*IRFS3001*/ #define  RF_PCS_MINGAIN         RF_DCS_MINGAIN
/*IRFS3001*/
/*IRFS3001*/ /* GSM850 & GSM900 ..........................................................*/
/*IRFS3001*/
/*IRFS3001*/ const  sL1DAGCDATA  AGC_TABLE_GSM850[17] =
/*IRFS3001*/ {  {  GBOUND( 66.0, 67.0 ), GC_A(  0, 67.0 ), (0x30474<<6)|0x6 },
/*IRFS3001*/    {  GBOUND( 60.0, 61.0 ), GC_A(  0, 61.0 ), (0x303F4<<6)|0x6 },
/*IRFS3001*/    {  GBOUND( 54.0, 55.0 ), GC_A(  0, 55.0 ), (0x303E4<<6)|0x6 },
/*IRFS3001*/    {  GBOUND( 48.0, 49.0 ), GC_A(  0, 49.0 ), (0x30364<<6)|0x6 },
/*IRFS3001*/    {  GBOUND( 42.0, 43.0 ), GC_A(  0, 43.0 ), (0x30354<<6)|0x6 },
/*IRFS3001*/    {  GBOUND( 36.0, 37.0 ), GC_A(  0, 37.0 ), (0x302D4<<6)|0x6 },
/*IRFS3001*/    {  GBOUND( 30.0, 31.0 ), GC_A(  0, 31.0 ), (0x302C4<<6)|0x6 },
/*IRFS3001*/    {  GBOUND( 24.0, 25.0 ), GC_A(  0, 25.0 ), (0x30244<<6)|0x6 },
/*IRFS3001*/    {  GBOUND( 22.0, 23.0 ), GC_A(  4, 23.0 ), (0x30234<<6)|0x6 },
/*IRFS3001*/    {  GBOUND( 17.0, 18.0 ), GC_A(  0, 18.0 ), (0x30355<<6)|0x6 },
/*IRFS3001*/    {  GBOUND( 11.0, 12.0 ), GC_A(  0, 12.0 ), (0x302D5<<6)|0x6 },
/*IRFS3001*/    {  GBOUND(  5.0,  6.0 ), GC_A(  0,  6.0 ), (0x302C5<<6)|0x6 },
/*IRFS3001*/    {  GBOUND( -1.0,  0.0 ), GC_A(  0,  0.0 ), (0x30245<<6)|0x6 },
/*IRFS3001*/    {  GBOUND( -7.0, -6.0 ), GC_A(  0, -6.0 ), (0x30235<<6)|0x6 },
/*IRFS3001*/    {  GBOUND(-13.0,-12.0 ), GC_A(  0,-12.0 ), (0x301B5<<6)|0x6 },
/*IRFS3001*/    {  GBOUND(-19.0,-18.0 ), GC_A(  0,-18.0 ), (0x301A5<<6)|0x6 },
/*IRFS3001*/    {  GBOUND(-22.0,-22.0 ), GC_A(  2,-22.0 ), (0x30125<<6)|0x6 },
/*IRFS3001*/ };
/*IRFS3001*/
/*IRFS3001*/ /* DCS1800 & PCS1900 .....................................................*/
/*IRFS3001*/
/*IRFS3001*/ const  sL1DAGCDATA  AGC_TABLE_DCS1800[15] =
/*IRFS3001*/ {  {  GBOUND( 63.0, 64.0 ), GC_A(  0, 64.0 ), (0x30474<<6)|0x6 },
/*IRFS3001*/    {  GBOUND( 57.0, 58.0 ), GC_A(  0, 58.0 ), (0x303F4<<6)|0x6 },
/*IRFS3001*/    {  GBOUND( 51.0, 52.0 ), GC_A(  0, 52.0 ), (0x303E4<<6)|0x6 },
/*IRFS3001*/    {  GBOUND( 45.0, 46.0 ), GC_A(  0, 46.0 ), (0x30364<<6)|0x6 },
/*IRFS3001*/    {  GBOUND( 39.0, 40.0 ), GC_A(  0, 40.0 ), (0x30354<<6)|0x6 },
/*IRFS3001*/    {  GBOUND( 33.0, 34.0 ), GC_A(  0, 34.0 ), (0x302D4<<6)|0x6 },
/*IRFS3001*/    {  GBOUND( 27.0, 28.0 ), GC_A(  0, 28.0 ), (0x302C4<<6)|0x6 },
/*IRFS3001*/    {  GBOUND( 22.0, 23.0 ), GC_A(  1, 23.0 ), (0x30244<<6)|0x6 },
/*IRFS3001*/    {  GBOUND( 19.0, 20.0 ), GC_A(  0, 20.0 ), (0x302D5<<6)|0x6 },
/*IRFS3001*/    {  GBOUND( 13.0, 14.0 ), GC_A(  0, 14.0 ), (0x302C5<<6)|0x6 },
/*IRFS3001*/    {  GBOUND(  7.0,  8.0 ), GC_A(  0,  8.0 ), (0x30245<<6)|0x6 },
/*IRFS3001*/    {  GBOUND(  1.0,  2.0 ), GC_A(  0,  2.0 ), (0x30235<<6)|0x6 },
/*IRFS3001*/    {  GBOUND(- 5.0, -4.0 ), GC_A(  0, -4.0 ), (0x301B5<<6)|0x6 },
/*IRFS3001*/    {  GBOUND(-11.0,-10.0 ), GC_A(  0,-10.0 ), (0x301A5<<6)|0x6 },
/*IRFS3001*/    {  GBOUND(-14.0,-14.0 ), GC_A(  2,-14.0 ), (0x30125<<6)|0x6 },
/*IRFS3001*/ };
/*IRFS3001*/
/*IRFS3001*/ /*...........................................................................*/
/*IRFS3001*/
/*IRFS3001*/ const  sL1DGAINRANGE GAIN_RANGE_TABLE[] =
/*IRFS3001*/ {  {                   0,                      0    }, /*#FrequencyBand400  */
/*IRFS3001*/    { (int)RF_GSM850_MAXGAIN, (int)RF_GSM850_MINGAIN }, /* FrequencyBand850  */
/*IRFS3001*/    { (int)RF_GSM_MAXGAIN,    (int)RF_GSM_MINGAIN    }, /* FrequencyBand900  */
/*IRFS3001*/    { (int)RF_DCS_MAXGAIN,    (int)RF_DCS_MINGAIN    }, /* FrequencyBand1800 */
/*IRFS3001*/    { (int)RF_PCS_MAXGAIN,    (int)RF_PCS_MINGAIN    }, /* FrequencyBand1900 */
/*IRFS3001*/ };
/*IRFS3001*/
/*IRFS3001*/ const  sL1DAGCDATA *const  AGC_TABLE[] =
/*IRFS3001*/ {  0,                                              /*#FrequencyBand400  */
/*IRFS3001*/    AGC_TABLE_GSM850,                               /* FrequencyBand850  */
/*IRFS3001*/    AGC_TABLE_GSM850,                               /* FrequencyBand900  */
/*IRFS3001*/    AGC_TABLE_DCS1800,                              /* FrequencyBand1800 */
/*IRFS3001*/    AGC_TABLE_DCS1800,                              /* FrequencyBand1900 */
/*IRFS3001*/ };
/*IRFS3001*/
/*IRFS3001*/ /*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
/*IRFS3001*/
/*IRFS3001*/ int   L1D_RF_GetGainSetting( int rf_band, int arfcn, int request_gain, long *gain_setting )
/*IRFS3001*/ {  int   max_gain, min_gain, real_gain;
/*IRFS3001*/    const int*    d32ptr;
/*IRFS3001*/    const sL1DAGCDATA*  agcptr;
/*IRFS3001*/    long  setting;
/*IRFS3001*/    int   bit_no;
/*IRFS3001*/    int   left, right, middle;
/*IRFS3001*/
/*IRFS3001*/    /* evaluate the range of available gain */
/*IRFS3001*/    d32ptr  = (int*)&(GAIN_RANGE_TABLE[rf_band]);
/*IRFS3001*/    max_gain = *d32ptr++;
/*IRFS3001*/    min_gain = *d32ptr;
/*IRFS3001*/
/*IRFS3001*/    /* clipping the request gain to the avialable gain */
/*IRFS3001*/    if( request_gain>=max_gain )
/*IRFS3001*/    {  request_gain = max_gain;  }
/*IRFS3001*/    else  if( request_gain<=min_gain )
/*IRFS3001*/    {  request_gain = min_gain;  }
/*IRFS3001*/
/*IRFS3001*/    /* evaluate the real gain setting */
/*IRFS3001*/    agcptr = AGC_TABLE[rf_band];
/*IRFS3001*/    /*binary search*/
/*IRFS3001*/    left = 0;
/*IRFS3001*/    if (rf_band == FrequencyBand850 || rf_band == FrequencyBand900)
/*IRFS3001*/    {    right = 16;
/*IRFS3001*/    }
/*IRFS3001*/    else
/*IRFS3001*/    {    right = 14;
/*IRFS3001*/    }
/*IRFS3001*/    while (left <= right)
/*IRFS3001*/    {
/*IRFS3001*/       middle = (left + right)/2;
/*IRFS3001*/       if ( request_gain >= (agcptr+middle)->pos_gain )
/*IRFS3001*/          right = middle - 1;
/*IRFS3001*/       else
/*IRFS3001*/          left  = middle + 1;
/*IRFS3001*/    }
/*IRFS3001*/    agcptr = (agcptr+left);
/*IRFS3001*/    bit_no    = BIT_NO( request_gain, agcptr->A, GC_B );
/*IRFS3001*/    real_gain = REAL_GAIN( bit_no, agcptr->A, GC_B );
/*IRFS3001*/    setting   = agcptr->setting | ((( 1<<(5-bit_no) )-1)<<17);
/*IRFS3001*/
/*IRFS3001*/    *gain_setting = setting;
/*IRFS3001*/    return( real_gain );
/*IRFS3001*/ }
/*IRFS3001*/
#endif

#if IS_RF_AD6548
/*AD6548*/ #define  GAIN_STEP              3
/*AD6548*/
/*AD6548*/ #define  PVOFSL                 (-33)
/*AD6548*/ #define  PVOFSH                 (-34)
/*AD6548*/
/*AD6548*/ #define  RF_GSM850_MAXGAIN      ((80+PVOFSL)*(PWRRES))
/*AD6548*/ #define  RF_GSM850_MINGAIN      (( 3+PVOFSL)*(PWRRES))
/*AD6548*/ #define  RF_GSM_MAXGAIN         RF_GSM850_MAXGAIN
/*AD6548*/ #define  RF_GSM_MINGAIN         RF_GSM850_MINGAIN
/*AD6548*/ #define  RF_DCS_MAXGAIN         ((80+PVOFSH)*(PWRRES))
/*AD6548*/ #define  RF_DCS_MINGAIN         (( 3+PVOFSH)*(PWRRES))
/*AD6548*/ #define  RF_PCS_MAXGAIN         RF_DCS_MAXGAIN
/*AD6548*/ #define  RF_PCS_MINGAIN         RF_DCS_MINGAIN
/*AD6548*/
/*AD6548*/ const  sL1DAGCDATA  AGC_TABLE_GSM850[2] =
/*AD6548*/ { {GBOUND( (23+PVOFSL),(21+PVOFSL) ), GC_A(2,23+PVOFSL), 0x000005 },
/*AD6548*/   {GBOUND( ( 3+PVOFSL),( 3+PVOFSL) ), GC_A(2, 3+PVOFSL), 0x001005 },
/*AD6548*/ };
/*AD6548*/ const  sL1DAGCDATA  AGC_TABLE_GSM900[2] =
/*AD6548*/ { {GBOUND( (23+PVOFSL),(21+PVOFSL) ), GC_A(2,23+PVOFSL), 0x000005 },
/*AD6548*/   {GBOUND( ( 3+PVOFSL),( 3+PVOFSL) ), GC_A(2, 3+PVOFSL), 0x001005 },
/*AD6548*/ };
/*AD6548*/ const  sL1DAGCDATA  AGC_TABLE_DCS1800[2]=
/*AD6548*/ { {GBOUND( (23+PVOFSH),(21+PVOFSH) ), GC_A(2,23+PVOFSH), 0x000005 },
/*AD6548*/   {GBOUND( ( 3+PVOFSH),( 3+PVOFSH) ), GC_A(2, 3+PVOFSH), 0x001005 },
/*AD6548*/ };
/*AD6548*/ const  sL1DAGCDATA  AGC_TABLE_PCS1900[2]=
/*AD6548*/ { {GBOUND( (23+PVOFSH),(21+PVOFSH) ), GC_A(2,23+PVOFSH), 0x000005 },
/*AD6548*/   {GBOUND( ( 3+PVOFSH),( 3+PVOFSH) ), GC_A(2, 3+PVOFSH), 0x001005 },
/*AD6548*/ };
/*AD6548*/
/*AD6548*/ const  sL1DGAINRANGE GAIN_RANGE_TABLE[] =
/*AD6548*/ { {                   0,                      0    }, /*#FrequencyBand400  */
/*AD6548*/   { (int)RF_GSM850_MAXGAIN, (int)RF_GSM850_MINGAIN }, /* FrequencyBand850  */
/*AD6548*/   { (int)RF_GSM_MAXGAIN,    (int)RF_GSM_MINGAIN    }, /* FrequencyBand900  */
/*AD6548*/   { (int)RF_DCS_MAXGAIN,    (int)RF_DCS_MINGAIN    }, /* FrequencyBand1800 */
/*AD6548*/   { (int)RF_PCS_MAXGAIN,    (int)RF_PCS_MINGAIN    }, /* FrequencyBand1900 */
/*AD6548*/ };
/*AD6548*/
/*AD6548*/ const  sL1DAGCDATA *const  AGC_TABLE[] =
/*AD6548*/ {  0,                                              /*#FrequencyBand400  */
/*AD6548*/    AGC_TABLE_GSM850,                               /* FrequencyBand850  */
/*AD6548*/    AGC_TABLE_GSM900,                               /* FrequencyBand900  */
/*AD6548*/    AGC_TABLE_DCS1800,                              /* FrequencyBand1800 */
/*AD6548*/    AGC_TABLE_PCS1900,                              /* FrequencyBand1900 */
/*AD6548*/ };
/*AD6548*/
/*AD6548*/ int   L1D_RF_GetGainSetting( int rf_band, int arfcn, int request_gain, long *gain_setting )
/*AD6548*/ {  int   max_gain, min_gain, real_gain;
/*AD6548*/    const int*    d32ptr;
/*AD6548*/    const sL1DAGCDATA*  agcptr;
/*AD6548*/    long  setting;
/*AD6548*/    int   bit_no;
/*AD6548*/
/*AD6548*/    /* evaluate the range of available gain */
/*AD6548*/    d32ptr  = (int*)&(GAIN_RANGE_TABLE[rf_band]);
/*AD6548*/    max_gain = *d32ptr++;
/*AD6548*/    min_gain = *d32ptr;
/*AD6548*/
/*AD6548*/    /* clipping the request gain to the avialable gain */
/*AD6548*/    if( request_gain>=max_gain )
/*AD6548*/    {  request_gain = max_gain;  }
/*AD6548*/    else  if( request_gain<=min_gain )
/*AD6548*/    {  request_gain = min_gain;  }
/*AD6548*/
/*AD6548*/    /* evaluate the real gain setting */
/*AD6548*/    agcptr = AGC_TABLE[rf_band];
/*AD6548*/    if( request_gain < agcptr->pos_gain )
/*AD6548*/    {  agcptr++;
/*AD6548*/    }
/*AD6548*/    {  bit_no    = BIT_NO( request_gain, agcptr->A, GC_B );
/*AD6548*/       real_gain = REAL_GAIN( bit_no, agcptr->A, GC_B );
/*AD6548*/       setting   = agcptr->setting | (bit_no<<7);
/*AD6548*/    }
/*AD6548*/
/*AD6548*/    *gain_setting = setting;
/*AD6548*/    return( real_gain );
/*AD6548*/ }
/*AD6548*/
#endif

#if IS_RF_AD6546
/*AD6546*/ #define  GAIN_STEP              3
/*AD6546*/
/*AD6546*/ #define  PVOFSL                 (-33)
/*AD6546*/ #define  PVOFSH                 (-33)
/*AD6546*/
/*AD6546*/ #define  RF_GSM850_MAXGAIN      ((74+PVOFSL)*(PWRRES))
/*AD6546*/ #define  RF_GSM850_MINGAIN      (( 3+PVOFSL)*(PWRRES))
/*AD6546*/ #define  RF_GSM_MAXGAIN         RF_GSM850_MAXGAIN
/*AD6546*/ #define  RF_GSM_MINGAIN         RF_GSM850_MINGAIN
/*AD6546*/ #define  RF_DCS_MAXGAIN         ((74+PVOFSH)*(PWRRES))
/*AD6546*/ #define  RF_DCS_MINGAIN         (( 3+PVOFSH)*(PWRRES))
/*AD6546*/ #define  RF_PCS_MAXGAIN         RF_DCS_MAXGAIN
/*AD6546*/ #define  RF_PCS_MINGAIN         RF_DCS_MINGAIN
/*AD6546*/
/*AD6546*/ const  sL1DAGCDATA  AGC_TABLE_GSM850[2] =
/*AD6546*/ { {GBOUND( (23+PVOFSL),(21+PVOFSL) ), GC_A(2,23+PVOFSL), 0x000005 },
/*AD6546*/   {GBOUND( ( 3+PVOFSL),( 3+PVOFSL) ), GC_A(2, 3+PVOFSL), 0x001005 },
/*AD6546*/ };
/*AD6546*/ const  sL1DAGCDATA  AGC_TABLE_GSM900[2] =
/*AD6546*/ { {GBOUND( (23+PVOFSL),(21+PVOFSL) ), GC_A(2,23+PVOFSL), 0x000005 },
/*AD6546*/   {GBOUND( ( 3+PVOFSL),( 3+PVOFSL) ), GC_A(2, 3+PVOFSL), 0x001005 },
/*AD6546*/ };
/*AD6546*/ const  sL1DAGCDATA  AGC_TABLE_DCS1800[2]=
/*AD6546*/ { {GBOUND( (23+PVOFSH),(21+PVOFSH) ), GC_A(2,23+PVOFSH), 0x000005 },
/*AD6546*/   {GBOUND( ( 3+PVOFSH),( 3+PVOFSH) ), GC_A(2, 3+PVOFSH), 0x001005 },
/*AD6546*/ };
/*AD6546*/ const  sL1DAGCDATA  AGC_TABLE_PCS1900[2]=
/*AD6546*/ { {GBOUND( (23+PVOFSH),(21+PVOFSH) ), GC_A(2,23+PVOFSH), 0x000005 },
/*AD6546*/   {GBOUND( ( 3+PVOFSH),( 3+PVOFSH) ), GC_A(2, 3+PVOFSH), 0x001005 },
/*AD6546*/ };
/*AD6546*/
/*AD6546*/ const  sL1DGAINRANGE GAIN_RANGE_TABLE[] =
/*AD6546*/ { {                   0,                      0    }, /*#FrequencyBand400  */
/*AD6546*/   { (int)RF_GSM850_MAXGAIN, (int)RF_GSM850_MINGAIN }, /* FrequencyBand850  */
/*AD6546*/   { (int)RF_GSM_MAXGAIN,    (int)RF_GSM_MINGAIN    }, /* FrequencyBand900  */
/*AD6546*/   { (int)RF_DCS_MAXGAIN,    (int)RF_DCS_MINGAIN    }, /* FrequencyBand1800 */
/*AD6546*/   { (int)RF_PCS_MAXGAIN,    (int)RF_PCS_MINGAIN    }, /* FrequencyBand1900 */
/*AD6546*/ };
/*AD6546*/
/*AD6546*/ const  sL1DAGCDATA *const  AGC_TABLE[] =
/*AD6546*/ {  0,                                              /*#FrequencyBand400  */
/*AD6546*/    AGC_TABLE_GSM850,                               /* FrequencyBand850  */
/*AD6546*/    AGC_TABLE_GSM900,                               /* FrequencyBand900  */
/*AD6546*/    AGC_TABLE_DCS1800,                              /* FrequencyBand1800 */
/*AD6546*/    AGC_TABLE_PCS1900,                              /* FrequencyBand1900 */
/*AD6546*/ };
/*AD6546*/
/*AD6546*/ int   L1D_RF_GetGainSetting( int rf_band, int arfcn, int request_gain, long *gain_setting )
/*AD6546*/ {
/*AD6546*/    int   max_gain, min_gain, real_gain;
/*AD6546*/    const int*    d32ptr;
/*AD6546*/    const sL1DAGCDATA*  agcptr;
/*AD6546*/    long  setting;
/*AD6546*/    int   bit_no;
/*AD6546*/
/*AD6546*/    /* evaluate the range of available gain */
/*AD6546*/    d32ptr  = (int*)&(GAIN_RANGE_TABLE[rf_band]);
/*AD6546*/    max_gain = *d32ptr++;
/*AD6546*/    min_gain = *d32ptr;
/*AD6546*/
/*AD6546*/    /* clipping the request gain to the avialable gain */
/*AD6546*/    if( request_gain>=max_gain )
/*AD6546*/    {  request_gain = max_gain;  }
/*AD6546*/    else  if( request_gain<=min_gain )
/*AD6546*/    {  request_gain = min_gain;  }
/*AD6546*/
/*AD6546*/    /* evaluate the real gain setting */
/*AD6546*/    agcptr = AGC_TABLE[rf_band];
/*AD6546*/    if( request_gain < agcptr->pos_gain )
/*AD6546*/    {  agcptr++;
/*AD6546*/    }
/*AD6546*/    {  bit_no    = BIT_NO( request_gain, agcptr->A, GC_B );
/*AD6546*/       real_gain = REAL_GAIN( bit_no, agcptr->A, GC_B );
/*AD6546*/       setting   = agcptr->setting | (bit_no<<7);
/*AD6546*/    }
/*AD6546*/
/*AD6546*/    *gain_setting = setting;
/*AD6546*/    return( real_gain );
/*AD6546*/ }
/*AD6546*/
#endif

#if IS_RF_MT6162 || IS_RF_MT6163
/*MT6162*/ #define  GAIN_STEP              3
/*MT6162*/
/*MT6162*/ #define  PVOFSL                 (34)
/*MT6162*/ #define  PVOFSH                 (34)
/*MT6162*/
/*MT6162*/ #define  RF_GSM850_MAXGAIN      ((66-PVOFSL)*(PWRRES))
/*MT6162*/ #define  RF_GSM850_MINGAIN      (( 9-PVOFSL)*(PWRRES))
/*MT6162*/ #define  RF_GSM_MAXGAIN         RF_GSM850_MAXGAIN
/*MT6162*/ #define  RF_GSM_MINGAIN         RF_GSM850_MINGAIN
/*MT6162*/ #define  RF_DCS_MAXGAIN         ((66-PVOFSH)*(PWRRES))
/*MT6162*/ #define  RF_DCS_MINGAIN         (( 9-PVOFSH)*(PWRRES))
/*MT6162*/ #define  RF_PCS_MAXGAIN         RF_DCS_MAXGAIN
/*MT6162*/ #define  RF_PCS_MINGAIN         RF_DCS_MINGAIN
/*MT6162*/
/*MT6162*/ const  sL1DAGCDATA  AGC_TABLE_GSM850[3] =
/*MT6162*/ { {GBOUND( (54-PVOFSL),(51-PVOFSL) ), GC_A(8,54-PVOFSL), 0x00300 },
/*MT6162*/   {GBOUND( (36-PVOFSL),(33-PVOFSL) ), GC_A(5,36-PVOFSL), 0x00200 },
/*MT6162*/   {GBOUND( ( 9-PVOFSL),( 9-PVOFSL) ), GC_A(0, 9-PVOFSL), 0x00100 },
/*MT6162*/ };
/*MT6162*/ const  sL1DAGCDATA  AGC_TABLE_GSM900[3] =
/*MT6162*/ { {GBOUND( (54-PVOFSL),(51-PVOFSL) ), GC_A(8,54-PVOFSL), 0x00300 },
/*MT6162*/   {GBOUND( (36-PVOFSL),(33-PVOFSL) ), GC_A(5,36-PVOFSL), 0x00200 },
/*MT6162*/   {GBOUND( ( 9-PVOFSL),( 9-PVOFSL) ), GC_A(0, 9-PVOFSL), 0x00100 },
/*MT6162*/ };
/*MT6162*/ const  sL1DAGCDATA  AGC_TABLE_DCS1800[3]=
/*MT6162*/ { {GBOUND( (54-PVOFSH),(51-PVOFSH) ), GC_A(8,54-PVOFSH), 0x00300 },
/*MT6162*/   {GBOUND( (36-PVOFSH),(33-PVOFSH) ), GC_A(5,36-PVOFSH), 0x00200 },
/*MT6162*/   {GBOUND( ( 9-PVOFSH),( 9-PVOFSH) ), GC_A(0, 9-PVOFSH), 0x00100 },
/*MT6162*/ };
/*MT6162*/ const  sL1DAGCDATA  AGC_TABLE_PCS1900[3]=
/*MT6162*/ { {GBOUND( (54-PVOFSH),(51-PVOFSH) ), GC_A(8,54-PVOFSH), 0x00300 },
/*MT6162*/   {GBOUND( (36-PVOFSH),(33-PVOFSH) ), GC_A(5,36-PVOFSH), 0x00200 },
/*MT6162*/   {GBOUND( ( 9-PVOFSH),( 9-PVOFSH) ), GC_A(0, 9-PVOFSH), 0x00100 },
/*MT6162*/ };
/*MT6162*/
/*MT6162*/ const  sL1DGAINRANGE GAIN_RANGE_TABLE[] =
/*MT6162*/ { {                   0,                      0    }, /* FrequencyBand400  */
/*MT6162*/   { (int)RF_GSM850_MAXGAIN, (int)RF_GSM850_MINGAIN }, /* FrequencyBand850  */
/*MT6162*/   { (int)RF_GSM_MAXGAIN,    (int)RF_GSM_MINGAIN    }, /* FrequencyBand900  */
/*MT6162*/   { (int)RF_DCS_MAXGAIN,    (int)RF_DCS_MINGAIN    }, /* FrequencyBand1800 */
/*MT6162*/   { (int)RF_PCS_MAXGAIN,    (int)RF_PCS_MINGAIN    }, /* FrequencyBand1900 */
/*MT6162*/ };
/*MT6162*/
/*MT6162*/ const  sL1DAGCDATA *const  AGC_TABLE[] =
/*MT6162*/ {  0,                                                 /* FrequencyBand400  */
/*MT6162*/    AGC_TABLE_GSM850,                                  /* FrequencyBand850  */
/*MT6162*/    AGC_TABLE_GSM900,                                  /* FrequencyBand900  */
/*MT6162*/    AGC_TABLE_DCS1800,                                 /* FrequencyBand1800 */
/*MT6162*/    AGC_TABLE_PCS1900,                                 /* FrequencyBand1900 */
/*MT6162*/ };
/*MT6162*/
/*MT6162*/ int   L1D_RF_GetGainSetting( int rf_band, int arfcn, int request_gain, long *gain_setting )
/*MT6162*/ {
/*MT6162*/    int   max_gain, min_gain, real_gain;
/*MT6162*/    const int*    d32ptr;
/*MT6162*/    const sL1DAGCDATA*  agcptr;
/*MT6162*/    sLNAGAINOFFSET* lnaptr;
/*MT6162*/    sAGCGAINOFFSET* ofsptr;
/*MT6162*/    long  setting;
/*MT6162*/    int   bit_no, idx, lna_path_loss;
/*MT6162*/ #if IS_RF_RX_DCOC_SUPPORT
/*MT6162*/    int   biquad_gain;
/*MT6162*/    signed short  dc_offset_i, dc_offset_q;
/*MT6162*/ #endif
/*MT6162*/
/*MT6162*/    /* evaluate the range of available gain */
/*MT6162*/    d32ptr  = (int*)&(GAIN_RANGE_TABLE[rf_band]);
/*MT6162*/    max_gain = *d32ptr++;
/*MT6162*/    min_gain = *d32ptr;
/*MT6162*/
/*MT6162*/
/*MT6162*/    /* choose the LNA path loss */
/*MT6162*/    lnaptr = LNA_PATHLOSS_TABLE[rf_band];
/*MT6162*/    /* get the arfcn section */
/*MT6162*/    ofsptr = AGC_PATHLOSS_TABLE[rf_band];
/*MT6162*/    while( ofsptr->max_arfcn>=0 )
/*MT6162*/    {  if( arfcn <= ofsptr->max_arfcn )
/*MT6162*/       {  break;  }
/*MT6162*/       ofsptr++;
/*MT6162*/       lnaptr++;
/*MT6162*/    }
/*MT6162*/
/*MT6162*/    /* evaluate the real gain setting */
/*MT6162*/    agcptr = AGC_TABLE[rf_band];
/*MT6162*/    while( request_gain < agcptr->pos_gain )
/*MT6162*/    {  agcptr++;
/*MT6162*/       if(agcptr->pos_gain == GBOUND( ( 9-PVOFSL),( 9-PVOFSL) ))
/*MT6162*/       {
/*MT6162*/          break;
/*MT6162*/       }
/*MT6162*/    }
/*MT6162*/    {  idx       = (int)(((agcptr->setting)>>8)&0x3);
/*MT6162*/       if( idx==3 )      /* LNA_High */
/*MT6162*/       {  lna_path_loss = 0;  }
/*MT6162*/       else if( idx==2 ) /* LNA_Middle */
/*MT6162*/       {  lna_path_loss = (l1d_rf2.is_fhc) ? (0) : ((int)(lnaptr->gain_offset_middle-ofsptr->gain_offset));  }
/*MT6162*/       else              /* LNA_Low */
/*MT6162*/       {  lna_path_loss = (l1d_rf2.is_fhc) ? (0) : ((int)(lnaptr->gain_offset_low-ofsptr->gain_offset));     }
/*MT6162*/
/*MT6162*/       request_gain+=lna_path_loss;
/*MT6162*/
/*MT6162*/       /* clipping the request gain to the avialable gain */
/*MT6162*/       if( request_gain>=max_gain )
/*MT6162*/       {  request_gain = max_gain;  }
/*MT6162*/       else  if( request_gain<=min_gain )
/*MT6162*/       {  request_gain = min_gain;  }
/*MT6162*/
/*MT6162*/       bit_no    = BIT_NO( request_gain, agcptr->A, GC_B );
/*MT6162*/       real_gain = -lna_path_loss+REAL_GAIN( bit_no, agcptr->A, GC_B );
/*MT6162*/       setting   = agcptr->setting | (bit_no&0xF);
/*MT6162*/    }
/*MT6162*/
/*MT6162*/    *gain_setting = setting;
/*MT6162*/
/*MT6162*/    l1d_rf2.rx_dc_offset = 0;
/*MT6162*/ #if IS_RF_RX_DCOC_SUPPORT
/*MT6162*/    biquad_gain = BBGAIN_DECODE_TABLE[(setting&0xF)][0];
/*MT6162*/    dc_offset_i = l1d_rf2.rx_dc_offset_i[rf_band-1][biquad_gain/6];
/*MT6162*/    dc_offset_q = l1d_rf2.rx_dc_offset_q[rf_band-1][biquad_gain/6];
/*MT6162*/    #if IS_RF_RX_DCOC_WITH_PRECISION_IMPROVEMENT
/*MT6162*/    if( dc_offset_i>0 )
/*MT6162*/       dc_offset_i = (  ( dc_offset_i+(1<<(ALPHA_FILTER_SCALE-1)))>>ALPHA_FILTER_SCALE  );
/*MT6162*/    else
/*MT6162*/       dc_offset_i = (-((-dc_offset_i+(1<<(ALPHA_FILTER_SCALE-1)))>>ALPHA_FILTER_SCALE));
/*MT6162*/    if( dc_offset_q>0 )
/*MT6162*/       dc_offset_q = (  ( dc_offset_q+(1<<(ALPHA_FILTER_SCALE-1)))>>ALPHA_FILTER_SCALE  );
/*MT6162*/    else
/*MT6162*/       dc_offset_q = (-((-dc_offset_q+(1<<(ALPHA_FILTER_SCALE-1)))>>ALPHA_FILTER_SCALE));
/*MT6162*/    #endif /* IS_RF_RX_DCOC_WITH_PRECISION_IMPROVEMENT */
/*MT6162*/    l1d_rf2.rx_dc_offset = (unsigned long)(((dc_offset_q&0xFF)<<8)|(dc_offset_i&0xFF) );
/*MT6162*/ #endif
/*MT6162*/
/*MT6162*/    return( real_gain );
/*MT6162*/ }
/*MT6162*/
#endif

#if IS_RF_MT6280RF
/*MT6280RF*/
/*MT6280RF*/ #define  GAIN_STEP               3
/*MT6280RF*/ #define  PVOFSL                  34
/*MT6280RF*/ #define  PVOFSH                  34
/*MT6280RF*/ #define  MIXER_GAIN             (9*(PWRRES))
/*MT6280RF*/ #define  RF_GSM850_MAXGAIN      (( 51-PVOFSL )*(PWRRES))
/*MT6280RF*/ #define  RF_GSM850_MINGAIN      (( -3-PVOFSL )*(PWRRES))
/*MT6280RF*/ #define  RF_GSM_MAXGAIN         (( 51-PVOFSL )*(PWRRES))
/*MT6280RF*/ #define  RF_GSM_MINGAIN         (( -3-PVOFSL )*(PWRRES))
/*MT6280RF*/ #define  RF_DCS_MAXGAIN         (( 51-PVOFSH )*(PWRRES))
/*MT6280RF*/ #define  RF_DCS_MINGAIN         (( -3-PVOFSH )*(PWRRES))
/*MT6280RF*/ #define  RF_PCS_MAXGAIN         (( 51-PVOFSH )*(PWRRES))
/*MT6280RF*/ #define  RF_PCS_MINGAIN         (( -3-PVOFSH )*(PWRRES))
/*MT6280RF*/
/*MT6280RF*/ /* if no rx cal. DCOC_DACI/DCOC_DACQ in CW12 use the default value */
/*MT6280RF*/ #define  RXIF_DCOC_DACI_M       0x90000
/*MT6280RF*/ #define  RXIF_DCOC_DACQ_M       0x00000
/*MT6280RF*/
/*MT6280RF*/ /* GSM850....................................................................*/
/*MT6280RF*/
/*MT6280RF*/ const  sL1DAGCDATA  AGC_TABLE_GSM850[3] =
/*MT6280RF*/ {  {  GBOUND(( 39-PVOFSL ),( 36-PVOFSL ) ), GC_A( 4,( 39-PVOFSL ) ), BSI_CW(0x0C, 0x00080) },
/*MT6280RF*/    {  GBOUND(( 21-PVOFSL ),( 18-PVOFSL ) ), GC_A( 2,( 21-PVOFSL ) ), BSI_CW(0x0C, 0x00020) },
/*MT6280RF*/    {  GBOUND(( -3-PVOFSL ),( -3-PVOFSL ) ), GC_A( 0,( -3-PVOFSL ) ), BSI_CW(0x0C, 0x00000) },
/*MT6280RF*/ };
/*MT6280RF*/
/*MT6280RF*/ /* GSM900....................................................................*/
/*MT6280RF*/
/*MT6280RF*/ const  sL1DAGCDATA  AGC_TABLE_GSM900[3] =
/*MT6280RF*/ {  {  GBOUND(( 39-PVOFSL ),( 36-PVOFSL ) ), GC_A( 4,( 39-PVOFSL ) ), BSI_CW(0x0C, 0x00080) },
/*MT6280RF*/    {  GBOUND(( 21-PVOFSL ),( 18-PVOFSL ) ), GC_A( 2,( 21-PVOFSL ) ), BSI_CW(0x0C, 0x00020) },
/*MT6280RF*/    {  GBOUND(( -3-PVOFSL ),( -3-PVOFSL ) ), GC_A( 0,( -3-PVOFSL ) ), BSI_CW(0x0C, 0x00000) },
/*MT6280RF*/ };
/*MT6280RF*/
/*MT6280RF*/ /* DCS1800...................................................................*/
/*MT6280RF*/
/*MT6280RF*/ const  sL1DAGCDATA  AGC_TABLE_DCS1800[3] =
/*MT6280RF*/ {  {  GBOUND(( 39-PVOFSH ),( 36-PVOFSH ) ), GC_A( 4,( 39-PVOFSH ) ), BSI_CW(0x0C, 0x00080) },
/*MT6280RF*/    {  GBOUND(( 21-PVOFSH ),( 18-PVOFSH ) ), GC_A( 2,( 21-PVOFSH ) ), BSI_CW(0x0C, 0x00020) },
/*MT6280RF*/    {  GBOUND(( -3-PVOFSH ),( -3-PVOFSH ) ), GC_A( 0,( -3-PVOFSH ) ), BSI_CW(0x0C, 0x00000) },
/*MT6280RF*/ };
/*MT6280RF*/
/*MT6280RF*/ /* PCS1900...................................................................*/
/*MT6280RF*/
/*MT6280RF*/ const  sL1DAGCDATA  AGC_TABLE_PCS1900[3] =
/*MT6280RF*/ {  {  GBOUND(( 39-PVOFSH ),( 36-PVOFSH ) ), GC_A( 4,( 39-PVOFSH ) ), BSI_CW(0x0C, 0x00080) },
/*MT6280RF*/    {  GBOUND(( 21-PVOFSH ),( 18-PVOFSH ) ), GC_A( 2,( 21-PVOFSH ) ), BSI_CW(0x0C, 0x00020) },
/*MT6280RF*/    {  GBOUND(( -3-PVOFSH ),( -3-PVOFSH ) ), GC_A( 0,( -3-PVOFSH ) ), BSI_CW(0x0C, 0x00000) },
/*MT6280RF*/ };
/*MT6280RF*/
/*MT6280RF*/ /*...........................................................................*/
/*MT6280RF*/
/*MT6280RF*/ const  sL1DGAINRANGE GAIN_RANGE_TABLE[] =
/*MT6280RF*/ {  {                   0,                      0    }, /*#FrequencyBand400  */
/*MT6280RF*/    { (int)RF_GSM850_MAXGAIN, (int)RF_GSM850_MINGAIN }, /* FrequencyBand850  */
/*MT6280RF*/    { (int)RF_GSM_MAXGAIN,    (int)RF_GSM_MINGAIN    }, /* FrequencyBand900  */
/*MT6280RF*/    { (int)RF_DCS_MAXGAIN,    (int)RF_DCS_MINGAIN    }, /* FrequencyBand1800 */
/*MT6280RF*/    { (int)RF_PCS_MAXGAIN,    (int)RF_PCS_MINGAIN    }, /* FrequencyBand1900 */
/*MT6280RF*/ };
/*MT6280RF*/
/*MT6280RF*/ const  sL1DAGCDATA *const  AGC_TABLE[] =
/*MT6280RF*/ {  0,                                              /*#FrequencyBand400  */
/*MT6280RF*/    AGC_TABLE_GSM850,                               /* FrequencyBand850  */
/*MT6280RF*/    AGC_TABLE_GSM900,                               /* FrequencyBand900  */
/*MT6280RF*/    AGC_TABLE_DCS1800,                              /* FrequencyBand1800 */
/*MT6280RF*/    AGC_TABLE_PCS1900,                              /* FrequencyBand1900 */
/*MT6280RF*/ };
/*MT6280RF*/
/*MT6280RF*/
/*MT6280RF*/ /*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
/*MT6280RF*/
/*MT6280RF*/ int   L1D_RF_GetGainSetting( int rf_band, int arfcn, int request_gain, long *gain_setting )
/*MT6280RF*/ {  int   max_gain, min_gain, real_gain;
/*MT6280RF*/    const int*    d32ptr;
/*MT6280RF*/    const sL1DAGCDATA*  agcptr;
/*MT6280RF*/    sLNAGAINOFFSET*     lnaptr;
/*MT6280RF*/    sAGCGAINOFFSET*     ofsptr;
/*MT6280RF*/    long  setting;
/*MT6280RF*/    int   bit_no, idx, lna_path_loss;
/*MT6280RF*/
/*MT6280RF*/    /* evaluate the range of available gain */
/*MT6280RF*/    d32ptr   = (int*)&(GAIN_RANGE_TABLE[rf_band]);
/*MT6280RF*/    max_gain = *d32ptr++;
/*MT6280RF*/    min_gain = *d32ptr;
/*MT6280RF*/
/*MT6280RF*/    /* clipping the request gain to the avialable gain */
/*MT6280RF*/    if( request_gain>=max_gain )
/*MT6280RF*/    {  request_gain = max_gain;  
/*MT6280RF*/    }
/*MT6280RF*/    else if( request_gain<=min_gain )
/*MT6280RF*/    {  request_gain = min_gain;  
/*MT6280RF*/    }
/*MT6280RF*/
/*MT6280RF*/    /* choose the LNA path loss */
/*MT6280RF*/    lnaptr = LNA_PATHLOSS_TABLE[rf_band];
/*MT6280RF*/    /* get the arfcn section */
/*MT6280RF*/    ofsptr = AGC_PATHLOSS_TABLE[rf_band];
/*MT6280RF*/    while( ofsptr->max_arfcn>=0 )
/*MT6280RF*/    {  if( arfcn <= ofsptr->max_arfcn )
/*MT6280RF*/       {  break;  }
/*MT6280RF*/       ofsptr++;
/*MT6280RF*/       lnaptr++;
/*MT6280RF*/    }
/*MT6280RF*/
/*MT6280RF*/    /* evaluate the real gain setting */
/*MT6280RF*/    agcptr = AGC_TABLE[rf_band];
/*MT6280RF*/    while( request_gain < agcptr->pos_gain )
/*MT6280RF*/    {  agcptr++;
/*MT6280RF*/    }
/*MT6280RF*/    {
/*MT6280RF*/       idx = (int)(((agcptr->setting)>>5)&0x7);
/*MT6280RF*/       if( idx==4 )      /* LNA_High */
/*MT6280RF*/       {  lna_path_loss = 0;  }
/*MT6280RF*/       else if( idx==1 ) /* LNA_Middle */
/*MT6280RF*/       {  lna_path_loss = (l1d_rf2.is_fhc) ? (0) : ((int)(lnaptr->gain_offset_middle-ofsptr->gain_offset));  }
/*MT6280RF*/       else              /* LNA_Low */
/*MT6280RF*/       {  lna_path_loss = (l1d_rf2.is_fhc) ? (0) : ((int)(lnaptr->gain_offset_low-ofsptr->gain_offset));     }
/*MT6280RF*/
/*MT6280RF*/       bit_no    = BIT_NO( request_gain, agcptr->A, GC_B );
/*MT6280RF*/       real_gain = -lna_path_loss+REAL_GAIN( bit_no, agcptr->A, GC_B );
/*MT6280RF*/    #if IS_HEADROOM_DETECTION_SUPPORT || IS_INBAND_BLOCKER_DETECTION_SUPPORT
/*MT6280RF*/       if( ( ((l1d_rf.blk_flag)&(HRD_FOUND)) && (request_gain >= -4*PWRRES) ) || ( ((l1d_rf.blk_flag)&(IBB_FOUND)) && (request_gain >= 8*PWRRES) ) )
/*MT6280RF*/       {        /* CW12: LNA GAIN     |MIXER GAIN| IF GAIN */
/*MT6280RF*/          setting   = agcptr->setting | (0x1<<4) | (bit_no&0xF); 
/*MT6280RF*/          real_gain -= MIXER_GAIN;
/*MT6280RF*/       }
/*MT6280RF*/       else
/*MT6280RF*/    #endif
/*MT6280RF*/       {  setting   = agcptr->setting | (bit_no&0xF);  
/*MT6280RF*/       }
/*MT6280RF*/    }
/*MT6280RF*/    
/*MT6280RF*/    /* if cal. DCOC_DACI/DCOC_DACQ in CW12 use the calibrated data */
/*MT6280RF*/    if( (l1d_rf2.is_power_on_cal)&(RXRC_DCOC_CAL_DONE) )
/*MT6280RF*/    {  setting |= ((l1d_rf2.rxif_dcoc_daci_m[rf_band-FrequencyBand850][bit_no]&0x3F)<<14) | ((l1d_rf2.rxif_dcoc_dacq_m[rf_band-FrequencyBand850][bit_no]&0x3F)<<8);  
/*MT6280RF*/    }
/*MT6280RF*/    else
/*MT6280RF*/    {  setting |= RXIF_DCOC_DACI_M | RXIF_DCOC_DACQ_M;  
/*MT6280RF*/    }
/*MT6280RF*/
/*MT6280RF*/    *gain_setting = setting;
/*MT6280RF*/    return( real_gain );
/*MT6280RF*/ }
/*MT6280RF*/
   #if IS_W_CANCELLATION_SUPPORT
/*MT6280RF*/ unsigned short   L1D_RF_FindGainStep( unsigned long gain_setting, FrequencyBand rf_band  )
/*MT6280RF*/ {
/*MT6280RF*/    int lna_gain_setting;
/*MT6280RF*/    int tz_gain_setting;
/*MT6280RF*/    int if_gain_setting;
/*MT6280RF*/
/*MT6280RF*/    lna_gain_setting = (gain_setting>>5) & 0x7;
/*MT6280RF*/    tz_gain_setting  = (gain_setting>>4) & 0x1;
/*MT6280RF*/    if_gain_setting  = (gain_setting>>0) & 0xF; /* bit_no */
/*MT6280RF*/
/*MT6280RF*/    #if IS_HEADROOM_DETECTION_SUPPORT || IS_INBAND_BLOCKER_DETECTION_SUPPORT
/*MT6280RF*/    if( tz_gain_setting == 0x1 )               /*        ACI2   Gain Table      */
/*MT6280RF*/    {                                          /* ----------------------------- */
/*MT6280RF*/       if( lna_gain_setting == 0x4 )           /* gain| bit | tz_gain |lna_gain */
/*MT6280RF*/       {                                       /*  idx|  no | setting | setting */
/*MT6280RF*/          return ( if_gain_setting+8 );        /* ----+-----+---------+-------- */
/*MT6280RF*/       }                                       /*  16 |  8  |  (tz=1) |         */
/*MT6280RF*/       else if( lna_gain_setting == 0x1 )      /*  15 |  7  |         |  LNA    */
/*MT6280RF*/       {                                       /*  14 |  6  |  ACI2   |  High   */
/*MT6280RF*/          if( if_gain_setting>=5 )             /*  13 |  5  |         |  Gain   */
/*MT6280RF*/             return ( if_gain_setting-4+8);    /*  12 |  4  |  Gain   |         */
/*MT6280RF*/          else                                 /* ----+-----|         |-------- */
/*MT6280RF*/             return 0;                         /*  11 |  7  |  Table  |  LNA    */
/*MT6280RF*/       }                                       /*  10 |  6  |         |  Mid    */
/*MT6280RF*/       else                                    /*   9 |  5  |         |  Gain   */
/*MT6280RF*/       {                                       /* ----+-----+---------+-------- */
/*MT6280RF*/          return 0;                            /*   0 | 0~4 |       other       */
/*MT6280RF*/       }                                       /* ----------------------------- */
/*MT6280RF*/    }
/*MT6280RF*/    else
/*MT6280RF*/    #endif
/*MT6280RF*/    {                                          /*        Normal Gain Table      */
/*MT6280RF*/       if( lna_gain_setting == 0x4 )           /* ----------------------------- */
/*MT6280RF*/       {                                       /* gain| bit | tz_gain |lna_gain */
/*MT6280RF*/          return ( if_gain_setting   );        /*  idx|  no | setting | setting */
/*MT6280RF*/       }                                       /* ----+-----+---------+-------- */
/*MT6280RF*/       else if( lna_gain_setting == 0x1 )      /*   8 |  8  |  (tz=0) |         */
/*MT6280RF*/       {                                       /*   7 |  7  |         |  LNA    */
/*MT6280RF*/          if( if_gain_setting>=5 )             /*   6 |  6  |  Normal |  High   */
/*MT6280RF*/             return ( if_gain_setting-4 );     /*   5 |  5  |         |  Gain   */
/*MT6280RF*/          else                                 /*   4 |  4  |  Gain   |         */
/*MT6280RF*/             return 0;                         /* ----+-----|         |-------- */
/*MT6280RF*/       }                                       /*   3 |  7  |  Table  |  LNA    */
/*MT6280RF*/       else                                    /*   2 |  6  |         |  Mid    */
/*MT6280RF*/       {                                       /*   1 |  5  |         |  Gain   */
/*MT6280RF*/          return 0;                            /* ----+-----+------------------ */
/*MT6280RF*/       }                                       /*   0 | 0~4 |       other       */
/*MT6280RF*/    }                                          /* ----------------------------- */
/*MT6280RF*/ }
/*MT6280RF*/
   #endif
#endif

#if IS_RF_MT6169
/*MT6169*/
/*MT6169*/ #define  GAIN_STEP              3
/*MT6169*/ #define  PVOFSL                 34
/*MT6169*/ #define  PVOFSH                 34
/*MT6169*/ #define  LPF2_DROP_GAIN         ROUNDINT(6*(PWRRES))
/*MT6169*/ #define  HRD_LB_THRESHOLD       ROUNDINT((39.4-PVOFSL)*(PWRRES))
/*MT6169*/ #define  HRD_HB_THRESHOLD       ROUNDINT((39.4-PVOFSH)*(PWRRES))
/*MT6169*/ #define  IBBD_LB_THRESHOLD      ROUNDINT((42.4-PVOFSL)*(PWRRES))
/*MT6169*/ #define  IBBD_HB_THRESHOLD      ROUNDINT((42.4-PVOFSH)*(PWRRES))
/*MT6169*/ #define  IBBD_REAL_GAIN1_L      ROUNDINT((45.4-PVOFSL)*(PWRRES))
/*MT6169*/ #define  IBBD_REAL_GAIN1_H      ROUNDINT((45.4-PVOFSH)*(PWRRES))
/*MT6169*/ #define  IBBD_REAL_GAIN2_L      ROUNDINT((39.4-PVOFSL)*(PWRRES))
/*MT6169*/ #define  IBBD_REAL_GAIN2_H      ROUNDINT((39.4-PVOFSH)*(PWRRES))
/*MT6169*/ #define  IBBD_GAIN1_SETTING     BSI_CW(0x36, 0x8209E)
/*MT6169*/ #define  IBBD_GAIN2_SETTING     BSI_CW(0x36, 0x82096)
/*MT6169*/ #define  RF_GSM850_MAXGAIN      (( 51.4-PVOFSL )*(PWRRES))
/*MT6169*/ #define  RF_GSM850_MINGAIN      (( -2.6-PVOFSL )*(PWRRES))
/*MT6169*/ #define  RF_GSM_MAXGAIN         (( 51.4-PVOFSL )*(PWRRES))
/*MT6169*/ #define  RF_GSM_MINGAIN         (( -2.6-PVOFSL )*(PWRRES))
/*MT6169*/ #define  RF_DCS_MAXGAIN         (( 51.4-PVOFSH )*(PWRRES))
/*MT6169*/ #define  RF_DCS_MINGAIN         (( -2.6-PVOFSH )*(PWRRES))
/*MT6169*/ #define  RF_PCS_MAXGAIN         (( 51.4-PVOFSH )*(PWRRES))
/*MT6169*/ #define  RF_PCS_MINGAIN         (( -2.6-PVOFSH )*(PWRRES))
/*MT6169*/
/*MT6169*/ /* GSM850....................................................................*/
/*MT6169*/
/*MT6169*/ const  sL1DAGCDATA  AGC_TABLE_GSM850[7] =
/*MT6169*/ {  {  GBOUND(( 51.4-PVOFSL ),( 42.4-PVOFSL ) ), GC_A( 6,( 51.4-PVOFSL ) ), BSI_CW(0x36, 0x820B8) },
/*MT6169*/    {  GBOUND(( 39.4-PVOFSL ),( 36.4-PVOFSL ) ), GC_A( 4,( 39.4-PVOFSL ) ), BSI_CW(0x36, 0x820B0) },
/*MT6169*/    {  GBOUND(( 27.4-PVOFSL ),( 24.4-PVOFSL ) ), GC_A( 2,( 27.4-PVOFSL ) ), BSI_CW(0x36, 0x82090) },
/*MT6169*/    {  GBOUND(( 21.4-PVOFSL ),( 18.4-PVOFSL ) ), GC_A( 2,( 21.4-PVOFSL ) ), BSI_CW(0x36, 0x82088) },
/*MT6169*/    {  GBOUND((  9.4-PVOFSL ),(  6.4-PVOFSL ) ), GC_A( 2,(  9.4-PVOFSL ) ), BSI_CW(0x36, 0x82018) },
/*MT6169*/    {  GBOUND((  3.4-PVOFSL ),(  0.4-PVOFSL ) ), GC_A( 2,(  3.4-PVOFSL ) ), BSI_CW(0x36, 0x82010) },
/*MT6169*/    {  GBOUND(( -2.6-PVOFSL ),( -2.6-PVOFSL ) ), GC_A( 2,( -2.6-PVOFSL ) ), BSI_CW(0x36, 0x82008) },
/*MT6169*/ };
/*MT6169*/
/*MT6169*/ /* GSM900....................................................................*/
/*MT6169*/
/*MT6169*/ const  sL1DAGCDATA  AGC_TABLE_GSM900[7] =
/*MT6169*/ {  {  GBOUND(( 51.4-PVOFSL ),( 42.4-PVOFSL ) ), GC_A( 6,( 51.4-PVOFSL ) ), BSI_CW(0x36, 0x820B8) },
/*MT6169*/    {  GBOUND(( 39.4-PVOFSL ),( 36.4-PVOFSL ) ), GC_A( 4,( 39.4-PVOFSL ) ), BSI_CW(0x36, 0x820B0) },
/*MT6169*/    {  GBOUND(( 27.4-PVOFSL ),( 24.4-PVOFSL ) ), GC_A( 2,( 27.4-PVOFSL ) ), BSI_CW(0x36, 0x82090) },
/*MT6169*/    {  GBOUND(( 21.4-PVOFSL ),( 18.4-PVOFSL ) ), GC_A( 2,( 21.4-PVOFSL ) ), BSI_CW(0x36, 0x82088) },
/*MT6169*/    {  GBOUND((  9.4-PVOFSL ),(  6.4-PVOFSL ) ), GC_A( 2,(  9.4-PVOFSL ) ), BSI_CW(0x36, 0x82018) },
/*MT6169*/    {  GBOUND((  3.4-PVOFSL ),(  0.4-PVOFSL ) ), GC_A( 2,(  3.4-PVOFSL ) ), BSI_CW(0x36, 0x82010) },
/*MT6169*/    {  GBOUND(( -2.6-PVOFSL ),( -2.6-PVOFSL ) ), GC_A( 2,( -2.6-PVOFSL ) ), BSI_CW(0x36, 0x82008) },
/*MT6169*/ };
/*MT6169*/
/*MT6169*/ /* DCS1800...................................................................*/
/*MT6169*/
/*MT6169*/ const  sL1DAGCDATA  AGC_TABLE_DCS1800[7] =
/*MT6169*/ {  {  GBOUND(( 51.4-PVOFSH ),( 42.4-PVOFSH ) ), GC_A( 6,( 51.4-PVOFSH ) ), BSI_CW(0x36, 0x820B8) },
/*MT6169*/    {  GBOUND(( 39.4-PVOFSH ),( 36.4-PVOFSH ) ), GC_A( 4,( 39.4-PVOFSH ) ), BSI_CW(0x36, 0x820B0) },
/*MT6169*/    {  GBOUND(( 27.4-PVOFSH ),( 24.4-PVOFSH ) ), GC_A( 2,( 27.4-PVOFSH ) ), BSI_CW(0x36, 0x82090) },
/*MT6169*/    {  GBOUND(( 21.4-PVOFSH ),( 18.4-PVOFSH ) ), GC_A( 2,( 21.4-PVOFSH ) ), BSI_CW(0x36, 0x82088) },
/*MT6169*/    {  GBOUND((  9.4-PVOFSH ),(  6.4-PVOFSH ) ), GC_A( 2,(  9.4-PVOFSH ) ), BSI_CW(0x36, 0x82018) },
/*MT6169*/    {  GBOUND((  3.4-PVOFSH ),(  0.4-PVOFSH ) ), GC_A( 2,(  3.4-PVOFSH ) ), BSI_CW(0x36, 0x82010) },
/*MT6169*/    {  GBOUND(( -2.6-PVOFSH ),( -2.6-PVOFSH ) ), GC_A( 2,( -2.6-PVOFSH ) ), BSI_CW(0x36, 0x82008) },
/*MT6169*/ };
/*MT6169*/
/*MT6169*/ /* PCS1900...................................................................*/
/*MT6169*/
/*MT6169*/ const  sL1DAGCDATA  AGC_TABLE_PCS1900[7] =
/*MT6169*/ {  {  GBOUND(( 51.4-PVOFSH ),( 42.4-PVOFSH ) ), GC_A( 6,( 51.4-PVOFSH ) ), BSI_CW(0x36, 0x820B8) },
/*MT6169*/    {  GBOUND(( 39.4-PVOFSH ),( 36.4-PVOFSH ) ), GC_A( 4,( 39.4-PVOFSH ) ), BSI_CW(0x36, 0x820B0) },
/*MT6169*/    {  GBOUND(( 27.4-PVOFSH ),( 24.4-PVOFSH ) ), GC_A( 2,( 27.4-PVOFSH ) ), BSI_CW(0x36, 0x82090) },
/*MT6169*/    {  GBOUND(( 21.4-PVOFSH ),( 18.4-PVOFSH ) ), GC_A( 2,( 21.4-PVOFSH ) ), BSI_CW(0x36, 0x82088) },
/*MT6169*/    {  GBOUND((  9.4-PVOFSH ),(  6.4-PVOFSH ) ), GC_A( 2,(  9.4-PVOFSH ) ), BSI_CW(0x36, 0x82018) },
/*MT6169*/    {  GBOUND((  3.4-PVOFSH ),(  0.4-PVOFSH ) ), GC_A( 2,(  3.4-PVOFSH ) ), BSI_CW(0x36, 0x82010) },
/*MT6169*/    {  GBOUND(( -2.6-PVOFSH ),( -2.6-PVOFSH ) ), GC_A( 2,( -2.6-PVOFSH ) ), BSI_CW(0x36, 0x82008) },
/*MT6169*/ };
/*MT6169*/
/*MT6169*/ /*...........................................................................*/
/*MT6169*/
/*MT6169*/ const  sL1DGAINRANGE GAIN_RANGE_TABLE[] =
/*MT6169*/ {  {                   0,                      0    }, /*#FrequencyBand400  */
/*MT6169*/    { (int)RF_GSM850_MAXGAIN, (int)RF_GSM850_MINGAIN }, /* FrequencyBand850  */
/*MT6169*/    { (int)RF_GSM_MAXGAIN,    (int)RF_GSM_MINGAIN    }, /* FrequencyBand900  */
/*MT6169*/    { (int)RF_DCS_MAXGAIN,    (int)RF_DCS_MINGAIN    }, /* FrequencyBand1800 */
/*MT6169*/    { (int)RF_PCS_MAXGAIN,    (int)RF_PCS_MINGAIN    }, /* FrequencyBand1900 */
/*MT6169*/ };
/*MT6169*/
/*MT6169*/ const  sL1DAGCDATA *const  AGC_TABLE[] =
/*MT6169*/ {  0,                                              /*#FrequencyBand400  */
/*MT6169*/    AGC_TABLE_GSM850,                               /* FrequencyBand850  */
/*MT6169*/    AGC_TABLE_GSM900,                               /* FrequencyBand900  */
/*MT6169*/    AGC_TABLE_DCS1800,                              /* FrequencyBand1800 */
/*MT6169*/    AGC_TABLE_PCS1900,                              /* FrequencyBand1900 */
/*MT6169*/ };
/*MT6169*/
/*MT6169*/
/*MT6169*/ /*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
/*MT6169*/
/*MT6169*/ int   L1D_RF_GetGainSetting( int rf_band, int arfcn, int request_gain, long *gain_setting )
/*MT6169*/ {  int   max_gain, min_gain, real_gain;
/*MT6169*/    const int*    d32ptr;
/*MT6169*/    const sL1DAGCDATA*  agcptr;
/*MT6169*/    sLNAGAINOFFSET*     lnaptr;
/*MT6169*/    sAGCGAINOFFSET*     ofsptr;
/*MT6169*/    long  setting;
/*MT6169*/    int   bit_no, idx, lna_path_loss;
/*MT6169*/    #if IS_INBAND_BLOCKER_DETECTION_SUPPORT
/*MT6169*/    int   ibbd_threshold = (rf_band<FrequencyBand1800) ? IBBD_LB_THRESHOLD : IBBD_HB_THRESHOLD;
/*MT6169*/    #endif
/*MT6169*/    #if IS_HEADROOM_DETECTION_SUPPORT
/*MT6169*/    int   hrd_threshold  = (rf_band<FrequencyBand1800) ? HRD_LB_THRESHOLD  : HRD_HB_THRESHOLD;
/*MT6169*/    #endif
/*MT6169*/
/*MT6169*/    /* evaluate the range of available gain */
/*MT6169*/    d32ptr   = (int*)&(GAIN_RANGE_TABLE[rf_band]);
/*MT6169*/    max_gain = *d32ptr++;
/*MT6169*/    min_gain = *d32ptr;
/*MT6169*/
/*MT6169*/    /* clipping the request gain to the avialable gain */
/*MT6169*/    if( request_gain>=max_gain )
/*MT6169*/    {  request_gain = max_gain;  
/*MT6169*/    }
/*MT6169*/    else if( request_gain<=min_gain )
/*MT6169*/    {  request_gain = min_gain;  
/*MT6169*/    }
/*MT6169*/
/*MT6169*/    /* choose the LNA path loss */
/*MT6169*/    lnaptr = LNA_PATHLOSS_TABLE[rf_band];
/*MT6169*/    /* get the arfcn section */
/*MT6169*/    ofsptr = AGC_PATHLOSS_TABLE[rf_band];
/*MT6169*/    while( ofsptr->max_arfcn>=0 )
/*MT6169*/    {  if( arfcn <= ofsptr->max_arfcn )
/*MT6169*/       {  break;  }
/*MT6169*/       ofsptr++;
/*MT6169*/       lnaptr++;
/*MT6169*/    }
/*MT6169*/
/*MT6169*/    /* evaluate the real gain setting */
/*MT6169*/    agcptr = AGC_TABLE[rf_band];
/*MT6169*/    while( request_gain < agcptr->pos_gain )
/*MT6169*/    {  agcptr++;
/*MT6169*/    }
/*MT6169*/    {
/*MT6169*/       idx = (int)(((agcptr->setting)>>5)&0x7);
/*MT6169*/       if( idx==5 )      /* LNA_High */
/*MT6169*/       {  lna_path_loss = 0;  }
/*MT6169*/       else if( idx==4 ) /* LNA_Middle */
/*MT6169*/       {  lna_path_loss = (l1d_rf2.is_fhc) ? (0) : ((int)(lnaptr->gain_offset_middle-ofsptr->gain_offset));  }
/*MT6169*/       else              /* LNA_Low */
/*MT6169*/       {  lna_path_loss = (l1d_rf2.is_fhc) ? (0) : ((int)(lnaptr->gain_offset_low-ofsptr->gain_offset));     }
/*MT6169*/
/*MT6169*/       bit_no    = BIT_NO( request_gain, agcptr->A, GC_B );
/*MT6169*/       real_gain = -lna_path_loss+REAL_GAIN( bit_no, agcptr->A, GC_B );
/*MT6169*/
/*MT6169*/       if( 0 )
/*MT6169*/       { /* do nothing */ }
/*MT6169*/    #if IS_INBAND_BLOCKER_DETECTION_SUPPORT
/*MT6169*/       else if( ((l1d_rf.blk_flag)&(IBB_FOUND)) && (request_gain >= ibbd_threshold) )
/*MT6169*/       {
/*MT6169*/          if( bit_no < 6)
/*MT6169*/          {  
/*MT6169*/             setting   = IBBD_GAIN2_SETTING; 
/*MT6169*/             real_gain = (rf_band<FrequencyBand1800) ? IBBD_REAL_GAIN2_L : IBBD_REAL_GAIN2_H;
/*MT6169*/          }
/*MT6169*/          else
/*MT6169*/          {
/*MT6169*/             setting   = IBBD_GAIN1_SETTING; 
/*MT6169*/             real_gain = (rf_band<FrequencyBand1800) ? IBBD_REAL_GAIN1_L : IBBD_REAL_GAIN1_H;
/*MT6169*/          }
/*MT6169*/       }
/*MT6169*/    #endif
/*MT6169*/    #if IS_HEADROOM_DETECTION_SUPPORT
/*MT6169*/       else if( ((l1d_rf.blk_flag)&(HRD_FOUND)) && (request_gain >= (hrd_threshold)) )
/*MT6169*/       {
/*MT6169*/          setting   = agcptr->setting | ((bit_no-2)&0xF); 
/*MT6169*/          real_gain -= LPF2_DROP_GAIN;
/*MT6169*/       }
/*MT6169*/    #endif
/*MT6169*/       else
/*MT6169*/       {  setting   = agcptr->setting | (bit_no&0xF);  
/*MT6169*/       }
/*MT6169*/    }
/*MT6169*/    
/*MT6169*/    *gain_setting = setting;
/*MT6169*/    return( real_gain );
/*MT6169*/ }
/*MT6169*/
   #if IS_W_CANCELLATION_SUPPORT
/*MT6169*/ unsigned short   L1D_RF_FindGainStep( unsigned long gain_setting, FrequencyBand rf_band  )
/*MT6169*/ {
/*MT6169*/    unsigned short lna_gain_setting;
/*MT6169*/    unsigned short cb_gain_setting;
/*MT6169*/    unsigned short if_gain_setting;
/*MT6169*/    unsigned short band_offset = (rf_band<FrequencyBand1800) ? 0 : 10;
/*MT6169*/    unsigned short gain_step;
/*MT6169*/
/*MT6169*/    lna_gain_setting = (unsigned short)( (gain_setting>>5) & 0x7 );
/*MT6169*/    cb_gain_setting  = (unsigned short)( (gain_setting>>3) & 0x3 );
/*MT6169*/    if_gain_setting  = (unsigned short)( (gain_setting>>0) & 0x7 ); /* bit_no */
/*MT6169*/
/*MT6169*/    if( lna_gain_setting == 0x5 )
/*MT6169*/    {
/*MT6169*/       if( if_gain_setting == 0x4 )
/*MT6169*/       {
/*MT6169*/          gain_step = (cb_gain_setting==3) ? if_gain_setting+5+band_offset : if_gain_setting+band_offset ;
/*MT6169*/       }
/*MT6169*/       else
/*MT6169*/       {
/*MT6169*/          gain_step = (if_gain_setting<4)  ? if_gain_setting+5+band_offset : if_gain_setting+band_offset ;
/*MT6169*/       }
/*MT6169*/    }
/*MT6169*/    else if( lna_gain_setting == 0x4 )
/*MT6169*/    {
/*MT6169*/       if( if_gain_setting ==0x6 )
/*MT6169*/       {
/*MT6169*/          gain_step = (cb_gain_setting==3) ? if_gain_setting+band_offset : if_gain_setting-1+band_offset ;
/*MT6169*/       }
/*MT6169*/       else
/*MT6169*/       {
/*MT6169*/          gain_step = (cb_gain_setting==2) ? if_gain_setting-2+band_offset : 0+band_offset ;
/*MT6169*/       }
/*MT6169*/    }
/*MT6169*/    else
/*MT6169*/    {
/*MT6169*/       gain_step = 0+band_offset;
/*MT6169*/    }
/*MT6169*/    return gain_step;
/*MT6169*/ }
/*MT6169*/
   #endif
#endif

#if IS_RF_MT6166
/*MT6166*/
/*MT6166*/ #define  GAIN_STEP               3
/*MT6166*/ #define  PVOFSL                  34
/*MT6166*/ #define  PVOFSH                  34
/*MT6166*/ #define  NORMAL_GAIN_TABLE_FLAG  0
/*MT6166*/ #define  OBB_GAIN_TABLE_FLAG     1
/*MT6166*/ #define  IBB_GAIN_TABLE_FLAG     2
/*MT6166*/ #define  ACI_GAIN_TABLE_FLAG     3
/*MT6166*/ #define  MIXER_GAIN             (9*(PWRRES))
/*MT6166*/ #define  LNA_GAIN_LB            (5*(PWRRES))
/*MT6166*/ #define  LNA_GAIN_HB            (6*(PWRRES))
/*MT6166*/ #define  LNA_GAIN_LB_M          (3.5*(PWRRES))
/*MT6166*/ #define  LNA_GAIN_HB_M          (2.5*(PWRRES))
/*MT6166*/ #define  IF_GAIN                (6*(PWRRES))
/*MT6166*/ #define  IF_GAIN_OBB            (9*(PWRRES))
/*MT6166*/ #if IS_DUAL_TALK_RX_GAIN_TABLE_CO_BAND_SUPPORT
/*MT6166*/ #define  RF_GSM850_MAXGAIN_H    (( 56.5-PVOFSL )*(PWRRES))
/*MT6166*/ #define  RF_GSM850_MINGAIN_H    ((    1-PVOFSL )*(PWRRES))
/*MT6166*/ #define  RF_GSM850_MAXGAIN_L    (( 56.5-PVOFSL )*(PWRRES))
/*MT6166*/ #define  RF_GSM850_MINGAIN_L    ((  2.5-PVOFSL )*(PWRRES))
/*MT6166*/ #define  RF_GSM_MAXGAIN_H       (( 56.5-PVOFSL )*(PWRRES))
/*MT6166*/ #define  RF_GSM_MINGAIN_H       ((    1-PVOFSL )*(PWRRES))
/*MT6166*/ #define  RF_GSM_MAXGAIN_L       (( 56.5-PVOFSL )*(PWRRES))
/*MT6166*/ #define  RF_GSM_MINGAIN_L       ((  2.5-PVOFSL )*(PWRRES))
/*MT6166*/ #define  RF_DCS_MAXGAIN_H       (( 55.5-PVOFSH )*(PWRRES))
/*MT6166*/ #define  RF_DCS_MINGAIN_H       ((  0.5-PVOFSH )*(PWRRES))
/*MT6166*/ #define  RF_DCS_MAXGAIN_L       (( 55.5-PVOFSH )*(PWRRES))
/*MT6166*/ #define  RF_DCS_MINGAIN_L       ((  1.5-PVOFSH )*(PWRRES))
/*MT6166*/ #define  RF_PCS_MAXGAIN_H       (( 55.5-PVOFSH )*(PWRRES))
/*MT6166*/ #define  RF_PCS_MINGAIN_H       ((  0.5-PVOFSH )*(PWRRES))
/*MT6166*/ #define  RF_PCS_MAXGAIN_L       (( 55.5-PVOFSH )*(PWRRES))
/*MT6166*/ #define  RF_PCS_MINGAIN_L       ((  1.5-PVOFSH )*(PWRRES))
/*MT6166*/
/*MT6166*/ /* GSM850....................................................................*/
/*MT6166*/
/*MT6166*/ const  sL1DAGCDATA  AGC_TABLE_GSM850_H[4] =
/*MT6166*/ {  {  GBOUND(( 38.5-PVOFSL ),( 28  -PVOFSL ) ), GC_A( 2,( 38.5-PVOFSL ) ), BSI_CW(0x83, 0x50188) },
/*MT6166*/    {  GBOUND(( 28  -PVOFSL ),( 22  -PVOFSL ) ), GC_A( 2,( 28  -PVOFSL ) ), BSI_CW(0x83, 0x50088) },
/*MT6166*/    {  GBOUND(( 10  -PVOFSL ),(  1  -PVOFSL ) ), GC_A( 2,( 10  -PVOFSL ) ), BSI_CW(0x83, 0x50008) },
/*MT6166*/    {  GBOUND((  1  -PVOFSL ),(  1  -PVOFSL ) ), GC_A( 2,(  1  -PVOFSL ) ), BSI_CW(0x83, 0x50028) },
/*MT6166*/ };
/*MT6166*/ const  sL1DAGCDATA  AGC_TABLE_GSM850_L[4] =
/*MT6166*/ {  {  GBOUND(( 38.5-PVOFSL ),( 30  -PVOFSL ) ), GC_A( 2,( 38.5-PVOFSL ) ), BSI_CW(0x83, 0x50188) },
/*MT6166*/    {  GBOUND(( 30  -PVOFSL ),( 23.5-PVOFSL ) ), GC_A( 2,( 30  -PVOFSL ) ), BSI_CW(0x83, 0x50088) },
/*MT6166*/    {  GBOUND(( 11.5-PVOFSL ),(  2.5-PVOFSL ) ), GC_A( 2,( 11.5-PVOFSL ) ), BSI_CW(0x83, 0x50008) },
/*MT6166*/    {  GBOUND((  2.5-PVOFSL ),(  2.5-PVOFSL ) ), GC_A( 2,(  2.5-PVOFSL ) ), BSI_CW(0x83, 0x50028) },
/*MT6166*/ };
/*MT6166*/
/*MT6166*/ /* GSM900....................................................................*/
/*MT6166*/
/*MT6166*/ const  sL1DAGCDATA  AGC_TABLE_GSM900_H[4] =
/*MT6166*/ {  {  GBOUND(( 38.5-PVOFSL ),( 28  -PVOFSL ) ), GC_A( 2,( 38.5-PVOFSL ) ), BSI_CW(0x83, 0x50188) },
/*MT6166*/    {  GBOUND(( 28  -PVOFSL ),( 22  -PVOFSL ) ), GC_A( 2,( 28  -PVOFSL ) ), BSI_CW(0x83, 0x50088) },
/*MT6166*/    {  GBOUND(( 10  -PVOFSL ),(  1  -PVOFSL ) ), GC_A( 2,( 10  -PVOFSL ) ), BSI_CW(0x83, 0x50008) },
/*MT6166*/    {  GBOUND((  1  -PVOFSL ),(  1  -PVOFSL ) ), GC_A( 2,(  1  -PVOFSL ) ), BSI_CW(0x83, 0x50028) },
/*MT6166*/ };
/*MT6166*/ const  sL1DAGCDATA  AGC_TABLE_GSM900_L[4] =
/*MT6166*/ {  {  GBOUND(( 38.5-PVOFSL ),( 30  -PVOFSL ) ), GC_A( 2,( 38.5-PVOFSL ) ), BSI_CW(0x83, 0x50188) },
/*MT6166*/    {  GBOUND(( 30  -PVOFSL ),( 23.5-PVOFSL ) ), GC_A( 2,( 30  -PVOFSL ) ), BSI_CW(0x83, 0x50088) },
/*MT6166*/    {  GBOUND(( 11.5-PVOFSL ),(  2.5-PVOFSL ) ), GC_A( 2,( 11.5-PVOFSL ) ), BSI_CW(0x83, 0x50008) },
/*MT6166*/    {  GBOUND((  2.5-PVOFSL ),(  2.5-PVOFSL ) ), GC_A( 2,(  2.5-PVOFSL ) ), BSI_CW(0x83, 0x50028) },
/*MT6166*/ };
/*MT6166*/
/*MT6166*/ /* DCS1800...................................................................*/
/*MT6166*/
/*MT6166*/ const  sL1DAGCDATA  AGC_TABLE_DCS1800_H[4] =
/*MT6166*/ {  {  GBOUND(( 37.5-PVOFSL ),( 27.5-PVOFSL ) ), GC_A( 2,( 37.5-PVOFSL ) ), BSI_CW(0x83, 0x50188) },
/*MT6166*/    {  GBOUND(( 27.5-PVOFSL ),( 21.5-PVOFSL ) ), GC_A( 2,( 27.5-PVOFSL ) ), BSI_CW(0x83, 0x50088) },
/*MT6166*/    {  GBOUND((  9.5-PVOFSL ),(  0.5-PVOFSL ) ), GC_A( 2,(  9.5-PVOFSL ) ), BSI_CW(0x83, 0x50008) },
/*MT6166*/    {  GBOUND((  0.5-PVOFSL ),(  0.5-PVOFSL ) ), GC_A( 2,(  0.5-PVOFSL ) ), BSI_CW(0x83, 0x50028) },
/*MT6166*/ };
/*MT6166*/ const  sL1DAGCDATA  AGC_TABLE_DCS1800_L[4] =
/*MT6166*/ {  {  GBOUND(( 37.5-PVOFSL ),( 29  -PVOFSL ) ), GC_A( 2,( 37.5-PVOFSL ) ), BSI_CW(0x83, 0x50188) },
/*MT6166*/    {  GBOUND(( 29  -PVOFSL ),( 22.5-PVOFSL ) ), GC_A( 2,( 29  -PVOFSL ) ), BSI_CW(0x83, 0x50088) },
/*MT6166*/    {  GBOUND(( 10.5-PVOFSL ),(  1.5-PVOFSL ) ), GC_A( 2,( 10.5-PVOFSL ) ), BSI_CW(0x83, 0x50008) },
/*MT6166*/    {  GBOUND((  1.5-PVOFSL ),(  1.5-PVOFSL ) ), GC_A( 2,(  1.5-PVOFSL ) ), BSI_CW(0x83, 0x50028) },
/*MT6166*/ };
/*MT6166*/
/*MT6166*/ /* PCS1900...................................................................*/
/*MT6166*/
/*MT6166*/ const  sL1DAGCDATA  AGC_TABLE_PCS1900_H[4] =
/*MT6166*/ {  {  GBOUND(( 37.5-PVOFSL ),( 27.5-PVOFSL ) ), GC_A( 2,( 37.5-PVOFSL ) ), BSI_CW(0x83, 0x50188) },
/*MT6166*/    {  GBOUND(( 27.5-PVOFSL ),( 21.5-PVOFSL ) ), GC_A( 2,( 27.5-PVOFSL ) ), BSI_CW(0x83, 0x50088) },
/*MT6166*/    {  GBOUND((  9.5-PVOFSL ),(  0.5-PVOFSL ) ), GC_A( 2,(  9.5-PVOFSL ) ), BSI_CW(0x83, 0x50008) },
/*MT6166*/    {  GBOUND((  0.5-PVOFSL ),(  0.5-PVOFSL ) ), GC_A( 2,(  0.5-PVOFSL ) ), BSI_CW(0x83, 0x50028) },
/*MT6166*/ };
/*MT6166*/ const  sL1DAGCDATA  AGC_TABLE_PCS1900_L[4] =
/*MT6166*/ {  {  GBOUND(( 37.5-PVOFSL ),( 29  -PVOFSL ) ), GC_A( 2,( 37.5-PVOFSL ) ), BSI_CW(0x83, 0x50188) },
/*MT6166*/    {  GBOUND(( 29  -PVOFSL ),( 22.5-PVOFSL ) ), GC_A( 2,( 29  -PVOFSL ) ), BSI_CW(0x83, 0x50088) },
/*MT6166*/    {  GBOUND(( 10.5-PVOFSL ),(  1.5-PVOFSL ) ), GC_A( 2,( 10.5-PVOFSL ) ), BSI_CW(0x83, 0x50008) },
/*MT6166*/    {  GBOUND((  1.5-PVOFSL ),(  1.5-PVOFSL ) ), GC_A( 2,(  1.5-PVOFSL ) ), BSI_CW(0x83, 0x50028) },
/*MT6166*/ };
/*MT6166*/
/*MT6166*/ /*...........................................................................*/
/*MT6166*/
/*MT6166*/ const  sL1DGAINRANGE GAIN_RANGE_TABLE_H[] =
/*MT6166*/ {  {                     0,                    0        }, /*#FrequencyBand400  */
/*MT6166*/    { (int)RF_GSM850_MAXGAIN_H, (int)RF_GSM850_MINGAIN_H }, /* FrequencyBand850  */
/*MT6166*/    { (int)RF_GSM_MAXGAIN_H,    (int)RF_GSM_MINGAIN_H    }, /* FrequencyBand900  */
/*MT6166*/    { (int)RF_DCS_MAXGAIN_H,    (int)RF_DCS_MINGAIN_H    }, /* FrequencyBand1800 */
/*MT6166*/    { (int)RF_PCS_MAXGAIN_H,    (int)RF_PCS_MINGAIN_H    }, /* FrequencyBand1900 */
/*MT6166*/ };
/*MT6166*/ const  sL1DGAINRANGE GAIN_RANGE_TABLE_L[] =
/*MT6166*/ {  {                     0,                    0        }, /*#FrequencyBand400  */
/*MT6166*/    { (int)RF_GSM850_MAXGAIN_L, (int)RF_GSM850_MINGAIN_L }, /* FrequencyBand850  */
/*MT6166*/    { (int)RF_GSM_MAXGAIN_L,    (int)RF_GSM_MINGAIN_L    }, /* FrequencyBand900  */
/*MT6166*/    { (int)RF_DCS_MAXGAIN_L,    (int)RF_DCS_MINGAIN_L    }, /* FrequencyBand1800 */
/*MT6166*/    { (int)RF_PCS_MAXGAIN_L,    (int)RF_PCS_MINGAIN_L    }, /* FrequencyBand1900 */
/*MT6166*/ };
/*MT6166*/ const  sL1DGAINRANGE * GAIN_RANGE_TABLE[] =
/*MT6166*/ {  GAIN_RANGE_TABLE_L,
/*MT6166*/    GAIN_RANGE_TABLE_H,
/*MT6166*/ };
/*MT6166*/
/*MT6166*/ const  sL1DAGCDATA* AGC_TABLE_H[] =
/*MT6166*/ {  0,                                              /*#FrequencyBand400  */
/*MT6166*/	  AGC_TABLE_GSM850_H,                             /* FrequencyBand850  */
/*MT6166*/	  AGC_TABLE_GSM900_H,                             /* FrequencyBand900  */
/*MT6166*/	  AGC_TABLE_DCS1800_H,                            /* FrequencyBand1800 */
/*MT6166*/	  AGC_TABLE_PCS1900_H,                            /* FrequencyBand1900 */
/*MT6166*/ };
/*MT6166*/ const  sL1DAGCDATA* AGC_TABLE_L[] =
/*MT6166*/ {  0,                                              /*#FrequencyBand400  */
/*MT6166*/	  AGC_TABLE_GSM850_L,                             /* FrequencyBand850  */
/*MT6166*/	  AGC_TABLE_GSM900_L,                             /* FrequencyBand900  */
/*MT6166*/	  AGC_TABLE_DCS1800_L,                            /* FrequencyBand1800 */
/*MT6166*/	  AGC_TABLE_PCS1900_L,                            /* FrequencyBand1900 */
/*MT6166*/ };
/*MT6166*/ const  sL1DAGCDATA **const  AGC_TABLE[] =
/*MT6166*/ {  AGC_TABLE_L,
/*MT6166*/    AGC_TABLE_H,
/*MT6166*/ };
/*MT6166*/ #else
/*MT6166*/ #define  RF_GSM850_MAXGAIN      (( 56.5-PVOFSL )*(PWRRES))
/*MT6166*/ #define  RF_GSM850_MINGAIN      ((  2.5-PVOFSL )*(PWRRES))
/*MT6166*/ #define  RF_GSM_MAXGAIN         (( 56.5-PVOFSL )*(PWRRES))
/*MT6166*/ #define  RF_GSM_MINGAIN         ((  2.5-PVOFSL )*(PWRRES))
/*MT6166*/ #define  RF_DCS_MAXGAIN         (( 55.5-PVOFSH )*(PWRRES))
/*MT6166*/ #define  RF_DCS_MINGAIN         ((  1.5-PVOFSH )*(PWRRES))
/*MT6166*/ #define  RF_PCS_MAXGAIN         (( 55.5-PVOFSH )*(PWRRES))
/*MT6166*/ #define  RF_PCS_MINGAIN         ((  1.5-PVOFSH )*(PWRRES))
/*MT6166*/
/*MT6166*/ /* GSM850....................................................................*/
/*MT6166*/
/*MT6166*/ const  sL1DAGCDATA  AGC_TABLE_GSM850[4] =
/*MT6166*/ {  {  GBOUND(( 38.5-PVOFSL ),( 30  -PVOFSL ) ), GC_A( 2,( 38.5-PVOFSL ) ), BSI_CW(0x83, 0x50188) },
/*MT6166*/    {  GBOUND(( 30  -PVOFSL ),( 23.5-PVOFSL ) ), GC_A( 2,( 30  -PVOFSL ) ), BSI_CW(0x83, 0x50088) },
/*MT6166*/    {  GBOUND(( 11.5-PVOFSL ),(  2.5-PVOFSL ) ), GC_A( 2,( 11.5-PVOFSL ) ), BSI_CW(0x83, 0x50008) },
/*MT6166*/    {  GBOUND((  2.5-PVOFSL ),(  2.5-PVOFSL ) ), GC_A( 2,(  2.5-PVOFSL ) ), BSI_CW(0x83, 0x50028) },
/*MT6166*/ };
/*MT6166*/
/*MT6166*/ /* GSM900....................................................................*/
/*MT6166*/
/*MT6166*/ const  sL1DAGCDATA  AGC_TABLE_GSM900[4] =
/*MT6166*/ {  {  GBOUND(( 38.5-PVOFSL ),( 30  -PVOFSL ) ), GC_A( 2,( 38.5-PVOFSL ) ), BSI_CW(0x83, 0x50188) },
/*MT6166*/    {  GBOUND(( 30  -PVOFSL ),( 23.5-PVOFSL ) ), GC_A( 2,( 30  -PVOFSL ) ), BSI_CW(0x83, 0x50088) },
/*MT6166*/    {  GBOUND(( 11.5-PVOFSL ),(  2.5-PVOFSL ) ), GC_A( 2,( 11.5-PVOFSL ) ), BSI_CW(0x83, 0x50008) },
/*MT6166*/    {  GBOUND((  2.5-PVOFSL ),(  2.5-PVOFSL ) ), GC_A( 2,(  2.5-PVOFSL ) ), BSI_CW(0x83, 0x50028) },
/*MT6166*/ };
/*MT6166*/
/*MT6166*/ /* DCS1800...................................................................*/
/*MT6166*/
/*MT6166*/ const  sL1DAGCDATA  AGC_TABLE_DCS1800[4] =
/*MT6166*/ {  {  GBOUND(( 37.5-PVOFSL ),( 29  -PVOFSL ) ), GC_A( 2,( 37.5-PVOFSL ) ), BSI_CW(0x83, 0x50188) },
/*MT6166*/    {  GBOUND(( 29  -PVOFSL ),( 22.5-PVOFSL ) ), GC_A( 2,( 29  -PVOFSL ) ), BSI_CW(0x83, 0x50088) },
/*MT6166*/    {  GBOUND(( 10.5-PVOFSL ),(  1.5-PVOFSL ) ), GC_A( 2,( 10.5-PVOFSL ) ), BSI_CW(0x83, 0x50008) },
/*MT6166*/    {  GBOUND((  1.5-PVOFSL ),(  1.5-PVOFSL ) ), GC_A( 2,(  1.5-PVOFSL ) ), BSI_CW(0x83, 0x50028) },
/*MT6166*/ };
/*MT6166*/
/*MT6166*/ /* PCS1900...................................................................*/
/*MT6166*/
/*MT6166*/ const  sL1DAGCDATA  AGC_TABLE_PCS1900[4] =
/*MT6166*/ {  {  GBOUND(( 37.5-PVOFSL ),( 29  -PVOFSL ) ), GC_A( 2,( 37.5-PVOFSL ) ), BSI_CW(0x83, 0x50188) },
/*MT6166*/    {  GBOUND(( 29  -PVOFSL ),( 22.5-PVOFSL ) ), GC_A( 2,( 29  -PVOFSL ) ), BSI_CW(0x83, 0x50088) },
/*MT6166*/    {  GBOUND(( 10.5-PVOFSL ),(  1.5-PVOFSL ) ), GC_A( 2,( 10.5-PVOFSL ) ), BSI_CW(0x83, 0x50008) },
/*MT6166*/    {  GBOUND((  1.5-PVOFSL ),(  1.5-PVOFSL ) ), GC_A( 2,(  1.5-PVOFSL ) ), BSI_CW(0x83, 0x50028) },
/*MT6166*/ };
/*MT6166*/
/*MT6166*/ /*...........................................................................*/
/*MT6166*/
/*MT6166*/ const  sL1DGAINRANGE GAIN_RANGE_TABLE[] =
/*MT6166*/ {  {                   0,                      0    }, /*#FrequencyBand400  */
/*MT6166*/    { (int)RF_GSM850_MAXGAIN, (int)RF_GSM850_MINGAIN }, /* FrequencyBand850  */
/*MT6166*/    { (int)RF_GSM_MAXGAIN,    (int)RF_GSM_MINGAIN    }, /* FrequencyBand900  */
/*MT6166*/    { (int)RF_DCS_MAXGAIN,    (int)RF_DCS_MINGAIN    }, /* FrequencyBand1800 */
/*MT6166*/    { (int)RF_PCS_MAXGAIN,    (int)RF_PCS_MINGAIN    }, /* FrequencyBand1900 */
/*MT6166*/ };
/*MT6166*/
/*MT6166*/ const  sL1DAGCDATA *const  AGC_TABLE[] =
/*MT6166*/ {  0,                                              /*#FrequencyBand400  */
/*MT6166*/    AGC_TABLE_GSM850,                               /* FrequencyBand850  */
/*MT6166*/    AGC_TABLE_GSM900,                               /* FrequencyBand900  */
/*MT6166*/    AGC_TABLE_DCS1800,                              /* FrequencyBand1800 */
/*MT6166*/    AGC_TABLE_PCS1900,                              /* FrequencyBand1900 */
/*MT6166*/ };
/*MT6166*/ #endif
/*MT6166*/
/*MT6166*/ /*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
/*MT6166*/
/*MT6166*/ int   L1D_RF_GetGainSetting( int rf_band, int arfcn, int request_gain, long *gain_setting )
/*MT6166*/ {  int   max_gain, min_gain, real_gain, band_mode, gain_table;
/*MT6166*/    const int*    d32ptr;
/*MT6166*/    const sL1DAGCDATA*  agcptr;
/*MT6166*/ #if IS_MULTI_LNA_MODE_CALIBRATION_SUPPORT
/*MT6166*/    sLNAGAINOFFSET*     lnaptr;
/*MT6166*/ #endif
/*MT6166*/    sAGCGAINOFFSET*     ofsptr;
/*MT6166*/    long  setting;
/*MT6166*/    int   bit_no, lna_path_loss;
/*MT6166*/    int   thres_IBB, thres_HRD, thres_OBB, dividing_OBB1, dividing_OBB2, LNA_GAIN, LNA_GAIN_M;
/*MT6166*/ #if IS_DUAL_TALK_RX_GAIN_TABLE_CO_BAND_SUPPORT
/*MT6166*/    unsigned char  coband_gaintable_en;
/*MT6166*/    unsigned short coband_en_bitmap;
/*MT6166*/ #endif
/*MT6166*/
/*MT6166*/    band_mode      = (rf_band < FrequencyBand1800) ? 0 /* LowBand */ : 1 /* HighBand */;
/*MT6166*/
/*MT6166*/    thres_IBB      = band_mode ?            28 :              36;   //( 37.5-PVOFSL )*PWRRES : ( 38.5-PVOFSL )*PWRRES
/*MT6166*/    thres_HRD      = band_mode ?            76 :              84;   //( 43.5-PVOFSL )*PWRRES : ( 44.5-PVOFSL )*PWRRES
/*MT6166*/    thres_OBB      = band_mode ?           -40 :             -32;   //(   29-PVOFSL )*PWRRES : (   30-PVOFSL )*PWRRES
/*MT6166*/    dividing_OBB1  = band_mode ?           172 :             180;   //( 55.5-PVOFSL )*PWRRES : ( 56.5-PVOFSL )*PWRRES
/*MT6166*/    dividing_OBB2  = band_mode ?            28 :              36;   //( 37.5-PVOFSL )*PWRRES : ( 38.5-PVOFSL )*PWRRES
/*MT6166*/    LNA_GAIN       = band_mode ?   LNA_GAIN_HB :     LNA_GAIN_LB;
/*MT6166*/    LNA_GAIN_M     = band_mode ? LNA_GAIN_HB_M :   LNA_GAIN_LB_M;
/*MT6166*/
/*MT6166*/    /* evaluate the range of available gain */
/*MT6166*/ #if IS_DUAL_TALK_RX_GAIN_TABLE_CO_BAND_SUPPORT
/*MT6166*/    coband_en_bitmap    = L1D_Rx_Gain_Table_CoBand_Enable();
/*MT6166*/    coband_gaintable_en = (coband_en_bitmap & (0x1<<(rf_band-1))) ? 1 : 0;
/*MT6166*/    d32ptr   = (int*)(GAIN_RANGE_TABLE[coband_gaintable_en]+rf_band);
/*MT6166*/ #else
/*MT6166*/    d32ptr   = (int*)&(GAIN_RANGE_TABLE[rf_band]);
/*MT6166*/ #endif
/*MT6166*/    max_gain = *d32ptr++;
/*MT6166*/    min_gain = *d32ptr;
/*MT6166*/
/*MT6166*/    /* clipping the request gain to the avialable gain */
/*MT6166*/    if( request_gain>=max_gain )
/*MT6166*/    {  request_gain = max_gain;
/*MT6166*/    }
/*MT6166*/    else if( request_gain<=min_gain )
/*MT6166*/    {  request_gain = min_gain;
/*MT6166*/    }
/*MT6166*/
/*MT6166*/ #if IS_MULTI_LNA_MODE_CALIBRATION_SUPPORT
/*MT6166*/    /* choose the LNA path loss */
/*MT6166*/    lnaptr = LNA_PATHLOSS_TABLE[rf_band];
/*MT6166*/ #endif
/*MT6166*/    /* get the arfcn section */
/*MT6166*/    ofsptr = AGC_PATHLOSS_TABLE[rf_band];
/*MT6166*/    while( ofsptr->max_arfcn>=0 )
/*MT6166*/    {  if( arfcn <= ofsptr->max_arfcn )
/*MT6166*/       {  break;  }
/*MT6166*/       ofsptr++;
/*MT6166*/ #if IS_MULTI_LNA_MODE_CALIBRATION_SUPPORT
/*MT6166*/       lnaptr++;
/*MT6166*/ #endif
/*MT6166*/    }
/*MT6166*/
/*MT6166*/    /* evaluate the real gain setting */
/*MT6166*/ #if IS_DUAL_TALK_RX_GAIN_TABLE_CO_BAND_SUPPORT
/*MT6166*/    agcptr = *(AGC_TABLE[coband_gaintable_en]+rf_band);
/*MT6166*/ #else
/*MT6166*/    agcptr = AGC_TABLE[rf_band];
/*MT6166*/ #endif
/*MT6166*/    while( request_gain < agcptr->pos_gain )
/*MT6166*/    {  agcptr++;
/*MT6166*/    }
/*MT6166*/    {
/*MT6166*/ #if IS_MULTI_LNA_MODE_CALIBRATION_SUPPORT
/*MT6166*/       int idx;
/*MT6166*/       idx = (int)(((agcptr->setting)>>7)&0x7);
/*MT6166*/       if( idx==3 )      /* LNA_High */
/*MT6166*/       {
/*MT6166*/    #if IS_OUTBAND_BLOCKER_DETECTION_SUPPORT
/*MT6166*/          if( ( (l1d_rf.blk_flag & LB_OBB_FOUND) && (band_mode == 0) && request_gain>= thres_OBB ) ||
/*MT6166*/              ( (l1d_rf.blk_flag & HB_OBB_FOUND) && (band_mode == 1) && request_gain>= thres_OBB )  )
/*MT6166*/          {   lna_path_loss = (l1d_rf2.is_fhc) ? (0) : ((int)(lnaptr->gain_offset_middle-ofsptr->gain_offset));   }
/*MT6166*/          else
/*MT6166*/    #endif
/*MT6166*/          {   lna_path_loss = 0;   }
/*MT6166*/       }
/*MT6166*/       else if( idx==1 ) /* LNA_Middle */
/*MT6166*/       {  lna_path_loss = (l1d_rf2.is_fhc) ? (0) : ((int)(lnaptr->gain_offset_middle-ofsptr->gain_offset));  }
/*MT6166*/       else              /* LNA_Low */
/*MT6166*/       {  lna_path_loss = (l1d_rf2.is_fhc) ? (0) : ((int)(lnaptr->gain_offset_low-ofsptr->gain_offset));     }
/*MT6166*/ #else
/*MT6166*/       lna_path_loss = 0;
/*MT6166*/ #endif
/*MT6166*/
/*MT6166*/       bit_no    = BIT_NO( request_gain, agcptr->A, GC_B );
/*MT6166*/       real_gain = -lna_path_loss+REAL_GAIN( bit_no, agcptr->A, GC_B );
/*MT6166*/
/*MT6166*/       /* Evaluate the real gain setting. */
/*MT6166*/       if( 0 )
/*MT6166*/       { /* do nothing */ }
/*MT6166*/ #if IS_OUTBAND_BLOCKER_DETECTION_SUPPORT
/*MT6166*/       else if( ( (l1d_rf.blk_flag & LB_OBB_FOUND) && (band_mode == 0) && request_gain>= thres_OBB ) ||
/*MT6166*/                ( (l1d_rf.blk_flag & HB_OBB_FOUND) && (band_mode == 1) && request_gain>= thres_OBB )  )
/*MT6166*/       {
/*MT6166*/          gain_table = OBB_GAIN_TABLE_FLAG;
/*MT6166*/          if( request_gain >= dividing_OBB1 )
/*MT6166*/          {
/*MT6166*/             agcptr++; // decrease LNA gain
/*MT6166*/                        /* CW131: IF GAIN  | LNA GAIN        |MIXER GAIN */
/*MT6166*/             setting    = (bit_no&0xF)<<10 | agcptr->setting | (0x0<<5);
/*MT6166*/             real_gain -= LNA_GAIN;
/*MT6166*/          }
/*MT6166*/          else if( request_gain >= dividing_OBB2 )
/*MT6166*/          {
/*MT6166*/             agcptr++; // decrease LNA gain
/*MT6166*/                        /* CW131: IF GAIN       | LNA GAIN        |MIXER GAIN */
/*MT6166*/             setting    = ( (bit_no+3)&0xF)<<10 | agcptr->setting | (0x0<<5);
/*MT6166*/             real_gain -= (LNA_GAIN - IF_GAIN_OBB);
/*MT6166*/          }
/*MT6166*/          else
/*MT6166*/          {             /* CW131: IF GAIN  | LNA GAIN        |MIXER GAIN */
/*MT6166*/             setting    = (bit_no&0xF)<<10 | agcptr->setting | (0x0<<5);
/*MT6166*/             real_gain += LNA_GAIN_M;
/*MT6166*/          }
/*MT6166*/       }
/*MT6166*/ #endif
/*MT6166*/ #if IS_INBAND_BLOCKER_DETECTION_SUPPORT
/*MT6166*/       else if( (l1d_rf.blk_flag & IBB_FOUND) && (request_gain>= thres_IBB ) )
/*MT6166*/       {
/*MT6166*/          gain_table = IBB_GAIN_TABLE_FLAG;
/*MT6166*/                     /* CW131: IF GAIN     | LNA GAIN             |MIXER GAIN */
/*MT6166*/          setting    = (bit_no&0xF)<<10 | agcptr->setting | (0x1<<5);
/*MT6166*/          real_gain -= MIXER_GAIN;
/*MT6166*/       }
/*MT6166*/ #endif
/*MT6166*/ #if IS_HEADROOM_DETECTION_SUPPORT
/*MT6166*/       else if( ( l1d_rf.blk_flag & HRD_FOUND ) && (request_gain >= thres_HRD ) )
/*MT6166*/       {
/*MT6166*/          gain_table = ACI_GAIN_TABLE_FLAG;
/*MT6166*/                     /* CW131: IF GAIN       | LNA GAIN        |MIXER GAIN */
/*MT6166*/          setting    = ( (bit_no-2)&0xF)<<10 | agcptr->setting | (0x0<<5);
/*MT6166*/          real_gain -= IF_GAIN;
/*MT6166*/       }
/*MT6166*/ #endif
/*MT6166*/       else
/*MT6166*/       {
/*MT6166*/          gain_table = NORMAL_GAIN_TABLE_FLAG;
/*MT6166*/          setting    = (bit_no&0xF)<<10 | agcptr->setting;
/*MT6166*/       }
/*MT6166*/    }
/*MT6166*/
/*MT6166*/    *gain_setting = ((gain_table&0xFF)<<28) | setting;
/*MT6166*/    return( real_gain );
/*MT6166*/ }
/*MT6166*/
   #if IS_W_CANCELLATION_SUPPORT
/*MT6166*/ unsigned short   L1D_RF_FindGainStep( unsigned long gain_setting, FrequencyBand rf_band  )
/*MT6166*/ {
/*MT6166*/    int lna_gain_setting;
/*MT6166*/    int if_gain_setting;
/*MT6166*/    int band_mode, gain_step, gain_table;
/*MT6166*/    band_mode    = (rf_band < FrequencyBand1800) ? 0 /* LowBand */ : 1 /* HighBand */;
/*MT6166*/
/*MT6166*/    gain_table       = (unsigned int)(gain_setting&0xFF0000000L)>>28;
/*MT6166*/    lna_gain_setting = (gain_setting>>7 ) & 0x7;
/*MT6166*/    if_gain_setting  = (gain_setting>>10) & 0xF; /* bit_no */
/*MT6166*/
/*MT6166*/    if( ( gain_table == IBB_GAIN_TABLE_FLAG ) || ( gain_table == OBB_GAIN_TABLE_FLAG ) )
/*MT6166*/    {
/*MT6166*/       gain_step = 0;
/*MT6166*/    }
/*MT6166*/    else
/*MT6166*/    {
/*MT6166*/       if( lna_gain_setting == 0x3 )
/*MT6166*/       {
/*MT6166*/          if( if_gain_setting== 0x3)
/*MT6166*/             gain_step = 5;
/*MT6166*/          else if( if_gain_setting== 0x6)
/*MT6166*/             gain_step = 6;
/*MT6166*/          else
/*MT6166*/             gain_step = ROUNDINT(if_gain_setting/2.0);
/*MT6166*/       }
/*MT6166*/       else
/*MT6166*/       {
/*MT6166*/          gain_step = 0;
/*MT6166*/       }
/*MT6166*/    }
/*MT6166*/
/*MT6166*/    /* LB step: 0,2,4,6,8 */
/*MT6166*/    /* HB step: 1,3,5,7,9 */
/*MT6166*/    gain_step = gain_step * 2 + band_mode;
/*MT6166*/
/*MT6166*/    return gain_step;
/*MT6166*/ }
/*MT6166*/
   #endif
#endif

#if IS_RF_MT6165
/*MT6165*/
/*MT6165*/ #define  MAX_GAIN_STEP           7
/*MT6165*/ #define  PVOFSL                  34
/*MT6165*/ #define  PVOFSH                  34
/*MT6165*/ #define  NORMAL_GAIN_TABLE_FLAG  0
/*MT6165*/ #define  OBB_GAIN_TABLE_FLAG     1
/*MT6165*/ #define  IBB_GAIN_TABLE_FLAG     2
/*MT6165*/ #define  ACI_GAIN_TABLE_FLAG     3
/*MT6165*/ #define  RF_GSM850_MAXGAIN      ( 176)
/*MT6165*/ #define  RF_GSM850_MINGAIN      (-168)
/*MT6165*/ #define  RF_GSM_MAXGAIN         ( 176)
/*MT6165*/ #define  RF_GSM_MINGAIN         (-168)
/*MT6165*/ #define  RF_DCS_MAXGAIN         ( 176)
/*MT6165*/ #define  RF_DCS_MINGAIN         (-168)
/*MT6165*/ #define  RF_PCS_MAXGAIN         ( 176)
/*MT6165*/ #define  RF_PCS_MINGAIN         (-168)
/*MT6165*/
/*MT6165*/ const  sL1DGAINRANGE GAIN_RANGE_TABLE[] =
/*MT6165*/ {  {                   0,                      0    }, /*#FrequencyBand400  */
/*MT6165*/    { (int)RF_GSM850_MAXGAIN, (int)RF_GSM850_MINGAIN }, /* FrequencyBand850  */
/*MT6165*/    { (int)RF_GSM_MAXGAIN,    (int)RF_GSM_MINGAIN    }, /* FrequencyBand900  */
/*MT6165*/    { (int)RF_DCS_MAXGAIN,    (int)RF_DCS_MINGAIN    }, /* FrequencyBand1800 */
/*MT6165*/    { (int)RF_PCS_MAXGAIN,    (int)RF_PCS_MINGAIN    }, /* FrequencyBand1900 */
/*MT6165*/ };
/*MT6165*/ /* { RFLNA gain step, RFIF gain step } */
/*MT6165*/ const  unsigned char  NORMAL_GAIN_TABLE[][2] =
/*MT6165*/ {  { 3, 5 }, /* gain_step = 0 */
/*MT6165*/    { 2, 4 }, /* gain_step = 1 */
/*MT6165*/    { 2, 2 }, /* gain_step = 2 */
/*MT6165*/    { 2, 0 }, /* gain_step = 3 */
/*MT6165*/    { 0, 4 }, /* gain_step = 4 */
/*MT6165*/    { 0, 2 }, /* gain_step = 5 */
/*MT6165*/    { 0, 0 }, /* gain_step = 6 */
/*MT6165*/ };
/*MT6165*/ const  unsigned char  RXLNA_GAIN[2][4] =
/*MT6165*/ {  /*  0    1    2    3    :RFLNA gain_step */
/*MT6165*/    { 0x4, 0x5, 0x6, 0x7 }, /* LowBand    */ /*3bits*/
/*MT6165*/    { 0x2, 0x5, 0x6, 0x7 }, /* HighBand   */ /*3bits*/
/*MT6165*/ };
/*MT6165*/
/*MT6165*/ const  unsigned char  RXIF_GAIN[2][6] =
/*MT6165*/ {  /*  0    1    2    3    4,   5    :RFIF gain_step */
/*MT6165*/    { 0x1, 0x2, 0x3, 0x4, 0x5, 0x6 }, /* LowBand    */ /*3bits*/
/*MT6165*/    { 0x1, 0x2, 0x3, 0x4, 0x5, 0x6 }, /* HighBand   */ /*3bits*/
/*MT6165*/ };
/*MT6165*/
/*MT6165*/ /* GAIN_TABLE: voltage gain (total gain) */
/*MT6165*/ const  signed short  GAIN_TABLE_NORMAL[2][MAX_GAIN_STEP] =
/*MT6165*/ {  /*  0    1   2   3   4   5   6  :gain_step    */
/*MT6165*/    { 176, 128, 80, 32, -72, -120, -168 }, /* LowBand  */
/*MT6165*/    { 176, 132, 84, 36, -72, -120, -168 }, /* HighBand */
/*MT6165*/ };
/*MT6165*/ const  signed short  GAIN_TABLE_OBB[2][MAX_GAIN_STEP] =
/*MT6165*/ {  /*  0    1   2   3   4   5   6  :gain_step    */
/*MT6165*/    { 144, 96, 48,  -0, -72, -120, -168  }, /* LowBand  */
/*MT6165*/    { 124, 72, 24, -24, -72, -120, -168 }, /* HighBand */
/*MT6165*/ };
/*MT6165*/ const  signed short  GAIN_TABLE_IBB[2][MAX_GAIN_STEP] =
/*MT6165*/ {  /*  0    1   2   3   4   5   6  :gain_step    */
/*MT6165*/    { 152, 88, 40,  -8, -72, -120, -168 }, /* LowBand  */
/*MT6165*/    { 156, 92, 44,  -4, -72, -120, -168 }, /* HighBand */
/*MT6165*/ };
/*MT6165*/ const  signed short  GAIN_TABLE_HEADROOM[2][MAX_GAIN_STEP] =
/*MT6165*/ {  /*  0   1   2   3   4   5   6  :gain_step    */
/*MT6165*/    { 128, 80, 32, 32, -72, -120, -168 }, /* LowBand  */
/*MT6165*/    { 128, 84, 36, 36, -72, -120, -168 }, /* HighBand */
/*MT6165*/ };
/*MT6165*/ const  unsigned short  RXIF_BP_EN_NORMAL[2][MAX_GAIN_STEP] =
/*MT6165*/ {  /* 0  1  2  3  4  5  6    :gain_step    */
/*MT6165*/    {  0, 0, 1, 1, 1, 1, 1 }, /* LowBand  */
/*MT6165*/    {  0, 0, 1, 1, 1, 1, 1 }, /* HighBand */
/*MT6165*/ };
/*MT6165*/ const  signed short  RXIF_BP_EN_HEADROOM[2][MAX_GAIN_STEP] =
/*MT6165*/ {  /* 0  1  2  3  4  5  6    :gain_step    */
/*MT6165*/    {  1, 1, 1, 1, 1, 1, 1 }, /* LowBand  */
/*MT6165*/    {  1, 1, 1, 1, 1, 1, 1 }, /* HighBand */
/*MT6165*/ };
/*MT6165*/
/*MT6165*/
/*MT6165*/ /*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
/*MT6165*/
/*MT6165*/ int   L1D_RF_GetGainSetting( int rf_band, int arfcn, int request_gain, long *gain_setting )
/*MT6165*/ {  int   max_gain, min_gain, real_gain, band_mode, gain_table;
/*MT6165*/    const int*    d32ptr;
/*MT6165*/ #if IS_MULTI_LNA_MODE_CALIBRATION_SUPPORT
/*MT6165*/    sLNAGAINOFFSET*     lnaptr;
/*MT6165*/ #endif
/*MT6165*/    sAGCGAINOFFSET*     ofsptr;
/*MT6165*/    long  setting;
/*MT6165*/    int   rx_gain_step, rx_lna_setting, rx_if_setting, lna_path_loss;
/*MT6165*/    int   thres_OBB, thres_IBB, thres_HRD;
/*MT6165*/
/*MT6165*/    band_mode      = (rf_band < FrequencyBand1800) ? 0 /* LowBand */ : 1 /* HighBand */;
/*MT6165*/
/*MT6165*/    thres_OBB      = band_mode ?            32 :              36;   //( 38-PVOFSL )*PWRRES : ( 38.5-PVOFSH )*PWRRES
/*MT6165*/    thres_IBB      = band_mode ?            32 :              36;   //( 38-PVOFSL )*PWRRES : ( 38.5-PVOFSH )*PWRRES
/*MT6165*/    thres_HRD      = band_mode ?            80 :              84;   //( 44-PVOFSL )*PWRRES : ( 44.5-PVOFSH )*PWRRES
/*MT6165*/
/*MT6165*/    /* evaluate the range of available gain */
/*MT6165*/    d32ptr   = (int*)&(GAIN_RANGE_TABLE[rf_band]);
/*MT6165*/    max_gain = *d32ptr++;
/*MT6165*/    min_gain = *d32ptr;
/*MT6165*/
/*MT6165*/    /* clipping the request gain to the avialable gain */
/*MT6165*/    if( request_gain>=max_gain )
/*MT6165*/    {  request_gain = max_gain;
/*MT6165*/    }
/*MT6165*/    else if( request_gain<=min_gain )
/*MT6165*/    {  request_gain = min_gain;
/*MT6165*/    }
/*MT6165*/
/*MT6165*/    for ( rx_gain_step = 0; rx_gain_step < MAX_GAIN_STEP; rx_gain_step++ )
/*MT6165*/    {
/*MT6165*/       if( request_gain >= GAIN_TABLE_NORMAL[band_mode][rx_gain_step] )
/*MT6165*/       {  break;  }
/*MT6165*/    }
/*MT6165*/    if( rx_gain_step >= MAX_GAIN_STEP )
/*MT6165*/    {  rx_gain_step = (MAX_GAIN_STEP-1);
/*MT6165*/    }
/*MT6165*/
/*MT6165*/    rx_lna_setting = RXLNA_GAIN[band_mode][(NORMAL_GAIN_TABLE[rx_gain_step][0])];
/*MT6165*/    rx_if_setting  = RXIF_GAIN[band_mode][(NORMAL_GAIN_TABLE[rx_gain_step][1])];
/*MT6165*/
/*MT6165*/ #if IS_MULTI_LNA_MODE_CALIBRATION_SUPPORT
/*MT6165*/       /* choose the LNA path loss */
/*MT6165*/       lnaptr = LNA_PATHLOSS_TABLE[rf_band];
/*MT6165*/ #endif
/*MT6165*/       /* get the arfcn section */
/*MT6165*/       ofsptr = AGC_PATHLOSS_TABLE[rf_band];
/*MT6165*/       while( ofsptr->max_arfcn>=0 )
/*MT6165*/       {  if( arfcn <= ofsptr->max_arfcn )
/*MT6165*/          {  break;  }
/*MT6165*/          ofsptr++;
/*MT6165*/ #if IS_MULTI_LNA_MODE_CALIBRATION_SUPPORT
/*MT6165*/          lnaptr++;
/*MT6165*/ #endif
/*MT6165*/       }
/*MT6165*/
/*MT6165*/       /* Evaluate the real gain setting. */
/*MT6165*/    {
/*MT6165*/ #if IS_MULTI_LNA_MODE_CALIBRATION_SUPPORT
/*MT6165*/       if( rx_lna_setting==0x7 )      /* LNA_High */
/*MT6165*/       {
/*MT6165*/    #if IS_OUTBAND_BLOCKER_DETECTION_SUPPORT
/*MT6165*/          if( ( (l1d_rf.blk_flag & LB_OBB_FOUND) && (band_mode == 0) && request_gain>= thres_OBB ) ||
/*MT6165*/              ( (l1d_rf.blk_flag & HB_OBB_FOUND) && (band_mode == 1) && request_gain>= thres_OBB )  )
/*MT6165*/          {   lna_path_loss = (l1d_rf2.is_fhc) ? (0) : ((int)(lnaptr->gain_offset_low-ofsptr->gain_offset));   }
/*MT6165*/          else
/*MT6165*/    #endif
/*MT6165*/          {   lna_path_loss = 0;   }
/*MT6165*/       }
/*MT6165*/       else if( rx_lna_setting==0x6 ) /* LNA_Middle */
/*MT6165*/       {  lna_path_loss = (l1d_rf2.is_fhc) ? (0) : ((int)(lnaptr->gain_offset_middle-ofsptr->gain_offset));  }
/*MT6165*/       else              /* LNA_Low */
/*MT6165*/       {  lna_path_loss = (l1d_rf2.is_fhc) ? (0) : ((int)(lnaptr->gain_offset_low-ofsptr->gain_offset));     }
/*MT6165*/ #else
/*MT6165*/       lna_path_loss = 0;
/*MT6165*/ #endif
/*MT6165*/
/*MT6165*/       real_gain = -lna_path_loss;
/*MT6165*/       if( 0 )
/*MT6165*/       { /* do nothing */ }
/*MT6165*/ #if IS_OUTBAND_BLOCKER_DETECTION_SUPPORT
/*MT6165*/       else if( ( (l1d_rf.blk_flag & LB_OBB_FOUND) && (band_mode == 0) && request_gain>= thres_OBB ) ||
/*MT6165*/                ( (l1d_rf.blk_flag & HB_OBB_FOUND) && (band_mode == 1) && request_gain>= thres_OBB )  )
/*MT6165*/       {  /* CW66: LNA Gain | IF GAIN | RXIF_BP_EN */
/*MT6165*/          setting = ((rx_lna_setting-1)<<17) | (rx_if_setting<<13) | (RXIF_BP_EN_NORMAL[band_mode][rx_gain_step]<<10);  // OBB: decrease RX_LNA_Gain by 1 step
/*MT6165*/          gain_table = OBB_GAIN_TABLE_FLAG;
/*MT6165*/          real_gain += GAIN_TABLE_OBB[band_mode][rx_gain_step];
/*MT6165*/       }
/*MT6165*/ #endif
/*MT6165*/ #if IS_INBAND_BLOCKER_DETECTION_SUPPORT
/*MT6165*/       else if( (l1d_rf.blk_flag & IBB_FOUND) && (request_gain>= thres_IBB ) )
/*MT6165*/       {  /* CW66: LNA Gain | IF GAIN | RXIF_BP_EN */
/*MT6165*/          setting    = ((rx_lna_setting-1)<<17) | (rx_if_setting<<13) | (RXIF_BP_EN_NORMAL[band_mode][rx_gain_step]<<10);  // IBB: decrease RX_LNA_Gain by 1 step
/*MT6165*/          gain_table = IBB_GAIN_TABLE_FLAG;
/*MT6165*/          real_gain += GAIN_TABLE_IBB[band_mode][rx_gain_step];
/*MT6165*/       }
/*MT6165*/ #endif
/*MT6165*/ #if IS_HEADROOM_DETECTION_SUPPORT
/*MT6165*/       else if( ( l1d_rf.blk_flag & HRD_FOUND ) && (request_gain >= thres_HRD ) )
/*MT6165*/       {  /* CW66: LNA Gain | IF GAIN | RXIF_BP_EN */
/*MT6165*/          setting    = (rx_lna_setting<<17) | ((rx_if_setting-2)<<13) | (RXIF_BP_EN_HEADROOM[band_mode][rx_gain_step]<<10);  // HRD: decrease RX_IF_Gain by 2 step
/*MT6165*/          gain_table = ACI_GAIN_TABLE_FLAG;
/*MT6165*/          real_gain += GAIN_TABLE_HEADROOM[band_mode][rx_gain_step];
/*MT6165*/       }
/*MT6165*/ #endif
/*MT6165*/       else
/*MT6165*/       {  /* CW66: LNA Gain | IF GAIN | RXIF_BP_EN */
/*MT6165*/          setting    = (rx_lna_setting<<17) | (rx_if_setting<<13) | (RXIF_BP_EN_NORMAL[band_mode][rx_gain_step]<<10);
/*MT6165*/          gain_table = NORMAL_GAIN_TABLE_FLAG;
/*MT6165*/          real_gain += GAIN_TABLE_NORMAL[band_mode][rx_gain_step];
/*MT6165*/       }
/*MT6165*/    }
/*MT6165*/
/*MT6165*/    (void) thres_OBB;
/*MT6165*/
/*MT6165*/    *gain_setting = ((gain_table&0xFF)<<28) | BSI_CW(0x42, setting);  //CW66: RX Gain
/*MT6165*/    return( real_gain );
/*MT6165*/ }
/*MT6165*/
   #if IS_W_CANCELLATION_SUPPORT
/*MT6165*/ unsigned short   L1D_RF_FindGainStep( unsigned long gain_setting, FrequencyBand rf_band )
/*MT6165*/ {
/*MT6165*/    int band_mode, gain_step, gain_table, rx_lna_setting, rx_if_setting;
/*MT6165*/    
/*MT6165*/    gain_table     = (unsigned int)(gain_setting&0xFF0000000L)>>28;
/*MT6165*/    rx_lna_setting = (gain_setting&0xE0000)>>17;
/*MT6165*/    rx_if_setting  = (gain_setting&0x0E000)>>13;
/*MT6165*/    band_mode      = (rf_band < FrequencyBand1800) ? 0 /* LowBand */ : 1 /* HighBand */;
/*MT6165*/ 
/*MT6165*/    if( gain_table == NORMAL_GAIN_TABLE_FLAG )
/*MT6165*/    {  
/*MT6165*/       /* Normal condition: gain_step: 0,1,2,3,4 */
/*MT6165*/       for(gain_step = 0; gain_step <= 3; gain_step++ )
/*MT6165*/       {  if( ( rx_lna_setting == RXLNA_GAIN[band_mode][ NORMAL_GAIN_TABLE[gain_step][0] ] ) &&
/*MT6165*/              ( rx_if_setting  == RXIF_GAIN [band_mode][ NORMAL_GAIN_TABLE[gain_step][1] ] ) )
/*MT6165*/          {  break;  }
/*MT6165*/       }
/*MT6165*/       
/*MT6165*/       if( gain_step > 3 )  gain_step = 4;
/*MT6165*/    }
/*MT6165*/    #if IS_HEADROOM_DETECTION_SUPPORT
/*MT6165*/    else if( gain_table == ACI_GAIN_TABLE_FLAG )
/*MT6165*/    {  
/*MT6165*/       /* Headroom condition: gain_step: 2,3,4,5 */
/*MT6165*/       if( ( rx_lna_setting == RXLNA_GAIN[band_mode][ NORMAL_GAIN_TABLE[0][0] ] ) &&
/*MT6165*/           ( rx_if_setting  == RXIF_GAIN [band_mode][ NORMAL_GAIN_TABLE[0][1] ]-2 ) )
/*MT6165*/       {  gain_step=5;  }
/*MT6165*/       else
/*MT6165*/       {
/*MT6165*/          for(gain_step = 2; gain_step <= 3; gain_step++ )
/*MT6165*/          {  if( ( rx_lna_setting == RXLNA_GAIN[band_mode][ NORMAL_GAIN_TABLE[gain_step][0] ] ) &&
/*MT6165*/                 ( rx_if_setting  == RXIF_GAIN [band_mode][ NORMAL_GAIN_TABLE[gain_step][1] ] ) )
/*MT6165*/             {  break;  }
/*MT6165*/          }
/*MT6165*/          if( gain_step > 3 )  gain_step = 4;           
/*MT6165*/       }
/*MT6165*/    }
/*MT6165*/    #endif
/*MT6165*/    else /* Others: gain_step: 4 */
/*MT6165*/    {  gain_step = 4;  }
/*MT6165*/    
/*MT6165*/    /* LB step: 0,2,4,6,8,10 */
/*MT6165*/    /* HB step: 1,3,5,7,9,11 */
/*MT6165*/    gain_step = gain_step * 2 + band_mode;
/*MT6165*/    
/*MT6165*/    return gain_step;
/*MT6165*/ }
/*MT6165*/
   #endif
#endif

#if IS_RF_MT6176
/*MT6176*/
/*MT6176*/ #define  GAIN_STEP              3
/*MT6176*/ #define  PVOFSL                 34
/*MT6176*/ #define  PVOFSH                 34
/*MT6176*/ #define  LPF2_DROP_GAIN         ROUNDINT(3*(PWRRES))
/*MT6176*/ #define  TIA_DROP_GAIN          ROUNDINT(6*(PWRRES))
/*MT6176*/ #define  LNA_DROP_GAIN          ROUNDINT(6*(PWRRES))
/*MT6176*/ #define  HRD_LB_THRESHOLD       ROUNDINT((41.6-PVOFSL)*(PWRRES))
/*MT6176*/ #define  HRD_HB_THRESHOLD       ROUNDINT((41.6-PVOFSH)*(PWRRES))
/*MT6176*/ #define  IBBD_LB_THRESHOLD      ROUNDINT((50.6-PVOFSL)*(PWRRES))
/*MT6176*/ #define  IBBD_HB_THRESHOLD      ROUNDINT((50.6-PVOFSH)*(PWRRES))
/*MT6176*/ #define  RF_GSM850_MAXGAIN      (( 53.6-PVOFSL )*(PWRRES))
/*MT6176*/ #define  RF_GSM850_MINGAIN      ((  2.6-PVOFSL )*(PWRRES))
/*MT6176*/ #define  RF_GSM_MAXGAIN         (( 53.6-PVOFSL )*(PWRRES))
/*MT6176*/ #define  RF_GSM_MINGAIN         ((  2.6-PVOFSL )*(PWRRES))
/*MT6176*/ #define  RF_DCS_MAXGAIN         (( 53.6-PVOFSH )*(PWRRES))
/*MT6176*/ #define  RF_DCS_MINGAIN         ((  2.6-PVOFSH )*(PWRRES))
/*MT6176*/ #define  RF_PCS_MAXGAIN         (( 53.6-PVOFSH )*(PWRRES))
/*MT6176*/ #define  RF_PCS_MINGAIN         ((  2.6-PVOFSH )*(PWRRES))
/*MT6176*/
/*MT6176*/ /* GSM850....................................................................*/
/*MT6176*/
/*MT6176*/ const  sL1DAGCDATA  AGC_TABLE_GSM850[5] =
/*MT6176*/ {  {  GBOUND(( 44.6-PVOFSL ),( 41.6-PVOFSL ) ), GC_A( 4,(  44.6-PVOFSL ) ), BSI_CW(0x14E, 0x0000E) },  // Orion+ has PRX1 & DRX1 (CW334 & CW336), use CW334 as defualt setting
/*MT6176*/    {  GBOUND(( 41.6-PVOFSL ),( 38.6-PVOFSL ) ), GC_A( 5,(  41.6-PVOFSL ) ), BSI_CW(0x14E, 0x0001E) },
/*MT6176*/    {  GBOUND(( 26.6-PVOFSL ),( 23.6-PVOFSL ) ), GC_A( 2,(  26.6-PVOFSL ) ), BSI_CW(0x14E, 0x0001D) },
/*MT6176*/    {  GBOUND(( 14.6-PVOFSL ),( 11.6-PVOFSL ) ), GC_A( 4,(  14.6-PVOFSL ) ), BSI_CW(0x14E, 0x00009) },
/*MT6176*/    {  GBOUND((  2.6-PVOFSL ),(  2.6-PVOFSL ) ), GC_A( 2,(   2.6-PVOFSL ) ), BSI_CW(0x14E, 0x00019) },
/*MT6176*/ };
/*MT6176*/
/*MT6176*/ /* GSM900....................................................................*/
/*MT6176*/
/*MT6176*/ const  sL1DAGCDATA  AGC_TABLE_GSM900[5] =
/*MT6176*/ {  {  GBOUND(( 44.6-PVOFSL ),( 41.6-PVOFSL ) ), GC_A( 4,(  44.6-PVOFSL ) ), BSI_CW(0x14E, 0x0000E) },  // Orion+ has PRX1 & DRX1 (CW334 & CW336), use CW334 as defualt setting
/*MT6176*/    {  GBOUND(( 41.6-PVOFSL ),( 38.6-PVOFSL ) ), GC_A( 5,(  41.6-PVOFSL ) ), BSI_CW(0x14E, 0x0001E) },
/*MT6176*/    {  GBOUND(( 26.6-PVOFSL ),( 23.6-PVOFSL ) ), GC_A( 2,(  26.6-PVOFSL ) ), BSI_CW(0x14E, 0x0001D) },
/*MT6176*/    {  GBOUND(( 14.6-PVOFSL ),( 11.6-PVOFSL ) ), GC_A( 4,(  14.6-PVOFSL ) ), BSI_CW(0x14E, 0x00009) },
/*MT6176*/    {  GBOUND((  2.6-PVOFSL ),(  2.6-PVOFSL ) ), GC_A( 2,(   2.6-PVOFSL ) ), BSI_CW(0x14E, 0x00019) },
/*MT6176*/ };
/*MT6176*/
/*MT6176*/ /* DCS1800...................................................................*/
/*MT6176*/
/*MT6176*/ const  sL1DAGCDATA  AGC_TABLE_DCS1800[5] =
/*MT6176*/ {  {  GBOUND(( 44.6-PVOFSH ),( 41.6-PVOFSH ) ), GC_A( 4,(  44.6-PVOFSH ) ), BSI_CW(0x14E, 0x0000E) },  // Orion+ has PRX1 & DRX1 (CW334 & CW336), use CW334 as defualt setting
/*MT6176*/    {  GBOUND(( 41.6-PVOFSH ),( 38.6-PVOFSH ) ), GC_A( 5,(  41.6-PVOFSH ) ), BSI_CW(0x14E, 0x0001E) },
/*MT6176*/    {  GBOUND(( 26.6-PVOFSH ),( 23.6-PVOFSH ) ), GC_A( 2,(  26.6-PVOFSH ) ), BSI_CW(0x14E, 0x0001D) },
/*MT6176*/    {  GBOUND(( 14.6-PVOFSH ),( 11.6-PVOFSH ) ), GC_A( 4,(  14.6-PVOFSH ) ), BSI_CW(0x14E, 0x00009) },
/*MT6176*/    {  GBOUND((  2.6-PVOFSH ),(  2.6-PVOFSH ) ), GC_A( 2,(   2.6-PVOFSH ) ), BSI_CW(0x14E, 0x00019) },
/*MT6176*/ };
/*MT6176*/
/*MT6176*/ /* PCS1900...................................................................*/
/*MT6176*/
/*MT6176*/ const  sL1DAGCDATA  AGC_TABLE_PCS1900[5] =
/*MT6176*/ {  {  GBOUND(( 44.6-PVOFSH ),( 41.6-PVOFSH ) ), GC_A( 4,(  44.6-PVOFSH ) ), BSI_CW(0x14E, 0x0000E) },  // Orion+ has PRX1 & DRX1 (CW334 & CW336), use CW334 as defualt setting
/*MT6176*/    {  GBOUND(( 41.6-PVOFSH ),( 38.6-PVOFSH ) ), GC_A( 5,(  41.6-PVOFSH ) ), BSI_CW(0x14E, 0x0001E) },
/*MT6176*/    {  GBOUND(( 26.6-PVOFSH ),( 23.6-PVOFSH ) ), GC_A( 2,(  26.6-PVOFSH ) ), BSI_CW(0x14E, 0x0001D) },
/*MT6176*/    {  GBOUND(( 14.6-PVOFSH ),( 11.6-PVOFSH ) ), GC_A( 4,(  14.6-PVOFSH ) ), BSI_CW(0x14E, 0x00009) },
/*MT6176*/    {  GBOUND((  2.6-PVOFSH ),(  2.6-PVOFSH ) ), GC_A( 2,(   2.6-PVOFSH ) ), BSI_CW(0x14E, 0x00019) },
/*MT6176*/ };
/*MT6176*/
/*MT6176*/ /*...........................................................................*/
/*MT6176*/
/*MT6176*/ const  sL1DGAINRANGE GAIN_RANGE_TABLE[] =
/*MT6176*/ {  {                   0,                      0    }, /*#FrequencyBand400  */
/*MT6176*/    { (int)RF_GSM850_MAXGAIN, (int)RF_GSM850_MINGAIN }, /* FrequencyBand850  */
/*MT6176*/    { (int)RF_GSM_MAXGAIN,    (int)RF_GSM_MINGAIN    }, /* FrequencyBand900  */
/*MT6176*/    { (int)RF_DCS_MAXGAIN,    (int)RF_DCS_MINGAIN    }, /* FrequencyBand1800 */
/*MT6176*/    { (int)RF_PCS_MAXGAIN,    (int)RF_PCS_MINGAIN    }, /* FrequencyBand1900 */
/*MT6176*/ };
/*MT6176*/
/*MT6176*/ const  sL1DAGCDATA *const  AGC_TABLE[] =
/*MT6176*/ {  0,                                              /*#FrequencyBand400  */
/*MT6176*/    AGC_TABLE_GSM850,                               /* FrequencyBand850  */
/*MT6176*/    AGC_TABLE_GSM900,                               /* FrequencyBand900  */
/*MT6176*/    AGC_TABLE_DCS1800,                              /* FrequencyBand1800 */
/*MT6176*/    AGC_TABLE_PCS1900,                              /* FrequencyBand1900 */
/*MT6176*/ };
/*MT6176*/
   #if IS_2G_EXTERNAL_LNA_SUPPORT
/*MT6176*/ #define  HRD_LB_THRESHOLD_ELNA        ROUNDINT((29.6-PVOFSL)*(PWRRES))
/*MT6176*/ #define  HRD_HB_THRESHOLD_ELNA        ROUNDINT((29.6-PVOFSH)*(PWRRES))
/*MT6176*/ #define  IBBD_LB_THRESHOLD_ELNA       ROUNDINT((32.6-PVOFSL)*(PWRRES))
/*MT6176*/ #define  IBBD_HB_THRESHOLD_ELNA       ROUNDINT((32.6-PVOFSH)*(PWRRES))
/*MT6176*/ #define  RF_GSM850_MAXGAIN_ELNA       (( 47.6-PVOFSL )*(PWRRES))
/*MT6176*/ #define  RF_GSM850_MINGAIN_ELNA       (( -3.4-PVOFSL )*(PWRRES))
/*MT6176*/ #define  RF_GSM_MAXGAIN_ELNA          (( 47.6-PVOFSL )*(PWRRES))
/*MT6176*/ #define  RF_GSM_MINGAIN_ELNA          (( -3.4-PVOFSL )*(PWRRES))
/*MT6176*/ #define  RF_DCS_MAXGAIN_ELNA          (( 47.6-PVOFSH )*(PWRRES))
/*MT6176*/ #define  RF_DCS_MINGAIN_ELNA          (( -3.4-PVOFSH )*(PWRRES))
/*MT6176*/ #define  RF_PCS_MAXGAIN_ELNA          (( 47.6-PVOFSH )*(PWRRES))
/*MT6176*/ #define  RF_PCS_MINGAIN_ELNA          (( -3.4-PVOFSH )*(PWRRES))
/*MT6176*/
/*MT6176*/ /*Real RX gain and bitno for fixed RX gain setting, index = 0 or 1 of AGC_TABLE */
/*MT6176*/ #define  RF_GSM850_Sec0_GAIN_ELNA       ROUNDINT(( 47.6-PVOFSL )*(PWRRES))
/*MT6176*/ #define  RF_GSM850_Sec1_GAIN_ELNA       ROUNDINT(( 38.6-PVOFSL )*(PWRRES))
/*MT6176*/ #define  RF_GSM_Sec0_GAIN_ELNA          ROUNDINT(( 47.6-PVOFSL )*(PWRRES))
/*MT6176*/ #define  RF_GSM_Sec1_GAIN_ELNA          ROUNDINT(( 38.6-PVOFSL )*(PWRRES))
/*MT6176*/ #define  RF_DCS_Sec0_GAIN_ELNA          ROUNDINT(( 47.6-PVOFSH )*(PWRRES))
/*MT6176*/ #define  RF_DCS_Sec1_GAIN_ELNA          ROUNDINT(( 38.6-PVOFSH )*(PWRRES))
/*MT6176*/ #define  RF_PCS_Sec0_GAIN_ELNA          ROUNDINT(( 47.6-PVOFSH )*(PWRRES))
/*MT6176*/ #define  RF_PCS_Sec1_GAIN_ELNA          ROUNDINT(( 38.6-PVOFSH )*(PWRRES))
/*MT6176*/ #define  RF_GSM850_Sec0_BitNo_ELNA      7
/*MT6176*/ #define  RF_GSM850_Sec1_BitNo_ELNA      4
/*MT6176*/ #define  RF_GSM_Sec0_BitNo_ELNA         7
/*MT6176*/ #define  RF_GSM_Sec1_BitNo_ELNA         4
/*MT6176*/ #define  RF_DCS_Sec0_BitNo_ELNA         7
/*MT6176*/ #define  RF_DCS_Sec1_BitNo_ELNA         4
/*MT6176*/ #define  RF_PCS_Sec0_BitNo_ELNA         7
/*MT6176*/ #define  RF_PCS_Sec1_BitNo_ELNA         4
/*MT6176*/
/*MT6176*/ /* GSM850....................................................................*/
/*MT6176*/ /*Need to fix RX gain setting for index = 0 and 1, w/o extrapolation */
/*MT6176*/ const  sL1DAGCDATA  AGC_TABLE_GSM850_ELNA [7] =
/*MT6176*/ {  {  GBOUND(( 47.6-PVOFSL ),( 38.6-PVOFSL ) ), GC_A( 7,(  47.6-PVOFSL ) ), BSI_CW(0x14E, 0x0000D) },  // Orion+ has PRX1 & DRX1 (CW334 & CW336), use CW334 as defualt setting
/*MT6176*/    {  GBOUND(( 38.6-PVOFSL ),( 35.6-PVOFSL ) ), GC_A( 4,(  38.6-PVOFSL ) ), BSI_CW(0x14E, 0x0000D) },
/*MT6176*/    {  GBOUND(( 29.6-PVOFSL ),( 26.6-PVOFSL ) ), GC_A( 3,(  29.6-PVOFSL ) ), BSI_CW(0x14E, 0x0001D) },
/*MT6176*/    {  GBOUND(( 23.6-PVOFSL ),( 20.6-PVOFSL ) ), GC_A( 3,(  23.6-PVOFSL ) ), BSI_CW(0x14E, 0x0001C) },
/*MT6176*/    {  GBOUND(( 14.6-PVOFSL ),( 11.6-PVOFSL ) ), GC_A( 4,(  14.6-PVOFSL ) ), BSI_CW(0x14E, 0x00009) },
/*MT6176*/    {  GBOUND((  5.6-PVOFSL ),(  2.6-PVOFSL ) ), GC_A( 3,(   5.6-PVOFSL ) ), BSI_CW(0x14E, 0x00019) },
/*MT6176*/    {  GBOUND(( -3.4-PVOFSL ),( -3.4-PVOFSL ) ), GC_A( 2,(  -3.4-PVOFSL ) ), BSI_CW(0x14E, 0x00039) },
/*MT6176*/ };
/*MT6176*/
/*MT6176*/ /* GSM900....................................................................*/
/*MT6176*/ /*Need to fix RX gain setting for index = 0 and 1, w/o extrapolation */
/*MT6176*/ const  sL1DAGCDATA  AGC_TABLE_GSM900_ELNA [7] =
/*MT6176*/ {  {  GBOUND(( 47.6-PVOFSL ),( 38.6-PVOFSL ) ), GC_A( 7,(  47.6-PVOFSL ) ), BSI_CW(0x14E, 0x0000D) },  // Orion+ has PRX1 & DRX1 (CW334 & CW336), use CW334 as defualt setting
/*MT6176*/    {  GBOUND(( 38.6-PVOFSL ),( 35.6-PVOFSL ) ), GC_A( 4,(  38.6-PVOFSL ) ), BSI_CW(0x14E, 0x0000D) },
/*MT6176*/    {  GBOUND(( 29.6-PVOFSL ),( 26.6-PVOFSL ) ), GC_A( 3,(  29.6-PVOFSL ) ), BSI_CW(0x14E, 0x0001D) },
/*MT6176*/    {  GBOUND(( 23.6-PVOFSL ),( 20.6-PVOFSL ) ), GC_A( 3,(  23.6-PVOFSL ) ), BSI_CW(0x14E, 0x0001C) },
/*MT6176*/    {  GBOUND(( 14.6-PVOFSL ),( 11.6-PVOFSL ) ), GC_A( 4,(  14.6-PVOFSL ) ), BSI_CW(0x14E, 0x00009) },
/*MT6176*/    {  GBOUND((  5.6-PVOFSL ),(  2.6-PVOFSL ) ), GC_A( 3,(   5.6-PVOFSL ) ), BSI_CW(0x14E, 0x00019) },
/*MT6176*/    {  GBOUND(( -3.4-PVOFSL ),( -3.4-PVOFSL ) ), GC_A( 2,(  -3.4-PVOFSL ) ), BSI_CW(0x14E, 0x00039) },
/*MT6176*/ };
/*MT6176*/
/*MT6176*/ /* DCS1800...................................................................*/
/*MT6176*/ /*Need to fix RX gain setting for index = 0 and 1, w/o extrapolation */
/*MT6176*/ const  sL1DAGCDATA  AGC_TABLE_DCS1800_ELNA [7] =
/*MT6176*/ {  {  GBOUND(( 47.6-PVOFSH ),( 38.6-PVOFSH ) ), GC_A( 7,(  47.6-PVOFSH ) ), BSI_CW(0x14E, 0x0000D) },  // Orion+ has PRX1 & DRX1 (CW334 & CW336), use CW334 as defualt setting
/*MT6176*/    {  GBOUND(( 38.6-PVOFSH ),( 35.6-PVOFSH ) ), GC_A( 4,(  38.6-PVOFSH ) ), BSI_CW(0x14E, 0x0000D) },
/*MT6176*/    {  GBOUND(( 29.6-PVOFSH ),( 26.6-PVOFSH ) ), GC_A( 3,(  29.6-PVOFSH ) ), BSI_CW(0x14E, 0x0001D) },
/*MT6176*/    {  GBOUND(( 23.6-PVOFSH ),( 20.6-PVOFSH ) ), GC_A( 3,(  23.6-PVOFSH ) ), BSI_CW(0x14E, 0x0001C) },
/*MT6176*/    {  GBOUND(( 14.6-PVOFSH ),( 11.6-PVOFSH ) ), GC_A( 4,(  14.6-PVOFSH ) ), BSI_CW(0x14E, 0x00009) },
/*MT6176*/    {  GBOUND((  5.6-PVOFSH ),(  2.6-PVOFSH ) ), GC_A( 3,(   5.6-PVOFSH ) ), BSI_CW(0x14E, 0x00019) },
/*MT6176*/    {  GBOUND(( -3.4-PVOFSH ),( -3.4-PVOFSH ) ), GC_A( 2,(  -3.4-PVOFSH ) ), BSI_CW(0x14E, 0x00039) },
/*MT6176*/ };
/*MT6176*/
/*MT6176*/ /* PCS1900...................................................................*/
/*MT6176*/ /*Need to fix RX gain setting for index = 0 and 1, w/o extrapolation */
/*MT6176*/ const  sL1DAGCDATA  AGC_TABLE_PCS1900_ELNA [7] =
/*MT6176*/ {  {  GBOUND(( 47.6-PVOFSH ),( 38.6-PVOFSH ) ), GC_A( 7,(  47.6-PVOFSH ) ), BSI_CW(0x14E, 0x0000D) },  // Orion+ has PRX1 & DRX1 (CW334 & CW336), use CW334 as defualt setting
/*MT6176*/    {  GBOUND(( 38.6-PVOFSH ),( 35.6-PVOFSH ) ), GC_A( 4,(  38.6-PVOFSH ) ), BSI_CW(0x14E, 0x0000D) },
/*MT6176*/    {  GBOUND(( 29.6-PVOFSH ),( 26.6-PVOFSH ) ), GC_A( 3,(  29.6-PVOFSH ) ), BSI_CW(0x14E, 0x0001D) },
/*MT6176*/    {  GBOUND(( 23.6-PVOFSH ),( 20.6-PVOFSH ) ), GC_A( 3,(  23.6-PVOFSH ) ), BSI_CW(0x14E, 0x0001C) },
/*MT6176*/    {  GBOUND(( 14.6-PVOFSH ),( 11.6-PVOFSH ) ), GC_A( 4,(  14.6-PVOFSH ) ), BSI_CW(0x14E, 0x00009) },
/*MT6176*/    {  GBOUND((  5.6-PVOFSH ),(  2.6-PVOFSH ) ), GC_A( 3,(   5.6-PVOFSH ) ), BSI_CW(0x14E, 0x00019) },
/*MT6176*/    {  GBOUND(( -3.4-PVOFSH ),( -3.4-PVOFSH ) ), GC_A( 2,(  -3.4-PVOFSH ) ), BSI_CW(0x14E, 0x00039) },
/*MT6176*/ };
/*MT6176*/
/*MT6176*/ /*...........................................................................*/
/*MT6176*/
/*MT6176*/ const  sL1DGAINRANGE GAIN_RANGE_TABLE_ELNA [] =
/*MT6176*/ {  {                   0,                      0                }, /*#FrequencyBand400  */
/*MT6176*/    { (int)RF_GSM850_MAXGAIN_ELNA , (int)RF_GSM850_MINGAIN_ELNA  }, /* FrequencyBand850  */
/*MT6176*/    { (int)RF_GSM_MAXGAIN_ELNA ,    (int)RF_GSM_MINGAIN_ELNA     }, /* FrequencyBand900  */
/*MT6176*/    { (int)RF_DCS_MAXGAIN_ELNA ,    (int)RF_DCS_MINGAIN_ELNA     }, /* FrequencyBand1800 */
/*MT6176*/    { (int)RF_PCS_MAXGAIN_ELNA ,    (int)RF_PCS_MINGAIN_ELNA     }, /* FrequencyBand1900 */
/*MT6176*/ };
/*MT6176*/
/*MT6176*/ const  sL1DAGCDATA *const  AGC_TABLE_ELNA[] =
/*MT6176*/ {  0,                                              /*#FrequencyBand400  */
/*MT6176*/    AGC_TABLE_GSM850_ELNA,                               /* FrequencyBand850  */
/*MT6176*/    AGC_TABLE_GSM900_ELNA,                               /* FrequencyBand900  */
/*MT6176*/    AGC_TABLE_DCS1800_ELNA,                              /* FrequencyBand1800 */
/*MT6176*/    AGC_TABLE_PCS1900_ELNA,                              /* FrequencyBand1900 */
/*MT6176*/ };
/*MT6176*/
/*MT6176*/ /*Fix RX gain setting, w/o extrapolation for index = 0 of AGC_TABLE */
/*MT6176*/ const  sL1DSection GAIN_Sec0_ELNA [] =
/*MT6176*/ {  {                   0,                      0                     }, /*#FrequencyBand400  */
/*MT6176*/    { (int)RF_GSM850_Sec0_GAIN_ELNA , (int)RF_GSM850_Sec0_BitNo_ELNA  }, /* FrequencyBand850  */
/*MT6176*/    { (int)RF_GSM_Sec0_GAIN_ELNA ,    (int)RF_GSM_Sec0_BitNo_ELNA     }, /* FrequencyBand900  */
/*MT6176*/    { (int)RF_DCS_Sec0_GAIN_ELNA ,    (int)RF_DCS_Sec0_BitNo_ELNA     }, /* FrequencyBand1800 */
/*MT6176*/    { (int)RF_PCS_Sec0_GAIN_ELNA ,    (int)RF_PCS_Sec0_BitNo_ELNA     }, /* FrequencyBand1900 */
/*MT6176*/ };
/*MT6176*/ /*Fix RX gain setting, w/o extrapolation for index = 1 of AGC_TABLE */
/*MT6176*/ const  sL1DSection GAIN_Sec1_ELNA [] =
/*MT6176*/ {  {                   0,                      0                     }, /*#FrequencyBand400  */
/*MT6176*/    { (int)RF_GSM850_Sec1_GAIN_ELNA , (int)RF_GSM850_Sec1_BitNo_ELNA  }, /* FrequencyBand850  */
/*MT6176*/    { (int)RF_GSM_Sec1_GAIN_ELNA ,    (int)RF_GSM_Sec1_BitNo_ELNA     }, /* FrequencyBand900  */
/*MT6176*/    { (int)RF_DCS_Sec1_GAIN_ELNA ,    (int)RF_DCS_Sec1_BitNo_ELNA     }, /* FrequencyBand1800 */
/*MT6176*/    { (int)RF_PCS_Sec1_GAIN_ELNA ,    (int)RF_PCS_Sec1_BitNo_ELNA     }, /* FrequencyBand1900 */
/*MT6176*/ };
   #endif
/*MT6176*/ /*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
/*MT6176*/
/*MT6176*/ int   L1D_RF_GetGainSetting( int rf_band, int arfcn, int request_gain, long *gain_setting )
/*MT6176*/ {  int   max_gain, min_gain, real_gain, blkr_group;
/*MT6176*/    const int*    d32ptr;
/*MT6176*/    const sL1DAGCDATA*  agcptr;
/*MT6176*/    sLNAGAINOFFSET*     lnaptr;
/*MT6176*/    sAGCGAINOFFSET*     ofsptr;
/*MT6176*/    long  setting;
/*MT6176*/    int   bit_no, idx, lna_path_loss, ibbd_threshold, hrd_threshold;
/*MT6176*/    int   is_seiq = 1;  // MT6176 is defualt using SEIQ, remember also align is_seiq value at L1D_RF_FindGainStep()
/*MT6176*/    #if IS_2G_EXTERNAL_LNA_SUPPORT
/*MT6176*/    unsigned short   agcptr_idx = 0;   //index of AGC table for fixing RX gain setting 
/*MT6176*/    unsigned short   is_elna_usage    = L1D_RF_Check_If_ExternalLNA(rf_band);   // check if using eLNA
/*MT6176*/    #endif
/*MT6176*/
/*MT6176*/    #if IS_RX_POWER_OFFSET_SUPPORT
/*MT6176*/    sAGCLNAGAINOFFSET*  ofsptr_offset;
/*MT6176*/    kal_uint16 rx_power_offset_enable      = AGCLNA_PL_OFFSET_SETTING->rx_power_offset_setting.RPO_enable;
/*MT6176*/    kal_uint16 meta_rx_power_offset_enable = AGCLNA_PL_OFFSET_SETTING->rx_power_offset_setting.RPO_meta_enable; 
/*MT6176*/    int  lna_path_loss_offset = 0;
/*MT6176*/    #endif/*IS_RX_POWER_OFFSET_SUPPORT*/
/*MT6176*/
/*MT6176*/    #if IS_INBAND_BLOCKER_DETECTION_SUPPORT
/*MT6176*/       #if IS_2G_EXTERNAL_LNA_SUPPORT
/*MT6176*/    if( is_elna_usage )
/*MT6176*/    {  ibbd_threshold = (rf_band<FrequencyBand1800) ? IBBD_LB_THRESHOLD_ELNA : IBBD_HB_THRESHOLD_ELNA;  }
/*MT6176*/    else   // no eLNA
/*MT6176*/       #endif
/*MT6176*/    {  ibbd_threshold = (rf_band<FrequencyBand1800) ? IBBD_LB_THRESHOLD : IBBD_HB_THRESHOLD;  }
/*MT6176*/    #endif
/*MT6176*/
/*MT6176*/    #if IS_HEADROOM_DETECTION_SUPPORT
/*MT6176*/       #if IS_2G_EXTERNAL_LNA_SUPPORT
/*MT6176*/    if( is_elna_usage )
/*MT6176*/    {  hrd_threshold = (rf_band<FrequencyBand1800) ? HRD_LB_THRESHOLD_ELNA : HRD_HB_THRESHOLD_ELNA;  }
/*MT6176*/    else   // no eLNA
/*MT6176*/      #endif
/*MT6176*/    {  hrd_threshold = (rf_band<FrequencyBand1800) ? HRD_LB_THRESHOLD  : HRD_HB_THRESHOLD;  }
/*MT6176*/    #endif
/*MT6176*/
/*MT6176*/    /* evaluate the range of available gain */
/*MT6176*/    #if IS_2G_EXTERNAL_LNA_SUPPORT
/*MT6176*/    if( is_elna_usage )
/*MT6176*/    {  d32ptr   = (int*)&(GAIN_RANGE_TABLE_ELNA[rf_band]);  }
/*MT6176*/    else
/*MT6176*/    #endif
/*MT6176*/    {  d32ptr   = (int*)&(GAIN_RANGE_TABLE[rf_band]);  }
/*MT6176*/    max_gain = *d32ptr++;
/*MT6176*/    min_gain = *d32ptr;
/*MT6176*/
/*MT6176*/    /* D[12:10]: blkr_group used for IBB/HRD case if request_gain>=0, D[9:0]: request_gain for Normal case */
/*MT6176*/    blkr_group    = (request_gain>=0)?((request_gain>>10)&0x7):0;
/*MT6176*/    request_gain  = (request_gain>=0)?(request_gain&0x3FF):request_gain;
/*MT6176*/
/*MT6176*/    /* Normal Mode: From Voltage_Gain to Power_Gain (Voltage_Gain comes from m11303.c)*/
/*MT6176*/    /* Meta Mode:  Bring Power_Gain directly*/
/*MT6176*/    if((!L1D_CheckIfMetaMode()))
/*MT6176*/    {  request_gain -= ((rf_band<FrequencyBand1800) ? (PVOFSL*PWRRES) : (PVOFSH*PWRRES));  }
/*MT6176*/
/*MT6176*/    /* clipping the request gain to the avialable gain */
/*MT6176*/    if( request_gain>=max_gain )
/*MT6176*/    {  request_gain = max_gain;  
/*MT6176*/    }
/*MT6176*/    else if( request_gain<=min_gain )
/*MT6176*/    {  request_gain = min_gain;  
/*MT6176*/    }
/*MT6176*/
/*MT6176*/    /* choose the LNA path loss */
/*MT6176*/    lnaptr = LNA_PATHLOSS_TABLE[rf_band];
/*MT6176*/    /* get the arfcn section */
/*MT6176*/    ofsptr = AGC_PATHLOSS_TABLE[rf_band];
/*MT6176*/    while( ofsptr->max_arfcn>=0 )
/*MT6176*/    {  if( arfcn <= ofsptr->max_arfcn )
/*MT6176*/       {  break;  }
/*MT6176*/       ofsptr++;
/*MT6176*/       lnaptr++;
/*MT6176*/    }
/*MT6176*/
/*MT6176*/    /* evaluate the real gain setting */
/*MT6176*/    #if IS_2G_EXTERNAL_LNA_SUPPORT
/*MT6176*/    if( is_elna_usage )
/*MT6176*/    {  agcptr = AGC_TABLE_ELNA[rf_band];  }
/*MT6176*/    else
/*MT6176*/    #endif
/*MT6176*/    {  agcptr = AGC_TABLE[rf_band];  }
/*MT6176*/
/*MT6176*/    while( request_gain < agcptr->pos_gain )
/*MT6176*/    {  
/*MT6176*/       agcptr++;  
/*MT6176*/    #if IS_2G_EXTERNAL_LNA_SUPPORT
/*MT6176*/       agcptr_idx++;
/*MT6176*/    #endif
/*MT6176*/    }
/*MT6176*/
/*MT6176*/    {
/*MT6176*/    #if IS_2G_EXTERNAL_LNA_SUPPORT
/*MT6176*/       if( is_elna_usage && (L1D_CheckIfMetaMode()) )
/*MT6176*/       {/* Special handling under META mode. Normal mode will use the exact gain listed in RX gain table*/
/*MT6176*/          switch( agcptr_idx )
/*MT6176*/          {
/*MT6176*/             case 0: // Section0, fix RX gain setting w/o extrapolation
/*MT6176*/                bit_no    = GAIN_Sec0_ELNA[rf_band].bitno;
/*MT6176*/                real_gain = GAIN_Sec0_ELNA[rf_band].real_gain;
/*MT6176*/                break;
/*MT6176*/             case 1: // Section1, fix RX gain setting w/o extrapolation
/*MT6176*/                bit_no    = GAIN_Sec1_ELNA[rf_band].bitno;
/*MT6176*/                real_gain = GAIN_Sec1_ELNA[rf_band].real_gain;
/*MT6176*/                break;
/*MT6176*/             default: // Other sections
/*MT6176*/                bit_no    = BIT_NO( request_gain, agcptr->A, GC_B );
/*MT6176*/                real_gain = REAL_GAIN( bit_no, agcptr->A, GC_B );
/*MT6176*/                break;
/*MT6176*/          }
/*MT6176*/       } 
/*MT6176*/       else
/*MT6176*/    #endif
/*MT6176*/       {
/*MT6176*/          bit_no    = BIT_NO( request_gain, agcptr->A, GC_B );
/*MT6176*/          real_gain = REAL_GAIN( bit_no, agcptr->A, GC_B );
/*MT6176*/       }
/*MT6176*/
/*MT6176*/       if( 0 )
/*MT6176*/       { /* do nothing */ }
/*MT6176*/    #if IS_HEADROOM_DETECTION_SUPPORT || IS_INBAND_BLOCKER_DETECTION_SUPPORT
/*MT6176*/       else if( ((((l1d_rf.blk_flag)&(HRD_FOUND)) && (request_gain >= (hrd_threshold))) || (((l1d_rf.blk_flag)&(IBB_FOUND)) && (request_gain >= (ibbd_threshold)))) && (blkr_group > 0) )
/*MT6176*/       {
/*MT6176*/       #if IS_2G_EXTERNAL_LNA_SUPPORT 
/*MT6176*/           if(is_elna_usage)
/*MT6176*/           {
/*MT6176*/              switch( blkr_group )
/*MT6176*/              {
/*MT6176*/                 case 1:
/*MT6176*/                    setting   = (agcptr->setting&0x3FFFFFC0)|((0x6+is_seiq)<<6)|(0x7<<3)|0x4;  // reduce LNA/TIA, increase LPF2 Gain
/*MT6176*/                    real_gain-= (LNA_DROP_GAIN+TIA_DROP_GAIN+(bit_no-6)*LPF2_DROP_GAIN);
/*MT6176*/                    break;
/*MT6176*/                 default:
/*MT6176*/                    setting   = agcptr->setting | (((bit_no+is_seiq)&0xF)<<6);  
/*MT6176*/                    break;
/*MT6176*/              }
/*MT6176*/           }
/*MT6176*/           else
/*MT6176*/       #endif
/*MT6176*/           {
/*MT6176*/              switch( blkr_group )
/*MT6176*/              {
/*MT6176*/                 case 1:
/*MT6176*/                    setting   = (agcptr->setting&0x3FFFFFC0)|(((bit_no+is_seiq)&0xF)<<6)|(0x1<<3)|0x5;  // reduce LNA Gain
/*MT6176*/                    real_gain-= (LNA_DROP_GAIN);
/*MT6176*/                    break;
/*MT6176*/                 case 2:
/*MT6176*/                    setting   = (agcptr->setting&0x3FFFFFC0)|((0x6+is_seiq)<<6)|(0x3<<3)|0x5;  // reduce LNA/TIA/LPF2 Gain
/*MT6176*/                    real_gain-= (LNA_DROP_GAIN+TIA_DROP_GAIN+(bit_no-6)*LPF2_DROP_GAIN);
/*MT6176*/                    break;
/*MT6176*/                 case 3:
/*MT6176*/                    setting   = (agcptr->setting&0x3FFFFFC0)|((0x6+is_seiq)<<6)|(0x3<<3)|0x6;  // reduce TIA Gain, increase LPF2 Gain
/*MT6176*/                    real_gain-= (TIA_DROP_GAIN+(bit_no-6)*LPF2_DROP_GAIN);
/*MT6176*/                    break;
/*MT6176*/                 case 4:
/*MT6176*/                    setting   = (agcptr->setting&0x3FFFFFC0)|((((bit_no+is_seiq)-1)&0xF)<<6)|(0x7<<3)|0x5;  // reduce LNA/TIA/LPF2 Gain
/*MT6176*/                    real_gain-= (LNA_DROP_GAIN+TIA_DROP_GAIN+LPF2_DROP_GAIN);
/*MT6176*/                    break;
/*MT6176*/                 case 5:
/*MT6176*/                    setting   = (agcptr->setting&0x3FFFFFC0)|((((bit_no+is_seiq)-1)&0xF)<<6)|(0x3<<3)|0x5;  // reduce LNA/LPF2 Gain
/*MT6176*/                    real_gain-= (LNA_DROP_GAIN+LPF2_DROP_GAIN);
/*MT6176*/                    break;
/*MT6176*/                 default:
/*MT6176*/                    bit_no    = (bit_no==0)? 0x2 : bit_no;
/*MT6176*/                    setting   = agcptr->setting | (((bit_no+is_seiq)&0xF)<<6);  
/*MT6176*/                    break;
/*MT6176*/               } 
/*MT6176*/            }
/*MT6176*/       }
/*MT6176*/    #endif
/*MT6176*/       else
/*MT6176*/       {  
/*MT6176*/          setting = agcptr->setting | (((bit_no+is_seiq)&0xF)<<6);  
/*MT6176*/       }
/*MT6176*/
/*MT6176*/       real_gain+= (LPF2_DROP_GAIN)*is_seiq;  // SEIQ need to boot up 3dB gain 
/*MT6176*/
/*MT6176*/       /* if  freq.>1400MHz and LNA gain is maximum(3b'110), bit11 sets to 1(RX_LNA_FBRO_PATH1=1).*/
/*MT6176*/       if ( (rf_band>=FrequencyBand1800) && ((setting&0x07) == 0x06) )
/*MT6176*/       {  setting |= 0x800;  }  
/*MT6176*/
/*MT6176*/       idx = (int)(setting&0x7);
/*MT6176*/    #if IS_2G_EXTERNAL_LNA_SUPPORT
/*MT6176*/       if( is_elna_usage )
/*MT6176*/       {
/*MT6176*/          if( idx==5 )      /* LNA_High    : G5 */
/*MT6176*/          {  lna_path_loss = 0;  }
/*MT6176*/          else if( idx==4 ) /* LNA_Middle : G4 */
/*MT6176*/          {  lna_path_loss = (l1d_rf2.is_fhc) ? (0) : ((int)(lnaptr->gain_offset_middle-ofsptr->gain_offset));  }
/*MT6176*/          else              /* LNA_Low    : G1 */
/*MT6176*/          {  lna_path_loss = (l1d_rf2.is_fhc) ? (0) : ((int)(lnaptr->gain_offset_low-ofsptr->gain_offset));     }
/*MT6176*/       }
/*MT6176*/       else
/*MT6176*/    #endif
/*MT6176*/       {
/*MT6176*/          if( idx==6 )      /* LNA_High    : G6 */
/*MT6176*/          {  lna_path_loss = 0;  }
/*MT6176*/          else if( idx==5 ) /* LNA_Middle : G5*/
/*MT6176*/          {  lna_path_loss = (l1d_rf2.is_fhc) ? (0) : ((int)(lnaptr->gain_offset_middle-ofsptr->gain_offset));  }
/*MT6176*/          else              /* LNA_Low    : G1*/
/*MT6176*/          {  lna_path_loss = (l1d_rf2.is_fhc) ? (0) : ((int)(lnaptr->gain_offset_low-ofsptr->gain_offset));     }
/*MT6176*/       }
/*MT6176*/
/*MT6176*/
/*MT6176*/    #if IS_RX_POWER_OFFSET_SUPPORT
/*MT6176*/    /* get the arfcn section */
/*MT6176*/    ofsptr_offset = AGCLNA_PATHLOSS_OFFSET[rf_band];
/*MT6176*/    while( ofsptr_offset->max_arfcn>=0 )
/*MT6176*/    {  if( arfcn <= ofsptr_offset->max_arfcn )
/*MT6176*/       {  break;  }
/*MT6176*/       ofsptr_offset++;
/*MT6176*/    }
/*MT6176*/
/*MT6176*/
/*MT6176*/    if( rx_power_offset_enable )
/*MT6176*/    {
/*MT6176*/       if( ( L1D_CheckIfMetaMode() && ( meta_rx_power_offset_enable == 1 )) || // DUT In META mode and enable META mode compensation
/*MT6176*/           (L1D_CheckIfMetaMode() == 0) // DUT in normal mode, apply compensation
/*MT6176*/         )
/*MT6176*/       {
/*MT6176*/          /*idx = (int)(((agcptr->setting)>>5)&0x7);*/
/*MT6176*/    #if IS_2G_EXTERNAL_LNA_SUPPORT
/*MT6176*/       	if( is_elna_usage )
/*MT6176*/       	{
/*MT6176*/          	if( idx==5 )      /* LNA_High    : G5 */
/*MT6176*/          	{  lna_path_loss_offset = (int)(ofsptr_offset->gain_offset);  }
/*MT6176*/          	else if( idx==4 ) /* LNA_Middle : G4 */
/*MT6176*/          	{  lna_path_loss_offset = (int)(ofsptr_offset->gain_offset_middle);  }
/*MT6176*/          	else              /* LNA_Low    : G1 */
/*MT6176*/          	{  lna_path_loss_offset = (int)(ofsptr_offset->gain_offset_low);  }
/*MT6176*/       	}
/*MT6176*/       	else
/*MT6176*/    #endif
/*MT6176*/       	{
/*MT6176*/          	if( idx==6 )      /* LNA_High    : G6 */
/*MT6176*/          	{  lna_path_loss_offset = (int)(ofsptr_offset->gain_offset);  }
/*MT6176*/          	else if( idx==5 ) /* LNA_Middle : G5*/
/*MT6176*/          	{  lna_path_loss_offset = (int)(ofsptr_offset->gain_offset_middle);  }
/*MT6176*/          	else              /* LNA_Low    : G1*/
/*MT6176*/          	{  lna_path_loss_offset = (int)(ofsptr_offset->gain_offset_low);  }
/*MT6176*/       	}
/*MT6176*/       }
/*MT6176*/       else
/*MT6176*/       {
/*MT6176*/          lna_path_loss_offset = 0;
/*MT6176*/       }
/*MT6176*/       extern void L1D_RF_RPO_Trace( uint32 v1, uint32 v2, uint32 v3, uint32 v4, int32 v5, int32 v6 );
/*MT6176*/       L1D_RF_RPO_Trace( L1D_CheckIfMetaMode(), meta_rx_power_offset_enable, idx, rf_band, arfcn, lna_path_loss_offset);
/*MT6176*/    }
/*MT6176*/    #endif/*IS_RX_POWER_OFFSET_SUPPORT*/
/*MT6176*/
/*MT6176*/    #if IS_RX_POWER_OFFSET_SUPPORT
/*MT6176*/       real_gain -= (lna_path_loss_offset+lna_path_loss);
/*MT6176*/    #else
/*MT6176*/       real_gain -= lna_path_loss;// choose pathloss after LNA Mode selected according Nomral/HRD/IBBD
/*MT6176*/    #endif/*IS_RX_POWER_OFFSET_SUPPORT*/
/*MT6176*/    }
/*MT6176*/
/*MT6176*/    #if IS_RSSI_TC_SUPPORT
/*MT6176*/    if(L1D_CheckIfMetaMode()==0)
/*MT6176*/    {  real_gain-=L1D_RF_CompensateRXGain( l1d_rf.band );  }  // Compensate RX Gain acoording to temperature when normal mode
/*MT6176*/    #endif
/*MT6176*/    
/*MT6176*/    *gain_setting = setting;
/*MT6176*/    return( real_gain );
/*MT6176*/ }
/*MT6176*/
   #if IS_W_CANCELLATION_SUPPORT
/*MT6176*/ unsigned short   L1D_RF_FindGainStep( unsigned long gain_setting, FrequencyBand rf_band  )
/*MT6176*/ {
/*MT6176*/    unsigned short gain_step = gain_setting & 0x3FF;
/*MT6176*/    int   is_seiq = 1;
/*MT6176*/
/*MT6176*/    gain_step = (is_seiq==1)?((((gain_step>>6)&0xF)-1)<<6)|gain_step&0x3F:gain_step;
/*MT6176*/
/*MT6176*/    #if IS_2G_EXTERNAL_LNA_SUPPORT 
/*MT6176*/    if( L1D_RF_Check_If_ExternalLNA(rf_band) )
/*MT6176*/    {
/*MT6176*/       switch( gain_step )
/*MT6176*/       {
/*MT6176*/          case 0x1CD:
/*MT6176*/             return 10;
/*MT6176*/          case 0x11D:
/*MT6176*/             return 9;
/*MT6176*/          case 0x1BC: 
/*MT6176*/             return 8;
/*MT6176*/          case 0x10D:
/*MT6176*/             return 7;
/*MT6176*/          case 0x15D:
/*MT6176*/             return 6;
/*MT6176*/          case 0xDD:
/*MT6176*/             return 5;
/*MT6176*/          case 0x11C:
/*MT6176*/             return 4;
/*MT6176*/          case 0xDC:
/*MT6176*/             return 3;
/*MT6176*/          case 0x189:
/*MT6176*/             return 2;
/*MT6176*/          case 0x149:
/*MT6176*/             return 1;
/*MT6176*/          default:
/*MT6176*/             return 0;
/*MT6176*/       }
/*MT6176*/   }
/*MT6176*/   else
/*MT6176*/   #endif
/*MT6176*/   {
/*MT6176*/       switch( gain_step )
/*MT6176*/       {
/*MT6176*/          case 0x1CE:
/*MT6176*/             return 12;
/*MT6176*/          case 0x1CD:
/*MT6176*/             return 11;
/*MT6176*/          case 0x19E:
/*MT6176*/             return 9;
/*MT6176*/          case 0x19D:
/*MT6176*/             return 10;
/*MT6176*/          case 0x18E: 
/*MT6176*/             return 8;
/*MT6176*/          case 0x14E:
/*MT6176*/             return 7;
/*MT6176*/          case 0x10E:
/*MT6176*/             return 6;
/*MT6176*/          case 0x15E:
/*MT6176*/             return 5;
/*MT6176*/          case 0x13D:
/*MT6176*/             return 4;
/*MT6176*/          case 0x11D:
/*MT6176*/             return 3;
/*MT6176*/          case 0x15D:
/*MT6176*/             return 2;
/*MT6176*/          case 0xDD:
/*MT6176*/             return 1;
/*MT6176*/          default:
/*MT6176*/             return 0;
/*MT6176*/       }
/*MT6176*/    }
/*MT6176*/ }
   #endif
#endif

#if IS_RF_MT6179
/*MT6179*/
/*MT6179*/ #define  GAIN_STEP              3
/*MT6179*/ #define  PVOFSL                 34
/*MT6179*/ #define  PVOFSH                 34
/*MT6179*/ #define  LPF2_DROP_GAIN         ROUNDINT(3*(PWRRES))
/*MT6179*/ #define  TIA_DROP_GAIN          ROUNDINT(6*(PWRRES))
/*MT6179*/ #define  LNA_DROP_GAIN          ROUNDINT(6*(PWRRES))
/*MT6179*/ #define  HRD_LB_THRESHOLD       ROUNDINT((44.6-PVOFSL)*(PWRRES))
/*MT6179*/ #define  HRD_HB_THRESHOLD       ROUNDINT((44.6-PVOFSH)*(PWRRES))
/*MT6179*/ #define  IBBD_LB_THRESHOLD      ROUNDINT((53.6-PVOFSL)*(PWRRES))
/*MT6179*/ #define  IBBD_HB_THRESHOLD      ROUNDINT((53.6-PVOFSH)*(PWRRES))
/*MT6179*/ #define  RF_GSM850_MAXGAIN      (( 56.6-PVOFSL )*(PWRRES))
/*MT6179*/ #define  RF_GSM850_MINGAIN      ((  5.6-PVOFSL )*(PWRRES))
/*MT6179*/ #define  RF_GSM_MAXGAIN         (( 56.6-PVOFSL )*(PWRRES))
/*MT6179*/ #define  RF_GSM_MINGAIN         ((  5.6-PVOFSL )*(PWRRES))
/*MT6179*/ #define  RF_DCS_MAXGAIN         (( 56.6-PVOFSH )*(PWRRES))
/*MT6179*/ #define  RF_DCS_MINGAIN         ((  5.6-PVOFSH )*(PWRRES))
/*MT6179*/ #define  RF_PCS_MAXGAIN         (( 56.6-PVOFSH )*(PWRRES))
/*MT6179*/ #define  RF_PCS_MINGAIN         ((  5.6-PVOFSH )*(PWRRES))
/*MT6179*/
/*MT6179*/ /* GSM850....................................................................*/
/*MT6179*/
/*MT6179*/ const  sL1DAGCDATA  AGC_TABLE_GSM850[5] =
/*MT6179*/ {  {  GBOUND(( 47.6-PVOFSL ),( 44.6-PVOFSL ) ), GC_A( 5,(  47.6-PVOFSL ) ), BSI_CW(0x14E, 0x0000E) },  // Orion+ has PRX1 & DRX1 (CW334 & CW336), use CW334 as defualt setting
/*MT6179*/    {  GBOUND(( 44.6-PVOFSL ),( 41.6-PVOFSL ) ), GC_A( 6,(  44.6-PVOFSL ) ), BSI_CW(0x14E, 0x0001E) },
/*MT6179*/    {  GBOUND(( 29.6-PVOFSL ),( 26.6-PVOFSL ) ), GC_A( 3,(  29.6-PVOFSL ) ), BSI_CW(0x14E, 0x0001D) },
/*MT6179*/    {  GBOUND(( 17.6-PVOFSL ),( 14.6-PVOFSL ) ), GC_A( 5,(  17.6-PVOFSL ) ), BSI_CW(0x14E, 0x00009) },
/*MT6179*/    {  GBOUND((  5.6-PVOFSL ),(  5.6-PVOFSL ) ), GC_A( 3,(   5.6-PVOFSL ) ), BSI_CW(0x14E, 0x00019) },
/*MT6179*/ };
/*MT6179*/
/*MT6179*/ /* GSM900....................................................................*/
/*MT6179*/
/*MT6179*/ const  sL1DAGCDATA  AGC_TABLE_GSM900[5] =
/*MT6179*/ {  {  GBOUND(( 47.6-PVOFSL ),( 44.6-PVOFSL ) ), GC_A( 5,(  47.6-PVOFSL ) ), BSI_CW(0x14E, 0x0000E) },  // Orion+ has PRX1 & DRX1 (CW334 & CW336), use CW334 as defualt setting
/*MT6179*/    {  GBOUND(( 44.6-PVOFSL ),( 41.6-PVOFSL ) ), GC_A( 6,(  44.6-PVOFSL ) ), BSI_CW(0x14E, 0x0001E) },
/*MT6179*/    {  GBOUND(( 29.6-PVOFSL ),( 26.6-PVOFSL ) ), GC_A( 3,(  29.6-PVOFSL ) ), BSI_CW(0x14E, 0x0001D) },
/*MT6179*/    {  GBOUND(( 17.6-PVOFSL ),( 14.6-PVOFSL ) ), GC_A( 5,(  17.6-PVOFSL ) ), BSI_CW(0x14E, 0x00009) },
/*MT6179*/    {  GBOUND((  5.6-PVOFSL ),(  5.6-PVOFSL ) ), GC_A( 3,(   5.6-PVOFSL ) ), BSI_CW(0x14E, 0x00019) },
/*MT6179*/ };
/*MT6179*/
/*MT6179*/ /* DCS1800...................................................................*/
/*MT6179*/
/*MT6179*/ const  sL1DAGCDATA  AGC_TABLE_DCS1800[5] =
/*MT6179*/ {  {  GBOUND(( 47.6-PVOFSH ),( 44.6-PVOFSH ) ), GC_A( 5,(  47.6-PVOFSH ) ), BSI_CW(0x14E, 0x0000E) },  // Orion+ has PRX1 & DRX1 (CW334 & CW336), use CW334 as defualt setting
/*MT6179*/    {  GBOUND(( 44.6-PVOFSH ),( 41.6-PVOFSH ) ), GC_A( 6,(  44.6-PVOFSH ) ), BSI_CW(0x14E, 0x0001E) },
/*MT6179*/    {  GBOUND(( 29.6-PVOFSH ),( 26.6-PVOFSH ) ), GC_A( 3,(  29.6-PVOFSH ) ), BSI_CW(0x14E, 0x0001D) },
/*MT6179*/    {  GBOUND(( 17.6-PVOFSH ),( 14.6-PVOFSH ) ), GC_A( 5,(  17.6-PVOFSH ) ), BSI_CW(0x14E, 0x00009) },
/*MT6179*/    {  GBOUND((  5.6-PVOFSH ),(  5.6-PVOFSH ) ), GC_A( 3,(   5.6-PVOFSH ) ), BSI_CW(0x14E, 0x00019) },
/*MT6179*/ };
/*MT6179*/
/*MT6179*/ /* PCS1900...................................................................*/
/*MT6179*/
/*MT6179*/ const  sL1DAGCDATA  AGC_TABLE_PCS1900[5] =
/*MT6179*/ {  {  GBOUND(( 47.6-PVOFSH ),( 44.6-PVOFSH ) ), GC_A( 5,(  47.6-PVOFSH ) ), BSI_CW(0x14E, 0x0000E) },  // Orion+ has PRX1 & DRX1 (CW334 & CW336), use CW334 as defualt setting
/*MT6179*/    {  GBOUND(( 44.6-PVOFSH ),( 41.6-PVOFSH ) ), GC_A( 6,(  44.6-PVOFSH ) ), BSI_CW(0x14E, 0x0001E) },
/*MT6179*/    {  GBOUND(( 29.6-PVOFSH ),( 26.6-PVOFSH ) ), GC_A( 3,(  29.6-PVOFSH ) ), BSI_CW(0x14E, 0x0001D) },
/*MT6179*/    {  GBOUND(( 17.6-PVOFSH ),( 14.6-PVOFSH ) ), GC_A( 5,(  17.6-PVOFSH ) ), BSI_CW(0x14E, 0x00009) },
/*MT6179*/    {  GBOUND((  5.6-PVOFSH ),(  5.6-PVOFSH ) ), GC_A( 3,(   5.6-PVOFSH ) ), BSI_CW(0x14E, 0x00019) },
/*MT6179*/ };
/*MT6179*/
/*MT6179*/ /*...........................................................................*/
/*MT6179*/
/*MT6179*/ const  sL1DGAINRANGE GAIN_RANGE_TABLE[] =
/*MT6179*/ {  {                   0,                      0    }, /*#FrequencyBand400  */
/*MT6179*/    { (int)RF_GSM850_MAXGAIN, (int)RF_GSM850_MINGAIN }, /* FrequencyBand850  */
/*MT6179*/    { (int)RF_GSM_MAXGAIN,    (int)RF_GSM_MINGAIN    }, /* FrequencyBand900  */
/*MT6179*/    { (int)RF_DCS_MAXGAIN,    (int)RF_DCS_MINGAIN    }, /* FrequencyBand1800 */
/*MT6179*/    { (int)RF_PCS_MAXGAIN,    (int)RF_PCS_MINGAIN    }, /* FrequencyBand1900 */
/*MT6179*/ };
/*MT6179*/
/*MT6179*/ const  sL1DAGCDATA *const  AGC_TABLE[] =
/*MT6179*/ {  0,                                              /*#FrequencyBand400  */
/*MT6179*/    AGC_TABLE_GSM850,                               /* FrequencyBand850  */
/*MT6179*/    AGC_TABLE_GSM900,                               /* FrequencyBand900  */
/*MT6179*/    AGC_TABLE_DCS1800,                              /* FrequencyBand1800 */
/*MT6179*/    AGC_TABLE_PCS1900,                              /* FrequencyBand1900 */
/*MT6179*/ };
/*MT6179*/
/*MT6179*/ /*---------------------- RX gain table for E1 version ----------------------*/
/*MT6179*/ #define  HRD_LB_THRESHOLD_E1       ROUNDINT((44.6-PVOFSL)*(PWRRES))
/*MT6179*/ #define  HRD_HB_THRESHOLD_E1       ROUNDINT((44.6-PVOFSH)*(PWRRES))
/*MT6179*/ #define  IBBD_LB_THRESHOLD_E1      ROUNDINT((53.6-PVOFSL)*(PWRRES))
/*MT6179*/ #define  IBBD_HB_THRESHOLD_E1      ROUNDINT((53.6-PVOFSH)*(PWRRES))
/*MT6179*/ #define  RF_GSM850_MAXGAIN_E1      (( 62.6-PVOFSL )*(PWRRES))
/*MT6179*/ #define  RF_GSM850_MINGAIN_E1      (( -3.4-PVOFSL )*(PWRRES))
/*MT6179*/ #define  RF_GSM_MAXGAIN_E1         (( 62.6-PVOFSL )*(PWRRES))
/*MT6179*/ #define  RF_GSM_MINGAIN_E1         (( -3.4-PVOFSL )*(PWRRES))
/*MT6179*/ #define  RF_DCS_MAXGAIN_E1         (( 62.6-PVOFSH )*(PWRRES))
/*MT6179*/ #define  RF_DCS_MINGAIN_E1         (( -3.4-PVOFSH )*(PWRRES))
/*MT6179*/ #define  RF_PCS_MAXGAIN_E1         (( 62.6-PVOFSH )*(PWRRES))
/*MT6179*/ #define  RF_PCS_MINGAIN_E1         (( -3.4-PVOFSH )*(PWRRES))
/*MT6179*/
/*MT6179*/ /* GSM850....................................................................*/
/*MT6179*/
/*MT6179*/ const  sL1DAGCDATA  AGC_TABLE_GSM850_E1[7] =
/*MT6179*/ {  {  GBOUND(( 59.6-PVOFSL ),( 56.6-PVOFSL ) ), GC_A( 7,(  59.6-PVOFSL ) ), BSI_CW(0x14E, 0x00006) },  // Orion+ has PRX1 & DRX1 (CW334 & CW336), use CW334 as defualt setting
/*MT6179*/    {  GBOUND(( 47.6-PVOFSL ),( 44.6-PVOFSL ) ), GC_A( 5,(  47.6-PVOFSL ) ), BSI_CW(0x14E, 0x0000E) },
/*MT6179*/    {  GBOUND(( 44.6-PVOFSL ),( 41.6-PVOFSL ) ), GC_A( 6,(  44.6-PVOFSL ) ), BSI_CW(0x14E, 0x0001E) },
/*MT6179*/    {  GBOUND(( 29.6-PVOFSL ),( 26.6-PVOFSL ) ), GC_A( 3,(  29.6-PVOFSL ) ), BSI_CW(0x14E, 0x0001D) },
/*MT6179*/    {  GBOUND(( 17.6-PVOFSL ),( 14.6-PVOFSL ) ), GC_A( 5,(  17.6-PVOFSL ) ), BSI_CW(0x14E, 0x00009) },
/*MT6179*/    {  GBOUND((  5.6-PVOFSL ),(  2.6-PVOFSL ) ), GC_A( 3,(   5.6-PVOFSL ) ), BSI_CW(0x14E, 0x00019) },
/*MT6179*/    {  GBOUND(( -3.4-PVOFSL ),( -3.4-PVOFSL ) ), GC_A( 2,(  -3.4-PVOFSL ) ), BSI_CW(0x14E, 0x00039) },
/*MT6179*/ };
/*MT6179*/
/*MT6179*/ /* GSM900....................................................................*/
/*MT6179*/
/*MT6179*/ const  sL1DAGCDATA  AGC_TABLE_GSM900_E1[7] =
/*MT6179*/ {  {  GBOUND(( 59.6-PVOFSL ),( 56.6-PVOFSL ) ), GC_A( 7,(  59.6-PVOFSL ) ), BSI_CW(0x14E, 0x00006) },  // Orion+ has PRX1 & DRX1 (CW334 & CW336), use CW334 as defualt setting
/*MT6179*/    {  GBOUND(( 47.6-PVOFSL ),( 44.6-PVOFSL ) ), GC_A( 5,(  47.6-PVOFSL ) ), BSI_CW(0x14E, 0x0000E) },
/*MT6179*/    {  GBOUND(( 44.6-PVOFSL ),( 41.6-PVOFSL ) ), GC_A( 6,(  44.6-PVOFSL ) ), BSI_CW(0x14E, 0x0001E) },
/*MT6179*/    {  GBOUND(( 29.6-PVOFSL ),( 26.6-PVOFSL ) ), GC_A( 3,(  29.6-PVOFSL ) ), BSI_CW(0x14E, 0x0001D) },
/*MT6179*/    {  GBOUND(( 17.6-PVOFSL ),( 14.6-PVOFSL ) ), GC_A( 5,(  17.6-PVOFSL ) ), BSI_CW(0x14E, 0x00009) },
/*MT6179*/    {  GBOUND((  5.6-PVOFSL ),(  2.6-PVOFSL ) ), GC_A( 3,(   5.6-PVOFSL ) ), BSI_CW(0x14E, 0x00019) },
/*MT6179*/    {  GBOUND(( -3.4-PVOFSL ),( -3.4-PVOFSL ) ), GC_A( 2,(  -3.4-PVOFSL ) ), BSI_CW(0x14E, 0x00039) },
/*MT6179*/ };
/*MT6179*/
/*MT6179*/ /* DCS1800...................................................................*/
/*MT6179*/
/*MT6179*/ const  sL1DAGCDATA  AGC_TABLE_DCS1800_E1[7] =
/*MT6179*/ {  {  GBOUND(( 59.6-PVOFSH ),( 56.6-PVOFSH ) ), GC_A( 7,(  59.6-PVOFSH ) ), BSI_CW(0x14E, 0x00006) },  // Orion+ has PRX1 & DRX1 (CW334 & CW336), use CW334 as defualt setting
/*MT6179*/    {  GBOUND(( 47.6-PVOFSH ),( 44.6-PVOFSH ) ), GC_A( 5,(  47.6-PVOFSH ) ), BSI_CW(0x14E, 0x0000E) },
/*MT6179*/    {  GBOUND(( 44.6-PVOFSH ),( 41.6-PVOFSH ) ), GC_A( 6,(  44.6-PVOFSH ) ), BSI_CW(0x14E, 0x0001E) },
/*MT6179*/    {  GBOUND(( 29.6-PVOFSH ),( 26.6-PVOFSH ) ), GC_A( 3,(  29.6-PVOFSH ) ), BSI_CW(0x14E, 0x0001D) },
/*MT6179*/    {  GBOUND(( 17.6-PVOFSH ),( 14.6-PVOFSH ) ), GC_A( 5,(  17.6-PVOFSH ) ), BSI_CW(0x14E, 0x00009) },
/*MT6179*/    {  GBOUND((  5.6-PVOFSH ),(  2.6-PVOFSH ) ), GC_A( 3,(   5.6-PVOFSH ) ), BSI_CW(0x14E, 0x00019) },
/*MT6179*/    {  GBOUND(( -3.4-PVOFSH ),( -3.4-PVOFSH ) ), GC_A( 2,(  -3.4-PVOFSH ) ), BSI_CW(0x14E, 0x00039) },
/*MT6179*/ };
/*MT6179*/
/*MT6179*/ /* PCS1900...................................................................*/
/*MT6179*/
/*MT6179*/ const  sL1DAGCDATA  AGC_TABLE_PCS1900_E1[7] =
/*MT6179*/ {  {  GBOUND(( 59.6-PVOFSH ),( 56.6-PVOFSH ) ), GC_A( 7,(  59.6-PVOFSH ) ), BSI_CW(0x14E, 0x00006) },  // Orion+ has PRX1 & DRX1 (CW334 & CW336), use CW334 as defualt setting
/*MT6179*/    {  GBOUND(( 47.6-PVOFSH ),( 44.6-PVOFSH ) ), GC_A( 5,(  47.6-PVOFSH ) ), BSI_CW(0x14E, 0x0000E) },
/*MT6179*/    {  GBOUND(( 44.6-PVOFSH ),( 41.6-PVOFSH ) ), GC_A( 6,(  44.6-PVOFSH ) ), BSI_CW(0x14E, 0x0001E) },
/*MT6179*/    {  GBOUND(( 29.6-PVOFSH ),( 26.6-PVOFSH ) ), GC_A( 3,(  29.6-PVOFSH ) ), BSI_CW(0x14E, 0x0001D) },
/*MT6179*/    {  GBOUND(( 17.6-PVOFSH ),( 14.6-PVOFSH ) ), GC_A( 5,(  17.6-PVOFSH ) ), BSI_CW(0x14E, 0x00009) },
/*MT6179*/    {  GBOUND((  5.6-PVOFSH ),(  2.6-PVOFSH ) ), GC_A( 3,(   5.6-PVOFSH ) ), BSI_CW(0x14E, 0x00019) },
/*MT6179*/    {  GBOUND(( -3.4-PVOFSH ),( -3.4-PVOFSH ) ), GC_A( 2,(  -3.4-PVOFSH ) ), BSI_CW(0x14E, 0x00039) },
/*MT6179*/ };
/*MT6179*/
/*MT6179*/ /*...........................................................................*/
/*MT6179*/
/*MT6179*/ const  sL1DGAINRANGE GAIN_RANGE_TABLE_E1[] =
/*MT6179*/ {  {                   0,                      0    }, /*#FrequencyBand400  */
/*MT6179*/    { (int)RF_GSM850_MAXGAIN_E1, (int)RF_GSM850_MINGAIN_E1 }, /* FrequencyBand850  */
/*MT6179*/    { (int)RF_GSM_MAXGAIN_E1,    (int)RF_GSM_MINGAIN_E1    }, /* FrequencyBand900  */
/*MT6179*/    { (int)RF_DCS_MAXGAIN_E1,    (int)RF_DCS_MINGAIN_E1    }, /* FrequencyBand1800 */
/*MT6179*/    { (int)RF_PCS_MAXGAIN_E1,    (int)RF_PCS_MINGAIN_E1    }, /* FrequencyBand1900 */
/*MT6179*/ };
/*MT6179*/
/*MT6179*/ const  sL1DAGCDATA *const  AGC_TABLE_E1[] =
/*MT6179*/ {  0,                                              /*#FrequencyBand400  */
/*MT6179*/    AGC_TABLE_GSM850_E1,                               /* FrequencyBand850  */
/*MT6179*/    AGC_TABLE_GSM900_E1,                               /* FrequencyBand900  */
/*MT6179*/    AGC_TABLE_DCS1800_E1,                              /* FrequencyBand1800 */
/*MT6179*/    AGC_TABLE_PCS1900_E1,                              /* FrequencyBand1900 */
/*MT6179*/ };
/*MT6179*/
   #if IS_2G_EXTERNAL_LNA_SUPPORT
/*MT6179*/ #define  HRD_LB_THRESHOLD_ELNA        ROUNDINT((32.6-PVOFSL)*(PWRRES))
/*MT6179*/ #define  HRD_HB_THRESHOLD_ELNA        ROUNDINT((32.6-PVOFSH)*(PWRRES))
/*MT6179*/ #define  IBBD_LB_THRESHOLD_ELNA       ROUNDINT((35.6-PVOFSL)*(PWRRES))
/*MT6179*/ #define  IBBD_HB_THRESHOLD_ELNA       ROUNDINT((35.6-PVOFSH)*(PWRRES))
/*MT6179*/ #define  RF_GSM850_MAXGAIN_ELNA       (( 50.6-PVOFSL )*(PWRRES))
/*MT6179*/ #define  RF_GSM850_MINGAIN_ELNA       (( -0.4-PVOFSL )*(PWRRES))
/*MT6179*/ #define  RF_GSM_MAXGAIN_ELNA          (( 50.6-PVOFSL )*(PWRRES))
/*MT6179*/ #define  RF_GSM_MINGAIN_ELNA          (( -0.4-PVOFSL )*(PWRRES))
/*MT6179*/ #define  RF_DCS_MAXGAIN_ELNA          (( 50.6-PVOFSH )*(PWRRES))
/*MT6179*/ #define  RF_DCS_MINGAIN_ELNA          (( -0.4-PVOFSH )*(PWRRES))
/*MT6179*/ #define  RF_PCS_MAXGAIN_ELNA          (( 50.6-PVOFSH )*(PWRRES))
/*MT6179*/ #define  RF_PCS_MINGAIN_ELNA          (( -0.4-PVOFSH )*(PWRRES))
/*MT6179*/
/*MT6179*/ /*Real RX gain and bitno for fixed RX gain setting, index = 0 or 1 of AGC_TABLE */
/*MT6179*/ #define  RF_GSM850_Sec0_GAIN_ELNA       ROUNDINT(( 50.6-PVOFSL )*(PWRRES))
/*MT6179*/ #define  RF_GSM850_Sec1_GAIN_ELNA       ROUNDINT(( 41.6-PVOFSL )*(PWRRES))
/*MT6179*/ #define  RF_GSM_Sec0_GAIN_ELNA          ROUNDINT(( 50.6-PVOFSL )*(PWRRES))
/*MT6179*/ #define  RF_GSM_Sec1_GAIN_ELNA          ROUNDINT(( 41.6-PVOFSL )*(PWRRES))
/*MT6179*/ #define  RF_DCS_Sec0_GAIN_ELNA          ROUNDINT(( 50.6-PVOFSH )*(PWRRES))
/*MT6179*/ #define  RF_DCS_Sec1_GAIN_ELNA          ROUNDINT(( 41.6-PVOFSH )*(PWRRES))
/*MT6179*/ #define  RF_PCS_Sec0_GAIN_ELNA          ROUNDINT(( 50.6-PVOFSH )*(PWRRES))
/*MT6179*/ #define  RF_PCS_Sec1_GAIN_ELNA          ROUNDINT(( 41.6-PVOFSH )*(PWRRES))
/*MT6179*/ #define  RF_GSM850_Sec0_BitNo_ELNA      8
/*MT6179*/ #define  RF_GSM850_Sec1_BitNo_ELNA      5
/*MT6179*/ #define  RF_GSM_Sec0_BitNo_ELNA         8
/*MT6179*/ #define  RF_GSM_Sec1_BitNo_ELNA         5
/*MT6179*/ #define  RF_DCS_Sec0_BitNo_ELNA         8
/*MT6179*/ #define  RF_DCS_Sec1_BitNo_ELNA         5
/*MT6179*/ #define  RF_PCS_Sec0_BitNo_ELNA         8
/*MT6179*/ #define  RF_PCS_Sec1_BitNo_ELNA         5
/*MT6179*/
/*MT6179*/ /* GSM850....................................................................*/
/*MT6179*/ /*Need to fix RX gain setting for index = 0 and 1, w/o extrapolation */
/*MT6179*/ const  sL1DAGCDATA  AGC_TABLE_GSM850_ELNA [7] =
/*MT6179*/ {  {  GBOUND(( 50.6-PVOFSL ),( 41.6-PVOFSL ) ), GC_A( 8,(  50.6-PVOFSL ) ), BSI_CW(0x14E, 0x0000D) },  // Orion+ has PRX1 & DRX1 (CW334 & CW336), use CW334 as defualt setting
/*MT6179*/    {  GBOUND(( 41.6-PVOFSL ),( 38.6-PVOFSL ) ), GC_A( 5,(  41.6-PVOFSL ) ), BSI_CW(0x14E, 0x0000D) },
/*MT6179*/    {  GBOUND(( 32.6-PVOFSL ),( 29.6-PVOFSL ) ), GC_A( 4,(  32.6-PVOFSL ) ), BSI_CW(0x14E, 0x0001D) },
/*MT6179*/    {  GBOUND(( 26.6-PVOFSL ),( 23.6-PVOFSL ) ), GC_A( 4,(  26.6-PVOFSL ) ), BSI_CW(0x14E, 0x0001C) },
/*MT6179*/    {  GBOUND(( 17.6-PVOFSL ),( 14.6-PVOFSL ) ), GC_A( 5,(  17.6-PVOFSL ) ), BSI_CW(0x14E, 0x00009) },
/*MT6179*/    {  GBOUND((  8.6-PVOFSL ),(  5.6-PVOFSL ) ), GC_A( 4,(   8.6-PVOFSL ) ), BSI_CW(0x14E, 0x00019) },
/*MT6179*/    {  GBOUND(( -0.4-PVOFSL ),( -0.4-PVOFSL ) ), GC_A( 3,(  -0.4-PVOFSL ) ), BSI_CW(0x14E, 0x00039) },
/*MT6179*/ };
/*MT6179*/
/*MT6179*/ /* GSM900....................................................................*/
/*MT6179*/ /*Need to fix RX gain setting for index = 0 and 1, w/o extrapolation */
/*MT6179*/ const  sL1DAGCDATA  AGC_TABLE_GSM900_ELNA [7] =
/*MT6179*/ {  {  GBOUND(( 50.6-PVOFSL ),( 41.6-PVOFSL ) ), GC_A( 8,(  50.6-PVOFSL ) ), BSI_CW(0x14E, 0x0000D) },  // Orion+ has PRX1 & DRX1 (CW334 & CW336), use CW334 as defualt setting
/*MT6179*/    {  GBOUND(( 41.6-PVOFSL ),( 38.6-PVOFSL ) ), GC_A( 5,(  41.6-PVOFSL ) ), BSI_CW(0x14E, 0x0000D) },
/*MT6179*/    {  GBOUND(( 32.6-PVOFSL ),( 29.6-PVOFSL ) ), GC_A( 4,(  32.6-PVOFSL ) ), BSI_CW(0x14E, 0x0001D) },
/*MT6179*/    {  GBOUND(( 26.6-PVOFSL ),( 23.6-PVOFSL ) ), GC_A( 4,(  26.6-PVOFSL ) ), BSI_CW(0x14E, 0x0001C) },
/*MT6179*/    {  GBOUND(( 17.6-PVOFSL ),( 14.6-PVOFSL ) ), GC_A( 5,(  17.6-PVOFSL ) ), BSI_CW(0x14E, 0x00009) },
/*MT6179*/    {  GBOUND((  8.6-PVOFSL ),(  5.6-PVOFSL ) ), GC_A( 4,(   8.6-PVOFSL ) ), BSI_CW(0x14E, 0x00019) },
/*MT6179*/    {  GBOUND(( -0.4-PVOFSL ),( -0.4-PVOFSL ) ), GC_A( 3,(  -0.4-PVOFSL ) ), BSI_CW(0x14E, 0x00039) },
/*MT6179*/ };
/*MT6179*/
/*MT6179*/ /* DCS1800...................................................................*/
/*MT6179*/ /*Need to fix RX gain setting for index = 0 and 1, w/o extrapolation */
/*MT6179*/ const  sL1DAGCDATA  AGC_TABLE_DCS1800_ELNA [7] =
/*MT6179*/ {  {  GBOUND(( 50.6-PVOFSH ),( 41.6-PVOFSH ) ), GC_A( 8,(  50.6-PVOFSH ) ), BSI_CW(0x14E, 0x0000D) },  // Orion+ has PRX1 & DRX1 (CW334 & CW336), use CW334 as defualt setting
/*MT6179*/    {  GBOUND(( 41.6-PVOFSH ),( 38.6-PVOFSH ) ), GC_A( 5,(  41.6-PVOFSH ) ), BSI_CW(0x14E, 0x0000D) },
/*MT6179*/    {  GBOUND(( 32.6-PVOFSH ),( 29.6-PVOFSH ) ), GC_A( 4,(  32.6-PVOFSH ) ), BSI_CW(0x14E, 0x0001D) },
/*MT6179*/    {  GBOUND(( 26.6-PVOFSH ),( 23.6-PVOFSH ) ), GC_A( 4,(  26.6-PVOFSH ) ), BSI_CW(0x14E, 0x0001C) },
/*MT6179*/    {  GBOUND(( 17.6-PVOFSH ),( 14.6-PVOFSH ) ), GC_A( 5,(  17.6-PVOFSH ) ), BSI_CW(0x14E, 0x00009) },
/*MT6179*/    {  GBOUND((  8.6-PVOFSH ),(  5.6-PVOFSH ) ), GC_A( 4,(   8.6-PVOFSH ) ), BSI_CW(0x14E, 0x00019) },
/*MT6179*/    {  GBOUND(( -0.4-PVOFSH ),( -0.4-PVOFSH ) ), GC_A( 3,(  -0.4-PVOFSH ) ), BSI_CW(0x14E, 0x00039) },
/*MT6179*/ };
/*MT6179*/
/*MT6179*/ /* PCS1900...................................................................*/
/*MT6179*/ /*Need to fix RX gain setting for index = 0 and 1, w/o extrapolation */
/*MT6179*/ const  sL1DAGCDATA  AGC_TABLE_PCS1900_ELNA [7] =
/*MT6179*/ {  {  GBOUND(( 50.6-PVOFSH ),( 41.6-PVOFSH ) ), GC_A( 8,(  50.6-PVOFSH ) ), BSI_CW(0x14E, 0x0000D) },  // Orion+ has PRX1 & DRX1 (CW334 & CW336), use CW334 as defualt setting
/*MT6179*/    {  GBOUND(( 41.6-PVOFSH ),( 38.6-PVOFSH ) ), GC_A( 5,(  41.6-PVOFSH ) ), BSI_CW(0x14E, 0x0000D) },
/*MT6179*/    {  GBOUND(( 32.6-PVOFSH ),( 29.6-PVOFSH ) ), GC_A( 4,(  32.6-PVOFSH ) ), BSI_CW(0x14E, 0x0001D) },
/*MT6179*/    {  GBOUND(( 26.6-PVOFSH ),( 23.6-PVOFSH ) ), GC_A( 4,(  26.6-PVOFSH ) ), BSI_CW(0x14E, 0x0001C) },
/*MT6179*/    {  GBOUND(( 17.6-PVOFSH ),( 14.6-PVOFSH ) ), GC_A( 5,(  17.6-PVOFSH ) ), BSI_CW(0x14E, 0x00009) },
/*MT6179*/    {  GBOUND((  8.6-PVOFSH ),(  5.6-PVOFSH ) ), GC_A( 4,(   8.6-PVOFSH ) ), BSI_CW(0x14E, 0x00019) },
/*MT6179*/    {  GBOUND(( -0.4-PVOFSH ),( -0.4-PVOFSH ) ), GC_A( 3,(  -0.4-PVOFSH ) ), BSI_CW(0x14E, 0x00039) },
/*MT6179*/ };
/*MT6179*/
/*MT6179*/ /*...........................................................................*/
/*MT6179*/
/*MT6179*/ const  sL1DGAINRANGE GAIN_RANGE_TABLE_ELNA [] =
/*MT6179*/ {  {                   0,                      0                }, /*#FrequencyBand400  */
/*MT6179*/    { (int)RF_GSM850_MAXGAIN_ELNA , (int)RF_GSM850_MINGAIN_ELNA  }, /* FrequencyBand850  */
/*MT6179*/    { (int)RF_GSM_MAXGAIN_ELNA ,    (int)RF_GSM_MINGAIN_ELNA     }, /* FrequencyBand900  */
/*MT6179*/    { (int)RF_DCS_MAXGAIN_ELNA ,    (int)RF_DCS_MINGAIN_ELNA     }, /* FrequencyBand1800 */
/*MT6179*/    { (int)RF_PCS_MAXGAIN_ELNA ,    (int)RF_PCS_MINGAIN_ELNA     }, /* FrequencyBand1900 */
/*MT6179*/ };
/*MT6179*/
/*MT6179*/ const  sL1DAGCDATA *const  AGC_TABLE_ELNA[] =
/*MT6179*/ {  0,                                              /*#FrequencyBand400  */
/*MT6179*/    AGC_TABLE_GSM850_ELNA,                               /* FrequencyBand850  */
/*MT6179*/    AGC_TABLE_GSM900_ELNA,                               /* FrequencyBand900  */
/*MT6179*/    AGC_TABLE_DCS1800_ELNA,                              /* FrequencyBand1800 */
/*MT6179*/    AGC_TABLE_PCS1900_ELNA,                              /* FrequencyBand1900 */
/*MT6179*/ };
/*MT6179*/
/*MT6179*/ /*Fix RX gain setting, w/o extrapolation for index = 0 of AGC_TABLE */
/*MT6179*/ const  sL1DSection GAIN_Sec0_ELNA [] =
/*MT6179*/ {  {                   0,                      0                     }, /*#FrequencyBand400  */
/*MT6179*/    { (int)RF_GSM850_Sec0_GAIN_ELNA , (int)RF_GSM850_Sec0_BitNo_ELNA  }, /* FrequencyBand850  */
/*MT6179*/    { (int)RF_GSM_Sec0_GAIN_ELNA ,    (int)RF_GSM_Sec0_BitNo_ELNA     }, /* FrequencyBand900  */
/*MT6179*/    { (int)RF_DCS_Sec0_GAIN_ELNA ,    (int)RF_DCS_Sec0_BitNo_ELNA     }, /* FrequencyBand1800 */
/*MT6179*/    { (int)RF_PCS_Sec0_GAIN_ELNA ,    (int)RF_PCS_Sec0_BitNo_ELNA     }, /* FrequencyBand1900 */
/*MT6179*/ };
/*MT6179*/ /*Fix RX gain setting, w/o extrapolation for index = 1 of AGC_TABLE */
/*MT6179*/ const  sL1DSection GAIN_Sec1_ELNA [] =
/*MT6179*/ {  {                   0,                      0                     }, /*#FrequencyBand400  */
/*MT6179*/    { (int)RF_GSM850_Sec1_GAIN_ELNA , (int)RF_GSM850_Sec1_BitNo_ELNA  }, /* FrequencyBand850  */
/*MT6179*/    { (int)RF_GSM_Sec1_GAIN_ELNA ,    (int)RF_GSM_Sec1_BitNo_ELNA     }, /* FrequencyBand900  */
/*MT6179*/    { (int)RF_DCS_Sec1_GAIN_ELNA ,    (int)RF_DCS_Sec1_BitNo_ELNA     }, /* FrequencyBand1800 */
/*MT6179*/    { (int)RF_PCS_Sec1_GAIN_ELNA ,    (int)RF_PCS_Sec1_BitNo_ELNA     }, /* FrequencyBand1900 */
/*MT6179*/ };
   #endif
/*MT6179*/ /*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
/*MT6179*/
/*MT6179*/ int   L1D_RF_GetGainSetting( int rf_band, int arfcn, int request_gain, long *gain_setting )
/*MT6179*/ {  int   max_gain, min_gain, real_gain, blkr_group, l1_obb_flag = 0;
/*MT6179*/    const int*    d32ptr;
/*MT6179*/    const sL1DAGCDATA*  agcptr;
/*MT6179*/    sLNAGAINOFFSET*     lnaptr;
/*MT6179*/    sAGCGAINOFFSET*     ofsptr;
/*MT6179*/    long  setting;
/*MT6179*/    int   bit_no, idx, lna_path_loss, ibbd_threshold, hrd_threshold;
/*MT6179*/    int   lna_path_extra_loss = (rf_band<FrequencyBand1800) ? 0 : (5 * PWRRES);
/*MT6179*/    unsigned short  L1D_chip_ver = L1D_RF_QUERY_CHIP_VERSION();
/*MT6179*/    #if IS_2G_EXTERNAL_LNA_SUPPORT
/*MT6179*/    unsigned short   agcptr_idx = 0;   //index of AGC table for fixing RX gain setting 
/*MT6179*/    unsigned short   is_elna_usage    = L1D_RF_Check_If_ExternalLNA(rf_band);   // check if using eLNA
/*MT6179*/    #endif
/*MT6179*/
/*MT6179*/    #if IS_RX_POWER_OFFSET_SUPPORT
/*MT6179*/    sAGCLNAGAINOFFSET*  ofsptr_offset;
/*MT6179*/    kal_uint16 rx_power_offset_enable      = AGCLNA_PL_OFFSET_SETTING->rx_power_offset_setting.RPO_enable;
/*MT6179*/    kal_uint16 meta_rx_power_offset_enable = AGCLNA_PL_OFFSET_SETTING->rx_power_offset_setting.RPO_meta_enable; 
/*MT6179*/    int  lna_path_loss_offset = 0;
/*MT6179*/    #endif/*IS_RX_POWER_OFFSET_SUPPORT*/
/*MT6179*/
/*MT6179*/    #if IS_INBAND_BLOCKER_DETECTION_SUPPORT
/*MT6179*/       #if IS_2G_EXTERNAL_LNA_SUPPORT
/*MT6179*/    if( is_elna_usage )
/*MT6179*/    {  ibbd_threshold = (rf_band<FrequencyBand1800) ? IBBD_LB_THRESHOLD_ELNA : IBBD_HB_THRESHOLD_ELNA;  }
/*MT6179*/    else   // no eLNA
/*MT6179*/       #endif
/*MT6179*/    {  
/*MT6179*/       if ( L1D_chip_ver == MML1_RF_IS_E1)
/*MT6179*/       {  ibbd_threshold = (rf_band<FrequencyBand1800) ? IBBD_LB_THRESHOLD_E1 : IBBD_HB_THRESHOLD_E1;  }
/*MT6179*/       else
/*MT6179*/       {  ibbd_threshold = (rf_band<FrequencyBand1800) ? IBBD_LB_THRESHOLD : IBBD_HB_THRESHOLD;  }
/*MT6179*/    }
/*MT6179*/    #endif
/*MT6179*/
/*MT6179*/    #if IS_HEADROOM_DETECTION_SUPPORT
/*MT6179*/       #if IS_2G_EXTERNAL_LNA_SUPPORT
/*MT6179*/    if( is_elna_usage )
/*MT6179*/    {  hrd_threshold = (rf_band<FrequencyBand1800) ? HRD_LB_THRESHOLD_ELNA : HRD_HB_THRESHOLD_ELNA;  }
/*MT6179*/    else   // no eLNA
/*MT6179*/      #endif
/*MT6179*/    {  
/*MT6179*/       if ( L1D_chip_ver == MML1_RF_IS_E1)
/*MT6179*/       {  hrd_threshold = (rf_band<FrequencyBand1800) ? HRD_LB_THRESHOLD_E1  : HRD_HB_THRESHOLD_E1;  }
/*MT6179*/       else
/*MT6179*/       {  hrd_threshold = (rf_band<FrequencyBand1800) ? HRD_LB_THRESHOLD  : HRD_HB_THRESHOLD;  }
/*MT6179*/    }
/*MT6179*/
/*MT6179*/    #endif
/*MT6179*/
/*MT6179*/    #if IS_OUTBAND_BLOCKER_DETECTION_SUPPORT
/*MT6179*/    if( l1d_rf.band < FrequencyBand1800 )
/*MT6179*/    {  l1_obb_flag = (l1d_rf.blk_flag & LB_OBB_FOUND) ? 1 : 0; }
/*MT6179*/    else
/*MT6179*/    {  l1_obb_flag = (l1d_rf.blk_flag & HB_OBB_FOUND) ? 1 : 0; }
/*MT6179*/    #endif
/*MT6179*/
/*MT6179*/    /* evaluate the range of available gain */
/*MT6179*/    #if IS_2G_EXTERNAL_LNA_SUPPORT
/*MT6179*/    if( is_elna_usage )
/*MT6179*/    {  d32ptr   = (int*)&(GAIN_RANGE_TABLE_ELNA[rf_band]);  }
/*MT6179*/    else
/*MT6179*/    #endif
/*MT6179*/    {
/*MT6179*/       if ( L1D_chip_ver == MML1_RF_IS_E1)
/*MT6179*/       {  d32ptr   = (int*)&(GAIN_RANGE_TABLE_E1[rf_band]);  }
/*MT6179*/       else
/*MT6179*/       {  d32ptr   = (int*)&(GAIN_RANGE_TABLE[rf_band]);  }
/*MT6179*/    }
/*MT6179*/    max_gain = *d32ptr++;
/*MT6179*/    min_gain = *d32ptr;
/*MT6179*/
/*MT6179*/    /* D[12:10]: blkr_group used for IBB/HRD case if request_gain>=0, D[9:0]: request_gain for Normal case */
/*MT6179*/    blkr_group    = (request_gain>=0)?((request_gain>>10)&0x7):0;
/*MT6179*/    request_gain  = (request_gain>=0)?(request_gain&0x3FF):request_gain;
/*MT6179*/
/*MT6179*/    /* Normal Mode: From Voltage_Gain to Power_Gain (Voltage_Gain comes from m11303.c)*/
/*MT6179*/    /* Meta Mode:  Bring Power_Gain directly*/
/*MT6179*/    if((!L1D_CheckIfMetaMode()))
/*MT6179*/    {  request_gain -= ((rf_band<FrequencyBand1800) ? (PVOFSL*PWRRES) : (PVOFSH*PWRRES));  }
/*MT6179*/
/*MT6179*/    /* clipping the request gain to the avialable gain */
/*MT6179*/    if( request_gain>=max_gain )
/*MT6179*/    {  request_gain = max_gain;  
/*MT6179*/    }
/*MT6179*/    else if( request_gain<=min_gain )
/*MT6179*/    {  request_gain = min_gain;  
/*MT6179*/    }
/*MT6179*/
/*MT6179*/    /* choose the LNA path loss */
/*MT6179*/    lnaptr = LNA_PATHLOSS_TABLE[rf_band];
/*MT6179*/    /* get the arfcn section */
/*MT6179*/    ofsptr = AGC_PATHLOSS_TABLE[rf_band];
/*MT6179*/    while( ofsptr->max_arfcn>=0 )
/*MT6179*/    {  if( arfcn <= ofsptr->max_arfcn )
/*MT6179*/       {  break;  }
/*MT6179*/       ofsptr++;
/*MT6179*/       lnaptr++;
/*MT6179*/    }
/*MT6179*/
/*MT6179*/    /* evaluate the real gain setting */
/*MT6179*/    #if IS_2G_EXTERNAL_LNA_SUPPORT
/*MT6179*/    if( is_elna_usage )
/*MT6179*/    {  agcptr = AGC_TABLE_ELNA[rf_band];  }
/*MT6179*/    else
/*MT6179*/    #endif
/*MT6179*/    {  
/*MT6179*/       if ( L1D_chip_ver == MML1_RF_IS_E1)
/*MT6179*/       {  agcptr = AGC_TABLE_E1[rf_band];  }
/*MT6179*/       else
/*MT6179*/       {  agcptr = AGC_TABLE[rf_band];  }
/*MT6179*/    }
/*MT6179*/
/*MT6179*/    while( request_gain < agcptr->pos_gain )
/*MT6179*/    {  
/*MT6179*/       agcptr++;  
/*MT6179*/    #if IS_2G_EXTERNAL_LNA_SUPPORT
/*MT6179*/       agcptr_idx++;
/*MT6179*/    #endif
/*MT6179*/    }
/*MT6179*/
/*MT6179*/    {
/*MT6179*/    #if IS_2G_EXTERNAL_LNA_SUPPORT
/*MT6179*/       if( is_elna_usage && (L1D_CheckIfMetaMode()) )
/*MT6179*/       {/* Special handling under META mode. Normal mode will use the exact gain listed in RX gain table*/
/*MT6179*/          switch( agcptr_idx )
/*MT6179*/          {
/*MT6179*/             case 0: // Section0, fix RX gain setting w/o extrapolation
/*MT6179*/                bit_no    = GAIN_Sec0_ELNA[rf_band].bitno;
/*MT6179*/                real_gain = GAIN_Sec0_ELNA[rf_band].real_gain;
/*MT6179*/                break;
/*MT6179*/             case 1: // Section1, fix RX gain setting w/o extrapolation
/*MT6179*/                bit_no    = GAIN_Sec1_ELNA[rf_band].bitno;
/*MT6179*/                real_gain = GAIN_Sec1_ELNA[rf_band].real_gain;
/*MT6179*/                break;
/*MT6179*/             default: // Other sections
/*MT6179*/                bit_no    = BIT_NO( request_gain, agcptr->A, GC_B );
/*MT6179*/                real_gain = REAL_GAIN( bit_no, agcptr->A, GC_B );
/*MT6179*/                break;
/*MT6179*/          }
/*MT6179*/       } 
/*MT6179*/       else
/*MT6179*/    #endif
/*MT6179*/       {
/*MT6179*/          bit_no    = BIT_NO( request_gain, agcptr->A, GC_B );
/*MT6179*/          real_gain = REAL_GAIN( bit_no, agcptr->A, GC_B );
/*MT6179*/       }
/*MT6179*/
/*MT6179*/       if( 0 )
/*MT6179*/       { /* do nothing */ }
/*MT6179*/    #if IS_HEADROOM_DETECTION_SUPPORT || IS_INBAND_BLOCKER_DETECTION_SUPPORT || IS_OUTBAND_BLOCKER_DETECTION_SUPPORT
/*MT6179*/       else if( ((((l1d_rf.blk_flag)&(HRD_FOUND)) && (request_gain >= (hrd_threshold))) || (((l1d_rf.blk_flag)&(IBB_FOUND)) && (request_gain >= (ibbd_threshold))) || (l1_obb_flag == 1)) && (blkr_group > 0) )
/*MT6179*/       {
/*MT6179*/       #if IS_2G_EXTERNAL_LNA_SUPPORT 
/*MT6179*/           if(is_elna_usage)
/*MT6179*/           {
/*MT6179*/              switch( blkr_group )
/*MT6179*/              {
/*MT6179*/                 case 1:
/*MT6179*/                    setting   = (agcptr->setting&0x3FFFFFC0)|((0x7)<<6)|(0x7<<3)|0x4;  // reduce LNA/TIA, increase LPF2 Gain
/*MT6179*/                    real_gain-= (LNA_DROP_GAIN+TIA_DROP_GAIN+(bit_no-7)*LPF2_DROP_GAIN);
/*MT6179*/                    break;
/*MT6179*/                 default:
/*MT6179*/                    setting   = agcptr->setting | ((bit_no&0xF)<<6);  
/*MT6179*/                    break;
/*MT6179*/              }
/*MT6179*/           }
/*MT6179*/           else
/*MT6179*/       #endif
/*MT6179*/           {
/*MT6179*/              if ( L1D_chip_ver == MML1_RF_IS_E1)
/*MT6179*/              {
/*MT6179*/                 switch( blkr_group )
/*MT6179*/                 {
/*MT6179*/                    case 1:
/*MT6179*/                       setting   = (agcptr->setting&0x3FFFFFC0)|(((bit_no-1)&0xF)<<6)|(0x1<<3)|0x6;  // reduce TIA/LPF2 Gain
/*MT6179*/                       real_gain-= (TIA_DROP_GAIN+LPF2_DROP_GAIN);
/*MT6179*/                       break;
/*MT6179*/                    case 2:
/*MT6179*/                       setting   = (agcptr->setting&0x3FFFFFC0)|((bit_no&0xF)<<6)|(0x1<<3)|0x5;  // reduce LNA/TIAGain
/*MT6179*/                       real_gain-= (LNA_DROP_GAIN+TIA_DROP_GAIN);
/*MT6179*/                       break;
/*MT6179*/                    case 3:
/*MT6179*/                       setting   = (agcptr->setting&0x3FFFFFC0)|((0x7)<<6)|(0x1<<3)|0x5;  // reduce LNA/LPF2 Gain
/*MT6179*/                       real_gain-= (LNA_DROP_GAIN+(bit_no-7)*LPF2_DROP_GAIN);
/*MT6179*/                       break;
/*MT6179*/                    case 4:
/*MT6179*/                       setting   = (agcptr->setting&0x3FFFFFC0)|(((bit_no-1)&0xF)<<6)|(0x7<<3)|0x5;  // reduce LNA/TIA/LPF2 Gain
/*MT6179*/                       real_gain-= (LNA_DROP_GAIN+TIA_DROP_GAIN+LPF2_DROP_GAIN);
/*MT6179*/                       break;
/*MT6179*/                    default:
/*MT6179*/                       setting   = agcptr->setting | ((bit_no&0xF)<<6);  
/*MT6179*/                       break;
/*MT6179*/                 } 
/*MT6179*/              }
/*MT6179*/              else
/*MT6179*/              {
/*MT6179*/                 switch( blkr_group )
/*MT6179*/                 {
/*MT6179*/                    case 1:
/*MT6179*/                       setting   = (agcptr->setting&0x3FFFFFC0)|((bit_no&0xF)<<6)|(0x1<<3)|0x5;  // reduce LNA Gain
/*MT6179*/                       real_gain-= (LNA_DROP_GAIN);
/*MT6179*/                       break;
/*MT6179*/                    case 2:
/*MT6179*/                       setting   = (agcptr->setting&0x3FFFFFC0)|((0x7)<<6)|(0x3<<3)|0x5;  // reduce LNA/TIA/LPF2 Gain
/*MT6179*/                       real_gain-= (LNA_DROP_GAIN+TIA_DROP_GAIN+(bit_no-7)*LPF2_DROP_GAIN);
/*MT6179*/                       break;
/*MT6179*/                    case 3:
/*MT6179*/                       setting   = (agcptr->setting&0x3FFFFFC0)|((0x7)<<6)|(0x3<<3)|0x6;  // reduce TIA Gain, increase LPF2 Gain
/*MT6179*/                       real_gain-= (TIA_DROP_GAIN+(bit_no-7)*LPF2_DROP_GAIN);
/*MT6179*/                       break;
/*MT6179*/                    case 4:
/*MT6179*/                       setting   = (agcptr->setting&0x3FFFFFC0)|(((bit_no-1)&0xF)<<6)|(0x7<<3)|0x5;  // reduce LNA/TIA/LPF2 Gain
/*MT6179*/                       real_gain-= (LNA_DROP_GAIN+TIA_DROP_GAIN+LPF2_DROP_GAIN);
/*MT6179*/                       break;
/*MT6179*/                    case 5:
/*MT6179*/                       setting   = (agcptr->setting&0x3FFFFFC0)|(((bit_no-1)&0xF)<<6)|(0x3<<3)|0x5;  // reduce LNA/LPF2 Gain
/*MT6179*/                       real_gain-= (LNA_DROP_GAIN+LPF2_DROP_GAIN);
/*MT6179*/                       break;
/*MT6179*/                    default:
/*MT6179*/                       setting   = agcptr->setting | ((bit_no&0xF)<<6);  
/*MT6179*/                       break;
/*MT6179*/                  } 
/*MT6179*/               }
/*MT6179*/            }
/*MT6179*/       }
/*MT6179*/    #endif
/*MT6179*/       else
/*MT6179*/       {  
/*MT6179*/          setting = agcptr->setting | ((bit_no&0xF)<<6);
/*MT6179*/       }
/*MT6179*/
/*MT6179*/       idx = (int)(setting&0x7);
/*MT6179*/    #if IS_2G_EXTERNAL_LNA_SUPPORT
/*MT6179*/       if( is_elna_usage )
/*MT6179*/       {
/*MT6179*/          if( idx==5 )      /* LNA_High    : G5 */
/*MT6179*/          {  lna_path_loss = 0;  }
/*MT6179*/          else if( idx==4 ) /* LNA_Middle : G4 */
/*MT6179*/          {  
/*MT6179*/             if( l1_obb_flag == 1 )
/*MT6179*/             {   lna_path_loss = (l1d_rf2.is_fhc) ? (0) : ((int)(lnaptr->gain_offset_middle_sawless-ofsptr->gain_offset));}
/*MT6179*/             else
/*MT6179*/             {   lna_path_loss = (l1d_rf2.is_fhc) ? (0) : ((int)(lnaptr->gain_offset_middle-ofsptr->gain_offset));} 
/*MT6179*/          }
/*MT6179*/          else              /* LNA_Low    : G1 */
/*MT6179*/          {  lna_path_loss = (l1d_rf2.is_fhc) ? (0) : ((int)(lnaptr->gain_offset_low-ofsptr->gain_offset));     }
/*MT6179*/       }
/*MT6179*/       else
/*MT6179*/    #endif
/*MT6179*/       {
/*MT6179*/          if( idx==6 )      /* LNA_High    : G6 */
/*MT6179*/          {  lna_path_loss = 0;  }
/*MT6179*/          else if( idx==5 ) /* LNA_Middle : G5*/
/*MT6179*/          {  
/*MT6179*/             if( l1_obb_flag == 1 )
/*MT6179*/             {   lna_path_loss = (l1d_rf2.is_fhc) ? (0) : ((int)(lnaptr->gain_offset_middle_sawless-ofsptr->gain_offset));}
/*MT6179*/             else
/*MT6179*/             {   lna_path_loss = (l1d_rf2.is_fhc) ? (0) : ((int)(lnaptr->gain_offset_middle-ofsptr->gain_offset));}
/*MT6179*/          }
/*MT6179*/          else              /* LNA_Low    : G1*/
/*MT6179*/          {  lna_path_loss = (l1d_rf2.is_fhc) ? (0) : ((int)(lnaptr->gain_offset_low-ofsptr->gain_offset));     }
/*MT6179*/       }
/*MT6179*/
/*MT6179*/
/*MT6179*/    #if IS_RX_POWER_OFFSET_SUPPORT
/*MT6179*/    /* get the arfcn section */
/*MT6179*/    ofsptr_offset = AGCLNA_PATHLOSS_OFFSET[rf_band];
/*MT6179*/    while( ofsptr_offset->max_arfcn>=0 )
/*MT6179*/    {  if( arfcn <= ofsptr_offset->max_arfcn )
/*MT6179*/       {  break;  }
/*MT6179*/       ofsptr_offset++;
/*MT6179*/    }
/*MT6179*/
/*MT6179*/
/*MT6179*/    if( rx_power_offset_enable )
/*MT6179*/    {
/*MT6179*/       if( ( L1D_CheckIfMetaMode() && ( meta_rx_power_offset_enable == 1 )) || // DUT In META mode and enable META mode compensation
/*MT6179*/           (L1D_CheckIfMetaMode() == 0) // DUT in normal mode, apply compensation
/*MT6179*/         )
/*MT6179*/       {
/*MT6179*/          /*idx = (int)(((agcptr->setting)>>5)&0x7);*/
/*MT6179*/    #if IS_2G_EXTERNAL_LNA_SUPPORT
/*MT6179*/       	if( is_elna_usage )
/*MT6179*/       	{
/*MT6179*/          	if( idx==5 )      /* LNA_High    : G5 */
/*MT6179*/          	{  lna_path_loss_offset = (int)(ofsptr_offset->gain_offset);  }
/*MT6179*/          	else if( idx==4 ) /* LNA_Middle : G4 */
/*MT6179*/          	{  lna_path_loss_offset = (int)(ofsptr_offset->gain_offset_middle);  }
/*MT6179*/          	else              /* LNA_Low    : G1 */
/*MT6179*/          	{  lna_path_loss_offset = (int)(ofsptr_offset->gain_offset_low);  }
/*MT6179*/       	}
/*MT6179*/       	else
/*MT6179*/    #endif
/*MT6179*/       	{
/*MT6179*/          	if( idx==6 )      /* LNA_High    : G6 */
/*MT6179*/          	{  lna_path_loss_offset = (int)(ofsptr_offset->gain_offset);  }
/*MT6179*/          	else if( idx==5 ) /* LNA_Middle : G5*/
/*MT6179*/          	{  lna_path_loss_offset = (int)(ofsptr_offset->gain_offset_middle);  }
/*MT6179*/          	else              /* LNA_Low    : G1*/
/*MT6179*/          	{  lna_path_loss_offset = (int)(ofsptr_offset->gain_offset_low);  }
/*MT6179*/       	}
/*MT6179*/       }
/*MT6179*/       else
/*MT6179*/       {
/*MT6179*/          lna_path_loss_offset = 0;
/*MT6179*/       }
/*MT6179*/       extern void L1D_RF_RPO_Trace( uint32 v1, uint32 v2, uint32 v3, uint32 v4, int32 v5, int32 v6 );
/*MT6179*/       L1D_RF_RPO_Trace( L1D_CheckIfMetaMode(), meta_rx_power_offset_enable, idx, rf_band, arfcn, lna_path_loss_offset);
/*MT6179*/    }
/*MT6179*/    #endif/*IS_RX_POWER_OFFSET_SUPPORT*/
/*MT6179*/
/*MT6179*/    #if IS_RX_POWER_OFFSET_SUPPORT
/*MT6179*/       real_gain -= (lna_path_loss_offset+lna_path_loss);
/*MT6179*/       real_gain -= lna_path_extra_loss;
/*MT6179*/    #else
/*MT6179*/       real_gain-=lna_path_loss;  // choose pathloss after LNA Mode selected according Nomral/HRD/IBBD
/*MT6179*/       real_gain -= lna_path_extra_loss;
/*MT6179*/    #endif/*IS_RX_POWER_OFFSET_SUPPORT*/
/*MT6179*/    }
/*MT6179*/
/*MT6179*/    #if IS_RSSI_TC_SUPPORT
/*MT6179*/    if(L1D_CheckIfMetaMode()==0)
/*MT6179*/    {  real_gain-=L1D_RF_CompensateRXGain( l1d_rf.band );  }  // Compensate RX Gain acoording to temperature when normal mode
/*MT6179*/    #endif
/*MT6179*/    
/*MT6179*/    *gain_setting = setting;
/*MT6179*/    return( real_gain );
/*MT6179*/ }
/*MT6179*/
   #if IS_W_CANCELLATION_SUPPORT
/*MT6179*/ unsigned short   L1D_RF_FindGainStep( unsigned long gain_setting, FrequencyBand rf_band  )
/*MT6179*/ {
/*MT6179*/    unsigned short gain_step = gain_setting & 0x3FF;
/*MT6179*/
/*MT6179*/    #if IS_2G_EXTERNAL_LNA_SUPPORT 
/*MT6179*/    if( L1D_RF_Check_If_ExternalLNA(rf_band) )
/*MT6179*/    {
/*MT6179*/       switch( gain_step )
/*MT6179*/       {
/*MT6179*/          case 0x20D:
/*MT6179*/             return 10;
/*MT6179*/          case 0x15D:
/*MT6179*/             return 9;
/*MT6179*/          case 0x1FC: 
/*MT6179*/             return 8;
/*MT6179*/          case 0x14D:
/*MT6179*/             return 7;
/*MT6179*/          case 0x19D:
/*MT6179*/             return 6;
/*MT6179*/          case 0x11D:
/*MT6179*/             return 5;
/*MT6179*/          case 0x15C:
/*MT6179*/             return 4;
/*MT6179*/          case 0x11C:
/*MT6179*/             return 3;
/*MT6179*/          case 0x1C9:
/*MT6179*/             return 2;
/*MT6179*/          case 0x189:
/*MT6179*/             return 1;
/*MT6179*/          default:
/*MT6179*/             return 0;
/*MT6179*/       }
/*MT6179*/    }
/*MT6179*/    else
/*MT6179*/    #endif
/*MT6179*/    {
/*MT6179*/       if ( L1D_RF_QUERY_CHIP_VERSION() == MML1_RF_IS_E1 )
/*MT6179*/       {
/*MT6179*/          switch( gain_step )
/*MT6179*/          {
/*MT6179*/             case 0x206:
/*MT6179*/                return 13;
/*MT6179*/             case 0x1CE:
/*MT6179*/                return 12;
/*MT6179*/             case 0x1C6:
/*MT6179*/                return 11;
/*MT6179*/             case 0x1CD:
/*MT6179*/                return 10;
/*MT6179*/             case 0x20E: 
/*MT6179*/                return 9;
/*MT6179*/             case 0x18E:
/*MT6179*/                return 8;
/*MT6179*/             case 0x14E:
/*MT6179*/                return 7;
/*MT6179*/             case 0x19E:
/*MT6179*/                return 6;
/*MT6179*/             case 0x17D:
/*MT6179*/                return 5;
/*MT6179*/             case 0x1DD:
/*MT6179*/                return 4;
/*MT6179*/             case 0x19D:
/*MT6179*/                return 3;
/*MT6179*/             case 0x15D:
/*MT6179*/                return 2;
/*MT6179*/             case 0x11D:
/*MT6179*/                return 1;
/*MT6179*/             default:
/*MT6179*/                return 0;
/*MT6179*/          }
/*MT6179*/       }
/*MT6179*/       else
/*MT6179*/       {
/*MT6179*/          switch( gain_step )
/*MT6179*/          {
/*MT6179*/             case 0x20E:
/*MT6179*/                return 12;
/*MT6179*/             case 0x20D:
/*MT6179*/                return 11;
/*MT6179*/             case 0x1CE:
/*MT6179*/                return 10;
/*MT6179*/             case 0x1DD:
/*MT6179*/                return 9;
/*MT6179*/             case 0x1DE: 
/*MT6179*/                return 8;
/*MT6179*/             case 0x18E:
/*MT6179*/                return 7;
/*MT6179*/             case 0x14E:
/*MT6179*/                return 6;
/*MT6179*/             case 0x19E:
/*MT6179*/                return 5;
/*MT6179*/             case 0x17D:
/*MT6179*/                return 4;
/*MT6179*/             case 0x15D:
/*MT6179*/                return 3;
/*MT6179*/             case 0x19D:
/*MT6179*/                return 2;
/*MT6179*/             case 0x11D:
/*MT6179*/                return 1;
/*MT6179*/             default:
/*MT6179*/                return 0;
/*MT6179*/          }
/*MT6179*/       }
/*MT6179*/    }
/*MT6179*/ }
   #endif
#endif

#if IS_RF_MT6177L
/*MT6177L*/
/*MT6177L*/ #define  GAIN_STEP              3
/*MT6177L*/ #define  PVOFSL                 34
/*MT6177L*/ #define  PVOFSH                 34
/*MT6177L*/ #define  LPF2_DROP_GAIN         ROUNDINT(3*(PWRRES))
/*MT6177L*/ #define  TIA_DROP_GAIN          ROUNDINT(6*(PWRRES))
/*MT6177L*/ #define  LNA_DROP_GAIN          ROUNDINT(6*(PWRRES))
/*MT6177L*/ #define  HRD_LB_THRESHOLD       ROUNDINT((44.6-PVOFSL)*(PWRRES))
/*MT6177L*/ #define  HRD_HB_THRESHOLD       ROUNDINT((44.6-PVOFSH)*(PWRRES))
/*MT6177L*/ #define  IBBD_LB_THRESHOLD      ROUNDINT((53.6-PVOFSL)*(PWRRES))
/*MT6177L*/ #define  IBBD_HB_THRESHOLD      ROUNDINT((53.6-PVOFSH)*(PWRRES))
/*MT6177L*/ #define  RF_GSM850_MAXGAIN      (( 62.6-PVOFSL )*(PWRRES))
/*MT6177L*/ #define  RF_GSM850_MINGAIN      (( -3.4-PVOFSL )*(PWRRES))
/*MT6177L*/ #define  RF_GSM_MAXGAIN         (( 62.6-PVOFSL )*(PWRRES))
/*MT6177L*/ #define  RF_GSM_MINGAIN         (( -3.4-PVOFSL )*(PWRRES))
/*MT6177L*/ #define  RF_DCS_MAXGAIN         (( 62.6-PVOFSH )*(PWRRES))
/*MT6177L*/ #define  RF_DCS_MINGAIN         (( -3.4-PVOFSH )*(PWRRES))
/*MT6177L*/ #define  RF_PCS_MAXGAIN         (( 62.6-PVOFSH )*(PWRRES))
/*MT6177L*/ #define  RF_PCS_MINGAIN         (( -3.4-PVOFSH )*(PWRRES))
/*MT6177L*/
/*MT6177L*/ /* GSM850....................................................................*/
/*MT6177L*/
/*MT6177L*/ const  sL1DAGCDATA  AGC_TABLE_GSM850[7] =
/*MT6177L*/ {  {  GBOUND(( 59.6-PVOFSL ),( 56.6-PVOFSL ) ), GC_A( 7,(  59.6-PVOFSL ) ), BSI_CW(0x14E, 0x00006) },  // Orion+ has PRX1 & DRX1 (CW334 & CW336), use CW334 as defualt setting
/*MT6177L*/    {  GBOUND(( 47.6-PVOFSL ),( 44.6-PVOFSL ) ), GC_A( 5,(  47.6-PVOFSL ) ), BSI_CW(0x14E, 0x0000E) },
/*MT6177L*/    {  GBOUND(( 44.6-PVOFSL ),( 41.6-PVOFSL ) ), GC_A( 6,(  44.6-PVOFSL ) ), BSI_CW(0x14E, 0x0001E) },
/*MT6177L*/    {  GBOUND(( 29.6-PVOFSL ),( 26.6-PVOFSL ) ), GC_A( 3,(  29.6-PVOFSL ) ), BSI_CW(0x14E, 0x0001D) },
/*MT6177L*/    {  GBOUND(( 17.6-PVOFSL ),( 14.6-PVOFSL ) ), GC_A( 5,(  17.6-PVOFSL ) ), BSI_CW(0x14E, 0x00009) },
/*MT6177L*/    {  GBOUND((  5.6-PVOFSL ),(  2.6-PVOFSL ) ), GC_A( 3,(   5.6-PVOFSL ) ), BSI_CW(0x14E, 0x00019) },
/*MT6177L*/    {  GBOUND(( -3.4-PVOFSL ),( -3.4-PVOFSL ) ), GC_A( 2,(  -3.4-PVOFSL ) ), BSI_CW(0x14E, 0x00039) },
/*MT6177L*/ };
/*MT6177L*/
/*MT6177L*/ /* GSM900....................................................................*/
/*MT6177L*/
/*MT6177L*/ const  sL1DAGCDATA  AGC_TABLE_GSM900[7]  =
/*MT6177L*/ {  {  GBOUND(( 59.6-PVOFSL ),( 56.6-PVOFSL ) ), GC_A( 7,(  59.6-PVOFSL ) ), BSI_CW(0x14E, 0x00006) },  // Orion+ has PRX1 & DRX1 (CW334 & CW336), use CW334 as defualt setting
/*MT6177L*/    {  GBOUND(( 47.6-PVOFSL ),( 44.6-PVOFSL ) ), GC_A( 5,(  47.6-PVOFSL ) ), BSI_CW(0x14E, 0x0000E) },
/*MT6177L*/    {  GBOUND(( 44.6-PVOFSL ),( 41.6-PVOFSL ) ), GC_A( 6,(  44.6-PVOFSL ) ), BSI_CW(0x14E, 0x0001E) },
/*MT6177L*/    {  GBOUND(( 29.6-PVOFSL ),( 26.6-PVOFSL ) ), GC_A( 3,(  29.6-PVOFSL ) ), BSI_CW(0x14E, 0x0001D) },
/*MT6177L*/    {  GBOUND(( 17.6-PVOFSL ),( 14.6-PVOFSL ) ), GC_A( 5,(  17.6-PVOFSL ) ), BSI_CW(0x14E, 0x00009) },
/*MT6177L*/    {  GBOUND((  5.6-PVOFSL ),(  2.6-PVOFSL ) ), GC_A( 3,(   5.6-PVOFSL ) ), BSI_CW(0x14E, 0x00019) },
/*MT6177L*/    {  GBOUND(( -3.4-PVOFSL ),( -3.4-PVOFSL ) ), GC_A( 2,(  -3.4-PVOFSL ) ), BSI_CW(0x14E, 0x00039) },
/*MT6177L*/ };
/*MT6177L*/
/*MT6177L*/ /* DCS1800...................................................................*/
/*MT6177L*/
/*MT6177L*/ const  sL1DAGCDATA  AGC_TABLE_DCS1800[7]  =
/*MT6177L*/ {  {  GBOUND(( 59.6-PVOFSL ),( 56.6-PVOFSL ) ), GC_A( 7,(  59.6-PVOFSL ) ), BSI_CW(0x14E, 0x00006) },  // Orion+ has PRX1 & DRX1 (CW334 & CW336), use CW334 as defualt setting
/*MT6177L*/    {  GBOUND(( 47.6-PVOFSL ),( 44.6-PVOFSL ) ), GC_A( 5,(  47.6-PVOFSL ) ), BSI_CW(0x14E, 0x0000E) },
/*MT6177L*/    {  GBOUND(( 44.6-PVOFSL ),( 41.6-PVOFSL ) ), GC_A( 6,(  44.6-PVOFSL ) ), BSI_CW(0x14E, 0x0001E) },
/*MT6177L*/    {  GBOUND(( 29.6-PVOFSL ),( 26.6-PVOFSL ) ), GC_A( 3,(  29.6-PVOFSL ) ), BSI_CW(0x14E, 0x0001D) },
/*MT6177L*/    {  GBOUND(( 17.6-PVOFSL ),( 14.6-PVOFSL ) ), GC_A( 5,(  17.6-PVOFSL ) ), BSI_CW(0x14E, 0x00009) },
/*MT6177L*/    {  GBOUND((  5.6-PVOFSL ),(  2.6-PVOFSL ) ), GC_A( 3,(   5.6-PVOFSL ) ), BSI_CW(0x14E, 0x00019) },
/*MT6177L*/    {  GBOUND(( -3.4-PVOFSL ),( -3.4-PVOFSL ) ), GC_A( 2,(  -3.4-PVOFSL ) ), BSI_CW(0x14E, 0x00039) },
/*MT6177L*/ };
/*MT6177L*/
/*MT6177L*/ /* PCS1900...................................................................*/
/*MT6177L*/
/*MT6177L*/ const  sL1DAGCDATA  AGC_TABLE_PCS1900[7]  =
/*MT6177L*/ {  {  GBOUND(( 59.6-PVOFSL ),( 56.6-PVOFSL ) ), GC_A( 7,(  59.6-PVOFSL ) ), BSI_CW(0x14E, 0x00006) },  // Orion+ has PRX1 & DRX1 (CW334 & CW336), use CW334 as defualt setting
/*MT6177L*/    {  GBOUND(( 47.6-PVOFSL ),( 44.6-PVOFSL ) ), GC_A( 5,(  47.6-PVOFSL ) ), BSI_CW(0x14E, 0x0000E) },
/*MT6177L*/    {  GBOUND(( 44.6-PVOFSL ),( 41.6-PVOFSL ) ), GC_A( 6,(  44.6-PVOFSL ) ), BSI_CW(0x14E, 0x0001E) },
/*MT6177L*/    {  GBOUND(( 29.6-PVOFSL ),( 26.6-PVOFSL ) ), GC_A( 3,(  29.6-PVOFSL ) ), BSI_CW(0x14E, 0x0001D) },
/*MT6177L*/    {  GBOUND(( 17.6-PVOFSL ),( 14.6-PVOFSL ) ), GC_A( 5,(  17.6-PVOFSL ) ), BSI_CW(0x14E, 0x00009) },
/*MT6177L*/    {  GBOUND((  5.6-PVOFSL ),(  2.6-PVOFSL ) ), GC_A( 3,(   5.6-PVOFSL ) ), BSI_CW(0x14E, 0x00019) },
/*MT6177L*/    {  GBOUND(( -3.4-PVOFSL ),( -3.4-PVOFSL ) ), GC_A( 2,(  -3.4-PVOFSL ) ), BSI_CW(0x14E, 0x00039) },
/*MT6177L*/ };
/*MT6177L*/
/*MT6177L*/ /*...........................................................................*/
/*MT6177L*/
/*MT6177L*/ const  sL1DGAINRANGE GAIN_RANGE_TABLE[] =
/*MT6177L*/ {  {                   0,                      0    }, /*#FrequencyBand400  */
/*MT6177L*/    { (int)RF_GSM850_MAXGAIN, (int)RF_GSM850_MINGAIN }, /* FrequencyBand850  */
/*MT6177L*/    { (int)RF_GSM_MAXGAIN,    (int)RF_GSM_MINGAIN    }, /* FrequencyBand900  */
/*MT6177L*/    { (int)RF_DCS_MAXGAIN,    (int)RF_DCS_MINGAIN    }, /* FrequencyBand1800 */
/*MT6177L*/    { (int)RF_PCS_MAXGAIN,    (int)RF_PCS_MINGAIN    }, /* FrequencyBand1900 */
/*MT6177L*/ };
/*MT6177L*/
/*MT6177L*/ const  sL1DAGCDATA *const  AGC_TABLE[] =
/*MT6177L*/ {  0,                                              /*#FrequencyBand400  */
/*MT6177L*/    AGC_TABLE_GSM850,                               /* FrequencyBand850  */
/*MT6177L*/    AGC_TABLE_GSM900,                               /* FrequencyBand900  */
/*MT6177L*/    AGC_TABLE_DCS1800,                              /* FrequencyBand1800 */
/*MT6177L*/    AGC_TABLE_PCS1900,                              /* FrequencyBand1900 */
/*MT6177L*/ };
/*MT6177L*/
   #if IS_2G_EXTERNAL_LNA_SUPPORT
/*MT6177L*/ #define  HRD_LB_THRESHOLD_ELNA        ROUNDINT((41.6-PVOFSL)*(PWRRES))
/*MT6177L*/ #define  HRD_HB_THRESHOLD_ELNA        ROUNDINT((41.6-PVOFSH)*(PWRRES))
/*MT6177L*/ #define  IBBD_LB_THRESHOLD_ELNA       ROUNDINT((50.6-PVOFSL)*(PWRRES))
/*MT6177L*/ #define  IBBD_HB_THRESHOLD_ELNA       ROUNDINT((50.6-PVOFSH)*(PWRRES))
/*MT6177L*/ #define  RF_GSM850_MAXGAIN_ELNA       (( 68.6-PVOFSL )*(PWRRES))
/*MT6177L*/ #define  RF_GSM850_MINGAIN_ELNA       ((  8.6-PVOFSL )*(PWRRES))
/*MT6177L*/ #define  RF_GSM_MAXGAIN_ELNA          (( 68.6-PVOFSL )*(PWRRES))
/*MT6177L*/ #define  RF_GSM_MINGAIN_ELNA          ((  8.6-PVOFSL )*(PWRRES))
/*MT6177L*/ #define  RF_DCS_MAXGAIN_ELNA          (( 68.6-PVOFSH )*(PWRRES))
/*MT6177L*/ #define  RF_DCS_MINGAIN_ELNA          ((  8.6-PVOFSH )*(PWRRES))
/*MT6177L*/ #define  RF_PCS_MAXGAIN_ELNA          (( 68.6-PVOFSH )*(PWRRES))
/*MT6177L*/ #define  RF_PCS_MINGAIN_ELNA          ((  8.6-PVOFSH )*(PWRRES))
/*MT6177L*/
/*MT6177L*/ /*Real RX gain and bitno for fixed RX gain setting, index = 0 or 1 of AGC_TABLE */
/*MT6177L*/ #define  RF_GSM850_Sec0_GAIN_ELNA       ROUNDINT(( 68.6-PVOFSL )*(PWRRES))
/*MT6177L*/ #define  RF_GSM850_Sec1_GAIN_ELNA       ROUNDINT(( 50.6-PVOFSL )*(PWRRES))
/*MT6177L*/ #define  RF_GSM_Sec0_GAIN_ELNA          ROUNDINT(( 68.6-PVOFSL )*(PWRRES))
/*MT6177L*/ #define  RF_GSM_Sec1_GAIN_ELNA          ROUNDINT(( 50.6-PVOFSL )*(PWRRES))
/*MT6177L*/ #define  RF_DCS_Sec0_GAIN_ELNA          ROUNDINT(( 68.6-PVOFSH )*(PWRRES))
/*MT6177L*/ #define  RF_DCS_Sec1_GAIN_ELNA          ROUNDINT(( 50.6-PVOFSH )*(PWRRES))
/*MT6177L*/ #define  RF_PCS_Sec0_GAIN_ELNA          ROUNDINT(( 68.6-PVOFSH )*(PWRRES))
/*MT6177L*/ #define  RF_PCS_Sec1_GAIN_ELNA          ROUNDINT(( 50.6-PVOFSH )*(PWRRES))
/*MT6177L*/ #define  RF_GSM850_Sec0_BitNo_ELNA      8
/*MT6177L*/ #define  RF_GSM850_Sec1_BitNo_ELNA      4
/*MT6177L*/ #define  RF_GSM_Sec0_BitNo_ELNA         8
/*MT6177L*/ #define  RF_GSM_Sec1_BitNo_ELNA         4
/*MT6177L*/ #define  RF_DCS_Sec0_BitNo_ELNA         8
/*MT6177L*/ #define  RF_DCS_Sec1_BitNo_ELNA         4
/*MT6177L*/ #define  RF_PCS_Sec0_BitNo_ELNA         8
/*MT6177L*/ #define  RF_PCS_Sec1_BitNo_ELNA         4
/*MT6177L*/
/*MT6177L*/ /* GSM850....................................................................*/
/*MT6177L*/ /*Need to fix RX gain setting for index = 0 and 1, w/o extrapolation */
/*MT6177L*/ const  sL1DAGCDATA  AGC_TABLE_GSM850_ELNA [7] =
/*MT6177L*/ {  {  GBOUND(( 68.6-PVOFSL ),( 50.6-PVOFSL ) ), GC_A( 8,(  68.6-PVOFSL ) ), BSI_CW(0x14E, 0x0000E) },  // Orion+ has PRX1 & DRX1 (CW334 & CW336), use CW334 as defualt setting
/*MT6177L*/    {  GBOUND(( 50.6-PVOFSL ),( 47.6-PVOFSL ) ), GC_A( 4,(  50.6-PVOFSL ) ), BSI_CW(0x14E, 0x0000D) },
/*MT6177L*/    {  GBOUND(( 41.6-PVOFSL ),( 38.6-PVOFSL ) ), GC_A( 3,(  41.6-PVOFSL ) ), BSI_CW(0x14E, 0x0001D) },
/*MT6177L*/    {  GBOUND(( 35.6-PVOFSL ),( 32.6-PVOFSL ) ), GC_A( 3,(  35.6-PVOFSL ) ), BSI_CW(0x14E, 0x0001C) },
/*MT6177L*/    {  GBOUND(( 26.6-PVOFSL ),( 23.6-PVOFSL ) ), GC_A( 4,(  26.6-PVOFSL ) ), BSI_CW(0x14E, 0x00009) },
/*MT6177L*/    {  GBOUND(( 17.6-PVOFSL ),( 14.6-PVOFSL ) ), GC_A( 3,(  17.6-PVOFSL ) ), BSI_CW(0x14E, 0x00019) },
/*MT6177L*/    {  GBOUND((  8.6-PVOFSL ),(  8.6-PVOFSL ) ), GC_A( 2,(   8.6-PVOFSL ) ), BSI_CW(0x14E, 0x00039) },
/*MT6177L*/ };
/*MT6177L*/
/*MT6177L*/ /* GSM900....................................................................*/
/*MT6177L*/ /*Need to fix RX gain setting for index = 0 and 1, w/o extrapolation */
/*MT6177L*/ const  sL1DAGCDATA  AGC_TABLE_GSM900_ELNA [7] =
/*MT6177L*/ {  {  GBOUND(( 68.6-PVOFSL ),( 50.6-PVOFSL ) ), GC_A( 8,(  68.6-PVOFSL ) ), BSI_CW(0x14E, 0x0000E) },  // Orion+ has PRX1 & DRX1 (CW334 & CW336), use CW334 as defualt setting
/*MT6177L*/    {  GBOUND(( 50.6-PVOFSL ),( 47.6-PVOFSL ) ), GC_A( 4,(  50.6-PVOFSL ) ), BSI_CW(0x14E, 0x0000D) },
/*MT6177L*/    {  GBOUND(( 41.6-PVOFSL ),( 38.6-PVOFSL ) ), GC_A( 3,(  41.6-PVOFSL ) ), BSI_CW(0x14E, 0x0001D) },
/*MT6177L*/    {  GBOUND(( 35.6-PVOFSL ),( 32.6-PVOFSL ) ), GC_A( 3,(  35.6-PVOFSL ) ), BSI_CW(0x14E, 0x0001C) },
/*MT6177L*/    {  GBOUND(( 26.6-PVOFSL ),( 23.6-PVOFSL ) ), GC_A( 4,(  26.6-PVOFSL ) ), BSI_CW(0x14E, 0x00009) },
/*MT6177L*/    {  GBOUND(( 17.6-PVOFSL ),( 14.6-PVOFSL ) ), GC_A( 3,(  17.6-PVOFSL ) ), BSI_CW(0x14E, 0x00019) },
/*MT6177L*/    {  GBOUND((  8.6-PVOFSL ),(  8.6-PVOFSL ) ), GC_A( 2,(   8.6-PVOFSL ) ), BSI_CW(0x14E, 0x00039) },
/*MT6177L*/ };
/*MT6177L*/
/*MT6177L*/ /* DCS1800...................................................................*/
/*MT6177L*/ /*Need to fix RX gain setting for index = 0 and 1, w/o extrapolation */
/*MT6177L*/ const  sL1DAGCDATA  AGC_TABLE_DCS1800_ELNA [7] =
/*MT6177L*/ {  {  GBOUND(( 68.6-PVOFSL ),( 50.6-PVOFSL ) ), GC_A( 8,(  68.6-PVOFSL ) ), BSI_CW(0x14E, 0x0000E) },  // Orion+ has PRX1 & DRX1 (CW334 & CW336), use CW334 as defualt setting
/*MT6177L*/    {  GBOUND(( 50.6-PVOFSL ),( 47.6-PVOFSL ) ), GC_A( 4,(  50.6-PVOFSL ) ), BSI_CW(0x14E, 0x0000D) },
/*MT6177L*/    {  GBOUND(( 41.6-PVOFSL ),( 38.6-PVOFSL ) ), GC_A( 3,(  41.6-PVOFSL ) ), BSI_CW(0x14E, 0x0001D) },
/*MT6177L*/    {  GBOUND(( 35.6-PVOFSL ),( 32.6-PVOFSL ) ), GC_A( 3,(  35.6-PVOFSL ) ), BSI_CW(0x14E, 0x0001C) },
/*MT6177L*/    {  GBOUND(( 26.6-PVOFSL ),( 23.6-PVOFSL ) ), GC_A( 4,(  26.6-PVOFSL ) ), BSI_CW(0x14E, 0x00009) },
/*MT6177L*/    {  GBOUND(( 17.6-PVOFSL ),( 14.6-PVOFSL ) ), GC_A( 3,(  17.6-PVOFSL ) ), BSI_CW(0x14E, 0x00019) },
/*MT6177L*/    {  GBOUND((  8.6-PVOFSL ),(  8.6-PVOFSL ) ), GC_A( 2,(   8.6-PVOFSL ) ), BSI_CW(0x14E, 0x00039) },
/*MT6177L*/ };
/*MT6177L*/
/*MT6177L*/ /* PCS1900...................................................................*/
/*MT6177L*/ /*Need to fix RX gain setting for index = 0 and 1, w/o extrapolation */
/*MT6177L*/ const  sL1DAGCDATA  AGC_TABLE_PCS1900_ELNA [7] =
/*MT6177L*/ {  {  GBOUND(( 68.6-PVOFSL ),( 50.6-PVOFSL ) ), GC_A( 8,(  68.6-PVOFSL ) ), BSI_CW(0x14E, 0x0000E) },  // Orion+ has PRX1 & DRX1 (CW334 & CW336), use CW334 as defualt setting
/*MT6177L*/    {  GBOUND(( 50.6-PVOFSL ),( 47.6-PVOFSL ) ), GC_A( 4,(  50.6-PVOFSL ) ), BSI_CW(0x14E, 0x0000D) },
/*MT6177L*/    {  GBOUND(( 41.6-PVOFSL ),( 38.6-PVOFSL ) ), GC_A( 3,(  41.6-PVOFSL ) ), BSI_CW(0x14E, 0x0001D) },
/*MT6177L*/    {  GBOUND(( 35.6-PVOFSL ),( 32.6-PVOFSL ) ), GC_A( 3,(  35.6-PVOFSL ) ), BSI_CW(0x14E, 0x0001C) },
/*MT6177L*/    {  GBOUND(( 26.6-PVOFSL ),( 23.6-PVOFSL ) ), GC_A( 4,(  26.6-PVOFSL ) ), BSI_CW(0x14E, 0x00009) },
/*MT6177L*/    {  GBOUND(( 17.6-PVOFSL ),( 14.6-PVOFSL ) ), GC_A( 3,(  17.6-PVOFSL ) ), BSI_CW(0x14E, 0x00019) },
/*MT6177L*/    {  GBOUND((  8.6-PVOFSL ),(  8.6-PVOFSL ) ), GC_A( 2,(   8.6-PVOFSL ) ), BSI_CW(0x14E, 0x00039) },
/*MT6177L*/ };
/*MT6177L*/
/*MT6177L*/ /*...........................................................................*/
/*MT6177L*/
/*MT6177L*/ const  sL1DGAINRANGE GAIN_RANGE_TABLE_ELNA [] =
/*MT6177L*/ {  {                   0,                      0                }, /*#FrequencyBand400  */
/*MT6177L*/    { (int)RF_GSM850_MAXGAIN_ELNA , (int)RF_GSM850_MINGAIN_ELNA  }, /* FrequencyBand850  */
/*MT6177L*/    { (int)RF_GSM_MAXGAIN_ELNA ,    (int)RF_GSM_MINGAIN_ELNA     }, /* FrequencyBand900  */
/*MT6177L*/    { (int)RF_DCS_MAXGAIN_ELNA ,    (int)RF_DCS_MINGAIN_ELNA     }, /* FrequencyBand1800 */
/*MT6177L*/    { (int)RF_PCS_MAXGAIN_ELNA ,    (int)RF_PCS_MINGAIN_ELNA     }, /* FrequencyBand1900 */
/*MT6177L*/ };
/*MT6177L*/
/*MT6177L*/ const  sL1DAGCDATA *const  AGC_TABLE_ELNA[] =
/*MT6177L*/ {  0,                                              /*#FrequencyBand400  */
/*MT6177L*/    AGC_TABLE_GSM850_ELNA,                               /* FrequencyBand850  */
/*MT6177L*/    AGC_TABLE_GSM900_ELNA,                               /* FrequencyBand900  */
/*MT6177L*/    AGC_TABLE_DCS1800_ELNA,                              /* FrequencyBand1800 */
/*MT6177L*/    AGC_TABLE_PCS1900_ELNA,                              /* FrequencyBand1900 */
/*MT6177L*/ };
/*MT6177L*/
/*MT6177L*/ /*Fix RX gain setting, w/o extrapolation for index = 0 of AGC_TABLE */
/*MT6177L*/ const  sL1DSection GAIN_Sec0_ELNA [] =
/*MT6177L*/ {  {                   0,                      0                     }, /*#FrequencyBand400  */
/*MT6177L*/    { (int)RF_GSM850_Sec0_GAIN_ELNA , (int)RF_GSM850_Sec0_BitNo_ELNA  }, /* FrequencyBand850  */
/*MT6177L*/    { (int)RF_GSM_Sec0_GAIN_ELNA ,    (int)RF_GSM_Sec0_BitNo_ELNA     }, /* FrequencyBand900  */
/*MT6177L*/    { (int)RF_DCS_Sec0_GAIN_ELNA ,    (int)RF_DCS_Sec0_BitNo_ELNA     }, /* FrequencyBand1800 */
/*MT6177L*/    { (int)RF_PCS_Sec0_GAIN_ELNA ,    (int)RF_PCS_Sec0_BitNo_ELNA     }, /* FrequencyBand1900 */
/*MT6177L*/ };
/*MT6177L*/ /*Fix RX gain setting, w/o extrapolation for index = 1 of AGC_TABLE */
/*MT6177L*/ const  sL1DSection GAIN_Sec1_ELNA [] =
/*MT6177L*/ {  {                   0,                      0                     }, /*#FrequencyBand400  */
/*MT6177L*/    { (int)RF_GSM850_Sec1_GAIN_ELNA , (int)RF_GSM850_Sec1_BitNo_ELNA  }, /* FrequencyBand850  */
/*MT6177L*/    { (int)RF_GSM_Sec1_GAIN_ELNA ,    (int)RF_GSM_Sec1_BitNo_ELNA     }, /* FrequencyBand900  */
/*MT6177L*/    { (int)RF_DCS_Sec1_GAIN_ELNA ,    (int)RF_DCS_Sec1_BitNo_ELNA     }, /* FrequencyBand1800 */
/*MT6177L*/    { (int)RF_PCS_Sec1_GAIN_ELNA ,    (int)RF_PCS_Sec1_BitNo_ELNA     }, /* FrequencyBand1900 */
/*MT6177L*/ };
   #endif //IS_2G_EXTERNAL_LNA_SUPPORT
   #if IS_2G_EXTERNAL_LNA_BYPASS_SUPPORT
/*MT6177L*/ #define  HRD_LB_THRESHOLD_ELNA_BYPASS        ROUNDINT((41.6-PVOFSL)*(PWRRES))
/*MT6177L*/ #define  HRD_HB_THRESHOLD_ELNA_BYPASS        ROUNDINT((41.6-PVOFSH)*(PWRRES))
/*MT6177L*/ #define  IBBD_LB_THRESHOLD_ELNA_BYPASS       ROUNDINT((50.6-PVOFSL)*(PWRRES))
/*MT6177L*/ #define  IBBD_HB_THRESHOLD_ELNA_BYPASS       ROUNDINT((50.6-PVOFSH)*(PWRRES))
/*MT6177L*/ #define  RF_GSM850_MAXGAIN_ELNA_BYPASS       (( 68.6-PVOFSL )*(PWRRES))
/*MT6177L*/ #define  RF_GSM850_MINGAIN_ELNA_BYPASS       (( -6.4-PVOFSL )*(PWRRES))/*Modify for BYPASS*/
/*MT6177L*/ #define  RF_GSM_MAXGAIN_ELNA_BYPASS          (( 68.6-PVOFSL )*(PWRRES))
/*MT6177L*/ #define  RF_GSM_MINGAIN_ELNA_BYPASS          (( -6.4-PVOFSL )*(PWRRES))/*Modify for BYPASS*/
/*MT6177L*/ #define  RF_DCS_MAXGAIN_ELNA_BYPASS          (( 68.6-PVOFSH )*(PWRRES))
/*MT6177L*/ #define  RF_DCS_MINGAIN_ELNA_BYPASS          (( -6.4-PVOFSH )*(PWRRES))/*Modify for BYPASS*/
/*MT6177L*/ #define  RF_PCS_MAXGAIN_ELNA_BYPASS          (( 68.6-PVOFSH )*(PWRRES))
/*MT6177L*/ #define  RF_PCS_MINGAIN_ELNA_BYPASS          (( -6.4-PVOFSH )*(PWRRES))/*Modify for BYPASS*/
/*MT6177L*/
/*MT6177L*/ /*The last group index for ON ELNA */
/*MT6177L*/ const unsigned short  LAST_GROUP_FOR_ELNA_ON [5] = /* GSM400 GSM850 GSM900 DCS1800 PCS1900*/
/*MT6177L*/ {0, 6, 6, 6, 6};
/*MT6177L*/
/*MT6177L*/
/*MT6177L*/ /*Real RX gain and bitno for fixed RX gain setting, index = 0 or 1 of AGC_TABLE */
/*MT6177L*/ #define  RF_GSM850_Sec0_GAIN_ELNA_BYPASS       ROUNDINT(( 68.6-PVOFSL )*(PWRRES))
/*MT6177L*/ #define  RF_GSM850_Sec1_GAIN_ELNA_BYPASS       ROUNDINT(( 50.6-PVOFSL )*(PWRRES))
/*MT6177L*/ #define  RF_GSM_Sec0_GAIN_ELNA_BYPASS          ROUNDINT(( 68.6-PVOFSL )*(PWRRES))
/*MT6177L*/ #define  RF_GSM_Sec1_GAIN_ELNA_BYPASS          ROUNDINT(( 50.6-PVOFSL )*(PWRRES))
/*MT6177L*/ #define  RF_DCS_Sec0_GAIN_ELNA_BYPASS          ROUNDINT(( 68.6-PVOFSH )*(PWRRES))
/*MT6177L*/ #define  RF_DCS_Sec1_GAIN_ELNA_BYPASS          ROUNDINT(( 50.6-PVOFSH )*(PWRRES))
/*MT6177L*/ #define  RF_PCS_Sec0_GAIN_ELNA_BYPASS          ROUNDINT(( 68.6-PVOFSH )*(PWRRES))
/*MT6177L*/ #define  RF_PCS_Sec1_GAIN_ELNA_BYPASS          ROUNDINT(( 50.6-PVOFSH )*(PWRRES))
/*MT6177L*/ #define  RF_GSM850_Sec0_BitNo_ELNA_BYPASS      8
/*MT6177L*/ #define  RF_GSM850_Sec1_BitNo_ELNA_BYPASS      4
/*MT6177L*/ #define  RF_GSM_Sec0_BitNo_ELNA_BYPASS         8
/*MT6177L*/ #define  RF_GSM_Sec1_BitNo_ELNA_BYPASS         4
/*MT6177L*/ #define  RF_DCS_Sec0_BitNo_ELNA_BYPASS         8
/*MT6177L*/ #define  RF_DCS_Sec1_BitNo_ELNA_BYPASS         4
/*MT6177L*/ #define  RF_PCS_Sec0_BitNo_ELNA_BYPASS         8
/*MT6177L*/ #define  RF_PCS_Sec1_BitNo_ELNA_BYPASS         4
/*MT6177L*/
/*MT6177L*/ /* GSM850....................................................................*/
/*MT6177L*/ /*Need to fix RX gain setting for index = 0 and 1, w/o extrapolation */
/*MT6177L*/ const  sL1DAGCDATA  AGC_TABLE_GSM850_ELNA_BYPASS [9] =
/*MT6177L*/ {  {  GBOUND(( 68.6-PVOFSL ),( 50.6-PVOFSL ) ), GC_A( 8,(  68.6-PVOFSL ) ), BSI_CW(0x14E, 0x0000E) },  // Orion+ has PRX1 & DRX1 (CW334 & CW336), use CW334 as defualt setting
/*MT6177L*/    {  GBOUND(( 50.6-PVOFSL ),( 47.6-PVOFSL ) ), GC_A( 4,(  50.6-PVOFSL ) ), BSI_CW(0x14E, 0x0000D) },
/*MT6177L*/    {  GBOUND(( 41.6-PVOFSL ),( 38.6-PVOFSL ) ), GC_A( 3,(  41.6-PVOFSL ) ), BSI_CW(0x14E, 0x0001D) },
/*MT6177L*/    {  GBOUND(( 35.6-PVOFSL ),( 32.6-PVOFSL ) ), GC_A( 3,(  35.6-PVOFSL ) ), BSI_CW(0x14E, 0x0001C) },
/*MT6177L*/    {  GBOUND(( 26.6-PVOFSL ),( 23.6-PVOFSL ) ), GC_A( 4,(  26.6-PVOFSL ) ), BSI_CW(0x14E, 0x00009) },
/*MT6177L*/    {  GBOUND(( 17.6-PVOFSL ),( 14.6-PVOFSL ) ), GC_A( 3,(  17.6-PVOFSL ) ), BSI_CW(0x14E, 0x00019) },
/*MT6177L*/    {  GBOUND((  8.6-PVOFSL ),(  5.6-PVOFSL ) ), GC_A( 2,(   8.6-PVOFSL ) ), BSI_CW(0x14E, 0x00039) }, /*Modify for BYPASS*/
/*MT6177L*/    {  GBOUND(( -0.4-PVOFSL ),( -3.4-PVOFSL ) ), GC_A( 2,(  -0.4-PVOFSL ) ), BSI_CW(0x14E, 0x00019) }, /*Modify for BYPASS*/
/*MT6177L*/    {  GBOUND(( -6.4-PVOFSL ),( -6.4-PVOFSL ) ), GC_A( 2,(  -6.4-PVOFSL ) ), BSI_CW(0x14E, 0x00039) }, /*Modify for BYPASS*/
/*MT6177L*/ };
/*MT6177L*/
/*MT6177L*/ /* GSM900....................................................................*/
/*MT6177L*/ /*Need to fix RX gain setting for index = 0 and 1, w/o extrapolation */
/*MT6177L*/ const  sL1DAGCDATA  AGC_TABLE_GSM900_ELNA_BYPASS [9] =
/*MT6177L*/ {  {  GBOUND(( 68.6-PVOFSL ),( 50.6-PVOFSL ) ), GC_A( 8,(  68.6-PVOFSL ) ), BSI_CW(0x14E, 0x0000E) },  // Orion+ has PRX1 & DRX1 (CW334 & CW336), use CW334 as defualt setting
/*MT6177L*/    {  GBOUND(( 50.6-PVOFSL ),( 47.6-PVOFSL ) ), GC_A( 4,(  50.6-PVOFSL ) ), BSI_CW(0x14E, 0x0000D) },
/*MT6177L*/    {  GBOUND(( 41.6-PVOFSL ),( 38.6-PVOFSL ) ), GC_A( 3,(  41.6-PVOFSL ) ), BSI_CW(0x14E, 0x0001D) },
/*MT6177L*/    {  GBOUND(( 35.6-PVOFSL ),( 32.6-PVOFSL ) ), GC_A( 3,(  35.6-PVOFSL ) ), BSI_CW(0x14E, 0x0001C) },
/*MT6177L*/    {  GBOUND(( 26.6-PVOFSL ),( 23.6-PVOFSL ) ), GC_A( 4,(  26.6-PVOFSL ) ), BSI_CW(0x14E, 0x00009) },
/*MT6177L*/    {  GBOUND(( 17.6-PVOFSL ),( 14.6-PVOFSL ) ), GC_A( 3,(  17.6-PVOFSL ) ), BSI_CW(0x14E, 0x00019) },
/*MT6177L*/    {  GBOUND((  8.6-PVOFSL ),(  5.6-PVOFSL ) ), GC_A( 2,(   8.6-PVOFSL ) ), BSI_CW(0x14E, 0x00039) }, /*Modify for BYPASS*/
/*MT6177L*/    {  GBOUND(( -0.4-PVOFSL ),( -3.4-PVOFSL ) ), GC_A( 2,(  -0.4-PVOFSL ) ), BSI_CW(0x14E, 0x00019) }, /*Modify for BYPASS*/
/*MT6177L*/    {  GBOUND(( -6.4-PVOFSL ),( -6.4-PVOFSL ) ), GC_A( 2,(  -6.4-PVOFSL ) ), BSI_CW(0x14E, 0x00039) }, /*Modify for BYPASS*/
/*MT6177L*/ };
/*MT6177L*/
/*MT6177L*/ /* DCS1800...................................................................*/
/*MT6177L*/ /*Need to fix RX gain setting for index = 0 and 1, w/o extrapolation */
/*MT6177L*/ const  sL1DAGCDATA  AGC_TABLE_DCS1800_ELNA_BYPASS [9] =
/*MT6177L*/ {  {  GBOUND(( 68.6-PVOFSL ),( 50.6-PVOFSL ) ), GC_A( 8,(  68.6-PVOFSL ) ), BSI_CW(0x14E, 0x0000E) },  // Orion+ has PRX1 & DRX1 (CW334 & CW336), use CW334 as defualt setting
/*MT6177L*/    {  GBOUND(( 50.6-PVOFSL ),( 47.6-PVOFSL ) ), GC_A( 4,(  50.6-PVOFSL ) ), BSI_CW(0x14E, 0x0000D) },
/*MT6177L*/    {  GBOUND(( 41.6-PVOFSL ),( 38.6-PVOFSL ) ), GC_A( 3,(  41.6-PVOFSL ) ), BSI_CW(0x14E, 0x0001D) },
/*MT6177L*/    {  GBOUND(( 35.6-PVOFSL ),( 32.6-PVOFSL ) ), GC_A( 3,(  35.6-PVOFSL ) ), BSI_CW(0x14E, 0x0001C) },
/*MT6177L*/    {  GBOUND(( 26.6-PVOFSL ),( 23.6-PVOFSL ) ), GC_A( 4,(  26.6-PVOFSL ) ), BSI_CW(0x14E, 0x00009) },
/*MT6177L*/    {  GBOUND(( 17.6-PVOFSL ),( 14.6-PVOFSL ) ), GC_A( 3,(  17.6-PVOFSL ) ), BSI_CW(0x14E, 0x00019) },
/*MT6177L*/    {  GBOUND((  8.6-PVOFSL ),(  5.6-PVOFSL ) ), GC_A( 2,(   8.6-PVOFSL ) ), BSI_CW(0x14E, 0x00039) }, /*Modify for BYPASS*/
/*MT6177L*/    {  GBOUND(( -0.4-PVOFSL ),( -3.4-PVOFSL ) ), GC_A( 2,(  -0.4-PVOFSL ) ), BSI_CW(0x14E, 0x00019) }, /*Modify for BYPASS*/
/*MT6177L*/    {  GBOUND(( -6.4-PVOFSL ),( -6.4-PVOFSL ) ), GC_A( 2,(  -6.4-PVOFSL ) ), BSI_CW(0x14E, 0x00039) }, /*Modify for BYPASS*/
/*MT6177L*/ };
/*MT6177L*/
/*MT6177L*/ /* PCS1900...................................................................*/
/*MT6177L*/ /*Need to fix RX gain setting for index = 0 and 1, w/o extrapolation */
/*MT6177L*/ const  sL1DAGCDATA  AGC_TABLE_PCS1900_ELNA_BYPASS [9] =
/*MT6177L*/ {  {  GBOUND(( 68.6-PVOFSL ),( 50.6-PVOFSL ) ), GC_A( 8,(  68.6-PVOFSL ) ), BSI_CW(0x14E, 0x0000E) },  // Orion+ has PRX1 & DRX1 (CW334 & CW336), use CW334 as defualt setting
/*MT6177L*/    {  GBOUND(( 50.6-PVOFSL ),( 47.6-PVOFSL ) ), GC_A( 4,(  50.6-PVOFSL ) ), BSI_CW(0x14E, 0x0000D) },
/*MT6177L*/    {  GBOUND(( 41.6-PVOFSL ),( 38.6-PVOFSL ) ), GC_A( 3,(  41.6-PVOFSL ) ), BSI_CW(0x14E, 0x0001D) },
/*MT6177L*/    {  GBOUND(( 35.6-PVOFSL ),( 32.6-PVOFSL ) ), GC_A( 3,(  35.6-PVOFSL ) ), BSI_CW(0x14E, 0x0001C) },
/*MT6177L*/    {  GBOUND(( 26.6-PVOFSL ),( 23.6-PVOFSL ) ), GC_A( 4,(  26.6-PVOFSL ) ), BSI_CW(0x14E, 0x00009) },
/*MT6177L*/    {  GBOUND(( 17.6-PVOFSL ),( 14.6-PVOFSL ) ), GC_A( 3,(  17.6-PVOFSL ) ), BSI_CW(0x14E, 0x00019) },
/*MT6177L*/    {  GBOUND((  8.6-PVOFSL ),(  5.6-PVOFSL ) ), GC_A( 2,(   8.6-PVOFSL ) ), BSI_CW(0x14E, 0x00039) }, /*Modify for BYPASS*/
/*MT6177L*/    {  GBOUND(( -0.4-PVOFSL ),( -3.4-PVOFSL ) ), GC_A( 2,(  -0.4-PVOFSL ) ), BSI_CW(0x14E, 0x00019) }, /*Modify for BYPASS*/
/*MT6177L*/    {  GBOUND(( -6.4-PVOFSL ),( -6.4-PVOFSL ) ), GC_A( 2,(  -6.4-PVOFSL ) ), BSI_CW(0x14E, 0x00039) }, /*Modify for BYPASS*/
/*MT6177L*/ };
/*MT6177L*/
/*MT6177L*/ /*...........................................................................*/
/*MT6177L*/
/*MT6177L*/ const  sL1DGAINRANGE GAIN_RANGE_TABLE_ELNA_BYPASS[] =
/*MT6177L*/ {  {                   0,                      0                },                /*#FrequencyBand400  */
/*MT6177L*/    { (int)RF_GSM850_MAXGAIN_ELNA_BYPASS , (int)RF_GSM850_MINGAIN_ELNA_BYPASS  }, /* FrequencyBand850  */
/*MT6177L*/    { (int)RF_GSM_MAXGAIN_ELNA_BYPASS ,    (int)RF_GSM_MINGAIN_ELNA_BYPASS     }, /* FrequencyBand900  */
/*MT6177L*/    { (int)RF_DCS_MAXGAIN_ELNA_BYPASS ,    (int)RF_DCS_MINGAIN_ELNA_BYPASS     }, /* FrequencyBand1800 */
/*MT6177L*/    { (int)RF_PCS_MAXGAIN_ELNA_BYPASS ,    (int)RF_PCS_MINGAIN_ELNA_BYPASS     }, /* FrequencyBand1900 */
/*MT6177L*/ };
/*MT6177L*/
/*MT6177L*/ const  sL1DAGCDATA *const  AGC_TABLE_ELNA_BYPASS[] =
/*MT6177L*/ {  0,                                                          /*#FrequencyBand400  */
/*MT6177L*/    AGC_TABLE_GSM850_ELNA_BYPASS,                               /* FrequencyBand850  */
/*MT6177L*/    AGC_TABLE_GSM900_ELNA_BYPASS,                               /* FrequencyBand900  */
/*MT6177L*/    AGC_TABLE_DCS1800_ELNA_BYPASS,                              /* FrequencyBand1800 */
/*MT6177L*/    AGC_TABLE_PCS1900_ELNA_BYPASS,                              /* FrequencyBand1900 */
/*MT6177L*/ };
/*MT6177L*/
/*MT6177L*/ /*Fix RX gain setting, w/o extrapolation for index = 0 of AGC_TABLE */
/*MT6177L*/ const  sL1DSection GAIN_Sec0_ELNA_BYPASS [] =
/*MT6177L*/ {  {                   0,                      0                     },               /*#FrequencyBand400  */
/*MT6177L*/    { (int)RF_GSM850_Sec0_GAIN_ELNA_BYPASS , (int)RF_GSM850_Sec0_BitNo_ELNA_BYPASS  }, /* FrequencyBand850  */
/*MT6177L*/    { (int)RF_GSM_Sec0_GAIN_ELNA_BYPASS ,    (int)RF_GSM_Sec0_BitNo_ELNA_BYPASS     }, /* FrequencyBand900  */
/*MT6177L*/    { (int)RF_DCS_Sec0_GAIN_ELNA_BYPASS ,    (int)RF_DCS_Sec0_BitNo_ELNA_BYPASS     }, /* FrequencyBand1800 */
/*MT6177L*/    { (int)RF_PCS_Sec0_GAIN_ELNA_BYPASS ,    (int)RF_PCS_Sec0_BitNo_ELNA_BYPASS     }, /* FrequencyBand1900 */
/*MT6177L*/ };
/*MT6177L*/ /*Fix RX gain setting, w/o extrapolation for index = 1 of AGC_TABLE */
/*MT6177L*/ const  sL1DSection GAIN_Sec1_ELNA_BYPASS [] =
/*MT6177L*/ {  {                   0,                      0                     },               /*#FrequencyBand400  */
/*MT6177L*/    { (int)RF_GSM850_Sec1_GAIN_ELNA_BYPASS , (int)RF_GSM850_Sec1_BitNo_ELNA_BYPASS  }, /* FrequencyBand850  */
/*MT6177L*/    { (int)RF_GSM_Sec1_GAIN_ELNA_BYPASS ,    (int)RF_GSM_Sec1_BitNo_ELNA_BYPASS     }, /* FrequencyBand900  */
/*MT6177L*/    { (int)RF_DCS_Sec1_GAIN_ELNA_BYPASS ,    (int)RF_DCS_Sec1_BitNo_ELNA_BYPASS     }, /* FrequencyBand1800 */
/*MT6177L*/    { (int)RF_PCS_Sec1_GAIN_ELNA_BYPASS ,    (int)RF_PCS_Sec1_BitNo_ELNA_BYPASS     }, /* FrequencyBand1900 */
/*MT6177L*/ };
   #endif //IS_2G_EXTERNAL_LNA_BYPASS_SUPPORT
/*MT6177L*/ /*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
/*MT6177L*/
/*MT6177L*/ int L1D_RF_GetGainSetting( int rf_band, int arfcn, int request_gain, long *gain_setting )
/*MT6177L*/ {  int   max_gain, min_gain, real_gain, blkr_group, l1_obb_flag = 0;
/*MT6177L*/    const int*    d32ptr;
/*MT6177L*/    const sL1DAGCDATA*  agcptr;
/*MT6177L*/    sLNAGAINOFFSET*     lnaptr;
/*MT6177L*/    sAGCGAINOFFSET*     ofsptr;
/*MT6177L*/    long  setting;
/*MT6177L*/    int   bit_no, idx, lna_path_loss, ibbd_threshold, hrd_threshold, ibb_group_threshold=0;
/*MT6177L*/    //unsigned short  L1D_chip_ver = L1D_RF_QUERY_CHIP_VERSION();
/*MT6177L*/    #if IS_2G_EXTERNAL_LNA_SUPPORT
/*MT6177L*/    unsigned short   agcptr_idx = 0;   //index of AGC table for fixing RX gain setting 
/*MT6177L*/    unsigned short   is_elna_usage        = (L1D_RF_Check_If_ExternalLNA( rf_band )>=L1D_ELNA_ALYWAYS_ON)?1:0;   // check if using eLNA
/*MT6177L*/       #if IS_2G_EXTERNAL_LNA_BYPASS_SUPPORT
/*MT6177L*/    unsigned short   is_elna_bypass_usage = (L1D_RF_Check_If_ExternalLNA( rf_band )==L1D_ELNA_CAN_SWITCH)?1:0;   // check if using eLNA Bypass
/*MT6177L*/       #endif
/*MT6177L*/    #endif
/*MT6177L*/
/*MT6177L*/    #if IS_RX_POWER_OFFSET_SUPPORT
/*MT6177L*/    sAGCLNAGAINOFFSET*  ofsptr_offset;
/*MT6177L*/    kal_uint16 rx_power_offset_enable      = AGCLNA_PL_OFFSET_SETTING->rx_power_offset_setting.RPO_enable;
/*MT6177L*/    kal_uint16 meta_rx_power_offset_enable = AGCLNA_PL_OFFSET_SETTING->rx_power_offset_setting.RPO_meta_enable; 
/*MT6177L*/    int  lna_path_loss_offset = 0;
/*MT6177L*/    #endif/*IS_RX_POWER_OFFSET_SUPPORT*/
/*MT6177L*/  
/*MT6177L*/    if( 0 )
/*MT6177L*/    { /* do nothing */ }
/*MT6177L*/    #if IS_INBAND_BLOCKER_DETECTION_SUPPORT
/*MT6177L*/       #if IS_2G_EXTERNAL_LNA_BYPASS_SUPPORT
/*MT6177L*/    else if( is_elna_bypass_usage ) //For eLNA Bypass
/*MT6177L*/    {  
/*MT6177L*/       ibbd_threshold = (rf_band<FrequencyBand1800) ? IBBD_LB_THRESHOLD_ELNA_BYPASS: IBBD_HB_THRESHOLD_ELNA_BYPASS;  
/*MT6177L*/       ibb_group_threshold = 1;
/*MT6177L*/    }
/*MT6177L*/       #endif
/*MT6177L*/       #if IS_2G_EXTERNAL_LNA_SUPPORT
/*MT6177L*/    else if( is_elna_usage ) //For eLNA
/*MT6177L*/    {  
/*MT6177L*/       ibbd_threshold = (rf_band<FrequencyBand1800) ? IBBD_LB_THRESHOLD_ELNA : IBBD_HB_THRESHOLD_ELNA;  
/*MT6177L*/       ibb_group_threshold = 1;
/*MT6177L*/    }
/*MT6177L*/       #endif
/*MT6177L*/    else   // no eLNA
/*MT6177L*/    {  
/*MT6177L*/       ibbd_threshold = (rf_band<FrequencyBand1800) ? IBBD_LB_THRESHOLD : IBBD_HB_THRESHOLD;
/*MT6177L*/       ibb_group_threshold = 1;
/*MT6177L*/    }
/*MT6177L*/    #endif
/*MT6177L*/
/*MT6177L*/    if( 0 )
/*MT6177L*/    { /* do nothing */ }
/*MT6177L*/    #if IS_HEADROOM_DETECTION_SUPPORT
/*MT6177L*/       #if IS_2G_EXTERNAL_LNA_BYPASS_SUPPORT
/*MT6177L*/    else if( is_elna_bypass_usage ) //For eLNA Bypass
/*MT6177L*/    {  
/*MT6177L*/       hrd_threshold = (rf_band<FrequencyBand1800) ? HRD_LB_THRESHOLD_ELNA_BYPASS: HRD_HB_THRESHOLD_ELNA_BYPASS;
/*MT6177L*/    }
/*MT6177L*/      #endif
/*MT6177L*/      #if IS_2G_EXTERNAL_LNA_SUPPORT
/*MT6177L*/    else if( is_elna_usage ) //For eLNA
/*MT6177L*/    {  
/*MT6177L*/       hrd_threshold = (rf_band<FrequencyBand1800) ? HRD_LB_THRESHOLD_ELNA : HRD_HB_THRESHOLD_ELNA;
/*MT6177L*/    }
/*MT6177L*/      #endif
/*MT6177L*/    else   // no eLNA
/*MT6177L*/    {  
/*MT6177L*/       hrd_threshold = (rf_band<FrequencyBand1800) ? HRD_LB_THRESHOLD  : HRD_HB_THRESHOLD;
/*MT6177L*/    }
/*MT6177L*/    #endif
/*MT6177L*/
/*MT6177L*/    #if IS_OUTBAND_BLOCKER_DETECTION_SUPPORT
/*MT6177L*/    if( l1d_rf.band < FrequencyBand1800 )
/*MT6177L*/    {  l1_obb_flag = (l1d_rf.blk_flag & LB_OBB_FOUND) ? 1 : 0; }
/*MT6177L*/    else
/*MT6177L*/    {  l1_obb_flag = (l1d_rf.blk_flag & HB_OBB_FOUND) ? 1 : 0; }
/*MT6177L*/    #endif
/*MT6177L*/
/*MT6177L*/    /* evaluate the range of available gain */
/*MT6177L*/    if( 0 )
/*MT6177L*/    { /* do nothing */ }
/*MT6177L*/    #if IS_2G_EXTERNAL_LNA_BYPASS_SUPPORT
/*MT6177L*/    else if ( is_elna_bypass_usage )
/*MT6177L*/    {  
/*MT6177L*/       d32ptr = (int*)&(GAIN_RANGE_TABLE_ELNA_BYPASS[rf_band]);
/*MT6177L*/    }
/*MT6177L*/    #endif
/*MT6177L*/    #if IS_2G_EXTERNAL_LNA_SUPPORT
/*MT6177L*/    else if ( is_elna_usage )
/*MT6177L*/    {  
/*MT6177L*/       d32ptr = (int*)&(GAIN_RANGE_TABLE_ELNA[rf_band]);
/*MT6177L*/    }
/*MT6177L*/    #endif
/*MT6177L*/    else
/*MT6177L*/    {
/*MT6177L*/       d32ptr = (int*)&(GAIN_RANGE_TABLE[rf_band]);
/*MT6177L*/    }
/*MT6177L*/    max_gain = *d32ptr++;
/*MT6177L*/    min_gain = *d32ptr;
/*MT6177L*/
/*MT6177L*/    /* D[12:10]: blkr_group used for IBB/HRD case if request_gain>=0, D[9:0]: request_gain for Normal case */
/*MT6177L*/    blkr_group    = (request_gain>=0)?((request_gain>>10)&0x7):0;
/*MT6177L*/    request_gain  = (request_gain>=0)?(request_gain&0x3FF):request_gain;
/*MT6177L*/
/*MT6177L*/    /* Normal Mode: From Voltage_Gain to Power_Gain (Voltage_Gain comes from m11303.c)*/
/*MT6177L*/    /* Meta Mode:  Bring Power_Gain directly*/
/*MT6177L*/    if((!L1D_CheckIfMetaMode()))
/*MT6177L*/    {  request_gain -= ((rf_band<FrequencyBand1800) ? (PVOFSL*PWRRES) : (PVOFSH*PWRRES));  }
/*MT6177L*/
/*MT6177L*/    /* clipping the request gain to the avialable gain */
/*MT6177L*/    if( request_gain>=max_gain )
/*MT6177L*/    {  request_gain = max_gain;  
/*MT6177L*/    }
/*MT6177L*/    else if( request_gain<=min_gain )
/*MT6177L*/    {  request_gain = min_gain;  
/*MT6177L*/    }
/*MT6177L*/
/*MT6177L*/    /* choose the LNA path loss */
/*MT6177L*/    lnaptr = LNA_PATHLOSS_TABLE[rf_band];
/*MT6177L*/    /* get the arfcn section */
/*MT6177L*/    ofsptr = AGC_PATHLOSS_TABLE[rf_band];
/*MT6177L*/    while( ofsptr->max_arfcn>=0 )
/*MT6177L*/    {  if( arfcn <= ofsptr->max_arfcn )
/*MT6177L*/       {  break;  }
/*MT6177L*/       ofsptr++;
/*MT6177L*/       lnaptr++;
/*MT6177L*/    }
/*MT6177L*/
/*MT6177L*/    /* evaluate the real gain setting */
/*MT6177L*/    if( 0 )
/*MT6177L*/    { /* do nothing */ }
/*MT6177L*/    #if IS_2G_EXTERNAL_LNA_BYPASS_SUPPORT
/*MT6177L*/    else if( is_elna_bypass_usage )
/*MT6177L*/    {  
/*MT6177L*/       agcptr = AGC_TABLE_ELNA_BYPASS[rf_band];
/*MT6177L*/    }
/*MT6177L*/    #endif
/*MT6177L*/    #if IS_2G_EXTERNAL_LNA_SUPPORT
/*MT6177L*/    else if( is_elna_usage )
/*MT6177L*/    {  
/*MT6177L*/       agcptr = AGC_TABLE_ELNA[rf_band];
/*MT6177L*/    }
/*MT6177L*/    #endif
/*MT6177L*/    else
/*MT6177L*/    {  
/*MT6177L*/       agcptr = AGC_TABLE[rf_band];
/*MT6177L*/    }
/*MT6177L*/
/*MT6177L*/    while( request_gain < agcptr->pos_gain )
/*MT6177L*/    {  
/*MT6177L*/       agcptr++;  
/*MT6177L*/    #if IS_2G_EXTERNAL_LNA_SUPPORT
/*MT6177L*/       agcptr_idx++;
/*MT6177L*/    #endif
/*MT6177L*/    }
/*MT6177L*/
/*MT6177L*/    {
/*MT6177L*/    #if IS_2G_EXTERNAL_LNA_SUPPORT 
/*MT6177L*/       if( is_elna_usage && (L1D_CheckIfMetaMode()) ) //Also for eLNA Bypass! 
/*MT6177L*/       {/* Special handling under META mode. Normal mode will use the exact gain listed in RX gain table*/
/*MT6177L*/          switch( agcptr_idx )
/*MT6177L*/          {
/*MT6177L*/             case 0: // Section0, fix RX gain setting w/o extrapolation
/*MT6177L*/                bit_no    = GAIN_Sec0_ELNA[rf_band].bitno;
/*MT6177L*/                real_gain = GAIN_Sec0_ELNA[rf_band].real_gain;
/*MT6177L*/                break;
/*MT6177L*/             case 1: // Section1, fix RX gain setting w/o extrapolation
/*MT6177L*/                bit_no    = GAIN_Sec1_ELNA[rf_band].bitno;
/*MT6177L*/                real_gain = GAIN_Sec1_ELNA[rf_band].real_gain;
/*MT6177L*/                break;
/*MT6177L*/             default: // Other sections
/*MT6177L*/                bit_no    = BIT_NO( request_gain, agcptr->A, GC_B );
/*MT6177L*/                real_gain = REAL_GAIN( bit_no, agcptr->A, GC_B );
/*MT6177L*/                break;
/*MT6177L*/          }
/*MT6177L*/       } 
/*MT6177L*/       else
/*MT6177L*/    #endif
/*MT6177L*/       {
/*MT6177L*/          bit_no    = BIT_NO( request_gain, agcptr->A, GC_B );
/*MT6177L*/          real_gain = REAL_GAIN( bit_no, agcptr->A, GC_B );
/*MT6177L*/       }
/*MT6177L*/       
/*MT6177L*/       if( 0 )
/*MT6177L*/       { /* do nothing */ }
/*MT6177L*/   #if IS_HEADROOM_DETECTION_SUPPORT || IS_INBAND_BLOCKER_DETECTION_SUPPORT || IS_OUTBAND_BLOCKER_DETECTION_SUPPORT
/*MT6177L*/       else if( ((((l1d_rf.blk_flag)&(HRD_FOUND)) && (request_gain >= (hrd_threshold))) || (((l1d_rf.blk_flag)&(IBB_FOUND)) && ((request_gain >= (ibbd_threshold)) || (blkr_group<=(ibb_group_threshold)))) || (l1_obb_flag == 1)) && (blkr_group > 0) )
/*MT6177L*/       {
/*MT6177L*/       #if IS_2G_EXTERNAL_LNA_SUPPORT 
/*MT6177L*/           if(is_elna_usage||is_elna_bypass_usage)//Also for eLNA Bypass! 
/*MT6177L*/           {
/*MT6177L*/              switch( blkr_group )
/*MT6177L*/              {
/*MT6177L*/                 case 1:
/*MT6177L*/                    setting   = 0x1BD;  
/*MT6177L*/                    real_gain = ROUNDINT(( 44.6-PVOFSL )*(PWRRES));
/*MT6177L*/                    break;
/*MT6177L*/                 case 2:
/*MT6177L*/                    setting   = (agcptr->setting&0x3FFFFFC0)|((0x6)<<6)|(0x7<<3)|0x4;  // reduce LNA/TIA, increase 3*LPF2 Gain
/*MT6177L*/                    real_gain-= (LNA_DROP_GAIN+TIA_DROP_GAIN-3*LPF2_DROP_GAIN);
/*MT6177L*/                    break;
/*MT6177L*/                 default:
/*MT6177L*/                    setting   = agcptr->setting | ((bit_no&0xF)<<6);  
/*MT6177L*/                    break;
/*MT6177L*/              }
/*MT6177L*/           }
/*MT6177L*/           else
/*MT6177L*/       #endif
/*MT6177L*/           {
/*MT6177L*/              switch( blkr_group )
/*MT6177L*/              {
/*MT6177L*/                 case 1:
/*MT6177L*/                    setting   = 0x18D;  
/*MT6177L*/                    real_gain = ROUNDINT(( 44.6-PVOFSL )*(PWRRES));
/*MT6177L*/                    break;
/*MT6177L*/                 case 2:
/*MT6177L*/                    setting   = (agcptr->setting&0x3FFFFFC0)|(0x6<<6)|(0x3<<3)|0x5;  // reduce LNA
/*MT6177L*/                    real_gain-= (LNA_DROP_GAIN);
/*MT6177L*/                    break;
/*MT6177L*/                 default:
/*MT6177L*/                    setting   = agcptr->setting | ((bit_no&0xF)<<6);  
/*MT6177L*/                    break;
/*MT6177L*/              } 
/*MT6177L*/           }
/*MT6177L*/       }
/*MT6177L*/    #endif
/*MT6177L*/       else
/*MT6177L*/       {  
/*MT6177L*/          setting = agcptr->setting | ((bit_no&0xF)<<6);
/*MT6177L*/       }
/*MT6177L*/       idx = (int)(setting&0x7);
/*MT6177L*/       if( 0 )
/*MT6177L*/       { /* do nothing */ }
/*MT6177L*/    #if IS_2G_EXTERNAL_LNA_BYPASS_SUPPORT
/*MT6177L*/       else if( is_elna_bypass_usage )
/*MT6177L*/       	{
/*MT6177L*/          switch( idx )
/*MT6177L*/          {
/*MT6177L*/             case 6: /* LNA_Utra_High : G6 */
/*MT6177L*/                lna_path_loss = (l1d_rf2.is_fhc) ? (0) : ((int)(lnaptr->gain_offset_high_sensitivity-ofsptr->gain_offset));
/*MT6177L*/                break;
/*MT6177L*/             case 5: /* LNA_High      : G5 */ /*Base for path loss calibration*/
/*MT6177L*/                lna_path_loss = 0;
/*MT6177L*/                break;
/*MT6177L*/             case 4: /* LNA_Middle    : G4 */ /*ELNA cannot exist with sawless*/
/*MT6177L*/                lna_path_loss = (l1d_rf2.is_fhc) ? (0) : ((int)(lnaptr->gain_offset_middle-ofsptr->gain_offset)); 
/*MT6177L*/                break;
/*MT6177L*/             default:/* LNA_Low       : G1 */
/*MT6177L*/                if( agcptr_idx<=LAST_GROUP_FOR_ELNA_ON[rf_band]  )
/*MT6177L*/                {   lna_path_loss = (l1d_rf2.is_fhc) ? (0) : ((int)(lnaptr->gain_offset_low-ofsptr->gain_offset));  }
/*MT6177L*/          	else              /* LNA_Low    : G1 */
/*MT6177L*/                {   lna_path_loss = (l1d_rf2.is_fhc) ? (0) : ((int)(lnaptr->gain_offset_low_maxpin-ofsptr->gain_offset));  } /*BYPASS*/  
/*MT6177L*/                break;
/*MT6177L*/       	}
/*MT6177L*/       }
/*MT6177L*/    #endif
/*MT6177L*/    #if IS_2G_EXTERNAL_LNA_SUPPORT
/*MT6177L*/       else if( is_elna_usage )
/*MT6177L*/       {
/*MT6177L*/          switch( idx )
/*MT6177L*/          {
/*MT6177L*/             case 6: /* LNA_Utra_High : G6 */
/*MT6177L*/                lna_path_loss = (l1d_rf2.is_fhc) ? (0) : ((int)(lnaptr->gain_offset_high_sensitivity-ofsptr->gain_offset));
/*MT6177L*/                break;
/*MT6177L*/             case 5: /* LNA_High      : G5 */ /*Base for path loss calibration*/
/*MT6177L*/                lna_path_loss = 0;
/*MT6177L*/                break;
/*MT6177L*/             case 4: /* LNA_Middle    : G4 */ /*ELNA cannot exist with sawless*/
/*MT6177L*/                lna_path_loss = (l1d_rf2.is_fhc) ? (0) : ((int)(lnaptr->gain_offset_middle-ofsptr->gain_offset));
/*MT6177L*/                break;
/*MT6177L*/             default:/* LNA_Low       : G1 */
/*MT6177L*/                lna_path_loss = (l1d_rf2.is_fhc) ? (0) : ((int)(lnaptr->gain_offset_low-ofsptr->gain_offset)); 
/*MT6177L*/                break;
/*MT6177L*/          } 
/*MT6177L*/       }
/*MT6177L*/    #endif
/*MT6177L*/       else
/*MT6177L*/       	{
/*MT6177L*/          	if( idx==6 )      /* LNA_High    : G6 */
/*MT6177L*/          {  lna_path_loss = 0;  }
/*MT6177L*/          	else if( idx==5 ) /* LNA_Middle : G5*/
/*MT6177L*/          {  
/*MT6177L*/             if( l1_obb_flag == 1 )
/*MT6177L*/             {   lna_path_loss = (l1d_rf2.is_fhc) ? (0) : ((int)(lnaptr->gain_offset_middle_sawless-ofsptr->gain_offset));}
/*MT6177L*/             else
/*MT6177L*/             {   lna_path_loss = (l1d_rf2.is_fhc) ? (0) : ((int)(lnaptr->gain_offset_middle-ofsptr->gain_offset));}
/*MT6177L*/          }
/*MT6177L*/          	else              /* LNA_Low    : G1*/
/*MT6177L*/          {  lna_path_loss = (l1d_rf2.is_fhc) ? (0) : ((int)(lnaptr->gain_offset_low-ofsptr->gain_offset));     }
/*MT6177L*/       	}
/*MT6177L*/
/*MT6177L*/
/*MT6177L*/    #if IS_RX_POWER_OFFSET_SUPPORT
/*MT6177L*/    /* get the arfcn section */
/*MT6177L*/    ofsptr_offset = AGCLNA_PATHLOSS_OFFSET[rf_band];
/*MT6177L*/    while( ofsptr_offset->max_arfcn>=0 )
/*MT6177L*/    {  if( arfcn <= ofsptr_offset->max_arfcn )
/*MT6177L*/       {  break;  }
/*MT6177L*/       ofsptr_offset++;
/*MT6177L*/    }
/*MT6177L*/    if( rx_power_offset_enable )
/*MT6177L*/    {
/*MT6177L*/       if( ( L1D_CheckIfMetaMode() && ( meta_rx_power_offset_enable == 1 )) || // DUT In META mode and enable META mode compensation
/*MT6177L*/           (L1D_CheckIfMetaMode() == 0) // DUT in normal mode, apply compensation
/*MT6177L*/         )
/*MT6177L*/       {
/*MT6177L*/          if( 0 )
/*MT6177L*/          { /* do nothing */ }
/*MT6177L*/    #if IS_2G_EXTERNAL_LNA_BYPASS_SUPPORT
/*MT6177L*/          else if( is_elna_bypass_usage )
/*MT6177L*/          {
/*MT6177L*/             switch( idx )
/*MT6177L*/             {
/*MT6177L*/             case 6: /* LNA_Utra_High : G6 */
/*MT6177L*/                lna_path_loss_offset = (int)(ofsptr_offset->gain_offset_high_sensitivity);
/*MT6177L*/                break;
/*MT6177L*/             case 5: /* LNA_High      : G5 */ /*Base for path loss calibration*/
/*MT6177L*/                lna_path_loss_offset = (int)(ofsptr_offset->gain_offset);
/*MT6177L*/                break;
/*MT6177L*/             case 4: /* LNA_Middle    : G4 */ /*ELNA cannot exist with sawless*/
/*MT6177L*/                lna_path_loss_offset = (int)(ofsptr_offset->gain_offset_middle);
/*MT6177L*/                break;
/*MT6177L*/             default:/* LNA_Low       : G1 */
/*MT6177L*/             if( agcptr_idx<=LAST_GROUP_FOR_ELNA_ON[rf_band]  )
/*MT6177L*/             {   lna_path_loss_offset = (int)(ofsptr_offset->gain_offset_low);}
/*MT6177L*/             else              /* LNA_Low    : G1 */
/*MT6177L*/             {   lna_path_loss_offset = (int)(ofsptr_offset->gain_offset_low_maxpin);}
/*MT6177L*/             break;
/*MT6177L*/             }
/*MT6177L*/         }
/*MT6177L*/    #endif
/*MT6177L*/    #if IS_2G_EXTERNAL_LNA_SUPPORT
/*MT6177L*/         else if( is_elna_usage )
/*MT6177L*/         {
/*MT6177L*/         switch( idx )
/*MT6177L*/         {
/*MT6177L*/         case 6: /* LNA_Utra_High : G6 */
/*MT6177L*/             lna_path_loss_offset = (int)(ofsptr_offset->gain_offset_high_sensitivity);
/*MT6177L*/         break;
/*MT6177L*/         case 5: /* LNA_High      : G5 */ /*Base for path loss calibration*/
/*MT6177L*/             lna_path_loss_offset = (int)(ofsptr_offset->gain_offset);
/*MT6177L*/         break;
/*MT6177L*/         case 4: /* LNA_Middle    : G4 */ /*ELNA cannot exist with sawless*/
/*MT6177L*/             lna_path_loss_offset = (int)(ofsptr_offset->gain_offset_middle);
/*MT6177L*/         break;
/*MT6177L*/         default:/* LNA_Low       : G1 */
/*MT6177L*/             lna_path_loss_offset = (int)(ofsptr_offset->gain_offset_low);
/*MT6177L*/          break;
/*MT6177L*/          } 
/*MT6177L*/       }
/*MT6177L*/     #endif
/*MT6177L*/         else
/*MT6177L*/         {
/*MT6177L*/          if( idx==6 )      /* LNA_High    : G6 */
/*MT6177L*/          {  lna_path_loss_offset = (int)(ofsptr_offset->gain_offset);  }
/*MT6177L*/          else if( idx==5 ) /* LNA_Middle : G5*/
/*MT6177L*/          {
/*MT6177L*/             if( l1_obb_flag == 1 )
/*MT6177L*/                {  lna_path_loss_offset = (int)(ofsptr_offset->gain_offset_middle_sawless);  }
/*MT6177L*/             else
/*MT6177L*/                {  lna_path_loss_offset = (int)(ofsptr_offset->gain_offset_middle);  }
/*MT6177L*/          }
/*MT6177L*/          else              /* LNA_Low    : G1*/
/*MT6177L*/          {  lna_path_loss_offset = (int)(ofsptr_offset->gain_offset_low);  }
/*MT6177L*/         }
/*MT6177L*/     }
/*MT6177L*/     else
/*MT6177L*/     {
/*MT6177L*/          lna_path_loss_offset = 0;
/*MT6177L*/     }
/*MT6177L*/     extern void L1D_RF_RPO_Trace( uint32 v1, uint32 v2, uint32 v3, uint32 v4, int32 v5, int32 v6 );
/*MT6177L*/     L1D_RF_RPO_Trace( L1D_CheckIfMetaMode(), meta_rx_power_offset_enable, idx, rf_band, arfcn, lna_path_loss_offset);
/*MT6177L*/ }
/*MT6177L*/     #endif/*IS_RX_POWER_OFFSET_SUPPORT*/
/*MT6177L*/
/*MT6177L*/    #if IS_RX_POWER_OFFSET_SUPPORT
/*MT6177L*/       real_gain -= (lna_path_loss_offset+lna_path_loss);
/*MT6177L*/    #else
/*MT6177L*/       real_gain -= lna_path_loss;// choose pathloss after LNA Mode selected according Nomral/HRD/IBBD
/*MT6177L*/    #endif/*IS_RX_POWER_OFFSET_SUPPORT*/
/*MT6177L*/    }
/*MT6177L*/    #if IS_RSSI_TC_SUPPORT
/*MT6177L*/    if(L1D_CheckIfMetaMode()==0)
/*MT6177L*/    {  real_gain-=L1D_RF_CompensateRXGain( l1d_rf.band );  }  // Compensate RX Gain acoording to temperature when normal mode
/*MT6177L*/    #endif
/*MT6177L*/    if ( rf_band >= FrequencyBand1800 )  // gain boost for 1800MHz and higher
/*MT6177L*/    {
/*MT6177L*/       setting |= (0x1<<12)|(0x1<<11);   // shold be done after taking out D[12:10]: blkr_group
/*MT6177L*/    }
/*MT6177L*/    *gain_setting = setting;
/*MT6177L*/    if ( 0 )
/*MT6177L*/    { /* do nothing */ }
/*MT6177L*/    #if IS_2G_EXTERNAL_LNA_BYPASS_SUPPORT
/*MT6177L*/    else if (is_elna_bypass_usage) //on or bypass
/*MT6177L*/    {
/*MT6177L*/       if( agcptr_idx<=LAST_GROUP_FOR_ELNA_ON[rf_band] )
/*MT6177L*/       {
/*MT6177L*/          l1d_rf.xwin_elna_status = MML1_ELNA_MODE_ON; //low input power
/*MT6177L*/       }
/*MT6177L*/       else
/*MT6177L*/       {
/*MT6177L*/          l1d_rf.xwin_elna_status = MML1_ELNA_MODE_BYPASS; //high input power
/*MT6177L*/       }
/*MT6177L*/    }
/*MT6177L*/    #endif/*IS_RX_POWER_OFFSET_SUPPORT*/
/*MT6177L*/
/*MT6177L*/    #if IS_2G_EXTERNAL_LNA_SUPPORT
/*MT6177L*/    else if (is_elna_usage)   //always on 
/*MT6177L*/    {
/*MT6177L*/       l1d_rf.xwin_elna_status = MML1_ELNA_MODE_ON;
/*MT6177L*/    }
/*MT6177L*/    else
/*MT6177L*/    {
/*MT6177L*/       l1d_rf.xwin_elna_status = MML1_ELNA_MODE_NULL;
/*MT6177L*/    }
/*MT6177L*/    #endif/*IS_RX_POWER_OFFSET_SUPPORT*/
/*MT6177L*/    
/*MT6177L*/    
/*MT6177L*/    return( real_gain );
/*MT6177L*/ } 
/*MT6177L*/
   #if IS_W_CANCELLATION_SUPPORT
/*MT6177L*/ unsigned short   L1D_RF_FindGainStep( unsigned long gain_setting, FrequencyBand rf_band  )
/*MT6177L*/ {
/*MT6177L*/    unsigned short gain_step = gain_setting & 0x3FF;
/*MT6177L*/
/*MT6177L*/    if( 0 )
/*MT6177L*/    { /* do nothing */ }
/*MT6177L*/    #if IS_2G_EXTERNAL_LNA_SUPPORT 
/*MT6177L*/        #if IS_2G_RXD_SUPPORT 
/*MT6177L*/    else if( L1D_RF_Check_If_ExternalLNA(rf_band)>=L1D_ELNA_ALYWAYS_ON )//Also for eLNA Bypass!   
/*MT6177L*/        #else
/*MT6177L*/    else if( L1D_RF_Check_If_ExternalLNA(rf_band) )//Also for eLNA Bypass!
/*MT6177L*/        #endif
/*MT6177L*/    {
/*MT6177L*/       switch( gain_step )
/*MT6177L*/       {
/*MT6177L*/          case 0x1BD:
/*MT6177L*/             return 11;
/*MT6177L*/          case 0x20E:
/*MT6177L*/             return 10;
/*MT6177L*/          case 0x11D:
/*MT6177L*/             return 9;
/*MT6177L*/          case 0x10D:
/*MT6177L*/             return 8;
/*MT6177L*/          case 0x15D:
/*MT6177L*/             return 7;
/*MT6177L*/          case 0xDD:
/*MT6177L*/             return 6;
/*MT6177L*/          case 0x1BC:
/*MT6177L*/             return 5;
/*MT6177L*/          case 0x11C:
/*MT6177L*/             return 4;
/*MT6177L*/          case 0xDC:
/*MT6177L*/             return 3;
/*MT6177L*/          case 0x189:
/*MT6177L*/             return 2;
/*MT6177L*/          case 0x149:
/*MT6177L*/             return 1;
/*MT6177L*/          default:
/*MT6177L*/             return 0;
/*MT6177L*/       }
/*MT6177L*/    }
/*MT6177L*/    #endif
/*MT6177L*/    else
/*MT6177L*/    {
/*MT6177L*/       switch( gain_step )
/*MT6177L*/       {
/*MT6177L*/          case 0x18D:
/*MT6177L*/             return 13;
/*MT6177L*/          case 0x206:
/*MT6177L*/             return 12;
/*MT6177L*/          case 0x1C6:
/*MT6177L*/             return 11;
/*MT6177L*/          case 0x20E:
/*MT6177L*/             return 10;
/*MT6177L*/          case 0x1CD: 
/*MT6177L*/             return 9;
/*MT6177L*/          case 0x18E:
/*MT6177L*/             return 8;
/*MT6177L*/          case 0x1CE:
/*MT6177L*/             return 7;
/*MT6177L*/          case 0x14E:
/*MT6177L*/             return 6;
/*MT6177L*/          case 0x19E:
/*MT6177L*/             return 5;
/*MT6177L*/          case 0x1DD:
/*MT6177L*/             return 4;
/*MT6177L*/          case 0x19D:
/*MT6177L*/             return 3;
/*MT6177L*/          case 0x15D:
/*MT6177L*/             return 2;
/*MT6177L*/          case 0x11D:
/*MT6177L*/             return 1;
/*MT6177L*/          default:
/*MT6177L*/             return 0;
/*MT6177L*/       }
/*MT6177L*/    }
/*MT6177L*/ }
/*MT6177L*/ #if IS_2G_RXD_SUPPORT 
/*MT6177L*/ unsigned short   L1D_RF_FindGainStep_RXD( unsigned long gain_setting, FrequencyBand rf_band  )
/*MT6177L*/ {
/*MT6177L*/    unsigned short gain_step = gain_setting & 0x3FF;
/*MT6177L*/
/*MT6177L*/    if( 0 )
/*MT6177L*/    { /* do nothing */ }
/*MT6177L*/    #if IS_2G_EXTERNAL_LNA_SUPPORT 
/*MT6177L*/        #if IS_2G_RXD_SUPPORT 
/*MT6177L*/    else if( L1D_RF_Check_If_ExternalLNA_RXD(rf_band)>=L1D_ELNA_ALYWAYS_ON )//Also for eLNA Bypass!   
/*MT6177L*/        #else
/*MT6177L*/    else if( L1D_RF_Check_If_ExternalLNA_RXD(rf_band) )//Also for eLNA Bypass!
/*MT6177L*/        #endif
/*MT6177L*/    {
/*MT6177L*/       switch( gain_step )
/*MT6177L*/       {
/*MT6177L*/          case 0x1BD:
/*MT6177L*/             return 11;
/*MT6177L*/          case 0x20E:
/*MT6177L*/             return 10;
/*MT6177L*/          case 0x11D:
/*MT6177L*/             return 9;
/*MT6177L*/          case 0x10D:
/*MT6177L*/             return 8;
/*MT6177L*/          case 0x15D:
/*MT6177L*/             return 7;
/*MT6177L*/          case 0xDD:
/*MT6177L*/             return 6;
/*MT6177L*/          case 0x1BC:
/*MT6177L*/             return 5;
/*MT6177L*/          case 0x11C:
/*MT6177L*/             return 4;
/*MT6177L*/          case 0xDC:
/*MT6177L*/             return 3;
/*MT6177L*/          case 0x189:
/*MT6177L*/             return 2;
/*MT6177L*/          case 0x149:
/*MT6177L*/             return 1;
/*MT6177L*/          default:
/*MT6177L*/             return 0;
/*MT6177L*/       }
/*MT6177L*/    }
/*MT6177L*/    #endif
/*MT6177L*/    else
/*MT6177L*/    {
/*MT6177L*/       switch( gain_step )
/*MT6177L*/       {
/*MT6177L*/          case 0x18D:
/*MT6177L*/             return 13;
/*MT6177L*/          case 0x206:
/*MT6177L*/             return 12;
/*MT6177L*/          case 0x1C6:
/*MT6177L*/             return 11;
/*MT6177L*/          case 0x20E:
/*MT6177L*/             return 10;
/*MT6177L*/          case 0x1CD: 
/*MT6177L*/             return 9;
/*MT6177L*/          case 0x18E:
/*MT6177L*/             return 8;
/*MT6177L*/          case 0x1CE:
/*MT6177L*/             return 7;
/*MT6177L*/          case 0x14E:
/*MT6177L*/             return 6;
/*MT6177L*/          case 0x19E:
/*MT6177L*/             return 5;
/*MT6177L*/          case 0x1DD:
/*MT6177L*/             return 4;
/*MT6177L*/          case 0x19D:
/*MT6177L*/             return 3;
/*MT6177L*/          case 0x15D:
/*MT6177L*/             return 2;
/*MT6177L*/          case 0x11D:
/*MT6177L*/             return 1;
/*MT6177L*/          default:
/*MT6177L*/             return 0;
/*MT6177L*/       }
/*MT6177L*/    }
/*MT6177L*/ }
/*MT6177L*/ #endif
   #endif
   #if IS_2G_RXD_SUPPORT
/*MT6177L*/ const  sL1DAGCHALDATA  AGC_TABLE_HAL_LOWBAND=
/*MT6177L*/ {  
/*MT6177L*/    (Gain)(ROUNDINT(( 62.6-PVOFSL )*(PWRRES))),  //max_gain
/*MT6177L*/    (Gain)(ROUNDINT(( -3.4-PVOFSL )*(PWRRES))),  //min_gain
/*MT6177L*/    -880/*-110*/,  //max_predict_power
/*MT6177L*/    -40/*-5*/,  //min_predict_power
/*MT6177L*/    -86*PWRRES,  //IBBD_Pin_THRESHOLD
/*MT6177L*/    -71*PWRRES,  //HRD_Pin_THRESHOLD
/*MT6177L*/    {  
/*MT6177L*/      {   -880/*-110*/, (Gain)(ROUNDINT(( 62.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x206), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18D),  L1D_LNA_HIGH,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -872/*-109*/, (Gain)(ROUNDINT(( 62.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x206), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18D),  L1D_LNA_HIGH,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -864/*-108*/, (Gain)(ROUNDINT(( 62.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x206), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18D),  L1D_LNA_HIGH,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -856/*-107*/, (Gain)(ROUNDINT(( 59.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1C6), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18D),  L1D_LNA_HIGH,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -848/*-106*/, (Gain)(ROUNDINT(( 59.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1C6), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18D),  L1D_LNA_HIGH,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -840/*-105*/, (Gain)(ROUNDINT(( 59.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1C6), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18D),  L1D_LNA_HIGH,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -832/*-104*/, (Gain)(ROUNDINT(( 56.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x20E), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18D),  L1D_LNA_HIGH,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -824/*-103*/, (Gain)(ROUNDINT(( 56.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x20E), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18D),  L1D_LNA_HIGH,  MML1_ELNA_MODE_NULL},
/*MT6177L*/ #if IS_2G_6DB_DYNAMIC_GAINTABLE_SWITCH_SUPPORT
/*MT6177L*/      {   -816/*-102*/, (Gain)(ROUNDINT(( 53.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1CE), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18D),  L1D_LNA_HIGH,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -808/*-101*/, (Gain)(ROUNDINT(( 53.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1CE), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18D),  L1D_LNA_HIGH,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -800/*-100*/, (Gain)(ROUNDINT(( 53.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1CE), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18D),  L1D_LNA_HIGH,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -792/*-99*/, (Gain)(ROUNDINT(( 53.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1CE), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18D),  L1D_LNA_HIGH,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -784/*-98*/, (Gain)(ROUNDINT(( 53.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1CE), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18D),  L1D_LNA_HIGH,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -776/*-97*/, (Gain)(ROUNDINT(( 53.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1CE), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18D),  L1D_LNA_HIGH,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -768/*-96*/, (Gain)(ROUNDINT(( 53.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1CE), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18D),  L1D_LNA_HIGH,  MML1_ELNA_MODE_NULL},
/*MT6177L*/ #elif IS_2G_DYNAMIC_GAINTABLE_SWITCH_SUPPORT
/*MT6177L*/      {   -816/*-102*/, (Gain)(ROUNDINT(( 50.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18E), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18D),  L1D_LNA_HIGH,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -808/*-101*/, (Gain)(ROUNDINT(( 50.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18E), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18D),  L1D_LNA_HIGH,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -800/*-100*/, (Gain)(ROUNDINT(( 50.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18E), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18D),  L1D_LNA_HIGH,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -792/*-99*/, (Gain)(ROUNDINT(( 50.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18E), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18D),  L1D_LNA_HIGH,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -784/*-98*/, (Gain)(ROUNDINT(( 50.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18E), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18D),  L1D_LNA_HIGH,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -776/*-97*/, (Gain)(ROUNDINT(( 50.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18E), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18D),  L1D_LNA_HIGH,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -768/*-96*/, (Gain)(ROUNDINT(( 50.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18E), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18D),  L1D_LNA_HIGH,  MML1_ELNA_MODE_NULL},
/*MT6177L*/ #else
/*MT6177L*/      {   -816/*-102*/, (Gain)(ROUNDINT(( 47.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x14E), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18D),  L1D_LNA_HIGH,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -808/*-101*/, (Gain)(ROUNDINT(( 47.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x14E), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18D),  L1D_LNA_HIGH,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -800/*-100*/, (Gain)(ROUNDINT(( 47.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x14E), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18D),  L1D_LNA_HIGH,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -792/*-99*/, (Gain)(ROUNDINT(( 47.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x14E), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18D),  L1D_LNA_HIGH,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -784/*-98*/, (Gain)(ROUNDINT(( 47.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x14E), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18D),  L1D_LNA_HIGH,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -776/*-97*/, (Gain)(ROUNDINT(( 47.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x14E), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18D),  L1D_LNA_HIGH,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -768/*-96*/, (Gain)(ROUNDINT(( 47.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x14E), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18D),  L1D_LNA_HIGH,  MML1_ELNA_MODE_NULL},
/*MT6177L*/ #endif
/*MT6177L*/      {   -760/*-95*/, (Gain)(ROUNDINT(( 53.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1CE), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18D),  L1D_LNA_HIGH,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -752/*-94*/, (Gain)(ROUNDINT(( 53.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1CE), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18D),  L1D_LNA_HIGH,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -744/*-93*/, (Gain)(ROUNDINT(( 50.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18E), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18D),  L1D_LNA_HIGH,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -736/*-92*/, (Gain)(ROUNDINT(( 50.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18E), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18D),  L1D_LNA_HIGH,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -728/*-91*/, (Gain)(ROUNDINT(( 50.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18E), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18D),  L1D_LNA_HIGH,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -720/*-90*/, (Gain)(ROUNDINT(( 47.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x14E), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18D),  L1D_LNA_HIGH,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -712/*-89*/, (Gain)(ROUNDINT(( 47.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x14E), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18D),  L1D_LNA_HIGH,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -704/*-88*/, (Gain)(ROUNDINT(( 47.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x14E), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18D),  L1D_LNA_HIGH,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -696/*-87*/, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19E), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18D),  L1D_LNA_HIGH,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -688/*-86*/, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19E), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18D),  L1D_LNA_HIGH,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -680/*-85*/, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19E), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 38.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19D),  L1D_LNA_HIGH,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -672/*-84*/, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19E), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 38.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19D),  L1D_LNA_HIGH,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -664/*-83*/, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19E), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 38.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19D),  L1D_LNA_HIGH,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -656/*-82*/, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19E), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 38.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19D),  L1D_LNA_HIGH,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -648/*-81*/, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19E), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 38.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19D),  L1D_LNA_HIGH,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -640/*-80*/, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19E), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 38.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19D),  L1D_LNA_HIGH,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -632/*-79*/, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19E), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 38.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19D),  L1D_LNA_HIGH,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -624/*-78*/, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19E), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19E),  L1D_LNA_HIGH,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -616/*-77*/, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19E), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19E),  L1D_LNA_HIGH,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -608/*-76*/, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19E), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19E),  L1D_LNA_HIGH,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -600/*-75*/, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19E), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19E),  L1D_LNA_HIGH,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -592/*-74*/, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19E), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19E),  L1D_LNA_HIGH,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -584/*-73*/, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19E), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19E),  L1D_LNA_HIGH,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -576/*-72*/, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19E), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19E),  L1D_LNA_HIGH,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -568/*-71*/, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19E), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19E),  L1D_LNA_HIGH,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -560/*-70*/, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19E), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19E),  L1D_LNA_HIGH,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -552/*-69*/, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19E), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19E),  L1D_LNA_HIGH,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -544/*-68*/, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19E), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19E),  L1D_LNA_HIGH,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -536/*-67*/, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19E), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19E),  L1D_LNA_HIGH,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -528/*-66*/, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19E), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19E),  L1D_LNA_HIGH,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -520/*-65*/, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19E), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19E),  L1D_LNA_HIGH,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -512/*-64*/, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19E), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19E),  L1D_LNA_HIGH,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -504/*-63*/, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19E), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19E),  L1D_LNA_HIGH,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -496/*-62*/, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19E), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19E),  L1D_LNA_HIGH,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -488/*-61*/, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19E), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19E),  L1D_LNA_HIGH,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -480/*-60*/, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19E), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19E),  L1D_LNA_HIGH,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -472/*-59*/, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19E), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19E),  L1D_LNA_HIGH,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -464/*-58*/, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19E), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19E),  L1D_LNA_HIGH,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -456/*-57*/, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19E), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19E),  L1D_LNA_HIGH,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -448/*-56*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1DD), L1D_LNA_MIDDLE, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1DD),  L1D_LNA_MIDDLE,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -440/*-55*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1DD), L1D_LNA_MIDDLE, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1DD),  L1D_LNA_MIDDLE,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -432/*-54*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1DD), L1D_LNA_MIDDLE, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1DD),  L1D_LNA_MIDDLE,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -424/*-53*/, (Gain)(ROUNDINT(( 38.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19D), L1D_LNA_MIDDLE, (Gain)(ROUNDINT(( 38.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19D),  L1D_LNA_MIDDLE,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -416/*-52*/, (Gain)(ROUNDINT(( 38.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19D), L1D_LNA_MIDDLE, (Gain)(ROUNDINT(( 38.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19D),  L1D_LNA_MIDDLE,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -408/*-51*/, (Gain)(ROUNDINT(( 38.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19D), L1D_LNA_MIDDLE, (Gain)(ROUNDINT(( 38.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19D),  L1D_LNA_MIDDLE,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -400/*-50*/, (Gain)(ROUNDINT(( 35.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x15D), L1D_LNA_MIDDLE, (Gain)(ROUNDINT(( 35.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x15D),  L1D_LNA_MIDDLE,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -392/*-49*/, (Gain)(ROUNDINT(( 35.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x15D), L1D_LNA_MIDDLE, (Gain)(ROUNDINT(( 35.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x15D),  L1D_LNA_MIDDLE,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -384/*-48*/, (Gain)(ROUNDINT(( 35.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x15D), L1D_LNA_MIDDLE, (Gain)(ROUNDINT(( 35.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x15D),  L1D_LNA_MIDDLE,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -376/*-47*/, (Gain)(ROUNDINT(( 32.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x11D), L1D_LNA_MIDDLE, (Gain)(ROUNDINT(( 32.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x11D),  L1D_LNA_MIDDLE,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -368/*-46*/, (Gain)(ROUNDINT(( 32.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x11D), L1D_LNA_MIDDLE, (Gain)(ROUNDINT(( 32.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x11D),  L1D_LNA_MIDDLE,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -360/*-45*/, (Gain)(ROUNDINT(( 32.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x11D), L1D_LNA_MIDDLE, (Gain)(ROUNDINT(( 32.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x11D),  L1D_LNA_MIDDLE,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -352/*-44*/, (Gain)(ROUNDINT(( 29.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_MIDDLE, (Gain)(ROUNDINT(( 29.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD),  L1D_LNA_MIDDLE,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -344/*-43*/, (Gain)(ROUNDINT(( 29.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_MIDDLE, (Gain)(ROUNDINT(( 29.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD),  L1D_LNA_MIDDLE,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -336/*-42*/, (Gain)(ROUNDINT(( 29.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_MIDDLE, (Gain)(ROUNDINT(( 29.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD),  L1D_LNA_MIDDLE,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -328/*-41*/, (Gain)(ROUNDINT(( 26.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x209), L1D_LNA_LOW, (Gain)(ROUNDINT(( 26.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x209),  L1D_LNA_LOW,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -320/*-40*/, (Gain)(ROUNDINT(( 26.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x209), L1D_LNA_LOW, (Gain)(ROUNDINT(( 26.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x209),  L1D_LNA_LOW,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -312/*-39*/, (Gain)(ROUNDINT(( 26.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x209), L1D_LNA_LOW, (Gain)(ROUNDINT(( 26.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x209),  L1D_LNA_LOW,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -304/*-38*/, (Gain)(ROUNDINT(( 23.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1C9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 23.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1C9),  L1D_LNA_LOW,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -296/*-37*/, (Gain)(ROUNDINT(( 23.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1C9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 23.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1C9),  L1D_LNA_LOW,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -288/*-36*/, (Gain)(ROUNDINT(( 23.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1C9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 23.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1C9),  L1D_LNA_LOW,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -280/*-35*/, (Gain)(ROUNDINT(( 20.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x189), L1D_LNA_LOW, (Gain)(ROUNDINT(( 20.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x189),  L1D_LNA_LOW,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -272/*-34*/, (Gain)(ROUNDINT(( 20.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x189), L1D_LNA_LOW, (Gain)(ROUNDINT(( 20.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x189),  L1D_LNA_LOW,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -264/*-33*/, (Gain)(ROUNDINT(( 20.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x189), L1D_LNA_LOW, (Gain)(ROUNDINT(( 20.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x189),  L1D_LNA_LOW,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -256/*-32*/, (Gain)(ROUNDINT(( 17.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x149), L1D_LNA_LOW, (Gain)(ROUNDINT(( 17.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x149),  L1D_LNA_LOW,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -248/*-31*/, (Gain)(ROUNDINT(( 17.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x149), L1D_LNA_LOW, (Gain)(ROUNDINT(( 17.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x149),  L1D_LNA_LOW,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -240/*-30*/, (Gain)(ROUNDINT(( 17.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x149), L1D_LNA_LOW, (Gain)(ROUNDINT(( 17.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x149),  L1D_LNA_LOW,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -232/*-29*/, (Gain)(ROUNDINT(( 14.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x199), L1D_LNA_LOW, (Gain)(ROUNDINT(( 14.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x199),  L1D_LNA_LOW,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -224/*-28*/, (Gain)(ROUNDINT(( 14.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x199), L1D_LNA_LOW, (Gain)(ROUNDINT(( 14.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x199),  L1D_LNA_LOW,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -216/*-27*/, (Gain)(ROUNDINT(( 14.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x199), L1D_LNA_LOW, (Gain)(ROUNDINT(( 14.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x199),  L1D_LNA_LOW,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -208/*-26*/, (Gain)(ROUNDINT(( 11.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x159), L1D_LNA_LOW, (Gain)(ROUNDINT(( 11.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x159),  L1D_LNA_LOW,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -200/*-25*/, (Gain)(ROUNDINT(( 11.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x159), L1D_LNA_LOW, (Gain)(ROUNDINT(( 11.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x159),  L1D_LNA_LOW,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -192/*-24*/, (Gain)(ROUNDINT(( 11.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x159), L1D_LNA_LOW, (Gain)(ROUNDINT(( 11.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x159),  L1D_LNA_LOW,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -184/*-23*/, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x119), L1D_LNA_LOW, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x119),  L1D_LNA_LOW,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -176/*-22*/, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x119), L1D_LNA_LOW, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x119),  L1D_LNA_LOW,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -168/*-21*/, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x119), L1D_LNA_LOW, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x119),  L1D_LNA_LOW,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -160/*-20*/, (Gain)(ROUNDINT(( 5.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xD9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 5.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xD9),  L1D_LNA_LOW,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -152/*-19*/, (Gain)(ROUNDINT(( 5.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xD9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 5.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xD9),  L1D_LNA_LOW,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -144/*-18*/, (Gain)(ROUNDINT(( 5.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xD9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 5.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xD9),  L1D_LNA_LOW,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -136/*-17*/, (Gain)(ROUNDINT(( 2.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x139), L1D_LNA_LOW, (Gain)(ROUNDINT(( 2.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x139),  L1D_LNA_LOW,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -128/*-16*/, (Gain)(ROUNDINT(( 2.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x139), L1D_LNA_LOW, (Gain)(ROUNDINT(( 2.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x139),  L1D_LNA_LOW,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -120/*-15*/, (Gain)(ROUNDINT(( 2.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x139), L1D_LNA_LOW, (Gain)(ROUNDINT(( 2.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x139),  L1D_LNA_LOW,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -112/*-14*/, (Gain)(ROUNDINT(( -0.4-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xF9), L1D_LNA_LOW, (Gain)(ROUNDINT(( -0.4-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xF9),  L1D_LNA_LOW,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -104/*-13*/, (Gain)(ROUNDINT(( -0.4-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xF9), L1D_LNA_LOW, (Gain)(ROUNDINT(( -0.4-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xF9),  L1D_LNA_LOW,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -96/*-12*/, (Gain)(ROUNDINT(( -0.4-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xF9), L1D_LNA_LOW, (Gain)(ROUNDINT(( -0.4-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xF9),  L1D_LNA_LOW,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -88/*-11*/, (Gain)(ROUNDINT(( -3.4-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9), L1D_LNA_LOW, (Gain)(ROUNDINT(( -3.4-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9),  L1D_LNA_LOW,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -80/*-10*/, (Gain)(ROUNDINT(( -3.4-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9), L1D_LNA_LOW, (Gain)(ROUNDINT(( -3.4-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9),  L1D_LNA_LOW,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -72/*-9*/, (Gain)(ROUNDINT(( -3.4-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9), L1D_LNA_LOW, (Gain)(ROUNDINT(( -3.4-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9),  L1D_LNA_LOW,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -64/*-8*/, (Gain)(ROUNDINT(( -3.4-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9), L1D_LNA_LOW, (Gain)(ROUNDINT(( -3.4-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9),  L1D_LNA_LOW,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -56/*-7*/, (Gain)(ROUNDINT(( -3.4-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9), L1D_LNA_LOW, (Gain)(ROUNDINT(( -3.4-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9),  L1D_LNA_LOW,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -48/*-6*/, (Gain)(ROUNDINT(( -3.4-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9), L1D_LNA_LOW, (Gain)(ROUNDINT(( -3.4-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9),  L1D_LNA_LOW,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -40/*-5*/, (Gain)(ROUNDINT(( -3.4-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9), L1D_LNA_LOW, (Gain)(ROUNDINT(( -3.4-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9),  L1D_LNA_LOW,  MML1_ELNA_MODE_NULL},
/*MT6177L*/    }
/*MT6177L*/ };
/*MT6177L*/ const  sL1DAGCHALDATA  AGC_TABLE_HAL_HIGHBAND=
/*MT6177L*/ {  
/*MT6177L*/    (Gain)(ROUNDINT(( 62.6-PVOFSL )*(PWRRES))),  //max_gain
/*MT6177L*/    (Gain)(ROUNDINT(( -3.4-PVOFSL )*(PWRRES))),  //min_gain
/*MT6177L*/    -880/*-110*/,  //max_predict_power
/*MT6177L*/    -40/*-5*/,  //min_predict_power
/*MT6177L*/    -86*PWRRES,  //IBBD_Pin_THRESHOLD
/*MT6177L*/    -71*PWRRES,  //HRD_Pin_THRESHOLD
/*MT6177L*/    {  
/*MT6177L*/      {   -880/*-110*/, (Gain)(ROUNDINT(( 62.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1A06), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x198D),  L1D_LNA_HIGH,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -872/*-109*/, (Gain)(ROUNDINT(( 62.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1A06), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x198D),  L1D_LNA_HIGH,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -864/*-108*/, (Gain)(ROUNDINT(( 62.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1A06), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x198D),  L1D_LNA_HIGH,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -856/*-107*/, (Gain)(ROUNDINT(( 59.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19C6), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x198D),  L1D_LNA_HIGH,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -848/*-106*/, (Gain)(ROUNDINT(( 59.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19C6), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x198D),  L1D_LNA_HIGH,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -840/*-105*/, (Gain)(ROUNDINT(( 59.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19C6), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x198D),  L1D_LNA_HIGH,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -832/*-104*/, (Gain)(ROUNDINT(( 56.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1A0E), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x198D),  L1D_LNA_HIGH,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -824/*-103*/, (Gain)(ROUNDINT(( 56.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1A0E), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x198D),  L1D_LNA_HIGH,  MML1_ELNA_MODE_NULL},
/*MT6177L*/ #if IS_2G_6DB_DYNAMIC_GAINTABLE_SWITCH_SUPPORT
/*MT6177L*/      {   -816/*-102*/, (Gain)(ROUNDINT(( 53.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19CE), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x198D),  L1D_LNA_HIGH,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -808/*-101*/, (Gain)(ROUNDINT(( 53.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19CE), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x198D),  L1D_LNA_HIGH,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -800/*-100*/, (Gain)(ROUNDINT(( 53.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19CE), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x198D),  L1D_LNA_HIGH,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -792/*-99*/, (Gain)(ROUNDINT(( 53.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19CE), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x198D),  L1D_LNA_HIGH,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -784/*-98*/, (Gain)(ROUNDINT(( 53.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19CE), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x198D),  L1D_LNA_HIGH,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -776/*-97*/, (Gain)(ROUNDINT(( 53.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19CE), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x198D),  L1D_LNA_HIGH,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -768/*-96*/, (Gain)(ROUNDINT(( 53.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19CE), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x198D),  L1D_LNA_HIGH,  MML1_ELNA_MODE_NULL},
/*MT6177L*/ #elif IS_2G_DYNAMIC_GAINTABLE_SWITCH_SUPPORT
/*MT6177L*/      {   -816/*-102*/, (Gain)(ROUNDINT(( 50.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x198E), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x198D),  L1D_LNA_HIGH,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -808/*-101*/, (Gain)(ROUNDINT(( 50.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x198E), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x198D),  L1D_LNA_HIGH,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -800/*-100*/, (Gain)(ROUNDINT(( 50.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x198E), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x198D),  L1D_LNA_HIGH,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -792/*-99*/, (Gain)(ROUNDINT(( 50.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x198E), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x198D),  L1D_LNA_HIGH,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -784/*-98*/, (Gain)(ROUNDINT(( 50.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x198E), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x198D),  L1D_LNA_HIGH,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -776/*-97*/, (Gain)(ROUNDINT(( 50.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x198E), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x198D),  L1D_LNA_HIGH,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -768/*-96*/, (Gain)(ROUNDINT(( 50.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x198E), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x198D),  L1D_LNA_HIGH,  MML1_ELNA_MODE_NULL},
/*MT6177L*/ #else
/*MT6177L*/      {   -816/*-102*/, (Gain)(ROUNDINT(( 47.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x194E), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x198D),  L1D_LNA_HIGH,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -808/*-101*/, (Gain)(ROUNDINT(( 47.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x194E), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x198D),  L1D_LNA_HIGH,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -800/*-100*/, (Gain)(ROUNDINT(( 47.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x194E), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x198D),  L1D_LNA_HIGH,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -792/*-99*/, (Gain)(ROUNDINT(( 47.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x194E), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x198D),  L1D_LNA_HIGH,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -784/*-98*/, (Gain)(ROUNDINT(( 47.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x194E), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x198D),  L1D_LNA_HIGH,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -776/*-97*/, (Gain)(ROUNDINT(( 47.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x194E), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x198D),  L1D_LNA_HIGH,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -768/*-96*/, (Gain)(ROUNDINT(( 47.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x194E), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x198D),  L1D_LNA_HIGH,  MML1_ELNA_MODE_NULL},
/*MT6177L*/ #endif
/*MT6177L*/      {   -760/*-95*/, (Gain)(ROUNDINT(( 53.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19CE), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x198D),  L1D_LNA_HIGH,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -752/*-94*/, (Gain)(ROUNDINT(( 53.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19CE), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x198D),  L1D_LNA_HIGH,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -744/*-93*/, (Gain)(ROUNDINT(( 50.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x198E), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x198D),  L1D_LNA_HIGH,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -736/*-92*/, (Gain)(ROUNDINT(( 50.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x198E), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x198D),  L1D_LNA_HIGH,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -728/*-91*/, (Gain)(ROUNDINT(( 50.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x198E), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x198D),  L1D_LNA_HIGH,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -720/*-90*/, (Gain)(ROUNDINT(( 47.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x194E), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x198D),  L1D_LNA_HIGH,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -712/*-89*/, (Gain)(ROUNDINT(( 47.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x194E), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x198D),  L1D_LNA_HIGH,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -704/*-88*/, (Gain)(ROUNDINT(( 47.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x194E), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x198D),  L1D_LNA_HIGH,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -696/*-87*/, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x199E), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x198D),  L1D_LNA_HIGH,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -688/*-86*/, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x199E), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x198D),  L1D_LNA_HIGH,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -680/*-85*/, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x199E), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 38.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x199D),  L1D_LNA_HIGH,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -672/*-84*/, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x199E), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 38.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x199D),  L1D_LNA_HIGH,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -664/*-83*/, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x199E), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 38.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x199D),  L1D_LNA_HIGH,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -656/*-82*/, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x199E), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 38.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x199D),  L1D_LNA_HIGH,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -648/*-81*/, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x199E), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 38.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x199D),  L1D_LNA_HIGH,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -640/*-80*/, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x199E), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 38.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x199D),  L1D_LNA_HIGH,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -632/*-79*/, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x199E), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 38.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x199D),  L1D_LNA_HIGH,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -624/*-78*/, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x199E), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x199E),  L1D_LNA_HIGH,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -616/*-77*/, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x199E), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x199E),  L1D_LNA_HIGH,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -608/*-76*/, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x199E), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x199E),  L1D_LNA_HIGH,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -600/*-75*/, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x199E), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x199E),  L1D_LNA_HIGH,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -592/*-74*/, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x199E), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x199E),  L1D_LNA_HIGH,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -584/*-73*/, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x199E), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x199E),  L1D_LNA_HIGH,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -576/*-72*/, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x199E), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x199E),  L1D_LNA_HIGH,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -568/*-71*/, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x199E), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x199E),  L1D_LNA_HIGH,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -560/*-70*/, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x199E), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x199E),  L1D_LNA_HIGH,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -552/*-69*/, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x199E), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x199E),  L1D_LNA_HIGH,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -544/*-68*/, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x199E), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x199E),  L1D_LNA_HIGH,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -536/*-67*/, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x199E), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x199E),  L1D_LNA_HIGH,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -528/*-66*/, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x199E), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x199E),  L1D_LNA_HIGH,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -520/*-65*/, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x199E), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x199E),  L1D_LNA_HIGH,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -512/*-64*/, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x199E), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x199E),  L1D_LNA_HIGH,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -504/*-63*/, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x199E), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x199E),  L1D_LNA_HIGH,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -496/*-62*/, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x199E), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x199E),  L1D_LNA_HIGH,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -488/*-61*/, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x199E), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x199E),  L1D_LNA_HIGH,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -480/*-60*/, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x199E), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x199E),  L1D_LNA_HIGH,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -472/*-59*/, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x199E), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x199E),  L1D_LNA_HIGH,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -464/*-58*/, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x199E), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x199E),  L1D_LNA_HIGH,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -456/*-57*/, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x199E), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x199E),  L1D_LNA_HIGH,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -448/*-56*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19DD), L1D_LNA_MIDDLE, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19DD),  L1D_LNA_MIDDLE,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -440/*-55*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19DD), L1D_LNA_MIDDLE, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19DD),  L1D_LNA_MIDDLE,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -432/*-54*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19DD), L1D_LNA_MIDDLE, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19DD),  L1D_LNA_MIDDLE,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -424/*-53*/, (Gain)(ROUNDINT(( 38.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x199D), L1D_LNA_MIDDLE, (Gain)(ROUNDINT(( 38.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x199D),  L1D_LNA_MIDDLE,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -416/*-52*/, (Gain)(ROUNDINT(( 38.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x199D), L1D_LNA_MIDDLE, (Gain)(ROUNDINT(( 38.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x199D),  L1D_LNA_MIDDLE,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -408/*-51*/, (Gain)(ROUNDINT(( 38.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x199D), L1D_LNA_MIDDLE, (Gain)(ROUNDINT(( 38.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x199D),  L1D_LNA_MIDDLE,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -400/*-50*/, (Gain)(ROUNDINT(( 35.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x195D), L1D_LNA_MIDDLE, (Gain)(ROUNDINT(( 35.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x195D),  L1D_LNA_MIDDLE,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -392/*-49*/, (Gain)(ROUNDINT(( 35.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x195D), L1D_LNA_MIDDLE, (Gain)(ROUNDINT(( 35.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x195D),  L1D_LNA_MIDDLE,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -384/*-48*/, (Gain)(ROUNDINT(( 35.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x195D), L1D_LNA_MIDDLE, (Gain)(ROUNDINT(( 35.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x195D),  L1D_LNA_MIDDLE,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -376/*-47*/, (Gain)(ROUNDINT(( 32.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x191D), L1D_LNA_MIDDLE, (Gain)(ROUNDINT(( 32.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x191D),  L1D_LNA_MIDDLE,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -368/*-46*/, (Gain)(ROUNDINT(( 32.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x191D), L1D_LNA_MIDDLE, (Gain)(ROUNDINT(( 32.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x191D),  L1D_LNA_MIDDLE,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -360/*-45*/, (Gain)(ROUNDINT(( 32.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x191D), L1D_LNA_MIDDLE, (Gain)(ROUNDINT(( 32.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x191D),  L1D_LNA_MIDDLE,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -352/*-44*/, (Gain)(ROUNDINT(( 29.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DD), L1D_LNA_MIDDLE, (Gain)(ROUNDINT(( 29.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DD),  L1D_LNA_MIDDLE,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -344/*-43*/, (Gain)(ROUNDINT(( 29.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DD), L1D_LNA_MIDDLE, (Gain)(ROUNDINT(( 29.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DD),  L1D_LNA_MIDDLE,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -336/*-42*/, (Gain)(ROUNDINT(( 29.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DD), L1D_LNA_MIDDLE, (Gain)(ROUNDINT(( 29.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DD),  L1D_LNA_MIDDLE,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -328/*-41*/, (Gain)(ROUNDINT(( 26.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1A09), L1D_LNA_LOW, (Gain)(ROUNDINT(( 26.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1A09),  L1D_LNA_LOW,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -320/*-40*/, (Gain)(ROUNDINT(( 26.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1A09), L1D_LNA_LOW, (Gain)(ROUNDINT(( 26.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1A09),  L1D_LNA_LOW,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -312/*-39*/, (Gain)(ROUNDINT(( 26.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1A09), L1D_LNA_LOW, (Gain)(ROUNDINT(( 26.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1A09),  L1D_LNA_LOW,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -304/*-38*/, (Gain)(ROUNDINT(( 23.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19C9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 23.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19C9),  L1D_LNA_LOW,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -296/*-37*/, (Gain)(ROUNDINT(( 23.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19C9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 23.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19C9),  L1D_LNA_LOW,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -288/*-36*/, (Gain)(ROUNDINT(( 23.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19C9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 23.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19C9),  L1D_LNA_LOW,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -280/*-35*/, (Gain)(ROUNDINT(( 20.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1989), L1D_LNA_LOW, (Gain)(ROUNDINT(( 20.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1989),  L1D_LNA_LOW,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -272/*-34*/, (Gain)(ROUNDINT(( 20.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1989), L1D_LNA_LOW, (Gain)(ROUNDINT(( 20.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1989),  L1D_LNA_LOW,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -264/*-33*/, (Gain)(ROUNDINT(( 20.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1989), L1D_LNA_LOW, (Gain)(ROUNDINT(( 20.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1989),  L1D_LNA_LOW,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -256/*-32*/, (Gain)(ROUNDINT(( 17.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1949), L1D_LNA_LOW, (Gain)(ROUNDINT(( 17.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1949),  L1D_LNA_LOW,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -248/*-31*/, (Gain)(ROUNDINT(( 17.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1949), L1D_LNA_LOW, (Gain)(ROUNDINT(( 17.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1949),  L1D_LNA_LOW,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -240/*-30*/, (Gain)(ROUNDINT(( 17.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1949), L1D_LNA_LOW, (Gain)(ROUNDINT(( 17.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1949),  L1D_LNA_LOW,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -232/*-29*/, (Gain)(ROUNDINT(( 14.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1999), L1D_LNA_LOW, (Gain)(ROUNDINT(( 14.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1999),  L1D_LNA_LOW,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -224/*-28*/, (Gain)(ROUNDINT(( 14.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1999), L1D_LNA_LOW, (Gain)(ROUNDINT(( 14.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1999),  L1D_LNA_LOW,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -216/*-27*/, (Gain)(ROUNDINT(( 14.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1999), L1D_LNA_LOW, (Gain)(ROUNDINT(( 14.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1999),  L1D_LNA_LOW,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -208/*-26*/, (Gain)(ROUNDINT(( 11.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1959), L1D_LNA_LOW, (Gain)(ROUNDINT(( 11.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1959),  L1D_LNA_LOW,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -200/*-25*/, (Gain)(ROUNDINT(( 11.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1959), L1D_LNA_LOW, (Gain)(ROUNDINT(( 11.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1959),  L1D_LNA_LOW,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -192/*-24*/, (Gain)(ROUNDINT(( 11.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1959), L1D_LNA_LOW, (Gain)(ROUNDINT(( 11.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1959),  L1D_LNA_LOW,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -184/*-23*/, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1919), L1D_LNA_LOW, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1919),  L1D_LNA_LOW,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -176/*-22*/, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1919), L1D_LNA_LOW, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1919),  L1D_LNA_LOW,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -168/*-21*/, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1919), L1D_LNA_LOW, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1919),  L1D_LNA_LOW,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -160/*-20*/, (Gain)(ROUNDINT(( 5.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18D9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 5.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18D9),  L1D_LNA_LOW,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -152/*-19*/, (Gain)(ROUNDINT(( 5.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18D9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 5.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18D9),  L1D_LNA_LOW,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -144/*-18*/, (Gain)(ROUNDINT(( 5.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18D9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 5.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18D9),  L1D_LNA_LOW,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -136/*-17*/, (Gain)(ROUNDINT(( 2.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1939), L1D_LNA_LOW, (Gain)(ROUNDINT(( 2.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1939),  L1D_LNA_LOW,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -128/*-16*/, (Gain)(ROUNDINT(( 2.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1939), L1D_LNA_LOW, (Gain)(ROUNDINT(( 2.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1939),  L1D_LNA_LOW,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -120/*-15*/, (Gain)(ROUNDINT(( 2.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1939), L1D_LNA_LOW, (Gain)(ROUNDINT(( 2.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1939),  L1D_LNA_LOW,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -112/*-14*/, (Gain)(ROUNDINT(( -0.4-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18F9), L1D_LNA_LOW, (Gain)(ROUNDINT(( -0.4-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18F9),  L1D_LNA_LOW,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -104/*-13*/, (Gain)(ROUNDINT(( -0.4-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18F9), L1D_LNA_LOW, (Gain)(ROUNDINT(( -0.4-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18F9),  L1D_LNA_LOW,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -96/*-12*/, (Gain)(ROUNDINT(( -0.4-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18F9), L1D_LNA_LOW, (Gain)(ROUNDINT(( -0.4-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18F9),  L1D_LNA_LOW,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -88/*-11*/, (Gain)(ROUNDINT(( -3.4-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18B9), L1D_LNA_LOW, (Gain)(ROUNDINT(( -3.4-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18B9),  L1D_LNA_LOW,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -80/*-10*/, (Gain)(ROUNDINT(( -3.4-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18B9), L1D_LNA_LOW, (Gain)(ROUNDINT(( -3.4-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18B9),  L1D_LNA_LOW,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -72/*-9*/, (Gain)(ROUNDINT(( -3.4-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18B9), L1D_LNA_LOW, (Gain)(ROUNDINT(( -3.4-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18B9),  L1D_LNA_LOW,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -64/*-8*/, (Gain)(ROUNDINT(( -3.4-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18B9), L1D_LNA_LOW, (Gain)(ROUNDINT(( -3.4-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18B9),  L1D_LNA_LOW,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -56/*-7*/, (Gain)(ROUNDINT(( -3.4-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18B9), L1D_LNA_LOW, (Gain)(ROUNDINT(( -3.4-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18B9),  L1D_LNA_LOW,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -48/*-6*/, (Gain)(ROUNDINT(( -3.4-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18B9), L1D_LNA_LOW, (Gain)(ROUNDINT(( -3.4-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18B9),  L1D_LNA_LOW,  MML1_ELNA_MODE_NULL},
/*MT6177L*/      {   -40/*-5*/, (Gain)(ROUNDINT(( -3.4-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18B9), L1D_LNA_LOW, (Gain)(ROUNDINT(( -3.4-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18B9),  L1D_LNA_LOW,  MML1_ELNA_MODE_NULL},
/*MT6177L*/    }
/*MT6177L*/ };
/*MT6177L*/ const  sL1DAGCHALDATA *const  AGC_TABLE_HAL_LIST[] =
/*MT6177L*/ {  0,                                                     /*#FrequencyBand400  */
/*MT6177L*/    &AGC_TABLE_HAL_LOWBAND,                                /* FrequencyBand850  */
/*MT6177L*/    &AGC_TABLE_HAL_LOWBAND,                                /* FrequencyBand900  */
/*MT6177L*/    &AGC_TABLE_HAL_HIGHBAND,                               /* FrequencyBand1800 */
/*MT6177L*/    &AGC_TABLE_HAL_HIGHBAND,                               /* FrequencyBand1900 */
/*MT6177L*/ };
/*MT6177L*/   #if IS_2G_EXTERNAL_LNA_SUPPORT
/*MT6177L*/ const  sL1DAGCHALDATA  AGC_TABLE_HAL_ELNA_LOWBAND=
/*MT6177L*/ {  
/*MT6177L*/    (Gain)(ROUNDINT(( 68.6-PVOFSL )*(PWRRES))),  //max_gain
/*MT6177L*/    (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))),  //min_gain
/*MT6177L*/    -880/*-110*/,  //max_predict_power
/*MT6177L*/    -40/*-5*/,  //min_predict_power
/*MT6177L*/    -86*PWRRES,  //IBBD_Pin_THRESHOLD
/*MT6177L*/    -71*PWRRES,  //HRD_Pin_THRESHOLD
/*MT6177L*/    {  
/*MT6177L*/      {   -880/*-110*/, (Gain)(ROUNDINT(( 68.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x20E), L1D_LNA_HIGH_SENSITIVITY, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BD),  L1D_LNA_HIGH_SENSITIVITY,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -872/*-109*/, (Gain)(ROUNDINT(( 68.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x20E), L1D_LNA_HIGH_SENSITIVITY, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BD),  L1D_LNA_HIGH_SENSITIVITY,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -864/*-108*/, (Gain)(ROUNDINT(( 68.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x20E), L1D_LNA_HIGH_SENSITIVITY, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BD),  L1D_LNA_HIGH_SENSITIVITY,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -856/*-107*/, (Gain)(ROUNDINT(( 68.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x20E), L1D_LNA_HIGH_SENSITIVITY, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BD),  L1D_LNA_HIGH_SENSITIVITY,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -848/*-106*/, (Gain)(ROUNDINT(( 68.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x20E), L1D_LNA_HIGH_SENSITIVITY, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BD),  L1D_LNA_HIGH_SENSITIVITY,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -840/*-105*/, (Gain)(ROUNDINT(( 68.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x20E), L1D_LNA_HIGH_SENSITIVITY, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BD),  L1D_LNA_HIGH_SENSITIVITY,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -832/*-104*/, (Gain)(ROUNDINT(( 68.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x20E), L1D_LNA_HIGH_SENSITIVITY, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BD),  L1D_LNA_HIGH_SENSITIVITY,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -824/*-103*/, (Gain)(ROUNDINT(( 68.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x20E), L1D_LNA_HIGH_SENSITIVITY, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BD),  L1D_LNA_HIGH_SENSITIVITY,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -816/*-102*/, (Gain)(ROUNDINT(( 47.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x15D), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -808/*-101*/, (Gain)(ROUNDINT(( 47.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x15D), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -800/*-100*/, (Gain)(ROUNDINT(( 47.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x15D), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -792/*-99*/, (Gain)(ROUNDINT(( 47.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x15D), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -784/*-98*/, (Gain)(ROUNDINT(( 47.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x15D), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -776/*-97*/, (Gain)(ROUNDINT(( 47.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x15D), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -768/*-96*/, (Gain)(ROUNDINT(( 47.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x15D), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -760/*-95*/, (Gain)(ROUNDINT(( 50.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x10D), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -752/*-94*/, (Gain)(ROUNDINT(( 50.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x10D), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -744/*-93*/, (Gain)(ROUNDINT(( 50.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x10D), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -736/*-92*/, (Gain)(ROUNDINT(( 47.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x15D), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -728/*-91*/, (Gain)(ROUNDINT(( 47.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x15D), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -720/*-90*/, (Gain)(ROUNDINT(( 47.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x15D), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -712/*-89*/, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x11D), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -704/*-88*/, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x11D), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -696/*-87*/, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x11D), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -688/*-86*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -680/*-85*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 38.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BC),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -672/*-84*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 38.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BC),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -664/*-83*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 38.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BC),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -656/*-82*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 38.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BC),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -648/*-81*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 38.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BC),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -640/*-80*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 38.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BC),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -632/*-79*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 38.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BC),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -624/*-78*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -616/*-77*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -608/*-76*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -600/*-75*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -592/*-74*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -584/*-73*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -576/*-72*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -568/*-71*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -560/*-70*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -552/*-69*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -544/*-68*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -536/*-67*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -528/*-66*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -520/*-65*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -512/*-64*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -504/*-63*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -496/*-62*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -488/*-61*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -480/*-60*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -472/*-59*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -464/*-58*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -456/*-57*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -448/*-56*/, (Gain)(ROUNDINT(( 38.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x11C), L1D_LNA_MIDDLE, (Gain)(ROUNDINT(( 38.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x11C),  L1D_LNA_MIDDLE,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -440/*-55*/, (Gain)(ROUNDINT(( 38.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x11C), L1D_LNA_MIDDLE, (Gain)(ROUNDINT(( 38.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x11C),  L1D_LNA_MIDDLE,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -432/*-54*/, (Gain)(ROUNDINT(( 38.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x11C), L1D_LNA_MIDDLE, (Gain)(ROUNDINT(( 38.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x11C),  L1D_LNA_MIDDLE,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -424/*-53*/, (Gain)(ROUNDINT(( 35.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDC), L1D_LNA_MIDDLE, (Gain)(ROUNDINT(( 35.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDC),  L1D_LNA_MIDDLE,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -416/*-52*/, (Gain)(ROUNDINT(( 35.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDC), L1D_LNA_MIDDLE, (Gain)(ROUNDINT(( 35.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDC),  L1D_LNA_MIDDLE,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -408/*-51*/, (Gain)(ROUNDINT(( 35.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDC), L1D_LNA_MIDDLE, (Gain)(ROUNDINT(( 35.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDC),  L1D_LNA_MIDDLE,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -400/*-50*/, (Gain)(ROUNDINT(( 32.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x189), L1D_LNA_LOW, (Gain)(ROUNDINT(( 32.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x189),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -392/*-49*/, (Gain)(ROUNDINT(( 32.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x189), L1D_LNA_LOW, (Gain)(ROUNDINT(( 32.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x189),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -384/*-48*/, (Gain)(ROUNDINT(( 32.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x189), L1D_LNA_LOW, (Gain)(ROUNDINT(( 32.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x189),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -376/*-47*/, (Gain)(ROUNDINT(( 29.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x149), L1D_LNA_LOW, (Gain)(ROUNDINT(( 29.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x149),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -368/*-46*/, (Gain)(ROUNDINT(( 29.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x149), L1D_LNA_LOW, (Gain)(ROUNDINT(( 29.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x149),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -360/*-45*/, (Gain)(ROUNDINT(( 29.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x149), L1D_LNA_LOW, (Gain)(ROUNDINT(( 29.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x149),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -352/*-44*/, (Gain)(ROUNDINT(( 26.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x109), L1D_LNA_LOW, (Gain)(ROUNDINT(( 26.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x109),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -344/*-43*/, (Gain)(ROUNDINT(( 26.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x109), L1D_LNA_LOW, (Gain)(ROUNDINT(( 26.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x109),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -336/*-42*/, (Gain)(ROUNDINT(( 26.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x109), L1D_LNA_LOW, (Gain)(ROUNDINT(( 26.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x109),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -328/*-41*/, (Gain)(ROUNDINT(( 23.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x159), L1D_LNA_LOW, (Gain)(ROUNDINT(( 23.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x159),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -320/*-40*/, (Gain)(ROUNDINT(( 23.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x159), L1D_LNA_LOW, (Gain)(ROUNDINT(( 23.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x159),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -312/*-39*/, (Gain)(ROUNDINT(( 23.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x159), L1D_LNA_LOW, (Gain)(ROUNDINT(( 23.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x159),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -304/*-38*/, (Gain)(ROUNDINT(( 20.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x119), L1D_LNA_LOW, (Gain)(ROUNDINT(( 20.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x119),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -296/*-37*/, (Gain)(ROUNDINT(( 20.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x119), L1D_LNA_LOW, (Gain)(ROUNDINT(( 20.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x119),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -288/*-36*/, (Gain)(ROUNDINT(( 20.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x119), L1D_LNA_LOW, (Gain)(ROUNDINT(( 20.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x119),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -280/*-35*/, (Gain)(ROUNDINT(( 17.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xD9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 17.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xD9),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -272/*-34*/, (Gain)(ROUNDINT(( 17.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xD9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 17.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xD9),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -264/*-33*/, (Gain)(ROUNDINT(( 17.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xD9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 17.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xD9),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -256/*-32*/, (Gain)(ROUNDINT(( 14.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x139), L1D_LNA_LOW, (Gain)(ROUNDINT(( 14.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x139),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -248/*-31*/, (Gain)(ROUNDINT(( 14.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x139), L1D_LNA_LOW, (Gain)(ROUNDINT(( 14.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x139),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -240/*-30*/, (Gain)(ROUNDINT(( 14.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x139), L1D_LNA_LOW, (Gain)(ROUNDINT(( 14.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x139),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -232/*-29*/, (Gain)(ROUNDINT(( 11.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xF9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 11.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xF9),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -224/*-28*/, (Gain)(ROUNDINT(( 11.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xF9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 11.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xF9),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -216/*-27*/, (Gain)(ROUNDINT(( 11.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xF9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 11.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xF9),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -208/*-26*/, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -200/*-25*/, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -192/*-24*/, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -184/*-23*/, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -176/*-22*/, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -168/*-21*/, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -160/*-20*/, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -152/*-19*/, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -144/*-18*/, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -136/*-17*/, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -128/*-16*/, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -120/*-15*/, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -112/*-14*/, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -104/*-13*/, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -96/*-12*/, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -88/*-11*/, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -80/*-10*/, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -72/*-9*/, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -64/*-8*/, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -56/*-7*/, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -48/*-6*/, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -40/*-5*/, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/    }
/*MT6177L*/ };
/*MT6177L*/ const  sL1DAGCHALDATA  AGC_TABLE_HAL_ELNA_HIGHBAND=
/*MT6177L*/ {  
/*MT6177L*/    (Gain)(ROUNDINT(( 56.6-PVOFSL )*(PWRRES))),  //max_gain
/*MT6177L*/    (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))),  //min_gain
/*MT6177L*/    -880/*-110*/,  //max_predict_power
/*MT6177L*/    -40/*-5*/,  //min_predict_power
/*MT6177L*/    -86*PWRRES,  //IBBD_Pin_THRESHOLD
/*MT6177L*/    -71*PWRRES,  //HRD_Pin_THRESHOLD
/*MT6177L*/    {  
/*MT6177L*/      {   -880/*-110*/, (Gain)(ROUNDINT(( 68.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1A0E), L1D_LNA_HIGH_SENSITIVITY, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19BD),  L1D_LNA_HIGH_SENSITIVITY,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -872/*-109*/, (Gain)(ROUNDINT(( 68.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1A0E), L1D_LNA_HIGH_SENSITIVITY, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19BD),  L1D_LNA_HIGH_SENSITIVITY,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -864/*-108*/, (Gain)(ROUNDINT(( 68.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1A0E), L1D_LNA_HIGH_SENSITIVITY, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19BD),  L1D_LNA_HIGH_SENSITIVITY,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -856/*-107*/, (Gain)(ROUNDINT(( 68.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1A0E), L1D_LNA_HIGH_SENSITIVITY, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19BD),  L1D_LNA_HIGH_SENSITIVITY,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -848/*-106*/, (Gain)(ROUNDINT(( 68.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1A0E), L1D_LNA_HIGH_SENSITIVITY, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19BD),  L1D_LNA_HIGH_SENSITIVITY,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -840/*-105*/, (Gain)(ROUNDINT(( 68.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1A0E), L1D_LNA_HIGH_SENSITIVITY, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19BD),  L1D_LNA_HIGH_SENSITIVITY,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -832/*-104*/, (Gain)(ROUNDINT(( 68.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1A0E), L1D_LNA_HIGH_SENSITIVITY, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19BD),  L1D_LNA_HIGH_SENSITIVITY,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -824/*-103*/, (Gain)(ROUNDINT(( 68.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1A0E), L1D_LNA_HIGH_SENSITIVITY, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19BD),  L1D_LNA_HIGH_SENSITIVITY,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -816/*-102*/, (Gain)(ROUNDINT(( 47.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x195D), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19BD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -808/*-101*/, (Gain)(ROUNDINT(( 47.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x195D), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19BD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -800/*-100*/, (Gain)(ROUNDINT(( 47.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x195D), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19BD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -792/*-99*/, (Gain)(ROUNDINT(( 47.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x195D), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19BD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -784/*-98*/, (Gain)(ROUNDINT(( 47.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x195D), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19BD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -776/*-97*/, (Gain)(ROUNDINT(( 47.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x195D), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19BD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -768/*-96*/, (Gain)(ROUNDINT(( 47.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x195D), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19BD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -760/*-95*/, (Gain)(ROUNDINT(( 50.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x190D), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19BD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -752/*-94*/, (Gain)(ROUNDINT(( 50.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x190D), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19BD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -744/*-93*/, (Gain)(ROUNDINT(( 50.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x190D), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19BD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -736/*-92*/, (Gain)(ROUNDINT(( 47.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x195D), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19BD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -728/*-91*/, (Gain)(ROUNDINT(( 47.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x195D), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19BD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -720/*-90*/, (Gain)(ROUNDINT(( 47.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x195D), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19BD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -712/*-89*/, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x191D), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19BD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -704/*-88*/, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x191D), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19BD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -696/*-87*/, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x191D), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19BD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -688/*-86*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19BD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -680/*-85*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 38.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19BC),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -672/*-84*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 38.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19BC),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -664/*-83*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 38.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19BC),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -656/*-82*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 38.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19BC),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -648/*-81*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 38.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19BC),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -640/*-80*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 38.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19BC),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -632/*-79*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 38.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19BC),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -624/*-78*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -616/*-77*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -608/*-76*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -600/*-75*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -592/*-74*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -584/*-73*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -576/*-72*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -568/*-71*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -560/*-70*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -552/*-69*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -544/*-68*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -536/*-67*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -528/*-66*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -520/*-65*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -512/*-64*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -504/*-63*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -496/*-62*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -488/*-61*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -480/*-60*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -472/*-59*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -464/*-58*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -456/*-57*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -448/*-56*/, (Gain)(ROUNDINT(( 38.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x191C), L1D_LNA_MIDDLE, (Gain)(ROUNDINT(( 38.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x191C),  L1D_LNA_MIDDLE,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -440/*-55*/, (Gain)(ROUNDINT(( 38.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x191C), L1D_LNA_MIDDLE, (Gain)(ROUNDINT(( 38.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x191C),  L1D_LNA_MIDDLE,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -432/*-54*/, (Gain)(ROUNDINT(( 38.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x191C), L1D_LNA_MIDDLE, (Gain)(ROUNDINT(( 38.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x191C),  L1D_LNA_MIDDLE,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -424/*-53*/, (Gain)(ROUNDINT(( 35.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DC), L1D_LNA_MIDDLE, (Gain)(ROUNDINT(( 35.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DC),  L1D_LNA_MIDDLE,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -416/*-52*/, (Gain)(ROUNDINT(( 35.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DC), L1D_LNA_MIDDLE, (Gain)(ROUNDINT(( 35.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DC),  L1D_LNA_MIDDLE,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -408/*-51*/, (Gain)(ROUNDINT(( 35.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DC), L1D_LNA_MIDDLE, (Gain)(ROUNDINT(( 35.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DC),  L1D_LNA_MIDDLE,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -400/*-50*/, (Gain)(ROUNDINT(( 32.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1989), L1D_LNA_LOW, (Gain)(ROUNDINT(( 32.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1989),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -392/*-49*/, (Gain)(ROUNDINT(( 32.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1989), L1D_LNA_LOW, (Gain)(ROUNDINT(( 32.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1989),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -384/*-48*/, (Gain)(ROUNDINT(( 32.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1989), L1D_LNA_LOW, (Gain)(ROUNDINT(( 32.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1989),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -376/*-47*/, (Gain)(ROUNDINT(( 29.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1949), L1D_LNA_LOW, (Gain)(ROUNDINT(( 29.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1949),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -368/*-46*/, (Gain)(ROUNDINT(( 29.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1949), L1D_LNA_LOW, (Gain)(ROUNDINT(( 29.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1949),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -360/*-45*/, (Gain)(ROUNDINT(( 29.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1949), L1D_LNA_LOW, (Gain)(ROUNDINT(( 29.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1949),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -352/*-44*/, (Gain)(ROUNDINT(( 26.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1909), L1D_LNA_LOW, (Gain)(ROUNDINT(( 26.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1909),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -344/*-43*/, (Gain)(ROUNDINT(( 26.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1909), L1D_LNA_LOW, (Gain)(ROUNDINT(( 26.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1909),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -336/*-42*/, (Gain)(ROUNDINT(( 26.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1909), L1D_LNA_LOW, (Gain)(ROUNDINT(( 26.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1909),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -328/*-41*/, (Gain)(ROUNDINT(( 23.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1959), L1D_LNA_LOW, (Gain)(ROUNDINT(( 23.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1959),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -320/*-40*/, (Gain)(ROUNDINT(( 23.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1959), L1D_LNA_LOW, (Gain)(ROUNDINT(( 23.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1959),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -312/*-39*/, (Gain)(ROUNDINT(( 23.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1959), L1D_LNA_LOW, (Gain)(ROUNDINT(( 23.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1959),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -304/*-38*/, (Gain)(ROUNDINT(( 20.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1919), L1D_LNA_LOW, (Gain)(ROUNDINT(( 20.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1919),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -296/*-37*/, (Gain)(ROUNDINT(( 20.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1919), L1D_LNA_LOW, (Gain)(ROUNDINT(( 20.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1919),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -288/*-36*/, (Gain)(ROUNDINT(( 20.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1919), L1D_LNA_LOW, (Gain)(ROUNDINT(( 20.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1919),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -280/*-35*/, (Gain)(ROUNDINT(( 17.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18D9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 17.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18D9),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -272/*-34*/, (Gain)(ROUNDINT(( 17.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18D9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 17.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18D9),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -264/*-33*/, (Gain)(ROUNDINT(( 17.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18D9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 17.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18D9),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -256/*-32*/, (Gain)(ROUNDINT(( 14.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1939), L1D_LNA_LOW, (Gain)(ROUNDINT(( 14.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1939),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -248/*-31*/, (Gain)(ROUNDINT(( 14.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1939), L1D_LNA_LOW, (Gain)(ROUNDINT(( 14.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1939),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -240/*-30*/, (Gain)(ROUNDINT(( 14.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1939), L1D_LNA_LOW, (Gain)(ROUNDINT(( 14.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1939),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -232/*-29*/, (Gain)(ROUNDINT(( 11.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18F9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 11.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18F9),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -224/*-28*/, (Gain)(ROUNDINT(( 11.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18F9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 11.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18F9),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -216/*-27*/, (Gain)(ROUNDINT(( 11.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18F9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 11.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18F9),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -208/*-26*/, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18B9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18B9),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -200/*-25*/, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18B9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18B9),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -192/*-24*/, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18B9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18B9),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -184/*-23*/, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18B9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18B9),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -176/*-22*/, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18B9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18B9),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -168/*-21*/, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18B9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18B9),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -160/*-20*/, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18B9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18B9),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -152/*-19*/, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18B9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18B9),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -144/*-18*/, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18B9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18B9),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -136/*-17*/, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18B9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18B9),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -128/*-16*/, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18B9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18B9),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -120/*-15*/, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18B9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18B9),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -112/*-14*/, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18B9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18B9),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -104/*-13*/, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18B9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18B9),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -96/*-12*/, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18B9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18B9),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -88/*-11*/, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18B9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18B9),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -80/*-10*/, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18B9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18B9),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -72/*-9*/, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18B9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18B9),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -64/*-8*/, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18B9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18B9),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -56/*-7*/, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18B9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18B9),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -48/*-6*/, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18B9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18B9),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -40/*-5*/, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18B9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18B9),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/    }
/*MT6177L*/ };
/*MT6177L*/ const  sL1DAGCHALDATA *const  AGC_TABLE_HAL_ELNA_LIST[] =
/*MT6177L*/ {  0,                                                          /*#FrequencyBand400  */
/*MT6177L*/    &AGC_TABLE_HAL_ELNA_LOWBAND,                                /* FrequencyBand850  */
/*MT6177L*/    &AGC_TABLE_HAL_ELNA_LOWBAND,                                /* FrequencyBand900  */
/*MT6177L*/    &AGC_TABLE_HAL_ELNA_HIGHBAND,                               /* FrequencyBand1800 */
/*MT6177L*/    &AGC_TABLE_HAL_ELNA_HIGHBAND,                               /* FrequencyBand1900 */
/*MT6177L*/ };
/*MT6177L*/ const  sL1DAGCHALDATA  AGC_TABLE_HAL_MATCHING_ELNA_LOWBAND=
/*MT6177L*/ {  
/*MT6177L*/    (Gain)(ROUNDINT(( 62.6-PVOFSL )*(PWRRES))),  //max_gain
/*MT6177L*/    (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))),  //min_gain
/*MT6177L*/    -880/*-110*/,  //max_predict_power
/*MT6177L*/    -40/*-5*/,  //min_predict_power
/*MT6177L*/    -86*PWRRES,  //IBBD_Pin_THRESHOLD
/*MT6177L*/    -71*PWRRES,  //HRD_Pin_THRESHOLD
/*MT6177L*/    {  
/*MT6177L*/      {   -880/*-110*/, (Gain)(ROUNDINT(( 62.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18E), L1D_LNA_HIGH_SENSITIVITY, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BD),  L1D_LNA_HIGH_SENSITIVITY,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -872/*-109*/, (Gain)(ROUNDINT(( 62.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18E), L1D_LNA_HIGH_SENSITIVITY, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BD),  L1D_LNA_HIGH_SENSITIVITY,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -864/*-108*/, (Gain)(ROUNDINT(( 62.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18E), L1D_LNA_HIGH_SENSITIVITY, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BD),  L1D_LNA_HIGH_SENSITIVITY,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -856/*-107*/, (Gain)(ROUNDINT(( 62.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18E), L1D_LNA_HIGH_SENSITIVITY, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BD),  L1D_LNA_HIGH_SENSITIVITY,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -848/*-106*/, (Gain)(ROUNDINT(( 62.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18E), L1D_LNA_HIGH_SENSITIVITY, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BD),  L1D_LNA_HIGH_SENSITIVITY,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -840/*-105*/, (Gain)(ROUNDINT(( 62.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18E), L1D_LNA_HIGH_SENSITIVITY, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BD),  L1D_LNA_HIGH_SENSITIVITY,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -832/*-104*/, (Gain)(ROUNDINT(( 62.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18E), L1D_LNA_HIGH_SENSITIVITY, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BD),  L1D_LNA_HIGH_SENSITIVITY,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -824/*-103*/, (Gain)(ROUNDINT(( 62.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18E), L1D_LNA_HIGH_SENSITIVITY, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BD),  L1D_LNA_HIGH_SENSITIVITY,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -816/*-102*/, (Gain)(ROUNDINT(( 47.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x15D), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -808/*-101*/, (Gain)(ROUNDINT(( 47.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x15D), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -800/*-100*/, (Gain)(ROUNDINT(( 47.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x15D), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -792/*-99*/, (Gain)(ROUNDINT(( 47.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x15D), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -784/*-98*/, (Gain)(ROUNDINT(( 47.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x15D), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -776/*-97*/, (Gain)(ROUNDINT(( 47.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x15D), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -768/*-96*/, (Gain)(ROUNDINT(( 47.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x15D), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -760/*-95*/, (Gain)(ROUNDINT(( 50.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x10D), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -752/*-94*/, (Gain)(ROUNDINT(( 50.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x10D), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -744/*-93*/, (Gain)(ROUNDINT(( 50.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x10D), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -736/*-92*/, (Gain)(ROUNDINT(( 47.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x15D), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -728/*-91*/, (Gain)(ROUNDINT(( 47.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x15D), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -720/*-90*/, (Gain)(ROUNDINT(( 47.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x15D), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -712/*-89*/, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x11D), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -704/*-88*/, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x11D), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -696/*-87*/, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x11D), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -688/*-86*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -680/*-85*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 38.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BC),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -672/*-84*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 38.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BC),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -664/*-83*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 38.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BC),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -656/*-82*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 38.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BC),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -648/*-81*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 38.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BC),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -640/*-80*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 38.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BC),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -632/*-79*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 38.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BC),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -624/*-78*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -616/*-77*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -608/*-76*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -600/*-75*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -592/*-74*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -584/*-73*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -576/*-72*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -568/*-71*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -560/*-70*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -552/*-69*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -544/*-68*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -536/*-67*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -528/*-66*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -520/*-65*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -512/*-64*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -504/*-63*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -496/*-62*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -488/*-61*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -480/*-60*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -472/*-59*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -464/*-58*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -456/*-57*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -448/*-56*/, (Gain)(ROUNDINT(( 38.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x11C), L1D_LNA_MIDDLE, (Gain)(ROUNDINT(( 38.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x11C),  L1D_LNA_MIDDLE,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -440/*-55*/, (Gain)(ROUNDINT(( 38.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x11C), L1D_LNA_MIDDLE, (Gain)(ROUNDINT(( 38.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x11C),  L1D_LNA_MIDDLE,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -432/*-54*/, (Gain)(ROUNDINT(( 38.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x11C), L1D_LNA_MIDDLE, (Gain)(ROUNDINT(( 38.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x11C),  L1D_LNA_MIDDLE,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -424/*-53*/, (Gain)(ROUNDINT(( 35.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDC), L1D_LNA_MIDDLE, (Gain)(ROUNDINT(( 35.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDC),  L1D_LNA_MIDDLE,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -416/*-52*/, (Gain)(ROUNDINT(( 35.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDC), L1D_LNA_MIDDLE, (Gain)(ROUNDINT(( 35.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDC),  L1D_LNA_MIDDLE,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -408/*-51*/, (Gain)(ROUNDINT(( 35.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDC), L1D_LNA_MIDDLE, (Gain)(ROUNDINT(( 35.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDC),  L1D_LNA_MIDDLE,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -400/*-50*/, (Gain)(ROUNDINT(( 32.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x189), L1D_LNA_LOW, (Gain)(ROUNDINT(( 32.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x189),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -392/*-49*/, (Gain)(ROUNDINT(( 32.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x189), L1D_LNA_LOW, (Gain)(ROUNDINT(( 32.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x189),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -384/*-48*/, (Gain)(ROUNDINT(( 32.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x189), L1D_LNA_LOW, (Gain)(ROUNDINT(( 32.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x189),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -376/*-47*/, (Gain)(ROUNDINT(( 29.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x149), L1D_LNA_LOW, (Gain)(ROUNDINT(( 29.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x149),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -368/*-46*/, (Gain)(ROUNDINT(( 29.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x149), L1D_LNA_LOW, (Gain)(ROUNDINT(( 29.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x149),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -360/*-45*/, (Gain)(ROUNDINT(( 29.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x149), L1D_LNA_LOW, (Gain)(ROUNDINT(( 29.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x149),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -352/*-44*/, (Gain)(ROUNDINT(( 26.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x109), L1D_LNA_LOW, (Gain)(ROUNDINT(( 26.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x109),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -344/*-43*/, (Gain)(ROUNDINT(( 26.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x109), L1D_LNA_LOW, (Gain)(ROUNDINT(( 26.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x109),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -336/*-42*/, (Gain)(ROUNDINT(( 26.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x109), L1D_LNA_LOW, (Gain)(ROUNDINT(( 26.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x109),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -328/*-41*/, (Gain)(ROUNDINT(( 23.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x159), L1D_LNA_LOW, (Gain)(ROUNDINT(( 23.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x159),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -320/*-40*/, (Gain)(ROUNDINT(( 23.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x159), L1D_LNA_LOW, (Gain)(ROUNDINT(( 23.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x159),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -312/*-39*/, (Gain)(ROUNDINT(( 23.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x159), L1D_LNA_LOW, (Gain)(ROUNDINT(( 23.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x159),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -304/*-38*/, (Gain)(ROUNDINT(( 20.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x119), L1D_LNA_LOW, (Gain)(ROUNDINT(( 20.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x119),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -296/*-37*/, (Gain)(ROUNDINT(( 20.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x119), L1D_LNA_LOW, (Gain)(ROUNDINT(( 20.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x119),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -288/*-36*/, (Gain)(ROUNDINT(( 20.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x119), L1D_LNA_LOW, (Gain)(ROUNDINT(( 20.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x119),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -280/*-35*/, (Gain)(ROUNDINT(( 17.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xD9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 17.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xD9),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -272/*-34*/, (Gain)(ROUNDINT(( 17.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xD9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 17.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xD9),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -264/*-33*/, (Gain)(ROUNDINT(( 17.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xD9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 17.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xD9),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -256/*-32*/, (Gain)(ROUNDINT(( 14.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x139), L1D_LNA_LOW, (Gain)(ROUNDINT(( 14.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x139),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -248/*-31*/, (Gain)(ROUNDINT(( 14.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x139), L1D_LNA_LOW, (Gain)(ROUNDINT(( 14.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x139),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -240/*-30*/, (Gain)(ROUNDINT(( 14.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x139), L1D_LNA_LOW, (Gain)(ROUNDINT(( 14.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x139),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -232/*-29*/, (Gain)(ROUNDINT(( 11.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xF9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 11.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xF9),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -224/*-28*/, (Gain)(ROUNDINT(( 11.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xF9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 11.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xF9),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -216/*-27*/, (Gain)(ROUNDINT(( 11.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xF9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 11.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xF9),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -208/*-26*/, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -200/*-25*/, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -192/*-24*/, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -184/*-23*/, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -176/*-22*/, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -168/*-21*/, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -160/*-20*/, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -152/*-19*/, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -144/*-18*/, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -136/*-17*/, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -128/*-16*/, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -120/*-15*/, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -112/*-14*/, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -104/*-13*/, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -96/*-12*/, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -88/*-11*/, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -80/*-10*/, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -72/*-9*/, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -64/*-8*/, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -56/*-7*/, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -48/*-6*/, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -40/*-5*/, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/    }
/*MT6177L*/ };
/*MT6177L*/ const  sL1DAGCHALDATA  AGC_TABLE_HAL_MATCHING_ELNA_HIGHBAND=
/*MT6177L*/ {  
/*MT6177L*/    (Gain)(ROUNDINT(( 62.6-PVOFSL )*(PWRRES))),  //max_gain
/*MT6177L*/    (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))),  //min_gain
/*MT6177L*/    -880/*-110*/,  //max_predict_power
/*MT6177L*/    -40/*-5*/,  //min_predict_power
/*MT6177L*/    -86*PWRRES,  //IBBD_Pin_THRESHOLD
/*MT6177L*/    -71*PWRRES,  //HRD_Pin_THRESHOLD
/*MT6177L*/    {  
/*MT6177L*/      {   -880/*-110*/, (Gain)(ROUNDINT(( 62.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x198E), L1D_LNA_HIGH_SENSITIVITY, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19BD),  L1D_LNA_HIGH_SENSITIVITY,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -872/*-109*/, (Gain)(ROUNDINT(( 62.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x198E), L1D_LNA_HIGH_SENSITIVITY, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19BD),  L1D_LNA_HIGH_SENSITIVITY,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -864/*-108*/, (Gain)(ROUNDINT(( 62.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x198E), L1D_LNA_HIGH_SENSITIVITY, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19BD),  L1D_LNA_HIGH_SENSITIVITY,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -856/*-107*/, (Gain)(ROUNDINT(( 62.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x198E), L1D_LNA_HIGH_SENSITIVITY, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19BD),  L1D_LNA_HIGH_SENSITIVITY,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -848/*-106*/, (Gain)(ROUNDINT(( 62.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x198E), L1D_LNA_HIGH_SENSITIVITY, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19BD),  L1D_LNA_HIGH_SENSITIVITY,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -840/*-105*/, (Gain)(ROUNDINT(( 62.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x198E), L1D_LNA_HIGH_SENSITIVITY, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19BD),  L1D_LNA_HIGH_SENSITIVITY,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -832/*-104*/, (Gain)(ROUNDINT(( 62.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x198E), L1D_LNA_HIGH_SENSITIVITY, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19BD),  L1D_LNA_HIGH_SENSITIVITY,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -824/*-103*/, (Gain)(ROUNDINT(( 62.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x198E), L1D_LNA_HIGH_SENSITIVITY, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19BD),  L1D_LNA_HIGH_SENSITIVITY,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -816/*-102*/, (Gain)(ROUNDINT(( 47.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x195D), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19BD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -808/*-101*/, (Gain)(ROUNDINT(( 47.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x195D), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19BD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -800/*-100*/, (Gain)(ROUNDINT(( 47.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x195D), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19BD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -792/*-99*/, (Gain)(ROUNDINT(( 47.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x195D), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19BD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -784/*-98*/, (Gain)(ROUNDINT(( 47.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x195D), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19BD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -776/*-97*/, (Gain)(ROUNDINT(( 47.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x195D), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19BD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -768/*-96*/, (Gain)(ROUNDINT(( 47.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x195D), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19BD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -760/*-95*/, (Gain)(ROUNDINT(( 50.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x190D), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19BD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -752/*-94*/, (Gain)(ROUNDINT(( 50.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x190D), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19BD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -744/*-93*/, (Gain)(ROUNDINT(( 50.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x190D), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19BD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -736/*-92*/, (Gain)(ROUNDINT(( 47.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x195D), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19BD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -728/*-91*/, (Gain)(ROUNDINT(( 47.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x195D), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19BD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -720/*-90*/, (Gain)(ROUNDINT(( 47.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x195D), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19BD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -712/*-89*/, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x191D), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19BD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -704/*-88*/, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x191D), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19BD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -696/*-87*/, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x191D), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19BD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -688/*-86*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19BD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -680/*-85*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 38.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19BC),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -672/*-84*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 38.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19BC),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -664/*-83*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 38.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19BC),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -656/*-82*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 38.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19BC),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -648/*-81*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 38.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19BC),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -640/*-80*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 38.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19BC),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -632/*-79*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 38.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19BC),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -624/*-78*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -616/*-77*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -608/*-76*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -600/*-75*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -592/*-74*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -584/*-73*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -576/*-72*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -568/*-71*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -560/*-70*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -552/*-69*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -544/*-68*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -536/*-67*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -528/*-66*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -520/*-65*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -512/*-64*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -504/*-63*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -496/*-62*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -488/*-61*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -480/*-60*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -472/*-59*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -464/*-58*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -456/*-57*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -448/*-56*/, (Gain)(ROUNDINT(( 38.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x191C), L1D_LNA_MIDDLE, (Gain)(ROUNDINT(( 38.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x191C),  L1D_LNA_MIDDLE,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -440/*-55*/, (Gain)(ROUNDINT(( 38.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x191C), L1D_LNA_MIDDLE, (Gain)(ROUNDINT(( 38.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x191C),  L1D_LNA_MIDDLE,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -432/*-54*/, (Gain)(ROUNDINT(( 38.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x191C), L1D_LNA_MIDDLE, (Gain)(ROUNDINT(( 38.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x191C),  L1D_LNA_MIDDLE,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -424/*-53*/, (Gain)(ROUNDINT(( 35.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DC), L1D_LNA_MIDDLE, (Gain)(ROUNDINT(( 35.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DC),  L1D_LNA_MIDDLE,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -416/*-52*/, (Gain)(ROUNDINT(( 35.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DC), L1D_LNA_MIDDLE, (Gain)(ROUNDINT(( 35.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DC),  L1D_LNA_MIDDLE,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -408/*-51*/, (Gain)(ROUNDINT(( 35.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DC), L1D_LNA_MIDDLE, (Gain)(ROUNDINT(( 35.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DC),  L1D_LNA_MIDDLE,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -400/*-50*/, (Gain)(ROUNDINT(( 32.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1989), L1D_LNA_LOW, (Gain)(ROUNDINT(( 32.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1989),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -392/*-49*/, (Gain)(ROUNDINT(( 32.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1989), L1D_LNA_LOW, (Gain)(ROUNDINT(( 32.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1989),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -384/*-48*/, (Gain)(ROUNDINT(( 32.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1989), L1D_LNA_LOW, (Gain)(ROUNDINT(( 32.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1989),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -376/*-47*/, (Gain)(ROUNDINT(( 29.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1949), L1D_LNA_LOW, (Gain)(ROUNDINT(( 29.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1949),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -368/*-46*/, (Gain)(ROUNDINT(( 29.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1949), L1D_LNA_LOW, (Gain)(ROUNDINT(( 29.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1949),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -360/*-45*/, (Gain)(ROUNDINT(( 29.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1949), L1D_LNA_LOW, (Gain)(ROUNDINT(( 29.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1949),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -352/*-44*/, (Gain)(ROUNDINT(( 26.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1909), L1D_LNA_LOW, (Gain)(ROUNDINT(( 26.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1909),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -344/*-43*/, (Gain)(ROUNDINT(( 26.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1909), L1D_LNA_LOW, (Gain)(ROUNDINT(( 26.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1909),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -336/*-42*/, (Gain)(ROUNDINT(( 26.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1909), L1D_LNA_LOW, (Gain)(ROUNDINT(( 26.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1909),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -328/*-41*/, (Gain)(ROUNDINT(( 23.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1959), L1D_LNA_LOW, (Gain)(ROUNDINT(( 23.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1959),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -320/*-40*/, (Gain)(ROUNDINT(( 23.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1959), L1D_LNA_LOW, (Gain)(ROUNDINT(( 23.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1959),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -312/*-39*/, (Gain)(ROUNDINT(( 23.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1959), L1D_LNA_LOW, (Gain)(ROUNDINT(( 23.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1959),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -304/*-38*/, (Gain)(ROUNDINT(( 20.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1919), L1D_LNA_LOW, (Gain)(ROUNDINT(( 20.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1919),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -296/*-37*/, (Gain)(ROUNDINT(( 20.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1919), L1D_LNA_LOW, (Gain)(ROUNDINT(( 20.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1919),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -288/*-36*/, (Gain)(ROUNDINT(( 20.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1919), L1D_LNA_LOW, (Gain)(ROUNDINT(( 20.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1919),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -280/*-35*/, (Gain)(ROUNDINT(( 17.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18D9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 17.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18D9),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -272/*-34*/, (Gain)(ROUNDINT(( 17.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18D9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 17.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18D9),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -264/*-33*/, (Gain)(ROUNDINT(( 17.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18D9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 17.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18D9),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -256/*-32*/, (Gain)(ROUNDINT(( 14.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1939), L1D_LNA_LOW, (Gain)(ROUNDINT(( 14.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1939),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -248/*-31*/, (Gain)(ROUNDINT(( 14.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1939), L1D_LNA_LOW, (Gain)(ROUNDINT(( 14.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1939),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -240/*-30*/, (Gain)(ROUNDINT(( 14.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1939), L1D_LNA_LOW, (Gain)(ROUNDINT(( 14.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1939),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -232/*-29*/, (Gain)(ROUNDINT(( 11.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18F9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 11.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18F9),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -224/*-28*/, (Gain)(ROUNDINT(( 11.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18F9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 11.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18F9),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -216/*-27*/, (Gain)(ROUNDINT(( 11.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18F9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 11.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18F9),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -208/*-26*/, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18B9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18B9),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -200/*-25*/, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18B9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18B9),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -192/*-24*/, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18B9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18B9),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -184/*-23*/, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18B9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18B9),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -176/*-22*/, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18B9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18B9),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -168/*-21*/, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18B9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18B9),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -160/*-20*/, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18B9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18B9),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -152/*-19*/, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18B9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18B9),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -144/*-18*/, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18B9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18B9),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -136/*-17*/, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18B9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18B9),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -128/*-16*/, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18B9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18B9),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -120/*-15*/, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18B9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18B9),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -112/*-14*/, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18B9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18B9),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -104/*-13*/, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18B9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18B9),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -96/*-12*/, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18B9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18B9),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -88/*-11*/, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18B9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18B9),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -80/*-10*/, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18B9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18B9),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -72/*-9*/, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18B9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18B9),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -64/*-8*/, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18B9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18B9),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -56/*-7*/, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18B9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18B9),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -48/*-6*/, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18B9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18B9),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -40/*-5*/, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18B9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18B9),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/    }
/*MT6177L*/ };
/*MT6177L*/ const  sL1DAGCHALDATA *const  AGC_TABLE_HAL_MATCHING_ELNA_LIST[] =
/*MT6177L*/ {  0,                                                          /*#FrequencyBand400  */
/*MT6177L*/    &AGC_TABLE_HAL_MATCHING_ELNA_LOWBAND,                                /* FrequencyBand850  */
/*MT6177L*/    &AGC_TABLE_HAL_MATCHING_ELNA_LOWBAND,                                /* FrequencyBand900  */
/*MT6177L*/    &AGC_TABLE_HAL_MATCHING_ELNA_HIGHBAND,                               /* FrequencyBand1800 */
/*MT6177L*/    &AGC_TABLE_HAL_MATCHING_ELNA_HIGHBAND,                               /* FrequencyBand1900 */
/*MT6177L*/ };
/*MT6177L*/    #endif
/*MT6177L*/    #if IS_2G_EXTERNAL_LNA_BYPASS_SUPPORT
/*MT6177L*/ const  sL1DAGCHALDATA  AGC_TABLE_HAL_ELNA_BYPASS_LOWBAND=
/*MT6177L*/ {  
/*MT6177L*/    (Gain)(ROUNDINT(( 68.6-PVOFSL )*(PWRRES))),  //max_gain
/*MT6177L*/    (Gain)(ROUNDINT(( -6.4-PVOFSL )*(PWRRES))),  //min_gain
/*MT6177L*/    -880/*-110*/,  //max_predict_power
/*MT6177L*/    -40/*-5*/,  //min_predict_power
/*MT6177L*/    -86*PWRRES,  //IBBD_Pin_THRESHOLD
/*MT6177L*/    -71*PWRRES,  //HRD_Pin_THRESHOLD
/*MT6177L*/    {  
/*MT6177L*/      {   -880/*-110*/, (Gain)(ROUNDINT(( 68.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x20E), L1D_LNA_HIGH_SENSITIVITY, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BD),  L1D_LNA_HIGH_SENSITIVITY,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -872/*-109*/, (Gain)(ROUNDINT(( 68.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x20E), L1D_LNA_HIGH_SENSITIVITY, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BD),  L1D_LNA_HIGH_SENSITIVITY,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -864/*-108*/, (Gain)(ROUNDINT(( 68.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x20E), L1D_LNA_HIGH_SENSITIVITY, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BD),  L1D_LNA_HIGH_SENSITIVITY,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -856/*-107*/, (Gain)(ROUNDINT(( 68.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x20E), L1D_LNA_HIGH_SENSITIVITY, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BD),  L1D_LNA_HIGH_SENSITIVITY,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -848/*-106*/, (Gain)(ROUNDINT(( 68.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x20E), L1D_LNA_HIGH_SENSITIVITY, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BD),  L1D_LNA_HIGH_SENSITIVITY,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -840/*-105*/, (Gain)(ROUNDINT(( 68.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x20E), L1D_LNA_HIGH_SENSITIVITY, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BD),  L1D_LNA_HIGH_SENSITIVITY,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -832/*-104*/, (Gain)(ROUNDINT(( 68.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x20E), L1D_LNA_HIGH_SENSITIVITY, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BD),  L1D_LNA_HIGH_SENSITIVITY,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -824/*-103*/, (Gain)(ROUNDINT(( 68.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x20E), L1D_LNA_HIGH_SENSITIVITY, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BD),  L1D_LNA_HIGH_SENSITIVITY,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -816/*-102*/, (Gain)(ROUNDINT(( 47.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x15D), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -808/*-101*/, (Gain)(ROUNDINT(( 47.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x15D), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -800/*-100*/, (Gain)(ROUNDINT(( 47.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x15D), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -792/*-99*/, (Gain)(ROUNDINT(( 47.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x15D), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -784/*-98*/, (Gain)(ROUNDINT(( 47.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x15D), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -776/*-97*/, (Gain)(ROUNDINT(( 47.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x15D), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -768/*-96*/, (Gain)(ROUNDINT(( 47.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x15D), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -760/*-95*/, (Gain)(ROUNDINT(( 50.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x10D), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -752/*-94*/, (Gain)(ROUNDINT(( 50.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x10D), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -744/*-93*/, (Gain)(ROUNDINT(( 50.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x10D), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -736/*-92*/, (Gain)(ROUNDINT(( 47.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x15D), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -728/*-91*/, (Gain)(ROUNDINT(( 47.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x15D), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -720/*-90*/, (Gain)(ROUNDINT(( 47.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x15D), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -712/*-89*/, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x11D), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -704/*-88*/, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x11D), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -696/*-87*/, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x11D), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -688/*-86*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -680/*-85*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 38.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BC),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -672/*-84*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 38.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BC),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -664/*-83*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 38.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BC),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -656/*-82*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 38.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BC),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -648/*-81*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 38.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BC),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -640/*-80*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 38.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BC),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -632/*-79*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 38.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BC),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -624/*-78*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -616/*-77*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -608/*-76*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -600/*-75*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -592/*-74*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -584/*-73*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -576/*-72*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -568/*-71*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -560/*-70*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -552/*-69*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -544/*-68*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -536/*-67*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -528/*-66*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -520/*-65*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -512/*-64*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -504/*-63*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -496/*-62*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -488/*-61*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -480/*-60*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -472/*-59*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -464/*-58*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -456/*-57*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -448/*-56*/, (Gain)(ROUNDINT(( 38.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x11C), L1D_LNA_MIDDLE, (Gain)(ROUNDINT(( 38.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x11C),  L1D_LNA_MIDDLE,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -440/*-55*/, (Gain)(ROUNDINT(( 38.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x11C), L1D_LNA_MIDDLE, (Gain)(ROUNDINT(( 38.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x11C),  L1D_LNA_MIDDLE,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -432/*-54*/, (Gain)(ROUNDINT(( 38.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x11C), L1D_LNA_MIDDLE, (Gain)(ROUNDINT(( 38.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x11C),  L1D_LNA_MIDDLE,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -424/*-53*/, (Gain)(ROUNDINT(( 35.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDC), L1D_LNA_MIDDLE, (Gain)(ROUNDINT(( 35.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDC),  L1D_LNA_MIDDLE,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -416/*-52*/, (Gain)(ROUNDINT(( 35.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDC), L1D_LNA_MIDDLE, (Gain)(ROUNDINT(( 35.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDC),  L1D_LNA_MIDDLE,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -408/*-51*/, (Gain)(ROUNDINT(( 35.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDC), L1D_LNA_MIDDLE, (Gain)(ROUNDINT(( 35.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDC),  L1D_LNA_MIDDLE,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -400/*-50*/, (Gain)(ROUNDINT(( 32.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x189), L1D_LNA_LOW, (Gain)(ROUNDINT(( 32.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x189),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -392/*-49*/, (Gain)(ROUNDINT(( 32.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x189), L1D_LNA_LOW, (Gain)(ROUNDINT(( 32.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x189),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -384/*-48*/, (Gain)(ROUNDINT(( 32.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x189), L1D_LNA_LOW, (Gain)(ROUNDINT(( 32.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x189),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -376/*-47*/, (Gain)(ROUNDINT(( 29.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x149), L1D_LNA_LOW, (Gain)(ROUNDINT(( 29.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x149),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -368/*-46*/, (Gain)(ROUNDINT(( 29.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x149), L1D_LNA_LOW, (Gain)(ROUNDINT(( 29.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x149),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -360/*-45*/, (Gain)(ROUNDINT(( 29.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x149), L1D_LNA_LOW, (Gain)(ROUNDINT(( 29.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x149),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -352/*-44*/, (Gain)(ROUNDINT(( 26.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x109), L1D_LNA_LOW, (Gain)(ROUNDINT(( 26.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x109),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -344/*-43*/, (Gain)(ROUNDINT(( 26.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x109), L1D_LNA_LOW, (Gain)(ROUNDINT(( 26.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x109),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -336/*-42*/, (Gain)(ROUNDINT(( 26.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x109), L1D_LNA_LOW, (Gain)(ROUNDINT(( 26.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x109),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -328/*-41*/, (Gain)(ROUNDINT(( 23.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x159), L1D_LNA_LOW, (Gain)(ROUNDINT(( 23.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x159),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -320/*-40*/, (Gain)(ROUNDINT(( 23.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x159), L1D_LNA_LOW, (Gain)(ROUNDINT(( 23.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x159),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -312/*-39*/, (Gain)(ROUNDINT(( 23.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x159), L1D_LNA_LOW, (Gain)(ROUNDINT(( 23.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x159),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -304/*-38*/, (Gain)(ROUNDINT(( 20.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x119), L1D_LNA_LOW, (Gain)(ROUNDINT(( 20.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x119),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -296/*-37*/, (Gain)(ROUNDINT(( 20.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x119), L1D_LNA_LOW, (Gain)(ROUNDINT(( 20.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x119),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -288/*-36*/, (Gain)(ROUNDINT(( 20.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x119), L1D_LNA_LOW, (Gain)(ROUNDINT(( 20.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x119),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -280/*-35*/, (Gain)(ROUNDINT(( 17.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xD9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 17.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xD9),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -272/*-34*/, (Gain)(ROUNDINT(( 17.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xD9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 17.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xD9),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -264/*-33*/, (Gain)(ROUNDINT(( 17.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xD9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 17.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xD9),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -256/*-32*/, (Gain)(ROUNDINT(( 14.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x139), L1D_LNA_LOW, (Gain)(ROUNDINT(( 14.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x139),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -248/*-31*/, (Gain)(ROUNDINT(( 14.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x139), L1D_LNA_LOW, (Gain)(ROUNDINT(( 14.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x139),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -240/*-30*/, (Gain)(ROUNDINT(( 14.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x139), L1D_LNA_LOW, (Gain)(ROUNDINT(( 14.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x139),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -232/*-29*/, (Gain)(ROUNDINT(( 11.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xF9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 11.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xF9),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -224/*-28*/, (Gain)(ROUNDINT(( 11.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xF9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 11.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xF9),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -216/*-27*/, (Gain)(ROUNDINT(( 11.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xF9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 11.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xF9),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -208/*-26*/, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -200/*-25*/, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -192/*-24*/, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -184/*-23*/, (Gain)(ROUNDINT(( 5.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x119), L1D_LNA_LOW_MAXPIN, (Gain)(ROUNDINT(( 5.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x119),  L1D_LNA_LOW_MAXPIN,  MML1_ELNA_MODE_BYPASS},
/*MT6177L*/      {   -176/*-22*/, (Gain)(ROUNDINT(( 5.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x119), L1D_LNA_LOW_MAXPIN, (Gain)(ROUNDINT(( 5.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x119),  L1D_LNA_LOW_MAXPIN,  MML1_ELNA_MODE_BYPASS},
/*MT6177L*/      {   -168/*-21*/, (Gain)(ROUNDINT(( 5.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x119), L1D_LNA_LOW_MAXPIN, (Gain)(ROUNDINT(( 5.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x119),  L1D_LNA_LOW_MAXPIN,  MML1_ELNA_MODE_BYPASS},
/*MT6177L*/      {   -160/*-20*/, (Gain)(ROUNDINT(( 2.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xD9), L1D_LNA_LOW_MAXPIN, (Gain)(ROUNDINT(( 2.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xD9),  L1D_LNA_LOW_MAXPIN,  MML1_ELNA_MODE_BYPASS},
/*MT6177L*/      {   -152/*-19*/, (Gain)(ROUNDINT(( 2.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xD9), L1D_LNA_LOW_MAXPIN, (Gain)(ROUNDINT(( 2.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xD9),  L1D_LNA_LOW_MAXPIN,  MML1_ELNA_MODE_BYPASS},
/*MT6177L*/      {   -144/*-18*/, (Gain)(ROUNDINT(( 2.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xD9), L1D_LNA_LOW_MAXPIN, (Gain)(ROUNDINT(( 2.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xD9),  L1D_LNA_LOW_MAXPIN,  MML1_ELNA_MODE_BYPASS},
/*MT6177L*/      {   -136/*-17*/, (Gain)(ROUNDINT(( -0.4-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x99), L1D_LNA_LOW_MAXPIN, (Gain)(ROUNDINT(( -0.4-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x99),  L1D_LNA_LOW_MAXPIN,  MML1_ELNA_MODE_BYPASS},
/*MT6177L*/      {   -128/*-16*/, (Gain)(ROUNDINT(( -0.4-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x99), L1D_LNA_LOW_MAXPIN, (Gain)(ROUNDINT(( -0.4-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x99),  L1D_LNA_LOW_MAXPIN,  MML1_ELNA_MODE_BYPASS},
/*MT6177L*/      {   -120/*-15*/, (Gain)(ROUNDINT(( -0.4-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x99), L1D_LNA_LOW_MAXPIN, (Gain)(ROUNDINT(( -0.4-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x99),  L1D_LNA_LOW_MAXPIN,  MML1_ELNA_MODE_BYPASS},
/*MT6177L*/      {   -112/*-14*/, (Gain)(ROUNDINT(( -3.4-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xF9), L1D_LNA_LOW_MAXPIN, (Gain)(ROUNDINT(( -3.4-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xF9),  L1D_LNA_LOW_MAXPIN,  MML1_ELNA_MODE_BYPASS},
/*MT6177L*/      {   -104/*-13*/, (Gain)(ROUNDINT(( -3.4-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xF9), L1D_LNA_LOW_MAXPIN, (Gain)(ROUNDINT(( -3.4-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xF9),  L1D_LNA_LOW_MAXPIN,  MML1_ELNA_MODE_BYPASS},
/*MT6177L*/      {   -96/*-12*/, (Gain)(ROUNDINT(( -3.4-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xF9), L1D_LNA_LOW_MAXPIN, (Gain)(ROUNDINT(( -3.4-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xF9),  L1D_LNA_LOW_MAXPIN,  MML1_ELNA_MODE_BYPASS},
/*MT6177L*/      {   -88/*-11*/, (Gain)(ROUNDINT(( -6.4-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9), L1D_LNA_LOW_MAXPIN, (Gain)(ROUNDINT(( -6.4-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9),  L1D_LNA_LOW_MAXPIN,  MML1_ELNA_MODE_BYPASS},
/*MT6177L*/      {   -80/*-10*/, (Gain)(ROUNDINT(( -6.4-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9), L1D_LNA_LOW_MAXPIN, (Gain)(ROUNDINT(( -6.4-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9),  L1D_LNA_LOW_MAXPIN,  MML1_ELNA_MODE_BYPASS},
/*MT6177L*/      {   -72/*-9*/, (Gain)(ROUNDINT(( -6.4-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9), L1D_LNA_LOW_MAXPIN, (Gain)(ROUNDINT(( -6.4-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9),  L1D_LNA_LOW_MAXPIN,  MML1_ELNA_MODE_BYPASS},
/*MT6177L*/      {   -64/*-8*/, (Gain)(ROUNDINT(( -6.4-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9), L1D_LNA_LOW_MAXPIN, (Gain)(ROUNDINT(( -6.4-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9),  L1D_LNA_LOW_MAXPIN,  MML1_ELNA_MODE_BYPASS},
/*MT6177L*/      {   -56/*-7*/, (Gain)(ROUNDINT(( -6.4-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9), L1D_LNA_LOW_MAXPIN, (Gain)(ROUNDINT(( -6.4-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9),  L1D_LNA_LOW_MAXPIN,  MML1_ELNA_MODE_BYPASS},
/*MT6177L*/      {   -48/*-6*/, (Gain)(ROUNDINT(( -6.4-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9), L1D_LNA_LOW_MAXPIN, (Gain)(ROUNDINT(( -6.4-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9),  L1D_LNA_LOW_MAXPIN,  MML1_ELNA_MODE_BYPASS},
/*MT6177L*/      {   -40/*-5*/, (Gain)(ROUNDINT(( -6.4-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9), L1D_LNA_LOW_MAXPIN, (Gain)(ROUNDINT(( -6.4-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9),  L1D_LNA_LOW_MAXPIN,  MML1_ELNA_MODE_BYPASS},
/*MT6177L*/    }
/*MT6177L*/ };
/*MT6177L*/ const  sL1DAGCHALDATA  AGC_TABLE_HAL_ELNA_BYPASS_HIGHBAND=
/*MT6177L*/ {  
/*MT6177L*/    (Gain)(ROUNDINT(( 68.6-PVOFSL )*(PWRRES))),  //max_gain
/*MT6177L*/    (Gain)(ROUNDINT(( -6.4-PVOFSL )*(PWRRES))),  //min_gain
/*MT6177L*/    -880/*-110*/,  //max_predict_power
/*MT6177L*/    -40/*-5*/,  //min_predict_power
/*MT6177L*/    -86*PWRRES,  //IBBD_Pin_THRESHOLD
/*MT6177L*/    -71*PWRRES,  //HRD_Pin_THRESHOLD
/*MT6177L*/    {  
/*MT6177L*/      {   -880/*-110*/, (Gain)(ROUNDINT(( 68.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1A0E), L1D_LNA_HIGH_SENSITIVITY, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19BD),  L1D_LNA_HIGH_SENSITIVITY,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -872/*-109*/, (Gain)(ROUNDINT(( 68.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1A0E), L1D_LNA_HIGH_SENSITIVITY, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19BD),  L1D_LNA_HIGH_SENSITIVITY,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -864/*-108*/, (Gain)(ROUNDINT(( 68.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1A0E), L1D_LNA_HIGH_SENSITIVITY, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19BD),  L1D_LNA_HIGH_SENSITIVITY,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -856/*-107*/, (Gain)(ROUNDINT(( 68.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1A0E), L1D_LNA_HIGH_SENSITIVITY, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19BD),  L1D_LNA_HIGH_SENSITIVITY,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -848/*-106*/, (Gain)(ROUNDINT(( 68.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1A0E), L1D_LNA_HIGH_SENSITIVITY, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19BD),  L1D_LNA_HIGH_SENSITIVITY,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -840/*-105*/, (Gain)(ROUNDINT(( 68.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1A0E), L1D_LNA_HIGH_SENSITIVITY, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19BD),  L1D_LNA_HIGH_SENSITIVITY,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -832/*-104*/, (Gain)(ROUNDINT(( 68.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1A0E), L1D_LNA_HIGH_SENSITIVITY, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19BD),  L1D_LNA_HIGH_SENSITIVITY,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -824/*-103*/, (Gain)(ROUNDINT(( 68.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1A0E), L1D_LNA_HIGH_SENSITIVITY, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19BD),  L1D_LNA_HIGH_SENSITIVITY,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -816/*-102*/, (Gain)(ROUNDINT(( 47.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x195D), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19BD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -808/*-101*/, (Gain)(ROUNDINT(( 47.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x195D), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19BD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -800/*-100*/, (Gain)(ROUNDINT(( 47.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x195D), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19BD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -792/*-99*/, (Gain)(ROUNDINT(( 47.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x195D), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19BD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -784/*-98*/, (Gain)(ROUNDINT(( 47.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x195D), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19BD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -776/*-97*/, (Gain)(ROUNDINT(( 47.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x195D), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19BD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -768/*-96*/, (Gain)(ROUNDINT(( 47.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x195D), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19BD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -760/*-95*/, (Gain)(ROUNDINT(( 50.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x190D), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19BD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -752/*-94*/, (Gain)(ROUNDINT(( 50.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x190D), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19BD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -744/*-93*/, (Gain)(ROUNDINT(( 50.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x190D), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19BD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -736/*-92*/, (Gain)(ROUNDINT(( 47.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x195D), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19BD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -728/*-91*/, (Gain)(ROUNDINT(( 47.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x195D), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19BD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -720/*-90*/, (Gain)(ROUNDINT(( 47.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x195D), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19BD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -712/*-89*/, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x191D), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19BD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -704/*-88*/, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x191D), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19BD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -696/*-87*/, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x191D), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19BD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -688/*-86*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19BD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -680/*-85*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 38.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19BC),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -672/*-84*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 38.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19BC),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -664/*-83*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 38.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19BC),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -656/*-82*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 38.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19BC),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -648/*-81*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 38.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19BC),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -640/*-80*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 38.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19BC),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -632/*-79*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 38.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19BC),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -624/*-78*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -616/*-77*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -608/*-76*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -600/*-75*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -592/*-74*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -584/*-73*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -576/*-72*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -568/*-71*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -560/*-70*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -552/*-69*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -544/*-68*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -536/*-67*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -528/*-66*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -520/*-65*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -512/*-64*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -504/*-63*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -496/*-62*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -488/*-61*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -480/*-60*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -472/*-59*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -464/*-58*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -456/*-57*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -448/*-56*/, (Gain)(ROUNDINT(( 38.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x191C), L1D_LNA_MIDDLE, (Gain)(ROUNDINT(( 38.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x191C),  L1D_LNA_MIDDLE,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -440/*-55*/, (Gain)(ROUNDINT(( 38.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x191C), L1D_LNA_MIDDLE, (Gain)(ROUNDINT(( 38.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x191C),  L1D_LNA_MIDDLE,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -432/*-54*/, (Gain)(ROUNDINT(( 38.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x191C), L1D_LNA_MIDDLE, (Gain)(ROUNDINT(( 38.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x191C),  L1D_LNA_MIDDLE,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -424/*-53*/, (Gain)(ROUNDINT(( 35.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DC), L1D_LNA_MIDDLE, (Gain)(ROUNDINT(( 35.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DC),  L1D_LNA_MIDDLE,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -416/*-52*/, (Gain)(ROUNDINT(( 35.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DC), L1D_LNA_MIDDLE, (Gain)(ROUNDINT(( 35.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DC),  L1D_LNA_MIDDLE,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -408/*-51*/, (Gain)(ROUNDINT(( 35.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DC), L1D_LNA_MIDDLE, (Gain)(ROUNDINT(( 35.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DC),  L1D_LNA_MIDDLE,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -400/*-50*/, (Gain)(ROUNDINT(( 32.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1989), L1D_LNA_LOW, (Gain)(ROUNDINT(( 32.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1989),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -392/*-49*/, (Gain)(ROUNDINT(( 32.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1989), L1D_LNA_LOW, (Gain)(ROUNDINT(( 32.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1989),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -384/*-48*/, (Gain)(ROUNDINT(( 32.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1989), L1D_LNA_LOW, (Gain)(ROUNDINT(( 32.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1989),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -376/*-47*/, (Gain)(ROUNDINT(( 29.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1949), L1D_LNA_LOW, (Gain)(ROUNDINT(( 29.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1949),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -368/*-46*/, (Gain)(ROUNDINT(( 29.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1949), L1D_LNA_LOW, (Gain)(ROUNDINT(( 29.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1949),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -360/*-45*/, (Gain)(ROUNDINT(( 29.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1949), L1D_LNA_LOW, (Gain)(ROUNDINT(( 29.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1949),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -352/*-44*/, (Gain)(ROUNDINT(( 26.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1909), L1D_LNA_LOW, (Gain)(ROUNDINT(( 26.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1909),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -344/*-43*/, (Gain)(ROUNDINT(( 26.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1909), L1D_LNA_LOW, (Gain)(ROUNDINT(( 26.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1909),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -336/*-42*/, (Gain)(ROUNDINT(( 26.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1909), L1D_LNA_LOW, (Gain)(ROUNDINT(( 26.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1909),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -328/*-41*/, (Gain)(ROUNDINT(( 23.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1959), L1D_LNA_LOW, (Gain)(ROUNDINT(( 23.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1959),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -320/*-40*/, (Gain)(ROUNDINT(( 23.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1959), L1D_LNA_LOW, (Gain)(ROUNDINT(( 23.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1959),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -312/*-39*/, (Gain)(ROUNDINT(( 23.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1959), L1D_LNA_LOW, (Gain)(ROUNDINT(( 23.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1959),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -304/*-38*/, (Gain)(ROUNDINT(( 20.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1919), L1D_LNA_LOW, (Gain)(ROUNDINT(( 20.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1919),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -296/*-37*/, (Gain)(ROUNDINT(( 20.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1919), L1D_LNA_LOW, (Gain)(ROUNDINT(( 20.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1919),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -288/*-36*/, (Gain)(ROUNDINT(( 20.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1919), L1D_LNA_LOW, (Gain)(ROUNDINT(( 20.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1919),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -280/*-35*/, (Gain)(ROUNDINT(( 17.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18D9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 17.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18D9),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -272/*-34*/, (Gain)(ROUNDINT(( 17.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18D9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 17.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18D9),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -264/*-33*/, (Gain)(ROUNDINT(( 17.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18D9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 17.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18D9),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -256/*-32*/, (Gain)(ROUNDINT(( 14.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1939), L1D_LNA_LOW, (Gain)(ROUNDINT(( 14.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1939),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -248/*-31*/, (Gain)(ROUNDINT(( 14.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1939), L1D_LNA_LOW, (Gain)(ROUNDINT(( 14.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1939),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -240/*-30*/, (Gain)(ROUNDINT(( 14.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1939), L1D_LNA_LOW, (Gain)(ROUNDINT(( 14.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1939),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -232/*-29*/, (Gain)(ROUNDINT(( 11.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18F9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 11.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18F9),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -224/*-28*/, (Gain)(ROUNDINT(( 11.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18F9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 11.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18F9),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -216/*-27*/, (Gain)(ROUNDINT(( 11.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18F9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 11.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18F9),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -208/*-26*/, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18B9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18B9),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -200/*-25*/, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18B9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18B9),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -192/*-24*/, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18B9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18B9),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -184/*-23*/, (Gain)(ROUNDINT(( 5.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1919), L1D_LNA_LOW_MAXPIN, (Gain)(ROUNDINT(( 5.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1919),  L1D_LNA_LOW_MAXPIN,  MML1_ELNA_MODE_BYPASS},
/*MT6177L*/      {   -176/*-22*/, (Gain)(ROUNDINT(( 5.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1919), L1D_LNA_LOW_MAXPIN, (Gain)(ROUNDINT(( 5.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1919),  L1D_LNA_LOW_MAXPIN,  MML1_ELNA_MODE_BYPASS},
/*MT6177L*/      {   -168/*-21*/, (Gain)(ROUNDINT(( 5.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1919), L1D_LNA_LOW_MAXPIN, (Gain)(ROUNDINT(( 5.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1919),  L1D_LNA_LOW_MAXPIN,  MML1_ELNA_MODE_BYPASS},
/*MT6177L*/      {   -160/*-20*/, (Gain)(ROUNDINT(( 2.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18D9), L1D_LNA_LOW_MAXPIN, (Gain)(ROUNDINT(( 2.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18D9),  L1D_LNA_LOW_MAXPIN,  MML1_ELNA_MODE_BYPASS},
/*MT6177L*/      {   -152/*-19*/, (Gain)(ROUNDINT(( 2.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18D9), L1D_LNA_LOW_MAXPIN, (Gain)(ROUNDINT(( 2.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18D9),  L1D_LNA_LOW_MAXPIN,  MML1_ELNA_MODE_BYPASS},
/*MT6177L*/      {   -144/*-18*/, (Gain)(ROUNDINT(( 2.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18D9), L1D_LNA_LOW_MAXPIN, (Gain)(ROUNDINT(( 2.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18D9),  L1D_LNA_LOW_MAXPIN,  MML1_ELNA_MODE_BYPASS},
/*MT6177L*/      {   -136/*-17*/, (Gain)(ROUNDINT(( -0.4-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1899), L1D_LNA_LOW_MAXPIN, (Gain)(ROUNDINT(( -0.4-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1899),  L1D_LNA_LOW_MAXPIN,  MML1_ELNA_MODE_BYPASS},
/*MT6177L*/      {   -128/*-16*/, (Gain)(ROUNDINT(( -0.4-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1899), L1D_LNA_LOW_MAXPIN, (Gain)(ROUNDINT(( -0.4-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1899),  L1D_LNA_LOW_MAXPIN,  MML1_ELNA_MODE_BYPASS},
/*MT6177L*/      {   -120/*-15*/, (Gain)(ROUNDINT(( -0.4-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1899), L1D_LNA_LOW_MAXPIN, (Gain)(ROUNDINT(( -0.4-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1899),  L1D_LNA_LOW_MAXPIN,  MML1_ELNA_MODE_BYPASS},
/*MT6177L*/      {   -112/*-14*/, (Gain)(ROUNDINT(( -3.4-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18F9), L1D_LNA_LOW_MAXPIN, (Gain)(ROUNDINT(( -3.4-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18F9),  L1D_LNA_LOW_MAXPIN,  MML1_ELNA_MODE_BYPASS},
/*MT6177L*/      {   -104/*-13*/, (Gain)(ROUNDINT(( -3.4-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18F9), L1D_LNA_LOW_MAXPIN, (Gain)(ROUNDINT(( -3.4-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18F9),  L1D_LNA_LOW_MAXPIN,  MML1_ELNA_MODE_BYPASS},
/*MT6177L*/      {   -96/*-12*/, (Gain)(ROUNDINT(( -3.4-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18F9), L1D_LNA_LOW_MAXPIN, (Gain)(ROUNDINT(( -3.4-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18F9),  L1D_LNA_LOW_MAXPIN,  MML1_ELNA_MODE_BYPASS},
/*MT6177L*/      {   -88/*-11*/, (Gain)(ROUNDINT(( -6.4-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18B9), L1D_LNA_LOW_MAXPIN, (Gain)(ROUNDINT(( -6.4-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18B9),  L1D_LNA_LOW_MAXPIN,  MML1_ELNA_MODE_BYPASS},
/*MT6177L*/      {   -80/*-10*/, (Gain)(ROUNDINT(( -6.4-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18B9), L1D_LNA_LOW_MAXPIN, (Gain)(ROUNDINT(( -6.4-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18B9),  L1D_LNA_LOW_MAXPIN,  MML1_ELNA_MODE_BYPASS},
/*MT6177L*/      {   -72/*-9*/, (Gain)(ROUNDINT(( -6.4-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18B9), L1D_LNA_LOW_MAXPIN, (Gain)(ROUNDINT(( -6.4-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18B9),  L1D_LNA_LOW_MAXPIN,  MML1_ELNA_MODE_BYPASS},
/*MT6177L*/      {   -64/*-8*/, (Gain)(ROUNDINT(( -6.4-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18B9), L1D_LNA_LOW_MAXPIN, (Gain)(ROUNDINT(( -6.4-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18B9),  L1D_LNA_LOW_MAXPIN,  MML1_ELNA_MODE_BYPASS},
/*MT6177L*/      {   -56/*-7*/, (Gain)(ROUNDINT(( -6.4-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18B9), L1D_LNA_LOW_MAXPIN, (Gain)(ROUNDINT(( -6.4-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18B9),  L1D_LNA_LOW_MAXPIN,  MML1_ELNA_MODE_BYPASS},
/*MT6177L*/      {   -48/*-6*/, (Gain)(ROUNDINT(( -6.4-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18B9), L1D_LNA_LOW_MAXPIN, (Gain)(ROUNDINT(( -6.4-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18B9),  L1D_LNA_LOW_MAXPIN,  MML1_ELNA_MODE_BYPASS},
/*MT6177L*/      {   -40/*-5*/, (Gain)(ROUNDINT(( -6.4-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18B9), L1D_LNA_LOW_MAXPIN, (Gain)(ROUNDINT(( -6.4-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18B9),  L1D_LNA_LOW_MAXPIN,  MML1_ELNA_MODE_BYPASS},
/*MT6177L*/    }
/*MT6177L*/ };
/*MT6177L*/ const  sL1DAGCHALDATA *const  AGC_TABLE_HAL_ELNA_BYPASS_LIST[] =
/*MT6177L*/ {  0,                                                                 /*#FrequencyBand400  */
/*MT6177L*/    &AGC_TABLE_HAL_ELNA_BYPASS_LOWBAND,                                /* FrequencyBand850  */
/*MT6177L*/    &AGC_TABLE_HAL_ELNA_BYPASS_LOWBAND,                                /* FrequencyBand900  */
/*MT6177L*/    &AGC_TABLE_HAL_ELNA_BYPASS_HIGHBAND,                               /* FrequencyBand1800 */
/*MT6177L*/    &AGC_TABLE_HAL_ELNA_BYPASS_HIGHBAND,                               /* FrequencyBand1900 */
/*MT6177L*/ };
/*MT6177L*/ const  sL1DAGCHALDATA  AGC_TABLE_HAL_MATCHING_ELNA_BYPASS_LOWBAND=
/*MT6177L*/ {  
/*MT6177L*/    (Gain)(ROUNDINT(( 62.6 -PVOFSL )*(PWRRES))),  //max_gain
/*MT6177L*/    (Gain)(ROUNDINT(( -6.4-PVOFSL )*(PWRRES))),  //min_gain
/*MT6177L*/    -880/*-110*/,  //max_predict_power
/*MT6177L*/    -40/*-5*/,  //min_predict_power
/*MT6177L*/    -86*PWRRES,  //IBBD_Pin_THRESHOLD
/*MT6177L*/    -71*PWRRES,  //HRD_Pin_THRESHOLD
/*MT6177L*/    {  
/*MT6177L*/      {   -880/*-110*/, (Gain)(ROUNDINT(( 62.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18E), L1D_LNA_HIGH_SENSITIVITY, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BD),  L1D_LNA_HIGH_SENSITIVITY,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -872/*-109*/, (Gain)(ROUNDINT(( 62.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18E), L1D_LNA_HIGH_SENSITIVITY, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BD),  L1D_LNA_HIGH_SENSITIVITY,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -864/*-108*/, (Gain)(ROUNDINT(( 62.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18E), L1D_LNA_HIGH_SENSITIVITY, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BD),  L1D_LNA_HIGH_SENSITIVITY,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -856/*-107*/, (Gain)(ROUNDINT(( 62.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18E), L1D_LNA_HIGH_SENSITIVITY, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BD),  L1D_LNA_HIGH_SENSITIVITY,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -848/*-106*/, (Gain)(ROUNDINT(( 62.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18E), L1D_LNA_HIGH_SENSITIVITY, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BD),  L1D_LNA_HIGH_SENSITIVITY,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -840/*-105*/, (Gain)(ROUNDINT(( 62.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18E), L1D_LNA_HIGH_SENSITIVITY, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BD),  L1D_LNA_HIGH_SENSITIVITY,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -832/*-104*/, (Gain)(ROUNDINT(( 62.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18E), L1D_LNA_HIGH_SENSITIVITY, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BD),  L1D_LNA_HIGH_SENSITIVITY,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -824/*-103*/, (Gain)(ROUNDINT(( 62.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18E), L1D_LNA_HIGH_SENSITIVITY, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BD),  L1D_LNA_HIGH_SENSITIVITY,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -816/*-102*/, (Gain)(ROUNDINT(( 47.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x15D), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -808/*-101*/, (Gain)(ROUNDINT(( 47.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x15D), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -800/*-100*/, (Gain)(ROUNDINT(( 47.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x15D), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -792/*-99*/, (Gain)(ROUNDINT(( 47.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x15D), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -784/*-98*/, (Gain)(ROUNDINT(( 47.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x15D), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -776/*-97*/, (Gain)(ROUNDINT(( 47.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x15D), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -768/*-96*/, (Gain)(ROUNDINT(( 47.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x15D), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -760/*-95*/, (Gain)(ROUNDINT(( 50.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x10D), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -752/*-94*/, (Gain)(ROUNDINT(( 50.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x10D), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -744/*-93*/, (Gain)(ROUNDINT(( 50.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x10D), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -736/*-92*/, (Gain)(ROUNDINT(( 47.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x15D), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -728/*-91*/, (Gain)(ROUNDINT(( 47.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x15D), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -720/*-90*/, (Gain)(ROUNDINT(( 47.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x15D), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -712/*-89*/, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x11D), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -704/*-88*/, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x11D), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -696/*-87*/, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x11D), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -688/*-86*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -680/*-85*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 38.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BC),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -672/*-84*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 38.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BC),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -664/*-83*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 38.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BC),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -656/*-82*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 38.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BC),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -648/*-81*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 38.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BC),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -640/*-80*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 38.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BC),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -632/*-79*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 38.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BC),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -624/*-78*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -616/*-77*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -608/*-76*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -600/*-75*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -592/*-74*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -584/*-73*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -576/*-72*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -568/*-71*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -560/*-70*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -552/*-69*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -544/*-68*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -536/*-67*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -528/*-66*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -520/*-65*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -512/*-64*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -504/*-63*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -496/*-62*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -488/*-61*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -480/*-60*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -472/*-59*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -464/*-58*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -456/*-57*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -448/*-56*/, (Gain)(ROUNDINT(( 38.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x11C), L1D_LNA_MIDDLE, (Gain)(ROUNDINT(( 38.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x11C),  L1D_LNA_MIDDLE,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -440/*-55*/, (Gain)(ROUNDINT(( 38.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x11C), L1D_LNA_MIDDLE, (Gain)(ROUNDINT(( 38.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x11C),  L1D_LNA_MIDDLE,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -432/*-54*/, (Gain)(ROUNDINT(( 38.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x11C), L1D_LNA_MIDDLE, (Gain)(ROUNDINT(( 38.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x11C),  L1D_LNA_MIDDLE,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -424/*-53*/, (Gain)(ROUNDINT(( 35.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDC), L1D_LNA_MIDDLE, (Gain)(ROUNDINT(( 35.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDC),  L1D_LNA_MIDDLE,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -416/*-52*/, (Gain)(ROUNDINT(( 35.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDC), L1D_LNA_MIDDLE, (Gain)(ROUNDINT(( 35.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDC),  L1D_LNA_MIDDLE,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -408/*-51*/, (Gain)(ROUNDINT(( 35.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDC), L1D_LNA_MIDDLE, (Gain)(ROUNDINT(( 35.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDC),  L1D_LNA_MIDDLE,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -400/*-50*/, (Gain)(ROUNDINT(( 32.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x189), L1D_LNA_LOW, (Gain)(ROUNDINT(( 32.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x189),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -392/*-49*/, (Gain)(ROUNDINT(( 32.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x189), L1D_LNA_LOW, (Gain)(ROUNDINT(( 32.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x189),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -384/*-48*/, (Gain)(ROUNDINT(( 32.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x189), L1D_LNA_LOW, (Gain)(ROUNDINT(( 32.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x189),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -376/*-47*/, (Gain)(ROUNDINT(( 29.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x149), L1D_LNA_LOW, (Gain)(ROUNDINT(( 29.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x149),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -368/*-46*/, (Gain)(ROUNDINT(( 29.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x149), L1D_LNA_LOW, (Gain)(ROUNDINT(( 29.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x149),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -360/*-45*/, (Gain)(ROUNDINT(( 29.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x149), L1D_LNA_LOW, (Gain)(ROUNDINT(( 29.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x149),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -352/*-44*/, (Gain)(ROUNDINT(( 26.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x109), L1D_LNA_LOW, (Gain)(ROUNDINT(( 26.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x109),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -344/*-43*/, (Gain)(ROUNDINT(( 26.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x109), L1D_LNA_LOW, (Gain)(ROUNDINT(( 26.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x109),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -336/*-42*/, (Gain)(ROUNDINT(( 26.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x109), L1D_LNA_LOW, (Gain)(ROUNDINT(( 26.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x109),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -328/*-41*/, (Gain)(ROUNDINT(( 23.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x159), L1D_LNA_LOW, (Gain)(ROUNDINT(( 23.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x159),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -320/*-40*/, (Gain)(ROUNDINT(( 23.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x159), L1D_LNA_LOW, (Gain)(ROUNDINT(( 23.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x159),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -312/*-39*/, (Gain)(ROUNDINT(( 23.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x159), L1D_LNA_LOW, (Gain)(ROUNDINT(( 23.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x159),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -304/*-38*/, (Gain)(ROUNDINT(( 20.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x119), L1D_LNA_LOW, (Gain)(ROUNDINT(( 20.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x119),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -296/*-37*/, (Gain)(ROUNDINT(( 20.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x119), L1D_LNA_LOW, (Gain)(ROUNDINT(( 20.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x119),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -288/*-36*/, (Gain)(ROUNDINT(( 20.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x119), L1D_LNA_LOW, (Gain)(ROUNDINT(( 20.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x119),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -280/*-35*/, (Gain)(ROUNDINT(( 17.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xD9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 17.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xD9),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -272/*-34*/, (Gain)(ROUNDINT(( 17.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xD9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 17.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xD9),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -264/*-33*/, (Gain)(ROUNDINT(( 17.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xD9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 17.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xD9),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -256/*-32*/, (Gain)(ROUNDINT(( 14.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x139), L1D_LNA_LOW, (Gain)(ROUNDINT(( 14.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x139),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -248/*-31*/, (Gain)(ROUNDINT(( 14.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x139), L1D_LNA_LOW, (Gain)(ROUNDINT(( 14.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x139),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -240/*-30*/, (Gain)(ROUNDINT(( 14.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x139), L1D_LNA_LOW, (Gain)(ROUNDINT(( 14.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x139),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -232/*-29*/, (Gain)(ROUNDINT(( 11.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xF9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 11.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xF9),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -224/*-28*/, (Gain)(ROUNDINT(( 11.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xF9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 11.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xF9),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -216/*-27*/, (Gain)(ROUNDINT(( 11.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xF9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 11.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xF9),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -208/*-26*/, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -200/*-25*/, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -192/*-24*/, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -184/*-23*/, (Gain)(ROUNDINT(( 5.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x119), L1D_LNA_LOW_MAXPIN, (Gain)(ROUNDINT(( 5.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x119),  L1D_LNA_LOW_MAXPIN,  MML1_ELNA_MODE_BYPASS},
/*MT6177L*/      {   -176/*-22*/, (Gain)(ROUNDINT(( 5.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x119), L1D_LNA_LOW_MAXPIN, (Gain)(ROUNDINT(( 5.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x119),  L1D_LNA_LOW_MAXPIN,  MML1_ELNA_MODE_BYPASS},
/*MT6177L*/      {   -168/*-21*/, (Gain)(ROUNDINT(( 5.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x119), L1D_LNA_LOW_MAXPIN, (Gain)(ROUNDINT(( 5.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x119),  L1D_LNA_LOW_MAXPIN,  MML1_ELNA_MODE_BYPASS},
/*MT6177L*/      {   -160/*-20*/, (Gain)(ROUNDINT(( 2.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xD9), L1D_LNA_LOW_MAXPIN, (Gain)(ROUNDINT(( 2.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xD9),  L1D_LNA_LOW_MAXPIN,  MML1_ELNA_MODE_BYPASS},
/*MT6177L*/      {   -152/*-19*/, (Gain)(ROUNDINT(( 2.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xD9), L1D_LNA_LOW_MAXPIN, (Gain)(ROUNDINT(( 2.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xD9),  L1D_LNA_LOW_MAXPIN,  MML1_ELNA_MODE_BYPASS},
/*MT6177L*/      {   -144/*-18*/, (Gain)(ROUNDINT(( 2.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xD9), L1D_LNA_LOW_MAXPIN, (Gain)(ROUNDINT(( 2.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xD9),  L1D_LNA_LOW_MAXPIN,  MML1_ELNA_MODE_BYPASS},
/*MT6177L*/      {   -136/*-17*/, (Gain)(ROUNDINT(( -0.4-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x99), L1D_LNA_LOW_MAXPIN, (Gain)(ROUNDINT(( -0.4-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x99),  L1D_LNA_LOW_MAXPIN,  MML1_ELNA_MODE_BYPASS},
/*MT6177L*/      {   -128/*-16*/, (Gain)(ROUNDINT(( -0.4-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x99), L1D_LNA_LOW_MAXPIN, (Gain)(ROUNDINT(( -0.4-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x99),  L1D_LNA_LOW_MAXPIN,  MML1_ELNA_MODE_BYPASS},
/*MT6177L*/      {   -120/*-15*/, (Gain)(ROUNDINT(( -0.4-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x99), L1D_LNA_LOW_MAXPIN, (Gain)(ROUNDINT(( -0.4-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x99),  L1D_LNA_LOW_MAXPIN,  MML1_ELNA_MODE_BYPASS},
/*MT6177L*/      {   -112/*-14*/, (Gain)(ROUNDINT(( -3.4-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xF9), L1D_LNA_LOW_MAXPIN, (Gain)(ROUNDINT(( -3.4-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xF9),  L1D_LNA_LOW_MAXPIN,  MML1_ELNA_MODE_BYPASS},
/*MT6177L*/      {   -104/*-13*/, (Gain)(ROUNDINT(( -3.4-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xF9), L1D_LNA_LOW_MAXPIN, (Gain)(ROUNDINT(( -3.4-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xF9),  L1D_LNA_LOW_MAXPIN,  MML1_ELNA_MODE_BYPASS},
/*MT6177L*/      {   -96/*-12*/, (Gain)(ROUNDINT(( -3.4-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xF9), L1D_LNA_LOW_MAXPIN, (Gain)(ROUNDINT(( -3.4-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xF9),  L1D_LNA_LOW_MAXPIN,  MML1_ELNA_MODE_BYPASS},
/*MT6177L*/      {   -88/*-11*/, (Gain)(ROUNDINT(( -6.4-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9), L1D_LNA_LOW_MAXPIN, (Gain)(ROUNDINT(( -6.4-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9),  L1D_LNA_LOW_MAXPIN,  MML1_ELNA_MODE_BYPASS},
/*MT6177L*/      {   -80/*-10*/, (Gain)(ROUNDINT(( -6.4-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9), L1D_LNA_LOW_MAXPIN, (Gain)(ROUNDINT(( -6.4-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9),  L1D_LNA_LOW_MAXPIN,  MML1_ELNA_MODE_BYPASS},
/*MT6177L*/      {   -72/*-9*/, (Gain)(ROUNDINT(( -6.4-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9), L1D_LNA_LOW_MAXPIN, (Gain)(ROUNDINT(( -6.4-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9),  L1D_LNA_LOW_MAXPIN,  MML1_ELNA_MODE_BYPASS},
/*MT6177L*/      {   -64/*-8*/, (Gain)(ROUNDINT(( -6.4-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9), L1D_LNA_LOW_MAXPIN, (Gain)(ROUNDINT(( -6.4-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9),  L1D_LNA_LOW_MAXPIN,  MML1_ELNA_MODE_BYPASS},
/*MT6177L*/      {   -56/*-7*/, (Gain)(ROUNDINT(( -6.4-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9), L1D_LNA_LOW_MAXPIN, (Gain)(ROUNDINT(( -6.4-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9),  L1D_LNA_LOW_MAXPIN,  MML1_ELNA_MODE_BYPASS},
/*MT6177L*/      {   -48/*-6*/, (Gain)(ROUNDINT(( -6.4-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9), L1D_LNA_LOW_MAXPIN, (Gain)(ROUNDINT(( -6.4-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9),  L1D_LNA_LOW_MAXPIN,  MML1_ELNA_MODE_BYPASS},
/*MT6177L*/      {   -40/*-5*/, (Gain)(ROUNDINT(( -6.4-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9), L1D_LNA_LOW_MAXPIN, (Gain)(ROUNDINT(( -6.4-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9),  L1D_LNA_LOW_MAXPIN,  MML1_ELNA_MODE_BYPASS},
/*MT6177L*/    }
/*MT6177L*/ };
/*MT6177L*/ const  sL1DAGCHALDATA  AGC_TABLE_HAL_MATCHING_ELNA_BYPASS_HIGHBAND=
/*MT6177L*/ {  
/*MT6177L*/    (Gain)(ROUNDINT(( 62.6-PVOFSL )*(PWRRES))),  //max_gain
/*MT6177L*/    (Gain)(ROUNDINT(( -6.4-PVOFSL )*(PWRRES))),  //min_gain
/*MT6177L*/    -880/*-110*/,  //max_predict_power
/*MT6177L*/    -40/*-5*/,  //min_predict_power
/*MT6177L*/    -86*PWRRES,  //IBBD_Pin_THRESHOLD
/*MT6177L*/    -71*PWRRES,  //HRD_Pin_THRESHOLD
/*MT6177L*/    {  
/*MT6177L*/      {   -880/*-110*/, (Gain)(ROUNDINT(( 62.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x198E), L1D_LNA_HIGH_SENSITIVITY, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19BD),  L1D_LNA_HIGH_SENSITIVITY,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -872/*-109*/, (Gain)(ROUNDINT(( 62.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x198E), L1D_LNA_HIGH_SENSITIVITY, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19BD),  L1D_LNA_HIGH_SENSITIVITY,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -864/*-108*/, (Gain)(ROUNDINT(( 62.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x198E), L1D_LNA_HIGH_SENSITIVITY, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19BD),  L1D_LNA_HIGH_SENSITIVITY,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -856/*-107*/, (Gain)(ROUNDINT(( 62.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x198E), L1D_LNA_HIGH_SENSITIVITY, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19BD),  L1D_LNA_HIGH_SENSITIVITY,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -848/*-106*/, (Gain)(ROUNDINT(( 62.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x198E), L1D_LNA_HIGH_SENSITIVITY, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19BD),  L1D_LNA_HIGH_SENSITIVITY,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -840/*-105*/, (Gain)(ROUNDINT(( 62.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x198E), L1D_LNA_HIGH_SENSITIVITY, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19BD),  L1D_LNA_HIGH_SENSITIVITY,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -832/*-104*/, (Gain)(ROUNDINT(( 62.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x198E), L1D_LNA_HIGH_SENSITIVITY, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19BD),  L1D_LNA_HIGH_SENSITIVITY,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -824/*-103*/, (Gain)(ROUNDINT(( 62.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x198E), L1D_LNA_HIGH_SENSITIVITY, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19BD),  L1D_LNA_HIGH_SENSITIVITY,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -816/*-102*/, (Gain)(ROUNDINT(( 47.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x195D), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19BD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -808/*-101*/, (Gain)(ROUNDINT(( 47.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x195D), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19BD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -800/*-100*/, (Gain)(ROUNDINT(( 47.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x195D), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19BD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -792/*-99*/, (Gain)(ROUNDINT(( 47.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x195D), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19BD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -784/*-98*/, (Gain)(ROUNDINT(( 47.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x195D), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19BD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -776/*-97*/, (Gain)(ROUNDINT(( 47.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x195D), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19BD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -768/*-96*/, (Gain)(ROUNDINT(( 47.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x195D), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19BD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -760/*-95*/, (Gain)(ROUNDINT(( 50.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x190D), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19BD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -752/*-94*/, (Gain)(ROUNDINT(( 50.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x190D), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19BD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -744/*-93*/, (Gain)(ROUNDINT(( 50.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x190D), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19BD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -736/*-92*/, (Gain)(ROUNDINT(( 47.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x195D), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19BD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -728/*-91*/, (Gain)(ROUNDINT(( 47.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x195D), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19BD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -720/*-90*/, (Gain)(ROUNDINT(( 47.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x195D), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19BD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -712/*-89*/, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x191D), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19BD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -704/*-88*/, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x191D), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19BD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -696/*-87*/, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x191D), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19BD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -688/*-86*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19BD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -680/*-85*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 38.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19BC),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -672/*-84*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 38.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19BC),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -664/*-83*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 38.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19BC),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -656/*-82*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 38.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19BC),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -648/*-81*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 38.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19BC),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -640/*-80*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 38.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19BC),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -632/*-79*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 38.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19BC),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -624/*-78*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -616/*-77*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -608/*-76*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -600/*-75*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -592/*-74*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -584/*-73*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -576/*-72*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -568/*-71*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -560/*-70*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -552/*-69*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -544/*-68*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -536/*-67*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -528/*-66*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -520/*-65*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -512/*-64*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -504/*-63*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -496/*-62*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -488/*-61*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -480/*-60*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -472/*-59*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -464/*-58*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -456/*-57*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -448/*-56*/, (Gain)(ROUNDINT(( 38.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x191C), L1D_LNA_MIDDLE, (Gain)(ROUNDINT(( 38.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x191C),  L1D_LNA_MIDDLE,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -440/*-55*/, (Gain)(ROUNDINT(( 38.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x191C), L1D_LNA_MIDDLE, (Gain)(ROUNDINT(( 38.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x191C),  L1D_LNA_MIDDLE,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -432/*-54*/, (Gain)(ROUNDINT(( 38.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x191C), L1D_LNA_MIDDLE, (Gain)(ROUNDINT(( 38.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x191C),  L1D_LNA_MIDDLE,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -424/*-53*/, (Gain)(ROUNDINT(( 35.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DC), L1D_LNA_MIDDLE, (Gain)(ROUNDINT(( 35.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DC),  L1D_LNA_MIDDLE,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -416/*-52*/, (Gain)(ROUNDINT(( 35.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DC), L1D_LNA_MIDDLE, (Gain)(ROUNDINT(( 35.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DC),  L1D_LNA_MIDDLE,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -408/*-51*/, (Gain)(ROUNDINT(( 35.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DC), L1D_LNA_MIDDLE, (Gain)(ROUNDINT(( 35.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18DC),  L1D_LNA_MIDDLE,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -400/*-50*/, (Gain)(ROUNDINT(( 32.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1989), L1D_LNA_LOW, (Gain)(ROUNDINT(( 32.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1989),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -392/*-49*/, (Gain)(ROUNDINT(( 32.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1989), L1D_LNA_LOW, (Gain)(ROUNDINT(( 32.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1989),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -384/*-48*/, (Gain)(ROUNDINT(( 32.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1989), L1D_LNA_LOW, (Gain)(ROUNDINT(( 32.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1989),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -376/*-47*/, (Gain)(ROUNDINT(( 29.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1949), L1D_LNA_LOW, (Gain)(ROUNDINT(( 29.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1949),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -368/*-46*/, (Gain)(ROUNDINT(( 29.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1949), L1D_LNA_LOW, (Gain)(ROUNDINT(( 29.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1949),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -360/*-45*/, (Gain)(ROUNDINT(( 29.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1949), L1D_LNA_LOW, (Gain)(ROUNDINT(( 29.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1949),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -352/*-44*/, (Gain)(ROUNDINT(( 26.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1909), L1D_LNA_LOW, (Gain)(ROUNDINT(( 26.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1909),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -344/*-43*/, (Gain)(ROUNDINT(( 26.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1909), L1D_LNA_LOW, (Gain)(ROUNDINT(( 26.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1909),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -336/*-42*/, (Gain)(ROUNDINT(( 26.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1909), L1D_LNA_LOW, (Gain)(ROUNDINT(( 26.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1909),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -328/*-41*/, (Gain)(ROUNDINT(( 23.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1959), L1D_LNA_LOW, (Gain)(ROUNDINT(( 23.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1959),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -320/*-40*/, (Gain)(ROUNDINT(( 23.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1959), L1D_LNA_LOW, (Gain)(ROUNDINT(( 23.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1959),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -312/*-39*/, (Gain)(ROUNDINT(( 23.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1959), L1D_LNA_LOW, (Gain)(ROUNDINT(( 23.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1959),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -304/*-38*/, (Gain)(ROUNDINT(( 20.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1919), L1D_LNA_LOW, (Gain)(ROUNDINT(( 20.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1919),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -296/*-37*/, (Gain)(ROUNDINT(( 20.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1919), L1D_LNA_LOW, (Gain)(ROUNDINT(( 20.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1919),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -288/*-36*/, (Gain)(ROUNDINT(( 20.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1919), L1D_LNA_LOW, (Gain)(ROUNDINT(( 20.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1919),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -280/*-35*/, (Gain)(ROUNDINT(( 17.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18D9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 17.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18D9),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -272/*-34*/, (Gain)(ROUNDINT(( 17.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18D9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 17.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18D9),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -264/*-33*/, (Gain)(ROUNDINT(( 17.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18D9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 17.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18D9),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -256/*-32*/, (Gain)(ROUNDINT(( 14.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1939), L1D_LNA_LOW, (Gain)(ROUNDINT(( 14.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1939),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -248/*-31*/, (Gain)(ROUNDINT(( 14.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1939), L1D_LNA_LOW, (Gain)(ROUNDINT(( 14.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1939),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -240/*-30*/, (Gain)(ROUNDINT(( 14.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1939), L1D_LNA_LOW, (Gain)(ROUNDINT(( 14.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1939),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -232/*-29*/, (Gain)(ROUNDINT(( 11.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18F9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 11.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18F9),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -224/*-28*/, (Gain)(ROUNDINT(( 11.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18F9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 11.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18F9),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -216/*-27*/, (Gain)(ROUNDINT(( 11.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18F9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 11.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18F9),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -208/*-26*/, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18B9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18B9),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -200/*-25*/, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18B9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18B9),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -192/*-24*/, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18B9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18B9),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6177L*/      {   -184/*-23*/, (Gain)(ROUNDINT(( 5.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1919), L1D_LNA_LOW_MAXPIN, (Gain)(ROUNDINT(( 5.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1919),  L1D_LNA_LOW_MAXPIN,  MML1_ELNA_MODE_BYPASS},
/*MT6177L*/      {   -176/*-22*/, (Gain)(ROUNDINT(( 5.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1919), L1D_LNA_LOW_MAXPIN, (Gain)(ROUNDINT(( 5.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1919),  L1D_LNA_LOW_MAXPIN,  MML1_ELNA_MODE_BYPASS},
/*MT6177L*/      {   -168/*-21*/, (Gain)(ROUNDINT(( 5.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1919), L1D_LNA_LOW_MAXPIN, (Gain)(ROUNDINT(( 5.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1919),  L1D_LNA_LOW_MAXPIN,  MML1_ELNA_MODE_BYPASS},
/*MT6177L*/      {   -160/*-20*/, (Gain)(ROUNDINT(( 2.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18D9), L1D_LNA_LOW_MAXPIN, (Gain)(ROUNDINT(( 2.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18D9),  L1D_LNA_LOW_MAXPIN,  MML1_ELNA_MODE_BYPASS},
/*MT6177L*/      {   -152/*-19*/, (Gain)(ROUNDINT(( 2.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18D9), L1D_LNA_LOW_MAXPIN, (Gain)(ROUNDINT(( 2.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18D9),  L1D_LNA_LOW_MAXPIN,  MML1_ELNA_MODE_BYPASS},
/*MT6177L*/      {   -144/*-18*/, (Gain)(ROUNDINT(( 2.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18D9), L1D_LNA_LOW_MAXPIN, (Gain)(ROUNDINT(( 2.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18D9),  L1D_LNA_LOW_MAXPIN,  MML1_ELNA_MODE_BYPASS},
/*MT6177L*/      {   -136/*-17*/, (Gain)(ROUNDINT(( -0.4-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1899), L1D_LNA_LOW_MAXPIN, (Gain)(ROUNDINT(( -0.4-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1899),  L1D_LNA_LOW_MAXPIN,  MML1_ELNA_MODE_BYPASS},
/*MT6177L*/      {   -128/*-16*/, (Gain)(ROUNDINT(( -0.4-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1899), L1D_LNA_LOW_MAXPIN, (Gain)(ROUNDINT(( -0.4-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1899),  L1D_LNA_LOW_MAXPIN,  MML1_ELNA_MODE_BYPASS},
/*MT6177L*/      {   -120/*-15*/, (Gain)(ROUNDINT(( -0.4-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1899), L1D_LNA_LOW_MAXPIN, (Gain)(ROUNDINT(( -0.4-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1899),  L1D_LNA_LOW_MAXPIN,  MML1_ELNA_MODE_BYPASS},
/*MT6177L*/      {   -112/*-14*/, (Gain)(ROUNDINT(( -3.4-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18F9), L1D_LNA_LOW_MAXPIN, (Gain)(ROUNDINT(( -3.4-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18F9),  L1D_LNA_LOW_MAXPIN,  MML1_ELNA_MODE_BYPASS},
/*MT6177L*/      {   -104/*-13*/, (Gain)(ROUNDINT(( -3.4-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18F9), L1D_LNA_LOW_MAXPIN, (Gain)(ROUNDINT(( -3.4-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18F9),  L1D_LNA_LOW_MAXPIN,  MML1_ELNA_MODE_BYPASS},
/*MT6177L*/      {   -96/*-12*/, (Gain)(ROUNDINT(( -3.4-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18F9), L1D_LNA_LOW_MAXPIN, (Gain)(ROUNDINT(( -3.4-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18F9),  L1D_LNA_LOW_MAXPIN,  MML1_ELNA_MODE_BYPASS},
/*MT6177L*/      {   -88/*-11*/, (Gain)(ROUNDINT(( -6.4-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18B9), L1D_LNA_LOW_MAXPIN, (Gain)(ROUNDINT(( -6.4-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18B9),  L1D_LNA_LOW_MAXPIN,  MML1_ELNA_MODE_BYPASS},
/*MT6177L*/      {   -80/*-10*/, (Gain)(ROUNDINT(( -6.4-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18B9), L1D_LNA_LOW_MAXPIN, (Gain)(ROUNDINT(( -6.4-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18B9),  L1D_LNA_LOW_MAXPIN,  MML1_ELNA_MODE_BYPASS},
/*MT6177L*/      {   -72/*-9*/, (Gain)(ROUNDINT(( -6.4-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18B9), L1D_LNA_LOW_MAXPIN, (Gain)(ROUNDINT(( -6.4-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18B9),  L1D_LNA_LOW_MAXPIN,  MML1_ELNA_MODE_BYPASS},
/*MT6177L*/      {   -64/*-8*/, (Gain)(ROUNDINT(( -6.4-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18B9), L1D_LNA_LOW_MAXPIN, (Gain)(ROUNDINT(( -6.4-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18B9),  L1D_LNA_LOW_MAXPIN,  MML1_ELNA_MODE_BYPASS},
/*MT6177L*/      {   -56/*-7*/, (Gain)(ROUNDINT(( -6.4-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18B9), L1D_LNA_LOW_MAXPIN, (Gain)(ROUNDINT(( -6.4-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18B9),  L1D_LNA_LOW_MAXPIN,  MML1_ELNA_MODE_BYPASS},
/*MT6177L*/      {   -48/*-6*/, (Gain)(ROUNDINT(( -6.4-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18B9), L1D_LNA_LOW_MAXPIN, (Gain)(ROUNDINT(( -6.4-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18B9),  L1D_LNA_LOW_MAXPIN,  MML1_ELNA_MODE_BYPASS},
/*MT6177L*/      {   -40/*-5*/, (Gain)(ROUNDINT(( -6.4-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18B9), L1D_LNA_LOW_MAXPIN, (Gain)(ROUNDINT(( -6.4-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18B9),  L1D_LNA_LOW_MAXPIN,  MML1_ELNA_MODE_BYPASS},
/*MT6177L*/    }
/*MT6177L*/ };
/*MT6177L*/ const  sL1DAGCHALDATA *const  AGC_TABLE_HAL_MATCHING_ELNA_BYPASS_LIST[] =
/*MT6177L*/ {  0,                                                                 /*#FrequencyBand400  */
/*MT6177L*/    &AGC_TABLE_HAL_MATCHING_ELNA_BYPASS_LOWBAND,                                /* FrequencyBand850  */
/*MT6177L*/    &AGC_TABLE_HAL_MATCHING_ELNA_BYPASS_LOWBAND,                                /* FrequencyBand900  */
/*MT6177L*/    &AGC_TABLE_HAL_MATCHING_ELNA_BYPASS_HIGHBAND,                               /* FrequencyBand1800 */
/*MT6177L*/    &AGC_TABLE_HAL_MATCHING_ELNA_BYPASS_HIGHBAND,                               /* FrequencyBand1900 */
/*MT6177L*/ };
/*MT6177L*/    #endif
/*MT6177L*/ const RfTestCmdCalInfoV5_T L1D_RF_TST_INFO_TABLE[] = 
/*MT6177L*/ {/*PWRRES:8*/
/*MT6177L*/    {/************slect0***************[P]0:L1D_ELNA_IN_PATH_OFF,[D]0:L1D_ELNA_IN_PATH_OFF*/
/*MT6177L*/       0,                                                            //   kal_uint8   seq_num
/*MT6177L*/       {0,0,0,0,0,0},                                                //   kal_uint16   dlpow_default <- hard code in database
/*MT6177L*/       {0,0,0,0,0,0},                                                //   kal_uint16   dlpow_lbound
/*MT6177L*/       {0,0,0,0,0,0},                                                //   kal_uint16   dlpow_hbound
/*MT6177L*/       {{RX_LNA_NONE,RX_LNA_NONE,RX_LNA_NONE,RX_LNA_NONE,RX_LNA_NONE,RX_LNA_NONE},
/*MT6177L*/        {RX_LNA_NONE,RX_LNA_NONE,RX_LNA_NONE,RX_LNA_NONE,RX_LNA_NONE,RX_LNA_NONE}},//   kal_uint8   lna_enum_type
/*MT6177L*/       {{0,0,0,0,0,0},
/*MT6177L*/        {0,0,0,0,0,0}},                                              //   kal_uint8   antenna_enable
/*MT6177L*/       -288,                                                         //   kal_int16   dlpow_wcoef_default <- hard code in python
/*MT6177L*/       -480,                                                         //   kal_int16   dlpow_wcoef_lbound <- hard code in python
/*MT6177L*/       -160,                                                         //   kal_int16   dlpow_wcoef_hbound <- hard code in python
/*MT6177L*/       {-1,-1,-1,-1,-1,-1,-1,-1},                                    //   kal_int16   wcoef_arfcn -> RUNTIME UPDATE 
/*MT6177L*/       {{0,0,0,0,0,0},
/*MT6177L*/        {0,0,0,0,0,0}},                                              //   kal_int16   gain_default
/*MT6177L*/       {-160,
/*MT6177L*/        -160},                                                       //   kal_int16   wcoef_gain_default <- hard code in python
/*MT6177L*/       {NON_ELNA,NON_ELNA},                                          //   kal_uint8   elna_type
/*MT6177L*/       {{0,0,0,0,0,0},
/*MT6177L*/        {0,0,0,0,0,0}},                                              //   kal_int16   gain_hbound
/*MT6177L*/       {{0,0,0,0,0,0},
/*MT6177L*/        {0,0,0,0,0,0}},                                              //   kal_int16   gain_lbound
/*MT6177L*/    },
/*MT6177L*/    {/************slect1***************[P]0:L1D_ELNA_IN_PATH_OFF,[D]1:L1D_ELNA_UNUSED*/
/*MT6177L*/       3,                                                            //   kal_uint8   seq_num
/*MT6177L*/       {-480,-360,-280,0,0,0},                                       //   kal_uint16   dlpow_default <- hard code in database
/*MT6177L*/       {-720,-448,-328,0,0,0},                                       //   kal_uint16   dlpow_lbound
/*MT6177L*/       {-456,-336,-160,0,0,0},                                       //   kal_uint16   dlpow_hbound
/*MT6177L*/       {{RX_LNA_HIGH,RX_LNA_MID,RX_LNA_LOW,RX_LNA_NONE,RX_LNA_NONE,RX_LNA_NONE},
/*MT6177L*/        {RX_LNA_HIGH,RX_LNA_MID,RX_LNA_LOW,RX_LNA_NONE,RX_LNA_NONE,RX_LNA_NONE}},//   kal_uint8   lna_enum_type
/*MT6177L*/       {{0,0,0,0,0,0},
/*MT6177L*/        {1,1,1,0,0,0}},                                              //   kal_uint8   antenna_enable
/*MT6177L*/       -288,                                                         //   kal_int16   dlpow_wcoef_default <- hard code in python
/*MT6177L*/       -480,                                                         //   kal_int16   dlpow_wcoef_lbound <- hard code in python
/*MT6177L*/       -160,                                                         //   kal_int16   dlpow_wcoef_hbound <- hard code in python
/*MT6177L*/       {-1,-1,-1,-1,-1,-1,-1,-1},                                    //   kal_int16   wcoef_arfcn -> RUNTIME UPDATE 
/*MT6177L*/       {{80,-16,-136,0,0,0},
/*MT6177L*/        {80,-16,-136,0,0,0}},                                        //   kal_int16   gain_default
/*MT6177L*/       {-160,
/*MT6177L*/        -160},                                                       //   kal_int16   wcoef_gain_default <- hard code in python
/*MT6177L*/       {NON_ELNA,NON_ELNA},                                          //   kal_uint8   elna_type
/*MT6177L*/       {{181,61,-59,0,0,0},
/*MT6177L*/        {181,61,-59,0,0,0}},                                         //   kal_int16   gain_hbound
/*MT6177L*/       {{85,-35,-203,0,0,0},
/*MT6177L*/        {85,-35,-203,0,0,0}},                                        //   kal_int16   gain_lbound
/*MT6177L*/    },
/*MT6177L*/    {/************slect2***************[P]0:L1D_ELNA_IN_PATH_OFF,[D]2:L1D_ELNA_ALYWAYS_ON*/
/*MT6177L*/       4,                                                            //   kal_uint8   seq_num
/*MT6177L*/       {-560,-480,-360,-280,0,0},                                    //   kal_uint16   dlpow_default <- hard code in database
/*MT6177L*/       {-616,-600,-536,-400,0,0},                                    //   kal_uint16   dlpow_lbound
/*MT6177L*/       {-435,-388,-341,-232,0,0},                                    //   kal_uint16   dlpow_hbound
/*MT6177L*/       {{RX_LNA_HIGH,RX_LNA_HIGH,RX_LNA_MID,RX_LNA_LOW,RX_LNA_NONE,RX_LNA_NONE},
/*MT6177L*/        {RX_LNA_UTRA_HIGH,RX_LNA_HIGH,RX_LNA_MID,RX_LNA_LOW,RX_LNA_NONE,RX_LNA_NONE}},//   kal_uint8   lna_enum_type
/*MT6177L*/       {{0,0,0,0,0,0},
/*MT6177L*/        {1,1,1,1,0,0}},                                              //   kal_uint8   antenna_enable
/*MT6177L*/       -288,                                                         //   kal_int16   dlpow_wcoef_default <- hard code in python
/*MT6177L*/       -480,                                                         //   kal_int16   dlpow_wcoef_lbound <- hard code in python
/*MT6177L*/       -160,                                                         //   kal_int16   dlpow_wcoef_hbound <- hard code in python
/*MT6177L*/       {-1,-1,-1,-1,-1,-1,-1,-1},                                    //   kal_int16   wcoef_arfcn -> RUNTIME UPDATE 
/*MT6177L*/       {{80,80,-16,-136,0,0},
/*MT6177L*/        {272,56,32,-112,0,0}},                                       //   kal_int16   gain_default
/*MT6177L*/       {-160,
/*MT6177L*/        -160},                                                       //   kal_int16   wcoef_gain_default <- hard code in python
/*MT6177L*/       {NON_ELNA,ELNA_ALWAYS_ON},                                    //   kal_uint8   elna_type
/*MT6177L*/       {{181,181,61,-59,0,0},
/*MT6177L*/        {196,196,52,-92,0,0}},                                       //   kal_int16   gain_hbound
/*MT6177L*/       {{85,85,-35,-203,0,0},
/*MT6177L*/        {76,76,-68,-260,0,0}},                                       //   kal_int16   gain_lbound
/*MT6177L*/    },
/*MT6177L*/    {/************slect3***************[P]0:L1D_ELNA_IN_PATH_OFF,[D]3:L1D_ELNA_CAN_SWITCH*/
/*MT6177L*/       5,                                                            //   kal_uint8   seq_num
/*MT6177L*/       {-560,-480,-360,-280,-240,0},                                 //   kal_uint16   dlpow_default <- hard code in database
/*MT6177L*/       {-640,-616,-600,-424,-304,0},                                 //   kal_uint16   dlpow_lbound
/*MT6177L*/       {-483,-388,-343,-248,-131,0},                                 //   kal_uint16   dlpow_hbound
/*MT6177L*/       {{RX_LNA_HIGH,RX_LNA_HIGH,RX_LNA_MID,RX_LNA_LOW,RX_LNA_LOW,RX_LNA_NONE},
/*MT6177L*/        {RX_LNA_UTRA_HIGH,RX_LNA_HIGH,RX_LNA_MID,RX_LNA_LOW,RX_LNA_BYPASS_LOW,RX_LNA_NONE}},//   kal_uint8   lna_enum_type
/*MT6177L*/       {{0,0,0,0,0,0},
/*MT6177L*/        {1,1,1,1,1,0}},                                              //   kal_uint8   antenna_enable
/*MT6177L*/       -288,                                                         //   kal_int16   dlpow_wcoef_default <- hard code in python
/*MT6177L*/       -480,                                                         //   kal_int16   dlpow_wcoef_lbound <- hard code in python
/*MT6177L*/       -160,                                                         //   kal_int16   dlpow_wcoef_hbound <- hard code in python
/*MT6177L*/       {-1,-1,-1,-1,-1,-1,-1,-1},                                    //   kal_int16   wcoef_arfcn -> RUNTIME UPDATE 
/*MT6177L*/       {{80,80,-16,-136,-136,0},
/*MT6177L*/        {272,56,32,-112,-232,0}},                                    //   kal_int16   gain_default
/*MT6177L*/       {-160,
/*MT6177L*/        -160},                                                       //   kal_int16   wcoef_gain_default <- hard code in python
/*MT6177L*/       {NON_ELNA,ELNA_BYPASS_NB_MATCH},                              //   kal_uint8   elna_type
/*MT6177L*/       {{181,181,61,-59,-59,0},
/*MT6177L*/        {244,100,52,-92,-188,0}},                                    //   kal_int16   gain_hbound
/*MT6177L*/       {{85,85,-35,-203,-203,0},
/*MT6177L*/        {124,76,-68,-164,-308,0}},                                   //   kal_int16   gain_lbound
/*MT6177L*/    },
/*MT6177L*/    {/************slect4***************[P]1:L1D_ELNA_UNUSED,[D]0:L1D_ELNA_IN_PATH_OFF*/
/*MT6177L*/       4,                                                            //   kal_uint8   seq_num
/*MT6177L*/       {-480,-360,-360,-280,0,0},                                    //   kal_uint16   dlpow_default <- hard code in database
/*MT6177L*/       {-720,-448,-448,-328,0,0},                                    //   kal_uint16   dlpow_lbound
/*MT6177L*/       {-456,-336,-336,-160,0,0},                                    //   kal_uint16   dlpow_hbound
/*MT6177L*/       {{RX_LNA_HIGH,RX_LNA_MID,RX_LNA_MID_SAWLESS,RX_LNA_LOW,RX_LNA_NONE,RX_LNA_NONE},
/*MT6177L*/        {RX_LNA_HIGH,RX_LNA_MID,RX_LNA_MID_SAWLESS,RX_LNA_LOW,RX_LNA_NONE,RX_LNA_NONE}},//   kal_uint8   lna_enum_type
/*MT6177L*/       {{1,1,1,1,0,0},
/*MT6177L*/        {0,0,0,0,0,0}},                                              //   kal_uint8   antenna_enable
/*MT6177L*/       -288,                                                         //   kal_int16   dlpow_wcoef_default <- hard code in python
/*MT6177L*/       -480,                                                         //   kal_int16   dlpow_wcoef_lbound <- hard code in python
/*MT6177L*/       -160,                                                         //   kal_int16   dlpow_wcoef_hbound <- hard code in python
/*MT6177L*/       {-1,-1,-1,-1,-1,-1,-1,-1},                                    //   kal_int16   wcoef_arfcn -> RUNTIME UPDATE 
/*MT6177L*/       {{80,-16,-16,-136,0,0},
/*MT6177L*/        {80,-16,-16,-136,0,0}},                                      //   kal_int16   gain_default
/*MT6177L*/       {-160,
/*MT6177L*/        -160},                                                       //   kal_int16   wcoef_gain_default <- hard code in python
/*MT6177L*/       {NON_ELNA,NON_ELNA},                                          //   kal_uint8   elna_type
/*MT6177L*/       {{181,61,61,-59,0,0},
/*MT6177L*/        {181,61,61,-59,0,0}},                                        //   kal_int16   gain_hbound
/*MT6177L*/       {{85,-35,-35,-203,0,0},
/*MT6177L*/        {85,-35,-35,-203,0,0}},                                      //   kal_int16   gain_lbound
/*MT6177L*/    },
/*MT6177L*/    {/************slect5***************[P]1:L1D_ELNA_UNUSED,[D]1:L1D_ELNA_UNUSED*/
/*MT6177L*/       4,                                                            //   kal_uint8   seq_num
/*MT6177L*/       {-480,-360,-360,-280,0,0},                                    //   kal_uint16   dlpow_default <- hard code in database
/*MT6177L*/       {-720,-448,-448,-328,0,0},                                    //   kal_uint16   dlpow_lbound
/*MT6177L*/       {-456,-336,-336,-160,0,0},                                    //   kal_uint16   dlpow_hbound
/*MT6177L*/       {{RX_LNA_HIGH,RX_LNA_MID,RX_LNA_MID_SAWLESS,RX_LNA_LOW,RX_LNA_NONE,RX_LNA_NONE},
/*MT6177L*/        {RX_LNA_HIGH,RX_LNA_MID,RX_LNA_MID_SAWLESS,RX_LNA_LOW,RX_LNA_NONE,RX_LNA_NONE}},//   kal_uint8   lna_enum_type
/*MT6177L*/       {{1,1,1,1,0,0},
/*MT6177L*/        {1,1,0,1,0,0}},                                              //   kal_uint8   antenna_enable
/*MT6177L*/       -288,                                                         //   kal_int16   dlpow_wcoef_default <- hard code in python
/*MT6177L*/       -480,                                                         //   kal_int16   dlpow_wcoef_lbound <- hard code in python
/*MT6177L*/       -160,                                                         //   kal_int16   dlpow_wcoef_hbound <- hard code in python
/*MT6177L*/       {-1,-1,-1,-1,-1,-1,-1,-1},                                    //   kal_int16   wcoef_arfcn -> RUNTIME UPDATE 
/*MT6177L*/       {{80,-16,-16,-136,0,0},
/*MT6177L*/        {80,-16,-16,-136,0,0}},                                      //   kal_int16   gain_default
/*MT6177L*/       {-160,
/*MT6177L*/        -160},                                                       //   kal_int16   wcoef_gain_default <- hard code in python
/*MT6177L*/       {NON_ELNA,NON_ELNA},                                          //   kal_uint8   elna_type
/*MT6177L*/       {{181,61,61,-59,0,0},
/*MT6177L*/        {181,61,61,-59,0,0}},                                        //   kal_int16   gain_hbound
/*MT6177L*/       {{85,-35,-35,-203,0,0},
/*MT6177L*/        {85,-35,-35,-203,0,0}},                                      //   kal_int16   gain_lbound
/*MT6177L*/    },
/*MT6177L*/    {/************slect6***************[P]1:L1D_ELNA_UNUSED,[D]2:L1D_ELNA_ALYWAYS_ON*/
/*MT6177L*/       5,                                                            //   kal_uint8   seq_num
/*MT6177L*/       {-560,-480,-360,-360,-280,0},                                 //   kal_uint16   dlpow_default <- hard code in database
/*MT6177L*/       {-616,-600,-448,-448,-328,0},                                 //   kal_uint16   dlpow_lbound
/*MT6177L*/       {-435,-456,-341,-336,-232,0},                                 //   kal_uint16   dlpow_hbound
/*MT6177L*/       {{RX_LNA_HIGH,RX_LNA_HIGH,RX_LNA_MID,RX_LNA_MID_SAWLESS,RX_LNA_LOW,RX_LNA_NONE},
/*MT6177L*/        {RX_LNA_UTRA_HIGH,RX_LNA_HIGH,RX_LNA_MID,RX_LNA_MID,RX_LNA_LOW,RX_LNA_NONE}},//   kal_uint8   lna_enum_type
/*MT6177L*/       {{0,1,1,1,1,0},
/*MT6177L*/        {1,1,1,0,1,0}},                                              //   kal_uint8   antenna_enable
/*MT6177L*/       -288,                                                         //   kal_int16   dlpow_wcoef_default <- hard code in python
/*MT6177L*/       -480,                                                         //   kal_int16   dlpow_wcoef_lbound <- hard code in python
/*MT6177L*/       -160,                                                         //   kal_int16   dlpow_wcoef_hbound <- hard code in python
/*MT6177L*/       {-1,-1,-1,-1,-1,-1,-1,-1},                                    //   kal_int16   wcoef_arfcn -> RUNTIME UPDATE 
/*MT6177L*/       {{80,80,-16,-16,-136,0},
/*MT6177L*/        {272,56,32,32,-112,0}},                                      //   kal_int16   gain_default
/*MT6177L*/       {-160,
/*MT6177L*/        -160},                                                       //   kal_int16   wcoef_gain_default <- hard code in python
/*MT6177L*/       {NON_ELNA,ELNA_ALWAYS_ON},                                    //   kal_uint8   elna_type
/*MT6177L*/       {{181,181,61,61,-59,0},
/*MT6177L*/        {196,196,52,52,-92,0}},                                      //   kal_int16   gain_hbound
/*MT6177L*/       {{85,85,-35,-35,-203,0},
/*MT6177L*/        {76,76,-68,-68,-260,0}},                                     //   kal_int16   gain_lbound
/*MT6177L*/    },
/*MT6177L*/    {/************slect7***************[P]1:L1D_ELNA_UNUSED,[D]3:L1D_ELNA_CAN_SWITCH*/
/*MT6177L*/       6,                                                            //   kal_uint8   seq_num
/*MT6177L*/       {-560,-480,-360,-360,-280,-240},                              //   kal_uint16   dlpow_default <- hard code in database
/*MT6177L*/       {-640,-616,-448,-448,-328,-304},                              //   kal_uint16   dlpow_lbound
/*MT6177L*/       {-483,-456,-343,-336,-248,-131},                              //   kal_uint16   dlpow_hbound
/*MT6177L*/       {{RX_LNA_HIGH,RX_LNA_HIGH,RX_LNA_MID,RX_LNA_MID_SAWLESS,RX_LNA_LOW,RX_LNA_LOW},
/*MT6177L*/        {RX_LNA_UTRA_HIGH,RX_LNA_HIGH,RX_LNA_MID,RX_LNA_MID,RX_LNA_LOW,RX_LNA_BYPASS_LOW}},//   kal_uint8   lna_enum_type
/*MT6177L*/       {{0,1,1,1,1,0},
/*MT6177L*/        {1,1,1,0,1,1}},                                              //   kal_uint8   antenna_enable
/*MT6177L*/       -288,                                                         //   kal_int16   dlpow_wcoef_default <- hard code in python
/*MT6177L*/       -480,                                                         //   kal_int16   dlpow_wcoef_lbound <- hard code in python
/*MT6177L*/       -160,                                                         //   kal_int16   dlpow_wcoef_hbound <- hard code in python
/*MT6177L*/       {-1,-1,-1,-1,-1,-1,-1,-1},                                    //   kal_int16   wcoef_arfcn -> RUNTIME UPDATE 
/*MT6177L*/       {{80,80,-16,-16,-136,-136},
/*MT6177L*/        {272,56,32,32,-112,-232}},                                   //   kal_int16   gain_default
/*MT6177L*/       {-160,
/*MT6177L*/        -160},                                                       //   kal_int16   wcoef_gain_default <- hard code in python
/*MT6177L*/       {NON_ELNA,ELNA_BYPASS_NB_MATCH},                              //   kal_uint8   elna_type
/*MT6177L*/       {{181,181,61,61,-59,-59},
/*MT6177L*/        {244,100,52,52,-92,-188}},                                   //   kal_int16   gain_hbound
/*MT6177L*/       {{85,85,-35,-35,-203,-203},
/*MT6177L*/        {124,76,-68,-68,-164,-308}},                                 //   kal_int16   gain_lbound
/*MT6177L*/    },
/*MT6177L*/    {/************slect8***************[P]2:L1D_ELNA_ALYWAYS_ON,[D]0:L1D_ELNA_IN_PATH_OFF*/
/*MT6177L*/       4,                                                            //   kal_uint8   seq_num
/*MT6177L*/       {-560,-480,-360,-280,0,0},                                    //   kal_uint16   dlpow_default <- hard code in database
/*MT6177L*/       {-616,-600,-536,-400,0,0},                                    //   kal_uint16   dlpow_lbound
/*MT6177L*/       {-435,-388,-341,-232,0,0},                                    //   kal_uint16   dlpow_hbound
/*MT6177L*/       {{RX_LNA_UTRA_HIGH,RX_LNA_HIGH,RX_LNA_MID,RX_LNA_LOW,RX_LNA_NONE,RX_LNA_NONE},
/*MT6177L*/        {RX_LNA_HIGH,RX_LNA_HIGH,RX_LNA_MID,RX_LNA_LOW,RX_LNA_NONE,RX_LNA_NONE}},//   kal_uint8   lna_enum_type
/*MT6177L*/       {{1,1,1,1,0,0},
/*MT6177L*/        {0,0,0,0,0,0}},                                              //   kal_uint8   antenna_enable
/*MT6177L*/       -288,                                                         //   kal_int16   dlpow_wcoef_default <- hard code in python
/*MT6177L*/       -480,                                                         //   kal_int16   dlpow_wcoef_lbound <- hard code in python
/*MT6177L*/       -160,                                                         //   kal_int16   dlpow_wcoef_hbound <- hard code in python
/*MT6177L*/       {-1,-1,-1,-1,-1,-1,-1,-1},                                    //   kal_int16   wcoef_arfcn -> RUNTIME UPDATE 
/*MT6177L*/       {{272,56,32,-112,0,0},
/*MT6177L*/        {80,80,-16,-136,0,0}},                                       //   kal_int16   gain_default
/*MT6177L*/       {-160,
/*MT6177L*/        -160},                                                       //   kal_int16   wcoef_gain_default <- hard code in python
/*MT6177L*/       {ELNA_ALWAYS_ON,NON_ELNA},                                    //   kal_uint8   elna_type
/*MT6177L*/       {{196,196,52,-92,0,0},
/*MT6177L*/        {181,181,61,-59,0,0}},                                       //   kal_int16   gain_hbound
/*MT6177L*/       {{76,76,-68,-260,0,0},
/*MT6177L*/        {85,85,-35,-203,0,0}},                                       //   kal_int16   gain_lbound
/*MT6177L*/    },
/*MT6177L*/    {/************slect9***************[P]2:L1D_ELNA_ALYWAYS_ON,[D]1:L1D_ELNA_UNUSED*/
/*MT6177L*/       4,                                                            //   kal_uint8   seq_num
/*MT6177L*/       {-560,-480,-360,-280,0,0},                                    //   kal_uint16   dlpow_default <- hard code in database
/*MT6177L*/       {-616,-600,-448,-328,0,0},                                    //   kal_uint16   dlpow_lbound
/*MT6177L*/       {-435,-456,-341,-232,0,0},                                    //   kal_uint16   dlpow_hbound
/*MT6177L*/       {{RX_LNA_UTRA_HIGH,RX_LNA_HIGH,RX_LNA_MID,RX_LNA_LOW,RX_LNA_NONE,RX_LNA_NONE},
/*MT6177L*/        {RX_LNA_HIGH,RX_LNA_HIGH,RX_LNA_MID,RX_LNA_LOW,RX_LNA_NONE,RX_LNA_NONE}},//   kal_uint8   lna_enum_type
/*MT6177L*/       {{1,1,1,1,0,0},
/*MT6177L*/        {0,1,1,1,0,0}},                                              //   kal_uint8   antenna_enable
/*MT6177L*/       -288,                                                         //   kal_int16   dlpow_wcoef_default <- hard code in python
/*MT6177L*/       -480,                                                         //   kal_int16   dlpow_wcoef_lbound <- hard code in python
/*MT6177L*/       -160,                                                         //   kal_int16   dlpow_wcoef_hbound <- hard code in python
/*MT6177L*/       {-1,-1,-1,-1,-1,-1,-1,-1},                                    //   kal_int16   wcoef_arfcn -> RUNTIME UPDATE 
/*MT6177L*/       {{272,56,32,-112,0,0},
/*MT6177L*/        {80,80,-16,-136,0,0}},                                       //   kal_int16   gain_default
/*MT6177L*/       {-160,
/*MT6177L*/        -160},                                                       //   kal_int16   wcoef_gain_default <- hard code in python
/*MT6177L*/       {ELNA_ALWAYS_ON,NON_ELNA},                                    //   kal_uint8   elna_type
/*MT6177L*/       {{196,196,52,-92,0,0},
/*MT6177L*/        {181,181,61,-59,0,0}},                                       //   kal_int16   gain_hbound
/*MT6177L*/       {{76,76,-68,-260,0,0},
/*MT6177L*/        {85,85,-35,-203,0,0}},                                       //   kal_int16   gain_lbound
/*MT6177L*/    },
/*MT6177L*/    {/************slect10***************[P]2:L1D_ELNA_ALYWAYS_ON,[D]2:L1D_ELNA_ALYWAYS_ON*/
/*MT6177L*/       4,                                                            //   kal_uint8   seq_num
/*MT6177L*/       {-560,-480,-360,-280,0,0},                                    //   kal_uint16   dlpow_default <- hard code in database
/*MT6177L*/       {-616,-600,-536,-400,0,0},                                    //   kal_uint16   dlpow_lbound
/*MT6177L*/       {-435,-388,-341,-232,0,0},                                    //   kal_uint16   dlpow_hbound
/*MT6177L*/       {{RX_LNA_UTRA_HIGH,RX_LNA_HIGH,RX_LNA_MID,RX_LNA_LOW,RX_LNA_NONE,RX_LNA_NONE},
/*MT6177L*/        {RX_LNA_UTRA_HIGH,RX_LNA_HIGH,RX_LNA_MID,RX_LNA_LOW,RX_LNA_NONE,RX_LNA_NONE}},//   kal_uint8   lna_enum_type
/*MT6177L*/       {{1,1,1,1,0,0},
/*MT6177L*/        {1,1,1,1,0,0}},                                              //   kal_uint8   antenna_enable
/*MT6177L*/       -288,                                                         //   kal_int16   dlpow_wcoef_default <- hard code in python
/*MT6177L*/       -480,                                                         //   kal_int16   dlpow_wcoef_lbound <- hard code in python
/*MT6177L*/       -160,                                                         //   kal_int16   dlpow_wcoef_hbound <- hard code in python
/*MT6177L*/       {-1,-1,-1,-1,-1,-1,-1,-1},                                    //   kal_int16   wcoef_arfcn -> RUNTIME UPDATE 
/*MT6177L*/       {{272,56,32,-112,0,0},
/*MT6177L*/        {272,56,32,-112,0,0}},                                       //   kal_int16   gain_default
/*MT6177L*/       {-160,
/*MT6177L*/        -160},                                                       //   kal_int16   wcoef_gain_default <- hard code in python
/*MT6177L*/       {ELNA_ALWAYS_ON,ELNA_ALWAYS_ON},                              //   kal_uint8   elna_type
/*MT6177L*/       {{196,196,52,-92,0,0},
/*MT6177L*/        {196,196,52,-92,0,0}},                                       //   kal_int16   gain_hbound
/*MT6177L*/       {{76,76,-68,-260,0,0},
/*MT6177L*/        {76,76,-68,-260,0,0}},                                       //   kal_int16   gain_lbound
/*MT6177L*/    },
/*MT6177L*/    {/************slect11***************[P]2:L1D_ELNA_ALYWAYS_ON,[D]3:L1D_ELNA_CAN_SWITCH*/
/*MT6177L*/       5,                                                            //   kal_uint8   seq_num
/*MT6177L*/       {-560,-480,-360,-280,-240,0},                                 //   kal_uint16   dlpow_default <- hard code in database
/*MT6177L*/       {-616,-600,-536,-400,-304,0},                                 //   kal_uint16   dlpow_lbound
/*MT6177L*/       {-483,-388,-343,-248,-131,0},                                 //   kal_uint16   dlpow_hbound
/*MT6177L*/       {{RX_LNA_UTRA_HIGH,RX_LNA_HIGH,RX_LNA_MID,RX_LNA_LOW,RX_LNA_LOW,RX_LNA_NONE},
/*MT6177L*/        {RX_LNA_UTRA_HIGH,RX_LNA_HIGH,RX_LNA_MID,RX_LNA_LOW,RX_LNA_BYPASS_LOW,RX_LNA_NONE}},//   kal_uint8   lna_enum_type
/*MT6177L*/       {{1,1,1,1,0,0},
/*MT6177L*/        {1,1,1,1,1,0}},                                              //   kal_uint8   antenna_enable
/*MT6177L*/       -288,                                                         //   kal_int16   dlpow_wcoef_default <- hard code in python
/*MT6177L*/       -480,                                                         //   kal_int16   dlpow_wcoef_lbound <- hard code in python
/*MT6177L*/       -160,                                                         //   kal_int16   dlpow_wcoef_hbound <- hard code in python
/*MT6177L*/       {-1,-1,-1,-1,-1,-1,-1,-1},                                    //   kal_int16   wcoef_arfcn -> RUNTIME UPDATE 
/*MT6177L*/       {{272,56,32,-112,-112,0},
/*MT6177L*/        {272,56,32,-112,-232,0}},                                    //   kal_int16   gain_default
/*MT6177L*/       {-160,
/*MT6177L*/        -160},                                                       //   kal_int16   wcoef_gain_default <- hard code in python
/*MT6177L*/       {ELNA_ALWAYS_ON,ELNA_BYPASS_NB_MATCH},                        //   kal_uint8   elna_type
/*MT6177L*/       {{196,196,52,-92,-92,0},
/*MT6177L*/        {244,100,52,-92,-188,0}},                                    //   kal_int16   gain_hbound
/*MT6177L*/       {{76,76,-68,-260,-260,0},
/*MT6177L*/        {124,76,-68,-164,-308,0}},                                   //   kal_int16   gain_lbound
/*MT6177L*/    },
/*MT6177L*/    {/************slect12***************[P]3:L1D_ELNA_CAN_SWITCH,[D]0:L1D_ELNA_IN_PATH_OFF*/
/*MT6177L*/       5,                                                            //   kal_uint8   seq_num
/*MT6177L*/       {-560,-480,-360,-280,-240,0},                                 //   kal_uint16   dlpow_default <- hard code in database
/*MT6177L*/       {-640,-616,-600,-424,-304,0},                                 //   kal_uint16   dlpow_lbound
/*MT6177L*/       {-483,-388,-343,-248,-131,0},                                 //   kal_uint16   dlpow_hbound
/*MT6177L*/       {{RX_LNA_UTRA_HIGH,RX_LNA_HIGH,RX_LNA_MID,RX_LNA_LOW,RX_LNA_BYPASS_LOW,RX_LNA_NONE},
/*MT6177L*/        {RX_LNA_HIGH,RX_LNA_HIGH,RX_LNA_MID,RX_LNA_LOW,RX_LNA_LOW,RX_LNA_NONE}},//   kal_uint8   lna_enum_type
/*MT6177L*/       {{1,1,1,1,1,0},
/*MT6177L*/        {0,0,0,0,0,0}},                                              //   kal_uint8   antenna_enable
/*MT6177L*/       -288,                                                         //   kal_int16   dlpow_wcoef_default <- hard code in python
/*MT6177L*/       -480,                                                         //   kal_int16   dlpow_wcoef_lbound <- hard code in python
/*MT6177L*/       -160,                                                         //   kal_int16   dlpow_wcoef_hbound <- hard code in python
/*MT6177L*/       {-1,-1,-1,-1,-1,-1,-1,-1},                                    //   kal_int16   wcoef_arfcn -> RUNTIME UPDATE 
/*MT6177L*/       {{272,56,32,-112,-232,0},
/*MT6177L*/        {80,80,-16,-136,-136,0}},                                    //   kal_int16   gain_default
/*MT6177L*/       {-160,
/*MT6177L*/        -160},                                                       //   kal_int16   wcoef_gain_default <- hard code in python
/*MT6177L*/       {ELNA_BYPASS_NB_MATCH,NON_ELNA},                              //   kal_uint8   elna_type
/*MT6177L*/       {{244,100,52,-92,-188,0},
/*MT6177L*/        {181,181,61,-59,-59,0}},                                     //   kal_int16   gain_hbound
/*MT6177L*/       {{124,76,-68,-164,-308,0},
/*MT6177L*/        {85,85,-35,-203,-203,0}},                                    //   kal_int16   gain_lbound
/*MT6177L*/    },
/*MT6177L*/    {/************slect13***************[P]3:L1D_ELNA_CAN_SWITCH,[D]1:L1D_ELNA_UNUSED*/
/*MT6177L*/       5,                                                            //   kal_uint8   seq_num
/*MT6177L*/       {-560,-480,-360,-280,-240,0},                                 //   kal_uint16   dlpow_default <- hard code in database
/*MT6177L*/       {-640,-616,-448,-328,-304,0},                                 //   kal_uint16   dlpow_lbound
/*MT6177L*/       {-483,-456,-343,-248,-131,0},                                 //   kal_uint16   dlpow_hbound
/*MT6177L*/       {{RX_LNA_UTRA_HIGH,RX_LNA_HIGH,RX_LNA_MID,RX_LNA_LOW,RX_LNA_BYPASS_LOW,RX_LNA_NONE},
/*MT6177L*/        {RX_LNA_HIGH,RX_LNA_HIGH,RX_LNA_MID,RX_LNA_LOW,RX_LNA_LOW,RX_LNA_NONE}},//   kal_uint8   lna_enum_type
/*MT6177L*/       {{1,1,1,1,1,0},
/*MT6177L*/        {0,1,1,1,0,0}},                                              //   kal_uint8   antenna_enable
/*MT6177L*/       -288,                                                         //   kal_int16   dlpow_wcoef_default <- hard code in python
/*MT6177L*/       -480,                                                         //   kal_int16   dlpow_wcoef_lbound <- hard code in python
/*MT6177L*/       -160,                                                         //   kal_int16   dlpow_wcoef_hbound <- hard code in python
/*MT6177L*/       {-1,-1,-1,-1,-1,-1,-1,-1},                                    //   kal_int16   wcoef_arfcn -> RUNTIME UPDATE 
/*MT6177L*/       {{272,56,32,-112,-232,0},
/*MT6177L*/        {80,80,-16,-136,-136,0}},                                    //   kal_int16   gain_default
/*MT6177L*/       {-160,
/*MT6177L*/        -160},                                                       //   kal_int16   wcoef_gain_default <- hard code in python
/*MT6177L*/       {ELNA_BYPASS_NB_MATCH,NON_ELNA},                              //   kal_uint8   elna_type
/*MT6177L*/       {{244,100,52,-92,-188,0},
/*MT6177L*/        {181,181,61,-59,-59,0}},                                     //   kal_int16   gain_hbound
/*MT6177L*/       {{124,76,-68,-164,-308,0},
/*MT6177L*/        {85,85,-35,-203,-203,0}},                                    //   kal_int16   gain_lbound
/*MT6177L*/    },
/*MT6177L*/    {/************slect14***************[P]3:L1D_ELNA_CAN_SWITCH,[D]2:L1D_ELNA_ALYWAYS_ON*/
/*MT6177L*/       5,                                                            //   kal_uint8   seq_num
/*MT6177L*/       {-560,-480,-360,-280,-240,0},                                 //   kal_uint16   dlpow_default <- hard code in database
/*MT6177L*/       {-616,-600,-536,-400,-304,0},                                 //   kal_uint16   dlpow_lbound
/*MT6177L*/       {-483,-388,-343,-248,-131,0},                                 //   kal_uint16   dlpow_hbound
/*MT6177L*/       {{RX_LNA_UTRA_HIGH,RX_LNA_HIGH,RX_LNA_MID,RX_LNA_LOW,RX_LNA_BYPASS_LOW,RX_LNA_NONE},
/*MT6177L*/        {RX_LNA_UTRA_HIGH,RX_LNA_HIGH,RX_LNA_MID,RX_LNA_LOW,RX_LNA_LOW,RX_LNA_NONE}},//   kal_uint8   lna_enum_type
/*MT6177L*/       {{1,1,1,1,1,0},
/*MT6177L*/        {1,1,1,1,0,0}},                                              //   kal_uint8   antenna_enable
/*MT6177L*/       -288,                                                         //   kal_int16   dlpow_wcoef_default <- hard code in python
/*MT6177L*/       -480,                                                         //   kal_int16   dlpow_wcoef_lbound <- hard code in python
/*MT6177L*/       -160,                                                         //   kal_int16   dlpow_wcoef_hbound <- hard code in python
/*MT6177L*/       {-1,-1,-1,-1,-1,-1,-1,-1},                                    //   kal_int16   wcoef_arfcn -> RUNTIME UPDATE 
/*MT6177L*/       {{272,56,32,-112,-232,0},
/*MT6177L*/        {272,56,32,-112,-112,0}},                                    //   kal_int16   gain_default
/*MT6177L*/       {-160,
/*MT6177L*/        -160},                                                       //   kal_int16   wcoef_gain_default <- hard code in python
/*MT6177L*/       {ELNA_BYPASS_NB_MATCH,ELNA_ALWAYS_ON},                        //   kal_uint8   elna_type
/*MT6177L*/       {{244,100,52,-92,-188,0},
/*MT6177L*/        {196,196,52,-92,-92,0}},                                     //   kal_int16   gain_hbound
/*MT6177L*/       {{124,76,-68,-164,-308,0},
/*MT6177L*/        {76,76,-68,-260,-260,0}},                                    //   kal_int16   gain_lbound
/*MT6177L*/    },
/*MT6177L*/    {/************slect15***************[P]3:L1D_ELNA_CAN_SWITCH,[D]3:L1D_ELNA_CAN_SWITCH*/
/*MT6177L*/       5,                                                            //   kal_uint8   seq_num
/*MT6177L*/       {-560,-480,-360,-280,-240,0},                                 //   kal_uint16   dlpow_default <- hard code in database
/*MT6177L*/       {-640,-616,-600,-424,-304,0},                                 //   kal_uint16   dlpow_lbound
/*MT6177L*/       {-483,-388,-343,-248,-131,0},                                 //   kal_uint16   dlpow_hbound
/*MT6177L*/       {{RX_LNA_UTRA_HIGH,RX_LNA_HIGH,RX_LNA_MID,RX_LNA_LOW,RX_LNA_BYPASS_LOW,RX_LNA_NONE},
/*MT6177L*/        {RX_LNA_UTRA_HIGH,RX_LNA_HIGH,RX_LNA_MID,RX_LNA_LOW,RX_LNA_BYPASS_LOW,RX_LNA_NONE}},//   kal_uint8   lna_enum_type
/*MT6177L*/       {{1,1,1,1,1,0},
/*MT6177L*/        {1,1,1,1,1,0}},                                              //   kal_uint8   antenna_enable
/*MT6177L*/       -288,                                                         //   kal_int16   dlpow_wcoef_default <- hard code in python
/*MT6177L*/       -480,                                                         //   kal_int16   dlpow_wcoef_lbound <- hard code in python
/*MT6177L*/       -160,                                                         //   kal_int16   dlpow_wcoef_hbound <- hard code in python
/*MT6177L*/       {-1,-1,-1,-1,-1,-1,-1,-1},                                    //   kal_int16   wcoef_arfcn -> RUNTIME UPDATE 
/*MT6177L*/       {{272,56,32,-112,-232,0},
/*MT6177L*/        {272,56,32,-112,-232,0}},                                    //   kal_int16   gain_default
/*MT6177L*/       {-160,
/*MT6177L*/        -160},                                                       //   kal_int16   wcoef_gain_default <- hard code in python
/*MT6177L*/       {ELNA_BYPASS_NB_MATCH,ELNA_BYPASS_NB_MATCH},                  //   kal_uint8   elna_type
/*MT6177L*/       {{244,100,52,-92,-188,0},
/*MT6177L*/        {244,100,52,-92,-188,0}},                                    //   kal_int16   gain_hbound
/*MT6177L*/       {{124,76,-68,-164,-308,0},
/*MT6177L*/        {124,76,-68,-164,-308,0}},                                   //   kal_int16   gain_lbound
/*MT6177L*/    },
/*MT6177L*/ };
/*MT6177L*/ 
/*MT6177L*/ const unsigned short L1D_RF_TST_INFO_ELNA_MAPPING_TABLE[4][4] =  // need follow the value of enum L1D_ELNA_USAGE
/*MT6177L*/ {
/*MT6177L*/    {0 /*[P]0:L1D_ELNA_IN_PATH_OFF,[D]0:L1D_ELNA_IN_PATH_OFF*/,1 /*[P]0:L1D_ELNA_IN_PATH_OFF,[D]1:L1D_ELNA_UNUSED*/,2 /*[P]0:L1D_ELNA_IN_PATH_OFF,[D]2:L1D_ELNA_ALYWAYS_ON*/,3 /*[P]0:L1D_ELNA_IN_PATH_OFF,[D]3:L1D_ELNA_CAN_SWITCH*/},
/*MT6177L*/    {4 /*[P]1:L1D_ELNA_UNUSED,[D]0:L1D_ELNA_IN_PATH_OFF*/,5 /*[P]1:L1D_ELNA_UNUSED,[D]1:L1D_ELNA_UNUSED*/,6 /*[P]1:L1D_ELNA_UNUSED,[D]2:L1D_ELNA_ALYWAYS_ON*/,7 /*[P]1:L1D_ELNA_UNUSED,[D]3:L1D_ELNA_CAN_SWITCH*/},
/*MT6177L*/    {8 /*[P]2:L1D_ELNA_ALYWAYS_ON,[D]0:L1D_ELNA_IN_PATH_OFF*/,9 /*[P]2:L1D_ELNA_ALYWAYS_ON,[D]1:L1D_ELNA_UNUSED*/,10 /*[P]2:L1D_ELNA_ALYWAYS_ON,[D]2:L1D_ELNA_ALYWAYS_ON*/,11 /*[P]2:L1D_ELNA_ALYWAYS_ON,[D]3:L1D_ELNA_CAN_SWITCH*/},
/*MT6177L*/    {12 /*[P]3:L1D_ELNA_CAN_SWITCH,[D]0:L1D_ELNA_IN_PATH_OFF*/,13 /*[P]3:L1D_ELNA_CAN_SWITCH,[D]1:L1D_ELNA_UNUSED*/,14 /*[P]3:L1D_ELNA_CAN_SWITCH,[D]2:L1D_ELNA_ALYWAYS_ON*/,15 /*[P]3:L1D_ELNA_CAN_SWITCH,[D]3:L1D_ELNA_CAN_SWITCH*/},
/*MT6177L*/ };
/*MT6177L*/ const unsigned short L1D_RF_TST_INFO_WCOEF_ARFCN[FrequencyBandCount][8] =  
/*MT6177L*/ {  { -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1},                               /*#FrequencyBand400  */
/*MT6177L*/    {204,  -1,  -1,  -1,  -1,  -1,  -1,  -1},                               /* FrequencyBand850  */
/*MT6177L*/    { 39,  40,  -1,  -1,  -1,  -1,  -1,  -1},                               /* FrequencyBand900  */
/*MT6177L*/    {536, 586, 636, 685, 736, 786, 836, 874},   /* FrequencyBand1800 */
/*MT6177L*/    {536, 586, 645, 686, 736, 786,  -1,  -1},   /* FrequencyBand1900 */
/*MT6177L*/ };
   #endif /*#if IS_2G_RXD_SUPPORT*/
#endif
                            
#if IS_RF_MT6177M
/*MT6173*/
/*MT6173*/ #define  GAIN_STEP              3
/*MT6173*/ #define  PVOFSL                 34
/*MT6173*/ #define  PVOFSH                 34
/*MT6173*/ #define  LPF2_DROP_GAIN         ROUNDINT(3*(PWRRES))
/*MT6173*/ #define  TIA_DROP_GAIN          ROUNDINT(6*(PWRRES))
/*MT6173*/ #define  LNA_DROP_GAIN          ROUNDINT(6*(PWRRES))
/*MT6173*/ #define  HRD_LB_THRESHOLD       ROUNDINT((44.6-PVOFSL)*(PWRRES))
/*MT6173*/ #define  HRD_HB_THRESHOLD       ROUNDINT((44.6-PVOFSH)*(PWRRES))
/*MT6173*/ #define  IBBD_LB_THRESHOLD      ROUNDINT((53.6-PVOFSL)*(PWRRES))
/*MT6173*/ #define  IBBD_HB_THRESHOLD      ROUNDINT((53.6-PVOFSH)*(PWRRES))
/*MT6173*/ #define  RF_GSM850_MAXGAIN      (( 56.6-PVOFSL )*(PWRRES))
/*MT6173*/ #define  RF_GSM850_MINGAIN      (( -3.4-PVOFSL )*(PWRRES))
/*MT6173*/ #define  RF_GSM_MAXGAIN         (( 56.6-PVOFSL )*(PWRRES))
/*MT6173*/ #define  RF_GSM_MINGAIN         (( -3.4-PVOFSL )*(PWRRES))
/*MT6173*/ #define  RF_DCS_MAXGAIN         (( 56.6-PVOFSH )*(PWRRES))
/*MT6173*/ #define  RF_DCS_MINGAIN         (( -3.4-PVOFSH )*(PWRRES))
/*MT6173*/ #define  RF_PCS_MAXGAIN         (( 56.6-PVOFSH )*(PWRRES))
/*MT6173*/ #define  RF_PCS_MINGAIN         (( -3.4-PVOFSH )*(PWRRES))
/*MT6173*/
/*MT6173*/ /* GSM850....................................................................*/
/*MT6173*/
/*MT6173*/ const  sL1DAGCDATA  AGC_TABLE_GSM850[6] =
/*MT6173*/ {  {  GBOUND(( 47.6-PVOFSL ),( 44.6-PVOFSL ) ), GC_A( 5,(  47.6-PVOFSL ) ), BSI_CW(0x14E, 0x0000E) },  // Orion+ has PRX1 & DRX1 (CW334 & CW336), use CW334 as defualt setting
/*MT6173*/    {  GBOUND(( 44.6-PVOFSL ),( 41.6-PVOFSL ) ), GC_A( 6,(  44.6-PVOFSL ) ), BSI_CW(0x14E, 0x0001E) },
/*MT6173*/    {  GBOUND(( 29.6-PVOFSL ),( 26.6-PVOFSL ) ), GC_A( 3,(  29.6-PVOFSL ) ), BSI_CW(0x14E, 0x0001D) },
/*MT6173*/    {  GBOUND(( 17.6-PVOFSL ),( 14.6-PVOFSL ) ), GC_A( 5,(  17.6-PVOFSL ) ), BSI_CW(0x14E, 0x00009) },
/*MT6173*/    {  GBOUND((  5.6-PVOFSL ),(  2.6-PVOFSL ) ), GC_A( 3,(   5.6-PVOFSL ) ), BSI_CW(0x14E, 0x00019) },
/*MT6173*/    {  GBOUND(( -3.4-PVOFSL ),( -3.4-PVOFSL ) ), GC_A( 2,(  -3.4-PVOFSL ) ), BSI_CW(0x14E, 0x00039) },
/*MT6173*/ };
/*MT6173*/
/*MT6173*/ /* GSM900....................................................................*/
/*MT6173*/
/*MT6173*/ const  sL1DAGCDATA  AGC_TABLE_GSM900[6]  =
/*MT6173*/ {  {  GBOUND(( 47.6-PVOFSL ),( 44.6-PVOFSL ) ), GC_A( 5,(  47.6-PVOFSL ) ), BSI_CW(0x14E, 0x0000E) },  // Orion+ has PRX1 & DRX1 (CW334 & CW336), use CW334 as defualt setting
/*MT6173*/    {  GBOUND(( 44.6-PVOFSL ),( 41.6-PVOFSL ) ), GC_A( 6,(  44.6-PVOFSL ) ), BSI_CW(0x14E, 0x0001E) },
/*MT6173*/    {  GBOUND(( 29.6-PVOFSL ),( 26.6-PVOFSL ) ), GC_A( 3,(  29.6-PVOFSL ) ), BSI_CW(0x14E, 0x0001D) },
/*MT6173*/    {  GBOUND(( 17.6-PVOFSL ),( 14.6-PVOFSL ) ), GC_A( 5,(  17.6-PVOFSL ) ), BSI_CW(0x14E, 0x00009) },
/*MT6173*/    {  GBOUND((  5.6-PVOFSL ),(  2.6-PVOFSL ) ), GC_A( 3,(   5.6-PVOFSL ) ), BSI_CW(0x14E, 0x00019) },
/*MT6173*/    {  GBOUND(( -3.4-PVOFSL ),( -3.4-PVOFSL ) ), GC_A( 2,(  -3.4-PVOFSL ) ), BSI_CW(0x14E, 0x00039) },
/*MT6173*/ };
/*MT6173*/
/*MT6173*/ /* DCS1800...................................................................*/
/*MT6173*/
/*MT6173*/ const  sL1DAGCDATA  AGC_TABLE_DCS1800[6]  =
/*MT6173*/ {  {  GBOUND(( 47.6-PVOFSL ),( 44.6-PVOFSL ) ), GC_A( 5,(  47.6-PVOFSL ) ), BSI_CW(0x14E, 0x0000E) },  // Orion+ has PRX1 & DRX1 (CW334 & CW336), use CW334 as defualt setting
/*MT6173*/    {  GBOUND(( 44.6-PVOFSL ),( 41.6-PVOFSL ) ), GC_A( 6,(  44.6-PVOFSL ) ), BSI_CW(0x14E, 0x0001E) },
/*MT6173*/    {  GBOUND(( 29.6-PVOFSL ),( 26.6-PVOFSL ) ), GC_A( 3,(  29.6-PVOFSL ) ), BSI_CW(0x14E, 0x0001D) },
/*MT6173*/    {  GBOUND(( 17.6-PVOFSL ),( 14.6-PVOFSL ) ), GC_A( 5,(  17.6-PVOFSL ) ), BSI_CW(0x14E, 0x00009) },
/*MT6173*/    {  GBOUND((  5.6-PVOFSL ),(  2.6-PVOFSL ) ), GC_A( 3,(   5.6-PVOFSL ) ), BSI_CW(0x14E, 0x00019) },
/*MT6173*/    {  GBOUND(( -3.4-PVOFSL ),( -3.4-PVOFSL ) ), GC_A( 2,(  -3.4-PVOFSL ) ), BSI_CW(0x14E, 0x00039) },
/*MT6173*/ };
/*MT6173*/
/*MT6173*/ /* PCS1900...................................................................*/
/*MT6173*/
/*MT6173*/ const  sL1DAGCDATA  AGC_TABLE_PCS1900[6]  =
/*MT6173*/ {  {  GBOUND(( 47.6-PVOFSL ),( 44.6-PVOFSL ) ), GC_A( 5,(  47.6-PVOFSL ) ), BSI_CW(0x14E, 0x0000E) },  // Orion+ has PRX1 & DRX1 (CW334 & CW336), use CW334 as defualt setting
/*MT6173*/    {  GBOUND(( 44.6-PVOFSL ),( 41.6-PVOFSL ) ), GC_A( 6,(  44.6-PVOFSL ) ), BSI_CW(0x14E, 0x0001E) },
/*MT6173*/    {  GBOUND(( 29.6-PVOFSL ),( 26.6-PVOFSL ) ), GC_A( 3,(  29.6-PVOFSL ) ), BSI_CW(0x14E, 0x0001D) },
/*MT6173*/    {  GBOUND(( 17.6-PVOFSL ),( 14.6-PVOFSL ) ), GC_A( 5,(  17.6-PVOFSL ) ), BSI_CW(0x14E, 0x00009) },
/*MT6173*/    {  GBOUND((  5.6-PVOFSL ),(  2.6-PVOFSL ) ), GC_A( 3,(   5.6-PVOFSL ) ), BSI_CW(0x14E, 0x00019) },
/*MT6173*/    {  GBOUND(( -3.4-PVOFSL ),( -3.4-PVOFSL ) ), GC_A( 2,(  -3.4-PVOFSL ) ), BSI_CW(0x14E, 0x00039) },
/*MT6173*/ };
/*MT6173*/
/*MT6173*/ /*...........................................................................*/
/*MT6173*/
/*MT6173*/ const  sL1DGAINRANGE GAIN_RANGE_TABLE[] =
/*MT6173*/ {  {                   0,                      0    }, /*#FrequencyBand400  */
/*MT6173*/    { (int)RF_GSM850_MAXGAIN, (int)RF_GSM850_MINGAIN }, /* FrequencyBand850  */
/*MT6173*/    { (int)RF_GSM_MAXGAIN,    (int)RF_GSM_MINGAIN    }, /* FrequencyBand900  */
/*MT6173*/    { (int)RF_DCS_MAXGAIN,    (int)RF_DCS_MINGAIN    }, /* FrequencyBand1800 */
/*MT6173*/    { (int)RF_PCS_MAXGAIN,    (int)RF_PCS_MINGAIN    }, /* FrequencyBand1900 */
/*MT6173*/ };
/*MT6173*/
/*MT6173*/ const  sL1DAGCDATA *const  AGC_TABLE[] =
/*MT6173*/ {  0,                                              /*#FrequencyBand400  */
/*MT6173*/    AGC_TABLE_GSM850,                               /* FrequencyBand850  */
/*MT6173*/    AGC_TABLE_GSM900,                               /* FrequencyBand900  */
/*MT6173*/    AGC_TABLE_DCS1800,                              /* FrequencyBand1800 */
/*MT6173*/    AGC_TABLE_PCS1900,                              /* FrequencyBand1900 */
/*MT6173*/ };
/*MT6173*/
   #if IS_2G_EXTERNAL_LNA_SUPPORT
/*MT6173*/ #define  HRD_LB_THRESHOLD_ELNA        ROUNDINT((41.6-PVOFSL)*(PWRRES))
/*MT6173*/ #define  HRD_HB_THRESHOLD_ELNA        ROUNDINT((41.6-PVOFSH)*(PWRRES))
/*MT6173*/ #define  IBBD_LB_THRESHOLD_ELNA       ROUNDINT((50.6-PVOFSL)*(PWRRES))
/*MT6173*/ #define  IBBD_HB_THRESHOLD_ELNA       ROUNDINT((50.6-PVOFSH)*(PWRRES))
/*MT6173*/ #define  RF_GSM850_MAXGAIN_ELNA       (( 68.6-PVOFSL )*(PWRRES))
/*MT6173*/ #define  RF_GSM850_MINGAIN_ELNA       ((  8.6-PVOFSL )*(PWRRES))
/*MT6173*/ #define  RF_GSM_MAXGAIN_ELNA          (( 68.6-PVOFSL )*(PWRRES))
/*MT6173*/ #define  RF_GSM_MINGAIN_ELNA          ((  8.6-PVOFSL )*(PWRRES))
/*MT6173*/ #define  RF_DCS_MAXGAIN_ELNA          (( 68.6-PVOFSH )*(PWRRES))
/*MT6173*/ #define  RF_DCS_MINGAIN_ELNA          ((  8.6-PVOFSH )*(PWRRES))
/*MT6173*/ #define  RF_PCS_MAXGAIN_ELNA          (( 68.6-PVOFSH )*(PWRRES))
/*MT6173*/ #define  RF_PCS_MINGAIN_ELNA          ((  8.6-PVOFSH )*(PWRRES))
/*MT6173*/
/*MT6173*/ /*Real RX gain and bitno for fixed RX gain setting, index = 0 or 1 of AGC_TABLE */
/*MT6173*/ #define  RF_GSM850_Sec0_GAIN_ELNA       ROUNDINT(( 68.6-PVOFSL )*(PWRRES))
/*MT6173*/ #define  RF_GSM850_Sec1_GAIN_ELNA       ROUNDINT(( 50.6-PVOFSL )*(PWRRES))
/*MT6173*/ #define  RF_GSM_Sec0_GAIN_ELNA          ROUNDINT(( 68.6-PVOFSL )*(PWRRES))
/*MT6173*/ #define  RF_GSM_Sec1_GAIN_ELNA          ROUNDINT(( 50.6-PVOFSL )*(PWRRES))
/*MT6173*/ #define  RF_DCS_Sec0_GAIN_ELNA          ROUNDINT(( 68.6-PVOFSH )*(PWRRES))
/*MT6173*/ #define  RF_DCS_Sec1_GAIN_ELNA          ROUNDINT(( 50.6-PVOFSH )*(PWRRES))
/*MT6173*/ #define  RF_PCS_Sec0_GAIN_ELNA          ROUNDINT(( 68.6-PVOFSH )*(PWRRES))
/*MT6173*/ #define  RF_PCS_Sec1_GAIN_ELNA          ROUNDINT(( 50.6-PVOFSH )*(PWRRES))
/*MT6173*/ #define  RF_GSM850_Sec0_BitNo_ELNA      8
/*MT6173*/ #define  RF_GSM850_Sec1_BitNo_ELNA      4
/*MT6173*/ #define  RF_GSM_Sec0_BitNo_ELNA         8
/*MT6173*/ #define  RF_GSM_Sec1_BitNo_ELNA         4
/*MT6173*/ #define  RF_DCS_Sec0_BitNo_ELNA         8
/*MT6173*/ #define  RF_DCS_Sec1_BitNo_ELNA         4
/*MT6173*/ #define  RF_PCS_Sec0_BitNo_ELNA         8
/*MT6173*/ #define  RF_PCS_Sec1_BitNo_ELNA         4
/*MT6173*/
/*MT6173*/ /* GSM850....................................................................*/
/*MT6173*/ /*Need to fix RX gain setting for index = 0 and 1, w/o extrapolation */
/*MT6173*/ const  sL1DAGCDATA  AGC_TABLE_GSM850_ELNA [7] =
/*MT6173*/ {  {  GBOUND(( 68.6-PVOFSL ),( 50.6-PVOFSL ) ), GC_A( 8,(  68.6-PVOFSL ) ), BSI_CW(0x14E, 0x0000E) },  // Orion+ has PRX1 & DRX1 (CW334 & CW336), use CW334 as defualt setting
/*MT6173*/    {  GBOUND(( 50.6-PVOFSL ),( 47.6-PVOFSL ) ), GC_A( 4,(  50.6-PVOFSL ) ), BSI_CW(0x14E, 0x0000D) },
/*MT6173*/    {  GBOUND(( 41.6-PVOFSL ),( 38.6-PVOFSL ) ), GC_A( 3,(  41.6-PVOFSL ) ), BSI_CW(0x14E, 0x0001D) },
/*MT6173*/    {  GBOUND(( 35.6-PVOFSL ),( 32.6-PVOFSL ) ), GC_A( 3,(  35.6-PVOFSL ) ), BSI_CW(0x14E, 0x0001C) },
/*MT6173*/    {  GBOUND(( 26.6-PVOFSL ),( 23.6-PVOFSL ) ), GC_A( 4,(  26.6-PVOFSL ) ), BSI_CW(0x14E, 0x00009) },
/*MT6173*/    {  GBOUND(( 17.6-PVOFSL ),( 14.6-PVOFSL ) ), GC_A( 3,(  17.6-PVOFSL ) ), BSI_CW(0x14E, 0x00019) },
/*MT6173*/    {  GBOUND((  8.6-PVOFSL ),(  8.6-PVOFSL ) ), GC_A( 2,(   8.6-PVOFSL ) ), BSI_CW(0x14E, 0x00039) },
/*MT6173*/ };
/*MT6173*/
/*MT6173*/ /* GSM900....................................................................*/
/*MT6173*/ /*Need to fix RX gain setting for index = 0 and 1, w/o extrapolation */
/*MT6173*/ const  sL1DAGCDATA  AGC_TABLE_GSM900_ELNA [7] =
/*MT6173*/ {  {  GBOUND(( 68.6-PVOFSL ),( 50.6-PVOFSL ) ), GC_A( 8,(  68.6-PVOFSL ) ), BSI_CW(0x14E, 0x0000E) },  // Orion+ has PRX1 & DRX1 (CW334 & CW336), use CW334 as defualt setting
/*MT6173*/    {  GBOUND(( 50.6-PVOFSL ),( 47.6-PVOFSL ) ), GC_A( 4,(  50.6-PVOFSL ) ), BSI_CW(0x14E, 0x0000D) },
/*MT6173*/    {  GBOUND(( 41.6-PVOFSL ),( 38.6-PVOFSL ) ), GC_A( 3,(  41.6-PVOFSL ) ), BSI_CW(0x14E, 0x0001D) },
/*MT6173*/    {  GBOUND(( 35.6-PVOFSL ),( 32.6-PVOFSL ) ), GC_A( 3,(  35.6-PVOFSL ) ), BSI_CW(0x14E, 0x0001C) },
/*MT6173*/    {  GBOUND(( 26.6-PVOFSL ),( 23.6-PVOFSL ) ), GC_A( 4,(  26.6-PVOFSL ) ), BSI_CW(0x14E, 0x00009) },
/*MT6173*/    {  GBOUND(( 17.6-PVOFSL ),( 14.6-PVOFSL ) ), GC_A( 3,(  17.6-PVOFSL ) ), BSI_CW(0x14E, 0x00019) },
/*MT6173*/    {  GBOUND((  8.6-PVOFSL ),(  8.6-PVOFSL ) ), GC_A( 2,(   8.6-PVOFSL ) ), BSI_CW(0x14E, 0x00039) },
/*MT6173*/ };
/*MT6173*/
/*MT6173*/ /* DCS1800...................................................................*/
/*MT6173*/ /*Need to fix RX gain setting for index = 0 and 1, w/o extrapolation */
/*MT6173*/ const  sL1DAGCDATA  AGC_TABLE_DCS1800_ELNA [7] =
/*MT6173*/ {  {  GBOUND(( 68.6-PVOFSL ),( 50.6-PVOFSL ) ), GC_A( 8,(  68.6-PVOFSL ) ), BSI_CW(0x14E, 0x0000E) },  // Orion+ has PRX1 & DRX1 (CW334 & CW336), use CW334 as defualt setting
/*MT6173*/    {  GBOUND(( 50.6-PVOFSL ),( 47.6-PVOFSL ) ), GC_A( 4,(  50.6-PVOFSL ) ), BSI_CW(0x14E, 0x0000D) },
/*MT6173*/    {  GBOUND(( 41.6-PVOFSL ),( 38.6-PVOFSL ) ), GC_A( 3,(  41.6-PVOFSL ) ), BSI_CW(0x14E, 0x0001D) },
/*MT6173*/    {  GBOUND(( 35.6-PVOFSL ),( 32.6-PVOFSL ) ), GC_A( 3,(  35.6-PVOFSL ) ), BSI_CW(0x14E, 0x0001C) },
/*MT6173*/    {  GBOUND(( 26.6-PVOFSL ),( 23.6-PVOFSL ) ), GC_A( 4,(  26.6-PVOFSL ) ), BSI_CW(0x14E, 0x00009) },
/*MT6173*/    {  GBOUND(( 17.6-PVOFSL ),( 14.6-PVOFSL ) ), GC_A( 3,(  17.6-PVOFSL ) ), BSI_CW(0x14E, 0x00019) },
/*MT6173*/    {  GBOUND((  8.6-PVOFSL ),(  8.6-PVOFSL ) ), GC_A( 2,(   8.6-PVOFSL ) ), BSI_CW(0x14E, 0x00039) },
/*MT6173*/ };
/*MT6173*/
/*MT6173*/ /* PCS1900...................................................................*/
/*MT6173*/ /*Need to fix RX gain setting for index = 0 and 1, w/o extrapolation */
/*MT6173*/ const  sL1DAGCDATA  AGC_TABLE_PCS1900_ELNA [7] =
/*MT6173*/ {  {  GBOUND(( 68.6-PVOFSL ),( 50.6-PVOFSL ) ), GC_A( 8,(  68.6-PVOFSL ) ), BSI_CW(0x14E, 0x0000E) },  // Orion+ has PRX1 & DRX1 (CW334 & CW336), use CW334 as defualt setting
/*MT6173*/    {  GBOUND(( 50.6-PVOFSL ),( 47.6-PVOFSL ) ), GC_A( 4,(  50.6-PVOFSL ) ), BSI_CW(0x14E, 0x0000D) },
/*MT6173*/    {  GBOUND(( 41.6-PVOFSL ),( 38.6-PVOFSL ) ), GC_A( 3,(  41.6-PVOFSL ) ), BSI_CW(0x14E, 0x0001D) },
/*MT6173*/    {  GBOUND(( 35.6-PVOFSL ),( 32.6-PVOFSL ) ), GC_A( 3,(  35.6-PVOFSL ) ), BSI_CW(0x14E, 0x0001C) },
/*MT6173*/    {  GBOUND(( 26.6-PVOFSL ),( 23.6-PVOFSL ) ), GC_A( 4,(  26.6-PVOFSL ) ), BSI_CW(0x14E, 0x00009) },
/*MT6173*/    {  GBOUND(( 17.6-PVOFSL ),( 14.6-PVOFSL ) ), GC_A( 3,(  17.6-PVOFSL ) ), BSI_CW(0x14E, 0x00019) },
/*MT6173*/    {  GBOUND((  8.6-PVOFSL ),(  8.6-PVOFSL ) ), GC_A( 2,(   8.6-PVOFSL ) ), BSI_CW(0x14E, 0x00039) },
/*MT6173*/ };
/*MT6173*/
/*MT6173*/ /*...........................................................................*/
/*MT6173*/
/*MT6173*/ const  sL1DGAINRANGE GAIN_RANGE_TABLE_ELNA [] =
/*MT6173*/ {  {                   0,                      0                }, /*#FrequencyBand400  */
/*MT6173*/    { (int)RF_GSM850_MAXGAIN_ELNA , (int)RF_GSM850_MINGAIN_ELNA  }, /* FrequencyBand850  */
/*MT6173*/    { (int)RF_GSM_MAXGAIN_ELNA ,    (int)RF_GSM_MINGAIN_ELNA     }, /* FrequencyBand900  */
/*MT6173*/    { (int)RF_DCS_MAXGAIN_ELNA ,    (int)RF_DCS_MINGAIN_ELNA     }, /* FrequencyBand1800 */
/*MT6173*/    { (int)RF_PCS_MAXGAIN_ELNA ,    (int)RF_PCS_MINGAIN_ELNA     }, /* FrequencyBand1900 */
/*MT6173*/ };
/*MT6173*/
/*MT6173*/ const  sL1DAGCDATA *const  AGC_TABLE_ELNA[] =
/*MT6173*/ {  0,                                              /*#FrequencyBand400  */
/*MT6173*/    AGC_TABLE_GSM850_ELNA,                               /* FrequencyBand850  */
/*MT6173*/    AGC_TABLE_GSM900_ELNA,                               /* FrequencyBand900  */
/*MT6173*/    AGC_TABLE_DCS1800_ELNA,                              /* FrequencyBand1800 */
/*MT6173*/    AGC_TABLE_PCS1900_ELNA,                              /* FrequencyBand1900 */
/*MT6173*/ };
/*MT6173*/
/*MT6173*/ /*Fix RX gain setting, w/o extrapolation for index = 0 of AGC_TABLE */
/*MT6173*/ const  sL1DSection GAIN_Sec0_ELNA [] =
/*MT6173*/ {  {                   0,                      0                     }, /*#FrequencyBand400  */
/*MT6173*/    { (int)RF_GSM850_Sec0_GAIN_ELNA , (int)RF_GSM850_Sec0_BitNo_ELNA  }, /* FrequencyBand850  */
/*MT6173*/    { (int)RF_GSM_Sec0_GAIN_ELNA ,    (int)RF_GSM_Sec0_BitNo_ELNA     }, /* FrequencyBand900  */
/*MT6173*/    { (int)RF_DCS_Sec0_GAIN_ELNA ,    (int)RF_DCS_Sec0_BitNo_ELNA     }, /* FrequencyBand1800 */
/*MT6173*/    { (int)RF_PCS_Sec0_GAIN_ELNA ,    (int)RF_PCS_Sec0_BitNo_ELNA     }, /* FrequencyBand1900 */
/*MT6173*/ };
/*MT6173*/ /*Fix RX gain setting, w/o extrapolation for index = 1 of AGC_TABLE */
/*MT6173*/ const  sL1DSection GAIN_Sec1_ELNA [] =
/*MT6173*/ {  {                   0,                      0                     }, /*#FrequencyBand400  */
/*MT6173*/    { (int)RF_GSM850_Sec1_GAIN_ELNA , (int)RF_GSM850_Sec1_BitNo_ELNA  }, /* FrequencyBand850  */
/*MT6173*/    { (int)RF_GSM_Sec1_GAIN_ELNA ,    (int)RF_GSM_Sec1_BitNo_ELNA     }, /* FrequencyBand900  */
/*MT6173*/    { (int)RF_DCS_Sec1_GAIN_ELNA ,    (int)RF_DCS_Sec1_BitNo_ELNA     }, /* FrequencyBand1800 */
/*MT6173*/    { (int)RF_PCS_Sec1_GAIN_ELNA ,    (int)RF_PCS_Sec1_BitNo_ELNA     }, /* FrequencyBand1900 */
/*MT6173*/ };
   #endif //IS_2G_EXTERNAL_LNA_SUPPORT
   #if IS_2G_EXTERNAL_LNA_BYPASS_SUPPORT
/*MT6173*/ #define  HRD_LB_THRESHOLD_ELNA_BYPASS        ROUNDINT((41.6-PVOFSL)*(PWRRES))
/*MT6173*/ #define  HRD_HB_THRESHOLD_ELNA_BYPASS        ROUNDINT((41.6-PVOFSH)*(PWRRES))
/*MT6173*/ #define  IBBD_LB_THRESHOLD_ELNA_BYPASS       ROUNDINT((50.6-PVOFSL)*(PWRRES))
/*MT6173*/ #define  IBBD_HB_THRESHOLD_ELNA_BYPASS       ROUNDINT((50.6-PVOFSH)*(PWRRES))
/*MT6173*/ #define  RF_GSM850_MAXGAIN_ELNA_BYPASS       (( 68.6-PVOFSL )*(PWRRES))
/*MT6173*/ #define  RF_GSM850_MINGAIN_ELNA_BYPASS       (( -6.4-PVOFSL )*(PWRRES))/*Modify for BYPASS*/
/*MT6173*/ #define  RF_GSM_MAXGAIN_ELNA_BYPASS          (( 68.6-PVOFSL )*(PWRRES))
/*MT6173*/ #define  RF_GSM_MINGAIN_ELNA_BYPASS          (( -6.4-PVOFSL )*(PWRRES))/*Modify for BYPASS*/
/*MT6173*/ #define  RF_DCS_MAXGAIN_ELNA_BYPASS          (( 68.6-PVOFSH )*(PWRRES))
/*MT6173*/ #define  RF_DCS_MINGAIN_ELNA_BYPASS          (( -6.4-PVOFSH )*(PWRRES))/*Modify for BYPASS*/
/*MT6173*/ #define  RF_PCS_MAXGAIN_ELNA_BYPASS          (( 68.6-PVOFSH )*(PWRRES))
/*MT6173*/ #define  RF_PCS_MINGAIN_ELNA_BYPASS          (( -6.4-PVOFSH )*(PWRRES))/*Modify for BYPASS*/
/*MT6173*/
/*MT6173*/ /*The last group index for ON ELNA */
/*MT6173*/ const unsigned short  LAST_GROUP_FOR_ELNA_ON [5] = /* GSM400 GSM850 GSM900 DCS1800 PCS1900*/
/*MT6173*/ {0, 6, 6, 6, 6};
/*MT6173*/
/*MT6173*/ /*Real RX gain and bitno for fixed RX gain setting, index = 0 or 1 of AGC_TABLE */
/*MT6173*/ #define  RF_GSM850_Sec0_GAIN_ELNA_BYPASS       ROUNDINT(( 68.6-PVOFSL )*(PWRRES))
/*MT6173*/ #define  RF_GSM850_Sec1_GAIN_ELNA_BYPASS       ROUNDINT(( 50.6-PVOFSL )*(PWRRES))
/*MT6173*/ #define  RF_GSM_Sec0_GAIN_ELNA_BYPASS          ROUNDINT(( 68.6-PVOFSL )*(PWRRES))
/*MT6173*/ #define  RF_GSM_Sec1_GAIN_ELNA_BYPASS          ROUNDINT(( 50.6-PVOFSL )*(PWRRES))
/*MT6173*/ #define  RF_DCS_Sec0_GAIN_ELNA_BYPASS          ROUNDINT(( 68.6-PVOFSH )*(PWRRES))
/*MT6173*/ #define  RF_DCS_Sec1_GAIN_ELNA_BYPASS          ROUNDINT(( 50.6-PVOFSH )*(PWRRES))
/*MT6173*/ #define  RF_PCS_Sec0_GAIN_ELNA_BYPASS          ROUNDINT(( 68.6-PVOFSH )*(PWRRES))
/*MT6173*/ #define  RF_PCS_Sec1_GAIN_ELNA_BYPASS          ROUNDINT(( 50.6-PVOFSH )*(PWRRES))
/*MT6173*/ #define  RF_GSM850_Sec0_BitNo_ELNA_BYPASS      8
/*MT6173*/ #define  RF_GSM850_Sec1_BitNo_ELNA_BYPASS      4
/*MT6173*/ #define  RF_GSM_Sec0_BitNo_ELNA_BYPASS         8
/*MT6173*/ #define  RF_GSM_Sec1_BitNo_ELNA_BYPASS         4
/*MT6173*/ #define  RF_DCS_Sec0_BitNo_ELNA_BYPASS         8
/*MT6173*/ #define  RF_DCS_Sec1_BitNo_ELNA_BYPASS         4
/*MT6173*/ #define  RF_PCS_Sec0_BitNo_ELNA_BYPASS         8
/*MT6173*/ #define  RF_PCS_Sec1_BitNo_ELNA_BYPASS         4
/*MT6173*/
/*MT6173*/ /* GSM850....................................................................*/
/*MT6173*/ /*Need to fix RX gain setting for index = 0 and 1, w/o extrapolation */
/*MT6173*/ const  sL1DAGCDATA  AGC_TABLE_GSM850_ELNA_BYPASS [9] =
/*MT6173*/ {  {  GBOUND(( 68.6-PVOFSL ),( 50.6-PVOFSL ) ), GC_A( 8,(  68.6-PVOFSL ) ), BSI_CW(0x14E, 0x0000E) },  // Orion+ has PRX1 & DRX1 (CW334 & CW336), use CW334 as defualt setting
/*MT6173*/    {  GBOUND(( 50.6-PVOFSL ),( 47.6-PVOFSL ) ), GC_A( 4,(  50.6-PVOFSL ) ), BSI_CW(0x14E, 0x0000D) },
/*MT6173*/    {  GBOUND(( 41.6-PVOFSL ),( 38.6-PVOFSL ) ), GC_A( 3,(  41.6-PVOFSL ) ), BSI_CW(0x14E, 0x0001D) },
/*MT6173*/    {  GBOUND(( 35.6-PVOFSL ),( 32.6-PVOFSL ) ), GC_A( 3,(  35.6-PVOFSL ) ), BSI_CW(0x14E, 0x0001C) },
/*MT6173*/    {  GBOUND(( 26.6-PVOFSL ),( 23.6-PVOFSL ) ), GC_A( 4,(  26.6-PVOFSL ) ), BSI_CW(0x14E, 0x00009) },
/*MT6173*/    {  GBOUND(( 17.6-PVOFSL ),( 14.6-PVOFSL ) ), GC_A( 3,(  17.6-PVOFSL ) ), BSI_CW(0x14E, 0x00019) },
/*MT6173*/    {  GBOUND((  8.6-PVOFSL ),(  5.6-PVOFSL ) ), GC_A( 2,(   8.6-PVOFSL ) ), BSI_CW(0x14E, 0x00039) }, /*Modify for BYPASS*/
/*MT6173*/    {  GBOUND(( -0.4-PVOFSL ),( -3.4-PVOFSL ) ), GC_A( 2,(  -0.4-PVOFSL ) ), BSI_CW(0x14E, 0x00019) }, /*Modify for BYPASS*/
/*MT6173*/    {  GBOUND(( -6.4-PVOFSL ),( -6.4-PVOFSL ) ), GC_A( 2,(  -6.4-PVOFSL ) ), BSI_CW(0x14E, 0x00039) }, /*Modify for BYPASS*/
/*MT6173*/ };
/*MT6173*/
/*MT6173*/ /* GSM900....................................................................*/
/*MT6173*/ /*Need to fix RX gain setting for index = 0 and 1, w/o extrapolation */
/*MT6173*/ const  sL1DAGCDATA  AGC_TABLE_GSM900_ELNA_BYPASS [9] =
/*MT6173*/ {  {  GBOUND(( 68.6-PVOFSL ),( 50.6-PVOFSL ) ), GC_A( 8,(  68.6-PVOFSL ) ), BSI_CW(0x14E, 0x0000E) },  // Orion+ has PRX1 & DRX1 (CW334 & CW336), use CW334 as defualt setting
/*MT6173*/    {  GBOUND(( 50.6-PVOFSL ),( 47.6-PVOFSL ) ), GC_A( 4,(  50.6-PVOFSL ) ), BSI_CW(0x14E, 0x0000D) },
/*MT6173*/    {  GBOUND(( 41.6-PVOFSL ),( 38.6-PVOFSL ) ), GC_A( 3,(  41.6-PVOFSL ) ), BSI_CW(0x14E, 0x0001D) },
/*MT6173*/    {  GBOUND(( 35.6-PVOFSL ),( 32.6-PVOFSL ) ), GC_A( 3,(  35.6-PVOFSL ) ), BSI_CW(0x14E, 0x0001C) },
/*MT6173*/    {  GBOUND(( 26.6-PVOFSL ),( 23.6-PVOFSL ) ), GC_A( 4,(  26.6-PVOFSL ) ), BSI_CW(0x14E, 0x00009) },
/*MT6173*/    {  GBOUND(( 17.6-PVOFSL ),( 14.6-PVOFSL ) ), GC_A( 3,(  17.6-PVOFSL ) ), BSI_CW(0x14E, 0x00019) },
/*MT6173*/    {  GBOUND((  8.6-PVOFSL ),(  5.6-PVOFSL ) ), GC_A( 2,(   8.6-PVOFSL ) ), BSI_CW(0x14E, 0x00039) }, /*Modify for BYPASS*/
/*MT6173*/    {  GBOUND(( -0.4-PVOFSL ),( -3.4-PVOFSL ) ), GC_A( 2,(  -0.4-PVOFSL ) ), BSI_CW(0x14E, 0x00019) }, /*Modify for BYPASS*/
/*MT6173*/    {  GBOUND(( -6.4-PVOFSL ),( -6.4-PVOFSL ) ), GC_A( 2,(  -6.4-PVOFSL ) ), BSI_CW(0x14E, 0x00039) }, /*Modify for BYPASS*/
/*MT6173*/ };
/*MT6173*/
/*MT6173*/ /* DCS1800...................................................................*/
/*MT6173*/ /*Need to fix RX gain setting for index = 0 and 1, w/o extrapolation */
/*MT6173*/ const  sL1DAGCDATA  AGC_TABLE_DCS1800_ELNA_BYPASS [9] =
/*MT6173*/ {  {  GBOUND(( 68.6-PVOFSL ),( 50.6-PVOFSL ) ), GC_A( 8,(  68.6-PVOFSL ) ), BSI_CW(0x14E, 0x0000E) },  // Orion+ has PRX1 & DRX1 (CW334 & CW336), use CW334 as defualt setting
/*MT6173*/    {  GBOUND(( 50.6-PVOFSL ),( 47.6-PVOFSL ) ), GC_A( 4,(  50.6-PVOFSL ) ), BSI_CW(0x14E, 0x0000D) },
/*MT6173*/    {  GBOUND(( 41.6-PVOFSL ),( 38.6-PVOFSL ) ), GC_A( 3,(  41.6-PVOFSL ) ), BSI_CW(0x14E, 0x0001D) },
/*MT6173*/    {  GBOUND(( 35.6-PVOFSL ),( 32.6-PVOFSL ) ), GC_A( 3,(  35.6-PVOFSL ) ), BSI_CW(0x14E, 0x0001C) },
/*MT6173*/    {  GBOUND(( 26.6-PVOFSL ),( 23.6-PVOFSL ) ), GC_A( 4,(  26.6-PVOFSL ) ), BSI_CW(0x14E, 0x00009) },
/*MT6173*/    {  GBOUND(( 17.6-PVOFSL ),( 14.6-PVOFSL ) ), GC_A( 3,(  17.6-PVOFSL ) ), BSI_CW(0x14E, 0x00019) },
/*MT6173*/    {  GBOUND((  8.6-PVOFSL ),(  5.6-PVOFSL ) ), GC_A( 2,(   8.6-PVOFSL ) ), BSI_CW(0x14E, 0x00039) }, /*Modify for BYPASS*/
/*MT6173*/    {  GBOUND(( -0.4-PVOFSL ),( -3.4-PVOFSL ) ), GC_A( 2,(  -0.4-PVOFSL ) ), BSI_CW(0x14E, 0x00019) }, /*Modify for BYPASS*/
/*MT6173*/    {  GBOUND(( -6.4-PVOFSL ),( -6.4-PVOFSL ) ), GC_A( 2,(  -6.4-PVOFSL ) ), BSI_CW(0x14E, 0x00039) }, /*Modify for BYPASS*/
/*MT6173*/ };
/*MT6173*/
/*MT6173*/ /* PCS1900...................................................................*/
/*MT6173*/ /*Need to fix RX gain setting for index = 0 and 1, w/o extrapolation */
/*MT6173*/ const  sL1DAGCDATA  AGC_TABLE_PCS1900_ELNA_BYPASS [9] =
/*MT6173*/ {  {  GBOUND(( 68.6-PVOFSL ),( 50.6-PVOFSL ) ), GC_A( 8,(  68.6-PVOFSL ) ), BSI_CW(0x14E, 0x0000E) },  // Orion+ has PRX1 & DRX1 (CW334 & CW336), use CW334 as defualt setting
/*MT6173*/    {  GBOUND(( 50.6-PVOFSL ),( 47.6-PVOFSL ) ), GC_A( 4,(  50.6-PVOFSL ) ), BSI_CW(0x14E, 0x0000D) },
/*MT6173*/    {  GBOUND(( 41.6-PVOFSL ),( 38.6-PVOFSL ) ), GC_A( 3,(  41.6-PVOFSL ) ), BSI_CW(0x14E, 0x0001D) },
/*MT6173*/    {  GBOUND(( 35.6-PVOFSL ),( 32.6-PVOFSL ) ), GC_A( 3,(  35.6-PVOFSL ) ), BSI_CW(0x14E, 0x0001C) },
/*MT6173*/    {  GBOUND(( 26.6-PVOFSL ),( 23.6-PVOFSL ) ), GC_A( 4,(  26.6-PVOFSL ) ), BSI_CW(0x14E, 0x00009) },
/*MT6173*/    {  GBOUND(( 17.6-PVOFSL ),( 14.6-PVOFSL ) ), GC_A( 3,(  17.6-PVOFSL ) ), BSI_CW(0x14E, 0x00019) },
/*MT6173*/    {  GBOUND((  8.6-PVOFSL ),(  5.6-PVOFSL ) ), GC_A( 2,(   8.6-PVOFSL ) ), BSI_CW(0x14E, 0x00039) }, /*Modify for BYPASS*/
/*MT6173*/    {  GBOUND(( -0.4-PVOFSL ),( -3.4-PVOFSL ) ), GC_A( 2,(  -0.4-PVOFSL ) ), BSI_CW(0x14E, 0x00019) }, /*Modify for BYPASS*/
/*MT6173*/    {  GBOUND(( -6.4-PVOFSL ),( -6.4-PVOFSL ) ), GC_A( 2,(  -6.4-PVOFSL ) ), BSI_CW(0x14E, 0x00039) }, /*Modify for BYPASS*/
/*MT6173*/ };
/*MT6173*/
/*MT6173*/ /*...........................................................................*/
/*MT6173*/
/*MT6173*/ const  sL1DGAINRANGE GAIN_RANGE_TABLE_ELNA_BYPASS[] =
/*MT6173*/ {  {                   0,                      0                },                /*#FrequencyBand400  */
/*MT6173*/    { (int)RF_GSM850_MAXGAIN_ELNA_BYPASS , (int)RF_GSM850_MINGAIN_ELNA_BYPASS  }, /* FrequencyBand850  */
/*MT6173*/    { (int)RF_GSM_MAXGAIN_ELNA_BYPASS ,    (int)RF_GSM_MINGAIN_ELNA_BYPASS     }, /* FrequencyBand900  */
/*MT6173*/    { (int)RF_DCS_MAXGAIN_ELNA_BYPASS ,    (int)RF_DCS_MINGAIN_ELNA_BYPASS     }, /* FrequencyBand1800 */
/*MT6173*/    { (int)RF_PCS_MAXGAIN_ELNA_BYPASS ,    (int)RF_PCS_MINGAIN_ELNA_BYPASS     }, /* FrequencyBand1900 */
/*MT6173*/ };
/*MT6173*/
/*MT6173*/ const  sL1DAGCDATA *const  AGC_TABLE_ELNA_BYPASS[] =
/*MT6173*/ {  0,                                                          /*#FrequencyBand400  */
/*MT6173*/    AGC_TABLE_GSM850_ELNA_BYPASS,                               /* FrequencyBand850  */
/*MT6173*/    AGC_TABLE_GSM900_ELNA_BYPASS,                               /* FrequencyBand900  */
/*MT6173*/    AGC_TABLE_DCS1800_ELNA_BYPASS,                              /* FrequencyBand1800 */
/*MT6173*/    AGC_TABLE_PCS1900_ELNA_BYPASS,                              /* FrequencyBand1900 */
/*MT6173*/ };
/*MT6173*/
/*MT6173*/ /*Fix RX gain setting, w/o extrapolation for index = 0 of AGC_TABLE */
/*MT6173*/ const  sL1DSection GAIN_Sec0_ELNA_BYPASS [] =
/*MT6173*/ {  {                   0,                      0                     },               /*#FrequencyBand400  */
/*MT6173*/    { (int)RF_GSM850_Sec0_GAIN_ELNA_BYPASS , (int)RF_GSM850_Sec0_BitNo_ELNA_BYPASS  }, /* FrequencyBand850  */
/*MT6173*/    { (int)RF_GSM_Sec0_GAIN_ELNA_BYPASS ,    (int)RF_GSM_Sec0_BitNo_ELNA_BYPASS     }, /* FrequencyBand900  */
/*MT6173*/    { (int)RF_DCS_Sec0_GAIN_ELNA_BYPASS ,    (int)RF_DCS_Sec0_BitNo_ELNA_BYPASS     }, /* FrequencyBand1800 */
/*MT6173*/    { (int)RF_PCS_Sec0_GAIN_ELNA_BYPASS ,    (int)RF_PCS_Sec0_BitNo_ELNA_BYPASS     }, /* FrequencyBand1900 */
/*MT6173*/ };
/*MT6173*/ /*Fix RX gain setting, w/o extrapolation for index = 1 of AGC_TABLE */
/*MT6173*/ const  sL1DSection GAIN_Sec1_ELNA_BYPASS [] =
/*MT6173*/ {  {                   0,                      0                     },               /*#FrequencyBand400  */
/*MT6173*/    { (int)RF_GSM850_Sec1_GAIN_ELNA_BYPASS , (int)RF_GSM850_Sec1_BitNo_ELNA_BYPASS  }, /* FrequencyBand850  */
/*MT6173*/    { (int)RF_GSM_Sec1_GAIN_ELNA_BYPASS ,    (int)RF_GSM_Sec1_BitNo_ELNA_BYPASS     }, /* FrequencyBand900  */
/*MT6173*/    { (int)RF_DCS_Sec1_GAIN_ELNA_BYPASS ,    (int)RF_DCS_Sec1_BitNo_ELNA_BYPASS     }, /* FrequencyBand1800 */
/*MT6173*/    { (int)RF_PCS_Sec1_GAIN_ELNA_BYPASS ,    (int)RF_PCS_Sec1_BitNo_ELNA_BYPASS     }, /* FrequencyBand1900 */
/*MT6173*/ };
   #endif //IS_2G_EXTERNAL_LNA_BYPASS_SUPPORT
/*MT6173*/ /*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
/*MT6173*/
/*MT6173*/ int L1D_RF_GetGainSetting( int rf_band, int arfcn, int request_gain, long *gain_setting )
/*MT6173*/ {  int   max_gain, min_gain, real_gain, blkr_group, l1_obb_flag = 0;
/*MT6173*/    const int*    d32ptr;
/*MT6173*/    const sL1DAGCDATA*  agcptr;
/*MT6173*/    sLNAGAINOFFSET*     lnaptr;
/*MT6173*/    sAGCGAINOFFSET*     ofsptr;
/*MT6173*/    long  setting;
/*MT6173*/    int   bit_no, idx, lna_path_loss, ibbd_threshold, hrd_threshold, ibb_group_threshold=0;
/*MT6173*/    //unsigned short  L1D_chip_ver = L1D_RF_QUERY_CHIP_VERSION();
/*MT6173*/    #if IS_2G_EXTERNAL_LNA_SUPPORT
/*MT6173*/    unsigned short   agcptr_idx = 0;   //index of AGC table for fixing RX gain setting 
/*MT6173*/    unsigned short   is_elna_usage        = (L1D_RF_Check_If_ExternalLNA( rf_band )>=L1D_ELNA_ALYWAYS_ON)?1:0;   // check if using eLNA
/*MT6173*/       #if IS_2G_EXTERNAL_LNA_BYPASS_SUPPORT
/*MT6173*/    unsigned short   is_elna_bypass_usage = (L1D_RF_Check_If_ExternalLNA( rf_band )==L1D_ELNA_CAN_SWITCH)?1:0;   // check if using eLNA Bypass
/*MT6173*/       #endif
/*MT6173*/    #endif
/*MT6173*/
/*MT6173*/    #if IS_RX_POWER_OFFSET_SUPPORT
/*MT6173*/    sAGCLNAGAINOFFSET*  ofsptr_offset;
/*MT6173*/    kal_uint16 rx_power_offset_enable      = AGCLNA_PL_OFFSET_SETTING->rx_power_offset_setting.RPO_enable;
/*MT6173*/    kal_uint16 meta_rx_power_offset_enable = AGCLNA_PL_OFFSET_SETTING->rx_power_offset_setting.RPO_meta_enable; 
/*MT6173*/    int  lna_path_loss_offset = 0;
/*MT6173*/    #endif/*IS_RX_POWER_OFFSET_SUPPORT*/
/*MT6173*/   
/*MT6173*/    if( 0 )
/*MT6173*/    { /* do nothing */ }
/*MT6173*/    #if IS_INBAND_BLOCKER_DETECTION_SUPPORT
/*MT6173*/       #if IS_2G_EXTERNAL_LNA_BYPASS_SUPPORT
/*MT6173*/    else if( is_elna_bypass_usage ) //For eLNA Bypass
/*MT6173*/    {  
/*MT6173*/       ibbd_threshold = (rf_band<FrequencyBand1800) ? IBBD_LB_THRESHOLD_ELNA_BYPASS: IBBD_HB_THRESHOLD_ELNA_BYPASS;  
/*MT6173*/       ibb_group_threshold = 1;
/*MT6173*/    }
/*MT6173*/       #endif
/*MT6173*/       #if IS_2G_EXTERNAL_LNA_SUPPORT
/*MT6173*/    else if( is_elna_usage ) //For eLNA
/*MT6173*/    {  
/*MT6173*/       ibbd_threshold = (rf_band<FrequencyBand1800) ? IBBD_LB_THRESHOLD_ELNA : IBBD_HB_THRESHOLD_ELNA;  
/*MT6173*/       ibb_group_threshold = 1;
/*MT6173*/    }
/*MT6173*/       #endif
/*MT6173*/    else   // no eLNA
/*MT6173*/    {  
/*MT6173*/       ibbd_threshold = (rf_band<FrequencyBand1800) ? IBBD_LB_THRESHOLD : IBBD_HB_THRESHOLD;
/*MT6173*/       ibb_group_threshold = 1;
/*MT6173*/    }
/*MT6173*/    #endif
/*MT6173*/
/*MT6173*/    if( 0 )
/*MT6173*/    { /* do nothing */ }
/*MT6173*/    #if IS_HEADROOM_DETECTION_SUPPORT
/*MT6173*/       #if IS_2G_EXTERNAL_LNA_BYPASS_SUPPORT
/*MT6173*/    else if( is_elna_bypass_usage ) //For eLNA Bypass
/*MT6173*/    {  
/*MT6173*/       hrd_threshold = (rf_band<FrequencyBand1800) ? HRD_LB_THRESHOLD_ELNA_BYPASS: HRD_HB_THRESHOLD_ELNA_BYPASS;
/*MT6173*/    }
/*MT6173*/      #endif
/*MT6173*/       #if IS_2G_EXTERNAL_LNA_SUPPORT
/*MT6173*/    else if( is_elna_usage ) //For eLNA
/*MT6173*/    {  
/*MT6173*/       hrd_threshold = (rf_band<FrequencyBand1800) ? HRD_LB_THRESHOLD_ELNA : HRD_HB_THRESHOLD_ELNA;
/*MT6173*/    }
/*MT6173*/      #endif
/*MT6173*/    else   // no eLNA
/*MT6173*/    {  
/*MT6173*/       hrd_threshold = (rf_band<FrequencyBand1800) ? HRD_LB_THRESHOLD  : HRD_HB_THRESHOLD;
/*MT6173*/    }
/*MT6173*/    #endif
/*MT6173*/
/*MT6173*/    #if IS_OUTBAND_BLOCKER_DETECTION_SUPPORT
/*MT6173*/    if( l1d_rf.band < FrequencyBand1800 )
/*MT6173*/    {  l1_obb_flag = (l1d_rf.blk_flag & LB_OBB_FOUND) ? 1 : 0; }
/*MT6173*/    else
/*MT6173*/    {  l1_obb_flag = (l1d_rf.blk_flag & HB_OBB_FOUND) ? 1 : 0; }
/*MT6173*/    #endif
/*MT6173*/
/*MT6173*/    /* evaluate the range of available gain */
/*MT6173*/    if( 0 )
/*MT6173*/    { /* do nothing */ }
/*MT6173*/    #if IS_2G_EXTERNAL_LNA_BYPASS_SUPPORT
/*MT6173*/    else if ( is_elna_bypass_usage )
/*MT6173*/    {  
/*MT6173*/       d32ptr = (int*)&(GAIN_RANGE_TABLE_ELNA_BYPASS[rf_band]);
/*MT6173*/    }
/*MT6173*/    #endif
/*MT6173*/    #if IS_2G_EXTERNAL_LNA_SUPPORT
/*MT6173*/    else if ( is_elna_usage )
/*MT6173*/    {  
/*MT6173*/       d32ptr = (int*)&(GAIN_RANGE_TABLE_ELNA[rf_band]);
/*MT6173*/    }
/*MT6173*/    #endif
/*MT6173*/    else
/*MT6173*/    {
/*MT6173*/       d32ptr = (int*)&(GAIN_RANGE_TABLE[rf_band]);
/*MT6173*/    }
/*MT6173*/    max_gain = *d32ptr++;
/*MT6173*/    min_gain = *d32ptr;
/*MT6173*/
/*MT6173*/    /* D[12:10]: blkr_group used for IBB/HRD case if request_gain>=0, D[9:0]: request_gain for Normal case */
/*MT6173*/    blkr_group    = (request_gain>=0)?((request_gain>>10)&0x7):0;
/*MT6173*/    request_gain  = (request_gain>=0)?(request_gain&0x3FF):request_gain;
/*MT6173*/
/*MT6173*/    /* Normal Mode: From Voltage_Gain to Power_Gain (Voltage_Gain comes from m11303.c)*/
/*MT6173*/    /* Meta Mode:  Bring Power_Gain directly*/
/*MT6173*/    if((!L1D_CheckIfMetaMode()))
/*MT6173*/    {  request_gain -= ((rf_band<FrequencyBand1800) ? (PVOFSL*PWRRES) : (PVOFSH*PWRRES));  }
/*MT6173*/
/*MT6173*/    /* clipping the request gain to the avialable gain */
/*MT6173*/    if( request_gain>=max_gain )
/*MT6173*/    {  request_gain = max_gain;  
/*MT6173*/    }
/*MT6173*/    else if( request_gain<=min_gain )
/*MT6173*/    {  request_gain = min_gain;  
/*MT6173*/    }
/*MT6173*/
/*MT6173*/    /* choose the LNA path loss */
/*MT6173*/    lnaptr = LNA_PATHLOSS_TABLE[rf_band];
/*MT6173*/    /* get the arfcn section */
/*MT6173*/    ofsptr = AGC_PATHLOSS_TABLE[rf_band];
/*MT6173*/    while( ofsptr->max_arfcn>=0 )
/*MT6173*/    {  if( arfcn <= ofsptr->max_arfcn )
/*MT6173*/       {  break;  }
/*MT6173*/       ofsptr++;
/*MT6173*/       lnaptr++;
/*MT6173*/    }
/*MT6173*/
/*MT6173*/    /* evaluate the real gain setting */
/*MT6173*/    if( 0 )
/*MT6173*/    { /* do nothing */ }
/*MT6173*/    #if IS_2G_EXTERNAL_LNA_BYPASS_SUPPORT
/*MT6173*/    else if( is_elna_bypass_usage )
/*MT6173*/    {  
/*MT6173*/       agcptr = AGC_TABLE_ELNA_BYPASS[rf_band];
/*MT6173*/    }
/*MT6173*/    #endif
/*MT6173*/    #if IS_2G_EXTERNAL_LNA_SUPPORT
/*MT6173*/    else if( is_elna_usage )
/*MT6173*/    {  
/*MT6173*/       agcptr = AGC_TABLE_ELNA[rf_band];
/*MT6173*/    }
/*MT6173*/    #endif
/*MT6173*/    else
/*MT6173*/    {  
/*MT6173*/       agcptr = AGC_TABLE[rf_band];
/*MT6173*/    }
/*MT6173*/
/*MT6173*/    while( request_gain < agcptr->pos_gain )
/*MT6173*/    {  
/*MT6173*/       agcptr++;  
/*MT6173*/    #if IS_2G_EXTERNAL_LNA_SUPPORT
/*MT6173*/       agcptr_idx++;
/*MT6173*/    #endif
/*MT6173*/    }
/*MT6173*/
/*MT6173*/    {
/*MT6173*/    #if IS_2G_EXTERNAL_LNA_SUPPORT 
/*MT6173*/       if( is_elna_usage && (L1D_CheckIfMetaMode()) ) //Also for eLNA Bypass! 
/*MT6173*/       {/* Special handling under META mode. Normal mode will use the exact gain listed in RX gain table*/
/*MT6173*/          switch( agcptr_idx )
/*MT6173*/          {
/*MT6173*/             case 0: // Section0, fix RX gain setting w/o extrapolation
/*MT6173*/                bit_no    = GAIN_Sec0_ELNA[rf_band].bitno;
/*MT6173*/                real_gain = GAIN_Sec0_ELNA[rf_band].real_gain;
/*MT6173*/                break;
/*MT6173*/             case 1: // Section1, fix RX gain setting w/o extrapolation
/*MT6173*/                bit_no    = GAIN_Sec1_ELNA[rf_band].bitno;
/*MT6173*/                real_gain = GAIN_Sec1_ELNA[rf_band].real_gain;
/*MT6173*/                break;
/*MT6173*/             default: // Other sections
/*MT6173*/                bit_no    = BIT_NO( request_gain, agcptr->A, GC_B );
/*MT6173*/                real_gain = REAL_GAIN( bit_no, agcptr->A, GC_B );
/*MT6173*/                break;
/*MT6173*/          }
/*MT6173*/       } 
/*MT6173*/       else
/*MT6173*/    #endif
/*MT6173*/       {
/*MT6173*/          bit_no    = BIT_NO( request_gain, agcptr->A, GC_B );
/*MT6173*/          real_gain = REAL_GAIN( bit_no, agcptr->A, GC_B );
/*MT6173*/       }
/*MT6173*/       
/*MT6173*/       if( 0 )
/*MT6173*/       { /* do nothing */ }
/*MT6173*/   #if IS_HEADROOM_DETECTION_SUPPORT || IS_INBAND_BLOCKER_DETECTION_SUPPORT || IS_OUTBAND_BLOCKER_DETECTION_SUPPORT
/*MT6173*/       else if( ((((l1d_rf.blk_flag)&(HRD_FOUND)) && (request_gain >= (hrd_threshold))) || (((l1d_rf.blk_flag)&(IBB_FOUND)) && ((request_gain >= (ibbd_threshold)) || (blkr_group<=(ibb_group_threshold)))) || (l1_obb_flag == 1)) && (blkr_group > 0) )
/*MT6173*/       {
/*MT6173*/       #if IS_2G_EXTERNAL_LNA_SUPPORT 
/*MT6173*/           if(is_elna_usage||is_elna_bypass_usage)//Also for eLNA Bypass! 
/*MT6173*/           {
/*MT6173*/              switch( blkr_group ) 
/*MT6173*/              {
/*MT6173*/                 case 1:
/*MT6173*/                    setting   = (agcptr->setting&0x3FFFFFC0)|((0x6)<<6)|(0x7<<3)|0x4;  // reduce LNA/TIA, increase 2*LPF2 Gain
/*MT6173*/                    real_gain-= (LNA_DROP_GAIN+TIA_DROP_GAIN-2*LPF2_DROP_GAIN);
/*MT6173*/                    break;
/*MT6173*/                 case 2:
/*MT6173*/                    setting   = (agcptr->setting&0x3FFFFFC0)|((0x6)<<6)|(0x7<<3)|0x4;  // reduce LNA/TIA, increase 3*LPF2 Gain
/*MT6173*/                    real_gain-= (LNA_DROP_GAIN+TIA_DROP_GAIN-3*LPF2_DROP_GAIN);
/*MT6173*/                    break;
/*MT6173*/                 default:
/*MT6173*/                    setting   = agcptr->setting | ((bit_no&0xF)<<6);  
/*MT6173*/                    break;
/*MT6173*/              }
/*MT6173*/           }
/*MT6173*/           else
/*MT6173*/       #endif
/*MT6173*/           {
/*MT6173*/              switch( blkr_group )
/*MT6173*/              {
/*MT6173*/                 case 1:
/*MT6173*/                    setting   = 0x1CD;
/*MT6173*/                    real_gain = ROUNDINT(( 47.6-PVOFSL )*(PWRRES));
/*MT6173*/                    break;
/*MT6173*/                 case 2:
/*MT6173*/                    setting   = (agcptr->setting&0x3FFFFFC0)|(0x6<<6)|(0x3<<3)|0x5;  // reduce LNA
/*MT6173*/                    real_gain-= (LNA_DROP_GAIN);
/*MT6173*/                    break;
/*MT6173*/                 default:
/*MT6173*/                    setting   = agcptr->setting | ((bit_no&0xF)<<6);  
/*MT6173*/                    break;
/*MT6173*/              } 
/*MT6173*/           }
/*MT6173*/       }
/*MT6173*/    #endif
/*MT6173*/       else
/*MT6173*/       {  
/*MT6173*/          setting = agcptr->setting | ((bit_no&0xF)<<6);
/*MT6173*/       }
/*MT6173*/
/*MT6173*/       idx = (int)(setting&0x7);
/*MT6173*/       if( 0 )
/*MT6173*/       { /* do nothing */ }
/*MT6173*/    #if IS_2G_EXTERNAL_LNA_BYPASS_SUPPORT
/*MT6173*/       else if( is_elna_bypass_usage )
/*MT6173*/       {
/*MT6173*/          switch( idx )
/*MT6173*/          {
/*MT6173*/             case 6: /* LNA_Utra_High : G6 */
/*MT6173*/                lna_path_loss = (l1d_rf2.is_fhc) ? (0) : ((int)(lnaptr->gain_offset_high_sensitivity-ofsptr->gain_offset));
/*MT6173*/                break;
/*MT6173*/             case 5: /* LNA_High      : G5 */ /*Base for path loss calibration*/
/*MT6173*/                lna_path_loss = 0;
/*MT6173*/                break;
/*MT6173*/             case 4: /* LNA_Middle    : G4 */ /*ELNA cannot exist with sawless*/
/*MT6173*/                if( l1_obb_flag == 1 )
/*MT6173*/                {   lna_path_loss = (l1d_rf2.is_fhc) ? (0) : ((int)(lnaptr->gain_offset_middle_sawless-ofsptr->gain_offset));  }/*should not use*/ 
/*MT6173*/                else
/*MT6173*/                {   lna_path_loss = (l1d_rf2.is_fhc) ? (0) : ((int)(lnaptr->gain_offset_middle-ofsptr->gain_offset));  } 
/*MT6173*/                break;
/*MT6173*/             default:/* LNA_Low       : G1 */
/*MT6173*/                if( agcptr_idx<=LAST_GROUP_FOR_ELNA_ON[rf_band]  )
/*MT6173*/                {   lna_path_loss = (l1d_rf2.is_fhc) ? (0) : ((int)(lnaptr->gain_offset_low-ofsptr->gain_offset));  }
/*MT6173*/                else
/*MT6173*/                {   lna_path_loss = (l1d_rf2.is_fhc) ? (0) : ((int)(lnaptr->gain_offset_low_maxpin-ofsptr->gain_offset));  } /*BYPASS*/  
/*MT6173*/                break;
/*MT6173*/          } 
/*MT6173*/       }
/*MT6173*/    #endif
/*MT6173*/    #if IS_2G_EXTERNAL_LNA_SUPPORT
/*MT6173*/       else if( is_elna_usage )
/*MT6173*/       {
/*MT6173*/          switch( idx )
/*MT6173*/          {
/*MT6173*/             case 6: /* LNA_Utra_High : G6 */
/*MT6173*/                lna_path_loss = (l1d_rf2.is_fhc) ? (0) : ((int)(lnaptr->gain_offset_high_sensitivity-ofsptr->gain_offset));
/*MT6173*/                break;
/*MT6173*/             case 5: /* LNA_High      : G5 */ /*Base for path loss calibration*/
/*MT6173*/                lna_path_loss = 0;
/*MT6173*/                break;
/*MT6173*/             case 4: /* LNA_Middle    : G4 */ /*ELNA cannot exist with sawless*/
/*MT6173*/                if( l1_obb_flag == 1 )
/*MT6173*/                {   lna_path_loss = (l1d_rf2.is_fhc) ? (0) : ((int)(lnaptr->gain_offset_middle_sawless-ofsptr->gain_offset));  }/*should not use*/ 
/*MT6173*/                else
/*MT6173*/                {   lna_path_loss = (l1d_rf2.is_fhc) ? (0) : ((int)(lnaptr->gain_offset_middle-ofsptr->gain_offset));  } 
/*MT6173*/                break;
/*MT6173*/             default:/* LNA_Low       : G1 */
/*MT6173*/                lna_path_loss = (l1d_rf2.is_fhc) ? (0) : ((int)(lnaptr->gain_offset_low-ofsptr->gain_offset)); 
/*MT6173*/                break;
/*MT6173*/          } 
/*MT6173*/       }
/*MT6173*/    #endif
/*MT6173*/       else
/*MT6173*/       {
/*MT6173*/          if( idx==6 )      /* LNA_High    : G6 */
/*MT6173*/          {  lna_path_loss = 0;  }
/*MT6173*/          else if( idx==5 ) /* LNA_Middle : G5*/
/*MT6173*/          {  
/*MT6173*/             if( l1_obb_flag == 1 )
/*MT6173*/             {   lna_path_loss = (l1d_rf2.is_fhc) ? (0) : ((int)(lnaptr->gain_offset_middle_sawless-ofsptr->gain_offset));}
/*MT6173*/             else
/*MT6173*/             {   lna_path_loss = (l1d_rf2.is_fhc) ? (0) : ((int)(lnaptr->gain_offset_middle-ofsptr->gain_offset));}
/*MT6173*/          }
/*MT6173*/          else              /* LNA_Low    : G1*/
/*MT6173*/          {  lna_path_loss = (l1d_rf2.is_fhc) ? (0) : ((int)(lnaptr->gain_offset_low-ofsptr->gain_offset));     }
/*MT6173*/       }
/*MT6173*/
/*MT6173*/
/*MT6173*/    #if IS_RX_POWER_OFFSET_SUPPORT
/*MT6173*/    /* get the arfcn section */
/*MT6173*/    ofsptr_offset = AGCLNA_PATHLOSS_OFFSET[rf_band];
/*MT6173*/    while( ofsptr_offset->max_arfcn>=0 )
/*MT6173*/    {  if( arfcn <= ofsptr_offset->max_arfcn )
/*MT6173*/       {  break;  }
/*MT6173*/       ofsptr_offset++;
/*MT6173*/    }
/*MT6173*/
/*MT6173*/
/*MT6173*/    if( rx_power_offset_enable )
/*MT6173*/    {
/*MT6173*/       if( ( L1D_CheckIfMetaMode() && ( meta_rx_power_offset_enable == 1 )) || // DUT In META mode and enable META mode compensation
/*MT6173*/           (L1D_CheckIfMetaMode() == 0) // DUT in normal mode, apply compensation
/*MT6173*/         )
/*MT6173*/       {
/*MT6173*/       if( 0 )
/*MT6173*/       { /* do nothing */ }
/*MT6173*/    #if IS_2G_EXTERNAL_LNA_BYPASS_SUPPORT
/*MT6173*/       else if( is_elna_bypass_usage )
/*MT6173*/       {
/*MT6173*/          switch( idx )
/*MT6173*/          {
/*MT6173*/             case 6: /* LNA_Utra_High : G6 */
/*MT6173*/                lna_path_loss_offset = (int)(ofsptr_offset->gain_offset_high_sensitivity);
/*MT6173*/                break;
/*MT6173*/             case 5: /* LNA_High      : G5 */ /*Base for path loss calibration*/
/*MT6173*/                lna_path_loss_offset = (int)(ofsptr_offset->gain_offset);
/*MT6173*/                break;
/*MT6173*/             case 4: /* LNA_Middle    : G4 */ /*ELNA cannot exist with sawless*/
/*MT6173*/                if( l1_obb_flag == 1 )
/*MT6173*/                {   lna_path_loss_offset = (int)(ofsptr_offset->gain_offset_middle_sawless);  }/*should not use*/ 
/*MT6173*/                else
/*MT6173*/                {   lna_path_loss_offset = (int)(ofsptr_offset->gain_offset_middle); } 
/*MT6173*/                break;
/*MT6173*/             default:/* LNA_Low       : G1 */
/*MT6173*/                if( agcptr_idx<=LAST_GROUP_FOR_ELNA_ON[rf_band]  )
/*MT6173*/                {   lna_path_loss_offset = (int)(ofsptr_offset->gain_offset_low);  }
/*MT6173*/                else
/*MT6173*/                {   lna_path_loss_offset = (int)(ofsptr_offset->gain_offset_low_maxpin);  } /*BYPASS*/  
/*MT6173*/                break;
/*MT6173*/          } 
/*MT6173*/       }
/*MT6173*/    #endif
/*MT6173*/    #if IS_2G_EXTERNAL_LNA_SUPPORT
/*MT6173*/       else if( is_elna_usage )
/*MT6173*/       {
/*MT6173*/          switch( idx )
/*MT6173*/          {
/*MT6173*/             case 6: /* LNA_Utra_High : G6 */
/*MT6173*/                lna_path_loss_offset = (int)(ofsptr_offset->gain_offset_high_sensitivity);
/*MT6173*/                break;
/*MT6173*/             case 5: /* LNA_High      : G5 */ /*Base for path loss calibration*/
/*MT6173*/                lna_path_loss_offset = (int)(ofsptr_offset->gain_offset);
/*MT6173*/                break;
/*MT6173*/             case 4: /* LNA_Middle    : G4 */ /*ELNA cannot exist with sawless*/
/*MT6173*/                if( l1_obb_flag == 1 )
/*MT6173*/                {   lna_path_loss_offset = (int)(ofsptr_offset->gain_offset_middle_sawless);  }/*should not use*/ 
/*MT6173*/                else
/*MT6173*/                {   lna_path_loss_offset = (int)(ofsptr_offset->gain_offset_middle);  } 
/*MT6173*/                break;
/*MT6173*/             default:/* LNA_Low       : G1 */
/*MT6173*/                lna_path_loss_offset = (int)(ofsptr_offset->gain_offset_low); 
/*MT6173*/                break;
/*MT6173*/          } 
/*MT6173*/       }
/*MT6173*/    #endif
/*MT6173*/         else
/*MT6173*/         {
/*MT6173*/              if( idx==6 )      /* LNA_High    : G6 */
/*MT6173*/              {  lna_path_loss_offset = (int)(ofsptr_offset->gain_offset);  }
/*MT6173*/              else if( idx==5 ) /* LNA_Middle : G5*/
/*MT6173*/              {
/*MT6173*/                  if( l1_obb_flag == 1 )
/*MT6173*/                      {  lna_path_loss_offset = (int)(ofsptr_offset->gain_offset_middle_sawless);  }
/*MT6173*/                  else
/*MT6173*/                      {  lna_path_loss_offset = (int)(ofsptr_offset->gain_offset_middle);  }
/*MT6173*/              }
/*MT6173*/              else              /* LNA_Low    : G1*/
/*MT6173*/              {  lna_path_loss_offset = (int)(ofsptr_offset->gain_offset_low);  }
/*MT6173*/          }
/*MT6173*/       }
/*MT6173*/       else
/*MT6173*/       {
/*MT6173*/          lna_path_loss_offset = 0;
/*MT6173*/       }
/*MT6173*/       extern void L1D_RF_RPO_Trace( uint32 v1, uint32 v2, uint32 v3, uint32 v4, int32 v5, int32 v6 );
/*MT6173*/       L1D_RF_RPO_Trace( L1D_CheckIfMetaMode(), meta_rx_power_offset_enable, idx, rf_band, arfcn, lna_path_loss_offset);
/*MT6173*/    }
/*MT6173*/    #endif/*IS_RX_POWER_OFFSET_SUPPORT*/
/*MT6173*/
/*MT6173*/    #if IS_RX_POWER_OFFSET_SUPPORT
/*MT6173*/       real_gain -= (lna_path_loss_offset+lna_path_loss);
/*MT6173*/    #else
/*MT6173*/       real_gain -= lna_path_loss;// choose pathloss after LNA Mode selected according Nomral/HRD/IBBD
/*MT6173*/    #endif/*IS_RX_POWER_OFFSET_SUPPORT*/
/*MT6173*/    }
/*MT6173*/
/*MT6173*/    #if IS_RSSI_TC_SUPPORT
/*MT6173*/    if(L1D_CheckIfMetaMode()==0)
/*MT6173*/    {  real_gain-=L1D_RF_CompensateRXGain( l1d_rf.band );  }  // Compensate RX Gain acoording to temperature when normal mode
/*MT6173*/    #endif
/*MT6173*/     
/*MT6173*/    *gain_setting = setting;
/*MT6173*/    
/*MT6173*/    /* evaluate the eLNA setting */
/*MT6173*/    if ( 0 )
/*MT6173*/    { /* do nothing */ }
/*MT6173*/    #if IS_2G_EXTERNAL_LNA_BYPASS_SUPPORT
/*MT6173*/    else if (is_elna_bypass_usage) //on or bypass
/*MT6173*/    {
/*MT6173*/       if( agcptr_idx<=LAST_GROUP_FOR_ELNA_ON[rf_band] )
/*MT6173*/       {
/*MT6173*/          l1d_rf.xwin_elna_status = MML1_ELNA_MODE_ON; //low input power
/*MT6173*/       }
/*MT6173*/       else            
/*MT6173*/       {
/*MT6173*/          l1d_rf.xwin_elna_status = MML1_ELNA_MODE_BYPASS; //high input power
/*MT6173*/       }
/*MT6173*/    }
/*MT6173*/    #endif
/*MT6173*/    #if IS_2G_EXTERNAL_LNA_SUPPORT
/*MT6173*/    else if (is_elna_usage)   //always on 
/*MT6173*/    {
/*MT6173*/       l1d_rf.xwin_elna_status = MML1_ELNA_MODE_ON;
/*MT6173*/    }
/*MT6173*/    else
/*MT6173*/    {
/*MT6173*/       l1d_rf.xwin_elna_status = MML1_ELNA_MODE_NULL;
/*MT6173*/    }
/*MT6173*/    #endif
/*MT6173*/    return( real_gain );
/*MT6173*/ }
   #if IS_W_CANCELLATION_SUPPORT
/*MT6173*/ unsigned short   L1D_RF_FindGainStep( unsigned long gain_setting, FrequencyBand rf_band  )
/*MT6173*/ {
/*MT6173*/    unsigned short gain_step = gain_setting & 0x3FF;
/*MT6173*/
/*MT6173*/    if( 0 )
/*MT6173*/    { /* do nothing */ }
/*MT6173*/    #if IS_2G_EXTERNAL_LNA_SUPPORT 
/*MT6173*/       #if IS_2G_RXD_SUPPORT 
/*MT6173*/    else if( L1D_RF_Check_If_ExternalLNA(rf_band)>=L1D_ELNA_ALYWAYS_ON )//Also for eLNA Bypass!   
/*MT6173*/       #else
/*MT6173*/    else if( L1D_RF_Check_If_ExternalLNA(rf_band) )//Also for eLNA Bypass!
/*MT6173*/       #endif
/*MT6173*/    {
/*MT6173*/       switch( gain_step )
/*MT6173*/       {
/*MT6173*/          case 0x10E:
/*MT6173*/             return 12;
/*MT6173*/          case 0x1BD:
/*MT6173*/             return 11;
/*MT6173*/          case 0x20E:
/*MT6173*/             return 10;
/*MT6173*/          case 0x11D:
/*MT6173*/             return 9;
/*MT6173*/          case 0x10D:
/*MT6173*/             return 8;
/*MT6173*/          case 0x15D:
/*MT6173*/             return 7;
/*MT6173*/          case 0xDD:
/*MT6173*/             return 6;
/*MT6173*/          case 0x1BC:
/*MT6173*/             return 5;
/*MT6173*/          case 0x11C:
/*MT6173*/             return 4;
/*MT6173*/          case 0xDC:
/*MT6173*/             return 3;
/*MT6173*/          case 0x189:
/*MT6173*/             return 2;
/*MT6173*/          case 0x149:
/*MT6173*/             return 1;
/*MT6173*/          default:
/*MT6173*/             return 0;
/*MT6173*/       }
/*MT6173*/    }
/*MT6173*/    #endif
/*MT6173*/    else
/*MT6173*/    {
/*MT6173*/       switch( gain_step )
/*MT6173*/       {
/*MT6173*/          case 0x20E:
/*MT6173*/             return 10;
/*MT6173*/          case 0x1CD: 
/*MT6173*/             return 9;
/*MT6173*/          case 0x18E:
/*MT6173*/             return 8;
/*MT6173*/          case 0x1CE:
/*MT6173*/             return 7;
/*MT6173*/          case 0x14E:
/*MT6173*/             return 6;
/*MT6173*/          case 0x19E:
/*MT6173*/             return 5;
/*MT6173*/          case 0x1DD:
/*MT6173*/             return 4;
/*MT6173*/          case 0x19D:
/*MT6173*/             return 3;
/*MT6173*/          case 0x15D:
/*MT6173*/             return 2;
/*MT6173*/          case 0x11D:
/*MT6173*/             return 1;
/*MT6173*/          default:
/*MT6173*/             return 0;
/*MT6173*/       }
/*MT6173*/    }
/*MT6173*/ }
/*MT6173*/ #if IS_2G_RXD_SUPPORT
/*MT6173*/ unsigned short   L1D_RF_FindGainStep_RXD( unsigned long gain_setting, FrequencyBand rf_band  )
/*MT6173*/ {
/*MT6173*/    unsigned short gain_step = gain_setting & 0x3FF;
/*MT6173*/
/*MT6173*/    if( 0 )
/*MT6173*/    { /* do nothing */ }
/*MT6173*/    #if IS_2G_EXTERNAL_LNA_SUPPORT 
/*MT6173*/       #if IS_2G_RXD_SUPPORT 
/*MT6173*/    else if( L1D_RF_Check_If_ExternalLNA_RXD(rf_band)>=L1D_ELNA_ALYWAYS_ON )//Also for eLNA Bypass!   
/*MT6173*/       #else
/*MT6173*/    else if( L1D_RF_Check_If_ExternalLNA_RXD(rf_band) )//Also for eLNA Bypass!
/*MT6173*/       #endif
/*MT6173*/    {
/*MT6173*/       switch( gain_step )
/*MT6173*/       {
/*MT6173*/          case 0x10E:
/*MT6173*/             return 12;
/*MT6173*/          case 0x1BD:
/*MT6173*/             return 11;
/*MT6173*/          case 0x20E:
/*MT6173*/             return 10;
/*MT6173*/          case 0x11D:
/*MT6173*/             return 9;
/*MT6173*/          case 0x10D:
/*MT6173*/             return 8;
/*MT6173*/          case 0x15D:
/*MT6173*/             return 7;
/*MT6173*/          case 0xDD:
/*MT6173*/             return 6;
/*MT6173*/          case 0x1BC:
/*MT6173*/             return 5;
/*MT6173*/          case 0x11C:
/*MT6173*/             return 4;
/*MT6173*/          case 0xDC:
/*MT6173*/             return 3;
/*MT6173*/          case 0x189:
/*MT6173*/             return 2;
/*MT6173*/          case 0x149:
/*MT6173*/             return 1;
/*MT6173*/          default:
/*MT6173*/             return 0;
/*MT6173*/       }
/*MT6173*/    }
/*MT6173*/    #endif
/*MT6173*/    else
/*MT6173*/    {
/*MT6173*/       switch( gain_step )
/*MT6173*/       {
/*MT6173*/          case 0x20E:
/*MT6173*/             return 10;
/*MT6173*/          case 0x1CD: 
/*MT6173*/             return 9;
/*MT6173*/          case 0x18E:
/*MT6173*/             return 8;
/*MT6173*/          case 0x1CE:
/*MT6173*/             return 7;
/*MT6173*/          case 0x14E:
/*MT6173*/             return 6;
/*MT6173*/          case 0x19E:
/*MT6173*/             return 5;
/*MT6173*/          case 0x1DD:
/*MT6173*/             return 4;
/*MT6173*/          case 0x19D:
/*MT6173*/             return 3;
/*MT6173*/          case 0x15D:
/*MT6173*/             return 2;
/*MT6173*/          case 0x11D:
/*MT6173*/             return 1;
/*MT6173*/          default:
/*MT6173*/             return 0;
/*MT6173*/       }
/*MT6173*/    }
/*MT6173*/ }
/*MT6173*/ #endif
   #endif
   #if IS_2G_RXD_SUPPORT
/*MT6173*/ const  sL1DAGCHALDATA  AGC_TABLE_HAL=
/*MT6173*/ {  
/*MT6173*/    (Gain)(ROUNDINT(( 56.6-PVOFSL )*(PWRRES))),  //max_gain
/*MT6173*/    (Gain)(ROUNDINT(( -3.4-PVOFSL )*(PWRRES))),  //min_gain
/*MT6173*/    -880/*-110*/,  //max_predict_power
/*MT6173*/    -40/*-5*/,  //min_predict_power
/*MT6173*/    -86*PWRRES,  //IBBD_Pin_THRESHOLD
/*MT6173*/    -71*PWRRES,  //HRD_Pin_THRESHOLD
/*MT6173*/    {  
/*MT6173*/      {   -880/*-110*/, (Gain)(ROUNDINT(( 56.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x20E), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 47.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1CD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_NULL},
/*MT6173*/      {   -872/*-109*/, (Gain)(ROUNDINT(( 56.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x20E), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 47.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1CD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_NULL},
/*MT6173*/      {   -864/*-108*/, (Gain)(ROUNDINT(( 56.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x20E), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 47.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1CD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_NULL},
/*MT6173*/      {   -856/*-107*/, (Gain)(ROUNDINT(( 56.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x20E), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 47.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1CD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_NULL},
/*MT6173*/      {   -848/*-106*/, (Gain)(ROUNDINT(( 56.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x20E), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 47.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1CD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_NULL},
/*MT6173*/      {   -840/*-105*/, (Gain)(ROUNDINT(( 56.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x20E), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 47.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1CD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_NULL},
/*MT6173*/      {   -832/*-104*/, (Gain)(ROUNDINT(( 56.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x20E), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 47.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1CD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_NULL},
/*MT6173*/      {   -824/*-103*/, (Gain)(ROUNDINT(( 56.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x20E), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 47.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1CD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_NULL},
/*MT6173*/ #if IS_2G_DYNAMIC_GAINTABLE_SWITCH_SUPPORT
/*MT6173*/      {   -816/*-102*/, (Gain)(ROUNDINT(( 53.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1CE), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 47.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1CD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_NULL},
/*MT6173*/      {   -808/*-101*/, (Gain)(ROUNDINT(( 53.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1CE), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 47.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1CD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_NULL},
/*MT6173*/      {   -800/*-100*/, (Gain)(ROUNDINT(( 53.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1CE), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 47.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1CD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_NULL},
/*MT6173*/      {   -792/*-99*/, (Gain)(ROUNDINT(( 53.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1CE), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 47.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1CD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_NULL},
/*MT6173*/      {   -784/*-98*/, (Gain)(ROUNDINT(( 53.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1CE), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 47.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1CD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_NULL},
/*MT6173*/      {   -776/*-97*/, (Gain)(ROUNDINT(( 53.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1CE), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 47.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1CD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_NULL},
/*MT6173*/      {   -768/*-96*/, (Gain)(ROUNDINT(( 53.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1CE), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 47.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1CD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_NULL},
/*MT6173*/ #else
/*MT6173*/      {   -816/*-102*/, (Gain)(ROUNDINT(( 50.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18E), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 47.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1CD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_NULL},
/*MT6173*/      {   -808/*-101*/, (Gain)(ROUNDINT(( 50.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18E), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 47.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1CD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_NULL},
/*MT6173*/      {   -800/*-100*/, (Gain)(ROUNDINT(( 50.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18E), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 47.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1CD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_NULL},
/*MT6173*/      {   -792/*-99*/, (Gain)(ROUNDINT(( 50.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18E), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 47.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1CD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_NULL},
/*MT6173*/      {   -784/*-98*/, (Gain)(ROUNDINT(( 50.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18E), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 47.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1CD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_NULL},
/*MT6173*/      {   -776/*-97*/, (Gain)(ROUNDINT(( 50.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18E), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 47.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1CD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_NULL},
/*MT6173*/      {   -768/*-96*/, (Gain)(ROUNDINT(( 50.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18E), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 47.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1CD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_NULL},
/*MT6173*/ #endif
/*MT6173*/      {   -760/*-95*/, (Gain)(ROUNDINT(( 53.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1CE), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 47.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1CD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_NULL},
/*MT6173*/      {   -752/*-94*/, (Gain)(ROUNDINT(( 53.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1CE), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 47.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1CD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_NULL},
/*MT6173*/      {   -744/*-93*/, (Gain)(ROUNDINT(( 50.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18E), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 50.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18E),  L1D_LNA_HIGH,  MML1_ELNA_MODE_NULL},
/*MT6173*/      {   -736/*-92*/, (Gain)(ROUNDINT(( 50.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18E), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 50.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18E),  L1D_LNA_HIGH,  MML1_ELNA_MODE_NULL},
/*MT6173*/      {   -728/*-91*/, (Gain)(ROUNDINT(( 50.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18E), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 50.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x18E),  L1D_LNA_HIGH,  MML1_ELNA_MODE_NULL},
/*MT6173*/      {   -720/*-90*/, (Gain)(ROUNDINT(( 47.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x14E), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 47.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x14E),  L1D_LNA_HIGH,  MML1_ELNA_MODE_NULL},
/*MT6173*/      {   -712/*-89*/, (Gain)(ROUNDINT(( 47.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x14E), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 47.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x14E),  L1D_LNA_HIGH,  MML1_ELNA_MODE_NULL},
/*MT6173*/      {   -704/*-88*/, (Gain)(ROUNDINT(( 47.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x14E), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 47.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x14E),  L1D_LNA_HIGH,  MML1_ELNA_MODE_NULL},
/*MT6173*/      {   -696/*-87*/, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19E), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19E),  L1D_LNA_HIGH,  MML1_ELNA_MODE_NULL},
/*MT6173*/      {   -688/*-86*/, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19E), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19E),  L1D_LNA_HIGH,  MML1_ELNA_MODE_NULL},
/*MT6173*/      {   -680/*-85*/, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19E), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 38.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19D),  L1D_LNA_HIGH,  MML1_ELNA_MODE_NULL},
/*MT6173*/      {   -672/*-84*/, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19E), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 38.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19D),  L1D_LNA_HIGH,  MML1_ELNA_MODE_NULL},
/*MT6173*/      {   -664/*-83*/, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19E), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 38.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19D),  L1D_LNA_HIGH,  MML1_ELNA_MODE_NULL},
/*MT6173*/      {   -656/*-82*/, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19E), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 38.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19D),  L1D_LNA_HIGH,  MML1_ELNA_MODE_NULL},
/*MT6173*/      {   -648/*-81*/, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19E), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 38.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19D),  L1D_LNA_HIGH,  MML1_ELNA_MODE_NULL},
/*MT6173*/      {   -640/*-80*/, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19E), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 38.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19D),  L1D_LNA_HIGH,  MML1_ELNA_MODE_NULL},
/*MT6173*/      {   -632/*-79*/, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19E), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 38.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19D),  L1D_LNA_HIGH,  MML1_ELNA_MODE_NULL},
/*MT6173*/      {   -624/*-78*/, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19E), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 38.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19D),  L1D_LNA_HIGH,  MML1_ELNA_MODE_NULL},
/*MT6173*/      {   -616/*-77*/, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19E), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 38.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19D),  L1D_LNA_HIGH,  MML1_ELNA_MODE_NULL},
/*MT6173*/      {   -608/*-76*/, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19E), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 38.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19D),  L1D_LNA_HIGH,  MML1_ELNA_MODE_NULL},
/*MT6173*/      {   -600/*-75*/, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19E), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 38.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19D),  L1D_LNA_HIGH,  MML1_ELNA_MODE_NULL},
/*MT6173*/      {   -592/*-74*/, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19E), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 38.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19D),  L1D_LNA_HIGH,  MML1_ELNA_MODE_NULL},
/*MT6173*/      {   -584/*-73*/, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19E), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 38.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19D),  L1D_LNA_HIGH,  MML1_ELNA_MODE_NULL},
/*MT6173*/      {   -576/*-72*/, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19E), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 38.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19D),  L1D_LNA_HIGH,  MML1_ELNA_MODE_NULL},
/*MT6173*/      {   -568/*-71*/, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19E), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 38.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19D),  L1D_LNA_HIGH,  MML1_ELNA_MODE_NULL},
/*MT6173*/      {   -560/*-70*/, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19E), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 38.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19D),  L1D_LNA_HIGH,  MML1_ELNA_MODE_NULL},
/*MT6173*/      {   -552/*-69*/, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19E), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19E),  L1D_LNA_HIGH,  MML1_ELNA_MODE_NULL},
/*MT6173*/      {   -544/*-68*/, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19E), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19E),  L1D_LNA_HIGH,  MML1_ELNA_MODE_NULL},
/*MT6173*/      {   -536/*-67*/, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19E), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19E),  L1D_LNA_HIGH,  MML1_ELNA_MODE_NULL},
/*MT6173*/      {   -528/*-66*/, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19E), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19E),  L1D_LNA_HIGH,  MML1_ELNA_MODE_NULL},
/*MT6173*/      {   -520/*-65*/, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19E), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19E),  L1D_LNA_HIGH,  MML1_ELNA_MODE_NULL},
/*MT6173*/      {   -512/*-64*/, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19E), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19E),  L1D_LNA_HIGH,  MML1_ELNA_MODE_NULL},
/*MT6173*/      {   -504/*-63*/, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19E), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19E),  L1D_LNA_HIGH,  MML1_ELNA_MODE_NULL},
/*MT6173*/      {   -496/*-62*/, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19E), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19E),  L1D_LNA_HIGH,  MML1_ELNA_MODE_NULL},
/*MT6173*/      {   -488/*-61*/, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19E), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19E),  L1D_LNA_HIGH,  MML1_ELNA_MODE_NULL},
/*MT6173*/      {   -480/*-60*/, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19E), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19E),  L1D_LNA_HIGH,  MML1_ELNA_MODE_NULL},
/*MT6173*/      {   -472/*-59*/, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19E), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19E),  L1D_LNA_HIGH,  MML1_ELNA_MODE_NULL},
/*MT6173*/      {   -464/*-58*/, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19E), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19E),  L1D_LNA_HIGH,  MML1_ELNA_MODE_NULL},
/*MT6173*/      {   -456/*-57*/, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19E), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19E),  L1D_LNA_HIGH,  MML1_ELNA_MODE_NULL},
/*MT6173*/      {   -448/*-56*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1DD), L1D_LNA_MIDDLE, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1DD),  L1D_LNA_MIDDLE,  MML1_ELNA_MODE_NULL},
/*MT6173*/      {   -440/*-55*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1DD), L1D_LNA_MIDDLE, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1DD),  L1D_LNA_MIDDLE,  MML1_ELNA_MODE_NULL},
/*MT6173*/      {   -432/*-54*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1DD), L1D_LNA_MIDDLE, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1DD),  L1D_LNA_MIDDLE,  MML1_ELNA_MODE_NULL},
/*MT6173*/      {   -424/*-53*/, (Gain)(ROUNDINT(( 38.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19D), L1D_LNA_MIDDLE, (Gain)(ROUNDINT(( 38.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19D),  L1D_LNA_MIDDLE,  MML1_ELNA_MODE_NULL},
/*MT6173*/      {   -416/*-52*/, (Gain)(ROUNDINT(( 38.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19D), L1D_LNA_MIDDLE, (Gain)(ROUNDINT(( 38.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19D),  L1D_LNA_MIDDLE,  MML1_ELNA_MODE_NULL},
/*MT6173*/      {   -408/*-51*/, (Gain)(ROUNDINT(( 38.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19D), L1D_LNA_MIDDLE, (Gain)(ROUNDINT(( 38.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x19D),  L1D_LNA_MIDDLE,  MML1_ELNA_MODE_NULL},
/*MT6173*/      {   -400/*-50*/, (Gain)(ROUNDINT(( 35.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x15D), L1D_LNA_MIDDLE, (Gain)(ROUNDINT(( 35.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x15D),  L1D_LNA_MIDDLE,  MML1_ELNA_MODE_NULL},
/*MT6173*/      {   -392/*-49*/, (Gain)(ROUNDINT(( 35.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x15D), L1D_LNA_MIDDLE, (Gain)(ROUNDINT(( 35.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x15D),  L1D_LNA_MIDDLE,  MML1_ELNA_MODE_NULL},
/*MT6173*/      {   -384/*-48*/, (Gain)(ROUNDINT(( 35.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x15D), L1D_LNA_MIDDLE, (Gain)(ROUNDINT(( 35.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x15D),  L1D_LNA_MIDDLE,  MML1_ELNA_MODE_NULL},
/*MT6173*/      {   -376/*-47*/, (Gain)(ROUNDINT(( 32.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x11D), L1D_LNA_MIDDLE, (Gain)(ROUNDINT(( 32.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x11D),  L1D_LNA_MIDDLE,  MML1_ELNA_MODE_NULL},
/*MT6173*/      {   -368/*-46*/, (Gain)(ROUNDINT(( 32.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x11D), L1D_LNA_MIDDLE, (Gain)(ROUNDINT(( 32.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x11D),  L1D_LNA_MIDDLE,  MML1_ELNA_MODE_NULL},
/*MT6173*/      {   -360/*-45*/, (Gain)(ROUNDINT(( 32.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x11D), L1D_LNA_MIDDLE, (Gain)(ROUNDINT(( 32.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x11D),  L1D_LNA_MIDDLE,  MML1_ELNA_MODE_NULL},
/*MT6173*/      {   -352/*-44*/, (Gain)(ROUNDINT(( 29.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_MIDDLE, (Gain)(ROUNDINT(( 29.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD),  L1D_LNA_MIDDLE,  MML1_ELNA_MODE_NULL},
/*MT6173*/      {   -344/*-43*/, (Gain)(ROUNDINT(( 29.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_MIDDLE, (Gain)(ROUNDINT(( 29.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD),  L1D_LNA_MIDDLE,  MML1_ELNA_MODE_NULL},
/*MT6173*/      {   -336/*-42*/, (Gain)(ROUNDINT(( 29.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_MIDDLE, (Gain)(ROUNDINT(( 29.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD),  L1D_LNA_MIDDLE,  MML1_ELNA_MODE_NULL},
/*MT6173*/      {   -328/*-41*/, (Gain)(ROUNDINT(( 26.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x209), L1D_LNA_LOW, (Gain)(ROUNDINT(( 26.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x209),  L1D_LNA_LOW,  MML1_ELNA_MODE_NULL},
/*MT6173*/      {   -320/*-40*/, (Gain)(ROUNDINT(( 26.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x209), L1D_LNA_LOW, (Gain)(ROUNDINT(( 26.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x209),  L1D_LNA_LOW,  MML1_ELNA_MODE_NULL},
/*MT6173*/      {   -312/*-39*/, (Gain)(ROUNDINT(( 26.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x209), L1D_LNA_LOW, (Gain)(ROUNDINT(( 26.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x209),  L1D_LNA_LOW,  MML1_ELNA_MODE_NULL},
/*MT6173*/      {   -304/*-38*/, (Gain)(ROUNDINT(( 23.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1C9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 23.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1C9),  L1D_LNA_LOW,  MML1_ELNA_MODE_NULL},
/*MT6173*/      {   -296/*-37*/, (Gain)(ROUNDINT(( 23.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1C9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 23.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1C9),  L1D_LNA_LOW,  MML1_ELNA_MODE_NULL},
/*MT6173*/      {   -288/*-36*/, (Gain)(ROUNDINT(( 23.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1C9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 23.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1C9),  L1D_LNA_LOW,  MML1_ELNA_MODE_NULL},
/*MT6173*/      {   -280/*-35*/, (Gain)(ROUNDINT(( 20.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x189), L1D_LNA_LOW, (Gain)(ROUNDINT(( 20.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x189),  L1D_LNA_LOW,  MML1_ELNA_MODE_NULL},
/*MT6173*/      {   -272/*-34*/, (Gain)(ROUNDINT(( 20.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x189), L1D_LNA_LOW, (Gain)(ROUNDINT(( 20.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x189),  L1D_LNA_LOW,  MML1_ELNA_MODE_NULL},
/*MT6173*/      {   -264/*-33*/, (Gain)(ROUNDINT(( 20.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x189), L1D_LNA_LOW, (Gain)(ROUNDINT(( 20.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x189),  L1D_LNA_LOW,  MML1_ELNA_MODE_NULL},
/*MT6173*/      {   -256/*-32*/, (Gain)(ROUNDINT(( 17.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x149), L1D_LNA_LOW, (Gain)(ROUNDINT(( 17.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x149),  L1D_LNA_LOW,  MML1_ELNA_MODE_NULL},
/*MT6173*/      {   -248/*-31*/, (Gain)(ROUNDINT(( 17.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x149), L1D_LNA_LOW, (Gain)(ROUNDINT(( 17.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x149),  L1D_LNA_LOW,  MML1_ELNA_MODE_NULL},
/*MT6173*/      {   -240/*-30*/, (Gain)(ROUNDINT(( 17.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x149), L1D_LNA_LOW, (Gain)(ROUNDINT(( 17.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x149),  L1D_LNA_LOW,  MML1_ELNA_MODE_NULL},
/*MT6173*/      {   -232/*-29*/, (Gain)(ROUNDINT(( 14.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x199), L1D_LNA_LOW, (Gain)(ROUNDINT(( 14.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x199),  L1D_LNA_LOW,  MML1_ELNA_MODE_NULL},
/*MT6173*/      {   -224/*-28*/, (Gain)(ROUNDINT(( 14.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x199), L1D_LNA_LOW, (Gain)(ROUNDINT(( 14.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x199),  L1D_LNA_LOW,  MML1_ELNA_MODE_NULL},
/*MT6173*/      {   -216/*-27*/, (Gain)(ROUNDINT(( 14.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x199), L1D_LNA_LOW, (Gain)(ROUNDINT(( 14.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x199),  L1D_LNA_LOW,  MML1_ELNA_MODE_NULL},
/*MT6173*/      {   -208/*-26*/, (Gain)(ROUNDINT(( 11.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x159), L1D_LNA_LOW, (Gain)(ROUNDINT(( 11.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x159),  L1D_LNA_LOW,  MML1_ELNA_MODE_NULL},
/*MT6173*/      {   -200/*-25*/, (Gain)(ROUNDINT(( 11.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x159), L1D_LNA_LOW, (Gain)(ROUNDINT(( 11.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x159),  L1D_LNA_LOW,  MML1_ELNA_MODE_NULL},
/*MT6173*/      {   -192/*-24*/, (Gain)(ROUNDINT(( 11.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x159), L1D_LNA_LOW, (Gain)(ROUNDINT(( 11.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x159),  L1D_LNA_LOW,  MML1_ELNA_MODE_NULL},
/*MT6173*/      {   -184/*-23*/, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x119), L1D_LNA_LOW, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x119),  L1D_LNA_LOW,  MML1_ELNA_MODE_NULL},
/*MT6173*/      {   -176/*-22*/, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x119), L1D_LNA_LOW, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x119),  L1D_LNA_LOW,  MML1_ELNA_MODE_NULL},
/*MT6173*/      {   -168/*-21*/, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x119), L1D_LNA_LOW, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x119),  L1D_LNA_LOW,  MML1_ELNA_MODE_NULL},
/*MT6173*/      {   -160/*-20*/, (Gain)(ROUNDINT(( 5.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xD9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 5.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xD9),  L1D_LNA_LOW,  MML1_ELNA_MODE_NULL},
/*MT6173*/      {   -152/*-19*/, (Gain)(ROUNDINT(( 5.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xD9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 5.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xD9),  L1D_LNA_LOW,  MML1_ELNA_MODE_NULL},
/*MT6173*/      {   -144/*-18*/, (Gain)(ROUNDINT(( 5.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xD9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 5.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xD9),  L1D_LNA_LOW,  MML1_ELNA_MODE_NULL},
/*MT6173*/      {   -136/*-17*/, (Gain)(ROUNDINT(( 2.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x139), L1D_LNA_LOW, (Gain)(ROUNDINT(( 2.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x139),  L1D_LNA_LOW,  MML1_ELNA_MODE_NULL},
/*MT6173*/      {   -128/*-16*/, (Gain)(ROUNDINT(( 2.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x139), L1D_LNA_LOW, (Gain)(ROUNDINT(( 2.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x139),  L1D_LNA_LOW,  MML1_ELNA_MODE_NULL},
/*MT6173*/      {   -120/*-15*/, (Gain)(ROUNDINT(( 2.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x139), L1D_LNA_LOW, (Gain)(ROUNDINT(( 2.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x139),  L1D_LNA_LOW,  MML1_ELNA_MODE_NULL},
/*MT6173*/      {   -112/*-14*/, (Gain)(ROUNDINT(( -0.4-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xF9), L1D_LNA_LOW, (Gain)(ROUNDINT(( -0.4-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xF9),  L1D_LNA_LOW,  MML1_ELNA_MODE_NULL},
/*MT6173*/      {   -104/*-13*/, (Gain)(ROUNDINT(( -0.4-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xF9), L1D_LNA_LOW, (Gain)(ROUNDINT(( -0.4-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xF9),  L1D_LNA_LOW,  MML1_ELNA_MODE_NULL},
/*MT6173*/      {   -96/*-12*/, (Gain)(ROUNDINT(( -0.4-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xF9), L1D_LNA_LOW, (Gain)(ROUNDINT(( -0.4-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xF9),  L1D_LNA_LOW,  MML1_ELNA_MODE_NULL},
/*MT6173*/      {   -88/*-11*/, (Gain)(ROUNDINT(( -3.4-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9), L1D_LNA_LOW, (Gain)(ROUNDINT(( -3.4-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9),  L1D_LNA_LOW,  MML1_ELNA_MODE_NULL},
/*MT6173*/      {   -80/*-10*/, (Gain)(ROUNDINT(( -3.4-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9), L1D_LNA_LOW, (Gain)(ROUNDINT(( -3.4-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9),  L1D_LNA_LOW,  MML1_ELNA_MODE_NULL},
/*MT6173*/      {   -72/*-9*/, (Gain)(ROUNDINT(( -3.4-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9), L1D_LNA_LOW, (Gain)(ROUNDINT(( -3.4-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9),  L1D_LNA_LOW,  MML1_ELNA_MODE_NULL},
/*MT6173*/      {   -64/*-8*/, (Gain)(ROUNDINT(( -3.4-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9), L1D_LNA_LOW, (Gain)(ROUNDINT(( -3.4-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9),  L1D_LNA_LOW,  MML1_ELNA_MODE_NULL},
/*MT6173*/      {   -56/*-7*/, (Gain)(ROUNDINT(( -3.4-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9), L1D_LNA_LOW, (Gain)(ROUNDINT(( -3.4-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9),  L1D_LNA_LOW,  MML1_ELNA_MODE_NULL},
/*MT6173*/      {   -48/*-6*/, (Gain)(ROUNDINT(( -3.4-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9), L1D_LNA_LOW, (Gain)(ROUNDINT(( -3.4-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9),  L1D_LNA_LOW,  MML1_ELNA_MODE_NULL},
/*MT6173*/      {   -40/*-5*/, (Gain)(ROUNDINT(( -3.4-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9), L1D_LNA_LOW, (Gain)(ROUNDINT(( -3.4-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9),  L1D_LNA_LOW,  MML1_ELNA_MODE_NULL},
/*MT6173*/    }
/*MT6173*/ };
/*MT6173*/ const  sL1DAGCHALDATA *const  AGC_TABLE_HAL_LIST[] =
/*MT6173*/ {  0,                                           /*#FrequencyBand400  */
/*MT6173*/    &AGC_TABLE_HAL,                               /* FrequencyBand850  */
/*MT6173*/    &AGC_TABLE_HAL,                               /* FrequencyBand900  */
/*MT6173*/    &AGC_TABLE_HAL,                               /* FrequencyBand1800 */
/*MT6173*/    &AGC_TABLE_HAL,                               /* FrequencyBand1900 */
/*MT6173*/ };
/*MT6173*/   #if IS_2G_EXTERNAL_LNA_SUPPORT
/*MT6173*/ const  sL1DAGCHALDATA  AGC_TABLE_HAL_ELNA=
/*MT6173*/ {  
/*MT6173*/    (Gain)(ROUNDINT(( 68.6-PVOFSL )*(PWRRES))),  //max_gain
/*MT6173*/    (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))),  //min_gain
/*MT6173*/    -880/*-110*/,  //max_predict_power
/*MT6173*/    -40/*-5*/,  //min_predict_power
/*MT6173*/    -86*PWRRES,  //IBBD_Pin_THRESHOLD
/*MT6173*/    -71*PWRRES,  //HRD_Pin_THRESHOLD
/*MT6173*/    {  
/*MT6173*/      {   -880/*-110*/, (Gain)(ROUNDINT(( 68.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x20E), L1D_LNA_HIGH_SENSITIVITY, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BD),  L1D_LNA_HIGH_SENSITIVITY,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -872/*-109*/, (Gain)(ROUNDINT(( 68.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x20E), L1D_LNA_HIGH_SENSITIVITY, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BD),  L1D_LNA_HIGH_SENSITIVITY,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -864/*-108*/, (Gain)(ROUNDINT(( 68.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x20E), L1D_LNA_HIGH_SENSITIVITY, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BD),  L1D_LNA_HIGH_SENSITIVITY,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -856/*-107*/, (Gain)(ROUNDINT(( 68.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x20E), L1D_LNA_HIGH_SENSITIVITY, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BD),  L1D_LNA_HIGH_SENSITIVITY,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -848/*-106*/, (Gain)(ROUNDINT(( 68.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x20E), L1D_LNA_HIGH_SENSITIVITY, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BD),  L1D_LNA_HIGH_SENSITIVITY,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -840/*-105*/, (Gain)(ROUNDINT(( 68.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x20E), L1D_LNA_HIGH_SENSITIVITY, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BD),  L1D_LNA_HIGH_SENSITIVITY,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -832/*-104*/, (Gain)(ROUNDINT(( 68.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x20E), L1D_LNA_HIGH_SENSITIVITY, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BD),  L1D_LNA_HIGH_SENSITIVITY,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -824/*-103*/, (Gain)(ROUNDINT(( 68.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x20E), L1D_LNA_HIGH_SENSITIVITY, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BD),  L1D_LNA_HIGH_SENSITIVITY,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -816/*-102*/, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x11D), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -808/*-101*/, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x11D), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -800/*-100*/, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x11D), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -792/*-99*/, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x11D), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -784/*-98*/, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x11D), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -776/*-97*/, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x11D), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -768/*-96*/, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x11D), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -760/*-95*/, (Gain)(ROUNDINT(( 50.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x10D), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -752/*-94*/, (Gain)(ROUNDINT(( 50.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x10D), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -744/*-93*/, (Gain)(ROUNDINT(( 50.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x10D), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -736/*-92*/, (Gain)(ROUNDINT(( 47.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x15D), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -728/*-91*/, (Gain)(ROUNDINT(( 47.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x15D), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -720/*-90*/, (Gain)(ROUNDINT(( 47.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x15D), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -712/*-89*/, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x11D), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -704/*-88*/, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x11D), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -696/*-87*/, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x11D), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -688/*-86*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -680/*-85*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 38.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BC),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -672/*-84*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 38.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BC),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -664/*-83*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 38.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BC),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -656/*-82*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 38.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BC),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -648/*-81*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 38.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BC),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -640/*-80*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 38.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BC),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -632/*-79*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 38.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BC),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -624/*-78*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -616/*-77*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -608/*-76*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -600/*-75*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -592/*-74*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -584/*-73*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -576/*-72*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -568/*-71*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -560/*-70*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -552/*-69*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -544/*-68*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -536/*-67*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -528/*-66*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -520/*-65*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -512/*-64*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -504/*-63*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -496/*-62*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -488/*-61*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -480/*-60*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -472/*-59*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -464/*-58*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -456/*-57*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -448/*-56*/, (Gain)(ROUNDINT(( 38.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x11C), L1D_LNA_MIDDLE, (Gain)(ROUNDINT(( 38.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x11C),  L1D_LNA_MIDDLE,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -440/*-55*/, (Gain)(ROUNDINT(( 38.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x11C), L1D_LNA_MIDDLE, (Gain)(ROUNDINT(( 38.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x11C),  L1D_LNA_MIDDLE,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -432/*-54*/, (Gain)(ROUNDINT(( 38.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x11C), L1D_LNA_MIDDLE, (Gain)(ROUNDINT(( 38.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x11C),  L1D_LNA_MIDDLE,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -424/*-53*/, (Gain)(ROUNDINT(( 35.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDC), L1D_LNA_MIDDLE, (Gain)(ROUNDINT(( 35.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDC),  L1D_LNA_MIDDLE,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -416/*-52*/, (Gain)(ROUNDINT(( 35.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDC), L1D_LNA_MIDDLE, (Gain)(ROUNDINT(( 35.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDC),  L1D_LNA_MIDDLE,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -408/*-51*/, (Gain)(ROUNDINT(( 35.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDC), L1D_LNA_MIDDLE, (Gain)(ROUNDINT(( 35.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDC),  L1D_LNA_MIDDLE,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -400/*-50*/, (Gain)(ROUNDINT(( 32.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x189), L1D_LNA_LOW, (Gain)(ROUNDINT(( 32.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x189),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -392/*-49*/, (Gain)(ROUNDINT(( 32.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x189), L1D_LNA_LOW, (Gain)(ROUNDINT(( 32.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x189),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -384/*-48*/, (Gain)(ROUNDINT(( 32.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x189), L1D_LNA_LOW, (Gain)(ROUNDINT(( 32.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x189),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -376/*-47*/, (Gain)(ROUNDINT(( 29.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x149), L1D_LNA_LOW, (Gain)(ROUNDINT(( 29.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x149),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -368/*-46*/, (Gain)(ROUNDINT(( 29.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x149), L1D_LNA_LOW, (Gain)(ROUNDINT(( 29.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x149),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -360/*-45*/, (Gain)(ROUNDINT(( 29.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x149), L1D_LNA_LOW, (Gain)(ROUNDINT(( 29.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x149),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -352/*-44*/, (Gain)(ROUNDINT(( 26.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x109), L1D_LNA_LOW, (Gain)(ROUNDINT(( 26.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x109),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -344/*-43*/, (Gain)(ROUNDINT(( 26.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x109), L1D_LNA_LOW, (Gain)(ROUNDINT(( 26.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x109),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -336/*-42*/, (Gain)(ROUNDINT(( 26.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x109), L1D_LNA_LOW, (Gain)(ROUNDINT(( 26.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x109),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -328/*-41*/, (Gain)(ROUNDINT(( 23.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x159), L1D_LNA_LOW, (Gain)(ROUNDINT(( 23.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x159),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -320/*-40*/, (Gain)(ROUNDINT(( 23.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x159), L1D_LNA_LOW, (Gain)(ROUNDINT(( 23.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x159),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -312/*-39*/, (Gain)(ROUNDINT(( 23.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x159), L1D_LNA_LOW, (Gain)(ROUNDINT(( 23.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x159),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -304/*-38*/, (Gain)(ROUNDINT(( 20.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x119), L1D_LNA_LOW, (Gain)(ROUNDINT(( 20.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x119),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -296/*-37*/, (Gain)(ROUNDINT(( 20.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x119), L1D_LNA_LOW, (Gain)(ROUNDINT(( 20.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x119),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -288/*-36*/, (Gain)(ROUNDINT(( 20.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x119), L1D_LNA_LOW, (Gain)(ROUNDINT(( 20.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x119),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -280/*-35*/, (Gain)(ROUNDINT(( 17.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xD9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 17.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xD9),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -272/*-34*/, (Gain)(ROUNDINT(( 17.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xD9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 17.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xD9),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -264/*-33*/, (Gain)(ROUNDINT(( 17.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xD9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 17.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xD9),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -256/*-32*/, (Gain)(ROUNDINT(( 14.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x139), L1D_LNA_LOW, (Gain)(ROUNDINT(( 14.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x139),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -248/*-31*/, (Gain)(ROUNDINT(( 14.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x139), L1D_LNA_LOW, (Gain)(ROUNDINT(( 14.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x139),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -240/*-30*/, (Gain)(ROUNDINT(( 14.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x139), L1D_LNA_LOW, (Gain)(ROUNDINT(( 14.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x139),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -232/*-29*/, (Gain)(ROUNDINT(( 11.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xF9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 11.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xF9),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -224/*-28*/, (Gain)(ROUNDINT(( 11.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xF9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 11.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xF9),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -216/*-27*/, (Gain)(ROUNDINT(( 11.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xF9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 11.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xF9),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -208/*-26*/, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -200/*-25*/, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -192/*-24*/, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -184/*-23*/, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -176/*-22*/, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -168/*-21*/, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -160/*-20*/, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -152/*-19*/, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -144/*-18*/, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -136/*-17*/, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -128/*-16*/, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -120/*-15*/, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -112/*-14*/, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -104/*-13*/, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -96/*-12*/, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -88/*-11*/, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -80/*-10*/, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -72/*-9*/, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -64/*-8*/, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -56/*-7*/, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -48/*-6*/, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -40/*-5*/, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6173*/    }
/*MT6173*/ };
/*MT6173*/ const  sL1DAGCHALDATA *const  AGC_TABLE_HAL_ELNA_LIST[] =
/*MT6173*/ {  0,                                                /*#FrequencyBand400  */
/*MT6173*/    &AGC_TABLE_HAL_ELNA,                               /* FrequencyBand850  */
/*MT6173*/    &AGC_TABLE_HAL_ELNA,                               /* FrequencyBand900  */
/*MT6173*/    &AGC_TABLE_HAL_ELNA,                               /* FrequencyBand1800 */
/*MT6173*/    &AGC_TABLE_HAL_ELNA,                               /* FrequencyBand1900 */
/*MT6173*/ };
/*MT6173*/ const  sL1DAGCHALDATA  AGC_TABLE_HAL_MATCHING_ELNA=
/*MT6173*/ {  
/*MT6173*/    (Gain)(ROUNDINT(( 56.6-PVOFSL )*(PWRRES))),  //max_gain
/*MT6173*/    (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))),  //min_gain
/*MT6173*/    -880/*-110*/,  //max_predict_power
/*MT6173*/    -40/*-5*/,  //min_predict_power
/*MT6173*/    -86*PWRRES,  //IBBD_Pin_THRESHOLD
/*MT6173*/    -71*PWRRES,  //HRD_Pin_THRESHOLD
/*MT6173*/    {  
/*MT6173*/      {   -880/*-110*/, (Gain)(ROUNDINT(( 56.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x10E), L1D_LNA_HIGH_SENSITIVITY, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -872/*-109*/, (Gain)(ROUNDINT(( 56.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x10E), L1D_LNA_HIGH_SENSITIVITY, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -864/*-108*/, (Gain)(ROUNDINT(( 56.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x10E), L1D_LNA_HIGH_SENSITIVITY, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -856/*-107*/, (Gain)(ROUNDINT(( 56.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x10E), L1D_LNA_HIGH_SENSITIVITY, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -848/*-106*/, (Gain)(ROUNDINT(( 56.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x10E), L1D_LNA_HIGH_SENSITIVITY, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -840/*-105*/, (Gain)(ROUNDINT(( 56.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x10E), L1D_LNA_HIGH_SENSITIVITY, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -832/*-104*/, (Gain)(ROUNDINT(( 56.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x10E), L1D_LNA_HIGH_SENSITIVITY, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -824/*-103*/, (Gain)(ROUNDINT(( 56.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x10E), L1D_LNA_HIGH_SENSITIVITY, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -816/*-102*/, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x11D), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -808/*-101*/, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x11D), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -800/*-100*/, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x11D), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -792/*-99*/, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x11D), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -784/*-98*/, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x11D), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -776/*-97*/, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x11D), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -768/*-96*/, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x11D), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -760/*-95*/, (Gain)(ROUNDINT(( 50.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x10D), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -752/*-94*/, (Gain)(ROUNDINT(( 50.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x10D), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -744/*-93*/, (Gain)(ROUNDINT(( 50.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x10D), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -736/*-92*/, (Gain)(ROUNDINT(( 47.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x15D), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -728/*-91*/, (Gain)(ROUNDINT(( 47.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x15D), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -720/*-90*/, (Gain)(ROUNDINT(( 47.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x15D), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -712/*-89*/, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x11D), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -704/*-88*/, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x11D), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -696/*-87*/, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x11D), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -688/*-86*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -680/*-85*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 38.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BC),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -672/*-84*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 38.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BC),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -664/*-83*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 38.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BC),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -656/*-82*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 38.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BC),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -648/*-81*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 38.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BC),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -640/*-80*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 38.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BC),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -632/*-79*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 38.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BC),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -624/*-78*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -616/*-77*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -608/*-76*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -600/*-75*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -592/*-74*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -584/*-73*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -576/*-72*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -568/*-71*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -560/*-70*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -552/*-69*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -544/*-68*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -536/*-67*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -528/*-66*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -520/*-65*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -512/*-64*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -504/*-63*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -496/*-62*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -488/*-61*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -480/*-60*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -472/*-59*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -464/*-58*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -456/*-57*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -448/*-56*/, (Gain)(ROUNDINT(( 38.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x11C), L1D_LNA_MIDDLE, (Gain)(ROUNDINT(( 38.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x11C),  L1D_LNA_MIDDLE,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -440/*-55*/, (Gain)(ROUNDINT(( 38.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x11C), L1D_LNA_MIDDLE, (Gain)(ROUNDINT(( 38.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x11C),  L1D_LNA_MIDDLE,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -432/*-54*/, (Gain)(ROUNDINT(( 38.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x11C), L1D_LNA_MIDDLE, (Gain)(ROUNDINT(( 38.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x11C),  L1D_LNA_MIDDLE,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -424/*-53*/, (Gain)(ROUNDINT(( 35.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDC), L1D_LNA_MIDDLE, (Gain)(ROUNDINT(( 35.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDC),  L1D_LNA_MIDDLE,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -416/*-52*/, (Gain)(ROUNDINT(( 35.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDC), L1D_LNA_MIDDLE, (Gain)(ROUNDINT(( 35.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDC),  L1D_LNA_MIDDLE,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -408/*-51*/, (Gain)(ROUNDINT(( 35.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDC), L1D_LNA_MIDDLE, (Gain)(ROUNDINT(( 35.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDC),  L1D_LNA_MIDDLE,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -400/*-50*/, (Gain)(ROUNDINT(( 32.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x189), L1D_LNA_LOW, (Gain)(ROUNDINT(( 32.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x189),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -392/*-49*/, (Gain)(ROUNDINT(( 32.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x189), L1D_LNA_LOW, (Gain)(ROUNDINT(( 32.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x189),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -384/*-48*/, (Gain)(ROUNDINT(( 32.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x189), L1D_LNA_LOW, (Gain)(ROUNDINT(( 32.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x189),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -376/*-47*/, (Gain)(ROUNDINT(( 29.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x149), L1D_LNA_LOW, (Gain)(ROUNDINT(( 29.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x149),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -368/*-46*/, (Gain)(ROUNDINT(( 29.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x149), L1D_LNA_LOW, (Gain)(ROUNDINT(( 29.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x149),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -360/*-45*/, (Gain)(ROUNDINT(( 29.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x149), L1D_LNA_LOW, (Gain)(ROUNDINT(( 29.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x149),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -352/*-44*/, (Gain)(ROUNDINT(( 26.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x109), L1D_LNA_LOW, (Gain)(ROUNDINT(( 26.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x109),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -344/*-43*/, (Gain)(ROUNDINT(( 26.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x109), L1D_LNA_LOW, (Gain)(ROUNDINT(( 26.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x109),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -336/*-42*/, (Gain)(ROUNDINT(( 26.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x109), L1D_LNA_LOW, (Gain)(ROUNDINT(( 26.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x109),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -328/*-41*/, (Gain)(ROUNDINT(( 23.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x159), L1D_LNA_LOW, (Gain)(ROUNDINT(( 23.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x159),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -320/*-40*/, (Gain)(ROUNDINT(( 23.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x159), L1D_LNA_LOW, (Gain)(ROUNDINT(( 23.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x159),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -312/*-39*/, (Gain)(ROUNDINT(( 23.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x159), L1D_LNA_LOW, (Gain)(ROUNDINT(( 23.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x159),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -304/*-38*/, (Gain)(ROUNDINT(( 20.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x119), L1D_LNA_LOW, (Gain)(ROUNDINT(( 20.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x119),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -296/*-37*/, (Gain)(ROUNDINT(( 20.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x119), L1D_LNA_LOW, (Gain)(ROUNDINT(( 20.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x119),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -288/*-36*/, (Gain)(ROUNDINT(( 20.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x119), L1D_LNA_LOW, (Gain)(ROUNDINT(( 20.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x119),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -280/*-35*/, (Gain)(ROUNDINT(( 17.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xD9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 17.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xD9),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -272/*-34*/, (Gain)(ROUNDINT(( 17.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xD9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 17.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xD9),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -264/*-33*/, (Gain)(ROUNDINT(( 17.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xD9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 17.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xD9),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -256/*-32*/, (Gain)(ROUNDINT(( 14.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x139), L1D_LNA_LOW, (Gain)(ROUNDINT(( 14.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x139),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -248/*-31*/, (Gain)(ROUNDINT(( 14.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x139), L1D_LNA_LOW, (Gain)(ROUNDINT(( 14.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x139),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -240/*-30*/, (Gain)(ROUNDINT(( 14.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x139), L1D_LNA_LOW, (Gain)(ROUNDINT(( 14.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x139),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -232/*-29*/, (Gain)(ROUNDINT(( 11.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xF9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 11.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xF9),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -224/*-28*/, (Gain)(ROUNDINT(( 11.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xF9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 11.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xF9),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -216/*-27*/, (Gain)(ROUNDINT(( 11.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xF9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 11.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xF9),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -208/*-26*/, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -200/*-25*/, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -192/*-24*/, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -184/*-23*/, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -176/*-22*/, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -168/*-21*/, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -160/*-20*/, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -152/*-19*/, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -144/*-18*/, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -136/*-17*/, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -128/*-16*/, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -120/*-15*/, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -112/*-14*/, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -104/*-13*/, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -96/*-12*/, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -88/*-11*/, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -80/*-10*/, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -72/*-9*/, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -64/*-8*/, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -56/*-7*/, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -48/*-6*/, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -40/*-5*/, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6173*/    }
/*MT6173*/ };
/*MT6173*/ const  sL1DAGCHALDATA *const  AGC_TABLE_HAL_MATCHING_ELNA_LIST[] =
/*MT6173*/ {  0,                                                /*#FrequencyBand400  */
/*MT6173*/    &AGC_TABLE_HAL_MATCHING_ELNA,                               /* FrequencyBand850  */
/*MT6173*/    &AGC_TABLE_HAL_MATCHING_ELNA,                               /* FrequencyBand900  */
/*MT6173*/    &AGC_TABLE_HAL_MATCHING_ELNA,                               /* FrequencyBand1800 */
/*MT6173*/    &AGC_TABLE_HAL_MATCHING_ELNA,                               /* FrequencyBand1900 */
/*MT6173*/ };
/*MT6173*/    #endif
/*MT6173*/    #if IS_2G_EXTERNAL_LNA_BYPASS_SUPPORT
/*MT6173*/ const  sL1DAGCHALDATA  AGC_TABLE_HAL_ELNA_BYPASS=
/*MT6173*/ {  
/*MT6173*/    (Gain)(ROUNDINT(( 68.6-PVOFSL )*(PWRRES))),  //max_gain
/*MT6173*/    (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))),  //min_gain
/*MT6173*/    -880/*-110*/,  //max_predict_power
/*MT6173*/    -40/*-5*/,  //min_predict_power
/*MT6173*/    -86*PWRRES,  //IBBD_Pin_THRESHOLD
/*MT6173*/    -71*PWRRES,  //HRD_Pin_THRESHOLD
/*MT6173*/    {  
/*MT6173*/      {   -880/*-110*/, (Gain)(ROUNDINT(( 68.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x20E), L1D_LNA_HIGH_SENSITIVITY, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BD),  L1D_LNA_HIGH_SENSITIVITY,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -872/*-109*/, (Gain)(ROUNDINT(( 68.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x20E), L1D_LNA_HIGH_SENSITIVITY, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BD),  L1D_LNA_HIGH_SENSITIVITY,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -864/*-108*/, (Gain)(ROUNDINT(( 68.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x20E), L1D_LNA_HIGH_SENSITIVITY, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BD),  L1D_LNA_HIGH_SENSITIVITY,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -856/*-107*/, (Gain)(ROUNDINT(( 68.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x20E), L1D_LNA_HIGH_SENSITIVITY, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BD),  L1D_LNA_HIGH_SENSITIVITY,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -848/*-106*/, (Gain)(ROUNDINT(( 68.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x20E), L1D_LNA_HIGH_SENSITIVITY, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BD),  L1D_LNA_HIGH_SENSITIVITY,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -840/*-105*/, (Gain)(ROUNDINT(( 68.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x20E), L1D_LNA_HIGH_SENSITIVITY, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BD),  L1D_LNA_HIGH_SENSITIVITY,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -832/*-104*/, (Gain)(ROUNDINT(( 68.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x20E), L1D_LNA_HIGH_SENSITIVITY, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BD),  L1D_LNA_HIGH_SENSITIVITY,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -824/*-103*/, (Gain)(ROUNDINT(( 68.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x20E), L1D_LNA_HIGH_SENSITIVITY, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BD),  L1D_LNA_HIGH_SENSITIVITY,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -816/*-102*/, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x11D), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -808/*-101*/, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x11D), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -800/*-100*/, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x11D), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -792/*-99*/, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x11D), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -784/*-98*/, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x11D), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -776/*-97*/, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x11D), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -768/*-96*/, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x11D), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -760/*-95*/, (Gain)(ROUNDINT(( 50.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x10D), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -752/*-94*/, (Gain)(ROUNDINT(( 50.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x10D), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -744/*-93*/, (Gain)(ROUNDINT(( 50.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x10D), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -736/*-92*/, (Gain)(ROUNDINT(( 47.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x15D), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -728/*-91*/, (Gain)(ROUNDINT(( 47.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x15D), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -720/*-90*/, (Gain)(ROUNDINT(( 47.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x15D), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -712/*-89*/, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x11D), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -704/*-88*/, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x11D), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -696/*-87*/, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x11D), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -688/*-86*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -680/*-85*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 38.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BC),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -672/*-84*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 38.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BC),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -664/*-83*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 38.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BC),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -656/*-82*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 38.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BC),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -648/*-81*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 38.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BC),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -640/*-80*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 38.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BC),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -632/*-79*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 38.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BC),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -624/*-78*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -616/*-77*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -608/*-76*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -600/*-75*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -592/*-74*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -584/*-73*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -576/*-72*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -568/*-71*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -560/*-70*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -552/*-69*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -544/*-68*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -536/*-67*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -528/*-66*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -520/*-65*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -512/*-64*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -504/*-63*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -496/*-62*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -488/*-61*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -480/*-60*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -472/*-59*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -464/*-58*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -456/*-57*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -448/*-56*/, (Gain)(ROUNDINT(( 38.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x11C), L1D_LNA_MIDDLE, (Gain)(ROUNDINT(( 38.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x11C),  L1D_LNA_MIDDLE,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -440/*-55*/, (Gain)(ROUNDINT(( 38.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x11C), L1D_LNA_MIDDLE, (Gain)(ROUNDINT(( 38.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x11C),  L1D_LNA_MIDDLE,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -432/*-54*/, (Gain)(ROUNDINT(( 38.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x11C), L1D_LNA_MIDDLE, (Gain)(ROUNDINT(( 38.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x11C),  L1D_LNA_MIDDLE,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -424/*-53*/, (Gain)(ROUNDINT(( 35.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDC), L1D_LNA_MIDDLE, (Gain)(ROUNDINT(( 35.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDC),  L1D_LNA_MIDDLE,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -416/*-52*/, (Gain)(ROUNDINT(( 35.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDC), L1D_LNA_MIDDLE, (Gain)(ROUNDINT(( 35.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDC),  L1D_LNA_MIDDLE,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -408/*-51*/, (Gain)(ROUNDINT(( 35.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDC), L1D_LNA_MIDDLE, (Gain)(ROUNDINT(( 35.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDC),  L1D_LNA_MIDDLE,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -400/*-50*/, (Gain)(ROUNDINT(( 32.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x189), L1D_LNA_LOW, (Gain)(ROUNDINT(( 32.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x189),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -392/*-49*/, (Gain)(ROUNDINT(( 32.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x189), L1D_LNA_LOW, (Gain)(ROUNDINT(( 32.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x189),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -384/*-48*/, (Gain)(ROUNDINT(( 32.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x189), L1D_LNA_LOW, (Gain)(ROUNDINT(( 32.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x189),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -376/*-47*/, (Gain)(ROUNDINT(( 29.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x149), L1D_LNA_LOW, (Gain)(ROUNDINT(( 29.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x149),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -368/*-46*/, (Gain)(ROUNDINT(( 29.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x149), L1D_LNA_LOW, (Gain)(ROUNDINT(( 29.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x149),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -360/*-45*/, (Gain)(ROUNDINT(( 29.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x149), L1D_LNA_LOW, (Gain)(ROUNDINT(( 29.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x149),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -352/*-44*/, (Gain)(ROUNDINT(( 26.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x109), L1D_LNA_LOW, (Gain)(ROUNDINT(( 26.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x109),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -344/*-43*/, (Gain)(ROUNDINT(( 26.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x109), L1D_LNA_LOW, (Gain)(ROUNDINT(( 26.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x109),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -336/*-42*/, (Gain)(ROUNDINT(( 26.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x109), L1D_LNA_LOW, (Gain)(ROUNDINT(( 26.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x109),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -328/*-41*/, (Gain)(ROUNDINT(( 23.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x159), L1D_LNA_LOW, (Gain)(ROUNDINT(( 23.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x159),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -320/*-40*/, (Gain)(ROUNDINT(( 23.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x159), L1D_LNA_LOW, (Gain)(ROUNDINT(( 23.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x159),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -312/*-39*/, (Gain)(ROUNDINT(( 23.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x159), L1D_LNA_LOW, (Gain)(ROUNDINT(( 23.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x159),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -304/*-38*/, (Gain)(ROUNDINT(( 20.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x119), L1D_LNA_LOW, (Gain)(ROUNDINT(( 20.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x119),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -296/*-37*/, (Gain)(ROUNDINT(( 20.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x119), L1D_LNA_LOW, (Gain)(ROUNDINT(( 20.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x119),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -288/*-36*/, (Gain)(ROUNDINT(( 20.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x119), L1D_LNA_LOW, (Gain)(ROUNDINT(( 20.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x119),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -280/*-35*/, (Gain)(ROUNDINT(( 17.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xD9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 17.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xD9),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -272/*-34*/, (Gain)(ROUNDINT(( 17.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xD9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 17.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xD9),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -264/*-33*/, (Gain)(ROUNDINT(( 17.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xD9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 17.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xD9),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -256/*-32*/, (Gain)(ROUNDINT(( 14.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x139), L1D_LNA_LOW, (Gain)(ROUNDINT(( 14.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x139),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -248/*-31*/, (Gain)(ROUNDINT(( 14.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x139), L1D_LNA_LOW, (Gain)(ROUNDINT(( 14.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x139),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -240/*-30*/, (Gain)(ROUNDINT(( 14.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x139), L1D_LNA_LOW, (Gain)(ROUNDINT(( 14.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x139),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -232/*-29*/, (Gain)(ROUNDINT(( 11.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xF9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 11.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xF9),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -224/*-28*/, (Gain)(ROUNDINT(( 11.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xF9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 11.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xF9),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -216/*-27*/, (Gain)(ROUNDINT(( 11.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xF9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 11.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xF9),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -208/*-26*/, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -200/*-25*/, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -192/*-24*/, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -184/*-23*/, (Gain)(ROUNDINT(( 5.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x119), L1D_LNA_LOW_MAXPIN, (Gain)(ROUNDINT(( 5.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x119),  L1D_LNA_LOW_MAXPIN,  MML1_ELNA_MODE_BYPASS},
/*MT6173*/      {   -176/*-22*/, (Gain)(ROUNDINT(( 5.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x119), L1D_LNA_LOW_MAXPIN, (Gain)(ROUNDINT(( 5.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x119),  L1D_LNA_LOW_MAXPIN,  MML1_ELNA_MODE_BYPASS},
/*MT6173*/      {   -168/*-21*/, (Gain)(ROUNDINT(( 5.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x119), L1D_LNA_LOW_MAXPIN, (Gain)(ROUNDINT(( 5.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x119),  L1D_LNA_LOW_MAXPIN,  MML1_ELNA_MODE_BYPASS},
/*MT6173*/      {   -160/*-20*/, (Gain)(ROUNDINT(( 2.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xD9), L1D_LNA_LOW_MAXPIN, (Gain)(ROUNDINT(( 2.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xD9),  L1D_LNA_LOW_MAXPIN,  MML1_ELNA_MODE_BYPASS},
/*MT6173*/      {   -152/*-19*/, (Gain)(ROUNDINT(( 2.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xD9), L1D_LNA_LOW_MAXPIN, (Gain)(ROUNDINT(( 2.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xD9),  L1D_LNA_LOW_MAXPIN,  MML1_ELNA_MODE_BYPASS},
/*MT6173*/      {   -144/*-18*/, (Gain)(ROUNDINT(( 2.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xD9), L1D_LNA_LOW_MAXPIN, (Gain)(ROUNDINT(( 2.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xD9),  L1D_LNA_LOW_MAXPIN,  MML1_ELNA_MODE_BYPASS},
/*MT6173*/      {   -136/*-17*/, (Gain)(ROUNDINT(( -0.4-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x99), L1D_LNA_LOW_MAXPIN, (Gain)(ROUNDINT(( -0.4-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x99),  L1D_LNA_LOW_MAXPIN,  MML1_ELNA_MODE_BYPASS},
/*MT6173*/      {   -128/*-16*/, (Gain)(ROUNDINT(( -0.4-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x99), L1D_LNA_LOW_MAXPIN, (Gain)(ROUNDINT(( -0.4-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x99),  L1D_LNA_LOW_MAXPIN,  MML1_ELNA_MODE_BYPASS},
/*MT6173*/      {   -120/*-15*/, (Gain)(ROUNDINT(( -0.4-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x99), L1D_LNA_LOW_MAXPIN, (Gain)(ROUNDINT(( -0.4-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x99),  L1D_LNA_LOW_MAXPIN,  MML1_ELNA_MODE_BYPASS},
/*MT6173*/      {   -112/*-14*/, (Gain)(ROUNDINT(( -3.4-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xF9), L1D_LNA_LOW_MAXPIN, (Gain)(ROUNDINT(( -3.4-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xF9),  L1D_LNA_LOW_MAXPIN,  MML1_ELNA_MODE_BYPASS},
/*MT6173*/      {   -104/*-13*/, (Gain)(ROUNDINT(( -3.4-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xF9), L1D_LNA_LOW_MAXPIN, (Gain)(ROUNDINT(( -3.4-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xF9),  L1D_LNA_LOW_MAXPIN,  MML1_ELNA_MODE_BYPASS},
/*MT6173*/      {   -96/*-12*/, (Gain)(ROUNDINT(( -3.4-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xF9), L1D_LNA_LOW_MAXPIN, (Gain)(ROUNDINT(( -3.4-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xF9),  L1D_LNA_LOW_MAXPIN,  MML1_ELNA_MODE_BYPASS},
/*MT6173*/      {   -88/*-11*/, (Gain)(ROUNDINT(( -6.4-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9), L1D_LNA_LOW_MAXPIN, (Gain)(ROUNDINT(( -6.4-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9),  L1D_LNA_LOW_MAXPIN,  MML1_ELNA_MODE_BYPASS},
/*MT6173*/      {   -80/*-10*/, (Gain)(ROUNDINT(( -6.4-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9), L1D_LNA_LOW_MAXPIN, (Gain)(ROUNDINT(( -6.4-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9),  L1D_LNA_LOW_MAXPIN,  MML1_ELNA_MODE_BYPASS},
/*MT6173*/      {   -72/*-9*/, (Gain)(ROUNDINT(( -6.4-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9), L1D_LNA_LOW_MAXPIN, (Gain)(ROUNDINT(( -6.4-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9),  L1D_LNA_LOW_MAXPIN,  MML1_ELNA_MODE_BYPASS},
/*MT6173*/      {   -64/*-8*/, (Gain)(ROUNDINT(( -6.4-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9), L1D_LNA_LOW_MAXPIN, (Gain)(ROUNDINT(( -6.4-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9),  L1D_LNA_LOW_MAXPIN,  MML1_ELNA_MODE_BYPASS},
/*MT6173*/      {   -56/*-7*/, (Gain)(ROUNDINT(( -6.4-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9), L1D_LNA_LOW_MAXPIN, (Gain)(ROUNDINT(( -6.4-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9),  L1D_LNA_LOW_MAXPIN,  MML1_ELNA_MODE_BYPASS},
/*MT6173*/      {   -48/*-6*/, (Gain)(ROUNDINT(( -6.4-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9), L1D_LNA_LOW_MAXPIN, (Gain)(ROUNDINT(( -6.4-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9),  L1D_LNA_LOW_MAXPIN,  MML1_ELNA_MODE_BYPASS},
/*MT6173*/      {   -40/*-5*/, (Gain)(ROUNDINT(( -6.4-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9), L1D_LNA_LOW_MAXPIN, (Gain)(ROUNDINT(( -6.4-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9),  L1D_LNA_LOW_MAXPIN,  MML1_ELNA_MODE_BYPASS},
/*MT6173*/    }
/*MT6173*/ };
/*MT6173*/ const  sL1DAGCHALDATA *const  AGC_TABLE_HAL_ELNA_BYPASS_LIST[] =
/*MT6173*/ {  0,                                                       /*#FrequencyBand400  */
/*MT6173*/    &AGC_TABLE_HAL_ELNA_BYPASS,                               /* FrequencyBand850  */
/*MT6173*/    &AGC_TABLE_HAL_ELNA_BYPASS,                               /* FrequencyBand900  */
/*MT6173*/    &AGC_TABLE_HAL_ELNA_BYPASS,                               /* FrequencyBand1800 */
/*MT6173*/    &AGC_TABLE_HAL_ELNA_BYPASS,                               /* FrequencyBand1900 */
/*MT6173*/ };
/*MT6173*/ const  sL1DAGCHALDATA  AGC_TABLE_HAL_MATCHING_ELNA_BYPASS=
/*MT6173*/ {  
/*MT6173*/    (Gain)(ROUNDINT(( 68.6-PVOFSL )*(PWRRES))),  //max_gain
/*MT6173*/    (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))),  //min_gain
/*MT6173*/    -880/*-110*/,  //max_predict_power
/*MT6173*/    -40/*-5*/,  //min_predict_power
/*MT6173*/    -86*PWRRES,  //IBBD_Pin_THRESHOLD
/*MT6173*/    -71*PWRRES,  //HRD_Pin_THRESHOLD
/*MT6173*/    {  
/*MT6173*/      {   -880/*-110*/, (Gain)(ROUNDINT(( 56.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x10E), L1D_LNA_HIGH_SENSITIVITY, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -872/*-109*/, (Gain)(ROUNDINT(( 56.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x10E), L1D_LNA_HIGH_SENSITIVITY, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -864/*-108*/, (Gain)(ROUNDINT(( 56.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x10E), L1D_LNA_HIGH_SENSITIVITY, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -856/*-107*/, (Gain)(ROUNDINT(( 56.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x10E), L1D_LNA_HIGH_SENSITIVITY, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -848/*-106*/, (Gain)(ROUNDINT(( 56.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x10E), L1D_LNA_HIGH_SENSITIVITY, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -840/*-105*/, (Gain)(ROUNDINT(( 56.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x10E), L1D_LNA_HIGH_SENSITIVITY, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -832/*-104*/, (Gain)(ROUNDINT(( 56.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x10E), L1D_LNA_HIGH_SENSITIVITY, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -824/*-103*/, (Gain)(ROUNDINT(( 56.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x10E), L1D_LNA_HIGH_SENSITIVITY, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -816/*-102*/, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x11D), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -808/*-101*/, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x11D), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -800/*-100*/, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x11D), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -792/*-99*/, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x11D), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -784/*-98*/, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x11D), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -776/*-97*/, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x11D), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -768/*-96*/, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x11D), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -760/*-95*/, (Gain)(ROUNDINT(( 50.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x10D), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -752/*-94*/, (Gain)(ROUNDINT(( 50.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x10D), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -744/*-93*/, (Gain)(ROUNDINT(( 50.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x10D), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -736/*-92*/, (Gain)(ROUNDINT(( 47.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x15D), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -728/*-91*/, (Gain)(ROUNDINT(( 47.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x15D), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -720/*-90*/, (Gain)(ROUNDINT(( 47.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x15D), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -712/*-89*/, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x11D), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -704/*-88*/, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x11D), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -696/*-87*/, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x11D), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -688/*-86*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 44.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -680/*-85*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 38.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BC),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -672/*-84*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 38.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BC),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -664/*-83*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 38.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BC),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -656/*-82*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 38.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BC),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -648/*-81*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 38.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BC),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -640/*-80*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 38.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BC),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -632/*-79*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 38.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x1BC),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -624/*-78*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -616/*-77*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -608/*-76*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -600/*-75*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -592/*-74*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -584/*-73*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -576/*-72*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -568/*-71*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -560/*-70*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -552/*-69*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -544/*-68*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -536/*-67*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -528/*-66*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -520/*-65*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -512/*-64*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -504/*-63*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -496/*-62*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -488/*-61*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -480/*-60*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -472/*-59*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -464/*-58*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -456/*-57*/, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD), L1D_LNA_HIGH, (Gain)(ROUNDINT(( 41.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDD),  L1D_LNA_HIGH,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -448/*-56*/, (Gain)(ROUNDINT(( 38.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x11C), L1D_LNA_MIDDLE, (Gain)(ROUNDINT(( 38.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x11C),  L1D_LNA_MIDDLE,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -440/*-55*/, (Gain)(ROUNDINT(( 38.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x11C), L1D_LNA_MIDDLE, (Gain)(ROUNDINT(( 38.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x11C),  L1D_LNA_MIDDLE,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -432/*-54*/, (Gain)(ROUNDINT(( 38.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x11C), L1D_LNA_MIDDLE, (Gain)(ROUNDINT(( 38.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x11C),  L1D_LNA_MIDDLE,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -424/*-53*/, (Gain)(ROUNDINT(( 35.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDC), L1D_LNA_MIDDLE, (Gain)(ROUNDINT(( 35.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDC),  L1D_LNA_MIDDLE,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -416/*-52*/, (Gain)(ROUNDINT(( 35.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDC), L1D_LNA_MIDDLE, (Gain)(ROUNDINT(( 35.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDC),  L1D_LNA_MIDDLE,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -408/*-51*/, (Gain)(ROUNDINT(( 35.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDC), L1D_LNA_MIDDLE, (Gain)(ROUNDINT(( 35.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xDC),  L1D_LNA_MIDDLE,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -400/*-50*/, (Gain)(ROUNDINT(( 32.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x189), L1D_LNA_LOW, (Gain)(ROUNDINT(( 32.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x189),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -392/*-49*/, (Gain)(ROUNDINT(( 32.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x189), L1D_LNA_LOW, (Gain)(ROUNDINT(( 32.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x189),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -384/*-48*/, (Gain)(ROUNDINT(( 32.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x189), L1D_LNA_LOW, (Gain)(ROUNDINT(( 32.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x189),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -376/*-47*/, (Gain)(ROUNDINT(( 29.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x149), L1D_LNA_LOW, (Gain)(ROUNDINT(( 29.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x149),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -368/*-46*/, (Gain)(ROUNDINT(( 29.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x149), L1D_LNA_LOW, (Gain)(ROUNDINT(( 29.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x149),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -360/*-45*/, (Gain)(ROUNDINT(( 29.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x149), L1D_LNA_LOW, (Gain)(ROUNDINT(( 29.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x149),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -352/*-44*/, (Gain)(ROUNDINT(( 26.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x109), L1D_LNA_LOW, (Gain)(ROUNDINT(( 26.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x109),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -344/*-43*/, (Gain)(ROUNDINT(( 26.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x109), L1D_LNA_LOW, (Gain)(ROUNDINT(( 26.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x109),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -336/*-42*/, (Gain)(ROUNDINT(( 26.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x109), L1D_LNA_LOW, (Gain)(ROUNDINT(( 26.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x109),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -328/*-41*/, (Gain)(ROUNDINT(( 23.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x159), L1D_LNA_LOW, (Gain)(ROUNDINT(( 23.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x159),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -320/*-40*/, (Gain)(ROUNDINT(( 23.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x159), L1D_LNA_LOW, (Gain)(ROUNDINT(( 23.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x159),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -312/*-39*/, (Gain)(ROUNDINT(( 23.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x159), L1D_LNA_LOW, (Gain)(ROUNDINT(( 23.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x159),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -304/*-38*/, (Gain)(ROUNDINT(( 20.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x119), L1D_LNA_LOW, (Gain)(ROUNDINT(( 20.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x119),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -296/*-37*/, (Gain)(ROUNDINT(( 20.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x119), L1D_LNA_LOW, (Gain)(ROUNDINT(( 20.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x119),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -288/*-36*/, (Gain)(ROUNDINT(( 20.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x119), L1D_LNA_LOW, (Gain)(ROUNDINT(( 20.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x119),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -280/*-35*/, (Gain)(ROUNDINT(( 17.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xD9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 17.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xD9),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -272/*-34*/, (Gain)(ROUNDINT(( 17.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xD9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 17.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xD9),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -264/*-33*/, (Gain)(ROUNDINT(( 17.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xD9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 17.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xD9),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -256/*-32*/, (Gain)(ROUNDINT(( 14.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x139), L1D_LNA_LOW, (Gain)(ROUNDINT(( 14.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x139),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -248/*-31*/, (Gain)(ROUNDINT(( 14.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x139), L1D_LNA_LOW, (Gain)(ROUNDINT(( 14.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x139),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -240/*-30*/, (Gain)(ROUNDINT(( 14.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x139), L1D_LNA_LOW, (Gain)(ROUNDINT(( 14.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x139),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -232/*-29*/, (Gain)(ROUNDINT(( 11.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xF9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 11.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xF9),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -224/*-28*/, (Gain)(ROUNDINT(( 11.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xF9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 11.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xF9),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -216/*-27*/, (Gain)(ROUNDINT(( 11.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xF9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 11.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xF9),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -208/*-26*/, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -200/*-25*/, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -192/*-24*/, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9), L1D_LNA_LOW, (Gain)(ROUNDINT(( 8.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9),  L1D_LNA_LOW,  MML1_ELNA_MODE_ON},
/*MT6173*/      {   -184/*-23*/, (Gain)(ROUNDINT(( 5.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x119), L1D_LNA_LOW_MAXPIN, (Gain)(ROUNDINT(( 5.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x119),  L1D_LNA_LOW_MAXPIN,  MML1_ELNA_MODE_BYPASS},
/*MT6173*/      {   -176/*-22*/, (Gain)(ROUNDINT(( 5.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x119), L1D_LNA_LOW_MAXPIN, (Gain)(ROUNDINT(( 5.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x119),  L1D_LNA_LOW_MAXPIN,  MML1_ELNA_MODE_BYPASS},
/*MT6173*/      {   -168/*-21*/, (Gain)(ROUNDINT(( 5.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x119), L1D_LNA_LOW_MAXPIN, (Gain)(ROUNDINT(( 5.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x119),  L1D_LNA_LOW_MAXPIN,  MML1_ELNA_MODE_BYPASS},
/*MT6173*/      {   -160/*-20*/, (Gain)(ROUNDINT(( 2.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xD9), L1D_LNA_LOW_MAXPIN, (Gain)(ROUNDINT(( 2.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xD9),  L1D_LNA_LOW_MAXPIN,  MML1_ELNA_MODE_BYPASS},
/*MT6173*/      {   -152/*-19*/, (Gain)(ROUNDINT(( 2.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xD9), L1D_LNA_LOW_MAXPIN, (Gain)(ROUNDINT(( 2.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xD9),  L1D_LNA_LOW_MAXPIN,  MML1_ELNA_MODE_BYPASS},
/*MT6173*/      {   -144/*-18*/, (Gain)(ROUNDINT(( 2.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xD9), L1D_LNA_LOW_MAXPIN, (Gain)(ROUNDINT(( 2.6-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xD9),  L1D_LNA_LOW_MAXPIN,  MML1_ELNA_MODE_BYPASS},
/*MT6173*/      {   -136/*-17*/, (Gain)(ROUNDINT(( -0.4-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x99), L1D_LNA_LOW_MAXPIN, (Gain)(ROUNDINT(( -0.4-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x99),  L1D_LNA_LOW_MAXPIN,  MML1_ELNA_MODE_BYPASS},
/*MT6173*/      {   -128/*-16*/, (Gain)(ROUNDINT(( -0.4-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x99), L1D_LNA_LOW_MAXPIN, (Gain)(ROUNDINT(( -0.4-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x99),  L1D_LNA_LOW_MAXPIN,  MML1_ELNA_MODE_BYPASS},
/*MT6173*/      {   -120/*-15*/, (Gain)(ROUNDINT(( -0.4-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x99), L1D_LNA_LOW_MAXPIN, (Gain)(ROUNDINT(( -0.4-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0x99),  L1D_LNA_LOW_MAXPIN,  MML1_ELNA_MODE_BYPASS},
/*MT6173*/      {   -112/*-14*/, (Gain)(ROUNDINT(( -3.4-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xF9), L1D_LNA_LOW_MAXPIN, (Gain)(ROUNDINT(( -3.4-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xF9),  L1D_LNA_LOW_MAXPIN,  MML1_ELNA_MODE_BYPASS},
/*MT6173*/      {   -104/*-13*/, (Gain)(ROUNDINT(( -3.4-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xF9), L1D_LNA_LOW_MAXPIN, (Gain)(ROUNDINT(( -3.4-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xF9),  L1D_LNA_LOW_MAXPIN,  MML1_ELNA_MODE_BYPASS},
/*MT6173*/      {   -96/*-12*/, (Gain)(ROUNDINT(( -3.4-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xF9), L1D_LNA_LOW_MAXPIN, (Gain)(ROUNDINT(( -3.4-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xF9),  L1D_LNA_LOW_MAXPIN,  MML1_ELNA_MODE_BYPASS},
/*MT6173*/      {   -88/*-11*/, (Gain)(ROUNDINT(( -6.4-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9), L1D_LNA_LOW_MAXPIN, (Gain)(ROUNDINT(( -6.4-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9),  L1D_LNA_LOW_MAXPIN,  MML1_ELNA_MODE_BYPASS},
/*MT6173*/      {   -80/*-10*/, (Gain)(ROUNDINT(( -6.4-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9), L1D_LNA_LOW_MAXPIN, (Gain)(ROUNDINT(( -6.4-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9),  L1D_LNA_LOW_MAXPIN,  MML1_ELNA_MODE_BYPASS},
/*MT6173*/      {   -72/*-9*/, (Gain)(ROUNDINT(( -6.4-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9), L1D_LNA_LOW_MAXPIN, (Gain)(ROUNDINT(( -6.4-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9),  L1D_LNA_LOW_MAXPIN,  MML1_ELNA_MODE_BYPASS},
/*MT6173*/      {   -64/*-8*/, (Gain)(ROUNDINT(( -6.4-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9), L1D_LNA_LOW_MAXPIN, (Gain)(ROUNDINT(( -6.4-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9),  L1D_LNA_LOW_MAXPIN,  MML1_ELNA_MODE_BYPASS},
/*MT6173*/      {   -56/*-7*/, (Gain)(ROUNDINT(( -6.4-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9), L1D_LNA_LOW_MAXPIN, (Gain)(ROUNDINT(( -6.4-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9),  L1D_LNA_LOW_MAXPIN,  MML1_ELNA_MODE_BYPASS},
/*MT6173*/      {   -48/*-6*/, (Gain)(ROUNDINT(( -6.4-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9), L1D_LNA_LOW_MAXPIN, (Gain)(ROUNDINT(( -6.4-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9),  L1D_LNA_LOW_MAXPIN,  MML1_ELNA_MODE_BYPASS},
/*MT6173*/      {   -40/*-5*/, (Gain)(ROUNDINT(( -6.4-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9), L1D_LNA_LOW_MAXPIN, (Gain)(ROUNDINT(( -6.4-PVOFSL )*(PWRRES))), BSI_CW(0x14E, 0xB9),  L1D_LNA_LOW_MAXPIN,  MML1_ELNA_MODE_BYPASS},
/*MT6173*/    }
/*MT6173*/ };
/*MT6173*/ const  sL1DAGCHALDATA *const  AGC_TABLE_HAL_MATCHING_ELNA_BYPASS_LIST[] =
/*MT6173*/ {  0,                                                       /*#FrequencyBand400  */
/*MT6173*/    &AGC_TABLE_HAL_MATCHING_ELNA_BYPASS,                               /* FrequencyBand850  */
/*MT6173*/    &AGC_TABLE_HAL_MATCHING_ELNA_BYPASS,                               /* FrequencyBand900  */
/*MT6173*/    &AGC_TABLE_HAL_MATCHING_ELNA_BYPASS,                               /* FrequencyBand1800 */
/*MT6173*/    &AGC_TABLE_HAL_MATCHING_ELNA_BYPASS,                               /* FrequencyBand1900 */
/*MT6173*/ };
/*MT6173*/    #endif
/*MT6173*/ const RfTestCmdCalInfoV5_T L1D_RF_TST_INFO_TABLE[] = 
/*MT6173*/ {/*PWRRES:8*/
/*MT6173*/    {/************slect0***************[P]0:L1D_ELNA_IN_PATH_OFF,[D]0:L1D_ELNA_IN_PATH_OFF*/
/*MT6173*/       0,                                                             //   kal_uint8   seq_num
/*MT6173*/       {0,0,0,0,0,0},                                                 //   kal_uint16   dlpow_default <- hard code in database
/*MT6173*/       {0,0,0,0,0,0},                                                 //   kal_uint16   dlpow_lbound
/*MT6173*/       {0,0,0,0,0,0},                                                 //   kal_uint16   dlpow_hbound
/*MT6173*/       {{RX_LNA_NONE,RX_LNA_NONE,RX_LNA_NONE,RX_LNA_NONE,RX_LNA_NONE,RX_LNA_NONE},
/*MT6173*/        {RX_LNA_NONE,RX_LNA_NONE,RX_LNA_NONE,RX_LNA_NONE,RX_LNA_NONE,RX_LNA_NONE}},//   kal_uint8   lna_enum_type
/*MT6173*/       {{0,0,0,0,0,0},
/*MT6173*/        {0,0,0,0,0,0}},                                               //   kal_uint8   antenna_enable
/*MT6173*/       -288,                                                          //   kal_int16   dlpow_wcoef_default <- hard code in python
/*MT6173*/       -480,                                                          //   kal_int16   dlpow_wcoef_lbound <- hard code in python
/*MT6173*/       -160,                                                          //   kal_int16   dlpow_wcoef_hbound <- hard code in python
/*MT6173*/       {-1,-1,-1,-1,-1,-1,-1,-1},                                     //   kal_int16   wcoef_arfcn -> RUNTIME UPDATE 
/*MT6173*/       {{0,0,0,0,0,0},
/*MT6173*/        {0,0,0,0,0,0}},                                               //   kal_int16   gain_default
/*MT6173*/       {-160,
/*MT6173*/        -160},                                                        //   kal_int16   wcoef_gain_default <- hard code in python
/*MT6173*/       {NON_ELNA,NON_ELNA},                                           //   kal_uint8   elna_type
/*MT6173*/       {{0,0,0,0,0,0},
/*MT6173*/        {0,0,0,0,0,0}},                                               //   kal_int16   gain_hbound
/*MT6173*/       {{0,0,0,0,0,0},
/*MT6173*/        {0,0,0,0,0,0}},                                               //   kal_int16   gain_lbound
/*MT6173*/    },
/*MT6173*/    {/************slect1***************[P]0:L1D_ELNA_IN_PATH_OFF,[D]1:L1D_ELNA_UNUSED*/
/*MT6173*/       3,                                                             //   kal_uint8   seq_num
/*MT6173*/       {-480,-360,-280,0,0,0},                                        //   kal_uint16   dlpow_default <- hard code in database
/*MT6173*/       {-720,-448,-328,0,0,0},                                        //   kal_uint16   dlpow_lbound
/*MT6173*/       {-456,-336,-160,0,0,0},                                        //   kal_uint16   dlpow_hbound
/*MT6173*/       {{RX_LNA_HIGH,RX_LNA_MID,RX_LNA_LOW,RX_LNA_NONE,RX_LNA_NONE,RX_LNA_NONE},
/*MT6173*/        {RX_LNA_HIGH,RX_LNA_MID,RX_LNA_LOW,RX_LNA_NONE,RX_LNA_NONE,RX_LNA_NONE}},//   kal_uint8   lna_enum_type
/*MT6173*/       {{0,0,0,0,0,0},
/*MT6173*/        {1,1,1,0,0,0}},                                               //   kal_uint8   antenna_enable
/*MT6173*/       -288,                                                          //   kal_int16   dlpow_wcoef_default <- hard code in python
/*MT6173*/       -480,                                                          //   kal_int16   dlpow_wcoef_lbound <- hard code in python
/*MT6173*/       -160,                                                          //   kal_int16   dlpow_wcoef_hbound <- hard code in python
/*MT6173*/       {-1,-1,-1,-1,-1,-1,-1,-1},                                     //   kal_int16   wcoef_arfcn -> RUNTIME UPDATE 
/*MT6173*/       {{80,-16,-136,0,0,0},
/*MT6173*/        {80,-16,-136,0,0,0}},                                         //   kal_int16   gain_default
/*MT6173*/       {-160,
/*MT6173*/        -160},                                                        //   kal_int16   wcoef_gain_default <- hard code in python
/*MT6173*/       {NON_ELNA,NON_ELNA},                                           //   kal_uint8   elna_type
/*MT6173*/       {{181,61,-59,0,0,0},
/*MT6173*/        {181,61,-59,0,0,0}},                                          //   kal_int16   gain_hbound
/*MT6173*/       {{85,-35,-203,0,0,0},
/*MT6173*/        {85,-35,-203,0,0,0}},                                         //   kal_int16   gain_lbound
/*MT6173*/    },
/*MT6173*/    {/************slect2***************[P]0:L1D_ELNA_IN_PATH_OFF,[D]2:L1D_ELNA_ALYWAYS_ON*/
/*MT6173*/       4,                                                             //   kal_uint8   seq_num
/*MT6173*/       {-560,-480,-360,-280,0,0},                                     //   kal_uint16   dlpow_default <- hard code in database
/*MT6173*/       {-616,-600,-536,-400,0,0},                                     //   kal_uint16   dlpow_lbound
/*MT6173*/       {-435,-388,-341,-232,0,0},                                     //   kal_uint16   dlpow_hbound
/*MT6173*/       {{RX_LNA_HIGH,RX_LNA_HIGH,RX_LNA_MID,RX_LNA_LOW,RX_LNA_NONE,RX_LNA_NONE},
/*MT6173*/        {RX_LNA_UTRA_HIGH,RX_LNA_HIGH,RX_LNA_MID,RX_LNA_LOW,RX_LNA_NONE,RX_LNA_NONE}},//   kal_uint8   lna_enum_type
/*MT6173*/       {{0,0,0,0,0,0},
/*MT6173*/        {1,1,1,1,0,0}},                                               //   kal_uint8   antenna_enable
/*MT6173*/       -288,                                                          //   kal_int16   dlpow_wcoef_default <- hard code in python
/*MT6173*/       -480,                                                          //   kal_int16   dlpow_wcoef_lbound <- hard code in python
/*MT6173*/       -160,                                                          //   kal_int16   dlpow_wcoef_hbound <- hard code in python
/*MT6173*/       {-1,-1,-1,-1,-1,-1,-1,-1},                                     //   kal_int16   wcoef_arfcn -> RUNTIME UPDATE 
/*MT6173*/       {{80,80,-16,-136,0,0},
/*MT6173*/        {272,56,32,-112,0,0}},                                        //   kal_int16   gain_default
/*MT6173*/       {-160,
/*MT6173*/        -160},                                                        //   kal_int16   wcoef_gain_default <- hard code in python
/*MT6173*/       {NON_ELNA,ELNA_ALWAYS_ON},                                     //   kal_uint8   elna_type
/*MT6173*/       {{181,181,61,-59,0,0},
/*MT6173*/        {196,196,52,-92,0,0}},                                        //   kal_int16   gain_hbound
/*MT6173*/       {{85,85,-35,-203,0,0},
/*MT6173*/        {76,76,-68,-260,0,0}},                                        //   kal_int16   gain_lbound
/*MT6173*/    },
/*MT6173*/    {/************slect3***************[P]0:L1D_ELNA_IN_PATH_OFF,[D]3:L1D_ELNA_CAN_SWITCH*/
/*MT6173*/       5,                                                             //   kal_uint8   seq_num
/*MT6173*/       {-560,-480,-360,-280,-240,0},                                  //   kal_uint16   dlpow_default <- hard code in database
/*MT6173*/       {-640,-616,-600,-424,-304,0},                                  //   kal_uint16   dlpow_lbound
/*MT6173*/       {-483,-388,-343,-248,-131,0},                                  //   kal_uint16   dlpow_hbound
/*MT6173*/       {{RX_LNA_HIGH,RX_LNA_HIGH,RX_LNA_MID,RX_LNA_LOW,RX_LNA_LOW,RX_LNA_NONE},
/*MT6173*/        {RX_LNA_UTRA_HIGH,RX_LNA_HIGH,RX_LNA_MID,RX_LNA_LOW,RX_LNA_BYPASS_LOW,RX_LNA_NONE}},//   kal_uint8   lna_enum_type
/*MT6173*/       {{0,0,0,0,0,0},
/*MT6173*/        {1,1,1,1,1,0}},                                               //   kal_uint8   antenna_enable
/*MT6173*/       -288,                                                          //   kal_int16   dlpow_wcoef_default <- hard code in python
/*MT6173*/       -480,                                                          //   kal_int16   dlpow_wcoef_lbound <- hard code in python
/*MT6173*/       -160,                                                          //   kal_int16   dlpow_wcoef_hbound <- hard code in python
/*MT6173*/       {-1,-1,-1,-1,-1,-1,-1,-1},                                     //   kal_int16   wcoef_arfcn -> RUNTIME UPDATE 
/*MT6173*/       {{80,80,-16,-136,-136,0},
/*MT6173*/        {272,56,32,-112,-232,0}},                                     //   kal_int16   gain_default
/*MT6173*/       {-160,
/*MT6173*/        -160},                                                        //   kal_int16   wcoef_gain_default <- hard code in python
/*MT6173*/       {NON_ELNA,ELNA_BYPASS_NB_MATCH},                               //   kal_uint8   elna_type
/*MT6173*/       {{181,181,61,-59,-59,0},
/*MT6173*/        {244,100,52,-92,-188,0}},                                     //   kal_int16   gain_hbound
/*MT6173*/       {{85,85,-35,-203,-203,0},
/*MT6173*/        {124,76,-68,-164,-308,0}},                                    //   kal_int16   gain_lbound
/*MT6173*/    },
/*MT6173*/    {/************slect4***************[P]1:L1D_ELNA_UNUSED,[D]0:L1D_ELNA_IN_PATH_OFF*/
/*MT6173*/       4,                                                             //   kal_uint8   seq_num
/*MT6173*/       {-480,-360,-360,-280,0,0},                                     //   kal_uint16   dlpow_default <- hard code in database
/*MT6173*/       {-720,-448,-448,-328,0,0},                                     //   kal_uint16   dlpow_lbound
/*MT6173*/       {-456,-336,-336,-160,0,0},                                     //   kal_uint16   dlpow_hbound
/*MT6173*/       {{RX_LNA_HIGH,RX_LNA_MID,RX_LNA_MID_SAWLESS,RX_LNA_LOW,RX_LNA_NONE,RX_LNA_NONE},
/*MT6173*/        {RX_LNA_HIGH,RX_LNA_MID,RX_LNA_MID_SAWLESS,RX_LNA_LOW,RX_LNA_NONE,RX_LNA_NONE}},//   kal_uint8   lna_enum_type
/*MT6173*/       {{1,1,1,1,0,0},
/*MT6173*/        {0,0,0,0,0,0}},                                               //   kal_uint8   antenna_enable
/*MT6173*/       -288,                                                          //   kal_int16   dlpow_wcoef_default <- hard code in python
/*MT6173*/       -480,                                                          //   kal_int16   dlpow_wcoef_lbound <- hard code in python
/*MT6173*/       -160,                                                          //   kal_int16   dlpow_wcoef_hbound <- hard code in python
/*MT6173*/       {-1,-1,-1,-1,-1,-1,-1,-1},                                     //   kal_int16   wcoef_arfcn -> RUNTIME UPDATE 
/*MT6173*/       {{80,-16,-16,-136,0,0},
/*MT6173*/        {80,-16,-16,-136,0,0}},                                       //   kal_int16   gain_default
/*MT6173*/       {-160,
/*MT6173*/        -160},                                                        //   kal_int16   wcoef_gain_default <- hard code in python
/*MT6173*/       {NON_ELNA,NON_ELNA},                                           //   kal_uint8   elna_type
/*MT6173*/       {{181,61,61,-59,0,0},
/*MT6173*/        {181,61,61,-59,0,0}},                                         //   kal_int16   gain_hbound
/*MT6173*/       {{85,-35,-35,-203,0,0},
/*MT6173*/        {85,-35,-35,-203,0,0}},                                       //   kal_int16   gain_lbound
/*MT6173*/    },
/*MT6173*/    {/************slect5***************[P]1:L1D_ELNA_UNUSED,[D]1:L1D_ELNA_UNUSED*/
/*MT6173*/       4,                                                             //   kal_uint8   seq_num
/*MT6173*/       {-480,-360,-360,-280,0,0},                                     //   kal_uint16   dlpow_default <- hard code in database
/*MT6173*/       {-720,-448,-448,-328,0,0},                                     //   kal_uint16   dlpow_lbound
/*MT6173*/       {-456,-336,-336,-160,0,0},                                     //   kal_uint16   dlpow_hbound
/*MT6173*/       {{RX_LNA_HIGH,RX_LNA_MID,RX_LNA_MID_SAWLESS,RX_LNA_LOW,RX_LNA_NONE,RX_LNA_NONE},
/*MT6173*/        {RX_LNA_HIGH,RX_LNA_MID,RX_LNA_MID_SAWLESS,RX_LNA_LOW,RX_LNA_NONE,RX_LNA_NONE}},//   kal_uint8   lna_enum_type
/*MT6173*/       {{1,1,1,1,0,0},
/*MT6173*/        {1,1,0,1,0,0}},                                               //   kal_uint8   antenna_enable
/*MT6173*/       -288,                                                          //   kal_int16   dlpow_wcoef_default <- hard code in python
/*MT6173*/       -480,                                                          //   kal_int16   dlpow_wcoef_lbound <- hard code in python
/*MT6173*/       -160,                                                          //   kal_int16   dlpow_wcoef_hbound <- hard code in python
/*MT6173*/       {-1,-1,-1,-1,-1,-1,-1,-1},                                     //   kal_int16   wcoef_arfcn -> RUNTIME UPDATE 
/*MT6173*/       {{80,-16,-16,-136,0,0},
/*MT6173*/        {80,-16,-16,-136,0,0}},                                       //   kal_int16   gain_default
/*MT6173*/       {-160,
/*MT6173*/        -160},                                                        //   kal_int16   wcoef_gain_default <- hard code in python
/*MT6173*/       {NON_ELNA,NON_ELNA},                                           //   kal_uint8   elna_type
/*MT6173*/       {{181,61,61,-59,0,0},
/*MT6173*/        {181,61,61,-59,0,0}},                                         //   kal_int16   gain_hbound
/*MT6173*/       {{85,-35,-35,-203,0,0},
/*MT6173*/        {85,-35,-35,-203,0,0}},                                       //   kal_int16   gain_lbound
/*MT6173*/    },
/*MT6173*/    {/************slect6***************[P]1:L1D_ELNA_UNUSED,[D]2:L1D_ELNA_ALYWAYS_ON*/
/*MT6173*/       5,                                                             //   kal_uint8   seq_num
/*MT6173*/       {-560,-480,-360,-360,-280,0},                                  //   kal_uint16   dlpow_default <- hard code in database
/*MT6173*/       {-616,-600,-448,-448,-328,0},                                  //   kal_uint16   dlpow_lbound
/*MT6173*/       {-435,-456,-341,-336,-232,0},                                  //   kal_uint16   dlpow_hbound
/*MT6173*/       {{RX_LNA_HIGH,RX_LNA_HIGH,RX_LNA_MID,RX_LNA_MID_SAWLESS,RX_LNA_LOW,RX_LNA_NONE},
/*MT6173*/        {RX_LNA_UTRA_HIGH,RX_LNA_HIGH,RX_LNA_MID,RX_LNA_MID,RX_LNA_LOW,RX_LNA_NONE}},//   kal_uint8   lna_enum_type
/*MT6173*/       {{0,1,1,1,1,0},
/*MT6173*/        {1,1,1,0,1,0}},                                               //   kal_uint8   antenna_enable
/*MT6173*/       -288,                                                          //   kal_int16   dlpow_wcoef_default <- hard code in python
/*MT6173*/       -480,                                                          //   kal_int16   dlpow_wcoef_lbound <- hard code in python
/*MT6173*/       -160,                                                          //   kal_int16   dlpow_wcoef_hbound <- hard code in python
/*MT6173*/       {-1,-1,-1,-1,-1,-1,-1,-1},                                     //   kal_int16   wcoef_arfcn -> RUNTIME UPDATE 
/*MT6173*/       {{80,80,-16,-16,-136,0},
/*MT6173*/        {272,56,32,32,-112,0}},                                       //   kal_int16   gain_default
/*MT6173*/       {-160,
/*MT6173*/        -160},                                                        //   kal_int16   wcoef_gain_default <- hard code in python
/*MT6173*/       {NON_ELNA,ELNA_ALWAYS_ON},                                     //   kal_uint8   elna_type
/*MT6173*/       {{181,181,61,61,-59,0},
/*MT6173*/        {196,196,52,52,-92,0}},                                       //   kal_int16   gain_hbound
/*MT6173*/       {{85,85,-35,-35,-203,0},
/*MT6173*/        {76,76,-68,-68,-260,0}},                                      //   kal_int16   gain_lbound
/*MT6173*/    },
/*MT6173*/    {/************slect7***************[P]1:L1D_ELNA_UNUSED,[D]3:L1D_ELNA_CAN_SWITCH*/
/*MT6173*/       6,                                                             //   kal_uint8   seq_num
/*MT6173*/       {-560,-480,-360,-360,-280,-240},                               //   kal_uint16   dlpow_default <- hard code in database
/*MT6173*/       {-640,-616,-448,-448,-328,-304},                               //   kal_uint16   dlpow_lbound
/*MT6173*/       {-483,-456,-343,-336,-248,-131},                               //   kal_uint16   dlpow_hbound
/*MT6173*/       {{RX_LNA_HIGH,RX_LNA_HIGH,RX_LNA_MID,RX_LNA_MID_SAWLESS,RX_LNA_LOW,RX_LNA_LOW},
/*MT6173*/        {RX_LNA_UTRA_HIGH,RX_LNA_HIGH,RX_LNA_MID,RX_LNA_MID,RX_LNA_LOW,RX_LNA_BYPASS_LOW}},//   kal_uint8   lna_enum_type
/*MT6173*/       {{0,1,1,1,1,0},
/*MT6173*/        {1,1,1,0,1,1}},                                               //   kal_uint8   antenna_enable
/*MT6173*/       -288,                                                          //   kal_int16   dlpow_wcoef_default <- hard code in python
/*MT6173*/       -480,                                                          //   kal_int16   dlpow_wcoef_lbound <- hard code in python
/*MT6173*/       -160,                                                          //   kal_int16   dlpow_wcoef_hbound <- hard code in python
/*MT6173*/       {-1,-1,-1,-1,-1,-1,-1,-1},                                     //   kal_int16   wcoef_arfcn -> RUNTIME UPDATE 
/*MT6173*/       {{80,80,-16,-16,-136,-136},
/*MT6173*/        {272,56,32,32,-112,-232}},                                    //   kal_int16   gain_default
/*MT6173*/       {-160,
/*MT6173*/        -160},                                                        //   kal_int16   wcoef_gain_default <- hard code in python
/*MT6173*/       {NON_ELNA,ELNA_BYPASS_NB_MATCH},                               //   kal_uint8   elna_type
/*MT6173*/       {{181,181,61,61,-59,-59},
/*MT6173*/        {244,100,52,52,-92,-188}},                                    //   kal_int16   gain_hbound
/*MT6173*/       {{85,85,-35,-35,-203,-203},
/*MT6173*/        {124,76,-68,-68,-164,-308}},                                  //   kal_int16   gain_lbound
/*MT6173*/    },
/*MT6173*/    {/************slect8***************[P]2:L1D_ELNA_ALYWAYS_ON,[D]0:L1D_ELNA_IN_PATH_OFF*/
/*MT6173*/       4,                                                             //   kal_uint8   seq_num
/*MT6173*/       {-560,-480,-360,-280,0,0},                                     //   kal_uint16   dlpow_default <- hard code in database
/*MT6173*/       {-616,-600,-536,-400,0,0},                                     //   kal_uint16   dlpow_lbound
/*MT6173*/       {-435,-388,-341,-232,0,0},                                     //   kal_uint16   dlpow_hbound
/*MT6173*/       {{RX_LNA_UTRA_HIGH,RX_LNA_HIGH,RX_LNA_MID,RX_LNA_LOW,RX_LNA_NONE,RX_LNA_NONE},
/*MT6173*/        {RX_LNA_HIGH,RX_LNA_HIGH,RX_LNA_MID,RX_LNA_LOW,RX_LNA_NONE,RX_LNA_NONE}},//   kal_uint8   lna_enum_type
/*MT6173*/       {{1,1,1,1,0,0},
/*MT6173*/        {0,0,0,0,0,0}},                                               //   kal_uint8   antenna_enable
/*MT6173*/       -288,                                                          //   kal_int16   dlpow_wcoef_default <- hard code in python
/*MT6173*/       -480,                                                          //   kal_int16   dlpow_wcoef_lbound <- hard code in python
/*MT6173*/       -160,                                                          //   kal_int16   dlpow_wcoef_hbound <- hard code in python
/*MT6173*/       {-1,-1,-1,-1,-1,-1,-1,-1},                                     //   kal_int16   wcoef_arfcn -> RUNTIME UPDATE 
/*MT6173*/       {{272,56,32,-112,0,0},
/*MT6173*/        {80,80,-16,-136,0,0}},                                        //   kal_int16   gain_default
/*MT6173*/       {-160,
/*MT6173*/        -160},                                                        //   kal_int16   wcoef_gain_default <- hard code in python
/*MT6173*/       {ELNA_ALWAYS_ON,NON_ELNA},                                     //   kal_uint8   elna_type
/*MT6173*/       {{196,196,52,-92,0,0},
/*MT6173*/        {181,181,61,-59,0,0}},                                        //   kal_int16   gain_hbound
/*MT6173*/       {{76,76,-68,-260,0,0},
/*MT6173*/        {85,85,-35,-203,0,0}},                                        //   kal_int16   gain_lbound
/*MT6173*/    },
/*MT6173*/    {/************slect9***************[P]2:L1D_ELNA_ALYWAYS_ON,[D]1:L1D_ELNA_UNUSED*/
/*MT6173*/       4,                                                             //   kal_uint8   seq_num
/*MT6173*/       {-560,-480,-360,-280,0,0},                                     //   kal_uint16   dlpow_default <- hard code in database
/*MT6173*/       {-616,-600,-448,-328,0,0},                                     //   kal_uint16   dlpow_lbound
/*MT6173*/       {-435,-456,-341,-232,0,0},                                     //   kal_uint16   dlpow_hbound
/*MT6173*/       {{RX_LNA_UTRA_HIGH,RX_LNA_HIGH,RX_LNA_MID,RX_LNA_LOW,RX_LNA_NONE,RX_LNA_NONE},
/*MT6173*/        {RX_LNA_HIGH,RX_LNA_HIGH,RX_LNA_MID,RX_LNA_LOW,RX_LNA_NONE,RX_LNA_NONE}},//   kal_uint8   lna_enum_type
/*MT6173*/       {{1,1,1,1,0,0},
/*MT6173*/        {0,1,1,1,0,0}},                                               //   kal_uint8   antenna_enable
/*MT6173*/       -288,                                                          //   kal_int16   dlpow_wcoef_default <- hard code in python
/*MT6173*/       -480,                                                          //   kal_int16   dlpow_wcoef_lbound <- hard code in python
/*MT6173*/       -160,                                                          //   kal_int16   dlpow_wcoef_hbound <- hard code in python
/*MT6173*/       {-1,-1,-1,-1,-1,-1,-1,-1},                                     //   kal_int16   wcoef_arfcn -> RUNTIME UPDATE 
/*MT6173*/       {{272,56,32,-112,0,0},
/*MT6173*/        {80,80,-16,-136,0,0}},                                        //   kal_int16   gain_default
/*MT6173*/       {-160,
/*MT6173*/        -160},                                                        //   kal_int16   wcoef_gain_default <- hard code in python
/*MT6173*/       {ELNA_ALWAYS_ON,NON_ELNA},                                     //   kal_uint8   elna_type
/*MT6173*/       {{196,196,52,-92,0,0},
/*MT6173*/        {181,181,61,-59,0,0}},                                        //   kal_int16   gain_hbound
/*MT6173*/       {{76,76,-68,-260,0,0},
/*MT6173*/        {85,85,-35,-203,0,0}},                                        //   kal_int16   gain_lbound
/*MT6173*/    },
/*MT6173*/    {/************slect10***************[P]2:L1D_ELNA_ALYWAYS_ON,[D]2:L1D_ELNA_ALYWAYS_ON*/
/*MT6173*/       4,                                                             //   kal_uint8   seq_num
/*MT6173*/       {-560,-480,-360,-280,0,0},                                     //   kal_uint16   dlpow_default <- hard code in database
/*MT6173*/       {-616,-600,-536,-400,0,0},                                     //   kal_uint16   dlpow_lbound
/*MT6173*/       {-435,-388,-341,-232,0,0},                                     //   kal_uint16   dlpow_hbound
/*MT6173*/       {{RX_LNA_UTRA_HIGH,RX_LNA_HIGH,RX_LNA_MID,RX_LNA_LOW,RX_LNA_NONE,RX_LNA_NONE},
/*MT6173*/        {RX_LNA_UTRA_HIGH,RX_LNA_HIGH,RX_LNA_MID,RX_LNA_LOW,RX_LNA_NONE,RX_LNA_NONE}},//   kal_uint8   lna_enum_type
/*MT6173*/       {{1,1,1,1,0,0},
/*MT6173*/        {1,1,1,1,0,0}},                                               //   kal_uint8   antenna_enable
/*MT6173*/       -288,                                                          //   kal_int16   dlpow_wcoef_default <- hard code in python
/*MT6173*/       -480,                                                          //   kal_int16   dlpow_wcoef_lbound <- hard code in python
/*MT6173*/       -160,                                                          //   kal_int16   dlpow_wcoef_hbound <- hard code in python
/*MT6173*/       {-1,-1,-1,-1,-1,-1,-1,-1},                                     //   kal_int16   wcoef_arfcn -> RUNTIME UPDATE 
/*MT6173*/       {{272,56,32,-112,0,0},
/*MT6173*/        {272,56,32,-112,0,0}},                                        //   kal_int16   gain_default
/*MT6173*/       {-160,
/*MT6173*/        -160},                                                        //   kal_int16   wcoef_gain_default <- hard code in python
/*MT6173*/       {ELNA_ALWAYS_ON,ELNA_ALWAYS_ON},                               //   kal_uint8   elna_type
/*MT6173*/       {{196,196,52,-92,0,0},
/*MT6173*/        {196,196,52,-92,0,0}},                                        //   kal_int16   gain_hbound
/*MT6173*/       {{76,76,-68,-260,0,0},
/*MT6173*/        {76,76,-68,-260,0,0}},                                        //   kal_int16   gain_lbound
/*MT6173*/    },
/*MT6173*/    {/************slect11***************[P]2:L1D_ELNA_ALYWAYS_ON,[D]3:L1D_ELNA_CAN_SWITCH*/
/*MT6173*/       5,                                                             //   kal_uint8   seq_num
/*MT6173*/       {-560,-480,-360,-280,-240,0},                                  //   kal_uint16   dlpow_default <- hard code in database
/*MT6173*/       {-616,-600,-536,-400,-304,0},                                  //   kal_uint16   dlpow_lbound
/*MT6173*/       {-483,-388,-343,-248,-131,0},                                  //   kal_uint16   dlpow_hbound
/*MT6173*/       {{RX_LNA_UTRA_HIGH,RX_LNA_HIGH,RX_LNA_MID,RX_LNA_LOW,RX_LNA_LOW,RX_LNA_NONE},
/*MT6173*/        {RX_LNA_UTRA_HIGH,RX_LNA_HIGH,RX_LNA_MID,RX_LNA_LOW,RX_LNA_BYPASS_LOW,RX_LNA_NONE}},//   kal_uint8   lna_enum_type
/*MT6173*/       {{1,1,1,1,0,0},
/*MT6173*/        {1,1,1,1,1,0}},                                               //   kal_uint8   antenna_enable
/*MT6173*/       -288,                                                          //   kal_int16   dlpow_wcoef_default <- hard code in python
/*MT6173*/       -480,                                                          //   kal_int16   dlpow_wcoef_lbound <- hard code in python
/*MT6173*/       -160,                                                          //   kal_int16   dlpow_wcoef_hbound <- hard code in python
/*MT6173*/       {-1,-1,-1,-1,-1,-1,-1,-1},                                     //   kal_int16   wcoef_arfcn -> RUNTIME UPDATE 
/*MT6173*/       {{272,56,32,-112,-112,0},
/*MT6173*/        {272,56,32,-112,-232,0}},                                     //   kal_int16   gain_default
/*MT6173*/       {-160,
/*MT6173*/        -160},                                                        //   kal_int16   wcoef_gain_default <- hard code in python
/*MT6173*/       {ELNA_ALWAYS_ON,ELNA_BYPASS_NB_MATCH},                         //   kal_uint8   elna_type
/*MT6173*/       {{196,196,52,-92,-92,0},
/*MT6173*/        {244,100,52,-92,-188,0}},                                     //   kal_int16   gain_hbound
/*MT6173*/       {{76,76,-68,-260,-260,0},
/*MT6173*/        {124,76,-68,-164,-308,0}},                                    //   kal_int16   gain_lbound
/*MT6173*/    },
/*MT6173*/    {/************slect12***************[P]3:L1D_ELNA_CAN_SWITCH,[D]0:L1D_ELNA_IN_PATH_OFF*/
/*MT6173*/       5,                                                             //   kal_uint8   seq_num
/*MT6173*/       {-560,-480,-360,-280,-240,0},                                  //   kal_uint16   dlpow_default <- hard code in database
/*MT6173*/       {-640,-616,-600,-424,-304,0},                                  //   kal_uint16   dlpow_lbound
/*MT6173*/       {-483,-388,-343,-248,-131,0},                                  //   kal_uint16   dlpow_hbound
/*MT6173*/       {{RX_LNA_UTRA_HIGH,RX_LNA_HIGH,RX_LNA_MID,RX_LNA_LOW,RX_LNA_BYPASS_LOW,RX_LNA_NONE},
/*MT6173*/        {RX_LNA_HIGH,RX_LNA_HIGH,RX_LNA_MID,RX_LNA_LOW,RX_LNA_LOW,RX_LNA_NONE}},//   kal_uint8   lna_enum_type
/*MT6173*/       {{1,1,1,1,1,0},
/*MT6173*/        {0,0,0,0,0,0}},                                               //   kal_uint8   antenna_enable
/*MT6173*/       -288,                                                          //   kal_int16   dlpow_wcoef_default <- hard code in python
/*MT6173*/       -480,                                                          //   kal_int16   dlpow_wcoef_lbound <- hard code in python
/*MT6173*/       -160,                                                          //   kal_int16   dlpow_wcoef_hbound <- hard code in python
/*MT6173*/       {-1,-1,-1,-1,-1,-1,-1,-1},                                     //   kal_int16   wcoef_arfcn -> RUNTIME UPDATE 
/*MT6173*/       {{272,56,32,-112,-232,0},
/*MT6173*/        {80,80,-16,-136,-136,0}},                                     //   kal_int16   gain_default
/*MT6173*/       {-160,
/*MT6173*/        -160},                                                        //   kal_int16   wcoef_gain_default <- hard code in python
/*MT6173*/       {ELNA_BYPASS_NB_MATCH,NON_ELNA},                               //   kal_uint8   elna_type
/*MT6173*/       {{244,100,52,-92,-188,0},
/*MT6173*/        {181,181,61,-59,-59,0}},                                      //   kal_int16   gain_hbound
/*MT6173*/       {{124,76,-68,-164,-308,0},
/*MT6173*/        {85,85,-35,-203,-203,0}},                                     //   kal_int16   gain_lbound
/*MT6173*/    },
/*MT6173*/    {/************slect13***************[P]3:L1D_ELNA_CAN_SWITCH,[D]1:L1D_ELNA_UNUSED*/
/*MT6173*/       5,                                                             //   kal_uint8   seq_num
/*MT6173*/       {-560,-480,-360,-280,-240,0},                                  //   kal_uint16   dlpow_default <- hard code in database
/*MT6173*/       {-640,-616,-448,-328,-304,0},                                  //   kal_uint16   dlpow_lbound
/*MT6173*/       {-483,-456,-343,-248,-131,0},                                  //   kal_uint16   dlpow_hbound
/*MT6173*/       {{RX_LNA_UTRA_HIGH,RX_LNA_HIGH,RX_LNA_MID,RX_LNA_LOW,RX_LNA_BYPASS_LOW,RX_LNA_NONE},
/*MT6173*/        {RX_LNA_HIGH,RX_LNA_HIGH,RX_LNA_MID,RX_LNA_LOW,RX_LNA_LOW,RX_LNA_NONE}},//   kal_uint8   lna_enum_type
/*MT6173*/       {{1,1,1,1,1,0},
/*MT6173*/        {0,1,1,1,0,0}},                                               //   kal_uint8   antenna_enable
/*MT6173*/       -288,                                                          //   kal_int16   dlpow_wcoef_default <- hard code in python
/*MT6173*/       -480,                                                          //   kal_int16   dlpow_wcoef_lbound <- hard code in python
/*MT6173*/       -160,                                                          //   kal_int16   dlpow_wcoef_hbound <- hard code in python
/*MT6173*/       {-1,-1,-1,-1,-1,-1,-1,-1},                                     //   kal_int16   wcoef_arfcn -> RUNTIME UPDATE 
/*MT6173*/       {{272,56,32,-112,-232,0},
/*MT6173*/        {80,80,-16,-136,-136,0}},                                     //   kal_int16   gain_default
/*MT6173*/       {-160,
/*MT6173*/        -160},                                                        //   kal_int16   wcoef_gain_default <- hard code in python
/*MT6173*/       {ELNA_BYPASS_NB_MATCH,NON_ELNA},                               //   kal_uint8   elna_type
/*MT6173*/       {{244,100,52,-92,-188,0},
/*MT6173*/        {181,181,61,-59,-59,0}},                                      //   kal_int16   gain_hbound
/*MT6173*/       {{124,76,-68,-164,-308,0},
/*MT6173*/        {85,85,-35,-203,-203,0}},                                     //   kal_int16   gain_lbound
/*MT6173*/    },
/*MT6173*/    {/************slect14***************[P]3:L1D_ELNA_CAN_SWITCH,[D]2:L1D_ELNA_ALYWAYS_ON*/
/*MT6173*/       5,                                                             //   kal_uint8   seq_num
/*MT6173*/       {-560,-480,-360,-280,-240,0},                                  //   kal_uint16   dlpow_default <- hard code in database
/*MT6173*/       {-616,-600,-536,-400,-304,0},                                  //   kal_uint16   dlpow_lbound
/*MT6173*/       {-483,-388,-343,-248,-131,0},                                  //   kal_uint16   dlpow_hbound
/*MT6173*/       {{RX_LNA_UTRA_HIGH,RX_LNA_HIGH,RX_LNA_MID,RX_LNA_LOW,RX_LNA_BYPASS_LOW,RX_LNA_NONE},
/*MT6173*/        {RX_LNA_UTRA_HIGH,RX_LNA_HIGH,RX_LNA_MID,RX_LNA_LOW,RX_LNA_LOW,RX_LNA_NONE}},//   kal_uint8   lna_enum_type
/*MT6173*/       {{1,1,1,1,1,0},
/*MT6173*/        {1,1,1,1,0,0}},                                               //   kal_uint8   antenna_enable
/*MT6173*/       -288,                                                          //   kal_int16   dlpow_wcoef_default <- hard code in python
/*MT6173*/       -480,                                                          //   kal_int16   dlpow_wcoef_lbound <- hard code in python
/*MT6173*/       -160,                                                          //   kal_int16   dlpow_wcoef_hbound <- hard code in python
/*MT6173*/       {-1,-1,-1,-1,-1,-1,-1,-1},                                     //   kal_int16   wcoef_arfcn -> RUNTIME UPDATE 
/*MT6173*/       {{272,56,32,-112,-232,0},
/*MT6173*/        {272,56,32,-112,-112,0}},                                     //   kal_int16   gain_default
/*MT6173*/       {-160,
/*MT6173*/        -160},                                                        //   kal_int16   wcoef_gain_default <- hard code in python
/*MT6173*/       {ELNA_BYPASS_NB_MATCH,ELNA_ALWAYS_ON},                         //   kal_uint8   elna_type
/*MT6173*/       {{244,100,52,-92,-188,0},
/*MT6173*/        {196,196,52,-92,-92,0}},                                      //   kal_int16   gain_hbound
/*MT6173*/       {{124,76,-68,-164,-308,0},
/*MT6173*/        {76,76,-68,-260,-260,0}},                                     //   kal_int16   gain_lbound
/*MT6173*/    },
/*MT6173*/    {/************slect15***************[P]3:L1D_ELNA_CAN_SWITCH,[D]3:L1D_ELNA_CAN_SWITCH*/
/*MT6173*/       5,                                                             //   kal_uint8   seq_num
/*MT6173*/       {-560,-480,-360,-280,-240,0},                                  //   kal_uint16   dlpow_default <- hard code in database
/*MT6173*/       {-640,-616,-600,-424,-304,0},                                  //   kal_uint16   dlpow_lbound
/*MT6173*/       {-483,-388,-343,-248,-131,0},                                  //   kal_uint16   dlpow_hbound
/*MT6173*/       {{RX_LNA_UTRA_HIGH,RX_LNA_HIGH,RX_LNA_MID,RX_LNA_LOW,RX_LNA_BYPASS_LOW,RX_LNA_NONE},
/*MT6173*/        {RX_LNA_UTRA_HIGH,RX_LNA_HIGH,RX_LNA_MID,RX_LNA_LOW,RX_LNA_BYPASS_LOW,RX_LNA_NONE}},//   kal_uint8   lna_enum_type
/*MT6173*/       {{1,1,1,1,1,0},
/*MT6173*/        {1,1,1,1,1,0}},                                               //   kal_uint8   antenna_enable
/*MT6173*/       -288,                                                          //   kal_int16   dlpow_wcoef_default <- hard code in python
/*MT6173*/       -480,                                                          //   kal_int16   dlpow_wcoef_lbound <- hard code in python
/*MT6173*/       -160,                                                          //   kal_int16   dlpow_wcoef_hbound <- hard code in python
/*MT6173*/       {-1,-1,-1,-1,-1,-1,-1,-1},                                     //   kal_int16   wcoef_arfcn -> RUNTIME UPDATE 
/*MT6173*/       {{272,56,32,-112,-232,0},
/*MT6173*/        {272,56,32,-112,-232,0}},                                     //   kal_int16   gain_default
/*MT6173*/       {-160,
/*MT6173*/        -160},                                                        //   kal_int16   wcoef_gain_default <- hard code in python
/*MT6173*/       {ELNA_BYPASS_NB_MATCH,ELNA_BYPASS_NB_MATCH},                   //   kal_uint8   elna_type
/*MT6173*/       {{244,100,52,-92,-188,0},
/*MT6173*/        {244,100,52,-92,-188,0}},                                     //   kal_int16   gain_hbound
/*MT6173*/       {{124,76,-68,-164,-308,0},
/*MT6173*/        {124,76,-68,-164,-308,0}},                                    //   kal_int16   gain_lbound
/*MT6173*/    },
/*MT6173*/ };
/*MT6173*/ 
/*MT6173*/ const unsigned short L1D_RF_TST_INFO_ELNA_MAPPING_TABLE[4][4] =  // need follow the value of enum L1D_ELNA_USAGE
/*MT6173*/ {
/*MT6173*/    {0 /*[P]0:L1D_ELNA_IN_PATH_OFF,[D]0:L1D_ELNA_IN_PATH_OFF*/,1 /*[P]0:L1D_ELNA_IN_PATH_OFF,[D]1:L1D_ELNA_UNUSED*/,2 /*[P]0:L1D_ELNA_IN_PATH_OFF,[D]2:L1D_ELNA_ALYWAYS_ON*/,3 /*[P]0:L1D_ELNA_IN_PATH_OFF,[D]3:L1D_ELNA_CAN_SWITCH*/},
/*MT6173*/    {4 /*[P]1:L1D_ELNA_UNUSED,[D]0:L1D_ELNA_IN_PATH_OFF*/,5 /*[P]1:L1D_ELNA_UNUSED,[D]1:L1D_ELNA_UNUSED*/,6 /*[P]1:L1D_ELNA_UNUSED,[D]2:L1D_ELNA_ALYWAYS_ON*/,7 /*[P]1:L1D_ELNA_UNUSED,[D]3:L1D_ELNA_CAN_SWITCH*/},
/*MT6173*/    {8 /*[P]2:L1D_ELNA_ALYWAYS_ON,[D]0:L1D_ELNA_IN_PATH_OFF*/,9 /*[P]2:L1D_ELNA_ALYWAYS_ON,[D]1:L1D_ELNA_UNUSED*/,10 /*[P]2:L1D_ELNA_ALYWAYS_ON,[D]2:L1D_ELNA_ALYWAYS_ON*/,11 /*[P]2:L1D_ELNA_ALYWAYS_ON,[D]3:L1D_ELNA_CAN_SWITCH*/},
/*MT6173*/    {12 /*[P]3:L1D_ELNA_CAN_SWITCH,[D]0:L1D_ELNA_IN_PATH_OFF*/,13 /*[P]3:L1D_ELNA_CAN_SWITCH,[D]1:L1D_ELNA_UNUSED*/,14 /*[P]3:L1D_ELNA_CAN_SWITCH,[D]2:L1D_ELNA_ALYWAYS_ON*/,15 /*[P]3:L1D_ELNA_CAN_SWITCH,[D]3:L1D_ELNA_CAN_SWITCH*/},
/*MT6173*/ };
/*MT6173*/ const unsigned short L1D_RF_TST_INFO_WCOEF_ARFCN[FrequencyBandCount][8] =  
/*MT6173*/ {  { -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1},                               /*#FrequencyBand400  */
/*MT6173*/    {204,  -1,  -1,  -1,  -1,  -1,  -1,  -1},                               /* FrequencyBand850  */
/*MT6173*/    { 39,  40,  -1,  -1,  -1,  -1,  -1,  -1},                               /* FrequencyBand900  */
/*MT6173*/    {536, 586, 636, 685, 736, 786, 836, 874},   /* FrequencyBand1800 */
/*MT6173*/    {536, 586, 645, 686, 736, 786,  -1,  -1},   /* FrequencyBand1900 */
/*MT6173*/ };
   #endif /*#if IS_2G_RXD_SUPPORT*/
#endif

#if IS_2G_RXD_SUPPORT
/*HAL*/ void L1D_RF_AGC_TABLE_HAL_SELECT(int rf_band, int arfcn, const sL1DAGCHALDATA **agcptr_P, const sL1DAGCHALDATA **agcptr_D)
/*HAL*/ {
/*HAL*/    unsigned short   elna_type_PRX        = L1D_RF_Check_If_ExternalLNA( rf_band );
/*HAL*/    unsigned short   elna_type_DRX        = L1D_RF_Check_If_ExternalLNA_RXD( rf_band );
/*HAL*/    int              need_matching_eLNA_gain =false;
/*HAL*/ 
/*HAL*/    if (l1d_rf.rxd_mode==RXD_MODE_RXD)
/*HAL*/    {
/*HAL*/       if (elna_type_PRX==L1D_ELNA_UNUSED && elna_type_DRX!=L1D_ELNA_UNUSED)
/*HAL*/       {
/*HAL*/          need_matching_eLNA_gain = true;
/*HAL*/       }
/*HAL*/       else if (elna_type_PRX!=L1D_ELNA_UNUSED && elna_type_DRX==L1D_ELNA_UNUSED)
/*HAL*/       {
/*HAL*/          need_matching_eLNA_gain = true;
/*HAL*/       }
/*HAL*/       else 
/*HAL*/       {
/*HAL*/          need_matching_eLNA_gain = false;//both ELNA or both non-ELNA for data
/*HAL*/       }
/*HAL*/    }
/*HAL*/    else
/*HAL*/    {
/*HAL*/       need_matching_eLNA_gain = false;
/*HAL*/    }
/*HAL*/    //PRX
/*HAL*/    switch( elna_type_PRX )
/*HAL*/    {  
/*HAL*/       case L1D_ELNA_UNUSED :
/*HAL*/       {   *agcptr_P = AGC_TABLE_HAL_LIST[rf_band];
/*HAL*/           break;
/*HAL*/       }
/*HAL*/       case L1D_ELNA_ALYWAYS_ON :
/*HAL*/       {   *agcptr_P =  (need_matching_eLNA_gain == true) ? AGC_TABLE_HAL_MATCHING_ELNA_LIST[rf_band] : AGC_TABLE_HAL_ELNA_LIST[rf_band];
/*HAL*/           break;
/*HAL*/       }
/*HAL*/       case L1D_ELNA_CAN_SWITCH :    //narrow band matching  13.5dB
/*HAL*/       {   *agcptr_P =  (need_matching_eLNA_gain == true) ? AGC_TABLE_HAL_MATCHING_ELNA_BYPASS_LIST[rf_band] : AGC_TABLE_HAL_ELNA_BYPASS_LIST[rf_band];
/*HAL*/           break;
/*HAL*/       }
/*HAL*/    #if (defined __MD95__)  
/*HAL*/       case L1D_ELNA_CAN_SWITCH_WB : //wide band matching    13.5dB  
/*HAL*/       {   *agcptr_P =  (need_matching_eLNA_gain == true) ? AGC_TABLE_HAL_MATCHING_ELNA_BYPASS_WIDE_BAND_MATCHING_LIST[rf_band] : AGC_TABLE_HAL_ELNA_BYPASS_WIDE_BAND_MATCHING_LIST[rf_band];
/*HAL*/           break;
/*HAL*/       }
/*HAL*/       case L1D_ELNA_18DB_CAN_SWITCH :    //narrow band matching  18dB
/*HAL*/       {   *agcptr_P =  (need_matching_eLNA_gain == true) ? AGC_TABLE_HAL_MATCHING_ELNA_18dB_BYPASS_LIST[rf_band] : AGC_TABLE_HAL_ELNA_18dB_BYPASS_LIST[rf_band];
/*HAL*/           break;
/*HAL*/       }
/*HAL*/       case L1D_ELNA_18DB_CAN_SWITCH_WB : //wide band matching    18dB   
/*HAL*/       {   *agcptr_P =  (need_matching_eLNA_gain == true) ? AGC_TABLE_HAL_MATCHING_ELNA_18dB_BYPASS_WIDE_BAND_MATCHING_LIST[rf_band] : AGC_TABLE_HAL_ELNA_18dB_BYPASS_WIDE_BAND_MATCHING_LIST[rf_band];
/*HAL*/           break;
/*HAL*/       }
/*HAL*/    #endif
/*HAL*/       default:
/*HAL*/       {   ASSERT(0); //table is not define!
/*HAL*/       }
/*HAL*/    }
/*HAL*/    //DRX
/*HAL*/    switch( elna_type_DRX )
/*HAL*/    {  
/*HAL*/       case L1D_ELNA_UNUSED :
/*HAL*/       {   *agcptr_D = AGC_TABLE_HAL_LIST[rf_band];
/*HAL*/           break;
/*HAL*/       }
/*HAL*/       case L1D_ELNA_ALYWAYS_ON :
/*HAL*/       {   *agcptr_D =  (need_matching_eLNA_gain == true) ? AGC_TABLE_HAL_MATCHING_ELNA_LIST[rf_band] : AGC_TABLE_HAL_ELNA_LIST[rf_band];
/*HAL*/           break;
/*HAL*/       }
/*HAL*/       case L1D_ELNA_CAN_SWITCH :    //narrow band matching  13.5dB
/*HAL*/       {   *agcptr_D =  (need_matching_eLNA_gain == true) ? AGC_TABLE_HAL_MATCHING_ELNA_BYPASS_LIST[rf_band] : AGC_TABLE_HAL_ELNA_BYPASS_LIST[rf_band];
/*HAL*/           break;
/*HAL*/       }
/*HAL*/    #if (defined __MD95__)  
/*HAL*/       case L1D_ELNA_CAN_SWITCH_WB : //wide band matching    13.5dB  
/*HAL*/       {   *agcptr_D =  (need_matching_eLNA_gain == true) ? AGC_TABLE_HAL_MATCHING_ELNA_BYPASS_WIDE_BAND_MATCHING_LIST[rf_band] : AGC_TABLE_HAL_ELNA_BYPASS_WIDE_BAND_MATCHING_LIST[rf_band];
/*HAL*/           break;
/*HAL*/       }
/*HAL*/       case L1D_ELNA_18DB_CAN_SWITCH :    //narrow band matching  18dB
/*HAL*/       {   *agcptr_D =  (need_matching_eLNA_gain == true) ? AGC_TABLE_HAL_MATCHING_ELNA_18dB_BYPASS_LIST[rf_band] : AGC_TABLE_HAL_ELNA_18dB_BYPASS_LIST[rf_band];
/*HAL*/           break;
/*HAL*/       }
/*HAL*/       case L1D_ELNA_18DB_CAN_SWITCH_WB : //wide band matching    18dB   
/*HAL*/       {   *agcptr_D =  (need_matching_eLNA_gain == true) ? AGC_TABLE_HAL_MATCHING_ELNA_18dB_BYPASS_WIDE_BAND_MATCHING_LIST[rf_band] : AGC_TABLE_HAL_ELNA_18dB_BYPASS_WIDE_BAND_MATCHING_LIST[rf_band];
/*HAL*/           break;
/*HAL*/       }
/*HAL*/    #endif
/*HAL*/       default:
/*HAL*/       {   ASSERT(0); //table is not define!
/*HAL*/       }
/*HAL*/    }
/*HAL*/ }
/*HAL*/ L1D_RX_GAIN L1D_RF_GetGainSetting_HAL( int rf_band, int arfcn, L1D_RX_POWER predict_power, long *gain_settingPRX, long *gain_settingDRX )
/*HAL*/ {
/*HAL*/    L1D_RX_GAIN               real_gain;
/*HAL*/    L1D_RX_SETTING            setting;
/*HAL*/    L1D_RX_PATHLOSS           lna_path_loss;
/*HAL*/    const sL1DAGCHALSETTING   *agcptr_PRX, *agcptr_DRX;
/*HAL*/    const sL1DAGCHALDATA      *fullagcptr_PRX, *fullagcptr_DRX;
/*HAL*/    sLNAGAINOFFSET            *lnaptr_PRX,*lnaptr_DRX;
/*HAL*/    sAGCGAINOFFSET            *ofsptr_PRX,*ofsptr_DRX;
/*HAL*/    Power                     ibbd_threshold_PRX, ibbd_threshold_DRX;
/*HAL*/    Power                     hrd_threshold_PRX, hrd_threshold_DRX;
/*HAL*/    int                       l1_obb_flag_PRX = 0, l1_obb_flag_DRX = 0;
/*HAL*/    L1D_LNA_TYPE_E            lna_PRX,lna_DRX;
/*HAL*/    int                       tableidx_PRX=0,tableidx_DRX=0;
/*HAL*/
/*HAL*/    #if IS_RX_POWER_OFFSET_SUPPORT
/*HAL*/    sAGCLNAGAINOFFSET  *ofsptr_offset_PRX, *ofsptr_offset_DRX;
/*HAL*/    kal_uint16 rx_power_offset_enable      = AGCLNA_PL_OFFSET_SETTING->rx_power_offset_setting.RPO_enable;
/*HAL*/    kal_uint16 meta_rx_power_offset_enable = AGCLNA_PL_OFFSET_SETTING->rx_power_offset_setting.RPO_meta_enable; 
/*HAL*/    L1D_RX_PATHLOSS  lna_path_loss_offset;
/*HAL*/    lna_path_loss_offset.PRX=0;
/*HAL*/    lna_path_loss_offset.DRX=0;
/*HAL*/    #endif/*IS_RX_POWER_OFFSET_SUPPORT*/
/*HAL*/
/*HAL*/    /*choose table by P/D and by elna_type*/      
/*HAL*/    L1D_RF_AGC_TABLE_HAL_SELECT(rf_band,arfcn,&fullagcptr_PRX,&fullagcptr_DRX);
/*HAL*/    agcptr_PRX=fullagcptr_PRX->table;
/*HAL*/    agcptr_DRX=fullagcptr_DRX->table;
/*HAL*/
/*HAL*/    if( L1D_CheckIfMetaMode()==1)
/*HAL*/    { extern void L1D_RF_Info_Trace( unsigned short idx, long v1, long v2 );
/*HAL*/      L1D_RF_Info_Trace( 11220, predict_power.PRX, predict_power.DRX );                          
/*HAL*/    }
/*HAL*/    /* clipping the request gain to the avialable gain */
/*HAL*/    if( predict_power.PRX >= fullagcptr_PRX->max_predict_power )
/*HAL*/    {  predict_power.PRX = fullagcptr_PRX->max_predict_power;  
/*HAL*/    }
/*HAL*/    else if( predict_power.PRX <= fullagcptr_PRX->min_predict_power )
/*HAL*/    {  predict_power.PRX = fullagcptr_PRX->min_predict_power;  
/*HAL*/    }
/*HAL*/    if( predict_power.DRX >= fullagcptr_DRX->max_predict_power )
/*HAL*/    {  predict_power.DRX = fullagcptr_DRX->max_predict_power;  
/*HAL*/    }
/*HAL*/    else if( predict_power.DRX <= fullagcptr_DRX->min_predict_power )
/*HAL*/    {  predict_power.DRX = fullagcptr_DRX->min_predict_power;  
/*HAL*/    }
/*HAL*/
/*HAL*/    if( L1D_CheckIfMetaMode()==1)
/*HAL*/    { extern void L1D_RF_Info_Trace( unsigned short idx, long v1, long v2 );
/*HAL*/      L1D_RF_Info_Trace( 11221, predict_power.PRX, predict_power.DRX );                          
/*HAL*/    }
/*HAL*/    #if IS_INBAND_BLOCKER_DETECTION_SUPPORT 
/*HAL*/    ibbd_threshold_PRX = fullagcptr_PRX->ibbd_threshold;
/*HAL*/    ibbd_threshold_DRX = fullagcptr_DRX->ibbd_threshold;
/*HAL*/    #endif
/*HAL*/
/*HAL*/    #if IS_HEADROOM_DETECTION_SUPPORT
/*HAL*/    hrd_threshold_PRX  = fullagcptr_PRX->hrd_threshold;
/*HAL*/    hrd_threshold_DRX  = fullagcptr_DRX->hrd_threshold;
/*HAL*/    #endif
/*HAL*/    
/*HAL*/    #if IS_OUTBAND_BLOCKER_DETECTION_SUPPORT
/*HAL*/    if( l1d_rf.band < FrequencyBand1800 )
/*HAL*/    {  l1_obb_flag_PRX = CHECK_FLAG(l1d_rf.blk_flag,LB_OBB_FOUND) ? 1 : 0; }
/*HAL*/    else
/*HAL*/    {  l1_obb_flag_PRX = CHECK_FLAG(l1d_rf.blk_flag,HB_OBB_FOUND) ? 1 : 0; }
/*HAL*/
/*HAL*/    if( l1d_rf.band < FrequencyBand1800 )//DRX use PRX blk flag
/*HAL*/    {  l1_obb_flag_DRX = CHECK_FLAG(l1d_rf.blk_flag,LB_OBB_FOUND) ? 1 : 0; }
/*HAL*/    else
/*HAL*/    {  l1_obb_flag_DRX = CHECK_FLAG(l1d_rf.blk_flag,HB_OBB_FOUND) ? 1 : 0; }
/*HAL*/    #endif
/*HAL*/ 
/*HAL*/    /* choose the LNA path loss */
/*HAL*/    lnaptr_PRX = LNA_PATHLOSS_TABLE[rf_band];
/*HAL*/    lnaptr_DRX = LNA_PATHLOSS_RXD_TABLE[rf_band];
/*HAL*/    /* get the arfcn section */
/*HAL*/    ofsptr_PRX = AGC_PATHLOSS_TABLE[rf_band];
/*HAL*/    ofsptr_DRX = AGC_PATHLOSS_RXD_TABLE[rf_band];
/*HAL*/
/*HAL*/    while( ofsptr_PRX->max_arfcn>=0 )
/*HAL*/    {  if( arfcn <= ofsptr_PRX->max_arfcn )
/*HAL*/       {  break;  }
/*HAL*/       ofsptr_PRX++;
/*HAL*/       lnaptr_PRX++;
/*HAL*/    }
/*HAL*/    while( ofsptr_DRX->max_arfcn>=0 )
/*HAL*/    {  if( arfcn <= ofsptr_DRX->max_arfcn )
/*HAL*/       {  break;  }
/*HAL*/       ofsptr_DRX++;
/*HAL*/       lnaptr_DRX++;
/*HAL*/    }
/*HAL*/
/*HAL*/    /* choose pointer for gain setting */
/*HAL*/    while( predict_power.PRX > agcptr_PRX->inputpower )
/*HAL*/    {  
/*HAL*/       agcptr_PRX++;  
/*HAL*/       tableidx_PRX++;
/*HAL*/    }
/*HAL*/    if (tableidx_PRX>0)//Eliminate the case of minimal input power
/*HAL*/    {
/*HAL*/       if( (agcptr_PRX->inputpower - predict_power.PRX)>( predict_power.PRX - (agcptr_PRX-1)->inputpower) )
/*HAL*/       {
/*HAL*/          agcptr_PRX--; 
/*HAL*/       }
/*HAL*/    }
/*HAL*/    while( predict_power.DRX > agcptr_DRX->inputpower )
/*HAL*/    {  
/*HAL*/       agcptr_DRX++;  
/*HAL*/       tableidx_DRX++;
/*HAL*/    }
/*HAL*/    if (tableidx_DRX>0)//Eliminate the case of minimal input power
/*HAL*/    {
/*HAL*/       if( (agcptr_DRX->inputpower - predict_power.DRX)>( predict_power.DRX - (agcptr_DRX-1)->inputpower) )
/*HAL*/       {
/*HAL*/          agcptr_DRX--; 
/*HAL*/       }
/*HAL*/    }
/*HAL*/    
/*HAL*/       
/*HAL*/    if(0)
/*HAL*/    {/*do nothing*/}   
/*HAL*/    #if IS_HEADROOM_DETECTION_SUPPORT || IS_INBAND_BLOCKER_DETECTION_SUPPORT || IS_OUTBAND_BLOCKER_DETECTION_SUPPORT
/*HAL*/    else if( ( CHECK_FLAG(l1d_rf.blk_flag,HRD_FOUND)&&(predict_power.PRX <=hrd_threshold_PRX)) || ( CHECK_FLAG(l1d_rf.blk_flag,IBB_FOUND) && (predict_power.PRX <=ibbd_threshold_PRX)) || (l1_obb_flag_PRX == 1) )
/*HAL*/    {
/*HAL*/       setting.PRX   = agcptr_PRX->blk_setting;
/*HAL*/       real_gain.PRX = agcptr_PRX->blk_gain; 
/*HAL*/       lna_PRX       = agcptr_PRX->blk_lna;
/*HAL*/    }
/*HAL*/    #endif
/*HAL*/    else
/*HAL*/    {
/*HAL*/       setting.PRX   = agcptr_PRX->setting; 
/*HAL*/       real_gain.PRX = agcptr_PRX->gain;
/*HAL*/       lna_PRX       = agcptr_PRX->lna;  
/*HAL*/    }
/*HAL*/       
/*HAL*/    if(0) 
/*HAL*/    {/*do nothing*/}   
/*HAL*/    #if IS_HEADROOM_DETECTION_SUPPORT || IS_INBAND_BLOCKER_DETECTION_SUPPORT || IS_OUTBAND_BLOCKER_DETECTION_SUPPORT
/*HAL*/    else if( ( CHECK_FLAG(l1d_rf.blk_flag,HRD_FOUND)&&(predict_power.DRX <=hrd_threshold_DRX)) || ( CHECK_FLAG(l1d_rf.blk_flag,IBB_FOUND) && (predict_power.DRX <=ibbd_threshold_DRX)) || (l1_obb_flag_DRX == 1) )
/*HAL*/    {
/*HAL*/       setting.DRX   = agcptr_DRX->blk_setting;
/*HAL*/       real_gain.DRX = agcptr_DRX->blk_gain;
/*HAL*/       lna_DRX       = agcptr_DRX->blk_lna;
/*HAL*/    }
/*HAL*/    #endif
/*HAL*/    else
/*HAL*/    {
/*HAL*/       setting.DRX   = agcptr_DRX->setting;
/*HAL*/       real_gain.DRX = agcptr_DRX->gain;
/*HAL*/       lna_DRX       = agcptr_DRX->lna;
/*HAL*/    }
/*HAL*/    
/*HAL*/    if( L1D_CheckIfMetaMode()==1)
/*HAL*/    { extern void L1D_RF_Info_Trace( unsigned short idx, long v1, long v2 );
/*HAL*/      L1D_RF_Info_Trace( 11230, real_gain.PRX, real_gain.DRX );                          
/*HAL*/    }
/*HAL*/    *gain_settingPRX = setting.PRX;
/*HAL*/    *gain_settingDRX = setting.DRX;
/*HAL*/
/*HAL*/    /* get eLNA status */ 
/*HAL*/    l1d_rf.xwin_elna_status     = agcptr_PRX->elna_type;
/*HAL*/    l1d_rf.xwin_elna_status_DRX = agcptr_DRX->elna_type;
/*HAL*/    
/*HAL*/    /* consider the LNA path loss */   
/*HAL*/    switch( lna_PRX )
/*HAL*/    {
/*HAL*/       case L1D_LNA_HIGH_SENSITIVITY: /* LNA_Utra_High */
/*HAL*/          lna_path_loss.PRX = (l1d_rf2.is_fhc) ? (0) : ((Gain)(lnaptr_PRX->gain_offset_high_sensitivity-ofsptr_PRX->gain_offset));
/*HAL*/          break;
/*HAL*/       case L1D_LNA_HIGH:             /* LNA_High      */ /*Base for path loss calibration*/
/*HAL*/          lna_path_loss.PRX = 0;
/*HAL*/          break;
/*HAL*/       case L1D_LNA_MIDDLE:           /* LNA_Middle    */
/*HAL*/          if( l1_obb_flag_PRX == 1)   //when ELNA usage, it is impossible to see OBB flag! 
/*HAL*/          {   lna_path_loss.PRX = (l1d_rf2.is_fhc) ? (0) : ((Gain)(lnaptr_PRX->gain_offset_middle_sawless-ofsptr_PRX->gain_offset));}
/*HAL*/          else
/*HAL*/          {   lna_path_loss.PRX = (l1d_rf2.is_fhc) ? (0) : ((Gain)(lnaptr_PRX->gain_offset_middle-ofsptr_PRX->gain_offset));}
/*HAL*/          break;
/*HAL*/       default:                       /* LNA_Low       */
/*HAL*/          if( agcptr_PRX->elna_type != MML1_ELNA_MODE_BYPASS  )
/*HAL*/          {   lna_path_loss.PRX = (l1d_rf2.is_fhc) ? (0) : ((Gain)(lnaptr_PRX->gain_offset_low-ofsptr_PRX->gain_offset));  }
/*HAL*/          else                        /* LNA_Low       */
/*HAL*/          {   lna_path_loss.PRX = (l1d_rf2.is_fhc) ? (0) : ((Gain)(lnaptr_PRX->gain_offset_low_maxpin-ofsptr_PRX->gain_offset));  } /*BYPASS*/  
/*HAL*/          break;
/*HAL*/    }
/*HAL*/    switch( lna_DRX )
/*HAL*/    {
/*HAL*/       case L1D_LNA_HIGH_SENSITIVITY: /* LNA_Utra_High */
/*HAL*/          lna_path_loss.DRX = (l1d_rf2.is_fhc) ? (0) : ((Gain)(lnaptr_DRX->gain_offset_high_sensitivity-ofsptr_DRX->gain_offset));
/*HAL*/          break;
/*HAL*/       case L1D_LNA_HIGH:             /* LNA_High      */ /*Base for path loss calibration*/
/*HAL*/          lna_path_loss.DRX = 0;
/*HAL*/          break;
/*HAL*/       case L1D_LNA_MIDDLE:           /* LNA_Middle    */
/*HAL*/          if( l1_obb_flag_DRX == 1)   //when ELNA usage, it is impossible to see OBB flag! 
/*HAL*/          {   lna_path_loss.DRX = (l1d_rf2.is_fhc) ? (0) : ((Gain)(lnaptr_DRX->gain_offset_middle_sawless-ofsptr_DRX->gain_offset));}
/*HAL*/          else
/*HAL*/          {   lna_path_loss.DRX = (l1d_rf2.is_fhc) ? (0) : ((Gain)(lnaptr_DRX->gain_offset_middle-ofsptr_DRX->gain_offset));}
/*HAL*/          break;
/*HAL*/       default:                       /* LNA_Low       */
/*HAL*/          if( agcptr_DRX->elna_type != MML1_ELNA_MODE_BYPASS  )
/*HAL*/          {   lna_path_loss.DRX = (l1d_rf2.is_fhc) ? (0) : ((Gain)(lnaptr_DRX->gain_offset_low-ofsptr_DRX->gain_offset));  }
/*HAL*/          else                        /* LNA_Low       */
/*HAL*/          {   lna_path_loss.DRX = (l1d_rf2.is_fhc) ? (0) : ((Gain)(lnaptr_DRX->gain_offset_low_maxpin-ofsptr_DRX->gain_offset));  } /*BYPASS*/  
/*HAL*/          break;
/*HAL*/    }
/*HAL*/
/*HAL*/
/*HAL*/    #if IS_RX_POWER_OFFSET_SUPPORT  
/*HAL*/    /* get the arfcn section */
/*HAL*/    ofsptr_offset_PRX = AGCLNA_PATHLOSS_OFFSET[rf_band];
/*HAL*/    ofsptr_offset_DRX = AGCLNA_PATHLOSS_RXD_OFFSET[rf_band];
/*HAL*/    while( ofsptr_offset_PRX->max_arfcn>=0 )
/*HAL*/    {  if( arfcn <= ofsptr_offset_PRX->max_arfcn )
/*HAL*/       {  break;  }
/*HAL*/       ofsptr_offset_PRX++;
/*HAL*/    }
/*HAL*/    while( ofsptr_offset_DRX->max_arfcn>=0 )
/*HAL*/    {  if( arfcn <= ofsptr_offset_DRX->max_arfcn )
/*HAL*/       {  break;  }
/*HAL*/       ofsptr_offset_DRX++;
/*HAL*/    }
/*HAL*/    if( rx_power_offset_enable )
/*HAL*/    {
/*HAL*/       if( ( L1D_CheckIfMetaMode() && ( meta_rx_power_offset_enable == 1 )) || // DUT In META mode and enable META mode compensation
/*HAL*/           (L1D_CheckIfMetaMode() == 0) // DUT in normal mode, apply compensation
/*HAL*/         )
/*HAL*/       {
/*HAL*/          switch( lna_PRX )
/*HAL*/          {
/*HAL*/             case L1D_LNA_HIGH_SENSITIVITY: /* LNA_Utra_High */
/*HAL*/                lna_path_loss_offset.PRX = (Gain)(ofsptr_offset_PRX->gain_offset_high_sensitivity);
/*HAL*/                break;
/*HAL*/             case L1D_LNA_HIGH:             /* LNA_High      */ /*Base for path loss calibration*/
/*HAL*/                lna_path_loss_offset.PRX = (Gain)(ofsptr_offset_PRX->gain_offset);
/*HAL*/                break;
/*HAL*/             case L1D_LNA_MIDDLE:           /* LNA_Middle    */
/*HAL*/                if( l1_obb_flag_PRX == 1)   //when ELNA usage, it is impossible to see OBB flag! 
/*HAL*/                {   lna_path_loss_offset.PRX = (Gain)(ofsptr_offset_PRX->gain_offset_middle_sawless);}
/*HAL*/                else
/*HAL*/                {   lna_path_loss_offset.PRX = (Gain)(ofsptr_offset_PRX->gain_offset_middle);}
/*HAL*/                break;
/*HAL*/             default:                       /* LNA_Low       */
/*HAL*/                if( agcptr_PRX->elna_type != MML1_ELNA_MODE_BYPASS  )
/*HAL*/                {   lna_path_loss_offset.PRX = (Gain)(ofsptr_offset_PRX->gain_offset_low);  }
/*HAL*/                else                        /* LNA_Low       */
/*HAL*/                {   lna_path_loss_offset.PRX = (Gain)(ofsptr_offset_PRX->gain_offset_low_maxpin);  } /*BYPASS*/
/*HAL*/                break;
/*HAL*/          }
/*HAL*/          if (L1_RAS_Custom_NVRAM.RXD_ENABLE[rf_band] == L1D_RXD_ENABLE)
/*HAL*/          {
/*HAL*/             switch( lna_DRX )
/*HAL*/             {
/*HAL*/             case L1D_LNA_HIGH_SENSITIVITY: /* LNA_Utra_High */
/*HAL*/                lna_path_loss_offset.DRX = (Gain)(ofsptr_offset_DRX->gain_offset_high_sensitivity);
/*HAL*/                break;
/*HAL*/             case L1D_LNA_HIGH:             /* LNA_High      */ /*Base for path loss calibration*/
/*HAL*/                lna_path_loss_offset.DRX = (Gain)(ofsptr_offset_DRX->gain_offset);
/*HAL*/                break;
/*HAL*/             case L1D_LNA_MIDDLE:           /* LNA_Middle    */
/*HAL*/                if( l1_obb_flag_DRX == 1)   //when ELNA usage, it is impossible to see OBB flag! 
/*HAL*/                {   lna_path_loss_offset.DRX = (Gain)(ofsptr_offset_DRX->gain_offset_middle_sawless);}
/*HAL*/                else
/*HAL*/                {   lna_path_loss_offset.DRX = (Gain)(ofsptr_offset_DRX->gain_offset_middle);}
/*HAL*/                break;
/*HAL*/             default:                       /* LNA_Low       */
/*HAL*/                if( agcptr_DRX->elna_type != MML1_ELNA_MODE_BYPASS  )
/*HAL*/                {   lna_path_loss_offset.DRX = (Gain)(ofsptr_offset_DRX->gain_offset_low);  }
/*HAL*/                else                        /* LNA_Low       */
/*HAL*/                {   lna_path_loss_offset.DRX = (Gain)(ofsptr_offset_DRX->gain_offset_low_maxpin);  } /*BYPASS*/
/*HAL*/                break;
/*HAL*/             }
/*HAL*/          }
/*HAL*/          else
/*HAL*/          {lna_path_loss_offset.DRX = 0;}
/*HAL*/       }
/*HAL*/       else
/*HAL*/       {
/*HAL*/          lna_path_loss_offset.PRX = 0;
/*HAL*/          lna_path_loss_offset.DRX = 0;
/*HAL*/       }
/*HAL*/       extern void L1D_RF_RPO_Trace( uint32 v1, uint32 v2, uint32 v3, uint32 v4, int32 v5, int32 v6 );
/*HAL*/       extern void L1D_RF_RPO_Trace_DRX( uint32 v1, uint32 v2, uint32 v3, uint32 v4, int32 v5, int32 v6 );
/*HAL*/       L1D_RF_RPO_Trace( L1D_CheckIfMetaMode(), meta_rx_power_offset_enable, lna_PRX, rf_band, arfcn, lna_path_loss_offset.PRX);
/*HAL*/       if (L1_RAS_Custom_NVRAM.RXD_ENABLE[rf_band] == L1D_RXD_ENABLE)
/*HAL*/       {L1D_RF_RPO_Trace_DRX( L1D_CheckIfMetaMode(), meta_rx_power_offset_enable, lna_DRX, rf_band, arfcn, lna_path_loss_offset.DRX);}
/*HAL*/    }
/*HAL*/    #endif/*IS_RX_POWER_OFFSET_SUPPORT*/
/*HAL*/
/*HAL*/    #if IS_RX_POWER_OFFSET_SUPPORT
/*HAL*/       real_gain.PRX -= (lna_path_loss_offset.PRX+lna_path_loss.PRX);
/*HAL*/       real_gain.DRX -= (lna_path_loss_offset.DRX+lna_path_loss.DRX);
/*HAL*/       if( L1D_CheckIfMetaMode()==1)
/*HAL*/       { extern void L1D_RF_Info_Trace( unsigned short idx, long v1, long v2 );
/*HAL*/         L1D_RF_Info_Trace( 11231, real_gain.PRX, real_gain.DRX );                          
/*HAL*/       }
/*HAL*/    #else
/*HAL*/       real_gain.PRX -= lna_path_loss.PRX;// choose pathloss after LNA Mode selected according Nomral/HRD/IBBD
/*HAL*/       real_gain.DRX -= lna_path_loss.DRX;// choose pathloss after LNA Mode selected according Nomral/HRD/IBBD
/*HAL*/       if( L1D_CheckIfMetaMode()==1)
/*HAL*/       { extern void L1D_RF_Info_Trace( unsigned short idx, long v1, long v2 );
/*HAL*/         L1D_RF_Info_Trace( 11232, real_gain.PRX, real_gain.DRX );                          
/*HAL*/       }
/*HAL*/    #endif/*IS_RX_POWER_OFFSET_SUPPORT*/
/*HAL*/    
/*HAL*/    
/*HAL*/    #if IS_RSSI_TC_SUPPORT
/*HAL*/    if(L1D_CheckIfMetaMode()==0)// Compensate RX Gain acoording to temperature when normal mode
/*HAL*/    {  
/*HAL*/       real_gain.PRX-=L1D_RF_CompensateRXGain( l1d_rf.band );  
/*HAL*/       real_gain.DRX-=L1D_RF_CompensateRXGain( l1d_rf.band );  
/*HAL*/       if( L1D_CheckIfMetaMode()==1)
/*HAL*/       { extern void L1D_RF_Info_Trace( unsigned short idx, long v1, long v2 );
/*HAL*/         L1D_RF_Info_Trace( 11233, real_gain.PRX, real_gain.DRX );                          
/*HAL*/       }
/*HAL*/    }  
/*HAL*/    #endif
/*HAL*/
/*HAL*/
/*HAL*/    return( real_gain );
/*HAL*/ }    
/*HAL*/ Gain L1D_GAIN_DISTANCE(Gain one, Gain two )
/*HAL*/ {
/*HAL*/    if (one>two)
/*HAL*/    {return (one-two); }
/*HAL*/    else
/*HAL*/    {return (two-one); }
/*HAL*/ }
/*HAL*/ L1D_RX_POWER L1D_RF_GetGainSetting_INVERSE( int rf_band, int arfcn, L1D_RX_GAIN request_gain)
/*HAL*/ {
/*HAL*/    L1D_RX_POWER                  predict_power;
/*HAL*/    const sL1DAGCHALSETTING       *agcptr_PRX, *agcptr_DRX;
/*HAL*/    const sL1DAGCHALDATA          *fullagcptr_PRX, *fullagcptr_DRX;
/*HAL*/    int                           tableidx_PRX=0,tableidx_DRX=0,tableidx_PRX_closest=0,tableidx_DRX_closest=0;
/*HAL*/
/*HAL*/    /*choose table by P/D and by elna_type*/      
/*HAL*/    L1D_RF_AGC_TABLE_HAL_SELECT(rf_band,arfcn,&fullagcptr_PRX,&fullagcptr_DRX);
/*HAL*/    agcptr_PRX=fullagcptr_PRX->table;
/*HAL*/    agcptr_DRX=fullagcptr_DRX->table;
/*HAL*/
/*HAL*/    /* clipping the request gain to the avialable gain */
/*HAL*/    if( request_gain.PRX >= fullagcptr_PRX->max_request_gain )
/*HAL*/    {  request_gain.PRX = fullagcptr_PRX->max_request_gain;  
/*HAL*/    }
/*HAL*/    else if( request_gain.PRX <= fullagcptr_PRX->min_request_gain )
/*HAL*/    {  request_gain.PRX = fullagcptr_PRX->min_request_gain;  
/*HAL*/    }
/*HAL*/    if( request_gain.DRX >= fullagcptr_DRX->max_request_gain )
/*HAL*/    {  request_gain.DRX = fullagcptr_DRX->max_request_gain;  
/*HAL*/    }
/*HAL*/    else if( request_gain.DRX <= fullagcptr_DRX->min_request_gain )
/*HAL*/    {  request_gain.DRX = fullagcptr_DRX->min_request_gain;  
/*HAL*/    }
/*HAL*/    
/*HAL*/    /* choose pointer for gain setting */
/*HAL*/    while( ((agcptr_PRX+tableidx_PRX)->gain) >= fullagcptr_PRX->min_request_gain )
/*HAL*/    {  
/*HAL*/       if (L1D_GAIN_DISTANCE(((agcptr_PRX+tableidx_PRX)->gain),request_gain.PRX) < L1D_GAIN_DISTANCE(((agcptr_PRX+tableidx_PRX_closest)->gain),request_gain.PRX) ) 
/*HAL*/       {
/*HAL*/          tableidx_PRX_closest=tableidx_PRX;
/*HAL*/       }
/*HAL*/       if (L1D_GAIN_DISTANCE(((agcptr_PRX+tableidx_PRX_closest)->gain),request_gain.PRX) < ( (Gain)(ROUNDINT(( 2 )*(PWRRES))) ) ) 
/*HAL*/       {
/*HAL*/          break;//less than 2dB is enough
/*HAL*/       }
/*HAL*/       tableidx_PRX++;
/*HAL*/    }
/*HAL*/ 
/*HAL*/    while( ((agcptr_DRX+tableidx_DRX)->gain) >= fullagcptr_DRX->min_request_gain )
/*HAL*/    {  
/*HAL*/       if (L1D_GAIN_DISTANCE(((agcptr_DRX+tableidx_DRX)->gain),request_gain.DRX) < L1D_GAIN_DISTANCE(((agcptr_DRX+tableidx_DRX_closest)->gain),request_gain.DRX) ) 
/*HAL*/       {
/*HAL*/          tableidx_DRX_closest=tableidx_DRX;
/*HAL*/       }
/*HAL*/       if (L1D_GAIN_DISTANCE(((agcptr_DRX+tableidx_DRX_closest)->gain),request_gain.DRX) < ( (Gain)(ROUNDINT(( 2 )*(PWRRES))) ) ) 
/*HAL*/       {
/*HAL*/          break;//less than 2dB is enough
/*HAL*/       }
/*HAL*/       tableidx_DRX++;
/*HAL*/    }
/*HAL*/    
/*HAL*/    predict_power.PRX = (agcptr_PRX+tableidx_PRX_closest)->inputpower;
/*HAL*/    predict_power.DRX = (agcptr_DRX+tableidx_DRX_closest)->inputpower;
/*HAL*/    
/*HAL*/    if( L1D_CheckIfMetaMode()==1)
/*HAL*/    { extern void L1D_RF_Info_Trace( unsigned short idx, long v1, long v2 );
/*HAL*/      L1D_RF_Info_Trace( 12192, request_gain.PRX, predict_power.DRX );                          
/*HAL*/    }
/*HAL*/    
/*HAL*/    return( predict_power );
/*HAL*/ }    
/*HAL*/ L1D_RX_POWER L1D_RF_CalibrationInputpowerCheck( int rf_band, int arfcn, L1D_RX_POWER instrument_downlink_power, LNACalSeqV5_E prx_lna_mode_in_TST, LNACalSeqV5_E drx_lna_mode_in_TST)
/*HAL*/ {
/*HAL*/    L1D_RX_POWER                  return_downlink_power_for_the_lna_mode={0,0};
/*HAL*/    const sL1DAGCHALSETTING       *agcptr_PRX, *agcptr_DRX;
/*HAL*/    const sL1DAGCHALDATA          *fullagcptr_PRX, *fullagcptr_DRX;
/*HAL*/    int                           tableidx_PRX=0,tableidx_DRX=0,i,j,distanceForLess,distanceForMore;
/*HAL*/    const int                     unuseDistance=9999;
/*HAL*/    L1D_LNA_TYPE_E                prx_lna_mode, drx_lna_mode;
/*HAL*/    int                           bypass_prx_search=0, bypass_drx_search=0;
/*HAL*/
/*HAL*/    /*[PRX]change enum from TST (RfTestRx_Lna_Mode_E) to L1D (L1D_LNA_TYPE_E)*/  
/*HAL*/    switch( prx_lna_mode_in_TST )
/*HAL*/    {
/*HAL*/       case GSM_RX_CAL_SEQ_V5_UTRA_HIGH:
/*HAL*/          prx_lna_mode = L1D_LNA_HIGH_SENSITIVITY;
/*HAL*/          break;
/*HAL*/       case GSM_RX_CAL_SEQ_V5_HIGH:
/*HAL*/          prx_lna_mode = L1D_LNA_HIGH;
/*HAL*/          break;
/*HAL*/       case GSM_RX_CAL_SEQ_V5_MID:
/*HAL*/       case GSM_RX_CAL_SEQ_V5_MID_SAWLESS:
/*HAL*/          prx_lna_mode = L1D_LNA_MIDDLE;
/*HAL*/          break;
/*HAL*/       case GSM_RX_CAL_SEQ_V5_LOW:
/*HAL*/          prx_lna_mode = L1D_LNA_LOW;
/*HAL*/          break;
/*HAL*/       case GSM_RX_CAL_SEQ_V5_BYPASS_LOW:
/*HAL*/          prx_lna_mode = L1D_LNA_LOW_MAXPIN;
/*HAL*/          break;
/*HAL*/       case GSM_RX_CAL_SEQ_V5_NULL:
/*HAL*/          prx_lna_mode = L1D_LNA_LOW_MAXPIN;
/*HAL*/          bypass_prx_search = 1;
/*HAL*/          break;
/*HAL*/       case GSM_RX_CAL_SEQ_V5_WCOEF:
/*HAL*/       default:
/*HAL*/          ASSERT(0); //abnormal input
/*HAL*/          break;
/*HAL*/    }
/*HAL*/
/*HAL*/    /*[DRX]change enum from TST (RfTestRx_Lna_Mode_E) to L1D (L1D_LNA_TYPE_E)*/  
/*HAL*/    switch( drx_lna_mode_in_TST )
/*HAL*/    {
/*HAL*/       case GSM_RX_CAL_SEQ_V5_UTRA_HIGH:
/*HAL*/          drx_lna_mode = L1D_LNA_HIGH_SENSITIVITY;
/*HAL*/          break;
/*HAL*/       case GSM_RX_CAL_SEQ_V5_HIGH:
/*HAL*/          drx_lna_mode = L1D_LNA_HIGH;
/*HAL*/          break;
/*HAL*/       case GSM_RX_CAL_SEQ_V5_MID:
/*HAL*/       case GSM_RX_CAL_SEQ_V5_MID_SAWLESS:
/*HAL*/          drx_lna_mode = L1D_LNA_MIDDLE;
/*HAL*/          break;
/*HAL*/       case GSM_RX_CAL_SEQ_V5_LOW:
/*HAL*/          drx_lna_mode = L1D_LNA_LOW;
/*HAL*/          break;
/*HAL*/       case GSM_RX_CAL_SEQ_V5_BYPASS_LOW:
/*HAL*/          drx_lna_mode = L1D_LNA_LOW_MAXPIN;
/*HAL*/          break;
/*HAL*/       case GSM_RX_CAL_SEQ_V5_NULL:
/*HAL*/          drx_lna_mode = L1D_LNA_LOW_MAXPIN;
/*HAL*/          bypass_drx_search = 1;
/*HAL*/          break;
/*HAL*/       case GSM_RX_CAL_SEQ_V5_WCOEF:
/*HAL*/       default:
/*HAL*/          ASSERT(0); //abnormal input
/*HAL*/          break;
/*HAL*/    }
/*HAL*/
/*HAL*/    /*[PRX][DRX]choose table by P/D and by elna_type*/      
/*HAL*/    L1D_RF_AGC_TABLE_HAL_SELECT(rf_band,arfcn,&fullagcptr_PRX,&fullagcptr_DRX);
/*HAL*/    agcptr_PRX=fullagcptr_PRX->table;
/*HAL*/    agcptr_DRX=fullagcptr_DRX->table;
/*HAL*/    
/*HAL*/    /*[PRX][DRX]clipping the instrument_downlink_power to the avialable downlink power */
/*HAL*/    if( instrument_downlink_power.PRX >= fullagcptr_PRX->max_predict_power )
/*HAL*/    {  instrument_downlink_power.PRX = fullagcptr_PRX->max_predict_power;  
/*HAL*/    }
/*HAL*/    else if( instrument_downlink_power.PRX <= fullagcptr_PRX->min_predict_power )
/*HAL*/    {  instrument_downlink_power.PRX = fullagcptr_PRX->min_predict_power;  
/*HAL*/    }
/*HAL*/    if( instrument_downlink_power.DRX >= fullagcptr_DRX->max_predict_power )
/*HAL*/    {  instrument_downlink_power.DRX = fullagcptr_DRX->max_predict_power;  
/*HAL*/    }
/*HAL*/    else if( instrument_downlink_power.DRX <= fullagcptr_DRX->min_predict_power )
/*HAL*/    {  instrument_downlink_power.DRX = fullagcptr_DRX->min_predict_power;  
/*HAL*/    }
/*HAL*/    
/*HAL*/    if (bypass_prx_search==0)
/*HAL*/    {   
/*HAL*/       /*[PRX]choose pointer for checking lna_mode */
/*HAL*/       while( instrument_downlink_power.PRX > agcptr_PRX->inputpower )
/*HAL*/       {  
/*HAL*/          agcptr_PRX++;  
/*HAL*/          tableidx_PRX++;
/*HAL*/       }
/*HAL*/       if (tableidx_PRX>0)//Eliminate the case of minimal input power
/*HAL*/       {
/*HAL*/          if( (agcptr_PRX->inputpower - instrument_downlink_power.PRX)>( instrument_downlink_power.PRX - (agcptr_PRX-1)->inputpower) )
/*HAL*/          {
/*HAL*/             agcptr_PRX--; 
/*HAL*/             tableidx_PRX--;
/*HAL*/          }
/*HAL*/       }
/*HAL*/       /*[PRX]Is this lna_mode in the corresponding input power */
/*HAL*/       if ( agcptr_PRX->lna == prx_lna_mode )
/*HAL*/       {  
/*HAL*/          return_downlink_power_for_the_lna_mode.PRX = agcptr_PRX->inputpower;
/*HAL*/       }
/*HAL*/       else //find the better input power to retrun
/*HAL*/       {
/*HAL*/          distanceForLess=unuseDistance;distanceForMore=unuseDistance;
/*HAL*/          for(i=0;((agcptr_PRX-i)->inputpower) > (fullagcptr_PRX->min_predict_power); i++)//To min_power
/*HAL*/          {
/*HAL*/             if (((agcptr_PRX-i)->lna)==prx_lna_mode)
/*HAL*/             {
/*HAL*/                distanceForLess=((agcptr_PRX)->inputpower)-((agcptr_PRX-i)->inputpower);
/*HAL*/                break;
/*HAL*/             }
/*HAL*/          }
/*HAL*/          for(j=0;((agcptr_PRX+j)->inputpower) < (fullagcptr_PRX->max_predict_power); j++)//To max_power
/*HAL*/          {
/*HAL*/             if (((agcptr_PRX+j)->lna)==prx_lna_mode)
/*HAL*/             {
/*HAL*/                distanceForMore=((agcptr_PRX+j)->inputpower)-((agcptr_PRX)->inputpower);
/*HAL*/                break;
/*HAL*/             }
/*HAL*/          }
/*HAL*/          if (distanceForLess!=unuseDistance || distanceForMore!=unuseDistance)//At least found in one direction
/*HAL*/          {
/*HAL*/             if (distanceForLess<=distanceForMore)
/*HAL*/             {  return_downlink_power_for_the_lna_mode.PRX = ((agcptr_PRX-i)->inputpower);//use less power
/*HAL*/             }         
/*HAL*/             else 
/*HAL*/             {  return_downlink_power_for_the_lna_mode.PRX = ((agcptr_PRX+j)->inputpower);//use more power
/*HAL*/             }       
/*HAL*/          }
/*HAL*/          else
/*HAL*/          {  extern void L1D_RF_Info_Trace( unsigned short idx, long v1, long v2 );
/*HAL*/             L1D_RF_Info_Trace( 19201, rf_band, prx_lna_mode );   
/*HAL*/             ASSERT(0);//There is no such lna mode
/*HAL*/          }
/*HAL*/       }
/*HAL*/    }
/*HAL*/    else
/*HAL*/    {
/*HAL*/       return_downlink_power_for_the_lna_mode.PRX = instrument_downlink_power.PRX;
/*HAL*/    }
/*HAL*/    
/*HAL*/    if (bypass_drx_search==0)
/*HAL*/    { 
/*HAL*/       /*[DRX]choose pointer for checking lna_mode */
/*HAL*/       while( instrument_downlink_power.DRX > agcptr_DRX->inputpower )
/*HAL*/       {  
/*HAL*/          agcptr_DRX++;  
/*HAL*/          tableidx_DRX++;
/*HAL*/       }
/*HAL*/       if (tableidx_DRX>0)//Eliminate the case of minimal input power
/*HAL*/       {
/*HAL*/          if( (agcptr_DRX->inputpower - instrument_downlink_power.DRX)>( instrument_downlink_power.DRX - (agcptr_DRX-1)->inputpower) )
/*HAL*/          {
/*HAL*/             agcptr_DRX--; 
/*HAL*/             tableidx_DRX--;
/*HAL*/          }
/*HAL*/       }
/*HAL*/       /*[DRX]Is this lna_mode in the corresponding input power */
/*HAL*/       if ( agcptr_DRX->lna == drx_lna_mode )
/*HAL*/       {  
/*HAL*/          return_downlink_power_for_the_lna_mode.DRX = agcptr_DRX->inputpower;
/*HAL*/       }
/*HAL*/       else //find the better input power to retrun
/*HAL*/       {
/*HAL*/          distanceForLess=unuseDistance;distanceForMore=unuseDistance;
/*HAL*/          for(i=0;((agcptr_DRX-i)->inputpower) > (fullagcptr_DRX->min_predict_power); i++)//To min_power
/*HAL*/          {
/*HAL*/             if (((agcptr_DRX-i)->lna)==drx_lna_mode)
/*HAL*/             {
/*HAL*/                distanceForLess=((agcptr_DRX)->inputpower)-((agcptr_DRX-i)->inputpower);
/*HAL*/                break;
/*HAL*/             }
/*HAL*/          }
/*HAL*/          for(j=0;((agcptr_DRX+j)->inputpower) < (fullagcptr_DRX->max_predict_power); j++)//To max_power
/*HAL*/          {
/*HAL*/             if (((agcptr_DRX+j)->lna)==drx_lna_mode)
/*HAL*/             {
/*HAL*/                distanceForMore=((agcptr_DRX+j)->inputpower)-((agcptr_DRX)->inputpower);
/*HAL*/                break;
/*HAL*/             }
/*HAL*/          }
/*HAL*/          if (distanceForLess!=unuseDistance || distanceForMore!=unuseDistance)//At least found in one direction
/*HAL*/          {
/*HAL*/             if (distanceForLess<=distanceForMore)
/*HAL*/             {  return_downlink_power_for_the_lna_mode.DRX = ((agcptr_DRX-i)->inputpower);//use less power
/*HAL*/             }         
/*HAL*/             else 
/*HAL*/             {  return_downlink_power_for_the_lna_mode.DRX = ((agcptr_DRX+j)->inputpower);//use more power
/*HAL*/             }       
/*HAL*/          }
/*HAL*/          else
/*HAL*/          {  extern void L1D_RF_Info_Trace( unsigned short idx, long v1, long v2 );
/*HAL*/             L1D_RF_Info_Trace( 19202, rf_band, drx_lna_mode );   
/*HAL*/             ASSERT(0);//There is no such lna mode
/*HAL*/          }
/*HAL*/       }
/*HAL*/    }
/*HAL*/    else
/*HAL*/    {
/*HAL*/       return_downlink_power_for_the_lna_mode.DRX = instrument_downlink_power.DRX;
/*HAL*/    }
/*HAL*/    
/*HAL*/    if( L1D_CheckIfMetaMode()==1)
/*HAL*/    { extern void L1D_RF_Info_Trace( unsigned short idx, long v1, long v2 );
/*HAL*/      L1D_RF_Info_Trace( 19299, return_downlink_power_for_the_lna_mode.PRX, return_downlink_power_for_the_lna_mode.DRX );                          
/*HAL*/    }
/*HAL*/    
/*HAL*/    return( return_downlink_power_for_the_lna_mode ); //In the end, L1D use them
/*HAL*/ }
/*HAL*/ void L1D_RF_GetCalibrationINFO( RfTestCmdCalInfoV5AllBandCnfPdu_T *gl1tst_get_rxd_info )
/*HAL*/ {
/*HAL*/    int rf_band,table_index;
/*HAL*/    unsigned short prx_elna_type,drx_elna_type;
/*HAL*/    for (rf_band=FrequencyBand850;rf_band<=FrequencyBand1900;rf_band++)
/*HAL*/    {
/*HAL*/       if (L1D_RF_Check_If_Prx_Enable(rf_band)==L1D_RX_PATH_OFF)
/*HAL*/       {
/*HAL*/          prx_elna_type = L1D_ELNA_IN_PATH_OFF;
/*HAL*/       }
/*HAL*/       else
/*HAL*/       {
/*HAL*/          prx_elna_type = L1D_RF_Check_If_ExternalLNA(rf_band);      //enum L1D_ELNA_USAGE
/*HAL*/       }
/*HAL*/       if (L1D_RF_Check_If_Drx_Enable(rf_band)==L1D_RX_PATH_OFF)
/*HAL*/       {
/*HAL*/          drx_elna_type = L1D_ELNA_IN_PATH_OFF;
/*HAL*/       }
/*HAL*/       else
/*HAL*/       {
/*HAL*/          drx_elna_type = L1D_RF_Check_If_ExternalLNA_RXD(rf_band);  //enum L1D_ELNA_USAGE
/*HAL*/       }
/*HAL*/       table_index   = L1D_RF_TST_INFO_ELNA_MAPPING_TABLE[prx_elna_type][drx_elna_type];
/*HAL*/       
/*HAL*/       //(1)take all
/*HAL*/       kal_mem_cpy(&(gl1tst_get_rxd_info->GSM_Band_Info[rf_band-1]), &L1D_RF_TST_INFO_TABLE[table_index], sizeof(RfTestCmdCalInfoV5_T));
/*HAL*/       //(2)update wcoef_arfcn
/*HAL*/       kal_mem_cpy((gl1tst_get_rxd_info->GSM_Band_Info[rf_band-1].wcoef_arfcn), &L1D_RF_TST_INFO_WCOEF_ARFCN[rf_band], (sizeof(kal_int16)*8));
/*HAL*/       
/*HAL*/    }
/*HAL*/ }
        void L1D_RF_RX_Gain_Calculate( RfTestCmdRxGainCalculate_V5 *calculate_req, RfTestResultRxGainCalculate_V5 *calculate_cnf )
        {
           calculate_cnf->recommend_dlpow = calculate_req->band*10 - 80 -calculate_req->Antenna;
           calculate_cnf->request_gain[GSM_ANT_RXM_IDX] = calculate_req->elna_mode[GSM_ANT_RXM_IDX]*10+10;
           calculate_cnf->request_gain[GSM_ANT_RXD_IDX] = calculate_req->elna_mode[GSM_ANT_RXD_IDX]*10+10;
           
           calculate_cnf->calculate_status = GSM_CALCULATE_FAIL;
        }
#endif
