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

#if IS_3G_RFEQ_COEF_SUBBAND_SUPPORT
const hs_dsch_rfeq_info_band_T UMTS_RFEQ_COEF_UMTSBandNone_Set2 =
{
   {
      { //subband_ind 0
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} },  //real, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} }   //image, A0/A1
      },
      { //subband_ind 1
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} },  //real, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} }   //image, A0/A1
      },
      { //subband_ind 2
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} },  //real, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} }   //image, A0/A1
      },
      { //subband_ind 3
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} },  //real, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} }   //image, A0/A1
      },
      { //subband_ind 4
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} },  //real, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} }   //image, A0/A1
      },
      { //subband_ind 5
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} },  //real, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} }   //image, A0/A1
      },
      { //subband_ind 6
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} },  //real, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} }   //image, A0/A1
      },
      { //subband_ind 7
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} },  //real, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} }   //image, A0/A1
      },
      { //subband_ind 8
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} },  //real, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} }   //image, A0/A1
      },
      { //subband_ind 9
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} },  //real, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} }   //image, A0/A1
      },
      { //subband_ind 10
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} },  //real, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} }   //image, A0/A1
      },
      { //subband_ind 11
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} },  //real, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} }   //image, A0/A1
      },
      { //subband_ind 12
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} },  //real, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} }   //image, A0/A1
      },
      { //subband_ind 13
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} },  //real, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} }   //image, A0/A1
      },
      { //subband_ind 14
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} },  //real, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} }   //image, A0/A1
      }
   }
};

const hs_dsch_rfeq_info_band_T UMTS_RFEQ_COEF_UMTSBand1_Set2 =
{ 
   {
      { //subband_ind 0
         10670,                                             //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} },  //real, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} }   //image, A0/A1
      },
      { //subband_ind 1
         10770,                                             //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} },  //real, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} }   //image, A0/A1
      },
      { //subband_ind 2
         10838,                                             //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} },  //real, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} }   //image, A0/A1
      },
      { //subband_ind 3
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} },  //real, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} }   //image, A0/A1
      },
      { //subband_ind 4
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} },  //real, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} }   //image, A0/A1
      },
      { //subband_ind 5
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} },  //real, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} }   //image, A0/A1
      },
      { //subband_ind 6
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} },  //real, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} }   //image, A0/A1
      },
      { //subband_ind 7
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} },  //real, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} }   //image, A0/A1
      },
      { //subband_ind 8
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} },  //real, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} }   //image, A0/A1
      },
      { //subband_ind 9
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} },  //real, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} }   //image, A0/A1
      },
      { //subband_ind 10
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} },  //real, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} }   //image, A0/A1
      },
      { //subband_ind 11
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} },  //real, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} }   //image, A0/A1
      },
      { //subband_ind 12
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} },  //real, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} }   //image, A0/A1
      },
      { //subband_ind 13
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} },  //real, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} }   //image, A0/A1
      },
      { //subband_ind 14
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} },  //real, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} }   //image, A0/A1
      }
   }
};

const hs_dsch_rfeq_info_band_T UMTS_RFEQ_COEF_UMTSBand2_Set2 =
{
   {
      { //subband_ind 0
         9700,                                             //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} },  //real, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} }   //image, A0/A1
      },
      { //subband_ind 1
         9800,                                             //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} },  //real, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} }   //image, A0/A1
      },
      { //subband_ind 2
         9938,                                             //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} },  //real, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} }   //image, A0/A1
      },
      { //subband_ind 3
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} },  //real, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} }   //image, A0/A1
      },
      { //subband_ind 4
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} },  //real, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} }   //image, A0/A1
      },
      { //subband_ind 5
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} },  //real, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} }   //image, A0/A1
      },
      { //subband_ind 6
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} },  //real, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} }   //image, A0/A1
      },
      { //subband_ind 7
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} },  //real, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} }   //image, A0/A1
      },
      { //subband_ind 8
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} },  //real, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} }   //image, A0/A1
      },
      { //subband_ind 9
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} },  //real, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} }   //image, A0/A1
      },
      { //subband_ind 10
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} },  //real, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} }   //image, A0/A1
      },
      { //subband_ind 11
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} },  //real, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} }   //image, A0/A1
      },
      { //subband_ind 12
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} },  //real, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} }   //image, A0/A1
      },
      { //subband_ind 13
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} },  //real, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} }   //image, A0/A1
      },
      { //subband_ind 14
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} },  //real, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} }   //image, A0/A1
      }
   }
};

