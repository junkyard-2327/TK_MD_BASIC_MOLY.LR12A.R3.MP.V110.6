#ifndef _TL1D_CUSTOM_RF_SetDefault_H_
#define _TL1D_CUSTOM_RF_SetDefault_H_

#include "tl1d_custom_drdi.h"

#if defined(MT6177L_RF)
/*don't modify the name and value*/
/*RX PORT*/
#define TDS_PRX1_SetDefault       ( 1<<0 )+( 1<<5 )+( 1<<9 )+( 6<<12 )+( 1<<17 )    // Group1,LNA0,MLB_WOBUF
#define TDS_PRX2_SetDefault       ( 1<<0 )+( 2<<5 )+( 1<<9 )+( 6<<12 )+( 1<<17 )    // Group1,LNA1,MLB_WOBUF
#define TDS_PRX3_SetDefault       ( 1<<0 )+( 3<<5 )+( 1<<9 )+( 6<<12 )+( 1<<17 )    // Group1,LNA2,MLB_WOBUF
#define TDS_PRX4_SetDefault       ( 1<<0 )+( 4<<5 )+( 1<<9 )+( 6<<12 )+( 1<<17 )    // Group1,LNA3,MLB_WOBUF
#define TDS_PRX5_SetDefault       ( 1<<0 )+( 6<<5 )+( 1<<9 )+( 6<<12 )+( 1<<17 )    // Group1,LNA5,MLB_WOBUF
#define TDS_PRX6_SetDefault       ( 1<<0 )+( 5<<5 )+( 1<<9 )+( 6<<12 )+( 1<<17 )    // Group1,LNA4,MLB_WOBUF
#define TDS_PRX7_SetDefault       ( 1<<0 )+( 8<<5 )+( 1<<9 )+( 6<<12 )+( 1<<17 )    // Group1,LNA7,MLB_WOBUF
#define TDS_PRX8_SetDefault       ( 1<<0 )+( 7<<5 )+( 1<<9 )+( 6<<12 )+( 1<<17 )    // Group1,LNA6,MLB_WOBUF
#define TDS_PRX9_SetDefault       ( 2<<0 )+( 1<<5 )+( 1<<9 )+( 6<<12 )+( 1<<17 )    // Group2,LNA0,HMB_WOQDL
#define TDS_PRX10_SetDefault      ( 2<<0 )+( 2<<5 )+( 1<<9 )+( 6<<12 )+( 1<<17 )    // Group2,LNA1,HMB_WOQDL
#define TDS_PRX11_SetDefault      ( 2<<0 )+( 3<<5 )+( 1<<9 )+( 6<<12 )+( 1<<17 )    // Group2,LNA2,HMB_WOQDL
#define TDS_PRX12_SetDefault      ( 2<<0 )+( 4<<5 )+( 1<<9 )+( 6<<12 )+( 1<<17 )    // Group2,LNA3,HMB_WOQDL
#define TDS_PRX13_SetDefault      ( 2<<0 )+( 6<<5 )+( 1<<9 )+( 6<<12 )+( 1<<17 )    // Group2,LNA5,HMB_WOQDL
#define TDS_PRX14_SetDefault      ( 2<<0 )+( 5<<5 )+( 1<<9 )+( 6<<12 )+( 1<<17 )    // Group2,LNA4,HMB_WOQDL
/*TX PORT*/
#define TDS_TX_HB1_SetDefault     ( 0 )
#define TDS_TX_HB2_SetDefault     ( 1 )
#define TDS_TX_LB1_SetDefault     ( 3 )
#define TDS_TX_LB2_SetDefault     ( 4 )
#define TDS_TX_LB3_SetDefault     ( 5 )
#define TDS_TX_LB4_SetDefault     ( 7 )
#define TDS_TX_MB1_SetDefault     ( 10 )
#define TDS_TX_MB2_SetDefault     ( 11 )
#define TDS_TX_MB3_SetDefault     ( 12 )
#if defined(_T12193_C_)


