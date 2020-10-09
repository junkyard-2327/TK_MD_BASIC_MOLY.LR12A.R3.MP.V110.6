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

//#ifndef __EL1D_RF_CA_DRDI_H__
//#define __EL1D_RF_CA_DRDI_H__

/*******************************************************************************
 * #include
 ******************************************************************************/
#include "el1d_rf_ca_undef.h"

/*******************************************************************************
 * #define
 ******************************************************************************/
/*------------------*/
/* Macro Definition */
/*------------------*/
#define LTE_ROUTE_OF_CACFG_IND_SET(i,c,x,s) i##_CC##c##_##x##_MIPI_TBL_IDX_##s
#define LTE_ROUTE_OF_SET(i,c,x,s)           LTE_ROUTE_OF_CACFG_IND_SET(i,c,x,s)

#define CONSTRUCT_ROUTE_SET(r)              (((1<<((r>>4)&0xF))<<16)|(1<<(r&0xF)))
#define ROUTE_GROUP_CHECK_SET(g,e)          ((e>>16)&(1<<g))
#define ROUTE_MAP_ROUTE_SET(g,r)            (ROUTE_GROUP_CHECK_SET(g,CONSTRUCT_ROUTE_SET(r))?(CONSTRUCT_ROUTE_SET(r)&0xFFFF):0)
#define ROUTE_MAP_IND_SET(g,i,x,s)          (ROUTE_MAP_ROUTE_SET(g,LTE_ROUTE_OF_SET(i,0,x,s)) | ROUTE_MAP_ROUTE_SET(g,LTE_ROUTE_OF_SET(i,1,x,s)))
#define ROUTE_MAP_GROUP_SET_TEMP(g,x,s)     (ROUTE_MAP_IND_SET(g,LTE_CACFG_IND_00_##s,x,s) | ROUTE_MAP_IND_SET(g,LTE_CACFG_IND_01_##s,x,s) | \
                                             ROUTE_MAP_IND_SET(g,LTE_CACFG_IND_02_##s,x,s) | ROUTE_MAP_IND_SET(g,LTE_CACFG_IND_03_##s,x,s) | \
                                             ROUTE_MAP_IND_SET(g,LTE_CACFG_IND_04_##s,x,s) | ROUTE_MAP_IND_SET(g,LTE_CACFG_IND_05_##s,x,s) | \
                                             ROUTE_MAP_IND_SET(g,LTE_CACFG_IND_06_##s,x,s) | ROUTE_MAP_IND_SET(g,LTE_CACFG_IND_07_##s,x,s) | \
                                             ROUTE_MAP_IND_SET(g,LTE_CACFG_IND_08_##s,x,s) | ROUTE_MAP_IND_SET(g,LTE_CACFG_IND_09_##s,x,s) | \
                                             ROUTE_MAP_IND_SET(g,LTE_CACFG_IND_10_##s,x,s) | ROUTE_MAP_IND_SET(g,LTE_CACFG_IND_11_##s,x,s) | \
                                             ROUTE_MAP_IND_SET(g,LTE_CACFG_IND_12_##s,x,s) | ROUTE_MAP_IND_SET(g,LTE_CACFG_IND_13_##s,x,s) | \
                                             ROUTE_MAP_IND_SET(g,LTE_CACFG_IND_14_##s,x,s) | ROUTE_MAP_IND_SET(g,LTE_CACFG_IND_15_##s,x,s) | \
                                             ROUTE_MAP_IND_SET(g,LTE_CACFG_IND_16_##s,x,s) | ROUTE_MAP_IND_SET(g,LTE_CACFG_IND_17_##s,x,s) | \
                                             ROUTE_MAP_IND_SET(g,LTE_CACFG_IND_18_##s,x,s) | ROUTE_MAP_IND_SET(g,LTE_CACFG_IND_19_##s,x,s) | \
                                             ROUTE_MAP_IND_SET(g,LTE_CACFG_IND_20_##s,x,s) | ROUTE_MAP_IND_SET(g,LTE_CACFG_IND_21_##s,x,s) | \
                                             ROUTE_MAP_IND_SET(g,LTE_CACFG_IND_22_##s,x,s) | ROUTE_MAP_IND_SET(g,LTE_CACFG_IND_23_##s,x,s) | \
                                             ROUTE_MAP_IND_SET(g,LTE_CACFG_IND_24_##s,x,s) | ROUTE_MAP_IND_SET(g,LTE_CACFG_IND_25_##s,x,s) | \
                                             ROUTE_MAP_IND_SET(g,LTE_CACFG_IND_26_##s,x,s) | ROUTE_MAP_IND_SET(g,LTE_CACFG_IND_27_##s,x,s) | \
                                             ROUTE_MAP_IND_SET(g,LTE_CACFG_IND_28_##s,x,s) | ROUTE_MAP_IND_SET(g,LTE_CACFG_IND_29_##s,x,s) | \
                                             ROUTE_MAP_IND_SET(g,LTE_CACFG_IND_30_##s,x,s) | ROUTE_MAP_IND_SET(g,LTE_CACFG_IND_31_##s,x,s) | \
                                             ROUTE_MAP_IND_SET(g,LTE_CACFG_IND_32_##s,x,s) | ROUTE_MAP_IND_SET(g,LTE_CACFG_IND_33_##s,x,s) | \
                                             ROUTE_MAP_IND_SET(g,LTE_CACFG_IND_34_##s,x,s) | ROUTE_MAP_IND_SET(g,LTE_CACFG_IND_35_##s,x,s) | \
                                             ROUTE_MAP_IND_SET(g,LTE_CACFG_IND_36_##s,x,s) | ROUTE_MAP_IND_SET(g,LTE_CACFG_IND_37_##s,x,s) )
#define ROUTE_MAP_GROUP_SET(g,x,s)           ROUTE_MAP_GROUP_SET_TEMP(g,x,s)

/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

/*------------------------*/
/* MIPI RX Route Settings */
/*------------------------*/
/*CA Band*/
/*CA Band*/ #if ROUTE_MAP_GROUP_SET(1,RX,SetNumber) & (1<<5)
/*CA Band*/ #define  __MIPI_RX_ROUTE21__
/*CA Band*/ #endif
/*CA Band*/
/*CA Band*/ #if ROUTE_MAP_GROUP_SET(1,RX,SetNumber) & (1<<6)
/*CA Band*/ #define  __MIPI_RX_ROUTE22__
/*CA Band*/ #endif
/*CA Band*/
/*CA Band*/ #if ROUTE_MAP_GROUP_SET(1,RX,SetNumber) & (1<<7)
/*CA Band*/ #define  __MIPI_RX_ROUTE23__
/*CA Band*/ #endif
/*CA Band*/
/*CA Band*/ #if ROUTE_MAP_GROUP_SET(1,RX,SetNumber) & (1<<8)
/*CA Band*/ #define  __MIPI_RX_ROUTE24__
/*CA Band*/ #endif
/*CA Band*/
/*CA Band*/ #if ROUTE_MAP_GROUP_SET(1,RX,SetNumber) & (1<<9)
/*CA Band*/ #define  __MIPI_RX_ROUTE25__
/*CA Band*/ #endif
/*CA Band*/
/*CA Band*/ #if ROUTE_MAP_GROUP_SET(1,RX,SetNumber) & (1<<10)
/*CA Band*/ #define  __MIPI_RX_ROUTE26__
/*CA Band*/ #endif
/*CA Band*/
/*CA Band*/ #if ROUTE_MAP_GROUP_SET(1,RX,SetNumber) & (1<<11)
/*CA Band*/ #define  __MIPI_RX_ROUTE27__
/*CA Band*/ #endif
/*CA Band*/
/*CA Band*/ #if ROUTE_MAP_GROUP_SET(1,RX,SetNumber) & (1<<12)
/*CA Band*/ #define  __MIPI_RX_ROUTE28__
/*CA Band*/ #endif
/*CA Band*/
/*CA Band*/ #if ROUTE_MAP_GROUP_SET(1,RX,SetNumber) & (1<<13)
/*CA Band*/ #define  __MIPI_RX_ROUTE29__
/*CA Band*/ #endif
/*CA Band*/
/*CA Band*/ #if ROUTE_MAP_GROUP_SET(1,RX,SetNumber) & (1<<14)
/*CA Band*/ #define  __MIPI_RX_ROUTE30__
/*CA Band*/ #endif
/*CA Band*/
/*CA Band*/ #if ROUTE_MAP_GROUP_SET(1,RX,SetNumber) & (1<<15)
/*CA Band*/ #define  __MIPI_RX_ROUTE31__
/*CA Band*/ #endif
/*CA Band*/
/*CA Band*/ #if ROUTE_MAP_GROUP_SET(2,RX,SetNumber) & (1<<0)
/*CA Band*/ #define  __MIPI_RX_ROUTE32__
/*CA Band*/ #endif
/*CA Band*/
/*CA Band*/ #if ROUTE_MAP_GROUP_SET(2,RX,SetNumber) & (1<<1)
/*CA Band*/ #define  __MIPI_RX_ROUTE33__
/*CA Band*/ #endif
/*CA Band*/
/*CA Band*/ #if ROUTE_MAP_GROUP_SET(2,RX,SetNumber) & (1<<2)
/*CA Band*/ #define  __MIPI_RX_ROUTE34__
/*CA Band*/ #endif
/*CA Band*/
/*CA Band*/ #if ROUTE_MAP_GROUP_SET(2,RX,SetNumber) & (1<<3)
/*CA Band*/ #define  __MIPI_RX_ROUTE35__
/*CA Band*/ #endif
/*CA Band*/
/*CA Band*/ #if ROUTE_MAP_GROUP_SET(2,RX,SetNumber) & (1<<4)
/*CA Band*/ #define  __MIPI_RX_ROUTE36__
/*CA Band*/ #endif
/*CA Band*/
/*CA Band*/ #if ROUTE_MAP_GROUP_SET(2,RX,SetNumber) & (1<<5)
/*CA Band*/ #define  __MIPI_RX_ROUTE37__
/*CA Band*/ #endif
/*CA Band*/
/*CA Band*/ #if ROUTE_MAP_GROUP_SET(2,RX,SetNumber) & (1<<6)
/*CA Band*/ #define  __MIPI_RX_ROUTE38__
/*CA Band*/ #endif
/*CA Band*/
/*CA Band*/ #if ROUTE_MAP_GROUP_SET(2,RX,SetNumber) & (1<<7)
/*CA Band*/ #define  __MIPI_RX_ROUTE39__
/*CA Band*/ #endif
/*CA Band*/
/*CA Band*/ #if ROUTE_MAP_GROUP_SET(2,RX,SetNumber) & (1<<8)
/*CA Band*/ #define  __MIPI_RX_ROUTE40__
/*CA Band*/ #endif
/*CA Band*/
/*CA Band*/ #if ROUTE_MAP_GROUP_SET(2,RX,SetNumber) & (1<<9)
/*CA Band*/ #define  __MIPI_RX_ROUTE41__
/*CA Band*/ #endif
/*CA Band*/
/*CA Band*/ #if ROUTE_MAP_GROUP_SET(2,RX,SetNumber) & (1<<10)
/*CA Band*/ #define  __MIPI_RX_ROUTE42__
/*CA Band*/ #endif
/*CA Band*/
/*CA Band*/ #if ROUTE_MAP_GROUP_SET(2,RX,SetNumber) & (1<<11)
/*CA Band*/ #define  __MIPI_RX_ROUTE43__
/*CA Band*/ #endif
/*CA Band*/
/*CA Band*/ #if ROUTE_MAP_GROUP_SET(2,RX,SetNumber) & (1<<12)
/*CA Band*/ #define  __MIPI_RX_ROUTE44__
/*CA Band*/ #endif
/*CA Band*/
/*CA Band*/ #if ROUTE_MAP_GROUP_SET(2,RX,SetNumber) & (1<<13)
/*CA Band*/ #define  __MIPI_RX_ROUTE45__
/*CA Band*/ #endif
/*CA Band*/
/*CA Band*/ #if ROUTE_MAP_GROUP_SET(2,RX,SetNumber) & (1<<14)
/*CA Band*/ #define  __MIPI_RX_ROUTE46__
/*CA Band*/ #endif
/*CA Band*/
/*CA Band*/ #if ROUTE_MAP_GROUP_SET(2,RX,SetNumber) & (1<<15)
/*CA Band*/ #define  __MIPI_RX_ROUTE47__
/*CA Band*/ #endif
/*CA Band*/
/*CA Band*/ #if ROUTE_MAP_GROUP_SET(3,RX,SetNumber) & (1<<0)
/*CA Band*/ #define  __MIPI_RX_ROUTE48__
/*CA Band*/ #endif
/*CA Band*/
/*CA Band*/ #if ROUTE_MAP_GROUP_SET(3,RX,SetNumber) & (1<<1)
/*CA Band*/ #define  __MIPI_RX_ROUTE49__
/*CA Band*/ #endif
/*CA Band*/
/*CA Band*/ #if ROUTE_MAP_GROUP_SET(3,RX,SetNumber) & (1<<2)
/*CA Band*/ #define  __MIPI_RX_ROUTE50__
/*CA Band*/ #endif
/*CA Band*/
/*CA Band*/ #if ROUTE_MAP_GROUP_SET(3,RX,SetNumber) & (1<<3)
/*CA Band*/ #define  __MIPI_RX_ROUTE51__
/*CA Band*/ #endif
/*CA Band*/
/*CA Band*/ #if ROUTE_MAP_GROUP_SET(3,RX,SetNumber) & (1<<4)
/*CA Band*/ #define  __MIPI_RX_ROUTE52__
/*CA Band*/ #endif
/*CA Band*/
/*CA Band*/ #if ROUTE_MAP_GROUP_SET(3,RX,SetNumber) & (1<<5)
/*CA Band*/ #define  __MIPI_RX_ROUTE53__
/*CA Band*/ #endif
/*CA Band*/
/*CA Band*/ #if ROUTE_MAP_GROUP_SET(3,RX,SetNumber) & (1<<6)
/*CA Band*/ #define  __MIPI_RX_ROUTE54__
/*CA Band*/ #endif
/*CA Band*/
/*CA Band*/ #if ROUTE_MAP_GROUP_SET(3,RX,SetNumber) & (1<<7)
/*CA Band*/ #define  __MIPI_RX_ROUTE55__
/*CA Band*/ #endif
/*CA Band*/
/*CA Band*/ #if ROUTE_MAP_GROUP_SET(3,RX,SetNumber) & (1<<8)
/*CA Band*/ #define  __MIPI_RX_ROUTE56__
/*CA Band*/ #endif
/*CA Band*/
/*CA Band*/ #if ROUTE_MAP_GROUP_SET(3,RX,SetNumber) & (1<<9)
/*CA Band*/ #define  __MIPI_RX_ROUTE57__
/*CA Band*/ #endif
/*CA Band*/
/*CA Band*/ #if ROUTE_MAP_GROUP_SET(3,RX,SetNumber) & (1<<10)
/*CA Band*/ #define  __MIPI_RX_ROUTE58__
/*CA Band*/ #endif
/*CA Band*/
/*CA Band*/ #if ROUTE_MAP_GROUP_SET(3,RX,SetNumber) & (1<<11)
/*CA Band*/ #define  __MIPI_RX_ROUTE59__
/*CA Band*/ #endif
/*CA Band*/
/*CA Band*/ #if ROUTE_MAP_GROUP_SET(3,RX,SetNumber) & (1<<12)
/*CA Band*/ #define  __MIPI_RX_ROUTE60__
/*CA Band*/ #endif
/*CA Band*/
/*CA Band*/ #if ROUTE_MAP_GROUP_SET(3,RX,SetNumber) & (1<<13)
/*CA Band*/ #define  __MIPI_RX_ROUTE61__
/*CA Band*/ #endif
/*CA Band*/
/*CA Band*/ #if ROUTE_MAP_GROUP_SET(3,RX,SetNumber) & (1<<14)
/*CA Band*/ #define  __MIPI_RX_ROUTE62__
/*CA Band*/ #endif
/*CA Band*/
/*CA Band*/ #if ROUTE_MAP_GROUP_SET(3,RX,SetNumber) & (1<<15)
/*CA Band*/ #define  __MIPI_RX_ROUTE63__
/*CA Band*/ #endif
/*CA Band*/
/*CA Band*/ #if ROUTE_MAP_GROUP_SET(4,RX,SetNumber) & (1<<0)
/*CA Band*/ #define  __MIPI_RX_ROUTE64__
/*CA Band*/ #endif
/*CA Band*/
/*CA Band*/ #if ROUTE_MAP_GROUP_SET(4,RX,SetNumber) & (1<<1)
/*CA Band*/ #define  __MIPI_RX_ROUTE65__
/*CA Band*/ #endif
/*CA Band*/
/*CA Band*/ #if ROUTE_MAP_GROUP_SET(4,RX,SetNumber) & (1<<2)
/*CA Band*/ #define  __MIPI_RX_ROUTE66__
/*CA Band*/ #endif
/*CA Band*/
/*CA Band*/ #if ROUTE_MAP_GROUP_SET(4,RX,SetNumber) & (1<<3)
/*CA Band*/ #define  __MIPI_RX_ROUTE67__
/*CA Band*/ #endif
/*CA Band*/
/*CA Band*/ #if ROUTE_MAP_GROUP_SET(4,RX,SetNumber) & (1<<4)
/*CA Band*/ #define  __MIPI_RX_ROUTE68__
/*CA Band*/ #endif
/*CA Band*/
/*CA Band*/ #if ROUTE_MAP_GROUP_SET(4,RX,SetNumber) & (1<<5)
/*CA Band*/ #define  __MIPI_RX_ROUTE69__
/*CA Band*/ #endif
/*CA Band*/
/*CA Band*/ #if ROUTE_MAP_GROUP_SET(4,RX,SetNumber) & (1<<6)
/*CA Band*/ #define  __MIPI_RX_ROUTE70__
/*CA Band*/ #endif
/*CA Band*/
/*CA Band*/ #if ROUTE_MAP_GROUP_SET(4,RX,SetNumber) & (1<<7)
/*CA Band*/ #define  __MIPI_RX_ROUTE71__
/*CA Band*/ #endif
/*CA Band*/
/*CA Band*/ #if ROUTE_MAP_GROUP_SET(4,RX,SetNumber) & (1<<8)
/*CA Band*/ #define  __MIPI_RX_ROUTE72__
/*CA Band*/ #endif
/*CA Band*/
/*CA Band*/ #if ROUTE_MAP_GROUP_SET(4,RX,SetNumber) & (1<<9)
/*CA Band*/ #define  __MIPI_RX_ROUTE73__
/*CA Band*/ #endif
/*CA Band*/
/*CA Band*/ #if ROUTE_MAP_GROUP_SET(4,RX,SetNumber) & (1<<10)
/*CA Band*/ #define  __MIPI_RX_ROUTE74__
/*CA Band*/ #endif
/*CA Band*/
/*CA Band*/ #if ROUTE_MAP_GROUP_SET(4,RX,SetNumber) & (1<<11)
/*CA Band*/ #define  __MIPI_RX_ROUTE75__
/*CA Band*/ #endif
/*CA Band*/
/*CA Band*/ #if ROUTE_MAP_GROUP_SET(4,RX,SetNumber) & (1<<12)
/*CA Band*/ #define  __MIPI_RX_ROUTE76__
/*CA Band*/ #endif
/*CA Band*/
/*CA Band*/ #if ROUTE_MAP_GROUP_SET(4,RX,SetNumber) & (1<<13)
/*CA Band*/ #define  __MIPI_RX_ROUTE77__
/*CA Band*/ #endif
/*CA Band*/
/*CA Band*/ #if ROUTE_MAP_GROUP_SET(4,RX,SetNumber) & (1<<14)
/*CA Band*/ #define  __MIPI_RX_ROUTE78__
/*CA Band*/ #endif
/*CA Band*/
/*CA Band*/ #if ROUTE_MAP_GROUP_SET(4,RX,SetNumber) & (1<<15)
/*CA Band*/ #define  __MIPI_RX_ROUTE79__
/*CA Band*/ #endif
/*CA Band*/
/*CA Band*/ #if ROUTE_MAP_GROUP_SET(5,RX,SetNumber) & (1<<0)
/*CA Band*/ #define  __MIPI_RX_ROUTE80__
/*CA Band*/ #endif
/*CA Band*/
/*CA Band*/ #if ROUTE_MAP_GROUP_SET(5,RX,SetNumber) & (1<<1)
/*CA Band*/ #define  __MIPI_RX_ROUTE81__
/*CA Band*/ #endif
/*CA Band*/
/*CA Band*/ #if ROUTE_MAP_GROUP_SET(5,RX,SetNumber) & (1<<2)
/*CA Band*/ #define  __MIPI_RX_ROUTE82__
/*CA Band*/ #endif
/*CA Band*/
/*CA Band*/ #if ROUTE_MAP_GROUP_SET(5,RX,SetNumber) & (1<<3)
/*CA Band*/ #define  __MIPI_RX_ROUTE83__
/*CA Band*/ #endif
/*CA Band*/
/*CA Band*/ #if ROUTE_MAP_GROUP_SET(5,RX,SetNumber) & (1<<4)
/*CA Band*/ #define  __MIPI_RX_ROUTE84__
/*CA Band*/ #endif
/*CA Band*/
/*CA Band*/ #if ROUTE_MAP_GROUP_SET(5,RX,SetNumber) & (1<<5)
/*CA Band*/ #define  __MIPI_RX_ROUTE85__
/*CA Band*/ #endif
/*CA Band*/
/*CA Band*/ #if ROUTE_MAP_GROUP_SET(5,RX,SetNumber) & (1<<6)
/*CA Band*/ #define  __MIPI_RX_ROUTE86__
/*CA Band*/ #endif
/*CA Band*/
/*CA Band*/ #if ROUTE_MAP_GROUP_SET(5,RX,SetNumber) & (1<<7)
/*CA Band*/ #define  __MIPI_RX_ROUTE87__
/*CA Band*/ #endif
/*CA Band*/
/*CA Band*/ #if ROUTE_MAP_GROUP_SET(5,RX,SetNumber) & (1<<8)
/*CA Band*/ #define  __MIPI_RX_ROUTE88__
/*CA Band*/ #endif
/*CA Band*/
/*CA Band*/ #if ROUTE_MAP_GROUP_SET(5,RX,SetNumber) & (1<<9)
/*CA Band*/ #define  __MIPI_RX_ROUTE89__
/*CA Band*/ #endif
/*CA Band*/
/*CA Band*/ #if ROUTE_MAP_GROUP_SET(5,RX,SetNumber) & (1<<10)
/*CA Band*/ #define  __MIPI_RX_ROUTE90__
/*CA Band*/ #endif
/*CA Band*/
/*CA Band*/ #if ROUTE_MAP_GROUP_SET(5,RX,SetNumber) & (1<<11)
/*CA Band*/ #define  __MIPI_RX_ROUTE91__
/*CA Band*/ #endif
/*CA Band*/
/*CA Band*/ #if ROUTE_MAP_GROUP_SET(5,RX,SetNumber) & (1<<12)
/*CA Band*/ #define  __MIPI_RX_ROUTE92__
/*CA Band*/ #endif
/*CA Band*/
/*CA Band*/ #if ROUTE_MAP_GROUP_SET(5,RX,SetNumber) & (1<<13)
/*CA Band*/ #define  __MIPI_RX_ROUTE93__
/*CA Band*/ #endif
/*CA Band*/
/*CA Band*/ #if ROUTE_MAP_GROUP_SET(5,RX,SetNumber) & (1<<14)
/*CA Band*/ #define  __MIPI_RX_ROUTE94__
/*CA Band*/ #endif
/*CA Band*/
/*CA Band*/ #if ROUTE_MAP_GROUP_SET(5,RX,SetNumber) & (1<<15)
/*CA Band*/ #define  __MIPI_RX_ROUTE95__
/*CA Band*/ #endif
/*CA Band*/
/*CA Band*/ #if ROUTE_MAP_GROUP_SET(6,RX,SetNumber) & (1<<0)
/*CA Band*/ #define  __MIPI_RX_ROUTE96__
/*CA Band*/ #endif
/*CA Band*/
/*CA Band*/ #if ROUTE_MAP_GROUP_SET(6,RX,SetNumber) & (1<<1)
/*CA Band*/ #define  __MIPI_RX_ROUTE97__
/*CA Band*/ #endif
/*CA Band*/
/*CA Band*/ #if ROUTE_MAP_GROUP_SET(6,RX,SetNumber) & (1<<2)
/*CA Band*/ #define  __MIPI_RX_ROUTE98__
/*CA Band*/ #endif
/*CA Band*/
/*CA Band*/ #if ROUTE_MAP_GROUP_SET(6,RX,SetNumber) & (1<<3)
/*CA Band*/ #define  __MIPI_RX_ROUTE99__
/*CA Band*/ #endif
/*CA Band*/
/*CA Band*/ #if ROUTE_MAP_GROUP_SET(6,RX,SetNumber) & (1<<4)
/*CA Band*/ #define  __MIPI_RX_ROUTE100__
/*CA Band*/ #endif
/*CA Band*/
/*CA Band*/ #if ROUTE_MAP_GROUP_SET(6,RX,SetNumber) & (1<<5)
/*CA Band*/ #define  __MIPI_RX_ROUTE101__
/*CA Band*/ #endif
/*CA Band*/
/*CA Band*/ #if ROUTE_MAP_GROUP_SET(6,RX,SetNumber) & (1<<6)
/*CA Band*/ #define  __MIPI_RX_ROUTE102__
/*CA Band*/ #endif
/*CA Band*/
/*CA Band*/ #if ROUTE_MAP_GROUP_SET(6,RX,SetNumber) & (1<<7)
/*CA Band*/ #define  __MIPI_RX_ROUTE103__
/*CA Band*/ #endif
/*CA Band*/
/*CA Band*/ #if ROUTE_MAP_GROUP_SET(6,RX,SetNumber) & (1<<8)
/*CA Band*/ #define  __MIPI_RX_ROUTE104__
/*CA Band*/ #endif
/*CA Band*/
/*CA Band*/ #if ROUTE_MAP_GROUP_SET(6,RX,SetNumber) & (1<<9)
/*CA Band*/ #define  __MIPI_RX_ROUTE105__
/*CA Band*/ #endif
/*CA Band*/
/*CA Band*/ #if ROUTE_MAP_GROUP_SET(6,RX,SetNumber) & (1<<10)
/*CA Band*/ #define  __MIPI_RX_ROUTE106__
/*CA Band*/ #endif
/*CA Band*/
/*CA Band*/ #if ROUTE_MAP_GROUP_SET(6,RX,SetNumber) & (1<<11)
/*CA Band*/ #define  __MIPI_RX_ROUTE107__
/*CA Band*/ #endif
/*CA Band*/
/*CA Band*/ #if ROUTE_MAP_GROUP_SET(6,RX,SetNumber) & (1<<12)
/*CA Band*/ #define  __MIPI_RX_ROUTE108__
/*CA Band*/ #endif
/*CA Band*/
/*CA Band*/ #if ROUTE_MAP_GROUP_SET(6,RX,SetNumber) & (1<<13)
/*CA Band*/ #define  __MIPI_RX_ROUTE109__
/*CA Band*/ #endif
/*CA Band*/
/*CA Band*/ #if ROUTE_MAP_GROUP_SET(6,RX,SetNumber) & (1<<14)
/*CA Band*/ #define  __MIPI_RX_ROUTE110__
/*CA Band*/ #endif
/*CA Band*/
/*CA Band*/ #if ROUTE_MAP_GROUP_SET(6,RX,SetNumber) & (1<<15)
/*CA Band*/ #define  __MIPI_RX_ROUTE111__
/*CA Band*/ #endif
/*CA Band*/
/*CA Band*/ #if ROUTE_MAP_GROUP_SET(7,RX,SetNumber) & (1<<0)
/*CA Band*/ #define  __MIPI_RX_ROUTE112__
/*CA Band*/ #endif
/*CA Band*/
/*CA Band*/ #if ROUTE_MAP_GROUP_SET(7,RX,SetNumber) & (1<<1)
/*CA Band*/ #define  __MIPI_RX_ROUTE113__
/*CA Band*/ #endif
/*CA Band*/
/*CA Band*/ #if ROUTE_MAP_GROUP_SET(7,RX,SetNumber) & (1<<2)
/*CA Band*/ #define  __MIPI_RX_ROUTE114__
/*CA Band*/ #endif
/*CA Band*/
/*CA Band*/ #if ROUTE_MAP_GROUP_SET(7,RX,SetNumber) & (1<<3)
/*CA Band*/ #define  __MIPI_RX_ROUTE115__
/*CA Band*/ #endif
/*CA Band*/
/*CA Band*/ #if ROUTE_MAP_GROUP_SET(7,RX,SetNumber) & (1<<4)
/*CA Band*/ #define  __MIPI_RX_ROUTE116__
/*CA Band*/ #endif
/*CA Band*/
/*CA Band*/ #if ROUTE_MAP_GROUP_SET(7,RX,SetNumber) & (1<<5)
/*CA Band*/ #define  __MIPI_RX_ROUTE117__
/*CA Band*/ #endif
/*CA Band*/
/*CA Band*/ #if ROUTE_MAP_GROUP_SET(7,RX,SetNumber) & (1<<6)
/*CA Band*/ #define  __MIPI_RX_ROUTE118__
/*CA Band*/ #endif
/*CA Band*/
/*CA Band*/ #if ROUTE_MAP_GROUP_SET(7,RX,SetNumber) & (1<<7)
/*CA Band*/ #define  __MIPI_RX_ROUTE119__
/*CA Band*/ #endif
/*CA Band*/
/*CA Band*/ #if ROUTE_MAP_GROUP_SET(7,RX,SetNumber) & (1<<8)
/*CA Band*/ #define  __MIPI_RX_ROUTE120__
/*CA Band*/ #endif
/*CA Band*/
/*CA Band*/ #if ROUTE_MAP_GROUP_SET(7,RX,SetNumber) & (1<<9)
/*CA Band*/ #define  __MIPI_RX_ROUTE121__
/*CA Band*/ #endif
/*CA Band*/
/*CA Band*/ #if ROUTE_MAP_GROUP_SET(7,RX,SetNumber) & (1<<10)
/*CA Band*/ #define  __MIPI_RX_ROUTE122__
/*CA Band*/ #endif
/*CA Band*/
/*CA Band*/ #if ROUTE_MAP_GROUP_SET(7,RX,SetNumber) & (1<<11)
/*CA Band*/ #define  __MIPI_RX_ROUTE123__
/*CA Band*/ #endif
/*CA Band*/
/*CA Band*/ #if ROUTE_MAP_GROUP_SET(7,RX,SetNumber) & (1<<12)
/*CA Band*/ #define  __MIPI_RX_ROUTE124__
/*CA Band*/ #endif
/*CA Band*/
/*CA Band*/ #if ROUTE_MAP_GROUP_SET(7,RX,SetNumber) & (1<<13)
/*CA Band*/ #define  __MIPI_RX_ROUTE125__
/*CA Band*/ #endif
/*CA Band*/
/*CA Band*/ #if ROUTE_MAP_GROUP_SET(7,RX,SetNumber) & (1<<14)
/*CA Band*/ #define  __MIPI_RX_ROUTE126__
/*CA Band*/ #endif
/*CA Band*/
/*CA Band*/ #if ROUTE_MAP_GROUP_SET(7,RX,SetNumber) & (1<<15)
/*CA Band*/ #define  __MIPI_RX_ROUTE127__
/*CA Band*/ #endif
/*CA Band*/

/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

#if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
#ifdef __MIPI_RX_ROUTE21__
/* under construction !*/
#else
/* under construction !*/
#endif
/* under construction !*/
#ifdef __MIPI_RX_ROUTE22__
/* under construction !*/
#else
/* under construction !*/
#endif
/* under construction !*/
#ifdef __MIPI_RX_ROUTE23__
/* under construction !*/
#else
/* under construction !*/
#endif
/* under construction !*/
#ifdef __MIPI_RX_ROUTE24__
/* under construction !*/
#else
/* under construction !*/
#endif
/* under construction !*/
#ifdef __MIPI_RX_ROUTE25__
/* under construction !*/
#else
/* under construction !*/
#endif
/* under construction !*/
#ifdef __MIPI_RX_ROUTE26__
/* under construction !*/
#else
/* under construction !*/
#endif
/* under construction !*/
#ifdef __MIPI_RX_ROUTE27__
/* under construction !*/
#else
/* under construction !*/
#endif
/* under construction !*/
#ifdef __MIPI_RX_ROUTE28__
/* under construction !*/
#else
/* under construction !*/
#endif
/* under construction !*/
#ifdef __MIPI_RX_ROUTE29__
/* under construction !*/
#else
/* under construction !*/
#endif
/* under construction !*/
#ifdef __MIPI_RX_ROUTE30__
/* under construction !*/
#else
/* under construction !*/
#endif
/* under construction !*/
#ifdef __MIPI_RX_ROUTE31__
/* under construction !*/
#else
/* under construction !*/
#endif
/* under construction !*/
#ifdef __MIPI_RX_ROUTE32__
/* under construction !*/
#else
/* under construction !*/
#endif
/* under construction !*/
#ifdef __MIPI_RX_ROUTE33__
/* under construction !*/
#else
/* under construction !*/
#endif
/* under construction !*/
#ifdef __MIPI_RX_ROUTE34__
/* under construction !*/
#else
/* under construction !*/
#endif
/* under construction !*/
#ifdef __MIPI_RX_ROUTE35__
/* under construction !*/
#else
/* under construction !*/
#endif
/* under construction !*/
#ifdef __MIPI_RX_ROUTE36__
/* under construction !*/
#else
/* under construction !*/
#endif
/* under construction !*/
#ifdef __MIPI_RX_ROUTE37__
/* under construction !*/
#else
/* under construction !*/
#endif
/* under construction !*/
#ifdef __MIPI_RX_ROUTE38__
/* under construction !*/
#else
/* under construction !*/
#endif
/* under construction !*/
#ifdef __MIPI_RX_ROUTE39__
/* under construction !*/
#else
/* under construction !*/
#endif
/* under construction !*/
#ifdef __MIPI_RX_ROUTE40__
/* under construction !*/
#else
/* under construction !*/
#endif
/* under construction !*/
#ifdef __MIPI_RX_ROUTE41__
/* under construction !*/
#else
/* under construction !*/
#endif
/* under construction !*/
#ifdef __MIPI_RX_ROUTE42__
/* under construction !*/
#else
/* under construction !*/
#endif
/* under construction !*/
#ifdef __MIPI_RX_ROUTE43__
/* under construction !*/
#else
/* under construction !*/
#endif
/* under construction !*/
#ifdef __MIPI_RX_ROUTE44__
/* under construction !*/
#else
/* under construction !*/
#endif
/* under construction !*/
#ifdef __MIPI_RX_ROUTE45__
/* under construction !*/
#else
/* under construction !*/
#endif
/* under construction !*/
#ifdef __MIPI_RX_ROUTE46__
/* under construction !*/
#else
/* under construction !*/
#endif
/* under construction !*/
#ifdef __MIPI_RX_ROUTE47__
/* under construction !*/
#else
/* under construction !*/
#endif
/* under construction !*/
#ifdef __MIPI_RX_ROUTE48__
/* under construction !*/
#else
/* under construction !*/
#endif
/* under construction !*/
#ifdef __MIPI_RX_ROUTE49__
/* under construction !*/
#else
/* under construction !*/
#endif
/* under construction !*/
#ifdef __MIPI_RX_ROUTE50__
/* under construction !*/
#else
/* under construction !*/
#endif
/* under construction !*/
#ifdef __MIPI_RX_ROUTE51__
/* under construction !*/
#else
/* under construction !*/
#endif
/* under construction !*/
#ifdef __MIPI_RX_ROUTE52__
/* under construction !*/
#else
/* under construction !*/
#endif
/* under construction !*/
#ifdef __MIPI_RX_ROUTE53__
/* under construction !*/
#else
/* under construction !*/
#endif
/* under construction !*/
#ifdef __MIPI_RX_ROUTE54__
/* under construction !*/
#else
/* under construction !*/
#endif
/* under construction !*/
#ifdef __MIPI_RX_ROUTE55__
/* under construction !*/
#else
/* under construction !*/
#endif
/* under construction !*/
#ifdef __MIPI_RX_ROUTE56__
/* under construction !*/
#else
/* under construction !*/
#endif
/* under construction !*/
#ifdef __MIPI_RX_ROUTE57__
/* under construction !*/
#else
/* under construction !*/
#endif
/* under construction !*/
#ifdef __MIPI_RX_ROUTE58__
/* under construction !*/
#else
/* under construction !*/
#endif
/* under construction !*/
#ifdef __MIPI_RX_ROUTE59__
/* under construction !*/
#else
/* under construction !*/
#endif
/* under construction !*/
#ifdef __MIPI_RX_ROUTE60__
/* under construction !*/
#else
/* under construction !*/
#endif
/* under construction !*/
#ifdef __MIPI_RX_ROUTE61__
/* under construction !*/
#else
/* under construction !*/
#endif
/* under construction !*/
#ifdef __MIPI_RX_ROUTE62__
/* under construction !*/
#else
/* under construction !*/
#endif
/* under construction !*/
#ifdef __MIPI_RX_ROUTE63__
/* under construction !*/
#else
/* under construction !*/
#endif
/* under construction !*/
#ifdef __MIPI_RX_ROUTE64__
/* under construction !*/
#else
/* under construction !*/
#endif
#ifdef __MIPI_RX_ROUTE65__
/* under construction !*/
#else
/* under construction !*/
#endif
#ifdef __MIPI_RX_ROUTE66__
/* under construction !*/
#else
/* under construction !*/
#endif
#ifdef __MIPI_RX_ROUTE67__
/* under construction !*/
#else
/* under construction !*/
#endif
#ifdef __MIPI_RX_ROUTE68__
/* under construction !*/
#else
/* under construction !*/
#endif
#ifdef __MIPI_RX_ROUTE69__
/* under construction !*/
#else
/* under construction !*/
#endif
#ifdef __MIPI_RX_ROUTE70__
/* under construction !*/
#else
/* under construction !*/
#endif
#ifdef __MIPI_RX_ROUTE71__
/* under construction !*/
#else
/* under construction !*/
#endif
#ifdef __MIPI_RX_ROUTE72__
/* under construction !*/
#else
/* under construction !*/
#endif
#ifdef __MIPI_RX_ROUTE73__
/* under construction !*/
#else
/* under construction !*/
#endif
#ifdef __MIPI_RX_ROUTE74__
/* under construction !*/
#else
/* under construction !*/
#endif
#ifdef __MIPI_RX_ROUTE75__
/* under construction !*/
#else
/* under construction !*/
#endif
#ifdef __MIPI_RX_ROUTE76__
/* under construction !*/
#else
/* under construction !*/
#endif
#ifdef __MIPI_RX_ROUTE77__
/* under construction !*/
#else
/* under construction !*/
#endif
#ifdef __MIPI_RX_ROUTE78__
/* under construction !*/
#else
/* under construction !*/
#endif
#ifdef __MIPI_RX_ROUTE79__
/* under construction !*/
#else
/* under construction !*/
#endif
#ifdef __MIPI_RX_ROUTE80__
/* under construction !*/
#else
/* under construction !*/
#endif
#ifdef __MIPI_RX_ROUTE81__
/* under construction !*/
#else
/* under construction !*/
#endif
#ifdef __MIPI_RX_ROUTE82__
/* under construction !*/
#else
/* under construction !*/
#endif
#ifdef __MIPI_RX_ROUTE83__
/* under construction !*/
#else
/* under construction !*/
#endif
#ifdef __MIPI_RX_ROUTE84__
/* under construction !*/
#else
/* under construction !*/
#endif
#ifdef __MIPI_RX_ROUTE85__
/* under construction !*/
#else
/* under construction !*/
#endif
#ifdef __MIPI_RX_ROUTE86__
/* under construction !*/
#else
/* under construction !*/
#endif
#ifdef __MIPI_RX_ROUTE87__
/* under construction !*/
#else
/* under construction !*/
#endif
#ifdef __MIPI_RX_ROUTE88__
/* under construction !*/
#else
/* under construction !*/
#endif
#ifdef __MIPI_RX_ROUTE89__
/* under construction !*/
#else
/* under construction !*/
#endif
#ifdef __MIPI_RX_ROUTE90__
/* under construction !*/
#else
/* under construction !*/
#endif
#ifdef __MIPI_RX_ROUTE91__
/* under construction !*/
#else
/* under construction !*/
#endif
#ifdef __MIPI_RX_ROUTE92__
/* under construction !*/
#else
/* under construction !*/
#endif
#ifdef __MIPI_RX_ROUTE93__
/* under construction !*/
#else
/* under construction !*/
#endif
#ifdef __MIPI_RX_ROUTE94__
/* under construction !*/
#else
/* under construction !*/
#endif
#ifdef __MIPI_RX_ROUTE95__
/* under construction !*/
#else
/* under construction !*/
#endif
#ifdef __MIPI_RX_ROUTE96__
/* under construction !*/
#else
/* under construction !*/
#endif
#ifdef __MIPI_RX_ROUTE97__
/* under construction !*/
#else
/* under construction !*/
#endif
#ifdef __MIPI_RX_ROUTE98__
/* under construction !*/
#else
/* under construction !*/
#endif
#ifdef __MIPI_RX_ROUTE99__
/* under construction !*/
#else
/* under construction !*/
#endif
#ifdef __MIPI_RX_ROUTE100__
/* under construction !*/
#else
/* under construction !*/
#endif
#ifdef __MIPI_RX_ROUTE101__
/* under construction !*/
#else
/* under construction !*/
#endif
#ifdef __MIPI_RX_ROUTE102__
/* under construction !*/
#else
/* under construction !*/
#endif
#ifdef __MIPI_RX_ROUTE103__
/* under construction !*/
#else
/* under construction !*/
#endif
#ifdef __MIPI_RX_ROUTE104__
/* under construction !*/
#else
/* under construction !*/
#endif
#ifdef __MIPI_RX_ROUTE105__
/* under construction !*/
#else
/* under construction !*/
#endif
#ifdef __MIPI_RX_ROUTE106__
/* under construction !*/
#else
/* under construction !*/
#endif
#ifdef __MIPI_RX_ROUTE107__
/* under construction !*/
#else
/* under construction !*/
#endif
#ifdef __MIPI_RX_ROUTE108__
/* under construction !*/
#else
/* under construction !*/
#endif
#ifdef __MIPI_RX_ROUTE109__
/* under construction !*/
#else
/* under construction !*/
#endif
#ifdef __MIPI_RX_ROUTE110__
/* under construction !*/
#else
/* under construction !*/
#endif
#ifdef __MIPI_RX_ROUTE111__
/* under construction !*/
#else
/* under construction !*/
#endif
#ifdef __MIPI_RX_ROUTE112__
/* under construction !*/
#else
/* under construction !*/
#endif
#ifdef __MIPI_RX_ROUTE113__
/* under construction !*/
#else
/* under construction !*/
#endif
#ifdef __MIPI_RX_ROUTE114__
/* under construction !*/
#else
/* under construction !*/
#endif
#ifdef __MIPI_RX_ROUTE115__
/* under construction !*/
#else
/* under construction !*/
#endif
#ifdef __MIPI_RX_ROUTE116__
/* under construction !*/
#else
/* under construction !*/
#endif
#ifdef __MIPI_RX_ROUTE117__
/* under construction !*/
#else
/* under construction !*/
#endif
#ifdef __MIPI_RX_ROUTE118__
/* under construction !*/
#else
/* under construction !*/
#endif
#ifdef __MIPI_RX_ROUTE119__
/* under construction !*/
#else
/* under construction !*/
#endif
#ifdef __MIPI_RX_ROUTE120__
/* under construction !*/
#else
/* under construction !*/
#endif
#ifdef __MIPI_RX_ROUTE121__
/* under construction !*/
#else
/* under construction !*/
#endif
#ifdef __MIPI_RX_ROUTE122__
/* under construction !*/
#else
/* under construction !*/
#endif
#ifdef __MIPI_RX_ROUTE123__
/* under construction !*/
#else
/* under construction !*/
#endif
#ifdef __MIPI_RX_ROUTE124__
/* under construction !*/
#else
/* under construction !*/
#endif
#ifdef __MIPI_RX_ROUTE125__
/* under construction !*/
#else
/* under construction !*/
#endif
#ifdef __MIPI_RX_ROUTE126__
/* under construction !*/
#else
/* under construction !*/
#endif
#ifdef __MIPI_RX_ROUTE127__
/* under construction !*/
#else
/* under construction !*/
#endif
/* under construction !*/
#endif
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

/*-----------------------*/
/* RX CA Common Settings */
/*-----------------------*/
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


//#endif /* End of #ifndef __EL1D_RF_CA_DRDI_H__ */

