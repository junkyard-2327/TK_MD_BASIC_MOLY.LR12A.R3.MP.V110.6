/******************************************************************************
*  Modification Notice:
*  --------------------------
*  This software is modified by MediaTek Inc. and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2005
*
*  BY OPENING THIS FILE, BUYER HEREBY UNEQUIVOCALLY ACKNOWLEDGES AND AGREES
*  THAT THE SOFTWARE/FIRMWARE AND ITS DOCUMENTATIONS ("MEDIATEK SOFTWARE")
*  RECEIVED FROM MEDIATEK AND/OR ITS REPRESENTATIVES ARE PROVIDED TO BUYER ON
*  AN "AS-IS" BASIS ONLY. MEDIATEK EXPRESSLY DISCLAIMS ANY AND ALL WARRANTIES,
*  EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE IMPLIED WARRANTIES OF
*  MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE OR NONINFRINGEMENT.
*  NEITHER DOES MEDIATEK PROVIDE ANY WARRANTY WHATSOEVER WITH RESPECT TO THE
*  SOFTWARE OF ANY THIRD PARTY WHICH MAY BE USED BY, INCORPORATED IN, OR
*  SUPPLIED WITH THE MEDIATEK SOFTWARE, AND BUYER AGREES TO LOOK ONLY TO SUCH
*  THIRD PARTY FOR ANY WARRANTY CLAIM RELATING THERETO. MEDIATEK SHALL ALSO
*  NOT BE RESPONSIBLE FOR ANY MEDIATEK SOFTWARE RELEASES MADE TO BUYER'S
*  SPECIFICATION OR TO CONFORM TO A PARTICULAR STANDARD OR OPEN FORUM.
*
*  BUYER'S SOLE AND EXCLUSIVE REMEDY AND MEDIATEK'S ENTIRE AND CUMULATIVE
*  LIABILITY WITH RESPECT TO THE MEDIATEK SOFTWARE RELEASED HEREUNDER WILL BE,
*  AT MEDIATEK'S OPTION, TO REVISE OR REPLACE THE MEDIATEK SOFTWARE AT ISSUE,
*  OR REFUND ANY SOFTWARE LICENSE FEES OR SERVICE CHARGE PAID BY BUYER TO
*  MEDIATEK FOR SUCH MEDIATEK SOFTWARE AT ISSUE.
*
*  THE TRANSACTION CONTEMPLATED HEREUNDER SHALL BE CONSTRUED IN ACCORDANCE
*  WITH THE LAWS OF THE STATE OF CALIFORNIA, USA, EXCLUDING ITS CONFLICT OF
*  LAWS PRINCIPLES.  ANY DISPUTES, CONTROVERSIES OR CLAIMS ARISING THEREOF AND
*  RELATED THERETO SHALL BE SETTLED BY ARBITRATION IN SAN FRANCISCO, CA, UNDER
*  THE RULES OF THE INTERNATIONAL CHAMBER OF COMMERCE (ICC).
*
*******************************************************************************/

/*==============================================================================
 *             HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 *
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================*/
/* Doxygen Group Header ****************************************************//**
 * @addtogroup EL1D_RF_CUSTOM_DATA_MT6177L
 * @{
 ******************************************************************************/
/***************************************************************************//**
 * @file       el1d_rf_custom_data_mt6177L.h
 * @author     LY Chen (MTK04356)
 * @date       2014.12.16
 * @brief      EL1D RF Custom data for MT6177L
 * @details    provide definition for MT6177L
 ******************************************************************************/

#ifndef __EL1D_RF_CUSTOM_DATA_MT6177L_H__
#define __EL1D_RF_CUSTOM_DATA_MT6177L_H__

/*******************************************************************************
 * #include
 ******************************************************************************/


/*******************************************************************************
 * #define
 ******************************************************************************/

#if defined(MT6177L_RF)
#else
   #ifdef __EL1D_ESL__
// bypass RF CID check
   #else
#error "rf files mismatch with compile option!"
   #endif
#endif
/*--------------------------------------------------------*/
/***************************************
 * Compile Option
 **************************************/
#define IS_TX_TXDFE_CHECK_TIMING               1
#define IS_RF_RX_BURST_SETTLE_TIME_SHORTEN     0   ///< shorten RF settle time for TDD T to R case


