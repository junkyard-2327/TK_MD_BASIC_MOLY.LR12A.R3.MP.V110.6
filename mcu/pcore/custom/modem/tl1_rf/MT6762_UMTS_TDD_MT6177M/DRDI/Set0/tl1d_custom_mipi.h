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
 *   tl1d_custom_mipi.h
 *
 * Project:
 * --------
 *   MT6177M
 *
 * Description:
 * ------------
 *   MT6177M 3G TDS RF constance definition
 *
 * Author:
 * -------
 *
 *
 *==============================================================================
 *******************************************************************************/

#ifndef  _TL1D_CUSTOM_MIPI_Set0_H_
#define  _TL1D_CUSTOM_MIPI_Set0_H_
/* -------------------------------------------------------------------------------*/
#include "tl1d_custom_drdi.h"

/*--------------------------------------------------------------------------------*/
/*   MIPI Module FIXED                                                            */
/*--------------------------------------------------------------------------------*/
/*MT6177M*/   #define  TDD_PA_Set0                  0x1       /*DO NOT CHANGE*/
/*MT6177M*/   #define  TDD_ASM_Set0                 0x2       /*DO NOT CHANGE*/
/*MT6177M*/   #define  TDD_ETM_Set0                 0x3       /*DO NOT CHANGE*/
/*MT6177M*/   #define  TDD_ANT_Set0                 0X4       /*DO NOT CHANGE*/
/*MT6177M*/   #define  DATA_NULL_Set0               0xFFFF    /*DO NOT CHANGE*/
/*MT6177M*/   #define  DEVICE_NULL_Set0             0xF0F0    /*DO NOT CHANGE*/
/*MT6177M*/   #define  PA_FLAG_Set0                 0xF000    /*DO NOT CHANGE*/


/*--------------------------------------------------------------------------------*/
/*   MIPI Module CONFIGURATION                                                    */
/*--------------------------------------------------------------------------------*/
/*MT6177M*/   #define  TDD_TXM_FLAG_BAND34_Set0      (0 <<0)  /*1: TXM DEVICE*/
                                                                    /*0: NORMAL DEVICE*/
/*MT6177M*/   #define  TDD_TXM_FLAG_BAND39_Set0      (0 <<1)  /*1: TXM DEVICE*/
                                                                    /*0: NORMAL DEVICE*/

/*MT6177M*/   #define  TDD_ASM_USID_BAND34_Set0     (MIPI_USID_ASM0_Set0 <<3)
/*MT6177M*/   #define  TDD_ASM_USID_BAND39_Set0     (MIPI_USID_ASM0_Set0 <<3)  
/*MT6177M*/   #define  TDD_PA_USID_BAND34_Set0      (MIPI_USID_ASM0_Set0 <<3)
/*MT6177M*/   #define  TDD_PA_USID_BAND39_Set0      (MIPI_USID_ASM0_Set0 <<3)
/*MT6177M*/   #define  TDD_ETM_USID_Set0            (0 << 3)//no use
/*MT6177M*/   #define  TDD_MIPI_ANT_Set0            (MIPI_USID_ANT0_Set0 <<3)

/*--------------------------------------------------------------------------------*/
/*   MIPI Port                                                                    */
/*--------------------------------------------------------------------------------*/
/*MT6177M*/   #define  MIPI_PORT0_Set0              (0 <<12)  /*PORT_NUM<<12*/
/*MT6177M*/   #define  MIPI_PORT1_Set0              (1 <<12)  /*PORT_NUM<<12*/
/*MT6177M*/   #define  MIPI_PORT2_Set0              (2 <<12)  /*PORT_NUM<<12*/
/*MT6177M*/   #define  MIPI_PORT3_Set0              (3 <<12)  /*PORT_NUM<<12*/
/*MT6177M*/   #define  MIPI_PORT4_Set0              (4 <<12)  /*PORT_NUM<<12*/
/*MT6177M*/   #define  MIPI_PORT5_Set0              (5 <<12)  /*PORT_NUM<<12*/
/*MT6177M*/   #define  MIPI_PORT6_Set0              (6 <<12)  /*PORT_NUM<<12*/
/*MT6177M*/   #define  MIPI_PORT7_Set0              (7 <<12)  /*PORT_NUM<<12*/

/*--------------------------------------------------------------------------------*/
/*   FOR parsing tool                                                             */
/*   bit0~bit3: usid; bit4~bit7: portindex                                        */
/*--------------------------------------------------------------------------------*/
/*MT6177M*/   #define  MIPI_USID_INIT0_PORT0_Set0    0x0000
/*MT6177M*/   #define  MIPI_USID_ASM0_PORT0_Set0     0x000F
/*MT6177M*/   #define  MIPI_USID_ASM0_PORT3_Set0     0x003F
/*MT6177M*/   #define  MIPI_USID_ASM1_PORT0_Set0     0x0008
/*MT6177M*/   #define  MIPI_USID_ASM2_PORT0_Set0     0x000A
/*MT6177M*/   #define  MIPI_USID_ASM3_PORT0_Set0     0x0009
/*MT6177M*/   #define  MIPI_USID_PA0_PORT0_Set0      0x000F
/*MT6177M*/   #define  MIPI_USID_PA0_PORT3_Set0      0x003F
/*MT6177M*/   #define  MIPI_USID_PA1_PORT0_Set0      0x000E
/*MT6177M*/   #define  MIPI_USID_ANT0_PORT2_Set0     0x0006

/*-------------------------------------------------------------------------------*/
/*  ETM configuration                                                            */
/*-------------------------------------------------------------------------------*/
/*MT6177M*/   #define TDD_ETM_TXON_A_Set0                      (1<<8)//Do not change
/*MT6177M*/   #define TDD_ETM_TXON_B_Set0                      (2<<8)//Do not change
/*MT6177M*/   #define TDD_ETM_TXON_C_Set0                      (3<<8)//DO NOT CHANGE
/*MT6177M*/   #define TDD_ETM_TXON_D_Set0                      (4<<8)//DO NOT CHANGE
/*MT6177M*/   #define TDD_ETM_TPC_Set0                         (5<<8)//DO NOT CHANGE
/*MT6177M*/   #define TDD_ETM_TXOFF_Set0                       (6<<8)//DO NOT CHANGE

#if defined(_T12193_C_) 
 
