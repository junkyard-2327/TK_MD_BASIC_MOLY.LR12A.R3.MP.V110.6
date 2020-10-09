/*******************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2001
*
*******************************************************************************/

/*******************************************************************************
 *
 * Filename:
 * ---------
 *   m12193.c
 *
 * Project:
 * --------
 *   MT6177M
 *
 * Description:
 * ------------
 *   MT6177M Power Ramp Table
 *
 * Author:
 * -------
 *
 *
 *==============================================================================
 *
 *******************************************************************************/

#include "l1d_cid.h"
#include "l1d_custom_rf.h"
#include "l1d_custom_def.h"

/*===============================================================================================*/
#if !defined(MT6177M_2G_RF)
   #error "rf files mismatch with compile option2!"
#endif

#if ( defined(__GSM450__) || defined(__GSM480__) )
   #error "RF EVB doesn't support this designated band configuration!"
#endif

#if IS_CHIP_MT6218_AND_LATTER_VERSION || IS_EDGE_CHIP_MT6229_AND_LATTER_VERSION
/*----------------------------------------*/
/* Calibration data for path loss of gain */
/*----------------------------------------*/

/* GSM850....................................................................*/

const sAGCGAINOFFSET  AGC_PATHLOSS_GSM850_SetDefault[ PLTABLE_SIZE ] =
{   {  150,  GAINLOSS( 0.0 ) },
    {  170,  GAINLOSS( 0.0 ) },
    {  190,  GAINLOSS( 0.0 ) },
    {  210,  GAINLOSS( 0.0 ) },
    {  230,  GAINLOSS( 0.0 ) },
    {  251,  GAINLOSS( 0.0 ) },
    /*----------------------*/
    { TABLE_END }
};

/* GSM900....................................................................*/

const sAGCGAINOFFSET  AGC_PATHLOSS_GSM900_SetDefault[ PLTABLE_SIZE ] =
{   {   31,  GAINLOSS( 0.0 ) },
    {   43,  GAINLOSS( 0.0 ) },
    {   77,  GAINLOSS( 0.0 ) },
    {  100,  GAINLOSS( 0.0 ) },
    {  124,  GAINLOSS( 0.0 ) },
    { 1023,  GAINLOSS( 0.0 ) },
    /*----------------------*/
    { TABLE_END }
};

/* DCS1800....................................................................*/

const sAGCGAINOFFSET  AGC_PATHLOSS_DCS1800_SetDefault[ PLTABLE_SIZE ] =
{   { 515, GAINLOSS( 0.0 ) },
    { 530, GAINLOSS( 0.0 ) },
    { 550, GAINLOSS( 0.0 ) },
    { 580, GAINLOSS( 0.0 ) },
    { 650, GAINLOSS( 0.0 ) },
    { 680, GAINLOSS( 0.0 ) },
    { 710, GAINLOSS( 0.0 ) },
    { 760, GAINLOSS( 0.0 ) },
    { 830, GAINLOSS( 0.0 ) },
    { 885, GAINLOSS( 0.0 ) },
    /*--------------------*/
    { TABLE_END }
};

/* PCS1900....................................................................*/

const sAGCGAINOFFSET  AGC_PATHLOSS_PCS1900_SetDefault[ PLTABLE_SIZE ] =
{   { 550, GAINLOSS( 0.0 ) },
    { 810, GAINLOSS( 0.0 ) },
    /*--------------------*/
    { TABLE_END }
};

/*...........................................................................*/

const sAGCGAINOFFSET*  AGC_PATHLOSS_TABLE_SetDefault[] =
{  0,                                 /* FrequencyBand400  */
   AGC_PATHLOSS_GSM850_SetDefault,               /* FrequencyBand850  */
   AGC_PATHLOSS_GSM900_SetDefault,               /* FrequencyBand900  */
   AGC_PATHLOSS_DCS1800_SetDefault,              /* FrequencyBand1800 */
   AGC_PATHLOSS_PCS1900_SetDefault,              /* FrequencyBand1900 */
};

#if defined(__2G_RX_DIVERSITY_PATH_SUPPORT__)
/*RXD*//* GSM850....................................................................*/
/*RXD*/const sAGCGAINOFFSET  AGC_PATHLOSS_RXD_GSM850_SetDefault[ PLTABLE_SIZE ] =
/*RXD*/{   {  150,  GAINLOSS( 0.0 ) },
/*RXD*/    {  170,  GAINLOSS( 0.0 ) },
/*RXD*/    {  190,  GAINLOSS( 0.0 ) },
/*RXD*/    {  210,  GAINLOSS( 0.0 ) },
/*RXD*/    {  230,  GAINLOSS( 0.0 ) },
/*RXD*/    {  251,  GAINLOSS( 0.0 ) },
/*RXD*/    /*----------------------*/
/*RXD*/    { TABLE_END }
/*RXD*/};
/*RXD*/
/*RXD*//* GSM900....................................................................*/
/*RXD*/const sAGCGAINOFFSET  AGC_PATHLOSS_RXD_GSM900_SetDefault[ PLTABLE_SIZE ] =
/*RXD*/{   {   31,  GAINLOSS( 0.0 ) },
/*RXD*/    {   43,  GAINLOSS( 0.0 ) },
/*RXD*/    {   77,  GAINLOSS( 0.0 ) },
/*RXD*/    {  100,  GAINLOSS( 0.0 ) },
/*RXD*/    {  124,  GAINLOSS( 0.0 ) },
/*RXD*/    { 1023,  GAINLOSS( 0.0 ) },
/*RXD*/    /*----------------------*/
/*RXD*/    { TABLE_END }
/*RXD*/};
/*RXD*/
/*RXD*//* DCS1800....................................................................*/
/*RXD*/const sAGCGAINOFFSET  AGC_PATHLOSS_RXD_DCS1800_SetDefault[ PLTABLE_SIZE ] =
/*RXD*/{   { 515, GAINLOSS( 0.0 ) },
/*RXD*/    { 530, GAINLOSS( 0.0 ) },
/*RXD*/    { 550, GAINLOSS( 0.0 ) },
/*RXD*/    { 580, GAINLOSS( 0.0 ) },
/*RXD*/    { 650, GAINLOSS( 0.0 ) },
/*RXD*/    { 680, GAINLOSS( 0.0 ) },
/*RXD*/    { 710, GAINLOSS( 0.0 ) },
/*RXD*/    { 760, GAINLOSS( 0.0 ) },
/*RXD*/    { 830, GAINLOSS( 0.0 ) },
/*RXD*/    { 885, GAINLOSS( 0.0 ) },
/*RXD*/    /*--------------------*/
/*RXD*/    { TABLE_END }
/*RXD*/};
/*RXD*/
/*RXD*//* PCS1900....................................................................*/
/*RXD*/const sAGCGAINOFFSET  AGC_PATHLOSS_RXD_PCS1900_SetDefault[ PLTABLE_SIZE ] =
/*RXD*/{   { 550, GAINLOSS( 0.0 ) },
/*RXD*/    { 810, GAINLOSS( 0.0 ) },
/*RXD*/    /*--------------------*/
/*RXD*/    { TABLE_END }
/*RXD*/};
/*RXD*/
/*RXD*//*...........................................................................*/
/*RXD*/const sAGCGAINOFFSET*  AGC_PATHLOSS_RXD_TABLE_SetDefault[] =
/*RXD*/{  0,                                 /* FrequencyBand400  */
/*RXD*/   AGC_PATHLOSS_RXD_GSM850_SetDefault,               /* FrequencyBand850  */
/*RXD*/   AGC_PATHLOSS_RXD_GSM900_SetDefault,               /* FrequencyBand900  */
/*RXD*/   AGC_PATHLOSS_RXD_DCS1800_SetDefault,              /* FrequencyBand1800 */
/*RXD*/   AGC_PATHLOSS_RXD_PCS1900_SetDefault,              /* FrequencyBand1900 */
/*RXD*/};
#endif

/*----------------------------------------*/
/* Calibration data for path loss of LNA  */
/*----------------------------------------*/

/* GSM850....................................................................*/

const sLNAGAINOFFSET  LNA_PATHLOSS_GSM850_SetDefault[ PLTABLE_SIZE ] =
{   { GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ) },
    { GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ) },
    { GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ) },
    { GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ) },
    { GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ) },
    { GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ) },
    { GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ) },
    { GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ) },
    { GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ) },
    { GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ) },
    { GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ) },
    /*--------------------------------*/
    { -99 }
};

/* GSM900....................................................................*/

const sLNAGAINOFFSET  LNA_PATHLOSS_GSM900_SetDefault[ PLTABLE_SIZE ] =
{   { GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ) },
    { GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ) },
    { GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ) },
    { GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ) },
    { GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ) },
    { GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ) },
    { GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ) },
    { GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ) },
    { GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ) },
    { GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ) },
    { GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ) },
    /*--------------------------------*/
    { -99 }
};

/* DCS1800....................................................................*/

const sLNAGAINOFFSET  LNA_PATHLOSS_DCS1800_SetDefault[ PLTABLE_SIZE ] =
{   { GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ) },
    { GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ) },
    { GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ) },
    { GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ) },
    { GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ) },
    { GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ) },
    { GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ) },
    { GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ) },
    { GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ) },
    { GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ) },
    { GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ) },
    /*--------------------------------*/
    { -99 }
};

/* PCS1900....................................................................*/

const  sLNAGAINOFFSET  LNA_PATHLOSS_PCS1900_SetDefault[ PLTABLE_SIZE ] =
{   { GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ) },
    { GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ) },
    { GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ) },
    { GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ) },
    { GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ) },
    { GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ) },
    { GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ) },
    { GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ) },
    { GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ) },
    { GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ) },
    { GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ) },
    /*--------------------------------*/
    { -99 }
};

/*...........................................................................*/

const sLNAGAINOFFSET*  LNA_PATHLOSS_TABLE_SetDefault[] =
{  0,                                 /* FrequencyBand400  */
   LNA_PATHLOSS_GSM850_SetDefault,               /* FrequencyBand850  */
   LNA_PATHLOSS_GSM900_SetDefault,               /* FrequencyBand900  */
   LNA_PATHLOSS_DCS1800_SetDefault,              /* FrequencyBand1800 */
   LNA_PATHLOSS_PCS1900_SetDefault,              /* FrequencyBand1900 */
};

#if defined(__2G_RX_DIVERSITY_PATH_SUPPORT__)
/*RXD*//* GSM850....................................................................*/
/*RXD*/const sLNAGAINOFFSET  LNA_PATHLOSS_RXD_GSM850_SetDefault[ PLTABLE_SIZE ] =
/*RXD*/{   { GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ) },
/*RXD*/    { GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ) },
/*RXD*/    { GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ) },
/*RXD*/    { GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ) },
/*RXD*/    { GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ) },
/*RXD*/    { GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ) },
/*RXD*/    { GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ) },
/*RXD*/    { GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ) },
/*RXD*/    { GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ) },
/*RXD*/    { GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ) },
/*RXD*/    { GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ) },
/*RXD*/    /*--------------------------------*/
/*RXD*/    { -99 }
/*RXD*/};
/*RXD*/
/*RXD*//* GSM900....................................................................*/
/*RXD*/const sLNAGAINOFFSET  LNA_PATHLOSS_RXD_GSM900_SetDefault[ PLTABLE_SIZE ] =
/*RXD*/{   { GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ) },
/*RXD*/    { GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ) },
/*RXD*/    { GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ) },
/*RXD*/    { GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ) },
/*RXD*/    { GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ) },
/*RXD*/    { GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ) },
/*RXD*/    { GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ) },
/*RXD*/    { GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ) },
/*RXD*/    { GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ) },
/*RXD*/    { GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ) },
/*RXD*/    { GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ) },
/*RXD*/    /*--------------------------------*/
/*RXD*/    { -99 }
/*RXD*/};
/*RXD*/
/*RXD*//* DCS1800....................................................................*/
/*RXD*/const sLNAGAINOFFSET  LNA_PATHLOSS_RXD_DCS1800_SetDefault[ PLTABLE_SIZE ] =
/*RXD*/{   { GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ) },
/*RXD*/    { GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ) },
/*RXD*/    { GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ) },
/*RXD*/    { GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ) },
/*RXD*/    { GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ) },
/*RXD*/    { GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ) },
/*RXD*/    { GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ) },
/*RXD*/    { GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ) },
/*RXD*/    { GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ) },
/*RXD*/    { GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ) },
/*RXD*/    { GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ) },
/*RXD*/    /*--------------------------------*/
/*RXD*/    { -99 }
/*RXD*/};
/*RXD*/
/*RXD*//* PCS1900....................................................................*/
/*RXD*/const  sLNAGAINOFFSET  LNA_PATHLOSS_RXD_PCS1900_SetDefault[ PLTABLE_SIZE ] =
/*RXD*/{   { GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ) },
/*RXD*/    { GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ) },
/*RXD*/    { GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ) },
/*RXD*/    { GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ) },
/*RXD*/    { GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ) },
/*RXD*/    { GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ) },
/*RXD*/    { GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ) },
/*RXD*/    { GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ) },
/*RXD*/    { GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ) },
/*RXD*/    { GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ) },
/*RXD*/    { GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ) },
/*RXD*/    /*--------------------------------*/
/*RXD*/    { -99 }
/*RXD*/};
/*RXD*/
/*RXD*//*...........................................................................*/
/*RXD*/const sLNAGAINOFFSET*  LNA_PATHLOSS_RXD_TABLE_SetDefault[] =
/*RXD*/{  0,                                 /* FrequencyBand400  */
/*RXD*/   LNA_PATHLOSS_RXD_GSM850_SetDefault,               /* FrequencyBand850  */
/*RXD*/   LNA_PATHLOSS_RXD_GSM900_SetDefault,               /* FrequencyBand900  */
/*RXD*/   LNA_PATHLOSS_RXD_DCS1800_SetDefault,              /* FrequencyBand1800 */
/*RXD*/   LNA_PATHLOSS_RXD_PCS1900_SetDefault,              /* FrequencyBand1900 */
/*RXD*/};
#endif

#if IS_RX_POWER_OFFSET_SUPPORT
/*----------------------------------------*/
/* RX Power Offset */
/*----------------------------------------*/

/* GSM850....................................................................*/

sAGCLNAGAINOFFSET  AGC_PATHLOSS_GSM850_OFFSET_SetDefault[ PLTABLE_SIZE ] =
{
  /*  ARFCN,   High LNA mode,         Mid LNA mode,       Low LNA mode  */
    {  150,  GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ) },
    {  170,  GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ) },
    {  190,  GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ) },
    {  210,  GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ) },
    {  230,  GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ) },
    {  251,  GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ) },
    /*----------------------*/
    { TABLE_END }
};

/* GSM900....................................................................*/

sAGCLNAGAINOFFSET  AGC_PATHLOSS_GSM900_OFFSET_SetDefault[ PLTABLE_SIZE ] =
{ 
  /*  ARFCN,   High LNA mode,        Mid LNA mode,      Low LNA mode  */
    {   31,  GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ) },
    {   43,  GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ) },
    {   77,  GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ) },
    {  100,  GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ) },
    {  124,  GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ) },
    { 1023,  GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ) },
    /*----------------------*/
    { TABLE_END }
};

/* DCS1800....................................................................*/

sAGCLNAGAINOFFSET  AGC_PATHLOSS_DCS1800_OFFSET_SetDefault[ PLTABLE_SIZE ] =
{  
  /*  ARFCN,   High LNA mode,    Mid LNA mode,        Low LNA mode  */
    { 515, GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ) },
    { 530, GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ) },
    { 550, GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ) },
    { 580, GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ) },
    { 650, GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ) },
    { 680, GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ) },
    { 710, GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ) },
    { 760, GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ) },
    { 830, GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ) },
    { 885, GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ) },
    /*--------------------*/
    { TABLE_END }
};

/* PCS1900....................................................................*/

sAGCLNAGAINOFFSET  AGC_PATHLOSS_PCS1900_OFFSET_SetDefault[ PLTABLE_SIZE ] =
{  
  /*  ARFCN,   High LNA mode,    Mid LNA mode,       Low LNA mode  */
    { 550, GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ) },
    { 810, GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ) },
    /*--------------------*/
    { TABLE_END }
};

/*...........................................................................*/

const sAGCLNAGAINOFFSET*  AGCLNA_PATHLOSS_OFFSET_TABLE_SetDefault[] =
{  0,                                        /* FrequencyBand400  */
   AGC_PATHLOSS_GSM850_OFFSET_SetDefault,               /* FrequencyBand850  */
   AGC_PATHLOSS_GSM900_OFFSET_SetDefault,               /* FrequencyBand900  */
   AGC_PATHLOSS_DCS1800_OFFSET_SetDefault,              /* FrequencyBand1800 */
   AGC_PATHLOSS_PCS1900_OFFSET_SetDefault,              /* FrequencyBand1900 */
};

#if defined(__2G_RX_DIVERSITY_PATH_SUPPORT__)
/*RXD*//* GSM850....................................................................*/
/*RXD*/sAGCLNAGAINOFFSET  AGC_PATHLOSS_RXD_GSM850_OFFSET_SetDefault[ PLTABLE_SIZE ] =
/*RXD*/{
/*RXD*/  /*  ARFCN,   High LNA mode,         Mid LNA mode,       Low LNA mode  */
/*RXD*/    {  150,  GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ) },
/*RXD*/    {  170,  GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ) },
/*RXD*/    {  190,  GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ) },
/*RXD*/    {  210,  GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ) },
/*RXD*/    {  230,  GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ) },
/*RXD*/    {  251,  GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ) },
/*RXD*/    /*----------------------*/
/*RXD*/    { TABLE_END }
/*RXD*/};
/*RXD*/
/*RXD*//* GSM900....................................................................*/
/*RXD*/sAGCLNAGAINOFFSET  AGC_PATHLOSS_RXD_GSM900_OFFSET_SetDefault[ PLTABLE_SIZE ] =
/*RXD*/{ 
/*RXD*/  /*  ARFCN,   High LNA mode,        Mid LNA mode,      Low LNA mode  */
/*RXD*/    {   31,  GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ) },
/*RXD*/    {   43,  GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ) },
/*RXD*/    {   77,  GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ) },
/*RXD*/    {  100,  GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ) },
/*RXD*/    {  124,  GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ) },
/*RXD*/    { 1023,  GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ) },
/*RXD*/    /*----------------------*/
/*RXD*/    { TABLE_END }
/*RXD*/};
/*RXD*/
/*RXD*//* DCS1800....................................................................*/
/*RXD*/sAGCLNAGAINOFFSET  AGC_PATHLOSS_RXD_DCS1800_OFFSET_SetDefault[ PLTABLE_SIZE ] =
/*RXD*/{  
/*RXD*/  /*  ARFCN,   High LNA mode,    Mid LNA mode,        Low LNA mode  */
/*RXD*/    { 515, GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ) },
/*RXD*/    { 530, GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ) },
/*RXD*/    { 550, GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ) },
/*RXD*/    { 580, GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ) },
/*RXD*/    { 650, GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ) },
/*RXD*/    { 680, GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ) },
/*RXD*/    { 710, GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ) },
/*RXD*/    { 760, GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ) },
/*RXD*/    { 830, GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ) },
/*RXD*/    { 885, GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ) },
/*RXD*/    /*--------------------*/
/*RXD*/    { TABLE_END }
/*RXD*/};
/*RXD*/
/*RXD*//* PCS1900....................................................................*/
/*RXD*/sAGCLNAGAINOFFSET  AGC_PATHLOSS_RXD_PCS1900_OFFSET_SetDefault[ PLTABLE_SIZE ] =
/*RXD*/{  
/*RXD*/  /*  ARFCN,   High LNA mode,    Mid LNA mode,       Low LNA mode  */
/*RXD*/    { 550, GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ) },
/*RXD*/    { 810, GAINLOSS( 0.0 ), GAINLOSS( 0.0 ), GAINLOSS( 0.0 ) },
/*RXD*/    /*--------------------*/
/*RXD*/    { TABLE_END }
/*RXD*/};
/*RXD*/
/*RXD*//*...........................................................................*/
/*RXD*/const sAGCLNAGAINOFFSET*  AGCLNA_PATHLOSS_RXD_OFFSET_TABLE_SetDefault[] =
/*RXD*/{  0,                                        /* FrequencyBand400  */
/*RXD*/   AGC_PATHLOSS_RXD_GSM850_OFFSET_SetDefault,               /* FrequencyBand850  */
/*RXD*/   AGC_PATHLOSS_RXD_GSM900_OFFSET_SetDefault,               /* FrequencyBand900  */
/*RXD*/   AGC_PATHLOSS_RXD_DCS1800_OFFSET_SetDefault,              /* FrequencyBand1800 */
/*RXD*/   AGC_PATHLOSS_RXD_PCS1900_OFFSET_SetDefault,              /* FrequencyBand1900 */
/*RXD*/};
#endif

s2G_RF_RX_PARAMETER_EXT  RX_POWER_OFFSET_SETTING_SetDefault = 
{{
	RPO_2G_ENABLE_SetDefault,
	RPO_2G_META_ENABLE_SetDefault
}};

#endif/*IS_RX_POWER_OFFSET_SUPPORT*/
/*----------------------------------------*/
/* Calibration data for power ramp        */
/*----------------------------------------*/

#define  APC_DC_OFFSET_SetDefault     50
#define  APC_DC_OFFSET_LOW_SetDefault  0

/* GSM850....................................................................*/