const hs_dsch_rfeq_info_band_T UMTS_RFEQ_COEF_UMTSBand4_Set2 =
{
   {
      { //subband_ind 0
         1600,                                             //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} },  //real, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} }   //image, A0/A1
      },
      { //subband_ind 1
         1700,                                             //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} },  //real, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} }   //image, A0/A1
      },
      { //subband_ind 2
         1738,                                             //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} },  //real, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} }   //image, A0/A1
      },
      { //subband_ind 3
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} },  //real, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} }   //image, A0/A1
      },
      { //subband_ind 4
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} },  //real, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} }   //image, A0/A1
      },
      { //subband_ind 5
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} },  //real, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} }   //image, A0/A1
      },
      { //subband_ind 6
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} },  //real, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} }   //image, A0/A1
      },
      { //subband_ind 7
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} },  //real, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} }   //image, A0/A1
      },
      { //subband_ind 8
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} },  //real, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} }   //image, A0/A1
      },
      { //subband_ind 9
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} },  //real, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} }   //image, A0/A1
      },
      { //subband_ind 10
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} },  //real, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} }   //image, A0/A1
      },
      { //subband_ind 11
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} },  //real, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} }   //image, A0/A1
      },
      { //subband_ind 12
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} },  //real, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} }   //image, A0/A1
      },
      { //subband_ind 13
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} },  //real, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} }   //image, A0/A1
      },
      { //subband_ind 14
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} },  //real, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} }   //image, A0/A1
      }
   }
};

const hs_dsch_rfeq_info_band_T UMTS_RFEQ_COEF_UMTSBand5_Set2 =
{
   {
      { //subband_ind 0
         4380,                                             //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} },  //real, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} }   //image, A0/A1
      },
      { //subband_ind 1
         4430,                                             //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} },  //real, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} }   //image, A0/A1
      },
      { //subband_ind 2
         4458,                                             //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} },  //real, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} }   //image, A0/A1
      },
      { //subband_ind 3
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} },  //real, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} }   //image, A0/A1
      },
      { //subband_ind 4
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} },  //real, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} }   //image, A0/A1
      },
      { //subband_ind 5
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} },  //real, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} }   //image, A0/A1
      },
      { //subband_ind 6
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} },  //real, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} }   //image, A0/A1
      },
      { //subband_ind 7
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} },  //real, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} }   //image, A0/A1
      },
      { //subband_ind 8
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} },  //real, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} }   //image, A0/A1
      },
      { //subband_ind 9
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} },  //real, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} }   //image, A0/A1
      },
      { //subband_ind 10
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} },  //real, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} }   //image, A0/A1
      },
      { //subband_ind 11
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} },  //real, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} }   //image, A0/A1
      },
      { //subband_ind 12
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} },  //real, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} }   //image, A0/A1
      },
      { //subband_ind 13
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} },  //real, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} }   //image, A0/A1
      },
      { //subband_ind 14
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} },  //real, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} }   //image, A0/A1
      }      
   }
};

const hs_dsch_rfeq_info_band_T UMTS_RFEQ_COEF_UMTSBand8_Set2 =
{
   {
      { //subband_ind 0
         2980,                                              //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} },  //real, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} }   //image, A0/A1
      },
      { //subband_ind 1
         3050,                                              //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} },  //real, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} }   //image, A0/A1
      },
      { //subband_ind 2
         3088,                                              //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} },  //real, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} }   //image, A0/A1
      },
      { //subband_ind 3
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} },  //real, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} }   //image, A0/A1
      },
      { //subband_ind 4
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} },  //real, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} }   //image, A0/A1
      },
      { //subband_ind 5
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} },  //real, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} }   //image, A0/A1
      },
      { //subband_ind 6
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} },  //real, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} }   //image, A0/A1
      },
      { //subband_ind 7
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} },  //real, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} }   //image, A0/A1
      },
      { //subband_ind 8
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} },  //real, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} }   //image, A0/A1
      },
      { //subband_ind 9
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} },  //real, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} }   //image, A0/A1
      },
      { //subband_ind 10
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} },  //real, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} }   //image, A0/A1
      },
      { //subband_ind 11
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} },  //real, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} }   //image, A0/A1
      },
      { //subband_ind 12
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} },  //real, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} }   //image, A0/A1
      },
      { //subband_ind 13
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} },  //real, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} }   //image, A0/A1
      },
      { //subband_ind 14
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} },  //real, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} }   //image, A0/A1
      }
   }
};

