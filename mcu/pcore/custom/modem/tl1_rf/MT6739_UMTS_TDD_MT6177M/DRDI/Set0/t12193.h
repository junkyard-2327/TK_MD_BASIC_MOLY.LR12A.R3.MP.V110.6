#ifndef _T12193_Set0_H_
#define _T12193_Set0_H_

#include "tl1d_custom_drdi.h"


#define END_Set0       0xffff
// Control action name define for timing control

/****************RF event definition Begin*********************/
#define TXDFE_WIN_CTRL_Set0                 1
#define TXCRP_FIFO_WIN_CTRL_Set0            2
#define DPD_MODE_SEL_Set0                   4

#define RF_TXGAIN_SET_Set0                  6
#define RF_RXGAIN_SET_Set0                  7
#define RF_TX_ENABLE_Set0                   8
#define RF_RX_ENABLE_Set0                   9
#define RF_TX_DISABLE_Set0                  10
#define RF_RX_DISABLE_Set0                  11
#define RF_TEMP_COMP_Set0                   12

#define RXE_CFG_Set0                        14
#define DAC_ENABLE_Set0                     19
#define ADC_ENABLE_Set0                     20
#define DAC_DISABLE_Set0                    21
#define ADC_DISABLE_Set0                    22

#define RF_TX_COMPENSATION_Set0             23
#define RF_RX_COMPENSATION_Set0             24

#define TXDFE_CLK_ON_Set0                   25
#define TXDFE_CLK_OFF_Set0                  26
#define RXDFE_CLK_ON_Set0                   27
#define RXDFE_CLK_OFF_Set0                  28
#define RXE_WIN_ON_Set0                     29
#define RXE_WIN_OFF_Set0                    30
#define RXE_TICK_SET_Set0                   31

#define RX_BPI_CTRL_EN_EVENT0_Set0          34
#define RX_BPI_CTRL_DIS_EVENT0_Set0         35
#define TX_BPI_CTRL_EN_EVENT0_Set0          36
#define TX_BPI_CTRL_DIS_EVENT0_Set0         37

#define RXDFE_MS_CFG_Set0                   38
#define RXDFE_GET_WBRSSI_Set0               39
#define TXDFE_MODE_SEL_Set0                 40

#define TX_PA_ENABLE_Set0                   41
#define TX_PA_DISABLE_Set0                  42
#define VPA_ENABLE_Set0                     43
#define VPA_DISABLE_Set0                    44

#define MIPI_DEVICE1_RX_ENABLE_Set0         45
#define MIPI_DEVICE1_RX_DISABLE_Set0        46
#define MIPI_DEVICE1_TX_ENABLE_Set0         47
#define MIPI_DEVICE1_TX_DISABLE_Set0        48
#define MIPI_DEVICE2_RX_ENABLE_Set0         49
#define MIPI_DEVICE2_RX_DISABLE_Set0        50
#define MIPI_DEVICE2_TX_ENABLE_Set0         51
#define MIPI_DEVICE2_TX_DISABLE_Set0        52
#define MIPI_DEVICE3_RX_ENABLE_Set0         53
#define MIPI_DEVICE3_RX_DISABLE_Set0        54
#define MIPI_DEVICE3_TX_ENABLE_Set0         55
#define MIPI_DEVICE3_TX_DISABLE_Set0        56

#define MIPI_DEVICE4_RX_ENABLE_Set0         57
#define MIPI_DEVICE4_RX_DISABLE_Set0        58
#define MIPI_DEVICE4_TX_ENABLE_Set0         59
#define MIPI_DEVICE4_TX_DISABLE_Set0        60

#define MIPI_DEVICE5_RX_ENABLE_Set0         61
#define MIPI_DEVICE5_RX_DISABLE_Set0        62
#define MIPI_DEVICE5_TX_ENABLE_Set0         63
#define MIPI_DEVICE5_TX_DISABLE_Set0        64

#define MIPI_DEVICE6_RX_ENABLE_Set0         65
#define MIPI_DEVICE6_RX_DISABLE_Set0        66
#define MIPI_DEVICE6_TX_ENABLE_Set0         67
#define MIPI_DEVICE6_TX_DISABLE_Set0        68