const sRAMPDATA  GSM850_RampData_SetDefault =
{
   /*-------------------------------------------------------------------------------------------*/
   /* lowest power */
   ((APC_DC_OFFSET_LOW_SetDefault)<<18) | ((APC_DC_OFFSET_SetDefault)<<8) | 12,
   /*-------------------------------------------------------------------------------------------*/
   /* power level  */
   /*   5,  7,  9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33, 35 dBm                       */
   {  223,240,260,279,201,226,256,290,327,368,415,467,528,575,652,652 },
   /*-------------------------------------------------------------------------------------------*/
   {
      /* profile  0 :  5 dBm | p00,p01,p02,p03,p04,p05,p06,p07,p08,p09,p10,p11,p12,p13,p14,p15  */
      {  /* ramp up   */ {  {   0,0,0,0,0,0,0,0,0,12,41,102,172,224,248,255 },
         /* ramp down */    { 255,255,246,214,158,99,44,13,0,0,0,0,0,0,0,0 }  }
      }, /*-------------------------------------------------------------------------------------*/
      /* profile  1 :  7 dBm | p00,p01,p02,p03,p04,p05,p06,p07,p08,p09,p10,p11,p12,p13,p14,p15  */
      {  /* ramp up   */ {  {   0,0,0,0,0,0,0,0,0,12,41,102,172,224,248,255 },
         /* ramp down */    { 255,255,246,214,158,99,44,13,0,0,0,0,0,0,0,0 }  }
      }, /*-------------------------------------------------------------------------------------*/
      /* profile  2 :  9 dBm | p00,p01,p02,p03,p04,p05,p06,p07,p08,p09,p10,p11,p12,p13,p14,p15  */
      {  /* ramp up   */ {  {   0,0,0,0,0,0,0,0,0,12,41,102,172,224,248,255 },
         /* ramp down */    { 255,255,246,214,158,99,44,13,0,0,0,0,0,0,0,0 }  }
      }, /*-------------------------------------------------------------------------------------*/
      /* profile  3 : 11 dBm | p00,p01,p02,p03,p04,p05,p06,p07,p08,p09,p10,p11,p12,p13,p14,p15  */
      {  /* ramp up   */ {  {   0,0,0,0,0,0,0,0,0,12,41,102,172,224,248,255 },
         /* ramp down */    { 255,255,246,214,158,99,44,13,0,0,0,0,0,0,0,0 }  }
      }, /*-------------------------------------------------------------------------------------*/
      /* profile  4 : 13 dBm | p00,p01,p02,p03,p04,p05,p06,p07,p08,p09,p10,p11,p12,p13,p14,p15  */
      {  /* ramp up   */ {  {   0,0,0,0,0,0,0,0,0,12,41,102,172,224,248,255 },
         /* ramp down */    { 255,255,246,214,158,99,44,13,0,0,0,0,0,0,0,0 }  }
      }, /*-------------------------------------------------------------------------------------*/
      /* profile  5 : 15 dBm | p00,p01,p02,p03,p04,p05,p06,p07,p08,p09,p10,p11,p12,p13,p14,p15  */
      {  /* ramp up   */ {  {   0,0,0,0,0,0,0,0,0,12,41,102,172,224,248,255 },
         /* ramp down */    { 255,255,246,214,158,99,44,13,0,0,0,0,0,0,0,0 }  }
      }, /*-------------------------------------------------------------------------------------*/
      /* profile  6 : 17 dBm | p00,p01,p02,p03,p04,p05,p06,p07,p08,p09,p10,p11,p12,p13,p14,p15  */
      {  /* ramp up   */ {  {   0,0,0,0,0,0,0,0,0,12,41,102,172,224,248,255 },
         /* ramp down */    { 255,255,246,214,158,99,44,13,0,0,0,0,0,0,0,0 }  }
      }, /*-------------------------------------------------------------------------------------*/
      /* profile  7 : 19 dBm | p00,p01,p02,p03,p04,p05,p06,p07,p08,p09,p10,p11,p12,p13,p14,p15  */
      {  /* ramp up   */ {  {   0,0,0,0,0,0,0,0,0,12,41,102,172,224,248,255 },
         /* ramp down */    { 255,255,246,214,158,99,44,13,0,0,0,0,0,0,0,0 }  }
      }, /*-------------------------------------------------------------------------------------*/
      /* profile  8 : 21 dBm | p00,p01,p02,p03,p04,p05,p06,p07,p08,p09,p10,p11,p12,p13,p14,p15  */
      {  /* ramp up   */ {  {   0,0,0,0,0,0,0,0,0,12,41,102,172,224,248,255 },
         /* ramp down */    { 255,255,246,214,158,99,44,13,0,0,0,0,0,0,0,0 }  }
      }, /*-------------------------------------------------------------------------------------*/
      /* profile  9 : 23 dBm | p00,p01,p02,p03,p04,p05,p06,p07,p08,p09,p10,p11,p12,p13,p14,p15  */
      {  /* ramp up   */ {  {   0,0,0,0,0,0,0,0,0,12,41,102,172,224,248,255 },
         /* ramp down */    { 255,255,246,214,158,99,44,13,0,0,0,0,0,0,0,0 }  }
      }, /*-------------------------------------------------------------------------------------*/
      /* profile 10 : 25 dBm | p00,p01,p02,p03,p04,p05,p06,p07,p08,p09,p10,p11,p12,p13,p14,p15  */
      {  /* ramp up   */ {  {   0,0,0,0,0,0,0,0,12,41,102,172,224,248,255,255 },
         /* ramp down */    { 255,255,246,214,158,99,44,13,0,0,0,0,0,0,0,0 }  }
      }, /*-------------------------------------------------------------------------------------*/
      /* profile 11 : 27 dBm | p00,p01,p02,p03,p04,p05,p06,p07,p08,p09,p10,p11,p12,p13,p14,p15  */
      {  /* ramp up   */ {  {   0,0,0,0,0,0,0,0,12,41,102,172,224,248,255,255 },
         /* ramp down */    { 255,255,246,214,158,99,44,13,0,0,0,0,0,0,0,0 }  }
      }, /*-------------------------------------------------------------------------------------*/
      /* profile 12 : 29 dBm | p00,p01,p02,p03,p04,p05,p06,p07,p08,p09,p10,p11,p12,p13,p14,p15  */
      {  /* ramp up   */ {  {   0,0,0,0,0,0,0,0,12,41,102,172,224,248,255,255 },
         /* ramp down */    { 255,255,246,214,158,99,44,13,0,0,0,0,0,0,0,0 }  }
      }, /*-------------------------------------------------------------------------------------*/
      /* profile 13 : 31 dBm | p00,p01,p02,p03,p04,p05,p06,p07,p08,p09,p10,p11,p12,p13,p14,p15  */
      {  /* ramp up   */ {  {   0,0,0,0,0,0,0,0,12,41,102,172,224,248,255,255 },
         /* ramp down */    { 255,255,246,214,158,99,44,13,0,0,0,0,0,0,0,0 }  }
      }, /*-------------------------------------------------------------------------------------*/
      /* profile 14 : 33 dBm | p00,p01,p02,p03,p04,p05,p06,p07,p08,p09,p10,p11,p12,p13,p14,p15  */
      {  /* ramp up   */ {  {   0,0,0,0,0,0,0,0,12,41,102,172,224,248,255,255 },
         /* ramp down */    { 255,255,246,214,158,99,44,13,0,0,0,0,0,0,0,0 }  }
      }, /*-------------------------------------------------------------------------------------*/
      /* profile 15 : 35 dBm | p00,p01,p02,p03,p04,p05,p06,p07,p08,p09,p10,p11,p12,p13,p14,p15  */
      {  /* ramp up   */ {  {   0,0,0,0,0,0,0,0,12,41,102,172,224,248,255,255 },
         /* ramp down */    { 255,255,246,214,158,99,44,13,0,0,0,0,0,0,0,0 }  }
      }, /*-------------------------------------------------------------------------------------*/
   },
   /* ARFCN WEIGHT */
   {
      /* max arfcn , mid_level ,  hi_weight   ,  lo_weight   */
      {     160    ,    21     , WEIGHT(1.000), WEIGHT(1.000) },
      {     190    ,    21     , WEIGHT(1.000), WEIGHT(1.000) },
      {     220    ,    21     , WEIGHT(1.000), WEIGHT(1.000) },
      {     251    ,    21     , WEIGHT(1.000), WEIGHT(1.000) },
      /*-----------------------------------------------------*/
      { TABLE_END }
   },
   /* Battery WEIGHT */
   {  /*       low temp,       mid temp,        hi temp */
       {  WEIGHT(1.000),  WEIGHT(1.000),  WEIGHT(1.000)  },  /* low volt */
       {  WEIGHT(1.000),  WEIGHT(1.000),  WEIGHT(1.000)  },  /* mid volt */
       {  WEIGHT(1.000),  WEIGHT(1.000),  WEIGHT(1.000)  },  /*  hi volt */
   },
};


/* GSM900....................................................................*/

const sRAMPDATA  GSM_RampData_SetDefault =
{
   /*-------------------------------------------------------------------------------------------*/
   /* lowest power */
   ((APC_DC_OFFSET_LOW_SetDefault)<<18) | ((APC_DC_OFFSET_SetDefault)<<8) | 12,
   /*-------------------------------------------------------------------------------------------*/
   /* power level  */
   /*   5,  7,  9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33, 35 dBm                       */
   {  224,240,258,278,200,224,252,286,323,365,412,464,522,571,735,735 },
   /*-------------------------------------------------------------------------------------------*/
   {
      /* profile  0 :  5 dBm | p00,p01,p02,p03,p04,p05,p06,p07,p08,p09,p10,p11,p12,p13,p14,p15  */
      {  /* ramp up   */ {  {   0,0,0,0,0,0,0,0,0,12,41,102,172,224,248,255 },
         /* ramp down */    { 255,255,246,214,158,99,44,13,0,0,0,0,0,0,0,0 }  }
      }, /*-------------------------------------------------------------------------------------*/
      /* profile  1 :  7 dBm | p00,p01,p02,p03,p04,p05,p06,p07,p08,p09,p10,p11,p12,p13,p14,p15  */
      {  /* ramp up   */ {  {   0,0,0,0,0,0,0,0,0,12,41,102,172,224,248,255 },
         /* ramp down */    { 255,255,246,214,158,99,44,13,0,0,0,0,0,0,0,0 }  }
      }, /*-------------------------------------------------------------------------------------*/
      /* profile  2 :  9 dBm | p00,p01,p02,p03,p04,p05,p06,p07,p08,p09,p10,p11,p12,p13,p14,p15  */
      {  /* ramp up   */ {  {   0,0,0,0,0,0,0,0,0,12,41,102,172,224,248,255 },
         /* ramp down */    { 255,255,246,214,158,99,44,13,0,0,0,0,0,0,0,0 }  }
      }, /*-------------------------------------------------------------------------------------*/
      /* profile  3 : 11 dBm | p00,p01,p02,p03,p04,p05,p06,p07,p08,p09,p10,p11,p12,p13,p14,p15  */
      {  /* ramp up   */ {  {   0,0,0,0,0,0,0,0,0,12,41,102,172,224,248,255 },
         /* ramp down */    { 255,255,246,214,158,99,44,13,0,0,0,0,0,0,0,0 }  }
      }, /*-------------------------------------------------------------------------------------*/
      /* profile  4 : 13 dBm | p00,p01,p02,p03,p04,p05,p06,p07,p08,p09,p10,p11,p12,p13,p14,p15  */
      {  /* ramp up   */ {  {   0,0,0,0,0,0,0,0,0,12,41,102,172,224,248,255 },
         /* ramp down */    { 255,255,246,214,158,99,44,13,0,0,0,0,0,0,0,0 }  }
      }, /*-------------------------------------------------------------------------------------*/
      /* profile  5 : 15 dBm | p00,p01,p02,p03,p04,p05,p06,p07,p08,p09,p10,p11,p12,p13,p14,p15  */
      {  /* ramp up   */ {  {   0,0,0,0,0,0,0,0,0,12,41,102,172,224,248,255 },
         /* ramp down */    { 255,255,246,214,158,99,44,13,0,0,0,0,0,0,0,0 }  }
      }, /*-------------------------------------------------------------------------------------*/
      /* profile  6 : 17 dBm | p00,p01,p02,p03,p04,p05,p06,p07,p08,p09,p10,p11,p12,p13,p14,p15  */
      {  /* ramp up   */ {  {   0,0,0,0,0,0,0,0,0,12,41,102,172,224,248,255 },
         /* ramp down */    { 255,255,246,214,158,99,44,13,0,0,0,0,0,0,0,0 }  }
      }, /*-------------------------------------------------------------------------------------*/
      /* profile  7 : 19 dBm | p00,p01,p02,p03,p04,p05,p06,p07,p08,p09,p10,p11,p12,p13,p14,p15  */
      {  /* ramp up   */ {  {   0,0,0,0,0,0,0,0,0,12,41,102,172,224,248,255 },
         /* ramp down */    { 255,255,246,214,158,99,44,13,0,0,0,0,0,0,0,0 }  }
      }, /*-------------------------------------------------------------------------------------*/
      /* profile  8 : 21 dBm | p00,p01,p02,p03,p04,p05,p06,p07,p08,p09,p10,p11,p12,p13,p14,p15  */
      {  /* ramp up   */ {  {   0,0,0,0,0,0,0,0,0,12,41,102,172,224,248,255 },
         /* ramp down */    { 255,255,246,214,158,99,44,13,0,0,0,0,0,0,0,0 }  }
      }, /*-------------------------------------------------------------------------------------*/
      /* profile  9 : 23 dBm | p00,p01,p02,p03,p04,p05,p06,p07,p08,p09,p10,p11,p12,p13,p14,p15  */
      {  /* ramp up   */ {  {   0,0,0,0,0,0,0,0,0,12,41,102,172,224,248,255 },
         /* ramp down */    { 255,255,246,214,158,99,44,13,0,0,0,0,0,0,0,0 }  }
      }, /*-------------------------------------------------------------------------------------*/
      /* profile 10 : 25 dBm | p00,p01,p02,p03,p04,p05,p06,p07,p08,p09,p10,p11,p12,p13,p14,p15  */
      {  /* ramp up   */ {  {   0,0,0,0,0,0,0,0,12,41,102,172,224,248,255,255 },
         /* ramp down */    { 255,255,246,214,158,99,44,13,0,0,0,0,0,0,0,0 }  }
      }, /*-------------------------------------------------------------------------------------*/
      /* profile 11 : 27 dBm | p00,p01,p02,p03,p04,p05,p06,p07,p08,p09,p10,p11,p12,p13,p14,p15  */
      {  /* ramp up   */ {  {   0,0,0,0,0,0,0,0,12,41,102,172,224,248,255,255 },
         /* ramp down */    { 255,255,246,214,158,99,44,13,0,0,0,0,0,0,0,0 }  }
      }, /*-------------------------------------------------------------------------------------*/
      /* profile 12 : 29 dBm | p00,p01,p02,p03,p04,p05,p06,p07,p08,p09,p10,p11,p12,p13,p14,p15  */
      {  /* ramp up   */ {  {   0,0,0,0,0,0,0,0,12,41,102,172,224,248,255,255 },
         /* ramp down */    { 255,255,246,214,158,99,44,13,0,0,0,0,0,0,0,0 }  }
      }, /*-------------------------------------------------------------------------------------*/
      /* profile 13 : 31 dBm | p00,p01,p02,p03,p04,p05,p06,p07,p08,p09,p10,p11,p12,p13,p14,p15  */
      {  /* ramp up   */ {  {   0,0,0,0,0,0,0,0,12,41,102,172,224,248,255,255 },
         /* ramp down */    { 255,255,246,214,158,99,44,13,0,0,0,0,0,0,0,0 }  }
      }, /*-------------------------------------------------------------------------------------*/
      /* profile 14 : 33 dBm | p00,p01,p02,p03,p04,p05,p06,p07,p08,p09,p10,p11,p12,p13,p14,p15  */
      {  /* ramp up   */ {  {   0,0,0,0,0,0,0,0,12,41,102,172,224,248,255,255 },
         /* ramp down */    { 255,255,246,214,158,99,44,13,0,0,0,0,0,0,0,0 }  }
      }, /*-------------------------------------------------------------------------------------*/
      /* profile 15 : 35 dBm | p00,p01,p02,p03,p04,p05,p06,p07,p08,p09,p10,p11,p12,p13,p14,p15  */
      {  /* ramp up   */ {  {   0,0,0,0,0,0,0,0,12,41,102,172,224,248,255,255 },
         /* ramp down */    { 255,255,246,214,158,99,44,13,0,0,0,0,0,0,0,0 }  }
      }, /*-------------------------------------------------------------------------------------*/
   },
   /* ARFCN WEIGHT */
   {
      /* max arfcn , mid_level ,  hi_weight   ,  lo_weight   */
      {      40    ,    21     , WEIGHT(1.000), WEIGHT(1.000) },
      {      82    ,    21     , WEIGHT(1.000), WEIGHT(1.000) },
      {     124    ,    21     , WEIGHT(1.000), WEIGHT(1.000) },
      {    1023    ,    21     , WEIGHT(1.000), WEIGHT(1.000) },
      /*-----------------------------------------------------*/
      { TABLE_END }
   },
   /* Battery WEIGHT */
   {  /*       low temp,       mid temp,        hi temp */
       {  WEIGHT(1.000),  WEIGHT(1.000),  WEIGHT(1.000)  },  /* low volt */
       {  WEIGHT(1.000),  WEIGHT(1.000),  WEIGHT(1.000)  },  /* mid volt */
       {  WEIGHT(1.000),  WEIGHT(1.000),  WEIGHT(1.000)  },  /*  hi volt */
   },
};


/* DCS1800....................................................................*/

const sRAMPDATA  DCS_RampData_SetDefault =
{
   /*-------------------------------------------------------------------------------------------*/
   /* lowest power */
   ((APC_DC_OFFSET_LOW_SetDefault)<<18) | ((APC_DC_OFFSET_SetDefault)<<8) | 12,
   /*-------------------------------------------------------------------------------------------*/
   /* power level  */
   /*   0,  2,  4,  6,  8, 10, 12, 14, 16, 18, 20, 22, 24, 26, 28, 30 dBm                       */
   {  167,180,194,212,234,256,232,262,292,328,368,416,466,524,572,645 },
   /*-------------------------------------------------------------------------------------------*/
   {
      /* profile  0 :  5 dBm | p00,p01,p02,p03,p04,p05,p06,p07,p08,p09,p10,p11,p12,p13,p14,p15   */
      {  /* ramp up   */ {  {   0,0,0,0,0,0,0,1,0,10,40,123,189,227,248,255 },
         /* ramp down */    { 255,246,223,173,102,40,13,0,0,0,0,0,0,0,0,0   }  }
      }, /*-------------------------------------------------------------------------------------*/
      /* profile  1 :  7 dBm | p00,p01,p02,p03,p04,p05,p06,p07,p08,p09,p10,p11,p12,p13,p14,p15  */
      {  /* ramp up   */ {  {   0,0,0,0,0,0,0,0,12,41,102,172,224,248,255,255 },
         /* ramp down */    { 255,246,223,173,102,40,13,0,0,0,0,0,0,0,0,0   }  }
      }, /*-------------------------------------------------------------------------------------*/
      /* profile  2 :  9 dBm | p00,p01,p02,p03,p04,p05,p06,p07,p08,p09,p10,p11,p12,p13,p14,p15  */
      {  /* ramp up   */ {  {   0,0,0,0,0,0,0,0,12,41,102,172,224,248,255,255 },
         /* ramp down */    { 255,246,223,173,102,40,13,0,0,0,0,0,0,0,0,0   }  }
      }, /*-------------------------------------------------------------------------------------*/
      /* profile  3 : 11 dBm | p00,p01,p02,p03,p04,p05,p06,p07,p08,p09,p10,p11,p12,p13,p14,p15  */
      {  /* ramp up   */ {  {   0,0,0,0,0,0,0,0,12,41,102,172,224,248,255,255 },
         /* ramp down */    { 255,255,246,223,173,102,40,13,0,0,0,0,0,0,0,0 }  }
      }, /*-------------------------------------------------------------------------------------*/
      /* profile  4 : 13 dBm | p00,p01,p02,p03,p04,p05,p06,p07,p08,p09,p10,p11,p12,p13,p14,p15  */
      {  /* ramp up   */ {  {   0,0,0,0,0,0,0,0,12,41,102,172,224,248,255,255 },
         /* ramp down */    { 255,255,246,223,173,102,40,13,0,0,0,0,0,0,0,0 }  }
      }, /*-------------------------------------------------------------------------------------*/
      /* profile  5 : 15 dBm | p00,p01,p02,p03,p04,p05,p06,p07,p08,p09,p10,p11,p12,p13,p14,p15  */
      {  /* ramp up   */ {  {   0,0,0,0,0,0,0,0,12,41,102,172,224,248,255,255 },
         /* ramp down */    { 255,255,246,223,173,102,40,13,0,0,0,0,0,0,0,0 }  }
      }, /*-------------------------------------------------------------------------------------*/
      /* profile  6 : 17 dBm | p00,p01,p02,p03,p04,p05,p06,p07,p08,p09,p10,p11,p12,p13,p14,p15  */
      {  /* ramp up   */ {  {   0,0,0,0,0,0,0,0,12,41,102,172,224,248,255,255 },
         /* ramp down */    { 255,255,246,223,173,102,40,13,0,0,0,0,0,0,0,0 }  }
      }, /*-------------------------------------------------------------------------------------*/
      /* profile  7 : 19 dBm | p00,p01,p02,p03,p04,p05,p06,p07,p08,p09,p10,p11,p12,p13,p14,p15  */
      {  /* ramp up   */ {  {   0,0,0,0,0,0,0,0,12,41,102,172,224,248,255,255 },
         /* ramp down */    { 255,255,246,223,173,102,40,13,0,0,0,0,0,0,0,0 }  }
      }, /*-------------------------------------------------------------------------------------*/
      /* profile  8 : 21 dBm | p00,p01,p02,p03,p04,p05,p06,p07,p08,p09,p10,p11,p12,p13,p14,p15  */
      {  /* ramp up   */ {  {   0,0,0,0,0,0,0,0,12,41,102,172,224,248,255,255 },
         /* ramp down */    { 255,255,246,223,173,102,40,13,0,0,0,0,0,0,0,0 }  }
      }, /*-------------------------------------------------------------------------------------*/
      /* profile  9 : 23 dBm | p00,p01,p02,p03,p04,p05,p06,p07,p08,p09,p10,p11,p12,p13,p14,p15  */
      {  /* ramp up   */ {  {   0,0,0,0,0,0,0,0,12,41,102,172,224,248,255,255 },
         /* ramp down */    { 255,255,246,223,173,102,40,13,0,0,0,0,0,0,0,0 }  }
      }, /*-------------------------------------------------------------------------------------*/
      /* profile 10 : 25 dBm | p00,p01,p02,p03,p04,p05,p06,p07,p08,p09,p10,p11,p12,p13,p14,p15  */
      {  /* ramp up   */ {  {   0,0,0,0,0,0,0,0,12,41,102,172,224,248,255,255 },
         /* ramp down */    { 255,255,246,223,173,102,40,13,0,0,0,0,0,0,0,0 }  }
      }, /*-------------------------------------------------------------------------------------*/
      /* profile 11 : 27 dBm | p00,p01,p02,p03,p04,p05,p06,p07,p08,p09,p10,p11,p12,p13,p14,p15  */
      {  /* ramp up   */ {  {   0,0,0,0,0,0,0,0,12,41,102,172,224,248,255,255 },
         /* ramp down */    { 255,255,246,223,173,102,40,13,0,0,0,0,0,0,0,0 }  }
      }, /*-------------------------------------------------------------------------------------*/
      /* profile 12 : 29 dBm | p00,p01,p02,p03,p04,p05,p06,p07,p08,p09,p10,p11,p12,p13,p14,p15  */
      {  /* ramp up   */ {  {   0,0,0,0,0,0,0,0,12,41,102,172,224,248,255,255 },
         /* ramp down */    { 255,255,246,223,173,102,40,13,0,0,0,0,0,0,0,0 }  }
      }, /*-------------------------------------------------------------------------------------*/
      /* profile 13 : 31 dBm | p00,p01,p02,p03,p04,p05,p06,p07,p08,p09,p10,p11,p12,p13,p14,p15  */
      {  /* ramp up   */ {  {   0,0,0,0,0,0,0,0,12,41,102,172,224,248,255,255 },
         /* ramp down */    { 255,255,246,223,173,102,40,13,0,0,0,0,0,0,0,0 }  }
      }, /*-------------------------------------------------------------------------------------*/
      /* profile 14 : 33 dBm | p00,p01,p02,p03,p04,p05,p06,p07,p08,p09,p10,p11,p12,p13,p14,p15  */
      {  /* ramp up   */ {  {   0,0,0,0,0,0,0,0,12,41,102,172,224,248,255,255 },
         /* ramp down */    { 255,255,246,223,173,102,40,13,0,0,0,0,0,0,0,0 }  }
      }, /*-------------------------------------------------------------------------------------*/
      /* profile 15 : 35 dBm | p00,p01,p02,p03,p04,p05,p06,p07,p08,p09,p10,p11,p12,p13,p14,p15  */
      {  /* ramp up   */ {  {   0,0,0,0,0,0,0,0,12,41,102,172,224,248,255,255 },
         /* ramp down */    { 255,255,246,223,173,102,40,13,0,0,0,0,0,0,0,0 }  }
      }, /*-------------------------------------------------------------------------------------*/
   },
   /* ARFCN WEIGHT */
   {
      /* max arfcn , mid_level ,  hi_weight   ,  lo_weight   */
      {     520    ,    16     , WEIGHT(1.000), WEIGHT(1.000) },
      {     560    ,    16     , WEIGHT(1.000), WEIGHT(1.000) },
      {     600    ,    16     , WEIGHT(1.000), WEIGHT(1.000) },
      {     630    ,    16     , WEIGHT(1.000), WEIGHT(1.000) },
      {     660    ,    16     , WEIGHT(1.000), WEIGHT(1.000) },
      {     680    ,    16     , WEIGHT(1.000), WEIGHT(1.000) },
      {     720    ,    16     , WEIGHT(1.000), WEIGHT(1.000) },
      {     730    ,    16     , WEIGHT(1.000), WEIGHT(1.000) },
      {     750    ,    16     , WEIGHT(1.000), WEIGHT(1.000) },
      {     800    ,    16     , WEIGHT(1.000), WEIGHT(1.000) },
      {     885    ,    16     , WEIGHT(1.000), WEIGHT(1.000) },
      /*-----------------------------------------------------*/
      { TABLE_END }
   },
   /* Battery WEIGHT */
   {  /*       low temp,       mid temp,        hi temp */
       {  WEIGHT(1.000),  WEIGHT(1.000),  WEIGHT(1.000)  },  /* low volt */
       {  WEIGHT(1.000),  WEIGHT(1.000),  WEIGHT(1.000)  },  /* mid volt */
       {  WEIGHT(1.000),  WEIGHT(1.000),  WEIGHT(1.000)  },  /*  hi volt */
   },
};


/* PCS1900....................................................................*/

