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
 *   l1d_custom_mipi.h
 *
 * Project:
 * --------
 *   MT6177M
 *
 * Description:
 * ------------
 *   MT6177M 2G MIPI constance definition
 *
 * Author:
 * -------
 *
 *
 *==============================================================================
 *******************************************************************************/

#ifndef  _L1D_CUSTOM_MIPI_H_Set0_
#define  _L1D_CUSTOM_MIPI_H_Set0_
/* --------------------------------------------------------------------------- */

   #if IS_MIPI_SUPPORT
/*--------------------------------------------------------*/
/*   Define MIPI Tool Version Number                      */
/*--------------------------------------------------------*/
/*MT6177M*/ #define  GGE_MIPI_TOOL_VER_Set0    0
/*--------------------------------------------------------*/
/*   Enable/Disable MIPI Function Define                  */
/*--------------------------------------------------------*/

/*--------------------------------------------------------*/
/*   Event RX Timing Define                               */
/*--------------------------------------------------------*/
/*MT6177M*/ #define  QB_MIPI_RX_ON0_Set0       152   // save time for TDD
/*MT6177M*/ #define  QB_MIPI_RX_ON1_Set0       65    // Need to ready before SR2+5
/*MT6177M*/ #define  QB_MIPI_ANT_RX_ON0_Set0   158   // for ANT tuner on before ASM on by 5 us
/*MT6177M*/ //#define  QB_MIPI_RX_ON3       173
/*MT6177M*/ //#define  QB_MIPI_RX_ON4       173
/*MT6177M*/ //#define  QB_MIPI_RX_ON5       173
/*MT6177M*/ //#define  QB_MIPI_RX_ON6       173
/*MT6177M*/ //#define  QB_MIPI_RX_ON7       173
/*MT6177M*/ #define  QB_MIPI_RX_OFF0_Set0      3
/*MT6177M*/ #define  QB_MIPI_ANT_RX_OFF0_Set0  4    // for ANT tuner off after ASM off by 5 us
/*MT6177M*/ //#define  QB_MIPI_RX_OFF2      173
/*MT6177M*/ //#define  QB_MIPI_RX_OFF3      173
/*MT6177M*/ //#define  QB_MIPI_RX_OFF4      173
/*MT6177M*/
/*--------------------------------------------------------*/
/*   Event Tx Timing Define                               */
/*--------------------------------------------------------*/
/*MT6177M*/ #define  QB_MIPI_TX_ON0_Set0       23
/*MT6177M*/ #define  QB_MIPI_TX_ON1_Set0       246
/*MT6177M*/ #define  QB_MIPI_TX_ON2_Set0       2
/*MT6177M*/ #define  QB_MIPI_TX_ON3_Set0       2     //Temp solution for high band 8->G fail spec
/*MT6177M*/ #define  QB_MIPI_ANT_TX_ON0_Set0   252   // for ANT tuner on before ASM on by 5 us
/*MT6177M*/ //#define  QB_MIPI_TX_ON5       173
/*MT6177M*/ //#define  QB_MIPI_TX_ON6       173
/*MT6177M*/ //#define  QB_MIPI_TX_ON7       173
/*MT6177M*/ #define  QB_MIPI_TX_OFF0_Set0      20
/*MT6177M*/ #define  QB_MIPI_TX_OFF1_Set0      27
/*MT6177M*/ #define  QB_MIPI_ANT_TX_OFF0_Set0  33   // for ANT tuner on before ASM on by 5 us
/*MT6177M*/ //#define  QB_MIPI_TX_OFF3      173
/*MT6177M*/ //#define  QB_MIPI_TX_OFF4      173
/*MT6177M*/
/*--------------------------------------------------------*/
/*   Event TxMid Timing Define                            */
/*--------------------------------------------------------*/
/*MT6177M*/ #define  QB_MIPI_TXMID0_Set0       20
/*MT6177M*/ //#define  QB_MIPI_TXMID1       173
/*MT6177M*/
/*--------------------------------------------------------*/
/*   Event TxMid Timing For Interslot Ramping Optimize    */
/*--------------------------------------------------------*/
/*MT6177M*/ #define  QB_MIPI_TXMID0_GG_Set0       20     /* Interslot Ramping Timing for GMSK->GMSK */
/*MT6177M*/ //#define  QB_MIPI_TXMID1_GG       QB_MIPI_TXMID1
/*MT6177M*/ #define  QB_MIPI_TXMID0_88_Set0       20     /* Interslot Ramping Timing for 8PSK->8PSK */
/*MT6177M*/ //#define  QB_MIPI_TXMID1_88       QB_MIPI_TXMID1
/*MT6177M*/ #define  QB_MIPI_TXMID0_8G_Set0        5     /* Interslot Ramping Timing for 8PSK->GMSK */
/*MT6177M*/ //#define  QB_MIPI_TXMID1_8G       QB_MIPI_TXMID1
/*MT6177M*/ #define  QB_MIPI_TXMID0_G8_Set0        0     /* Interslot Ramping Timing for GMSK->8PSK */
/*MT6177M*/ //#define  QB_MIPI_TXMID1_G8       QB_MIPI_TXMID1
/*MT6177M*/
   #endif//end MIPI support
#endif
