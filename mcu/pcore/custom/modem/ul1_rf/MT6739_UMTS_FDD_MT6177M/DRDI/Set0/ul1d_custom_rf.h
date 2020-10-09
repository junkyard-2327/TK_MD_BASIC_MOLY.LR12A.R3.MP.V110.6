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
 *	ul1d_custom_rf.h
 *
 * Project:
 * --------
 *   MT6176
 *
 * Description:
 * ------------
 *   MT6176 UMTS FDD RF with ES1B
 *
 * Author:
 * -------
 * -------
 *

 *******************************************************************************/
#ifndef  _UL1D_CUSTOM_RF_Set0_H_
#define  _UL1D_CUSTOM_RF_Set0_H_
/* ------------------------------------------------------------------------- */
#if !defined(MT6177M_RF)
   #error "rf files mismatch with compile option!"
#endif

#include "ul1d_custom_mipi.h"

/*MT6176*/
/*MT6176*/ #define  PA_SECTION_Set0   3
/*MT6176*/
/*MT6176*/ /*--------------------------------------------------------*/
/*MT6176*/ /*   Define MIPI Tool Version Number                      */
/*MT6176*/ /*--------------------------------------------------------*/
/*MT6176*/ #define  FDD_MIPI_TOOL_VER_Set0    0
/*MT6176*/
/*MT6176*/ /*--------------------------------------------------------*/
/*MT6176*/ /*   Event Timing Define                                  */
/*MT6176*/ /*--------------------------------------------------------*/
/*MT6176*/ #define  TC_PR1_Set0               MICROSECOND_TO_CHIP(200)
/*MT6176*/ #define  TC_PR2_Set0               MICROSECOND_TO_CHIP(100)
/*MT6176*/ #define  TC_PR2B_Set0              MICROSECOND_TO_CHIP( 50)
/*MT6176*/ #define  TC_PR3_Set0               MICROSECOND_TO_CHIP( 20)
/*MT6176*/
/*MT6176*/ #define  TC_PT1_Set0               MICROSECOND_TO_CHIP(200)
/*MT6176*/ #define  TC_PT2_Set0               MICROSECOND_TO_CHIP(100)
/*MT6176*/ #define  TC_PT2B_Set0              MICROSECOND_TO_CHIP( 50)
/*MT6176*/ #define  TC_PT3_Set0               MICROSECOND_TO_CHIP( 10)
/*MT6176*/
/*MT6176*/
/*MT6176*/ /* the following parameter is chip resolution */
/*MT6176*/ #define MAX_OFFSET_Set0        (24*4) //this value must be equal to max of the following 4 offset value
/*MT6176*/ /* Set VM timing same as PGABSI_OFFSET1 */
/*MT6176*/ // Rich modification for the vm_offset as 37
/*MT6176*/ #define VM_OFFSET_Set0         (42)//(33)   //54 //63 chips
/*MT6176*/ #define VBIAS_OFFSET_Set0      (59)   //59 chips
/*MT6176*/ #define DC2DC_OFFSET_Set0      (24*4)
/*MT6176*/ #define VGA_OFFSET_Set0        (24*4)
/*MT6176*/
/*MT6176*/ /*------------------------------------------------------*/
/*MT6176*/ /*   define  BPI data for MT6176                        */
/*MT6176*/ /*------------------------------------------------------*/
/*MT6176*/ /*    PRCB : bit  BPI   pin function                    */
/*MT6176*/ /*            0    0    Reserved                        */
/*MT6176*/ /*            1    1    Reserved                        */
/*MT6176*/ /*            2    2    Reserved                        */
/*MT6176*/ /*            3    3    Reserved                        */
/*MT6176*/ /*            4    4    Reserved                        */
/*MT6176*/ /*            5    5    Reserved                        */
/*MT6176*/ /*            6    6    W_PA_B5_EN                      */
/*MT6176*/ /*            7    7    W_PA_B13_EN                     */
/*MT6176*/ /*            8    8    W_PA_B40_EN                     */
/*MT6176*/ /*            9    9    W_PA_B1_EN                      */
/*MT6176*/ /*            10   10   Reserved                        */
/*MT6176*/ /*            11   11   Reserved                        */
/*MT6176*/ /*            12   12   Reserved                        */
/*MT6176*/ /*            13   13   Reserved                        */
/*MT6176*/ /*            14   14   Reserved                        */
/*MT6176*/ /*            15   15   DRX_V1                          */
/*MT6176*/ /*            16   16   DRX_V2                          */
/*MT6176*/ /*            17   17   DRX_V3                          */
/*MT6176*/ /*            18   18   W_PA_B2_EN                      */
/*MT6176*/ /*            19   19   SP3T_V1                         */
/*MT6176*/ /*            20   20   SP3T_V2                         */
/*MT6176*/ /*            21   21   ASM_VCTRL_B/Main_V2             */
/*MT6176*/ /*            22   22   ASM_VCTRL_A/Main_V1             */
/*MT6176*/ /*            23   23   ASM_VCTRL_C/Main_V3             */
/*MT6176*/ /*            24   24   WG_GGE_PA_ENABLE                */
/*MT6176*/ /*            25   25   LTE_RX                          */
/*MT6176*/ /*            26   26   LTE_RX                          */
/*MT6176*/ /*            27   27   LTE_RX                          */
/*MT6176*/ /*            28   28   LTE_RX                          */
/*MT6176*/ /*            29   29   LTE_RX                          */
/*MT6176*/ /*            30   30   LTE_RX                          */
/*MT6176*/ /*------------------------------------------------------*/
/*MT6176*/ /*-----------------------------------------------------------------------*/
/*MT6176*/ /* RX Main BPI Data Setting.   */
/*MT6176*/ /*-----------------------------------------------------------------------*/
/*MT6176*/ //* --------------------- PDATA_BANDNone Start ---------------------------*/
/*MT6176*/ #define    PDATA_UMTSBandNone_PR1_Set0    0x00008000
/*MT6176*/ #define    PDATA_UMTSBandNone_PR2_Set0    0x00008000
/*MT6176*/ #define    PDATA_UMTSBandNone_PR2B_Set0   0x00008000
/*MT6176*/ #define    PDATA_UMTSBandNone_PR3_Set0    0x00000000
/*MT6176*/ #define    PDATA_UMTSBandNone_PT1_Set0    0x00008000
/*MT6176*/ #define    PDATA_UMTSBandNone_PT2_Set0    0x00008000
/*MT6176*/ #define    PDATA_UMTSBandNone_PT2B_Set0   0x00008000
/*MT6176*/ #define    PDATA_UMTSBandNone_PT3_Set0    0x00000000
/*MT6176*/ /* --------------------- PDATA_BANDNone End ------------------------------*/
/*MT6176*/ //* --------------------- PDATA_BAND1 Start ---------------------------*/
/*MT6176*/ #define    PDATA_UMTSBand1_PR1_Set0      0x00008030 //PDET //ANT
/*MT6176*/ #define    PDATA_UMTSBand1_PR2_Set0      0x00008030 //PDET //ANT
/*MT6176*/ #define    PDATA_UMTSBand1_PR2B_Set0     0x00008030 //PDET //ANT
/*MT6176*/ #define    PDATA_UMTSBand1_PR3_Set0      0x00000000
/*MT6176*/ #define    PDATA_UMTSBand1_PT1_Set0      PDATA_UMTSBand1_PR2_Set0
/*MT6176*/ #define    PDATA_UMTSBand1_PT2_Set0      PDATA_UMTSBand1_PR2_Set0
/*MT6176*/ #define    PDATA_UMTSBand1_PT2B_Set0     PDATA_UMTSBand1_PR2_Set0
/*MT6176*/ #define    PDATA_UMTSBand1_PT3_Set0      0x00000000
/*MT6176*/ /* --------------------- PDATA_BAND1 End ------------------------------*/
/*MT6176*/ /* --------------------- PDATA_BAND2 Start ----------------------------*/
/*MT6176*/ #define    PDATA_UMTSBand2_PR1_Set0      0x00008300 //PDET //ANT
/*MT6176*/ #define    PDATA_UMTSBand2_PR2_Set0      0x00008300 //PDET //ANT
/*MT6176*/ #define    PDATA_UMTSBand2_PR2B_Set0     0x00008300 //PDET //ANT
/*MT6176*/ #define    PDATA_UMTSBand2_PR3_Set0      0x00000000
/*MT6176*/ #define    PDATA_UMTSBand2_PT1_Set0      PDATA_UMTSBand2_PR2_Set0
/*MT6176*/ #define    PDATA_UMTSBand2_PT2_Set0      PDATA_UMTSBand2_PR2_Set0
/*MT6176*/ #define    PDATA_UMTSBand2_PT2B_Set0     PDATA_UMTSBand2_PR2_Set0
/*MT6176*/ #define    PDATA_UMTSBand2_PT3_Set0      0x00000000
/*MT6176*/ /* --------------------- PDATA_BAND2 End ------------------------------*/
/*MT6176*/ /* --------------------- PDATA_BAND4 Start ---------------------------*/
/*MT6176*/ #define    PDATA_UMTSBand4_PR1_Set0      0x00008000 //PDET //ANT
/*MT6176*/ #define    PDATA_UMTSBand4_PR2_Set0      0x00008000 //PDET //ANT
/*MT6176*/ #define    PDATA_UMTSBand4_PR2B_Set0     0x00008000 //PDET //ANT
/*MT6176*/ #define    PDATA_UMTSBand4_PR3_Set0      0x00000000
/*MT6176*/ #define    PDATA_UMTSBand4_PT1_Set0      PDATA_UMTSBand4_PR2_Set0
/*MT6176*/ #define    PDATA_UMTSBand4_PT2_Set0      PDATA_UMTSBand4_PR2_Set0
/*MT6176*/ #define    PDATA_UMTSBand4_PT2B_Set0     PDATA_UMTSBand4_PR2_Set0
/*MT6176*/ #define    PDATA_UMTSBand4_PT3_Set0      0x00000000
/*MT6176*/ /* --------------------- PDATA_BAND4 End ------------------------------*/
/*MT6176*/ /* --------------------- PDATA_BAND5 Start ----------------------------*/
/*MT6176*/ #define    PDATA_UMTSBand5_PR1_Set0      0x0000A000 //ANT
/*MT6176*/ #define    PDATA_UMTSBand5_PR2_Set0      0x0000A000 //ANT
/*MT6176*/ #define    PDATA_UMTSBand5_PR2B_Set0     0x0000A000 //PDET //ANT
/*MT6176*/ #define    PDATA_UMTSBand5_PR3_Set0      0x00000000
/*MT6176*/ #define    PDATA_UMTSBand5_PT1_Set0      0x0000A000
/*MT6176*/ #define    PDATA_UMTSBand5_PT2_Set0      0x0000A000
/*MT6176*/ #define    PDATA_UMTSBand5_PT2B_Set0     0x0000A000
/*MT6176*/ #define    PDATA_UMTSBand5_PT3_Set0      0x00000000
/*MT6176*/ /* --------------------- PDATA_BAND5 End ------------------------------*/
/*MT6176*/ /* --------------------- PDATA_BAND6 Start ----------------------------*/
/*MT6176*/ #define    PDATA_UMTSBand6_PR1_Set0      PDATA_UMTSBand5_PR1_Set0
/*MT6176*/ #define    PDATA_UMTSBand6_PR2_Set0      PDATA_UMTSBand5_PR2_Set0
/*MT6176*/ #define    PDATA_UMTSBand6_PR2B_Set0     PDATA_UMTSBand5_PR2B_Set0
/*MT6176*/ #define    PDATA_UMTSBand6_PR3_Set0      PDATA_UMTSBand5_PR3_Set0
/*MT6176*/ #define    PDATA_UMTSBand6_PT1_Set0      PDATA_UMTSBand5_PT1_Set0
/*MT6176*/ #define    PDATA_UMTSBand6_PT2_Set0      PDATA_UMTSBand5_PT2_Set0
/*MT6176*/ #define    PDATA_UMTSBand6_PT2B_Set0     PDATA_UMTSBand5_PT2B_Set0
/*MT6176*/ #define    PDATA_UMTSBand6_PT3_Set0      PDATA_UMTSBand5_PT3_Set0
/*MT6176*/ /* --------------------- PDATA_BAND6 End ------------------------------*/
/*MT6176*/ /* --------------------- PDATA_BAND8 Start ----------------------------*/
/*MT6176*/ #define    PDATA_UMTSBand8_PR1_Set0      0x00008008 //ANT         
/*MT6176*/ #define    PDATA_UMTSBand8_PR2_Set0      0x00008008 //ANT         
/*MT6176*/ #define    PDATA_UMTSBand8_PR2B_Set0     0x00008008 //PDET //ANT  
/*MT6176*/ #define    PDATA_UMTSBand8_PR3_Set0      0x00000000
/*MT6176*/ #define    PDATA_UMTSBand8_PT1_Set0      PDATA_UMTSBand8_PR2_Set0
/*MT6176*/ #define    PDATA_UMTSBand8_PT2_Set0      PDATA_UMTSBand8_PR2_Set0
/*MT6176*/ #define    PDATA_UMTSBand8_PT2B_Set0     PDATA_UMTSBand8_PR2_Set0
/*MT6176*/ #define    PDATA_UMTSBand8_PT3_Set0      0x00000000
/*MT6176*/ /* --------------------- PDATA_BAND8 End ------------------------------*/
/*MT6176*/ /* --------------------- PDATA_BAND19 Start ----------------------------*/
/*MT6176*/ #define    PDATA_UMTSBand19_PR1_Set0      PDATA_UMTSBand5_PR1_Set0
/*MT6176*/ #define    PDATA_UMTSBand19_PR2_Set0      PDATA_UMTSBand5_PR2_Set0
/*MT6176*/ #define    PDATA_UMTSBand19_PR2B_Set0     PDATA_UMTSBand5_PR2B_Set0
/*MT6176*/ #define    PDATA_UMTSBand19_PR3_Set0      PDATA_UMTSBand5_PR3_Set0
/*MT6176*/ #define    PDATA_UMTSBand19_PT1_Set0      PDATA_UMTSBand5_PT1_Set0
/*MT6176*/ #define    PDATA_UMTSBand19_PT2_Set0      PDATA_UMTSBand5_PT2_Set0
/*MT6176*/ #define    PDATA_UMTSBand19_PT2B_Set0     PDATA_UMTSBand5_PT2B_Set0
/*MT6176*/ #define    PDATA_UMTSBand19_PT3_Set0      PDATA_UMTSBand5_PT3_Set0
/*MT6176*/ /* --------------------- PDATA_BAND19 End ------------------------------*/
/*MT6176*/ 
/*MT6176*/ #if IS_3G_RXD_FE_CONTROL_SUPPORT
/*MT6176*/ /*-----------------------------------------------------------------------*/
/*MT6176*/ /* RX Diversity BPI Data Setting.   */
/*MT6176*/ /*-----------------------------------------------------------------------*/
/*MT6176*/ //* --------------------- PDATA_BANDNone RXD Start ---------------------------*/
/*MT6176*/ #define    PDATA2_UMTSBandNone_PR1_Set0    0x00008000
/*MT6176*/ #define    PDATA2_UMTSBandNone_PR2_Set0    0x00008000
/*MT6176*/ #define    PDATA2_UMTSBandNone_PR2B_Set0   0x00008000
/*MT6176*/ #define    PDATA2_UMTSBandNone_PR3_Set0    0x00000000
/*MT6176*/ /* --------------------- PDATA_BANDNone RXD End ------------------------------*/
/*MT6176*/ //* --------------------- PDATA_BAND1 RXD Start ---------------------------*/
/*MT6176*/ #define    PDATA2_UMTSBand1_PR1_Set0      0x000080C0     
/*MT6176*/ #define    PDATA2_UMTSBand1_PR2_Set0      0x000080C0     
/*MT6176*/ #define    PDATA2_UMTSBand1_PR2B_Set0     0x000080C0 
/*MT6176*/ #define    PDATA2_UMTSBand1_PR3_Set0      0x00000000     
/*MT6176*/ /* --------------------- PDATA_BAND1 RXD End ------------------------------*/
/*MT6176*/ /* --------------------- PDATA_BAND2 RXD Start ----------------------------*/
/*MT6176*/ #define    PDATA2_UMTSBand2_PR1_Set0      0x00008C00     
/*MT6176*/ #define    PDATA2_UMTSBand2_PR2_Set0      0x00008C00     
/*MT6176*/ #define    PDATA2_UMTSBand2_PR2B_Set0     0x00008C00
/*MT6176*/ #define    PDATA2_UMTSBand2_PR3_Set0      0x00000000     
/*MT6176*/ /* --------------------- PDATA_BAND2 RXD End ------------------------------*/
/*MT6176*/ /* --------------------- PDATA_BAND4 RXD Start ---------------------------*/
/*MT6176*/ #define    PDATA2_UMTSBand4_PR1_Set0      0x000080C0     
/*MT6176*/ #define    PDATA2_UMTSBand4_PR2_Set0      0x000080C0     
/*MT6176*/ #define    PDATA2_UMTSBand4_PR2B_Set0     0x000080C0
/*MT6176*/ #define    PDATA2_UMTSBand4_PR3_Set0      0x00000000     
/*MT6176*/ /* --------------------- PDATA_BAND4 RXD End ------------------------------*/
/*MT6176*/ /* --------------------- PDATA_BAND5 RXD Start ----------------------------*/
/*MT6176*/ #define    PDATA2_UMTSBand5_PR1_Set0      0x0000A000     
/*MT6176*/ #define    PDATA2_UMTSBand5_PR2_Set0      0x0000A000     
/*MT6176*/ #define    PDATA2_UMTSBand5_PR2B_Set0     0x0000A000
/*MT6176*/ #define    PDATA2_UMTSBand5_PR3_Set0      0x00000000     
/*MT6176*/ /* --------------------- PDATA_BAND5 RXD End ------------------------------*/
/*MT6176*/ /* --------------------- PDATA_BAND6 RXD Start ----------------------------*/
/*MT6176*/ #define    PDATA2_UMTSBand6_PR1_Set0      PDATA2_UMTSBand5_PR1_Set0 
/*MT6176*/ #define    PDATA2_UMTSBand6_PR2_Set0      PDATA2_UMTSBand5_PR2_Set0 
/*MT6176*/ #define    PDATA2_UMTSBand6_PR2B_Set0     PDATA2_UMTSBand5_PR2B_Set0
/*MT6176*/ #define    PDATA2_UMTSBand6_PR3_Set0      PDATA2_UMTSBand5_PR3_Set0 
/*MT6176*/ /* --------------------- PDATA_BAND6 RXD End ------------------------------*/
/*MT6176*/ /* --------------------- PDATA_BAND8 RXD Start ----------------------------*/
/*MT6176*/ #define    PDATA2_UMTSBand8_PR1_Set0      0x00008008     
/*MT6176*/ #define    PDATA2_UMTSBand8_PR2_Set0      0x00008008     
/*MT6176*/ #define    PDATA2_UMTSBand8_PR2B_Set0     0x00008008
/*MT6176*/ #define    PDATA2_UMTSBand8_PR3_Set0      0x00000000     
/*MT6176*/ /* --------------------- PDATA_BAND8 RXD End ------------------------------*/
/*MT6176*/ /* --------------------- PDATA_BAND19 RXD Start ----------------------------*/
/*MT6176*/ #define    PDATA2_UMTSBand19_PR1_Set0      PDATA2_UMTSBand5_PR1_Set0
/*MT6176*/ #define    PDATA2_UMTSBand19_PR2_Set0      PDATA2_UMTSBand5_PR2_Set0
/*MT6176*/ #define    PDATA2_UMTSBand19_PR2B_Set0     PDATA2_UMTSBand5_PR2B_Set0
/*MT6176*/ #define    PDATA2_UMTSBand19_PR3_Set0      PDATA2_UMTSBand5_PR3_Set0
/*MT6176*/ /* --------------------- PDATA_BAND19 RXD End ------------------------------*/
/*MT6176*/ #endif
/*MT6176*/ /***************************************************/
/*MT6176*/ /*  RX & RXD IO Port Definition & supported freq range  */
/*MT6176*/ /*  HB1-HB3 => freq: 1805MHz ~ 2690MHz                  */
/*MT6176*/ /*  MB1,MB2 => freq: 1475MHz ~ 2170MHz                  */
/*MT6176*/ /*  LB1-LB3 => freq: 734MHz ~ 960MHz                    */
/*MT6176*/ /***************************************************/
/*MT6176*/ /*-----------------------------------------------------------------------*/
/*MT6176*/ /* RX. LNA_PRX1 ~ LNA_PRX14 is configurable, depending on front-end circuits layout  */
/*MT6176*/ /*-----------------------------------------------------------------------*/
/*MT6176*/ #define    UMTSBandNone_CHANNEL_SEL_Set0    NON_USED_BAND
/*MT6176*/ #define    UMTSBand1_CHANNEL_SEL_Set0       LNA_PRX2
/*MT6176*/ #define    UMTSBand2_CHANNEL_SEL_Set0       LNA_PRX7
/*MT6176*/ #define    UMTSBand3_CHANNEL_SEL_Set0       NON_USED_BAND
/*MT6176*/ #define    UMTSBand4_CHANNEL_SEL_Set0       LNA_PRX3
/*MT6176*/ #define    UMTSBand5_CHANNEL_SEL_Set0       LNA_PRX5
/*MT6176*/ #define    UMTSBand6_CHANNEL_SEL_Set0       NON_USED_BAND
/*MT6176*/ #define    UMTSBand8_CHANNEL_SEL_Set0       LNA_PRX10
/*MT6176*/ #define    UMTSBand9_CHANNEL_SEL_Set0       NON_USED_BAND
/*MT6176*/ #define    UMTSBand10_CHANNEL_SEL_Set0      NON_USED_BAND
/*MT6176*/ #define    UMTSBand11_CHANNEL_SEL_Set0      NON_USED_BAND
/*MT6176*/ #define    UMTSBand19_CHANNEL_SEL_Set0      NON_USED_BAND
/*MT6176*/
/*MT6176*/ /*------------------------------------------------------------------------*/
/*MT6176*/ /* RXD. LNA_DRX1 ~ LNA_DRX14 is configurable, depending on front-end circuits layout */
/*MT6176*/ /*------------------------------------------------------------------------*/
/*MT6176*/ #define    UMTSBandNone_CHANNEL2_SEL_Set0   NON_USED_BAND
/*MT6176*/ #define    UMTSBand1_CHANNEL2_SEL_Set0      LNA_DRX1
/*MT6176*/ #define    UMTSBand2_CHANNEL2_SEL_Set0      LNA_DRX2
/*MT6176*/ #define    UMTSBand3_CHANNEL2_SEL_Set0      NON_USED_BAND
/*MT6176*/ #define    UMTSBand4_CHANNEL2_SEL_Set0      LNA_DRX1
/*MT6176*/ #define    UMTSBand5_CHANNEL2_SEL_Set0      LNA_DRX8
/*MT6176*/ #define    UMTSBand6_CHANNEL2_SEL_Set0      NON_USED_BAND
/*MT6176*/ #define    UMTSBand8_CHANNEL2_SEL_Set0      LNA_DRX9
/*MT6176*/ #define    UMTSBand9_CHANNEL2_SEL_Set0      NON_USED_BAND
/*MT6176*/ #define    UMTSBand10_CHANNEL2_SEL_Set0     NON_USED_BAND
/*MT6176*/ #define    UMTSBand11_CHANNEL2_SEL_Set0     NON_USED_BAND
/*MT6176*/ #define    UMTSBand19_CHANNEL2_SEL_Set0     NON_USED_BAND
/*MT6176*/
/*MT6176*/ /****************************************************/
/*MT6176*/ /*  TX IO Port Definition & supported freq range        */
/*MT6176*/ /*  TX_HB1~HB2 => freq: 1710MHz ~ 2690MHz                  */
/*MT6176*/ /*  TX_MB1~MB4 => freq: 1400MHz ~ 2025MHz                  */
/*MT6176*/ /*  TX_LB1~LB4 => freq: 699MHz ~ 915MHz                    */
/*MT6176*/ /****************************************************/
/*MT6176*/ #define    UMTSBandNone_OUTPUT_SEL_Set0     NON_USED_BAND
/*MT6176*/ #define    UMTSBand1_OUTPUT_SEL_Set0        UL1_TX_MB1
/*MT6176*/ #define    UMTSBand2_OUTPUT_SEL_Set0        UL1_TX_MB1
/*MT6176*/ #define    UMTSBand3_OUTPUT_SEL_Set0        NON_USED_BAND
/*MT6176*/ #define    UMTSBand4_OUTPUT_SEL_Set0        UL1_TX_MB1
/*MT6176*/ #define    UMTSBand5_OUTPUT_SEL_Set0        UL1_TX_LB2
/*MT6176*/ #define    UMTSBand6_OUTPUT_SEL_Set0        NON_USED_BAND
/*MT6176*/ #define    UMTSBand8_OUTPUT_SEL_Set0        UL1_TX_LB2
/*MT6176*/ #define    UMTSBand9_OUTPUT_SEL_Set0        NON_USED_BAND
/*MT6176*/ #define    UMTSBand10_OUTPUT_SEL_Set0       NON_USED_BAND
/*MT6176*/ #define    UMTSBand11_OUTPUT_SEL_Set0       NON_USED_BAND
/*MT6176*/ #define    UMTSBand19_OUTPUT_SEL_Set0       NON_USED_BAND
/*MT6176*/
/*MT6176*/ /************************************************************/
/*MT6176*/ /* For using the V-battery as instead setting               */
/*MT6176*/ /************************************************************/
/*MT6176*/ #define    PMU_PASETTING_Set0         KAL_TRUE
/*MT6176*/ /************************************************************/
/*MT6176*/ /* For RXD single test, customer may use the RXD only,      */
/*MT6176*/ /* need to write RX_MAIN_PATH_ON & RX_DIVERSITY_PATH_ON to  */
/*MT6176*/ /* 0xFFFFFFFF after test                               */
/*MT6176*/ /************************************************************/
/*MT6176*/ #define    RX_DIVERSITY_ALWAYS_ON_Set0 KAL_FALSE
/*MT6176*/ /************************************************************/
/*MT6176*/ /* For PA drift compensation by different band's PA         */
/*MT6176*/ /************************************************************/
/*MT6176*/ #define    PA_DIRFT_COMPENSATION_Set0 0x00000000
/*MT6176*/
/*MT6176*/ /************************************************************/
/*MT6176*/ /* For MPR back off for SAR& lowering PA temerature& UPA/DPA*/
/*MT6176*/ /* PAPR concern                                             */
/*MT6176*/ /************************************************************/
/*MT6176*/ #define    MPR_BACK_OFF_HSDPA_BAND1_Set0   MPRSetting2
/*MT6176*/ #define    MPR_BACK_OFF_HSDPA_BAND2_Set0   MPRSetting2
/*MT6176*/ #define    MPR_BACK_OFF_HSDPA_BAND3_Set0   MPRSetting2
/*MT6176*/ #define    MPR_BACK_OFF_HSDPA_BAND4_Set0   MPRSetting2
/*MT6176*/ #define    MPR_BACK_OFF_HSDPA_BAND5_Set0   MPRSetting2
/*MT6176*/ #define    MPR_BACK_OFF_HSDPA_BAND6_Set0   MPRSetting2
/*MT6176*/ #define    MPR_BACK_OFF_HSDPA_BAND8_Set0   MPRSetting2
/*MT6176*/ #define    MPR_BACK_OFF_HSDPA_BAND9_Set0   MPRSetting2
/*MT6176*/ #define    MPR_BACK_OFF_HSDPA_BAND10_Set0  MPRSetting2
/*MT6176*/ #define    MPR_BACK_OFF_HSDPA_BAND11_Set0  MPRSetting2
/*MT6176*/ #define    MPR_BACK_OFF_HSDPA_BAND19_Set0  MPRSetting2
/*MT6176*/ #define    MPR_BACK_OFF_HSUPA_BAND1_Set0   MPRSetting2
/*MT6176*/ #define    MPR_BACK_OFF_HSUPA_BAND2_Set0   MPRSetting2
/*MT6176*/ #define    MPR_BACK_OFF_HSUPA_BAND3_Set0   MPRSetting2
/*MT6176*/ #define    MPR_BACK_OFF_HSUPA_BAND4_Set0   MPRSetting2
/*MT6176*/ #define    MPR_BACK_OFF_HSUPA_BAND5_Set0   MPRSetting2
/*MT6176*/ #define    MPR_BACK_OFF_HSUPA_BAND6_Set0   MPRSetting2
/*MT6176*/ #define    MPR_BACK_OFF_HSUPA_BAND8_Set0   MPRSetting2
/*MT6176*/ #define    MPR_BACK_OFF_HSUPA_BAND9_Set0   MPRSetting2
/*MT6176*/ #define    MPR_BACK_OFF_HSUPA_BAND10_Set0  MPRSetting2
/*MT6176*/ #define    MPR_BACK_OFF_HSUPA_BAND11_Set0  MPRSetting2
/*MT6176*/ #define    MPR_BACK_OFF_HSUPA_BAND19_Set0  MPRSetting2
/*MT6176*/
/*MT6176*/ /************************************************************/
/*MT6176*/ /* At MT6589+MT6320PMIC, Vrf18_1(MD1) can use bulk/LDO mode */
/*MT6176*/ /* take bulk mode as default value*/
/*MT6176*/ /************************************************************/
/*MT6176*/ #define    ULTRA_LOW_COST_EN_Set0 0
/*MT6176*/
/*MT6176*/ /************************************************************/
/*MT6176*/ /* Band5 & Band6 support simultaneously flag,*/
/*MT6176*/ /* If flag enable then RX_BAND_INDICATOR just fill in Band5*/
/*MT6176*/ /************************************************************/
/*MT6176*/ #define    BAND5_AND_BAND6_INDICATOR_Set0 0
/*MT6176*/ /************************************************************/
/*MT6176*/ /* Band5 & Band19 support simultaneously flag,*/
/*MT6176*/ /* If flag enable then RX_BAND_INDICATOR just fill in Band5*/
/*MT6176*/ /************************************************************/
/*MT6176*/#if IS_3G_B5_AND_B19_INDICATOR_SUPPORT
/*MT6176*/ #define    BAND5_AND_BAND19_INDICATOR_Set0  0
/*MT6176*/ #define    DISABLE_B5_INDICATOR_Set0        0
/*MT6176*/#endif