const hs_dsch_rfeq_info_band_T UMTS_RFEQ_COEF_UMTSBand3_Set2 =
{
   {
      { //subband_ind 0
         0,                                              //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} },  //real, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} }   //image, A0/A1
      },
      { //subband_ind 1
         0,                                              //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} },  //real, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} }   //image, A0/A1
      },
      { //subband_ind 2
         0,                                              //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} },  //real, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} }   //image, A0/A1
      },
      { //subband_ind 3
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} },  //real, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} }   //image, A0/A1
      },
      { //subband_ind 4
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} },  //real, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} }   //image, A0/A1
      },
      { //subband_ind 5
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} },  //real, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} }   //image, A0/A1
      },
      { //subband_ind 6
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} },  //real, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} }   //image, A0/A1
      },
      { //subband_ind 7
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} },  //real, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} }   //image, A0/A1
      },
      { //subband_ind 8
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} },  //real, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} }   //image, A0/A1
      },
      { //subband_ind 9
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} },  //real, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} }   //image, A0/A1
      },
      { //subband_ind 10
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} },  //real, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} }   //image, A0/A1
      },
      { //subband_ind 11
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} },  //real, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} }   //image, A0/A1
      },
      { //subband_ind 12
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} },  //real, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} }   //image, A0/A1
      },
      { //subband_ind 13
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} },  //real, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} }   //image, A0/A1
      },
      { //subband_ind 14
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} },  //real, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} }   //image, A0/A1
      }
   }
};

const hs_dsch_rfeq_info_band_T UMTS_RFEQ_COEF_UMTSBand6_Set2 =
{
   {
      { //subband_ind 0
         0,                                              //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} },  //real, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} }   //image, A0/A1
      },
      { //subband_ind 1
         0,                                              //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} },  //real, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} }   //image, A0/A1
      },
      { //subband_ind 2
         0,                                              //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} },  //real, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} }   //image, A0/A1
      },
      { //subband_ind 3
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} },  //real, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} }   //image, A0/A1
      },
      { //subband_ind 4
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} },  //real, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} }   //image, A0/A1
      },
      { //subband_ind 5
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} },  //real, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} }   //image, A0/A1
      },
      { //subband_ind 6
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} },  //real, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} }   //image, A0/A1
      },
      { //subband_ind 7
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} },  //real, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} }   //image, A0/A1
      },
      { //subband_ind 8
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} },  //real, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} }   //image, A0/A1
      },
      { //subband_ind 9
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} },  //real, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} }   //image, A0/A1
      },
      { //subband_ind 10
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} },  //real, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} }   //image, A0/A1
      },
      { //subband_ind 11
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} },  //real, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} }   //image, A0/A1
      },
      { //subband_ind 12
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} },  //real, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} }   //image, A0/A1
      },
      { //subband_ind 13
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} },  //real, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} }   //image, A0/A1
      },
      { //subband_ind 14
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} },  //real, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} }   //image, A0/A1
      }
   }
};

const hs_dsch_rfeq_info_band_T UMTS_RFEQ_COEF_UMTSBand9_Set2 =
{
   {
      { //subband_ind 0
         0,                                              //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} },  //real, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} }   //image, A0/A1
      },
      { //subband_ind 1
         0,                                              //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} },  //real, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} }   //image, A0/A1
      },
      { //subband_ind 2
         0,                                              //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} },  //real, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} }   //image, A0/A1
      },
      { //subband_ind 3
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} },  //real, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} }   //image, A0/A1
      },
      { //subband_ind 4
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} },  //real, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} }   //image, A0/A1
      },
      { //subband_ind 5
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} },  //real, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} }   //image, A0/A1
      },
      { //subband_ind 6
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} },  //real, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} }   //image, A0/A1
      },
      { //subband_ind 7
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} },  //real, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} }   //image, A0/A1
      },
      { //subband_ind 8
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} },  //real, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} }   //image, A0/A1
      },
      { //subband_ind 9
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} },  //real, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} }   //image, A0/A1
      },
      { //subband_ind 10
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} },  //real, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} }   //image, A0/A1
      },
      { //subband_ind 11
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} },  //real, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} }   //image, A0/A1
      },
      { //subband_ind 12
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} },  //real, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} }   //image, A0/A1
      },
      { //subband_ind 13
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} },  //real, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} }   //image, A0/A1
      },
      { //subband_ind 14
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} },  //real, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} }   //image, A0/A1
      }
   }
};

