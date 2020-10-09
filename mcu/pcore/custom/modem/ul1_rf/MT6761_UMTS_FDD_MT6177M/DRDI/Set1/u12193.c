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
 *	u12193.c
 *
 * Project:
 * --------
 *   MT6169+6290
 *
 * Description:
 * ------------
 *   MT6169_6290 Power Ramp Table
 *
 * Author:
 * -------
 *	
 *
 *******************************************************************************/
#if !defined(MT6177M_RF)
   #error "rf files mismatch with compile option!"
#endif

/*===============================================================================================*/
#include "kal_public_api.h"
#include "ul1d_rf_public.h"
#include "ul1d_custom_rf.h"
#ifdef __MTK_TARGET__
#include "wcustomdata.h"
#endif

#if defined(L1_SIM)
#include "SymWrap.h"
#endif

const U_sTEMPAGCOFFSET AGC_PATHLOSS_UMTSBandNone_Set1 =
{
   //8 temperature section compensated offset
   {0, 0, 0, 0, 0, 0, 0, 0},

   {
      {
         /* uarfcn */
         0,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         0,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         0,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         0,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         0,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {  UMTS_TABLE_END }// Max. to 15 path loss elements
   }
};

const U_sTEMPAGCOFFSET AGC_PATHLOSS_UMTSBand1_Set1 = 
{
   //8 temperature section compensated offset
   {0, 0, 0, 0, 0, 0, 0, 0},

   {
      {
         /* uarfcn */
         10562,  
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 3.250 ), U_GAINLOSS( 4.50 ), U_GAINLOSS( 4.250 ), U_GAINLOSS( 3.250 ), U_GAINLOSS( 3.250 ), U_GAINLOSS(-0.250 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 3.250 ), U_GAINLOSS( 4.50 ), U_GAINLOSS( 4.250 ), U_GAINLOSS( 3.250 ), U_GAINLOSS( 3.250 ), U_GAINLOSS(-0.250 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         10631,  
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 3.250 ), U_GAINLOSS( 4.50 ), U_GAINLOSS( 4.250 ), U_GAINLOSS( 3.250 ), U_GAINLOSS( 3.250 ), U_GAINLOSS(-0.250 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 3.250 ), U_GAINLOSS( 4.50 ), U_GAINLOSS( 4.250 ), U_GAINLOSS( 3.250 ), U_GAINLOSS( 3.250 ), U_GAINLOSS(-0.250 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         10700,  
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 3.250 ), U_GAINLOSS( 4.50 ), U_GAINLOSS( 4.250 ), U_GAINLOSS( 3.250 ), U_GAINLOSS( 3.250 ), U_GAINLOSS(-0.250 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 3.250 ), U_GAINLOSS( 4.50 ), U_GAINLOSS( 4.250 ), U_GAINLOSS( 3.250 ), U_GAINLOSS( 3.250 ), U_GAINLOSS(-0.250 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         10769,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 3.250 ), U_GAINLOSS( 4.50 ), U_GAINLOSS( 4.250 ), U_GAINLOSS( 3.250 ), U_GAINLOSS( 3.250 ), U_GAINLOSS(-0.250 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 3.250 ), U_GAINLOSS( 4.50 ), U_GAINLOSS( 4.250 ), U_GAINLOSS( 3.250 ), U_GAINLOSS( 3.250 ), U_GAINLOSS(-0.250 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         10838,  
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 3.250 ), U_GAINLOSS( 4.50 ), U_GAINLOSS( 4.250 ), U_GAINLOSS( 3.250 ), U_GAINLOSS( 3.250 ), U_GAINLOSS(-0.250 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 3.250 ), U_GAINLOSS( 4.50 ), U_GAINLOSS( 4.250 ), U_GAINLOSS( 3.250 ), U_GAINLOSS( 3.250 ), U_GAINLOSS(-0.250 ), U_GAINLOSS( 0.000 ) }         
      },
      {  UMTS_TABLE_END }// Max. to 15 path loss elements
   }
};

const U_sTEMPAGCOFFSET AGC_PATHLOSS_UMTSBand2_Set1 = 
{
   //8 temperature section compensated offset
   {0, 0, 0, 0, 0, 0, 0, 0},

   {
      {
         /* uarfcn */
         9662,  
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 1.250 ), U_GAINLOSS( 1.500 ), U_GAINLOSS( 0.500 ), U_GAINLOSS( 0.000 ), U_GAINLOSS(-0.500 ), U_GAINLOSS(-2.250 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 1.250 ), U_GAINLOSS( 1.500 ), U_GAINLOSS( 0.500 ), U_GAINLOSS( 0.000 ), U_GAINLOSS(-0.500 ), U_GAINLOSS(-2.250 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         9700,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 1.250 ), U_GAINLOSS( 1.500 ), U_GAINLOSS( 0.500 ), U_GAINLOSS( 0.000 ), U_GAINLOSS(-0.500 ), U_GAINLOSS(-2.250 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 1.250 ), U_GAINLOSS( 1.500 ), U_GAINLOSS( 0.500 ), U_GAINLOSS( 0.000 ), U_GAINLOSS(-0.500 ), U_GAINLOSS(-2.250 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         9800,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 1.250 ), U_GAINLOSS( 1.500 ), U_GAINLOSS( 0.500 ), U_GAINLOSS( 0.000 ), U_GAINLOSS(-0.500 ), U_GAINLOSS(-2.250 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 1.250 ), U_GAINLOSS( 1.500 ), U_GAINLOSS( 0.500 ), U_GAINLOSS( 0.000 ), U_GAINLOSS(-0.500 ), U_GAINLOSS(-2.250 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         9869,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 1.250 ), U_GAINLOSS( 1.500 ), U_GAINLOSS( 0.500 ), U_GAINLOSS( 0.000 ), U_GAINLOSS(-0.500 ), U_GAINLOSS(-2.250 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 1.250 ), U_GAINLOSS( 1.500 ), U_GAINLOSS( 0.500 ), U_GAINLOSS( 0.000 ), U_GAINLOSS(-0.500 ), U_GAINLOSS(-2.250 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         9938,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 1.250 ), U_GAINLOSS( 1.500 ), U_GAINLOSS( 0.500 ), U_GAINLOSS( 0.000 ), U_GAINLOSS(-0.500 ), U_GAINLOSS(-2.250 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 1.250 ), U_GAINLOSS( 1.500 ), U_GAINLOSS( 0.500 ), U_GAINLOSS( 0.000 ), U_GAINLOSS(-0.500 ), U_GAINLOSS(-2.250 ), U_GAINLOSS( 0.000 ) }         
      },
      {  UMTS_TABLE_END }// Max. to 15 path loss elements
   }
};

const U_sTEMPAGCOFFSET AGC_PATHLOSS_UMTSBand3_Set1 = 
{
   //8 temperature section compensated offset
   {0, 0, 0, 0, 0, 0, 0, 0},

   {
      {
         /* uarfcn */
         1162,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         1187,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         1212,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         1237,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         1262,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         1287,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         1312,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         1338,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         1363,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         1388,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         1413,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         1438,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         1463,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         1488,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         1513,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      }
   }
};

