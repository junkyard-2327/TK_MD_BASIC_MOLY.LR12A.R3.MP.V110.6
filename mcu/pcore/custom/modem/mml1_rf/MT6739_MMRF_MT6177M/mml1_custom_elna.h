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
 *   mml1_custom_elna.h
 *
 * Project:
 * --------
 *   MT6293
 *
 * Description:
 * ------------
 *   MT6293 Multi-Mode Multi-RAT L1 constance definition for eLNA
 *
 * Author:
 * -------
 *
 *
 *==============================================================================
 *******************************************************************************/

#ifndef  _MML1_CUSTOM_ELNA_H_SetDefault_
#define  _MML1_CUSTOM_ELNA_H_SetDefault_

#include "mml1_fe_public.h"


/*-----------------------------------------------------------------------------------*/
/*  ELNA Catgory Setting:                                                            */
/*  1. MML1_ELNA_OFF               : without ELNA                                    */
/*  2. MML1_ELNA_ALWAYS_ON         : ELNA with on mode but without 2nd SAW           */
/*  3. MML1_ELNA_ALWAYS_ON_2ND_SAW : ELNA with on mode and 2nd SAW                   */
/*  4. MML1_ELNA_BYPASS            : ELNA with bypass/on mode but without 2nd SAW    */
/*  5. MML1_ELNA_BYPASS_2ND_SAW    : ELNA with bypass/on mode and with 2nd SAW       */
/*-----------------------------------------------------------------------------------*/
#define  MML1_FE_ELNA_NONE_CATEGORY_SetDefault           MML1_ELNA_OFF
#define  MML1_FE_ELNA1_CATEGORY_SetDefault               MML1_ELNA_BYPASS_2ND_SAW      // B1,  PRX, BPI,  Dynamic mode,     w/  2nd SAW
#define  MML1_FE_ELNA2_CATEGORY_SetDefault               MML1_ELNA_BYPASS_2ND_SAW      // B2,  PRX, BPI,  Dynamic mode,     w/  2nd SAW
#define  MML1_FE_ELNA3_CATEGORY_SetDefault               MML1_ELNA_BYPASS_2ND_SAW      // B1,  DRX, BPI,  Dynamic mode,     w/  2nd SAW
#define  MML1_FE_ELNA4_CATEGORY_SetDefault               MML1_ELNA_ALWAYS_ON           // B1,  DRX, BPI,  On mode,          w/o 2nd SAW
#define  MML1_FE_ELNA5_CATEGORY_SetDefault               MML1_ELNA_BYPASS              // B1,  DRX, BPI,  Dynamic mode,     w/o 2nd SAW
#define  MML1_FE_ELNA6_CATEGORY_SetDefault               MML1_ELNA_BYPASS_2ND_SAW      // B2,  DRX, BPI,  Dynamic mode,     w/  2nd SAW 
#define  MML1_FE_ELNA7_CATEGORY_SetDefault               MML1_ELNA_OFF      
#define  MML1_FE_ELNA8_CATEGORY_SetDefault               MML1_ELNA_OFF              
#define  MML1_FE_ELNA9_CATEGORY_SetDefault               MML1_ELNA_ALWAYS_ON           // B41, PRX, MIPI, On mode,      w/o 2nd SAW 
#define  MML1_FE_ELNA10_CATEGORY_SetDefault              MML1_ELNA_BYPASS              // B41, PRX, MIPI, Dynamic mode, w/o 2nd SAW 
#define  MML1_FE_ELNA11_CATEGORY_SetDefault              MML1_ELNA_ALWAYS_ON           // B41, DRX, MIPI, On mode,      w/o 2nd SAW 
#define  MML1_FE_ELNA12_CATEGORY_SetDefault              MML1_ELNA_BYPASS              // B41, DRX, MIPI, Dynamic mode, w/o 2nd SAW

