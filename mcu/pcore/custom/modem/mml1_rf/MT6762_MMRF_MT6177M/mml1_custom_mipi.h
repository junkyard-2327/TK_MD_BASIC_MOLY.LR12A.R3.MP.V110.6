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
 *   mml1_custom_mipi.h
 *
 * Project:
 * --------
 *   MT6290 EVB
 *
 * Description:
 * ------------
 *   MT6290 EVB Multi-Mode Multi-RAT L1 constance definition
 *
 * Author:
 * -------
 *
 *
 *==============================================================================
 *******************************************************************************/
#ifndef  _MML1_CUSTOM_MIPI_H_SetDefault_
#define  _MML1_CUSTOM_MIPI_H_SetDefault_

#include "mml1_mipi_public.h"

#define MIPI_USID_INIT0_SetDefault           0x0000
#define MIPI_USID_ASM0_SetDefault            0x000F //Main SP16T(TXM)
#define MIPI_USID_ASM1_SetDefault            0x000A //DRX ASM SP12T
#define MIPI_USID_ASM2_SetDefault            0x0003 //PRX eLNA
#define MIPI_USID_ASM3_SetDefault            0x0003 //DRX eLNA
#define MIPI_USID_PA0_SetDefault             0x000F //LMB PA
#define MIPI_USID_PA1_SetDefault             0x000D 
#define MIPI_USID_PA2_SetDefault             0x000E 
#define MIPI_USID_ANT0_SetDefault            0x0006 //ANT tuner SP4T
#define MIPI_USID_TAS_SetDefault             0x0007
#define MIPI_USID_EXT_VPA_SetDefault         0x0005
///TODO:ELNA TBD
#define MIPI_USID_ELNA_NONE_SetDefault       0x0000
#define MIPI_USID_ELNA1_SetDefault           0x0000
#define MIPI_USID_ELNA2_SetDefault           0x0002
#define MIPI_USID_ELNA3_SetDefault           0x0003
#define MIPI_USID_ELNA4_SetDefault           0x0004
#define MIPI_USID_ELNA5_SetDefault           0x0003 
#define MIPI_USID_ELNA6_SetDefault           0x0003 
#define MIPI_USID_ELNA7_SetDefault           0x0007
#define MIPI_USID_ELNA8_SetDefault           0x0008
#define MIPI_USID_ELNA9_SetDefault           0x0003 // B41-PRX ELNA always on
#define MIPI_USID_ELNA10_SetDefault          0x0003 // B41-PRX ELNA Bypass
#define MIPI_USID_ELNA11_SetDefault          0x0003 // B41-DRX ELNA always on
#define MIPI_USID_ELNA12_SetDefault          0x0003 // B41-DRX ELNA Bypass



#define MIPI_USID_INIT0           0x0000
#define MIPI_USID_ASM0            0x000F //Main SP16T(TXM)
#define MIPI_USID_ASM1            0x000A //DRX ASM SP12T
#define MIPI_USID_ASM2            0x0003 //PRX eLNA
#define MIPI_USID_ASM3            0x0003 //DRX eLNA 
#define MIPI_USID_PA0             0x000F //LMB PA
#define MIPI_USID_PA1             0x000D 
#define MIPI_USID_PA2             0x000E 
#define MIPI_USID_ANT0            0x0006
#define MIPI_USID_TAS             0x0007

#endif