#define MIPI_DEVICE7_RX_TAS_ENABLE_Set0         69
#define MIPI_DEVICE7_RX_TAS_DISABLE_Set0        70
#define MIPI_DEVICE7_TX_TAS_ENABLE_Set0         71
#define MIPI_DEVICE7_TX_TAS_DISABLE_Set0        72


#define SRX_RELOCK_Set0                     73
#define BPI_CONFLICT_CLEAR_Set0             74
#define MIPI_DEVICE2_TR_ENABLE_Set0         75
#define MIPI_DEVICE1_TR_DISABLE_Set0        76
#define RX_BPI_CTRL_EN_EVENT1_Set0          77
#define RX_BPI_CTRL_DIS_EVENT1_Set0         78
#define TX_BPI_CTRL_EN_EVENT1_Set0          79
#define TX_BPI_CTRL_DIS_EVENT1_Set0         80
#define RF_TX_DET_CTRL_Set0                 81


/****************RF event definition End**********************/

 //////////////////////////////////////////////////////////////////////////////////////////////
#if defined(_T12193_C_)
//Timing advance setting rule:
//The time difference between RF_RX_ENABLE  and the follow SPI action(RF_? ) is at least 10.
//The time difference between RF_RX_DISABLE and the follow SPI action(RF_? ) is at least 20.
//The time difference between RF_TX_ENABLE  and the follow SPI action(RF_? ) is at least 10.
//The time difference between RF_TX_DISABLE and the follow SPI action(RF_? ) is at least 20.
//The time difference between RF_?   action and the follow BPI action(ABB_?/DBB_?/DCO_? ) is at least 7.
//The time difference between ABB_?  action and the follow SPI action(ABB_? ) is at least 18.
//The time difference between ABB_?  action and the follow BPI action(RF_?/DBB_?/DCO_? ) is at least 7.
//The time difference between ABB_RX_SCALE  action and the follow SPI action(ABB_? ) is at least 36.
//The time difference between ABB_RX_SCALE  action and the follow BPI action(RF_?/DBB_?/DCO_? ) is at least 25.
//The time difference between DBB_?  action and the follow action is at least 5.
//The time difference between DCO_?  action and the follow action is at least 17.
const T_RF_PROG_SEQ_STRUCT   AST_TL1_SEQ_DEFAULT_Set0[] = {{
//control action timing based on the beginning of the timeslot must be sorted by an increasing order
//timing advance range : -400 ~ 0
//ENABLE_DOWNLINK_TIMING_DEFAULT[60]
{
#ifdef TAS_CAT_A_B_MIPI_TIMING_EXPANSION
	MIPI_DEVICE7_RX_TAS_ENABLE_Set0   ,-700,
#endif
    //RX_BPI_CTRL_EN_EVENT1_Set0      , -590,//NO USE
    RX_BPI_CTRL_EN_EVENT0_Set0      , -590,
    MIPI_DEVICE3_RX_ENABLE_Set0     , -560,//ant tune
    MIPI_DEVICE2_RX_ENABLE_Set0     , -530,//ASM
    MIPI_DEVICE1_RX_ENABLE_Set0     , -500,//NO USE
    //MIPI_DEVICE4_RX_ENABLE_Set0     , -560,//For DAT
    RXE_CFG_Set0                    ,    0,
    ADC_ENABLE_Set0                 ,    0,
    RXDFE_MS_CFG_Set0               ,  -40,/*Set DC/WB1+SPUR/WB2 Measure in a slot*/
    RXE_WIN_ON_Set0                 ,   -4,
    RXE_TICK_SET_Set0               ,    0,
    RF_RXGAIN_SET_Set0              , -260,
    RF_RX_ENABLE_Set0               , -250,
    RF_TEMP_COMP_Set0               ,  -50,//Temperature trigger
    //RF_RX_COMPENSATION_Set0       ,  -92,/* Compensate IQ mismatch at RF WARMUP*/
    END_Set0             ,  END_Set0 //This line means the end of the actions,so it must be follow the last action.

},

//control action timing based on the end of the timeslot must be sorted by an increasing order
//timing advance range : -200 ~ +100
//DISABLE_DOWNLINK_TIMING_DEFAULT[60]=
{
    RF_RX_DISABLE_Set0              , -29,
    RX_BPI_CTRL_DIS_EVENT0_Set0     ,  -9,
    //RX_BPI_CTRL_DIS_EVENT1_Set0   ,  -9,//NO USE
    MIPI_DEVICE1_RX_DISABLE_Set0    ,  30,//NO USE
    MIPI_DEVICE2_RX_DISABLE_Set0    ,  30,//ASM
    MIPI_DEVICE3_RX_DISABLE_Set0    ,  60,//ant tune
#ifdef TAS_CAT_A_B_MIPI_TIMING_EXPANSION
    MIPI_DEVICE7_RX_TAS_DISABLE_Set0,  40,
#endif
    ADC_DISABLE_Set0                ,   8,
    RXE_WIN_OFF_Set0                ,  -4,
    RXDFE_CLK_OFF_Set0              , 120,
    RXDFE_GET_WBRSSI_Set0           ,  50,
    BPI_CONFLICT_CLEAR_Set0         ,  70,
    END_Set0             ,  END_Set0 //This line means the end of the actions,so it must be follow the last action.

},


//control action timing based on the beginning of the timeslot must be sorted by an increasing order
//timing advance range : -332 ~ 0
//ENABLE_UPLINK_TIMING_DEFAULT[60]=
{
#if defined(__MT6291_TDD_RTL__)||defined(TL1_SIM)
    TXDFE_WIN_CTRL_Set0             ,    0,
#else
    TXDFE_WIN_CTRL_Set0             , -138,
#endif
#ifdef TAS_CAT_A_B_MIPI_TIMING_EXPANSION
	MIPI_DEVICE7_TX_TAS_ENABLE_Set0 , -700,
#endif
    SRX_RELOCK_Set0                 , -640,
    VPA_ENABLE_Set0                 , -230,
    MIPI_DEVICE3_TX_ENABLE_Set0     , -220,//ant tune
    MIPI_DEVICE1_TX_ENABLE_Set0     , -190,//PA
    MIPI_DEVICE2_TX_ENABLE_Set0     , -160,//ASM
    //MIPI_DEVICE4_TX_ENABLE_Set0     , -220,//For DAT
    //TX_BPI_CTRL_EN_EVENT1_Set0    ,  -90,//NO USE
    TX_BPI_CTRL_EN_EVENT0_Set0      ,  -90,//BPI
    RF_TX_ENABLE_Set0               ,  -70,
    RF_TX_DET_CTRL_Set0             ,  -60,
    RF_TXGAIN_SET_Set0              ,  -30,
    TXDFE_MODE_SEL_Set0             ,  -40,/*The time information is not used*/
    RF_TX_COMPENSATION_Set0         ,  -20,
    END_Set0             ,  END_Set0//This line means the end of the actions,so it must be follow the last action.
},


//control action timing based on the end of the timeslot must be sorted by an increasing order
//timing advance range : -200 ~ +100
//DISABLE_UPLINK_TIMING_DEFAULT[60]=
{
    RF_TX_DISABLE_Set0             ,  -120,
    MIPI_DEVICE2_TX_DISABLE_Set0   ,  -120,//ASM
    TX_BPI_CTRL_DIS_EVENT0_Set0    ,   -90,
    MIPI_DEVICE1_TX_DISABLE_Set0   ,   -70,//PA
    //TX_BPI_CTRL_DIS_EVENT1_Set0  ,   -90,//NO USE
    MIPI_DEVICE3_TX_DISABLE_Set0   ,   -40,//ant tune
#ifdef TAS_CAT_A_B_MIPI_TIMING_EXPANSION
    MIPI_DEVICE7_TX_TAS_DISABLE_Set0 , -10,
#endif
    BPI_CONFLICT_CLEAR_Set0        ,     0,
    VPA_DISABLE_Set0               ,     30,
    END_Set0                       ,  END_Set0 //This line means the end of the actions,so it must be follow the last action.
},


//control action timing based on the beginning of the second timeslot must be sorted by an increasing order
//timing advance range : -373 ~ 0
//DL_DL_GAP_CTRL_TIMING_DEFAULT[60]=
{
    MIPI_DEVICE2_RX_ENABLE_Set0     , -270,//ASM, ASM-RF group delay is 8.39us.
    RF_RXGAIN_SET_Set0              , -260,
    MIPI_DEVICE1_RX_ENABLE_Set0     , -190,//NO USE
    MIPI_DEVICE3_RX_ENABLE_Set0     , -190,//ant tune
#ifdef TAS_CAT_A_B_MIPI_TIMING_EXPANSION
    MIPI_DEVICE7_RX_TAS_ENABLE_Set0 , -180 ,
#endif
    RX_BPI_CTRL_EN_EVENT0_Set0      ,  -80, //for dl-dl rf front end config modify
    RF_TEMP_COMP_Set0               ,  -50,// Temperature trigger
    RXE_CFG_Set0                    ,    0,
    RXE_TICK_SET_Set0               ,    0,
    RXDFE_MS_CFG_Set0               ,    0,
    RXDFE_GET_WBRSSI_Set0           ,    0,
    END_Set0             ,  END_Set0 //This line means the end of the actions,so it must be follow the last action.

},


//control action timing based on the beginning of the second timeslot must be sorted by an increasing order
//timing advance range : -250 ~ 0
//UL_UL_GAP_CTRL_TIMING_DEFAULT[60]=
{
#if defined(__MT6291_TDD_RTL__)||defined(TL1_SIM)
    TXDFE_WIN_CTRL_Set0             ,     0,
#else
    TXDFE_WIN_CTRL_Set0             ,  -138,
#endif
    VPA_ENABLE_Set0                 ,   -90,
    MIPI_DEVICE1_TX_ENABLE_Set0     ,   -70,//PA,TXIQ->PA delay 4us.
    RF_TX_DET_CTRL_Set0             ,   -60,
    TXDFE_MODE_SEL_Set0             ,   -40,
    RF_TX_COMPENSATION_Set0         ,   -20,
    RF_TXGAIN_SET_Set0              ,   -30,
    END_Set0                        ,  END_Set0 //This line means the end of the actions,so it must be follow the last action.
},


//control action timing based on the beginning of downlink timeslot must be sorted by an increasing order
//timing advance range : -400 ~ 0
//UL_DL_GAP_CTRL_TIMING_DEFAULT[60]=
{
   // MIPI_DEVICE3_TX_DISABLE_Set0   ,    0,//ant tune
    ADC_ENABLE_Set0                ,    0,
    RXE_CFG_Set0                   ,    0,
    RXE_WIN_ON_Set0                ,    0,
    RXE_TICK_SET_Set0              ,    0,
    //RX_BPI_CTRL_EN_EVENT1_Set0   , -175,//NO USE
    RX_BPI_CTRL_EN_EVENT0_Set0     , -140,
    MIPI_DEVICE2_TR_ENABLE_Set0    , -130,//ASM
    RF_RXGAIN_SET_Set0             , -125,
    RF_RX_ENABLE_Set0              , -120,
    MIPI_DEVICE1_TR_DISABLE_Set0   ,  -90,//PA
    RXDFE_MS_CFG_Set0              ,    0,
    RF_RX_COMPENSATION_Set0        ,    0,
    VPA_DISABLE_Set0               ,  100,
    END_Set0                       ,  END_Set0 //This line means the end of the actions,so it must be follow the last action.
 },

/**********************************Below is for B39*****************************************/
//control action timing based on the beginning of the timeslot must be sorted by an increasing order
//timing advance range : -332 ~ 0
//ENABLE_UPLINK_TIMING_DEFAULT[60]=
{
#if defined(__MT6291_TDD_RTL__)||defined(TL1_SIM)
    TXDFE_WIN_CTRL_Set0             ,    0,
#else
    TXDFE_WIN_CTRL_Set0             , -138,
#endif
#ifdef TAS_CAT_A_B_MIPI_TIMING_EXPANSION
	MIPI_DEVICE7_TX_TAS_ENABLE_Set0 , -700,
#endif
    SRX_RELOCK_Set0                 , -640,
    VPA_ENABLE_Set0                 , -230,
    MIPI_DEVICE3_TX_ENABLE_Set0     , -220,//ant tune
    MIPI_DEVICE1_TX_ENABLE_Set0     , -190,//PA
    MIPI_DEVICE2_TX_ENABLE_Set0     , -160,//ASM
    //MIPI_DEVICE4_TX_ENABLE_Set0     , -220,//For DAT
    //TX_BPI_CTRL_EN_EVENT1_Set0    ,  -90,//NO USE
    TX_BPI_CTRL_EN_EVENT0_Set0      ,  -90,//BPI
    RF_TX_ENABLE_Set0               ,  -70,
    RF_TX_DET_CTRL_Set0             ,  -60,
    RF_TXGAIN_SET_Set0              ,  -30,
    TXDFE_MODE_SEL_Set0             ,  -40,/*The time information is not used*/
    RF_TX_COMPENSATION_Set0         ,  -20,
    END_Set0             ,  END_Set0//This line means the end of the actions,so it must be follow the last action.
},


//control action timing based on the end of the timeslot must be sorted by an increasing order
//timing advance range : -200 ~ +100
//DISABLE_UPLINK_TIMING_DEFAULT[60]=
{
    RF_TX_DISABLE_Set0             ,  -120,
    MIPI_DEVICE2_TX_DISABLE_Set0   ,  -120,//ASM
    TX_BPI_CTRL_DIS_EVENT0_Set0    ,   -90,
    MIPI_DEVICE1_TX_DISABLE_Set0   ,   -70,//PA
    //TX_BPI_CTRL_DIS_EVENT1_Set0  ,   -90,//NO USE
    MIPI_DEVICE3_TX_DISABLE_Set0   ,   -40,//ant tune
#ifdef TAS_CAT_A_B_MIPI_TIMING_EXPANSION
    MIPI_DEVICE7_TX_TAS_DISABLE_Set0 , -10,
#endif
    BPI_CONFLICT_CLEAR_Set0        ,     0,
    VPA_DISABLE_Set0               ,     30,
    END_Set0                       ,  END_Set0 //This line means the end of the actions,so it must be follow the last action.
},
/**********************************Above is for B39*****************************************/

/**********************************Below is for B40*****************************************/
//control action timing based on the beginning of the timeslot must be sorted by an increasing order
//timing advance range : -332 ~ 0
//ENABLE_UPLINK_TIMING_DEFAULT[60]=
{
#if defined(__MT6291_TDD_RTL__)||defined(TL1_SIM)
    TXDFE_WIN_CTRL_Set0             ,    0,
#else
    TXDFE_WIN_CTRL_Set0             , -138,
#endif
    SRX_RELOCK_Set0                 , -640,
    VPA_ENABLE_Set0                 , -230,
    MIPI_DEVICE3_TX_ENABLE_Set0     , -220,//ant tune
    MIPI_DEVICE1_TX_ENABLE_Set0     , -190,//PA
    MIPI_DEVICE2_TX_ENABLE_Set0     , -160,//ASM
    //TX_BPI_CTRL_EN_EVENT1_Set0    ,  -90,//NO USE
    TX_BPI_CTRL_EN_EVENT0_Set0      ,  -90,//BPI
    RF_TX_ENABLE_Set0               ,  -70,
    RF_TX_DET_CTRL_Set0             ,  -60,
    RF_TXGAIN_SET_Set0              ,  -30,
    TXDFE_MODE_SEL_Set0             ,  -40,/*The time information is not used*/
    RF_TX_COMPENSATION_Set0         ,  -20,
    END_Set0             ,  END_Set0//This line means the end of the actions,so it must be follow the last action.
},


//control action timing based on the end of the timeslot must be sorted by an increasing order
//timing advance range : -200 ~ +100
//DISABLE_UPLINK_TIMING_DEFAULT[60]=
{
    RF_TX_DISABLE_Set0             ,  -120,
    MIPI_DEVICE2_TX_DISABLE_Set0   ,  -120,//ASM
    TX_BPI_CTRL_DIS_EVENT0_Set0    ,   -90,
    MIPI_DEVICE1_TX_DISABLE_Set0   ,   -70,//PA
    //TX_BPI_CTRL_DIS_EVENT1_Set0  ,   -90,//NO USE
    MIPI_DEVICE3_TX_DISABLE_Set0   ,   -40,//ant tune
    BPI_CONFLICT_CLEAR_Set0        ,     0,
    VPA_DISABLE_Set0               ,     30,
    END_Set0                       ,  END_Set0 //This line means the end of the actions,so it must be follow the last action.
}

/**********************************Above is for B40*****************************************/

}};

#endif

#endif