#if IS_3G_MPR_EXTEND_SUPPORT

#define  MPR_BACK_OFF_HSUPA_BAND1_SUB_1_Set0   MPRSetting_SUB_0
#define  MPR_BACK_OFF_HSUPA_BAND2_SUB_1_Set0   MPRSetting_SUB_0
#define  MPR_BACK_OFF_HSUPA_BAND3_SUB_1_Set0   MPRSetting_SUB_0
#define  MPR_BACK_OFF_HSUPA_BAND4_SUB_1_Set0   MPRSetting_SUB_0
#define  MPR_BACK_OFF_HSUPA_BAND5_SUB_1_Set0   MPRSetting_SUB_0
#define  MPR_BACK_OFF_HSUPA_BAND6_SUB_1_Set0   MPRSetting_SUB_0
#define  MPR_BACK_OFF_HSUPA_BAND7_SUB_1_Set0   MPRSetting_SUB_0
#define  MPR_BACK_OFF_HSUPA_BAND8_SUB_1_Set0   MPRSetting_SUB_0
#define  MPR_BACK_OFF_HSUPA_BAND9_SUB_1_Set0   MPRSetting_SUB_0
#define  MPR_BACK_OFF_HSUPA_BAND10_SUB_1_Set0  MPRSetting_SUB_0
#define  MPR_BACK_OFF_HSUPA_BAND11_SUB_1_Set0  MPRSetting_SUB_0
#define  MPR_BACK_OFF_HSUPA_BAND12_SUB_1_Set0  MPRSetting_SUB_0
#define  MPR_BACK_OFF_HSUPA_BAND13_SUB_1_Set0  MPRSetting_SUB_0
#define  MPR_BACK_OFF_HSUPA_BAND14_SUB_1_Set0  MPRSetting_SUB_0
#define  MPR_BACK_OFF_HSUPA_BAND15_SUB_1_Set0  MPRSetting_SUB_0
#define  MPR_BACK_OFF_HSUPA_BAND16_SUB_1_Set0  MPRSetting_SUB_0
#define  MPR_BACK_OFF_HSUPA_BAND17_SUB_1_Set0  MPRSetting_SUB_0
#define  MPR_BACK_OFF_HSUPA_BAND18_SUB_1_Set0  MPRSetting_SUB_0
#define  MPR_BACK_OFF_HSUPA_BAND19_SUB_1_Set0  MPRSetting_SUB_0
#define  MPR_BACK_OFF_HSUPA_BAND20_SUB_1_Set0  MPRSetting_SUB_0

