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
 *   MT6177L
 *
 * Description:
 * ------------
 *   MT6177L 2G MIPI constance definition
 *
 * Author:
 * -------
 *
 *
 *==============================================================================
 *******************************************************************************/

#ifndef  _L1D_CUSTOM_MIPI_H_Set1_
#define  _L1D_CUSTOM_MIPI_H_Set1_
/* --------------------------------------------------------------------------- */

   #if IS_MIPI_SUPPORT
/*--------------------------------------------------------*/
/*   Define MIPI Tool Version Number                      */
/*--------------------------------------------------------*/
/*MT6177L*/ #define  GGE_MIPI_TOOL_VER_Set1    0
/*--------------------------------------------------------*/
/*   Enable/Disable MIPI Function Define                  */
/*--------------------------------------------------------*/

/*--------------------------------------------------------*/
/*   Event RX Timing Define                               */
/*--------------------------------------------------------*/
/*MT6177L*/ #define  QB_MIPI_RX_ON0_Set1       152   // save time for TDD
/*MT6177L*/ #define  QB_MIPI_RX_ON1_Set1       65    // Need to ready before SR2+5
/*MT6177L*/ //#define  QB_MIPI_RX_ON2       173
/*MT6177L*/ //#define  QB_MIPI_RX_ON3       173
/*MT6177L*/ //#define  QB_MIPI_RX_ON4       173
/*MT6177L*/ //#define  QB_MIPI_RX_ON5       173
/*MT6177L*/ //#define  QB_MIPI_RX_ON6       173
/*MT6177L*/ //#define  QB_MIPI_RX_ON7       173
/*MT6177L*/ #define  QB_MIPI_RX_OFF0_Set1      5
/*MT6177L*/ //#define  QB_MIPI_RX_OFF1      173
/*MT6177L*/ //#define  QB_MIPI_RX_OFF2      173
/*MT6177L*/ //#define  QB_MIPI_RX_OFF3      173
/*MT6177L*/ //#define  QB_MIPI_RX_OFF4      173
/*MT6177L*/
/*--------------------------------------------------------*/
/*   Event Tx Timing Define                               */
/*--------------------------------------------------------*/
/*MT6177L*/ #define  QB_MIPI_TX_ON0_Set1       23
/*MT6177L*/ #define  QB_MIPI_TX_ON1_Set1       246
/*MT6177L*/ #define  QB_MIPI_TX_ON2_Set1       10
/*MT6177L*/ #define  QB_MIPI_TX_ON3_Set1       2     //Temp solution for high band 8->G fail spec
/*MT6177L*/ //#define  QB_MIPI_TX_ON4       173
/*MT6177L*/ //#define  QB_MIPI_TX_ON5       173
/*MT6177L*/ //#define  QB_MIPI_TX_ON6       173
/*MT6177L*/ //#define  QB_MIPI_TX_ON7       173
/*MT6177L*/ #define  QB_MIPI_TX_OFF0_Set1      20
/*MT6177L*/ #define  QB_MIPI_TX_OFF1_Set1      27
/*MT6177L*/ //#define  QB_MIPI_TX_OFF2      173
/*MT6177L*/ //#define  QB_MIPI_TX_OFF3      173
/*MT6177L*/ //#define  QB_MIPI_TX_OFF4      173
/*MT6177L*/
/*--------------------------------------------------------*/
/*   Event TxMid Timing Define                            */
/*--------------------------------------------------------*/
/*MT6177L*/ #define  QB_MIPI_TXMID0_Set1       20
/*MT6177L*/ //#define  QB_MIPI_TXMID1       173
/*MT6177L*/
/*--------------------------------------------------------*/
/*   Event TxMid Timing For Interslot Ramping Optimize    */
/*--------------------------------------------------------*/
/*MT6177L*/ #define  QB_MIPI_TXMID0_GG_Set1       20     /* Interslot Ramping Timing for GMSK->GMSK */
/*MT6177L*/ //#define  QB_MIPI_TXMID1_GG       QB_MIPI_TXMID1
/*MT6177L*/ #define  QB_MIPI_TXMID0_88_Set1       20     /* Interslot Ramping Timing for 8PSK->8PSK */
/*MT6177L*/ //#define  QB_MIPI_TXMID1_88       QB_MIPI_TXMID1
/*MT6177L*/ #define  QB_MIPI_TXMID0_8G_Set1        5     /* Interslot Ramping Timing for 8PSK->GMSK */
/*MT6177L*/ //#define  QB_MIPI_TXMID1_8G       QB_MIPI_TXMID1
/*MT6177L*/ #define  QB_MIPI_TXMID0_G8_Set1        0     /* Interslot Ramping Timing for GMSK->8PSK */
/*MT6177L*/ //#define  QB_MIPI_TXMID1_G8       QB_MIPI_TXMID1
/*MT6177L*/
   #endif//end MIPI support
#endif