const sRAMPDATA  PCS_RampData_SetDefault =
{
   /*-------------------------------------------------------------------------------------------*/
   /* lowest power */
   ((APC_DC_OFFSET_LOW_SetDefault)<<18) | ((APC_DC_OFFSET_SetDefault)<<8) | 12,
   /*-------------------------------------------------------------------------------------------*/
   /* power level  */
   /*   0,  2,  4,  6,  8, 10, 12, 14, 16, 18, 20, 22, 24, 26, 28, 30 dBm                       */
   {  171,186,201,219,241,266,240,271,303,338,378,425,477,535,583,695 },
   /*-------------------------------------------------------------------------------------------*/
   {
      /* profile  0 :  5 dBm | p00,p01,p02,p03,p04,p05,p06,p07,p08,p09,p10,p11,p12,p13,p14,p15  */
      {  /* ramp up   */ {  {   0,0,0,0,0,0,0,0,0,12,41,102,172,224,248,255 },
         /* ramp down */    { 255,246,223,173,102,40,13,0,0,0,0,0,0,0,0,0   }  }
      }, /*-------------------------------------------------------------------------------------*/
      /* profile  1 :  7 dBm | p00,p01,p02,p03,p04,p05,p06,p07,p08,p09,p10,p11,p12,p13,p14,p15  */
      {  /* ramp up   */ {  {   0,0,0,0,0,0,0,0,0,12,41,102,172,224,248,255 },
         /* ramp down */    { 255,246,223,173,102,40,13,0,0,0,0,0,0,0,0,0   }  }
      }, /*-------------------------------------------------------------------------------------*/
      /* profile  2 :  9 dBm | p00,p01,p02,p03,p04,p05,p06,p07,p08,p09,p10,p11,p12,p13,p14,p15  */
      {  /* ramp up   */ {  {   0,0,0,0,0,0,0,0,0,12,41,102,172,224,248,255 },
         /* ramp down */    { 255,246,223,173,102,40,13,0,0,0,0,0,0,0,0,0   }  }
      }, /*-------------------------------------------------------------------------------------*/
      /* profile  3 : 11 dBm | p00,p01,p02,p03,p04,p05,p06,p07,p08,p09,p10,p11,p12,p13,p14,p15  */
      {  /* ramp up   */ {  {   0,0,0,0,0,0,0,0,0,12,41,102,172,224,248,255 },
         /* ramp down */    { 255,255,246,223,173,102,40,13,0,0,0,0,0,0,0,0 }  }
      }, /*-------------------------------------------------------------------------------------*/
      /* profile  4 : 13 dBm | p00,p01,p02,p03,p04,p05,p06,p07,p08,p09,p10,p11,p12,p13,p14,p15  */
      {  /* ramp up   */ {  {   0,0,0,0,0,0,0,0,12,41,102,172,224,248,255,255 },
         /* ramp down */    { 255,255,246,223,173,102,40,13,0,0,0,0,0,0,0,0 }  }
      }, /*-------------------------------------------------------------------------------------*/
      /* profile  5 : 15 dBm | p00,p01,p02,p03,p04,p05,p06,p07,p08,p09,p10,p11,p12,p13,p14,p15  */
      {  /* ramp up   */ {  {   0,0,0,0,0,0,0,0,12,41,102,172,224,248,255,255 },
         /* ramp down */    { 255,255,246,223,173,102,40,13,0,0,0,0,0,0,0,0 }  }
      }, /*-------------------------------------------------------------------------------------*/
      /* profile  6 : 17 dBm | p00,p01,p02,p03,p04,p05,p06,p07,p08,p09,p10,p11,p12,p13,p14,p15  */
      {  /* ramp up   */ {  {   0,0,0,0,0,0,0,0,12,41,102,172,224,248,255,255 },
         /* ramp down */    { 255,255,246,223,173,102,40,13,0,0,0,0,0,0,0,0 }  }
      }, /*-------------------------------------------------------------------------------------*/
      /* profile  7 : 19 dBm | p00,p01,p02,p03,p04,p05,p06,p07,p08,p09,p10,p11,p12,p13,p14,p15  */
      {  /* ramp up   */ {  {   0,0,0,0,0,0,0,0,12,41,102,172,224,248,255,255 },
         /* ramp down */    { 255,255,246,223,173,102,40,13,0,0,0,0,0,0,0,0 }  }
      }, /*-------------------------------------------------------------------------------------*/
      /* profile  8 : 21 dBm | p00,p01,p02,p03,p04,p05,p06,p07,p08,p09,p10,p11,p12,p13,p14,p15  */
      {  /* ramp up   */ {  {   0,0,0,0,0,0,0,0,12,41,102,172,224,248,255,255 },
         /* ramp down */    { 255,255,246,223,173,102,40,13,0,0,0,0,0,0,0,0 }  }
      }, /*-------------------------------------------------------------------------------------*/
      /* profile  9 : 23 dBm | p00,p01,p02,p03,p04,p05,p06,p07,p08,p09,p10,p11,p12,p13,p14,p15  */
      {  /* ramp up   */ {  {   0,0,0,0,0,0,0,0,12,41,102,172,224,248,255,255 },
         /* ramp down */    { 255,255,246,223,173,102,40,13,0,0,0,0,0,0,0,0 }  }
      }, /*-------------------------------------------------------------------------------------*/
      /* profile 10 : 25 dBm | p00,p01,p02,p03,p04,p05,p06,p07,p08,p09,p10,p11,p12,p13,p14,p15  */
      {  /* ramp up   */ {  {   0,0,0,0,0,0,0,0,12,41,102,172,224,248,255,255 },
         /* ramp down */    { 255,255,246,223,173,102,40,13,0,0,0,0,0,0,0,0 }  }
      }, /*-------------------------------------------------------------------------------------*/
      /* profile 11 : 27 dBm | p00,p01,p02,p03,p04,p05,p06,p07,p08,p09,p10,p11,p12,p13,p14,p15  */
      {  /* ramp up   */ {  {   0,0,0,0,0,0,0,0,12,41,102,172,224,248,255,255 },
         /* ramp down */    { 255,255,246,223,173,102,40,13,0,0,0,0,0,0,0,0 }  }
      }, /*-------------------------------------------------------------------------------------*/
      /* profile 12 : 29 dBm | p00,p01,p02,p03,p04,p05,p06,p07,p08,p09,p10,p11,p12,p13,p14,p15  */
      {  /* ramp up   */ {  {   0,0,0,0,0,0,0,0,12,41,102,172,224,248,255,255 },
         /* ramp down */    { 255,255,246,223,173,102,40,13,0,0,0,0,0,0,0,0 }  }
      }, /*-------------------------------------------------------------------------------------*/
      /* profile 13 : 31 dBm | p00,p01,p02,p03,p04,p05,p06,p07,p08,p09,p10,p11,p12,p13,p14,p15  */
      {  /* ramp up   */ {  {   0,0,0,0,0,0,0,0,12,41,102,172,224,248,255,255 },
         /* ramp down */    { 255,255,246,223,173,102,40,13,0,0,0,0,0,0,0,0 }  }
      }, /*-------------------------------------------------------------------------------------*/
      /* profile 14 : 33 dBm | p00,p01,p02,p03,p04,p05,p06,p07,p08,p09,p10,p11,p12,p13,p14,p15  */
      {  /* ramp up   */ {  {   0,0,0,0,0,0,0,0,12,41,102,172,224,248,255,255 },
         /* ramp down */    { 255,255,246,223,173,102,40,13,0,0,0,0,0,0,0,0 }  }
      }, /*-------------------------------------------------------------------------------------*/
      /* profile 15 : 35 dBm | p00,p01,p02,p03,p04,p05,p06,p07,p08,p09,p10,p11,p12,p13,p14,p15  */
      {  /* ramp up   */ {  {   0,0,0,0,0,0,0,0,12,41,102,172,224,248,255,255 },
         /* ramp down */    { 255,255,246,223,173,102,40,13,0,0,0,0,0,0,0,0 }  }
      }, /*-------------------------------------------------------------------------------------*/
   },
   /* ARFCN WEIGHT */
   {
      /* max arfcn , mid_level ,  hi_weight   ,  lo_weight   */
      {     520    ,    16     , WEIGHT(1.000), WEIGHT(1.000) },
      {     560    ,    16     , WEIGHT(1.000), WEIGHT(1.000) },
      {     600    ,    16     , WEIGHT(1.000), WEIGHT(1.000) },
      {     630    ,    16     , WEIGHT(1.000), WEIGHT(1.000) },
      {     660    ,    16     , WEIGHT(1.000), WEIGHT(1.000) },
      {     680    ,    16     , WEIGHT(1.000), WEIGHT(1.000) },
      {     720    ,    16     , WEIGHT(1.000), WEIGHT(1.000) },
      {     730    ,    16     , WEIGHT(1.000), WEIGHT(1.000) },
      {     750    ,    16     , WEIGHT(1.000), WEIGHT(1.000) },
      {     800    ,    16     , WEIGHT(1.000), WEIGHT(1.000) },
      {     810    ,    16     , WEIGHT(1.000), WEIGHT(1.000) },
      /*-----------------------------------------------------*/
      { TABLE_END }
   },
   /* Battery WEIGHT */
   {  /*       low temp,       mid temp,        hi temp */
       {  WEIGHT(1.000),  WEIGHT(1.000),  WEIGHT(1.000)  },  /* low volt */
       {  WEIGHT(1.000),  WEIGHT(1.000),  WEIGHT(1.000)  },  /* mid volt */
       {  WEIGHT(1.000),  WEIGHT(1.000),  WEIGHT(1.000)  },  /*  hi volt */
   },
};

/*..........................................................................*/

const sRAMPDATA*  RampData_SetDefault[] =
{
   0,                                 /* FrequencyBand400 (not support)  */
   &GSM850_RampData_SetDefault,                  /* FrequencyBand850                */
   &GSM_RampData_SetDefault,                     /* FrequencyBand900                */
   &DCS_RampData_SetDefault,                     /* FrequencyBand1800               */
   &PCS_RampData_SetDefault,                     /* FrequencyBand1900               */
};


/*=========================================================================================*/

#if defined(__EPSK_TX__)
/*EPSK*/ const sMIDRAMPDATA  GSM850_InterRampDataG_2_G_SetDefault = { 255,239,140,100, 80, 69, 44,  4, 50, 66,115,210,220,255,255,255 };
/*EPSK*/ const sMIDRAMPDATA  GSM850_InterRampDataG_2_E_SetDefault = { 255,200,100, 50, 25,  0,  0,  0,  0,  0,  0,  0,255,255,255,255 };
/*EPSK*/ const sMIDRAMPDATA  GSM850_InterRampDataE_2_G_SetDefault = { 255,255,255,  0,  0,  0,  0,  0,  0, 40, 40, 45, 60,105,210,255 };
/*EPSK*/ const sMIDRAMPDATA  GSM850_InterRampDataE_2_E_SetDefault = { 255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255 };
/*EPSK*/ const sMIDRAMPDATA  GSM_InterRampDataG_2_G_SetDefault    = { 255,239,140,100, 80, 69, 44,  4, 50, 66,115,210,220,255,255,255 };
/*EPSK*/ const sMIDRAMPDATA  GSM_InterRampDataG_2_E_SetDefault    = { 255,200,100, 50, 25,  0,  0,  0,  0,  0,  0,  0,255,255,255,255 };
/*EPSK*/ const sMIDRAMPDATA  GSM_InterRampDataE_2_G_SetDefault    = { 255,255,255,  0,  0,  0,  0,  0,  0, 20, 35, 40, 65,100,210,255 };
/*EPSK*/ const sMIDRAMPDATA  GSM_InterRampDataE_2_E_SetDefault    = { 255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255 };
/*EPSK*/ const sMIDRAMPDATA  DCS_InterRampDataG_2_G_SetDefault    = { 255,239,140,110, 90, 80, 50,  5, 50, 80,100,190,220,255,255,255 };
/*EPSK*/ const sMIDRAMPDATA  DCS_InterRampDataG_2_E_SetDefault    = { 255,135,100, 50, 25,  0,  0,  0,  0,  0,  0,  0,255,255,255,255 };
/*EPSK*/ const sMIDRAMPDATA  DCS_InterRampDataE_2_G_SetDefault    = { 255,255,255,  0,  0,  0,  0,  0,  0, 20, 35, 40, 70,100,210,255 };
/*EPSK*/ const sMIDRAMPDATA  DCS_InterRampDataE_2_E_SetDefault    = { 255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255 };
/*EPSK*/ const sMIDRAMPDATA  PCS_InterRampDataG_2_G_SetDefault    = { 255,239,140, 95, 92, 84, 44,  4, 50, 66,115,210,220,255,255,255 };
/*EPSK*/ const sMIDRAMPDATA  PCS_InterRampDataG_2_E_SetDefault    = { 255,135,100, 50, 25,  0,  0,  0,  0,  0,  0,  0,255,255,255,255 };
/*EPSK*/ const sMIDRAMPDATA  PCS_InterRampDataE_2_G_SetDefault    = { 255,255,255,  0,  0,  0,  0,  0,  0, 20, 35, 40, 70,100,210,255 };
/*EPSK*/ const sMIDRAMPDATA  PCS_InterRampDataE_2_E_SetDefault    = { 255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255 };
/*EPSK*/
/*EPSK*/ const sMIDRAMPDATA* GSM850_EPSK_InterRampData_SetDefault[] = { &GSM850_InterRampDataG_2_G_SetDefault, /* FrequencyBand850 (not support)  */
/*EPSK*/                                                     &GSM850_InterRampDataG_2_E_SetDefault, /* FrequencyBand850 (not support)  */
/*EPSK*/                                                     &GSM850_InterRampDataE_2_G_SetDefault, /* FrequencyBand850 (not support)  */
/*EPSK*/                                                     &GSM850_InterRampDataE_2_E_SetDefault, /* FrequencyBand850 (not support)  */
/*EPSK*/                                                   };
/*EPSK*/ const sMIDRAMPDATA* GSM_EPSK_InterRampData_SetDefault[] =    { &GSM_InterRampDataG_2_G_SetDefault,    /* FrequencyBand900 */
/*EPSK*/                                                     &GSM_InterRampDataG_2_E_SetDefault,    /* FrequencyBand900 */
/*EPSK*/                                                     &GSM_InterRampDataE_2_G_SetDefault,    /* FrequencyBand900 */
/*EPSK*/                                                     &GSM_InterRampDataE_2_E_SetDefault,    /* FrequencyBand900 */
/*EPSK*/                                                   };
/*EPSK*/ const sMIDRAMPDATA* DCS_EPSK_InterRampData_SetDefault[] =    { &DCS_InterRampDataG_2_G_SetDefault,    /* FrequencyBand1800 */
/*EPSK*/                                                     &DCS_InterRampDataG_2_E_SetDefault,    /* FrequencyBand1800 */
/*EPSK*/                                                     &DCS_InterRampDataE_2_G_SetDefault,    /* FrequencyBand1800 */
/*EPSK*/                                                     &DCS_InterRampDataE_2_E_SetDefault,    /* FrequencyBand1800 */
/*EPSK*/                                                   };
/*EPSK*/ const sMIDRAMPDATA* PCS_EPSK_InterRampData_SetDefault[] =    { &PCS_InterRampDataG_2_G_SetDefault,    /* FrequencyBand1900 */
/*EPSK*/                                                     &PCS_InterRampDataG_2_E_SetDefault,    /* FrequencyBand1900 */
/*EPSK*/                                                     &PCS_InterRampDataE_2_G_SetDefault,    /* FrequencyBand1900 */
/*EPSK*/                                                     &PCS_InterRampDataE_2_E_SetDefault,    /* FrequencyBand1900 */
/*EPSK*/                                                   };
/*EPSK*/
/*EPSK*/ const sMIDRAMPDATA** EPSK_InterRampData_SetDefault[] =    { 0,                             /* FrequencyBand400 (not support)  */
/*EPSK*/                                                  GSM850_EPSK_InterRampData_SetDefault,     /* FrequencyBand850 (not support)  */
/*EPSK*/                                                  GSM_EPSK_InterRampData_SetDefault,        /* FrequencyBand900                */
/*EPSK*/                                                  DCS_EPSK_InterRampData_SetDefault,        /* FrequencyBand1800               */
/*EPSK*/                                                  PCS_EPSK_InterRampData_SetDefault,        /* FrequencyBand1900               */
/*EPSK*/                                          };
/*EPSK*/ const sMIDRAMPDATA  GSM850_InterRampData_SetDefault = { 0 };
/*EPSK*/ const sMIDRAMPDATA  GSM_InterRampData_SetDefault    = { 0 };
/*EPSK*/ const sMIDRAMPDATA  DCS_InterRampData_SetDefault    = { 0 };
/*EPSK*/ const sMIDRAMPDATA  PCS_InterRampData_SetDefault    = { 0 };
/*EPSK*/ const sMIDRAMPDATA*  InterRampData_SetDefault[] = {  0,                     /* FrequencyBand400 (not support)  */
/*EPSK*/                                           &GSM850_InterRampData_SetDefault, /* FrequencyBand850                */
/*EPSK*/                                           &GSM_InterRampData_SetDefault,    /* FrequencyBand900                */
/*EPSK*/                                           &DCS_InterRampData_SetDefault,    /* FrequencyBand1800               */
/*EPSK*/                                           &PCS_InterRampData_SetDefault,    /* FrequencyBand1900               */
/*EPSK*/                                                   };
/*EPSK*/
#elif   (IS_GPRS || IS_MULTISLOT_TX_SUPPORT)
/*GPRS*/
/*GPRS*/  const sMIDRAMPDATA  GSM850_InterRampData_SetDefault = { 255,245,240,230,180,100, 60,  0,  0,  0, 30, 70,110,190,230,255 };
/*GPRS*/  const sMIDRAMPDATA  GSM_InterRampData_SetDefault    = { 255,245,240,230,180,100, 60,  0,  0,  0, 30, 70,110,190,230,255 };
/*GPRS*/  const sMIDRAMPDATA  DCS_InterRampData_SetDefault    = { 255,255,228,180,100, 50, 25, 10,  0,  0, 10, 25, 50,100,180,255 };
/*GPRS*/  const sMIDRAMPDATA  PCS_InterRampData_SetDefault    = { 255,255,228,180,100, 50, 25, 10,  0,  0, 10, 25, 50,100,180,255 };
/*GPRS*/
/*GPRS*/  const sMIDRAMPDATA*  InterRampData_SetDefault[] = {  0,                     /* FrequencyBand400 (not support)  */
/*GPRS*/                                           &GSM850_InterRampData_SetDefault, /* FrequencyBand850                */
/*GPRS*/                                           &GSM_InterRampData_SetDefault,    /* FrequencyBand900                */
/*GPRS*/                                           &DCS_InterRampData_SetDefault,    /* FrequencyBand1800               */
/*GPRS*/                                           &PCS_InterRampData_SetDefault,    /* FrequencyBand1900               */
/*GPRS*/                                        };
/*GPRS*/
#else
/*GSM*/ const sMIDRAMPDATA  GSM850_InterRampData_SetDefault = { 0 };
/*GSM*/ const sMIDRAMPDATA  GSM_InterRampData_SetDefault    = { 0 };
/*GSM*/ const sMIDRAMPDATA  DCS_InterRampData_SetDefault    = { 0 };
/*GSM*/ const sMIDRAMPDATA  PCS_InterRampData_SetDefault    = { 0 };
/*GSM*/   const sMIDRAMPDATA*  InterRampData_SetDefault[] = {  0,                     /* FrequencyBand400 (not support)  */
/*GSM*/                                           &GSM850_InterRampData_SetDefault, /* FrequencyBand850                */
/*GSM*/                                           &GSM_InterRampData_SetDefault,    /* FrequencyBand900                */
/*GSM*/                                           &DCS_InterRampData_SetDefault,    /* FrequencyBand1800               */
/*GSM*/                                           &PCS_InterRampData_SetDefault,    /* FrequencyBand1900               */
/*GSM*/                                        };
#endif//(__EPSK_TX__)

/*===============================================================================================*/
#if defined(__EPSK_TX__)
/*----------------------------------------*/
/* Calibration data for power ramp EPSK   */
/*----------------------------------------*/

#define  GSM850_INTERSLOT_LOWEST_DAC_SetDefault  10
#define  GSM_INTERSLOT_LOWEST_DAC_SetDefault  10
#define  DCS_INTERSLOT_LOWEST_DAC_SetDefault  10
#define  PCS_INTERSLOT_LOWEST_DAC_SetDefault  10

/* GSM850....................................................................*/