#define  MPR_BACK_OFF_HSUPA_BAND1_SUB_2_Set0   MPRSetting_SUB_0
#define  MPR_BACK_OFF_HSUPA_BAND2_SUB_2_Set0   MPRSetting_SUB_0
#define  MPR_BACK_OFF_HSUPA_BAND3_SUB_2_Set0   MPRSetting_SUB_0
#define  MPR_BACK_OFF_HSUPA_BAND4_SUB_2_Set0   MPRSetting_SUB_0
#define  MPR_BACK_OFF_HSUPA_BAND5_SUB_2_Set0   MPRSetting_SUB_0
#define  MPR_BACK_OFF_HSUPA_BAND6_SUB_2_Set0   MPRSetting_SUB_0
#define  MPR_BACK_OFF_HSUPA_BAND7_SUB_2_Set0   MPRSetting_SUB_0
#define  MPR_BACK_OFF_HSUPA_BAND8_SUB_2_Set0   MPRSetting_SUB_0
#define  MPR_BACK_OFF_HSUPA_BAND9_SUB_2_Set0   MPRSetting_SUB_0
#define  MPR_BACK_OFF_HSUPA_BAND10_SUB_2_Set0  MPRSetting_SUB_0
#define  MPR_BACK_OFF_HSUPA_BAND11_SUB_2_Set0  MPRSetting_SUB_0
#define  MPR_BACK_OFF_HSUPA_BAND12_SUB_2_Set0  MPRSetting_SUB_0
#define  MPR_BACK_OFF_HSUPA_BAND13_SUB_2_Set0  MPRSetting_SUB_0
#define  MPR_BACK_OFF_HSUPA_BAND14_SUB_2_Set0  MPRSetting_SUB_0
#define  MPR_BACK_OFF_HSUPA_BAND15_SUB_2_Set0  MPRSetting_SUB_0
#define  MPR_BACK_OFF_HSUPA_BAND16_SUB_2_Set0  MPRSetting_SUB_0
#define  MPR_BACK_OFF_HSUPA_BAND17_SUB_2_Set0  MPRSetting_SUB_0
#define  MPR_BACK_OFF_HSUPA_BAND18_SUB_2_Set0  MPRSetting_SUB_0
#define  MPR_BACK_OFF_HSUPA_BAND19_SUB_2_Set0  MPRSetting_SUB_0
#define  MPR_BACK_OFF_HSUPA_BAND20_SUB_2_Set0  MPRSetting_SUB_0

