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
 *   MT6177L
 *
 * Description:
 * ------------
 *   MT6177L 3G TDS RF constance definition
 *
 * Author:
 * -------
 *
 *
 *==============================================================================
 *******************************************************************************/

#ifndef  _TL1D_CUSTOM_MIPI_Set3_H_
#define  _TL1D_CUSTOM_MIPI_Set3_H_
/* -------------------------------------------------------------------------------*/
#include "tl1d_custom_drdi.h"

/*--------------------------------------------------------------------------------*/
/*   MIPI Module FIXED                                                            */
/*--------------------------------------------------------------------------------*/
/*MT6177L*/   #define  TDD_PA_Set3                  0x1       /*DO NOT CHANGE*/
/*MT6177L*/   #define  TDD_ASM_Set3                 0x2       /*DO NOT CHANGE*/
/*MT6177L*/   #define  TDD_ETM_Set3                 0x3       /*DO NOT CHANGE*/
/*MT6177L*/   #define  DATA_NULL_Set3               0xFFFF    /*DO NOT CHANGE*/
/*MT6177L*/   #define  DEVICE_NULL_Set3             0xF0F0    /*DO NOT CHANGE*/
/*MT6177L*/   #define  PA_FLAG_Set3                 0xF000    /*DO NOT CHANGE*/


/*--------------------------------------------------------------------------------*/
/*   MIPI Module CONFIGURATION                                                    */
/*--------------------------------------------------------------------------------*/
/*MT6177L*/   #define  TDD_TXM_FLAG_BAND34_Set3      (0 <<0)  /*1: TXM DEVICE*/
                                                                    /*0: NORMAL DEVICE*/
/*MT6177L*/   #define  TDD_TXM_FLAG_BAND39_Set3      (0 <<1)  /*1: TXM DEVICE*/
                                                                    /*0: NORMAL DEVICE*/

/*MT6177L*/   #define  TDD_ASM_USID_BAND34_Set3     (MIPI_USID_ASM0_Set3 <<3)
/*MT6177L*/   #define  TDD_ASM_USID_BAND39_Set3     (MIPI_USID_ASM0_Set3 <<3)
/*MT6177L*/   #define  TDD_PA_USID_BAND34_Set3      (MIPI_USID_PA0_Set3 <<3)
/*MT6177L*/   #define  TDD_PA_USID_BAND39_Set3      (MIPI_USID_PA0_Set3 <<3)
/*MT6177L*/   #define  TDD_ETM_USID_Set3            (0 << 3)//no use

/*--------------------------------------------------------------------------------*/
/*   MIPI Port                                                                    */
/*--------------------------------------------------------------------------------*/
/*MT6177L*/   #define  MIPI_PORT0_Set3              (0 <<12)  /*PORT_NUM<<12*/
/*MT6177L*/   #define  MIPI_PORT1_Set3              (1 <<12)  /*PORT_NUM<<12*/
/*MT6177L*/   #define  MIPI_PORT2_Set3              (2 <<12)  /*PORT_NUM<<12*/
/*MT6177L*/   #define  MIPI_PORT3_Set3              (3 <<12)  /*PORT_NUM<<12*/
/*MT6177L*/   #define  MIPI_PORT4_Set3              (4 <<12)  /*PORT_NUM<<12*/
/*MT6177L*/   #define  MIPI_PORT5_Set3              (5 <<12)  /*PORT_NUM<<12*/
/*MT6177L*/   #define  MIPI_PORT6_Set3              (6 <<12)  /*PORT_NUM<<12*/
/*MT6177L*/   #define  MIPI_PORT7_Set3              (7 <<12)  /*PORT_NUM<<12*/

