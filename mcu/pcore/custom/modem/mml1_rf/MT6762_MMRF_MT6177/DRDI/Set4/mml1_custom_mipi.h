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
#ifndef  _MML1_CUSTOM_MIPI_H_Set4_
#define  _MML1_CUSTOM_MIPI_H_Set4_

#include "mml1_mipi_public.h"

#define MIPI_USID_INIT0_Set4           0x0000
#define MIPI_USID_ASM0_Set4            0x000C //Main 3P18T(TXM)
#define MIPI_USID_ASM1_Set4            0x000A //DRX ASM DP12T(LMB)
#define MIPI_USID_ASM2_Set4            0x000B //DRX ASM SP6T(HB)
#define MIPI_USID_ASM3_Set4            0x0009 
#define MIPI_USID_PA0_Set4             0x000F //HMB PA
#define MIPI_USID_PA1_Set4             0x000D //LB PA
#define MIPI_USID_PA2_Set4             0x000E //B42 PA
#define MIPI_USID_ANT0_Set4            0x0006
#define MIPI_USID_TAS_Set4             0x0007
#define MIPI_USID_EXT_VPA_Set4         0x0005
///TODO:ELNA TBD
#define MIPI_USID_ELNA_NONE_Set4       0x0000
#define MIPI_USID_ELNA1_Set4           0x0001
#define MIPI_USID_ELNA2_Set4           0x0002
#define MIPI_USID_ELNA3_Set4           0x0003
#define MIPI_USID_ELNA4_Set4           0x0004
#define MIPI_USID_ELNA5_Set4           0x0005
#define MIPI_USID_ELNA6_Set4           0x0006
#define MIPI_USID_ELNA7_Set4           0x0007
#define MIPI_USID_ELNA8_Set4           0x0008
#define MIPI_USID_ELNA9_Set4           0x0009
#define MIPI_USID_ELNA10_Set4          0x000A
#define MIPI_USID_ELNA11_Set4          0x000B
#define MIPI_USID_ELNA12_Set4          0x000C

#endif