#define  MPR_BACK_OFF_HSUPA_BAND1_SUB_3_Set0   MPRSetting_SUB_0
#define  MPR_BACK_OFF_HSUPA_BAND2_SUB_3_Set0   MPRSetting_SUB_0
#define  MPR_BACK_OFF_HSUPA_BAND3_SUB_3_Set0   MPRSetting_SUB_0
#define  MPR_BACK_OFF_HSUPA_BAND4_SUB_3_Set0   MPRSetting_SUB_0
#define  MPR_BACK_OFF_HSUPA_BAND5_SUB_3_Set0   MPRSetting_SUB_0
#define  MPR_BACK_OFF_HSUPA_BAND6_SUB_3_Set0   MPRSetting_SUB_0
#define  MPR_BACK_OFF_HSUPA_BAND7_SUB_3_Set0   MPRSetting_SUB_0
#define  MPR_BACK_OFF_HSUPA_BAND8_SUB_3_Set0   MPRSetting_SUB_0
#define  MPR_BACK_OFF_HSUPA_BAND9_SUB_3_Set0   MPRSetting_SUB_0
#define  MPR_BACK_OFF_HSUPA_BAND10_SUB_3_Set0  MPRSetting_SUB_0
#define  MPR_BACK_OFF_HSUPA_BAND11_SUB_3_Set0  MPRSetting_SUB_0
#define  MPR_BACK_OFF_HSUPA_BAND12_SUB_3_Set0  MPRSetting_SUB_0
#define  MPR_BACK_OFF_HSUPA_BAND13_SUB_3_Set0  MPRSetting_SUB_0
#define  MPR_BACK_OFF_HSUPA_BAND14_SUB_3_Set0  MPRSetting_SUB_0
#define  MPR_BACK_OFF_HSUPA_BAND15_SUB_3_Set0  MPRSetting_SUB_0
#define  MPR_BACK_OFF_HSUPA_BAND16_SUB_3_Set0  MPRSetting_SUB_0
#define  MPR_BACK_OFF_HSUPA_BAND17_SUB_3_Set0  MPRSetting_SUB_0
#define  MPR_BACK_OFF_HSUPA_BAND18_SUB_3_Set0  MPRSetting_SUB_0
#define  MPR_BACK_OFF_HSUPA_BAND19_SUB_3_Set0  MPRSetting_SUB_0
#define  MPR_BACK_OFF_HSUPA_BAND20_SUB_3_Set0  MPRSetting_SUB_0