/*--------------------------------------------------------*/
/*           bit   pin                                    */
/*            0    GPCTRL0                                */
/*            1    GPCTRL1                                */
/*            2    GPCTRL2                                */
/*            3    TX_EX                                  */
/*            4    not used                               */
/*            5    not used                               */
/*            6    not used                               */
/*            7    not used                               */
/*            8    not used                               */
/*            9    not used                               */
/*            10   not used                               */
/*            11   VEN                                    */
/*            12   VC1                                    */
/*            13   VC2                                    */
/*            14   not used                               */
/*--------------------------------------------------------*/
const T_TD_CUSTOMIZATION_STRUCT    AST_TL1_RF_PARAMETER_DEFAULT_SetDefault[] = {{
//T_BPI_SETTING
{
    /*TX_2G34   TX_2G01/TX_1G90 */
    /*[7:4]     [3:0] 	        */
    (1<<4)     +   2,                                         //PA_STAGE          data[0]
                                                              //3:PA_HGAIN PA_MGAIN PA_LGAIN
                                                              //2:PA_HGAIN PA_MGAIN
                                                              //1:PA_HGAIN


    {
    ///////////////////////DBB_BPI_AREA1 begin (fix for TX Control Event0 )//////////////////////////////////
    ////////////TAS//////////////////////////////////////////////////RFconflict////////////////////////////
        (0)    +(0<<0) + (0<<2) + (0<<5)+ (0<<7) + (1<<11) + (1<<12)+ (1<<13)+ (1<<14)+ (1<<15)+ (1<<16)+ (1<<17) + (1<<31),     //TX_CTRL_BITMASK   data[1] //ANT
        (0)    +(0<<0) + (0<<2) + (0<<5)+ (0<<7) + (0<<11) + (0<<12)+ (0<<13)+ (0<<14)+ (0<<15)+ (1<<16)+ (1<<17) + (1<<31),     //TX_2G34 PA_HGAIN  data[2] //ANT
        (0)    +(0<<0) + (0<<2) + (0<<5)+ (0<<7) + (0<<11) + (0<<12)+ (0<<13)+ (0<<14)+ (0<<15)+ (1<<16)+ (1<<17) + (1<<31),     //TX_2G34 PA_MGAIN  data[3] //ANT
        (0)    +(0<<0) + (0<<2) + (0<<5)+ (0<<7) + (0<<11) + (0<<12)+ (0<<13)+ (0<<14)+ (0<<15)+ (1<<16)+ (1<<17) + (1<<31),     //TX_2G34 PA_LGAIN  data[4] //ANT
        (0)    +(0<<0) + (0<<2) + (0<<5)+ (0<<7) + (0<<11) + (0<<12)+ (0<<13)+ (0<<14)+ (0<<15)+ (1<<16)+ (1<<17) + (1<<31),     //TX_2G01 PA_HGAIN  data[5] //ANT
        (0)    +(0<<0) + (0<<2) + (0<<5)+ (0<<7) + (0<<11) + (0<<12)+ (0<<13)+ (0<<14)+ (0<<15)+ (1<<16)+ (1<<17) + (1<<31),     //TX_2G01 PA_MGAIN  data[6] //ANT
        (0)    +(0<<0) + (0<<2) + (0<<5)+ (0<<7) + (0<<11) + (0<<12)+ (0<<13)+ (0<<14)+ (0<<15)+ (1<<16)+ (1<<17) + (1<<31),     //TX_2G01 PA_LGAIN  data[7] //ANT
        (0)    +(0<<0) + (0<<2) + (0<<5)+ (0<<7) + (0<<11) + (0<<12)+ (0<<13)+ (0<<14)+ (0<<15)+ (1<<16)+ (1<<17) + (1<<31),     //TX_1G90 PA_HGAIN  data[8] //ANT
        (0)    +(0<<0) + (0<<2) + (0<<5)+ (0<<7) + (0<<11) + (0<<12)+ (0<<13)+ (0<<14)+ (0<<15)+ (1<<16)+ (1<<17) + (1<<31),     //TX_1G90 PA_MGAIN  data[9] //ANT
        (0)    +(0<<0) + (0<<2) + (0<<5)+ (0<<7) + (0<<11) + (0<<12)+ (0<<13)+ (0<<14)+ (0<<15)+ (1<<16)+ (1<<17) + (1<<31),     //TX_1G90 PA_LGAIN  data[10] //ANT
        (0)    +(0<<0) + (0<<2) + (0<<5)+ (0<<7) + (0<<11) + (0<<12)+ (0<<13)+ (0<<14)+ (0<<15)+ (0<<16)+ (0<<17) + (0<<31),     //TX_DISABLE        data[11] //ANT
    ///////////////////////DBB_BPI_AREA1 end (fix for TX Control Event0 )////////////////////////////////////
    },

    {
    /////////////////////DBB_BPI_AREA2 begin (fix for RX Control Event0)/////////////////////////////////////
    /////////////TAS////////////////////RFconflict/////////////////////////////////////////////////////////
        (0)    +(0<<7) + (1<<11) + (1<<12)+ (1<<13)+ (1<<14)+ (1<<15)+ (1<<16)+ (1<<17) + (1<<31),                               //RX_CTRL_BITMASK   data[12] //ANT
        (0)    +(0<<7) + (0<<11) + (0<<12)+ (0<<13)+ (0<<14)+ (0<<15)+ (1<<16)+ (1<<17) + (1<<31),                               //RX_2G34           data[13] //ANT
        (0)    +(0<<7) + (0<<11) + (0<<12)+ (0<<13)+ (0<<14)+ (0<<15)+ (1<<16)+ (1<<17) + (1<<31),                               //RX_2G01           data[14] //ANT
        (0)    +(0<<7) + (0<<11) + (0<<12)+ (0<<13)+ (0<<14)+ (0<<15)+ (1<<16)+ (1<<17) + (1<<31),                               //RX_1G90           data[15] //ANT
        (0)    +(0<<7) + (0<<11) + (0<<12)+ (0<<13)+ (0<<14)+ (0<<15)+ (0<<16)+ (0<<17) + (1<<31),                               //RX_DISABLE        data[16] //ANT
    /////////////////////DBB_BPI_AREA2 end (fix for RX Control Event0)///////////////////////////////////////
    },

    {
    /////////////////////DBB_BPI_AREA3 begin///////////////////////////////////////////////////////////////
    /*TXEN*/
        (0<<0),                                                //PA_BITMASK        data[17]
        (0<<0),                                                //PA_ENABLE_2G34    data[18]
        (0<<0),                                                //PA_ENABLE_2G01    data[19]
        (0<<0),                                                //PA_ENABLE_1G90    data[20]
        (0<<0)                                                 //PA_DISABLE        data[21]
    /////////////////////DBB_BPI_AREA3 end/////////////////////////////////////////////////////////////////
    },

    {
    /////////////////////DBB_BPI_AREA4 begin///////////////////////////////////////////////////////////////
    /*enable/disable Other fuction*/
        (0<<0),                                                //BITMASK           data[22]
        (1<<0),                                                //ENABLE            data[23]
        (0<<0)                                                 //DISABLE           data[24]
    /////////////////////DBB_BPI_AREA4 end/////////////////////////////////////////////////////////////////
    },

    {
    /////////////////////DBB_BPI_AREA5 begin///////////////////////////////////////////////////////////////
    //enable/disable Other fuction
        (0<<0),                                                                  //BITMASK           data[25]
        (0<<0),                                                                  //ENABLE            data[26]
        (0<<0)                                                                   //DISABLE           data[27]
    /////////////////////DBB_BPI_AREA5 end/////////////////////////////////////////////////////////////////
    }
},

{
    {
    ///////////////////////DBB_BPI_AREA1 begin (fix for TX Control Event1 )//////////////////////////////////
    ////////////TAS//////////////////////////////////////////////////RFconflict////////////////////////////
        (0)     + (1<<31),                                     //TX_CTRL_BITMASK   data[28]
        (0)     + (1<<31),                                     //TX_2G34 PA_HGAIN  data[29]
        (0)     + (1<<31),                                     //TX_2G34 PA_MGAIN  data[30]
        (0)     + (1<<31),                                     //TX_2G34 PA_LGAIN  data[31]
        (0)     + (1<<31),                                     //TX_2G01 PA_HGAIN  data[32]
        (0)     + (1<<31),                                     //TX_2G01 PA_MGAIN  data[33]
        (0)     + (1<<31),                                     //TX_2G01 PA_LGAIN  data[34]
        (0)     + (1<<31),                                     //TX_1G90 PA_HGAIN  data[35]
        (0)     + (1<<31),                                     //TX_1G90 PA_MGAIN  data[36]
        (0)     + (1<<31),                                     //TX_1G90 PA_LGAIN  data[37]
        (0)     + (0<<31),                                     //TX_DISABLE        data[38]
    ///////////////////////DBB_BPI_AREA1 end (fix for TX Control Event1 )////////////////////////////////////
    },

    {
    /////////////////////DBB_BPI_AREA2 begin (fix for RX Control Event1)/////////////////////////////////////
    /////////////TAS////////////////////RFconflict/////////////////////////////////////////////////////////
        (0)     + (1<<31),                                     //RX_CTRL_BITMASK   data[39]
        (0)     + (1<<31),                                     //RX_2G34           data[40]
        (0)     + (1<<31),                                     //RX_2G01           data[41]
        (0)     + (1<<31),                                     //RX_1G90           data[42]
        (0)     + (0<<31),                                     //RX_DISABLE        data[43]
    /////////////////////DBB_BPI_AREA2 end (fix for RX Control Event1)///////////////////////////////////////
    }
},

//T_ABB_APC_VOLT
{
    0x11,                   //Decide which volt Used for PA!!! carefull ! bit	0x11
                            //VPA POWER from PMIC    APC power from MT6179
                            //bit 0:  B34 volt choice  0: VPC  1:APC
                            //bit 4:  B39 volt choice  0: VPC  1:APC
    0x341,                  //B34 HGv  0.0018V *X
    0x1BC,                  //B34 MGv  0.0018V *X
    0x341,                  //B34 LGv  0.0018V *X
    0x341,                  //B39 HGv  0.0018V *X
    0x1BC,                  //B39 MGv  0.0018V *X
    0x341,                  //B39 LGv  0.0018V *X
    0
},

//T_RF_PORT_SEL
{
    TDS_TX_MB3_SetDefault,  //Tx2G01
    TDS_TX_MB3_SetDefault,  //Tx1G90
    TDS_TX_MB3_SetDefault,  //Tx2G34
    TDS_PRX6_SetDefault,    //Rx2G01
    TDS_PRX6_SetDefault,    //Rx1G90
    TDS_PRX6_SetDefault,    //Rx2G34
},

//T_IQ_SWAP_CFG_STRUCT
{
    1,                      //RX :0    IQswap diable     1:    IQswap enable
    0                       //TX :0    IQswap diable     1:    IQswap enable
},

//T_VPA_VOLT_STRUCT
{
    0x00,//Choose PA voltage from VPA1 or VPA2,default is VPA1
         //Bit [0:3]: B34 VPA source VPA1=0x1 VPA2=0x2
         //Bit [4:7]: B39 VPA source VPA1=0x1 VPA2=0x2
    34,  //B34,VPA High gain 3.4V
    22,  //B34,VPA Mid  gain 3.4V
    22,  //B34,VPA Low  gain 3.4V
    34,  //B39,VPA High gain 3.4V
    22,  //B39,VPA Mid  gain 3.4V
    22,  //B39,VPA Low  gain 3.4V
     0
},
//T_ETM_STRUCT
{
    0, //band34 ETM 1:enable 0:disable
    0, //band39 ETM 1:enable 0:disable
    83,//B34,ETM High gain 3.4V = 83*40.9mv
    54,//B34,ETM Mid gain 2.2V = 54*40.9mv
    13,//B34,ETM Low gain 0.5V
    83,//B39,ETM High gain 3.4V = 83*40.9mv
    54,//B39,ETM Mid gain 2.2V = 54*40.9mv
    13,//B39,ETM Low gain 0.5V
    0
}


#if defined(__SAR_TX_POWER_BACKOFF_SUPPORT__)|| defined(__TX_POWER_OFFSET_SUPPORT__)
#if defined(__SAR_TX_POWER_BACKOFF_SUPPORT__)
    ,
    {
        /*antenna 0*/
        {   //uwTxpower offset
            /*max_arfcn should be same between table0~table8, and must be orded do not change*/
            /*Default Table: table0*/
            {
                /*max_arfcn, normal offset,    16QAM offset, reserve*/
                {9420,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},/*begin of band 39,donot change */
                {9440,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {9460,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {9480,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {9500,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {9520,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {9540,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {9560,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {9580,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {9600,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},/*end of band 39,donot change */
                {10050,       TDS_WEIGHT(0),  TDS_WEIGHT(0)},/*begin of band 34,donot change */
                {10087,       TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {10104,       TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {10125,       TDS_WEIGHT(0),  TDS_WEIGHT(0)},/*end of band 34,donot change */
                {0,                      0,               0}
            },

            /*table1*/
            {
                /*max_arfcn, normal offset,    16QAM offset, reserve*/
                {9420,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},/*begin of band 39,donot change */
                {9440,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {9460,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {9480,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {9500,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {9520,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {9540,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {9560,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {9580,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {9600,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},/*end of band 39,donot change */
                {10050,       TDS_WEIGHT(0),  TDS_WEIGHT(0)},/*begin of band 34,donot change */
                {10087,       TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {10104,       TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {10125,       TDS_WEIGHT(0),  TDS_WEIGHT(0)},/*end of band 34,donot change */
                {0,                      0,               0}
            },

    		/*table2*/
    		{
                /*max_arfcn, normal offset,    16QAM offset, reserve*/
                {9420,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},/*begin of band 39,donot change */
                {9440,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {9460,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {9480,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {9500,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {9520,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {9540,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {9560,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {9580,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {9600,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},/*end of band 39,donot change */
                {10050,       TDS_WEIGHT(0),  TDS_WEIGHT(0)},/*begin of band 34,donot change */
                {10087,       TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {10104,       TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {10125,       TDS_WEIGHT(0),  TDS_WEIGHT(0)},/*end of band 34,donot change */
                {0,                      0,               0}
            },

    		/*table3*/
    		{
                /*max_arfcn, normal offset,    16QAM offset, reserve*/
                {9420,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},/*begin of band 39,donot change */
                {9440,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {9460,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {9480,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {9500,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {9520,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {9540,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {9560,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {9580,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {9600,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},/*end of band 39,donot change */
                {10050,       TDS_WEIGHT(0),  TDS_WEIGHT(0)},/*begin of band 34,donot change */
                {10087,       TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {10104,       TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {10125,       TDS_WEIGHT(0),  TDS_WEIGHT(0)},/*end of band 34,donot change */
                {0,                      0,               0}
            },

    		/*table4*/
            {
                /*max_arfcn, normal offset,    16QAM offset, reserve*/
                {9420,        TDS_WEIGHT(1),  TDS_WEIGHT(2)},/*begin of band 39,donot change */
                {9440,        TDS_WEIGHT(1),  TDS_WEIGHT(2)},
                {9460,        TDS_WEIGHT(1),  TDS_WEIGHT(2)},
                {9480,        TDS_WEIGHT(1),  TDS_WEIGHT(2)},
                {9500,        TDS_WEIGHT(1),  TDS_WEIGHT(2)},
                {9520,        TDS_WEIGHT(1),  TDS_WEIGHT(2)},
                {9540,        TDS_WEIGHT(1),  TDS_WEIGHT(2)},
                {9560,        TDS_WEIGHT(1),  TDS_WEIGHT(2)},
                {9580,        TDS_WEIGHT(1),  TDS_WEIGHT(2)},
                {9600,        TDS_WEIGHT(1),  TDS_WEIGHT(2)},/*end of band 39,donot change */
                {10050,       TDS_WEIGHT(1),  TDS_WEIGHT(2)},/*begin of band 34,donot change */
                {10087,       TDS_WEIGHT(1),  TDS_WEIGHT(2)},
                {10104,       TDS_WEIGHT(1),  TDS_WEIGHT(2)},
                {10125,       TDS_WEIGHT(1),  TDS_WEIGHT(2)},/*end of band 34,donot change */
                {0,                      0,               0}
            },

    		/*table5*/
    		{
                /*max_arfcn, normal offset,    16QAM offset, reserve*/
                {9420,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},/*begin of band 39,donot change */
                {9440,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {9460,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {9480,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {9500,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {9520,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {9540,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {9560,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {9580,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {9600,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},/*end of band 39,donot change */
                {10050,       TDS_WEIGHT(0),  TDS_WEIGHT(0)},/*begin of band 34,donot change */
                {10087,       TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {10104,       TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {10125,       TDS_WEIGHT(0),  TDS_WEIGHT(0)},/*end of band 34,donot change */
                {0,                      0,               0}
            },

    		/*table6*/
    		{
                /*max_arfcn, normal offset,    16QAM offset, reserve*/
                {9420,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},/*begin of band 39,donot change */
                {9440,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {9460,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {9480,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {9500,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {9520,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {9540,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {9560,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {9580,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {9600,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},/*end of band 39,donot change */
                {10050,       TDS_WEIGHT(0),  TDS_WEIGHT(0)},/*begin of band 34,donot change */
                {10087,       TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {10104,       TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {10125,       TDS_WEIGHT(0),  TDS_WEIGHT(0)},/*end of band 34,donot change */
                {0,                      0,               0}
            },

            /*table7*/
    		{
                /*max_arfcn, normal offset,    16QAM offset, reserve*/
                {9420,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},/*begin of band 39,donot change */
                {9440,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {9460,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {9480,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {9500,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {9520,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {9540,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {9560,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {9580,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {9600,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},/*end of band 39,donot change */
                {10050,       TDS_WEIGHT(0),  TDS_WEIGHT(0)},/*begin of band 34,donot change */
                {10087,       TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {10104,       TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {10125,       TDS_WEIGHT(0),  TDS_WEIGHT(0)},/*end of band 34,donot change */
                {0,                      0,               0}
            },

    		/*table8*/
    		{
                /*max_arfcn, normal offset,    16QAM offset, reserve*/
                {9420,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},/*begin of band 39,donot change */
                {9440,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {9460,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {9480,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {9500,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {9520,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {9540,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {9560,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {9580,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {9600,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},/*end of band 39,donot change */
                {10050,       TDS_WEIGHT(0),  TDS_WEIGHT(0)},/*begin of band 34,donot change */
                {10087,       TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {10104,       TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {10125,       TDS_WEIGHT(0),  TDS_WEIGHT(0)},/*end of band 34,donot change */
                {0,                      0,               0}
            }
        },

        {   //uwTxpower offset
            /*max_arfcn should be same between table0~table8, and must be orded do not change*/
            /*Default Table: table0*/
            {
                /*max_arfcn, normal offset,    16QAM offset, reserve*/
                {9420,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},/*begin of band 39,donot change */
                {9440,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {9460,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {9480,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {9500,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {9520,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {9540,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {9560,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {9580,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {9600,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},/*end of band 39,donot change */
                {10050,       TDS_WEIGHT(0),  TDS_WEIGHT(0)},/*begin of band 34,donot change */
                {10087,       TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {10104,       TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {10125,       TDS_WEIGHT(0),  TDS_WEIGHT(0)},/*end of band 34,donot change */
                {0,                      0,               0}
            },

            /*table1*/
            {
                /*max_arfcn, normal offset,    16QAM offset, reserve*/
                {9420,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},/*begin of band 39,donot change */
                {9440,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {9460,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {9480,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {9500,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {9520,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {9540,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {9560,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {9580,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {9600,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},/*end of band 39,donot change */
                {10050,       TDS_WEIGHT(0),  TDS_WEIGHT(0)},/*begin of band 34,donot change */
                {10087,       TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {10104,       TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {10125,       TDS_WEIGHT(0),  TDS_WEIGHT(0)},/*end of band 34,donot change */
                {0,                      0,               0}
            },

    		/*table2*/
    		{
                /*max_arfcn, normal offset,    16QAM offset, reserve*/
                {9420,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},/*begin of band 39,donot change */
                {9440,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {9460,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {9480,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {9500,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {9520,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {9540,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {9560,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {9580,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {9600,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},/*end of band 39,donot change */
                {10050,       TDS_WEIGHT(0),  TDS_WEIGHT(0)},/*begin of band 34,donot change */
                {10087,       TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {10104,       TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {10125,       TDS_WEIGHT(0),  TDS_WEIGHT(0)},/*end of band 34,donot change */
                {0,                      0,               0}
            },

    		/*table3*/
    		{
                /*max_arfcn, normal offset,    16QAM offset, reserve*/
                {9420,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},/*begin of band 39,donot change */
                {9440,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {9460,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {9480,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {9500,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {9520,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {9540,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {9560,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {9580,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {9600,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},/*end of band 39,donot change */
                {10050,       TDS_WEIGHT(0),  TDS_WEIGHT(0)},/*begin of band 34,donot change */
                {10087,       TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {10104,       TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {10125,       TDS_WEIGHT(0),  TDS_WEIGHT(0)},/*end of band 34,donot change */
                {0,                      0,               0}
            },

    		/*table4*/
            {
                /*max_arfcn, normal offset,    16QAM offset, reserve*/
                {9420,        TDS_WEIGHT(1),  TDS_WEIGHT(2)},/*begin of band 39,donot change */
                {9440,        TDS_WEIGHT(1),  TDS_WEIGHT(2)},
                {9460,        TDS_WEIGHT(1),  TDS_WEIGHT(2)},
                {9480,        TDS_WEIGHT(1),  TDS_WEIGHT(2)},
                {9500,        TDS_WEIGHT(1),  TDS_WEIGHT(2)},
                {9520,        TDS_WEIGHT(1),  TDS_WEIGHT(2)},
                {9540,        TDS_WEIGHT(1),  TDS_WEIGHT(2)},
                {9560,        TDS_WEIGHT(1),  TDS_WEIGHT(2)},
                {9580,        TDS_WEIGHT(1),  TDS_WEIGHT(2)},
                {9600,        TDS_WEIGHT(1),  TDS_WEIGHT(2)},/*end of band 39,donot change */
                {10050,       TDS_WEIGHT(1),  TDS_WEIGHT(2)},/*begin of band 34,donot change */
                {10087,       TDS_WEIGHT(1),  TDS_WEIGHT(2)},
                {10104,       TDS_WEIGHT(1),  TDS_WEIGHT(2)},
                {10125,       TDS_WEIGHT(1),  TDS_WEIGHT(2)},/*end of band 34,donot change */
                {0,                      0,               0}
            },

    		/*table5*/
    		{
                /*max_arfcn, normal offset,    16QAM offset, reserve*/
                {9420,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},/*begin of band 39,donot change */
                {9440,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {9460,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {9480,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {9500,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {9520,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {9540,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {9560,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {9580,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {9600,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},/*end of band 39,donot change */
                {10050,       TDS_WEIGHT(0),  TDS_WEIGHT(0)},/*begin of band 34,donot change */
                {10087,       TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {10104,       TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {10125,       TDS_WEIGHT(0),  TDS_WEIGHT(0)},/*end of band 34,donot change */
                {0,                      0,               0}
            },

    		/*table6*/
    		{
                /*max_arfcn, normal offset,    16QAM offset, reserve*/
                {9420,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},/*begin of band 39,donot change */
                {9440,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {9460,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {9480,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {9500,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {9520,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {9540,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {9560,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {9580,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {9600,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},/*end of band 39,donot change */
                {10050,       TDS_WEIGHT(0),  TDS_WEIGHT(0)},/*begin of band 34,donot change */
                {10087,       TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {10104,       TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {10125,       TDS_WEIGHT(0),  TDS_WEIGHT(0)},/*end of band 34,donot change */
                {0,                      0,               0}
            },

            /*table7*/
    		{
                /*max_arfcn, normal offset,    16QAM offset, reserve*/
                {9420,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},/*begin of band 39,donot change */
                {9440,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {9460,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {9480,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {9500,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {9520,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {9540,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {9560,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {9580,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {9600,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},/*end of band 39,donot change */
                {10050,       TDS_WEIGHT(0),  TDS_WEIGHT(0)},/*begin of band 34,donot change */
                {10087,       TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {10104,       TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {10125,       TDS_WEIGHT(0),  TDS_WEIGHT(0)},/*end of band 34,donot change */
                {0,                      0,               0}
            },

    		/*table8*/
    		{
                /*max_arfcn, normal offset,    16QAM offset, reserve*/
                {9420,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},/*begin of band 39,donot change */
                {9440,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {9460,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {9480,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {9500,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {9520,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {9540,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {9560,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {9580,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {9600,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},/*end of band 39,donot change */
                {10050,       TDS_WEIGHT(0),  TDS_WEIGHT(0)},/*begin of band 34,donot change */
                {10087,       TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {10104,       TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {10125,       TDS_WEIGHT(0),  TDS_WEIGHT(0)},/*end of band 34,donot change */
                {0,                      0,               0}
            }
        },

        {   //uwTxpower offset
            /*max_arfcn should be same between table0~table8, and must be orded do not change*/
            /*Default Table: table0*/
            {
                /*max_arfcn, normal offset,    16QAM offset, reserve*/
                {9420,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},/*begin of band 39,donot change */
                {9440,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {9460,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {9480,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {9500,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {9520,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {9540,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {9560,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {9580,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {9600,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},/*end of band 39,donot change */
                {10050,       TDS_WEIGHT(0),  TDS_WEIGHT(0)},/*begin of band 34,donot change */
                {10087,       TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {10104,       TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {10125,       TDS_WEIGHT(0),  TDS_WEIGHT(0)},/*end of band 34,donot change */
                {0,                      0,               0}
            },

            /*table1*/
            {
                /*max_arfcn, normal offset,    16QAM offset, reserve*/
                {9420,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},/*begin of band 39,donot change */
                {9440,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {9460,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {9480,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {9500,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {9520,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {9540,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {9560,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {9580,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {9600,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},/*end of band 39,donot change */
                {10050,       TDS_WEIGHT(0),  TDS_WEIGHT(0)},/*begin of band 34,donot change */
                {10087,       TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {10104,       TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {10125,       TDS_WEIGHT(0),  TDS_WEIGHT(0)},/*end of band 34,donot change */
                {0,                      0,               0}
            },

    		/*table2*/
    		{
                /*max_arfcn, normal offset,    16QAM offset, reserve*/
                {9420,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},/*begin of band 39,donot change */
                {9440,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {9460,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {9480,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {9500,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {9520,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {9540,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {9560,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {9580,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {9600,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},/*end of band 39,donot change */
                {10050,       TDS_WEIGHT(0),  TDS_WEIGHT(0)},/*begin of band 34,donot change */
                {10087,       TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {10104,       TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {10125,       TDS_WEIGHT(0),  TDS_WEIGHT(0)},/*end of band 34,donot change */
                {0,                      0,               0}
            },

    		/*table3*/
    		{
                /*max_arfcn, normal offset,    16QAM offset, reserve*/
                {9420,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},/*begin of band 39,donot change */
                {9440,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {9460,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {9480,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {9500,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {9520,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {9540,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {9560,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {9580,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {9600,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},/*end of band 39,donot change */
                {10050,       TDS_WEIGHT(0),  TDS_WEIGHT(0)},/*begin of band 34,donot change */
                {10087,       TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {10104,       TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {10125,       TDS_WEIGHT(0),  TDS_WEIGHT(0)},/*end of band 34,donot change */
                {0,                      0,               0}
            },

    		/*table4*/
            {
                /*max_arfcn, normal offset,    16QAM offset, reserve*/
                {9420,        TDS_WEIGHT(1),  TDS_WEIGHT(2)},/*begin of band 39,donot change */
                {9440,        TDS_WEIGHT(1),  TDS_WEIGHT(2)},
                {9460,        TDS_WEIGHT(1),  TDS_WEIGHT(2)},
                {9480,        TDS_WEIGHT(1),  TDS_WEIGHT(2)},
                {9500,        TDS_WEIGHT(1),  TDS_WEIGHT(2)},
                {9520,        TDS_WEIGHT(1),  TDS_WEIGHT(2)},
                {9540,        TDS_WEIGHT(1),  TDS_WEIGHT(2)},
                {9560,        TDS_WEIGHT(1),  TDS_WEIGHT(2)},
                {9580,        TDS_WEIGHT(1),  TDS_WEIGHT(2)},
                {9600,        TDS_WEIGHT(1),  TDS_WEIGHT(2)},/*end of band 39,donot change */
                {10050,       TDS_WEIGHT(1),  TDS_WEIGHT(2)},/*begin of band 34,donot change */
                {10087,       TDS_WEIGHT(1),  TDS_WEIGHT(2)},
                {10104,       TDS_WEIGHT(1),  TDS_WEIGHT(2)},
                {10125,       TDS_WEIGHT(1),  TDS_WEIGHT(2)},/*end of band 34,donot change */
                {0,                      0,               0}
            },

    		/*table5*/
    		{
                /*max_arfcn, normal offset,    16QAM offset, reserve*/
                {9420,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},/*begin of band 39,donot change */
                {9440,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {9460,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {9480,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {9500,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {9520,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {9540,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {9560,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {9580,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {9600,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},/*end of band 39,donot change */
                {10050,       TDS_WEIGHT(0),  TDS_WEIGHT(0)},/*begin of band 34,donot change */
                {10087,       TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {10104,       TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {10125,       TDS_WEIGHT(0),  TDS_WEIGHT(0)},/*end of band 34,donot change */
                {0,                      0,               0}
            },

    		/*table6*/
    		{
                /*max_arfcn, normal offset,    16QAM offset, reserve*/
                {9420,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},/*begin of band 39,donot change */
                {9440,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {9460,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {9480,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {9500,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {9520,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {9540,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {9560,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {9580,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {9600,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},/*end of band 39,donot change */
                {10050,       TDS_WEIGHT(0),  TDS_WEIGHT(0)},/*begin of band 34,donot change */
                {10087,       TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {10104,       TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {10125,       TDS_WEIGHT(0),  TDS_WEIGHT(0)},/*end of band 34,donot change */
                {0,                      0,               0}
            },

            /*table7*/
    		{
                /*max_arfcn, normal offset,    16QAM offset, reserve*/
                {9420,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},/*begin of band 39,donot change */
                {9440,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {9460,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {9480,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {9500,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {9520,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {9540,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {9560,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {9580,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {9600,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},/*end of band 39,donot change */
                {10050,       TDS_WEIGHT(0),  TDS_WEIGHT(0)},/*begin of band 34,donot change */
                {10087,       TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {10104,       TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {10125,       TDS_WEIGHT(0),  TDS_WEIGHT(0)},/*end of band 34,donot change */
                {0,                      0,               0}
            },

        /*table8*/
        {
                /*max_arfcn, normal offset,    16QAM offset, reserve*/
                {9420,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},/*begin of band 39,donot change */
                {9440,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {9460,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {9480,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {9500,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {9520,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {9540,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {9560,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {9580,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {9600,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},/*end of band 39,donot change */
                {10050,       TDS_WEIGHT(0),  TDS_WEIGHT(0)},/*begin of band 34,donot change */
                {10087,       TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {10104,       TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {10125,       TDS_WEIGHT(0),  TDS_WEIGHT(0)},/*end of band 34,donot change */
                {0,                      0,               0}
            }
        }
    }
#else 
,
    {
        /*antenna 0*/
        {   //uwTxpower offset
            /*max_arfcn should be same between table0~table8, and must be orded do not change*/
            /*Default Table: table0*/
            {
                /*max_arfcn, normal offset,    16QAM offset, reserve*/
                {9420,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},/*begin of band 39,donot change */
                {9440,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {9460,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {9480,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {9500,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {9520,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {9540,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {9560,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {9580,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {9600,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},/*end of band 39,donot change */
                {10050,       TDS_WEIGHT(0),  TDS_WEIGHT(0)},/*begin of band 34,donot change */
                {10087,       TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {10104,       TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {10125,       TDS_WEIGHT(0),  TDS_WEIGHT(0)},/*end of band 34,donot change */
                {0,                      0,               0}
            }

            
        },

        {   //uwTxpower offset
            /*max_arfcn should be same between table0~table8, and must be orded do not change*/
            /*Default Table: table0*/
            {
                /*max_arfcn, normal offset,    16QAM offset, reserve*/
                {9420,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},/*begin of band 39,donot change */
                {9440,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {9460,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {9480,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {9500,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {9520,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {9540,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {9560,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {9580,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {9600,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},/*end of band 39,donot change */
                {10050,       TDS_WEIGHT(0),  TDS_WEIGHT(0)},/*begin of band 34,donot change */
                {10087,       TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {10104,       TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {10125,       TDS_WEIGHT(0),  TDS_WEIGHT(0)},/*end of band 34,donot change */
                {0,                      0,               0}
            }
        },

        {   //uwTxpower offset
            /*max_arfcn should be same between table0~table8, and must be orded do not change*/
            /*Default Table: table0*/
            {
                /*max_arfcn, normal offset,    16QAM offset, reserve*/
                {9420,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},/*begin of band 39,donot change */
                {9440,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {9460,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {9480,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {9500,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {9520,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {9540,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {9560,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {9580,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {9600,        TDS_WEIGHT(0),  TDS_WEIGHT(0)},/*end of band 39,donot change */
                {10050,       TDS_WEIGHT(0),  TDS_WEIGHT(0)},/*begin of band 34,donot change */
                {10087,       TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {10104,       TDS_WEIGHT(0),  TDS_WEIGHT(0)},
                {10125,       TDS_WEIGHT(0),  TDS_WEIGHT(0)},/*end of band 34,donot change */
                {0,                      0,               0}
            }
        }
    }

#endif
#endif


 ,
//T_PADDING_RESV_STRUCT
{
  {
  	0,
  	0,
  	0,   //ELNA band34 index
  	0,   //ELNA band39 index
  	0,   // NSFT CLPC Enable/disable
  	1020,//band34 FHC CW TXTTG back off 20*log10(1044/2078)
  	1015,//band39 FHC CW TXTTG back off 20*log10(1044/2078)
  	10,   //band34 FHC CW PD compensaiton backoff Q5
  	10,   //band39 FHC CW PD compensaiton backoff Q5
  	0
  }
}
}};
#endif
#endif

#endif  //#ifndef _TL1D_CUSTOM_RF_H_