/*-----------------------------------------------------------------------------------------------*/
/*  Select eLNA control interface                                                                */
/*  1. MML1_CONTROL_BPI          : take BPI setting only for this index. (ignore MIPI)           */
/*  2. MML1_CONTROL_MIPI         : take MIPI setting only for this index. (ignore BPI)           */
/*  3. MML1_CONTROL_NONE         : take nothing for this index. (ignore BPI and MIPI)            */
/*-----------------------------------------------------------------------------------------------*/
#define  MML1_FE_ELNA_NONE_CONTROL_INTERFACE_SetDefault  MML1_CONTROL_NONE
#define  MML1_FE_ELNA1_CONTROL_INTERFACE_SetDefault      MML1_CONTROL_BPI
#define  MML1_FE_ELNA2_CONTROL_INTERFACE_SetDefault      MML1_CONTROL_BPI
#define  MML1_FE_ELNA3_CONTROL_INTERFACE_SetDefault      MML1_CONTROL_BPI
#define  MML1_FE_ELNA4_CONTROL_INTERFACE_SetDefault      MML1_CONTROL_BPI
#define  MML1_FE_ELNA5_CONTROL_INTERFACE_SetDefault      MML1_CONTROL_BPI
#define  MML1_FE_ELNA6_CONTROL_INTERFACE_SetDefault      MML1_CONTROL_BPI
#define  MML1_FE_ELNA7_CONTROL_INTERFACE_SetDefault      MML1_CONTROL_NONE
#define  MML1_FE_ELNA8_CONTROL_INTERFACE_SetDefault      MML1_CONTROL_NONE
#define  MML1_FE_ELNA9_CONTROL_INTERFACE_SetDefault      MML1_CONTROL_MIPI
#define  MML1_FE_ELNA10_CONTROL_INTERFACE_SetDefault     MML1_CONTROL_MIPI
#define  MML1_FE_ELNA11_CONTROL_INTERFACE_SetDefault     MML1_CONTROL_MIPI
#define  MML1_FE_ELNA12_CONTROL_INTERFACE_SetDefault     MML1_CONTROL_MIPI

/*---------------------------------------------------------------------------------*/
/*  Settling time for gain mode change     unit: (us)                              */
/*---------------------------------------------------------------------------------*/
#define  MML1_FE_ELNA_NONE_SETTLING_TIME_SetDefault      (0)
#define  MML1_FE_ELNA1_SETTLING_TIME_SetDefault          MML1_MICROSECOND_TRANS(4)
#define  MML1_FE_ELNA2_SETTLING_TIME_SetDefault          MML1_MICROSECOND_TRANS(4)
#define  MML1_FE_ELNA3_SETTLING_TIME_SetDefault          MML1_MICROSECOND_TRANS(4)
#define  MML1_FE_ELNA4_SETTLING_TIME_SetDefault          MML1_MICROSECOND_TRANS(4)
#define  MML1_FE_ELNA5_SETTLING_TIME_SetDefault          MML1_MICROSECOND_TRANS(4)
#define  MML1_FE_ELNA6_SETTLING_TIME_SetDefault          MML1_MICROSECOND_TRANS(4)
#define  MML1_FE_ELNA7_SETTLING_TIME_SetDefault          MML1_MICROSECOND_TRANS(4)
#define  MML1_FE_ELNA8_SETTLING_TIME_SetDefault          MML1_MICROSECOND_TRANS(4)
#define  MML1_FE_ELNA9_SETTLING_TIME_SetDefault          MML1_MICROSECOND_TRANS(4)
#define  MML1_FE_ELNA10_SETTLING_TIME_SetDefault         MML1_MICROSECOND_TRANS(4)
#define  MML1_FE_ELNA11_SETTLING_TIME_SetDefault         MML1_MICROSECOND_TRANS(4)
#define  MML1_FE_ELNA12_SETTLING_TIME_SetDefault         MML1_MICROSECOND_TRANS(4)