#define  MPR_BACK_OFF_HSUPA_BAND1_SUB_4_Set0   MPRSetting_SUB_0
#define  MPR_BACK_OFF_HSUPA_BAND2_SUB_4_Set0   MPRSetting_SUB_0
#define  MPR_BACK_OFF_HSUPA_BAND3_SUB_4_Set0   MPRSetting_SUB_0
#define  MPR_BACK_OFF_HSUPA_BAND4_SUB_4_Set0   MPRSetting_SUB_0
#define  MPR_BACK_OFF_HSUPA_BAND5_SUB_4_Set0   MPRSetting_SUB_0
#define  MPR_BACK_OFF_HSUPA_BAND6_SUB_4_Set0   MPRSetting_SUB_0
#define  MPR_BACK_OFF_HSUPA_BAND7_SUB_4_Set0   MPRSetting_SUB_0
#define  MPR_BACK_OFF_HSUPA_BAND8_SUB_4_Set0   MPRSetting_SUB_0
#define  MPR_BACK_OFF_HSUPA_BAND9_SUB_4_Set0   MPRSetting_SUB_0
#define  MPR_BACK_OFF_HSUPA_BAND10_SUB_4_Set0  MPRSetting_SUB_0
#define  MPR_BACK_OFF_HSUPA_BAND11_SUB_4_Set0  MPRSetting_SUB_0
#define  MPR_BACK_OFF_HSUPA_BAND12_SUB_4_Set0  MPRSetting_SUB_0
#define  MPR_BACK_OFF_HSUPA_BAND13_SUB_4_Set0  MPRSetting_SUB_0
#define  MPR_BACK_OFF_HSUPA_BAND14_SUB_4_Set0  MPRSetting_SUB_0
#define  MPR_BACK_OFF_HSUPA_BAND15_SUB_4_Set0  MPRSetting_SUB_0
#define  MPR_BACK_OFF_HSUPA_BAND16_SUB_4_Set0  MPRSetting_SUB_0
#define  MPR_BACK_OFF_HSUPA_BAND17_SUB_4_Set0  MPRSetting_SUB_0
#define  MPR_BACK_OFF_HSUPA_BAND18_SUB_4_Set0  MPRSetting_SUB_0
#define  MPR_BACK_OFF_HSUPA_BAND19_SUB_4_Set0  MPRSetting_SUB_0
#define  MPR_BACK_OFF_HSUPA_BAND20_SUB_4_Set0  MPRSetting_SUB_0