const sRAMPDATA  GSM850_RampData_EPSK_SetDefault =
{
   /*-------------------------------------------------------------------------------------------*/
   /* lowest power */
   ((GSM850_INTERSLOT_LOWEST_DAC_SetDefault)<<18) | ((APC_DC_OFFSET_SetDefault)<<8) | 5,
   /*-------------------------------------------------------------------------------------------*/
   /* power level  */
   /*   5,  7,  9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 27, 27, 27, 27 dBm                       */
   {   40, 56, 72, 88,104,120,136,152,168,184,200,216,216,216,216,216     },
   /*-------------------------------------------------------------------------------------------*/
   {
      /* profile  0 :  5 dBm | p00,p01,p02,p03,p04,p05,p06,p07,p08,p09,p10,p11,p12,p13,p14,p15  */
      {  /* ramp up   */ {  { 0,0,0,0,0,0,0,0,0,0,255,255,255,255,255,255 },
         /* ramp down */    { 255,255,255,255,255,255,0,0,0,0,0,0,0,0,0,0 }  }
      }, /*-------------------------------------------------------------------------------------*/
      /* profile  1 :  7 dBm | p00,p01,p02,p03,p04,p05,p06,p07,p08,p09,p10,p11,p12,p13,p14,p15  */
      {  /* ramp up   */ {  { 0,0,0,0,0,0,0,0,0,0,255,255,255,255,255,255 },
         /* ramp down */    { 255,255,255,255,255,255,0,0,0,0,0,0,0,0,0,0 }  }
      }, /*-------------------------------------------------------------------------------------*/
      /* profile  2 :  9 dBm | p00,p01,p02,p03,p04,p05,p06,p07,p08,p09,p10,p11,p12,p13,p14,p15  */
      {  /* ramp up   */ {  { 0,0,0,0,0,0,0,0,0,0,255,255,255,255,255,255 },
         /* ramp down */    { 255,255,255,255,255,255,0,0,0,0,0,0,0,0,0,0 }  }
      }, /*-------------------------------------------------------------------------------------*/
      /* profile  3 : 11 dBm | p00,p01,p02,p03,p04,p05,p06,p07,p08,p09,p10,p11,p12,p13,p14,p15  */
      {  /* ramp up   */ {  { 0,0,0,0,0,0,0,0,0,0,255,255,255,255,255,255 },
         /* ramp down */    { 255,255,255,255,255,255,0,0,0,0,0,0,0,0,0,0 }  }
      }, /*-------------------------------------------------------------------------------------*/
      /* profile  4 : 13 dBm | p00,p01,p02,p03,p04,p05,p06,p07,p08,p09,p10,p11,p12,p13,p14,p15  */
      {  /* ramp up   */ {  { 0,0,0,0,0,0,0,0,0,0,255,255,255,255,255,255 },
         /* ramp down */    { 255,255,255,255,255,255,0,0,0,0,0,0,0,0,0,0 }  }
      }, /*-------------------------------------------------------------------------------------*/
      /* profile  5 : 15 dBm | p00,p01,p02,p03,p04,p05,p06,p07,p08,p09,p10,p11,p12,p13,p14,p15  */
      {  /* ramp up   */ {  { 0,0,0,0,0,0,0,0,0,0,255,255,255,255,255,255 },
         /* ramp down */    { 255,255,255,255,255,255,0,0,0,0,0,0,0,0,0,0 }  }
      }, /*-------------------------------------------------------------------------------------*/
      /* profile  6 : 17 dBm | p00,p01,p02,p03,p04,p05,p06,p07,p08,p09,p10,p11,p12,p13,p14,p15  */
      {  /* ramp up   */ {  { 0,0,0,0,0,0,0,0,0,0,255,255,255,255,255,255 },
         /* ramp down */    { 255,255,255,255,255,255,0,0,0,0,0,0,0,0,0,0 }  }
      }, /*-------------------------------------------------------------------------------------*/
      /* profile  7 : 19 dBm | p00,p01,p02,p03,p04,p05,p06,p07,p08,p09,p10,p11,p12,p13,p14,p15  */
      {  /* ramp up   */ {  { 0,0,0,0,0,0,0,0,0,0,255,255,255,255,255,255 },
         /* ramp down */    { 255,255,255,255,255,255,0,0,0,0,0,0,0,0,0,0 }  }
      }, /*-------------------------------------------------------------------------------------*/
      /* profile  8 : 21 dBm | p00,p01,p02,p03,p04,p05,p06,p07,p08,p09,p10,p11,p12,p13,p14,p15  */
      {  /* ramp up   */ {  { 0,0,0,0,0,0,0,0,0,0,255,255,255,255,255,255 },
         /* ramp down */    { 255,255,255,255,255,255,0,0,0,0,0,0,0,0,0,0 }  }
      }, /*-------------------------------------------------------------------------------------*/
      /* profile  9 : 23 dBm | p00,p01,p02,p03,p04,p05,p06,p07,p08,p09,p10,p11,p12,p13,p14,p15  */
      {  /* ramp up   */ {  { 0,0,0,0,0,0,0,0,0,0,255,255,255,255,255,255 },
         /* ramp down */    { 255,255,255,255,255,255,0,0,0,0,0,0,0,0,0,0 }  }
      }, /*-------------------------------------------------------------------------------------*/
      /* profile 10 : 25 dBm | p00,p01,p02,p03,p04,p05,p06,p07,p08,p09,p10,p11,p12,p13,p14,p15  */
      {  /* ramp up   */ {  { 0,0,0,0,0,0,0,0,0,0,255,255,255,255,255,255 },
         /* ramp down */    { 255,255,255,255,255,255,0,0,0,0,0,0,0,0,0,0 }  }
      }, /*-------------------------------------------------------------------------------------*/
      /* profile 11 : 27 dBm | p00,p01,p02,p03,p04,p05,p06,p07,p08,p09,p10,p11,p12,p13,p14,p15  */
      {  /* ramp up   */ {  { 0,0,0,0,0,0,0,0,0,0,255,255,255,255,255,255 },
         /* ramp down */    { 255,255,255,255,255,255,0,0,0,0,0,0,0,0,0,0 }  }
      }, /*-------------------------------------------------------------------------------------*/
      /* profile 12 : 29 dBm | p00,p01,p02,p03,p04,p05,p06,p07,p08,p09,p10,p11,p12,p13,p14,p15  */
      {  /* ramp up   */ {  { 0,0,0,0,0,0,0,0,0,0,255,255,255,255,255,255 },
         /* ramp down */    { 255,255,255,255,255,255,0,0,0,0,0,0,0,0,0,0 }  }
      }, /*-------------------------------------------------------------------------------------*/
      /* profile 13 : 31 dBm | p00,p01,p02,p03,p04,p05,p06,p07,p08,p09,p10,p11,p12,p13,p14,p15  */
      {  /* ramp up   */ {  { 0,0,0,0,0,0,0,0,0,0,255,255,255,255,255,255 },
         /* ramp down */    { 255,255,255,255,255,255,0,0,0,0,0,0,0,0,0,0 }  }
      }, /*-------------------------------------------------------------------------------------*/
      /* profile 14 : 33 dBm | p00,p01,p02,p03,p04,p05,p06,p07,p08,p09,p10,p11,p12,p13,p14,p15  */
      {  /* ramp up   */ {  { 0,0,0,0,0,0,0,0,0,0,255,255,255,255,255,255 },
         /* ramp down */    { 255,255,255,255,255,255,0,0,0,0,0,0,0,0,0,0 }  }
      }, /*-------------------------------------------------------------------------------------*/
      /* profile 15 : 35 dBm | p00,p01,p02,p03,p04,p05,p06,p07,p08,p09,p10,p11,p12,p13,p14,p15  */
      {  /* ramp up   */ {  { 0,0,0,0,0,0,0,0,0,0,255,255,255,255,255,255 },
         /* ramp down */    { 255,255,255,255,255,255,0,0,0,0,0,0,0,0,0,0 }  }
      }, /*-------------------------------------------------------------------------------------*/
   },
   /* ARFCN WEIGHT */
   {
   #if IS_BSI_CLOSED_LOOP_TXPC_ON
      /* max arfcn , mid_level ,  hi_weight (store detector sub-band difference)   ,  lo_weight   */
      {     160    ,   21      , ((0)+(1<<12)), WEIGHT(1.000) },
      {     190    ,   21      , ((0)+(1<<12)), WEIGHT(1.000) },
      {     220    ,   21      , ((0)+(1<<12)), WEIGHT(1.000) },
      {     251    ,   21      , ((0)+(1<<12)), WEIGHT(1.000) },
      {      -1    ,   21      , ((0)+(1<<12)), WEIGHT(1.000) },
      {       0    ,   21      , ((0)+(1<<12)), WEIGHT(1.000) },
      {       0    ,   21      , ((0)+(1<<12)), WEIGHT(1.000) },
      {       0    ,   21      , ((0)+(1<<12)), WEIGHT(1.000) },
      {       0    ,   21      , ((0)+(1<<12)), WEIGHT(1.000) },
      {       0    ,   21      , ((0)+(1<<12)), WEIGHT(1.000) },
      {       0    ,   21      , ((0)+(1<<12)), WEIGHT(1.000) },
   #else
      /* max arfcn , mid_level ,  hi_weight   ,  lo_weight   */
      {     160    ,   21      , ((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096) },
      {     190    ,   21      , ((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096) },
      {     220    ,   21      , ((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096) },
      {     251    ,   21      , ((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096) },
   #endif
      /*-----------------------------------------------------*/
      { TABLE_END }
   },
   /* Battery WEIGHT */
   {  /*       low temp,       mid temp,        hi temp */
       {  ((0.000)*(1<<3)+4096),  ((0.000)*(1<<3)+4096),  ((0.000)*(1<<3)+4096)  },  /* low volt */
       {  ((0.000)*(1<<3)+4096),  ((0.000)*(1<<3)+4096),  ((0.000)*(1<<3)+4096)  },  /* mid volt */
       {  ((0.000)*(1<<3)+4096),  ((0.000)*(1<<3)+4096),  ((0.000)*(1<<3)+4096)  },  /*  hi volt */
   },
};

/* GSM900....................................................................*/

const sRAMPDATA  GSM_RampData_EPSK_SetDefault =
{
   /*-------------------------------------------------------------------------------------------*/
   /* lowest power */
   ((GSM_INTERSLOT_LOWEST_DAC_SetDefault)<<18) | ((APC_DC_OFFSET_SetDefault)<<8) | 5,
   /*-------------------------------------------------------------------------------------------*/
   /* power level  */
   /*   5,  7,  9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 27, 27, 27, 27 dBm                       */
   {   40, 56, 72, 88,104,120,136,152,168,184,200,216,216,216,216,216     },
   /*-------------------------------------------------------------------------------------------*/
   {
      /* profile  0 :  5 dBm | p00,p01,p02,p03,p04,p05,p06,p07,p08,p09,p10,p11,p12,p13,p14,p15  */
      {  /* ramp up   */ {  { 0,0,0,0,0,0,0,0,0,0,255,255,255,255,255,255 },
         /* ramp down */    { 255,255,255,255,255,255,0,0,0,0,0,0,0,0,0,0 }  }
      }, /*-------------------------------------------------------------------------------------*/
      /* profile  1 :  7 dBm | p00,p01,p02,p03,p04,p05,p06,p07,p08,p09,p10,p11,p12,p13,p14,p15  */
      {  /* ramp up   */ {  { 0,0,0,0,0,0,0,0,0,0,255,255,255,255,255,255 },
         /* ramp down */    { 255,255,255,255,255,255,0,0,0,0,0,0,0,0,0,0 }  }
      }, /*-------------------------------------------------------------------------------------*/
      /* profile  2 :  9 dBm | p00,p01,p02,p03,p04,p05,p06,p07,p08,p09,p10,p11,p12,p13,p14,p15  */
      {  /* ramp up   */ {  { 0,0,0,0,0,0,0,0,0,0,255,255,255,255,255,255 },
         /* ramp down */    { 255,255,255,255,255,255,0,0,0,0,0,0,0,0,0,0 }  }
      }, /*-------------------------------------------------------------------------------------*/
      /* profile  3 : 11 dBm | p00,p01,p02,p03,p04,p05,p06,p07,p08,p09,p10,p11,p12,p13,p14,p15  */
      {  /* ramp up   */ {  { 0,0,0,0,0,0,0,0,0,0,255,255,255,255,255,255 },
         /* ramp down */    { 255,255,255,255,255,255,0,0,0,0,0,0,0,0,0,0 }  }
      }, /*-------------------------------------------------------------------------------------*/
      /* profile  4 : 13 dBm | p00,p01,p02,p03,p04,p05,p06,p07,p08,p09,p10,p11,p12,p13,p14,p15  */
      {  /* ramp up   */ {  { 0,0,0,0,0,0,0,0,0,0,255,255,255,255,255,255 },
         /* ramp down */    { 255,255,255,255,255,255,0,0,0,0,0,0,0,0,0,0 }  }
      }, /*-------------------------------------------------------------------------------------*/
      /* profile  5 : 15 dBm | p00,p01,p02,p03,p04,p05,p06,p07,p08,p09,p10,p11,p12,p13,p14,p15  */
      {  /* ramp up   */ {  { 0,0,0,0,0,0,0,0,0,0,255,255,255,255,255,255 },
         /* ramp down */    { 255,255,255,255,255,255,0,0,0,0,0,0,0,0,0,0 }  }
      }, /*-------------------------------------------------------------------------------------*/
      /* profile  6 : 17 dBm | p00,p01,p02,p03,p04,p05,p06,p07,p08,p09,p10,p11,p12,p13,p14,p15  */
      {  /* ramp up   */ {  { 0,0,0,0,0,0,0,0,0,0,255,255,255,255,255,255 },
         /* ramp down */    { 255,255,255,255,255,255,0,0,0,0,0,0,0,0,0,0 }  }
      }, /*-------------------------------------------------------------------------------------*/
      /* profile  7 : 19 dBm | p00,p01,p02,p03,p04,p05,p06,p07,p08,p09,p10,p11,p12,p13,p14,p15  */
      {  /* ramp up   */ {  { 0,0,0,0,0,0,0,0,0,0,255,255,255,255,255,255 },
         /* ramp down */    { 255,255,255,255,255,255,0,0,0,0,0,0,0,0,0,0 }  }
      }, /*-------------------------------------------------------------------------------------*/
      /* profile  8 : 21 dBm | p00,p01,p02,p03,p04,p05,p06,p07,p08,p09,p10,p11,p12,p13,p14,p15  */
      {  /* ramp up   */ {  { 0,0,0,0,0,0,0,0,0,0,255,255,255,255,255,255 },
         /* ramp down */    { 255,255,255,255,255,255,0,0,0,0,0,0,0,0,0,0 }  }
      }, /*-------------------------------------------------------------------------------------*/
      /* profile  9 : 23 dBm | p00,p01,p02,p03,p04,p05,p06,p07,p08,p09,p10,p11,p12,p13,p14,p15  */
      {  /* ramp up   */ {  { 0,0,0,0,0,0,0,0,0,0,255,255,255,255,255,255 },
         /* ramp down */    { 255,255,255,255,255,255,0,0,0,0,0,0,0,0,0,0 }  }
      }, /*-------------------------------------------------------------------------------------*/
      /* profile 10 : 25 dBm | p00,p01,p02,p03,p04,p05,p06,p07,p08,p09,p10,p11,p12,p13,p14,p15  */
      {  /* ramp up   */ {  { 0,0,0,0,0,0,0,0,0,0,255,255,255,255,255,255 },
         /* ramp down */    { 255,255,255,255,255,255,0,0,0,0,0,0,0,0,0,0 }  }
      }, /*-------------------------------------------------------------------------------------*/
      /* profile 11 : 27 dBm | p00,p01,p02,p03,p04,p05,p06,p07,p08,p09,p10,p11,p12,p13,p14,p15  */
      {  /* ramp up   */ {  { 0,0,0,0,0,0,0,0,0,0,255,255,255,255,255,255 },
         /* ramp down */    { 255,255,255,255,255,255,0,0,0,0,0,0,0,0,0,0 }  }
      }, /*-------------------------------------------------------------------------------------*/
      /* profile 12 : 29 dBm | p00,p01,p02,p03,p04,p05,p06,p07,p08,p09,p10,p11,p12,p13,p14,p15  */
      {  /* ramp up   */ {  { 0,0,0,0,0,0,0,0,0,0,255,255,255,255,255,255 },
         /* ramp down */    { 255,255,255,255,255,255,0,0,0,0,0,0,0,0,0,0 }  }
      }, /*-------------------------------------------------------------------------------------*/
      /* profile 13 : 31 dBm | p00,p01,p02,p03,p04,p05,p06,p07,p08,p09,p10,p11,p12,p13,p14,p15  */
      {  /* ramp up   */ {  { 0,0,0,0,0,0,0,0,0,0,255,255,255,255,255,255 },
         /* ramp down */    { 255,255,255,255,255,255,0,0,0,0,0,0,0,0,0,0 }  }
      }, /*-------------------------------------------------------------------------------------*/
      /* profile 14 : 33 dBm | p00,p01,p02,p03,p04,p05,p06,p07,p08,p09,p10,p11,p12,p13,p14,p15  */
      {  /* ramp up   */ {  { 0,0,0,0,0,0,0,0,0,0,255,255,255,255,255,255 },
         /* ramp down */    { 255,255,255,255,255,255,0,0,0,0,0,0,0,0,0,0 }  }
      }, /*-------------------------------------------------------------------------------------*/
      /* profile 15 : 35 dBm | p00,p01,p02,p03,p04,p05,p06,p07,p08,p09,p10,p11,p12,p13,p14,p15  */
      {  /* ramp up   */ {  { 0,0,0,0,0,0,0,0,0,0,255,255,255,255,255,255 },
         /* ramp down */    { 255,255,255,255,255,255,0,0,0,0,0,0,0,0,0,0 }  }
      }, /*-------------------------------------------------------------------------------------*/
   },
   /* ARFCN WEIGHT */
   {
   #if IS_BSI_CLOSED_LOOP_TXPC_ON
      /* max arfcn , mid_level ,  hi_weight (store detector sub-band difference)  ,  lo_weight   */
      {      40    ,    21     , ((0)+(1<<12)), WEIGHT(1.000) },
      {      82    ,    21     , ((0)+(1<<12)), WEIGHT(1.000) },
      {     124    ,    21     , ((0)+(1<<12)), WEIGHT(1.000) },
      {    1023    ,    21     , ((0)+(1<<12)), WEIGHT(1.000) },
      {      -1    ,    21     , ((0)+(1<<12)), WEIGHT(1.000) },
      {       0    ,    21     , ((0)+(1<<12)), WEIGHT(1.000) },
      {       0    ,    21     , ((0)+(1<<12)), WEIGHT(1.000) },
      {       0    ,    21     , ((0)+(1<<12)), WEIGHT(1.000) },
      {       0    ,    21     , ((0)+(1<<12)), WEIGHT(1.000) },
      {       0    ,    21     , ((0)+(1<<12)), WEIGHT(1.000) },
      {       0    ,    21     , ((0)+(1<<12)), WEIGHT(1.000) },
   #else
      /* max arfcn , mid_level ,  hi_weight   ,  lo_weight   */
      {      40    ,    21     , ((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096) },
      {      82    ,    21     , ((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096) },
      {     124    ,    21     , ((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096) },
      {    1023    ,    21     , ((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096) },
   #endif
      /*-----------------------------------------------------*/
      { TABLE_END }
   },
   /* Battery WEIGHT */
   {  /*       low temp,       mid temp,        hi temp */
       {  ((0.000)*(1<<3)+4096),  ((0.000)*(1<<3)+4096),  ((0.000)*(1<<3)+4096)  },  /* low volt */
       {  ((0.000)*(1<<3)+4096),  ((0.000)*(1<<3)+4096),  ((0.000)*(1<<3)+4096)  },  /* mid volt */
       {  ((0.000)*(1<<3)+4096),  ((0.000)*(1<<3)+4096),  ((0.000)*(1<<3)+4096)  },  /*  hi volt */
   },
};


/* DCS1800....................................................................*/

const sRAMPDATA  DCS_RampData_EPSK_SetDefault =
{
   /*-------------------------------------------------------------------------------------------*/
   /* lowest power */
   ((DCS_INTERSLOT_LOWEST_DAC_SetDefault)<<18) | ((APC_DC_OFFSET_SetDefault)<<8) | 0,
   /*-------------------------------------------------------------------------------------------*/
   /* power level  */
   /*   0,  2,  4,  6,  8, 10, 12, 14, 16, 18, 20, 22, 24, 26, 26, 26 dBm                       */
   {    0, 16, 32, 48, 64, 80, 96,112,128,144,160,176,192,208,208,208     },
   /*-------------------------------------------------------------------------------------------*/
   {
      /* profile  0 :  5 dBm | p00,p01,p02,p03,p04,p05,p06,p07,p08,p09,p10,p11,p12,p13,p14,p15  */
      {  /* ramp up   */ {  { 0,0,0,0,0,0,0,0,0,0,255,255,255,255,255,255 },
         /* ramp down */    { 255,255,255,255,255,255,0,0,0,0,0,0,0,0,0,0 }  }
      }, /*-------------------------------------------------------------------------------------*/
      /* profile  1 :  7 dBm | p00,p01,p02,p03,p04,p05,p06,p07,p08,p09,p10,p11,p12,p13,p14,p15  */
      {  /* ramp up   */ {  { 0,0,0,0,0,0,0,0,0,0,255,255,255,255,255,255 },
         /* ramp down */    { 255,255,255,255,255,255,0,0,0,0,0,0,0,0,0,0 }  }
      }, /*-------------------------------------------------------------------------------------*/
      /* profile  2 :  9 dBm | p00,p01,p02,p03,p04,p05,p06,p07,p08,p09,p10,p11,p12,p13,p14,p15  */
      {  /* ramp up   */ {  { 0,0,0,0,0,0,0,0,0,0,255,255,255,255,255,255 },
         /* ramp down */    { 255,255,255,255,255,255,0,0,0,0,0,0,0,0,0,0 }  }
      }, /*-------------------------------------------------------------------------------------*/
      /* profile  3 : 11 dBm | p00,p01,p02,p03,p04,p05,p06,p07,p08,p09,p10,p11,p12,p13,p14,p15  */
      {  /* ramp up   */ {  { 0,0,0,0,0,0,0,0,0,0,255,255,255,255,255,255 },
         /* ramp down */    { 255,255,255,255,255,255,0,0,0,0,0,0,0,0,0,0 }  }
      }, /*-------------------------------------------------------------------------------------*/
      /* profile  4 : 13 dBm | p00,p01,p02,p03,p04,p05,p06,p07,p08,p09,p10,p11,p12,p13,p14,p15  */
      {  /* ramp up   */ {  { 0,0,0,0,0,0,0,0,0,0,255,255,255,255,255,255 },
         /* ramp down */    { 255,255,255,255,255,255,0,0,0,0,0,0,0,0,0,0 }  }
      }, /*-------------------------------------------------------------------------------------*/
      /* profile  5 : 15 dBm | p00,p01,p02,p03,p04,p05,p06,p07,p08,p09,p10,p11,p12,p13,p14,p15  */
      {  /* ramp up   */ {  { 0,0,0,0,0,0,0,0,0,0,255,255,255,255,255,255 },
         /* ramp down */    { 255,255,255,255,255,255,0,0,0,0,0,0,0,0,0,0 }  }
      }, /*-------------------------------------------------------------------------------------*/
      /* profile  6 : 17 dBm | p00,p01,p02,p03,p04,p05,p06,p07,p08,p09,p10,p11,p12,p13,p14,p15  */
      {  /* ramp up   */ {  { 0,0,0,0,0,0,0,0,0,0,255,255,255,255,255,255 },
         /* ramp down */    { 255,255,255,255,255,255,0,0,0,0,0,0,0,0,0,0 }  }
      }, /*-------------------------------------------------------------------------------------*/
      /* profile  7 : 19 dBm | p00,p01,p02,p03,p04,p05,p06,p07,p08,p09,p10,p11,p12,p13,p14,p15  */
      {  /* ramp up   */ {  { 0,0,0,0,0,0,0,0,0,0,255,255,255,255,255,255 },
         /* ramp down */    { 255,255,255,255,255,255,0,0,0,0,0,0,0,0,0,0 }  }
      }, /*-------------------------------------------------------------------------------------*/
      /* profile  8 : 21 dBm | p00,p01,p02,p03,p04,p05,p06,p07,p08,p09,p10,p11,p12,p13,p14,p15  */
      {  /* ramp up   */ {  { 0,0,0,0,0,0,0,0,0,0,255,255,255,255,255,255 },
         /* ramp down */    { 255,255,255,255,255,255,0,0,0,0,0,0,0,0,0,0 }  }
      }, /*-------------------------------------------------------------------------------------*/
      /* profile  9 : 23 dBm | p00,p01,p02,p03,p04,p05,p06,p07,p08,p09,p10,p11,p12,p13,p14,p15  */
      {  /* ramp up   */ {  { 0,0,0,0,0,0,0,0,0,0,255,255,255,255,255,255 },
         /* ramp down */    { 255,255,255,255,255,255,0,0,0,0,0,0,0,0,0,0 }  }
      }, /*-------------------------------------------------------------------------------------*/
      /* profile 10 : 25 dBm | p00,p01,p02,p03,p04,p05,p06,p07,p08,p09,p10,p11,p12,p13,p14,p15  */
      {  /* ramp up   */ {  { 0,0,0,0,0,0,0,0,0,0,255,255,255,255,255,255 },
         /* ramp down */    { 255,255,255,255,255,255,0,0,0,0,0,0,0,0,0,0 }  }
      }, /*-------------------------------------------------------------------------------------*/
      /* profile 11 : 27 dBm | p00,p01,p02,p03,p04,p05,p06,p07,p08,p09,p10,p11,p12,p13,p14,p15  */
      {  /* ramp up   */ {  { 0,0,0,0,0,0,0,0,0,0,255,255,255,255,255,255 },
         /* ramp down */    { 255,255,255,255,255,255,0,0,0,0,0,0,0,0,0,0 }  }
      }, /*-------------------------------------------------------------------------------------*/
      /* profile 12 : 29 dBm | p00,p01,p02,p03,p04,p05,p06,p07,p08,p09,p10,p11,p12,p13,p14,p15  */
      {  /* ramp up   */ {  { 0,0,0,0,0,0,0,0,0,0,255,255,255,255,255,255 },
         /* ramp down */    { 255,255,255,255,255,255,0,0,0,0,0,0,0,0,0,0 }  }
      }, /*-------------------------------------------------------------------------------------*/
      /* profile 13 : 31 dBm | p00,p01,p02,p03,p04,p05,p06,p07,p08,p09,p10,p11,p12,p13,p14,p15  */
      {  /* ramp up   */ {  { 0,0,0,0,0,0,0,0,0,0,255,255,255,255,255,255 },
         /* ramp down */    { 255,255,255,255,255,255,0,0,0,0,0,0,0,0,0,0 }  }
      }, /*-------------------------------------------------------------------------------------*/
      /* profile 14 : 33 dBm | p00,p01,p02,p03,p04,p05,p06,p07,p08,p09,p10,p11,p12,p13,p14,p15  */
      {  /* ramp up   */ {  { 0,0,0,0,0,0,0,0,0,0,255,255,255,255,255,255 },
         /* ramp down */    { 255,255,255,255,255,255,0,0,0,0,0,0,0,0,0,0 }  }
      }, /*-------------------------------------------------------------------------------------*/
      /* profile 15 : 35 dBm | p00,p01,p02,p03,p04,p05,p06,p07,p08,p09,p10,p11,p12,p13,p14,p15  */
      {  /* ramp up   */ {  { 0,0,0,0,0,0,0,0,0,0,255,255,255,255,255,255 },
         /* ramp down */    { 255,255,255,255,255,255,0,0,0,0,0,0,0,0,0,0 }  }
      }, /*-------------------------------------------------------------------------------------*/
   },
   /* ARFCN WEIGHT */
   {
   #if IS_BSI_CLOSED_LOOP_TXPC_ON
      /* max arfcn , mid_level ,  hi_weight (store detector sub-band difference)  ,  lo_weight   */
      {     520    ,    16     , ((0)+(1<<12)), WEIGHT(1.000) },
      {     560    ,    16     , ((0)+(1<<12)), WEIGHT(1.000) },
      {     600    ,    16     , ((0)+(1<<12)), WEIGHT(1.000) },
      {     630    ,    16     , ((0)+(1<<12)), WEIGHT(1.000) },
      {     660    ,    16     , ((0)+(1<<12)), WEIGHT(1.000) },
      {     680    ,    16     , ((0)+(1<<12)), WEIGHT(1.000) },
      {     720    ,    16     , ((0)+(1<<12)), WEIGHT(1.000) },
      {     730    ,    16     , ((0)+(1<<12)), WEIGHT(1.000) },
      {     750    ,    16     , ((0)+(1<<12)), WEIGHT(1.000) },
      {     800    ,    16     , ((0)+(1<<12)), WEIGHT(1.000) },
      {     885    ,    16     , ((0)+(1<<12)), WEIGHT(1.000) },
   #else
      /* max arfcn , mid_level ,  hi_weight   ,  lo_weight   */
      {     520    ,    16     , ((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096) },
      {     560    ,    16     , ((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096) },
      {     600    ,    16     , ((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096) },
      {     630    ,    16     , ((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096) },
      {     660    ,    16     , ((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096) },
      {     680    ,    16     , ((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096) },
      {     720    ,    16     , ((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096) },
      {     730    ,    16     , ((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096) },
      {     750    ,    16     , ((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096) },
      {     800    ,    16     , ((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096) },
      {     885    ,    16     , ((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096) },
   #endif
      /*-----------------------------------------------------*/
      { TABLE_END }
   },
   /* Battery WEIGHT */
   {  /*       low temp,       mid temp,        hi temp */
       {  ((0.000)*(1<<3)+4096),  ((0.000)*(1<<3)+4096),  ((0.000)*(1<<3)+4096)  },  /* low volt */
       {  ((0.000)*(1<<3)+4096),  ((0.000)*(1<<3)+4096),  ((0.000)*(1<<3)+4096)  },  /* mid volt */
       {  ((0.000)*(1<<3)+4096),  ((0.000)*(1<<3)+4096),  ((0.000)*(1<<3)+4096)  },  /*  hi volt */
   },
};


/* PCS1900....................................................................*/

const sRAMPDATA  PCS_RampData_EPSK_SetDefault =
{
   /*-------------------------------------------------------------------------------------------*/
   /* lowest power */
   ((PCS_INTERSLOT_LOWEST_DAC_SetDefault)<<18) | ((APC_DC_OFFSET_SetDefault)<<8) | 0,
   /*-------------------------------------------------------------------------------------------*/
   /* power level  */
   /*   0,  2,  4,  6,  8, 10, 12, 14, 16, 18, 20, 22, 24, 26, 26, 26 dBm                       */
   {    0, 16, 32, 48, 64, 80, 96,112,128,144,160,176,192,208,208,208     },
   /*-------------------------------------------------------------------------------------------*/
   {
      /* profile  0 :  5 dBm | p00,p01,p02,p03,p04,p05,p06,p07,p08,p09,p10,p11,p12,p13,p14,p15  */
      {  /* ramp up   */ {  { 0,0,0,0,0,0,0,0,0,0,255,255,255,255,255,255 },
         /* ramp down */    { 255,255,255,255,255,255,0,0,0,0,0,0,0,0,0,0 }  }
      }, /*-------------------------------------------------------------------------------------*/
      /* profile  1 :  7 dBm | p00,p01,p02,p03,p04,p05,p06,p07,p08,p09,p10,p11,p12,p13,p14,p15  */
      {  /* ramp up   */ {  { 0,0,0,0,0,0,0,0,0,0,255,255,255,255,255,255 },
         /* ramp down */    { 255,255,255,255,255,255,0,0,0,0,0,0,0,0,0,0 }  }
      }, /*-------------------------------------------------------------------------------------*/
      /* profile  2 :  9 dBm | p00,p01,p02,p03,p04,p05,p06,p07,p08,p09,p10,p11,p12,p13,p14,p15  */
      {  /* ramp up   */ {  { 0,0,0,0,0,0,0,0,0,0,255,255,255,255,255,255 },
         /* ramp down */    { 255,255,255,255,255,255,0,0,0,0,0,0,0,0,0,0 }  }
      }, /*-------------------------------------------------------------------------------------*/
      /* profile  3 : 11 dBm | p00,p01,p02,p03,p04,p05,p06,p07,p08,p09,p10,p11,p12,p13,p14,p15  */
      {  /* ramp up   */ {  { 0,0,0,0,0,0,0,0,0,0,255,255,255,255,255,255 },
         /* ramp down */    { 255,255,255,255,255,255,0,0,0,0,0,0,0,0,0,0 }  }
      }, /*-------------------------------------------------------------------------------------*/
      /* profile  4 : 13 dBm | p00,p01,p02,p03,p04,p05,p06,p07,p08,p09,p10,p11,p12,p13,p14,p15  */
      {  /* ramp up   */ {  { 0,0,0,0,0,0,0,0,0,0,255,255,255,255,255,255 },
         /* ramp down */    { 255,255,255,255,255,255,0,0,0,0,0,0,0,0,0,0 }  }
      }, /*-------------------------------------------------------------------------------------*/
      /* profile  5 : 15 dBm | p00,p01,p02,p03,p04,p05,p06,p07,p08,p09,p10,p11,p12,p13,p14,p15  */
      {  /* ramp up   */ {  { 0,0,0,0,0,0,0,0,0,0,255,255,255,255,255,255 },
         /* ramp down */    { 255,255,255,255,255,255,0,0,0,0,0,0,0,0,0,0 }  }
      }, /*-------------------------------------------------------------------------------------*/
      /* profile  6 : 17 dBm | p00,p01,p02,p03,p04,p05,p06,p07,p08,p09,p10,p11,p12,p13,p14,p15  */
      {  /* ramp up   */ {  { 0,0,0,0,0,0,0,0,0,0,255,255,255,255,255,255 },
         /* ramp down */    { 255,255,255,255,255,255,0,0,0,0,0,0,0,0,0,0 }  }
      }, /*-------------------------------------------------------------------------------------*/
      /* profile  7 : 19 dBm | p00,p01,p02,p03,p04,p05,p06,p07,p08,p09,p10,p11,p12,p13,p14,p15  */
      {  /* ramp up   */ {  { 0,0,0,0,0,0,0,0,0,0,255,255,255,255,255,255 },
         /* ramp down */    { 255,255,255,255,255,255,0,0,0,0,0,0,0,0,0,0 }  }
      }, /*-------------------------------------------------------------------------------------*/
      /* profile  8 : 21 dBm | p00,p01,p02,p03,p04,p05,p06,p07,p08,p09,p10,p11,p12,p13,p14,p15  */
      {  /* ramp up   */ {  { 0,0,0,0,0,0,0,0,0,0,255,255,255,255,255,255 },
         /* ramp down */    { 255,255,255,255,255,255,0,0,0,0,0,0,0,0,0,0 }  }
      }, /*-------------------------------------------------------------------------------------*/
      /* profile  9 : 23 dBm | p00,p01,p02,p03,p04,p05,p06,p07,p08,p09,p10,p11,p12,p13,p14,p15  */
      {  /* ramp up   */ {  { 0,0,0,0,0,0,0,0,0,0,255,255,255,255,255,255 },
         /* ramp down */    { 255,255,255,255,255,255,0,0,0,0,0,0,0,0,0,0 }  }
      }, /*-------------------------------------------------------------------------------------*/
      /* profile 10 : 25 dBm | p00,p01,p02,p03,p04,p05,p06,p07,p08,p09,p10,p11,p12,p13,p14,p15  */
      {  /* ramp up   */ {  { 0,0,0,0,0,0,0,0,0,0,255,255,255,255,255,255 },
         /* ramp down */    { 255,255,255,255,255,255,0,0,0,0,0,0,0,0,0,0 }  }
      }, /*-------------------------------------------------------------------------------------*/
      /* profile 11 : 27 dBm | p00,p01,p02,p03,p04,p05,p06,p07,p08,p09,p10,p11,p12,p13,p14,p15  */
      {  /* ramp up   */ {  { 0,0,0,0,0,0,0,0,0,0,255,255,255,255,255,255 },
         /* ramp down */    { 255,255,255,255,255,255,0,0,0,0,0,0,0,0,0,0 }  }
      }, /*-------------------------------------------------------------------------------------*/
      /* profile 12 : 29 dBm | p00,p01,p02,p03,p04,p05,p06,p07,p08,p09,p10,p11,p12,p13,p14,p15  */
      {  /* ramp up   */ {  { 0,0,0,0,0,0,0,0,0,0,255,255,255,255,255,255 },
         /* ramp down */    { 255,255,255,255,255,255,0,0,0,0,0,0,0,0,0,0 }  }
      }, /*-------------------------------------------------------------------------------------*/
      /* profile 13 : 31 dBm | p00,p01,p02,p03,p04,p05,p06,p07,p08,p09,p10,p11,p12,p13,p14,p15  */
      {  /* ramp up   */ {  { 0,0,0,0,0,0,0,0,0,0,255,255,255,255,255,255 },
         /* ramp down */    { 255,255,255,255,255,255,0,0,0,0,0,0,0,0,0,0 }  }
      }, /*-------------------------------------------------------------------------------------*/
      /* profile 14 : 33 dBm | p00,p01,p02,p03,p04,p05,p06,p07,p08,p09,p10,p11,p12,p13,p14,p15  */
      {  /* ramp up   */ {  { 0,0,0,0,0,0,0,0,0,0,255,255,255,255,255,255 },
         /* ramp down */    { 255,255,255,255,255,255,0,0,0,0,0,0,0,0,0,0 }  }
      }, /*-------------------------------------------------------------------------------------*/
      /* profile 15 : 35 dBm | p00,p01,p02,p03,p04,p05,p06,p07,p08,p09,p10,p11,p12,p13,p14,p15  */
      {  /* ramp up   */ {  { 0,0,0,0,0,0,0,0,0,0,255,255,255,255,255,255 },
         /* ramp down */    { 255,255,255,255,255,255,0,0,0,0,0,0,0,0,0,0 }  }
      }, /*-------------------------------------------------------------------------------------*/
   },
   /* ARFCN WEIGHT */
   {
   #if IS_BSI_CLOSED_LOOP_TXPC_ON
      /* max arfcn , mid_level ,  hi_weight (store detector sub-band difference)  ,  lo_weight   */
      {     520    ,    16     , ((0)+(1<<12)), WEIGHT(1.000) },
      {     560    ,    16     , ((0)+(1<<12)), WEIGHT(1.000) },
      {     600    ,    16     , ((0)+(1<<12)), WEIGHT(1.000) },
      {     630    ,    16     , ((0)+(1<<12)), WEIGHT(1.000) },
      {     660    ,    16     , ((0)+(1<<12)), WEIGHT(1.000) },
      {     680    ,    16     , ((0)+(1<<12)), WEIGHT(1.000) },
      {     720    ,    16     , ((0)+(1<<12)), WEIGHT(1.000) },
      {     730    ,    16     , ((0)+(1<<12)), WEIGHT(1.000) },
      {     750    ,    16     , ((0)+(1<<12)), WEIGHT(1.000) },
      {     800    ,    16     , ((0)+(1<<12)), WEIGHT(1.000) },
      {     810    ,    16     , ((0)+(1<<12)), WEIGHT(1.000) },
   #else
      /* max arfcn , mid_level ,  hi_weight   ,  lo_weight   */
      {     520    ,    16     , ((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096) },
      {     560    ,    16     , ((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096) },
      {     600    ,    16     , ((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096) },
      {     630    ,    16     , ((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096) },
      {     660    ,    16     , ((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096) },
      {     680    ,    16     , ((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096) },
      {     720    ,    16     , ((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096) },
      {     730    ,    16     , ((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096) },
      {     750    ,    16     , ((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096) },
      {     800    ,    16     , ((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096) },
      {     810    ,    16     , ((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096) },
   #endif
      /*-----------------------------------------------------*/
      { TABLE_END }
   },
   /* Battery WEIGHT */
   {  /*       low temp,       mid temp,        hi temp */
       {  ((0.000)*(1<<3)+4096),  ((0.000)*(1<<3)+4096),  ((0.000)*(1<<3)+4096)  },  /* low volt */
       {  ((0.000)*(1<<3)+4096),  ((0.000)*(1<<3)+4096),  ((0.000)*(1<<3)+4096)  },  /* mid volt */
       {  ((0.000)*(1<<3)+4096),  ((0.000)*(1<<3)+4096),  ((0.000)*(1<<3)+4096)  },  /*  hi volt */
   },
};

/*..........................................................................*/

const sRAMPDATA*  RampData_EPSK_SetDefault[] =
{
   0,                                      /* FrequencyBand400 (not support)  */
   &GSM850_RampData_EPSK_SetDefault,                  /* FrequencyBand850                */
   &GSM_RampData_EPSK_SetDefault,                     /* FrequencyBand900                */
   &DCS_RampData_EPSK_SetDefault,                     /* FrequencyBand1800               */
   &PCS_RampData_EPSK_SetDefault,                     /* FrequencyBand1900               */
};

#undef  APC_DC_OFFSET_SetDefault
//#undef  APC_DC_OFFSET_LB

#endif//(__EPSK_TX__)

#if IS_TX_POWER_CONTROL_SUPPORT

const sTXPC_TEMPDATA TEMP_DAC_SetDefault =
{  /* temperature */
   #if defined(__L1_TEMPERATURE_RANGE_V2__)
   /* -10,   5,  20,  35,  55,  70,  85,  90 */
  { 320, 362, 411, 457, 522, 570, 631, 664 }
   #else
   /* -10,   5,  20,  35,  45,  55,  60,  65 */
  { 334, 378, 424, 467, 501, 531, 546, 560 }
   #endif
};

/* GSM850............................................................................*/

const sTXPC_TEMPDATA GSM850_TXTEMP_Data_SetDefault =
{  /* temperature */
   #if defined(__L1_TEMPERATURE_RANGE_V2__)
   /* -10,   5,  20,  35,  55,  70,  85,  90 */
  { 320, 362, 411, 457, 522, 570, 631, 664 }
   #else
   /* -10,   5,  20,  35,  45,  55,  60,  65 */
  { 334, 378, 424, 467, 501, 531, 546, 560 }
   #endif
};

/* GSM900............................................................................*/

const sTXPC_TEMPDATA GSM_TXTEMP_Data_SetDefault =
{  /* temperature */
   #if defined(__L1_TEMPERATURE_RANGE_V2__)
   /* -10,   5,  20,  35,  55,  70,  85,  90 */
  { 320, 362, 411, 457, 522, 570, 631, 664 }
   #else
   /* -10,   5,  20,  35,  45,  55,  60,  65 */
  { 334, 378, 424, 467, 501, 531, 546, 560 }
   #endif
};

/* DCS1800...........................................................................*/

const sTXPC_TEMPDATA DCS_TXTEMP_Data_SetDefault =
{  /* temperature */
   #if defined(__L1_TEMPERATURE_RANGE_V2__)
   /* -10,   5,  20,  35,  55,  70,  85,  90 */
  { 320, 362, 411, 457, 522, 570, 631, 664 }
   #else
   /* -10,   5,  20,  35,  45,  55,  60,  65 */
  { 334, 378, 424, 467, 501, 531, 546, 560 }
   #endif
};

/* PCS1900............................................................................*/

const sTXPC_TEMPDATA PCS_TXTEMP_Data_SetDefault =
{  /* temperature */
   #if defined(__L1_TEMPERATURE_RANGE_V2__)
   /* -10,   5,  20,  35,  55,  70,  85,  90 */
  { 320, 362, 411, 457, 522, 570, 631, 664 }
   #else
   /* -10,   5,  20,  35,  45,  55,  60,  65 */
  { 334, 378, 424, 467, 501, 531, 546, 560 }
   #endif
};

const sTXPC_TEMPDATA* TXTEMP_Data_SetDefault[] =
{
   &TEMP_DAC_SetDefault,                   /* use this field to store themistor DAC  */
   &GSM850_TXTEMP_Data_SetDefault,         /* FrequencyBand850                       */
   &GSM_TXTEMP_Data_SetDefault,            /* FrequencyBand900                       */
   &DCS_TXTEMP_Data_SetDefault,            /* FrequencyBand1800                      */
   &PCS_TXTEMP_Data_SetDefault,            /* FrequencyBand1900                      */
};

   #if defined(__EPSK_TX__)

/* GSM850............................................................................*/

const sTXPC_TEMPDATA GSM850_TXTEMP_Data_EPSK_SetDefault =
{  /* temperature */
   #if defined(__L1_TEMPERATURE_RANGE_V2__)
   /* -10,   5,  20,  35,  55,  70,  85,  90 */
  { 320, 362, 411, 457, 522, 570, 631, 664 }
   #else
   /* -10,   5,  20,  35,  45,  55,  60,  65 */
  { 334, 378, 424, 467, 501, 531, 546, 560 }
   #endif
};

/* GSM900............................................................................*/

const sTXPC_TEMPDATA GSM_TXTEMP_Data_EPSK_SetDefault =
{  /* temperature */
   #if defined(__L1_TEMPERATURE_RANGE_V2__)
   /* -10,   5,  20,  35,  55,  70,  85,  90 */
  { 320, 362, 411, 457, 522, 570, 631, 664 }
   #else
   /* -10,   5,  20,  35,  45,  55,  60,  65 */
  { 334, 378, 424, 467, 501, 531, 546, 560 }
   #endif
};

/* DCS1800...........................................................................*/

const sTXPC_TEMPDATA DCS_TXTEMP_Data_EPSK_SetDefault =
{  /* temperature */
   #if defined(__L1_TEMPERATURE_RANGE_V2__)
   /* -10,   5,  20,  35,  55,  70,  85,  90 */
  { 320, 362, 411, 457, 522, 570, 631, 664 }
   #else
   /* -10,   5,  20,  35,  45,  55,  60,  65 */
  { 334, 378, 424, 467, 501, 531, 546, 560 }
   #endif
};

/* PCS1900............................................................................*/

const sTXPC_TEMPDATA PCS_TXTEMP_Data_EPSK_SetDefault =
{  /* temperature */
   #if defined(__L1_TEMPERATURE_RANGE_V2__)
   /* -10,   5,  20,  35,  55,  70,  85,  90 */
  { 320, 362, 411, 457, 522, 570, 631, 664 }
   #else
   /* -10,   5,  20,  35,  45,  55,  60,  65 */
  { 334, 378, 424, 467, 501, 531, 546, 560 }
   #endif
};

const sTXPC_TEMPDATA* TXTEMP_Data_EPSK_SetDefault[] =
{
   0,                                /* FrequencyBand400 (not support) */
   &GSM850_TXTEMP_Data_EPSK_SetDefault,         /* FrequencyBand850               */
   &GSM_TXTEMP_Data_EPSK_SetDefault,            /* FrequencyBand900               */
   &DCS_TXTEMP_Data_EPSK_SetDefault,            /* FrequencyBand1800              */
   &PCS_TXTEMP_Data_EPSK_SetDefault,            /* FrequencyBand1900              */
};
   #endif /* __EPSK_TX__ */

   #if IS_TXPC_CL_AUXADC_SUPPORT || IS_TXPC_CL_BSI_SUPPORT

/* GSM850............................................................................*/

const sTXPC_ADCDATA GSM850_TXADC_Data_SetDefault =
{  /*power level
     5,  7,   9,  11,  13,  15,  17,  19,  21,  23,  25,  27,  29,  31,  33,  35 dBm */
 { 800,920,1040,1160,1280,1400,1520,1640,1760,1880,2000,2120,2240,2360,2480,2600 }
};

/* GSM900............................................................................*/

const sTXPC_ADCDATA GSM_TXADC_Data_SetDefault =
{  /*power level
     5,  7,   9,  11,  13,  15,  17,  19,  21,  23,  25,  27,  29,  31,  33,  35 dBm */
 { 800,920,1040,1160,1280,1400,1520,1640,1760,1880,2000,2120,2240,2360,2480,2600 }
};

/* DCS1800...........................................................................*/

const sTXPC_ADCDATA DCS_TXADC_Data_SetDefault =
{  /*power level
     0,  2,   4,   6,   8,  10,  12,  14,  16,  18,  20,  22,  24,  26,  28,  30 dBm */
 { 800,920,1040,1160,1280,1400,1520,1640,1760,1880,2000,2120,2240,2360,2480,2600 }
};

/* PCS1900...........................................................................*/

const sTXPC_ADCDATA PCS_TXADC_Data_SetDefault =
{  /*power level
     0,  2,   4,   6,   8,  10,  12,  14,  16,  18,  20,  22,  24,  26,  28,  30 dBm */
 { 800,920,1040,1160,1280,1400,1520,1640,1760,1880,2000,2120,2240,2360,2480,2600 }
};

const sTXPC_ADCDATA* TXADC_Data_SetDefault[] =
{
   0,                               /* FrequencyBand400 (not support)  */
   &GSM850_TXADC_Data_SetDefault,              /* FrequencyBand850                */
   &GSM_TXADC_Data_SetDefault,                 /* FrequencyBand900                */
   &DCS_TXADC_Data_SetDefault,                 /* FrequencyBand1800               */
   &PCS_TXADC_Data_SetDefault,                 /* FrequencyBand1900               */
};

      #if defined(__EPSK_TX__)

/* GSM850............................................................................*/

const sTXPC_ADCDATA GSM850_TXADC_Data_EPSK_SetDefault =
{  /*power level
      5,   7,   9,  11,  13,  15,  17,  19,  21,  23,  25,  27,  29,  31,  33,  35 dBm */
 { 1629,1693,1757,1821,1885,1949,2013,2077,2141,2205,2269,2333,2333,2333,2333,2333 }
};

/* GSM900............................................................................*/

const sTXPC_ADCDATA GSM_TXADC_Data_EPSK_SetDefault =
{  /*power level
      5,   7,   9,  11,  13,  15,  17,  19,  21,  23,  25,  27,  29,  31,  33,  35 dBm */
 { 1629,1693,1757,1821,1885,1949,2013,2077,2141,2205,2269,2333,2333,2333,2333,2333 }
};

/* DCS1800...........................................................................*/

const sTXPC_ADCDATA DCS_TXADC_Data_EPSK_SetDefault =
{  /*power level
      0,   2,   4,   6,   8,  10,  12,  14,  16,  18,  20,  22,  24,  26,  28,  30 dBm */
 { 1535,1599,1663,1727,1791,1855,1919,1983,2047,2111,2175,2239,2303,2367,2367,2367 }
};

/* PCS1900...........................................................................*/

const sTXPC_ADCDATA PCS_TXADC_Data_EPSK_SetDefault =
{  /*power level
      0,   2,   4,   6,   8,  10,  12,  14,  16,  18,  20,  22,  24,  26,  28,  30 dBm */
 { 1535,1599,1663,1727,1791,1855,1919,1983,2047,2111,2175,2239,2303,2367,2367,2367 }
};

const sTXPC_ADCDATA* TXADC_Data_EPSK_SetDefault[] =
{
   0,                               /* FrequencyBand400 (not support)  */
   &GSM850_TXADC_Data_EPSK_SetDefault,         /* FrequencyBand850                */
   &GSM_TXADC_Data_EPSK_SetDefault,            /* FrequencyBand900                */
   &DCS_TXADC_Data_EPSK_SetDefault,            /* FrequencyBand1800               */
   &PCS_TXADC_Data_EPSK_SetDefault,            /* FrequencyBand1900               */
};
      #endif /* __EPSK_TX__ */
   #endif /* IS_TXPC_CL_AUXADC_SUPPORT || IS_TXPC_CL_BSI_SUPPORT */
#endif /* IS_TX_POWER_CONTROL_SUPPORT */
/*===============================================================================================*/
#if IS_GPRS
//sTX_POWER_ROLLBACK GSM_tx_power_rollback_gmsk = {GSM_TX_ROLLBACK_2T_GMSK, GSM_TX_ROLLBACK_3T_GMSK, GSM_TX_ROLLBACK_4T_GMSK, GSM_TX_ROLLBACK_5T_GMSK };

const sTX_POWER_ROLLBACK GSM850_tx_power_rollback_gmsk_SetDefault = {GSM850_TX_ROLLBACK_2T_GMSK_SetDefault, GSM850_TX_ROLLBACK_3T_GMSK_SetDefault, GSM850_TX_ROLLBACK_4T_GMSK_SetDefault, GSM850_TX_ROLLBACK_5T_GMSK_SetDefault };
const sTX_POWER_ROLLBACK GSM_tx_power_rollback_gmsk_SetDefault    = {GSM_TX_ROLLBACK_2T_GMSK_SetDefault, GSM_TX_ROLLBACK_3T_GMSK_SetDefault, GSM_TX_ROLLBACK_4T_GMSK_SetDefault, GSM_TX_ROLLBACK_5T_GMSK_SetDefault };
const sTX_POWER_ROLLBACK DCS_tx_power_rollback_gmsk_SetDefault    = {DCS_TX_ROLLBACK_2T_GMSK_SetDefault, DCS_TX_ROLLBACK_3T_GMSK_SetDefault, DCS_TX_ROLLBACK_4T_GMSK_SetDefault, DCS_TX_ROLLBACK_5T_GMSK_SetDefault };
const sTX_POWER_ROLLBACK PCS_tx_power_rollback_gmsk_SetDefault    = {PCS_TX_ROLLBACK_2T_GMSK_SetDefault, PCS_TX_ROLLBACK_3T_GMSK_SetDefault, PCS_TX_ROLLBACK_4T_GMSK_SetDefault, PCS_TX_ROLLBACK_5T_GMSK_SetDefault };

//If you want to turn off TX power rollback, please use below setting
/*
sTX_POWER_ROLLBACK GSM850_tx_power_rollback_gmsk = {0, 0, 0, 0};
sTX_POWER_ROLLBACK GSM_tx_power_rollback_gmsk    = {0, 0, 0, 0};
sTX_POWER_ROLLBACK DCS_tx_power_rollback_gmsk    = {0, 0, 0, 0};
sTX_POWER_ROLLBACK PCS_tx_power_rollback_gmsk    = {0, 0, 0, 0};
*/

const sTX_POWER_ROLLBACK* tx_power_rollback_gmsk_SetDefault[]=
{
   0,                                               /* FrequencyBand400 (not support)  */
   &GSM850_tx_power_rollback_gmsk_SetDefault,                  /* FrequencyBand850 (not support)  */
   &GSM_tx_power_rollback_gmsk_SetDefault,                     /* FrequencyBand900                */
   &DCS_tx_power_rollback_gmsk_SetDefault,                     /* FrequencyBand1800               */
   &PCS_tx_power_rollback_gmsk_SetDefault,                     /* FrequencyBand1900               */
};

#endif /*IS_GPRS*/

#if IS_EGPRS
//sTX_POWER_ROLLBACK GSM_tx_power_rollback_epsk = {GSM_TX_ROLLBACK_2T_EPSK, GSM_TX_ROLLBACK_3T_EPSK, GSM_TX_ROLLBACK_4T_EPSK, GSM_TX_ROLLBACK_5T_EPSK };
const sTX_POWER_ROLLBACK GSM850_tx_power_rollback_epsk_SetDefault = {GSM850_TX_ROLLBACK_2T_EPSK_SetDefault, GSM850_TX_ROLLBACK_3T_EPSK_SetDefault, GSM850_TX_ROLLBACK_4T_EPSK_SetDefault, GSM850_TX_ROLLBACK_5T_EPSK_SetDefault };
const sTX_POWER_ROLLBACK GSM_tx_power_rollback_epsk_SetDefault    = {GSM_TX_ROLLBACK_2T_EPSK_SetDefault, GSM_TX_ROLLBACK_3T_EPSK_SetDefault, GSM_TX_ROLLBACK_4T_EPSK_SetDefault, GSM_TX_ROLLBACK_5T_EPSK_SetDefault };
const sTX_POWER_ROLLBACK DCS_tx_power_rollback_epsk_SetDefault    = {DCS_TX_ROLLBACK_2T_EPSK_SetDefault, DCS_TX_ROLLBACK_3T_EPSK_SetDefault, DCS_TX_ROLLBACK_4T_EPSK_SetDefault, DCS_TX_ROLLBACK_5T_EPSK_SetDefault };
const sTX_POWER_ROLLBACK PCS_tx_power_rollback_epsk_SetDefault    = {PCS_TX_ROLLBACK_2T_EPSK_SetDefault, PCS_TX_ROLLBACK_3T_EPSK_SetDefault, PCS_TX_ROLLBACK_4T_EPSK_SetDefault, PCS_TX_ROLLBACK_5T_EPSK_SetDefault };

//If you want to turn off TX power rollback, please use below setting
/*
sTX_POWER_ROLLBACK GSM850_tx_power_rollback_epsk = {0, 0, 0, 0};
sTX_POWER_ROLLBACK GSM_tx_power_rollback_epsk    = {0, 0, 0, 0};
sTX_POWER_ROLLBACK DCS_tx_power_rollback_epsk    = {0, 0, 0, 0};
sTX_POWER_ROLLBACK PCS_tx_power_rollback_epsk    = {0, 0, 0, 0};
*/

const sTX_POWER_ROLLBACK* tx_power_rollback_epsk_SetDefault[]=
{
   0,                                               /* FrequencyBand400 (not support)  */
   &GSM850_tx_power_rollback_epsk_SetDefault,                  /* FrequencyBand850 (not support)  */
   &GSM_tx_power_rollback_epsk_SetDefault,                     /* FrequencyBand900                */
   &DCS_tx_power_rollback_epsk_SetDefault,                     /* FrequencyBand1800               */
   &PCS_tx_power_rollback_epsk_SetDefault,                     /* FrequencyBand1900               */
};
#endif /*IS_EGPRS*/

/* tx voltage compensation table*/
const sTX_POWER_VOLTAGE_COMPENSATION  tx_apc_voltage_compensation_SetDefault ={BAT_LOW_VOLTAGE_SetDefault,BAT_HIGH_VOLTAGE_SetDefault,BAT_LOW_TEMPERATURE_SetDefault,BAT_HIGH_TEMPERATURE_SetDefault,AP_UPDATE_VOLTINFO_PERIOD_SetDefault};

/*capid and 32K REMOVAL CRYSTAL PARA*/
const sCrystalParameter afc_crystal_data_SetDefault=
{
	 Custom_RF_XO_CapID_SetDefault
};

#if IS_32K_CRYSTAL_REMOVAL_SUPPORT
const sCloadParameter CLoad_FreqOffset_data_SetDefault=
{
   CUSTOM_CLOAD_FREQ_OFFSET_SetDefault
};
#endif

const sl1CustomBandSupport l1d_custom_band_support_SetDefault=
{
   1, //Support GSM850  Band
   1, //Support GSM900  Band
   1, //Support DCS1800 Band
   1, //Support PCS1900 Band
};

/*DO NOT MODIFY. Default value for AFC dac and slope*/
const l1cal_afcData_T afc_crystal_data_dac_slop_SetDefault =
{
   Custom_RF_AFC_DACVALUE_SetDefault,  // default AFC dac value
   Custom_RF_AFC_SLOPEINV_SetDefault,  // default AFC inverse slope
};

/*DO NOT MODIFY. Default value for W-coefficient calibration*/
const w_coef w_coef_data_SetDefault[ WCTABLE_SIZE ] = 
{  /*w_re, w_im*/
   {0, 0}, //GSM850
   {0, 0}, //GSM900
   {0, 0}, //DCS1800, segment 1
   {0, 0}, //DCS1800, segment 2
   {0, 0}, //DCS1800, segment 3
   {0, 0}, //DCS1800, segment 4
   {0, 0}, //DCS1800, segment 5
   {0, 0}, //DCS1800, segment 6
   {0, 0}, //DCS1800, segment 7
   {0, 0}, //DCS1800, segment 8
   {0, 0}, //PCS1900, segment 1
   {0, 0}, //PCS1900, segment 2
   {0, 0}, //PCS1900, segment 3
   {0, 0}, //PCS1900, segment 4
   {0, 0}, //PCS1900, segment 5
   {0, 0}, //PCS1900, segment 6
   {0, 0}, //Offset
   {0, 0}, //None
   {0, 0}, //None
};
#if defined(__2G_RX_DIVERSITY_PATH_SUPPORT__)
/*RXD*/const w_coef w_coef_rxd_data_SetDefault[ WCTABLE_SIZE ] = 
/*RXD*/{  /*w_re, w_im*/
/*RXD*/   {0, 0}, //GSM850
/*RXD*/   {0, 0}, //GSM900
/*RXD*/   {0, 0}, //DCS1800, segment 1
/*RXD*/   {0, 0}, //DCS1800, segment 2
/*RXD*/   {0, 0}, //DCS1800, segment 3
/*RXD*/   {0, 0}, //DCS1800, segment 4
/*RXD*/   {0, 0}, //DCS1800, segment 5
/*RXD*/   {0, 0}, //DCS1800, segment 6
/*RXD*/   {0, 0}, //DCS1800, segment 7
/*RXD*/   {0, 0}, //DCS1800, segment 8
/*RXD*/   {0, 0}, //PCS1900, segment 1
/*RXD*/   {0, 0}, //PCS1900, segment 2
/*RXD*/   {0, 0}, //PCS1900, segment 3
/*RXD*/   {0, 0}, //PCS1900, segment 4
/*RXD*/   {0, 0}, //PCS1900, segment 5
/*RXD*/   {0, 0}, //PCS1900, segment 6
/*RXD*/   {0, 0}, //Offset
/*RXD*/   {0, 0}, //None
/*RXD*/   {0, 0}, //None
/*RXD*/};
#endif

/*PA vias and default PA gain for each PCL*/
const orionRFtx_pa_vbias pa_data_SetDefault = 
{
   /*GSM850*/
   {/*PCL index, PA Vbias, PA Gain*/
      {5 , 120, 800}, //index 0
      {6 , 120, 800}, //index 1
      {7 , 120, 800}, //index 2
      {8 , 120, 800}, //index 3
      {9 , 120, 800}, //index 4
      {10, 120, 800}, //index 5
      {11, 120, 800}, //index 6
      {12, 120, 800}, //index 7
      {13, 120, 800}, //index 8
      {14, 120, 800}, //index 9
      {15, 120, 800}, //index 10
      {16, 120, 800}, //index 11
      {17, 120, 800}, //index 12
      {18, 120, 800}, //index 13
      {19, 120, 800}, //index 14
      {-1, 120, 800}, //index 15
   },   
   /*GSM900*/
   {/*PCL index, PA Vbias, PA Gain*/
      {5 , 120, 800},
      {6 , 120, 800},
      {7 , 120, 800},
      {8 , 120, 800},
      {9 , 120, 800},
      {10, 120, 800},
      {11, 120, 800},
      {12, 120, 800},
      {13, 120, 800},
      {14, 120, 800},
      {15, 120, 800},
      {16, 120, 800},
      {17, 120, 800},
      {18, 120, 800},
      {19, 120, 800},
      {-1, 120, 800},
   },
   /*DCS1800*/
   {/*PCL index, PA Vbias, PA Gain*/ 
      {0 , 120, 800},
      {1 , 120, 800},
      {2 , 120, 800},
      {3 , 120, 800},
      {4 , 120, 800},
      {5 , 120, 800},
      {6 , 120, 800},
      {7 , 120, 800},
      {8 , 120, 800},
      {9 , 120, 800},
      {10, 120, 800},
      {11, 120, 800},
      {12, 120, 800},
      {13, 120, 800},
      {14, 120, 800},
      {15, 120, 800},
   },
   /*PCS1900*/
   {/*PCL index, PA Vbias, PA Gain*/      
      {0 , 120, 800},
      {1 , 120, 800},
      {2 , 120, 800},
      {3 , 120, 800},
      {4 , 120, 800},
      {5 , 120, 800},
      {6 , 120, 800},
      {7 , 120, 800},
      {8 , 120, 800},
      {9 , 120, 800},
      {10, 120, 800},
      {11, 120, 800},
      {12, 120, 800},
      {13, 120, 800},
      {14, 120, 800},
      {15, 120, 800},
   },
};
/*-------------------------------------------------------------NO DRDI !------------------------------------------------------------*/



/*-------------------------------------------------------------For DRDI Setting Start---------------------------------------------*/
#if IS_TX_POWER_OFFSET_SUPPORT || IS_SAR_TX_POWER_BACKOFF_SUPPORT
/*----------------------------------------*/
/*         Tx power offset data  for GMSK             */
/*----------------------------------------*/

/* GSM850....................................................................*/
const sTX_POWER_OFFSET  GSM850_Tx_Power_Offset_GMSK_SetDefault =
{
   {

	  /*Table0 (Default Table)*/
      {
		 /* copmensate dac  */
		 /*   5,  7,  9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33, 35 dBm                       */
        {
            {  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    		{  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
			{  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
        },      
    		 
		 /* ARFCN WEIGHT */
		 {
			/* max arfcn , mid_level , { hi_weight(ANT0), lo_weight(ANT0) }, { hi_weight(ANT1), lo_weight(ANT1), { hi_weight(ANT2), lo_weight(ANT2) }  */
			{     160    ,    21     , { {WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)} }   },
			{     190    ,    21     , { {WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)} }   },
			{     220    ,    21     , { {WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)} }   },
			{     251    ,    21     , { {WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)} }   },
			/*-----------------------------------------------------*/
			{ TABLE_END }
		 },
      },
   	#if IS_SAR_TX_POWER_BACKOFF_SUPPORT
      /*Table1*/
      {   
		 /* copmensate dac  */
		 /*   5,  7,  9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33, 35 dBm                       */
		 {
            {  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    		{  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
			{  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
         }, 
		 
		 /* ARFCN WEIGHT */
		 {
			/* max arfcn , mid_level , { hi_weight(ANT0), lo_weight(ANT0) }, { hi_weight(ANT1), lo_weight(ANT1), { hi_weight(ANT2), lo_weight(ANT2) }  */
			{     160    ,    21     , { {WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)} }   },
			{     190    ,    21     , { {WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)} }   },
			{     220    ,    21     , { {WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)} }   },
			{     251    ,    21     , { {WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)} }   },
			/*-----------------------------------------------------*/
			{ TABLE_END }
		 },
      },
      /*Table2*/
      {
		 /* copmensate dac  */
		 /*   5,  7,  9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33, 35 dBm                       */
		 {
            {  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    		{  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
			{  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
         }, 
		 
		 /* ARFCN WEIGHT */
		 {
			/* max arfcn , mid_level , { hi_weight(ANT0), lo_weight(ANT0) }, { hi_weight(ANT1), lo_weight(ANT1), { hi_weight(ANT2), lo_weight(ANT2) }  */
			{     160    ,    21     , { {WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)} }   },
			{     190    ,    21     , { {WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)} }   },
			{     220    ,    21     , { {WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)} }   },
			{     251    ,    21     , { {WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)} }   },
			/*-----------------------------------------------------*/
			{ TABLE_END }
		 },
      },
      /*Table3*/
      {   
		 /* copmensate dac  */
		 /*   5,  7,  9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33, 35 dBm                       */
		 {
            {  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    		{  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
			{  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
         }, 
		 
		 /* ARFCN WEIGHT */
		 {
			/* max arfcn , mid_level , { hi_weight(ANT0), lo_weight(ANT0) }, { hi_weight(ANT1), lo_weight(ANT1), { hi_weight(ANT2), lo_weight(ANT2) }  */
			{     160    ,    21     , { {WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)} }   },
			{     190    ,    21     , { {WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)} }   },
			{     220    ,    21     , { {WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)} }   },
			{     251    ,    21     , { {WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)} }   },
			/*-----------------------------------------------------*/
			{ TABLE_END }
		 },
      },
      /*Table4*/
      {
		  /* copmensate dac  */
		 /*   5,  7,  9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33, 35 dBm                       */
		 {
            {  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    		{  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
			{  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
         }, 
		 
		 /* ARFCN WEIGHT */
		 {
			/* max arfcn , mid_level , { hi_weight(ANT0), lo_weight(ANT0) }, { hi_weight(ANT1), lo_weight(ANT1), { hi_weight(ANT2), lo_weight(ANT2) }  */
			{     160    ,    21     , { {WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)} }   },
			{     190    ,    21     , { {WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)} }   },
			{     220    ,    21     , { {WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)} }   },
			{     251    ,    21     , { {WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)} }   },
			/*-----------------------------------------------------*/
			{ TABLE_END }
		 },
      },
      /*Table5*/
      {
		  /* copmensate dac  */
		 /*   5,  7,  9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33, 35 dBm                       */
		 {
            {  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    		{  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
			{  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
         }, 
		 
		 /* ARFCN WEIGHT */
		 {
			/* max arfcn , mid_level , { hi_weight(ANT0), lo_weight(ANT0) }, { hi_weight(ANT1), lo_weight(ANT1), { hi_weight(ANT2), lo_weight(ANT2) }  */
			{     160    ,    21     , { {WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)} }   },
			{     190    ,    21     , { {WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)} }   },
			{     220    ,    21     , { {WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)} }   },
			{     251    ,    21     , { {WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)} }   },
			/*-----------------------------------------------------*/
			{ TABLE_END }
		 },
      },
      /*Table6*/
      {
		  /* copmensate dac  */
		 /*   5,  7,  9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33, 35 dBm                       */
		 {
            {  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    		{  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
			{  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
         }, 
		 
		 /* ARFCN WEIGHT */
		 {
			/* max arfcn , mid_level , { hi_weight(ANT0), lo_weight(ANT0) }, { hi_weight(ANT1), lo_weight(ANT1), { hi_weight(ANT2), lo_weight(ANT2) }  */
			{     160    ,    21     , { {WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)} }   },
			{     190    ,    21     , { {WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)} }   },
			{     220    ,    21     , { {WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)} }   },
			{     251    ,    21     , { {WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)} }   },
			/*-----------------------------------------------------*/
			{ TABLE_END }
		 },
      },
      /*Table7*/
      {   
	      /* copmensate dac  */
		 /*   5,  7,  9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33, 35 dBm                       */
		 {
            {  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    		{  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
			{  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
         }, 
		 
		 /* ARFCN WEIGHT */
		 {
			/* max arfcn , mid_level , { hi_weight(ANT0), lo_weight(ANT0) }, { hi_weight(ANT1), lo_weight(ANT1), { hi_weight(ANT2), lo_weight(ANT2) }  */
			{     160    ,    21     , { {WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)} }   },
			{     190    ,    21     , { {WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)} }   },
			{     220    ,    21     , { {WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)} }   },
			{     251    ,    21     , { {WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)} }   },
			/*-----------------------------------------------------*/
			{ TABLE_END }
		 },
      },
      /*Table8*/
      {   
		  /* copmensate dac  */
		 /*   5,  7,  9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33, 35 dBm                       */
		 {
            {  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    		{  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
			{  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
         }, 
		 
		 /* ARFCN WEIGHT */
		 {
			/* max arfcn , mid_level , { hi_weight(ANT0), lo_weight(ANT0) }, { hi_weight(ANT1), lo_weight(ANT1), { hi_weight(ANT2), lo_weight(ANT2) }  */
			{     160    ,    21     , { {WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)} }   },
			{     190    ,    21     , { {WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)} }   },
			{     220    ,    21     , { {WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)} }   },
			{     251    ,    21     , { {WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)} }   },
			/*-----------------------------------------------------*/
			{ TABLE_END }
		 },
      },

      #endif
   },
};

/* GSM.......................................................................*/
const sTX_POWER_OFFSET  GSM_Tx_Power_Offset_GMSK_SetDefault =
{
   {
	/*Table0 (Default Table)*/
      {
		  /* copmensate dac  */
		 /*   5,  7,  9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33, 35 dBm                       */
		 {
            {  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    		{  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
			{  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
         }, 
		 
		 /* ARFCN WEIGHT */
		 {
			/* max arfcn , mid_level , { hi_weight(ANT0), lo_weight(ANT0) }, { hi_weight(ANT1), lo_weight(ANT1), { hi_weight(ANT2), lo_weight(ANT2) }  */
			{      40    ,    21     , { {WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)} }   },
			{      82    ,    21     , { {WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)} }   },
			{     124    ,    21     , { {WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)} }   },
			{    1023    ,    21     , { {WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)} }   },
			/*-----------------------------------------------------*/
			{ TABLE_END }
		 },  
      },
      #if IS_SAR_TX_POWER_BACKOFF_SUPPORT
      /*Table1*/
      {
		  /* copmensate dac  */
		 /*   5,  7,  9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33, 35 dBm                       */
		 {
            {  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    		{  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
			{  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
         }, 
		 
		 /* ARFCN WEIGHT */
		 {
			/* max arfcn , mid_level , { hi_weight(ANT0), lo_weight(ANT0) }, { hi_weight(ANT1), lo_weight(ANT1), { hi_weight(ANT2), lo_weight(ANT2) }  */
			{      40    ,    21     , { {WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)} }   },
			{      82    ,    21     , { {WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)} }   },
			{     124    ,    21     , { {WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)} }   },
			{    1023    ,    21     , { {WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)} }   },
			/*-----------------------------------------------------*/
			{ TABLE_END }
		 },  
      },
      /*Table2*/
      {
		  /* copmensate dac  */
		 /*   5,  7,  9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33, 35 dBm                       */
		 {
            {  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    		{  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
			{  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
         }, 
		 
		 /* ARFCN WEIGHT */
		 {
			/* max arfcn , mid_level , { hi_weight(ANT0), lo_weight(ANT0) }, { hi_weight(ANT1), lo_weight(ANT1), { hi_weight(ANT2), lo_weight(ANT2) }  */
			{      40    ,    21     , { {WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)} }   },
			{      82    ,    21     , { {WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)} }   },
			{     124    ,    21     , { {WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)} }   },
			{    1023    ,    21     , { {WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)} }   },
			/*-----------------------------------------------------*/
			{ TABLE_END }
		 },  
      },
      /*Table3*/
      {
		  /* copmensate dac  */
		 /*   5,  7,  9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33, 35 dBm                       */
		 {
            {  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    		{  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
			{  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
         }, 
		 
		 /* ARFCN WEIGHT */
		 {
			/* max arfcn , mid_level , { hi_weight(ANT0), lo_weight(ANT0) }, { hi_weight(ANT1), lo_weight(ANT1), { hi_weight(ANT2), lo_weight(ANT2) }  */
			{      40    ,    21     , { {WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)} }   },
			{      82    ,    21     , { {WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)} }   },
			{     124    ,    21     , { {WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)} }   },
			{    1023    ,    21     , { {WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)} }   },
			/*-----------------------------------------------------*/
			{ TABLE_END }
		 },  
      },
      /*Table4*/
      {
		  /* copmensate dac  */
		 /*   5,  7,  9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33, 35 dBm                       */
		 {
            {  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    		{  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
			{  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
         }, 
		 
		 /* ARFCN WEIGHT */
		 {
			/* max arfcn , mid_level , { hi_weight(ANT0), lo_weight(ANT0) }, { hi_weight(ANT1), lo_weight(ANT1), { hi_weight(ANT2), lo_weight(ANT2) }  */
			{      40    ,    21     , { {WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)} }   },
			{      82    ,    21     , { {WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)} }   },
			{     124    ,    21     , { {WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)} }   },
			{    1023    ,    21     , { {WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)} }   },
			/*-----------------------------------------------------*/
			{ TABLE_END }
		 },  
      },
      /*Table5*/
      {
		  /* copmensate dac  */
		 /*   5,  7,  9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33, 35 dBm                       */
		 {
            {  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    		{  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
			{  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
         }, 
		 
		 /* ARFCN WEIGHT */
		 {
			/* max arfcn , mid_level , { hi_weight(ANT0), lo_weight(ANT0) }, { hi_weight(ANT1), lo_weight(ANT1), { hi_weight(ANT2), lo_weight(ANT2) }  */
			{      40    ,    21     , { {WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)} }   },
			{      82    ,    21     , { {WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)} }   },
			{     124    ,    21     , { {WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)} }   },
			{    1023    ,    21     , { {WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)} }   },
			/*-----------------------------------------------------*/
			{ TABLE_END }
		 },  
      },
      /*Table6*/
      {
		  /* copmensate dac  */
		 /*   5,  7,  9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33, 35 dBm                       */
		 {
            {  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    		{  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
			{  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
         }, 
		 
		 /* ARFCN WEIGHT */
		 {
			/* max arfcn , mid_level , { hi_weight(ANT0), lo_weight(ANT0) }, { hi_weight(ANT1), lo_weight(ANT1), { hi_weight(ANT2), lo_weight(ANT2) }  */
			{      40    ,    21     , { {WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)} }   },
			{      82    ,    21     , { {WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)} }   },
			{     124    ,    21     , { {WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)} }   },
			{    1023    ,    21     , { {WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)} }   },
			/*-----------------------------------------------------*/
			{ TABLE_END }
		 },  
      },
      /*Table7*/
      {
		  /* copmensate dac  */
		 /*   5,  7,  9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33, 35 dBm                       */
		 {
            {  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    		{  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
			{  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
         }, 
		 
		 /* ARFCN WEIGHT */
		 {
			/* max arfcn , mid_level , { hi_weight(ANT0), lo_weight(ANT0) }, { hi_weight(ANT1), lo_weight(ANT1), { hi_weight(ANT2), lo_weight(ANT2) }  */
			{      40    ,    21     , { {WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)} }   },
			{      82    ,    21     , { {WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)} }   },
			{     124    ,    21     , { {WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)} }   },
			{    1023    ,    21     , { {WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)} }   },
			/*-----------------------------------------------------*/
			{ TABLE_END }
		 },  
      },
      /*Table8*/
      {
		  /* copmensate dac  */
		 /*   5,  7,  9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33, 35 dBm                       */
		 {
            {  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    		{  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
			{  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
         }, 
		 
		 /* ARFCN WEIGHT */
		 {
			/* max arfcn , mid_level , { hi_weight(ANT0), lo_weight(ANT0) }, { hi_weight(ANT1), lo_weight(ANT1), { hi_weight(ANT2), lo_weight(ANT2) }  */
			{      40    ,    21     , { {WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)} }   },
			{      82    ,    21     , { {WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)} }   },
			{     124    ,    21     , { {WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)} }   },
			{    1023    ,    21     , { {WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)} }   },
			/*-----------------------------------------------------*/
			{ TABLE_END }
		 },  
      },

      #endif
   },
};

/* DCS.......................................................................*/
const sTX_POWER_OFFSET  DCS_Tx_Power_Offset_GMSK_SetDefault =
{
   {

	/*Table0 (Default Table)*/
      {
		  /* copmensate dac  */
		 /*   0,  2,  4,  6,  8, 10, 12, 14, 16, 18, 20, 22, 24, 26, 28, 30 dBm                       */
		 {
            {  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    		{  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
			{  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
         }, 
		 
		 /* ARFCN WEIGHT */
		 {
			/* max arfcn , mid_level , { hi_weight(ANT0), lo_weight(ANT0) }, { hi_weight(ANT1), lo_weight(ANT1), { hi_weight(ANT2), lo_weight(ANT2) }  */
			{     520    ,    16     , { {WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)} }   },
			{     560    ,    16     , { {WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)} }   },
			{     800    ,    16     , { {WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)} }   },
			{     885    ,    16     , { {WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)} }   },
			/*-----------------------------------------------------*/
			{ TABLE_END }
		 },  
      },
   	#if IS_SAR_TX_POWER_BACKOFF_SUPPORT
      /*Table1*/
      {   
		  /* copmensate dac  */
		 /*   0,  2,  4,  6,  8, 10, 12, 14, 16, 18, 20, 22, 24, 26, 28, 30 dBm                       */
		 {
            {  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    		{  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
			{  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
         }, 
		 
		 /* ARFCN WEIGHT */
		 {
			/* max arfcn , mid_level , { hi_weight(ANT0), lo_weight(ANT0) }, { hi_weight(ANT1), lo_weight(ANT1), { hi_weight(ANT2), lo_weight(ANT2) }  */
			{     520    ,    16     , { {WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)} }   },
			{     560    ,    16     , { {WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)} }   },
			{     800    ,    16     , { {WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)} }   },
			{     885    ,    16     , { {WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)} }   },
			/*-----------------------------------------------------*/
			{ TABLE_END }
		 },  
      },
      /*Table2*/
      {
		  /* copmensate dac  */
		 /*   0,  2,  4,  6,  8, 10, 12, 14, 16, 18, 20, 22, 24, 26, 28, 30 dBm                       */
		 {
            {  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    		{  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
			{  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
         }, 
		 
		 /* ARFCN WEIGHT */
		 {
			/* max arfcn , mid_level , { hi_weight(ANT0), lo_weight(ANT0) }, { hi_weight(ANT1), lo_weight(ANT1), { hi_weight(ANT2), lo_weight(ANT2) }  */
			{     520    ,    16     , { {WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)} }   },
			{     560    ,    16     , { {WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)} }   },
			{     800    ,    16     , { {WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)} }   },
			{     885    ,    16     , { {WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)} }   },
			/*-----------------------------------------------------*/
			{ TABLE_END }
		 },  
      },
      /*Table3*/
      {   
	      /* copmensate dac  */
		 /*   0,  2,  4,  6,  8, 10, 12, 14, 16, 18, 20, 22, 24, 26, 28, 30 dBm                       */
		 {
            {  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    		{  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
			{  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
         }, 
		 
		 /* ARFCN WEIGHT */
		 {
			/* max arfcn , mid_level , { hi_weight(ANT0), lo_weight(ANT0) }, { hi_weight(ANT1), lo_weight(ANT1), { hi_weight(ANT2), lo_weight(ANT2) }  */
			{     520    ,    16     , { {WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)} }   },
			{     560    ,    16     , { {WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)} }   },
			{     800    ,    16     , { {WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)} }   },
			{     885    ,    16     , { {WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)} }   },
			/*-----------------------------------------------------*/
			{ TABLE_END }
		 },  
      },
      /*Table4*/
      {
		  /* copmensate dac  */
		 /*   0,  2,  4,  6,  8, 10, 12, 14, 16, 18, 20, 22, 24, 26, 28, 30 dBm                       */
		 {
            {  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    		{  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
			{  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
         }, 
		 
		 /* ARFCN WEIGHT */
		 {
			/* max arfcn , mid_level , { hi_weight(ANT0), lo_weight(ANT0) }, { hi_weight(ANT1), lo_weight(ANT1), { hi_weight(ANT2), lo_weight(ANT2) }  */
			{     520    ,    16     , { {WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)} }   },
			{     560    ,    16     , { {WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)} }   },
			{     800    ,    16     , { {WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)} }   },
			{     885    ,    16     , { {WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)} }   },
			/*-----------------------------------------------------*/
			{ TABLE_END }
		 },  
      },
      /*Table5*/
      {   
		  /* copmensate dac  */
		 /*   0,  2,  4,  6,  8, 10, 12, 14, 16, 18, 20, 22, 24, 26, 28, 30 dBm                       */
		 {
            {  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    		{  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
			{  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
         }, 
		 
		 /* ARFCN WEIGHT */
		 {
			/* max arfcn , mid_level , { hi_weight(ANT0), lo_weight(ANT0) }, { hi_weight(ANT1), lo_weight(ANT1), { hi_weight(ANT2), lo_weight(ANT2) }  */
			{     520    ,    16     , { {WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)} }   },
			{     560    ,    16     , { {WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)} }   },
			{     800    ,    16     , { {WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)} }   },
			{     885    ,    16     , { {WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)} }   },
			/*-----------------------------------------------------*/
			{ TABLE_END }
		 },  
      },
      /*Table6*/
      {
		  /* copmensate dac  */
		 /*   0,  2,  4,  6,  8, 10, 12, 14, 16, 18, 20, 22, 24, 26, 28, 30 dBm                       */
		 {
            {  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    		{  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
			{  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
         }, 
		 
		 /* ARFCN WEIGHT */
		 {
			/* max arfcn , mid_level , { hi_weight(ANT0), lo_weight(ANT0) }, { hi_weight(ANT1), lo_weight(ANT1), { hi_weight(ANT2), lo_weight(ANT2) }  */
			{     520    ,    16     , { {WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)} }   },
			{     560    ,    16     , { {WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)} }   },
			{     800    ,    16     , { {WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)} }   },
			{     885    ,    16     , { {WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)} }   },
			/*-----------------------------------------------------*/
			{ TABLE_END }
		 },  
      },
      /*Table7*/
      {   
	      /* copmensate dac  */
		 /*   0,  2,  4,  6,  8, 10, 12, 14, 16, 18, 20, 22, 24, 26, 28, 30 dBm                       */
		 {
            {  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    		{  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
			{  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
         }, 
		 
		 /* ARFCN WEIGHT */
		 {
			/* max arfcn , mid_level , { hi_weight(ANT0), lo_weight(ANT0) }, { hi_weight(ANT1), lo_weight(ANT1), { hi_weight(ANT2), lo_weight(ANT2) }  */
			{     520    ,    16     , { {WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)} }   },
			{     560    ,    16     , { {WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)} }   },
			{     800    ,    16     , { {WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)} }   },
			{     885    ,    16     , { {WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)} }   },
			/*-----------------------------------------------------*/
			{ TABLE_END }
		 },  
      },
      /*Table8*/
      {   
		  /* copmensate dac  */
		 /*   0,  2,  4,  6,  8, 10, 12, 14, 16, 18, 20, 22, 24, 26, 28, 30 dBm                       */
		 {
            {  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    		{  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
			{  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
         }, 
		 
		 /* ARFCN WEIGHT */
		 {
			/* max arfcn , mid_level , { hi_weight(ANT0), lo_weight(ANT0) }, { hi_weight(ANT1), lo_weight(ANT1), { hi_weight(ANT2), lo_weight(ANT2) }  */
			{     520    ,    16     , { {WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)} }   },
			{     560    ,    16     , { {WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)} }   },
			{     800    ,    16     , { {WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)} }   },
			{     885    ,    16     , { {WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)} }   },
			/*-----------------------------------------------------*/
			{ TABLE_END }
		 },  
      },

      #endif
   },
};

/* PCS.......................................................................*/
const sTX_POWER_OFFSET  PCS_Tx_Power_Offset_GMSK_SetDefault =
{
   {

	/*Table0 (Default Table)*/
      {
		  /* copmensate dac  */
		 /*   0,  2,  4,  6,  8, 10, 12, 14, 16, 18, 20, 22, 24, 26, 28, 30 dBm                       */
		 {
            {  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    		{  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
			{  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
         }, 
		 
		 /* ARFCN WEIGHT */
		 {
			/* max arfcn , mid_level , { hi_weight(ANT0), lo_weight(ANT0) }, { hi_weight(ANT1), lo_weight(ANT1), { hi_weight(ANT2), lo_weight(ANT2) }  */
			{     520    ,    16     , { {WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)} }   },
			{     620    ,    16     , { {WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)} }   },
			{     720    ,    16     , { {WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)} }   },
			{     810    ,    16     , { {WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)} }   },
			/*-----------------------------------------------------*/
			{ TABLE_END }
		 },  
      },
   	#if IS_SAR_TX_POWER_BACKOFF_SUPPORT
      /*Table1*/
      {  
		  /* copmensate dac  */
		 /*   0,  2,  4,  6,  8, 10, 12, 14, 16, 18, 20, 22, 24, 26, 28, 30 dBm                       */
		 {
            {  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    		{  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
			{  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
         }, 
		 
		 /* ARFCN WEIGHT */
		 {
			/* max arfcn , mid_level , { hi_weight(ANT0), lo_weight(ANT0) }, { hi_weight(ANT1), lo_weight(ANT1), { hi_weight(ANT2), lo_weight(ANT2) }  */
			{     520    ,    16     , { {WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)} }   },
			{     620    ,    16     , { {WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)} }   },
			{     720    ,    16     , { {WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)} }   },
			{     810    ,    16     , { {WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)} }   },
			/*-----------------------------------------------------*/
			{ TABLE_END }
		 },  
      },
      /*Table2*/
      {
		  /* copmensate dac  */
		 /*   0,  2,  4,  6,  8, 10, 12, 14, 16, 18, 20, 22, 24, 26, 28, 30 dBm                       */
		 {
            {  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    		{  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
			{  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
         }, 
		 
		 /* ARFCN WEIGHT */
		 {
			/* max arfcn , mid_level , { hi_weight(ANT0), lo_weight(ANT0) }, { hi_weight(ANT1), lo_weight(ANT1), { hi_weight(ANT2), lo_weight(ANT2) }  */
			{     520    ,    16     , { {WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)} }   },
			{     620    ,    16     , { {WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)} }   },
			{     720    ,    16     , { {WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)} }   },
			{     810    ,    16     , { {WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)} }   },
			/*-----------------------------------------------------*/
			{ TABLE_END }
		 },  
      },
      /*Table3*/
      {  
	      /* copmensate dac  */
		 /*   0,  2,  4,  6,  8, 10, 12, 14, 16, 18, 20, 22, 24, 26, 28, 30 dBm                       */
		 {
            {  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    		{  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
			{  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
         }, 
		 
		 /* ARFCN WEIGHT */
		 {
			/* max arfcn , mid_level , { hi_weight(ANT0), lo_weight(ANT0) }, { hi_weight(ANT1), lo_weight(ANT1), { hi_weight(ANT2), lo_weight(ANT2) }  */
			{     520    ,    16     , { {WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)} }   },
			{     620    ,    16     , { {WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)} }   },
			{     720    ,    16     , { {WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)} }   },
			{     810    ,    16     , { {WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)} }   },
			/*-----------------------------------------------------*/
			{ TABLE_END }
		 },  
      },
      /*Table4*/
      {
		  /* copmensate dac  */
		 /*   0,  2,  4,  6,  8, 10, 12, 14, 16, 18, 20, 22, 24, 26, 28, 30 dBm                       */
		 {
            {  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    		{  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
			{  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
         }, 
		 
		 /* ARFCN WEIGHT */
		 {
			/* max arfcn , mid_level , { hi_weight(ANT0), lo_weight(ANT0) }, { hi_weight(ANT1), lo_weight(ANT1), { hi_weight(ANT2), lo_weight(ANT2) }  */
			{     520    ,    16     , { {WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)} }   },
			{     620    ,    16     , { {WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)} }   },
			{     720    ,    16     , { {WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)} }   },
			{     810    ,    16     , { {WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)} }   },
			/*-----------------------------------------------------*/
			{ TABLE_END }
		 },  
      },
      /*Table5*/
      {  
	      /* copmensate dac  */
		 /*   0,  2,  4,  6,  8, 10, 12, 14, 16, 18, 20, 22, 24, 26, 28, 30 dBm                       */
		 {
            {  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    		{  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
			{  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
         }, 
		 
		 /* ARFCN WEIGHT */
		 {
			/* max arfcn , mid_level , { hi_weight(ANT0), lo_weight(ANT0) }, { hi_weight(ANT1), lo_weight(ANT1), { hi_weight(ANT2), lo_weight(ANT2) }  */
			{     520    ,    16     , { {WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)} }   },
			{     620    ,    16     , { {WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)} }   },
			{     720    ,    16     , { {WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)} }   },
			{     810    ,    16     , { {WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)} }   },
			/*-----------------------------------------------------*/
			{ TABLE_END }
		 },  
      },
      /*Table6*/
      {
		  /* copmensate dac  */
		 /*   0,  2,  4,  6,  8, 10, 12, 14, 16, 18, 20, 22, 24, 26, 28, 30 dBm                       */
		 {
            {  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    		{  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
			{  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
         }, 
		 
		 /* ARFCN WEIGHT */
		 {
			/* max arfcn , mid_level , { hi_weight(ANT0), lo_weight(ANT0) }, { hi_weight(ANT1), lo_weight(ANT1), { hi_weight(ANT2), lo_weight(ANT2) }  */
			{     520    ,    16     , { {WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)} }   },
			{     620    ,    16     , { {WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)} }   },
			{     720    ,    16     , { {WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)} }   },
			{     810    ,    16     , { {WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)} }   },
			/*-----------------------------------------------------*/
			{ TABLE_END }
		 },  
      },
      /*Table7*/
      {  
		  /* copmensate dac  */
		 /*   0,  2,  4,  6,  8, 10, 12, 14, 16, 18, 20, 22, 24, 26, 28, 30 dBm                       */
		 {
            {  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    		{  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
			{  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
         }, 
		 
		 /* ARFCN WEIGHT */
		 {
			/* max arfcn , mid_level , { hi_weight(ANT0), lo_weight(ANT0) }, { hi_weight(ANT1), lo_weight(ANT1), { hi_weight(ANT2), lo_weight(ANT2) }  */
			{     520    ,    16     , { {WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)} }   },
			{     620    ,    16     , { {WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)} }   },
			{     720    ,    16     , { {WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)} }   },
			{     810    ,    16     , { {WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)} }   },
			/*-----------------------------------------------------*/
			{ TABLE_END }
		 },  
      },
      /*Table8*/
      {  
		  /* copmensate dac  */
		 /*   0,  2,  4,  6,  8, 10, 12, 14, 16, 18, 20, 22, 24, 26, 28, 30 dBm                       */
		 {
            {  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    		{  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
			{  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
         }, 
		 
		 /* ARFCN WEIGHT */
		 {
			/* max arfcn , mid_level , { hi_weight(ANT0), lo_weight(ANT0) }, { hi_weight(ANT1), lo_weight(ANT1), { hi_weight(ANT2), lo_weight(ANT2) }  */
			{     520    ,    16     , { {WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)} }   },
			{     620    ,    16     , { {WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)} }   },
			{     720    ,    16     , { {WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)} }   },
			{     810    ,    16     , { {WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)},{WEIGHT(1.000), WEIGHT(1.000)} }   },
			/*-----------------------------------------------------*/
			{ TABLE_END }
		 },  
      },

      #endif
   },
};