/***************************************
 * Settle Time definition
 **************************************/
/** TRX propagation delay */
#define TX_PROPOGATION_DELAY                  MICROSECOND_TO_26M(0)
#define RXDFE_RAMPING_TIME                    MICROSECOND_TO_26M(0)


#define FDD_RX_WARMUP_SETTLE_TIME             (125 + 12)                 //us, RX1/RX2 CW needs 0.2*2*13=5.2us, Tx: 3.4us, margin=3.4 -> use 12us
#define FDD_RX_BURST_SETTLE_TIME              ( 17 + 0 + 2)              //us, margin=5us, CW needs 2us -> use 7us
#define FDD_TX_WARMUP_SETTLE_TIME             (110 + 12)                 //us, RX1/RX2 CW needs 0.2*2*13=5.2us, Tx: 3.4us, margin=3.4 -> use 12us
#if IS_TX_TXDFE_CHECK_TIMING
#define FDD_TX_BURST_SETTLE_TIME              (20 + 0 + 4)               //us, margin=4us
#else
#define FDD_TX_BURST_SETTLE_TIME              (20 + 0 + 4)               //us, margin=4us
#endif
#define TDD_TRX_WARMUP_SETTLE_TIME            (115 + 10*2)               //us, as TxWarmup settle time, acctually, RxWarmup needs 70us, 15us*2: RX1 and RX2
#define TDD_TRX_STX_CW_TIME                   (10)                       //us, STX CW for TDD will be earlier than SRX CW

#if IS_RF_RX_BURST_SETTLE_TIME_SHORTEN
#define TDD_RX_BURST_SETTLE_TIME              (15)
#else
#define TDD_RX_BURST_SETTLE_TIME               FDD_RX_BURST_SETTLE_TIME   // align FDD RX settle time
#endif
#define TDD_TX_BURST_SETTLE_TIME               FDD_TX_BURST_SETTLE_TIME   // align FDD TX settle time


/***************************************
 * RF timing margin definition (us): use to setup global offset and calculate
 * the time difference between global offset and event time
 **************************************/
#define RF_CP_LEN_MARGIN                    (4)
#define RF_RX_ON_EVENT_MARGIN               (150)
#define RF_RX_OFF_EVENT_MARGIN              (0)
#define RF_RX_AFC_BWSW_EVENT_MARGIN         (4)
#define RF_TX_ON_EVENT_MARGIN               (150)
#define RF_TX_OFF_EVENT_MARGIN              (0)
#define RF_TX_BWSW_EVENT_MARGIN             (6)
#define RF_TPC_EVENT_MARGIN                 (40)
#define RF_TPC_POWER_RAMPING_MAGRIN         (20)
#if IS_RF_TPC_UL_TPUT_ENHANCE_SUPPORT
#define RF_TPC_PAVCC_SETTLING_MARGIN        (17)
#else
#define RF_TPC_PAVCC_SETTLING_MARGIN        (25)
#endif

/***************************************
 * Start form the end of CP(refer to CP End),
 * end after the boundary of subframe (in 26MHz)
 **************************************/

/** BSI/BPI event timing (26MHz) */
#define RF_RX_START_CNT                     MICROSECOND_TO_26M(RF_CP_LEN_MARGIN + RF_RX_ON_EVENT_MARGIN      )
#define RF_RX_END_CNT                       MICROSECOND_TO_26M(               0 + RF_RX_OFF_EVENT_MARGIN     )
#define RF_RX_AFC_BWSW_START_CNT            MICROSECOND_TO_26M(RF_CP_LEN_MARGIN + RF_RX_AFC_BWSW_EVENT_MARGIN)
#define RF_RX_ON_AFC_DELTA_CNT              MICROSECOND_TO_26M(RF_RX_ON_EVENT_MARGIN - RF_RX_AFC_BWSW_EVENT_MARGIN)  // align RxOn global offset
#define RF_TX_START_CNT                     MICROSECOND_TO_26M(RF_CP_LEN_MARGIN + RF_TX_ON_EVENT_MARGIN  )
#define RF_TX_END_CNT                       MICROSECOND_TO_26M(               0 + RF_TX_OFF_EVENT_MARGIN )
#define RF_TX_BWSW_CNT                      MICROSECOND_TO_26M(RF_CP_LEN_MARGIN + RF_TX_BWSW_EVENT_MARGIN)
#define RF_TPC_START_CNT                    MICROSECOND_TO_26M(RF_CP_LEN_MARGIN + RF_TPC_EVENT_MARGIN    )