/*---------------------------------------------------------------------------------*/
/*  Set "GAIN MODE" BPI data for the specific ELNA:                                */
/*  1.PIN0_SetDefault                                                              */
/*    (1) MML1_ELNA_PIN_NONE        : no use                                       */
/*    (2) real number               : define the location of PIN0                  */
/*  2.PIN0_ON_DATA_SetDefault                                                      */
/*    (1) real number               : define the data of ELNA ON for PIN0          */
/*    (note) ignore this setting when MML1_ELNA_PIN_NONE                           */
/*  3.PIN0_BYPASS_DATA_SetDefault                                                  */
/*    (1) real number               : define the data of ELNA BYPASS for PIN0      */
/*    (note) ignore this setting when MML1_ELNA_PIN_NONE                           */
/*---------------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------------*/
/* PIN selected by all indexes will apply to rg_bpi_top_tpc_agc_AND_en[19:0].      */
/* FDD/C2K/LTE need to set corresponding bits of bpi_out_wlc[19:0] to use ELNA.    */
/*---------------------------------------------------------------------------------*/
// The settings for ELNA_NONE 
#define  PDATA_MML1_FE_ELNA_NONE_PIN0_SetDefault               MML1_ELNA_PIN_NONE  // the 1st BPI pin number for the ELNA control, set MML1_ELNA_PIN_NONE if the BPI contorl is not used.
#define  PDATA_MML1_FE_ELNA_NONE_PIN1_SetDefault               MML1_ELNA_PIN_NONE  // the 2nd BPI pin number for the ELNA control, set MML1_ELNA_PIN_NONE if the BPI contorl is not used.
#define  PDATA_MML1_FE_ELNA_NONE_PIN0_ON_DATA_SetDefault       0                   // the ON mode BPI setting (1 or 0) for the 1st BPI pin
#define  PDATA_MML1_FE_ELNA_NONE_PIN1_ON_DATA_SetDefault       0                   // the ON mode BPI setting (1 or 0) for the 2nd BPI pin
#define  PDATA_MML1_FE_ELNA_NONE_PIN0_BYPASS_DATA_SetDefault   0                   // the BYPASS mode BPI setting (1 or 0) for the 1st BPI pin
#define  PDATA_MML1_FE_ELNA_NONE_PIN1_BYPASS_DATA_SetDefault   0                   // the BYPASS mode BPI setting (1 or 0) for the 2nd BPI pin

// The settings for ELNA1 :B1,  PRX, BPI,  On mode,     w/  2nd SAW
#define  PDATA_MML1_FE_ELNA1_PIN0_SetDefault               4                  // the 1st BPI pin number for the ELNA control, set MML1_ELNA_PIN_NONE if the BPI contorl is not used.
#define  PDATA_MML1_FE_ELNA1_PIN1_SetDefault               5                  // the 2nd BPI pin number for the ELNA control, set MML1_ELNA_PIN_NONE if the BPI contorl is not used.
#define  PDATA_MML1_FE_ELNA1_PIN0_ON_DATA_SetDefault       1                   // the ON mode BPI setting (1 or 0) for the 1st BPI pin
#define  PDATA_MML1_FE_ELNA1_PIN1_ON_DATA_SetDefault       1                   // the ON mode BPI setting (1 or 0) for the 2nd BPI pin
#define  PDATA_MML1_FE_ELNA1_PIN0_BYPASS_DATA_SetDefault   0                   // the BYPASS mode BPI setting (1 or 0) for the 1st BPI pin
#define  PDATA_MML1_FE_ELNA1_PIN1_BYPASS_DATA_SetDefault   1                   // the BYPASS mode BPI setting (1 or 0) for the 2nd BPI pin
                                                      
// The settings for ELNA2 :B2,  PRX, BPI,  On mode,     w/  2nd SAW
#define  PDATA_MML1_FE_ELNA2_PIN0_SetDefault               8
#define  PDATA_MML1_FE_ELNA2_PIN1_SetDefault               9
#define  PDATA_MML1_FE_ELNA2_PIN0_ON_DATA_SetDefault       1                
#define  PDATA_MML1_FE_ELNA2_PIN1_ON_DATA_SetDefault       1                
#define  PDATA_MML1_FE_ELNA2_PIN0_BYPASS_DATA_SetDefault   0                
#define  PDATA_MML1_FE_ELNA2_PIN1_BYPASS_DATA_SetDefault   1

// The settings for ELNA3 :B1,  DRX, BPI,  On mode,     w/  2nd SAW
#define  PDATA_MML1_FE_ELNA3_PIN0_SetDefault               6
#define  PDATA_MML1_FE_ELNA3_PIN1_SetDefault               7
#define  PDATA_MML1_FE_ELNA3_PIN0_ON_DATA_SetDefault       1                
#define  PDATA_MML1_FE_ELNA3_PIN1_ON_DATA_SetDefault       1                
#define  PDATA_MML1_FE_ELNA3_PIN0_BYPASS_DATA_SetDefault   0                
#define  PDATA_MML1_FE_ELNA3_PIN1_BYPASS_DATA_SetDefault   1                