#define  MPR_BACK_OFF_HSUPA_BAND1_SUB_5_Set0   MPRSetting_SUB_0
#define  MPR_BACK_OFF_HSUPA_BAND2_SUB_5_Set0   MPRSetting_SUB_0
#define  MPR_BACK_OFF_HSUPA_BAND3_SUB_5_Set0   MPRSetting_SUB_0
#define  MPR_BACK_OFF_HSUPA_BAND4_SUB_5_Set0   MPRSetting_SUB_0
#define  MPR_BACK_OFF_HSUPA_BAND5_SUB_5_Set0   MPRSetting_SUB_0
#define  MPR_BACK_OFF_HSUPA_BAND6_SUB_5_Set0   MPRSetting_SUB_0
#define  MPR_BACK_OFF_HSUPA_BAND7_SUB_5_Set0   MPRSetting_SUB_0
#define  MPR_BACK_OFF_HSUPA_BAND8_SUB_5_Set0   MPRSetting_SUB_0
#define  MPR_BACK_OFF_HSUPA_BAND9_SUB_5_Set0   MPRSetting_SUB_0
#define  MPR_BACK_OFF_HSUPA_BAND10_SUB_5_Set0  MPRSetting_SUB_0
#define  MPR_BACK_OFF_HSUPA_BAND11_SUB_5_Set0  MPRSetting_SUB_0
#define  MPR_BACK_OFF_HSUPA_BAND12_SUB_5_Set0  MPRSetting_SUB_0
#define  MPR_BACK_OFF_HSUPA_BAND13_SUB_5_Set0  MPRSetting_SUB_0
#define  MPR_BACK_OFF_HSUPA_BAND14_SUB_5_Set0  MPRSetting_SUB_0
#define  MPR_BACK_OFF_HSUPA_BAND15_SUB_5_Set0  MPRSetting_SUB_0
#define  MPR_BACK_OFF_HSUPA_BAND16_SUB_5_Set0  MPRSetting_SUB_0
#define  MPR_BACK_OFF_HSUPA_BAND17_SUB_5_Set0  MPRSetting_SUB_0
#define  MPR_BACK_OFF_HSUPA_BAND18_SUB_5_Set0  MPRSetting_SUB_0
#define  MPR_BACK_OFF_HSUPA_BAND19_SUB_5_Set0  MPRSetting_SUB_0
#define  MPR_BACK_OFF_HSUPA_BAND20_SUB_5_Set0  MPRSetting_SUB_0