const hs_dsch_rfeq_info_band_T UMTS_RFEQ_COEF_UMTSBand11_Set2 =
{
   {
      { //subband_ind 0
         0,                                              //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} },  //real, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} }   //image, A0/A1
      },
      { //subband_ind 1
         0,                                              //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} },  //real, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} }   //image, A0/A1
      },
      { //subband_ind 2
         0,                                              //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} },  //real, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} }   //image, A0/A1
      },
      { //subband_ind 3
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} },  //real, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} }   //image, A0/A1
      },
      { //subband_ind 4
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} },  //real, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} }   //image, A0/A1
      },
      { //subband_ind 5
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} },  //real, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} }   //image, A0/A1
      },
      { //subband_ind 6
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} },  //real, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} }   //image, A0/A1
      },
      { //subband_ind 7
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} },  //real, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} }   //image, A0/A1
      },
      { //subband_ind 8
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} },  //real, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} }   //image, A0/A1
      },
      { //subband_ind 9
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} },  //real, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} }   //image, A0/A1
      },
      { //subband_ind 10
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} },  //real, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} }   //image, A0/A1
      },
      { //subband_ind 11
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} },  //real, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} }   //image, A0/A1
      },
      { //subband_ind 12
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} },  //real, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} }   //image, A0/A1
      },
      { //subband_ind 13
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} },  //real, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} }   //image, A0/A1
      },
      { //subband_ind 14
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} },  //real, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} }   //image, A0/A1
      }
   }
};

const hs_dsch_rfeq_info_band_T UMTS_RFEQ_COEF_UMTSBand19_Set2 =
{
   {
      { //subband_ind 0
         0,                                              //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} },  //real, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} }   //image, A0/A1
      },
      { //subband_ind 1
         0,                                              //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} },  //real, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} }   //image, A0/A1
      },
      { //subband_ind 2
         0,                                              //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} },  //real, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} }   //image, A0/A1
      },
      { //subband_ind 3
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} },  //real, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} }   //image, A0/A1
      },
      { //subband_ind 4
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} },  //real, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} }   //image, A0/A1
      },
      { //subband_ind 5
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} },  //real, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} }   //image, A0/A1
      },
      { //subband_ind 6
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} },  //real, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} }   //image, A0/A1
      },
      { //subband_ind 7
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} },  //real, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} }   //image, A0/A1
      },
      { //subband_ind 8
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} },  //real, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} }   //image, A0/A1
      },
      { //subband_ind 9
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} },  //real, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} }   //image, A0/A1
      },
      { //subband_ind 10
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} },  //real, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} }   //image, A0/A1
      },
      { //subband_ind 11
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} },  //real, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} }   //image, A0/A1
      },
      { //subband_ind 12
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} },  //real, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} }   //image, A0/A1
      },
      { //subband_ind 13
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} },  //real, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} }   //image, A0/A1
      },
      { //subband_ind 14
         0,                                                 //max uarfcn
         {0, 0},                                            //enable, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} },  //real, A0/A1
         { {0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0} }   //image, A0/A1
      }
   }
};

const hs_dsch_rfeq_info_band_T* const UMTS_RFEQ_COEF_TABLE_Set2[] =
{
   M_UMTS_RFEQ_COEF(UMTSBandNone, Set2),
   M_UMTS_RFEQ_COEF(RX_BAND_INDICATOR_0_Set2, Set2),
   M_UMTS_RFEQ_COEF(RX_BAND_INDICATOR_1_Set2, Set2),
   M_UMTS_RFEQ_COEF(RX_BAND_INDICATOR_2_Set2, Set2),
   M_UMTS_RFEQ_COEF(RX_BAND_INDICATOR_3_Set2, Set2),
   M_UMTS_RFEQ_COEF(RX_BAND_INDICATOR_4_Set2, Set2)
};
#endif