#define RF_TPC_HALF_SF_TIME                 MICROSECOND_TO_26M(500)
#define RF_TPC_MEAS_START_NCP_TIME          MICROSECOND_TO_26M(217)//SubFrame BDY to the middle of NCP of Slot0 RS
#define RF_TPC_MEAS_START_ECP_TIME          MICROSECOND_TO_26M(175)//SubFrame BDY to the middle of ECP of Slot0 RS
#define RF_TPC_MEAS_PERIOD_TIME             MICROSECOND_TO_26M(66) //FLOOR(2048Ts)
#define RF_TPC_MEAS_ON_DELAY_TIME           MICROSECOND_TO_26M(5)  //not used in MT6169
#define RF_TPC_MEAS_OFF_DELAY_TIME          MICROSECOND_TO_26M(5)
#define RF_TPC_MEAS_RD_GUARD_TIME           MICROSECOND_TO_26M(5)

#define RF_TPC_RD_SLOT0_NCP_TIME           (RF_TPC_MEAS_START_NCP_TIME + RF_TPC_MEAS_PERIOD_TIME + RF_TPC_MEAS_OFF_DELAY_TIME + RF_TPC_MEAS_RD_GUARD_TIME)
#define RF_TPC_RD_SLOT1_NCP_TIME           (RF_TPC_RD_SLOT0_NCP_TIME   + RF_TPC_HALF_SF_TIME)
#define RF_TPC_RD_SLOT0_ECP_TIME           (RF_TPC_MEAS_START_ECP_TIME + RF_TPC_MEAS_PERIOD_TIME + RF_TPC_MEAS_OFF_DELAY_TIME + RF_TPC_MEAS_RD_GUARD_TIME)
#define RF_TPC_RD_SLOT1_ECP_TIME           (RF_TPC_RD_SLOT0_ECP_TIME   + RF_TPC_HALF_SF_TIME)

//Temperature DAC BSI read: delay between RXAFC and TempDac read event
#ifdef __LTE_L1SIM__
#define RF_TEMP_DAC_RD_DELAY_TIME           MICROSECOND_TO_26M(1)
#else
#define RF_TEMP_DAC_RD_DELAY_TIME           MICROSECOND_TO_26M(30)   //settling 0b00: 10us (max 20us), LDO settling: 0b00: 2us (max 3.5us), extend to 30us
#endif

//STX unlock BSI read delay time

#define RF_STX_UNLOCK_DELAY_TIME            MICROSECOND_TO_26M(5)    //3 write CW

//Wideband Power detection read
#define RF_WPD_RD_DELAY_TIME                MICROSECOND_TO_26M(15+30)


/*--------------------------------------------------------*/
/*   FDD Mode Event Timing Define (Should not modified)   */
/*--------------------------------------------------------*/
#define TC_FSR0                            (MICROSECOND_TO_26M(RF_CP_LEN_MARGIN + FDD_RX_WARMUP_SETTLE_TIME + 5) + RXDFE_RAMPING_TIME)
#define TC_FSR1                            (MICROSECOND_TO_26M(RF_CP_LEN_MARGIN + FDD_RX_WARMUP_SETTLE_TIME    ) + RXDFE_RAMPING_TIME)
#define TC_FSR2                            (MICROSECOND_TO_26M(RF_CP_LEN_MARGIN + FDD_RX_BURST_SETTLE_TIME                                ) + RXDFE_RAMPING_TIME)
#define TC_FSR3                             MICROSECOND_TO_26M(1)

#define TC_FST0                            (MICROSECOND_TO_26M(RF_CP_LEN_MARGIN + FDD_TX_WARMUP_SETTLE_TIME ) + TX_PROPOGATION_DELAY)
#define TC_FST1                            (MICROSECOND_TO_26M(RF_CP_LEN_MARGIN + FDD_TX_WARMUP_SETTLE_TIME ) + TX_PROPOGATION_DELAY)
#define TC_FST2                            (MICROSECOND_TO_26M(RF_CP_LEN_MARGIN + FDD_TX_BURST_SETTLE_TIME                            ) + TX_PROPOGATION_DELAY)
#define TC_FST3                             MICROSECOND_TO_26M(0)