#define  R6_MPR_SUB_EN_Set0   KAL_FALSE
#endif/*IS_3G_MPR_EXTEND_SUPPORT*/


/************************************************************/
/*      eLNA IDX setting                                    */
/************************************************************/
/* ------------------- RX eLNA Idx setting -------------------- */
#define  UMTSBand1_RX_eLNA_IDX_Set0       MML1_FE_ELNA1
#define  UMTSBand2_RX_eLNA_IDX_Set0       MML1_FE_ELNA2
#define  UMTSBand3_RX_eLNA_IDX_Set0       MML1_FE_ELNA_NONE
#define  UMTSBand4_RX_eLNA_IDX_Set0       MML1_FE_ELNA_NONE
#define  UMTSBand5_RX_eLNA_IDX_Set0       MML1_FE_ELNA_NONE
#define  UMTSBand6_RX_eLNA_IDX_Set0       MML1_FE_ELNA_NONE
#define  UMTSBand7_RX_eLNA_IDX_Set0       MML1_FE_ELNA_NONE
#define  UMTSBand8_RX_eLNA_IDX_Set0       MML1_FE_ELNA_NONE
#define  UMTSBand9_RX_eLNA_IDX_Set0       MML1_FE_ELNA_NONE
#define  UMTSBand10_RX_eLNA_IDX_Set0      MML1_FE_ELNA_NONE
#define  UMTSBand11_RX_eLNA_IDX_Set0      MML1_FE_ELNA_NONE
#define  UMTSBand19_RX_eLNA_IDX_Set0      MML1_FE_ELNA_NONE

