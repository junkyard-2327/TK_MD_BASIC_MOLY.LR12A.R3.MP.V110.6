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
 *   mml1_custom_rf.h
 *
 * Project:
 * --------
 *   MT6292
 *
 * Description:
 * ------------
 *   MT6292 Multi-Mode Multi-RAT L1 constance definition
 *
 * Author:
 * -------
 *
 *
 *==============================================================================
 *******************************************************************************/

#ifndef  _MML1_CUSTOM_RF_H_Set4_
#define  _MML1_CUSTOM_RF_H_Set4_

/* --------------------------------------------------------------------------- */
/*MT6292*/
/*MT6292*/ /*----------------------------------------------------*/
/*MT6292*/ /*  Enable or disable the clock1, 2, 3, and 4 output  */
/*MT6292*/ /*  1 : Enable                                        */
/*MT6292*/ /*  0 : Disable                                       */
/*MT6292*/ /*----------------------------------------------------*/
/*MT6292*/ #define MML1_CLK1_EN_Set4                         1 /* CLK1 is enabled for BB */
/*MT6292*/ #define MML1_CLK2_EN_Set4                         0
/*MT6292*/ #define MML1_CLK3_EN_Set4                         1
/*MT6292*/ #define MML1_CLK4_EN_Set4                         1
/*MT6292*/
/*MT6292*/ /*----------------------------------------------------*/
/*MT6292*/ /*  Config the clock buffer driving for XO1,2,3,4     */
/*MT6292*/ /*  0 : 0.4mA (loading :  <10pF)                      */
/*MT6292*/ /*  1 : 0.9mA (loading :10~20pF) (default)            */
/*MT6292*/ /*  2 : 1.4mA (loading :20~30pF)                      */
/*MT6292*/ /*  3 : 1.9mA (loading :  >30pF)                      */
/*MT6292*/ /*----------------------------------------------------*/
/*MT6292*/ #define MML1_CLK1_DRIVING_Set4                    1
/*MT6292*/ #define MML1_CLK2_DRIVING_Set4                    1
/*MT6292*/ #define MML1_CLK3_DRIVING_Set4                    1
/*MT6292*/ #define MML1_CLK4_DRIVING_Set4                    1
/*MT6292*/
/*MT6292*/ /*----------------------------------------------------*/
/*MT6292*/ /*  RX IQ Swap Option :                               */
/*MT6292*/ /*  1 : Enable                                        */
/*MT6292*/ /*  0 : Disable                                       */
/*MT6292*/ /*----------------------------------------------------*/
/*MT6292*/ /*  Naming Rule for PRX (Main), DRX (Diversity)       */
/*MT6292*/ /*              for  RX1(Primary CC)                  */
/*MT6292*/ /*                   RX2(Secondary CC)                */
/*MT6292*/ /*                   RXn(n-th CC)                     */ 
/*MT6292*/ /*----------------------------------------------------*/
/*MT6292*/ #define PRX1_IQ_SWAP_EN_Set4                      0
/*MT6292*/ #define DRX1_IQ_SWAP_EN_Set4                      0
/*MT6292*/
/*MT6292*/ #define PRX2_IQ_SWAP_EN_Set4                      0
/*MT6292*/ #define DRX2_IQ_SWAP_EN_Set4                      0
/*MT6292*/
/*MT6292*/ /*----------------------------------------------------*/
/*MT6292*/ /*  RX IQ Inverse Option :                            */
/*MT6292*/ /*  1 : Enable                                        */
/*MT6292*/ /*  0 : Disable                                       */
/*MT6292*/ /*----------------------------------------------------*/
/*MT6292*/ /*  Naming Rule for PRX (Main), DRX (Diversity)       */
/*MT6292*/ /*              for  RX1(Primary CC)                  */
/*MT6292*/ /*                   RX2(Secondary CC)                */
/*MT6292*/ /*                   RXn(n-th CC)                     */ 
/*MT6292*/ /*----------------------------------------------------*/
/*MT6292*/ #define PRX1_I_INV_EN_Set4                        0
/*MT6292*/ #define PRX1_Q_INV_EN_Set4                        0
/*MT6292*/ #define DRX1_I_INV_EN_Set4                        0
/*MT6292*/ #define DRX1_Q_INV_EN_Set4                        0
/*MT6292*/
/*MT6292*/ #define PRX2_I_INV_EN_Set4                        0
/*MT6292*/ #define PRX2_Q_INV_EN_Set4                        0
/*MT6292*/ #define DRX2_I_INV_EN_Set4                        0
/*MT6292*/ #define DRX2_Q_INV_EN_Set4                        0
/*MT6292*/
/*MT6292*/ /*-----------------------------------------------------------------------*/
/*MT6292*/ /*  Enable or disable the Crystal on PMIC feature                        */
/*MT6292*/ /*  It shall only for MT6176 RF, the following RF shall be always Enable */
/*MT6292*/ /*  1 : Enable                                                           */
/*MT6292*/ /*  0 : Disable (default)                                                */
/*MT6292*/ /*-----------------------------------------------------------------------*/
/*MT6292*/ #define MML1_CRYSTAL_ON_PMIC_EN              0
/*MT6292*/
/*MT6292*/ /*SWTP feature*/
/*MT6292*/ #define MML1_SWTP_MANUAL_EN_Set4           0
/*MT6292*/ #define MML1_SWTP_EN_Set4                  0
/*MT6292*/
/*MT6292*/ /*SAR Tx power offset feature*/
/*MT6292*/ #define MML1_SAR_MANUAL_EN_Set4            0
/*MT6292*/ #define MML1_SAR_EN_Set4                   0
/*MT6292*/ #define GSM_TABLE_IDX_Set4                 0
/*MT6292*/ #define WCDMA_TABLE_IDX_Set4               0
/*MT6292*/ #define TDSCDMA_TABLE_IDX_Set4             0
/*MT6292*/ #define LTE_TABLE_IDX_Set4                 0
/*MT6292*/ #define C2K_TABLE_IDX_Set4                 0
/*MT6292*/
/*MT6292*/
/*MT6292*/ /*-----------------------------------------------------------------------*/
/*MT6292*/ /*  Enable or disable the bpi_top_agc_AND_en[28] or [29]                 */
/*MT6292*/ /*  1 : Enable (connect to PA)                                           */
/*MT6292*/ /*  0 : Disable (connect to others)                                      */
/*MT6292*/ /*-----------------------------------------------------------------------*/
/*MT6292*/ #define MML1_BPI_PIN28_TPC_CONTROL_ENABLE_Set4    0
/*MT6292*/ #define MML1_BPI_PIN29_TPC_CONTROL_ENABLE_Set4    0
/*MT6292*/ #define MML1_BPI_TPC_CONTROL_ENABLE_Set4   ((MML1_BPI_PIN29_TPC_CONTROL_ENABLE_Set4<<29)|(MML1_BPI_PIN28_TPC_CONTROL_ENABLE_Set4<<28))  /*do not change*/ 
/*MT6292*/ /*-----------------------------------------------------------------------*/
/*MT6292*/
/*MT6292*/
/*MT6292*/ /*Set TAS index in MTEA cal flow, need add compile option: __IS_META_MODE_DEFAULT_TAS_STATE_CONFIGURE__ and apply flavor build to enable this feature*/
/*MT6292*/ #define MML1_RF_CONFIG_DEFAULT_TAS_STATE_IN_META_Set4        0

/* --------------------------------------------------------------------------- */
#endif