/*--------------------------------------------------------*/
/*   TDD Mode Event Timing Define                         */
/*--------------------------------------------------------*/
#define TC_SRX1                            (MICROSECOND_TO_26M(RF_CP_LEN_MARGIN + TDD_TRX_WARMUP_SETTLE_TIME )                       + RXDFE_RAMPING_TIME  )
#define TC_STX1                            (MICROSECOND_TO_26M(RF_CP_LEN_MARGIN + TDD_TRX_WARMUP_SETTLE_TIME + TDD_TRX_STX_CW_TIME) + TX_PROPOGATION_DELAY)
#define TC_SRX3                             MICROSECOND_TO_26M(3)
#define TC_STX3                             MICROSECOND_TO_26M(3)

#define TC_TSR0                            (MICROSECOND_TO_26M(148) + RXDFE_RAMPING_TIME)  //Off for Freq change
#define TC_TSR2                            (MICROSECOND_TO_26M(RF_CP_LEN_MARGIN + TDD_RX_BURST_SETTLE_TIME) + RXDFE_RAMPING_TIME)
#define TC_TSR3                             MICROSECOND_TO_26M(1)

#define TC_TST2                            (MICROSECOND_TO_26M(RF_CP_LEN_MARGIN + TDD_TX_BURST_SETTLE_TIME) + TX_PROPOGATION_DELAY)
#define TC_TST3                             MICROSECOND_TO_26M(1)


/*--------------------------------------------------------*/
/*   Specific Event Timing Define (Should not modified)   */
/*--------------------------------------------------------*/
#define TC_SR2G                             MICROSECOND_TO_26M(5)     //Initial RX Gain & AFC
#define TC_SR2S                             MICROSECOND_TO_26M(4)     //RX Bandwidth Switch
#ifdef __LTE_L1SIM__
#define TC_SR2F                             MICROSECOND_TO_26M(6)     //AFC update timing
#else
#define TC_SR2F                             MICROSECOND_TO_26M(2)     //AFC update timing
#endif
#define TC_ST2S                             MICROSECOND_TO_26M(5)     //TX Bandwidth Switch
#define TC_ST2F                             MICROSECOND_TO_26M(10)    //TX AFC

//FPR0 & TPR0 are reserved for RF Conflict event
#define TC_FPR0                             MICROSECOND_TO_26M(148)
#define TC_FPT0                             MICROSECOND_TO_26M(148)
#define TC_TPR0                             MICROSECOND_TO_26M(148)
#define TC_TPT0                             MICROSECOND_TO_26M(148)

#define TC_FPR3B                            MICROSECOND_TO_26M(0)     //reserved
#define TC_FPR3C                            MICROSECOND_TO_26M(0)     //reserved

//To-Do: TPR3B is special event & should be larger than TC_TPT1
#define TC_TPR3B                           (MICROSECOND_TO_26M(12) + TX_PROPOGATION_DELAY)
#define TC_TPR3C                            MICROSECOND_TO_26M(0)

#define TC_SR2SX                            MICROSECOND_TO_26M(1)     //Fix AFC
#define TC_ST2SX                            MICROSECOND_TO_26M(1)     //Fix AFC

/*--------------------------------------------------------*/
/*   TPC Event Timing Define                              */
/*--------------------------------------------------------*/
#define TC_STPC0                            MICROSECOND_TO_26M(4)   //TX Gain Slot0
#define TC_STPC1                            MICROSECOND_TO_26M(0)   //reserved
#define TC_SPTPC0                           MICROSECOND_TO_26M(26)  //PAVCC
#define TC_SPTPC1                           MICROSECOND_TO_26M(0)   //reserved
#define TC_SMTPC0                           MICROSECOND_TO_26M(4)   //PA Mode change of MIPI PA
#define TC_SMTPC1                           MICROSECOND_TO_26M(0)   //reserved
#define TC_PTPC0                            MICROSECOND_TO_26M(4)   //VM mode change
#define TC_PTPC1                            MICROSECOND_TO_26M(0)   //reserved