const T_MIPI_CUSTOMIZATION_STRUCT AST_TL1_RFFE_PARAMETER_DEFAULT_Set0[] ={
{
    /*TXM DEVICE FLAG*/
    TDD_TXM_FLAG_BAND34_Set0 | TDD_TXM_FLAG_BAND39_Set0,
    /*MIPI DEVICE ID*/
    {
        TDD_PA_Set0,  /*fixed, do not change, BAND34 PA 2G PA*/ 
        TDD_ASM_Set0, /*fixed, do not change*/
        TDD_ANT_Set0,/*fixed, do not change, BAND39 PA*/
        DEVICE_NULL_Set0,
        DEVICE_NULL_Set0,
        DEVICE_NULL_Set0,
        DEVICE_NULL_Set0,
        DEVICE_NULL_Set0
    },
    /*MIPI Init data total 40*6 worlds*/
    {
        {/* 0*/ DATA_NULL_Set0, 0                     , 0             , 0                               , 0   , 0    },
        {/* 1*/ DATA_NULL_Set0, 0                     , 0             , 0                               , 0   , 0    },
        {/* 2*/ DATA_NULL_Set0, 0                     , 0             , 0                               , 0   , 0    },
        {/* 3*/ DATA_NULL_Set0, 0                     , 0             , 0                               , 0   , 0    },
        {/* 4*/ DATA_NULL_Set0, 0                     , 0             , 0                               , 0   , 0    },
        {/* 5*/ DATA_NULL_Set0, 0                     , 0             , 0                               , 0   , 0    },
        {/* 6*/ DATA_NULL_Set0, 0                     , 0             , 0                               , 0   , 0    },
        {/* 7*/ DATA_NULL_Set0, 0                     , 0             , 0                               , 0   , 0    },
        {/* 8*/ DATA_NULL_Set0, 0                     , 0             , 0                               , 0   , 0    },
        {/* 9*/ DATA_NULL_Set0, 0                     , 0             , 0                               , 0   , 0    },
        {/* 10*/DATA_NULL_Set0, 0                     , 0             , 0                               , 0   , 0    },
        {/* 11*/DATA_NULL_Set0, 0                     , 0             , 0                               , 0   , 0    },
        {/* 12*/DATA_NULL_Set0, 0                     , 0             , 0                               , 0   , 0    },
        {/* 13*/DATA_NULL_Set0, 0                     , 0             , 0                               , 0   , 0    },
        {/* 14*/DATA_NULL_Set0, 0                     , 0             , 0                               , 0   , 0    },
        {/* 15*/DATA_NULL_Set0, 0                     , 0             , 0                               , 0   , 0    },            
    },                  
   
    /*MIPI Data Table For Band34*/
    /*Data Num Do Not Exceed 16 For Each Scenario*/
    {
        /*Band34 Rx On Data*/
        {
            /*                MODULE    ,          PORT         ,     OPERATION ,          USID                   , ADDR, DATA*/
            {/* 0*/ TDD_ASM_Set0  , MIPI_PORT1_Set0 , TDSCDMA_REG_W , TDD_ASM_USID_BAND34_Set0  , 0x00, 0x64 },
            {/* 1*/ TDD_ANT_Set0  , MIPI_PORT2_Set0 , TDSCDMA_REG_W , TDD_MIPI_ANT_Set0         , 0X00, 0X01 },
            {/* 2*/ DATA_NULL_Set0, 0                     , 0             , 0                               , 0   , 0    },
            {/* 3*/ DATA_NULL_Set0, 0                     , 0             , 0                               , 0   , 0    },
            {/* 4*/ DATA_NULL_Set0, 0                     , 0             , 0                               , 0   , 0    },
            {/* 5*/ DATA_NULL_Set0, 0                     , 0             , 0                               , 0   , 0    },
            {/* 6*/ DATA_NULL_Set0, 0                     , 0             , 0                               , 0   , 0    },
            {/* 7*/ DATA_NULL_Set0, 0                     , 0             , 0                               , 0   , 0    },
            {/* 8*/ DATA_NULL_Set0, 0                     , 0             , 0                               , 0   , 0    },
            {/* 9*/ DATA_NULL_Set0, 0                     , 0             , 0                               , 0   , 0    },
            {/* 10*/DATA_NULL_Set0, 0                     , 0             , 0                               , 0   , 0    },
            {/* 11*/DATA_NULL_Set0, 0                     , 0             , 0                               , 0   , 0    },
            {/* 12*/DATA_NULL_Set0, 0                     , 0             , 0                               , 0   , 0    },
            {/* 13*/DATA_NULL_Set0, 0                     , 0             , 0                               , 0   , 0    },
            {/* 14*/DATA_NULL_Set0, 0                     , 0             , 0                               , 0   , 0    },
            {/* 15*/DATA_NULL_Set0, 0                     , 0             , 0                               , 0   , 0    }
        },                                                                                                                 
        /*Band34 Rx Off Data*/                                                                                                      
        {                                                                                                                  
            /*                MODULE    ,          PORT         ,     OPERATION ,          USID                   , ADDR, DATA*/
            {/* 0*/ TDD_ASM_Set0  , MIPI_PORT1_Set0 , TDSCDMA_REG_W , TDD_ASM_USID_BAND34_Set0  , 0x00, 0x00 },
            {/* 1*/ TDD_ANT_Set0  , MIPI_PORT2_Set0 , TDSCDMA_REG_W , TDD_MIPI_ANT_Set0         , 0X00, 0X00 },
            {/* 2*/ DATA_NULL_Set0, 0                     , 0             , 0                               , 0   , 0    },
            {/* 3*/ DATA_NULL_Set0, 0                     , 0             , 0                               , 0   , 0    },
            {/* 4*/ DATA_NULL_Set0, 0                     , 0             , 0                               , 0   , 0    },
            {/* 5*/ DATA_NULL_Set0, 0                     , 0             , 0                               , 0   , 0    },
            {/* 6*/ DATA_NULL_Set0, 0                     , 0             , 0                               , 0   , 0    },
            {/* 7*/ DATA_NULL_Set0, 0                     , 0             , 0                               , 0   , 0    },
            {/* 8*/ DATA_NULL_Set0, 0                     , 0             , 0                               , 0   , 0    },
            {/* 9*/ DATA_NULL_Set0, 0                     , 0             , 0                               , 0   , 0    },
            {/* 10*/DATA_NULL_Set0, 0                     , 0             , 0                               , 0   , 0    },
            {/* 11*/DATA_NULL_Set0, 0                     , 0             , 0                               , 0   , 0    },
            {/* 12*/DATA_NULL_Set0, 0                     , 0             , 0                               , 0   , 0    },
            {/* 13*/DATA_NULL_Set0, 0                     , 0             , 0                               , 0   , 0    },
            {/* 14*/DATA_NULL_Set0, 0                     , 0             , 0                               , 0   , 0    },
            {/* 15*/DATA_NULL_Set0, 0                     , 0             , 0                               , 0   , 0    }
        },                                                                                                                
        /*Band34 Tx On Data*/                                                                                                       
        {                                                                                                                  
            /*                MODULE    ,          PORT         ,     OPERATION ,          USID                   , ADDR, DATA*/
            {/* 0*/ TDD_PA_Set0   , MIPI_PORT0_Set0 , TDSCDMA_REG_W , TDD_PA_USID_BAND34_Set0   , 0x00, PA_FLAG_Set0 },
            {/* 1*/ TDD_ASM_Set0  , MIPI_PORT1_Set0 , TDSCDMA_REG_W , TDD_ASM_USID_BAND34_Set0  , 0x00, 0x5E },
            {/* 2*/ TDD_ANT_Set0  , MIPI_PORT2_Set0 , TDSCDMA_REG_W , TDD_MIPI_ANT_Set0         , 0X00, 0X01 },
            {/* 3*/ DATA_NULL_Set0, 0                     , 0             , 0                               , 0   , 0    },
            {/* 4*/ DATA_NULL_Set0, 0                     , 0             , 0                               , 0   , 0    },
            {/* 5*/ DATA_NULL_Set0, 0                     , 0             , 0                               , 0   , 0    },
            {/* 6*/ DATA_NULL_Set0, 0                     , 0             , 0                               , 0   , 0    },
            {/* 7*/ DATA_NULL_Set0, 0                     , 0             , 0                               , 0   , 0    },
            {/* 8*/ DATA_NULL_Set0, 0                     , 0             , 0                               , 0   , 0    },
            {/* 9*/ DATA_NULL_Set0, 0                     , 0             , 0                               , 0   , 0    },
            {/* 10*/DATA_NULL_Set0, 0                     , 0             , 0                               , 0   , 0    },
            {/* 11*/DATA_NULL_Set0, 0                     , 0             , 0                               , 0   , 0    },
            {/* 12*/DATA_NULL_Set0, 0                     , 0             , 0                               , 0   , 0    },
            {/* 13*/DATA_NULL_Set0, 0                     , 0             , 0                               , 0   , 0    },
            {/* 14*/DATA_NULL_Set0, 0                     , 0             , 0                               , 0   , 0    },
            {/* 15*/DATA_NULL_Set0, 0                     , 0             , 0                               , 0   , 0    }
        },                                                                                                                 
        /*Band34 Tx Off Data*/                                                                                                      
        {                                                                                                                  
            /*                MODULE    ,          PORT         ,     OPERATION ,          USID                   , ADDR, DATA*/
            {/* 0*/ TDD_ASM_Set0  , MIPI_PORT1_Set0 , TDSCDMA_REG_W , TDD_ASM_USID_BAND34_Set0  , 0x00, 0x00 },
            {/* 1*/ TDD_PA_Set0   , MIPI_PORT0_Set0 , TDSCDMA_REG_W , TDD_ASM_USID_BAND34_Set0  , 0x01, 0x00 },
            {/* 2*/ TDD_PA_Set0   , MIPI_PORT0_Set0 , TDSCDMA_REG_W , TDD_ASM_USID_BAND34_Set0  , 0x00, 0x00 },
            {/* 3*/ TDD_ANT_Set0  , MIPI_PORT2_Set0 , TDSCDMA_REG_W , TDD_MIPI_ANT_Set0         , 0X00, 0X00 },
            {/* 4*/ DATA_NULL_Set0, 0                     , 0             , 0                               , 0   , 0    },
            {/* 5*/ DATA_NULL_Set0, 0                     , 0             , 0                               , 0   , 0    },
            {/* 6*/ DATA_NULL_Set0, 0                     , 0             , 0                               , 0   , 0    },
            {/* 7*/ DATA_NULL_Set0, 0                     , 0             , 0                               , 0   , 0    },
            {/* 8*/ DATA_NULL_Set0, 0                     , 0             , 0                               , 0   , 0    },
            {/* 9*/ DATA_NULL_Set0, 0                     , 0             , 0                               , 0   , 0    },
            {/* 10*/DATA_NULL_Set0, 0                     , 0             , 0                               , 0   , 0    },
            {/* 11*/DATA_NULL_Set0, 0                     , 0             , 0                               , 0   , 0    },
            {/* 12*/DATA_NULL_Set0, 0                     , 0             , 0                               , 0   , 0    },
            {/* 13*/DATA_NULL_Set0, 0                     , 0             , 0                               , 0   , 0    },
            {/* 14*/DATA_NULL_Set0, 0                     , 0             , 0                               , 0   , 0    },
            {/* 15*/DATA_NULL_Set0, 0                     , 0             , 0                               , 0   , 0    }
        }                                                                                                                  
    }, 
    /*MIPI Data Table For Band39*/
    /*Data Num Do Not Exceed 16 For Each Scenario*/
    {
        /*Band39 Rx On Data*/
        {
            /*                MODULE    ,          PORT         ,     OPERATION ,          USID                   , ADDR, DATA*/
            {/* 0*/ TDD_ASM_Set0  , MIPI_PORT1_Set0 , TDSCDMA_REG_W , TDD_ASM_USID_BAND39_Set0  , 0x00, 0x64 },
            {/* 1*/ TDD_ANT_Set0  , MIPI_PORT2_Set0 , TDSCDMA_REG_W , TDD_MIPI_ANT_Set0         , 0X00, 0X01 },
            {/* 2*/ DATA_NULL_Set0, 0                     , 0             , 0                               , 0   , 0    },
            {/* 3*/ DATA_NULL_Set0, 0                     , 0             , 0                               , 0   , 0    },
            {/* 4*/ DATA_NULL_Set0, 0                     , 0             , 0                               , 0   , 0    },
            {/* 5*/ DATA_NULL_Set0, 0                     , 0             , 0                               , 0   , 0    },
            {/* 6*/ DATA_NULL_Set0, 0                     , 0             , 0                               , 0   , 0    },
            {/* 7*/ DATA_NULL_Set0, 0                     , 0             , 0                               , 0   , 0    },
            {/* 8*/ DATA_NULL_Set0, 0                     , 0             , 0                               , 0   , 0    },
            {/* 9*/ DATA_NULL_Set0, 0                     , 0             , 0                               , 0   , 0    },
            {/* 10*/DATA_NULL_Set0, 0                     , 0             , 0                               , 0   , 0    },
            {/* 11*/DATA_NULL_Set0, 0                     , 0             , 0                               , 0   , 0    },
            {/* 12*/DATA_NULL_Set0, 0                     , 0             , 0                               , 0   , 0    },
            {/* 13*/DATA_NULL_Set0, 0                     , 0             , 0                               , 0   , 0    },
            {/* 14*/DATA_NULL_Set0, 0                     , 0             , 0                               , 0   , 0    },
            {/* 15*/DATA_NULL_Set0, 0                     , 0             , 0                               , 0   , 0    }
        },                                                                                                                 
        /*Band39 Rx Off Data*/                                                                                                      
        {                                                                                                                  
            /*                MODULE    ,          PORT         ,     OPERATION ,          USID                   , ADDR, DATA*/
            {/* 0*/ TDD_ASM_Set0  , MIPI_PORT1_Set0 , TDSCDMA_REG_W , TDD_ASM_USID_BAND39_Set0  , 0x00, 0x00 },
            {/* 1*/ TDD_ANT_Set0  , MIPI_PORT2_Set0 , TDSCDMA_REG_W , TDD_MIPI_ANT_Set0         , 0X00, 0X00 },
            {/* 2*/ DATA_NULL_Set0, 0                     , 0             , 0                               , 0   , 0    },
            {/* 3*/ DATA_NULL_Set0, 0                     , 0             , 0                               , 0   , 0    },
            {/* 4*/ DATA_NULL_Set0, 0                     , 0             , 0                               , 0   , 0    },
            {/* 5*/ DATA_NULL_Set0, 0                     , 0             , 0                               , 0   , 0    },
            {/* 6*/ DATA_NULL_Set0, 0                     , 0             , 0                               , 0   , 0    },
            {/* 7*/ DATA_NULL_Set0, 0                     , 0             , 0                               , 0   , 0    },
            {/* 8*/ DATA_NULL_Set0, 0                     , 0             , 0                               , 0   , 0    },
            {/* 9*/ DATA_NULL_Set0, 0                     , 0             , 0                               , 0   , 0    },
            {/* 10*/DATA_NULL_Set0, 0                     , 0             , 0                               , 0   , 0    },
            {/* 11*/DATA_NULL_Set0, 0                     , 0             , 0                               , 0   , 0    },
            {/* 12*/DATA_NULL_Set0, 0                     , 0             , 0                               , 0   , 0    },
            {/* 13*/DATA_NULL_Set0, 0                     , 0             , 0                               , 0   , 0    },
            {/* 14*/DATA_NULL_Set0, 0                     , 0             , 0                               , 0   , 0    },
            {/* 15*/DATA_NULL_Set0, 0                     , 0             , 0                               , 0   , 0    }
        },                                                                                                                
        /*Band39 Tx On Data*/                                                                                                       
        {                                                                                                                  
            /*                MODULE    ,          PORT         ,     OPERATION ,          USID                   , ADDR, DATA*/
            {/* 0*/ TDD_PA_Set0   , MIPI_PORT0_Set0 , TDSCDMA_REG_W , TDD_PA_USID_BAND39_Set0   , 0x00, PA_FLAG_Set0 },
            {/* 1*/ TDD_ASM_Set0  , MIPI_PORT1_Set0 , TDSCDMA_REG_W , TDD_ASM_USID_BAND39_Set0  , 0x00, 0x5E },   
            {/* 2*/ TDD_ANT_Set0  , MIPI_PORT2_Set0 , TDSCDMA_REG_W , TDD_MIPI_ANT_Set0         , 0X00, 0X01 },    
            {/* 3*/ DATA_NULL_Set0, 0                     , 0             , 0                               , 0   , 0    },
            {/* 4*/ DATA_NULL_Set0, 0                     , 0             , 0                               , 0   , 0    },
            {/* 5*/ DATA_NULL_Set0, 0                     , 0             , 0                               , 0   , 0    },
            {/* 6*/ DATA_NULL_Set0, 0                     , 0             , 0                               , 0   , 0    },
            {/* 7*/ DATA_NULL_Set0, 0                     , 0             , 0                               , 0   , 0    },
            {/* 8*/ DATA_NULL_Set0, 0                     , 0             , 0                               , 0   , 0    },
            {/* 9*/ DATA_NULL_Set0, 0                     , 0             , 0                               , 0   , 0    },
            {/* 10*/DATA_NULL_Set0, 0                     , 0             , 0                               , 0   , 0    },
            {/* 11*/DATA_NULL_Set0, 0                     , 0             , 0                               , 0   , 0    },
            {/* 12*/DATA_NULL_Set0, 0                     , 0             , 0                               , 0   , 0    },
            {/* 13*/DATA_NULL_Set0, 0                     , 0             , 0                               , 0   , 0    },
            {/* 14*/DATA_NULL_Set0, 0                     , 0             , 0                               , 0   , 0    },
            {/* 15*/DATA_NULL_Set0, 0                     , 0             , 0                               , 0   , 0    }
        },                                                                                                                 
        /*Band39 Tx Off Data*/                                                                                      
        {                                                                                                                  
            /*                MODULE    ,          PORT         ,     OPERATION ,          USID                   , ADDR, DATA*/
            {/* 0*/ TDD_ASM_Set0  , MIPI_PORT1_Set0 , TDSCDMA_REG_W , TDD_ASM_USID_BAND39_Set0  , 0x00, 0x00 },
            {/* 1*/ TDD_PA_Set0   , MIPI_PORT0_Set0 , TDSCDMA_REG_W , TDD_ASM_USID_BAND39_Set0  , 0x01, 0x00 },
            {/* 2*/ TDD_PA_Set0   , MIPI_PORT0_Set0 , TDSCDMA_REG_W , TDD_ASM_USID_BAND39_Set0  , 0x00, 0x00 },
            {/* 3*/ TDD_ANT_Set0  , MIPI_PORT2_Set0 , TDSCDMA_REG_W , TDD_MIPI_ANT_Set0         , 0X00, 0X00 },
            {/* 4*/ DATA_NULL_Set0, 0                     , 0             , 0                               , 0   , 0    },            
            {/* 5*/ DATA_NULL_Set0, 0                     , 0             , 0                               , 0   , 0    },
            {/* 6*/ DATA_NULL_Set0, 0                     , 0             , 0                               , 0   , 0    },
            {/* 7*/ DATA_NULL_Set0, 0                     , 0             , 0                               , 0   , 0    },
            {/* 8*/ DATA_NULL_Set0, 0                     , 0             , 0                               , 0   , 0    },
            {/* 9*/ DATA_NULL_Set0, 0                     , 0             , 0                               , 0   , 0    },
            {/* 10*/DATA_NULL_Set0, 0                     , 0             , 0                               , 0   , 0    },
            {/* 11*/DATA_NULL_Set0, 0                     , 0             , 0                               , 0   , 0    },
            {/* 12*/DATA_NULL_Set0, 0                     , 0             , 0                               , 0   , 0    },
            {/* 13*/DATA_NULL_Set0, 0                     , 0             , 0                               , 0   , 0    },
            {/* 14*/DATA_NULL_Set0, 0                     , 0             , 0                               , 0   , 0    },
            {/* 15*/DATA_NULL_Set0, 0                     , 0             , 0                               , 0   , 0    }
       }                                                                                                                  
    },
    /*PA Data Table For Band34*/
    /*Data Num Do Not Exceed 16 For Each Scenario*/                                                                                                   
    {                                                                                                                      
        {                                                                                                                  
            /*                MODULE    ,          PORT         ,     OPERATION ,          USID                   , ADDR, DATA*/
            {/* 0*/ TDD_PA_Set0   , MIPI_PORT0_Set0 , TDSCDMA_REG_W , TDD_PA_USID_BAND34_Set0   , 0x00, 0x50 },//PA HIGH MODE
            {/* 1*/ TDD_PA_Set0   , MIPI_PORT0_Set0 , TDSCDMA_REG_W , TDD_PA_USID_BAND34_Set0   , 0x01, 0x2B },//PA HIGH MODE
            {/* 2*/ TDD_PA_Set0   , MIPI_PORT0_Set0 , TDSCDMA_REG_W , TDD_PA_USID_BAND34_Set0   , 0x02, 0x71 },//PA HIGH MODE
            {/* 3*/ DATA_NULL_Set0, 0                     , 0             , 0                               , 0   , 0    },//PA HIGH MODE            
            {/* 4*/ DATA_NULL_Set0, 0                     , 0             , 0                               , 0   , 0    },//PA HIGH MODE
            {/* 5*/ DATA_NULL_Set0, 0                     , 0             , 0                               , 0   , 0    },//PA HIGH MODE
            {/* 6*/ DATA_NULL_Set0, 0                     , 0             , 0                               , 0   , 0    },//PA HIGH MODE
            {/* 7*/ DATA_NULL_Set0, 0                     , 0             , 0                               , 0   , 0    }//PA HIGH MODE                                                                                                                                                                 
        },                                                                                                                       
        {                                                                                                                        
            /*                MODULE    ,          PORT         ,     OPERATION ,          USID                   , ADDR, DATA*/
            {/* 0*/ TDD_PA_Set0   , MIPI_PORT0_Set0 , TDSCDMA_REG_W , TDD_PA_USID_BAND34_Set0   , 0x00, 0x52 },//PA MIDDLE MODE
            {/* 1*/ TDD_PA_Set0   , MIPI_PORT0_Set0 , TDSCDMA_REG_W , TDD_PA_USID_BAND34_Set0   , 0x01, 0x2B },//PA MIDDLE MODE
            {/* 2*/ TDD_PA_Set0   , MIPI_PORT0_Set0 , TDSCDMA_REG_W , TDD_PA_USID_BAND34_Set0   , 0x02, 0x71 },//PA MIDDLE MODE
            {/* 3*/ DATA_NULL_Set0, 0                     , 0             , 0                               , 0   , 0    },//PA MIDDLE MODE
            {/* 4*/ DATA_NULL_Set0, 0                     , 0             , 0                               , 0   , 0    },//PA MIDDLE MODE            
            {/* 5*/ DATA_NULL_Set0, 0                     , 0             , 0                               , 0   , 0    },//PA MIDDLE MODE
            {/* 6*/ DATA_NULL_Set0, 0                     , 0             , 0                               , 0   , 0    },//PA MIDDLE MODE
            {/* 7*/ DATA_NULL_Set0, 0                     , 0             , 0                               , 0   , 0    }//PA MIDDLE MODE      
        },                                                                                                                      
        {                                                                                                                        
            /*                MODULE    ,          PORT         ,     OPERATION ,          USID                   , ADDR, DATA*/
            {/* 0*/ TDD_PA_Set0   , MIPI_PORT0_Set0 , TDSCDMA_REG_W , TDD_PA_USID_BAND34_Set0   , 0x00, 0x52 },//PA MIDDLE MODE
            {/* 1*/ TDD_PA_Set0   , MIPI_PORT0_Set0 , TDSCDMA_REG_W , TDD_PA_USID_BAND34_Set0   , 0x01, 0x2B },//PA MIDDLE MODE
            {/* 2*/ TDD_PA_Set0   , MIPI_PORT0_Set0 , TDSCDMA_REG_W , TDD_PA_USID_BAND34_Set0   , 0x02, 0x71 },//PA MIDDLE MODE
            {/* 3*/ DATA_NULL_Set0, 0                     , 0             , 0                               , 0   , 0    },//PA MIDDLE MODE
            {/* 4*/ DATA_NULL_Set0, 0                     , 0             , 0                               , 0   , 0    },//PA MIDDLE MODE
            {/* 5*/ DATA_NULL_Set0, 0                     , 0             , 0                               , 0   , 0    },//PA MIDDLE MODE
            {/* 6*/ DATA_NULL_Set0, 0                     , 0             , 0                               , 0   , 0    },//PA MIDDLE MODE
            {/* 7*/ DATA_NULL_Set0, 0                     , 0             , 0                               , 0   , 0    }//PA MIDDLE MODE        
        }
    },
    /*PA Mode Data for BAND39*/
    /*Data Num Do Not Exceed 8 for Each Scenario*/
    {                                                                                                                      
        {                                                                                                                  
            /*                MODULE    ,          PORT         ,     OPERATION ,          USID                   , ADDR, DATA*/
            {/* 0*/ TDD_PA_Set0   , MIPI_PORT0_Set0 , TDSCDMA_REG_W , TDD_PA_USID_BAND39_Set0   , 0x00, 0x50 },//PA HIGH MODE
            {/* 1*/ TDD_PA_Set0   , MIPI_PORT0_Set0 , TDSCDMA_REG_W , TDD_PA_USID_BAND39_Set0   , 0x01, 0x2B },//PA HIGH MODE
            {/* 2*/ TDD_PA_Set0   , MIPI_PORT0_Set0 , TDSCDMA_REG_W , TDD_PA_USID_BAND39_Set0   , 0x02, 0x71 },//PA HIGH MODE
            {/* 3*/ DATA_NULL_Set0, 0                     , 0             , 0                               , 0   , 0    },//PA MIDDLE MODE            
            {/* 4*/ DATA_NULL_Set0, 0                     , 0             , 0                               , 0   , 0    },//PA HIGH MODE
            {/* 5*/ DATA_NULL_Set0, 0                     , 0             , 0                               , 0   , 0    },//PA HIGH MODE
            {/* 6*/ DATA_NULL_Set0, 0                     , 0             , 0                               , 0   , 0    },//PA HIGH MODE
            {/* 7*/ DATA_NULL_Set0, 0                     , 0             , 0                               , 0   , 0    }//PA HIGH MODE                                                                                                                                                                 
        },                                                                                                                       
        {                                                                                                                        
            /*                MODULE    ,          PORT         ,     OPERATION ,          USID                   , ADDR, DATA*/
            {/* 0*/ TDD_PA_Set0   , MIPI_PORT0_Set0 , TDSCDMA_REG_W , TDD_PA_USID_BAND39_Set0   , 0x00, 0x52 },//PA MIDDLE MODE
            {/* 1*/ TDD_PA_Set0   , MIPI_PORT0_Set0 , TDSCDMA_REG_W , TDD_PA_USID_BAND39_Set0   , 0x01, 0x2B },//PA MIDDLE MODE
            {/* 2*/ TDD_PA_Set0   , MIPI_PORT0_Set0 , TDSCDMA_REG_W , TDD_PA_USID_BAND39_Set0   , 0x02, 0x71 },//PA MIDDLE MODE
            {/* 3*/ DATA_NULL_Set0, 0                     , 0             , 0                               , 0   , 0    },//PA MIDDLE MODE            
            {/* 4*/ DATA_NULL_Set0, 0                     , 0             , 0                               , 0   , 0    },//PA MIDDLE MODE
            {/* 5*/ DATA_NULL_Set0, 0                     , 0             , 0                               , 0   , 0    },//PA MIDDLE MODE
            {/* 6*/ DATA_NULL_Set0, 0                     , 0             , 0                               , 0   , 0    },//PA MIDDLE MODE
            {/* 7*/ DATA_NULL_Set0, 0                     , 0             , 0                               , 0   , 0    }//PA MIDDLE MODE      
        },                                                                                                                      
        {                                                                                                                        
            /*                MODULE    ,          PORT         ,     OPERATION ,          USID                   , ADDR, DATA*/
            {/* 0*/ TDD_PA_Set0   , MIPI_PORT0_Set0 , TDSCDMA_REG_W , TDD_PA_USID_BAND39_Set0   , 0x00, 0x52 },//PA MIDDLE MODE
            {/* 1*/ TDD_PA_Set0   , MIPI_PORT0_Set0 , TDSCDMA_REG_W , TDD_PA_USID_BAND39_Set0   , 0x01, 0x2B },//PA MIDDLE MODE
            {/* 2*/ TDD_PA_Set0   , MIPI_PORT0_Set0 , TDSCDMA_REG_W , TDD_PA_USID_BAND39_Set0   , 0x02, 0x71 },//PA MIDDLE MODE
            {/* 3*/ DATA_NULL_Set0, 0                     , 0             , 0                               , 0   , 0    },//PA MIDDLE MODE            
            {/* 4*/ DATA_NULL_Set0, 0                     , 0             , 0                               , 0   , 0    },//PA MIDDLE MODE
            {/* 5*/ DATA_NULL_Set0, 0                     , 0             , 0                               , 0   , 0    },//PA MIDDLE MODE
            {/* 6*/ DATA_NULL_Set0, 0                     , 0             , 0                               , 0   , 0    },//PA MIDDLE MODE
            {/* 7*/ DATA_NULL_Set0, 0                     , 0             , 0                               , 0   , 0    }//PA MIDDLE MODE        
        }
    },
    //ETM data
    {
        //Warm up data
        {
            /*                MODULE    , TXON Event            PORT         ,     OPERATION ,             USID                   , ADDR, DATA*/
            {/* 0*/ TDD_ETM_Set0|TDD_ETM_TXON_A_Set0   , MIPI_PORT4_Set0 , TDSCDMA_REG_W, TDD_ETM_USID_Set0      , 0x00, 0x70 },
            {/* 1*/ TDD_ETM_Set0|TDD_ETM_TXON_B_Set0   , MIPI_PORT4_Set0 , TDSCDMA_REG_W, TDD_ETM_USID_Set0      , 0x64, 0x01 },
            {/* 2*/ TDD_ETM_Set0|TDD_ETM_TXON_C_Set0   , MIPI_PORT4_Set0 , TDSCDMA_REG_W, TDD_ETM_USID_Set0      , 0x01, 0x00 },
            {/* 3*/ TDD_ETM_Set0|TDD_ETM_TXON_C_Set0   , MIPI_PORT4_Set0 , TDSCDMA_REG_W, TDD_ETM_USID_Set0      , 0x08, 0x8C },
            {/* 4*/ TDD_ETM_Set0|TDD_ETM_TXON_C_Set0   , MIPI_PORT4_Set0 , TDSCDMA_REG_W, TDD_ETM_USID_Set0      , 0x09, 0x02 },
            {/* 5*/ TDD_ETM_Set0|TDD_ETM_TXON_D_Set0   , MIPI_PORT4_Set0 , TDSCDMA_REG_W, TDD_ETM_USID_Set0      , 0x00, 0x74 },
            {/* 6*/ DATA_NULL_Set0, 0                     , 0             , 0                               , 0   , 0    },
            {/* 7*/ DATA_NULL_Set0, 0                     , 0             , 0                               , 0   , 0    },
            {/* 8*/ DATA_NULL_Set0, 0                     , 0             , 0                               , 0   , 0    },
            {/* 9*/ DATA_NULL_Set0, 0                     , 0             , 0                               , 0   , 0    },
            {/* 10*/DATA_NULL_Set0, 0                     , 0             , 0                               , 0   , 0    },
            {/* 11*/DATA_NULL_Set0, 0                     , 0             , 0                               , 0   , 0    },
            {/* 12*/DATA_NULL_Set0, 0                     , 0             , 0                               , 0   , 0    },
            {/* 13*/DATA_NULL_Set0, 0                     , 0             , 0                               , 0   , 0    },
            {/* 14*/DATA_NULL_Set0, 0                     , 0             , 0                               , 0   , 0    },
            {/* 15*/DATA_NULL_Set0, 0                     , 0             , 0                               , 0   , 0    }

        },
         // ETM OFF MODE
        {
            {/* 0*/ TDD_ETM_Set0|TDD_ETM_TXOFF_Set0   , MIPI_PORT4_Set0 , TDSCDMA_REG_W , TDD_ETM_USID_Set0      , 0x09, 0x00 },
            {/* 1*/ TDD_ETM_Set0|TDD_ETM_TXOFF_Set0   , MIPI_PORT4_Set0 , TDSCDMA_REG_W , TDD_ETM_USID_Set0      , 0x00, 0x70 },
            {/* 2*/ TDD_ETM_Set0|TDD_ETM_TXOFF_Set0   , MIPI_PORT4_Set0 , TDSCDMA_REG_W , TDD_ETM_USID_Set0      , 0x00, 0x00 },
            {/* 3*/ DATA_NULL_Set0, 0                     , 0             , 0                               , 0   , 0    },
            {/* 4*/ DATA_NULL_Set0, 0                     , 0             , 0                               , 0   , 0    },
            {/* 5*/ DATA_NULL_Set0, 0                     , 0             , 0                               , 0   , 0    },
            {/* 6*/ DATA_NULL_Set0, 0                     , 0             , 0                               , 0   , 0    },
            {/* 7*/ DATA_NULL_Set0, 0                     , 0             , 0                               , 0   , 0    },
            {/* 8*/ DATA_NULL_Set0, 0                     , 0             , 0                               , 0   , 0    },
            {/* 9*/ DATA_NULL_Set0, 0                     , 0             , 0                               , 0   , 0    },
            {/* 10*/DATA_NULL_Set0, 0                     , 0             , 0                               , 0   , 0    },
            {/* 11*/DATA_NULL_Set0, 0                     , 0             , 0                               , 0   , 0    },
            {/* 12*/DATA_NULL_Set0, 0                     , 0             , 0                               , 0   , 0    },
            {/* 13*/DATA_NULL_Set0, 0                     , 0             , 0                               , 0   , 0    },
            {/* 14*/DATA_NULL_Set0, 0                     , 0             , 0                               , 0   , 0    },
            {/* 15*/DATA_NULL_Set0, 0                     , 0             , 0                               , 0   , 0    }
        },
        //TPC data for band34
        {
            {
                /*                MODULE    ,          PORT         ,     OPERATION ,          USID                   , ADDR, DATA*/
                {/* 0*/ TDD_ETM_Set0|TDD_ETM_TPC_Set0   , MIPI_PORT4_Set0 , TDSCDMA_REG_W , TDD_ETM_USID_Set0      , 0x01, 0x01 },//PA high mode
                {/* 1*/ TDD_ETM_Set0|TDD_ETM_TPC_Set0   , MIPI_PORT4_Set0 , TDSCDMA_REG_W , TDD_ETM_USID_Set0      , 0x08, 0xD3 },//(bit6:0 0x53*40.9mv = 3.4v )
                {/* 2*/ TDD_ETM_Set0|TDD_ETM_TPC_Set0   , MIPI_PORT4_Set0 , TDSCDMA_REG_W , TDD_ETM_USID_Set0      , 0x09, 0x02 },
                {/* 3*/ TDD_ETM_Set0|TDD_ETM_TPC_Set0   , MIPI_PORT4_Set0 , TDSCDMA_REG_W , TDD_ETM_USID_Set0      , 0x00, 0x75 },
                {/* 4*/ DATA_NULL_Set0, 0                     , 0             , 0                               , 0   , 0    },
                {/* 5*/ DATA_NULL_Set0, 0                     , 0             , 0                               , 0   , 0    },
                {/* 6*/ DATA_NULL_Set0, 0                     , 0             , 0                               , 0   , 0    },
                {/* 7*/ DATA_NULL_Set0, 0                     , 0             , 0                               , 0   , 0    }
            },
            {
                {/* 0*/ TDD_ETM_Set0|TDD_ETM_TPC_Set0   , MIPI_PORT4_Set0 , TDSCDMA_REG_W , TDD_ETM_USID_Set0      , 0x01, 0x02 },//PA middle MODE
                {/* 1*/ TDD_ETM_Set0|TDD_ETM_TPC_Set0   , MIPI_PORT4_Set0 , TDSCDMA_REG_W , TDD_ETM_USID_Set0      , 0x08, 0xD3 },//(bit6:0 0x53*40.9mv = 3.4v, bit7 : Force Buck mode should be 1 )
                {/* 2*/ TDD_ETM_Set0|TDD_ETM_TPC_Set0   , MIPI_PORT4_Set0 , TDSCDMA_REG_W , TDD_ETM_USID_Set0      , 0x09, 0x02 },
                {/* 3*/ TDD_ETM_Set0|TDD_ETM_TPC_Set0   , MIPI_PORT4_Set0 , TDSCDMA_REG_W , TDD_ETM_USID_Set0      , 0x00, 0x76 },
                {/* 4*/ DATA_NULL_Set0, 0                     , 0             , 0                               , 0   , 0    },
                {/* 5*/ DATA_NULL_Set0, 0                     , 0             , 0                               , 0   , 0    },
                {/* 6*/ DATA_NULL_Set0, 0                     , 0             , 0                               , 0   , 0    },
                {/* 7*/ DATA_NULL_Set0, 0                     , 0             , 0                               , 0   , 0    }
            },
            {
                {/* 0*/ TDD_ETM_Set0|TDD_ETM_TPC_Set0   , MIPI_PORT4_Set0 , TDSCDMA_REG_W , TDD_ETM_USID_Set0      , 0x01, 0x03 },//PA Low mode
                {/* 1*/ TDD_ETM_Set0|TDD_ETM_TPC_Set0   , MIPI_PORT4_Set0 , TDSCDMA_REG_W , TDD_ETM_USID_Set0      , 0x08, 0x8C },//(bit6:0 0x53*40.9mv = 3.4v )
                {/* 2*/ TDD_ETM_Set0|TDD_ETM_TPC_Set0   , MIPI_PORT4_Set0 , TDSCDMA_REG_W , TDD_ETM_USID_Set0      , 0x09, 0x02 },
                {/* 3*/ TDD_ETM_Set0|TDD_ETM_TPC_Set0   , MIPI_PORT4_Set0 , TDSCDMA_REG_W , TDD_ETM_USID_Set0      , 0x00, 0x77 },
                {/* 4*/ DATA_NULL_Set0, 0                     , 0             , 0                               , 0   , 0    },
                {/* 5*/ DATA_NULL_Set0, 0                     , 0             , 0                               , 0   , 0    },
                {/* 6*/ DATA_NULL_Set0, 0                     , 0             , 0                               , 0   , 0    },
                {/* 7*/ DATA_NULL_Set0, 0                     , 0             , 0                               , 0   , 0    }
            }
        },
        //TPC data for band39
        {
            {
                /*                MODULE    ,          PORT         ,     OPERATION ,          USID                   , ADDR, DATA*/
                {/* 0*/ TDD_ETM_Set0|TDD_ETM_TPC_Set0   , MIPI_PORT4_Set0 , TDSCDMA_REG_W , TDD_ETM_USID_Set0      , 0x01, 0x01 },//PA High Mode
                {/* 1*/ TDD_ETM_Set0|TDD_ETM_TPC_Set0   , MIPI_PORT4_Set0 , TDSCDMA_REG_W , TDD_ETM_USID_Set0      , 0x08, 0xD3 },
                {/* 2*/ TDD_ETM_Set0|TDD_ETM_TPC_Set0   , MIPI_PORT4_Set0 , TDSCDMA_REG_W , TDD_ETM_USID_Set0      , 0x09, 0x02 },
                {/* 3*/ TDD_ETM_Set0|TDD_ETM_TPC_Set0   , MIPI_PORT4_Set0 , TDSCDMA_REG_W , TDD_ETM_USID_Set0      , 0x00, 0x75 },
                {/* 4*/ DATA_NULL_Set0, 0                     , 0             , 0                               , 0   , 0    },
                {/* 5*/ DATA_NULL_Set0, 0                     , 0             , 0                               , 0   , 0    },
                {/* 6*/ DATA_NULL_Set0, 0                     , 0             , 0                               , 0   , 0    },
                {/* 7*/ DATA_NULL_Set0, 0                     , 0             , 0                               , 0   , 0    }
            },
            {
                {/* 0*/ TDD_ETM_Set0|TDD_ETM_TPC_Set0   , MIPI_PORT4_Set0 , TDSCDMA_REG_W , TDD_ETM_USID_Set0      , 0x01, 0x02 },//PA Middle mode
                {/* 1*/ TDD_ETM_Set0|TDD_ETM_TPC_Set0   , MIPI_PORT4_Set0 , TDSCDMA_REG_W , TDD_ETM_USID_Set0      , 0x08, 0xD3 },
                {/* 2*/ TDD_ETM_Set0|TDD_ETM_TPC_Set0   , MIPI_PORT4_Set0 , TDSCDMA_REG_W , TDD_ETM_USID_Set0      , 0x09, 0x02 },
                {/* 3*/ TDD_ETM_Set0|TDD_ETM_TPC_Set0   , MIPI_PORT4_Set0 , TDSCDMA_REG_W , TDD_ETM_USID_Set0      , 0x00, 0x76 },
                {/* 4*/ DATA_NULL_Set0, 0                     , 0             , 0                               , 0   , 0    },
                {/* 5*/ DATA_NULL_Set0, 0                     , 0             , 0                               , 0   , 0    },
                {/* 6*/ DATA_NULL_Set0, 0                     , 0             , 0                               , 0   , 0    },
                {/* 7*/ DATA_NULL_Set0, 0                     , 0             , 0                               , 0   , 0    }
            },
            {
                {/* 0*/ TDD_ETM_Set0|TDD_ETM_TPC_Set0   , MIPI_PORT4_Set0 , TDSCDMA_REG_W , TDD_ETM_USID_Set0      , 0x01, 0x03 },//ETM 0.5V mode
                {/* 1*/ TDD_ETM_Set0|TDD_ETM_TPC_Set0   , MIPI_PORT4_Set0 , TDSCDMA_REG_W , TDD_ETM_USID_Set0      , 0x08, 0x8C },//DO NOT CHANGE
                {/* 2*/ TDD_ETM_Set0|TDD_ETM_TPC_Set0   , MIPI_PORT4_Set0 , TDSCDMA_REG_W , TDD_ETM_USID_Set0      , 0x09, 0x02 },
                {/* 3*/ TDD_ETM_Set0|TDD_ETM_TPC_Set0   , MIPI_PORT4_Set0 , TDSCDMA_REG_W , TDD_ETM_USID_Set0      , 0x00, 0x77 },
                {/* 4*/ DATA_NULL_Set0, 0                     , 0             , 0                               , 0   , 0    },
                {/* 5*/ DATA_NULL_Set0, 0                     , 0             , 0                               , 0   , 0    },
                {/* 6*/ DATA_NULL_Set0, 0                     , 0             , 0                               , 0   , 0    },
                {/* 7*/ DATA_NULL_Set0, 0                     , 0             , 0                               , 0   , 0    }
            }
        }
    }
}};
#endif

#endif