const U_sTEMPAGCOFFSET AGC_PATHLOSS_UMTSBand4_Set1 = 
{
   //8 temperature section compensated offset
   {0, 0, 0, 0, 0, 0, 0, 0},

   {
      {
         /* uarfcn */
         1537,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 3.000 ), U_GAINLOSS( 3.000 ), U_GAINLOSS( 4.000 ), U_GAINLOSS( 2.750 ), U_GAINLOSS( 2.750 ), U_GAINLOSS(-1.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 3.000 ), U_GAINLOSS( 3.000 ), U_GAINLOSS( 4.000 ), U_GAINLOSS( 2.750 ), U_GAINLOSS( 2.750 ), U_GAINLOSS(-1.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         1552,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 3.000 ), U_GAINLOSS( 3.000 ), U_GAINLOSS( 4.000 ), U_GAINLOSS( 2.750 ), U_GAINLOSS( 2.750 ), U_GAINLOSS(-1.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 3.000 ), U_GAINLOSS( 3.000 ), U_GAINLOSS( 4.000 ), U_GAINLOSS( 2.750 ), U_GAINLOSS( 2.750 ), U_GAINLOSS(-1.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         1567,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 3.000 ), U_GAINLOSS( 3.000 ), U_GAINLOSS( 4.000 ), U_GAINLOSS( 2.750 ), U_GAINLOSS( 2.750 ), U_GAINLOSS(-1.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 3.000 ), U_GAINLOSS( 3.000 ), U_GAINLOSS( 4.000 ), U_GAINLOSS( 2.750 ), U_GAINLOSS( 2.750 ), U_GAINLOSS(-1.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         1582,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 3.000 ), U_GAINLOSS( 3.000 ), U_GAINLOSS( 4.000 ), U_GAINLOSS( 2.750 ), U_GAINLOSS( 2.750 ), U_GAINLOSS(-1.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 3.000 ), U_GAINLOSS( 3.000 ), U_GAINLOSS( 4.000 ), U_GAINLOSS( 2.750 ), U_GAINLOSS( 2.750 ), U_GAINLOSS(-1.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         1597,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 3.000 ), U_GAINLOSS( 3.000 ), U_GAINLOSS( 4.000 ), U_GAINLOSS( 2.750 ), U_GAINLOSS( 2.750 ), U_GAINLOSS(-1.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 3.000 ), U_GAINLOSS( 3.000 ), U_GAINLOSS( 4.000 ), U_GAINLOSS( 2.750 ), U_GAINLOSS( 2.750 ), U_GAINLOSS(-1.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         1612,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 3.000 ), U_GAINLOSS( 3.000 ), U_GAINLOSS( 4.000 ), U_GAINLOSS( 2.750 ), U_GAINLOSS( 2.750 ), U_GAINLOSS(-1.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 3.000 ), U_GAINLOSS( 3.000 ), U_GAINLOSS( 4.000 ), U_GAINLOSS( 2.750 ), U_GAINLOSS( 2.750 ), U_GAINLOSS(-1.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         1627,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 3.000 ), U_GAINLOSS( 3.000 ), U_GAINLOSS( 4.000 ), U_GAINLOSS( 2.750 ), U_GAINLOSS( 2.750 ), U_GAINLOSS(-1.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 3.000 ), U_GAINLOSS( 3.000 ), U_GAINLOSS( 4.000 ), U_GAINLOSS( 2.750 ), U_GAINLOSS( 2.750 ), U_GAINLOSS(-1.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         1642,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 3.000 ), U_GAINLOSS( 3.000 ), U_GAINLOSS( 4.000 ), U_GAINLOSS( 2.750 ), U_GAINLOSS( 2.750 ), U_GAINLOSS(-1.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 3.000 ), U_GAINLOSS( 3.000 ), U_GAINLOSS( 4.000 ), U_GAINLOSS( 2.750 ), U_GAINLOSS( 2.750 ), U_GAINLOSS(-1.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         1657,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 3.000 ), U_GAINLOSS( 3.000 ), U_GAINLOSS( 4.000 ), U_GAINLOSS( 2.750 ), U_GAINLOSS( 2.750 ), U_GAINLOSS(-1.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 3.000 ), U_GAINLOSS( 3.000 ), U_GAINLOSS( 4.000 ), U_GAINLOSS( 2.750 ), U_GAINLOSS( 2.750 ), U_GAINLOSS(-1.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         1675,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 3.000 ), U_GAINLOSS( 3.000 ), U_GAINLOSS( 4.000 ), U_GAINLOSS( 2.750 ), U_GAINLOSS( 2.750 ), U_GAINLOSS(-1.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 3.000 ), U_GAINLOSS( 3.000 ), U_GAINLOSS( 4.000 ), U_GAINLOSS( 2.750 ), U_GAINLOSS( 2.750 ), U_GAINLOSS(-1.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         1687,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 3.000 ), U_GAINLOSS( 3.000 ), U_GAINLOSS( 4.000 ), U_GAINLOSS( 2.750 ), U_GAINLOSS( 2.750 ), U_GAINLOSS(-1.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 3.000 ), U_GAINLOSS( 3.000 ), U_GAINLOSS( 4.000 ), U_GAINLOSS( 2.750 ), U_GAINLOSS( 2.750 ), U_GAINLOSS(-1.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         1702,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 3.000 ), U_GAINLOSS( 3.000 ), U_GAINLOSS( 4.000 ), U_GAINLOSS( 2.750 ), U_GAINLOSS( 2.750 ), U_GAINLOSS(-1.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 3.000 ), U_GAINLOSS( 3.000 ), U_GAINLOSS( 4.000 ), U_GAINLOSS( 2.750 ), U_GAINLOSS( 2.750 ), U_GAINLOSS(-1.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         1717,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 3.000 ), U_GAINLOSS( 3.000 ), U_GAINLOSS( 4.000 ), U_GAINLOSS( 2.750 ), U_GAINLOSS( 2.750 ), U_GAINLOSS(-1.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 3.000 ), U_GAINLOSS( 3.000 ), U_GAINLOSS( 4.000 ), U_GAINLOSS( 2.750 ), U_GAINLOSS( 2.750 ), U_GAINLOSS(-1.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         1732,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 3.000 ), U_GAINLOSS( 3.000 ), U_GAINLOSS( 4.000 ), U_GAINLOSS( 2.750 ), U_GAINLOSS( 2.750 ), U_GAINLOSS(-1.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 3.000 ), U_GAINLOSS( 3.000 ), U_GAINLOSS( 4.000 ), U_GAINLOSS( 2.750 ), U_GAINLOSS( 2.750 ), U_GAINLOSS(-1.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {  UMTS_TABLE_END }// Max. to 15 path loss elements
   }
};

const U_sTEMPAGCOFFSET AGC_PATHLOSS_UMTSBand5_Set1 = 
{
   //8 temperature section compensated offset
   {0, 0, 0, 0, 0, 0, 0, 0},

   {
      {
         /* uarfcn */
         4357,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 1.000 ), U_GAINLOSS( 1.250 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS(-0.250 ), U_GAINLOSS(-1.750 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 1.000 ), U_GAINLOSS( 1.250 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS(-0.250 ), U_GAINLOSS(-1.750 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         4382,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 1.000 ), U_GAINLOSS( 1.250 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS(-0.250 ), U_GAINLOSS(-1.750 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 1.000 ), U_GAINLOSS( 1.250 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS(-0.250 ), U_GAINLOSS(-1.750 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         4408,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 1.000 ), U_GAINLOSS( 1.250 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS(-0.250 ), U_GAINLOSS(-1.750 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 1.000 ), U_GAINLOSS( 1.250 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS(-0.250 ), U_GAINLOSS(-1.750 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         4433,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 1.000 ), U_GAINLOSS( 1.250 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS(-0.250 ), U_GAINLOSS(-1.750 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 1.000 ), U_GAINLOSS( 1.250 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS(-0.250 ), U_GAINLOSS(-1.750 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         4458,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 1.000 ), U_GAINLOSS( 1.250 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS(-0.250 ), U_GAINLOSS(-1.750 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 1.000 ), U_GAINLOSS( 1.250 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS(-0.250 ), U_GAINLOSS(-1.750 ), U_GAINLOSS( 0.000 ) }         
      },
      {  UMTS_TABLE_END }// Max. to 15 path loss elements
   }
};

const U_sTEMPAGCOFFSET AGC_PATHLOSS_UMTSBand6_Set1 = 
{
   //8 temperature section compensated offset
   {0, 0, 0, 0, 0, 0, 0, 0},

   {
      {
         /* uarfcn */
         4387,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         4394,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         4400,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         4406,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         4413,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {  UMTS_TABLE_END }// Use this value at the end of the table. Max. to 15 path loss elements
   }
};

const U_sTEMPAGCOFFSET AGC_PATHLOSS_UMTSBand7_Set1 = 
{
   //8 temperature section compensated offset
   {0, 0, 0, 0, 0, 0, 0, 0},

   {
      {
         /* uarfcn */
         2237,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         2318,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         2400,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         2482,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         2563,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {  UMTS_TABLE_END }// Use this value at the end of the table. Max. to 15 path loss elements
   }
};


const U_sTEMPAGCOFFSET AGC_PATHLOSS_UMTSBand8_Set1 = 
{
   //8 temperature section compensated offset
   {0, 0, 0, 0, 0, 0, 0, 0},

   {
      {
         /* uarfcn */
         2937,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 2.500 ), U_GAINLOSS( 2.750 ), U_GAINLOSS( 1.250 ), U_GAINLOSS( 1.250 ), U_GAINLOSS( 0.750 ), U_GAINLOSS(-0.750 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 2.500 ), U_GAINLOSS( 2.750 ), U_GAINLOSS( 1.250 ), U_GAINLOSS( 1.250 ), U_GAINLOSS( 0.750 ), U_GAINLOSS(-0.750 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         2975,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 2.500 ), U_GAINLOSS( 2.750 ), U_GAINLOSS( 1.250 ), U_GAINLOSS( 1.250 ), U_GAINLOSS( 0.750 ), U_GAINLOSS(-0.750 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 2.500 ), U_GAINLOSS( 2.750 ), U_GAINLOSS( 1.250 ), U_GAINLOSS( 1.250 ), U_GAINLOSS( 0.750 ), U_GAINLOSS(-0.750 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         3013,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 2.500 ), U_GAINLOSS( 2.750 ), U_GAINLOSS( 1.250 ), U_GAINLOSS( 1.250 ), U_GAINLOSS( 0.750 ), U_GAINLOSS(-0.750 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 2.500 ), U_GAINLOSS( 2.750 ), U_GAINLOSS( 1.250 ), U_GAINLOSS( 1.250 ), U_GAINLOSS( 0.750 ), U_GAINLOSS(-0.750 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         3051,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 2.500 ), U_GAINLOSS( 2.750 ), U_GAINLOSS( 1.250 ), U_GAINLOSS( 1.250 ), U_GAINLOSS( 0.750 ), U_GAINLOSS(-0.750 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 2.500 ), U_GAINLOSS( 2.750 ), U_GAINLOSS( 1.250 ), U_GAINLOSS( 1.250 ), U_GAINLOSS( 0.750 ), U_GAINLOSS(-0.750 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         3088,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 2.500 ), U_GAINLOSS( 2.750 ), U_GAINLOSS( 1.250 ), U_GAINLOSS( 1.250 ), U_GAINLOSS( 0.750 ), U_GAINLOSS(-0.750 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 2.500 ), U_GAINLOSS( 2.750 ), U_GAINLOSS( 1.250 ), U_GAINLOSS( 1.250 ), U_GAINLOSS( 0.750 ), U_GAINLOSS(-0.750 ), U_GAINLOSS( 0.000 ) }         
      },
      {  UMTS_TABLE_END }// Max. to 15 path loss elements
   }
};

const U_sTEMPAGCOFFSET AGC_PATHLOSS_UMTSBand9_Set1 = 
{
   //8 temperature section compensated offset
   {0, 0, 0, 0, 0, 0, 0, 0},

   {
      {
         /* uarfcn */
         9237,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         9248,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         9259,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         9270,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         9281,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         9292,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         9303,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         9312,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         9323,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         9334,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         9345,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         9356,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         9367,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         9378,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         9387,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      }
   }
};

const U_sTEMPAGCOFFSET AGC_PATHLOSS_UMTSBand10_Set1 = 
{
   //8 temperature section compensated offset
   {0, 0, 0, 0, 0, 0, 0, 0},

   {
      {
         /* uarfcn */
         3113,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         3133,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         3153,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         3173,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         3193,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         3213,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         3233,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         3250,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         3270,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         3290,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         3310,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         3330,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         3350,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         3370,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         3387,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
   }
};

const U_sTEMPAGCOFFSET AGC_PATHLOSS_UMTSBand11_Set1 = 
{
   //8 temperature section compensated offset
   {0, 0, 0, 0, 0, 0, 0, 0},

   {
      {
         /* uarfcn */
         3712,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         3717,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         3722,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         3728,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         3733,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         3738,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         3742,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         3748,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         3753,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         3758,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         3764,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         3769,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         3775,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         3781,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         3787,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
   }
};

const U_sTEMPAGCOFFSET AGC_PATHLOSS_UMTSBand19_Set1 = 
{
   //8 temperature section compensated offset
   {0, 0, 0, 0, 0, 0, 0, 0},

   {
      {
         /* uarfcn */
         712,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         725,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         738,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         750,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         763,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {  UMTS_TABLE_END }// Use this value at the end of the table. Max. to 15 path loss elements
   }
};

const U_sTEMPAGCOFFSET AGC_PATHLOSS_UMTS_Route5_Set1 = 
{
   //8 temperature section compensated offset
   {0, 0, 0, 0, 0, 0, 0, 0},

   {
      {
         /* uarfcn */
         0,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         0,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         0,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         0,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         0,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {  UMTS_TABLE_END }// Use this value at the end of the table. Max. to 15 path loss elements
   }
};

const U_sTEMPAGCOFFSET AGC_PATHLOSS_UMTS_Route6_Set1 = 
{
   //8 temperature section compensated offset
   {0, 0, 0, 0, 0, 0, 0, 0},

   {
      {
         /* uarfcn */
         0,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         0,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         0,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         0,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         0,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {  UMTS_TABLE_END }// Use this value at the end of the table. Max. to 15 path loss elements
   }
};

const U_sTEMPAGCOFFSET AGC_PATHLOSS_UMTS_Route7_Set1 = 
{
   //8 temperature section compensated offset
   {0, 0, 0, 0, 0, 0, 0, 0},

   {
      {
         /* uarfcn */
         0,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         0,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         0,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         0,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         0,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {  UMTS_TABLE_END }// Use this value at the end of the table. Max. to 15 path loss elements
   }
};

const U_sTEMPAGCOFFSET AGC_PATHLOSS_UMTS_Route8_Set1 = 
{
   //8 temperature section compensated offset
   {0, 0, 0, 0, 0, 0, 0, 0},

   {
      {
         /* uarfcn */
         0,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         0,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         0,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         0,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         0,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {  UMTS_TABLE_END }// Use this value at the end of the table. Max. to 15 path loss elements
   }
};

const U_sTEMPAGCOFFSET AGC_PATHLOSS_UMTS_Route9_Set1 = 
{
   //8 temperature section compensated offset
   {0, 0, 0, 0, 0, 0, 0, 0},

   {
      {
         /* uarfcn */
         0,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         0,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         0,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         0,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         0,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {  UMTS_TABLE_END }// Use this value at the end of the table. Max. to 15 path loss elements
   }
};

const U_sTEMPAGCOFFSET AGC_PATHLOSS_UMTS_Route10_Set1 = 
{
   //8 temperature section compensated offset
   {0, 0, 0, 0, 0, 0, 0, 0},

   {
      {
         /* uarfcn */
         0,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         0,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         0,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         0,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         0,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {  UMTS_TABLE_END }// Use this value at the end of the table. Max. to 15 path loss elements
   }
};

const U_sTEMPAGCOFFSET AGC_PATHLOSS_UMTS_Route11_Set1 = 
{
   //8 temperature section compensated offset
   {0, 0, 0, 0, 0, 0, 0, 0},

   {
      {
         /* uarfcn */
         0,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         0,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         0,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         0,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         0,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {  UMTS_TABLE_END }// Use this value at the end of the table. Max. to 15 path loss elements
   }
};

const U_sTEMPAGCOFFSET AGC_PATHLOSS_UMTS_Route12_Set1 = 
{
   //8 temperature section compensated offset
   {0, 0, 0, 0, 0, 0, 0, 0},

   {
      {
         /* uarfcn */
         0,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         0,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         0,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         0,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         0,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {  UMTS_TABLE_END }// Use this value at the end of the table. Max. to 15 path loss elements
   }
};

const U_sTEMPAGCOFFSET AGC_PATHLOSS_UMTS_Route13_Set1 = 
{
   //8 temperature section compensated offset
   {0, 0, 0, 0, 0, 0, 0, 0},

   {
      {
         /* uarfcn */
         0,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         0,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         0,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         0,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         0,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {  UMTS_TABLE_END }// Use this value at the end of the table. Max. to 15 path loss elements
   }
};

const U_sTEMPAGCOFFSET AGC_PATHLOSS_UMTS_Route14_Set1 = 
{
   //8 temperature section compensated offset
   {0, 0, 0, 0, 0, 0, 0, 0},

   {
      {
         /* uarfcn */
         0,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         0,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         0,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         0,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         0,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {  UMTS_TABLE_END }// Use this value at the end of the table. Max. to 15 path loss elements
   }
};

const U_sTEMPAGCOFFSET AGC_PATHLOSS_UMTS_Route15_Set1 = 
{
   //8 temperature section compensated offset
   {0, 0, 0, 0, 0, 0, 0, 0},

   {
      {
         /* uarfcn */
         0,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         0,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         0,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         0,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         0,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {  UMTS_TABLE_END }// Use this value at the end of the table. Max. to 15 path loss elements
   }
};

const U_sTEMPAGCOFFSET AGC_PATHLOSS_UMTS_Route16_Set1 = 
{
   //8 temperature section compensated offset
   {0, 0, 0, 0, 0, 0, 0, 0},

   {
      {
         /* uarfcn */
         0,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         0,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         0,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         0,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         0,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {  UMTS_TABLE_END }// Use this value at the end of the table. Max. to 15 path loss elements
   }
};

const U_sTEMPAGCOFFSET AGC_PATHLOSS_UMTS_Route17_Set1 = 
{
   //8 temperature section compensated offset
   {0, 0, 0, 0, 0, 0, 0, 0},

   {
      {
         /* uarfcn */
         0,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         0,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         0,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         0,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         0,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {  UMTS_TABLE_END }// Use this value at the end of the table. Max. to 15 path loss elements
   }
};

const U_sTEMPAGCOFFSET AGC_PATHLOSS_UMTS_Route18_Set1 = 
{
   //8 temperature section compensated offset
   {0, 0, 0, 0, 0, 0, 0, 0},

   {
      {
         /* uarfcn */
         0,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         0,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         0,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         0,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         0,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {  UMTS_TABLE_END }// Use this value at the end of the table. Max. to 15 path loss elements
   }
};

const U_sTEMPAGCOFFSET AGC_PATHLOSS_UMTS_Route19_Set1 = 
{
   //8 temperature section compensated offset
   {0, 0, 0, 0, 0, 0, 0, 0},

   {
      {
         /* uarfcn */
         0,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         0,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         0,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         0,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         0,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {  UMTS_TABLE_END }// Use this value at the end of the table. Max. to 15 path loss elements
   }
};

const U_sTEMPAGCOFFSET AGC_PATHLOSS_UMTS_Route20_Set1 = 
{
   //8 temperature section compensated offset
   {0, 0, 0, 0, 0, 0, 0, 0},

   {
      {
         /* uarfcn */
         0,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         0,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         0,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         0,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         0,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {  UMTS_TABLE_END }// Use this value at the end of the table. Max. to 15 path loss elements
   }
};

const U_sTEMPAGCOFFSET AGC_PATHLOSS_UMTS_Route21_Set1 = 
{
   //8 temperature section compensated offset
   {0, 0, 0, 0, 0, 0, 0, 0},

   {
      {
         /* uarfcn */
         0,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         0,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         0,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         0,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         0,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {  UMTS_TABLE_END }// Use this value at the end of the table. Max. to 15 path loss elements
   }
};

const U_sTEMPAGCOFFSET AGC_PATHLOSS_UMTS_Route22_Set1 = 
{
   //8 temperature section compensated offset
   {0, 0, 0, 0, 0, 0, 0, 0},

   {
      {
         /* uarfcn */
         0,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         0,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         0,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         0,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         0,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {  UMTS_TABLE_END }// Use this value at the end of the table. Max. to 15 path loss elements
   }
};

const U_sTEMPAGCOFFSET AGC_PATHLOSS_UMTS_Route23_Set1 = 
{
   //8 temperature section compensated offset
   {0, 0, 0, 0, 0, 0, 0, 0},

   {
      {
         /* uarfcn */
         0,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         0,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         0,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         0,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         0,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {  UMTS_TABLE_END }// Use this value at the end of the table. Max. to 15 path loss elements
   }
};

const U_sTEMPAGCOFFSET AGC_PATHLOSS_UMTS_Route24_Set1 = 
{
   //8 temperature section compensated offset
   {0, 0, 0, 0, 0, 0, 0, 0},

   {
      {
         /* uarfcn */
         0,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         0,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         0,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         0,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         0,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {  UMTS_TABLE_END }// Use this value at the end of the table. Max. to 15 path loss elements
   }
};

#if UL1CUSTOM_CALIBRATION_DATA_DRDI_ENABLE
const U_sTEMPAGCOFFSET* const U_AGC_PATHLOSS_TABLE_Set1[] =
{
   M_UMTS_RX_AGC_PATHLOSS(UMTSBandNone, Set1),         /*BandNone*/
   M_UMTS_RX_AGC_PATHLOSS(RX_BAND_INDICATOR_0_Set1, Set1),  /*UMTS_Route0*/
   M_UMTS_RX_AGC_PATHLOSS(RX_BAND_INDICATOR_1_Set1, Set1),  /*UMTS_Route1*/
   M_UMTS_RX_AGC_PATHLOSS(RX_BAND_INDICATOR_2_Set1, Set1),  /*UMTS_Route2*/
   M_UMTS_RX_AGC_PATHLOSS(RX_BAND_INDICATOR_3_Set1, Set1),  /*UMTS_Route3*/
   M_UMTS_RX_AGC_PATHLOSS(RX_BAND_INDICATOR_4_Set1, Set1),  /*UMTS_Route4*/
#if IS_3G_RF_NCCA_SUPPORT
   M_UMTS_RX_AGC_PATHLOSS(UMTS_Route5, Set1),          /*UMTS_Route5*/
   M_UMTS_RX_AGC_PATHLOSS(UMTS_Route6, Set1),          /*UMTS_Route6*/
   M_UMTS_RX_AGC_PATHLOSS(UMTS_Route7, Set1),          /*UMTS_Route7*/
   M_UMTS_RX_AGC_PATHLOSS(UMTS_Route8, Set1),          /*UMTS_Route8*/
   M_UMTS_RX_AGC_PATHLOSS(UMTS_Route9, Set1),          /*UMTS_Route9*/
   M_UMTS_RX_AGC_PATHLOSS(UMTS_Route10, Set1),         /*UMTS_Route10*/
   M_UMTS_RX_AGC_PATHLOSS(UMTS_Route11, Set1),         /*UMTS_Route11*/
   M_UMTS_RX_AGC_PATHLOSS(UMTS_Route12, Set1),         /*UMTS_Route12*/
   M_UMTS_RX_AGC_PATHLOSS(UMTS_Route13, Set1),         /*UMTS_Route13*/
   M_UMTS_RX_AGC_PATHLOSS(UMTS_Route14, Set1),         /*UMTS_Route14*/
   M_UMTS_RX_AGC_PATHLOSS(UMTS_Route15, Set1),         /*UMTS_Route15*/
   M_UMTS_RX_AGC_PATHLOSS(UMTS_Route16, Set1),         /*UMTS_Route16*/
   M_UMTS_RX_AGC_PATHLOSS(UMTS_Route17, Set1),         /*UMTS_Route17*/
   M_UMTS_RX_AGC_PATHLOSS(UMTS_Route18, Set1),         /*UMTS_Route18*/
   M_UMTS_RX_AGC_PATHLOSS(UMTS_Route19, Set1),         /*UMTS_Route19*/
   M_UMTS_RX_AGC_PATHLOSS(UMTS_Route20, Set1),         /*UMTS_Route20*/
   M_UMTS_RX_AGC_PATHLOSS(UMTS_Route21, Set1),         /*UMTS_Route21*/
   M_UMTS_RX_AGC_PATHLOSS(UMTS_Route22, Set1),         /*UMTS_Route22*/
   M_UMTS_RX_AGC_PATHLOSS(UMTS_Route23, Set1),         /*UMTS_Route23*/
   M_UMTS_RX_AGC_PATHLOSS(UMTS_Route24, Set1)          /*UMTS_Route24*/
#endif
};
#else
const U_sTEMPAGCOFFSET* const U_AGC_PATHLOSS_TABLE_Set1[] =
{
   M_UMTS_RX_PATHLOSS_DEFAULT(UMTSBandNone),         /*BandNone*/
   M_UMTS_RX_PATHLOSS_DEFAULT(RX_BAND_INDICATOR_0_Set1),  /*UMTS_Route0*/
   M_UMTS_RX_PATHLOSS_DEFAULT(RX_BAND_INDICATOR_1_Set1),  /*UMTS_Route1*/
   M_UMTS_RX_PATHLOSS_DEFAULT(RX_BAND_INDICATOR_2_Set1),  /*UMTS_Route2*/
   M_UMTS_RX_PATHLOSS_DEFAULT(RX_BAND_INDICATOR_3_Set1),  /*UMTS_Route3*/
   M_UMTS_RX_PATHLOSS_DEFAULT(RX_BAND_INDICATOR_4_Set1),  /*UMTS_Route4*/
#if IS_3G_RF_NCCA_SUPPORT
   M_UMTS_RX_AGC_PATHLOSS(UMTS_Route5, Set1),          /*UMTS_Route5*/
   M_UMTS_RX_AGC_PATHLOSS(UMTS_Route6, Set1),          /*UMTS_Route6*/
   M_UMTS_RX_AGC_PATHLOSS(UMTS_Route7, Set1),          /*UMTS_Route7*/
   M_UMTS_RX_AGC_PATHLOSS(UMTS_Route8, Set1),          /*UMTS_Route8*/
   M_UMTS_RX_AGC_PATHLOSS(UMTS_Route9, Set1),          /*UMTS_Route9*/
   M_UMTS_RX_AGC_PATHLOSS(UMTS_Route10, Set1),         /*UMTS_Route10*/
   M_UMTS_RX_AGC_PATHLOSS(UMTS_Route11, Set1),         /*UMTS_Route11*/
   M_UMTS_RX_AGC_PATHLOSS(UMTS_Route12, Set1),         /*UMTS_Route12*/
   M_UMTS_RX_AGC_PATHLOSS(UMTS_Route13, Set1),         /*UMTS_Route13*/
   M_UMTS_RX_AGC_PATHLOSS(UMTS_Route14, Set1),         /*UMTS_Route14*/
   M_UMTS_RX_AGC_PATHLOSS(UMTS_Route15, Set1),         /*UMTS_Route15*/
   M_UMTS_RX_AGC_PATHLOSS(UMTS_Route16, Set1),         /*UMTS_Route16*/
   M_UMTS_RX_AGC_PATHLOSS(UMTS_Route17, Set1),         /*UMTS_Route17*/
   M_UMTS_RX_AGC_PATHLOSS(UMTS_Route18, Set1),         /*UMTS_Route18*/
   M_UMTS_RX_AGC_PATHLOSS(UMTS_Route19, Set1),         /*UMTS_Route19*/
   M_UMTS_RX_AGC_PATHLOSS(UMTS_Route20, Set1),         /*UMTS_Route20*/
   M_UMTS_RX_AGC_PATHLOSS(UMTS_Route21, Set1),         /*UMTS_Route21*/
   M_UMTS_RX_AGC_PATHLOSS(UMTS_Route22, Set1),         /*UMTS_Route22*/
   M_UMTS_RX_AGC_PATHLOSS(UMTS_Route23, Set1),         /*UMTS_Route23*/
   M_UMTS_RX_AGC_PATHLOSS(UMTS_Route24, Set1)          /*UMTS_Route24*/
#endif
};
#endif

//temperature dac
#if defined(__L1_TEMPERATURE_RANGE_V2__) 
/*From RIO5 proto 3 measured by SA/Tim*/
const kal_uint16 U_TEMP_DAC_Set1[CAL_TEMP_SECTION] =
{
   320, 362, 411, 457, 522, 570, 631, 664
};
#else
const kal_uint16 U_TEMP_DAC_Set1[CAL_TEMP_SECTION] =
{
   321, 367, 412, 457, 487, 517, 531, 543
};
#endif

/*------------------------------*/
/* RX Diversity Path loss table */
/*------------------------------*/
const U_sTEMPAGCOFFSET AGC_PATHLOSS_RXD_UMTSBandNone_Set1 =
{
   //8 temperature section compensated offset
   {0, 0, 0, 0, 0, 0, 0, 0},

   {
      {
         /* uarfcn */
         0,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         0,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         0,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         0,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         0,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {  UMTS_TABLE_END }// Max. to 15 path loss elements
   }
};

const U_sTEMPAGCOFFSET AGC_PATHLOSS_RXD_UMTSBand1_Set1 = 
{
   //8 temperature section compensated offset
   {0, 0, 0, 0, 0, 0, 0, 0},

   {
      {  
         /* uarfcn */
         10562,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.84375 ), U_GAINLOSS( 0.84375 ), U_GAINLOSS( 2.34375 ), U_GAINLOSS( 1.03125 ), U_GAINLOSS( 0.96875 ), U_GAINLOSS(-2.1875 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.84375 ), U_GAINLOSS( 0.84375 ), U_GAINLOSS( 2.34375 ), U_GAINLOSS( 1.03125 ), U_GAINLOSS( 0.96875 ), U_GAINLOSS(-2.1875 ), U_GAINLOSS( 0.000 ) }         
      },
      {  
         /* uarfcn */
         10631,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.84375 ), U_GAINLOSS( 0.84375 ), U_GAINLOSS( 2.34375 ), U_GAINLOSS( 1.03125 ), U_GAINLOSS( 0.96875 ), U_GAINLOSS(-2.1875 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.84375 ), U_GAINLOSS( 0.84375 ), U_GAINLOSS( 2.34375 ), U_GAINLOSS( 1.03125 ), U_GAINLOSS( 0.96875 ), U_GAINLOSS(-2.1875 ), U_GAINLOSS( 0.000 ) }         
      },
      {  
         /* uarfcn */
         10700,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.84375 ), U_GAINLOSS( 0.84375 ), U_GAINLOSS( 2.34375 ), U_GAINLOSS( 1.03125 ), U_GAINLOSS( 0.96875 ), U_GAINLOSS(-2.1875 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.84375 ), U_GAINLOSS( 0.84375 ), U_GAINLOSS( 2.34375 ), U_GAINLOSS( 1.03125 ), U_GAINLOSS( 0.96875 ), U_GAINLOSS(-2.1875 ), U_GAINLOSS( 0.000 ) }         
      },
      {  
         /* uarfcn */
         10769,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.84375 ), U_GAINLOSS( 0.84375 ), U_GAINLOSS( 2.34375 ), U_GAINLOSS( 1.03125 ), U_GAINLOSS( 0.96875 ), U_GAINLOSS(-2.1875 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.84375 ), U_GAINLOSS( 0.84375 ), U_GAINLOSS( 2.34375 ), U_GAINLOSS( 1.03125 ), U_GAINLOSS( 0.96875 ), U_GAINLOSS(-2.1875 ), U_GAINLOSS( 0.000 ) }         
      },
      {  
         /* uarfcn */
         10838,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.84375 ), U_GAINLOSS( 0.84375 ), U_GAINLOSS( 2.34375 ), U_GAINLOSS( 1.03125 ), U_GAINLOSS( 0.96875 ), U_GAINLOSS(-2.1875 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.84375 ), U_GAINLOSS( 0.84375 ), U_GAINLOSS( 2.34375 ), U_GAINLOSS( 1.03125 ), U_GAINLOSS( 0.96875 ), U_GAINLOSS(-2.1875 ), U_GAINLOSS( 0.000 ) }         
      },
      {  UMTS_TABLE_END }// Max. to 15 path loss elements
   }
};

const U_sTEMPAGCOFFSET AGC_PATHLOSS_RXD_UMTSBand2_Set1 = 
{
   //8 temperature section compensated offset
   {0, 0, 0, 0, 0, 0, 0, 0},

   {
      {
         /* uarfcn */
         9662,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS(-1.875 ), U_GAINLOSS(-1.59375 ), U_GAINLOSS(-1.40625 ), U_GAINLOSS(-1.6875 ), U_GAINLOSS(-1.84375 ), U_GAINLOSS(-3.125 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS(-1.875 ), U_GAINLOSS(-1.59375 ), U_GAINLOSS(-1.40625 ), U_GAINLOSS(-1.6875 ), U_GAINLOSS(-1.84375 ), U_GAINLOSS(-3.125 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         9700,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS(-1.875 ), U_GAINLOSS(-1.59375 ), U_GAINLOSS(-1.40625 ), U_GAINLOSS(-1.6875 ), U_GAINLOSS(-1.84375 ), U_GAINLOSS(-3.125 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS(-1.875 ), U_GAINLOSS(-1.59375 ), U_GAINLOSS(-1.40625 ), U_GAINLOSS(-1.6875 ), U_GAINLOSS(-1.84375 ), U_GAINLOSS(-3.125 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         9800,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS(-1.875 ), U_GAINLOSS(-1.59375 ), U_GAINLOSS(-1.40625 ), U_GAINLOSS(-1.6875 ), U_GAINLOSS(-1.84375 ), U_GAINLOSS(-3.125 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS(-1.875 ), U_GAINLOSS(-1.59375 ), U_GAINLOSS(-1.40625 ), U_GAINLOSS(-1.6875 ), U_GAINLOSS(-1.84375 ), U_GAINLOSS(-3.125 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         9869,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS(-1.875 ), U_GAINLOSS(-1.59375 ), U_GAINLOSS(-1.40625 ), U_GAINLOSS(-1.6875 ), U_GAINLOSS(-1.84375 ), U_GAINLOSS(-3.125 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS(-1.875 ), U_GAINLOSS(-1.59375 ), U_GAINLOSS(-1.40625 ), U_GAINLOSS(-1.6875 ), U_GAINLOSS(-1.84375 ), U_GAINLOSS(-3.125 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         9938,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS(-1.875 ), U_GAINLOSS(-1.59375 ), U_GAINLOSS(-1.40625 ), U_GAINLOSS(-1.6875 ), U_GAINLOSS(-1.84375 ), U_GAINLOSS(-3.125 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS(-1.875 ), U_GAINLOSS(-1.59375 ), U_GAINLOSS(-1.40625 ), U_GAINLOSS(-1.6875 ), U_GAINLOSS(-1.84375 ), U_GAINLOSS(-3.125 ), U_GAINLOSS( 0.000 ) }         
      },
      {  UMTS_TABLE_END }// Max. to 15 path loss elements
   }
};

const U_sTEMPAGCOFFSET AGC_PATHLOSS_RXD_UMTSBand3_Set1 = 
{
   //8 temperature section compensated offset
   {0, 0, 0, 0, 0, 0, 0, 0},

   {
      {
         /* uarfcn */
         1162,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         1187,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         1212,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         1237,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         1262,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         1287,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         1312,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         1338,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         1363,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         1388,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         1413,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         1438,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         1463,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         1488,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         1513,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      }
   }
};

const U_sTEMPAGCOFFSET AGC_PATHLOSS_RXD_UMTSBand4_Set1 = 
{
   //8 temperature section compensated offset
   {0, 0, 0, 0, 0, 0, 0, 0},

   {
      {
         /* uarfcn */
         1537,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.46875 ), U_GAINLOSS( 0.750 ), U_GAINLOSS( 1.96875 ), U_GAINLOSS( 0.84375 ), U_GAINLOSS( 0.6875 ), U_GAINLOSS(-2.65625 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.46875 ), U_GAINLOSS( 0.750 ), U_GAINLOSS( 1.96875 ), U_GAINLOSS( 0.84375 ), U_GAINLOSS( 0.6875 ), U_GAINLOSS(-2.65625 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         1552,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.46875 ), U_GAINLOSS( 0.750 ), U_GAINLOSS( 1.96875 ), U_GAINLOSS( 0.84375 ), U_GAINLOSS( 0.6875 ), U_GAINLOSS(-2.65625 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.46875 ), U_GAINLOSS( 0.750 ), U_GAINLOSS( 1.96875 ), U_GAINLOSS( 0.84375 ), U_GAINLOSS( 0.6875 ), U_GAINLOSS(-2.65625 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         1567,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.46875 ), U_GAINLOSS( 0.750 ), U_GAINLOSS( 1.96875 ), U_GAINLOSS( 0.84375 ), U_GAINLOSS( 0.6875 ), U_GAINLOSS(-2.65625 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.46875 ), U_GAINLOSS( 0.750 ), U_GAINLOSS( 1.96875 ), U_GAINLOSS( 0.84375 ), U_GAINLOSS( 0.6875 ), U_GAINLOSS(-2.65625 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         1582,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.46875 ), U_GAINLOSS( 0.750 ), U_GAINLOSS( 1.96875 ), U_GAINLOSS( 0.84375 ), U_GAINLOSS( 0.6875 ), U_GAINLOSS(-2.65625 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.46875 ), U_GAINLOSS( 0.750 ), U_GAINLOSS( 1.96875 ), U_GAINLOSS( 0.84375 ), U_GAINLOSS( 0.6875 ), U_GAINLOSS(-2.65625 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         1597,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.46875 ), U_GAINLOSS( 0.750 ), U_GAINLOSS( 1.96875 ), U_GAINLOSS( 0.84375 ), U_GAINLOSS( 0.6875 ), U_GAINLOSS(-2.65625 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.46875 ), U_GAINLOSS( 0.750 ), U_GAINLOSS( 1.96875 ), U_GAINLOSS( 0.84375 ), U_GAINLOSS( 0.6875 ), U_GAINLOSS(-2.65625 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         1612,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.46875 ), U_GAINLOSS( 0.750 ), U_GAINLOSS( 1.96875 ), U_GAINLOSS( 0.84375 ), U_GAINLOSS( 0.6875 ), U_GAINLOSS(-2.65625 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.46875 ), U_GAINLOSS( 0.750 ), U_GAINLOSS( 1.96875 ), U_GAINLOSS( 0.84375 ), U_GAINLOSS( 0.6875 ), U_GAINLOSS(-2.65625 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         1627,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.46875 ), U_GAINLOSS( 0.750 ), U_GAINLOSS( 1.96875 ), U_GAINLOSS( 0.84375 ), U_GAINLOSS( 0.6875 ), U_GAINLOSS(-2.65625 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.46875 ), U_GAINLOSS( 0.750 ), U_GAINLOSS( 1.96875 ), U_GAINLOSS( 0.84375 ), U_GAINLOSS( 0.6875 ), U_GAINLOSS(-2.65625 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         1642,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.46875 ), U_GAINLOSS( 0.750 ), U_GAINLOSS( 1.96875 ), U_GAINLOSS( 0.84375 ), U_GAINLOSS( 0.6875 ), U_GAINLOSS(-2.65625 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.46875 ), U_GAINLOSS( 0.750 ), U_GAINLOSS( 1.96875 ), U_GAINLOSS( 0.84375 ), U_GAINLOSS( 0.6875 ), U_GAINLOSS(-2.65625 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         1657,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.46875 ), U_GAINLOSS( 0.750 ), U_GAINLOSS( 1.96875 ), U_GAINLOSS( 0.84375 ), U_GAINLOSS( 0.6875 ), U_GAINLOSS(-2.65625 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.46875 ), U_GAINLOSS( 0.750 ), U_GAINLOSS( 1.96875 ), U_GAINLOSS( 0.84375 ), U_GAINLOSS( 0.6875 ), U_GAINLOSS(-2.65625 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         1675,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.46875 ), U_GAINLOSS( 0.750 ), U_GAINLOSS( 1.96875 ), U_GAINLOSS( 0.84375 ), U_GAINLOSS( 0.6875 ), U_GAINLOSS(-2.65625 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.46875 ), U_GAINLOSS( 0.750 ), U_GAINLOSS( 1.96875 ), U_GAINLOSS( 0.84375 ), U_GAINLOSS( 0.6875 ), U_GAINLOSS(-2.65625 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         1687,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.46875 ), U_GAINLOSS( 0.750 ), U_GAINLOSS( 1.96875 ), U_GAINLOSS( 0.84375 ), U_GAINLOSS( 0.6875 ), U_GAINLOSS(-2.65625 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.46875 ), U_GAINLOSS( 0.750 ), U_GAINLOSS( 1.96875 ), U_GAINLOSS( 0.84375 ), U_GAINLOSS( 0.6875 ), U_GAINLOSS(-2.65625 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         1702,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.46875 ), U_GAINLOSS( 0.750 ), U_GAINLOSS( 1.96875 ), U_GAINLOSS( 0.84375 ), U_GAINLOSS( 0.6875 ), U_GAINLOSS(-2.65625 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.46875 ), U_GAINLOSS( 0.750 ), U_GAINLOSS( 1.96875 ), U_GAINLOSS( 0.84375 ), U_GAINLOSS( 0.6875 ), U_GAINLOSS(-2.65625 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         1717,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.46875 ), U_GAINLOSS( 0.750 ), U_GAINLOSS( 1.96875 ), U_GAINLOSS( 0.84375 ), U_GAINLOSS( 0.6875 ), U_GAINLOSS(-2.65625 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.46875 ), U_GAINLOSS( 0.750 ), U_GAINLOSS( 1.96875 ), U_GAINLOSS( 0.84375 ), U_GAINLOSS( 0.6875 ), U_GAINLOSS(-2.65625 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         1732,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.46875 ), U_GAINLOSS( 0.750 ), U_GAINLOSS( 1.96875 ), U_GAINLOSS( 0.84375 ), U_GAINLOSS( 0.6875 ), U_GAINLOSS(-2.65625 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.46875 ), U_GAINLOSS( 0.750 ), U_GAINLOSS( 1.96875 ), U_GAINLOSS( 0.84375 ), U_GAINLOSS( 0.6875 ), U_GAINLOSS(-2.65625 ), U_GAINLOSS( 0.000 ) }         
      },
      {  UMTS_TABLE_END }// Max. to 15 path loss elements
   }
};

const U_sTEMPAGCOFFSET AGC_PATHLOSS_RXD_UMTSBand5_Set1 = 
{
   //8 temperature section compensated offset
   {0, 0, 0, 0, 0, 0, 0, 0},

   {
      {
         /* uarfcn */
         4357,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS(-2.0625 ), U_GAINLOSS(-2.0625 ), U_GAINLOSS(-2.250 ), U_GAINLOSS(-3.000 ), U_GAINLOSS(-3.4375 ), U_GAINLOSS(-3.500 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS(-2.0625 ), U_GAINLOSS(-2.0625 ), U_GAINLOSS(-2.250 ), U_GAINLOSS(-3.000 ), U_GAINLOSS(-3.4375 ), U_GAINLOSS(-3.500 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         4382,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS(-2.0625 ), U_GAINLOSS(-2.0625 ), U_GAINLOSS(-2.250 ), U_GAINLOSS(-3.000 ), U_GAINLOSS(-3.4375 ), U_GAINLOSS(-3.500 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS(-2.0625 ), U_GAINLOSS(-2.0625 ), U_GAINLOSS(-2.250 ), U_GAINLOSS(-3.000 ), U_GAINLOSS(-3.4375 ), U_GAINLOSS(-3.500 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         4408,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS(-2.0625 ), U_GAINLOSS(-2.0625 ), U_GAINLOSS(-2.250 ), U_GAINLOSS(-3.000 ), U_GAINLOSS(-3.4375 ), U_GAINLOSS(-3.500 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS(-2.0625 ), U_GAINLOSS(-2.0625 ), U_GAINLOSS(-2.250 ), U_GAINLOSS(-3.000 ), U_GAINLOSS(-3.4375 ), U_GAINLOSS(-3.500 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         4433,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS(-2.0625 ), U_GAINLOSS(-2.0625 ), U_GAINLOSS(-2.250 ), U_GAINLOSS(-3.000 ), U_GAINLOSS(-3.4375 ), U_GAINLOSS(-3.500 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS(-2.0625 ), U_GAINLOSS(-2.0625 ), U_GAINLOSS(-2.250 ), U_GAINLOSS(-3.000 ), U_GAINLOSS(-3.4375 ), U_GAINLOSS(-3.500 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         4458,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS(-2.0625 ), U_GAINLOSS(-2.0625 ), U_GAINLOSS(-2.250 ), U_GAINLOSS(-3.000 ), U_GAINLOSS(-3.4375 ), U_GAINLOSS(-3.500 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS(-2.0625 ), U_GAINLOSS(-2.0625 ), U_GAINLOSS(-2.250 ), U_GAINLOSS(-3.000 ), U_GAINLOSS(-3.4375 ), U_GAINLOSS(-3.500 ), U_GAINLOSS( 0.000 ) }         
      },
      {  UMTS_TABLE_END }// Max. to 15 path loss elements
   }
};

const U_sTEMPAGCOFFSET AGC_PATHLOSS_RXD_UMTSBand6_Set1 = 
{
   //8 temperature section compensated offset
   {0, 0, 0, 0, 0, 0, 0, 0},

   {
      {
         /* uarfcn */
         4387,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         4394,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         4400,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         4406,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         4413,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {  UMTS_TABLE_END }// Use this value at the end of the table. Max. to 15 path loss elements
   }
};

const U_sTEMPAGCOFFSET AGC_PATHLOSS_RXD_UMTSBand7_Set1 = 
{
   //8 temperature section compensated offset
   {0, 0, 0, 0, 0, 0, 0, 0},

   {
      {
         /* uarfcn */
         2237,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         2318,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         2400,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         2482,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         2563,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {  UMTS_TABLE_END }// Use this value at the end of the table. Max. to 15 path loss elements
   }
};

const U_sTEMPAGCOFFSET AGC_PATHLOSS_RXD_UMTSBand8_Set1 = 
{
   //8 temperature section compensated offset
   {0, 0, 0, 0, 0, 0, 0, 0},

   {
      {
         /* uarfcn */
         2937,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.1875 ), U_GAINLOSS( 0.28125 ), U_GAINLOSS(-0.09375 ), U_GAINLOSS(-0.09375 ), U_GAINLOSS(-0.8125 ), U_GAINLOSS(-1.90625 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.1875 ), U_GAINLOSS( 0.28125 ), U_GAINLOSS(-0.09375 ), U_GAINLOSS(-0.09375 ), U_GAINLOSS(-0.8125 ), U_GAINLOSS(-1.90625 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         2975,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.1875 ), U_GAINLOSS( 0.28125 ), U_GAINLOSS(-0.09375 ), U_GAINLOSS(-0.09375 ), U_GAINLOSS(-0.8125 ), U_GAINLOSS(-1.90625 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.1875 ), U_GAINLOSS( 0.28125 ), U_GAINLOSS(-0.09375 ), U_GAINLOSS(-0.09375 ), U_GAINLOSS(-0.8125 ), U_GAINLOSS(-1.90625 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         3013,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.1875 ), U_GAINLOSS( 0.28125 ), U_GAINLOSS(-0.09375 ), U_GAINLOSS(-0.09375 ), U_GAINLOSS(-0.8125 ), U_GAINLOSS(-1.90625 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.1875 ), U_GAINLOSS( 0.28125 ), U_GAINLOSS(-0.09375 ), U_GAINLOSS(-0.09375 ), U_GAINLOSS(-0.8125 ), U_GAINLOSS(-1.90625 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         3051,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.1875 ), U_GAINLOSS( 0.28125 ), U_GAINLOSS(-0.09375 ), U_GAINLOSS(-0.09375 ), U_GAINLOSS(-0.8125 ), U_GAINLOSS(-1.90625 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.1875 ), U_GAINLOSS( 0.28125 ), U_GAINLOSS(-0.09375 ), U_GAINLOSS(-0.09375 ), U_GAINLOSS(-0.8125 ), U_GAINLOSS(-1.90625 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         3088,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.1875 ), U_GAINLOSS( 0.28125 ), U_GAINLOSS(-0.09375 ), U_GAINLOSS(-0.09375 ), U_GAINLOSS(-0.8125 ), U_GAINLOSS(-1.90625 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.1875 ), U_GAINLOSS( 0.28125 ), U_GAINLOSS(-0.09375 ), U_GAINLOSS(-0.09375 ), U_GAINLOSS(-0.8125 ), U_GAINLOSS(-1.90625 ), U_GAINLOSS( 0.000 ) }         
      },
      {  UMTS_TABLE_END }// Max. to 15 path loss elements
   }
};

const U_sTEMPAGCOFFSET AGC_PATHLOSS_RXD_UMTSBand9_Set1 = 
{
   //8 temperature section compensated offset
   {0, 0, 0, 0, 0, 0, 0, 0},

   {
      {
         /* uarfcn */
         9237,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         9248,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         9259,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         9270,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         9281,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         9292,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         9303,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         9312,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         9323,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         9334,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         9345,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         9356,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         9367,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         9378,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         9387,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      }
   }
};

const U_sTEMPAGCOFFSET AGC_PATHLOSS_RXD_UMTSBand10_Set1 = 
{
   //8 temperature section compensated offset
   {0, 0, 0, 0, 0, 0, 0, 0},

   {
      {
         /* uarfcn */
         3113,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         3133,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         3153,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         3173,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         3193,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         3213,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         3233,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         3250,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         3270,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         3290,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         3310,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         3330,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         3350,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         3370,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         3387,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      }
   }
};

const U_sTEMPAGCOFFSET AGC_PATHLOSS_RXD_UMTSBand11_Set1 = 
{
   //8 temperature section compensated offset
   {0, 0, 0, 0, 0, 0, 0, 0},

   {
      {
         /* uarfcn */
         3712,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         3717,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         3722,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         3728,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         3733,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         3738,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         3742,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         3748,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         3753,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         3758,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         3764,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         3769,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         3775,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         3781,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         3787,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      }
   }
};

const U_sTEMPAGCOFFSET AGC_PATHLOSS_RXD_UMTSBand19_Set1 = 
{
   //8 temperature section compensated offset
   {0, 0, 0, 0, 0, 0, 0, 0},

   {
      {
         /* uarfcn */
         712,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         725,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         738,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         750,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         763,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {  UMTS_TABLE_END }// Use this value at the end of the table. Max. to 15 path loss elements
   }
};

const U_sTEMPAGCOFFSET AGC_PATHLOSS_RXD_UMTS_Route5_Set1 = 
{
   //8 temperature section compensated offset
   {0, 0, 0, 0, 0, 0, 0, 0},

   {
      {
         /* uarfcn */
         0,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         0,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         0,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         0,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         0,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {  UMTS_TABLE_END }// Use this value at the end of the table. Max. to 15 path loss elements
   }
};

const U_sTEMPAGCOFFSET AGC_PATHLOSS_RXD_UMTS_Route6_Set1 = 
{
   //8 temperature section compensated offset
   {0, 0, 0, 0, 0, 0, 0, 0},

   {
      {
         /* uarfcn */
         0,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         0,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         0,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         0,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         0,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {  UMTS_TABLE_END }// Use this value at the end of the table. Max. to 15 path loss elements
   }
};

const U_sTEMPAGCOFFSET AGC_PATHLOSS_RXD_UMTS_Route7_Set1 = 
{
   //8 temperature section compensated offset
   {0, 0, 0, 0, 0, 0, 0, 0},

   {
      {
         /* uarfcn */
         0,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         0,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         0,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         0,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         0,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {  UMTS_TABLE_END }// Use this value at the end of the table. Max. to 15 path loss elements
   }
};

const U_sTEMPAGCOFFSET AGC_PATHLOSS_RXD_UMTS_Route8_Set1 = 
{
   //8 temperature section compensated offset
   {0, 0, 0, 0, 0, 0, 0, 0},

   {
      {
         /* uarfcn */
         0,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         0,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         0,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         0,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         0,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {  UMTS_TABLE_END }// Use this value at the end of the table. Max. to 15 path loss elements
   }
};

const U_sTEMPAGCOFFSET AGC_PATHLOSS_RXD_UMTS_Route9_Set1 = 
{
   //8 temperature section compensated offset
   {0, 0, 0, 0, 0, 0, 0, 0},

   {
      {
         /* uarfcn */
         0,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         0,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         0,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         0,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         0,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {  UMTS_TABLE_END }// Use this value at the end of the table. Max. to 15 path loss elements
   }
};

const U_sTEMPAGCOFFSET AGC_PATHLOSS_RXD_UMTS_Route10_Set1 = 
{
   //8 temperature section compensated offset
   {0, 0, 0, 0, 0, 0, 0, 0},

   {
      {
         /* uarfcn */
         0,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         0,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         0,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         0,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         0,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {  UMTS_TABLE_END }// Use this value at the end of the table. Max. to 15 path loss elements
   }
};

const U_sTEMPAGCOFFSET AGC_PATHLOSS_RXD_UMTS_Route11_Set1 = 
{
   //8 temperature section compensated offset
   {0, 0, 0, 0, 0, 0, 0, 0},

   {
      {
         /* uarfcn */
         0,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         0,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         0,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         0,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         0,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {  UMTS_TABLE_END }// Use this value at the end of the table. Max. to 15 path loss elements
   }
};

const U_sTEMPAGCOFFSET AGC_PATHLOSS_RXD_UMTS_Route12_Set1 = 
{
   //8 temperature section compensated offset
   {0, 0, 0, 0, 0, 0, 0, 0},

   {
      {
         /* uarfcn */
         0,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         0,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         0,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         0,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         0,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {  UMTS_TABLE_END }// Use this value at the end of the table. Max. to 15 path loss elements
   }
};

const U_sTEMPAGCOFFSET AGC_PATHLOSS_RXD_UMTS_Route13_Set1 = 
{
   //8 temperature section compensated offset
   {0, 0, 0, 0, 0, 0, 0, 0},

   {
      {
         /* uarfcn */
         0,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         0,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         0,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         0,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         0,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {  UMTS_TABLE_END }// Use this value at the end of the table. Max. to 15 path loss elements
   }
};

const U_sTEMPAGCOFFSET AGC_PATHLOSS_RXD_UMTS_Route14_Set1 = 
{
   //8 temperature section compensated offset
   {0, 0, 0, 0, 0, 0, 0, 0},

   {
      {
         /* uarfcn */
         0,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         0,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         0,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         0,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         0,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {  UMTS_TABLE_END }// Use this value at the end of the table. Max. to 15 path loss elements
   }
};

const U_sTEMPAGCOFFSET AGC_PATHLOSS_RXD_UMTS_Route15_Set1 = 
{
   //8 temperature section compensated offset
   {0, 0, 0, 0, 0, 0, 0, 0},

   {
      {
         /* uarfcn */
         0,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         0,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         0,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         0,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         0,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {  UMTS_TABLE_END }// Use this value at the end of the table. Max. to 15 path loss elements
   }
};

const U_sTEMPAGCOFFSET AGC_PATHLOSS_RXD_UMTS_Route16_Set1 = 
{
   //8 temperature section compensated offset
   {0, 0, 0, 0, 0, 0, 0, 0},

   {
      {
         /* uarfcn */
         0,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         0,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         0,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         0,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         0,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {  UMTS_TABLE_END }// Use this value at the end of the table. Max. to 15 path loss elements
   }
};

const U_sTEMPAGCOFFSET AGC_PATHLOSS_RXD_UMTS_Route17_Set1 = 
{
   //8 temperature section compensated offset
   {0, 0, 0, 0, 0, 0, 0, 0},

   {
      {
         /* uarfcn */
         0,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         0,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         0,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         0,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         0,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {  UMTS_TABLE_END }// Use this value at the end of the table. Max. to 15 path loss elements
   }
};

const U_sTEMPAGCOFFSET AGC_PATHLOSS_RXD_UMTS_Route18_Set1 = 
{
   //8 temperature section compensated offset
   {0, 0, 0, 0, 0, 0, 0, 0},

   {
      {
         /* uarfcn */
         0,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         0,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         0,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         0,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         0,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {  UMTS_TABLE_END }// Use this value at the end of the table. Max. to 15 path loss elements
   }
};

const U_sTEMPAGCOFFSET AGC_PATHLOSS_RXD_UMTS_Route19_Set1 = 
{
   //8 temperature section compensated offset
   {0, 0, 0, 0, 0, 0, 0, 0},

   {
      {
         /* uarfcn */
         0,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         0,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         0,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         0,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         0,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {  UMTS_TABLE_END }// Use this value at the end of the table. Max. to 15 path loss elements
   }
};

const U_sTEMPAGCOFFSET AGC_PATHLOSS_RXD_UMTS_Route20_Set1 = 
{
   //8 temperature section compensated offset
   {0, 0, 0, 0, 0, 0, 0, 0},

   {
      {
         /* uarfcn */
         0,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         0,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         0,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         0,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         0,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {  UMTS_TABLE_END }// Use this value at the end of the table. Max. to 15 path loss elements
   }
};

const U_sTEMPAGCOFFSET AGC_PATHLOSS_RXD_UMTS_Route21_Set1 = 
{
   //8 temperature section compensated offset
   {0, 0, 0, 0, 0, 0, 0, 0},

   {
      {
         /* uarfcn */
         0,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         0,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         0,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         0,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         0,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {  UMTS_TABLE_END }// Use this value at the end of the table. Max. to 15 path loss elements
   }
};

const U_sTEMPAGCOFFSET AGC_PATHLOSS_RXD_UMTS_Route22_Set1 = 
{
   //8 temperature section compensated offset
   {0, 0, 0, 0, 0, 0, 0, 0},

   {
      {
         /* uarfcn */
         0,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         0,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         0,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         0,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         0,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {  UMTS_TABLE_END }// Use this value at the end of the table. Max. to 15 path loss elements
   }
};

const U_sTEMPAGCOFFSET AGC_PATHLOSS_RXD_UMTS_Route23_Set1 = 
{
   //8 temperature section compensated offset
   {0, 0, 0, 0, 0, 0, 0, 0},

   {
      {
         /* uarfcn */
         0,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         0,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         0,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         0,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         0,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {  UMTS_TABLE_END }// Use this value at the end of the table. Max. to 15 path loss elements
   }
};

const U_sTEMPAGCOFFSET AGC_PATHLOSS_RXD_UMTS_Route24_Set1 = 
{
   //8 temperature section compensated offset
   {0, 0, 0, 0, 0, 0, 0, 0},

   {
      {
         /* uarfcn */
         0,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         0,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         0,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         0,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {
         /* uarfcn */
         0,
         /* HPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) },
         /* LPM */
         /*           G1                   G2                   G3                   G4                   G5                   G6                   G7   */
         {U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ), U_GAINLOSS( 0.000 ) }         
      },
      {  UMTS_TABLE_END }// Use this value at the end of the table. Max. to 15 path loss elements
   }
};

#if UL1CUSTOM_CALIBRATION_DATA_DRDI_ENABLE
const U_sTEMPAGCOFFSET* const U_AGC_PATHLOSS_RXD_TABLE_Set1[] =
{
   M_UMTS_RX_AGC_PATHLOSS_RXD(UMTSBandNone,Set1),         /*BandNone*/
   M_UMTS_RX_AGC_PATHLOSS_RXD(RX_BAND_INDICATOR_0_Set1,Set1),  /*UMTS_Route0*/
   M_UMTS_RX_AGC_PATHLOSS_RXD(RX_BAND_INDICATOR_1_Set1,Set1),  /*UMTS_Route1*/
   M_UMTS_RX_AGC_PATHLOSS_RXD(RX_BAND_INDICATOR_2_Set1,Set1),  /*UMTS_Route2*/
   M_UMTS_RX_AGC_PATHLOSS_RXD(RX_BAND_INDICATOR_3_Set1,Set1),  /*UMTS_Route3*/
   M_UMTS_RX_AGC_PATHLOSS_RXD(RX_BAND_INDICATOR_4_Set1,Set1),  /*UMTS_Route4*/
#if IS_3G_RF_NCCA_SUPPORT
   M_UMTS_RX_AGC_PATHLOSS_RXD(UMTS_Route5,Set1),          /*UMTS_Route5*/
   M_UMTS_RX_AGC_PATHLOSS_RXD(UMTS_Route6,Set1),          /*UMTS_Route6*/
   M_UMTS_RX_AGC_PATHLOSS_RXD(UMTS_Route7,Set1),          /*UMTS_Route7*/
   M_UMTS_RX_AGC_PATHLOSS_RXD(UMTS_Route8,Set1),          /*UMTS_Route8*/
   M_UMTS_RX_AGC_PATHLOSS_RXD(UMTS_Route9,Set1),          /*UMTS_Route9*/
   M_UMTS_RX_AGC_PATHLOSS_RXD(UMTS_Route10,Set1),         /*UMTS_Route10*/
   M_UMTS_RX_AGC_PATHLOSS_RXD(UMTS_Route11,Set1),         /*UMTS_Route11*/
   M_UMTS_RX_AGC_PATHLOSS_RXD(UMTS_Route12,Set1),         /*UMTS_Route12*/
   M_UMTS_RX_AGC_PATHLOSS_RXD(UMTS_Route13,Set1),         /*UMTS_Route13*/
   M_UMTS_RX_AGC_PATHLOSS_RXD(UMTS_Route14,Set1),         /*UMTS_Route14*/
   M_UMTS_RX_AGC_PATHLOSS_RXD(UMTS_Route15,Set1),         /*UMTS_Route15*/
   M_UMTS_RX_AGC_PATHLOSS_RXD(UMTS_Route16,Set1),         /*UMTS_Route16*/
   M_UMTS_RX_AGC_PATHLOSS_RXD(UMTS_Route17,Set1),         /*UMTS_Route17*/
   M_UMTS_RX_AGC_PATHLOSS_RXD(UMTS_Route18,Set1),         /*UMTS_Route18*/
   M_UMTS_RX_AGC_PATHLOSS_RXD(UMTS_Route19,Set1),         /*UMTS_Route19*/
   M_UMTS_RX_AGC_PATHLOSS_RXD(UMTS_Route20,Set1),         /*UMTS_Route20*/
   M_UMTS_RX_AGC_PATHLOSS_RXD(UMTS_Route21,Set1),         /*UMTS_Route21*/
   M_UMTS_RX_AGC_PATHLOSS_RXD(UMTS_Route22,Set1),         /*UMTS_Route22*/
   M_UMTS_RX_AGC_PATHLOSS_RXD(UMTS_Route23,Set1),         /*UMTS_Route23*/
   M_UMTS_RX_AGC_PATHLOSS_RXD(UMTS_Route24,Set1),         /*UMTS_Route24*/
#endif
};
#else
const U_sTEMPAGCOFFSET* const U_AGC_PATHLOSS_RXD_TABLE_Set1[] =
{
   M_UMTS_RX_PATHLOSS_RXD_DEFAULT(UMTSBandNone),         /*BandNone*/
   M_UMTS_RX_PATHLOSS_RXD_DEFAULT(RX_BAND_INDICATOR_0_Set1),  /*UMTS_Route0*/
   M_UMTS_RX_PATHLOSS_RXD_DEFAULT(RX_BAND_INDICATOR_1_Set1),  /*UMTS_Route1*/
   M_UMTS_RX_PATHLOSS_RXD_DEFAULT(RX_BAND_INDICATOR_2_Set1),  /*UMTS_Route2*/
   M_UMTS_RX_PATHLOSS_RXD_DEFAULT(RX_BAND_INDICATOR_3_Set1),  /*UMTS_Route3*/
   M_UMTS_RX_PATHLOSS_RXD_DEFAULT(RX_BAND_INDICATOR_4_Set1),  /*UMTS_Route4*/
#if IS_3G_RF_NCCA_SUPPORT
   M_UMTS_RX_AGC_PATHLOSS_RXD(UMTS_Route5,Set1),          /*UMTS_Route5*/
   M_UMTS_RX_AGC_PATHLOSS_RXD(UMTS_Route6,Set1),          /*UMTS_Route6*/
   M_UMTS_RX_AGC_PATHLOSS_RXD(UMTS_Route7,Set1),          /*UMTS_Route7*/
   M_UMTS_RX_AGC_PATHLOSS_RXD(UMTS_Route8,Set1),          /*UMTS_Route8*/
   M_UMTS_RX_AGC_PATHLOSS_RXD(UMTS_Route9,Set1),          /*UMTS_Route9*/
   M_UMTS_RX_AGC_PATHLOSS_RXD(UMTS_Route10,Set1),         /*UMTS_Route10*/
   M_UMTS_RX_AGC_PATHLOSS_RXD(UMTS_Route11,Set1),         /*UMTS_Route11*/
   M_UMTS_RX_AGC_PATHLOSS_RXD(UMTS_Route12,Set1),         /*UMTS_Route12*/
   M_UMTS_RX_AGC_PATHLOSS_RXD(UMTS_Route13,Set1),         /*UMTS_Route13*/
   M_UMTS_RX_AGC_PATHLOSS_RXD(UMTS_Route14,Set1),         /*UMTS_Route14*/
   M_UMTS_RX_AGC_PATHLOSS_RXD(UMTS_Route15,Set1),         /*UMTS_Route15*/
   M_UMTS_RX_AGC_PATHLOSS_RXD(UMTS_Route16,Set1),         /*UMTS_Route16*/
   M_UMTS_RX_AGC_PATHLOSS_RXD(UMTS_Route17,Set1),         /*UMTS_Route17*/
   M_UMTS_RX_AGC_PATHLOSS_RXD(UMTS_Route18,Set1),         /*UMTS_Route18*/
   M_UMTS_RX_AGC_PATHLOSS_RXD(UMTS_Route19,Set1),         /*UMTS_Route19*/
   M_UMTS_RX_AGC_PATHLOSS_RXD(UMTS_Route20,Set1),         /*UMTS_Route20*/
   M_UMTS_RX_AGC_PATHLOSS_RXD(UMTS_Route21,Set1),         /*UMTS_Route21*/
   M_UMTS_RX_AGC_PATHLOSS_RXD(UMTS_Route22,Set1),         /*UMTS_Route22*/
   M_UMTS_RX_AGC_PATHLOSS_RXD(UMTS_Route23,Set1),         /*UMTS_Route23*/
   M_UMTS_RX_AGC_PATHLOSS_RXD(UMTS_Route24,Set1),         /*UMTS_Route24*/
#endif
};
#endif

/* BAND ANY...................................................................*/
const U_sRAMPDATA  RampData_UMTSBandNone_Set1 =
{
   /* DC2DC data by BAND */
   { 2, 
     31 
   },
   {
      /* PA high mode */
      {  
         /* PA DAC info */
         { 1, 660, 0, 0},
         /* VGA DAC of PA high  */
         /* 32,   32,   31,   30,   29,   28,   27,   26,   25,   24 */
         {   0,    0,    0,    0,    0,    0,    0,    0,  296,  198 },

         /* VGA offset by subband */
         {
            /* max arfcn , pwr_offset_db */
            {    0x0000    ,     5      ,     0     },
            {    0x0000    ,     1      ,     0     },
            {    0x0000    ,    -2      ,     0     },
            {    0x0000    ,    -2      ,     0     },
            {    0x0000    ,    -1      ,     0     },
            {    0x0000    ,     0      ,     0     },
            {    0x0000    ,    -2      ,     0     },
            {    0x0000    ,     0      ,     0     },
            {    0x0000    ,     3      ,     0     },
            {    0x0000    ,     7      ,     0     },
            {    0x0000    ,    12      ,     0     },
            {    0x0000    ,    20      ,     0     },
            {    0x0000    ,    25      ,     0     },
            {    0x0000    ,    33      ,     0     },
            { UMTS_TABLE_END }
         },
         /* VGA comp by temperature */
         { { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
         }
      },
      
      /* PA mid mode */
      {  
         /* PA DAC info */
         { 0, 550, 1, 0},
         /* VGA DAC of PA high  */
         /* 32,   32,   31,   30,   29,   28,   27,   26,   25,   24 */
         {   0,    0,    0,    0,    0,    0,    0,    0,  238,   198 },

         /* VGA offset by subband */
         {
            /* max arfcn , pwr_offset_db */
            {    0x0000    ,     5      ,     0     },
            {    0x0000    ,     1      ,     0     },
            {    0x0000    ,    -2      ,     0     },
            {    0x0000    ,    -2      ,     0     },
            {    0x0000    ,    -1      ,     0     },
            {    0x0000    ,     0      ,     0     },
            {    0x0000    ,    -2      ,     0     },
            {    0x0000    ,     0      ,     0     },
            {    0x0000    ,     3      ,     0     },
            {    0x0000    ,     6      ,     0     },
            {    0x0000    ,    11      ,     0     },
            {    0x0000    ,    19      ,     0     },
            {    0x0000    ,    25      ,     0     },
            {    0x0000    ,    32      ,     0     },
            { UMTS_TABLE_END }
         },
         /* VGA comp by temperature */
         { { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
         }
      },
      
      /* PA low DAC */
      {  
         /* PA DAC info */
         { 0, 490, 1, 1},
         /* VGA DAC of PA high  */
         /* 32,   32,   31,   30,   29,   28,   27,   26,   25,   24 */
         {   0,    0,    0,    0,    0,    0,    0,    0,  161,   198 },

         /* VGA offset by subband */
         {
            /* max arfcn , pwr_offset_db */
            {    0x0000    ,     2      ,     0     },
            {    0x0000    ,    -1      ,     0     },
            {    0x0000    ,    -3      ,     0     },
            {    0x0000    ,    -4      ,     0     },
            {    0x0000    ,    -3      ,     0     },
            {    0x0000    ,     0      ,     0     },
            {    0x0000    ,    -3      ,     0     },
            {    0x0000    ,     0      ,     0     },
            {    0x0000    ,     3      ,     0     },
            {    0x0000    ,     6      ,     0     },
            {    0x0000    ,    11      ,     0     },
            {    0x0000    ,    19      ,     0     },
            {    0x0000    ,    25      ,     0     },
            {    0x0000    ,    33      ,     0     },
            { UMTS_TABLE_END }
         },
         /* VGA comp by temperature */
         { { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
         }
      }     
   },
   
   /* hysteresis start and end idx */
   {
     { 10, 14 },   
     { 20, 24 },
   },
   /*-------------------------------------------------------------------------------------------*/
   /* VGA comp by power detector */
   { 
     /* pwr dt start threshold: dBm */
     16, 
     /* pwr dt used section */ 
     32,
     /* pwr dt dac */
     {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
      0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
     /* pwr dt value */
     {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
      0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },  
     /* pwr dt compensate by subband */
     {
        /* max arfcn , pwr_offset_db */
        {    0x0000    ,    10      ,     0     },
        {    0x0000    ,    14      ,     0     },
        {    0x0000    ,    17      ,     0     },
        {    0x0000    ,    13      ,     0     },
        {    0x0000    ,    11      ,     0     },
        {    0x0000    ,     8      ,     0     },
        {    0x0000    ,     6      ,     0     },
        {    0x0000    ,     0      ,     0     },
        {    0x0000    ,    -2      ,     0     },
        {    0x0000    ,    -3      ,     0     },
        {    0x0000    ,    -7      ,     0     },
        {    0x0000    ,    -14     ,     0     },
        {    0x0000    ,    -18     ,     0     },
        {    0x0000    ,    -15     ,     0     },
        { UMTS_TABLE_END }
     },
     /* pwr dt compensate by temperature */
     { { 0, 0 },
       { 0, 0 },
       { 0, 0 },
       { 0, 0 },
       { 0, 0 },
       { 0, 0 },
       { 0, 0 },
       { 0, 0 },
     }  
   },
   
};

/* BAND1...................................................................*/
const U_sRAMPDATA  RampData_UMTSBand1_Set1 = 
{
   /* DC2DC data by BAND */
   { 2, 
     31 
   },
   {
      /* PA high mode */
      {  
         /* PA DAC info */
         { 1, 660, 0, 0},
         /* VGA DAC of PA high  */
         /* 32,   32,   31,   30,   29,   28,   27,   26,   25,   24 */
         {   0,    0,    0,    0,    0,    0,    0,    0,  296,  198 },

         /* VGA offset by subband */
         {
            /* max arfcn , pwr_offset_db */
            {    9612    ,     5      ,     0     },
            {    9634    ,     1      ,     0     },
            {    9656    ,    -2      ,     0     },
            {    9678    ,    -2      ,     0     },
            {    9700    ,    -1      ,     0     },
            {    9722    ,     0      ,     0     },
            {    9744    ,    -2      ,     0     },
            {    9766    ,     0      ,     0     },
            {    9788    ,     3      ,     0     },
            {    9810    ,     7      ,     0     },
            {    9832    ,    12      ,     0     },
            {    9854    ,    20      ,     0     },
            {    9876    ,    25      ,     0     },
            {    9888    ,    33      ,     0     },
            { UMTS_TABLE_END }
         },
         /* VGA comp by temperature */
         { { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
         }
      },
      
      /* PA mid mode */
      {  
         /* PA DAC info */
         { 0, 550, 1, 0},
         /* VGA DAC of PA high  */
         /* 32,   32,   31,   30,   29,   28,   27,   26,   25,   24 */
         {   0,    0,    0,    0,    0,    0,    0,    0,  238,   198 },

         /* VGA offset by subband */
         {
            /* max arfcn , pwr_offset_db */
            {    9612    ,     5      ,     0     },
            {    9634    ,     1      ,     0     },
            {    9656    ,    -2      ,     0     },
            {    9678    ,    -2      ,     0     },
            {    9700    ,    -1      ,     0     },
            {    9722    ,     0      ,     0     },
            {    9744    ,    -2      ,     0     },
            {    9766    ,     0      ,     0     },
            {    9788    ,     3      ,     0     },
            {    9810    ,     6      ,     0     },
            {    9832    ,    11      ,     0     },
            {    9854    ,    19      ,     0     },
            {    9876    ,    25      ,     0     },
            {    9888    ,    32      ,     0     },
            { UMTS_TABLE_END }
         },
         /* VGA comp by temperature */
         { { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
         }
      },
      
      /* PA low DAC */
      {  
         /* PA DAC info */
         { 0, 490, 1, 1},
         /* VGA DAC of PA high  */
         /* 32,   32,   31,   30,   29,   28,   27,   26,   25,   24 */
         {   0,    0,    0,    0,    0,    0,    0,    0,  161,   198 },

         /* VGA offset by subband */
         {
            /* max arfcn , pwr_offset_db */
            {    9612    ,     2      ,     0     },
            {    9634    ,    -1      ,     0     },
            {    9656    ,    -3      ,     0     },
            {    9678    ,    -4      ,     0     },
            {    9700    ,    -3      ,     0     },
            {    9722    ,     0      ,     0     },
            {    9744    ,    -3      ,     0     },
            {    9766    ,     0      ,     0     },
            {    9788    ,     3      ,     0     },
            {    9810    ,     6      ,     0     },
            {    9832    ,    11      ,     0     },
            {    9854    ,    19      ,     0     },
            {    9876    ,    25      ,     0     },
            {    9888    ,    33      ,     0     },
            { UMTS_TABLE_END }
         },
         /* VGA comp by temperature */
         { { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
         }
      }     
   },
   
   /* hysteresis start and end idx */
   {
     { 10, 14 },   
     { 20, 24 },
   },
   /*-------------------------------------------------------------------------------------------*/
   /* VGA comp by power detector */
   { 
     /* pwr dt start threshold: dBm */
     16, 
     /* pwr dt used section */ 
     32,
     /* pwr dt dac */
     {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
      0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
     /* pwr dt value */
     {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
      0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },  
     /* pwr dt compensate by subband */
     {
        /* max arfcn , pwr_offset_db */
        {    9612    ,    10      ,     0     },
        {    9634    ,    14      ,     0     },
        {    9656    ,    17      ,     0     },
        {    9678    ,    13      ,     0     },
        {    9700    ,    11      ,     0     },
        {    9722    ,     8      ,     0     },
        {    9744    ,     6      ,     0     },
        {    9766    ,     0      ,     0     },
        {    9788    ,    -2      ,     0     },
        {    9810    ,    -3      ,     0     },
        {    9832    ,    -7      ,     0     },
        {    9854    ,    -14     ,     0     },
        {    9876    ,    -18     ,     0     },
        {    9888    ,    -15     ,     0     },
        { UMTS_TABLE_END }
     },
     /* pwr dt compensate by temperature */
     { { 0, 0 },
       { 0, 0 },
       { 0, 0 },
       { 0, 0 },
       { 0, 0 },
       { 0, 0 },
       { 0, 0 },
       { 0, 0 },
     }  
   },
   
};

/* BAND2...................................................................*/
const U_sRAMPDATA  RampData_UMTSBand2_Set1 = 
{
   /* DC2DC data by BAND */
   { 2, 
     31 
   },
   {
      /* PA high mode */
      {  
         /* PA DAC info */
         { 1, 660, 0, 0},
         /* VGA DAC of PA high  */
         /* 32,   32,   31,   30,   29,   28,   27,   26,   25,   24 */
         {   0,    0,    0,    0,    0,    0,    0,    0,  296,  174 },
              
         /* VGA offset by subband */
         {
            /* max arfcn , pwr_offset_db */
            {    9262    ,    20      ,     0     },
            {    9284    ,    12      ,     0     },
            {    9306    ,     5      ,     0     },
            {    9328    ,     1      ,     0     },
            {    9350    ,    -2      ,     0     },
            {    9372    ,    -2      ,     0     },
            {    9394    ,     0      ,     0     },
            {    9416    ,     0      ,     0     },
            {    9438    ,     2      ,     0     },
            {    9460    ,     3      ,     0     },
            {    9482    ,     5      ,     0     },
            {    9504    ,     5      ,     0     },
            {    9526    ,    10      ,     0     },
            {    9538    ,    31      ,     0     },
            { UMTS_TABLE_END }
         },
         /* VGA comp by temperature */
         { { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
         }
      },
      
      /* PA mid mode */
      {  
         /* PA DAC info */
         { 0, 550, 1, 0},
         /* VGA DAC of PA high  */
         /* 32,   32,   31,   30,   29,   28,   27,   26,   25,   24 */
         {   0,    0,    0,    0,    0,    0,    0,    0,  238,   174 },
 
         /* VGA offset by subband */
         {
            /* max arfcn ,   pwr_offset_db */
            {    9262    ,    16      ,     0     },
            {    9284    ,     9      ,     0     },
            {    9306    ,     3      ,     0     },
            {    9328    ,     0      ,     0     },
            {    9350    ,    -3      ,     0     },
            {    9372    ,    -2      ,     0     },
            {    9394    ,     0      ,     0     },
            {    9416    ,     0      ,     0     },
            {    9438    ,     1      ,     0     },
            {    9460    ,     2      ,     0     },
            {    9482    ,     6      ,     0     },
            {    9504    ,     6      ,     0     },
            {    9526    ,    10      ,     0     },
            {    9538    ,    32      ,     0     },
            { UMTS_TABLE_END }
         },
         /* VGA comp by temperature */
         { { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
         }
      },
      
      /* PA low DAC */
      {  
         /* PA DAC info */
         { 0, 490, 1, 1},
         /* VGA DAC of PA high  */
         /* 32,   32,   31,   30,   29,   28,   27,   26,   25,   24 */
         {   0,    0,    0,    0,    0,    0,    0,    0,  161,   174 },

         /* VGA offset by subband */
         {
            /* max arfcn , pwr_offset_db */
            {    9262    ,    13      ,     0     },
            {    9284    ,     6      ,     0     },
            {    9306    ,     1      ,     0     },
            {    9328    ,    -1      ,     0     },
            {    9350    ,    -4      ,     0     },
            {    9372    ,    -4      ,     0     },
            {    9394    ,    -1      ,     0     },
            {    9416    ,     0      ,     0     },
            {    9438    ,     1      ,     0     },
            {    9460    ,     1      ,     0     },
            {    9482    ,     5      ,     0     },
            {    9504    ,     6      ,     0     },
            {    9526    ,    10      ,     0     },
            {    9538    ,    32      ,     0     },
            { UMTS_TABLE_END }
         },
         /* VGA comp by temperature */
         { { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
         }
      }     
   },
   /*-------------------------------------------------------------------------------------------*/
   /* hysteresis start and end idx */
   {
     { 10, 14 },   
     { 20, 24 },
   },
   /*-------------------------------------------------------------------------------------------*/
   /* VGA comp by power detector */
   { 
     /* pwr dt start threshold: dBm */
     16, 
     /* pwr dt used section */ 
     32,
     /* pwr dt dac */
     {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
      0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
     /* pwr dt value */
     {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
      0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },  
     /* pwr dt compensate by subband */
     {
        /* max arfcn ,   pwr_offset_db */
        {    9262    ,    13      ,     0     },
        {    9284    ,    17      ,     0     },
        {    9306    ,    21      ,     0     },
        {    9328    ,    17      ,     0     },
        {    9350    ,    15      ,     0     },
        {    9372    ,     9      ,     0     },
        {    9394    ,     2      ,     0     },
        {    9416    ,     0      ,     0     },
        {    9438    ,     6      ,     0     },
        {    9460    ,    13      ,     0     },
        {    9482    ,    13      ,     0     },
        {    9504    ,     8      ,     0     },
        {    9526    ,     7      ,     0     },
        {    9538    ,    -7      ,     0     },
        { UMTS_TABLE_END }
     },
     /* pwr dt compensate by temperature */
     { { 0, 0 },
       { 0, 0 },
       { 0, 0 },
       { 0, 0 },
       { 0, 0 },
       { 0, 0 },
       { 0, 0 },
       { 0, 0 },
     }  
   },
   
};

/* BAND3...................................................................*/
const U_sRAMPDATA  RampData_UMTSBand3_Set1 = 
{
   /* DC2DC data by BAND */
   { 7, 
     31 
   },
   {
      /* PA high mode */
      {  
         /* PA DAC info */
         { 1, 660, 0, 0},
         /* VGA DAC of PA high  */
         /* 32,   32,   31,   30,   29,   28,   27,   26,   25,   24 */
         {   0,    0,    0,    0,    0,    0,    0,    0,  225,   176 },

         /* VGA offset by subband */
         {
            /* max arfcn , pwr_offset */
            {    937     ,     0      ,     0     },
            {    962     ,     0      ,     0     },
            {    987     ,     0      ,     0     },
            {    1012    ,     0      ,     0     },
            {    1037    ,     0      ,     0     },
            {    1062    ,     0      ,     0     },
            {    1087    ,     0      ,     0     },
            {    1113    ,     0      ,     0     },
            {    1138    ,     0      ,     0     },
            {    1163    ,     0      ,     0     },
            {    1188    ,     0      ,     0     },
            {    1213    ,     0      ,     0     },
            {    1238    ,     0      ,     0     },
            {    1263    ,     0      ,     0     },
            {    1288    ,     0      ,     0     },
         },      
         /* VGA comp by temperature */
         { { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
         }
      },
      
      /* PA mid mode */
      {  
         /* PA DAC info */
         { 0, 580, 0, 0},
         /* VGA DAC of PA mid  */
         /* 32,   32,   31,   30,   29,   28,   27,   26,   25,   24 */
         {   0,    0,    0,    0,    0,    0,    0,    0,  191,   172 },

         /* VGA offset by subband */
         {
            /* max arfcn , pwr_offset */
            {    937     ,     0      ,     0     },
            {    962     ,     0      ,     0     },
            {    987     ,     0      ,     0     },
            {    1012    ,     0      ,     0     },
            {    1037    ,     0      ,     0     },
            {    1062    ,     0      ,     0     },
            {    1087    ,     0      ,     0     },
            {    1113    ,     0      ,     0     },
            {    1138    ,     0      ,     0     },
            {    1163    ,     0      ,     0     },
            {    1188    ,     0      ,     0     },
            {    1213    ,     0      ,     0     },
            {    1238    ,     0      ,     0     },
            {    1263    ,     0      ,     0     },
            {    1288    ,     0      ,     0     },
         },
         /* VGA comp by temperature */
         { { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
         }
      },
      
      /* PA low DAC */
      {  
         /* PA DAC info */
         { 0, 520, 0, 0},
         /* VGA DAC of PA low  */
         /* 32,   32,   31,   30,   29,   28,   27,   26,   25,   24 */
         {   0,    0,    0,    0,    0,    0,    0,    0,  144,   173 },

         /* VGA offset by subband */
         {
            /* max arfcn , pwr_offset */
            {    937     ,     0      ,     0     },
            {    962     ,     0      ,     0     },
            {    987     ,     0      ,     0     },
            {    1012    ,     0      ,     0     },
            {    1037    ,     0      ,     0     },
            {    1062    ,     0      ,     0     },
            {    1087    ,     0      ,     0     },
            {    1113    ,     0      ,     0     },
            {    1138    ,     0      ,     0     },
            {    1163    ,     0      ,     0     },
            {    1188    ,     0      ,     0     },
            {    1213    ,     0      ,     0     },
            {    1238    ,     0      ,     0     },
            {    1263    ,     0      ,     0     },
            {    1288    ,     0      ,     0     },
         },
         /* VGA comp by temperature */
         { { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
         }
      }     
   },
   
   /* hysteresis start and end idx */
   {
     { 10, 14 },   
     { 20, 24 },
   },
   /*-------------------------------------------------------------------------------------------*/
   /* VGA comp by power detector */
   { 
     /* pwr dt start threshold: dBm */
     16, 
     /* pwr dt used section */ 
     32,
     /* pwr dt dac */
     {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
      0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
     /* pwr dt value */
     {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
      0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },  
     /* pwr dt compensate by subband */
     {
        /* max arfcn , pwr_slope  , pwr_offset*/
        {    937     ,     0      ,     0     },
        {    962     ,     0      ,     0     },
        {    987     ,     0      ,     0     },
        {    1012    ,     0      ,     0     },
        {    1037    ,     0      ,     0     },
        {    1062    ,     0      ,     0     },
        {    1087    ,     0      ,     0     },
        {    1113    ,     0      ,     0     },
        {    1138    ,     0      ,     0     },
        {    1163    ,     0      ,     0     },
        {    1188    ,     0      ,     0     },
        {    1213    ,     0      ,     0     },
        {    1238    ,     0      ,     0     },
        {    1263    ,     0      ,     0     },
        {    1288    ,     0      ,     0     },
     },
     /* pwr dt compensate by temperature */
     { { 0, 0 },
       { 0, 0 },
       { 0, 0 },
       { 0, 0 },
       { 0, 0 },
       { 0, 0 },
       { 0, 0 },
       { 0, 0 },
     }  
   },
   
};

/* BAND4...................................................................*/
const U_sRAMPDATA  RampData_UMTSBand4_Set1 = 
{
   /* DC2DC data by BAND */
   { 7, 
     31 
   },
   {
      /* PA high mode */
      {  
         /* PA DAC info */
         { 1, 660, 0, 0},
         /* VGA DAC of PA high  */
         /* 32,   32,   31,   30,   29,   28,   27,   26,   25,   24 */
         {   0,    0,    0,    0,    0,    0,    0,    0,  246,   176 },
              
         /* VGA offset by subband */
         {
            /* max arfcn , pwr_offset */
            {    1312    ,     0      ,     0     },
            {    1327    ,     0      ,     0     },
            {    1342    ,     0      ,     0     },
            {    1357    ,     0      ,     0     },
            {    1372    ,     0      ,     0     },
            {    1387    ,     0      ,     0     },
            {    1402    ,     0      ,     0     },
            {    1417    ,     0      ,     0     },
            {    1432    ,     0      ,     0     },
            {    1450    ,     0      ,     0     },
            {    1465    ,     0      ,     0     },
            {    1480    ,     0      ,     0     },
            {    1495    ,     0      ,     0     },
            {    1510    ,     0      ,     0     },
            {    1513    ,     0      ,     0     },
         },
         /* VGA comp by temperature */
         { { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
         }
      },
      
      /* PA mid mode */
      {  
         /* PA DAC info */
         { 0, 580, 0, 0},
         /* VGA DAC of PA mid  */
         /* 32,   32,   31,   30,   29,   28,   27,   26,   25,   24 */
         {   0,    0,    0,    0,    0,    0,    0,    0,  212,   172 },
 
         /* VGA offset by subband */
         {
            /* max arfcn , pwr_offset */
            {    1312    ,     0      ,     0     },
            {    1327    ,     0      ,     0     },
            {    1342    ,     0      ,     0     },
            {    1357    ,     0      ,     0     },
            {    1372    ,     0      ,     0     },
            {    1387    ,     0      ,     0     },
            {    1402    ,     0      ,     0     },
            {    1417    ,     0      ,     0     },
            {    1432    ,     0      ,     0     },
            {    1450    ,     0      ,     0     },
            {    1465    ,     0      ,     0     },
            {    1480    ,     0      ,     0     },
            {    1495    ,     0      ,     0     },
            {    1510    ,     0      ,     0     },
            {    1513    ,     0      ,     0     },
         },
         /* VGA comp by temperature */
         { { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
         }
      },
      
      /* PA low DAC */
      {  
         /* PA DAC info */
         { 0, 520, 0, 0},
         /* VGA DAC of PA low  */
         /* 32,   32,   31,   30,   29,   28,   27,   26,   25,   24 */
         {   0,    0,    0,    0,    0,    0,    0,    0,  166,   173 },

         /* VGA offset by subband */
         {
            /* max arfcn , pwr_offset */
            {    1312    ,     0      ,     0     },
            {    1327    ,     0      ,     0     },
            {    1342    ,     0      ,     0     },
            {    1357    ,     0      ,     0     },
            {    1372    ,     0      ,     0     },
            {    1387    ,     0      ,     0     },
            {    1402    ,     0      ,     0     },
            {    1417    ,     0      ,     0     },
            {    1432    ,     0      ,     0     },
            {    1450    ,     0      ,     0     },
            {    1465    ,     0      ,     0     },
            {    1480    ,     0      ,     0     },
            {    1495    ,     0      ,     0     },
            {    1510    ,     0      ,     0     },
            {    1513    ,     0      ,     0     },
         },
         /* VGA comp by temperature */
         { { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
         }
      }     
   },
   /*-------------------------------------------------------------------------------------------*/
   /* hysteresis start and end idx */
   {
     { 10, 14 },   
     { 20, 24 },
   },
   /*-------------------------------------------------------------------------------------------*/
   /* VGA comp by power detector */
   { 
     /* pwr dt start threshold: dBm */
     16, 
     /* pwr dt used section */ 
     32,
     /* pwr dt dac */
     {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
      0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
     /* pwr dt value */
     {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
      0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },  
     /* pwr dt compensate by subband */
     {
        /* max arfcn , pwr_slope  , pwr_offset*/
        {    1312    ,     0      ,     0     },
        {    1327    ,     0      ,     0     },
        {    1342    ,     0      ,     0     },
        {    1357    ,     0      ,     0     },
        {    1372    ,     0      ,     0     },
        {    1387    ,     0      ,     0     },
        {    1402    ,     0      ,     0     },
        {    1417    ,     0      ,     0     },
        {    1432    ,     0      ,     0     },
        {    1450    ,     0      ,     0     },
        {    1465    ,     0      ,     0     },
        {    1480    ,     0      ,     0     },
        {    1495    ,     0      ,     0     },
        {    1510    ,     0      ,     0     },
        {    1513    ,     0      ,     0     },
     },
     /* pwr dt compensate by temperature */
     { { 0, 0 },
       { 0, 0 },
       { 0, 0 },
       { 0, 0 },
       { 0, 0 },
       { 0, 0 },
       { 0, 0 },
       { 0, 0 },
     }  
   },
   
};

/* BAND5...................................................................*/
const U_sRAMPDATA  RampData_UMTSBand5_Set1 = 
{
   /* DC2DC data by BAND */
   { 2, 
     31 
   },
   {
      /* PA high mode */
      {  
         /* PA DAC info */
         { 1, 660, 0, 0},
         /* VGA DAC of PA high  */
         /* 32,   32,   31,   30,   29,   28,   27,   26,   25,   24 */
         {   0,    0,    0,    0,    0,    0,    0,    0,  296,  185 },

         /* VGA offset by subband */
         {
            /* max arfcn , pwr_offset_db */
            {    4132    ,      4      ,     0     },
            {    4140    ,     -7      ,     0     },
            {    4148    ,    -14      ,     0     },
            {    4156    ,    -14      ,     0     },
            {    4164    ,    -11      ,     0     },
            {    4172    ,     -4      ,     0     },
            {    4180    ,     0      ,     0     },
            {    4188    ,      5      ,     0     },
            {    4195    ,      6      ,     0     },
            {    4203    ,      7      ,     0     },
            {    4210    ,      4      ,     0     },
            {    4218    ,      0      ,     0     },
            {    4226    ,     -4      ,     0     },
            {    4233    ,     -5      ,     0     },
            { UMTS_TABLE_END }
         },
         /* VGA comp by temperature */
         { { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
         }
      },
      
      /* PA mid mode */
      {  
         /* PA DAC info */
         { 0, 550, 1, 0},
         /* VGA DAC of PA high  */
         /* 32,   32,   31,   30,   29,   28,   27,   26,   25,   24 */
         {   0,    0,    0,    0,    0,    0,    0,    0,  238,    185 },

         /* VGA offset by subband */
         {
            /* max arfcn , pwr_offset_db */
            {    4132    ,      7      ,     0     },
            {    4140    ,     -5      ,     0     },
            {    4148    ,    -12      ,     0     },
            {    4156    ,    -13      ,     0     },
            {    4164    ,    -11      ,     0     },
            {    4172    ,     -5      ,     0     },
            {    4180    ,     0      ,     0     },
            {    4188    ,      3      ,     0     },
            {    4195    ,      4      ,     0     },
            {    4203    ,      5      ,     0     },
            {    4210    ,      2      ,     0     },
            {    4218    ,     -2      ,     0     },
            {    4226    ,     -6      ,     0     },
            {    4233    ,     -8      ,     0     },
            { UMTS_TABLE_END }
         },
         /* VGA comp by temperature */
         { { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
         }
      },
      
      /* PA low DAC */
      {  
         /* PA DAC info */
         { 0, 490, 1, 1},
         /* VGA DAC of PA high  */
         /* 32,   32,   31,   30,   29,   28,   27,   26,   25,   24 */
         {   0,    0,    0,    0,    0,    0,    0,    0,  161,    185 },
         
         /* VGA offset by subband */
         {
            /* max arfcn , pwr_offset_db */
            {    4132    ,      9      ,     0     },
            {    4140    ,     -4      ,     0     },
            {    4148    ,    -11      ,     0     },
            {    4156    ,    -13      ,     0     },
            {    4164    ,    -11      ,     0     },
            {    4172    ,     -6      ,     0     },
            {    4180    ,      0      ,     0     },
            {    4188    ,      2      ,     0     },
            {    4195    ,      2      ,     0     },
            {    4203    ,      2      ,     0     },
            {    4210    ,     -1      ,     0     },
            {    4218    ,     -6      ,     0     },
            {    4226    ,    -11      ,     0     },
            {    4233    ,    -14      ,     0     },
            { UMTS_TABLE_END }
         },
         /* VGA comp by temperature */
         { { 22, 0 },
           {  9, 0 },
           {  0, 0 },
           {  0, 0 },
           { -6, 0 },
           {-12, 0 },
           {-16, 0 },
           {-19, 0 },
         }
      }     
   },
   /*-------------------------------------------------------------------------------------------*/
   /* hysteresis start and end idx */
   {
     { 14, 14 },   
     { 27, 27 },
   },
   /*-------------------------------------------------------------------------------------------*/
   /* VGA comp by power detector */
   { 
     /* pwr dt start threshold: dBm */
     16, 
     /* pwr dt used section */ 
      0,
     /* pwr dt dac */
     {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
      0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
     /* pwr dt value */
     {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
      0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },  
     /* pwr dt compensate by subband */
     {
        /* max arfcn , pwr_offset_db */
        {    4132    ,    -16      ,     0     },
        {    4140    ,    -10      ,     0     },
        {    4148    ,     -2      ,     0     },
        {    4156    ,      1      ,     0     },
        {    4164    ,      3      ,     0     },
        {    4172    ,      0      ,     0     },
        {    4180    ,      0      ,     0     },
        {    4188    ,     -2      ,     0     },
        {    4195    ,     -5      ,     0     },
        {    4203    ,     -8      ,     0     },
        {    4210    ,     -8      ,     0     },
        {    4218    ,    -11      ,     0     },
        {    4226    ,    -15      ,     0     },
        {    4233    ,    -18      ,     0     },
        { UMTS_TABLE_END }
     },
     /* pwr dt compensate by temperature */
     { { 0, 0 },
       { 0, 0 },
       { 0, 0 },
       { 0, 0 },
       { 0, 0 },
       { 0, 0 },
       { 0, 0 },
       { 0, 0 },
     }  
   },
   
};

/* BAND6...................................................................*/
/* Band6 is overlap with Band5 */
const U_sRAMPDATA  RampData_UMTSBand6_Set1 = 
{
   /* DC2DC data by BAND */
   { 0, 
     0 
   },
   {
      /* PA high mode */
      {  
         /* PA DAC info */
         { 0, 0, 0, 0},
         /* VGA DAC of PA high  */
         /* 32,   32,   31,   30,   29,   28,   27,   26,   25,   24 */
         {   0,    0,    0,    0,    0,    0,    0,    0,    0,    0 },

         /* VGA offset by subband */
         {
            /* max arfcn , pwr_offset_db */
            {    4162    ,     0      ,     0     },
            {    4168    ,     0      ,     0     },
            {    4175    ,     0      ,     0     },
            {    4182    ,     0      ,     0     },
            {    4188    ,     0      ,     0     },
            { UMTS_TABLE_END }
         },
         /* VGA comp by temperature */
         { { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
         }
      },
      
      /* PA mid mode */
      {  
         /* PA DAC info */
         { 0, 0, 0, 0},
         /* VGA DAC of PA high  */
         /* 32,   32,   31,   30,   29,   28,   27,   26,   25,   24 */
         {   0,    0,    0,    0,    0,    0,    0,    0,    0,    0 },

         /* VGA offset by subband */
         {
            /* max arfcn , pwr_offset */
            /* max arfcn , pwr_offset */
            {    4162    ,     0      ,     0     },
            {    4168    ,     0      ,     0     },
            {    4175    ,     0      ,     0     },
            {    4182    ,     0      ,     0     },
            {    4188    ,     0      ,     0     },
            { UMTS_TABLE_END }
         },
         /* VGA comp by temperature */
         { { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
         }
      },
      
      /* PA low DAC */
      {  
         /* PA DAC info */
         { 0, 0, 0, 0},
         /* VGA DAC of PA high  */
         /* 32,   32,   31,   30,   29,   28,   27,   26,   25,   24 */
         {   0,    0,    0,    0,    0,    0,    0,    0,    0,    0 },
         
         /* VGA offset by subband */
         {
            /* max arfcn , pwr_offset */
            /* max arfcn , pwr_offset */
            {    4162    ,     0      ,     0     },
            {    4168    ,     0      ,     0     },
            {    4175    ,     0      ,     0     },
            {    4182    ,     0      ,     0     },
            {    4188    ,     0      ,     0     },
            { UMTS_TABLE_END }
         },
         /* VGA comp by temperature */
         { { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
         }
      }     
   },
   /*-------------------------------------------------------------------------------------------*/
   /* hysteresis start and end idx */
   {
     { 0, 0 },   
     { 0, 0 },
   },
   /*-------------------------------------------------------------------------------------------*/
   /* VGA comp by power detector */
   { 
     /* pwr dt start threshold: dBm */
     0, 
     /* pwr dt used section */ 
     0,
     /* pwr dt dac */
     {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
      0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
     /* pwr dt value */
     {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
      0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },  
     /* pwr dt compensate by subband */
     {
        /* max arfcn , pwr_slope  , pwr_offset*/
        {    4162    ,     0      ,     0     },
        {    4168    ,     0      ,     0     },
        {    4175    ,     0      ,     0     },
        {    4182    ,     0      ,     0     },
        {    4188    ,     0      ,     0     },
        { UMTS_TABLE_END }
     },
     /* pwr dt compensate by temperature */
     { { 0, 0 },
       { 0, 0 },
       { 0, 0 },
       { 0, 0 },
       { 0, 0 },
       { 0, 0 },
       { 0, 0 },
       { 0, 0 },
     }  
   },
   
};

/* BAND7...................................................................*/
const U_sRAMPDATA  RampData_UMTSBand7_Set1 = 
{
   /* DC2DC data by BAND */
   { 0, 
     0 
   },
   {
      /* PA high mode */
      {  
         /* PA DAC info */
         { 0, 0, 0, 0},
         /* VGA DAC of PA high  */
         /* 32,   32,   31,   30,   29,   28,   27,   26,   25,   24 */
         {   0,    0,    0,    0,    0,    0,    0,    0,    0,    0 },

         /* VGA offset by subband */
         {
            /* max arfcn , pwr_offset_db */
            {    2012    ,     0      ,     0     },
            {    2037    ,     0      ,     0     },
            {    2062    ,     0      ,     0     },
            {    2087    ,     0      ,     0     },
            {    2112    ,     0      ,     0     },
            {    2137    ,     0      ,     0     },
            {    2162    ,     0      ,     0     },
            {    2187    ,     0      ,     0     },
            {    2112    ,     0      ,     0     },
            {    2237    ,     0      ,     0     },
            {    2262    ,     0      ,     0     },
            {    2287    ,     0      ,     0     },
            {    2312    ,     0      ,     0     },
            {    2338    ,     0      ,     0     },
            { UMTS_TABLE_END }
         },
         /* VGA comp by temperature */
         { { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
         }
      },
      
      /* PA mid mode */
      {  
         /* PA DAC info */
         { 0, 0, 0, 0},
         /* VGA DAC of PA high  */
         /* 32,   32,   31,   30,   29,   28,   27,   26,   25,   24 */
         {   0,    0,    0,    0,    0,    0,    0,    0,    0,    0 },

         /* VGA offset by subband */
         {
            /* max arfcn , pwr_offset */
            /* max arfcn , pwr_offset */
            {    2012    ,     0      ,     0     },
            {    2037    ,     0      ,     0     },
            {    2062    ,     0      ,     0     },
            {    2087    ,     0      ,     0     },
            {    2112    ,     0      ,     0     },
            {    2137    ,     0      ,     0     },
            {    2162    ,     0      ,     0     },
            {    2187    ,     0      ,     0     },
            {    2112    ,     0      ,     0     },
            {    2237    ,     0      ,     0     },
            {    2262    ,     0      ,     0     },
            {    2287    ,     0      ,     0     },
            {    2312    ,     0      ,     0     },
            {    2338    ,     0      ,     0     },
            { UMTS_TABLE_END }

         },
         /* VGA comp by temperature */
         { { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
         }
      },
      
      /* PA low DAC */
      {  
         /* PA DAC info */
         { 0, 0, 0, 0},
         /* VGA DAC of PA high  */
         /* 32,   32,   31,   30,   29,   28,   27,   26,   25,   24 */
         {   0,    0,    0,    0,    0,    0,    0,    0,    0,    0 },
         
         /* VGA offset by subband */
         {
            /* max arfcn , pwr_offset */
            /* max arfcn , pwr_offset */
            {    2012    ,     0      ,     0     },
            {    2037    ,     0      ,     0     },
            {    2062    ,     0      ,     0     },
            {    2087    ,     0      ,     0     },
            {    2112    ,     0      ,     0     },
            {    2137    ,     0      ,     0     },
            {    2162    ,     0      ,     0     },
            {    2187    ,     0      ,     0     },
            {    2112    ,     0      ,     0     },
            {    2237    ,     0      ,     0     },
            {    2262    ,     0      ,     0     },
            {    2287    ,     0      ,     0     },
            {    2312    ,     0      ,     0     },
            {    2338    ,     0      ,     0     },
            { UMTS_TABLE_END }

         },
         /* VGA comp by temperature */
         { { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
         }
      }     
   },
   /*-------------------------------------------------------------------------------------------*/
   /* hysteresis start and end idx */
   {
     { 0, 0 },   
     { 0, 0 },
   },
   /*-------------------------------------------------------------------------------------------*/
   /* VGA comp by power detector */
   { 
     /* pwr dt start threshold: dBm */
     0, 
     /* pwr dt used section */ 
     0,
     /* pwr dt dac */
     {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
      0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
     /* pwr dt value */
     {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
      0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },  
     /* pwr dt compensate by subband */
     {
        /* max arfcn , pwr_slope  , pwr_offset*/
        {    2012    ,     0      ,     0     },
        {    2037    ,     0      ,     0     },
        {    2062    ,     0      ,     0     },
        {    2087    ,     0      ,     0     },
        {    2112    ,     0      ,     0     },
        {    2137    ,     0      ,     0     },
        {    2162    ,     0      ,     0     },
        {    2187    ,     0      ,     0     },
        {    2112    ,     0      ,     0     },
        {    2237    ,     0      ,     0     },
        {    2262    ,     0      ,     0     },
        {    2287    ,     0      ,     0     },
        {    2312    ,     0      ,     0     },
        {    2338    ,     0      ,     0     },
        { UMTS_TABLE_END }
     },
     /* pwr dt compensate by temperature */
     { { 0, 0 },
       { 0, 0 },
       { 0, 0 },
       { 0, 0 },
       { 0, 0 },
       { 0, 0 },
       { 0, 0 },
       { 0, 0 },
     }  
   },
   
};

/* BAND8...................................................................*/
const U_sRAMPDATA  RampData_UMTSBand8_Set1 = 
{
   /* DC2DC data by BAND */
   { 7, 
     31 
   },
   {
      /* PA high mode */
      {  
         /* PA DAC info */
         { 1, 660, 0, 0},
         /* VGA DAC of PA high  */
         /* 32,   32,   31,   30,   29,   28,   27,   26,   25,   24 */
         {   0,    0,    0,    0,    0,    0,    0,    0,  292,   162 },

         /* VGA offset by subband */
         {
            /* max arfcn , pwr_offset */
            {    2712    ,     0      ,     0     },
            {    2723    ,     0      ,     0     },
            {    2734    ,     0      ,     0     },
            {    2745    ,     0      ,     0     },
            {    2756    ,     0      ,     0     },
            {    2767    ,     0      ,     0     },
            {    2778    ,     0      ,     0     },
            {    2788    ,     0      ,     0     },
            {    2799    ,     0      ,     0     },
            {    2810    ,     0      ,     0     },
            {    2821    ,     0      ,     0     },
            {    2832    ,     0      ,     0     },
            {    2843    ,     0      ,     0     },
            {    2854    ,     0      ,     0     },
            {    2863    ,     0      ,     0     },
         },      
         /* VGA comp by temperature */
         { { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
         }
      },
      
      /* PA mid mode */
      {  
         /* PA DAC info */
         { 0, 550, 1, 0},
         /* VGA DAC of PA mid  */
         /* 32,   32,   31,   30,   29,   28,   27,   26,   25,   24 */
         {   0,    0,    0,    0,    0,    0,    0,    0,  238,   162 },

         /* VGA offset by subband */
         {
            /* max arfcn , pwr_offset */
            {    2712    ,     0      ,     0     },
            {    2723    ,     0      ,     0     },
            {    2734    ,     0      ,     0     },
            {    2745    ,     0      ,     0     },
            {    2756    ,     0      ,     0     },
            {    2767    ,     0      ,     0     },
            {    2778    ,     0      ,     0     },
            {    2788    ,     0      ,     0     },
            {    2799    ,     0      ,     0     },
            {    2810    ,     0      ,     0     },
            {    2821    ,     0      ,     0     },
            {    2832    ,     0      ,     0     },
            {    2843    ,     0      ,     0     },
            {    2854    ,     0      ,     0     },
            {    2863    ,     0      ,     0     },
         },
         /* VGA comp by temperature */
         { { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
         }
      },
      
      /* PA low DAC */
      {  
         /* PA DAC info */
         { 0, 490, 1, 1},
         /* VGA DAC of PA low  */
         /* 32,   32,   31,   30,   29,   28,   27,   26,   25,   24 */
         {   0,    0,    0,    0,    0,    0,    0,    0,  161,   162 },

         /* VGA offset by subband */
         {
            /* max arfcn , pwr_offset */
            {    2712    ,     0      ,     0     },
            {    2723    ,     0      ,     0     },
            {    2734    ,     0      ,     0     },
            {    2745    ,     0      ,     0     },
            {    2756    ,     0      ,     0     },
            {    2767    ,     0      ,     0     },
            {    2778    ,     0      ,     0     },
            {    2788    ,     0      ,     0     },
            {    2799    ,     0      ,     0     },
            {    2810    ,     0      ,     0     },
            {    2821    ,     0      ,     0     },
            {    2832    ,     0      ,     0     },
            {    2843    ,     0      ,     0     },
            {    2854    ,     0      ,     0     },
            {    2863    ,     0      ,     0     },
         },
         /* VGA comp by temperature */
         { { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
         }
      }     
   },
   
   /* hysteresis start and end idx */
   {
     { 10, 14 },   
     { 20, 24 },
   },
   /*-------------------------------------------------------------------------------------------*/
   /* VGA comp by power detector */
   { 
     /* pwr dt start threshold: dBm */
     16, 
     /* pwr dt used section */ 
     32,
     /* pwr dt dac */
     {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
      0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
     /* pwr dt value */
     {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
      0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },  
     /* pwr dt compensate by subband */
     {
        /* max arfcn , pwr_offset */
        {    2712    ,     0      ,     0     },
        {    2723    ,     0      ,     0     },
        {    2734    ,     0      ,     0     },
        {    2745    ,     0      ,     0     },
        {    2756    ,     0      ,     0     },
        {    2767    ,     0      ,     0     },
        {    2778    ,     0      ,     0     },
        {    2788    ,     0      ,     0     },
        {    2799    ,     0      ,     0     },
        {    2810    ,     0      ,     0     },
        {    2821    ,     0      ,     0     },
        {    2832    ,     0      ,     0     },
        {    2843    ,     0      ,     0     },
        {    2854    ,     0      ,     0     },
        {    2863    ,     0      ,     0     },
     },
     /* pwr dt compensate by temperature */
     { { 0, 0 },
       { 0, 0 },
       { 0, 0 },
       { 0, 0 },
       { 0, 0 },
       { 0, 0 },
       { 0, 0 },
       { 0, 0 },
     }  
   },
   
};

/* BAND9...................................................................*/
const U_sRAMPDATA  RampData_UMTSBand9_Set1 = 
{
   /* DC2DC data by BAND */
   { 7, 
     31 
   },
   {
      /* PA high mode */
      {  
         /* PA DAC info */
         { 1, 660, 0, 0},
         /* VGA DAC of PA high  */
         /* 32,   32,   31,   30,   29,   28,   27,   26,   25,   24 */
         {   0,    0,    0,    0,    0,    0,    0,    0,  246,   176 },
              
         /* VGA offset by subband */
         {
            /* max arfcn , pwr_offset */
            {    8762    ,     0      ,     0     },
            {    8773    ,     0      ,     0     },
            {    8784    ,     0      ,     0     },
            {    8795    ,     0      ,     0     },
            {    8806    ,     0      ,     0     },
            {    8817    ,     0      ,     0     },
            {    8828    ,     0      ,     0     },
            {    8837    ,     0      ,     0     },
            {    8848    ,     0      ,     0     },
            {    8859    ,     0      ,     0     },
            {    8870    ,     0      ,     0     },
            {    8881    ,     0      ,     0     },
            {    8892    ,     0      ,     0     },
            {    8903    ,     0      ,     0     },
            {    8912    ,     0      ,     0     },
         },
         /* VGA comp by temperature */
         { { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
         }
      },
      
      /* PA mid mode */
      {  
         /* PA DAC info */
         { 0, 580, 0, 0},
         /* VGA DAC of PA mid  */
         /* 32,   32,   31,   30,   29,   28,   27,   26,   25,   24 */
         {   0,    0,    0,    0,    0,    0,    0,    0,  212,   172 },
 
         /* VGA offset by subband */
         {
            /* max arfcn , pwr_offset */
            {    8762    ,     0      ,     0     },
            {    8773    ,     0      ,     0     },
            {    8784    ,     0      ,     0     },
            {    8795    ,     0      ,     0     },
            {    8806    ,     0      ,     0     },
            {    8817    ,     0      ,     0     },
            {    8828    ,     0      ,     0     },
            {    8837    ,     0      ,     0     },
            {    8848    ,     0      ,     0     },
            {    8859    ,     0      ,     0     },
            {    8870    ,     0      ,     0     },
            {    8881    ,     0      ,     0     },
            {    8892    ,     0      ,     0     },
            {    8903    ,     0      ,     0     },
            {    8912    ,     0      ,     0     },
         },
         /* VGA comp by temperature */
         { { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
         }
      },
      
      /* PA low DAC */
      {  
         /* PA DAC info */
         { 0, 520, 0, 0},
         /* VGA DAC of PA low  */
         /* 32,   32,   31,   30,   29,   28,   27,   26,   25,   24 */
         {   0,    0,    0,    0,    0,    0,    0,    0,  166,   173 },

         /* VGA offset by subband */
         {
            /* max arfcn , pwr_offset */
            {    8762    ,     0      ,     0     },
            {    8773    ,     0      ,     0     },
            {    8784    ,     0      ,     0     },
            {    8795    ,     0      ,     0     },
            {    8806    ,     0      ,     0     },
            {    8817    ,     0      ,     0     },
            {    8828    ,     0      ,     0     },
            {    8837    ,     0      ,     0     },
            {    8848    ,     0      ,     0     },
            {    8859    ,     0      ,     0     },
            {    8870    ,     0      ,     0     },
            {    8881    ,     0      ,     0     },
            {    8892    ,     0      ,     0     },
            {    8903    ,     0      ,     0     },
            {    8912    ,     0      ,     0     },
         },
         /* VGA comp by temperature */
         { { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
         }
      }     
   },
   /*-------------------------------------------------------------------------------------------*/
   /* hysteresis start and end idx */
   {
     { 10, 14 },   
     { 20, 24 },
   },
   /*-------------------------------------------------------------------------------------------*/
   /* VGA comp by power detector */
   { 
     /* pwr dt start threshold: dBm */
     16, 
     /* pwr dt used section */ 
     32,
     /* pwr dt dac */
     {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
      0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
     /* pwr dt value */
     {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
      0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },  
     /* pwr dt compensate by subband */
     {
        /* max arfcn , pwr_offset */
        {    8762    ,     0      ,     0     },
        {    8773    ,     0      ,     0     },
        {    8784    ,     0      ,     0     },
        {    8795    ,     0      ,     0     },
        {    8806    ,     0      ,     0     },
        {    8817    ,     0      ,     0     },
        {    8828    ,     0      ,     0     },
        {    8837    ,     0      ,     0     },
        {    8848    ,     0      ,     0     },
        {    8859    ,     0      ,     0     },
        {    8870    ,     0      ,     0     },
        {    8881    ,     0      ,     0     },
        {    8892    ,     0      ,     0     },
        {    8903    ,     0      ,     0     },
        {    8912    ,     0      ,     0     },
     },
     /* pwr dt compensate by temperature */
     { { 0, 0 },
       { 0, 0 },
       { 0, 0 },
       { 0, 0 },
       { 0, 0 },
       { 0, 0 },
       { 0, 0 },
       { 0, 0 },
     }  
   },
   
};

/* BAND10...................................................................*/
const U_sRAMPDATA  RampData_UMTSBand10_Set1 = 
{
   /* DC2DC data by BAND */
   { 7, 
     31 
   },
   {
      /* PA high mode */
      {  
         /* PA DAC info */
         { 1, 660, 0, 0},
         /* VGA DAC of PA high  */
         /* 32,   32,   31,   30,   29,   28,   27,   26,   25,   24 */
         {   0,    0,    0,    0,    0,    0,    0,    0,  276,   176 },

         /* VGA offset by subband */
         {
            /* max arfcn , pwr_offset */
            {    2888    ,     0      ,     0     },
            {    2908    ,     0      ,     0     },
            {    2928    ,     0      ,     0     },
            {    2948    ,     0      ,     0     },
            {    2968    ,     0      ,     0     },
            {    2988    ,     0      ,     0     },
            {    3008    ,     0      ,     0     },
            {    3025    ,     0      ,     0     },
            {    3045    ,     0      ,     0     },
            {    3065    ,     0      ,     0     },
            {    3085    ,     0      ,     0     },
            {    3105    ,     0      ,     0     },
            {    3125    ,     0      ,     0     },
            {    3145    ,     0      ,     0     },
            {    3162    ,     0      ,     0     },
         },
         /* VGA comp by temperature */
         { { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
         }
      },
      
      /* PA mid mode */
      {  
         /* PA DAC info */
         { 0, 580, 0, 0},
         /* VGA DAC of PA mid  */
         /* 32,   32,   31,   30,   29,   28,   27,   26,   25,   24 */
         {   0,    0,    0,    0,    0,    0,    0,    0,  242,   172 },

         /* VGA offset by subband */
         {
            /* max arfcn , pwr_offset */
            {    2888    ,     0      ,     0     },
            {    2908    ,     0      ,     0     },
            {    2928    ,     0      ,     0     },
            {    2948    ,     0      ,     0     },
            {    2968    ,     0      ,     0     },
            {    2988    ,     0      ,     0     },
            {    3008    ,     0      ,     0     },
            {    3025    ,     0      ,     0     },
            {    3045    ,     0      ,     0     },
            {    3065    ,     0      ,     0     },
            {    3085    ,     0      ,     0     },
            {    3105    ,     0      ,     0     },
            {    3125    ,     0      ,     0     },
            {    3145    ,     0      ,     0     },
            {    3162    ,     0      ,     0     },
         },
         /* VGA comp by temperature */
         { { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
         }
      },
      
      /* PA low DAC */
      {  
         /* PA DAC info */
         { 0, 520, 0, 0},
         /* VGA DAC of PA low  */
         /* 32,   32,   31,   30,   29,   28,   27,   26,   25,   24 */
         {   0,    0,    0,    0,    0,    0,    0,    0,  183,   173 },
         
         /* VGA offset by subband */
         {
            /* max arfcn , pwr_offset */
            {    2888    ,     0      ,     0     },
            {    2908    ,     0      ,     0     },
            {    2928    ,     0      ,     0     },
            {    2948    ,     0      ,     0     },
            {    2968    ,     0      ,     0     },
            {    2988    ,     0      ,     0     },
            {    3008    ,     0      ,     0     },
            {    3025    ,     0      ,     0     },
            {    3045    ,     0      ,     0     },
            {    3065    ,     0      ,     0     },
            {    3085    ,     0      ,     0     },
            {    3105    ,     0      ,     0     },
            {    3125    ,     0      ,     0     },
            {    3145    ,     0      ,     0     },
            {    3162    ,     0      ,     0     },
         },
         /* VGA comp by temperature */
         { { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
         }
      }     
   },
   /*-------------------------------------------------------------------------------------------*/
   /* hysteresis start and end idx */
   {
     { 10, 14 },   
     { 20, 24 },
   },
   /*-------------------------------------------------------------------------------------------*/
   /* VGA comp by power detector */
   { 
     /* pwr dt start threshold: dBm */
     16, 
     /* pwr dt used section */ 
     32,
     /* pwr dt dac */
     {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
      0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
     /* pwr dt value */
     {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
      0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },  
     /* pwr dt compensate by subband */
     {
        /* max arfcn , pwr_slope  , pwr_offset*/
        {    2888    ,     0      ,     0     },
        {    2908    ,     0      ,     0     },
        {    2928    ,     0      ,     0     },
        {    2948    ,     0      ,     0     },
        {    2968    ,     0      ,     0     },
        {    2988    ,     0      ,     0     },
        {    3008    ,     0      ,     0     },
        {    3025    ,     0      ,     0     },
        {    3045    ,     0      ,     0     },
        {    3065    ,     0      ,     0     },
        {    3085    ,     0      ,     0     },
        {    3105    ,     0      ,     0     },
        {    3125    ,     0      ,     0     },
        {    3145    ,     0      ,     0     },
        {    3162    ,     0      ,     0     },
     },
     /* pwr dt compensate by temperature */
     { { 0, 0 },
       { 0, 0 },
       { 0, 0 },
       { 0, 0 },
       { 0, 0 },
       { 0, 0 },
       { 0, 0 },
       { 0, 0 },
     }  
   },
   
};

/* BAND11...................................................................*/
const U_sRAMPDATA  RampData_UMTSBand11_Set1 = 
{
   /* DC2DC data by BAND */
   { 7, 
     31 
   },
   {
      /* PA high mode */
      {  
         /* PA DAC info */
         { 1, 660, 0, 0},
         /* VGA DAC of PA high  */
         /* 32,   32,   31,   30,   29,   28,   27,   26,   25,   24 */
         {   0,    0,    0,    0,    0,    0,    0,    0,  276,   176 },

         /* VGA offset by subband */
         {
            /* max arfcn , pwr_offset */
            {    3487    ,     0      ,     0     },
            {    3493    ,     0      ,     0     },
            {    3498    ,     0      ,     0     },
            {    3504    ,     0      ,     0     },
            {    3510    ,     0      ,     0     },
            {    3515    ,     0      ,     0     },
            {    3520    ,     0      ,     0     },
            {    3526    ,     0      ,     0     },
            {    3531    ,     0      ,     0     },
            {    3536    ,     0      ,     0     },
            {    3541    ,     0      ,     0     },
            {    3547    ,     0      ,     0     },
            {    3552    ,     0      ,     0     },
            {    3557    ,     0      ,     0     },
            {    3562    ,     0      ,     0     },
         },
         /* VGA comp by temperature */
         { { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
         }
      },
      
      /* PA mid mode */
      {  
         /* PA DAC info */
         { 0, 580, 0, 0},
         /* VGA DAC of PA mid  */
         /* 32,   32,   31,   30,   29,   28,   27,   26,   25,   24 */
         {   0,    0,    0,    0,    0,    0,    0,    0,  242,   172 },

         /* VGA offset by subband */
         {
            /* max arfcn , pwr_offset */
            {    3487    ,     0      ,     0     },
            {    3493    ,     0      ,     0     },
            {    3498    ,     0      ,     0     },
            {    3504    ,     0      ,     0     },
            {    3510    ,     0      ,     0     },
            {    3515    ,     0      ,     0     },
            {    3520    ,     0      ,     0     },
            {    3526    ,     0      ,     0     },
            {    3531    ,     0      ,     0     },
            {    3536    ,     0      ,     0     },
            {    3541    ,     0      ,     0     },
            {    3547    ,     0      ,     0     },
            {    3552    ,     0      ,     0     },
            {    3557    ,     0      ,     0     },
            {    3562    ,     0      ,     0     },
         },
         /* VGA comp by temperature */
         { { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
         }
      },
      
      /* PA low DAC */
      {  
         /* PA DAC info */
         { 0, 520, 0, 0},
         /* VGA DAC of PA low  */
         /* 32,   32,   31,   30,   29,   28,   27,   26,   25,   24 */
         {   0,    0,    0,    0,    0,    0,    0,    0,  183,   173 },
         
         /* VGA offset by subband */
         {
            /* max arfcn , pwr_offset */
            {    3487    ,     0      ,     0     },
            {    3493    ,     0      ,     0     },
            {    3498    ,     0      ,     0     },
            {    3504    ,     0      ,     0     },
            {    3510    ,     0      ,     0     },
            {    3515    ,     0      ,     0     },
            {    3520    ,     0      ,     0     },
            {    3526    ,     0      ,     0     },
            {    3531    ,     0      ,     0     },
            {    3536    ,     0      ,     0     },
            {    3541    ,     0      ,     0     },
            {    3547    ,     0      ,     0     },
            {    3552    ,     0      ,     0     },
            {    3557    ,     0      ,     0     },
            {    3562    ,     0      ,     0     },
         },
         /* VGA comp by temperature */
         { { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
         }
      }     
   },
   /*-------------------------------------------------------------------------------------------*/
   /* hysteresis start and end idx */
   {
     { 10, 14 },   
     { 20, 24 },
   },
   /*-------------------------------------------------------------------------------------------*/
   /* VGA comp by power detector */
   { 
     /* pwr dt start threshold: dBm */
     16, 
     /* pwr dt used section */ 
     32,
     /* pwr dt dac */
     {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
      0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
     /* pwr dt value */
     {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
      0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },  
     /* pwr dt compensate by subband */
     {
        /* max arfcn , pwr_slope  , pwr_offset*/
        {    3487    ,     0      ,     0     },
        {    3493    ,     0      ,     0     },
        {    3498    ,     0      ,     0     },
        {    3504    ,     0      ,     0     },
        {    3510    ,     0      ,     0     },
        {    3515    ,     0      ,     0     },
        {    3520    ,     0      ,     0     },
        {    3526    ,     0      ,     0     },
        {    3531    ,     0      ,     0     },
        {    3536    ,     0      ,     0     },
        {    3541    ,     0      ,     0     },
        {    3547    ,     0      ,     0     },
        {    3552    ,     0      ,     0     },
        {    3557    ,     0      ,     0     },
        {    3562    ,     0      ,     0     },
     },
     /* pwr dt compensate by temperature */
     { { 0, 0 },
       { 0, 0 },
       { 0, 0 },
       { 0, 0 },
       { 0, 0 },
       { 0, 0 },
       { 0, 0 },
       { 0, 0 },
     }  
   },
   
};

/* BAND19...................................................................*/
const U_sRAMPDATA  RampData_UMTSBand19_Set1 = 
{
   /* DC2DC data by BAND */
   { 7, 
     31 
   },
   {
      /* PA high mode */
      {  
         /* PA DAC info */
         { 1, 660, 0, 0},
         /* VGA DAC of PA high  */
         /* 32,   32,   31,   30,   29,   28,   27,   26,   25,   24 */
         {   0,    0,    0,    0,    0,    0,    0,    0,  276,   176 },

         /* VGA offset by subband */
         {
            /* max arfcn , pwr_offset */
            {    312    ,     0      ,     0     },
            {    324    ,     0      ,     0     },
            {    337    ,     0      ,     0     },
            {    350    ,     0      ,     0     },
            {    363    ,     0      ,     0     },
            { UMTS_TABLE_END }
         },
         /* VGA comp by temperature */
         { { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
         }
      },
      
      /* PA mid mode */
      {  
         /* PA DAC info */
         { 0, 580, 0, 0},
         /* VGA DAC of PA mid  */
         /* 32,   32,   31,   30,   29,   28,   27,   26,   25,   24 */
         {   0,    0,    0,    0,    0,    0,    0,    0,  242,   172 },

         /* VGA offset by subband */
         {
            /* max arfcn , pwr_offset */
            {    312    ,     0      ,     0     },
            {    324    ,     0      ,     0     },
            {    337    ,     0      ,     0     },
            {    350    ,     0      ,     0     },
            {    363    ,     0      ,     0     },
            { UMTS_TABLE_END }
         },
         /* VGA comp by temperature */
         { { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
         }
      },
      
      /* PA low DAC */
      {  
         /* PA DAC info */
         { 0, 520, 0, 0},
         /* VGA DAC of PA low  */
         /* 32,   32,   31,   30,   29,   28,   27,   26,   25,   24 */
         {   0,    0,    0,    0,    0,    0,    0,    0,  183,   173 },
         
         /* VGA offset by subband */
         {
            /* max arfcn , pwr_offset */
            {    312    ,     0      ,     0     },
            {    324    ,     0      ,     0     },
            {    337    ,     0      ,     0     },
            {    350    ,     0      ,     0     },
            {    363    ,     0      ,     0     },
            { UMTS_TABLE_END }
         },
         /* VGA comp by temperature */
         { { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
           { 0, 0 },
         }
      }     
   },
   /*-------------------------------------------------------------------------------------------*/
   /* hysteresis start and end idx */
   {
     { 10, 14 },   
     { 20, 24 },
   },
   /*-------------------------------------------------------------------------------------------*/
   /* VGA comp by power detector */
   { 
     /* pwr dt start threshold: dBm */
     16, 
     /* pwr dt used section */ 
     32,
     /* pwr dt dac */
     {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
      0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
     /* pwr dt value */
     {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
      0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },  
     /* pwr dt compensate by subband */
     {
        /* max arfcn , pwr_slope  , pwr_offset*/
        {    312    ,     0      ,     0     },
        {    324    ,     0      ,     0     },
        {    337    ,     0      ,     0     },
        {    350    ,     0      ,     0     },
        {    363    ,     0      ,     0     },
        { UMTS_TABLE_END }
     },
     /* pwr dt compensate by temperature */
     { { 0, 0 },
       { 0, 0 },
       { 0, 0 },
       { 0, 0 },
       { 0, 0 },
       { 0, 0 },
       { 0, 0 },
       { 0, 0 },
     }  
   },
};

#if UL1CUSTOM_CALIBRATION_DATA_DRDI_ENABLE
const U_sRAMPDATA* const UMTS_RampData_Set1[] =
{
   M_UMTS_TX_RAMPDATA(UMTSBandNone,Set1),
   M_UMTS_TX_RAMPDATA(RX_BAND_INDICATOR_0_Set1,Set1),
   M_UMTS_TX_RAMPDATA(RX_BAND_INDICATOR_1_Set1,Set1),
   M_UMTS_TX_RAMPDATA(RX_BAND_INDICATOR_2_Set1,Set1),
   M_UMTS_TX_RAMPDATA(RX_BAND_INDICATOR_3_Set1,Set1),
   M_UMTS_TX_RAMPDATA(RX_BAND_INDICATOR_4_Set1,Set1)
};
#else
const U_sRAMPDATA* const UMTS_RampData_Set1[] =
{
   M_UMTS_TX_RAMPDATA_DEFAULT(UMTSBandNone),
   M_UMTS_TX_RAMPDATA_DEFAULT(RX_BAND_INDICATOR_0_Set1),
   M_UMTS_TX_RAMPDATA_DEFAULT(RX_BAND_INDICATOR_1_Set1),
   M_UMTS_TX_RAMPDATA_DEFAULT(RX_BAND_INDICATOR_2_Set1),
   M_UMTS_TX_RAMPDATA_DEFAULT(RX_BAND_INDICATOR_3_Set1),
   M_UMTS_TX_RAMPDATA_DEFAULT(RX_BAND_INDICATOR_4_Set1)
};
#endif

/* PA 8-level control (for MT6276, MT6573) */
const U_sPAOCTLVLSETTING  PaOctLevData_UMTSBandNone_Set1 =
{
   /* Available PA 8-level sections set by user */
     8
   ,
   /* Reserved byte */
     0
   ,
   /* PA phase compensation */
   {
     0x0,
     0x0,
     0x0
   },
   /* PMU OCT level control table */
   {
      {
          2, // PA Mode
          0, // Prf
          4, // DC2DC level
          1, // Vm0
          1, // Vm1
        490, // Vbias
        190 // PA gain
      },
      {
          1, // PA Mode
          6, // Prf
         14, // DC2DC level
          1, // Vm0
          0, // Vm1
        580, // Vbias
        296 // PA gain
      },
      {
          1, // PA Mode
         10, // Prf
         20, // DC2DC level
          1, // Vm0
          0, // Vm1
        580, // Vbias
        298 // PA gain
      },
      {
          0, // PA Mode
         15, // Prf
         32, // DC2DC level
          0, // Vm0
          0, // Vm1
        580, // Vbias
        642 // PA gain
      },
      {
          0, // PA Mode
         18, // Prf
         36, // DC2DC level
          0, // Vm0
          0, // Vm1
        660, // Vbias
        639 // PA gain
      },
      {
          0, // PA Mode
         20, // Prf
         46, // DC2DC level
          0, // Vm0
          0, // Vm1
        660, // Vbias
        648 // PA gain
      },
      {
          0, // PA Mode
         22, // Prf
         50, // DC2DC level
          0, // Vm0
          0, // Vm1
        660, // Vbias
        663 // PA gain
      },
      {
          0, // PA Mode
         24, // Prf
         58, // DC2DC level
          0, // Vm0
          0, // Vm1
        660, // Vbias
        680 // PA gain
      },
   }
};

/* BAND1...................................................................*/
const U_sPAOCTLVLSETTING  PaOctLevData_UMTSBand1_Set1 =
{
   /* Available PA 8-level sections set by user */
     8
   ,
   /* Reserved byte */
     0
   ,
   /* PA phase compensation */
   {
     0x0,
     0x0,
     0x0
   },
   /* PMU OCT level control table */
   {
      {
          2, // PA Mode
          0, // Prf
          2, // DC2DC level, 0.6V
          1, // Vm0
          1, // Vm1
        490, // Vbias
        190 // PA gain
      },
      {
          1, // PA Mode
          6, // Prf
          4, // DC2DC level, 0.7V
          1, // Vm0
          0, // Vm1
        580, // Vbias
        296 // PA gain
      },
      {
          1, // PA Mode
         10, // Prf
         12, // DC2DC level, 1.1V
          1, // Vm0
          0, // Vm1
        580, // Vbias
        298 // PA gain
      },
      {
          0, // PA Mode
         15, // Prf
         20, // DC2DC level, 1.5V
          0, // Vm0
          0, // Vm1
        580, // Vbias
        642 // PA gain
      },
      {
          0, // PA Mode
         18, // Prf
         28, // DC2DC level, 1.9V
          0, // Vm0
          0, // Vm1
        660, // Vbias
        639 // PA gain
      },
      {
          0, // PA Mode
         20, // Prf
         34, // DC2DC level, 2.2V
          0, // Vm0
          0, // Vm1
        660, // Vbias
        648 // PA gain
      },
      {
          0, // PA Mode
         22, // Prf
         42, // DC2DC level, 2.6V
          0, // Vm0
          0, // Vm1
        660, // Vbias
        663 // PA gain
      },
      {
          0, // PA Mode
         24, // Prf
         58, // DC2DC level, 3.4V
          0, // Vm0
          0, // Vm1
        660, // Vbias
        680 // PA gain
      },
   }
};

/* BAND2...................................................................*/
const U_sPAOCTLVLSETTING  PaOctLevData_UMTSBand2_Set1 =
{
   /* Available PA 8-level sections set by user */
     8
   ,
   /* Reserved byte */
     0
   ,
   /* PA phase compensation */
   {
     0x0,
     0x0,
     0x0
   },
   /* PMU OCT level control table */
   {
      {
          2, // PA Mode
          0, // Prf
          2, // DC2DC level
          1, // Vm0
          1, // Vm1
        490, // Vbias
        254 // PA gain
      },
      {
          1, // PA Mode
          6, // Prf
          6, // DC2DC level
          1, // Vm0
          0, // Vm1
        580, // Vbias
        375 // PA gain
      },
      {
          1, // PA Mode
         11, // Prf
         12, // DC2DC level
          1, // Vm0
          0, // Vm1
        580, // Vbias
        390 // PA gain
      },
      {
          0, // PA Mode
         15, // Prf
         20, // DC2DC level
          0, // Vm0
          0, // Vm1
        580, // Vbias
        728 // PA gain
      },
      {
          0, // PA Mode
         18, // Prf
         28, // DC2DC level
          0, // Vm0
          0, // Vm1
        660, // Vbias
        735 // PA gain
      },
      {
          0, // PA Mode
         20, // Prf
         34, // DC2DC level
          0, // Vm0
          0, // Vm1
        660, // Vbias
        747 // PA gain
      },
      {
          0, // PA Mode
         22, // Prf
         42, // DC2DC level
          0, // Vm0
          0, // Vm1
        660, // Vbias
        766 // PA gain
      },
      {
          0, // PA Mode
         24, // Prf
         58, // DC2DC level
          0, // Vm0
          0, // Vm1
        660, // Vbias
        786 // PA gain
      },
   }
};

/* BAND3...................................................................*/
const U_sPAOCTLVLSETTING  PaOctLevData_UMTSBand3_Set1 =
{
   /* Available PA 8-level sections set by user */
     8
   ,
   /* Reserved byte */
     0
   ,
   /* PA phase compensation */
   {
     0x0,
     0x0,
     0x0
   },
   /* PMU OCT level control table */
   {
      {
          2, // PA Mode
          0, // Prf
          4, // DC2DC level
          1, // Vm0
          1, // Vm1
        490, // Vbias
        172 // PA gain
      },
      {
          2, // PA Mode
          4, // Prf
         14, // DC2DC level
          1, // Vm0
          1, // Vm1
        580, // Vbias
        227 // PA gain
      },
      {
          1, // PA Mode
          4, // Prf
         20, // DC2DC level
          1, // Vm0
          0, // Vm1
        580, // Vbias
        403 // PA gain
      },
      {
          1, // PA Mode
          8, // Prf
         32, // DC2DC level
          1, // Vm0
          0, // Vm1
        580, // Vbias
        407 // PA gain
      },
      {
          1, // PA Mode
         10, // Prf
         36, // DC2DC level
          1, // Vm0
          0, // Vm1
        660, // Vbias
        417 // PA gain
      },
      {
          1, // PA Mode
         12, // Prf
         46, // DC2DC level
          1, // Vm0
          0, // Vm1
        660, // Vbias
        418 // PA gain
      },
      {
          0, // PA Mode
         12, // Prf
         50, // DC2DC level
          0, // Vm0
          0, // Vm1
        660, // Vbias
        708 // PA gain
      },
      {
          0, // PA Mode
         24, // Prf
         58, // DC2DC level
          0, // Vm0
          0, // Vm1
        660, // Vbias
        725 // PA gain
      },
   }
};

/* BAND4...................................................................*/
const U_sPAOCTLVLSETTING  PaOctLevData_UMTSBand4_Set1 =
{
   /* Available PA 8-level sections set by user */
     8
   ,
   /* Reserved byte */
     0
   ,
   /* PA phase compensation */
   {
     0x0,
     0x0,
     0x0
   },
   /* PMU OCT level control table */
   {
      {
          2, // PA Mode
          0, // Prf
          4, // DC2DC level
          1, // Vm0
          1, // Vm1
        490, // Vbias
        172 // PA gain
      },
      {
          2, // PA Mode
          4, // Prf
         14, // DC2DC level
          1, // Vm0
          1, // Vm1
        580, // Vbias
        227 // PA gain
      },
      {
          1, // PA Mode
          4, // Prf
         20, // DC2DC level
          1, // Vm0
          0, // Vm1
        580, // Vbias
        403 // PA gain
      },
      {
          1, // PA Mode
          8, // Prf
         32, // DC2DC level
          1, // Vm0
          0, // Vm1
        580, // Vbias
        407 // PA gain
      },
      {
          1, // PA Mode
         10, // Prf
         36, // DC2DC level
          1, // Vm0
          0, // Vm1
        660, // Vbias
        417 // PA gain
      },
      {
          1, // PA Mode
         12, // Prf
         46, // DC2DC level
          1, // Vm0
          0, // Vm1
        660, // Vbias
        418 // PA gain
      },
      {
          0, // PA Mode
         12, // Prf
         50, // DC2DC level
          0, // Vm0
          0, // Vm1
        660, // Vbias
        708 // PA gain
      },
      {
          0, // PA Mode
         24, // Prf
         58, // DC2DC level
          0, // Vm0
          0, // Vm1
        660, // Vbias
        725 // PA gain
      },
   }
};

/* BAND5...................................................................*/
const U_sPAOCTLVLSETTING  PaOctLevData_UMTSBand5_Set1 =
{
   /* Available PA 8-level sections set by user */
     8
   ,
   /* Reserved byte */
     0
   ,
   /* PA phase compensation */
   {
     0x0,
     0x0,
     0x0
   },
   /* PMU OCT level control table */
   {
      {
          2, // PA Mode
          0, // Prf
          2, // DC2DC level
          1, // Vm0
          1, // Vm1
        490, // Vbias
        296 // PA gain
      },
      {
          1, // PA Mode
          6, // Prf
         12, // DC2DC level
          1, // Vm0
          0, // Vm1
        580, // Vbias
        399 // PA gain
      },
      {
          1, // PA Mode
         11, // Prf
         18, // DC2DC level
          1, // Vm0
          0, // Vm1
        580, // Vbias
        407 // PA gain
      },
      {
          0, // PA Mode
         15, // Prf
         20, // DC2DC level
          0, // Vm0
          0, // Vm1
        580, // Vbias
        724 // PA gain
      },
      {
          0, // PA Mode
         18, // Prf
         28, // DC2DC level
          0, // Vm0
          0, // Vm1
        660, // Vbias
        727 // PA gain
      },
      {
          0, // PA Mode
         20, // Prf
         34, // DC2DC level
          0, // Vm0
          0, // Vm1
        660, // Vbias
        742 // PA gain
      },
      {
          0, // PA Mode
         22, // Prf
         42, // DC2DC level
          0, // Vm0
          0, // Vm1
        660, // Vbias
        759 // PA gain
      },
      {
          0, // PA Mode
         24, // Prf
         58, // DC2DC level
          0, // Vm0
          0, // Vm1
        660, // Vbias
        774 // PA gain
      },
   }
};

/* BAND6...................................................................*/
const U_sPAOCTLVLSETTING  PaOctLevData_UMTSBand6_Set1 =
{
   /* Available PA 8-level sections set by user */
     8
   ,
   /* Reserved byte */
     0
   ,
   /* PA phase compensation */
   {
     0x0,
     0x0,
     0x0
   },
   /* PMU OCT level control table */
   {
      {
          2, // PA Mode
          0, // Prf
          4, // DC2DC level
          1, // Vm0
          1, // Vm1
        490, // Vbias
        296 // PA gain
      },
      {
          1, // PA Mode
          6, // Prf
         14, // DC2DC level
          1, // Vm0
          0, // Vm1
        580, // Vbias
        399 // PA gain
      },
      {
          1, // PA Mode
         11, // Prf
         20, // DC2DC level
          1, // Vm0
          0, // Vm1
        580, // Vbias
        407 // PA gain
      },
      {
          0, // PA Mode
         15, // Prf
         32, // DC2DC level
          0, // Vm0
          0, // Vm1
        580, // Vbias
        724 // PA gain
      },
      {
          0, // PA Mode
         18, // Prf
         36, // DC2DC level
          0, // Vm0
          0, // Vm1
        660, // Vbias
        727 // PA gain
      },
      {
          0, // PA Mode
         20, // Prf
         46, // DC2DC level
          0, // Vm0
          0, // Vm1
        660, // Vbias
        742 // PA gain
      },
      {
          0, // PA Mode
         22, // Prf
         50, // DC2DC level
          0, // Vm0
          0, // Vm1
        660, // Vbias
        759 // PA gain
      },
      {
          0, // PA Mode
         24, // Prf
         58, // DC2DC level
          0, // Vm0
          0, // Vm1
        660, // Vbias
        774 // PA gain
      },
   }
};

/* BAND7...................................................................*/
const U_sPAOCTLVLSETTING  PaOctLevData_UMTSBand7_Set1 =
{
   /* Available PA 8-level sections set by user */
     8
   ,
   /* Reserved byte */
     0
   ,
   /* PA phase compensation */
   {
     0x0,
     0x0,
     0x0
   },
   /* PMU OCT level control table */
   {
      {
          2, // PA Mode
          0, // Prf
          4, // DC2DC level
          1, // Vm0
          1, // Vm1
        490, // Vbias
        296 // PA gain
      },
      {
          1, // PA Mode
          6, // Prf
         14, // DC2DC level
          1, // Vm0
          0, // Vm1
        580, // Vbias
        399 // PA gain
      },
      {
          1, // PA Mode
         11, // Prf
         20, // DC2DC level
          1, // Vm0
          0, // Vm1
        580, // Vbias
        407 // PA gain
      },
      {
          0, // PA Mode
         15, // Prf
         32, // DC2DC level
          0, // Vm0
          0, // Vm1
        580, // Vbias
        724 // PA gain
      },
      {
          0, // PA Mode
         18, // Prf
         36, // DC2DC level
          0, // Vm0
          0, // Vm1
        660, // Vbias
        727 // PA gain
      },
      {
          0, // PA Mode
         20, // Prf
         46, // DC2DC level
          0, // Vm0
          0, // Vm1
        660, // Vbias
        742 // PA gain
      },
      {
          0, // PA Mode
         22, // Prf
         50, // DC2DC level
          0, // Vm0
          0, // Vm1
        660, // Vbias
        759 // PA gain
      },
      {
          0, // PA Mode
         24, // Prf
         58, // DC2DC level
          0, // Vm0
          0, // Vm1
        660, // Vbias
        774 // PA gain
      },
   }
};

/* BAND8...................................................................*/
const U_sPAOCTLVLSETTING  PaOctLevData_UMTSBand8_Set1 =
{
   /* Available PA 8-level sections set by user */
     8
   ,
   /* Reserved byte */
     0
   ,
   /* PA phase compensation */
   {
     0x0,
     0x0,
     0x0
   },
   /* PMU OCT level control table */
   {
      {
          2, // PA Mode
          0, // Prf
          2, // DC2DC level
          1, // Vm0
          1, // Vm1
        490, // Vbias
        221 // PA gain
      },
      {
          1, // PA Mode
          6, // Prf
          6, // DC2DC level
          1, // Vm0
          0, // Vm1
        580, // Vbias
        427 // PA gain
      },
      {
          1, // PA Mode
         10, // Prf
         12, // DC2DC level
          1, // Vm0
          0, // Vm1
        580, // Vbias
        432 // PA gain
      },
      {
          0, // PA Mode
         15, // Prf
         20, // DC2DC level
          0, // Vm0
          0, // Vm1
        580, // Vbias
        701 // PA gain
      },
      {
          0, // PA Mode
         18, // Prf
         28, // DC2DC level
          0, // Vm0
          0, // Vm1
        660, // Vbias
        720 // PA gain
      },
      {
          0, // PA Mode
         20, // Prf
         34, // DC2DC level
          0, // Vm0
          0, // Vm1
        660, // Vbias
        731 // PA gain
      },
      {
          0, // PA Mode
         22, // Prf
         42, // DC2DC level
          0, // Vm0
          0, // Vm1
        660, // Vbias
        734 // PA gain
      },
      {
          0, // PA Mode
         24, // Prf
         58, // DC2DC level
          0, // Vm0
          0, // Vm1
        660, // Vbias
        740 // PA gain
      },
   }
};

/* BAND9...................................................................*/
const U_sPAOCTLVLSETTING  PaOctLevData_UMTSBand9_Set1 =
{
   /* Available PA 8-level sections set by user */
     8
   ,
   /* Reserved byte */
     0
   ,
   /* PA phase compensation */
   {
     0x0,
     0x0,
     0x0
   },
   /* PMU OCT level control table */
   {
      {
          2, // PA Mode
          0, // Prf
          4, // DC2DC level
          1, // Vm0
          1, // Vm1
        490, // Vbias
        172 // PA gain
      },
      {
          2, // PA Mode
          4, // Prf
         14, // DC2DC level
          1, // Vm0
          1, // Vm1
        580, // Vbias
        227 // PA gain
      },
      {
          1, // PA Mode
          4, // Prf
         20, // DC2DC level
          1, // Vm0
          0, // Vm1
        580, // Vbias
        403 // PA gain
      },
      {
          1, // PA Mode
          8, // Prf
         32, // DC2DC level
          1, // Vm0
          0, // Vm1
        580, // Vbias
        407 // PA gain
      },
      {
          1, // PA Mode
         10, // Prf
         36, // DC2DC level
          1, // Vm0
          0, // Vm1
        660, // Vbias
        417 // PA gain
      },
      {
          1, // PA Mode
         12, // Prf
         46, // DC2DC level
          1, // Vm0
          0, // Vm1
        660, // Vbias
        418 // PA gain
      },
      {
          0, // PA Mode
         12, // Prf
         50, // DC2DC level
          0, // Vm0
          0, // Vm1
        660, // Vbias
        708 // PA gain
      },
      {
          0, // PA Mode
         24, // Prf
         58, // DC2DC level
          0, // Vm0
          0, // Vm1
        660, // Vbias
        725 // PA gain
      },
   }
};

/* BAND10...................................................................*/
const U_sPAOCTLVLSETTING  PaOctLevData_UMTSBand10_Set1 =
{
   /* Available PA 8-level sections set by user */
     8
   ,
   /* Reserved byte */
     0
   ,
   /* PA phase compensation */
   {
     0x0,
     0x0,
     0x0
   },
   /* PMU OCT level control table */
   {
      {
          2, // PA Mode
          0, // Prf
          4, // DC2DC level
          1, // Vm0
          1, // Vm1
        490, // Vbias
        172 // PA gain
      },
      {
          2, // PA Mode
          4, // Prf
         14, // DC2DC level
          1, // Vm0
          1, // Vm1
        580, // Vbias
        227 // PA gain
      },
      {
          1, // PA Mode
          4, // Prf
         20, // DC2DC level
          1, // Vm0
          0, // Vm1
        580, // Vbias
        403 // PA gain
      },
      {
          1, // PA Mode
          8, // Prf
         32, // DC2DC level
          1, // Vm0
          0, // Vm1
        580, // Vbias
        407 // PA gain
      },
      {
          1, // PA Mode
         10, // Prf
         36, // DC2DC level
          1, // Vm0
          0, // Vm1
        660, // Vbias
        417 // PA gain
      },
      {
          1, // PA Mode
         12, // Prf
         46, // DC2DC level
          1, // Vm0
          0, // Vm1
        660, // Vbias
        418 // PA gain
      },
      {
          0, // PA Mode
         12, // Prf
         50, // DC2DC level
          0, // Vm0
          0, // Vm1
        660, // Vbias
        708 // PA gain
      },
      {
          0, // PA Mode
         24, // Prf
         58, // DC2DC level
          0, // Vm0
          0, // Vm1
        660, // Vbias
        725 // PA gain
      },
   }
};

/* BAND11...................................................................*/
const U_sPAOCTLVLSETTING  PaOctLevData_UMTSBand11_Set1 =
{
   /* Available PA 8-level sections set by user */
     8
   ,
   /* Reserved byte */
     0
   ,
   /* PA phase compensation */
   {
     0x0,
     0x0,
     0x0
   },
   /* PMU OCT level control table */
   {
      {
          2, // PA Mode
          0, // Prf
          4, // DC2DC level
          1, // Vm0
          1, // Vm1
        490, // Vbias
        172 // PA gain
      },
      {
          2, // PA Mode
          4, // Prf
         14, // DC2DC level
          1, // Vm0
          1, // Vm1
        580, // Vbias
        227 // PA gain
      },
      {
          1, // PA Mode
          4, // Prf
         20, // DC2DC level
          1, // Vm0
          0, // Vm1
        580, // Vbias
        403 // PA gain
      },
      {
          1, // PA Mode
          8, // Prf
         32, // DC2DC level
          1, // Vm0
          0, // Vm1
        580, // Vbias
        407 // PA gain
      },
      {
          1, // PA Mode
         10, // Prf
         36, // DC2DC level
          1, // Vm0
          0, // Vm1
        660, // Vbias
        417 // PA gain
      },
      {
          1, // PA Mode
         12, // Prf
         46, // DC2DC level
          1, // Vm0
          0, // Vm1
        660, // Vbias
        418 // PA gain
      },
      {
          0, // PA Mode
         12, // Prf
         50, // DC2DC level
          0, // Vm0
          0, // Vm1
        660, // Vbias
        708 // PA gain
      },
      {
          0, // PA Mode
         24, // Prf
         58, // DC2DC level
          0, // Vm0
          0, // Vm1
        660, // Vbias
        725 // PA gain
      },
   }
};

/* BAND19...................................................................*/
const U_sPAOCTLVLSETTING  PaOctLevData_UMTSBand19_Set1 =
{
   /* Available PA 8-level sections set by user */
     8
   ,
   /* Reserved byte */
     0
   ,
   /* PA phase compensation */
   {
     0x0,
     0x0,
     0x0
   },
   /* PMU OCT level control table */
   {
      {
          2, // PA Mode
          0, // Prf
          4, // DC2DC level
          1, // Vm0
          1, // Vm1
        490, // Vbias
        172 // PA gain
      },
      {
          2, // PA Mode
          4, // Prf
         14, // DC2DC level
          1, // Vm0
          1, // Vm1
        580, // Vbias
        227 // PA gain
      },
      {
          1, // PA Mode
          4, // Prf
         20, // DC2DC level
          1, // Vm0
          0, // Vm1
        580, // Vbias
        403 // PA gain
      },
      {
          1, // PA Mode
          8, // Prf
         32, // DC2DC level
          1, // Vm0
          0, // Vm1
        580, // Vbias
        407 // PA gain
      },
      {
          1, // PA Mode
         10, // Prf
         36, // DC2DC level
          1, // Vm0
          0, // Vm1
        660, // Vbias
        417 // PA gain
      },
      {
          1, // PA Mode
         12, // Prf
         46, // DC2DC level
          1, // Vm0
          0, // Vm1
        660, // Vbias
        418 // PA gain
      },
      {
          0, // PA Mode
         12, // Prf
         50, // DC2DC level
          0, // Vm0
          0, // Vm1
        660, // Vbias
        708 // PA gain
      },
      {
          0, // PA Mode
         24, // Prf
         58, // DC2DC level
          0, // Vm0
          0, // Vm1
        660, // Vbias
        725 // PA gain
      },
   }
};


/* PA 8-level control */
#if UL1CUSTOM_CALIBRATION_DATA_DRDI_ENABLE
const U_sPAOCTLVLSETTING* const U_PA_OCTLEV_TABLE_Set1[] =
{
   M_UMTS_TX_PA_OCTLEV_DATA(UMTSBandNone,Set1),
   M_UMTS_TX_PA_OCTLEV_DATA(RX_BAND_INDICATOR_0_Set1,Set1),
   M_UMTS_TX_PA_OCTLEV_DATA(RX_BAND_INDICATOR_1_Set1,Set1),
   M_UMTS_TX_PA_OCTLEV_DATA(RX_BAND_INDICATOR_2_Set1,Set1),
   M_UMTS_TX_PA_OCTLEV_DATA(RX_BAND_INDICATOR_3_Set1,Set1),
   M_UMTS_TX_PA_OCTLEV_DATA(RX_BAND_INDICATOR_4_Set1,Set1)
};
#else
const U_sPAOCTLVLSETTING* const U_PA_OCTLEV_TABLE_Set1[] =
{
   M_UMTS_TX_PA_OCTLEV_DATA_DEFAULT(UMTSBandNone),
   M_UMTS_TX_PA_OCTLEV_DATA_DEFAULT(RX_BAND_INDICATOR_0_Set1),
   M_UMTS_TX_PA_OCTLEV_DATA_DEFAULT(RX_BAND_INDICATOR_1_Set1),
   M_UMTS_TX_PA_OCTLEV_DATA_DEFAULT(RX_BAND_INDICATOR_2_Set1),
   M_UMTS_TX_PA_OCTLEV_DATA_DEFAULT(RX_BAND_INDICATOR_3_Set1),
   M_UMTS_TX_PA_OCTLEV_DATA_DEFAULT(RX_BAND_INDICATOR_4_Set1)
};
#endif

/*===============================================================================================*/
const U_sPADRIFTSETTING  PaDriftCompData_UMTSBandNone_Set1 =
{
   //pa_drift_comp_w_table
   {    /* (Slot0, Slot1) */
      {  0, 0 } , //  L=>M
      {  0, 0 } , //  L=>H
      {  0, 0 } , //  M=>L
      {  0, 0 } , //  M=>H
      {  0, 0 } , //  H=>L
      {  0, 0 } , //  H=>M
   },

   //pa_drift_comp_h_table
   {    /* (Slot00, Slot01, slot10, slot11) */
      {  0, 0, 0, 0 } , //  L=>M
      {  0, 0, 0, 0 } , //  L=>H
      {  0, 0, 0, 0 } , //  M=>L
      {  0, 0, 0, 0 } , //  M=>H
      {  0, 0, 0, 0 } , //  H=>L
      {  0, 0, 0, 0 } , //  H=>M
  }
};

const U_sPADRIFTSETTING  PaDriftCompData_UMTSBand1_Set1 =
{
   //pa_drift_comp_w_table
   {    /* (Slot0, Slot1) */
      {  0, 0 } , //  L=>M
      {  0, 0 } , //  L=>H
      {  0, 0 } , //  M=>L
      {  0, 0 } , //  M=>H
      {  0, 0 } , //  H=>L
      {  0, 0 } , //  H=>M
   },

   //pa_drift_comp_h_table
   {    /* (Slot00, Slot01, slot10, slot11) */
      {  0, 0, 0, 0 } , //  L=>M
      {  0, 0, 0, 0 } , //  L=>H
      {  0, 0, 0, 0 } , //  M=>L
      {  0, 0, 0, 0 } , //  M=>H
      {  0, 0, 0, 0 } , //  H=>L
      {  0, 0, 0, 0 } , //  H=>M
  }
};

const U_sPADRIFTSETTING  PaDriftCompData_UMTSBand2_Set1 =
{
   //pa_drift_comp_w_table
   {    /* (Slot0, Slot1) */
      {  0, 0 } , //  L=>M
      {  0, 0 } , //  L=>H
      {  0, 0 } , //  M=>L
      {  0, 0 } , //  M=>H
      {  0, 0 } , //  H=>L
      {  0, 0 } , //  H=>M
   },

   //pa_drift_comp_h_table
   {    /* (Slot00, Slot01, slot10, slot11) */
      {  0, 0, 0, 0 } , //  L=>M
      {  0, 0, 0, 0 } , //  L=>H
      {  0, 0, 0, 0 } , //  M=>L
      {  0, 0, 0, 0 } , //  M=>H
      {  0, 0, 0, 0 } , //  H=>L
      {  0, 0, 0, 0 } , //  H=>M
  }
};

const U_sPADRIFTSETTING  PaDriftCompData_UMTSBand3_Set1 =
{
   //pa_drift_comp_w_table
   {    /* (Slot0, Slot1) */
      {  0, 0 } , //  L=>M
      {  0, 0 } , //  L=>H
      {  0, 0 } , //  M=>L
      {  0, 0 } , //  M=>H
      {  0, 0 } , //  H=>L
      {  0, 0 } , //  H=>M
   },

   //pa_drift_comp_h_table
   {    /* (Slot00, Slot01, slot10, slot11) */
      {  0, 0, 0, 0 } , //  L=>M
      {  0, 0, 0, 0 } , //  L=>H
      {  0, 0, 0, 0 } , //  M=>L
      {  0, 0, 0, 0 } , //  M=>H
      {  0, 0, 0, 0 } , //  H=>L
      {  0, 0, 0, 0 } , //  H=>M
  }
};

const U_sPADRIFTSETTING  PaDriftCompData_UMTSBand4_Set1 =
{
   //pa_drift_comp_w_table
   {    /* (Slot0, Slot1) */
      {  0, 0 } , //  L=>M
      {  0, 0 } , //  L=>H
      {  0, 0 } , //  M=>L
      {  0, 0 } , //  M=>H
      {  0, 0 } , //  H=>L
      {  0, 0 } , //  H=>M
   },

   //pa_drift_comp_h_table
   {    /* (Slot00, Slot01, slot10, slot11) */
      {  0, 0, 0, 0 } , //  L=>M
      {  0, 0, 0, 0 } , //  L=>H
      {  0, 0, 0, 0 } , //  M=>L
      {  0, 0, 0, 0 } , //  M=>H
      {  0, 0, 0, 0 } , //  H=>L
      {  0, 0, 0, 0 } , //  H=>M
  }
};

const U_sPADRIFTSETTING  PaDriftCompData_UMTSBand5_Set1 =
{
   //pa_drift_comp_w_table
   {    /* (Slot0, Slot1) */
      {  0, 0 } , //  L=>M
      {  0, 0 } , //  L=>H
      {  0, 0 } , //  M=>L
      {  0, 0 } , //  M=>H
      {  0, 0 } , //  H=>L
      {  0, 0 } , //  H=>M
   },

   //pa_drift_comp_h_table
   {    /* (Slot00, Slot01, slot10, slot11) */
      {  0, 0, 0, 0 } , //  L=>M
      {  0, 0, 0, 0 } , //  L=>H
      {  0, 0, 0, 0 } , //  M=>L
      {  0, 0, 0, 0 } , //  M=>H
      {  0, 0, 0, 0 } , //  H=>L
      {  0, 0, 0, 0 } , //  H=>M
  }
};

const U_sPADRIFTSETTING  PaDriftCompData_UMTSBand6_Set1 =
{
   //pa_drift_comp_w_table
   {    /* (Slot0, Slot1) */
      {  0, 0 } , //  L=>M
      {  0, 0 } , //  L=>H
      {  0, 0 } , //  M=>L
      {  0, 0 } , //  M=>H
      {  0, 0 } , //  H=>L
      {  0, 0 } , //  H=>M
   },

   //pa_drift_comp_h_table
   {    /* (Slot00, Slot01, slot10, slot11) */
      {  0, 0, 0, 0 } , //  L=>M
      {  0, 0, 0, 0 } , //  L=>H
      {  0, 0, 0, 0 } , //  M=>L
      {  0, 0, 0, 0 } , //  M=>H
      {  0, 0, 0, 0 } , //  H=>L
      {  0, 0, 0, 0 } , //  H=>M
  }
};

const U_sPADRIFTSETTING  PaDriftCompData_UMTSBand7_Set1 =
{
   //pa_drift_comp_w_table
   {    /* (Slot0, Slot1) */
      {  0, 0 } , //  L=>M
      {  0, 0 } , //  L=>H
      {  0, 0 } , //  M=>L
      {  0, 0 } , //  M=>H
      {  0, 0 } , //  H=>L
      {  0, 0 } , //  H=>M
   },

   //pa_drift_comp_h_table
   {    /* (Slot00, Slot01, slot10, slot11) */
      {  0, 0, 0, 0 } , //  L=>M
      {  0, 0, 0, 0 } , //  L=>H
      {  0, 0, 0, 0 } , //  M=>L
      {  0, 0, 0, 0 } , //  M=>H
      {  0, 0, 0, 0 } , //  H=>L
      {  0, 0, 0, 0 } , //  H=>M
  }
};

const U_sPADRIFTSETTING  PaDriftCompData_UMTSBand8_Set1 =
{
   //pa_drift_comp_w_table
   {    /* (Slot0, Slot1) */
      {  0, 0 } , //  L=>M
      {  0, 0 } , //  L=>H
      {  0, 0 } , //  M=>L
      {  0, 0 } , //  M=>H
      {  0, 0 } , //  H=>L
      {  0, 0 } , //  H=>M
   },

   //pa_drift_comp_h_table
   {    /* (Slot00, Slot01, slot10, slot11) */
      {  0, 0, 0, 0 } , //  L=>M
      {  0, 0, 0, 0 } , //  L=>H
      {  0, 0, 0, 0 } , //  M=>L
      {  0, 0, 0, 0 } , //  M=>H
      {  0, 0, 0, 0 } , //  H=>L
      {  0, 0, 0, 0 } , //  H=>M
  }
};

const U_sPADRIFTSETTING  PaDriftCompData_UMTSBand9_Set1 =
{
   //pa_drift_comp_w_table
   {    /* (Slot0, Slot1) */
      {  0, 0 } , //  L=>M
      {  0, 0 } , //  L=>H
      {  0, 0 } , //  M=>L
      {  0, 0 } , //  M=>H
      {  0, 0 } , //  H=>L
      {  0, 0 } , //  H=>M
   },

   //pa_drift_comp_h_table
   {    /* (Slot00, Slot01, slot10, slot11) */
      {  0, 0, 0, 0 } , //  L=>M
      {  0, 0, 0, 0 } , //  L=>H
      {  0, 0, 0, 0 } , //  M=>L
      {  0, 0, 0, 0 } , //  M=>H
      {  0, 0, 0, 0 } , //  H=>L
      {  0, 0, 0, 0 } , //  H=>M
  }
};

const U_sPADRIFTSETTING  PaDriftCompData_UMTSBand10_Set1 =
{
   //pa_drift_comp_w_table
   {    /* (Slot0, Slot1) */
      {  0, 0 } , //  L=>M
      {  0, 0 } , //  L=>H
      {  0, 0 } , //  M=>L
      {  0, 0 } , //  M=>H
      {  0, 0 } , //  H=>L
      {  0, 0 } , //  H=>M
   },

   //pa_drift_comp_h_table
   {    /* (Slot00, Slot01, slot10, slot11) */
      {  0, 0, 0, 0 } , //  L=>M
      {  0, 0, 0, 0 } , //  L=>H
      {  0, 0, 0, 0 } , //  M=>L
      {  0, 0, 0, 0 } , //  M=>H
      {  0, 0, 0, 0 } , //  H=>L
      {  0, 0, 0, 0 } , //  H=>M
  }
};

const U_sPADRIFTSETTING  PaDriftCompData_UMTSBand11_Set1 =
{
   //pa_drift_comp_w_table
   {    /* (Slot0, Slot1) */
      {  0, 0 } , //  L=>M
      {  0, 0 } , //  L=>H
      {  0, 0 } , //  M=>L
      {  0, 0 } , //  M=>H
      {  0, 0 } , //  H=>L
      {  0, 0 } , //  H=>M
   },

   //pa_drift_comp_h_table
   {    /* (Slot00, Slot01, slot10, slot11) */
      {  0, 0, 0, 0 } , //  L=>M
      {  0, 0, 0, 0 } , //  L=>H
      {  0, 0, 0, 0 } , //  M=>L
      {  0, 0, 0, 0 } , //  M=>H
      {  0, 0, 0, 0 } , //  H=>L
      {  0, 0, 0, 0 } , //  H=>M
  }
};

const U_sPADRIFTSETTING  PaDriftCompData_UMTSBand19_Set1 =
{
   //pa_drift_comp_w_table
   {    /* (Slot0, Slot1) */
      {  0, 0 } , //  L=>M
      {  0, 0 } , //  L=>H
      {  0, 0 } , //  M=>L
      {  0, 0 } , //  M=>H
      {  0, 0 } , //  H=>L
      {  0, 0 } , //  H=>M
   },

   //pa_drift_comp_h_table
   {    /* (Slot00, Slot01, slot10, slot11) */
      {  0, 0, 0, 0 } , //  L=>M
      {  0, 0, 0, 0 } , //  L=>H
      {  0, 0, 0, 0 } , //  M=>L
      {  0, 0, 0, 0 } , //  M=>H
      {  0, 0, 0, 0 } , //  H=>L
      {  0, 0, 0, 0 } , //  H=>M
  }
};

#if UL1CUSTOM_CALIBRATION_DATA_DRDI_ENABLE
const U_sPADRIFTSETTING* const U_PA_DRIFT_TABLE_Set1[] =
{
   M_UMTS_TX_PA_DRIFT_COMP_DATA(UMTSBandNone,Set1),
   M_UMTS_TX_PA_DRIFT_COMP_DATA(RX_BAND_INDICATOR_0_Set1,Set1),
   M_UMTS_TX_PA_DRIFT_COMP_DATA(RX_BAND_INDICATOR_1_Set1,Set1),
   M_UMTS_TX_PA_DRIFT_COMP_DATA(RX_BAND_INDICATOR_2_Set1,Set1),
   M_UMTS_TX_PA_DRIFT_COMP_DATA(RX_BAND_INDICATOR_3_Set1,Set1),
   M_UMTS_TX_PA_DRIFT_COMP_DATA(RX_BAND_INDICATOR_4_Set1,Set1)
};
#else
const U_sPADRIFTSETTING* const U_PA_DRIFT_TABLE_Set1[] =
{
   M_UMTS_TX_PA_DRIFT_COMP_DATA_DEFAULT(UMTSBandNone),
   M_UMTS_TX_PA_DRIFT_COMP_DATA_DEFAULT(RX_BAND_INDICATOR_0_Set1),
   M_UMTS_TX_PA_DRIFT_COMP_DATA_DEFAULT(RX_BAND_INDICATOR_1_Set1),
   M_UMTS_TX_PA_DRIFT_COMP_DATA_DEFAULT(RX_BAND_INDICATOR_2_Set1),
   M_UMTS_TX_PA_DRIFT_COMP_DATA_DEFAULT(RX_BAND_INDICATOR_3_Set1),
   M_UMTS_TX_PA_DRIFT_COMP_DATA_DEFAULT(RX_BAND_INDICATOR_4_Set1)
};
#endif

const U_sPARACHTMCOMPDATA RACH_temperature_compensation_UMTSBandNone_Set1 =
{
  {
    {
      {
        { -64, 0 } ,
        { -64, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
      }
    },
   {  
     {
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
     }
   },
   {  
     {
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
      }
    }
  }
};

const U_sPARACHTMCOMPDATA RACH_temperature_compensation_UMTSBand1_Set1 =
{
  {
    {
      {
        { -64, 0 } ,
        { -64, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
      }
    },
   {  
     {
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
     }
   },
   {  
     {
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
      }
    }
  }
};

const U_sPARACHTMCOMPDATA RACH_temperature_compensation_UMTSBand2_Set1 =
{
  {
    {
      {
        { -64, 0 } ,
        { -64, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
      }
    },
   {  
     {
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
     }
   },
   {  
     {
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
      }
    }
  }
};

const U_sPARACHTMCOMPDATA RACH_temperature_compensation_UMTSBand3_Set1 =
{
  {
    {
      {
        { -64, 0 } ,
        { -64, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
      }
    },
   {  
     {
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
     }
   },
   {  
     {
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
      }
    }
  }
};

const U_sPARACHTMCOMPDATA RACH_temperature_compensation_UMTSBand4_Set1 =
{
  {
    {
      {
        { -64, 0 } ,
        { -64, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
      }
    },
   {  
     {
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
     }
   },
   {  
     {
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
      }
    }
  }
};

const U_sPARACHTMCOMPDATA RACH_temperature_compensation_UMTSBand5_Set1 =
{
  {
    {
      {
        { -64, 0 } ,
        { -64, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
      }
    },
   {  
     {
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
     }
   },
   {  
     {
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
      }
    }
  }
};

const U_sPARACHTMCOMPDATA RACH_temperature_compensation_UMTSBand6_Set1 =
{
  {
    {
      {
        { -64, 0 } ,
        { -64, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
      }
    },
   {  
     {
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
     }
   },
   {  
     {
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
      }
    }
  }
};

const U_sPARACHTMCOMPDATA RACH_temperature_compensation_UMTSBand7_Set1 =
{
  {
    {
      {
        { -64, 0 } ,
        { -64, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
      }
    },
   {  
     {
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
     }
   },
   {  
     {
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
      }
    }
  }
};

const U_sPARACHTMCOMPDATA RACH_temperature_compensation_UMTSBand8_Set1 =
{
  {
    {
      {
        { -64, 0 } ,
        { -64, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
      }
    },
   {  
     {
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
     }
   },
   {  
     {
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
      }
    }
  }
};

const U_sPARACHTMCOMPDATA RACH_temperature_compensation_UMTSBand9_Set1 =
{
  {
    {
      {
        { -64, 0 } ,
        { -64, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
      }
    },
   {  
     {
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
     }
   },
   {  
     {
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
      }
    }
  }
};

const U_sPARACHTMCOMPDATA RACH_temperature_compensation_UMTSBand10_Set1 =
{
  {
    {
      {
        { -64, 0 } ,
        { -64, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
      }
    },
   {  
     {
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
     }
   },
   {  
     {
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
      }
    }
  }
};

const U_sPARACHTMCOMPDATA RACH_temperature_compensation_UMTSBand11_Set1 =
{
  {
    {
      {
        { -64, 0 } ,
        { -64, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
      }
    },
   {  
     {
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
     }
   },
   {  
     {
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
      }
    }
  }
};

const U_sPARACHTMCOMPDATA RACH_temperature_compensation_UMTSBand19_Set1 =
{
  {
    {
      {
        { -64, 0 } ,
        { -64, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
      }
    },
   {  
     {
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
     }
   },
   {  
     {
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
        { 0, 0 } ,
      }
    }
  }
};

#if UL1CUSTOM_CALIBRATION_DATA_DRDI_ENABLE
const U_sPARACHTMCOMPDATA* const U_PA_RACH_COMP_TABLE_Set1[] =
{
   M_UMTS_TX_RACH_TEMP_COMP_DATA(UMTSBandNone,Set1),
   M_UMTS_TX_RACH_TEMP_COMP_DATA(RX_BAND_INDICATOR_0_Set1,Set1),
   M_UMTS_TX_RACH_TEMP_COMP_DATA(RX_BAND_INDICATOR_1_Set1,Set1),
   M_UMTS_TX_RACH_TEMP_COMP_DATA(RX_BAND_INDICATOR_2_Set1,Set1),
   M_UMTS_TX_RACH_TEMP_COMP_DATA(RX_BAND_INDICATOR_3_Set1,Set1),
   M_UMTS_TX_RACH_TEMP_COMP_DATA(RX_BAND_INDICATOR_4_Set1,Set1)
};
#else
const U_sPARACHTMCOMPDATA* const U_PA_RACH_COMP_TABLE_Set1[] =
{
   M_UMTS_TX_RACH_TEMP_COMP_DATA_DEFAULT(UMTSBandNone),
   M_UMTS_TX_RACH_TEMP_COMP_DATA_DEFAULT(RX_BAND_INDICATOR_0_Set1),
   M_UMTS_TX_RACH_TEMP_COMP_DATA_DEFAULT(RX_BAND_INDICATOR_1_Set1),
   M_UMTS_TX_RACH_TEMP_COMP_DATA_DEFAULT(RX_BAND_INDICATOR_2_Set1),
   M_UMTS_TX_RACH_TEMP_COMP_DATA_DEFAULT(RX_BAND_INDICATOR_3_Set1),
   M_UMTS_TX_RACH_TEMP_COMP_DATA_DEFAULT(RX_BAND_INDICATOR_4_Set1)
};
#endif

//AFC dac
const U_sAFCDACDATA U_AFC_DAC_Set1 =
{

/*kal_uint16 initDac*/
4096,
/*kal_uint16 slope*/
1266,

};

//AFC Cap
const U_sAFCCAPDATA U_AFC_CAP_Set1 =
{
/*kal_int32 cap_id*/
128,
};


#if IS_3G_SAR_TX_POWER_BACKOFF_SUPPORT
const U_sTXPOWEROFFSETDATA TxPowerOffsetData_UMTSBandNone_Set1 =
{
   {
      {
         /* Default Table 0 */
         {
            /* max arfcn, {Antenna_0 pwr_offset_db, Antenna_1 pwr_offset_db, Antenna_2 pwr_offset_db}*/
            /*             {R99, HSDPA, HSUPA} , {R99, HSDPA, HSUPA}, {R99, HSDPA, HSUPA}*/
            {  0  ,   {{0   ,   0    ,   0} ,{0     ,   0    ,     0}, {0 	 ,	  0 	 ,	  0}} },
            {  0  ,   {{0   ,   0    ,   0} ,{0     ,   0    ,     0}, {0 	 ,	  0 	 ,	  0}} },
            {  0  ,   {{0   ,   0    ,   0} ,{0     ,   0    ,     0}, {0 	 ,	  0 	 ,	  0}} },
            {  0  ,   {{0   ,   0    ,   0} ,{0     ,   0    ,     0}, {0 	 ,	  0 	 ,	  0}} },
            {  0  ,   {{0   ,   0    ,   0} ,{0     ,   0    ,     0}, {0 	 ,	  0 	 ,	  0}} },
            {  0  ,   {{0   ,   0    ,   0} ,{0     ,   0    ,     0}, {0 	 ,	  0 	 ,	  0}} },
            {  0  ,   {{0   ,   0    ,   0} ,{0     ,   0    ,     0}, {0 	 ,	  0 	 ,	  0}} },
            {  0  ,   {{0   ,   0    ,   0} ,{0     ,   0    ,     0}, {0 	 ,	  0 	 ,	  0}} },
            {  0  ,   {{0   ,   0    ,   0} ,{0     ,   0    ,     0}, {0 	 ,	  0 	 ,	  0}} },
            {  0  ,   {{0   ,   0    ,   0} ,{0     ,   0    ,     0}, {0 	 ,	  0 	 ,	  0}} },
            {  0  ,   {{0   ,   0    ,   0} ,{0     ,   0    ,     0}, {0 	 ,	  0 	 ,	  0}} },
            {  0  ,   {{0   ,   0    ,   0} ,{0     ,   0    ,     0}, {0 	 ,	  0 	 ,	  0}} },
            {  0  ,   {{0   ,   0    ,   0} ,{0     ,   0    ,     0}, {0 	 ,	  0 	 ,	  0}} },
            {  0  ,   {{0   ,   0    ,   0} ,{0     ,   0    ,     0}, {0 	 ,	  0 	 ,	  0}} },
            { UMTS_TABLE_END },
         },
      },
      {
         /* Table 1 */
         {
            /* max arfcn, {Antenna_0 pwr_offset_db, Antenna_1 pwr_offset_db, Antenna_2 pwr_offset_db}*/
            /*             {R99, HSDPA, HSUPA} , {R99, HSDPA, HSUPA}, {R99, HSDPA, HSUPA}*/
            {  0  ,   {{0   ,   0    ,   0} ,{0     ,   0    ,     0}, {0 	 ,	  0 	 ,	  0}} },
            {  0  ,   {{0   ,   0    ,   0} ,{0     ,   0    ,     0}, {0 	 ,	  0 	 ,	  0}} },
            {  0  ,   {{0   ,   0    ,   0} ,{0     ,   0    ,     0}, {0 	 ,	  0 	 ,	  0}} },
            {  0  ,   {{0   ,   0    ,   0} ,{0     ,   0    ,     0}, {0 	 ,	  0 	 ,	  0}} },
            {  0  ,   {{0   ,   0    ,   0} ,{0     ,   0    ,     0}, {0 	 ,	  0 	 ,	  0}} },
            {  0  ,   {{0   ,   0    ,   0} ,{0     ,   0    ,     0}, {0 	 ,	  0 	 ,	  0}} },
            {  0  ,   {{0   ,   0    ,   0} ,{0     ,   0    ,     0}, {0 	 ,	  0 	 ,	  0}} },
            {  0  ,   {{0   ,   0    ,   0} ,{0     ,   0    ,     0}, {0 	 ,	  0 	 ,	  0}} },
            {  0  ,   {{0   ,   0    ,   0} ,{0     ,   0    ,     0}, {0 	 ,	  0 	 ,	  0}} },
            {  0  ,   {{0   ,   0    ,   0} ,{0     ,   0    ,     0}, {0 	 ,	  0 	 ,	  0}} },
            {  0  ,   {{0   ,   0    ,   0} ,{0     ,   0    ,     0}, {0 	 ,	  0 	 ,	  0}} },
            {  0  ,   {{0   ,   0    ,   0} ,{0     ,   0    ,     0}, {0 	 ,	  0 	 ,	  0}} },
            {  0  ,   {{0   ,   0    ,   0} ,{0     ,   0    ,     0}, {0 	 ,	  0 	 ,	  0}} },
            {  0  ,   {{0   ,   0    ,   0} ,{0     ,   0    ,     0}, {0 	 ,	  0 	 ,	  0}} },
            { UMTS_TABLE_END },
         },
      },
      {
         /* Table 2 */
         {
            /* max arfcn, {Antenna_0 pwr_offset_db, Antenna_1 pwr_offset_db, Antenna_2 pwr_offset_db}*/
            /*             {R99, HSDPA, HSUPA} , {R99, HSDPA, HSUPA}, {R99, HSDPA, HSUPA}*/
            {  0  ,   {{0   ,   0    ,   0} ,{0     ,   0    ,     0}, {0 	 ,	  0 	 ,	  0}} },
            {  0  ,   {{0   ,   0    ,   0} ,{0     ,   0    ,     0}, {0 	 ,	  0 	 ,	  0}} },
            {  0  ,   {{0   ,   0    ,   0} ,{0     ,   0    ,     0}, {0 	 ,	  0 	 ,	  0}} },
            {  0  ,   {{0   ,   0    ,   0} ,{0     ,   0    ,     0}, {0 	 ,	  0 	 ,	  0}} },
            {  0  ,   {{0   ,   0    ,   0} ,{0     ,   0    ,     0}, {0 	 ,	  0 	 ,	  0}} },
            {  0  ,   {{0   ,   0    ,   0} ,{0     ,   0    ,     0}, {0 	 ,	  0 	 ,	  0}} },
            {  0  ,   {{0   ,   0    ,   0} ,{0     ,   0    ,     0}, {0 	 ,	  0 	 ,	  0}} },
            {  0  ,   {{0   ,   0    ,   0} ,{0     ,   0    ,     0}, {0 	 ,	  0 	 ,	  0}} },
            {  0  ,   {{0   ,   0    ,   0} ,{0     ,   0    ,     0}, {0 	 ,	  0 	 ,	  0}} },
            {  0  ,   {{0   ,   0    ,   0} ,{0     ,   0    ,     0}, {0 	 ,	  0 	 ,	  0}} },
            {  0  ,   {{0   ,   0    ,   0} ,{0     ,   0    ,     0}, {0 	 ,	  0 	 ,	  0}} },
            {  0  ,   {{0   ,   0    ,   0} ,{0     ,   0    ,     0}, {0 	 ,	  0 	 ,	  0}} },
            {  0  ,   {{0   ,   0    ,   0} ,{0     ,   0    ,     0}, {0 	 ,	  0 	 ,	  0}} },
            {  0  ,   {{0   ,   0    ,   0} ,{0     ,   0    ,     0}, {0 	 ,	  0 	 ,	  0}} },
            { UMTS_TABLE_END },
         },
      },
      {
         /* Table 3 */
         {
            /* max arfcn, {Antenna_0 pwr_offset_db, Antenna_1 pwr_offset_db, Antenna_2 pwr_offset_db}*/
            /*             {R99, HSDPA, HSUPA} , {R99, HSDPA, HSUPA}, {R99, HSDPA, HSUPA}*/
            {  0  ,   {{0   ,   0    ,   0} ,{0     ,   0    ,     0}, {0 	 ,	  0 	 ,	  0}} },
            {  0  ,   {{0   ,   0    ,   0} ,{0     ,   0    ,     0}, {0 	 ,	  0 	 ,	  0}} },
            {  0  ,   {{0   ,   0    ,   0} ,{0     ,   0    ,     0}, {0 	 ,	  0 	 ,	  0}} },
            {  0  ,   {{0   ,   0    ,   0} ,{0     ,   0    ,     0}, {0 	 ,	  0 	 ,	  0}} },
            {  0  ,   {{0   ,   0    ,   0} ,{0     ,   0    ,     0}, {0 	 ,	  0 	 ,	  0}} },
            {  0  ,   {{0   ,   0    ,   0} ,{0     ,   0    ,     0}, {0 	 ,	  0 	 ,	  0}} },
            {  0  ,   {{0   ,   0    ,   0} ,{0     ,   0    ,     0}, {0 	 ,	  0 	 ,	  0}} },
            {  0  ,   {{0   ,   0    ,   0} ,{0     ,   0    ,     0}, {0 	 ,	  0 	 ,	  0}} },
            {  0  ,   {{0   ,   0    ,   0} ,{0     ,   0    ,     0}, {0 	 ,	  0 	 ,	  0}} },
            {  0  ,   {{0   ,   0    ,   0} ,{0     ,   0    ,     0}, {0 	 ,	  0 	 ,	  0}} },
            {  0  ,   {{0   ,   0    ,   0} ,{0     ,   0    ,     0}, {0 	 ,	  0 	 ,	  0}} },
            {  0  ,   {{0   ,   0    ,   0} ,{0     ,   0    ,     0}, {0 	 ,	  0 	 ,	  0}} },
            {  0  ,   {{0   ,   0    ,   0} ,{0     ,   0    ,     0}, {0 	 ,	  0 	 ,	  0}} },
            {  0  ,   {{0   ,   0    ,   0} ,{0     ,   0    ,     0}, {0 	 ,	  0 	 ,	  0}} },
            { UMTS_TABLE_END },
         },
      },
      {
         /* Table 4 */
         {
            /* max arfcn, {Antenna_0 pwr_offset_db, Antenna_1 pwr_offset_db, Antenna_2 pwr_offset_db}*/
            /*             {R99, HSDPA, HSUPA} , {R99, HSDPA, HSUPA}, {R99, HSDPA, HSUPA}*/
            {  0  ,   {{0   ,   0    ,   0} ,{0     ,   0    ,     0}, {0 	 ,	  0 	 ,	  0}} },
            {  0  ,   {{0   ,   0    ,   0} ,{0     ,   0    ,     0}, {0 	 ,	  0 	 ,	  0}} },
            {  0  ,   {{0   ,   0    ,   0} ,{0     ,   0    ,     0}, {0 	 ,	  0 	 ,	  0}} },
            {  0  ,   {{0   ,   0    ,   0} ,{0     ,   0    ,     0}, {0 	 ,	  0 	 ,	  0}} },
            {  0  ,   {{0   ,   0    ,   0} ,{0     ,   0    ,     0}, {0 	 ,	  0 	 ,	  0}} },
            {  0  ,   {{0   ,   0    ,   0} ,{0     ,   0    ,     0}, {0 	 ,	  0 	 ,	  0}} },
            {  0  ,   {{0   ,   0    ,   0} ,{0     ,   0    ,     0}, {0 	 ,	  0 	 ,	  0}} },
            {  0  ,   {{0   ,   0    ,   0} ,{0     ,   0    ,     0}, {0 	 ,	  0 	 ,	  0}} },
            {  0  ,   {{0   ,   0    ,   0} ,{0     ,   0    ,     0}, {0 	 ,	  0 	 ,	  0}} },
            {  0  ,   {{0   ,   0    ,   0} ,{0     ,   0    ,     0}, {0 	 ,	  0 	 ,	  0}} },
            {  0  ,   {{0   ,   0    ,   0} ,{0     ,   0    ,     0}, {0 	 ,	  0 	 ,	  0}} },
            {  0  ,   {{0   ,   0    ,   0} ,{0     ,   0    ,     0}, {0 	 ,	  0 	 ,	  0}} },
            {  0  ,   {{0   ,   0    ,   0} ,{0     ,   0    ,     0}, {0 	 ,	  0 	 ,	  0}} },
            {  0  ,   {{0   ,   0    ,   0} ,{0     ,   0    ,     0}, {0 	 ,	  0 	 ,	  0}} },
            { UMTS_TABLE_END },
         },
      },
      {
         /* Table 5 */
         {
            /* max arfcn, {Antenna_0 pwr_offset_db, Antenna_1 pwr_offset_db, Antenna_2 pwr_offset_db}*/
            /*             {R99, HSDPA, HSUPA} , {R99, HSDPA, HSUPA}, {R99, HSDPA, HSUPA}*/
            {  0  ,   {{0   ,   0    ,   0} ,{0     ,   0    ,     0}, {0 	 ,	  0 	 ,	  0}} },
            {  0  ,   {{0   ,   0    ,   0} ,{0     ,   0    ,     0}, {0 	 ,	  0 	 ,	  0}} },
            {  0  ,   {{0   ,   0    ,   0} ,{0     ,   0    ,     0}, {0 	 ,	  0 	 ,	  0}} },
            {  0  ,   {{0   ,   0    ,   0} ,{0     ,   0    ,     0}, {0 	 ,	  0 	 ,	  0}} },
            {  0  ,   {{0   ,   0    ,   0} ,{0     ,   0    ,     0}, {0 	 ,	  0 	 ,	  0}} },
            {  0  ,   {{0   ,   0    ,   0} ,{0     ,   0    ,     0}, {0 	 ,	  0 	 ,	  0}} },
            {  0  ,   {{0   ,   0    ,   0} ,{0     ,   0    ,     0}, {0 	 ,	  0 	 ,	  0}} },
            {  0  ,   {{0   ,   0    ,   0} ,{0     ,   0    ,     0}, {0 	 ,	  0 	 ,	  0}} },
            {  0  ,   {{0   ,   0    ,   0} ,{0     ,   0    ,     0}, {0 	 ,	  0 	 ,	  0}} },
            {  0  ,   {{0   ,   0    ,   0} ,{0     ,   0    ,     0}, {0 	 ,	  0 	 ,	  0}} },
            {  0  ,   {{0   ,   0    ,   0} ,{0     ,   0    ,     0}, {0 	 ,	  0 	 ,	  0}} },
            {  0  ,   {{0   ,   0    ,   0} ,{0     ,   0    ,     0}, {0 	 ,	  0 	 ,	  0}} },
            {  0  ,   {{0   ,   0    ,   0} ,{0     ,   0    ,     0}, {0 	 ,	  0 	 ,	  0}} },
            {  0  ,   {{0   ,   0    ,   0} ,{0     ,   0    ,     0}, {0 	 ,	  0 	 ,	  0}} },
            { UMTS_TABLE_END },
         },
      },
      {
         /* Table 6 */
         {
            /* max arfcn, {Antenna_0 pwr_offset_db, Antenna_1 pwr_offset_db, Antenna_2 pwr_offset_db}*/
            /*             {R99, HSDPA, HSUPA} , {R99, HSDPA, HSUPA}, {R99, HSDPA, HSUPA}*/
            {  0  ,   {{0   ,   0    ,   0} ,{0     ,   0    ,     0}, {0 	 ,	  0 	 ,	  0}} },
            {  0  ,   {{0   ,   0    ,   0} ,{0     ,   0    ,     0}, {0 	 ,	  0 	 ,	  0}} },
            {  0  ,   {{0   ,   0    ,   0} ,{0     ,   0    ,     0}, {0 	 ,	  0 	 ,	  0}} },
            {  0  ,   {{0   ,   0    ,   0} ,{0     ,   0    ,     0}, {0 	 ,	  0 	 ,	  0}} },
            {  0  ,   {{0   ,   0    ,   0} ,{0     ,   0    ,     0}, {0 	 ,	  0 	 ,	  0}} },
            {  0  ,   {{0   ,   0    ,   0} ,{0     ,   0    ,     0}, {0 	 ,	  0 	 ,	  0}} },
            {  0  ,   {{0   ,   0    ,   0} ,{0     ,   0    ,     0}, {0 	 ,	  0 	 ,	  0}} },
            {  0  ,   {{0   ,   0    ,   0} ,{0     ,   0    ,     0}, {0 	 ,	  0 	 ,	  0}} },
            {  0  ,   {{0   ,   0    ,   0} ,{0     ,   0    ,     0}, {0 	 ,	  0 	 ,	  0}} },
            {  0  ,   {{0   ,   0    ,   0} ,{0     ,   0    ,     0}, {0 	 ,	  0 	 ,	  0}} },
            {  0  ,   {{0   ,   0    ,   0} ,{0     ,   0    ,     0}, {0 	 ,	  0 	 ,	  0}} },
            {  0  ,   {{0   ,   0    ,   0} ,{0     ,   0    ,     0}, {0 	 ,	  0 	 ,	  0}} },
            {  0  ,   {{0   ,   0    ,   0} ,{0     ,   0    ,     0}, {0 	 ,	  0 	 ,	  0}} },
            {  0  ,   {{0   ,   0    ,   0} ,{0     ,   0    ,     0}, {0 	 ,	  0 	 ,	  0}} },
            { UMTS_TABLE_END },
         },
      },
      {
         /* Table 7 */
         {
            /* max arfcn, {Antenna_0 pwr_offset_db, Antenna_1 pwr_offset_db, Antenna_2 pwr_offset_db}*/
            /*             {R99, HSDPA, HSUPA} , {R99, HSDPA, HSUPA}, {R99, HSDPA, HSUPA}*/
            {  0  ,   {{0   ,   0    ,   0} ,{0     ,   0    ,     0}, {0 	 ,	  0 	 ,	  0}} },
            {  0  ,   {{0   ,   0    ,   0} ,{0     ,   0    ,     0}, {0 	 ,	  0 	 ,	  0}} },
            {  0  ,   {{0   ,   0    ,   0} ,{0     ,   0    ,     0}, {0 	 ,	  0 	 ,	  0}} },
            {  0  ,   {{0   ,   0    ,   0} ,{0     ,   0    ,     0}, {0 	 ,	  0 	 ,	  0}} },
            {  0  ,   {{0   ,   0    ,   0} ,{0     ,   0    ,     0}, {0 	 ,	  0 	 ,	  0}} },
            {  0  ,   {{0   ,   0    ,   0} ,{0     ,   0    ,     0}, {0 	 ,	  0 	 ,	  0}} },
            {  0  ,   {{0   ,   0    ,   0} ,{0     ,   0    ,     0}, {0 	 ,	  0 	 ,	  0}} },
            {  0  ,   {{0   ,   0    ,   0} ,{0     ,   0    ,     0}, {0 	 ,	  0 	 ,	  0}} },
            {  0  ,   {{0   ,   0    ,   0} ,{0     ,   0    ,     0}, {0 	 ,	  0 	 ,	  0}} },
            {  0  ,   {{0   ,   0    ,   0} ,{0     ,   0    ,     0}, {0 	 ,	  0 	 ,	  0}} },
            {  0  ,   {{0   ,   0    ,   0} ,{0     ,   0    ,     0}, {0 	 ,	  0 	 ,	  0}} },
            {  0  ,   {{0   ,   0    ,   0} ,{0     ,   0    ,     0}, {0 	 ,	  0 	 ,	  0}} },
            {  0  ,   {{0   ,   0    ,   0} ,{0     ,   0    ,     0}, {0 	 ,	  0 	 ,	  0}} },
            {  0  ,   {{0   ,   0    ,   0} ,{0     ,   0    ,     0}, {0 	 ,	  0 	 ,	  0}} },
            { UMTS_TABLE_END },
         },
      },
      {
         /* Table 8 */
         {
            /* max arfcn, {Antenna_0 pwr_offset_db, Antenna_1 pwr_offset_db, Antenna_2 pwr_offset_db}*/
            /*             {R99, HSDPA, HSUPA} , {R99, HSDPA, HSUPA}, {R99, HSDPA, HSUPA}*/
            {  0  ,   {{0   ,   0    ,   0} ,{0     ,   0    ,     0}, {0 	 ,	  0 	 ,	  0}} },
            {  0  ,   {{0   ,   0    ,   0} ,{0     ,   0    ,     0}, {0 	 ,	  0 	 ,	  0}} },
            {  0  ,   {{0   ,   0    ,   0} ,{0     ,   0    ,     0}, {0 	 ,	  0 	 ,	  0}} },
            {  0  ,   {{0   ,   0    ,   0} ,{0     ,   0    ,     0}, {0 	 ,	  0 	 ,	  0}} },
            {  0  ,   {{0   ,   0    ,   0} ,{0     ,   0    ,     0}, {0 	 ,	  0 	 ,	  0}} },
            {  0  ,   {{0   ,   0    ,   0} ,{0     ,   0    ,     0}, {0 	 ,	  0 	 ,	  0}} },
            {  0  ,   {{0   ,   0    ,   0} ,{0     ,   0    ,     0}, {0 	 ,	  0 	 ,	  0}} },
            {  0  ,   {{0   ,   0    ,   0} ,{0     ,   0    ,     0}, {0 	 ,	  0 	 ,	  0}} },
            {  0  ,   {{0   ,   0    ,   0} ,{0     ,   0    ,     0}, {0 	 ,	  0 	 ,	  0}} },
            {  0  ,   {{0   ,   0    ,   0} ,{0     ,   0    ,     0}, {0 	 ,	  0 	 ,	  0}} },
            {  0  ,   {{0   ,   0    ,   0} ,{0     ,   0    ,     0}, {0 	 ,	  0 	 ,	  0}} },
            {  0  ,   {{0   ,   0    ,   0} ,{0     ,   0    ,     0}, {0 	 ,	  0 	 ,	  0}} },
            {  0  ,   {{0   ,   0    ,   0} ,{0     ,   0    ,     0}, {0 	 ,	  0 	 ,	  0}} },
            {  0  ,   {{0   ,   0    ,   0} ,{0     ,   0    ,     0}, {0 	 ,	  0 	 ,	  0}} },
            { UMTS_TABLE_END },
         }
      }				
   }
};

const U_sTXPOWEROFFSETDATA TxPowerOffsetData_UMTSBand1_Set1 =
{
   {
      {
         /* Default Table 0 */
         {
            /* max arfcn, {Antenna_0 pwr_offset_db, Antenna_1 pwr_offset_db, Antenna_2 pwr_offset_db}*/
            /*             {R99, HSDPA, HSUPA} , {R99, HSDPA, HSUPA}, {R99, HSDPA, HSUPA}*/
            {	9612,	  {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9634,	  {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9656,	  {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9678,	  {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9700,	  {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9722,	  {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9744,	  {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9766,	  {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9788,	  {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9810,	  {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9832,	  {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9854,	  {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9876,	  {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9888,	  {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            { UMTS_TABLE_END },
         },
      },
      {
         /* Table 1 */
         {
            /* max arfcn, {Antenna_0 pwr_offset_db, Antenna_1 pwr_offset_db, Antenna_2 pwr_offset_db}*/
            /*             {R99, HSDPA, HSUPA} , {R99, HSDPA, HSUPA}, {R99, HSDPA, HSUPA}*/
            {	9612,	  {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9634,	  {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9656,	  {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9678,	  {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9700,	  {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9722,	  {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9744,	  {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9766,	  {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9788,	  {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9810,	  {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9832,	  {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9854,	  {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9876,	  {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9888,	  {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            { UMTS_TABLE_END },
         },
      },
      {
         /* Table 2 */
         {
            /* max arfcn, {Antenna_0 pwr_offset_db, Antenna_1 pwr_offset_db, Antenna_2 pwr_offset_db}*/
            /*             {R99, HSDPA, HSUPA} , {R99, HSDPA, HSUPA}, {R99, HSDPA, HSUPA}*/
            {	9612,	  {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9634,	  {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9656,	  {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9678,	  {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9700,	  {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9722,	  {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9744,	  {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9766,	  {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9788,	  {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9810,	  {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9832,	  {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9854,	  {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9876,	  {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9888,	  {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            { UMTS_TABLE_END },
         },
      },
      {
         /* Table 3 */
         {
            /* max arfcn, {Antenna_0 pwr_offset_db, Antenna_1 pwr_offset_db, Antenna_2 pwr_offset_db}*/
            /*             {R99, HSDPA, HSUPA} , {R99, HSDPA, HSUPA}, {R99, HSDPA, HSUPA}*/
            {	9612,	  {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9634,	  {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9656,	  {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9678,	  {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9700,	  {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9722,	  {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9744,	  {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9766,	  {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9788,	  {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9810,	  {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9832,	  {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9854,	  {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9876,	  {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9888,	  {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            { UMTS_TABLE_END },
         },
      },
      {
         /* Table 4 */
         {
            /* max arfcn, {Antenna_0 pwr_offset_db, Antenna_1 pwr_offset_db, Antenna_2 pwr_offset_db}*/
            /*             {R99, HSDPA, HSUPA} , {R99, HSDPA, HSUPA}, {R99, HSDPA, HSUPA}*/
            {	9612,	  {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9634,	  {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9656,	  {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9678,	  {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9700,	  {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9722,	  {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9744,	  {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9766,	  {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9788,	  {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9810,	  {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9832,	  {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9854,	  {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9876,	  {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9888,	  {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            { UMTS_TABLE_END },
         },
      },
      {
         /* Table 5 */
         {
            /* max arfcn, {Antenna_0 pwr_offset_db, Antenna_1 pwr_offset_db, Antenna_2 pwr_offset_db}*/
            /*             {R99, HSDPA, HSUPA} , {R99, HSDPA, HSUPA}, {R99, HSDPA, HSUPA}*/
            {	9612,	  {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9634,	  {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9656,	  {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9678,	  {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9700,	  {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9722,	  {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9744,	  {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9766,	  {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9788,	  {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9810,	  {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9832,	  {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9854,	  {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9876,	  {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9888,	  {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            { UMTS_TABLE_END },
         },
      },
		{
         /* Table 6 */
         {
            /* max arfcn, {Antenna_0 pwr_offset_db, Antenna_1 pwr_offset_db, Antenna_2 pwr_offset_db}*/
            /*             {R99, HSDPA, HSUPA} , {R99, HSDPA, HSUPA}, {R99, HSDPA, HSUPA}*/
            {	9612,	  {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9634,	  {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9656,	  {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9678,	  {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9700,	  {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9722,	  {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9744,	  {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9766,	  {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9788,	  {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9810,	  {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9832,	  {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9854,	  {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9876,	  {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9888,	  {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            { UMTS_TABLE_END },
         },
      },
      {
         /* Table 7 */
         {
            /* max arfcn, {Antenna_0 pwr_offset_db, Antenna_1 pwr_offset_db, Antenna_2 pwr_offset_db}*/
            /*             {R99, HSDPA, HSUPA} , {R99, HSDPA, HSUPA}, {R99, HSDPA, HSUPA}*/
            {	9612,	  {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9634,	  {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9656,	  {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9678,	  {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9700,	  {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9722,	  {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9744,	  {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9766,	  {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9788,	  {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9810,	  {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9832,	  {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9854,	  {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9876,	  {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9888,	  {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            { UMTS_TABLE_END },
         },
      },
      {
         /* Table 8 */
         {
            /* max arfcn, {Antenna_0 pwr_offset_db, Antenna_1 pwr_offset_db, Antenna_2 pwr_offset_db}*/
            /*             {R99, HSDPA, HSUPA} , {R99, HSDPA, HSUPA}, {R99, HSDPA, HSUPA}*/
            {	9612,	  {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9634,	  {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9656,	  {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9678,	  {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9700,	  {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9722,	  {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9744,	  {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9766,	  {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9788,	  {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9810,	  {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9832,	  {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9854,	  {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9876,	  {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9888,	  {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            { UMTS_TABLE_END },
         }
      }
   }
};

const U_sTXPOWEROFFSETDATA TxPowerOffsetData_UMTSBand2_Set1 =
{
   {
      {
         /* Default Table 0 */
         {
            /* max arfcn, {Antenna_0 pwr_offset_db, Antenna_1 pwr_offset_db, Antenna_2 pwr_offset_db}*/
            /*             {R99, HSDPA, HSUPA} , {R99, HSDPA, HSUPA}, {R99, HSDPA, HSUPA}*/
            {	9262	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9284	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9306	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9328	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9350	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9372	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9394	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9416	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9438	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9460	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9482	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9504	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9526	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9538	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            { UMTS_TABLE_END }
         },
      },
      {
         /* Table 1 */
         {
            /* max arfcn, {Antenna_0 pwr_offset_db, Antenna_1 pwr_offset_db, Antenna_2 pwr_offset_db}*/
            /*             {R99, HSDPA, HSUPA} , {R99, HSDPA, HSUPA}, {R99, HSDPA, HSUPA}*/
            {	9262	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9284	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9306	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9328	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9350	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9372	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9394	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9416	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9438	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9460	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9482	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9504	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9526	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9538	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            { UMTS_TABLE_END }
         },
      },
      {
         /* Table 2 */
         {
            /* max arfcn, {Antenna_0 pwr_offset_db, Antenna_1 pwr_offset_db, Antenna_2 pwr_offset_db}*/
            /*             {R99, HSDPA, HSUPA} , {R99, HSDPA, HSUPA}, {R99, HSDPA, HSUPA}*/
            {	9262	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9284	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9306	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9328	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9350	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9372	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9394	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9416	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9438	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9460	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9482	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9504	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9526	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9538	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            { UMTS_TABLE_END }
         },
      },
      {
         /* Table 3 */
         {
            /* max arfcn, {Antenna_0 pwr_offset_db, Antenna_1 pwr_offset_db, Antenna_2 pwr_offset_db}*/
            /*             {R99, HSDPA, HSUPA} , {R99, HSDPA, HSUPA}, {R99, HSDPA, HSUPA}*/
            {	9262	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9284	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9306	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9328	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9350	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9372	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9394	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9416	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9438	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9460	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9482	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9504	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9526	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9538	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            { UMTS_TABLE_END }
         },
      },
      {
         /* Table 4 */
         {
            /* max arfcn, {Antenna_0 pwr_offset_db, Antenna_1 pwr_offset_db, Antenna_2 pwr_offset_db}*/
            /*             {R99, HSDPA, HSUPA} , {R99, HSDPA, HSUPA}, {R99, HSDPA, HSUPA}*/
            {	9262	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9284	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9306	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9328	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9350	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9372	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9394	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9416	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9438	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9460	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9482	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9504	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9526	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9538	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            { UMTS_TABLE_END }
         },
      },
      {
         /* Table 5*/
         {
            /* max arfcn, {Antenna_0 pwr_offset_db, Antenna_1 pwr_offset_db, Antenna_2 pwr_offset_db}*/
            /*             {R99, HSDPA, HSUPA} , {R99, HSDPA, HSUPA}, {R99, HSDPA, HSUPA}*/
            {	9262	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9284	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9306	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9328	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9350	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9372	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9394	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9416	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9438	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9460	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9482	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9504	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9526	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9538	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            { UMTS_TABLE_END }
         },
      },
      {
         /* Table 6*/
         {
            /* max arfcn, {Antenna_0 pwr_offset_db, Antenna_1 pwr_offset_db, Antenna_2 pwr_offset_db}*/
            /*             {R99, HSDPA, HSUPA} , {R99, HSDPA, HSUPA}, {R99, HSDPA, HSUPA}*/
            {	9262	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9284	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9306	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9328	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9350	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9372	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9394	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9416	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9438	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9460	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9482	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9504	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9526	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9538	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            { UMTS_TABLE_END }
         },
      },
      {
         /* Table 7*/
         {
            /* max arfcn, {Antenna_0 pwr_offset_db, Antenna_1 pwr_offset_db, Antenna_2 pwr_offset_db}*/
            /*             {R99, HSDPA, HSUPA} , {R99, HSDPA, HSUPA}, {R99, HSDPA, HSUPA}*/
            {	9262	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9284	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9306	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9328	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9350	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9372	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9394	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9416	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9438	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9460	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9482	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9504	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9526	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9538	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            { UMTS_TABLE_END }
         },
      },
      {
         /* Table 8*/
         {
            /* max arfcn, {Antenna_0 pwr_offset_db, Antenna_1 pwr_offset_db, Antenna_2 pwr_offset_db}*/
            /*             {R99, HSDPA, HSUPA} , {R99, HSDPA, HSUPA}, {R99, HSDPA, HSUPA}*/
            {	9262	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9284	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9306	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9328	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9350	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9372	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9394	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9416	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9438	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9460	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9482	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9504	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9526	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9538	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            { UMTS_TABLE_END }
         }
      }
   }
};

const U_sTXPOWEROFFSETDATA TxPowerOffsetData_UMTSBand4_Set1 =
{
   {
      {
         /* Default Table 0 */
         {
            /* max arfcn, {Antenna_0 pwr_offset_db, Antenna_1 pwr_offset_db, Antenna_2 pwr_offset_db}*/
            /*             {R99, HSDPA, HSUPA} , {R99, HSDPA, HSUPA}, {R99, HSDPA, HSUPA}*/
            {	1312	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	1327	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	1342	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	1357	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	1372	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	1387	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	1402	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	1417	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	1432	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	1450	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	1465	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	1480	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	1495	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	1513	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            { UMTS_TABLE_END }
         },
      },
      {
         /* Table 1 */
         {
            /* max arfcn, {Antenna_0 pwr_offset_db, Antenna_1 pwr_offset_db, Antenna_2 pwr_offset_db}*/
            /*             {R99, HSDPA, HSUPA} , {R99, HSDPA, HSUPA}, {R99, HSDPA, HSUPA}*/
            {	1312	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	1327	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	1342	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	1357	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	1372	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	1387	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	1402	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	1417	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	1432	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	1450	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	1465	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	1480	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	1495	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	1513	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            { UMTS_TABLE_END }
         },
      },
      {
         /* Table 2 */
         {
            /* max arfcn, {Antenna_0 pwr_offset_db, Antenna_1 pwr_offset_db, Antenna_2 pwr_offset_db}*/
            /*             {R99, HSDPA, HSUPA} , {R99, HSDPA, HSUPA}, {R99, HSDPA, HSUPA}*/
            {	1312	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	1327	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	1342	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	1357	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	1372	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	1387	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	1402	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	1417	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	1432	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	1450	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	1465	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	1480	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	1495	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	1513	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            { UMTS_TABLE_END }
         },
      },
      {
         /* Table 3 */
         {
            /* max arfcn, {Antenna_0 pwr_offset_db, Antenna_1 pwr_offset_db, Antenna_2 pwr_offset_db}*/
            /*             {R99, HSDPA, HSUPA} , {R99, HSDPA, HSUPA}, {R99, HSDPA, HSUPA}*/
            {	1312	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	1327	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	1342	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	1357	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	1372	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	1387	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	1402	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	1417	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	1432	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	1450	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	1465	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	1480	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	1495	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	1513	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            { UMTS_TABLE_END }
         },
      },
      {
         /* Table 4 */
         {
            /* max arfcn, {Antenna_0 pwr_offset_db, Antenna_1 pwr_offset_db, Antenna_2 pwr_offset_db}*/
            /*             {R99, HSDPA, HSUPA} , {R99, HSDPA, HSUPA}, {R99, HSDPA, HSUPA}*/
            {	1312	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	1327	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	1342	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	1357	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	1372	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	1387	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	1402	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	1417	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	1432	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	1450	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	1465	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	1480	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	1495	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	1513	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            { UMTS_TABLE_END }
         },
      },
      {
         /* Table 5 */
         {
            /* max arfcn, {Antenna_0 pwr_offset_db, Antenna_1 pwr_offset_db, Antenna_2 pwr_offset_db}*/
            /*             {R99, HSDPA, HSUPA} , {R99, HSDPA, HSUPA}, {R99, HSDPA, HSUPA}*/
            {	1312	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	1327	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	1342	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	1357	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	1372	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	1387	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	1402	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	1417	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	1432	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	1450	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	1465	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	1480	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	1495	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	1513	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            { UMTS_TABLE_END }
         },
      },
      {
         /* Table 6 */
         {
            /* max arfcn, {Antenna_0 pwr_offset_db, Antenna_1 pwr_offset_db, Antenna_2 pwr_offset_db}*/
            /*             {R99, HSDPA, HSUPA} , {R99, HSDPA, HSUPA}, {R99, HSDPA, HSUPA}*/
            {	1312	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	1327	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	1342	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	1357	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	1372	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	1387	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	1402	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	1417	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	1432	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	1450	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	1465	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	1480	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	1495	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	1513	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            { UMTS_TABLE_END }
         },
      },
      {
         /* Table 7 */
         {
            /* max arfcn, {Antenna_0 pwr_offset_db, Antenna_1 pwr_offset_db, Antenna_2 pwr_offset_db}*/
            /*             {R99, HSDPA, HSUPA} , {R99, HSDPA, HSUPA}, {R99, HSDPA, HSUPA}*/
            {	1312	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	1327	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	1342	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	1357	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	1372	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	1387	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	1402	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	1417	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	1432	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	1450	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	1465	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	1480	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	1495	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	1513	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            { UMTS_TABLE_END }
         },
      },
      {
         /* Table 8 */
         {
            /* max arfcn, {Antenna_0 pwr_offset_db, Antenna_1 pwr_offset_db, Antenna_2 pwr_offset_db}*/
            /*             {R99, HSDPA, HSUPA} , {R99, HSDPA, HSUPA}, {R99, HSDPA, HSUPA}*/
            {	1312	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	1327	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	1342	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	1357	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	1372	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	1387	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	1402	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	1417	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	1432	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	1450	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	1465	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	1480	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	1495	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	1513	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            { UMTS_TABLE_END }
         }
      }
   }
};

const U_sTXPOWEROFFSETDATA TxPowerOffsetData_UMTSBand5_Set1 =
{
   {
      {
         /* Default Table 0 */
         {
            /* max arfcn, {Antenna_0 pwr_offset_db, Antenna_1 pwr_offset_db, Antenna_2 pwr_offset_db}*/
            /*             {R99, HSDPA, HSUPA} , {R99, HSDPA, HSUPA}, {R99, HSDPA, HSUPA}*/
            {	4132	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	4140	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	4148	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	4156	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	4164	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	4172	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	4180	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	4188	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	4195	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	4203	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	4210	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	4218	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	4226	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	4233	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            { UMTS_TABLE_END }
         },
      },
      {
         /* Table 1 */
         {
            /* max arfcn, {Antenna_0 pwr_offset_db, Antenna_1 pwr_offset_db, Antenna_2 pwr_offset_db}*/
            /*             {R99, HSDPA, HSUPA} , {R99, HSDPA, HSUPA}, {R99, HSDPA, HSUPA}*/
            {	4132	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	4140	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	4148	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	4156	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	4164	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	4172	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	4180	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	4188	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	4195	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	4203	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	4210	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	4218	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	4226	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	4233	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            { UMTS_TABLE_END }
         },
      },
      {
         /* Table 2 */
         {
            /* max arfcn, {Antenna_0 pwr_offset_db, Antenna_1 pwr_offset_db, Antenna_2 pwr_offset_db}*/
            /*             {R99, HSDPA, HSUPA} , {R99, HSDPA, HSUPA}, {R99, HSDPA, HSUPA}*/
            {	4132	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	4140	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	4148	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	4156	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	4164	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	4172	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	4180	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	4188	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	4195	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	4203	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	4210	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	4218	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	4226	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	4233	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            { UMTS_TABLE_END }
         },
      },
      {
         /* Table 3 */
         {
            /* max arfcn, {Antenna_0 pwr_offset_db, Antenna_1 pwr_offset_db, Antenna_2 pwr_offset_db}*/
            /*             {R99, HSDPA, HSUPA} , {R99, HSDPA, HSUPA}, {R99, HSDPA, HSUPA}*/
            {	4132	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	4140	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	4148	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	4156	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	4164	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	4172	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	4180	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	4188	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	4195	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	4203	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	4210	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	4218	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	4226	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	4233	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            { UMTS_TABLE_END }
         },
      },
      {
         /* Table 4 */
         {
            /* max arfcn, {Antenna_0 pwr_offset_db, Antenna_1 pwr_offset_db, Antenna_2 pwr_offset_db}*/
            /*             {R99, HSDPA, HSUPA} , {R99, HSDPA, HSUPA}, {R99, HSDPA, HSUPA}*/
            {	4132	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	4140	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	4148	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	4156	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	4164	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	4172	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	4180	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	4188	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	4195	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	4203	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	4210	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	4218	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	4226	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	4233	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            { UMTS_TABLE_END }
         },
      },
      {
         /* Table 5 */
         {
            /* max arfcn, {Antenna_0 pwr_offset_db, Antenna_1 pwr_offset_db, Antenna_2 pwr_offset_db}*/
            /*             {R99, HSDPA, HSUPA} , {R99, HSDPA, HSUPA}, {R99, HSDPA, HSUPA}*/
            {	4132	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	4140	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	4148	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	4156	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	4164	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	4172	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	4180	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	4188	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	4195	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	4203	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	4210	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	4218	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	4226	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	4233	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            { UMTS_TABLE_END }
         },
      },
      {
         /* Table 6 */
         {
            /* max arfcn, {Antenna_0 pwr_offset_db, Antenna_1 pwr_offset_db, Antenna_2 pwr_offset_db}*/
            /*             {R99, HSDPA, HSUPA} , {R99, HSDPA, HSUPA}, {R99, HSDPA, HSUPA}*/
            {	4132	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	4140	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	4148	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	4156	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	4164	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	4172	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	4180	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	4188	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	4195	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	4203	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	4210	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	4218	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	4226	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	4233	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            { UMTS_TABLE_END }
         },
      },
      {
         /* Table 7 */
         {
            /* max arfcn, {Antenna_0 pwr_offset_db, Antenna_1 pwr_offset_db, Antenna_2 pwr_offset_db}*/
            /*             {R99, HSDPA, HSUPA} , {R99, HSDPA, HSUPA}, {R99, HSDPA, HSUPA}*/
            {	4132	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	4140	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	4148	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	4156	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	4164	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	4172	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	4180	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	4188	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	4195	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	4203	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	4210	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	4218	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	4226	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	4233	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            { UMTS_TABLE_END }
         },
      },
      {
         /* Table 8 */
         {
            /* max arfcn, {Antenna_0 pwr_offset_db, Antenna_1 pwr_offset_db, Antenna_2 pwr_offset_db}*/
            /*             {R99, HSDPA, HSUPA} , {R99, HSDPA, HSUPA}, {R99, HSDPA, HSUPA}*/
            {	4132	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	4140	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	4148	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	4156	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	4164	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	4172	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	4180	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	4188	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	4195	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	4203	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	4210	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	4218	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	4226	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	4233	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            { UMTS_TABLE_END }
         }
      }
   }
};

const U_sTXPOWEROFFSETDATA TxPowerOffsetData_UMTSBand8_Set1 =
{
   {
      {
         /* Default Table 0 */
         {
            /* max arfcn, {Antenna_0 pwr_offset_db, Antenna_1 pwr_offset_db, Antenna_2 pwr_offset_db}*/
            /*             {R99, HSDPA, HSUPA} , {R99, HSDPA, HSUPA}, {R99, HSDPA, HSUPA}*/
            {	2712	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	2723	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	2734	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	2745	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	2756	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	2767	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	2778	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	2788	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	2799	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	2810	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	2821	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	2832	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	2843	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	2863	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            { UMTS_TABLE_END }
         },
      },
      {
         /* Table 1 */
         {
            /* max arfcn, {Antenna_0 pwr_offset_db, Antenna_1 pwr_offset_db, Antenna_2 pwr_offset_db}*/
            /*             {R99, HSDPA, HSUPA} , {R99, HSDPA, HSUPA}, {R99, HSDPA, HSUPA}*/
            {	2712	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	2723	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	2734	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	2745	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	2756	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	2767	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	2778	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	2788	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	2799	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	2810	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	2821	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	2832	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	2843	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	2863	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            { UMTS_TABLE_END }
         },
      },
      {
         /* Table 2 */
         {
            /* max arfcn, {Antenna_0 pwr_offset_db, Antenna_1 pwr_offset_db, Antenna_2 pwr_offset_db}*/
            /*             {R99, HSDPA, HSUPA} , {R99, HSDPA, HSUPA}, {R99, HSDPA, HSUPA}*/
            {	2712	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	2723	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	2734	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	2745	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	2756	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	2767	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	2778	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	2788	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	2799	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	2810	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	2821	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	2832	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	2843	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	2863	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            { UMTS_TABLE_END }
         },
      },
      {
         /* Table 3 */
         {
            /* max arfcn, {Antenna_0 pwr_offset_db, Antenna_1 pwr_offset_db, Antenna_2 pwr_offset_db}*/
            /*             {R99, HSDPA, HSUPA} , {R99, HSDPA, HSUPA}, {R99, HSDPA, HSUPA}*/
            {	2712	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	2723	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	2734	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	2745	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	2756	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	2767	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	2778	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	2788	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	2799	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	2810	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	2821	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	2832	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	2843	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	2863	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            { UMTS_TABLE_END }
         },
      },
      {
         /* Table 4 */
         {
            /* max arfcn, {Antenna_0 pwr_offset_db, Antenna_1 pwr_offset_db, Antenna_2 pwr_offset_db}*/
            /*             {R99, HSDPA, HSUPA} , {R99, HSDPA, HSUPA}, {R99, HSDPA, HSUPA}*/
            {	2712	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	2723	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	2734	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	2745	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	2756	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	2767	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	2778	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	2788	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	2799	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	2810	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	2821	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	2832	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	2843	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	2863	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            { UMTS_TABLE_END }
         },
      },
      {
         /* Table 5 */
         {
            /* max arfcn, {Antenna_0 pwr_offset_db, Antenna_1 pwr_offset_db, Antenna_2 pwr_offset_db}*/
            /*             {R99, HSDPA, HSUPA} , {R99, HSDPA, HSUPA}, {R99, HSDPA, HSUPA}*/
            {	2712	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	2723	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	2734	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	2745	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	2756	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	2767	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	2778	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	2788	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	2799	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	2810	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	2821	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	2832	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	2843	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	2863	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            { UMTS_TABLE_END }
         },
      },
      {
         /* Table 6 */
         {
            /* max arfcn, {Antenna_0 pwr_offset_db, Antenna_1 pwr_offset_db, Antenna_2 pwr_offset_db}*/
            /*             {R99, HSDPA, HSUPA} , {R99, HSDPA, HSUPA}, {R99, HSDPA, HSUPA}*/
            {	2712	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	2723	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	2734	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	2745	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	2756	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	2767	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	2778	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	2788	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	2799	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	2810	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	2821	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	2832	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	2843	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	2863	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            { UMTS_TABLE_END }
         },
      },
      {
         /* Table 7 */
         {
            /* max arfcn, {Antenna_0 pwr_offset_db, Antenna_1 pwr_offset_db, Antenna_2 pwr_offset_db}*/
            /*             {R99, HSDPA, HSUPA} , {R99, HSDPA, HSUPA}, {R99, HSDPA, HSUPA}*/
            {	2712	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	2723	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	2734	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	2745	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	2756	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	2767	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	2778	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	2788	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	2799	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	2810	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	2821	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	2832	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	2843	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	2863	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            { UMTS_TABLE_END }
         },
      },
      {
         /* Table 8 */
         {
            /* max arfcn, {Antenna_0 pwr_offset_db, Antenna_1 pwr_offset_db, Antenna_2 pwr_offset_db}*/
            /*             {R99, HSDPA, HSUPA} , {R99, HSDPA, HSUPA}, {R99, HSDPA, HSUPA}*/
            {	2712	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	2723	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	2734	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	2745	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	2756	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	2767	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	2778	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	2788	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	2799	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	2810	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	2821	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	2832	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	2843	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	2863	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            { UMTS_TABLE_END }
         }
      }
   }
};

const U_sTXPOWEROFFSETDATA* const U_TX_POWER_OFFSET_TABLE_Set1[] =
{
   M_UMTS_TX_PWR_OFFSET(UMTSBandNone, Set1),
   M_UMTS_TX_PWR_OFFSET(RX_BAND_INDICATOR_0_Set1, Set1),
   M_UMTS_TX_PWR_OFFSET(RX_BAND_INDICATOR_1_Set1, Set1),
   M_UMTS_TX_PWR_OFFSET(RX_BAND_INDICATOR_2_Set1, Set1),
   M_UMTS_TX_PWR_OFFSET(RX_BAND_INDICATOR_3_Set1, Set1),
   M_UMTS_TX_PWR_OFFSET(RX_BAND_INDICATOR_4_Set1, Set1)
};

#elif (IS_3G_TX_POWER_OFFSET_SUPPORT)
const U_sTXPOWEROFFSETDATA TxPowerOffsetData_UMTSBandNone_Set1 =
{
   {
      {
         /* Table 0 */
         {
            /* max arfcn, {Antenna_0 pwr_offset_db, Antenna_1 pwr_offset_db, Antenna_2 pwr_offset_db}*/
            /*             {R99, HSDPA, HSUPA} , {R99, HSDPA, HSUPA}, {R99, HSDPA, HSUPA}*/
            {	0	,	  {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	0	,	  {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	0	,	  {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	0	,	  {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	0	,	  {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	0	,	  {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	0	,	  {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	0	,	  {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	0	,	  {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	0	,	  {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	0	,	  {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	0	,	  {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	0	,	  {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	0	,	  {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            { UMTS_TABLE_END },
         }
      }
   }
};

const U_sTXPOWEROFFSETDATA TxPowerOffsetData_UMTSBand1_Set1 =
{
   {
      {
         /* Table 0 */
         {
            /* max arfcn, {Antenna_0 pwr_offset_db, Antenna_1 pwr_offset_db, Antenna_2 pwr_offset_db}*/
            /*             {R99, HSDPA, HSUPA} , {R99, HSDPA, HSUPA}, {R99, HSDPA, HSUPA}*/
            {	9612,	  {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9634,	  {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9656,	  {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9678,	  {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9700,	  {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9722,	  {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9744,	  {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9766,	  {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9788,	  {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9810,	  {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9832,	  {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9854,	  {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9876,	  {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9888,	  {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            { UMTS_TABLE_END },
         }
      }
   }
};

const U_sTXPOWEROFFSETDATA TxPowerOffsetData_UMTSBand2_Set1 =
{
   {
      {
         /* Table 0 */
         {
            /* max arfcn, {Antenna_0 pwr_offset_db, Antenna_1 pwr_offset_db, Antenna_2 pwr_offset_db}*/
            /*             {R99, HSDPA, HSUPA} , {R99, HSDPA, HSUPA}, {R99, HSDPA, HSUPA}*/
            {	9262	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9284	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9306	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9328	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9350	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9372	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9394	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9416	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9438	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9460	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9482	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9504	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9526	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	9538	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            { UMTS_TABLE_END }
         }
      }
   }
};

const U_sTXPOWEROFFSETDATA TxPowerOffsetData_UMTSBand4_Set1 =
{
   {
      {
         /* Table 0 */
         {
            /* max arfcn, {Antenna_0 pwr_offset_db, Antenna_1 pwr_offset_db, Antenna_2 pwr_offset_db}*/
            /*             {R99, HSDPA, HSUPA} , {R99, HSDPA, HSUPA}, {R99, HSDPA, HSUPA}*/
            {	1312	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	1327	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	1342	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	1357	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	1372	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	1387	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	1402	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	1417	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	1432	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	1450	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	1465	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	1480	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	1495	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	1513	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            { UMTS_TABLE_END }
         }
      }
   }
};

const U_sTXPOWEROFFSETDATA TxPowerOffsetData_UMTSBand5_Set1 =
{
   {
      {
         /* Table 0 */
         {
            /* max arfcn, {Antenna_0 pwr_offset_db, Antenna_1 pwr_offset_db, Antenna_2 pwr_offset_db}*/
            /*             {R99, HSDPA, HSUPA} , {R99, HSDPA, HSUPA}, {R99, HSDPA, HSUPA}*/
            {	4132	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	4140	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	4148	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	4156	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	4164	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	4172	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	4180	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	4188	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	4195	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	4203	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	4210	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	4218	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	4226	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	4233	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            { UMTS_TABLE_END }
         }
      }
   }
};

const U_sTXPOWEROFFSETDATA TxPowerOffsetData_UMTSBand8_Set1 =
{
   {
      {
         /* Table 0 */
         {
            /* max arfcn, {Antenna_0 pwr_offset_db, Antenna_1 pwr_offset_db, Antenna_2 pwr_offset_db}*/
            /*             {R99, HSDPA, HSUPA} , {R99, HSDPA, HSUPA}, {R99, HSDPA, HSUPA}*/
            {	2712	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	2723	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	2734	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	2745	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	2756	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	2767	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	2778	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	2788	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	2799	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	2810	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	2821	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	2832	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	2843	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            {	2863	, {{0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}, {0 	 ,	  0 	 ,	  0}}},
            { UMTS_TABLE_END }
         }
      }
   }
};

const U_sTXPOWEROFFSETDATA* const U_TX_POWER_OFFSET_TABLE_Set1[] =
{
   M_UMTS_TX_PWR_OFFSET(UMTSBandNone, Set1),
   M_UMTS_TX_PWR_OFFSET(RX_BAND_INDICATOR_0_Set1, Set1),
   M_UMTS_TX_PWR_OFFSET(RX_BAND_INDICATOR_1_Set1, Set1),
   M_UMTS_TX_PWR_OFFSET(RX_BAND_INDICATOR_2_Set1, Set1),
   M_UMTS_TX_PWR_OFFSET(RX_BAND_INDICATOR_3_Set1, Set1),
   M_UMTS_TX_PWR_OFFSET(RX_BAND_INDICATOR_4_Set1, Set1)
};

#endif /* IS_3G_TX_POWER_OFFSET_SUPPORT */

#if(IS_3G_RX_POWER_OFFSET_SUPPORT)
const U_sRXPOWEROFFSETDATA RxPowerOffsetData_UMTSBandNone_Set1 =
{
   {
     /* max arfcn , Main pwr_offset_db , Div pwr_offset_db (unit:1/4 dB) */
      {	0	,	 { U_GAINLOSS(0) 	 ,	  U_GAINLOSS(0) }	 },
      {	0	,	 { U_GAINLOSS(0) 	 ,	  U_GAINLOSS(0) }	 },
      {	0	,	 { U_GAINLOSS(0) 	 ,	  U_GAINLOSS(0) }	 },
      {	0	,	 { U_GAINLOSS(0) 	 ,	  U_GAINLOSS(0) }	 },
      {	0	,	 { U_GAINLOSS(0) 	 ,	  U_GAINLOSS(0) }	 },
      {	0	,	 { U_GAINLOSS(0) 	 ,	  U_GAINLOSS(0) }	 },
      {	0	,	 { U_GAINLOSS(0) 	 ,	  U_GAINLOSS(0) }	 },
      {	0	,	 { U_GAINLOSS(0) 	 ,	  U_GAINLOSS(0) }	 },
      {	0	,	 { U_GAINLOSS(0) 	 ,	  U_GAINLOSS(0) }	 },
      {	0	,	 { U_GAINLOSS(0) 	 ,	  U_GAINLOSS(0) }	 },
      {	0	,	 { U_GAINLOSS(0) 	 ,	  U_GAINLOSS(0) }	 },
      {	0	,	 { U_GAINLOSS(0) 	 ,	  U_GAINLOSS(0) }	 },
      {	0	,	 { U_GAINLOSS(0) 	 ,	  U_GAINLOSS(0) }	 },
      {	0	,	 { U_GAINLOSS(0) 	 ,	  U_GAINLOSS(0) }	 },
      { UMTS_TABLE_END }
   }
};  
const U_sRXPOWEROFFSETDATA RxPowerOffsetData_UMTSBand1_Set1 =
{
   {
     /* max arfcn , Main pwr_offset_db , Div pwr_offset_db (unit:1/4 dB) */
      {	10562	,	 { U_GAINLOSS(0) 	 ,	  U_GAINLOSS(0) }	 },
      {	10583	,	 { U_GAINLOSS(0) 	 ,	  U_GAINLOSS(0) }	 },
      {	10604	,	 { U_GAINLOSS(0) 	 ,	  U_GAINLOSS(0) }	 },
      {	10625	,	 { U_GAINLOSS(0) 	 ,	  U_GAINLOSS(0) }	 },
      {	10646	,	 { U_GAINLOSS(0) 	 ,	  U_GAINLOSS(0) }	 },
      {	10667	,	 { U_GAINLOSS(0) 	 ,	  U_GAINLOSS(0) }	 },
      {	10688	,	 { U_GAINLOSS(0) 	 ,	  U_GAINLOSS(0) }	 },
      {	10709	,	 { U_GAINLOSS(0) 	 ,	  U_GAINLOSS(0) }	 },
      {	10730	,	 { U_GAINLOSS(0) 	 ,	  U_GAINLOSS(0) }	 },
      {	10751	,	 { U_GAINLOSS(0) 	 ,	  U_GAINLOSS(0) }	 },
      {	10772	,	 { U_GAINLOSS(0) 	 ,	  U_GAINLOSS(0) }	 },
      {	10793	,	 { U_GAINLOSS(0) 	 ,	  U_GAINLOSS(0) }	 },
      {	10814	,	 { U_GAINLOSS(0) 	 ,	  U_GAINLOSS(0) }	 },
      {	10838	,	 { U_GAINLOSS(0) 	 ,	  U_GAINLOSS(0) }	 },
      { UMTS_TABLE_END }
   }
};  
const U_sRXPOWEROFFSETDATA RxPowerOffsetData_UMTSBand2_Set1 =
{
   {
     /* max arfcn , Main pwr_offset_db , Div pwr_offset_db (unit:1/4 dB) */
      {	9662	,	 { U_GAINLOSS(0) 	 ,	  U_GAINLOSS(0) }	 },
      {	9683	,	 { U_GAINLOSS(0) 	 ,	  U_GAINLOSS(0) }	 },
      {	9704	,	 { U_GAINLOSS(0) 	 ,	  U_GAINLOSS(0) }	 },
      {	9725	,	 { U_GAINLOSS(0) 	 ,	  U_GAINLOSS(0) }	 },
      {	9746	,	 { U_GAINLOSS(0) 	 ,	  U_GAINLOSS(0) }	 },
      {	9767	,	 { U_GAINLOSS(0) 	 ,	  U_GAINLOSS(0) }	 },
      {	9788	,	 { U_GAINLOSS(0) 	 ,	  U_GAINLOSS(0) }	 },
      {	9809	,	 { U_GAINLOSS(0) 	 ,	  U_GAINLOSS(0) }	 },
      {	9830	,	 { U_GAINLOSS(0) 	 ,	  U_GAINLOSS(0) }	 },
      {	9851	,	 { U_GAINLOSS(0) 	 ,	  U_GAINLOSS(0) }	 },
      {	9872	,	 { U_GAINLOSS(0) 	 ,	  U_GAINLOSS(0) }	 },
      {	9893	,	 { U_GAINLOSS(0) 	 ,	  U_GAINLOSS(0) }	 },
      {	9914	,	 { U_GAINLOSS(0) 	 ,	  U_GAINLOSS(0) }	 },
      {	9938	,	 { U_GAINLOSS(0) 	 ,	  U_GAINLOSS(0) }	 },
      { UMTS_TABLE_END }
   }
};
const U_sRXPOWEROFFSETDATA RxPowerOffsetData_UMTSBand4_Set1 =
{
   {
     /* max arfcn , Main pwr_offset_db , Div pwr_offset_db (unit:1/4 dB) */
      {	1537	,	 { U_GAINLOSS(0) 	 ,	  U_GAINLOSS(0) }	 },
      {	1552	,	 { U_GAINLOSS(0) 	 ,	  U_GAINLOSS(0) }	 },
      {	1568	,	 { U_GAINLOSS(0) 	 ,	  U_GAINLOSS(0) }	 },
      {	1583	,	 { U_GAINLOSS(0) 	 ,	  U_GAINLOSS(0) }	 },
      {	1599	,	 { U_GAINLOSS(0) 	 ,	  U_GAINLOSS(0) }	 },
      {	1614	,	 { U_GAINLOSS(0) 	 ,	  U_GAINLOSS(0) }	 },
      {	1630	,	 { U_GAINLOSS(0) 	 ,	  U_GAINLOSS(0) }	 },
      {	1645	,	 { U_GAINLOSS(0) 	 ,	  U_GAINLOSS(0) }	 },
      {	1661	,	 { U_GAINLOSS(0) 	 ,	  U_GAINLOSS(0) }	 },
      {	1676	,	 { U_GAINLOSS(0) 	 ,	  U_GAINLOSS(0) }	 },
      {	1692	,	 { U_GAINLOSS(0) 	 ,	  U_GAINLOSS(0) }	 },
      {	1707	,	 { U_GAINLOSS(0) 	 ,	  U_GAINLOSS(0) }	 },
      {	1722	,	 { U_GAINLOSS(0) 	 ,	  U_GAINLOSS(0) }	 },
      {	1738	,	 { U_GAINLOSS(0) 	 ,	  U_GAINLOSS(0) }	 },
      { UMTS_TABLE_END }
   }
};
const U_sRXPOWEROFFSETDATA RxPowerOffsetData_UMTSBand5_Set1 =
{
   {
     /* max arfcn , Main pwr_offset_db , Div pwr_offset_db (unit:1/4 dB) */
      {	4357	,	 { U_GAINLOSS(0) 	 ,	  U_GAINLOSS(0) }	 },
      {	4364	,	 { U_GAINLOSS(0) 	 ,	  U_GAINLOSS(0) }	 },
      {	4372	,	 { U_GAINLOSS(0) 	 ,	  U_GAINLOSS(0) }	 },
      {	4379	,	 { U_GAINLOSS(0) 	 ,	  U_GAINLOSS(0) }	 },
      {	4387	,	 { U_GAINLOSS(0) 	 ,	  U_GAINLOSS(0) }	 },
      {	4394	,	 { U_GAINLOSS(0) 	 ,	  U_GAINLOSS(0) }	 },
      {	4402	,	 { U_GAINLOSS(0) 	 ,	  U_GAINLOSS(0) }	 },
      {	4409	,	 { U_GAINLOSS(0) 	 ,	  U_GAINLOSS(0) }	 },
      {	4417	,	 { U_GAINLOSS(0) 	 ,	  U_GAINLOSS(0) }	 },
      {	4424	,	 { U_GAINLOSS(0) 	 ,	  U_GAINLOSS(0) }	 },
      {	4432	,	 { U_GAINLOSS(0) 	 ,	  U_GAINLOSS(0) }	 },
      {	4439	,	 { U_GAINLOSS(0) 	 ,	  U_GAINLOSS(0) }	 },
      {	4447	,	 { U_GAINLOSS(0) 	 ,	  U_GAINLOSS(0) }	 },
      {	4458	,	 { U_GAINLOSS(0) 	 ,	  U_GAINLOSS(0) }	 },
      { UMTS_TABLE_END }
   }
};
const U_sRXPOWEROFFSETDATA RxPowerOffsetData_UMTSBand8_Set1 =
{
   {
     /* max arfcn , Main pwr_offset_db , Div pwr_offset_db (unit:1/4 dB) */
      {	2937	,	 { U_GAINLOSS(0) 	 ,	  U_GAINLOSS(0) }	 },
      {	2949	,	 { U_GAINLOSS(0) 	 ,	  U_GAINLOSS(0) }	 },
      {	2960	,	 { U_GAINLOSS(0) 	 ,	  U_GAINLOSS(0) }	 },
      {	2972	,	 { U_GAINLOSS(0) 	 ,	  U_GAINLOSS(0) }	 },
      {	2983	,	 { U_GAINLOSS(0) 	 ,	  U_GAINLOSS(0) }	 },
      {	2995	,	 { U_GAINLOSS(0) 	 ,	  U_GAINLOSS(0) }	 },
      {	3006	,	 { U_GAINLOSS(0) 	 ,	  U_GAINLOSS(0) }	 },
      {	3018	,	 { U_GAINLOSS(0) 	 ,	  U_GAINLOSS(0) }	 },
      {	3029	,	 { U_GAINLOSS(0) 	 ,	  U_GAINLOSS(0) }	 },
      {	3041	,	 { U_GAINLOSS(0) 	 ,	  U_GAINLOSS(0) }	 },
      {	3052	,	 { U_GAINLOSS(0) 	 ,	  U_GAINLOSS(0) }	 },
      {	3064	,	 { U_GAINLOSS(0) 	 ,	  U_GAINLOSS(0) }	 },
      {	3075	,	 { U_GAINLOSS(0) 	 ,	  U_GAINLOSS(0) }	 },
      {	3088	,	 { U_GAINLOSS(0) 	 ,	  U_GAINLOSS(0) }	 },
      { UMTS_TABLE_END }
   }
};


const U_sRXPOWEROFFSETDATA* const U_RX_POWER_OFFSET_TABLE_Set1[] =
{
   M_UMTS_RX_PWR_OFFSET(UMTSBandNone, Set1),
   M_UMTS_RX_PWR_OFFSET(RX_BAND_INDICATOR_0_Set1, Set1),
   M_UMTS_RX_PWR_OFFSET(RX_BAND_INDICATOR_1_Set1, Set1),
   M_UMTS_RX_PWR_OFFSET(RX_BAND_INDICATOR_2_Set1, Set1),
   M_UMTS_RX_PWR_OFFSET(RX_BAND_INDICATOR_3_Set1, Set1),
   M_UMTS_RX_PWR_OFFSET(RX_BAND_INDICATOR_4_Set1, Set1)
};

#endif

#if IS_3G_RFEQ_REAL_COEF_TEST
const URXDFE_REAL_RFEQ_CUSTOM_BAND_T UMTS_RFEQ_REAL_COEF_UMTSBandNone_Set1 =
{
   {
      { //subband_ind 0
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }   //real, A0/A1
      },
      { //subband_ind 1
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }   //real, A0/A1
      },
      { //subband_ind 2
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }   //real, A0/A1
      },
      { //subband_ind 3
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }   //real, A0/A1
      },
      { //subband_ind 4
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }   //real, A0/A1
      },
      { //subband_ind 5
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }   //real, A0/A1
      },
      { //subband_ind 6
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }   //real, A0/A1
      },
      { //subband_ind 7
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }   //real, A0/A1
      },
      { //subband_ind 8
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }   //real, A0/A1
      },
      { //subband_ind 9
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }   //real, A0/A1
      },
      { //subband_ind 10
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }   //real, A0/A1
      },
      { //subband_ind 11
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }   //real, A0/A1
      },
      { //subband_ind 12
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }   //real, A0/A1
      },
      { //subband_ind 13
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }   //real, A0/A1
      },
      { //subband_ind 14
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }   //real, A0/A1
      }
   }
};

const URXDFE_REAL_RFEQ_CUSTOM_BAND_T UMTS_RFEQ_REAL_COEF_UMTSBand1_Set1 =
{
   {
      { //subband_ind 0
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }   //real, A0/A1
      },
      { //subband_ind 1
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }   //real, A0/A1
      },
      { //subband_ind 2
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }   //real, A0/A1
      },
      { //subband_ind 3
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }   //real, A0/A1
      },
      { //subband_ind 4
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }   //real, A0/A1
      },
      { //subband_ind 5
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }   //real, A0/A1
      },
      { //subband_ind 6
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }   //real, A0/A1
      },
      { //subband_ind 7
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }   //real, A0/A1
      },
      { //subband_ind 8
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }   //real, A0/A1
      },
      { //subband_ind 9
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }   //real, A0/A1
      },
      { //subband_ind 10
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }   //real, A0/A1
      },
      { //subband_ind 11
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }   //real, A0/A1
      },
      { //subband_ind 12
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }   //real, A0/A1
      },
      { //subband_ind 13
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }   //real, A0/A1
      },
      { //subband_ind 14
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }   //real, A0/A1
      }
   }
};

const URXDFE_REAL_RFEQ_CUSTOM_BAND_T UMTS_RFEQ_REAL_COEF_UMTSBand2_Set1 =
{
   {
      { //subband_ind 0
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }   //real, A0/A1
      },
      { //subband_ind 1
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }   //real, A0/A1
      },
      { //subband_ind 2
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }   //real, A0/A1
      },
      { //subband_ind 3
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }   //real, A0/A1
      },
      { //subband_ind 4
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }   //real, A0/A1
      },
      { //subband_ind 5
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }   //real, A0/A1
      },
      { //subband_ind 6
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }   //real, A0/A1
      },
      { //subband_ind 7
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }   //real, A0/A1
      },
      { //subband_ind 8
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }   //real, A0/A1
      },
      { //subband_ind 9
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }   //real, A0/A1
      },
      { //subband_ind 10
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }   //real, A0/A1
      },
      { //subband_ind 11
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }   //real, A0/A1
      },
      { //subband_ind 12
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }   //real, A0/A1
      },
      { //subband_ind 13
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }   //real, A0/A1
      },
      { //subband_ind 14
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }   //real, A0/A1
      }
   }
};

const URXDFE_REAL_RFEQ_CUSTOM_BAND_T UMTS_RFEQ_REAL_COEF_UMTSBand4_Set1 =
{
   {
      { //subband_ind 0
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }   //real, A0/A1
      },
      { //subband_ind 1
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }   //real, A0/A1
      },
      { //subband_ind 2
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }   //real, A0/A1
      },
      { //subband_ind 3
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }   //real, A0/A1
      },
      { //subband_ind 4
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }   //real, A0/A1
      },
      { //subband_ind 5
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }   //real, A0/A1
      },
      { //subband_ind 6
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }   //real, A0/A1
      },
      { //subband_ind 7
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }   //real, A0/A1
      },
      { //subband_ind 8
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }   //real, A0/A1
      },
      { //subband_ind 9
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }   //real, A0/A1
      },
      { //subband_ind 10
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }   //real, A0/A1
      },
      { //subband_ind 11
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }   //real, A0/A1
      },
      { //subband_ind 12
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }   //real, A0/A1
      },
      { //subband_ind 13
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }   //real, A0/A1
      },
      { //subband_ind 14
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }   //real, A0/A1
      }
   }
};

const URXDFE_REAL_RFEQ_CUSTOM_BAND_T UMTS_RFEQ_REAL_COEF_UMTSBand5_Set1 =
{
   {
      { //subband_ind 0
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }   //real, A0/A1
      },
      { //subband_ind 1
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }   //real, A0/A1
      },
      { //subband_ind 2
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }   //real, A0/A1
      },
      { //subband_ind 3
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }   //real, A0/A1
      },
      { //subband_ind 4
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }   //real, A0/A1
      },
      { //subband_ind 5
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }   //real, A0/A1
      },
      { //subband_ind 6
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }   //real, A0/A1
      },
      { //subband_ind 7
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }   //real, A0/A1
      },
      { //subband_ind 8
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }   //real, A0/A1
      },
      { //subband_ind 9
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }   //real, A0/A1
      },
      { //subband_ind 10
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }   //real, A0/A1
      },
      { //subband_ind 11
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }   //real, A0/A1
      },
      { //subband_ind 12
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }   //real, A0/A1
      },
      { //subband_ind 13
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }   //real, A0/A1
      },
      { //subband_ind 14
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }   //real, A0/A1
      }
   }
};

const URXDFE_REAL_RFEQ_CUSTOM_BAND_T UMTS_RFEQ_REAL_COEF_UMTSBand8_Set1 =
{
   {
      { //subband_ind 0
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }   //real, A0/A1
      },
      { //subband_ind 1
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }   //real, A0/A1
      },
      { //subband_ind 2
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }   //real, A0/A1
      },
      { //subband_ind 3
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }   //real, A0/A1
      },
      { //subband_ind 4
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }   //real, A0/A1
      },
      { //subband_ind 5
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }   //real, A0/A1
      },
      { //subband_ind 6
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }   //real, A0/A1
      },
      { //subband_ind 7
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }   //real, A0/A1
      },
      { //subband_ind 8
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }   //real, A0/A1
      },
      { //subband_ind 9
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }   //real, A0/A1
      },
      { //subband_ind 10
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }   //real, A0/A1
      },
      { //subband_ind 11
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }   //real, A0/A1
      },
      { //subband_ind 12
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }   //real, A0/A1
      },
      { //subband_ind 13
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }   //real, A0/A1
      },
      { //subband_ind 14
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }   //real, A0/A1
      }
   }
};

const URXDFE_REAL_RFEQ_CUSTOM_BAND_T UMTS_RFEQ_REAL_COEF_UMTSBand3_Set1 =
{
   {
      { //subband_ind 0
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }   //real, A0/A1
      },
      { //subband_ind 1
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }   //real, A0/A1
      },
      { //subband_ind 2
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }   //real, A0/A1
      },
      { //subband_ind 3
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }   //real, A0/A1
      },
      { //subband_ind 4
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }   //real, A0/A1
      },
      { //subband_ind 5
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }   //real, A0/A1
      },
      { //subband_ind 6
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }   //real, A0/A1
      },
      { //subband_ind 7
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }   //real, A0/A1
      },
      { //subband_ind 8
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }   //real, A0/A1
      },
      { //subband_ind 9
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }   //real, A0/A1
      },
      { //subband_ind 10
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }   //real, A0/A1
      },
      { //subband_ind 11
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }   //real, A0/A1
      },
      { //subband_ind 12
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }   //real, A0/A1
      },
      { //subband_ind 13
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }   //real, A0/A1
      },
      { //subband_ind 14
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }   //real, A0/A1
      }
   }
};

const URXDFE_REAL_RFEQ_CUSTOM_BAND_T UMTS_RFEQ_REAL_COEF_UMTSBand6_Set1 =
{
   {
      { //subband_ind 0
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }   //real, A0/A1
      },
      { //subband_ind 1
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }   //real, A0/A1
      },
      { //subband_ind 2
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }   //real, A0/A1
      },
      { //subband_ind 3
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }   //real, A0/A1
      },
      { //subband_ind 4
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }   //real, A0/A1
      },
      { //subband_ind 5
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }   //real, A0/A1
      },
      { //subband_ind 6
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }   //real, A0/A1
      },
      { //subband_ind 7
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }   //real, A0/A1
      },
      { //subband_ind 8
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }   //real, A0/A1
      },
      { //subband_ind 9
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }   //real, A0/A1
      },
      { //subband_ind 10
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }   //real, A0/A1
      },
      { //subband_ind 11
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }   //real, A0/A1
      },
      { //subband_ind 12
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }   //real, A0/A1
      },
      { //subband_ind 13
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }   //real, A0/A1
      },
      { //subband_ind 14
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }   //real, A0/A1
      }
   }
};

const URXDFE_REAL_RFEQ_CUSTOM_BAND_T UMTS_RFEQ_REAL_COEF_UMTSBand9_Set1 =
{
   {
      { //subband_ind 0
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }   //real, A0/A1
      },
      { //subband_ind 1
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }   //real, A0/A1
      },
      { //subband_ind 2
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }   //real, A0/A1
      },
      { //subband_ind 3
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }   //real, A0/A1
      },
      { //subband_ind 4
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }   //real, A0/A1
      },
      { //subband_ind 5
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }   //real, A0/A1
      },
      { //subband_ind 6
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }   //real, A0/A1
      },
      { //subband_ind 7
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }   //real, A0/A1
      },
      { //subband_ind 8
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }   //real, A0/A1
      },
      { //subband_ind 9
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }   //real, A0/A1
      },
      { //subband_ind 10
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }   //real, A0/A1
      },
      { //subband_ind 11
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }   //real, A0/A1
      },
      { //subband_ind 12
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }   //real, A0/A1
      },
      { //subband_ind 13
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }   //real, A0/A1
      },
      { //subband_ind 14
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }   //real, A0/A1
      }
   }
};

const URXDFE_REAL_RFEQ_CUSTOM_BAND_T UMTS_RFEQ_REAL_COEF_UMTSBand11_Set1 =
{
   {
      { //subband_ind 0
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }   //real, A0/A1
      },
      { //subband_ind 1
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }   //real, A0/A1
      },
      { //subband_ind 2
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }   //real, A0/A1
      },
      { //subband_ind 3
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }   //real, A0/A1
      },
      { //subband_ind 4
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }   //real, A0/A1
      },
      { //subband_ind 5
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }   //real, A0/A1
      },
      { //subband_ind 6
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }   //real, A0/A1
      },
      { //subband_ind 7
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }   //real, A0/A1
      },
      { //subband_ind 8
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }   //real, A0/A1
      },
      { //subband_ind 9
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }   //real, A0/A1
      },
      { //subband_ind 10
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }   //real, A0/A1
      },
      { //subband_ind 11
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }   //real, A0/A1
      },
      { //subband_ind 12
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }   //real, A0/A1
      },
      { //subband_ind 13
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }   //real, A0/A1
      },
      { //subband_ind 14
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }   //real, A0/A1
      }
   }
};

const URXDFE_REAL_RFEQ_CUSTOM_BAND_T UMTS_RFEQ_REAL_COEF_UMTSBand19_Set1 =
{
   {
      { //subband_ind 0
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }   //real, A0/A1
      },
      { //subband_ind 1
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }   //real, A0/A1
      },
      { //subband_ind 2
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }   //real, A0/A1
      },
      { //subband_ind 3
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }   //real, A0/A1
      },
      { //subband_ind 4
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }   //real, A0/A1
      },
      { //subband_ind 5
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }   //real, A0/A1
      },
      { //subband_ind 6
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }   //real, A0/A1
      },
      { //subband_ind 7
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }   //real, A0/A1
      },
      { //subband_ind 8
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }   //real, A0/A1
      },
      { //subband_ind 9
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }   //real, A0/A1
      },
      { //subband_ind 10
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }   //real, A0/A1
      },
      { //subband_ind 11
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }   //real, A0/A1
      },
      { //subband_ind 12
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }   //real, A0/A1
      },
      { //subband_ind 13
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }   //real, A0/A1
      },
      { //subband_ind 14
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }   //real, A0/A1
      }
   }
};

const URXDFE_REAL_RFEQ_CUSTOM_BAND_T* const UMTS_RFEQ_REAL_COEF_TABLE_Set1[] =
{
   M_UMTS_REAL_RFEQ_COEF(UMTSBandNone, Set1),
   M_UMTS_REAL_RFEQ_COEF(RX_BAND_INDICATOR_0_Set1, Set1),
   M_UMTS_REAL_RFEQ_COEF(RX_BAND_INDICATOR_1_Set1, Set1),
   M_UMTS_REAL_RFEQ_COEF(RX_BAND_INDICATOR_2_Set1, Set1),
   M_UMTS_REAL_RFEQ_COEF(RX_BAND_INDICATOR_3_Set1, Set1),
   M_UMTS_REAL_RFEQ_COEF(RX_BAND_INDICATOR_4_Set1, Set1)
};
#endif