/*--------------------------------------------------------*/
/*   PAVCC Event Timing Define                            */
/*--------------------------------------------------------*/
#define TC_MFSTON                           MICROSECOND_TO_26M(0)   //PMIC FDD PAVCC ON
#define TC_MTSTON                           MICROSECOND_TO_26M(0)   //PMIC TDD PAVCC ON
#define TC_MFSTOFF                          MICROSECOND_TO_26M(0)   //PMIC FDD PAVCC OFF
#define TC_MTSTOFF                          MICROSECOND_TO_26M(0)   //PMIC TDD PAVCC OFF


/*--------------------------------------------------------*/
/*   TRX IO Setting Define                                */
/*--------------------------------------------------------*/
#define RX_LNA_GROUP_SELECT_SHIFT                (0)
#define RX_LNA_GROUP_G1                          (0x1 << (RX_LNA_GROUP_SELECT_SHIFT + 0))
#define RX_LNA_GROUP_G2                          (0x1 << (RX_LNA_GROUP_SELECT_SHIFT + 1))
#define RX_LNA_GROUP_G3                          (0x1 << (RX_LNA_GROUP_SELECT_SHIFT + 2))
#define RX_LNA_GROUP_G4                          (0x1 << (RX_LNA_GROUP_SELECT_SHIFT + 3))
#define RX_LNA_PORT_SELECT_SHIFT                 (5)
#define RX_LNA_PORT_P1                           (0x1 << RX_LNA_PORT_SELECT_SHIFT)
#define RX_LNA_PORT_P2                           (0x2 << RX_LNA_PORT_SELECT_SHIFT)
#define RX_LNA_PORT_P3                           (0x3 << RX_LNA_PORT_SELECT_SHIFT)
#define RX_LNA_PORT_P4                           (0x4 << RX_LNA_PORT_SELECT_SHIFT)
#define RX_LNA_PORT_P5                           (0x5 << RX_LNA_PORT_SELECT_SHIFT)
#define RX_LNA_PORT_P6                           (0x6 << RX_LNA_PORT_SELECT_SHIFT)
#define RX_LNA_PORT_P7                           (0x7 << RX_LNA_PORT_SELECT_SHIFT)
#define RX_LNA_PORT_P8                           (0x8 << RX_LNA_PORT_SELECT_SHIFT)

#define RF_DIE_1                                 (0x1 << 31)

/** Tx Port selection */
#define TX_BSEL_LB_SHIFT                         (0)
#define TX_BSEL_MB_SHIFT                         (5)
#define TX_BSEL_HBUHB_SHIFT                      (9)

/*******************************************************************************
 * Typedef
 ******************************************************************************/
/** RF RX/RXD port setting */
typedef enum
{
   RX_IO_PRX1 = 0, //= (RX_LNA_PORT_P1 | RX_LNA_GROUP_G1),
   RX_IO_PRX2,     //= (RX_LNA_PORT_P2 | RX_LNA_GROUP_G1),
   RX_IO_PRX3,     //= (RX_LNA_PORT_P3 | RX_LNA_GROUP_G1),
   RX_IO_PRX4,     //= (RX_LNA_PORT_P4 | RX_LNA_GROUP_G1),
   RX_IO_PRX5,     //= (RX_LNA_PORT_P6 | RX_LNA_GROUP_G1),
   RX_IO_PRX6,     //= (RX_LNA_PORT_P5 | RX_LNA_GROUP_G1),
   RX_IO_PRX7,     //= (RX_LNA_PORT_P8 | RX_LNA_GROUP_G1),
   RX_IO_PRX8,     //= (RX_LNA_PORT_P7 | RX_LNA_GROUP_G1),
   RX_IO_PRX9,     //= (RX_LNA_PORT_P1 | RX_LNA_GROUP_G2),
   RX_IO_PRX10,    //= (RX_LNA_PORT_P2 | RX_LNA_GROUP_G2),
   RX_IO_PRX11,    //= (RX_LNA_PORT_P3 | RX_LNA_GROUP_G2),
   RX_IO_PRX12,    //= (RX_LNA_PORT_P4 | RX_LNA_GROUP_G2),
   RX_IO_PRX13,    //= (RX_LNA_PORT_P6 | RX_LNA_GROUP_G2),
   RX_IO_PRX14,    //= (RX_LNA_PORT_P5 | RX_LNA_GROUP_G2),
   RX_IO_LAAP1,    //= (RX_LNA_PORT_P2 | RX_LNA_GROUP_G3),
   RX_IO_NON_USED = 0xFFFF,
}RF_RX_IO_E;