/* GSM850....................................................................*/
const sTX_POWER_OFFSET*  Tx_Power_Offset_GMSK_SetDefault[] =
{
   0,                              /* FrequencyBand400 (not support)  */
   &GSM850_Tx_Power_Offset_GMSK_SetDefault,   /* FrequencyBand850                */
   &GSM_Tx_Power_Offset_GMSK_SetDefault,      /* FrequencyBand900                */
   &DCS_Tx_Power_Offset_GMSK_SetDefault,      /* FrequencyBand1800               */
   &PCS_Tx_Power_Offset_GMSK_SetDefault,      /* FrequencyBand1900               */
};

#if defined(__EPSK_TX__)

/*----------------------------------------*/
/*         Tx power offset data  for EPSK             */
/*----------------------------------------*/

/* GSM850....................................................................*/
const sTX_POWER_OFFSET  GSM850_Tx_Power_Offset_EPSK_SetDefault =
{
   {
	/*Table0 (Default Table)*/
      {
		  /* copmensate unit 1/8 dBm */
		 /*   5,  7,  9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33, 35 dBm                       */
		 {
            {  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    		{  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
			{  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
         }, 
		 
		 /* ARFCN WEIGHT */
		 {
			/* max arfcn , mid_level , { hi_weight(ANT0), lo_weight(ANT0) }, { hi_weight(ANT1), lo_weight(ANT1), { hi_weight(ANT2), lo_weight(ANT2) }  */
			{     160    ,    21     , { {((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)} }   } ,
			{     190    ,    21     , { {((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)} }   } ,
			{     220    ,    21     , { {((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)} }   } ,
			{     251    ,    21     , { {((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)} }   } ,
			/*-----------------------------------------------------*/
			{ TABLE_END }
		 },  
      },
   	#if IS_SAR_TX_POWER_BACKOFF_SUPPORT
      /*Table1*/
      {    
          /* copmensate unit 1/8 dBm */
		 /*   5,  7,  9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33, 35 dBm                       */
		 {
            {  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    		{  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
			{  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
         }, 
		 
		 /* ARFCN WEIGHT */
		 {
			/* max arfcn , mid_level , { hi_weight(ANT0), lo_weight(ANT0) }, { hi_weight(ANT1), lo_weight(ANT1), { hi_weight(ANT2), lo_weight(ANT2) }  */
			{     160    ,    21     , { {((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)} }   } ,
			{     190    ,    21     , { {((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)} }   } ,
			{     220    ,    21     , { {((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)} }   } ,
			{     251    ,    21     , { {((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)} }   } ,
			/*-----------------------------------------------------*/
			{ TABLE_END }
		 },  
      },
      /*Table2*/
      {
		  /* copmensate unit 1/8 dBm */
		 /*   5,  7,  9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33, 35 dBm                       */
		 {
            {  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    		{  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
			{  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
         }, 
		 
		 /* ARFCN WEIGHT */
		 {
			/* max arfcn , mid_level , { hi_weight(ANT0), lo_weight(ANT0) }, { hi_weight(ANT1), lo_weight(ANT1), { hi_weight(ANT2), lo_weight(ANT2) }  */
			{     160    ,    21     , { {((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)} }   } ,
			{     190    ,    21     , { {((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)} }   } ,
			{     220    ,    21     , { {((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)} }   } ,
			{     251    ,    21     , { {((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)} }   } ,
			/*-----------------------------------------------------*/
			{ TABLE_END }
		 },  
      },
      /*Table3*/
      {     
		  /* copmensate unit 1/8 dBm */
		 /*   5,  7,  9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33, 35 dBm                       */
		 {
            {  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    		{  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
			{  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
         }, 
		 
		 /* ARFCN WEIGHT */
		 {
			/* max arfcn , mid_level , { hi_weight(ANT0), lo_weight(ANT0) }, { hi_weight(ANT1), lo_weight(ANT1), { hi_weight(ANT2), lo_weight(ANT2) }  */
			{     160    ,    21     , { {((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)} }   } ,
			{     190    ,    21     , { {((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)} }   } ,
			{     220    ,    21     , { {((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)} }   } ,
			{     251    ,    21     , { {((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)} }   } ,
			/*-----------------------------------------------------*/
			{ TABLE_END }
		 },  
      },
      /*Table4*/
      {
		  /* copmensate unit 1/8 dBm */
		 /*   5,  7,  9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33, 35 dBm                       */
		 {
            {  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    		{  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
			{  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
         }, 
		 
		 /* ARFCN WEIGHT */
		 {
			/* max arfcn , mid_level , { hi_weight(ANT0), lo_weight(ANT0) }, { hi_weight(ANT1), lo_weight(ANT1), { hi_weight(ANT2), lo_weight(ANT2) }  */
			{     160    ,    21     , { {((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)} }   } ,
			{     190    ,    21     , { {((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)} }   } ,
			{     220    ,    21     , { {((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)} }   } ,
			{     251    ,    21     , { {((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)} }   } ,
			/*-----------------------------------------------------*/
			{ TABLE_END }
		 },  
      },
      /*Table5*/
      {     
	      /* copmensate unit 1/8 dBm */
		 /*   5,  7,  9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33, 35 dBm                       */
		 {
            {  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    		{  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
			{  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
         }, 
		 
		 /* ARFCN WEIGHT */
		 {
			/* max arfcn , mid_level , { hi_weight(ANT0), lo_weight(ANT0) }, { hi_weight(ANT1), lo_weight(ANT1), { hi_weight(ANT2), lo_weight(ANT2) }  */
			{     160    ,    21     , { {((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)} }   } ,
			{     190    ,    21     , { {((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)} }   } ,
			{     220    ,    21     , { {((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)} }   } ,
			{     251    ,    21     , { {((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)} }   } ,
			/*-----------------------------------------------------*/
			{ TABLE_END }
		 },  
      },
      /*Table6*/
      {
		  /* copmensate unit 1/8 dBm */
		 /*   5,  7,  9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33, 35 dBm                       */
		 {
            {  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    		{  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
			{  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
         }, 
		 
		 /* ARFCN WEIGHT */
		 {
			/* max arfcn , mid_level , { hi_weight(ANT0), lo_weight(ANT0) }, { hi_weight(ANT1), lo_weight(ANT1), { hi_weight(ANT2), lo_weight(ANT2) }  */
			{     160    ,    21     , { {((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)} }   } ,
			{     190    ,    21     , { {((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)} }   } ,
			{     220    ,    21     , { {((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)} }   } ,
			{     251    ,    21     , { {((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)} }   } ,
			/*-----------------------------------------------------*/
			{ TABLE_END }
		 },  
      },
      /*Table7*/
      {    
		  /* copmensate unit 1/8 dBm */
		 /*   5,  7,  9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33, 35 dBm                       */
		 {
            {  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    		{  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
			{  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
         }, 
		 
		 /* ARFCN WEIGHT */
		 {
			/* max arfcn , mid_level , { hi_weight(ANT0), lo_weight(ANT0) }, { hi_weight(ANT1), lo_weight(ANT1), { hi_weight(ANT2), lo_weight(ANT2) }  */
			{     160    ,    21     , { {((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)} }   } ,
			{     190    ,    21     , { {((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)} }   } ,
			{     220    ,    21     , { {((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)} }   } ,
			{     251    ,    21     , { {((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)} }   } ,
			/*-----------------------------------------------------*/
			{ TABLE_END }
		 },  
      },
      /*Table8*/
      {     
		  /* copmensate unit 1/8 dBm */
		 /*   5,  7,  9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33, 35 dBm                       */
		 {
            {  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    		{  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
			{  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
         }, 
		 
		 /* ARFCN WEIGHT */
		 {
			/* max arfcn , mid_level , { hi_weight(ANT0), lo_weight(ANT0) }, { hi_weight(ANT1), lo_weight(ANT1), { hi_weight(ANT2), lo_weight(ANT2) }  */
			{     160    ,    21     , { {((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)} }   } ,
			{     190    ,    21     , { {((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)} }   } ,
			{     220    ,    21     , { {((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)} }   } ,
			{     251    ,    21     , { {((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)} }   } ,
			/*-----------------------------------------------------*/
			{ TABLE_END }
		 },  
      },
      #endif
   },
};

/* GSM.......................................................................*/
const sTX_POWER_OFFSET  GSM_Tx_Power_Offset_EPSK_SetDefault =
{
   {
	/*Table0 (Default Table)*/
      {
		  /* copmensate unit 1/8 dBm */
		 /*   5,  7,  9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33, 35 dBm                       */
		 {
            {  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    		{  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
			{  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
         }, 
		 
		 /* ARFCN WEIGHT */
		 {
			/* max arfcn , mid_level , { hi_weight(ANT0), lo_weight(ANT0) }, { hi_weight(ANT1), lo_weight(ANT1), { hi_weight(ANT2), lo_weight(ANT2) }  */
			{      40    ,    21     , { {((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)} }   } ,
			{      82    ,    21     , { {((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)} }   } ,
			{     124    ,    21     , { {((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)} }   } ,
			{    1023    ,    21     , { {((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)} }   } ,
			/*-----------------------------------------------------*/
			{ TABLE_END }
		 },
      },
   	#if IS_SAR_TX_POWER_BACKOFF_SUPPORT
      /*Table1*/
      {     
		  /* copmensate unit 1/8 dBm */
		 /*   5,  7,  9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33, 35 dBm                       */
		 {
            {  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    		{  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
			{  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
         }, 
		 
		 /* ARFCN WEIGHT */
		 {
			/* max arfcn , mid_level , { hi_weight(ANT0), lo_weight(ANT0) }, { hi_weight(ANT1), lo_weight(ANT1), { hi_weight(ANT2), lo_weight(ANT2) }  */
			{      40    ,    21     , { {((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)} }   } ,
			{      82    ,    21     , { {((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)} }   } ,
			{     124    ,    21     , { {((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)} }   } ,
			{    1023    ,    21     , { {((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)} }   } ,
			/*-----------------------------------------------------*/
			{ TABLE_END }
		 },
      },
      /*Table2*/
      {
		  /* copmensate unit 1/8 dBm */
		 /*   5,  7,  9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33, 35 dBm                       */
		 {
            {  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    		{  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
			{  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
         }, 
		 
		 /* ARFCN WEIGHT */
		 {
			/* max arfcn , mid_level , { hi_weight(ANT0), lo_weight(ANT0) }, { hi_weight(ANT1), lo_weight(ANT1), { hi_weight(ANT2), lo_weight(ANT2) }  */
			{      40    ,    21     , { {((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)} }   } ,
			{      82    ,    21     , { {((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)} }   } ,
			{     124    ,    21     , { {((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)} }   } ,
			{    1023    ,    21     , { {((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)} }   } ,
			/*-----------------------------------------------------*/
			{ TABLE_END }
		 },
      },
      /*Table3*/
      {     
		  /* copmensate unit 1/8 dBm */
		 /*   5,  7,  9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33, 35 dBm                       */
		 {
            {  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    		{  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
			{  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
         }, 
		 
		 /* ARFCN WEIGHT */
		 {
			/* max arfcn , mid_level , { hi_weight(ANT0), lo_weight(ANT0) }, { hi_weight(ANT1), lo_weight(ANT1), { hi_weight(ANT2), lo_weight(ANT2) }  */
			{      40    ,    21     , { {((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)} }   } ,
			{      82    ,    21     , { {((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)} }   } ,
			{     124    ,    21     , { {((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)} }   } ,
			{    1023    ,    21     , { {((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)} }   } ,
			/*-----------------------------------------------------*/
			{ TABLE_END }
		 },
      },
      /*Table4*/
      {
		  /* copmensate unit 1/8 dBm */
		 /*   5,  7,  9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33, 35 dBm                       */
		 {
            {  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    		{  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
			{  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
         }, 
		 
		 /* ARFCN WEIGHT */
		 {
			/* max arfcn , mid_level , { hi_weight(ANT0), lo_weight(ANT0) }, { hi_weight(ANT1), lo_weight(ANT1), { hi_weight(ANT2), lo_weight(ANT2) }  */
			{      40    ,    21     , { {((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)} }   } ,
			{      82    ,    21     , { {((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)} }   } ,
			{     124    ,    21     , { {((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)} }   } ,
			{    1023    ,    21     , { {((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)} }   } ,
			/*-----------------------------------------------------*/
			{ TABLE_END }
		 },
      },
      /*Table5*/
      {     
		  /* copmensate unit 1/8 dBm */
		 /*   5,  7,  9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33, 35 dBm                       */
		 {
            {  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    		{  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
			{  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
         }, 
		 
		 /* ARFCN WEIGHT */
		 {
			/* max arfcn , mid_level , { hi_weight(ANT0), lo_weight(ANT0) }, { hi_weight(ANT1), lo_weight(ANT1), { hi_weight(ANT2), lo_weight(ANT2) }  */
			{      40    ,    21     , { {((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)} }   } ,
			{      82    ,    21     , { {((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)} }   } ,
			{     124    ,    21     , { {((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)} }   } ,
			{    1023    ,    21     , { {((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)} }   } ,
			/*-----------------------------------------------------*/
			{ TABLE_END }
		 },
      },
      /*Table6*/
      {
		  /* copmensate unit 1/8 dBm */
		 /*   5,  7,  9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33, 35 dBm                       */
		 {
            {  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    		{  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
			{  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
         }, 
		 
		 /* ARFCN WEIGHT */
		 {
			/* max arfcn , mid_level , { hi_weight(ANT0), lo_weight(ANT0) }, { hi_weight(ANT1), lo_weight(ANT1), { hi_weight(ANT2), lo_weight(ANT2) }  */
			{      40    ,    21     , { {((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)} }   } ,
			{      82    ,    21     , { {((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)} }   } ,
			{     124    ,    21     , { {((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)} }   } ,
			{    1023    ,    21     , { {((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)} }   } ,
			/*-----------------------------------------------------*/
			{ TABLE_END }
		 },
      },
      /*Table7*/
      {     
		  /* copmensate unit 1/8 dBm */
		 /*   5,  7,  9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33, 35 dBm                       */
		 {
            {  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    		{  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
			{  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
         }, 
		 
		 /* ARFCN WEIGHT */
		 {
			/* max arfcn , mid_level , { hi_weight(ANT0), lo_weight(ANT0) }, { hi_weight(ANT1), lo_weight(ANT1), { hi_weight(ANT2), lo_weight(ANT2) }  */
			{      40    ,    21     , { {((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)} }   } ,
			{      82    ,    21     , { {((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)} }   } ,
			{     124    ,    21     , { {((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)} }   } ,
			{    1023    ,    21     , { {((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)} }   } ,
			/*-----------------------------------------------------*/
			{ TABLE_END }
		 },
      },
      /*Table8*/
      {     
	      /* copmensate unit 1/8 dBm */
		 /*   5,  7,  9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33, 35 dBm                       */
		 {
            {  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    		{  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
			{  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
         }, 
		 
		 /* ARFCN WEIGHT */
		 {
			/* max arfcn , mid_level , { hi_weight(ANT0), lo_weight(ANT0) }, { hi_weight(ANT1), lo_weight(ANT1), { hi_weight(ANT2), lo_weight(ANT2) }  */
			{      40    ,    21     , { {((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)} }   } ,
			{      82    ,    21     , { {((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)} }   } ,
			{     124    ,    21     , { {((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)} }   } ,
			{    1023    ,    21     , { {((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)} }   } ,
			/*-----------------------------------------------------*/
			{ TABLE_END }
		 },
      },
      #endif
   },
};

/* DCS.......................................................................*/
const sTX_POWER_OFFSET  DCS_Tx_Power_Offset_EPSK_SetDefault =
{
   {
	/*Table0 (Default Table)*/
      {
		  /* copmensate unit 1/8 dBm */
		 /*   0,  2,  4,  6,  8, 10, 12, 14, 16, 18, 20, 22, 24, 26, 28, 30 dBm                       */
		 {
            {  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    		{  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
			{  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
         }, 
		 
		 /* ARFCN WEIGHT */
		 {
			/* max arfcn , mid_level , { hi_weight(ANT0), lo_weight(ANT0) }, { hi_weight(ANT1), lo_weight(ANT1), { hi_weight(ANT2), lo_weight(ANT2) }  */
			{     520    ,    16     , { {((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)} }   } ,
			{     560    ,    16     , { {((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)} }   } ,
			{     800    ,    16     , { {((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)} }   } ,
			{     885    ,    16     , { {((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)} }   } ,
			/*-----------------------------------------------------*/
			{ TABLE_END }
		 },
      },
   	#if IS_SAR_TX_POWER_BACKOFF_SUPPORT
      /*Table1*/
      {      
	      /* copmensate unit 1/8 dBm */
		 /*   0,  2,  4,  6,  8, 10, 12, 14, 16, 18, 20, 22, 24, 26, 28, 30 dBm                       */
		 {
            {  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    		{  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
			{  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
         }, 
		 
		 /* ARFCN WEIGHT */
		 {
			/* max arfcn , mid_level , { hi_weight(ANT0), lo_weight(ANT0) }, { hi_weight(ANT1), lo_weight(ANT1), { hi_weight(ANT2), lo_weight(ANT2) }  */
			{     520    ,    16     , { {((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)} }   } ,
			{     560    ,    16     , { {((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)} }   } ,
			{     800    ,    16     , { {((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)} }   } ,
			{     885    ,    16     , { {((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)} }   } ,
			/*-----------------------------------------------------*/
			{ TABLE_END }
		 },
      },
      /*Table2*/
      {
		  /* copmensate unit 1/8 dBm */
		 /*   0,  2,  4,  6,  8, 10, 12, 14, 16, 18, 20, 22, 24, 26, 28, 30 dBm                       */
		 {
            {  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    		{  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
			{  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
         }, 
		 
		 /* ARFCN WEIGHT */
		 {
			/* max arfcn , mid_level , { hi_weight(ANT0), lo_weight(ANT0) }, { hi_weight(ANT1), lo_weight(ANT1), { hi_weight(ANT2), lo_weight(ANT2) }  */
			{     520    ,    16     , { {((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)} }   } ,
			{     560    ,    16     , { {((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)} }   } ,
			{     800    ,    16     , { {((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)} }   } ,
			{     885    ,    16     , { {((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)} }   } ,
			/*-----------------------------------------------------*/
			{ TABLE_END }
		 },
      },
      /*Table3*/
      {      
		  /* copmensate unit 1/8 dBm */
		 /*   0,  2,  4,  6,  8, 10, 12, 14, 16, 18, 20, 22, 24, 26, 28, 30 dBm                       */
		 {
            {  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    		{  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
			{  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
         }, 
		 
		 /* ARFCN WEIGHT */
		 {
			/* max arfcn , mid_level , { hi_weight(ANT0), lo_weight(ANT0) }, { hi_weight(ANT1), lo_weight(ANT1), { hi_weight(ANT2), lo_weight(ANT2) }  */
			{     520    ,    16     , { {((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)} }   } ,
			{     560    ,    16     , { {((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)} }   } ,
			{     800    ,    16     , { {((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)} }   } ,
			{     885    ,    16     , { {((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)} }   } ,
			/*-----------------------------------------------------*/
			{ TABLE_END }
		 },
      },
      /*Table4*/
      {
		  /* copmensate unit 1/8 dBm */
		 /*   0,  2,  4,  6,  8, 10, 12, 14, 16, 18, 20, 22, 24, 26, 28, 30 dBm                       */
		 {
            {  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    		{  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
			{  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
         }, 
		 
		 /* ARFCN WEIGHT */
		 {
			/* max arfcn , mid_level , { hi_weight(ANT0), lo_weight(ANT0) }, { hi_weight(ANT1), lo_weight(ANT1), { hi_weight(ANT2), lo_weight(ANT2) }  */
			{     520    ,    16     , { {((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)} }   } ,
			{     560    ,    16     , { {((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)} }   } ,
			{     800    ,    16     , { {((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)} }   } ,
			{     885    ,    16     , { {((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)} }   } ,
			/*-----------------------------------------------------*/
			{ TABLE_END }
		 },
      },
      /*Table5*/
      {      
	      /* copmensate unit 1/8 dBm */
		 /*   0,  2,  4,  6,  8, 10, 12, 14, 16, 18, 20, 22, 24, 26, 28, 30 dBm                       */
		 {
            {  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    		{  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
			{  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
         }, 
		 
		 /* ARFCN WEIGHT */
		 {
			/* max arfcn , mid_level , { hi_weight(ANT0), lo_weight(ANT0) }, { hi_weight(ANT1), lo_weight(ANT1), { hi_weight(ANT2), lo_weight(ANT2) }  */
			{     520    ,    16     , { {((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)} }   } ,
			{     560    ,    16     , { {((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)} }   } ,
			{     800    ,    16     , { {((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)} }   } ,
			{     885    ,    16     , { {((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)} }   } ,
			/*-----------------------------------------------------*/
			{ TABLE_END }
		 },
      },
      /*Table6*/
      {
		  /* copmensate unit 1/8 dBm */
		 /*   0,  2,  4,  6,  8, 10, 12, 14, 16, 18, 20, 22, 24, 26, 28, 30 dBm                       */
		 {
            {  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    		{  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
			{  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
         }, 
		 
		 /* ARFCN WEIGHT */
		 {
			/* max arfcn , mid_level , { hi_weight(ANT0), lo_weight(ANT0) }, { hi_weight(ANT1), lo_weight(ANT1), { hi_weight(ANT2), lo_weight(ANT2) }  */
			{     520    ,    16     , { {((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)} }   } ,
			{     560    ,    16     , { {((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)} }   } ,
			{     800    ,    16     , { {((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)} }   } ,
			{     885    ,    16     , { {((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)} }   } ,
			/*-----------------------------------------------------*/
			{ TABLE_END }
		 },
      },
      /*Table7*/
      {     
          /* copmensate unit 1/8 dBm */
		 /*   0,  2,  4,  6,  8, 10, 12, 14, 16, 18, 20, 22, 24, 26, 28, 30 dBm                       */
		 {
            {  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    		{  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
			{  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
         }, 
		 
		 /* ARFCN WEIGHT */
		 {
			/* max arfcn , mid_level , { hi_weight(ANT0), lo_weight(ANT0) }, { hi_weight(ANT1), lo_weight(ANT1), { hi_weight(ANT2), lo_weight(ANT2) }  */
			{     520    ,    16     , { {((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)} }   } ,
			{     560    ,    16     , { {((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)} }   } ,
			{     800    ,    16     , { {((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)} }   } ,
			{     885    ,    16     , { {((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)} }   } ,
			/*-----------------------------------------------------*/
			{ TABLE_END }
		 },
      },
      /*Table8*/
      {   
          /* copmensate unit 1/8 dBm */
		 /*   0,  2,  4,  6,  8, 10, 12, 14, 16, 18, 20, 22, 24, 26, 28, 30 dBm                       */
		 {
            {  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    		{  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
			{  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
         }, 
		 
		 /* ARFCN WEIGHT */
		 {
			/* max arfcn , mid_level , { hi_weight(ANT0), lo_weight(ANT0) }, { hi_weight(ANT1), lo_weight(ANT1), { hi_weight(ANT2), lo_weight(ANT2) }  */
			{     520    ,    16     , { {((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)} }   } ,
			{     560    ,    16     , { {((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)} }   } ,
			{     800    ,    16     , { {((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)} }   } ,
			{     885    ,    16     , { {((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)} }   } ,
			/*-----------------------------------------------------*/
			{ TABLE_END }
		 },
      },
      #endif
   },
};

/* PCS.......................................................................*/
const sTX_POWER_OFFSET  PCS_Tx_Power_Offset_EPSK_SetDefault =
{
   {
      /*Table0 (Default Table)*/
      {
		  /* copmensate unit 1/8 dBm */
		 /*   0,  2,  4,  6,  8, 10, 12, 14, 16, 18, 20, 22, 24, 26, 28, 30 dBm                       */
		 {
            {  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    		{  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
			{  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
         }, 
		 
		 /* ARFCN WEIGHT */
		 {
			/* max arfcn , mid_level , { hi_weight(ANT0), lo_weight(ANT0) }, { hi_weight(ANT1), lo_weight(ANT1), { hi_weight(ANT2), lo_weight(ANT2) }  */
			{     520    ,    16     , { {((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)} }   } ,
			{     620    ,    16     , { {((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)} }   } ,
			{     720    ,    16     , { {((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)} }   } ,
			{     810    ,    16     , { {((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)} }   } ,
			/*-----------------------------------------------------*/
			{ TABLE_END }
		 },
      },
   	#if IS_SAR_TX_POWER_BACKOFF_SUPPORT
      /*Table1*/
      {
		  /* copmensate unit 1/8 dBm */
		 /*   0,  2,  4,  6,  8, 10, 12, 14, 16, 18, 20, 22, 24, 26, 28, 30 dBm                       */
		 {
            {  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    		{  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
			{  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
         }, 
		 
		 /* ARFCN WEIGHT */
		 {
			/* max arfcn , mid_level , { hi_weight(ANT0), lo_weight(ANT0) }, { hi_weight(ANT1), lo_weight(ANT1), { hi_weight(ANT2), lo_weight(ANT2) }  */
			{     520    ,    16     , { {((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)} }   } ,
			{     620    ,    16     , { {((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)} }   } ,
			{     720    ,    16     , { {((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)} }   } ,
			{     810    ,    16     , { {((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)} }   } ,
			/*-----------------------------------------------------*/
			{ TABLE_END }
		 },
      },
      /*Table2*/
      {
		  /* copmensate unit 1/8 dBm */
		 /*   0,  2,  4,  6,  8, 10, 12, 14, 16, 18, 20, 22, 24, 26, 28, 30 dBm                       */
		 {
            {  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    		{  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
			{  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
         }, 
		 
		 /* ARFCN WEIGHT */
		 {
			/* max arfcn , mid_level , { hi_weight(ANT0), lo_weight(ANT0) }, { hi_weight(ANT1), lo_weight(ANT1), { hi_weight(ANT2), lo_weight(ANT2) }  */
			{     520    ,    16     , { {((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)} }   } ,
			{     620    ,    16     , { {((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)} }   } ,
			{     720    ,    16     , { {((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)} }   } ,
			{     810    ,    16     , { {((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)} }   } ,
			/*-----------------------------------------------------*/
			{ TABLE_END }
		 },
      },
      /*Table3*/
      {
		  /* copmensate unit 1/8 dBm */
		 /*   0,  2,  4,  6,  8, 10, 12, 14, 16, 18, 20, 22, 24, 26, 28, 30 dBm                       */
		 {
            {  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    		{  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
			{  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
         }, 
		 
		 /* ARFCN WEIGHT */
		 {
			/* max arfcn , mid_level , { hi_weight(ANT0), lo_weight(ANT0) }, { hi_weight(ANT1), lo_weight(ANT1), { hi_weight(ANT2), lo_weight(ANT2) }  */
			{     520    ,    16     , { {((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)} }   } ,
			{     620    ,    16     , { {((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)} }   } ,
			{     720    ,    16     , { {((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)} }   } ,
			{     810    ,    16     , { {((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)} }   } ,
			/*-----------------------------------------------------*/
			{ TABLE_END }
		 },
      },
      /*Table4*/
      {
		  /* copmensate unit 1/8 dBm */
		 /*   0,  2,  4,  6,  8, 10, 12, 14, 16, 18, 20, 22, 24, 26, 28, 30 dBm                       */
		 {
            {  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    		{  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
			{  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
         }, 
		 
		 /* ARFCN WEIGHT */
		 {
			/* max arfcn , mid_level , { hi_weight(ANT0), lo_weight(ANT0) }, { hi_weight(ANT1), lo_weight(ANT1), { hi_weight(ANT2), lo_weight(ANT2) }  */
			{     520    ,    16     , { {((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)} }   } ,
			{     620    ,    16     , { {((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)} }   } ,
			{     720    ,    16     , { {((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)} }   } ,
			{     810    ,    16     , { {((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)} }   } ,
			/*-----------------------------------------------------*/
			{ TABLE_END }
		 },
      },
      /*Table5*/
      {
		  /* copmensate unit 1/8 dBm */
		 /*   0,  2,  4,  6,  8, 10, 12, 14, 16, 18, 20, 22, 24, 26, 28, 30 dBm                       */
		 {
            {  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    		{  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
			{  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
         }, 
		 
		 /* ARFCN WEIGHT */
		 {
			/* max arfcn , mid_level , { hi_weight(ANT0), lo_weight(ANT0) }, { hi_weight(ANT1), lo_weight(ANT1), { hi_weight(ANT2), lo_weight(ANT2) }  */
			{     520    ,    16     , { {((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)} }   } ,
			{     620    ,    16     , { {((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)} }   } ,
			{     720    ,    16     , { {((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)} }   } ,
			{     810    ,    16     , { {((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)} }   } ,
			/*-----------------------------------------------------*/
			{ TABLE_END }
		 },
      },
      /*Table6*/
      {
		  /* copmensate unit 1/8 dBm */
		 /*   0,  2,  4,  6,  8, 10, 12, 14, 16, 18, 20, 22, 24, 26, 28, 30 dBm                       */
		 {
            {  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    		{  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
			{  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
         }, 
		 
		 /* ARFCN WEIGHT */
		 {
			/* max arfcn , mid_level , { hi_weight(ANT0), lo_weight(ANT0) }, { hi_weight(ANT1), lo_weight(ANT1), { hi_weight(ANT2), lo_weight(ANT2) }  */
			{     520    ,    16     , { {((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)} }   } ,
			{     620    ,    16     , { {((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)} }   } ,
			{     720    ,    16     , { {((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)} }   } ,
			{     810    ,    16     , { {((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)} }   } ,
			/*-----------------------------------------------------*/
			{ TABLE_END }
		 },
      },
      /*Table7*/
      {
		  /* copmensate unit 1/8 dBm */
		 /*   0,  2,  4,  6,  8, 10, 12, 14, 16, 18, 20, 22, 24, 26, 28, 30 dBm                       */
		 {
            {  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    		{  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
			{  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
         }, 
		 
		 /* ARFCN WEIGHT */
		 {
			/* max arfcn , mid_level , { hi_weight(ANT0), lo_weight(ANT0) }, { hi_weight(ANT1), lo_weight(ANT1), { hi_weight(ANT2), lo_weight(ANT2) }  */
			{     520    ,    16     , { {((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)} }   } ,
			{     620    ,    16     , { {((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)} }   } ,
			{     720    ,    16     , { {((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)} }   } ,
			{     810    ,    16     , { {((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)} }   } ,
			/*-----------------------------------------------------*/
			{ TABLE_END }
		 },
      },
      /*Table8*/
      {
		  /* copmensate unit 1/8 dBm */
		 /*   0,  2,  4,  6,  8, 10, 12, 14, 16, 18, 20, 22, 24, 26, 28, 30 dBm                       */
		 {
            {  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    		{  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
			{  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
         }, 
		 
		 /* ARFCN WEIGHT */
		 {
			/* max arfcn , mid_level , { hi_weight(ANT0), lo_weight(ANT0) }, { hi_weight(ANT1), lo_weight(ANT1), { hi_weight(ANT2), lo_weight(ANT2) }  */
			{     520    ,    16     , { {((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)} }   } ,
			{     620    ,    16     , { {((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)} }   } ,
			{     720    ,    16     , { {((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)} }   } ,
			{     810    ,    16     , { {((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)},{((0.000)*(1<<3)+4096), ((0.000)*(1<<3)+4096)} }   } ,
			/*-----------------------------------------------------*/
			{ TABLE_END }
		 },
      },
      #endif
   },
};

const sTX_POWER_OFFSET*  Tx_Power_Offset_EPSK_SetDefault[] =
{
   0,                              /* FrequencyBand400 (not support)  */
   &GSM850_Tx_Power_Offset_EPSK_SetDefault,   /* FrequencyBand850                */
   &GSM_Tx_Power_Offset_EPSK_SetDefault,      /* FrequencyBand900                */
   &DCS_Tx_Power_Offset_EPSK_SetDefault,      /* FrequencyBand1800               */
   &PCS_Tx_Power_Offset_EPSK_SetDefault,      /* FrequencyBand1900               */
};

#endif   // __EPSK_TX__
#endif   // IS_TX_POWER_OFFSET_SUPPORT


/*-------------------------------------------------------------For DRDI Setting End---------------------------------------------*/
#endif