// The settings for ELNA4 :B1,  DRX, BPI,  On mode,     w/o 2nd SAW
#define  PDATA_MML1_FE_ELNA4_PIN0_SetDefault               6
#define  PDATA_MML1_FE_ELNA4_PIN1_SetDefault               7
#define  PDATA_MML1_FE_ELNA4_PIN0_ON_DATA_SetDefault       1                
#define  PDATA_MML1_FE_ELNA4_PIN1_ON_DATA_SetDefault       1                
#define  PDATA_MML1_FE_ELNA4_PIN0_BYPASS_DATA_SetDefault   0                
#define  PDATA_MML1_FE_ELNA4_PIN1_BYPASS_DATA_SetDefault   1                

// The settings for ELNA5 :B1,  DRX, BPI,  Bypass mode, w/o 2nd SAW
#define  PDATA_MML1_FE_ELNA5_PIN0_SetDefault               6
#define  PDATA_MML1_FE_ELNA5_PIN1_SetDefault               7
#define  PDATA_MML1_FE_ELNA5_PIN0_ON_DATA_SetDefault       1                
#define  PDATA_MML1_FE_ELNA5_PIN1_ON_DATA_SetDefault       1                
#define  PDATA_MML1_FE_ELNA5_PIN0_BYPASS_DATA_SetDefault   0                
#define  PDATA_MML1_FE_ELNA5_PIN1_BYPASS_DATA_SetDefault   1                

// The settings for ELNA6 :B2,  DRX, BPI,  On mode,     w/  2nd SAW
#define  PDATA_MML1_FE_ELNA6_PIN0_SetDefault               10
#define  PDATA_MML1_FE_ELNA6_PIN1_SetDefault               11
#define  PDATA_MML1_FE_ELNA6_PIN0_ON_DATA_SetDefault       1                
#define  PDATA_MML1_FE_ELNA6_PIN1_ON_DATA_SetDefault       1                
#define  PDATA_MML1_FE_ELNA6_PIN0_BYPASS_DATA_SetDefault   0                
#define  PDATA_MML1_FE_ELNA6_PIN1_BYPASS_DATA_SetDefault   1                

// The settings for ELNA7
#define  PDATA_MML1_FE_ELNA7_PIN0_SetDefault               MML1_ELNA_PIN_NONE
#define  PDATA_MML1_FE_ELNA7_PIN1_SetDefault               MML1_ELNA_PIN_NONE
#define  PDATA_MML1_FE_ELNA7_PIN0_ON_DATA_SetDefault       1                
#define  PDATA_MML1_FE_ELNA7_PIN1_ON_DATA_SetDefault       1                
#define  PDATA_MML1_FE_ELNA7_PIN0_BYPASS_DATA_SetDefault   0                
#define  PDATA_MML1_FE_ELNA7_PIN1_BYPASS_DATA_SetDefault   1                

// The settings for ELNA8
#define  PDATA_MML1_FE_ELNA8_PIN0_SetDefault               MML1_ELNA_PIN_NONE
#define  PDATA_MML1_FE_ELNA8_PIN1_SetDefault               MML1_ELNA_PIN_NONE
#define  PDATA_MML1_FE_ELNA8_PIN0_ON_DATA_SetDefault       1                
#define  PDATA_MML1_FE_ELNA8_PIN1_ON_DATA_SetDefault       1                
#define  PDATA_MML1_FE_ELNA8_PIN0_BYPASS_DATA_SetDefault   0                
#define  PDATA_MML1_FE_ELNA8_PIN1_BYPASS_DATA_SetDefault   1                

// The settings for ELNA9
#define  PDATA_MML1_FE_ELNA9_PIN0_SetDefault               MML1_ELNA_PIN_NONE
#define  PDATA_MML1_FE_ELNA9_PIN1_SetDefault               MML1_ELNA_PIN_NONE
#define  PDATA_MML1_FE_ELNA9_PIN0_ON_DATA_SetDefault       1                
#define  PDATA_MML1_FE_ELNA9_PIN1_ON_DATA_SetDefault       1                
#define  PDATA_MML1_FE_ELNA9_PIN0_BYPASS_DATA_SetDefault   0                
#define  PDATA_MML1_FE_ELNA9_PIN1_BYPASS_DATA_SetDefault   1                