/* ------------------- RXD eLNA Idx setting ------------------- */
#define  UMTSBand1_RXD_eLNA_IDX_Set0      MML1_FE_ELNA3
#define  UMTSBand2_RXD_eLNA_IDX_Set0      MML1_FE_ELNA6
#define  UMTSBand3_RXD_eLNA_IDX_Set0      MML1_FE_ELNA_NONE
#define  UMTSBand4_RXD_eLNA_IDX_Set0      MML1_FE_ELNA3
#define  UMTSBand5_RXD_eLNA_IDX_Set0      MML1_FE_ELNA_NONE
#define  UMTSBand6_RXD_eLNA_IDX_Set0      MML1_FE_ELNA_NONE
#define  UMTSBand7_RXD_eLNA_IDX_Set0      MML1_FE_ELNA_NONE
#define  UMTSBand8_RXD_eLNA_IDX_Set0      MML1_FE_ELNA_NONE
#define  UMTSBand9_RXD_eLNA_IDX_Set0      MML1_FE_ELNA_NONE
#define  UMTSBand10_RXD_eLNA_IDX_Set0     MML1_FE_ELNA_NONE
#define  UMTSBand11_RXD_eLNA_IDX_Set0     MML1_FE_ELNA_NONE
#define  UMTSBand19_RXD_eLNA_IDX_Set0     MML1_FE_ELNA_NONE

#if(IS_3G_RX_POWER_OFFSET_SUPPORT)
/************************************************************/
/*                    For RX Power Offset Feature                         */
/************************************************************/
/* ------------------- RX Power Offset setting -------------------- */
#define RPO_3G_ENABLE_Set0                       0
#define RPO_3G_META_ENABLE_Set0                  0
#endif

#if(IS_3G_FDD_INTERFERENCE_CHECK_SUPPORT)
/* --------------------------- Group A setting ---------------------------- */    
#define UMTS_INTERFERENCE_FREQ_TABLE_A0_Set0     {FREQ_INVALID, FREQ_INVALID}
#define UMTS_INTERFERENCE_FREQ_TABLE_A1_Set0     {FREQ_INVALID, FREQ_INVALID}
#define UMTS_INTERFERENCE_FREQ_TABLE_A2_Set0     {FREQ_INVALID, FREQ_INVALID} 
#define UMTS_INTERFERENCE_FREQ_TABLE_A3_Set0     {FREQ_INVALID, FREQ_INVALID}
#define UMTS_INTERFERENCE_FREQ_TABLE_A4_Set0     {FREQ_INVALID, FREQ_INVALID}
#define UMTS_INTERFERENCE_FREQ_TABLE_A5_Set0     {FREQ_INVALID, FREQ_INVALID}
#define UMTS_INTERFERENCE_FREQ_TABLE_A6_Set0     {FREQ_INVALID, FREQ_INVALID}
#define UMTS_INTERFERENCE_FREQ_TABLE_A7_Set0     {FREQ_INVALID, FREQ_INVALID}

/* --------------------------- Group B setting ---------------------------- */    
#define UMTS_INTERFERENCE_FREQ_TABLE_B0_Set0     {FREQ_INVALID, FREQ_INVALID}
#define UMTS_INTERFERENCE_FREQ_TABLE_B1_Set0     {FREQ_INVALID, FREQ_INVALID}
#define UMTS_INTERFERENCE_FREQ_TABLE_B2_Set0     {FREQ_INVALID, FREQ_INVALID} 
#define UMTS_INTERFERENCE_FREQ_TABLE_B3_Set0     {FREQ_INVALID, FREQ_INVALID}
#define UMTS_INTERFERENCE_FREQ_TABLE_B4_Set0     {FREQ_INVALID, FREQ_INVALID}
#define UMTS_INTERFERENCE_FREQ_TABLE_B5_Set0     {FREQ_INVALID, FREQ_INVALID}
#define UMTS_INTERFERENCE_FREQ_TABLE_B6_Set0     {FREQ_INVALID, FREQ_INVALID}
#define UMTS_INTERFERENCE_FREQ_TABLE_B7_Set0     {FREQ_INVALID, FREQ_INVALID}
#endif

/*MT6176*/ #define    RX_BAND_INDICATOR_0_Set0 UMTSBand1
/*MT6176*/ #define    RX_BAND_INDICATOR_1_Set0 UMTSBand2
/*MT6176*/ #define    RX_BAND_INDICATOR_2_Set0 UMTSBand4
/*MT6176*/ #define    RX_BAND_INDICATOR_3_Set0 UMTSBand5
/*MT6176*/ #define    RX_BAND_INDICATOR_4_Set0 UMTSBand8
/*============================================================================== */

#endif

