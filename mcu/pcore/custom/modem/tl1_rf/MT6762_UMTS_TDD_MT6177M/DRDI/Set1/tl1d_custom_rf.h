#ifndef _TL1D_CUSTOM_RF_Set1_H_
#define _TL1D_CUSTOM_RF_Set1_H_

#include "tl1d_custom_drdi.h"

#if defined(MT6177M_RF)    
/*don't modify the name and value*/
/*RX PORT*/
#define TDS_PRX1_Set1       ( 1)     // Group1,LNA1,
#define TDS_PRX2_Set1       ( 3 )    // Group1,LNA2,
#define TDS_PRX3_Set1       ( 4 )    // Group1,LNA3,
#define TDS_PRX4_Set1       ( 5 )    // Group1,LNA4,
#define TDS_PRX5_Set1       ( 6 )    // Group1,LNA5,
#define TDS_PRX6_Set1       ( 7 )    // Group1,LNA6,
#define TDS_PRX7_Set1       ( 8 )    // Group1,LNA7,
#define TDS_PRX8_Set1       ( 9 )    // Group1,LNA8,
#define TDS_PRXHB_Set1      ( 10 )    //LNA9,
#define TDS_PRXLB_Set1      ( 2 )    // LNA10,
/*TX PORT*/
#define TDS_TX_TXO1_Set1     ( 0 )      
#define TDS_TX_TXO2_Set1     ( 9 )     
#define TDS_TX_TXO3_Set1     ( 10 )     
#define TDS_TX_TXO4_Set1     ( 4 )    
#define TDS_TX_TXO5_Set1     ( 5 )         
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
const T_TD_CUSTOMIZATION_STRUCT    AST_TL1_RF_PARAMETER_DEFAULT_Set1[] = {{
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
        (0)    +(1<<0) + (1<<2) + (1<<5)+ (1<<7) + (1<<12)+ (1<<13)+ (1<<14)+ (1<<15) + (1<<31),     //TX_CTRL_BITMASK   data[1]
        (0)    +(1<<0) + (1<<2) + (1<<5)+ (1<<7) + (0<<12)+ (0<<13)+ (0<<14)+ (0<<15) + (1<<31),     //TX_2G34 PA_HGAIN  data[2]
        (0)    +(1<<0) + (1<<2) + (1<<5)+ (1<<7) + (0<<12)+ (0<<13)+ (0<<14)+ (0<<15) + (1<<31),     //TX_2G34 PA_MGAIN  data[3]
        (0)    +(1<<0) + (1<<2) + (1<<5)+ (1<<7) + (0<<12)+ (0<<13)+ (0<<14)+ (0<<15) + (1<<31),     //TX_2G34 PA_LGAIN  data[4]
        (0)    +(1<<0) + (1<<2) + (1<<5)+ (1<<7) + (0<<12)+ (0<<13)+ (0<<14)+ (1<<15) + (1<<31),     //TX_2G01 PA_HGAIN  data[5]
        (0)    +(1<<0) + (1<<2) + (1<<5)+ (1<<7) + (0<<12)+ (0<<13)+ (0<<14)+ (1<<15) + (1<<31),     //TX_2G01 PA_MGAIN  data[6]
        (0)    +(1<<0) + (1<<2) + (1<<5)+ (1<<7) + (0<<12)+ (0<<13)+ (0<<14)+ (1<<15) + (1<<31),     //TX_2G01 PA_LGAIN  data[7]
        (0)    +(1<<0) + (1<<2) + (1<<5)+ (1<<7) + (0<<12)+ (0<<13)+ (0<<14)+ (1<<15) + (1<<31),     //TX_1G90 PA_HGAIN  data[8]
        (0)    +(1<<0) + (1<<2) + (1<<5)+ (1<<7) + (0<<12)+ (0<<13)+ (0<<14)+ (1<<15) + (1<<31),     //TX_1G90 PA_MGAIN  data[9]
        (0)    +(1<<0) + (1<<2) + (1<<5)+ (1<<7) + (0<<12)+ (0<<13)+ (0<<14)+ (1<<15) + (1<<31),     //TX_1G90 PA_LGAIN  data[10] 
        (0)    +(0<<0) + (0<<2) + (0<<5)+ (0<<7) + (0<<12)+ (0<<13)+ (0<<14)+ (0<<15) + (0<<31),     //TX_DISABLE        data[11]
    ///////////////////////DBB_BPI_AREA1 end (fix for TX Control Event0 )////////////////////////////////////
    },
    
    {
    /////////////////////DBB_BPI_AREA2 begin (fix for RX Control Event0)/////////////////////////////////////
    /////////////TAS////////////////////RFconflict/////////////////////////////////////////////////////////
        (0)    +(1<<7) + (1<<12)+ (1<<13)+ (1<<14)+ (1<<15) + (1<<31),                               //RX_CTRL_BITMASK   data[12]
        (0)    +(1<<7) + (0<<12)+ (0<<13)+ (0<<14)+ (0<<15) + (1<<31),                               //RX_2G34           data[13]
        (0)    +(1<<7) + (0<<12)+ (0<<13)+ (0<<14)+ (1<<15) + (1<<31),                               //RX_2G01           data[14]
        (0)    +(1<<7) + (0<<12)+ (0<<13)+ (0<<14)+ (1<<15) + (1<<31),                               //RX_1G90           data[15]
        (0)    +(0<<7) + (0<<12)+ (0<<13)+ (0<<14)+ (0<<15) + (0<<31),                               //RX_DISABLE        data[16]     
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
    0x22A,                  //B34 HGv  0.0018V *X   
    0x11D,                  //B34 MGv  0.0018V *X
    0x22A,                  //B34 LGv  0.0018V *X
    0x22A,                  //B39 HGv  0.0018V *X
    0x11D,                  //B39 MGv  0.0018V *X
    0x22A,                  //B39 LGv  0.0018V *X
    0
},

//T_RF_PORT_SEL
{
		TDS_TX_TXO3_Set1,  //Tx2G01
		TDS_TX_TXO3_Set1,  //Tx1G90
		TDS_TX_TXO3_Set1,  //Tx2G34
		TDS_PRXHB_Set1,	 //Rx2G01
		TDS_PRXHB_Set1,	 //Rx1G90
		TDS_PRXHB_Set1,	 //Rx2G34
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
  	1044,//band34 FHC CW TXTTG back off 20*log10(1044/2078)
  	1044,//band39 FHC CW TXTTG back off 20*log10(1044/2078)
  	0,   //band34 FHC CW PD compensaiton backoff Q5
  	0,   //band39 FHC CW PD compensaiton backoff Q5
  	0
  }
}
}};
#endif
#endif

#endif  //#ifndef _TL1D_CUSTOM_RF_H_