// The settings for ELNA10
#define  PDATA_MML1_FE_ELNA10_PIN0_SetDefault              MML1_ELNA_PIN_NONE
#define  PDATA_MML1_FE_ELNA10_PIN1_SetDefault              MML1_ELNA_PIN_NONE
#define  PDATA_MML1_FE_ELNA10_PIN0_ON_DATA_SetDefault      1                
#define  PDATA_MML1_FE_ELNA10_PIN1_ON_DATA_SetDefault      1                
#define  PDATA_MML1_FE_ELNA10_PIN0_BYPASS_DATA_SetDefault  0                
#define  PDATA_MML1_FE_ELNA10_PIN1_BYPASS_DATA_SetDefault  1 

// The settings for ELNA11
#define  PDATA_MML1_FE_ELNA11_PIN0_SetDefault              MML1_ELNA_PIN_NONE
#define  PDATA_MML1_FE_ELNA11_PIN1_SetDefault              MML1_ELNA_PIN_NONE
#define  PDATA_MML1_FE_ELNA11_PIN0_ON_DATA_SetDefault      1                
#define  PDATA_MML1_FE_ELNA11_PIN1_ON_DATA_SetDefault      1                
#define  PDATA_MML1_FE_ELNA11_PIN0_BYPASS_DATA_SetDefault  0                
#define  PDATA_MML1_FE_ELNA11_PIN1_BYPASS_DATA_SetDefault  1                  

// The settings for ELNA12
#define  PDATA_MML1_FE_ELNA12_PIN0_SetDefault              MML1_ELNA_PIN_NONE
#define  PDATA_MML1_FE_ELNA12_PIN1_SetDefault              MML1_ELNA_PIN_NONE
#define  PDATA_MML1_FE_ELNA12_PIN0_ON_DATA_SetDefault      1                
#define  PDATA_MML1_FE_ELNA12_PIN1_ON_DATA_SetDefault      0                
#define  PDATA_MML1_FE_ELNA12_PIN0_BYPASS_DATA_SetDefault  1                
#define  PDATA_MML1_FE_ELNA12_PIN1_BYPASS_DATA_SetDefault  0   

#endif

extern const MML1_MIPI_DATA_TABLE_T MML1_FE_ELNA_NONE_MIPI_DATA_SetDefault[];
extern const MML1_MIPI_DATA_TABLE_T MML1_FE_ELNA1_MIPI_DATA_SetDefault[];
extern const MML1_MIPI_DATA_TABLE_T MML1_FE_ELNA2_MIPI_DATA_SetDefault[];
extern const MML1_MIPI_DATA_TABLE_T MML1_FE_ELNA3_MIPI_DATA_SetDefault[];
extern const MML1_MIPI_DATA_TABLE_T MML1_FE_ELNA4_MIPI_DATA_SetDefault[];
extern const MML1_MIPI_DATA_TABLE_T MML1_FE_ELNA5_MIPI_DATA_SetDefault[];
extern const MML1_MIPI_DATA_TABLE_T MML1_FE_ELNA6_MIPI_DATA_SetDefault[];
extern const MML1_MIPI_DATA_TABLE_T MML1_FE_ELNA7_MIPI_DATA_SetDefault[];
extern const MML1_MIPI_DATA_TABLE_T MML1_FE_ELNA8_MIPI_DATA_SetDefault[];
extern const MML1_MIPI_DATA_TABLE_T MML1_FE_ELNA9_MIPI_DATA_SetDefault[];
extern const MML1_MIPI_DATA_TABLE_T MML1_FE_ELNA10_MIPI_DATA_SetDefault[];
extern const MML1_MIPI_DATA_TABLE_T MML1_FE_ELNA11_MIPI_DATA_SetDefault[];
extern const MML1_MIPI_DATA_TABLE_T MML1_FE_ELNA12_MIPI_DATA_SetDefault[];