/*--------------------------------------------------------------------------------*/
/*   FOR parsing tool                                                             */
/*   bit0~bit3: usid; bit4~bit7: portindex                                        */
/*--------------------------------------------------------------------------------*/
/*MT6177L*/   #define  MIPI_USID_INIT0_PORT0_Set3    0x0000
/*MT6177L*/   #define  MIPI_USID_ASM0_PORT0_Set3     0x000F
/*MT6177L*/   #define  MIPI_USID_ASM0_PORT3_Set3     0x003F
/*MT6177L*/   #define  MIPI_USID_ASM1_PORT0_Set3     0x0008
/*MT6177L*/   #define  MIPI_USID_ASM2_PORT0_Set3     0x000A
/*MT6177L*/   #define  MIPI_USID_ASM3_PORT0_Set3     0x0009
/*MT6177L*/   #define  MIPI_USID_PA0_PORT0_Set3      0x000F
/*MT6177L*/   #define  MIPI_USID_PA0_PORT3_Set3      0x003F
/*MT6177L*/   #define  MIPI_USID_PA1_PORT0_Set3      0x000E
/*MT6177L*/   #define  MIPI_USID_ANT0_PORT0_Set3     0x0006

/*-------------------------------------------------------------------------------*/
/*  ETM configuration                                                            */
/*-------------------------------------------------------------------------------*/
/*MT6177L*/   #define TDD_ETM_TXON_A_Set3                      (1<<8)//Do not change
/*MT6177L*/   #define TDD_ETM_TXON_B_Set3                      (2<<8)//Do not change
/*MT6177L*/   #define TDD_ETM_TXON_C_Set3                      (3<<8)//DO NOT CHANGE
/*MT6177L*/   #define TDD_ETM_TXON_D_Set3                      (4<<8)//DO NOT CHANGE
/*MT6177L*/   #define TDD_ETM_TPC_Set3                         (5<<8)//DO NOT CHANGE
/*MT6177L*/   #define TDD_ETM_TXOFF_Set3                       (6<<8)//DO NOT CHANGE

#if defined(_T12193_C_)