typedef enum
{
   RX_IO_DRX1 = 0, //= (RX_LNA_PORT_P1 | RX_LNA_GROUP_G1),
   RX_IO_DRX2,     //= (RX_LNA_PORT_P2 | RX_LNA_GROUP_G1),
   RX_IO_DRX3,     //= (RX_LNA_PORT_P3 | RX_LNA_GROUP_G1),
   RX_IO_DRX4,     //= (RX_LNA_PORT_P4 | RX_LNA_GROUP_G1),
   RX_IO_DRX5,     //= (RX_LNA_PORT_P6 | RX_LNA_GROUP_G1),
   RX_IO_DRX6,     //= (RX_LNA_PORT_P5 | RX_LNA_GROUP_G1),
   RX_IO_DRX7,     //= (RX_LNA_PORT_P7 | RX_LNA_GROUP_G1),
   RX_IO_DRX8,     //= (RX_LNA_PORT_P8 | RX_LNA_GROUP_G1),
   RX_IO_DRX9,     //= (RX_LNA_PORT_P2 | RX_LNA_GROUP_G2),
   RX_IO_DRX10,    //= (RX_LNA_PORT_P1 | RX_LNA_GROUP_G2),
   RX_IO_DRX11,    //= (RX_LNA_PORT_P3 | RX_LNA_GROUP_G2),
   RX_IO_DRX12,    //= (RX_LNA_PORT_P4 | RX_LNA_GROUP_G2),
   RX_IO_DRX13,    //= (RX_LNA_PORT_P5 | RX_LNA_GROUP_G2),
   RX_IO_DRX14,    //= (RX_LNA_PORT_P6 | RX_LNA_GROUP_G2),
   RX_IO_LAAD1,    //= (RX_LNA_PORT_P2 | RX_LNA_GROUP_G3),
   RXD_IO_NON_USED = 0xFFFF,
}RF_RXD_IO_E;

/** Tx Port selection */
typedef enum
{
   /*RFSA/customization definition, only for requested Tx Port settings */
   TX_IO_LB1 = 0, //= (0x1 << (TX_BSEL_LB_SHIFT + 0)),
   TX_IO_LB2,     //= (0x1 << (TX_BSEL_LB_SHIFT + 1)),
   TX_IO_LB3,     //= (0x1 << (TX_BSEL_LB_SHIFT + 2)),
   TX_IO_LB4,     //= (0x1 << (TX_BSEL_LB_SHIFT + 3)),
   TX_IO_MB1,     //= (0x1 << (TX_BSEL_MB_SHIFT + 0)),
   TX_IO_MB2,     //= (0x1 << (TX_BSEL_MB_SHIFT + 1)),
   TX_IO_MB3,     //= (0x1 << (TX_BSEL_MB_SHIFT + 2)),
   TX_IO_HB1,     //= (0x1 << (TX_BSEL_HBUHB_SHIFT + 0)),
   TX_IO_HB2,     //= (0x1 << (TX_BSEL_HBUHB_SHIFT + 1)),
   TX_IO_UHB,     //= (0x1 << (TX_BSEL_HBUHB_SHIFT + 2)),
   TX_IO_NON_USED = 0xFFFF,
}RF_TX_IO_E;

/*Tx DET path selection */
//wilson:to-do please remove the tx det IO definition after clean the build error
typedef enum
{
   TX_DET_IO_DET1 = 0,
   TX_DET_IO_DET2 = 1,

   TX_DET_IO_NON_USED = 0xFFFF,
}RF_TX_DET_IO_E;
/*******************************************************************************
 * Constant
 ******************************************************************************/

/*******************************************************************************
 * Global variables (Extern)
 ******************************************************************************/




/*******************************************************************************
 * Global Functions Prototype (Interface)
 ******************************************************************************/


#endif /*__EL1D_RF_CUSTOM_DATA_MT6176_H__*/

/* Doxygen Group End ***************************************************//**@}*/
