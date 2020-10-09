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
 *   lte_custom_rf_mpr.h
 *
 * Project:
 * --------
 *   MT6177M
 *
 * Description:
 * ------------
 *   MT6177M LTE FDD/TDD MPR
 *
 * Author:
 * -------
 *
 *
 *******************************************************************************/

#ifndef  _LTE_CUSTOM_RF_MPR_Set0_H_
#define  _LTE_CUSTOM_RF_MPR_Set0_H_
/* ------------------------------------------------------------------------- */
#if !defined(MT6177M_LTE_RF)
   #error "rf files mismatch with compile option!"
#endif

/*MT6177M*/ /*-------------------------------------------------------------------*/
/*MT6177M*/ /*  MPR value for each band setting: 36.101 6.2.3 6.2.5 with S(8.8)  */
/*MT6177M*/ /*  MPR value for each band setting: 36.101 Table 6.2.3-1            */
/*MT6177M*/ /*  (No DRDI)                                                        */
/*MT6177M*/ /*-------------------------------------------------------------------*/
/*MT6177M*/ //* ------------- MPR_BAND1 Start --------------------*/
/*MT6177M*/ #define  LTE_Band1_MPR_QPSK1_Set0    0x0100
/*MT6177M*/ #define  LTE_Band1_MPR_16QAM0_Set0   0x0100
/*MT6177M*/ #define  LTE_Band1_MPR_16QAM1_Set0   0x0200
/*MT6177M*/ #define  LTE_Band1_MPR_64QAM0_Set0   0x0200
/*MT6177M*/ #define  LTE_Band1_MPR_64QAM1_Set0   0x0300
/*MT6177M*/ #define  LTE_Band1_DELTA_TC0_Set0    0x0000
/*MT6177M*/ #define  LTE_Band1_DELTA_TC1_Set0    0x0000
/*MT6177M*/ #define  LTE_Band1_DELTA_TIB_Set0    0x0000
/*MT6177M*/ #define  LTE_Band1_RES_HNDLR_Set0    0x0000
/*MT6177M*/                                                         
/*MT6177M*/ //* ------------- MPR_BAND2 Start --------------------*/
/*MT6177M*/ #define  LTE_Band2_MPR_QPSK1_Set0    0x0100
/*MT6177M*/ #define  LTE_Band2_MPR_16QAM0_Set0   0x0100
/*MT6177M*/ #define  LTE_Band2_MPR_16QAM1_Set0   0x0200
/*MT6177M*/ #define  LTE_Band2_MPR_64QAM0_Set0   0x0200
/*MT6177M*/ #define  LTE_Band2_MPR_64QAM1_Set0   0x0300
/*MT6177M*/ #define  LTE_Band2_DELTA_TC0_Set0    0x0000
/*MT6177M*/ #define  LTE_Band2_DELTA_TC1_Set0    0x0000
/*MT6177M*/ #define  LTE_Band2_DELTA_TIB_Set0    0x0000
/*MT6177M*/ #define  LTE_Band2_RES_HNDLR_Set0    0x0000
/*MT6177M*/                                                         
/*MT6177M*/ //* ------------- MPR_BAND3 Start --------------------*/
/*MT6177M*/ #define  LTE_Band3_MPR_QPSK1_Set0    0x0100
/*MT6177M*/ #define  LTE_Band3_MPR_16QAM0_Set0   0x0100
/*MT6177M*/ #define  LTE_Band3_MPR_16QAM1_Set0   0x0200
/*MT6177M*/ #define  LTE_Band3_MPR_64QAM0_Set0   0x0200
/*MT6177M*/ #define  LTE_Band3_MPR_64QAM1_Set0   0x0300
/*MT6177M*/ #define  LTE_Band3_DELTA_TC0_Set0    0x0000
/*MT6177M*/ #define  LTE_Band3_DELTA_TC1_Set0    0x0000
/*MT6177M*/ #define  LTE_Band3_DELTA_TIB_Set0    0x0000
/*MT6177M*/ #define  LTE_Band3_RES_HNDLR_Set0    0x0000
/*MT6177M*/                                                         
/*MT6177M*/ //* ------------- MPR_BAND4 Start --------------------*/
/*MT6177M*/ #define  LTE_Band4_MPR_QPSK1_Set0    0x0100
/*MT6177M*/ #define  LTE_Band4_MPR_16QAM0_Set0   0x0100
/*MT6177M*/ #define  LTE_Band4_MPR_16QAM1_Set0   0x0200
/*MT6177M*/ #define  LTE_Band4_MPR_64QAM0_Set0   0x0200
/*MT6177M*/ #define  LTE_Band4_MPR_64QAM1_Set0   0x0300
/*MT6177M*/ #define  LTE_Band4_DELTA_TC0_Set0    0x0000
/*MT6177M*/ #define  LTE_Band4_DELTA_TC1_Set0    0x0000
/*MT6177M*/ #define  LTE_Band4_DELTA_TIB_Set0    0x0000
/*MT6177M*/ #define  LTE_Band4_RES_HNDLR_Set0    0x0000
/*MT6177M*/                                                         
/*MT6177M*/ //* ------------- MPR_BAND5 Start --------------------*/
/*MT6177M*/ #define  LTE_Band5_MPR_QPSK1_Set0    0x0100
/*MT6177M*/ #define  LTE_Band5_MPR_16QAM0_Set0   0x0100
/*MT6177M*/ #define  LTE_Band5_MPR_16QAM1_Set0   0x0200
/*MT6177M*/ #define  LTE_Band5_MPR_64QAM0_Set0   0x0200
/*MT6177M*/ #define  LTE_Band5_MPR_64QAM1_Set0   0x0300
/*MT6177M*/ #define  LTE_Band5_DELTA_TC0_Set0    0x0000
/*MT6177M*/ #define  LTE_Band5_DELTA_TC1_Set0    0x0000
/*MT6177M*/ #define  LTE_Band5_DELTA_TIB_Set0    0x0000
/*MT6177M*/ #define  LTE_Band5_RES_HNDLR_Set0    0x0000
/*MT6177M*/                                                         
/*MT6177M*/ //* ------------- MPR_BAND6 Start --------------------*/
/*MT6177M*/ #define  LTE_Band6_MPR_QPSK1_Set0    0x0100
/*MT6177M*/ #define  LTE_Band6_MPR_16QAM0_Set0   0x0100
/*MT6177M*/ #define  LTE_Band6_MPR_16QAM1_Set0   0x0200
/*MT6177M*/ #define  LTE_Band6_MPR_64QAM0_Set0   0x0200
/*MT6177M*/ #define  LTE_Band6_MPR_64QAM1_Set0   0x0300
/*MT6177M*/ #define  LTE_Band6_DELTA_TC0_Set0    0x0000
/*MT6177M*/ #define  LTE_Band6_DELTA_TC1_Set0    0x0000
/*MT6177M*/ #define  LTE_Band6_DELTA_TIB_Set0    0x0000
/*MT6177M*/ #define  LTE_Band6_RES_HNDLR_Set0    0x0000
/*MT6177M*/                                                                                                                 
/*MT6177M*/ //* ------------- MPR_BAND7 Start --------------------*/
/*MT6177M*/ #define  LTE_Band7_MPR_QPSK1_Set0    0x0100
/*MT6177M*/ #define  LTE_Band7_MPR_16QAM0_Set0   0x0100
/*MT6177M*/ #define  LTE_Band7_MPR_16QAM1_Set0   0x0200
/*MT6177M*/ #define  LTE_Band7_MPR_64QAM0_Set0   0x0200
/*MT6177M*/ #define  LTE_Band7_MPR_64QAM1_Set0   0x0300
/*MT6177M*/ #define  LTE_Band7_DELTA_TC0_Set0    0x0000
/*MT6177M*/ #define  LTE_Band7_DELTA_TC1_Set0    0x0000
/*MT6177M*/ #define  LTE_Band7_DELTA_TIB_Set0    0x0000
/*MT6177M*/ #define  LTE_Band7_RES_HNDLR_Set0    0x0000
/*MT6177M*/                                                         
/*MT6177M*/ //* ------------- MPR_BAND8 Start --------------------*/
/*MT6177M*/ #define  LTE_Band8_MPR_QPSK1_Set0    0x0100
/*MT6177M*/ #define  LTE_Band8_MPR_16QAM0_Set0   0x0100
/*MT6177M*/ #define  LTE_Band8_MPR_16QAM1_Set0   0x0200
/*MT6177M*/ #define  LTE_Band8_MPR_64QAM0_Set0   0x0200
/*MT6177M*/ #define  LTE_Band8_MPR_64QAM1_Set0   0x0300
/*MT6177M*/ #define  LTE_Band8_DELTA_TC0_Set0    0x0000
/*MT6177M*/ #define  LTE_Band8_DELTA_TC1_Set0    0x0000
/*MT6177M*/ #define  LTE_Band8_DELTA_TIB_Set0    0x0000
/*MT6177M*/ #define  LTE_Band8_RES_HNDLR_Set0    0x0000
/*MT6177M*/
/*MT6177M*/ //* ------------- MPR_BAND9 Start --------------------*/
/*MT6177M*/ #define  LTE_Band9_MPR_QPSK1_Set0    0x0100
/*MT6177M*/ #define  LTE_Band9_MPR_16QAM0_Set0   0x0100
/*MT6177M*/ #define  LTE_Band9_MPR_16QAM1_Set0   0x0200
/*MT6177M*/ #define  LTE_Band9_MPR_64QAM0_Set0   0x0200
/*MT6177M*/ #define  LTE_Band9_MPR_64QAM1_Set0   0x0300
/*MT6177M*/ #define  LTE_Band9_DELTA_TC0_Set0    0x0000
/*MT6177M*/ #define  LTE_Band9_DELTA_TC1_Set0    0x0000
/*MT6177M*/ #define  LTE_Band9_DELTA_TIB_Set0    0x0000
/*MT6177M*/ #define  LTE_Band9_RES_HNDLR_Set0    0x0000
/*MT6177M*/
/*MT6177M*/ //* ------------- MPR_BAND10 Start --------------------*/
/*MT6177M*/ #define  LTE_Band10_MPR_QPSK1_Set0    0x0100
/*MT6177M*/ #define  LTE_Band10_MPR_16QAM0_Set0   0x0100
/*MT6177M*/ #define  LTE_Band10_MPR_16QAM1_Set0   0x0200
/*MT6177M*/ #define  LTE_Band10_MPR_64QAM0_Set0   0x0200
/*MT6177M*/ #define  LTE_Band10_MPR_64QAM1_Set0   0x0300
/*MT6177M*/ #define  LTE_Band10_DELTA_TC0_Set0    0x0000
/*MT6177M*/ #define  LTE_Band10_DELTA_TC1_Set0    0x0000
/*MT6177M*/ #define  LTE_Band10_DELTA_TIB_Set0    0x0000
/*MT6177M*/ #define  LTE_Band10_RES_HNDLR_Set0    0x0000
/*MT6177M*/
/*MT6177M*/ //* ------------- MPR_BAND11 Start --------------------*/
/*MT6177M*/ #define  LTE_Band11_MPR_QPSK1_Set0    0x0100
/*MT6177M*/ #define  LTE_Band11_MPR_16QAM0_Set0   0x0100
/*MT6177M*/ #define  LTE_Band11_MPR_16QAM1_Set0   0x0200
/*MT6177M*/ #define  LTE_Band11_MPR_64QAM0_Set0   0x0200
/*MT6177M*/ #define  LTE_Band11_MPR_64QAM1_Set0   0x0300
/*MT6177M*/ #define  LTE_Band11_DELTA_TC0_Set0    0x0000
/*MT6177M*/ #define  LTE_Band11_DELTA_TC1_Set0    0x0000
/*MT6177M*/ #define  LTE_Band11_DELTA_TIB_Set0    0x0000
/*MT6177M*/ #define  LTE_Band11_RES_HNDLR_Set0    0x0000
/*MT6177M*/
/*MT6177M*/ //* ------------- MPR_BAND12 Start -------------------*/
/*MT6177M*/ #define  LTE_Band12_MPR_QPSK1_Set0    0x0100
/*MT6177M*/ #define  LTE_Band12_MPR_16QAM0_Set0   0x0100
/*MT6177M*/ #define  LTE_Band12_MPR_16QAM1_Set0   0x0200
/*MT6177M*/ #define  LTE_Band12_MPR_64QAM0_Set0   0x0200
/*MT6177M*/ #define  LTE_Band12_MPR_64QAM1_Set0   0x0300
/*MT6177M*/ #define  LTE_Band12_DELTA_TC0_Set0    0x0000
/*MT6177M*/ #define  LTE_Band12_DELTA_TC1_Set0    0x0000
/*MT6177M*/ #define  LTE_Band12_DELTA_TIB_Set0    0x0000
/*MT6177M*/ #define  LTE_Band12_RES_HNDLR_Set0    0x0000
/*MT6177M*/
/*MT6177M*/ //* ------------- MPR_BAND13 Start --------------------*/
/*MT6177M*/ #define  LTE_Band13_MPR_QPSK1_Set0    0x0100
/*MT6177M*/ #define  LTE_Band13_MPR_16QAM0_Set0   0x0100
/*MT6177M*/ #define  LTE_Band13_MPR_16QAM1_Set0   0x0200
/*MT6177M*/ #define  LTE_Band13_MPR_64QAM0_Set0   0x0200
/*MT6177M*/ #define  LTE_Band13_MPR_64QAM1_Set0   0x0300
/*MT6177M*/ #define  LTE_Band13_DELTA_TC0_Set0    0x0000
/*MT6177M*/ #define  LTE_Band13_DELTA_TC1_Set0    0x0000
/*MT6177M*/ #define  LTE_Band13_DELTA_TIB_Set0    0x0000
/*MT6177M*/ #define  LTE_Band13_RES_HNDLR_Set0    0x0000
/*MT6177M*/
/*MT6177M*/ //* ------------- MPR_BAND14 Start --------------------*/
/*MT6177M*/ #define  LTE_Band14_MPR_QPSK1_Set0    0x0100
/*MT6177M*/ #define  LTE_Band14_MPR_16QAM0_Set0   0x0100
/*MT6177M*/ #define  LTE_Band14_MPR_16QAM1_Set0   0x0200
/*MT6177M*/ #define  LTE_Band14_MPR_64QAM0_Set0   0x0200
/*MT6177M*/ #define  LTE_Band14_MPR_64QAM1_Set0   0x0300
/*MT6177M*/ #define  LTE_Band14_DELTA_TC0_Set0    0x0000
/*MT6177M*/ #define  LTE_Band14_DELTA_TC1_Set0    0x0000
/*MT6177M*/ #define  LTE_Band14_DELTA_TIB_Set0    0x0000
/*MT6177M*/ #define  LTE_Band14_RES_HNDLR_Set0    0x0000
/*MT6177M*/                                                          
/*MT6177M*/ //* ------------- MPR_BAND17 Start -------------------*/
/*MT6177M*/ #define  LTE_Band17_MPR_QPSK1_Set0    0x0100
/*MT6177M*/ #define  LTE_Band17_MPR_16QAM0_Set0   0x0100
/*MT6177M*/ #define  LTE_Band17_MPR_16QAM1_Set0   0x0200
/*MT6177M*/ #define  LTE_Band17_MPR_64QAM0_Set0   0x0200
/*MT6177M*/ #define  LTE_Band17_MPR_64QAM1_Set0   0x0300
/*MT6177M*/ #define  LTE_Band17_DELTA_TC0_Set0    0x0000
/*MT6177M*/ #define  LTE_Band17_DELTA_TC1_Set0    0x0000
/*MT6177M*/ #define  LTE_Band17_DELTA_TIB_Set0    0x0000
/*MT6177M*/ #define  LTE_Band17_RES_HNDLR_Set0    0x0000
/*MT6177M*/
/*MT6177M*/ //* ------------- MPR_BAND18 Start --------------------*/
/*MT6177M*/ #define  LTE_Band18_MPR_QPSK1_Set0    0x0100
/*MT6177M*/ #define  LTE_Band18_MPR_16QAM0_Set0   0x0100
/*MT6177M*/ #define  LTE_Band18_MPR_16QAM1_Set0   0x0200
/*MT6177M*/ #define  LTE_Band18_MPR_64QAM0_Set0   0x0200
/*MT6177M*/ #define  LTE_Band18_MPR_64QAM1_Set0   0x0300
/*MT6177M*/ #define  LTE_Band18_DELTA_TC0_Set0    0x0000
/*MT6177M*/ #define  LTE_Band18_DELTA_TC1_Set0    0x0000
/*MT6177M*/ #define  LTE_Band18_DELTA_TIB_Set0    0x0000
/*MT6177M*/ #define  LTE_Band18_RES_HNDLR_Set0    0x0000
/*MT6177M*/
/*MT6177M*/ //* ------------- MPR_BAND19 Start --------------------*/
/*MT6177M*/ #define  LTE_Band19_MPR_QPSK1_Set0    0x0100
/*MT6177M*/ #define  LTE_Band19_MPR_16QAM0_Set0   0x0100
/*MT6177M*/ #define  LTE_Band19_MPR_16QAM1_Set0   0x0200
/*MT6177M*/ #define  LTE_Band19_MPR_64QAM0_Set0   0x0200
/*MT6177M*/ #define  LTE_Band19_MPR_64QAM1_Set0   0x0300
/*MT6177M*/ #define  LTE_Band19_DELTA_TC0_Set0    0x0000
/*MT6177M*/ #define  LTE_Band19_DELTA_TC1_Set0    0x0000
/*MT6177M*/ #define  LTE_Band19_DELTA_TIB_Set0    0x0000
/*MT6177M*/ #define  LTE_Band19_RES_HNDLR_Set0    0x0000
/*MT6177M*/  
/*MT6177M*/ //* ------------- MPR_BAND20 Start -------------------*/
/*MT6177M*/ #define  LTE_Band20_MPR_QPSK1_Set0    0x0100
/*MT6177M*/ #define  LTE_Band20_MPR_16QAM0_Set0   0x0100
/*MT6177M*/ #define  LTE_Band20_MPR_16QAM1_Set0   0x0200
/*MT6177M*/ #define  LTE_Band20_MPR_64QAM0_Set0   0x0200
/*MT6177M*/ #define  LTE_Band20_MPR_64QAM1_Set0   0x0300
/*MT6177M*/ #define  LTE_Band20_DELTA_TC0_Set0    0x0000
/*MT6177M*/ #define  LTE_Band20_DELTA_TC1_Set0    0x0000
/*MT6177M*/ #define  LTE_Band20_DELTA_TIB_Set0    0x0000
/*MT6177M*/ #define  LTE_Band20_RES_HNDLR_Set0    0x0000
/*MT6177M*/
/*MT6177M*/ //* ------------- MPR_BAND21 Start -------------------*/
/*MT6177M*/ #define  LTE_Band21_MPR_QPSK1_Set0    0x0100
/*MT6177M*/ #define  LTE_Band21_MPR_16QAM0_Set0   0x0100
/*MT6177M*/ #define  LTE_Band21_MPR_16QAM1_Set0   0x0200
/*MT6177M*/ #define  LTE_Band21_MPR_64QAM0_Set0   0x0200
/*MT6177M*/ #define  LTE_Band21_MPR_64QAM1_Set0   0x0300
/*MT6177M*/ #define  LTE_Band21_DELTA_TC0_Set0    0x0000
/*MT6177M*/ #define  LTE_Band21_DELTA_TC1_Set0    0x0000
/*MT6177M*/ #define  LTE_Band21_DELTA_TIB_Set0    0x0000
/*MT6177M*/ #define  LTE_Band21_RES_HNDLR_Set0    0x0000
/*MT6177M*/
/*MT6177M*/ //* ------------- MPR_BAND22 Start -------------------*/
/*MT6177M*/ #define  LTE_Band22_MPR_QPSK1_Set0    0x0100
/*MT6177M*/ #define  LTE_Band22_MPR_16QAM0_Set0   0x0100
/*MT6177M*/ #define  LTE_Band22_MPR_16QAM1_Set0   0x0200
/*MT6177M*/ #define  LTE_Band22_MPR_64QAM0_Set0   0x0200
/*MT6177M*/ #define  LTE_Band22_MPR_64QAM1_Set0   0x0300
/*MT6177M*/ #define  LTE_Band22_DELTA_TC0_Set0    0x0000
/*MT6177M*/ #define  LTE_Band22_DELTA_TC1_Set0    0x0000
/*MT6177M*/ #define  LTE_Band22_DELTA_TIB_Set0    0x0000
/*MT6177M*/ #define  LTE_Band22_RES_HNDLR_Set0    0x0000
/*MT6177M*/
/*MT6177M*/ //* ------------- MPR_BAND23 Start -------------------*/
/*MT6177M*/ #define  LTE_Band23_MPR_QPSK1_Set0    0x0100
/*MT6177M*/ #define  LTE_Band23_MPR_16QAM0_Set0   0x0100
/*MT6177M*/ #define  LTE_Band23_MPR_16QAM1_Set0   0x0200
/*MT6177M*/ #define  LTE_Band23_MPR_64QAM0_Set0   0x0200
/*MT6177M*/ #define  LTE_Band23_MPR_64QAM1_Set0   0x0300
/*MT6177M*/ #define  LTE_Band23_DELTA_TC0_Set0    0x0000
/*MT6177M*/ #define  LTE_Band23_DELTA_TC1_Set0    0x0000
/*MT6177M*/ #define  LTE_Band23_DELTA_TIB_Set0    0x0000
/*MT6177M*/ #define  LTE_Band23_RES_HNDLR_Set0    0x0000
/*MT6177M*/
/*MT6177M*/ //* ------------- MPR_BAND24 Start -------------------*/
/*MT6177M*/ #define  LTE_Band24_MPR_QPSK1_Set0    0x0100
/*MT6177M*/ #define  LTE_Band24_MPR_16QAM0_Set0   0x0100
/*MT6177M*/ #define  LTE_Band24_MPR_16QAM1_Set0   0x0200
/*MT6177M*/ #define  LTE_Band24_MPR_64QAM0_Set0   0x0200
/*MT6177M*/ #define  LTE_Band24_MPR_64QAM1_Set0   0x0300
/*MT6177M*/ #define  LTE_Band24_DELTA_TC0_Set0    0x0000
/*MT6177M*/ #define  LTE_Band24_DELTA_TC1_Set0    0x0000
/*MT6177M*/ #define  LTE_Band24_DELTA_TIB_Set0    0x0000
/*MT6177M*/ #define  LTE_Band24_RES_HNDLR_Set0    0x0000
/*MT6177M*/
/*MT6177M*/ //* ------------- MPR_BAND25 Start -------------------*/
/*MT6177M*/ #define  LTE_Band25_MPR_QPSK1_Set0    0x0100
/*MT6177M*/ #define  LTE_Band25_MPR_16QAM0_Set0   0x0100
/*MT6177M*/ #define  LTE_Band25_MPR_16QAM1_Set0   0x0200
/*MT6177M*/ #define  LTE_Band25_MPR_64QAM0_Set0   0x0200
/*MT6177M*/ #define  LTE_Band25_MPR_64QAM1_Set0   0x0300
/*MT6177M*/ #define  LTE_Band25_DELTA_TC0_Set0    0x0000
/*MT6177M*/ #define  LTE_Band25_DELTA_TC1_Set0    0x0000
/*MT6177M*/ #define  LTE_Band25_DELTA_TIB_Set0    0x0000
/*MT6177M*/ #define  LTE_Band25_RES_HNDLR_Set0    0x0000
/*MT6177M*/
/*MT6177M*/ //* ------------- MPR_BAND26 Start -------------------*/
/*MT6177M*/ #define  LTE_Band26_MPR_QPSK1_Set0    0x0100
/*MT6177M*/ #define  LTE_Band26_MPR_16QAM0_Set0   0x0100
/*MT6177M*/ #define  LTE_Band26_MPR_16QAM1_Set0   0x0200
/*MT6177M*/ #define  LTE_Band26_MPR_64QAM0_Set0   0x0200
/*MT6177M*/ #define  LTE_Band26_MPR_64QAM1_Set0   0x0300
/*MT6177M*/ #define  LTE_Band26_DELTA_TC0_Set0    0x0000
/*MT6177M*/ #define  LTE_Band26_DELTA_TC1_Set0    0x0000
/*MT6177M*/ #define  LTE_Band26_DELTA_TIB_Set0    0x0000
/*MT6177M*/ #define  LTE_Band26_RES_HNDLR_Set0    0x0000
/*MT6177M*/
/*MT6177M*/ //* ------------- MPR_BAND27 Start -------------------*/
/*MT6177M*/ #define  LTE_Band27_MPR_QPSK1_Set0    0x0100
/*MT6177M*/ #define  LTE_Band27_MPR_16QAM0_Set0   0x0100
/*MT6177M*/ #define  LTE_Band27_MPR_16QAM1_Set0   0x0200
/*MT6177M*/ #define  LTE_Band27_MPR_64QAM0_Set0   0x0200
/*MT6177M*/ #define  LTE_Band27_MPR_64QAM1_Set0   0x0300
/*MT6177M*/ #define  LTE_Band27_DELTA_TC0_Set0    0x0000
/*MT6177M*/ #define  LTE_Band27_DELTA_TC1_Set0    0x0000
/*MT6177M*/ #define  LTE_Band27_DELTA_TIB_Set0    0x0000
/*MT6177M*/ #define  LTE_Band27_RES_HNDLR_Set0    0x0000
/*MT6177M*/                                                         
/*MT6177M*/ //* ------------- MPR_BAND28 Start -------------------*/
/*MT6177M*/ #define  LTE_Band28_MPR_QPSK1_Set0    0x0100
/*MT6177M*/ #define  LTE_Band28_MPR_16QAM0_Set0   0x0100
/*MT6177M*/ #define  LTE_Band28_MPR_16QAM1_Set0   0x0200       
/*MT6177M*/ #define  LTE_Band28_MPR_64QAM0_Set0   0x0200
/*MT6177M*/ #define  LTE_Band28_MPR_64QAM1_Set0   0x0300
/*MT6177M*/ #define  LTE_Band28_DELTA_TC0_Set0    0x0000
/*MT6177M*/ #define  LTE_Band28_DELTA_TC1_Set0    0x0000
/*MT6177M*/ #define  LTE_Band28_DELTA_TIB_Set0    0x0000
/*MT6177M*/ #define  LTE_Band28_RES_HNDLR_Set0    0x0000
/*MT6177M*/
/*MT6177M*/ //* ------------- MPR_BAND29 Start -------------------*/
/*MT6177M*/ #define  LTE_Band29_MPR_QPSK1_Set0    0x0100
/*MT6177M*/ #define  LTE_Band29_MPR_16QAM0_Set0   0x0100
/*MT6177M*/ #define  LTE_Band29_MPR_16QAM1_Set0   0x0200
/*MT6177M*/ #define  LTE_Band29_MPR_64QAM0_Set0   0x0200
/*MT6177M*/ #define  LTE_Band29_MPR_64QAM1_Set0   0x0300
/*MT6177M*/ #define  LTE_Band29_DELTA_TC0_Set0    0x0000
/*MT6177M*/ #define  LTE_Band29_DELTA_TC1_Set0    0x0000
/*MT6177M*/ #define  LTE_Band29_DELTA_TIB_Set0    0x0000
/*MT6177M*/ #define  LTE_Band29_RES_HNDLR_Set0    0x0000
/*MT6177M*/
/*MT6177M*/ //* ------------- MPR_BAND30 Start -------------------*/
/*MT6177M*/ #define  LTE_Band30_MPR_QPSK1_Set0    0x0100
/*MT6177M*/ #define  LTE_Band30_MPR_16QAM0_Set0   0x0100
/*MT6177M*/ #define  LTE_Band30_MPR_16QAM1_Set0   0x0200
/*MT6177M*/ #define  LTE_Band30_MPR_64QAM0_Set0   0x0200
/*MT6177M*/ #define  LTE_Band30_MPR_64QAM1_Set0   0x0300
/*MT6177M*/ #define  LTE_Band30_DELTA_TC0_Set0    0x0000
/*MT6177M*/ #define  LTE_Band30_DELTA_TC1_Set0    0x0000
/*MT6177M*/ #define  LTE_Band30_DELTA_TIB_Set0    0x0000
/*MT6177M*/ #define  LTE_Band30_RES_HNDLR_Set0    0x0000
/*MT6177M*/
/*MT6177M*/ //* ------------- MPR_BAND31 Start -------------------*/
/*MT6177M*/ #define  LTE_Band31_MPR_QPSK1_Set0    0x0100
/*MT6177M*/ #define  LTE_Band31_MPR_16QAM0_Set0   0x0100
/*MT6177M*/ #define  LTE_Band31_MPR_16QAM1_Set0   0x0200
/*MT6177M*/ #define  LTE_Band31_MPR_64QAM0_Set0   0x0200
/*MT6177M*/ #define  LTE_Band31_MPR_64QAM1_Set0   0x0300
/*MT6177M*/ #define  LTE_Band31_DELTA_TC0_Set0    0x0000
/*MT6177M*/ #define  LTE_Band31_DELTA_TC1_Set0    0x0000
/*MT6177M*/ #define  LTE_Band31_DELTA_TIB_Set0    0x0000
/*MT6177M*/ #define  LTE_Band31_RES_HNDLR_Set0    0x0000
/*MT6177M*/
/*MT6177M*/ //* ------------- MPR_BAND32 Start -------------------*/
/*MT6177M*/ #define  LTE_Band32_MPR_QPSK1_Set0    0x0100
/*MT6177M*/ #define  LTE_Band32_MPR_16QAM0_Set0   0x0100
/*MT6177M*/ #define  LTE_Band32_MPR_16QAM1_Set0   0x0200
/*MT6177M*/ #define  LTE_Band32_MPR_64QAM0_Set0   0x0200
/*MT6177M*/ #define  LTE_Band32_MPR_64QAM1_Set0   0x0300
/*MT6177M*/ #define  LTE_Band32_DELTA_TC0_Set0    0x0000
/*MT6177M*/ #define  LTE_Band32_DELTA_TC1_Set0    0x0000
/*MT6177M*/ #define  LTE_Band32_DELTA_TIB_Set0    0x0000
/*MT6177M*/ #define  LTE_Band32_RES_HNDLR_Set0    0x0000
/*MT6177M*/
/*MT6177M*/ //* ------------- MPR_BAND33 Start -------------------*/
/*MT6177M*/ #define  LTE_Band33_MPR_QPSK1_Set0    0x0100
/*MT6177M*/ #define  LTE_Band33_MPR_16QAM0_Set0   0x0100
/*MT6177M*/ #define  LTE_Band33_MPR_16QAM1_Set0   0x0200
/*MT6177M*/ #define  LTE_Band33_MPR_64QAM0_Set0   0x0200
/*MT6177M*/ #define  LTE_Band33_MPR_64QAM1_Set0   0x0300
/*MT6177M*/ #define  LTE_Band33_DELTA_TC0_Set0    0x0000
/*MT6177M*/ #define  LTE_Band33_DELTA_TC1_Set0    0x0000
/*MT6177M*/ #define  LTE_Band33_DELTA_TIB_Set0    0x0000
/*MT6177M*/ #define  LTE_Band33_RES_HNDLR_Set0    0x0000
/*MT6177M*/
/*MT6177M*/ //* ------------- MPR_BAND34 Start -------------------*/
/*MT6177M*/ #define  LTE_Band34_MPR_QPSK1_Set0    0x0100
/*MT6177M*/ #define  LTE_Band34_MPR_16QAM0_Set0   0x0100
/*MT6177M*/ #define  LTE_Band34_MPR_16QAM1_Set0   0x0200
/*MT6177M*/ #define  LTE_Band34_MPR_64QAM0_Set0   0x0200
/*MT6177M*/ #define  LTE_Band34_MPR_64QAM1_Set0   0x0300
/*MT6177M*/ #define  LTE_Band34_DELTA_TC0_Set0    0x0000
/*MT6177M*/ #define  LTE_Band34_DELTA_TC1_Set0    0x0000
/*MT6177M*/ #define  LTE_Band34_DELTA_TIB_Set0    0x0000
/*MT6177M*/ #define  LTE_Band34_RES_HNDLR_Set0    0x0000
/*MT6177M*/
/*MT6177M*/ //* ------------- MPR_BAND35 Start -------------------*/
/*MT6177M*/ #define  LTE_Band35_MPR_QPSK1_Set0    0x0100
/*MT6177M*/ #define  LTE_Band35_MPR_16QAM0_Set0   0x0100
/*MT6177M*/ #define  LTE_Band35_MPR_16QAM1_Set0   0x0200
/*MT6177M*/ #define  LTE_Band35_MPR_64QAM0_Set0   0x0200
/*MT6177M*/ #define  LTE_Band35_MPR_64QAM1_Set0   0x0300
/*MT6177M*/ #define  LTE_Band35_DELTA_TC0_Set0    0x0000
/*MT6177M*/ #define  LTE_Band35_DELTA_TC1_Set0    0x0000
/*MT6177M*/ #define  LTE_Band35_DELTA_TIB_Set0    0x0000
/*MT6177M*/ #define  LTE_Band35_RES_HNDLR_Set0    0x0000
/*MT6177M*/
/*MT6177M*/ //* ------------- MPR_BAND36 Start -------------------*/
/*MT6177M*/ #define  LTE_Band36_MPR_QPSK1_Set0    0x0100
/*MT6177M*/ #define  LTE_Band36_MPR_16QAM0_Set0   0x0100
/*MT6177M*/ #define  LTE_Band36_MPR_16QAM1_Set0   0x0200
/*MT6177M*/ #define  LTE_Band36_MPR_64QAM0_Set0   0x0200
/*MT6177M*/ #define  LTE_Band36_MPR_64QAM1_Set0   0x0300
/*MT6177M*/ #define  LTE_Band36_DELTA_TC0_Set0    0x0000
/*MT6177M*/ #define  LTE_Band36_DELTA_TC1_Set0    0x0000
/*MT6177M*/ #define  LTE_Band36_DELTA_TIB_Set0    0x0000
/*MT6177M*/ #define  LTE_Band36_RES_HNDLR_Set0    0x0000
/*MT6177M*/
/*MT6177M*/ //* ------------- MPR_BAND37 Start -------------------*/
/*MT6177M*/ #define  LTE_Band37_MPR_QPSK1_Set0    0x0100
/*MT6177M*/ #define  LTE_Band37_MPR_16QAM0_Set0   0x0100
/*MT6177M*/ #define  LTE_Band37_MPR_16QAM1_Set0   0x0200
/*MT6177M*/ #define  LTE_Band37_MPR_64QAM0_Set0   0x0200
/*MT6177M*/ #define  LTE_Band37_MPR_64QAM1_Set0   0x0300
/*MT6177M*/ #define  LTE_Band37_DELTA_TC0_Set0    0x0000
/*MT6177M*/ #define  LTE_Band37_DELTA_TC1_Set0    0x0000
/*MT6177M*/ #define  LTE_Band37_DELTA_TIB_Set0    0x0000
/*MT6177M*/ #define  LTE_Band37_RES_HNDLR_Set0    0x0000
/*MT6177M*/
/*MT6177M*/ //* ------------- MPR_BAND38 Start -------------------*/
/*MT6177M*/ #define  LTE_Band38_MPR_QPSK1_Set0    0x0100
/*MT6177M*/ #define  LTE_Band38_MPR_16QAM0_Set0   0x0100
/*MT6177M*/ #define  LTE_Band38_MPR_16QAM1_Set0   0x0200
/*MT6177M*/ #define  LTE_Band38_MPR_64QAM0_Set0   0x0200
/*MT6177M*/ #define  LTE_Band38_MPR_64QAM1_Set0   0x0300
/*MT6177M*/ #define  LTE_Band38_DELTA_TC0_Set0    0x0000
/*MT6177M*/ #define  LTE_Band38_DELTA_TC1_Set0    0x0000
/*MT6177M*/ #define  LTE_Band38_DELTA_TIB_Set0    0x0000
/*MT6177M*/ #define  LTE_Band38_RES_HNDLR_Set0    0x0000
/*MT6177M*/                                                         
/*MT6177M*/ //* ------------- MPR_BAND39 Start -------------------*/
/*MT6177M*/ #define  LTE_Band39_MPR_QPSK1_Set0    0x0100
/*MT6177M*/ #define  LTE_Band39_MPR_16QAM0_Set0   0x0100
/*MT6177M*/ #define  LTE_Band39_MPR_16QAM1_Set0   0x0200
/*MT6177M*/ #define  LTE_Band39_MPR_64QAM0_Set0   0x0200
/*MT6177M*/ #define  LTE_Band39_MPR_64QAM1_Set0   0x0300
/*MT6177M*/ #define  LTE_Band39_DELTA_TC0_Set0    0x0000
/*MT6177M*/ #define  LTE_Band39_DELTA_TC1_Set0    0x0000
/*MT6177M*/ #define  LTE_Band39_DELTA_TIB_Set0    0x0000
/*MT6177M*/ #define  LTE_Band39_RES_HNDLR_Set0    0x0000
/*MT6177M*/                                                         
/*MT6177M*/ //* ------------- MPR_BAND40 Start -------------------*/
/*MT6177M*/ #define  LTE_Band40_MPR_QPSK1_Set0    0x0100
/*MT6177M*/ #define  LTE_Band40_MPR_16QAM0_Set0   0x0100
/*MT6177M*/ #define  LTE_Band40_MPR_16QAM1_Set0   0x0200
/*MT6177M*/ #define  LTE_Band40_MPR_64QAM0_Set0   0x0200
/*MT6177M*/ #define  LTE_Band40_MPR_64QAM1_Set0   0x0300
/*MT6177M*/ #define  LTE_Band40_DELTA_TC0_Set0    0x0000
/*MT6177M*/ #define  LTE_Band40_DELTA_TC1_Set0    0x0000
/*MT6177M*/ #define  LTE_Band40_DELTA_TIB_Set0    0x0000
/*MT6177M*/ #define  LTE_Band40_RES_HNDLR_Set0    0x0000
/*MT6177M*/                                                         
/*MT6177M*/ //* ------------- MPR_BAND41 Start -------------------*/
/*MT6177M*/ #define  LTE_Band41_MPR_QPSK1_Set0    0x0100
/*MT6177M*/ #define  LTE_Band41_MPR_16QAM0_Set0   0x0100
/*MT6177M*/ #define  LTE_Band41_MPR_16QAM1_Set0   0x0200
/*MT6177M*/ #define  LTE_Band41_MPR_64QAM0_Set0   0x0200
/*MT6177M*/ #define  LTE_Band41_MPR_64QAM1_Set0   0x0300
/*MT6177M*/ #define  LTE_Band41_DELTA_TC0_Set0    0x0000
/*MT6177M*/ #define  LTE_Band41_DELTA_TC1_Set0    0x0000
/*MT6177M*/ #define  LTE_Band41_DELTA_TIB_Set0    0x0000
/*MT6177M*/ #define  LTE_Band41_RES_HNDLR_Set0    0x0000
/*MT6177M*/                                                         
/*MT6177M*/ //* ------------- MPR_BAND42 Start -------------------*/
/*MT6177M*/ #define  LTE_Band42_MPR_QPSK1_Set0    0x0100
/*MT6177M*/ #define  LTE_Band42_MPR_16QAM0_Set0   0x0100
/*MT6177M*/ #define  LTE_Band42_MPR_16QAM1_Set0   0x0200
/*MT6177M*/ #define  LTE_Band42_MPR_64QAM0_Set0   0x0200
/*MT6177M*/ #define  LTE_Band42_MPR_64QAM1_Set0   0x0300
/*MT6177M*/ #define  LTE_Band42_DELTA_TC0_Set0    0x0000
/*MT6177M*/ #define  LTE_Band42_DELTA_TC1_Set0    0x0000
/*MT6177M*/ #define  LTE_Band42_DELTA_TIB_Set0    0x0000
/*MT6177M*/ #define  LTE_Band42_RES_HNDLR_Set0    0x0000
/*MT6177M*/
/*MT6177M*/ //* ------------- MPR_BAND43 Start -------------------*/
/*MT6177M*/ #define  LTE_Band43_MPR_QPSK1_Set0    0x0100
/*MT6177M*/ #define  LTE_Band43_MPR_16QAM0_Set0   0x0100
/*MT6177M*/ #define  LTE_Band43_MPR_16QAM1_Set0   0x0200
/*MT6177M*/ #define  LTE_Band43_MPR_64QAM0_Set0   0x0200
/*MT6177M*/ #define  LTE_Band43_MPR_64QAM1_Set0   0x0300
/*MT6177M*/ #define  LTE_Band43_DELTA_TC0_Set0    0x0000
/*MT6177M*/ #define  LTE_Band43_DELTA_TC1_Set0    0x0000
/*MT6177M*/ #define  LTE_Band43_DELTA_TIB_Set0    0x0000
/*MT6177M*/ #define  LTE_Band43_RES_HNDLR_Set0    0x0000
/*MT6177M*/
/*MT6177M*/ //* ------------- MPR_BAND44 Start -------------------*/
/*MT6177M*/ #define  LTE_Band44_MPR_QPSK1_Set0    0x0100
/*MT6177M*/ #define  LTE_Band44_MPR_16QAM0_Set0   0x0100
/*MT6177M*/ #define  LTE_Band44_MPR_16QAM1_Set0   0x0200
/*MT6177M*/ #define  LTE_Band44_MPR_64QAM0_Set0   0x0200
/*MT6177M*/ #define  LTE_Band44_MPR_64QAM1_Set0   0x0300
/*MT6177M*/ #define  LTE_Band44_DELTA_TC0_Set0    0x0000
/*MT6177M*/ #define  LTE_Band44_DELTA_TC1_Set0    0x0000
/*MT6177M*/ #define  LTE_Band44_DELTA_TIB_Set0    0x0000
/*MT6177M*/ #define  LTE_Band44_RES_HNDLR_Set0    0x0000
/*MT6177M*/
/*MT6177M*/ //* ------------- MPR_BAND45 Start -------------------*/
/*MT6177M*/ #define  LTE_Band45_MPR_QPSK1_Set0    0x0100
/*MT6177M*/ #define  LTE_Band45_MPR_16QAM0_Set0   0x0100
/*MT6177M*/ #define  LTE_Band45_MPR_16QAM1_Set0   0x0200
/*MT6177M*/ #define  LTE_Band45_MPR_64QAM0_Set0   0x0200
/*MT6177M*/ #define  LTE_Band45_MPR_64QAM1_Set0   0x0300
/*MT6177M*/ #define  LTE_Band45_DELTA_TC0_Set0    0x0000
/*MT6177M*/ #define  LTE_Band45_DELTA_TC1_Set0    0x0000
/*MT6177M*/ #define  LTE_Band45_DELTA_TIB_Set0    0x0000
/*MT6177M*/ #define  LTE_Band45_RES_HNDLR_Set0    0x0000
/*MT6177M*/
/*MT6177M*/ //* ------------- MPR_BAND46 Start -------------------*/
/*MT6177M*/ #define  LTE_Band46_MPR_QPSK1_Set0    0x0100
/*MT6177M*/ #define  LTE_Band46_MPR_16QAM0_Set0   0x0100
/*MT6177M*/ #define  LTE_Band46_MPR_16QAM1_Set0   0x0200
/*MT6177M*/ #define  LTE_Band46_MPR_64QAM0_Set0   0x0200
/*MT6177M*/ #define  LTE_Band46_MPR_64QAM1_Set0   0x0300
/*MT6177M*/ #define  LTE_Band46_DELTA_TC0_Set0    0x0000
/*MT6177M*/ #define  LTE_Band46_DELTA_TC1_Set0    0x0000
/*MT6177M*/ #define  LTE_Band46_DELTA_TIB_Set0    0x0000
/*MT6177M*/ #define  LTE_Band46_RES_HNDLR_Set0    0x0000
/*MT6177M*/
/*MT6177M*/ //* ------------- MPR_BAND65 Start -------------------*/
/*MT6177M*/ #define  LTE_Band65_MPR_QPSK1_Set0    0x0100
/*MT6177M*/ #define  LTE_Band65_MPR_16QAM0_Set0   0x0100
/*MT6177M*/ #define  LTE_Band65_MPR_16QAM1_Set0   0x0200
/*MT6177M*/ #define  LTE_Band65_MPR_64QAM0_Set0   0x0200
/*MT6177M*/ #define  LTE_Band65_MPR_64QAM1_Set0   0x0300
/*MT6177M*/ #define  LTE_Band65_DELTA_TC0_Set0    0x0000
/*MT6177M*/ #define  LTE_Band65_DELTA_TC1_Set0    0x0000
/*MT6177M*/ #define  LTE_Band65_DELTA_TIB_Set0    0x0000
/*MT6177M*/ #define  LTE_Band65_RES_HNDLR_Set0    0x0000
/*MT6177M*/
/*MT6177M*/ //* ------------- MPR_BAND66 Start -------------------*/
/*MT6177M*/ #define  LTE_Band66_MPR_QPSK1_Set0    0x0100
/*MT6177M*/ #define  LTE_Band66_MPR_16QAM0_Set0   0x0100
/*MT6177M*/ #define  LTE_Band66_MPR_16QAM1_Set0   0x0200
/*MT6177M*/ #define  LTE_Band66_MPR_64QAM0_Set0   0x0200
/*MT6177M*/ #define  LTE_Band66_MPR_64QAM1_Set0   0x0300
/*MT6177M*/ #define  LTE_Band66_DELTA_TC0_Set0    0x0000
/*MT6177M*/ #define  LTE_Band66_DELTA_TC1_Set0    0x0000
/*MT6177M*/ #define  LTE_Band66_DELTA_TIB_Set0    0x0000
/*MT6177M*/ #define  LTE_Band66_RES_HNDLR_Set0    0x0000
/*MT6177M*/
/*MT6177M*/ //* ------------- MPR_BAND68 Start -------------------*/
/*MT6177M*/ #define  LTE_Band68_MPR_QPSK1_Set0    0x0100
/*MT6177M*/ #define  LTE_Band68_MPR_16QAM0_Set0   0x0100
/*MT6177M*/ #define  LTE_Band68_MPR_16QAM1_Set0   0x0200
/*MT6177M*/ #define  LTE_Band68_MPR_64QAM0_Set0   0x0200
/*MT6177M*/ #define  LTE_Band68_MPR_64QAM1_Set0   0x0300
/*MT6177M*/ #define  LTE_Band68_DELTA_TC0_Set0    0x0000
/*MT6177M*/ #define  LTE_Band68_DELTA_TC1_Set0    0x0000
/*MT6177M*/ #define  LTE_Band68_DELTA_TIB_Set0    0x0000
/*MT6177M*/ #define  LTE_Band68_RES_HNDLR_Set0    0x0000
/*MT6177M*/
/*MT6177M*/ //* ------------- MPR_BAND71 Start -------------------*/
/*MT6177M*/ #define  LTE_Band71_MPR_QPSK1_Set0    0x0100
/*MT6177M*/ #define  LTE_Band71_MPR_16QAM0_Set0   0x0100
/*MT6177M*/ #define  LTE_Band71_MPR_16QAM1_Set0   0x0200
/*MT6177M*/ #define  LTE_Band71_MPR_64QAM0_Set0   0x0200
/*MT6177M*/ #define  LTE_Band71_MPR_64QAM1_Set0   0x0300
/*MT6177M*/ #define  LTE_Band71_DELTA_TC0_Set0    0x0000
/*MT6177M*/ #define  LTE_Band71_DELTA_TC1_Set0    0x0000
/*MT6177M*/ #define  LTE_Band71_DELTA_TIB_Set0    0x0000
/*MT6177M*/ #define  LTE_Band71_RES_HNDLR_Set0    0x0000
/*MT6177M*/
/*MT6177M*/ //* ------------- MPR_BAND252 Start -------------------*/
/*MT6177M*/ #define  LTE_Band252_MPR_QPSK1_Set0   0x0100
/*MT6177M*/ #define  LTE_Band252_MPR_16QAM0_Set0  0x0100
/*MT6177M*/ #define  LTE_Band252_MPR_16QAM1_Set0  0x0200
/*MT6177M*/ #define  LTE_Band252_MPR_64QAM0_Set0  0x0200
/*MT6177M*/ #define  LTE_Band252_MPR_64QAM1_Set0  0x0300
/*MT6177M*/ #define  LTE_Band252_DELTA_TC0_Set0   0x0000
/*MT6177M*/ #define  LTE_Band252_DELTA_TC1_Set0   0x0000
/*MT6177M*/ #define  LTE_Band252_DELTA_TIB_Set0   0x0000
/*MT6177M*/ #define  LTE_Band252_RES_HNDLR_Set0    0x0000
/*MT6177M*/
/*MT6177M*/ //* ------------- MPR_BAND255 Start -------------------*/
/*MT6177M*/ #define  LTE_Band255_MPR_QPSK1_Set0   0x0100
/*MT6177M*/ #define  LTE_Band255_MPR_16QAM0_Set0  0x0100
/*MT6177M*/ #define  LTE_Band255_MPR_16QAM1_Set0  0x0200
/*MT6177M*/ #define  LTE_Band255_MPR_64QAM0_Set0  0x0200
/*MT6177M*/ #define  LTE_Band255_MPR_64QAM1_Set0  0x0300
/*MT6177M*/ #define  LTE_Band255_DELTA_TC0_Set0   0x0000
/*MT6177M*/ #define  LTE_Band255_DELTA_TC1_Set0   0x0000
/*MT6177M*/ #define  LTE_Band255_DELTA_TIB_Set0   0x0000
/*MT6177M*/ #define  LTE_Band255_RES_HNDLR_Set0    0x0000
/*MT6177M*/
/*MT6177M*/ //* ------------- MPR_BANDNone Start -------------------*/
/*MT6177M*/ #define  LTE_BandNone_MPR_QPSK1_Set0  0x0000
/*MT6177M*/ #define  LTE_BandNone_MPR_16QAM0_Set0 0x0000
/*MT6177M*/ #define  LTE_BandNone_MPR_16QAM1_Set0 0x0000
/*MT6177M*/ #define  LTE_BandNone_MPR_64QAM0_Set0 0x0000       
/*MT6177M*/ #define  LTE_BandNone_MPR_64QAM1_Set0 0x0000 
/*MT6177M*/ #define  LTE_BandNone_DELTA_TC0_Set0  0x0000
/*MT6177M*/ #define  LTE_BandNone_DELTA_TC1_Set0  0x0000
/*MT6177M*/ #define  LTE_BandNone_DELTA_TIB_Set0  0x0000
/*MT6177M*/ #define  LTE_BandNone_RES_HNDLR_Set0    0x0000
/*MT6177M*/
/*MT6177M*/ /*-------------------------------------------------------------------*/
/*MT6177M*/ /*  MPR value for each ULCA band setting: 36.101 6.2.3A 6.2.5A with S(8.8)  */
/*MT6177M*/ /*  MPR value for each band setting: 36.101 Table 6.2.3A-1            */
/*MT6177M*/ /*  (No DRDI)                                                        */
/*MT6177M*/ /*-------------------------------------------------------------------*/
/*MT6177M*/ //* ------------- MPR_BAND1 Start --------------------*/
/*MT6177M*/ #define  LTE_Band1_MPR_QPSK0_CA_Set0    0x0100
/*MT6177M*/ #define  LTE_Band1_MPR_QPSK1_CA_Set0    0x0200       
/*MT6177M*/ #define  LTE_Band1_MPR_16QAM0_CA_Set0   0x0100       
/*MT6177M*/ #define  LTE_Band1_MPR_16QAM1_CA_Set0   0x0200
/*MT6177M*/ #define  LTE_Band1_MPR_16QAM2_CA_Set0   0x0300
/*MT6177M*/ #define  LTE_Band1_MPR_64QAM0_CA_Set0   0x0200
/*MT6177M*/ #define  LTE_Band1_MPR_64QAM1_CA_Set0   0x0300
/*MT6177M*/ #define  LTE_Band1_DELTA_TC0_CA_Set0    0x0000       
/*MT6177M*/ #define  LTE_Band1_DELTA_TC1_CA_Set0    0x0000       
/*MT6177M*/ #define  LTE_Band1_DELTA_TIB_CA_Set0    0x0000
/*MT6177M*/ #define  LTE_Band1_RES_HNDLR_CA_Set0    0x0000
/*MT6177M*/
/*MT6177M*/ //* ------------- MPR_BAND2 Start --------------------*/
/*MT6177M*/ #define  LTE_Band2_MPR_QPSK0_CA_Set0    0x0100
/*MT6177M*/ #define  LTE_Band2_MPR_QPSK1_CA_Set0    0x0200       
/*MT6177M*/ #define  LTE_Band2_MPR_16QAM0_CA_Set0   0x0100       
/*MT6177M*/ #define  LTE_Band2_MPR_16QAM1_CA_Set0   0x0200
/*MT6177M*/ #define  LTE_Band2_MPR_16QAM2_CA_Set0   0x0300
/*MT6177M*/ #define  LTE_Band2_MPR_64QAM0_CA_Set0   0x0200
/*MT6177M*/ #define  LTE_Band2_MPR_64QAM1_CA_Set0   0x0300
/*MT6177M*/ #define  LTE_Band2_DELTA_TC0_CA_Set0    0x0000       
/*MT6177M*/ #define  LTE_Band2_DELTA_TC1_CA_Set0    0x0000       
/*MT6177M*/ #define  LTE_Band2_DELTA_TIB_CA_Set0    0x0000
/*MT6177M*/ #define  LTE_Band2_RES_HNDLR_CA_Set0    0x0000
/*MT6177M*/
/*MT6177M*/ //* ------------- MPR_BAND3 Start --------------------*/
/*MT6177M*/ #define  LTE_Band3_MPR_QPSK0_CA_Set0    0x0100
/*MT6177M*/ #define  LTE_Band3_MPR_QPSK1_CA_Set0    0x0200       
/*MT6177M*/ #define  LTE_Band3_MPR_16QAM0_CA_Set0   0x0100       
/*MT6177M*/ #define  LTE_Band3_MPR_16QAM1_CA_Set0   0x0200
/*MT6177M*/ #define  LTE_Band3_MPR_16QAM2_CA_Set0   0x0300
/*MT6177M*/ #define  LTE_Band3_MPR_64QAM0_CA_Set0   0x0200
/*MT6177M*/ #define  LTE_Band3_MPR_64QAM1_CA_Set0   0x0300
/*MT6177M*/ #define  LTE_Band3_DELTA_TC0_CA_Set0    0x0000       
/*MT6177M*/ #define  LTE_Band3_DELTA_TC1_CA_Set0    0x0000       
/*MT6177M*/ #define  LTE_Band3_DELTA_TIB_CA_Set0    0x0000
/*MT6177M*/ #define  LTE_Band3_RES_HNDLR_CA_Set0    0x0000
/*MT6177M*/
/*MT6177M*/ //* ------------- MPR_BAND4 Start --------------------*/
/*MT6177M*/ #define  LTE_Band4_MPR_QPSK0_CA_Set0    0x0100
/*MT6177M*/ #define  LTE_Band4_MPR_QPSK1_CA_Set0    0x0200       
/*MT6177M*/ #define  LTE_Band4_MPR_16QAM0_CA_Set0   0x0100       
/*MT6177M*/ #define  LTE_Band4_MPR_16QAM1_CA_Set0   0x0200
/*MT6177M*/ #define  LTE_Band4_MPR_16QAM2_CA_Set0   0x0300
/*MT6177M*/ #define  LTE_Band4_MPR_64QAM0_CA_Set0   0x0200
/*MT6177M*/ #define  LTE_Band4_MPR_64QAM1_CA_Set0   0x0300
/*MT6177M*/ #define  LTE_Band4_DELTA_TC0_CA_Set0    0x0000       
/*MT6177M*/ #define  LTE_Band4_DELTA_TC1_CA_Set0    0x0000       
/*MT6177M*/ #define  LTE_Band4_DELTA_TIB_CA_Set0    0x0000
/*MT6177M*/ #define  LTE_Band4_RES_HNDLR_CA_Set0    0x0000
/*MT6177M*/
/*MT6177M*/ //* ------------- MPR_BAND5 Start --------------------*/
/*MT6177M*/ #define  LTE_Band5_MPR_QPSK0_CA_Set0    0x0100
/*MT6177M*/ #define  LTE_Band5_MPR_QPSK1_CA_Set0    0x0200       
/*MT6177M*/ #define  LTE_Band5_MPR_16QAM0_CA_Set0   0x0100       
/*MT6177M*/ #define  LTE_Band5_MPR_16QAM1_CA_Set0   0x0200
/*MT6177M*/ #define  LTE_Band5_MPR_16QAM2_CA_Set0   0x0300
/*MT6177M*/ #define  LTE_Band5_MPR_64QAM0_CA_Set0   0x0200
/*MT6177M*/ #define  LTE_Band5_MPR_64QAM1_CA_Set0   0x0300
/*MT6177M*/ #define  LTE_Band5_DELTA_TC0_CA_Set0    0x0000       
/*MT6177M*/ #define  LTE_Band5_DELTA_TC1_CA_Set0    0x0000       
/*MT6177M*/ #define  LTE_Band5_DELTA_TIB_CA_Set0    0x0000
/*MT6177M*/ #define  LTE_Band5_RES_HNDLR_CA_Set0    0x0000
/*MT6177M*/
/*MT6177M*/ //* ------------- MPR_BAND6 Start --------------------*/
/*MT6177M*/ #define  LTE_Band6_MPR_QPSK0_CA_Set0    0x0100
/*MT6177M*/ #define  LTE_Band6_MPR_QPSK1_CA_Set0    0x0200       
/*MT6177M*/ #define  LTE_Band6_MPR_16QAM0_CA_Set0   0x0100       
/*MT6177M*/ #define  LTE_Band6_MPR_16QAM1_CA_Set0   0x0200
/*MT6177M*/ #define  LTE_Band6_MPR_16QAM2_CA_Set0   0x0300
/*MT6177M*/ #define  LTE_Band6_MPR_64QAM0_CA_Set0   0x0200
/*MT6177M*/ #define  LTE_Band6_MPR_64QAM1_CA_Set0   0x0300
/*MT6177M*/ #define  LTE_Band6_DELTA_TC0_CA_Set0    0x0000       
/*MT6177M*/ #define  LTE_Band6_DELTA_TC1_CA_Set0    0x0000       
/*MT6177M*/ #define  LTE_Band6_DELTA_TIB_CA_Set0    0x0000
/*MT6177M*/ #define  LTE_Band6_RES_HNDLR_CA_Set0    0x0000
/*MT6177M*/
/*MT6177M*/ //* ------------- MPR_BAND7 Start --------------------*/
/*MT6177M*/ #define  LTE_Band7_MPR_QPSK0_CA_Set0    0x0100
/*MT6177M*/ #define  LTE_Band7_MPR_QPSK1_CA_Set0    0x0200       
/*MT6177M*/ #define  LTE_Band7_MPR_16QAM0_CA_Set0   0x0100       
/*MT6177M*/ #define  LTE_Band7_MPR_16QAM1_CA_Set0   0x0200
/*MT6177M*/ #define  LTE_Band7_MPR_16QAM2_CA_Set0   0x0300
/*MT6177M*/ #define  LTE_Band7_MPR_64QAM0_CA_Set0   0x0200
/*MT6177M*/ #define  LTE_Band7_MPR_64QAM1_CA_Set0   0x0300
/*MT6177M*/ #define  LTE_Band7_DELTA_TC0_CA_Set0    0x0000       
/*MT6177M*/ #define  LTE_Band7_DELTA_TC1_CA_Set0    0x0000       
/*MT6177M*/ #define  LTE_Band7_DELTA_TIB_CA_Set0    0x0000
/*MT6177M*/ #define  LTE_Band7_RES_HNDLR_CA_Set0    0x0000
/*MT6177M*/
/*MT6177M*/ //* ------------- MPR_BAND8 Start --------------------*/
/*MT6177M*/ #define  LTE_Band8_MPR_QPSK0_CA_Set0    0x0100
/*MT6177M*/ #define  LTE_Band8_MPR_QPSK1_CA_Set0    0x0200       
/*MT6177M*/ #define  LTE_Band8_MPR_16QAM0_CA_Set0   0x0100       
/*MT6177M*/ #define  LTE_Band8_MPR_16QAM1_CA_Set0   0x0200
/*MT6177M*/ #define  LTE_Band8_MPR_16QAM2_CA_Set0   0x0300
/*MT6177M*/ #define  LTE_Band8_MPR_64QAM0_CA_Set0   0x0200
/*MT6177M*/ #define  LTE_Band8_MPR_64QAM1_CA_Set0   0x0300
/*MT6177M*/ #define  LTE_Band8_DELTA_TC0_CA_Set0    0x0000       
/*MT6177M*/ #define  LTE_Band8_DELTA_TC1_CA_Set0    0x0000       
/*MT6177M*/ #define  LTE_Band8_DELTA_TIB_CA_Set0    0x0000
/*MT6177M*/ #define  LTE_Band8_RES_HNDLR_CA_Set0    0x0000
/*MT6177M*/
/*MT6177M*/ //* ------------- MPR_BAND9 Start --------------------*/
/*MT6177M*/ #define  LTE_Band9_MPR_QPSK0_CA_Set0    0x0100
/*MT6177M*/ #define  LTE_Band9_MPR_QPSK1_CA_Set0    0x0200       
/*MT6177M*/ #define  LTE_Band9_MPR_16QAM0_CA_Set0   0x0100       
/*MT6177M*/ #define  LTE_Band9_MPR_16QAM1_CA_Set0   0x0200
/*MT6177M*/ #define  LTE_Band9_MPR_16QAM2_CA_Set0   0x0300
/*MT6177M*/ #define  LTE_Band9_MPR_64QAM0_CA_Set0   0x0200
/*MT6177M*/ #define  LTE_Band9_MPR_64QAM1_CA_Set0   0x0300
/*MT6177M*/ #define  LTE_Band9_DELTA_TC0_CA_Set0    0x0000       
/*MT6177M*/ #define  LTE_Band9_DELTA_TC1_CA_Set0    0x0000       
/*MT6177M*/ #define  LTE_Band9_DELTA_TIB_CA_Set0    0x0000
/*MT6177M*/ #define  LTE_Band9_RES_HNDLR_CA_Set0    0x0000
/*MT6177M*/
/*MT6177M*/ //* ------------- MPR_BAND10 Start --------------------*/
/*MT6177M*/ #define  LTE_Band10_MPR_QPSK0_CA_Set0    0x0100
/*MT6177M*/ #define  LTE_Band10_MPR_QPSK1_CA_Set0    0x0200       
/*MT6177M*/ #define  LTE_Band10_MPR_16QAM0_CA_Set0   0x0100       
/*MT6177M*/ #define  LTE_Band10_MPR_16QAM1_CA_Set0   0x0200
/*MT6177M*/ #define  LTE_Band10_MPR_16QAM2_CA_Set0   0x0300
/*MT6177M*/ #define  LTE_Band10_MPR_64QAM0_CA_Set0   0x0200
/*MT6177M*/ #define  LTE_Band10_MPR_64QAM1_CA_Set0   0x0300
/*MT6177M*/ #define  LTE_Band10_DELTA_TC0_CA_Set0    0x0000       
/*MT6177M*/ #define  LTE_Band10_DELTA_TC1_CA_Set0    0x0000       
/*MT6177M*/ #define  LTE_Band10_DELTA_TIB_CA_Set0    0x0000
/*MT6177M*/ #define  LTE_Band10_RES_HNDLR_CA_Set0    0x0000
/*MT6177M*/
/*MT6177M*/ //* ------------- MPR_BAND11 Start --------------------*/
/*MT6177M*/ #define  LTE_Band11_MPR_QPSK0_CA_Set0    0x0100
/*MT6177M*/ #define  LTE_Band11_MPR_QPSK1_CA_Set0    0x0200       
/*MT6177M*/ #define  LTE_Band11_MPR_16QAM0_CA_Set0   0x0100       
/*MT6177M*/ #define  LTE_Band11_MPR_16QAM1_CA_Set0   0x0200
/*MT6177M*/ #define  LTE_Band11_MPR_16QAM2_CA_Set0   0x0300
/*MT6177M*/ #define  LTE_Band11_MPR_64QAM0_CA_Set0   0x0200
/*MT6177M*/ #define  LTE_Band11_MPR_64QAM1_CA_Set0   0x0300
/*MT6177M*/ #define  LTE_Band11_DELTA_TC0_CA_Set0    0x0000       
/*MT6177M*/ #define  LTE_Band11_DELTA_TC1_CA_Set0    0x0000       
/*MT6177M*/ #define  LTE_Band11_DELTA_TIB_CA_Set0    0x0000
/*MT6177M*/ #define  LTE_Band11_RES_HNDLR_CA_Set0    0x0000
/*MT6177M*/
/*MT6177M*/ //* ------------- MPR_BAND12 Start --------------------*/
/*MT6177M*/ #define  LTE_Band12_MPR_QPSK0_CA_Set0    0x0100
/*MT6177M*/ #define  LTE_Band12_MPR_QPSK1_CA_Set0    0x0200       
/*MT6177M*/ #define  LTE_Band12_MPR_16QAM0_CA_Set0   0x0100       
/*MT6177M*/ #define  LTE_Band12_MPR_16QAM1_CA_Set0   0x0200
/*MT6177M*/ #define  LTE_Band12_MPR_16QAM2_CA_Set0   0x0300
/*MT6177M*/ #define  LTE_Band12_MPR_64QAM0_CA_Set0   0x0200
/*MT6177M*/ #define  LTE_Band12_MPR_64QAM1_CA_Set0   0x0300
/*MT6177M*/ #define  LTE_Band12_DELTA_TC0_CA_Set0    0x0000       
/*MT6177M*/ #define  LTE_Band12_DELTA_TC1_CA_Set0    0x0000       
/*MT6177M*/ #define  LTE_Band12_DELTA_TIB_CA_Set0    0x0000
/*MT6177M*/ #define  LTE_Band12_RES_HNDLR_CA_Set0    0x0000
/*MT6177M*/
/*MT6177M*/ //* ------------- MPR_BAND13 Start --------------------*/
/*MT6177M*/ #define  LTE_Band13_MPR_QPSK0_CA_Set0    0x0100
/*MT6177M*/ #define  LTE_Band13_MPR_QPSK1_CA_Set0    0x0200       
/*MT6177M*/ #define  LTE_Band13_MPR_16QAM0_CA_Set0   0x0100       
/*MT6177M*/ #define  LTE_Band13_MPR_16QAM1_CA_Set0   0x0200
/*MT6177M*/ #define  LTE_Band13_MPR_16QAM2_CA_Set0   0x0300
/*MT6177M*/ #define  LTE_Band13_MPR_64QAM0_CA_Set0   0x0200
/*MT6177M*/ #define  LTE_Band13_MPR_64QAM1_CA_Set0   0x0300
/*MT6177M*/ #define  LTE_Band13_DELTA_TC0_CA_Set0    0x0000       
/*MT6177M*/ #define  LTE_Band13_DELTA_TC1_CA_Set0    0x0000       
/*MT6177M*/ #define  LTE_Band13_DELTA_TIB_CA_Set0    0x0000
/*MT6177M*/ #define  LTE_Band13_RES_HNDLR_CA_Set0    0x0000
/*MT6177M*/
/*MT6177M*/ //* ------------- MPR_BAND14 Start --------------------*/
/*MT6177M*/ #define  LTE_Band14_MPR_QPSK0_CA_Set0    0x0100
/*MT6177M*/ #define  LTE_Band14_MPR_QPSK1_CA_Set0    0x0200       
/*MT6177M*/ #define  LTE_Band14_MPR_16QAM0_CA_Set0   0x0100       
/*MT6177M*/ #define  LTE_Band14_MPR_16QAM1_CA_Set0   0x0200
/*MT6177M*/ #define  LTE_Band14_MPR_16QAM2_CA_Set0   0x0300
/*MT6177M*/ #define  LTE_Band14_MPR_64QAM0_CA_Set0   0x0200
/*MT6177M*/ #define  LTE_Band14_MPR_64QAM1_CA_Set0   0x0300
/*MT6177M*/ #define  LTE_Band14_DELTA_TC0_CA_Set0    0x0000       
/*MT6177M*/ #define  LTE_Band14_DELTA_TC1_CA_Set0    0x0000       
/*MT6177M*/ #define  LTE_Band14_DELTA_TIB_CA_Set0    0x0000
/*MT6177M*/ #define  LTE_Band14_RES_HNDLR_CA_Set0    0x0000
/*MT6177M*/
/*MT6177M*/ //* ------------- MPR_BAND17 Start --------------------*/
/*MT6177M*/ #define  LTE_Band17_MPR_QPSK0_CA_Set0    0x0100
/*MT6177M*/ #define  LTE_Band17_MPR_QPSK1_CA_Set0    0x0200       
/*MT6177M*/ #define  LTE_Band17_MPR_16QAM0_CA_Set0   0x0100       
/*MT6177M*/ #define  LTE_Band17_MPR_16QAM1_CA_Set0   0x0200
/*MT6177M*/ #define  LTE_Band17_MPR_16QAM2_CA_Set0   0x0300
/*MT6177M*/ #define  LTE_Band17_MPR_64QAM0_CA_Set0   0x0200
/*MT6177M*/ #define  LTE_Band17_MPR_64QAM1_CA_Set0   0x0300
/*MT6177M*/ #define  LTE_Band17_DELTA_TC0_CA_Set0    0x0000       
/*MT6177M*/ #define  LTE_Band17_DELTA_TC1_CA_Set0    0x0000       
/*MT6177M*/ #define  LTE_Band17_DELTA_TIB_CA_Set0    0x0000
/*MT6177M*/ #define  LTE_Band17_RES_HNDLR_CA_Set0    0x0000
/*MT6177M*/
/*MT6177M*/ //* ------------- MPR_BAND18 Start --------------------*/
/*MT6177M*/ #define  LTE_Band18_MPR_QPSK0_CA_Set0    0x0100
/*MT6177M*/ #define  LTE_Band18_MPR_QPSK1_CA_Set0    0x0200       
/*MT6177M*/ #define  LTE_Band18_MPR_16QAM0_CA_Set0   0x0100       
/*MT6177M*/ #define  LTE_Band18_MPR_16QAM1_CA_Set0   0x0200
/*MT6177M*/ #define  LTE_Band18_MPR_16QAM2_CA_Set0   0x0300
/*MT6177M*/ #define  LTE_Band18_MPR_64QAM0_CA_Set0   0x0200
/*MT6177M*/ #define  LTE_Band18_MPR_64QAM1_CA_Set0   0x0300
/*MT6177M*/ #define  LTE_Band18_DELTA_TC0_CA_Set0    0x0000       
/*MT6177M*/ #define  LTE_Band18_DELTA_TC1_CA_Set0    0x0000       
/*MT6177M*/ #define  LTE_Band18_DELTA_TIB_CA_Set0    0x0000
/*MT6177M*/ #define  LTE_Band18_RES_HNDLR_CA_Set0    0x0000
/*MT6177M*/
/*MT6177M*/ //* ------------- MPR_BAND19 Start --------------------*/
/*MT6177M*/ #define  LTE_Band19_MPR_QPSK0_CA_Set0    0x0100
/*MT6177M*/ #define  LTE_Band19_MPR_QPSK1_CA_Set0    0x0200       
/*MT6177M*/ #define  LTE_Band19_MPR_16QAM0_CA_Set0   0x0100       
/*MT6177M*/ #define  LTE_Band19_MPR_16QAM1_CA_Set0   0x0200
/*MT6177M*/ #define  LTE_Band19_MPR_16QAM2_CA_Set0   0x0300
/*MT6177M*/ #define  LTE_Band19_MPR_64QAM0_CA_Set0   0x0200
/*MT6177M*/ #define  LTE_Band19_MPR_64QAM1_CA_Set0   0x0300
/*MT6177M*/ #define  LTE_Band19_DELTA_TC0_CA_Set0    0x0000       
/*MT6177M*/ #define  LTE_Band19_DELTA_TC1_CA_Set0    0x0000       
/*MT6177M*/ #define  LTE_Band19_DELTA_TIB_CA_Set0    0x0000
/*MT6177M*/ #define  LTE_Band19_RES_HNDLR_CA_Set0    0x0000
/*MT6177M*/
/*MT6177M*/ //* ------------- MPR_BAND20 Start --------------------*/
/*MT6177M*/ #define  LTE_Band20_MPR_QPSK0_CA_Set0    0x0100
/*MT6177M*/ #define  LTE_Band20_MPR_QPSK1_CA_Set0    0x0200       
/*MT6177M*/ #define  LTE_Band20_MPR_16QAM0_CA_Set0   0x0100       
/*MT6177M*/ #define  LTE_Band20_MPR_16QAM1_CA_Set0   0x0200
/*MT6177M*/ #define  LTE_Band20_MPR_16QAM2_CA_Set0   0x0300
/*MT6177M*/ #define  LTE_Band20_MPR_64QAM0_CA_Set0   0x0200
/*MT6177M*/ #define  LTE_Band20_MPR_64QAM1_CA_Set0   0x0300
/*MT6177M*/ #define  LTE_Band20_DELTA_TC0_CA_Set0    0x0000       
/*MT6177M*/ #define  LTE_Band20_DELTA_TC1_CA_Set0    0x0000       
/*MT6177M*/ #define  LTE_Band20_DELTA_TIB_CA_Set0    0x0000
/*MT6177M*/ #define  LTE_Band20_RES_HNDLR_CA_Set0    0x0000
/*MT6177M*/
/*MT6177M*/ //* ------------- MPR_BAND21 Start --------------------*/
/*MT6177M*/ #define  LTE_Band21_MPR_QPSK0_CA_Set0    0x0100
/*MT6177M*/ #define  LTE_Band21_MPR_QPSK1_CA_Set0    0x0200       
/*MT6177M*/ #define  LTE_Band21_MPR_16QAM0_CA_Set0   0x0100       
/*MT6177M*/ #define  LTE_Band21_MPR_16QAM1_CA_Set0   0x0200
/*MT6177M*/ #define  LTE_Band21_MPR_16QAM2_CA_Set0   0x0300
/*MT6177M*/ #define  LTE_Band21_MPR_64QAM0_CA_Set0   0x0200
/*MT6177M*/ #define  LTE_Band21_MPR_64QAM1_CA_Set0   0x0300
/*MT6177M*/ #define  LTE_Band21_DELTA_TC0_CA_Set0    0x0000       
/*MT6177M*/ #define  LTE_Band21_DELTA_TC1_CA_Set0    0x0000       
/*MT6177M*/ #define  LTE_Band21_DELTA_TIB_CA_Set0    0x0000
/*MT6177M*/ #define  LTE_Band21_RES_HNDLR_CA_Set0    0x0000
/*MT6177M*/
/*MT6177M*/ //* ------------- MPR_BAND22 Start --------------------*/
/*MT6177M*/ #define  LTE_Band22_MPR_QPSK0_CA_Set0    0x0100
/*MT6177M*/ #define  LTE_Band22_MPR_QPSK1_CA_Set0    0x0200       
/*MT6177M*/ #define  LTE_Band22_MPR_16QAM0_CA_Set0   0x0100       
/*MT6177M*/ #define  LTE_Band22_MPR_16QAM1_CA_Set0   0x0200
/*MT6177M*/ #define  LTE_Band22_MPR_16QAM2_CA_Set0   0x0300
/*MT6177M*/ #define  LTE_Band22_MPR_64QAM0_CA_Set0   0x0200
/*MT6177M*/ #define  LTE_Band22_MPR_64QAM1_CA_Set0   0x0300
/*MT6177M*/ #define  LTE_Band22_DELTA_TC0_CA_Set0    0x0000       
/*MT6177M*/ #define  LTE_Band22_DELTA_TC1_CA_Set0    0x0000       
/*MT6177M*/ #define  LTE_Band22_DELTA_TIB_CA_Set0    0x0000
/*MT6177M*/ #define  LTE_Band22_RES_HNDLR_CA_Set0    0x0000
/*MT6177M*/
/*MT6177M*/ //* ------------- MPR_BAND23 Start --------------------*/
/*MT6177M*/ #define  LTE_Band23_MPR_QPSK0_CA_Set0    0x0100
/*MT6177M*/ #define  LTE_Band23_MPR_QPSK1_CA_Set0    0x0200       
/*MT6177M*/ #define  LTE_Band23_MPR_16QAM0_CA_Set0   0x0100       
/*MT6177M*/ #define  LTE_Band23_MPR_16QAM1_CA_Set0   0x0200
/*MT6177M*/ #define  LTE_Band23_MPR_16QAM2_CA_Set0   0x0300
/*MT6177M*/ #define  LTE_Band23_MPR_64QAM0_CA_Set0   0x0200
/*MT6177M*/ #define  LTE_Band23_MPR_64QAM1_CA_Set0   0x0300
/*MT6177M*/ #define  LTE_Band23_DELTA_TC0_CA_Set0    0x0000       
/*MT6177M*/ #define  LTE_Band23_DELTA_TC1_CA_Set0    0x0000       
/*MT6177M*/ #define  LTE_Band23_DELTA_TIB_CA_Set0    0x0000
/*MT6177M*/ #define  LTE_Band23_RES_HNDLR_CA_Set0    0x0000
/*MT6177M*/
/*MT6177M*/ //* ------------- MPR_BAND24 Start --------------------*/
/*MT6177M*/ #define  LTE_Band24_MPR_QPSK0_CA_Set0    0x0100
/*MT6177M*/ #define  LTE_Band24_MPR_QPSK1_CA_Set0    0x0200       
/*MT6177M*/ #define  LTE_Band24_MPR_16QAM0_CA_Set0   0x0100       
/*MT6177M*/ #define  LTE_Band24_MPR_16QAM1_CA_Set0   0x0200
/*MT6177M*/ #define  LTE_Band24_MPR_16QAM2_CA_Set0   0x0300
/*MT6177M*/ #define  LTE_Band24_MPR_64QAM0_CA_Set0   0x0200
/*MT6177M*/ #define  LTE_Band24_MPR_64QAM1_CA_Set0   0x0300
/*MT6177M*/ #define  LTE_Band24_DELTA_TC0_CA_Set0    0x0000       
/*MT6177M*/ #define  LTE_Band24_DELTA_TC1_CA_Set0    0x0000       
/*MT6177M*/ #define  LTE_Band24_DELTA_TIB_CA_Set0    0x0000
/*MT6177M*/ #define  LTE_Band24_RES_HNDLR_CA_Set0    0x0000
/*MT6177M*/
/*MT6177M*/ //* ------------- MPR_BAND25 Start --------------------*/
/*MT6177M*/ #define  LTE_Band25_MPR_QPSK0_CA_Set0    0x0100
/*MT6177M*/ #define  LTE_Band25_MPR_QPSK1_CA_Set0    0x0200       
/*MT6177M*/ #define  LTE_Band25_MPR_16QAM0_CA_Set0   0x0100       
/*MT6177M*/ #define  LTE_Band25_MPR_16QAM1_CA_Set0   0x0200
/*MT6177M*/ #define  LTE_Band25_MPR_16QAM2_CA_Set0   0x0300
/*MT6177M*/ #define  LTE_Band25_MPR_64QAM0_CA_Set0   0x0200
/*MT6177M*/ #define  LTE_Band25_MPR_64QAM1_CA_Set0   0x0300
/*MT6177M*/ #define  LTE_Band25_DELTA_TC0_CA_Set0    0x0000       
/*MT6177M*/ #define  LTE_Band25_DELTA_TC1_CA_Set0    0x0000       
/*MT6177M*/ #define  LTE_Band25_DELTA_TIB_CA_Set0    0x0000
/*MT6177M*/ #define  LTE_Band25_RES_HNDLR_CA_Set0    0x0000
/*MT6177M*/
/*MT6177M*/ //* ------------- MPR_BAND26 Start --------------------*/
/*MT6177M*/ #define  LTE_Band26_MPR_QPSK0_CA_Set0    0x0100
/*MT6177M*/ #define  LTE_Band26_MPR_QPSK1_CA_Set0    0x0200       
/*MT6177M*/ #define  LTE_Band26_MPR_16QAM0_CA_Set0   0x0100       
/*MT6177M*/ #define  LTE_Band26_MPR_16QAM1_CA_Set0   0x0200
/*MT6177M*/ #define  LTE_Band26_MPR_16QAM2_CA_Set0   0x0300
/*MT6177M*/ #define  LTE_Band26_MPR_64QAM0_CA_Set0   0x0200
/*MT6177M*/ #define  LTE_Band26_MPR_64QAM1_CA_Set0   0x0300
/*MT6177M*/ #define  LTE_Band26_DELTA_TC0_CA_Set0    0x0000       
/*MT6177M*/ #define  LTE_Band26_DELTA_TC1_CA_Set0    0x0000       
/*MT6177M*/ #define  LTE_Band26_DELTA_TIB_CA_Set0    0x0000
/*MT6177M*/ #define  LTE_Band26_RES_HNDLR_CA_Set0    0x0000
/*MT6177M*/
/*MT6177M*/ //* ------------- MPR_BAND27 Start --------------------*/
/*MT6177M*/ #define  LTE_Band27_MPR_QPSK0_CA_Set0    0x0100
/*MT6177M*/ #define  LTE_Band27_MPR_QPSK1_CA_Set0    0x0200       
/*MT6177M*/ #define  LTE_Band27_MPR_16QAM0_CA_Set0   0x0100       
/*MT6177M*/ #define  LTE_Band27_MPR_16QAM1_CA_Set0   0x0200
/*MT6177M*/ #define  LTE_Band27_MPR_16QAM2_CA_Set0   0x0300
/*MT6177M*/ #define  LTE_Band27_MPR_64QAM0_CA_Set0   0x0200
/*MT6177M*/ #define  LTE_Band27_MPR_64QAM1_CA_Set0   0x0300
/*MT6177M*/ #define  LTE_Band27_DELTA_TC0_CA_Set0    0x0000       
/*MT6177M*/ #define  LTE_Band27_DELTA_TC1_CA_Set0    0x0000       
/*MT6177M*/ #define  LTE_Band27_DELTA_TIB_CA_Set0    0x0000
/*MT6177M*/ #define  LTE_Band27_RES_HNDLR_CA_Set0    0x0000
/*MT6177M*/
/*MT6177M*/ //* ------------- MPR_BAND28 Start --------------------*/
/*MT6177M*/ #define  LTE_Band28_MPR_QPSK0_CA_Set0    0x0100
/*MT6177M*/ #define  LTE_Band28_MPR_QPSK1_CA_Set0    0x0200       
/*MT6177M*/ #define  LTE_Band28_MPR_16QAM0_CA_Set0   0x0100       
/*MT6177M*/ #define  LTE_Band28_MPR_16QAM1_CA_Set0   0x0200
/*MT6177M*/ #define  LTE_Band28_MPR_16QAM2_CA_Set0   0x0300
/*MT6177M*/ #define  LTE_Band28_MPR_64QAM0_CA_Set0   0x0200
/*MT6177M*/ #define  LTE_Band28_MPR_64QAM1_CA_Set0   0x0300
/*MT6177M*/ #define  LTE_Band28_DELTA_TC0_CA_Set0    0x0000       
/*MT6177M*/ #define  LTE_Band28_DELTA_TC1_CA_Set0    0x0000       
/*MT6177M*/ #define  LTE_Band28_DELTA_TIB_CA_Set0    0x0000
/*MT6177M*/ #define  LTE_Band28_RES_HNDLR_CA_Set0    0x0000
/*MT6177M*/
/*MT6177M*/ //* ------------- MPR_BAND29 Start --------------------*/
/*MT6177M*/ #define  LTE_Band29_MPR_QPSK0_CA_Set0    0x0100
/*MT6177M*/ #define  LTE_Band29_MPR_QPSK1_CA_Set0    0x0200       
/*MT6177M*/ #define  LTE_Band29_MPR_16QAM0_CA_Set0   0x0100       
/*MT6177M*/ #define  LTE_Band29_MPR_16QAM1_CA_Set0   0x0200
/*MT6177M*/ #define  LTE_Band29_MPR_16QAM2_CA_Set0   0x0300
/*MT6177M*/ #define  LTE_Band29_MPR_64QAM0_CA_Set0   0x0200
/*MT6177M*/ #define  LTE_Band29_MPR_64QAM1_CA_Set0   0x0300
/*MT6177M*/ #define  LTE_Band29_DELTA_TC0_CA_Set0    0x0000       
/*MT6177M*/ #define  LTE_Band29_DELTA_TC1_CA_Set0    0x0000       
/*MT6177M*/ #define  LTE_Band29_DELTA_TIB_CA_Set0    0x0000
/*MT6177M*/ #define  LTE_Band29_RES_HNDLR_CA_Set0    0x0000
/*MT6177M*/
/*MT6177M*/ //* ------------- MPR_BAND30 Start --------------------*/
/*MT6177M*/ #define  LTE_Band30_MPR_QPSK0_CA_Set0    0x0100
/*MT6177M*/ #define  LTE_Band30_MPR_QPSK1_CA_Set0    0x0200       
/*MT6177M*/ #define  LTE_Band30_MPR_16QAM0_CA_Set0   0x0100       
/*MT6177M*/ #define  LTE_Band30_MPR_16QAM1_CA_Set0   0x0200
/*MT6177M*/ #define  LTE_Band30_MPR_16QAM2_CA_Set0   0x0300
/*MT6177M*/ #define  LTE_Band30_MPR_64QAM0_CA_Set0   0x0200
/*MT6177M*/ #define  LTE_Band30_MPR_64QAM1_CA_Set0   0x0300
/*MT6177M*/ #define  LTE_Band30_DELTA_TC0_CA_Set0    0x0000       
/*MT6177M*/ #define  LTE_Band30_DELTA_TC1_CA_Set0    0x0000       
/*MT6177M*/ #define  LTE_Band30_DELTA_TIB_CA_Set0    0x0000
/*MT6177M*/ #define  LTE_Band30_RES_HNDLR_CA_Set0    0x0000
/*MT6177M*/
/*MT6177M*/ //* ------------- MPR_BAND31 Start --------------------*/
/*MT6177M*/ #define  LTE_Band31_MPR_QPSK0_CA_Set0    0x0100
/*MT6177M*/ #define  LTE_Band31_MPR_QPSK1_CA_Set0    0x0200       
/*MT6177M*/ #define  LTE_Band31_MPR_16QAM0_CA_Set0   0x0100       
/*MT6177M*/ #define  LTE_Band31_MPR_16QAM1_CA_Set0   0x0200
/*MT6177M*/ #define  LTE_Band31_MPR_16QAM2_CA_Set0   0x0300
/*MT6177M*/ #define  LTE_Band31_MPR_64QAM0_CA_Set0   0x0200
/*MT6177M*/ #define  LTE_Band31_MPR_64QAM1_CA_Set0   0x0300
/*MT6177M*/ #define  LTE_Band31_DELTA_TC0_CA_Set0    0x0000       
/*MT6177M*/ #define  LTE_Band31_DELTA_TC1_CA_Set0    0x0000       
/*MT6177M*/ #define  LTE_Band31_DELTA_TIB_CA_Set0    0x0000
/*MT6177M*/ #define  LTE_Band31_RES_HNDLR_CA_Set0    0x0000
/*MT6177M*/
/*MT6177M*/ //* ------------- MPR_BAND32 Start --------------------*/
/*MT6177M*/ #define  LTE_Band32_MPR_QPSK0_CA_Set0    0x0100
/*MT6177M*/ #define  LTE_Band32_MPR_QPSK1_CA_Set0    0x0200       
/*MT6177M*/ #define  LTE_Band32_MPR_16QAM0_CA_Set0   0x0100       
/*MT6177M*/ #define  LTE_Band32_MPR_16QAM1_CA_Set0   0x0200
/*MT6177M*/ #define  LTE_Band32_MPR_16QAM2_CA_Set0   0x0300
/*MT6177M*/ #define  LTE_Band32_MPR_64QAM0_CA_Set0   0x0200
/*MT6177M*/ #define  LTE_Band32_MPR_64QAM1_CA_Set0   0x0300
/*MT6177M*/ #define  LTE_Band32_DELTA_TC0_CA_Set0    0x0000       
/*MT6177M*/ #define  LTE_Band32_DELTA_TC1_CA_Set0    0x0000       
/*MT6177M*/ #define  LTE_Band32_DELTA_TIB_CA_Set0    0x0000
/*MT6177M*/ #define  LTE_Band32_RES_HNDLR_CA_Set0    0x0000
/*MT6177M*/
/*MT6177M*/ //* ------------- MPR_BAND33 Start --------------------*/
/*MT6177M*/ #define  LTE_Band33_MPR_QPSK0_CA_Set0    0x0100
/*MT6177M*/ #define  LTE_Band33_MPR_QPSK1_CA_Set0    0x0200       
/*MT6177M*/ #define  LTE_Band33_MPR_16QAM0_CA_Set0   0x0100       
/*MT6177M*/ #define  LTE_Band33_MPR_16QAM1_CA_Set0   0x0200
/*MT6177M*/ #define  LTE_Band33_MPR_16QAM2_CA_Set0   0x0300
/*MT6177M*/ #define  LTE_Band33_MPR_64QAM0_CA_Set0   0x0200
/*MT6177M*/ #define  LTE_Band33_MPR_64QAM1_CA_Set0   0x0300
/*MT6177M*/ #define  LTE_Band33_DELTA_TC0_CA_Set0    0x0000       
/*MT6177M*/ #define  LTE_Band33_DELTA_TC1_CA_Set0    0x0000       
/*MT6177M*/ #define  LTE_Band33_DELTA_TIB_CA_Set0    0x0000
/*MT6177M*/ #define  LTE_Band33_RES_HNDLR_CA_Set0    0x0000
/*MT6177M*/
/*MT6177M*/ //* ------------- MPR_BAND34 Start --------------------*/
/*MT6177M*/ #define  LTE_Band34_MPR_QPSK0_CA_Set0    0x0100
/*MT6177M*/ #define  LTE_Band34_MPR_QPSK1_CA_Set0    0x0200       
/*MT6177M*/ #define  LTE_Band34_MPR_16QAM0_CA_Set0   0x0100       
/*MT6177M*/ #define  LTE_Band34_MPR_16QAM1_CA_Set0   0x0200
/*MT6177M*/ #define  LTE_Band34_MPR_16QAM2_CA_Set0   0x0300
/*MT6177M*/ #define  LTE_Band34_MPR_64QAM0_CA_Set0   0x0200
/*MT6177M*/ #define  LTE_Band34_MPR_64QAM1_CA_Set0   0x0300
/*MT6177M*/ #define  LTE_Band34_DELTA_TC0_CA_Set0    0x0000       
/*MT6177M*/ #define  LTE_Band34_DELTA_TC1_CA_Set0    0x0000       
/*MT6177M*/ #define  LTE_Band34_DELTA_TIB_CA_Set0    0x0000
/*MT6177M*/ #define  LTE_Band34_RES_HNDLR_CA_Set0    0x0000
/*MT6177M*/
/*MT6177M*/ //* ------------- MPR_BAND35 Start --------------------*/
/*MT6177M*/ #define  LTE_Band35_MPR_QPSK0_CA_Set0    0x0100
/*MT6177M*/ #define  LTE_Band35_MPR_QPSK1_CA_Set0    0x0200       
/*MT6177M*/ #define  LTE_Band35_MPR_16QAM0_CA_Set0   0x0100       
/*MT6177M*/ #define  LTE_Band35_MPR_16QAM1_CA_Set0   0x0200
/*MT6177M*/ #define  LTE_Band35_MPR_16QAM2_CA_Set0   0x0300
/*MT6177M*/ #define  LTE_Band35_MPR_64QAM0_CA_Set0   0x0200
/*MT6177M*/ #define  LTE_Band35_MPR_64QAM1_CA_Set0   0x0300
/*MT6177M*/ #define  LTE_Band35_DELTA_TC0_CA_Set0    0x0000       
/*MT6177M*/ #define  LTE_Band35_DELTA_TC1_CA_Set0    0x0000       
/*MT6177M*/ #define  LTE_Band35_DELTA_TIB_CA_Set0    0x0000
/*MT6177M*/ #define  LTE_Band35_RES_HNDLR_CA_Set0    0x0000
/*MT6177M*/
/*MT6177M*/ //* ------------- MPR_BAND36 Start --------------------*/
/*MT6177M*/ #define  LTE_Band36_MPR_QPSK0_CA_Set0    0x0100
/*MT6177M*/ #define  LTE_Band36_MPR_QPSK1_CA_Set0    0x0200       
/*MT6177M*/ #define  LTE_Band36_MPR_16QAM0_CA_Set0   0x0100       
/*MT6177M*/ #define  LTE_Band36_MPR_16QAM1_CA_Set0   0x0200
/*MT6177M*/ #define  LTE_Band36_MPR_16QAM2_CA_Set0   0x0300
/*MT6177M*/ #define  LTE_Band36_MPR_64QAM0_CA_Set0   0x0200
/*MT6177M*/ #define  LTE_Band36_MPR_64QAM1_CA_Set0   0x0300
/*MT6177M*/ #define  LTE_Band36_DELTA_TC0_CA_Set0    0x0000       
/*MT6177M*/ #define  LTE_Band36_DELTA_TC1_CA_Set0    0x0000       
/*MT6177M*/ #define  LTE_Band36_DELTA_TIB_CA_Set0    0x0000
/*MT6177M*/ #define  LTE_Band36_RES_HNDLR_CA_Set0    0x0000
/*MT6177M*/
/*MT6177M*/ //* ------------- MPR_BAND37 Start --------------------*/
/*MT6177M*/ #define  LTE_Band37_MPR_QPSK0_CA_Set0    0x0100
/*MT6177M*/ #define  LTE_Band37_MPR_QPSK1_CA_Set0    0x0200       
/*MT6177M*/ #define  LTE_Band37_MPR_16QAM0_CA_Set0   0x0100       
/*MT6177M*/ #define  LTE_Band37_MPR_16QAM1_CA_Set0   0x0200
/*MT6177M*/ #define  LTE_Band37_MPR_16QAM2_CA_Set0   0x0300
/*MT6177M*/ #define  LTE_Band37_MPR_64QAM0_CA_Set0   0x0200
/*MT6177M*/ #define  LTE_Band37_MPR_64QAM1_CA_Set0   0x0300
/*MT6177M*/ #define  LTE_Band37_DELTA_TC0_CA_Set0    0x0000       
/*MT6177M*/ #define  LTE_Band37_DELTA_TC1_CA_Set0    0x0000       
/*MT6177M*/ #define  LTE_Band37_DELTA_TIB_CA_Set0    0x0000
/*MT6177M*/ #define  LTE_Band37_RES_HNDLR_CA_Set0    0x0000
/*MT6177M*/
/*MT6177M*/ //* ------------- MPR_BAND38 Start --------------------*/
/*MT6177M*/ #define  LTE_Band38_MPR_QPSK0_CA_Set0    0x0100
/*MT6177M*/ #define  LTE_Band38_MPR_QPSK1_CA_Set0    0x0200       
/*MT6177M*/ #define  LTE_Band38_MPR_16QAM0_CA_Set0   0x0100       
/*MT6177M*/ #define  LTE_Band38_MPR_16QAM1_CA_Set0   0x0200
/*MT6177M*/ #define  LTE_Band38_MPR_16QAM2_CA_Set0   0x0300
/*MT6177M*/ #define  LTE_Band38_MPR_64QAM0_CA_Set0   0x0200
/*MT6177M*/ #define  LTE_Band38_MPR_64QAM1_CA_Set0   0x0300
/*MT6177M*/ #define  LTE_Band38_DELTA_TC0_CA_Set0    0x0000       
/*MT6177M*/ #define  LTE_Band38_DELTA_TC1_CA_Set0    0x0000       
/*MT6177M*/ #define  LTE_Band38_DELTA_TIB_CA_Set0    0x0000
/*MT6177M*/ #define  LTE_Band38_RES_HNDLR_CA_Set0    0x0000
/*MT6177M*/
/*MT6177M*/ //* ------------- MPR_BAND39 Start --------------------*/
/*MT6177M*/ #define  LTE_Band39_MPR_QPSK0_CA_Set0    0x0100
/*MT6177M*/ #define  LTE_Band39_MPR_QPSK1_CA_Set0    0x0200       
/*MT6177M*/ #define  LTE_Band39_MPR_16QAM0_CA_Set0   0x0100       
/*MT6177M*/ #define  LTE_Band39_MPR_16QAM1_CA_Set0   0x0200
/*MT6177M*/ #define  LTE_Band39_MPR_16QAM2_CA_Set0   0x0300
/*MT6177M*/ #define  LTE_Band39_MPR_64QAM0_CA_Set0   0x0200
/*MT6177M*/ #define  LTE_Band39_MPR_64QAM1_CA_Set0   0x0300
/*MT6177M*/ #define  LTE_Band39_DELTA_TC0_CA_Set0    0x0000       
/*MT6177M*/ #define  LTE_Band39_DELTA_TC1_CA_Set0    0x0000       
/*MT6177M*/ #define  LTE_Band39_DELTA_TIB_CA_Set0    0x0000
/*MT6177M*/ #define  LTE_Band39_RES_HNDLR_CA_Set0    0x0000
/*MT6177M*/
/*MT6177M*/ //* ------------- MPR_BAND40 Start --------------------*/
/*MT6177M*/ #define  LTE_Band40_MPR_QPSK0_CA_Set0    0x0100
/*MT6177M*/ #define  LTE_Band40_MPR_QPSK1_CA_Set0    0x0200       
/*MT6177M*/ #define  LTE_Band40_MPR_16QAM0_CA_Set0   0x0100       
/*MT6177M*/ #define  LTE_Band40_MPR_16QAM1_CA_Set0   0x0200
/*MT6177M*/ #define  LTE_Band40_MPR_16QAM2_CA_Set0   0x0300
/*MT6177M*/ #define  LTE_Band40_MPR_64QAM0_CA_Set0   0x0200
/*MT6177M*/ #define  LTE_Band40_MPR_64QAM1_CA_Set0   0x0300
/*MT6177M*/ #define  LTE_Band40_DELTA_TC0_CA_Set0    0x0000       
/*MT6177M*/ #define  LTE_Band40_DELTA_TC1_CA_Set0    0x0000       
/*MT6177M*/ #define  LTE_Band40_DELTA_TIB_CA_Set0    0x0000
/*MT6177M*/ #define  LTE_Band40_RES_HNDLR_CA_Set0    0x0000
/*MT6177M*/
/*MT6177M*/ //* ------------- MPR_BAND41 Start --------------------*/
/*MT6177M*/ #define  LTE_Band41_MPR_QPSK0_CA_Set0    0x0100
/*MT6177M*/ #define  LTE_Band41_MPR_QPSK1_CA_Set0    0x0200       
/*MT6177M*/ #define  LTE_Band41_MPR_16QAM0_CA_Set0   0x0100       
/*MT6177M*/ #define  LTE_Band41_MPR_16QAM1_CA_Set0   0x0200
/*MT6177M*/ #define  LTE_Band41_MPR_16QAM2_CA_Set0   0x0300
/*MT6177M*/ #define  LTE_Band41_MPR_64QAM0_CA_Set0   0x0200
/*MT6177M*/ #define  LTE_Band41_MPR_64QAM1_CA_Set0   0x0300
/*MT6177M*/ #define  LTE_Band41_DELTA_TC0_CA_Set0    0x0000       
/*MT6177M*/ #define  LTE_Band41_DELTA_TC1_CA_Set0    0x0000       
/*MT6177M*/ #define  LTE_Band41_DELTA_TIB_CA_Set0    0x0000
/*MT6177M*/ #define  LTE_Band41_RES_HNDLR_CA_Set0    0x0000
/*MT6177M*/
/*MT6177M*/ //* ------------- MPR_BAND42 Start --------------------*/
/*MT6177M*/ #define  LTE_Band42_MPR_QPSK0_CA_Set0    0x0100
/*MT6177M*/ #define  LTE_Band42_MPR_QPSK1_CA_Set0    0x0200       
/*MT6177M*/ #define  LTE_Band42_MPR_16QAM0_CA_Set0   0x0100       
/*MT6177M*/ #define  LTE_Band42_MPR_16QAM1_CA_Set0   0x0200
/*MT6177M*/ #define  LTE_Band42_MPR_16QAM2_CA_Set0   0x0300
/*MT6177M*/ #define  LTE_Band42_MPR_64QAM0_CA_Set0   0x0200
/*MT6177M*/ #define  LTE_Band42_MPR_64QAM1_CA_Set0   0x0300
/*MT6177M*/ #define  LTE_Band42_DELTA_TC0_CA_Set0    0x0000       
/*MT6177M*/ #define  LTE_Band42_DELTA_TC1_CA_Set0    0x0000       
/*MT6177M*/ #define  LTE_Band42_DELTA_TIB_CA_Set0    0x0000
/*MT6177M*/ #define  LTE_Band42_RES_HNDLR_CA_Set0    0x0000
/*MT6177M*/
/*MT6177M*/ //* ------------- MPR_BAND43 Start --------------------*/
/*MT6177M*/ #define  LTE_Band43_MPR_QPSK0_CA_Set0    0x0100
/*MT6177M*/ #define  LTE_Band43_MPR_QPSK1_CA_Set0    0x0200       
/*MT6177M*/ #define  LTE_Band43_MPR_16QAM0_CA_Set0   0x0100       
/*MT6177M*/ #define  LTE_Band43_MPR_16QAM1_CA_Set0   0x0200
/*MT6177M*/ #define  LTE_Band43_MPR_16QAM2_CA_Set0   0x0300
/*MT6177M*/ #define  LTE_Band43_MPR_64QAM0_CA_Set0   0x0200
/*MT6177M*/ #define  LTE_Band43_MPR_64QAM1_CA_Set0   0x0300
/*MT6177M*/ #define  LTE_Band43_DELTA_TC0_CA_Set0    0x0000       
/*MT6177M*/ #define  LTE_Band43_DELTA_TC1_CA_Set0    0x0000       
/*MT6177M*/ #define  LTE_Band43_DELTA_TIB_CA_Set0    0x0000
/*MT6177M*/ #define  LTE_Band43_RES_HNDLR_CA_Set0    0x0000
/*MT6177M*/
/*MT6177M*/ //* ------------- MPR_BAND44 Start --------------------*/
/*MT6177M*/ #define  LTE_Band44_MPR_QPSK0_CA_Set0    0x0100
/*MT6177M*/ #define  LTE_Band44_MPR_QPSK1_CA_Set0    0x0200       
/*MT6177M*/ #define  LTE_Band44_MPR_16QAM0_CA_Set0   0x0100       
/*MT6177M*/ #define  LTE_Band44_MPR_16QAM1_CA_Set0   0x0200
/*MT6177M*/ #define  LTE_Band44_MPR_16QAM2_CA_Set0   0x0300
/*MT6177M*/ #define  LTE_Band44_MPR_64QAM0_CA_Set0   0x0200
/*MT6177M*/ #define  LTE_Band44_MPR_64QAM1_CA_Set0   0x0300
/*MT6177M*/ #define  LTE_Band44_DELTA_TC0_CA_Set0    0x0000       
/*MT6177M*/ #define  LTE_Band44_DELTA_TC1_CA_Set0    0x0000       
/*MT6177M*/ #define  LTE_Band44_DELTA_TIB_CA_Set0    0x0000
/*MT6177M*/ #define  LTE_Band44_RES_HNDLR_CA_Set0    0x0000
/*MT6177M*/
/*MT6177M*/ //* ------------- MPR_BAND45 Start --------------------*/
/*MT6177M*/ #define  LTE_Band45_MPR_QPSK0_CA_Set0    0x0100
/*MT6177M*/ #define  LTE_Band45_MPR_QPSK1_CA_Set0    0x0200       
/*MT6177M*/ #define  LTE_Band45_MPR_16QAM0_CA_Set0   0x0100       
/*MT6177M*/ #define  LTE_Band45_MPR_16QAM1_CA_Set0   0x0200
/*MT6177M*/ #define  LTE_Band45_MPR_16QAM2_CA_Set0   0x0300
/*MT6177M*/ #define  LTE_Band45_MPR_64QAM0_CA_Set0   0x0200
/*MT6177M*/ #define  LTE_Band45_MPR_64QAM1_CA_Set0   0x0300
/*MT6177M*/ #define  LTE_Band45_DELTA_TC0_CA_Set0    0x0000       
/*MT6177M*/ #define  LTE_Band45_DELTA_TC1_CA_Set0    0x0000       
/*MT6177M*/ #define  LTE_Band45_DELTA_TIB_CA_Set0    0x0000
/*MT6177M*/ #define  LTE_Band45_RES_HNDLR_CA_Set0    0x0000
/*MT6177M*/
/*MT6177M*/ //* ------------- MPR_BAND46 Start --------------------*/
/*MT6177M*/ #define  LTE_Band46_MPR_QPSK0_CA_Set0    0x0100
/*MT6177M*/ #define  LTE_Band46_MPR_QPSK1_CA_Set0    0x0200       
/*MT6177M*/ #define  LTE_Band46_MPR_16QAM0_CA_Set0   0x0100       
/*MT6177M*/ #define  LTE_Band46_MPR_16QAM1_CA_Set0   0x0200
/*MT6177M*/ #define  LTE_Band46_MPR_16QAM2_CA_Set0   0x0300
/*MT6177M*/ #define  LTE_Band46_MPR_64QAM0_CA_Set0   0x0200
/*MT6177M*/ #define  LTE_Band46_MPR_64QAM1_CA_Set0   0x0300
/*MT6177M*/ #define  LTE_Band46_DELTA_TC0_CA_Set0    0x0000       
/*MT6177M*/ #define  LTE_Band46_DELTA_TC1_CA_Set0    0x0000       
/*MT6177M*/ #define  LTE_Band46_DELTA_TIB_CA_Set0    0x0000
/*MT6177M*/ #define  LTE_Band46_RES_HNDLR_CA_Set0    0x0000
/*MT6177M*/
/*MT6177M*/ //* ------------- MPR_BAND65 Start --------------------*/
/*MT6177M*/ #define  LTE_Band65_MPR_QPSK0_CA_Set0    0x0100
/*MT6177M*/ #define  LTE_Band65_MPR_QPSK1_CA_Set0    0x0200       
/*MT6177M*/ #define  LTE_Band65_MPR_16QAM0_CA_Set0   0x0100       
/*MT6177M*/ #define  LTE_Band65_MPR_16QAM1_CA_Set0   0x0200
/*MT6177M*/ #define  LTE_Band65_MPR_16QAM2_CA_Set0   0x0300
/*MT6177M*/ #define  LTE_Band65_MPR_64QAM0_CA_Set0   0x0200
/*MT6177M*/ #define  LTE_Band65_MPR_64QAM1_CA_Set0   0x0300
/*MT6177M*/ #define  LTE_Band65_DELTA_TC0_CA_Set0    0x0000       
/*MT6177M*/ #define  LTE_Band65_DELTA_TC1_CA_Set0    0x0000       
/*MT6177M*/ #define  LTE_Band65_DELTA_TIB_CA_Set0    0x0000
/*MT6177M*/ #define  LTE_Band65_RES_HNDLR_CA_Set0    0x0000
/*MT6177M*/
/*MT6177M*/ //* ------------- MPR_BAND66 Start --------------------*/
/*MT6177M*/ #define  LTE_Band66_MPR_QPSK0_CA_Set0    0x0100
/*MT6177M*/ #define  LTE_Band66_MPR_QPSK1_CA_Set0    0x0200       
/*MT6177M*/ #define  LTE_Band66_MPR_16QAM0_CA_Set0   0x0100       
/*MT6177M*/ #define  LTE_Band66_MPR_16QAM1_CA_Set0   0x0200
/*MT6177M*/ #define  LTE_Band66_MPR_16QAM2_CA_Set0   0x0300
/*MT6177M*/ #define  LTE_Band66_MPR_64QAM0_CA_Set0   0x0200
/*MT6177M*/ #define  LTE_Band66_MPR_64QAM1_CA_Set0   0x0300
/*MT6177M*/ #define  LTE_Band66_DELTA_TC0_CA_Set0    0x0000       
/*MT6177M*/ #define  LTE_Band66_DELTA_TC1_CA_Set0    0x0000       
/*MT6177M*/ #define  LTE_Band66_DELTA_TIB_CA_Set0    0x0000
/*MT6177M*/ #define  LTE_Band66_RES_HNDLR_CA_Set0    0x0000
/*MT6177M*/
/*MT6177M*/ //* ------------- MPR_BAND68 Start --------------------*/
/*MT6177M*/ #define  LTE_Band68_MPR_QPSK0_CA_Set0    0x0100
/*MT6177M*/ #define  LTE_Band68_MPR_QPSK1_CA_Set0    0x0200       
/*MT6177M*/ #define  LTE_Band68_MPR_16QAM0_CA_Set0   0x0100       
/*MT6177M*/ #define  LTE_Band68_MPR_16QAM1_CA_Set0   0x0200
/*MT6177M*/ #define  LTE_Band68_MPR_16QAM2_CA_Set0   0x0300
/*MT6177M*/ #define  LTE_Band68_MPR_64QAM0_CA_Set0   0x0200
/*MT6177M*/ #define  LTE_Band68_MPR_64QAM1_CA_Set0   0x0300
/*MT6177M*/ #define  LTE_Band68_DELTA_TC0_CA_Set0    0x0000       
/*MT6177M*/ #define  LTE_Band68_DELTA_TC1_CA_Set0    0x0000       
/*MT6177M*/ #define  LTE_Band68_DELTA_TIB_CA_Set0    0x0000
/*MT6177M*/ #define  LTE_Band68_RES_HNDLR_CA_Set0    0x0000
/*MT6177M*/
/*MT6177M*/ //* ------------- MPR_BAND71 Start --------------------*/
/*MT6177M*/ #define  LTE_Band71_MPR_QPSK0_CA_Set0    0x0100
/*MT6177M*/ #define  LTE_Band71_MPR_QPSK1_CA_Set0    0x0200       
/*MT6177M*/ #define  LTE_Band71_MPR_16QAM0_CA_Set0   0x0100       
/*MT6177M*/ #define  LTE_Band71_MPR_16QAM1_CA_Set0   0x0200
/*MT6177M*/ #define  LTE_Band71_MPR_16QAM2_CA_Set0   0x0300
/*MT6177M*/ #define  LTE_Band71_MPR_64QAM0_CA_Set0   0x0200
/*MT6177M*/ #define  LTE_Band71_MPR_64QAM1_CA_Set0   0x0300
/*MT6177M*/ #define  LTE_Band71_DELTA_TC0_CA_Set0    0x0000       
/*MT6177M*/ #define  LTE_Band71_DELTA_TC1_CA_Set0    0x0000       
/*MT6177M*/ #define  LTE_Band71_DELTA_TIB_CA_Set0    0x0000
/*MT6177M*/ #define  LTE_Band71_RES_HNDLR_CA_Set0    0x0000
/*MT6177M*/
/*MT6177M*/ //* ------------- MPR_BAND252 Start --------------------*/
/*MT6177M*/ #define  LTE_Band252_MPR_QPSK0_CA_Set0    0x0100
/*MT6177M*/ #define  LTE_Band252_MPR_QPSK1_CA_Set0    0x0200       
/*MT6177M*/ #define  LTE_Band252_MPR_16QAM0_CA_Set0   0x0100       
/*MT6177M*/ #define  LTE_Band252_MPR_16QAM1_CA_Set0   0x0200
/*MT6177M*/ #define  LTE_Band252_MPR_16QAM2_CA_Set0   0x0300
/*MT6177M*/ #define  LTE_Band252_MPR_64QAM0_CA_Set0   0x0200
/*MT6177M*/ #define  LTE_Band252_MPR_64QAM1_CA_Set0   0x0300
/*MT6177M*/ #define  LTE_Band252_DELTA_TC0_CA_Set0    0x0000       
/*MT6177M*/ #define  LTE_Band252_DELTA_TC1_CA_Set0    0x0000       
/*MT6177M*/ #define  LTE_Band252_DELTA_TIB_CA_Set0    0x0000
/*MT6177M*/ #define  LTE_Band252_RES_HNDLR_CA_Set0    0x0000
/*MT6177M*/
/*MT6177M*/ //* ------------- MPR_BAND255 Start --------------------*/
/*MT6177M*/ #define  LTE_Band255_MPR_QPSK0_CA_Set0    0x0100
/*MT6177M*/ #define  LTE_Band255_MPR_QPSK1_CA_Set0    0x0200       
/*MT6177M*/ #define  LTE_Band255_MPR_16QAM0_CA_Set0   0x0100       
/*MT6177M*/ #define  LTE_Band255_MPR_16QAM1_CA_Set0   0x0200
/*MT6177M*/ #define  LTE_Band255_MPR_16QAM2_CA_Set0   0x0300
/*MT6177M*/ #define  LTE_Band255_MPR_64QAM0_CA_Set0   0x0200
/*MT6177M*/ #define  LTE_Band255_MPR_64QAM1_CA_Set0   0x0300
/*MT6177M*/ #define  LTE_Band255_DELTA_TC0_CA_Set0    0x0000       
/*MT6177M*/ #define  LTE_Band255_DELTA_TC1_CA_Set0    0x0000       
/*MT6177M*/ #define  LTE_Band255_DELTA_TIB_CA_Set0    0x0000
/*MT6177M*/ #define  LTE_Band255_RES_HNDLR_CA_Set0    0x0000
/*MT6177M*/
/*MT6177M*/ //* ------------- MPR_BANDNone Start --------------------*/
/*MT6177M*/ #define  LTE_BandNone_MPR_QPSK0_CA_Set0   0x0000
/*MT6177M*/ #define  LTE_BandNone_MPR_QPSK1_CA_Set0   0x0000       
/*MT6177M*/ #define  LTE_BandNone_MPR_16QAM0_CA_Set0  0x0000       
/*MT6177M*/ #define  LTE_BandNone_MPR_16QAM1_CA_Set0  0x0000
/*MT6177M*/ #define  LTE_BandNone_MPR_16QAM2_CA_Set0  0x0000
/*MT6177M*/ #define  LTE_BandNone_MPR_64QAM0_CA_Set0  0x0000
/*MT6177M*/ #define  LTE_BandNone_MPR_64QAM1_CA_Set0  0x0000
/*MT6177M*/ #define  LTE_BandNone_DELTA_TC0_CA_Set0   0x0000       
/*MT6177M*/ #define  LTE_BandNone_DELTA_TC1_CA_Set0   0x0000       
/*MT6177M*/ #define  LTE_BandNone_DELTA_TIB_CA_Set0   0x0000
/*MT6177M*/ #define  LTE_BandNone_RES_HNDLR_CA_Set0    0x0000
/*MT6177M*/ /*-------------------------------------------------------------------*/
/*MT6177M*/ /*  MPR value for each ULCA HPUE band setting: 36.101 6.2.3A 6.2.5A with S(8.8)  */
/*MT6177M*/ /*  MPR value for each band setting: 36.101 Table 6.2.3A-1            */
/*MT6177M*/ /*  (No DRDI)                                                        */
/*MT6177M*/ /*-------------------------------------------------------------------*/
/*MT6177M*/ //* ------------- MPR_BAND1 Start --------------------*/
/*MT6177M*/ #define  LTE_Band1_MPR_QPSK0_HPUE_CA_Set0    0x0100
/*MT6177M*/ #define  LTE_Band1_MPR_QPSK1_HPUE_CA_Set0    0x0200       
/*MT6177M*/ #define  LTE_Band1_MPR_16QAM0_HPUE_CA_Set0   0x0180
/*MT6177M*/ #define  LTE_Band1_MPR_16QAM1_HPUE_CA_Set0   0x0200
/*MT6177M*/ #define  LTE_Band1_MPR_16QAM2_HPUE_CA_Set0   0x0300
/*MT6177M*/ #define  LTE_Band1_MPR_64QAM0_HPUE_CA_Set0   0x0200
/*MT6177M*/ #define  LTE_Band1_MPR_64QAM1_HPUE_CA_Set0   0x0300
/*MT6177M*/ #define  LTE_Band1_DELTA_TC0_HPUE_CA_Set0    0x0000       
/*MT6177M*/ #define  LTE_Band1_DELTA_TC1_HPUE_CA_Set0    0x0000       
/*MT6177M*/ #define  LTE_Band1_DELTA_TIB_HPUE_CA_Set0    0x0000
/*MT6177M*/ #define  LTE_Band1_RES_HNDLR_HPUE_CA_Set0    0x0000
/*MT6177M*/
/*MT6177M*/ //* ------------- MPR_BAND2 Start --------------------*/
/*MT6177M*/ #define  LTE_Band2_MPR_QPSK0_HPUE_CA_Set0    0x0100
/*MT6177M*/ #define  LTE_Band2_MPR_QPSK1_HPUE_CA_Set0    0x0200       
/*MT6177M*/ #define  LTE_Band2_MPR_16QAM0_HPUE_CA_Set0   0x0180
/*MT6177M*/ #define  LTE_Band2_MPR_16QAM1_HPUE_CA_Set0   0x0200
/*MT6177M*/ #define  LTE_Band2_MPR_16QAM2_HPUE_CA_Set0   0x0300
/*MT6177M*/ #define  LTE_Band2_MPR_64QAM0_HPUE_CA_Set0   0x0200
/*MT6177M*/ #define  LTE_Band2_MPR_64QAM1_HPUE_CA_Set0   0x0300
/*MT6177M*/ #define  LTE_Band2_DELTA_TC0_HPUE_CA_Set0    0x0000       
/*MT6177M*/ #define  LTE_Band2_DELTA_TC1_HPUE_CA_Set0    0x0000       
/*MT6177M*/ #define  LTE_Band2_DELTA_TIB_HPUE_CA_Set0    0x0000
/*MT6177M*/ #define  LTE_Band2_RES_HNDLR_HPUE_CA_Set0    0x0000
/*MT6177M*/
/*MT6177M*/ //* ------------- MPR_BAND3 Start --------------------*/
/*MT6177M*/ #define  LTE_Band3_MPR_QPSK0_HPUE_CA_Set0    0x0100
/*MT6177M*/ #define  LTE_Band3_MPR_QPSK1_HPUE_CA_Set0    0x0200       
/*MT6177M*/ #define  LTE_Band3_MPR_16QAM0_HPUE_CA_Set0   0x0180
/*MT6177M*/ #define  LTE_Band3_MPR_16QAM1_HPUE_CA_Set0   0x0200
/*MT6177M*/ #define  LTE_Band3_MPR_16QAM2_HPUE_CA_Set0   0x0300
/*MT6177M*/ #define  LTE_Band3_MPR_64QAM0_HPUE_CA_Set0   0x0200
/*MT6177M*/ #define  LTE_Band3_MPR_64QAM1_HPUE_CA_Set0   0x0300
/*MT6177M*/ #define  LTE_Band3_DELTA_TC0_HPUE_CA_Set0    0x0000       
/*MT6177M*/ #define  LTE_Band3_DELTA_TC1_HPUE_CA_Set0    0x0000       
/*MT6177M*/ #define  LTE_Band3_DELTA_TIB_HPUE_CA_Set0    0x0000
/*MT6177M*/ #define  LTE_Band3_RES_HNDLR_HPUE_CA_Set0    0x0000
/*MT6177M*/
/*MT6177M*/ //* ------------- MPR_BAND4 Start --------------------*/
/*MT6177M*/ #define  LTE_Band4_MPR_QPSK0_HPUE_CA_Set0    0x0100
/*MT6177M*/ #define  LTE_Band4_MPR_QPSK1_HPUE_CA_Set0    0x0200       
/*MT6177M*/ #define  LTE_Band4_MPR_16QAM0_HPUE_CA_Set0   0x0180
/*MT6177M*/ #define  LTE_Band4_MPR_16QAM1_HPUE_CA_Set0   0x0200
/*MT6177M*/ #define  LTE_Band4_MPR_16QAM2_HPUE_CA_Set0   0x0300
/*MT6177M*/ #define  LTE_Band4_MPR_64QAM0_HPUE_CA_Set0   0x0200
/*MT6177M*/ #define  LTE_Band4_MPR_64QAM1_HPUE_CA_Set0   0x0300
/*MT6177M*/ #define  LTE_Band4_DELTA_TC0_HPUE_CA_Set0    0x0000       
/*MT6177M*/ #define  LTE_Band4_DELTA_TC1_HPUE_CA_Set0    0x0000       
/*MT6177M*/ #define  LTE_Band4_DELTA_TIB_HPUE_CA_Set0    0x0000
/*MT6177M*/ #define  LTE_Band4_RES_HNDLR_HPUE_CA_Set0    0x0000
/*MT6177M*/
/*MT6177M*/ //* ------------- MPR_BAND5 Start --------------------*/
/*MT6177M*/ #define  LTE_Band5_MPR_QPSK0_HPUE_CA_Set0    0x0100
/*MT6177M*/ #define  LTE_Band5_MPR_QPSK1_HPUE_CA_Set0    0x0200       
/*MT6177M*/ #define  LTE_Band5_MPR_16QAM0_HPUE_CA_Set0   0x0180
/*MT6177M*/ #define  LTE_Band5_MPR_16QAM1_HPUE_CA_Set0   0x0200
/*MT6177M*/ #define  LTE_Band5_MPR_16QAM2_HPUE_CA_Set0   0x0300
/*MT6177M*/ #define  LTE_Band5_MPR_64QAM0_HPUE_CA_Set0   0x0200
/*MT6177M*/ #define  LTE_Band5_MPR_64QAM1_HPUE_CA_Set0   0x0300
/*MT6177M*/ #define  LTE_Band5_DELTA_TC0_HPUE_CA_Set0    0x0000       
/*MT6177M*/ #define  LTE_Band5_DELTA_TC1_HPUE_CA_Set0    0x0000       
/*MT6177M*/ #define  LTE_Band5_DELTA_TIB_HPUE_CA_Set0    0x0000
/*MT6177M*/ #define  LTE_Band5_RES_HNDLR_HPUE_CA_Set0    0x0000
/*MT6177M*/
/*MT6177M*/ //* ------------- MPR_BAND6 Start --------------------*/
/*MT6177M*/ #define  LTE_Band6_MPR_QPSK0_HPUE_CA_Set0    0x0100
/*MT6177M*/ #define  LTE_Band6_MPR_QPSK1_HPUE_CA_Set0    0x0200       
/*MT6177M*/ #define  LTE_Band6_MPR_16QAM0_HPUE_CA_Set0   0x0180
/*MT6177M*/ #define  LTE_Band6_MPR_16QAM1_HPUE_CA_Set0   0x0200
/*MT6177M*/ #define  LTE_Band6_MPR_16QAM2_HPUE_CA_Set0   0x0300
/*MT6177M*/ #define  LTE_Band6_MPR_64QAM0_HPUE_CA_Set0   0x0200
/*MT6177M*/ #define  LTE_Band6_MPR_64QAM1_HPUE_CA_Set0   0x0300
/*MT6177M*/ #define  LTE_Band6_DELTA_TC0_HPUE_CA_Set0    0x0000       
/*MT6177M*/ #define  LTE_Band6_DELTA_TC1_HPUE_CA_Set0    0x0000       
/*MT6177M*/ #define  LTE_Band6_DELTA_TIB_HPUE_CA_Set0    0x0000
/*MT6177M*/ #define  LTE_Band6_RES_HNDLR_HPUE_CA_Set0    0x0000
/*MT6177M*/
/*MT6177M*/ //* ------------- MPR_BAND7 Start --------------------*/
/*MT6177M*/ #define  LTE_Band7_MPR_QPSK0_HPUE_CA_Set0    0x0100
/*MT6177M*/ #define  LTE_Band7_MPR_QPSK1_HPUE_CA_Set0    0x0200       
/*MT6177M*/ #define  LTE_Band7_MPR_16QAM0_HPUE_CA_Set0   0x0180
/*MT6177M*/ #define  LTE_Band7_MPR_16QAM1_HPUE_CA_Set0   0x0200
/*MT6177M*/ #define  LTE_Band7_MPR_16QAM2_HPUE_CA_Set0   0x0300
/*MT6177M*/ #define  LTE_Band7_MPR_64QAM0_HPUE_CA_Set0   0x0200
/*MT6177M*/ #define  LTE_Band7_MPR_64QAM1_HPUE_CA_Set0   0x0300
/*MT6177M*/ #define  LTE_Band7_DELTA_TC0_HPUE_CA_Set0    0x0000       
/*MT6177M*/ #define  LTE_Band7_DELTA_TC1_HPUE_CA_Set0    0x0000       
/*MT6177M*/ #define  LTE_Band7_DELTA_TIB_HPUE_CA_Set0    0x0000
/*MT6177M*/ #define  LTE_Band7_RES_HNDLR_HPUE_CA_Set0    0x0000
/*MT6177M*/
/*MT6177M*/ //* ------------- MPR_BAND8 Start --------------------*/
/*MT6177M*/ #define  LTE_Band8_MPR_QPSK0_HPUE_CA_Set0    0x0100
/*MT6177M*/ #define  LTE_Band8_MPR_QPSK1_HPUE_CA_Set0    0x0200       
/*MT6177M*/ #define  LTE_Band8_MPR_16QAM0_HPUE_CA_Set0   0x0180
/*MT6177M*/ #define  LTE_Band8_MPR_16QAM1_HPUE_CA_Set0   0x0200
/*MT6177M*/ #define  LTE_Band8_MPR_16QAM2_HPUE_CA_Set0   0x0300
/*MT6177M*/ #define  LTE_Band8_MPR_64QAM0_HPUE_CA_Set0   0x0200
/*MT6177M*/ #define  LTE_Band8_MPR_64QAM1_HPUE_CA_Set0   0x0300
/*MT6177M*/ #define  LTE_Band8_DELTA_TC0_HPUE_CA_Set0    0x0000       
/*MT6177M*/ #define  LTE_Band8_DELTA_TC1_HPUE_CA_Set0    0x0000       
/*MT6177M*/ #define  LTE_Band8_DELTA_TIB_HPUE_CA_Set0    0x0000
/*MT6177M*/ #define  LTE_Band8_RES_HNDLR_HPUE_CA_Set0    0x0000
/*MT6177M*/
/*MT6177M*/ //* ------------- MPR_BAND9 Start --------------------*/
/*MT6177M*/ #define  LTE_Band9_MPR_QPSK0_HPUE_CA_Set0    0x0100
/*MT6177M*/ #define  LTE_Band9_MPR_QPSK1_HPUE_CA_Set0    0x0200       
/*MT6177M*/ #define  LTE_Band9_MPR_16QAM0_HPUE_CA_Set0   0x0180
/*MT6177M*/ #define  LTE_Band9_MPR_16QAM1_HPUE_CA_Set0   0x0200
/*MT6177M*/ #define  LTE_Band9_MPR_16QAM2_HPUE_CA_Set0   0x0300
/*MT6177M*/ #define  LTE_Band9_MPR_64QAM0_HPUE_CA_Set0   0x0200
/*MT6177M*/ #define  LTE_Band9_MPR_64QAM1_HPUE_CA_Set0   0x0300
/*MT6177M*/ #define  LTE_Band9_DELTA_TC0_HPUE_CA_Set0    0x0000       
/*MT6177M*/ #define  LTE_Band9_DELTA_TC1_HPUE_CA_Set0    0x0000       
/*MT6177M*/ #define  LTE_Band9_DELTA_TIB_HPUE_CA_Set0    0x0000
/*MT6177M*/ #define  LTE_Band9_RES_HNDLR_HPUE_CA_Set0    0x0000
/*MT6177M*/
/*MT6177M*/ //* ------------- MPR_BAND10 Start --------------------*/
/*MT6177M*/ #define  LTE_Band10_MPR_QPSK0_HPUE_CA_Set0    0x0100
/*MT6177M*/ #define  LTE_Band10_MPR_QPSK1_HPUE_CA_Set0    0x0200       
/*MT6177M*/ #define  LTE_Band10_MPR_16QAM0_HPUE_CA_Set0   0x0180
/*MT6177M*/ #define  LTE_Band10_MPR_16QAM1_HPUE_CA_Set0   0x0200
/*MT6177M*/ #define  LTE_Band10_MPR_16QAM2_HPUE_CA_Set0   0x0300
/*MT6177M*/ #define  LTE_Band10_MPR_64QAM0_HPUE_CA_Set0   0x0200
/*MT6177M*/ #define  LTE_Band10_MPR_64QAM1_HPUE_CA_Set0   0x0300
/*MT6177M*/ #define  LTE_Band10_DELTA_TC0_HPUE_CA_Set0    0x0000       
/*MT6177M*/ #define  LTE_Band10_DELTA_TC1_HPUE_CA_Set0    0x0000       
/*MT6177M*/ #define  LTE_Band10_DELTA_TIB_HPUE_CA_Set0    0x0000
/*MT6177M*/ #define  LTE_Band10_RES_HNDLR_HPUE_CA_Set0    0x0000
/*MT6177M*/
/*MT6177M*/ //* ------------- MPR_BAND11 Start --------------------*/
/*MT6177M*/ #define  LTE_Band11_MPR_QPSK0_HPUE_CA_Set0    0x0100
/*MT6177M*/ #define  LTE_Band11_MPR_QPSK1_HPUE_CA_Set0    0x0200       
/*MT6177M*/ #define  LTE_Band11_MPR_16QAM0_HPUE_CA_Set0   0x0180
/*MT6177M*/ #define  LTE_Band11_MPR_16QAM1_HPUE_CA_Set0   0x0200
/*MT6177M*/ #define  LTE_Band11_MPR_16QAM2_HPUE_CA_Set0   0x0300
/*MT6177M*/ #define  LTE_Band11_MPR_64QAM0_HPUE_CA_Set0   0x0200
/*MT6177M*/ #define  LTE_Band11_MPR_64QAM1_HPUE_CA_Set0   0x0300
/*MT6177M*/ #define  LTE_Band11_DELTA_TC0_HPUE_CA_Set0    0x0000       
/*MT6177M*/ #define  LTE_Band11_DELTA_TC1_HPUE_CA_Set0    0x0000       
/*MT6177M*/ #define  LTE_Band11_DELTA_TIB_HPUE_CA_Set0    0x0000
/*MT6177M*/ #define  LTE_Band11_RES_HNDLR_HPUE_CA_Set0    0x0000
/*MT6177M*/
/*MT6177M*/ //* ------------- MPR_BAND12 Start --------------------*/
/*MT6177M*/ #define  LTE_Band12_MPR_QPSK0_HPUE_CA_Set0    0x0100
/*MT6177M*/ #define  LTE_Band12_MPR_QPSK1_HPUE_CA_Set0    0x0200       
/*MT6177M*/ #define  LTE_Band12_MPR_16QAM0_HPUE_CA_Set0   0x0180
/*MT6177M*/ #define  LTE_Band12_MPR_16QAM1_HPUE_CA_Set0   0x0200
/*MT6177M*/ #define  LTE_Band12_MPR_16QAM2_HPUE_CA_Set0   0x0300
/*MT6177M*/ #define  LTE_Band12_MPR_64QAM0_HPUE_CA_Set0   0x0200
/*MT6177M*/ #define  LTE_Band12_MPR_64QAM1_HPUE_CA_Set0   0x0300
/*MT6177M*/ #define  LTE_Band12_DELTA_TC0_HPUE_CA_Set0    0x0000       
/*MT6177M*/ #define  LTE_Band12_DELTA_TC1_HPUE_CA_Set0    0x0000       
/*MT6177M*/ #define  LTE_Band12_DELTA_TIB_HPUE_CA_Set0    0x0000
/*MT6177M*/ #define  LTE_Band12_RES_HNDLR_HPUE_CA_Set0    0x0000
/*MT6177M*/
/*MT6177M*/ //* ------------- MPR_BAND13 Start --------------------*/
/*MT6177M*/ #define  LTE_Band13_MPR_QPSK0_HPUE_CA_Set0    0x0100
/*MT6177M*/ #define  LTE_Band13_MPR_QPSK1_HPUE_CA_Set0    0x0200       
/*MT6177M*/ #define  LTE_Band13_MPR_16QAM0_HPUE_CA_Set0   0x0180
/*MT6177M*/ #define  LTE_Band13_MPR_16QAM1_HPUE_CA_Set0   0x0200
/*MT6177M*/ #define  LTE_Band13_MPR_16QAM2_HPUE_CA_Set0   0x0300
/*MT6177M*/ #define  LTE_Band13_MPR_64QAM0_HPUE_CA_Set0   0x0200
/*MT6177M*/ #define  LTE_Band13_MPR_64QAM1_HPUE_CA_Set0   0x0300
/*MT6177M*/ #define  LTE_Band13_DELTA_TC0_HPUE_CA_Set0    0x0000       
/*MT6177M*/ #define  LTE_Band13_DELTA_TC1_HPUE_CA_Set0    0x0000       
/*MT6177M*/ #define  LTE_Band13_DELTA_TIB_HPUE_CA_Set0    0x0000
/*MT6177M*/ #define  LTE_Band13_RES_HNDLR_HPUE_CA_Set0    0x0000
/*MT6177M*/
/*MT6177M*/ //* ------------- MPR_BAND14 Start --------------------*/
/*MT6177M*/ #define  LTE_Band14_MPR_QPSK0_HPUE_CA_Set0    0x0100
/*MT6177M*/ #define  LTE_Band14_MPR_QPSK1_HPUE_CA_Set0    0x0200       
/*MT6177M*/ #define  LTE_Band14_MPR_16QAM0_HPUE_CA_Set0   0x0180
/*MT6177M*/ #define  LTE_Band14_MPR_16QAM1_HPUE_CA_Set0   0x0200
/*MT6177M*/ #define  LTE_Band14_MPR_16QAM2_HPUE_CA_Set0   0x0300
/*MT6177M*/ #define  LTE_Band14_MPR_64QAM0_HPUE_CA_Set0   0x0200
/*MT6177M*/ #define  LTE_Band14_MPR_64QAM1_HPUE_CA_Set0   0x0300
/*MT6177M*/ #define  LTE_Band14_DELTA_TC0_HPUE_CA_Set0    0x0000       
/*MT6177M*/ #define  LTE_Band14_DELTA_TC1_HPUE_CA_Set0    0x0000       
/*MT6177M*/ #define  LTE_Band14_DELTA_TIB_HPUE_CA_Set0    0x0000
/*MT6177M*/ #define  LTE_Band14_RES_HNDLR_HPUE_CA_Set0    0x0000
/*MT6177M*/
/*MT6177M*/ //* ------------- MPR_BAND17 Start --------------------*/
/*MT6177M*/ #define  LTE_Band17_MPR_QPSK0_HPUE_CA_Set0    0x0100
/*MT6177M*/ #define  LTE_Band17_MPR_QPSK1_HPUE_CA_Set0    0x0200       
/*MT6177M*/ #define  LTE_Band17_MPR_16QAM0_HPUE_CA_Set0   0x0180
/*MT6177M*/ #define  LTE_Band17_MPR_16QAM1_HPUE_CA_Set0   0x0200
/*MT6177M*/ #define  LTE_Band17_MPR_16QAM2_HPUE_CA_Set0   0x0300
/*MT6177M*/ #define  LTE_Band17_MPR_64QAM0_HPUE_CA_Set0   0x0200
/*MT6177M*/ #define  LTE_Band17_MPR_64QAM1_HPUE_CA_Set0   0x0300
/*MT6177M*/ #define  LTE_Band17_DELTA_TC0_HPUE_CA_Set0    0x0000       
/*MT6177M*/ #define  LTE_Band17_DELTA_TC1_HPUE_CA_Set0    0x0000       
/*MT6177M*/ #define  LTE_Band17_DELTA_TIB_HPUE_CA_Set0    0x0000
/*MT6177M*/ #define  LTE_Band17_RES_HNDLR_HPUE_CA_Set0    0x0000
/*MT6177M*/
/*MT6177M*/ //* ------------- MPR_BAND18 Start --------------------*/
/*MT6177M*/ #define  LTE_Band18_MPR_QPSK0_HPUE_CA_Set0    0x0100
/*MT6177M*/ #define  LTE_Band18_MPR_QPSK1_HPUE_CA_Set0    0x0200       
/*MT6177M*/ #define  LTE_Band18_MPR_16QAM0_HPUE_CA_Set0   0x0180
/*MT6177M*/ #define  LTE_Band18_MPR_16QAM1_HPUE_CA_Set0   0x0200
/*MT6177M*/ #define  LTE_Band18_MPR_16QAM2_HPUE_CA_Set0   0x0300
/*MT6177M*/ #define  LTE_Band18_MPR_64QAM0_HPUE_CA_Set0   0x0200
/*MT6177M*/ #define  LTE_Band18_MPR_64QAM1_HPUE_CA_Set0   0x0300
/*MT6177M*/ #define  LTE_Band18_DELTA_TC0_HPUE_CA_Set0    0x0000       
/*MT6177M*/ #define  LTE_Band18_DELTA_TC1_HPUE_CA_Set0    0x0000       
/*MT6177M*/ #define  LTE_Band18_DELTA_TIB_HPUE_CA_Set0    0x0000
/*MT6177M*/ #define  LTE_Band18_RES_HNDLR_HPUE_CA_Set0    0x0000
/*MT6177M*/
/*MT6177M*/ //* ------------- MPR_BAND19 Start --------------------*/
/*MT6177M*/ #define  LTE_Band19_MPR_QPSK0_HPUE_CA_Set0    0x0100
/*MT6177M*/ #define  LTE_Band19_MPR_QPSK1_HPUE_CA_Set0    0x0200       
/*MT6177M*/ #define  LTE_Band19_MPR_16QAM0_HPUE_CA_Set0   0x0180
/*MT6177M*/ #define  LTE_Band19_MPR_16QAM1_HPUE_CA_Set0   0x0200
/*MT6177M*/ #define  LTE_Band19_MPR_16QAM2_HPUE_CA_Set0   0x0300
/*MT6177M*/ #define  LTE_Band19_MPR_64QAM0_HPUE_CA_Set0   0x0200
/*MT6177M*/ #define  LTE_Band19_MPR_64QAM1_HPUE_CA_Set0   0x0300
/*MT6177M*/ #define  LTE_Band19_DELTA_TC0_HPUE_CA_Set0    0x0000       
/*MT6177M*/ #define  LTE_Band19_DELTA_TC1_HPUE_CA_Set0    0x0000       
/*MT6177M*/ #define  LTE_Band19_DELTA_TIB_HPUE_CA_Set0    0x0000
/*MT6177M*/ #define  LTE_Band19_RES_HNDLR_HPUE_CA_Set0    0x0000
/*MT6177M*/
/*MT6177M*/ //* ------------- MPR_BAND20 Start --------------------*/
/*MT6177M*/ #define  LTE_Band20_MPR_QPSK0_HPUE_CA_Set0    0x0100
/*MT6177M*/ #define  LTE_Band20_MPR_QPSK1_HPUE_CA_Set0    0x0200       
/*MT6177M*/ #define  LTE_Band20_MPR_16QAM0_HPUE_CA_Set0   0x0180
/*MT6177M*/ #define  LTE_Band20_MPR_16QAM1_HPUE_CA_Set0   0x0200
/*MT6177M*/ #define  LTE_Band20_MPR_16QAM2_HPUE_CA_Set0   0x0300
/*MT6177M*/ #define  LTE_Band20_MPR_64QAM0_HPUE_CA_Set0   0x0200
/*MT6177M*/ #define  LTE_Band20_MPR_64QAM1_HPUE_CA_Set0   0x0300
/*MT6177M*/ #define  LTE_Band20_DELTA_TC0_HPUE_CA_Set0    0x0000       
/*MT6177M*/ #define  LTE_Band20_DELTA_TC1_HPUE_CA_Set0    0x0000       
/*MT6177M*/ #define  LTE_Band20_DELTA_TIB_HPUE_CA_Set0    0x0000
/*MT6177M*/ #define  LTE_Band20_RES_HNDLR_HPUE_CA_Set0    0x0000
/*MT6177M*/
/*MT6177M*/ //* ------------- MPR_BAND21 Start --------------------*/
/*MT6177M*/ #define  LTE_Band21_MPR_QPSK0_HPUE_CA_Set0    0x0100
/*MT6177M*/ #define  LTE_Band21_MPR_QPSK1_HPUE_CA_Set0    0x0200       
/*MT6177M*/ #define  LTE_Band21_MPR_16QAM0_HPUE_CA_Set0   0x0180
/*MT6177M*/ #define  LTE_Band21_MPR_16QAM1_HPUE_CA_Set0   0x0200
/*MT6177M*/ #define  LTE_Band21_MPR_16QAM2_HPUE_CA_Set0   0x0300
/*MT6177M*/ #define  LTE_Band21_MPR_64QAM0_HPUE_CA_Set0   0x0200
/*MT6177M*/ #define  LTE_Band21_MPR_64QAM1_HPUE_CA_Set0   0x0300
/*MT6177M*/ #define  LTE_Band21_DELTA_TC0_HPUE_CA_Set0    0x0000       
/*MT6177M*/ #define  LTE_Band21_DELTA_TC1_HPUE_CA_Set0    0x0000       
/*MT6177M*/ #define  LTE_Band21_DELTA_TIB_HPUE_CA_Set0    0x0000
/*MT6177M*/ #define  LTE_Band21_RES_HNDLR_HPUE_CA_Set0    0x0000
/*MT6177M*/
/*MT6177M*/ //* ------------- MPR_BAND22 Start --------------------*/
/*MT6177M*/ #define  LTE_Band22_MPR_QPSK0_HPUE_CA_Set0    0x0100
/*MT6177M*/ #define  LTE_Band22_MPR_QPSK1_HPUE_CA_Set0    0x0200       
/*MT6177M*/ #define  LTE_Band22_MPR_16QAM0_HPUE_CA_Set0   0x0180
/*MT6177M*/ #define  LTE_Band22_MPR_16QAM1_HPUE_CA_Set0   0x0200
/*MT6177M*/ #define  LTE_Band22_MPR_16QAM2_HPUE_CA_Set0   0x0300
/*MT6177M*/ #define  LTE_Band22_MPR_64QAM0_HPUE_CA_Set0   0x0200
/*MT6177M*/ #define  LTE_Band22_MPR_64QAM1_HPUE_CA_Set0   0x0300
/*MT6177M*/ #define  LTE_Band22_DELTA_TC0_HPUE_CA_Set0    0x0000       
/*MT6177M*/ #define  LTE_Band22_DELTA_TC1_HPUE_CA_Set0    0x0000       
/*MT6177M*/ #define  LTE_Band22_DELTA_TIB_HPUE_CA_Set0    0x0000
/*MT6177M*/ #define  LTE_Band22_RES_HNDLR_HPUE_CA_Set0    0x0000
/*MT6177M*/
/*MT6177M*/ //* ------------- MPR_BAND23 Start --------------------*/
/*MT6177M*/ #define  LTE_Band23_MPR_QPSK0_HPUE_CA_Set0    0x0100
/*MT6177M*/ #define  LTE_Band23_MPR_QPSK1_HPUE_CA_Set0    0x0200       
/*MT6177M*/ #define  LTE_Band23_MPR_16QAM0_HPUE_CA_Set0   0x0180
/*MT6177M*/ #define  LTE_Band23_MPR_16QAM1_HPUE_CA_Set0   0x0200
/*MT6177M*/ #define  LTE_Band23_MPR_16QAM2_HPUE_CA_Set0   0x0300
/*MT6177M*/ #define  LTE_Band23_MPR_64QAM0_HPUE_CA_Set0   0x0200
/*MT6177M*/ #define  LTE_Band23_MPR_64QAM1_HPUE_CA_Set0   0x0300
/*MT6177M*/ #define  LTE_Band23_DELTA_TC0_HPUE_CA_Set0    0x0000       
/*MT6177M*/ #define  LTE_Band23_DELTA_TC1_HPUE_CA_Set0    0x0000       
/*MT6177M*/ #define  LTE_Band23_DELTA_TIB_HPUE_CA_Set0    0x0000
/*MT6177M*/ #define  LTE_Band23_RES_HNDLR_HPUE_CA_Set0    0x0000
/*MT6177M*/
/*MT6177M*/ //* ------------- MPR_BAND24 Start --------------------*/
/*MT6177M*/ #define  LTE_Band24_MPR_QPSK0_HPUE_CA_Set0    0x0100
/*MT6177M*/ #define  LTE_Band24_MPR_QPSK1_HPUE_CA_Set0    0x0200       
/*MT6177M*/ #define  LTE_Band24_MPR_16QAM0_HPUE_CA_Set0   0x0180
/*MT6177M*/ #define  LTE_Band24_MPR_16QAM1_HPUE_CA_Set0   0x0200
/*MT6177M*/ #define  LTE_Band24_MPR_16QAM2_HPUE_CA_Set0   0x0300
/*MT6177M*/ #define  LTE_Band24_MPR_64QAM0_HPUE_CA_Set0   0x0200
/*MT6177M*/ #define  LTE_Band24_MPR_64QAM1_HPUE_CA_Set0   0x0300
/*MT6177M*/ #define  LTE_Band24_DELTA_TC0_HPUE_CA_Set0    0x0000       
/*MT6177M*/ #define  LTE_Band24_DELTA_TC1_HPUE_CA_Set0    0x0000       
/*MT6177M*/ #define  LTE_Band24_DELTA_TIB_HPUE_CA_Set0    0x0000
/*MT6177M*/ #define  LTE_Band24_RES_HNDLR_HPUE_CA_Set0    0x0000
/*MT6177M*/
/*MT6177M*/ //* ------------- MPR_BAND25 Start --------------------*/
/*MT6177M*/ #define  LTE_Band25_MPR_QPSK0_HPUE_CA_Set0    0x0100
/*MT6177M*/ #define  LTE_Band25_MPR_QPSK1_HPUE_CA_Set0    0x0200       
/*MT6177M*/ #define  LTE_Band25_MPR_16QAM0_HPUE_CA_Set0   0x0180
/*MT6177M*/ #define  LTE_Band25_MPR_16QAM1_HPUE_CA_Set0   0x0200
/*MT6177M*/ #define  LTE_Band25_MPR_16QAM2_HPUE_CA_Set0   0x0300
/*MT6177M*/ #define  LTE_Band25_MPR_64QAM0_HPUE_CA_Set0   0x0200
/*MT6177M*/ #define  LTE_Band25_MPR_64QAM1_HPUE_CA_Set0   0x0300
/*MT6177M*/ #define  LTE_Band25_DELTA_TC0_HPUE_CA_Set0    0x0000       
/*MT6177M*/ #define  LTE_Band25_DELTA_TC1_HPUE_CA_Set0    0x0000       
/*MT6177M*/ #define  LTE_Band25_DELTA_TIB_HPUE_CA_Set0    0x0000
/*MT6177M*/ #define  LTE_Band25_RES_HNDLR_HPUE_CA_Set0    0x0000
/*MT6177M*/
/*MT6177M*/ //* ------------- MPR_BAND26 Start --------------------*/
/*MT6177M*/ #define  LTE_Band26_MPR_QPSK0_HPUE_CA_Set0    0x0100
/*MT6177M*/ #define  LTE_Band26_MPR_QPSK1_HPUE_CA_Set0    0x0200       
/*MT6177M*/ #define  LTE_Band26_MPR_16QAM0_HPUE_CA_Set0   0x0180
/*MT6177M*/ #define  LTE_Band26_MPR_16QAM1_HPUE_CA_Set0   0x0200
/*MT6177M*/ #define  LTE_Band26_MPR_16QAM2_HPUE_CA_Set0   0x0300
/*MT6177M*/ #define  LTE_Band26_MPR_64QAM0_HPUE_CA_Set0   0x0200
/*MT6177M*/ #define  LTE_Band26_MPR_64QAM1_HPUE_CA_Set0   0x0300
/*MT6177M*/ #define  LTE_Band26_DELTA_TC0_HPUE_CA_Set0    0x0000       
/*MT6177M*/ #define  LTE_Band26_DELTA_TC1_HPUE_CA_Set0    0x0000       
/*MT6177M*/ #define  LTE_Band26_DELTA_TIB_HPUE_CA_Set0    0x0000
/*MT6177M*/ #define  LTE_Band26_RES_HNDLR_HPUE_CA_Set0    0x0000
/*MT6177M*/
/*MT6177M*/ //* ------------- MPR_BAND27 Start --------------------*/
/*MT6177M*/ #define  LTE_Band27_MPR_QPSK0_HPUE_CA_Set0    0x0100
/*MT6177M*/ #define  LTE_Band27_MPR_QPSK1_HPUE_CA_Set0    0x0200       
/*MT6177M*/ #define  LTE_Band27_MPR_16QAM0_HPUE_CA_Set0   0x0180
/*MT6177M*/ #define  LTE_Band27_MPR_16QAM1_HPUE_CA_Set0   0x0200
/*MT6177M*/ #define  LTE_Band27_MPR_16QAM2_HPUE_CA_Set0   0x0300
/*MT6177M*/ #define  LTE_Band27_MPR_64QAM0_HPUE_CA_Set0   0x0200
/*MT6177M*/ #define  LTE_Band27_MPR_64QAM1_HPUE_CA_Set0   0x0300
/*MT6177M*/ #define  LTE_Band27_DELTA_TC0_HPUE_CA_Set0    0x0000       
/*MT6177M*/ #define  LTE_Band27_DELTA_TC1_HPUE_CA_Set0    0x0000       
/*MT6177M*/ #define  LTE_Band27_DELTA_TIB_HPUE_CA_Set0    0x0000
/*MT6177M*/ #define  LTE_Band27_RES_HNDLR_HPUE_CA_Set0    0x0000
/*MT6177M*/
/*MT6177M*/ //* ------------- MPR_BAND28 Start --------------------*/
/*MT6177M*/ #define  LTE_Band28_MPR_QPSK0_HPUE_CA_Set0    0x0100
/*MT6177M*/ #define  LTE_Band28_MPR_QPSK1_HPUE_CA_Set0    0x0200       
/*MT6177M*/ #define  LTE_Band28_MPR_16QAM0_HPUE_CA_Set0   0x0180
/*MT6177M*/ #define  LTE_Band28_MPR_16QAM1_HPUE_CA_Set0   0x0200
/*MT6177M*/ #define  LTE_Band28_MPR_16QAM2_HPUE_CA_Set0   0x0300
/*MT6177M*/ #define  LTE_Band28_MPR_64QAM0_HPUE_CA_Set0   0x0200
/*MT6177M*/ #define  LTE_Band28_MPR_64QAM1_HPUE_CA_Set0   0x0300
/*MT6177M*/ #define  LTE_Band28_DELTA_TC0_HPUE_CA_Set0    0x0000       
/*MT6177M*/ #define  LTE_Band28_DELTA_TC1_HPUE_CA_Set0    0x0000       
/*MT6177M*/ #define  LTE_Band28_DELTA_TIB_HPUE_CA_Set0    0x0000
/*MT6177M*/ #define  LTE_Band28_RES_HNDLR_HPUE_CA_Set0    0x0000
/*MT6177M*/
/*MT6177M*/ //* ------------- MPR_BAND29 Start --------------------*/
/*MT6177M*/ #define  LTE_Band29_MPR_QPSK0_HPUE_CA_Set0    0x0100
/*MT6177M*/ #define  LTE_Band29_MPR_QPSK1_HPUE_CA_Set0    0x0200       
/*MT6177M*/ #define  LTE_Band29_MPR_16QAM0_HPUE_CA_Set0   0x0180
/*MT6177M*/ #define  LTE_Band29_MPR_16QAM1_HPUE_CA_Set0   0x0200
/*MT6177M*/ #define  LTE_Band29_MPR_16QAM2_HPUE_CA_Set0   0x0300
/*MT6177M*/ #define  LTE_Band29_MPR_64QAM0_HPUE_CA_Set0   0x0200
/*MT6177M*/ #define  LTE_Band29_MPR_64QAM1_HPUE_CA_Set0   0x0300
/*MT6177M*/ #define  LTE_Band29_DELTA_TC0_HPUE_CA_Set0    0x0000       
/*MT6177M*/ #define  LTE_Band29_DELTA_TC1_HPUE_CA_Set0    0x0000       
/*MT6177M*/ #define  LTE_Band29_DELTA_TIB_HPUE_CA_Set0    0x0000
/*MT6177M*/ #define  LTE_Band29_RES_HNDLR_HPUE_CA_Set0    0x0000
/*MT6177M*/
/*MT6177M*/ //* ------------- MPR_BAND30 Start --------------------*/
/*MT6177M*/ #define  LTE_Band30_MPR_QPSK0_HPUE_CA_Set0    0x0100
/*MT6177M*/ #define  LTE_Band30_MPR_QPSK1_HPUE_CA_Set0    0x0200       
/*MT6177M*/ #define  LTE_Band30_MPR_16QAM0_HPUE_CA_Set0   0x0180
/*MT6177M*/ #define  LTE_Band30_MPR_16QAM1_HPUE_CA_Set0   0x0200
/*MT6177M*/ #define  LTE_Band30_MPR_16QAM2_HPUE_CA_Set0   0x0300
/*MT6177M*/ #define  LTE_Band30_MPR_64QAM0_HPUE_CA_Set0   0x0200
/*MT6177M*/ #define  LTE_Band30_MPR_64QAM1_HPUE_CA_Set0   0x0300
/*MT6177M*/ #define  LTE_Band30_DELTA_TC0_HPUE_CA_Set0    0x0000       
/*MT6177M*/ #define  LTE_Band30_DELTA_TC1_HPUE_CA_Set0    0x0000       
/*MT6177M*/ #define  LTE_Band30_DELTA_TIB_HPUE_CA_Set0    0x0000
/*MT6177M*/ #define  LTE_Band30_RES_HNDLR_HPUE_CA_Set0    0x0000
/*MT6177M*/
/*MT6177M*/ //* ------------- MPR_BAND31 Start --------------------*/
/*MT6177M*/ #define  LTE_Band31_MPR_QPSK0_HPUE_CA_Set0    0x0100
/*MT6177M*/ #define  LTE_Band31_MPR_QPSK1_HPUE_CA_Set0    0x0200       
/*MT6177M*/ #define  LTE_Band31_MPR_16QAM0_HPUE_CA_Set0   0x0180
/*MT6177M*/ #define  LTE_Band31_MPR_16QAM1_HPUE_CA_Set0   0x0200
/*MT6177M*/ #define  LTE_Band31_MPR_16QAM2_HPUE_CA_Set0   0x0300
/*MT6177M*/ #define  LTE_Band31_MPR_64QAM0_HPUE_CA_Set0   0x0200
/*MT6177M*/ #define  LTE_Band31_MPR_64QAM1_HPUE_CA_Set0   0x0300
/*MT6177M*/ #define  LTE_Band31_DELTA_TC0_HPUE_CA_Set0    0x0000       
/*MT6177M*/ #define  LTE_Band31_DELTA_TC1_HPUE_CA_Set0    0x0000       
/*MT6177M*/ #define  LTE_Band31_DELTA_TIB_HPUE_CA_Set0    0x0000
/*MT6177M*/ #define  LTE_Band31_RES_HNDLR_HPUE_CA_Set0    0x0000
/*MT6177M*/
/*MT6177M*/ //* ------------- MPR_BAND32 Start --------------------*/
/*MT6177M*/ #define  LTE_Band32_MPR_QPSK0_HPUE_CA_Set0    0x0100
/*MT6177M*/ #define  LTE_Band32_MPR_QPSK1_HPUE_CA_Set0    0x0200       
/*MT6177M*/ #define  LTE_Band32_MPR_16QAM0_HPUE_CA_Set0   0x0180
/*MT6177M*/ #define  LTE_Band32_MPR_16QAM1_HPUE_CA_Set0   0x0200
/*MT6177M*/ #define  LTE_Band32_MPR_16QAM2_HPUE_CA_Set0   0x0300
/*MT6177M*/ #define  LTE_Band32_MPR_64QAM0_HPUE_CA_Set0   0x0200
/*MT6177M*/ #define  LTE_Band32_MPR_64QAM1_HPUE_CA_Set0   0x0300
/*MT6177M*/ #define  LTE_Band32_DELTA_TC0_HPUE_CA_Set0    0x0000       
/*MT6177M*/ #define  LTE_Band32_DELTA_TC1_HPUE_CA_Set0    0x0000       
/*MT6177M*/ #define  LTE_Band32_DELTA_TIB_HPUE_CA_Set0    0x0000
/*MT6177M*/ #define  LTE_Band32_RES_HNDLR_HPUE_CA_Set0    0x0000
/*MT6177M*/
/*MT6177M*/ //* ------------- MPR_BAND33 Start --------------------*/
/*MT6177M*/ #define  LTE_Band33_MPR_QPSK0_HPUE_CA_Set0    0x0100
/*MT6177M*/ #define  LTE_Band33_MPR_QPSK1_HPUE_CA_Set0    0x0200       
/*MT6177M*/ #define  LTE_Band33_MPR_16QAM0_HPUE_CA_Set0   0x0180
/*MT6177M*/ #define  LTE_Band33_MPR_16QAM1_HPUE_CA_Set0   0x0200
/*MT6177M*/ #define  LTE_Band33_MPR_16QAM2_HPUE_CA_Set0   0x0300
/*MT6177M*/ #define  LTE_Band33_MPR_64QAM0_HPUE_CA_Set0   0x0200
/*MT6177M*/ #define  LTE_Band33_MPR_64QAM1_HPUE_CA_Set0   0x0300
/*MT6177M*/ #define  LTE_Band33_DELTA_TC0_HPUE_CA_Set0    0x0000       
/*MT6177M*/ #define  LTE_Band33_DELTA_TC1_HPUE_CA_Set0    0x0000       
/*MT6177M*/ #define  LTE_Band33_DELTA_TIB_HPUE_CA_Set0    0x0000
/*MT6177M*/ #define  LTE_Band33_RES_HNDLR_HPUE_CA_Set0    0x0000
/*MT6177M*/
/*MT6177M*/ //* ------------- MPR_BAND34 Start --------------------*/
/*MT6177M*/ #define  LTE_Band34_MPR_QPSK0_HPUE_CA_Set0    0x0100
/*MT6177M*/ #define  LTE_Band34_MPR_QPSK1_HPUE_CA_Set0    0x0200       
/*MT6177M*/ #define  LTE_Band34_MPR_16QAM0_HPUE_CA_Set0   0x0180
/*MT6177M*/ #define  LTE_Band34_MPR_16QAM1_HPUE_CA_Set0   0x0200
/*MT6177M*/ #define  LTE_Band34_MPR_16QAM2_HPUE_CA_Set0   0x0300
/*MT6177M*/ #define  LTE_Band34_MPR_64QAM0_HPUE_CA_Set0   0x0200
/*MT6177M*/ #define  LTE_Band34_MPR_64QAM1_HPUE_CA_Set0   0x0300
/*MT6177M*/ #define  LTE_Band34_DELTA_TC0_HPUE_CA_Set0    0x0000       
/*MT6177M*/ #define  LTE_Band34_DELTA_TC1_HPUE_CA_Set0    0x0000       
/*MT6177M*/ #define  LTE_Band34_DELTA_TIB_HPUE_CA_Set0    0x0000
/*MT6177M*/ #define  LTE_Band34_RES_HNDLR_HPUE_CA_Set0    0x0000
/*MT6177M*/
/*MT6177M*/ //* ------------- MPR_BAND35 Start --------------------*/
/*MT6177M*/ #define  LTE_Band35_MPR_QPSK0_HPUE_CA_Set0    0x0100
/*MT6177M*/ #define  LTE_Band35_MPR_QPSK1_HPUE_CA_Set0    0x0200       
/*MT6177M*/ #define  LTE_Band35_MPR_16QAM0_HPUE_CA_Set0   0x0180
/*MT6177M*/ #define  LTE_Band35_MPR_16QAM1_HPUE_CA_Set0   0x0200
/*MT6177M*/ #define  LTE_Band35_MPR_16QAM2_HPUE_CA_Set0   0x0300
/*MT6177M*/ #define  LTE_Band35_MPR_64QAM0_HPUE_CA_Set0   0x0200
/*MT6177M*/ #define  LTE_Band35_MPR_64QAM1_HPUE_CA_Set0   0x0300
/*MT6177M*/ #define  LTE_Band35_DELTA_TC0_HPUE_CA_Set0    0x0000       
/*MT6177M*/ #define  LTE_Band35_DELTA_TC1_HPUE_CA_Set0    0x0000       
/*MT6177M*/ #define  LTE_Band35_DELTA_TIB_HPUE_CA_Set0    0x0000
/*MT6177M*/ #define  LTE_Band35_RES_HNDLR_HPUE_CA_Set0    0x0000
/*MT6177M*/
/*MT6177M*/ //* ------------- MPR_BAND36 Start --------------------*/
/*MT6177M*/ #define  LTE_Band36_MPR_QPSK0_HPUE_CA_Set0    0x0100
/*MT6177M*/ #define  LTE_Band36_MPR_QPSK1_HPUE_CA_Set0    0x0200       
/*MT6177M*/ #define  LTE_Band36_MPR_16QAM0_HPUE_CA_Set0   0x0180
/*MT6177M*/ #define  LTE_Band36_MPR_16QAM1_HPUE_CA_Set0   0x0200
/*MT6177M*/ #define  LTE_Band36_MPR_16QAM2_HPUE_CA_Set0   0x0300
/*MT6177M*/ #define  LTE_Band36_MPR_64QAM0_HPUE_CA_Set0   0x0200
/*MT6177M*/ #define  LTE_Band36_MPR_64QAM1_HPUE_CA_Set0   0x0300
/*MT6177M*/ #define  LTE_Band36_DELTA_TC0_HPUE_CA_Set0    0x0000       
/*MT6177M*/ #define  LTE_Band36_DELTA_TC1_HPUE_CA_Set0    0x0000       
/*MT6177M*/ #define  LTE_Band36_DELTA_TIB_HPUE_CA_Set0    0x0000
/*MT6177M*/ #define  LTE_Band36_RES_HNDLR_HPUE_CA_Set0    0x0000
/*MT6177M*/
/*MT6177M*/ //* ------------- MPR_BAND37 Start --------------------*/
/*MT6177M*/ #define  LTE_Band37_MPR_QPSK0_HPUE_CA_Set0    0x0100
/*MT6177M*/ #define  LTE_Band37_MPR_QPSK1_HPUE_CA_Set0    0x0200       
/*MT6177M*/ #define  LTE_Band37_MPR_16QAM0_HPUE_CA_Set0   0x0180
/*MT6177M*/ #define  LTE_Band37_MPR_16QAM1_HPUE_CA_Set0   0x0200
/*MT6177M*/ #define  LTE_Band37_MPR_16QAM2_HPUE_CA_Set0   0x0300
/*MT6177M*/ #define  LTE_Band37_MPR_64QAM0_HPUE_CA_Set0   0x0200
/*MT6177M*/ #define  LTE_Band37_MPR_64QAM1_HPUE_CA_Set0   0x0300
/*MT6177M*/ #define  LTE_Band37_DELTA_TC0_HPUE_CA_Set0    0x0000       
/*MT6177M*/ #define  LTE_Band37_DELTA_TC1_HPUE_CA_Set0    0x0000       
/*MT6177M*/ #define  LTE_Band37_DELTA_TIB_HPUE_CA_Set0    0x0000
/*MT6177M*/ #define  LTE_Band37_RES_HNDLR_HPUE_CA_Set0    0x0000
/*MT6177M*/
/*MT6177M*/ //* ------------- MPR_BAND38 Start --------------------*/
/*MT6177M*/ #define  LTE_Band38_MPR_QPSK0_HPUE_CA_Set0    0x0100
/*MT6177M*/ #define  LTE_Band38_MPR_QPSK1_HPUE_CA_Set0    0x0200       
/*MT6177M*/ #define  LTE_Band38_MPR_16QAM0_HPUE_CA_Set0   0x0180
/*MT6177M*/ #define  LTE_Band38_MPR_16QAM1_HPUE_CA_Set0   0x0200
/*MT6177M*/ #define  LTE_Band38_MPR_16QAM2_HPUE_CA_Set0   0x0300
/*MT6177M*/ #define  LTE_Band38_MPR_64QAM0_HPUE_CA_Set0   0x0200
/*MT6177M*/ #define  LTE_Band38_MPR_64QAM1_HPUE_CA_Set0   0x0300
/*MT6177M*/ #define  LTE_Band38_DELTA_TC0_HPUE_CA_Set0    0x0000       
/*MT6177M*/ #define  LTE_Band38_DELTA_TC1_HPUE_CA_Set0    0x0000       
/*MT6177M*/ #define  LTE_Band38_DELTA_TIB_HPUE_CA_Set0    0x0000
/*MT6177M*/ #define  LTE_Band38_RES_HNDLR_HPUE_CA_Set0    0x0000
/*MT6177M*/
/*MT6177M*/ //* ------------- MPR_BAND39 Start --------------------*/
/*MT6177M*/ #define  LTE_Band39_MPR_QPSK0_HPUE_CA_Set0    0x0100
/*MT6177M*/ #define  LTE_Band39_MPR_QPSK1_HPUE_CA_Set0    0x0200       
/*MT6177M*/ #define  LTE_Band39_MPR_16QAM0_HPUE_CA_Set0   0x0180
/*MT6177M*/ #define  LTE_Band39_MPR_16QAM1_HPUE_CA_Set0   0x0200
/*MT6177M*/ #define  LTE_Band39_MPR_16QAM2_HPUE_CA_Set0   0x0300
/*MT6177M*/ #define  LTE_Band39_MPR_64QAM0_HPUE_CA_Set0   0x0200
/*MT6177M*/ #define  LTE_Band39_MPR_64QAM1_HPUE_CA_Set0   0x0300
/*MT6177M*/ #define  LTE_Band39_DELTA_TC0_HPUE_CA_Set0    0x0000       
/*MT6177M*/ #define  LTE_Band39_DELTA_TC1_HPUE_CA_Set0    0x0000       
/*MT6177M*/ #define  LTE_Band39_DELTA_TIB_HPUE_CA_Set0    0x0000
/*MT6177M*/ #define  LTE_Band39_RES_HNDLR_HPUE_CA_Set0    0x0000
/*MT6177M*/
/*MT6177M*/ //* ------------- MPR_BAND40 Start --------------------*/
/*MT6177M*/ #define  LTE_Band40_MPR_QPSK0_HPUE_CA_Set0    0x0100
/*MT6177M*/ #define  LTE_Band40_MPR_QPSK1_HPUE_CA_Set0    0x0200       
/*MT6177M*/ #define  LTE_Band40_MPR_16QAM0_HPUE_CA_Set0   0x0180
/*MT6177M*/ #define  LTE_Band40_MPR_16QAM1_HPUE_CA_Set0   0x0200
/*MT6177M*/ #define  LTE_Band40_MPR_16QAM2_HPUE_CA_Set0   0x0300
/*MT6177M*/ #define  LTE_Band40_MPR_64QAM0_HPUE_CA_Set0   0x0200
/*MT6177M*/ #define  LTE_Band40_MPR_64QAM1_HPUE_CA_Set0   0x0300
/*MT6177M*/ #define  LTE_Band40_DELTA_TC0_HPUE_CA_Set0    0x0000       
/*MT6177M*/ #define  LTE_Band40_DELTA_TC1_HPUE_CA_Set0    0x0000       
/*MT6177M*/ #define  LTE_Band40_DELTA_TIB_HPUE_CA_Set0    0x0000
/*MT6177M*/ #define  LTE_Band40_RES_HNDLR_HPUE_CA_Set0    0x0000
/*MT6177M*/
/*MT6177M*/ //* ------------- MPR_BAND41 Start --------------------*/
/*MT6177M*/ #define  LTE_Band41_MPR_QPSK0_HPUE_CA_Set0    0x0100
/*MT6177M*/ #define  LTE_Band41_MPR_QPSK1_HPUE_CA_Set0    0x0200       
/*MT6177M*/ #define  LTE_Band41_MPR_16QAM0_HPUE_CA_Set0   0x0180
/*MT6177M*/ #define  LTE_Band41_MPR_16QAM1_HPUE_CA_Set0   0x0200
/*MT6177M*/ #define  LTE_Band41_MPR_16QAM2_HPUE_CA_Set0   0x0300
/*MT6177M*/ #define  LTE_Band41_MPR_64QAM0_HPUE_CA_Set0   0x0200
/*MT6177M*/ #define  LTE_Band41_MPR_64QAM1_HPUE_CA_Set0   0x0300
/*MT6177M*/ #define  LTE_Band41_DELTA_TC0_HPUE_CA_Set0    0x0000       
/*MT6177M*/ #define  LTE_Band41_DELTA_TC1_HPUE_CA_Set0    0x0000       
/*MT6177M*/ #define  LTE_Band41_DELTA_TIB_HPUE_CA_Set0    0x0000
/*MT6177M*/ #define  LTE_Band41_RES_HNDLR_HPUE_CA_Set0    0x0000
/*MT6177M*/
/*MT6177M*/ //* ------------- MPR_BAND42 Start --------------------*/
/*MT6177M*/ #define  LTE_Band42_MPR_QPSK0_HPUE_CA_Set0    0x0100
/*MT6177M*/ #define  LTE_Band42_MPR_QPSK1_HPUE_CA_Set0    0x0200       
/*MT6177M*/ #define  LTE_Band42_MPR_16QAM0_HPUE_CA_Set0   0x0180
/*MT6177M*/ #define  LTE_Band42_MPR_16QAM1_HPUE_CA_Set0   0x0200
/*MT6177M*/ #define  LTE_Band42_MPR_16QAM2_HPUE_CA_Set0   0x0300
/*MT6177M*/ #define  LTE_Band42_MPR_64QAM0_HPUE_CA_Set0   0x0200
/*MT6177M*/ #define  LTE_Band42_MPR_64QAM1_HPUE_CA_Set0   0x0300
/*MT6177M*/ #define  LTE_Band42_DELTA_TC0_HPUE_CA_Set0    0x0000       
/*MT6177M*/ #define  LTE_Band42_DELTA_TC1_HPUE_CA_Set0    0x0000       
/*MT6177M*/ #define  LTE_Band42_DELTA_TIB_HPUE_CA_Set0    0x0000
/*MT6177M*/ #define  LTE_Band42_RES_HNDLR_HPUE_CA_Set0    0x0000
/*MT6177M*/
/*MT6177M*/ //* ------------- MPR_BAND43 Start --------------------*/
/*MT6177M*/ #define  LTE_Band43_MPR_QPSK0_HPUE_CA_Set0    0x0100
/*MT6177M*/ #define  LTE_Band43_MPR_QPSK1_HPUE_CA_Set0    0x0200       
/*MT6177M*/ #define  LTE_Band43_MPR_16QAM0_HPUE_CA_Set0   0x0180
/*MT6177M*/ #define  LTE_Band43_MPR_16QAM1_HPUE_CA_Set0   0x0200
/*MT6177M*/ #define  LTE_Band43_MPR_16QAM2_HPUE_CA_Set0   0x0300
/*MT6177M*/ #define  LTE_Band43_MPR_64QAM0_HPUE_CA_Set0   0x0200
/*MT6177M*/ #define  LTE_Band43_MPR_64QAM1_HPUE_CA_Set0   0x0300
/*MT6177M*/ #define  LTE_Band43_DELTA_TC0_HPUE_CA_Set0    0x0000       
/*MT6177M*/ #define  LTE_Band43_DELTA_TC1_HPUE_CA_Set0    0x0000       
/*MT6177M*/ #define  LTE_Band43_DELTA_TIB_HPUE_CA_Set0    0x0000
/*MT6177M*/ #define  LTE_Band43_RES_HNDLR_HPUE_CA_Set0    0x0000
/*MT6177M*/
/*MT6177M*/ //* ------------- MPR_BAND44 Start --------------------*/
/*MT6177M*/ #define  LTE_Band44_MPR_QPSK0_HPUE_CA_Set0    0x0100
/*MT6177M*/ #define  LTE_Band44_MPR_QPSK1_HPUE_CA_Set0    0x0200       
/*MT6177M*/ #define  LTE_Band44_MPR_16QAM0_HPUE_CA_Set0   0x0180
/*MT6177M*/ #define  LTE_Band44_MPR_16QAM1_HPUE_CA_Set0   0x0200
/*MT6177M*/ #define  LTE_Band44_MPR_16QAM2_HPUE_CA_Set0   0x0300
/*MT6177M*/ #define  LTE_Band44_MPR_64QAM0_HPUE_CA_Set0   0x0200
/*MT6177M*/ #define  LTE_Band44_MPR_64QAM1_HPUE_CA_Set0   0x0300
/*MT6177M*/ #define  LTE_Band44_DELTA_TC0_HPUE_CA_Set0    0x0000       
/*MT6177M*/ #define  LTE_Band44_DELTA_TC1_HPUE_CA_Set0    0x0000       
/*MT6177M*/ #define  LTE_Band44_DELTA_TIB_HPUE_CA_Set0    0x0000
/*MT6177M*/ #define  LTE_Band44_RES_HNDLR_HPUE_CA_Set0    0x0000
/*MT6177M*/
/*MT6177M*/ //* ------------- MPR_BAND45 Start --------------------*/
/*MT6177M*/ #define  LTE_Band45_MPR_QPSK0_HPUE_CA_Set0    0x0100
/*MT6177M*/ #define  LTE_Band45_MPR_QPSK1_HPUE_CA_Set0    0x0200       
/*MT6177M*/ #define  LTE_Band45_MPR_16QAM0_HPUE_CA_Set0   0x0180
/*MT6177M*/ #define  LTE_Band45_MPR_16QAM1_HPUE_CA_Set0   0x0200
/*MT6177M*/ #define  LTE_Band45_MPR_16QAM2_HPUE_CA_Set0   0x0300
/*MT6177M*/ #define  LTE_Band45_MPR_64QAM0_HPUE_CA_Set0   0x0200
/*MT6177M*/ #define  LTE_Band45_MPR_64QAM1_HPUE_CA_Set0   0x0300
/*MT6177M*/ #define  LTE_Band45_DELTA_TC0_HPUE_CA_Set0    0x0000       
/*MT6177M*/ #define  LTE_Band45_DELTA_TC1_HPUE_CA_Set0    0x0000       
/*MT6177M*/ #define  LTE_Band45_DELTA_TIB_HPUE_CA_Set0    0x0000
/*MT6177M*/ #define  LTE_Band45_RES_HNDLR_HPUE_CA_Set0    0x0000
/*MT6177M*/
/*MT6177M*/ //* ------------- MPR_BAND46 Start --------------------*/
/*MT6177M*/ #define  LTE_Band46_MPR_QPSK0_HPUE_CA_Set0    0x0100
/*MT6177M*/ #define  LTE_Band46_MPR_QPSK1_HPUE_CA_Set0    0x0200       
/*MT6177M*/ #define  LTE_Band46_MPR_16QAM0_HPUE_CA_Set0   0x0180
/*MT6177M*/ #define  LTE_Band46_MPR_16QAM1_HPUE_CA_Set0   0x0200
/*MT6177M*/ #define  LTE_Band46_MPR_16QAM2_HPUE_CA_Set0   0x0300
/*MT6177M*/ #define  LTE_Band46_MPR_64QAM0_HPUE_CA_Set0   0x0200
/*MT6177M*/ #define  LTE_Band46_MPR_64QAM1_HPUE_CA_Set0   0x0300
/*MT6177M*/ #define  LTE_Band46_DELTA_TC0_HPUE_CA_Set0    0x0000       
/*MT6177M*/ #define  LTE_Band46_DELTA_TC1_HPUE_CA_Set0    0x0000       
/*MT6177M*/ #define  LTE_Band46_DELTA_TIB_HPUE_CA_Set0    0x0000
/*MT6177M*/ #define  LTE_Band46_RES_HNDLR_HPUE_CA_Set0    0x0000
/*MT6177M*/
/*MT6177M*/ //* ------------- MPR_BAND65 Start --------------------*/
/*MT6177M*/ #define  LTE_Band65_MPR_QPSK0_HPUE_CA_Set0    0x0100
/*MT6177M*/ #define  LTE_Band65_MPR_QPSK1_HPUE_CA_Set0    0x0200       
/*MT6177M*/ #define  LTE_Band65_MPR_16QAM0_HPUE_CA_Set0   0x0180
/*MT6177M*/ #define  LTE_Band65_MPR_16QAM1_HPUE_CA_Set0   0x0200
/*MT6177M*/ #define  LTE_Band65_MPR_16QAM2_HPUE_CA_Set0   0x0300
/*MT6177M*/ #define  LTE_Band65_MPR_64QAM0_HPUE_CA_Set0   0x0200
/*MT6177M*/ #define  LTE_Band65_MPR_64QAM1_HPUE_CA_Set0   0x0300
/*MT6177M*/ #define  LTE_Band65_DELTA_TC0_HPUE_CA_Set0    0x0000       
/*MT6177M*/ #define  LTE_Band65_DELTA_TC1_HPUE_CA_Set0    0x0000       
/*MT6177M*/ #define  LTE_Band65_DELTA_TIB_HPUE_CA_Set0    0x0000
/*MT6177M*/ #define  LTE_Band65_RES_HNDLR_HPUE_CA_Set0    0x0000
/*MT6177M*/
/*MT6177M*/ //* ------------- MPR_BAND66 Start --------------------*/
/*MT6177M*/ #define  LTE_Band66_MPR_QPSK0_HPUE_CA_Set0    0x0100
/*MT6177M*/ #define  LTE_Band66_MPR_QPSK1_HPUE_CA_Set0    0x0200       
/*MT6177M*/ #define  LTE_Band66_MPR_16QAM0_HPUE_CA_Set0   0x0180
/*MT6177M*/ #define  LTE_Band66_MPR_16QAM1_HPUE_CA_Set0   0x0200
/*MT6177M*/ #define  LTE_Band66_MPR_16QAM2_HPUE_CA_Set0   0x0300
/*MT6177M*/ #define  LTE_Band66_MPR_64QAM0_HPUE_CA_Set0   0x0200
/*MT6177M*/ #define  LTE_Band66_MPR_64QAM1_HPUE_CA_Set0   0x0300
/*MT6177M*/ #define  LTE_Band66_DELTA_TC0_HPUE_CA_Set0    0x0000       
/*MT6177M*/ #define  LTE_Band66_DELTA_TC1_HPUE_CA_Set0    0x0000       
/*MT6177M*/ #define  LTE_Band66_DELTA_TIB_HPUE_CA_Set0    0x0000
/*MT6177M*/ #define  LTE_Band66_RES_HNDLR_HPUE_CA_Set0    0x0000
/*MT6177M*/
/*MT6177M*/ //* ------------- MPR_BAND68 Start --------------------*/
/*MT6177M*/ #define  LTE_Band68_MPR_QPSK0_HPUE_CA_Set0    0x0100
/*MT6177M*/ #define  LTE_Band68_MPR_QPSK1_HPUE_CA_Set0    0x0200       
/*MT6177M*/ #define  LTE_Band68_MPR_16QAM0_HPUE_CA_Set0   0x0180
/*MT6177M*/ #define  LTE_Band68_MPR_16QAM1_HPUE_CA_Set0   0x0200
/*MT6177M*/ #define  LTE_Band68_MPR_16QAM2_HPUE_CA_Set0   0x0300
/*MT6177M*/ #define  LTE_Band68_MPR_64QAM0_HPUE_CA_Set0   0x0200
/*MT6177M*/ #define  LTE_Band68_MPR_64QAM1_HPUE_CA_Set0   0x0300
/*MT6177M*/ #define  LTE_Band68_DELTA_TC0_HPUE_CA_Set0    0x0000       
/*MT6177M*/ #define  LTE_Band68_DELTA_TC1_HPUE_CA_Set0    0x0000       
/*MT6177M*/ #define  LTE_Band68_DELTA_TIB_HPUE_CA_Set0    0x0000
/*MT6177M*/ #define  LTE_Band68_RES_HNDLR_HPUE_CA_Set0    0x0000
/*MT6177M*/
/*MT6177M*/ //* ------------- MPR_BAND71 Start --------------------*/
/*MT6177M*/ #define  LTE_Band71_MPR_QPSK0_HPUE_CA_Set0    0x0100
/*MT6177M*/ #define  LTE_Band71_MPR_QPSK1_HPUE_CA_Set0    0x0200       
/*MT6177M*/ #define  LTE_Band71_MPR_16QAM0_HPUE_CA_Set0   0x0180
/*MT6177M*/ #define  LTE_Band71_MPR_16QAM1_HPUE_CA_Set0   0x0200
/*MT6177M*/ #define  LTE_Band71_MPR_16QAM2_HPUE_CA_Set0   0x0300
/*MT6177M*/ #define  LTE_Band71_MPR_64QAM0_HPUE_CA_Set0   0x0200
/*MT6177M*/ #define  LTE_Band71_MPR_64QAM1_HPUE_CA_Set0   0x0300
/*MT6177M*/ #define  LTE_Band71_DELTA_TC0_HPUE_CA_Set0    0x0000       
/*MT6177M*/ #define  LTE_Band71_DELTA_TC1_HPUE_CA_Set0    0x0000       
/*MT6177M*/ #define  LTE_Band71_DELTA_TIB_HPUE_CA_Set0    0x0000
/*MT6177M*/ #define  LTE_Band71_RES_HNDLR_HPUE_CA_Set0    0x0000
/*MT6177M*/
/*MT6177M*/ //* ------------- MPR_BAND252 Start --------------------*/
/*MT6177M*/ #define  LTE_Band252_MPR_QPSK0_HPUE_CA_Set0    0x0100
/*MT6177M*/ #define  LTE_Band252_MPR_QPSK1_HPUE_CA_Set0    0x0200       
/*MT6177M*/ #define  LTE_Band252_MPR_16QAM0_HPUE_CA_Set0   0x0180
/*MT6177M*/ #define  LTE_Band252_MPR_16QAM1_HPUE_CA_Set0   0x0200
/*MT6177M*/ #define  LTE_Band252_MPR_16QAM2_HPUE_CA_Set0   0x0300
/*MT6177M*/ #define  LTE_Band252_MPR_64QAM0_HPUE_CA_Set0   0x0200
/*MT6177M*/ #define  LTE_Band252_MPR_64QAM1_HPUE_CA_Set0   0x0300
/*MT6177M*/ #define  LTE_Band252_DELTA_TC0_HPUE_CA_Set0    0x0000       
/*MT6177M*/ #define  LTE_Band252_DELTA_TC1_HPUE_CA_Set0    0x0000       
/*MT6177M*/ #define  LTE_Band252_DELTA_TIB_HPUE_CA_Set0    0x0000
/*MT6177M*/ #define  LTE_Band252_RES_HNDLR_HPUE_CA_Set0    0x0000
/*MT6177M*/
/*MT6177M*/ //* ------------- MPR_BAND255 Start --------------------*/
/*MT6177M*/ #define  LTE_Band255_MPR_QPSK0_HPUE_CA_Set0    0x0100
/*MT6177M*/ #define  LTE_Band255_MPR_QPSK1_HPUE_CA_Set0    0x0200       
/*MT6177M*/ #define  LTE_Band255_MPR_16QAM0_HPUE_CA_Set0   0x0180
/*MT6177M*/ #define  LTE_Band255_MPR_16QAM1_HPUE_CA_Set0   0x0200
/*MT6177M*/ #define  LTE_Band255_MPR_16QAM2_HPUE_CA_Set0   0x0300
/*MT6177M*/ #define  LTE_Band255_MPR_64QAM0_HPUE_CA_Set0   0x0200
/*MT6177M*/ #define  LTE_Band255_MPR_64QAM1_HPUE_CA_Set0   0x0300
/*MT6177M*/ #define  LTE_Band255_DELTA_TC0_HPUE_CA_Set0    0x0000       
/*MT6177M*/ #define  LTE_Band255_DELTA_TC1_HPUE_CA_Set0    0x0000       
/*MT6177M*/ #define  LTE_Band255_DELTA_TIB_HPUE_CA_Set0    0x0000
/*MT6177M*/ #define  LTE_Band255_RES_HNDLR_HPUE_CA_Set0    0x0000
/*MT6177M*/
/*MT6177M*/ //* ------------- MPR_BANDNone Start --------------------*/
/*MT6177M*/ #define  LTE_BandNone_MPR_QPSK0_HPUE_CA_Set0   0x0000
/*MT6177M*/ #define  LTE_BandNone_MPR_QPSK1_HPUE_CA_Set0   0x0000       
/*MT6177M*/ #define  LTE_BandNone_MPR_16QAM0_HPUE_CA_Set0  0x0000
/*MT6177M*/ #define  LTE_BandNone_MPR_16QAM1_HPUE_CA_Set0  0x0000
/*MT6177M*/ #define  LTE_BandNone_MPR_16QAM2_HPUE_CA_Set0  0x0000
/*MT6177M*/ #define  LTE_BandNone_MPR_64QAM0_HPUE_CA_Set0  0x0000
/*MT6177M*/ #define  LTE_BandNone_MPR_64QAM1_HPUE_CA_Set0  0x0000
/*MT6177M*/ #define  LTE_BandNone_DELTA_TC0_HPUE_CA_Set0   0x0000       
/*MT6177M*/ #define  LTE_BandNone_DELTA_TC1_HPUE_CA_Set0   0x0000       
/*MT6177M*/ #define  LTE_BandNone_DELTA_TIB_HPUE_CA_Set0   0x0000
/*MT6177M*/ #define  LTE_BandNone_RES_HNDLR_HPUE_CA_Set0    0x0000
/*MT6177M*/
/*MT6177M*/ /* HPUE */
/*MT6177M*/#define LTE_Band41_NS4_HPUE_Set0                                                                                                      \
/*MT6177M*//*  NS4_5_A0, NS4_5_A1,   NS4_5_B   NS4_10_A0_0,NS4_10_A0_1,NS4_10_A0_2,NS4_10_A1,NS4_10_A2,NS4_10_B,  NS4_15_A0_0,   NS4_15_A0_1 */  \
/*MT6177M*/     0x0300,    0x0000,    0x0000,    0x0500,    0x0200,    0x0300,     0x0100,    0x0000,    0x0000,   0x0500,         0x0200,       \
/*MT6177M*//*  NS4_15_A0_2, NS4_15_A1,NS4_15_A_2,NS4_15_A_3,NS4_20_A0_0,NS4_20_A0_1,NS4_20_A1,NS4_20_A2, NS4_20_A3, NS4_20_B, hpue_rsv0*/         \
/*MT6177M*/     0x0400,     0x0300,   0x0000,    0x0000,    0x0500,     0x0200,     0x0400,   0x0300,    0x0000,    0x0000,         0,            \
/*MT6177M*//*  hpue_rsv1, hpue_rsv2, hpue_rsv3, hpue_rsv4, hpue_rsv5, hpue_rsv6, hpue_rsv7 */                                                    \
/*MT6177M*/          0,         0,         0,       0,         0,         0,         0
/*MT6177M*/
/*MT6177M*/#define LTE_NS4_HPUE_CA_Set0                                                                                                                                                       \
/*MT6177M*//*   NS4_25100_QPSK_A,  NS4_25100_QPSK_B,  NS4_25100_QPSK_C,  NS4_50100_QPSK_A,   NS4_50100_QPSK_B,   NS4_50100_QPSK_C,   NS4_7575_QPSK_A,  NS4_7575_QPSK_B,  NS4_7575_QPSK_C,  */ \
/*MT6177M*/     0x0380,            0x0100,            0x0100,            0x0400,             0x0100,             0x0100,             0x0400,           0x0200,           0x0180,              \
/*MT6177M*//*   NS4_75100_QPSK_A,  NS4_75100_QPSK_B,  NS4_75100_QPSK_C,  NS4_100100_QPSK_A,  NS4_100100_QPSK_B,  NS4_100100_QPSK_C,                                                        */ \
/*MT6177M*/     0x0380,            0x0200,            0x0100,            0x0380,             0x0200,             0x0180,                                                                      \
/*MT6177M*//*   NS4_25100_16QAM_A, NS4_25100_16QAM_B, NS4_25100_16QAM_C, NS4_50100_16QAM_A,  NS4_50100_16QAM_B,  NS4_50100_16QAM_C,  NS4_7575_16QAM_A, NS4_7575_16QAM_B, NS4_7575_16QAM_C, */ \
/*MT6177M*/     0x0400,            0x0180,            0x0180,            0x0400,             0x0180,             0x0180,             0x0400,           0x0280,           0x0200,              \
/*MT6177M*//*   NS4_75100_16QAM_A, NS4_75100_16QAM_B, NS4_75100_16QAM_C, NS4_100100_16QAM_A, NS4_100100_16QAM_B, NS4_100100_16QAM_C,                                                       */ \
/*MT6177M*/     0x0400,            0x0280,            0x0180,            0x0400,             0x0280,             0x0180,                                                                      \
/*MT6177M*//*   NS4_25100_64QAM_A, NS4_25100_64QAM_B, NS4_25100_64QAM_C, NS4_50100_64QAM_A,  NS4_50100_64QAM_B,  NS4_50100_64QAM_C,  NS4_7575_64QAM_A, NS4_7575_64QAM_B, NS4_7575_64QAM_C, */ \
/*MT6177M*/     0x0400,            0x0180,            0x0180,            0x0400,             0x0180,             0x0180,             0x0400,           0x0280,           0x0200,              \
/*MT6177M*//*   NS4_75100_64QAM_A, NS4_75100_64QAM_B, NS4_75100_64QAM_C, NS4_100100_64QAM_A, NS4_100100_64QAM_B, NS4_100100_64QAM_C, Reserved0 - 14                                        */ \
/*MT6177M*/     0x0400,            0x0280,            0x0200,            0x0400,             0x0280,             0x0200,             0,                0,                0,                   \
/*MT6177M*/     0,                 0,                 0,                 0,                  0,                  0,                  0,                0,                0,                   \
/*MT6177M*/     0,                 0,                 0                                                   
/*MT6177M*/
/*MT6177M*/#define LTE_Band41_NS4_EXTRA_Set0                                                                                                      \
/*MT6177M*//*  Valid bit,         NS4_5,       NS4_10_A,    NS4_10_B,    NS4_10_C,    NS4_15_A,    NS4_15_B,    NS4_15_C,    NS4_20_A,  NS4_20_B,    NS4_20_C, */  \
/*MT6177M*/     0x0000,    0x0100,    0x0300,    0x0200,    0x0300,    0x0300,     0x0200,    0x0300,    0x0300,   0x0200,     0x0300,      \
/*MT6177M*/     0x0000,    0x0000,    0x0000,    0x0000,    0x0000,    0x0000,     0x0000,    0x0000,    0x0000,   0x0000,     0x0000,      \
/*MT6177M*/     0x0000,    0x0000,    0x0000,    0x0000,    0x0000,    0x0000,     0x0000
/*MT6177M*/
/*MT6177M*/#define LTE_Band7_NS6_EXTRA_CA_Set0                                                                                                      \
/*MT6177M*//*  Valid bit, NS6_100100_A, NS6_100100_B, NS6_100100_C, NS6_100100_D, NS6_100100_E, NS6_7575_A, NS6_7575_B, NS6_7575_C, NS6_7575_D, NS6_7575_E, */  \
/*MT6177M*/     0x0000,    0x0400,    0x0200,      0x0300,      0x0500,       0x0A00,       0x0500,    0x0200,    0x0200,   0x0600,     0x0A00,      \
/*MT6177M*/     0x0000,    0x0000,    0x0000,      0x0000,      0x0000,       0x0000,       0x0000,    0x0000,    0x0000,   0x0000,     0x0000,      \
/*MT6177M*/     0x0000,    0x0000
/*MT6177M*/
/*MT6177M*/
/*MT6177M*/#define LTE_Band26_NS12_13_14_SPRINT_Set0                                                                                   \
/*MT6177M*//* NS12_1A0,   NS12_1A1,  NS12_1B, NS12_3A0,  NS12_3A1, NS12_3A2,  NS12_3B0,  NS12_3B1,  NS12_5A0, NS12_5A1,  NS12_5B0,*/ \
/*MT6177M*/   0x0300,     0x0500,    0x0300,  0x0400,    0x0300,   0x0200,    0x0000,    0x0200,    0x0300,  0x0200,     0x0000, \
/*MT6177M*//*  NS12_5B1   NS12_10A,   NS12_10B   NS12_15A,   NS12_15B   NS13_5_A0,  NS13_5_A1,   NS14_10A0,  NS14_10A1,  NS14_15A0, NS14_15A1, */  \
/*MT6177M*/    0x0200,    0x0400,     0x0200,    0x0400,     0x0300,    0x0000,     0x0000,      0x0300,     0x0100,     0x0300,    0x0100,   \
/*MT6177M*/          0,         0,         0,         0,       0,         0,        0,         0
/*MT6177M*/
/*MT6177M*//* ------------- AMPR Value -------------------*/
/*MT6177M*//* --------------(No DRDI) --------------------*/
/*MT6177M*/#define LTE_Band1_NS5_Set0                                                                                                        \
/*MT6177M*//*NS5_101520, ns5_15_A,     ns5_15_B0,  ns5_15_B1, ns5_15_B2, ns5_15_C0, ns5_15_C1, ns5_20_A, ns5_20_B0, ns5_20_B1, ns5_20_B2 */        \
/*MT6177M*/     0x0100,     0x0B00,      0x0000,    0x0300,     0x0500,   0x0500,     0x0100,     0x0B00,   0x0000,   0x0300,   0x0500,   \
/*MT6177M*//*  NS5_20_B3,  NS5_20_C0,  NS5_20_C1                                                                              */        \
/*MT6177M*/     0x0A00,     0x0500,      0x0100,    0,          0,         0,         0,          0,        0,        0,        0,   \
/*MT6177M*/          0,         0
/*MT6177M*/
/*MT6177M*/#define LTE_Band2_NS3_Set0                                                                                               \
/*MT6177M*//* NS3_03  ,    NS3_05,    NS3_10,    NS3_15,    NS3_20, VzW_NS3_03,  VzW_NS3_05, VzW_NS3_10,VzW_NS3_15,VzW_NS3_20*/           \
/*MT6177M*/     0x0100,    0x0100,    0x0100,    0x0100,    0x0100,    0x0000,    0x0000,    0x0000,    0x0000,    0x0000,         0,     \
/*MT6177M*/          0,         0,         0,         0,         0,         0,         0,         0,         0,         0,         0,   \
/*MT6177M*/          0,         0
/*MT6177M*/
/*MT6177M*/#define LTE_Band4_NS3_Set0                                                                                               \
/*MT6177M*//* NS3_03  ,    NS3_05,    NS3_10,    NS3_15,    NS3_20, VzW_NS3_03,  VzW_NS3_05, VzW_NS3_10,VzW_NS3_15,VzW_NS3_20*/           \
/*MT6177M*/     0x0100,    0x0100,    0x0100,    0x0100,    0x0100,    0x0000,    0x0000,    0x0000,    0x0000,    0x0000,         0,     \
/*MT6177M*/          0,         0,         0,         0,         0,         0,         0,         0,         0,         0,         0,   \
/*MT6177M*/          0,         0
/*MT6177M*/
/*MT6177M*/#define LTE_Band10_NS3_Set0                                                                                              \
/*MT6177M*//* NS3_03  ,    NS3_05,    NS3_10,    NS3_15,    NS3_20   V:   NS3_03    NS3_05    NS3_10    NS3_15    NS3_20   */             \
/*MT6177M*/     0x0100,    0x0100,    0x0100,    0x0100,    0x0100,       0x0100,   0x0100,   0x0100,   0x0100,   0x0100,         0,      \
/*MT6177M*/          0,         0,         0,         0,         0,         0,         0,         0,         0,         0,         0,   \
/*MT6177M*/          0,         0
/*MT6177M*/
/*MT6177M*/#define LTE_Band13_NS7_Set0                                                                                              \
/*MT6177M*//*NS7_10_A0, NS7_10_A1, NS7_10_B0, NS7_10_B1, NS7_10_C    V:  NS07_10_A  NS07_10_B    */                                       \
/*MT6177M*/     0x0800,    0x0C00,    0x0C00,    0x0600,    0x0300,      0x0400,    0x0300,         0,         0,         0,         0,   \
/*MT6177M*/          0,         0,         0,         0,         0,         0,         0,         0,         0,         0,         0,   \
/*MT6177M*/          0,         0
/*MT6177M*/
/*MT6177M*/#define LTE_Band19_NS8_Set0                                                                                                       \
/*MT6177M*//*  NS8_1015*/                                                                                                               \
/*MT6177M*/     0x0300,         0,         0,         0,         0,         0,         0,         0,         0,         0,         0,   \
/*MT6177M*/          0,         0,         0,         0,         0,         0,         0,         0,         0,         0,         0,   \
/*MT6177M*/          0,         0
/*MT6177M*/
/*MT6177M*/#define LTE_Band20_NS10_Set0                                                                                                      \
/*MT6177M*//*  NS10_15A, NS10_20A*/                                                                                                 \
/*MT6177M*/     0x0200,    0x0500,         0,         0,         0,         0,         0,         0,         0,         0,         0,   \
/*MT6177M*/          0,         0,         0,         0,         0,         0,         0,         0,         0,         0,         0,   \
/*MT6177M*/          0,         0
/*MT6177M*/
/*MT6177M*/#define LTE_Band21_NS9_Set0                                                                                                       \
/*MT6177M*//*NS9_10150, NS9_10151*/                                                                                                  \
/*MT6177M*/     0x0100,    0x0200,         0,         0,         0,         0,         0,         0,         0,         0,         0,   \
/*MT6177M*/          0,         0,         0,         0,         0,         0,         0,         0,         0,         0,         0,   \
/*MT6177M*/          0,         0
/*MT6177M*/
/*MT6177M*/#define LTE_Band23_NS3_Set0                                                                                            \
/*MT6177M*//* NS3_03  ,    NS3_05,    NS3_10,    NS3_15,    NS3_20,    VzW_NS3_03,VzW_NS3_05,VzW_NS3_10,VzW_NS3_15,VzW_NS3_20*/         \
/*MT6177M*/     0x0100,    0x0100,    0x0100,    0x0100,    0x0100,    0x0100,    0x0100,    0x0100,    0x0100,    0x0100,         0,   \
/*MT6177M*/          0,         0,         0,         0,         0,         0,         0,         0,         0,         0,         0,   \
/*MT6177M*/          0,         0
/*MT6177M*/
/*MT6177M*/#define LTE_Band23_NS11_Set0                                                                                                      \
/*MT6177M*//*  NS11_3A,   NS11_3B,   NS11_5A,  NS11_5B0,   NS11_5C,  NS11_10A, NS11_15A0,NS11_15A10,NS11_15A11,NS11_15A21,NS11_15A3 ,*/ \
/*MT6177M*/     0x0500,    0x0100,    0x0700,    0x0400,    0x0100,    0x0C00,    0x0F00,    0x0700,    0x0A00,    0x0600,    0x0F00,   \
/*MT6177M*//*NS11_15B0,NS11_15B10,NS11_15B2 , NS11_15B3, NS11_20A0,NS11_20A10,NS11_20A11,NS11_20A21,NS11_20A3*/                         \
/*MT6177M*/     0x0A00,    0x0600,    0x0200,    0x0680,    0x0F00,    0x0700,    0x0A00,    0x0700,    0x0F00,         0,         0,   \
/*MT6177M*/          0,         0
/*MT6177M*/
/*MT6177M*/#define LTE_Band23_NS20_Set0                                                                                                      \
/*MT6177M*//*  NS20_5A, NS20_5B00, NS20_5B01,  NS20_5B1, NS20_10A0,NS20_10A10,NS20_10A11, NS20_10A2, NS20_10B0, NS20_10B1,NS20_15A00,*/ \
/*MT6177M*/     0x1100,    0x0100,    0x0400,    0x0200,    0x1000,    0x0200,    0x0500,    0x0600,    0x0400,    0x0200,    0x0B00,   \
/*MT6177M*//*NS20_15A01,NS20_15A10,NS20_15A11, NS20_15A2, NS20_15A3, NS20_20A0,NS20_20A10,NS20_20A11, NS20_20A2, NS20_20A3, NS20_20A4,*/\
/*MT6177M*/     0x0600,    0x0100,    0x0700,    0x0500,    0x0600,    0x1100,    0x0C00,    0x0600,    0x0900,    0x0700,    0x0500,   \
/*MT6177M*//*NS20_20A5,*/                                                                                                               \
/*MT6177M*/     0x1000,         0
/*MT6177M*/
/*MT6177M*/#define LTE_Band25_NS3_Set0                                                                                            \
/*MT6177M*//* NS3_03  ,    NS3_05,    NS3_10,    NS3_15,    NS3_20,   VzW_NS3_03,VzW_NS3_05,VzW_NS3_10,VzW_NS3_15,VzW_NS3_20*/          \
/*MT6177M*/     0x0100,    0x0100,    0x0100,    0x0100,    0x0100,   0x0100,    0x0100,    0x0100,    0x0100,    0x0100,         0,    \
/*MT6177M*/          0,         0,         0,         0,         0,         0,         0,         0,         0,         0,         0,   \
/*MT6177M*/          0,         0
/*MT6177M*/
/*MT6177M*/#define LTE_Band26_NS121314_Set0                                                                                   \
/*MT6177M*//* NS12_1A0,  NS12_1A1,   NS12_1B,  NS12_3A,  NS12_3B,  NS12_5A,   NS12_5B,  NS12_10A,  NS12_10B, NS12_15A,  NS12_15B,*/ \
/*MT6177M*/     0x0300,    0x0600,    0x0300,    0x0400,  0x0300,    0x0500,   0x0300,    0x0400,    0x0200,    0x0400,  0x0300,  \
/*MT6177M*//*NS13_5_A0, NS13_5_A1   NS14_10A0, NS14_10A1, NS14_15A0, NS14_15A1*/                                                  \
/*MT6177M*/     0x0300,    0x0200,    0x0300,    0x0100,   0x0300,   0x0100,      0,         0,         0,         0,         0,   \
/*MT6177M*/          0,         0
/*MT6177M*/
/*MT6177M*/#define LTE_Band26_NS15_Set0                                                                                                      \
/*MT6177M*//* NS150_1C,  NS150_3A,  NS150_3B,  NS150_3C,  NS150_5A,  NS150_5B,  NS150_5C, NS150_10A, NS150_10B, NS150_10C, NS150_15A,*/ \
/*MT6177M*/     0x0300,    0x0400,    0x0400,    0x0900,    0x0400,    0x0500,    0x0900,    0x0400,    0x0600,    0x0900,    0x0400,   \
/*MT6177M*//*NS150_15B, NS150_15C,  NS151_5C, NS151_10A, NS151_10B, NS151_10C, NS151_15A, NS151_15B, NS151_15C*/                        \
/*MT6177M*/     0x0500,    0x0900,    0x0200,    0x0400,    0x0400,    0x0900,    0x0400,    0x0500,    0x0900,         0,         0,   \
/*MT6177M*/          0,         0
/*MT6177M*/
/*MT6177M*/#define LTE_Band27_NS16_Set0                                                                                                      \
/*MT6177M*//* NS160_3A,  NS160_3B,  NS160_5A,  NS160_5B,  NS160_5C,  NS160_5D, NS160_10A,NS160_10B0,NS160_10B1, NS160_10D, NS160_10E,*/ \
/*MT6177M*/     0x0200,    0x0100,    0x0500,    0x0100,    0x0200,    0x0300,    0x0500,    0x0300,    0x0700,    0x0300,    0x0100,   \
/*MT6177M*//* NS161_5A,  NS161_5B,  NS161_5C,NS161_10A0,NS161_10A1,NS161_10C,  NS161_10D, NS161_10E, NS162_10A, NS162_10B, NS162_10C,*/ \
/*MT6177M*/     0x0200,    0x0300,    0x0100,    0x0500,    0x0200,    0x0400,    0x0500,    0x0100,    0x0100,    0x0200,    0x0100,   \
/*MT6177M*//*NS162_10D*/                                                                                                                \
/*MT6177M*/     0x0300,         0
/*MT6177M*/
/*MT6177M*/#define LTE_Band28_NS18_Set0                                                                                           \
/*MT6177M*//*  NS18_5 , NS18_101520*/                                                                                                   \
/*MT6177M*/     0x0100,    0x0400,         0,         0,         0,         0,         0,         0,         0,         0,         0,   \
/*MT6177M*/          0,         0,         0,         0,         0,         0,         0,         0,         0,         0,         0,   \
/*MT6177M*/          0,         0
/*MT6177M*/
/*MT6177M*/#define LTE_Band30_NS21_Set0                                                                                           \
/*MT6177M*//*  NS21_10A,  NS21_10B,  NS21_10C,  NS21_10D, NS21_15A, NS21_15B,   NS21_15C,  NS21_15D,   NS21_20A, NS21_20B, , NS21_20C*/ \
/*MT6177M*/     0x0400,    0x0300,    0x0300,    0x0300,    0x0500,    0x0400,    0x0300,    0x0300,    0x0500,    0x0400,    0x0300,   \
/*MT6177M*//*  NS21_20D */                                                                                                              \
/*MT6177M*/     0x0300,         0,         0,         0,         0,         0,         0,         0,         0,         0,         0,   \
/*MT6177M*/          0,         0
/*MT6177M*/
/*MT6177M*/#define LTE_Band35_NS3_Set0                                                                                            \
/*MT6177M*//* NS3_03  ,    NS3_05,    NS3_10,    NS3_15,    NS3_20,    VzW_NS3_03,VzW_NS3_05,VzW_NS3_10,VzW_NS3_15,VzW_NS3_20*/         \
/*MT6177M*/     0x0100,    0x0100,    0x0100,    0x0100,    0x0100,    0x0100,    0x0100,    0x0100,    0x0100,    0x0100,         0,   \
/*MT6177M*/          0,         0,         0,         0,         0,         0,         0,         0,         0,         0,         0,   \
/*MT6177M*/          0,         0
/*MT6177M*/
/*MT6177M*/#define LTE_Band36_NS3_Set0                                                                                            \
/*MT6177M*//* NS3_03  ,    NS3_05,    NS3_10,    NS3_15,    NS3_20,    VzW_NS3_03,VzW_NS3_05,VzW_NS3_10,VzW_NS3_15,VzW_NS3_20*/         \
/*MT6177M*/     0x0100,    0x0100,    0x0100,    0x0100,    0x0100,    0x0100,    0x0100,    0x0100,    0x0100,    0x0100,         0,   \
/*MT6177M*/          0,         0,         0,         0,         0,         0,         0,         0,         0,         0,         0,   \
/*MT6177M*/          0,         0
/*MT6177M*/
/*MT6177M*/#define LTE_Band41_NS4_Set0                                                                                            \
/*MT6177M*//*  NS4_5_A0, NS4_5_A1,  NS4_5_B   NS4_10_A0_0, NS4_10_A0_1,NS4_10_A0_2,NS4_10_A1,NS4_10_A2,NS4_10_B,  NS4_15_A0_0,   NS4_15_A0_1 */             \
/*MT6177M*/     0x0200,    0x0000,    0x0000,    0x0300,    0x0100,    0x0200,    0x0100,    0x0000,    0x0000,    0x0300,         0x0100,   \
/*MT6177M*//*  NS4_15_A1, NS4_15_A2, NS4_15_B,NS4_20_A0_0, NS4_20_A0_1,NS4_20_A1, NS4_20_A2, NS4_20_B */                                     \
/*MT6177M*/     0x0100,     0x0000,   0x0000,    0x0300,    0x0100,    0x0100,    0x0000,    0x0000,         0,         0,         0,       \
/*MT6177M*/          0,         0
/*MT6177M*/
/*MT6177M*/#define LTE_Band42_NS22_Set0                                                                                                  \
/*MT6177M*//*   N22_10_A,  NS22_10_B, NS22_10_C,  NS22_10_D,  NS22_15_A, NS22_15_B, NS22_15_C, NS22_15_D, NS22_20_A,  NS22_20_B, NS22_20_C*/   \
/*MT6177M*/     0x0400,    0x0300,    0x0300,     0x0300,     0x0500,    0x0400,    0x0300,    0x0300,    0x0500,     0x0400,    0x0300,       \
/*MT6177M*//*   NS22_20_D */                                                                                                                   \
/*MT6177M*/     0x0300,         0,         0,         0,         0,         0,         0,         0,         0,         0,         0,          \
/*MT6177M*/          0,         0
/*MT6177M*/
/*MT6177M*/#define LTE_Band43_NS22_Set0                                                                                                  \
/*MT6177M*//*   N22_10_A,  NS22_10_B, NS22_10_C,  NS22_10_D,  NS22_15_A, NS22_15_B, NS22_15_C, NS22_15_D, NS22_20_A,  NS22_20_B, NS22_20_C*/   \
/*MT6177M*/     0x0400,    0x0300,    0x0300,     0x0300,     0x0500,    0x0400,    0x0300,    0x0300,    0x0500,     0x0400,    0x0300,       \
/*MT6177M*//*   NS22_20_D */                                                                                                                   \
/*MT6177M*/     0x0300,         0,         0,         0,         0,         0,         0,         0,         0,         0,         0,          \
/*MT6177M*/          0,         0
/*MT6177M*/
/*MT6177M*/#define LTE_Band44_NS19_Set0                                                                                           \
/*MT6177M*//*   NS19_10_B, NS19_15_A0,NS19_15_A1,NS19_15_B, NS19_20_A0,NS19_20_A1,NS19_20_B */                                          \
/*MT6177M*/     0x0100,    0x0200,    0x0300,    0x0200,    0x0200,    0x0300,    0x0200,         0,         0,         0,         0,   \
/*MT6177M*/          0,         0,         0,         0,         0,         0,         0,         0,         0,         0,         0,   \
/*MT6177M*/          0,         0
/*MT6177M*/
/*MT6177M*/
/*MT6177M*/#define LTE_Band65_NS5_Set0                                                                                               \
/*MT6177M*//*NS5_101520,    NS5_15_A,    NS5_15_B0,  NS5_15_B1, NS5_15_B2, NS5_15_C0,  NS5_15_C1,  NS5_20_A, NS5_20_B0, NS5_20_B1, NS5_20_B2 */    \
/*MT6177M*/     0x0100,     0x0B00,      0x0000,    0x0300,     0x0500,    0x0500,     0x0100,     0x0B00,   0x0000,    0x0300,    0x0500,         \
/*MT6177M*//*   NS5_20_B3,NS5_20_C0,  NS5_20_C1   */                                                                                       \
/*MT6177M*/     0x0A00,  0x0500,      0x0100,         0,         0,         0,         0,         0,         0,         0,         0,      \
/*MT6177M*/          0,         0
/*MT6177M*/
/*MT6177M*/
/*MT6177M*/#define LTE_Band65_NS24_Set0                                                                                                       \
/*MT6177M*//*   NS24_5,  NS24_10_A0,  NS24_10_A1,NS24_10_A2,NS24_10_A3,NS24_10_A4,NS24_10_B, NS24_10_C, NS24_15_A, NS24_15_B,      NS24_15_C */     \
/*MT6177M*/     0x0A00,  0x0200,      0x0200,    0x0100,    0x0300,    0x0100,    0x0900,    0x1100,    0x0200,    0x0800,         0x0700,   \
/*MT6177M*//*   NS24_15_D,NS24_20,  NS24_10_A1 */                                                                                            \
/*MT6177M*/     0x1100,         0x1100,         0,         0,         0,         0,         0,         0,         0,         0,         0,   \
/*MT6177M*/          0,         0
/*MT6177M*/
/*MT6177M*/#define LTE_Band65_NS25_Set0                                                                                                       \
/*MT6177M*//*   NS25_5_A,  NS25_5_B,  NS25_10_A0,NS25_10_A1,NS25_10_B0,NS25_10_B1,NS25_10_B2,NS25_10_B3,NS25_10_C0,NS25_10_C1,     NS25_10_C2 */             \
/*MT6177M*/     0x0500,    0x0200,    0x0100,    0x0100,    0x0100,    0x0500,    0x0500,    0x0100,    0x0A00,    0x0700,         0x0B00,   \
/*MT6177M*//*   NS25_15_A0,NS25_15_A1,NS25_15_A2,NS25_15_A3,NS25_15_B, NS25_20_A0, NS25_20_A1, NS25_20_A2, NS25_20_B */                      \
/*MT6177M*/     0x0400,    0x0300,    0x0100,    0x0100,    0x0D00,    0x0B00,     0x0B00,     0x0D00,     0x0D00,         0,         0,   \
/*MT6177M*/          0,    0
/*MT6177M*/
/*MT6177M*/#define LTE_Band66_NS3_Set0                                                                                            \
/*MT6177M*//* NS3_03  ,    NS3_05,    NS3_10,    NS3_15,    NS3_20,    VzW_NS3_03,VzW_NS3_05,VzW_NS3_10,VzW_NS3_15,VzW_NS3_20*/         \
/*MT6177M*/     0x0100,    0x0100,    0x0100,    0x0100,    0x0100,    0x0100,    0x0100,    0x0100,    0x0100,    0x0100,         0,   \
/*MT6177M*/          0,         0,         0,         0,         0,         0,         0,         0,         0,         0,         0,   \
/*MT6177M*/          0,         0
/*MT6177M*/
/*MT6177M*/#define LTE_Band68_NS26_Set0                                                                                            \
/*MT6177M*//*   NS26_5_A,  NS26_5_B,  NS26_10_A,  NS26_15_A */             \
/*MT6177M*/     0x0100,    0x0100,    0x0100,   0x0100,          0,         0,         0,         0,         0,         0,         0,   \
/*MT6177M*/          0,         0,         0,         0,         0,         0,         0,         0,         0,         0,         0,   \
/*MT6177M*/          0,         0
/*MT6177M*/
/*MT6177M*/#define LTE_Band252_NS4_Set0                                                                                           \
/*MT6177M*//*    NS4_5,  NS4_10_A,  NS4_10_B,  NS4_10_C,  NS4_15_A,  NS4_15_B,  NS4_15_C,  NS4_20_A,  NS4_20_B,  NS4_20_C */            \
/*MT6177M*/     0x0100,    0x0300,    0x0200,    0x0300,    0x0300,    0x0200,    0x0300,    0x0300,    0x0200,    0x0300,         0,   \
/*MT6177M*/          0,         0,         0,         0,         0,         0,         0,         0,         0,         0,         0,   \
/*MT6177M*/          0,         0
/*MT6177M*/
/*MT6177M*/#define LTE_Band255_NS4_Set0                                                                                           \
/*MT6177M*//*    NS4_5,  NS4_10_A,  NS4_10_B,  NS4_10_C,  NS4_15_A,  NS4_15_B,  NS4_15_C,  NS4_20_A,  NS4_20_B,  NS4_20_C*/             \
/*MT6177M*/     0x0100,    0x0300,    0x0200,    0x0300,    0x0300,    0x0200,    0x0300,    0x0300,    0x0200,    0x0300,         0,   \
/*MT6177M*/          0,         0,         0,         0,         0,         0,         0,         0,         0,         0,         0,   \
/*MT6177M*/          0,         0
/*MT6177M*/
/*MT6177M*/#define LTE_BandNone_NSLTE_BandNone_Set0                                                                               \
/*MT6177M*/          0,         0,         0,         0,         0,         0,         0,         0,         0,         0,         0,   \
/*MT6177M*/          0,         0,         0,         0,         0,         0,         0,         0,         0,         0,         0,   \
/*MT6177M*/          0,         0
/*MT6177M*/
/*MT6177M*/#define LTE_BandNone_NS1_Set0 LTE_BandNone_NSLTE_BandNone_Set0 /* N/A */
/*MT6177M*/#define LTE_Band3_NS1_Set0 LTE_BandNone_NSLTE_BandNone_Set0    /* N/A */
/*MT6177M*/#define LTE_Band5_NS1_Set0 LTE_BandNone_NSLTE_BandNone_Set0    /* N/A */
/*MT6177M*/#define LTE_Band6_NS1_Set0 LTE_BandNone_NSLTE_BandNone_Set0    /* N/A */
/*MT6177M*/#define LTE_Band7_NS1_Set0 LTE_BandNone_NSLTE_BandNone_Set0    /* N/A */
/*MT6177M*/#define LTE_Band8_NS1_Set0 LTE_BandNone_NSLTE_BandNone_Set0    /* N/A */
/*MT6177M*/#define LTE_Band9_NS1_Set0 LTE_BandNone_NSLTE_BandNone_Set0    /* N/A */
/*MT6177M*/#define LTE_Band11_NS1_Set0 LTE_BandNone_NSLTE_BandNone_Set0   /* N/A */
/*MT6177M*/#define LTE_Band12_NS6_Set0 LTE_BandNone_NSLTE_BandNone_Set0   /* N/A */
/*MT6177M*/#define LTE_Band13_NS6_Set0 LTE_BandNone_NSLTE_BandNone_Set0   /* N/A */
/*MT6177M*/#define LTE_Band14_NS6_Set0 LTE_BandNone_NSLTE_BandNone_Set0   /* N/A */
/*MT6177M*/#define LTE_Band17_NS6_Set0 LTE_BandNone_NSLTE_BandNone_Set0   /* N/A */
/*MT6177M*/#define LTE_Band18_NS1_Set0 LTE_BandNone_NSLTE_BandNone_Set0   /* N/A */
/*MT6177M*/#define LTE_Band22_NS1_Set0 LTE_BandNone_NSLTE_BandNone_Set0   /* N/A */
/*MT6177M*/#define LTE_Band26_NS12_Set0 LTE_Band26_NS121314_Set0          /* redefined */
/*MT6177M*/#define LTE_Band28_NS17_Set0 LTE_BandNone_NSLTE_BandNone_Set0  /* N/A */
/*MT6177M*/#define LTE_Band29_NS1_Set0 LTE_BandNone_NSLTE_BandNone_Set0   /* N/A */
/*MT6177M*/#define LTE_Band32_NS1_Set0 LTE_BandNone_NSLTE_BandNone_Set0   /* N/A */
/*MT6177M*/#define LTE_Band38_NS1_Set0 LTE_BandNone_NSLTE_BandNone_Set0   /* N/A */
/*MT6177M*/#define LTE_Band39_NS1_Set0 LTE_BandNone_NSLTE_BandNone_Set0   /* N/A */
/*MT6177M*/#define LTE_Band40_NS1_Set0 LTE_BandNone_NSLTE_BandNone_Set0   /* N/A */
/*MT6177M*/#define LTE_Band42_NS1_Set0 LTE_BandNone_NSLTE_BandNone_Set0   /* N/A */
/*MT6177M*/#define LTE_Band46_NS1_Set0 LTE_BandNone_NSLTE_BandNone_Set0   /* N/A */
/*MT6177M*/#define LTE_Band66_NS1_Set0 LTE_BandNone_NSLTE_BandNone_Set0   /* N/A */
/*MT6177M*/#define LTE_Band71_NS1_Set0 LTE_BandNone_NSLTE_BandNone_Set0   /* N/A */
/*MT6177M*/#define LTE_Band252_NS1_Set0 LTE_BandNone_NSLTE_BandNone_Set0  /* N/A */
/*MT6177M*/#define LTE_Band255_NS1_Set0 LTE_BandNone_NSLTE_BandNone_Set0  /* N/A */
/*MT6177M*/
/*MT6177M*//*AMPR_NS07_VZW = LSB 0, AMPR_NS03_VZW = LSB 1*/
/*MT6177M*/#define AMPR_VZW_SUPPORT_Set0 0x0000
/*MT6177M*/
/*MT6177M*/
/*MT6177M*/#define AMPR_SPRINT_SUPPORT_Set0 0x0000
/*MT6177M*//* ------------- AMPR Value intra-band CA -------------------*/
/*MT6177M*//* --------------(No DRDI) --------------------*/
/*MT6177M*/#define LTE_NS1_CA_Set0                                                                                                            \
/*MT6177M*//*NS1_100100_A, NS1_100100_B, NS1_100100_C, NS1_7575_A0, NS1_7575_A1, ,NS1_7575_B, ,NS1_7575_C,                               */         \
/*MT6177M*/     0x0C00,     0x0600,      0x0500,       0x0B00,      0x0600,       0x0500,       0x0200,     0x0000,   0x0000,   0x0000,   0x0000,   \
/*MT6177M*/     0,          0,           0,            0,           0,            0,            0,          0,        0,        0,        0,        \
/*MT6177M*/     0,          0
/*MT6177M*/
/*MT6177M*/#define LTE_NS2_CA_Set0                                                                                                            \
/*MT6177M*//*NS2_100100_A, NS2_100100_B, NS2_100100_C, NS2_100100_D,NS2_100100_E, NS2_7575_A, NS2_7575_B, NS2_7575_C,NS2_7575_D,NS2_7575_E  */      \
/*MT6177M*/     0x0400,     0x0300,      0x0300,       0x0600,      0x0A00,       0x0200,       0x0300,     0x0500,   0x0600,   0x0200,   0,        \
/*MT6177M*/     0,          0,           0,            0,           0,            0,            0,          0,        0,        0,        0,        \
/*MT6177M*/     0,          0
/*MT6177M*/
/*MT6177M*/#define LTE_NS3_CA_Set0                                                                                                                \
/*MT6177M*//*NS3_100100_A, NS3_100100_B, NS3_100100_C, NS3_100100_D,NS3_100100_E, NS3_7575_A, NS3_7575_B, NS3_7575_C, NS3_7575_D, NS3_7575_E  */        \
/*MT6177M*/     0x0A00,     0x0600,      0x0100,       0x0400,      0x0700,       0x0A00,       0x0A00,     0x0400,     0x0200,     0x0500,   0x0800,   \
/*MT6177M*/     0x0600,     0,           0,            0,           0,            0,            0,          0,          0,          0,        0,        \
/*MT6177M*/     0,          0
/*MT6177M*/
/*MT6177M*/#define LTE_NS4_CA_Set0                                                                                                                \
/*MT6177M*//*   NS4_50100_QPSK_A, NS4_50100_QPSK_B, NS4_7575_QPSK_A,  NS4_7575_QPSK_B,  NS4_10075_QPSK_A, NS4_10075_QPSK_B, NS4_100100_QPSK_A, NS4_100100_QPSK_B, NS4_50100_QAM_A, NS4_50100_QAM_B, NS4_7575_QAM_A  */   \
/*MT6177M*/     0x0400,           0x0300,           0x0400,           0x0400,           0x0400,           0x0300,           0x0300,            0x0300,            0x0400,          0x0400,          0x0400,              \
/*MT6177M*//*   NS4_50100_QPSK_A, NS4_50100_QPSK_B, NS4_7575_QPSK_A,  NS4_7575_QPSK_B,  NS4_10075_QPSK_A, NS4_10075_QPSK_B, NS4_100100_QPSK_A, NS4_100100_QPSK_B,                                                   */   \
/*MT6177M*/     0x0400,           0x0400,           0x0400,           0x0400,           0x0400,           0x0400,           0x0400,            0x0400,          0,          0,        0,                                 \
/*MT6177M*/     0,          0
/*MT6177M*/
/*MT6177M*/#define LTE_NS5_CA_Set0                                                                                                                \
/*MT6177M*//*NS5_100100_A, NS5_100100_B, NS5_100100_C, NS5_100100_D,NS5_7575_A,  NS5_7575_B,  NS5_7575_C, NS5_7575_D, NS5_7575_E               */       \
/*MT6177M*/     0x0500,     0x0200,      0x0600,       0x0B00,      0x0200,       0x0500,       0x0500,     0x0200,     0x0600,     0,        0,        \
/*MT6177M*/     0,          0,           0,            0,           0,            0,            0,          0,          0,          0,        0,        \
/*MT6177M*/     0,          0
/*MT6177M*/
/*MT6177M*/#define LTE_NS6_CA_Set0                                                                                                                        \
/*MT6177M*//*NS6_100100_A, NS6_100100_B, NS6_100100_C, NS6_100100_D,NS6_100100_E,  NS6_7575_A,  NS6_7575_B, NS6_7575_C, NS6_7575_D  NS6_7575_E  NS6_50100_A */  \
/*MT6177M*/     0x0400,     0x0200,      0x0300,       0x0500,      0x0A00,       0x0500,       0x0200,     0x0200,     0x0600,     0x0A00,        0x0500,      \
/*MT6177M*//*, NS6_50100_B, NS6_50100_C, NS6_50100_D, NS6_50100_E,  NS6_75100_A,  NS6_75100_B, NS6_75100_C, NS6_75100_D  NS6_75100_E                        */  \
/*MT6177M*/     0x0200,     0x0300,       0x0600,      0x0A00,       0x0500,       0x0200,     0x0300,      0x0600,    0x0A00,     0,          0,              \
/*MT6177M*/     0,          0
/*MT6177M*/
/*MT6177M*/#define LTE_NS7_CA_Set0                                                                                                                          \
/*MT6177M*//*NS7_75100_A, NS7_75100_B, NS7_75100_C, NS7_75100_D,NS7_75100_E,  NS7_50100_A,  NS7_50100_B0, NS7_50100_B1, NS7_50100_C  NS7_50100_D  NS7_50100_E */  \
/*MT6177M*/     0x0B00,     0x0300,      0x0700,       0x0200,      0x0500,       0x0B00,       0x0300,     0x0600,     0x0500,     0x0200,        0x0500,        \
/*MT6177M*//*, NS7_25100_A0,NS7_25100_A1,NS7_25100_B, NS7_25100_C                                                                                             */  \
/*MT6177M*/     0x0600,     0x0400,      0x0300,      0x0300,       0,            0,            0,          0,          0,          0,             0,             \
/*MT6177M*/     0,          0
/*MT6177M*/
/*MT6177M*/#define LTE_NS8_CA_Set0                                                                                                                          \
/*MT6177M*/     0,          0,           0,           0,            0,            0,            0,          0,          0,          0,             0,        \
/*MT6177M*/     0,          0,           0,           0,            0,            0,            0,          0,          0,          0,             0,             \
/*MT6177M*/     0,          0
/*MT6177M*/
/*MT6177M*/ /*--------------------------------*/
/*MT6177M*/ /* Temperature Compensation Param */
/*MT6177M*/ /*--------------------------------*/
/*MT6177M*/
/*MT6177M*/ /*--------------------------------*/
/*MT6177M*/ /* TX Power Offset for HPUE       */
/*MT6177M*/ /*--------------------------------*/
/*MT6177M*/
/*MT6177M*/#define LTE_HPUE_TPOS_ENA_Set0            0
/*MT6177M*/
/*MT6177M*/#define HPUE_LTE_Band41_PC2_TPOS_Set0     0
/*MT6177M*/#define HPUE_LTE_Band41_PC3_TPOS_Set0     0
/*MT6177M*/
/*MT6177M*/#define HPUE_LTE_BandNone_PC2_TPOS_Set0   0
/*MT6177M*/#define HPUE_LTE_BandNone_PC3_TPOS_Set0   0
/*MT6177M*/

#endif /* _LTE_CUSTOM_RF_MPR_Set0_H_ */