const T_MIPI_CUSTOMIZATION_STRUCT AST_TL1_RFFE_PARAMETER_DEFAULT_Set3[] ={
{
    /*TXM DEVICE FLAG*/
    TDD_TXM_FLAG_BAND34_Set3 | TDD_TXM_FLAG_BAND39_Set3,
    /*MIPI DEVICE ID*/
    {
        TDD_PA_Set3,  /*fixed, do not change, BAND34 PA 2G PA*/
        TDD_ASM_Set3, /*fixed, do not change*/
        DEVICE_NULL_Set3,/*fixed, do not change, BAND39 PA*/
        DEVICE_NULL_Set3,
        DEVICE_NULL_Set3,
        DEVICE_NULL_Set3,
        DEVICE_NULL_Set3,
        DEVICE_NULL_Set3
    },
    /*MIPI Init data total 40*6 worlds*/
    {
        {/* 0*/ DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    },
        {/* 1*/ DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    },
        {/* 2*/ DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    },
        {/* 3*/ DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    },
        {/* 4*/ DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    },
        {/* 5*/ DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    },
        {/* 6*/ DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    },
        {/* 7*/ DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    },
        {/* 8*/ DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    },
        {/* 9*/ DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    },
        {/* 10*/DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    },
        {/* 11*/DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    },
        {/* 12*/DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    },
        {/* 13*/DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    },
        {/* 14*/DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    },
        {/* 15*/DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    },
    },

    /*MIPI Data Table For Band34*/
    /*Data Num Do Not Exceed 16 For Each Scenario*/
    {
        /*Band34 Rx On Data*/
        {
            /*                MODULE    ,          PORT         ,     OPERATION ,          USID                   , ADDR, DATA*/
            {/* 0*/ TDD_ASM_Set3  , MIPI_PORT0_Set3 , TDSCDMA_REG_W , TDD_ASM_USID_BAND34_Set3  , 0x05, 0x01 },
            {/* 1*/ DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    },
            {/* 2*/ DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    },
            {/* 3*/ DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    },
            {/* 4*/ DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    },
            {/* 5*/ DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    },
            {/* 6*/ DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    },
            {/* 7*/ DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    },
            {/* 8*/ DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    },
            {/* 9*/ DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    },
            {/* 10*/DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    },
            {/* 11*/DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    },
            {/* 12*/DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    },
            {/* 13*/DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    },
            {/* 14*/DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    },
            {/* 15*/DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    }
        },
        /*Band34 Rx Off Data*/
        {
            /*                MODULE    ,          PORT         ,     OPERATION ,          USID                   , ADDR, DATA*/
            {/* 0*/ TDD_ASM_Set3  , MIPI_PORT0_Set3 , TDSCDMA_REG_W , TDD_ASM_USID_BAND34_Set3  , 0x05, 0x00 },
            {/* 1*/ DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    },
            {/* 2*/ DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    },
            {/* 3*/ DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    },
            {/* 4*/ DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    },
            {/* 5*/ DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    },
            {/* 6*/ DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    },
            {/* 7*/ DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    },
            {/* 8*/ DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    },
            {/* 9*/ DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    },
            {/* 10*/DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    },
            {/* 11*/DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    },
            {/* 12*/DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    },
            {/* 13*/DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    },
            {/* 14*/DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    },
            {/* 15*/DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    }
        },
        /*Band34 Tx On Data*/
        {
            /*                MODULE    ,          PORT         ,     OPERATION ,          USID                   , ADDR, DATA*/
            {/* 0*/ TDD_PA_Set3   , MIPI_PORT1_Set3 , TDSCDMA_REG_W , TDD_PA_USID_BAND34_Set3   , 0x00,  PA_FLAG_Set3 },
            {/* 1*/ TDD_ASM_Set3  , MIPI_PORT0_Set3 , TDSCDMA_REG_W , TDD_ASM_USID_BAND34_Set3  , 0x04, 0x10 },
            {/* 2*/ TDD_ASM_Set3  , MIPI_PORT0_Set3 , TDSCDMA_REG_W , TDD_ASM_USID_BAND34_Set3  , 0x05, 0x03 },
            {/* 3*/ DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    },
            {/* 4*/ DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    },
            {/* 5*/ DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    },
            {/* 6*/ DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    },
            {/* 7*/ DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    },
            {/* 8*/ DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    },
            {/* 9*/ DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    },
            {/* 10*/DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    },
            {/* 11*/DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    },
            {/* 12*/DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    },
            {/* 13*/DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    },
            {/* 14*/DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    },
            {/* 15*/DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    }
        },
        /*Band34 Tx Off Data*/
        {
            /*                MODULE    ,          PORT         ,     OPERATION ,          USID                   , ADDR, DATA*/
            {/* 0*/ TDD_PA_Set3   , MIPI_PORT1_Set3 , TDSCDMA_REG_W , TDD_PA_USID_BAND34_Set3   , 0x00, 0x00 },
            {/* 1*/ TDD_PA_Set3   , MIPI_PORT1_Set3 , TDSCDMA_REG_W , TDD_PA_USID_BAND34_Set3   , 0x01, 0x00 },
            {/* 2*/ TDD_ASM_Set3  , MIPI_PORT0_Set3 , TDSCDMA_REG_W , TDD_ASM_USID_BAND34_Set3  , 0x00, 0x00 },
            {/* 3*/ TDD_ASM_Set3  , MIPI_PORT0_Set3 , TDSCDMA_REG_W , TDD_ASM_USID_BAND34_Set3  , 0x05, 0x00 },
            {/* 4*/ DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    },
            {/* 5*/ DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    },
            {/* 6*/ DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    },
            {/* 7*/ DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    },
            {/* 8*/ DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    },
            {/* 9*/ DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    },
            {/* 10*/DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    },
            {/* 11*/DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    },
            {/* 12*/DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    },
            {/* 13*/DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    },
            {/* 14*/DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    },
            {/* 15*/DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    }
        }
    },
    /*MIPI Data Table For Band39*/
    /*Data Num Do Not Exceed 16 For Each Scenario*/
    {
        /*Band39 Rx On Data*/
        {
            /*                MODULE    ,          PORT         ,     OPERATION ,          USID                   , ADDR, DATA*/
            {/* 0*/ TDD_ASM_Set3  , MIPI_PORT0_Set3 , TDSCDMA_REG_W , TDD_ASM_USID_BAND39_Set3  , 0x05, 0x01 },
            {/* 1*/ DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    },
            {/* 2*/ DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    },
            {/* 3*/ DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    },
            {/* 4*/ DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    },
            {/* 5*/ DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    },
            {/* 6*/ DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    },
            {/* 7*/ DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    },
            {/* 8*/ DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    },
            {/* 9*/ DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    },
            {/* 10*/DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    },
            {/* 11*/DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    },
            {/* 12*/DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    },
            {/* 13*/DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    },
            {/* 14*/DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    },
            {/* 15*/DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    }
        },
        /*Band39 Rx Off Data*/
        {
            /*                MODULE    ,          PORT         ,     OPERATION ,          USID                   , ADDR, DATA*/
            {/* 0*/ TDD_ASM_Set3  , MIPI_PORT0_Set3 , TDSCDMA_REG_W , TDD_ASM_USID_BAND39_Set3  , 0x05, 0x00 },
            {/* 1*/ DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    },
            {/* 2*/ DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    },
            {/* 3*/ DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    },
            {/* 4*/ DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    },
            {/* 5*/ DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    },
            {/* 6*/ DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    },
            {/* 7*/ DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    },
            {/* 8*/ DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    },
            {/* 9*/ DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    },
            {/* 10*/DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    },
            {/* 11*/DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    },
            {/* 12*/DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    },
            {/* 13*/DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    },
            {/* 14*/DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    },
            {/* 15*/DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    }
        },
        /*Band39 Tx On Data*/
        {
            /*                MODULE    ,          PORT         ,     OPERATION ,          USID                   , ADDR, DATA*/
            {/* 0*/ TDD_PA_Set3   , MIPI_PORT1_Set3 , TDSCDMA_REG_W , TDD_PA_USID_BAND39_Set3   , 0x00,  PA_FLAG_Set3 },
            {/* 1*/ TDD_ASM_Set3  , MIPI_PORT0_Set3 , TDSCDMA_REG_W , TDD_ASM_USID_BAND39_Set3  , 0x04, 0x10 },
            {/* 2*/ TDD_ASM_Set3  , MIPI_PORT0_Set3 , TDSCDMA_REG_W , TDD_ASM_USID_BAND39_Set3  , 0x05, 0x03 },
            {/* 3*/ DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    },
            {/* 4*/ DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    },
            {/* 5*/ DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    },
            {/* 6*/ DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    },
            {/* 7*/ DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    },
            {/* 8*/ DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    },
            {/* 9*/ DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    },
            {/* 10*/DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    },
            {/* 11*/DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    },
            {/* 12*/DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    },
            {/* 13*/DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    },
            {/* 14*/DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    },
            {/* 15*/DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    }
        },
        /*Band39 Tx Off Data*/
        {
            /*                MODULE    ,          PORT         ,     OPERATION ,          USID                   , ADDR, DATA*/
            {/* 0*/ TDD_PA_Set3   , MIPI_PORT1_Set3 , TDSCDMA_REG_W , TDD_PA_USID_BAND39_Set3   , 0x00, 0x00 },
            {/* 1*/ TDD_PA_Set3   , MIPI_PORT1_Set3 , TDSCDMA_REG_W , TDD_PA_USID_BAND39_Set3   , 0x01, 0x00 },
            {/* 2*/ TDD_ASM_Set3  , MIPI_PORT0_Set3 , TDSCDMA_REG_W , TDD_ASM_USID_BAND39_Set3  , 0x00, 0x00 },
            {/* 3*/ TDD_ASM_Set3  , MIPI_PORT0_Set3 , TDSCDMA_REG_W , TDD_ASM_USID_BAND39_Set3  , 0x05, 0x00 },
            {/* 4*/ DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    },
            {/* 5*/ DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    },
            {/* 6*/ DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    },
            {/* 7*/ DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    },
            {/* 8*/ DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    },
            {/* 9*/ DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    },
            {/* 10*/DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    },
            {/* 11*/DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    },
            {/* 12*/DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    },
            {/* 13*/DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    },
            {/* 14*/DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    },
            {/* 15*/DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    }
       }
    },
    /*PA Data Table For Band34*/
    /*Data Num Do Not Exceed 16 For Each Scenario*/
    {
        {
            /*                MODULE    ,          PORT         ,     OPERATION ,          USID                   , ADDR, DATA*/
            {/* 0*/ TDD_PA_Set3   , MIPI_PORT1_Set3 , TDSCDMA_REG_W , TDD_PA_USID_BAND34_Set3   , 0x00, 0x2C },//PA HIGH MODE
            {/* 1*/ TDD_PA_Set3   , MIPI_PORT1_Set3 , TDSCDMA_REG_W , TDD_PA_USID_BAND34_Set3   , 0x01, 0x8B },//PA HIGH MODE
            {/* 2*/ TDD_PA_Set3   , MIPI_PORT1_Set3 , TDSCDMA_REG_W , TDD_PA_USID_BAND34_Set3   , 0x02, 0x50 },//PA HIGH MODE
            {/* 3*/ TDD_PA_Set3   , MIPI_PORT1_Set3 , TDSCDMA_REG_W , TDD_PA_USID_BAND34_Set3   , 0x03, 0x86 },//PA HIGH MODE
            {/* 4*/ DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    },//PA HIGH MODE
            {/* 5*/ DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    },//PA HIGH MODE
            {/* 6*/ DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    },//PA HIGH MODE
            {/* 7*/ DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    }//PA HIGH MODE
        },
        {
            /*                MODULE    ,          PORT         ,     OPERATION ,          USID                   , ADDR, DATA*/
            {/* 0*/ TDD_PA_Set3   , MIPI_PORT1_Set3 , TDSCDMA_REG_W , TDD_PA_USID_BAND34_Set3   , 0x00, 0x2C },//PA MIDDLE MODE
            {/* 1*/ TDD_PA_Set3   , MIPI_PORT1_Set3 , TDSCDMA_REG_W , TDD_PA_USID_BAND34_Set3   , 0x01, 0x48 },//PA MIDDLE MODE
            {/* 2*/ TDD_PA_Set3   , MIPI_PORT1_Set3 , TDSCDMA_REG_W , TDD_PA_USID_BAND34_Set3   , 0x02, 0x50 },//PA MIDDLE MODE
            {/* 3*/ TDD_PA_Set3   , MIPI_PORT1_Set3 , TDSCDMA_REG_W , TDD_PA_USID_BAND34_Set3   , 0x03, 0x86 },//PA MIDDLE MODE
            {/* 4*/ DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    },//PA MIDDLE MODE
            {/* 5*/ DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    },//PA MIDDLE MODE
            {/* 6*/ DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    },//PA MIDDLE MODE
            {/* 7*/ DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    }//PA MIDDLE MODE
        },
        {
            /*                MODULE    ,          PORT         ,     OPERATION ,          USID                   , ADDR, DATA*/
            {/* 0*/ TDD_PA_Set3   , MIPI_PORT1_Set3 , TDSCDMA_REG_W , TDD_PA_USID_BAND34_Set3   , 0x00, 0x2C },//PA MIDDLE MODE
            {/* 1*/ TDD_PA_Set3   , MIPI_PORT1_Set3 , TDSCDMA_REG_W , TDD_PA_USID_BAND34_Set3   , 0x01, 0x48 },//PA MIDDLE MODE
            {/* 2*/ TDD_PA_Set3   , MIPI_PORT1_Set3 , TDSCDMA_REG_W , TDD_PA_USID_BAND34_Set3   , 0x02, 0x50 },//PA MIDDLE MODE
            {/* 3*/ TDD_PA_Set3   , MIPI_PORT1_Set3 , TDSCDMA_REG_W , TDD_PA_USID_BAND34_Set3   , 0x03, 0x86 },//PA MIDDLE MODE
            {/* 4*/ DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    },//PA MIDDLE MODE
            {/* 5*/ DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    },//PA MIDDLE MODE
            {/* 6*/ DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    },//PA MIDDLE MODE
            {/* 7*/ DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    }//PA MIDDLE MODE
        }
    },
    /*PA Mode Data for BAND39*/
    /*Data Num Do Not Exceed 8 for Each Scenario*/
    {
        {
            /*                MODULE    ,          PORT         ,     OPERATION ,          USID                   , ADDR, DATA*/
            {/* 0*/ TDD_PA_Set3   , MIPI_PORT1_Set3 , TDSCDMA_REG_W , TDD_PA_USID_BAND39_Set3   , 0x00, 0x1C },//PA HIGH MODE
            {/* 1*/ TDD_PA_Set3   , MIPI_PORT1_Set3 , TDSCDMA_REG_W , TDD_PA_USID_BAND39_Set3   , 0x01, 0x8B },//PA HIGH MODE
            {/* 2*/ TDD_PA_Set3   , MIPI_PORT1_Set3 , TDSCDMA_REG_W , TDD_PA_USID_BAND39_Set3   , 0x04, 0x50 },//PA HIGH MODE
            {/* 3*/ TDD_PA_Set3   , MIPI_PORT1_Set3 , TDSCDMA_REG_W , TDD_PA_USID_BAND39_Set3   , 0x03, 0x86 },//PA HIGH MODE
            {/* 4*/ DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    },//PA HIGH MODE
            {/* 5*/ DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    },//PA HIGH MODE
            {/* 6*/ DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    },//PA HIGH MODE
            {/* 7*/ DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    }//PA HIGH MODE
        },
        {
            /*                MODULE    ,          PORT         ,     OPERATION ,          USID                   , ADDR, DATA*/
            {/* 0*/ TDD_PA_Set3   , MIPI_PORT1_Set3 , TDSCDMA_REG_W , TDD_PA_USID_BAND39_Set3   , 0x00, 0x1C },//PA MIDDLE MODE
            {/* 1*/ TDD_PA_Set3   , MIPI_PORT1_Set3 , TDSCDMA_REG_W , TDD_PA_USID_BAND39_Set3   , 0x01, 0x47 },//PA MIDDLE MODE
            {/* 2*/ TDD_PA_Set3   , MIPI_PORT1_Set3 , TDSCDMA_REG_W , TDD_PA_USID_BAND39_Set3   , 0x04, 0x50 },//PA MIDDLE MODE
            {/* 3*/ TDD_PA_Set3   , MIPI_PORT1_Set3 , TDSCDMA_REG_W , TDD_PA_USID_BAND39_Set3   , 0x03, 0x86 },//PA MIDDLE MODE
            {/* 4*/ DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    },//PA MIDDLE MODE
            {/* 5*/ DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    },//PA MIDDLE MODE
            {/* 6*/ DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    },//PA MIDDLE MODE
            {/* 7*/ DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    }//PA MIDDLE MODE
        },
        {
            /*                MODULE    ,          PORT         ,     OPERATION ,          USID                   , ADDR, DATA*/
            {/* 0*/ TDD_PA_Set3   , MIPI_PORT1_Set3 , TDSCDMA_REG_W , TDD_PA_USID_BAND39_Set3   , 0x00, 0x1C },//PA MIDDLE MODE
            {/* 1*/ TDD_PA_Set3   , MIPI_PORT1_Set3 , TDSCDMA_REG_W , TDD_PA_USID_BAND39_Set3   , 0x01, 0x47 },//PA MIDDLE MODE
            {/* 2*/ TDD_PA_Set3   , MIPI_PORT1_Set3 , TDSCDMA_REG_W , TDD_PA_USID_BAND39_Set3   , 0x04, 0x50 },//PA MIDDLE MODE
            {/* 3*/ TDD_PA_Set3   , MIPI_PORT1_Set3 , TDSCDMA_REG_W , TDD_PA_USID_BAND39_Set3   , 0x03, 0x86 },//PA MIDDLE MODE
            {/* 4*/ DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    },//PA MIDDLE MODE
            {/* 5*/ DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    },//PA MIDDLE MODE
            {/* 6*/ DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    },//PA MIDDLE MODE
            {/* 7*/ DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    }//PA MIDDLE MODE
        }
    },
    //ETM data
    {
        //Warm up data
        {
            /*                MODULE    , TXON Event            PORT         ,     OPERATION ,             USID                   , ADDR, DATA*/
            {/* 0*/ DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    },
            {/* 1*/ DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    },
            {/* 2*/ DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    },
            {/* 3*/ DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    },
            {/* 4*/ DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    },
            {/* 5*/ DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    },
            {/* 6*/ DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    },
            {/* 7*/ DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    },
            {/* 8*/ DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    },
            {/* 9*/ DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    },
            {/* 10*/DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    },
            {/* 11*/DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    },
            {/* 12*/DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    },
            {/* 13*/DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    },
            {/* 14*/DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    },
            {/* 15*/DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    }

        },
         // ETM OFF MODE
        {
            {/* 0*/ DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    },
            {/* 1*/ DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    },
            {/* 2*/ DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    },
            {/* 3*/ DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    },
            {/* 4*/ DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    },
            {/* 5*/ DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    },
            {/* 6*/ DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    },
            {/* 7*/ DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    },
            {/* 8*/ DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    },
            {/* 9*/ DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    },
            {/* 10*/DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    },
            {/* 11*/DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    },
            {/* 12*/DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    },
            {/* 13*/DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    },
            {/* 14*/DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    },
            {/* 15*/DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    }
        },
        //TPC data for band34
        {
            {
                /*                MODULE    ,          PORT         ,     OPERATION ,          USID                   , ADDR, DATA*/
                {/* 0*/ DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    },//PA high mode
                {/* 1*/ DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    },//(bit6:0 0x53*40.9mv = 3.4v )
                {/* 2*/ DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    },
                {/* 3*/ DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    },
                {/* 4*/ DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    },
                {/* 5*/ DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    },
                {/* 6*/ DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    },
                {/* 7*/ DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    }
            },
            {
                {/* 0*/ DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    },//PA middle MODE
                {/* 1*/ DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    },//(bit6:0 0x53*40.9mv = 3.4v, bit7 : Force Buck mode should be 1 )
                {/* 2*/ DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    },
                {/* 3*/ DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    },
                {/* 4*/ DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    },
                {/* 5*/ DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    },
                {/* 6*/ DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    },
                {/* 7*/ DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    }
            },
            {
                {/* 0*/ DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    },//PA Low mode
                {/* 1*/ DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    },//(bit6:0 0x53*40.9mv = 3.4v )
                {/* 2*/ DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    },
                {/* 3*/ DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    },
                {/* 4*/ DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    },
                {/* 5*/ DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    },
                {/* 6*/ DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    },
                {/* 7*/ DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    }
            }
        },
        //TPC data for band39
        {
            {
                /*                MODULE    ,          PORT         ,     OPERATION ,          USID                   , ADDR, DATA*/
                {/* 0*/ DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    },//PA High Mode
                {/* 1*/ DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    },
                {/* 2*/ DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    },
                {/* 3*/ DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    },
                {/* 4*/ DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    },
                {/* 5*/ DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    },
                {/* 6*/ DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    },
                {/* 7*/ DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    }
            },
            {
                {/* 0*/ DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    },//PA Middle mode
                {/* 1*/ DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    },
                {/* 2*/ DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    },
                {/* 3*/ DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    },
                {/* 4*/ DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    },
                {/* 5*/ DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    },
                {/* 6*/ DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    },
                {/* 7*/ DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    }
            },
            {
                {/* 0*/ DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    },//ETM 0.5V mode
                {/* 1*/ DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    },//DO NOT CHANGE
                {/* 2*/ DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    },
                {/* 3*/ DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    },
                {/* 4*/ DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    },
                {/* 5*/ DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    },
                {/* 6*/ DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    },
                {/* 7*/ DATA_NULL_Set3, 0                     , 0             , 0                               , 0   , 0    }
            }
        }
    }
}};
#endif

#endif
