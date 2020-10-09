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
 *   el1_rf_ca.h
 *
 * Project:
 * --------
 *   MT6176 RF (Orion+)
 *
 * Description:
 * ------------
 *
 *
 * Author:
 * -------
 *
 *
 *******************************************************************************/

/*===============================================================================================*/

#ifndef __EL1D_RF_CA_H__
#define __EL1D_RF_CA_H__

/*******************************************************************************
 * #include
 ******************************************************************************/

/*******************************************************************************
 * #define
 ******************************************************************************/




/*------------------*/
/* Macro Definition */
/*------------------*/
#define LTE_ROUTE_OF_CACFG_IND(i,c,x)   i##_CC##c##_##x##_MIPI_TBL_IDX_SetDefault
#define LTE_ROUTE_OF(i,c,x)             LTE_ROUTE_OF_CACFG_IND(i,c,x)

#define CONSTRUCT_ROUTE(r)             (((1<<((r>>4)&0xF))<<16)|(1<<(r&0xF)))
#define ROUTE_GROUP_CHECK(g,e)         ((e>>16)&(1<<g))
#define ROUTE_MAP_ROUTE(g,r)           (ROUTE_GROUP_CHECK(g,CONSTRUCT_ROUTE(r))?(CONSTRUCT_ROUTE(r)&0xFFFF):0)
#define ROUTE_MAP_IND(g,i,x)           (ROUTE_MAP_ROUTE(g,LTE_ROUTE_OF(i,0,x)) | ROUTE_MAP_ROUTE(g,LTE_ROUTE_OF(i,1,x)))
#define ROUTE_MAP_GROUP(g,x)           (ROUTE_MAP_IND(g,LTE_CACFG_IND_00_SetDefault,x) | ROUTE_MAP_IND(g,LTE_CACFG_IND_01_SetDefault,x) | \
                                        ROUTE_MAP_IND(g,LTE_CACFG_IND_02_SetDefault,x) | ROUTE_MAP_IND(g,LTE_CACFG_IND_03_SetDefault,x) | \
                                        ROUTE_MAP_IND(g,LTE_CACFG_IND_04_SetDefault,x) | ROUTE_MAP_IND(g,LTE_CACFG_IND_05_SetDefault,x) | \
                                        ROUTE_MAP_IND(g,LTE_CACFG_IND_06_SetDefault,x) | ROUTE_MAP_IND(g,LTE_CACFG_IND_07_SetDefault,x) | \
                                        ROUTE_MAP_IND(g,LTE_CACFG_IND_08_SetDefault,x) | ROUTE_MAP_IND(g,LTE_CACFG_IND_09_SetDefault,x) | \
                                        ROUTE_MAP_IND(g,LTE_CACFG_IND_10_SetDefault,x) | ROUTE_MAP_IND(g,LTE_CACFG_IND_11_SetDefault,x) | \
                                        ROUTE_MAP_IND(g,LTE_CACFG_IND_12_SetDefault,x) | ROUTE_MAP_IND(g,LTE_CACFG_IND_13_SetDefault,x) | \
                                        ROUTE_MAP_IND(g,LTE_CACFG_IND_14_SetDefault,x) | ROUTE_MAP_IND(g,LTE_CACFG_IND_15_SetDefault,x) | \
                                        ROUTE_MAP_IND(g,LTE_CACFG_IND_16_SetDefault,x) | ROUTE_MAP_IND(g,LTE_CACFG_IND_17_SetDefault,x) | \
                                        ROUTE_MAP_IND(g,LTE_CACFG_IND_18_SetDefault,x) | ROUTE_MAP_IND(g,LTE_CACFG_IND_19_SetDefault,x) | \
                                        ROUTE_MAP_IND(g,LTE_CACFG_IND_20_SetDefault,x) | ROUTE_MAP_IND(g,LTE_CACFG_IND_21_SetDefault,x) | \
                                        ROUTE_MAP_IND(g,LTE_CACFG_IND_22_SetDefault,x) | ROUTE_MAP_IND(g,LTE_CACFG_IND_23_SetDefault,x) | \
                                        ROUTE_MAP_IND(g,LTE_CACFG_IND_24_SetDefault,x) | ROUTE_MAP_IND(g,LTE_CACFG_IND_25_SetDefault,x) | \
                                        ROUTE_MAP_IND(g,LTE_CACFG_IND_26_SetDefault,x) | ROUTE_MAP_IND(g,LTE_CACFG_IND_27_SetDefault,x) | \
                                        ROUTE_MAP_IND(g,LTE_CACFG_IND_28_SetDefault,x) | ROUTE_MAP_IND(g,LTE_CACFG_IND_29_SetDefault,x) | \
                                        ROUTE_MAP_IND(g,LTE_CACFG_IND_30_SetDefault,x) | ROUTE_MAP_IND(g,LTE_CACFG_IND_31_SetDefault,x) | \
                                        ROUTE_MAP_IND(g,LTE_CACFG_IND_32_SetDefault,x) | ROUTE_MAP_IND(g,LTE_CACFG_IND_33_SetDefault,x) | \
                                        ROUTE_MAP_IND(g,LTE_CACFG_IND_34_SetDefault,x) | ROUTE_MAP_IND(g,LTE_CACFG_IND_35_SetDefault,x) | \
                                        ROUTE_MAP_IND(g,LTE_CACFG_IND_36_SetDefault,x) | ROUTE_MAP_IND(g,LTE_CACFG_IND_37_SetDefault,x) )

/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

/*------------------------*/
/* MIPI RX Route Settings */
/*------------------------*/
/*Single Band*/ #if ROUTE_MAP_GROUP(0,RX) & (1<<0)
/*Single Band*/ #define  __MIPI_RX_ROUTE0__
/*Single Band*/ #endif
/*Single Band*/
/*Single Band*/ #if ROUTE_MAP_GROUP(0,RX) & (1<<1)
/*Single Band*/ #define  __MIPI_RX_ROUTE1__
/*Single Band*/ #endif
/*Single Band*/
/*Single Band*/ #if ROUTE_MAP_GROUP(0,RX) & (1<<2)
/*Single Band*/ #define  __MIPI_RX_ROUTE2__
/*Single Band*/ #endif
/*Single Band*/
/*Single Band*/ #if ROUTE_MAP_GROUP(0,RX) & (1<<3)
/*Single Band*/ #define  __MIPI_RX_ROUTE3__
/*Single Band*/ #endif
/*Single Band*/
/*Single Band*/ #if ROUTE_MAP_GROUP(0,RX) & (1<<4)
/*Single Band*/ #define  __MIPI_RX_ROUTE4__
/*Single Band*/ #endif
/*Single Band*/
/*Single Band*/ #if ROUTE_MAP_GROUP(0,RX) & (1<<5)
/*Single Band*/ #define  __MIPI_RX_ROUTE5__
/*Single Band*/ #endif
/*Single Band*/
/*Single Band*/ #if ROUTE_MAP_GROUP(0,RX) & (1<<6)
/*Single Band*/ #define  __MIPI_RX_ROUTE6__
/*Single Band*/ #endif
/*Single Band*/
/*Single Band*/ #if ROUTE_MAP_GROUP(0,RX) & (1<<7)
/*Single Band*/ #define  __MIPI_RX_ROUTE7__
/*Single Band*/ #endif
/*Single Band*/
/*Single Band*/ #if ROUTE_MAP_GROUP(0,RX) & (1<<8)
/*Single Band*/ #define  __MIPI_RX_ROUTE8__
/*Single Band*/ #endif
/*Single Band*/
/*Single Band*/ #if ROUTE_MAP_GROUP(0,RX) & (1<<9)
/*Single Band*/ #define  __MIPI_RX_ROUTE9__
/*Single Band*/ #endif
/*Single Band*/
/*Single Band*/ #if ROUTE_MAP_GROUP(0,RX) & (1<<10)
/*Single Band*/ #define  __MIPI_RX_ROUTE10__
/*Single Band*/ #endif
/*Single Band*/
/*Single Band*/ #if ROUTE_MAP_GROUP(0,RX) & (1<<11)
/*Single Band*/ #define  __MIPI_RX_ROUTE11__
/*Single Band*/ #endif
/*Single Band*/
/*Single Band*/ #if ROUTE_MAP_GROUP(0,RX) & (1<<12)
/*Single Band*/ #define  __MIPI_RX_ROUTE12__
/*Single Band*/ #endif
/*Single Band*/
/*Single Band*/ #if ROUTE_MAP_GROUP(0,RX) & (1<<13)
/*Single Band*/ #define  __MIPI_RX_ROUTE13__
/*Single Band*/ #endif
/*Single Band*/
/*Single Band*/ #if ROUTE_MAP_GROUP(0,RX) & (1<<14)
/*Single Band*/ #define  __MIPI_RX_ROUTE14__
/*Single Band*/ #endif
/*Single Band*/
/*Single Band*/ #if ROUTE_MAP_GROUP(0,RX) & (1<<15)
/*Single Band*/ #define  __MIPI_RX_ROUTE15__
/*Single Band*/ #endif
/*Single Band*/
/*Single Band*/ #if ROUTE_MAP_GROUP(1,RX) & (1<<0)
/*Single Band*/ #define  __MIPI_RX_ROUTE16__
/*Single Band*/ #endif
/*Single Band*/
/*Single Band*/ #if ROUTE_MAP_GROUP(1,RX) & (1<<1)
/*Single Band*/ #define  __MIPI_RX_ROUTE17__
/*Single Band*/ #endif
/*Single Band*/
/*Single Band*/ #if ROUTE_MAP_GROUP(1,RX) & (1<<2)
/*Single Band*/ #define  __MIPI_RX_ROUTE18__
/*Single Band*/ #endif
/*Single Band*/
/*Single Band*/ #if ROUTE_MAP_GROUP(1,RX) & (1<<3)
/*Single Band*/ #define  __MIPI_RX_ROUTE19__
/*Single Band*/ #endif
/*Single Band*/
/*Single Band*/ #if ROUTE_MAP_GROUP(1,RX) & (1<<4)
/*Single Band*/ #define  __MIPI_RX_ROUTE20__
/*Single Band*/ #endif
/*Single Band*/
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
/*CA Band*/
/*CA Band*/ #if ROUTE_MAP_GROUP(1,RX) & (1<<5)
/*CA Band*/ #define  __MIPI_RX_ROUTE21__
/*CA Band*/ #endif
/*CA Band*/
/*CA Band*/ #if ROUTE_MAP_GROUP(1,RX) & (1<<6)
/*CA Band*/ #define  __MIPI_RX_ROUTE22__
/*CA Band*/ #endif
/*CA Band*/
/*CA Band*/ #if ROUTE_MAP_GROUP(1,RX) & (1<<7)
/*CA Band*/ #define  __MIPI_RX_ROUTE23__
/*CA Band*/ #endif
/*CA Band*/
/*CA Band*/ #if ROUTE_MAP_GROUP(1,RX) & (1<<8)
/*CA Band*/ #define  __MIPI_RX_ROUTE24__
/*CA Band*/ #endif
/*CA Band*/
/*CA Band*/ #if ROUTE_MAP_GROUP(1,RX) & (1<<9)
/*CA Band*/ #define  __MIPI_RX_ROUTE25__
/*CA Band*/ #endif
/*CA Band*/
/*CA Band*/ #if ROUTE_MAP_GROUP(1,RX) & (1<<10)
/*CA Band*/ #define  __MIPI_RX_ROUTE26__
/*CA Band*/ #endif
/*CA Band*/
/*CA Band*/ #if ROUTE_MAP_GROUP(1,RX) & (1<<11)
/*CA Band*/ #define  __MIPI_RX_ROUTE27__
/*CA Band*/ #endif
/*CA Band*/
/*CA Band*/ #if ROUTE_MAP_GROUP(1,RX) & (1<<12)
/*CA Band*/ #define  __MIPI_RX_ROUTE28__
/*CA Band*/ #endif
/*CA Band*/
/*CA Band*/ #if ROUTE_MAP_GROUP(1,RX) & (1<<13)
/*CA Band*/ #define  __MIPI_RX_ROUTE29__
/*CA Band*/ #endif
/*CA Band*/
/*CA Band*/ #if ROUTE_MAP_GROUP(1,RX) & (1<<14)
/*CA Band*/ #define  __MIPI_RX_ROUTE30__
/*CA Band*/ #endif
/*CA Band*/
/*CA Band*/ #if ROUTE_MAP_GROUP(1,RX) & (1<<15)
/*CA Band*/ #define  __MIPI_RX_ROUTE31__
/*CA Band*/ #endif
/*CA Band*/
/*CA Band*/ #if ROUTE_MAP_GROUP(2,RX) & (1<<0)
/*CA Band*/ #define  __MIPI_RX_ROUTE32__
/*CA Band*/ #endif
/*CA Band*/
/*CA Band*/ #if ROUTE_MAP_GROUP(2,RX) & (1<<1)
/*CA Band*/ #define  __MIPI_RX_ROUTE33__
/*CA Band*/ #endif
/*CA Band*/
/*CA Band*/ #if ROUTE_MAP_GROUP(2,RX) & (1<<2)
/*CA Band*/ #define  __MIPI_RX_ROUTE34__
/*CA Band*/ #endif
/*CA Band*/
/*CA Band*/ #if ROUTE_MAP_GROUP(2,RX) & (1<<3)
/*CA Band*/ #define  __MIPI_RX_ROUTE35__
/*CA Band*/ #endif
/*CA Band*/
/*CA Band*/ #if ROUTE_MAP_GROUP(2,RX) & (1<<4)
/*CA Band*/ #define  __MIPI_RX_ROUTE36__
/*CA Band*/ #endif
/*CA Band*/
/*CA Band*/ #if ROUTE_MAP_GROUP(2,RX) & (1<<5)
/*CA Band*/ #define  __MIPI_RX_ROUTE37__
/*CA Band*/ #endif
/*CA Band*/
/*CA Band*/ #if ROUTE_MAP_GROUP(2,RX) & (1<<6)
/*CA Band*/ #define  __MIPI_RX_ROUTE38__
/*CA Band*/ #endif
/*CA Band*/
/*CA Band*/ #if ROUTE_MAP_GROUP(2,RX) & (1<<7)
/*CA Band*/ #define  __MIPI_RX_ROUTE39__
/*CA Band*/ #endif
/*CA Band*/
/*CA Band*/ #if ROUTE_MAP_GROUP(2,RX) & (1<<8)
/*CA Band*/ #define  __MIPI_RX_ROUTE40__
/*CA Band*/ #endif
/*CA Band*/
/*CA Band*/ #if ROUTE_MAP_GROUP(2,RX) & (1<<9)
/*CA Band*/ #define  __MIPI_RX_ROUTE41__
/*CA Band*/ #endif
/*CA Band*/
/*CA Band*/ #if ROUTE_MAP_GROUP(2,RX) & (1<<10)
/*CA Band*/ #define  __MIPI_RX_ROUTE42__
/*CA Band*/ #endif
/*CA Band*/
/*CA Band*/ #if ROUTE_MAP_GROUP(2,RX) & (1<<11)
/*CA Band*/ #define  __MIPI_RX_ROUTE43__
/*CA Band*/ #endif
/*CA Band*/
/*CA Band*/ #if ROUTE_MAP_GROUP(2,RX) & (1<<12)
/*CA Band*/ #define  __MIPI_RX_ROUTE44__
/*CA Band*/ #endif
/*CA Band*/
/*CA Band*/ #if ROUTE_MAP_GROUP(2,RX) & (1<<13)
/*CA Band*/ #define  __MIPI_RX_ROUTE45__
/*CA Band*/ #endif
/*CA Band*/
/*CA Band*/ #if ROUTE_MAP_GROUP(2,RX) & (1<<14)
/*CA Band*/ #define  __MIPI_RX_ROUTE46__
/*CA Band*/ #endif
/*CA Band*/
/*CA Band*/ #if ROUTE_MAP_GROUP(2,RX) & (1<<15)
/*CA Band*/ #define  __MIPI_RX_ROUTE47__
/*CA Band*/ #endif
/*CA Band*/
/*CA Band*/ #if ROUTE_MAP_GROUP(3,RX) & (1<<0)
/*CA Band*/ #define  __MIPI_RX_ROUTE48__
/*CA Band*/ #endif
/*CA Band*/
/*CA Band*/ #if ROUTE_MAP_GROUP(3,RX) & (1<<1)
/*CA Band*/ #define  __MIPI_RX_ROUTE49__
/*CA Band*/ #endif
/*CA Band*/
/*CA Band*/ #if ROUTE_MAP_GROUP(3,RX) & (1<<2)
/*CA Band*/ #define  __MIPI_RX_ROUTE50__
/*CA Band*/ #endif
/*CA Band*/
/*CA Band*/ #if ROUTE_MAP_GROUP(3,RX) & (1<<3)
/*CA Band*/ #define  __MIPI_RX_ROUTE51__
/*CA Band*/ #endif
/*CA Band*/
/*CA Band*/ #if ROUTE_MAP_GROUP(3,RX) & (1<<4)
/*CA Band*/ #define  __MIPI_RX_ROUTE52__
/*CA Band*/ #endif
/*CA Band*/
/*CA Band*/ #if ROUTE_MAP_GROUP(3,RX) & (1<<5)
/*CA Band*/ #define  __MIPI_RX_ROUTE53__
/*CA Band*/ #endif
/*CA Band*/
/*CA Band*/ #if ROUTE_MAP_GROUP(3,RX) & (1<<6)
/*CA Band*/ #define  __MIPI_RX_ROUTE54__
/*CA Band*/ #endif
/*CA Band*/
/*CA Band*/ #if ROUTE_MAP_GROUP(3,RX) & (1<<7)
/*CA Band*/ #define  __MIPI_RX_ROUTE55__
/*CA Band*/ #endif
/*CA Band*/
/*CA Band*/ #if ROUTE_MAP_GROUP(3,RX) & (1<<8)
/*CA Band*/ #define  __MIPI_RX_ROUTE56__
/*CA Band*/ #endif
/*CA Band*/
/*CA Band*/ #if ROUTE_MAP_GROUP(3,RX) & (1<<9)
/*CA Band*/ #define  __MIPI_RX_ROUTE57__
/*CA Band*/ #endif
/*CA Band*/
/*CA Band*/ #if ROUTE_MAP_GROUP(3,RX) & (1<<10)
/*CA Band*/ #define  __MIPI_RX_ROUTE58__
/*CA Band*/ #endif
/*CA Band*/
/*CA Band*/ #if ROUTE_MAP_GROUP(3,RX) & (1<<11)
/*CA Band*/ #define  __MIPI_RX_ROUTE59__
/*CA Band*/ #endif
/*CA Band*/
/*CA Band*/ #if ROUTE_MAP_GROUP(3,RX) & (1<<12)
/*CA Band*/ #define  __MIPI_RX_ROUTE60__
/*CA Band*/ #endif
/*CA Band*/
/*CA Band*/ #if ROUTE_MAP_GROUP(3,RX) & (1<<13)
/*CA Band*/ #define  __MIPI_RX_ROUTE61__
/*CA Band*/ #endif
/*CA Band*/
/*CA Band*/ #if ROUTE_MAP_GROUP(3,RX) & (1<<14)
/*CA Band*/ #define  __MIPI_RX_ROUTE62__
/*CA Band*/ #endif
/*CA Band*/
/*CA Band*/ #if ROUTE_MAP_GROUP(3,RX) & (1<<15)
/*CA Band*/ #define  __MIPI_RX_ROUTE63__
/*CA Band*/ #endif
/*CA Band*/
/*CA Band*/ #if ROUTE_MAP_GROUP(4,RX) & (1<<0)
/*CA Band*/ #define  __MIPI_RX_ROUTE64__
/*CA Band*/ #endif
/*CA Band*/
/*CA Band*/ #if ROUTE_MAP_GROUP(4,RX) & (1<<1)
/*CA Band*/ #define  __MIPI_RX_ROUTE65__
/*CA Band*/ #endif
/*CA Band*/
/*CA Band*/ #if ROUTE_MAP_GROUP(4,RX) & (1<<2)
/*CA Band*/ #define  __MIPI_RX_ROUTE66__
/*CA Band*/ #endif
/*CA Band*/
/*CA Band*/ #if ROUTE_MAP_GROUP(4,RX) & (1<<3)
/*CA Band*/ #define  __MIPI_RX_ROUTE67__
/*CA Band*/ #endif
/*CA Band*/
/*CA Band*/ #if ROUTE_MAP_GROUP(4,RX) & (1<<4)
/*CA Band*/ #define  __MIPI_RX_ROUTE68__
/*CA Band*/ #endif
/*CA Band*/
/*CA Band*/ #if ROUTE_MAP_GROUP(4,RX) & (1<<5)
/*CA Band*/ #define  __MIPI_RX_ROUTE69__
/*CA Band*/ #endif
/*CA Band*/
/*CA Band*/ #if ROUTE_MAP_GROUP(4,RX) & (1<<6)
/*CA Band*/ #define  __MIPI_RX_ROUTE70__
/*CA Band*/ #endif
/*CA Band*/
/*CA Band*/ #if ROUTE_MAP_GROUP(4,RX) & (1<<7)
/*CA Band*/ #define  __MIPI_RX_ROUTE71__
/*CA Band*/ #endif
/*CA Band*/
/*CA Band*/ #if ROUTE_MAP_GROUP(4,RX) & (1<<8)
/*CA Band*/ #define  __MIPI_RX_ROUTE72__
/*CA Band*/ #endif
/*CA Band*/
/*CA Band*/ #if ROUTE_MAP_GROUP(4,RX) & (1<<9)
/*CA Band*/ #define  __MIPI_RX_ROUTE73__
/*CA Band*/ #endif
/*CA Band*/
/*CA Band*/ #if ROUTE_MAP_GROUP(4,RX) & (1<<10)
/*CA Band*/ #define  __MIPI_RX_ROUTE74__
/*CA Band*/ #endif
/*CA Band*/
/*CA Band*/ #if ROUTE_MAP_GROUP(4,RX) & (1<<11)
/*CA Band*/ #define  __MIPI_RX_ROUTE75__
/*CA Band*/ #endif
/*CA Band*/
/*CA Band*/ #if ROUTE_MAP_GROUP(4,RX) & (1<<12)
/*CA Band*/ #define  __MIPI_RX_ROUTE76__
/*CA Band*/ #endif
/*CA Band*/
/*CA Band*/ #if ROUTE_MAP_GROUP(4,RX) & (1<<13)
/*CA Band*/ #define  __MIPI_RX_ROUTE77__
/*CA Band*/ #endif
/*CA Band*/
/*CA Band*/ #if ROUTE_MAP_GROUP(4,RX) & (1<<14)
/*CA Band*/ #define  __MIPI_RX_ROUTE78__
/*CA Band*/ #endif
/*CA Band*/
/*CA Band*/ #if ROUTE_MAP_GROUP(4,RX) & (1<<15)
/*CA Band*/ #define  __MIPI_RX_ROUTE79__
/*CA Band*/ #endif
/*CA Band*/
/*CA Band*/ #if ROUTE_MAP_GROUP(5,RX) & (1<<0)
/*CA Band*/ #define  __MIPI_RX_ROUTE80__
/*CA Band*/ #endif
/*CA Band*/
/*CA Band*/ #if ROUTE_MAP_GROUP(5,RX) & (1<<1)
/*CA Band*/ #define  __MIPI_RX_ROUTE81__
/*CA Band*/ #endif
/*CA Band*/
/*CA Band*/ #if ROUTE_MAP_GROUP(5,RX) & (1<<2)
/*CA Band*/ #define  __MIPI_RX_ROUTE82__
/*CA Band*/ #endif
/*CA Band*/
/*CA Band*/ #if ROUTE_MAP_GROUP(5,RX) & (1<<3)
/*CA Band*/ #define  __MIPI_RX_ROUTE83__
/*CA Band*/ #endif
/*CA Band*/
/*CA Band*/ #if ROUTE_MAP_GROUP(5,RX) & (1<<4)
/*CA Band*/ #define  __MIPI_RX_ROUTE84__
/*CA Band*/ #endif
/*CA Band*/
/*CA Band*/ #if ROUTE_MAP_GROUP(5,RX) & (1<<5)
/*CA Band*/ #define  __MIPI_RX_ROUTE85__
/*CA Band*/ #endif
/*CA Band*/
/*CA Band*/ #if ROUTE_MAP_GROUP(5,RX) & (1<<6)
/*CA Band*/ #define  __MIPI_RX_ROUTE86__
/*CA Band*/ #endif
/*CA Band*/
/*CA Band*/ #if ROUTE_MAP_GROUP(5,RX) & (1<<7)
/*CA Band*/ #define  __MIPI_RX_ROUTE87__
/*CA Band*/ #endif
/*CA Band*/
/*CA Band*/ #if ROUTE_MAP_GROUP(5,RX) & (1<<8)
/*CA Band*/ #define  __MIPI_RX_ROUTE88__
/*CA Band*/ #endif
/*CA Band*/
/*CA Band*/ #if ROUTE_MAP_GROUP(5,RX) & (1<<9)
/*CA Band*/ #define  __MIPI_RX_ROUTE89__
/*CA Band*/ #endif
/*CA Band*/
/*CA Band*/ #if ROUTE_MAP_GROUP(5,RX) & (1<<10)
/*CA Band*/ #define  __MIPI_RX_ROUTE90__
/*CA Band*/ #endif
/*CA Band*/
/*CA Band*/ #if ROUTE_MAP_GROUP(5,RX) & (1<<11)
/*CA Band*/ #define  __MIPI_RX_ROUTE91__
/*CA Band*/ #endif
/*CA Band*/
/*CA Band*/ #if ROUTE_MAP_GROUP(5,RX) & (1<<12)
/*CA Band*/ #define  __MIPI_RX_ROUTE92__
/*CA Band*/ #endif
/*CA Band*/
/*CA Band*/ #if ROUTE_MAP_GROUP(5,RX) & (1<<13)
/*CA Band*/ #define  __MIPI_RX_ROUTE93__
/*CA Band*/ #endif
/*CA Band*/
/*CA Band*/ #if ROUTE_MAP_GROUP(5,RX) & (1<<14)
/*CA Band*/ #define  __MIPI_RX_ROUTE94__
/*CA Band*/ #endif
/*CA Band*/
/*CA Band*/ #if ROUTE_MAP_GROUP(5,RX) & (1<<15)
/*CA Band*/ #define  __MIPI_RX_ROUTE95__
/*CA Band*/ #endif
/*CA Band*/
/*CA Band*/ #if ROUTE_MAP_GROUP(6,RX) & (1<<0)
/*CA Band*/ #define  __MIPI_RX_ROUTE96__
/*CA Band*/ #endif
/*CA Band*/
/*CA Band*/ #if ROUTE_MAP_GROUP(6,RX) & (1<<1)
/*CA Band*/ #define  __MIPI_RX_ROUTE97__
/*CA Band*/ #endif
/*CA Band*/
/*CA Band*/ #if ROUTE_MAP_GROUP(6,RX) & (1<<2)
/*CA Band*/ #define  __MIPI_RX_ROUTE98__
/*CA Band*/ #endif
/*CA Band*/
/*CA Band*/ #if ROUTE_MAP_GROUP(6,RX) & (1<<3)
/*CA Band*/ #define  __MIPI_RX_ROUTE99__
/*CA Band*/ #endif
/*CA Band*/
/*CA Band*/ #if ROUTE_MAP_GROUP(6,RX) & (1<<4)
/*CA Band*/ #define  __MIPI_RX_ROUTE100__
/*CA Band*/ #endif
/*CA Band*/
/*CA Band*/ #if ROUTE_MAP_GROUP(6,RX) & (1<<5)
/*CA Band*/ #define  __MIPI_RX_ROUTE101__
/*CA Band*/ #endif
/*CA Band*/
/*CA Band*/ #if ROUTE_MAP_GROUP(6,RX) & (1<<6)
/*CA Band*/ #define  __MIPI_RX_ROUTE102__
/*CA Band*/ #endif
/*CA Band*/
/*CA Band*/ #if ROUTE_MAP_GROUP(6,RX) & (1<<7)
/*CA Band*/ #define  __MIPI_RX_ROUTE103__
/*CA Band*/ #endif
/*CA Band*/
/*CA Band*/ #if ROUTE_MAP_GROUP(6,RX) & (1<<8)
/*CA Band*/ #define  __MIPI_RX_ROUTE104__
/*CA Band*/ #endif
/*CA Band*/
/*CA Band*/ #if ROUTE_MAP_GROUP(6,RX) & (1<<9)
/*CA Band*/ #define  __MIPI_RX_ROUTE105__
/*CA Band*/ #endif
/*CA Band*/
/*CA Band*/ #if ROUTE_MAP_GROUP(6,RX) & (1<<10)
/*CA Band*/ #define  __MIPI_RX_ROUTE106__
/*CA Band*/ #endif
/*CA Band*/
/*CA Band*/ #if ROUTE_MAP_GROUP(6,RX) & (1<<11)
/*CA Band*/ #define  __MIPI_RX_ROUTE107__
/*CA Band*/ #endif
/*CA Band*/
/*CA Band*/ #if ROUTE_MAP_GROUP(6,RX) & (1<<12)
/*CA Band*/ #define  __MIPI_RX_ROUTE108__
/*CA Band*/ #endif
/*CA Band*/
/*CA Band*/ #if ROUTE_MAP_GROUP(6,RX) & (1<<13)
/*CA Band*/ #define  __MIPI_RX_ROUTE109__
/*CA Band*/ #endif
/*CA Band*/
/*CA Band*/ #if ROUTE_MAP_GROUP(6,RX) & (1<<14)
/*CA Band*/ #define  __MIPI_RX_ROUTE110__
/*CA Band*/ #endif
/*CA Band*/
/*CA Band*/ #if ROUTE_MAP_GROUP(6,RX) & (1<<15)
/*CA Band*/ #define  __MIPI_RX_ROUTE111__
/*CA Band*/ #endif
/*CA Band*/
/*CA Band*/ #if ROUTE_MAP_GROUP(7,RX) & (1<<0)
/*CA Band*/ #define  __MIPI_RX_ROUTE112__
/*CA Band*/ #endif
/*CA Band*/
/*CA Band*/ #if ROUTE_MAP_GROUP(7,RX) & (1<<1)
/*CA Band*/ #define  __MIPI_RX_ROUTE113__
/*CA Band*/ #endif
/*CA Band*/
/*CA Band*/ #if ROUTE_MAP_GROUP(7,RX) & (1<<2)
/*CA Band*/ #define  __MIPI_RX_ROUTE114__
/*CA Band*/ #endif
/*CA Band*/
/*CA Band*/ #if ROUTE_MAP_GROUP(7,RX) & (1<<3)
/*CA Band*/ #define  __MIPI_RX_ROUTE115__
/*CA Band*/ #endif
/*CA Band*/
/*CA Band*/ #if ROUTE_MAP_GROUP(7,RX) & (1<<4)
/*CA Band*/ #define  __MIPI_RX_ROUTE116__
/*CA Band*/ #endif
/*CA Band*/
/*CA Band*/ #if ROUTE_MAP_GROUP(7,RX) & (1<<5)
/*CA Band*/ #define  __MIPI_RX_ROUTE117__
/*CA Band*/ #endif
/*CA Band*/
/*CA Band*/ #if ROUTE_MAP_GROUP(7,RX) & (1<<6)
/*CA Band*/ #define  __MIPI_RX_ROUTE118__
/*CA Band*/ #endif
/*CA Band*/
/*CA Band*/ #if ROUTE_MAP_GROUP(7,RX) & (1<<7)
/*CA Band*/ #define  __MIPI_RX_ROUTE119__
/*CA Band*/ #endif
/*CA Band*/
/*CA Band*/ #if ROUTE_MAP_GROUP(7,RX) & (1<<8)
/*CA Band*/ #define  __MIPI_RX_ROUTE120__
/*CA Band*/ #endif
/*CA Band*/
/*CA Band*/ #if ROUTE_MAP_GROUP(7,RX) & (1<<9)
/*CA Band*/ #define  __MIPI_RX_ROUTE121__
/*CA Band*/ #endif
/*CA Band*/
/*CA Band*/ #if ROUTE_MAP_GROUP(7,RX) & (1<<10)
/*CA Band*/ #define  __MIPI_RX_ROUTE122__
/*CA Band*/ #endif
/*CA Band*/
/*CA Band*/ #if ROUTE_MAP_GROUP(7,RX) & (1<<11)
/*CA Band*/ #define  __MIPI_RX_ROUTE123__
/*CA Band*/ #endif
/*CA Band*/
/*CA Band*/ #if ROUTE_MAP_GROUP(7,RX) & (1<<12)
/*CA Band*/ #define  __MIPI_RX_ROUTE124__
/*CA Band*/ #endif
/*CA Band*/
/*CA Band*/ #if ROUTE_MAP_GROUP(7,RX) & (1<<13)
/*CA Band*/ #define  __MIPI_RX_ROUTE125__
/*CA Band*/ #endif
/*CA Band*/
/*CA Band*/ #if ROUTE_MAP_GROUP(7,RX) & (1<<14)
/*CA Band*/ #define  __MIPI_RX_ROUTE126__
/*CA Band*/ #endif
/*CA Band*/
/*CA Band*/ #if ROUTE_MAP_GROUP(7,RX) & (1<<15)
/*CA Band*/ #define  __MIPI_RX_ROUTE127__
/*CA Band*/ #endif
/*CA Band*/

/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */


/*------------------------*/
/* MIPI TX Route Settings */
/*------------------------*/
/*Single Band*/ #if ROUTE_MAP_GROUP(0,TX) & (1<<0)
/*Single Band*/ #define  __MIPI_TX_ROUTE0__
/*Single Band*/ #endif
/*Single Band*/
/*Single Band*/ #if ROUTE_MAP_GROUP(0,TX) & (1<<1)
/*Single Band*/ #define  __MIPI_TX_ROUTE1__
/*Single Band*/ #endif
/*Single Band*/
/*Single Band*/ #if ROUTE_MAP_GROUP(0,TX) & (1<<2)
/*Single Band*/ #define  __MIPI_TX_ROUTE2__
/*Single Band*/ #endif
/*Single Band*/
/*Single Band*/ #if ROUTE_MAP_GROUP(0,TX) & (1<<3)
/*Single Band*/ #define  __MIPI_TX_ROUTE3__
/*Single Band*/ #endif
/*Single Band*/
/*Single Band*/ #if ROUTE_MAP_GROUP(0,TX) & (1<<4)
/*Single Band*/ #define  __MIPI_TX_ROUTE4__
/*Single Band*/ #endif
/*Single Band*/
/*Single Band*/ #if ROUTE_MAP_GROUP(0,TX) & (1<<5)
/*Single Band*/ #define  __MIPI_TX_ROUTE5__
/*Single Band*/ #endif
/*Single Band*/
/*Single Band*/ #if ROUTE_MAP_GROUP(0,TX) & (1<<6)
/*Single Band*/ #define  __MIPI_TX_ROUTE6__
/*Single Band*/ #endif
/*Single Band*/
/*Single Band*/ #if ROUTE_MAP_GROUP(0,TX) & (1<<7)
/*Single Band*/ #define  __MIPI_TX_ROUTE7__
/*Single Band*/ #endif
/*Single Band*/
/*Single Band*/ #if ROUTE_MAP_GROUP(0,TX) & (1<<8)
/*Single Band*/ #define  __MIPI_TX_ROUTE8__
/*Single Band*/ #endif
/*Single Band*/
/*Single Band*/ #if ROUTE_MAP_GROUP(0,TX) & (1<<9)
/*Single Band*/ #define  __MIPI_TX_ROUTE9__
/*Single Band*/ #endif
/*Single Band*/
/*Single Band*/ #if ROUTE_MAP_GROUP(0,TX) & (1<<10)
/*Single Band*/ #define  __MIPI_TX_ROUTE10__
/*Single Band*/ #endif
/*Single Band*/
/*Single Band*/ #if ROUTE_MAP_GROUP(0,TX) & (1<<11)
/*Single Band*/ #define  __MIPI_TX_ROUTE11__
/*Single Band*/ #endif
/*Single Band*/
/*Single Band*/ #if ROUTE_MAP_GROUP(0,TX) & (1<<12)
/*Single Band*/ #define  __MIPI_TX_ROUTE12__
/*Single Band*/ #endif
/*Single Band*/
/*Single Band*/ #if ROUTE_MAP_GROUP(0,TX) & (1<<13)
/*Single Band*/ #define  __MIPI_TX_ROUTE13__
/*Single Band*/ #endif
/*Single Band*/
/*Single Band*/ #if ROUTE_MAP_GROUP(0,TX) & (1<<14)
/*Single Band*/ #define  __MIPI_TX_ROUTE14__
/*Single Band*/ #endif
/*Single Band*/
/*Single Band*/ #if ROUTE_MAP_GROUP(0,TX) & (1<<15)
/*Single Band*/ #define  __MIPI_TX_ROUTE15__
/*Single Band*/ #endif
/*Single Band*/
/*Single Band*/ #if ROUTE_MAP_GROUP(1,TX) & (1<<0)
/*Single Band*/ #define  __MIPI_TX_ROUTE16__
/*Single Band*/ #endif
/*Single Band*/
/*Single Band*/ #if ROUTE_MAP_GROUP(1,TX) & (1<<1)
/*Single Band*/ #define  __MIPI_TX_ROUTE17__
/*Single Band*/ #endif
/*Single Band*/
/*Single Band*/ #if ROUTE_MAP_GROUP(1,TX) & (1<<2)
/*Single Band*/ #define  __MIPI_TX_ROUTE18__
/*Single Band*/ #endif
/*Single Band*/
/*Single Band*/ #if ROUTE_MAP_GROUP(1,TX) & (1<<3)
/*Single Band*/ #define  __MIPI_TX_ROUTE19__
/*Single Band*/ #endif
/*Single Band*/
/*Single Band*/ #if ROUTE_MAP_GROUP(1,TX) & (1<<4)
/*Single Band*/ #define  __MIPI_TX_ROUTE20__
/*Single Band*/ #endif
/*Single Band*/
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */


/*-----------------------*/
/* RX CA Common Settings */
/*-----------------------*/
#define MIPI_RX_ROUTE_IND25         LTE_Route25
#define MIPI_RX_ROUTE_IND26         LTE_Route26
#define MIPI_RX_ROUTE_IND27         LTE_Route27
#define MIPI_RX_ROUTE_IND28         LTE_Route28
#define MIPI_RX_ROUTE_IND29         LTE_Route29
#define MIPI_RX_ROUTE_IND30         LTE_Route30
#define MIPI_RX_ROUTE_IND31         LTE_Route31
#define MIPI_RX_ROUTE_IND32         LTE_Route32
#define MIPI_RX_ROUTE_IND33         LTE_Route33
#define MIPI_RX_ROUTE_IND34         LTE_Route34
#define MIPI_RX_ROUTE_IND35         LTE_Route35
#define MIPI_RX_ROUTE_IND36         LTE_Route36
#define MIPI_RX_ROUTE_IND37         LTE_Route37
#define MIPI_RX_ROUTE_IND38         LTE_Route38
#define MIPI_RX_ROUTE_IND39         LTE_Route39
#define MIPI_RX_ROUTE_IND40         LTE_Route40
#define MIPI_RX_ROUTE_IND41         LTE_Route41
#define MIPI_RX_ROUTE_IND42         LTE_Route42
#define MIPI_RX_ROUTE_IND43         LTE_Route43
#define MIPI_RX_ROUTE_IND44         LTE_Route44
#define MIPI_RX_ROUTE_IND45         LTE_Route45
#define MIPI_RX_ROUTE_IND46         LTE_Route46
#define MIPI_RX_ROUTE_IND47         LTE_Route47
#define MIPI_RX_ROUTE_IND48         LTE_Route48
#define MIPI_RX_ROUTE_IND49         LTE_Route49
#define MIPI_RX_ROUTE_IND50         LTE_Route50
#define MIPI_RX_ROUTE_IND51         LTE_Route51
#define MIPI_RX_ROUTE_IND52         LTE_Route52
#define MIPI_RX_ROUTE_IND53         LTE_Route53
#define MIPI_RX_ROUTE_IND54         LTE_Route54
#define MIPI_RX_ROUTE_IND55         LTE_Route55
#define MIPI_RX_ROUTE_IND56         LTE_Route56
#define MIPI_RX_ROUTE_IND57         LTE_Route57
#define MIPI_RX_ROUTE_IND58         LTE_Route58
#define MIPI_RX_ROUTE_IND59         LTE_Route59
#define MIPI_RX_ROUTE_IND60         LTE_Route60
#define MIPI_RX_ROUTE_IND61         LTE_Route61
#define MIPI_RX_ROUTE_IND62         LTE_Route62
#define MIPI_RX_ROUTE_IND63         LTE_Route63
#define MIPI_RX_ROUTE_IND64         LTE_Route64
#define MIPI_RX_ROUTE_IND65         LTE_Route65
#define MIPI_RX_ROUTE_IND66         LTE_Route66
#define MIPI_RX_ROUTE_IND67         LTE_Route67
#define MIPI_RX_ROUTE_IND68         LTE_Route68
#define MIPI_RX_ROUTE_IND69         LTE_Route69
#define MIPI_RX_ROUTE_IND70         LTE_Route70
#define MIPI_RX_ROUTE_IND71         LTE_Route71
#define MIPI_RX_ROUTE_IND72         LTE_Route72
#define MIPI_RX_ROUTE_IND73         LTE_Route73
#define MIPI_RX_ROUTE_IND74         LTE_Route74
#define MIPI_RX_ROUTE_IND75         LTE_Route75
#define MIPI_RX_ROUTE_IND76         LTE_Route76
#define MIPI_RX_ROUTE_IND77         LTE_Route77
#define MIPI_RX_ROUTE_IND78         LTE_Route78
#define MIPI_RX_ROUTE_IND79         LTE_Route79
#define MIPI_RX_ROUTE_IND80         LTE_Route80
#define MIPI_RX_ROUTE_IND81         LTE_Route81
#define MIPI_RX_ROUTE_IND82         LTE_Route82
#define MIPI_RX_ROUTE_IND83         LTE_Route83
#define MIPI_RX_ROUTE_IND84         LTE_Route84
#define MIPI_RX_ROUTE_IND85         LTE_Route85
#define MIPI_RX_ROUTE_IND86         LTE_Route86
#define MIPI_RX_ROUTE_IND87         LTE_Route87
#define MIPI_RX_ROUTE_IND88         LTE_Route88

#define MIPI_TX_ROUTE_IND25          LTE_Route25
#define MIPI_TX_ROUTE_IND26          LTE_Route26
#define MIPI_TX_ROUTE_IND27          LTE_Route27
#define MIPI_TX_ROUTE_IND28          LTE_Route28
#define MIPI_TX_ROUTE_IND29          LTE_Route29
#define MIPI_TX_ROUTE_IND30          LTE_Route30
#define MIPI_TX_ROUTE_IND31          LTE_Route31
#define MIPI_TX_ROUTE_IND32          LTE_Route32
#define MIPI_TX_ROUTE_IND33          LTE_Route33
#define MIPI_TX_ROUTE_IND34          LTE_Route34
#define MIPI_TX_ROUTE_IND35          LTE_Route35
#define MIPI_TX_ROUTE_IND36          LTE_Route36
#define MIPI_TX_ROUTE_IND37          LTE_Route37
#define MIPI_TX_ROUTE_IND38          LTE_Route38
#define MIPI_TX_ROUTE_IND39          LTE_Route39
#define MIPI_TX_ROUTE_IND40          LTE_Route40
#define MIPI_TX_ROUTE_IND41          LTE_Route41
#define MIPI_TX_ROUTE_IND42          LTE_Route42
#define MIPI_TX_ROUTE_IND43          LTE_Route43
#define MIPI_TX_ROUTE_IND44          LTE_Route44
#define MIPI_TX_ROUTE_IND45          LTE_Route45
#define MIPI_TX_ROUTE_IND46          LTE_Route46
#define MIPI_TX_ROUTE_IND47          LTE_Route47
#define MIPI_TX_ROUTE_IND48          LTE_Route48
#define MIPI_TX_ROUTE_IND49          LTE_Route49
#define MIPI_TX_ROUTE_IND50          LTE_Route50
#define MIPI_TX_ROUTE_IND51          LTE_Route51
#define MIPI_TX_ROUTE_IND52          LTE_Route52
#define MIPI_TX_ROUTE_IND53          LTE_Route53
#define MIPI_TX_ROUTE_IND54          LTE_Route54
#define MIPI_TX_ROUTE_IND55          LTE_Route55
#define MIPI_TX_ROUTE_IND56          LTE_Route56
#define MIPI_TX_ROUTE_IND57          LTE_Route57
#define MIPI_TX_ROUTE_IND58          LTE_Route58
#define MIPI_TX_ROUTE_IND59          LTE_Route59
#define MIPI_TX_ROUTE_IND60          LTE_Route60
#define MIPI_TX_ROUTE_IND61          LTE_Route61
#define MIPI_TX_ROUTE_IND62          LTE_Route62
#define MIPI_TX_ROUTE_IND63          LTE_Route63
#define MIPI_TX_ROUTE_IND64          LTE_Route64
#define MIPI_TX_ROUTE_IND65          LTE_Route65
#define MIPI_TX_ROUTE_IND66          LTE_Route66
#define MIPI_TX_ROUTE_IND67          LTE_Route67
#define MIPI_TX_ROUTE_IND68          LTE_Route68
#define MIPI_TX_ROUTE_IND69          LTE_Route69
#define MIPI_TX_ROUTE_IND70          LTE_Route70
#define MIPI_TX_ROUTE_IND71          LTE_Route71
#define MIPI_TX_ROUTE_IND72          LTE_Route72
#define MIPI_TX_ROUTE_IND73          LTE_Route73
#define MIPI_TX_ROUTE_IND74          LTE_Route74
#define MIPI_TX_ROUTE_IND75          LTE_Route75
#define MIPI_TX_ROUTE_IND76          LTE_Route76
#define MIPI_TX_ROUTE_IND77          LTE_Route77
#define MIPI_TX_ROUTE_IND78          LTE_Route78
#define MIPI_TX_ROUTE_IND79          LTE_Route79
#define MIPI_TX_ROUTE_IND80          LTE_Route80
#define MIPI_TX_ROUTE_IND81          LTE_Route81
#define MIPI_TX_ROUTE_IND82          LTE_Route82
#define MIPI_TX_ROUTE_IND83          LTE_Route83
#define MIPI_TX_ROUTE_IND84          LTE_Route84
#define MIPI_TX_ROUTE_IND85          LTE_Route85
#define MIPI_TX_ROUTE_IND86          LTE_Route86
#define MIPI_TX_ROUTE_IND87          LTE_Route87
#define MIPI_TX_ROUTE_IND88          LTE_Route88

#define MIPI_ANT_ROUTE_IND25          LTE_Route25
#define MIPI_ANT_ROUTE_IND26          LTE_Route26
#define MIPI_ANT_ROUTE_IND27          LTE_Route27
#define MIPI_ANT_ROUTE_IND28          LTE_Route28
#define MIPI_ANT_ROUTE_IND29          LTE_Route29
#define MIPI_ANT_ROUTE_IND30          LTE_Route30
#define MIPI_ANT_ROUTE_IND31          LTE_Route31
#define MIPI_ANT_ROUTE_IND32          LTE_Route32
#define MIPI_ANT_ROUTE_IND33          LTE_Route33
#define MIPI_ANT_ROUTE_IND34          LTE_Route34
#define MIPI_ANT_ROUTE_IND35          LTE_Route35
#define MIPI_ANT_ROUTE_IND36          LTE_Route36
#define MIPI_ANT_ROUTE_IND37          LTE_Route37
#define MIPI_ANT_ROUTE_IND38          LTE_Route38
#define MIPI_ANT_ROUTE_IND39          LTE_Route39
#define MIPI_ANT_ROUTE_IND40          LTE_Route40
#define MIPI_ANT_ROUTE_IND41          LTE_Route41
#define MIPI_ANT_ROUTE_IND42          LTE_Route42
#define MIPI_ANT_ROUTE_IND43          LTE_Route43
#define MIPI_ANT_ROUTE_IND44          LTE_Route44
#define MIPI_ANT_ROUTE_IND45          LTE_Route45
#define MIPI_ANT_ROUTE_IND46          LTE_Route46
#define MIPI_ANT_ROUTE_IND47          LTE_Route47
#define MIPI_ANT_ROUTE_IND48          LTE_Route48
#define MIPI_ANT_ROUTE_IND49          LTE_Route49
#define MIPI_ANT_ROUTE_IND50          LTE_Route50
#define MIPI_ANT_ROUTE_IND51          LTE_Route51
#define MIPI_ANT_ROUTE_IND52          LTE_Route52
#define MIPI_ANT_ROUTE_IND53          LTE_Route53
#define MIPI_ANT_ROUTE_IND54          LTE_Route54
#define MIPI_ANT_ROUTE_IND55          LTE_Route55
#define MIPI_ANT_ROUTE_IND56          LTE_Route56
#define MIPI_ANT_ROUTE_IND57          LTE_Route57
#define MIPI_ANT_ROUTE_IND58          LTE_Route58
#define MIPI_ANT_ROUTE_IND59          LTE_Route59
#define MIPI_ANT_ROUTE_IND60          LTE_Route60
#define MIPI_ANT_ROUTE_IND61          LTE_Route61
#define MIPI_ANT_ROUTE_IND62          LTE_Route62
#define MIPI_ANT_ROUTE_IND63          LTE_Route63
#define MIPI_ANT_ROUTE_IND64          LTE_Route64
#define MIPI_ANT_ROUTE_IND65          LTE_Route65
#define MIPI_ANT_ROUTE_IND66          LTE_Route66
#define MIPI_ANT_ROUTE_IND67          LTE_Route67
#define MIPI_ANT_ROUTE_IND68          LTE_Route68
#define MIPI_ANT_ROUTE_IND69          LTE_Route69
#define MIPI_ANT_ROUTE_IND70          LTE_Route70
#define MIPI_ANT_ROUTE_IND71          LTE_Route71
#define MIPI_ANT_ROUTE_IND72          LTE_Route72
#define MIPI_ANT_ROUTE_IND73          LTE_Route73
#define MIPI_ANT_ROUTE_IND74          LTE_Route74
#define MIPI_ANT_ROUTE_IND75          LTE_Route75
#define MIPI_ANT_ROUTE_IND76          LTE_Route76
#define MIPI_ANT_ROUTE_IND77          LTE_Route77
#define MIPI_ANT_ROUTE_IND78          LTE_Route78
#define MIPI_ANT_ROUTE_IND79          LTE_Route79
#define MIPI_ANT_ROUTE_IND80          LTE_Route80
#define MIPI_ANT_ROUTE_IND81          LTE_Route81
#define MIPI_ANT_ROUTE_IND82          LTE_Route82
#define MIPI_ANT_ROUTE_IND83          LTE_Route83
#define MIPI_ANT_ROUTE_IND84          LTE_Route84
#define MIPI_ANT_ROUTE_IND85          LTE_Route85
#define MIPI_ANT_ROUTE_IND86          LTE_Route86
#define MIPI_ANT_ROUTE_IND87          LTE_Route87
#define MIPI_ANT_ROUTE_IND88          LTE_Route88

#define MIPI_ANTRX_ROUTE_IND25          LTE_Route25
#define MIPI_ANTRX_ROUTE_IND26          LTE_Route26
#define MIPI_ANTRX_ROUTE_IND27          LTE_Route27
#define MIPI_ANTRX_ROUTE_IND28          LTE_Route28
#define MIPI_ANTRX_ROUTE_IND29          LTE_Route29
#define MIPI_ANTRX_ROUTE_IND30          LTE_Route30
#define MIPI_ANTRX_ROUTE_IND31          LTE_Route31
#define MIPI_ANTRX_ROUTE_IND32          LTE_Route32
#define MIPI_ANTRX_ROUTE_IND33          LTE_Route33
#define MIPI_ANTRX_ROUTE_IND34          LTE_Route34
#define MIPI_ANTRX_ROUTE_IND35          LTE_Route35
#define MIPI_ANTRX_ROUTE_IND36          LTE_Route36
#define MIPI_ANTRX_ROUTE_IND37          LTE_Route37
#define MIPI_ANTRX_ROUTE_IND38          LTE_Route38
#define MIPI_ANTRX_ROUTE_IND39          LTE_Route39
#define MIPI_ANTRX_ROUTE_IND40          LTE_Route40
#define MIPI_ANTRX_ROUTE_IND41          LTE_Route41
#define MIPI_ANTRX_ROUTE_IND42          LTE_Route42
#define MIPI_ANTRX_ROUTE_IND43          LTE_Route43
#define MIPI_ANTRX_ROUTE_IND44          LTE_Route44
#define MIPI_ANTRX_ROUTE_IND45          LTE_Route45
#define MIPI_ANTRX_ROUTE_IND46          LTE_Route46
#define MIPI_ANTRX_ROUTE_IND47          LTE_Route47
#define MIPI_ANTRX_ROUTE_IND48          LTE_Route48
#define MIPI_ANTRX_ROUTE_IND49          LTE_Route49
#define MIPI_ANTRX_ROUTE_IND50          LTE_Route50
#define MIPI_ANTRX_ROUTE_IND51          LTE_Route51
#define MIPI_ANTRX_ROUTE_IND52          LTE_Route52
#define MIPI_ANTRX_ROUTE_IND53          LTE_Route53
#define MIPI_ANTRX_ROUTE_IND54          LTE_Route54
#define MIPI_ANTRX_ROUTE_IND55          LTE_Route55
#define MIPI_ANTRX_ROUTE_IND56          LTE_Route56
#define MIPI_ANTRX_ROUTE_IND57          LTE_Route57
#define MIPI_ANTRX_ROUTE_IND58          LTE_Route58
#define MIPI_ANTRX_ROUTE_IND59          LTE_Route59
#define MIPI_ANTRX_ROUTE_IND60          LTE_Route60
#define MIPI_ANTRX_ROUTE_IND61          LTE_Route61
#define MIPI_ANTRX_ROUTE_IND62          LTE_Route62
#define MIPI_ANTRX_ROUTE_IND63          LTE_Route63
#define MIPI_ANTRX_ROUTE_IND64          LTE_Route64
#define MIPI_ANTRX_ROUTE_IND65          LTE_Route65
#define MIPI_ANTRX_ROUTE_IND66          LTE_Route66
#define MIPI_ANTRX_ROUTE_IND67          LTE_Route67
#define MIPI_ANTRX_ROUTE_IND68          LTE_Route68
#define MIPI_ANTRX_ROUTE_IND69          LTE_Route69
#define MIPI_ANTRX_ROUTE_IND70          LTE_Route70
#define MIPI_ANTRX_ROUTE_IND71          LTE_Route71
#define MIPI_ANTRX_ROUTE_IND72          LTE_Route72
#define MIPI_ANTRX_ROUTE_IND73          LTE_Route73
#define MIPI_ANTRX_ROUTE_IND74          LTE_Route74
#define MIPI_ANTRX_ROUTE_IND75          LTE_Route75
#define MIPI_ANTRX_ROUTE_IND76          LTE_Route76
#define MIPI_ANTRX_ROUTE_IND77          LTE_Route77
#define MIPI_ANTRX_ROUTE_IND78          LTE_Route78
#define MIPI_ANTRX_ROUTE_IND79          LTE_Route79
#define MIPI_ANTRX_ROUTE_IND80          LTE_Route80
#define MIPI_ANTRX_ROUTE_IND81          LTE_Route81
#define MIPI_ANTRX_ROUTE_IND82          LTE_Route82
#define MIPI_ANTRX_ROUTE_IND83          LTE_Route83
#define MIPI_ANTRX_ROUTE_IND84          LTE_Route84
#define MIPI_ANTRX_ROUTE_IND85          LTE_Route85
#define MIPI_ANTRX_ROUTE_IND86          LTE_Route86
#define MIPI_ANTRX_ROUTE_IND87          LTE_Route87
#define MIPI_ANTRX_ROUTE_IND88          LTE_Route88

#define MIPI_ANTTX_ROUTE_IND25          LTE_Route25
#define MIPI_ANTTX_ROUTE_IND26          LTE_Route26
#define MIPI_ANTTX_ROUTE_IND27          LTE_Route27
#define MIPI_ANTTX_ROUTE_IND28          LTE_Route28
#define MIPI_ANTTX_ROUTE_IND29          LTE_Route29
#define MIPI_ANTTX_ROUTE_IND30          LTE_Route30
#define MIPI_ANTTX_ROUTE_IND31          LTE_Route31
#define MIPI_ANTTX_ROUTE_IND32          LTE_Route32
#define MIPI_ANTTX_ROUTE_IND33          LTE_Route33
#define MIPI_ANTTX_ROUTE_IND34          LTE_Route34
#define MIPI_ANTTX_ROUTE_IND35          LTE_Route35
#define MIPI_ANTTX_ROUTE_IND36          LTE_Route36
#define MIPI_ANTTX_ROUTE_IND37          LTE_Route37
#define MIPI_ANTTX_ROUTE_IND38          LTE_Route38
#define MIPI_ANTTX_ROUTE_IND39          LTE_Route39
#define MIPI_ANTTX_ROUTE_IND40          LTE_Route40
#define MIPI_ANTTX_ROUTE_IND41          LTE_Route41
#define MIPI_ANTTX_ROUTE_IND42          LTE_Route42
#define MIPI_ANTTX_ROUTE_IND43          LTE_Route43
#define MIPI_ANTTX_ROUTE_IND44          LTE_Route44
#define MIPI_ANTTX_ROUTE_IND45          LTE_Route45
#define MIPI_ANTTX_ROUTE_IND46          LTE_Route46
#define MIPI_ANTTX_ROUTE_IND47          LTE_Route47
#define MIPI_ANTTX_ROUTE_IND48          LTE_Route48
#define MIPI_ANTTX_ROUTE_IND49          LTE_Route49
#define MIPI_ANTTX_ROUTE_IND50          LTE_Route50
#define MIPI_ANTTX_ROUTE_IND51          LTE_Route51
#define MIPI_ANTTX_ROUTE_IND52          LTE_Route52
#define MIPI_ANTTX_ROUTE_IND53          LTE_Route53
#define MIPI_ANTTX_ROUTE_IND54          LTE_Route54
#define MIPI_ANTTX_ROUTE_IND55          LTE_Route55
#define MIPI_ANTTX_ROUTE_IND56          LTE_Route56
#define MIPI_ANTTX_ROUTE_IND57          LTE_Route57
#define MIPI_ANTTX_ROUTE_IND58          LTE_Route58
#define MIPI_ANTTX_ROUTE_IND59          LTE_Route59
#define MIPI_ANTTX_ROUTE_IND60          LTE_Route60
#define MIPI_ANTTX_ROUTE_IND61          LTE_Route61
#define MIPI_ANTTX_ROUTE_IND62          LTE_Route62
#define MIPI_ANTTX_ROUTE_IND63          LTE_Route63
#define MIPI_ANTTX_ROUTE_IND64          LTE_Route64
#define MIPI_ANTTX_ROUTE_IND65          LTE_Route65
#define MIPI_ANTTX_ROUTE_IND66          LTE_Route66
#define MIPI_ANTTX_ROUTE_IND67          LTE_Route67
#define MIPI_ANTTX_ROUTE_IND68          LTE_Route68
#define MIPI_ANTTX_ROUTE_IND69          LTE_Route69
#define MIPI_ANTTX_ROUTE_IND70          LTE_Route70
#define MIPI_ANTTX_ROUTE_IND71          LTE_Route71
#define MIPI_ANTTX_ROUTE_IND72          LTE_Route72
#define MIPI_ANTTX_ROUTE_IND73          LTE_Route73
#define MIPI_ANTTX_ROUTE_IND74          LTE_Route74
#define MIPI_ANTTX_ROUTE_IND75          LTE_Route75
#define MIPI_ANTTX_ROUTE_IND76          LTE_Route76
#define MIPI_ANTTX_ROUTE_IND77          LTE_Route77
#define MIPI_ANTTX_ROUTE_IND78          LTE_Route78
#define MIPI_ANTTX_ROUTE_IND79          LTE_Route79
#define MIPI_ANTTX_ROUTE_IND80          LTE_Route80
#define MIPI_ANTTX_ROUTE_IND81          LTE_Route81
#define MIPI_ANTTX_ROUTE_IND82          LTE_Route82
#define MIPI_ANTTX_ROUTE_IND83          LTE_Route83
#define MIPI_ANTTX_ROUTE_IND84          LTE_Route84
#define MIPI_ANTTX_ROUTE_IND85          LTE_Route85
#define MIPI_ANTTX_ROUTE_IND86          LTE_Route86
#define MIPI_ANTTX_ROUTE_IND87          LTE_Route87
#define MIPI_ANTTX_ROUTE_IND88          LTE_Route88


/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
/** LTE CA pre-definition: BPI */

/*CA_NONE*/ #ifndef LTE_CACFG_CA_NONE_CC0_PDATA_PR1_H
/*CA_NONE*/ #define LTE_CACFG_CA_NONE_CC0_PDATA_PR1_H       LTE_PDATA_OFF
/*CA_NONE*/ #endif
/*CA_NONE*/
/*CA_NONE*/ #ifndef LTE_CACFG_CA_NONE_CC0_PDATA_PR2_H
/*CA_NONE*/ #define LTE_CACFG_CA_NONE_CC0_PDATA_PR2_H       LTE_PDATA_OFF
/*CA_NONE*/ #endif
/*CA_NONE*/
/*CA_NONE*/ #ifndef LTE_CACFG_CA_NONE_CC0_PDATA_PR3_H
/*CA_NONE*/ #define LTE_CACFG_CA_NONE_CC0_PDATA_PR3_H       LTE_PDATA_OFF
/*CA_NONE*/ #endif
/*CA_NONE*/
/*CA_NONE*/ #ifndef LTE_CACFG_CA_NONE_CC0_PDATA_PT1_H
/*CA_NONE*/ #define LTE_CACFG_CA_NONE_CC0_PDATA_PT1_H       LTE_PDATA_OFF
/*CA_NONE*/ #endif
/*CA_NONE*/
/*CA_NONE*/ #ifndef LTE_CACFG_CA_NONE_CC0_PDATA_PT2_H
/*CA_NONE*/ #define LTE_CACFG_CA_NONE_CC0_PDATA_PT2_H       LTE_PDATA_OFF
/*CA_NONE*/ #endif
/*CA_NONE*/
/*CA_NONE*/ #ifndef LTE_CACFG_CA_NONE_CC0_PDATA_PT3_H
/*CA_NONE*/ #define LTE_CACFG_CA_NONE_CC0_PDATA_PT3_H       LTE_PDATA_OFF
/*CA_NONE*/ #endif
/*CA_NONE*/
/*CA_NONE*/ #ifndef LTE_CACFG_CA_NONE_CC0_PDATA_PRANT_H
/*CA_NONE*/ #define LTE_CACFG_CA_NONE_CC0_PDATA_PRANT_H     LTE_PDATA_OFF
/*CA_NONE*/ #endif
/*CA_NONE*/
/*CA_NONE*/ #ifndef LTE_CACFG_CA_NONE_CC0_PDATA_PTANT_H
/*CA_NONE*/ #define LTE_CACFG_CA_NONE_CC0_PDATA_PTANT_H     LTE_PDATA_OFF
/*CA_NONE*/ #endif
/*CA_NONE*/
/*CA_NONE*/ #ifndef LTE_CACFG_CA_NONE_CC1_PDATA_PR1_H
/*CA_NONE*/ #define LTE_CACFG_CA_NONE_CC1_PDATA_PR1_H       LTE_PDATA_OFF
/*CA_NONE*/ #endif
/*CA_NONE*/
/*CA_NONE*/ #ifndef LTE_CACFG_CA_NONE_CC1_PDATA_PR2_H
/*CA_NONE*/ #define LTE_CACFG_CA_NONE_CC1_PDATA_PR2_H       LTE_PDATA_OFF
/*CA_NONE*/ #endif
/*CA_NONE*/
/*CA_NONE*/ #ifndef LTE_CACFG_CA_NONE_CC1_PDATA_PR3_H
/*CA_NONE*/ #define LTE_CACFG_CA_NONE_CC1_PDATA_PR3_H       LTE_PDATA_OFF
/*CA_NONE*/ #endif
/*CA_NONE*/
/*CA_NONE*/ #ifndef LTE_CACFG_CA_NONE_CC1_PDATA_PT1_H
/*CA_NONE*/ #define LTE_CACFG_CA_NONE_CC1_PDATA_PT1_H       LTE_PDATA_OFF
/*CA_NONE*/ #endif
/*CA_NONE*/
/*CA_NONE*/ #ifndef LTE_CACFG_CA_NONE_CC1_PDATA_PT2_H
/*CA_NONE*/ #define LTE_CACFG_CA_NONE_CC1_PDATA_PT2_H       LTE_PDATA_OFF
/*CA_NONE*/ #endif
/*CA_NONE*/
/*CA_NONE*/ #ifndef LTE_CACFG_CA_NONE_CC1_PDATA_PT3_H
/*CA_NONE*/ #define LTE_CACFG_CA_NONE_CC1_PDATA_PT3_H       LTE_PDATA_OFF
/*CA_NONE*/ #endif
/*CA_NONE*/
/*CA_NONE*/ #ifndef LTE_CACFG_CA_NONE_CC1_PDATA_PRANT_H
/*CA_NONE*/ #define LTE_CACFG_CA_NONE_CC1_PDATA_PRANT_H     LTE_PDATA_OFF
/*CA_NONE*/ #endif
/*CA_NONE*/
/*CA_NONE*/ #ifndef LTE_CACFG_CA_NONE_CC1_PDATA_PTANT_H
/*CA_NONE*/ #define LTE_CACFG_CA_NONE_CC1_PDATA_PTANT_H     LTE_PDATA_OFF
/*CA_NONE*/ #endif

/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

/*CA_1A_3A*/ #ifndef LTE_CACFG_CA_1A_3A_CC0_PDATA_PR1_H
/*CA_1A_3A*/ #define LTE_CACFG_CA_1A_3A_CC0_PDATA_PR1_H       LTE_PDATA_OFF
/*CA_1A_3A*/ #endif
/*CA_1A_3A*/
/*CA_1A_3A*/ #ifndef LTE_CACFG_CA_1A_3A_CC0_PDATA_PR2_H
/*CA_1A_3A*/ #define LTE_CACFG_CA_1A_3A_CC0_PDATA_PR2_H       LTE_PDATA_OFF
/*CA_1A_3A*/ #endif
/*CA_1A_3A*/
/*CA_1A_3A*/ #ifndef LTE_CACFG_CA_1A_3A_CC0_PDATA_PR3_H
/*CA_1A_3A*/ #define LTE_CACFG_CA_1A_3A_CC0_PDATA_PR3_H       LTE_PDATA_OFF
/*CA_1A_3A*/ #endif
/*CA_1A_3A*/
/*CA_1A_3A*/ #ifndef LTE_CACFG_CA_1A_3A_CC0_PDATA_PT1_H
/*CA_1A_3A*/ #define LTE_CACFG_CA_1A_3A_CC0_PDATA_PT1_H       LTE_PDATA_OFF
/*CA_1A_3A*/ #endif
/*CA_1A_3A*/
/*CA_1A_3A*/ #ifndef LTE_CACFG_CA_1A_3A_CC0_PDATA_PT2_H
/*CA_1A_3A*/ #define LTE_CACFG_CA_1A_3A_CC0_PDATA_PT2_H       LTE_PDATA_OFF
/*CA_1A_3A*/ #endif
/*CA_1A_3A*/
/*CA_1A_3A*/ #ifndef LTE_CACFG_CA_1A_3A_CC0_PDATA_PT3_H
/*CA_1A_3A*/ #define LTE_CACFG_CA_1A_3A_CC0_PDATA_PT3_H       LTE_PDATA_OFF
/*CA_1A_3A*/ #endif
/*CA_1A_3A*/
/*CA_1A_3A*/ #ifndef LTE_CACFG_CA_1A_3A_CC0_PDATA_PRANT_H
/*CA_1A_3A*/ #define LTE_CACFG_CA_1A_3A_CC0_PDATA_PRANT_H     LTE_PDATA_OFF
/*CA_1A_3A*/ #endif
/*CA_1A_3A*/
/*CA_1A_3A*/ #ifndef LTE_CACFG_CA_1A_3A_CC0_PDATA_PTANT_H
/*CA_1A_3A*/ #define LTE_CACFG_CA_1A_3A_CC0_PDATA_PTANT_H     LTE_PDATA_OFF
/*CA_1A_3A*/ #endif
/*CA_1A_3A*/
/*CA_1A_3A*/ #ifndef LTE_CACFG_CA_1A_3A_CC1_PDATA_PR1_H
/*CA_1A_3A*/ #define LTE_CACFG_CA_1A_3A_CC1_PDATA_PR1_H       LTE_PDATA_OFF
/*CA_1A_3A*/ #endif
/*CA_1A_3A*/
/*CA_1A_3A*/ #ifndef LTE_CACFG_CA_1A_3A_CC1_PDATA_PR2_H
/*CA_1A_3A*/ #define LTE_CACFG_CA_1A_3A_CC1_PDATA_PR2_H       LTE_PDATA_OFF
/*CA_1A_3A*/ #endif
/*CA_1A_3A*/
/*CA_1A_3A*/ #ifndef LTE_CACFG_CA_1A_3A_CC1_PDATA_PR3_H
/*CA_1A_3A*/ #define LTE_CACFG_CA_1A_3A_CC1_PDATA_PR3_H       LTE_PDATA_OFF
/*CA_1A_3A*/ #endif
/*CA_1A_3A*/
/*CA_1A_3A*/ #ifndef LTE_CACFG_CA_1A_3A_CC1_PDATA_PT1_H
/*CA_1A_3A*/ #define LTE_CACFG_CA_1A_3A_CC1_PDATA_PT1_H       LTE_PDATA_OFF
/*CA_1A_3A*/ #endif
/*CA_1A_3A*/
/*CA_1A_3A*/ #ifndef LTE_CACFG_CA_1A_3A_CC1_PDATA_PT2_H
/*CA_1A_3A*/ #define LTE_CACFG_CA_1A_3A_CC1_PDATA_PT2_H       LTE_PDATA_OFF
/*CA_1A_3A*/ #endif
/*CA_1A_3A*/
/*CA_1A_3A*/ #ifndef LTE_CACFG_CA_1A_3A_CC1_PDATA_PT3_H
/*CA_1A_3A*/ #define LTE_CACFG_CA_1A_3A_CC1_PDATA_PT3_H       LTE_PDATA_OFF
/*CA_1A_3A*/ #endif
/*CA_1A_3A*/
/*CA_1A_3A*/ #ifndef LTE_CACFG_CA_1A_3A_CC1_PDATA_PRANT_H
/*CA_1A_3A*/ #define LTE_CACFG_CA_1A_3A_CC1_PDATA_PRANT_H     LTE_PDATA_OFF
/*CA_1A_3A*/ #endif
/*CA_1A_3A*/
/*CA_1A_3A*/ #ifndef LTE_CACFG_CA_1A_3A_CC1_PDATA_PTANT_H
/*CA_1A_3A*/ #define LTE_CACFG_CA_1A_3A_CC1_PDATA_PTANT_H     LTE_PDATA_OFF
/*CA_1A_3A*/ #endif

/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

/*CA_1A_5A*/ #ifndef LTE_CACFG_CA_1A_5A_CC0_PDATA_PR1_H
/*CA_1A_5A*/ #define LTE_CACFG_CA_1A_5A_CC0_PDATA_PR1_H       LTE_PDATA_OFF
/*CA_1A_5A*/ #endif
/*CA_1A_5A*/
/*CA_1A_5A*/ #ifndef LTE_CACFG_CA_1A_5A_CC0_PDATA_PR2_H
/*CA_1A_5A*/ #define LTE_CACFG_CA_1A_5A_CC0_PDATA_PR2_H       LTE_PDATA_OFF
/*CA_1A_5A*/ #endif
/*CA_1A_5A*/
/*CA_1A_5A*/ #ifndef LTE_CACFG_CA_1A_5A_CC0_PDATA_PR3_H
/*CA_1A_5A*/ #define LTE_CACFG_CA_1A_5A_CC0_PDATA_PR3_H       LTE_PDATA_OFF
/*CA_1A_5A*/ #endif
/*CA_1A_5A*/
/*CA_1A_5A*/ #ifndef LTE_CACFG_CA_1A_5A_CC0_PDATA_PT1_H
/*CA_1A_5A*/ #define LTE_CACFG_CA_1A_5A_CC0_PDATA_PT1_H       LTE_PDATA_OFF
/*CA_1A_5A*/ #endif
/*CA_1A_5A*/
/*CA_1A_5A*/ #ifndef LTE_CACFG_CA_1A_5A_CC0_PDATA_PT2_H
/*CA_1A_5A*/ #define LTE_CACFG_CA_1A_5A_CC0_PDATA_PT2_H       LTE_PDATA_OFF
/*CA_1A_5A*/ #endif
/*CA_1A_5A*/
/*CA_1A_5A*/ #ifndef LTE_CACFG_CA_1A_5A_CC0_PDATA_PT3_H
/*CA_1A_5A*/ #define LTE_CACFG_CA_1A_5A_CC0_PDATA_PT3_H       LTE_PDATA_OFF
/*CA_1A_5A*/ #endif
/*CA_1A_5A*/
/*CA_1A_5A*/ #ifndef LTE_CACFG_CA_1A_5A_CC0_PDATA_PRANT_H
/*CA_1A_5A*/ #define LTE_CACFG_CA_1A_5A_CC0_PDATA_PRANT_H     LTE_PDATA_OFF
/*CA_1A_5A*/ #endif
/*CA_1A_5A*/
/*CA_1A_5A*/ #ifndef LTE_CACFG_CA_1A_5A_CC0_PDATA_PTANT_H
/*CA_1A_5A*/ #define LTE_CACFG_CA_1A_5A_CC0_PDATA_PTANT_H     LTE_PDATA_OFF
/*CA_1A_5A*/ #endif
/*CA_1A_5A*/
/*CA_1A_5A*/ #ifndef LTE_CACFG_CA_1A_5A_CC1_PDATA_PR1_H
/*CA_1A_5A*/ #define LTE_CACFG_CA_1A_5A_CC1_PDATA_PR1_H       LTE_PDATA_OFF
/*CA_1A_5A*/ #endif
/*CA_1A_5A*/
/*CA_1A_5A*/ #ifndef LTE_CACFG_CA_1A_5A_CC1_PDATA_PR2_H
/*CA_1A_5A*/ #define LTE_CACFG_CA_1A_5A_CC1_PDATA_PR2_H       LTE_PDATA_OFF
/*CA_1A_5A*/ #endif
/*CA_1A_5A*/
/*CA_1A_5A*/ #ifndef LTE_CACFG_CA_1A_5A_CC1_PDATA_PR3_H
/*CA_1A_5A*/ #define LTE_CACFG_CA_1A_5A_CC1_PDATA_PR3_H       LTE_PDATA_OFF
/*CA_1A_5A*/ #endif
/*CA_1A_5A*/
/*CA_1A_5A*/ #ifndef LTE_CACFG_CA_1A_5A_CC1_PDATA_PT1_H
/*CA_1A_5A*/ #define LTE_CACFG_CA_1A_5A_CC1_PDATA_PT1_H       LTE_PDATA_OFF
/*CA_1A_5A*/ #endif
/*CA_1A_5A*/
/*CA_1A_5A*/ #ifndef LTE_CACFG_CA_1A_5A_CC1_PDATA_PT2_H
/*CA_1A_5A*/ #define LTE_CACFG_CA_1A_5A_CC1_PDATA_PT2_H       LTE_PDATA_OFF
/*CA_1A_5A*/ #endif
/*CA_1A_5A*/
/*CA_1A_5A*/ #ifndef LTE_CACFG_CA_1A_5A_CC1_PDATA_PT3_H
/*CA_1A_5A*/ #define LTE_CACFG_CA_1A_5A_CC1_PDATA_PT3_H       LTE_PDATA_OFF
/*CA_1A_5A*/ #endif
/*CA_1A_5A*/
/*CA_1A_5A*/ #ifndef LTE_CACFG_CA_1A_5A_CC1_PDATA_PRANT_H
/*CA_1A_5A*/ #define LTE_CACFG_CA_1A_5A_CC1_PDATA_PRANT_H     LTE_PDATA_OFF
/*CA_1A_5A*/ #endif
/*CA_1A_5A*/
/*CA_1A_5A*/ #ifndef LTE_CACFG_CA_1A_5A_CC1_PDATA_PTANT_H
/*CA_1A_5A*/ #define LTE_CACFG_CA_1A_5A_CC1_PDATA_PTANT_H     LTE_PDATA_OFF
/*CA_1A_5A*/ #endif

/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

/*CA_1A_7A*/ #ifndef LTE_CACFG_CA_1A_7A_CC0_PDATA_PR1_H
/*CA_1A_7A*/ #define LTE_CACFG_CA_1A_7A_CC0_PDATA_PR1_H       LTE_PDATA_OFF
/*CA_1A_7A*/ #endif
/*CA_1A_7A*/
/*CA_1A_7A*/ #ifndef LTE_CACFG_CA_1A_7A_CC0_PDATA_PR2_H
/*CA_1A_7A*/ #define LTE_CACFG_CA_1A_7A_CC0_PDATA_PR2_H       LTE_PDATA_OFF
/*CA_1A_7A*/ #endif
/*CA_1A_7A*/
/*CA_1A_7A*/ #ifndef LTE_CACFG_CA_1A_7A_CC0_PDATA_PR3_H
/*CA_1A_7A*/ #define LTE_CACFG_CA_1A_7A_CC0_PDATA_PR3_H       LTE_PDATA_OFF
/*CA_1A_7A*/ #endif
/*CA_1A_7A*/
/*CA_1A_7A*/ #ifndef LTE_CACFG_CA_1A_7A_CC0_PDATA_PT1_H
/*CA_1A_7A*/ #define LTE_CACFG_CA_1A_7A_CC0_PDATA_PT1_H       LTE_PDATA_OFF
/*CA_1A_7A*/ #endif
/*CA_1A_7A*/
/*CA_1A_7A*/ #ifndef LTE_CACFG_CA_1A_7A_CC0_PDATA_PT2_H
/*CA_1A_7A*/ #define LTE_CACFG_CA_1A_7A_CC0_PDATA_PT2_H       LTE_PDATA_OFF
/*CA_1A_7A*/ #endif
/*CA_1A_7A*/
/*CA_1A_7A*/ #ifndef LTE_CACFG_CA_1A_7A_CC0_PDATA_PT3_H
/*CA_1A_7A*/ #define LTE_CACFG_CA_1A_7A_CC0_PDATA_PT3_H       LTE_PDATA_OFF
/*CA_1A_7A*/ #endif
/*CA_1A_7A*/
/*CA_1A_7A*/ #ifndef LTE_CACFG_CA_1A_7A_CC0_PDATA_PRANT_H
/*CA_1A_7A*/ #define LTE_CACFG_CA_1A_7A_CC0_PDATA_PRANT_H     LTE_PDATA_OFF
/*CA_1A_7A*/ #endif
/*CA_1A_7A*/
/*CA_1A_7A*/ #ifndef LTE_CACFG_CA_1A_7A_CC0_PDATA_PTANT_H
/*CA_1A_7A*/ #define LTE_CACFG_CA_1A_7A_CC0_PDATA_PTANT_H     LTE_PDATA_OFF
/*CA_1A_7A*/ #endif
/*CA_1A_7A*/
/*CA_1A_7A*/ #ifndef LTE_CACFG_CA_1A_7A_CC1_PDATA_PR1_H
/*CA_1A_7A*/ #define LTE_CACFG_CA_1A_7A_CC1_PDATA_PR1_H       LTE_PDATA_OFF
/*CA_1A_7A*/ #endif
/*CA_1A_7A*/
/*CA_1A_7A*/ #ifndef LTE_CACFG_CA_1A_7A_CC1_PDATA_PR2_H
/*CA_1A_7A*/ #define LTE_CACFG_CA_1A_7A_CC1_PDATA_PR2_H       LTE_PDATA_OFF
/*CA_1A_7A*/ #endif
/*CA_1A_7A*/
/*CA_1A_7A*/ #ifndef LTE_CACFG_CA_1A_7A_CC1_PDATA_PR3_H
/*CA_1A_7A*/ #define LTE_CACFG_CA_1A_7A_CC1_PDATA_PR3_H       LTE_PDATA_OFF
/*CA_1A_7A*/ #endif
/*CA_1A_7A*/
/*CA_1A_7A*/ #ifndef LTE_CACFG_CA_1A_7A_CC1_PDATA_PT1_H
/*CA_1A_7A*/ #define LTE_CACFG_CA_1A_7A_CC1_PDATA_PT1_H       LTE_PDATA_OFF
/*CA_1A_7A*/ #endif
/*CA_1A_7A*/
/*CA_1A_7A*/ #ifndef LTE_CACFG_CA_1A_7A_CC1_PDATA_PT2_H
/*CA_1A_7A*/ #define LTE_CACFG_CA_1A_7A_CC1_PDATA_PT2_H       LTE_PDATA_OFF
/*CA_1A_7A*/ #endif
/*CA_1A_7A*/
/*CA_1A_7A*/ #ifndef LTE_CACFG_CA_1A_7A_CC1_PDATA_PT3_H
/*CA_1A_7A*/ #define LTE_CACFG_CA_1A_7A_CC1_PDATA_PT3_H       LTE_PDATA_OFF
/*CA_1A_7A*/ #endif
/*CA_1A_7A*/
/*CA_1A_7A*/ #ifndef LTE_CACFG_CA_1A_7A_CC1_PDATA_PRANT_H
/*CA_1A_7A*/ #define LTE_CACFG_CA_1A_7A_CC1_PDATA_PRANT_H     LTE_PDATA_OFF
/*CA_1A_7A*/ #endif
/*CA_1A_7A*/
/*CA_1A_7A*/ #ifndef LTE_CACFG_CA_1A_7A_CC1_PDATA_PTANT_H
/*CA_1A_7A*/ #define LTE_CACFG_CA_1A_7A_CC1_PDATA_PTANT_H     LTE_PDATA_OFF
/*CA_1A_7A*/ #endif

/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

/*CA_1A_8A*/ #ifndef LTE_CACFG_CA_1A_8A_CC0_PDATA_PR1_H
/*CA_1A_8A*/ #define LTE_CACFG_CA_1A_8A_CC0_PDATA_PR1_H       LTE_PDATA_OFF
/*CA_1A_8A*/ #endif
/*CA_1A_8A*/
/*CA_1A_8A*/ #ifndef LTE_CACFG_CA_1A_8A_CC0_PDATA_PR2_H
/*CA_1A_8A*/ #define LTE_CACFG_CA_1A_8A_CC0_PDATA_PR2_H       LTE_PDATA_OFF
/*CA_1A_8A*/ #endif
/*CA_1A_8A*/
/*CA_1A_8A*/ #ifndef LTE_CACFG_CA_1A_8A_CC0_PDATA_PR3_H
/*CA_1A_8A*/ #define LTE_CACFG_CA_1A_8A_CC0_PDATA_PR3_H       LTE_PDATA_OFF
/*CA_1A_8A*/ #endif
/*CA_1A_8A*/
/*CA_1A_8A*/ #ifndef LTE_CACFG_CA_1A_8A_CC0_PDATA_PT1_H
/*CA_1A_8A*/ #define LTE_CACFG_CA_1A_8A_CC0_PDATA_PT1_H       LTE_PDATA_OFF
/*CA_1A_8A*/ #endif
/*CA_1A_8A*/
/*CA_1A_8A*/ #ifndef LTE_CACFG_CA_1A_8A_CC0_PDATA_PT2_H
/*CA_1A_8A*/ #define LTE_CACFG_CA_1A_8A_CC0_PDATA_PT2_H       LTE_PDATA_OFF
/*CA_1A_8A*/ #endif
/*CA_1A_8A*/
/*CA_1A_8A*/ #ifndef LTE_CACFG_CA_1A_8A_CC0_PDATA_PT3_H
/*CA_1A_8A*/ #define LTE_CACFG_CA_1A_8A_CC0_PDATA_PT3_H       LTE_PDATA_OFF
/*CA_1A_8A*/ #endif
/*CA_1A_8A*/
/*CA_1A_8A*/ #ifndef LTE_CACFG_CA_1A_8A_CC0_PDATA_PRANT_H
/*CA_1A_8A*/ #define LTE_CACFG_CA_1A_8A_CC0_PDATA_PRANT_H     LTE_PDATA_OFF
/*CA_1A_8A*/ #endif
/*CA_1A_8A*/
/*CA_1A_8A*/ #ifndef LTE_CACFG_CA_1A_8A_CC0_PDATA_PTANT_H
/*CA_1A_8A*/ #define LTE_CACFG_CA_1A_8A_CC0_PDATA_PTANT_H     LTE_PDATA_OFF
/*CA_1A_8A*/ #endif
/*CA_1A_8A*/
/*CA_1A_8A*/ #ifndef LTE_CACFG_CA_1A_8A_CC1_PDATA_PR1_H
/*CA_1A_8A*/ #define LTE_CACFG_CA_1A_8A_CC1_PDATA_PR1_H       LTE_PDATA_OFF
/*CA_1A_8A*/ #endif
/*CA_1A_8A*/
/*CA_1A_8A*/ #ifndef LTE_CACFG_CA_1A_8A_CC1_PDATA_PR2_H
/*CA_1A_8A*/ #define LTE_CACFG_CA_1A_8A_CC1_PDATA_PR2_H       LTE_PDATA_OFF
/*CA_1A_8A*/ #endif
/*CA_1A_8A*/
/*CA_1A_8A*/ #ifndef LTE_CACFG_CA_1A_8A_CC1_PDATA_PR3_H
/*CA_1A_8A*/ #define LTE_CACFG_CA_1A_8A_CC1_PDATA_PR3_H       LTE_PDATA_OFF
/*CA_1A_8A*/ #endif
/*CA_1A_8A*/
/*CA_1A_8A*/ #ifndef LTE_CACFG_CA_1A_8A_CC1_PDATA_PT1_H
/*CA_1A_8A*/ #define LTE_CACFG_CA_1A_8A_CC1_PDATA_PT1_H       LTE_PDATA_OFF
/*CA_1A_8A*/ #endif
/*CA_1A_8A*/
/*CA_1A_8A*/ #ifndef LTE_CACFG_CA_1A_8A_CC1_PDATA_PT2_H
/*CA_1A_8A*/ #define LTE_CACFG_CA_1A_8A_CC1_PDATA_PT2_H       LTE_PDATA_OFF
/*CA_1A_8A*/ #endif
/*CA_1A_8A*/
/*CA_1A_8A*/ #ifndef LTE_CACFG_CA_1A_8A_CC1_PDATA_PT3_H
/*CA_1A_8A*/ #define LTE_CACFG_CA_1A_8A_CC1_PDATA_PT3_H       LTE_PDATA_OFF
/*CA_1A_8A*/ #endif
/*CA_1A_8A*/
/*CA_1A_8A*/ #ifndef LTE_CACFG_CA_1A_8A_CC1_PDATA_PRANT_H
/*CA_1A_8A*/ #define LTE_CACFG_CA_1A_8A_CC1_PDATA_PRANT_H     LTE_PDATA_OFF
/*CA_1A_8A*/ #endif
/*CA_1A_8A*/
/*CA_1A_8A*/ #ifndef LTE_CACFG_CA_1A_8A_CC1_PDATA_PTANT_H
/*CA_1A_8A*/ #define LTE_CACFG_CA_1A_8A_CC1_PDATA_PTANT_H     LTE_PDATA_OFF
/*CA_1A_8A*/ #endif

/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

/*CA_1A_11A*/ #ifndef LTE_CACFG_CA_1A_11A_CC0_PDATA_PR1_H
/*CA_1A_11A*/ #define LTE_CACFG_CA_1A_11A_CC0_PDATA_PR1_H       LTE_PDATA_OFF
/*CA_1A_11A*/ #endif
/*CA_1A_11A*/
/*CA_1A_11A*/ #ifndef LTE_CACFG_CA_1A_11A_CC0_PDATA_PR2_H
/*CA_1A_11A*/ #define LTE_CACFG_CA_1A_11A_CC0_PDATA_PR2_H       LTE_PDATA_OFF
/*CA_1A_11A*/ #endif
/*CA_1A_11A*/
/*CA_1A_11A*/ #ifndef LTE_CACFG_CA_1A_11A_CC0_PDATA_PR3_H
/*CA_1A_11A*/ #define LTE_CACFG_CA_1A_11A_CC0_PDATA_PR3_H       LTE_PDATA_OFF
/*CA_1A_11A*/ #endif
/*CA_1A_11A*/
/*CA_1A_11A*/ #ifndef LTE_CACFG_CA_1A_11A_CC0_PDATA_PT1_H
/*CA_1A_11A*/ #define LTE_CACFG_CA_1A_11A_CC0_PDATA_PT1_H       LTE_PDATA_OFF
/*CA_1A_11A*/ #endif
/*CA_1A_11A*/
/*CA_1A_11A*/ #ifndef LTE_CACFG_CA_1A_11A_CC0_PDATA_PT2_H
/*CA_1A_11A*/ #define LTE_CACFG_CA_1A_11A_CC0_PDATA_PT2_H       LTE_PDATA_OFF
/*CA_1A_11A*/ #endif
/*CA_1A_11A*/
/*CA_1A_11A*/ #ifndef LTE_CACFG_CA_1A_11A_CC0_PDATA_PT3_H
/*CA_1A_11A*/ #define LTE_CACFG_CA_1A_11A_CC0_PDATA_PT3_H       LTE_PDATA_OFF
/*CA_1A_11A*/ #endif
/*CA_1A_11A*/
/*CA_1A_11A*/ #ifndef LTE_CACFG_CA_1A_11A_CC0_PDATA_PRANT_H
/*CA_1A_11A*/ #define LTE_CACFG_CA_1A_11A_CC0_PDATA_PRANT_H     LTE_PDATA_OFF
/*CA_1A_11A*/ #endif
/*CA_1A_11A*/
/*CA_1A_11A*/ #ifndef LTE_CACFG_CA_1A_11A_CC0_PDATA_PTANT_H
/*CA_1A_11A*/ #define LTE_CACFG_CA_1A_11A_CC0_PDATA_PTANT_H     LTE_PDATA_OFF
/*CA_1A_11A*/ #endif
/*CA_1A_11A*/
/*CA_1A_11A*/ #ifndef LTE_CACFG_CA_1A_11A_CC1_PDATA_PR1_H
/*CA_1A_11A*/ #define LTE_CACFG_CA_1A_11A_CC1_PDATA_PR1_H       LTE_PDATA_OFF
/*CA_1A_11A*/ #endif
/*CA_1A_11A*/
/*CA_1A_11A*/ #ifndef LTE_CACFG_CA_1A_11A_CC1_PDATA_PR2_H
/*CA_1A_11A*/ #define LTE_CACFG_CA_1A_11A_CC1_PDATA_PR2_H       LTE_PDATA_OFF
/*CA_1A_11A*/ #endif
/*CA_1A_11A*/
/*CA_1A_11A*/ #ifndef LTE_CACFG_CA_1A_11A_CC1_PDATA_PR3_H
/*CA_1A_11A*/ #define LTE_CACFG_CA_1A_11A_CC1_PDATA_PR3_H       LTE_PDATA_OFF
/*CA_1A_11A*/ #endif
/*CA_1A_11A*/
/*CA_1A_11A*/ #ifndef LTE_CACFG_CA_1A_11A_CC1_PDATA_PT1_H
/*CA_1A_11A*/ #define LTE_CACFG_CA_1A_11A_CC1_PDATA_PT1_H       LTE_PDATA_OFF
/*CA_1A_11A*/ #endif
/*CA_1A_11A*/
/*CA_1A_11A*/ #ifndef LTE_CACFG_CA_1A_11A_CC1_PDATA_PT2_H
/*CA_1A_11A*/ #define LTE_CACFG_CA_1A_11A_CC1_PDATA_PT2_H       LTE_PDATA_OFF
/*CA_1A_11A*/ #endif
/*CA_1A_11A*/
/*CA_1A_11A*/ #ifndef LTE_CACFG_CA_1A_11A_CC1_PDATA_PT3_H
/*CA_1A_11A*/ #define LTE_CACFG_CA_1A_11A_CC1_PDATA_PT3_H       LTE_PDATA_OFF
/*CA_1A_11A*/ #endif
/*CA_1A_11A*/
/*CA_1A_11A*/ #ifndef LTE_CACFG_CA_1A_11A_CC1_PDATA_PRANT_H
/*CA_1A_11A*/ #define LTE_CACFG_CA_1A_11A_CC1_PDATA_PRANT_H     LTE_PDATA_OFF
/*CA_1A_11A*/ #endif
/*CA_1A_11A*/
/*CA_1A_11A*/ #ifndef LTE_CACFG_CA_1A_11A_CC1_PDATA_PTANT_H
/*CA_1A_11A*/ #define LTE_CACFG_CA_1A_11A_CC1_PDATA_PTANT_H     LTE_PDATA_OFF
/*CA_1A_11A*/ #endif

/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

/*CA_1A_18A*/ #ifndef LTE_CACFG_CA_1A_18A_CC0_PDATA_PR1_H
/*CA_1A_18A*/ #define LTE_CACFG_CA_1A_18A_CC0_PDATA_PR1_H       LTE_PDATA_OFF
/*CA_1A_18A*/ #endif
/*CA_1A_18A*/
/*CA_1A_18A*/ #ifndef LTE_CACFG_CA_1A_18A_CC0_PDATA_PR2_H
/*CA_1A_18A*/ #define LTE_CACFG_CA_1A_18A_CC0_PDATA_PR2_H       LTE_PDATA_OFF
/*CA_1A_18A*/ #endif
/*CA_1A_18A*/
/*CA_1A_18A*/ #ifndef LTE_CACFG_CA_1A_18A_CC0_PDATA_PR3_H
/*CA_1A_18A*/ #define LTE_CACFG_CA_1A_18A_CC0_PDATA_PR3_H       LTE_PDATA_OFF
/*CA_1A_18A*/ #endif
/*CA_1A_18A*/
/*CA_1A_18A*/ #ifndef LTE_CACFG_CA_1A_18A_CC0_PDATA_PT1_H
/*CA_1A_18A*/ #define LTE_CACFG_CA_1A_18A_CC0_PDATA_PT1_H       LTE_PDATA_OFF
/*CA_1A_18A*/ #endif
/*CA_1A_18A*/
/*CA_1A_18A*/ #ifndef LTE_CACFG_CA_1A_18A_CC0_PDATA_PT2_H
/*CA_1A_18A*/ #define LTE_CACFG_CA_1A_18A_CC0_PDATA_PT2_H       LTE_PDATA_OFF
/*CA_1A_18A*/ #endif
/*CA_1A_18A*/
/*CA_1A_18A*/ #ifndef LTE_CACFG_CA_1A_18A_CC0_PDATA_PT3_H
/*CA_1A_18A*/ #define LTE_CACFG_CA_1A_18A_CC0_PDATA_PT3_H       LTE_PDATA_OFF
/*CA_1A_18A*/ #endif
/*CA_1A_18A*/
/*CA_1A_18A*/ #ifndef LTE_CACFG_CA_1A_18A_CC0_PDATA_PRANT_H
/*CA_1A_18A*/ #define LTE_CACFG_CA_1A_18A_CC0_PDATA_PRANT_H     LTE_PDATA_OFF
/*CA_1A_18A*/ #endif
/*CA_1A_18A*/
/*CA_1A_18A*/ #ifndef LTE_CACFG_CA_1A_18A_CC0_PDATA_PTANT_H
/*CA_1A_18A*/ #define LTE_CACFG_CA_1A_18A_CC0_PDATA_PTANT_H     LTE_PDATA_OFF
/*CA_1A_18A*/ #endif
/*CA_1A_18A*/
/*CA_1A_18A*/ #ifndef LTE_CACFG_CA_1A_18A_CC1_PDATA_PR1_H
/*CA_1A_18A*/ #define LTE_CACFG_CA_1A_18A_CC1_PDATA_PR1_H       LTE_PDATA_OFF
/*CA_1A_18A*/ #endif
/*CA_1A_18A*/
/*CA_1A_18A*/ #ifndef LTE_CACFG_CA_1A_18A_CC1_PDATA_PR2_H
/*CA_1A_18A*/ #define LTE_CACFG_CA_1A_18A_CC1_PDATA_PR2_H       LTE_PDATA_OFF
/*CA_1A_18A*/ #endif
/*CA_1A_18A*/
/*CA_1A_18A*/ #ifndef LTE_CACFG_CA_1A_18A_CC1_PDATA_PR3_H
/*CA_1A_18A*/ #define LTE_CACFG_CA_1A_18A_CC1_PDATA_PR3_H       LTE_PDATA_OFF
/*CA_1A_18A*/ #endif
/*CA_1A_18A*/
/*CA_1A_18A*/ #ifndef LTE_CACFG_CA_1A_18A_CC1_PDATA_PT1_H
/*CA_1A_18A*/ #define LTE_CACFG_CA_1A_18A_CC1_PDATA_PT1_H       LTE_PDATA_OFF
/*CA_1A_18A*/ #endif
/*CA_1A_18A*/
/*CA_1A_18A*/ #ifndef LTE_CACFG_CA_1A_18A_CC1_PDATA_PT2_H
/*CA_1A_18A*/ #define LTE_CACFG_CA_1A_18A_CC1_PDATA_PT2_H       LTE_PDATA_OFF
/*CA_1A_18A*/ #endif
/*CA_1A_18A*/
/*CA_1A_18A*/ #ifndef LTE_CACFG_CA_1A_18A_CC1_PDATA_PT3_H
/*CA_1A_18A*/ #define LTE_CACFG_CA_1A_18A_CC1_PDATA_PT3_H       LTE_PDATA_OFF
/*CA_1A_18A*/ #endif
/*CA_1A_18A*/
/*CA_1A_18A*/ #ifndef LTE_CACFG_CA_1A_18A_CC1_PDATA_PRANT_H
/*CA_1A_18A*/ #define LTE_CACFG_CA_1A_18A_CC1_PDATA_PRANT_H     LTE_PDATA_OFF
/*CA_1A_18A*/ #endif
/*CA_1A_18A*/
/*CA_1A_18A*/ #ifndef LTE_CACFG_CA_1A_18A_CC1_PDATA_PTANT_H
/*CA_1A_18A*/ #define LTE_CACFG_CA_1A_18A_CC1_PDATA_PTANT_H     LTE_PDATA_OFF
/*CA_1A_18A*/ #endif

/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

/*CA_1A_19A*/ #ifndef LTE_CACFG_CA_1A_19A_CC0_PDATA_PR1_H
/*CA_1A_19A*/ #define LTE_CACFG_CA_1A_19A_CC0_PDATA_PR1_H       LTE_PDATA_OFF
/*CA_1A_19A*/ #endif
/*CA_1A_19A*/
/*CA_1A_19A*/ #ifndef LTE_CACFG_CA_1A_19A_CC0_PDATA_PR2_H
/*CA_1A_19A*/ #define LTE_CACFG_CA_1A_19A_CC0_PDATA_PR2_H       LTE_PDATA_OFF
/*CA_1A_19A*/ #endif
/*CA_1A_19A*/
/*CA_1A_19A*/ #ifndef LTE_CACFG_CA_1A_19A_CC0_PDATA_PR3_H
/*CA_1A_19A*/ #define LTE_CACFG_CA_1A_19A_CC0_PDATA_PR3_H       LTE_PDATA_OFF
/*CA_1A_19A*/ #endif
/*CA_1A_19A*/
/*CA_1A_19A*/ #ifndef LTE_CACFG_CA_1A_19A_CC0_PDATA_PT1_H
/*CA_1A_19A*/ #define LTE_CACFG_CA_1A_19A_CC0_PDATA_PT1_H       LTE_PDATA_OFF
/*CA_1A_19A*/ #endif
/*CA_1A_19A*/
/*CA_1A_19A*/ #ifndef LTE_CACFG_CA_1A_19A_CC0_PDATA_PT2_H
/*CA_1A_19A*/ #define LTE_CACFG_CA_1A_19A_CC0_PDATA_PT2_H       LTE_PDATA_OFF
/*CA_1A_19A*/ #endif
/*CA_1A_19A*/
/*CA_1A_19A*/ #ifndef LTE_CACFG_CA_1A_19A_CC0_PDATA_PT3_H
/*CA_1A_19A*/ #define LTE_CACFG_CA_1A_19A_CC0_PDATA_PT3_H       LTE_PDATA_OFF
/*CA_1A_19A*/ #endif
/*CA_1A_19A*/
/*CA_1A_19A*/ #ifndef LTE_CACFG_CA_1A_19A_CC0_PDATA_PRANT_H
/*CA_1A_19A*/ #define LTE_CACFG_CA_1A_19A_CC0_PDATA_PRANT_H     LTE_PDATA_OFF
/*CA_1A_19A*/ #endif
/*CA_1A_19A*/
/*CA_1A_19A*/ #ifndef LTE_CACFG_CA_1A_19A_CC0_PDATA_PTANT_H
/*CA_1A_19A*/ #define LTE_CACFG_CA_1A_19A_CC0_PDATA_PTANT_H     LTE_PDATA_OFF
/*CA_1A_19A*/ #endif
/*CA_1A_19A*/
/*CA_1A_19A*/ #ifndef LTE_CACFG_CA_1A_19A_CC1_PDATA_PR1_H
/*CA_1A_19A*/ #define LTE_CACFG_CA_1A_19A_CC1_PDATA_PR1_H       LTE_PDATA_OFF
/*CA_1A_19A*/ #endif
/*CA_1A_19A*/
/*CA_1A_19A*/ #ifndef LTE_CACFG_CA_1A_19A_CC1_PDATA_PR2_H
/*CA_1A_19A*/ #define LTE_CACFG_CA_1A_19A_CC1_PDATA_PR2_H       LTE_PDATA_OFF
/*CA_1A_19A*/ #endif
/*CA_1A_19A*/
/*CA_1A_19A*/ #ifndef LTE_CACFG_CA_1A_19A_CC1_PDATA_PR3_H
/*CA_1A_19A*/ #define LTE_CACFG_CA_1A_19A_CC1_PDATA_PR3_H       LTE_PDATA_OFF
/*CA_1A_19A*/ #endif
/*CA_1A_19A*/
/*CA_1A_19A*/ #ifndef LTE_CACFG_CA_1A_19A_CC1_PDATA_PT1_H
/*CA_1A_19A*/ #define LTE_CACFG_CA_1A_19A_CC1_PDATA_PT1_H       LTE_PDATA_OFF
/*CA_1A_19A*/ #endif
/*CA_1A_19A*/
/*CA_1A_19A*/ #ifndef LTE_CACFG_CA_1A_19A_CC1_PDATA_PT2_H
/*CA_1A_19A*/ #define LTE_CACFG_CA_1A_19A_CC1_PDATA_PT2_H       LTE_PDATA_OFF
/*CA_1A_19A*/ #endif
/*CA_1A_19A*/
/*CA_1A_19A*/ #ifndef LTE_CACFG_CA_1A_19A_CC1_PDATA_PT3_H
/*CA_1A_19A*/ #define LTE_CACFG_CA_1A_19A_CC1_PDATA_PT3_H       LTE_PDATA_OFF
/*CA_1A_19A*/ #endif
/*CA_1A_19A*/
/*CA_1A_19A*/ #ifndef LTE_CACFG_CA_1A_19A_CC1_PDATA_PRANT_H
/*CA_1A_19A*/ #define LTE_CACFG_CA_1A_19A_CC1_PDATA_PRANT_H     LTE_PDATA_OFF
/*CA_1A_19A*/ #endif
/*CA_1A_19A*/
/*CA_1A_19A*/ #ifndef LTE_CACFG_CA_1A_19A_CC1_PDATA_PTANT_H
/*CA_1A_19A*/ #define LTE_CACFG_CA_1A_19A_CC1_PDATA_PTANT_H     LTE_PDATA_OFF
/*CA_1A_19A*/ #endif

/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

/*CA_1A_20A*/ #ifndef LTE_CACFG_CA_1A_20A_CC0_PDATA_PR1_H
/*CA_1A_20A*/ #define LTE_CACFG_CA_1A_20A_CC0_PDATA_PR1_H       LTE_PDATA_OFF
/*CA_1A_20A*/ #endif
/*CA_1A_20A*/
/*CA_1A_20A*/ #ifndef LTE_CACFG_CA_1A_20A_CC0_PDATA_PR2_H
/*CA_1A_20A*/ #define LTE_CACFG_CA_1A_20A_CC0_PDATA_PR2_H       LTE_PDATA_OFF
/*CA_1A_20A*/ #endif
/*CA_1A_20A*/
/*CA_1A_20A*/ #ifndef LTE_CACFG_CA_1A_20A_CC0_PDATA_PR3_H
/*CA_1A_20A*/ #define LTE_CACFG_CA_1A_20A_CC0_PDATA_PR3_H       LTE_PDATA_OFF
/*CA_1A_20A*/ #endif
/*CA_1A_20A*/
/*CA_1A_20A*/ #ifndef LTE_CACFG_CA_1A_20A_CC0_PDATA_PT1_H
/*CA_1A_20A*/ #define LTE_CACFG_CA_1A_20A_CC0_PDATA_PT1_H       LTE_PDATA_OFF
/*CA_1A_20A*/ #endif
/*CA_1A_20A*/
/*CA_1A_20A*/ #ifndef LTE_CACFG_CA_1A_20A_CC0_PDATA_PT2_H
/*CA_1A_20A*/ #define LTE_CACFG_CA_1A_20A_CC0_PDATA_PT2_H       LTE_PDATA_OFF
/*CA_1A_20A*/ #endif
/*CA_1A_20A*/
/*CA_1A_20A*/ #ifndef LTE_CACFG_CA_1A_20A_CC0_PDATA_PT3_H
/*CA_1A_20A*/ #define LTE_CACFG_CA_1A_20A_CC0_PDATA_PT3_H       LTE_PDATA_OFF
/*CA_1A_20A*/ #endif
/*CA_1A_20A*/
/*CA_1A_20A*/ #ifndef LTE_CACFG_CA_1A_20A_CC0_PDATA_PRANT_H
/*CA_1A_20A*/ #define LTE_CACFG_CA_1A_20A_CC0_PDATA_PRANT_H     LTE_PDATA_OFF
/*CA_1A_20A*/ #endif
/*CA_1A_20A*/
/*CA_1A_20A*/ #ifndef LTE_CACFG_CA_1A_20A_CC0_PDATA_PTANT_H
/*CA_1A_20A*/ #define LTE_CACFG_CA_1A_20A_CC0_PDATA_PTANT_H     LTE_PDATA_OFF
/*CA_1A_20A*/ #endif
/*CA_1A_20A*/
/*CA_1A_20A*/ #ifndef LTE_CACFG_CA_1A_20A_CC1_PDATA_PR1_H
/*CA_1A_20A*/ #define LTE_CACFG_CA_1A_20A_CC1_PDATA_PR1_H       LTE_PDATA_OFF
/*CA_1A_20A*/ #endif
/*CA_1A_20A*/
/*CA_1A_20A*/ #ifndef LTE_CACFG_CA_1A_20A_CC1_PDATA_PR2_H
/*CA_1A_20A*/ #define LTE_CACFG_CA_1A_20A_CC1_PDATA_PR2_H       LTE_PDATA_OFF
/*CA_1A_20A*/ #endif
/*CA_1A_20A*/
/*CA_1A_20A*/ #ifndef LTE_CACFG_CA_1A_20A_CC1_PDATA_PR3_H
/*CA_1A_20A*/ #define LTE_CACFG_CA_1A_20A_CC1_PDATA_PR3_H       LTE_PDATA_OFF
/*CA_1A_20A*/ #endif
/*CA_1A_20A*/
/*CA_1A_20A*/ #ifndef LTE_CACFG_CA_1A_20A_CC1_PDATA_PT1_H
/*CA_1A_20A*/ #define LTE_CACFG_CA_1A_20A_CC1_PDATA_PT1_H       LTE_PDATA_OFF
/*CA_1A_20A*/ #endif
/*CA_1A_20A*/
/*CA_1A_20A*/ #ifndef LTE_CACFG_CA_1A_20A_CC1_PDATA_PT2_H
/*CA_1A_20A*/ #define LTE_CACFG_CA_1A_20A_CC1_PDATA_PT2_H       LTE_PDATA_OFF
/*CA_1A_20A*/ #endif
/*CA_1A_20A*/
/*CA_1A_20A*/ #ifndef LTE_CACFG_CA_1A_20A_CC1_PDATA_PT3_H
/*CA_1A_20A*/ #define LTE_CACFG_CA_1A_20A_CC1_PDATA_PT3_H       LTE_PDATA_OFF
/*CA_1A_20A*/ #endif
/*CA_1A_20A*/
/*CA_1A_20A*/ #ifndef LTE_CACFG_CA_1A_20A_CC1_PDATA_PRANT_H
/*CA_1A_20A*/ #define LTE_CACFG_CA_1A_20A_CC1_PDATA_PRANT_H     LTE_PDATA_OFF
/*CA_1A_20A*/ #endif
/*CA_1A_20A*/
/*CA_1A_20A*/ #ifndef LTE_CACFG_CA_1A_20A_CC1_PDATA_PTANT_H
/*CA_1A_20A*/ #define LTE_CACFG_CA_1A_20A_CC1_PDATA_PTANT_H     LTE_PDATA_OFF
/*CA_1A_20A*/ #endif

/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

/*CA_1A_21A*/ #ifndef LTE_CACFG_CA_1A_21A_CC0_PDATA_PR1_H
/*CA_1A_21A*/ #define LTE_CACFG_CA_1A_21A_CC0_PDATA_PR1_H       LTE_PDATA_OFF
/*CA_1A_21A*/ #endif
/*CA_1A_21A*/
/*CA_1A_21A*/ #ifndef LTE_CACFG_CA_1A_21A_CC0_PDATA_PR2_H
/*CA_1A_21A*/ #define LTE_CACFG_CA_1A_21A_CC0_PDATA_PR2_H       LTE_PDATA_OFF
/*CA_1A_21A*/ #endif
/*CA_1A_21A*/
/*CA_1A_21A*/ #ifndef LTE_CACFG_CA_1A_21A_CC0_PDATA_PR3_H
/*CA_1A_21A*/ #define LTE_CACFG_CA_1A_21A_CC0_PDATA_PR3_H       LTE_PDATA_OFF
/*CA_1A_21A*/ #endif
/*CA_1A_21A*/
/*CA_1A_21A*/ #ifndef LTE_CACFG_CA_1A_21A_CC0_PDATA_PT1_H
/*CA_1A_21A*/ #define LTE_CACFG_CA_1A_21A_CC0_PDATA_PT1_H       LTE_PDATA_OFF
/*CA_1A_21A*/ #endif
/*CA_1A_21A*/
/*CA_1A_21A*/ #ifndef LTE_CACFG_CA_1A_21A_CC0_PDATA_PT2_H
/*CA_1A_21A*/ #define LTE_CACFG_CA_1A_21A_CC0_PDATA_PT2_H       LTE_PDATA_OFF
/*CA_1A_21A*/ #endif
/*CA_1A_21A*/
/*CA_1A_21A*/ #ifndef LTE_CACFG_CA_1A_21A_CC0_PDATA_PT3_H
/*CA_1A_21A*/ #define LTE_CACFG_CA_1A_21A_CC0_PDATA_PT3_H       LTE_PDATA_OFF
/*CA_1A_21A*/ #endif
/*CA_1A_21A*/
/*CA_1A_21A*/ #ifndef LTE_CACFG_CA_1A_21A_CC0_PDATA_PRANT_H
/*CA_1A_21A*/ #define LTE_CACFG_CA_1A_21A_CC0_PDATA_PRANT_H     LTE_PDATA_OFF
/*CA_1A_21A*/ #endif
/*CA_1A_21A*/
/*CA_1A_21A*/ #ifndef LTE_CACFG_CA_1A_21A_CC0_PDATA_PTANT_H
/*CA_1A_21A*/ #define LTE_CACFG_CA_1A_21A_CC0_PDATA_PTANT_H     LTE_PDATA_OFF
/*CA_1A_21A*/ #endif
/*CA_1A_21A*/
/*CA_1A_21A*/ #ifndef LTE_CACFG_CA_1A_21A_CC1_PDATA_PR1_H
/*CA_1A_21A*/ #define LTE_CACFG_CA_1A_21A_CC1_PDATA_PR1_H       LTE_PDATA_OFF
/*CA_1A_21A*/ #endif
/*CA_1A_21A*/
/*CA_1A_21A*/ #ifndef LTE_CACFG_CA_1A_21A_CC1_PDATA_PR2_H
/*CA_1A_21A*/ #define LTE_CACFG_CA_1A_21A_CC1_PDATA_PR2_H       LTE_PDATA_OFF
/*CA_1A_21A*/ #endif
/*CA_1A_21A*/
/*CA_1A_21A*/ #ifndef LTE_CACFG_CA_1A_21A_CC1_PDATA_PR3_H
/*CA_1A_21A*/ #define LTE_CACFG_CA_1A_21A_CC1_PDATA_PR3_H       LTE_PDATA_OFF
/*CA_1A_21A*/ #endif
/*CA_1A_21A*/
/*CA_1A_21A*/ #ifndef LTE_CACFG_CA_1A_21A_CC1_PDATA_PT1_H
/*CA_1A_21A*/ #define LTE_CACFG_CA_1A_21A_CC1_PDATA_PT1_H       LTE_PDATA_OFF
/*CA_1A_21A*/ #endif
/*CA_1A_21A*/
/*CA_1A_21A*/ #ifndef LTE_CACFG_CA_1A_21A_CC1_PDATA_PT2_H
/*CA_1A_21A*/ #define LTE_CACFG_CA_1A_21A_CC1_PDATA_PT2_H       LTE_PDATA_OFF
/*CA_1A_21A*/ #endif
/*CA_1A_21A*/
/*CA_1A_21A*/ #ifndef LTE_CACFG_CA_1A_21A_CC1_PDATA_PT3_H
/*CA_1A_21A*/ #define LTE_CACFG_CA_1A_21A_CC1_PDATA_PT3_H       LTE_PDATA_OFF
/*CA_1A_21A*/ #endif
/*CA_1A_21A*/
/*CA_1A_21A*/ #ifndef LTE_CACFG_CA_1A_21A_CC1_PDATA_PRANT_H
/*CA_1A_21A*/ #define LTE_CACFG_CA_1A_21A_CC1_PDATA_PRANT_H     LTE_PDATA_OFF
/*CA_1A_21A*/ #endif
/*CA_1A_21A*/
/*CA_1A_21A*/ #ifndef LTE_CACFG_CA_1A_21A_CC1_PDATA_PTANT_H
/*CA_1A_21A*/ #define LTE_CACFG_CA_1A_21A_CC1_PDATA_PTANT_H     LTE_PDATA_OFF
/*CA_1A_21A*/ #endif

/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

/*CA_1A_26A*/ #ifndef LTE_CACFG_CA_1A_26A_CC0_PDATA_PR1_H
/*CA_1A_26A*/ #define LTE_CACFG_CA_1A_26A_CC0_PDATA_PR1_H       LTE_PDATA_OFF
/*CA_1A_26A*/ #endif
/*CA_1A_26A*/
/*CA_1A_26A*/ #ifndef LTE_CACFG_CA_1A_26A_CC0_PDATA_PR2_H
/*CA_1A_26A*/ #define LTE_CACFG_CA_1A_26A_CC0_PDATA_PR2_H       LTE_PDATA_OFF
/*CA_1A_26A*/ #endif
/*CA_1A_26A*/
/*CA_1A_26A*/ #ifndef LTE_CACFG_CA_1A_26A_CC0_PDATA_PR3_H
/*CA_1A_26A*/ #define LTE_CACFG_CA_1A_26A_CC0_PDATA_PR3_H       LTE_PDATA_OFF
/*CA_1A_26A*/ #endif
/*CA_1A_26A*/
/*CA_1A_26A*/ #ifndef LTE_CACFG_CA_1A_26A_CC0_PDATA_PT1_H
/*CA_1A_26A*/ #define LTE_CACFG_CA_1A_26A_CC0_PDATA_PT1_H       LTE_PDATA_OFF
/*CA_1A_26A*/ #endif
/*CA_1A_26A*/
/*CA_1A_26A*/ #ifndef LTE_CACFG_CA_1A_26A_CC0_PDATA_PT2_H
/*CA_1A_26A*/ #define LTE_CACFG_CA_1A_26A_CC0_PDATA_PT2_H       LTE_PDATA_OFF
/*CA_1A_26A*/ #endif
/*CA_1A_26A*/
/*CA_1A_26A*/ #ifndef LTE_CACFG_CA_1A_26A_CC0_PDATA_PT3_H
/*CA_1A_26A*/ #define LTE_CACFG_CA_1A_26A_CC0_PDATA_PT3_H       LTE_PDATA_OFF
/*CA_1A_26A*/ #endif
/*CA_1A_26A*/
/*CA_1A_26A*/ #ifndef LTE_CACFG_CA_1A_26A_CC0_PDATA_PRANT_H
/*CA_1A_26A*/ #define LTE_CACFG_CA_1A_26A_CC0_PDATA_PRANT_H     LTE_PDATA_OFF
/*CA_1A_26A*/ #endif
/*CA_1A_26A*/
/*CA_1A_26A*/ #ifndef LTE_CACFG_CA_1A_26A_CC0_PDATA_PTANT_H
/*CA_1A_26A*/ #define LTE_CACFG_CA_1A_26A_CC0_PDATA_PTANT_H     LTE_PDATA_OFF
/*CA_1A_26A*/ #endif
/*CA_1A_26A*/
/*CA_1A_26A*/ #ifndef LTE_CACFG_CA_1A_26A_CC1_PDATA_PR1_H
/*CA_1A_26A*/ #define LTE_CACFG_CA_1A_26A_CC1_PDATA_PR1_H       LTE_PDATA_OFF
/*CA_1A_26A*/ #endif
/*CA_1A_26A*/
/*CA_1A_26A*/ #ifndef LTE_CACFG_CA_1A_26A_CC1_PDATA_PR2_H
/*CA_1A_26A*/ #define LTE_CACFG_CA_1A_26A_CC1_PDATA_PR2_H       LTE_PDATA_OFF
/*CA_1A_26A*/ #endif
/*CA_1A_26A*/
/*CA_1A_26A*/ #ifndef LTE_CACFG_CA_1A_26A_CC1_PDATA_PR3_H
/*CA_1A_26A*/ #define LTE_CACFG_CA_1A_26A_CC1_PDATA_PR3_H       LTE_PDATA_OFF
/*CA_1A_26A*/ #endif
/*CA_1A_26A*/
/*CA_1A_26A*/ #ifndef LTE_CACFG_CA_1A_26A_CC1_PDATA_PT1_H
/*CA_1A_26A*/ #define LTE_CACFG_CA_1A_26A_CC1_PDATA_PT1_H       LTE_PDATA_OFF
/*CA_1A_26A*/ #endif
/*CA_1A_26A*/
/*CA_1A_26A*/ #ifndef LTE_CACFG_CA_1A_26A_CC1_PDATA_PT2_H
/*CA_1A_26A*/ #define LTE_CACFG_CA_1A_26A_CC1_PDATA_PT2_H       LTE_PDATA_OFF
/*CA_1A_26A*/ #endif
/*CA_1A_26A*/
/*CA_1A_26A*/ #ifndef LTE_CACFG_CA_1A_26A_CC1_PDATA_PT3_H
/*CA_1A_26A*/ #define LTE_CACFG_CA_1A_26A_CC1_PDATA_PT3_H       LTE_PDATA_OFF
/*CA_1A_26A*/ #endif
/*CA_1A_26A*/
/*CA_1A_26A*/ #ifndef LTE_CACFG_CA_1A_26A_CC1_PDATA_PRANT_H
/*CA_1A_26A*/ #define LTE_CACFG_CA_1A_26A_CC1_PDATA_PRANT_H     LTE_PDATA_OFF
/*CA_1A_26A*/ #endif
/*CA_1A_26A*/
/*CA_1A_26A*/ #ifndef LTE_CACFG_CA_1A_26A_CC1_PDATA_PTANT_H
/*CA_1A_26A*/ #define LTE_CACFG_CA_1A_26A_CC1_PDATA_PTANT_H     LTE_PDATA_OFF
/*CA_1A_26A*/ #endif

/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

/*CA_1A_28A*/ #ifndef LTE_CACFG_CA_1A_28A_CC0_PDATA_PR1_H
/*CA_1A_28A*/ #define LTE_CACFG_CA_1A_28A_CC0_PDATA_PR1_H       LTE_PDATA_OFF
/*CA_1A_28A*/ #endif
/*CA_1A_28A*/
/*CA_1A_28A*/ #ifndef LTE_CACFG_CA_1A_28A_CC0_PDATA_PR2_H
/*CA_1A_28A*/ #define LTE_CACFG_CA_1A_28A_CC0_PDATA_PR2_H       LTE_PDATA_OFF
/*CA_1A_28A*/ #endif
/*CA_1A_28A*/
/*CA_1A_28A*/ #ifndef LTE_CACFG_CA_1A_28A_CC0_PDATA_PR3_H
/*CA_1A_28A*/ #define LTE_CACFG_CA_1A_28A_CC0_PDATA_PR3_H       LTE_PDATA_OFF
/*CA_1A_28A*/ #endif
/*CA_1A_28A*/
/*CA_1A_28A*/ #ifndef LTE_CACFG_CA_1A_28A_CC0_PDATA_PT1_H
/*CA_1A_28A*/ #define LTE_CACFG_CA_1A_28A_CC0_PDATA_PT1_H       LTE_PDATA_OFF
/*CA_1A_28A*/ #endif
/*CA_1A_28A*/
/*CA_1A_28A*/ #ifndef LTE_CACFG_CA_1A_28A_CC0_PDATA_PT2_H
/*CA_1A_28A*/ #define LTE_CACFG_CA_1A_28A_CC0_PDATA_PT2_H       LTE_PDATA_OFF
/*CA_1A_28A*/ #endif
/*CA_1A_28A*/
/*CA_1A_28A*/ #ifndef LTE_CACFG_CA_1A_28A_CC0_PDATA_PT3_H
/*CA_1A_28A*/ #define LTE_CACFG_CA_1A_28A_CC0_PDATA_PT3_H       LTE_PDATA_OFF
/*CA_1A_28A*/ #endif
/*CA_1A_28A*/
/*CA_1A_28A*/ #ifndef LTE_CACFG_CA_1A_28A_CC0_PDATA_PRANT_H
/*CA_1A_28A*/ #define LTE_CACFG_CA_1A_28A_CC0_PDATA_PRANT_H     LTE_PDATA_OFF
/*CA_1A_28A*/ #endif
/*CA_1A_28A*/
/*CA_1A_28A*/ #ifndef LTE_CACFG_CA_1A_28A_CC0_PDATA_PTANT_H
/*CA_1A_28A*/ #define LTE_CACFG_CA_1A_28A_CC0_PDATA_PTANT_H     LTE_PDATA_OFF
/*CA_1A_28A*/ #endif
/*CA_1A_28A*/
/*CA_1A_28A*/ #ifndef LTE_CACFG_CA_1A_28A_CC1_PDATA_PR1_H
/*CA_1A_28A*/ #define LTE_CACFG_CA_1A_28A_CC1_PDATA_PR1_H       LTE_PDATA_OFF
/*CA_1A_28A*/ #endif
/*CA_1A_28A*/
/*CA_1A_28A*/ #ifndef LTE_CACFG_CA_1A_28A_CC1_PDATA_PR2_H
/*CA_1A_28A*/ #define LTE_CACFG_CA_1A_28A_CC1_PDATA_PR2_H       LTE_PDATA_OFF
/*CA_1A_28A*/ #endif
/*CA_1A_28A*/
/*CA_1A_28A*/ #ifndef LTE_CACFG_CA_1A_28A_CC1_PDATA_PR3_H
/*CA_1A_28A*/ #define LTE_CACFG_CA_1A_28A_CC1_PDATA_PR3_H       LTE_PDATA_OFF
/*CA_1A_28A*/ #endif
/*CA_1A_28A*/
/*CA_1A_28A*/ #ifndef LTE_CACFG_CA_1A_28A_CC1_PDATA_PT1_H
/*CA_1A_28A*/ #define LTE_CACFG_CA_1A_28A_CC1_PDATA_PT1_H       LTE_PDATA_OFF
/*CA_1A_28A*/ #endif
/*CA_1A_28A*/
/*CA_1A_28A*/ #ifndef LTE_CACFG_CA_1A_28A_CC1_PDATA_PT2_H
/*CA_1A_28A*/ #define LTE_CACFG_CA_1A_28A_CC1_PDATA_PT2_H       LTE_PDATA_OFF
/*CA_1A_28A*/ #endif
/*CA_1A_28A*/
/*CA_1A_28A*/ #ifndef LTE_CACFG_CA_1A_28A_CC1_PDATA_PT3_H
/*CA_1A_28A*/ #define LTE_CACFG_CA_1A_28A_CC1_PDATA_PT3_H       LTE_PDATA_OFF
/*CA_1A_28A*/ #endif
/*CA_1A_28A*/
/*CA_1A_28A*/ #ifndef LTE_CACFG_CA_1A_28A_CC1_PDATA_PRANT_H
/*CA_1A_28A*/ #define LTE_CACFG_CA_1A_28A_CC1_PDATA_PRANT_H     LTE_PDATA_OFF
/*CA_1A_28A*/ #endif
/*CA_1A_28A*/
/*CA_1A_28A*/ #ifndef LTE_CACFG_CA_1A_28A_CC1_PDATA_PTANT_H
/*CA_1A_28A*/ #define LTE_CACFG_CA_1A_28A_CC1_PDATA_PTANT_H     LTE_PDATA_OFF
/*CA_1A_28A*/ #endif

/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

/*CA_2A_4A*/ #ifndef LTE_CACFG_CA_2A_4A_CC0_PDATA_PR1_H
/*CA_2A_4A*/ #define LTE_CACFG_CA_2A_4A_CC0_PDATA_PR1_H       LTE_PDATA_OFF
/*CA_2A_4A*/ #endif
/*CA_2A_4A*/
/*CA_2A_4A*/ #ifndef LTE_CACFG_CA_2A_4A_CC0_PDATA_PR2_H
/*CA_2A_4A*/ #define LTE_CACFG_CA_2A_4A_CC0_PDATA_PR2_H       LTE_PDATA_OFF
/*CA_2A_4A*/ #endif
/*CA_2A_4A*/
/*CA_2A_4A*/ #ifndef LTE_CACFG_CA_2A_4A_CC0_PDATA_PR3_H
/*CA_2A_4A*/ #define LTE_CACFG_CA_2A_4A_CC0_PDATA_PR3_H       LTE_PDATA_OFF
/*CA_2A_4A*/ #endif
/*CA_2A_4A*/
/*CA_2A_4A*/ #ifndef LTE_CACFG_CA_2A_4A_CC0_PDATA_PT1_H
/*CA_2A_4A*/ #define LTE_CACFG_CA_2A_4A_CC0_PDATA_PT1_H       LTE_PDATA_OFF
/*CA_2A_4A*/ #endif
/*CA_2A_4A*/
/*CA_2A_4A*/ #ifndef LTE_CACFG_CA_2A_4A_CC0_PDATA_PT2_H
/*CA_2A_4A*/ #define LTE_CACFG_CA_2A_4A_CC0_PDATA_PT2_H       LTE_PDATA_OFF
/*CA_2A_4A*/ #endif
/*CA_2A_4A*/
/*CA_2A_4A*/ #ifndef LTE_CACFG_CA_2A_4A_CC0_PDATA_PT3_H
/*CA_2A_4A*/ #define LTE_CACFG_CA_2A_4A_CC0_PDATA_PT3_H       LTE_PDATA_OFF
/*CA_2A_4A*/ #endif
/*CA_2A_4A*/
/*CA_2A_4A*/ #ifndef LTE_CACFG_CA_2A_4A_CC0_PDATA_PRANT_H
/*CA_2A_4A*/ #define LTE_CACFG_CA_2A_4A_CC0_PDATA_PRANT_H     LTE_PDATA_OFF
/*CA_2A_4A*/ #endif
/*CA_2A_4A*/
/*CA_2A_4A*/ #ifndef LTE_CACFG_CA_2A_4A_CC0_PDATA_PTANT_H
/*CA_2A_4A*/ #define LTE_CACFG_CA_2A_4A_CC0_PDATA_PTANT_H     LTE_PDATA_OFF
/*CA_2A_4A*/ #endif
/*CA_2A_4A*/
/*CA_2A_4A*/ #ifndef LTE_CACFG_CA_2A_4A_CC1_PDATA_PR1_H
/*CA_2A_4A*/ #define LTE_CACFG_CA_2A_4A_CC1_PDATA_PR1_H       LTE_PDATA_OFF
/*CA_2A_4A*/ #endif
/*CA_2A_4A*/
/*CA_2A_4A*/ #ifndef LTE_CACFG_CA_2A_4A_CC1_PDATA_PR2_H
/*CA_2A_4A*/ #define LTE_CACFG_CA_2A_4A_CC1_PDATA_PR2_H       LTE_PDATA_OFF
/*CA_2A_4A*/ #endif
/*CA_2A_4A*/
/*CA_2A_4A*/ #ifndef LTE_CACFG_CA_2A_4A_CC1_PDATA_PR3_H
/*CA_2A_4A*/ #define LTE_CACFG_CA_2A_4A_CC1_PDATA_PR3_H       LTE_PDATA_OFF
/*CA_2A_4A*/ #endif
/*CA_2A_4A*/
/*CA_2A_4A*/ #ifndef LTE_CACFG_CA_2A_4A_CC1_PDATA_PT1_H
/*CA_2A_4A*/ #define LTE_CACFG_CA_2A_4A_CC1_PDATA_PT1_H       LTE_PDATA_OFF
/*CA_2A_4A*/ #endif
/*CA_2A_4A*/
/*CA_2A_4A*/ #ifndef LTE_CACFG_CA_2A_4A_CC1_PDATA_PT2_H
/*CA_2A_4A*/ #define LTE_CACFG_CA_2A_4A_CC1_PDATA_PT2_H       LTE_PDATA_OFF
/*CA_2A_4A*/ #endif
/*CA_2A_4A*/
/*CA_2A_4A*/ #ifndef LTE_CACFG_CA_2A_4A_CC1_PDATA_PT3_H
/*CA_2A_4A*/ #define LTE_CACFG_CA_2A_4A_CC1_PDATA_PT3_H       LTE_PDATA_OFF
/*CA_2A_4A*/ #endif
/*CA_2A_4A*/
/*CA_2A_4A*/ #ifndef LTE_CACFG_CA_2A_4A_CC1_PDATA_PRANT_H
/*CA_2A_4A*/ #define LTE_CACFG_CA_2A_4A_CC1_PDATA_PRANT_H     LTE_PDATA_OFF
/*CA_2A_4A*/ #endif
/*CA_2A_4A*/
/*CA_2A_4A*/ #ifndef LTE_CACFG_CA_2A_4A_CC1_PDATA_PTANT_H
/*CA_2A_4A*/ #define LTE_CACFG_CA_2A_4A_CC1_PDATA_PTANT_H     LTE_PDATA_OFF
/*CA_2A_4A*/ #endif

/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

/*CA_2A_5A*/ #ifndef LTE_CACFG_CA_2A_5A_CC0_PDATA_PR1_H
/*CA_2A_5A*/ #define LTE_CACFG_CA_2A_5A_CC0_PDATA_PR1_H       LTE_PDATA_OFF
/*CA_2A_5A*/ #endif
/*CA_2A_5A*/
/*CA_2A_5A*/ #ifndef LTE_CACFG_CA_2A_5A_CC0_PDATA_PR2_H
/*CA_2A_5A*/ #define LTE_CACFG_CA_2A_5A_CC0_PDATA_PR2_H       LTE_PDATA_OFF
/*CA_2A_5A*/ #endif
/*CA_2A_5A*/
/*CA_2A_5A*/ #ifndef LTE_CACFG_CA_2A_5A_CC0_PDATA_PR3_H
/*CA_2A_5A*/ #define LTE_CACFG_CA_2A_5A_CC0_PDATA_PR3_H       LTE_PDATA_OFF
/*CA_2A_5A*/ #endif
/*CA_2A_5A*/
/*CA_2A_5A*/ #ifndef LTE_CACFG_CA_2A_5A_CC0_PDATA_PT1_H
/*CA_2A_5A*/ #define LTE_CACFG_CA_2A_5A_CC0_PDATA_PT1_H       LTE_PDATA_OFF
/*CA_2A_5A*/ #endif
/*CA_2A_5A*/
/*CA_2A_5A*/ #ifndef LTE_CACFG_CA_2A_5A_CC0_PDATA_PT2_H
/*CA_2A_5A*/ #define LTE_CACFG_CA_2A_5A_CC0_PDATA_PT2_H       LTE_PDATA_OFF
/*CA_2A_5A*/ #endif
/*CA_2A_5A*/
/*CA_2A_5A*/ #ifndef LTE_CACFG_CA_2A_5A_CC0_PDATA_PT3_H
/*CA_2A_5A*/ #define LTE_CACFG_CA_2A_5A_CC0_PDATA_PT3_H       LTE_PDATA_OFF
/*CA_2A_5A*/ #endif
/*CA_2A_5A*/
/*CA_2A_5A*/ #ifndef LTE_CACFG_CA_2A_5A_CC0_PDATA_PRANT_H
/*CA_2A_5A*/ #define LTE_CACFG_CA_2A_5A_CC0_PDATA_PRANT_H     LTE_PDATA_OFF
/*CA_2A_5A*/ #endif
/*CA_2A_5A*/
/*CA_2A_5A*/ #ifndef LTE_CACFG_CA_2A_5A_CC0_PDATA_PTANT_H
/*CA_2A_5A*/ #define LTE_CACFG_CA_2A_5A_CC0_PDATA_PTANT_H     LTE_PDATA_OFF
/*CA_2A_5A*/ #endif
/*CA_2A_5A*/
/*CA_2A_5A*/ #ifndef LTE_CACFG_CA_2A_5A_CC1_PDATA_PR1_H
/*CA_2A_5A*/ #define LTE_CACFG_CA_2A_5A_CC1_PDATA_PR1_H       LTE_PDATA_OFF
/*CA_2A_5A*/ #endif
/*CA_2A_5A*/
/*CA_2A_5A*/ #ifndef LTE_CACFG_CA_2A_5A_CC1_PDATA_PR2_H
/*CA_2A_5A*/ #define LTE_CACFG_CA_2A_5A_CC1_PDATA_PR2_H       LTE_PDATA_OFF
/*CA_2A_5A*/ #endif
/*CA_2A_5A*/
/*CA_2A_5A*/ #ifndef LTE_CACFG_CA_2A_5A_CC1_PDATA_PR3_H
/*CA_2A_5A*/ #define LTE_CACFG_CA_2A_5A_CC1_PDATA_PR3_H       LTE_PDATA_OFF
/*CA_2A_5A*/ #endif
/*CA_2A_5A*/
/*CA_2A_5A*/ #ifndef LTE_CACFG_CA_2A_5A_CC1_PDATA_PT1_H
/*CA_2A_5A*/ #define LTE_CACFG_CA_2A_5A_CC1_PDATA_PT1_H       LTE_PDATA_OFF
/*CA_2A_5A*/ #endif
/*CA_2A_5A*/
/*CA_2A_5A*/ #ifndef LTE_CACFG_CA_2A_5A_CC1_PDATA_PT2_H
/*CA_2A_5A*/ #define LTE_CACFG_CA_2A_5A_CC1_PDATA_PT2_H       LTE_PDATA_OFF
/*CA_2A_5A*/ #endif
/*CA_2A_5A*/
/*CA_2A_5A*/ #ifndef LTE_CACFG_CA_2A_5A_CC1_PDATA_PT3_H
/*CA_2A_5A*/ #define LTE_CACFG_CA_2A_5A_CC1_PDATA_PT3_H       LTE_PDATA_OFF
/*CA_2A_5A*/ #endif
/*CA_2A_5A*/
/*CA_2A_5A*/ #ifndef LTE_CACFG_CA_2A_5A_CC1_PDATA_PRANT_H
/*CA_2A_5A*/ #define LTE_CACFG_CA_2A_5A_CC1_PDATA_PRANT_H     LTE_PDATA_OFF
/*CA_2A_5A*/ #endif
/*CA_2A_5A*/
/*CA_2A_5A*/ #ifndef LTE_CACFG_CA_2A_5A_CC1_PDATA_PTANT_H
/*CA_2A_5A*/ #define LTE_CACFG_CA_2A_5A_CC1_PDATA_PTANT_H     LTE_PDATA_OFF
/*CA_2A_5A*/ #endif

/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

/*CA_2A_12A*/ #ifndef LTE_CACFG_CA_2A_12A_CC0_PDATA_PR1_H
/*CA_2A_12A*/ #define LTE_CACFG_CA_2A_12A_CC0_PDATA_PR1_H       LTE_PDATA_OFF
/*CA_2A_12A*/ #endif
/*CA_2A_12A*/
/*CA_2A_12A*/ #ifndef LTE_CACFG_CA_2A_12A_CC0_PDATA_PR2_H
/*CA_2A_12A*/ #define LTE_CACFG_CA_2A_12A_CC0_PDATA_PR2_H       LTE_PDATA_OFF
/*CA_2A_12A*/ #endif
/*CA_2A_12A*/
/*CA_2A_12A*/ #ifndef LTE_CACFG_CA_2A_12A_CC0_PDATA_PR3_H
/*CA_2A_12A*/ #define LTE_CACFG_CA_2A_12A_CC0_PDATA_PR3_H       LTE_PDATA_OFF
/*CA_2A_12A*/ #endif
/*CA_2A_12A*/
/*CA_2A_12A*/ #ifndef LTE_CACFG_CA_2A_12A_CC0_PDATA_PT1_H
/*CA_2A_12A*/ #define LTE_CACFG_CA_2A_12A_CC0_PDATA_PT1_H       LTE_PDATA_OFF
/*CA_2A_12A*/ #endif
/*CA_2A_12A*/
/*CA_2A_12A*/ #ifndef LTE_CACFG_CA_2A_12A_CC0_PDATA_PT2_H
/*CA_2A_12A*/ #define LTE_CACFG_CA_2A_12A_CC0_PDATA_PT2_H       LTE_PDATA_OFF
/*CA_2A_12A*/ #endif
/*CA_2A_12A*/
/*CA_2A_12A*/ #ifndef LTE_CACFG_CA_2A_12A_CC0_PDATA_PT3_H
/*CA_2A_12A*/ #define LTE_CACFG_CA_2A_12A_CC0_PDATA_PT3_H       LTE_PDATA_OFF
/*CA_2A_12A*/ #endif
/*CA_2A_12A*/
/*CA_2A_12A*/ #ifndef LTE_CACFG_CA_2A_12A_CC0_PDATA_PRANT_H
/*CA_2A_12A*/ #define LTE_CACFG_CA_2A_12A_CC0_PDATA_PRANT_H     LTE_PDATA_OFF
/*CA_2A_12A*/ #endif
/*CA_2A_12A*/
/*CA_2A_12A*/ #ifndef LTE_CACFG_CA_2A_12A_CC0_PDATA_PTANT_H
/*CA_2A_12A*/ #define LTE_CACFG_CA_2A_12A_CC0_PDATA_PTANT_H     LTE_PDATA_OFF
/*CA_2A_12A*/ #endif
/*CA_2A_12A*/
/*CA_2A_12A*/ #ifndef LTE_CACFG_CA_2A_12A_CC1_PDATA_PR1_H
/*CA_2A_12A*/ #define LTE_CACFG_CA_2A_12A_CC1_PDATA_PR1_H       LTE_PDATA_OFF
/*CA_2A_12A*/ #endif
/*CA_2A_12A*/
/*CA_2A_12A*/ #ifndef LTE_CACFG_CA_2A_12A_CC1_PDATA_PR2_H
/*CA_2A_12A*/ #define LTE_CACFG_CA_2A_12A_CC1_PDATA_PR2_H       LTE_PDATA_OFF
/*CA_2A_12A*/ #endif
/*CA_2A_12A*/
/*CA_2A_12A*/ #ifndef LTE_CACFG_CA_2A_12A_CC1_PDATA_PR3_H
/*CA_2A_12A*/ #define LTE_CACFG_CA_2A_12A_CC1_PDATA_PR3_H       LTE_PDATA_OFF
/*CA_2A_12A*/ #endif
/*CA_2A_12A*/
/*CA_2A_12A*/ #ifndef LTE_CACFG_CA_2A_12A_CC1_PDATA_PT1_H
/*CA_2A_12A*/ #define LTE_CACFG_CA_2A_12A_CC1_PDATA_PT1_H       LTE_PDATA_OFF
/*CA_2A_12A*/ #endif
/*CA_2A_12A*/
/*CA_2A_12A*/ #ifndef LTE_CACFG_CA_2A_12A_CC1_PDATA_PT2_H
/*CA_2A_12A*/ #define LTE_CACFG_CA_2A_12A_CC1_PDATA_PT2_H       LTE_PDATA_OFF
/*CA_2A_12A*/ #endif
/*CA_2A_12A*/
/*CA_2A_12A*/ #ifndef LTE_CACFG_CA_2A_12A_CC1_PDATA_PT3_H
/*CA_2A_12A*/ #define LTE_CACFG_CA_2A_12A_CC1_PDATA_PT3_H       LTE_PDATA_OFF
/*CA_2A_12A*/ #endif
/*CA_2A_12A*/
/*CA_2A_12A*/ #ifndef LTE_CACFG_CA_2A_12A_CC1_PDATA_PRANT_H
/*CA_2A_12A*/ #define LTE_CACFG_CA_2A_12A_CC1_PDATA_PRANT_H     LTE_PDATA_OFF
/*CA_2A_12A*/ #endif
/*CA_2A_12A*/
/*CA_2A_12A*/ #ifndef LTE_CACFG_CA_2A_12A_CC1_PDATA_PTANT_H
/*CA_2A_12A*/ #define LTE_CACFG_CA_2A_12A_CC1_PDATA_PTANT_H     LTE_PDATA_OFF
/*CA_2A_12A*/ #endif

/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

/*CA_2A_13A*/ #ifndef LTE_CACFG_CA_2A_13A_CC0_PDATA_PR1_H
/*CA_2A_13A*/ #define LTE_CACFG_CA_2A_13A_CC0_PDATA_PR1_H       LTE_PDATA_OFF
/*CA_2A_13A*/ #endif
/*CA_2A_13A*/
/*CA_2A_13A*/ #ifndef LTE_CACFG_CA_2A_13A_CC0_PDATA_PR2_H
/*CA_2A_13A*/ #define LTE_CACFG_CA_2A_13A_CC0_PDATA_PR2_H       LTE_PDATA_OFF
/*CA_2A_13A*/ #endif
/*CA_2A_13A*/
/*CA_2A_13A*/ #ifndef LTE_CACFG_CA_2A_13A_CC0_PDATA_PR3_H
/*CA_2A_13A*/ #define LTE_CACFG_CA_2A_13A_CC0_PDATA_PR3_H       LTE_PDATA_OFF
/*CA_2A_13A*/ #endif
/*CA_2A_13A*/
/*CA_2A_13A*/ #ifndef LTE_CACFG_CA_2A_13A_CC0_PDATA_PT1_H
/*CA_2A_13A*/ #define LTE_CACFG_CA_2A_13A_CC0_PDATA_PT1_H       LTE_PDATA_OFF
/*CA_2A_13A*/ #endif
/*CA_2A_13A*/
/*CA_2A_13A*/ #ifndef LTE_CACFG_CA_2A_13A_CC0_PDATA_PT2_H
/*CA_2A_13A*/ #define LTE_CACFG_CA_2A_13A_CC0_PDATA_PT2_H       LTE_PDATA_OFF
/*CA_2A_13A*/ #endif
/*CA_2A_13A*/
/*CA_2A_13A*/ #ifndef LTE_CACFG_CA_2A_13A_CC0_PDATA_PT3_H
/*CA_2A_13A*/ #define LTE_CACFG_CA_2A_13A_CC0_PDATA_PT3_H       LTE_PDATA_OFF
/*CA_2A_13A*/ #endif
/*CA_2A_13A*/
/*CA_2A_13A*/ #ifndef LTE_CACFG_CA_2A_13A_CC0_PDATA_PRANT_H
/*CA_2A_13A*/ #define LTE_CACFG_CA_2A_13A_CC0_PDATA_PRANT_H     LTE_PDATA_OFF
/*CA_2A_13A*/ #endif
/*CA_2A_13A*/
/*CA_2A_13A*/ #ifndef LTE_CACFG_CA_2A_13A_CC0_PDATA_PTANT_H
/*CA_2A_13A*/ #define LTE_CACFG_CA_2A_13A_CC0_PDATA_PTANT_H     LTE_PDATA_OFF
/*CA_2A_13A*/ #endif
/*CA_2A_13A*/
/*CA_2A_13A*/ #ifndef LTE_CACFG_CA_2A_13A_CC1_PDATA_PR1_H
/*CA_2A_13A*/ #define LTE_CACFG_CA_2A_13A_CC1_PDATA_PR1_H       LTE_PDATA_OFF
/*CA_2A_13A*/ #endif
/*CA_2A_13A*/
/*CA_2A_13A*/ #ifndef LTE_CACFG_CA_2A_13A_CC1_PDATA_PR2_H
/*CA_2A_13A*/ #define LTE_CACFG_CA_2A_13A_CC1_PDATA_PR2_H       LTE_PDATA_OFF
/*CA_2A_13A*/ #endif
/*CA_2A_13A*/
/*CA_2A_13A*/ #ifndef LTE_CACFG_CA_2A_13A_CC1_PDATA_PR3_H
/*CA_2A_13A*/ #define LTE_CACFG_CA_2A_13A_CC1_PDATA_PR3_H       LTE_PDATA_OFF
/*CA_2A_13A*/ #endif
/*CA_2A_13A*/
/*CA_2A_13A*/ #ifndef LTE_CACFG_CA_2A_13A_CC1_PDATA_PT1_H
/*CA_2A_13A*/ #define LTE_CACFG_CA_2A_13A_CC1_PDATA_PT1_H       LTE_PDATA_OFF
/*CA_2A_13A*/ #endif
/*CA_2A_13A*/
/*CA_2A_13A*/ #ifndef LTE_CACFG_CA_2A_13A_CC1_PDATA_PT2_H
/*CA_2A_13A*/ #define LTE_CACFG_CA_2A_13A_CC1_PDATA_PT2_H       LTE_PDATA_OFF
/*CA_2A_13A*/ #endif
/*CA_2A_13A*/
/*CA_2A_13A*/ #ifndef LTE_CACFG_CA_2A_13A_CC1_PDATA_PT3_H
/*CA_2A_13A*/ #define LTE_CACFG_CA_2A_13A_CC1_PDATA_PT3_H       LTE_PDATA_OFF
/*CA_2A_13A*/ #endif
/*CA_2A_13A*/
/*CA_2A_13A*/ #ifndef LTE_CACFG_CA_2A_13A_CC1_PDATA_PRANT_H
/*CA_2A_13A*/ #define LTE_CACFG_CA_2A_13A_CC1_PDATA_PRANT_H     LTE_PDATA_OFF
/*CA_2A_13A*/ #endif
/*CA_2A_13A*/
/*CA_2A_13A*/ #ifndef LTE_CACFG_CA_2A_13A_CC1_PDATA_PTANT_H
/*CA_2A_13A*/ #define LTE_CACFG_CA_2A_13A_CC1_PDATA_PTANT_H     LTE_PDATA_OFF
/*CA_2A_13A*/ #endif

/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

/*CA_2A_17A*/ #ifndef LTE_CACFG_CA_2A_17A_CC0_PDATA_PR1_H
/*CA_2A_17A*/ #define LTE_CACFG_CA_2A_17A_CC0_PDATA_PR1_H       LTE_PDATA_OFF
/*CA_2A_17A*/ #endif
/*CA_2A_17A*/
/*CA_2A_17A*/ #ifndef LTE_CACFG_CA_2A_17A_CC0_PDATA_PR2_H
/*CA_2A_17A*/ #define LTE_CACFG_CA_2A_17A_CC0_PDATA_PR2_H       LTE_PDATA_OFF
/*CA_2A_17A*/ #endif
/*CA_2A_17A*/
/*CA_2A_17A*/ #ifndef LTE_CACFG_CA_2A_17A_CC0_PDATA_PR3_H
/*CA_2A_17A*/ #define LTE_CACFG_CA_2A_17A_CC0_PDATA_PR3_H       LTE_PDATA_OFF
/*CA_2A_17A*/ #endif
/*CA_2A_17A*/
/*CA_2A_17A*/ #ifndef LTE_CACFG_CA_2A_17A_CC0_PDATA_PT1_H
/*CA_2A_17A*/ #define LTE_CACFG_CA_2A_17A_CC0_PDATA_PT1_H       LTE_PDATA_OFF
/*CA_2A_17A*/ #endif
/*CA_2A_17A*/
/*CA_2A_17A*/ #ifndef LTE_CACFG_CA_2A_17A_CC0_PDATA_PT2_H
/*CA_2A_17A*/ #define LTE_CACFG_CA_2A_17A_CC0_PDATA_PT2_H       LTE_PDATA_OFF
/*CA_2A_17A*/ #endif
/*CA_2A_17A*/
/*CA_2A_17A*/ #ifndef LTE_CACFG_CA_2A_17A_CC0_PDATA_PT3_H
/*CA_2A_17A*/ #define LTE_CACFG_CA_2A_17A_CC0_PDATA_PT3_H       LTE_PDATA_OFF
/*CA_2A_17A*/ #endif
/*CA_2A_17A*/
/*CA_2A_17A*/ #ifndef LTE_CACFG_CA_2A_17A_CC0_PDATA_PRANT_H
/*CA_2A_17A*/ #define LTE_CACFG_CA_2A_17A_CC0_PDATA_PRANT_H     LTE_PDATA_OFF
/*CA_2A_17A*/ #endif
/*CA_2A_17A*/
/*CA_2A_17A*/ #ifndef LTE_CACFG_CA_2A_17A_CC0_PDATA_PTANT_H
/*CA_2A_17A*/ #define LTE_CACFG_CA_2A_17A_CC0_PDATA_PTANT_H     LTE_PDATA_OFF
/*CA_2A_17A*/ #endif
/*CA_2A_17A*/
/*CA_2A_17A*/ #ifndef LTE_CACFG_CA_2A_17A_CC1_PDATA_PR1_H
/*CA_2A_17A*/ #define LTE_CACFG_CA_2A_17A_CC1_PDATA_PR1_H       LTE_PDATA_OFF
/*CA_2A_17A*/ #endif
/*CA_2A_17A*/
/*CA_2A_17A*/ #ifndef LTE_CACFG_CA_2A_17A_CC1_PDATA_PR2_H
/*CA_2A_17A*/ #define LTE_CACFG_CA_2A_17A_CC1_PDATA_PR2_H       LTE_PDATA_OFF
/*CA_2A_17A*/ #endif
/*CA_2A_17A*/
/*CA_2A_17A*/ #ifndef LTE_CACFG_CA_2A_17A_CC1_PDATA_PR3_H
/*CA_2A_17A*/ #define LTE_CACFG_CA_2A_17A_CC1_PDATA_PR3_H       LTE_PDATA_OFF
/*CA_2A_17A*/ #endif
/*CA_2A_17A*/
/*CA_2A_17A*/ #ifndef LTE_CACFG_CA_2A_17A_CC1_PDATA_PT1_H
/*CA_2A_17A*/ #define LTE_CACFG_CA_2A_17A_CC1_PDATA_PT1_H       LTE_PDATA_OFF
/*CA_2A_17A*/ #endif
/*CA_2A_17A*/
/*CA_2A_17A*/ #ifndef LTE_CACFG_CA_2A_17A_CC1_PDATA_PT2_H
/*CA_2A_17A*/ #define LTE_CACFG_CA_2A_17A_CC1_PDATA_PT2_H       LTE_PDATA_OFF
/*CA_2A_17A*/ #endif
/*CA_2A_17A*/
/*CA_2A_17A*/ #ifndef LTE_CACFG_CA_2A_17A_CC1_PDATA_PT3_H
/*CA_2A_17A*/ #define LTE_CACFG_CA_2A_17A_CC1_PDATA_PT3_H       LTE_PDATA_OFF
/*CA_2A_17A*/ #endif
/*CA_2A_17A*/
/*CA_2A_17A*/ #ifndef LTE_CACFG_CA_2A_17A_CC1_PDATA_PRANT_H
/*CA_2A_17A*/ #define LTE_CACFG_CA_2A_17A_CC1_PDATA_PRANT_H     LTE_PDATA_OFF
/*CA_2A_17A*/ #endif
/*CA_2A_17A*/
/*CA_2A_17A*/ #ifndef LTE_CACFG_CA_2A_17A_CC1_PDATA_PTANT_H
/*CA_2A_17A*/ #define LTE_CACFG_CA_2A_17A_CC1_PDATA_PTANT_H     LTE_PDATA_OFF
/*CA_2A_17A*/ #endif

/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

/*CA_2A_29A*/ #ifndef LTE_CACFG_CA_2A_29A_CC0_PDATA_PR1_H
/*CA_2A_29A*/ #define LTE_CACFG_CA_2A_29A_CC0_PDATA_PR1_H       LTE_PDATA_OFF
/*CA_2A_29A*/ #endif
/*CA_2A_29A*/
/*CA_2A_29A*/ #ifndef LTE_CACFG_CA_2A_29A_CC0_PDATA_PR2_H
/*CA_2A_29A*/ #define LTE_CACFG_CA_2A_29A_CC0_PDATA_PR2_H       LTE_PDATA_OFF
/*CA_2A_29A*/ #endif
/*CA_2A_29A*/
/*CA_2A_29A*/ #ifndef LTE_CACFG_CA_2A_29A_CC0_PDATA_PR3_H
/*CA_2A_29A*/ #define LTE_CACFG_CA_2A_29A_CC0_PDATA_PR3_H       LTE_PDATA_OFF
/*CA_2A_29A*/ #endif
/*CA_2A_29A*/
/*CA_2A_29A*/ #ifndef LTE_CACFG_CA_2A_29A_CC0_PDATA_PT1_H
/*CA_2A_29A*/ #define LTE_CACFG_CA_2A_29A_CC0_PDATA_PT1_H       LTE_PDATA_OFF
/*CA_2A_29A*/ #endif
/*CA_2A_29A*/
/*CA_2A_29A*/ #ifndef LTE_CACFG_CA_2A_29A_CC0_PDATA_PT2_H
/*CA_2A_29A*/ #define LTE_CACFG_CA_2A_29A_CC0_PDATA_PT2_H       LTE_PDATA_OFF
/*CA_2A_29A*/ #endif
/*CA_2A_29A*/
/*CA_2A_29A*/ #ifndef LTE_CACFG_CA_2A_29A_CC0_PDATA_PT3_H
/*CA_2A_29A*/ #define LTE_CACFG_CA_2A_29A_CC0_PDATA_PT3_H       LTE_PDATA_OFF
/*CA_2A_29A*/ #endif
/*CA_2A_29A*/
/*CA_2A_29A*/ #ifndef LTE_CACFG_CA_2A_29A_CC0_PDATA_PRANT_H
/*CA_2A_29A*/ #define LTE_CACFG_CA_2A_29A_CC0_PDATA_PRANT_H     LTE_PDATA_OFF
/*CA_2A_29A*/ #endif
/*CA_2A_29A*/
/*CA_2A_29A*/ #ifndef LTE_CACFG_CA_2A_29A_CC0_PDATA_PTANT_H
/*CA_2A_29A*/ #define LTE_CACFG_CA_2A_29A_CC0_PDATA_PTANT_H     LTE_PDATA_OFF
/*CA_2A_29A*/ #endif
/*CA_2A_29A*/
/*CA_2A_29A*/ #ifndef LTE_CACFG_CA_2A_29A_CC1_PDATA_PR1_H
/*CA_2A_29A*/ #define LTE_CACFG_CA_2A_29A_CC1_PDATA_PR1_H       LTE_PDATA_OFF
/*CA_2A_29A*/ #endif
/*CA_2A_29A*/
/*CA_2A_29A*/ #ifndef LTE_CACFG_CA_2A_29A_CC1_PDATA_PR2_H
/*CA_2A_29A*/ #define LTE_CACFG_CA_2A_29A_CC1_PDATA_PR2_H       LTE_PDATA_OFF
/*CA_2A_29A*/ #endif
/*CA_2A_29A*/
/*CA_2A_29A*/ #ifndef LTE_CACFG_CA_2A_29A_CC1_PDATA_PR3_H
/*CA_2A_29A*/ #define LTE_CACFG_CA_2A_29A_CC1_PDATA_PR3_H       LTE_PDATA_OFF
/*CA_2A_29A*/ #endif
/*CA_2A_29A*/
/*CA_2A_29A*/ #ifndef LTE_CACFG_CA_2A_29A_CC1_PDATA_PT1_H
/*CA_2A_29A*/ #define LTE_CACFG_CA_2A_29A_CC1_PDATA_PT1_H       LTE_PDATA_OFF
/*CA_2A_29A*/ #endif
/*CA_2A_29A*/
/*CA_2A_29A*/ #ifndef LTE_CACFG_CA_2A_29A_CC1_PDATA_PT2_H
/*CA_2A_29A*/ #define LTE_CACFG_CA_2A_29A_CC1_PDATA_PT2_H       LTE_PDATA_OFF
/*CA_2A_29A*/ #endif
/*CA_2A_29A*/
/*CA_2A_29A*/ #ifndef LTE_CACFG_CA_2A_29A_CC1_PDATA_PT3_H
/*CA_2A_29A*/ #define LTE_CACFG_CA_2A_29A_CC1_PDATA_PT3_H       LTE_PDATA_OFF
/*CA_2A_29A*/ #endif
/*CA_2A_29A*/
/*CA_2A_29A*/ #ifndef LTE_CACFG_CA_2A_29A_CC1_PDATA_PRANT_H
/*CA_2A_29A*/ #define LTE_CACFG_CA_2A_29A_CC1_PDATA_PRANT_H     LTE_PDATA_OFF
/*CA_2A_29A*/ #endif
/*CA_2A_29A*/
/*CA_2A_29A*/ #ifndef LTE_CACFG_CA_2A_29A_CC1_PDATA_PTANT_H
/*CA_2A_29A*/ #define LTE_CACFG_CA_2A_29A_CC1_PDATA_PTANT_H     LTE_PDATA_OFF
/*CA_2A_29A*/ #endif

/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

/*CA_2A_30A*/ #ifndef LTE_CACFG_CA_2A_30A_CC0_PDATA_PR1_H
/*CA_2A_30A*/ #define LTE_CACFG_CA_2A_30A_CC0_PDATA_PR1_H       LTE_PDATA_OFF
/*CA_2A_30A*/ #endif
/*CA_2A_30A*/
/*CA_2A_30A*/ #ifndef LTE_CACFG_CA_2A_30A_CC0_PDATA_PR2_H
/*CA_2A_30A*/ #define LTE_CACFG_CA_2A_30A_CC0_PDATA_PR2_H       LTE_PDATA_OFF
/*CA_2A_30A*/ #endif
/*CA_2A_30A*/
/*CA_2A_30A*/ #ifndef LTE_CACFG_CA_2A_30A_CC0_PDATA_PR3_H
/*CA_2A_30A*/ #define LTE_CACFG_CA_2A_30A_CC0_PDATA_PR3_H       LTE_PDATA_OFF
/*CA_2A_30A*/ #endif
/*CA_2A_30A*/
/*CA_2A_30A*/ #ifndef LTE_CACFG_CA_2A_30A_CC0_PDATA_PT1_H
/*CA_2A_30A*/ #define LTE_CACFG_CA_2A_30A_CC0_PDATA_PT1_H       LTE_PDATA_OFF
/*CA_2A_30A*/ #endif
/*CA_2A_30A*/
/*CA_2A_30A*/ #ifndef LTE_CACFG_CA_2A_30A_CC0_PDATA_PT2_H
/*CA_2A_30A*/ #define LTE_CACFG_CA_2A_30A_CC0_PDATA_PT2_H       LTE_PDATA_OFF
/*CA_2A_30A*/ #endif
/*CA_2A_30A*/
/*CA_2A_30A*/ #ifndef LTE_CACFG_CA_2A_30A_CC0_PDATA_PT3_H
/*CA_2A_30A*/ #define LTE_CACFG_CA_2A_30A_CC0_PDATA_PT3_H       LTE_PDATA_OFF
/*CA_2A_30A*/ #endif
/*CA_2A_30A*/
/*CA_2A_30A*/ #ifndef LTE_CACFG_CA_2A_30A_CC0_PDATA_PRANT_H
/*CA_2A_30A*/ #define LTE_CACFG_CA_2A_30A_CC0_PDATA_PRANT_H     LTE_PDATA_OFF
/*CA_2A_30A*/ #endif
/*CA_2A_30A*/
/*CA_2A_30A*/ #ifndef LTE_CACFG_CA_2A_30A_CC0_PDATA_PTANT_H
/*CA_2A_30A*/ #define LTE_CACFG_CA_2A_30A_CC0_PDATA_PTANT_H     LTE_PDATA_OFF
/*CA_2A_30A*/ #endif
/*CA_2A_30A*/
/*CA_2A_30A*/ #ifndef LTE_CACFG_CA_2A_30A_CC1_PDATA_PR1_H
/*CA_2A_30A*/ #define LTE_CACFG_CA_2A_30A_CC1_PDATA_PR1_H       LTE_PDATA_OFF
/*CA_2A_30A*/ #endif
/*CA_2A_30A*/
/*CA_2A_30A*/ #ifndef LTE_CACFG_CA_2A_30A_CC1_PDATA_PR2_H
/*CA_2A_30A*/ #define LTE_CACFG_CA_2A_30A_CC1_PDATA_PR2_H       LTE_PDATA_OFF
/*CA_2A_30A*/ #endif
/*CA_2A_30A*/
/*CA_2A_30A*/ #ifndef LTE_CACFG_CA_2A_30A_CC1_PDATA_PR3_H
/*CA_2A_30A*/ #define LTE_CACFG_CA_2A_30A_CC1_PDATA_PR3_H       LTE_PDATA_OFF
/*CA_2A_30A*/ #endif
/*CA_2A_30A*/
/*CA_2A_30A*/ #ifndef LTE_CACFG_CA_2A_30A_CC1_PDATA_PT1_H
/*CA_2A_30A*/ #define LTE_CACFG_CA_2A_30A_CC1_PDATA_PT1_H       LTE_PDATA_OFF
/*CA_2A_30A*/ #endif
/*CA_2A_30A*/
/*CA_2A_30A*/ #ifndef LTE_CACFG_CA_2A_30A_CC1_PDATA_PT2_H
/*CA_2A_30A*/ #define LTE_CACFG_CA_2A_30A_CC1_PDATA_PT2_H       LTE_PDATA_OFF
/*CA_2A_30A*/ #endif
/*CA_2A_30A*/
/*CA_2A_30A*/ #ifndef LTE_CACFG_CA_2A_30A_CC1_PDATA_PT3_H
/*CA_2A_30A*/ #define LTE_CACFG_CA_2A_30A_CC1_PDATA_PT3_H       LTE_PDATA_OFF
/*CA_2A_30A*/ #endif
/*CA_2A_30A*/
/*CA_2A_30A*/ #ifndef LTE_CACFG_CA_2A_30A_CC1_PDATA_PRANT_H
/*CA_2A_30A*/ #define LTE_CACFG_CA_2A_30A_CC1_PDATA_PRANT_H     LTE_PDATA_OFF
/*CA_2A_30A*/ #endif
/*CA_2A_30A*/
/*CA_2A_30A*/ #ifndef LTE_CACFG_CA_2A_30A_CC1_PDATA_PTANT_H
/*CA_2A_30A*/ #define LTE_CACFG_CA_2A_30A_CC1_PDATA_PTANT_H     LTE_PDATA_OFF
/*CA_2A_30A*/ #endif

/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

/*CA_3A_4A*/ #ifndef LTE_CACFG_CA_3A_4A_CC0_PDATA_PR1_H
/*CA_3A_4A*/ #define LTE_CACFG_CA_3A_4A_CC0_PDATA_PR1_H       LTE_PDATA_OFF
/*CA_3A_4A*/ #endif
/*CA_3A_4A*/
/*CA_3A_4A*/ #ifndef LTE_CACFG_CA_3A_4A_CC0_PDATA_PR2_H
/*CA_3A_4A*/ #define LTE_CACFG_CA_3A_4A_CC0_PDATA_PR2_H       LTE_PDATA_OFF
/*CA_3A_4A*/ #endif
/*CA_3A_4A*/
/*CA_3A_4A*/ #ifndef LTE_CACFG_CA_3A_4A_CC0_PDATA_PR3_H
/*CA_3A_4A*/ #define LTE_CACFG_CA_3A_4A_CC0_PDATA_PR3_H       LTE_PDATA_OFF
/*CA_3A_4A*/ #endif
/*CA_3A_4A*/
/*CA_3A_4A*/ #ifndef LTE_CACFG_CA_3A_4A_CC0_PDATA_PT1_H
/*CA_3A_4A*/ #define LTE_CACFG_CA_3A_4A_CC0_PDATA_PT1_H       LTE_PDATA_OFF
/*CA_3A_4A*/ #endif
/*CA_3A_4A*/
/*CA_3A_4A*/ #ifndef LTE_CACFG_CA_3A_4A_CC0_PDATA_PT2_H
/*CA_3A_4A*/ #define LTE_CACFG_CA_3A_4A_CC0_PDATA_PT2_H       LTE_PDATA_OFF
/*CA_3A_4A*/ #endif
/*CA_3A_4A*/
/*CA_3A_4A*/ #ifndef LTE_CACFG_CA_3A_4A_CC0_PDATA_PT3_H
/*CA_3A_4A*/ #define LTE_CACFG_CA_3A_4A_CC0_PDATA_PT3_H       LTE_PDATA_OFF
/*CA_3A_4A*/ #endif
/*CA_3A_4A*/
/*CA_3A_4A*/ #ifndef LTE_CACFG_CA_3A_4A_CC0_PDATA_PRANT_H
/*CA_3A_4A*/ #define LTE_CACFG_CA_3A_4A_CC0_PDATA_PRANT_H     LTE_PDATA_OFF
/*CA_3A_4A*/ #endif
/*CA_3A_4A*/
/*CA_3A_4A*/ #ifndef LTE_CACFG_CA_3A_4A_CC0_PDATA_PTANT_H
/*CA_3A_4A*/ #define LTE_CACFG_CA_3A_4A_CC0_PDATA_PTANT_H     LTE_PDATA_OFF
/*CA_3A_4A*/ #endif
/*CA_3A_4A*/
/*CA_3A_4A*/ #ifndef LTE_CACFG_CA_3A_4A_CC1_PDATA_PR1_H
/*CA_3A_4A*/ #define LTE_CACFG_CA_3A_4A_CC1_PDATA_PR1_H       LTE_PDATA_OFF
/*CA_3A_4A*/ #endif
/*CA_3A_4A*/
/*CA_3A_4A*/ #ifndef LTE_CACFG_CA_3A_4A_CC1_PDATA_PR2_H
/*CA_3A_4A*/ #define LTE_CACFG_CA_3A_4A_CC1_PDATA_PR2_H       LTE_PDATA_OFF
/*CA_3A_4A*/ #endif
/*CA_3A_4A*/
/*CA_3A_4A*/ #ifndef LTE_CACFG_CA_3A_4A_CC1_PDATA_PR3_H
/*CA_3A_4A*/ #define LTE_CACFG_CA_3A_4A_CC1_PDATA_PR3_H       LTE_PDATA_OFF
/*CA_3A_4A*/ #endif
/*CA_3A_4A*/
/*CA_3A_4A*/ #ifndef LTE_CACFG_CA_3A_4A_CC1_PDATA_PT1_H
/*CA_3A_4A*/ #define LTE_CACFG_CA_3A_4A_CC1_PDATA_PT1_H       LTE_PDATA_OFF
/*CA_3A_4A*/ #endif
/*CA_3A_4A*/
/*CA_3A_4A*/ #ifndef LTE_CACFG_CA_3A_4A_CC1_PDATA_PT2_H
/*CA_3A_4A*/ #define LTE_CACFG_CA_3A_4A_CC1_PDATA_PT2_H       LTE_PDATA_OFF
/*CA_3A_4A*/ #endif
/*CA_3A_4A*/
/*CA_3A_4A*/ #ifndef LTE_CACFG_CA_3A_4A_CC1_PDATA_PT3_H
/*CA_3A_4A*/ #define LTE_CACFG_CA_3A_4A_CC1_PDATA_PT3_H       LTE_PDATA_OFF
/*CA_3A_4A*/ #endif
/*CA_3A_4A*/
/*CA_3A_4A*/ #ifndef LTE_CACFG_CA_3A_4A_CC1_PDATA_PRANT_H
/*CA_3A_4A*/ #define LTE_CACFG_CA_3A_4A_CC1_PDATA_PRANT_H     LTE_PDATA_OFF
/*CA_3A_4A*/ #endif
/*CA_3A_4A*/
/*CA_3A_4A*/ #ifndef LTE_CACFG_CA_3A_4A_CC1_PDATA_PTANT_H
/*CA_3A_4A*/ #define LTE_CACFG_CA_3A_4A_CC1_PDATA_PTANT_H     LTE_PDATA_OFF
/*CA_3A_4A*/ #endif

/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

/*CA_3A_5A*/ #ifndef LTE_CACFG_CA_3A_5A_CC0_PDATA_PR1_H
/*CA_3A_5A*/ #define LTE_CACFG_CA_3A_5A_CC0_PDATA_PR1_H       LTE_PDATA_OFF
/*CA_3A_5A*/ #endif
/*CA_3A_5A*/
/*CA_3A_5A*/ #ifndef LTE_CACFG_CA_3A_5A_CC0_PDATA_PR2_H
/*CA_3A_5A*/ #define LTE_CACFG_CA_3A_5A_CC0_PDATA_PR2_H       LTE_PDATA_OFF
/*CA_3A_5A*/ #endif
/*CA_3A_5A*/
/*CA_3A_5A*/ #ifndef LTE_CACFG_CA_3A_5A_CC0_PDATA_PR3_H
/*CA_3A_5A*/ #define LTE_CACFG_CA_3A_5A_CC0_PDATA_PR3_H       LTE_PDATA_OFF
/*CA_3A_5A*/ #endif
/*CA_3A_5A*/
/*CA_3A_5A*/ #ifndef LTE_CACFG_CA_3A_5A_CC0_PDATA_PT1_H
/*CA_3A_5A*/ #define LTE_CACFG_CA_3A_5A_CC0_PDATA_PT1_H       LTE_PDATA_OFF
/*CA_3A_5A*/ #endif
/*CA_3A_5A*/
/*CA_3A_5A*/ #ifndef LTE_CACFG_CA_3A_5A_CC0_PDATA_PT2_H
/*CA_3A_5A*/ #define LTE_CACFG_CA_3A_5A_CC0_PDATA_PT2_H       LTE_PDATA_OFF
/*CA_3A_5A*/ #endif
/*CA_3A_5A*/
/*CA_3A_5A*/ #ifndef LTE_CACFG_CA_3A_5A_CC0_PDATA_PT3_H
/*CA_3A_5A*/ #define LTE_CACFG_CA_3A_5A_CC0_PDATA_PT3_H       LTE_PDATA_OFF
/*CA_3A_5A*/ #endif
/*CA_3A_5A*/
/*CA_3A_5A*/ #ifndef LTE_CACFG_CA_3A_5A_CC0_PDATA_PRANT_H
/*CA_3A_5A*/ #define LTE_CACFG_CA_3A_5A_CC0_PDATA_PRANT_H     LTE_PDATA_OFF
/*CA_3A_5A*/ #endif
/*CA_3A_5A*/
/*CA_3A_5A*/ #ifndef LTE_CACFG_CA_3A_5A_CC0_PDATA_PTANT_H
/*CA_3A_5A*/ #define LTE_CACFG_CA_3A_5A_CC0_PDATA_PTANT_H     LTE_PDATA_OFF
/*CA_3A_5A*/ #endif
/*CA_3A_5A*/
/*CA_3A_5A*/ #ifndef LTE_CACFG_CA_3A_5A_CC1_PDATA_PR1_H
/*CA_3A_5A*/ #define LTE_CACFG_CA_3A_5A_CC1_PDATA_PR1_H       LTE_PDATA_OFF
/*CA_3A_5A*/ #endif
/*CA_3A_5A*/
/*CA_3A_5A*/ #ifndef LTE_CACFG_CA_3A_5A_CC1_PDATA_PR2_H
/*CA_3A_5A*/ #define LTE_CACFG_CA_3A_5A_CC1_PDATA_PR2_H       LTE_PDATA_OFF
/*CA_3A_5A*/ #endif
/*CA_3A_5A*/
/*CA_3A_5A*/ #ifndef LTE_CACFG_CA_3A_5A_CC1_PDATA_PR3_H
/*CA_3A_5A*/ #define LTE_CACFG_CA_3A_5A_CC1_PDATA_PR3_H       LTE_PDATA_OFF
/*CA_3A_5A*/ #endif
/*CA_3A_5A*/
/*CA_3A_5A*/ #ifndef LTE_CACFG_CA_3A_5A_CC1_PDATA_PT1_H
/*CA_3A_5A*/ #define LTE_CACFG_CA_3A_5A_CC1_PDATA_PT1_H       LTE_PDATA_OFF
/*CA_3A_5A*/ #endif
/*CA_3A_5A*/
/*CA_3A_5A*/ #ifndef LTE_CACFG_CA_3A_5A_CC1_PDATA_PT2_H
/*CA_3A_5A*/ #define LTE_CACFG_CA_3A_5A_CC1_PDATA_PT2_H       LTE_PDATA_OFF
/*CA_3A_5A*/ #endif
/*CA_3A_5A*/
/*CA_3A_5A*/ #ifndef LTE_CACFG_CA_3A_5A_CC1_PDATA_PT3_H
/*CA_3A_5A*/ #define LTE_CACFG_CA_3A_5A_CC1_PDATA_PT3_H       LTE_PDATA_OFF
/*CA_3A_5A*/ #endif
/*CA_3A_5A*/
/*CA_3A_5A*/ #ifndef LTE_CACFG_CA_3A_5A_CC1_PDATA_PRANT_H
/*CA_3A_5A*/ #define LTE_CACFG_CA_3A_5A_CC1_PDATA_PRANT_H     LTE_PDATA_OFF
/*CA_3A_5A*/ #endif
/*CA_3A_5A*/
/*CA_3A_5A*/ #ifndef LTE_CACFG_CA_3A_5A_CC1_PDATA_PTANT_H
/*CA_3A_5A*/ #define LTE_CACFG_CA_3A_5A_CC1_PDATA_PTANT_H     LTE_PDATA_OFF
/*CA_3A_5A*/ #endif

/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

/*CA_3A_7A*/ #ifndef LTE_CACFG_CA_3A_7A_CC0_PDATA_PR1_H
/*CA_3A_7A*/ #define LTE_CACFG_CA_3A_7A_CC0_PDATA_PR1_H       LTE_PDATA_OFF
/*CA_3A_7A*/ #endif
/*CA_3A_7A*/
/*CA_3A_7A*/ #ifndef LTE_CACFG_CA_3A_7A_CC0_PDATA_PR2_H
/*CA_3A_7A*/ #define LTE_CACFG_CA_3A_7A_CC0_PDATA_PR2_H       LTE_PDATA_OFF
/*CA_3A_7A*/ #endif
/*CA_3A_7A*/
/*CA_3A_7A*/ #ifndef LTE_CACFG_CA_3A_7A_CC0_PDATA_PR3_H
/*CA_3A_7A*/ #define LTE_CACFG_CA_3A_7A_CC0_PDATA_PR3_H       LTE_PDATA_OFF
/*CA_3A_7A*/ #endif
/*CA_3A_7A*/
/*CA_3A_7A*/ #ifndef LTE_CACFG_CA_3A_7A_CC0_PDATA_PT1_H
/*CA_3A_7A*/ #define LTE_CACFG_CA_3A_7A_CC0_PDATA_PT1_H       LTE_PDATA_OFF
/*CA_3A_7A*/ #endif
/*CA_3A_7A*/
/*CA_3A_7A*/ #ifndef LTE_CACFG_CA_3A_7A_CC0_PDATA_PT2_H
/*CA_3A_7A*/ #define LTE_CACFG_CA_3A_7A_CC0_PDATA_PT2_H       LTE_PDATA_OFF
/*CA_3A_7A*/ #endif
/*CA_3A_7A*/
/*CA_3A_7A*/ #ifndef LTE_CACFG_CA_3A_7A_CC0_PDATA_PT3_H
/*CA_3A_7A*/ #define LTE_CACFG_CA_3A_7A_CC0_PDATA_PT3_H       LTE_PDATA_OFF
/*CA_3A_7A*/ #endif
/*CA_3A_7A*/
/*CA_3A_7A*/ #ifndef LTE_CACFG_CA_3A_7A_CC0_PDATA_PRANT_H
/*CA_3A_7A*/ #define LTE_CACFG_CA_3A_7A_CC0_PDATA_PRANT_H     LTE_PDATA_OFF
/*CA_3A_7A*/ #endif
/*CA_3A_7A*/
/*CA_3A_7A*/ #ifndef LTE_CACFG_CA_3A_7A_CC0_PDATA_PTANT_H
/*CA_3A_7A*/ #define LTE_CACFG_CA_3A_7A_CC0_PDATA_PTANT_H     LTE_PDATA_OFF
/*CA_3A_7A*/ #endif
/*CA_3A_7A*/
/*CA_3A_7A*/ #ifndef LTE_CACFG_CA_3A_7A_CC1_PDATA_PR1_H
/*CA_3A_7A*/ #define LTE_CACFG_CA_3A_7A_CC1_PDATA_PR1_H       LTE_PDATA_OFF
/*CA_3A_7A*/ #endif
/*CA_3A_7A*/
/*CA_3A_7A*/ #ifndef LTE_CACFG_CA_3A_7A_CC1_PDATA_PR2_H
/*CA_3A_7A*/ #define LTE_CACFG_CA_3A_7A_CC1_PDATA_PR2_H       LTE_PDATA_OFF
/*CA_3A_7A*/ #endif
/*CA_3A_7A*/
/*CA_3A_7A*/ #ifndef LTE_CACFG_CA_3A_7A_CC1_PDATA_PR3_H
/*CA_3A_7A*/ #define LTE_CACFG_CA_3A_7A_CC1_PDATA_PR3_H       LTE_PDATA_OFF
/*CA_3A_7A*/ #endif
/*CA_3A_7A*/
/*CA_3A_7A*/ #ifndef LTE_CACFG_CA_3A_7A_CC1_PDATA_PT1_H
/*CA_3A_7A*/ #define LTE_CACFG_CA_3A_7A_CC1_PDATA_PT1_H       LTE_PDATA_OFF
/*CA_3A_7A*/ #endif
/*CA_3A_7A*/
/*CA_3A_7A*/ #ifndef LTE_CACFG_CA_3A_7A_CC1_PDATA_PT2_H
/*CA_3A_7A*/ #define LTE_CACFG_CA_3A_7A_CC1_PDATA_PT2_H       LTE_PDATA_OFF
/*CA_3A_7A*/ #endif
/*CA_3A_7A*/
/*CA_3A_7A*/ #ifndef LTE_CACFG_CA_3A_7A_CC1_PDATA_PT3_H
/*CA_3A_7A*/ #define LTE_CACFG_CA_3A_7A_CC1_PDATA_PT3_H       LTE_PDATA_OFF
/*CA_3A_7A*/ #endif
/*CA_3A_7A*/
/*CA_3A_7A*/ #ifndef LTE_CACFG_CA_3A_7A_CC1_PDATA_PRANT_H
/*CA_3A_7A*/ #define LTE_CACFG_CA_3A_7A_CC1_PDATA_PRANT_H     LTE_PDATA_OFF
/*CA_3A_7A*/ #endif
/*CA_3A_7A*/
/*CA_3A_7A*/ #ifndef LTE_CACFG_CA_3A_7A_CC1_PDATA_PTANT_H
/*CA_3A_7A*/ #define LTE_CACFG_CA_3A_7A_CC1_PDATA_PTANT_H     LTE_PDATA_OFF
/*CA_3A_7A*/ #endif

/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

/*CA_3A_8A*/ #ifndef LTE_CACFG_CA_3A_8A_CC0_PDATA_PR1_H
/*CA_3A_8A*/ #define LTE_CACFG_CA_3A_8A_CC0_PDATA_PR1_H       LTE_PDATA_OFF
/*CA_3A_8A*/ #endif
/*CA_3A_8A*/
/*CA_3A_8A*/ #ifndef LTE_CACFG_CA_3A_8A_CC0_PDATA_PR2_H
/*CA_3A_8A*/ #define LTE_CACFG_CA_3A_8A_CC0_PDATA_PR2_H       LTE_PDATA_OFF
/*CA_3A_8A*/ #endif
/*CA_3A_8A*/
/*CA_3A_8A*/ #ifndef LTE_CACFG_CA_3A_8A_CC0_PDATA_PR3_H
/*CA_3A_8A*/ #define LTE_CACFG_CA_3A_8A_CC0_PDATA_PR3_H       LTE_PDATA_OFF
/*CA_3A_8A*/ #endif
/*CA_3A_8A*/
/*CA_3A_8A*/ #ifndef LTE_CACFG_CA_3A_8A_CC0_PDATA_PT1_H
/*CA_3A_8A*/ #define LTE_CACFG_CA_3A_8A_CC0_PDATA_PT1_H       LTE_PDATA_OFF
/*CA_3A_8A*/ #endif
/*CA_3A_8A*/
/*CA_3A_8A*/ #ifndef LTE_CACFG_CA_3A_8A_CC0_PDATA_PT2_H
/*CA_3A_8A*/ #define LTE_CACFG_CA_3A_8A_CC0_PDATA_PT2_H       LTE_PDATA_OFF
/*CA_3A_8A*/ #endif
/*CA_3A_8A*/
/*CA_3A_8A*/ #ifndef LTE_CACFG_CA_3A_8A_CC0_PDATA_PT3_H
/*CA_3A_8A*/ #define LTE_CACFG_CA_3A_8A_CC0_PDATA_PT3_H       LTE_PDATA_OFF
/*CA_3A_8A*/ #endif
/*CA_3A_8A*/
/*CA_3A_8A*/ #ifndef LTE_CACFG_CA_3A_8A_CC0_PDATA_PRANT_H
/*CA_3A_8A*/ #define LTE_CACFG_CA_3A_8A_CC0_PDATA_PRANT_H     LTE_PDATA_OFF
/*CA_3A_8A*/ #endif
/*CA_3A_8A*/
/*CA_3A_8A*/ #ifndef LTE_CACFG_CA_3A_8A_CC0_PDATA_PTANT_H
/*CA_3A_8A*/ #define LTE_CACFG_CA_3A_8A_CC0_PDATA_PTANT_H     LTE_PDATA_OFF
/*CA_3A_8A*/ #endif
/*CA_3A_8A*/
/*CA_3A_8A*/ #ifndef LTE_CACFG_CA_3A_8A_CC1_PDATA_PR1_H
/*CA_3A_8A*/ #define LTE_CACFG_CA_3A_8A_CC1_PDATA_PR1_H       LTE_PDATA_OFF
/*CA_3A_8A*/ #endif
/*CA_3A_8A*/
/*CA_3A_8A*/ #ifndef LTE_CACFG_CA_3A_8A_CC1_PDATA_PR2_H
/*CA_3A_8A*/ #define LTE_CACFG_CA_3A_8A_CC1_PDATA_PR2_H       LTE_PDATA_OFF
/*CA_3A_8A*/ #endif
/*CA_3A_8A*/
/*CA_3A_8A*/ #ifndef LTE_CACFG_CA_3A_8A_CC1_PDATA_PR3_H
/*CA_3A_8A*/ #define LTE_CACFG_CA_3A_8A_CC1_PDATA_PR3_H       LTE_PDATA_OFF
/*CA_3A_8A*/ #endif
/*CA_3A_8A*/
/*CA_3A_8A*/ #ifndef LTE_CACFG_CA_3A_8A_CC1_PDATA_PT1_H
/*CA_3A_8A*/ #define LTE_CACFG_CA_3A_8A_CC1_PDATA_PT1_H       LTE_PDATA_OFF
/*CA_3A_8A*/ #endif
/*CA_3A_8A*/
/*CA_3A_8A*/ #ifndef LTE_CACFG_CA_3A_8A_CC1_PDATA_PT2_H
/*CA_3A_8A*/ #define LTE_CACFG_CA_3A_8A_CC1_PDATA_PT2_H       LTE_PDATA_OFF
/*CA_3A_8A*/ #endif
/*CA_3A_8A*/
/*CA_3A_8A*/ #ifndef LTE_CACFG_CA_3A_8A_CC1_PDATA_PT3_H
/*CA_3A_8A*/ #define LTE_CACFG_CA_3A_8A_CC1_PDATA_PT3_H       LTE_PDATA_OFF
/*CA_3A_8A*/ #endif
/*CA_3A_8A*/
/*CA_3A_8A*/ #ifndef LTE_CACFG_CA_3A_8A_CC1_PDATA_PRANT_H
/*CA_3A_8A*/ #define LTE_CACFG_CA_3A_8A_CC1_PDATA_PRANT_H     LTE_PDATA_OFF
/*CA_3A_8A*/ #endif
/*CA_3A_8A*/
/*CA_3A_8A*/ #ifndef LTE_CACFG_CA_3A_8A_CC1_PDATA_PTANT_H
/*CA_3A_8A*/ #define LTE_CACFG_CA_3A_8A_CC1_PDATA_PTANT_H     LTE_PDATA_OFF
/*CA_3A_8A*/ #endif

/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

/*CA_3A_19A*/ #ifndef LTE_CACFG_CA_3A_19A_CC0_PDATA_PR1_H
/*CA_3A_19A*/ #define LTE_CACFG_CA_3A_19A_CC0_PDATA_PR1_H       LTE_PDATA_OFF
/*CA_3A_19A*/ #endif
/*CA_3A_19A*/
/*CA_3A_19A*/ #ifndef LTE_CACFG_CA_3A_19A_CC0_PDATA_PR2_H
/*CA_3A_19A*/ #define LTE_CACFG_CA_3A_19A_CC0_PDATA_PR2_H       LTE_PDATA_OFF
/*CA_3A_19A*/ #endif
/*CA_3A_19A*/
/*CA_3A_19A*/ #ifndef LTE_CACFG_CA_3A_19A_CC0_PDATA_PR3_H
/*CA_3A_19A*/ #define LTE_CACFG_CA_3A_19A_CC0_PDATA_PR3_H       LTE_PDATA_OFF
/*CA_3A_19A*/ #endif
/*CA_3A_19A*/
/*CA_3A_19A*/ #ifndef LTE_CACFG_CA_3A_19A_CC0_PDATA_PT1_H
/*CA_3A_19A*/ #define LTE_CACFG_CA_3A_19A_CC0_PDATA_PT1_H       LTE_PDATA_OFF
/*CA_3A_19A*/ #endif
/*CA_3A_19A*/
/*CA_3A_19A*/ #ifndef LTE_CACFG_CA_3A_19A_CC0_PDATA_PT2_H
/*CA_3A_19A*/ #define LTE_CACFG_CA_3A_19A_CC0_PDATA_PT2_H       LTE_PDATA_OFF
/*CA_3A_19A*/ #endif
/*CA_3A_19A*/
/*CA_3A_19A*/ #ifndef LTE_CACFG_CA_3A_19A_CC0_PDATA_PT3_H
/*CA_3A_19A*/ #define LTE_CACFG_CA_3A_19A_CC0_PDATA_PT3_H       LTE_PDATA_OFF
/*CA_3A_19A*/ #endif
/*CA_3A_19A*/
/*CA_3A_19A*/ #ifndef LTE_CACFG_CA_3A_19A_CC0_PDATA_PRANT_H
/*CA_3A_19A*/ #define LTE_CACFG_CA_3A_19A_CC0_PDATA_PRANT_H     LTE_PDATA_OFF
/*CA_3A_19A*/ #endif
/*CA_3A_19A*/
/*CA_3A_19A*/ #ifndef LTE_CACFG_CA_3A_19A_CC0_PDATA_PTANT_H
/*CA_3A_19A*/ #define LTE_CACFG_CA_3A_19A_CC0_PDATA_PTANT_H     LTE_PDATA_OFF
/*CA_3A_19A*/ #endif
/*CA_3A_19A*/
/*CA_3A_19A*/ #ifndef LTE_CACFG_CA_3A_19A_CC1_PDATA_PR1_H
/*CA_3A_19A*/ #define LTE_CACFG_CA_3A_19A_CC1_PDATA_PR1_H       LTE_PDATA_OFF
/*CA_3A_19A*/ #endif
/*CA_3A_19A*/
/*CA_3A_19A*/ #ifndef LTE_CACFG_CA_3A_19A_CC1_PDATA_PR2_H
/*CA_3A_19A*/ #define LTE_CACFG_CA_3A_19A_CC1_PDATA_PR2_H       LTE_PDATA_OFF
/*CA_3A_19A*/ #endif
/*CA_3A_19A*/
/*CA_3A_19A*/ #ifndef LTE_CACFG_CA_3A_19A_CC1_PDATA_PR3_H
/*CA_3A_19A*/ #define LTE_CACFG_CA_3A_19A_CC1_PDATA_PR3_H       LTE_PDATA_OFF
/*CA_3A_19A*/ #endif
/*CA_3A_19A*/
/*CA_3A_19A*/ #ifndef LTE_CACFG_CA_3A_19A_CC1_PDATA_PT1_H
/*CA_3A_19A*/ #define LTE_CACFG_CA_3A_19A_CC1_PDATA_PT1_H       LTE_PDATA_OFF
/*CA_3A_19A*/ #endif
/*CA_3A_19A*/
/*CA_3A_19A*/ #ifndef LTE_CACFG_CA_3A_19A_CC1_PDATA_PT2_H
/*CA_3A_19A*/ #define LTE_CACFG_CA_3A_19A_CC1_PDATA_PT2_H       LTE_PDATA_OFF
/*CA_3A_19A*/ #endif
/*CA_3A_19A*/
/*CA_3A_19A*/ #ifndef LTE_CACFG_CA_3A_19A_CC1_PDATA_PT3_H
/*CA_3A_19A*/ #define LTE_CACFG_CA_3A_19A_CC1_PDATA_PT3_H       LTE_PDATA_OFF
/*CA_3A_19A*/ #endif
/*CA_3A_19A*/
/*CA_3A_19A*/ #ifndef LTE_CACFG_CA_3A_19A_CC1_PDATA_PRANT_H
/*CA_3A_19A*/ #define LTE_CACFG_CA_3A_19A_CC1_PDATA_PRANT_H     LTE_PDATA_OFF
/*CA_3A_19A*/ #endif
/*CA_3A_19A*/
/*CA_3A_19A*/ #ifndef LTE_CACFG_CA_3A_19A_CC1_PDATA_PTANT_H
/*CA_3A_19A*/ #define LTE_CACFG_CA_3A_19A_CC1_PDATA_PTANT_H     LTE_PDATA_OFF
/*CA_3A_19A*/ #endif

/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

/*CA_3A_20A*/ #ifndef LTE_CACFG_CA_3A_20A_CC0_PDATA_PR1_H
/*CA_3A_20A*/ #define LTE_CACFG_CA_3A_20A_CC0_PDATA_PR1_H       LTE_PDATA_OFF
/*CA_3A_20A*/ #endif
/*CA_3A_20A*/
/*CA_3A_20A*/ #ifndef LTE_CACFG_CA_3A_20A_CC0_PDATA_PR2_H
/*CA_3A_20A*/ #define LTE_CACFG_CA_3A_20A_CC0_PDATA_PR2_H       LTE_PDATA_OFF
/*CA_3A_20A*/ #endif
/*CA_3A_20A*/
/*CA_3A_20A*/ #ifndef LTE_CACFG_CA_3A_20A_CC0_PDATA_PR3_H
/*CA_3A_20A*/ #define LTE_CACFG_CA_3A_20A_CC0_PDATA_PR3_H       LTE_PDATA_OFF
/*CA_3A_20A*/ #endif
/*CA_3A_20A*/
/*CA_3A_20A*/ #ifndef LTE_CACFG_CA_3A_20A_CC0_PDATA_PT1_H
/*CA_3A_20A*/ #define LTE_CACFG_CA_3A_20A_CC0_PDATA_PT1_H       LTE_PDATA_OFF
/*CA_3A_20A*/ #endif
/*CA_3A_20A*/
/*CA_3A_20A*/ #ifndef LTE_CACFG_CA_3A_20A_CC0_PDATA_PT2_H
/*CA_3A_20A*/ #define LTE_CACFG_CA_3A_20A_CC0_PDATA_PT2_H       LTE_PDATA_OFF
/*CA_3A_20A*/ #endif
/*CA_3A_20A*/
/*CA_3A_20A*/ #ifndef LTE_CACFG_CA_3A_20A_CC0_PDATA_PT3_H
/*CA_3A_20A*/ #define LTE_CACFG_CA_3A_20A_CC0_PDATA_PT3_H       LTE_PDATA_OFF
/*CA_3A_20A*/ #endif
/*CA_3A_20A*/
/*CA_3A_20A*/ #ifndef LTE_CACFG_CA_3A_20A_CC0_PDATA_PRANT_H
/*CA_3A_20A*/ #define LTE_CACFG_CA_3A_20A_CC0_PDATA_PRANT_H     LTE_PDATA_OFF
/*CA_3A_20A*/ #endif
/*CA_3A_20A*/
/*CA_3A_20A*/ #ifndef LTE_CACFG_CA_3A_20A_CC0_PDATA_PTANT_H
/*CA_3A_20A*/ #define LTE_CACFG_CA_3A_20A_CC0_PDATA_PTANT_H     LTE_PDATA_OFF
/*CA_3A_20A*/ #endif
/*CA_3A_20A*/
/*CA_3A_20A*/ #ifndef LTE_CACFG_CA_3A_20A_CC1_PDATA_PR1_H
/*CA_3A_20A*/ #define LTE_CACFG_CA_3A_20A_CC1_PDATA_PR1_H       LTE_PDATA_OFF
/*CA_3A_20A*/ #endif
/*CA_3A_20A*/
/*CA_3A_20A*/ #ifndef LTE_CACFG_CA_3A_20A_CC1_PDATA_PR2_H
/*CA_3A_20A*/ #define LTE_CACFG_CA_3A_20A_CC1_PDATA_PR2_H       LTE_PDATA_OFF
/*CA_3A_20A*/ #endif
/*CA_3A_20A*/
/*CA_3A_20A*/ #ifndef LTE_CACFG_CA_3A_20A_CC1_PDATA_PR3_H
/*CA_3A_20A*/ #define LTE_CACFG_CA_3A_20A_CC1_PDATA_PR3_H       LTE_PDATA_OFF
/*CA_3A_20A*/ #endif
/*CA_3A_20A*/
/*CA_3A_20A*/ #ifndef LTE_CACFG_CA_3A_20A_CC1_PDATA_PT1_H
/*CA_3A_20A*/ #define LTE_CACFG_CA_3A_20A_CC1_PDATA_PT1_H       LTE_PDATA_OFF
/*CA_3A_20A*/ #endif
/*CA_3A_20A*/
/*CA_3A_20A*/ #ifndef LTE_CACFG_CA_3A_20A_CC1_PDATA_PT2_H
/*CA_3A_20A*/ #define LTE_CACFG_CA_3A_20A_CC1_PDATA_PT2_H       LTE_PDATA_OFF
/*CA_3A_20A*/ #endif
/*CA_3A_20A*/
/*CA_3A_20A*/ #ifndef LTE_CACFG_CA_3A_20A_CC1_PDATA_PT3_H
/*CA_3A_20A*/ #define LTE_CACFG_CA_3A_20A_CC1_PDATA_PT3_H       LTE_PDATA_OFF
/*CA_3A_20A*/ #endif
/*CA_3A_20A*/
/*CA_3A_20A*/ #ifndef LTE_CACFG_CA_3A_20A_CC1_PDATA_PRANT_H
/*CA_3A_20A*/ #define LTE_CACFG_CA_3A_20A_CC1_PDATA_PRANT_H     LTE_PDATA_OFF
/*CA_3A_20A*/ #endif
/*CA_3A_20A*/
/*CA_3A_20A*/ #ifndef LTE_CACFG_CA_3A_20A_CC1_PDATA_PTANT_H
/*CA_3A_20A*/ #define LTE_CACFG_CA_3A_20A_CC1_PDATA_PTANT_H     LTE_PDATA_OFF
/*CA_3A_20A*/ #endif

/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

/*CA_3A_26A*/ #ifndef LTE_CACFG_CA_3A_26A_CC0_PDATA_PR1_H
/*CA_3A_26A*/ #define LTE_CACFG_CA_3A_26A_CC0_PDATA_PR1_H       LTE_PDATA_OFF
/*CA_3A_26A*/ #endif
/*CA_3A_26A*/
/*CA_3A_26A*/ #ifndef LTE_CACFG_CA_3A_26A_CC0_PDATA_PR2_H
/*CA_3A_26A*/ #define LTE_CACFG_CA_3A_26A_CC0_PDATA_PR2_H       LTE_PDATA_OFF
/*CA_3A_26A*/ #endif
/*CA_3A_26A*/
/*CA_3A_26A*/ #ifndef LTE_CACFG_CA_3A_26A_CC0_PDATA_PR3_H
/*CA_3A_26A*/ #define LTE_CACFG_CA_3A_26A_CC0_PDATA_PR3_H       LTE_PDATA_OFF
/*CA_3A_26A*/ #endif
/*CA_3A_26A*/
/*CA_3A_26A*/ #ifndef LTE_CACFG_CA_3A_26A_CC0_PDATA_PT1_H
/*CA_3A_26A*/ #define LTE_CACFG_CA_3A_26A_CC0_PDATA_PT1_H       LTE_PDATA_OFF
/*CA_3A_26A*/ #endif
/*CA_3A_26A*/
/*CA_3A_26A*/ #ifndef LTE_CACFG_CA_3A_26A_CC0_PDATA_PT2_H
/*CA_3A_26A*/ #define LTE_CACFG_CA_3A_26A_CC0_PDATA_PT2_H       LTE_PDATA_OFF
/*CA_3A_26A*/ #endif
/*CA_3A_26A*/
/*CA_3A_26A*/ #ifndef LTE_CACFG_CA_3A_26A_CC0_PDATA_PT3_H
/*CA_3A_26A*/ #define LTE_CACFG_CA_3A_26A_CC0_PDATA_PT3_H       LTE_PDATA_OFF
/*CA_3A_26A*/ #endif
/*CA_3A_26A*/
/*CA_3A_26A*/ #ifndef LTE_CACFG_CA_3A_26A_CC1_PDATA_PR1_H
/*CA_3A_26A*/ #define LTE_CACFG_CA_3A_26A_CC1_PDATA_PR1_H       LTE_PDATA_OFF
/*CA_3A_26A*/ #endif
/*CA_3A_26A*/
/*CA_3A_26A*/ #ifndef LTE_CACFG_CA_3A_26A_CC0_PDATA_PRANT_H
/*CA_3A_26A*/ #define LTE_CACFG_CA_3A_26A_CC0_PDATA_PRANT_H     LTE_PDATA_OFF
/*CA_3A_26A*/ #endif
/*CA_3A_26A*/
/*CA_3A_26A*/ #ifndef LTE_CACFG_CA_3A_26A_CC0_PDATA_PTANT_H
/*CA_3A_26A*/ #define LTE_CACFG_CA_3A_26A_CC0_PDATA_PTANT_H     LTE_PDATA_OFF
/*CA_3A_26A*/ #endif
/*CA_3A_26A*/
/*CA_3A_26A*/ #ifndef LTE_CACFG_CA_3A_26A_CC1_PDATA_PR2_H
/*CA_3A_26A*/ #define LTE_CACFG_CA_3A_26A_CC1_PDATA_PR2_H       LTE_PDATA_OFF
/*CA_3A_26A*/ #endif
/*CA_3A_26A*/
/*CA_3A_26A*/ #ifndef LTE_CACFG_CA_3A_26A_CC1_PDATA_PR3_H
/*CA_3A_26A*/ #define LTE_CACFG_CA_3A_26A_CC1_PDATA_PR3_H       LTE_PDATA_OFF
/*CA_3A_26A*/ #endif
/*CA_3A_26A*/
/*CA_3A_26A*/ #ifndef LTE_CACFG_CA_3A_26A_CC1_PDATA_PT1_H
/*CA_3A_26A*/ #define LTE_CACFG_CA_3A_26A_CC1_PDATA_PT1_H       LTE_PDATA_OFF
/*CA_3A_26A*/ #endif
/*CA_3A_26A*/
/*CA_3A_26A*/ #ifndef LTE_CACFG_CA_3A_26A_CC1_PDATA_PT2_H
/*CA_3A_26A*/ #define LTE_CACFG_CA_3A_26A_CC1_PDATA_PT2_H       LTE_PDATA_OFF
/*CA_3A_26A*/ #endif
/*CA_3A_26A*/
/*CA_3A_26A*/ #ifndef LTE_CACFG_CA_3A_26A_CC1_PDATA_PT3_H
/*CA_3A_26A*/ #define LTE_CACFG_CA_3A_26A_CC1_PDATA_PT3_H       LTE_PDATA_OFF
/*CA_3A_26A*/ #endif
/*CA_3A_26A*/
/*CA_3A_26A*/ #ifndef LTE_CACFG_CA_3A_26A_CC1_PDATA_PRANT_H
/*CA_3A_26A*/ #define LTE_CACFG_CA_3A_26A_CC1_PDATA_PRANT_H     LTE_PDATA_OFF
/*CA_3A_26A*/ #endif
/*CA_3A_26A*/
/*CA_3A_26A*/ #ifndef LTE_CACFG_CA_3A_26A_CC1_PDATA_PTANT_H
/*CA_3A_26A*/ #define LTE_CACFG_CA_3A_26A_CC1_PDATA_PTANT_H     LTE_PDATA_OFF
/*CA_3A_26A*/ #endif

/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

/*CA_3A_27A*/ #ifndef LTE_CACFG_CA_3A_27A_CC0_PDATA_PR1_H
/*CA_3A_27A*/ #define LTE_CACFG_CA_3A_27A_CC0_PDATA_PR1_H       LTE_PDATA_OFF
/*CA_3A_27A*/ #endif
/*CA_3A_27A*/
/*CA_3A_27A*/ #ifndef LTE_CACFG_CA_3A_27A_CC0_PDATA_PR2_H
/*CA_3A_27A*/ #define LTE_CACFG_CA_3A_27A_CC0_PDATA_PR2_H       LTE_PDATA_OFF
/*CA_3A_27A*/ #endif
/*CA_3A_27A*/
/*CA_3A_27A*/ #ifndef LTE_CACFG_CA_3A_27A_CC0_PDATA_PR3_H
/*CA_3A_27A*/ #define LTE_CACFG_CA_3A_27A_CC0_PDATA_PR3_H       LTE_PDATA_OFF
/*CA_3A_27A*/ #endif
/*CA_3A_27A*/
/*CA_3A_27A*/ #ifndef LTE_CACFG_CA_3A_27A_CC0_PDATA_PT1_H
/*CA_3A_27A*/ #define LTE_CACFG_CA_3A_27A_CC0_PDATA_PT1_H       LTE_PDATA_OFF
/*CA_3A_27A*/ #endif
/*CA_3A_27A*/
/*CA_3A_27A*/ #ifndef LTE_CACFG_CA_3A_27A_CC0_PDATA_PT2_H
/*CA_3A_27A*/ #define LTE_CACFG_CA_3A_27A_CC0_PDATA_PT2_H       LTE_PDATA_OFF
/*CA_3A_27A*/ #endif
/*CA_3A_27A*/
/*CA_3A_27A*/ #ifndef LTE_CACFG_CA_3A_27A_CC0_PDATA_PT3_H
/*CA_3A_27A*/ #define LTE_CACFG_CA_3A_27A_CC0_PDATA_PT3_H       LTE_PDATA_OFF
/*CA_3A_27A*/ #endif
/*CA_3A_27A*/
/*CA_3A_27A*/ #ifndef LTE_CACFG_CA_3A_27A_CC0_PDATA_PRANT_H
/*CA_3A_27A*/ #define LTE_CACFG_CA_3A_27A_CC0_PDATA_PRANT_H     LTE_PDATA_OFF
/*CA_3A_27A*/ #endif
/*CA_3A_27A*/
/*CA_3A_27A*/ #ifndef LTE_CACFG_CA_3A_27A_CC0_PDATA_PTANT_H
/*CA_3A_27A*/ #define LTE_CACFG_CA_3A_27A_CC0_PDATA_PTANT_H     LTE_PDATA_OFF
/*CA_3A_27A*/ #endif
/*CA_3A_27A*/
/*CA_3A_27A*/ #ifndef LTE_CACFG_CA_3A_27A_CC1_PDATA_PR1_H
/*CA_3A_27A*/ #define LTE_CACFG_CA_3A_27A_CC1_PDATA_PR1_H       LTE_PDATA_OFF
/*CA_3A_27A*/ #endif
/*CA_3A_27A*/
/*CA_3A_27A*/ #ifndef LTE_CACFG_CA_3A_27A_CC1_PDATA_PR2_H
/*CA_3A_27A*/ #define LTE_CACFG_CA_3A_27A_CC1_PDATA_PR2_H       LTE_PDATA_OFF
/*CA_3A_27A*/ #endif
/*CA_3A_27A*/
/*CA_3A_27A*/ #ifndef LTE_CACFG_CA_3A_27A_CC1_PDATA_PR3_H
/*CA_3A_27A*/ #define LTE_CACFG_CA_3A_27A_CC1_PDATA_PR3_H       LTE_PDATA_OFF
/*CA_3A_27A*/ #endif
/*CA_3A_27A*/
/*CA_3A_27A*/ #ifndef LTE_CACFG_CA_3A_27A_CC1_PDATA_PT1_H
/*CA_3A_27A*/ #define LTE_CACFG_CA_3A_27A_CC1_PDATA_PT1_H       LTE_PDATA_OFF
/*CA_3A_27A*/ #endif
/*CA_3A_27A*/
/*CA_3A_27A*/ #ifndef LTE_CACFG_CA_3A_27A_CC1_PDATA_PT2_H
/*CA_3A_27A*/ #define LTE_CACFG_CA_3A_27A_CC1_PDATA_PT2_H       LTE_PDATA_OFF
/*CA_3A_27A*/ #endif
/*CA_3A_27A*/
/*CA_3A_27A*/ #ifndef LTE_CACFG_CA_3A_27A_CC1_PDATA_PT3_H
/*CA_3A_27A*/ #define LTE_CACFG_CA_3A_27A_CC1_PDATA_PT3_H       LTE_PDATA_OFF
/*CA_3A_27A*/ #endif
/*CA_3A_27A*/
/*CA_3A_27A*/ #ifndef LTE_CACFG_CA_3A_27A_CC1_PDATA_PRANT_H
/*CA_3A_27A*/ #define LTE_CACFG_CA_3A_27A_CC1_PDATA_PRANT_H     LTE_PDATA_OFF
/*CA_3A_27A*/ #endif
/*CA_3A_27A*/
/*CA_3A_27A*/ #ifndef LTE_CACFG_CA_3A_27A_CC1_PDATA_PTANT_H
/*CA_3A_27A*/ #define LTE_CACFG_CA_3A_27A_CC1_PDATA_PTANT_H     LTE_PDATA_OFF
/*CA_3A_27A*/ #endif

/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

/*CA_3A_28A*/ #ifndef LTE_CACFG_CA_3A_28A_CC0_PDATA_PR1_H
/*CA_3A_28A*/ #define LTE_CACFG_CA_3A_28A_CC0_PDATA_PR1_H       LTE_PDATA_OFF
/*CA_3A_28A*/ #endif
/*CA_3A_28A*/
/*CA_3A_28A*/ #ifndef LTE_CACFG_CA_3A_28A_CC0_PDATA_PR2_H
/*CA_3A_28A*/ #define LTE_CACFG_CA_3A_28A_CC0_PDATA_PR2_H       LTE_PDATA_OFF
/*CA_3A_28A*/ #endif
/*CA_3A_28A*/
/*CA_3A_28A*/ #ifndef LTE_CACFG_CA_3A_28A_CC0_PDATA_PR3_H
/*CA_3A_28A*/ #define LTE_CACFG_CA_3A_28A_CC0_PDATA_PR3_H       LTE_PDATA_OFF
/*CA_3A_28A*/ #endif
/*CA_3A_28A*/
/*CA_3A_28A*/ #ifndef LTE_CACFG_CA_3A_28A_CC0_PDATA_PT1_H
/*CA_3A_28A*/ #define LTE_CACFG_CA_3A_28A_CC0_PDATA_PT1_H       LTE_PDATA_OFF
/*CA_3A_28A*/ #endif
/*CA_3A_28A*/
/*CA_3A_28A*/ #ifndef LTE_CACFG_CA_3A_28A_CC0_PDATA_PT2_H
/*CA_3A_28A*/ #define LTE_CACFG_CA_3A_28A_CC0_PDATA_PT2_H       LTE_PDATA_OFF
/*CA_3A_28A*/ #endif
/*CA_3A_28A*/
/*CA_3A_28A*/ #ifndef LTE_CACFG_CA_3A_28A_CC0_PDATA_PT3_H
/*CA_3A_28A*/ #define LTE_CACFG_CA_3A_28A_CC0_PDATA_PT3_H       LTE_PDATA_OFF
/*CA_3A_28A*/ #endif
/*CA_3A_28A*/
/*CA_3A_28A*/ #ifndef LTE_CACFG_CA_3A_28A_CC0_PDATA_PRANT_H
/*CA_3A_28A*/ #define LTE_CACFG_CA_3A_28A_CC0_PDATA_PRANT_H     LTE_PDATA_OFF
/*CA_3A_28A*/ #endif
/*CA_3A_28A*/
/*CA_3A_28A*/ #ifndef LTE_CACFG_CA_3A_28A_CC0_PDATA_PTANT_H
/*CA_3A_28A*/ #define LTE_CACFG_CA_3A_28A_CC0_PDATA_PTANT_H     LTE_PDATA_OFF
/*CA_3A_28A*/ #endif
/*CA_3A_28A*/
/*CA_3A_28A*/ #ifndef LTE_CACFG_CA_3A_28A_CC1_PDATA_PR1_H
/*CA_3A_28A*/ #define LTE_CACFG_CA_3A_28A_CC1_PDATA_PR1_H       LTE_PDATA_OFF
/*CA_3A_28A*/ #endif
/*CA_3A_28A*/
/*CA_3A_28A*/ #ifndef LTE_CACFG_CA_3A_28A_CC1_PDATA_PR2_H
/*CA_3A_28A*/ #define LTE_CACFG_CA_3A_28A_CC1_PDATA_PR2_H       LTE_PDATA_OFF
/*CA_3A_28A*/ #endif
/*CA_3A_28A*/
/*CA_3A_28A*/ #ifndef LTE_CACFG_CA_3A_28A_CC1_PDATA_PR3_H
/*CA_3A_28A*/ #define LTE_CACFG_CA_3A_28A_CC1_PDATA_PR3_H       LTE_PDATA_OFF
/*CA_3A_28A*/ #endif
/*CA_3A_28A*/
/*CA_3A_28A*/ #ifndef LTE_CACFG_CA_3A_28A_CC1_PDATA_PT1_H
/*CA_3A_28A*/ #define LTE_CACFG_CA_3A_28A_CC1_PDATA_PT1_H       LTE_PDATA_OFF
/*CA_3A_28A*/ #endif
/*CA_3A_28A*/
/*CA_3A_28A*/ #ifndef LTE_CACFG_CA_3A_28A_CC1_PDATA_PT2_H
/*CA_3A_28A*/ #define LTE_CACFG_CA_3A_28A_CC1_PDATA_PT2_H       LTE_PDATA_OFF
/*CA_3A_28A*/ #endif
/*CA_3A_28A*/
/*CA_3A_28A*/ #ifndef LTE_CACFG_CA_3A_28A_CC1_PDATA_PT3_H
/*CA_3A_28A*/ #define LTE_CACFG_CA_3A_28A_CC1_PDATA_PT3_H       LTE_PDATA_OFF
/*CA_3A_28A*/ #endif
/*CA_3A_28A*/
/*CA_3A_28A*/ #ifndef LTE_CACFG_CA_3A_28A_CC1_PDATA_PRANT_H
/*CA_3A_28A*/ #define LTE_CACFG_CA_3A_28A_CC1_PDATA_PRANT_H     LTE_PDATA_OFF
/*CA_3A_28A*/ #endif
/*CA_3A_28A*/
/*CA_3A_28A*/ #ifndef LTE_CACFG_CA_3A_28A_CC1_PDATA_PTANT_H
/*CA_3A_28A*/ #define LTE_CACFG_CA_3A_28A_CC1_PDATA_PTANT_H     LTE_PDATA_OFF
/*CA_3A_28A*/ #endif

/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

/*CA_4A_5A*/ #ifndef LTE_CACFG_CA_4A_5A_CC0_PDATA_PR1_H
/*CA_4A_5A*/ #define LTE_CACFG_CA_4A_5A_CC0_PDATA_PR1_H       LTE_PDATA_OFF
/*CA_4A_5A*/ #endif
/*CA_4A_5A*/
/*CA_4A_5A*/ #ifndef LTE_CACFG_CA_4A_5A_CC0_PDATA_PR2_H
/*CA_4A_5A*/ #define LTE_CACFG_CA_4A_5A_CC0_PDATA_PR2_H       LTE_PDATA_OFF
/*CA_4A_5A*/ #endif
/*CA_4A_5A*/
/*CA_4A_5A*/ #ifndef LTE_CACFG_CA_4A_5A_CC0_PDATA_PR3_H
/*CA_4A_5A*/ #define LTE_CACFG_CA_4A_5A_CC0_PDATA_PR3_H       LTE_PDATA_OFF
/*CA_4A_5A*/ #endif
/*CA_4A_5A*/
/*CA_4A_5A*/ #ifndef LTE_CACFG_CA_4A_5A_CC0_PDATA_PT1_H
/*CA_4A_5A*/ #define LTE_CACFG_CA_4A_5A_CC0_PDATA_PT1_H       LTE_PDATA_OFF
/*CA_4A_5A*/ #endif
/*CA_4A_5A*/
/*CA_4A_5A*/ #ifndef LTE_CACFG_CA_4A_5A_CC0_PDATA_PT2_H
/*CA_4A_5A*/ #define LTE_CACFG_CA_4A_5A_CC0_PDATA_PT2_H       LTE_PDATA_OFF
/*CA_4A_5A*/ #endif
/*CA_4A_5A*/
/*CA_4A_5A*/ #ifndef LTE_CACFG_CA_4A_5A_CC0_PDATA_PT3_H
/*CA_4A_5A*/ #define LTE_CACFG_CA_4A_5A_CC0_PDATA_PT3_H       LTE_PDATA_OFF
/*CA_4A_5A*/ #endif
/*CA_4A_5A*/
/*CA_4A_5A*/ #ifndef LTE_CACFG_CA_4A_5A_CC0_PDATA_PRANT_H
/*CA_4A_5A*/ #define LTE_CACFG_CA_4A_5A_CC0_PDATA_PRANT_H     LTE_PDATA_OFF
/*CA_4A_5A*/ #endif
/*CA_4A_5A*/
/*CA_4A_5A*/ #ifndef LTE_CACFG_CA_4A_5A_CC0_PDATA_PTANT_H
/*CA_4A_5A*/ #define LTE_CACFG_CA_4A_5A_CC0_PDATA_PTANT_H     LTE_PDATA_OFF
/*CA_4A_5A*/ #endif
/*CA_4A_5A*/
/*CA_4A_5A*/ #ifndef LTE_CACFG_CA_4A_5A_CC1_PDATA_PR1_H
/*CA_4A_5A*/ #define LTE_CACFG_CA_4A_5A_CC1_PDATA_PR1_H       LTE_PDATA_OFF
/*CA_4A_5A*/ #endif
/*CA_4A_5A*/
/*CA_4A_5A*/ #ifndef LTE_CACFG_CA_4A_5A_CC1_PDATA_PR2_H
/*CA_4A_5A*/ #define LTE_CACFG_CA_4A_5A_CC1_PDATA_PR2_H       LTE_PDATA_OFF
/*CA_4A_5A*/ #endif
/*CA_4A_5A*/
/*CA_4A_5A*/ #ifndef LTE_CACFG_CA_4A_5A_CC1_PDATA_PR3_H
/*CA_4A_5A*/ #define LTE_CACFG_CA_4A_5A_CC1_PDATA_PR3_H       LTE_PDATA_OFF
/*CA_4A_5A*/ #endif
/*CA_4A_5A*/
/*CA_4A_5A*/ #ifndef LTE_CACFG_CA_4A_5A_CC1_PDATA_PT1_H
/*CA_4A_5A*/ #define LTE_CACFG_CA_4A_5A_CC1_PDATA_PT1_H       LTE_PDATA_OFF
/*CA_4A_5A*/ #endif
/*CA_4A_5A*/
/*CA_4A_5A*/ #ifndef LTE_CACFG_CA_4A_5A_CC1_PDATA_PT2_H
/*CA_4A_5A*/ #define LTE_CACFG_CA_4A_5A_CC1_PDATA_PT2_H       LTE_PDATA_OFF
/*CA_4A_5A*/ #endif
/*CA_4A_5A*/
/*CA_4A_5A*/ #ifndef LTE_CACFG_CA_4A_5A_CC1_PDATA_PT3_H
/*CA_4A_5A*/ #define LTE_CACFG_CA_4A_5A_CC1_PDATA_PT3_H       LTE_PDATA_OFF
/*CA_4A_5A*/ #endif
/*CA_4A_5A*/
/*CA_4A_5A*/ #ifndef LTE_CACFG_CA_4A_5A_CC1_PDATA_PRANT_H
/*CA_4A_5A*/ #define LTE_CACFG_CA_4A_5A_CC1_PDATA_PRANT_H     LTE_PDATA_OFF
/*CA_4A_5A*/ #endif
/*CA_4A_5A*/
/*CA_4A_5A*/ #ifndef LTE_CACFG_CA_4A_5A_CC1_PDATA_PTANT_H
/*CA_4A_5A*/ #define LTE_CACFG_CA_4A_5A_CC1_PDATA_PTANT_H     LTE_PDATA_OFF
/*CA_4A_5A*/ #endif

/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

/*CA_4A_7A*/ #ifndef LTE_CACFG_CA_4A_7A_CC0_PDATA_PR1_H
/*CA_4A_7A*/ #define LTE_CACFG_CA_4A_7A_CC0_PDATA_PR1_H       LTE_PDATA_OFF
/*CA_4A_7A*/ #endif
/*CA_4A_7A*/
/*CA_4A_7A*/ #ifndef LTE_CACFG_CA_4A_7A_CC0_PDATA_PR2_H
/*CA_4A_7A*/ #define LTE_CACFG_CA_4A_7A_CC0_PDATA_PR2_H       LTE_PDATA_OFF
/*CA_4A_7A*/ #endif
/*CA_4A_7A*/
/*CA_4A_7A*/ #ifndef LTE_CACFG_CA_4A_7A_CC0_PDATA_PR3_H
/*CA_4A_7A*/ #define LTE_CACFG_CA_4A_7A_CC0_PDATA_PR3_H       LTE_PDATA_OFF
/*CA_4A_7A*/ #endif
/*CA_4A_7A*/
/*CA_4A_7A*/ #ifndef LTE_CACFG_CA_4A_7A_CC0_PDATA_PT1_H
/*CA_4A_7A*/ #define LTE_CACFG_CA_4A_7A_CC0_PDATA_PT1_H       LTE_PDATA_OFF
/*CA_4A_7A*/ #endif
/*CA_4A_7A*/
/*CA_4A_7A*/ #ifndef LTE_CACFG_CA_4A_7A_CC0_PDATA_PT2_H
/*CA_4A_7A*/ #define LTE_CACFG_CA_4A_7A_CC0_PDATA_PT2_H       LTE_PDATA_OFF
/*CA_4A_7A*/ #endif
/*CA_4A_7A*/
/*CA_4A_7A*/ #ifndef LTE_CACFG_CA_4A_7A_CC0_PDATA_PT3_H
/*CA_4A_7A*/ #define LTE_CACFG_CA_4A_7A_CC0_PDATA_PT3_H       LTE_PDATA_OFF
/*CA_4A_7A*/ #endif
/*CA_4A_7A*/
/*CA_4A_7A*/ #ifndef LTE_CACFG_CA_4A_7A_CC0_PDATA_PRANT_H
/*CA_4A_7A*/ #define LTE_CACFG_CA_4A_7A_CC0_PDATA_PRANT_H     LTE_PDATA_OFF
/*CA_4A_7A*/ #endif
/*CA_4A_7A*/
/*CA_4A_7A*/ #ifndef LTE_CACFG_CA_4A_7A_CC0_PDATA_PTANT_H
/*CA_4A_7A*/ #define LTE_CACFG_CA_4A_7A_CC0_PDATA_PTANT_H     LTE_PDATA_OFF
/*CA_4A_7A*/ #endif
/*CA_4A_7A*/
/*CA_4A_7A*/ #ifndef LTE_CACFG_CA_4A_7A_CC1_PDATA_PR1_H
/*CA_4A_7A*/ #define LTE_CACFG_CA_4A_7A_CC1_PDATA_PR1_H       LTE_PDATA_OFF
/*CA_4A_7A*/ #endif
/*CA_4A_7A*/
/*CA_4A_7A*/ #ifndef LTE_CACFG_CA_4A_7A_CC1_PDATA_PR2_H
/*CA_4A_7A*/ #define LTE_CACFG_CA_4A_7A_CC1_PDATA_PR2_H       LTE_PDATA_OFF
/*CA_4A_7A*/ #endif
/*CA_4A_7A*/
/*CA_4A_7A*/ #ifndef LTE_CACFG_CA_4A_7A_CC1_PDATA_PR3_H
/*CA_4A_7A*/ #define LTE_CACFG_CA_4A_7A_CC1_PDATA_PR3_H       LTE_PDATA_OFF
/*CA_4A_7A*/ #endif
/*CA_4A_7A*/
/*CA_4A_7A*/ #ifndef LTE_CACFG_CA_4A_7A_CC1_PDATA_PT1_H
/*CA_4A_7A*/ #define LTE_CACFG_CA_4A_7A_CC1_PDATA_PT1_H       LTE_PDATA_OFF
/*CA_4A_7A*/ #endif
/*CA_4A_7A*/
/*CA_4A_7A*/ #ifndef LTE_CACFG_CA_4A_7A_CC1_PDATA_PT2_H
/*CA_4A_7A*/ #define LTE_CACFG_CA_4A_7A_CC1_PDATA_PT2_H       LTE_PDATA_OFF
/*CA_4A_7A*/ #endif
/*CA_4A_7A*/
/*CA_4A_7A*/ #ifndef LTE_CACFG_CA_4A_7A_CC1_PDATA_PT3_H
/*CA_4A_7A*/ #define LTE_CACFG_CA_4A_7A_CC1_PDATA_PT3_H       LTE_PDATA_OFF
/*CA_4A_7A*/ #endif
/*CA_4A_7A*/
/*CA_4A_7A*/ #ifndef LTE_CACFG_CA_4A_7A_CC1_PDATA_PRANT_H
/*CA_4A_7A*/ #define LTE_CACFG_CA_4A_7A_CC1_PDATA_PRANT_H     LTE_PDATA_OFF
/*CA_4A_7A*/ #endif
/*CA_4A_7A*/
/*CA_4A_7A*/ #ifndef LTE_CACFG_CA_4A_7A_CC1_PDATA_PTANT_H
/*CA_4A_7A*/ #define LTE_CACFG_CA_4A_7A_CC1_PDATA_PTANT_H     LTE_PDATA_OFF
/*CA_4A_7A*/ #endif

/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

/*CA_4A_12A*/ #ifndef LTE_CACFG_CA_4A_12A_CC0_PDATA_PR1_H
/*CA_4A_12A*/ #define LTE_CACFG_CA_4A_12A_CC0_PDATA_PR1_H       LTE_PDATA_OFF
/*CA_4A_12A*/ #endif
/*CA_4A_12A*/
/*CA_4A_12A*/ #ifndef LTE_CACFG_CA_4A_12A_CC0_PDATA_PR2_H
/*CA_4A_12A*/ #define LTE_CACFG_CA_4A_12A_CC0_PDATA_PR2_H       LTE_PDATA_OFF
/*CA_4A_12A*/ #endif
/*CA_4A_12A*/
/*CA_4A_12A*/ #ifndef LTE_CACFG_CA_4A_12A_CC0_PDATA_PR3_H
/*CA_4A_12A*/ #define LTE_CACFG_CA_4A_12A_CC0_PDATA_PR3_H       LTE_PDATA_OFF
/*CA_4A_12A*/ #endif
/*CA_4A_12A*/
/*CA_4A_12A*/ #ifndef LTE_CACFG_CA_4A_12A_CC0_PDATA_PT1_H
/*CA_4A_12A*/ #define LTE_CACFG_CA_4A_12A_CC0_PDATA_PT1_H       LTE_PDATA_OFF
/*CA_4A_12A*/ #endif
/*CA_4A_12A*/
/*CA_4A_12A*/ #ifndef LTE_CACFG_CA_4A_12A_CC0_PDATA_PT2_H
/*CA_4A_12A*/ #define LTE_CACFG_CA_4A_12A_CC0_PDATA_PT2_H       LTE_PDATA_OFF
/*CA_4A_12A*/ #endif
/*CA_4A_12A*/
/*CA_4A_12A*/ #ifndef LTE_CACFG_CA_4A_12A_CC0_PDATA_PT3_H
/*CA_4A_12A*/ #define LTE_CACFG_CA_4A_12A_CC0_PDATA_PT3_H       LTE_PDATA_OFF
/*CA_4A_12A*/ #endif
/*CA_4A_12A*/
/*CA_4A_12A*/ #ifndef LTE_CACFG_CA_4A_12A_CC0_PDATA_PRANT_H
/*CA_4A_12A*/ #define LTE_CACFG_CA_4A_12A_CC0_PDATA_PRANT_H     LTE_PDATA_OFF
/*CA_4A_12A*/ #endif
/*CA_4A_12A*/
/*CA_4A_12A*/ #ifndef LTE_CACFG_CA_4A_12A_CC0_PDATA_PTANT_H
/*CA_4A_12A*/ #define LTE_CACFG_CA_4A_12A_CC0_PDATA_PTANT_H     LTE_PDATA_OFF
/*CA_4A_12A*/ #endif
/*CA_4A_12A*/
/*CA_4A_12A*/ #ifndef LTE_CACFG_CA_4A_12A_CC1_PDATA_PR1_H
/*CA_4A_12A*/ #define LTE_CACFG_CA_4A_12A_CC1_PDATA_PR1_H       LTE_PDATA_OFF
/*CA_4A_12A*/ #endif
/*CA_4A_12A*/
/*CA_4A_12A*/ #ifndef LTE_CACFG_CA_4A_12A_CC1_PDATA_PR2_H
/*CA_4A_12A*/ #define LTE_CACFG_CA_4A_12A_CC1_PDATA_PR2_H       LTE_PDATA_OFF
/*CA_4A_12A*/ #endif
/*CA_4A_12A*/
/*CA_4A_12A*/ #ifndef LTE_CACFG_CA_4A_12A_CC1_PDATA_PR3_H
/*CA_4A_12A*/ #define LTE_CACFG_CA_4A_12A_CC1_PDATA_PR3_H       LTE_PDATA_OFF
/*CA_4A_12A*/ #endif
/*CA_4A_12A*/
/*CA_4A_12A*/ #ifndef LTE_CACFG_CA_4A_12A_CC1_PDATA_PT1_H
/*CA_4A_12A*/ #define LTE_CACFG_CA_4A_12A_CC1_PDATA_PT1_H       LTE_PDATA_OFF
/*CA_4A_12A*/ #endif
/*CA_4A_12A*/
/*CA_4A_12A*/ #ifndef LTE_CACFG_CA_4A_12A_CC1_PDATA_PT2_H
/*CA_4A_12A*/ #define LTE_CACFG_CA_4A_12A_CC1_PDATA_PT2_H       LTE_PDATA_OFF
/*CA_4A_12A*/ #endif
/*CA_4A_12A*/
/*CA_4A_12A*/ #ifndef LTE_CACFG_CA_4A_12A_CC1_PDATA_PT3_H
/*CA_4A_12A*/ #define LTE_CACFG_CA_4A_12A_CC1_PDATA_PT3_H       LTE_PDATA_OFF
/*CA_4A_12A*/ #endif
/*CA_4A_12A*/
/*CA_4A_12A*/ #ifndef LTE_CACFG_CA_4A_12A_CC1_PDATA_PRANT_H
/*CA_4A_12A*/ #define LTE_CACFG_CA_4A_12A_CC1_PDATA_PRANT_H     LTE_PDATA_OFF
/*CA_4A_12A*/ #endif
/*CA_4A_12A*/
/*CA_4A_12A*/ #ifndef LTE_CACFG_CA_4A_12A_CC1_PDATA_PTANT_H
/*CA_4A_12A*/ #define LTE_CACFG_CA_4A_12A_CC1_PDATA_PTANT_H     LTE_PDATA_OFF
/*CA_4A_12A*/ #endif

/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

/*CA_4A_13A*/ #ifndef LTE_CACFG_CA_4A_13A_CC0_PDATA_PR1_H
/*CA_4A_13A*/ #define LTE_CACFG_CA_4A_13A_CC0_PDATA_PR1_H       LTE_PDATA_OFF
/*CA_4A_13A*/ #endif
/*CA_4A_13A*/
/*CA_4A_13A*/ #ifndef LTE_CACFG_CA_4A_13A_CC0_PDATA_PR2_H
/*CA_4A_13A*/ #define LTE_CACFG_CA_4A_13A_CC0_PDATA_PR2_H       LTE_PDATA_OFF
/*CA_4A_13A*/ #endif
/*CA_4A_13A*/
/*CA_4A_13A*/ #ifndef LTE_CACFG_CA_4A_13A_CC0_PDATA_PR3_H
/*CA_4A_13A*/ #define LTE_CACFG_CA_4A_13A_CC0_PDATA_PR3_H       LTE_PDATA_OFF
/*CA_4A_13A*/ #endif
/*CA_4A_13A*/
/*CA_4A_13A*/ #ifndef LTE_CACFG_CA_4A_13A_CC0_PDATA_PT1_H
/*CA_4A_13A*/ #define LTE_CACFG_CA_4A_13A_CC0_PDATA_PT1_H       LTE_PDATA_OFF
/*CA_4A_13A*/ #endif
/*CA_4A_13A*/
/*CA_4A_13A*/ #ifndef LTE_CACFG_CA_4A_13A_CC0_PDATA_PT2_H
/*CA_4A_13A*/ #define LTE_CACFG_CA_4A_13A_CC0_PDATA_PT2_H       LTE_PDATA_OFF
/*CA_4A_13A*/ #endif
/*CA_4A_13A*/
/*CA_4A_13A*/ #ifndef LTE_CACFG_CA_4A_13A_CC0_PDATA_PT3_H
/*CA_4A_13A*/ #define LTE_CACFG_CA_4A_13A_CC0_PDATA_PT3_H       LTE_PDATA_OFF
/*CA_4A_13A*/ #endif
/*CA_4A_13A*/
/*CA_4A_13A*/ #ifndef LTE_CACFG_CA_4A_13A_CC0_PDATA_PRANT_H
/*CA_4A_13A*/ #define LTE_CACFG_CA_4A_13A_CC0_PDATA_PRANT_H     LTE_PDATA_OFF
/*CA_4A_13A*/ #endif
/*CA_4A_13A*/
/*CA_4A_13A*/ #ifndef LTE_CACFG_CA_4A_13A_CC0_PDATA_PTANT_H
/*CA_4A_13A*/ #define LTE_CACFG_CA_4A_13A_CC0_PDATA_PTANT_H     LTE_PDATA_OFF
/*CA_4A_13A*/ #endif
/*CA_4A_13A*/
/*CA_4A_13A*/ #ifndef LTE_CACFG_CA_4A_13A_CC1_PDATA_PR1_H
/*CA_4A_13A*/ #define LTE_CACFG_CA_4A_13A_CC1_PDATA_PR1_H       LTE_PDATA_OFF
/*CA_4A_13A*/ #endif
/*CA_4A_13A*/
/*CA_4A_13A*/ #ifndef LTE_CACFG_CA_4A_13A_CC1_PDATA_PR2_H
/*CA_4A_13A*/ #define LTE_CACFG_CA_4A_13A_CC1_PDATA_PR2_H       LTE_PDATA_OFF
/*CA_4A_13A*/ #endif
/*CA_4A_13A*/
/*CA_4A_13A*/ #ifndef LTE_CACFG_CA_4A_13A_CC1_PDATA_PR3_H
/*CA_4A_13A*/ #define LTE_CACFG_CA_4A_13A_CC1_PDATA_PR3_H       LTE_PDATA_OFF
/*CA_4A_13A*/ #endif
/*CA_4A_13A*/
/*CA_4A_13A*/ #ifndef LTE_CACFG_CA_4A_13A_CC1_PDATA_PT1_H
/*CA_4A_13A*/ #define LTE_CACFG_CA_4A_13A_CC1_PDATA_PT1_H       LTE_PDATA_OFF
/*CA_4A_13A*/ #endif
/*CA_4A_13A*/
/*CA_4A_13A*/ #ifndef LTE_CACFG_CA_4A_13A_CC1_PDATA_PT2_H
/*CA_4A_13A*/ #define LTE_CACFG_CA_4A_13A_CC1_PDATA_PT2_H       LTE_PDATA_OFF
/*CA_4A_13A*/ #endif
/*CA_4A_13A*/
/*CA_4A_13A*/ #ifndef LTE_CACFG_CA_4A_13A_CC1_PDATA_PT3_H
/*CA_4A_13A*/ #define LTE_CACFG_CA_4A_13A_CC1_PDATA_PT3_H       LTE_PDATA_OFF
/*CA_4A_13A*/ #endif
/*CA_4A_13A*/
/*CA_4A_13A*/ #ifndef LTE_CACFG_CA_4A_13A_CC1_PDATA_PRANT_H
/*CA_4A_13A*/ #define LTE_CACFG_CA_4A_13A_CC1_PDATA_PRANT_H     LTE_PDATA_OFF
/*CA_4A_13A*/ #endif
/*CA_4A_13A*/
/*CA_4A_13A*/ #ifndef LTE_CACFG_CA_4A_13A_CC1_PDATA_PTANT_H
/*CA_4A_13A*/ #define LTE_CACFG_CA_4A_13A_CC1_PDATA_PTANT_H     LTE_PDATA_OFF
/*CA_4A_13A*/ #endif

/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

/*CA_4A_17A*/ #ifndef LTE_CACFG_CA_4A_17A_CC0_PDATA_PR1_H
/*CA_4A_17A*/ #define LTE_CACFG_CA_4A_17A_CC0_PDATA_PR1_H       LTE_PDATA_OFF
/*CA_4A_17A*/ #endif
/*CA_4A_17A*/
/*CA_4A_17A*/ #ifndef LTE_CACFG_CA_4A_17A_CC0_PDATA_PR2_H
/*CA_4A_17A*/ #define LTE_CACFG_CA_4A_17A_CC0_PDATA_PR2_H       LTE_PDATA_OFF
/*CA_4A_17A*/ #endif
/*CA_4A_17A*/
/*CA_4A_17A*/ #ifndef LTE_CACFG_CA_4A_17A_CC0_PDATA_PR3_H
/*CA_4A_17A*/ #define LTE_CACFG_CA_4A_17A_CC0_PDATA_PR3_H       LTE_PDATA_OFF
/*CA_4A_17A*/ #endif
/*CA_4A_17A*/
/*CA_4A_17A*/ #ifndef LTE_CACFG_CA_4A_17A_CC0_PDATA_PT1_H
/*CA_4A_17A*/ #define LTE_CACFG_CA_4A_17A_CC0_PDATA_PT1_H       LTE_PDATA_OFF
/*CA_4A_17A*/ #endif
/*CA_4A_17A*/
/*CA_4A_17A*/ #ifndef LTE_CACFG_CA_4A_17A_CC0_PDATA_PT2_H
/*CA_4A_17A*/ #define LTE_CACFG_CA_4A_17A_CC0_PDATA_PT2_H       LTE_PDATA_OFF
/*CA_4A_17A*/ #endif
/*CA_4A_17A*/
/*CA_4A_17A*/ #ifndef LTE_CACFG_CA_4A_17A_CC0_PDATA_PT3_H
/*CA_4A_17A*/ #define LTE_CACFG_CA_4A_17A_CC0_PDATA_PT3_H       LTE_PDATA_OFF
/*CA_4A_17A*/ #endif
/*CA_4A_17A*/
/*CA_4A_17A*/ #ifndef LTE_CACFG_CA_4A_17A_CC0_PDATA_PRANT_H
/*CA_4A_17A*/ #define LTE_CACFG_CA_4A_17A_CC0_PDATA_PRANT_H     LTE_PDATA_OFF
/*CA_4A_17A*/ #endif
/*CA_4A_17A*/
/*CA_4A_17A*/ #ifndef LTE_CACFG_CA_4A_17A_CC0_PDATA_PTANT_H
/*CA_4A_17A*/ #define LTE_CACFG_CA_4A_17A_CC0_PDATA_PTANT_H     LTE_PDATA_OFF
/*CA_4A_17A*/ #endif
/*CA_4A_17A*/
/*CA_4A_17A*/ #ifndef LTE_CACFG_CA_4A_17A_CC1_PDATA_PR1_H
/*CA_4A_17A*/ #define LTE_CACFG_CA_4A_17A_CC1_PDATA_PR1_H       LTE_PDATA_OFF
/*CA_4A_17A*/ #endif
/*CA_4A_17A*/
/*CA_4A_17A*/ #ifndef LTE_CACFG_CA_4A_17A_CC1_PDATA_PR2_H
/*CA_4A_17A*/ #define LTE_CACFG_CA_4A_17A_CC1_PDATA_PR2_H       LTE_PDATA_OFF
/*CA_4A_17A*/ #endif
/*CA_4A_17A*/
/*CA_4A_17A*/ #ifndef LTE_CACFG_CA_4A_17A_CC1_PDATA_PR3_H
/*CA_4A_17A*/ #define LTE_CACFG_CA_4A_17A_CC1_PDATA_PR3_H       LTE_PDATA_OFF
/*CA_4A_17A*/ #endif
/*CA_4A_17A*/
/*CA_4A_17A*/ #ifndef LTE_CACFG_CA_4A_17A_CC1_PDATA_PT1_H
/*CA_4A_17A*/ #define LTE_CACFG_CA_4A_17A_CC1_PDATA_PT1_H       LTE_PDATA_OFF
/*CA_4A_17A*/ #endif
/*CA_4A_17A*/
/*CA_4A_17A*/ #ifndef LTE_CACFG_CA_4A_17A_CC1_PDATA_PT2_H
/*CA_4A_17A*/ #define LTE_CACFG_CA_4A_17A_CC1_PDATA_PT2_H       LTE_PDATA_OFF
/*CA_4A_17A*/ #endif
/*CA_4A_17A*/
/*CA_4A_17A*/ #ifndef LTE_CACFG_CA_4A_17A_CC1_PDATA_PT3_H
/*CA_4A_17A*/ #define LTE_CACFG_CA_4A_17A_CC1_PDATA_PT3_H       LTE_PDATA_OFF
/*CA_4A_17A*/ #endif
/*CA_4A_17A*/
/*CA_4A_17A*/ #ifndef LTE_CACFG_CA_4A_17A_CC1_PDATA_PRANT_H
/*CA_4A_17A*/ #define LTE_CACFG_CA_4A_17A_CC1_PDATA_PRANT_H     LTE_PDATA_OFF
/*CA_4A_17A*/ #endif
/*CA_4A_17A*/
/*CA_4A_17A*/ #ifndef LTE_CACFG_CA_4A_17A_CC1_PDATA_PTANT_H
/*CA_4A_17A*/ #define LTE_CACFG_CA_4A_17A_CC1_PDATA_PTANT_H     LTE_PDATA_OFF
/*CA_4A_17A*/ #endif

/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

/*CA_4A_29A*/ #ifndef LTE_CACFG_CA_4A_29A_CC0_PDATA_PR1_H
/*CA_4A_29A*/ #define LTE_CACFG_CA_4A_29A_CC0_PDATA_PR1_H       LTE_PDATA_OFF
/*CA_4A_29A*/ #endif
/*CA_4A_29A*/
/*CA_4A_29A*/ #ifndef LTE_CACFG_CA_4A_29A_CC0_PDATA_PR2_H
/*CA_4A_29A*/ #define LTE_CACFG_CA_4A_29A_CC0_PDATA_PR2_H       LTE_PDATA_OFF
/*CA_4A_29A*/ #endif
/*CA_4A_29A*/
/*CA_4A_29A*/ #ifndef LTE_CACFG_CA_4A_29A_CC0_PDATA_PR3_H
/*CA_4A_29A*/ #define LTE_CACFG_CA_4A_29A_CC0_PDATA_PR3_H       LTE_PDATA_OFF
/*CA_4A_29A*/ #endif
/*CA_4A_29A*/
/*CA_4A_29A*/ #ifndef LTE_CACFG_CA_4A_29A_CC0_PDATA_PT1_H
/*CA_4A_29A*/ #define LTE_CACFG_CA_4A_29A_CC0_PDATA_PT1_H       LTE_PDATA_OFF
/*CA_4A_29A*/ #endif
/*CA_4A_29A*/
/*CA_4A_29A*/ #ifndef LTE_CACFG_CA_4A_29A_CC0_PDATA_PT2_H
/*CA_4A_29A*/ #define LTE_CACFG_CA_4A_29A_CC0_PDATA_PT2_H       LTE_PDATA_OFF
/*CA_4A_29A*/ #endif
/*CA_4A_29A*/
/*CA_4A_29A*/ #ifndef LTE_CACFG_CA_4A_29A_CC0_PDATA_PT3_H
/*CA_4A_29A*/ #define LTE_CACFG_CA_4A_29A_CC0_PDATA_PT3_H       LTE_PDATA_OFF
/*CA_4A_29A*/ #endif
/*CA_4A_29A*/
/*CA_4A_29A*/ #ifndef LTE_CACFG_CA_4A_29A_CC0_PDATA_PRANT_H
/*CA_4A_29A*/ #define LTE_CACFG_CA_4A_29A_CC0_PDATA_PRANT_H     LTE_PDATA_OFF
/*CA_4A_29A*/ #endif
/*CA_4A_29A*/
/*CA_4A_29A*/ #ifndef LTE_CACFG_CA_4A_29A_CC0_PDATA_PTANT_H
/*CA_4A_29A*/ #define LTE_CACFG_CA_4A_29A_CC0_PDATA_PTANT_H     LTE_PDATA_OFF
/*CA_4A_29A*/ #endif
/*CA_4A_29A*/
/*CA_4A_29A*/ #ifndef LTE_CACFG_CA_4A_29A_CC1_PDATA_PR1_H
/*CA_4A_29A*/ #define LTE_CACFG_CA_4A_29A_CC1_PDATA_PR1_H       LTE_PDATA_OFF
/*CA_4A_29A*/ #endif
/*CA_4A_29A*/
/*CA_4A_29A*/ #ifndef LTE_CACFG_CA_4A_29A_CC1_PDATA_PR2_H
/*CA_4A_29A*/ #define LTE_CACFG_CA_4A_29A_CC1_PDATA_PR2_H       LTE_PDATA_OFF
/*CA_4A_29A*/ #endif
/*CA_4A_29A*/
/*CA_4A_29A*/ #ifndef LTE_CACFG_CA_4A_29A_CC1_PDATA_PR3_H
/*CA_4A_29A*/ #define LTE_CACFG_CA_4A_29A_CC1_PDATA_PR3_H       LTE_PDATA_OFF
/*CA_4A_29A*/ #endif
/*CA_4A_29A*/
/*CA_4A_29A*/ #ifndef LTE_CACFG_CA_4A_29A_CC1_PDATA_PT1_H
/*CA_4A_29A*/ #define LTE_CACFG_CA_4A_29A_CC1_PDATA_PT1_H       LTE_PDATA_OFF
/*CA_4A_29A*/ #endif
/*CA_4A_29A*/
/*CA_4A_29A*/ #ifndef LTE_CACFG_CA_4A_29A_CC1_PDATA_PT2_H
/*CA_4A_29A*/ #define LTE_CACFG_CA_4A_29A_CC1_PDATA_PT2_H       LTE_PDATA_OFF
/*CA_4A_29A*/ #endif
/*CA_4A_29A*/
/*CA_4A_29A*/ #ifndef LTE_CACFG_CA_4A_29A_CC1_PDATA_PT3_H
/*CA_4A_29A*/ #define LTE_CACFG_CA_4A_29A_CC1_PDATA_PT3_H       LTE_PDATA_OFF
/*CA_4A_29A*/ #endif
/*CA_4A_29A*/
/*CA_4A_29A*/ #ifndef LTE_CACFG_CA_4A_29A_CC1_PDATA_PRANT_H
/*CA_4A_29A*/ #define LTE_CACFG_CA_4A_29A_CC1_PDATA_PRANT_H     LTE_PDATA_OFF
/*CA_4A_29A*/ #endif
/*CA_4A_29A*/
/*CA_4A_29A*/ #ifndef LTE_CACFG_CA_4A_29A_CC1_PDATA_PTANT_H
/*CA_4A_29A*/ #define LTE_CACFG_CA_4A_29A_CC1_PDATA_PTANT_H     LTE_PDATA_OFF
/*CA_4A_29A*/ #endif

/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

/*CA_4A_30A*/ #ifndef LTE_CACFG_CA_4A_30A_CC0_PDATA_PR1_H
/*CA_4A_30A*/ #define LTE_CACFG_CA_4A_30A_CC0_PDATA_PR1_H       LTE_PDATA_OFF
/*CA_4A_30A*/ #endif
/*CA_4A_30A*/
/*CA_4A_30A*/ #ifndef LTE_CACFG_CA_4A_30A_CC0_PDATA_PR2_H
/*CA_4A_30A*/ #define LTE_CACFG_CA_4A_30A_CC0_PDATA_PR2_H       LTE_PDATA_OFF
/*CA_4A_30A*/ #endif
/*CA_4A_30A*/
/*CA_4A_30A*/ #ifndef LTE_CACFG_CA_4A_30A_CC0_PDATA_PR3_H
/*CA_4A_30A*/ #define LTE_CACFG_CA_4A_30A_CC0_PDATA_PR3_H       LTE_PDATA_OFF
/*CA_4A_30A*/ #endif
/*CA_4A_30A*/
/*CA_4A_30A*/ #ifndef LTE_CACFG_CA_4A_30A_CC0_PDATA_PT1_H
/*CA_4A_30A*/ #define LTE_CACFG_CA_4A_30A_CC0_PDATA_PT1_H       LTE_PDATA_OFF
/*CA_4A_30A*/ #endif
/*CA_4A_30A*/
/*CA_4A_30A*/ #ifndef LTE_CACFG_CA_4A_30A_CC0_PDATA_PT2_H
/*CA_4A_30A*/ #define LTE_CACFG_CA_4A_30A_CC0_PDATA_PT2_H       LTE_PDATA_OFF
/*CA_4A_30A*/ #endif
/*CA_4A_30A*/
/*CA_4A_30A*/ #ifndef LTE_CACFG_CA_4A_30A_CC0_PDATA_PT3_H
/*CA_4A_30A*/ #define LTE_CACFG_CA_4A_30A_CC0_PDATA_PT3_H       LTE_PDATA_OFF
/*CA_4A_30A*/ #endif
/*CA_4A_30A*/
/*CA_4A_30A*/ #ifndef LTE_CACFG_CA_4A_30A_CC0_PDATA_PRANT_H
/*CA_4A_30A*/ #define LTE_CACFG_CA_4A_30A_CC0_PDATA_PRANT_H     LTE_PDATA_OFF
/*CA_4A_30A*/ #endif
/*CA_4A_30A*/
/*CA_4A_30A*/ #ifndef LTE_CACFG_CA_4A_30A_CC0_PDATA_PTANT_H
/*CA_4A_30A*/ #define LTE_CACFG_CA_4A_30A_CC0_PDATA_PTANT_H     LTE_PDATA_OFF
/*CA_4A_30A*/ #endif
/*CA_4A_30A*/
/*CA_4A_30A*/ #ifndef LTE_CACFG_CA_4A_30A_CC1_PDATA_PR1_H
/*CA_4A_30A*/ #define LTE_CACFG_CA_4A_30A_CC1_PDATA_PR1_H       LTE_PDATA_OFF
/*CA_4A_30A*/ #endif
/*CA_4A_30A*/
/*CA_4A_30A*/ #ifndef LTE_CACFG_CA_4A_30A_CC1_PDATA_PR2_H
/*CA_4A_30A*/ #define LTE_CACFG_CA_4A_30A_CC1_PDATA_PR2_H       LTE_PDATA_OFF
/*CA_4A_30A*/ #endif
/*CA_4A_30A*/
/*CA_4A_30A*/ #ifndef LTE_CACFG_CA_4A_30A_CC1_PDATA_PR3_H
/*CA_4A_30A*/ #define LTE_CACFG_CA_4A_30A_CC1_PDATA_PR3_H       LTE_PDATA_OFF
/*CA_4A_30A*/ #endif
/*CA_4A_30A*/
/*CA_4A_30A*/ #ifndef LTE_CACFG_CA_4A_30A_CC1_PDATA_PT1_H
/*CA_4A_30A*/ #define LTE_CACFG_CA_4A_30A_CC1_PDATA_PT1_H       LTE_PDATA_OFF
/*CA_4A_30A*/ #endif
/*CA_4A_30A*/
/*CA_4A_30A*/ #ifndef LTE_CACFG_CA_4A_30A_CC1_PDATA_PT2_H
/*CA_4A_30A*/ #define LTE_CACFG_CA_4A_30A_CC1_PDATA_PT2_H       LTE_PDATA_OFF
/*CA_4A_30A*/ #endif
/*CA_4A_30A*/
/*CA_4A_30A*/ #ifndef LTE_CACFG_CA_4A_30A_CC1_PDATA_PT3_H
/*CA_4A_30A*/ #define LTE_CACFG_CA_4A_30A_CC1_PDATA_PT3_H       LTE_PDATA_OFF
/*CA_4A_30A*/ #endif
/*CA_4A_30A*/
/*CA_4A_30A*/ #ifndef LTE_CACFG_CA_4A_30A_CC1_PDATA_PRANT_H
/*CA_4A_30A*/ #define LTE_CACFG_CA_4A_30A_CC1_PDATA_PRANT_H     LTE_PDATA_OFF
/*CA_4A_30A*/ #endif
/*CA_4A_30A*/
/*CA_4A_30A*/ #ifndef LTE_CACFG_CA_4A_30A_CC1_PDATA_PTANT_H
/*CA_4A_30A*/ #define LTE_CACFG_CA_4A_30A_CC1_PDATA_PTANT_H     LTE_PDATA_OFF
/*CA_4A_30A*/ #endif

/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

/*CA_4A_41A*/ #ifndef LTE_CACFG_CA_4A_41A_CC0_PDATA_PR1_H
/*CA_4A_41A*/ #define LTE_CACFG_CA_4A_41A_CC0_PDATA_PR1_H       LTE_PDATA_OFF
/*CA_4A_41A*/ #endif
/*CA_4A_41A*/
/*CA_4A_41A*/ #ifndef LTE_CACFG_CA_4A_41A_CC0_PDATA_PR2_H
/*CA_4A_41A*/ #define LTE_CACFG_CA_4A_41A_CC0_PDATA_PR2_H       LTE_PDATA_OFF
/*CA_4A_41A*/ #endif
/*CA_4A_41A*/
/*CA_4A_41A*/ #ifndef LTE_CACFG_CA_4A_41A_CC0_PDATA_PR3_H
/*CA_4A_41A*/ #define LTE_CACFG_CA_4A_41A_CC0_PDATA_PR3_H       LTE_PDATA_OFF
/*CA_4A_41A*/ #endif
/*CA_4A_41A*/
/*CA_4A_41A*/ #ifndef LTE_CACFG_CA_4A_41A_CC0_PDATA_PT1_H
/*CA_4A_41A*/ #define LTE_CACFG_CA_4A_41A_CC0_PDATA_PT1_H       LTE_PDATA_OFF
/*CA_4A_41A*/ #endif
/*CA_4A_41A*/
/*CA_4A_41A*/ #ifndef LTE_CACFG_CA_4A_41A_CC0_PDATA_PT2_H
/*CA_4A_41A*/ #define LTE_CACFG_CA_4A_41A_CC0_PDATA_PT2_H       LTE_PDATA_OFF
/*CA_4A_41A*/ #endif
/*CA_4A_41A*/
/*CA_4A_41A*/ #ifndef LTE_CACFG_CA_4A_41A_CC0_PDATA_PT3_H
/*CA_4A_41A*/ #define LTE_CACFG_CA_4A_41A_CC0_PDATA_PT3_H       LTE_PDATA_OFF
/*CA_4A_41A*/ #endif
/*CA_4A_41A*/
/*CA_4A_41A*/ #ifndef LTE_CACFG_CA_4A_41A_CC0_PDATA_PRANT_H
/*CA_4A_41A*/ #define LTE_CACFG_CA_4A_41A_CC0_PDATA_PRANT_H     LTE_PDATA_OFF
/*CA_4A_41A*/ #endif
/*CA_4A_41A*/
/*CA_4A_41A*/ #ifndef LTE_CACFG_CA_4A_41A_CC0_PDATA_PTANT_H
/*CA_4A_41A*/ #define LTE_CACFG_CA_4A_41A_CC0_PDATA_PTANT_H     LTE_PDATA_OFF
/*CA_4A_41A*/ #endif
/*CA_4A_41A*/
/*CA_4A_41A*/ #ifndef LTE_CACFG_CA_4A_41A_CC1_PDATA_PR1_H
/*CA_4A_41A*/ #define LTE_CACFG_CA_4A_41A_CC1_PDATA_PR1_H       LTE_PDATA_OFF
/*CA_4A_41A*/ #endif
/*CA_4A_41A*/
/*CA_4A_41A*/ #ifndef LTE_CACFG_CA_4A_41A_CC1_PDATA_PR2_H
/*CA_4A_41A*/ #define LTE_CACFG_CA_4A_41A_CC1_PDATA_PR2_H       LTE_PDATA_OFF
/*CA_4A_41A*/ #endif
/*CA_4A_41A*/
/*CA_4A_41A*/ #ifndef LTE_CACFG_CA_4A_41A_CC1_PDATA_PR3_H
/*CA_4A_41A*/ #define LTE_CACFG_CA_4A_41A_CC1_PDATA_PR3_H       LTE_PDATA_OFF
/*CA_4A_41A*/ #endif
/*CA_4A_41A*/
/*CA_4A_41A*/ #ifndef LTE_CACFG_CA_4A_41A_CC1_PDATA_PT1_H
/*CA_4A_41A*/ #define LTE_CACFG_CA_4A_41A_CC1_PDATA_PT1_H       LTE_PDATA_OFF
/*CA_4A_41A*/ #endif
/*CA_4A_41A*/
/*CA_4A_41A*/ #ifndef LTE_CACFG_CA_4A_41A_CC1_PDATA_PT2_H
/*CA_4A_41A*/ #define LTE_CACFG_CA_4A_41A_CC1_PDATA_PT2_H       LTE_PDATA_OFF
/*CA_4A_41A*/ #endif
/*CA_4A_41A*/
/*CA_4A_41A*/ #ifndef LTE_CACFG_CA_4A_41A_CC1_PDATA_PT3_H
/*CA_4A_41A*/ #define LTE_CACFG_CA_4A_41A_CC1_PDATA_PT3_H       LTE_PDATA_OFF
/*CA_4A_41A*/ #endif
/*CA_4A_41A*/
/*CA_4A_41A*/ #ifndef LTE_CACFG_CA_4A_41A_CC1_PDATA_PRANT_H
/*CA_4A_41A*/ #define LTE_CACFG_CA_4A_41A_CC1_PDATA_PRANT_H     LTE_PDATA_OFF
/*CA_4A_41A*/ #endif
/*CA_4A_41A*/
/*CA_4A_41A*/ #ifndef LTE_CACFG_CA_4A_41A_CC1_PDATA_PTANT_H
/*CA_4A_41A*/ #define LTE_CACFG_CA_4A_41A_CC1_PDATA_PTANT_H     LTE_PDATA_OFF
/*CA_4A_41A*/ #endif

/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

/*CA_5A_7A*/ #ifndef LTE_CACFG_CA_5A_7A_CC0_PDATA_PR1_H
/*CA_5A_7A*/ #define LTE_CACFG_CA_5A_7A_CC0_PDATA_PR1_H       LTE_PDATA_OFF
/*CA_5A_7A*/ #endif
/*CA_5A_7A*/
/*CA_5A_7A*/ #ifndef LTE_CACFG_CA_5A_7A_CC0_PDATA_PR2_H
/*CA_5A_7A*/ #define LTE_CACFG_CA_5A_7A_CC0_PDATA_PR2_H       LTE_PDATA_OFF
/*CA_5A_7A*/ #endif
/*CA_5A_7A*/
/*CA_5A_7A*/ #ifndef LTE_CACFG_CA_5A_7A_CC0_PDATA_PR3_H
/*CA_5A_7A*/ #define LTE_CACFG_CA_5A_7A_CC0_PDATA_PR3_H       LTE_PDATA_OFF
/*CA_5A_7A*/ #endif
/*CA_5A_7A*/
/*CA_5A_7A*/ #ifndef LTE_CACFG_CA_5A_7A_CC0_PDATA_PT1_H
/*CA_5A_7A*/ #define LTE_CACFG_CA_5A_7A_CC0_PDATA_PT1_H       LTE_PDATA_OFF
/*CA_5A_7A*/ #endif
/*CA_5A_7A*/
/*CA_5A_7A*/ #ifndef LTE_CACFG_CA_5A_7A_CC0_PDATA_PT2_H
/*CA_5A_7A*/ #define LTE_CACFG_CA_5A_7A_CC0_PDATA_PT2_H       LTE_PDATA_OFF
/*CA_5A_7A*/ #endif
/*CA_5A_7A*/
/*CA_5A_7A*/ #ifndef LTE_CACFG_CA_5A_7A_CC0_PDATA_PT3_H
/*CA_5A_7A*/ #define LTE_CACFG_CA_5A_7A_CC0_PDATA_PT3_H       LTE_PDATA_OFF
/*CA_5A_7A*/ #endif
/*CA_5A_7A*/
/*CA_5A_7A*/ #ifndef LTE_CACFG_CA_5A_7A_CC0_PDATA_PRANT_H
/*CA_5A_7A*/ #define LTE_CACFG_CA_5A_7A_CC0_PDATA_PRANT_H     LTE_PDATA_OFF
/*CA_5A_7A*/ #endif
/*CA_5A_7A*/
/*CA_5A_7A*/ #ifndef LTE_CACFG_CA_5A_7A_CC0_PDATA_PTANT_H
/*CA_5A_7A*/ #define LTE_CACFG_CA_5A_7A_CC0_PDATA_PTANT_H     LTE_PDATA_OFF
/*CA_5A_7A*/ #endif
/*CA_5A_7A*/
/*CA_5A_7A*/ #ifndef LTE_CACFG_CA_5A_7A_CC1_PDATA_PR1_H
/*CA_5A_7A*/ #define LTE_CACFG_CA_5A_7A_CC1_PDATA_PR1_H       LTE_PDATA_OFF
/*CA_5A_7A*/ #endif
/*CA_5A_7A*/
/*CA_5A_7A*/ #ifndef LTE_CACFG_CA_5A_7A_CC1_PDATA_PR2_H
/*CA_5A_7A*/ #define LTE_CACFG_CA_5A_7A_CC1_PDATA_PR2_H       LTE_PDATA_OFF
/*CA_5A_7A*/ #endif
/*CA_5A_7A*/
/*CA_5A_7A*/ #ifndef LTE_CACFG_CA_5A_7A_CC1_PDATA_PR3_H
/*CA_5A_7A*/ #define LTE_CACFG_CA_5A_7A_CC1_PDATA_PR3_H       LTE_PDATA_OFF
/*CA_5A_7A*/ #endif
/*CA_5A_7A*/
/*CA_5A_7A*/ #ifndef LTE_CACFG_CA_5A_7A_CC1_PDATA_PT1_H
/*CA_5A_7A*/ #define LTE_CACFG_CA_5A_7A_CC1_PDATA_PT1_H       LTE_PDATA_OFF
/*CA_5A_7A*/ #endif
/*CA_5A_7A*/
/*CA_5A_7A*/ #ifndef LTE_CACFG_CA_5A_7A_CC1_PDATA_PT2_H
/*CA_5A_7A*/ #define LTE_CACFG_CA_5A_7A_CC1_PDATA_PT2_H       LTE_PDATA_OFF
/*CA_5A_7A*/ #endif
/*CA_5A_7A*/
/*CA_5A_7A*/ #ifndef LTE_CACFG_CA_5A_7A_CC1_PDATA_PT3_H
/*CA_5A_7A*/ #define LTE_CACFG_CA_5A_7A_CC1_PDATA_PT3_H       LTE_PDATA_OFF
/*CA_5A_7A*/ #endif
/*CA_5A_7A*/
/*CA_5A_7A*/ #ifndef LTE_CACFG_CA_5A_7A_CC1_PDATA_PRANT_H
/*CA_5A_7A*/ #define LTE_CACFG_CA_5A_7A_CC1_PDATA_PRANT_H     LTE_PDATA_OFF
/*CA_5A_7A*/ #endif
/*CA_5A_7A*/
/*CA_5A_7A*/ #ifndef LTE_CACFG_CA_5A_7A_CC1_PDATA_PTANT_H
/*CA_5A_7A*/ #define LTE_CACFG_CA_5A_7A_CC1_PDATA_PTANT_H     LTE_PDATA_OFF
/*CA_5A_7A*/ #endif

/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

/*CA_5A_12A*/ #ifndef LTE_CACFG_CA_5A_12A_CC0_PDATA_PR1_H
/*CA_5A_12A*/ #define LTE_CACFG_CA_5A_12A_CC0_PDATA_PR1_H       LTE_PDATA_OFF
/*CA_5A_12A*/ #endif
/*CA_5A_12A*/
/*CA_5A_12A*/ #ifndef LTE_CACFG_CA_5A_12A_CC0_PDATA_PR2_H
/*CA_5A_12A*/ #define LTE_CACFG_CA_5A_12A_CC0_PDATA_PR2_H       LTE_PDATA_OFF
/*CA_5A_12A*/ #endif
/*CA_5A_12A*/
/*CA_5A_12A*/ #ifndef LTE_CACFG_CA_5A_12A_CC0_PDATA_PR3_H
/*CA_5A_12A*/ #define LTE_CACFG_CA_5A_12A_CC0_PDATA_PR3_H       LTE_PDATA_OFF
/*CA_5A_12A*/ #endif
/*CA_5A_12A*/
/*CA_5A_12A*/ #ifndef LTE_CACFG_CA_5A_12A_CC0_PDATA_PT1_H
/*CA_5A_12A*/ #define LTE_CACFG_CA_5A_12A_CC0_PDATA_PT1_H       LTE_PDATA_OFF
/*CA_5A_12A*/ #endif
/*CA_5A_12A*/
/*CA_5A_12A*/ #ifndef LTE_CACFG_CA_5A_12A_CC0_PDATA_PT2_H
/*CA_5A_12A*/ #define LTE_CACFG_CA_5A_12A_CC0_PDATA_PT2_H       LTE_PDATA_OFF
/*CA_5A_12A*/ #endif
/*CA_5A_12A*/
/*CA_5A_12A*/ #ifndef LTE_CACFG_CA_5A_12A_CC0_PDATA_PT3_H
/*CA_5A_12A*/ #define LTE_CACFG_CA_5A_12A_CC0_PDATA_PT3_H       LTE_PDATA_OFF
/*CA_5A_12A*/ #endif
/*CA_5A_12A*/
/*CA_5A_12A*/ #ifndef LTE_CACFG_CA_5A_12A_CC0_PDATA_PRANT_H
/*CA_5A_12A*/ #define LTE_CACFG_CA_5A_12A_CC0_PDATA_PRANT_H     LTE_PDATA_OFF
/*CA_5A_12A*/ #endif
/*CA_5A_12A*/
/*CA_5A_12A*/ #ifndef LTE_CACFG_CA_5A_12A_CC0_PDATA_PTANT_H
/*CA_5A_12A*/ #define LTE_CACFG_CA_5A_12A_CC0_PDATA_PTANT_H     LTE_PDATA_OFF
/*CA_5A_12A*/ #endif
/*CA_5A_12A*/
/*CA_5A_12A*/ #ifndef LTE_CACFG_CA_5A_12A_CC1_PDATA_PR1_H
/*CA_5A_12A*/ #define LTE_CACFG_CA_5A_12A_CC1_PDATA_PR1_H       LTE_PDATA_OFF
/*CA_5A_12A*/ #endif
/*CA_5A_12A*/
/*CA_5A_12A*/ #ifndef LTE_CACFG_CA_5A_12A_CC1_PDATA_PR2_H
/*CA_5A_12A*/ #define LTE_CACFG_CA_5A_12A_CC1_PDATA_PR2_H       LTE_PDATA_OFF
/*CA_5A_12A*/ #endif
/*CA_5A_12A*/
/*CA_5A_12A*/ #ifndef LTE_CACFG_CA_5A_12A_CC1_PDATA_PR3_H
/*CA_5A_12A*/ #define LTE_CACFG_CA_5A_12A_CC1_PDATA_PR3_H       LTE_PDATA_OFF
/*CA_5A_12A*/ #endif
/*CA_5A_12A*/
/*CA_5A_12A*/ #ifndef LTE_CACFG_CA_5A_12A_CC1_PDATA_PT1_H
/*CA_5A_12A*/ #define LTE_CACFG_CA_5A_12A_CC1_PDATA_PT1_H       LTE_PDATA_OFF
/*CA_5A_12A*/ #endif
/*CA_5A_12A*/
/*CA_5A_12A*/ #ifndef LTE_CACFG_CA_5A_12A_CC1_PDATA_PT2_H
/*CA_5A_12A*/ #define LTE_CACFG_CA_5A_12A_CC1_PDATA_PT2_H       LTE_PDATA_OFF
/*CA_5A_12A*/ #endif
/*CA_5A_12A*/
/*CA_5A_12A*/ #ifndef LTE_CACFG_CA_5A_12A_CC1_PDATA_PT3_H
/*CA_5A_12A*/ #define LTE_CACFG_CA_5A_12A_CC1_PDATA_PT3_H       LTE_PDATA_OFF
/*CA_5A_12A*/ #endif
/*CA_5A_12A*/
/*CA_5A_12A*/ #ifndef LTE_CACFG_CA_5A_12A_CC1_PDATA_PRANT_H
/*CA_5A_12A*/ #define LTE_CACFG_CA_5A_12A_CC1_PDATA_PRANT_H     LTE_PDATA_OFF
/*CA_5A_12A*/ #endif
/*CA_5A_12A*/
/*CA_5A_12A*/ #ifndef LTE_CACFG_CA_5A_12A_CC1_PDATA_PTANT_H
/*CA_5A_12A*/ #define LTE_CACFG_CA_5A_12A_CC1_PDATA_PTANT_H     LTE_PDATA_OFF
/*CA_5A_12A*/ #endif

/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

/*CA_5A_17A*/ #ifndef LTE_CACFG_CA_5A_17A_CC0_PDATA_PR1_H
/*CA_5A_17A*/ #define LTE_CACFG_CA_5A_17A_CC0_PDATA_PR1_H       LTE_PDATA_OFF
/*CA_5A_17A*/ #endif
/*CA_5A_17A*/
/*CA_5A_17A*/ #ifndef LTE_CACFG_CA_5A_17A_CC0_PDATA_PR2_H
/*CA_5A_17A*/ #define LTE_CACFG_CA_5A_17A_CC0_PDATA_PR2_H       LTE_PDATA_OFF
/*CA_5A_17A*/ #endif
/*CA_5A_17A*/
/*CA_5A_17A*/ #ifndef LTE_CACFG_CA_5A_17A_CC0_PDATA_PR3_H
/*CA_5A_17A*/ #define LTE_CACFG_CA_5A_17A_CC0_PDATA_PR3_H       LTE_PDATA_OFF
/*CA_5A_17A*/ #endif
/*CA_5A_17A*/
/*CA_5A_17A*/ #ifndef LTE_CACFG_CA_5A_17A_CC0_PDATA_PT1_H
/*CA_5A_17A*/ #define LTE_CACFG_CA_5A_17A_CC0_PDATA_PT1_H       LTE_PDATA_OFF
/*CA_5A_17A*/ #endif
/*CA_5A_17A*/
/*CA_5A_17A*/ #ifndef LTE_CACFG_CA_5A_17A_CC0_PDATA_PT2_H
/*CA_5A_17A*/ #define LTE_CACFG_CA_5A_17A_CC0_PDATA_PT2_H       LTE_PDATA_OFF
/*CA_5A_17A*/ #endif
/*CA_5A_17A*/
/*CA_5A_17A*/ #ifndef LTE_CACFG_CA_5A_17A_CC0_PDATA_PT3_H
/*CA_5A_17A*/ #define LTE_CACFG_CA_5A_17A_CC0_PDATA_PT3_H       LTE_PDATA_OFF
/*CA_5A_17A*/ #endif
/*CA_5A_17A*/
/*CA_5A_17A*/ #ifndef LTE_CACFG_CA_5A_17A_CC0_PDATA_PRANT_H
/*CA_5A_17A*/ #define LTE_CACFG_CA_5A_17A_CC0_PDATA_PRANT_H     LTE_PDATA_OFF
/*CA_5A_17A*/ #endif
/*CA_5A_17A*/
/*CA_5A_17A*/ #ifndef LTE_CACFG_CA_5A_17A_CC0_PDATA_PTANT_H
/*CA_5A_17A*/ #define LTE_CACFG_CA_5A_17A_CC0_PDATA_PTANT_H     LTE_PDATA_OFF
/*CA_5A_17A*/ #endif
/*CA_5A_17A*/
/*CA_5A_17A*/ #ifndef LTE_CACFG_CA_5A_17A_CC1_PDATA_PR1_H
/*CA_5A_17A*/ #define LTE_CACFG_CA_5A_17A_CC1_PDATA_PR1_H       LTE_PDATA_OFF
/*CA_5A_17A*/ #endif
/*CA_5A_17A*/
/*CA_5A_17A*/ #ifndef LTE_CACFG_CA_5A_17A_CC1_PDATA_PR2_H
/*CA_5A_17A*/ #define LTE_CACFG_CA_5A_17A_CC1_PDATA_PR2_H       LTE_PDATA_OFF
/*CA_5A_17A*/ #endif
/*CA_5A_17A*/
/*CA_5A_17A*/ #ifndef LTE_CACFG_CA_5A_17A_CC1_PDATA_PR3_H
/*CA_5A_17A*/ #define LTE_CACFG_CA_5A_17A_CC1_PDATA_PR3_H       LTE_PDATA_OFF
/*CA_5A_17A*/ #endif
/*CA_5A_17A*/
/*CA_5A_17A*/ #ifndef LTE_CACFG_CA_5A_17A_CC1_PDATA_PT1_H
/*CA_5A_17A*/ #define LTE_CACFG_CA_5A_17A_CC1_PDATA_PT1_H       LTE_PDATA_OFF
/*CA_5A_17A*/ #endif
/*CA_5A_17A*/
/*CA_5A_17A*/ #ifndef LTE_CACFG_CA_5A_17A_CC1_PDATA_PT2_H
/*CA_5A_17A*/ #define LTE_CACFG_CA_5A_17A_CC1_PDATA_PT2_H       LTE_PDATA_OFF
/*CA_5A_17A*/ #endif
/*CA_5A_17A*/
/*CA_5A_17A*/ #ifndef LTE_CACFG_CA_5A_17A_CC1_PDATA_PT3_H
/*CA_5A_17A*/ #define LTE_CACFG_CA_5A_17A_CC1_PDATA_PT3_H       LTE_PDATA_OFF
/*CA_5A_17A*/ #endif
/*CA_5A_17A*/
/*CA_5A_17A*/ #ifndef LTE_CACFG_CA_5A_17A_CC1_PDATA_PRANT_H
/*CA_5A_17A*/ #define LTE_CACFG_CA_5A_17A_CC1_PDATA_PRANT_H     LTE_PDATA_OFF
/*CA_5A_17A*/ #endif
/*CA_5A_17A*/
/*CA_5A_17A*/ #ifndef LTE_CACFG_CA_5A_17A_CC1_PDATA_PTANT_H
/*CA_5A_17A*/ #define LTE_CACFG_CA_5A_17A_CC1_PDATA_PTANT_H     LTE_PDATA_OFF
/*CA_5A_17A*/ #endif

/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

/*CA_5A_25A*/ #ifndef LTE_CACFG_CA_5A_25A_CC0_PDATA_PR1_H
/*CA_5A_25A*/ #define LTE_CACFG_CA_5A_25A_CC0_PDATA_PR1_H       LTE_PDATA_OFF
/*CA_5A_25A*/ #endif
/*CA_5A_25A*/
/*CA_5A_25A*/ #ifndef LTE_CACFG_CA_5A_25A_CC0_PDATA_PR2_H
/*CA_5A_25A*/ #define LTE_CACFG_CA_5A_25A_CC0_PDATA_PR2_H       LTE_PDATA_OFF
/*CA_5A_25A*/ #endif
/*CA_5A_25A*/
/*CA_5A_25A*/ #ifndef LTE_CACFG_CA_5A_25A_CC0_PDATA_PR3_H
/*CA_5A_25A*/ #define LTE_CACFG_CA_5A_25A_CC0_PDATA_PR3_H       LTE_PDATA_OFF
/*CA_5A_25A*/ #endif
/*CA_5A_25A*/
/*CA_5A_25A*/ #ifndef LTE_CACFG_CA_5A_25A_CC0_PDATA_PT1_H
/*CA_5A_25A*/ #define LTE_CACFG_CA_5A_25A_CC0_PDATA_PT1_H       LTE_PDATA_OFF
/*CA_5A_25A*/ #endif
/*CA_5A_25A*/
/*CA_5A_25A*/ #ifndef LTE_CACFG_CA_5A_25A_CC0_PDATA_PT2_H
/*CA_5A_25A*/ #define LTE_CACFG_CA_5A_25A_CC0_PDATA_PT2_H       LTE_PDATA_OFF
/*CA_5A_25A*/ #endif
/*CA_5A_25A*/
/*CA_5A_25A*/ #ifndef LTE_CACFG_CA_5A_25A_CC0_PDATA_PT3_H
/*CA_5A_25A*/ #define LTE_CACFG_CA_5A_25A_CC0_PDATA_PT3_H       LTE_PDATA_OFF
/*CA_5A_25A*/ #endif
/*CA_5A_25A*/
/*CA_5A_25A*/ #ifndef LTE_CACFG_CA_5A_25A_CC0_PDATA_PRANT_H
/*CA_5A_25A*/ #define LTE_CACFG_CA_5A_25A_CC0_PDATA_PRANT_H     LTE_PDATA_OFF
/*CA_5A_25A*/ #endif
/*CA_5A_25A*/
/*CA_5A_25A*/ #ifndef LTE_CACFG_CA_5A_25A_CC0_PDATA_PTANT_H
/*CA_5A_25A*/ #define LTE_CACFG_CA_5A_25A_CC0_PDATA_PTANT_H     LTE_PDATA_OFF
/*CA_5A_25A*/ #endif
/*CA_5A_25A*/
/*CA_5A_25A*/ #ifndef LTE_CACFG_CA_5A_25A_CC1_PDATA_PR1_H
/*CA_5A_25A*/ #define LTE_CACFG_CA_5A_25A_CC1_PDATA_PR1_H       LTE_PDATA_OFF
/*CA_5A_25A*/ #endif
/*CA_5A_25A*/
/*CA_5A_25A*/ #ifndef LTE_CACFG_CA_5A_25A_CC1_PDATA_PR2_H
/*CA_5A_25A*/ #define LTE_CACFG_CA_5A_25A_CC1_PDATA_PR2_H       LTE_PDATA_OFF
/*CA_5A_25A*/ #endif
/*CA_5A_25A*/
/*CA_5A_25A*/ #ifndef LTE_CACFG_CA_5A_25A_CC1_PDATA_PR3_H
/*CA_5A_25A*/ #define LTE_CACFG_CA_5A_25A_CC1_PDATA_PR3_H       LTE_PDATA_OFF
/*CA_5A_25A*/ #endif
/*CA_5A_25A*/
/*CA_5A_25A*/ #ifndef LTE_CACFG_CA_5A_25A_CC1_PDATA_PT1_H
/*CA_5A_25A*/ #define LTE_CACFG_CA_5A_25A_CC1_PDATA_PT1_H       LTE_PDATA_OFF
/*CA_5A_25A*/ #endif
/*CA_5A_25A*/
/*CA_5A_25A*/ #ifndef LTE_CACFG_CA_5A_25A_CC1_PDATA_PT2_H
/*CA_5A_25A*/ #define LTE_CACFG_CA_5A_25A_CC1_PDATA_PT2_H       LTE_PDATA_OFF
/*CA_5A_25A*/ #endif
/*CA_5A_25A*/
/*CA_5A_25A*/ #ifndef LTE_CACFG_CA_5A_25A_CC1_PDATA_PT3_H
/*CA_5A_25A*/ #define LTE_CACFG_CA_5A_25A_CC1_PDATA_PT3_H       LTE_PDATA_OFF
/*CA_5A_25A*/ #endif
/*CA_5A_25A*/
/*CA_5A_25A*/ #ifndef LTE_CACFG_CA_5A_25A_CC1_PDATA_PRANT_H
/*CA_5A_25A*/ #define LTE_CACFG_CA_5A_25A_CC1_PDATA_PRANT_H     LTE_PDATA_OFF
/*CA_5A_25A*/ #endif
/*CA_5A_25A*/
/*CA_5A_25A*/ #ifndef LTE_CACFG_CA_5A_25A_CC1_PDATA_PTANT_H
/*CA_5A_25A*/ #define LTE_CACFG_CA_5A_25A_CC1_PDATA_PTANT_H     LTE_PDATA_OFF
/*CA_5A_25A*/ #endif

/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

/*CA_5A_30A*/ #ifndef LTE_CACFG_CA_5A_30A_CC0_PDATA_PR1_H
/*CA_5A_30A*/ #define LTE_CACFG_CA_5A_30A_CC0_PDATA_PR1_H       LTE_PDATA_OFF
/*CA_5A_30A*/ #endif
/*CA_5A_30A*/
/*CA_5A_30A*/ #ifndef LTE_CACFG_CA_5A_30A_CC0_PDATA_PR2_H
/*CA_5A_30A*/ #define LTE_CACFG_CA_5A_30A_CC0_PDATA_PR2_H       LTE_PDATA_OFF
/*CA_5A_30A*/ #endif
/*CA_5A_30A*/
/*CA_5A_30A*/ #ifndef LTE_CACFG_CA_5A_30A_CC0_PDATA_PR3_H
/*CA_5A_30A*/ #define LTE_CACFG_CA_5A_30A_CC0_PDATA_PR3_H       LTE_PDATA_OFF
/*CA_5A_30A*/ #endif
/*CA_5A_30A*/
/*CA_5A_30A*/ #ifndef LTE_CACFG_CA_5A_30A_CC0_PDATA_PT1_H
/*CA_5A_30A*/ #define LTE_CACFG_CA_5A_30A_CC0_PDATA_PT1_H       LTE_PDATA_OFF
/*CA_5A_30A*/ #endif
/*CA_5A_30A*/
/*CA_5A_30A*/ #ifndef LTE_CACFG_CA_5A_30A_CC0_PDATA_PT2_H
/*CA_5A_30A*/ #define LTE_CACFG_CA_5A_30A_CC0_PDATA_PT2_H       LTE_PDATA_OFF
/*CA_5A_30A*/ #endif
/*CA_5A_30A*/
/*CA_5A_30A*/ #ifndef LTE_CACFG_CA_5A_30A_CC0_PDATA_PT3_H
/*CA_5A_30A*/ #define LTE_CACFG_CA_5A_30A_CC0_PDATA_PT3_H       LTE_PDATA_OFF
/*CA_5A_30A*/ #endif
/*CA_5A_30A*/
/*CA_5A_30A*/ #ifndef LTE_CACFG_CA_5A_30A_CC0_PDATA_PRANT_H
/*CA_5A_30A*/ #define LTE_CACFG_CA_5A_30A_CC0_PDATA_PRANT_H     LTE_PDATA_OFF
/*CA_5A_30A*/ #endif
/*CA_5A_30A*/
/*CA_5A_30A*/ #ifndef LTE_CACFG_CA_5A_30A_CC0_PDATA_PTANT_H
/*CA_5A_30A*/ #define LTE_CACFG_CA_5A_30A_CC0_PDATA_PTANT_H     LTE_PDATA_OFF
/*CA_5A_30A*/ #endif
/*CA_5A_30A*/
/*CA_5A_30A*/ #ifndef LTE_CACFG_CA_5A_30A_CC1_PDATA_PR1_H
/*CA_5A_30A*/ #define LTE_CACFG_CA_5A_30A_CC1_PDATA_PR1_H       LTE_PDATA_OFF
/*CA_5A_30A*/ #endif
/*CA_5A_30A*/
/*CA_5A_30A*/ #ifndef LTE_CACFG_CA_5A_30A_CC1_PDATA_PR2_H
/*CA_5A_30A*/ #define LTE_CACFG_CA_5A_30A_CC1_PDATA_PR2_H       LTE_PDATA_OFF
/*CA_5A_30A*/ #endif
/*CA_5A_30A*/
/*CA_5A_30A*/ #ifndef LTE_CACFG_CA_5A_30A_CC1_PDATA_PR3_H
/*CA_5A_30A*/ #define LTE_CACFG_CA_5A_30A_CC1_PDATA_PR3_H       LTE_PDATA_OFF
/*CA_5A_30A*/ #endif
/*CA_5A_30A*/
/*CA_5A_30A*/ #ifndef LTE_CACFG_CA_5A_30A_CC1_PDATA_PT1_H
/*CA_5A_30A*/ #define LTE_CACFG_CA_5A_30A_CC1_PDATA_PT1_H       LTE_PDATA_OFF
/*CA_5A_30A*/ #endif
/*CA_5A_30A*/
/*CA_5A_30A*/ #ifndef LTE_CACFG_CA_5A_30A_CC1_PDATA_PT2_H
/*CA_5A_30A*/ #define LTE_CACFG_CA_5A_30A_CC1_PDATA_PT2_H       LTE_PDATA_OFF
/*CA_5A_30A*/ #endif
/*CA_5A_30A*/
/*CA_5A_30A*/ #ifndef LTE_CACFG_CA_5A_30A_CC1_PDATA_PT3_H
/*CA_5A_30A*/ #define LTE_CACFG_CA_5A_30A_CC1_PDATA_PT3_H       LTE_PDATA_OFF
/*CA_5A_30A*/ #endif
/*CA_5A_30A*/
/*CA_5A_30A*/ #ifndef LTE_CACFG_CA_5A_30A_CC1_PDATA_PRANT_H
/*CA_5A_30A*/ #define LTE_CACFG_CA_5A_30A_CC1_PDATA_PRANT_H     LTE_PDATA_OFF
/*CA_5A_30A*/ #endif
/*CA_5A_30A*/
/*CA_5A_30A*/ #ifndef LTE_CACFG_CA_5A_30A_CC1_PDATA_PTANT_H
/*CA_5A_30A*/ #define LTE_CACFG_CA_5A_30A_CC1_PDATA_PTANT_H     LTE_PDATA_OFF
/*CA_5A_30A*/ #endif

/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

/*CA_7A_8A*/ #ifndef LTE_CACFG_CA_7A_8A_CC0_PDATA_PR1_H
/*CA_7A_8A*/ #define LTE_CACFG_CA_7A_8A_CC0_PDATA_PR1_H       LTE_PDATA_OFF
/*CA_7A_8A*/ #endif
/*CA_7A_8A*/
/*CA_7A_8A*/ #ifndef LTE_CACFG_CA_7A_8A_CC0_PDATA_PR2_H
/*CA_7A_8A*/ #define LTE_CACFG_CA_7A_8A_CC0_PDATA_PR2_H       LTE_PDATA_OFF
/*CA_7A_8A*/ #endif
/*CA_7A_8A*/
/*CA_7A_8A*/ #ifndef LTE_CACFG_CA_7A_8A_CC0_PDATA_PR3_H
/*CA_7A_8A*/ #define LTE_CACFG_CA_7A_8A_CC0_PDATA_PR3_H       LTE_PDATA_OFF
/*CA_7A_8A*/ #endif
/*CA_7A_8A*/
/*CA_7A_8A*/ #ifndef LTE_CACFG_CA_7A_8A_CC0_PDATA_PT1_H
/*CA_7A_8A*/ #define LTE_CACFG_CA_7A_8A_CC0_PDATA_PT1_H       LTE_PDATA_OFF
/*CA_7A_8A*/ #endif
/*CA_7A_8A*/
/*CA_7A_8A*/ #ifndef LTE_CACFG_CA_7A_8A_CC0_PDATA_PT2_H
/*CA_7A_8A*/ #define LTE_CACFG_CA_7A_8A_CC0_PDATA_PT2_H       LTE_PDATA_OFF
/*CA_7A_8A*/ #endif
/*CA_7A_8A*/
/*CA_7A_8A*/ #ifndef LTE_CACFG_CA_7A_8A_CC0_PDATA_PT3_H
/*CA_7A_8A*/ #define LTE_CACFG_CA_7A_8A_CC0_PDATA_PT3_H       LTE_PDATA_OFF
/*CA_7A_8A*/ #endif
/*CA_7A_8A*/
/*CA_7A_8A*/ #ifndef LTE_CACFG_CA_7A_8A_CC0_PDATA_PRANT_H
/*CA_7A_8A*/ #define LTE_CACFG_CA_7A_8A_CC0_PDATA_PRANT_H     LTE_PDATA_OFF
/*CA_7A_8A*/ #endif
/*CA_7A_8A*/
/*CA_7A_8A*/ #ifndef LTE_CACFG_CA_7A_8A_CC0_PDATA_PTANT_H
/*CA_7A_8A*/ #define LTE_CACFG_CA_7A_8A_CC0_PDATA_PTANT_H     LTE_PDATA_OFF
/*CA_7A_8A*/ #endif
/*CA_7A_8A*/
/*CA_7A_8A*/ #ifndef LTE_CACFG_CA_7A_8A_CC1_PDATA_PR1_H
/*CA_7A_8A*/ #define LTE_CACFG_CA_7A_8A_CC1_PDATA_PR1_H       LTE_PDATA_OFF
/*CA_7A_8A*/ #endif
/*CA_7A_8A*/
/*CA_7A_8A*/ #ifndef LTE_CACFG_CA_7A_8A_CC1_PDATA_PR2_H
/*CA_7A_8A*/ #define LTE_CACFG_CA_7A_8A_CC1_PDATA_PR2_H       LTE_PDATA_OFF
/*CA_7A_8A*/ #endif
/*CA_7A_8A*/
/*CA_7A_8A*/ #ifndef LTE_CACFG_CA_7A_8A_CC1_PDATA_PR3_H
/*CA_7A_8A*/ #define LTE_CACFG_CA_7A_8A_CC1_PDATA_PR3_H       LTE_PDATA_OFF
/*CA_7A_8A*/ #endif
/*CA_7A_8A*/
/*CA_7A_8A*/ #ifndef LTE_CACFG_CA_7A_8A_CC1_PDATA_PT1_H
/*CA_7A_8A*/ #define LTE_CACFG_CA_7A_8A_CC1_PDATA_PT1_H       LTE_PDATA_OFF
/*CA_7A_8A*/ #endif
/*CA_7A_8A*/
/*CA_7A_8A*/ #ifndef LTE_CACFG_CA_7A_8A_CC1_PDATA_PT2_H
/*CA_7A_8A*/ #define LTE_CACFG_CA_7A_8A_CC1_PDATA_PT2_H       LTE_PDATA_OFF
/*CA_7A_8A*/ #endif
/*CA_7A_8A*/
/*CA_7A_8A*/ #ifndef LTE_CACFG_CA_7A_8A_CC1_PDATA_PT3_H
/*CA_7A_8A*/ #define LTE_CACFG_CA_7A_8A_CC1_PDATA_PT3_H       LTE_PDATA_OFF
/*CA_7A_8A*/ #endif
/*CA_7A_8A*/
/*CA_7A_8A*/ #ifndef LTE_CACFG_CA_7A_8A_CC1_PDATA_PRANT_H
/*CA_7A_8A*/ #define LTE_CACFG_CA_7A_8A_CC1_PDATA_PRANT_H     LTE_PDATA_OFF
/*CA_7A_8A*/ #endif
/*CA_7A_8A*/
/*CA_7A_8A*/ #ifndef LTE_CACFG_CA_7A_8A_CC1_PDATA_PTANT_H
/*CA_7A_8A*/ #define LTE_CACFG_CA_7A_8A_CC1_PDATA_PTANT_H     LTE_PDATA_OFF
/*CA_7A_8A*/ #endif

/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

/*CA_7A_20A*/ #ifndef LTE_CACFG_CA_7A_20A_CC0_PDATA_PR1_H
/*CA_7A_20A*/ #define LTE_CACFG_CA_7A_20A_CC0_PDATA_PR1_H       LTE_PDATA_OFF
/*CA_7A_20A*/ #endif
/*CA_7A_20A*/
/*CA_7A_20A*/ #ifndef LTE_CACFG_CA_7A_20A_CC0_PDATA_PR2_H
/*CA_7A_20A*/ #define LTE_CACFG_CA_7A_20A_CC0_PDATA_PR2_H       LTE_PDATA_OFF
/*CA_7A_20A*/ #endif
/*CA_7A_20A*/
/*CA_7A_20A*/ #ifndef LTE_CACFG_CA_7A_20A_CC0_PDATA_PR3_H
/*CA_7A_20A*/ #define LTE_CACFG_CA_7A_20A_CC0_PDATA_PR3_H       LTE_PDATA_OFF
/*CA_7A_20A*/ #endif
/*CA_7A_20A*/
/*CA_7A_20A*/ #ifndef LTE_CACFG_CA_7A_20A_CC0_PDATA_PT1_H
/*CA_7A_20A*/ #define LTE_CACFG_CA_7A_20A_CC0_PDATA_PT1_H       LTE_PDATA_OFF
/*CA_7A_20A*/ #endif
/*CA_7A_20A*/
/*CA_7A_20A*/ #ifndef LTE_CACFG_CA_7A_20A_CC0_PDATA_PT2_H
/*CA_7A_20A*/ #define LTE_CACFG_CA_7A_20A_CC0_PDATA_PT2_H       LTE_PDATA_OFF
/*CA_7A_20A*/ #endif
/*CA_7A_20A*/
/*CA_7A_20A*/ #ifndef LTE_CACFG_CA_7A_20A_CC0_PDATA_PT3_H
/*CA_7A_20A*/ #define LTE_CACFG_CA_7A_20A_CC0_PDATA_PT3_H       LTE_PDATA_OFF
/*CA_7A_20A*/ #endif
/*CA_7A_20A*/
/*CA_7A_20A*/ #ifndef LTE_CACFG_CA_7A_20A_CC0_PDATA_PRANT_H
/*CA_7A_20A*/ #define LTE_CACFG_CA_7A_20A_CC0_PDATA_PRANT_H     LTE_PDATA_OFF
/*CA_7A_20A*/ #endif
/*CA_7A_20A*/
/*CA_7A_20A*/ #ifndef LTE_CACFG_CA_7A_20A_CC0_PDATA_PTANT_H
/*CA_7A_20A*/ #define LTE_CACFG_CA_7A_20A_CC0_PDATA_PTANT_H     LTE_PDATA_OFF
/*CA_7A_20A*/ #endif
/*CA_7A_20A*/
/*CA_7A_20A*/ #ifndef LTE_CACFG_CA_7A_20A_CC1_PDATA_PR1_H
/*CA_7A_20A*/ #define LTE_CACFG_CA_7A_20A_CC1_PDATA_PR1_H       LTE_PDATA_OFF
/*CA_7A_20A*/ #endif
/*CA_7A_20A*/
/*CA_7A_20A*/ #ifndef LTE_CACFG_CA_7A_20A_CC1_PDATA_PR2_H
/*CA_7A_20A*/ #define LTE_CACFG_CA_7A_20A_CC1_PDATA_PR2_H       LTE_PDATA_OFF
/*CA_7A_20A*/ #endif
/*CA_7A_20A*/
/*CA_7A_20A*/ #ifndef LTE_CACFG_CA_7A_20A_CC1_PDATA_PR3_H
/*CA_7A_20A*/ #define LTE_CACFG_CA_7A_20A_CC1_PDATA_PR3_H       LTE_PDATA_OFF
/*CA_7A_20A*/ #endif
/*CA_7A_20A*/
/*CA_7A_20A*/ #ifndef LTE_CACFG_CA_7A_20A_CC1_PDATA_PT1_H
/*CA_7A_20A*/ #define LTE_CACFG_CA_7A_20A_CC1_PDATA_PT1_H       LTE_PDATA_OFF
/*CA_7A_20A*/ #endif
/*CA_7A_20A*/
/*CA_7A_20A*/ #ifndef LTE_CACFG_CA_7A_20A_CC1_PDATA_PT2_H
/*CA_7A_20A*/ #define LTE_CACFG_CA_7A_20A_CC1_PDATA_PT2_H       LTE_PDATA_OFF
/*CA_7A_20A*/ #endif
/*CA_7A_20A*/
/*CA_7A_20A*/ #ifndef LTE_CACFG_CA_7A_20A_CC1_PDATA_PT3_H
/*CA_7A_20A*/ #define LTE_CACFG_CA_7A_20A_CC1_PDATA_PT3_H       LTE_PDATA_OFF
/*CA_7A_20A*/ #endif
/*CA_7A_20A*/
/*CA_7A_20A*/ #ifndef LTE_CACFG_CA_7A_20A_CC1_PDATA_PRANT_H
/*CA_7A_20A*/ #define LTE_CACFG_CA_7A_20A_CC1_PDATA_PRANT_H     LTE_PDATA_OFF
/*CA_7A_20A*/ #endif
/*CA_7A_20A*/
/*CA_7A_20A*/ #ifndef LTE_CACFG_CA_7A_20A_CC1_PDATA_PTANT_H
/*CA_7A_20A*/ #define LTE_CACFG_CA_7A_20A_CC1_PDATA_PTANT_H     LTE_PDATA_OFF
/*CA_7A_20A*/ #endif

/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

/*CA_7A_28A*/ #ifndef LTE_CACFG_CA_7A_28A_CC0_PDATA_PR1_H
/*CA_7A_28A*/ #define LTE_CACFG_CA_7A_28A_CC0_PDATA_PR1_H       LTE_PDATA_OFF
/*CA_7A_28A*/ #endif
/*CA_7A_28A*/
/*CA_7A_28A*/ #ifndef LTE_CACFG_CA_7A_28A_CC0_PDATA_PR2_H
/*CA_7A_28A*/ #define LTE_CACFG_CA_7A_28A_CC0_PDATA_PR2_H       LTE_PDATA_OFF
/*CA_7A_28A*/ #endif
/*CA_7A_28A*/
/*CA_7A_28A*/ #ifndef LTE_CACFG_CA_7A_28A_CC0_PDATA_PR3_H
/*CA_7A_28A*/ #define LTE_CACFG_CA_7A_28A_CC0_PDATA_PR3_H       LTE_PDATA_OFF
/*CA_7A_28A*/ #endif
/*CA_7A_28A*/
/*CA_7A_28A*/ #ifndef LTE_CACFG_CA_7A_28A_CC0_PDATA_PT1_H
/*CA_7A_28A*/ #define LTE_CACFG_CA_7A_28A_CC0_PDATA_PT1_H       LTE_PDATA_OFF
/*CA_7A_28A*/ #endif
/*CA_7A_28A*/
/*CA_7A_28A*/ #ifndef LTE_CACFG_CA_7A_28A_CC0_PDATA_PT2_H
/*CA_7A_28A*/ #define LTE_CACFG_CA_7A_28A_CC0_PDATA_PT2_H       LTE_PDATA_OFF
/*CA_7A_28A*/ #endif
/*CA_7A_28A*/
/*CA_7A_28A*/ #ifndef LTE_CACFG_CA_7A_28A_CC0_PDATA_PT3_H
/*CA_7A_28A*/ #define LTE_CACFG_CA_7A_28A_CC0_PDATA_PT3_H       LTE_PDATA_OFF
/*CA_7A_28A*/ #endif
/*CA_7A_28A*/
/*CA_7A_28A*/ #ifndef LTE_CACFG_CA_7A_28A_CC0_PDATA_PRANT_H
/*CA_7A_28A*/ #define LTE_CACFG_CA_7A_28A_CC0_PDATA_PRANT_H     LTE_PDATA_OFF
/*CA_7A_28A*/ #endif
/*CA_7A_28A*/
/*CA_7A_28A*/ #ifndef LTE_CACFG_CA_7A_28A_CC0_PDATA_PTANT_H
/*CA_7A_28A*/ #define LTE_CACFG_CA_7A_28A_CC0_PDATA_PTANT_H     LTE_PDATA_OFF
/*CA_7A_28A*/ #endif
/*CA_7A_28A*/
/*CA_7A_28A*/ #ifndef LTE_CACFG_CA_7A_28A_CC1_PDATA_PR1_H
/*CA_7A_28A*/ #define LTE_CACFG_CA_7A_28A_CC1_PDATA_PR1_H       LTE_PDATA_OFF
/*CA_7A_28A*/ #endif
/*CA_7A_28A*/
/*CA_7A_28A*/ #ifndef LTE_CACFG_CA_7A_28A_CC1_PDATA_PR2_H
/*CA_7A_28A*/ #define LTE_CACFG_CA_7A_28A_CC1_PDATA_PR2_H       LTE_PDATA_OFF
/*CA_7A_28A*/ #endif
/*CA_7A_28A*/
/*CA_7A_28A*/ #ifndef LTE_CACFG_CA_7A_28A_CC1_PDATA_PR3_H
/*CA_7A_28A*/ #define LTE_CACFG_CA_7A_28A_CC1_PDATA_PR3_H       LTE_PDATA_OFF
/*CA_7A_28A*/ #endif
/*CA_7A_28A*/
/*CA_7A_28A*/ #ifndef LTE_CACFG_CA_7A_28A_CC1_PDATA_PT1_H
/*CA_7A_28A*/ #define LTE_CACFG_CA_7A_28A_CC1_PDATA_PT1_H       LTE_PDATA_OFF
/*CA_7A_28A*/ #endif
/*CA_7A_28A*/
/*CA_7A_28A*/ #ifndef LTE_CACFG_CA_7A_28A_CC1_PDATA_PT2_H
/*CA_7A_28A*/ #define LTE_CACFG_CA_7A_28A_CC1_PDATA_PT2_H       LTE_PDATA_OFF
/*CA_7A_28A*/ #endif
/*CA_7A_28A*/
/*CA_7A_28A*/ #ifndef LTE_CACFG_CA_7A_28A_CC1_PDATA_PT3_H
/*CA_7A_28A*/ #define LTE_CACFG_CA_7A_28A_CC1_PDATA_PT3_H       LTE_PDATA_OFF
/*CA_7A_28A*/ #endif
/*CA_7A_28A*/
/*CA_7A_28A*/ #ifndef LTE_CACFG_CA_7A_28A_CC1_PDATA_PRANT_H
/*CA_7A_28A*/ #define LTE_CACFG_CA_7A_28A_CC1_PDATA_PRANT_H     LTE_PDATA_OFF
/*CA_7A_28A*/ #endif
/*CA_7A_28A*/
/*CA_7A_28A*/ #ifndef LTE_CACFG_CA_7A_28A_CC1_PDATA_PTANT_H
/*CA_7A_28A*/ #define LTE_CACFG_CA_7A_28A_CC1_PDATA_PTANT_H     LTE_PDATA_OFF
/*CA_7A_28A*/ #endif

/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

/*CA_8A_20A*/ #ifndef LTE_CACFG_CA_8A_20A_CC0_PDATA_PR1_H
/*CA_8A_20A*/ #define LTE_CACFG_CA_8A_20A_CC0_PDATA_PR1_H       LTE_PDATA_OFF
/*CA_8A_20A*/ #endif
/*CA_8A_20A*/
/*CA_8A_20A*/ #ifndef LTE_CACFG_CA_8A_20A_CC0_PDATA_PR2_H
/*CA_8A_20A*/ #define LTE_CACFG_CA_8A_20A_CC0_PDATA_PR2_H       LTE_PDATA_OFF
/*CA_8A_20A*/ #endif
/*CA_8A_20A*/
/*CA_8A_20A*/ #ifndef LTE_CACFG_CA_8A_20A_CC0_PDATA_PR3_H
/*CA_8A_20A*/ #define LTE_CACFG_CA_8A_20A_CC0_PDATA_PR3_H       LTE_PDATA_OFF
/*CA_8A_20A*/ #endif
/*CA_8A_20A*/
/*CA_8A_20A*/ #ifndef LTE_CACFG_CA_8A_20A_CC0_PDATA_PT1_H
/*CA_8A_20A*/ #define LTE_CACFG_CA_8A_20A_CC0_PDATA_PT1_H       LTE_PDATA_OFF
/*CA_8A_20A*/ #endif
/*CA_8A_20A*/
/*CA_8A_20A*/ #ifndef LTE_CACFG_CA_8A_20A_CC0_PDATA_PT2_H
/*CA_8A_20A*/ #define LTE_CACFG_CA_8A_20A_CC0_PDATA_PT2_H       LTE_PDATA_OFF
/*CA_8A_20A*/ #endif
/*CA_8A_20A*/
/*CA_8A_20A*/ #ifndef LTE_CACFG_CA_8A_20A_CC0_PDATA_PT3_H
/*CA_8A_20A*/ #define LTE_CACFG_CA_8A_20A_CC0_PDATA_PT3_H       LTE_PDATA_OFF
/*CA_8A_20A*/ #endif
/*CA_8A_20A*/
/*CA_8A_20A*/ #ifndef LTE_CACFG_CA_8A_20A_CC0_PDATA_PRANT_H
/*CA_8A_20A*/ #define LTE_CACFG_CA_8A_20A_CC0_PDATA_PRANT_H     LTE_PDATA_OFF
/*CA_8A_20A*/ #endif
/*CA_8A_20A*/
/*CA_8A_20A*/ #ifndef LTE_CACFG_CA_8A_20A_CC0_PDATA_PTANT_H
/*CA_8A_20A*/ #define LTE_CACFG_CA_8A_20A_CC0_PDATA_PTANT_H     LTE_PDATA_OFF
/*CA_8A_20A*/ #endif
/*CA_8A_20A*/
/*CA_8A_20A*/ #ifndef LTE_CACFG_CA_8A_20A_CC1_PDATA_PR1_H
/*CA_8A_20A*/ #define LTE_CACFG_CA_8A_20A_CC1_PDATA_PR1_H       LTE_PDATA_OFF
/*CA_8A_20A*/ #endif
/*CA_8A_20A*/
/*CA_8A_20A*/ #ifndef LTE_CACFG_CA_8A_20A_CC1_PDATA_PR2_H
/*CA_8A_20A*/ #define LTE_CACFG_CA_8A_20A_CC1_PDATA_PR2_H       LTE_PDATA_OFF
/*CA_8A_20A*/ #endif
/*CA_8A_20A*/
/*CA_8A_20A*/ #ifndef LTE_CACFG_CA_8A_20A_CC1_PDATA_PR3_H
/*CA_8A_20A*/ #define LTE_CACFG_CA_8A_20A_CC1_PDATA_PR3_H       LTE_PDATA_OFF
/*CA_8A_20A*/ #endif
/*CA_8A_20A*/
/*CA_8A_20A*/ #ifndef LTE_CACFG_CA_8A_20A_CC1_PDATA_PT1_H
/*CA_8A_20A*/ #define LTE_CACFG_CA_8A_20A_CC1_PDATA_PT1_H       LTE_PDATA_OFF
/*CA_8A_20A*/ #endif
/*CA_8A_20A*/
/*CA_8A_20A*/ #ifndef LTE_CACFG_CA_8A_20A_CC1_PDATA_PT2_H
/*CA_8A_20A*/ #define LTE_CACFG_CA_8A_20A_CC1_PDATA_PT2_H       LTE_PDATA_OFF
/*CA_8A_20A*/ #endif
/*CA_8A_20A*/
/*CA_8A_20A*/ #ifndef LTE_CACFG_CA_8A_20A_CC1_PDATA_PT3_H
/*CA_8A_20A*/ #define LTE_CACFG_CA_8A_20A_CC1_PDATA_PT3_H       LTE_PDATA_OFF
/*CA_8A_20A*/ #endif
/*CA_8A_20A*/
/*CA_8A_20A*/ #ifndef LTE_CACFG_CA_8A_20A_CC1_PDATA_PRANT_H
/*CA_8A_20A*/ #define LTE_CACFG_CA_8A_20A_CC1_PDATA_PRANT_H     LTE_PDATA_OFF
/*CA_8A_20A*/ #endif
/*CA_8A_20A*/
/*CA_8A_20A*/ #ifndef LTE_CACFG_CA_8A_20A_CC1_PDATA_PTANT_H
/*CA_8A_20A*/ #define LTE_CACFG_CA_8A_20A_CC1_PDATA_PTANT_H     LTE_PDATA_OFF
/*CA_8A_20A*/ #endif

/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

/*CA_8A_40A*/ #ifndef LTE_CACFG_CA_8A_40A_CC0_PDATA_PR1_H
/*CA_8A_40A*/ #define LTE_CACFG_CA_8A_40A_CC0_PDATA_PR1_H       LTE_PDATA_OFF
/*CA_8A_40A*/ #endif
/*CA_8A_40A*/
/*CA_8A_40A*/ #ifndef LTE_CACFG_CA_8A_40A_CC0_PDATA_PR2_H
/*CA_8A_40A*/ #define LTE_CACFG_CA_8A_40A_CC0_PDATA_PR2_H       LTE_PDATA_OFF
/*CA_8A_40A*/ #endif
/*CA_8A_40A*/
/*CA_8A_40A*/ #ifndef LTE_CACFG_CA_8A_40A_CC0_PDATA_PR3_H
/*CA_8A_40A*/ #define LTE_CACFG_CA_8A_40A_CC0_PDATA_PR3_H       LTE_PDATA_OFF
/*CA_8A_40A*/ #endif
/*CA_8A_40A*/
/*CA_8A_40A*/ #ifndef LTE_CACFG_CA_8A_40A_CC0_PDATA_PT1_H
/*CA_8A_40A*/ #define LTE_CACFG_CA_8A_40A_CC0_PDATA_PT1_H       LTE_PDATA_OFF
/*CA_8A_40A*/ #endif
/*CA_8A_40A*/
/*CA_8A_40A*/ #ifndef LTE_CACFG_CA_8A_40A_CC0_PDATA_PT2_H
/*CA_8A_40A*/ #define LTE_CACFG_CA_8A_40A_CC0_PDATA_PT2_H       LTE_PDATA_OFF
/*CA_8A_40A*/ #endif
/*CA_8A_40A*/
/*CA_8A_40A*/ #ifndef LTE_CACFG_CA_8A_40A_CC0_PDATA_PT3_H
/*CA_8A_40A*/ #define LTE_CACFG_CA_8A_40A_CC0_PDATA_PT3_H       LTE_PDATA_OFF
/*CA_8A_40A*/ #endif
/*CA_8A_40A*/
/*CA_8A_40A*/ #ifndef LTE_CACFG_CA_8A_40A_CC0_PDATA_PRANT_H
/*CA_8A_40A*/ #define LTE_CACFG_CA_8A_40A_CC0_PDATA_PRANT_H     LTE_PDATA_OFF
/*CA_8A_40A*/ #endif
/*CA_8A_40A*/
/*CA_8A_40A*/ #ifndef LTE_CACFG_CA_8A_40A_CC0_PDATA_PTANT_H
/*CA_8A_40A*/ #define LTE_CACFG_CA_8A_40A_CC0_PDATA_PTANT_H     LTE_PDATA_OFF
/*CA_8A_40A*/ #endif
/*CA_8A_40A*/
/*CA_8A_40A*/ #ifndef LTE_CACFG_CA_8A_40A_CC1_PDATA_PR1_H
/*CA_8A_40A*/ #define LTE_CACFG_CA_8A_40A_CC1_PDATA_PR1_H       LTE_PDATA_OFF
/*CA_8A_40A*/ #endif
/*CA_8A_40A*/
/*CA_8A_40A*/ #ifndef LTE_CACFG_CA_8A_40A_CC1_PDATA_PR2_H
/*CA_8A_40A*/ #define LTE_CACFG_CA_8A_40A_CC1_PDATA_PR2_H       LTE_PDATA_OFF
/*CA_8A_40A*/ #endif
/*CA_8A_40A*/
/*CA_8A_40A*/ #ifndef LTE_CACFG_CA_8A_40A_CC1_PDATA_PR3_H
/*CA_8A_40A*/ #define LTE_CACFG_CA_8A_40A_CC1_PDATA_PR3_H       LTE_PDATA_OFF
/*CA_8A_40A*/ #endif
/*CA_8A_40A*/
/*CA_8A_40A*/ #ifndef LTE_CACFG_CA_8A_40A_CC1_PDATA_PT1_H
/*CA_8A_40A*/ #define LTE_CACFG_CA_8A_40A_CC1_PDATA_PT1_H       LTE_PDATA_OFF
/*CA_8A_40A*/ #endif
/*CA_8A_40A*/
/*CA_8A_40A*/ #ifndef LTE_CACFG_CA_8A_40A_CC1_PDATA_PT2_H
/*CA_8A_40A*/ #define LTE_CACFG_CA_8A_40A_CC1_PDATA_PT2_H       LTE_PDATA_OFF
/*CA_8A_40A*/ #endif
/*CA_8A_40A*/
/*CA_8A_40A*/ #ifndef LTE_CACFG_CA_8A_40A_CC1_PDATA_PT3_H
/*CA_8A_40A*/ #define LTE_CACFG_CA_8A_40A_CC1_PDATA_PT3_H       LTE_PDATA_OFF
/*CA_8A_40A*/ #endif
/*CA_8A_40A*/
/*CA_8A_40A*/ #ifndef LTE_CACFG_CA_8A_40A_CC1_PDATA_PRANT_H
/*CA_8A_40A*/ #define LTE_CACFG_CA_8A_40A_CC1_PDATA_PRANT_H     LTE_PDATA_OFF
/*CA_8A_40A*/ #endif
/*CA_8A_40A*/
/*CA_8A_40A*/ #ifndef LTE_CACFG_CA_8A_40A_CC1_PDATA_PTANT_H
/*CA_8A_40A*/ #define LTE_CACFG_CA_8A_40A_CC1_PDATA_PTANT_H     LTE_PDATA_OFF
/*CA_8A_40A*/ #endif

/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

/*CA_11A_18A*/ #ifndef LTE_CACFG_CA_11A_18A_CC0_PDATA_PR1_H
/*CA_11A_18A*/ #define LTE_CACFG_CA_11A_18A_CC0_PDATA_PR1_H       LTE_PDATA_OFF
/*CA_11A_18A*/ #endif
/*CA_11A_18A*/
/*CA_11A_18A*/ #ifndef LTE_CACFG_CA_11A_18A_CC0_PDATA_PR2_H
/*CA_11A_18A*/ #define LTE_CACFG_CA_11A_18A_CC0_PDATA_PR2_H       LTE_PDATA_OFF
/*CA_11A_18A*/ #endif
/*CA_11A_18A*/
/*CA_11A_18A*/ #ifndef LTE_CACFG_CA_11A_18A_CC0_PDATA_PR3_H
/*CA_11A_18A*/ #define LTE_CACFG_CA_11A_18A_CC0_PDATA_PR3_H       LTE_PDATA_OFF
/*CA_11A_18A*/ #endif
/*CA_11A_18A*/
/*CA_11A_18A*/ #ifndef LTE_CACFG_CA_11A_18A_CC0_PDATA_PT1_H
/*CA_11A_18A*/ #define LTE_CACFG_CA_11A_18A_CC0_PDATA_PT1_H       LTE_PDATA_OFF
/*CA_11A_18A*/ #endif
/*CA_11A_18A*/
/*CA_11A_18A*/ #ifndef LTE_CACFG_CA_11A_18A_CC0_PDATA_PT2_H
/*CA_11A_18A*/ #define LTE_CACFG_CA_11A_18A_CC0_PDATA_PT2_H       LTE_PDATA_OFF
/*CA_11A_18A*/ #endif
/*CA_11A_18A*/
/*CA_11A_18A*/ #ifndef LTE_CACFG_CA_11A_18A_CC0_PDATA_PT3_H
/*CA_11A_18A*/ #define LTE_CACFG_CA_11A_18A_CC0_PDATA_PT3_H       LTE_PDATA_OFF
/*CA_11A_18A*/ #endif
/*CA_11A_18A*/
/*CA_11A_18A*/ #ifndef LTE_CACFG_CA_11A_18A_CC0_PDATA_PRANT_H
/*CA_11A_18A*/ #define LTE_CACFG_CA_11A_18A_CC0_PDATA_PRANT_H     LTE_PDATA_OFF
/*CA_11A_18A*/ #endif
/*CA_11A_18A*/
/*CA_11A_18A*/ #ifndef LTE_CACFG_CA_11A_18A_CC0_PDATA_PTANT_H
/*CA_11A_18A*/ #define LTE_CACFG_CA_11A_18A_CC0_PDATA_PTANT_H     LTE_PDATA_OFF
/*CA_11A_18A*/ #endif
/*CA_11A_18A*/
/*CA_11A_18A*/ #ifndef LTE_CACFG_CA_11A_18A_CC1_PDATA_PR1_H
/*CA_11A_18A*/ #define LTE_CACFG_CA_11A_18A_CC1_PDATA_PR1_H       LTE_PDATA_OFF
/*CA_11A_18A*/ #endif
/*CA_11A_18A*/
/*CA_11A_18A*/ #ifndef LTE_CACFG_CA_11A_18A_CC1_PDATA_PR2_H
/*CA_11A_18A*/ #define LTE_CACFG_CA_11A_18A_CC1_PDATA_PR2_H       LTE_PDATA_OFF
/*CA_11A_18A*/ #endif
/*CA_11A_18A*/
/*CA_11A_18A*/ #ifndef LTE_CACFG_CA_11A_18A_CC1_PDATA_PR3_H
/*CA_11A_18A*/ #define LTE_CACFG_CA_11A_18A_CC1_PDATA_PR3_H       LTE_PDATA_OFF
/*CA_11A_18A*/ #endif
/*CA_11A_18A*/
/*CA_11A_18A*/ #ifndef LTE_CACFG_CA_11A_18A_CC1_PDATA_PT1_H
/*CA_11A_18A*/ #define LTE_CACFG_CA_11A_18A_CC1_PDATA_PT1_H       LTE_PDATA_OFF
/*CA_11A_18A*/ #endif
/*CA_11A_18A*/
/*CA_11A_18A*/ #ifndef LTE_CACFG_CA_11A_18A_CC1_PDATA_PT2_H
/*CA_11A_18A*/ #define LTE_CACFG_CA_11A_18A_CC1_PDATA_PT2_H       LTE_PDATA_OFF
/*CA_11A_18A*/ #endif
/*CA_11A_18A*/
/*CA_11A_18A*/ #ifndef LTE_CACFG_CA_11A_18A_CC1_PDATA_PT3_H
/*CA_11A_18A*/ #define LTE_CACFG_CA_11A_18A_CC1_PDATA_PT3_H       LTE_PDATA_OFF
/*CA_11A_18A*/ #endif
/*CA_11A_18A*/
/*CA_11A_18A*/ #ifndef LTE_CACFG_CA_11A_18A_CC1_PDATA_PRANT_H
/*CA_11A_18A*/ #define LTE_CACFG_CA_11A_18A_CC1_PDATA_PRANT_H     LTE_PDATA_OFF
/*CA_11A_18A*/ #endif
/*CA_11A_18A*/
/*CA_11A_18A*/ #ifndef LTE_CACFG_CA_11A_18A_CC1_PDATA_PTANT_H
/*CA_11A_18A*/ #define LTE_CACFG_CA_11A_18A_CC1_PDATA_PTANT_H     LTE_PDATA_OFF
/*CA_11A_18A*/ #endif

/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

/*CA_12A_25A*/ #ifndef LTE_CACFG_CA_12A_25A_CC0_PDATA_PR1_H
/*CA_12A_25A*/ #define LTE_CACFG_CA_12A_25A_CC0_PDATA_PR1_H       LTE_PDATA_OFF
/*CA_12A_25A*/ #endif
/*CA_12A_25A*/
/*CA_12A_25A*/ #ifndef LTE_CACFG_CA_12A_25A_CC0_PDATA_PR2_H
/*CA_12A_25A*/ #define LTE_CACFG_CA_12A_25A_CC0_PDATA_PR2_H       LTE_PDATA_OFF
/*CA_12A_25A*/ #endif
/*CA_12A_25A*/
/*CA_12A_25A*/ #ifndef LTE_CACFG_CA_12A_25A_CC0_PDATA_PR3_H
/*CA_12A_25A*/ #define LTE_CACFG_CA_12A_25A_CC0_PDATA_PR3_H       LTE_PDATA_OFF
/*CA_12A_25A*/ #endif
/*CA_12A_25A*/
/*CA_12A_25A*/ #ifndef LTE_CACFG_CA_12A_25A_CC0_PDATA_PT1_H
/*CA_12A_25A*/ #define LTE_CACFG_CA_12A_25A_CC0_PDATA_PT1_H       LTE_PDATA_OFF
/*CA_12A_25A*/ #endif
/*CA_12A_25A*/
/*CA_12A_25A*/ #ifndef LTE_CACFG_CA_12A_25A_CC0_PDATA_PT2_H
/*CA_12A_25A*/ #define LTE_CACFG_CA_12A_25A_CC0_PDATA_PT2_H       LTE_PDATA_OFF
/*CA_12A_25A*/ #endif
/*CA_12A_25A*/
/*CA_12A_25A*/ #ifndef LTE_CACFG_CA_12A_25A_CC0_PDATA_PT3_H
/*CA_12A_25A*/ #define LTE_CACFG_CA_12A_25A_CC0_PDATA_PT3_H       LTE_PDATA_OFF
/*CA_12A_25A*/ #endif
/*CA_12A_25A*/
/*CA_12A_25A*/ #ifndef LTE_CACFG_CA_12A_25A_CC0_PDATA_PRANT_H
/*CA_12A_25A*/ #define LTE_CACFG_CA_12A_25A_CC0_PDATA_PRANT_H     LTE_PDATA_OFF
/*CA_12A_25A*/ #endif
/*CA_12A_25A*/
/*CA_12A_25A*/ #ifndef LTE_CACFG_CA_12A_25A_CC0_PDATA_PTANT_H
/*CA_12A_25A*/ #define LTE_CACFG_CA_12A_25A_CC0_PDATA_PTANT_H     LTE_PDATA_OFF
/*CA_12A_25A*/ #endif
/*CA_12A_25A*/
/*CA_12A_25A*/ #ifndef LTE_CACFG_CA_12A_25A_CC1_PDATA_PR1_H
/*CA_12A_25A*/ #define LTE_CACFG_CA_12A_25A_CC1_PDATA_PR1_H       LTE_PDATA_OFF
/*CA_12A_25A*/ #endif
/*CA_12A_25A*/
/*CA_12A_25A*/ #ifndef LTE_CACFG_CA_12A_25A_CC1_PDATA_PR2_H
/*CA_12A_25A*/ #define LTE_CACFG_CA_12A_25A_CC1_PDATA_PR2_H       LTE_PDATA_OFF
/*CA_12A_25A*/ #endif
/*CA_12A_25A*/
/*CA_12A_25A*/ #ifndef LTE_CACFG_CA_12A_25A_CC1_PDATA_PR3_H
/*CA_12A_25A*/ #define LTE_CACFG_CA_12A_25A_CC1_PDATA_PR3_H       LTE_PDATA_OFF
/*CA_12A_25A*/ #endif
/*CA_12A_25A*/
/*CA_12A_25A*/ #ifndef LTE_CACFG_CA_12A_25A_CC1_PDATA_PT1_H
/*CA_12A_25A*/ #define LTE_CACFG_CA_12A_25A_CC1_PDATA_PT1_H       LTE_PDATA_OFF
/*CA_12A_25A*/ #endif
/*CA_12A_25A*/
/*CA_12A_25A*/ #ifndef LTE_CACFG_CA_12A_25A_CC1_PDATA_PT2_H
/*CA_12A_25A*/ #define LTE_CACFG_CA_12A_25A_CC1_PDATA_PT2_H       LTE_PDATA_OFF
/*CA_12A_25A*/ #endif
/*CA_12A_25A*/
/*CA_12A_25A*/ #ifndef LTE_CACFG_CA_12A_25A_CC1_PDATA_PT3_H
/*CA_12A_25A*/ #define LTE_CACFG_CA_12A_25A_CC1_PDATA_PT3_H       LTE_PDATA_OFF
/*CA_12A_25A*/ #endif
/*CA_12A_25A*/
/*CA_12A_25A*/ #ifndef LTE_CACFG_CA_12A_25A_CC1_PDATA_PRANT_H
/*CA_12A_25A*/ #define LTE_CACFG_CA_12A_25A_CC1_PDATA_PRANT_H     LTE_PDATA_OFF
/*CA_12A_25A*/ #endif
/*CA_12A_25A*/
/*CA_12A_25A*/ #ifndef LTE_CACFG_CA_12A_25A_CC1_PDATA_PTANT_H
/*CA_12A_25A*/ #define LTE_CACFG_CA_12A_25A_CC1_PDATA_PTANT_H     LTE_PDATA_OFF
/*CA_12A_25A*/ #endif

/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

/*CA_12A_30A*/ #ifndef LTE_CACFG_CA_12A_30A_CC0_PDATA_PR1_H
/*CA_12A_30A*/ #define LTE_CACFG_CA_12A_30A_CC0_PDATA_PR1_H       LTE_PDATA_OFF
/*CA_12A_30A*/ #endif
/*CA_12A_30A*/
/*CA_12A_30A*/ #ifndef LTE_CACFG_CA_12A_30A_CC0_PDATA_PR2_H
/*CA_12A_30A*/ #define LTE_CACFG_CA_12A_30A_CC0_PDATA_PR2_H       LTE_PDATA_OFF
/*CA_12A_30A*/ #endif
/*CA_12A_30A*/
/*CA_12A_30A*/ #ifndef LTE_CACFG_CA_12A_30A_CC0_PDATA_PR3_H
/*CA_12A_30A*/ #define LTE_CACFG_CA_12A_30A_CC0_PDATA_PR3_H       LTE_PDATA_OFF
/*CA_12A_30A*/ #endif
/*CA_12A_30A*/
/*CA_12A_30A*/ #ifndef LTE_CACFG_CA_12A_30A_CC0_PDATA_PT1_H
/*CA_12A_30A*/ #define LTE_CACFG_CA_12A_30A_CC0_PDATA_PT1_H       LTE_PDATA_OFF
/*CA_12A_30A*/ #endif
/*CA_12A_30A*/
/*CA_12A_30A*/ #ifndef LTE_CACFG_CA_12A_30A_CC0_PDATA_PT2_H
/*CA_12A_30A*/ #define LTE_CACFG_CA_12A_30A_CC0_PDATA_PT2_H       LTE_PDATA_OFF
/*CA_12A_30A*/ #endif
/*CA_12A_30A*/
/*CA_12A_30A*/ #ifndef LTE_CACFG_CA_12A_30A_CC0_PDATA_PT3_H
/*CA_12A_30A*/ #define LTE_CACFG_CA_12A_30A_CC0_PDATA_PT3_H       LTE_PDATA_OFF
/*CA_12A_30A*/ #endif
/*CA_12A_30A*/
/*CA_12A_30A*/ #ifndef LTE_CACFG_CA_12A_30A_CC0_PDATA_PRANT_H
/*CA_12A_30A*/ #define LTE_CACFG_CA_12A_30A_CC0_PDATA_PRANT_H     LTE_PDATA_OFF
/*CA_12A_30A*/ #endif
/*CA_12A_30A*/
/*CA_12A_30A*/ #ifndef LTE_CACFG_CA_12A_30A_CC0_PDATA_PTANT_H
/*CA_12A_30A*/ #define LTE_CACFG_CA_12A_30A_CC0_PDATA_PTANT_H     LTE_PDATA_OFF
/*CA_12A_30A*/ #endif
/*CA_12A_30A*/
/*CA_12A_30A*/ #ifndef LTE_CACFG_CA_12A_30A_CC1_PDATA_PR1_H
/*CA_12A_30A*/ #define LTE_CACFG_CA_12A_30A_CC1_PDATA_PR1_H       LTE_PDATA_OFF
/*CA_12A_30A*/ #endif
/*CA_12A_30A*/
/*CA_12A_30A*/ #ifndef LTE_CACFG_CA_12A_30A_CC1_PDATA_PR2_H
/*CA_12A_30A*/ #define LTE_CACFG_CA_12A_30A_CC1_PDATA_PR2_H       LTE_PDATA_OFF
/*CA_12A_30A*/ #endif
/*CA_12A_30A*/
/*CA_12A_30A*/ #ifndef LTE_CACFG_CA_12A_30A_CC1_PDATA_PR3_H
/*CA_12A_30A*/ #define LTE_CACFG_CA_12A_30A_CC1_PDATA_PR3_H       LTE_PDATA_OFF
/*CA_12A_30A*/ #endif
/*CA_12A_30A*/
/*CA_12A_30A*/ #ifndef LTE_CACFG_CA_12A_30A_CC1_PDATA_PT1_H
/*CA_12A_30A*/ #define LTE_CACFG_CA_12A_30A_CC1_PDATA_PT1_H       LTE_PDATA_OFF
/*CA_12A_30A*/ #endif
/*CA_12A_30A*/
/*CA_12A_30A*/ #ifndef LTE_CACFG_CA_12A_30A_CC1_PDATA_PT2_H
/*CA_12A_30A*/ #define LTE_CACFG_CA_12A_30A_CC1_PDATA_PT2_H       LTE_PDATA_OFF
/*CA_12A_30A*/ #endif
/*CA_12A_30A*/
/*CA_12A_30A*/ #ifndef LTE_CACFG_CA_12A_30A_CC1_PDATA_PT3_H
/*CA_12A_30A*/ #define LTE_CACFG_CA_12A_30A_CC1_PDATA_PT3_H       LTE_PDATA_OFF
/*CA_12A_30A*/ #endif
/*CA_12A_30A*/
/*CA_12A_30A*/ #ifndef LTE_CACFG_CA_12A_30A_CC1_PDATA_PRANT_H
/*CA_12A_30A*/ #define LTE_CACFG_CA_12A_30A_CC1_PDATA_PRANT_H     LTE_PDATA_OFF
/*CA_12A_30A*/ #endif
/*CA_12A_30A*/
/*CA_12A_30A*/ #ifndef LTE_CACFG_CA_12A_30A_CC1_PDATA_PTANT_H
/*CA_12A_30A*/ #define LTE_CACFG_CA_12A_30A_CC1_PDATA_PTANT_H     LTE_PDATA_OFF
/*CA_12A_30A*/ #endif

/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

/*CA_17A_30A*/ #ifndef LTE_CACFG_CA_17A_30A_CC0_PDATA_PR1_H
/*CA_17A_30A*/ #define LTE_CACFG_CA_17A_30A_CC0_PDATA_PR1_H       LTE_PDATA_OFF
/*CA_17A_30A*/ #endif
/*CA_17A_30A*/
/*CA_17A_30A*/ #ifndef LTE_CACFG_CA_17A_30A_CC0_PDATA_PR2_H
/*CA_17A_30A*/ #define LTE_CACFG_CA_17A_30A_CC0_PDATA_PR2_H       LTE_PDATA_OFF
/*CA_17A_30A*/ #endif
/*CA_17A_30A*/
/*CA_17A_30A*/ #ifndef LTE_CACFG_CA_17A_30A_CC0_PDATA_PR3_H
/*CA_17A_30A*/ #define LTE_CACFG_CA_17A_30A_CC0_PDATA_PR3_H       LTE_PDATA_OFF
/*CA_17A_30A*/ #endif
/*CA_17A_30A*/
/*CA_17A_30A*/ #ifndef LTE_CACFG_CA_17A_30A_CC0_PDATA_PT1_H
/*CA_17A_30A*/ #define LTE_CACFG_CA_17A_30A_CC0_PDATA_PT1_H       LTE_PDATA_OFF
/*CA_17A_30A*/ #endif
/*CA_17A_30A*/
/*CA_17A_30A*/ #ifndef LTE_CACFG_CA_17A_30A_CC0_PDATA_PT2_H
/*CA_17A_30A*/ #define LTE_CACFG_CA_17A_30A_CC0_PDATA_PT2_H       LTE_PDATA_OFF
/*CA_17A_30A*/ #endif
/*CA_17A_30A*/
/*CA_17A_30A*/ #ifndef LTE_CACFG_CA_17A_30A_CC0_PDATA_PT3_H
/*CA_17A_30A*/ #define LTE_CACFG_CA_17A_30A_CC0_PDATA_PT3_H       LTE_PDATA_OFF
/*CA_17A_30A*/ #endif
/*CA_17A_30A*/
/*CA_17A_30A*/ #ifndef LTE_CACFG_CA_17A_30A_CC0_PDATA_PRANT_H
/*CA_17A_30A*/ #define LTE_CACFG_CA_17A_30A_CC0_PDATA_PRANT_H     LTE_PDATA_OFF
/*CA_17A_30A*/ #endif
/*CA_17A_30A*/
/*CA_17A_30A*/ #ifndef LTE_CACFG_CA_17A_30A_CC0_PDATA_PTANT_H
/*CA_17A_30A*/ #define LTE_CACFG_CA_17A_30A_CC0_PDATA_PTANT_H     LTE_PDATA_OFF
/*CA_17A_30A*/ #endif
/*CA_17A_30A*/
/*CA_17A_30A*/ #ifndef LTE_CACFG_CA_17A_30A_CC1_PDATA_PR1_H
/*CA_17A_30A*/ #define LTE_CACFG_CA_17A_30A_CC1_PDATA_PR1_H       LTE_PDATA_OFF
/*CA_17A_30A*/ #endif
/*CA_17A_30A*/
/*CA_17A_30A*/ #ifndef LTE_CACFG_CA_17A_30A_CC1_PDATA_PR2_H
/*CA_17A_30A*/ #define LTE_CACFG_CA_17A_30A_CC1_PDATA_PR2_H       LTE_PDATA_OFF
/*CA_17A_30A*/ #endif
/*CA_17A_30A*/
/*CA_17A_30A*/ #ifndef LTE_CACFG_CA_17A_30A_CC1_PDATA_PR3_H
/*CA_17A_30A*/ #define LTE_CACFG_CA_17A_30A_CC1_PDATA_PR3_H       LTE_PDATA_OFF
/*CA_17A_30A*/ #endif
/*CA_17A_30A*/
/*CA_17A_30A*/ #ifndef LTE_CACFG_CA_17A_30A_CC1_PDATA_PT1_H
/*CA_17A_30A*/ #define LTE_CACFG_CA_17A_30A_CC1_PDATA_PT1_H       LTE_PDATA_OFF
/*CA_17A_30A*/ #endif
/*CA_17A_30A*/
/*CA_17A_30A*/ #ifndef LTE_CACFG_CA_17A_30A_CC1_PDATA_PT2_H
/*CA_17A_30A*/ #define LTE_CACFG_CA_17A_30A_CC1_PDATA_PT2_H       LTE_PDATA_OFF
/*CA_17A_30A*/ #endif
/*CA_17A_30A*/
/*CA_17A_30A*/ #ifndef LTE_CACFG_CA_17A_30A_CC1_PDATA_PT3_H
/*CA_17A_30A*/ #define LTE_CACFG_CA_17A_30A_CC1_PDATA_PT3_H       LTE_PDATA_OFF
/*CA_17A_30A*/ #endif
/*CA_17A_30A*/
/*CA_17A_30A*/ #ifndef LTE_CACFG_CA_17A_30A_CC1_PDATA_PRANT_H
/*CA_17A_30A*/ #define LTE_CACFG_CA_17A_30A_CC1_PDATA_PRANT_H     LTE_PDATA_OFF
/*CA_17A_30A*/ #endif
/*CA_17A_30A*/
/*CA_17A_30A*/ #ifndef LTE_CACFG_CA_17A_30A_CC1_PDATA_PTANT_H
/*CA_17A_30A*/ #define LTE_CACFG_CA_17A_30A_CC1_PDATA_PTANT_H     LTE_PDATA_OFF
/*CA_17A_30A*/ #endif

/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

/*CA_19A_21A*/ #ifndef LTE_CACFG_CA_19A_21A_CC0_PDATA_PR1_H
/*CA_19A_21A*/ #define LTE_CACFG_CA_19A_21A_CC0_PDATA_PR1_H       LTE_PDATA_OFF
/*CA_19A_21A*/ #endif
/*CA_19A_21A*/
/*CA_19A_21A*/ #ifndef LTE_CACFG_CA_19A_21A_CC0_PDATA_PR2_H
/*CA_19A_21A*/ #define LTE_CACFG_CA_19A_21A_CC0_PDATA_PR2_H       LTE_PDATA_OFF
/*CA_19A_21A*/ #endif
/*CA_19A_21A*/
/*CA_19A_21A*/ #ifndef LTE_CACFG_CA_19A_21A_CC0_PDATA_PR3_H
/*CA_19A_21A*/ #define LTE_CACFG_CA_19A_21A_CC0_PDATA_PR3_H       LTE_PDATA_OFF
/*CA_19A_21A*/ #endif
/*CA_19A_21A*/
/*CA_19A_21A*/ #ifndef LTE_CACFG_CA_19A_21A_CC0_PDATA_PT1_H
/*CA_19A_21A*/ #define LTE_CACFG_CA_19A_21A_CC0_PDATA_PT1_H       LTE_PDATA_OFF
/*CA_19A_21A*/ #endif
/*CA_19A_21A*/
/*CA_19A_21A*/ #ifndef LTE_CACFG_CA_19A_21A_CC0_PDATA_PT2_H
/*CA_19A_21A*/ #define LTE_CACFG_CA_19A_21A_CC0_PDATA_PT2_H       LTE_PDATA_OFF
/*CA_19A_21A*/ #endif
/*CA_19A_21A*/
/*CA_19A_21A*/ #ifndef LTE_CACFG_CA_19A_21A_CC0_PDATA_PT3_H
/*CA_19A_21A*/ #define LTE_CACFG_CA_19A_21A_CC0_PDATA_PT3_H       LTE_PDATA_OFF
/*CA_19A_21A*/ #endif
/*CA_19A_21A*/
/*CA_19A_21A*/ #ifndef LTE_CACFG_CA_19A_21A_CC0_PDATA_PRANT_H
/*CA_19A_21A*/ #define LTE_CACFG_CA_19A_21A_CC0_PDATA_PRANT_H     LTE_PDATA_OFF
/*CA_19A_21A*/ #endif
/*CA_19A_21A*/
/*CA_19A_21A*/ #ifndef LTE_CACFG_CA_19A_21A_CC0_PDATA_PTANT_H
/*CA_19A_21A*/ #define LTE_CACFG_CA_19A_21A_CC0_PDATA_PTANT_H     LTE_PDATA_OFF
/*CA_19A_21A*/ #endif
/*CA_19A_21A*/
/*CA_19A_21A*/ #ifndef LTE_CACFG_CA_19A_21A_CC1_PDATA_PR1_H
/*CA_19A_21A*/ #define LTE_CACFG_CA_19A_21A_CC1_PDATA_PR1_H       LTE_PDATA_OFF
/*CA_19A_21A*/ #endif
/*CA_19A_21A*/
/*CA_19A_21A*/ #ifndef LTE_CACFG_CA_19A_21A_CC1_PDATA_PR2_H
/*CA_19A_21A*/ #define LTE_CACFG_CA_19A_21A_CC1_PDATA_PR2_H       LTE_PDATA_OFF
/*CA_19A_21A*/ #endif
/*CA_19A_21A*/
/*CA_19A_21A*/ #ifndef LTE_CACFG_CA_19A_21A_CC1_PDATA_PR3_H
/*CA_19A_21A*/ #define LTE_CACFG_CA_19A_21A_CC1_PDATA_PR3_H       LTE_PDATA_OFF
/*CA_19A_21A*/ #endif
/*CA_19A_21A*/
/*CA_19A_21A*/ #ifndef LTE_CACFG_CA_19A_21A_CC1_PDATA_PT1_H
/*CA_19A_21A*/ #define LTE_CACFG_CA_19A_21A_CC1_PDATA_PT1_H       LTE_PDATA_OFF
/*CA_19A_21A*/ #endif
/*CA_19A_21A*/
/*CA_19A_21A*/ #ifndef LTE_CACFG_CA_19A_21A_CC1_PDATA_PT2_H
/*CA_19A_21A*/ #define LTE_CACFG_CA_19A_21A_CC1_PDATA_PT2_H       LTE_PDATA_OFF
/*CA_19A_21A*/ #endif
/*CA_19A_21A*/
/*CA_19A_21A*/ #ifndef LTE_CACFG_CA_19A_21A_CC1_PDATA_PT3_H
/*CA_19A_21A*/ #define LTE_CACFG_CA_19A_21A_CC1_PDATA_PT3_H       LTE_PDATA_OFF
/*CA_19A_21A*/ #endif
/*CA_19A_21A*/
/*CA_19A_21A*/ #ifndef LTE_CACFG_CA_19A_21A_CC1_PDATA_PRANT_H
/*CA_19A_21A*/ #define LTE_CACFG_CA_19A_21A_CC1_PDATA_PRANT_H     LTE_PDATA_OFF
/*CA_19A_21A*/ #endif
/*CA_19A_21A*/
/*CA_19A_21A*/ #ifndef LTE_CACFG_CA_19A_21A_CC1_PDATA_PTANT_H
/*CA_19A_21A*/ #define LTE_CACFG_CA_19A_21A_CC1_PDATA_PTANT_H     LTE_PDATA_OFF
/*CA_19A_21A*/ #endif

/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

/*CA_20A_32A*/ #ifndef LTE_CACFG_CA_20A_32A_CC0_PDATA_PR1_H
/*CA_20A_32A*/ #define LTE_CACFG_CA_20A_32A_CC0_PDATA_PR1_H       LTE_PDATA_OFF
/*CA_20A_32A*/ #endif
/*CA_20A_32A*/
/*CA_20A_32A*/ #ifndef LTE_CACFG_CA_20A_32A_CC0_PDATA_PR2_H
/*CA_20A_32A*/ #define LTE_CACFG_CA_20A_32A_CC0_PDATA_PR2_H       LTE_PDATA_OFF
/*CA_20A_32A*/ #endif
/*CA_20A_32A*/
/*CA_20A_32A*/ #ifndef LTE_CACFG_CA_20A_32A_CC0_PDATA_PR3_H
/*CA_20A_32A*/ #define LTE_CACFG_CA_20A_32A_CC0_PDATA_PR3_H       LTE_PDATA_OFF
/*CA_20A_32A*/ #endif
/*CA_20A_32A*/
/*CA_20A_32A*/ #ifndef LTE_CACFG_CA_20A_32A_CC0_PDATA_PT1_H
/*CA_20A_32A*/ #define LTE_CACFG_CA_20A_32A_CC0_PDATA_PT1_H       LTE_PDATA_OFF
/*CA_20A_32A*/ #endif
/*CA_20A_32A*/
/*CA_20A_32A*/ #ifndef LTE_CACFG_CA_20A_32A_CC0_PDATA_PT2_H
/*CA_20A_32A*/ #define LTE_CACFG_CA_20A_32A_CC0_PDATA_PT2_H       LTE_PDATA_OFF
/*CA_20A_32A*/ #endif
/*CA_20A_32A*/
/*CA_20A_32A*/ #ifndef LTE_CACFG_CA_20A_32A_CC0_PDATA_PT3_H
/*CA_20A_32A*/ #define LTE_CACFG_CA_20A_32A_CC0_PDATA_PT3_H       LTE_PDATA_OFF
/*CA_20A_32A*/ #endif
/*CA_20A_32A*/
/*CA_20A_32A*/ #ifndef LTE_CACFG_CA_20A_32A_CC0_PDATA_PRANT_H
/*CA_20A_32A*/ #define LTE_CACFG_CA_20A_32A_CC0_PDATA_PRANT_H     LTE_PDATA_OFF
/*CA_20A_32A*/ #endif
/*CA_20A_32A*/
/*CA_20A_32A*/ #ifndef LTE_CACFG_CA_20A_32A_CC0_PDATA_PTANT_H
/*CA_20A_32A*/ #define LTE_CACFG_CA_20A_32A_CC0_PDATA_PTANT_H     LTE_PDATA_OFF
/*CA_20A_32A*/ #endif
/*CA_20A_32A*/
/*CA_20A_32A*/ #ifndef LTE_CACFG_CA_20A_32A_CC1_PDATA_PR1_H
/*CA_20A_32A*/ #define LTE_CACFG_CA_20A_32A_CC1_PDATA_PR1_H       LTE_PDATA_OFF
/*CA_20A_32A*/ #endif
/*CA_20A_32A*/
/*CA_20A_32A*/ #ifndef LTE_CACFG_CA_20A_32A_CC1_PDATA_PR2_H
/*CA_20A_32A*/ #define LTE_CACFG_CA_20A_32A_CC1_PDATA_PR2_H       LTE_PDATA_OFF
/*CA_20A_32A*/ #endif
/*CA_20A_32A*/
/*CA_20A_32A*/ #ifndef LTE_CACFG_CA_20A_32A_CC1_PDATA_PR3_H
/*CA_20A_32A*/ #define LTE_CACFG_CA_20A_32A_CC1_PDATA_PR3_H       LTE_PDATA_OFF
/*CA_20A_32A*/ #endif
/*CA_20A_32A*/
/*CA_20A_32A*/ #ifndef LTE_CACFG_CA_20A_32A_CC1_PDATA_PT1_H
/*CA_20A_32A*/ #define LTE_CACFG_CA_20A_32A_CC1_PDATA_PT1_H       LTE_PDATA_OFF
/*CA_20A_32A*/ #endif
/*CA_20A_32A*/
/*CA_20A_32A*/ #ifndef LTE_CACFG_CA_20A_32A_CC1_PDATA_PT2_H
/*CA_20A_32A*/ #define LTE_CACFG_CA_20A_32A_CC1_PDATA_PT2_H       LTE_PDATA_OFF
/*CA_20A_32A*/ #endif
/*CA_20A_32A*/
/*CA_20A_32A*/ #ifndef LTE_CACFG_CA_20A_32A_CC1_PDATA_PT3_H
/*CA_20A_32A*/ #define LTE_CACFG_CA_20A_32A_CC1_PDATA_PT3_H       LTE_PDATA_OFF
/*CA_20A_32A*/ #endif
/*CA_20A_32A*/
/*CA_20A_32A*/ #ifndef LTE_CACFG_CA_20A_32A_CC1_PDATA_PRANT_H
/*CA_20A_32A*/ #define LTE_CACFG_CA_20A_32A_CC1_PDATA_PRANT_H     LTE_PDATA_OFF
/*CA_20A_32A*/ #endif
/*CA_20A_32A*/
/*CA_20A_32A*/ #ifndef LTE_CACFG_CA_20A_32A_CC1_PDATA_PTANT_H
/*CA_20A_32A*/ #define LTE_CACFG_CA_20A_32A_CC1_PDATA_PTANT_H     LTE_PDATA_OFF
/*CA_20A_32A*/ #endif

/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

/*CA_20A_38A*/ #ifndef LTE_CACFG_CA_20A_38A_CC0_PDATA_PR1_H
/*CA_20A_38A*/ #define LTE_CACFG_CA_20A_38A_CC0_PDATA_PR1_H       LTE_PDATA_OFF
/*CA_20A_38A*/ #endif
/*CA_20A_38A*/
/*CA_20A_38A*/ #ifndef LTE_CACFG_CA_20A_38A_CC0_PDATA_PR2_H
/*CA_20A_38A*/ #define LTE_CACFG_CA_20A_38A_CC0_PDATA_PR2_H       LTE_PDATA_OFF
/*CA_20A_38A*/ #endif
/*CA_20A_38A*/
/*CA_20A_38A*/ #ifndef LTE_CACFG_CA_20A_38A_CC0_PDATA_PR3_H
/*CA_20A_38A*/ #define LTE_CACFG_CA_20A_38A_CC0_PDATA_PR3_H       LTE_PDATA_OFF
/*CA_20A_38A*/ #endif
/*CA_20A_38A*/
/*CA_20A_38A*/ #ifndef LTE_CACFG_CA_20A_38A_CC0_PDATA_PT1_H
/*CA_20A_38A*/ #define LTE_CACFG_CA_20A_38A_CC0_PDATA_PT1_H       LTE_PDATA_OFF
/*CA_20A_38A*/ #endif
/*CA_20A_38A*/
/*CA_20A_38A*/ #ifndef LTE_CACFG_CA_20A_38A_CC0_PDATA_PT2_H
/*CA_20A_38A*/ #define LTE_CACFG_CA_20A_38A_CC0_PDATA_PT2_H       LTE_PDATA_OFF
/*CA_20A_38A*/ #endif
/*CA_20A_38A*/
/*CA_20A_38A*/ #ifndef LTE_CACFG_CA_20A_38A_CC0_PDATA_PT3_H
/*CA_20A_38A*/ #define LTE_CACFG_CA_20A_38A_CC0_PDATA_PT3_H       LTE_PDATA_OFF
/*CA_20A_38A*/ #endif
/*CA_20A_38A*/
/*CA_20A_38A*/ #ifndef LTE_CACFG_CA_20A_38A_CC0_PDATA_PRANT_H
/*CA_20A_38A*/ #define LTE_CACFG_CA_20A_38A_CC0_PDATA_PRANT_H     LTE_PDATA_OFF
/*CA_20A_38A*/ #endif
/*CA_20A_38A*/
/*CA_20A_38A*/ #ifndef LTE_CACFG_CA_20A_38A_CC0_PDATA_PTANT_H
/*CA_20A_38A*/ #define LTE_CACFG_CA_20A_38A_CC0_PDATA_PTANT_H     LTE_PDATA_OFF
/*CA_20A_38A*/ #endif
/*CA_20A_38A*/
/*CA_20A_38A*/ #ifndef LTE_CACFG_CA_20A_38A_CC1_PDATA_PR1_H
/*CA_20A_38A*/ #define LTE_CACFG_CA_20A_38A_CC1_PDATA_PR1_H       LTE_PDATA_OFF
/*CA_20A_38A*/ #endif
/*CA_20A_38A*/
/*CA_20A_38A*/ #ifndef LTE_CACFG_CA_20A_38A_CC1_PDATA_PR2_H
/*CA_20A_38A*/ #define LTE_CACFG_CA_20A_38A_CC1_PDATA_PR2_H       LTE_PDATA_OFF
/*CA_20A_38A*/ #endif
/*CA_20A_38A*/
/*CA_20A_38A*/ #ifndef LTE_CACFG_CA_20A_38A_CC1_PDATA_PR3_H
/*CA_20A_38A*/ #define LTE_CACFG_CA_20A_38A_CC1_PDATA_PR3_H       LTE_PDATA_OFF
/*CA_20A_38A*/ #endif
/*CA_20A_38A*/
/*CA_20A_38A*/ #ifndef LTE_CACFG_CA_20A_38A_CC1_PDATA_PT1_H
/*CA_20A_38A*/ #define LTE_CACFG_CA_20A_38A_CC1_PDATA_PT1_H       LTE_PDATA_OFF
/*CA_20A_38A*/ #endif
/*CA_20A_38A*/
/*CA_20A_38A*/ #ifndef LTE_CACFG_CA_20A_38A_CC1_PDATA_PT2_H
/*CA_20A_38A*/ #define LTE_CACFG_CA_20A_38A_CC1_PDATA_PT2_H       LTE_PDATA_OFF
/*CA_20A_38A*/ #endif
/*CA_20A_38A*/
/*CA_20A_38A*/ #ifndef LTE_CACFG_CA_20A_38A_CC1_PDATA_PT3_H
/*CA_20A_38A*/ #define LTE_CACFG_CA_20A_38A_CC1_PDATA_PT3_H       LTE_PDATA_OFF
/*CA_20A_38A*/ #endif
/*CA_20A_38A*/
/*CA_20A_38A*/ #ifndef LTE_CACFG_CA_20A_38A_CC1_PDATA_PRANT_H
/*CA_20A_38A*/ #define LTE_CACFG_CA_20A_38A_CC1_PDATA_PRANT_H     LTE_PDATA_OFF
/*CA_20A_38A*/ #endif
/*CA_20A_38A*/
/*CA_20A_38A*/ #ifndef LTE_CACFG_CA_20A_38A_CC1_PDATA_PTANT_H
/*CA_20A_38A*/ #define LTE_CACFG_CA_20A_38A_CC1_PDATA_PTANT_H     LTE_PDATA_OFF
/*CA_20A_38A*/ #endif

/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

/*CA_23A_29A*/ #ifndef LTE_CACFG_CA_23A_29A_CC0_PDATA_PR1_H
/*CA_23A_29A*/ #define LTE_CACFG_CA_23A_29A_CC0_PDATA_PR1_H       LTE_PDATA_OFF
/*CA_23A_29A*/ #endif
/*CA_23A_29A*/
/*CA_23A_29A*/ #ifndef LTE_CACFG_CA_23A_29A_CC0_PDATA_PR2_H
/*CA_23A_29A*/ #define LTE_CACFG_CA_23A_29A_CC0_PDATA_PR2_H       LTE_PDATA_OFF
/*CA_23A_29A*/ #endif
/*CA_23A_29A*/
/*CA_23A_29A*/ #ifndef LTE_CACFG_CA_23A_29A_CC0_PDATA_PR3_H
/*CA_23A_29A*/ #define LTE_CACFG_CA_23A_29A_CC0_PDATA_PR3_H       LTE_PDATA_OFF
/*CA_23A_29A*/ #endif
/*CA_23A_29A*/
/*CA_23A_29A*/ #ifndef LTE_CACFG_CA_23A_29A_CC0_PDATA_PT1_H
/*CA_23A_29A*/ #define LTE_CACFG_CA_23A_29A_CC0_PDATA_PT1_H       LTE_PDATA_OFF
/*CA_23A_29A*/ #endif
/*CA_23A_29A*/
/*CA_23A_29A*/ #ifndef LTE_CACFG_CA_23A_29A_CC0_PDATA_PT2_H
/*CA_23A_29A*/ #define LTE_CACFG_CA_23A_29A_CC0_PDATA_PT2_H       LTE_PDATA_OFF
/*CA_23A_29A*/ #endif
/*CA_23A_29A*/
/*CA_23A_29A*/ #ifndef LTE_CACFG_CA_23A_29A_CC0_PDATA_PT3_H
/*CA_23A_29A*/ #define LTE_CACFG_CA_23A_29A_CC0_PDATA_PT3_H       LTE_PDATA_OFF
/*CA_23A_29A*/ #endif
/*CA_23A_29A*/
/*CA_23A_29A*/ #ifndef LTE_CACFG_CA_23A_29A_CC0_PDATA_PRANT_H
/*CA_23A_29A*/ #define LTE_CACFG_CA_23A_29A_CC0_PDATA_PRANT_H     LTE_PDATA_OFF
/*CA_23A_29A*/ #endif
/*CA_23A_29A*/
/*CA_23A_29A*/ #ifndef LTE_CACFG_CA_23A_29A_CC0_PDATA_PTANT_H
/*CA_23A_29A*/ #define LTE_CACFG_CA_23A_29A_CC0_PDATA_PTANT_H     LTE_PDATA_OFF
/*CA_23A_29A*/ #endif
/*CA_23A_29A*/
/*CA_23A_29A*/ #ifndef LTE_CACFG_CA_23A_29A_CC1_PDATA_PR1_H
/*CA_23A_29A*/ #define LTE_CACFG_CA_23A_29A_CC1_PDATA_PR1_H       LTE_PDATA_OFF
/*CA_23A_29A*/ #endif
/*CA_23A_29A*/
/*CA_23A_29A*/ #ifndef LTE_CACFG_CA_23A_29A_CC1_PDATA_PR2_H
/*CA_23A_29A*/ #define LTE_CACFG_CA_23A_29A_CC1_PDATA_PR2_H       LTE_PDATA_OFF
/*CA_23A_29A*/ #endif
/*CA_23A_29A*/
/*CA_23A_29A*/ #ifndef LTE_CACFG_CA_23A_29A_CC1_PDATA_PR3_H
/*CA_23A_29A*/ #define LTE_CACFG_CA_23A_29A_CC1_PDATA_PR3_H       LTE_PDATA_OFF
/*CA_23A_29A*/ #endif
/*CA_23A_29A*/
/*CA_23A_29A*/ #ifndef LTE_CACFG_CA_23A_29A_CC1_PDATA_PT1_H
/*CA_23A_29A*/ #define LTE_CACFG_CA_23A_29A_CC1_PDATA_PT1_H       LTE_PDATA_OFF
/*CA_23A_29A*/ #endif
/*CA_23A_29A*/
/*CA_23A_29A*/ #ifndef LTE_CACFG_CA_23A_29A_CC1_PDATA_PT2_H
/*CA_23A_29A*/ #define LTE_CACFG_CA_23A_29A_CC1_PDATA_PT2_H       LTE_PDATA_OFF
/*CA_23A_29A*/ #endif
/*CA_23A_29A*/
/*CA_23A_29A*/ #ifndef LTE_CACFG_CA_23A_29A_CC1_PDATA_PT3_H
/*CA_23A_29A*/ #define LTE_CACFG_CA_23A_29A_CC1_PDATA_PT3_H       LTE_PDATA_OFF
/*CA_23A_29A*/ #endif
/*CA_23A_29A*/
/*CA_23A_29A*/ #ifndef LTE_CACFG_CA_23A_29A_CC1_PDATA_PRANT_H
/*CA_23A_29A*/ #define LTE_CACFG_CA_23A_29A_CC1_PDATA_PRANT_H     LTE_PDATA_OFF
/*CA_23A_29A*/ #endif
/*CA_23A_29A*/
/*CA_23A_29A*/ #ifndef LTE_CACFG_CA_23A_29A_CC1_PDATA_PTANT_H
/*CA_23A_29A*/ #define LTE_CACFG_CA_23A_29A_CC1_PDATA_PTANT_H     LTE_PDATA_OFF
/*CA_23A_29A*/ #endif

/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

/*CA_26A_41A*/ #ifndef LTE_CACFG_CA_26A_41A_CC0_PDATA_PR1_H
/*CA_26A_41A*/ #define LTE_CACFG_CA_26A_41A_CC0_PDATA_PR1_H       LTE_PDATA_OFF
/*CA_26A_41A*/ #endif
/*CA_26A_41A*/
/*CA_26A_41A*/ #ifndef LTE_CACFG_CA_26A_41A_CC0_PDATA_PR2_H
/*CA_26A_41A*/ #define LTE_CACFG_CA_26A_41A_CC0_PDATA_PR2_H       LTE_PDATA_OFF
/*CA_26A_41A*/ #endif
/*CA_26A_41A*/
/*CA_26A_41A*/ #ifndef LTE_CACFG_CA_26A_41A_CC0_PDATA_PR3_H
/*CA_26A_41A*/ #define LTE_CACFG_CA_26A_41A_CC0_PDATA_PR3_H       LTE_PDATA_OFF
/*CA_26A_41A*/ #endif
/*CA_26A_41A*/
/*CA_26A_41A*/ #ifndef LTE_CACFG_CA_26A_41A_CC0_PDATA_PT1_H
/*CA_26A_41A*/ #define LTE_CACFG_CA_26A_41A_CC0_PDATA_PT1_H       LTE_PDATA_OFF
/*CA_26A_41A*/ #endif
/*CA_26A_41A*/
/*CA_26A_41A*/ #ifndef LTE_CACFG_CA_26A_41A_CC0_PDATA_PT2_H
/*CA_26A_41A*/ #define LTE_CACFG_CA_26A_41A_CC0_PDATA_PT2_H       LTE_PDATA_OFF
/*CA_26A_41A*/ #endif
/*CA_26A_41A*/
/*CA_26A_41A*/ #ifndef LTE_CACFG_CA_26A_41A_CC0_PDATA_PT3_H
/*CA_26A_41A*/ #define LTE_CACFG_CA_26A_41A_CC0_PDATA_PT3_H       LTE_PDATA_OFF
/*CA_26A_41A*/ #endif
/*CA_26A_41A*/
/*CA_26A_41A*/ #ifndef LTE_CACFG_CA_26A_41A_CC0_PDATA_PRANT_H
/*CA_26A_41A*/ #define LTE_CACFG_CA_26A_41A_CC0_PDATA_PRANT_H     LTE_PDATA_OFF
/*CA_26A_41A*/ #endif
/*CA_26A_41A*/
/*CA_26A_41A*/ #ifndef LTE_CACFG_CA_26A_41A_CC0_PDATA_PTANT_H
/*CA_26A_41A*/ #define LTE_CACFG_CA_26A_41A_CC0_PDATA_PTANT_H     LTE_PDATA_OFF
/*CA_26A_41A*/ #endif
/*CA_26A_41A*/
/*CA_26A_41A*/ #ifndef LTE_CACFG_CA_26A_41A_CC1_PDATA_PR1_H
/*CA_26A_41A*/ #define LTE_CACFG_CA_26A_41A_CC1_PDATA_PR1_H       LTE_PDATA_OFF
/*CA_26A_41A*/ #endif
/*CA_26A_41A*/
/*CA_26A_41A*/ #ifndef LTE_CACFG_CA_26A_41A_CC1_PDATA_PR2_H
/*CA_26A_41A*/ #define LTE_CACFG_CA_26A_41A_CC1_PDATA_PR2_H       LTE_PDATA_OFF
/*CA_26A_41A*/ #endif
/*CA_26A_41A*/
/*CA_26A_41A*/ #ifndef LTE_CACFG_CA_26A_41A_CC1_PDATA_PR3_H
/*CA_26A_41A*/ #define LTE_CACFG_CA_26A_41A_CC1_PDATA_PR3_H       LTE_PDATA_OFF
/*CA_26A_41A*/ #endif
/*CA_26A_41A*/
/*CA_26A_41A*/ #ifndef LTE_CACFG_CA_26A_41A_CC1_PDATA_PT1_H
/*CA_26A_41A*/ #define LTE_CACFG_CA_26A_41A_CC1_PDATA_PT1_H       LTE_PDATA_OFF
/*CA_26A_41A*/ #endif
/*CA_26A_41A*/
/*CA_26A_41A*/ #ifndef LTE_CACFG_CA_26A_41A_CC1_PDATA_PT2_H
/*CA_26A_41A*/ #define LTE_CACFG_CA_26A_41A_CC1_PDATA_PT2_H       LTE_PDATA_OFF
/*CA_26A_41A*/ #endif
/*CA_26A_41A*/
/*CA_26A_41A*/ #ifndef LTE_CACFG_CA_26A_41A_CC1_PDATA_PT3_H
/*CA_26A_41A*/ #define LTE_CACFG_CA_26A_41A_CC1_PDATA_PT3_H       LTE_PDATA_OFF
/*CA_26A_41A*/ #endif
/*CA_26A_41A*/
/*CA_26A_41A*/ #ifndef LTE_CACFG_CA_26A_41A_CC1_PDATA_PRANT_H
/*CA_26A_41A*/ #define LTE_CACFG_CA_26A_41A_CC1_PDATA_PRANT_H     LTE_PDATA_OFF
/*CA_26A_41A*/ #endif
/*CA_26A_41A*/
/*CA_26A_41A*/ #ifndef LTE_CACFG_CA_26A_41A_CC1_PDATA_PTANT_H
/*CA_26A_41A*/ #define LTE_CACFG_CA_26A_41A_CC1_PDATA_PTANT_H     LTE_PDATA_OFF
/*CA_26A_41A*/ #endif

/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

/*CA_29A_30A*/ #ifndef LTE_CACFG_CA_29A_30A_CC0_PDATA_PR1_H
/*CA_29A_30A*/ #define LTE_CACFG_CA_29A_30A_CC0_PDATA_PR1_H       LTE_PDATA_OFF
/*CA_29A_30A*/ #endif
/*CA_29A_30A*/
/*CA_29A_30A*/ #ifndef LTE_CACFG_CA_29A_30A_CC0_PDATA_PR2_H
/*CA_29A_30A*/ #define LTE_CACFG_CA_29A_30A_CC0_PDATA_PR2_H       LTE_PDATA_OFF
/*CA_29A_30A*/ #endif
/*CA_29A_30A*/
/*CA_29A_30A*/ #ifndef LTE_CACFG_CA_29A_30A_CC0_PDATA_PR3_H
/*CA_29A_30A*/ #define LTE_CACFG_CA_29A_30A_CC0_PDATA_PR3_H       LTE_PDATA_OFF
/*CA_29A_30A*/ #endif
/*CA_29A_30A*/
/*CA_29A_30A*/ #ifndef LTE_CACFG_CA_29A_30A_CC0_PDATA_PT1_H
/*CA_29A_30A*/ #define LTE_CACFG_CA_29A_30A_CC0_PDATA_PT1_H       LTE_PDATA_OFF
/*CA_29A_30A*/ #endif
/*CA_29A_30A*/
/*CA_29A_30A*/ #ifndef LTE_CACFG_CA_29A_30A_CC0_PDATA_PT2_H
/*CA_29A_30A*/ #define LTE_CACFG_CA_29A_30A_CC0_PDATA_PT2_H       LTE_PDATA_OFF
/*CA_29A_30A*/ #endif
/*CA_29A_30A*/
/*CA_29A_30A*/ #ifndef LTE_CACFG_CA_29A_30A_CC0_PDATA_PT3_H
/*CA_29A_30A*/ #define LTE_CACFG_CA_29A_30A_CC0_PDATA_PT3_H       LTE_PDATA_OFF
/*CA_29A_30A*/ #endif
/*CA_29A_30A*/
/*CA_29A_30A*/ #ifndef LTE_CACFG_CA_29A_30A_CC0_PDATA_PRANT_H
/*CA_29A_30A*/ #define LTE_CACFG_CA_29A_30A_CC0_PDATA_PRANT_H     LTE_PDATA_OFF
/*CA_29A_30A*/ #endif
/*CA_29A_30A*/
/*CA_29A_30A*/ #ifndef LTE_CACFG_CA_29A_30A_CC0_PDATA_PTANT_H
/*CA_29A_30A*/ #define LTE_CACFG_CA_29A_30A_CC0_PDATA_PTANT_H     LTE_PDATA_OFF
/*CA_29A_30A*/ #endif
/*CA_29A_30A*/
/*CA_29A_30A*/ #ifndef LTE_CACFG_CA_29A_30A_CC1_PDATA_PR1_H
/*CA_29A_30A*/ #define LTE_CACFG_CA_29A_30A_CC1_PDATA_PR1_H       LTE_PDATA_OFF
/*CA_29A_30A*/ #endif
/*CA_29A_30A*/
/*CA_29A_30A*/ #ifndef LTE_CACFG_CA_29A_30A_CC1_PDATA_PR2_H
/*CA_29A_30A*/ #define LTE_CACFG_CA_29A_30A_CC1_PDATA_PR2_H       LTE_PDATA_OFF
/*CA_29A_30A*/ #endif
/*CA_29A_30A*/
/*CA_29A_30A*/ #ifndef LTE_CACFG_CA_29A_30A_CC1_PDATA_PR3_H
/*CA_29A_30A*/ #define LTE_CACFG_CA_29A_30A_CC1_PDATA_PR3_H       LTE_PDATA_OFF
/*CA_29A_30A*/ #endif
/*CA_29A_30A*/
/*CA_29A_30A*/ #ifndef LTE_CACFG_CA_29A_30A_CC1_PDATA_PT1_H
/*CA_29A_30A*/ #define LTE_CACFG_CA_29A_30A_CC1_PDATA_PT1_H       LTE_PDATA_OFF
/*CA_29A_30A*/ #endif
/*CA_29A_30A*/
/*CA_29A_30A*/ #ifndef LTE_CACFG_CA_29A_30A_CC1_PDATA_PT2_H
/*CA_29A_30A*/ #define LTE_CACFG_CA_29A_30A_CC1_PDATA_PT2_H       LTE_PDATA_OFF
/*CA_29A_30A*/ #endif
/*CA_29A_30A*/
/*CA_29A_30A*/ #ifndef LTE_CACFG_CA_29A_30A_CC1_PDATA_PT3_H
/*CA_29A_30A*/ #define LTE_CACFG_CA_29A_30A_CC1_PDATA_PT3_H       LTE_PDATA_OFF
/*CA_29A_30A*/ #endif
/*CA_29A_30A*/
/*CA_29A_30A*/ #ifndef LTE_CACFG_CA_29A_30A_CC1_PDATA_PRANT_H
/*CA_29A_30A*/ #define LTE_CACFG_CA_29A_30A_CC1_PDATA_PRANT_H     LTE_PDATA_OFF
/*CA_29A_30A*/ #endif
/*CA_29A_30A*/
/*CA_29A_30A*/ #ifndef LTE_CACFG_CA_29A_30A_CC1_PDATA_PTANT_H
/*CA_29A_30A*/ #define LTE_CACFG_CA_29A_30A_CC1_PDATA_PTANT_H     LTE_PDATA_OFF
/*CA_29A_30A*/ #endif

/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

/*CA_39A_41A*/ #ifndef LTE_CACFG_CA_39A_41A_CC0_PDATA_PR1_H
/*CA_39A_41A*/ #define LTE_CACFG_CA_39A_41A_CC0_PDATA_PR1_H       LTE_PDATA_OFF
/*CA_39A_41A*/ #endif
/*CA_39A_41A*/
/*CA_39A_41A*/ #ifndef LTE_CACFG_CA_39A_41A_CC0_PDATA_PR2_H
/*CA_39A_41A*/ #define LTE_CACFG_CA_39A_41A_CC0_PDATA_PR2_H       LTE_PDATA_OFF
/*CA_39A_41A*/ #endif
/*CA_39A_41A*/
/*CA_39A_41A*/ #ifndef LTE_CACFG_CA_39A_41A_CC0_PDATA_PR3_H
/*CA_39A_41A*/ #define LTE_CACFG_CA_39A_41A_CC0_PDATA_PR3_H       LTE_PDATA_OFF
/*CA_39A_41A*/ #endif
/*CA_39A_41A*/
/*CA_39A_41A*/ #ifndef LTE_CACFG_CA_39A_41A_CC0_PDATA_PT1_H
/*CA_39A_41A*/ #define LTE_CACFG_CA_39A_41A_CC0_PDATA_PT1_H       LTE_PDATA_OFF
/*CA_39A_41A*/ #endif
/*CA_39A_41A*/
/*CA_39A_41A*/ #ifndef LTE_CACFG_CA_39A_41A_CC0_PDATA_PT2_H
/*CA_39A_41A*/ #define LTE_CACFG_CA_39A_41A_CC0_PDATA_PT2_H       LTE_PDATA_OFF
/*CA_39A_41A*/ #endif
/*CA_39A_41A*/
/*CA_39A_41A*/ #ifndef LTE_CACFG_CA_39A_41A_CC0_PDATA_PT3_H
/*CA_39A_41A*/ #define LTE_CACFG_CA_39A_41A_CC0_PDATA_PT3_H       LTE_PDATA_OFF
/*CA_39A_41A*/ #endif
/*CA_39A_41A*/
/*CA_39A_41A*/ #ifndef LTE_CACFG_CA_39A_41A_CC0_PDATA_PRANT_H
/*CA_39A_41A*/ #define LTE_CACFG_CA_39A_41A_CC0_PDATA_PRANT_H     LTE_PDATA_OFF
/*CA_39A_41A*/ #endif
/*CA_39A_41A*/
/*CA_39A_41A*/ #ifndef LTE_CACFG_CA_39A_41A_CC0_PDATA_PTANT_H
/*CA_39A_41A*/ #define LTE_CACFG_CA_39A_41A_CC0_PDATA_PTANT_H     LTE_PDATA_OFF
/*CA_39A_41A*/ #endif
/*CA_39A_41A*/
/*CA_39A_41A*/ #ifndef LTE_CACFG_CA_39A_41A_CC1_PDATA_PR1_H
/*CA_39A_41A*/ #define LTE_CACFG_CA_39A_41A_CC1_PDATA_PR1_H       LTE_PDATA_OFF
/*CA_39A_41A*/ #endif
/*CA_39A_41A*/
/*CA_39A_41A*/ #ifndef LTE_CACFG_CA_39A_41A_CC1_PDATA_PR2_H
/*CA_39A_41A*/ #define LTE_CACFG_CA_39A_41A_CC1_PDATA_PR2_H       LTE_PDATA_OFF
/*CA_39A_41A*/ #endif
/*CA_39A_41A*/
/*CA_39A_41A*/ #ifndef LTE_CACFG_CA_39A_41A_CC1_PDATA_PR3_H
/*CA_39A_41A*/ #define LTE_CACFG_CA_39A_41A_CC1_PDATA_PR3_H       LTE_PDATA_OFF
/*CA_39A_41A*/ #endif
/*CA_39A_41A*/
/*CA_39A_41A*/ #ifndef LTE_CACFG_CA_39A_41A_CC1_PDATA_PT1_H
/*CA_39A_41A*/ #define LTE_CACFG_CA_39A_41A_CC1_PDATA_PT1_H       LTE_PDATA_OFF
/*CA_39A_41A*/ #endif
/*CA_39A_41A*/
/*CA_39A_41A*/ #ifndef LTE_CACFG_CA_39A_41A_CC1_PDATA_PT2_H
/*CA_39A_41A*/ #define LTE_CACFG_CA_39A_41A_CC1_PDATA_PT2_H       LTE_PDATA_OFF
/*CA_39A_41A*/ #endif
/*CA_39A_41A*/
/*CA_39A_41A*/ #ifndef LTE_CACFG_CA_39A_41A_CC1_PDATA_PT3_H
/*CA_39A_41A*/ #define LTE_CACFG_CA_39A_41A_CC1_PDATA_PT3_H       LTE_PDATA_OFF
/*CA_39A_41A*/ #endif
/*CA_39A_41A*/
/*CA_39A_41A*/ #ifndef LTE_CACFG_CA_39A_41A_CC1_PDATA_PRANT_H
/*CA_39A_41A*/ #define LTE_CACFG_CA_39A_41A_CC1_PDATA_PRANT_H     LTE_PDATA_OFF
/*CA_39A_41A*/ #endif
/*CA_39A_41A*/
/*CA_39A_41A*/ #ifndef LTE_CACFG_CA_39A_41A_CC1_PDATA_PTANT_H
/*CA_39A_41A*/ #define LTE_CACFG_CA_39A_41A_CC1_PDATA_PTANT_H     LTE_PDATA_OFF
/*CA_39A_41A*/ #endif

/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

/*CA_2A_2A*/ #ifndef LTE_CACFG_CA_2A_2A_CC0_PDATA_PR1_H
/*CA_2A_2A*/ #define LTE_CACFG_CA_2A_2A_CC0_PDATA_PR1_H                  LTE_PDATA_OFF
/*CA_2A_2A*/ #endif
/*CA_2A_2A*/
/*CA_2A_2A*/ #ifndef LTE_CACFG_CA_2A_2A_CC0_PDATA_PR2_H
/*CA_2A_2A*/ #define LTE_CACFG_CA_2A_2A_CC0_PDATA_PR2_H                  LTE_PDATA_OFF
/*CA_2A_2A*/ #endif
/*CA_2A_2A*/
/*CA_2A_2A*/ #ifndef LTE_CACFG_CA_2A_2A_CC0_PDATA_PR3_H
/*CA_2A_2A*/ #define LTE_CACFG_CA_2A_2A_CC0_PDATA_PR3_H                  LTE_PDATA_OFF
/*CA_2A_2A*/ #endif
/*CA_2A_2A*/
/*CA_2A_2A*/ #ifndef LTE_CACFG_CA_2A_2A_CC0_PDATA_PT1_H
/*CA_2A_2A*/ #define LTE_CACFG_CA_2A_2A_CC0_PDATA_PT1_H                  LTE_PDATA_OFF
/*CA_2A_2A*/ #endif
/*CA_2A_2A*/
/*CA_2A_2A*/ #ifndef LTE_CACFG_CA_2A_2A_CC0_PDATA_PT2_H
/*CA_2A_2A*/ #define LTE_CACFG_CA_2A_2A_CC0_PDATA_PT2_H                  LTE_PDATA_OFF
/*CA_2A_2A*/ #endif
/*CA_2A_2A*/
/*CA_2A_2A*/ #ifndef LTE_CACFG_CA_2A_2A_CC0_PDATA_PT3_H
/*CA_2A_2A*/ #define LTE_CACFG_CA_2A_2A_CC0_PDATA_PT3_H                  LTE_PDATA_OFF
/*CA_2A_2A*/ #endif
/*CA_2A_2A*/
/*CA_2A_2A*/ #ifndef LTE_CACFG_CA_2A_2A_CC0_PDATA_PRANT_H
/*CA_2A_2A*/ #define LTE_CACFG_CA_2A_2A_CC0_PDATA_PRANT_H                LTE_PDATA_OFF
/*CA_2A_2A*/ #endif
/*CA_2A_2A*/
/*CA_2A_2A*/ #ifndef LTE_CACFG_CA_2A_2A_CC0_PDATA_PTANT_H
/*CA_2A_2A*/ #define LTE_CACFG_CA_2A_2A_CC0_PDATA_PTANT_H                LTE_PDATA_OFF
/*CA_2A_2A*/ #endif
/*CA_2A_2A*/
/*CA_2A_2A*/ #ifdef  LTE_CACFG_CA_2A_2A_CC0_PDATA_PR1_H
/*CA_2A_2A*/ #define LTE_CACFG_CA_2A_2A_CC1_PDATA_PR1_H                  LTE_CACFG_CA_2A_2A_CC0_PDATA_PR1_H
/*CA_2A_2A*/ #endif
/*CA_2A_2A*/
/*CA_2A_2A*/ #ifdef  LTE_CACFG_CA_2A_2A_CC0_PDATA_PR2_H
/*CA_2A_2A*/ #define LTE_CACFG_CA_2A_2A_CC1_PDATA_PR2_H                  LTE_CACFG_CA_2A_2A_CC0_PDATA_PR2_H
/*CA_2A_2A*/ #endif
/*CA_2A_2A*/
/*CA_2A_2A*/ #ifdef  LTE_CACFG_CA_2A_2A_CC0_PDATA_PR3_H
/*CA_2A_2A*/ #define LTE_CACFG_CA_2A_2A_CC1_PDATA_PR3_H                  LTE_CACFG_CA_2A_2A_CC0_PDATA_PR3_H
/*CA_2A_2A*/ #endif
/*CA_2A_2A*/
/*CA_2A_2A*/ #ifdef  LTE_CACFG_CA_2A_2A_CC0_PDATA_PT1_H
/*CA_2A_2A*/ #define LTE_CACFG_CA_2A_2A_CC1_PDATA_PT1_H                  LTE_CACFG_CA_2A_2A_CC0_PDATA_PT1_H
/*CA_2A_2A*/ #endif
/*CA_2A_2A*/
/*CA_2A_2A*/ #ifdef  LTE_CACFG_CA_2A_2A_CC0_PDATA_PT2_H
/*CA_2A_2A*/ #define LTE_CACFG_CA_2A_2A_CC1_PDATA_PT2_H                  LTE_CACFG_CA_2A_2A_CC0_PDATA_PT2_H
/*CA_2A_2A*/ #endif
/*CA_2A_2A*/
/*CA_2A_2A*/ #ifdef  LTE_CACFG_CA_2A_2A_CC0_PDATA_PT3_H
/*CA_2A_2A*/ #define LTE_CACFG_CA_2A_2A_CC1_PDATA_PT3_H                  LTE_CACFG_CA_2A_2A_CC0_PDATA_PT3_H
/*CA_2A_2A*/ #endif
/*CA_2A_2A*/
/*CA_2A_2A*/ #ifdef  LTE_CACFG_CA_2A_2A_CC0_PDATA_PRANT_H
/*CA_2A_2A*/ #define LTE_CACFG_CA_2A_2A_CC1_PDATA_PRANT_H                LTE_CACFG_CA_2A_2A_CC0_PDATA_PRANT_H
/*CA_2A_2A*/ #endif
/*CA_2A_2A*/
/*CA_2A_2A*/ #ifdef  LTE_CACFG_CA_2A_2A_CC0_PDATA_PTANT_H
/*CA_2A_2A*/ #define LTE_CACFG_CA_2A_2A_CC1_PDATA_PTANT_H                LTE_CACFG_CA_2A_2A_CC0_PDATA_PTANT_H
/*CA_2A_2A*/ #endif

/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

/*CA_3A_3A*/ #ifndef LTE_CACFG_CA_3A_3A_CC0_PDATA_PR1_H
/*CA_3A_3A*/ #define LTE_CACFG_CA_3A_3A_CC0_PDATA_PR1_H                  LTE_PDATA_OFF
/*CA_3A_3A*/ #endif
/*CA_3A_3A*/
/*CA_3A_3A*/ #ifndef LTE_CACFG_CA_3A_3A_CC0_PDATA_PR2_H
/*CA_3A_3A*/ #define LTE_CACFG_CA_3A_3A_CC0_PDATA_PR2_H                  LTE_PDATA_OFF
/*CA_3A_3A*/ #endif
/*CA_3A_3A*/
/*CA_3A_3A*/ #ifndef LTE_CACFG_CA_3A_3A_CC0_PDATA_PR3_H
/*CA_3A_3A*/ #define LTE_CACFG_CA_3A_3A_CC0_PDATA_PR3_H                  LTE_PDATA_OFF
/*CA_3A_3A*/ #endif
/*CA_3A_3A*/
/*CA_3A_3A*/ #ifndef LTE_CACFG_CA_3A_3A_CC0_PDATA_PT1_H
/*CA_3A_3A*/ #define LTE_CACFG_CA_3A_3A_CC0_PDATA_PT1_H                  LTE_PDATA_OFF
/*CA_3A_3A*/ #endif
/*CA_3A_3A*/
/*CA_3A_3A*/ #ifndef LTE_CACFG_CA_3A_3A_CC0_PDATA_PT2_H
/*CA_3A_3A*/ #define LTE_CACFG_CA_3A_3A_CC0_PDATA_PT2_H                  LTE_PDATA_OFF
/*CA_3A_3A*/ #endif
/*CA_3A_3A*/
/*CA_3A_3A*/ #ifndef LTE_CACFG_CA_3A_3A_CC0_PDATA_PT3_H
/*CA_3A_3A*/ #define LTE_CACFG_CA_3A_3A_CC0_PDATA_PT3_H                  LTE_PDATA_OFF
/*CA_3A_3A*/ #endif
/*CA_3A_3A*/
/*CA_3A_3A*/ #ifndef LTE_CACFG_CA_3A_3A_CC0_PDATA_PRANT_H
/*CA_3A_3A*/ #define LTE_CACFG_CA_3A_3A_CC0_PDATA_PRANT_H                LTE_PDATA_OFF
/*CA_3A_3A*/ #endif
/*CA_3A_3A*/
/*CA_3A_3A*/ #ifndef LTE_CACFG_CA_3A_3A_CC0_PDATA_PTANT_H
/*CA_3A_3A*/ #define LTE_CACFG_CA_3A_3A_CC0_PDATA_PTANT_H                LTE_PDATA_OFF
/*CA_3A_3A*/ #endif
/*CA_3A_3A*/
/*CA_3A_3A*/ #ifdef  LTE_CACFG_CA_3A_3A_CC0_PDATA_PR1_H
/*CA_3A_3A*/ #define LTE_CACFG_CA_3A_3A_CC1_PDATA_PR1_H                  LTE_CACFG_CA_3A_3A_CC0_PDATA_PR1_H
/*CA_3A_3A*/ #endif
/*CA_3A_3A*/
/*CA_3A_3A*/ #ifdef  LTE_CACFG_CA_3A_3A_CC0_PDATA_PR2_H
/*CA_3A_3A*/ #define LTE_CACFG_CA_3A_3A_CC1_PDATA_PR2_H                  LTE_CACFG_CA_3A_3A_CC0_PDATA_PR2_H
/*CA_3A_3A*/ #endif
/*CA_3A_3A*/
/*CA_3A_3A*/ #ifdef  LTE_CACFG_CA_3A_3A_CC0_PDATA_PR3_H
/*CA_3A_3A*/ #define LTE_CACFG_CA_3A_3A_CC1_PDATA_PR3_H                  LTE_CACFG_CA_3A_3A_CC0_PDATA_PR3_H
/*CA_3A_3A*/ #endif
/*CA_3A_3A*/
/*CA_3A_3A*/ #ifdef  LTE_CACFG_CA_3A_3A_CC0_PDATA_PT1_H
/*CA_3A_3A*/ #define LTE_CACFG_CA_3A_3A_CC1_PDATA_PT1_H                  LTE_CACFG_CA_3A_3A_CC0_PDATA_PT1_H
/*CA_3A_3A*/ #endif
/*CA_3A_3A*/
/*CA_3A_3A*/ #ifdef  LTE_CACFG_CA_3A_3A_CC0_PDATA_PT2_H
/*CA_3A_3A*/ #define LTE_CACFG_CA_3A_3A_CC1_PDATA_PT2_H                  LTE_CACFG_CA_3A_3A_CC0_PDATA_PT2_H
/*CA_3A_3A*/ #endif
/*CA_3A_3A*/
/*CA_3A_3A*/ #ifdef  LTE_CACFG_CA_3A_3A_CC0_PDATA_PT3_H
/*CA_3A_3A*/ #define LTE_CACFG_CA_3A_3A_CC1_PDATA_PT3_H                  LTE_CACFG_CA_3A_3A_CC0_PDATA_PT3_H
/*CA_3A_3A*/ #endif
/*CA_3A_3A*/
/*CA_3A_3A*/ #ifdef  LTE_CACFG_CA_3A_3A_CC0_PDATA_PRANT_H
/*CA_3A_3A*/ #define LTE_CACFG_CA_3A_3A_CC1_PDATA_PRANT_H                LTE_CACFG_CA_3A_3A_CC0_PDATA_PRANT_H
/*CA_3A_3A*/ #endif
/*CA_3A_3A*/
/*CA_3A_3A*/ #ifdef  LTE_CACFG_CA_3A_3A_CC0_PDATA_PTANT_H
/*CA_3A_3A*/ #define LTE_CACFG_CA_3A_3A_CC1_PDATA_PTANT_H                LTE_CACFG_CA_3A_3A_CC0_PDATA_PTANT_H
/*CA_3A_3A*/ #endif

/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

/*CA_4A_4A*/ #ifndef LTE_CACFG_CA_4A_4A_CC0_PDATA_PR1_H
/*CA_4A_4A*/ #define LTE_CACFG_CA_4A_4A_CC0_PDATA_PR1_H                  LTE_PDATA_OFF
/*CA_4A_4A*/ #endif
/*CA_4A_4A*/
/*CA_4A_4A*/ #ifndef LTE_CACFG_CA_4A_4A_CC0_PDATA_PR2_H
/*CA_4A_4A*/ #define LTE_CACFG_CA_4A_4A_CC0_PDATA_PR2_H                  LTE_PDATA_OFF
/*CA_4A_4A*/ #endif
/*CA_4A_4A*/
/*CA_4A_4A*/ #ifndef LTE_CACFG_CA_4A_4A_CC0_PDATA_PR3_H
/*CA_4A_4A*/ #define LTE_CACFG_CA_4A_4A_CC0_PDATA_PR3_H                  LTE_PDATA_OFF
/*CA_4A_4A*/ #endif
/*CA_4A_4A*/
/*CA_4A_4A*/ #ifndef LTE_CACFG_CA_4A_4A_CC0_PDATA_PT1_H
/*CA_4A_4A*/ #define LTE_CACFG_CA_4A_4A_CC0_PDATA_PT1_H                  LTE_PDATA_OFF
/*CA_4A_4A*/ #endif
/*CA_4A_4A*/
/*CA_4A_4A*/ #ifndef LTE_CACFG_CA_4A_4A_CC0_PDATA_PT2_H
/*CA_4A_4A*/ #define LTE_CACFG_CA_4A_4A_CC0_PDATA_PT2_H                  LTE_PDATA_OFF
/*CA_4A_4A*/ #endif
/*CA_4A_4A*/
/*CA_4A_4A*/ #ifndef LTE_CACFG_CA_4A_4A_CC0_PDATA_PT3_H
/*CA_4A_4A*/ #define LTE_CACFG_CA_4A_4A_CC0_PDATA_PT3_H                  LTE_PDATA_OFF
/*CA_4A_4A*/ #endif
/*CA_4A_4A*/
/*CA_4A_4A*/ #ifndef LTE_CACFG_CA_4A_4A_CC0_PDATA_PRANT_H
/*CA_4A_4A*/ #define LTE_CACFG_CA_4A_4A_CC0_PDATA_PRANT_H                LTE_PDATA_OFF
/*CA_4A_4A*/ #endif
/*CA_4A_4A*/
/*CA_4A_4A*/ #ifndef LTE_CACFG_CA_4A_4A_CC0_PDATA_PTANT_H
/*CA_4A_4A*/ #define LTE_CACFG_CA_4A_4A_CC0_PDATA_PTANT_H                LTE_PDATA_OFF
/*CA_4A_4A*/ #endif
/*CA_4A_4A*/
/*CA_4A_4A*/ #ifdef  LTE_CACFG_CA_4A_4A_CC0_PDATA_PR1_H
/*CA_4A_4A*/ #define LTE_CACFG_CA_4A_4A_CC1_PDATA_PR1_H                  LTE_CACFG_CA_4A_4A_CC0_PDATA_PR1_H
/*CA_4A_4A*/ #endif
/*CA_4A_4A*/
/*CA_4A_4A*/ #ifdef  LTE_CACFG_CA_4A_4A_CC0_PDATA_PR2_H
/*CA_4A_4A*/ #define LTE_CACFG_CA_4A_4A_CC1_PDATA_PR2_H                  LTE_CACFG_CA_4A_4A_CC0_PDATA_PR2_H
/*CA_4A_4A*/ #endif
/*CA_4A_4A*/
/*CA_4A_4A*/ #ifdef  LTE_CACFG_CA_4A_4A_CC0_PDATA_PR3_H
/*CA_4A_4A*/ #define LTE_CACFG_CA_4A_4A_CC1_PDATA_PR3_H                  LTE_CACFG_CA_4A_4A_CC0_PDATA_PR3_H
/*CA_4A_4A*/ #endif
/*CA_4A_4A*/
/*CA_4A_4A*/ #ifdef  LTE_CACFG_CA_4A_4A_CC0_PDATA_PT1_H
/*CA_4A_4A*/ #define LTE_CACFG_CA_4A_4A_CC1_PDATA_PT1_H                  LTE_CACFG_CA_4A_4A_CC0_PDATA_PT1_H
/*CA_4A_4A*/ #endif
/*CA_4A_4A*/
/*CA_4A_4A*/ #ifdef  LTE_CACFG_CA_4A_4A_CC0_PDATA_PT2_H
/*CA_4A_4A*/ #define LTE_CACFG_CA_4A_4A_CC1_PDATA_PT2_H                  LTE_CACFG_CA_4A_4A_CC0_PDATA_PT2_H
/*CA_4A_4A*/ #endif
/*CA_4A_4A*/
/*CA_4A_4A*/ #ifdef  LTE_CACFG_CA_4A_4A_CC0_PDATA_PT3_H
/*CA_4A_4A*/ #define LTE_CACFG_CA_4A_4A_CC1_PDATA_PT3_H                  LTE_CACFG_CA_4A_4A_CC0_PDATA_PT3_H
/*CA_4A_4A*/ #endif
/*CA_4A_4A*/
/*CA_4A_4A*/ #ifdef  LTE_CACFG_CA_4A_4A_CC0_PDATA_PRANT_H
/*CA_4A_4A*/ #define LTE_CACFG_CA_4A_4A_CC1_PDATA_PRANT_H                LTE_CACFG_CA_4A_4A_CC0_PDATA_PRANT_H
/*CA_4A_4A*/ #endif
/*CA_4A_4A*/
/*CA_4A_4A*/ #ifdef  LTE_CACFG_CA_4A_4A_CC0_PDATA_PTANT_H
/*CA_4A_4A*/ #define LTE_CACFG_CA_4A_4A_CC1_PDATA_PTANT_H                LTE_CACFG_CA_4A_4A_CC0_PDATA_PTANT_H
/*CA_4A_4A*/ #endif

/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

/*CA_7A_7A*/ #ifndef LTE_CACFG_CA_7A_7A_CC0_PDATA_PR1_H
/*CA_7A_7A*/ #define LTE_CACFG_CA_7A_7A_CC0_PDATA_PR1_H                  LTE_PDATA_OFF
/*CA_7A_7A*/ #endif
/*CA_7A_7A*/
/*CA_7A_7A*/ #ifndef LTE_CACFG_CA_7A_7A_CC0_PDATA_PR2_H
/*CA_7A_7A*/ #define LTE_CACFG_CA_7A_7A_CC0_PDATA_PR2_H                  LTE_PDATA_OFF
/*CA_7A_7A*/ #endif
/*CA_7A_7A*/
/*CA_7A_7A*/ #ifndef LTE_CACFG_CA_7A_7A_CC0_PDATA_PR3_H
/*CA_7A_7A*/ #define LTE_CACFG_CA_7A_7A_CC0_PDATA_PR3_H                  LTE_PDATA_OFF
/*CA_7A_7A*/ #endif
/*CA_7A_7A*/
/*CA_7A_7A*/ #ifndef LTE_CACFG_CA_7A_7A_CC0_PDATA_PT1_H
/*CA_7A_7A*/ #define LTE_CACFG_CA_7A_7A_CC0_PDATA_PT1_H                  LTE_PDATA_OFF
/*CA_7A_7A*/ #endif
/*CA_7A_7A*/
/*CA_7A_7A*/ #ifndef LTE_CACFG_CA_7A_7A_CC0_PDATA_PT2_H
/*CA_7A_7A*/ #define LTE_CACFG_CA_7A_7A_CC0_PDATA_PT2_H                  LTE_PDATA_OFF
/*CA_7A_7A*/ #endif
/*CA_7A_7A*/
/*CA_7A_7A*/ #ifndef LTE_CACFG_CA_7A_7A_CC0_PDATA_PT3_H
/*CA_7A_7A*/ #define LTE_CACFG_CA_7A_7A_CC0_PDATA_PT3_H                  LTE_PDATA_OFF
/*CA_7A_7A*/ #endif
/*CA_7A_7A*/
/*CA_7A_7A*/ #ifndef LTE_CACFG_CA_7A_7A_CC0_PDATA_PRANT_H
/*CA_7A_7A*/ #define LTE_CACFG_CA_7A_7A_CC0_PDATA_PRANT_H                LTE_PDATA_OFF
/*CA_7A_7A*/ #endif
/*CA_7A_7A*/
/*CA_7A_7A*/ #ifndef LTE_CACFG_CA_7A_7A_CC0_PDATA_PTANT_H
/*CA_7A_7A*/ #define LTE_CACFG_CA_7A_7A_CC0_PDATA_PTANT_H                LTE_PDATA_OFF
/*CA_7A_7A*/ #endif
/*CA_7A_7A*/
/*CA_7A_7A*/ #ifdef  LTE_CACFG_CA_7A_7A_CC0_PDATA_PR1_H
/*CA_7A_7A*/ #define LTE_CACFG_CA_7A_7A_CC1_PDATA_PR1_H                  LTE_CACFG_CA_7A_7A_CC0_PDATA_PR1_H
/*CA_7A_7A*/ #endif
/*CA_7A_7A*/
/*CA_7A_7A*/ #ifdef  LTE_CACFG_CA_7A_7A_CC0_PDATA_PR2_H
/*CA_7A_7A*/ #define LTE_CACFG_CA_7A_7A_CC1_PDATA_PR2_H                  LTE_CACFG_CA_7A_7A_CC0_PDATA_PR2_H
/*CA_7A_7A*/ #endif
/*CA_7A_7A*/
/*CA_7A_7A*/ #ifdef  LTE_CACFG_CA_7A_7A_CC0_PDATA_PR3_H
/*CA_7A_7A*/ #define LTE_CACFG_CA_7A_7A_CC1_PDATA_PR3_H                  LTE_CACFG_CA_7A_7A_CC0_PDATA_PR3_H
/*CA_7A_7A*/ #endif
/*CA_7A_7A*/
/*CA_7A_7A*/ #ifdef  LTE_CACFG_CA_7A_7A_CC0_PDATA_PT1_H
/*CA_7A_7A*/ #define LTE_CACFG_CA_7A_7A_CC1_PDATA_PT1_H                  LTE_CACFG_CA_7A_7A_CC0_PDATA_PT1_H
/*CA_7A_7A*/ #endif
/*CA_7A_7A*/
/*CA_7A_7A*/ #ifdef  LTE_CACFG_CA_7A_7A_CC0_PDATA_PT2_H
/*CA_7A_7A*/ #define LTE_CACFG_CA_7A_7A_CC1_PDATA_PT2_H                  LTE_CACFG_CA_7A_7A_CC0_PDATA_PT2_H
/*CA_7A_7A*/ #endif
/*CA_7A_7A*/
/*CA_7A_7A*/ #ifdef  LTE_CACFG_CA_7A_7A_CC0_PDATA_PT3_H
/*CA_7A_7A*/ #define LTE_CACFG_CA_7A_7A_CC1_PDATA_PT3_H                  LTE_CACFG_CA_7A_7A_CC0_PDATA_PT3_H
/*CA_7A_7A*/ #endif
/*CA_7A_7A*/
/*CA_7A_7A*/ #ifdef  LTE_CACFG_CA_7A_7A_CC0_PDATA_PRANT_H
/*CA_7A_7A*/ #define LTE_CACFG_CA_7A_7A_CC1_PDATA_PRANT_H                LTE_CACFG_CA_7A_7A_CC0_PDATA_PRANT_H
/*CA_7A_7A*/ #endif
/*CA_7A_7A*/
/*CA_7A_7A*/ #ifdef  LTE_CACFG_CA_7A_7A_CC0_PDATA_PTANT_H
/*CA_7A_7A*/ #define LTE_CACFG_CA_7A_7A_CC1_PDATA_PTANT_H                LTE_CACFG_CA_7A_7A_CC0_PDATA_PTANT_H
/*CA_7A_7A*/ #endif

/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

/*CA_25A_25A*/ #ifndef LTE_CACFG_CA_25A_25A_CC0_PDATA_PR1_H
/*CA_25A_25A*/ #define LTE_CACFG_CA_25A_25A_CC0_PDATA_PR1_H                  LTE_PDATA_OFF
/*CA_25A_25A*/ #endif
/*CA_25A_25A*/
/*CA_25A_25A*/ #ifndef LTE_CACFG_CA_25A_25A_CC0_PDATA_PR2_H
/*CA_25A_25A*/ #define LTE_CACFG_CA_25A_25A_CC0_PDATA_PR2_H                  LTE_PDATA_OFF
/*CA_25A_25A*/ #endif
/*CA_25A_25A*/
/*CA_25A_25A*/ #ifndef LTE_CACFG_CA_25A_25A_CC0_PDATA_PR3_H
/*CA_25A_25A*/ #define LTE_CACFG_CA_25A_25A_CC0_PDATA_PR3_H                  LTE_PDATA_OFF
/*CA_25A_25A*/ #endif
/*CA_25A_25A*/
/*CA_25A_25A*/ #ifndef LTE_CACFG_CA_25A_25A_CC0_PDATA_PT1_H
/*CA_25A_25A*/ #define LTE_CACFG_CA_25A_25A_CC0_PDATA_PT1_H                  LTE_PDATA_OFF
/*CA_25A_25A*/ #endif
/*CA_25A_25A*/
/*CA_25A_25A*/ #ifndef LTE_CACFG_CA_25A_25A_CC0_PDATA_PT2_H
/*CA_25A_25A*/ #define LTE_CACFG_CA_25A_25A_CC0_PDATA_PT2_H                  LTE_PDATA_OFF
/*CA_25A_25A*/ #endif
/*CA_25A_25A*/
/*CA_25A_25A*/ #ifndef LTE_CACFG_CA_25A_25A_CC0_PDATA_PT3_H
/*CA_25A_25A*/ #define LTE_CACFG_CA_25A_25A_CC0_PDATA_PT3_H                  LTE_PDATA_OFF
/*CA_25A_25A*/ #endif
/*CA_25A_25A*/
/*CA_25A_25A*/ #ifndef LTE_CACFG_CA_25A_25A_CC0_PDATA_PRANT_H
/*CA_25A_25A*/ #define LTE_CACFG_CA_25A_25A_CC0_PDATA_PRANT_H                LTE_PDATA_OFF
/*CA_25A_25A*/ #endif
/*CA_25A_25A*/
/*CA_25A_25A*/ #ifndef LTE_CACFG_CA_25A_25A_CC0_PDATA_PTANT_H
/*CA_25A_25A*/ #define LTE_CACFG_CA_25A_25A_CC0_PDATA_PTANT_H                LTE_PDATA_OFF
/*CA_25A_25A*/ #endif
/*CA_25A_25A*/
/*CA_25A_25A*/ #ifdef  LTE_CACFG_CA_25A_25A_CC0_PDATA_PR1_H
/*CA_25A_25A*/ #define LTE_CACFG_CA_25A_25A_CC1_PDATA_PR1_H                  LTE_CACFG_CA_25A_25A_CC0_PDATA_PR1_H
/*CA_25A_25A*/ #endif
/*CA_25A_25A*/
/*CA_25A_25A*/ #ifdef  LTE_CACFG_CA_25A_25A_CC0_PDATA_PR2_H
/*CA_25A_25A*/ #define LTE_CACFG_CA_25A_25A_CC1_PDATA_PR2_H                  LTE_CACFG_CA_25A_25A_CC0_PDATA_PR2_H
/*CA_25A_25A*/ #endif
/*CA_25A_25A*/
/*CA_25A_25A*/ #ifdef  LTE_CACFG_CA_25A_25A_CC0_PDATA_PR3_H
/*CA_25A_25A*/ #define LTE_CACFG_CA_25A_25A_CC1_PDATA_PR3_H                  LTE_CACFG_CA_25A_25A_CC0_PDATA_PR3_H
/*CA_25A_25A*/ #endif
/*CA_25A_25A*/
/*CA_25A_25A*/ #ifdef  LTE_CACFG_CA_25A_25A_CC0_PDATA_PT1_H
/*CA_25A_25A*/ #define LTE_CACFG_CA_25A_25A_CC1_PDATA_PT1_H                  LTE_CACFG_CA_25A_25A_CC0_PDATA_PT1_H
/*CA_25A_25A*/ #endif
/*CA_25A_25A*/
/*CA_25A_25A*/ #ifdef  LTE_CACFG_CA_25A_25A_CC0_PDATA_PT2_H
/*CA_25A_25A*/ #define LTE_CACFG_CA_25A_25A_CC1_PDATA_PT2_H                  LTE_CACFG_CA_25A_25A_CC0_PDATA_PT2_H
/*CA_25A_25A*/ #endif
/*CA_25A_25A*/
/*CA_25A_25A*/ #ifdef  LTE_CACFG_CA_25A_25A_CC0_PDATA_PT3_H
/*CA_25A_25A*/ #define LTE_CACFG_CA_25A_25A_CC1_PDATA_PT3_H                  LTE_CACFG_CA_25A_25A_CC0_PDATA_PT3_H
/*CA_25A_25A*/ #endif
/*CA_25A_25A*/
/*CA_25A_25A*/ #ifdef  LTE_CACFG_CA_25A_25A_CC0_PDATA_PRANT_H
/*CA_25A_25A*/ #define LTE_CACFG_CA_25A_25A_CC1_PDATA_PRANT_H                LTE_CACFG_CA_25A_25A_CC0_PDATA_PRANT_H
/*CA_25A_25A*/ #endif
/*CA_25A_25A*/
/*CA_25A_25A*/ #ifdef  LTE_CACFG_CA_25A_25A_CC0_PDATA_PTANT_H
/*CA_25A_25A*/ #define LTE_CACFG_CA_25A_25A_CC1_PDATA_PTANT_H                LTE_CACFG_CA_25A_25A_CC0_PDATA_PTANT_H
/*CA_25A_25A*/ #endif

/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

/*CA_41A_41A*/ #ifndef LTE_CACFG_CA_41A_41A_CC0_PDATA_PR1_H
/*CA_41A_41A*/ #define LTE_CACFG_CA_41A_41A_CC0_PDATA_PR1_H                  LTE_PDATA_OFF
/*CA_41A_41A*/ #endif
/*CA_41A_41A*/
/*CA_41A_41A*/ #ifndef LTE_CACFG_CA_41A_41A_CC0_PDATA_PR2_H
/*CA_41A_41A*/ #define LTE_CACFG_CA_41A_41A_CC0_PDATA_PR2_H                  LTE_PDATA_OFF
/*CA_41A_41A*/ #endif
/*CA_41A_41A*/
/*CA_41A_41A*/ #ifndef LTE_CACFG_CA_41A_41A_CC0_PDATA_PR3_H
/*CA_41A_41A*/ #define LTE_CACFG_CA_41A_41A_CC0_PDATA_PR3_H                  LTE_PDATA_OFF
/*CA_41A_41A*/ #endif
/*CA_41A_41A*/
/*CA_41A_41A*/ #ifndef LTE_CACFG_CA_41A_41A_CC0_PDATA_PT1_H
/*CA_41A_41A*/ #define LTE_CACFG_CA_41A_41A_CC0_PDATA_PT1_H                  LTE_PDATA_OFF
/*CA_41A_41A*/ #endif
/*CA_41A_41A*/
/*CA_41A_41A*/ #ifndef LTE_CACFG_CA_41A_41A_CC0_PDATA_PT2_H
/*CA_41A_41A*/ #define LTE_CACFG_CA_41A_41A_CC0_PDATA_PT2_H                  LTE_PDATA_OFF
/*CA_41A_41A*/ #endif
/*CA_41A_41A*/
/*CA_41A_41A*/ #ifndef LTE_CACFG_CA_41A_41A_CC0_PDATA_PT3_H
/*CA_41A_41A*/ #define LTE_CACFG_CA_41A_41A_CC0_PDATA_PT3_H                  LTE_PDATA_OFF
/*CA_41A_41A*/ #endif
/*CA_41A_41A*/
/*CA_41A_41A*/ #ifndef LTE_CACFG_CA_41A_41A_CC0_PDATA_PRANT_H
/*CA_41A_41A*/ #define LTE_CACFG_CA_41A_41A_CC0_PDATA_PRANT_H                LTE_PDATA_OFF
/*CA_41A_41A*/ #endif
/*CA_41A_41A*/
/*CA_41A_41A*/ #ifndef LTE_CACFG_CA_41A_41A_CC0_PDATA_PTANT_H
/*CA_41A_41A*/ #define LTE_CACFG_CA_41A_41A_CC0_PDATA_PTANT_H                LTE_PDATA_OFF
/*CA_41A_41A*/ #endif
/*CA_41A_41A*/
/*CA_41A_41A*/ #ifdef  LTE_CACFG_CA_41A_41A_CC0_PDATA_PR1_H
/*CA_41A_41A*/ #define LTE_CACFG_CA_41A_41A_CC1_PDATA_PR1_H                  LTE_CACFG_CA_41A_41A_CC0_PDATA_PR1_H
/*CA_41A_41A*/ #endif
/*CA_41A_41A*/
/*CA_41A_41A*/ #ifdef  LTE_CACFG_CA_41A_41A_CC0_PDATA_PR2_H
/*CA_41A_41A*/ #define LTE_CACFG_CA_41A_41A_CC1_PDATA_PR2_H                  LTE_CACFG_CA_41A_41A_CC0_PDATA_PR2_H
/*CA_41A_41A*/ #endif
/*CA_41A_41A*/
/*CA_41A_41A*/ #ifdef  LTE_CACFG_CA_41A_41A_CC0_PDATA_PR3_H
/*CA_41A_41A*/ #define LTE_CACFG_CA_41A_41A_CC1_PDATA_PR3_H                  LTE_CACFG_CA_41A_41A_CC0_PDATA_PR3_H
/*CA_41A_41A*/ #endif
/*CA_41A_41A*/
/*CA_41A_41A*/ #ifdef  LTE_CACFG_CA_41A_41A_CC0_PDATA_PT1_H
/*CA_41A_41A*/ #define LTE_CACFG_CA_41A_41A_CC1_PDATA_PT1_H                  LTE_CACFG_CA_41A_41A_CC0_PDATA_PT1_H
/*CA_41A_41A*/ #endif
/*CA_41A_41A*/
/*CA_41A_41A*/ #ifdef  LTE_CACFG_CA_41A_41A_CC0_PDATA_PT2_H
/*CA_41A_41A*/ #define LTE_CACFG_CA_41A_41A_CC1_PDATA_PT2_H                  LTE_CACFG_CA_41A_41A_CC0_PDATA_PT2_H
/*CA_41A_41A*/ #endif
/*CA_41A_41A*/
/*CA_41A_41A*/ #ifdef  LTE_CACFG_CA_41A_41A_CC0_PDATA_PT3_H
/*CA_41A_41A*/ #define LTE_CACFG_CA_41A_41A_CC1_PDATA_PT3_H                  LTE_CACFG_CA_41A_41A_CC0_PDATA_PT3_H
/*CA_41A_41A*/ #endif
/*CA_41A_41A*/
/*CA_41A_41A*/ #ifdef  LTE_CACFG_CA_41A_41A_CC0_PDATA_PRANT_H
/*CA_41A_41A*/ #define LTE_CACFG_CA_41A_41A_CC1_PDATA_PRANT_H                LTE_CACFG_CA_41A_41A_CC0_PDATA_PRANT_H
/*CA_41A_41A*/ #endif
/*CA_41A_41A*/
/*CA_41A_41A*/ #ifdef  LTE_CACFG_CA_41A_41A_CC0_PDATA_PTANT_H
/*CA_41A_41A*/ #define LTE_CACFG_CA_41A_41A_CC1_PDATA_PTANT_H                LTE_CACFG_CA_41A_41A_CC0_PDATA_PTANT_H
/*CA_41A_41A*/ #endif

/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

/*CA_42A_42A*/ #ifndef LTE_CACFG_CA_42A_42A_CC0_PDATA_PR1_H
/*CA_42A_42A*/ #define LTE_CACFG_CA_42A_42A_CC0_PDATA_PR1_H                  LTE_PDATA_OFF
/*CA_42A_42A*/ #endif
/*CA_42A_42A*/
/*CA_42A_42A*/ #ifndef LTE_CACFG_CA_42A_42A_CC0_PDATA_PR2_H
/*CA_42A_42A*/ #define LTE_CACFG_CA_42A_42A_CC0_PDATA_PR2_H                  LTE_PDATA_OFF
/*CA_42A_42A*/ #endif
/*CA_42A_42A*/
/*CA_42A_42A*/ #ifndef LTE_CACFG_CA_42A_42A_CC0_PDATA_PR3_H
/*CA_42A_42A*/ #define LTE_CACFG_CA_42A_42A_CC0_PDATA_PR3_H                  LTE_PDATA_OFF
/*CA_42A_42A*/ #endif
/*CA_42A_42A*/
/*CA_42A_42A*/ #ifndef LTE_CACFG_CA_42A_42A_CC0_PDATA_PT1_H
/*CA_42A_42A*/ #define LTE_CACFG_CA_42A_42A_CC0_PDATA_PT1_H                  LTE_PDATA_OFF
/*CA_42A_42A*/ #endif
/*CA_42A_42A*/
/*CA_42A_42A*/ #ifndef LTE_CACFG_CA_42A_42A_CC0_PDATA_PT2_H
/*CA_42A_42A*/ #define LTE_CACFG_CA_42A_42A_CC0_PDATA_PT2_H                  LTE_PDATA_OFF
/*CA_42A_42A*/ #endif
/*CA_42A_42A*/
/*CA_42A_42A*/ #ifndef LTE_CACFG_CA_42A_42A_CC0_PDATA_PT3_H
/*CA_42A_42A*/ #define LTE_CACFG_CA_42A_42A_CC0_PDATA_PT3_H                  LTE_PDATA_OFF
/*CA_42A_42A*/ #endif
/*CA_42A_42A*/
/*CA_42A_42A*/ #ifndef LTE_CACFG_CA_42A_42A_CC0_PDATA_PRANT_H
/*CA_42A_42A*/ #define LTE_CACFG_CA_42A_42A_CC0_PDATA_PRANT_H                LTE_PDATA_OFF
/*CA_42A_42A*/ #endif
/*CA_42A_42A*/
/*CA_42A_42A*/ #ifndef LTE_CACFG_CA_42A_42A_CC0_PDATA_PTANT_H
/*CA_42A_42A*/ #define LTE_CACFG_CA_42A_42A_CC0_PDATA_PTANT_H                LTE_PDATA_OFF
/*CA_42A_42A*/ #endif
/*CA_42A_42A*/
/*CA_42A_42A*/ #ifdef  LTE_CACFG_CA_42A_42A_CC0_PDATA_PR1_H
/*CA_42A_42A*/ #define LTE_CACFG_CA_42A_42A_CC1_PDATA_PR1_H                  LTE_CACFG_CA_42A_42A_CC0_PDATA_PR1_H
/*CA_42A_42A*/ #endif
/*CA_42A_42A*/
/*CA_42A_42A*/ #ifdef  LTE_CACFG_CA_42A_42A_CC0_PDATA_PR2_H
/*CA_42A_42A*/ #define LTE_CACFG_CA_42A_42A_CC1_PDATA_PR2_H                  LTE_CACFG_CA_42A_42A_CC0_PDATA_PR2_H
/*CA_42A_42A*/ #endif
/*CA_42A_42A*/
/*CA_42A_42A*/ #ifdef  LTE_CACFG_CA_42A_42A_CC0_PDATA_PR3_H
/*CA_42A_42A*/ #define LTE_CACFG_CA_42A_42A_CC1_PDATA_PR3_H                  LTE_CACFG_CA_42A_42A_CC0_PDATA_PR3_H
/*CA_42A_42A*/ #endif
/*CA_42A_42A*/
/*CA_42A_42A*/ #ifdef  LTE_CACFG_CA_42A_42A_CC0_PDATA_PT1_H
/*CA_42A_42A*/ #define LTE_CACFG_CA_42A_42A_CC1_PDATA_PT1_H                  LTE_CACFG_CA_42A_42A_CC0_PDATA_PT1_H
/*CA_42A_42A*/ #endif
/*CA_42A_42A*/
/*CA_42A_42A*/ #ifdef  LTE_CACFG_CA_42A_42A_CC0_PDATA_PT2_H
/*CA_42A_42A*/ #define LTE_CACFG_CA_42A_42A_CC1_PDATA_PT2_H                  LTE_CACFG_CA_42A_42A_CC0_PDATA_PT2_H
/*CA_42A_42A*/ #endif
/*CA_42A_42A*/
/*CA_42A_42A*/ #ifdef  LTE_CACFG_CA_42A_42A_CC0_PDATA_PT3_H
/*CA_42A_42A*/ #define LTE_CACFG_CA_42A_42A_CC1_PDATA_PT3_H                  LTE_CACFG_CA_42A_42A_CC0_PDATA_PT3_H
/*CA_42A_42A*/ #endif
/*CA_42A_42A*/
/*CA_42A_42A*/ #ifdef  LTE_CACFG_CA_42A_42A_CC0_PDATA_PRANT_H
/*CA_42A_42A*/ #define LTE_CACFG_CA_42A_42A_CC1_PDATA_PRANT_H                LTE_CACFG_CA_42A_42A_CC0_PDATA_PRANT_H
/*CA_42A_42A*/ #endif
/*CA_42A_42A*/
/*CA_42A_42A*/ #ifdef  LTE_CACFG_CA_42A_42A_CC0_PDATA_PTANT_H
/*CA_42A_42A*/ #define LTE_CACFG_CA_42A_42A_CC1_PDATA_PTANT_H                LTE_CACFG_CA_42A_42A_CC0_PDATA_PTANT_H
/*CA_42A_42A*/ #endif

/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */


/*******************************************************************************
 * Typedef
 ******************************************************************************/

/*******************************************************************************
 * Constant
 ******************************************************************************/

/*******************************************************************************
 * Global variables (Extern)
 ******************************************************************************/




/*******************************************************************************
 * Global Functions Prototype (Interface)
 ******************************************************************************/



#endif /* End of #ifndef __EL1D_RF_CA_H__ */

